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
    msg.setTimeStamp(0.3490688006512126);
    msg.setSource(42373U);
    msg.setSourceEntity(62U);
    msg.setDestination(30447U);
    msg.setDestinationEntity(243U);
    msg.state = 83U;
    msg.flags = 149U;
    msg.description.assign("ZGANALFYWBKKEDYRJSPJMYDZBSCFQNTXPFRLBIAJNAIZCMDLVDEHLJPQHUPFIRMWNBRBPGXDEQADHXHSSLLZIGUCIUELLPGOAJDGRHBMIWZWQCXHUCXZNTKXSOTWRWPV");

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
    msg.setTimeStamp(0.3529935881081554);
    msg.setSource(14661U);
    msg.setSourceEntity(142U);
    msg.setDestination(59326U);
    msg.setDestinationEntity(177U);
    msg.state = 134U;
    msg.flags = 138U;
    msg.description.assign("QFDHFUENCHHLKBUZDTPKYAFXGRMEPGAJVRAJDXXVETPGHRPYCGFWCLQWCKYQZVYJYJYGTVELYLBTBLZIMWVMOOABCZYQBERKUGCUVQIUVOPGWJAPFCHJIRDKRQOJHGERZMHCWUBMJAWBDSPVSONDTVHPHQJOKLSTONONMSNAEWSWZKDBLDFURBZJZHNLNATQTIFCKIKEULQMFXXPXNWWSIIYV");

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
    msg.setTimeStamp(0.3450823607818122);
    msg.setSource(31669U);
    msg.setSourceEntity(217U);
    msg.setDestination(52930U);
    msg.setDestinationEntity(84U);
    msg.state = 119U;
    msg.flags = 130U;
    msg.description.assign("MUFLYVIXWTKMISQLXFERAGYRDVKZXFJ");

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
    msg.setTimeStamp(0.7547090143021407);
    msg.setSource(12626U);
    msg.setSourceEntity(241U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.9369627675207696);
    msg.setSource(12120U);
    msg.setSourceEntity(230U);
    msg.setDestination(49723U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.1320035515021284);
    msg.setSource(60178U);
    msg.setSourceEntity(123U);
    msg.setDestination(18157U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.5272362396290233);
    msg.setSource(59416U);
    msg.setSourceEntity(32U);
    msg.setDestination(27544U);
    msg.setDestinationEntity(167U);
    msg.id = 57U;
    msg.label.assign("EWFDUASKEGTWAFZALZQQEBRSUSPQDMYJNCMZXYEPMJXSCDVKTXNYGJLYUOVHZNYHRAIBBQFRGSW");
    msg.component.assign("QRMDVOWEIEMZTSDFCZCYYZQJEIQYPBKVFFNCHPJRESBBCEADO");
    msg.act_time = 56286U;
    msg.deact_time = 3123U;

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
    msg.setTimeStamp(0.601216135852389);
    msg.setSource(7884U);
    msg.setSourceEntity(145U);
    msg.setDestination(39911U);
    msg.setDestinationEntity(151U);
    msg.id = 200U;
    msg.label.assign("EQTVCHDCQEXFKJUBATLPGWMIMWOVXOQXFBIQASTDEYFWUQBRICLLZOSUOJLZMIARNMPFJBLTCNGAEHURNKAYRLZXJBOMNENFHXSPHGDLQWNYUIHTWTRUNFXUBXFOYRIUJCMHIWJPKWEQSKCPYYCKUSZMPBPSVHZRLVDZLPGONSOTVJGYAIGAVJVXEWTQDNKMIYDGUEYSIGTZOZRCCDHKJKVOJM");
    msg.component.assign("YCVZGFCLNDNJXRBEWXLFKOHSSPWIAYLOPXUPAYVMFEJBGLVUOHQDTFKQZIESGDVQZBNHYXZAWFGSVBKXAPAJWFOTUQPGARJKBECZHVUNJNCDAKQEIPUFIHJLSTGWKQSOIEUISKDEBRIIXCRNJBPYPMDGWFRDXVQONFIJEUYTMCYOLJHHZXUWGQSYDKMMR");
    msg.act_time = 57089U;
    msg.deact_time = 15955U;

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
    msg.setTimeStamp(0.5455918443172069);
    msg.setSource(47336U);
    msg.setSourceEntity(173U);
    msg.setDestination(11628U);
    msg.setDestinationEntity(193U);
    msg.id = 67U;
    msg.label.assign("YHHXOEADREFFPNTHDEQURMEWZVHPMXWDOXRPEKFFVGICZFBHTKSWVIZYTCKYTVLGTYAEWKUAGQNOWZUKIRCEPWJWCBZOMWYSWVSMXURDZ");
    msg.component.assign("QCKLMLZBRGHDNYALDXLPXFTDERSDMPXHOWXAARJNHPVHUPPTONDZLWREAFFDFTQFBWEVTRYZANCHHRJEVUONPTSUHKZZIAHGCQWRFYEGJTMLOYAKUEDJJMGOOEQUCFCWWSVTPBKCTKBJQSXYDJJEVSGNFBRGVRRCWIQLFSVUOXIACANWMPQBXDGIXGENXKYIVYBBZZYSKVOHLGMNDTOAZTBZPYWIKCKUICSZYHLJGUOU");
    msg.act_time = 5842U;
    msg.deact_time = 20998U;

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
    msg.setTimeStamp(0.07255210807066559);
    msg.setSource(3764U);
    msg.setSourceEntity(83U);
    msg.setDestination(13576U);
    msg.setDestinationEntity(221U);
    msg.id = 142U;

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
    msg.setTimeStamp(0.2957702123260876);
    msg.setSource(50702U);
    msg.setSourceEntity(164U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(135U);
    msg.id = 46U;

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
    msg.setTimeStamp(0.2269376532900006);
    msg.setSource(62641U);
    msg.setSourceEntity(185U);
    msg.setDestination(20255U);
    msg.setDestinationEntity(149U);
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
    msg.setTimeStamp(0.33712707935105946);
    msg.setSource(6668U);
    msg.setSourceEntity(28U);
    msg.setDestination(21522U);
    msg.setDestinationEntity(14U);
    msg.op = 127U;
    msg.list.assign("ZOVPRXTHUFFBSWKCNURTODGOKEQMLJJPLZCWIYRGBOSMLXRJDLZTJZPCSVTYYTVYNCLREXHYYHRQSNYQPEBJXJIV");

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
    msg.setTimeStamp(0.5660589888800364);
    msg.setSource(5859U);
    msg.setSourceEntity(123U);
    msg.setDestination(28437U);
    msg.setDestinationEntity(78U);
    msg.op = 126U;
    msg.list.assign("IPWXRPEGJPWNLJQZIISLWIGNSWJBPSHUZLYKSLXKWYBNWVEVMJGUMICHSDDDBFOEPUVQOAVNVHNCYTJFBJQGXEZAZILMOPUTENKRKPWEBAQDMKTTZRXMOHLTQJAQMSTAQGUKLHBZFZFAMNCOEDSDJQJETUCZDROGRVHBHAWFROCULTBXUEORPVWKXKCUYGCOAIJSGKICRVFAFGCYQDYRTHP");

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
    msg.setTimeStamp(0.6649152221420538);
    msg.setSource(52457U);
    msg.setSourceEntity(119U);
    msg.setDestination(59709U);
    msg.setDestinationEntity(215U);
    msg.op = 115U;
    msg.list.assign("VTKPUIASVFOPSVJTQWUELOLJINNMCYWVBWYDUHWJBEBARPTZJUMNOGQDKCZJKUNCAYRJCRSQIVZBZVYRCLZHBFSVTYIWZBVTWWIKQGDXEFMHGPETYMHJQDIHHXGOTEOLLOBCGHFJSAZQFSOFYNEKDPPNCSMBUMJQLARLSZTKLWFFGQSQGNWUXIOCRPIRGN");

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
    msg.setTimeStamp(0.065949792896145);
    msg.setSource(65456U);
    msg.setSourceEntity(31U);
    msg.setDestination(31497U);
    msg.setDestinationEntity(54U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.947148015865763);
    msg.setSource(51746U);
    msg.setSourceEntity(127U);
    msg.setDestination(46234U);
    msg.setDestinationEntity(28U);
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
    msg.setTimeStamp(0.7137334003973956);
    msg.setSource(15055U);
    msg.setSourceEntity(113U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(153U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.5314199223764331);
    msg.setSource(60231U);
    msg.setSourceEntity(108U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(81U);
    msg.value = 251U;

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
    msg.setTimeStamp(0.13329137614081799);
    msg.setSource(32822U);
    msg.setSourceEntity(57U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(23U);
    msg.value = 196U;

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
    msg.setTimeStamp(0.11176972922663475);
    msg.setSource(14912U);
    msg.setSourceEntity(138U);
    msg.setDestination(50180U);
    msg.setDestinationEntity(140U);
    msg.value = 87U;

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
    msg.setTimeStamp(0.0461237696626805);
    msg.setSource(1052U);
    msg.setSourceEntity(176U);
    msg.setDestination(17530U);
    msg.setDestinationEntity(36U);
    msg.consumer.assign("JJBEKWWJJYTPIXFTUAFRBKCOKSNVYGHJYELFKLTYQZPSONMZYPKUIKFUTGMKLKYRRFDWRERIHDGJEYDZOAZERTLTNCCIDNAGWCFWSBOUFNSDVMIEXTQXVUEUDLNQACPNHHSMQPFCWCEUAWPQYASXZLVDFTHHQTQFWIJGBVRGPKQ");
    msg.message_id = 62594U;

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
    msg.setTimeStamp(0.4811315711205203);
    msg.setSource(19470U);
    msg.setSourceEntity(208U);
    msg.setDestination(23225U);
    msg.setDestinationEntity(227U);
    msg.consumer.assign("FONWIGAJDFZAHGSUCLTRQDTEHGHUFCMEPIARTFUMEWCNAZJBPFRIMSIZLLAIZYRNJWSQMYSWXJUIAQVIPEVCSBVWMQYOTFXHEUALPKROYCXGYQYXJRHOWASDKAZBRJDYNGQBGUBHESSCNLKOMVRHIKNKLMQLNXBDQDQTYHLGTDJHOIDSKFGVCLMXPKNOEYRUW");
    msg.message_id = 64328U;

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
    msg.setTimeStamp(0.822857331578905);
    msg.setSource(60679U);
    msg.setSourceEntity(11U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(247U);
    msg.consumer.assign("TRWVTGJELNOBPEDTJEMBXDOKFHQSQCZVGIUDIGEXMRJDEOMETZSARRJAKUPNAJAMZWGVOFAJSHHBXBJGAGBXR");
    msg.message_id = 8409U;

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
    msg.setTimeStamp(0.0881171973534356);
    msg.setSource(6700U);
    msg.setSourceEntity(187U);
    msg.setDestination(27496U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.7080503392677856);
    msg.setSource(40421U);
    msg.setSourceEntity(49U);
    msg.setDestination(54002U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.48207111995347185);
    msg.setSource(7363U);
    msg.setSourceEntity(104U);
    msg.setDestination(8838U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.7598834340142371);
    msg.setSource(20156U);
    msg.setSourceEntity(251U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(246U);
    msg.section.assign("UDWXKJSNGFDDKIYWOSSHHVAVBYDIPIQEPHREWLRVLPTXLBNJXTZMAJJACHCRZCVHOCVGAENPWGHKTUUGAIMPOHDIDZSXYJMNZANKMFMZGFCSMIALLWZQLQTLKZSKQXAXQVIQBFJGTUXJXGVOFUFAYDFRUGTEYUWSTKUJMTXHCNDYEUKPOBWHTOWMPORZECWBFRNBJIIUEKYZEOMRPGPHRCKLB");
    msg.param.assign("OEQKLNOBLWLLVXEOAD");
    msg.value.assign("EQZNPJOGXHBOLJLSKXITBTKCTHMHSFZABHDHKERNBLXVFRTUEPNFWYAQGSKPFKHAWMIWIAQDBRHLOEQVAOVUOCZXNCWIUTWOXQNVRXBYXVNUYRGPBPNSKWKTIJTKAZXDJETFFDESMDRTJESMPOMJHUSAUIDGVRMZOLCQEIMBVUZJGRNEVXLQLWQGARYXYWGFCKBYFCWMSVPLHLAIPNCFZY");

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
    msg.setTimeStamp(0.3564628486113883);
    msg.setSource(36565U);
    msg.setSourceEntity(188U);
    msg.setDestination(25713U);
    msg.setDestinationEntity(219U);
    msg.section.assign("RJCYRFMNAWVRIDHRPMQUQWQTKLXATAIGJWHAFMDRDXTMFIHKPEQMRPNLAVOYMZKDDJEAZUKIPBZYYGFPQJDVZZGSSKKGLYLCWYNFSGVQBXXVAUVDTTBXBQQJTMDYDLEHPEBPKLOXGCCNUSVCTOCUFXWMOROREQZOSIIVUBRNTFJPHEUMKOLLJSENUGLWSQSMYTO");
    msg.param.assign("VQXXETGYRKTDJVOSYEUBSNLUI");
    msg.value.assign("WJJVFRBLEDGOITOFXJGDHNSPEXVHKPXLEUUZEACWLLBSQNAVNROCQQBU");

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
    msg.setTimeStamp(0.16655813428861033);
    msg.setSource(56981U);
    msg.setSourceEntity(151U);
    msg.setDestination(47708U);
    msg.setDestinationEntity(87U);
    msg.section.assign("AZOEUOMLRWMCUHCTVNFWJYESVFQSZPQJMMRTXXPDJMFVNQCEYSYHTOTVWANGIFNHHNQNBNUCVKLIRLSWZYQQDDXXISBMYOIDBROUIIYXSPKRQXTWMZPNIBPPJVDKVHGNAGVCXFJRFCCRCOPEUGDYGIKUNBEPTXTLDMUAHZLHZTSOBJQCZQLSDJZQTOHLOV");
    msg.param.assign("ZCWSSHLBWDQHHPOUKBXOIBPYHOUMPDGXLGOFALCVAWJFTIRYABKRYKIRHGCTYEFMHZXZPPNHAJGUGRS");
    msg.value.assign("BKWPJHCSCPIDOLBMOPMZQZUVWRPVUYETELJOWSWNATDFVDZLCODBANTKZXYOEDIJXUJEQQJGZUCXSWVYMZEDYBYMICHLJGFODSIPZIRJVUFBPXAAWGGJNSXBWVEVXXFVOHPMYSLKPASGKJQVCITRRYBPMIFNBCWASMIHKNKGCQTRHDQOHYLMYMKLQSUSFXEKZWUNFBHANUXQTYRFHNM");

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
    msg.setTimeStamp(0.4678955858924847);
    msg.setSource(38007U);
    msg.setSourceEntity(78U);
    msg.setDestination(16588U);
    msg.setDestinationEntity(132U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.8480249511722728);
    msg.setSource(2903U);
    msg.setSourceEntity(174U);
    msg.setDestination(59447U);
    msg.setDestinationEntity(162U);
    msg.op = 234U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("GWKHMJMWWIGIUSTUCCBYUJYQOSXLBGYWLHCARTAKGJBQXPZOOHCATPQMPZWZZKZLIQVWMEBTEJEBVDZNKSOVRLFSPEEDVEWAVTXIZAIGJYGLUXNWYORYLNDFRNFXYODADPRHRQKJFFA");
    tmp_msg_0.param.assign("BHRPONNRCJQQKMKOWYKGUBFVGVYGZXAXPGTRVUPJQEEXKWYKOTBJHEDPFBVWDFRJJAEYTLNNIJQGXVZQWHNPXCAYSBHVPZPELSDANKABEGSMWRYJEILMKTFHVFIMLDYGOEXZXDQCIQGRUDUBWDGSPLCMZSZGTATQMLMEZPSMOKHNHRISCOFIVJFWXBURFNCTWI");
    tmp_msg_0.value.assign("UBTVFDUSMQLRRCVHOHQSFPUFFADJLVQMVOTWKAAPVSQRWYZIFKEKTZKIZQPCM");
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
    msg.setTimeStamp(0.6944431234188438);
    msg.setSource(29331U);
    msg.setSourceEntity(67U);
    msg.setDestination(6985U);
    msg.setDestinationEntity(43U);
    msg.op = 180U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("VTVCJPPMPNGDJIMZGPSOAGKWPYTPMLOPCSEFCYJABDSTOXGKMLVLCBTPGWZDWWTENTSABOUUXCYMAHMOJNZKEFJLEWQXFKROOHOMFVKUDZBDEQZDXFZXSGIVMEYJZYUBRFAXQLJVCFJHWSPQNVNBZALEKWXLSAACIUMFRZRKHRGDESJOIPUVMQGQGYLYLYBDSRQRHFKNKRHGNFCUY");
    tmp_msg_0.param.assign("VBPJSREZXBOBAGWFIKEHBZGIZQQRWTUTAOAAGSMYUCJCOXQQEVMVXKFJFTXNKOERJECKJHGXFHDDLCTIFAKPIYQLGISKIZHYQYHOUGYYQAMAROLRSPJXMZPWMSDALPLRJIANOCSBZFWJGEPCISHCNBEKDUDDHVUVKHHZUPYQSLQ");
    tmp_msg_0.value.assign("GZHUFWOWZTCMLUFBFYKCIFUHASWSJGESIEJTQEMQYKJDGZCYCFIJUKVFRXXULBZBJGAMXRRPSZLWXBOEGWHGKOVLAZELXRJONPRAUUDVUNJVIWCZPPPHQBHNDYYECLKNEJXLBIIEYXKAMKXVIGHKAVBSJQSEYYVELHTTBLRDMIFARDVGDSRZORGILTQBYDFNGXM");
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
    msg.setTimeStamp(0.31674372966116426);
    msg.setSource(59588U);
    msg.setSourceEntity(172U);
    msg.setDestination(26949U);
    msg.setDestinationEntity(211U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.09234137679405863);
    msg.setSource(37567U);
    msg.setSourceEntity(70U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(172U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.49026129682035);
    msg.setSource(14486U);
    msg.setSourceEntity(70U);
    msg.setDestination(62698U);
    msg.setDestinationEntity(137U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.25515522582760786);
    msg.setSource(34770U);
    msg.setSourceEntity(244U);
    msg.setDestination(34254U);
    msg.setDestinationEntity(4U);
    msg.total_steps = 133U;
    msg.step_number = 25U;
    msg.step.assign("GPMOGNXTZTMOUVPZXQRYVARHFVYPHKHJJFBQDPICKDLLUMUJMOQLJQUGITBKMBYKPIRLKZDU");
    msg.flags = 168U;

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
    msg.setTimeStamp(0.44769332378142324);
    msg.setSource(24679U);
    msg.setSourceEntity(109U);
    msg.setDestination(12925U);
    msg.setDestinationEntity(121U);
    msg.total_steps = 158U;
    msg.step_number = 216U;
    msg.step.assign("EWCTCKPSPXDBFOLZNQTMQALJKJIRCJUKKJZCMLUGHEVBMPWNXDBGSDBMGSBOTPSFGXIEHNOVHYJRJOIFXEEATEYURLWAJOIDARIJRXCVBDNRIZNBGDOAGFVYRYGXILZOOCGHDU");
    msg.flags = 211U;

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
    msg.setTimeStamp(0.7482639954058452);
    msg.setSource(59484U);
    msg.setSourceEntity(224U);
    msg.setDestination(11986U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 184U;
    msg.step_number = 209U;
    msg.step.assign("QLKJVFDKSGMKRQVUWDFWBJYLNMPQONMQQNNTAOTRUEXOLXEAQYBSDMYCSZOILWICIDYYBMZGSJERDUFBRQDWVXTDRBLCGDCCTPRHMGZTJLKZNCHSXAYLAXKKWHIOPXKFCPMPHGHMXXRTCERHAKPUMZIAIAQWEGWLSXXDJKZPHVVLZTUIEBYFNIONIVBWVCFHVRNRVUBKJEJAGUYBCOUFFAHZSETYZONSJQNPEZGTQJYPUSHOFVWLGDETG");
    msg.flags = 158U;

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
    msg.setTimeStamp(0.3460504046448343);
    msg.setSource(6380U);
    msg.setSourceEntity(127U);
    msg.setDestination(52981U);
    msg.setDestinationEntity(130U);
    msg.state = 53U;
    msg.error.assign("YZREYDJYCADFDFRKWHELVMYWNUTDWWSQAHIZXKVUF");

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
    msg.setTimeStamp(0.2098966699751823);
    msg.setSource(14327U);
    msg.setSourceEntity(67U);
    msg.setDestination(61224U);
    msg.setDestinationEntity(87U);
    msg.state = 148U;
    msg.error.assign("CPPCQGUTSUBRPCLWXGNGTJQFWEHOCAIACTQEBUKIDDFGFKZYXYXSWOILBZVTNVQYILVFMAILLQJDLWMEEEHPPQBKRRKWTNVUJFSWYCAEQZIDNRTTGXVXMDCSVYPSBFONAARHLYTYEXJKMORKBJRJMUPZVMOYMPVWGLAZQZDIHHBHNNBUJCESLSPEKZSZXDKTGQDHEYNW");

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
    msg.setTimeStamp(0.21204436026340057);
    msg.setSource(39496U);
    msg.setSourceEntity(118U);
    msg.setDestination(44078U);
    msg.setDestinationEntity(70U);
    msg.state = 143U;
    msg.error.assign("BPXPESYWAONSGMCNOUJXKERBLBJZXDRQRAVULPJYBOJRSVHFPFHNGKCCWZPAAKMYUEXGKEULYQZRQIQAIWLSAOFHQRQOTEZCZMVADJTFGPBIGHAMCXUZLAOVIM");

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
    msg.setTimeStamp(0.27064195702811067);
    msg.setSource(39053U);
    msg.setSourceEntity(198U);
    msg.setDestination(12557U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.9979022246039139);
    msg.setSource(44732U);
    msg.setSourceEntity(246U);
    msg.setDestination(64655U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.9427630422002595);
    msg.setSource(47638U);
    msg.setSourceEntity(147U);
    msg.setDestination(33121U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.2152960217437888);
    msg.setSource(50527U);
    msg.setSourceEntity(221U);
    msg.setDestination(154U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.003907876030966317;
    msg.lon = 0.8664243176994353;
    msg.height = 0.35592266275627116;
    msg.x = 0.44184085215151625;
    msg.y = 0.8836976191844247;
    msg.z = 0.889442727606519;
    msg.phi = 0.6295979474180854;
    msg.theta = 0.07081473699824414;
    msg.psi = 0.2997869439485731;
    msg.u = 0.2518529948277797;
    msg.v = 0.24944475755920303;
    msg.w = 0.4187298355404152;
    msg.p = 0.5622961945135311;
    msg.q = 0.41112273214249817;
    msg.r = 0.9054034862048764;
    msg.svx = 0.33579631698176704;
    msg.svy = 0.4632113622905253;
    msg.svz = 0.8199124148141325;

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
    msg.setTimeStamp(0.3674803019853582);
    msg.setSource(36289U);
    msg.setSourceEntity(6U);
    msg.setDestination(13033U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.5070824206725092;
    msg.lon = 0.23510119540293317;
    msg.height = 0.102539219526941;
    msg.x = 0.2720781739223692;
    msg.y = 0.04906882355636366;
    msg.z = 0.14028920276795875;
    msg.phi = 0.09556367308752411;
    msg.theta = 0.15450280662193605;
    msg.psi = 0.43284141162449563;
    msg.u = 0.42259234701540216;
    msg.v = 0.20254802634087166;
    msg.w = 0.8944061269530432;
    msg.p = 0.14445694634317996;
    msg.q = 0.5184705828453896;
    msg.r = 0.601289415825338;
    msg.svx = 0.36312317949562;
    msg.svy = 0.2427618225399979;
    msg.svz = 0.8097845272303695;

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
    msg.setTimeStamp(0.4741453713431618);
    msg.setSource(51107U);
    msg.setSourceEntity(111U);
    msg.setDestination(12711U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.485109256339592;
    msg.lon = 0.8065970299608153;
    msg.height = 0.33101501866643124;
    msg.x = 0.3037540384222326;
    msg.y = 0.1575207564994231;
    msg.z = 0.6863026372971478;
    msg.phi = 0.9156490284088613;
    msg.theta = 0.18379151700641705;
    msg.psi = 0.760493181838061;
    msg.u = 0.9181270023260021;
    msg.v = 0.8405782166090824;
    msg.w = 0.014265452270634582;
    msg.p = 0.733471333867547;
    msg.q = 0.950240544753069;
    msg.r = 0.8712861313696785;
    msg.svx = 0.552040637183134;
    msg.svy = 0.25192567455223436;
    msg.svz = 0.18906204780352776;

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
    msg.setTimeStamp(0.7420659033491738);
    msg.setSource(30497U);
    msg.setSourceEntity(226U);
    msg.setDestination(55517U);
    msg.setDestinationEntity(126U);
    msg.op = 239U;
    msg.entities.assign("VUMSZTJFMPBWANYZQCDIQNXUWCNBTZYCCLSSNJBKRHOLNDVZPMBIUPIMGIGONEDTDHVCVNIQIMKJOBVVRVARTHKZECFPMGVTSCKQHLDMNGAHQFHVSRKRDPJHZY");

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
    msg.setTimeStamp(0.4587991033586122);
    msg.setSource(58001U);
    msg.setSourceEntity(99U);
    msg.setDestination(29576U);
    msg.setDestinationEntity(155U);
    msg.op = 126U;
    msg.entities.assign("OKYMOWFEERYNFMZNLUYZYAZVBIWCPMSMSXDWNPEJZUXZPQQALJFDXUNQCSUBUVSQPMHXHGWOGJKQQYJCFKRERXFGPTVCQIIXBDUKKJAN");

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
    msg.setTimeStamp(0.3157571216967896);
    msg.setSource(49180U);
    msg.setSourceEntity(199U);
    msg.setDestination(38389U);
    msg.setDestinationEntity(185U);
    msg.op = 12U;
    msg.entities.assign("RICPZCKQSDJXWSGSNKURAHZVLXRWATANCLBIJUBLBKAITUADCZMUCRNZLLDUJVEOXBWKZHRQUPINJTWPQDUQLFPGIKEGDEDZJVOWEFOYFGUSBWPXTFZQCYDDYIWWQMNKSVXNVPBPUAGTBTWWIYJHMOXBVVZILBFCEVGUMXCHONMPTMISFMMQPFMXJHCSMHGOVZKNEKKCXQJZGPFQYFFEEAJRSHRLYETDKN");

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
    msg.setTimeStamp(0.744989609057055);
    msg.setSource(23641U);
    msg.setSourceEntity(180U);
    msg.setDestination(15728U);
    msg.setDestinationEntity(42U);
    msg.type = 252U;
    msg.speed = 483U;
    const char tmp_msg_0[] = {32, -32, -33, -49, -10, -26, 51, 34, -122, -109, -105, 83, -37, 105, 96, -61, 61, -71, -112, -42, 84, -43, 76, -35, -70, 43, -57, 26, 25, 63, -124, 92, 84, -55, 109, 34, -64, -119, -33, 113, 44, -33, 14, 12, 73, 37, -12, -5, -113, 105, 32, -14, 14, -25, -100, 117, -73, 113, 19, 0, 121, -128, -93, 34, -97, 80, -125, 83, -7, 124, 37, 90, 79, -69, 119, 104, 21, -118, -3, 72, 80, -38, 37, 114, 15, 104, -116, 96, 116, -90, 99, -11, -78, 68, -112, -109, 3, -113, -112, 83, -28, -88, 16, -2, -81, -60, -77, 33, 111, 11, -109, -60, 62, -45, -107, 14, 117, -59, 104, 66, -72, 95, 107, 47, -119, -55, -67, -2};
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
    msg.setTimeStamp(0.6581625765191662);
    msg.setSource(24468U);
    msg.setSourceEntity(86U);
    msg.setDestination(4651U);
    msg.setDestinationEntity(201U);
    msg.type = 224U;
    msg.speed = 60060U;
    const char tmp_msg_0[] = {-107, -65, -125, 16, 57, -106, -41, 48, 124, 93, 103, -103, 59, 64, 62, -19, 56, 11, -95, 96, 61, -2, 38, -121, -15, -49, -95, -54, 111, -41, -90, 6, -9, 118, -60, -36, 50, -7, -90, -98, -20, -63, 120, -50, -49, -70, -82, -23, -8, -112, -84, -12, 108, -87, -42, -32, -115, 48, 96, -55, 98, -98, 35, -116, -19, -43, -104, 113, 108, -8, 47, -6, 74, -4, -105, 87, -110, -96, 100, -97, 54, -80, -34, -62, -36, 23, 66, -36, -64, 0, 34, -115, 45, 43, 11, 27, -7, 80, 107, 5, -69, 113, -110, -37, 91, -75, 47, 45, 45, -111, 123, 15, 36, 11, -65, 112, 98, -113, -16, 24, 12, -55, 72, 79, 119, 49, -78, -2, 97, -19, 123, 101, 72, 10, 78, -44, -102, -7, -101, -126, 47, 28, -80, 99, -32, -101, 106, -39, -71, 104, 87, -40, -77, -29, -13, 5, -55, -118, -43, 33, -72, -35, -62, -72, 34, 104, -103, -30, 114, 119, 116, -122, -122, 124, 62, -9, 64, 90, 117, -36, -124, -46, 64, -30, 97, 2, -88, -29, -77, -28, -99, -4, 40, 28, -125, -80, 29, 51, -67, -65, -67, -32, 50, 31, -9, 16, 110, -49, 97, -97, -88, 83, 38, -118, -111, 5, -17, -95, 56, 81, -103, 103, 71, -8, -5, 122, -54, 96, -33, -44, 80, 54, 126, -118, 72, -26, 18, -32, -29, 41};
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
    msg.setTimeStamp(0.03810369499105071);
    msg.setSource(63826U);
    msg.setSourceEntity(96U);
    msg.setDestination(59161U);
    msg.setDestinationEntity(128U);
    msg.type = 110U;
    msg.speed = 44910U;
    const char tmp_msg_0[] = {-18, -24, -35, -86, -108, -41, -28, 123, -69, 69, 126, -39, -81, -101, 22, 65, -17, 33, 100, 98, 108, -19, 104, 88, 109, -41, 60, -84, -75, 78, -118, -16, 35, 69, 37, -21, -59, -29, 105, 61, -3, 16, -96, -79};
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
    msg.setTimeStamp(0.6283863464540076);
    msg.setSource(32514U);
    msg.setSourceEntity(182U);
    msg.setDestination(41581U);
    msg.setDestinationEntity(241U);
    msg.available = 2178920857U;
    msg.value = 244U;

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
    msg.setTimeStamp(0.5492097069177753);
    msg.setSource(62074U);
    msg.setSourceEntity(14U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(36U);
    msg.available = 1383732300U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.03844617974370812);
    msg.setSource(52571U);
    msg.setSourceEntity(92U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(152U);
    msg.available = 1824861220U;
    msg.value = 64U;

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
    msg.setTimeStamp(0.4368111661373274);
    msg.setSource(52871U);
    msg.setSourceEntity(24U);
    msg.setDestination(35420U);
    msg.setDestinationEntity(172U);
    msg.op = 252U;
    msg.snapshot.assign("HTSORWALVQTFNKVZIYVHLEXBDTIUANXSXKMUJOVFSIIYILBTSZNXBYCJETEDLMTIRXKPUOXETODZWMZBUADCFMVQVDQWRGSWCGLHKKWJYIGLPUIJWQFWPRKMZWCWGBYZHOPCEYBDOEXJPPPCSYAYGRFAOJZAHNSJ");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("SAHJIZNQSWGSEBOWRFZTCSFEWWWZDMAVLHPEJMDEFBTPMXCCWCVBZTOFNJQKIGIQEPOJUROLKKHRTNBGGDAEBLTCDWRPICZWVZYNI");
    tmp_msg_0.visibility.assign("QJJGGQXGXGNFTRWQQQDANSZVRRRUUEICEOZXOIFAVKHBCYUSILQCASMEHXFWYXIWDCMWBLJRADULEDFEUOHSSEQPSKKCBJICMMNGFJHFKFOKSNUEZQETEPDATUZRPRKMOQTJPAKVTNOHZMYWEDOURNYDABVXBCBMIJJHGCHIXWPVCAGZHNPANRVYZUDCPJLLUWYVDLTJQYMHGKKORZBTNPVVBFIIWTTYBMXSLPYOZ");
    tmp_msg_0.scope.assign("EEDJFUQDTTECUCINBQGZINAJDKRNUWQPJLMSXEFJZMBTOULIAHMTITKYSYWUXMFAKKVXLGNQECZPVTHLKCQPSPPXGMZUORJAFVIQQCWNZXCNIFBRCTVPSDFQOHMOORAWDPFOJXENAVSRKZHCPJSRGOSWCYHRFENZLVEJSZAKHKBJBTBLMYYBIRATRGJKBOEZXWBUSIUYLLAFGWKHNQHLDIVXWPWEGFXIYVGNYBMQRDMMWODVACUGYZOY");
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
    msg.setTimeStamp(0.2418054874086003);
    msg.setSource(41503U);
    msg.setSourceEntity(224U);
    msg.setDestination(23916U);
    msg.setDestinationEntity(33U);
    msg.op = 79U;
    msg.snapshot.assign("ZQJYYGCOADMIDHAPZBYBVEXJUSMJOPSBKFRYTFSZFVCJBQLIJXLTKMTPUWGXDUWAXVSOMQAAWOZKTNIIIJFYYAASYUGWPAXCBRFPHDPXGKFVMQHIOOJHUMHDXNTCTDVFCTMFNLSEQQFNMUMFUHKBLNEDHRXHRXTGRTSNPAROBW");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8908731838103042;
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
    msg.setTimeStamp(0.45099551034430685);
    msg.setSource(49769U);
    msg.setSourceEntity(151U);
    msg.setDestination(64672U);
    msg.setDestinationEntity(250U);
    msg.op = 8U;
    msg.snapshot.assign("MGIJLYROLQQLGERANBPPIKXNOPQCAESIZOCKDTHZUQPBTXECSELOQAYDAPAFUSDTRLUYRRSPDOADSNCTMSRVZZQPBYLLDJGYQIHMKCBFBPGTMKTZZVXNEVUXZLUUEBUWKHWYSYIKAC");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 215U;
    tmp_msg_0.entities.assign("SQXEYCSMOIDJSYHJYXTWOBVUMTOJVFQEUEWPGMUTQCIDAVXHKZTOGAMASWKUOMARGHIFYBKAPFMVEJTVWNHQKCZSDTVKLNTEAF");
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
    msg.setTimeStamp(0.31731166743441364);
    msg.setSource(2713U);
    msg.setSourceEntity(139U);
    msg.setDestination(5631U);
    msg.setDestinationEntity(81U);
    msg.op = 201U;
    msg.name.assign("EAVNNBSHRWCNVOPPQZPQOCJYPGLCEXYGTRPZZCITYUNKRZTRMCCDQBYTQNXSESWGZNJGJVUUEECDEISAXRGBVSZGIDVKITLVYZRDBIODAYAWEADMXAXZWJFPRDHHUJVWOHIXJWSHPBDFMFLMGJBYQKVJQSILORMBXTZUFWLNSQHMEOUJWKHMDQOLOFCXBAFFAVYEOOQIKAXJNNIFTXWTTCDGPLUKLKUT");

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
    msg.setTimeStamp(0.433682698021704);
    msg.setSource(30973U);
    msg.setSourceEntity(224U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(185U);
    msg.op = 14U;
    msg.name.assign("ZDSHDYNPZJQHK");

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
    msg.setTimeStamp(0.6278386353342136);
    msg.setSource(15067U);
    msg.setSourceEntity(152U);
    msg.setDestination(19923U);
    msg.setDestinationEntity(101U);
    msg.op = 209U;
    msg.name.assign("QLGZJMYXPUYBVPVOPNIFZAECKXGCRYIBVLVTPQCMOWOLPIDSKDZJVHNGOQJGFDXKAQOBXSFXYTJMKNWUBZSBDJJUBUSIHQVUMMDHJGLUOYFNEAMHSYOSMEKTDILBCDUSGLIWBPGTREJTBS");

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
    msg.setTimeStamp(0.2739490306325042);
    msg.setSource(22023U);
    msg.setSourceEntity(225U);
    msg.setDestination(34318U);
    msg.setDestinationEntity(154U);
    msg.type = 35U;
    msg.htime = 0.312775668997738;
    msg.context.assign("FXKJDTXNIDZLIXQMCECGCHIZSMLBVMHFBYQRAUAKNLSYAYVLSTKPRCQWN");
    msg.text.assign("FKOPNFKGLZXECIXEXANOYSTSKLKHRTPMRRINDQEQVFDSKPSNRDKIJOXAZOQHIEAPUMZGMWYVSZQVLCHDIRAHCZVQIJKPPRWIOZDCLYHFTUWGMTZBKCTBCXWOUYOMUEZOW");

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
    msg.setTimeStamp(0.23352443597105632);
    msg.setSource(47268U);
    msg.setSourceEntity(109U);
    msg.setDestination(8929U);
    msg.setDestinationEntity(40U);
    msg.type = 223U;
    msg.htime = 0.12329996124592191;
    msg.context.assign("EZNQOVUCTRIOSHHSIICFWNBLOKNITXLGZPPVDMWFKIOTUVZGKPMURQESVXYEAVJRJDULLXPTFCMKJCXZBTDDAEAKEFLHXWQHSEZJWRSZCYXTQHRDICYUSOYAMGQTJQOKYCLHDIWBIAXCJMBQUKGPKGAWVLGBVECEIQANRDTWNZXOYSHVJZRUFTNLMKGBDWBHAQRP");
    msg.text.assign("NDECKCAYQWCPPUBZXAQEAXHVZFRZCTTKSDHVLV");

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
    msg.setTimeStamp(0.9081790165589193);
    msg.setSource(7941U);
    msg.setSourceEntity(198U);
    msg.setDestination(10492U);
    msg.setDestinationEntity(55U);
    msg.type = 31U;
    msg.htime = 0.9515153140391998;
    msg.context.assign("SFWODZQIMPXCVTZGTRZWMRCVTPDBBZWTNYXFPIEFYPZIJEIERWAOCCHGKSJBSZHDFEMAHBGUKKYFDJUKAQQWYXCYSEPUXONZNCXQEKHUEYQYSJVLAUJRKEBSTKLRAWVHFXVOMBALJHIDRBWLTILFGTVZJN");
    msg.text.assign("KRZIATGJREUYHIIMCFGKEDSEIYSDRQKUFSGXQVLUUVMJLVVUNLZJTMHJJISIEHXPSIEIJHWBNKFAMSNMKYWDOGOYXARGTTHGPKWCWBLTWFXDGJPSERAAUMEOPVZDPASZKCAOEBNCMJBMQVWYZXNH");

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
    msg.setTimeStamp(0.24527856006951998);
    msg.setSource(63173U);
    msg.setSourceEntity(222U);
    msg.setDestination(44641U);
    msg.setDestinationEntity(50U);
    msg.command = 80U;
    msg.htime = 0.18818044793521405;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 37U;
    tmp_msg_0.htime = 0.11784211012589596;
    tmp_msg_0.context.assign("WCCZJLAXTCHJDVPXRKARGYBUDBSBIDBVHAWHLTLNUHADBIBRIYXVSIKEBETTYQPUJJFOQOVAVKZTXZVXWNMIJDONJFEIKCZHUGZDE");
    tmp_msg_0.text.assign("OSJPKRYYJNGEHQGCQHHDFEVWAGOHZRIWXQRPRFIHWUXDSDBJLGMRLMOUSPGQYDKSTCBXLTNXZVLIZALXIDUWYHMAAPNLMMDITJZNVVEHSLVKSNQEKOTALGDWNUSCKLEMXQTNBRAATFBMJYPZVZYZEZFDEUGZJFRHUXAXTI");
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
    msg.setTimeStamp(0.0775848501903248);
    msg.setSource(54777U);
    msg.setSourceEntity(184U);
    msg.setDestination(7309U);
    msg.setDestinationEntity(197U);
    msg.command = 6U;
    msg.htime = 0.6887745091466101;

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
    msg.setTimeStamp(0.43037417986423565);
    msg.setSource(15058U);
    msg.setSourceEntity(16U);
    msg.setDestination(51836U);
    msg.setDestinationEntity(226U);
    msg.command = 171U;
    msg.htime = 0.6830921020529057;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.htime = 0.24700056876514465;
    tmp_msg_0.context.assign("HUSVHFZBQVNSIVYTEMADUINVADITPJMRLOFZPVKHCOSKKWNLKHZ");
    tmp_msg_0.text.assign("IIQMYCMYCZGKRIWKUAETHJBIOEKPPOQMUGUJZNXCDTYMRCGUMGUXSGPVIFFTRUQJXDVQIAEUXVOLXBROABJMFXSALXLCLEJDQCTBHXDNFZNWCMLNOQEBKGZAWWJHFBYNMCZNGPSKXKDVSDLSYAKHOUVBTIGLVHDYRFRWMHPOVFKPYAEAUZDORBFNHVDMEAIVOPJBBFZGPPHXESJIQJZH");
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
    msg.setTimeStamp(0.2136869929039903);
    msg.setSource(10973U);
    msg.setSourceEntity(164U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(75U);
    msg.op = 98U;
    msg.file.assign("TCHVULNBRNZEFNNOZHHBGJQJHLITLRWYVYTPUXPMMEPDQSKXTNZQQYDYFWLLBKXBFQMVMISZPFGAJHDZWDTXCYASAEVCNJPICRBJAMCSGUBYIDXHHKIUSROVNUMAQFVLNDAZNDSGPYEELKDRWOFXYBGKUIYMWIEWAWZEJTWGORQRSSCWJLRPUBSHJG");

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
    msg.setTimeStamp(0.4518234830949952);
    msg.setSource(40524U);
    msg.setSourceEntity(228U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(28U);
    msg.op = 74U;
    msg.file.assign("LDRYOMGKCZKIRQFMHIAFAFYEZQNVPSNLITIZUWRZCTVLOKMPOWHWBKMYXXNBVUBHLVRUTVYBYNUJEOKWQUEZTRCHSMPTMSCGKIJKEKTUFPHGSOCVDRCDJOAWWAPGUDVSXDAQELIGGTNYYBJMXSGBAPWOSVQZQOIHJXFEZWUCWZJXPDBRMBQMDDZPRGTXYB");

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
    msg.setTimeStamp(0.4434336573874351);
    msg.setSource(526U);
    msg.setSourceEntity(88U);
    msg.setDestination(56739U);
    msg.setDestinationEntity(16U);
    msg.op = 122U;
    msg.file.assign("MDTYDXMIKSDGNAGODSEAEHBOFPOCZDSRAUGSNVIRKMDMHFLWKQKPGUGCZWFCJQPSJQDRZPUIIGLCRATDJHFBXCPXIGYJ");

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
    msg.setTimeStamp(0.6316379363701907);
    msg.setSource(3492U);
    msg.setSourceEntity(99U);
    msg.setDestination(46381U);
    msg.setDestinationEntity(190U);
    msg.op = 106U;
    msg.clock = 0.20582984456012687;
    msg.tz = 77;

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
    msg.setTimeStamp(0.08146395947086205);
    msg.setSource(13174U);
    msg.setSourceEntity(159U);
    msg.setDestination(12349U);
    msg.setDestinationEntity(173U);
    msg.op = 245U;
    msg.clock = 0.942864298511531;
    msg.tz = 11;

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
    msg.setTimeStamp(0.27333812395300716);
    msg.setSource(1839U);
    msg.setSourceEntity(237U);
    msg.setDestination(39841U);
    msg.setDestinationEntity(107U);
    msg.op = 70U;
    msg.clock = 0.4554728091037977;
    msg.tz = 18;

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
    msg.setTimeStamp(0.7956659036419172);
    msg.setSource(54010U);
    msg.setSourceEntity(225U);
    msg.setDestination(19959U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.21088403646794485);
    msg.setSource(52001U);
    msg.setSourceEntity(183U);
    msg.setDestination(53906U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.45796656309098693);
    msg.setSource(60857U);
    msg.setSourceEntity(69U);
    msg.setDestination(3824U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.16483127665173092);
    msg.setSource(21518U);
    msg.setSourceEntity(235U);
    msg.setDestination(32808U);
    msg.setDestinationEntity(73U);
    msg.sys_name.assign("DIKUSICLAUODUGRNRWKTHFDLFKYSMQQTGRWFPCRYJYYMQQBOMJCHENJYEOTZRMIFNYTVQXLHEJOMULWGNAZTHHSPVIYFSHWVIBMBUOXJFAPXPLWYBAAANRPZLNZZIGEBBHNASTEZPHOVCOXSETCNSPUPJLBJVMZMGQNRICPKZHIUDKUJBALFGVQCZAEDBADEOXSWTEKQGSKGUXQDQFDCOTLZCRVDUJYYRHEWXRXNWGITOWLFVCPDBWKSIX");
    msg.sys_type = 165U;
    msg.owner = 34398U;
    msg.lat = 0.3418462986522123;
    msg.lon = 0.8856037014653038;
    msg.height = 0.9856754876165744;
    msg.services.assign("NRWMMWEMYUSNKXQMTASNBIZKLRMD");

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
    msg.setTimeStamp(0.7104522594506816);
    msg.setSource(48607U);
    msg.setSourceEntity(80U);
    msg.setDestination(52111U);
    msg.setDestinationEntity(168U);
    msg.sys_name.assign("ZIZATMGYGDVAGKVHXQFPWQZNTVOUAJIFOVEAPKIPEPTOIMSMFGCCYPQYUBSNZEZTLHKODQGRXYCJBFOCXLVHHGTMMOZHST");
    msg.sys_type = 189U;
    msg.owner = 49988U;
    msg.lat = 0.7861445616743996;
    msg.lon = 0.27093859751415683;
    msg.height = 0.4057380487673806;
    msg.services.assign("YHPCSSCXKKVTJCAFMXZIPYIAGIXWBZZIFMUMCTEWLROQBPKEQAUIZXGIYNKQGSRJVGLZFQZYOUNAKWHALPGDEUEGEXXDJUKNWIJRLDOCYJBMFOQYRFXTZWUWVHLFPSUKOOJJDNIIVFALRYOAXDBMVHMTTDSUHXESDQBEPDDLSRQVEDQVSNPMNCZHLKAJH");

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
    msg.setTimeStamp(0.5886025958817048);
    msg.setSource(38793U);
    msg.setSourceEntity(49U);
    msg.setDestination(1327U);
    msg.setDestinationEntity(106U);
    msg.sys_name.assign("NYWRJUPYDUFMSADXYIIPLWUFGJCITNSBOYSCXMUCDQTEVNYCXHCIDBWWDSZGRUAATHFLJWLKIUAZTRNRZLNBCDOOQOQMURJDMZHOLMCQDGIPARQNFKLB");
    msg.sys_type = 235U;
    msg.owner = 63630U;
    msg.lat = 0.9395653176574443;
    msg.lon = 0.7256254036435085;
    msg.height = 0.9449656134943718;
    msg.services.assign("TIFQOAZFRWTHIPSMAXOWXPNVPVGGVYEFHKOKLNGPGCWUHUSONGODJOVEOEDMZXHNPMXWBJNULSJDWRSWVZNTHBURJICDLVQYHIMERFHPWIRQNYJQYFPJQTVMTXYGJMCTHZGIRQFODBZSPJYLXDGGEZASLQKYIABQZUVXKDKEXFZMMICMKSCMHAUEWRAFQUOKYARVNPEFCOCULVTZXBHKQRIBLFZGJXYCCKSUWSBDLJW");

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
    msg.setTimeStamp(0.026408771623739558);
    msg.setSource(53891U);
    msg.setSourceEntity(21U);
    msg.setDestination(2468U);
    msg.setDestinationEntity(100U);
    msg.service.assign("RLHQCUOSJJHGBSTOLRMKSRNHMFYPHMARUFOPSMWNUEXKSWOJJODFWNNGEKZTPHRWBETSLFNHGKALXXNJIFJCAQZDXGVPRQEZDJJXLDMWYIQOHWXSQQYLTYWNGMJKIGUECDVPQQATEUTDFRHMARGFSQCKYFNAAYELYAIXALBZDBZ");
    msg.service_type = 109U;

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
    msg.setTimeStamp(0.7500136809483512);
    msg.setSource(14321U);
    msg.setSourceEntity(215U);
    msg.setDestination(13578U);
    msg.setDestinationEntity(208U);
    msg.service.assign("TFVXDISLAWQBJCQNLHCGMZLBDUPPDTESAIVOZFTZOUSZZBEMWXJQYOVGDCCDYNAOPSQGSZFOQPYBOWRBUCLYLRBVSYHDGPATIZEPICFXSXDQKRFOACHGUMNNHEYH");
    msg.service_type = 248U;

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
    msg.setTimeStamp(0.13062566092321148);
    msg.setSource(33930U);
    msg.setSourceEntity(138U);
    msg.setDestination(59543U);
    msg.setDestinationEntity(4U);
    msg.service.assign("MKQEWXMWGUHOFOIGACZCBRABVOSIDI");
    msg.service_type = 232U;

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
    msg.setTimeStamp(0.5542654748164416);
    msg.setSource(59876U);
    msg.setSourceEntity(208U);
    msg.setDestination(10045U);
    msg.setDestinationEntity(174U);
    msg.value = 0.14087748260917976;

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
    msg.setTimeStamp(0.9254488868706381);
    msg.setSource(18980U);
    msg.setSourceEntity(121U);
    msg.setDestination(24770U);
    msg.setDestinationEntity(235U);
    msg.value = 0.5845058097512926;

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
    msg.setTimeStamp(0.24899498605133108);
    msg.setSource(31454U);
    msg.setSourceEntity(196U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(223U);
    msg.value = 0.07325517342503907;

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
    msg.setTimeStamp(0.24098980057142527);
    msg.setSource(7898U);
    msg.setSourceEntity(44U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8015222459713005;

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
    msg.setTimeStamp(0.734890925433201);
    msg.setSource(3092U);
    msg.setSourceEntity(234U);
    msg.setDestination(16027U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6160662218925433;

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
    msg.setTimeStamp(0.05791097697841785);
    msg.setSource(39462U);
    msg.setSourceEntity(212U);
    msg.setDestination(8347U);
    msg.setDestinationEntity(142U);
    msg.value = 0.2438514434565524;

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
    msg.setTimeStamp(0.9807962657418761);
    msg.setSource(28326U);
    msg.setSourceEntity(29U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(92U);
    msg.value = 0.1787007296801466;

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
    msg.setTimeStamp(0.07997521124445706);
    msg.setSource(27218U);
    msg.setSourceEntity(93U);
    msg.setDestination(36689U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8600447950987108;

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
    msg.setTimeStamp(0.5382361067926109);
    msg.setSource(47786U);
    msg.setSourceEntity(98U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(221U);
    msg.value = 0.4478849365833226;

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
    msg.setTimeStamp(0.9782284719139726);
    msg.setSource(24308U);
    msg.setSourceEntity(163U);
    msg.setDestination(35910U);
    msg.setDestinationEntity(221U);
    msg.number.assign("TBREGBOYPDZWKHSZOIINCTVAILYILBODYCRHCJNULAHTFYYPZHRPFIDZFOIXBVFENAGCFVPHSKFVPMXMAOVSLEDEJEGTRSVECJXMUTBJMUWYUYQRBIQVZUWQTFOWDXYLECDUSOGPTGQUEBKJFLMZLKSPDMAWX");
    msg.timeout = 35090U;
    msg.contents.assign("ANXFAOKWCNMCOPFABRDQXBZEFNDNVQLUVDEJGIVSZIVNZDDTIHLZHKNEJHYTFZWCPROSQRGBLGZMWSNMOFVFUTKYMKUZKOSTDFKBWWCOBHJBKQINRLWBYXWYXEACMVYSMKITFDOXJDLLKWYWQVAYL");

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
    msg.setTimeStamp(0.7524026345253179);
    msg.setSource(17632U);
    msg.setSourceEntity(132U);
    msg.setDestination(55202U);
    msg.setDestinationEntity(253U);
    msg.number.assign("IUWCKYOGEHVNUECWOKBVWEWIJQBDAITUULBZFALSYFWTZZEOVXLOBHETDXJBBTGAMAXIUIDXYXUYNCMDKHCTNPKRCMHNSJRRQFQYANBCAMOXWCHSLXCPHYDMZFVMZUJVFENWXPLCJWPYALPKKRGLITVOZNSLJJPSEPRHWSSTSAYGIXMDGQTOOAJNRJXT");
    msg.timeout = 42158U;
    msg.contents.assign("XXTHJLHNAZZEPXTSPRTCBHRRVDPQGMEGLNKFQAIYMNMJGDEQDYINFWDVKUBJVNSCCLPFRAHEEFTIVHYUNUJIQRIAMDUWUBLWLGHYOVEPAOFKGGSPIVVOZWMFIMRQDBTTCOPYIUCQSOWDKWPWJDZBWEEFDNRCTUCXDCLMZSBOLUYAOAYJXSUOIE");

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
    msg.setTimeStamp(0.5463696226354177);
    msg.setSource(13366U);
    msg.setSourceEntity(223U);
    msg.setDestination(55587U);
    msg.setDestinationEntity(53U);
    msg.number.assign("IBEDEVKWZAGCZJURVMFCNQHBJHITBOWBUZXQ");
    msg.timeout = 1011U;
    msg.contents.assign("PCYGRUTMLHHDKFJZWRYAVVYENPOZJPXHTEKMILBCMEJXVILIUSBGRFRGQHGHAEFEJKBVVQLAGMIBYTSUZQRQWYRCLEFVAGDKRXSGOIEWVZXZUUYDLHKNBCDXXNHMOFJZAQMBATPWZOMTEXZDVWCOUODSGKALPTVVXDNCLEIFOONNPQFIWYQPJHKCCMDLFCKROJBDMTAOSPNHIBGIWNPDUZINSBMGURWTWSUSSYQJZPAHWXYKFNACQRKTFE");

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
    msg.setTimeStamp(0.030452388073058168);
    msg.setSource(23468U);
    msg.setSourceEntity(70U);
    msg.setDestination(60105U);
    msg.setDestinationEntity(88U);
    msg.seq = 2410801434U;
    msg.destination.assign("VVFANZCZQSOXNSRQUHHUZHHWYDJWI");
    msg.timeout = 30643U;
    const char tmp_msg_0[] = {14, -87, 4, 123, 95, -83, 125, 106, 111, 103, -11, -52, -85, -52, -108, -99, -78, -74, -87, 29, -20, 2, 3, 69, 66, 113, -8, -86, 32, -9, 29, 19, 97, -19, -35, -43, 95, 78, -75, 51, 77, -124, 101, -73, -46, 123, -92, -53, -93, 113, 18, 36, -64, 60, -46, 107, -17, 94, 21, -88, -7, -101, -27, 100, -75, 106, 42, 124, 41, 84, 19, -39, -34, 58, 77, -24, -26, -50, -113, 77, -24, -37, -42, 64, 112, 56, 80, -68, 77, -79, -7, -54, -2, -30, -76, -11, 54, -47, 6, -72, -70, -62, -96, -72, -1, -114, -44, -95, -100, 32, -9, -95, 11, -101, 58, -82, -10, 3, -92, 45, -70, 83, 44, 60, 88, 83, -127, -77, -25, -3, -70, -108, 0, 86, -58, -115, 26, 78, -103, -70, 21, 100, -58, -4, 3, 15, -15, -119, 22, 86, -118, -96, 44, -13, 82, 25, -51, 104, 28, -54, -69, 123, 124, 73, -63, 113, -92, -27, 4, -6, 73, 84, 11, 61, 103, 112, -92, -116, -49, -37, -53, 47, 112, -10, 118, -39, -3, 94, -96, 33, 44, 110, 57, 11, 3, 7, -52, -102, 37, -114, -71, 25, 7, 35, 23, 58, 1, 121, -70, 4, -62, -108, 49, -3, 24, -1, 108, -19, -76, -125, 75, 52, -8, -10, 51, 20, 118, -23, 32, -87, -113, 60, -102, 43, 100, -126, 61, 43, -117, -50, 116, -8, -42, -14, 64, -84, 21, 77, -44, 6, -112, 86, -118};
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
    msg.setTimeStamp(0.23935464360663472);
    msg.setSource(34890U);
    msg.setSourceEntity(160U);
    msg.setDestination(60502U);
    msg.setDestinationEntity(22U);
    msg.seq = 4241970314U;
    msg.destination.assign("SNWWJBULUHGOMHDRHMNRJVEOCHHVRAVXTYDXFIDJUQLPLASKSASPDKTRQDYKUOIBPNHXGFGWWEZUVUJOIVGXECPIRRUKKTKAMKFNZZVGSNRZTWFCYUTEQOPOQYTYLYGJILXNNAZXCJMZKEMSXFHMGQWDNCPCBOCYFDZFYIRVAGDSITXQVDLMFI");
    msg.timeout = 8982U;
    const char tmp_msg_0[] = {56, -18, 106, -69, -55, -48, 61, 110, 80, 86, -126, -11, 43, 60, 60, 14, 53, 123, 120, -80, 0, 81, 69, 113, 80, 54, 5, -81, 28, -89, -12, 66, -61, -16, -33, -31, 16, -126, -42, -7, -127, -120, -8, -64, 65, 14, 48, -22, -90, 99, -78, 97, -86, 12, 85, -19, -128, 80, 26, -46, -113, 25, -96, 34, 20, -88, 13, -37, -128, -63, -112, -12, 65, 37, -102, 70, 113, -105, -7, 80, -49, 73, -7, -85, 1, -14, -102, 55, 126, -92, 55, 58, -54, -79, -15, -3, -88, -3, -1, -21, 83, 17, 119, -123, 56, 92, 123, 112, -89, 101, -1, -36};
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
    msg.setTimeStamp(0.36731742347447605);
    msg.setSource(26024U);
    msg.setSourceEntity(246U);
    msg.setDestination(50495U);
    msg.setDestinationEntity(218U);
    msg.seq = 412203023U;
    msg.destination.assign("JFWNIUVMHZBXNUFVMWWGYYINKSTFABAFPNEJYHHWVLJUPSONHCEKKUASEHHBLJTPJBPZYSGBTZQGMPXTEJOLIIIOCMXRDROADYNXKODDFVBRDEVIHUQCQRAPWHQFUZLQAOAQMBUQMETEJGBJQIPWDYUPMKZCRMSYZNREBFLJLZZLYVWSTTGQXSYWKXGCPCTRXNKGGVIVZTVABOOSYDMGQCHAGWIDACDHEUPCRLO");
    msg.timeout = 58081U;
    const char tmp_msg_0[] = {92, -93, 88, 43, -107, -80, 73, 79, -109, -28, -8, -11, 36, -35, -91, 124, 21, -118, -113, -114, 124, 40, -72, 81, 76, 70, 7, 75, 68, 57, -70, 61, -36, 48, 125, -69, -23, 92, -81, 49, -109, 92, 83, -61, -112, 18, -85, 8, 8, -118, 82, -3, -45, -63, -91, 40, 32, 75, 40, 126, -18, 99, -29, 14, 54, -64, -36, -43, -116, -6, -62, 27, 8, -82, -50, -118, 83, 110, 88, 118, 69, -59, -59, -24, 84, -51, 81, 58, 112, -72, -30, 100, 39, 98, -98, -99, 93, -3, -72, 75, 38, 0, -50, 24, -3, 92, 79, 2, 35, -31, 4, -86, -78, -90, 23, -85, -92, 115, -29, -83, -90, -72, 52, 59, 62, -95, -47, 110, -75, 88, 5, 124, 44, 8, 55, 94, 112, 29, 68, -94, 66, 24, 15, -5, -3, 73, -2, 67, -6, -112, -20, -32, -15, -70, -85, 80, 58, -114, -31, 84, -34, 79, -118, 15, -41, -18, -11, 22, 64, 27, -25, 0, 58, -96, 117, 43, 60, 67, -66, -2, -41, -117, 86, 87, -23, 115, -2, -108, -90, -68, -100, 6, -73, 101, -15, 2, 74, -65, 80, -40, -41, -109};
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
    msg.setTimeStamp(0.15102109679161813);
    msg.setSource(56922U);
    msg.setSourceEntity(168U);
    msg.setDestination(9134U);
    msg.setDestinationEntity(243U);
    msg.source.assign("HOKDONUSUMPKQDRKLNPQJFLPOLTJVPFGSGIGPARTSHRWUXHLAICOVFGBTSTAPNFVRBBWKIIZPUASTYSGHCUXJQMJKDFJDBVRWOJDEO");
    const char tmp_msg_0[] = {79, -123, 42, 24, -79, 6, -96, -20, 108, 15, -57, 14, -60, 10, 2, 74, -56, -52, 52, -49, -46, 53, -35, -92, 12, 86, 46, 106, -80, -61, -80, -117, 49, 13, 33, -22, 27, -71, -71, -106, 87, -110, 19, 29, -59, -57, -33, 16, -21, -82, 72, -22, -43, 16, 104, 74, 61, 38, 118, 71, -28, 58, -68, 52, 31, 87, 118, 76, 33, -120, 67, 54, -62, 105, 38, 104, 105, 66, 35, 36, 113, 34, 113, -126, -105, 91, -50, 66, -47, 13, -114, 23, -65, -119, -8, 46, -117, 12, -16, -58, 3, -128, -63, 52, 50, 70, 116, 80, -30, -59, 68, 15, 59, 125, -88, -5, -40, 121, 69, 83, 99, -9, 91, 126, -99, -60, -10, -127, -14, 71, -100, 20, -19, -71, -119, 3, 104, -42, -17, 11, -12, 66, 10, 60, 74, 68, 13, -30, 4, 1, -46, 29, 108, -111, -10, -11, 32, -100, 33, 107, -61, 61, 22, -53, -57, -125, 116, -116, 69, -33, -88, 96, 120, -69, -8, -51, 45, -48, -90, -82, 87, 64, 51, -22, -128, -56, -7, -7, -84, -67, 87, 59, 4, 97, 12, -44, 49, 46, 98, 101, 7, 33, -60, -99, -23, 120, -18, 0, -69, -70, -96, 101, -111, 124, 72, -42, 54, 54, -119, 37, 46, 76, 91, 69, -90, 94, 100, -124, 40, -24, -77};
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
    msg.setTimeStamp(0.5293163973454146);
    msg.setSource(7933U);
    msg.setSourceEntity(2U);
    msg.setDestination(52089U);
    msg.setDestinationEntity(74U);
    msg.source.assign("WMRDNVYDGKNNXTJZUIXPZOOEUAOSMDUBJMTDQYREUIFILDZTJHVQXOSEWTICVAIKPOQGMZDHZZXHHHKCDHKHADMMLQLLEBJQOOMERCKDJHUGHWVEYUCFTMVABSLNNAPTQLIJSCOEZRIBWCBRBFXCAGRBXTQPNYNIFVQZSSXFRBTWWASFK");
    const char tmp_msg_0[] = {-119, 72, -100, -105, -12, -50, 10, 23, 105, -37, -100, -96, -103, -36, -42, 89, 63, -69, 56, 1, -65, 68, -26, 81, -102, -67, -70, 28, -16, 29, 65, -65, 54, -93, 67, -72, -107, 90, 112, 92, -65, -11, -105, 83, -62, 20, 25, 85, 12, -49, 102, 108, 97, -10, -68, -33, -76, -68, -72, 68, 114, 99, 9, -94, -102, -91, 64, -121, -49, -80, 52, -14, -114, 88, -7, -4, 92, -15, 118, 41, -66, 34, 87, 50, -38, -54, 51, 117, -72, -117, -34, -21, 1, -91, 59, -107, -74, -25, -93, -50, -122, 39, 28, 124, 25, 19, -19, 46, 65, 79, 109, 12, 77, -74, 43, -91, -71, -47, 103, -68, 41, 5, -63, 92, 3, 59, 101, 45, 79, -88, 105, 10, -9, 88, -59, 116, 11, -13, -36, 2, -110, -76, -97, 26, -34, -98, -68, 40, 64, -108, 126, -65, -61, -109, 43, -13, -26, -60, 19, 125, 60, -23, 26, -51, 83, 20, -29, 62, -23, -126, -4, 112, -53, 16, -109, -95, -111, -94, -121, 122, -105, 121, 49, -60, 50, 50, 74, -120, -23, 77, 78, -85, -53, -42, 104, -124, -4, -110, -29, 25, -7, 21};
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
    msg.setTimeStamp(0.5033874267960153);
    msg.setSource(21924U);
    msg.setSourceEntity(150U);
    msg.setDestination(16814U);
    msg.setDestinationEntity(20U);
    msg.source.assign("XPMFNISPVTTEASWZTSIIPAZAAROCFCDLFLMHQYMQEEONOZJPXJHWUNHAWYOBCBXTEFAAYJMBLJGROZTRVQPKVLDNMWLPHTLTDHDUJLUFIVVIBZJKYISBZCTEKGXFVGVWSKLSDPDPMUNBGMFYGWUKPBITLNOHYXYEMNDRSQJRCKQSUHXAEWTMUIGCPQVHOHCDDZOGFNJXEIQLXKZ");
    const char tmp_msg_0[] = {47, -33, -45, 89, 56, 15, 20, -27, -109, -127, -111, -79, 50, -111, -61, 112, -115, -59, 8, -123, 108, 29, -91, 52, 84, 79, 28, 29, -76, 49, -26, -113, -99, -39, 117, -116, 64, 107, 66, 49, -105, -55, 23, -58, -20, 34, 118, 101, 16, -19, 95, -88, 110, 28, 84, 126, -84, 28, 50, -71, 35, 49, -81, -100, -115, 80, -85, -90, 67, 122, -90, 45, 120, 32, 93, -67, -80, -63, -119, -100, 66, -118, -22, 26, -120, 24, 81, -57, 107, 19, -19, -66, 96};
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
    msg.setTimeStamp(0.5073948715605492);
    msg.setSource(37777U);
    msg.setSourceEntity(150U);
    msg.setDestination(13291U);
    msg.setDestinationEntity(20U);
    msg.seq = 1268681653U;
    msg.state = 247U;
    msg.error.assign("GPNCAIZVPNZWUQIXBCRUXBCRZSLRAZFACAAZUEYGVLABO");

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
    msg.setTimeStamp(0.9556831379963621);
    msg.setSource(12594U);
    msg.setSourceEntity(144U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(214U);
    msg.seq = 3807043617U;
    msg.state = 68U;
    msg.error.assign("PMUNAUBUPODTHVMRLORLPSDTQUPYOI");

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
    msg.setTimeStamp(0.433013114102483);
    msg.setSource(55103U);
    msg.setSourceEntity(131U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(161U);
    msg.seq = 3328032888U;
    msg.state = 126U;
    msg.error.assign("YIONEKVUQRFTKQWMXYVRRUGXRRLCWSHDKVTOOGFZTIKJUGWHFFOPQFXOJPPYTLNPPONGMZUWSIBXFZJYPRYEAZIJUOMFLGZGNQLVLXJWDGTSCXDKNKDYAYXEZVUTPDVVCJTDHHAEGARQUUCJKLEAEZEIRMTFBAOVSLLPZMHCKALJQTGSEFISVACUQLZHXNZMWJSDKGBYWCA");

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
    msg.setTimeStamp(0.13761159448052096);
    msg.setSource(11881U);
    msg.setSourceEntity(253U);
    msg.setDestination(26211U);
    msg.setDestinationEntity(109U);
    msg.origin.assign("UPHGXJQRGYGCUTMBALLQOUVNRPQQHWVPITBCZBEUQONFJMEMBBNYFYIXGTVUSEZPLBMTWRPEJXKJHZFOSEICJSH");
    msg.text.assign("MBTKCVBXUEHIGPZGFSVBNOAIBZRYYDSUSSQWIBQHPYGVLEWERIMJGLHCWAQVVCNLLRJOKFQEDMKHMGNRHFRTSMOHUCWOKVGEWOQMEMJUFPUZXYPEYXDNYOWLRJSIMRLSBYKYDSZBFPXBZFTHKRXDTFDTWZJPIQWJGKUCMBICZNCHFNIOGYHPASPISFLPJCLXXVMAYAZJUVDNEE");

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
    msg.setTimeStamp(0.15071242376902994);
    msg.setSource(47710U);
    msg.setSourceEntity(146U);
    msg.setDestination(15565U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("XIOJFFTOPAALYROWQXSDAJEFPEMESVJHGAVTAQIVEEBQRPHMSBRBTYNKRQHEGWGICCKUIPHCDPVRFAYXVMXWCXGPCOMJKUDDGCQSZIKGOGOJUNWLBDGBKSYNMQPYORBCMPILLWJUIZEZAFXQMATELGIVRVZLLHXSDOSHXJFLWSSFDUZBLXNJIJBZPVRYZMHCYLKDVWNFRTQRMQTKUYWGAONEBWETFUZW");
    msg.text.assign("XWKAZKEIDLLNLFXSUTMDJVLFGMGRBUMSOOHEAOTYJSXZJQHZBWZSTHRGRQULRNRDNOYQVDEPXEFHVYCKZIEXAGGNEBVNWOHPHOVVBDLEY");

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
    msg.setTimeStamp(0.1921809153328662);
    msg.setSource(37258U);
    msg.setSourceEntity(41U);
    msg.setDestination(11108U);
    msg.setDestinationEntity(11U);
    msg.origin.assign("BOYZGURBKTLMTEOUKBIVCYALFRRGJDUTFOHUDPQFNAMTEDQKTZHNPWQHJWAHOJJPIYZMHAIRFZVGWGGCZNCXBDQMWGCYHKXWHIVVUMCULFPBYVVOQCXELTODIRNDKLYEKSZVIQSCREKUJRCHAIXXPYJSQPSW");
    msg.text.assign("LBWVULPEGSFOJYXWKWUILPXXOGDFTJAVGKAXGNDNFVXHCSRQKVSHEYPPAUQNOLLRNFIFLZSZSPAAUKXLHJQMMNNMSDBAJIIYWNUZOXWNMIKJZMGFOTIIKTOZEMDVPXMCQOEPVMOHTBRDSQCTRTJEGFERBVDGTZIWECUXWKCQQRJWTGHUFCHNRYPHGZBIBYESTZAWMDHVSHEOGPVQWQCLJBAYPIBQYFMKRYADJRRYHUACVUTDS");

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
    msg.setTimeStamp(0.5999576113197735);
    msg.setSource(64092U);
    msg.setSourceEntity(34U);
    msg.setDestination(27180U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("RZRBAMZDNZTNNCOIYIQXFFL");
    msg.htime = 0.9676809899863201;
    msg.lat = 0.7884073035409521;
    msg.lon = 0.25189888978202835;
    const char tmp_msg_0[] = {37, 77, -59, 83, -58, -14, 61, 61, 15, -29, 91, -32, -41, -60, -102, -65, 53, 9, -10, 74, -122, -39, -30, 116, 15, -11, 14, 23, 71, -127, 84, -12, 56, -63, -120, -11, 117, -27, 110, 1, -124, 28, -26, -71, -37, 57, 122, -119, -59, 44, -65, 68, 23, -59, 112, -101, 85, 60, -19, -20, -78, -31, 35, 122, -70, -96, -126, 18, -41, 61, -115, -85, 46, -80, -11, -108, -46, -5, -29, 21, -9, 63, 70, 89, 93, -125, 85, -5, -12, 45, -127, -66, -55, 106, 8, 91, -91, -67, -4, 82, -112, 116, -126, 23, -26, 106, -113, 31, -75, 22, -123, 75, -93, -26, 90, -80, 86, 89, 89, 92, 49, -66, -75, 86, 71, 23, -78, -98, 112, -102, -42, 5, -77, -113, 98, -95, 118, -118, 123, -113, -111, 104, 50, -7, -53, 33, 83, 26, -109, -83, 120, 106, -27, 87, -18, -8, -17, -25, 78, 29, -86, -37, 85, -72, 17, -69, 40, -119, -84, -88, -105, -27, 119, 82, -10, -20, -117, -84, -89, -30, 37, -11, -45, -128, -63, -19, -58, -6, -70, 48, -108, -60, 30, -73, -17, -78, 68, -47, 122, 74, 39, 102, 65, 62, 87, 75, 62, 44, 36, 121, 11, 58, -36, 29, 105, -74, -3, -63, -106, 126, 73, 84, 39, -84, -11, -80, 94, -92, -84, 40, 3, 30, 88, 122, 52, 111, -42, 115, 25, -35, -85, 104, 46, -8, -63, 31, -5, -22, -111, -12, 34};
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
    msg.setTimeStamp(0.3475959909211198);
    msg.setSource(58986U);
    msg.setSourceEntity(56U);
    msg.setDestination(39468U);
    msg.setDestinationEntity(188U);
    msg.origin.assign("PIJPBUQDMQWOCTEAQTQEIZJWTVMNKZIGDAXWZHYHCRBYYRCATMSZASDIRRHWKVDOXTQMGSFSYKRULSFMQUZVNXMWROYANGFQHHAFOEFINGEYNDAG");
    msg.htime = 0.9822196267847383;
    msg.lat = 0.40308017328655643;
    msg.lon = 0.3453400619469513;
    const char tmp_msg_0[] = {79, -17, 9, -35, 3, 57, 53, 102, -30, 83, 106, -89, -51, -10, 95, 70, -120, -123, 2, 20, 7, -103, -30, -66, 8, 79, 30, 121, 97, 69, 16, 52, 62, -4, -69, 9, -21, 101, 108, -75, 81, -109, 29, 80, 49, -94, 77, 9, -8, 48, -17, -114, 72, -34, -58, -67, -28, -23, 107, 27, -95, -7, 89, 111, 48, 86, -95, 17, -62, -19, 120, -23, -16, -40, 43, -101, -20, 81, -38, 65, -70, -16, -114, 35, 63, -11, 68, 12, -68, 117, 46, -23, -1, 18, 28, 34, 48, -128, 66, -16, -52, 96, 52, 92, -86, 121, 120, -48, 35, -114, -127, -91, -23, -103, -110, 58, -62, -126, 70, 19, 101, -88, -68, -21, -88, -14, -69, -115, 9, 7, -53, 46};
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
    msg.setTimeStamp(0.4091955543424324);
    msg.setSource(60649U);
    msg.setSourceEntity(77U);
    msg.setDestination(25339U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("AZBFHXVRVVWDZBNBCSBZFATPWMYJMNKRXWFQHLWOVGSPNNXBCDAOSRQUOHPDWYAG");
    msg.htime = 0.49830540672420465;
    msg.lat = 0.33094949161855547;
    msg.lon = 0.9242471911505656;
    const char tmp_msg_0[] = {5, 114, -29, -111, 70, 107, 19, -29, 115, -12, -114, 33, 50, 19, -54, -21, -105, 15, 16, -28, -115, 40, -13, -24, 67, -127, 25, 28, -48, -108, -66, 90, -37, -62, -101, -106, 49, 32, -58, -45, -24, -33, 41, 78, 108, -8, 103, 62, -61, 68, 99, -41, -56, -59, 104, -71, -120, -91, -15, -22, 14, -19, -12, -33, -86, -105, 12, 37, -126, 48, -4, -107, -40, -47, 123, 67, -44, -124, 73, 16, 93, 16, -66, 107, -7, 43, 12, -24, 14, 94, -110, -61, 109, 64, 5, 126, -29, -101, -86, 45, -127, 60, -25, -124, -50, 5, -51, -109, -9, -32, 24, -84, -116, -31, -10, 78, -13, -27, 84, -93, 89, 92, -46, 55, 4, -24, 73, 115, -39, 90, 104, 48, -82, 96, -3, -52, 40, -105};
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
    msg.setTimeStamp(0.21771497205261725);
    msg.setSource(52232U);
    msg.setSourceEntity(107U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(251U);
    msg.req_id = 34445U;
    msg.ttl = 657U;
    msg.destination.assign("IPEBIYXQFTSVNEIPJBFHAKCWVVPGWALHVSFTOUONOKPDAPIGMJRGKR");
    const char tmp_msg_0[] = {42, 62, -79, 126, 13, -44, -72, 81, -89, -90, 83, -46, -24, 92, 8, 88, 55, 87, -118, 67, 24, 113, 103, -54, 51, -46, 109, -21, -26, 63, 22, -29, 99, -26, -53, -61, 97, 98, -76, 58, -5, -46, 82, 102, 53, -80, -115, -90, 83, 15, -25, 15, -103, 105, -52, -76, 21, 3, -124, -45, 7, 46, 98, -127, 36, -53, -119, 105, 36, -41, -74, 84, 99, -17, 22, -95, -104, -42, 27, 115, -20, -47, -14, -77, -47, -11, 51, 100, -37, 126, 109, -35, 40, -48, -39, 99, -72, -93, 17, 29, -1, -11, -97, -8, 116, 25};
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
    msg.setTimeStamp(0.35788386640912007);
    msg.setSource(49696U);
    msg.setSourceEntity(106U);
    msg.setDestination(17898U);
    msg.setDestinationEntity(182U);
    msg.req_id = 28861U;
    msg.ttl = 998U;
    msg.destination.assign("KSKZPWLUZCUDLATXTEQIKNYEWDZUCSVXMYODBUFHRRDXFQQCLPWYKPTEOUFFNEASECDQXYHPRBDGHIOKNKXVJFSHEFJKAQFFJGHKWABUQZJYJAPIMJDNCJVMNRPIBQMEPJLVWQ");
    const char tmp_msg_0[] = {-34, 85, -35, -97, -113, 85, -118, -63, 69, 107, 75, -119, -33, -118, -59, -96, 55, 48, -100, -48, 5, -125, -50, 105, 39, -39, -124, -10, 51, -83, -36, -108, -114, 42, 95, 73, 75, -97, 125, 70, 65, 7, -3, -34, -89, 57, 48, 48, -64, -62, 13, -44, -48, -66, 51, -93, -63, 23, 116, -85, 45, 2, -37, -79, 45, 58, -14, -21, -20, -75, 124, -103, 112, 119, 61, 101, -106, 19, 17, -17, -73, -34, -89, 38, -7, -9, -57, -113, -72, -92, 73, 48, 45, -83, -67, -87, 108, -103, 86, -31, 66, -5, 110, -73, 20, 52, -61, -25, -113, -96, -115, -37, -68, 22, -60, 99, -15, 51, -74, -84, -73, -127, 41, -24, -20, 75, -97, 98, 102, -44, 58, 77, -114, -10, 54, 61, -5, -82, -46, 82, -91, -120, -70, 110, 35, -27, 121, 61, 111, 53, 1, -116, 15, 94, -110, 41, 30, -115, -126, 78, -21, 111, 19, -90, -117, -68, -18, -51, 64, 1, 61, -17, 102, 7, -110, 105, 29, -28, 51, -83, -56, 105, -55, 2, -59, 110, 61, -30, -87, 85, 9, 109, -20, 116, 17, 29, -15, -117, 73, 25, 15, -114, -42, 22, 70, -12, -96, -108, -67, -47};
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
    msg.setTimeStamp(0.26337641574801296);
    msg.setSource(43666U);
    msg.setSourceEntity(248U);
    msg.setDestination(40064U);
    msg.setDestinationEntity(209U);
    msg.req_id = 32634U;
    msg.ttl = 45817U;
    msg.destination.assign("COIRUNZTPWGRIGDHZHQYUCZSCHGOQYBDXQZUNKDPEMUMMZEXSIVWDKXTJVUFUVJNREZYBVJDIITZMZQPHGLKPVXFFFRYWOQNDRCKAESYILBOYECIUAQROIALOP");
    const char tmp_msg_0[] = {-23, -119, 95, -67, 3, -47, 51, -85, 8, 30, 89, 87, 119, 64, 25, 36, -71, -20, -117, 40, 17, -41, 51, 70, -89, -109, 63, 81, -114, -8, -24, -115, -71, -43, 57, 87, 99, 9, 58, 54, 34, -2, -93, 45, -119, 64, 14, 74, 113, -86, -43, 82, 64, -62, 126, -111, 88, -59, 80, -34, -111, 25, 96, 116, 82, 111, -77, 82, -120, 48, 14, -121, 8, 14, -78, -50, -103, -102, -52, 34, -68, -18, -36, 3, 88, -97, 51, -12, -34, 3, -53, 125, -7, 7, -1, 71, 5, 95, 114, 68, -24, 11, -113, -124, 63, 118, 110, 93, 93, 102, -30, 4, -37, -64, -110, 39, 34, -125, 24, 28, 75, 18, 75, -27, 115, -10, 100, -32, 111, 84, -97, -110, 58, 15, -31, -71, 82, -9, 83, 125, -91, -128, 105, -11, -58, 50, -79, 113, -36, 48, 0, 64, 95, -89, 111, 30, -76, 113, 16, 112, 123, -32, 112, -85, 69, 46, -76, 117, 101, -97, 47, -31, -56, -95, -104, 37, 100, -59, -84, -39, 27, 39, 71, -1, -56, 53, -5, -6, 22, 39, 52, -36, -63, 30, 110, -27, 111, -81, 61, 20, 26, 120, 5, 38, 80, -92, -16, 32, 49, 94, 29, -48, -25, 12, 22, 18, -121, -8, 111, 119, 60, 16, -62, -17, -94, 21, -6, 69, -128, 122, -21, -70, 64, 126, -3, 59, 10, -99, -22, -49, 36, 36};
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
    msg.setTimeStamp(0.5330799886224655);
    msg.setSource(4194U);
    msg.setSourceEntity(105U);
    msg.setDestination(25182U);
    msg.setDestinationEntity(232U);
    msg.req_id = 4418U;
    msg.status = 241U;
    msg.text.assign("QDDCJZYZUDJNRXJRMWAOTOUKOWEUHPGHROVOGOBEYKWSDEGKDGUXIZLCIPIQFPKEMZTSJZUTLFGEQUSVFKYBBWHTNQNJDMHWRBIJNTACRCVBACVVZIFXQGCXSZFIDMTKCLFLQGRLVQWKIELTUEJBWZFARUFRSBKDYWNVMFLBPTHHCLSPORXUCWPSYPJATBZXLWJCXQXNKZHY");

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
    msg.setTimeStamp(0.1186694147213122);
    msg.setSource(11544U);
    msg.setSourceEntity(151U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(120U);
    msg.req_id = 55523U;
    msg.status = 77U;
    msg.text.assign("UYGSGYNHQVACHEEGPRPDVQEQBYBJHJWYYLSNKXIXMABFAPTEWUUOSGHCSCASOJENXWIGLVSMLJORKERGDDWTVDOCINBKYWCBGGFPCZPNIOFGHQWVIJFWQLPBHDZS");

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
    msg.setTimeStamp(0.9301254716937882);
    msg.setSource(46783U);
    msg.setSourceEntity(97U);
    msg.setDestination(5897U);
    msg.setDestinationEntity(89U);
    msg.req_id = 15048U;
    msg.status = 224U;
    msg.text.assign("LOERRTJIHHSHYSSIAPTZULZFDCSIUEOPBMENJRPDLCFXYHXHDQGEHEYLK");

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
    msg.setTimeStamp(0.7745961785576447);
    msg.setSource(28061U);
    msg.setSourceEntity(98U);
    msg.setDestination(40841U);
    msg.setDestinationEntity(25U);
    msg.id = 45U;
    msg.range = 0.6209412626747175;

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
    msg.setTimeStamp(0.31307099528690985);
    msg.setSource(28522U);
    msg.setSourceEntity(246U);
    msg.setDestination(36852U);
    msg.setDestinationEntity(198U);
    msg.id = 150U;
    msg.range = 0.40861288773924775;

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
    msg.setTimeStamp(0.4572906447541303);
    msg.setSource(6754U);
    msg.setSourceEntity(62U);
    msg.setDestination(35985U);
    msg.setDestinationEntity(59U);
    msg.id = 128U;
    msg.range = 0.4968768799047689;

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
    msg.setTimeStamp(0.2674346640239854);
    msg.setSource(43441U);
    msg.setSourceEntity(204U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(103U);
    msg.tx = 164U;
    msg.channel = 165U;
    msg.timer = 14499U;

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
    msg.setTimeStamp(0.06464238680171142);
    msg.setSource(54796U);
    msg.setSourceEntity(90U);
    msg.setDestination(23493U);
    msg.setDestinationEntity(251U);
    msg.tx = 226U;
    msg.channel = 89U;
    msg.timer = 21812U;

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
    msg.setTimeStamp(0.17850172415404642);
    msg.setSource(49078U);
    msg.setSourceEntity(92U);
    msg.setDestination(24452U);
    msg.setDestinationEntity(152U);
    msg.tx = 219U;
    msg.channel = 83U;
    msg.timer = 59116U;

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
    msg.setTimeStamp(0.5530777302976297);
    msg.setSource(1864U);
    msg.setSourceEntity(171U);
    msg.setDestination(26280U);
    msg.setDestinationEntity(81U);
    msg.beacon.assign("AUOHWJOPUDCBVBJDTJDQJTMNZN");
    msg.lat = 0.2706132396078974;
    msg.lon = 0.43433796204724906;
    msg.depth = 0.759811925765912;
    msg.query_channel = 42U;
    msg.reply_channel = 89U;
    msg.transponder_delay = 198U;

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
    msg.setTimeStamp(0.3866085024148155);
    msg.setSource(8204U);
    msg.setSourceEntity(60U);
    msg.setDestination(42773U);
    msg.setDestinationEntity(40U);
    msg.beacon.assign("SOOTPWOKSBWSTJQHSUCSLRCSXWNNPHEVMAQHPYXIJFHAANHDDBCRNPIVPIXLDTCGFEMGAVKJZCITXBLVTSWYZCEOUIBGEBUV");
    msg.lat = 0.38439197148124693;
    msg.lon = 0.6551128321178202;
    msg.depth = 0.5698052874202746;
    msg.query_channel = 213U;
    msg.reply_channel = 83U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.6095084275556581);
    msg.setSource(10767U);
    msg.setSourceEntity(26U);
    msg.setDestination(33037U);
    msg.setDestinationEntity(149U);
    msg.beacon.assign("QCXUZQOWTYDKXGCFUTLNVUXEYZZCFKRIDBMIFVTALLKFHYJCDBERVYZAZNPDGUPGLEBCNEYGGSSDDUXOFLSMYVROIKABOQKPTMRPZNKAFQQRVYPGFNQTY");
    msg.lat = 0.6100072195100926;
    msg.lon = 0.8924312192691184;
    msg.depth = 0.07676922284687082;
    msg.query_channel = 107U;
    msg.reply_channel = 230U;
    msg.transponder_delay = 59U;

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
    msg.setTimeStamp(0.23073955522131362);
    msg.setSource(34648U);
    msg.setSourceEntity(44U);
    msg.setDestination(18400U);
    msg.setDestinationEntity(84U);
    msg.op = 9U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YACNOLCFXGLXVJKOIYVDQWABCDOMEWSDQHZYRPCHJEQNXABGFCSHVOFITQZNHTMGLMPHJ");
    tmp_msg_0.lat = 0.3047145897963994;
    tmp_msg_0.lon = 0.9925478229197393;
    tmp_msg_0.depth = 0.05644624449079316;
    tmp_msg_0.query_channel = 164U;
    tmp_msg_0.reply_channel = 178U;
    tmp_msg_0.transponder_delay = 40U;
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
    msg.setTimeStamp(0.33666736314876167);
    msg.setSource(28160U);
    msg.setSourceEntity(220U);
    msg.setDestination(6235U);
    msg.setDestinationEntity(37U);
    msg.op = 208U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NNNJLQWIQMQGSCMOTHFMLAIMEWABXWPISVMUNYSUOSOYAYWWVTZDSQFIPTKAYIHW");
    tmp_msg_0.lat = 0.6539664395918569;
    tmp_msg_0.lon = 0.5345065839305102;
    tmp_msg_0.depth = 0.08763890258695439;
    tmp_msg_0.query_channel = 197U;
    tmp_msg_0.reply_channel = 210U;
    tmp_msg_0.transponder_delay = 41U;
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
    msg.setTimeStamp(0.9918532168754949);
    msg.setSource(20756U);
    msg.setSourceEntity(129U);
    msg.setDestination(20945U);
    msg.setDestinationEntity(151U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.3911565547187792);
    msg.setSource(19479U);
    msg.setSourceEntity(97U);
    msg.setDestination(46089U);
    msg.setDestinationEntity(88U);
    msg.address = 190U;

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
    msg.setTimeStamp(0.35690907370483893);
    msg.setSource(42566U);
    msg.setSourceEntity(233U);
    msg.setDestination(54650U);
    msg.setDestinationEntity(46U);
    msg.address = 100U;

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
    msg.setTimeStamp(0.011529311616283677);
    msg.setSource(63952U);
    msg.setSourceEntity(214U);
    msg.setDestination(28945U);
    msg.setDestinationEntity(125U);
    msg.address = 87U;

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
    msg.setTimeStamp(0.9792362670810192);
    msg.setSource(13915U);
    msg.setSourceEntity(22U);
    msg.setDestination(16204U);
    msg.setDestinationEntity(193U);
    msg.address = 180U;
    msg.status = 98U;
    msg.range = 0.6984054525918246;

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
    msg.setTimeStamp(0.8286824348549806);
    msg.setSource(27987U);
    msg.setSourceEntity(191U);
    msg.setDestination(15058U);
    msg.setDestinationEntity(131U);
    msg.address = 149U;
    msg.status = 93U;
    msg.range = 0.7071455662392525;

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
    msg.setTimeStamp(0.13942218450828292);
    msg.setSource(45372U);
    msg.setSourceEntity(19U);
    msg.setDestination(24295U);
    msg.setDestinationEntity(208U);
    msg.address = 228U;
    msg.status = 53U;
    msg.range = 0.025668697729850476;

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
    msg.setTimeStamp(0.6024888642194635);
    msg.setSource(53896U);
    msg.setSourceEntity(129U);
    msg.setDestination(4768U);
    msg.setDestinationEntity(177U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 50972U;
    tmp_msg_0.value = 160U;
    tmp_msg_0.error.assign("AIHQVYQTGWWSVSVLKRFGZXUBXOTWOSGCJEJAHJAYPPLN");
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
    msg.setTimeStamp(0.964632359687416);
    msg.setSource(51210U);
    msg.setSourceEntity(245U);
    msg.setDestination(15745U);
    msg.setDestinationEntity(141U);
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WQJUWGRWECNYHYEGUSMYBJJHZVMCGQSOAHAJITRNIKKZVYBKRIDVDOOGDKKITDFYGPEJXVOFJRBZIDBFHWQDCZDLFBXJMHKTQCARWMZTXOGPRYZNTOVFGAFHUAWSIMCOBPBWTGMUSTWSLZJLMLNBHMEGANRGIELXNSUJZEPKCKTWQILBWLPNVFHDRUOCDQVLNYSZUZIYEXSCOVHUOTCFSMPALNSCFMXVEELPPPQYYXQQAXVKNUXRTUHFEP");
    tmp_msg_0.attr_type = 189U;
    tmp_msg_0.min.assign("WUXYZNHHWPUIYPZQJHBRRRSUZLRSQQGIHZTLQBGLUWOL");
    tmp_msg_0.max.assign("LYJJZJMDZVXEWANIKWCPMLXJRVWYRCZHFVEU");
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
    msg.setTimeStamp(0.07371432317182147);
    msg.setSource(35355U);
    msg.setSourceEntity(231U);
    msg.setDestination(50569U);
    msg.setDestinationEntity(211U);
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 122U;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.9049852317881045;
    tmp_tmp_msg_0_0.beam_height = 0.731798828511388;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.6260643898360948;
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
    msg.setTimeStamp(0.8270296459925657);
    msg.setSource(29827U);
    msg.setSourceEntity(115U);
    msg.setDestination(64305U);
    msg.setDestinationEntity(184U);
    msg.enable = 28U;

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
    msg.setTimeStamp(0.99946380326509);
    msg.setSource(39037U);
    msg.setSourceEntity(32U);
    msg.setDestination(24701U);
    msg.setDestinationEntity(221U);
    msg.enable = 2U;

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
    msg.setTimeStamp(0.6995658269527685);
    msg.setSource(12650U);
    msg.setSourceEntity(254U);
    msg.setDestination(18577U);
    msg.setDestinationEntity(170U);
    msg.enable = 73U;

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
    msg.setTimeStamp(0.23810825311532524);
    msg.setSource(15882U);
    msg.setSourceEntity(96U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(49U);
    msg.summary = 44U;
    msg.level = 62U;

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
    msg.setTimeStamp(0.4815422693054655);
    msg.setSource(31895U);
    msg.setSourceEntity(240U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(244U);
    msg.summary = 156U;
    msg.level = 133U;

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
    msg.setTimeStamp(0.12420373213961367);
    msg.setSource(20921U);
    msg.setSourceEntity(148U);
    msg.setDestination(12636U);
    msg.setDestinationEntity(20U);
    msg.summary = 41U;
    msg.level = 2U;

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
    msg.setTimeStamp(0.9702374564245803);
    msg.setSource(30523U);
    msg.setSourceEntity(70U);
    msg.setDestination(9800U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.36081396492660656);
    msg.setSource(9828U);
    msg.setSourceEntity(161U);
    msg.setDestination(30029U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.34557998133025203);
    msg.setSource(45340U);
    msg.setSourceEntity(143U);
    msg.setDestination(10353U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.9785441078417491);
    msg.setSource(57825U);
    msg.setSourceEntity(118U);
    msg.setDestination(25496U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.41243073542609543);
    msg.setSource(60367U);
    msg.setSourceEntity(56U);
    msg.setDestination(52318U);
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
    msg.setTimeStamp(0.9288060864847945);
    msg.setSource(39561U);
    msg.setSourceEntity(161U);
    msg.setDestination(45231U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.026868013792309853);
    msg.setSource(57096U);
    msg.setSourceEntity(100U);
    msg.setDestination(18590U);
    msg.setDestinationEntity(245U);
    msg.op = 180U;
    msg.system.assign("QIIUMDXQZEAKRQKMAGZGLEAUALISELIYEKCJGJEVNGJUSFMIVKOQKMJPKOXSIJHOFDRTBUJNFCDQBNFYMYIEBSGQHNZQLTHHTVYRWFWHAFUEFPKPAWXTUOTBBCEWEVAOPKXLEPHZWPVCSJMZKALNCVARLJILUSKSPXSOQOOMXXXNBGRFTVNSWITFQYZYHOUWJHYD");
    msg.range = 0.17469399551993225;
    IMC::EntityControl tmp_msg_0;
    tmp_msg_0.op = 96U;
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
    msg.setTimeStamp(0.4069260047025146);
    msg.setSource(62593U);
    msg.setSourceEntity(51U);
    msg.setDestination(61232U);
    msg.setDestinationEntity(105U);
    msg.op = 254U;
    msg.system.assign("RPXJTNCLPSKNDYMWQXRGMPSZRXPOYBROBOVTLSBTLPSUOFWEMYJGQDNKEFJDQIDGBZFAAJUYOHJXRKXTQCS");
    msg.range = 0.35602328441378983;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9540666895265889;
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
    msg.setTimeStamp(0.10869509340727734);
    msg.setSource(4514U);
    msg.setSourceEntity(81U);
    msg.setDestination(8087U);
    msg.setDestinationEntity(13U);
    msg.op = 189U;
    msg.system.assign("DFNEVPXXHHBNEGKQETTJYZDCBIBRVKSFIKVGUIJCMTBMDSZIRNFASYTGCZEAZEHTLLZOANWVEGNRNHVPJCIOUJAUNUROXWTJHAFRKHIFXAOQJQKLWKHBBYQYUXMTPEPEJKOLTWNYDCQRHCNRVSCSYGTPGVIMIXYQXZABPXMUALMSZBFCWVMMFIFDULOQYEAGRCYGCOJRZKLLFAKEXSNWSUYZLHRDOPPDUDPBBJVMWSHW");
    msg.range = 0.08026184801113301;
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.9471040956586382);
    msg.setSource(3559U);
    msg.setSourceEntity(94U);
    msg.setDestination(7027U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.29641671563205585);
    msg.setSource(62478U);
    msg.setSourceEntity(176U);
    msg.setDestination(2209U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.8637214679942556);
    msg.setSource(27505U);
    msg.setSourceEntity(153U);
    msg.setDestination(35166U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.6737401187009993);
    msg.setSource(26405U);
    msg.setSourceEntity(123U);
    msg.setDestination(49049U);
    msg.setDestinationEntity(215U);
    msg.list.assign("JNRGNZJEXOBAXMGZZHYEARRKDIRNKIKVMBZKCTEVBOVDJHVAZLCSSZHDLYQLOXRXQULJHJKWINFHXZFQHBLGMJPOHLADUCEXSTGRTWCYYWPZLGBJKGVESGQEPRAQKUUBUVBWFHUEIFGPPXFIWNNMWNFMKPOKEIDUVFIDTOMJTQTAMIOECSMRGPDYDNFTVIXBQASJYVUUWCF");

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
    msg.setTimeStamp(0.20069647096482468);
    msg.setSource(1916U);
    msg.setSourceEntity(94U);
    msg.setDestination(15025U);
    msg.setDestinationEntity(247U);
    msg.list.assign("JMEDHDXKKDWCONQUSWLLCQSMWQWTJAFDBHHHPYGBLZBMFXELVAAISFIKHXLMDNVXPKRNIUBCYUDRKXUMF");

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
    msg.setTimeStamp(0.205377180857934);
    msg.setSource(53349U);
    msg.setSourceEntity(84U);
    msg.setDestination(35112U);
    msg.setDestinationEntity(59U);
    msg.list.assign("VRYPPTSWKICVKZCWVTWLPBHIQTZADSZJUHEWPCDOANPYLRMHHJKHPZAPBOUHGZKNVMI");

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
    msg.setTimeStamp(0.46370390712938303);
    msg.setSource(38762U);
    msg.setSourceEntity(140U);
    msg.setDestination(10639U);
    msg.setDestinationEntity(110U);
    msg.value = -13649;

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
    msg.setTimeStamp(0.9584352212833883);
    msg.setSource(26513U);
    msg.setSourceEntity(99U);
    msg.setDestination(64926U);
    msg.setDestinationEntity(197U);
    msg.value = 5364;

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
    msg.setTimeStamp(0.5187770208192792);
    msg.setSource(7887U);
    msg.setSourceEntity(72U);
    msg.setDestination(56751U);
    msg.setDestinationEntity(154U);
    msg.value = 18672;

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
    msg.setTimeStamp(0.3049439237316859);
    msg.setSource(10908U);
    msg.setSourceEntity(188U);
    msg.setDestination(62275U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9323858195301603;

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
    msg.setTimeStamp(0.1337823159871766);
    msg.setSource(60155U);
    msg.setSourceEntity(250U);
    msg.setDestination(20192U);
    msg.setDestinationEntity(201U);
    msg.value = 0.356159931896181;

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
    msg.setTimeStamp(0.8619080889338485);
    msg.setSource(61599U);
    msg.setSourceEntity(203U);
    msg.setDestination(29032U);
    msg.setDestinationEntity(104U);
    msg.value = 0.09757487204941817;

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
    msg.setTimeStamp(0.3901787376448169);
    msg.setSource(9844U);
    msg.setSourceEntity(238U);
    msg.setDestination(51617U);
    msg.setDestinationEntity(0U);
    msg.value = 0.16266543662377497;

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
    msg.setTimeStamp(0.9685897998521734);
    msg.setSource(4609U);
    msg.setSourceEntity(95U);
    msg.setDestination(20592U);
    msg.setDestinationEntity(204U);
    msg.value = 0.8868111759750635;

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
    msg.setTimeStamp(0.02210742567932844);
    msg.setSource(61504U);
    msg.setSourceEntity(27U);
    msg.setDestination(48713U);
    msg.setDestinationEntity(105U);
    msg.value = 0.28434303173669606;

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
    msg.setTimeStamp(0.23803856172695004);
    msg.setSource(13581U);
    msg.setSourceEntity(48U);
    msg.setDestination(43219U);
    msg.setDestinationEntity(89U);
    msg.validity = 62011U;
    msg.type = 81U;
    msg.utc_year = 23756U;
    msg.utc_month = 231U;
    msg.utc_day = 216U;
    msg.utc_time = 0.7519395054211337;
    msg.lat = 0.6389275618817963;
    msg.lon = 0.923281790641093;
    msg.height = 0.35300809447120596;
    msg.satellites = 128U;
    msg.cog = 0.25963143576626657;
    msg.sog = 0.6507749751726749;
    msg.hdop = 0.6618288691166262;
    msg.vdop = 0.7792716577830906;
    msg.hacc = 0.3746191777040174;
    msg.vacc = 0.36732455194724156;

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
    msg.setTimeStamp(0.5223716867912607);
    msg.setSource(12323U);
    msg.setSourceEntity(199U);
    msg.setDestination(24145U);
    msg.setDestinationEntity(174U);
    msg.validity = 48632U;
    msg.type = 176U;
    msg.utc_year = 18826U;
    msg.utc_month = 121U;
    msg.utc_day = 224U;
    msg.utc_time = 0.8119134732253475;
    msg.lat = 0.16625499334202132;
    msg.lon = 0.7559288588774496;
    msg.height = 0.9502414979865286;
    msg.satellites = 18U;
    msg.cog = 0.7534053915755847;
    msg.sog = 0.12393997694588421;
    msg.hdop = 0.2811795312932228;
    msg.vdop = 0.719131669982783;
    msg.hacc = 0.07848346784627191;
    msg.vacc = 0.23704101605971628;

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
    msg.setTimeStamp(0.7835476302826638);
    msg.setSource(28729U);
    msg.setSourceEntity(60U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(37U);
    msg.validity = 34714U;
    msg.type = 55U;
    msg.utc_year = 48930U;
    msg.utc_month = 86U;
    msg.utc_day = 21U;
    msg.utc_time = 0.7515501364628935;
    msg.lat = 0.5485361335952927;
    msg.lon = 0.6188871730743803;
    msg.height = 0.9878760780630209;
    msg.satellites = 71U;
    msg.cog = 0.3619327959592883;
    msg.sog = 0.08123246344882984;
    msg.hdop = 0.670827013293044;
    msg.vdop = 0.8896071389623081;
    msg.hacc = 0.30829580189493755;
    msg.vacc = 0.7230150940810217;

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
    msg.setTimeStamp(0.37749776740217944);
    msg.setSource(42527U);
    msg.setSourceEntity(181U);
    msg.setDestination(21495U);
    msg.setDestinationEntity(244U);
    msg.time = 0.6626687944051329;
    msg.phi = 0.7847340706617564;
    msg.theta = 0.48834045925271197;
    msg.psi = 0.25299045166924516;
    msg.psi_magnetic = 0.796226383913911;

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
    msg.setTimeStamp(0.8268306510369063);
    msg.setSource(33114U);
    msg.setSourceEntity(191U);
    msg.setDestination(37646U);
    msg.setDestinationEntity(44U);
    msg.time = 0.5952621194491592;
    msg.phi = 0.4220067116542483;
    msg.theta = 0.8145397502494628;
    msg.psi = 0.4794678604615493;
    msg.psi_magnetic = 0.2641163548797927;

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
    msg.setTimeStamp(0.4357013939321924);
    msg.setSource(13025U);
    msg.setSourceEntity(162U);
    msg.setDestination(16790U);
    msg.setDestinationEntity(227U);
    msg.time = 0.4759737284917328;
    msg.phi = 0.8665886937418357;
    msg.theta = 0.05959295413401944;
    msg.psi = 0.2337481440902569;
    msg.psi_magnetic = 0.8797178528528701;

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
    msg.setTimeStamp(0.6751286847344954);
    msg.setSource(53855U);
    msg.setSourceEntity(218U);
    msg.setDestination(58493U);
    msg.setDestinationEntity(120U);
    msg.time = 0.7797550844396558;
    msg.x = 0.3998089219393025;
    msg.y = 0.5453104564202976;
    msg.z = 0.6350623450506355;
    msg.timestep = 0.7112531841206645;

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
    msg.setTimeStamp(0.6676015410090325);
    msg.setSource(7345U);
    msg.setSourceEntity(151U);
    msg.setDestination(36851U);
    msg.setDestinationEntity(153U);
    msg.time = 0.9815368100499292;
    msg.x = 0.18417918676063028;
    msg.y = 0.847135600621481;
    msg.z = 0.7839247433448925;
    msg.timestep = 0.3881835849544436;

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
    msg.setTimeStamp(0.7411731814384095);
    msg.setSource(65431U);
    msg.setSourceEntity(105U);
    msg.setDestination(34776U);
    msg.setDestinationEntity(39U);
    msg.time = 0.716015449045764;
    msg.x = 0.35430906550063646;
    msg.y = 0.9644869313320381;
    msg.z = 0.8002032435092502;
    msg.timestep = 0.545498748020932;

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
    msg.setTimeStamp(0.9733021321276806);
    msg.setSource(40332U);
    msg.setSourceEntity(226U);
    msg.setDestination(61208U);
    msg.setDestinationEntity(244U);
    msg.time = 0.5857714541939534;
    msg.x = 0.2592364971907515;
    msg.y = 0.5935055518681235;
    msg.z = 0.6442646780579475;

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
    msg.setTimeStamp(0.7807357096618841);
    msg.setSource(27079U);
    msg.setSourceEntity(191U);
    msg.setDestination(52154U);
    msg.setDestinationEntity(69U);
    msg.time = 0.6996387081616651;
    msg.x = 0.11926435267951263;
    msg.y = 0.15308041691982321;
    msg.z = 0.9536386408599961;

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
    msg.setTimeStamp(0.5288911484151613);
    msg.setSource(32543U);
    msg.setSourceEntity(167U);
    msg.setDestination(29668U);
    msg.setDestinationEntity(30U);
    msg.time = 0.10019605980881297;
    msg.x = 0.1411152131115514;
    msg.y = 0.6310298396946337;
    msg.z = 0.7509704913998048;

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
    msg.setTimeStamp(0.17984397530471918);
    msg.setSource(32923U);
    msg.setSourceEntity(45U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(191U);
    msg.time = 0.1249664894801209;
    msg.x = 0.8063800708868302;
    msg.y = 0.1766565784422437;
    msg.z = 0.1822136945965489;

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
    msg.setTimeStamp(0.42683963305948736);
    msg.setSource(15917U);
    msg.setSourceEntity(123U);
    msg.setDestination(7085U);
    msg.setDestinationEntity(65U);
    msg.time = 0.07613005074824664;
    msg.x = 0.6068271801836064;
    msg.y = 0.03794668745337171;
    msg.z = 0.8274761234555223;

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
    msg.setTimeStamp(0.5664713621777016);
    msg.setSource(35044U);
    msg.setSourceEntity(8U);
    msg.setDestination(3810U);
    msg.setDestinationEntity(209U);
    msg.time = 0.6402315575994705;
    msg.x = 0.7251700002381991;
    msg.y = 0.3005894404867667;
    msg.z = 0.03157346375035497;

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
    msg.setTimeStamp(0.09920320451576348);
    msg.setSource(56490U);
    msg.setSourceEntity(116U);
    msg.setDestination(24726U);
    msg.setDestinationEntity(91U);
    msg.time = 0.4895159895133415;
    msg.x = 0.34408236785396273;
    msg.y = 0.5739530590243901;
    msg.z = 0.822419576287072;

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
    msg.setTimeStamp(0.9616568832134348);
    msg.setSource(46496U);
    msg.setSourceEntity(155U);
    msg.setDestination(6955U);
    msg.setDestinationEntity(229U);
    msg.time = 0.17580642686128034;
    msg.x = 0.7080420642688543;
    msg.y = 0.4859060150319938;
    msg.z = 0.7363305094733263;

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
    msg.setTimeStamp(0.21740166998559218);
    msg.setSource(33289U);
    msg.setSourceEntity(144U);
    msg.setDestination(11516U);
    msg.setDestinationEntity(82U);
    msg.time = 0.4843822167037105;
    msg.x = 0.6731068000654736;
    msg.y = 0.9789052604014478;
    msg.z = 0.8938506003981771;

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
    msg.setTimeStamp(0.4382528075580767);
    msg.setSource(59596U);
    msg.setSourceEntity(192U);
    msg.setDestination(25618U);
    msg.setDestinationEntity(46U);
    msg.validity = 222U;
    msg.x = 0.5804345036567441;
    msg.y = 0.5781908636336868;
    msg.z = 0.48074129048177994;

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
    msg.setTimeStamp(0.31889421524036754);
    msg.setSource(11688U);
    msg.setSourceEntity(240U);
    msg.setDestination(6066U);
    msg.setDestinationEntity(25U);
    msg.validity = 205U;
    msg.x = 0.3123725897278399;
    msg.y = 0.21162628946885964;
    msg.z = 0.8569436222910819;

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
    msg.setTimeStamp(0.3289773331745123);
    msg.setSource(53979U);
    msg.setSourceEntity(250U);
    msg.setDestination(56265U);
    msg.setDestinationEntity(18U);
    msg.validity = 108U;
    msg.x = 0.04611111591335659;
    msg.y = 0.8375426480917938;
    msg.z = 0.2364023181301953;

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
    msg.setTimeStamp(0.48019843940609974);
    msg.setSource(26826U);
    msg.setSourceEntity(245U);
    msg.setDestination(12581U);
    msg.setDestinationEntity(48U);
    msg.validity = 145U;
    msg.x = 0.43300612206238853;
    msg.y = 0.8714166675850499;
    msg.z = 0.5305871668297057;

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
    msg.setTimeStamp(0.16571951802121576);
    msg.setSource(22670U);
    msg.setSourceEntity(121U);
    msg.setDestination(40586U);
    msg.setDestinationEntity(57U);
    msg.validity = 159U;
    msg.x = 0.06570935133440237;
    msg.y = 0.7076423122230305;
    msg.z = 0.5568431875292984;

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
    msg.setTimeStamp(0.5888092581523001);
    msg.setSource(65328U);
    msg.setSourceEntity(242U);
    msg.setDestination(4205U);
    msg.setDestinationEntity(185U);
    msg.validity = 189U;
    msg.x = 0.5483864451370056;
    msg.y = 0.913846583037405;
    msg.z = 0.5086588245483611;

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
    msg.setTimeStamp(0.08847968096600645);
    msg.setSource(26759U);
    msg.setSourceEntity(118U);
    msg.setDestination(1763U);
    msg.setDestinationEntity(218U);
    msg.time = 0.7974998414252304;
    msg.x = 0.2301192249934314;
    msg.y = 0.6372071596286796;
    msg.z = 0.656508109329749;

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
    msg.setTimeStamp(0.7341271840010396);
    msg.setSource(6194U);
    msg.setSourceEntity(233U);
    msg.setDestination(57712U);
    msg.setDestinationEntity(189U);
    msg.time = 0.7912046221380838;
    msg.x = 0.24471749094348216;
    msg.y = 0.27579207006972384;
    msg.z = 0.26732426628238837;

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
    msg.setTimeStamp(0.28587317454381656);
    msg.setSource(52113U);
    msg.setSourceEntity(176U);
    msg.setDestination(52879U);
    msg.setDestinationEntity(161U);
    msg.time = 0.03445271065374966;
    msg.x = 0.9986914839370008;
    msg.y = 0.21961626870710582;
    msg.z = 0.13358962126012974;

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
    msg.setTimeStamp(0.9872940119390209);
    msg.setSource(8657U);
    msg.setSourceEntity(116U);
    msg.setDestination(35151U);
    msg.setDestinationEntity(119U);
    msg.validity = 14U;
    msg.value = 0.24761825899551293;

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
    msg.setTimeStamp(0.004326521481017753);
    msg.setSource(48168U);
    msg.setSourceEntity(250U);
    msg.setDestination(48867U);
    msg.setDestinationEntity(123U);
    msg.validity = 97U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9984394662484493;
    tmp_msg_0.beam_height = 0.8023629417007891;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9007898918991714;

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
    msg.setTimeStamp(0.489307957869921);
    msg.setSource(23276U);
    msg.setSourceEntity(250U);
    msg.setDestination(19120U);
    msg.setDestinationEntity(115U);
    msg.validity = 98U;
    msg.value = 0.8964413081007578;

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
    msg.setTimeStamp(0.9749618495026334);
    msg.setSource(43497U);
    msg.setSourceEntity(199U);
    msg.setDestination(30504U);
    msg.setDestinationEntity(190U);
    msg.value = 0.724921086587521;

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
    msg.setTimeStamp(0.6743440352939614);
    msg.setSource(18985U);
    msg.setSourceEntity(105U);
    msg.setDestination(8124U);
    msg.setDestinationEntity(148U);
    msg.value = 0.27612489251199945;

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
    msg.setTimeStamp(0.18191544978507523);
    msg.setSource(37228U);
    msg.setSourceEntity(152U);
    msg.setDestination(32188U);
    msg.setDestinationEntity(106U);
    msg.value = 0.05587326823047456;

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
    msg.setTimeStamp(0.4669830398982431);
    msg.setSource(6178U);
    msg.setSourceEntity(123U);
    msg.setDestination(19781U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9408766797805372;

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
    msg.setTimeStamp(0.8304144956099235);
    msg.setSource(53294U);
    msg.setSourceEntity(7U);
    msg.setDestination(21542U);
    msg.setDestinationEntity(231U);
    msg.value = 0.07889880017056072;

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
    msg.setTimeStamp(0.34865209547998177);
    msg.setSource(18460U);
    msg.setSourceEntity(92U);
    msg.setDestination(16666U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5373979445045897;

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
    msg.setTimeStamp(0.5362689191667369);
    msg.setSource(50992U);
    msg.setSourceEntity(68U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8548536699065772;

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
    msg.setTimeStamp(0.3437747257073607);
    msg.setSource(4028U);
    msg.setSourceEntity(115U);
    msg.setDestination(14328U);
    msg.setDestinationEntity(249U);
    msg.value = 0.8885336143725756;

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
    msg.setTimeStamp(0.7257398508606183);
    msg.setSource(48947U);
    msg.setSourceEntity(33U);
    msg.setDestination(2382U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8779871133633821;

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
    msg.setTimeStamp(0.1847892428010096);
    msg.setSource(50068U);
    msg.setSourceEntity(177U);
    msg.setDestination(18803U);
    msg.setDestinationEntity(182U);
    msg.value = 0.9725182616352966;

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
    msg.setTimeStamp(0.2813884080651228);
    msg.setSource(15102U);
    msg.setSourceEntity(99U);
    msg.setDestination(54936U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6036924199009684;

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
    msg.setTimeStamp(0.02424253401256249);
    msg.setSource(1896U);
    msg.setSourceEntity(74U);
    msg.setDestination(64428U);
    msg.setDestinationEntity(76U);
    msg.value = 0.6824915529650253;

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
    msg.setTimeStamp(0.6874762542874756);
    msg.setSource(58954U);
    msg.setSourceEntity(160U);
    msg.setDestination(53359U);
    msg.setDestinationEntity(1U);
    msg.value = 0.33405860607743554;

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
    msg.setTimeStamp(0.23105245545162567);
    msg.setSource(15436U);
    msg.setSourceEntity(125U);
    msg.setDestination(10903U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5871367449727756;

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
    msg.setTimeStamp(0.17524280521918734);
    msg.setSource(10965U);
    msg.setSourceEntity(180U);
    msg.setDestination(16375U);
    msg.setDestinationEntity(64U);
    msg.value = 0.19776370483040273;

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
    msg.setTimeStamp(0.8875718169764214);
    msg.setSource(48124U);
    msg.setSourceEntity(28U);
    msg.setDestination(50091U);
    msg.setDestinationEntity(41U);
    msg.value = 0.11892860317243936;

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
    msg.setTimeStamp(0.24007193116817538);
    msg.setSource(55569U);
    msg.setSourceEntity(135U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7824124630415752;

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
    msg.setTimeStamp(0.4567221905502252);
    msg.setSource(61912U);
    msg.setSourceEntity(87U);
    msg.setDestination(16862U);
    msg.setDestinationEntity(79U);
    msg.value = 0.4336692075971549;

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
    msg.setTimeStamp(0.7997085784102222);
    msg.setSource(10541U);
    msg.setSourceEntity(71U);
    msg.setDestination(15997U);
    msg.setDestinationEntity(244U);
    msg.value = 0.12228925027497606;

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
    msg.setTimeStamp(0.23012708836334428);
    msg.setSource(2729U);
    msg.setSourceEntity(181U);
    msg.setDestination(54235U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5076635921246313;

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
    msg.setTimeStamp(0.035373190701476265);
    msg.setSource(4442U);
    msg.setSourceEntity(6U);
    msg.setDestination(55385U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5321090724714487;

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
    msg.setTimeStamp(0.8580153859555422);
    msg.setSource(45498U);
    msg.setSourceEntity(202U);
    msg.setDestination(32652U);
    msg.setDestinationEntity(17U);
    msg.value = 0.14115532394376862;

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
    msg.setTimeStamp(0.9128552978002434);
    msg.setSource(14957U);
    msg.setSourceEntity(56U);
    msg.setDestination(26524U);
    msg.setDestinationEntity(26U);
    msg.value = 0.014030442389756592;

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
    msg.setTimeStamp(0.3966983319527799);
    msg.setSource(51043U);
    msg.setSourceEntity(252U);
    msg.setDestination(1137U);
    msg.setDestinationEntity(185U);
    msg.value = 0.3107028336806311;

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
    msg.setTimeStamp(0.8216483777083694);
    msg.setSource(44666U);
    msg.setSourceEntity(85U);
    msg.setDestination(6363U);
    msg.setDestinationEntity(222U);
    msg.direction = 0.937390481290883;
    msg.speed = 0.39653606794991425;

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
    msg.setTimeStamp(0.16079745036030824);
    msg.setSource(11184U);
    msg.setSourceEntity(144U);
    msg.setDestination(6986U);
    msg.setDestinationEntity(172U);
    msg.direction = 0.30811406585378776;
    msg.speed = 0.6786296310857636;

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
    msg.setTimeStamp(0.6326150716902635);
    msg.setSource(45387U);
    msg.setSourceEntity(215U);
    msg.setDestination(33415U);
    msg.setDestinationEntity(96U);
    msg.direction = 0.8181837561658581;
    msg.speed = 0.5628746067459893;

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
    msg.setTimeStamp(0.2868049405487145);
    msg.setSource(36117U);
    msg.setSourceEntity(130U);
    msg.setDestination(58139U);
    msg.setDestinationEntity(14U);
    msg.value = 0.5304690600547722;

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
    msg.setTimeStamp(0.31106196206598913);
    msg.setSource(45998U);
    msg.setSourceEntity(193U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(235U);
    msg.value = 0.14225480922071088;

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
    msg.setTimeStamp(0.39671104278109137);
    msg.setSource(35400U);
    msg.setSourceEntity(191U);
    msg.setDestination(28685U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8922083596676496;

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
    msg.setTimeStamp(0.3469517109143876);
    msg.setSource(59423U);
    msg.setSourceEntity(126U);
    msg.setDestination(27157U);
    msg.setDestinationEntity(124U);
    msg.value.assign("THFKTMJORJUDPMAYNZANTJLKMWDJNHOSFFZGAILSSEXTKOSZXBTSMRMFP");

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
    msg.setTimeStamp(0.11531551503811421);
    msg.setSource(52261U);
    msg.setSourceEntity(149U);
    msg.setDestination(18584U);
    msg.setDestinationEntity(118U);
    msg.value.assign("PHDCULRRLYFEWJBLMIQJECCYLFFQRYUAQBTKNVVKUQAIRPPLAFAGLLIVNNYJFOIZWOOVNTYCOEQZEYMCSBFECWNXXJEUHPDQZBPFSTVXVWYLNGCFGZPBJVWPQHAQQJEXHGTKCWIASTNMUAAXMNVRDTHTUXSCHMXMKUFOMAJERBWYKVGBIOHGZSYGVOMJZKSTEKDZIMJRKRGEDWTXGDPDSZLPBOSUCIPSIXOD");

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
    msg.setTimeStamp(0.7319577278014125);
    msg.setSource(7190U);
    msg.setSourceEntity(6U);
    msg.setDestination(33473U);
    msg.setDestinationEntity(225U);
    msg.value.assign("LJNBCHNWSAUHZPAHHKEQIIZGSHJDWUEOTNDDWMQZINVUPKZJGRFJBTYEHOWPRVSWXFYGLOMROTLOTSDXMGMQMKBOCCUJTIPRJBSXXVDMTQYPGPODRKYXFEXQDMCKCRJBLPVHLAGDGIJSYSYSVUUDCBVNPXUBGLBZVRHLAQZTVPWMSTCZLJ");

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
    msg.setTimeStamp(0.08843347053660278);
    msg.setSource(10744U);
    msg.setSourceEntity(161U);
    msg.setDestination(37099U);
    msg.setDestinationEntity(249U);
    const char tmp_msg_0[] = {-84, -17, -6, 22, 106, 120, -19, 120, -105, 114, 70, -60, -28, 99, -6, -58, 45, 113, -125, 28, -35, -66, -107, -24, -74, -90, -49, 17, -117, 122, 71, -79, 39, -110, 19, -115, -82, -56, 23, 103, 118, 40, -84, -73, -42, -96, 23, -22, 61, 8, 50, 3, -67, -122, -104, -16, 94, -28, -54, -68, 62, -64, 105, 48, 30, 50, 88, 79, 16, 13, 70, 91, -122, 5, 36, 6, -4, -96, -93, 124, 58, -123, 68, -69, -78, 7, 113, -50, 4, -96, -64, 85, -7, -51, -56, 27, -77, 51, 50, 25, -6, -30};
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
    msg.setTimeStamp(0.9314542576096773);
    msg.setSource(51938U);
    msg.setSourceEntity(0U);
    msg.setDestination(30867U);
    msg.setDestinationEntity(52U);
    const char tmp_msg_0[] = {58, -58, -44, -97, 10, -89, -19, 77, -29, 110, -12, -121, -38, -122, -81, 104, -40, 60, 28, -31, -87, 26, -102, 12, 17, -20, -80, -64, 3, 42, 118, 99, -80, 7, -70, 66, 122, 5, 124, -71, -34, -23, 115, 101, -73, -36, -98, -104, -87, -55, 87, -89, 95, 13, -18, -59, 121, -74, -78, -11, -56, 0, -36, 44, 120, -57, -37, 126, 42, -44, 76, 16, 87, -37, -61, -2, 21, -82, 53, 11, -121, 36, -23, 20, -126, -89, 39, 79, -5, -44, -83, 32, 81, 72, 50, -86, -94, 50, -14, -70, 73, -66, -28, 56, -19, -125, 17};
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
    msg.setTimeStamp(0.11454843195792652);
    msg.setSource(47569U);
    msg.setSourceEntity(115U);
    msg.setDestination(11866U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {-121, 61, 59, 47, -78, -19, -2, 108, -109, -64, -54, 40, 5, -93, -89, 37, -9, -21, -13, -27, -50, 35, 64, 3, 85, 42, 120, -77, 68, 53, 70, -64, -42, 61, 105, -88, -56, -74, -106, 114, -25, 48, -80, 0, 85, -83, 25, 5, 72, 80, -110, -48, 115, -68, -66, 35, -88, -95, -17, -62, -18, 119, 122, -115, 85, 54, 90, 46, 39, -72, 59, -57, 72, 67, 56, 33, -43, 25, 4, 114, 58, 112, 84, 29, 14, -60, -16, 0, 105, 64, 47, 96, 1, -73, 70, -56, -82, -112, 86, -3, 1, -119, 88, 85};
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
    msg.setTimeStamp(0.6402777376289472);
    msg.setSource(19629U);
    msg.setSourceEntity(39U);
    msg.setDestination(30802U);
    msg.setDestinationEntity(215U);
    msg.frequency = 985995869U;
    msg.min_range = 11416U;
    msg.max_range = 8145U;

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
    msg.setTimeStamp(0.15726369434230958);
    msg.setSource(8671U);
    msg.setSourceEntity(63U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(241U);
    msg.frequency = 194002177U;
    msg.min_range = 3662U;
    msg.max_range = 19833U;

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
    msg.setTimeStamp(0.5579368058841679);
    msg.setSource(23279U);
    msg.setSourceEntity(104U);
    msg.setDestination(58435U);
    msg.setDestinationEntity(79U);
    msg.frequency = 1979912370U;
    msg.min_range = 51851U;
    msg.max_range = 2958U;

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
    msg.setTimeStamp(0.3729945351293701);
    msg.setSource(64370U);
    msg.setSourceEntity(235U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(113U);
    msg.type = 67U;
    msg.frequency = 3867724264U;
    msg.min_range = 4496U;
    msg.max_range = 32296U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.3359384927872203;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9607869972017482;
    tmp_msg_0.beam_height = 0.013782504245305138;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-61, -102, -50, -97, 116, -82, -49, -32, -58, 14, -32, -11, -64, -10, -63, -38, 39, -68, 76, -95, -28, 116, -3, -122, -42, 66, -2, -75, 92, 122, -79, -111, -66, 87, 61, -128, 33, 105, -77, 76, 100, -71};
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
    msg.setTimeStamp(0.9928501769777087);
    msg.setSource(16700U);
    msg.setSourceEntity(39U);
    msg.setDestination(63021U);
    msg.setDestinationEntity(247U);
    msg.type = 56U;
    msg.frequency = 211634460U;
    msg.min_range = 34520U;
    msg.max_range = 9900U;
    msg.bits_per_point = 29U;
    msg.scale_factor = 0.6856874138221658;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3178595694610926;
    tmp_msg_0.beam_height = 0.7705921923260114;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-91, -38, -11, -81, 23, 59, -63, 71, 93, 113, 41, -58, -92, -91, 82, -23, -58, 35, -4, -95, -126, 112, -65, 93, -126, -10, -112, -2, 110, -110, -86, -58, -44, 75, 79, 47, 42, -34, -18, -69, -60, -50, 28, 94, 47, -4, 99, -114, 73, -126, -106, 19, 110, -56, 88, -61, 73, -13, 72, 4, 65, -37, 72, 66, -119, -112, -22, 22, 86, -28, -88, -92, 21, -112, -18, -7, -31, -52, -81, 60, -25, -36, -110, -7, 6, 43, 92, 28, -39, -73, 82, -17, 113, -78, 84, 90, 21, 110, -108, 111, 90, 65, -85, -118, -116, 13, 89, -29, 59, 23, 69, 108, -101, 25, -51, -104, 48, -28, 93, -54, -23, -68, 40, 106, 36, 34, 15, 112, 120, -102, -128, -65, 16, -115, -10, -104, 17, -71, 2, 23, -96, -9, 107, -93, -48, -29, 59, 62, -10, 80, 19, -87, -118, 95, -125, 0, -110, 99, 27, -108, -128, 6, -19, 61, 3, -62, 87, 54, -116, 81, 34, 95, -24, -82, 83};
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
    msg.setTimeStamp(0.18777998494851678);
    msg.setSource(12542U);
    msg.setSourceEntity(63U);
    msg.setDestination(13082U);
    msg.setDestinationEntity(125U);
    msg.type = 170U;
    msg.frequency = 2881892214U;
    msg.min_range = 57405U;
    msg.max_range = 50979U;
    msg.bits_per_point = 206U;
    msg.scale_factor = 0.4607754347272873;
    const char tmp_msg_0[] = {86, 79, 7, 100, 111, -88, 20, 107, -80, -89, -40, -93, -48, -107, 43, -67, -56, 106, -64, 27, 57, 82, -73, -91, 114, 33, -91, 23, -91, 67, -76, -108, -18, 104, 122, 110, -106, 121, -79, -103, -117, 71, 30, -40, 9, 64, 25, -21, -43, -106, 21, 15, -128, 118, -52, 22, 107, 47, 0, -98, -53, 75, 32, -86, -128, -122, 118, 25, -110, -32, 93, 76, 33, 92, 8, 48, 40, -26, 60, -71, 15, -32, 44, -25, 70, 10, -87, 45, -121, 116, 103, -22, 86, 55, -74, 22, 74, 66, -121, 84, 111, 121, 45, -27, 24, -18, -15, 97, 68, 39, -39, -112, 103, -118, -93, 41, -40, 30, -56, 9, 46, -36, 56};
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
    msg.setTimeStamp(0.8338471353881046);
    msg.setSource(42514U);
    msg.setSourceEntity(249U);
    msg.setDestination(64371U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.19402185513459913);
    msg.setSource(45023U);
    msg.setSourceEntity(33U);
    msg.setDestination(650U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.12513636642748083);
    msg.setSource(27339U);
    msg.setSourceEntity(44U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.4119849455133794);
    msg.setSource(9551U);
    msg.setSourceEntity(217U);
    msg.setDestination(61633U);
    msg.setDestinationEntity(241U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.6979667461080117);
    msg.setSource(7377U);
    msg.setSourceEntity(156U);
    msg.setDestination(55865U);
    msg.setDestinationEntity(241U);
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
    msg.setTimeStamp(0.3474304780377121);
    msg.setSource(55714U);
    msg.setSourceEntity(66U);
    msg.setDestination(48802U);
    msg.setDestinationEntity(138U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.2853246277976723);
    msg.setSource(19636U);
    msg.setSourceEntity(248U);
    msg.setDestination(61412U);
    msg.setDestinationEntity(148U);
    msg.value = 0.8591896014987664;
    msg.confidence = 0.14280022196601483;
    msg.opmodes.assign("BXRRHNRAQVVNXFOEPMOTDYVFNVPLCJBCTWCGLFKRXPDVQGWLWNYEGHIKXZUJRKAQSGUEPYVMTKGDEJXNMRTPNBGLINMKHKGQYMFIZSIWESLJEZDFUWQSEDXJQLLD");

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
    msg.setTimeStamp(0.4275667851615387);
    msg.setSource(46096U);
    msg.setSourceEntity(100U);
    msg.setDestination(11624U);
    msg.setDestinationEntity(55U);
    msg.value = 0.5139883846431764;
    msg.confidence = 0.9259883404363674;
    msg.opmodes.assign("DHKKXGBJYVWJYAMGFDYBWJVJETNUKEBSBDQUXTLGIUQUFEOVPUW");

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
    msg.setTimeStamp(0.5511915758458538);
    msg.setSource(51815U);
    msg.setSourceEntity(227U);
    msg.setDestination(35681U);
    msg.setDestinationEntity(147U);
    msg.value = 0.4634603019855146;
    msg.confidence = 0.6780109740728831;
    msg.opmodes.assign("XQNQFZTQTMIKUWFYWITTITOZVDFVCGUNMJ");

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
    msg.setTimeStamp(0.5747064044496929);
    msg.setSource(52843U);
    msg.setSourceEntity(165U);
    msg.setDestination(13865U);
    msg.setDestinationEntity(96U);
    msg.itow = 4259537763U;
    msg.lat = 0.5362980992071446;
    msg.lon = 0.7015585305965307;
    msg.height_ell = 0.45661867226157804;
    msg.height_sea = 0.34183324278176874;
    msg.hacc = 0.897052775709675;
    msg.vacc = 0.1990305041833913;
    msg.vel_n = 0.25929686614151193;
    msg.vel_e = 0.7547292677304811;
    msg.vel_d = 0.08410018762505234;
    msg.speed = 0.051294943928983816;
    msg.gspeed = 0.12827126481712414;
    msg.heading = 0.8724960796455159;
    msg.sacc = 0.3813752382915604;
    msg.cacc = 0.3472759583146555;

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
    msg.setTimeStamp(0.08318442432935713);
    msg.setSource(8301U);
    msg.setSourceEntity(226U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(186U);
    msg.itow = 3051152094U;
    msg.lat = 0.8689001180657508;
    msg.lon = 0.43430783315804755;
    msg.height_ell = 0.5790716876436904;
    msg.height_sea = 0.7686244346689349;
    msg.hacc = 0.5933038967583744;
    msg.vacc = 0.9277127412451677;
    msg.vel_n = 0.7365645434503761;
    msg.vel_e = 0.43233136694206076;
    msg.vel_d = 0.9503120218209307;
    msg.speed = 0.21903510526896774;
    msg.gspeed = 0.8254432658686317;
    msg.heading = 0.6082643510733736;
    msg.sacc = 0.8551040842996098;
    msg.cacc = 0.838600423366453;

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
    msg.setTimeStamp(0.24031050707343193);
    msg.setSource(36770U);
    msg.setSourceEntity(252U);
    msg.setDestination(18079U);
    msg.setDestinationEntity(12U);
    msg.itow = 857664264U;
    msg.lat = 0.24933739206604022;
    msg.lon = 0.15238212124459627;
    msg.height_ell = 0.956817388378319;
    msg.height_sea = 0.13210444331875193;
    msg.hacc = 0.49479275687586666;
    msg.vacc = 0.8159127310527404;
    msg.vel_n = 0.5098048250007937;
    msg.vel_e = 0.09660621518758816;
    msg.vel_d = 0.283342391811956;
    msg.speed = 0.6690819049527855;
    msg.gspeed = 0.1495440440507385;
    msg.heading = 0.556208421837569;
    msg.sacc = 0.17756750969321344;
    msg.cacc = 0.5758044951889891;

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
    msg.setTimeStamp(0.47030218588479566);
    msg.setSource(4397U);
    msg.setSourceEntity(242U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(101U);
    msg.id = 231U;
    msg.value = 0.7108670654893802;

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
    msg.setTimeStamp(0.6075091448686869);
    msg.setSource(17222U);
    msg.setSourceEntity(188U);
    msg.setDestination(61900U);
    msg.setDestinationEntity(231U);
    msg.id = 217U;
    msg.value = 0.06423229271876063;

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
    msg.setTimeStamp(0.7214432175262375);
    msg.setSource(13392U);
    msg.setSourceEntity(187U);
    msg.setDestination(38772U);
    msg.setDestinationEntity(159U);
    msg.id = 184U;
    msg.value = 0.7913537073137006;

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
    msg.setTimeStamp(0.8817070820981585);
    msg.setSource(7095U);
    msg.setSourceEntity(228U);
    msg.setDestination(64199U);
    msg.setDestinationEntity(137U);
    msg.x = 0.9971209492932136;
    msg.y = 0.10036601746716178;
    msg.z = 0.1682758507496881;
    msg.phi = 0.31635357160933153;
    msg.theta = 0.6721977589022937;
    msg.psi = 0.09911264923254048;

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
    msg.setTimeStamp(0.8010234034209933);
    msg.setSource(42115U);
    msg.setSourceEntity(17U);
    msg.setDestination(60390U);
    msg.setDestinationEntity(176U);
    msg.x = 0.20603959121770665;
    msg.y = 0.30712657813706834;
    msg.z = 0.5671232271187957;
    msg.phi = 0.6429519330330976;
    msg.theta = 0.29669323718032004;
    msg.psi = 0.344088200783912;

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
    msg.setTimeStamp(0.2586040905579201);
    msg.setSource(30707U);
    msg.setSourceEntity(209U);
    msg.setDestination(47061U);
    msg.setDestinationEntity(100U);
    msg.x = 0.24819299422777763;
    msg.y = 0.7177753380951756;
    msg.z = 0.7026212390079973;
    msg.phi = 0.37934013499792707;
    msg.theta = 0.6967994149381149;
    msg.psi = 0.8444992755401146;

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
    msg.setTimeStamp(0.7513950162314422);
    msg.setSource(20504U);
    msg.setSourceEntity(248U);
    msg.setDestination(49749U);
    msg.setDestinationEntity(219U);
    msg.beam_width = 0.35135761753766515;
    msg.beam_height = 0.19764085547043042;

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
    msg.setTimeStamp(0.43516323856943795);
    msg.setSource(7437U);
    msg.setSourceEntity(11U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(182U);
    msg.beam_width = 0.004397253060100748;
    msg.beam_height = 0.2488679195789032;

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
    msg.setTimeStamp(0.9998950484097754);
    msg.setSource(65050U);
    msg.setSourceEntity(117U);
    msg.setDestination(48373U);
    msg.setDestinationEntity(215U);
    msg.beam_width = 0.5931712396965862;
    msg.beam_height = 0.31036922321870875;

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
    msg.setTimeStamp(0.1758399008567103);
    msg.setSource(42504U);
    msg.setSourceEntity(237U);
    msg.setDestination(4765U);
    msg.setDestinationEntity(188U);
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
    msg.setTimeStamp(0.05486318155584968);
    msg.setSource(16496U);
    msg.setSourceEntity(18U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(53U);
    msg.sane = 169U;

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
    msg.setTimeStamp(0.9361781903696894);
    msg.setSource(39984U);
    msg.setSourceEntity(140U);
    msg.setDestination(38629U);
    msg.setDestinationEntity(161U);
    msg.sane = 140U;

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
    msg.setTimeStamp(0.3730994307529363);
    msg.setSource(62504U);
    msg.setSourceEntity(60U);
    msg.setDestination(34149U);
    msg.setDestinationEntity(2U);
    msg.id = 19U;
    msg.zoom = 79U;
    msg.action = 94U;

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
    msg.setTimeStamp(0.7046787662435101);
    msg.setSource(59548U);
    msg.setSourceEntity(179U);
    msg.setDestination(22444U);
    msg.setDestinationEntity(149U);
    msg.id = 252U;
    msg.zoom = 73U;
    msg.action = 52U;

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
    msg.setTimeStamp(0.3015451362981625);
    msg.setSource(4184U);
    msg.setSourceEntity(37U);
    msg.setDestination(19013U);
    msg.setDestinationEntity(193U);
    msg.id = 41U;
    msg.zoom = 43U;
    msg.action = 143U;

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
    msg.setTimeStamp(0.9660657289937383);
    msg.setSource(17251U);
    msg.setSourceEntity(220U);
    msg.setDestination(5531U);
    msg.setDestinationEntity(192U);
    msg.id = 253U;
    msg.value = 0.2104604185293807;

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
    msg.setTimeStamp(0.281267576984214);
    msg.setSource(61691U);
    msg.setSourceEntity(16U);
    msg.setDestination(11164U);
    msg.setDestinationEntity(210U);
    msg.id = 206U;
    msg.value = 0.67148629726332;

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
    msg.setTimeStamp(0.5515183127943021);
    msg.setSource(22778U);
    msg.setSourceEntity(224U);
    msg.setDestination(47442U);
    msg.setDestinationEntity(166U);
    msg.id = 249U;
    msg.value = 0.3100226395109005;

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
    msg.setTimeStamp(0.2644126047159626);
    msg.setSource(7327U);
    msg.setSourceEntity(89U);
    msg.setDestination(56272U);
    msg.setDestinationEntity(25U);
    msg.id = 199U;
    msg.value = 0.6890499332462952;

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
    msg.setTimeStamp(0.6029642384364687);
    msg.setSource(36097U);
    msg.setSourceEntity(160U);
    msg.setDestination(30518U);
    msg.setDestinationEntity(84U);
    msg.id = 69U;
    msg.value = 0.5693742288442559;

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
    msg.setTimeStamp(0.6698020096059784);
    msg.setSource(30546U);
    msg.setSourceEntity(52U);
    msg.setDestination(24340U);
    msg.setDestinationEntity(9U);
    msg.id = 194U;
    msg.value = 0.4235232427319199;

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
    msg.setTimeStamp(0.11091568120042816);
    msg.setSource(6609U);
    msg.setSourceEntity(192U);
    msg.setDestination(52510U);
    msg.setDestinationEntity(72U);
    msg.id = 143U;
    msg.angle = 0.9373384668470369;

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
    msg.setTimeStamp(0.14845848171081566);
    msg.setSource(8916U);
    msg.setSourceEntity(85U);
    msg.setDestination(39067U);
    msg.setDestinationEntity(177U);
    msg.id = 41U;
    msg.angle = 0.8174353720026807;

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
    msg.setTimeStamp(0.42894742094536364);
    msg.setSource(79U);
    msg.setSourceEntity(29U);
    msg.setDestination(48270U);
    msg.setDestinationEntity(113U);
    msg.id = 64U;
    msg.angle = 0.5184784761788024;

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
    msg.setTimeStamp(0.8244170051096524);
    msg.setSource(60682U);
    msg.setSourceEntity(131U);
    msg.setDestination(42089U);
    msg.setDestinationEntity(191U);
    msg.op = 10U;
    msg.actions.assign("WBCFDHJOYWVGNQXDGKDNDPWSJSGYDTXLBMVZKAMKACZWYUXNTEPLCJOHDQ");

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
    msg.setTimeStamp(0.39162389466777847);
    msg.setSource(54577U);
    msg.setSourceEntity(248U);
    msg.setDestination(28003U);
    msg.setDestinationEntity(69U);
    msg.op = 179U;
    msg.actions.assign("TSPXADCVAYIFKXRAHDYLOWFQOCVDEAQUYHKUOKEZOJGZKHPCPTQGMREKJZQUXMPORVGDXGIFRSBHBHBZLCMVSLDUTQTREUKRJSJWLFWRRYQQZNFNYPNCWLVNGWOUMXEWIBTZSIHTUVGOXJXRTXZAYCMVOISNPJDPUAFJDPBYMJEEWJDLWWECIUQOJFMBIVNXKBGQPCHVENAFIBF");

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
    msg.setTimeStamp(0.08832687671375783);
    msg.setSource(59027U);
    msg.setSourceEntity(221U);
    msg.setDestination(60524U);
    msg.setDestinationEntity(7U);
    msg.op = 183U;
    msg.actions.assign("HGQAZJEXJKIHLMJAQTDFLRVNKRPUYOWLQLSTJFNBCRCNLZNBUAVWKDHABQVRFHQUPBJGJKSRIOUVEELQ");

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
    msg.setTimeStamp(0.4515521853608001);
    msg.setSource(43569U);
    msg.setSourceEntity(236U);
    msg.setDestination(23927U);
    msg.setDestinationEntity(43U);
    msg.actions.assign("PISRDFOJYQQCO");

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
    msg.setTimeStamp(0.6766463811099955);
    msg.setSource(55226U);
    msg.setSourceEntity(142U);
    msg.setDestination(28740U);
    msg.setDestinationEntity(160U);
    msg.actions.assign("OYDMZRLURXNYMGSYYUWXZQNUNCNDZVRTQJGMFKHTMHUHDUPFSCQDSPBKINCKBJHBXTRIHTFOOCQMYJTPFYGREVNVUKSIGGKBZFZEEVLCPOOS");

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
    msg.setTimeStamp(0.9494798939119772);
    msg.setSource(29510U);
    msg.setSourceEntity(104U);
    msg.setDestination(42591U);
    msg.setDestinationEntity(231U);
    msg.actions.assign("XYSBNYKBQMRHFVCMBEFJJPSTMBLDJNZEASJIEHXUPNCUEVUGDVIMLARJBMOJDBTSWZXODVVEGDSHEWPCODAQDACSROOJIYHSXXWVPVZVHUSAGAJTXZLQIIPMTLWCKRFEWDFPHYFUYRKHDKGCCMYOFPNXLNTGZLSCLNNIWG");

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
    msg.setTimeStamp(0.0181125669490787);
    msg.setSource(34098U);
    msg.setSourceEntity(222U);
    msg.setDestination(12318U);
    msg.setDestinationEntity(105U);
    msg.button = 206U;
    msg.value = 53U;

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
    msg.setTimeStamp(0.042515668799405604);
    msg.setSource(22866U);
    msg.setSourceEntity(117U);
    msg.setDestination(30220U);
    msg.setDestinationEntity(87U);
    msg.button = 17U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.12997651604008142);
    msg.setSource(20525U);
    msg.setSourceEntity(52U);
    msg.setDestination(52398U);
    msg.setDestinationEntity(18U);
    msg.button = 149U;
    msg.value = 227U;

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
    msg.setTimeStamp(0.49589753073804266);
    msg.setSource(39983U);
    msg.setSourceEntity(151U);
    msg.setDestination(49639U);
    msg.setDestinationEntity(181U);
    msg.op = 147U;
    msg.text.assign("CGGKGXODYTPDIPGJBWEJXJSRVRFJFISMOKRULKKJMHPVRKYJMLNAZDDGQVORQDWYYQOYCUNQTVOYTNADMLTJWCUKGCLNFXLUTHEBTEWSQLLFIBXOOFIHAUQIZNCBTYHNSBPBALZXDSDEHVUHVPJZHJLMSCEWHSZOPOIXPVUIITNWTFGVYZEPMUDKGWRQASLBYFMKWAFQXJROCA");

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
    msg.setTimeStamp(0.7453690287330976);
    msg.setSource(4218U);
    msg.setSourceEntity(216U);
    msg.setDestination(9595U);
    msg.setDestinationEntity(103U);
    msg.op = 133U;
    msg.text.assign("SNIAILPQESTCBEIJVBKLXQTHNQQNXAHTJZHUDSDIKJTMSXFVFUNEBGYVP");

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
    msg.setTimeStamp(0.09732933504187435);
    msg.setSource(29470U);
    msg.setSourceEntity(154U);
    msg.setDestination(48510U);
    msg.setDestinationEntity(173U);
    msg.op = 117U;
    msg.text.assign("NDCFPPYIYIVGWVAOEPLBECKUTEXHPFZTDIHZQNAABDAQMZKWWTGVMGQAKZVJIZBKRLNQPEGPVCBHUVQGZFZBVBEMVQUUETADZCRQKKETQUCMYFURYAZWIOSFMKJJWYGPHLSBLPWIJTUJB");

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
    msg.setTimeStamp(0.5249243734911748);
    msg.setSource(6437U);
    msg.setSourceEntity(37U);
    msg.setDestination(1709U);
    msg.setDestinationEntity(249U);
    msg.op = 216U;
    msg.time_remain = 0.9288869701955271;
    msg.sched_time = 0.4907963726997482;

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
    msg.setTimeStamp(0.7180980110603279);
    msg.setSource(28576U);
    msg.setSourceEntity(42U);
    msg.setDestination(55044U);
    msg.setDestinationEntity(238U);
    msg.op = 221U;
    msg.time_remain = 0.6278832605631913;
    msg.sched_time = 0.1257244558642986;

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
    msg.setTimeStamp(0.6959254973364275);
    msg.setSource(9818U);
    msg.setSourceEntity(192U);
    msg.setDestination(6257U);
    msg.setDestinationEntity(217U);
    msg.op = 54U;
    msg.time_remain = 0.6538253901631061;
    msg.sched_time = 0.06653850782552051;

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
    msg.setTimeStamp(0.9778762671044049);
    msg.setSource(33464U);
    msg.setSourceEntity(113U);
    msg.setDestination(8382U);
    msg.setDestinationEntity(196U);
    msg.name.assign("XEGNXZRNIPMNGLTSLUXCORAFWHMIOMGJGLLAQGIZZIWRHXJOHJKFFDUZPTBONDNQSHSKPQMIDDSZOKHVUOBHYVOYEQDNVKYILECFJMSGEUUPEDWMXUBRCAYSCYCGATT");
    msg.op = 106U;
    msg.sched_time = 0.9845176760181011;

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
    msg.setTimeStamp(0.1705548985461912);
    msg.setSource(19298U);
    msg.setSourceEntity(183U);
    msg.setDestination(36706U);
    msg.setDestinationEntity(246U);
    msg.name.assign("ACQGHPGIQOZMLTNSFKJPGDWYZGVLSJZRUDAPEPZBSXMOGDUHUVHZNLVKUIHINMSEIGFLURXDRTNGCYURFGBWAIKFMBAJLRGMNITTHTNVFVQXJAKCOZOCEYPRLLWWEFJFZZZKBOVFTNCNMTYGQEXR");
    msg.op = 27U;
    msg.sched_time = 0.3626958772102369;

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
    msg.setTimeStamp(0.3332878908249278);
    msg.setSource(60640U);
    msg.setSourceEntity(230U);
    msg.setDestination(1333U);
    msg.setDestinationEntity(227U);
    msg.name.assign("NTXYJHCXIISPDZDYUIHXNFDZUZEQPSBIAWUHYZHRASTATEZGOVLZMEWFITCEQZVTKPBIJELVAKQBVYJMUVGZSDLAERXMBFFSHKPPVLGCYPNCISKXLNANGWOLMFWRNGVFUBOJIAQMRQRJZJUFUWDYUVNQODJODORKTHPVXZDCYCECECGLXPLQOCQWKUWMSWTNTAGLWEJXMRXEFWHJKSKPFMR");
    msg.op = 126U;
    msg.sched_time = 0.6462399697074004;

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
    msg.setTimeStamp(0.5306288817781923);
    msg.setSource(64076U);
    msg.setSourceEntity(189U);
    msg.setDestination(38170U);
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
    msg.setTimeStamp(0.7164063571082336);
    msg.setSource(35296U);
    msg.setSourceEntity(152U);
    msg.setDestination(24097U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.09526439422422484);
    msg.setSource(62912U);
    msg.setSourceEntity(56U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.8571545780813925);
    msg.setSource(55224U);
    msg.setSourceEntity(135U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(51U);
    msg.name.assign("NJFRYMSKHVUMZFZKSUJAXSYXQWFQIAGMJZHSQZTRREYHMDRXWZA");
    msg.state = 74U;

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
    msg.setTimeStamp(0.47256284909360535);
    msg.setSource(57618U);
    msg.setSourceEntity(248U);
    msg.setDestination(36800U);
    msg.setDestinationEntity(57U);
    msg.name.assign("NUDQTYPVBDLZIBZEUKWQFWXROGZYFQJJRAKUSEMLSVDSDNLEHPSUCXTMOYLOZMOYZVAQVCLCWXMZJTGGKHYDYFNCXXBEFOHHGZWABIDACIMPOXBZNVQBQFJTOSUVK");
    msg.state = 226U;

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
    msg.setTimeStamp(0.09966785207858508);
    msg.setSource(26162U);
    msg.setSourceEntity(159U);
    msg.setDestination(27288U);
    msg.setDestinationEntity(128U);
    msg.name.assign("GXKNVHHCBDPXAPMSRH");
    msg.state = 231U;

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
    msg.setTimeStamp(0.06852260259804066);
    msg.setSource(38333U);
    msg.setSourceEntity(136U);
    msg.setDestination(3346U);
    msg.setDestinationEntity(153U);
    msg.name.assign("RCEGTNZXSBGCPIFILSJEVLWYLCVZHIEMZGBWULESZAFFQSVCUOKPMXXBMFDXEGBGWLKNFLKDPLIJTOHEFGRXHQCJDTFSQAUDHYOPOHBVURBKAVOINKHYSIQSOJDNMKAIBZLMVHXNUOZBTEACKNUHTDVMAIQOGJXGVTWYVQISMPPJRPWDQWXXZOCAER");
    msg.value = 201U;

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
    msg.setTimeStamp(0.6242943386332065);
    msg.setSource(21637U);
    msg.setSourceEntity(186U);
    msg.setDestination(31337U);
    msg.setDestinationEntity(89U);
    msg.name.assign("KBYGLEEJPEBOKRSKCFHGEPCQALRXUAFDVWIAGZBKWUQFRMUITYIWLYATWAJSXILSNKOPTLUVDNAGTLVKDOBHEGKVVFEESJMFGNPZKOCCIPBTLRMSIOUWYCNLQMGPXXUYFWFIVECDZRHZZHTMGMDNFXAVANSHBMKANWTEUYOBJDQEJJHSVZBIXRRHQRPTMLQXZHLJDXJPQJOGCOSUNMRY");
    msg.value = 247U;

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
    msg.setTimeStamp(0.6030278690296675);
    msg.setSource(9462U);
    msg.setSourceEntity(246U);
    msg.setDestination(27320U);
    msg.setDestinationEntity(70U);
    msg.name.assign("CYJBFOLFTWAWHQSDVDDOGZNKIVBIEYIRQBOUESXYTADHPHGPIKVCEPWJFFXBLCJLLJUBMUCXAIZJZVCZFYSEJTWTGYZARAZERNWNQ");
    msg.value = 207U;

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
    msg.setTimeStamp(0.47170602727641053);
    msg.setSource(37711U);
    msg.setSourceEntity(55U);
    msg.setDestination(56627U);
    msg.setDestinationEntity(6U);
    msg.name.assign("QHDETJOZDOMHGANLEWMCITMCNDOQHACTCEVFUIMPORKRJEIORLXMCNGZPFSQUYVBTXXHYMXXIIIFMDGQTLVNRXGW");

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
    msg.setTimeStamp(0.7255230080015488);
    msg.setSource(27912U);
    msg.setSourceEntity(56U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(47U);
    msg.name.assign("BECEWETRHQQIXHLEXXZFUEGPRISDCKDMUJDPRJLJAMOZWXSUPZLWTMJYRTCJIYIUGXNLRDAMHCOGYOEGFSGFVPWKVOQCFAOFXAZUPQULIHIQDTPEWLYENJJGBEQJBDYAOATOZN");

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
    msg.setTimeStamp(0.5538155039870465);
    msg.setSource(59257U);
    msg.setSourceEntity(91U);
    msg.setDestination(30674U);
    msg.setDestinationEntity(80U);
    msg.name.assign("SDREZIYCWQNXSWGK");

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
    msg.setTimeStamp(0.17228186392341016);
    msg.setSource(19511U);
    msg.setSourceEntity(0U);
    msg.setDestination(26393U);
    msg.setDestinationEntity(26U);
    msg.name.assign("MHUAWEJSMCXPQOSDPNJSBAVQYOCQBAZLDVLOXCWTGIFGXAYMLQCWHWKTYZRULULFNDTPQSE");
    msg.value = 248U;

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
    msg.setTimeStamp(0.0031731005342299223);
    msg.setSource(57193U);
    msg.setSourceEntity(160U);
    msg.setDestination(60702U);
    msg.setDestinationEntity(103U);
    msg.name.assign("KJELFNBYIUTHOLQMAVWRCSEWPYDCIRZHHSNKVHNXAXALIVWDUZCMMNLQCAJWWGNOGVOULSGUZSVCCLWZ");
    msg.value = 18U;

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
    msg.setTimeStamp(0.6106269486396756);
    msg.setSource(38222U);
    msg.setSourceEntity(156U);
    msg.setDestination(6501U);
    msg.setDestinationEntity(186U);
    msg.name.assign("HQSGJLSKSRAEWHAVFGVBPELTZRQCYNGRWCHEKSRYTXCFOJNTIZREBRYIWUZVNIXGGRAAZBTLNQIUJTDOLVPBKEUDZBRXWMJFGVMZPUXIDNWZHLEEWMUUOJMYIXZPPYSWPBQXSLAOBIFGOSHOVDQAQVHYAZEJFGYMAMUNXDICUKOIUFABNDFPPCQCQCMHWNSGQTMXYPGMBOYKXTOUKPJJLWFOKIDDKWDCKHVXLTSVLKNFD");
    msg.value = 65U;

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
    msg.setTimeStamp(0.14063220228670248);
    msg.setSource(40615U);
    msg.setSourceEntity(4U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.6216708656050579;
    msg.lon = 0.1960690534176761;
    msg.height = 0.09234714596876403;
    msg.x = 0.005507873809832309;
    msg.y = 0.47080073043857096;
    msg.z = 0.9087862106154831;
    msg.phi = 0.5797337332212888;
    msg.theta = 0.6379669430652692;
    msg.psi = 0.38212656206507256;
    msg.u = 0.30355301274574076;
    msg.v = 0.41979791099973907;
    msg.w = 0.1309197524592931;
    msg.vx = 0.41811723257823374;
    msg.vy = 0.5993157323861338;
    msg.vz = 0.7561817708475744;
    msg.p = 0.6506855069578351;
    msg.q = 0.7264885821283764;
    msg.r = 0.8543629776601142;
    msg.depth = 0.2444849707675566;
    msg.alt = 0.6106612536522531;

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
    msg.setTimeStamp(0.7254871587698203);
    msg.setSource(64874U);
    msg.setSourceEntity(10U);
    msg.setDestination(3985U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.034306612760726884;
    msg.lon = 0.8771738719002915;
    msg.height = 0.0022361851201330163;
    msg.x = 0.7589803936765799;
    msg.y = 0.7527523186941558;
    msg.z = 0.17242179879156794;
    msg.phi = 0.30135843574023535;
    msg.theta = 0.8285648000279273;
    msg.psi = 0.9000853580807817;
    msg.u = 0.6615273119309394;
    msg.v = 0.15131120872532378;
    msg.w = 0.3004134523339307;
    msg.vx = 0.523168236000168;
    msg.vy = 0.930634574536409;
    msg.vz = 0.7002807126844942;
    msg.p = 0.6465647862282059;
    msg.q = 0.7540213769337033;
    msg.r = 0.3698630587477515;
    msg.depth = 0.5816274096042429;
    msg.alt = 0.22612261832568425;

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
    msg.setTimeStamp(0.6386591817283138);
    msg.setSource(27240U);
    msg.setSourceEntity(104U);
    msg.setDestination(18972U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.13847728186693709;
    msg.lon = 0.2199471446445247;
    msg.height = 0.024344923680702624;
    msg.x = 0.7378400441267454;
    msg.y = 0.22407683287241498;
    msg.z = 0.16668374996399138;
    msg.phi = 0.2533187554582208;
    msg.theta = 0.5550725405781657;
    msg.psi = 0.7601067209133637;
    msg.u = 0.8074657144310873;
    msg.v = 0.5776017086384102;
    msg.w = 0.44339579710566523;
    msg.vx = 0.38482204326425595;
    msg.vy = 0.5579900058421716;
    msg.vz = 0.8136747856357346;
    msg.p = 0.9759490654169353;
    msg.q = 0.868541898073178;
    msg.r = 0.8147379469648367;
    msg.depth = 0.08186036507079664;
    msg.alt = 0.8348743704871124;

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
    msg.setTimeStamp(0.8805061761259716);
    msg.setSource(57831U);
    msg.setSourceEntity(126U);
    msg.setDestination(2180U);
    msg.setDestinationEntity(203U);
    msg.x = 0.6173576537646498;
    msg.y = 0.1746613758433977;
    msg.z = 0.40243042705884724;

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
    msg.setTimeStamp(0.35094718585116946);
    msg.setSource(56356U);
    msg.setSourceEntity(116U);
    msg.setDestination(27639U);
    msg.setDestinationEntity(158U);
    msg.x = 0.4841299795337326;
    msg.y = 0.5689286591039132;
    msg.z = 0.5233320379190377;

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
    msg.setTimeStamp(0.22269696146657803);
    msg.setSource(50054U);
    msg.setSourceEntity(209U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(228U);
    msg.x = 0.3941258705852587;
    msg.y = 0.20046033000246777;
    msg.z = 0.9601088984792976;

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
    msg.setTimeStamp(0.19975780894941864);
    msg.setSource(28580U);
    msg.setSourceEntity(6U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9745683100735982;

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
    msg.setTimeStamp(0.6461028437357966);
    msg.setSource(11830U);
    msg.setSourceEntity(180U);
    msg.setDestination(5955U);
    msg.setDestinationEntity(156U);
    msg.value = 0.06421947921277327;

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
    msg.setTimeStamp(0.20700309065004008);
    msg.setSource(39074U);
    msg.setSourceEntity(208U);
    msg.setDestination(942U);
    msg.setDestinationEntity(178U);
    msg.value = 0.4739437099708532;

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
    msg.setTimeStamp(0.809478934260366);
    msg.setSource(42260U);
    msg.setSourceEntity(16U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(112U);
    msg.value = 0.297632126380291;

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
    msg.setTimeStamp(0.3615639408289578);
    msg.setSource(18239U);
    msg.setSourceEntity(230U);
    msg.setDestination(30750U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0846020422092355;

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
    msg.setTimeStamp(0.6200532050796609);
    msg.setSource(54983U);
    msg.setSourceEntity(73U);
    msg.setDestination(9138U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7110512878555684;

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
    msg.setTimeStamp(0.5637146478319737);
    msg.setSource(7357U);
    msg.setSourceEntity(18U);
    msg.setDestination(40724U);
    msg.setDestinationEntity(246U);
    msg.x = 0.765214398977887;
    msg.y = 0.5507124075219754;
    msg.z = 0.7847478861539331;
    msg.phi = 0.28599025088373187;
    msg.theta = 0.15729384428000504;
    msg.psi = 0.4830846959175087;
    msg.p = 0.7870976738285402;
    msg.q = 0.8841132913264493;
    msg.r = 0.5276210359395602;
    msg.u = 0.709788641891263;
    msg.v = 0.5461271027084939;
    msg.w = 0.832432938863784;
    msg.bias_psi = 0.8928180015559595;
    msg.bias_r = 0.1307091826039033;

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
    msg.setTimeStamp(0.7848955566688058);
    msg.setSource(26525U);
    msg.setSourceEntity(3U);
    msg.setDestination(21939U);
    msg.setDestinationEntity(207U);
    msg.x = 0.5457225038077609;
    msg.y = 0.4280930543469934;
    msg.z = 0.11329081063330049;
    msg.phi = 0.9331690329662157;
    msg.theta = 0.886362142626182;
    msg.psi = 0.9768714153006939;
    msg.p = 0.43209128546748277;
    msg.q = 0.1709376396566188;
    msg.r = 0.6856627007542644;
    msg.u = 0.6984851948303399;
    msg.v = 0.41637161000347467;
    msg.w = 0.5828600275429637;
    msg.bias_psi = 0.765369363512815;
    msg.bias_r = 0.8905102939982226;

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
    msg.setTimeStamp(0.7074862401884023);
    msg.setSource(28843U);
    msg.setSourceEntity(3U);
    msg.setDestination(8449U);
    msg.setDestinationEntity(73U);
    msg.x = 0.38170902066090273;
    msg.y = 0.40882104900312566;
    msg.z = 0.12609042353823952;
    msg.phi = 0.2404847831328708;
    msg.theta = 0.9514784505313176;
    msg.psi = 0.21087411735014994;
    msg.p = 0.1031575120053646;
    msg.q = 0.8966485528522656;
    msg.r = 0.3227495484818347;
    msg.u = 0.1508712125388898;
    msg.v = 0.802114542101592;
    msg.w = 0.5820128399447709;
    msg.bias_psi = 0.16834829808968765;
    msg.bias_r = 0.9207370121681737;

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
    msg.setTimeStamp(0.1104601089055266);
    msg.setSource(10209U);
    msg.setSourceEntity(29U);
    msg.setDestination(1753U);
    msg.setDestinationEntity(241U);
    msg.bias_psi = 0.6535970390734369;
    msg.bias_r = 0.5453999763570119;
    msg.cog = 0.19294140095975232;
    msg.cyaw = 0.09557637556534582;
    msg.lbl_rej_level = 0.692442159180903;
    msg.gps_rej_level = 0.9673137810626551;
    msg.custom_x = 0.8182384906558808;
    msg.custom_y = 0.18443885236091395;
    msg.custom_z = 0.46047022248835223;

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
    msg.setTimeStamp(0.2157880163983602);
    msg.setSource(60499U);
    msg.setSourceEntity(137U);
    msg.setDestination(54223U);
    msg.setDestinationEntity(38U);
    msg.bias_psi = 0.7284593342167509;
    msg.bias_r = 0.6772541534750536;
    msg.cog = 0.9866018003197052;
    msg.cyaw = 0.1833328064976849;
    msg.lbl_rej_level = 0.6667513350211289;
    msg.gps_rej_level = 0.751220542598637;
    msg.custom_x = 0.8169041846605316;
    msg.custom_y = 0.8154503423370401;
    msg.custom_z = 0.680878232873783;

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
    msg.setTimeStamp(0.8224198859112182);
    msg.setSource(17884U);
    msg.setSourceEntity(74U);
    msg.setDestination(26441U);
    msg.setDestinationEntity(53U);
    msg.bias_psi = 0.6608237066092764;
    msg.bias_r = 0.5119661812606494;
    msg.cog = 0.13708671516444482;
    msg.cyaw = 0.4056859353072224;
    msg.lbl_rej_level = 0.8392988203817054;
    msg.gps_rej_level = 0.6378358267986667;
    msg.custom_x = 0.09385701456699636;
    msg.custom_y = 0.4874318523589014;
    msg.custom_z = 0.5565827057751023;

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
    msg.setTimeStamp(0.8667914259594661);
    msg.setSource(27691U);
    msg.setSourceEntity(13U);
    msg.setDestination(35936U);
    msg.setDestinationEntity(41U);
    msg.utc_time = 0.6296485729638615;
    msg.reason = 179U;

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
    msg.setTimeStamp(0.9218391316712943);
    msg.setSource(64690U);
    msg.setSourceEntity(249U);
    msg.setDestination(925U);
    msg.setDestinationEntity(180U);
    msg.utc_time = 0.8443860249867657;
    msg.reason = 78U;

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
    msg.setTimeStamp(0.015342839201042291);
    msg.setSource(28470U);
    msg.setSourceEntity(15U);
    msg.setDestination(28905U);
    msg.setDestinationEntity(48U);
    msg.utc_time = 0.07495113832245437;
    msg.reason = 73U;

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
    msg.setTimeStamp(0.24456914518043282);
    msg.setSource(41973U);
    msg.setSourceEntity(51U);
    msg.setDestination(2562U);
    msg.setDestinationEntity(67U);
    msg.id = 185U;
    msg.range = 0.0731472984088195;
    msg.acceptance = 92U;

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
    msg.setTimeStamp(0.31044539302790797);
    msg.setSource(60951U);
    msg.setSourceEntity(23U);
    msg.setDestination(52361U);
    msg.setDestinationEntity(163U);
    msg.id = 196U;
    msg.range = 0.3966075473447509;
    msg.acceptance = 171U;

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
    msg.setTimeStamp(0.07119558311975382);
    msg.setSource(60091U);
    msg.setSourceEntity(118U);
    msg.setDestination(36850U);
    msg.setDestinationEntity(112U);
    msg.id = 53U;
    msg.range = 0.08452156194461213;
    msg.acceptance = 20U;

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
    msg.setTimeStamp(0.7951038404272336);
    msg.setSource(24025U);
    msg.setSourceEntity(230U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(158U);
    msg.type = 244U;
    msg.reason = 241U;
    msg.value = 0.6074844143693765;
    msg.timestep = 0.2770290754644046;

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
    msg.setTimeStamp(0.21970952612670447);
    msg.setSource(64124U);
    msg.setSourceEntity(116U);
    msg.setDestination(51374U);
    msg.setDestinationEntity(99U);
    msg.type = 214U;
    msg.reason = 165U;
    msg.value = 0.6843391477668747;
    msg.timestep = 0.19747546461743848;

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
    msg.setTimeStamp(0.5088395606586089);
    msg.setSource(60860U);
    msg.setSourceEntity(150U);
    msg.setDestination(43742U);
    msg.setDestinationEntity(234U);
    msg.type = 143U;
    msg.reason = 235U;
    msg.value = 0.5915867506103817;
    msg.timestep = 0.047126645818640345;

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
    msg.setTimeStamp(0.12398805702143911);
    msg.setSource(52757U);
    msg.setSourceEntity(90U);
    msg.setDestination(6666U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.4630495036221477);
    msg.setSource(13084U);
    msg.setSourceEntity(192U);
    msg.setDestination(56688U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.22410616900415026);
    msg.setSource(49767U);
    msg.setSourceEntity(152U);
    msg.setDestination(45842U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.018062376764233723);
    msg.setSource(28280U);
    msg.setSourceEntity(220U);
    msg.setDestination(46141U);
    msg.setDestinationEntity(245U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SVFVGFPRLWHJVNVQMMJMFEGNCSLZOCEAICYKWHNGZBYSDVPJMZUIOYARBVWGXPZXIEAVDMKNADWQTOTYJQIQLVHDUEKXYPDUKCSMJJPWGEMLDXDOFUKPVRFRBTZZSGNSWBHYWNRXIXFWRWRPHTTXIAHLYCSPANX");
    tmp_msg_0.lat = 0.816567510854429;
    tmp_msg_0.lon = 0.6880324968771901;
    tmp_msg_0.depth = 0.943767207763734;
    tmp_msg_0.query_channel = 194U;
    tmp_msg_0.reply_channel = 73U;
    tmp_msg_0.transponder_delay = 219U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.41566858068314017;
    msg.y = 0.8033572006305788;
    msg.var_x = 0.5910054836155526;
    msg.var_y = 0.49987078596200085;
    msg.distance = 0.6065303370027864;

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
    msg.setTimeStamp(0.818968112000364);
    msg.setSource(22014U);
    msg.setSourceEntity(109U);
    msg.setDestination(61621U);
    msg.setDestinationEntity(184U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EPYPARZBLCXWOHXEBICFWLEFLPYZILLSDSXBPXWEFUZUASRAOOXGOJZYURJDCTLMJIOIGMNQYNTGZMQSSPRAIGHOHCHKCSVERQTBLSTOUQVDYZCKJKHDLFZWTJMIIBAHNMUVNEBXDGTFWJANMQDHMETBYSNWVBFG");
    tmp_msg_0.lat = 0.448437461808586;
    tmp_msg_0.lon = 0.4409320509342963;
    tmp_msg_0.depth = 0.0175143394943289;
    tmp_msg_0.query_channel = 109U;
    tmp_msg_0.reply_channel = 114U;
    tmp_msg_0.transponder_delay = 224U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7989246492360602;
    msg.y = 0.8297811979554469;
    msg.var_x = 0.8180672894681251;
    msg.var_y = 0.4158020615370721;
    msg.distance = 0.4209299863850884;

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
    msg.setTimeStamp(0.7124043727040501);
    msg.setSource(31650U);
    msg.setSourceEntity(86U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(243U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OCUOXSQDDQAUHSMBTIQGSDUANQZVBZDAFBSNNIAWKZLEXRRFSXDXYYFJOITGLLYZYQYHTERTGTFOSKMZQKQXMIJPKMWNEVILUKCHDTJZFBFAPZCZMBPYOXJLPRIJVJUVQJYSJUCRAEEGDUHFAESBXNGFUSRVNWWTCIUPIOTJDRCUHHKWKZIEFBKXNPQNBZGTYEPOWMPVPPWHJLXOHAOBYDOCWMGAWVHLH");
    tmp_msg_0.lat = 0.8949259998452357;
    tmp_msg_0.lon = 0.13861282411895648;
    tmp_msg_0.depth = 0.5799980819638243;
    tmp_msg_0.query_channel = 57U;
    tmp_msg_0.reply_channel = 114U;
    tmp_msg_0.transponder_delay = 162U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6523665341283316;
    msg.y = 0.7528201953961506;
    msg.var_x = 0.4018347927385094;
    msg.var_y = 0.14013773862540502;
    msg.distance = 0.7619646023709149;

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
    msg.setTimeStamp(0.5050215622250652);
    msg.setSource(15585U);
    msg.setSourceEntity(155U);
    msg.setDestination(52513U);
    msg.setDestinationEntity(128U);
    msg.state = 102U;

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
    msg.setTimeStamp(0.9744814839374923);
    msg.setSource(33751U);
    msg.setSourceEntity(75U);
    msg.setDestination(38932U);
    msg.setDestinationEntity(82U);
    msg.state = 182U;

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
    msg.setTimeStamp(0.02491480759936493);
    msg.setSource(300U);
    msg.setSourceEntity(88U);
    msg.setDestination(59962U);
    msg.setDestinationEntity(122U);
    msg.state = 31U;

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
    msg.setTimeStamp(0.7605339962653024);
    msg.setSource(61097U);
    msg.setSourceEntity(85U);
    msg.setDestination(7751U);
    msg.setDestinationEntity(157U);
    msg.value = 0.426017627178644;

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
    msg.setTimeStamp(0.9048140801553943);
    msg.setSource(57013U);
    msg.setSourceEntity(87U);
    msg.setDestination(36538U);
    msg.setDestinationEntity(11U);
    msg.value = 0.12190851634825106;

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
    msg.setTimeStamp(0.41224839209965136);
    msg.setSource(5040U);
    msg.setSourceEntity(3U);
    msg.setDestination(32743U);
    msg.setDestinationEntity(23U);
    msg.value = 0.32580650047508997;

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
    msg.setTimeStamp(0.2849165429328302);
    msg.setSource(40519U);
    msg.setSourceEntity(143U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(53U);
    msg.value = 0.2026627758320878;
    msg.z_units = 90U;

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
    msg.setTimeStamp(0.3494808774504199);
    msg.setSource(36704U);
    msg.setSourceEntity(62U);
    msg.setDestination(46652U);
    msg.setDestinationEntity(137U);
    msg.value = 0.32422334021657284;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.2726268699861306);
    msg.setSource(24593U);
    msg.setSourceEntity(151U);
    msg.setDestination(34177U);
    msg.setDestinationEntity(72U);
    msg.value = 0.03156616611761065;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.30099744890583535);
    msg.setSource(256U);
    msg.setSourceEntity(102U);
    msg.setDestination(4700U);
    msg.setDestinationEntity(76U);
    msg.value = 0.5251679348316007;
    msg.speed_units = 139U;

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
    msg.setTimeStamp(0.5761993511597877);
    msg.setSource(12878U);
    msg.setSourceEntity(203U);
    msg.setDestination(4499U);
    msg.setDestinationEntity(121U);
    msg.value = 0.781551220398581;
    msg.speed_units = 205U;

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
    msg.setTimeStamp(0.7395174695543577);
    msg.setSource(1269U);
    msg.setSourceEntity(92U);
    msg.setDestination(46295U);
    msg.setDestinationEntity(132U);
    msg.value = 0.16793504836894657;
    msg.speed_units = 119U;

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
    msg.setTimeStamp(0.39388642059574464);
    msg.setSource(16472U);
    msg.setSourceEntity(24U);
    msg.setDestination(54160U);
    msg.setDestinationEntity(198U);
    msg.value = 0.23992443866715318;

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
    msg.setTimeStamp(0.7112162520157141);
    msg.setSource(2955U);
    msg.setSourceEntity(120U);
    msg.setDestination(43507U);
    msg.setDestinationEntity(24U);
    msg.value = 0.3685474542251399;

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
    msg.setTimeStamp(0.07439871063044157);
    msg.setSource(29676U);
    msg.setSourceEntity(130U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(52U);
    msg.value = 0.625378269156898;

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
    msg.setTimeStamp(0.5841490467351366);
    msg.setSource(12705U);
    msg.setSourceEntity(177U);
    msg.setDestination(55812U);
    msg.setDestinationEntity(145U);
    msg.value = 0.5089545416657608;

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
    msg.setTimeStamp(0.3069868894532809);
    msg.setSource(31872U);
    msg.setSourceEntity(140U);
    msg.setDestination(4400U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8473390000156459;

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
    msg.setTimeStamp(0.29804766827410367);
    msg.setSource(20996U);
    msg.setSourceEntity(210U);
    msg.setDestination(11685U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2793716255733649;

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
    msg.setTimeStamp(0.8074314189576355);
    msg.setSource(32129U);
    msg.setSourceEntity(215U);
    msg.setDestination(7588U);
    msg.setDestinationEntity(225U);
    msg.value = 0.9333821496974152;

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
    msg.setTimeStamp(0.14899685723853073);
    msg.setSource(39001U);
    msg.setSourceEntity(152U);
    msg.setDestination(17242U);
    msg.setDestinationEntity(34U);
    msg.value = 0.03811573747547159;

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
    msg.setTimeStamp(0.7461813466424649);
    msg.setSource(24681U);
    msg.setSourceEntity(231U);
    msg.setDestination(6287U);
    msg.setDestinationEntity(94U);
    msg.value = 0.3423557219681663;

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
    msg.setTimeStamp(0.013928529667185607);
    msg.setSource(30438U);
    msg.setSourceEntity(14U);
    msg.setDestination(61891U);
    msg.setDestinationEntity(196U);
    msg.start_lat = 0.04666729352886734;
    msg.start_lon = 0.5060171588716241;
    msg.start_z = 0.6727090029877999;
    msg.start_z_units = 43U;
    msg.end_lat = 0.7156577124202886;
    msg.end_lon = 0.7790970191444084;
    msg.end_z = 0.7243831640585006;
    msg.end_z_units = 29U;
    msg.speed = 0.5659791103013814;
    msg.speed_units = 113U;
    msg.lradius = 0.023669786015754868;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.6884397679345273);
    msg.setSource(34273U);
    msg.setSourceEntity(41U);
    msg.setDestination(29976U);
    msg.setDestinationEntity(35U);
    msg.start_lat = 0.8551833539780841;
    msg.start_lon = 0.7369415633149146;
    msg.start_z = 0.697443697489307;
    msg.start_z_units = 84U;
    msg.end_lat = 0.6929466520067237;
    msg.end_lon = 0.7614681392647842;
    msg.end_z = 0.8704579215217383;
    msg.end_z_units = 79U;
    msg.speed = 0.2244477117292435;
    msg.speed_units = 11U;
    msg.lradius = 0.7660990871610083;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.6760291212657633);
    msg.setSource(40609U);
    msg.setSourceEntity(181U);
    msg.setDestination(60308U);
    msg.setDestinationEntity(138U);
    msg.start_lat = 0.09597735182916167;
    msg.start_lon = 0.48916546630105306;
    msg.start_z = 0.4516913089553636;
    msg.start_z_units = 183U;
    msg.end_lat = 0.25558394690473996;
    msg.end_lon = 0.2839307229981026;
    msg.end_z = 0.7937697932881446;
    msg.end_z_units = 117U;
    msg.speed = 0.733446909903584;
    msg.speed_units = 92U;
    msg.lradius = 0.09976174174463293;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.958350297958456);
    msg.setSource(43436U);
    msg.setSourceEntity(154U);
    msg.setDestination(63406U);
    msg.setDestinationEntity(192U);
    msg.x = 0.7692640992955568;
    msg.y = 0.3762885889346731;
    msg.z = 0.9233845615093251;
    msg.k = 0.7151341064384408;
    msg.m = 0.6653839202294012;
    msg.n = 0.7814539802096448;
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
    msg.setTimeStamp(0.13794618918536117);
    msg.setSource(2290U);
    msg.setSourceEntity(222U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(102U);
    msg.x = 0.1817038857323129;
    msg.y = 0.13311097342621891;
    msg.z = 0.4728446881908782;
    msg.k = 0.6128249022336008;
    msg.m = 0.3140445667014369;
    msg.n = 0.8069162664498407;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.7184383193911339);
    msg.setSource(2362U);
    msg.setSourceEntity(252U);
    msg.setDestination(24935U);
    msg.setDestinationEntity(20U);
    msg.x = 0.29235985510775053;
    msg.y = 0.06986434688084286;
    msg.z = 0.8327812288666404;
    msg.k = 0.17832875976523965;
    msg.m = 0.5398646055973247;
    msg.n = 0.35230910121878556;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.01748924856242129);
    msg.setSource(4770U);
    msg.setSourceEntity(230U);
    msg.setDestination(56910U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7875274396048817;

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
    msg.setTimeStamp(0.07124076232200627);
    msg.setSource(10758U);
    msg.setSourceEntity(166U);
    msg.setDestination(3521U);
    msg.setDestinationEntity(60U);
    msg.value = 0.7149553096189983;

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
    msg.setTimeStamp(0.5682217171637833);
    msg.setSource(56282U);
    msg.setSourceEntity(84U);
    msg.setDestination(17680U);
    msg.setDestinationEntity(245U);
    msg.value = 0.19024369528551965;

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
    msg.setTimeStamp(0.08978164023163726);
    msg.setSource(48102U);
    msg.setSourceEntity(201U);
    msg.setDestination(43818U);
    msg.setDestinationEntity(179U);
    msg.u = 0.2904661701349065;
    msg.v = 0.5705146783167558;
    msg.w = 0.8814114347888529;
    msg.p = 0.8241645187361955;
    msg.q = 0.18694642969729636;
    msg.r = 0.7723385741234848;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.9407768950035968);
    msg.setSource(2204U);
    msg.setSourceEntity(162U);
    msg.setDestination(276U);
    msg.setDestinationEntity(127U);
    msg.u = 0.45166497377867754;
    msg.v = 0.08293856427680091;
    msg.w = 0.45403098899802585;
    msg.p = 0.314908702929674;
    msg.q = 0.9083242900269327;
    msg.r = 0.5902475238255509;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.5075886205278173);
    msg.setSource(52409U);
    msg.setSourceEntity(248U);
    msg.setDestination(30899U);
    msg.setDestinationEntity(14U);
    msg.u = 0.6553291837518118;
    msg.v = 0.7545655167327905;
    msg.w = 0.5475148944598431;
    msg.p = 0.7828766758748363;
    msg.q = 0.1680291292243702;
    msg.r = 0.6446838530780588;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.6889976642924216);
    msg.setSource(7692U);
    msg.setSourceEntity(106U);
    msg.setDestination(38447U);
    msg.setDestinationEntity(98U);
    msg.start_lat = 0.5167011155590047;
    msg.start_lon = 0.5016876461197519;
    msg.start_z = 0.4988745982252921;
    msg.start_z_units = 180U;
    msg.end_lat = 0.8030699756259295;
    msg.end_lon = 0.04957643990563898;
    msg.end_z = 0.8503371357989972;
    msg.end_z_units = 251U;
    msg.lradius = 0.5108385051337916;
    msg.flags = 235U;
    msg.x = 0.8339237728411849;
    msg.y = 0.8479657805793613;
    msg.z = 0.3072422676781399;
    msg.vx = 0.29893675092550864;
    msg.vy = 0.8764754007954995;
    msg.vz = 0.4222731082545348;
    msg.course_error = 0.8399904566441367;
    msg.eta = 8502U;

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
    msg.setTimeStamp(0.7987276812675634);
    msg.setSource(18531U);
    msg.setSourceEntity(61U);
    msg.setDestination(48938U);
    msg.setDestinationEntity(55U);
    msg.start_lat = 0.06339356178821132;
    msg.start_lon = 0.6242592686704429;
    msg.start_z = 0.5070730211167497;
    msg.start_z_units = 165U;
    msg.end_lat = 0.7137167407482535;
    msg.end_lon = 0.5307952569236316;
    msg.end_z = 0.19846922354629148;
    msg.end_z_units = 82U;
    msg.lradius = 0.1843094730568614;
    msg.flags = 20U;
    msg.x = 0.24476275562180239;
    msg.y = 0.23231122256837478;
    msg.z = 0.20597236481988412;
    msg.vx = 0.16669481207526238;
    msg.vy = 0.06643352822716575;
    msg.vz = 0.7829917404461146;
    msg.course_error = 0.003105986327484156;
    msg.eta = 8100U;

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
    msg.setTimeStamp(0.25507268104629754);
    msg.setSource(51191U);
    msg.setSourceEntity(19U);
    msg.setDestination(18764U);
    msg.setDestinationEntity(231U);
    msg.start_lat = 0.01738439720050622;
    msg.start_lon = 0.5944917779903885;
    msg.start_z = 0.7490838170474714;
    msg.start_z_units = 78U;
    msg.end_lat = 0.97616410030975;
    msg.end_lon = 0.061341838643941715;
    msg.end_z = 0.8623404589694954;
    msg.end_z_units = 120U;
    msg.lradius = 0.8289371423401385;
    msg.flags = 115U;
    msg.x = 0.21016374253090164;
    msg.y = 0.4830654603866664;
    msg.z = 0.6977042409390819;
    msg.vx = 0.3591339159296224;
    msg.vy = 0.2161828986302735;
    msg.vz = 0.7319335472272694;
    msg.course_error = 0.0381464156221194;
    msg.eta = 32933U;

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
    msg.setTimeStamp(0.12716747595464295);
    msg.setSource(18706U);
    msg.setSourceEntity(215U);
    msg.setDestination(37894U);
    msg.setDestinationEntity(187U);
    msg.k = 0.10795970624337448;
    msg.m = 0.07087651947257978;
    msg.n = 0.07304292572072135;

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
    msg.setTimeStamp(0.4505514042855435);
    msg.setSource(23267U);
    msg.setSourceEntity(16U);
    msg.setDestination(6356U);
    msg.setDestinationEntity(185U);
    msg.k = 0.1608614433960288;
    msg.m = 0.9960008216515465;
    msg.n = 0.09973138719525187;

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
    msg.setTimeStamp(0.4921179941979734);
    msg.setSource(34313U);
    msg.setSourceEntity(161U);
    msg.setDestination(5685U);
    msg.setDestinationEntity(145U);
    msg.k = 0.3112812040564329;
    msg.m = 0.6919648426258658;
    msg.n = 0.6340908784216357;

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
    msg.setTimeStamp(0.550329310528817);
    msg.setSource(10151U);
    msg.setSourceEntity(97U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(101U);
    msg.p = 0.07828988748470034;
    msg.i = 0.2602966100162346;
    msg.d = 0.6528078749555802;
    msg.a = 0.2608202664651894;

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
    msg.setTimeStamp(0.7648153306634423);
    msg.setSource(41580U);
    msg.setSourceEntity(68U);
    msg.setDestination(47725U);
    msg.setDestinationEntity(5U);
    msg.p = 0.7310751651016809;
    msg.i = 0.9024057633188194;
    msg.d = 0.656975518061714;
    msg.a = 0.8875343915457212;

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
    msg.setTimeStamp(0.18904269784494288);
    msg.setSource(41279U);
    msg.setSourceEntity(225U);
    msg.setDestination(63463U);
    msg.setDestinationEntity(16U);
    msg.p = 0.7609520346466268;
    msg.i = 0.45945896832786526;
    msg.d = 0.9443474724984837;
    msg.a = 0.3983950356518352;

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
    msg.setTimeStamp(0.2184886151817449);
    msg.setSource(44912U);
    msg.setSourceEntity(202U);
    msg.setDestination(32600U);
    msg.setDestinationEntity(20U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.37207859790832254);
    msg.setSource(57837U);
    msg.setSourceEntity(38U);
    msg.setDestination(34113U);
    msg.setDestinationEntity(13U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.19586930869523023);
    msg.setSource(44179U);
    msg.setSourceEntity(50U);
    msg.setDestination(63048U);
    msg.setDestinationEntity(195U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.10392184729365395);
    msg.setSource(14543U);
    msg.setSourceEntity(98U);
    msg.setDestination(13962U);
    msg.setDestinationEntity(137U);
    msg.timeout = 32326U;
    msg.lat = 0.6883110923268243;
    msg.lon = 0.7866682590409675;
    msg.z = 0.8979505488138305;
    msg.z_units = 111U;
    msg.speed = 0.42198426839072456;
    msg.speed_units = 165U;
    msg.roll = 0.9020601914668864;
    msg.pitch = 0.6933303557779587;
    msg.yaw = 0.9907359586712088;
    msg.custom.assign("XDJDBWDULPPHTNXGOAYBKEEMQWNJGNKEZRNTZLRFJHKZBXTWDMGZJOOHBKKDVGIIRBALUZHCQHULWVEIVQVHSLCSIDQLWDUYEBDIUGVIAVWAWUOCUOQFZSOQTQPYICGFKLCOYFZEMEQFPGKLCBTPRQVAHDHXTPNXANUHUKMMNXGFXICRXAOAIGYQEPVTYUDOZIPRTMJSGCYYCWSVNCJMBSWLLFXAK");

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
    msg.setTimeStamp(0.33659850565343163);
    msg.setSource(60877U);
    msg.setSourceEntity(210U);
    msg.setDestination(32980U);
    msg.setDestinationEntity(176U);
    msg.timeout = 60305U;
    msg.lat = 0.26409428101489363;
    msg.lon = 0.713412231742249;
    msg.z = 0.6213972418846611;
    msg.z_units = 96U;
    msg.speed = 0.22529583369883155;
    msg.speed_units = 127U;
    msg.roll = 0.5810351608216759;
    msg.pitch = 0.05379745396846036;
    msg.yaw = 0.680946274527152;
    msg.custom.assign("KOTKKWWEQPRHJIHSXTPJYPDKWPKZNIMPAQFCRWXFJJHCSIOYAAQTNAYKMFKRQBWSTGONTVMRVPDYECFJIULSLCZXKSGWDYDJOBRYGOGV");

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
    msg.setTimeStamp(0.13612113902432432);
    msg.setSource(24664U);
    msg.setSourceEntity(248U);
    msg.setDestination(37039U);
    msg.setDestinationEntity(29U);
    msg.timeout = 9864U;
    msg.lat = 0.2996429372337689;
    msg.lon = 0.1338222365081505;
    msg.z = 0.37032943833801724;
    msg.z_units = 180U;
    msg.speed = 0.42365266789719525;
    msg.speed_units = 238U;
    msg.roll = 0.9098586527891266;
    msg.pitch = 0.26041554104963227;
    msg.yaw = 0.29212879756684396;
    msg.custom.assign("FNYUKGDQUACJDFZTEBWRPHYVJFDUNCDKVWQJJEHTCMFTHKYKXGAWNBEMIWBEXQKTXXXWLEBLJYLMMNBATRGSSYCLIZVECCGHHISVSRAWHXOAYZYIKDB");

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
    msg.setTimeStamp(0.639506659250043);
    msg.setSource(40555U);
    msg.setSourceEntity(103U);
    msg.setDestination(32256U);
    msg.setDestinationEntity(16U);
    msg.timeout = 4035U;
    msg.lat = 0.7337650989559099;
    msg.lon = 0.7923351443793747;
    msg.z = 0.10512214409222398;
    msg.z_units = 227U;
    msg.speed = 0.13478797746486537;
    msg.speed_units = 234U;
    msg.duration = 24668U;
    msg.radius = 0.21227532683095285;
    msg.flags = 39U;
    msg.custom.assign("KHLFPEYBEPNGUOQOUMYXKSZRUTOSIXHXUDMDZKADSATANGPRFRCNFVTIQPEMWWBANSXARJACRBVQPFQGXGOCAEEHRNQIFSJLGMMAPFMVMWOBJUTCRDJEDZVMUYUZGKKFVDXPUIPGOTZDNEQSIZUYCNQGK");

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
    msg.setTimeStamp(0.12058024585839089);
    msg.setSource(46607U);
    msg.setSourceEntity(91U);
    msg.setDestination(27896U);
    msg.setDestinationEntity(71U);
    msg.timeout = 61759U;
    msg.lat = 0.5996988928994779;
    msg.lon = 0.9580163025547295;
    msg.z = 0.5072630276319751;
    msg.z_units = 221U;
    msg.speed = 0.15067421850815732;
    msg.speed_units = 207U;
    msg.duration = 47861U;
    msg.radius = 0.8882006683756207;
    msg.flags = 124U;
    msg.custom.assign("MSQJQSAGEYDPQDNPYJEGFETKMVSBRFBLFLXRPGBOWHRMUCEPFVQLKGGWVJYTADSDQVPGUORRYKCWXO");

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
    msg.setTimeStamp(0.5383626023489746);
    msg.setSource(61502U);
    msg.setSourceEntity(46U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(193U);
    msg.timeout = 7046U;
    msg.lat = 0.5433401343090258;
    msg.lon = 0.28229496915455043;
    msg.z = 0.13651261127334335;
    msg.z_units = 48U;
    msg.speed = 0.1438594960610271;
    msg.speed_units = 86U;
    msg.duration = 39919U;
    msg.radius = 0.38563018388987735;
    msg.flags = 79U;
    msg.custom.assign("MQLXZMENEVSBHPREIXDFBAZRNCUISYTJYXHEDDNTSUPWRVCQDVUROKPJOHQCIQHKVJJUBLMDHZPKYJBUYEWTIPGTBBEDYWPTWKWGRLWMUSJFTFGTNSBSKOBVXOJFCSGOOMCSAYRAZWHNOOGCPOQCNTIXMFSCZKDBQYUEJKSAYALWDMGAUJNKFWZKEGKITDXGXIRAYPCPGVTRVFCIHVE");

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
    msg.setTimeStamp(0.31648081418075535);
    msg.setSource(64241U);
    msg.setSourceEntity(131U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(35U);
    msg.custom.assign("SUYKGKSDGXSABEATNNTLFXOEAEZTLQJSSOVQSFRIKZNRDTKPOCSPJWWWEPVYGLBKAAKYMQEPBVKWZLWZIKOOYGSPQBGOXHIQQRMERXQNHGDUVEJLUIIFIZRQZBCBMSUOWMELEDJHPQYYNTKJTVUYVHNTWDJCZNQKBBARYFNDYSBIPBD");

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
    msg.setTimeStamp(0.8759079267416485);
    msg.setSource(13559U);
    msg.setSourceEntity(158U);
    msg.setDestination(42284U);
    msg.setDestinationEntity(220U);
    msg.custom.assign("DXKVKKQOEJAIVZFDVSFJCFWIFTLXQSCEMGIWBWHLUNCZDKHJHSGCTNONIWOYONQMXBDCMEAGARCGQBRZJSLBHLQDBMOXRLXNUFACPZYVPYDFRZUOJSOSILPPJFELNSWKXZYEHHDVIFQQTTNBRJSNPRMMBAYGCYHWZQKETSTWFYKRGHGNKXULPGGYUMMTRWEIAISGPNEAVQLRDUM");

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
    msg.setTimeStamp(0.5185156421575686);
    msg.setSource(12517U);
    msg.setSourceEntity(60U);
    msg.setDestination(18680U);
    msg.setDestinationEntity(133U);
    msg.custom.assign("GZWTJTZQJNSECGJOTHDCBTZALNYFSBDLAFFOHHCXMGTSBXAKYAKNXHOEBWSXCSUGNMLTYJMSQMZCFGRUFMAQOBPNNGEOZEDQDZXCWDAKPLRZXVJGLUYUULUKYYGIRQBLVRIRIRVXJNVMLHXUYMEMCZSMMHKCDRTB");

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
    msg.setTimeStamp(0.5268389784773245);
    msg.setSource(20301U);
    msg.setSourceEntity(72U);
    msg.setDestination(52656U);
    msg.setDestinationEntity(95U);
    msg.timeout = 3080U;
    msg.lat = 0.16442900532513804;
    msg.lon = 0.14036608790734373;
    msg.z = 0.40323369141218013;
    msg.z_units = 7U;
    msg.duration = 57054U;
    msg.speed = 0.6473965643798162;
    msg.speed_units = 239U;
    msg.type = 52U;
    msg.radius = 0.6209758709263163;
    msg.length = 0.216521941112515;
    msg.bearing = 0.06399926979293691;
    msg.direction = 139U;
    msg.custom.assign("KSYKLKQGPUIEUAOFJUNEXZAHAIPSNXDMWYKLCMQDHNDZHNTVJSMJBZKFBBFNGTHUMBNFPXCRLWLKSPACTCWLDMEYSIWTLOBIOHKOQVOYGPMQXREUXWRHYZZSTBZVGMIOOTWGIJDBUQWNRLZFRVYRUGVEPHANXMTQKCEDDVARDYAFIVBPOKSUJENAUVPCCJQCBIZKTSFG");

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
    msg.setTimeStamp(0.884698690690735);
    msg.setSource(49243U);
    msg.setSourceEntity(145U);
    msg.setDestination(32702U);
    msg.setDestinationEntity(193U);
    msg.timeout = 29989U;
    msg.lat = 0.5490376266174088;
    msg.lon = 0.7604944956596711;
    msg.z = 0.9493252008811739;
    msg.z_units = 129U;
    msg.duration = 3292U;
    msg.speed = 0.7439663642788671;
    msg.speed_units = 126U;
    msg.type = 172U;
    msg.radius = 0.8229973403986717;
    msg.length = 0.6277617848029586;
    msg.bearing = 0.12475885823970234;
    msg.direction = 30U;
    msg.custom.assign("TTBQNQFVOOVVIDFTNZPQWNDJZNYBRIESMFAHJCLMXBLUMFDXDGGIDEXVOPYKOGKVMOFVPRUTHQEIQLQBWFWSUYLVWWKDBUT");

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
    msg.setTimeStamp(0.7693457023319292);
    msg.setSource(16539U);
    msg.setSourceEntity(224U);
    msg.setDestination(43583U);
    msg.setDestinationEntity(168U);
    msg.timeout = 11553U;
    msg.lat = 0.9353991460143112;
    msg.lon = 0.1767400336006799;
    msg.z = 0.06592718272949938;
    msg.z_units = 166U;
    msg.duration = 8680U;
    msg.speed = 0.9493037753517071;
    msg.speed_units = 182U;
    msg.type = 80U;
    msg.radius = 0.9028872471644291;
    msg.length = 0.04653378162203503;
    msg.bearing = 0.3810431273665138;
    msg.direction = 85U;
    msg.custom.assign("BNPXEQRITDTJQOFFPQZXMGCKMPJUERYFFUDMCDWSQXBOZFUEUYBWQEGHERCTUXSOTNUHPYSFAGZGCEAHOSFARZTHQCPRKMBQKFMZGPIUCVXAJHV");

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
    msg.setTimeStamp(0.1108380826589398);
    msg.setSource(14543U);
    msg.setSourceEntity(173U);
    msg.setDestination(13558U);
    msg.setDestinationEntity(35U);
    msg.duration = 24101U;
    msg.custom.assign("QECPNKLLVHDUZINVPGRHIPHQJWYFRSJKMHJMGREZADUJUOCRVTSPXGYOWOJNWKVMGYTWLFMFLMRBSBLRDOMPLWVHVKALOEGKMYCYOAOZVXBXUPKSAXCPYHKXGVCBUTLMEFQIBJYEKAYUBRACDXGOQCBJVZNSABIWEGKTIEATDRHDWOQUAWZTFTTZXQSQFFSIMQIPJUTEGHNHZCNUNOEZ");

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
    msg.setTimeStamp(0.6502846243635432);
    msg.setSource(53867U);
    msg.setSourceEntity(246U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(38U);
    msg.duration = 44388U;
    msg.custom.assign("XIKOBUARMLEZQCSDXQSEODSXNFFHUHRB");

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
    msg.setTimeStamp(0.9160465605009616);
    msg.setSource(59050U);
    msg.setSourceEntity(74U);
    msg.setDestination(51614U);
    msg.setDestinationEntity(185U);
    msg.duration = 22818U;
    msg.custom.assign("ZGSAOSOIQPSFUJDHSGXEBKSSQCYCPDKYNCTUSSGKXPZHXLRABDBKNXIUWHQTYEAQJEUJYBWIDQHVMJRZBFAFNCPNCPHFVRDDELMWYBTHSOWRZUIFGTQLZVVXLGPRCTCWUOLFOLQVMWQHLTJDAARMYAKLONNGGYI");

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
    msg.setTimeStamp(0.2346369326247153);
    msg.setSource(31881U);
    msg.setSourceEntity(38U);
    msg.setDestination(65331U);
    msg.setDestinationEntity(215U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.16323582651323876;
    msg.control.set(tmp_msg_0);
    msg.duration = 39611U;
    msg.custom.assign("CYJUVTUEHGVWMHRJCGPEYPMKAKUTIKDWFURWRZAHVNEYBHQNUOCFTBEGNZPWHWEGYUHDGZISJTPLAHNBTGSGGJVRNBVVGBUAXMBDOPAMQTISQLZALWNTEPLJHFZHWEIXOOCECOKSJKSMFLTUDVOVLFYIBQHIRJXIEKRNLLPKDFBOCRXAISACXJWDMTMUFXDVD");

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
    msg.setTimeStamp(0.14897566721502653);
    msg.setSource(57110U);
    msg.setSourceEntity(35U);
    msg.setDestination(31697U);
    msg.setDestinationEntity(158U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9736212964732023;
    msg.control.set(tmp_msg_0);
    msg.duration = 40525U;
    msg.custom.assign("TSYLEKFJBRPAVYBJXDYSZKSFOXVAMAJGQMXZPOHQULTXBMNXMBZELZKVAGURXJOEVOTJUMWG");

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
    msg.setTimeStamp(0.4251052169487516);
    msg.setSource(11662U);
    msg.setSourceEntity(40U);
    msg.setDestination(63859U);
    msg.setDestinationEntity(175U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7495115291245652;
    tmp_msg_0.speed_units = 246U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17885U;
    msg.custom.assign("LQTWSRUQEUGVFDOYPJMIRIUJNJTYYUKCTJPWGOJQLOEEYSEAGHPEFZGMVBAYBYZAZWZKBZERMHHLXOSYKUBQNRTIPPESNJXWMCMHKGTRRBUXOVLFIWVVBHEXOJCYLAIHSIFQANULOZVLOBPFKBGSPQEHDWSAYTONVABXVMDEZLUFDRSRPNJMXKMNAUGCQXRINFATPQXCSY");

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
    msg.setTimeStamp(0.7484642232814193);
    msg.setSource(38690U);
    msg.setSourceEntity(245U);
    msg.setDestination(45153U);
    msg.setDestinationEntity(71U);
    msg.timeout = 60597U;
    msg.lat = 0.8620206308542697;
    msg.lon = 0.9370538888557679;
    msg.z = 0.953934004941147;
    msg.z_units = 101U;
    msg.speed = 0.29108663872957763;
    msg.speed_units = 170U;
    msg.bearing = 0.0003683787732748911;
    msg.cross_angle = 0.25513360170492894;
    msg.width = 0.04768942060250325;
    msg.length = 0.2791963217845196;
    msg.hstep = 0.5739791603736605;
    msg.coff = 79U;
    msg.alternation = 237U;
    msg.flags = 104U;
    msg.custom.assign("JBMNHQLLFAPTKUAJTQGJCVWRXDEHVPAAIQVONZDKXMOCUXYXEIWTXLLUOKAMGSIVNUBODGBRSFIZRGFKPUGFQAOTZOOVGEMFETYZKSJHURWQDCJMUMGJTFHMSZPCSNYIFCDVPBNTVZYOERCRDZMLPUAGBWZJYQWYLEJDLXIYQYEAOSBIQFJIKRKXSYICQRHDGGUXWLMTTREFCPHFKPDHW");

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
    msg.setTimeStamp(0.6492693702847834);
    msg.setSource(60610U);
    msg.setSourceEntity(198U);
    msg.setDestination(17208U);
    msg.setDestinationEntity(32U);
    msg.timeout = 18599U;
    msg.lat = 0.6864046318163309;
    msg.lon = 0.12852226069937234;
    msg.z = 0.027361422162351046;
    msg.z_units = 208U;
    msg.speed = 0.6018966980952287;
    msg.speed_units = 105U;
    msg.bearing = 0.6000714656334826;
    msg.cross_angle = 0.19907624236875565;
    msg.width = 0.7814017539473297;
    msg.length = 0.9354232986861373;
    msg.hstep = 0.7277521342418761;
    msg.coff = 12U;
    msg.alternation = 102U;
    msg.flags = 206U;
    msg.custom.assign("AEXIPOPWBVDKBAJNCQZBFMHKNYGQOHEDARSQVCYUGAVMUVZLFQBSWALSALAHDKYICTDKHNELFKVCMDHTTSRPJREUAEYWSOBUDJIBYSJQHNVERFYKGYQVWHHXGIBNGNJFOUXYKIVJLFSIIOEFKNRXLTDTPCOJWPWUZQTVGTCBPTMSRBGXLYLZCISQZNGAXEXOCWGOMBMIZKPFUZ");

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
    msg.setTimeStamp(0.3922638372676581);
    msg.setSource(9008U);
    msg.setSourceEntity(23U);
    msg.setDestination(13400U);
    msg.setDestinationEntity(52U);
    msg.timeout = 18165U;
    msg.lat = 0.8585647138083667;
    msg.lon = 0.8311318901962929;
    msg.z = 0.3091232941003146;
    msg.z_units = 233U;
    msg.speed = 0.9900873907539016;
    msg.speed_units = 69U;
    msg.bearing = 0.8416212126384417;
    msg.cross_angle = 0.1206520308669945;
    msg.width = 0.7618410206435554;
    msg.length = 0.7999138711612475;
    msg.hstep = 0.33906482109301017;
    msg.coff = 174U;
    msg.alternation = 113U;
    msg.flags = 5U;
    msg.custom.assign("SVXKRREHPMMRGSEVGZLOWVBYLMMDKZJYOAXZRJFCPDDOLFYZCYTPGJLSGHIVJZFAPWSKRJHXRABXUTBEWWCYFDUINVISTWVPGQ");

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
    msg.setTimeStamp(0.6178358365270296);
    msg.setSource(4499U);
    msg.setSourceEntity(224U);
    msg.setDestination(1215U);
    msg.setDestinationEntity(55U);
    msg.timeout = 46857U;
    msg.lat = 0.5248793753357113;
    msg.lon = 0.9861174441093815;
    msg.z = 0.4223829754349089;
    msg.z_units = 63U;
    msg.speed = 0.010887299986091059;
    msg.speed_units = 115U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.21847653988336713;
    tmp_msg_0.y = 0.46196070023308844;
    tmp_msg_0.z = 0.019294364289728194;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XOTCHQUMWCAHIBIOETISWZIZZMGUNYRQKRKDTKLJBVOUHMUYCLRCZUFINLICKDLYKVNVSUPHEZFMDWBYXVXLXGWVDODRSRYHYQJQHTPSYEESNRZDFLUQJWPKGIAHEVNGTCIMRQVFUGSEBYQABNFAGDTTAOGSJOCBJMVAZGG");

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
    msg.setTimeStamp(0.08534693405411387);
    msg.setSource(41026U);
    msg.setSourceEntity(83U);
    msg.setDestination(15307U);
    msg.setDestinationEntity(107U);
    msg.timeout = 57734U;
    msg.lat = 0.37011878753731364;
    msg.lon = 0.8081755955582242;
    msg.z = 0.34770435611080497;
    msg.z_units = 108U;
    msg.speed = 0.21968551778027368;
    msg.speed_units = 137U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6909712850248475;
    tmp_msg_0.y = 0.4572011380045481;
    tmp_msg_0.z = 0.06360041139595485;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GGTSLXZCUILZLHKXYFQVTMSUAAVROSRMGOLDHGKSMMVPONJCWDNJDAYKGIEJQKYHFYDKTDRDCLWFSZGCAABZVBNYS");

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
    msg.setTimeStamp(0.2976392857724961);
    msg.setSource(11813U);
    msg.setSourceEntity(125U);
    msg.setDestination(21679U);
    msg.setDestinationEntity(222U);
    msg.timeout = 30388U;
    msg.lat = 0.9464955850144687;
    msg.lon = 0.32859530834455;
    msg.z = 0.4864134571216666;
    msg.z_units = 189U;
    msg.speed = 0.0670594310382413;
    msg.speed_units = 118U;
    msg.custom.assign("ZNLGTVYDQQTQDLZNXCDFWJCCWZHTUZQPABMYCXKNDRAMSVTFEPAIJGBCJGJIWUENHVTPSBDILKQJMOJGYNFPFOFMLFEREWUEGJEIVSEHRBBSUHCTXKYGFMANGBOYZBGJDPUXXSSVINHFQUSVQTQHHYYOWJPMSQYFXCICEOWPWRNRNUWVO");

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
    msg.setTimeStamp(0.7703593006733457);
    msg.setSource(25130U);
    msg.setSourceEntity(210U);
    msg.setDestination(45332U);
    msg.setDestinationEntity(19U);
    msg.x = 0.47627077068091894;
    msg.y = 0.6100548760325972;
    msg.z = 0.8039468519187584;

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
    msg.setTimeStamp(0.2540275886751414);
    msg.setSource(22346U);
    msg.setSourceEntity(228U);
    msg.setDestination(18568U);
    msg.setDestinationEntity(187U);
    msg.x = 0.581337954102558;
    msg.y = 0.8113138038046674;
    msg.z = 0.5654324069938074;

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
    msg.setTimeStamp(0.4106336350256785);
    msg.setSource(51292U);
    msg.setSourceEntity(238U);
    msg.setDestination(54962U);
    msg.setDestinationEntity(110U);
    msg.x = 0.045564808427289716;
    msg.y = 0.7047872213757658;
    msg.z = 0.9008630106593378;

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
    msg.setTimeStamp(0.2681402902381076);
    msg.setSource(5424U);
    msg.setSourceEntity(50U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(0U);
    msg.timeout = 53294U;
    msg.lat = 0.21991186147644803;
    msg.lon = 0.8823776845076591;
    msg.z = 0.3018370109077433;
    msg.z_units = 74U;
    msg.amplitude = 0.44998957614973656;
    msg.pitch = 0.9754235460410352;
    msg.speed = 0.03817282516599463;
    msg.speed_units = 208U;
    msg.custom.assign("HUMAJPNDSAWIBDGXAUSSKEFCTXFJQFQUIDCMAPTURKYKQSAHLQBNNPJRZUNWMHGBDKDLLLZMWSMVPJMOOHOPYIIBZVETYZPVNQGBNOGLIGFDXURTEWJYHRZEMIBXHDREVIWXISQQUEGOROIISEYQVTJJCBGOOVWNRFXHUMCFPFTLDCQAACATWNSJOXEZGYRHAKLBUNPNPXHKFDCEKXVOECYKCKXJCJYWMYTMTTQLZZA");

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
    msg.setTimeStamp(0.7588257902299835);
    msg.setSource(27378U);
    msg.setSourceEntity(7U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(223U);
    msg.timeout = 62387U;
    msg.lat = 0.7172143217474838;
    msg.lon = 0.8825845939827242;
    msg.z = 0.3527842690010078;
    msg.z_units = 158U;
    msg.amplitude = 0.5314863047423208;
    msg.pitch = 0.8029315843478845;
    msg.speed = 0.10469337599828976;
    msg.speed_units = 122U;
    msg.custom.assign("WVTNTSRXZLJMJKEDOACWYGIHERDVDYGGXSLSQBWEPMHWXJKTASCYGWRIZOSFTDTARCMFNWTQCEOOFIYYPQJHBKNCYFKEVEIVBZOJEC");

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
    msg.setTimeStamp(0.6565872129542344);
    msg.setSource(9549U);
    msg.setSourceEntity(53U);
    msg.setDestination(42500U);
    msg.setDestinationEntity(230U);
    msg.timeout = 27496U;
    msg.lat = 0.07207070108542213;
    msg.lon = 0.7139972988377534;
    msg.z = 0.4381774925731261;
    msg.z_units = 187U;
    msg.amplitude = 0.08709649016012944;
    msg.pitch = 0.7559711893305777;
    msg.speed = 0.258897644711896;
    msg.speed_units = 48U;
    msg.custom.assign("ZGBXHPHTNRBXZJJRAWJMCUTQGOXZTQNPRERICNWXHZEAHMMFTKDLSSPRHFPKNGZIYULCGXWIKMCKWVFOZKFEIDETZYFUBTYGLZYZQLUBUDVVPOLIKXIJYVBRUWUBNHMSQXOASVCDNAASXLYNXACYQRICHMCWSPTWEPSOYKDJUKBDKLMOJUFFAENQGSFIGQGWMILOVKVBFJHPOYQRWAELAZ");

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
    msg.setTimeStamp(0.49933757854813166);
    msg.setSource(57084U);
    msg.setSourceEntity(241U);
    msg.setDestination(30034U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.576819152791138);
    msg.setSource(63005U);
    msg.setSourceEntity(184U);
    msg.setDestination(11182U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.45883224213066154);
    msg.setSource(52927U);
    msg.setSourceEntity(218U);
    msg.setDestination(19309U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9548025679280734);
    msg.setSource(28425U);
    msg.setSourceEntity(134U);
    msg.setDestination(46463U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.9501926202231029;
    msg.lon = 0.7140952697451654;
    msg.z = 0.9986063972040454;
    msg.z_units = 43U;
    msg.radius = 0.4306148819639062;
    msg.duration = 43565U;
    msg.speed = 0.564018673787818;
    msg.speed_units = 190U;
    msg.custom.assign("KMIHJNYDIKPXXYZSAFCNZKOECMDLOMRMKARJZNHJRJSYTNVRWZDOW");

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
    msg.setTimeStamp(0.6850058913465088);
    msg.setSource(6154U);
    msg.setSourceEntity(138U);
    msg.setDestination(62172U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.6188480734693738;
    msg.lon = 0.32436751552581;
    msg.z = 0.38779310947131995;
    msg.z_units = 156U;
    msg.radius = 0.11494347669284777;
    msg.duration = 30822U;
    msg.speed = 0.871312418455264;
    msg.speed_units = 134U;
    msg.custom.assign("YUGPJUJSKRGKYSLEPPFRGKELZSWNSLWVHHZDRVDFACNYHAQTYTRGPGYGNLCPZJVWFJNINTBTPBMLQRTMWCXPFJBLUISCQESXPRIVMIXAOLBEHLJTUQQMKWDACCFKHNOICWDNJCAZBTUDBOHANYKXGFZRRNIUOEWRHTRKIJUKYVDZXVQAXMTAKAFAZOPHWMOCOOGBWEIXDEMZYTFLSGGKDSQSZXOBIJWEQVQYMJFMBCFUEMDQIVOSBYEUHNXHZ");

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
    msg.setTimeStamp(0.7378597873973876);
    msg.setSource(20741U);
    msg.setSourceEntity(209U);
    msg.setDestination(4667U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.4773577962498907;
    msg.lon = 0.8843156747816203;
    msg.z = 0.7994362750524305;
    msg.z_units = 6U;
    msg.radius = 0.5024349373512875;
    msg.duration = 12662U;
    msg.speed = 0.07903778932520156;
    msg.speed_units = 39U;
    msg.custom.assign("UAVFAPLKZBUHDMUQVAYEGOFSVKQMNRGKFOZSDWJIEDQWYXCNKVERWHCBNWRAFMYHJBFHICSNHYNTCDWIWTHUZSKTJNCMNWQQSOJTRUAGPW");

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
    msg.setTimeStamp(0.14108485198799547);
    msg.setSource(3692U);
    msg.setSourceEntity(151U);
    msg.setDestination(29311U);
    msg.setDestinationEntity(62U);
    msg.timeout = 61383U;
    msg.flags = 58U;
    msg.lat = 0.2057014107962598;
    msg.lon = 0.20606138735439117;
    msg.start_z = 0.08439303600087267;
    msg.start_z_units = 176U;
    msg.end_z = 0.06151667129848071;
    msg.end_z_units = 74U;
    msg.radius = 0.0160104121646355;
    msg.speed = 0.14651656231556143;
    msg.speed_units = 14U;
    msg.custom.assign("KBBUJNINZAQJTQMKASHDHDQPMPKGLTKIDKMXAFCKZJLPQHBGVOFFFMZDSORJLJHVFNDSTEVSPYSTFXNCVKHEXAXXASHLDJQWOCQSQBZOPFRGPUOTNKWPXNZJWENBHLPGDXIMZLASZAIWYEDEUCGHHDAOLIRRRCVDMEXTCJQUIQVQOROUWRJCYEWN");

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
    msg.setTimeStamp(0.3564921056209539);
    msg.setSource(9052U);
    msg.setSourceEntity(184U);
    msg.setDestination(53650U);
    msg.setDestinationEntity(224U);
    msg.timeout = 51854U;
    msg.flags = 70U;
    msg.lat = 0.8669460783177256;
    msg.lon = 0.22192726732409618;
    msg.start_z = 0.010750200587363867;
    msg.start_z_units = 90U;
    msg.end_z = 0.44191443639053907;
    msg.end_z_units = 2U;
    msg.radius = 0.9679601055957349;
    msg.speed = 0.8524269797324512;
    msg.speed_units = 192U;
    msg.custom.assign("FFBHMWZILGUOOPMFZSITBZNIZKVOQIEBGGTXPNCVBRVINJRWJAMQLVCGPIRBEULKVNZHYUTYKCUSWQWFIT");

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
    msg.setTimeStamp(0.4758565442891849);
    msg.setSource(46905U);
    msg.setSourceEntity(222U);
    msg.setDestination(28632U);
    msg.setDestinationEntity(246U);
    msg.timeout = 60805U;
    msg.flags = 143U;
    msg.lat = 0.5814037862045834;
    msg.lon = 0.8687636278128376;
    msg.start_z = 0.03302366459342698;
    msg.start_z_units = 78U;
    msg.end_z = 0.2089343462844082;
    msg.end_z_units = 110U;
    msg.radius = 0.11241833312683935;
    msg.speed = 0.37380658734664085;
    msg.speed_units = 30U;
    msg.custom.assign("JROZLVODAJEQOWZFKLPREBAFVMWCVKWFGISAFPWOBXGBAKCUYPYRGIMPUCWKOLTAHCIGJITPSYOUKBSYANDVFLZXNHBJSRASLFHXMTVOYDTIMFJLBSDEBQPNDHVQQQSNZGPXYYUXWZGMMSMVTHCHJLEIGYEUOEJHNXRUTUQPMTFVPEKCZHXLNGMDULFASQREI");

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
    msg.setTimeStamp(0.3737926486172466);
    msg.setSource(57832U);
    msg.setSourceEntity(252U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(200U);
    msg.timeout = 17320U;
    msg.lat = 0.2304193186540281;
    msg.lon = 0.2646889467402581;
    msg.z = 0.15719647073365206;
    msg.z_units = 97U;
    msg.speed = 0.1557459559806812;
    msg.speed_units = 15U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9517295506798076;
    tmp_msg_0.y = 0.4227066903114468;
    tmp_msg_0.z = 0.5485219780295213;
    tmp_msg_0.t = 0.00633985882443977;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DTABPVOUFZHGRRIBIJCHSJBJNZNBCAEEGKTEWTYYTIMCTLCCGZXIRSRZDHMAMULFPQSVCIXKRMBKMNYOJKOOJWQKAGNMQPETHAAPVAYXFCMZSUTQBDLXVVJNNUDGWTMEFKGDRPPDSBBIJPXAWIHFUCJYFZTIEEJOLDWTZBAFDNGQHN");

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
    msg.setTimeStamp(0.7108422317772559);
    msg.setSource(8509U);
    msg.setSourceEntity(173U);
    msg.setDestination(45240U);
    msg.setDestinationEntity(254U);
    msg.timeout = 4167U;
    msg.lat = 0.23046904454361228;
    msg.lon = 0.02191478670989777;
    msg.z = 0.03467425993323392;
    msg.z_units = 26U;
    msg.speed = 0.9955343513031383;
    msg.speed_units = 65U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5473701012029537;
    tmp_msg_0.y = 0.8355393434871013;
    tmp_msg_0.z = 0.6292754594806657;
    tmp_msg_0.t = 0.5010791861540832;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NNNZSWITTQGLQWNPYZBXSWLXSGKKDFGEBCOVFQEMMDRJTJWQNKCMZTPHAWIBOCFYYOOTGIIJNRQAHQQHZOCSYLWXUBBFJCPKGZUROYOLDZANWPTLFVIQNZSFKIHEMUZTGOEZAATSSARUYXDVPRLFFJFXBQHZPBCUVJLAPPIUBYRBWMLDEXHJMOJTKDHTMDYYEKPWUNUNJOFYVEMBE");

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
    msg.setTimeStamp(0.5354538358384028);
    msg.setSource(15131U);
    msg.setSourceEntity(243U);
    msg.setDestination(58016U);
    msg.setDestinationEntity(14U);
    msg.timeout = 34749U;
    msg.lat = 0.46047616412077075;
    msg.lon = 0.647784842493036;
    msg.z = 0.749039533289276;
    msg.z_units = 80U;
    msg.speed = 0.7135728145024982;
    msg.speed_units = 119U;
    msg.custom.assign("WRWCVEZYYGJBTFPOTEUMYDXTMBQUQRMYBKMDMHNBMKHVLYPQXAAQIPCRNWERUEVTDHYHGELYDQAYZZDUZNEXOXAYHZGOZSXFGLGJDUOFEJKJLLABAVBQAWPTWZCJZDSFHPOFPERITROMXQQCERKLXWSUCSTIQOJXQEVDO");

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
    msg.setTimeStamp(0.4394951871482281);
    msg.setSource(17674U);
    msg.setSourceEntity(48U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(4U);
    msg.x = 0.04289237877117824;
    msg.y = 0.6353455443950922;
    msg.z = 0.36503224553515523;
    msg.t = 0.04645884535726974;

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
    msg.setTimeStamp(0.8603085616744858);
    msg.setSource(64087U);
    msg.setSourceEntity(78U);
    msg.setDestination(53218U);
    msg.setDestinationEntity(33U);
    msg.x = 0.5512441676804131;
    msg.y = 0.6398040692185487;
    msg.z = 0.39755486988490885;
    msg.t = 0.7668723571774234;

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
    msg.setTimeStamp(0.13151896197803892);
    msg.setSource(56372U);
    msg.setSourceEntity(51U);
    msg.setDestination(27947U);
    msg.setDestinationEntity(31U);
    msg.x = 0.23543733454725868;
    msg.y = 0.7655773529714736;
    msg.z = 0.3862124023468042;
    msg.t = 0.5418243393549221;

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
    msg.setTimeStamp(0.3267469063726919);
    msg.setSource(48642U);
    msg.setSourceEntity(152U);
    msg.setDestination(14248U);
    msg.setDestinationEntity(208U);
    msg.timeout = 29884U;
    msg.name.assign("DTSRJVPGTUYCCYZAROASSVIQPCNKYCLBBPGWHXFXEEIXWQQJBXRLPARJMLVXCGUNBEAGO");
    msg.custom.assign("HRUBLMGQEZVVKDNJHMQMNBLDTNSRLWFRPRWXNXQKSHWEORCGUBBBKTANTQLPYSFISISVSCTJZOVCGSRZSGEITDWLFLXTINFIHSGJZYMHQNWPAYDMWPGAERCBMEPBMRNFHTFUCPPJKGBNWCIZZMLUGVSUAHTZHZJIEDGBVFYYRAXKPYEOYQDFVXDXOQJOMJUKRU");

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
    msg.setTimeStamp(0.600284007512545);
    msg.setSource(63061U);
    msg.setSourceEntity(38U);
    msg.setDestination(43343U);
    msg.setDestinationEntity(22U);
    msg.timeout = 40710U;
    msg.name.assign("OMZNEOBMEJKPGBTHLQLDZIFBRCHLDOBADOHGTHXRTYDYEKWZMIRUOJZWPUMHOUINVIISWWJSPERLHDTBGQWSVXUGVPYVRRJSNQABXOGQGBALFPXFQICSEXRADVGASKFZVDRONEYLKWDYWOEQFSNBADUMAJFKUNXIEDKQPGTACZPWRTNM");
    msg.custom.assign("REQGBKCHWUNIOBPZEMEZIGMQHH");

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
    msg.setTimeStamp(0.8337067432155485);
    msg.setSource(16006U);
    msg.setSourceEntity(99U);
    msg.setDestination(44480U);
    msg.setDestinationEntity(134U);
    msg.timeout = 37868U;
    msg.name.assign("TXJACBNKISQEWSTBDHNZCCGQKWFJLBPAQYAUVODILKEJNUTDURMZPICXCOROUUFRUZOIMULBPKDISUELVSYNNNSUKHIGZCRXGJDWIPQDZFHSTIRMXKWIKXAJYDQVSDXHEQZMWOMTOMA");
    msg.custom.assign("ZYZBBQADKXRUKOXSCNWMCFRULJYQKSISLOWGDFBAQTZUFSPVXFXIZZENKGILEGNZHKUMCEVGYMCMLERYWPTJISDHELQNWHOOBVLTHUVWISCLAWQAPAHPMRDSXKKUXDQJARTQPFCBAGHQEGYNKDTXCJAHLBHZYFJGBFRJYPIEMTVAIOEOMXNZQOKYTJCVNLXTBZUBPKNCHZFFIDGWNVBJMWULXORUQFYDSWPWROAUVJRVVPT");

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
    msg.setTimeStamp(0.349860230925349);
    msg.setSource(3551U);
    msg.setSourceEntity(10U);
    msg.setDestination(11653U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.7398491576562274;
    msg.lon = 0.2641124173692281;
    msg.z = 0.562608884288351;
    msg.z_units = 209U;
    msg.speed = 0.8907227632854631;
    msg.speed_units = 139U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9074024107926607;
    tmp_msg_0.y = 0.5710391782423481;
    tmp_msg_0.z = 0.9966294773126344;
    tmp_msg_0.t = 0.6547104618279214;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.20149643138965834;
    msg.custom.assign("UGDDFVAMZETONJMEIWEZCZAVTQMJYWKZATIPRZRGQHZCFLJDZHUQMSSERXKXVDANGWXHQYSLWLKGRYIOAQXHSTCEJDUUHKRFTNMCQGXVFKONCSPUPPWBQZLMTONIIFLFFDTUXDRBBLSYYZSWMHTDRADVPPGSZTIIINBOYCPNHHWWJYLWPWLSYRQBXSAGO");

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
    msg.setTimeStamp(0.8612351727971179);
    msg.setSource(31457U);
    msg.setSourceEntity(241U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.06728555586631935;
    msg.lon = 0.2410650564606064;
    msg.z = 0.45578434737859663;
    msg.z_units = 231U;
    msg.speed = 0.42697370049439;
    msg.speed_units = 91U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44672U;
    tmp_msg_0.off_x = 0.43464824922094214;
    tmp_msg_0.off_y = 0.8083494412919981;
    tmp_msg_0.off_z = 0.18379813950781143;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7846410080287207;
    msg.custom.assign("ZSSASLDXRGSNEUPGJLPRYZDAHNOBSULHXQWUGIUCMRCXOBKYTJFYQBBBGSDLHEFHBARFPTDWTECCAZKCWTAJKBXFDEFTKQVUGZYVJOQUXEEFELKTHBPUYWOXMMNOGVMRMNWWLIMVGMDASZUIFSQLTGOYRBQAPJEIHRJLZVHEVZLYFOVUFOXPTIPMVQCZKYDVYNOHARTGCWKJIJIKDHHXT");

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
    msg.setTimeStamp(0.5044717568011393);
    msg.setSource(42856U);
    msg.setSourceEntity(75U);
    msg.setDestination(53505U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.4475877889715455;
    msg.lon = 0.5734053075783638;
    msg.z = 0.3187710683135465;
    msg.z_units = 214U;
    msg.speed = 0.6478247970095262;
    msg.speed_units = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46475U;
    tmp_msg_0.off_x = 0.5952752075092278;
    tmp_msg_0.off_y = 0.805045539603812;
    tmp_msg_0.off_z = 0.3716976271514675;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.2562646812368702;
    msg.custom.assign("TBPGVMJQZUJSWT");

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
    msg.setTimeStamp(0.4838407730442005);
    msg.setSource(58425U);
    msg.setSourceEntity(164U);
    msg.setDestination(5915U);
    msg.setDestinationEntity(98U);
    msg.vid = 22083U;
    msg.off_x = 0.5604456130549045;
    msg.off_y = 0.7418963963518539;
    msg.off_z = 0.7254934433840249;

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
    msg.setTimeStamp(0.690127492888696);
    msg.setSource(33428U);
    msg.setSourceEntity(21U);
    msg.setDestination(36357U);
    msg.setDestinationEntity(113U);
    msg.vid = 54174U;
    msg.off_x = 0.023348989588075297;
    msg.off_y = 0.21467317997849078;
    msg.off_z = 0.8794607956910099;

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
    msg.setTimeStamp(0.5116504505844025);
    msg.setSource(24367U);
    msg.setSourceEntity(254U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(152U);
    msg.vid = 15012U;
    msg.off_x = 0.2361470741837156;
    msg.off_y = 0.4735238786078847;
    msg.off_z = 0.20511156567932087;

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
    msg.setTimeStamp(0.4950369858301913);
    msg.setSource(27111U);
    msg.setSourceEntity(48U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.6582791322539198);
    msg.setSource(49537U);
    msg.setSourceEntity(25U);
    msg.setDestination(6520U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.9543751752890837);
    msg.setSource(45449U);
    msg.setSourceEntity(10U);
    msg.setDestination(65220U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.5306609777995605);
    msg.setSource(31354U);
    msg.setSourceEntity(42U);
    msg.setDestination(25376U);
    msg.setDestinationEntity(194U);
    msg.mid = 64420U;

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
    msg.setTimeStamp(0.024212483578213817);
    msg.setSource(41655U);
    msg.setSourceEntity(237U);
    msg.setDestination(9836U);
    msg.setDestinationEntity(167U);
    msg.mid = 45830U;

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
    msg.setTimeStamp(0.12172062016156382);
    msg.setSource(3249U);
    msg.setSourceEntity(168U);
    msg.setDestination(40563U);
    msg.setDestinationEntity(139U);
    msg.mid = 34958U;

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
    msg.setTimeStamp(0.6371384034453706);
    msg.setSource(45081U);
    msg.setSourceEntity(37U);
    msg.setDestination(33803U);
    msg.setDestinationEntity(179U);
    msg.state = 80U;
    msg.eta = 53729U;
    msg.info.assign("FAYBQZRRSVAMMZUXINOGPCUPYDHZETKBGXCJSHOUXHPBFTZDLXCGAYBOMKXDFONSKRGVPLFFOASWQKGIQTQUVFEJUUWELCLHHSXIYNQJIMFNFVMJGRRYBSDPMAZCNCTPTQXFDIXULVGAQCULYWXBHFIIJUNWYDIWYEJUWBBRIVSTHWVOGDZVTMCRJVKGYMBQVAZEMJHMSCQTDDOLJEZKWRTIO");

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
    msg.setTimeStamp(0.9312533300943395);
    msg.setSource(65461U);
    msg.setSourceEntity(43U);
    msg.setDestination(39184U);
    msg.setDestinationEntity(180U);
    msg.state = 196U;
    msg.eta = 38517U;
    msg.info.assign("RYDUSZXRZHNVGZLVFOQIPAJOOKZSVWBLDQLXQNYBXECGPXIWEJAMRGBHGIKHENMCAFWIJXMGDKNHFITGFSTEALQJZKFJSRUDULUFMEQCRBOABPXYQWRHOHOWMFNEOZVMMRTSXFYZSROPCVPYJMKNKXZBLZPWLTWQGPTEJFLUCXPYCEWTXUK");

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
    msg.setTimeStamp(0.44929125264593706);
    msg.setSource(5352U);
    msg.setSourceEntity(21U);
    msg.setDestination(1771U);
    msg.setDestinationEntity(33U);
    msg.state = 18U;
    msg.eta = 24874U;
    msg.info.assign("MWTXQSEIFOLYSMJKZYLKAHGKJCXSYPFLAQUNETCTBZGGYPBVDWCFRTLMCLOCGAKMMPNJWADMQWSMPZDLKRQETPGTRPRIOXVBKDMSLGRUAEHHYAPQDWJNVHXAIYSDPU");

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
    msg.setTimeStamp(0.001685038555328866);
    msg.setSource(10998U);
    msg.setSourceEntity(22U);
    msg.setDestination(55684U);
    msg.setDestinationEntity(43U);
    msg.system = 18591U;
    msg.duration = 32285U;
    msg.speed = 0.01256984410736628;
    msg.speed_units = 131U;
    msg.x = 0.8885676794011708;
    msg.y = 0.6720892090738358;
    msg.z = 0.4738509002958574;
    msg.z_units = 50U;

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
    msg.setTimeStamp(0.97841379330773);
    msg.setSource(825U);
    msg.setSourceEntity(173U);
    msg.setDestination(56031U);
    msg.setDestinationEntity(113U);
    msg.system = 31863U;
    msg.duration = 48502U;
    msg.speed = 0.015373477944820357;
    msg.speed_units = 249U;
    msg.x = 0.8242939512932383;
    msg.y = 0.3056297204538545;
    msg.z = 0.41435868135660503;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.5656509287873741);
    msg.setSource(33480U);
    msg.setSourceEntity(208U);
    msg.setDestination(10975U);
    msg.setDestinationEntity(6U);
    msg.system = 26751U;
    msg.duration = 43249U;
    msg.speed = 0.5884451792146453;
    msg.speed_units = 37U;
    msg.x = 0.3348221921417265;
    msg.y = 0.4094231039511995;
    msg.z = 0.5137576819456138;
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
    msg.setTimeStamp(0.28827890562897684);
    msg.setSource(5304U);
    msg.setSourceEntity(185U);
    msg.setDestination(41835U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.19521828865955737;
    msg.lon = 0.47564821519357203;
    msg.speed = 0.992596260687439;
    msg.speed_units = 70U;
    msg.duration = 17148U;
    msg.sys_a = 9878U;
    msg.sys_b = 44832U;
    msg.move_threshold = 0.6513637992388603;

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
    msg.setTimeStamp(0.9816814075728217);
    msg.setSource(48812U);
    msg.setSourceEntity(222U);
    msg.setDestination(41403U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.9052005666035745;
    msg.lon = 0.6710221157706905;
    msg.speed = 0.27911085045941597;
    msg.speed_units = 125U;
    msg.duration = 27230U;
    msg.sys_a = 50282U;
    msg.sys_b = 49336U;
    msg.move_threshold = 0.3563875316310211;

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
    msg.setTimeStamp(0.6162410978676143);
    msg.setSource(27484U);
    msg.setSourceEntity(196U);
    msg.setDestination(39014U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.316107571937589;
    msg.lon = 0.8189077839189137;
    msg.speed = 0.9342877820439779;
    msg.speed_units = 126U;
    msg.duration = 42088U;
    msg.sys_a = 27128U;
    msg.sys_b = 30735U;
    msg.move_threshold = 0.21669435647062207;

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
    msg.setTimeStamp(0.1629980735346631);
    msg.setSource(37457U);
    msg.setSourceEntity(230U);
    msg.setDestination(62540U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.6719728618398596;
    msg.lon = 0.9063631370785913;
    msg.z = 0.07059837738341346;
    msg.z_units = 80U;
    msg.speed = 0.13807414401636786;
    msg.speed_units = 156U;
    msg.custom.assign("KLAHZURLJOJTHKBAZSHCLHKBPBEEPITNLVBRYHDSAKAAEEOSEBNMQGJFGVDYQCRSOYYTXTNAMKSUDTVSXCNHFQCRCBQGYUIFZFZVORPGOPEVTQTLJMKCCLVWOW");

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
    msg.setTimeStamp(0.11286001859028594);
    msg.setSource(39048U);
    msg.setSourceEntity(224U);
    msg.setDestination(22674U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.755804184051438;
    msg.lon = 0.26908645836845146;
    msg.z = 0.9770229840890512;
    msg.z_units = 191U;
    msg.speed = 0.6737349657342396;
    msg.speed_units = 253U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3979570009855371;
    tmp_msg_0.lon = 0.3274608576106097;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EKEYEYWVWWLFIVXHMCZQIJUWTFRSHDFKUNDEWWJMQMMOXLZKOBGWZKTVQQYYEZDLIKQ");

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
    msg.setTimeStamp(0.913391324258985);
    msg.setSource(126U);
    msg.setSourceEntity(214U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.8228169797244609;
    msg.lon = 0.08078713496927459;
    msg.z = 0.09340072823993639;
    msg.z_units = 125U;
    msg.speed = 0.07146619289824552;
    msg.speed_units = 160U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.959662179346171;
    tmp_msg_0.lon = 0.36869848840258923;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YJELXCUEKRHHSKVPSBSFSVPCTCWTUSMJSZSACPNGM");

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
    msg.setTimeStamp(0.6018476212852194);
    msg.setSource(17402U);
    msg.setSourceEntity(148U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.5323453663563625;
    msg.lon = 0.27283789086113674;

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
    msg.setTimeStamp(0.32774209518391206);
    msg.setSource(21972U);
    msg.setSourceEntity(172U);
    msg.setDestination(43334U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.8112143101943796;
    msg.lon = 0.4176345998724139;

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
    msg.setTimeStamp(0.2643050477425041);
    msg.setSource(46378U);
    msg.setSourceEntity(2U);
    msg.setDestination(25051U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.9929843438553045;
    msg.lon = 0.8408598938104073;

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
    msg.setTimeStamp(0.43993937582603004);
    msg.setSource(32881U);
    msg.setSourceEntity(113U);
    msg.setDestination(14517U);
    msg.setDestinationEntity(182U);
    msg.timeout = 34791U;
    msg.lat = 0.6289305336537527;
    msg.lon = 0.49568983339641925;
    msg.z = 0.4482617160495763;
    msg.z_units = 56U;
    msg.pitch = 0.19873643929578177;
    msg.amplitude = 0.2741425008320578;
    msg.duration = 43460U;
    msg.speed = 0.4735422526279719;
    msg.speed_units = 251U;
    msg.radius = 0.7730641048110781;
    msg.direction = 147U;
    msg.custom.assign("OLPFSSGMQHDIOSYCCOGKBHSIBMGUAUVTCFMABPGHMJVWEKTQZFD");

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
    msg.setTimeStamp(0.16145033472354653);
    msg.setSource(47185U);
    msg.setSourceEntity(103U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(215U);
    msg.timeout = 13376U;
    msg.lat = 0.07037600860610793;
    msg.lon = 0.17799783817950776;
    msg.z = 0.6783462276681604;
    msg.z_units = 104U;
    msg.pitch = 0.09034028021010787;
    msg.amplitude = 0.8406292146012929;
    msg.duration = 24261U;
    msg.speed = 0.7669483793415953;
    msg.speed_units = 210U;
    msg.radius = 0.3554015576139953;
    msg.direction = 22U;
    msg.custom.assign("NAMYLFSGMQQLKSXKQFOFUVFBAWHTEYSTEUYJZRJMGUNALBNBRICTTSPIDLOPTZVGOJENCBUDFUEYIHKDXLMDXRJKAPCYURDWMKCFTBRWZYPOMCQENBVZIIXKUPTYWHCVIYBLBLMDNWZNQQEKZUIONSBDSVDXTTALGJFLXWOXWRADGKYHIFWHMZPSRJVOSVEDCHZCPQVPEOSJRUMKVNHFAGHXOHGQJIRLZAXTHYGMEAGRJSUKQFVWCZENA");

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
    msg.setTimeStamp(0.34756869725328177);
    msg.setSource(57351U);
    msg.setSourceEntity(21U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(10U);
    msg.timeout = 1681U;
    msg.lat = 0.06187533404585133;
    msg.lon = 0.3217734236910277;
    msg.z = 0.9200585736654338;
    msg.z_units = 97U;
    msg.pitch = 0.04688773879121644;
    msg.amplitude = 0.2177757852702501;
    msg.duration = 11575U;
    msg.speed = 0.3247983192515591;
    msg.speed_units = 158U;
    msg.radius = 0.5315380285088396;
    msg.direction = 102U;
    msg.custom.assign("NQUFDASJHQHMLSVVQHXOYTPIOACGGRFNIXDDLFDSEGUFWXYKOIEQOGDTVAYRJMJCIBD");

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
    msg.setTimeStamp(0.12244087264995451);
    msg.setSource(21521U);
    msg.setSourceEntity(221U);
    msg.setDestination(6911U);
    msg.setDestinationEntity(145U);
    msg.control_src = 32518U;
    msg.control_ent = 241U;
    msg.timeout = 0.5283753706765458;
    msg.loiter_radius = 0.1911063440759606;
    msg.altitude_interval = 0.0808585077943077;

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
    msg.setTimeStamp(0.8182856393259533);
    msg.setSource(32834U);
    msg.setSourceEntity(114U);
    msg.setDestination(832U);
    msg.setDestinationEntity(145U);
    msg.control_src = 36081U;
    msg.control_ent = 27U;
    msg.timeout = 0.607739103604132;
    msg.loiter_radius = 0.5918904967611289;
    msg.altitude_interval = 0.7736252994981749;

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
    msg.setTimeStamp(0.5918901506434597);
    msg.setSource(57113U);
    msg.setSourceEntity(233U);
    msg.setDestination(5712U);
    msg.setDestinationEntity(253U);
    msg.control_src = 20100U;
    msg.control_ent = 7U;
    msg.timeout = 0.8460456445879975;
    msg.loiter_radius = 0.49371621586074355;
    msg.altitude_interval = 0.9063422258001668;

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
    msg.setTimeStamp(0.9309577500356584);
    msg.setSource(28149U);
    msg.setSourceEntity(106U);
    msg.setDestination(12313U);
    msg.setDestinationEntity(43U);
    msg.flags = 106U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7548037079854301;
    tmp_msg_0.speed_units = 178U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8269687325186219;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7161295644870527;
    msg.lon = 0.8006779872497984;
    msg.radius = 0.08603715583882132;

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
    msg.setTimeStamp(0.9607862553677968);
    msg.setSource(51587U);
    msg.setSourceEntity(84U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(43U);
    msg.flags = 239U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8073665878900673;
    tmp_msg_0.speed_units = 214U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.017870503660127768;
    tmp_msg_1.z_units = 215U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.21653548319393368;
    msg.lon = 0.5137941647581484;
    msg.radius = 0.7791215523964536;

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
    msg.setTimeStamp(0.8652532135583875);
    msg.setSource(28939U);
    msg.setSourceEntity(99U);
    msg.setDestination(18466U);
    msg.setDestinationEntity(89U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9453737416568871;
    tmp_msg_0.speed_units = 44U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5290451161240157;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5152378793117802;
    msg.lon = 0.004050841935854366;
    msg.radius = 0.2534853980322984;

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
    msg.setTimeStamp(0.744612939363679);
    msg.setSource(27892U);
    msg.setSourceEntity(91U);
    msg.setDestination(53425U);
    msg.setDestinationEntity(96U);
    msg.control_src = 48628U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 195U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9354550819037297;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3806316935565621;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.510906705524719;
    tmp_msg_0.lon = 0.8049577689080987;
    tmp_msg_0.radius = 0.8002526296927849;
    msg.reference.set(tmp_msg_0);
    msg.state = 234U;
    msg.proximity = 43U;

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
    msg.setTimeStamp(0.3592504255147517);
    msg.setSource(15735U);
    msg.setSourceEntity(160U);
    msg.setDestination(3202U);
    msg.setDestinationEntity(252U);
    msg.control_src = 31567U;
    msg.control_ent = 251U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 52U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.41921573070353246;
    tmp_tmp_msg_0_0.speed_units = 216U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4685244246570768;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.987293766591708;
    tmp_msg_0.lon = 0.9258663994722678;
    tmp_msg_0.radius = 0.8494028567473866;
    msg.reference.set(tmp_msg_0);
    msg.state = 82U;
    msg.proximity = 46U;

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
    msg.setTimeStamp(0.9107008926527297);
    msg.setSource(65022U);
    msg.setSourceEntity(9U);
    msg.setDestination(26352U);
    msg.setDestinationEntity(48U);
    msg.control_src = 64787U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 99U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3728073681710068;
    tmp_tmp_msg_0_0.speed_units = 221U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.25998005135963875;
    tmp_tmp_msg_0_1.z_units = 90U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4494405544221296;
    tmp_msg_0.lon = 0.3861290846525911;
    tmp_msg_0.radius = 0.3308461218623323;
    msg.reference.set(tmp_msg_0);
    msg.state = 115U;
    msg.proximity = 191U;

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
    msg.setTimeStamp(0.8993632694696889);
    msg.setSource(55855U);
    msg.setSourceEntity(190U);
    msg.setDestination(55544U);
    msg.setDestinationEntity(224U);
    msg.op_mode = 248U;
    msg.error_count = 186U;
    msg.error_ents.assign("XWMUECGMDCTBTCJATQRPLJWHBHRFHSNBULHCGKXREEDEZHFDZOIDMYDPQAWKNMSWUFYQTSYHWAAQ");
    msg.maneuver_type = 6583U;
    msg.maneuver_stime = 0.6401644625257916;
    msg.maneuver_eta = 61675U;
    msg.control_loops = 1904126464U;
    msg.flags = 213U;
    msg.last_error.assign("ECZVSZSUBLVXNYREFHGEOAKVDBOQIFYZXLFPFVPXQEXCMPTRVJUQRWTWHZIZSEHAOHWGMPYTGZOONMCSZKYWCLTNOPMJAZBTDBQJBANKQWKRICXSBGHUPJDFTCWIDJAMGZOSNVXEYVHDWDJ");
    msg.last_error_time = 0.9430181576040336;

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
    msg.setTimeStamp(0.7993512380073152);
    msg.setSource(38270U);
    msg.setSourceEntity(52U);
    msg.setDestination(44774U);
    msg.setDestinationEntity(200U);
    msg.op_mode = 192U;
    msg.error_count = 119U;
    msg.error_ents.assign("DQEEVHDHTCHHAWQFYAFYRUPVTPAZAMTTSCQNPJNDFAKDPDBUOVQCOKLZEFUBOHEJFRBUV");
    msg.maneuver_type = 20948U;
    msg.maneuver_stime = 0.16550253405926363;
    msg.maneuver_eta = 19202U;
    msg.control_loops = 882039743U;
    msg.flags = 219U;
    msg.last_error.assign("REQBXJHRNSBYSBGLFNWFSOHDBVKFJCNYLLOBUEHDHCYFMYDJANKMRCDFNBKLFZXVQWBWIZPQZYOOPYTZXPQLOUERTZITTQTMMYOSKLXBQHXSIDIHEIGPSAJGEGCUWINAGQPALFUUZCWKI");
    msg.last_error_time = 0.013658358899520717;

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
    msg.setTimeStamp(0.6647841117912481);
    msg.setSource(46408U);
    msg.setSourceEntity(161U);
    msg.setDestination(21136U);
    msg.setDestinationEntity(224U);
    msg.op_mode = 78U;
    msg.error_count = 59U;
    msg.error_ents.assign("MNFIZTNSBNSLAPPTYHHOZCCQRDMWVIKYXONZNMAWDARUVMNZKADMUCPKFWDQUTQECQUWJQKXEZLWHXRHLVERFLCAFOARQILAQFDVBLGFOLOTGROAFRMUDHTXHVBWGMZVRWVYTTDIUDCEJE");
    msg.maneuver_type = 26013U;
    msg.maneuver_stime = 0.6924867050670449;
    msg.maneuver_eta = 60941U;
    msg.control_loops = 218588417U;
    msg.flags = 236U;
    msg.last_error.assign("SAOIXJVBYEGUGLZFEADAPARDKGHFLZFHRJDDXQFNKRTQOIGTNX");
    msg.last_error_time = 0.6700484455959347;

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
    msg.setTimeStamp(0.2740159917874473);
    msg.setSource(28127U);
    msg.setSourceEntity(139U);
    msg.setDestination(2641U);
    msg.setDestinationEntity(62U);
    msg.type = 202U;
    msg.request_id = 57716U;
    msg.command = 215U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 12565U;
    tmp_msg_0.lat = 0.9637079149875641;
    tmp_msg_0.lon = 0.6603673917375538;
    tmp_msg_0.z = 0.0444423814217626;
    tmp_msg_0.z_units = 53U;
    tmp_msg_0.pitch = 0.7042036707594626;
    tmp_msg_0.amplitude = 0.6994810247345207;
    tmp_msg_0.duration = 33095U;
    tmp_msg_0.speed = 0.642596300153753;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.radius = 0.278349882107397;
    tmp_msg_0.direction = 219U;
    tmp_msg_0.custom.assign("ADWTXWSDECPQUPGJEYMIZNHFHJSWOQUHFTURIYUSLDWMCQFMPANTFIOLQDTIICP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38414U;
    msg.info.assign("OSHCQMOSWIAPGAVPREFGKWBFVPQFGYTYPENTSYDYLKOUREKKELVGLJHAJQBMXPKSSMVHGCZODAQOCVHEBKZNARWBXCSCMMBPKFZQMTECNMDDXBLBNCUUIDTVCFSEGBVUFWBJURBZIENAVNXYOZZQKKRYMXUDFIWDXYOQWIFYYLGPN");

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
    msg.setTimeStamp(0.86206493279111);
    msg.setSource(32985U);
    msg.setSourceEntity(49U);
    msg.setDestination(25637U);
    msg.setDestinationEntity(213U);
    msg.type = 186U;
    msg.request_id = 55577U;
    msg.command = 195U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6469719079766612;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 61467U;
    tmp_msg_0.custom.assign("DRSQIXCNJFSUPOPELNDMGFKLKDTORWOBMVUPIYLEDUMLQXDFHXIUSOCVCGTTPNHVFIAMFVOFQKVPJJEPNCQMWLKTTJYDCCZFYNYQHUBXBOYADAPUZSRHFWAQTVCRGMZJXIURZWALXWHFNVYZJWHZPXODLMJNURUZOEGBKRGEAKLXVVJVYGHIETGSZGNAYSEXWNSIQHYUIKCZKCEIFTSHJMWRBMCABARQLMQBTZXQERBJSDAPEG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16975U;
    msg.info.assign("FRBGWMSQTALUAYVJURFCZBOYWRSQFEGIVNKSGTGODOQMDYSYAOGYIJBMEWJTETNJSKZBIJQCUARRMI");

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
    msg.setTimeStamp(0.6051820904211529);
    msg.setSource(48973U);
    msg.setSourceEntity(234U);
    msg.setDestination(59101U);
    msg.setDestinationEntity(152U);
    msg.type = 168U;
    msg.request_id = 56444U;
    msg.command = 115U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 47062U;
    tmp_msg_0.lat = 0.42485035838754415;
    tmp_msg_0.lon = 0.6232073560779254;
    tmp_msg_0.z = 0.6034759934603188;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.speed = 0.5273640512263337;
    tmp_msg_0.speed_units = 159U;
    tmp_msg_0.duration = 39215U;
    tmp_msg_0.radius = 0.6101350640984002;
    tmp_msg_0.flags = 51U;
    tmp_msg_0.custom.assign("PQJATMDCBLDZGHIIXGOGVLUBLSJCYVCWEQFSCJQEFLPAUORAQQEKSTIGTFAMUPRPKVOYHCLMPFWS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5576U;
    msg.info.assign("LOVCQLRGAVMMHFAXOVIZFMUNXJJHXQDJQCFXSQQFTRBGSFUTUMRJZTCFTOKPEADYNREJZLQOOILARTWZETPZMGUJZWPQEVFCDNNYGLIFERBSXWBVOIBCOHPHCIMHEPJNNHKCYAUVYKPIXYPKRJVSLGQJZKUBSHNMXDGZEVWIIHCKPOPAMBNRVUYWWFSRTWWTCBKYUHIZLNSKNEDEDGKZSOTAHBDMSXEUWLDYASFIYTUD");

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
    msg.setTimeStamp(0.26731599219599);
    msg.setSource(39166U);
    msg.setSourceEntity(21U);
    msg.setDestination(40234U);
    msg.setDestinationEntity(51U);
    msg.command = 164U;
    msg.entities.assign("SZDDAHUCHRJSIXWUDDYHPQYBIZFQGEVFQWLVWVROMQJWJJXLDATBAVOXHHKYPJLSKFXERYSF");

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
    msg.setTimeStamp(0.8957183056185393);
    msg.setSource(9881U);
    msg.setSourceEntity(235U);
    msg.setDestination(13798U);
    msg.setDestinationEntity(114U);
    msg.command = 144U;
    msg.entities.assign("PWTVAQGCVMPVRELCUPTFUMCQXQMPQHJBTARIWHTUUZJNZZLRHNMCZGTFPZDVIIWIBEZOLUYIMSAWXQCTCJEDMCNIHXNDKNKPMVXXHIKVQFKVLWYBDNZHUPRDSFEMHGEAVDYRDKKSRTOBLNQORVKZPAGFYZELFUSIWSYBFYBAWWGPXGBCJKKQWYPHFMCSOJL");

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
    msg.setTimeStamp(0.5381457210239382);
    msg.setSource(19306U);
    msg.setSourceEntity(64U);
    msg.setDestination(13965U);
    msg.setDestinationEntity(160U);
    msg.command = 104U;
    msg.entities.assign("VZDXGAKGSRBHKAVYCIXQWZISPICRATQBUYYWVROXFCATZQGQEHDFQTSJMGBWTNCDCJXPXNHFUGMNWDMTGHMORZFNMZYDOFEHJDCLEKLHUIOBNUVJDKYPONWDEIPRUKMNZHJQLGFIZVLFHTXYATXEQSOWMGBCCPUGDWRPOSWXUVJWEUBCNJXKPERYNMSQWVORKLFYSLFLFSESAPQABINKMABLCUVRRZTQMSELJIEJIZTD");

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
    msg.setTimeStamp(0.6370357781214959);
    msg.setSource(20247U);
    msg.setSourceEntity(153U);
    msg.setDestination(58392U);
    msg.setDestinationEntity(237U);
    msg.mcount = 130U;
    msg.mnames.assign("AVBMWXDVQIFSJEWMMNZSBEGXZSGHFLPXXPBYEDJBYLPABTWZBFYOFYEPJHXTPNFUGVQXZOYSTKDHBAGHMVMKQPRLAJVUBIXJCYDNIWSOICMXGUEQJXKKHWURIVZZCDXYJMKGUROLOTLQMACDYMWNOANQWSOTQUPENTGPDFZZVSQCYRHBBOAHTICDMIIJVFAOGKPOCLIJKLFSTZRWUGRQNNCIECQFHGNRCTDWKSUJSEEEUYTDK");
    msg.ecount = 148U;
    msg.enames.assign("SUHXRQQKCOIFTBNITZOUUFJUSWKJCNZNKGCZBEVHVLAKUFXFKPYIHVPAUUYHONYQFFXVLYWMWYWLOPBVNZEQGOSWTREJHDJYXJCQFTCUAKBTAGIZKZHRSKHDTEDGMULMZIORWCSIDTNYSSBFYXXTRBMELLJVRNDXHEGDRXDXSAJTU");
    msg.ccount = 251U;
    msg.cnames.assign("UTMPBPQGYZVOXHMFSMBGSHWBMIWWLBREWCFKEQTVQMXVXYAFDNNSDFZPWPBEWPRAVOJAAYTEDRARXV");
    msg.last_error.assign("RTQZFQWBWOGUFEHHYRF");
    msg.last_error_time = 0.20385780911487406;

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
    msg.setTimeStamp(0.528622710546112);
    msg.setSource(8970U);
    msg.setSourceEntity(46U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(153U);
    msg.mcount = 113U;
    msg.mnames.assign("UVQHXLUSRPTVVDGHXQROCUUEXWWRMQQSBWNFLCXKMBUCOTZODEFBJSHSKNEEDOELAICSFCHUJPGIECITUDLCQVGOTDZVXGPA");
    msg.ecount = 237U;
    msg.enames.assign("LGCBDGRXHOETRHPFKAWJZCXWUVRVYMIASXKVAMJDEDDWSJAAHVDLNWJKJGOSEAGMSIIPTTMVBSILZMMDCZROFFBKOFTHJYITLZTNVYBCQBIOPXQGNZEMWNYFVZPURRDUGDRFQQULYHS");
    msg.ccount = 105U;
    msg.cnames.assign("XGWTTSNXCTBHPQNWRYGLACARPCGJRYDYIAPNQZHVNSFLWEFOXOYSNQIMIULADWZZCWYSMUHVJARLMBXAYGASRITMXKBMHMWDJBC");
    msg.last_error.assign("UQWPHOIFUMMCSADTBILSADOBOCXDNULJADKCIRJUVFPEINZSBAXKVFBIJIVGWKLKEZMACYSTGVHOMXGHWBZQXNZYYBYQERTMKDNCGWFAIVRLEEYVWSCHVABBJUASTKPUHQFEQPSLQCCPZRHRJEPNGDYWXLRJOYJPUIVAHIVVRPHBYLZNFJSFTXDNWKWQXTQUPXFZXBGEPKGGQUQNFIOTMRFCOCSDYLROMJM");
    msg.last_error_time = 0.2548474582882472;

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
    msg.setTimeStamp(0.26543642087106545);
    msg.setSource(34704U);
    msg.setSourceEntity(43U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(174U);
    msg.mcount = 128U;
    msg.mnames.assign("IGZAREXYHYFWCKSLGXZSYUVJFTIUTMMNAWMNBVREUTLPUGAXNJROYWBZLCIPGYGHUPUMERZZLKTQEVQCDSFHGJONDWJFHNVWFXBKIAAWATRIKMPYIDBRIGDOF");
    msg.ecount = 185U;
    msg.enames.assign("QNYZBOGDNEETRGKWPXCTNLTDCJFTGANMIEOJNRJLXVSIBVADGBXLQICUHFCGRSUMUSRGWHWSFKTDZWNQZWGVAFIRAUATAIUYSHBDWSEPZWYS");
    msg.ccount = 37U;
    msg.cnames.assign("ABDINNLOKLGJBHCTTRZGFZDDMDNYQCXRZSTWAANZFSFSTSEGMVYPAJZMOKFPLJGEMWVURVBUTBNKYTEKNLUPPADQCOKCZRBGXPGIJUQRWWGZRWIOMCEIDQVOPTCCWJIVFZMBTMEUMWHFHMPJQVUXAOVYQCPHPSSEUYYODQNDHWV");
    msg.last_error.assign("ANINRBRNDAFFLHKCWTPHJUXHKA");
    msg.last_error_time = 0.0009981648175498847;

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
    msg.setTimeStamp(0.8591754647860542);
    msg.setSource(32741U);
    msg.setSourceEntity(97U);
    msg.setDestination(56004U);
    msg.setDestinationEntity(184U);
    msg.mask = 128U;
    msg.max_depth = 0.9470342189372734;
    msg.min_altitude = 0.6028687608041025;
    msg.max_altitude = 0.16162387394207245;
    msg.min_speed = 0.7315801131035978;
    msg.max_speed = 0.7315522270601824;
    msg.max_vrate = 0.09259468923393499;
    msg.lat = 0.8402025580399721;
    msg.lon = 0.2636877072822149;
    msg.orientation = 0.33993825669437816;
    msg.width = 0.053061213877876434;
    msg.length = 0.3284270059023161;

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
    msg.setTimeStamp(0.9312521362870793);
    msg.setSource(40826U);
    msg.setSourceEntity(1U);
    msg.setDestination(16235U);
    msg.setDestinationEntity(96U);
    msg.mask = 176U;
    msg.max_depth = 0.5961966192844704;
    msg.min_altitude = 0.33926972348748274;
    msg.max_altitude = 0.2925787854363807;
    msg.min_speed = 0.47029061812714335;
    msg.max_speed = 0.8564609906960341;
    msg.max_vrate = 0.8670642481250421;
    msg.lat = 0.13517181421589097;
    msg.lon = 0.17989687353969042;
    msg.orientation = 0.20789791008287328;
    msg.width = 0.2546014909029084;
    msg.length = 0.33468110052821054;

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
    msg.setTimeStamp(0.982235693711035);
    msg.setSource(6252U);
    msg.setSourceEntity(75U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(93U);
    msg.mask = 0U;
    msg.max_depth = 0.24099687761944577;
    msg.min_altitude = 0.9115788066915975;
    msg.max_altitude = 0.8271921913189512;
    msg.min_speed = 0.4081163537285354;
    msg.max_speed = 0.6172746417996953;
    msg.max_vrate = 0.8889117669326718;
    msg.lat = 0.29853418526684317;
    msg.lon = 0.8884338178453358;
    msg.orientation = 0.3205329415573085;
    msg.width = 0.2941115794169413;
    msg.length = 0.18328246323531328;

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
    msg.setTimeStamp(0.25327885574585085);
    msg.setSource(11856U);
    msg.setSourceEntity(3U);
    msg.setDestination(16258U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.028673285663729398);
    msg.setSource(31650U);
    msg.setSourceEntity(241U);
    msg.setDestination(20474U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.885120304074962);
    msg.setSource(54962U);
    msg.setSourceEntity(82U);
    msg.setDestination(20441U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.689532074685256);
    msg.setSource(44623U);
    msg.setSourceEntity(196U);
    msg.setDestination(8802U);
    msg.setDestinationEntity(246U);
    msg.duration = 43779U;

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
    msg.setTimeStamp(0.4388592355934827);
    msg.setSource(15786U);
    msg.setSourceEntity(66U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(29U);
    msg.duration = 31190U;

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
    msg.setTimeStamp(0.5778162722915796);
    msg.setSource(59457U);
    msg.setSourceEntity(30U);
    msg.setDestination(18156U);
    msg.setDestinationEntity(69U);
    msg.duration = 23631U;

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
    msg.setTimeStamp(0.17720501270464384);
    msg.setSource(40335U);
    msg.setSourceEntity(138U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(182U);
    msg.enable = 125U;
    msg.mask = 2272558101U;
    msg.scope_ref = 2243182648U;

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
    msg.setTimeStamp(0.6167983910285665);
    msg.setSource(21512U);
    msg.setSourceEntity(188U);
    msg.setDestination(12421U);
    msg.setDestinationEntity(204U);
    msg.enable = 142U;
    msg.mask = 1609910218U;
    msg.scope_ref = 4245369246U;

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
    msg.setTimeStamp(0.9345846936362692);
    msg.setSource(2175U);
    msg.setSourceEntity(68U);
    msg.setDestination(38627U);
    msg.setDestinationEntity(237U);
    msg.enable = 113U;
    msg.mask = 1209142394U;
    msg.scope_ref = 456105193U;

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
    msg.setTimeStamp(0.5213007090508509);
    msg.setSource(6746U);
    msg.setSourceEntity(101U);
    msg.setDestination(12451U);
    msg.setDestinationEntity(76U);
    msg.medium = 21U;

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
    msg.setTimeStamp(0.2718100930941033);
    msg.setSource(49476U);
    msg.setSourceEntity(29U);
    msg.setDestination(46309U);
    msg.setDestinationEntity(111U);
    msg.medium = 220U;

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
    msg.setTimeStamp(0.754206114291658);
    msg.setSource(34277U);
    msg.setSourceEntity(62U);
    msg.setDestination(60688U);
    msg.setDestinationEntity(109U);
    msg.medium = 61U;

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
    msg.setTimeStamp(0.22519407369331657);
    msg.setSource(63672U);
    msg.setSourceEntity(84U);
    msg.setDestination(8579U);
    msg.setDestinationEntity(44U);
    msg.value = 0.047211745884870315;
    msg.type = 104U;

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
    msg.setTimeStamp(0.2895215429367256);
    msg.setSource(765U);
    msg.setSourceEntity(210U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(134U);
    msg.value = 0.2957793479480447;
    msg.type = 43U;

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
    msg.setTimeStamp(0.17599960731147546);
    msg.setSource(64691U);
    msg.setSourceEntity(138U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(89U);
    msg.value = 0.10624994732583759;
    msg.type = 198U;

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
    msg.setTimeStamp(0.8125385248129069);
    msg.setSource(20251U);
    msg.setSourceEntity(56U);
    msg.setDestination(63497U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.3452518945509956);
    msg.setSource(14924U);
    msg.setSourceEntity(167U);
    msg.setDestination(17950U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.4919010599747915);
    msg.setSource(62130U);
    msg.setSourceEntity(35U);
    msg.setDestination(2221U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.6255722523646711);
    msg.setSource(63600U);
    msg.setSourceEntity(66U);
    msg.setDestination(44696U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("HEASGNPFEQDMMGAOFUVSXJEYZDJNHYMSZJPISQVTSETCMJVJLEHPGQSIMISPRV");
    msg.description.assign("BCXZKBKASPXVAOPFOWVVYZRNIROWMBSKWUJWDSUUHSNRZGNAYHVQCNNHJIMWKVBHUSKTHOZLDZLIEC");
    msg.vnamespace.assign("CNUAEWADVYSOLGNROZZYHHBPIUXMPTZFXAQGOLZAOUEHUPDNFABDRHVTVMYKYRGJKKTXNCZVEQCUZVEINZGPNHOSQIAFCSM");
    msg.start_man_id.assign("PXRRNQTUTFYSYIUYCSWNAOIHINXNBBIHIGVTGGOKUATVAGQGNQWKBZSDYGBYSGVEXPQSGEDUPQYDVWWILRHESVADUJZONULEFKAPSKWGQNJYMMSWOOUDJHLVBVWAYDBEFKIDSMCGLTODJPIUJZYBLARMVTZHCLOCSD");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("KHTCYRAPMAFTIRKKJEYTCWKOTQJEWQBVTASRBLXXURSTQUCNGQPJXCQWWSMBUPFZSYHINVYPFBMGZQFEGZERWOBAFGFLZJGOVMQVWUDHXMNDCREPUHPTFZSKEURWDTODVALKQIGHIBEBILOKUAWCLVIIRYRHNIXNNNIGCPHAZFXLUXTDZUJWRAKMDDYBVNXXSTNJMLYOKSOCXFQFVYPDDMMJOYUWPABKCLO");
    tmp_msg_0.dest_man.assign("XCKJPXABDECWJFCQMPRHRFNLGWIFVLFCKJHDJQYQYPUVMCOZDYDIBSEAUVKGZLRGXHGMIMVZSKMOUFFWYJGUETMGQRFPC");
    tmp_msg_0.conditions.assign("QUFSWGUTVXMWRFCLRDMKAOPDPDNRJXOLIFOSSFFNXRVZYNBEQJHWDSLEYUWJXSCRBVTAQCLPNSOXNETZEJCNHBUZQZWWUCDPYRYRFNUEAQAIWV");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4791749742101641);
    msg.setSource(45753U);
    msg.setSourceEntity(84U);
    msg.setDestination(64843U);
    msg.setDestinationEntity(202U);
    msg.plan_id.assign("CSEZHPHJVNFBHGKMOKPTTFFXIRBDFVAAILLAQSWOUPDGKPCZYMDVWBJHSSLAQROSIYUFGGIUUSRMTZTBNZAQBMHNLRYKTOSYHLSTIMEDMUWXQWFFVDZK");
    msg.description.assign("NQZMBBPCDUGGZPKWLHJQRNEFIZDVJRAYXERJGYUQAOYNAANQZFSHJXTXVSSSPJMMCUAOUKNTYNDZXVSPWKSXLILXINGZUUHMJRLXMAPCGWFXAWXWWKIEONFKOHLZJABDGSBMKFTTYNGJLYWPEBFBFKQOTVYYGRUZIDOYACQOYUVILBPRRQZNMPDMVMLQTREXDRGKFRIHOTEEEUVDEUTGC");
    msg.vnamespace.assign("OAQRRZOEJFWHTMPXSGQDKHTXBRFUIMPGAEXEEWLNBBUESYBZDPMGHQHOCSNVKDGPZRLWIEPCPVXNXWYTVDNZSILDFYNYQYCKQRAWRVUMNTESKORXZVDOJXBJHZKCYEJTZKQTHTIUBKJZZLJNCXXJJCHOJMWCUBITBFRWQANKAKENMOWJSUVKXLBDDPGIYTWQFB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VTZOAUGHAYJKZWGQTFJOTJYFWGYJBDLIMJQZGVADORUPQRCRWDWPCAILOGOSLHJRKEALBQUFBBVNQPVWYMMYQPIHIQTSAYCUABDUAMQXAJBSNGTTZNMHFIZVKWKNUVWMHSHDPSPXXDNNSLYVSOUXVCEZXCECQXTYCTPEMPKPRKHLEKGCIZAELLFLTVIXYBOHQBXCDDFXJZNTSMKIYDROXWZRSSU");
    tmp_msg_0.value.assign("CUETNVWMQZGVEIAYDQUVTPVQQLPXJADJFIYFWZCZYZJXCWLCFFYJJGDWZEEMVDHLKMZKBAFNUZUEALPAOTLYUXHDUPHBKRUMRSMWBHFKBOKEKOYSLOZSXNCJRQHOHFVHTIGLVSYKRAUQJCSFIOKCPNATZGBTIBUSNRNEIDDMDRKHTIDLOSEWPVLWFIAPXQEMQSCOYHNNNOITRGPPBJCQXJUGWGBYPSGW");
    tmp_msg_0.type = 179U;
    tmp_msg_0.access = 196U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BOXCRNNDHYWRFNAWVAZAIVBFEPPHSFT");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OKBKVFQHDCNOWTREUMRVCNZDSOKJXBJHKEEZZDJRVQSKNYTRZJGWDXGU");
    IMC::FollowPath tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 43033U;
    tmp_tmp_msg_1_0.lat = 0.28203839410288833;
    tmp_tmp_msg_1_0.lon = 0.7065811926423755;
    tmp_tmp_msg_1_0.z = 0.4730501457108005;
    tmp_tmp_msg_1_0.z_units = 163U;
    tmp_tmp_msg_1_0.speed = 0.9987357042606169;
    tmp_tmp_msg_1_0.speed_units = 32U;
    IMC::PathPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.7933174088229317;
    tmp_tmp_tmp_msg_1_0_0.y = 0.8849634352126172;
    tmp_tmp_tmp_msg_1_0_0.z = 0.1520626637403203;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("BDIMXCOPLJHIMOCIGWLUYZEATSLOYXIHKXEAEFLDPBSTDKOSDZRGMQMGKTTURICEYTECKDBJAGUBIBWWLZCHIYDFLNSJENYPVBJKYHZTNBMPVKTZVNBGZXUIQUAQMOONPCVEWQXIDGVAPJEHMEUFMZYPGOCISSXLJMQUFASPAZVJVCFWHANGZSTWRKLJQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PlanControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.type = 169U;
    tmp_tmp_msg_1_1.op = 29U;
    tmp_tmp_msg_1_1.request_id = 20184U;
    tmp_tmp_msg_1_1.plan_id.assign("MXXPAPVCWZYFTAHPKOSDYQWYICTDQNGLHTQLADZCIYSDSUKOZGQXLSJZVBAGGBJOFBCTZJAXLUMDFNTAOPVUSIVLJVZFQHNEBWDRNKIRVWFMUEKMOPWHELSBPMJCEYOEUKXY");
    tmp_tmp_msg_1_1.flags = 42447U;
    IMC::WaterVelocity tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.validity = 43U;
    tmp_tmp_tmp_msg_1_1_0.x = 0.24843298684227433;
    tmp_tmp_tmp_msg_1_1_0.y = 0.70635379785529;
    tmp_tmp_tmp_msg_1_1_0.z = 0.2215541610923354;
    tmp_tmp_msg_1_1.arg.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.info.assign("HZKRNYMDSERJXKHFMZLALIQBUPBSEFWIYXHOIBJTKIZXIQFRYVQJOWGNPCNPSVPKJLPOXXSFYGWHSISMQQLHGNKDAECPFVEBTBWGMAFXKWLUOBTVDXWAUZPFVYBAYEOXZBZWRPMPSHMNUEDRMODYJTVAKCHDUDFRNVFIUXOTJDNWQRVLSBAQCLLIMMGAMDPWWIZZCAEFYNGIKTJVLRRCKVNNXSOCEHUKCQGJAELYGEOYRCHQTTJGTUO");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::MapPoint tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.lat = 0.8370247285022413;
    tmp_tmp_msg_1_2.lon = 0.9585864906444523;
    tmp_tmp_msg_1_2.alt = 0.20512117071953861;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("YDBOCAJMBPDFQAWLGDDKTASFUUVNKITOQMXCGLONSKUDMMVJRVKWJIGSCYEQEKFFYNDVZWZJRFXZMITIPLAAIVZLFORSOPYGMOBSRMGEZQRCWTAQILYUXOYHVZIXOT");
    tmp_msg_2.dest_man.assign("MXFJVBQYEZEFQBSLRFCVINHUNFHJ");
    tmp_msg_2.conditions.assign("UUWYAXGJJESISOHXZSEHOWLPNOVQUQT");
    msg.transitions.push_back(tmp_msg_2);
    IMC::DesiredPitch tmp_msg_3;
    tmp_msg_3.value = 0.7772412642589486;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.8091409005255218);
    msg.setSource(59624U);
    msg.setSourceEntity(116U);
    msg.setDestination(16177U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("YUXIRCRSIIAQQFRYLVOGHBOGWTMEKKSSLEIGBNDLFHOZYZMA");
    msg.description.assign("CTRGURHNNIYKCGHZKLLIVQCJLDLINTTBRGLK");
    msg.vnamespace.assign("VOHLARVLKLDSAPWZKSBLGUFCOBZUBTZFEPOABMVPRTCVDSTXMFZCBPQJNMUHNLHPIXSTKMHAMAIOILGIDOHJCKYBUKUGKYTAQRDDUENPKCISFHKTEHOYLLPODYRFEAZNNGMNZQQVXNVHOIRXLXWERZJPJTDVKZWQGBEIEUMCBGEDVYLTQVSXCGIGJRTZYUJNJWWJJGRAWXFEYWYHCBSZYQIQW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XHEOJUMEGKQKFJLOPYFZFRCDKCXRBHLDRBYSWEIRQQMIFKBLWNUKZQBZZNKPNTXDWLJWXYJV");
    tmp_msg_0.value.assign("IQWJUZYFVZDKCGNNQNWXGCWEVAILQXSXISOYJYEPDALDPYKLQQBURXQUDUJSVJVLIPKZPZOCDTNXBFMNAJSRRUOBFNPQCZIZTHJVEFFYFVLHCXSOHHRGGPJAGYDWWJGTIMUBPNTGYBBLVFGITYGISLMWHOHRYQAMEXKCWAKSWXQYALBLCVCRICLMATSBODMNDFPFHMMNEAXRBTEZKUORFTAKQHHZWCR");
    tmp_msg_0.type = 4U;
    tmp_msg_0.access = 38U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CYDBZEHMXAMMPBPCKLXLKLDPFZQXZJNPFCSOMVUOLYUDHAKXWYTAFRGLIVUHPFXOEBDEGHSKXRBEQTBKSOJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MRWLERQTOLPKIADHZFPERGYVIZFBUJGSLPMNNJACKQFTUMRQN");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 3269U;
    tmp_tmp_msg_1_0.custom.assign("JNPOVHQXIXBHPRVPMDHDEPNHEULFLMKIMRJIKKRPELCHCOIQUVRQFBNDAINDNGAZYY");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::TrexOperation tmp_msg_2;
    tmp_msg_2.op = 154U;
    tmp_msg_2.goal_id.assign("UEDVAWKIYDWGVFLAYCWBDKDNBMPGOUXGSSNJDXZQVNKSSSBHQCQQVLNBNJTANKU");
    IMC::TrexToken tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeline.assign("THAQQQUOJBJZFMPIRTNZKGFVBWNXWOPYHDKYKXARLZJLMOODHFXKDSIVKEZGMDSLQEHCWWKEVIUSGUANSVGJCCCUOFOXYDMAXLRIDFCBBBMVKRTNPXHYLZJXVFVNTUQWELTQRTCJFGMVEIJUPILWPONRRHSESMQEGWOCZAYNPFZRFYKTBAXWMVZCISXBDST");
    tmp_tmp_msg_2_0.predicate.assign("UZLFXIVMPVINWUEGLAJEHGJKTKFJUJBXPSTDXMASGFBFOGDIUTQAAFSQCMCQARTCVAZOUYKMGLDWLQMNKJTVYDWLFIKARWOSHXZRELHRWUXYKVHOJPVAHZIBQCCBXEGERINSNLUBQP");
    tmp_msg_2.token.set(tmp_tmp_msg_2_0);
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.4360738646288298);
    msg.setSource(43868U);
    msg.setSourceEntity(201U);
    msg.setDestination(47378U);
    msg.setDestinationEntity(81U);
    msg.maneuver_id.assign("VCYONCIRHLMBQQFJNKYHNSBKILECDFAUWRRATVWUKGSXGJX");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 7385U;
    tmp_msg_0.flags = 137U;
    tmp_msg_0.lat = 0.1628362059949845;
    tmp_msg_0.lon = 0.7962655264084626;
    tmp_msg_0.start_z = 0.5550029098110719;
    tmp_msg_0.start_z_units = 249U;
    tmp_msg_0.end_z = 0.3183015717874498;
    tmp_msg_0.end_z_units = 145U;
    tmp_msg_0.radius = 0.4315845814697138;
    tmp_msg_0.speed = 0.27524734995976863;
    tmp_msg_0.speed_units = 55U;
    tmp_msg_0.custom.assign("AQHJKBBZFCYVHQMJVYRSFZDYUGUDZXGIOQYQYXYSJTCECEBYHOFNRHQNBBQUTLITWOHJKVSFFLGHNAPQNNUVVHNAFZIIUWBWJAJCQAREUCLRJGJFXBO");
    msg.data.set(tmp_msg_0);
    IMC::Sms tmp_msg_1;
    tmp_msg_1.number.assign("WGPSIOOAPXZOIRHRILFBHFSNMUBDDLSNRYJXQAOGZZKYEJVJAQPGXXIRMFDCSFEQTNTHYJQQLKADFERKNLPVDKNGDIPLSGARJXBWBZGKOMTNUNFCVMZWQPJLGILWDEBDFUUGCXUHVTYYLVDHMMEXUKJBLSHQTHFXSUEQBFVJIACOWWZWG");
    tmp_msg_1.timeout = 8987U;
    tmp_msg_1.contents.assign("ANVKYBZHRXVPRVKPVKXQIFTEQRWKSIPTFMIW");
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
    msg.setTimeStamp(0.741425255296883);
    msg.setSource(1787U);
    msg.setSourceEntity(125U);
    msg.setDestination(1411U);
    msg.setDestinationEntity(54U);
    msg.maneuver_id.assign("TQZHLNHBSWYHPJPVUXYJKGSUINZMEGMDVCLDLABQFGYHMHXSRUUVMTDNWPOQOBYCNHPDWLHXABTBQGVIYAXPBJTTJEFVFQWXJQWMMSACGZOAUDFNLSPHKRLRDBZQFGEOSLGV");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 104U;
    tmp_msg_0.lat = 0.7642973602796749;
    tmp_msg_0.lon = 0.300080860607874;
    tmp_msg_0.z = 0.9049812776294505;
    tmp_msg_0.z_units = 173U;
    tmp_msg_0.speed = 0.5370563158820159;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.custom.assign("YEUYQHVZKAQYOIVFGZVXIUNPHFIRNRYWZPELSKNTPCBTQKMANIRBYHRCTQEEFKHLZLIDKPZASOGLYSCSOMSSXVHNLFHGTBPUBUVMODYNCPAMFUSXONREUQTACTXTJYQPNDXJBIATBLZJSNOJGWRFOXWKFSPJJRIJCXRWOVAUDMKNMAXCWJVFQBOVPHKDZEXRCEMMGLJHGCHBWUAVTBKZDIZ");
    msg.data.set(tmp_msg_0);
    IMC::Pressure tmp_msg_1;
    tmp_msg_1.value = 0.11636863650078366;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5838886392607845);
    msg.setSource(40060U);
    msg.setSourceEntity(142U);
    msg.setDestination(46120U);
    msg.setDestinationEntity(133U);
    msg.maneuver_id.assign("IMYVAWQWCGVZKSXZUAIVNBRAYVRIXGRFZCYLCICMLAXUBEZUIDBJSQKPDRVWQMPAGDPCSPDQYGRITMYNSXWSVPWTJNXBSASPQENIBMCTAFXFJNEIMTDISZYLRKRSOTZYZUWOVYZKDZOGDREBLOJGOUNMCKXTFLJUPAXPHQTEUJFQNLIFGKVFY");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 27457U;
    tmp_msg_0.lat = 0.6780909142402051;
    tmp_msg_0.lon = 0.8138944102865628;
    tmp_msg_0.z = 0.6964676965566151;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.amplitude = 0.04035578083004987;
    tmp_msg_0.pitch = 0.7242239492301014;
    tmp_msg_0.speed = 0.8340603614353684;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.custom.assign("VNVDLLNQQWLUSEYFVRYJPXBEHGGSYNSICEKWOBOGJDAADEFWFKPNXPMWBAI");
    msg.data.set(tmp_msg_0);
    IMC::AcousticMessage tmp_msg_1;
    IMC::AcousticSystemsQuery tmp_tmp_msg_1_0;
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredZ tmp_msg_2;
    tmp_msg_2.value = 0.33094855899166886;
    tmp_msg_2.z_units = 33U;
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
    msg.setTimeStamp(0.3435031538153729);
    msg.setSource(38185U);
    msg.setSourceEntity(66U);
    msg.setDestination(6250U);
    msg.setDestinationEntity(229U);
    msg.source_man.assign("LFTFHIMCEXNVUFVJJEIBQGYBONAWUMXHUWKBVBXAYJNNQFIULDMOPMLWLYDYSFPCQBRWHVYXDZARGYAPAKDROVCKEFSZXZLDHYTDOSJCXGSYDQDGUUWMKACXSOQTVTHRNRFGVJGSQZVQYZRABELBXIIHLNLCOQJZECJPRFTPEEIEXMQVXLGSPKSQZGIZKCSRPIJPKMKVCCONSAMPOFMYNDWRNEIHW");
    msg.dest_man.assign("ZMFTXPWLHGTNDJQJOBQIQAKDXIUSYVLGOHZKKJVFJUHXDTZAYQIEYWBAHNVGF");
    msg.conditions.assign("SBRCNWJQSCXDVKKYPYPAMNHHXIMCGXHXGSSIBARKWAGGFMSYUONAIODALEGQTXUXXIXZJEBOKHKHCUQCDKKTEQKFVUUBTJICWIEBOWWTIDIZVFROZAOJGDDTQYXNPHNQFFZLACWPYDIHHYUDFCGVLHRLMOTNDWWXLEJTJUYMGOJFJBWJEBURENPOBHSBAVFVPFLSPZECVYYTUVEQIBLMFRPNPSVMA");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7661643840109686;
    tmp_msg_0.beam_height = 0.205245587948225;
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
    msg.setTimeStamp(0.6142055606401426);
    msg.setSource(1274U);
    msg.setSourceEntity(81U);
    msg.setDestination(30425U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("MMLPQWNUBRUPKBJROKPMVGCWKTNEMIRCKUJFGAOGDNWLRFKCRSGWAWEIPHVQDXBYEFTMXCIOIUYWTSKNHJLLIYBDXFVLDQCOPUDCKAJIUFSTEXTOTPFAQHBZZCPAXPUFJRQYHLDXBLOCXUAVTAWQZGHIJMZGVODHLZWJVGSQOKGABBAJRRWXXOHNYLR");
    msg.dest_man.assign("AOAEBWCGYJZTPIHMJKXLBWHCGCEOIEWBWQETDJFCUQBIOCFKCGOWAPWEZSHMYQPMWXPOVGFKBZBQVWNZRLXKDYLBFYIMVFPQUIYIOYAUSUBKQEKSVUURJOENNIAFAXDDAODTETUGMQDGVAREPXNNTWLWITVSBHZMDGSPDXJCMSLRHMKAVRSHCJTYZVKZPYRQXLNKURPTMGNI");
    msg.conditions.assign("ZNCEEANQLSWUZPBTKMIORABEGFQKHHVWJGPDIPVAEZKJORLFRAXSUQZANALQIOOWXPUKQKSZJGBPLADNXEUDPHMTJBFXYYSHESKFRTCH");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.7222800652303863;
    tmp_msg_0.m = 0.3876826016788548;
    tmp_msg_0.n = 0.5277484904486534;
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
    msg.setTimeStamp(0.5686899746086495);
    msg.setSource(529U);
    msg.setSourceEntity(58U);
    msg.setDestination(30473U);
    msg.setDestinationEntity(51U);
    msg.source_man.assign("KRHTTDNMQDOJEEHXYZKRCSVWAKENSCUG");
    msg.dest_man.assign("NAUWKJVHABNJEGXQRNMPBZMZDOUTINLPIEHYTHQECZISOVQLAMJESKIXNGOAUQYCRBKBPTYKFW");
    msg.conditions.assign("DTGVBTFEIJZCLQDYIAFZLLGKXZQZZWSEHBFCOERCCSIHEPEYKYJDYPJBJQDDVMMKAHXCGLWVJOWNWHFTBSPIHTMQXZUSBHGIQGUUNSCEKUVXZUAPRMGFAEICPKPPBMJKSGMEUTRKDATAQRVDFOTHWOYRTUCCPLQRICNODJNVYAFBPEKNMHHLAYSQNSAXWKJBN");

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
    msg.setTimeStamp(0.5590690216576351);
    msg.setSource(32948U);
    msg.setSourceEntity(198U);
    msg.setDestination(29592U);
    msg.setDestinationEntity(119U);
    msg.command = 49U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AUTFXCURUJQ");
    tmp_msg_0.description.assign("ABTQFTYFPAVDWBIUXEIOTUJYWPOYFBCXOTHSEBOZCRUKXXIYQFQCUZMYGMJFGFTXMVDLRTSWCLLIZMRDXQNIPHZCADXPETMZUKAEGMGZSWBKNMLIMVKJOKDRVFSSRJANAFMCKWICVZPOVNRLEQVYZNYCPILJWNQKDIJQHTBDREADJHGOHRDUJXNZUSRHSWBYPBOARNGBMTOHVAPVYUJHITZGSWPAEXKE");
    tmp_msg_0.vnamespace.assign("DAMXALRCUPYJOGQVQSBJDPIPGNUYYCRVZOMRRAEUFZKAVTLHNFMEXDJWKBHTCVWZEXIFBNTENZPCAGXVWHMCXMKYBKOQKJSGQVNTOUJDWOYXMLIQHTWIBLHFSZBOAWSCFJLDNIHNEASMKFDIZIMJLDNEQYVUBAHGTVVPSSHCYT");
    tmp_msg_0.start_man_id.assign("CGHKXIMFRPNYXOHELBUPZIVAXGSWZBZYSFMYUNWKIUDEWP");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SXRGYPNENECJDDCWBKCNFMNGSZPIFEOETPIOPFZIDGATVRQZFLBZPNFKFIOZXQAK");
    tmp_tmp_msg_0_0.dest_man.assign("PPFXWHQRPSEBLNTOQDVHINLZARKXLCBRKEJBIRTNFYZMZSXGYPUFFODQUWAAHFATPJVLYWJJGAWUKKGQYDCCSMZRGZFXENAMVSIKUCHRQNRJDGXVQNDEHEPSCMFGCVMYJSUATHTBZEPBSXXUCROVZUJMBWZGNRWVN");
    tmp_tmp_msg_0_0.conditions.assign("DSTLURTOFXTZXHDYZMQFWOEDTJHEVFKBIGTJEWRPHEAEYJISIBZLNOVLHCXLYZGGHSBBNIPRWNPNLYINXNGNEVGMUEVBPFZMMPATCZKROZDFZPRXVNDIRBLVWLUEAFGBCUSTJYVCADUYXSS");
    IMC::CacheControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 181U;
    tmp_tmp_tmp_msg_0_0_0.snapshot.assign("AQBMAZXOBBGLCWXNRBDCBWAXLCPEAJIHSGAKHKNVPRTQNXIPEHNXJEDYSYFPTOOYIZLLGKAMGHDURAJPMZXKVIMKHWWSMHCYLKHEVVRDOYYFTSSWHV");
    IMC::TrueSpeed tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.9554040299672473;
    tmp_tmp_tmp_msg_0_0_0.message.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TransportBindings tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.consumer.assign("TSFUNMHAGFWRKZIABCYXNLNNZHDSAMTCIIIXBWBQRBKQOOTRCQFPFEDNIJNHBXUDJVFBYQSGPDKLOUHJPLKVZKDLHIVLPENCFXBUXGFJYURJZBEMIQFVPZUVRWYTYQOCNOELXMDUJCAHTLXMVEWXWGZGCFWCDSKJLOIKTMVPCOGUAOTWOGABPXMGZLEZEFSSKAHSRTWRRSSYKCQHTUVM");
    tmp_tmp_msg_0_1.message_id = 38771U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.40755152699754527);
    msg.setSource(22097U);
    msg.setSourceEntity(47U);
    msg.setDestination(1665U);
    msg.setDestinationEntity(21U);
    msg.command = 85U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EBOOGASESPSLQANXXXYBEJWJCCWZFPNVFPBNLWVGIOOCDRKQHQXHISKP");
    tmp_msg_0.description.assign("DIOCCWLPOHFGRTPGLRSUDRRYVZZDLQUJZNMXOXRKBTWQZOIAEN");
    tmp_msg_0.vnamespace.assign("HNOONXXVZCSUFNZAQQYLRDYBXUOQVAOB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YLSGTJTKPLTFRCFKBVCOXLOSBKQHAHFYRQEBZGYMGZCUTURVBFXXDGUDRLCQGXVDNIPXIMQYMMYYIBHABDKDTVIEOSMVWCFKEURYRXJICSETPMIJVDSQAMIOHQCSZTAOTSLUAOERWPNAKRDJSJKGWEIXNAHYXCYPPRBK");
    tmp_tmp_msg_0_0.value.assign("CSNJNMGZQIFPGSDAWOADAT");
    tmp_tmp_msg_0_0.type = 145U;
    tmp_tmp_msg_0_0.access = 120U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HKDBHKPLZUWZVVCPFINKQWXTVYEEMKGFLMLRBRCOUSOINLAFXAFCHGMAMUAOWUDJOTCTSCVYIBPDHTCORXSPZGTCIFJASKIUAYYAUNZWFHCRYQLZKGDXJFCJSDRPPQQNDYDNPKMLVHLEGNKBKWLPXJQOYNEBGJQWWSQJVITGXXOZYRFEHONCXFZHLDJEPJQIWSDTHUBXQFBNRITVBWBVLUDRZYGXGRZMHAYVB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KPGUWTHRNSRGOVZJUOCSFAZHJQJCDFLRPQWAAEFWFMKQJBUMTZEFXTGVHBEXKCUMIHQCPYQWRYZADZQWZRSJYIOYUQBHIUGSFVVDNESBFGLZEMGGXXSSRJZYJGOYEWMTMMXDPNISLVBHRWOPMYXQYORHLDFANICBJQBVMKI");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.4453486619841027;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9583972454540186;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.42221199325527015;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 227U;
    tmp_tmp_tmp_msg_0_1_0.duration = 25911U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 10459U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 57590U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.1193831109431912;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Distance tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.validity = 66U;
    IMC::DeviceState tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.x = 0.21373006537712225;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.y = 0.5758042881638195;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.z = 0.9990083153068486;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.phi = 0.08420426079658849;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.theta = 0.7767110158079316;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.psi = 0.6879298513938137;
    tmp_tmp_tmp_msg_0_1_1.location.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.value = 0.39695080072292355;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::LblBeacon tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.beacon.assign("NKCCPKLTFGHTIGEVCADMMOVIOBRBWEXWSURZDAKMXPLAKXTERVJYSUWXYLINVVQFJSFSMOAZJWFXATKHNFXNEEPQNOEIXGWDALRHIUWQTFDGUZQYUPLITSMPZVBPTGIBZWFVXHGDCKQIUECRWJNEQAGSQFPDHMRYKYSODPQHCXMQLCJWBNTLNUHDVGHPKJREZVYAMKLCZBIGHSYTNZBBNCOAULJTBOSJHDJZWVYZIROQFDSJAYUU");
    tmp_tmp_msg_0_2.lat = 0.00467983557481666;
    tmp_tmp_msg_0_2.lon = 0.6540666873765094;
    tmp_tmp_msg_0_2.depth = 0.5145579761020976;
    tmp_tmp_msg_0_2.query_channel = 184U;
    tmp_tmp_msg_0_2.reply_channel = 169U;
    tmp_tmp_msg_0_2.transponder_delay = 254U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FuelLevel tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.013153288558924059;
    tmp_tmp_msg_0_3.confidence = 0.35205565524661586;
    tmp_tmp_msg_0_3.opmodes.assign("GOALYOMWONCAKOHOYGRMTRGOKAHIITSVMBBTIJEDGUMVMWMFZJTALRIDPZEDPMKFZXVYZDGYYKUABZIPETQVETXXNLQHXLDFKVWWTHEBMAWBCFCHCEWRGWFSBPAUZSJZSTQSBSYGJTOHXIGNUOWOAUVLHQXQXUEZQVHSMLJRUYBPJFKCQHJTKCJDFQIWDNEBLJKLKLLSCYXINSFFQJUARDNPCOHXRGZNBCPVUDAYKIRRVFXPGPPDZINVYCNNR");
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
    msg.setTimeStamp(0.3829688332412118);
    msg.setSource(45521U);
    msg.setSourceEntity(12U);
    msg.setDestination(1216U);
    msg.setDestinationEntity(128U);
    msg.command = 206U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WGWHMJMEQSEMB");
    tmp_msg_0.description.assign("CCGBSLSVVRZSWEHRKPIYWLMCIJYLGECDKNLTBFXHXWUUOIAHRYAQAZMEIHNJLXIFPTWGVUPBOGWFMGTHOQMWPNDTPWJCVPQKXEZVROLBDUFEIQUSCOHWCXGRLFATMRQNHHDPJYOORH");
    tmp_msg_0.vnamespace.assign("QJJXGCEEASLDJBGGJKVKZKUNDNPHDXCIJQADQPBZLYIUSHVBFGKACRXUTKFPMIBPNFWHZFLMWYPMXJBOPMVKYVYNQEVKCYJQMJTGXCHGFSVNXSQRZWCRLGOOIACPDWTXPBSLVGAEUEWENOCXMCSZAPRYUHLTVYGTIXHUOAZLRMAFFWBHRTXNZKESWSQEKWBUUEOIROZJRHYHQYIOJRLBPTIOTHCVLMOKAWSBMD");
    tmp_msg_0.start_man_id.assign("VWZTKZYDOFYGWVNKDKGZTZOKYOHZGSTDXARIJNPIUTXEKMKHATSNMQWQSKDYHZCHRVIJJPGTJWRLYVRVRPLGLOCJXFBLOTULRXBQIYHXQAMVUCUEQMNJKQICLIBPAAQH");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QIUHLKUQSZHWNGHRJMJDAATQQZUOEQXDZXKAWBFNWSZCOSYHYCRIRIYMSRBXEFUZTYYRVKIPEABIBOVVCFXOCVCYMGLXPUKPPXOOGXAGHJLZPRBHEHXMMSRWVIFMGTGUWLSVTNFLSNRJKQGTCWEFEZQNTVSGATLJTAKWSNFQJZBJLFHIJGTZNRAODYVQVTKWYBLDUWPMAPLPKKHCONDXCCUONBFDPECDIEYYAGIEBWMDHSKENLZOJUMDDPR");
    tmp_tmp_msg_0_0.dest_man.assign("VVEZYPIJFYUWITPEQVGRYOKFLCDFMKDPUPKVOJLLUSDRPDMRIWVSVENCVWTWLZHIHQBRKPYALBKUSAIHJLFTMIBOWGBZZFOUPBGTCYXZTLBRVBWGQXIUGYDDJNQWATGJPFHCWNEOHSKAXTQNPGMUKVQBZKJAERDDRECOOXXNANKBNBY");
    tmp_tmp_msg_0_0.conditions.assign("IBIOHBBOQXYSLTFNMDTZCROLJEQEXPDWLHSRLTUCPRPJDFAZDIYCUXDFYJVBFVYNNMFYGIMPBWAFGWZJPEXUYWNGJNLOVESDSTBWFVMBHKGIWVJNYAQLLQRVCALGECSUNJMKXTBPFZQSKORQMWPOGGXKPMUIWQHNTAGVUDOZVSAFLRYPXWOXUDFJBARJIZSXCHEOYAHKUDEYGORESMIQUHHCSTJVUTLIQKQZHZAK");
    IMC::DataSanity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sane = 49U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::EstimatedState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.lat = 0.7274102211260158;
    tmp_tmp_msg_0_1.lon = 0.953501529870441;
    tmp_tmp_msg_0_1.height = 0.2691059839782495;
    tmp_tmp_msg_0_1.x = 0.5551452276411065;
    tmp_tmp_msg_0_1.y = 0.8553306184381798;
    tmp_tmp_msg_0_1.z = 0.617444258236703;
    tmp_tmp_msg_0_1.phi = 0.1221206355679133;
    tmp_tmp_msg_0_1.theta = 0.3458358765920183;
    tmp_tmp_msg_0_1.psi = 0.5795205414120018;
    tmp_tmp_msg_0_1.u = 0.014849788422726995;
    tmp_tmp_msg_0_1.v = 0.37351769559829306;
    tmp_tmp_msg_0_1.w = 0.16220930746747786;
    tmp_tmp_msg_0_1.vx = 0.592795053062197;
    tmp_tmp_msg_0_1.vy = 0.46727647420178076;
    tmp_tmp_msg_0_1.vz = 0.36997641711712126;
    tmp_tmp_msg_0_1.p = 0.5370006219117659;
    tmp_tmp_msg_0_1.q = 0.4079391779803738;
    tmp_tmp_msg_0_1.r = 0.45546132934211003;
    tmp_tmp_msg_0_1.depth = 0.30070116502894073;
    tmp_tmp_msg_0_1.alt = 0.55710341860427;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.21554116580362426);
    msg.setSource(65289U);
    msg.setSourceEntity(147U);
    msg.setDestination(56424U);
    msg.setDestinationEntity(231U);
    msg.state = 182U;
    msg.plan_id.assign("EOFBLKKYJBSMSPZIJTKXPLONZDRXIVNJLTDTEYUNRJRRLFZVKVYEXYIAIEGHZZMH");
    msg.comm_level = 112U;

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
    msg.setTimeStamp(0.5402158077668412);
    msg.setSource(22733U);
    msg.setSourceEntity(166U);
    msg.setDestination(10987U);
    msg.setDestinationEntity(241U);
    msg.state = 69U;
    msg.plan_id.assign("PMRZIZNUGORPTNJTKQCVPNUQEJMCAKQSBZXQIHAOGNHGZMJJBDDKWEEPWFSLBEYQVKXAWKCNDJGCWAYHONXTSPFMZUIDNETEWIQHOCSVSFOBULXZCQLUCVBGSLITAOWGFHPDUZGWUTYRVBCDO");
    msg.comm_level = 162U;

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
    msg.setTimeStamp(0.8072487201826517);
    msg.setSource(35480U);
    msg.setSourceEntity(67U);
    msg.setDestination(23424U);
    msg.setDestinationEntity(204U);
    msg.state = 88U;
    msg.plan_id.assign("VXRFUAKDEGNZWHNUZUHIMTPKYWUODNCIGNLQLCSPHLDZFTGXTNJFYXUNCCKWE");
    msg.comm_level = 243U;

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
    msg.setTimeStamp(0.13333107577896264);
    msg.setSource(55749U);
    msg.setSourceEntity(198U);
    msg.setDestination(12731U);
    msg.setDestinationEntity(83U);
    msg.type = 52U;
    msg.op = 14U;
    msg.request_id = 13202U;
    msg.plan_id.assign("VRJMZHLPOGUGKUYZRRYIXWYO");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.27094478064957506;
    tmp_msg_0.y = 0.24875717879475678;
    tmp_msg_0.z = 0.726710706523494;
    tmp_msg_0.k = 0.027824065344547955;
    tmp_msg_0.m = 0.8859813892159171;
    tmp_msg_0.n = 0.23434556876121815;
    tmp_msg_0.flags = 126U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AJBLHBEDMQSJAWXSKYAMHQIFIGNCSAOKOSLJTQVZFKTRUWCVQGSURFDZCNVBCBLABKKYKAWQFJUUQWRQRFZJRAYNTECZCVXRMKILTINHCDAWQUEUUTGMTNHXBOBDHPTINODEOVTDELHZYPZBDSTPPAXEPEBXNBXGNWIVCUSLPYLZONDVXONFKMHVFLJYYMHJHZPLMMQR");

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
    msg.setTimeStamp(0.5427694194760353);
    msg.setSource(57U);
    msg.setSourceEntity(254U);
    msg.setDestination(56384U);
    msg.setDestinationEntity(37U);
    msg.type = 249U;
    msg.op = 124U;
    msg.request_id = 45258U;
    msg.plan_id.assign("VQAOYWKGPRZIWWQNRLVDIJXAZXIECHLFEPOMEMFOINXYTDZKNZFCJPOLIGCFUKWRYWSHQEKNQGRCZSXELOOYXWEMHVOGVTSAQUDUJUREOMAFDSNTDAAHZIIDNKYNMPNUHFQBDL");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.9949749209425811;
    tmp_msg_0.lon = 0.5544035562973345;
    tmp_msg_0.z = 0.7218201914963203;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.6782790779419376;
    tmp_msg_0.speed_units = 214U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5081540775017744;
    tmp_tmp_msg_0_0.lon = 0.2851782937954449;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YCFQLEPUBGTSXVWKXBJQHMADYPE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FBBFGZOEEXGSOZCLTRDXHOQNESQYMDPXHRCYATILQKOERZRKPSGZMJWDXQTNRFMPMOAPBVAFBZNTESTQVAXUPGUDGJBWPLXCISDDWFGWRHHVJLVRNGYIKDQILVEQYGWMTZFZUZDVAUMSUIQJEQBZOINCUB");

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
    msg.setTimeStamp(0.5907217021980388);
    msg.setSource(15783U);
    msg.setSourceEntity(7U);
    msg.setDestination(22487U);
    msg.setDestinationEntity(107U);
    msg.type = 49U;
    msg.op = 5U;
    msg.request_id = 24686U;
    msg.plan_id.assign("PLYEOFFWKIHJLXGSSJFOAGGGPOUAALIJLAXGPMFZSEDTHKHHMRBHSXUIYWQIBZYDOTWRLHFQUWZKFCQKPVXAISEVMJWDEBHLRXTNNKTCUYPMYJDTLBHZJWYONQZJBPMTCOBVYSSICYBFMRUXNXYQHGUTMNINWROTCVZRSDFDVEKKVPWJRENVQDUVNDZIOOJGXXAALEYZGDRZLGCN");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 968213485U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LWKXAJXLANZPCVRXMTJCJJBRXRLMDNKMQONPWGGGWJMIXRNWNYJJYPRALVSOCXHALSGFMUWBZSEMUTYHRMFDVNSIQKYVQTNYWYDHAUFKVITSOUIFIBCSUDDOFHBUPJQQGESEANGDZEGGSREZAZDLCFTEPHOCFRPPVTYJSZWHYXTKOQAOBHGEVEPZWQLYNOPILPCUMFGKMHFXAVQWBMTT");

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
    msg.setTimeStamp(0.11083253488104738);
    msg.setSource(48573U);
    msg.setSourceEntity(5U);
    msg.setDestination(55610U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 27919U;
    msg.plan_size = 913758422U;
    msg.change_time = 0.46772326916397555;
    msg.change_sid = 43443U;
    msg.change_sname.assign("ZULNTDRXLPWBEOIHJUECIYCLQQDQOTBUQHVTFKWGMNPWOSKSEZPIMJVPHBPHIVYMZPSJRUDPUSSOMUUBNMKQMFFDZFIFOWWJXHBLIXBUGICHIDFYDRFYEXOVWEVYGXIVAQEBVZPNQXVDTXRZGJAAZKLZSQRTANNRHVTRRYHLAKBXTMAYADSKECLMCNNWZKYRSGGMJJSOLDDCANSPG");
    const char tmp_msg_0[] = {113, 72, 116, 64, -82, 119, 87, 71, -75, -15, -106, -15, -22, -20, -65, -127, -29, -64, 107, 35, -34, 61, 42, 94, 59, 87, -70, -91, 95, 56, 107, -98, 67, 58, 87, 40, 39, 121, 30, -80, -33, -68, -82, 101, 119, 56, -23, 24, -126, 100, 29, -91, -10, 61, -71, 69, 79, -29, -99, -47, 4, 124, -7, -58, -44, -111, -11, -127, 28, 45, -47, -18, 116, -41, 60, 73, -3, -76, 99, 111, -124, -35, 116, -49, -7, 0, 76, 94, -62, -38, -65, 30, 73, 75, 97, 47, 26, 45, -108, 115, -101, 56, -10, 7, 57, 62, 6, -111, -12, -74, -111, 26, -100, -107, 69, 2, 106, -105, 1, 83, 10, -96, 69, -78, 113, -79, -2, 26, -84, 54, -91, -116, -95, -48, -77, -33, 62, -40, -14, -6, -45, -14, -94, 105, -87, 63, -81, 87, -23, -48, 9, -47, 4, 98, -96, -68, -118, -97, -85, 93, -58, 124, 58, -21, 6, 9, 38, -27, -60, -51, -61, -25, -48, -100, 38, 57, -124, 101, -6, 6, 40, -19, -48, 109, -40, -97, -110, 25, -84, -31, 105, 65};
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
    msg.setTimeStamp(0.8644488944272599);
    msg.setSource(30415U);
    msg.setSourceEntity(75U);
    msg.setDestination(53624U);
    msg.setDestinationEntity(58U);
    msg.plan_count = 22994U;
    msg.plan_size = 2561107513U;
    msg.change_time = 0.623403625558421;
    msg.change_sid = 54159U;
    msg.change_sname.assign("UGVKNJWFLIDKJRRTASVCSUFQYOIXOBDZSTPQPSQCFBMBFMGVCBMBOIGJEISVJMILKCHYTYOEOUXSPESELKNRPXONPQKXUAHOGUFSYGHHBMYRCAMUINDWREMWRJPWZQLYMAZTNAXTPKNNEQBZICILJKXPGVWTMLUHLVKAHDJLZTGLRGGHPXWLGADCJFXZJHCTQVYJMTZEZHZEFDWIUXVRFNNVUWOQDTECUQY");
    const char tmp_msg_0[] = {-112, 124, -68, -34, 78, -108, 18, -34, -123, -61, -24, -120, -41, -84, 30, -90, 107, 10, 64, 112, 58, 68, -74, -108, -68, 45, 68, -126, -62, 23, 25, -126, 104, -35, -119, -84, 91, 79, 121, -75, -4, 93, 114, -81, -28, -30, -118, 1, -23, 54, -92, -89, 94, -44, -106, 50, -81, 20, -69, 65, 78, -62, 14, 108, -112, -5, 2, 5, -66, -54, 105, 65, -13, -77, 110, 54, -78, 111, -39, 24, -62, -84};
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
    msg.setTimeStamp(0.3374561701449972);
    msg.setSource(56852U);
    msg.setSourceEntity(161U);
    msg.setDestination(41891U);
    msg.setDestinationEntity(232U);
    msg.plan_count = 4511U;
    msg.plan_size = 3845275799U;
    msg.change_time = 0.23188611768657907;
    msg.change_sid = 23864U;
    msg.change_sname.assign("EIHBIECOSFLWOIZPIWLVJXTAGAAZIOKSBLVRDFDWOETXGTFDMIBRXNRZSGYHMWCMDTZKCMROEQJXXZQSFHJTQGFCQJJBTBPVWBZKHELFIPQGDWUSGVEOMNBNTZXDYKXUSMOKUWKCNXCQDAASHOMJATIQAIHHPYYBSCODZGLOLCGVPMAEWVJQZQP");
    const char tmp_msg_0[] = {-61, -89, -14, -32, -88, -90, -72, -117, 91, 37, -60, 106, -122, -107, -82, -107, -125, 35, -26, -118, 20, 23, -73, 92, 43, 77, 91, -37, 122, -86, -92, 113, 36, -40, 3, -22, 99, 110, 9, -119, 13, -65, -39, 13, -58, 100, -25, 95, 12, -12, 66, -76, 114, 23, -8, -8, -90, -48, -128, 125, -100, 53, 123, 90, -60, -40, 71, -117, -113, 31, -64, -20, -82, -15, -125, 3, -109, -60, 70, -50, 37, 105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ILKTJGTYJBCSOEZMXHOPSIVQDPGGZYUOVMLYEQAVMINCCVOQBMQLJRCXGTXVUNRUJYHDSNNCSYBATAPFTUXOABOEAPDMQIPVIHSJPICIFFBUPCTBJT");
    tmp_msg_1.plan_size = 52897U;
    tmp_msg_1.change_time = 0.423811525475157;
    tmp_msg_1.change_sid = 43530U;
    tmp_msg_1.change_sname.assign("YYKDYNCADRZBELUVKHUSJCQYFCPWUUPWSRMGHKAVRBHJUWESCQFGZPGEFXMMVGQPYFOFBIIGURDORXJBHWPSAPNMKLQDTPXVVLKEVXSXBXAVGVWTBJTLZAILDITZUOSHQLBJEXLVNVHMYCOTLDWXJOWONQOJTZFPJRTMCKDKHTUUXDEQASGFTGSYERYCNFQEALNWNLFCGCPWWKFRNIYOOEOZNIBQAUJINMRZDTIKXDGSRBHIAEQZAMIMCJPMKY");
    const char tmp_tmp_msg_1_0[] = {-63, -113, -30, 120, -30, 69, -111, 97, 53, 72, 9, 125, -24, 90, 29, -112, -10, 6, 23, -120, 36, 16, -116, 16, 96, -39, 79, -52, -5, -53, -15, -118, 64, -76, -49, 3, 48, 70, -97, 52, -71, 25, -71, -48, -68, -28, 75, 113, -42, 71, 50, -110, 35, 36, 31, -83, -84, 78, -93, 64, 31, 110, -23, 100, -87, 42, -17, 98, 121, 41, -110, 32, 76, 109, 90, -73, 114, 46, -55, 118, 59, -17, 58, 22, -43, 92, 65, -111, -60, -71, -126, -37, -68, -74, 86, 58, 52, 67, 101, -38, -5, -127, 16, 18, -86, -84, -2, -119, -13, -123, -51, 35, -7};
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
    msg.setTimeStamp(0.3753234124100985);
    msg.setSource(9637U);
    msg.setSourceEntity(62U);
    msg.setDestination(13258U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("AZESGJHCBTNZIXLGHBGRCWPKNYLHDVBRXEWGFJEQBXKNCNWMJELLHHTABKMODGMTRZAVDPFXYKAUMVIEPYNUIBVFMQFGTZCINJWRWYC");
    msg.plan_size = 21033U;
    msg.change_time = 0.5587338523499685;
    msg.change_sid = 57963U;
    msg.change_sname.assign("QJVHFBQICJTJPCEUVQDEHUJPHAKMZQOLTJNZABUZECDZYBHGNWHIXBLDRPYOXKAPSVOOGXNGJOBWVXZGGDTFBJKBPZRZOFCWMLKCJOMPIAFWRLELYSEQRSVGFMURXKKLIAADFHNRGDFQYWCYKXXEJUUWXZMNYBQPZVLIUHBDNURQNTHRRVPGGKSXFQDSMAECTSCHDQOTVSRCXTN");
    const char tmp_msg_0[] = {-126, 99, -19, -86, -12, 30, 53, 51, -19, 41, -121, 27, -81, -3, 61, 43, 69, -3, -44, 31, -41, -27, -126, -92, 79, -70, 66, 111, 49, 32, -16, 60, -113, 96, -98, 51, -64, -69, 113, -97, -107, -13, -5, -76, -51, 119, 30, 18, 18, 21, 6, 38, -78, 95, 70, 84, -124, 57, -68, -27, -60, 36, -74, -103, 48, 92, 122, -96, 91, -5, 91, -119, -68, -81, 8, -42, 122, -98, 13, 76, 104, -19, 27, -65, -127, 15, -97, -10, 1, -36, 5, -109, 57, 27, -48, -84, 96, -109, 18, 70, 53, 117, -33, -87, -116, 109, 35, -2, -111, -75, -94, 37, 46, -26, -29, 1, -122, 69, 43, -72, 126, 20, -39, -72, -105, -14, 125, 5, 83, -2, 118, 67, -96, -28, 57, 3, 24, -65, -30, 74, 57, 79, 12, 16, 113, 114, -88, 17, 52, -86, -61, -75, -15, 43, 11, -15, -2, -36, 78, -25, -92, -35, -79, -9, -22, -108, -51, 110, -74, 27, 50, -48, 123, -56, 95, -60, -128, -29, -22, 7, 97, 103, -76, 11, -67, -97, 77, 115, -97, -10, -52, 25, -92, -99, -16, -122, 5, 58, 71, -126, -92, 30, -84, 51, -96, 120, -102, 59, -109, 4, -121, -37, 13, -77, -106, -96, 21, 71, -19, -24, -64, -39, -124, -20, -101, -113, -114, -51, 76, 66, 84, 69, -63, -18, -115, -23, -94, -45, 83, -65, -44, -45, -86, 107, -86, -11, 119};
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
    msg.setTimeStamp(0.9835722677535115);
    msg.setSource(32303U);
    msg.setSourceEntity(50U);
    msg.setDestination(59370U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("ARMDZMPQANHBXGVUIYYZFGKZPYJQHWGEYULORJJDJPXKVUIGICDAJRZPSSAKRRDO");
    msg.plan_size = 41715U;
    msg.change_time = 0.058678278242851545;
    msg.change_sid = 16629U;
    msg.change_sname.assign("DXCRQKIZUPAKVZFUSWKTLACMYICYJYPXWUIWCDZSDSUBVEZFZNRINFLZCOEOGJNNHDHJMCHPVQPETNJQJAULXDGCHKOEKWNBIDMGLJZIHEXJHKORWFRFBGRFASXMQSIOQAKSZCIPT");
    const char tmp_msg_0[] = {54, -64, -125, 54, 35, -4, 3, -117, 44, -24, -10, 7, -73, -61, 20};
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
    msg.setTimeStamp(0.18314372810353463);
    msg.setSource(51830U);
    msg.setSourceEntity(176U);
    msg.setDestination(33678U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("VQFWSDPKPLPVBKQYRWLCFNZXBMJXJGAXPIEVIBDCQFRQSDJVNHXEVRMKPJAAOWUZEFYHJXWHKTFFMEHRTBHWMYWVLFXZPRUVTRNOKTDQQNSYASCKMQYADOJWWWIJHLGSAODUEOUHLMTVENCNIYGYAIDLKSCBQOFBGCLUUZHTCUZKMFS");
    msg.plan_size = 58402U;
    msg.change_time = 0.5215317732922364;
    msg.change_sid = 46994U;
    msg.change_sname.assign("DVWICYWJLTAGHQLERNRHNMHQVBTGZFBZUCNDNCBJPNTTMPBYDBFBCXWUGNIAXEKRXMNTWAUDRAPLZSDHPAXJXRISEOMRJHIVUQAZGHAGKEOVKWPUVXKVBSSNQZCDWXDQYOGKOFLBCTNSKFLVTYDOYPEMHTEIDCWAQGSXCJGKCFYTWEQFZWGTJAJONBMLV");
    const char tmp_msg_0[] = {-43, 80, 123, -50, 18, -10, -45, -91, 56, 114, 33, 115, 46, -85, 74, 53, -117, -10, -48, -106, -69, 41, 121, 0, -63, -110, 110, -105, -19, -2, -51, -61, 22, 22, 105, -59, 84, -81, 72, -77, 103, -17, -73, -110, 34, -56, -127, -109, -64, 121, 43, -103, -77, 62, -30, 81, 104, -16, 100, -10, 96, 38, 38, 44, 116, 12, 82, -42, -20, -17, -78, 84, 65, 36, -62, -29, -120, 99, 53, 11, 80, -27, 109, 114, -105, 54, -86, -90, -103, 17, 5, 52, 53, -30, 115, 47, 14, -99, -4, -100, -43, 53, 63, 0, 33, -1, 21, -29, 69, -117, -43, -45, -1, 43, -13, -69, -70, -34, -104, -119, 80, -85, -20, 47, -75, -61, 5, 100, 78, 77, 92, 86, 67, -112, -62, -123, 104, -58, -93, 104, 87, 27, 115, 56, -48, -16, -82, 70, 18, 18, 102, -128, -104, -109, -50, 86, -112, -112, 31, -104, -98, -109, 4, 9, 120, -54, -18, -82, 86, -113, 88, -48, -73, 102, -28, -91, -87, -72, -29, -34, 113, -102, -5, -108, -85, 68, 93, 19, 108, -40, -68, 25, -122, 59, -97, 24, -73, -47, 37, -62, -119, -2, 121, 83, -19, -56, 56, -31, -98, -108, 41, 87, -85, -13, 9, 78, -84, -49, 39, 116, 61, -106, -49, -124};
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
    msg.setTimeStamp(0.7770287897614239);
    msg.setSource(34524U);
    msg.setSourceEntity(138U);
    msg.setDestination(24821U);
    msg.setDestinationEntity(0U);
    msg.type = 46U;
    msg.op = 67U;
    msg.request_id = 41529U;
    msg.plan_id.assign("RSXXXSLESOGXSJIC");
    msg.flags = 10803U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2464557804U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JGUPBIRHKDFPNPCTCAOORYUHBDLLFQGJCLEQOTCQORHDELXUMXYBEXNLZXTMAKVBUAQYFIFIFAYOCOSXMDAJZYNBKDSPVKZDCZBXOHAERZPFBUSKSGBCQGJTWYNGKSETYCUOPZXRQESBCGMIDNQOGDZHTZPWIPTMJFVIAHMWECAIVHQPZIRLRFKPDUYSXLALYVMRZSELWGMNWWQ");

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
    msg.setTimeStamp(0.28948348435656224);
    msg.setSource(20347U);
    msg.setSourceEntity(112U);
    msg.setDestination(37462U);
    msg.setDestinationEntity(157U);
    msg.type = 5U;
    msg.op = 82U;
    msg.request_id = 58616U;
    msg.plan_id.assign("CAYFFXWCDEVXAGYLXCENCVTOQGBMBHQAFTAQRYENSZNWAKLOFZWRUMUEPZLIVDPQSWTSNPUBKBEJZPGZXFETZVROZTZAHWOWUUFJWOLIHSVMNTTXGDHILYMVIPDHASHOJYJABXXSJYLNYUCMOQKMDKVTIKNIJBFBGKJUTGBZQQHFBRXIQJMERHUBOKRMLDNWVHUWGVUVQDGCROALCDQSRDEPJWLHRFPY");
    msg.flags = 8056U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.026342156554454266;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AVDABWLXBKDWGITVQBGVWOAJJMRXYAFVFRFNOPSHRZFSMZBVPCSLXHRYK");

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
    msg.setTimeStamp(0.9686626654338768);
    msg.setSource(55957U);
    msg.setSourceEntity(168U);
    msg.setDestination(17832U);
    msg.setDestinationEntity(126U);
    msg.type = 111U;
    msg.op = 73U;
    msg.request_id = 4772U;
    msg.plan_id.assign("ELTCWWZOOJCRUHDBXKPNCUITKFIMXFVDZYZDMAWDMCTGLSKTOJNDYBUDVJQQAKQESXFNFRQRLQAGLVFKGNJKGOIBEBDRGHTXZHZKRTRAPCZZDCEAEXBOVPJHOFFWMWQONLUYSBVHUCITYQTRWXSHTUVIBHHLIUFRNJPEFLZGPEJNVWXCJPMMMAAGOEUSV");
    msg.flags = 2155U;
    IMC::AcousticPing tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AHZTGYASTBMDKAFWNLDKZYFAVZUIUPJCQAVKQQWOFTYVDNOMNRKPRXDSTPWGNSLKEGJVZLEOAKMSYQIBDLGHBRSXMVBWHNVXOFETQAOGZQCTGLZXHFMJXVMUKCBCOHLSCHZGLSIUUFDCPIKZZUXWJIIJNHBIPTQPQQXIDCKELLXITEZIDRWSJVJRBBJWWWYGHDAKMCHXUGDF");

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
    msg.setTimeStamp(0.5641580472017476);
    msg.setSource(7176U);
    msg.setSourceEntity(47U);
    msg.setDestination(23783U);
    msg.setDestinationEntity(20U);
    msg.state = 35U;
    msg.plan_id.assign("YFCIJBHSBRELUPPJVWCURNQZEVGEWNEHDETUMJOWMYALYCQQQDGBWIAGZSPNMGXKSUZMILSUGTKCZ");
    msg.plan_eta = 2097524070;
    msg.plan_progress = 0.9460413164210122;
    msg.man_id.assign("DWVXKMZEYKUP");
    msg.man_type = 22546U;
    msg.man_eta = -1791053306;
    msg.last_outcome = 126U;

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
    msg.setTimeStamp(0.5774941765566157);
    msg.setSource(43340U);
    msg.setSourceEntity(236U);
    msg.setDestination(25982U);
    msg.setDestinationEntity(20U);
    msg.state = 212U;
    msg.plan_id.assign("WQTVSELJOOKFXTJWEXWBKTQCLTSCENVSGPFTYMCHERJSBNX");
    msg.plan_eta = 522896595;
    msg.plan_progress = 0.13851178849093093;
    msg.man_id.assign("KNCIZSNYJVPXAYJCYZFFSLBORWNNQXMKWJEDSWQNLOUTEOLRMQZYEDOGYTWDVBLKHENHDNAOATUHEMIPAHQBLBHCLJFRYCXKDCVTZMWRKDXNRWL");
    msg.man_type = 39145U;
    msg.man_eta = 1471125722;
    msg.last_outcome = 137U;

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
    msg.setTimeStamp(0.08917749541703723);
    msg.setSource(31156U);
    msg.setSourceEntity(117U);
    msg.setDestination(5640U);
    msg.setDestinationEntity(36U);
    msg.state = 82U;
    msg.plan_id.assign("GMEQXNKFAMJKONEUGPXVFSTJSBG");
    msg.plan_eta = -139230861;
    msg.plan_progress = 0.9206423198906347;
    msg.man_id.assign("PGMGVNQWEQVIDZESOBCZSDHONTLBGFBXCHSURVPPLXODXOWTKOZUJLLIEICKNIKZZVPDWWFRAJJMBUBRDOCUFHEPKGQDCMDZUPPWTATLFVQSRUVVIYJIZUESMRHFYFWHVTWIZKQQQNATSASKNAUEBJBTSIYJGCYNHRGLXCWDAXRYZXABMMHHQAWLOGNXCOJTPE");
    msg.man_type = 25849U;
    msg.man_eta = -468879405;
    msg.last_outcome = 90U;

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
    msg.setTimeStamp(0.7100541574454496);
    msg.setSource(21676U);
    msg.setSourceEntity(240U);
    msg.setDestination(30450U);
    msg.setDestinationEntity(72U);
    msg.name.assign("ISZVJUTNWQOMEMLZDEXSRYAICQCVDISOZWOWNZSUQXXPFXRLTEJEVHHTMRNQFRIFGEGPZOTULZYRJDXSCHSTBONDVELIKZRPFGGDVPSCBIEFBNYKGKHIVODQWYNOWBSTMYOYMBNTR");
    msg.value.assign("QTFDYMYHAPMTBCMCZSIUZHQETVAGNSEICZCITCOCXOZUKTGRBJRVBRHVRNUPLAPGQCYRDWMBEJQEYQXBMDTYKFMSYBSJEGDXXZVKVUKDWEQDAMKRYODOHFIBSZHNLWOPCPLZZKZLTATXYOEOWIJRSLSFFUDAGRLLIXWEVNGPOULWWVUKPGNJQGNYFHHFEXRWTMOJIBNJAKYEQGWPDUNXIFKDJVSPHLORHTAINBHNFX");
    msg.type = 87U;
    msg.access = 222U;

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
    msg.setTimeStamp(0.13619178743457983);
    msg.setSource(15980U);
    msg.setSourceEntity(218U);
    msg.setDestination(49891U);
    msg.setDestinationEntity(32U);
    msg.name.assign("OPRWMNSANXCAYHOUUBCGJYQVJSUVYDWIHUKHREZVXLRTDUEJNLLDFSRNAOABYCFFMWLQBEIMMEOMZLRTJVGMDQBERRYKBNEKZXNXLRLYAGPCKSDZFVTTUNGEGHSDTJMCZJQCIPV");
    msg.value.assign("PIZOFFHZZTFBJUTRRZMLNLJDCUCECXXYUAIIMPPSHHOCCQCLSYRZTATSOGAWEAWQHADGPRRUVIKUTZPBUABQF");
    msg.type = 58U;
    msg.access = 32U;

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
    msg.setTimeStamp(0.3886255136565324);
    msg.setSource(13872U);
    msg.setSourceEntity(53U);
    msg.setDestination(48840U);
    msg.setDestinationEntity(93U);
    msg.name.assign("UVKZVITUJCUYMKNGSSVHYJYWDSKSSCTGUJRJRDJXBYAZZGMMJIFBKXXOIAQTUNPLWWHFUYPOEZEZPLCVGVHCFLEFDAQGKVPOLTRISQEHHZBNXAAGIONLQIMNMPPOBYCLCQEKICEHRMDDUJWQGXQDHEPYIWFLQTGRZXKDBVBBGTVBLRYROSJWNLOBXMVFRWJAIHDFTTMAZASMIQEAKLFAHMKREOBCOWNYDNRNUHXTDPSZOGCQKTFCVWNEPXFYW");
    msg.value.assign("ABCOYQHURXKJXGUJPXGLRSUGVJWYKOANW");
    msg.type = 242U;
    msg.access = 17U;

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
    msg.setTimeStamp(0.8299240440252426);
    msg.setSource(63192U);
    msg.setSourceEntity(225U);
    msg.setDestination(36705U);
    msg.setDestinationEntity(53U);
    msg.cmd = 162U;
    msg.op = 23U;
    msg.plan_id.assign("IQIXZYDLGCAKUXTHAJNVNVWQLKHRSILDOOPMJUVMYPNMDWHUDSWPDXERYAOJEEUURKYTUNQIBFWEFCFJDIEMQCWEWPXFZKUSYCEIOHRSTJJDPLTSZOLOSNCKMMLANVYAGRHDPINIOCQVNLCLFBPJTFGYJTKGAJILMAZSZQBFMZPYBHRXBANGOGAXINVQHBUJECRLRBQEWHKUWBVZCGPXTHHDVXZSEMO");
    msg.params.assign("IMZITXPFUXQIMJJUNQAAMUNOFPXFSAWPJTHSMUKRXBZDGXHQOYUMNJFAYZMVARLQOJKADDVQGTWLLGWIYVUMGVGETHRYNNOBGCGAWMSJCEYSHDSACESQFGKOEKUCJIBLXYWM");

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
    msg.setTimeStamp(0.6709178749482021);
    msg.setSource(13980U);
    msg.setSourceEntity(220U);
    msg.setDestination(18176U);
    msg.setDestinationEntity(12U);
    msg.cmd = 124U;
    msg.op = 18U;
    msg.plan_id.assign("YLPXSIFXUBXNXWRBVGFNZLIBRBAKPCINVBSZBYKQCANPKDYATCTIEBGSJAWSOOPHIWYPHRQJWVWAULKFZEAXWJYDQDLKMJRQFVLFIOHXHWGERITUBYXXKSCMJTVBQNMYMFCJKLZCRDOHVETUFSZFXTGXJEGYTBLOSNGJHJEHCHMAEKOSUYMWOUGAJPIVFGOOCPRWATDSURGAUHDQVQZNREQGHPUUSNEDMNMPN");
    msg.params.assign("BLXIQGAQVHDKYLNVTQOSUUJEDDFKYPIXPTMMIBLGOKZNPOECWVCAKVNPDADIBQDUSTXSCHAGOOQCKUMZLXTJHLQTOHEUXGTLNLZJWOSHZCRUWGWCBMNZJOMZBWTDEQANYSGPKFLRJBRDAFDLYEJSUBGPTFVVSKRMWBZRIECEFTAGLQYKSIFZMIGISXFIX");

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
    msg.setTimeStamp(0.492966130802559);
    msg.setSource(33039U);
    msg.setSourceEntity(230U);
    msg.setDestination(42803U);
    msg.setDestinationEntity(103U);
    msg.cmd = 24U;
    msg.op = 130U;
    msg.plan_id.assign("PFVPFAKUYCCIILGBPSKLNZWHOWIHJMUAJQSEWOJNFGFUAUNNKANVYLUOBFCLTUWSRVEENBDXZQDQKYVJMDRTVVPCNGKDPGTLLDBKTXAIFKPOHEUFWVRDXEHXEPTBOGLZQJODRUCUW");
    msg.params.assign("BAYVUISPLVHHYKCHMSMFGGCECVQJAYVPLOZZRJXVAUVKUCRAZESGBOIWOCMRNYDHETOOPLYOFSXXWQPGTRRHEJMLJZUUTAWQUQELDGMXDQTDEFLFDHKNGUSPWDZAJCWNZTOAWAQRVNXLSNMDBZFSRTGZLUXJXSREVKPDYTGICKCSIORJIEKPIWBNJYOBNWFKXDLVLXPEDMQBHIMFQRJNFIHQUBZNNABPTHYBGWFSKKYPGMQYXUTICEFIZMWB");

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
    msg.setTimeStamp(0.13286455859904667);
    msg.setSource(20371U);
    msg.setSourceEntity(194U);
    msg.setDestination(1548U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.31543038288307135;
    msg.lon = 0.7635169123309148;
    msg.depth = 0.6688409191418094;
    msg.roll = 0.2835467417755242;
    msg.pitch = 0.245334090037453;
    msg.yaw = 0.6501581299064352;
    msg.rcp_time = 0.782370815004644;
    msg.sid.assign("SMGOOIPBNDZGEWUSKCOBLUQDFORRZJNAXKNTIATAXMFWPDFJJRGBLSLXGKPVMIGEODGAFQVKENWPIOKYUHHVPGYIQCQVHLWYKMNILVJEQWHJBMSLSFD");
    msg.s_type = 6U;

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
    msg.setTimeStamp(0.8004720182219516);
    msg.setSource(36113U);
    msg.setSourceEntity(108U);
    msg.setDestination(58165U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.9652826841329807;
    msg.lon = 0.4989304211710902;
    msg.depth = 0.3093890362870364;
    msg.roll = 0.16154606422133755;
    msg.pitch = 0.08779683861300869;
    msg.yaw = 0.8842744978274746;
    msg.rcp_time = 0.6493400586987612;
    msg.sid.assign("DTCUHOAPIBQZYJIGTNAEYBUKQUCZFOPDHLARVZXSRFYZVRKMWHVQDZIWAYQGMVMSGOFRLITEJDWNPN");
    msg.s_type = 3U;

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
    msg.setTimeStamp(0.968293480820705);
    msg.setSource(55084U);
    msg.setSourceEntity(196U);
    msg.setDestination(21055U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.11271028248800297;
    msg.lon = 0.23910236051185807;
    msg.depth = 0.060944931251995516;
    msg.roll = 0.8358509626277628;
    msg.pitch = 0.20993124459503487;
    msg.yaw = 0.6708924858588018;
    msg.rcp_time = 0.02729076010037057;
    msg.sid.assign("IXHUWBVICAHFXGGEBGEFLADKUCQSWSBAXNEQHKWLVSTDCYYWWFVTVEZQVPZOOCWTKHTQJOFTRYMDWIYFGODOQVIDLDKRLPPALCQNVVQYPMESRLQLKMNWVHBTUGPBZITBAKNEJOLDAXRRLZFIKMKSCFREEUADSKONN");
    msg.s_type = 182U;

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
    msg.setTimeStamp(0.5606284818633429);
    msg.setSource(44464U);
    msg.setSourceEntity(51U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(43U);
    msg.id.assign("RTUVFGBDSKZULMCMDEVAFPHXMNLC");
    msg.sensor_class.assign("MLYMVTEEAGOADHOIPTFSVIEHWDIWDBYPVCZNJSITOZHVHTZMJBQFMXPUEYDKTYAVHSEOFNCSRALDXWEYENDKPMMROICMWVSJJXHYACBFJTCAQYIKTLQKUCJHYYSIRSOUXKGQPLHEJUFLWGLDVCCSZBFNPCBNVJQABZEFKMLORNWOMDPGXQNJLXTKXUSDXURAKSUVNRMNQPAZYJGZGCUHDRBAPGZKZLRNIIWZWTGTRHOFORFQQ");
    msg.lat = 0.49068523114541807;
    msg.lon = 0.18829954065490195;
    msg.alt = 0.25185284805087194;
    msg.heading = 0.5666552267301037;
    msg.data.assign("VTYACNXYHVXVMGMCSXSBVNMQHWDCBGSPWQLHQKHQZLKUZELGHHETQKCJCGAPZDZXJELYNEELRMRJGKLLJWRZHVTXVTILOJUEOAQIJXDRYFFFIBTDIAFCIAYBWUKABNMDPBBHNQSZRPUUIBWFMREQIFHTWUJOOVTXMFIOORDKNMLZ");

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
    msg.setTimeStamp(0.9480649633591702);
    msg.setSource(32552U);
    msg.setSourceEntity(65U);
    msg.setDestination(21584U);
    msg.setDestinationEntity(58U);
    msg.id.assign("ACWDUMPZELFGYFGZHLYOFVZQBILBQSVGPKITAEPUZMSODJYGHNHTZAXTFAIFKBNZBVKWKERPHNBCCYTABOCSCRFMXQRSLAIRIVYSGTD");
    msg.sensor_class.assign("LDMFAVXSBUSFRZCKVIFHEIHTBVIPCACGLTRJTWNRCBYIGURWXNHREGYNPYCQWXEFQTXGFBZBCDDKPUDPHUSVVUZOGBMAKWGLOMPYOPYOTRDVUCUCVAFJMEZLJNIQNAIDVUSMNJDBLFSLKKJFTYELBCZUYXWRQWKNOUEZKYSRXZIHPPVXAATQGHQWWSKXOYLOJBQNEOEPDGSMRLFEIJQIHA");
    msg.lat = 0.8273040338302741;
    msg.lon = 0.6628725316602553;
    msg.alt = 0.692921710990276;
    msg.heading = 0.7940186101382568;
    msg.data.assign("SXEBVZXEOLPMMWYVPGJUANALWDMPLBDCUQJFMWSPQAHAAJJHDNMAMTLMXUJCOYJBMQPTSWYYBSCIEXHO");

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
    msg.setTimeStamp(0.8654563473978403);
    msg.setSource(36795U);
    msg.setSourceEntity(130U);
    msg.setDestination(54943U);
    msg.setDestinationEntity(166U);
    msg.id.assign("DXWZEEMAELFGQTLMGTPWOIXDAPWDCBSHPEWSZJVMSDMRNXRBRWZKQG");
    msg.sensor_class.assign("SJKDCRIILKCAVGCFKLLSKAGWRBYMEAZXNVMTKZFSVVNSFTBKJMFCUBGAPHOOTLGQRRRPVVOHTFUYCYIUB");
    msg.lat = 0.14185496801034037;
    msg.lon = 0.24346864477570218;
    msg.alt = 0.34617830265952676;
    msg.heading = 0.08519514689754482;
    msg.data.assign("LSSYUVNGKTNEFGZNYKSZONPMICBDUWTLXWCGDMRAYJEYBHCIMHPLUECLFGDBOAXTOQLOQQNXSGNJQXFWJQQWRJIDBBRIKRMZKMDFERHKJRPWWHAIOTUGUDECUSLHZWNCXNJMDQMZUPXTYXFAFARZCLRISIVWYPJZVYAQDKBPCJIQXWVHIGEUMGHBYPRDATSHOZKVVLDFMVPYCKENWPPVOGLBCHUGXJIHQVO");

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
    msg.setTimeStamp(0.7097431057931396);
    msg.setSource(27453U);
    msg.setSourceEntity(46U);
    msg.setDestination(32785U);
    msg.setDestinationEntity(86U);
    msg.id.assign("MGJSWVPJEULYUGBNIFZAIPWUWKRSZDLZNPKGWZNRIUVONJCVDVZZEDCJIOGPEXCLKMHRSHXMREWVIGNYSTYHLYOBXCGBUDFHKPXYNRAOPTCHBNQMXAARTDUCFWJWDUHGWOOAPBRMAWSFUXRJFXYYHFNLYSMKRKIREQLCTPKCLBVA");

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
    msg.setTimeStamp(0.8782555964503816);
    msg.setSource(1126U);
    msg.setSourceEntity(119U);
    msg.setDestination(48204U);
    msg.setDestinationEntity(154U);
    msg.id.assign("PCQUULALEJXNDOBZXJDQQWVRKSMTGLBFNJLLJCBLMZTEKOFLRIYWOFANXKCQIKFRSKYHEEYARGPHPUGTOGGOMHQEWDGRPOHWCYBMIBNVYBUODTFACXIUFHZBEMBXJGRXFVHEFNICGVRLWXVJDVVNUDHBTXPBFTAQGSRFMYZYIJKGZDSVCNTUWMEWZUNIPDQMTDIPOSCNPCDITOYQSCEJARSIWZXTPXNKQMLYEJWSRJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NVOJSPQSXCMEVXNILHKTEJANAERKNMQRRRSROZZIHEDYFOYISQZCOVIUGZHKRDWUPTTWIJYZSRVRXJLGPKJBUDWRNLJCFTJFTWNPVUFVHCTOKADYPUBGAMWKZOVXMBBBCWBOZNXIKACLXMGEGACUJNMQDWPMPIGVLLJBHFXFXSEQWFSXDKDHHBOSYGTFI");
    tmp_msg_0.feature_type = 128U;
    tmp_msg_0.rgb_red = 115U;
    tmp_msg_0.rgb_green = 20U;
    tmp_msg_0.rgb_blue = 243U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.29114556293823146;
    tmp_tmp_msg_0_0.lon = 0.2781295740967218;
    tmp_tmp_msg_0_0.alt = 0.006445967279109621;
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
    msg.setTimeStamp(0.8402139342464667);
    msg.setSource(59162U);
    msg.setSourceEntity(31U);
    msg.setDestination(46074U);
    msg.setDestinationEntity(187U);
    msg.id.assign("PTTVSUVNDSWMRYDKGGQBOUSNHWXKSEATGCWIAU");

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
    msg.setTimeStamp(0.8681091284812709);
    msg.setSource(56077U);
    msg.setSourceEntity(132U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(2U);
    msg.id.assign("PBYJSKQDLKCPTGQONUUAJKIEGWKZIBKYWDQMPLCJSTSWCHCHRNURYSSWPYKTFAIELHQDSSXZFMENWYALORWMUZZULHBPNMAAMMDGDDEKNJBLYWNSXTMEJNTAXPQNKYMZTTXEABIXVBPKUXFGXFQHVIYJVGHVHLLUSRKXTFVZTRAWRCCJVOOLZFCWFOINYZMPUCRDUHAVQRBHCQNGVIZUJYGDPREVSEFFAPOGBRFLBXDXOGIOEEWJDOQ");
    msg.feature_type = 19U;
    msg.rgb_red = 140U;
    msg.rgb_green = 179U;
    msg.rgb_blue = 47U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1685519405079553;
    tmp_msg_0.lon = 0.0067282021929883085;
    tmp_msg_0.alt = 0.04700476760662253;
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
    msg.setTimeStamp(0.5494226240067629);
    msg.setSource(566U);
    msg.setSourceEntity(62U);
    msg.setDestination(27957U);
    msg.setDestinationEntity(57U);
    msg.id.assign("LUAHOUIDPTEXQPQCOHSERFLCSRMOEJKJLIKKGYCKLQFZKKNPIFSZNFFLLCGYVKJUGEDORQTRUBIGJPUQJGDZUDMTSFMSYXRWBTLDSFBNBAVMNIOZLCIAIHNVBNMNYUGCXHQYVWXHWATYVYATDZFDESJSHVLWSWWWEMSYAOBBORCJTJHAXBUYMDXPFPPWOINZXGKXRIMPTJTZGEQVXZBVAHZIRQLAM");
    msg.feature_type = 102U;
    msg.rgb_red = 202U;
    msg.rgb_green = 228U;
    msg.rgb_blue = 148U;

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
    msg.setTimeStamp(0.5926862872892686);
    msg.setSource(38071U);
    msg.setSourceEntity(134U);
    msg.setDestination(23386U);
    msg.setDestinationEntity(212U);
    msg.id.assign("FHNAXXXPTJIDJORUKFWVKZZVBCGWVQOLYYEVCDALIWSFMTJJNILQFWIVNDXDUGTBQOXUCRVRTGRHDZOELURYCBMQDCWEOBTGKIAFOUPQHNBUQPBTZWKRWJPESLZBQSYNCANKHVEKEQDYVYNLVFHVAIOIMXYNKMSZGCYEIPKSSFMRYNJMWGCZULUZXHWTTJZAWEFGEHXKNSOTDIRJJFLAJMFZYTPOBLEAQ");
    msg.feature_type = 236U;
    msg.rgb_red = 134U;
    msg.rgb_green = 114U;
    msg.rgb_blue = 95U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4008948169587747;
    tmp_msg_0.lon = 0.530772536681686;
    tmp_msg_0.alt = 0.5890430309466079;
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
    msg.setTimeStamp(0.0827225265278152);
    msg.setSource(53164U);
    msg.setSourceEntity(101U);
    msg.setDestination(42185U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.0683873291971634;
    msg.lon = 0.4612041919939921;
    msg.alt = 0.036528394847540224;

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
    msg.setTimeStamp(0.07347756039767339);
    msg.setSource(24543U);
    msg.setSourceEntity(21U);
    msg.setDestination(19011U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.062114566675286365;
    msg.lon = 0.5158082284738007;
    msg.alt = 0.1820047091919509;

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
    msg.setTimeStamp(0.16033397609456668);
    msg.setSource(60473U);
    msg.setSourceEntity(132U);
    msg.setDestination(53749U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.08851533877177131;
    msg.lon = 0.1833404069680652;
    msg.alt = 0.9390121152456391;

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
    msg.setTimeStamp(0.6657207269238441);
    msg.setSource(27931U);
    msg.setSourceEntity(65U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(39U);
    msg.type = 221U;
    msg.id.assign("QFWYRIEPVSPMHHKUXZMXXDVJGSZIVXBPLDZYDGOUTUIFTKEUHLYORDNXLIZPHEOZOSBLFMSUCOZSQCXBKQBXIIHTBRLGTQRGZUKJMBNDNVTEEGOAFDDWFCSSMHVJBJJUQXZZQETDWQWFUMRKAAQILRNCJWPMDVJLSPNJKYWTGIYCO");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7294683928998137;
    tmp_msg_0.speed_units = 95U;
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
    msg.setTimeStamp(0.39438954630074874);
    msg.setSource(46281U);
    msg.setSourceEntity(218U);
    msg.setDestination(49651U);
    msg.setDestinationEntity(230U);
    msg.type = 24U;
    msg.id.assign("OQISXBLZYYOCVNNIQOBDFSPWDUAFEJXFFSXRBXSRTZEEEMAUMYXFSZIQYLETAKWQLJAPKPLKAYOGWMQGPRQNUJOIZQDWMYACHUINFTTSTNNGGWHWJERAJVLXYWJOTUARVAIQYHVKJUCCGMCKCUEKTOMK");
    IMC::ParameterControl tmp_msg_0;
    tmp_msg_0.op = 213U;
    IMC::Parameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.section.assign("ZFAWNUJSLWLDKDFWSUPZMHESOEMXZNRSKBDDOOUVFYKSAQFGOSWQBBZDXWCPCJLEGVINQBYEWGWWTIEBIJNXFCPTQZKKSPENTQIVADGIDRDURSUWCCQZXPYPTOFITRCAMKAKJPKBVVNMXJRUJSVPQXUEYVSHZTVHRHKJXQIFGYOPYHFQOGMIZALNWLD");
    tmp_tmp_msg_0_0.param.assign("XYELGFNIYQZOWGAVTMRDSBNMXAIVPOBHUOGDSSTBMFJGOKXWYZDEWIJTNIFLHTBPDSKRKHLNWPHXXVIZNJGJEPUCVVSKZSHOVHBPQUNPWFDSOKYBQPHQMHWQCACRDOXAMCRVTRKLTQXBYGKCKRWUOZTRQUCLNIBQIQLZOPEYWLKEFRARGEEJMXADCHCJUFREZMVGFLDNFVXYDISZBIJAJZGGALLQDPEMICATAOJT");
    tmp_tmp_msg_0_0.value.assign("JLPMMFBVMTQIOBUBMZDKZCBYLRGSYOHSFASICXPOPEMDIENIDNPAURCBUUVPQJYB");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7251136795875285);
    msg.setSource(12056U);
    msg.setSourceEntity(83U);
    msg.setDestination(65528U);
    msg.setDestinationEntity(227U);
    msg.type = 41U;
    msg.id.assign("QGIKQSXBCBJJTZXFUWXVFUJNVLRTWHRYFDVIEEABCZPDIOIZWGEVKXGTGECOTENYEHYSSLPCGEJFUFOENLZNYITSWAEVUQORLFMTSNJBRKCCHSBUGLBXLANDIQUDTHHYWVRCYBWPF");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.4785956764256738;
    tmp_msg_0.lon = 0.0560101401594677;
    tmp_msg_0.z = 0.2043034177463311;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.21860871334501286;
    tmp_msg_0.speed_units = 169U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.15102408707390824;
    tmp_tmp_msg_0_0.lon = 0.8984095061847425;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("HOPZUQUNQWNOXPYLCOBUWSVRPEQFMHVYDRIPBKUXNCXGXKXOYHMSBCIFSUTGW");
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
    msg.setTimeStamp(0.7874089270498055);
    msg.setSource(6733U);
    msg.setSourceEntity(238U);
    msg.setDestination(26730U);
    msg.setDestinationEntity(237U);
    msg.localname.assign("MOYDYYSKLAXROJDPCUXCVSIBKBRZPTWVPXRVBMUYZGMEJAAJDTZUMQKPBRPELWQGJUSQDQDXFJGXCDOHUMWNTIHHBQJXZWRMYONNHIQNEZJUOW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LDWSEDASRWSMFACJIPWTOYVSCXRKMDFVFURBUOJHIGQKWKOITEZJNACTWGNR");
    tmp_msg_0.sys_type = 219U;
    tmp_msg_0.owner = 19975U;
    tmp_msg_0.lat = 0.7423478384796492;
    tmp_msg_0.lon = 0.3215701300454451;
    tmp_msg_0.height = 0.44687272899617947;
    tmp_msg_0.services.assign("UNDIAEZZBTWATTNULFSCPGTROBNBDVLIIPBQTMEBROPTVQHYWWXYFWKVOYXVWQSKGRFKPBPZELMGPA");
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
    msg.setTimeStamp(0.47949656323929957);
    msg.setSource(55704U);
    msg.setSourceEntity(140U);
    msg.setDestination(62323U);
    msg.setDestinationEntity(203U);
    msg.localname.assign("SIJXAPDIIGRHWNRHOQODMBOFCGJJFZIPBVHMSSRNKNHJAFKWBZHNKMMTZKWNVZTYDNZMSRPWEYRCYLYQSZUVZCYYHJXELVVDMBDCYWCEUDOUCHPKQXLXTIKUEOREFJBKGYDXBIGATXURKLPUGOJEMOFIAIRTJLGFIEGUCBFDLXWFPELLAQWWVJ");

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
    msg.setTimeStamp(0.41397256186268583);
    msg.setSource(45585U);
    msg.setSourceEntity(20U);
    msg.setDestination(62401U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("KQQWIRCOBLBJOIFAIALRNAQOVRGSYDSBKGLBINVDSQECXMBUYYKCVDEURFUYFITLTPOLETWPFWCRVFUMTQPOQGWTEWQPXDBRVSNHSOZLXPHRCKMSAZFWATXVJNIPQCIVIBUCKTNEZGLJNMWGVKMLYXXTKDJPH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KNFLNPGXUSEQGMHHTJXGWPFHZQUHETQFINKBMCBNQABXYKFTTIIKSYWJOKSOIKLJRRYJTDLFCUCPZGRENHWQHDYSLLNWWVYMQRGVZGVWPSXCGQSAIJMOWLOISCOABVPDVMHADDAFREVUNGZFPCDSWMAAFVMAHMVEAREDYNWBUQDFRHSXGOBETKEVDZOKUJTYOYXKHJZILCBUJRPOBEOYZQCTLZPJCGXZQINXZAEXLTIPTISLRVWDYUUNBR");
    tmp_msg_0.sys_type = 248U;
    tmp_msg_0.owner = 58788U;
    tmp_msg_0.lat = 0.9676951661409507;
    tmp_msg_0.lon = 0.35590047209908093;
    tmp_msg_0.height = 0.0015405664950897124;
    tmp_msg_0.services.assign("SBBGCJQHKDQKBMSXFWHGSAMODBGLTZXVZELZJJ");
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
    msg.setTimeStamp(0.06247267677020685);
    msg.setSource(26085U);
    msg.setSourceEntity(236U);
    msg.setDestination(17107U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("RWZYMUDEDKHOUAVSLUIISZUATXKBJYVAPMPLDOLFGCPUAEMQCHTMOMFVHPWBDQVKVAYWOXLSOWULTMCEZBNJKPFENOJXDJOC");
    msg.predicate.assign("BDWYVMQHPJDUFBEATUFUCPLSMDIBXDWXXCKLXIXSNVHJCTSPRNFGGTCIEMZJFWWRVJEXGQVHLOCCTROUGBRQCTXCLZJYVYHYMUYFISIFSATDRBKTVEUWGFNNNTPBPZCAKGNXGPJRZTRWNQJKMYQZKBWDEQHDFMLKYKOJQPFCLURNYBJSIOELLZMNSUOPHDZSOIWLPKVYQWEAAUEGA");
    msg.attributes.assign("MDMHUEMPSCPVACXWEBHWGQDRNNJLPMXEGTUCAJVUTGYVXDNQAGJHFYWZTQVIGRJDYNSGKLBZHKFFHBFSIZYJLRXNKYVOWLBFHYQCYZYMUORSIBDINPQVRNBEHKOJEZCOOEXOPGGGAKTIVSRPWXUXDTMOTXXECCKRYVWHPNFZCNRSLDDQLUPEZTTQVUDWFJTHLTJAOJDOIWHCMQCUJ");

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
    msg.setTimeStamp(0.8718454389669015);
    msg.setSource(17919U);
    msg.setSourceEntity(52U);
    msg.setDestination(11669U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("EMXVHYESWEVRQYNZZPUYCYEJUS");
    msg.predicate.assign("AKGPJEOWWELYXAA");
    msg.attributes.assign("PVNXRJBNURACGKIHEMYOUNFGVDXIZZLYBTRTMEQMBFDBMVXVDSCXKFYKWNZZVALBPELWLTINXZUZQXLGVHTZAHYLTCUFQCBDAOXTETNULFWQMSGMHRPDETOUGJPWKRYOECHDSOCMARS");

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
    msg.setTimeStamp(0.9105918125705506);
    msg.setSource(58381U);
    msg.setSourceEntity(198U);
    msg.setDestination(47178U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("SCTEVLGGCTZBQYJP");
    msg.predicate.assign("LVVLUGGULHRTVPWMUVGWXBAQUTDCVUQWKSJRMZHKSZZLBSOELTANZROOUBCTKDIEAIQFBFJYCEQQNPAXEZWZCCETKBNLNZCMTLXSBAUSIIOXFVBHNNNPDRGEMWJKXHPDMDMWYRFOQIGXAXJXECEYNDWPKMHFZSXGQHPJLTSNCITDIQJYXJDGYI");
    msg.attributes.assign("WTDIJSFOOBGVJ");

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
    msg.setTimeStamp(0.28491459729159563);
    msg.setSource(63226U);
    msg.setSourceEntity(130U);
    msg.setDestination(49U);
    msg.setDestinationEntity(40U);
    msg.command = 59U;
    msg.goal_id.assign("FBTZCLQNCSNZLKFUGXPYOZGWFNCGIJUOQKEEGAKVEFJMLHWMHHIOABVBNRDQQGDODRZMEIBO");
    msg.goal_xml.assign("OFWTYLHWMUCHAQSWBOEILMNCSTWXIHLKPJVWZXSEVTYRTUQBDNCENANNPJNAFUFQNJSMUFXUISUCVWTRUJHMFDUFWZYGIZBEVNNJOKMXSWSGLLZCQMYQOTMGPAKZOADGLCGPKHUIBTLCTOEBCJLSDZXDJHYEYMYEYDIJRKVCLDIORQVKNQVRMDJPSHOGTGFDLP");

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
    msg.setTimeStamp(0.13056570295802783);
    msg.setSource(4566U);
    msg.setSourceEntity(42U);
    msg.setDestination(59417U);
    msg.setDestinationEntity(83U);
    msg.command = 86U;
    msg.goal_id.assign("VMMNUKOKWSHDAYNIOANHEGYTGWGCAQJVTJJXWBISNSFNHRBWBZHGZPBZCCFCMHKKDVXDFHTFGTPBQJPTFTEZVLDXMKOYUQQLXYIDVAREDLXWUZOISSRJTLUDZZLBAFEQDPHWILLZJGFLAQKRYNVKEAXICBEOUSBTVVCWFAOVHHQBLXSCEIS");
    msg.goal_xml.assign("OTOMYDPRCRIVBDLIZTWJMHBHUTDHGQQOLECSOEWAIIAAOWUNCMHCDUJEILVFJHURBTAQMZFZFRBOIULPWDYNDRUYDBPKNMPMXSSFMLMVVQSFSFMZ");

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
    msg.setTimeStamp(0.61871644428474);
    msg.setSource(12383U);
    msg.setSourceEntity(121U);
    msg.setDestination(63229U);
    msg.setDestinationEntity(241U);
    msg.command = 17U;
    msg.goal_id.assign("TBIHGQUXFKQGCYIZODEWCVMNZVKPFYIHQSTDLFZJPTLBEX");
    msg.goal_xml.assign("RUTKAFDFTWHYNZWEJGZPZGFVIBAVTNVACOXTMCFLQLJOFISNJAJOQCLHJWAKJDQHBTNJDSBDMGGHMUYPLSVZEUHFQMXVORXPNXDPSUAIETIZVATQWIVRYYZILPWRFBLXUAMDVCGOVRRNEHNSURIKOKRAQILXFNSKHNZBSYKZWGSJPCYLKHKGIHBEECZKAFDSHBQPXGSCCDCYTDYBTWQQNEUEFUJ");

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
    msg.setTimeStamp(0.07877799815938169);
    msg.setSource(60176U);
    msg.setSourceEntity(118U);
    msg.setDestination(1311U);
    msg.setDestinationEntity(236U);
    msg.op = 36U;
    msg.goal_id.assign("SELROXBUOOJXJJDYMQBOLGKILBMNCWCPCASGFRQIILVDKYYEVPWOVAKYGKJTWZSOFNDNTOSUIQEAPDBMATTGAJGNFRYOWPKLUMRYHFJLJZHLNGXGUGTFRZIOVCXAITYDDPZZLBANHERUEDVOMKHHIKWZRSFUMDDETNBPQMQZZGTKFGPHTUYCWWQAPBVEXCHDFHS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TFBFDIUIWELBMJQHBKZHRVNLINWCMIANZHUVFUNXFIG");
    tmp_msg_0.predicate.assign("TSVLKPYHALVRHPNMSXOYIPAWSHAOKBXWUQVBAERDUOCNFRDRQWFBDYYGNOETSXKOOCBJUVKPJSVBJVKZICQJXTWPURGFDVRYESXMULUGCGZYQWXKIZWXYUECMLGACNANGDPWZDHYHIAURBLNAGGFUBZSDHQHSZNCWOARTMCBZLIFMZLXIJOGJPTJNIHDWVJVMEGZPBIFDJTYDEREJTSHZTKMXIESCIHWQAM");
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
    msg.setTimeStamp(0.9849399700305107);
    msg.setSource(24141U);
    msg.setSourceEntity(253U);
    msg.setDestination(5592U);
    msg.setDestinationEntity(124U);
    msg.op = 52U;
    msg.goal_id.assign("WUKROBCJWIHPLBOFJYUOHJFWLZMNSGTGOQRJAERSROHLRCHOVINQXDMTPYDTEETSPYFERINTNQFZNIHKXZFXNIMAUAMVQPXMHGTILRZAAYMIDGKNKEVGIQSUZGXFSTBBWJMDCQLLVRYAHOVKWGADKLDGTPKBISDYUFHHRCBUIVXUQZLCEPJEPZQD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XNXWHOKJMSVBUMXUPJQFCMTPYRBQGLJLFZNNTDAGZPMGFZTTCOTPVCKKUDYCYLFJLQTMMSXBHYVSDHLQCORADVNQQRBPAZURBWZOQEJOYFNASNQVKDXDSYIXYUEIUAAESWNBJCTFIJTXZWKIPPPHOGDEEFCNJKOTAURWPIHTHSCBBZIHCUKEERYDXQMLURWJLBFLVKEOORLVZWXMKEKFVRNHUYWAVFSGLAIXGEDINIRSW");
    tmp_msg_0.predicate.assign("GDEXLIJAMRLKBWJQZNCSMCBODSATVILAJNGLQQMXDPONRLCKPWZPJGSZAUHKQMEFETHUKLZPXXOSABPVWPMZTBZGYNCCEHYKJIELUKSHTIQDNKUOIUDNFWOVBDEDLSNYCKXINHYVRTELPRJXHH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NPRKGMRXHSOIRNUWFGW");
    tmp_tmp_msg_0_0.attr_type = 46U;
    tmp_tmp_msg_0_0.min.assign("DPQFSFVLLNZVFZKEIILMGJAXMOCHIVQABERFOUMUXCGPFOIKCPVQQZKGQCFHDNUKYZGBR");
    tmp_tmp_msg_0_0.max.assign("XHSNJRMZDHWPGZKVLQLXUSNIBERKJAXYDBGOAPKLFMBEWSEOFAERMWHAYUARIBOVYOYHESXUUMSPIFJMTRENMTWOQPJNMJJVKIHNADAORTCTRUNLG");
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
    msg.setTimeStamp(0.566653132648914);
    msg.setSource(29571U);
    msg.setSourceEntity(237U);
    msg.setDestination(20423U);
    msg.setDestinationEntity(143U);
    msg.op = 38U;
    msg.goal_id.assign("TEKNRZAEPOKGKBGDSEJGXAQDGSWMUYKNVHWZTFLZORLQFKNLBLICUAQVCCFUVFMODMIJECCXQORYNIGWLVFDTJAQBKXQKATPBBUYIYLWGJCKNDJVDRPSGERPSTIJPHUYGY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OMOPMCSKYWPAYYXLYILQRJLBDNZBPHEMEZZDCFOIKSTLVQZXXHXQROLKBHBIQTFGCWBSEQTGHTISVFQUSBGQXERYAGWKCLOJJNALNJGEXKHJMUVAJAVYWJBQYUFLSEACIBHBTGIDZXRFRXPCKCRWDTOAGDGCZWULUOHDLWQSAVVINMRADNPZIRNEUO");
    tmp_msg_0.predicate.assign("UDCWKBNVNBBMOWHZRFHAELNWTCMS");
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
    msg.setTimeStamp(0.19487559970083745);
    msg.setSource(44554U);
    msg.setSourceEntity(128U);
    msg.setDestination(59428U);
    msg.setDestinationEntity(181U);
    msg.name.assign("FYHQWWDJOJOUU");
    msg.attr_type = 226U;
    msg.min.assign("WJVFOCHOVKKNYITQOCUFEIEDXLGFXUINHOIDPSLQJJUTYYOSWZXZLBIIMEOMZZQKIXDGYLKMXVRJHRWLHDXMLBVKWYEELLAQBJNPPNEJUYCGBCXXYMGFENPFHUSOPNDOABEBAGPYVKHWVKQUZJWBVSACDSIQXWFQUEXMSAZRZAACTIPWVIFFTUCTNGSKEOHFZTFNLZGMSVYHUGNDWHWVCKBGJTDBNJQ");
    msg.max.assign("KTLJQCVOQQAZXRJTXZHINIFXNEMLMZQPDCEJJOKRQHZLXVZKYSOJUGBMTPOUELNAEYLZYGIFERRESJIYBBCWNZKNADWGFAKBAUBSWSRLICSNTWRHBQUUDUORGMQSDWHWEOGHNUITKSCTWDVTDPCFPHGMFFFXHEFVNIAZYOLPUFYRWBHDMVMUDVSJKXXFGDQIIJGDSAAZNOULKMJNPAYWVPPRCBQGKQTOZTOARYWKJHPYXPCLSVLVC");

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
    msg.setTimeStamp(0.5826300435097852);
    msg.setSource(15331U);
    msg.setSourceEntity(109U);
    msg.setDestination(6346U);
    msg.setDestinationEntity(103U);
    msg.name.assign("QSXHGUCKQDEWBWADTVHLDYUOMPIEMXIKFRTFIAXFXTZEVSRBPLLAEZTMPYRDXJCPTMOWJQHMRWSCKOYIUWCKSWZXIRHHXDQYHCNJXKFUAIJDRJCIZUONANAZEFDMGVFCGQBRPPUPDOSLYSYOBKZIOBSYGTPUDHYHZDGJZN");
    msg.attr_type = 19U;
    msg.min.assign("EEZJWPZLUYODRRLZBBPLLNFZDYUNJUJXOAMJTQEPKUCFDQYVY");
    msg.max.assign("NZXCKECBTVBXWPSZXMULXEYVIFBZGJLALMMMFZYNWPMIMLUHBERSCVHGJLPIMWPHYGAAMEOYKOIZNCPQBGQSZZNGJJJQCSTTHDBTNKNOPIIWRATQXRDWDPLQIUEVYFNHSFUYQOGIZAUCVNUFCRRIXHEBCCRSGJODDKSTSZGVEWOFAFBUYQYAFYCGXGLWTQSRPDJMDALBOOVHUULBVXTOUZQNWHWADROFIRKKVEVMKHJXTAFDPKWNDRLHXSEYQ");

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
    msg.setTimeStamp(0.06515532820760206);
    msg.setSource(23253U);
    msg.setSourceEntity(111U);
    msg.setDestination(30971U);
    msg.setDestinationEntity(226U);
    msg.name.assign("BECUJLVEPZCBFLNKNHTQIDTPVLCTCGOIHHWRVOSAQGBYBBFVXTAUVDPYYIYNFXCKAYJJXDJRFINWIDFYWWKXYNDTMYHPRSVWOHDKUBZWHVXKMGQRIIHLZEJAKTGGUYZPSHESBTVUK");
    msg.attr_type = 81U;
    msg.min.assign("BQHOUQFMXIQTEOMNAPCZNODUAFZRVKBTSQNVCTLPTCTWCCVFAGTUABMZFKMALQJQWSNGPKPPBIRWSRBWIAHAVVUNKFGZEXJPJQEUVTINVCEIFDJEZEOXXRDDMJEFGEAJQYLMYDWOYPQJMBSKWJRRULIGJSCJSHPKKFDCYUE");
    msg.max.assign("GISCEVZVNSIUXGHTCZKBOOXPSRBKUPXAKRUBQ");

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
    msg.setTimeStamp(0.9771832610126955);
    msg.setSource(5196U);
    msg.setSourceEntity(215U);
    msg.setDestination(6793U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("HGTAXCAPHNIBORWMMEBSMIYEOEFNJQZBTKJGKMVJZNQCLIIEQHQWUCHHZWVUDVNSODLFRVMHUYXQGJNURZEHPWYADXGCXBBGBXTOUJLTOZ");
    msg.predicate.assign("QBCTPZFMSOSOFVHRZIZHCNNAOXJIUXOXEEPMWDMDTNDHYMVSBLOYGRYQZWVPDNNIGFCPSVCAXLBUHJIGBAJJMKZJUKCYUGSQUQHO");

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
    msg.setTimeStamp(0.2712378934059788);
    msg.setSource(7092U);
    msg.setSourceEntity(171U);
    msg.setDestination(35108U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("VGZJJHTKPJLDFWKHRYCEFMJMNZMFIXWQPBAORNRSCDBASJUKCIBVHMBINEHJQNA");
    msg.predicate.assign("HUPBZAMTHCEBCTURAJPWUWSGFJHFACDKHPWMXXVBNQQFMMXWUGVAYJIAIQVGTOQDONAMBOHUXGTMCSZNFEUAPPHPKSNECDQIEYXGYUNSYYGRAQLOR");

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
    msg.setTimeStamp(0.4433201373662282);
    msg.setSource(6187U);
    msg.setSourceEntity(243U);
    msg.setDestination(20696U);
    msg.setDestinationEntity(128U);
    msg.timeline.assign("BOEVCIMVWOMZQUZVIZCMMPTGTJIBEAFFNPHQBBUHPJYNNZGZSAURBFTMZXZPFCKMVIILAZXLDXHFECACTXSDPCHHEZOGCYFWQUPBQKNYRGROKLSFGPRMLTJBNJAVGUWNIJWMOAGMTKYDYVEUQAAXRXDSVTGOYELNKDUVCBQQAWXWWEVAWOHSGDIDKJRPROILXEQEZHITIK");
    msg.predicate.assign("HDQUCTYPYYIXVKMFIFOJJODSWNFIAEGUYSFNQTIGUYXICUJRPLRIZXVARLWWYFSLLLQWTKCRDVOXPAQNKHELPIBSLFDQUZJXJTFNQHCWTNSWQHIIMYUJGRSVJSGLWMGKFTUGZXKEGKEDDCVZNHAOZAKEVBLOQESBPOIONZGCYAVRVPUH");

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
    msg.setTimeStamp(0.3491120770907493);
    msg.setSource(55090U);
    msg.setSourceEntity(30U);
    msg.setDestination(8381U);
    msg.setDestinationEntity(168U);
    msg.reactor.assign("UIPPEUHBDDXQQEXJZLAWHTSNZDQCILAAIHOYSCWMCBLGCGDEZOMQPEKHGQFKYVVLATYRLKCFPNCIJCDAGVQETIPFYPRGNRDTKZFHDQWOHPEFLSIFBHGJYWZQZJNWPIQABKYJKMSVAMXXDROTJVNHNDZNNM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CPZSHBHZPGFGPDAEHGWVNKKRYWWV");
    tmp_msg_0.predicate.assign("VTQQLLGPDKJKKWFEIMEDTXUSYEAPBMLYPIRZBFYYLRUCRHPYXPKXXJHSUWOMLGUMNDTTVSMEPXGRUDHWZFYFZHDUJJCUVHOTICDYHFNXATFCCRJONNXTRIMDZYIVDBCYWQVGVAMUSGWVVJGESELCSVKDNNWFXZHAWROHJMPOQQFTVABZGZQBBKWXS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NSFYJFDLAP");
    tmp_tmp_msg_0_0.attr_type = 114U;
    tmp_tmp_msg_0_0.min.assign("CWKLNJLEUYNHLFWBWBJUOVQMGAFWVMPYBVTKVBMTEUQHWHGKEJJMLWVLOEIHLFYPVRSXSGRIZJUQNADPZKASLTKEZXOWFXPRSHXHDMDUUIWCYQYCGACXUQXJQBIRBGEAGACNZPOLGYCOJMTZTIDRJFYCBHISNZSFVZDRPMX");
    tmp_tmp_msg_0_0.max.assign("RITYPPNFOBKEDWSISJPECSEUQXDRTOLBMURXFQTNVLSZHHGAYSANHOZHDJHXZGGOUEMQRZEWAYPVCCBJKZSEKDOLOYRFVLCMXCUZOBSMVMTFIJPKPGYVEVFODOVBWDIWMKYLPHC");
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
    msg.setTimeStamp(0.3167865414068045);
    msg.setSource(45248U);
    msg.setSourceEntity(101U);
    msg.setDestination(40720U);
    msg.setDestinationEntity(127U);
    msg.reactor.assign("MHTAMEUTYZDVWAKWTRQRFICWDPJDVRWXAOSJBUHCEJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DUYSDFLVSENXZBDPUUEABIYLCHMPRLRTQCAWCMTRFNOAKPZHNBWITFQWSMUITHFOKTJMRVJERNXZITUGO");
    tmp_msg_0.predicate.assign("KEKBNYMFBTMPZCSOWDVVSAVXNIQYCOJLKDRYNGJTWCRZAHATLDVRGKRTANFXJMRUVMITTXVBXAWULBEUGXENMGDMYAZBRPSZEITAMYYBVSNWGJPXUQJDPGGPRZLSJGUEXISSVCZDHFRRACIHPAUIIGEQEJOOGPDJLQTNEQOYFLKYHFUWOKHOPMPDZBXUKYJZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EZWTKTKOODLNEZMQGPYAHISXDXCFKVJOJVTKGKHGERSAPXCXWNAFNMUPMVERUMWOALTQFYQTVEWNCIVYGHTFVSCADIKVIFPDRHLCTGULSMQMQHYGXBNWIIETHSDYCFDPUQTQZRLBUEOQLZXLARZNWBEBDFPGOXUMMEFBHITUKRYGWB");
    tmp_tmp_msg_0_0.attr_type = 197U;
    tmp_tmp_msg_0_0.min.assign("RXQALDLKDMSPEYXBCNGJOXNDHRXNBRPJAFBBBNFDUHCWFUMAVWQJYDWZOKTARVXZQUTINCGSJSYHMOYRGULIUMVBVXHGODSWTYEZMKVJHIWOREZWIHPSFEMSNHNUERFMLOUPHLNVWEVXSZAHOZXGKDENEYDEZTAYTWPJIFTCQUGPXCTPMWFMBQOLYLGJRLTZAIBFCPUNIYBQAKJOCIDVULACBTVDMOVPAKTZQGZRWH");
    tmp_tmp_msg_0_0.max.assign("MKYBAIUWJHDKHNYHTBDZGIQMCLWXAULWEQ");
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
    msg.setTimeStamp(0.14229155287924433);
    msg.setSource(21779U);
    msg.setSourceEntity(100U);
    msg.setDestination(21064U);
    msg.setDestinationEntity(42U);
    msg.reactor.assign("VKVYUCKHCDQMUTBIPLCNECJFSZGAHFQTRGIXABJRBXDMODCHUBUMHLXEGVOLEMOUAHPRSGTWJRWMSKUEZBSOQXPAMRZKASFCWPLGZBMPTAEKILJQLGDWYIASYQEDRUWRBFJMTIPWXNUDZPYNCWHIQKWVNKUBNCPXZFQKVTIJLYSXGODPZDOCRXYGIJMOADVGYTSGLKQVNHHQVFT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TEYDJPOIWFALUSMNVAQCGOMCQZIADMQENLXOEXVQJPPUMHLCJRIAPINZOKCMMSDTECGXJNFUYWARBVDIGZQGCERYSSFIZCGWXVIKRMHAZDCYQJKUSBSLHDQV");
    tmp_msg_0.predicate.assign("EIZDAJRHWULMLPWACKSMNSYAEBQJEVJXAXQBDZNFKLOPULBIDKIJYRTRWQSPZFMXEELUGOPFVPMHBQLXFVNLELFLUOWIOMOUDGDTZZXHBPIJGCGOYRTGZMAGHBSCRRITEZGBTWVRKWJHNYZOTWIDFKCPATTEJJUBQOYKAKFZQSKRDCYHMOCNCMCSFQGFR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WQVREJBVDZENUQMOVBAHPCCDOOVEKRWHLJONMXMPUTSOJCBEYGLGSUXSPYISDWNVBYIXIU");
    tmp_tmp_msg_0_0.attr_type = 213U;
    tmp_tmp_msg_0_0.min.assign("RNJXTHHALPAXWDWTPOWYBWCZJHNDIZQNRCKSBSU");
    tmp_tmp_msg_0_0.max.assign("WBSAEKMDPAPZCPSBSHCGFYDMLCHOFEWHJGWKDWXX");
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
    msg.setTimeStamp(0.9850746894257364);
    msg.setSource(28287U);
    msg.setSourceEntity(184U);
    msg.setDestination(49305U);
    msg.setDestinationEntity(18U);
    msg.id = 27U;
    msg.width = 8432U;
    msg.height = 47731U;
    msg.widthstep = 735U;
    msg.channels = 190U;
    msg.depth = 0U;
    msg.finaldata = 191U;
    const char tmp_msg_0[] = {45, -51, -102, 17, 115, -116, -111, -60, 101, -128, -109, -41, 5, -59, -68, -5, -118, 110, 75, 27, 93, 87, -55, 74, 20, 98, -8, 20, 3, -65, 93, 103, 37, 7, 44, -4, -70, 114, 119, 117, 63, 4, 123, -92, 73, -28, 15, -76, -40, -47, 109, 4, -88, 87, -63, -1, -53, 93, -58, -100, 29, -44, -93, 12, -113, 41, 124, -88, 3, 55, -44, 103, -91, -37, -72, 116, 123, -72, -119, -125, -27, 62, -68, -11, -126, -109, 89, 125, 112, -22, 92, 1, 0, 10, -101, -21, 47, -83, 22, 62, 48, 102, -15, 48, 105, 41, 9, 6, 65, -127, 110, -38, -15, 73, 30, 50, 28, 102, -92, -49, 19, 76, -95, -92, 61, -39, -115, -87, 97, -16, 68, -85, 72, 78, -1, -119, -128, -42, -46, -40, 42, -106, -35, -79, -93, -23, -109, 66, 46, -128, -77, -51, 28, 50, 48, 19, 123, -22, 46, 117, -50, 118, -49, -83, 77, 23, 69, 124, -102, 121, -100, 94, -95, 112, -26, 70, 73, 73, -109, -15, -93, -90, 24, 105, -1, 122, -98, -29, -95, -77, 93, -84, 95, 47, 91, 93, -29, 41, 18, 114, 77, -36, -87, -34, 44, -5, -6, 64, -7, 27, 74, 110, 86, 61, -97, -20, -9, -84, -27, 72, -72, 119, -113, -69, 82, -6, 122, 105, 9, 31, 7, -56, 93, 102, -71, 59, -104, 73, 0, -126, -7, 70, 32, 89, 37};
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
    msg.setTimeStamp(0.9572532943553537);
    msg.setSource(33151U);
    msg.setSourceEntity(158U);
    msg.setDestination(12011U);
    msg.setDestinationEntity(182U);
    msg.id = 15U;
    msg.width = 31504U;
    msg.height = 63453U;
    msg.widthstep = 7699U;
    msg.channels = 9U;
    msg.depth = 185U;
    msg.finaldata = 172U;
    const char tmp_msg_0[] = {-54, 59, 19, 80, -74, 106, -116, -53, -7, -7, -19, -12, -69, -54, -86, -82, 99, 5, -89, 114, -45, -98, 72, -15, 92, 14, 35, 6, -42, -84, -27, 125, -76, 16, -52, -70, 1, 61, -39, -32, -65, -97, -96, 77, 32, 35, 46, -122, -120, -87, 78, -124, 28, -61, 117, 16, -45, -90, -102, -49, 45, -7, 111, 115, -36, 42, -108, -30, -52, -33, -124, -114, -35, -123, -28, 87, -38, -20, 43, 100, 86, -22, 46, 40, 99, -6, -114, -29, 50, -79, 94, -41, 37, -61, 28, -79, -39, 78, -38, -68, -25, 112, -110, 44, 114, 33, -123, -42, -118, 25, -64, 56, 89, 118, -40, 87, -21, -26, 43, -75, -7, 117, -5, 126, 15, 9, -116, -79, 37, -82, 57, -21, -79, -9, -103, -19, -2, -125, -17, -103, -23, 10, 39, -96, -80, -97, -65, 57, 11, -117, 22, 27, 80, 124, -75, -44, 21, -96, 72, 13, -31, -45, -19, 70, -57, -50, 88, 120, -20, -76, 88, -46, 98, -17, 58, 56, -75, -32, -89, -86, -101, 113, -19, 105, -7, 55, -109, 60, 66, 102, -48, 118, 22, -37, -39, -34, -49, 86, 89, 93, -32, -13, -78, -69, -20, 104, 35, 56, -25, -60, -82, 32, 84, -7, -121, 104, -99, -65, 65, -101, 81, -7, 59, 57, -15, -100, -116, -32, 6, -52, -47, 80, -13, -23, 109, -69, 122, -91, 95, -32, 74, -59, -111, 0, 49, -84, -3, 11, -46};
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
    msg.setTimeStamp(0.2976717878678754);
    msg.setSource(26568U);
    msg.setSourceEntity(69U);
    msg.setDestination(14069U);
    msg.setDestinationEntity(13U);
    msg.id = 30U;
    msg.width = 48113U;
    msg.height = 29467U;
    msg.widthstep = 49892U;
    msg.channels = 79U;
    msg.depth = 161U;
    msg.finaldata = 132U;
    const char tmp_msg_0[] = {-1, -56, 10, 111, -9, -27, 125, 10, -50, 29, -126, -80, 97, 78, 113, 96, -44, 108, -103, -114, -122, -103, -35, -6, -98, 50, 96, 72, -120, 84, -126, 21, 63, 123, 66, 76, -29, 55, 113, -82, -73, -93, -82, 49, 30, -105, -39, -123, 102, 77, 116, -124, 34, 101, -18, 78, -25, 67, 70, 82, -31, 55, 126, 8, -61, 73, -46, -81, -67, -111, -27, 29, 72, -108, -64, 119, 98, 40, -116, -8, -125, -114, 64, -88, 36, 37, 9, -91, 24, -122, -7, -128, -103, 56, -31, 90, -8, -111, 26, 93, -4, -39, 103, 105, 64, -125, 90, 105, -123, -20, -53, -83, -122, 56, -110, 104, 93, -79, -68, -69, -103, 95, -76, 21, 0, 55, 45, -84, 70, 116, -8, -121, 115, -28, -113, 70, -81, -33, 14};
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
    msg.setTimeStamp(0.9594397539394304);
    msg.setSource(59210U);
    msg.setSourceEntity(154U);
    msg.setDestination(63056U);
    msg.setDestinationEntity(190U);
    msg.width = 45229U;
    msg.height = 56255U;
    msg.channels = 136U;
    msg.depth = 193U;
    const char tmp_msg_0[] = {126, 70, 113, 125, -95, -14, 71, 112, -103, -90, -86, -80, 106, 90, 98, 9, 108, -30, 118, -67, -71, -27, 108, 60, -10, 62, 103, 25, 81, -40, -124, -16, 61, 84, 54, 98, -84, 57, -75, -114, 68, -5, 32, 70, -40, 8, -106, 20, 111, 74, -116, 12, 117, 30, 91, -79, 0, -22, 60, 116, -25, -2, -40, -70, -95, -113, -79, 6, -49, 77, -116, 13, 21, 40, 100, -53, 52, -76, 32, 23, -62, 116, 40, 60, -77, -17, 86, 67, 56, -25, 32, 61, -55, 48, -85, -66, -111, 47, 117, -66, -10, -82, -47, -71, -72, -46, -33, 10, 37, 98, -52, -34, 98, -50, 87, 33, -100, -7, -114, 4, 123, -95, 54, -37, 17, 37, 58, 112, -22, 40, -49, -127, 75, -36, -6, -71, -29, 89, -49, 80, 79, -105, 32, 55, 52, 77, 59, 98, -48, -25, -80, 46, 81, -89, 2, -100, 93, -50, 48, 63, 23, -121, -34, 1, 106, -75, 4, 5, 36, -3, 125};
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
    msg.setTimeStamp(0.7211901375113096);
    msg.setSource(27465U);
    msg.setSourceEntity(245U);
    msg.setDestination(56861U);
    msg.setDestinationEntity(209U);
    msg.width = 20801U;
    msg.height = 14079U;
    msg.channels = 179U;
    msg.depth = 244U;
    const char tmp_msg_0[] = {-47, 86, 29, 50, 122, 77, -61, 85, -102, -25, 63, 90, 6, 100, 75, -95, 37, 13, -36, -123, -80, 88, -117, -23, -118, -74, -88, -56, -98, 98, -108, 29, -108, -110, -117, -101, 3, 59, 109, 97, 40, 102, -50, 60, -90, 92, -75, -107, -5, 106, -77, 101, 53, -24, -7, 40, -21, -86, 86, -48, 9, 48, -68, -116, -76, 13, -38, -69, -24, -42, 88, -46, 27, 126, -72, 42, -12, 53, 79, 21, -109, -1, -97, 124, 121, -45, -1, -29, 104, -122, 38, 46, 124, 89, -78, -77, -50, -2, -96, 124, -63, -38, 121, -95, 116, 86, -22, -9, 12, 7, -11, 16, -96, -26, 77, -106, 125, -126, 123, 96, -79, 54, -90, -78, 112, -61, -68, -63, 53, -77, -25, 78, 4, 6, -9, -99, 103, 41};
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
    msg.setTimeStamp(0.1557942883475033);
    msg.setSource(33629U);
    msg.setSourceEntity(170U);
    msg.setDestination(25088U);
    msg.setDestinationEntity(174U);
    msg.width = 21766U;
    msg.height = 16072U;
    msg.channels = 22U;
    msg.depth = 24U;
    const char tmp_msg_0[] = {5, -104, 13, -88, 48, 110, -74, -51, 33, 84, 43, 126, 54, 36, -85, 106, -102, -63, -66, -107, -54, -50, 62, -44, -126, 122, -31, -40, 81, 14, -56, -8, 39, 34, 52, 15, 96, -11, -52, -27, 21, -114, 13, 54, -113, 44, -2, 114, 111, -71};
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
    msg.setTimeStamp(0.3279626964146928);
    msg.setSource(63078U);
    msg.setSourceEntity(249U);
    msg.setDestination(45016U);
    msg.setDestinationEntity(181U);
    msg.frameid = 8U;
    const char tmp_msg_0[] = {0, -85, -20, -96, -32, -61, 94, 6, 0, -110, -58, 72, 115, -28, -11, 65, 83, 124, -62, 66, -8, -40, -6, -71, -75, -3, -11, -3, 0, 77, 11, -11, -47, 56, 62, 41, -4, 70, -105, -62, 81, -59, 70, -79, -59, -68, 1, 80, 28, -75, -116, -18, 18, -39, 0, -13, 56, -62, -33, 74, -99, 92, 94, 27, 41, -43, 113, 79, -72, -43, 84, -64, 117, 12, -112, 26, -44, -107, -56, -72, -17, -96, 95, -114, 71, 73, -14, 84, -57, 4, -67, 82, -29, -111, -67, -25, -4, 27, -75, 14, 113, -91, -77, -42, -77, -22, -98, -7, 65, -29, 24, 23, 110, -14, 11, -68, 125, 46, 86, -40, 55, 103, -88, -24, 14, -67, 55, 62, 68, -44, -108, 34, -61, 56, -28, -43, 70, 97, -33, -86, -4, 100, -44, 113, -72, -42, 62, -120, -108};
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
    msg.setTimeStamp(0.35329218396603357);
    msg.setSource(49370U);
    msg.setSourceEntity(208U);
    msg.setDestination(33660U);
    msg.setDestinationEntity(162U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {65, -2, -117, 39, 102, 89, -89, -72, 38, -51, -13, 2, -24, 104, -46, -61, -78, 77, -16, 107, -106, -11, 23, -124, 5, -48, -77, 33, -95, -64, -92, 78, -79, -13, -13, -33, 51, -81, -1, -99, 34, 18, 104, 25};
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
    msg.setTimeStamp(0.3879332299690289);
    msg.setSource(17588U);
    msg.setSourceEntity(216U);
    msg.setDestination(57863U);
    msg.setDestinationEntity(167U);
    msg.frameid = 200U;
    const char tmp_msg_0[] = {-79, -30, 2, 51, 97, -94, 61, 38, -96, -106, -12, 2, -113, 119, -100, -28, 86, 85, 107, -124, 89, 61, 61, 46, -6, -85, -25, 113, -50, 47, -34, -110, -118, 114, -113, 126, 16, 108, -11, -99, -21, -71, -31, -48, -49, -36, 86, -113, 54, 108, 59, -34, -26, -118, 69, -96, -85, 3, 40, -57, -10, 10, 34, -37, 123, -45, -28, -7, 114, 49, -3, 126, 117, -81, -116, 19, 72, -41, -38, 118, 85, -117, -107, 105, 39, -22, 40, -105, 86, 53, 84, 43, 125, -124, 113, 60, 93, -9, -126, 27, -45, 9, -7, -83, 4, -60, -36, -128, 12, 125, 20, 35, -71, 19, 13, 36, 120, -53, 10, 114, 85, -8, 38, 7, -21, -9, 33, 34, -73, 22, -58, 29, -106, -19, -71, -35, 9, -37, 98, -15, -58, 126, -57, -125, 12, -99, 102, -77, -103, -83, 4, 4, -20, 28, -92, 59, -107, -126, 71, -45, -77, 51, -63, -119, -65, 67, 70, -80, 10, -95, 88, -44, -61, 35, 105, -27, -82, 90, -1, 53, -22, 12, 9, -43, 59, -33, 125, -116, 34, 34};
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
    msg.setTimeStamp(0.4215737565864611);
    msg.setSource(59615U);
    msg.setSourceEntity(183U);
    msg.setDestination(35091U);
    msg.setDestinationEntity(117U);
    msg.fps = 107U;
    msg.quality = 131U;
    msg.reps = 169U;
    msg.tsize = 96U;

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
    msg.setTimeStamp(0.20157070175223146);
    msg.setSource(27045U);
    msg.setSourceEntity(223U);
    msg.setDestination(60189U);
    msg.setDestinationEntity(236U);
    msg.fps = 0U;
    msg.quality = 30U;
    msg.reps = 119U;
    msg.tsize = 199U;

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
    msg.setTimeStamp(0.6813188181843385);
    msg.setSource(11440U);
    msg.setSourceEntity(36U);
    msg.setDestination(35643U);
    msg.setDestinationEntity(116U);
    msg.fps = 133U;
    msg.quality = 63U;
    msg.reps = 28U;
    msg.tsize = 178U;

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
    msg.setTimeStamp(0.5151462629653183);
    msg.setSource(62811U);
    msg.setSourceEntity(124U);
    msg.setDestination(20016U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.7322759277851361;
    msg.lon = 0.028989525433172902;
    msg.depth = 198U;
    msg.speed = 0.6780509397780926;
    msg.psi = 0.10186410000081403;

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
    msg.setTimeStamp(0.26174034469362784);
    msg.setSource(21913U);
    msg.setSourceEntity(203U);
    msg.setDestination(8628U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.5441556284833468;
    msg.lon = 0.6081381111238471;
    msg.depth = 160U;
    msg.speed = 0.4609106094088298;
    msg.psi = 0.72157961432646;

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
    msg.setTimeStamp(0.03309649568330353);
    msg.setSource(7880U);
    msg.setSourceEntity(60U);
    msg.setDestination(38108U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.06420658890145459;
    msg.lon = 0.5631966379094483;
    msg.depth = 49U;
    msg.speed = 0.8322410349632039;
    msg.psi = 0.09255818714235231;

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
    msg.setTimeStamp(0.34287484743665253);
    msg.setSource(37763U);
    msg.setSourceEntity(7U);
    msg.setDestination(38987U);
    msg.setDestinationEntity(234U);
    msg.label.assign("BJYFJXPDGZQCIHGL");
    msg.lat = 0.6315964537469976;
    msg.lon = 0.2268507484353196;
    msg.z = 0.7325227428849687;
    msg.z_units = 70U;
    msg.cog = 0.6283420140924835;
    msg.sog = 0.8966140168798606;

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
    msg.setTimeStamp(0.6969060552540496);
    msg.setSource(38957U);
    msg.setSourceEntity(80U);
    msg.setDestination(43689U);
    msg.setDestinationEntity(78U);
    msg.label.assign("CLQSTIFRQFJSKOEWHWJKANJVNTMJXSYRXQIXDYZII");
    msg.lat = 0.3852877822869565;
    msg.lon = 0.5824222966213739;
    msg.z = 0.6490018488226427;
    msg.z_units = 61U;
    msg.cog = 0.9442103330450182;
    msg.sog = 0.944881909866284;

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
    msg.setTimeStamp(0.16494382196119017);
    msg.setSource(64199U);
    msg.setSourceEntity(245U);
    msg.setDestination(9084U);
    msg.setDestinationEntity(254U);
    msg.label.assign("DTKQLMOBGXUWPACUOCABTDEZDANYOOSGQNJLHCCBPLHJOJRNJWSUQGUBCTYEFKLXDMACDYTEVHFYFLPATQLOLJSUMCCFLDBXVMVEWIQPVKFIPYPKBWAINTXURNWIQQJOCJZDJIEYYZJRIRGWIBPMPSSTVDXCHZSGFLWMYLOBSEBSREMGHGNDVHXXWMOROKNUUHKDAUSQHH");
    msg.lat = 0.4349480401135316;
    msg.lon = 0.8935231284417867;
    msg.z = 0.6359822356463747;
    msg.z_units = 52U;
    msg.cog = 0.04736664373905353;
    msg.sog = 0.9812794669058609;

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
    msg.setTimeStamp(0.17580415816228556);
    msg.setSource(18583U);
    msg.setSourceEntity(104U);
    msg.setDestination(33042U);
    msg.setDestinationEntity(167U);
    msg.name.assign("SXCQYHVWLQFBHSFJBUORERPJUATVWSGIWRGPXDGRKFYUKIPRZPTQCATBNHBSEBQIMMQQXKRXBBFEHOYZEAGMKNDIHPEHKCOWITXYDVUCKAWOMLQITOGN");
    msg.value.assign("WDBYGDRRFANLMYVFDELZMWMPXJGEPTSQFBLROBHOWLHSHUGKPJWIMBVWDGWZGPFOHFAOTQBMDFYQ");

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
    msg.setTimeStamp(0.4297386416216409);
    msg.setSource(40541U);
    msg.setSourceEntity(89U);
    msg.setDestination(1767U);
    msg.setDestinationEntity(61U);
    msg.name.assign("HOULKDOVNONMOFVR");
    msg.value.assign("WJCUVKOZXBDRHCEHZCFBVSCNFYWQLKMQRHKZSZABXEFJHEIDBKVOBOWXGKYGTBMXIWTAGZMKVILQSHNGXWFINAEPSGWASJPRFENAGMUBKLCCNVPSAEMYIJRDDVQPWJEETCLRJDTJFZVOUMAUXQNTUUYIDUSCNPXLIHRUQMXGYYBMPSKKFFGLQTRQYQIWHLRRLGTOOPJAAWOTNQOENXTAWVDBMFD");

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
    msg.setTimeStamp(0.3665025985469753);
    msg.setSource(21047U);
    msg.setSourceEntity(46U);
    msg.setDestination(42920U);
    msg.setDestinationEntity(64U);
    msg.name.assign("NDVJOHHLAZNMZKUZQCZUSNDINTSNVFMALAORZTIBAITGILRWGCSEIWFTMVUQJXYDBWUKSCMXWIOKWLTYYRPPAEMYHVBBFUZQGGLCJMNPXDQQEXMPBZSNLOAJGXRJHXHZEUXDSYTYQFLKRWPDVYCMNMGFLXDJEYIPIOOWYVJBTKSHZUGSOPNULWSHMFKECHCRUSZPOKKBKDQRVRLACAJ");
    msg.value.assign("TFWWMWMJXHEQCOWTARSZCQWHLUQQQYRUDQFZXUEDORLFIQFLIMLBKSYQNXYMCCKVRPYTLDHIKEIMUTTZFOASULWKNASZAKAEZWSYSNRGADLBNGDZJEIDXEMETHODTPCFVMNKICYGWKCPDBVVARGAKVVXOQKQGYZDCTPFONRUPLJHHOIIAJBJNVWBUENGXMONHYAJVUZTSB");

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
    msg.setTimeStamp(0.7517523718684495);
    msg.setSource(22697U);
    msg.setSourceEntity(73U);
    msg.setDestination(39314U);
    msg.setDestinationEntity(74U);
    msg.name.assign("QUYJGTUFDZKTSQKDZNPUYKLGRLTHQPCNKCOYBGPCZZHMFLDNRRJSXIHAUVCUKVDOAZNFVMAHZCL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZPIBQSGOLCUSCYRYYEJKBPUGXKSUIVTUSELLBXDSHAHTQDJEKNTPVILFKCTYKOASDMFDXFLMBOEFXJWOHKMGMFIYJ");
    tmp_msg_0.value.assign("GPQBRLIRPJHXQZNIMLHJGASAGCOESDCLZNLEYBBTJDJWNPDOU");
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
    msg.setTimeStamp(0.422709113291747);
    msg.setSource(26149U);
    msg.setSourceEntity(222U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(229U);
    msg.name.assign("XYSGKINAOOCOXBFJCTVZWLQDPHMROTULEBHTNLRNGPRDSMBYPIPIOCDBSMWGDPDOJTCRSPEEAHAFFEHIAHLGBQJSRVEGNETKZZUIKTMMZBFZCJYZNRYZMPCTARVPSXNPXORLYBUSBDKSBWEKMNVCVGAKIHTWKQDHVLLUWXQFWVYCFRHML");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WXDSPIGBTXKHRSWBEKHLQAOBEJEEOYJJSLWDYSUEIHAZFGXJGHCAAHVKELTGMBBYLCCPVCUPMCUGIGYNFFLBNASXBQOMDKFRLXBPTNZMOUXWUFRLQLZVYSUGMWRONNZEPQNKQZQHZIUWPPMEQGONYUTPZQRGMRJFISMDWJJNOQVJKZHCFDDRAYPWJZXQMTUWSVZAHTDDHDIIOVKDKEJVCKYXRECITHF");
    tmp_msg_0.value.assign("WQQYVCBIZZIJGETLNACBVEVPFHIQSGNPAOLKXMVBBBYNWIZMTMLNWRLGRBUTXHAXPOWIWONTGRWISCQIOJBZRLKUEVHYGTMPZCBQWJFNNWJPJOBRFHGMAHZPHAYLBSRKQAJKJATGROQOUDFTHHSXUHCMPYKXVCUSMJLOAUEVSEYSIGOY");
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
    msg.setTimeStamp(0.36977244195732084);
    msg.setSource(36335U);
    msg.setSourceEntity(191U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(137U);
    msg.name.assign("NJINQKBTJTMULR");

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
    msg.setTimeStamp(0.5778564587462361);
    msg.setSource(35317U);
    msg.setSourceEntity(92U);
    msg.setDestination(6335U);
    msg.setDestinationEntity(189U);
    msg.name.assign("OSRFGPJHZVBKUXVKSMVHUHSNYMUHCXLITYWMATWRDRPXDBURMDNZDORKNYDYWDAHQUZIIWQANPGGVJDIZYDDRSNYEZBXGFMXATHGMBVXPEMURFLHVJOJESCZUGPFCAQBCFUAZEAOYLQHBWXJEHZKCCRZOUWJBWBIROCKCAIEIPYTXTOEUS");
    msg.visibility.assign("JOCJRCXGVGHTUNSMYZTNCCAYRPQRUFAWSSCYUBMYNGOZUBBFWBELDCXTIEHHKVIKLJEMPREFBZRYLSXYLYMGHHRBHXQPAQIHVEZPTTWNKPAQUNKPKJIYGOSCWKYQFGYWFVCJXXUDBBVVLILJJSAAVNDSAUHMFXJRGBPSSNZODAVPOSZNDDHLQODIWQUTRWVZEFM");
    msg.scope.assign("PSCQNDJEFMRANJDHCSYHLROSWVHXDCQPBTVSYPOUKSHVVFNGZLHUTCQCBIUJFPDKJBNJOGNYALJVAQIQRTTWEBUMIRADSXPVSZIUGEABXKHKKJUMYZFARAYCJPBUVLPOSBERGSWIWWZAXEXQCMXKDZMKBNIYZKCXWEMWUGJDNYLEHIQGJOTZFHECOQXMROIPXTRQKWFYYGLCAODROGTZNPHZILUOHIVFSETVQWPMGBRDLYBMNMUZEFLAD");

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
    msg.setTimeStamp(0.021004335267045704);
    msg.setSource(18365U);
    msg.setSourceEntity(240U);
    msg.setDestination(42557U);
    msg.setDestinationEntity(69U);
    msg.name.assign("MHYBQDQLALOTLOUEVVRTWBJMSPUGDRMJLBNKXNWNULIIHZOWZXARBSGKYNFMZYGGKTLWGWOAFPBNIHEISTRRCIJGXOIJFQTKUMEDZUGTDVFBBTUZCAKVYPMATKXFDFWNRDWERVYERGSYPHOZCHNEGJCIEDMKCHUSYQZBHSSMQFWVVMISXCQGPDWHQSEWXTLVLMCTXJFCPPCYAOJYAKIOJNNEIDPZABDQNUUXLASLZCOPQXUFVVK");
    msg.visibility.assign("AYCPRQGDMOMTCIXQLWCKTKSNXVRKEYLHZOSKCLKDIMSADQHAGIWFZINYNCWVOGECMLDNQXSRWLPZIIFXRSYASSGOFNTNZCVJVMKFTVDEHOWEYPXFKZVYMUUORAETLSAYIZQIYBTVRWRPLAJPYOLBVFLBTGRGSUXPJNBQTEAAGOJJBZMQJVKDPFPMEAEGUYUMDZNEQKRJ");
    msg.scope.assign("CXVJIUITOCZIVBNDIVBSVMWMCEVYWARZIBXJLBCVUHCPYOQRZMWCATGDZMMPRATSMLCFIRLWUTPRRBYZYLN");

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
    msg.setTimeStamp(0.6111494707148855);
    msg.setSource(7066U);
    msg.setSourceEntity(107U);
    msg.setDestination(34481U);
    msg.setDestinationEntity(84U);
    msg.name.assign("CALCFFGBJWSQDSTPHTANKXHQJGVLOXXSELIVSAYYMEBRHFVOTZDAETBCNMBJYQJLFMVQOIVOJIUFZMEWBQDINLBHMFPRQUUDHYS");
    msg.visibility.assign("FQXYBECDLKHRCHUTVMWQYFPBVYAWVQJJUWRZOHLVGGTHVNYIDYPFUSIPFNMJRBLRDPOECXFSXSSPZWVPHSETBKRNAZKXAQKPKUBXPAICXMCQZOMSGKFNFNLNRNODHVUKHEGUBATOUCYZRBZFGGAIMRELXWXAZDKMOLUTBLRMUPJMOYOJOSOXSFNEILATKTPYGQATHQHWZVZGEFDIDWCUBGQT");
    msg.scope.assign("KKMBTWDQHHNGQSYKXMFSBQNRUESONDNPZEVVQYNWPJGTLKDHY");

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
    msg.setTimeStamp(0.2297054827129651);
    msg.setSource(56430U);
    msg.setSourceEntity(1U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(88U);
    msg.name.assign("UFIKPQHJNHMGUVVKBTWNDDIJLZPARJXHLHRPZRBPSPBDMITCEXCSICGQDCXYXRTHQDRLAVUKMWKBOUJWYTCRXHEJYWLGDLLWYPUOMVOWAGPDFBBBZSCCNUWNILZHOMKPFIKGSZNJAIIFYKKHLIAJN");

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
    msg.setTimeStamp(0.5272117009848326);
    msg.setSource(9640U);
    msg.setSourceEntity(94U);
    msg.setDestination(33795U);
    msg.setDestinationEntity(224U);
    msg.name.assign("FFWAOKALKNHIDNVVEJWMHFLEJLOQGADMXLLHBNSWICEABOYGXVHY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EHXZROYVBZGGXBPUGIOULGZMJXDSBBTTJJPQWFVWMTEZLWXLECLGYUPNWKGXMGNMUUSUIRKQYLRCCSDZIFVQKFPAKRMTWVYUIFWPZAOI");
    tmp_msg_0.value.assign("PEYTUZHTERQEFBIPJTTSCGUPJUWNOXVSZRHTVCAVVNLCFNYVOBPSQDDYMQRCKCSJLDQEISYISSPHBLMUMKFKUTEGVTMZHJRIVUPKJGLNRXNAZZJCSQKDNLKEGKDQMDIUHLRKIRBOHWELVAEFXXIJWMHXFOJOWYIYNPFVDKCGTAOWQBWBWYZY");
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
    msg.setTimeStamp(0.37718963161920094);
    msg.setSource(9397U);
    msg.setSourceEntity(38U);
    msg.setDestination(15556U);
    msg.setDestinationEntity(0U);
    msg.name.assign("DTKMHVNSRCIUORUGBPBSNDAXPAILACZNGZMFVSVKDEXIFHGPORYSIMJRYHRPSOLQTDSTLUBCMPZSVWYNNRECPJAZUFERIJUFWAVLGGDJUGQBVPIEWSJTQPWSTYPBZBFSLDZZCBKVQANMFFEYOGNHMTBXICWQOMQKGVTUDAWZXXANFHPABRCRTNQFQGIJEHGKCHKIYVELQQVEULDDKKXYODYRTWYXFULTZOZUJCXJXBXCEYIJKWHMOMKOLJNME");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OUTFPTITXPSFSNVTKWXKKVWCCGTVFYVBBBXQRWNNVAUMWMFBEZBIGLZCLBJRHJYEAPJJALHQALKAEEPHTCODSIIIDOSOVDYVNIZDPDIYGJFIEWLRDSZXZGSFYQAHRRUMEFWBOXRWMMGHTLJZZVDGPLCHAOMCIWNUFCXIAQROOYEUVAMSDETGKFSYQYXLJJEURMNPWVYTGLZKCEQYPXAKQCBMDZHLJGZUFURXNQWOBKSOPNHNCK");
    tmp_msg_0.value.assign("XKWKACRXMFVDGNLQNPQSIVQSBNTDQDKZUIRLYVENDVCZOCIXPHCUDWZMBAHSTYIXAFSDAOZJFSQJFDLPRHANEYYPWVUNCKXYKULIIBAPJAEWZVYCVFITRETFZGTETQLEXPIXREGGUBMROKOJBQGSYLSCQCWMREOLSZMDWJMCZPMZGHULTOHTGBNSIUPOLXJDWEBGPKSMRRXIWNZBWRJHLFAJMYTJVHHEQBUCYHOFUFNPMQTKVXNGDBYKJFVO");
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
    msg.setTimeStamp(0.19537044906990964);
    msg.setSource(11139U);
    msg.setSourceEntity(60U);
    msg.setDestination(22217U);
    msg.setDestinationEntity(84U);
    msg.name.assign("VLCIFEXRHGOFAUULXTLYCGZUKSYDVFAPIBMAKQYBLJTDEPTKIKQZVXNNUFAJUKYOEAOYJBTBCPPRYZNWRVFMRDGOXWOMAZQLNJJQNKHTAPFCWMFBSDMDQXXVVSDTIHDIBAVBTVOEKWXRCWFJZRAMUGCSIQEELAELWFKZGVWZXNURJTWTEYHCPXMCZLJMTDSHGNSHIXKERIOMKYWGFNOPBIG");

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
    msg.setTimeStamp(0.11041464641468934);
    msg.setSource(29663U);
    msg.setSourceEntity(85U);
    msg.setDestination(63005U);
    msg.setDestinationEntity(224U);
    msg.name.assign("RNTOKUPMSMERTJRSGYBFVUIJNBYFSGUPIRYGPHLZQTCDEJHPOMUONSESYVDIVDYITNIVKZJXUCETLCRCBCFXFJVWWPDOTDFZLAADKJANUDKORJGLXIUVBAQWZWREMKVBEHVXYGGIOWHSAAPUTRTZHLLWSUQMCWXNQNZFQEHHSQWZKDMZBANBFJDRKEXTVDFWGIXHGYMLQLICJITNQYACFWJFBXUZP");

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
    msg.setTimeStamp(0.5390564887502448);
    msg.setSource(34312U);
    msg.setSourceEntity(53U);
    msg.setDestination(45923U);
    msg.setDestinationEntity(203U);
    msg.name.assign("DMZNZIYVMCOJRAGAYVRFCJLHGATTQTUMBEELZTQSYNXFANDGSGMLCPZXMTDHBDWYOTDBRHMZALJPZWIYFQCTNFODCXFNJUBUVJAYOKOHINXJSEWNOGKKOUVOQQRISRYXWYLWPLAVDEEXCSZHWHMGUUPPJQTLUJVKVFFWIGEACUKIRRXQSJKUYL");

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
    msg.setTimeStamp(0.6048369089818261);
    msg.setSource(54516U);
    msg.setSourceEntity(4U);
    msg.setDestination(6827U);
    msg.setDestinationEntity(108U);
    msg.timeout = 380635398U;

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
    msg.setTimeStamp(0.8900130147063952);
    msg.setSource(54015U);
    msg.setSourceEntity(189U);
    msg.setDestination(40193U);
    msg.setDestinationEntity(142U);
    msg.timeout = 1135595113U;

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
    msg.setTimeStamp(0.45498258046653817);
    msg.setSource(41922U);
    msg.setSourceEntity(149U);
    msg.setDestination(23457U);
    msg.setDestinationEntity(180U);
    msg.timeout = 2478313059U;

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
    msg.setTimeStamp(0.5235291100219316);
    msg.setSource(36284U);
    msg.setSourceEntity(106U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(19U);
    msg.sessid = 2846889367U;

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
    msg.setTimeStamp(0.773666566906872);
    msg.setSource(36878U);
    msg.setSourceEntity(60U);
    msg.setDestination(5302U);
    msg.setDestinationEntity(101U);
    msg.sessid = 2783401077U;

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
    msg.setTimeStamp(0.30368240827584636);
    msg.setSource(34630U);
    msg.setSourceEntity(107U);
    msg.setDestination(59652U);
    msg.setDestinationEntity(124U);
    msg.sessid = 2732622911U;

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
    msg.setTimeStamp(0.1818028097802693);
    msg.setSource(14850U);
    msg.setSourceEntity(35U);
    msg.setDestination(12763U);
    msg.setDestinationEntity(104U);
    msg.sessid = 1520601989U;
    msg.messages.assign("FPYDGKKAHYK");

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
    msg.setTimeStamp(0.1031742140484605);
    msg.setSource(58634U);
    msg.setSourceEntity(226U);
    msg.setDestination(6030U);
    msg.setDestinationEntity(60U);
    msg.sessid = 3677098739U;
    msg.messages.assign("PKZFJUXWQIKJOPUINKOGQDKXTRLSNWZFHTRZPWCEMRWYRZQUJFDWCOKWBTGCSWIBZHQXYEGBLHTHAJSKCWYBKDMLBRVSFHRIAZOMUJSAPUAUCYLPPBGGDRBNNJBFHBLEGMYNK");

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
    msg.setTimeStamp(0.32040482637610634);
    msg.setSource(43844U);
    msg.setSourceEntity(128U);
    msg.setDestination(41239U);
    msg.setDestinationEntity(153U);
    msg.sessid = 3023648830U;
    msg.messages.assign("WNMDRAUGACHORHIGSJUQBMJTWCWBUYSHXJHBZPFWFFXGMBZDXJQGVPLZFQMFCKATEWMAYPKHTZIKFVOVICYOODKWCDWNRFTTSRYEOYPGZCAZBIVKUBLXUDGBIPKP");

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
    msg.setTimeStamp(0.3182163438648974);
    msg.setSource(25495U);
    msg.setSourceEntity(9U);
    msg.setDestination(46021U);
    msg.setDestinationEntity(17U);
    msg.sessid = 1246639424U;

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
    msg.setTimeStamp(0.5974727620013548);
    msg.setSource(6327U);
    msg.setSourceEntity(114U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(57U);
    msg.sessid = 941290432U;

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
    msg.setTimeStamp(0.2320412871454013);
    msg.setSource(29330U);
    msg.setSourceEntity(106U);
    msg.setDestination(19858U);
    msg.setDestinationEntity(51U);
    msg.sessid = 1064652568U;

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
    msg.setTimeStamp(0.662595854077314);
    msg.setSource(33064U);
    msg.setSourceEntity(248U);
    msg.setDestination(54144U);
    msg.setDestinationEntity(71U);
    msg.sessid = 740050799U;
    msg.status = 225U;

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
    msg.setTimeStamp(0.39428773563770214);
    msg.setSource(46369U);
    msg.setSourceEntity(31U);
    msg.setDestination(43323U);
    msg.setDestinationEntity(28U);
    msg.sessid = 4158134944U;
    msg.status = 92U;

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
    msg.setTimeStamp(0.5092987851401738);
    msg.setSource(32034U);
    msg.setSourceEntity(52U);
    msg.setDestination(1067U);
    msg.setDestinationEntity(80U);
    msg.sessid = 3823283225U;
    msg.status = 174U;

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
    msg.setTimeStamp(0.5379956769899151);
    msg.setSource(62639U);
    msg.setSourceEntity(128U);
    msg.setDestination(82U);
    msg.setDestinationEntity(96U);
    msg.name.assign("LLTFYGKCRSFHGIPNEYETTXSKBAOBSGQWNTUAOPZHIXWMVIEZEZBRLYSZDJHQRLSLUAFEIASDYCHCGJIYGUVYZMSRK");

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
    msg.setTimeStamp(0.563380776203715);
    msg.setSource(59422U);
    msg.setSourceEntity(209U);
    msg.setDestination(10805U);
    msg.setDestinationEntity(137U);
    msg.name.assign("CWGRYAKRXEQYYVSLKOBWPQGTOMUZMFKCNAUHZAFZNTRSGEEEKOVONZIGJYDPJGFITCOAPWJABYXZVMYELDTUXBBTRSRJKMESUNDLLUFALGQEIGQFUQWOGBCSDFSLBKIFMIWSDVEHDWVPLRKOILAPXADATQXNJJ");

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
    msg.setTimeStamp(0.46044440783462404);
    msg.setSource(46858U);
    msg.setSourceEntity(63U);
    msg.setDestination(18289U);
    msg.setDestinationEntity(83U);
    msg.name.assign("MJWIGTLUECMWFTTXYXVBYUGNNQEZLIQLGCUAYYOETCISISJGZKPJZVTOCCQF");

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
    msg.setTimeStamp(0.9500306781698797);
    msg.setSource(55964U);
    msg.setSourceEntity(151U);
    msg.setDestination(59927U);
    msg.setDestinationEntity(244U);
    msg.name.assign("QNMQZPHQJKGTPGZSDDHGJAWVJRXLUIOBIXXVZYIHJQHHFDEQTEBCKXBFHWRVDQSDYUDUCPSXKYMIYMZNKWMGAFXZRBWADRJRLYCBHJNUAUFKZEROWMMXUGTEQICAKXEEHGBPLXHLSERROWLFUAKUIPPIVNUBQQULYMBQJATYVPWTBOEYYKOCFKIMKFGNSTZCAERBPWJRTGTVOVJ");

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
    msg.setTimeStamp(0.4058102553458973);
    msg.setSource(35495U);
    msg.setSourceEntity(252U);
    msg.setDestination(7582U);
    msg.setDestinationEntity(95U);
    msg.name.assign("WPDKZXNPQRGRBEYNLVXCWJUTUIHBEMMMDQAAHOWPFIXAGFUDIYIVABDCKGVGUSZTEGOJEYLLYZPHIYWMXZKTCCVKICKIMSKPXQTWFFEOJPRNJXKIHMOYWLVMDPLVPAZVZALQBYBBCWRUAPSDTJYXFIYFCNMNVNFEOFSOXHBHRJUTHGL");

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
    msg.setTimeStamp(0.2963064971010855);
    msg.setSource(41154U);
    msg.setSourceEntity(28U);
    msg.setDestination(54823U);
    msg.setDestinationEntity(104U);
    msg.name.assign("BXZLHHHCNUIUAVELIUBYVKOYLGZJZACYLTTWSQAPRQWGAVIAQAGUZWSAVSLKONSYXDZYDDTIPYEWNVBPAZYQHKLFNGOXXOWUMZMBGAPMVEJCTPCZCXEHSCKQMHFFYURNFFQRVJLJUWJPMTEDEJKPRBPIBIFRJINTSOEKUGQMEXNRNRQVNPTXIIBLFQXOIDEDAWCXSTFBYCBETHGWCKUGBJRDPXOSOJMTCFMQDKWSZJONGGHOFULKMSL");

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
    msg.setTimeStamp(0.3968738207681788);
    msg.setSource(62328U);
    msg.setSourceEntity(169U);
    msg.setDestination(3614U);
    msg.setDestinationEntity(106U);
    msg.type = 40U;
    msg.error.assign("KMDCIGXZAXCMWLBSZJAYITMCEXBJWTQMKBGKDMRFXHQZVTPTCGYDDAZOCMTRAVJUJGMUQNEEIJXIHVVVAWHYNHPSLYWFGTTXMVWFNQSKORJGXKIWPWOCFDFODWXOHQZLQCBLBOKEBCESOFNFRYHNAPPRZUFFKDGRCZAKGQKQBTSULWJONYRY");

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
    msg.setTimeStamp(0.4613006660275941);
    msg.setSource(9157U);
    msg.setSourceEntity(133U);
    msg.setDestination(14711U);
    msg.setDestinationEntity(51U);
    msg.type = 129U;
    msg.error.assign("YHBQGARMEMJLTIZQKYWOMPLBCUUXWCSLELPGQVAMTRIGQBYTAPOTQXLCEJDLCKNLEPIJWXXLZFKCSBMIQMQMPIFYDFPCQZGFUTVUJGCEDKVNVJOHAZOSXJHONJZNNCAIRXPKQOOUFAAJZKTEEAOBHOZDJBZGSVGXETVFIENTDUWDDKSDVYWTFNVHCHYKCWKVNZKSLYAQFRYHSN");

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
    msg.setTimeStamp(0.00474245358053671);
    msg.setSource(49684U);
    msg.setSourceEntity(233U);
    msg.setDestination(13524U);
    msg.setDestinationEntity(63U);
    msg.type = 226U;
    msg.error.assign("RONGZVPZAXSRKSRFBPMWPFVUVCEUCXPLWQHWRTIBNHQEIAVWHGOJBXRDYBCROBDLFPTMSMUMKGDIXUQZDQONTOWJRIUZVEA");

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
    msg.setTimeStamp(0.8244810519239947);
    msg.setSource(7844U);
    msg.setSourceEntity(76U);
    msg.setDestination(40314U);
    msg.setDestinationEntity(114U);
    msg.seq = 54469U;
    msg.sys_dst.assign("OCLLBUXSDPZOAOGACQOVCVXHHRQJYZWWNYEWURFPGTZYWLFPGCYESJCHMCRDBSQXJOLPYBPNHENWTEIHPDAZUFRTWGGQAKWBAMNXVZQBCJPKXBNRJSVEBOHRSBEJVMEMDUUUOFVTLYTOILVRCDCQMKYXXLIBXNGYXRIQKIIUQMTJROOZTVNADLSIYKGTNUVJGUMCHJNTHDSKFXWZGAHELFVPZAGPWBQFAJ");
    msg.flags = 161U;
    const char tmp_msg_0[] = {119, -94, -83, -19, 107, -22, -6, 39, 59, 39, 66, 72, 15, 99, 90, 33, 108, 86, -25, 103, -30, -62, 37, -9, -90, 75, 99, 21, -5, -58, -3, -53, -78, -92, -89, -45, -74, -51, 120, 35, 18, -48, 122, -117, -66, 113, 56, 88, 48, 76, 82, 69, 117, -6, 84, -79, 113, -22, -6, 125, 93, 75, -113, 99, -106, -103, -128, -45, -14, -65, -60, 62, -18, -90, -5, 72, -63, -33, -1, 64, -61, -119, 12, -112, 45, -18, -104, 100, -43, 33, -59, 108, 109, 90, 103, 44, 43, 38, 38, 23, 95, 100, 75, -79, -63, 82, 25, -75, -124, 89, 90, -119, 113, -85, 18, 111, -34, 21, 44, -8, 103, 47, 107, 79, -49, 124, -58, -69, 70, 75, -91, 44, 44};
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
    msg.setTimeStamp(0.2246080386111543);
    msg.setSource(27961U);
    msg.setSourceEntity(66U);
    msg.setDestination(51648U);
    msg.setDestinationEntity(41U);
    msg.seq = 21595U;
    msg.sys_dst.assign("VEQXEZMGLVQCKUETLSALSJBIXCPWSWNDDCCTSUGJVNRQKNHGBCJQXTHFKOHPCK");
    msg.flags = 23U;
    const char tmp_msg_0[] = {-17, -13, 4, 101, 30, -40, 21, 96, -13, 59, 2, -118, 102, 73, 76, -63, 31, 77, 59, -62, -80, -59, -110, 36, 73, 42, -77, -93, -20, -38, -47, -76, -2, 122, 87, -5, 98, 73, -5, -5, 101, 23, 76, 64, -65, 120, 89, 53, 126, -73, -100, -119, 52, 5, -39, -70, 100, 118, -50, 39, -114, 12, -48, -56, -88, -72, -84, -45, 4, -55, -32, 74, -108, 25, 41, 67, -24, -111, 81, 118, -108, 95, 28, -112, -49, 43, 116, -94, 9, -76, -22, 16, 95, 6, -86, 86, -75, 8, 21, 104, -92, 69, -58, -93, -22, 87, -105, 28, 111, -107, -39, 115, 125, -79, -77, -76, 8};
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
    msg.setTimeStamp(0.5659192555971176);
    msg.setSource(23699U);
    msg.setSourceEntity(33U);
    msg.setDestination(37089U);
    msg.setDestinationEntity(116U);
    msg.seq = 35545U;
    msg.sys_dst.assign("NXHJMGYZQWNVHAUOXINJYCCNRTBXRQSWDVXS");
    msg.flags = 240U;
    const char tmp_msg_0[] = {112, -77, 60, -77, 5, -26, -109, 35, 119, 60, 105, -64, 40, -118, 49, 22, -49, 60, 75, 102, 27, -3, 61, -104, 101, 60, -59, 28, -44, 68, 41, 77, -95, -66, -79, 80, -63, 108, -52, -79, 19, -83, -13, 62, 10, 122, 24, 99, -27, -2, 123, 25, 70, 100, 33, 74, 7, -88, 2, 17, 102, -42, 103, -90, -46, 83, 102, -113, 101, -128, 8, 0, 6, -105, 70, -109, -8, -49, 120, 108, -24, -4, 74, -9, -71, 110, 29, -65, 56, -80, 37, -21, -34, -5, 104, 17, 19, -20, 34, -88, -7, -58, -86, 32, 20, 4, 3, 74, -79, -114, 57, 126, -29, -37, -78, 23, 58, -21, -1, -103, 105, -90, 125, -120, -68, -68, 88, 116, 3, 30, 0, -67, -104, 93, 4, -79, -93, -68, 24, -20, 125, 107, 39, 4, 50, 98, -73, -25, -31, -9, 122, -36, -74, -126, 30, 45, -60, -61, 107, 100, 110, 41, 12, 97, 83, -74, -20, 12, -119, -95, 20, 65, -113, -64, -56, 44, 53, 46, -30, 45, -120, 107, -121, 116, 59, -34, -50, 71, 30, 69, 108, -106, 22, 11, -22, -13, 55, 109, 28, 5, -60, -49, 79, -95, 64, -71, -115, 4, 46, -85, 106, -47, 117};
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
    msg.setTimeStamp(0.4847423893946796);
    msg.setSource(62685U);
    msg.setSourceEntity(123U);
    msg.setDestination(27933U);
    msg.setDestinationEntity(95U);
    msg.sys_src.assign("LLSTCRSHAYKMGVHDRTOBVWPTZDPAHISVJEMGUAUHOMHSDUZYDDRVBLOGEYIHGZVRWFZRI");
    msg.sys_dst.assign("CJGNLFTPHPURONFTLJEXIWYBESHSOAPPYWVOXNZQZYNCXPHAGTDLUNEWTVECCQFCUPJSBRHXGAOTKXATMBXUAEOYJFRPBDWDCJXKIIIYTDOMVZQVLMYWVDSGKUQEHOMBHFICAULHKNRWRBWZKJHZEITSBGUSIZLKNOWGTNMBLPDFQQTSLNSLQBZFVAZMAQWIGCRCWSOGFR");
    msg.flags = 225U;
    const char tmp_msg_0[] = {124, 93, -55, -99, -85, -115, -17, 115, 68, 18, -31, -31, -46, 15, 3, -11, 115, -23, 113, -128, -55, -120, 52, 75, -68, 52, -2, -62, 10, -11, -81, 83, -86, 40, -9, 14, -91, -74, -17, -3, -93, 47, -120};
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
    msg.setTimeStamp(0.5691100183638726);
    msg.setSource(27286U);
    msg.setSourceEntity(228U);
    msg.setDestination(64603U);
    msg.setDestinationEntity(253U);
    msg.sys_src.assign("IWIIMDYVZUFKNMNEDAHJUDWHOHQETMZGLLEQWYAVHXUBTRWPLNCBQOJHQEXOZRNYEBPFYWKVDRKSGDVPUMTWPLPPFHQSFTGZAXACNYBBOJKPBCYUJCUTUFDOFCGRSBCPYIKQXRVESTHMEXCWIVLMSMRLMZBHLJSTZWZPJVEHARITCGDKNAWQDIGBYSQSLASCXZMNZVAASUOHOYXLKRFKKEBUXZMCJGINVRY");
    msg.sys_dst.assign("MNFLUBHGZMCRNKYEPHQFWRYPIT");
    msg.flags = 153U;
    const char tmp_msg_0[] = {90, -61, -90, 110, 32, -100, 4, -21, 43, -54, -114, -67, -30, 37, 62, 0, 74, 43, 87, -72, -11, 92, -96, -2, 30, -2, 88, -21, -122, 118, -109, 8, -85, -96, 73, -59, 8, -12, -97, -10, -20, 99, 4, 7, -102, 29, 111, 36, -31, -34, 52, -66, 14, 36, -40, 101, -128, 100, 10, -72, 9, -55, -125, -93, 109, 46, -101, 28, -36, -81, 96, -43, 103, 37, -124, -120, 0, 98, -85, 33, -3, -89, 15, 67, -105, 14, -126, 3, -32, 9, -84, -14, -106, 44, -17, -75, 27, -106, -108, -53, -65, 73, 29, -2, -10, 101, 2, -59, -121, 89, 10, 49, -48, 84, -51, 122, -30, 115, -71, 95, 10, 67, 65, -64, 50, -5, -106, -118, -42, 120, -111, 57, -54, 26, 71, -9, -106, 52, 30, -53, 57, -41, 121, 13, -38, -77, -122, 96, 10, -102, -81, 57, 121, -19, -41, 122, -83, 54, -110, -96, -22, -69, -74, -66, 54, 14, -19, 68, -43, 17, 96, -96, 89, 22, 24, 97, -94, -68, 63, 16, -105, -118, 6, -48, -70, -11, -106, 5, -88, -114, -92, 52, -48, -5, -121, -15, -76, 69, -128, -26, -56, 18, -89, -110, -31, -78, -18, -44, 33, -49, 29, 30, -99, -85, -69, -105, -128, -19, -62, 11, -96, -74, 70, 41, -32, 31};
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
    msg.setTimeStamp(0.5596379182347289);
    msg.setSource(34813U);
    msg.setSourceEntity(113U);
    msg.setDestination(25600U);
    msg.setDestinationEntity(104U);
    msg.sys_src.assign("IDAIQNMVMJPSBYUZOILDDPJUJDIKZIKRBFSMWNXIOFGNRHQCHZYLACRMKOJPMIUSJEDWFECLEBEMDDMSKQFXCQELJLGEQJURBCGRWNYZADNOHBVVBWPOQHITYWSPEAUVCWZRJHXFOJKYYUSTCGALXTPUVYZERTRZEDTQBSKKHTAXBEAGNL");
    msg.sys_dst.assign("ZULOMHAOEONBAEAFJYFEGWZMIODQZZWMJQDGAUILHXIJRTEN");
    msg.flags = 98U;
    const char tmp_msg_0[] = {89, -56, 24, -81, -81, -14, 69, 51, -53, -30, 29, -74, 111, -23, 79, -117, -64, 104, -15, 94, 81, -79, -4, 115, 28, 115, 33, -116, -26, -128, 122, 13, -29, -79, -26, 113, -55, 13, -21, -51, -96, 94, -95, -126, -99, -106, 118, 8, 21, 77, 50, -128, 77, 126, -6, 76, 82, -24, -66, 21, 3, 30, -122, -73, 57, 120, 34, 88, -49, -52, 41, -29, -49, -14, -19, 53, 71, -32, 54, 10, 64, -87, 112, -30, -60, -105, 82, 83, -85, -63, 110, 112, -73, -31, 63, 115, -105, -42, 111, -45, 93, -29, -28, 82, -105, -24, 38, 51, -28, -2, -85, -103, -50, -49, -56, 46, -59, 25, 50, 69, 7, 118, -61, 107};
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
    msg.setTimeStamp(0.7723382122237807);
    msg.setSource(64866U);
    msg.setSourceEntity(236U);
    msg.setDestination(13353U);
    msg.setDestinationEntity(201U);
    msg.seq = 50643U;
    msg.value = 153U;
    msg.error.assign("YOFIKWBLNGLBQRCRBWPIDEBHRFCSTHAMALANEPZFXPOADTSSLHETLDXCYEZAXMMYQIHNLQYDSGGFZZBRKIZEJYTXTFJVPSXJDUJDCHSCDVIRAOWYUMNWBDFHUYAWNMOYAFXVRSGIZSUFCQQJGM");

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
    msg.setTimeStamp(0.43334276595612486);
    msg.setSource(2544U);
    msg.setSourceEntity(40U);
    msg.setDestination(24284U);
    msg.setDestinationEntity(5U);
    msg.seq = 6959U;
    msg.value = 184U;
    msg.error.assign("ATRESJVALUULHHGQDLTVVOQUIXQKNZUIDYXKXQFQPTHPDPJZKSIDFRWMWPGZBGMNFFVOXGZLSBBSDSOMRDJVMNGKIBACBCAOMZDCWPQVTVAZNQPFISAEPXCUYJXHRXGULKHROINAWJRTIRFCTCNBEENOJJSQWUHYEWFPYXRPYOGKSDOZRCVHEDDJCUBHBZFOZAWGKHUXBNSIRHYKWUTNYLQXMZOVECEEANFYV");

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
    msg.setTimeStamp(0.14823876437666794);
    msg.setSource(19195U);
    msg.setSourceEntity(20U);
    msg.setDestination(13850U);
    msg.setDestinationEntity(100U);
    msg.seq = 5054U;
    msg.value = 223U;
    msg.error.assign("NWOCRAKTYLPLRIQIRHTKTAIVFTLDINZZDOUOUMGAFXLTRGNPZBBGYWNTXSXVLZUWAJRZMUYJOSCSVAFCZULXFJEKVFXEBYHQMYGJPCFKKWPSZVAPGBCJTSBXDHAYOHKAFSNOYPSEQBKICDXTQWLKBDBKJRCQMEWRFLXWHCGMENJUIKCUEPRDONWHPVDOMJMFISYMLHARZUVFDHNOITVGWZIGAGHQEQXLWNEJNETSPBCJUBQEMXV");

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
    msg.setTimeStamp(0.5528954643390653);
    msg.setSource(13352U);
    msg.setSourceEntity(71U);
    msg.setDestination(56399U);
    msg.setDestinationEntity(62U);
    msg.seq = 20991U;
    msg.sys.assign("QXNMHFUHRQHDWSSLUYWHNAYMJCKSPCAQXRQDGXZNMDDLRCJMOAJTJAVSPKWTBLGGJZEVZHTUYBTOFXGITSERQTWLLIYZYBATKFLBTUMBGMGQWUHIFDXLCRTTUPJECVZIGDWDYAWJULZBHPVFWUCZMSOIEKFAPUDMZOANRQQFNILIGNLVKSRAHDOICDZIFXZ");
    msg.value = 0.2589287801202358;

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
    msg.setTimeStamp(0.9420736076223613);
    msg.setSource(54443U);
    msg.setSourceEntity(124U);
    msg.setDestination(19240U);
    msg.setDestinationEntity(182U);
    msg.seq = 60900U;
    msg.sys.assign("LRWSAXCNECBHLUTYHPNOZNWSPSISPQHHDMWLKWEWJJNACXULMIDFQPDORYEY");
    msg.value = 0.3796562454355987;

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
    msg.setTimeStamp(0.37094704502852127);
    msg.setSource(42190U);
    msg.setSourceEntity(13U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(40U);
    msg.seq = 57297U;
    msg.sys.assign("QNAALVFCGPFZUGBOKYKEXNMRKGGTQPUMKCRIDAESVXNUDTBPYXSQIJPCHITNSHJAIVHAMUCRQYPJEPCZAFJQYEIEOMUPMQWFKKYICEKIBWYQKDDOHBLJGAJFPSJVBKTVBUULTHONKJLCRYTJOLZGOWWGSZRXDUWMFRXFCVVRRLEMXRAOWLYTOBEDZGNOYWNDNGNDBZYFJTFQQSSHZWBDHMEWXZAVEHPWT");
    msg.value = 0.9809973045298483;

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
    msg.setTimeStamp(0.25117870325877145);
    msg.setSource(60219U);
    msg.setSourceEntity(245U);
    msg.setDestination(11213U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.20817257631343988);
    msg.setSource(39733U);
    msg.setSourceEntity(143U);
    msg.setDestination(48941U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.8691639949870986);
    msg.setSource(45791U);
    msg.setSourceEntity(64U);
    msg.setDestination(12665U);
    msg.setDestinationEntity(222U);

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

  return test.getReturnValue();
}
