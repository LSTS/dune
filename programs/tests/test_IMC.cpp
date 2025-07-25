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
// IMC XML MD5: 8dc5c4eff704a6869be2461d13b39bce                            *
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
    msg.setTimeStamp(0.92296436802098);
    msg.setSource(14785U);
    msg.setSourceEntity(225U);
    msg.setDestination(53262U);
    msg.setDestinationEntity(162U);
    msg.state = 22U;
    msg.flags = 72U;
    msg.description.assign("SWKFZRPSNTTXBVEKRGAQWCMHVATUGTZAPZCGSILNSHNMTXMEAOCYBXVLZXERMCGQPAVRBBJGDEDQOJZUTPWNDYNJLCCFCYEFUOKUMJQKRYWCEOZLIVWKLVWPNUKXUGHILWTSSNIYABKQGJOPMBOXOFIIYVEJIUBZYTLQGDWEROXHJZFRGTZHQZQVDUQNSFJKQORSN");

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
    msg.setTimeStamp(0.5326090617356141);
    msg.setSource(22910U);
    msg.setSourceEntity(33U);
    msg.setDestination(15356U);
    msg.setDestinationEntity(23U);
    msg.state = 187U;
    msg.flags = 108U;
    msg.description.assign("QRXIOYCKVDTJZHYFTMEOGBRLTQPZPGOYDFZOPYUXZEIQFEWJXLMCLRUCSWAQHSUSSIDPELODHOYLPOMJRTEETHIIVKRJJKKVBYNUZWBUUBQSOWQNRDNGIHJJMNLWACWQLZNDTICQWXVYFCVZVJTUSF");

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
    msg.setTimeStamp(0.21593921560574314);
    msg.setSource(13920U);
    msg.setSourceEntity(93U);
    msg.setDestination(62719U);
    msg.setDestinationEntity(95U);
    msg.state = 3U;
    msg.flags = 25U;
    msg.description.assign("ULZFBPPPSBSZ");

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
    msg.setTimeStamp(0.8695606965595699);
    msg.setSource(12265U);
    msg.setSourceEntity(153U);
    msg.setDestination(5966U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.5169737440674025);
    msg.setSource(29510U);
    msg.setSourceEntity(34U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.2523320970027533);
    msg.setSource(33058U);
    msg.setSourceEntity(16U);
    msg.setDestination(55307U);
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
    msg.setTimeStamp(0.9115501459123078);
    msg.setSource(50075U);
    msg.setSourceEntity(210U);
    msg.setDestination(49184U);
    msg.setDestinationEntity(197U);
    msg.id = 123U;
    msg.label.assign("VMWROAHKTBXULTTNULSZQWDQUNVXQWRFPXXTYCKOEWAMZIHJIJZOWKGOCXNKSAYJFPNYYRSTVXHJGIAOBGYE");
    msg.component.assign("SUTKGZHGUTBQOEOLNGZLMJIXKJABCQSDCFPMJQUPYRKDLOTXWKGQUBBBSYNYHKUCQBDFRQYTMYYPNEWNZJWGWGAIHRVOFNWUEAAXCAQMCGNTSOXTIDRGZNEYFLSIDL");
    msg.act_time = 15639U;
    msg.deact_time = 13953U;

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
    msg.setTimeStamp(0.9446657569615812);
    msg.setSource(51636U);
    msg.setSourceEntity(100U);
    msg.setDestination(43633U);
    msg.setDestinationEntity(152U);
    msg.id = 51U;
    msg.label.assign("PDGDPTTEUGWKJRBYXOFSDOPZGXFHTFCRWCBGRVEQEQAOGOOITQNTTAMPPKHUASALXXNGYIXKVICUYUFGVQQZJJPUEZFEJYDIEAIKJUMTOVQKIWBMYNRDESUMWSCCXQOKCDBVNWCBJGPMMFYTEPADZCRGHNYFXASJDIPTEWXZKUZOGAULSCBVSRLFMIXUAZMETSRDJNNYKQIZBCLVHHHBHWPLLIQHSJNYHDWOJHSLABWRRNKWLV");
    msg.component.assign("FREBRAJOTNUIWRIYAGHGOBNSOSUZNCQJY");
    msg.act_time = 11307U;
    msg.deact_time = 25540U;

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
    msg.setTimeStamp(0.3013617352792566);
    msg.setSource(52878U);
    msg.setSourceEntity(110U);
    msg.setDestination(32416U);
    msg.setDestinationEntity(166U);
    msg.id = 157U;
    msg.label.assign("VHBINLVOHFQYKUCIHWVAVQEECOXYPWURPQFEWFLRXJIYYTEQHCSXLLBJTAQOAHJDXQDRXWUTNEOZANYWYBAQPSXSUUXUULSTKMTYZUXXKAMZIQDLJPTQN");
    msg.component.assign("BVGOYQXSPVGKXKRTWGNNGYXUBUUV");
    msg.act_time = 14365U;
    msg.deact_time = 34317U;

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
    msg.setTimeStamp(0.7594524919331661);
    msg.setSource(50773U);
    msg.setSourceEntity(215U);
    msg.setDestination(36552U);
    msg.setDestinationEntity(88U);
    msg.id = 42U;

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
    msg.setTimeStamp(0.5907787600949307);
    msg.setSource(12888U);
    msg.setSourceEntity(130U);
    msg.setDestination(46122U);
    msg.setDestinationEntity(118U);
    msg.id = 50U;

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
    msg.setTimeStamp(0.9958302255099744);
    msg.setSource(45574U);
    msg.setSourceEntity(63U);
    msg.setDestination(14231U);
    msg.setDestinationEntity(89U);
    msg.id = 29U;

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
    msg.setTimeStamp(0.03932671191663528);
    msg.setSource(14994U);
    msg.setSourceEntity(153U);
    msg.setDestination(20480U);
    msg.setDestinationEntity(194U);
    msg.op = 167U;
    msg.list.assign("RERAPXYVJVRAGLNBGVGAFDUHRCDTJUQKEFQICMLIUMROIZLTCNGDQXASDODIYSDEBHYKWXZNATFLD");

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
    msg.setTimeStamp(0.3797810289390031);
    msg.setSource(36996U);
    msg.setSourceEntity(52U);
    msg.setDestination(2355U);
    msg.setDestinationEntity(11U);
    msg.op = 133U;
    msg.list.assign("NDRWEHNZXCQPEIKLNIDWBDSQQGKOSHBWMIWEEJIDXJDTTVIOHHJALMNAVCWBJJFQZLDFRBPLWUBGWRMXVNYKFRHELYILXBBJPYYKFQCVPVHFRTPKYELVAJFTNUMUXSSEZQUZCPGRMSAKNCKVZAFUKJOIQRWOCLXATUTFHNUQASQIKUCNTGRZTZGGMJRMABLGRGPYLZOXZQXPOSAVBEEUCYMXDAYWXMH");

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
    msg.setTimeStamp(0.19534133866694203);
    msg.setSource(4105U);
    msg.setSourceEntity(241U);
    msg.setDestination(8349U);
    msg.setDestinationEntity(238U);
    msg.op = 68U;
    msg.list.assign("APGLOADJVJDTCVTTGBAQTXXKQHHQKNMESOFERKUUGPPPMRJTNHDUOMLSFUEKOGZFWBYXBDSOTGKNRLLMXGTENQAVBOFSJRYRVZM");

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
    msg.setTimeStamp(0.09880934160324628);
    msg.setSource(56204U);
    msg.setSourceEntity(98U);
    msg.setDestination(58471U);
    msg.setDestinationEntity(45U);
    msg.value = 42U;

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
    msg.setTimeStamp(0.9767460893147184);
    msg.setSource(15474U);
    msg.setSourceEntity(210U);
    msg.setDestination(5738U);
    msg.setDestinationEntity(248U);
    msg.value = 25U;

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
    msg.setTimeStamp(0.602154553839545);
    msg.setSource(31197U);
    msg.setSourceEntity(92U);
    msg.setDestination(33069U);
    msg.setDestinationEntity(14U);
    msg.value = 148U;

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
    msg.setTimeStamp(0.1063263531548484);
    msg.setSource(52781U);
    msg.setSourceEntity(175U);
    msg.setDestination(31458U);
    msg.setDestinationEntity(122U);
    msg.consumer.assign("PCBIKLOZVZCTBCTUJJUZAKNKGHGTSBVFAGVVUTIRQWOBPICIPEUIRJAOAGYDROVYQSJHQTLCMMTGQBMMSANECVFFNHWNXWZHMWILLSQCWKFJCIADDSKYXSOSKQBXYRUQWRKTLNIEMNJEXGJBKUH");
    msg.message_id = 14114U;

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
    msg.setTimeStamp(0.3011137343564635);
    msg.setSource(28159U);
    msg.setSourceEntity(57U);
    msg.setDestination(51693U);
    msg.setDestinationEntity(19U);
    msg.consumer.assign("QCAZVDASUUPZHIGLABIIIANQGTXQUUNELVRVTEVACTVMHCFNFSFGXHOBYSPVXFWPZGIKDDONPFUYOHDKTYHZTFGPJNQOKWRVMMXMPMWMORCQELJFJDSOQWHEUBYWMOEGXJLXABUQIPJNTS");
    msg.message_id = 58099U;

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
    msg.setTimeStamp(0.25300537655204425);
    msg.setSource(62090U);
    msg.setSourceEntity(184U);
    msg.setDestination(17608U);
    msg.setDestinationEntity(69U);
    msg.consumer.assign("CVOUFUBNDUYZYFHTHWIJRACKDTOJGSCCAHPWQPEDPTPAMPJZNTVUXZPXPVFXSMIDMZBXSEUFQRFNEAJZDARLEWBKKQFEVWGSMIYMEDGQHINWRAX");
    msg.message_id = 56930U;

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
    msg.setTimeStamp(0.8443001247705311);
    msg.setSource(37924U);
    msg.setSourceEntity(32U);
    msg.setDestination(43674U);
    msg.setDestinationEntity(213U);
    msg.type = 89U;

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
    msg.setTimeStamp(0.7578083473643422);
    msg.setSource(25392U);
    msg.setSourceEntity(247U);
    msg.setDestination(12916U);
    msg.setDestinationEntity(191U);
    msg.type = 118U;

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
    msg.setTimeStamp(0.26301519160493037);
    msg.setSource(23124U);
    msg.setSourceEntity(233U);
    msg.setDestination(39340U);
    msg.setDestinationEntity(226U);
    msg.type = 239U;

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
    msg.setTimeStamp(0.6370266417605385);
    msg.setSource(62164U);
    msg.setSourceEntity(242U);
    msg.setDestination(16968U);
    msg.setDestinationEntity(126U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.33364293994204575);
    msg.setSource(46491U);
    msg.setSourceEntity(160U);
    msg.setDestination(48151U);
    msg.setDestinationEntity(136U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.8273714204233368);
    msg.setSource(23489U);
    msg.setSourceEntity(98U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(201U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.03128062126930642);
    msg.setSource(22922U);
    msg.setSourceEntity(100U);
    msg.setDestination(5576U);
    msg.setDestinationEntity(244U);
    msg.total_steps = 133U;
    msg.step_number = 191U;
    msg.step.assign("RGJVLVNCXLHBHROZMTJSREFVIYKFRMJEMEHXYUKKLNWSGBIEDLCEZGODLHVKMSPYFIWLWXRJDUZRICAXTAMDMYUZESTETNPVEVGVZBBWPHOZCYSJSNAREWQOZTNUQVXFJDMIAABCHJWBWPHKWVUUWSGUQDGUZFMQQPNPSAXYBOLBZYQCDCQALCHFFSIYVBQMMTQLBYSKOIONICD");
    msg.flags = 192U;

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
    msg.setTimeStamp(0.975649824831917);
    msg.setSource(45240U);
    msg.setSourceEntity(59U);
    msg.setDestination(60376U);
    msg.setDestinationEntity(36U);
    msg.total_steps = 114U;
    msg.step_number = 229U;
    msg.step.assign("NKSNPFCIZCJIXVWTAZQUJCGHDSTRVPBUPBXQGUGIRGQPNOZVUNVAEWKGSIBYPOAFYDTCKDLERXFA");
    msg.flags = 207U;

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
    msg.setTimeStamp(0.5481836849584841);
    msg.setSource(44814U);
    msg.setSourceEntity(163U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(150U);
    msg.total_steps = 24U;
    msg.step_number = 177U;
    msg.step.assign("ZLHRWAZSJTFKMVSBFBUMBXQTFLORXNYFVIAPVXENURUMVRQNBZNSLFGGGMNHOGVRQIFCDCKLOPMGGJVZYKBJCJAXTJZPQGVEJXEZWG");
    msg.flags = 162U;

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
    msg.setTimeStamp(0.27723541674497654);
    msg.setSource(23905U);
    msg.setSourceEntity(12U);
    msg.setDestination(1826U);
    msg.setDestinationEntity(14U);
    msg.state = 113U;
    msg.error.assign("JLXUXACSEKVJHILGIXKDDURCMEGJDBDPXBRKARFLNNQWDVTNBPJXSZKHZQIHSVTTNHFLVIMUVJCGYOFTDPVCMXQAZSEGMMWJBFRTMWSUFKRTXELLSYTCMZZYQNXOOBRQJJJMGGLUIEBKTVOZCEUZARWCHYDKBGEDYNBQVGPQBIFHSWLELTRUEMNZIYPAHYYQMQRRDKXHGFVOSKFUOAYNNXADHWICIFOEASPCPTNPQPYAOOKHVFWPO");

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
    msg.setTimeStamp(0.8432013299147647);
    msg.setSource(55049U);
    msg.setSourceEntity(124U);
    msg.setDestination(959U);
    msg.setDestinationEntity(82U);
    msg.state = 61U;
    msg.error.assign("KBUTATFKRGEPCDAPLXRLLZZOHUNBRZIWCUSWHJWPFLEPMYZLHXNKWYWYQIKGEPFSBXUTTUCIELFOOQWOBGHPVQZGNEXAZHBFDCCRGESMKREBPVJDSDZJABYOQRXLKONFVVSXPCJXGMJ");

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
    msg.setTimeStamp(0.2624530939946699);
    msg.setSource(44468U);
    msg.setSourceEntity(242U);
    msg.setDestination(9346U);
    msg.setDestinationEntity(154U);
    msg.state = 16U;
    msg.error.assign("DXFXGWTNFYCDMFYTEFGIZHPBSPXQKNPGBVNTYRIKNHGJMITXUCCVJPWTVTDFWKWDCXBYYLGNU");

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
    msg.setTimeStamp(0.43082725851553916);
    msg.setSource(39181U);
    msg.setSourceEntity(205U);
    msg.setDestination(69U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.2543946994366705);
    msg.setSource(21261U);
    msg.setSourceEntity(241U);
    msg.setDestination(12766U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.39133153506205265);
    msg.setSource(62984U);
    msg.setSourceEntity(130U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.7327453624767802);
    msg.setSource(51471U);
    msg.setSourceEntity(13U);
    msg.setDestination(51124U);
    msg.setDestinationEntity(50U);
    msg.op = 111U;
    msg.speed_min = 0.9343208943914896;
    msg.speed_max = 0.033182684687016795;
    msg.long_accel = 0.28844137541362536;
    msg.alt_max_msl = 0.8755913499747457;
    msg.dive_fraction_max = 0.0852439668807935;
    msg.climb_fraction_max = 0.36857540455584126;
    msg.bank_max = 0.21698692338415704;
    msg.p_max = 0.5117653797964893;
    msg.pitch_min = 0.30073679540338805;
    msg.pitch_max = 0.08374380898984601;
    msg.q_max = 0.23527015876135549;
    msg.g_min = 0.6147343120021045;
    msg.g_max = 0.3390111308580226;
    msg.g_lat_max = 0.985004844746672;
    msg.rpm_min = 0.048031899268987766;
    msg.rpm_max = 0.05103489675529882;
    msg.rpm_rate_max = 0.315959912473477;

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
    msg.setTimeStamp(0.009733904871123689);
    msg.setSource(40753U);
    msg.setSourceEntity(70U);
    msg.setDestination(24220U);
    msg.setDestinationEntity(157U);
    msg.op = 210U;
    msg.speed_min = 0.1000678536353784;
    msg.speed_max = 0.3283497985235736;
    msg.long_accel = 0.36509574755178076;
    msg.alt_max_msl = 0.8475235875009967;
    msg.dive_fraction_max = 0.3285874925880251;
    msg.climb_fraction_max = 0.5751374127862803;
    msg.bank_max = 0.754316556442588;
    msg.p_max = 0.7417660167715066;
    msg.pitch_min = 0.6690258768788255;
    msg.pitch_max = 0.035463975132742576;
    msg.q_max = 0.03722642202776505;
    msg.g_min = 0.2706870125880656;
    msg.g_max = 0.4816738521918219;
    msg.g_lat_max = 0.8336845052799646;
    msg.rpm_min = 0.13454909709604446;
    msg.rpm_max = 0.20941708723712438;
    msg.rpm_rate_max = 0.7060009861274745;

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
    msg.setTimeStamp(0.06391750700596077);
    msg.setSource(45942U);
    msg.setSourceEntity(56U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(151U);
    msg.op = 170U;
    msg.speed_min = 0.39141921185794826;
    msg.speed_max = 0.0700122165261019;
    msg.long_accel = 0.6187519473798349;
    msg.alt_max_msl = 0.36687244945081554;
    msg.dive_fraction_max = 0.4627430597686156;
    msg.climb_fraction_max = 0.7919694775663811;
    msg.bank_max = 0.8596195568923679;
    msg.p_max = 0.4140917133198415;
    msg.pitch_min = 0.5362348759449969;
    msg.pitch_max = 0.39944751678871215;
    msg.q_max = 0.17463927388447165;
    msg.g_min = 0.01745694664760733;
    msg.g_max = 0.8891883782220081;
    msg.g_lat_max = 0.1598852935163232;
    msg.rpm_min = 0.5405253888663175;
    msg.rpm_max = 0.9945799969716872;
    msg.rpm_rate_max = 0.5480597561686461;

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
    msg.setTimeStamp(0.8497707462053486);
    msg.setSource(24450U);
    msg.setSourceEntity(249U);
    msg.setDestination(14632U);
    msg.setDestinationEntity(63U);
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 189U;
    tmp_msg_0.lat = 0.06956880445042168;
    tmp_msg_0.lon = 0.22158055001931298;
    tmp_msg_0.x = 0.34010372196985683;
    tmp_msg_0.y = 0.25338591630384233;
    tmp_msg_0.z = 0.46672803099018534;
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
    msg.setTimeStamp(0.10420523570943718);
    msg.setSource(42506U);
    msg.setSourceEntity(167U);
    msg.setDestination(41244U);
    msg.setDestinationEntity(10U);
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 63883U;
    tmp_msg_0.lat = 0.9432137804872059;
    tmp_msg_0.lon = 0.8524481065182329;
    tmp_msg_0.speed = 0.5942179571440517;
    tmp_msg_0.speed_units = 163U;
    tmp_msg_0.custom.assign("AWYUQTVEIZHARDJBTXGVHHRPAMBAQZANTLMRXZSNBAUZODQKYOBHTSDPNVRKCYSPXVBTOIQWMKFPJSEIKJCFYSADVECJMBVCYMPRHNEIKUXHZBNKVZRGEPXGKJKEDPOVJWYFLKUMITFSDLZLTCXMAOZLDIFKDEJUCLJLWBGFIJQUNOPNSLQWMEDAFVNQGURNCLFWCZUTLSAPWRXWGTMYPCHQEGUGOIQFTGYRXSHBOWFH");
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
    msg.setTimeStamp(0.6233855151985176);
    msg.setSource(43968U);
    msg.setSourceEntity(145U);
    msg.setDestination(4877U);
    msg.setDestinationEntity(124U);
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 53609U;
    tmp_msg_0.lat = 0.4174648225230946;
    tmp_msg_0.lon = 0.31355698580120284;
    tmp_msg_0.z = 0.7241035894700261;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.5695045252017804;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.bearing = 0.20897294443022474;
    tmp_msg_0.width = 0.8590168267113852;
    tmp_msg_0.direction = 89U;
    tmp_msg_0.custom.assign("LPOOFRXMZEMEDZQTBWDWFRNQRBLUHMEETRMZQWAIFHLYUUGEQG");
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.7238403335956756);
    msg.setSource(53694U);
    msg.setSourceEntity(63U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(171U);
    msg.value = 0.29790377662630674;

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
    msg.setTimeStamp(0.7384641126881815);
    msg.setSource(47858U);
    msg.setSourceEntity(233U);
    msg.setDestination(3098U);
    msg.setDestinationEntity(174U);
    msg.value = 0.6237345573802638;

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
    msg.setTimeStamp(0.8291269631314608);
    msg.setSource(62280U);
    msg.setSourceEntity(190U);
    msg.setDestination(3919U);
    msg.setDestinationEntity(193U);
    msg.value = 0.8524786365061685;

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
    msg.setTimeStamp(0.18371217487037272);
    msg.setSource(64279U);
    msg.setSourceEntity(15U);
    msg.setDestination(18703U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.31901829452423436;
    msg.lon = 0.2494971522957914;
    msg.height = 0.6346749416544847;
    msg.x = 0.20304697537891858;
    msg.y = 0.21313614707382977;
    msg.z = 0.5371162869748819;
    msg.phi = 0.8540141068278337;
    msg.theta = 0.9190764512499063;
    msg.psi = 0.934660969247088;
    msg.u = 0.3096127004576035;
    msg.v = 0.26021448413746207;
    msg.w = 0.9785004452765893;
    msg.p = 0.6995372631836806;
    msg.q = 0.7161911175059305;
    msg.r = 0.7563664105737237;
    msg.svx = 0.9230371467966086;
    msg.svy = 0.05289515500519226;
    msg.svz = 0.8278624731960099;

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
    msg.setTimeStamp(0.12469553576232484);
    msg.setSource(28510U);
    msg.setSourceEntity(50U);
    msg.setDestination(31111U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.8200591996085672;
    msg.lon = 0.866525584028847;
    msg.height = 0.2583104055435108;
    msg.x = 0.4959614145415374;
    msg.y = 0.12437914307270137;
    msg.z = 0.7630839801266751;
    msg.phi = 0.33294892913988305;
    msg.theta = 0.9024908983792245;
    msg.psi = 0.051383996725936854;
    msg.u = 0.5962206325361062;
    msg.v = 0.9917120997743841;
    msg.w = 0.8969082389323272;
    msg.p = 0.09780651671184226;
    msg.q = 0.39641701825444253;
    msg.r = 0.7273029895973322;
    msg.svx = 0.3823697720019765;
    msg.svy = 0.9207492648372259;
    msg.svz = 0.6076156896853706;

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
    msg.setTimeStamp(0.19831383468972075);
    msg.setSource(21207U);
    msg.setSourceEntity(130U);
    msg.setDestination(55234U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.0990870568615494;
    msg.lon = 0.8529345912814625;
    msg.height = 0.7822870496938885;
    msg.x = 0.8624572987292586;
    msg.y = 0.47448836080232626;
    msg.z = 0.5997382386703372;
    msg.phi = 0.14284202312674987;
    msg.theta = 0.1870067945215026;
    msg.psi = 0.4456482330412065;
    msg.u = 0.7754143119194885;
    msg.v = 0.14891585268226415;
    msg.w = 0.954754195278598;
    msg.p = 0.8485818534901527;
    msg.q = 0.9308723286528777;
    msg.r = 0.2128003690688327;
    msg.svx = 0.8826962532370172;
    msg.svy = 0.9224423858229016;
    msg.svz = 0.9833041954098376;

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
    msg.setTimeStamp(0.4132576277013217);
    msg.setSource(15488U);
    msg.setSourceEntity(180U);
    msg.setDestination(23849U);
    msg.setDestinationEntity(54U);
    msg.op = 91U;
    msg.entities.assign("YJWRKPPMCVDOJRKMCELTRIKNGNIACXTTDMXEGCXKIOVLGXAQSYYYGWVVCFEGFHMAPQHSMRNLEE");

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
    msg.setTimeStamp(0.3556737928259539);
    msg.setSource(47168U);
    msg.setSourceEntity(219U);
    msg.setDestination(15844U);
    msg.setDestinationEntity(19U);
    msg.op = 24U;
    msg.entities.assign("BDSXLWSYBYCRMUUBDDENYRENFZKWFTLAIGAENLUSHYSHVOYQTOTXWCVOTDYHFTXDKUWCMVPUGGCQFRMRMPJRRAWBAKKPXAVINPOSXRHNFUWHCEZNWJPIIEOZRQEQSSCIZTPKWGHBDBG");

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
    msg.setTimeStamp(0.6870063738417861);
    msg.setSource(47159U);
    msg.setSourceEntity(187U);
    msg.setDestination(64798U);
    msg.setDestinationEntity(140U);
    msg.op = 141U;
    msg.entities.assign("JRFEMCCPTSWGLKANXECJGHBXGWFIOGDB");

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
    msg.setTimeStamp(0.3219210061911332);
    msg.setSource(19570U);
    msg.setSourceEntity(82U);
    msg.setDestination(61620U);
    msg.setDestinationEntity(225U);
    msg.type = 164U;
    msg.speed = 35577U;
    const signed char tmp_msg_0[] = {31, 30, 124, 80, -27, 20, -104, 70, -42, 122, 114, 69, 92, 116, -112, -114, -39, -12, 117, -17, -2, -45, -89, -4, -33, -56, 57, 64, 38, 68, 33, 105, 81, -28, 46, -84, -43, 18};
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
    msg.setTimeStamp(0.12500774357345867);
    msg.setSource(39454U);
    msg.setSourceEntity(175U);
    msg.setDestination(2758U);
    msg.setDestinationEntity(226U);
    msg.type = 75U;
    msg.speed = 41283U;
    const signed char tmp_msg_0[] = {124, -43, -9, 34, 115, -117, -62, -70, -25, 50, 49, -71, 86, 23, 29, -96, 55, -40, 4, -82, -77, 34, -126, 48, 118, -16, -44, 5, 42, -88, -79, 48, -64, 15, 120, 76, -18, 114, 82, 14, 9, 120, -118, -12, -125, -14, -120, -76, -75, -123, 66, 29, -97, -86, 62, -126, 103, -107, 15, -117, 0, 65, 45, -63, 0, 106, 81, -108, 51, -30, 95, 70, 73, 103, 43, -53, -95, -56, 108, 109, 114, 17, 121, 35, -82, -96, -60, 70, 69, 64, -79, -64, 53, 98, -67, -24, -67, -115, 53, 70, 34, 15, 72, -126, -30, -97, 63, -72, -86, -17, -74, 63, -89, 48, -87, 99, -110, 29, -83, 35, -72, -75, 87, 88, 2, -11, -44, 73, 31, -13, -1, 25, -104, -58, 0, 10, 14, -5, 58, -48, -9, -106, -83, -57, -103, 81, 75, 40, -99, 53, -103, 57, -118, 57, -20, -77, -65, 83, 104, -121, -24, 65, 87, 79, -4, -89, 119, -23, -63, -108, -37, 117, -20, 42, -19, 117, 17, -104, 18, 46, -103, -102, -3, -45, -16, -35, -94, 1, -33, 82, 5, -43, -63, 124, -31, -33, 115, -97, 25, 121, -103, 68, -31};
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
    msg.setTimeStamp(0.6672037841000161);
    msg.setSource(51197U);
    msg.setSourceEntity(181U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(117U);
    msg.type = 83U;
    msg.speed = 65430U;
    const signed char tmp_msg_0[] = {-93, -56, -28, -22, 87, 1, -118, 67, 2, -84, -53, -104, -24, 41, -54, -35, -11, 88, -19, 75, 4, -43, 79, 3, 108, -70, -126, -87, 56, -28, 78, 59, 93, -84, -97, 46, 41, -44, 46, -10, 91, 67, -12, 98, -119, -21, 80, 32, -86, -50, 69, 126, 117, 116, 111, -117, 125, -12, 50, 121, 59, -78, 65, -123, -88, 15, -76, 79, -32, -33, -78, 17, 96, 2, 59, 51, 70, 37, 113, 42, 75, -30, 49, -29, 15, -20, 30, 34, -76, -113, 94, -84, -84, 107, 62, -128, 17, -66, -41, -74, 66, -60, -29, -11, 24, 120, 48, -113, -4, 30, 119, 22, -66, -39, -5, 81, -38, -73, -93, -88, 21, -87, 79, 7, -100, -121, 85, 113, 18, 86, 74, 62, -117, 50, 118, -121, -90, -76, -51, 26, -115, 5, -40, 57, 42, 79, 43, 126, -33, -22, -118, 0, -83, -17, -80, -57, 97, 108, -51, 115, -45, -109, 105, 20, -31};
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
    msg.setTimeStamp(0.7214151338221745);
    msg.setSource(26761U);
    msg.setSourceEntity(198U);
    msg.setDestination(29714U);
    msg.setDestinationEntity(147U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.06126601149291255;
    msg.bank2p_pgain = 0.6385108144350584;

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
    msg.setTimeStamp(0.9013504927298516);
    msg.setSource(60789U);
    msg.setSourceEntity(43U);
    msg.setDestination(9673U);
    msg.setDestinationEntity(16U);
    msg.op = 165U;
    msg.tas2acc_pgain = 0.2421181474862003;
    msg.bank2p_pgain = 0.36217881687627884;

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
    msg.setTimeStamp(0.5383646504295196);
    msg.setSource(49106U);
    msg.setSourceEntity(239U);
    msg.setDestination(6640U);
    msg.setDestinationEntity(96U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.8922391031162096;
    msg.bank2p_pgain = 0.07244809208150149;

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
    msg.setTimeStamp(0.6095371349662634);
    msg.setSource(51618U);
    msg.setSourceEntity(97U);
    msg.setDestination(8475U);
    msg.setDestinationEntity(179U);
    msg.available = 3230556666U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.22355458664822592);
    msg.setSource(57955U);
    msg.setSourceEntity(124U);
    msg.setDestination(49341U);
    msg.setDestinationEntity(181U);
    msg.available = 3646918436U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.8880238383211146);
    msg.setSource(31132U);
    msg.setSourceEntity(233U);
    msg.setDestination(48180U);
    msg.setDestinationEntity(87U);
    msg.available = 2802592246U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.5946294740198893);
    msg.setSource(31374U);
    msg.setSourceEntity(123U);
    msg.setDestination(2876U);
    msg.setDestinationEntity(193U);
    msg.op = 166U;
    msg.snapshot.assign("AFTBQLJKIWZKOPBMRHLHJWFETAMCJHBTLYWMDCKPALWYPRBCEIMQKRDKHZSXWXRUGXACUYSGFZXIODLOTGBSJVCPNOMEWUIUFIFVVGJNZUGVNVOZUEBOGSFBJNMRJMLDFYX");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.4320691218706074;
    tmp_msg_0.converg = 0.265603186043903;
    tmp_msg_0.turbulence = 0.9806240321818199;
    tmp_msg_0.possimmon = 203U;
    tmp_msg_0.commmon = 58U;
    tmp_msg_0.convergmon = 120U;
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
    msg.setTimeStamp(0.15086955903165467);
    msg.setSource(4001U);
    msg.setSourceEntity(52U);
    msg.setDestination(6750U);
    msg.setDestinationEntity(115U);
    msg.op = 208U;
    msg.snapshot.assign("XJYKFXDMXRNPHOFAEALTMPLABXUGIRQKEOKYUSHUXOTKEPERIAQSBRQFETKMVNBSQFGKHBSBLCUCBTNDECWNJHSLCWVNVWCYGMBHUWMILIZORUALDJTQGFWCNWPAXJHBLUNUTYJEMCSIVQGRHHVPSZGPBZFUWGHLIDOPYQDSNVBDGAQMRJ");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 48734U;
    tmp_msg_0.flags = 219U;
    tmp_msg_0.lat = 0.3806711491042203;
    tmp_msg_0.lon = 0.9898991713071449;
    tmp_msg_0.start_z = 0.566028644059004;
    tmp_msg_0.start_z_units = 191U;
    tmp_msg_0.end_z = 0.1447933625182134;
    tmp_msg_0.end_z_units = 162U;
    tmp_msg_0.radius = 0.5045077731101769;
    tmp_msg_0.speed = 0.6483457772193589;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.custom.assign("FTUOPLPUSHXICSKKADHZXXNBPYRUOQEWFNOOCJDNKPRNHPWGTFFREPWOIBJWLMEFYDSQMBABHHZZDZSYYUGENTMNMKSYDOTRDAPKPHMALOHLOKDBIILQHXWJIJKRQKACMBVLVUVTWICMRPTQEAIZCIQXFSVHAVWLQSGJGXDGLGRFBNMUCCNEXJYWOSSMVGRKLNFEGSCTZBQZUAQYVIYJVUGJDVDYPCCXVEBETZJKQFXGOTWJIZBUHULAM");
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
    msg.setTimeStamp(0.7540586552944126);
    msg.setSource(19531U);
    msg.setSourceEntity(238U);
    msg.setDestination(16096U);
    msg.setDestinationEntity(97U);
    msg.op = 123U;
    msg.snapshot.assign("AWVNYTQWCRAKLNGIWCRVAGMIVIMZRNGHQIKVZUMXNSBELFUHOBAWWOAKDOQMMSYBTIXNSEROVKLMPEEKIJEZGPSTKLVYHZBPKBOQRBRJFCLJFZSRDDVORJBELZJHHTJYGGPULJDNZFOMCXBIDYIXARVIUMPCSPDDKJ");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("BXMETRVBDPUWZPMWQVDATLNBYLNJZBHJWYMJNLVRUJMCCDQOZBCOAVHQRUNPZYTHHWWVTKLNCNROSSFAHUSKECLXZNGTJFUSOXXFUGFEKSPGELAXCDHBOAMNXJANIZDJMBHYEZPLFUOISXTICUVQZHPDBRUBEXYITQKGVAAHGJOTKQNYTHYXSPUFSKMSIJGEKCIIVOQOGYQDIYEDKGCZ");
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
    msg.setTimeStamp(0.1511722874203778);
    msg.setSource(15660U);
    msg.setSourceEntity(84U);
    msg.setDestination(34713U);
    msg.setDestinationEntity(51U);
    msg.op = 26U;
    msg.name.assign("PPGJVZKPFBXFNHOOUUVZRXCGBIKZBBAKBSIMAENNRXDHCHYM");

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
    msg.setTimeStamp(0.719296289601734);
    msg.setSource(20836U);
    msg.setSourceEntity(205U);
    msg.setDestination(12816U);
    msg.setDestinationEntity(129U);
    msg.op = 106U;
    msg.name.assign("CCXIDKFNGPYODBVJEKSXJLMQMKPTUWCNWMSJPLEIZSOAYHKJZUGMXMIOQNPRSGYTWOZYOQHRZWRRPICAVTYEPHWFGNPYHHLYDWLTOCLOKIQAVBWFZMUDIMUDNBXWVDNBTKYVANXXFLFIAAATFV");

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
    msg.setTimeStamp(0.3842689081076529);
    msg.setSource(62267U);
    msg.setSourceEntity(247U);
    msg.setDestination(36992U);
    msg.setDestinationEntity(237U);
    msg.op = 211U;
    msg.name.assign("DIIZGVHRSKQPSWDOWGPLORRZHIDA");

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
    msg.setTimeStamp(0.9882461126123778);
    msg.setSource(44184U);
    msg.setSourceEntity(244U);
    msg.setDestination(11420U);
    msg.setDestinationEntity(24U);
    msg.type = 183U;
    msg.htime = 0.4576890812395502;
    msg.context.assign("AASSVFJEDNXCNSUXNTRTWDGLRVZCWFKXJMLXIYICJNHECMYLAQBMBUZAIKYRFHDREIUMODDVTKDAMCYOYBHNOJMZBPERITPGTJRTHNHPNVKWGTJYYLSCPMWAWGXFQZOSSOGQIIEGFLRLFGZTOVDNQWPVHSDWXWRFVCZYQHQEVKAEUSWGZBBJAPU");
    msg.text.assign("NMDKTMBJEXGPWRTSCVMQZZLRZNPNCYZWOCUEVYGVBUZXHUHDSNJXOFRBBO");

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
    msg.setTimeStamp(0.4113552264447464);
    msg.setSource(13971U);
    msg.setSourceEntity(129U);
    msg.setDestination(29931U);
    msg.setDestinationEntity(57U);
    msg.type = 47U;
    msg.htime = 0.30610489228219706;
    msg.context.assign("JIARHDICRXLGNJCGTDJASMAFUUGERZWEBBJNWECRCXHPIUZVYFNJRDXDNHAIBUGMAWOHRLZGYEJJTHTTIKFRVYYQLRONVOSTXLBYCLDNEQQWFABXVMKYFOUSLZZQZWOKUPGEVDKYPDESLAIWLQCZUPGUNQMKHAXOQDYKSZBPPMPMTMKMFKPCWLBDEAFGRJUFYH");
    msg.text.assign("WLDRFJJXVBLBHTSHRVHOHKBCFMNNMKDNJEVUFQLGBIZCBMVGKMJDIRLUTFSFPQODSFPASSRTMMUYZCJOBUXLQTAFXATIGQRGYJPFIUXSLBYXJWSLWVIAXKURXZAVTHILCZETYPWCEAXZEGTWIAPNRYNKGQZZGQRHAHDMDZLQMIHOYEXJG");

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
    msg.setTimeStamp(0.378434303155885);
    msg.setSource(58161U);
    msg.setSourceEntity(124U);
    msg.setDestination(65277U);
    msg.setDestinationEntity(188U);
    msg.type = 221U;
    msg.htime = 0.5965633507171235;
    msg.context.assign("UJAKMRFFHVIZOKLUCFRJWPAGNMVPHJD");
    msg.text.assign("UCOHDNDJWSSUPMIILZPSWWYNRJYUZFCETXKJVDNJNRLSQNJZVDRPMJWKTYRLOICFXLDCKVJZKNXBPIZTDEKMJPFQOZFBGCTRYGAIEKMXTLGHROFLXKCFPVVXAMHWOBXIDVOCTZBHEWWRDUEITHCGZQTDYKBGYVNZYSOQQEQUOUAYEGXFXPLRQ");

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
    msg.setTimeStamp(0.6141276537178421);
    msg.setSource(1421U);
    msg.setSourceEntity(33U);
    msg.setDestination(26553U);
    msg.setDestinationEntity(248U);
    msg.command = 163U;
    msg.htime = 0.7080504840373151;

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
    msg.setTimeStamp(0.9467180887591732);
    msg.setSource(37418U);
    msg.setSourceEntity(97U);
    msg.setDestination(14373U);
    msg.setDestinationEntity(102U);
    msg.command = 81U;
    msg.htime = 0.9465170128783313;

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
    msg.setTimeStamp(0.11832130860188772);
    msg.setSource(41733U);
    msg.setSourceEntity(60U);
    msg.setDestination(9035U);
    msg.setDestinationEntity(1U);
    msg.command = 213U;
    msg.htime = 0.1217419972155509;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 20U;
    tmp_msg_0.htime = 0.818393673459152;
    tmp_msg_0.context.assign("AFIHGDOGEUJCNMLDJEDZTGXFKXKKSIJDSROOPTXQSYSSXQAHXIMDFBLPUQJGMDWLPOTWETQPSZCYUYHGBMKCURHZWBMFKVHZNYHCSHMIKGGHNFTFAIZCOXUFRJPUPYIQBVNAVGDGQYEZTXXANBFQYLMLODOEJZZERPIGLIQFAVCNVANVBVXTRLTWCWKECRBASWNTTYNZVWMLVRJPRUULVIJASRBQJIBKW");
    tmp_msg_0.text.assign("GWADHYJOCKSWGRNXMYSZTLZZELOHNAIXMGFPOMOMCHQVLEKTWWEKHPAOBIEVAUVKEVYDR");
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
    msg.setTimeStamp(0.7720901002674292);
    msg.setSource(39745U);
    msg.setSourceEntity(165U);
    msg.setDestination(58076U);
    msg.setDestinationEntity(251U);
    msg.op = 250U;
    msg.file.assign("UZYLDNXDTSBPCDZNOOBERKRWEIQWWKVUSQJTDJIWLGMIEHIQOXNKZCKYFYHMMEYHPAECPYYIOTFPECUPJWQAABGFURFFCNCLXVPSJZBZZARQCYMGHDMILKIXMXGFDRGYKVTSTAOXXJSZJNAVEJTBBPFLYNSOLHQNTTUZCEFSXHO");

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
    msg.setTimeStamp(0.8523578511862508);
    msg.setSource(16577U);
    msg.setSourceEntity(7U);
    msg.setDestination(23446U);
    msg.setDestinationEntity(161U);
    msg.op = 188U;
    msg.file.assign("GAGYAOSRSLVBNOEFRVQMHVICQFZNSJQPAMAYBIDXDEEJHOPZALSMOWLDALTRWZVFZMCZ");

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
    msg.setTimeStamp(0.3801375924653312);
    msg.setSource(5192U);
    msg.setSourceEntity(18U);
    msg.setDestination(49215U);
    msg.setDestinationEntity(74U);
    msg.op = 242U;
    msg.file.assign("JIBRCGJBDCBQQDO");

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
    msg.setTimeStamp(0.9261293132594631);
    msg.setSource(26926U);
    msg.setSourceEntity(23U);
    msg.setDestination(53659U);
    msg.setDestinationEntity(45U);
    msg.op = 121U;
    msg.clock = 0.3635639087318605;
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
    msg.setTimeStamp(0.48257935160825627);
    msg.setSource(28841U);
    msg.setSourceEntity(227U);
    msg.setDestination(23522U);
    msg.setDestinationEntity(167U);
    msg.op = 235U;
    msg.clock = 0.8896481192314301;
    msg.tz = -11;

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
    msg.setTimeStamp(0.5960843167975627);
    msg.setSource(11493U);
    msg.setSourceEntity(1U);
    msg.setDestination(14720U);
    msg.setDestinationEntity(1U);
    msg.op = 227U;
    msg.clock = 0.9618106455878981;
    msg.tz = -116;

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
    msg.setTimeStamp(0.5855683617857679);
    msg.setSource(50548U);
    msg.setSourceEntity(210U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(64U);
    msg.conductivity = 0.11164113485884408;
    msg.temperature = 0.9181902601573979;
    msg.depth = 0.6057900098767096;

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
    msg.setTimeStamp(0.11830537556014697);
    msg.setSource(24378U);
    msg.setSourceEntity(111U);
    msg.setDestination(12456U);
    msg.setDestinationEntity(64U);
    msg.conductivity = 0.31083820910548643;
    msg.temperature = 0.3297429184572852;
    msg.depth = 0.3568851721242493;

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
    msg.setTimeStamp(0.7627708857611188);
    msg.setSource(46855U);
    msg.setSourceEntity(199U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(57U);
    msg.conductivity = 0.9583018588104886;
    msg.temperature = 0.8302400849722027;
    msg.depth = 0.8344189832503546;

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
    msg.setTimeStamp(0.7406132451753101);
    msg.setSource(35041U);
    msg.setSourceEntity(149U);
    msg.setDestination(22735U);
    msg.setDestinationEntity(116U);
    msg.altitude = 0.5410814102683811;
    msg.roll = 30428U;
    msg.pitch = 10588U;
    msg.yaw = 27376U;
    msg.speed = 19333;

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
    msg.setTimeStamp(0.24834869839430507);
    msg.setSource(30333U);
    msg.setSourceEntity(157U);
    msg.setDestination(32443U);
    msg.setDestinationEntity(2U);
    msg.altitude = 0.405282342303782;
    msg.roll = 7292U;
    msg.pitch = 1383U;
    msg.yaw = 28702U;
    msg.speed = 8049;

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
    msg.setTimeStamp(0.2459350671863284);
    msg.setSource(27452U);
    msg.setSourceEntity(253U);
    msg.setDestination(30069U);
    msg.setDestinationEntity(238U);
    msg.altitude = 0.036475100883024414;
    msg.roll = 19537U;
    msg.pitch = 47207U;
    msg.yaw = 10349U;
    msg.speed = 32448;

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
    msg.setTimeStamp(0.36292621551733617);
    msg.setSource(56498U);
    msg.setSourceEntity(197U);
    msg.setDestination(8211U);
    msg.setDestinationEntity(194U);
    msg.altitude = 0.15535005416604863;
    msg.width = 0.7979831521111145;
    msg.length = 0.0743096520318246;
    msg.bearing = 0.9481103439350889;
    msg.pxl = -16966;
    msg.encoding = 148U;
    const signed char tmp_msg_0[] = {32, -70, 121, -88, -123, -128, -70, 32, 16, -94, 99, 101, 21, 8, -27, 76, 49, -72, -15, -44, -63, 76, 82, -43, -1, 53, -29, -36, -63, -97, 99, 106, -95, 118, -126, 1, -34, -11, -127, -24, 61, 107, -85, -86, 39, 121, -87, -11, -105, -10, -31, -17, 85, 5, 6, 114, 45, -25, 87, -16, 27, -89, -79, 70, 95, 58, -27, 28, 21, 77, -2, 8, -11, 74, 45, 110, -71, 53, -43, -30, -49, 5, -35, -77, 60, 99, -83, -46, 44, -93, -105, -64, 102, 123, 120, 66, -27, 125, -80, -11, 47, -68, -43, -100, -98, 122, -79, 58, -67, 26, 22, 14, -49, -30, -47, 40, 81, 49, -27, 3, 82, -30, -50, -3, -29, -12, -111, 105, 29, -110, -69, 66, -99, -58, -59, 6, -54, -10, -29, 125, 37, -52, -82, -48, -104, 10, -48, 26, 60, 31, 122, 100, 8, -111, 13, 38, -104};
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
    msg.setTimeStamp(0.39455369762930037);
    msg.setSource(58875U);
    msg.setSourceEntity(16U);
    msg.setDestination(976U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.7864217528251273;
    msg.width = 0.8741861264541511;
    msg.length = 0.11688916432286667;
    msg.bearing = 0.5035575875297172;
    msg.pxl = 20344;
    msg.encoding = 7U;
    const signed char tmp_msg_0[] = {-18, -35, -10, 30, -83, 118, 7, 11, -86, -7, -95, 65, 36, -77, 32, -28, 19, -89, 65, 84, -76, -55, 27, -81, -63, -63, 0, -112, -108, -17, -98, 23, -58, 72, -58, 107, 113, 93, 18, -63, -122, 97, 61, -31, 20, 52, -91, 99, -112, 61, -126, -26, 63, -72, -26, -57, 28, 117, 6, 74, -16, 62, 123, 13, -96, -124, 126, 24, 52, 28, 77, 78, -31, 93, 54, 66, 34, 111, 62, 11, -96, 6, -28, -115, -107, -116, 84, -116, -57, 82, -98, -97, -56, 121, -33, -49, 100, -95, -35, -94, 46, -8, 106, 2, -120, -55, -40, -81, 111, 6, -104, 15, -100, 80, 34, -9, 108, 93, -1, 38, -94, -127, 117, -9, -83, -104, 62, 1, -14, 6};
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
    msg.setTimeStamp(0.041754161149741065);
    msg.setSource(38318U);
    msg.setSourceEntity(208U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.8896655208602173;
    msg.width = 0.5355390587249251;
    msg.length = 0.24304464242575496;
    msg.bearing = 0.4232589921070866;
    msg.pxl = 26893;
    msg.encoding = 223U;
    const signed char tmp_msg_0[] = {-76, -65, -30, 123, 32, 29, 66, 58, 47, 113, 77, 24, -46, -6, 29, -85, -24, -1, -83, 81, 32, 25, -35, -101, -84, -75, 112, -27, -47, -40, 100, 96, 79, 62, -103, -111, -19, 49};
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
    msg.setTimeStamp(0.30515542192452216);
    msg.setSource(31173U);
    msg.setSourceEntity(37U);
    msg.setDestination(26788U);
    msg.setDestinationEntity(254U);
    msg.text.assign("LIYXFKKPURSYTMEUSLBBDUYLZDDMTCTRMAPSBFWICPMFGZAMDTETGBZZFDPHHJURSEJGYWCXIVFCTAIHAOKCQXZWEZAAMQOXTVXIMBJOJUKIFSZPYWXGPVIPFWQQPDRUYZABWEHQHOXVSFYBTXRMQEFLVYWKBCURKNATGLMO");
    msg.type = 218U;

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
    msg.setTimeStamp(0.3162002987354742);
    msg.setSource(61400U);
    msg.setSourceEntity(173U);
    msg.setDestination(46046U);
    msg.setDestinationEntity(96U);
    msg.text.assign("DSOZMPUKRQJZOLBCGQMD");
    msg.type = 170U;

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
    msg.setTimeStamp(0.5839346205700113);
    msg.setSource(12024U);
    msg.setSourceEntity(69U);
    msg.setDestination(10225U);
    msg.setDestinationEntity(117U);
    msg.text.assign("CMWVJMVLNHIYGOPEPJVJIPEZMSAGIDKZPOQVCJRPRATBTKFNLZLCHDHRNFMIDNSSXGWNBMTHVLBFLXUKPADYCNOUZUWTFFIWQRYZWLUPLYVLDCEZNJ");
    msg.type = 209U;

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
    msg.setTimeStamp(0.6797305752398389);
    msg.setSource(43606U);
    msg.setSourceEntity(115U);
    msg.setDestination(17142U);
    msg.setDestinationEntity(65U);
    msg.parameter = 99U;
    msg.numsamples = 14U;
    msg.lat = 0.7567113292212226;
    msg.lon = 0.8740346987919991;

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
    msg.setTimeStamp(0.426289737028698);
    msg.setSource(13192U);
    msg.setSourceEntity(42U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(251U);
    msg.parameter = 250U;
    msg.numsamples = 224U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 44213U;
    tmp_msg_0.avg = 0.8431751796444411;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.21258527048412845;
    msg.lon = 0.27071017862893876;

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
    msg.setTimeStamp(0.22456953422237091);
    msg.setSource(51459U);
    msg.setSourceEntity(166U);
    msg.setDestination(6471U);
    msg.setDestinationEntity(175U);
    msg.parameter = 248U;
    msg.numsamples = 208U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 5294U;
    tmp_msg_0.avg = 0.3579735534665286;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.25546945726025894;
    msg.lon = 0.35789469378474625;

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
    msg.setTimeStamp(0.26550167344586817);
    msg.setSource(37899U);
    msg.setSourceEntity(90U);
    msg.setDestination(12532U);
    msg.setDestinationEntity(89U);
    msg.depth = 52602U;
    msg.avg = 0.4071838529755163;

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
    msg.setTimeStamp(0.971879879922699);
    msg.setSource(57298U);
    msg.setSourceEntity(141U);
    msg.setDestination(27337U);
    msg.setDestinationEntity(82U);
    msg.depth = 61435U;
    msg.avg = 0.24689093788107863;

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
    msg.setTimeStamp(0.25414586731118505);
    msg.setSource(45545U);
    msg.setSourceEntity(230U);
    msg.setDestination(57473U);
    msg.setDestinationEntity(74U);
    msg.depth = 3964U;
    msg.avg = 0.7722020486781794;

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
    msg.setTimeStamp(0.7394978575634911);
    msg.setSource(24458U);
    msg.setSourceEntity(82U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.1965004705148098);
    msg.setSource(35740U);
    msg.setSourceEntity(72U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0011072791605601928);
    msg.setSource(53494U);
    msg.setSourceEntity(17U);
    msg.setDestination(23949U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.6345428508951524);
    msg.setSource(36401U);
    msg.setSourceEntity(157U);
    msg.setDestination(1101U);
    msg.setDestinationEntity(166U);
    msg.sys_name.assign("WGWXSPLFOVAFAKGXAZEKFKRDDHBAHOZLCFZEYGYIWAKOJLSIMFUPNHGAERYEPEDZBBJZLLTUGRGRPW");
    msg.sys_type = 186U;
    msg.owner = 18087U;
    msg.lat = 0.6430021237435439;
    msg.lon = 0.3372609646347835;
    msg.height = 0.2562559436174592;
    msg.services.assign("NRELZWOUDTMQRXUFPIHEHBENLIJCVXJIYSFNSMTOFNFSDYQADUBFWUZUDBLGGSFJLXZAOCWLHBDVQPREVVEGROKPKAYZQWEOPHAPJJPOJKQAYILFFGYYCTRUTVWZTWYUUQECKFX");

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
    msg.setTimeStamp(0.9488161810227325);
    msg.setSource(65520U);
    msg.setSourceEntity(157U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(94U);
    msg.sys_name.assign("LECNLLCXJEFUPUUTTSHLRUJESEPRZZVPQVJWNJOUYQQJRRBNAISYXIVBPKDXSSCUMXDRGUCAEHPVQYVFMHWZNYYTALOMOSVVMXRIBPJFATQFOBKIDLCWZTPODGYNKFONIVCGZENWGBNVSKSRZHLCJOAYFIMCRPEDZVATXFFDFYKHGAUQBANIFIKKGMKKLWMOZWNJAGTXDWBHMEXTSDJOUBBCSHMLQTGIPCHJWZADQELUGZG");
    msg.sys_type = 77U;
    msg.owner = 50344U;
    msg.lat = 0.6846818914068996;
    msg.lon = 0.8116788472212467;
    msg.height = 0.17947646665873052;
    msg.services.assign("JACZUVZIGNRTGZLGCQRNJJNMBHCGNVSNXJLEWWSUUOFNEUIPZXRAKDXVPFOKAJSZPMIGRIUKLOWHLKQSGVUOVOTQFCHXREOMHDEULFBKMMYPDTRKEYWKGFWJIDZQASRCTSCUDGNAYHTPQBMIAODTXYWRINBZJPMQLHXZTHDNPHSEUQFYCEZTY");

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
    msg.setTimeStamp(0.526445568741937);
    msg.setSource(52102U);
    msg.setSourceEntity(64U);
    msg.setDestination(5890U);
    msg.setDestinationEntity(115U);
    msg.sys_name.assign("GJAWOUGQRCDQSANYQLRBSTLZWVRRFXRHUXNWXRUYSKOYCCOMFBATTXLUDSZYCCKNFNFCMOKBINMGPFXWEQUESMMBTFBUYWBQPSKDZEBNMIJFP");
    msg.sys_type = 43U;
    msg.owner = 46909U;
    msg.lat = 0.5784336677155244;
    msg.lon = 0.26569578603412514;
    msg.height = 0.1696518173246313;
    msg.services.assign("NGWEYDKOHLOJWFEOQBIZGYSXAPWAFLSGFVQYGRBALIHUPRIRQTGNQZQMXIEIUFSMYBGVYTARZTIHWQNVKNEWIUBUWQHTMNXKDSZPCHMFFLJOPKYWGRMVJCJDBCFBGJALTIUDRDWMVRELYNASKSMFZPHVPZZAPGCCBCQUKUAKKBINCOJOAMSFPNIJXEHLXCOUUHYSAKTEEXZJBCDOWVMGVOXTBFDQHWD");

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
    msg.setTimeStamp(0.2437560801129588);
    msg.setSource(5832U);
    msg.setSourceEntity(73U);
    msg.setDestination(9249U);
    msg.setDestinationEntity(1U);
    msg.service.assign("GRXBPANDNVXCMFUNTCRHKVYTJGJSOHACYCARZZSKWQNSXYSOKRCRUWSPJKFWNKUTYKXEKMOCFTOHPWUJLNXILMQIBMPCGRDOAQFJSTYBELQHEZCVPLPBWWFMZUIZZSDOVQXHDILQEXDKYBBJLDWHQUOGHFZSFCIMMYXOSFJEAXNLWDYTBWUGLIAORNWIPTEPHRGBKHEHGEJMBBRVCGIAOAYVTDZTSU");
    msg.service_type = 123U;

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
    msg.setTimeStamp(0.08414755125994);
    msg.setSource(44132U);
    msg.setSourceEntity(160U);
    msg.setDestination(46451U);
    msg.setDestinationEntity(196U);
    msg.service.assign("JTPJDLJXAFBNNWQFANRWCCEHBOFGPPYNULYZVBFELJKZY");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.4924235656106658);
    msg.setSource(36280U);
    msg.setSourceEntity(17U);
    msg.setDestination(28491U);
    msg.setDestinationEntity(92U);
    msg.service.assign("WWKAZWLNYDNJYTADTOXVPRCBKWMJFDOOSIMTQKJSFQITONPCMEEGUXKLSTLHNYCGREGBDHKUOMFLSTEFPKYWNWIFBYHVCXD");
    msg.service_type = 97U;

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
    msg.setTimeStamp(0.09911454117250207);
    msg.setSource(61951U);
    msg.setSourceEntity(155U);
    msg.setDestination(48271U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5480282457736348;

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
    msg.setTimeStamp(0.1779007797813822);
    msg.setSource(23987U);
    msg.setSourceEntity(46U);
    msg.setDestination(16751U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8706678909049126;

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
    msg.setTimeStamp(0.07120927062397187);
    msg.setSource(10228U);
    msg.setSourceEntity(228U);
    msg.setDestination(23440U);
    msg.setDestinationEntity(177U);
    msg.value = 0.902708582909245;

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
    msg.setTimeStamp(0.9209532678635816);
    msg.setSource(31199U);
    msg.setSourceEntity(7U);
    msg.setDestination(8379U);
    msg.setDestinationEntity(3U);
    msg.value = 0.6799254107714823;

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
    msg.setTimeStamp(0.86167793557368);
    msg.setSource(51590U);
    msg.setSourceEntity(8U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(237U);
    msg.value = 0.11057571938293664;

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
    msg.setTimeStamp(0.2018942934201673);
    msg.setSource(39086U);
    msg.setSourceEntity(140U);
    msg.setDestination(8075U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7122688778593527;

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
    msg.setTimeStamp(0.7715776640873028);
    msg.setSource(16208U);
    msg.setSourceEntity(21U);
    msg.setDestination(37397U);
    msg.setDestinationEntity(97U);
    msg.value = 0.3927797810225412;

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
    msg.setTimeStamp(0.9750246788365312);
    msg.setSource(23693U);
    msg.setSourceEntity(65U);
    msg.setDestination(41433U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0655516015912283;

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
    msg.setTimeStamp(0.8319104594525009);
    msg.setSource(32851U);
    msg.setSourceEntity(121U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(210U);
    msg.value = 0.2463680707274224;

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
    msg.setTimeStamp(0.1382632882431507);
    msg.setSource(34715U);
    msg.setSourceEntity(216U);
    msg.setDestination(845U);
    msg.setDestinationEntity(194U);
    msg.number.assign("UDUEPVPDEWFQRGDBVJQHAOYMHSHRUCRMTQP");
    msg.timeout = 62034U;
    msg.contents.assign("SRVETPSALABFUYMDNOJIHRTEYJQMOJYWCBYPICEXZNIFLDMIMOZICIANPSDAJCUEBKNLOJWDNYXJNGLEVBMWAAZTBBGXYVKPLDEKKVPKQTWUSHZBMGIHLCQJFTDXMAURPYLDVXGFCQGBPHHEKAXQTGHYUFXGJEVCHJGKZBDOJHDGSNMVSKNOLKFPARTZZVWAGZYLCXZXURUSFINRCPLSR");

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
    msg.setTimeStamp(0.608989531847793);
    msg.setSource(36985U);
    msg.setSourceEntity(187U);
    msg.setDestination(64166U);
    msg.setDestinationEntity(183U);
    msg.number.assign("KVTYRPGECPYOONCZVVWNDUFQTRVDMPEOLSRUFXHKRKNZZEUXSYJUNOKAJJWMIRFBHJXACEYMPQHUFTXYGGVLBPITFEWGGIOSYNPTHVCXUHUIBKPZZUSLQAPAGFELCJHPYNWXDFRMCSMQBLOEBAYFKVSWWJGLDNECVADGEORGLQMCKTDQBYBVDXTUVBZCSKFTNOJWEZBANCTQDIRQWIHOX");
    msg.timeout = 37536U;
    msg.contents.assign("MKXFBNXPENZNJWNTQTARHYQYDRJGTQEIOFHYLMIDTHHGGHALVFAGMKBKMFSSVVOHELDVTOKAHMEWVANOQBWPCOZNNRZCXAMNZUPDYZLOJRGOKUTEGPWYXECNFFBCPWIUOPRVMYDQZFDKJOMIFYL");

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
    msg.setTimeStamp(0.40847872162250876);
    msg.setSource(51505U);
    msg.setSourceEntity(196U);
    msg.setDestination(44669U);
    msg.setDestinationEntity(124U);
    msg.number.assign("JEFAJNMDGWZRYWXKRFPOUAEXDOCYYFIBPVWNHFDMLZKGXDUVCTBRNQJAXANVTTUCSCCIGHTNKHCBJMKJIEMDRDGOOZNSWTEXESIPXSWJQDPNZVSEFXLPVHZVFIMPYIEYHODWYSUMZOLKIOGKXBWUSTDARCLUJWRPUTIINXFTKHPVUVKOZBBFARPZYHQMPLJHUYQBV");
    msg.timeout = 26843U;
    msg.contents.assign("XRFMKBTYYARVJWQGCPMHNDBOEOWBQTJVKEFSTHFUZGXBWQJCE");

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
    msg.setTimeStamp(0.18039578797382494);
    msg.setSource(37936U);
    msg.setSourceEntity(230U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(115U);
    msg.seq = 1944863396U;
    msg.destination.assign("XDBIQOYWKJVDNQKAMUIRGXZWBUFZKROKZRGRMTOYMXQCVVOGGNTTSLTNIECSYFODNOILHMWCCIFPIDJBHZHVGBUPHVIUOTWRXPORACODZMGDAAHWFSSCHALUKTGKYJYXSPBEJCHFLEMZXLX");
    msg.timeout = 12780U;
    const signed char tmp_msg_0[] = {-11, -67, -31, 126, 80, -43, 76, -109, 56, -28, 102, 115, -10, -116, -7, -101, -115, 90, 37, 20, 47, 50, 39, -8, -68, 89, -46, -81, 57, -88};
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
    msg.setTimeStamp(0.060709883630495454);
    msg.setSource(42611U);
    msg.setSourceEntity(116U);
    msg.setDestination(44429U);
    msg.setDestinationEntity(85U);
    msg.seq = 4243530060U;
    msg.destination.assign("YPMFFFFXQKNWWMEWHHHIOZSUPGSEPBTSFIUXIBQPRQHHDSYJGPIBLAZKTUXCTIMWOOZTXFIDWXNJNXGCYLQDGWZAWONYAURWCZN");
    msg.timeout = 18084U;
    const signed char tmp_msg_0[] = {46, 96, 79, 71, 22, 12, -49, 91, 64, 120, -34, -8, 112, -75, 42, 79, 79, 7, -31, -32, -106, 22, 34, 101, 19, -26, -14, -37, 10, -38, -55, -68, 72, -122, -111, 57, 16, 31, 103, -50, -76, -12, 98, 124, 9, 82, -63, 54, 61, 41, -122, 0, -71, 95, -61, -64, 72, 89, -2, -113, -96, -45, -1, -97, -110, -21, -26, 62, 124, 26, -9, -118, -23, -37, 100, 109, -78, 43, -106, 64, 44, 37, 117, 80, -101, -13, -94, 106, 25, 58, 69, 32, -91, -39, 108, -103, 35, 38, 103, -17, 51, -80, 3, 77, 76, -15, 49, -24, 3, 100, 55, -118, -88, 7, 35, 44, -86, 48, 82, -59, 89, -69, -115, 22, 77, 74, -30, 82, -28, 101, 53, -58, 25, -26, -25, -28, -42, 37, 46, 107, -93, -104, 105, 56, -29, -111, -124, 104, -37, -70, 13, 70, 49, 44, -4, 63, 26, 51, 119, -125, 105, 67, 118, -18, -58, 2, 76, 94, 4, -105, 123, 4, -89, -109, 86};
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
    msg.setTimeStamp(0.4213555404176702);
    msg.setSource(24071U);
    msg.setSourceEntity(2U);
    msg.setDestination(13191U);
    msg.setDestinationEntity(154U);
    msg.seq = 2471178360U;
    msg.destination.assign("DCZPFLRWIZNVWVAFOLHVZQGSJWFHAXRQUYDTDRPFBQJEHGJAKACILKLTEOVLBWPGZDLLTZVOUIIRUSEXSZKKTNYJJZRGMMYXYLSFKOPPUGBD");
    msg.timeout = 60113U;
    const signed char tmp_msg_0[] = {-102, 52, -68, 1, 119, 53, 43, 105, 44, -60, 31, 52, -120, 23, -9, 111, -96, 97, 117, 109, -4, 15, -78, -72, 16, -46, -62, 106, 2, 40, -6, 62, 61, -122, -25, 103, 5, 53, -119, -92, -97, 115, 2, -116, -118, -52, 42, 40, -93, 113, -8, -19, 107, 27, 88, 62, 77, 76, 3, 52, 31, 46, 79, 2, 82, -120, -22, -30, 101, 28, 97, 119, -22, 122, 26, 56, 81, -84, -89, -61, 15, 65, 115, 31, -24, 27, -99, 116, 103, -78, 107, 112, 55, -98, 123, -121, -79, 2, 6, -95, -110, -86, 47, -53, -52, 85, 31, -110, 97, 81, -40, 81, -47, -111, -26, 86, -106, 3, 89, -3, 82, 68, 124, -18, 102, -57, 48, -4, -16, -37, 89, 120, -8, -97, 95, -96, 37, 0, -22, 86, 40, -114, -8, 15, -111, 61, -51, 101, 21, -118, 62, 28, 33, -30, -40, -117, -24, 25, 36, -27, -100, -82, 106, -104, -96, 3, -76, 15, 38, -28, -51, 121, -64, 114, -105, 99, -9, -25, -91, 60, 63, -90, 109, -96, -94, 13, 0, 4, -10, 7, -119, 27, 34, -34, -80, 74, 93, 25, -61, 52, -48, -119, 56, -110, -16, 11, 2, 12, 113, 113, -101, -38, -126, -12, 67, 31, 119, 120, -54, -37, 90, 56, -81, 13};
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
    msg.setTimeStamp(0.8713116641086935);
    msg.setSource(51456U);
    msg.setSourceEntity(156U);
    msg.setDestination(62885U);
    msg.setDestinationEntity(32U);
    msg.source.assign("AXVOHSGSLKZCDIOJVMAUCRMDBTYHRA");
    const signed char tmp_msg_0[] = {15, -93, -117, -13, -125, -59, 2, -15, 91, -68, -5, 80, 5, 71, -25, -33, 57, 13, -65, -103, 30, -32, -93, -33, 7, 106, 82, 55, 116, -2, 29, 70, 72, 44, 83, -63, 78, -104, -97, -72, -20, 12, -8, -94, 23, -97, 110, -97, -105, -4, 82, -74, -126, 81, 89, -14, 32, -72, 117, -72, -7, 117, 40, 14, 61, -124, 115, -69, -92, 117, 79, -56, 56, 23, -97, 99, -13, 104, 4, 81, 84, 46, 82, 16, 60, -29, -97, 37, -44, -92, 52, 84, 13, 74, 70, -39, 110, 65, 50, -106, -9, 29, -3, 120, -128, 0, -3, -44, -11, 112, -126, -46, -108, -35, 51, -41, -59, 9, 13, 65, 77, 69, 24, 82, 102, -77, 110, -58, -2, 0, -4, 61, 38, -99, -30, 98, 109, 124, -127, 54, 28, -82, -85, 1, 58, 119, 25, -9, 53, -62, 24, 9, -43, -122, 65, -70, 6, -3, -2, 59, 90, -72, 82, -2, 37, -38, 113, 84, 92, 77, 101, 67, 9, 125, 116, -80, 90, 57, 81, 47, -73, 41, -36, -36, -38, 88, 96, -16, -15, 59, 17};
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
    msg.setTimeStamp(0.21767663812354332);
    msg.setSource(30574U);
    msg.setSourceEntity(53U);
    msg.setDestination(53783U);
    msg.setDestinationEntity(210U);
    msg.source.assign("HEFTWKZFOSNOPPUARMYJZWWGEIUCCYADYQZQGNTMLZXHQOCC");
    const signed char tmp_msg_0[] = {124, 18, 126, 87, -32, 47, 94, -62, 95, 124, 52, 42, -92, -114, 10, -125, 53, -109, -16, -79, -105, 6, -127, -61, 38, 21, 58, -105, -79, -54, -77, -54, 87, 22, -92, -33, -93, -72, 111, 37, -120, 55, -41, -24, 70, 34, -75, -62, 38, 118, 88, 10, -48, 99, -32, -26, 19, -122, -80, -28, 65, -36, -111, 95, 24, 25, -22, -65, -12, -47, 15, -80, 86, 60, -43, -34, -33, -34, 25, -83, 125, -105, -9, -67, -85, -52, -36, 2, -103, -83, -119, -17, 76, -26, -118, -44, 39, -100, 80, 0, 90, -48, 110, -67, -6, 83, 25, 116, -88, -9, 59, 52, 119, 88, -18, 62, 103, -104, 76, -68, 120, 5, -12, 9, 104, 62, -34, 109, 90, 119, -20, -52, -66, -114, 58, -96, -106, -58, 54, -111, 47, 87, 120, -64, -71, 11, 109, 73, 13, -85, -125, -67, -58, 54, 28, -5, -38, 2, -55, -15, 86, -12, -36, -39, -2, -33, -13, -46, 117, 50, -65, -95, -72, -71, -76, -4, 117, 124, -57, -67, 89, -104, 60, -5, 76, -90, -125, -64, 68, -88, -11, -81, 63, -120, 7, 19, -37, 51, 0, -50, -75, 12, -51, -88, 23, -3};
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
    msg.setTimeStamp(0.5799623989737046);
    msg.setSource(19766U);
    msg.setSourceEntity(90U);
    msg.setDestination(25507U);
    msg.setDestinationEntity(235U);
    msg.source.assign("EAZUOTWZQAYQIRVIMMEMQTKBSORVRPAKLMGRPFFZLUFLYSSGWDEDTPUWRCQFUNTNSDEJPNRSAOJKCMYYXOJVCBTOSVPSWJPCENWSYHJZIQDUTJWSJHLOAHKXBPICHXNEFVMNLVDKODWZCDEVRBYWZSZHIPOCAZLIBXXMZUEDUGVYQXEYRKFBAGQIJEIJTGAKPUFFRKNHVCQCAG");
    const signed char tmp_msg_0[] = {-51, 95, -60, -118, 64, 112, 52, 75, -127, 62, -23, 108, 75, -65, 25, 99, -42, 36, -54, -105, 35, 7, -106, 87, 81, -82, 42, -74, 76, 72, -27, 24, 27, -78, 72, 102, -45, -12, -69, -90, -122};
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
    msg.setTimeStamp(0.04420118428106112);
    msg.setSource(21353U);
    msg.setSourceEntity(119U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(138U);
    msg.seq = 1656939345U;
    msg.state = 192U;
    msg.error.assign("IZTMLHSMJNJUNNZBMNWYHRIMBCIUSORZSJDKUYARUVMIQGIYHGOTOKAXUTQYDOZECSDQNXYWGOVABUHEKHMTAHNJBEQVOOBPPSWGCBZCCVWPYWTDKGFQHAEXEFFAIRSUPLFOTTFSTIQTDYFVIGLHUMAMRUMCPSQQDENHJGJZRGZNXLNXJEKXVQEIBKCSDLZSBFZPFCJCWPJRTKGC");

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
    msg.setTimeStamp(0.7485222456254133);
    msg.setSource(20872U);
    msg.setSourceEntity(26U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(134U);
    msg.seq = 3606654257U;
    msg.state = 1U;
    msg.error.assign("ZSHFKZCWADZXYDYLIYOAATXSBIZPJTSONJRIUXKKDVKFCWEHXBHQOBEWLZDLEMNWH");

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
    msg.setTimeStamp(0.7313439951257571);
    msg.setSource(44574U);
    msg.setSourceEntity(246U);
    msg.setDestination(53546U);
    msg.setDestinationEntity(238U);
    msg.seq = 928637520U;
    msg.state = 11U;
    msg.error.assign("TFICNZADYSYLJGQARGBHZGQRIQRBNCTGFTVSLXTHRPZDADLIHAVEBGQO");

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
    msg.setTimeStamp(0.33416214637371977);
    msg.setSource(49964U);
    msg.setSourceEntity(252U);
    msg.setDestination(22169U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("YRMXYGYKETDBWTOIRSOITSJCYDFMFIACVWUSFDTUFOQAGRKEVNJNHCHGZLKBPKXQHIJMMVGTZVLJFGMBHUAKHSQRZQHWXNQKZBQYNQMCPWKXNPZMMRNTFLTNXPVAJUONQGAARUOCDBBAQLBIZEEAGEWJOJLSUIFWVKBPEXYDZPOFARMLYZUUDGIEPLCVFMRYLSXXDLCDJVBO");
    msg.text.assign("NYKGECPNYEPDQQCMUDSVCRTZFBQMORTELBGMNXMEKLPZIJNAARZPLDGZNQMUISGFIGHXJAOJVBMTOADPDVXAZGIHJSRJOJURLRHXPGAXZATRCDUYMHXWIDPFYHOUMVECPFYDQFWNHGBYUTGLLHQVPIXBLBWSNDWWVSITQMKKSSIHEQENINBVZTOROIVYQJNZFTYGUYKSWOKCYBWDZCUXAFCKKLHQCLJBFULORVVOSFAUWZMJPTEAKWRSBKFXJW");

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
    msg.setTimeStamp(0.6136284476307002);
    msg.setSource(40864U);
    msg.setSourceEntity(44U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("CHODGHWPSTPQDUDHTESMFJBHOWQ");
    msg.text.assign("IOOTEGZDFRYKYWKBUPBKDVYTMXSROAQ");

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
    msg.setTimeStamp(0.4205521162211514);
    msg.setSource(481U);
    msg.setSourceEntity(163U);
    msg.setDestination(42661U);
    msg.setDestinationEntity(190U);
    msg.origin.assign("OGYWAFZBYVTMPTOPVTPNVFXERVANUUQRZZFRYBHUXDFSSVPYWSKAZGRCTJJNMJBZIKADNYCWHTMCQRHTMHQVOGOMUCECZWIVPQAXGGKGEDFNEAVMNDHKHNMTOLQREFXKKUABWUNWSUIXWGEYLOIBCDWBSJXJUIQFPCGLBMIYZMCLOXAEUTJTGBLILEKD");
    msg.text.assign("EANPFMBLYACADCVBZDARMTUVTKSKAQQWMOUHSQFKOJGJRECQMNSXWGDJLAHVOKOSYLXOCLGUVVMQDVVQDINJOIBAULXTUSDOXBMWCFXQAQNRUPIEYXPHTMNWLQPFWTYJGSBZBDGGCKIDYZSNOIBJUENZTGGRJZDREBKVWHHMTWEILQDFNESTJHSKXXLIYAYOZJNPPBMKURPXYMLLHPEZWHZEBKUIZFTICKYVNRROCCFFERFHYHVCGZWUXPJPFA");

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
    msg.setTimeStamp(0.19050773586619474);
    msg.setSource(42977U);
    msg.setSourceEntity(225U);
    msg.setDestination(12014U);
    msg.setDestinationEntity(37U);
    msg.origin.assign("FZFKLUXQNDWVKLHNAWZFWMOXTGSGKTUADDKZRFMRWZAPIBPWDROUCHCCONKRVLJUOBPBTZDNRZXHXLZEXTUEBXYCNIPQSLEOKDHQAYIDHQNQGRIHYMFQXFSCHPRVLUOSWKAETMD");
    msg.htime = 0.9972414839730486;
    msg.lat = 0.8315164910902999;
    msg.lon = 0.46498210782240446;
    const signed char tmp_msg_0[] = {-58, -95, 43, -103, -90, 83, -83, 37, -84, -28, -104, 68, -128, -12};
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
    msg.setTimeStamp(0.2394085492751391);
    msg.setSource(53836U);
    msg.setSourceEntity(249U);
    msg.setDestination(17112U);
    msg.setDestinationEntity(72U);
    msg.origin.assign("UOJVJJEJVCATTQPXLEJPOCQYJBSRRMINXLBIAMXAODZKNSNSYBNQVTLIBQPWLHMVWHXYXFORUQIXTFOPHHJMUGKWWNNUULMZDCBPGGOAZSUHSNAXSPWDSNNMAFMAELUGLONEURUBWLVSZFFCKTPKIEWUKDQHYLZGFWZDRHKQFDCPYYIGAWVEPEWMYYJOGGJEBIJMREGHTQITKVVCBRTQXHZHICFSVDLZKAADRZTGOKCTKCXXIOZRYS");
    msg.htime = 0.7233269408961888;
    msg.lat = 0.8833343529152666;
    msg.lon = 0.4324271375034625;
    const signed char tmp_msg_0[] = {41, 52, 26, -11, 67, 62, -42, 98, -45, -48, 19, -64, -12, 124, -50, 5, -101, 80, -78, 104, 38, 112, 84, -41, 36, 49, -74, 22, -92, 95, -68, -115, -118, 68, 35, 8, -121, 55, -42, 20, 10, -19, -59, -113, 2, 105, 121, -48, 75, 98, 68, -74, 29, -111, 35, -107, 74, 120, -67, -35, -56, 13, 109, 30, 93, -8, 3, -122, -45, 117, -128, -88, 13, -13, 23, -41, -72, -97, -24, 4, -32, -10, -15, 24, -48, 120, 108, 4, 26, -45, -93, 62, 10, 52, -65, -103, 40, -65, -104, -106, 56, 89, 83, 54, 76, -53, -1, 14, 70, -86, -121, 14, -44, -108, -39, -75, 7, -126, 60, -65, 126, 67, -115, 38, -73, 67, -62, -103, -66, 106, 57, -15, -87, 58, -4, -31, 74, -82, -65, 69, 48, -30, 80, -30, -90, -26, -84, 4, 76, 72, 120, 71, 106, -35, 12, -11, -97, -27, -64, -104, 96, 107, -87, -73, -84, -96, -50, -77, 51, 124, -121, 106, -82, -72, -72, -9};
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
    msg.setTimeStamp(0.6685970747420416);
    msg.setSource(24113U);
    msg.setSourceEntity(248U);
    msg.setDestination(27845U);
    msg.setDestinationEntity(214U);
    msg.origin.assign("PLPUNUFGBTMTGYRJJRHEDLFKQIBCEOKOMRLUVFPJFZMBJFTEZBZKBXHJGCDWFEGAHYACYWAJQNVNNG");
    msg.htime = 0.38660602846936154;
    msg.lat = 0.27613597585831184;
    msg.lon = 0.5459887105651954;
    const signed char tmp_msg_0[] = {-92, 31, -41, -41, -97, -41, 21, -124, -11, 64, 103, -118, 19, 44, -110, 54, -26, -110, -36, -2, -102, 42, -127, 14, 8, 105, -28, 58, -125, 2, 66, -4, 36, 0, -47, -5, 118, 125, 71, -2, 48, 33, -94, 74, -125, 105, 97, 53, 89, -24, -37, 61, 13};
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
    msg.setTimeStamp(0.508037000862125);
    msg.setSource(34196U);
    msg.setSourceEntity(148U);
    msg.setDestination(25240U);
    msg.setDestinationEntity(168U);
    msg.req_id = 49154U;
    msg.ttl = 41895U;
    msg.destination.assign("OKZLWAFJCFLJWIXTSXHBQAJSZNOMKXVEYUQIUBQDNEESPWOKCFUAYMMIUPUYVJSBYWHDWLXPTTCGCKMJSYCIGRXJJXIEYUNQRFKADAFKXTNVRPD");
    const signed char tmp_msg_0[] = {14, 69, 67, -39, 39, 75, 39, -3, 71, -80, -44, -25, 24, 32, 53, 94, 25, 100, -79, 34, -37, -46, 49, -83, -32, -92, -86, -33, -87, 36, -24, 71, 76, 96, 45, -89, -111, -113, -117, -110, -101, 3, 108, 3, 105, 19, 103, 97, 82, -79, -16, 86, -21, -100, -34, 95, 73, -121, 1, -67, -121, -30, -12, 117, 122, -25, 87, -71, -30, 76, 24, 103, 64, 119, -10, 63, -112, 114, -60, 41, 96, 77, 99, -50, -48, 6, 113, -44, -122, 105, -62, -52, -11, -104, 65, -49, -31, -82, 33, 29, -22, 69, -57, -1, 75, -105, -102, 107, -104, 21, 61, 24, 46, 21, -28, -36, -111, 42, 7, 35, -124, -127, -74, 67, 81, 123, -121, 92, -101, 30, -83, 49, -97, 106, 78, -15, 88, -29, -58, -66, -104, -74, -61, 49, 85, 44, 21, 61, -81, 44, -82, -103, 84, 61, -56, 90, 116, 23, 99, -7, 54, 11, -74, -77, -19, -108, -56};
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
    msg.setTimeStamp(0.603013973298288);
    msg.setSource(12926U);
    msg.setSourceEntity(163U);
    msg.setDestination(31593U);
    msg.setDestinationEntity(155U);
    msg.req_id = 49924U;
    msg.ttl = 39594U;
    msg.destination.assign("OHJNMRWEXQQSPIUBQVNZFZCXCTJKRDQEESCWOELHNSAWHCSGIEDAJNPUZILGVKMNZRQJLVYOMNUOAAILPNPTDLAIVXUSKPPFTYGHJJNUWFWJGKPPMKVOHLOZLE");
    const signed char tmp_msg_0[] = {0, -118, 12, -51, 13, 26, -41, -101, -103, 63, -1, 56, 22, -103, 89, 105, 1, -20, 52, 26, -128, 51, -3, -75, 87, 43, 5, -126, -2, 60, 96, 24, -62, 120, 38, 47, -123, -56, 29, -91, -113, 20, -32, -104, -97, -49, -86, -56, -60, -25, 121, -53, -44, -7, 30, 76, 125, 84, -64, 83, 44, -54, 23, 46, -31, 52, 80, -115, 1, 28, -55, 72, 45, 81, -87, -88, -7, -79, -91, 125, 110, 58, 63, 123, 123, -56, -115, -9, -118, -106, 58, 17, 92, 60, -80, 25, 111, -69, -13, 121, 111, 108, -7, 115, 80, -104, -79, 57, 27, 8, -5, -127, -104, -95, 26, 32, -37, 110, 59, 104, -31, -90, 18, 82, -61, -85, -10, -87, 81, -72, -79, -11, 30, -40, -82, -52};
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
    msg.setTimeStamp(0.21505997147876132);
    msg.setSource(28918U);
    msg.setSourceEntity(108U);
    msg.setDestination(2476U);
    msg.setDestinationEntity(194U);
    msg.req_id = 31254U;
    msg.ttl = 2181U;
    msg.destination.assign("ILBHPQHJGIVONEAOPXVMRHBIKPONDYXPCFXMVAGPTPMSCMVXRGZJHNVYAEFRDOLDQGSBVRJLLKMTEFFULTNAOQOOJGSJAWSTDORGNSYBOAECFWKEZZDFYGESEEBNLMNJQRUKJGUAKIUHZCSFQSLZQDTCVTVSUELUKBICZXDPMIWPIFKV");
    const signed char tmp_msg_0[] = {120, 35, 13, 98, -47, -60, -43, 100, 31, 101, 87, -116, -105, 84, 22, 25, -110, -7, 88, 16, -34, 7, 74, 53, 28, 94, -54, -107, 109, -74, 85, 6, 9, 124};
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
    msg.setTimeStamp(0.4070185957706035);
    msg.setSource(29426U);
    msg.setSourceEntity(200U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(166U);
    msg.req_id = 32731U;
    msg.status = 105U;
    msg.text.assign("RJNNBVPVOANADVTPAGQMBSHCZOIODRJSXYLSAPBXJKWYQEMGECLGXVJUEAPTRVNUCEOJOCLQUGTTKWMGAAYZSHNPKHDPTBCQRRUJQZRRRERWKZGIEUVHZZCXLWONGYCCCQ");

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
    msg.setTimeStamp(0.8151432796614515);
    msg.setSource(32297U);
    msg.setSourceEntity(197U);
    msg.setDestination(54250U);
    msg.setDestinationEntity(51U);
    msg.req_id = 47180U;
    msg.status = 202U;
    msg.text.assign("EQDRXXESIUIEIRCTTNMUGZDHIMLSHJGBKEEGNJVBNCSPNCAHCTWDJPTRMSEYGCHTIHQQMLMTAFVARURLZYLXVVPUCKCG");

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
    msg.setTimeStamp(0.1411156650889912);
    msg.setSource(15591U);
    msg.setSourceEntity(221U);
    msg.setDestination(1568U);
    msg.setDestinationEntity(232U);
    msg.req_id = 16878U;
    msg.status = 170U;
    msg.text.assign("VHRNXEVHPDAWUBVOXNGKIYMBJCODZNGFIXCTRAZDMBDQHNMQMIPQQJKFMKXDXIESADHIZZKANRKPJUCJLG");

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
    msg.setTimeStamp(0.5379930636888277);
    msg.setSource(32934U);
    msg.setSourceEntity(216U);
    msg.setDestination(25677U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("NOCCSJLWCWLGBKQRAEXLZGOCFEIHZWURKMAUFCWUNECDGSHHYMWOETTIJGGSDHXYVRRUWQUSWVRFYMWOPCKARQQSBIVMILK");
    msg.links = 3363640503U;

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
    msg.setTimeStamp(0.505846412600377);
    msg.setSource(4425U);
    msg.setSourceEntity(120U);
    msg.setDestination(44171U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("ECLZUAODSOEINGVIYTEORKVQZXWMPCHLMLCMFTHAXTEYJVRAICZTLBKPPXJAHDQHCDSAXSWEOJCAVHVLHCXEWLDUBOUBABTCFKTOPMKYIJNWWSEGXYAJPQAVQQYBMGBKYPBSKTGOJIEHKGDHQJMIVZZUUDDYFNWNLSGFNXFWTKRKHZRFSGPMQPZWMSVXBGTMPGNBICSZRRQHTVQGUNQDJIFELRNFRZOZJIJKFWUXVNWOUDRYUOFYB");
    msg.links = 2886268928U;

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
    msg.setTimeStamp(0.916341122836023);
    msg.setSource(30725U);
    msg.setSourceEntity(250U);
    msg.setDestination(53444U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("QDDGXNHVEUDTGAAPYMHCYHZRNXNASBMGCWBQYPYLWPITNNEHIKTLKUZRCTPMZSQJBMSNPVAZQQLANPERGOWGI");
    msg.links = 3895112526U;

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
    msg.setTimeStamp(0.4345651620887151);
    msg.setSource(38589U);
    msg.setSourceEntity(141U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(194U);
    msg.groupname.assign("YRKQJWHBMLUFNDSRIBFLIMATLHVDDIYVBKXKXOQSSKEWXARUZZAPQCMRUCCFSLLOYGIVJXAAPDWEJFQRFRTMVBWAGWEWPPIPNCYBQIEAXCTLEWJUOXLMTTACGGJZLYENDTJTJOWHKGPSOLOPSKOUCNQXTZVP");
    msg.action = 137U;
    msg.grouplist.assign("YVYNBEPMVAXOISECHZEORD");

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
    msg.setTimeStamp(0.3065204551621006);
    msg.setSource(14566U);
    msg.setSourceEntity(134U);
    msg.setDestination(38876U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("IWLOPCJJHVJAERPGTITSGLRCCFPBPPIKHAGBYRSYAOOQDUUEQTHWMHACWVIYDCSFVNPOZXVIRLPJPFLJDNKLFBFXG");
    msg.action = 72U;
    msg.grouplist.assign("KJGPHQEEIPVVQIVCKRCEYHBVAXBKWWMVUBFPZXGGHORFVCRJTZGNBZFNNA");

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
    msg.setTimeStamp(0.6931089536157632);
    msg.setSource(15464U);
    msg.setSourceEntity(235U);
    msg.setDestination(60943U);
    msg.setDestinationEntity(214U);
    msg.groupname.assign("AAAEXWNONKIGYYECCSUHRDKMICBPBMHXMYIKSVFDAZWIUJYSXFZRCZHDDISMWESVDQGLWXGLXWADGIWQRAROAKHROGNGELPHXXMGVBTWDBXFGBPNBUJDJTEHVRUBLAQVLETPJQREJNPFGNOBSYQYDCFELFZ");
    msg.action = 165U;
    msg.grouplist.assign("XNAAKKGXGJAAWXWFFOKSVOLDMMCYMAHVEAYDQTRCVNNSDQSRTISSNONCGBGFLGRFZJVUEWUXYXWCUTDE");

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
    msg.setTimeStamp(0.24106661529395246);
    msg.setSource(61145U);
    msg.setSourceEntity(167U);
    msg.setDestination(42119U);
    msg.setDestinationEntity(185U);
    msg.value = 0.744895725774816;
    msg.sys_src = 16152U;

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
    msg.setTimeStamp(0.6698058024928767);
    msg.setSource(48685U);
    msg.setSourceEntity(66U);
    msg.setDestination(39530U);
    msg.setDestinationEntity(68U);
    msg.value = 0.7290569746584358;
    msg.sys_src = 62501U;

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
    msg.setTimeStamp(0.6879784633283597);
    msg.setSource(11012U);
    msg.setSourceEntity(20U);
    msg.setDestination(33179U);
    msg.setDestinationEntity(164U);
    msg.value = 0.061593825888725307;
    msg.sys_src = 43267U;

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
    msg.setTimeStamp(0.4330727176214394);
    msg.setSource(377U);
    msg.setSourceEntity(228U);
    msg.setDestination(35504U);
    msg.setDestinationEntity(115U);
    msg.value = 0.38004609674459433;
    msg.units = 182U;

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
    msg.setTimeStamp(0.6524517046751355);
    msg.setSource(8233U);
    msg.setSourceEntity(58U);
    msg.setDestination(61011U);
    msg.setDestinationEntity(53U);
    msg.value = 0.9528181933564358;
    msg.units = 125U;

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
    msg.setTimeStamp(0.4821252115354303);
    msg.setSource(29899U);
    msg.setSourceEntity(165U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(43U);
    msg.value = 0.5834439176601758;
    msg.units = 162U;

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
    msg.setTimeStamp(0.3962178142754862);
    msg.setSource(27726U);
    msg.setSourceEntity(41U);
    msg.setDestination(58788U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.8517564957598708;
    msg.base_lon = 0.8137859519205759;
    msg.base_time = 0.42236746650233215;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 45985U;
    tmp_msg_0.priority = 94;
    tmp_msg_0.x = 14417;
    tmp_msg_0.y = -25672;
    tmp_msg_0.z = -4834;
    tmp_msg_0.t = -21716;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.07491246387594142;
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
    msg.setTimeStamp(0.04802956629212185);
    msg.setSource(33833U);
    msg.setSourceEntity(188U);
    msg.setDestination(21517U);
    msg.setDestinationEntity(94U);
    msg.base_lat = 0.43071906349690303;
    msg.base_lon = 0.34098687575471176;
    msg.base_time = 0.4795097482109931;

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
    msg.setTimeStamp(0.23130837899279533);
    msg.setSource(37460U);
    msg.setSourceEntity(226U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(74U);
    msg.base_lat = 0.46900349377615747;
    msg.base_lon = 0.18368884850023093;
    msg.base_time = 0.7558781357656863;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 61640U;
    tmp_msg_0.destination = 34272U;
    tmp_msg_0.timeout = 0.26663655631054595;
    IMC::FormationEvaluation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 196U;
    tmp_tmp_msg_0_0.op = 249U;
    tmp_tmp_msg_0_0.err_mean = 0.0011771577369794617;
    tmp_tmp_msg_0_0.dist_min_abs = 0.7986155060584551;
    tmp_tmp_msg_0_0.dist_min_mean = 0.39618162993084594;
    tmp_tmp_msg_0_0.roll_rate_mean = 0.17597245461065203;
    tmp_tmp_msg_0_0.time = 0.7101743430741628;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.action = 194U;
    tmp_tmp_tmp_msg_0_0_0.lon_gain = 0.923103244622514;
    tmp_tmp_tmp_msg_0_0_0.lat_gain = 0.11406546862963929;
    tmp_tmp_tmp_msg_0_0_0.bond_thick = 0.22423819552461455;
    tmp_tmp_tmp_msg_0_0_0.lead_gain = 0.38106189202751883;
    tmp_tmp_tmp_msg_0_0_0.deconfl_gain = 0.28013287491495686;
    tmp_tmp_tmp_msg_0_0_0.accel_switch_gain = 0.9479376506470909;
    tmp_tmp_tmp_msg_0_0_0.safe_dist = 0.5924456216310678;
    tmp_tmp_tmp_msg_0_0_0.deconflict_offset = 0.4527265506693785;
    tmp_tmp_tmp_msg_0_0_0.accel_safe_margin = 0.3351071693360296;
    tmp_tmp_tmp_msg_0_0_0.accel_lim_x = 0.8862792172058696;
    tmp_tmp_msg_0_0.controlparams.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.7354311425491684);
    msg.setSource(47701U);
    msg.setSourceEntity(50U);
    msg.setDestination(38762U);
    msg.setDestinationEntity(167U);
    msg.base_lat = 0.9867602565453264;
    msg.base_lon = 0.01817367530154279;
    msg.base_time = 0.4984630129786819;
    const signed char tmp_msg_0[] = {33, -82, 47, 66, -126, 29, -124, -113, 5, 93, 94, 123, 30, -52, -43, 73, -70, -122, -126, -38, -77, -6, -14, -105, 26, -124, 60, 78, -37, -20, -98, 61};
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
    msg.setTimeStamp(0.8396682249990104);
    msg.setSource(16093U);
    msg.setSourceEntity(222U);
    msg.setDestination(41113U);
    msg.setDestinationEntity(179U);
    msg.base_lat = 0.22528285099267376;
    msg.base_lon = 0.5572194623201766;
    msg.base_time = 0.07837916208660767;
    const signed char tmp_msg_0[] = {94, -13, 64, -15, -83, 114, 25, -108, 48, -116, -46, -80, -45, 4, 119, -123, -100, -93, 0, 103, -88, 54, 6, 123, -51, 99, -19, -92, -17, -39, 0, 80, -25, 49, -35, 93, -39, -115, 106, -18, -28, 82, -21, -66, -16, -29, 61, 64, 107, -118, -59, 32, -16, 4, -110, 92, -85, 78, -102, -69, 78, -114, 3, 52, -100, 74, 60, -62, 20, -50, -84, -55, 17, 65, 118, -76, -92, 82, 69, -59, 65, -14, 4, -119, -67, -10, 117, -35, 75, 57, 75, -57, -111, -18, 63, -80, 25, -45, -67, -42, -1, -106, 53, 10, -85, -3, 95, -79, -8, -84, -62};
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
    msg.setTimeStamp(0.22648803925925665);
    msg.setSource(45672U);
    msg.setSourceEntity(43U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(52U);
    msg.base_lat = 0.2887798684865922;
    msg.base_lon = 0.06791345599274823;
    msg.base_time = 0.1365306313011232;
    const signed char tmp_msg_0[] = {-78, -14, -15, -103, 98, -52, 36, 34, -96, -127, 2, 111, 51, 0, 38, 108, 0, 108, -84, -33, 124, 11, 111, -101, 5, 23, 40, 83, -82, -19, 122, -89, -119, 47, -58, -2, -112, 7, 55, -84, 117, -87, -104, 11, -13, -6, 101, -10, 10, 30, -74, 3, -92, -91, 19, -54, -52, -78, -56, 102, -3, 25, 93, -121, -55, 41, 81, -59, -121, 6, -123, -119, 26, -127, 99, 58, -39, -126, 28, -85, 17, 106, 85, 106, 13, 46, -28, -74, -90, -28, -86, 68, -59, -104, -126, -21, 90, -3, 77, 13, -124, -119, -14, 102, 11, 107, -83, 61, 34, 28, 45, -25, -120, -22, 82, -94, -20, 34, -58, 75, 12, -95, 26, -20, -101, 104, -72, 18, -88, 92, 99, 67, 27, 75, -30, 32, 28, 124, -120, 51, -35, -125, -69, 97, 118, 85, 3, 97, 100, 0, 99, 39, 47, -46, -15, -97, 6, 50, 111, -45, 84, 65, 100, -99, -93, 82, 61, -4, 35, 13, -32, 39, -8, -31, -79, -53, 11, 119, -101, 121, -89, 85, 89, -33, -74, 73, -56, -112, 83, 3, 75, -61, 64, 112, -48, 56, -75, -109, -66, 40, 9, 48, -76, -80, 64, 77, -69, 109, 5, 90, -17, -74, -88, -23, -73, -124, -40, -55, 1, -94, 3, -69, 47, -126, -72, -10, -62, 84, -94, -114, -94, 96, -59, -31, -90, -67, -103, -52, 39, 79, -14, 22, -121, -54, -32, -33, 14, 42, -5, -54, 60, -9};
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
    msg.setTimeStamp(0.3610181662551667);
    msg.setSource(25819U);
    msg.setSourceEntity(106U);
    msg.setDestination(58707U);
    msg.setDestinationEntity(185U);
    msg.sys_id = 34847U;
    msg.priority = -76;
    msg.x = -4395;
    msg.y = -3602;
    msg.z = -23025;
    msg.t = -30294;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9791393945191827;
    tmp_msg_0.amp = 0.28097614561587414;
    tmp_msg_0.cor = 212U;
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
    msg.setTimeStamp(0.32596161450669714);
    msg.setSource(53715U);
    msg.setSourceEntity(75U);
    msg.setDestination(48569U);
    msg.setDestinationEntity(25U);
    msg.sys_id = 45630U;
    msg.priority = -91;
    msg.x = 24613;
    msg.y = 12476;
    msg.z = 25202;
    msg.t = -28671;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("XHWOIDIEJDBWONAXFIQBMUUKPTAVORSPBOIBPCNJYDTJWGJPDMKZRRWHNQGVDTKYWXCNCESYQNHNGLRGRSVAIUSSBCZQMGQTQKVIEAZZCETPHAKSCLWGEBJVDENYVXHFKMCFTPLDQFUZSFX");
    const signed char tmp_tmp_msg_0_0[] = {-84, -8, -3, 117, 105, -21, -38, 42, 96, 66, 4, -53};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6352137070339947);
    msg.setSource(10434U);
    msg.setSourceEntity(76U);
    msg.setDestination(65001U);
    msg.setDestinationEntity(22U);
    msg.sys_id = 16550U;
    msg.priority = -4;
    msg.x = 11057;
    msg.y = -28216;
    msg.z = -24738;
    msg.t = 32539;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 46557U;
    tmp_msg_0.bearing = 0.4963964908966836;
    tmp_msg_0.elevation = 0.5443570047153782;
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
    msg.setTimeStamp(0.1271086340342693);
    msg.setSource(46017U);
    msg.setSourceEntity(95U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(242U);
    msg.req_id = 63279U;
    msg.type = 192U;
    msg.max_size = 19916U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8401821756603277;
    tmp_msg_0.base_lon = 0.3784209708020698;
    tmp_msg_0.base_time = 0.09042516279588075;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 48420U;
    tmp_tmp_msg_0_0.priority = -18;
    tmp_tmp_msg_0_0.x = 871;
    tmp_tmp_msg_0_0.y = 20304;
    tmp_tmp_msg_0_0.z = -2234;
    tmp_tmp_msg_0_0.t = -6089;
    IMC::Drop tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 64709U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.14829334082494283;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3791784362188886;
    tmp_tmp_tmp_msg_0_0_0.z = 0.556455277591361;
    tmp_tmp_tmp_msg_0_0_0.z_units = 9U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5914434670330095;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 223U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CLBQIHLJTUODYESBGZRSAMGJXYPVQLEITVOYVUJDFMBIJKOVJLAOHUJSQKQPURLCDGXFMSBH");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.05650041233762504);
    msg.setSource(9303U);
    msg.setSourceEntity(188U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(147U);
    msg.req_id = 46418U;
    msg.type = 70U;
    msg.max_size = 56586U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9530324659594477;
    tmp_msg_0.base_lon = 0.11263668502008783;
    tmp_msg_0.base_time = 0.4108422521882269;
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
    msg.setTimeStamp(0.8431983825755681);
    msg.setSource(19425U);
    msg.setSourceEntity(108U);
    msg.setDestination(46672U);
    msg.setDestinationEntity(72U);
    msg.req_id = 9206U;
    msg.type = 86U;
    msg.max_size = 30462U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.27015090226452376;
    tmp_msg_0.base_lon = 0.7588924026546584;
    tmp_msg_0.base_time = 0.9086835816464385;
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
    msg.setTimeStamp(0.7346210594766959);
    msg.setSource(34086U);
    msg.setSourceEntity(126U);
    msg.setDestination(22252U);
    msg.setDestinationEntity(101U);
    msg.original_source = 32663U;
    msg.destination = 27722U;
    msg.timeout = 0.8068724509390987;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("VMNFJXSITVUCNXSYKDMFSWZOTJSULZ");
    tmp_msg_0.text.assign("OKRKNUKDYMVBVPHGBLCUELHZGAHCREAWFKCDMQJNNLVIOAQFQPGYBRHRTJHPEDBJPAWFLCGWHYBJMZWYPTSNVGRJBFISFYUSFKGHOZIBZXCKXSXFUIPWQSTZDLQLZQIKDDITLIQJHGVHCTOXTTDMAWWVWSYKBVUXO");
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
    msg.setTimeStamp(0.5947721734748556);
    msg.setSource(18087U);
    msg.setSourceEntity(67U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(147U);
    msg.original_source = 53337U;
    msg.destination = 43113U;
    msg.timeout = 0.7205833700453923;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -94;
    tmp_msg_0.value = -1676178214;
    tmp_msg_0.gain = 193U;
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
    msg.setTimeStamp(0.7544775910267089);
    msg.setSource(6568U);
    msg.setSourceEntity(225U);
    msg.setDestination(13333U);
    msg.setDestinationEntity(231U);
    msg.original_source = 58343U;
    msg.destination = 39763U;
    msg.timeout = 0.7922168727271925;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.5083796740122616;
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
    msg.setTimeStamp(0.9342028828404269);
    msg.setSource(18808U);
    msg.setSourceEntity(190U);
    msg.setDestination(7644U);
    msg.setDestinationEntity(144U);
    msg.type = 24U;
    msg.comm_interface = 17130U;
    msg.model = 18560U;
    msg.list.assign("UKTOUQSYXNXGRPTQTICZCJLWYYTHNURTJSJXMGYASXPPGLZAIDNASSHLWGOQUPSQSWFVAXUGHTDRZOZBMBTYFINFOCLFKCKKHRLVQFKOLDPJIECNJWMEWEOYXKANLGDYSEDZFEVQBKTJYIMQMFPOHUUKVRZGNINPM");

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
    msg.setTimeStamp(0.5185233564437656);
    msg.setSource(3104U);
    msg.setSourceEntity(208U);
    msg.setDestination(13349U);
    msg.setDestinationEntity(13U);
    msg.type = 157U;
    msg.comm_interface = 24851U;
    msg.model = 10867U;
    msg.list.assign("AEHFPAVIXGGKREJEQPKNYVOKMBFAAVJJPBBWGIXCFXFYTKANSXTYDVFGYFFZAXRQDUYNQMLMLPMDGYHXMVEZWSQXEPSLNWEARQCIQTBCDLOBXCSUVSXRJOIMAZUHJWHZAQITYSCPWUJBSLODHNCATDHKGMLZRRHKLOQOUWUPKNNKNDDK");

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
    msg.setTimeStamp(0.920968507643901);
    msg.setSource(53736U);
    msg.setSourceEntity(205U);
    msg.setDestination(8980U);
    msg.setDestinationEntity(11U);
    msg.type = 105U;
    msg.comm_interface = 9310U;
    msg.model = 31603U;
    msg.list.assign("AKJZMHBQSPCPNHKHMLEMHRGPTEACEYDLWYQUVGQEAWCOGIIQBJTJITSPQDCIUSXNZVYLQKRKFUMODAXHEYZFOGSGEKHKMCRFJMDWUUBAPQYTGVTGXBXNLNDPJFBROICOSIFLLROZNRRBLXXUSTCZOPVWSYTFMNEGNRYJBTRRVXMPEFOWCXHXFPNHDQTUVCGVMFWLEVBOZZAN");

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
    msg.setTimeStamp(0.4992568552653597);
    msg.setSource(41366U);
    msg.setSourceEntity(38U);
    msg.setDestination(8439U);
    msg.setDestinationEntity(177U);
    msg.type = 232U;
    msg.req_id = 2588611182U;
    msg.ttl = 37687U;
    msg.code = 107U;
    msg.destination.assign("MGQIOFBCZMITHUNAPPQLUDLCXFYEDAEZPRRKPTYAVHWNZMTPEGDKLTEPYJFZSDOWCWJ");
    msg.source.assign("ZAKUOMOABOIBMFCSYEVEVAAXHDOYZKVGSINYDFWTSJUDYQARRSQBWDIIMRLPRTERBCGQXKIYJYOOLFMXWXHFLABURSHZENNOHFPMFRQUKBXHBRFWKYIMSGOJJANGPYQKWGAVACQJ");
    msg.acknowledge = 39U;
    msg.status = 170U;
    const signed char tmp_msg_0[] = {-117, 15, 37, 35, -29, -30, 79, -119, 47, 88, -39, 30, 24, 71, -120, 36, -81, -51, -90, 41, -59, 124, -57, -80, 58, -11, -69, -53, 21, -51, -63, -14, -82, -122, 79, 99, -96, 38, 36, -14, 44, -94, 44, -62, -126, -81, -128, 30, -11, 56, 11, -79, -121, 34, 119, -101, 107, 111, 38, -59, -112, 38, 8, -47, -113, -126, 100, 118, 42, -17, -2, 65, 76, -4, 64, -21, -16, -23, -104, 43, -47, 125, -51, -39, -40, 30, 91, 66, -107, -2, 25, -5, -3, -20, -35, 85, -71, -78, -121, 11, -70, 90, 2, 34, 2, -45, -84, -40, 122, -57, 105, 62, -37, 57, -83, 85, 89, 15, 5, 61, -121, -65, 0, -75, 45, -106, 105, 100, -62, 27, -121, 63, 6, -5, 62, 11, -50, 22, 1, 15, -102, 97, -100, -19, -81, -124, 0, -22, -116, 12, 77, -74, -116, 118, -119, 78, -103, -120, 52, 104, 33, 121, 49, 32};
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
    msg.setTimeStamp(0.37396940419149116);
    msg.setSource(28722U);
    msg.setSourceEntity(124U);
    msg.setDestination(35001U);
    msg.setDestinationEntity(168U);
    msg.type = 49U;
    msg.req_id = 3908609976U;
    msg.ttl = 31057U;
    msg.code = 40U;
    msg.destination.assign("TWDKLTKFXZXGKYPTJMWYILHNEXRVLNFNFSHQIOSZGERZEVGPWVGNQGUQPLDKUOXENYIM");
    msg.source.assign("WIQHWJFUNTUBBSGCOXKHKYB");
    msg.acknowledge = 217U;
    msg.status = 245U;
    const signed char tmp_msg_0[] = {-70, -19, 20, -49, -58, -41, -1, -75, -75, 114, 50, 109, -59, -103, -20, -118, -9, -77, 97, 86, -56, -71, -119, -124, -60, 56, -72, -63, -89, 48, 60, -58, 83, 71, 87, 40, -3, -100, -81, 100, 24, 121, -119, -73, -104, -120, 124, 88, -34, 102, 2, 117, 18, 89, 126, 32, -55, -120, 7, 95, -110, -114, 78, 50, -42, -70, -67, -22, 18, 105, -5, 104, -38, -33, 109, -73, 92, -119, 67, 122, -7, 41, 14, -54, -26, 17, -125, -17, 34, 60, -40, -5, -26, -110, -98, 3, -49, -1, 32, -35, -14, 56, 83, 39, 109, 73, -25, -66, -36, -109, 47, -18, 99, 74, -17, 102, -67, -14, 90, -120, 77, 83, 108, 80, -95, 52, -41, 64, 66, -111, 18, 111, -23, 84, 83, -128, 56, 48, -111, 37, -70, -101, 99, -12, 92, -32, 101, 48, 60, -10, 4, 126, 36, 123, 66, -54, 61, -86, 98, 60, 90, -52, 69, -52, -9, -1, -12, -94, 102, 81, -108, 46, -126, -52, -69, -51, -95, 4, -54, -51, 41, 55, -60, -27, 34, 98, -80, -63, -120, -117, -22, 87, 58, 76, 113, 100, 6, 103, 125, -20, 78, 23, 108, 38, -11, 7, 70, -93, 72, -69, 58, -56};
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
    msg.setTimeStamp(0.9374358268867358);
    msg.setSource(22334U);
    msg.setSourceEntity(122U);
    msg.setDestination(34198U);
    msg.setDestinationEntity(73U);
    msg.type = 212U;
    msg.req_id = 2722625319U;
    msg.ttl = 24187U;
    msg.code = 207U;
    msg.destination.assign("KVPYBUWNFJNQRGTMJTFTOSFIZXVQUQHRWSATXVELTOBXTGYAHNAKNMUFLWZOMOXIIBGZWJCDWRFYDXPEKDJKYYLCEIKBLNFQGLMTUWKJMCRBPFFHGKHLOGNNZBXSFZNXJBNUHYADJCXSJDZZCRSCIPVQGRBLKEHAQXHQFDAHYGEDIUQAPCSVEYSUCQULKETKRZSOMSRSUJMAMAXVEPCIIDPALWHOVBQWZOPYUJMRIPEGLDWTDT");
    msg.source.assign("LEEKOGKYOVRZHDMVXTCXYNFFJMHBYSAFGZSJXDWXIKQGYVXZBRZOMNILNRELNAZPTVIWDSVTLIMEVNJKWDMHBQPTIFUKAQKDLTSAJFKABFEOABQGLKXNYWOIBDGXUBIVHWCYTMWAMSEKGYC");
    msg.acknowledge = 51U;
    msg.status = 188U;
    const signed char tmp_msg_0[] = {58, -61, -120, 52, 0, 116, 22, 33, 115, 83, 20, -26, -110, 102, -15, 71, 23, 126, 57, 69, 1, -81, 74, -68, 3, -53, -79, 95, 80, 110, 10, 93, -72, -18, 123, 90, -12, -99, -71, -115, -79, 43, -101, -5};
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
    msg.setTimeStamp(0.34705992114621087);
    msg.setSource(5640U);
    msg.setSourceEntity(47U);
    msg.setDestination(54062U);
    msg.setDestinationEntity(166U);
    msg.id = 93U;
    msg.range = 0.8575653829740698;

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
    msg.setTimeStamp(0.6457605363908934);
    msg.setSource(3661U);
    msg.setSourceEntity(198U);
    msg.setDestination(18490U);
    msg.setDestinationEntity(41U);
    msg.id = 127U;
    msg.range = 0.40332031383315525;

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
    msg.setTimeStamp(0.7986973336774397);
    msg.setSource(29565U);
    msg.setSourceEntity(50U);
    msg.setDestination(48053U);
    msg.setDestinationEntity(171U);
    msg.id = 214U;
    msg.range = 0.5108855042583567;

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
    msg.setTimeStamp(0.06929306394116286);
    msg.setSource(54208U);
    msg.setSourceEntity(67U);
    msg.setDestination(4423U);
    msg.setDestinationEntity(84U);
    msg.beacon.assign("RVNIHYENPHBTCANNBECLHOGKVHEGEYKZKHRXSENWMMFQXTDQOFRSGTXZLBPTMJGWLQVLOJSAIVCWFCVSJWCZNNNSBKUBJBGMPVNSGMLUGJOOCERZZYIQJPXMWMFSOADBEVPIYFKBIQCTZSPIMAYZZLOAXJWVDQWCOCUKOAJWHDIQCYRYUGDOPYPKEVLRRDUQPFKXUFHTEFZRRYEDVXNTUDGFTHAPYMTDJQDUIFASLIBZAWUMXJSXI");
    msg.lat = 0.2713422213006368;
    msg.lon = 0.27219707484733446;
    msg.depth = 0.6684438439762743;
    msg.query_channel = 230U;
    msg.reply_channel = 60U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.7329421827351164);
    msg.setSource(41905U);
    msg.setSourceEntity(70U);
    msg.setDestination(31218U);
    msg.setDestinationEntity(136U);
    msg.beacon.assign("PYWWUPKGGTTLMCAILFJXEIOBQYECQEHNVLEHTOSZUZTKZSNVNKKWFRNZSDIFPYGBVCQPMDRGTPGTJRHYHEHMPDKQICCNSYQJOLTELNQKAZKWM");
    msg.lat = 0.9993033102859826;
    msg.lon = 0.7417205270045499;
    msg.depth = 0.06531430862623122;
    msg.query_channel = 232U;
    msg.reply_channel = 210U;
    msg.transponder_delay = 23U;

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
    msg.setTimeStamp(0.6855620789344516);
    msg.setSource(18169U);
    msg.setSourceEntity(23U);
    msg.setDestination(10285U);
    msg.setDestinationEntity(120U);
    msg.beacon.assign("PDTGURUVXZJUHXMFNZOYFLPWIBRUJSYYQGCDYYNAANHGUKISKDEPYRWWOHJAVOZJXVHBYJTVHLNRCAXNIDSRMDCLPXXMYPTIXSTBCOPDIOLZAZMXPUZUDNCMDSBLFKEGBECQPCRSGEFXUIBAQRJFCIWVOITLOGET");
    msg.lat = 0.9531651970951004;
    msg.lon = 0.4610736950226364;
    msg.depth = 0.8601940631269773;
    msg.query_channel = 15U;
    msg.reply_channel = 180U;
    msg.transponder_delay = 76U;

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
    msg.setTimeStamp(0.7974973717321294);
    msg.setSource(27229U);
    msg.setSourceEntity(67U);
    msg.setDestination(10270U);
    msg.setDestinationEntity(213U);
    msg.op = 198U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SGHXWGSCUJHEBAOOIEWDTARGGQTQIVJZNCHWUDVNPLWDNSMSYCJEYORXAWGLXXUNPCSWYBZYAHVEEJAIXVRYLNBQUOQRFHEOAUBRJRGCHIQSMBZZTAKLMKMGDFYDEOKBFFADWSDVKVWJCWGKPFSLRK");
    tmp_msg_0.lat = 0.5752490361328559;
    tmp_msg_0.lon = 0.0973184850209119;
    tmp_msg_0.depth = 0.016096239939644486;
    tmp_msg_0.query_channel = 244U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 84U;
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
    msg.setTimeStamp(0.16562665287636213);
    msg.setSource(38876U);
    msg.setSourceEntity(217U);
    msg.setDestination(3105U);
    msg.setDestinationEntity(239U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.6833244197215324);
    msg.setSource(35289U);
    msg.setSourceEntity(169U);
    msg.setDestination(11854U);
    msg.setDestinationEntity(90U);
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
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.02027449919642066);
    msg.setSource(1892U);
    msg.setSourceEntity(217U);
    msg.setDestination(17480U);
    msg.setDestinationEntity(81U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 36046U;
    tmp_msg_0.value = 213U;
    tmp_msg_0.error.assign("FTCUXDGGFLRISZWCIBZJZBQQBOSMZCEJXXFLSEFAZBBVKTEGBXGLDKPWURKSCIQHPPBCWHDONVYWNYTHQLACHRHKHSLGGAAUNQUYCPTZMFINVKGWPVHYNBOQRILATQYUYPAGUJMJ");
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
    msg.setTimeStamp(0.8859824286141074);
    msg.setSource(22145U);
    msg.setSourceEntity(86U);
    msg.setDestination(61062U);
    msg.setDestinationEntity(142U);
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.6446201321682826;
    tmp_msg_0.i = 0.21898930092608015;
    tmp_msg_0.d = 0.2544892783765853;
    tmp_msg_0.a = 0.5927033142258537;
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
    msg.setTimeStamp(0.4072745353443121);
    msg.setSource(6437U);
    msg.setSourceEntity(234U);
    msg.setDestination(58735U);
    msg.setDestinationEntity(108U);
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.5141474602981609);
    msg.setSource(22658U);
    msg.setSourceEntity(121U);
    msg.setDestination(46032U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.44858566763060836;
    msg.lon = 0.0650987892278726;
    msg.depth = 0.23050829444293808;
    msg.sentence.assign("JJXIOQMRXYKOASPFQNLPYSKWSPHCYQNDLUENTDMWZLPCTKDQYZQNBRTVWKAFCPLHNXVPGZYYIANAGENJFBATFLAWIDE");
    msg.txtime = 0.08981203126976822;
    msg.modem_type.assign("UYKQTFCEJQTZOQYKMHZKRHDYPBECDKGTUSKLALJUWDZN");
    msg.sys_src.assign("QCGZYOIVEPLWTFYZNLNCNCHTVEEKRQINDUMUFVKEQSKZGUNRWBTDAZWPBFEHRSYASRYELFGVLAQKDTYVTMMCXSQUXJJWXHOIDVTQCHONVXCBKYVCNMRMNBKWJHECPPMDBCUGXHELBDBRZFJZXASISKFI");
    msg.seq = 40348U;
    msg.sys_dst.assign("BONSHTDGVSKFAKGZDICKNBSSVUCCOKRBTSQQTOYDEZAVOYNCTLFVVFPAQZZOEZPTLAYMJKIKLNDOPXYXOIRITCEGJPVGLXRMNULZWDJDCMTZBLAHSHWVJEGFEYCYCEVFIJNZAFEUTXLJWJIHHMAQWQZKJGPQPXOPBJEQQOTLHQLUNYBRUBVIDRGAMOFMAUHWBHNETXPBYHXNVSWEGKUXSJDQWCRZNFWCMMPAI");
    msg.flags = 104U;
    const signed char tmp_msg_0[] = {72, -104, -77, -4, -3, -78, -65, 13, -107, -16, 40, 78, -61, 65, 114, -13, -20, 12, -97, -54, 16, -87, 8, 23, 119, 29, 101, 101, -15, -29, 40, -34, -37, -126, 17, 81, 82, 85, -112, -9, 103, -7, -102, -23, -74, -78, 61, 86, 126, -115, 62, 47, 60, 3, -20, 92, 12, 111, 60, 103, 89, -87, 109, -4, -19, -55, -109, 3, -75, -115, 81, -23, 70, 111, 38, 106, -37, -61, 94, 123, 84, 120, -36, -85, -16, -57, 95, 41, 102, 81, -19, 40, 126, 100, -18, 126, 71, 77, -128, 16, 71, -99, -109, -34, 36, -111, -76, 96, -15, -16, -128, 108, -18, 26, -87, 72, -70, 55, -51, -108, 17, -39, 11, 43, 35, -65, -12, 9, -35, -41, -115, 97, 102, 101, -31, 48, -57, 42, 11, -32, 70, 26, 20, 40, 100, -109, -127, -68, -127, -105, -96, -99, 67, -118, 1, -103, 55, 104, -62, 63, -97, 53, 108, 9, -10, -128, -87, -15, 10, 74, -52, -88, 16, 64, 77, -123, -22, -2, -87, -42, 97, 74, 59, 102, -42, 51, -41, 105, 33, -61, 1, 101, -104, -78, -38, -43, -63, -6, -94, 22, -36, -122, -124, 70, -3};
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
    msg.setTimeStamp(0.6505409318187477);
    msg.setSource(44783U);
    msg.setSourceEntity(1U);
    msg.setDestination(55005U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.34906173421688225;
    msg.lon = 0.7449198489185924;
    msg.depth = 0.2867416570180563;
    msg.sentence.assign("TQJUSQLOYHJNZOSRGHZMWGQMHIGHGMWGKHPLMFIWGJERKFFKFNUKTBJTXFZNPNEDCGOWJNBVFVPWAKFGTXLXXBWBDRAKZXJYYMLOXIAQJKDNXLGWTOJTRSSIPOQZBVUSCDBLAIRTYYBBYYPURQLXIAHAYKZMVCQRAMCPZDONNBV");
    msg.txtime = 0.7556796638795743;
    msg.modem_type.assign("PHWVLXIHVFZBBDSOBYDAFHWKEEIQZHWQDWLNUXIKLRKKVTJJXCXVUZWEYKTOBDBJFXRGYLAZ");
    msg.sys_src.assign("VFZBMUWBEOJZVMWSVPOJIMGRGOYBYCJUCDDGSYMIKNWMQUPONDABXMZQYFIWHSLADVRVLNTGGVCJETVMGFAPNIYVRXAKXWEMKAYJBQHTBREDHLLVOULUSKEHN");
    msg.seq = 61614U;
    msg.sys_dst.assign("XHMEWDMJJFTXIJKPMYQNXFAVJGKCOINBEVOUIAEIFWJXPYNXAXWBNRBNICXUEOMKOKWYHUZQUVDKGOCSWLYDIYZUPCEUMQWZDKRVTVSSYFZOJATGAZNCAGGPRHLUUUIWTKGARMHK");
    msg.flags = 6U;
    const signed char tmp_msg_0[] = {-121, 88, 117, 55, -115, 20, -44, 31, 3, 46, 32, -17, -14, 1, 23, 99, 122, 105, 5, 118, 106, 82, 8, 8, 83, -40, -105, -47, -119, -106, -1, -104, -3, -2, -38, 111, -33, 31, -12, -99, 17, -4, 14, -42, -53, 23, 82, -83, 92, -51, -8, -10, -48, -114, 19, -120, 110, 14, -62, -56, -96, -80, -89, 103, -76, 65, -63, -85, -77, 116, 104, 52, 97, -38, 15, 75, 72, -50, 39, 99, 51, 34, 70, 22, -10, 41, -27, 19, -128, 90, -82, 123, -89, -124, 91, -75, -86, 69, 126, 94, -108, -115, -119, -60, 15, -124, -121, 58, -11, -56, -3, 106, -78, -15, -48, -100, 38, 25, 113, -37, 116, 70, -8, 47, 9, 10, 76, 86, 80, 68, -67, 29, 9, -84, -49, -117, -75, 109, 73, -95, -25, 120, -97, 6, -62, -108, -42, -39, -20, 69, -109, -99, 26, -112, -29, -1, 1, 123, 73, 64, -66, 35, 48, 35, -56, 21, -5, -69};
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
    msg.setTimeStamp(0.32570555688556024);
    msg.setSource(58114U);
    msg.setSourceEntity(209U);
    msg.setDestination(20754U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.2595637408272162;
    msg.lon = 0.29587548415919107;
    msg.depth = 0.18563521802543703;
    msg.sentence.assign("YSOSITKXDAMQAHYVJZMRLOECTGDUMXGWWWTNFYZWXJFFHHDUPGNKZU");
    msg.txtime = 0.6723396476277377;
    msg.modem_type.assign("CCITECHMUWPMLMSVFJJKXPPUMRRXYZFUVXBVAWZCXBGWEZLXZSEMYOQTWFHDILGPLOBHIWQTZIKYNUHJIOKVFJSOVDXWUJWFDCUM");
    msg.sys_src.assign("ITPNXNPLBCXUTIQSEWKFTFTWRAJBLTIIRJKXOZVZMRUXLCOWDZGGJQZUWEFYWUANJHNKHUPQSIWGHDOBXOEPOMLRHRELUBEBRFGBDIYMNLEQDGKOVMBPGALHZVRMRSTCHZQVNYADAJQSCOTIAGSVUNSJEOMFQXPSCBCVQQANYGTTBGUKEVNKIAXWROHLPERKDWECLJHSGWYNYZZC");
    msg.seq = 26331U;
    msg.sys_dst.assign("JUQEODBMRXHOUSAYDRBMGWJUISZQXNITUFPPWONDCZTKVOJPHHNLADSSBYWPRECROHCDAEZYRYXUMDYZWNVKNTTMZXKTYLENEFWEJMLPKWQGSHSLDIKSUNXNIGBIVKXBATWQHTUFYIWVCJVRFBGFLLGIOAKMYVRNBFQXTVJOIAVWMVFZUDDLDAPGRPEYCLGXOWQXMCJIQVJGZOGRFAHKZOQPMSHPRUJUYCTCLGKHXCSEAQSFANHTLCEBBKQB");
    msg.flags = 157U;
    const signed char tmp_msg_0[] = {-70, -24, 81, -117, -1, 96, 3, -27, 123, 97, 103, 0, 37, 41, 64, 77, 58, 125, -58, -2, -54, -102, 102, -72, -40, 52, -101, 123, 121, 100, -15, -92, -121, 70, -14, -118, 70, 5, -67, 11, -57, 74, 83, -80, -47, 52, 119, 90, 69};
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
    msg.setTimeStamp(0.3780910340920024);
    msg.setSource(42235U);
    msg.setSourceEntity(49U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(37U);
    msg.op = 128U;
    msg.system.assign("MYSBMRHVGTKFQEMCXIUGOWXPKLDJSLJZLNVRYIHJFJCSGLTYMCABIAVUGMZTMTZMTOKCOCZDPKDEKZTRBPGTHPVORUEKFEEQPZQZHWLVRXGAFNGJHQNGZHXDJYRIFKBBTXXIDXPSGXBWEVALQUJRFFITNBHQCUKPLGPSWATAVFZCINZMNO");
    msg.range = 0.3387554762727176;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.44519981892389093;
    tmp_msg_0.lon = 0.07828567265787645;
    tmp_msg_0.z = 0.4863473004310749;
    tmp_msg_0.z_units = 179U;
    tmp_msg_0.radius = 0.9921964158399624;
    tmp_msg_0.duration = 28764U;
    tmp_msg_0.speed = 0.7669401712770826;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.custom.assign("MJHTFIJMVFVLAINBSQHGXOKRCRZFRRBHAOGUUO");
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
    msg.setTimeStamp(0.021099595295920093);
    msg.setSource(63443U);
    msg.setSourceEntity(129U);
    msg.setDestination(35858U);
    msg.setDestinationEntity(231U);
    msg.op = 204U;
    msg.system.assign("JLMPUGVGUAFQNERSTRJWGBVBIHCOCUYAOFWDWZPVNOIAUKCUXFDLCFXOSVMYVBTFAIGKXLEHPFCWBQPVKHMQOUEVIXSWBUPBRGRKHQALJNWGLSWYYFZTTPTXEOFWSMLMNEYBSGXIHJYNEPEZJOWZUHLUJTKNZRGMDTDZRPOEKADRRPTQJZBBXRAQSCCH");
    msg.range = 0.4999372852437741;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("HCXBWORLCRYZHSKSYKXGZUYCMRPMWOPNTTZBVFABSYIHDBPAYMXBJ");
    tmp_msg_0.max_speed = 0.23114507924069028;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.lat = 0.9043068745001036;
    tmp_msg_0.lon = 0.47883881365750347;
    tmp_msg_0.z = 0.4657389154271122;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.custom.assign("EVAHTURDDZTZEWDQPAHHXOQRHVUZBEYGSHJLKLLUTGSEXWYJBPAASBSBFHVJYCVIFRQENCQQTYIKTDNHPMBMJEKEVUEAXLXVQFNWISECQUAYPMI");
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
    msg.setTimeStamp(0.14025374052265005);
    msg.setSource(12943U);
    msg.setSourceEntity(80U);
    msg.setDestination(25235U);
    msg.setDestinationEntity(131U);
    msg.op = 218U;
    msg.system.assign("BPNYRPJWNZQVXQLIKSIKKPONBWCNCDRHYEBHXXQWMAOPSYIBGTRNQVKDJNEFGAFZPVVATQGCCPWOQRFNDULMHKHXQTOOKSPLAOYXJMGUMUTUMETHLXUCVMWHYZYMWWTEOLRDHETVZYHAZBUCPFAWZKSJUXS");
    msg.range = 0.8361134806526234;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 14U;
    tmp_msg_0.value = 0.5920253238115362;
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
    msg.setTimeStamp(0.3258981583946269);
    msg.setSource(16603U);
    msg.setSourceEntity(24U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.23947563858807885);
    msg.setSource(12477U);
    msg.setSourceEntity(121U);
    msg.setDestination(25554U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.5757122937528939);
    msg.setSource(21241U);
    msg.setSourceEntity(85U);
    msg.setDestination(43328U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.7944170099690357);
    msg.setSource(65081U);
    msg.setSourceEntity(169U);
    msg.setDestination(49650U);
    msg.setDestinationEntity(115U);
    msg.list.assign("OHDUBUJYMWTFLKWUEAQYRXPTDJUXCLNVXPAJBZWETVTUNMVVTJBJMLFSSHQFRHXSINBUGFZIIRPPKWMESXIZGYAKZTNZSJPZIGWQOTEMBIMOCYYALRFZFODSHLFNQGAOKHAIQDQYVEAGNMVDTYRRCHKSIGOU");

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
    msg.setTimeStamp(0.9069476677507553);
    msg.setSource(38123U);
    msg.setSourceEntity(8U);
    msg.setDestination(38304U);
    msg.setDestinationEntity(215U);
    msg.list.assign("CSGZFDXXETLRGXKFBIUARLAUTOCLJQDMDZEFARHRSKPLMIVOWUFUGKMARGGWHYKSDGDVMJARNFCSTAKUJOOPDFEOKCGZPWVMJAEPXOLTDIESLKMZBOGYBVOVQQEATINICTBOFLNCGERNQJYXHXEUFNXBXWKZFHMDRVVPTAABZQLNBNYYRZQSSKSUWCQSIMTJFYCNWQXPJJJVZHNLYQYWBHPIWUSIXYIHKHNGTJHUYBRIT");

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
    msg.setTimeStamp(0.7715255565039649);
    msg.setSource(55872U);
    msg.setSourceEntity(237U);
    msg.setDestination(28953U);
    msg.setDestinationEntity(101U);
    msg.list.assign("PKZWNWUDEWIKRJWHHIRVSGTERIMUTSEOGVMOROAESNVVRIQUYMEJTJQDODDRZXKGMUGPTTELZLFYSEBPDXHNGQMXHLVBVRXRGUFFPAKNCLFTTHXDCALZNYIXZDNACOPXLAICSXIFJQKHNVSQWHBUJSBKOHBDEYAWUJGYUBVHPBAPCZPODXMGFPMONGQWXJFTSRTNMMFQUJVJBZWKSOUYENWTQHFBACYYPOADLVYW");

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
    msg.setTimeStamp(0.10853590434891536);
    msg.setSource(28952U);
    msg.setSourceEntity(39U);
    msg.setDestination(58389U);
    msg.setDestinationEntity(130U);
    msg.peer.assign("SCCLYTMOTWYGDXCKESKTLVPGYCTLOUWSNEROIJNNIMRDFOKMBTUAESABDESDOAHBIGOJUDUQYERICQSAGMAVUMEFGATVLQKNFGGGRIAJKKHNRLHGZWERFXFZYBDYYPMKJEQWDSXNDVHCACZVSJWDHNNCWXVAZXZBNGPHKPWXCUNKIRLQHBZHLPXUUTEWZERMWQIRJL");
    msg.rssi = 0.8571477896598493;
    msg.integrity = 13981U;

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
    msg.setTimeStamp(0.9230976615799403);
    msg.setSource(35053U);
    msg.setSourceEntity(139U);
    msg.setDestination(58093U);
    msg.setDestinationEntity(56U);
    msg.peer.assign("IESQDFLODBFHUCW");
    msg.rssi = 0.3628455618136206;
    msg.integrity = 92U;

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
    msg.setTimeStamp(0.36575440295587536);
    msg.setSource(51303U);
    msg.setSourceEntity(243U);
    msg.setDestination(33882U);
    msg.setDestinationEntity(134U);
    msg.peer.assign("LFWDWHQPJPTMRGLEDCFWDOQKKFHLIACTUUSICPBUZYUVOOROONINEGBBTUVAQEGJWVDBKTHSNGANLOFPMPJYTMVZHPTBEEIFFYRAR");
    msg.rssi = 0.2048306763728095;
    msg.integrity = 2049U;

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
    msg.setTimeStamp(0.06062743435796647);
    msg.setSource(57206U);
    msg.setSourceEntity(202U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(81U);
    msg.req_id = 61977U;
    msg.destination.assign("BWHFMPYITWKRNJSSNHHXSNFTJMWLBCIHCPKYGHGOBYEZKSWVELABBOGQYQTAOUNZFDJUWPSFCLGZJEHNGBLQCMEHZPQLXRPMUDDFYYTLCMOYVJPDTJWTVVTGAXNWKLLUJHKDMHQREOAIFOYYSEIATZPUGIUQRQBMCPSEZNIQWRFCZXFDQBVEEVGADONRBJASRDAXORVPXOOSMYLFEUADDCKXRWPKIXTCUJIFBJXITKMCVZVAVKLWRQUSZMNKG");
    msg.timeout = 0.7309968879738249;
    msg.range = 0.379148620404431;
    msg.type = 188U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 45934U;
    tmp_msg_0.flags = 139U;
    tmp_msg_0.lat = 0.9117390721297364;
    tmp_msg_0.lon = 0.3830560275138669;
    tmp_msg_0.start_z = 0.789699250515291;
    tmp_msg_0.start_z_units = 31U;
    tmp_msg_0.end_z = 0.7470438466810458;
    tmp_msg_0.end_z_units = 8U;
    tmp_msg_0.radius = 0.8278022196513648;
    tmp_msg_0.speed = 0.9550735062724709;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.custom.assign("IKGWIOXDPFVJKXMPZHFTPAGLRQGVYBXUOJJAYYDPAQFKLQATTXNZTGCYDDPOWIMDUBJORTQHMRLXGLBMVRSFECPAIDEAGCRQWCMUZCHUJULALCCOFESJQNZWOSIIYISMJABQEDFKLK");
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
    msg.setTimeStamp(0.3778898611897572);
    msg.setSource(6363U);
    msg.setSourceEntity(57U);
    msg.setDestination(22185U);
    msg.setDestinationEntity(30U);
    msg.req_id = 28597U;
    msg.destination.assign("YJOTORHDWFUAZDMXNQRKMCPWDLFVPYRZSTNXANKKAXIWDLDOJYSAGRVEZFTGMIAVDQNRGXBQIZKLESQWUPLSWPILKHCSZASGGQNQPTQYXEJECOPOIFJXNBPAJLCNZJTZLHHGABCGGBKUQMWDDAYJGLCMANFVMWWYMXCUHIKKRXOHHRMEFTFVWOPPTJBISVZQTHYERRNFFFSYCZSYRCSTOJDUM");
    msg.timeout = 0.21127626762332907;
    msg.range = 0.5399554896598743;
    msg.type = 165U;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.06628750445575227);
    msg.setSource(34513U);
    msg.setSourceEntity(3U);
    msg.setDestination(41599U);
    msg.setDestinationEntity(34U);
    msg.req_id = 55744U;
    msg.destination.assign("QMRFWHNWGVEJUZHEAHBPNZJDUSMJULTCPQBUCTHJKRCESFXAVKWAQWKPMYIQBQINSDGRQSHOEFUKMCRATOWVSCDGRIMGZDXQLFQYPYCFJLOHLPCRFYGPZCAKFWLJEMERKIDXXQVBUBVZPLOSMNAZVAJLXSDFUEKYVNGDZHFANVGXUBMKZEIDINKOURNURJLBGD");
    msg.timeout = 0.6923757019693039;
    msg.range = 0.05272533060158002;
    msg.type = 170U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 57035U;
    tmp_msg_0.name.assign("OKTBJXCKEAXSWVMHHNZKZVEQXSKESLIYCKBRAOJXXMXPWBSYRNQCLTGYHAUCEMJUQTUAKALPFDQGLGCVIQSIXSDXEIJJHVQJN");
    tmp_msg_0.custom.assign("ZQTCUMTFDVXTKYPIGVEYSTNRDRHXXWMOSCJOWQKOCLQFMRIOHBMVUYBTPJNIBGEZBSQUCIWFTCXCAOTDXNLMNSVJGZMJWSIJNHRGWADZKQFBWZLZYEGHRPTBLEZWEEFKAOMDAALPYQCJWOYCAJAFDGTKKBTNWZHAPHJQUVNBZO");
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
    msg.setTimeStamp(0.952837287819454);
    msg.setSource(61949U);
    msg.setSourceEntity(177U);
    msg.setDestination(29418U);
    msg.setDestinationEntity(247U);
    msg.req_id = 25944U;
    msg.type = 205U;
    msg.status = 140U;
    msg.info.assign("VXYPXASVCWBCVCFIYFZZAMOYGVXURFJAISAEHFREKIHGAEYGFBBKIAOTNZBQRBKWCUNVKPMDIMZKTMRUINMGJHSYWROBS");
    msg.range = 0.6386407106875156;

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
    msg.setTimeStamp(0.3198518739626952);
    msg.setSource(2109U);
    msg.setSourceEntity(214U);
    msg.setDestination(33622U);
    msg.setDestinationEntity(83U);
    msg.req_id = 57157U;
    msg.type = 141U;
    msg.status = 88U;
    msg.info.assign("EUPMEVWKUMLHGVECSYFPSRUQNYTBTAOEQBHAZJRHGGEJSTPPFGOWIYCJOBNMKFIYLTFIMNJZSPKPHATSGAJBKYFDFAHLGIJQOQTMUZGZKIIIWDAZVLBTVXCBFODRPFNFZECVQYPLARXNOJBKCSUODWYFKRNUHRPHWEBSYIKOLGAXWLWTVQQEXZHLJMVVHDBUXNDCZCJXXDUMDVWKMDUQOALXCEQMBMXHSYGGIVNNIPUQKOSCLWZ");
    msg.range = 0.07433717750025881;

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
    msg.setTimeStamp(0.6620264131219502);
    msg.setSource(26349U);
    msg.setSourceEntity(78U);
    msg.setDestination(15785U);
    msg.setDestinationEntity(35U);
    msg.req_id = 44303U;
    msg.type = 53U;
    msg.status = 238U;
    msg.info.assign("HNGQXQJBMSUKVTQITWRZNNMXNTPSPDNILTENYORJRYENKXMWHGEUZWYMDVFXJPFGGGAEIOGJYFO");
    msg.range = 0.0442852802882604;

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
    msg.setTimeStamp(0.07447295835281054);
    msg.setSource(22176U);
    msg.setSourceEntity(76U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(82U);
    msg.system.assign("FIGIOOBNASYKVCFUZFITXKLTPCPRNFKJURGTVYEWEVSNHLJUXFKQBVBQKIBEYRZGWIBPHYGNNIFVIAQTHAFWXQZHJKDTNAOWJZQTOQMGEQDJURDRBHDFDKHGFGCSOJZRWEPEHVUXYYXSASUCMPBZFLCVOUD");
    msg.op = 4U;

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
    msg.setTimeStamp(0.5639527352408817);
    msg.setSource(18702U);
    msg.setSourceEntity(117U);
    msg.setDestination(62524U);
    msg.setDestinationEntity(131U);
    msg.system.assign("HOZYVMRHBQGVWOKDXKAVRTSDPWUBBANSRUHXJQBIYANAEZBTCEKHSNHKLGDFPYUBYNNFZBXJDRLZMJTGLTC");
    msg.op = 189U;

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
    msg.setTimeStamp(0.6574162766178419);
    msg.setSource(20561U);
    msg.setSourceEntity(216U);
    msg.setDestination(63145U);
    msg.setDestinationEntity(121U);
    msg.system.assign("QWPEQHJTYUSQCNBLNXAAZUQGN");
    msg.op = 106U;

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
    msg.setTimeStamp(0.9835734036530552);
    msg.setSource(42191U);
    msg.setSourceEntity(58U);
    msg.setDestination(33946U);
    msg.setDestinationEntity(9U);
    msg.value = 5993;

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
    msg.setTimeStamp(0.5971482748431128);
    msg.setSource(27642U);
    msg.setSourceEntity(230U);
    msg.setDestination(55171U);
    msg.setDestinationEntity(171U);
    msg.value = -28377;

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
    msg.setTimeStamp(0.6531128185062471);
    msg.setSource(20716U);
    msg.setSourceEntity(42U);
    msg.setDestination(64828U);
    msg.setDestinationEntity(30U);
    msg.value = 19330;

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
    msg.setTimeStamp(0.9746506369500045);
    msg.setSource(62669U);
    msg.setSourceEntity(142U);
    msg.setDestination(46894U);
    msg.setDestinationEntity(228U);
    msg.value = 0.0068160933466761;

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
    msg.setTimeStamp(0.17374322795199781);
    msg.setSource(1939U);
    msg.setSourceEntity(84U);
    msg.setDestination(47564U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8066529919693567;

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
    msg.setTimeStamp(0.906680656206733);
    msg.setSource(61550U);
    msg.setSourceEntity(127U);
    msg.setDestination(20966U);
    msg.setDestinationEntity(22U);
    msg.value = 0.06263185606630128;

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
    msg.setTimeStamp(0.8706151890362559);
    msg.setSource(19970U);
    msg.setSourceEntity(189U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5533002601972704;

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
    msg.setTimeStamp(0.6454737709469336);
    msg.setSource(46370U);
    msg.setSourceEntity(92U);
    msg.setDestination(235U);
    msg.setDestinationEntity(30U);
    msg.value = 0.25145357265099144;

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
    msg.setTimeStamp(0.3012295492616358);
    msg.setSource(1984U);
    msg.setSourceEntity(133U);
    msg.setDestination(11117U);
    msg.setDestinationEntity(178U);
    msg.value = 0.45834861936566007;

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
    msg.setTimeStamp(0.9612834181891758);
    msg.setSource(34772U);
    msg.setSourceEntity(233U);
    msg.setDestination(27391U);
    msg.setDestinationEntity(80U);
    msg.validity = 13882U;
    msg.type = 83U;
    msg.utc_year = 6711U;
    msg.utc_month = 225U;
    msg.utc_day = 238U;
    msg.utc_time = 0.18742160092196947;
    msg.lat = 0.8224830584914596;
    msg.lon = 0.3085497781496995;
    msg.height = 0.11577094657550469;
    msg.satellites = 8U;
    msg.cog = 0.5455058366893746;
    msg.sog = 0.0957617515494994;
    msg.hdop = 0.8942710825075595;
    msg.vdop = 0.1793701262795142;
    msg.hacc = 0.031530186972523744;
    msg.vacc = 0.1657269869510848;

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
    msg.setTimeStamp(0.924246944706516);
    msg.setSource(12046U);
    msg.setSourceEntity(49U);
    msg.setDestination(30156U);
    msg.setDestinationEntity(86U);
    msg.validity = 58489U;
    msg.type = 208U;
    msg.utc_year = 30469U;
    msg.utc_month = 56U;
    msg.utc_day = 167U;
    msg.utc_time = 0.911538031597945;
    msg.lat = 0.6329550954734212;
    msg.lon = 0.3764141346592357;
    msg.height = 0.3882796201516677;
    msg.satellites = 56U;
    msg.cog = 0.32457360049996575;
    msg.sog = 0.032201292669891024;
    msg.hdop = 0.7316804472576448;
    msg.vdop = 0.9763365544835438;
    msg.hacc = 0.8559674997766047;
    msg.vacc = 0.1878267291973631;

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
    msg.setTimeStamp(0.5725650882881003);
    msg.setSource(61880U);
    msg.setSourceEntity(138U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(186U);
    msg.validity = 36194U;
    msg.type = 206U;
    msg.utc_year = 62120U;
    msg.utc_month = 246U;
    msg.utc_day = 214U;
    msg.utc_time = 0.5220228874383468;
    msg.lat = 0.7275506707506124;
    msg.lon = 0.5357442397233785;
    msg.height = 0.08925197239556193;
    msg.satellites = 48U;
    msg.cog = 0.8539700222505182;
    msg.sog = 0.03128830535149263;
    msg.hdop = 0.3639247262381786;
    msg.vdop = 0.459666723021959;
    msg.hacc = 0.3989031585773828;
    msg.vacc = 0.6663159240126062;

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
    msg.setTimeStamp(0.7571997434094903);
    msg.setSource(49612U);
    msg.setSourceEntity(192U);
    msg.setDestination(2296U);
    msg.setDestinationEntity(75U);
    msg.time = 0.686656050089693;
    msg.phi = 0.295952777702167;
    msg.theta = 0.8507525099462324;
    msg.psi = 0.6384232819348632;
    msg.psi_magnetic = 0.6535187933205578;

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
    msg.setTimeStamp(0.4321663724691158);
    msg.setSource(32720U);
    msg.setSourceEntity(133U);
    msg.setDestination(30182U);
    msg.setDestinationEntity(215U);
    msg.time = 0.6579279651573016;
    msg.phi = 0.9298909147629636;
    msg.theta = 0.749599879698414;
    msg.psi = 0.04816563212802549;
    msg.psi_magnetic = 0.8306076689406177;

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
    msg.setTimeStamp(0.5013141620475571);
    msg.setSource(39009U);
    msg.setSourceEntity(75U);
    msg.setDestination(26546U);
    msg.setDestinationEntity(128U);
    msg.time = 0.9384711104104541;
    msg.phi = 0.7431954804867971;
    msg.theta = 0.5662550961374498;
    msg.psi = 0.6810729522609282;
    msg.psi_magnetic = 0.5650689077896294;

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
    msg.setTimeStamp(0.8335393888029419);
    msg.setSource(53711U);
    msg.setSourceEntity(181U);
    msg.setDestination(4781U);
    msg.setDestinationEntity(47U);
    msg.time = 0.5305311967055372;
    msg.x = 0.014168035710765414;
    msg.y = 0.9859536258477727;
    msg.z = 0.2515328240976;
    msg.timestep = 0.6184338666277607;

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
    msg.setTimeStamp(0.35164527333480966);
    msg.setSource(14986U);
    msg.setSourceEntity(192U);
    msg.setDestination(54130U);
    msg.setDestinationEntity(40U);
    msg.time = 0.4119496660742681;
    msg.x = 0.47699765501460656;
    msg.y = 0.976979765645332;
    msg.z = 0.6463087768955728;
    msg.timestep = 0.6511484025420332;

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
    msg.setTimeStamp(0.4189795387212598);
    msg.setSource(15329U);
    msg.setSourceEntity(76U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(8U);
    msg.time = 0.31860819041867117;
    msg.x = 0.3142468935766821;
    msg.y = 0.3836069903936652;
    msg.z = 0.2521532183774676;
    msg.timestep = 0.9894881460873458;

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
    msg.setTimeStamp(0.8226520739305571);
    msg.setSource(33503U);
    msg.setSourceEntity(32U);
    msg.setDestination(62420U);
    msg.setDestinationEntity(165U);
    msg.time = 0.578959119713242;
    msg.x = 0.25121302963757486;
    msg.y = 0.5631317449217884;
    msg.z = 0.37462853913190386;

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
    msg.setTimeStamp(0.7754722055413326);
    msg.setSource(13575U);
    msg.setSourceEntity(23U);
    msg.setDestination(16096U);
    msg.setDestinationEntity(114U);
    msg.time = 0.06298451127136107;
    msg.x = 0.9488630081609856;
    msg.y = 0.7151328127611623;
    msg.z = 0.011772695708918701;

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
    msg.setTimeStamp(0.262127748628583);
    msg.setSource(13483U);
    msg.setSourceEntity(137U);
    msg.setDestination(21886U);
    msg.setDestinationEntity(147U);
    msg.time = 0.896898721467394;
    msg.x = 0.4072560881095405;
    msg.y = 0.06362312286280869;
    msg.z = 0.9949233446786985;

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
    msg.setTimeStamp(0.34867638563280423);
    msg.setSource(18831U);
    msg.setSourceEntity(15U);
    msg.setDestination(5788U);
    msg.setDestinationEntity(68U);
    msg.time = 0.32980286561735384;
    msg.x = 0.5827081059418953;
    msg.y = 0.5597175705561357;
    msg.z = 0.8371138788461545;

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
    msg.setTimeStamp(0.44284280139990473);
    msg.setSource(62290U);
    msg.setSourceEntity(59U);
    msg.setDestination(1726U);
    msg.setDestinationEntity(218U);
    msg.time = 0.6770297637747132;
    msg.x = 0.06480451313067104;
    msg.y = 0.8423683683848281;
    msg.z = 0.3235285770048648;

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
    msg.setTimeStamp(0.08510890545766225);
    msg.setSource(4335U);
    msg.setSourceEntity(224U);
    msg.setDestination(15828U);
    msg.setDestinationEntity(137U);
    msg.time = 0.8648346776553154;
    msg.x = 0.8953400218649828;
    msg.y = 0.2820775070339264;
    msg.z = 0.5695631846707373;

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
    msg.setTimeStamp(0.5147999641450545);
    msg.setSource(31141U);
    msg.setSourceEntity(47U);
    msg.setDestination(46593U);
    msg.setDestinationEntity(30U);
    msg.time = 0.7221947803847448;
    msg.x = 0.04267002670181064;
    msg.y = 0.5910066830697597;
    msg.z = 0.7332723024754291;

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
    msg.setTimeStamp(0.14084230129427333);
    msg.setSource(44184U);
    msg.setSourceEntity(222U);
    msg.setDestination(1681U);
    msg.setDestinationEntity(46U);
    msg.time = 0.3639188261116134;
    msg.x = 0.005716862029399805;
    msg.y = 0.7400075817405501;
    msg.z = 0.9690778403587663;

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
    msg.setTimeStamp(0.4329860645319844);
    msg.setSource(10624U);
    msg.setSourceEntity(162U);
    msg.setDestination(3013U);
    msg.setDestinationEntity(152U);
    msg.time = 0.952593008173876;
    msg.x = 0.1334366687983667;
    msg.y = 0.37499472887429075;
    msg.z = 0.8101746676869392;

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
    msg.setTimeStamp(0.8413567944804383);
    msg.setSource(29665U);
    msg.setSourceEntity(226U);
    msg.setDestination(52935U);
    msg.setDestinationEntity(239U);
    msg.validity = 116U;
    msg.x = 0.3751151499384253;
    msg.y = 0.8487363394233605;
    msg.z = 0.24021687317530538;

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
    msg.setTimeStamp(0.9856987318487621);
    msg.setSource(30505U);
    msg.setSourceEntity(106U);
    msg.setDestination(15615U);
    msg.setDestinationEntity(110U);
    msg.validity = 105U;
    msg.x = 0.5545426168832721;
    msg.y = 0.992741567273001;
    msg.z = 0.5506331790436492;

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
    msg.setTimeStamp(0.6129766588545069);
    msg.setSource(28757U);
    msg.setSourceEntity(29U);
    msg.setDestination(40330U);
    msg.setDestinationEntity(16U);
    msg.validity = 224U;
    msg.x = 0.37819934541246414;
    msg.y = 0.8983684038990868;
    msg.z = 0.7737217952918396;

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
    msg.setTimeStamp(0.2296288469207084);
    msg.setSource(34923U);
    msg.setSourceEntity(237U);
    msg.setDestination(57130U);
    msg.setDestinationEntity(140U);
    msg.validity = 127U;
    msg.x = 0.22884911919191064;
    msg.y = 0.01090011786975964;
    msg.z = 0.7846355197756931;

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
    msg.setTimeStamp(0.4243503688008998);
    msg.setSource(10666U);
    msg.setSourceEntity(198U);
    msg.setDestination(6126U);
    msg.setDestinationEntity(211U);
    msg.validity = 45U;
    msg.x = 0.8977623206231126;
    msg.y = 0.6089849290855726;
    msg.z = 0.6494381307075946;

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
    msg.setTimeStamp(0.099674930784315);
    msg.setSource(19201U);
    msg.setSourceEntity(157U);
    msg.setDestination(59696U);
    msg.setDestinationEntity(8U);
    msg.validity = 81U;
    msg.x = 0.5459262164690022;
    msg.y = 0.38647131862042783;
    msg.z = 0.36057044457696164;

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
    msg.setTimeStamp(0.0895817928136512);
    msg.setSource(54575U);
    msg.setSourceEntity(88U);
    msg.setDestination(46839U);
    msg.setDestinationEntity(167U);
    msg.time = 0.15331530991060782;
    msg.x = 0.7851326816462499;
    msg.y = 0.34070149867805555;
    msg.z = 0.3663106350172347;

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
    msg.setTimeStamp(0.9831527137075149);
    msg.setSource(57481U);
    msg.setSourceEntity(25U);
    msg.setDestination(13211U);
    msg.setDestinationEntity(27U);
    msg.time = 0.3549242122523075;
    msg.x = 0.170401106414658;
    msg.y = 0.1065189201635931;
    msg.z = 0.418900171944689;

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
    msg.setTimeStamp(0.08931788103776006);
    msg.setSource(27838U);
    msg.setSourceEntity(30U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(33U);
    msg.time = 0.5234529309728522;
    msg.x = 0.14125957304589964;
    msg.y = 0.29977664483036315;
    msg.z = 0.6856375293392617;

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
    msg.setTimeStamp(0.5278229482079755);
    msg.setSource(41787U);
    msg.setSourceEntity(216U);
    msg.setDestination(14133U);
    msg.setDestinationEntity(126U);
    msg.validity = 115U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2796430193276648;
    tmp_msg_0.beam_height = 0.7717664136207611;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9138392198718329;

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
    msg.setTimeStamp(0.7776466131569024);
    msg.setSource(35418U);
    msg.setSourceEntity(187U);
    msg.setDestination(32705U);
    msg.setDestinationEntity(193U);
    msg.validity = 121U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8130648582596739;
    tmp_msg_0.y = 0.9107355461119834;
    tmp_msg_0.z = 0.31229965683267413;
    tmp_msg_0.phi = 0.8107394257607665;
    tmp_msg_0.theta = 0.03852055094620643;
    tmp_msg_0.psi = 0.032277545025870547;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.40999943079389656;

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
    msg.setTimeStamp(0.09059545944236014);
    msg.setSource(46995U);
    msg.setSourceEntity(71U);
    msg.setDestination(38907U);
    msg.setDestinationEntity(50U);
    msg.validity = 66U;
    msg.value = 0.1168097652132376;

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
    msg.setTimeStamp(0.05782616749693359);
    msg.setSource(53726U);
    msg.setSourceEntity(109U);
    msg.setDestination(2927U);
    msg.setDestinationEntity(34U);
    msg.value = 0.19699845120562576;

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
    msg.setTimeStamp(0.3652594433540668);
    msg.setSource(3051U);
    msg.setSourceEntity(234U);
    msg.setDestination(6650U);
    msg.setDestinationEntity(17U);
    msg.value = 0.19521401731338717;

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
    msg.setTimeStamp(0.20767041679783926);
    msg.setSource(58579U);
    msg.setSourceEntity(124U);
    msg.setDestination(153U);
    msg.setDestinationEntity(102U);
    msg.value = 0.7454553701488609;

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
    msg.setTimeStamp(0.867776464520349);
    msg.setSource(56036U);
    msg.setSourceEntity(46U);
    msg.setDestination(50607U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0404889402431069;

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
    msg.setTimeStamp(0.26681094068200395);
    msg.setSource(21784U);
    msg.setSourceEntity(25U);
    msg.setDestination(60559U);
    msg.setDestinationEntity(190U);
    msg.value = 0.14696977834736535;

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
    msg.setTimeStamp(0.21267876040153166);
    msg.setSource(19024U);
    msg.setSourceEntity(121U);
    msg.setDestination(1339U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4596573264233289;

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
    msg.setTimeStamp(0.2995616877925935);
    msg.setSource(20994U);
    msg.setSourceEntity(9U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(89U);
    msg.value = 0.04780483755818277;

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
    msg.setTimeStamp(0.8957009801942758);
    msg.setSource(6269U);
    msg.setSourceEntity(8U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9205920318104458;

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
    msg.setTimeStamp(0.12664239876722683);
    msg.setSource(29898U);
    msg.setSourceEntity(25U);
    msg.setDestination(30455U);
    msg.setDestinationEntity(25U);
    msg.value = 0.7803383035433281;

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
    msg.setTimeStamp(0.5040878443505427);
    msg.setSource(57512U);
    msg.setSourceEntity(191U);
    msg.setDestination(11589U);
    msg.setDestinationEntity(173U);
    msg.value = 0.571428572388151;

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
    msg.setTimeStamp(0.7638770278117162);
    msg.setSource(3018U);
    msg.setSourceEntity(125U);
    msg.setDestination(30531U);
    msg.setDestinationEntity(252U);
    msg.value = 0.12337579088741057;

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
    msg.setTimeStamp(0.26916403745316875);
    msg.setSource(28377U);
    msg.setSourceEntity(186U);
    msg.setDestination(9187U);
    msg.setDestinationEntity(51U);
    msg.value = 0.33240327628999566;

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
    msg.setTimeStamp(0.2395640709186576);
    msg.setSource(51513U);
    msg.setSourceEntity(206U);
    msg.setDestination(6605U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7387798823241725;

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
    msg.setTimeStamp(0.018243020282788347);
    msg.setSource(23736U);
    msg.setSourceEntity(246U);
    msg.setDestination(44486U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6575759060926778;

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
    msg.setTimeStamp(0.2062843425798223);
    msg.setSource(58468U);
    msg.setSourceEntity(137U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(128U);
    msg.value = 0.457048104132476;

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
    msg.setTimeStamp(0.9748786280327898);
    msg.setSource(23236U);
    msg.setSourceEntity(41U);
    msg.setDestination(44964U);
    msg.setDestinationEntity(254U);
    msg.value = 0.3364272794981571;

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
    msg.setTimeStamp(0.08999780092775733);
    msg.setSource(58589U);
    msg.setSourceEntity(234U);
    msg.setDestination(47508U);
    msg.setDestinationEntity(208U);
    msg.value = 0.3550762187910532;

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
    msg.setTimeStamp(0.38590690839897834);
    msg.setSource(28343U);
    msg.setSourceEntity(137U);
    msg.setDestination(11237U);
    msg.setDestinationEntity(111U);
    msg.value = 0.21419372826646654;

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
    msg.setTimeStamp(0.7037098684518862);
    msg.setSource(44227U);
    msg.setSourceEntity(18U);
    msg.setDestination(30822U);
    msg.setDestinationEntity(181U);
    msg.value = 0.35442267699853647;

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
    msg.setTimeStamp(0.41153574468220755);
    msg.setSource(46957U);
    msg.setSourceEntity(227U);
    msg.setDestination(65229U);
    msg.setDestinationEntity(29U);
    msg.value = 0.6428058299090896;

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
    msg.setTimeStamp(0.007532381762176965);
    msg.setSource(22330U);
    msg.setSourceEntity(32U);
    msg.setDestination(23702U);
    msg.setDestinationEntity(239U);
    msg.value = 0.7394441790537353;

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
    msg.setTimeStamp(0.10953499913413856);
    msg.setSource(18248U);
    msg.setSourceEntity(249U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(59U);
    msg.value = 0.3450032303136884;

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
    msg.setTimeStamp(0.9276368272975033);
    msg.setSource(47554U);
    msg.setSourceEntity(155U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5018414759220289;

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
    msg.setTimeStamp(0.19794753573703294);
    msg.setSource(51895U);
    msg.setSourceEntity(23U);
    msg.setDestination(44204U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2658190960922888;

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
    msg.setTimeStamp(0.8214222740553266);
    msg.setSource(50795U);
    msg.setSourceEntity(58U);
    msg.setDestination(46473U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.5734030731138738;
    msg.speed = 0.5910540786327814;
    msg.turbulence = 0.5158154497435516;

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
    msg.setTimeStamp(0.24220521824959118);
    msg.setSource(18590U);
    msg.setSourceEntity(55U);
    msg.setDestination(53389U);
    msg.setDestinationEntity(31U);
    msg.direction = 0.656901433312849;
    msg.speed = 0.122308922817151;
    msg.turbulence = 0.6461294048043242;

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
    msg.setTimeStamp(0.6805781881447261);
    msg.setSource(57210U);
    msg.setSourceEntity(207U);
    msg.setDestination(62096U);
    msg.setDestinationEntity(29U);
    msg.direction = 0.5772402988717708;
    msg.speed = 0.9284797244541234;
    msg.turbulence = 0.6768301219265749;

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
    msg.setTimeStamp(0.3885278880249141);
    msg.setSource(9657U);
    msg.setSourceEntity(58U);
    msg.setDestination(5890U);
    msg.setDestinationEntity(217U);
    msg.value = 0.719836251451072;

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
    msg.setTimeStamp(0.021055505130257002);
    msg.setSource(1176U);
    msg.setSourceEntity(178U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5640457539368328;

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
    msg.setTimeStamp(0.5588902514843428);
    msg.setSource(5733U);
    msg.setSourceEntity(92U);
    msg.setDestination(23029U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2502787982695599;

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
    msg.setTimeStamp(0.9238119264725656);
    msg.setSource(61759U);
    msg.setSourceEntity(134U);
    msg.setDestination(20185U);
    msg.setDestinationEntity(112U);
    msg.value.assign("ULPBLEKSMQZSJIKBJYJAMSNYPPNSKUYRWCTWEUZFEPAZHYFOAFCFYHJNJCIVWYNCRTDNQPKBXHJCLWKWTIOGAXGUTJFRRUVENGJWMWPYOPXVOBILRYLEKZDQFRPZSBFTOEMXBTLRINHVAMXOH");

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
    msg.setTimeStamp(0.3126475711136484);
    msg.setSource(34718U);
    msg.setSourceEntity(160U);
    msg.setDestination(16593U);
    msg.setDestinationEntity(242U);
    msg.value.assign("QABDVJMHGZIGMPUSCFAOOEISBTQLSWBZDEPYJXJUDYIHKTWEQJSKKZNDMMFFSGKMFLEAIUZCFUNRVNFWCALXVZEWHHLWLKJVYAGLRORSEUGUVXRXCVCBLNREXXWVLTXRQBGBZDEFPIMMQCFZCJNY");

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
    msg.setTimeStamp(0.7185917943743351);
    msg.setSource(52105U);
    msg.setSourceEntity(5U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(55U);
    msg.value.assign("LUCPVNDDAWFNBIB");

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
    msg.setTimeStamp(0.3365973961802613);
    msg.setSource(35142U);
    msg.setSourceEntity(29U);
    msg.setDestination(18901U);
    msg.setDestinationEntity(56U);
    const signed char tmp_msg_0[] = {-77, -85, -86, -89, -22, 25, -45, -60, 59, 49, -19, -59, 109, -92, 4, 105, 61, 63, -67, -17, -15, -96, 61, -69, -121, -60, -40, -92, 25, -31, -73, -70};
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
    msg.setTimeStamp(0.854297754763484);
    msg.setSource(50953U);
    msg.setSourceEntity(101U);
    msg.setDestination(41020U);
    msg.setDestinationEntity(197U);
    const signed char tmp_msg_0[] = {113, -8, 27, -115, -55, -102, 124, 52, 58, -71, -116, -9, -124, -96, 61, 53, -115, -47, -8, -71, 81, 116, -123, 68, -46, 72, 32, -19, 35, -105, 49, 11, -53, 125, 43, -15, 16, 66, 71, -32, -9, -125, 78, 6, 67, -66, 101, -79, -6, 99, -50, -109, -115, 53, -1, -37, -5, 88, 68, -44, 81, -75, 29, 120, -33, -3, 45, 115, 28, -97, -126, -46, 88, -106, 112, -53, -10, -63, 85, 55, -32, -43, 41, -104, -1, 52, 23, -56, -93, 35, 4, 11, 43, -35, -113, -128, 26, -108, -15, -107, -12, 5, -123, -32, -55, -8, -113, 118, 48, -108, -10, 65, 104, 9, 5, 60, 5, 39, 15, 108, -17, 118, -73, 46, 82, 11, 7, -67, 32, 79, 71, 16, 104, 3, 27, -113, -78, -25, -69, -6, -67, 82, 18, 47, -62, -11, 8, 96, 50, -127, -94, 75, 28, 33, -106, -8, -112, -11, -22, 59, 34, -25, 90, -36, -107, -43, -84, -70, -38, -75, -37, -88, -48, 60, -102, -125, 109, 48, 7, 93, -56, -5, 36, -11, -83, -61, 8, 108, -50, 69, -123, -86, 44, -63, -12, -5, -22, 40, 110, 82, 33, 115, -49, 94, 27};
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
    msg.setTimeStamp(0.7479622560018961);
    msg.setSource(27496U);
    msg.setSourceEntity(4U);
    msg.setDestination(61299U);
    msg.setDestinationEntity(137U);
    const signed char tmp_msg_0[] = {30, 103, -20, -53, -66, 49, 16, 23, -24, 124, -66, 2, -119, 32, -69, 8, 87, -94, -3, 10, 4, 6, 42, 103, 25, -36, -76, 125, -4, -15, 100, 89, -115, 79, -83, 36, -97, 125, 4, -126, 26, 32, -60, -94, 100, -56, 64, 66, -44, 80, -100, -122, 49, 30, -67, 58, 102, 34, 18, -67, 117, 96, 75, 116, -13, 45, 17, 6, -102, -99, 98, -118, -64, -6, -72, -67, 120, -63, -55, -48, 10, 11, 12, 73, -80, 15, -31, -98, 94, -121, -94, 43, 63, 104, 27, 35, -58, 85, -29, -35, 67, 122, 123, -6, 110, 14, -80, -106, -58, 102, 25, 39, -33, 64, -119, -107, -74, 107, -83, -39, -49, -85, -106, -110, -6, 13, 0, -114, 88, -68, -84, -85, -71, -104, 50, -126, 49, 51, 23, -120, -107, -4, 6, 33, -48, -47, 111, -52, -47, 74, -27, 78, 120, -109, -54, -1, -125, -61, -34, -70, 39, -100, -102, -73, 125, -99, 121, -47, -7, -76, -52, -112, -1, -118, 33, 7, 41, 32, 75, 2, -16, -97, 32, 43, -62, 5, -106, -124, 115, 116, -105, 31, 43, 98, 83, -12, 105, -61, -25, -67, -124, -40, 65, 106, 14, 69, 65, 4, -70, 77, 106, -78, -31, -78, 50, -105, -82, -77, 22, 81, 47, 12, -41, -22, -125, -13, -70, -23, -36, -80, -16, 50, 7, -49, -80, -56, 37, -8};
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
    msg.setTimeStamp(0.6343225382301828);
    msg.setSource(52883U);
    msg.setSourceEntity(26U);
    msg.setDestination(52265U);
    msg.setDestinationEntity(248U);
    msg.value = 0.7849867509266965;

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
    msg.setTimeStamp(0.8554288735137665);
    msg.setSource(49507U);
    msg.setSourceEntity(159U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9872448830425957;

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
    msg.setTimeStamp(0.45962608584681697);
    msg.setSource(1303U);
    msg.setSourceEntity(109U);
    msg.setDestination(15213U);
    msg.setDestinationEntity(250U);
    msg.value = 0.272462723313203;

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
    msg.setTimeStamp(0.024022520700991423);
    msg.setSource(9383U);
    msg.setSourceEntity(250U);
    msg.setDestination(63988U);
    msg.setDestinationEntity(201U);
    msg.type = 217U;
    msg.frequency = 3790421823U;
    msg.min_range = 15504U;
    msg.max_range = 899U;
    msg.bits_per_point = 173U;
    msg.scale_factor = 0.7987977935300791;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.09617779703829898;
    tmp_msg_0.beam_height = 0.23537855416619813;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-101, 20, -52, 60, 60, -100, 7, -75, -29, -70, 125, 107, -101, -44, 55, 105, -89, -77, 76, 107, -51, 5, -88, 21, -102, 30, 86, -48, -87, 75, 71, 112, -128, -122, 43, 42, -104, -106, 61, -33, 56, -45, 48, -100, 59, 58, 77, 95, -49, 4, 29, -118, 1, -22, -8, -16, -21, 18, 12, 116, -57, 11, 80, 76, 115, 30, -37, -16, 45, 58, -93, -2, -20, -41, -50, 126, 17, 93, 7, -40, 15, -48, -10, 43, -37, 17, 80, 89, 78, 94, -123, -91, 48, 36, 1, -102, 95, 103, 119, -125, -89, -58, 125, 73, 111, 38, 76, -27, -113, 89, 100, 111, -79, 54, -64, -99, 75, 77, -23, 34, 104, 49, 69, 83, -70, 122, -35, 28, -88, 58, -94, -17, 96, -124, -95, 108, -77, -29, 34, 119, -92, -77, -13, -45, 51, 93, 117, 56, 98, 95, 76, 72, -13, 82, 97, 33, 83, 50, 4, 83};
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
    msg.setTimeStamp(0.13120852028162544);
    msg.setSource(35601U);
    msg.setSourceEntity(154U);
    msg.setDestination(39682U);
    msg.setDestinationEntity(52U);
    msg.type = 11U;
    msg.frequency = 1244575365U;
    msg.min_range = 56975U;
    msg.max_range = 35461U;
    msg.bits_per_point = 53U;
    msg.scale_factor = 0.2286195255113943;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7955471623971699;
    tmp_msg_0.beam_height = 0.7321300245045445;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-85, 124, -91, -14, 100, 52, -76, 121, 75, -24, 38, 119, 72, 67, 61, 81, -58, -113, 16, -81, 82, -35, -78, 28, 44, -49, -94, -28, 63, -9, -83, 98, -15, 42, -20, -33, 123, -122, 103, -73, -73, -30, -54, 37, 72, 112, 27, -79, -67, 75, 84, -101, 5, 20, 96, 3, 95, -45, -104, -79, 46, 18, -110, 22, 16};
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
    msg.setTimeStamp(0.0917228570884151);
    msg.setSource(38879U);
    msg.setSourceEntity(200U);
    msg.setDestination(38610U);
    msg.setDestinationEntity(32U);
    msg.type = 29U;
    msg.frequency = 3923450664U;
    msg.min_range = 10454U;
    msg.max_range = 39133U;
    msg.bits_per_point = 145U;
    msg.scale_factor = 0.5199449386429998;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.30600842102716064;
    tmp_msg_0.beam_height = 0.373181742663527;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-104, -81, 10, -25, -91, 26, -7, 24, 89, -111, -40, 66, -94, -6, -69, -120, 61, 72, 47, -103, -72, -6, -96, -100, -120, 120, 27, -102, -30, -46, 7, -39, -101, 91, -14, -128, -12, 118, 63, -49, -101, 36, 81, -31, 20, -23, 115, 50, -26, 9, 87, -97, -23, 77, 77, -84, 55, 124, 62, -16, 94, -1, -19, 91, 38, 20, -62, -95, 74, -1, 109, 85, 100, 2, -25, -20, -22, -15, -88, 93, 124, -8, -123, 75, 22, 70, 7, -64, -16, 64, -27, 99, -63, -11, 56, 2, 60, 117, 18, -98, -60, -117, -110, 86};
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
    msg.setTimeStamp(0.6988031380477173);
    msg.setSource(30926U);
    msg.setSourceEntity(113U);
    msg.setDestination(32975U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.8125010550704432);
    msg.setSource(43648U);
    msg.setSourceEntity(13U);
    msg.setDestination(19246U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.5208277128936929);
    msg.setSource(7617U);
    msg.setSourceEntity(77U);
    msg.setDestination(33001U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.07558232260496123);
    msg.setSource(26605U);
    msg.setSourceEntity(85U);
    msg.setDestination(5270U);
    msg.setDestinationEntity(143U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.36126520631225945);
    msg.setSource(43518U);
    msg.setSourceEntity(143U);
    msg.setDestination(16930U);
    msg.setDestinationEntity(112U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.24679712434607914);
    msg.setSource(23523U);
    msg.setSourceEntity(153U);
    msg.setDestination(10197U);
    msg.setDestinationEntity(195U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.7912665807570455);
    msg.setSource(4468U);
    msg.setSourceEntity(224U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(182U);
    msg.value = 0.3751267900541192;
    msg.confidence = 0.8858475366295966;
    msg.opmodes.assign("SVSZIVATHKMFEPKICBJXWNDUOQMAMFAAEMUPKGDDLWGLNOAQPBEJUJPWFURPLQVCYOJYESMUYMRDCTFMGGSHIQCIYVLKSSVJMWVCZHWSRLXOFEKVPMDZWDNIJQYXOTREXZBZUPADXHTOCMTHSR");

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
    msg.setTimeStamp(0.1100204071374592);
    msg.setSource(26672U);
    msg.setSourceEntity(246U);
    msg.setDestination(47241U);
    msg.setDestinationEntity(72U);
    msg.value = 0.9320494793038233;
    msg.confidence = 0.05427419694759672;
    msg.opmodes.assign("SYPGQYWFXMZLZQTGISJFLLZRERZQAESFMHALUHGDEYABUSCVRJCKBZAHIYRSEX");

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
    msg.setTimeStamp(0.04467231595029564);
    msg.setSource(55031U);
    msg.setSourceEntity(37U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(205U);
    msg.value = 0.9592662445544397;
    msg.confidence = 0.43537493699082963;
    msg.opmodes.assign("DXRSQIEBRFKVMMPFCIPFHTEHNWBUFENJZWXPXCGEGCPWNBWWYAFABIODCBNVDTYBXJQWBGSVVTPLZESQMWMGRXVODPEBRKLDAOJNIILCLTDITCSLGSEFJSJMYLBHHWJYRCXVLTUYIUMNPOZZIDGURZYLHSQANMQENSQFHXQXTKMKKLVPRHORCTBOHREUGOFFKTGVMQYJFACVAMTLUIQZJXUASDVDURNEYHOISK");

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
    msg.setTimeStamp(0.5634594846733347);
    msg.setSource(11199U);
    msg.setSourceEntity(85U);
    msg.setDestination(54558U);
    msg.setDestinationEntity(242U);
    msg.itow = 342245408U;
    msg.lat = 0.05040067433816375;
    msg.lon = 0.27501356329587645;
    msg.height_ell = 0.2545075154986054;
    msg.height_sea = 0.7922934626056117;
    msg.hacc = 0.2736779840895941;
    msg.vacc = 0.696475516401829;
    msg.vel_n = 0.6205773098848812;
    msg.vel_e = 0.4519969622899319;
    msg.vel_d = 0.4810744694476148;
    msg.speed = 0.00710592504173313;
    msg.gspeed = 0.776575958743719;
    msg.heading = 0.5005207799326046;
    msg.sacc = 0.1917922768542073;
    msg.cacc = 0.9544968525882869;

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
    msg.setTimeStamp(0.3378751466945962);
    msg.setSource(44342U);
    msg.setSourceEntity(92U);
    msg.setDestination(13330U);
    msg.setDestinationEntity(0U);
    msg.itow = 2587679674U;
    msg.lat = 0.11169795122963844;
    msg.lon = 0.3774005704007959;
    msg.height_ell = 0.6024536181658676;
    msg.height_sea = 0.07840071040171304;
    msg.hacc = 0.6718511916700547;
    msg.vacc = 0.14323513520425624;
    msg.vel_n = 0.16756620714145798;
    msg.vel_e = 0.2815916510392211;
    msg.vel_d = 0.6293880366617068;
    msg.speed = 0.5690654644988272;
    msg.gspeed = 0.3952801701864572;
    msg.heading = 0.09766321382045096;
    msg.sacc = 0.35328261296128416;
    msg.cacc = 0.6299699575862492;

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
    msg.setTimeStamp(0.8888989188540327);
    msg.setSource(16054U);
    msg.setSourceEntity(102U);
    msg.setDestination(34025U);
    msg.setDestinationEntity(5U);
    msg.itow = 886613217U;
    msg.lat = 0.8909867125336183;
    msg.lon = 0.5342932575895197;
    msg.height_ell = 0.1779472905586651;
    msg.height_sea = 0.5875840764061067;
    msg.hacc = 0.3800955801485879;
    msg.vacc = 0.9962922850029798;
    msg.vel_n = 0.17119178236692878;
    msg.vel_e = 0.39434520746958235;
    msg.vel_d = 0.631085978521805;
    msg.speed = 0.14606222862221818;
    msg.gspeed = 0.28364583562093926;
    msg.heading = 0.4871199849608995;
    msg.sacc = 0.819544696821306;
    msg.cacc = 0.32185952615240343;

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
    msg.setTimeStamp(0.004833432569748108);
    msg.setSource(34508U);
    msg.setSourceEntity(98U);
    msg.setDestination(56028U);
    msg.setDestinationEntity(154U);
    msg.id = 142U;
    msg.value = 0.4914445748294951;

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
    msg.setTimeStamp(0.2520528810909495);
    msg.setSource(1786U);
    msg.setSourceEntity(218U);
    msg.setDestination(3676U);
    msg.setDestinationEntity(244U);
    msg.id = 159U;
    msg.value = 0.12906655953652413;

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
    msg.setTimeStamp(0.19647267563623505);
    msg.setSource(50835U);
    msg.setSourceEntity(33U);
    msg.setDestination(61620U);
    msg.setDestinationEntity(104U);
    msg.id = 253U;
    msg.value = 0.9235556107962897;

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
    msg.setTimeStamp(0.006805909435010471);
    msg.setSource(43410U);
    msg.setSourceEntity(58U);
    msg.setDestination(52448U);
    msg.setDestinationEntity(11U);
    msg.x = 0.034405411059601154;
    msg.y = 0.7834363495234398;
    msg.z = 0.18590824473531742;
    msg.phi = 0.4063032998207968;
    msg.theta = 0.42548648162534664;
    msg.psi = 0.5169325337623751;

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
    msg.setTimeStamp(0.6598531125770125);
    msg.setSource(52567U);
    msg.setSourceEntity(74U);
    msg.setDestination(43393U);
    msg.setDestinationEntity(112U);
    msg.x = 0.25547794808074176;
    msg.y = 0.2995154446710482;
    msg.z = 0.9819383104368613;
    msg.phi = 0.7229826328533311;
    msg.theta = 0.45703734997371803;
    msg.psi = 0.877978557410809;

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
    msg.setTimeStamp(0.9981452398703049);
    msg.setSource(34949U);
    msg.setSourceEntity(218U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(17U);
    msg.x = 0.44859257348197445;
    msg.y = 0.6586373276841175;
    msg.z = 0.3497184638283699;
    msg.phi = 0.7370306449882332;
    msg.theta = 0.396498530074072;
    msg.psi = 0.20950335656366348;

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
    msg.setTimeStamp(0.1308704361189873);
    msg.setSource(57779U);
    msg.setSourceEntity(51U);
    msg.setDestination(28198U);
    msg.setDestinationEntity(41U);
    msg.beam_width = 0.215045065710617;
    msg.beam_height = 0.9537099309517854;

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
    msg.setTimeStamp(0.013492205685129877);
    msg.setSource(56248U);
    msg.setSourceEntity(194U);
    msg.setDestination(32823U);
    msg.setDestinationEntity(199U);
    msg.beam_width = 0.29243727552667564;
    msg.beam_height = 0.6176241719149139;

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
    msg.setTimeStamp(0.6570266782036437);
    msg.setSource(25529U);
    msg.setSourceEntity(246U);
    msg.setDestination(51880U);
    msg.setDestinationEntity(182U);
    msg.beam_width = 0.7892579036286093;
    msg.beam_height = 0.4183484645870814;

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
    msg.setTimeStamp(0.020900212207472846);
    msg.setSource(46355U);
    msg.setSourceEntity(7U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(38U);
    msg.sane = 99U;

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
    msg.setTimeStamp(0.043397809624065475);
    msg.setSource(19320U);
    msg.setSourceEntity(107U);
    msg.setDestination(5551U);
    msg.setDestinationEntity(186U);
    msg.sane = 34U;

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
    msg.setTimeStamp(0.6162697219329245);
    msg.setSource(6476U);
    msg.setSourceEntity(43U);
    msg.setDestination(64354U);
    msg.setDestinationEntity(31U);
    msg.sane = 250U;

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
    msg.setTimeStamp(0.8174828513251493);
    msg.setSource(24686U);
    msg.setSourceEntity(51U);
    msg.setDestination(23736U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5599615599756902;

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
    msg.setTimeStamp(0.7950978224293509);
    msg.setSource(17423U);
    msg.setSourceEntity(15U);
    msg.setDestination(15943U);
    msg.setDestinationEntity(50U);
    msg.value = 0.46809157142943303;

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
    msg.setTimeStamp(0.24836016083392898);
    msg.setSource(44323U);
    msg.setSourceEntity(7U);
    msg.setDestination(23936U);
    msg.setDestinationEntity(81U);
    msg.value = 0.1166320907795464;

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
    msg.setTimeStamp(0.8508079398404561);
    msg.setSource(44293U);
    msg.setSourceEntity(102U);
    msg.setDestination(44123U);
    msg.setDestinationEntity(121U);
    msg.value = 0.2607751047681094;

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
    msg.setTimeStamp(0.7745985680632094);
    msg.setSource(1632U);
    msg.setSourceEntity(70U);
    msg.setDestination(56441U);
    msg.setDestinationEntity(6U);
    msg.value = 0.24420990137291498;

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
    msg.setTimeStamp(0.8434636107140318);
    msg.setSource(36209U);
    msg.setSourceEntity(237U);
    msg.setDestination(45242U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8107828822026467;

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
    msg.setTimeStamp(0.47738275510575434);
    msg.setSource(3418U);
    msg.setSourceEntity(230U);
    msg.setDestination(44315U);
    msg.setDestinationEntity(180U);
    msg.value = 0.39014471249969307;

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
    msg.setTimeStamp(0.35266613810706005);
    msg.setSource(39306U);
    msg.setSourceEntity(78U);
    msg.setDestination(43075U);
    msg.setDestinationEntity(102U);
    msg.value = 0.23904701512101312;

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
    msg.setTimeStamp(0.8635108765816956);
    msg.setSource(17133U);
    msg.setSourceEntity(98U);
    msg.setDestination(12393U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9901420284798378;

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
    msg.setTimeStamp(0.35786322632952605);
    msg.setSource(36592U);
    msg.setSourceEntity(75U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8860578995921619;

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
    msg.setTimeStamp(0.7505844867291674);
    msg.setSource(65456U);
    msg.setSourceEntity(53U);
    msg.setDestination(57850U);
    msg.setDestinationEntity(226U);
    msg.value = 0.04097576880956877;

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
    msg.setTimeStamp(0.9029063427679743);
    msg.setSource(38557U);
    msg.setSourceEntity(244U);
    msg.setDestination(32355U);
    msg.setDestinationEntity(186U);
    msg.value = 0.19241291191821053;

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
    msg.setTimeStamp(0.9042633644556545);
    msg.setSource(28144U);
    msg.setSourceEntity(26U);
    msg.setDestination(16784U);
    msg.setDestinationEntity(37U);
    msg.value = 0.29386973078753875;

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
    msg.setTimeStamp(0.24580675354482462);
    msg.setSource(30767U);
    msg.setSourceEntity(146U);
    msg.setDestination(36572U);
    msg.setDestinationEntity(212U);
    msg.value = 0.7169049107237611;

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
    msg.setTimeStamp(0.005347372394031047);
    msg.setSource(52874U);
    msg.setSourceEntity(117U);
    msg.setDestination(35098U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5531286315499346;

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
    msg.setTimeStamp(0.7685178128386462);
    msg.setSource(56392U);
    msg.setSourceEntity(228U);
    msg.setDestination(53346U);
    msg.setDestinationEntity(69U);
    msg.value = 0.9331786403275858;

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
    msg.setTimeStamp(0.2633393680370476);
    msg.setSource(21968U);
    msg.setSourceEntity(232U);
    msg.setDestination(45390U);
    msg.setDestinationEntity(176U);
    msg.value = 0.467344115265526;

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
    msg.setTimeStamp(0.20652620425896695);
    msg.setSource(21936U);
    msg.setSourceEntity(99U);
    msg.setDestination(65437U);
    msg.setDestinationEntity(89U);
    msg.value = 0.18040457149710498;

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
    msg.setTimeStamp(0.9708580390284098);
    msg.setSource(59358U);
    msg.setSourceEntity(218U);
    msg.setDestination(6867U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9931347582587502;

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
    msg.setTimeStamp(0.7110080646138749);
    msg.setSource(16215U);
    msg.setSourceEntity(205U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(201U);
    msg.value = 0.2699449118011844;

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
    msg.setTimeStamp(0.942787448396116);
    msg.setSource(54374U);
    msg.setSourceEntity(151U);
    msg.setDestination(31149U);
    msg.setDestinationEntity(112U);
    msg.value = 0.17232446011722002;

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
    msg.setTimeStamp(0.08077608471716158);
    msg.setSource(11939U);
    msg.setSourceEntity(158U);
    msg.setDestination(51156U);
    msg.setDestinationEntity(155U);
    msg.value = 0.23486544707693335;

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
    msg.setTimeStamp(0.6480129640182837);
    msg.setSource(10841U);
    msg.setSourceEntity(7U);
    msg.setDestination(7192U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8699883150639461;

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
    msg.setTimeStamp(0.7291230623362849);
    msg.setSource(64443U);
    msg.setSourceEntity(251U);
    msg.setDestination(58322U);
    msg.setDestinationEntity(239U);
    msg.value = 0.7339897938113904;

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
    msg.setTimeStamp(0.29176179957596426);
    msg.setSource(36961U);
    msg.setSourceEntity(224U);
    msg.setDestination(32025U);
    msg.setDestinationEntity(224U);
    msg.validity = 7823U;
    msg.type = 0U;
    msg.tow = 4200541618U;
    msg.base_lat = 0.6420390403709433;
    msg.base_lon = 0.13994156348952225;
    msg.base_height = 0.5018884652235326;
    msg.n = 0.2728178186269675;
    msg.e = 0.9628857600987168;
    msg.d = 0.24320141355315505;
    msg.v_n = 0.9726539525547887;
    msg.v_e = 0.5251125301700508;
    msg.v_d = 0.8918177080704731;
    msg.satellites = 226U;
    msg.iar_hyp = 7358U;
    msg.iar_ratio = 0.891457220986452;

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
    msg.setTimeStamp(0.6045254323363929);
    msg.setSource(38767U);
    msg.setSourceEntity(50U);
    msg.setDestination(18922U);
    msg.setDestinationEntity(246U);
    msg.validity = 28999U;
    msg.type = 174U;
    msg.tow = 2546941566U;
    msg.base_lat = 0.443531911690798;
    msg.base_lon = 0.9269521770745816;
    msg.base_height = 0.8370047639070555;
    msg.n = 0.1133996954208224;
    msg.e = 0.32279059720474124;
    msg.d = 0.14834009946341653;
    msg.v_n = 0.6301164909149566;
    msg.v_e = 0.8160354786273694;
    msg.v_d = 0.11452178135949342;
    msg.satellites = 7U;
    msg.iar_hyp = 65142U;
    msg.iar_ratio = 0.3140158353192517;

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
    msg.setTimeStamp(0.19798294009362916);
    msg.setSource(21560U);
    msg.setSourceEntity(13U);
    msg.setDestination(55693U);
    msg.setDestinationEntity(92U);
    msg.validity = 29841U;
    msg.type = 90U;
    msg.tow = 545356722U;
    msg.base_lat = 0.7263241402642463;
    msg.base_lon = 0.7851147208064241;
    msg.base_height = 0.21709516085640124;
    msg.n = 0.8122890927081005;
    msg.e = 0.5792807731036778;
    msg.d = 0.13391933706083292;
    msg.v_n = 0.4060760810955524;
    msg.v_e = 0.7987044837645345;
    msg.v_d = 0.2721142204502245;
    msg.satellites = 222U;
    msg.iar_hyp = 49683U;
    msg.iar_ratio = 0.6539480009630466;

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
    msg.setTimeStamp(0.02696233149868621);
    msg.setSource(20989U);
    msg.setSourceEntity(135U);
    msg.setDestination(36416U);
    msg.setDestinationEntity(145U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3965938141501689;
    tmp_msg_0.lon = 0.5627631643535396;
    tmp_msg_0.height = 0.3068768091854839;
    tmp_msg_0.x = 0.6342265974966089;
    tmp_msg_0.y = 0.5185808705467446;
    tmp_msg_0.z = 0.15240877290393773;
    tmp_msg_0.phi = 0.012911524551752707;
    tmp_msg_0.theta = 0.6702907935110737;
    tmp_msg_0.psi = 0.8642607797159918;
    tmp_msg_0.u = 0.18600010211790552;
    tmp_msg_0.v = 0.38029486384541;
    tmp_msg_0.w = 0.375729707541252;
    tmp_msg_0.vx = 0.5139032490184169;
    tmp_msg_0.vy = 0.841067306965019;
    tmp_msg_0.vz = 0.7274612603985291;
    tmp_msg_0.p = 0.5271311711101371;
    tmp_msg_0.q = 0.3791314738837174;
    tmp_msg_0.r = 0.2624404832340633;
    tmp_msg_0.depth = 0.7533346743178052;
    tmp_msg_0.alt = 0.602408786794644;
    msg.state.set(tmp_msg_0);
    msg.type = 185U;

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
    msg.setTimeStamp(0.10424202205628541);
    msg.setSource(25537U);
    msg.setSourceEntity(24U);
    msg.setDestination(36846U);
    msg.setDestinationEntity(82U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9996941405362395;
    tmp_msg_0.lon = 0.5927244878682253;
    tmp_msg_0.height = 0.049363124507236344;
    tmp_msg_0.x = 0.7872501541051243;
    tmp_msg_0.y = 0.5818704742542956;
    tmp_msg_0.z = 0.03610269542727762;
    tmp_msg_0.phi = 0.5565893709829142;
    tmp_msg_0.theta = 0.5365823334694811;
    tmp_msg_0.psi = 0.49434234137377997;
    tmp_msg_0.u = 0.6221821541646212;
    tmp_msg_0.v = 0.030437579602362486;
    tmp_msg_0.w = 0.08095731171744103;
    tmp_msg_0.vx = 0.5755778022737218;
    tmp_msg_0.vy = 0.12468043664429973;
    tmp_msg_0.vz = 0.33326289848682644;
    tmp_msg_0.p = 0.4853426067443781;
    tmp_msg_0.q = 0.6106508052698713;
    tmp_msg_0.r = 0.4384640990606975;
    tmp_msg_0.depth = 0.9793642369198508;
    tmp_msg_0.alt = 0.538793679552035;
    msg.state.set(tmp_msg_0);
    msg.type = 88U;

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
    msg.setTimeStamp(0.9411587272518557);
    msg.setSource(29360U);
    msg.setSourceEntity(187U);
    msg.setDestination(20431U);
    msg.setDestinationEntity(194U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9824569771028833;
    tmp_msg_0.lon = 0.8715873363025264;
    tmp_msg_0.height = 0.5670100677337099;
    tmp_msg_0.x = 0.3375122085945387;
    tmp_msg_0.y = 0.06693501138963076;
    tmp_msg_0.z = 0.5600340624509093;
    tmp_msg_0.phi = 0.07389581931625444;
    tmp_msg_0.theta = 0.3955623611736815;
    tmp_msg_0.psi = 0.5518128513373587;
    tmp_msg_0.u = 0.2873486328149706;
    tmp_msg_0.v = 0.17744242537295907;
    tmp_msg_0.w = 0.8035217411697252;
    tmp_msg_0.vx = 0.6361426991058909;
    tmp_msg_0.vy = 0.8957412556620442;
    tmp_msg_0.vz = 0.38036359984089363;
    tmp_msg_0.p = 0.23086647042714292;
    tmp_msg_0.q = 0.5065240892946665;
    tmp_msg_0.r = 0.4524930097869774;
    tmp_msg_0.depth = 0.6926338582235712;
    tmp_msg_0.alt = 0.6775705129694799;
    msg.state.set(tmp_msg_0);
    msg.type = 150U;

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
    msg.setTimeStamp(0.05239819100535936);
    msg.setSource(26521U);
    msg.setSourceEntity(101U);
    msg.setDestination(42433U);
    msg.setDestinationEntity(161U);
    msg.value = 0.3680572406394109;

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
    msg.setTimeStamp(0.04904185362695879);
    msg.setSource(58012U);
    msg.setSourceEntity(56U);
    msg.setDestination(19227U);
    msg.setDestinationEntity(62U);
    msg.value = 0.20522715106830847;

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
    msg.setTimeStamp(0.12239591767995739);
    msg.setSource(13600U);
    msg.setSourceEntity(251U);
    msg.setDestination(48634U);
    msg.setDestinationEntity(59U);
    msg.value = 0.22906541674482295;

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
    msg.setTimeStamp(0.3165294743970526);
    msg.setSource(14536U);
    msg.setSourceEntity(215U);
    msg.setDestination(41140U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0876390388724243;

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
    msg.setTimeStamp(0.5209400125806443);
    msg.setSource(7738U);
    msg.setSourceEntity(154U);
    msg.setDestination(54591U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9019558215513117;

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
    msg.setTimeStamp(0.41982843987749263);
    msg.setSource(63352U);
    msg.setSourceEntity(72U);
    msg.setDestination(39440U);
    msg.setDestinationEntity(52U);
    msg.value = 0.1921819413370246;

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
    msg.setTimeStamp(0.8665190864404122);
    msg.setSource(14470U);
    msg.setSourceEntity(19U);
    msg.setDestination(64690U);
    msg.setDestinationEntity(148U);
    msg.value = 0.42267692726940986;

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
    msg.setTimeStamp(0.8200293839016359);
    msg.setSource(55014U);
    msg.setSourceEntity(214U);
    msg.setDestination(24048U);
    msg.setDestinationEntity(194U);
    msg.value = 0.16875743033760837;

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
    msg.setTimeStamp(0.6473594720848657);
    msg.setSource(60067U);
    msg.setSourceEntity(139U);
    msg.setDestination(21802U);
    msg.setDestinationEntity(86U);
    msg.value = 0.26451286916225136;

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
    msg.setTimeStamp(0.7682048158688107);
    msg.setSource(30752U);
    msg.setSourceEntity(17U);
    msg.setDestination(51223U);
    msg.setDestinationEntity(145U);
    msg.value = 0.29813810447365763;

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
    msg.setTimeStamp(0.21104670615682242);
    msg.setSource(35968U);
    msg.setSourceEntity(32U);
    msg.setDestination(353U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6214386464637703;

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
    msg.setTimeStamp(0.916112325388205);
    msg.setSource(13518U);
    msg.setSourceEntity(87U);
    msg.setDestination(54569U);
    msg.setDestinationEntity(251U);
    msg.value = 0.13144408786071993;

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
    msg.setTimeStamp(0.4274981228388006);
    msg.setSource(36364U);
    msg.setSourceEntity(80U);
    msg.setDestination(5377U);
    msg.setDestinationEntity(96U);
    msg.value = 0.07317949127123402;

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
    msg.setTimeStamp(0.5408165864497624);
    msg.setSource(52641U);
    msg.setSourceEntity(206U);
    msg.setDestination(20839U);
    msg.setDestinationEntity(47U);
    msg.value = 0.384510722811386;

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
    msg.setTimeStamp(0.6959581405534077);
    msg.setSource(41555U);
    msg.setSourceEntity(191U);
    msg.setDestination(41425U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3443074701486324;

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
    msg.setTimeStamp(0.8161121041835282);
    msg.setSource(54646U);
    msg.setSourceEntity(188U);
    msg.setDestination(62553U);
    msg.setDestinationEntity(219U);
    msg.id = 8U;
    msg.zoom = 246U;
    msg.action = 23U;

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
    msg.setTimeStamp(0.33862307127853297);
    msg.setSource(2926U);
    msg.setSourceEntity(15U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(223U);
    msg.id = 215U;
    msg.zoom = 4U;
    msg.action = 176U;

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
    msg.setTimeStamp(0.4282322873949721);
    msg.setSource(35649U);
    msg.setSourceEntity(143U);
    msg.setDestination(40939U);
    msg.setDestinationEntity(210U);
    msg.id = 69U;
    msg.zoom = 16U;
    msg.action = 241U;

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
    msg.setTimeStamp(0.5767915271016012);
    msg.setSource(45246U);
    msg.setSourceEntity(67U);
    msg.setDestination(32669U);
    msg.setDestinationEntity(109U);
    msg.id = 53U;
    msg.value = 0.9072944934107603;

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
    msg.setTimeStamp(0.2788156001206592);
    msg.setSource(47945U);
    msg.setSourceEntity(9U);
    msg.setDestination(3513U);
    msg.setDestinationEntity(69U);
    msg.id = 32U;
    msg.value = 0.2648890686078108;

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
    msg.setTimeStamp(0.06288417716783734);
    msg.setSource(38159U);
    msg.setSourceEntity(234U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(75U);
    msg.id = 246U;
    msg.value = 0.6921160570696124;

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
    msg.setTimeStamp(0.007663083695059303);
    msg.setSource(51385U);
    msg.setSourceEntity(34U);
    msg.setDestination(29035U);
    msg.setDestinationEntity(145U);
    msg.id = 209U;
    msg.value = 0.7586258383503001;

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
    msg.setTimeStamp(0.34386864805682504);
    msg.setSource(54050U);
    msg.setSourceEntity(125U);
    msg.setDestination(37275U);
    msg.setDestinationEntity(107U);
    msg.id = 45U;
    msg.value = 0.9946674024784934;

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
    msg.setTimeStamp(0.9000591129908563);
    msg.setSource(62085U);
    msg.setSourceEntity(239U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(251U);
    msg.id = 229U;
    msg.value = 0.59241873224019;

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
    msg.setTimeStamp(0.202072513956434);
    msg.setSource(6834U);
    msg.setSourceEntity(52U);
    msg.setDestination(30720U);
    msg.setDestinationEntity(27U);
    msg.id = 107U;
    msg.angle = 0.3450314925878757;

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
    msg.setTimeStamp(0.4267822990926874);
    msg.setSource(60951U);
    msg.setSourceEntity(41U);
    msg.setDestination(27872U);
    msg.setDestinationEntity(213U);
    msg.id = 211U;
    msg.angle = 0.27290161613600594;

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
    msg.setTimeStamp(0.16595998679376334);
    msg.setSource(27664U);
    msg.setSourceEntity(113U);
    msg.setDestination(30376U);
    msg.setDestinationEntity(174U);
    msg.id = 251U;
    msg.angle = 0.3762031626672081;

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
    msg.setTimeStamp(0.1074227074099281);
    msg.setSource(7067U);
    msg.setSourceEntity(63U);
    msg.setDestination(21205U);
    msg.setDestinationEntity(140U);
    msg.op = 14U;
    msg.actions.assign("TBQPWORQYDXPLHWGWV");

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
    msg.setTimeStamp(0.25968797643373687);
    msg.setSource(33837U);
    msg.setSourceEntity(230U);
    msg.setDestination(37873U);
    msg.setDestinationEntity(87U);
    msg.op = 206U;
    msg.actions.assign("DAQYUNOWSWAFRXLCMIWPRGTMWIVKHFPDFTYAJESOQRVLGDHBTEHZVLYJ");

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
    msg.setTimeStamp(0.6510864451797405);
    msg.setSource(47038U);
    msg.setSourceEntity(137U);
    msg.setDestination(43387U);
    msg.setDestinationEntity(252U);
    msg.op = 17U;
    msg.actions.assign("AQXFJLOHUPWAOBFBULVAVYXIYLSOYJDJVMGZGILOEOOBLGKGOLDENKQIWWPDGVPBPYIZNBIAYIRVXTNQUFTUOFFNKPECXJHWZEHHXUSLQKADNXCXJSMNZTRMKCSSUDQCCWEDCECSGGKJIDMJLFWRDFNJAFHRZBSSATMXIQAEDGHDJLBYWNVOXCVKEZYLQTOGCHPIQQUUNWWYUFETHTPSQRJHMRKRXZKFRAP");

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
    msg.setTimeStamp(0.6152588451918471);
    msg.setSource(36709U);
    msg.setSourceEntity(6U);
    msg.setDestination(58647U);
    msg.setDestinationEntity(57U);
    msg.actions.assign("TKAXREKRWPFVAXINRNKXUQYBRZZVRLQWKLEFYETNWHDBOHDTMTYTARFHVFICUZACLVZYOMMUMPIFVZEHHQDJOFRNDSQHLEMOZGWNBFXXMCTLXZSJHKNJEGOXSULCSEFGGZATKBBOQPEQSEZDYXPPDWJPSYQILAHIQRLFWNIDIZDTCWRJULGBCPVIPNCNCUWKUX");

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
    msg.setTimeStamp(0.2248371099707538);
    msg.setSource(42644U);
    msg.setSourceEntity(108U);
    msg.setDestination(55733U);
    msg.setDestinationEntity(238U);
    msg.actions.assign("FKVJVQVTAUQMAPCICMNQFODIOMWELCSIQUUZDGDXTDWKVNSODZAQAUDBHQNCJLUEK");

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
    msg.setTimeStamp(0.4018848586017275);
    msg.setSource(25731U);
    msg.setSourceEntity(104U);
    msg.setDestination(30874U);
    msg.setDestinationEntity(161U);
    msg.actions.assign("KCXFEGIVQBUQDTZSLNVPYBUTJLUWDFGHEQMCIONNXHGJFMDBHIKCFHHIXUWKCNPXQRKYACHMTUGUQYLHNEQEDMWGKAZRYAZJPRZWVNDREZDZKBJFUEKLWRDBMICOKAWCTVSSXKRLRCFJWWEJIVPQFAIPOSXFGHIZH");

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
    msg.setTimeStamp(0.23131829854585395);
    msg.setSource(2855U);
    msg.setSourceEntity(233U);
    msg.setDestination(44551U);
    msg.setDestinationEntity(15U);
    msg.button = 55U;
    msg.value = 117U;

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
    msg.setTimeStamp(0.7040659618177283);
    msg.setSource(20608U);
    msg.setSourceEntity(104U);
    msg.setDestination(8430U);
    msg.setDestinationEntity(140U);
    msg.button = 222U;
    msg.value = 179U;

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
    msg.setTimeStamp(0.7951209299861882);
    msg.setSource(54906U);
    msg.setSourceEntity(240U);
    msg.setDestination(42803U);
    msg.setDestinationEntity(236U);
    msg.button = 238U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.21436755690593767);
    msg.setSource(28717U);
    msg.setSourceEntity(156U);
    msg.setDestination(28496U);
    msg.setDestinationEntity(159U);
    msg.op = 12U;
    msg.text.assign("INWEUDUAHLFUSSVBATEGVMCEYPNACZMRXTRCSATMJBWTCBQQRBKCFFYUVZYQQPCSCJSJPNGRELTSLHJGZRIJJFQRKZYVDWPMBQXEKFTQODBYAJUIMPOZLIBCWHXZSILXSXXNKLLLEYOKUNGDTQHHFEWUAMYPOWRGGREOGFKIIPXHUQPCXYNMEAMDNTUWVQNOOZRPRDWFFJGVBBXHKJVLVZPKFEOAITADGVMZH");

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
    msg.setTimeStamp(0.5813055010011126);
    msg.setSource(1947U);
    msg.setSourceEntity(144U);
    msg.setDestination(823U);
    msg.setDestinationEntity(108U);
    msg.op = 18U;
    msg.text.assign("VUMAIALXAZKPWCYECQERHFVBEQPFOCHGSDNHRDBSOATFYDYGVDVMFLQUOVUIXMZXLRGSEDHHBCUPEEZXTIZWSQKTYJVGETNNPSKTQPZTBQVGOAWFOBUDPAPCBOMKTJIYEGOALMXYIFWTE");

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
    msg.setTimeStamp(0.5308025864632944);
    msg.setSource(51974U);
    msg.setSourceEntity(220U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(217U);
    msg.op = 57U;
    msg.text.assign("SSFPMMQTYVXJUPKEUORWKLFVBEAHFZNFXQQQVCYDZBCHWOIAYBZXVYAGODTZIYTVIZBLAERZXOFUXLAKXQTQUAUDFLREDKMOPCNFSRJGPTCUDLPZBJGNBWIGTNMJTVSTZFERHDYHOJ");

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
    msg.setTimeStamp(0.3396725491569622);
    msg.setSource(3635U);
    msg.setSourceEntity(105U);
    msg.setDestination(12667U);
    msg.setDestinationEntity(239U);
    msg.op = 169U;
    msg.time_remain = 0.23472537603473753;
    msg.sched_time = 0.04295579039800046;

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
    msg.setTimeStamp(0.09551262708446862);
    msg.setSource(24602U);
    msg.setSourceEntity(84U);
    msg.setDestination(56696U);
    msg.setDestinationEntity(84U);
    msg.op = 186U;
    msg.time_remain = 0.6936947540363491;
    msg.sched_time = 0.324830563855121;

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
    msg.setTimeStamp(0.416033700707767);
    msg.setSource(41330U);
    msg.setSourceEntity(35U);
    msg.setDestination(61671U);
    msg.setDestinationEntity(117U);
    msg.op = 58U;
    msg.time_remain = 0.17722639909544624;
    msg.sched_time = 0.4554017213201309;

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
    msg.setTimeStamp(0.5515495962084797);
    msg.setSource(3490U);
    msg.setSourceEntity(110U);
    msg.setDestination(45186U);
    msg.setDestinationEntity(240U);
    msg.name.assign("GIVAQPROWXCVKWRGGHTEMDCCVWLWZBJFUXJSXQNSRSOFJUTZPWGBVAANXDHZOBOLPSTFILKDZWEEFQNPTRKGDMCVLBJTKNQFFGELYIIXBHVJIPUVXJMHDHNIHEDEGDPVXXBCLSZUCIJPHDGKIUUUQRSGBYCSXTWYTENSOJCPPFHJXZHMQQQTKOGMILYSFZEDFAJUPQZHVEZMURSNYMCAARRMCAMBBRWQLLOWOALYTRVFOYOYBYKNAKEYDW");
    msg.op = 15U;
    msg.sched_time = 0.22211197755729684;

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
    msg.setTimeStamp(0.22225220641038856);
    msg.setSource(24863U);
    msg.setSourceEntity(155U);
    msg.setDestination(28415U);
    msg.setDestinationEntity(151U);
    msg.name.assign("GQAJVWNPEROPEYVZEZFVWSEZZAMQPWCINGMJHCLBVLURVAFROPJRMPJDCDBTZMDNKCQDYXBVWRNGNESHXOIUNUAAXKAEQT");
    msg.op = 171U;
    msg.sched_time = 0.8875160716841123;

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
    msg.setTimeStamp(0.6913565296587749);
    msg.setSource(32696U);
    msg.setSourceEntity(129U);
    msg.setDestination(4275U);
    msg.setDestinationEntity(53U);
    msg.name.assign("ZZINERSNJKHRXQURXWXAZRKBADVFXNTTGBSQTMIMNEVQBQUOJVQNZVIPLOFVBZESDKHVTOBMUFFGMATUMVHNSLTGMYAYLAHQDXYE");
    msg.op = 164U;
    msg.sched_time = 0.819112499991216;

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
    msg.setTimeStamp(0.8339959514031762);
    msg.setSource(33620U);
    msg.setSourceEntity(26U);
    msg.setDestination(34187U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.06901922232690327);
    msg.setSource(64676U);
    msg.setSourceEntity(235U);
    msg.setDestination(10647U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.18981945499768615);
    msg.setSource(40773U);
    msg.setSourceEntity(223U);
    msg.setDestination(24405U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.21964214578743657);
    msg.setSource(33222U);
    msg.setSourceEntity(158U);
    msg.setDestination(1724U);
    msg.setDestinationEntity(28U);
    msg.name.assign("TUYEHNVPNREKQWVKCECZIJW");
    msg.state = 162U;

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
    msg.setTimeStamp(0.9122384538697786);
    msg.setSource(25204U);
    msg.setSourceEntity(37U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(177U);
    msg.name.assign("PDWBVEAEYYWDWKHHUEVNBYLGTROGCKYBMOFWVBXSRXLJEMQZVIZIJKLNNYWRESNNLHMOHOMRHSLISMIYDDPUIYQTVMCBZKMAMLUZSJTVIGCASOGVXPLCFCTPODHKTRXWFDF");
    msg.state = 223U;

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
    msg.setTimeStamp(0.007819680638215254);
    msg.setSource(21696U);
    msg.setSourceEntity(23U);
    msg.setDestination(5846U);
    msg.setDestinationEntity(57U);
    msg.name.assign("LGFHBKLDMHOPURCCGDSIBUSFFWPSQMCMINNNUVLKVXUPJYRRNDKREEITOPAEDNWDWMGWIFMAAUHJIESQXBHITASEQFOSQLXQUWZCOQZYFYYTOJLONSQMBXKXKDMJJXVCMIZOCBXZCSDMUIRHOJWPRBQZBTTKHFYPHKZSWLKEGXBVNFAUIVGZETOHTAKZNRGAWGXTTMRBARPWPLYHCGJAPSANEGNYILDQCPFDTUZKYUJHQOLRYFVEVCJX");
    msg.state = 245U;

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
    msg.setTimeStamp(0.6064872975925194);
    msg.setSource(62493U);
    msg.setSourceEntity(29U);
    msg.setDestination(46572U);
    msg.setDestinationEntity(173U);
    msg.name.assign("FBOLUNVEQAGVYZODMMRCSOZXMHWNQNXEKR");
    msg.value = 51U;

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
    msg.setTimeStamp(0.48420520898852504);
    msg.setSource(34190U);
    msg.setSourceEntity(54U);
    msg.setDestination(39565U);
    msg.setDestinationEntity(65U);
    msg.name.assign("ONNAFMEBFBYNUBHHAUOAFQWVOQOMVKXZNUCEDAJXIXHBVJXDWSJMDEFVJGLFWIGVZEPBZMLLEGWLNEWMRYQURPLWTCMGDZTGE");
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
    msg.setTimeStamp(0.3592326234239642);
    msg.setSource(3594U);
    msg.setSourceEntity(140U);
    msg.setDestination(32458U);
    msg.setDestinationEntity(117U);
    msg.name.assign("HYZBYUTZRGYPATORODAFXGIFSKKMJAJOFACLNNJJEQD");
    msg.value = 183U;

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
    msg.setTimeStamp(0.5754625650570028);
    msg.setSource(5562U);
    msg.setSourceEntity(154U);
    msg.setDestination(4549U);
    msg.setDestinationEntity(173U);
    msg.name.assign("PJIKWWKDEKSONAEITVXBRRSCSBQCWHPZBTHLJSRHHTPPNGFKGEQAWREOVNCTBCTOKJDQBRPUGQFHUWDIWHDTCBDXIZYZ");

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
    msg.setTimeStamp(0.24689043033232916);
    msg.setSource(41615U);
    msg.setSourceEntity(215U);
    msg.setDestination(19555U);
    msg.setDestinationEntity(194U);
    msg.name.assign("KDHLFQIHHZSPVGNYVONLAYXMIBVQYUUEAHSXZQGBYSEBZYUFFGDCKNDDVMQTWUANMDDBWDTOIQBIZVBSXMARLJCJNPTSCVCLRLPYGHQEKSZXROEMUSBQUWPGFJGOVEZKERWOVNTJMVWZGKNXEOFQPCFJIHPWXCPKSWKSZYMGTFQJNIHZRYGQUDWLJWTRROBWIDOTIVRMAFPCIHTF");

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
    msg.setTimeStamp(0.2021565881788373);
    msg.setSource(19344U);
    msg.setSourceEntity(143U);
    msg.setDestination(45954U);
    msg.setDestinationEntity(237U);
    msg.name.assign("HGMZTNYRDMOOFTKJHHWIMADDKJAMEHFFMJEVZECJWIONNSGEQTYIMHWNLXKAIXKOFYSYAPRQZEKWBZVABWW");

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
    msg.setTimeStamp(0.1530097076952578);
    msg.setSource(4657U);
    msg.setSourceEntity(46U);
    msg.setDestination(40005U);
    msg.setDestinationEntity(147U);
    msg.name.assign("TFYOKMYYJCRJSJAOCSUVEERNPJNLIIQTPRJGTBQPJVIYGVBRPRCSXZWAUMKLKNLMXOGUDTKNMXPXUXDXOFLZKUZOOXWBVNHDGEFRZENRNFMWUNZHPYVUVBGQYEARRXHFQ");
    msg.value = 194U;

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
    msg.setTimeStamp(0.7096968900989999);
    msg.setSource(11081U);
    msg.setSourceEntity(44U);
    msg.setDestination(7393U);
    msg.setDestinationEntity(186U);
    msg.name.assign("GNMNUYFQRWHYZTEKDEKTRYSIJEGKQZZUHJLEPGEMYAYMZJNYNAXAWXZCKDVRLLCLDDZSPONHHLJTMZYHDSBFNVWXBPYIQGVIKPJVXCQOUFGPWPQZMSTILBFZGEZBWFWVMDAWAIMJPKLPHLDGFAVCTYOEWMQENIRXKOHAVYAFAQPXUVUCRONVCNHQTJQSFERJIHVUTOG");
    msg.value = 115U;

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
    msg.setTimeStamp(0.7749706670147697);
    msg.setSource(15614U);
    msg.setSourceEntity(206U);
    msg.setDestination(55272U);
    msg.setDestinationEntity(121U);
    msg.name.assign("XITNLAPUQJMJOQQGWNRKMNSFMHTEWMNAACQ");
    msg.value = 212U;

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
    msg.setTimeStamp(0.8246987343795223);
    msg.setSource(6400U);
    msg.setSourceEntity(202U);
    msg.setDestination(14879U);
    msg.setDestinationEntity(110U);
    msg.id = 94U;
    msg.period = 3336220901U;
    msg.duty_cycle = 1511863136U;

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
    msg.setTimeStamp(0.8492631569739512);
    msg.setSource(35353U);
    msg.setSourceEntity(244U);
    msg.setDestination(27608U);
    msg.setDestinationEntity(174U);
    msg.id = 194U;
    msg.period = 3413215590U;
    msg.duty_cycle = 1048139240U;

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
    msg.setTimeStamp(0.19391753559219438);
    msg.setSource(41351U);
    msg.setSourceEntity(206U);
    msg.setDestination(46488U);
    msg.setDestinationEntity(165U);
    msg.id = 183U;
    msg.period = 2734245782U;
    msg.duty_cycle = 1106722221U;

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
    msg.setTimeStamp(0.6073788221307009);
    msg.setSource(36101U);
    msg.setSourceEntity(51U);
    msg.setDestination(36720U);
    msg.setDestinationEntity(104U);
    msg.id = 162U;
    msg.period = 4143122186U;
    msg.duty_cycle = 3166746371U;

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
    msg.setTimeStamp(0.7900170270081944);
    msg.setSource(47596U);
    msg.setSourceEntity(136U);
    msg.setDestination(25841U);
    msg.setDestinationEntity(176U);
    msg.id = 246U;
    msg.period = 543174947U;
    msg.duty_cycle = 1234309017U;

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
    msg.setTimeStamp(0.028605727480652265);
    msg.setSource(59836U);
    msg.setSourceEntity(84U);
    msg.setDestination(7693U);
    msg.setDestinationEntity(62U);
    msg.id = 27U;
    msg.period = 1066492418U;
    msg.duty_cycle = 1308217090U;

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
    msg.setTimeStamp(0.6852566534368135);
    msg.setSource(49632U);
    msg.setSourceEntity(65U);
    msg.setDestination(39871U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.5265144433831149;
    msg.lon = 0.659432163405337;
    msg.height = 0.5744183687807453;
    msg.x = 0.9336354409507926;
    msg.y = 0.6615534922487355;
    msg.z = 0.5576804077179506;
    msg.phi = 0.1460915284251364;
    msg.theta = 0.4235656339643197;
    msg.psi = 0.5969694141356802;
    msg.u = 0.13837593833496364;
    msg.v = 0.3191725463757187;
    msg.w = 0.3024659051807361;
    msg.vx = 0.424415705736088;
    msg.vy = 0.4581721774662252;
    msg.vz = 0.7045655494098548;
    msg.p = 0.3717059772898347;
    msg.q = 0.9593370115966258;
    msg.r = 0.42097439143386783;
    msg.depth = 0.7174990497958158;
    msg.alt = 0.5204510497578141;

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
    msg.setTimeStamp(0.6353475730221664);
    msg.setSource(37902U);
    msg.setSourceEntity(139U);
    msg.setDestination(29328U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.5211758092525897;
    msg.lon = 0.8080419591495082;
    msg.height = 0.2067568762839027;
    msg.x = 0.06102172642577819;
    msg.y = 0.16247982607484301;
    msg.z = 0.2887661236892505;
    msg.phi = 0.901320518360254;
    msg.theta = 0.4718193673327741;
    msg.psi = 0.060097048569290434;
    msg.u = 0.11696522539193643;
    msg.v = 0.6060135589553974;
    msg.w = 0.9192985244929294;
    msg.vx = 0.7176408088931522;
    msg.vy = 0.2724478744171446;
    msg.vz = 0.7782017442187577;
    msg.p = 0.23728435799365466;
    msg.q = 0.45062475219545883;
    msg.r = 0.8669118859816364;
    msg.depth = 0.876306869642748;
    msg.alt = 0.32372866810762757;

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
    msg.setTimeStamp(0.5832585107481523);
    msg.setSource(39162U);
    msg.setSourceEntity(240U);
    msg.setDestination(43678U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.40172617579605174;
    msg.lon = 0.10196333957198633;
    msg.height = 0.19554602746078908;
    msg.x = 0.12726507444623836;
    msg.y = 0.7909897198193241;
    msg.z = 0.6579114012530934;
    msg.phi = 0.23889075521073755;
    msg.theta = 0.20500008091933986;
    msg.psi = 0.6147575774109126;
    msg.u = 0.4489924864898577;
    msg.v = 0.5072220420967957;
    msg.w = 0.15812641699367713;
    msg.vx = 0.4586695703400414;
    msg.vy = 0.4573248445851932;
    msg.vz = 0.09716752848480859;
    msg.p = 0.7427680753001877;
    msg.q = 0.9308713808577981;
    msg.r = 0.6864914189092045;
    msg.depth = 0.6574357773229202;
    msg.alt = 0.2525569125871783;

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
    msg.setTimeStamp(0.31455326713913045);
    msg.setSource(18724U);
    msg.setSourceEntity(146U);
    msg.setDestination(61876U);
    msg.setDestinationEntity(30U);
    msg.x = 0.3668496981204026;
    msg.y = 0.5953737044597877;
    msg.z = 0.5975524081971323;

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
    msg.setTimeStamp(0.22505072021523975);
    msg.setSource(23611U);
    msg.setSourceEntity(33U);
    msg.setDestination(55302U);
    msg.setDestinationEntity(85U);
    msg.x = 0.7119760241004093;
    msg.y = 0.9716689262002245;
    msg.z = 0.8798268048227483;

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
    msg.setTimeStamp(0.524204729545951);
    msg.setSource(32067U);
    msg.setSourceEntity(238U);
    msg.setDestination(285U);
    msg.setDestinationEntity(243U);
    msg.x = 0.06073179420596797;
    msg.y = 0.9583953499920798;
    msg.z = 0.1341918863171504;

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
    msg.setTimeStamp(0.47645623304151774);
    msg.setSource(24492U);
    msg.setSourceEntity(48U);
    msg.setDestination(106U);
    msg.setDestinationEntity(158U);
    msg.value = 0.2830288318050519;

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
    msg.setTimeStamp(0.9111318708765624);
    msg.setSource(9650U);
    msg.setSourceEntity(215U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(158U);
    msg.value = 0.34640485253461195;

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
    msg.setTimeStamp(0.7546265949523513);
    msg.setSource(64398U);
    msg.setSourceEntity(52U);
    msg.setDestination(60108U);
    msg.setDestinationEntity(73U);
    msg.value = 0.1086971589519381;

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
    msg.setTimeStamp(0.9701931533106197);
    msg.setSource(56273U);
    msg.setSourceEntity(162U);
    msg.setDestination(39877U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5252547585554389;

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
    msg.setTimeStamp(0.4827974678402305);
    msg.setSource(43998U);
    msg.setSourceEntity(149U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3096720111468203;

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
    msg.setTimeStamp(0.8135014849849849);
    msg.setSource(11126U);
    msg.setSourceEntity(131U);
    msg.setDestination(21210U);
    msg.setDestinationEntity(32U);
    msg.value = 0.4999824889064557;

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
    msg.setTimeStamp(0.6445583035121994);
    msg.setSource(63141U);
    msg.setSourceEntity(0U);
    msg.setDestination(43010U);
    msg.setDestinationEntity(9U);
    msg.x = 0.5690884982288066;
    msg.y = 0.6631148858347308;
    msg.z = 0.24001220553304414;
    msg.phi = 0.1528003660611087;
    msg.theta = 0.8510587399931641;
    msg.psi = 0.3294124072568799;
    msg.p = 0.7429010828307074;
    msg.q = 0.9964656544121716;
    msg.r = 0.2859183113770727;
    msg.u = 0.5891803922851298;
    msg.v = 0.5429239466604335;
    msg.w = 0.5548041397150046;
    msg.bias_psi = 0.6931647283031172;
    msg.bias_r = 0.9006553293618558;

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
    msg.setTimeStamp(0.6099121868561849);
    msg.setSource(2048U);
    msg.setSourceEntity(197U);
    msg.setDestination(21132U);
    msg.setDestinationEntity(36U);
    msg.x = 0.015349723454359365;
    msg.y = 0.4103038679633948;
    msg.z = 0.9575579097131126;
    msg.phi = 0.08221682707854017;
    msg.theta = 0.7983189816728684;
    msg.psi = 0.27845191276614156;
    msg.p = 0.9251974753748318;
    msg.q = 0.8102053209526395;
    msg.r = 0.2028389256975235;
    msg.u = 0.5681638323202597;
    msg.v = 0.43994787851069006;
    msg.w = 0.17370002780011018;
    msg.bias_psi = 0.3390863969294813;
    msg.bias_r = 0.7382372239844948;

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
    msg.setTimeStamp(0.8122513020845359);
    msg.setSource(5919U);
    msg.setSourceEntity(114U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(125U);
    msg.x = 0.9722941882615573;
    msg.y = 0.49728146986784394;
    msg.z = 0.7783561743945429;
    msg.phi = 0.9964018142129671;
    msg.theta = 0.5200870497976515;
    msg.psi = 0.5231698138943017;
    msg.p = 0.6784583691388739;
    msg.q = 0.9333902383985588;
    msg.r = 0.11962655649814335;
    msg.u = 0.28867364783964966;
    msg.v = 0.5726565570963976;
    msg.w = 0.8725311392901669;
    msg.bias_psi = 0.20656628869369587;
    msg.bias_r = 0.8797346176828246;

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
    msg.setTimeStamp(0.8936504062904626);
    msg.setSource(63647U);
    msg.setSourceEntity(94U);
    msg.setDestination(46301U);
    msg.setDestinationEntity(211U);
    msg.bias_psi = 0.9806469094772086;
    msg.bias_r = 0.5011651832810144;
    msg.cog = 0.3404312787531163;
    msg.cyaw = 0.26552804740995684;
    msg.lbl_rej_level = 0.15086395275782993;
    msg.gps_rej_level = 0.4963275920446115;
    msg.custom_x = 0.5662463267755277;
    msg.custom_y = 0.3807072987616952;
    msg.custom_z = 0.9967750851219649;

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
    msg.setTimeStamp(0.2544513445627036);
    msg.setSource(33792U);
    msg.setSourceEntity(82U);
    msg.setDestination(9307U);
    msg.setDestinationEntity(180U);
    msg.bias_psi = 0.887162522438335;
    msg.bias_r = 0.4994972495367461;
    msg.cog = 0.9946409933388812;
    msg.cyaw = 0.8254353872362133;
    msg.lbl_rej_level = 0.1670881456828539;
    msg.gps_rej_level = 0.718340765555852;
    msg.custom_x = 0.4528135979045619;
    msg.custom_y = 0.5913529444360561;
    msg.custom_z = 0.018792107277794345;

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
    msg.setTimeStamp(0.4334503370850833);
    msg.setSource(39738U);
    msg.setSourceEntity(86U);
    msg.setDestination(49434U);
    msg.setDestinationEntity(65U);
    msg.bias_psi = 0.8009129992460939;
    msg.bias_r = 0.1046345231184439;
    msg.cog = 0.7184804399259315;
    msg.cyaw = 0.2476080500592105;
    msg.lbl_rej_level = 0.49073501086176974;
    msg.gps_rej_level = 0.5858528682565157;
    msg.custom_x = 0.7683855043020237;
    msg.custom_y = 0.8391198402807225;
    msg.custom_z = 0.6201500720030544;

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
    msg.setTimeStamp(0.6168285699640318);
    msg.setSource(56321U);
    msg.setSourceEntity(153U);
    msg.setDestination(11818U);
    msg.setDestinationEntity(230U);
    msg.utc_time = 0.7601146300595644;
    msg.reason = 58U;

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
    msg.setTimeStamp(0.4958665719493267);
    msg.setSource(55304U);
    msg.setSourceEntity(1U);
    msg.setDestination(24960U);
    msg.setDestinationEntity(120U);
    msg.utc_time = 0.6242948741249633;
    msg.reason = 67U;

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
    msg.setTimeStamp(0.613428735778159);
    msg.setSource(13621U);
    msg.setSourceEntity(167U);
    msg.setDestination(46037U);
    msg.setDestinationEntity(144U);
    msg.utc_time = 0.34570583490715556;
    msg.reason = 34U;

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
    msg.setTimeStamp(0.8779799707903712);
    msg.setSource(49961U);
    msg.setSourceEntity(23U);
    msg.setDestination(15704U);
    msg.setDestinationEntity(98U);
    msg.id = 188U;
    msg.range = 0.39645539412645014;
    msg.acceptance = 140U;

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
    msg.setTimeStamp(0.19163872195148635);
    msg.setSource(39743U);
    msg.setSourceEntity(249U);
    msg.setDestination(64474U);
    msg.setDestinationEntity(63U);
    msg.id = 28U;
    msg.range = 0.2349469865169671;
    msg.acceptance = 181U;

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
    msg.setTimeStamp(0.7105193862101455);
    msg.setSource(18351U);
    msg.setSourceEntity(10U);
    msg.setDestination(27832U);
    msg.setDestinationEntity(11U);
    msg.id = 35U;
    msg.range = 0.6247449286227772;
    msg.acceptance = 195U;

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
    msg.setTimeStamp(0.03274643111471065);
    msg.setSource(23522U);
    msg.setSourceEntity(5U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(145U);
    msg.type = 189U;
    msg.reason = 249U;
    msg.value = 0.015678569414872334;
    msg.timestep = 0.3644832777779734;

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
    msg.setTimeStamp(0.16899723557110746);
    msg.setSource(31722U);
    msg.setSourceEntity(43U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(99U);
    msg.type = 234U;
    msg.reason = 74U;
    msg.value = 0.6391166366795467;
    msg.timestep = 0.7540113618589342;

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
    msg.setTimeStamp(0.2519747727409477);
    msg.setSource(23437U);
    msg.setSourceEntity(211U);
    msg.setDestination(36096U);
    msg.setDestinationEntity(91U);
    msg.type = 225U;
    msg.reason = 120U;
    msg.value = 0.8160571641565485;
    msg.timestep = 0.4137325517047442;

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
    msg.setTimeStamp(0.323260254660514);
    msg.setSource(9668U);
    msg.setSourceEntity(221U);
    msg.setDestination(34266U);
    msg.setDestinationEntity(25U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HSKYPYPWPFTXZVDOLQCYSRQVWSHRTGDTVFXXSHARSHMWUGIHBABAEKESXTKRQSJRZNLNYYJNOFTCENDBIJBZDTNJEKEDOULDLWINMUKCPUWEUKCMDHUVDHEPRYTICORDLPUIQ");
    tmp_msg_0.lat = 0.5142038624777238;
    tmp_msg_0.lon = 0.22855137468135234;
    tmp_msg_0.depth = 0.11079720579079833;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 245U;
    tmp_msg_0.transponder_delay = 37U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.09134097353354109;
    msg.y = 0.7415021586146985;
    msg.var_x = 0.2141086798102232;
    msg.var_y = 0.4216353501404497;
    msg.distance = 0.776897200622984;

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
    msg.setTimeStamp(0.7510376769672903);
    msg.setSource(43513U);
    msg.setSourceEntity(119U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(64U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ASYTLMKBCLNAWUZTJOAAXSLJTLVKYWGYNGPHLOFCEJEAWHBRRDLZZSKPLXMKLHJUGRQNNCTVOJKUAIPBDMMPFYJQBRSVYRGTUNKD");
    tmp_msg_0.lat = 0.584277063740282;
    tmp_msg_0.lon = 0.2954117116335898;
    tmp_msg_0.depth = 0.8541133946941002;
    tmp_msg_0.query_channel = 135U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 150U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9343338952177435;
    msg.y = 0.8257129650901187;
    msg.var_x = 0.5682179424541565;
    msg.var_y = 0.8998982659543187;
    msg.distance = 0.7654649783122249;

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
    msg.setTimeStamp(0.6236162131763734);
    msg.setSource(22701U);
    msg.setSourceEntity(142U);
    msg.setDestination(49751U);
    msg.setDestinationEntity(44U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IYPVZPLASBKMVONZDSZRZBDLKQJTXFOJUOAHKDIRDOQWHIFTVPGKXVVEATWXGZORQXGLNLBLUQWVRPMSGAKIMCCOLAJNWICTHABRXJIKCUIOKMUQBLGPHPSUKSEIWFJTBJYDHAMGERCODUEYZDHPHTCEDMHNRC");
    tmp_msg_0.lat = 0.2144206598457884;
    tmp_msg_0.lon = 0.12159193557468695;
    tmp_msg_0.depth = 0.1822550212818116;
    tmp_msg_0.query_channel = 165U;
    tmp_msg_0.reply_channel = 156U;
    tmp_msg_0.transponder_delay = 74U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.38544972751726525;
    msg.y = 0.5266839988648098;
    msg.var_x = 0.14954004616323968;
    msg.var_y = 0.20865521814181576;
    msg.distance = 0.2988988818666085;

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
    msg.setTimeStamp(0.46409972758968543);
    msg.setSource(11612U);
    msg.setSourceEntity(194U);
    msg.setDestination(50238U);
    msg.setDestinationEntity(193U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.5331185286397064);
    msg.setSource(46579U);
    msg.setSourceEntity(68U);
    msg.setDestination(17463U);
    msg.setDestinationEntity(70U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.7190870738288554);
    msg.setSource(49283U);
    msg.setSourceEntity(53U);
    msg.setDestination(54079U);
    msg.setDestinationEntity(167U);
    msg.state = 198U;

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
    msg.setTimeStamp(0.6189610981706298);
    msg.setSource(2131U);
    msg.setSourceEntity(120U);
    msg.setDestination(15464U);
    msg.setDestinationEntity(1U);
    msg.x = 0.9523976615838793;
    msg.y = 0.25726123311418647;
    msg.z = 0.748021764437805;

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
    msg.setTimeStamp(0.7564625040477457);
    msg.setSource(59447U);
    msg.setSourceEntity(246U);
    msg.setDestination(38807U);
    msg.setDestinationEntity(110U);
    msg.x = 0.5582467050624178;
    msg.y = 0.2765968017931093;
    msg.z = 0.42930408374027496;

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
    msg.setTimeStamp(0.3632171145328764);
    msg.setSource(56971U);
    msg.setSourceEntity(166U);
    msg.setDestination(3632U);
    msg.setDestinationEntity(179U);
    msg.x = 0.2223450407183798;
    msg.y = 0.46655627025019275;
    msg.z = 0.9721955212404335;

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
    msg.setTimeStamp(0.07236679205974617);
    msg.setSource(60153U);
    msg.setSourceEntity(16U);
    msg.setDestination(34126U);
    msg.setDestinationEntity(131U);
    msg.va = 0.6791613839262043;
    msg.aoa = 0.9190205891943819;
    msg.ssa = 0.4869421426490451;

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
    msg.setTimeStamp(0.031759024035108885);
    msg.setSource(54925U);
    msg.setSourceEntity(7U);
    msg.setDestination(9632U);
    msg.setDestinationEntity(72U);
    msg.va = 0.4317135967126977;
    msg.aoa = 0.6005696959185456;
    msg.ssa = 0.033893912375629554;

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
    msg.setTimeStamp(0.8841820314315055);
    msg.setSource(19059U);
    msg.setSourceEntity(247U);
    msg.setDestination(36089U);
    msg.setDestinationEntity(191U);
    msg.va = 0.15741658239536083;
    msg.aoa = 0.7115208714586134;
    msg.ssa = 0.5825572286657118;

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
    msg.setTimeStamp(0.8078958462773186);
    msg.setSource(30676U);
    msg.setSourceEntity(242U);
    msg.setDestination(23321U);
    msg.setDestinationEntity(68U);
    msg.value = 0.40275321134032727;

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
    msg.setTimeStamp(0.622582077802287);
    msg.setSource(24926U);
    msg.setSourceEntity(200U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(190U);
    msg.value = 0.09072697626969517;

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
    msg.setTimeStamp(0.9272437682290976);
    msg.setSource(35661U);
    msg.setSourceEntity(229U);
    msg.setDestination(55741U);
    msg.setDestinationEntity(95U);
    msg.value = 0.004049960433689104;

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
    msg.setTimeStamp(0.49097493991760577);
    msg.setSource(8698U);
    msg.setSourceEntity(219U);
    msg.setDestination(62989U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6054620802072647;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.10692904927763314);
    msg.setSource(31549U);
    msg.setSourceEntity(186U);
    msg.setDestination(47262U);
    msg.setDestinationEntity(246U);
    msg.value = 0.7079403742916038;
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
    msg.setTimeStamp(0.07003137138423265);
    msg.setSource(39004U);
    msg.setSourceEntity(124U);
    msg.setDestination(51116U);
    msg.setDestinationEntity(43U);
    msg.value = 0.47160497835680903;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.954362699099016);
    msg.setSource(21739U);
    msg.setSourceEntity(241U);
    msg.setDestination(64067U);
    msg.setDestinationEntity(207U);
    msg.value = 0.4478587913950345;
    msg.speed_units = 54U;

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
    msg.setTimeStamp(0.29825951658812333);
    msg.setSource(29312U);
    msg.setSourceEntity(90U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(25U);
    msg.value = 0.15967578828708107;
    msg.speed_units = 47U;

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
    msg.setTimeStamp(0.4696471554965955);
    msg.setSource(16038U);
    msg.setSourceEntity(63U);
    msg.setDestination(58284U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8979106544982872;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.8687371216802608);
    msg.setSource(54029U);
    msg.setSourceEntity(113U);
    msg.setDestination(54770U);
    msg.setDestinationEntity(38U);
    msg.value = 0.4920774333117923;

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
    msg.setTimeStamp(0.5336674562056228);
    msg.setSource(2408U);
    msg.setSourceEntity(142U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5099527406825473;

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
    msg.setTimeStamp(0.04676473300647466);
    msg.setSource(37892U);
    msg.setSourceEntity(127U);
    msg.setDestination(23541U);
    msg.setDestinationEntity(125U);
    msg.value = 0.06765775161086995;

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
    msg.setTimeStamp(0.06856443863755135);
    msg.setSource(54133U);
    msg.setSourceEntity(88U);
    msg.setDestination(55280U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4256144803024484;

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
    msg.setTimeStamp(0.5726843422594227);
    msg.setSource(14702U);
    msg.setSourceEntity(166U);
    msg.setDestination(21084U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9215976916642749;

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
    msg.setTimeStamp(0.7494327756947631);
    msg.setSource(56612U);
    msg.setSourceEntity(102U);
    msg.setDestination(2875U);
    msg.setDestinationEntity(38U);
    msg.value = 0.4734526365619881;

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
    msg.setTimeStamp(0.24027020753077033);
    msg.setSource(39225U);
    msg.setSourceEntity(125U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(50U);
    msg.value = 0.8782649678936306;

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
    msg.setTimeStamp(0.9431683828503119);
    msg.setSource(24054U);
    msg.setSourceEntity(64U);
    msg.setDestination(62930U);
    msg.setDestinationEntity(9U);
    msg.value = 0.03214845002724476;

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
    msg.setTimeStamp(0.7131757667912929);
    msg.setSource(26265U);
    msg.setSourceEntity(230U);
    msg.setDestination(41285U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6875342170895672;

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
    msg.setTimeStamp(0.5682254322321562);
    msg.setSource(17551U);
    msg.setSourceEntity(92U);
    msg.setDestination(55885U);
    msg.setDestinationEntity(222U);
    msg.path_ref = 1546889818U;
    msg.start_lat = 0.018133576558584052;
    msg.start_lon = 0.4961927347839974;
    msg.start_z = 0.03669956656210882;
    msg.start_z_units = 242U;
    msg.end_lat = 0.10601575019530585;
    msg.end_lon = 0.21988693119982727;
    msg.end_z = 0.9255818979638544;
    msg.end_z_units = 233U;
    msg.speed = 0.13699273060564765;
    msg.speed_units = 65U;
    msg.lradius = 0.6492419348286119;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.08704489309625452);
    msg.setSource(10463U);
    msg.setSourceEntity(26U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 4032253055U;
    msg.start_lat = 0.6023222039926653;
    msg.start_lon = 0.7255133784231724;
    msg.start_z = 0.21162838408589923;
    msg.start_z_units = 206U;
    msg.end_lat = 0.1989402704266683;
    msg.end_lon = 0.5842410997343586;
    msg.end_z = 0.28858790935294387;
    msg.end_z_units = 209U;
    msg.speed = 0.08723290794709515;
    msg.speed_units = 59U;
    msg.lradius = 0.9507343875667721;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.12171565215174107);
    msg.setSource(23985U);
    msg.setSourceEntity(130U);
    msg.setDestination(30325U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 2888998069U;
    msg.start_lat = 0.5267226700678848;
    msg.start_lon = 0.028440882152750757;
    msg.start_z = 0.5110472665951011;
    msg.start_z_units = 248U;
    msg.end_lat = 0.6998918125405762;
    msg.end_lon = 0.5260646981282989;
    msg.end_z = 0.18855077868139658;
    msg.end_z_units = 163U;
    msg.speed = 0.4834592206718048;
    msg.speed_units = 116U;
    msg.lradius = 0.8002523879324303;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.7672980018366437);
    msg.setSource(32795U);
    msg.setSourceEntity(210U);
    msg.setDestination(21150U);
    msg.setDestinationEntity(162U);
    msg.x = 0.07133902014708615;
    msg.y = 0.039011268188820836;
    msg.z = 0.5056442718184962;
    msg.k = 0.8785226890400373;
    msg.m = 0.9340170411062867;
    msg.n = 0.03633733107272852;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.8315329562062237);
    msg.setSource(30345U);
    msg.setSourceEntity(132U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(107U);
    msg.x = 0.2578062843383033;
    msg.y = 0.6760254398229093;
    msg.z = 0.3787927227352361;
    msg.k = 0.20202469495255826;
    msg.m = 0.5591695663407253;
    msg.n = 0.1850424843381402;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.737486892898628);
    msg.setSource(53732U);
    msg.setSourceEntity(253U);
    msg.setDestination(49613U);
    msg.setDestinationEntity(31U);
    msg.x = 0.12199011497465218;
    msg.y = 0.778063376079359;
    msg.z = 0.8183920411988986;
    msg.k = 0.980069802464568;
    msg.m = 0.5935227015792112;
    msg.n = 0.9159670980400423;
    msg.flags = 33U;

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
    msg.setTimeStamp(0.34716161761201125);
    msg.setSource(62132U);
    msg.setSourceEntity(220U);
    msg.setDestination(11036U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6179018484464841;

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
    msg.setTimeStamp(0.9059417844939346);
    msg.setSource(40290U);
    msg.setSourceEntity(140U);
    msg.setDestination(27569U);
    msg.setDestinationEntity(249U);
    msg.value = 0.8613237081129533;

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
    msg.setTimeStamp(0.14386711104396466);
    msg.setSource(52073U);
    msg.setSourceEntity(98U);
    msg.setDestination(14387U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7980457307586268;

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
    msg.setTimeStamp(0.276019461134272);
    msg.setSource(53695U);
    msg.setSourceEntity(245U);
    msg.setDestination(65494U);
    msg.setDestinationEntity(225U);
    msg.u = 0.7378559392454369;
    msg.v = 0.778986808903548;
    msg.w = 0.8007575946791914;
    msg.p = 0.8347326521291829;
    msg.q = 0.02411666624521691;
    msg.r = 0.16876307563503423;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.6021480633599311);
    msg.setSource(8298U);
    msg.setSourceEntity(15U);
    msg.setDestination(61474U);
    msg.setDestinationEntity(97U);
    msg.u = 0.08311027044090857;
    msg.v = 0.8777642138097573;
    msg.w = 0.0849271118264947;
    msg.p = 0.916147338716767;
    msg.q = 0.012259443719608853;
    msg.r = 0.8856056993843925;
    msg.flags = 99U;

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
    msg.setTimeStamp(0.28794247489271696);
    msg.setSource(18319U);
    msg.setSourceEntity(84U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(74U);
    msg.u = 0.4139276958617083;
    msg.v = 0.07000388977566263;
    msg.w = 0.6442556272802481;
    msg.p = 0.8486869952218505;
    msg.q = 0.3443967988297012;
    msg.r = 0.29277003007293834;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.576783329316157);
    msg.setSource(8391U);
    msg.setSourceEntity(175U);
    msg.setDestination(47653U);
    msg.setDestinationEntity(79U);
    msg.path_ref = 3329217088U;
    msg.start_lat = 0.07180156578617813;
    msg.start_lon = 0.6547804044201071;
    msg.start_z = 0.8809714398682;
    msg.start_z_units = 81U;
    msg.end_lat = 0.9408323546337902;
    msg.end_lon = 0.004555681777498211;
    msg.end_z = 0.9150885183198427;
    msg.end_z_units = 14U;
    msg.lradius = 0.4272158068007915;
    msg.flags = 72U;
    msg.x = 0.14433488297001917;
    msg.y = 0.4483942651866051;
    msg.z = 0.9940909373950096;
    msg.vx = 0.26346050973981083;
    msg.vy = 0.6940743646794648;
    msg.vz = 0.9762981027151821;
    msg.course_error = 0.10901114133798073;
    msg.eta = 21626U;

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
    msg.setTimeStamp(0.5428133183355383);
    msg.setSource(31946U);
    msg.setSourceEntity(240U);
    msg.setDestination(14053U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 3144679591U;
    msg.start_lat = 0.3404734527209867;
    msg.start_lon = 0.24049358672563137;
    msg.start_z = 0.8750971861947193;
    msg.start_z_units = 135U;
    msg.end_lat = 0.5784348968100119;
    msg.end_lon = 0.7476824154837657;
    msg.end_z = 0.19115546148657336;
    msg.end_z_units = 79U;
    msg.lradius = 0.4431859424607054;
    msg.flags = 79U;
    msg.x = 0.34419090548853826;
    msg.y = 0.7324605819466935;
    msg.z = 0.7669970438903078;
    msg.vx = 0.8939093716263616;
    msg.vy = 0.7390176581193749;
    msg.vz = 0.49260826685979575;
    msg.course_error = 0.11696470254687108;
    msg.eta = 44535U;

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
    msg.setTimeStamp(0.2825405554588367);
    msg.setSource(1875U);
    msg.setSourceEntity(136U);
    msg.setDestination(15114U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 1791994336U;
    msg.start_lat = 0.7838835699959957;
    msg.start_lon = 0.010396197633406379;
    msg.start_z = 0.4361107665808518;
    msg.start_z_units = 246U;
    msg.end_lat = 0.04741430441993333;
    msg.end_lon = 0.3442736516426269;
    msg.end_z = 0.011748436256914907;
    msg.end_z_units = 133U;
    msg.lradius = 0.28572424675043706;
    msg.flags = 244U;
    msg.x = 0.5787655377839978;
    msg.y = 0.27706039537745153;
    msg.z = 0.30715445763841065;
    msg.vx = 0.3476924445115902;
    msg.vy = 0.24356910345905614;
    msg.vz = 0.1872024992099922;
    msg.course_error = 0.9822633403859438;
    msg.eta = 49544U;

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
    msg.setTimeStamp(0.7062298494192705);
    msg.setSource(49604U);
    msg.setSourceEntity(8U);
    msg.setDestination(7183U);
    msg.setDestinationEntity(74U);
    msg.k = 0.6907880904403527;
    msg.m = 0.1186763158049765;
    msg.n = 0.9995376242628509;

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
    msg.setTimeStamp(0.2049230627644517);
    msg.setSource(51774U);
    msg.setSourceEntity(36U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(227U);
    msg.k = 0.41625752461725696;
    msg.m = 0.44182875407310507;
    msg.n = 0.8950959202458337;

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
    msg.setTimeStamp(0.3193537900906507);
    msg.setSource(11498U);
    msg.setSourceEntity(40U);
    msg.setDestination(19479U);
    msg.setDestinationEntity(151U);
    msg.k = 0.27662053724201363;
    msg.m = 0.19225981885995336;
    msg.n = 0.06132774766937987;

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
    msg.setTimeStamp(0.09503409067411805);
    msg.setSource(61281U);
    msg.setSourceEntity(204U);
    msg.setDestination(826U);
    msg.setDestinationEntity(157U);
    msg.p = 0.814521625517136;
    msg.i = 0.8250762153508763;
    msg.d = 0.799945683096175;
    msg.a = 0.9126739206842154;

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
    msg.setTimeStamp(0.9984237971679384);
    msg.setSource(31921U);
    msg.setSourceEntity(158U);
    msg.setDestination(55535U);
    msg.setDestinationEntity(42U);
    msg.p = 0.388384666836751;
    msg.i = 0.16154407785380953;
    msg.d = 0.8025260610950984;
    msg.a = 0.10492857526012966;

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
    msg.setTimeStamp(0.6358365490928328);
    msg.setSource(37754U);
    msg.setSourceEntity(68U);
    msg.setDestination(10571U);
    msg.setDestinationEntity(24U);
    msg.p = 0.4136755903352457;
    msg.i = 0.34542266657866705;
    msg.d = 0.337044599947377;
    msg.a = 0.14908166896362707;

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
    msg.setTimeStamp(0.9471129555995916);
    msg.setSource(23353U);
    msg.setSourceEntity(20U);
    msg.setDestination(48210U);
    msg.setDestinationEntity(183U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.8440713481185416);
    msg.setSource(41067U);
    msg.setSourceEntity(121U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(172U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.361537613541663);
    msg.setSource(50498U);
    msg.setSourceEntity(128U);
    msg.setDestination(36417U);
    msg.setDestinationEntity(223U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.6628747643365313);
    msg.setSource(26080U);
    msg.setSourceEntity(108U);
    msg.setDestination(57818U);
    msg.setDestinationEntity(84U);
    msg.x = 0.15113717278481842;
    msg.y = 0.5525212446417027;
    msg.z = 0.8593847946790956;
    msg.vx = 0.09724905616697321;
    msg.vy = 0.23932495698314826;
    msg.vz = 0.7735118428493456;
    msg.ax = 0.8031303629912783;
    msg.ay = 0.7442704559730436;
    msg.az = 0.0033338381912825232;
    msg.flags = 28548U;

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
    msg.setTimeStamp(0.942304969890544);
    msg.setSource(17317U);
    msg.setSourceEntity(164U);
    msg.setDestination(19721U);
    msg.setDestinationEntity(177U);
    msg.x = 0.6093875707428179;
    msg.y = 0.3623119533250133;
    msg.z = 0.6186003766379696;
    msg.vx = 0.8218641879156199;
    msg.vy = 0.9200391002811553;
    msg.vz = 0.7718618663740856;
    msg.ax = 0.9777390443772211;
    msg.ay = 0.22486909021030843;
    msg.az = 0.7467228427513114;
    msg.flags = 10017U;

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
    msg.setTimeStamp(0.007871169306547743);
    msg.setSource(54083U);
    msg.setSourceEntity(32U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(148U);
    msg.x = 0.9978060376594524;
    msg.y = 0.11707259366893996;
    msg.z = 0.24549710220131127;
    msg.vx = 0.37656786480551785;
    msg.vy = 0.871044470843809;
    msg.vz = 0.03836257572673085;
    msg.ax = 0.7070964736927823;
    msg.ay = 0.022663489163051387;
    msg.az = 0.35164639000635445;
    msg.flags = 35840U;

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
    msg.setTimeStamp(0.43179386629019334);
    msg.setSource(65290U);
    msg.setSourceEntity(215U);
    msg.setDestination(44003U);
    msg.setDestinationEntity(231U);
    msg.value = 0.7337893052372485;

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
    msg.setTimeStamp(0.7803869334028141);
    msg.setSource(57331U);
    msg.setSourceEntity(13U);
    msg.setDestination(55174U);
    msg.setDestinationEntity(88U);
    msg.value = 0.34245066574190464;

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
    msg.setTimeStamp(0.8497011368828223);
    msg.setSource(29558U);
    msg.setSourceEntity(124U);
    msg.setDestination(9568U);
    msg.setDestinationEntity(211U);
    msg.value = 0.6595726213315125;

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
    msg.setTimeStamp(0.8396816590248809);
    msg.setSource(27436U);
    msg.setSourceEntity(30U);
    msg.setDestination(44301U);
    msg.setDestinationEntity(170U);
    msg.timeout = 52616U;
    msg.lat = 0.8149433737199596;
    msg.lon = 0.8398240796022994;
    msg.z = 0.8483226920961041;
    msg.z_units = 235U;
    msg.speed = 0.6645775875295562;
    msg.speed_units = 103U;
    msg.roll = 0.01644073681300051;
    msg.pitch = 0.8518132254344433;
    msg.yaw = 0.7066622628018477;
    msg.custom.assign("QCUAYYIRIYHNDSZIDRECCFCXRBUOFBOZJIKVQQQEMJQNXTLDTYPJLPHSWTLVAZYMYVLCHXLHXLWVLVWSMGNAZHWNNYWFSZFZNSWUPSNMDIEFUGGDDTAVTJDZIGIFRJXQZERJXCBMPGAUDWOAJHOPBDYOKTWFAQPH");

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
    msg.setTimeStamp(0.5527950444203482);
    msg.setSource(36847U);
    msg.setSourceEntity(158U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(154U);
    msg.timeout = 37600U;
    msg.lat = 0.43469865329529755;
    msg.lon = 0.90175908032644;
    msg.z = 0.963140150805683;
    msg.z_units = 26U;
    msg.speed = 0.7862974799983145;
    msg.speed_units = 44U;
    msg.roll = 0.7410432146720538;
    msg.pitch = 0.15364928575209125;
    msg.yaw = 0.37494685375990533;
    msg.custom.assign("FXOCUQLHPEKTCKLZGASSQOIWZJRMTRXYIVFZGQDMNYGVDAZYXXFIHWSDNPLGZRVEDOLZWQKLRYEWPBEVOUDKCSYN");

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
    msg.setTimeStamp(0.15199060454561908);
    msg.setSource(44728U);
    msg.setSourceEntity(22U);
    msg.setDestination(31035U);
    msg.setDestinationEntity(193U);
    msg.timeout = 41205U;
    msg.lat = 0.7084809444753216;
    msg.lon = 0.3077898545311162;
    msg.z = 0.8010963575984554;
    msg.z_units = 117U;
    msg.speed = 0.031208139586035633;
    msg.speed_units = 168U;
    msg.roll = 0.13478743207707045;
    msg.pitch = 0.813376877329697;
    msg.yaw = 0.28785686692670875;
    msg.custom.assign("AWQHFFEYFJAFKVFWPAXEDNCMOIFNGCHSQLLUXJACJHNCQGICZHZDGWPJAUNEMJNEGBRBBZSELDYPRXCHVTOUCGQMXMYSIVONLDWIKZEYFCYBGYNTBSKRWOIVAKLJZYQXZAPDFQSXVKDIKHSZUUUVTLVAOOTGCWDJUAMNXLIUPKNROSJMOQTKNXLWEVSQLBPXHTTQWPUEHQJORRBZWRHIIYBRLDCBKJTIYRPBTOMDHFWM");

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
    msg.setTimeStamp(0.3369765764724252);
    msg.setSource(3996U);
    msg.setSourceEntity(199U);
    msg.setDestination(33225U);
    msg.setDestinationEntity(21U);
    msg.timeout = 46250U;
    msg.lat = 0.07921909679972261;
    msg.lon = 0.7989158168169347;
    msg.z = 0.7145954822549362;
    msg.z_units = 54U;
    msg.speed = 0.4873224054749994;
    msg.speed_units = 74U;
    msg.duration = 11620U;
    msg.radius = 0.7462146325256261;
    msg.flags = 214U;
    msg.custom.assign("SZDHJKTFPWPKNPCQSSXPGONRCHERZLPRLUISGFIWZNJLGUCUUQWFTDPMDYLNXMCOUQADAZOXVGZQUCHFHVMXDEGUBAIZVACHBLNYMYIWORBZVJMVJKXLTKVYKBWDAIRSAQEGKMFWBEQOIOWMBAJXYPGVFINGLZFGMYJHHDITNBKUTIXYEEWBUEESHBKHQEMWTQOPFPLKEHSJNAYRMJCVOLCVSV");

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
    msg.setTimeStamp(0.3191137035727707);
    msg.setSource(29408U);
    msg.setSourceEntity(204U);
    msg.setDestination(45488U);
    msg.setDestinationEntity(241U);
    msg.timeout = 12188U;
    msg.lat = 0.15212298571360006;
    msg.lon = 0.26200211102955717;
    msg.z = 0.5582603630277068;
    msg.z_units = 151U;
    msg.speed = 0.4878269004493918;
    msg.speed_units = 247U;
    msg.duration = 40142U;
    msg.radius = 0.07092884328741333;
    msg.flags = 206U;
    msg.custom.assign("QONUXXZFZEOGTKSYHDMXNMEHUZFBLIALOQFJUFCPPQMMQLUYZBTIJNTMDRGIVNSRHJSWFCRSPSLPKLGPOWUNXRVOMIOCHYPGUCEZJPNHNRGPKPXGCLDMFSVEWRUVIHRVALXMTFAFYSQXAYDIWVQCDYJGHBVBTTFEDQJKJBEYPVXITVGW");

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
    msg.setTimeStamp(0.4279509883814986);
    msg.setSource(27859U);
    msg.setSourceEntity(127U);
    msg.setDestination(62746U);
    msg.setDestinationEntity(106U);
    msg.timeout = 48648U;
    msg.lat = 0.6850828931256836;
    msg.lon = 0.9158051835040243;
    msg.z = 0.1180824415091477;
    msg.z_units = 250U;
    msg.speed = 0.6088685562235827;
    msg.speed_units = 143U;
    msg.duration = 33539U;
    msg.radius = 0.3154524512029945;
    msg.flags = 175U;
    msg.custom.assign("ALRNSRMXINTZSOGVWFBIBTOJFIEQYAQWPYCIGZPJYNWCSHJHDWYXRESNDUIVEYJZHQEURQPDCEBNFRTZDWEPLUFZOEVVKQHMQJMNELXBWPAZYUSLCPSKUKOXAD");

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
    msg.setTimeStamp(0.8833176540386635);
    msg.setSource(35680U);
    msg.setSourceEntity(53U);
    msg.setDestination(47129U);
    msg.setDestinationEntity(97U);
    msg.custom.assign("YYCHBQQLFDIDTBFUHGJVNYYXKLQAPDOCGQZJWZANCZAXBSYIJLZIKTNCWMLPTUMSFHPRMNTSMRNSUDCECOPJEAJFYOWIIS");

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
    msg.setTimeStamp(0.6255006350645289);
    msg.setSource(57264U);
    msg.setSourceEntity(148U);
    msg.setDestination(33052U);
    msg.setDestinationEntity(75U);
    msg.custom.assign("GRYIOWMSWRVUFNYRUBVKSLCQMSKMUEPIZBZAKBFNLHPMSPMDOBENEGTOPQC");

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
    msg.setTimeStamp(0.6666301757489707);
    msg.setSource(39263U);
    msg.setSourceEntity(27U);
    msg.setDestination(204U);
    msg.setDestinationEntity(164U);
    msg.custom.assign("JGJUCIFKSYAHELNFFNTIPTVMICHMMCIZLWNPENKQCQPSBTHKGFUYDRBBRZCSWFJPQXOJIUEHYQEPBHTTHBVPBGUJZLATYXDZTVBBWDSIGUQESSLOMDKCCXJWOLBSHMUQRQTKLXOWVJHAIDYGWLWXTTLRVLQNQVQIAZYXRAZOGDXNKGPPEYXOAWKNEZSISPACJUEGKFFMDIMFMEMVPVWGUAJRZAOONRDRSKRXRLZXDYMNHC");

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
    msg.setTimeStamp(0.7147794091868077);
    msg.setSource(60052U);
    msg.setSourceEntity(105U);
    msg.setDestination(51507U);
    msg.setDestinationEntity(44U);
    msg.timeout = 9826U;
    msg.lat = 0.8966654319183995;
    msg.lon = 0.30964644956168674;
    msg.z = 0.28756047588336975;
    msg.z_units = 178U;
    msg.duration = 43514U;
    msg.speed = 0.530837300546702;
    msg.speed_units = 239U;
    msg.type = 219U;
    msg.radius = 0.8944140838056437;
    msg.length = 0.5946586178348471;
    msg.bearing = 0.6168172337671313;
    msg.direction = 27U;
    msg.custom.assign("FCNYUPYYDMKNVDNNHAQDUBABQRJEIVHBQZVNYUXNFYYEEAADKVWMEBMHOQXYVOPPCKTVOIKGABIQUZFJRLRNIJYAZFMODRDGPG");

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
    msg.setTimeStamp(0.8691899126100383);
    msg.setSource(36033U);
    msg.setSourceEntity(18U);
    msg.setDestination(13744U);
    msg.setDestinationEntity(188U);
    msg.timeout = 32276U;
    msg.lat = 0.610211330127648;
    msg.lon = 0.5208004748885904;
    msg.z = 0.37400466628736473;
    msg.z_units = 5U;
    msg.duration = 3163U;
    msg.speed = 0.6437199193127092;
    msg.speed_units = 198U;
    msg.type = 249U;
    msg.radius = 0.6077695799445284;
    msg.length = 0.5569821720245112;
    msg.bearing = 0.01791799975135877;
    msg.direction = 187U;
    msg.custom.assign("IJDLOLYSIPSPOJNNUOVPAKTFFTQYZ");

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
    msg.setTimeStamp(0.07043334487321862);
    msg.setSource(21507U);
    msg.setSourceEntity(54U);
    msg.setDestination(32891U);
    msg.setDestinationEntity(215U);
    msg.timeout = 18937U;
    msg.lat = 0.35226095554284786;
    msg.lon = 0.7342175605332423;
    msg.z = 0.5071496947917752;
    msg.z_units = 219U;
    msg.duration = 48214U;
    msg.speed = 0.9270313038125335;
    msg.speed_units = 182U;
    msg.type = 81U;
    msg.radius = 0.604312751390412;
    msg.length = 0.41241564002718545;
    msg.bearing = 0.04823251277525631;
    msg.direction = 159U;
    msg.custom.assign("TLWIFSTKJVGBROJHKSXXPVLABYMYTQFKNSO");

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
    msg.setTimeStamp(0.9643578780430797);
    msg.setSource(29427U);
    msg.setSourceEntity(125U);
    msg.setDestination(24152U);
    msg.setDestinationEntity(219U);
    msg.duration = 64069U;
    msg.custom.assign("JNCTWGQTZNAMGRNMTVCMYBLBHAWXJDSCAMJNLLFKJQHPSJBDZMPPKDXGIWHGPXFEJFQBABVOOUMDKLDKNWYKEAIRECRZECMYRMHXEBSMIYAJPXTJYYKFHRDVAEUSVPYGQFFJWOOUPTLHTOWQXSOEEGABBBLKOPNYOTVTBHQFCIZQENQIVFR");

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
    msg.setTimeStamp(0.33392744403341557);
    msg.setSource(37782U);
    msg.setSourceEntity(182U);
    msg.setDestination(55091U);
    msg.setDestinationEntity(176U);
    msg.duration = 2660U;
    msg.custom.assign("HUKTLDRITNRIOSYIHLPQPRQBVPVBVHCOWXCKYLTCWQAPJGFBXJXEJOQDRJNXSUFSILTWCQJLCLYTZEHZBUFACJUIMFTSIRPEZFOVOFANVBMQZABDNMUEVEAAIANLUSZZMHKGEMLLGFFCSBVKWVZSRZETUXWDQOCNYWSWOKUGCRYDGOPDNRORYHDKZTODJCKMXEGAEYTJLUXFEMTNHVIPBNHJSXIQXJPMKGGVDQ");

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
    msg.setTimeStamp(0.022888993579061934);
    msg.setSource(23268U);
    msg.setSourceEntity(229U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(186U);
    msg.duration = 42887U;
    msg.custom.assign("YLWUOQMWUEWKBKBUJKOLNNWDNCJAEJIMIURBBVXGVFID");

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
    msg.setTimeStamp(0.6484292906706074);
    msg.setSource(27452U);
    msg.setSourceEntity(54U);
    msg.setDestination(41251U);
    msg.setDestinationEntity(135U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.8905652474933484;
    msg.control.set(tmp_msg_0);
    msg.duration = 5940U;
    msg.custom.assign("VSFBNXEDPXVWAYIJWEOOWNQ");

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
    msg.setTimeStamp(0.10036020697619163);
    msg.setSource(10152U);
    msg.setSourceEntity(60U);
    msg.setDestination(18020U);
    msg.setDestinationEntity(133U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.02962191316067153;
    tmp_msg_0.speed_units = 22U;
    msg.control.set(tmp_msg_0);
    msg.duration = 60845U;
    msg.custom.assign("QFKMNDSBCONBORZQEU");

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
    msg.setTimeStamp(0.8409748650420633);
    msg.setSource(34179U);
    msg.setSourceEntity(71U);
    msg.setDestination(37358U);
    msg.setDestinationEntity(101U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7022219322641586;
    tmp_msg_0.speed_units = 207U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44938U;
    msg.custom.assign("MVBPLKKBKLZXEVKAAGWWXNOXTWHZVSOSBZFKNGCMRNVUIZHBHEDRASHIDPDYUSKOSQWJPZLUOFFYQYUZPJZEIJOMDDNGXAOVUUHVEEUGWFLTPPMOBCSAQIDOLOGRJAOUIRPGBYLNIBUZTERQEQCCCWQFJLDMKAHHYAHTXNKIVYNWXGGTBKPIDCTRBFLUJVZDFZTWNMJRBJQQTANIFHIMJLSXYMNEMDRCAPYCCXQYWEJHSGMGXSVFCQ");

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
    msg.setTimeStamp(0.913730204974909);
    msg.setSource(504U);
    msg.setSourceEntity(55U);
    msg.setDestination(40865U);
    msg.setDestinationEntity(226U);
    msg.timeout = 44904U;
    msg.lat = 0.05951467577536462;
    msg.lon = 0.364435438207946;
    msg.z = 0.11250642631952801;
    msg.z_units = 52U;
    msg.speed = 0.9842670162687397;
    msg.speed_units = 56U;
    msg.bearing = 0.5882630057571441;
    msg.cross_angle = 0.3646758178524744;
    msg.width = 0.190081963074755;
    msg.length = 0.01461940472584311;
    msg.hstep = 0.38837721509284906;
    msg.coff = 182U;
    msg.alternation = 175U;
    msg.flags = 93U;
    msg.custom.assign("BYVRLRXIAGGREOPXGOPIPFHXWKSUZLDRXCLLLSJNMYFJWIANFOYURJKCJQLLWMDAHIBNYOWTVMGTUQMNMRJCWQLNNHKUGCZPNIUDIBHGMYQCTRAEVAZAGRWKCXSUAQEDZZVXHCJOBOTFZMDPSAGNFZJHGKYKVBSZDTTNWIVTOICTEBSAHPOLWKDLHQYWPEDEPQFZUMBOUEEVEYFVJHSMAIHSKFGJQXCXVOPRQKUMBCDSBYKDIBTSYF");

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
    msg.setTimeStamp(0.7323965485039279);
    msg.setSource(34178U);
    msg.setSourceEntity(230U);
    msg.setDestination(6879U);
    msg.setDestinationEntity(7U);
    msg.timeout = 12318U;
    msg.lat = 0.5349670494543549;
    msg.lon = 0.22354753640353164;
    msg.z = 0.26798045313652596;
    msg.z_units = 196U;
    msg.speed = 0.8548681119409499;
    msg.speed_units = 97U;
    msg.bearing = 0.7791892874913802;
    msg.cross_angle = 0.10041716646218057;
    msg.width = 0.5297488181835196;
    msg.length = 0.015208883608903268;
    msg.hstep = 0.27078029346957677;
    msg.coff = 98U;
    msg.alternation = 58U;
    msg.flags = 217U;
    msg.custom.assign("LQBTQCSLNNEUCVRCWTERFONAZJTIPSRDSNDFBPBVEYGPAJNHCGNNRG");

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
    msg.setTimeStamp(0.1325075645702688);
    msg.setSource(33267U);
    msg.setSourceEntity(171U);
    msg.setDestination(12080U);
    msg.setDestinationEntity(177U);
    msg.timeout = 51812U;
    msg.lat = 0.8786018214298572;
    msg.lon = 0.6597672395892338;
    msg.z = 0.8398746055537325;
    msg.z_units = 164U;
    msg.speed = 0.9847344323238085;
    msg.speed_units = 144U;
    msg.bearing = 0.48934409589116434;
    msg.cross_angle = 0.7812917760182885;
    msg.width = 0.9886299824027488;
    msg.length = 0.6495674811202461;
    msg.hstep = 0.5279877159067526;
    msg.coff = 120U;
    msg.alternation = 201U;
    msg.flags = 175U;
    msg.custom.assign("EPEXKLRSWIJHGAEQLVPRPQVSWLYFASZUXVPAMWVKAQTIKLQWRTVWYUXJKGQBUNAQBBESOXQIAILGFXJMBKWZJIOMLAXNJEMXIDBHJFBWZUSTOKEVNWWQPXCHHFPUDDIJBNZIRKFKNEHAOTCMDNZQYLLFTYTPHXDGRMACM");

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
    msg.setTimeStamp(0.2594444245858225);
    msg.setSource(40192U);
    msg.setSourceEntity(219U);
    msg.setDestination(42327U);
    msg.setDestinationEntity(13U);
    msg.timeout = 6034U;
    msg.lat = 0.9026905779721289;
    msg.lon = 0.22246808475975133;
    msg.z = 0.005645170519264386;
    msg.z_units = 194U;
    msg.speed = 0.9356926344791155;
    msg.speed_units = 2U;
    msg.custom.assign("RDQTVFSPPDIAZVCHOHMLDCIYSPGCABJYOZRGWWRMTCJWWDVHZDUMLHKGXVAEZARWNJXLNXBATRQKRENRSSQZWABBXZUOUYFDSMEBJENOEFGELEPYGIWSHZORPFCVKWZMLREIIKULXCFTNNNKENNXPKRLTVXDHUDFHBVQQJI");

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
    msg.setTimeStamp(0.6072401190363761);
    msg.setSource(39230U);
    msg.setSourceEntity(203U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(157U);
    msg.timeout = 50008U;
    msg.lat = 0.4967514950743247;
    msg.lon = 0.6431191449265062;
    msg.z = 0.2682139454783754;
    msg.z_units = 73U;
    msg.speed = 0.01734765339521893;
    msg.speed_units = 73U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.898549335829168;
    tmp_msg_0.y = 0.09872320685069469;
    tmp_msg_0.z = 0.28790967941099044;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UYLHBMOFYPVUPRCHSCGQRJOTHJPEZSUUVKBCAQKLRQVWTWETHXJKX");

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
    msg.setTimeStamp(0.2941685472696055);
    msg.setSource(64749U);
    msg.setSourceEntity(18U);
    msg.setDestination(29221U);
    msg.setDestinationEntity(25U);
    msg.timeout = 6371U;
    msg.lat = 0.4162620521847894;
    msg.lon = 0.9979632497175129;
    msg.z = 0.4726219015876365;
    msg.z_units = 227U;
    msg.speed = 0.9862780956145266;
    msg.speed_units = 235U;
    msg.custom.assign("GNVBIQHOBSGXLUQXE");

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
    msg.setTimeStamp(0.6291469053744676);
    msg.setSource(10601U);
    msg.setSourceEntity(251U);
    msg.setDestination(11859U);
    msg.setDestinationEntity(78U);
    msg.x = 0.5496262571637255;
    msg.y = 0.22612982674017423;
    msg.z = 0.7636567119589446;

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
    msg.setTimeStamp(0.9599419701524392);
    msg.setSource(8627U);
    msg.setSourceEntity(153U);
    msg.setDestination(44232U);
    msg.setDestinationEntity(233U);
    msg.x = 0.8927843657322082;
    msg.y = 0.24543086917009382;
    msg.z = 0.993954082941024;

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
    msg.setTimeStamp(0.1441946801760503);
    msg.setSource(55801U);
    msg.setSourceEntity(25U);
    msg.setDestination(48805U);
    msg.setDestinationEntity(248U);
    msg.x = 0.4092712820436404;
    msg.y = 0.4162250753296398;
    msg.z = 0.17115761977405086;

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
    msg.setTimeStamp(0.6053738205860032);
    msg.setSource(32002U);
    msg.setSourceEntity(236U);
    msg.setDestination(48628U);
    msg.setDestinationEntity(233U);
    msg.timeout = 25744U;
    msg.lat = 0.18037846095710408;
    msg.lon = 0.19289700274090604;
    msg.z = 0.6874609512303013;
    msg.z_units = 172U;
    msg.amplitude = 0.15651598756765506;
    msg.pitch = 0.49481263638554085;
    msg.speed = 0.5523513315979175;
    msg.speed_units = 98U;
    msg.custom.assign("VHFIHOPUTYCSTCERPBSJYYFVSRFSWXZHINDJPXDEXLCQHKRIUGBLWLYZMZVYZHLHRCENIKVVLBXNYGQXEJMXKOIWSCQAGTGAYTFEGBAPWVOUTYSAAFISN");

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
    msg.setTimeStamp(0.5721579791713526);
    msg.setSource(20698U);
    msg.setSourceEntity(180U);
    msg.setDestination(61861U);
    msg.setDestinationEntity(102U);
    msg.timeout = 1247U;
    msg.lat = 0.15209211826074498;
    msg.lon = 0.672142173116468;
    msg.z = 0.9082793411882122;
    msg.z_units = 108U;
    msg.amplitude = 0.998458984250298;
    msg.pitch = 0.044670861710446985;
    msg.speed = 0.049405214653730156;
    msg.speed_units = 165U;
    msg.custom.assign("TFGIYFPNTZTBIYFUBRWWLRKCKMMZBKZSLMCDJURGWXNJZODJPXOQLXUOIFLJDXDQHXJDMJYNCECA");

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
    msg.setTimeStamp(0.17517229131727863);
    msg.setSource(62975U);
    msg.setSourceEntity(23U);
    msg.setDestination(22301U);
    msg.setDestinationEntity(199U);
    msg.timeout = 3110U;
    msg.lat = 0.4614826896113222;
    msg.lon = 0.5822551738299686;
    msg.z = 0.05550200319429843;
    msg.z_units = 125U;
    msg.amplitude = 0.2759079947770833;
    msg.pitch = 0.017318372457726605;
    msg.speed = 0.2011526509085826;
    msg.speed_units = 15U;
    msg.custom.assign("PDLWPSDRELUBJCOIAAGQWELFKXEUYAAILBJALYSPFUHFGUTCMKHFMBRVHNTMTSOHWYMBBTZTPZLQAXJOKXUIJNXPMINQISZOAQNUPYSEHZMXOUCSBFAIZVFGBXTKRWBKQJVDHCHPRLNQYNRYFVJEGKOQHCODNAXNQIIEOFJPXZWFXSODNAWEQFLDZCKUDOSVZYZEJHGCCER");

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
    msg.setTimeStamp(0.005653608722673509);
    msg.setSource(41867U);
    msg.setSourceEntity(198U);
    msg.setDestination(32055U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.3673786790070571);
    msg.setSource(63839U);
    msg.setSourceEntity(126U);
    msg.setDestination(5878U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.7636932337127885);
    msg.setSource(25966U);
    msg.setSourceEntity(96U);
    msg.setDestination(57420U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.3907598010465272);
    msg.setSource(11995U);
    msg.setSourceEntity(184U);
    msg.setDestination(13420U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.809299034630038;
    msg.lon = 0.12310863108196979;
    msg.z = 0.48119688067518407;
    msg.z_units = 208U;
    msg.radius = 0.6403002465334735;
    msg.duration = 55913U;
    msg.speed = 0.8542467465587144;
    msg.speed_units = 146U;
    msg.custom.assign("IRRLVHSQHFHGJXAWTMXWEIRKHGZCBPFLYCTDJCWJUWRHGEGENZAOTQDDOUIVIXOEPOMKDKFLYPEYTYWBLZFVHTNBHOCXKSTFBBFGMMVSPLSSBCLL");

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
    msg.setTimeStamp(0.2043682315141998);
    msg.setSource(8361U);
    msg.setSourceEntity(136U);
    msg.setDestination(28459U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.5068679974482094;
    msg.lon = 0.7952805955836908;
    msg.z = 0.2931749202995705;
    msg.z_units = 149U;
    msg.radius = 0.8391219622352811;
    msg.duration = 33811U;
    msg.speed = 0.6619826802215099;
    msg.speed_units = 135U;
    msg.custom.assign("LNDGVTDBJNNHALFGWPQWMXASGSZCRYUXWLCVWSPGIYRBQEOQSMALFKBHTKCXZGLBEV");

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
    msg.setTimeStamp(0.33586627782799294);
    msg.setSource(43823U);
    msg.setSourceEntity(196U);
    msg.setDestination(52477U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.7264904826351193;
    msg.lon = 0.10956755147781616;
    msg.z = 0.5455072040041391;
    msg.z_units = 40U;
    msg.radius = 0.6353654338205258;
    msg.duration = 64490U;
    msg.speed = 0.06785177465241665;
    msg.speed_units = 32U;
    msg.custom.assign("RLYEQVTXTUGTNNCLAIDQCBJHJDYSYKEHPXGGGCOLPDPMYLYFXRSAAFZQCWIKMRBKNMRDSVIWIAONGQZQANXBXMYQIJVESWIFLXTEBPOHARQUAQWOZMMLGNUURRHFZKSTVCJJTIIZEKLUISVPMPSRFHBBJQLKVKBGNCXBQOUZBZYOVOXTGAGSWEEYUHKYWCZIWWVRBHDNZFFXDHXVOGVNPCMAPJSJCTEMRDCFWOUEMFLNJPHEYKKSDALD");

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
    msg.setTimeStamp(0.8669749909934963);
    msg.setSource(8719U);
    msg.setSourceEntity(107U);
    msg.setDestination(5309U);
    msg.setDestinationEntity(71U);
    msg.timeout = 17985U;
    msg.flags = 173U;
    msg.lat = 0.6970609757819397;
    msg.lon = 0.8455145569458817;
    msg.start_z = 0.29766022128456504;
    msg.start_z_units = 129U;
    msg.end_z = 0.6495994662170353;
    msg.end_z_units = 11U;
    msg.radius = 0.4228878616653339;
    msg.speed = 0.5958634194308141;
    msg.speed_units = 66U;
    msg.custom.assign("BOIHARPTRHACUAEL");

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
    msg.setTimeStamp(0.05398157254061564);
    msg.setSource(40703U);
    msg.setSourceEntity(157U);
    msg.setDestination(36923U);
    msg.setDestinationEntity(116U);
    msg.timeout = 45719U;
    msg.flags = 239U;
    msg.lat = 0.8126666902023508;
    msg.lon = 0.5107616088056723;
    msg.start_z = 0.7200161059861296;
    msg.start_z_units = 94U;
    msg.end_z = 0.376490397357639;
    msg.end_z_units = 109U;
    msg.radius = 0.9031464470668035;
    msg.speed = 0.3746530555744806;
    msg.speed_units = 93U;
    msg.custom.assign("SFGBPMWPEOWLHEZJVWVYQZASUUTYQGFTWYFIBOYKLEEAXPBOSNPRCHRSWOUDSAXWJKFCQBYVAJRAIZHJTEAIVPGPTCZMNXNRWCWDOVUARSXROUPNNCJBCRZCUKTDWEMRHNABQGDLPJOGAMTCTASMUBHPIUDZQSGQMBETGHHMXELHBEIOXDIGOKKFKBTLYFQKFLJKIDLIYZZDVSSXKLNY");

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
    msg.setTimeStamp(0.8304763691320032);
    msg.setSource(39317U);
    msg.setSourceEntity(223U);
    msg.setDestination(49568U);
    msg.setDestinationEntity(113U);
    msg.timeout = 32004U;
    msg.flags = 17U;
    msg.lat = 0.5168180511422392;
    msg.lon = 0.015866191314546474;
    msg.start_z = 0.1113150691090643;
    msg.start_z_units = 192U;
    msg.end_z = 0.7847605439408127;
    msg.end_z_units = 93U;
    msg.radius = 0.15173781925456564;
    msg.speed = 0.18896287106517073;
    msg.speed_units = 93U;
    msg.custom.assign("XYDROKXUJUSBLFCGOWCZAOGFIRYLDKHPJIMFLBTCLCVSIFCYXAJBYGLADPEMRPSKNOHVNFTTTZMBIZPPWQAYBHQGJQKSHAROKWGOEMIPDCHJEDINMDGQENBGXEDFANIJVFDRHEJV");

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
    msg.setTimeStamp(0.7826955710783662);
    msg.setSource(53759U);
    msg.setSourceEntity(13U);
    msg.setDestination(40471U);
    msg.setDestinationEntity(134U);
    msg.timeout = 11374U;
    msg.lat = 0.5500973734811052;
    msg.lon = 0.6088166457279067;
    msg.z = 0.18005160659057962;
    msg.z_units = 148U;
    msg.speed = 0.9800859865193755;
    msg.speed_units = 172U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8281346025023056;
    tmp_msg_0.y = 0.8405995845462534;
    tmp_msg_0.z = 0.283733005422938;
    tmp_msg_0.t = 0.13947234534775543;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DEDXCWPBHESALDVLBQMNUFCAIQIVWFBRHUYMPMLNXXSKEHQRLZNGOSTVJLDKQVIOYIMWYVUSROJLWFMRGQKOARTUBZNYGQFIURNPPIBREODEVLEFBSLDFOFKSOBRGTOGSZJNIZPHTWYHZZZYWMCKZIXTG");

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
    msg.setTimeStamp(0.2848171527343436);
    msg.setSource(16770U);
    msg.setSourceEntity(142U);
    msg.setDestination(16421U);
    msg.setDestinationEntity(240U);
    msg.timeout = 21021U;
    msg.lat = 0.7617570240290327;
    msg.lon = 0.960730615316146;
    msg.z = 0.2647248481602553;
    msg.z_units = 105U;
    msg.speed = 0.6283957083762428;
    msg.speed_units = 97U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3854261822601721;
    tmp_msg_0.y = 0.9219793699978412;
    tmp_msg_0.z = 0.7571639267814188;
    tmp_msg_0.t = 0.00021658221841480696;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XXCXPALAGLAZLXQYKJWUJPGIYBXNTBSTZUCEWZLULCZHZWYVFNZNPSYQUSTHCDDRXHRFLTZHCBVFAFVAXDQTTEOGQGWTEMUZKVWIOIBJOYMSPDDUUYNQWCWFKHMZGRDKFEMPRSBSCHRJWYUEGIDPMWRSBNYBDAJGEFTWOAQPNNOJMLFJIKFRLBEOKOIBVI");

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
    msg.setTimeStamp(0.16905157965563844);
    msg.setSource(39914U);
    msg.setSourceEntity(151U);
    msg.setDestination(64734U);
    msg.setDestinationEntity(190U);
    msg.timeout = 50346U;
    msg.lat = 0.8827591025453995;
    msg.lon = 0.07698184336994907;
    msg.z = 0.5355926209105956;
    msg.z_units = 53U;
    msg.speed = 0.7287706926997243;
    msg.speed_units = 220U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5261562766655998;
    tmp_msg_0.y = 0.038985058908479586;
    tmp_msg_0.z = 0.42924737134560853;
    tmp_msg_0.t = 0.22890809163428127;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VMBJUTUQHIHJHQEQRSLNRABXZWDJPYSYSKUHCFDWCDKFDVRZXTSWYMGKGCHATGPLIPNKEUBLPTBHCIUMJQYZAHDBZZOPPRKBEVDMAKBWVMCAMTMHVBOJLFRNEQDRURLTQVHXFA");

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
    msg.setTimeStamp(0.6012456102810401);
    msg.setSource(55674U);
    msg.setSourceEntity(204U);
    msg.setDestination(31698U);
    msg.setDestinationEntity(245U);
    msg.x = 0.5474949199708093;
    msg.y = 0.46776801015488656;
    msg.z = 0.8066583704327274;
    msg.t = 0.6907695255932763;

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
    msg.setTimeStamp(0.9076602084751004);
    msg.setSource(39559U);
    msg.setSourceEntity(53U);
    msg.setDestination(44560U);
    msg.setDestinationEntity(86U);
    msg.x = 0.08071440269555363;
    msg.y = 0.5821635064851869;
    msg.z = 0.3879330854770602;
    msg.t = 0.9129241018561363;

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
    msg.setTimeStamp(0.059063686858604525);
    msg.setSource(20166U);
    msg.setSourceEntity(184U);
    msg.setDestination(59373U);
    msg.setDestinationEntity(72U);
    msg.x = 0.03527448503970754;
    msg.y = 0.4442686640558944;
    msg.z = 0.09837347976815736;
    msg.t = 0.9135346153081202;

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
    msg.setTimeStamp(0.024546119992620574);
    msg.setSource(27969U);
    msg.setSourceEntity(112U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(243U);
    msg.timeout = 35941U;
    msg.name.assign("DESSQEOJBUKTNJAZVOECUXHTUXSWVD");
    msg.custom.assign("HGZQPUSKICMYSJUDOXRVVUIBRKQQROTHRIHONAJOWZIOHSLCSRVNZWDGPUAXGJOPDZUFEELNHRTBWKJEFRNCSNCGMTMEGPMUQWVAAHMDC");

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
    msg.setTimeStamp(0.28308513149821735);
    msg.setSource(48119U);
    msg.setSourceEntity(150U);
    msg.setDestination(33080U);
    msg.setDestinationEntity(211U);
    msg.timeout = 65316U;
    msg.name.assign("VENCMRQLLAUVOABQFPGWYJLBSLJOGLPYYDFAANVUYUUBDMMZTCTQZFXPQGKJZCTKSSFKLQLGOMHWM");
    msg.custom.assign("SWIEHKYUIXZMELKWKGGNTMYNOGWJBTNREYDNZDVSCZAUQVZGXWRJJVLQNSUCOAOLIAVPSESLEJMYLWIJPKBKQURHBOXFURJFJEFVAUADXPYHPQCYZCFOQABNIZMXWGPYVSJ");

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
    msg.setTimeStamp(0.5164302672672431);
    msg.setSource(43102U);
    msg.setSourceEntity(182U);
    msg.setDestination(44418U);
    msg.setDestinationEntity(84U);
    msg.timeout = 16752U;
    msg.name.assign("MHSCRNGYUITVJ");
    msg.custom.assign("LGOHCYAYPBQDZNTKVYLMMMPPUZFWUDSBSEKWGOOTKJIRMNIRQOIYLGJFGUQUMETPNVINDHSSHRCWOPSDCJKWSKFVBYYNWKRTGWMEUWDQYPSXFRTGVZFQPOB");

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
    msg.setTimeStamp(0.21567534874252037);
    msg.setSource(12739U);
    msg.setSourceEntity(206U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.863198631434102;
    msg.lon = 0.7966127421400148;
    msg.z = 0.2050706460123638;
    msg.z_units = 83U;
    msg.speed = 0.34392453634324827;
    msg.speed_units = 162U;
    msg.start_time = 0.8555813724385811;
    msg.custom.assign("JGQRTRADTMOWXBXAIJPGDCVDZSXWFXTXLZWQWHTAMOEINEQASLHCKBPKZDOLGVFPAHOELGPWKTHYNXSLNNRJKDMKUVHXZYVIECGKVXPFRMYZZUPHYJOWCRQCNKBBIIEQJOMJGGWQRBOWOVZDBEJAZECFBEOGPIPSYWCBKHBYJZFCUGAILGQNKYBADMCINRUVQSFADYYXSFWCITTDSFNLNVQIRUHHPLUUQVKNSTFYJEMRFLPMSA");

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
    msg.setTimeStamp(0.9613870129502093);
    msg.setSource(29600U);
    msg.setSourceEntity(253U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.7296324302703618;
    msg.lon = 0.6869525232816193;
    msg.z = 0.48512476724485043;
    msg.z_units = 62U;
    msg.speed = 0.4704392477982753;
    msg.speed_units = 75U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.22851395619254333;
    tmp_msg_0.y = 0.1388223542032363;
    tmp_msg_0.z = 0.5920053883520762;
    tmp_msg_0.t = 0.9628338223766827;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 46564U;
    tmp_msg_1.off_x = 0.09481121045327834;
    tmp_msg_1.off_y = 0.18812954068555798;
    tmp_msg_1.off_z = 0.018828366741900027;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5235962870782165;
    msg.custom.assign("JYZJGUOSHBJLCXVLPYQXXLPGTGZTWSUWHFRQKTURRMUUAFBMUWFZKFCVJPQPDXOYMBAVYEDHQNWUVRGEAMKPYDCUCNKLNZBSKLQCMZYMSOKUNXGXJZPIDRTHFIIGECTGAYJNHFXKZFQQJSPQWOKASRAWSADEKYCEWVFVLEELNOLTOVDMBBWRJPNTISDXZOFTCEZLSUINZVCBHMLISAPAIROHFTIQGKOVBMHDCWGRBAVJ");

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
    msg.setTimeStamp(0.5314992086808438);
    msg.setSource(9919U);
    msg.setSourceEntity(236U);
    msg.setDestination(30187U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.6424135238759693;
    msg.lon = 0.06235884977049155;
    msg.z = 0.22490199701792501;
    msg.z_units = 11U;
    msg.speed = 0.023171016995977123;
    msg.speed_units = 226U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5005267227952959;
    tmp_msg_0.y = 0.4591128609233367;
    tmp_msg_0.z = 0.7943855409302493;
    tmp_msg_0.t = 0.43802996501245783;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.48441047692612804;
    msg.custom.assign("QEUMOZPNYFVZDVBBTXFRCKIZQXGKARTWIPPQVADSZXPYFWYMRZAFHDMHFETZGLDUHOFBUIOLSMLVXDJGNAPEYFTBUTUUWXDLGWBSKEWIAYVLFKNTQIWEXZPOJVWHDCWVTBJKEPAHIVCNAECPEGKMQETWNXDSZNPHKATOYRBPUQOGZQJNSACILJDHMBERKMNO");

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
    msg.setTimeStamp(0.1355366197082113);
    msg.setSource(57898U);
    msg.setSourceEntity(66U);
    msg.setDestination(60893U);
    msg.setDestinationEntity(134U);
    msg.vid = 59732U;
    msg.off_x = 0.30259122984006404;
    msg.off_y = 0.07449921354279276;
    msg.off_z = 0.2948896222470194;

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
    msg.setTimeStamp(0.7043717508220452);
    msg.setSource(48513U);
    msg.setSourceEntity(173U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(237U);
    msg.vid = 40339U;
    msg.off_x = 0.9854135819752274;
    msg.off_y = 0.9499379802203483;
    msg.off_z = 0.3906208491869704;

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
    msg.setTimeStamp(0.5299096133411713);
    msg.setSource(43557U);
    msg.setSourceEntity(12U);
    msg.setDestination(28180U);
    msg.setDestinationEntity(92U);
    msg.vid = 42574U;
    msg.off_x = 0.7878944526918416;
    msg.off_y = 0.0364087843664187;
    msg.off_z = 0.4423360741978243;

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
    msg.setTimeStamp(0.9117769871794037);
    msg.setSource(23870U);
    msg.setSourceEntity(149U);
    msg.setDestination(39394U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.5177327518536823);
    msg.setSource(28439U);
    msg.setSourceEntity(79U);
    msg.setDestination(52349U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.8182239345497646);
    msg.setSource(38865U);
    msg.setSourceEntity(219U);
    msg.setDestination(28649U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.1260659750629377);
    msg.setSource(764U);
    msg.setSourceEntity(47U);
    msg.setDestination(51494U);
    msg.setDestinationEntity(217U);
    msg.mid = 381U;

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
    msg.setTimeStamp(0.744264223410951);
    msg.setSource(11653U);
    msg.setSourceEntity(123U);
    msg.setDestination(23187U);
    msg.setDestinationEntity(56U);
    msg.mid = 23106U;

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
    msg.setTimeStamp(0.9967596693025083);
    msg.setSource(28676U);
    msg.setSourceEntity(0U);
    msg.setDestination(65223U);
    msg.setDestinationEntity(137U);
    msg.mid = 15737U;

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
    msg.setTimeStamp(0.8473400223070289);
    msg.setSource(45328U);
    msg.setSourceEntity(14U);
    msg.setDestination(4862U);
    msg.setDestinationEntity(134U);
    msg.state = 249U;
    msg.eta = 22994U;
    msg.info.assign("HBCNWEERRIVEZZYNZZZIPVBGKYOQPOHCFAIKQOGNVUTBSUCSNJWGROIUVSZRYWHIPDHVOXLMXRGCEMEALRFCGCMMBFCTBPNXUOGQHTEDWKAUBKGKBPQKMCPFDIUHITNTNVTWWAJFPJMHULRXKZXSQJBZSMNTLICIHLOAOAKDVERSQXHSYXWZADZXFLENF");

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
    msg.setTimeStamp(0.6778284481642413);
    msg.setSource(50894U);
    msg.setSourceEntity(84U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(184U);
    msg.state = 105U;
    msg.eta = 62947U;
    msg.info.assign("JXXGKYANLJJZBWYTAYGRCFVVELVQZMSDZAIEUUKCSSWKLOHWFROOQVBMBEQKFMPSQWFBGODAUQPBSDXQJGDTRNYUPSHPTTHSNBCWNXDXLTQRCEEOVCCDNKPVTOPPDXOZEIVRIAATFFWIVEMWVIGRGPOQMCBPFBHAJFCLEWKUUHKNEYLHLMZHXOBRIYUDHNIKDUIQNTGZUYSZG");

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
    msg.setTimeStamp(0.6867692211084829);
    msg.setSource(3671U);
    msg.setSourceEntity(166U);
    msg.setDestination(9179U);
    msg.setDestinationEntity(161U);
    msg.state = 163U;
    msg.eta = 27411U;
    msg.info.assign("AQLVBJRPODOTMZWUPFJLTVKPVDJITFEUBMNDEMBIZUSWVYEVSFUQDRXLTLPEMWWSYCEYFCGVCES");

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
    msg.setTimeStamp(0.8273681965884261);
    msg.setSource(21269U);
    msg.setSourceEntity(121U);
    msg.setDestination(1213U);
    msg.setDestinationEntity(80U);
    msg.system = 55278U;
    msg.duration = 50824U;
    msg.speed = 0.9719031619555594;
    msg.speed_units = 219U;
    msg.x = 0.05830317945355168;
    msg.y = 0.1232321106929597;
    msg.z = 0.21101078176492138;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.8069302494181305);
    msg.setSource(23454U);
    msg.setSourceEntity(130U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(175U);
    msg.system = 12988U;
    msg.duration = 3291U;
    msg.speed = 0.9533561144547417;
    msg.speed_units = 17U;
    msg.x = 0.8344758612363845;
    msg.y = 0.6002047393917874;
    msg.z = 0.36625218299472573;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.7136248139368797);
    msg.setSource(17619U);
    msg.setSourceEntity(65U);
    msg.setDestination(62052U);
    msg.setDestinationEntity(136U);
    msg.system = 3063U;
    msg.duration = 2132U;
    msg.speed = 0.47879987340904195;
    msg.speed_units = 89U;
    msg.x = 0.8777880266535553;
    msg.y = 0.964780189233334;
    msg.z = 0.16616129404681268;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.4194071805638018);
    msg.setSource(20631U);
    msg.setSourceEntity(89U);
    msg.setDestination(45797U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.4222170582081558;
    msg.lon = 0.17475689433209018;
    msg.speed = 0.007371030640477727;
    msg.speed_units = 120U;
    msg.duration = 6410U;
    msg.sys_a = 27901U;
    msg.sys_b = 13581U;
    msg.move_threshold = 0.4313772306029162;

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
    msg.setTimeStamp(0.5825868809198008);
    msg.setSource(64508U);
    msg.setSourceEntity(54U);
    msg.setDestination(21287U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.12829167602620095;
    msg.lon = 0.9819663886782852;
    msg.speed = 0.8283741358254442;
    msg.speed_units = 113U;
    msg.duration = 35003U;
    msg.sys_a = 55669U;
    msg.sys_b = 56754U;
    msg.move_threshold = 0.8967795686979473;

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
    msg.setTimeStamp(0.7353028641653042);
    msg.setSource(41525U);
    msg.setSourceEntity(48U);
    msg.setDestination(19530U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.4118088705496108;
    msg.lon = 0.36650934670954427;
    msg.speed = 0.6479486418303549;
    msg.speed_units = 197U;
    msg.duration = 31992U;
    msg.sys_a = 22351U;
    msg.sys_b = 18981U;
    msg.move_threshold = 0.12275376617381262;

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
    msg.setTimeStamp(0.4270896625017363);
    msg.setSource(51287U);
    msg.setSourceEntity(203U);
    msg.setDestination(24430U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.7852966291731704;
    msg.lon = 0.8195765562480141;
    msg.z = 0.8122264205710384;
    msg.z_units = 223U;
    msg.speed = 0.925754354709908;
    msg.speed_units = 142U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.06619675311717854;
    tmp_msg_0.lon = 0.8412943314344931;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VBDLRKGXEAHIBMYJMZECQNVOIPYFDJKHNSYSAWGYCUDVOOJAVCXOIBKOFDCLCYDJSTVQNXSISFWKIUIFAPSFRBPDPMPGGPBWQEPBZVTTZGZUZUNLQZBRKETKBKRMFEAEDLUUHEKAIXWASRULJHDWGNMWCPHQQMCMLZZXTICQJVMAHDHTLPUOZGLXNGONDYOZFNLXVMEJTEPYXQAIRTWBQSBCJWKHEMOXVSYUOFKHJFVA");

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
    msg.setTimeStamp(0.7568000074550721);
    msg.setSource(49693U);
    msg.setSourceEntity(172U);
    msg.setDestination(4899U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.4615816919960096;
    msg.lon = 0.40401971486055943;
    msg.z = 0.054761702797445744;
    msg.z_units = 24U;
    msg.speed = 0.14466339150984397;
    msg.speed_units = 32U;
    msg.custom.assign("AQGQAYXPFEEQZWFVJBISMOIFNPNSFPBIRAKUCWN");

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
    msg.setTimeStamp(0.5164086347076697);
    msg.setSource(58426U);
    msg.setSourceEntity(91U);
    msg.setDestination(44311U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.01077364963527605;
    msg.lon = 0.08692442485030893;
    msg.z = 0.2156385563793899;
    msg.z_units = 232U;
    msg.speed = 0.23746417109665274;
    msg.speed_units = 236U;
    msg.custom.assign("CWRQDJCTCATWFMCBXIGNFXXHVSOZYPVIRSHDZYHMEJCQGSKNXRWFIWFQATYTGWAUVLOMEIBJNASYCHFBDDTMAOUKBDBVKKIJEEVSQXCPOQOEFIZEWTDJZLIGLUGXVZWWCJYVHKDMBHQHVLYESDBSDGAZPRGRXIKOMQNKNLLEJTFNVPRPFHPMQCLAGUAUJLRZPRSINNELXQAZXPNLGUSMRQUOYTOSMKP");

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
    msg.setTimeStamp(0.6210571218892206);
    msg.setSource(62432U);
    msg.setSourceEntity(45U);
    msg.setDestination(15289U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.6952358233127911;
    msg.lon = 0.2614143706206363;

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
    msg.setTimeStamp(0.534819195775085);
    msg.setSource(65499U);
    msg.setSourceEntity(64U);
    msg.setDestination(63058U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.06294879352369465;
    msg.lon = 0.9406772805842736;

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
    msg.setTimeStamp(0.26408822510357344);
    msg.setSource(64453U);
    msg.setSourceEntity(160U);
    msg.setDestination(14281U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.9797234867427863;
    msg.lon = 0.17815875732770703;

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
    msg.setTimeStamp(0.5133261528361188);
    msg.setSource(17778U);
    msg.setSourceEntity(92U);
    msg.setDestination(4003U);
    msg.setDestinationEntity(230U);
    msg.timeout = 22687U;
    msg.lat = 0.47536630263896684;
    msg.lon = 0.046029176553189055;
    msg.z = 0.1743634689029685;
    msg.z_units = 178U;
    msg.pitch = 0.2609648243686772;
    msg.amplitude = 0.18618016708062435;
    msg.duration = 16053U;
    msg.speed = 0.4283783482074337;
    msg.speed_units = 41U;
    msg.radius = 0.5187441894291458;
    msg.direction = 230U;
    msg.custom.assign("OAWNZIABWFUPBUIEKWUFQZBIBFLFOEKSQAVPJWYSJCYJMSEHVFPCVXZRNPXXSNOQCRHQSQQHPFSMVRHTXETDJKUBOSCUPRMPNLVHVQOOMYGYDGDUCZTJLWABKSDVGMLLDXQKWJJCHGTBYYKBIALRUTHYMLMLODGHGDDZAWPGHSUZTBCZNEZEARNVAEKXEGZRGCKTJDFXNULQIMRPVTFWIEJIJWOFYQKCXAKZ");

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
    msg.setTimeStamp(0.2599921426672429);
    msg.setSource(44495U);
    msg.setSourceEntity(242U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(77U);
    msg.timeout = 27056U;
    msg.lat = 0.6211132544264623;
    msg.lon = 0.47588741758783826;
    msg.z = 0.9677735994671945;
    msg.z_units = 25U;
    msg.pitch = 0.003082150614983181;
    msg.amplitude = 0.3994791544496419;
    msg.duration = 39032U;
    msg.speed = 0.5616800770511748;
    msg.speed_units = 3U;
    msg.radius = 0.6200666885325716;
    msg.direction = 13U;
    msg.custom.assign("XLPOZSTLDQRIWYZHHCTJKQKFPMZZKZPFKNLDYCWHVSDKIDGIO");

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
    msg.setTimeStamp(0.5076535351166909);
    msg.setSource(20457U);
    msg.setSourceEntity(1U);
    msg.setDestination(38650U);
    msg.setDestinationEntity(8U);
    msg.timeout = 41751U;
    msg.lat = 0.7572214106050498;
    msg.lon = 0.7106696263548526;
    msg.z = 0.3852398788477456;
    msg.z_units = 136U;
    msg.pitch = 0.02756755368963859;
    msg.amplitude = 0.3163967440198959;
    msg.duration = 39201U;
    msg.speed = 0.06427383659641395;
    msg.speed_units = 230U;
    msg.radius = 0.05916334482002772;
    msg.direction = 39U;
    msg.custom.assign("HQMWCENFTMIWRRINCSGVBOOYDSAJSGVECGQGKOXRLZRFEEOWRSQNZIQSLKYIXDHWPRRPCELCWITC");

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
    msg.setTimeStamp(0.6478735310482212);
    msg.setSource(6076U);
    msg.setSourceEntity(161U);
    msg.setDestination(48878U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("TPNDYMFNRSEYMLBXOMJWSFIQHMJJIPDVYAHIORJNUARRUGXXBZSWXQHUUBIRPGTOZXTYHK");
    msg.reference_frame = 235U;
    msg.custom.assign("AWSVRPSIMXNBULTHFRPWJLGIDJKNFQDOKCYARUUJZFHBSHELEOJEFGJHCCMCMMQVQPEBYVMYGWYFVFROIWXVUMJRNNJVIMRGXZWFMDUUBNAANPZXKBRANWXIEPZMOQFASGAAMDHOOTNBZCILWOBYUKAHHEYYKBXELKLHXBBSKVDTDPGLKYGSQWOTXWQICPSZ");

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
    msg.setTimeStamp(0.3906898918340894);
    msg.setSource(58526U);
    msg.setSourceEntity(68U);
    msg.setDestination(25346U);
    msg.setDestinationEntity(199U);
    msg.formation_name.assign("KGRPSHXJWSLVMBFRIOQELWBCYGQEAWZVYBHXEVCRTFAPLH");
    msg.reference_frame = 169U;
    msg.custom.assign("OKMDRPPMOZELQAIHC");

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
    msg.setTimeStamp(0.9403635454506629);
    msg.setSource(45767U);
    msg.setSourceEntity(29U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("ZSOCYGCBKIJKOBOZQYQFSLIQAUNXZIIQBPDTWSLYQTRDNPQMVMOBXAUUXRVDLAJUQFFEWPGQSFVVX");
    msg.reference_frame = 61U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49304U;
    tmp_msg_0.off_x = 0.7519562368036522;
    tmp_msg_0.off_y = 0.5494156854842518;
    tmp_msg_0.off_z = 0.6771743258519916;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HIGIZCKYXNQOFYAJEWOUVSZMLIAKVWCYIDCXUBPJBBOAQCZFVPASAOYTRKSTVIZQZSHRCEMQXFXBFWHYTZVALZNBZVLQXSQA");

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
    msg.setTimeStamp(0.7194321997152018);
    msg.setSource(39024U);
    msg.setSourceEntity(26U);
    msg.setDestination(31574U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("ERBVMBFCROWBNYLIFHCXBRWCLFLUBIUHMZINDRDMWCPFSCULOXYZOYSAPPVSTERYZGTIIZVMTUPSNTKDAZTWOPPGXJKVMTQDAAJDYULS");
    msg.formation_name.assign("VOMASBMQREJCFWXDNAPGCOKADQVMCPMJVWBETELONOOSWEGSKJLFLGCTHGGEGTOLCAQEZHFFVWTWKQTXCXTKYFZBMUTDUGHDYYT");
    msg.plan_id.assign("SGRQPWUYHCWSJXOAKELABZNDLNPJRUGOVMIZTHORYLHIIJRDIAMBGOSSDIOOPSMJMOZZYNFZQEXCBFKJRCMJGMOCXJHTVDHBAPVTAERKU");
    msg.description.assign("OHABCFFZXLIQEXCGPUYILJNLRFSYICHWMPWVASNBJXPDSRPWAPPTEKNHLKJNSDBWZCYKLSXTHREWFGHMLUZNPTLTYVEWXXLJIEIQUVSEKQIDCTMUDSOKFHMUJBDEBNIIGSKKPYMAUKHDAXTVBIQTBUSGWZOTGOKYRXQHLZOQJUMVZAZGHKJRNZGWOUYOQEOGAQCPVBWPFNCMRWFVD");
    msg.leader_speed = 0.4898905020791027;
    msg.leader_bank_lim = 0.8910031220645893;
    msg.pos_sim_err_lim = 0.9911474348448069;
    msg.pos_sim_err_wrn = 0.7737098491370094;
    msg.pos_sim_err_timeout = 62343U;
    msg.converg_max = 0.4971939141329328;
    msg.converg_timeout = 33921U;
    msg.comms_timeout = 21785U;
    msg.turb_lim = 0.5748828703999953;
    msg.custom.assign("BNWQWMYWOMXNPIRBBPPAVTVVLKUFHRYRKGIZSYFUWSRZCMGQFOSCPXSLFVLDFGKJQ");

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
    msg.setTimeStamp(0.4161908351294251);
    msg.setSource(55753U);
    msg.setSourceEntity(134U);
    msg.setDestination(22074U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("RMBYYOANCKMOIVJTLQLZPEYKLGHIZNWWQDZQBMMCKRITVTJEKLHATDYLKQREDRJJCAESAHNWNIFKZLPWMWCHUBKVSKLPAFGFJTUMEWNJATCSHMAXFBXBHHIJCEVRZJAPYMQIUGUGCWQCNGXVFQRBIIXFPZQ");
    msg.formation_name.assign("YNFAMZJJBXFRTVZVXADUSWSNJCSZCPJEXHIBJJCQEGHNRFBQBRDLZFDDUKOKNWOEPLWCLPHHAYELGXVODWTAYRCHDULMWSQCBVEMPVCYSPXZWZBLDKVTPFZJKXDUNX");
    msg.plan_id.assign("SRZBQSVOBJCUWUCFLTYJQTLXYSDFMATSMZDZKOXVPERGLTNXADVTAFNEDWASBZPKGRPLVKJMOICGUIPRNDIHTIOZHAZLDJGKQYIIKEOHWYQWOJHIRDMROPCCSVB");
    msg.description.assign("AQXOQQZYGWXYVSOOQOK");
    msg.leader_speed = 0.13070815685812698;
    msg.leader_bank_lim = 0.9441880457827521;
    msg.pos_sim_err_lim = 0.4739338703105864;
    msg.pos_sim_err_wrn = 0.7221802859169354;
    msg.pos_sim_err_timeout = 58554U;
    msg.converg_max = 0.3482640110779286;
    msg.converg_timeout = 55863U;
    msg.comms_timeout = 14728U;
    msg.turb_lim = 0.018453199743669435;
    msg.custom.assign("LJXADUQQULWZXBPWJFFMMACRKZKYBADOFYEMOCPXAGEPKHKNJHVTCNKTSTUMDJSSSGJXYBVOAUIFWRDWWXTIEHNIPLTOGSOCNUPDOZFEWIFJVMKCMYYLMOJCUGZWIWONHYZWSTJGFIHRIZURAAORBREMYPLKKDNQHXJVJTPLBIHEEPGSFGBHZRXDPA");

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
    msg.setTimeStamp(0.7108216165779991);
    msg.setSource(34528U);
    msg.setSourceEntity(86U);
    msg.setDestination(31511U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("ZBLLEILWWBWEUHHJEJJTIPFUSIMSROXFPKIYSRHLMMKBONZBYXIOFQSDLGKPEQUANIP");
    msg.formation_name.assign("FBDFFPXBOSDHUMNBAIHQMGPGEEHWJHWGCNEKMPLMFXQURQKQEWFUCOCJPWXFIMTVJTMYYSPJFJG");
    msg.plan_id.assign("SZPPMBRMNAQWS");
    msg.description.assign("ULRAKTYQBZTXXSAWTNENOFYEVQLANNIGFSWLTXSRLBHTRWYMDVUPRCWAFXBJLCYHJDWAIRGRFMBDOTTOHRXHMGMUVVXVMBMCLXGWQQEBQDNKSAOBQOBDZUHKYDDCLJKBORHXPWJEFQIKKCQYUVZJTOHISFGETIGVUJEHYATILHSQACBYNZKLDCRWDYWIFVGZKVXMCJAUEZSSUVFIPHANMNCORSPOJCUGSIIKZXPEFQPNKFGPM");
    msg.leader_speed = 0.5432564950372325;
    msg.leader_bank_lim = 0.567890846148555;
    msg.pos_sim_err_lim = 0.47862873369754333;
    msg.pos_sim_err_wrn = 0.7006546362888982;
    msg.pos_sim_err_timeout = 60443U;
    msg.converg_max = 0.0012650129407627553;
    msg.converg_timeout = 55352U;
    msg.comms_timeout = 33216U;
    msg.turb_lim = 0.6269623049661759;
    msg.custom.assign("NVJKHTJEKSBVDRCZQUEMSCEGXDYQCWLEJHWFZZTPPAUCMJWOTCRPFOGIRSRNAYYMVWDBJTOMKKJWABNKHFLYKOHGTNQCWELNDRIKPZTIXZDQZLWRKAXGIBIKPSXQVGWTYPLYSXFDEMBDAXVFJUFZUACJEFIFNDCTQPDXNLUUGFVEBLZSOWMSAOLRXEGHNBKVHIIOTHAVYTEYGRPLMACVJSHHAMLMBPIBWUUBMYPFZDXYNQJV");

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
    msg.setTimeStamp(0.276358146451505);
    msg.setSource(46714U);
    msg.setSourceEntity(223U);
    msg.setDestination(12229U);
    msg.setDestinationEntity(178U);
    msg.control_src = 8195U;
    msg.control_ent = 117U;
    msg.timeout = 0.9354069600226628;
    msg.loiter_radius = 0.46149210300182497;
    msg.altitude_interval = 0.8107493833657587;

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
    msg.setTimeStamp(0.8029269289711307);
    msg.setSource(11923U);
    msg.setSourceEntity(67U);
    msg.setDestination(1839U);
    msg.setDestinationEntity(7U);
    msg.control_src = 64021U;
    msg.control_ent = 20U;
    msg.timeout = 0.7097851163106718;
    msg.loiter_radius = 0.3169047089336644;
    msg.altitude_interval = 0.47236325613426056;

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
    msg.setTimeStamp(0.09502503798203987);
    msg.setSource(26921U);
    msg.setSourceEntity(14U);
    msg.setDestination(61055U);
    msg.setDestinationEntity(184U);
    msg.control_src = 41829U;
    msg.control_ent = 142U;
    msg.timeout = 0.22533821873925897;
    msg.loiter_radius = 0.8515547769493333;
    msg.altitude_interval = 0.14726138019032842;

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
    msg.setTimeStamp(0.6179917556117503);
    msg.setSource(25230U);
    msg.setSourceEntity(112U);
    msg.setDestination(53413U);
    msg.setDestinationEntity(137U);
    msg.flags = 172U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1453414856341837;
    tmp_msg_0.speed_units = 161U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6437944675145673;
    tmp_msg_1.z_units = 120U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7393832913992117;
    msg.lon = 0.38734531545137385;
    msg.radius = 0.5687858956162484;

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
    msg.setTimeStamp(0.8281340190532205);
    msg.setSource(52566U);
    msg.setSourceEntity(140U);
    msg.setDestination(33541U);
    msg.setDestinationEntity(203U);
    msg.flags = 32U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.48529043115340087;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6181795098421995;
    tmp_msg_1.z_units = 203U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.07015778580886611;
    msg.lon = 0.4723025743174071;
    msg.radius = 0.07096854848138279;

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
    msg.setTimeStamp(0.6463998522078876);
    msg.setSource(58677U);
    msg.setSourceEntity(232U);
    msg.setDestination(45317U);
    msg.setDestinationEntity(145U);
    msg.flags = 14U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.35153835385452803;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09892675919192062;
    tmp_msg_1.z_units = 43U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4386528468160962;
    msg.lon = 0.26113880750557716;
    msg.radius = 0.1812152781971924;

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
    msg.setTimeStamp(0.9688752119770045);
    msg.setSource(28000U);
    msg.setSourceEntity(64U);
    msg.setDestination(46311U);
    msg.setDestinationEntity(13U);
    msg.control_src = 61402U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1197343673526533;
    tmp_tmp_msg_0_0.speed_units = 4U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2421295103343971;
    tmp_tmp_msg_0_1.z_units = 123U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.38036290967244557;
    tmp_msg_0.lon = 0.018242858252433214;
    tmp_msg_0.radius = 0.6526251736369436;
    msg.reference.set(tmp_msg_0);
    msg.state = 69U;
    msg.proximity = 47U;

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
    msg.setTimeStamp(0.40658391880261835);
    msg.setSource(6030U);
    msg.setSourceEntity(228U);
    msg.setDestination(50049U);
    msg.setDestinationEntity(206U);
    msg.control_src = 15300U;
    msg.control_ent = 59U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 164U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.49579275333896367;
    tmp_tmp_msg_0_0.speed_units = 43U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9250717115286274;
    tmp_tmp_msg_0_1.z_units = 104U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9692683124039511;
    tmp_msg_0.lon = 0.2500483369547629;
    tmp_msg_0.radius = 0.22328566785187065;
    msg.reference.set(tmp_msg_0);
    msg.state = 37U;
    msg.proximity = 94U;

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
    msg.setTimeStamp(0.6183923191372805);
    msg.setSource(8784U);
    msg.setSourceEntity(35U);
    msg.setDestination(3535U);
    msg.setDestinationEntity(128U);
    msg.control_src = 57811U;
    msg.control_ent = 82U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 84U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.347396369159365;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9615394470602946;
    tmp_tmp_msg_0_1.z_units = 88U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3387241230434309;
    tmp_msg_0.lon = 0.399591519484667;
    tmp_msg_0.radius = 0.025618564464880755;
    msg.reference.set(tmp_msg_0);
    msg.state = 82U;
    msg.proximity = 139U;

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
    msg.setTimeStamp(0.7907736468028654);
    msg.setSource(54797U);
    msg.setSourceEntity(186U);
    msg.setDestination(4307U);
    msg.setDestinationEntity(51U);
    msg.ax_cmd = 0.9225628118674513;
    msg.ay_cmd = 0.3279127590383265;
    msg.az_cmd = 0.6988199827328921;
    msg.ax_des = 0.5166436631329983;
    msg.ay_des = 0.8031200372057243;
    msg.az_des = 0.6443266988500591;
    msg.virt_err_x = 0.407307770734295;
    msg.virt_err_y = 0.5705157494348247;
    msg.virt_err_z = 0.7340884820518568;
    msg.surf_fdbk_x = 0.015205414823329044;
    msg.surf_fdbk_y = 0.3235670738085217;
    msg.surf_fdbk_z = 0.5521031627081594;
    msg.surf_unkn_x = 0.011575280615421235;
    msg.surf_unkn_y = 0.171323867834837;
    msg.surf_unkn_z = 0.30124376504931716;
    msg.ss_x = 0.6884428591591584;
    msg.ss_y = 0.9869660987655132;
    msg.ss_z = 0.35262638924464296;

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
    msg.setTimeStamp(0.9098404683730129);
    msg.setSource(901U);
    msg.setSourceEntity(33U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(98U);
    msg.ax_cmd = 0.2100587951415337;
    msg.ay_cmd = 0.9818337422894136;
    msg.az_cmd = 0.621605895400632;
    msg.ax_des = 0.9407101423501287;
    msg.ay_des = 0.805354309702313;
    msg.az_des = 0.6732671590685739;
    msg.virt_err_x = 0.5639170136244741;
    msg.virt_err_y = 0.08062029287760986;
    msg.virt_err_z = 0.2853323595284668;
    msg.surf_fdbk_x = 0.9846997608305784;
    msg.surf_fdbk_y = 0.46740278981822403;
    msg.surf_fdbk_z = 0.17584140330085107;
    msg.surf_unkn_x = 0.7496358457555115;
    msg.surf_unkn_y = 0.40652675671307326;
    msg.surf_unkn_z = 0.44451025905662955;
    msg.ss_x = 0.28778510004199054;
    msg.ss_y = 0.955759929972861;
    msg.ss_z = 0.1117536307363306;

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
    msg.setTimeStamp(0.956114961953464);
    msg.setSource(62114U);
    msg.setSourceEntity(127U);
    msg.setDestination(56396U);
    msg.setDestinationEntity(146U);
    msg.ax_cmd = 0.6416064458966236;
    msg.ay_cmd = 0.7052841525676431;
    msg.az_cmd = 0.29092012702779213;
    msg.ax_des = 0.3688503418410215;
    msg.ay_des = 0.04647968016295212;
    msg.az_des = 0.5498138485431451;
    msg.virt_err_x = 0.053410430402063946;
    msg.virt_err_y = 0.47301991967415113;
    msg.virt_err_z = 0.6471769453155223;
    msg.surf_fdbk_x = 0.4342067697190638;
    msg.surf_fdbk_y = 0.0991788387028848;
    msg.surf_fdbk_z = 0.8473439011813491;
    msg.surf_unkn_x = 0.3595819583661358;
    msg.surf_unkn_y = 0.011580430216055815;
    msg.surf_unkn_z = 0.22262245271489645;
    msg.ss_x = 0.18282797831546305;
    msg.ss_y = 0.5072748293124055;
    msg.ss_z = 0.8966191330151737;

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
    msg.setTimeStamp(0.35438171466148105);
    msg.setSource(33528U);
    msg.setSourceEntity(25U);
    msg.setDestination(40333U);
    msg.setDestinationEntity(67U);
    msg.s_id.assign("SALYMXONHQUTADXWJKVGDQAHWSCGUOGXSRBPTSECWQLMHZNWISSDDXPNKZQNULBCIZBTVJLIOHSEFEWXCDOMUTHLMCNKMORZIYUTFYLGKYFLRNHALMPTOJRFTPVVENJKYDEQOTGCJBUQRZXCDAPSPMBCSJPYLFUPHRXZBAYFJOUZAZVUAHRNEIFWRQWUJKEHFCIYNHRYGGKQJORBEWKIV");
    msg.dist = 0.18751068766969603;
    msg.err = 0.05882721495240728;
    msg.ctrl_imp = 0.1287408953885053;
    msg.rel_dir_x = 0.8999279298328957;
    msg.rel_dir_y = 0.11421048343336337;
    msg.rel_dir_z = 0.5004303522971478;
    msg.err_x = 0.5084737215367244;
    msg.err_y = 0.28762611895215184;
    msg.err_z = 0.9542199336928963;
    msg.rf_err_x = 0.6770808637964549;
    msg.rf_err_y = 0.8892750397938245;
    msg.rf_err_z = 0.3917158844296639;
    msg.rf_err_vx = 0.9863686530451057;
    msg.rf_err_vy = 0.5136944606710502;
    msg.rf_err_vz = 0.4688152312939484;
    msg.ss_x = 0.15928513014555323;
    msg.ss_y = 0.5216079739867288;
    msg.ss_z = 0.5649197202917239;
    msg.virt_err_x = 0.4188274778111256;
    msg.virt_err_y = 0.7209575868328587;
    msg.virt_err_z = 0.39573116854657897;

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
    msg.setTimeStamp(0.7425028834308258);
    msg.setSource(29311U);
    msg.setSourceEntity(236U);
    msg.setDestination(25904U);
    msg.setDestinationEntity(40U);
    msg.s_id.assign("JGTEDNDVKFXGGJNYVRENOQZXZISY");
    msg.dist = 0.31078691082518417;
    msg.err = 0.4492250183891031;
    msg.ctrl_imp = 0.07050183625827666;
    msg.rel_dir_x = 0.126774566940961;
    msg.rel_dir_y = 0.6931008264572358;
    msg.rel_dir_z = 0.5204962201108496;
    msg.err_x = 0.6189901473720326;
    msg.err_y = 0.753737591849707;
    msg.err_z = 0.05512377896188492;
    msg.rf_err_x = 0.9863361786623445;
    msg.rf_err_y = 0.8139060411591129;
    msg.rf_err_z = 0.9365604165686429;
    msg.rf_err_vx = 0.23800021958938133;
    msg.rf_err_vy = 0.6996959962718994;
    msg.rf_err_vz = 0.5796057035989982;
    msg.ss_x = 0.12846040362995925;
    msg.ss_y = 0.23935038737035075;
    msg.ss_z = 0.8469409741538102;
    msg.virt_err_x = 0.8100157045900297;
    msg.virt_err_y = 0.8445100083409615;
    msg.virt_err_z = 0.3806540567681409;

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
    msg.setTimeStamp(0.2516691993629053);
    msg.setSource(9206U);
    msg.setSourceEntity(103U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(233U);
    msg.s_id.assign("IYLVHNEVZKUPUGYJVTWGALKWLE");
    msg.dist = 0.3912785900948037;
    msg.err = 0.4053408266403973;
    msg.ctrl_imp = 0.18295633002586886;
    msg.rel_dir_x = 0.25243826707386996;
    msg.rel_dir_y = 0.9195343750201113;
    msg.rel_dir_z = 0.7261214684854593;
    msg.err_x = 0.004953184662433996;
    msg.err_y = 0.47966283774845475;
    msg.err_z = 0.06283494945025958;
    msg.rf_err_x = 0.004267816740035624;
    msg.rf_err_y = 0.953658484072532;
    msg.rf_err_z = 0.9149406281044058;
    msg.rf_err_vx = 0.46567218576700276;
    msg.rf_err_vy = 0.5596344053128645;
    msg.rf_err_vz = 0.564374966570258;
    msg.ss_x = 0.547733979293726;
    msg.ss_y = 0.9904495117199863;
    msg.ss_z = 0.5567139696981033;
    msg.virt_err_x = 0.7580997165011159;
    msg.virt_err_y = 0.9843078758355427;
    msg.virt_err_z = 0.563892722507594;

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
    msg.setTimeStamp(0.05266055357096089);
    msg.setSource(23354U);
    msg.setSourceEntity(229U);
    msg.setDestination(62302U);
    msg.setDestinationEntity(254U);
    msg.timeout = 15318U;
    msg.rpm = 0.747410673595292;
    msg.direction = 10U;
    msg.custom.assign("RIJNUOUCYXYLNKJHLGVCSOHXNZZYTFLHCKTWGTQACXHSAYDADQTUGXEKNVBOQUDMELGLZOXWQMFNWFKPWDBWWKAIXOFJMBEQPVZYTLMZJGMYAJCXJAVKIBHSSJWIGJPTEHUNVSIKVZWEARTIHMNEYHIHRQFQNLVVFHWXGYXTUFBODPFRUKDQULCETRJNAAEPZOFSOYSIRRDBQSEWRRPUICYSEJUONCIZLK");

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
    msg.setTimeStamp(0.6880990984024377);
    msg.setSource(32127U);
    msg.setSourceEntity(151U);
    msg.setDestination(31786U);
    msg.setDestinationEntity(123U);
    msg.timeout = 1684U;
    msg.rpm = 0.1088309194291942;
    msg.direction = 253U;
    msg.custom.assign("MPHTVELYCFJOBPREUDUHBMOZGKSIQWHN");

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
    msg.setTimeStamp(0.17212280384038747);
    msg.setSource(64017U);
    msg.setSourceEntity(81U);
    msg.setDestination(21518U);
    msg.setDestinationEntity(184U);
    msg.timeout = 56744U;
    msg.rpm = 0.3086866506647915;
    msg.direction = 158U;
    msg.custom.assign("DDUXUCJESDQYLOWZNBRBJTRNAMNMXAFXYJGNXSXSYGFSQPGBRPQGYSTUYOYQYRYMCHEGSKLHOFTBQUZALEJWVVBBRMMJNFKMLVBOZLIHPFHEAGECDOIFTPCIEKFIUPQAKTBITDBIQZLJLNEZQCGAVUZZMOCWWRKWCPAWXRMXTEISQLMJLGVGWCYNAOZJNSGHWOXPEVLVYFCRR");

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
    msg.setTimeStamp(0.7070836931194698);
    msg.setSource(37025U);
    msg.setSourceEntity(10U);
    msg.setDestination(28890U);
    msg.setDestinationEntity(77U);
    msg.formation_name.assign("ZAJQTXKXYFAKHHZQYZIKFWHZUQPBBRJAOLOJLPVRMGDRPVTPRCPJEVLKEGCSKORTNLAJVWYRYMGGTPGKFPDILHSOGGTFTBHNYIIUKHACJNIXJMWAEHFUNZQASIGWMMNIXDUEP");
    msg.type = 125U;
    msg.op = 10U;
    msg.group_name.assign("UYJJEXPIGOBXKLLRQLTJYEAPXGUANWMPWOAFATCXGXQVXBVRCYTHWLPDXBPCFMFSQLHKZJWQWD");
    msg.plan_id.assign("LGRWXTJGFUDBHYKECKLIPZOMWZUALDLANRFARTPBJLXEQHINVCYIDFEZZAOMKVXAX");
    msg.description.assign("WQIPSLKZCGVZDOFEQIDQNPTPUQAIICJJJBKMBOQWZBMMVCKETOTCFZDZAYAFUHYKJMMAXVXIZBNYJYFGKDYGIRDOYBQRKWFNROUNYVAEALTYYXMHCLNSUOCDJHEUFLOROHSLEHNJHBBXCJAXHIRENTIXJZDFIELQVUHCPTREMBSKFSEUFSNTFCMVMHPWOQPWACWNGGVRWSMXTDAPLZPWPNXIGREQTYUKZJSGBGSWSLGBVTOGRQLZXHAVLUKDX");
    msg.reference_frame = 126U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27428U;
    tmp_msg_0.off_x = 0.9921744087197558;
    tmp_msg_0.off_y = 0.23057953303968193;
    tmp_msg_0.off_z = 0.4999138840956836;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4215306804264245;
    msg.leader_speed_min = 0.8780054715110532;
    msg.leader_speed_max = 0.004239281061278577;
    msg.leader_alt_min = 0.8296103707048454;
    msg.leader_alt_max = 0.29349468813371216;
    msg.pos_sim_err_lim = 0.28806396223500896;
    msg.pos_sim_err_wrn = 0.46773617842907145;
    msg.pos_sim_err_timeout = 49413U;
    msg.converg_max = 0.2687714750150918;
    msg.converg_timeout = 20733U;
    msg.comms_timeout = 26460U;
    msg.turb_lim = 0.7100045583976826;
    msg.custom.assign("TCZRSBHPZSIXPNZXJWVEFIOGNHGIDQNSLFLGXJOTWVHLFUPZOCONEFOWRFDTOUNPSEDSMMKIZNVTXYJVSASNEIMMYPQKJPMGQAERKIYUUATRAAZFMTYLURLXUKVLIJGQQWMCMAQXSYBTBTZDWJQEECVIUZODBCVYNCNWRRPXAGJRJDGHBYBGQUOLFCALPDTUKCFWHZBDJKNBXKCVXKWKWHMUGITEHKEQVLVYDSESQPOAFCIPOR");

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
    msg.setTimeStamp(0.20692709456259806);
    msg.setSource(310U);
    msg.setSourceEntity(211U);
    msg.setDestination(9118U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("LGYFAPTWZVYWZ");
    msg.type = 20U;
    msg.op = 26U;
    msg.group_name.assign("DATISNDUCSYXFVIGBRCYHMUEXZSVFONSHKJQFWRVWXJZNBFVKLWYGJDDTOGKNHWCAZPIUETWNBPOGHHLAKSWODVKOQKACUYYLXQLPWALMRQCFZZTEJTUNXPEAYOKLFSGEQSMZQJD");
    msg.plan_id.assign("TLANZZZJELAQTTUAD");
    msg.description.assign("BXZBAVYUOMVRHIRKVEPGSYBWDOAPFVTKTRBILLYUHDWLITKUVGLMJCWIROYQKJNIRCFDJKL");
    msg.reference_frame = 229U;
    msg.leader_bank_lim = 0.6130239711868356;
    msg.leader_speed_min = 0.9161791315517298;
    msg.leader_speed_max = 0.6882520063048708;
    msg.leader_alt_min = 0.6922162235786387;
    msg.leader_alt_max = 0.20318057758444885;
    msg.pos_sim_err_lim = 0.9001998876148374;
    msg.pos_sim_err_wrn = 0.6295558538101195;
    msg.pos_sim_err_timeout = 20758U;
    msg.converg_max = 0.9487922275554903;
    msg.converg_timeout = 19292U;
    msg.comms_timeout = 21781U;
    msg.turb_lim = 0.7118133634631063;
    msg.custom.assign("MYYWKTIKBKWJPNOIRUAOZCUTWJFTAQBQTIERBLGEASPOEPYLUCTZYHSVKGJGOJQMOO");

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
    msg.setTimeStamp(0.4809888600425497);
    msg.setSource(21844U);
    msg.setSourceEntity(231U);
    msg.setDestination(493U);
    msg.setDestinationEntity(141U);
    msg.formation_name.assign("LNAVRZTUIXHNBVELBKXGPVZLUFPZATFWHYQOAPCJUJDWBENQUWEZYYCIQXWAETCEHPKQPDKSOVUGSSCXFNCAZQXHYPAQJKTSGCBDNMUFBHRQMAWRUUURZRJHJNDSKYICKQPXPDHMXMMXNWQYOFKXBDNVKMGVFJRXIGZSOKCODBLMLDQCTORSYPIAZJLSEYVRHIFIOVVFRWJHAOGTMOSLFBDBGWWGHTIM");
    msg.type = 70U;
    msg.op = 226U;
    msg.group_name.assign("ZNDAEPKYIKGFLSJZWQXXOIFOIKBDZRDWGCJHTWQQFSVUULVLBTWOEPSRXPZNBNLVFFSFUWKBHPHPXMIWQCYDDPKRTWIHYFQJANRMNSPUGPKEUVWXNCZUIPXDDTNMYTHYOSEZQZMCSUJUMEOCUHGRYDAHWBSRXOQZXCGJKNEQIRSEXCMSGFYHNCOBEUIJLBRWLVTTIQJTEYOARGHZBAFKKJYJ");
    msg.plan_id.assign("LCOGANFDFKXIXSCXZLHEATCGXOAOCMTDYUNWFHZHQEGWNGTRRYTTFANMMZJIUCKPYEAPRDOPIEBWNQAEMVSVBIMZEJUKDZ");
    msg.description.assign("NFXHYREUOQHNCCVNWISJSBGIWMQUDJJBKIHGCRHTMILHPEYYOEJFYWLWAZVWGYVQEZHRQUAZWGTQHAPGANDPSEEJQPXZENUMAUTSODLXSG");
    msg.reference_frame = 5U;
    msg.leader_bank_lim = 0.9638666112978523;
    msg.leader_speed_min = 0.8630031594417248;
    msg.leader_speed_max = 0.4175263107906281;
    msg.leader_alt_min = 0.11443594762449039;
    msg.leader_alt_max = 0.588442797015332;
    msg.pos_sim_err_lim = 0.8801676545411076;
    msg.pos_sim_err_wrn = 0.8193087103354738;
    msg.pos_sim_err_timeout = 39986U;
    msg.converg_max = 0.6168936125904894;
    msg.converg_timeout = 18539U;
    msg.comms_timeout = 4527U;
    msg.turb_lim = 0.6583884079686334;
    msg.custom.assign("VHSMYYBNZQQLJWUKILJMPOWOXBVSLADOUFAFZFTQJTAIVEWWSSTNENBDETFECVPJCYNTIXOTXSOYDRHLQLNTCWHGHKDHAHUZHNZCYQEMZKEBKWBFQBWIPUIUXYIFVCNOYAULXICPVUMJPSQTRNYGPIDUBZQGVIRZHJJXJXKXELMATGLFKWMMNRGSAPPOCPGEDHODOBQFGEIYCKKJRDLULSBZRZRRDCWSPTOQJKVW");

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
    msg.setTimeStamp(0.6931527115853461);
    msg.setSource(58188U);
    msg.setSourceEntity(44U);
    msg.setDestination(8338U);
    msg.setDestinationEntity(13U);
    msg.timeout = 2979U;
    msg.lat = 0.5266329394023527;
    msg.lon = 0.9415177083376481;
    msg.z = 0.5046769677360967;
    msg.z_units = 78U;
    msg.speed = 0.20324760832377975;
    msg.speed_units = 247U;
    msg.custom.assign("WYVAUTSNWYZVKAVSOKPLPDNZERXLINJRCYMFEXLYDONMNACOCYBUOKXCUYNAAEMNUQPLNTYQJKFGEJEEZDZGMJSAMWHGJXSYBKHTCIIQQTYHIOQRWBXHDKIODTZEQPXHVJQFTCCFYQLTZJVOGZPUTPWFIJUARSDLGGBXBIIRJDNERUMWBU");

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
    msg.setTimeStamp(0.8158625034136133);
    msg.setSource(6954U);
    msg.setSourceEntity(180U);
    msg.setDestination(15227U);
    msg.setDestinationEntity(12U);
    msg.timeout = 31910U;
    msg.lat = 0.10246127004449668;
    msg.lon = 0.3580182105246059;
    msg.z = 0.24131474567402644;
    msg.z_units = 8U;
    msg.speed = 0.05901129104064795;
    msg.speed_units = 236U;
    msg.custom.assign("VAOKMSUAQKUYOQITJTJHEMTRBBYFGJXZCGGDLEXZJRETSTUAVXMOMIKLGXTJHWLRTXQNSVABNCTZTMPCJQLBAOCUKUWFPOMBJXCYLIGJKGIPPVLVGDVVURXQIPRHAXISFZMFQDEZYAOKNQRTHZPFEPGNWISZKVWPFZJGNCWRKQUGAMVOLNEMXRHEKFYEUFEHDWVLBHJRUOXWEDSDDSFYABI");

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
    msg.setTimeStamp(0.10779627335883257);
    msg.setSource(57630U);
    msg.setSourceEntity(120U);
    msg.setDestination(33551U);
    msg.setDestinationEntity(214U);
    msg.timeout = 42793U;
    msg.lat = 0.5724054774122368;
    msg.lon = 0.9684414190876758;
    msg.z = 0.3496766763817766;
    msg.z_units = 156U;
    msg.speed = 0.9942886963562919;
    msg.speed_units = 179U;
    msg.custom.assign("GWYLSJCWUSSJUJGFEQICTFETQOQRVNPLXFNNDFRPKHDBPGVHFCSSWNORCMIBMJBGKFYFXPDZEZCLLMHAVLSHVZGDXNDXTKXREOKCPKGBAWMKHU");

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
    msg.setTimeStamp(0.5805408037442202);
    msg.setSource(31267U);
    msg.setSourceEntity(233U);
    msg.setDestination(13570U);
    msg.setDestinationEntity(8U);
    msg.timeout = 8722U;
    msg.lat = 0.3710528462171788;
    msg.lon = 0.10696554081599752;
    msg.z = 0.9350208214522657;
    msg.z_units = 215U;
    msg.speed = 0.9364602835615877;
    msg.speed_units = 228U;
    msg.custom.assign("POXUIVRNQMEUSXATWTDRPLHNDACOSRTJAAOKOWMGHDTQJZJGSQFEOMLEKHUEKIHIQNJVHVLHTYVGSAPIGMZCFZLGTBYVXJWOFWLNUQVOPUBRTSHTNGUC");

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
    msg.setTimeStamp(0.9692476465861364);
    msg.setSource(62315U);
    msg.setSourceEntity(32U);
    msg.setDestination(23707U);
    msg.setDestinationEntity(197U);
    msg.timeout = 40596U;
    msg.lat = 0.40131700492594113;
    msg.lon = 0.00019923035846369785;
    msg.z = 0.1275516308866831;
    msg.z_units = 137U;
    msg.speed = 0.837766464049698;
    msg.speed_units = 56U;
    msg.custom.assign("QEJTZHFHNMDKLUELFIGQFRNGCVUEDNGJZHXIYXSZOCJJVRSFCVTPMSNPTZKYJJLDFANBVQFNOTKROLWEDEMMWYLLOYXPINMJKWMHSCFBZEBTVECUYFRHPSFLUQILQKAYCWMLVYVXTSZXPKXQIBEJUBRNWHCZWEORGATDYHPXTQTCQHAVLBGKVO");

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
    msg.setTimeStamp(0.5134221118994431);
    msg.setSource(41274U);
    msg.setSourceEntity(191U);
    msg.setDestination(21168U);
    msg.setDestinationEntity(222U);
    msg.timeout = 54501U;
    msg.lat = 0.3552110771707223;
    msg.lon = 0.46526443472538404;
    msg.z = 0.04956624229796469;
    msg.z_units = 5U;
    msg.speed = 0.8815669062625507;
    msg.speed_units = 183U;
    msg.custom.assign("SFSPRBVQCOGMXWHMZNYVGXDIFTJRBMHHJGOFOVOCCBRJIWKGUYRSQRTPOMXCRZYLVVDZPYLODUPLKAQASAHUMMUPYHHTDKAGXLIAPTDECJHDIVQYZTCQKCKIWSIAJINEJBSFAKYNXPHJXTIQEFWAZPNRNXLWFZZBQXFTEZLDCFSLUMDBKSKJGMNBDROVQJWOWUSAGWEKGCPBBVFZYNUNXKFDJEVGNEEREUVPRNUAMLWCGIOTTETQ");

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
    msg.setTimeStamp(0.34065641206939257);
    msg.setSource(46684U);
    msg.setSourceEntity(201U);
    msg.setDestination(22956U);
    msg.setDestinationEntity(102U);
    msg.arrival_time = 0.9928117376936747;
    msg.lat = 0.4827824997435316;
    msg.lon = 0.1869686686409172;
    msg.z = 0.8227165265407046;
    msg.z_units = 151U;
    msg.travel_z = 0.4303454660013606;
    msg.travel_z_units = 88U;
    msg.delayed = 128U;

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
    msg.setTimeStamp(0.8076787971404557);
    msg.setSource(15444U);
    msg.setSourceEntity(251U);
    msg.setDestination(10701U);
    msg.setDestinationEntity(167U);
    msg.arrival_time = 0.80188403210851;
    msg.lat = 0.7498097075733178;
    msg.lon = 0.9308627151826624;
    msg.z = 0.7459628507260633;
    msg.z_units = 83U;
    msg.travel_z = 0.6657032055631618;
    msg.travel_z_units = 200U;
    msg.delayed = 211U;

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
    msg.setTimeStamp(0.06617307411010487);
    msg.setSource(9266U);
    msg.setSourceEntity(203U);
    msg.setDestination(5851U);
    msg.setDestinationEntity(195U);
    msg.arrival_time = 0.03950284572345508;
    msg.lat = 0.284689631713961;
    msg.lon = 0.3702361120492693;
    msg.z = 0.5516272119369621;
    msg.z_units = 136U;
    msg.travel_z = 0.8969640033153382;
    msg.travel_z_units = 134U;
    msg.delayed = 139U;

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
    msg.setTimeStamp(0.8590225224174307);
    msg.setSource(61469U);
    msg.setSourceEntity(176U);
    msg.setDestination(18249U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.1374277075281729;
    msg.lon = 0.3642392761661566;
    msg.z = 0.8355048237183543;
    msg.z_units = 241U;
    msg.speed = 0.6838050011313695;
    msg.speed_units = 123U;
    msg.bearing = 0.0472015473782329;
    msg.cross_angle = 0.8981687747108478;
    msg.width = 0.48267149758862293;
    msg.length = 0.7243823688398308;
    msg.coff = 195U;
    msg.angaperture = 0.5237437966008377;
    msg.range = 20264U;
    msg.overlap = 52U;
    msg.flags = 112U;
    msg.custom.assign("XGHQUFPPLVMFXQQGGXUXVZDGMHQDDYFXCPIDKBKZANVUVTNZSGWHSGNNZPZFNEANDHSWJTNRPPUFHKDVJTXIZFXQKSWOACOXBYLHMWURYJMAYVLCLHRICLJAPRBVMTLKPZRGDJYEWETAEEOIWHFROBTJBCCZOFLYPERRITIKNKEIPRGTWO");

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
    msg.setTimeStamp(0.3984233332751621);
    msg.setSource(12168U);
    msg.setSourceEntity(182U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.7864035408571924;
    msg.lon = 0.8860588310274706;
    msg.z = 0.4190649062870917;
    msg.z_units = 146U;
    msg.speed = 0.5165564943762413;
    msg.speed_units = 188U;
    msg.bearing = 0.388454898502158;
    msg.cross_angle = 0.7339980843395821;
    msg.width = 0.1321617960610415;
    msg.length = 0.3563607989810882;
    msg.coff = 77U;
    msg.angaperture = 0.6540305040102568;
    msg.range = 55991U;
    msg.overlap = 74U;
    msg.flags = 158U;
    msg.custom.assign("XDUGCICGXATNNAHSESFTBSHYYQDFGXUDWWZUGSYBREBLKITQPBBLCJZCKRYPGYHOKCQNAZSONYTRIRZS");

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
    msg.setTimeStamp(0.42864935519440006);
    msg.setSource(41106U);
    msg.setSourceEntity(133U);
    msg.setDestination(50741U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.5667248636553041;
    msg.lon = 0.5767435646096918;
    msg.z = 0.8300671617595263;
    msg.z_units = 70U;
    msg.speed = 0.40217418593650467;
    msg.speed_units = 153U;
    msg.bearing = 0.7235045539613244;
    msg.cross_angle = 0.15447740403991217;
    msg.width = 0.8974172025197635;
    msg.length = 0.28769200518175886;
    msg.coff = 106U;
    msg.angaperture = 0.9194629839682946;
    msg.range = 11786U;
    msg.overlap = 40U;
    msg.flags = 13U;
    msg.custom.assign("AVKFTWTZTQSGVBKVGFEPBIMZRYSQYLTVZLPZUYYXPPUKNFSZCBDSSJMGDNJTHBDQSKLVRHUPFZGGFODYIBWWHPBJUAGMTLGUOAHMNIAVENPWKBAEBHJQVWROEEZVICYMYEYUJLAHGXYKWZKNGAUBSQOSHFSJCQIHOHMCNTDCKOANRCOWZAFRTQRXANDTCJJQYHLUEJXCTRPDERNVFBVXNXIMSXIOIZ");

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
    msg.setTimeStamp(0.8000517348099782);
    msg.setSource(11018U);
    msg.setSourceEntity(102U);
    msg.setDestination(4123U);
    msg.setDestinationEntity(19U);
    msg.timeout = 5506U;
    msg.lat = 0.2215039704974433;
    msg.lon = 0.6564147447591255;
    msg.z = 0.41796638937475794;
    msg.z_units = 222U;
    msg.speed = 0.21269717040607705;
    msg.speed_units = 51U;
    msg.syringe0 = 16U;
    msg.syringe1 = 20U;
    msg.syringe2 = 142U;
    msg.custom.assign("JXVBKHELTROWUIBIUISQOMVMWWFMLIMYDLLOMQDOCRAYHAENLYBYFDDVOCCBKEQAEZDZRTBSFTNLXCRZBXRPZHTNPGUZEMZXWCJVVQQSKYUJEAPRCACTZAOQFNYEGHAVNQHIKRGIONTKJIKMISPSBUETIXNPQJ");

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
    msg.setTimeStamp(0.2558578323657116);
    msg.setSource(8020U);
    msg.setSourceEntity(100U);
    msg.setDestination(57734U);
    msg.setDestinationEntity(13U);
    msg.timeout = 4012U;
    msg.lat = 0.9029798322750814;
    msg.lon = 0.3788253418303088;
    msg.z = 0.8348963122674383;
    msg.z_units = 12U;
    msg.speed = 0.33489838221009827;
    msg.speed_units = 219U;
    msg.syringe0 = 107U;
    msg.syringe1 = 235U;
    msg.syringe2 = 134U;
    msg.custom.assign("TQWRQBPJTXRCFSJYHJSBJGNKHFYPBUUI");

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
    msg.setTimeStamp(0.18661170158200058);
    msg.setSource(62971U);
    msg.setSourceEntity(138U);
    msg.setDestination(61808U);
    msg.setDestinationEntity(173U);
    msg.timeout = 49355U;
    msg.lat = 0.9984399632395538;
    msg.lon = 0.7022331605078735;
    msg.z = 0.5011485000370544;
    msg.z_units = 112U;
    msg.speed = 0.9280150782907133;
    msg.speed_units = 234U;
    msg.syringe0 = 59U;
    msg.syringe1 = 149U;
    msg.syringe2 = 213U;
    msg.custom.assign("OTARALTIBNEKBMUWVTPFGYTKPAJYSABPZTDWCDERLQRZJSCYBKHMUOSLXTBPSMFFRLHIMGDIGPEOULQKQMAWXXNRFDOVBRPWHWXWHMVHVZFVDGVGICVNCRLUNZQISQXWQPISFWOGYFAJYMJCDDAECTSPKYNCKZGGTFRDEEXUYDMEHQLOXEHGBMKTOLHAMZNJCJOEACXAWHLRQQ");

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
    msg.setTimeStamp(0.24802705042464435);
    msg.setSource(59738U);
    msg.setSourceEntity(65U);
    msg.setDestination(32130U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.9005929000497007);
    msg.setSource(6771U);
    msg.setSourceEntity(116U);
    msg.setDestination(19212U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.878080901819914);
    msg.setSource(2564U);
    msg.setSourceEntity(178U);
    msg.setDestination(4200U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.5565030879262769);
    msg.setSource(10804U);
    msg.setSourceEntity(251U);
    msg.setDestination(15582U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.40096361923081325;
    msg.lon = 0.6904751447689423;
    msg.z = 0.9632534824923676;
    msg.z_units = 105U;
    msg.speed = 0.06775597066944294;
    msg.speed_units = 130U;
    msg.takeoff_pitch = 0.4688933306111097;
    msg.custom.assign("EPHWZFIQGZMXXPLVXFZJFRSCMZXNWHDCREPQSYMWAUKFJPHBGQZKACVYTCMPBDGLSHRBEDXWQXIJPACUZDQQOCTFPIJBZTTYEMNEOLEAKAGOZJBOEHDRFPEHMGSBRSLPHMVATDHUGGZCHMORGDRXWRQLYSXXOVEUFSKKVCCVUTUEFAWQUQULABMGNTNTVYNILK");

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
    msg.setTimeStamp(0.9467880599078281);
    msg.setSource(55088U);
    msg.setSourceEntity(107U);
    msg.setDestination(8699U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.04346802424605678;
    msg.lon = 0.5396179336065402;
    msg.z = 0.07087895214094198;
    msg.z_units = 47U;
    msg.speed = 0.6768668635311482;
    msg.speed_units = 142U;
    msg.takeoff_pitch = 0.6195840859097344;
    msg.custom.assign("ARKJGTSIQBUUKIZLEYIZTKLTZDJXGYIPVZDBYBGKOZRX");

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
    msg.setTimeStamp(0.9345646107614942);
    msg.setSource(25873U);
    msg.setSourceEntity(44U);
    msg.setDestination(24578U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.9124007243907752;
    msg.lon = 0.3061212227171296;
    msg.z = 0.5912753819993949;
    msg.z_units = 7U;
    msg.speed = 0.1753434947682001;
    msg.speed_units = 48U;
    msg.takeoff_pitch = 0.9061014475712424;
    msg.custom.assign("HSCOTDOFPJXHDADOCWDMLTOLJYWAUIGFNWSSHWGSNUXFEXYATUBQMVYHQFYKQUMIUCRIBQZDBGCKWYPPLHTZARKEEUDUVLTFCPVUZFXJBMJSNBZFNTRBDQPIXD");

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
    msg.setTimeStamp(0.5577130289301532);
    msg.setSource(16102U);
    msg.setSourceEntity(85U);
    msg.setDestination(12562U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.48187980922026097;
    msg.lon = 0.15931148912139315;
    msg.z = 0.6404027359983935;
    msg.z_units = 249U;
    msg.speed = 0.1349805820163421;
    msg.speed_units = 69U;
    msg.abort_z = 0.05935276940285006;
    msg.bearing = 0.9954371958292844;
    msg.glide_slope = 168U;
    msg.glide_slope_alt = 0.024106170930833226;
    msg.custom.assign("TANJEYOIOBPRVYWSVMJGPEZCFFLKVTSTNQWEKJLJLDOCCLOYUTXHMHLSGZJCTQGONH");

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
    msg.setTimeStamp(0.2566471947354293);
    msg.setSource(13433U);
    msg.setSourceEntity(249U);
    msg.setDestination(51909U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.34221835556715385;
    msg.lon = 0.6089271377264718;
    msg.z = 0.9794119111055021;
    msg.z_units = 14U;
    msg.speed = 0.6900273069564;
    msg.speed_units = 126U;
    msg.abort_z = 0.5301528729773923;
    msg.bearing = 0.24079662289583847;
    msg.glide_slope = 149U;
    msg.glide_slope_alt = 0.5930743700143233;
    msg.custom.assign("RVQKRAEGRFFLZAUZLTJXHKDTIYTXGOAPPTECSTVZJHUKERYZQABSQWJOEVNEANDERPMUVKOYBPUTLEYCGVFXCOVQNBWWNDFBZSAGZQRPBPEFBGOYZNZSLJHFMAJTRSCMWKVVFDWZAYDXRPNXKJYUGMFCFS");

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
    msg.setTimeStamp(0.1543353369787156);
    msg.setSource(35997U);
    msg.setSourceEntity(132U);
    msg.setDestination(9112U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.4180751501082268;
    msg.lon = 0.33180768858241416;
    msg.z = 0.6434620189743495;
    msg.z_units = 184U;
    msg.speed = 0.884364924490598;
    msg.speed_units = 14U;
    msg.abort_z = 0.2503500351898369;
    msg.bearing = 0.7638330884544688;
    msg.glide_slope = 60U;
    msg.glide_slope_alt = 0.2775025308956697;
    msg.custom.assign("ZEGAGFEYDYDSRGMZWVPDFTCSSHRCJRYVUFARKPUUWBAKNJVYHREAXUXEUAXOLQIWQIACPKRWOPFLAKCEMBQUMWVAAQTIODRWEGBBNNHSPMSCGZLCYSEOFTYFWBBKJWJBLTKNVXBQDXSYCFDMKZKTINVMXKZJSJYKHUVMUNJOITXPQDOCSUMGMIOCFOJBHVIGLZECNUOGLXZNLZWHHFHPLIPQITXB");

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
    msg.setTimeStamp(0.22164041903109444);
    msg.setSource(21121U);
    msg.setSourceEntity(248U);
    msg.setDestination(20194U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.23620730046899263;
    msg.lon = 0.9855054167105166;
    msg.speed = 0.21379921831730175;
    msg.speed_units = 12U;
    msg.limits = 135U;
    msg.max_depth = 0.6710388963506531;
    msg.min_alt = 0.09131902001512648;
    msg.time_limit = 0.6208301053528591;
    msg.controller.assign("JXZKJIWTIWW");
    msg.custom.assign("YCQOUIULAAJPXEYMQSXHKIFDFHNLOWRKHVNFSCUZPVAWYKLLIWEVRDSCTYVKRRAUZTNKQEGNWOAVSKXJTRKHCZQFDLOYYUMCBGDMORPJPOTHXGBNRBKWTAVLEXUMWAGCJQNPHSXENIMNFZCGGQZUZXSWLXKRQVBCDQJVFMBGIJJTORWUDLOSMHDCAVIYS");

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
    msg.setTimeStamp(0.12785240114431506);
    msg.setSource(51119U);
    msg.setSourceEntity(213U);
    msg.setDestination(224U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.667092502905005;
    msg.lon = 0.6115606706811983;
    msg.speed = 0.8089619031916486;
    msg.speed_units = 114U;
    msg.limits = 209U;
    msg.max_depth = 0.3277476296977755;
    msg.min_alt = 0.3218339663544614;
    msg.time_limit = 0.4316547218450377;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9750571030343979;
    tmp_msg_0.lon = 0.6957258289308402;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EDQORUMVLHKKIRWXKWPUCOHCRLXQUSLECDALBAUIFVAOJTWEVGPKCFTTQIWYCZDBFNHNGEUGZXFZAXYCLHNIALIRAXN");
    msg.custom.assign("ZIRNSFRGBVGOADVKSDFWCRFNCIVXDEFVSLSVQMCEVZHWBRTAAFQUZHCVDBTCTPKPSMWVISXUHOXYLGKLKHJAJBMOKFOHAOQTWXI");

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
    msg.setTimeStamp(0.5511550295441383);
    msg.setSource(782U);
    msg.setSourceEntity(162U);
    msg.setDestination(35742U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.2974736695054482;
    msg.lon = 0.02961854819140919;
    msg.speed = 0.005866454073755634;
    msg.speed_units = 98U;
    msg.limits = 122U;
    msg.max_depth = 0.6870558283712029;
    msg.min_alt = 0.2622104633733404;
    msg.time_limit = 0.24203525472638598;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.23538695991390535;
    tmp_msg_0.lon = 0.8234240329329919;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FARWMFUXSDOAPOLFQFUIQYCPMLSOWOTNLHGPXODQNKAZQFOIHZGZOEWLDVVTEGUBNJOGZCADSZXHVHDDAATLVWBCORTHPENSHDENRPSPJIGLBQBEITUMPIRZIWUNABESQJUKUDAJJLENQGAKKMMRBYYKPBVRFRRXHLCXGRCYJSINPJNMYQGEZMSYCCEQLZXUDAIVZQRNWFWXTVS");
    msg.custom.assign("IYNIYYBPXKXUVKMGJPHGCCPCJNFNTGNXEBSMYAZOBNLRDXQJIRTGLYFKWEQDDOINMKTPCDYHRUCDAWNAFSWOPDYWCJFJUORFBEWAGJCREKJVPULAUZKOGROSDMEVAWTZTSUKHMUOTUBCDFNRLVNSHEYQHCQLVFSTZYIFHZLNFEXLMQEPVGRZZVOOSXIEZXBPWIWJRHDMHBUV");

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
    msg.setTimeStamp(0.09923205349741349);
    msg.setSource(34941U);
    msg.setSourceEntity(53U);
    msg.setDestination(24291U);
    msg.setDestinationEntity(99U);
    msg.target.assign("COTQYJNISOVVYUOESHPFOADDDXGMARYYZBPDZFGBTUASPSTDHWWMRHIOHVUIHWQRSLCIMGUCJOF");
    msg.max_speed = 0.6794767180858144;
    msg.speed_units = 128U;
    msg.lat = 0.2867685410925558;
    msg.lon = 0.9318678825406664;
    msg.z = 0.43311366124256256;
    msg.z_units = 78U;
    msg.custom.assign("HUCZAPRIFLBBDOMWWFAVLOUMCECNTEADBKZARJDBJWHIOLNJQWTWNXMMCBHTONZDJVXUQHOAZGVUNVKBIKGJVYUMJMTGWZHWEUXXKXNLZNUIOPIFAIDJRSFQDVS");

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
    msg.setTimeStamp(0.20166681295833588);
    msg.setSource(54629U);
    msg.setSourceEntity(7U);
    msg.setDestination(11156U);
    msg.setDestinationEntity(213U);
    msg.target.assign("TLVYTYEAPCOTKZWLLCLBHNEJFUSVMGBHLDTNCJQUWRODESPIAUFMESBJJFYDRQKJZGFXORGOQSIOUVREWEOOXMYTUODKKHEZZCCOBXBLGZPJQGAHVWULPZQHKHAAOZMXBHRNBWXHJKUUUKVG");
    msg.max_speed = 0.2796535528616866;
    msg.speed_units = 68U;
    msg.lat = 0.4370105297174188;
    msg.lon = 0.021375241998949912;
    msg.z = 0.13098753062443058;
    msg.z_units = 143U;
    msg.custom.assign("IMLIJIFSZOBRCYFWMJSQCNHGSUUYSPMGYDYLULRXYFENYCVOFDWDXVBEMEHK");

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
    msg.setTimeStamp(0.4602791989764159);
    msg.setSource(8816U);
    msg.setSourceEntity(37U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(114U);
    msg.target.assign("OTQVORMORJDUAMDEZGXGGHNSRSSOVITPVZRLRNUGUKCNZYCFSHWQMTKSVJZIWRK");
    msg.max_speed = 0.4650492005371144;
    msg.speed_units = 238U;
    msg.lat = 0.3487032727469619;
    msg.lon = 0.18744551300887813;
    msg.z = 0.865050687815918;
    msg.z_units = 44U;
    msg.custom.assign("NKPUDXIQNLDGMPKVBQFFJLFNJMVXZJPZUHNZBYEIPMMGHQWZZJKLOZELBILZDIWCVXFSOBAWOSRYUNVYEUQKEARKK");

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
    msg.setTimeStamp(0.633948463511975);
    msg.setSource(18503U);
    msg.setSourceEntity(149U);
    msg.setDestination(25629U);
    msg.setDestinationEntity(19U);
    msg.timeout = 3395U;
    msg.lat = 0.0020894903185106894;
    msg.lon = 0.6858552438992632;
    msg.speed = 0.5940800865603413;
    msg.speed_units = 207U;
    msg.custom.assign("XONBRSEMICBPCMQASGQQDOVFXQKRBMZJYBTLANDGMDFRTVXQKZAQQEGWWNXYTTFAOZHOBIELWUABWYPYJKHZIHWZDMWQEDRFUWPYDUKPJZPVYXJNMFDTCZCROTGAENOJXFKHEJAGMXSTCZIILEWWYYSWTDRKLOMYBEBMCX");

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
    msg.setTimeStamp(0.908919015171457);
    msg.setSource(26204U);
    msg.setSourceEntity(105U);
    msg.setDestination(51133U);
    msg.setDestinationEntity(129U);
    msg.timeout = 3823U;
    msg.lat = 0.8286773574644073;
    msg.lon = 0.5373694417064814;
    msg.speed = 0.00995948720190043;
    msg.speed_units = 55U;
    msg.custom.assign("FIBZNYCQLRZIGZXLEFYLTKZDJUBGNZTUSVKEPIAYJLTZDNCHQLHBKQBBMCYCHJVWVASHWTGPVEBSKSLFHMDONBRXTBRVIDOKUEJPVRBLQXRSOGRATIAJOYGSUAQCCDJAINPMPDKUUZCRRMTVMQKUNUGHMJSFIUONCYRJDRLFETXKTOFTNFDHLMOOGPQGXQEBWPJOK");

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
    msg.setTimeStamp(0.14136783145733178);
    msg.setSource(16808U);
    msg.setSourceEntity(31U);
    msg.setDestination(62094U);
    msg.setDestinationEntity(13U);
    msg.timeout = 62993U;
    msg.lat = 0.13414321461162415;
    msg.lon = 0.635978760971119;
    msg.speed = 0.6814795835645888;
    msg.speed_units = 161U;
    msg.custom.assign("QOCBSWNBGPEDJLZIYPSFDXLWDBDOUYHDTWPVRNKAXREDOOZCYQZRKPMNRFFHGPCSJYLHRDFCVBMKGHTMYAUHMQELSTTUPIOUJALJNVJJBQYCIEECVPUAAZSOWTYPIAVKMJKQTBINTEGVOXTALKSUKSAWRPZKWBRWOWHQXWMMOVYKYJGSXDQCIFWEBNRZBEHXKFUSAPCXISRBURXVOLHNHLZZGQMCIDF");

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
    msg.setTimeStamp(0.010151119843203604);
    msg.setSource(22221U);
    msg.setSourceEntity(250U);
    msg.setDestination(27848U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.7892185706163933;
    msg.lon = 0.5494367612670281;
    msg.z = 0.8318102371181034;
    msg.z_units = 50U;
    msg.radius = 0.7933710630459988;
    msg.duration = 60399U;
    msg.speed = 0.644879276374514;
    msg.speed_units = 239U;
    msg.popup_period = 54208U;
    msg.popup_duration = 33962U;
    msg.flags = 169U;
    msg.custom.assign("TAOVKLMWOGGFUDNSEXOSFJRFTJFEYK");

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
    msg.setTimeStamp(0.9364610803592347);
    msg.setSource(21250U);
    msg.setSourceEntity(165U);
    msg.setDestination(44113U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.7344744861523061;
    msg.lon = 0.5552974275710398;
    msg.z = 0.6342421978923046;
    msg.z_units = 224U;
    msg.radius = 0.8971413592132818;
    msg.duration = 44118U;
    msg.speed = 0.41249310863827615;
    msg.speed_units = 148U;
    msg.popup_period = 55013U;
    msg.popup_duration = 23614U;
    msg.flags = 122U;
    msg.custom.assign("ZDELZVGDIUVCXHBVKWYMS");

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
    msg.setTimeStamp(0.4686581317042591);
    msg.setSource(43614U);
    msg.setSourceEntity(140U);
    msg.setDestination(42696U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.239398774912161;
    msg.lon = 0.3221778033164925;
    msg.z = 0.027089278616025614;
    msg.z_units = 231U;
    msg.radius = 0.10698082910683371;
    msg.duration = 29818U;
    msg.speed = 0.48719661901720246;
    msg.speed_units = 139U;
    msg.popup_period = 38075U;
    msg.popup_duration = 65495U;
    msg.flags = 23U;
    msg.custom.assign("PPQVGFAIZXO");

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
    msg.setTimeStamp(0.17016843237764878);
    msg.setSource(3930U);
    msg.setSourceEntity(57U);
    msg.setDestination(34718U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.7032324303839262);
    msg.setSource(45668U);
    msg.setSourceEntity(205U);
    msg.setDestination(10908U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.5751753817956522);
    msg.setSource(9404U);
    msg.setSourceEntity(135U);
    msg.setDestination(25438U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.6949898321281883);
    msg.setSource(56715U);
    msg.setSourceEntity(171U);
    msg.setDestination(55780U);
    msg.setDestinationEntity(157U);
    msg.timeout = 59660U;
    msg.lat = 0.9087928540594968;
    msg.lon = 0.15013659305499327;
    msg.z = 0.05656832623189656;
    msg.z_units = 186U;
    msg.speed = 0.7774988539393574;
    msg.speed_units = 48U;
    msg.bearing = 0.4427436361971403;
    msg.width = 0.004670563797803284;
    msg.direction = 156U;
    msg.custom.assign("WGOCPACPYNJPLQHYQNRYRTTDBRRSPXDUIDNOVKQSHVALMORKQVTZIICVHEBFAHZANYJPRYPBWKWKSGTETFMDEMSTONUXXQXAXYGZCLEYLKIMNJGGFBNCDOMVOZQBJCKEPUANFQRDQHPSGDJXKLAZMDRFJFBFEYBUQJMMHDWFGHOHXAMWTIJBGQCCNERLSNSVFGMWUZZTIWKOFVSLOHUTZZLYZSEXU");

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
    msg.setTimeStamp(0.9425626341381292);
    msg.setSource(5904U);
    msg.setSourceEntity(178U);
    msg.setDestination(58988U);
    msg.setDestinationEntity(87U);
    msg.timeout = 29622U;
    msg.lat = 0.21387052616867397;
    msg.lon = 0.8176114935805354;
    msg.z = 0.9823978768345096;
    msg.z_units = 245U;
    msg.speed = 0.5849176356230171;
    msg.speed_units = 25U;
    msg.bearing = 0.15930289226948302;
    msg.width = 0.701637487104307;
    msg.direction = 199U;
    msg.custom.assign("PQNKDUSGJGGEUEFXBXXEZWWJRDLDVEJBHPWUQFRKNWFTYOFYPEMULWUSTFJPADKRCIZJ");

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
    msg.setTimeStamp(0.5047410022946114);
    msg.setSource(49055U);
    msg.setSourceEntity(169U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(92U);
    msg.timeout = 17017U;
    msg.lat = 0.27155204685858814;
    msg.lon = 0.4362115060430537;
    msg.z = 0.7161020271167491;
    msg.z_units = 95U;
    msg.speed = 0.6715747830172296;
    msg.speed_units = 157U;
    msg.bearing = 0.4843720497536761;
    msg.width = 0.3495996435236335;
    msg.direction = 175U;
    msg.custom.assign("RSBJQORBDWCCZZSAZZFJQDMXQDBPXTNZTOVHPXKARNEAJDWIZVBUNXSFPKJFGXUTETDVULWJKQLBIAKHYXKEHXEOPSJVZIASYWOTDMPBLSZGIQGCQHCDRCMGRCUKZIIHQHDOYTQKIDBLMPYEIPHQGAXUAONBVNVRMG");

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
    msg.setTimeStamp(0.8855480554503943);
    msg.setSource(29792U);
    msg.setSourceEntity(155U);
    msg.setDestination(14611U);
    msg.setDestinationEntity(49U);
    msg.op_mode = 77U;
    msg.error_count = 50U;
    msg.error_ents.assign("FIVISJPIAFJTTMKPBADCTROBMJVMTLNLWZOOMFUPVAJCDZCTMVAEQEGNAHIVBQVWEOLIXVRCLKTRQHUPDNDHKCEYJOAZGWENZHUXKAFFLLZPWJNKQCJUCWPFKXXTJEVIMFGLGQSUPLOXSAHS");
    msg.maneuver_type = 4315U;
    msg.maneuver_stime = 0.8253167927332344;
    msg.maneuver_eta = 27731U;
    msg.control_loops = 808288216U;
    msg.flags = 86U;
    msg.last_error.assign("EZOXGHVLEPDYGGXKWXBFQFTOACCXPOSLKCNJEKWSWTKFCHQQOZEKWZURBPTAGYUFANLSOPGMMMIDKKBMCRNAFGUEHQMJUBTJGUTDERMSCVSXDIBAHHTHICVKMZXVRRPRTDWEYBVGYFNWXSUPEZJBYRVJYOIPNXFFRNBUIVSMPAPFGESDNLDVUQBIJZEIWJTXQYVLJOLIDKSWSIZABKCCQDTAONAZPUYMXIL");
    msg.last_error_time = 0.8347713971832412;

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
    msg.setTimeStamp(0.2298244475504111);
    msg.setSource(51898U);
    msg.setSourceEntity(54U);
    msg.setDestination(33976U);
    msg.setDestinationEntity(170U);
    msg.op_mode = 28U;
    msg.error_count = 76U;
    msg.error_ents.assign("GVZCULNTMBVHMTEFARDQJYRMZHEKLEFWBSUTXUTHKQCIRZIYSLFIKCOPIVYXVBYVSVCXWVQIJQGFSQFCLGWTRTDYRRJQEPZBHYZSXOBJTKJBXQBLGAJRPJQDJWCNMYRDZPOPMFUCSRCNPAZNWUDHLEKTPSZKLW");
    msg.maneuver_type = 48259U;
    msg.maneuver_stime = 0.05076804848843697;
    msg.maneuver_eta = 17870U;
    msg.control_loops = 2153392138U;
    msg.flags = 128U;
    msg.last_error.assign("ICKQDUGIFGTTZOIQNUCHRYSCFUALKTERPGEOXLSNXZRFLKQNEHYVUMDOMNOTMKHPAWUHAWDYSSGPXAQCBASKDRREEPHIKOOHPVTJ");
    msg.last_error_time = 0.21490102818006873;

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
    msg.setTimeStamp(0.6483232332386455);
    msg.setSource(37001U);
    msg.setSourceEntity(47U);
    msg.setDestination(47996U);
    msg.setDestinationEntity(151U);
    msg.op_mode = 105U;
    msg.error_count = 202U;
    msg.error_ents.assign("SIFCRNDCHLWGJYNVAUYXEHOPGYAPXCJVXPYALLPQKOMRCDEJEMOCDSASLWPTTOYBPEOWEAJOFUWMOCTAIVLUBHYNBJNWYNSDKVTSOXZBZUAKZSQVWFJKTHHCRREFXMVFQEAUWILMNQITGNZGUWVG");
    msg.maneuver_type = 16701U;
    msg.maneuver_stime = 0.36302393830094504;
    msg.maneuver_eta = 2276U;
    msg.control_loops = 1042310503U;
    msg.flags = 195U;
    msg.last_error.assign("AVFEWHFIAYABWAHOLSNEEBUWYUCMARHJNFNPUEFCORVIFLYACTXSXBUQJXOLTQXJYMHMBHHTMRVDPNHBKMIENGIYGFHISDFQRPYRGMUZWXOSLPZNNQJMSGCQTFCTQKZHTSV");
    msg.last_error_time = 0.041179546851797366;

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
    msg.setTimeStamp(0.4486125960783287);
    msg.setSource(10980U);
    msg.setSourceEntity(163U);
    msg.setDestination(31193U);
    msg.setDestinationEntity(17U);
    msg.type = 241U;
    msg.request_id = 28952U;
    msg.command = 194U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 36125U;
    tmp_msg_0.name.assign("GIUXMVJYRGINDBSYMOWWXATPVQSWSDZNJDCCOAZZPTQAUZTWUEIIWCEQTLJDBSBRRFYSPHHWQKRHCVFBVVVASWFRTXAAUFNBVFLSUBSNGXMAPQKYBKFZYGGMUTBILHDKJSUHDAKWGXAUMAEXUGTJIEKWQPPYZHCITEYTPMMJJNOKPGVOXCIQYE");
    tmp_msg_0.custom.assign("FQBKVFYPLXBCOIAKEJKDNLUZHYGMBXHDIQRUGLOSSBJASQLQVAXUOJJETHCRSEWWEMUGGGIIMXYFVJMZYCNKWQMCAOLWHSCXELADYWUAXZDEKLPTBLGSZKFZMONXWBIJHWGUCPQAJEVEZIPVLTSGPEOHNNCANYDMNIDJDYRLKVMYQZHVYSFPIZUAGTYIHBVRT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41366U;
    msg.info.assign("CVNRMJKOGGSUOCHMYPOTIYHPYAKALNOWWQXLSKRQEVYPFYIXOIYSUZGRHVPMHZDZFRATWQQDELTZQCEJRFHZXGXRUGBVXBLNUWOETLXVNLSAZTUMUETHVWSTALRJBTCVEDFNCQBPCZFHQIKCFMQPDJCSVPHBWUKYYBNJPIFIYLOQZXURAGJMABTXOIKXBDWFEEXMZGBAKNAMEUDEMCWHOIDNSURMF");

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
    msg.setTimeStamp(0.014449676463490935);
    msg.setSource(6742U);
    msg.setSourceEntity(86U);
    msg.setDestination(28014U);
    msg.setDestinationEntity(183U);
    msg.type = 50U;
    msg.request_id = 49764U;
    msg.command = 74U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 13493U;
    tmp_msg_0.lat = 0.4761049667227173;
    tmp_msg_0.lon = 0.6297886300246922;
    tmp_msg_0.z = 0.765980444461964;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.speed = 0.6643324137609514;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.custom.assign("NJHDZBWVUHILITJUKZTHRHCUDXSPNGZEE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26958U;
    msg.info.assign("PXPHCWPKQAYGUIHXZSBPAWYXWKTAAHXPHSMKFXWBKDYCDAOCMLJILSAOWWNNZWXIVFYODEIQQEFPRNGEDXRUVNYTBBLTQTUYKJEIOKUNXDFTBQIXKZCSIGMSWPNRYYDICHTJYNKVISVFEOFOBBCKTXBSEVNOSLVVZFGUHQGYOZPMFVCLLUAMTZELLBIVVGJSNDFDRAOMUJRMWAJHKDRJSWEJQFQGPPMALUZMHQREGGTROCCUNM");

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
    msg.setTimeStamp(0.12177895096213576);
    msg.setSource(37046U);
    msg.setSourceEntity(233U);
    msg.setDestination(41026U);
    msg.setDestinationEntity(157U);
    msg.type = 74U;
    msg.request_id = 19321U;
    msg.command = 91U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6855281544088395;
    tmp_msg_0.lon = 0.36516106441935714;
    tmp_msg_0.z = 0.6631843879828155;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.speed = 0.8280277421345186;
    tmp_msg_0.speed_units = 139U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.11967856983977432;
    tmp_tmp_msg_0_0.y = 0.09210666185273653;
    tmp_tmp_msg_0_0.z = 0.2214279116002673;
    tmp_tmp_msg_0_0.t = 0.8883095630886619;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.8677041501146272;
    tmp_msg_0.custom.assign("DANNXVQLDASRVZRCKUQQNYPZWHYJULZBYNABVXUMDHDJXHEJMTFHSIQYGKQUHKGAJECFU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56037U;
    msg.info.assign("NUZIPEWGJCEZILJYFYRDBNAOSQDUBHCCXMIBSLERCQDNBUDBRLRTVFZTRKPNJCHOFTRIMTYYSXAWWEOGPBVEHC");

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
    msg.setTimeStamp(0.6331748152008829);
    msg.setSource(63382U);
    msg.setSourceEntity(92U);
    msg.setDestination(23500U);
    msg.setDestinationEntity(240U);
    msg.command = 129U;
    msg.entities.assign("XHVSWIARFZMVBAYUOCMWHGSSMSXSRWFKSZOWEESYKWSQDKUCQTNHUDQNNPWODUSEEVKCMKRARDTTYWXZCIGJMGGPHLHBOJMQZXIDBVPOLZMJCRGYFNTLUEJIPNMGVFQKAAAGIZUXDUPGPVREXNDDTF");

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
    msg.setTimeStamp(0.5682717893180628);
    msg.setSource(64078U);
    msg.setSourceEntity(230U);
    msg.setDestination(47626U);
    msg.setDestinationEntity(151U);
    msg.command = 205U;
    msg.entities.assign("VMTPYJSJJVNHLPZVKDNPQWCMTCPLKFLYXQRBUZDYLBIHWBQZIGUOUHONEWEBSWMIMOHEQAZNGIWIAYGAWNSQTUJGSLADQXVVKZLJIUQOQNFOAVQBHYMWTRZFAOBKDGTKRYKJIKBECHGDJHU");

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
    msg.setTimeStamp(0.7927032121890929);
    msg.setSource(21539U);
    msg.setSourceEntity(188U);
    msg.setDestination(30460U);
    msg.setDestinationEntity(126U);
    msg.command = 218U;
    msg.entities.assign("TJXGWNQTXENURGTWVTFRUCQOYNFDSPEOOSJLGPPIIFPMKPJHWNVPSGGXQOFTYQHLVVVBIVZWBHNVVHCECCPLSEYABBYFTXTCGYTDMWUEXZDJCOPLXPQLONXOOWP");

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
    msg.setTimeStamp(0.8018600904615172);
    msg.setSource(22161U);
    msg.setSourceEntity(201U);
    msg.setDestination(3528U);
    msg.setDestinationEntity(60U);
    msg.mcount = 124U;
    msg.mnames.assign("XZNZKIUUDWELFVHAX");
    msg.ecount = 167U;
    msg.enames.assign("BEZRCKVWHXYBLWFCGFIOWPLUVTLNGHQURMVKVCNSNUWNEPXQT");
    msg.ccount = 190U;
    msg.cnames.assign("HVLPNXBNJYXIBMEQPMHTMDBRLMPBFSQHVYYCSZNRAAABBOKXLJHZUXFCUEGKPIHZNZKFHVRDQLEYQGXGRYSNTLVUIWGJVVJOWGKOOIMOMRPBZMUGGHAJFZCWZRDOAEGJBJCRBFDSQXALDSMDXUQTQYLHZYKCOEWLYPELJSKRENPXCUHIJACITTEWKROMUSWVQFGOFF");
    msg.last_error.assign("CUURAMXGDEQTLRFLYHTXFXDCMKVBINACMIQELHQOUUNRZIBAJXCKHNFSTNEIPNIELDWAKHSGW");
    msg.last_error_time = 0.8412020802614811;

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
    msg.setTimeStamp(0.6322917263256296);
    msg.setSource(26804U);
    msg.setSourceEntity(251U);
    msg.setDestination(16275U);
    msg.setDestinationEntity(235U);
    msg.mcount = 108U;
    msg.mnames.assign("DGWTNQUOLIMOKIWPTXZKDSPWCGBBPEWWVKAEWZJXFCYOVSVTKYSVMFQYASKUEHEKCHGZTVRXFDONACZEBVNJPMUOIDOGQUPOAOSAJIKZMJPTTCLGF");
    msg.ecount = 218U;
    msg.enames.assign("OBAWFXDOEMUPYYJRTWMCPXGDQCVLUJWHXATBJPSJMTVHWZBCRCNGNVOBUSOORVJGWMKQYXZDGPXRGZHKLZPZCBIBJUQTNYOIFFKVGSUZRHKASERMEJCSZPNNTSZLDIQXDWQPMFDCLVGWNEMHLIAQFOXDONBLTKYFYRHCRKUIAJXEHZUDTAMIVNLKTLFRNYIYHUJVFOEKHXPFATDXCWMSJUHAEN");
    msg.ccount = 137U;
    msg.cnames.assign("YQLNRUCZJTQYIRCRJHBCFXQIVXXTLZFEJQTPALEAJPFHKZCYMNDSYNPVDFSDGUTMVUNFGQAJTHKPKYOSOWOPZZNBFXEKWSNQKJBRCNREWFWOKMTZVGMHCXUCGQTDMDIAHITOGMQIQLESCHNLTXADMIFBPLIOYVXKUDISERMVYYOOHVHUQUIZAJDDXUBGUWCKPAWGSHBNKWAZEPNGELG");
    msg.last_error.assign("TQWYZYYQQTBEIZPLGTBXAOHNSPWKOMARNUWJMBTJFXZUVHGIECCERUPKGDEGIZCHZBNSYRNMNVPOLCDVOBMDOCOTSZLTIHJDGNQQYKIGDJZEFXNSXWVUFLPHAQVYGRDMWYOCXSGLALJRBTVVBWIEFMTTMVHHULHCOLRASJKBPJIKXKNWSRDFYFCC");
    msg.last_error_time = 0.785451649856232;

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
    msg.setTimeStamp(0.5096200694573697);
    msg.setSource(53135U);
    msg.setSourceEntity(56U);
    msg.setDestination(35854U);
    msg.setDestinationEntity(197U);
    msg.mcount = 82U;
    msg.mnames.assign("PDWZDXGXIGIVVGTFDLHWYQTKVZENKDXBWWKS");
    msg.ecount = 136U;
    msg.enames.assign("MWKVKZDPYZYCJBVAOCWOOEOHHBVAD");
    msg.ccount = 120U;
    msg.cnames.assign("DXNJEAOUSUGPZNKZMUTKNGNTUBVQZWJUDLGQWSAUYZHUBLJHCMZXCWCFEMRWRTJHOKDJQVEIIJLESCEDCHFVBDONJLFBKUFMWSQASXPWGPAZXAQTOLYIGJYMHBMILHRAAFTTPFMNKJFAELBBSZTWXVIJVBNPWRGYCCVMURQGGHKYRWXXPXYXICHGARHODSZLQMVYOFLUKIPNQYZNRFVHRCNKTCTKWOSIBKGZIO");
    msg.last_error.assign("LAVNXBETIDWKCIEGIVMQASKYAGWFPGWFKRBBDUHWKNVYVLHFLJLQNJEWRZHEAEKPNPOTXBPNQHAYUMSXVZWEZULGCSUTRUVYTKCICQDTAFPNDIYXRKJOJ");
    msg.last_error_time = 0.15935493933919564;

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
    msg.setTimeStamp(0.535695608303371);
    msg.setSource(64482U);
    msg.setSourceEntity(124U);
    msg.setDestination(48247U);
    msg.setDestinationEntity(60U);
    msg.mask = 196U;
    msg.max_depth = 0.5639638171591769;
    msg.min_altitude = 0.8818772657319489;
    msg.max_altitude = 0.696250670468982;
    msg.min_speed = 0.5182405226780117;
    msg.max_speed = 0.24552591141865032;
    msg.max_vrate = 0.19868429852957925;
    msg.lat = 0.340389032517057;
    msg.lon = 0.6789195664924067;
    msg.orientation = 0.065267498711162;
    msg.width = 0.3204454235242249;
    msg.length = 0.7812781360423273;

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
    msg.setTimeStamp(0.7916678959170259);
    msg.setSource(41245U);
    msg.setSourceEntity(57U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(122U);
    msg.mask = 140U;
    msg.max_depth = 0.19859785034660293;
    msg.min_altitude = 0.24681564149129487;
    msg.max_altitude = 0.665535406990904;
    msg.min_speed = 0.20292913632496257;
    msg.max_speed = 0.5752333792684676;
    msg.max_vrate = 0.8099979481090387;
    msg.lat = 0.9406802500763352;
    msg.lon = 0.732190794840995;
    msg.orientation = 0.20928427197966326;
    msg.width = 0.9005557852053228;
    msg.length = 0.43839743723669;

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
    msg.setTimeStamp(0.5191705293436274);
    msg.setSource(22544U);
    msg.setSourceEntity(15U);
    msg.setDestination(57116U);
    msg.setDestinationEntity(244U);
    msg.mask = 145U;
    msg.max_depth = 0.5867112411528661;
    msg.min_altitude = 0.006501798383366064;
    msg.max_altitude = 0.537530873291008;
    msg.min_speed = 0.30432899023898463;
    msg.max_speed = 0.5919836806246058;
    msg.max_vrate = 0.31205523867992546;
    msg.lat = 0.3907688590853091;
    msg.lon = 0.39153623260524084;
    msg.orientation = 0.21108021466076698;
    msg.width = 0.42333179603483073;
    msg.length = 0.5138467677660374;

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
    msg.setTimeStamp(0.5254908970719137);
    msg.setSource(21195U);
    msg.setSourceEntity(216U);
    msg.setDestination(55742U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.036420066501362425);
    msg.setSource(4614U);
    msg.setSourceEntity(139U);
    msg.setDestination(2601U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.09140660699448078);
    msg.setSource(61023U);
    msg.setSourceEntity(74U);
    msg.setDestination(21938U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.017349383669122087);
    msg.setSource(25028U);
    msg.setSourceEntity(196U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(143U);
    msg.duration = 35292U;

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
    msg.setTimeStamp(0.8033249812106044);
    msg.setSource(13384U);
    msg.setSourceEntity(25U);
    msg.setDestination(13706U);
    msg.setDestinationEntity(116U);
    msg.duration = 5906U;

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
    msg.setTimeStamp(0.5530346077969169);
    msg.setSource(26209U);
    msg.setSourceEntity(124U);
    msg.setDestination(55914U);
    msg.setDestinationEntity(187U);
    msg.duration = 17974U;

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
    msg.setTimeStamp(0.6787598765493236);
    msg.setSource(30985U);
    msg.setSourceEntity(18U);
    msg.setDestination(29592U);
    msg.setDestinationEntity(150U);
    msg.enable = 0U;
    msg.mask = 2973478942U;
    msg.scope_ref = 3020848554U;

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
    msg.setTimeStamp(0.5527669912024253);
    msg.setSource(25709U);
    msg.setSourceEntity(222U);
    msg.setDestination(63682U);
    msg.setDestinationEntity(179U);
    msg.enable = 13U;
    msg.mask = 525896531U;
    msg.scope_ref = 555926429U;

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
    msg.setTimeStamp(0.0471626759968895);
    msg.setSource(24862U);
    msg.setSourceEntity(66U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(2U);
    msg.enable = 230U;
    msg.mask = 2883193434U;
    msg.scope_ref = 974844947U;

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
    msg.setTimeStamp(0.6463487015476818);
    msg.setSource(46740U);
    msg.setSourceEntity(101U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(28U);
    msg.medium = 8U;

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
    msg.setTimeStamp(0.5309157008172815);
    msg.setSource(6589U);
    msg.setSourceEntity(93U);
    msg.setDestination(29452U);
    msg.setDestinationEntity(160U);
    msg.medium = 52U;

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
    msg.setTimeStamp(0.9644548070443936);
    msg.setSource(49614U);
    msg.setSourceEntity(210U);
    msg.setDestination(42906U);
    msg.setDestinationEntity(150U);
    msg.medium = 169U;

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
    msg.setTimeStamp(0.8675209158787064);
    msg.setSource(10111U);
    msg.setSourceEntity(236U);
    msg.setDestination(8743U);
    msg.setDestinationEntity(202U);
    msg.value = 0.25162665066706513;
    msg.type = 215U;

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
    msg.setTimeStamp(0.3636236471292089);
    msg.setSource(51123U);
    msg.setSourceEntity(232U);
    msg.setDestination(22662U);
    msg.setDestinationEntity(199U);
    msg.value = 0.2297099148848165;
    msg.type = 204U;

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
    msg.setTimeStamp(0.9059992182606733);
    msg.setSource(42561U);
    msg.setSourceEntity(65U);
    msg.setDestination(61296U);
    msg.setDestinationEntity(51U);
    msg.value = 0.5122868916571741;
    msg.type = 229U;

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
    msg.setTimeStamp(0.6952741634050368);
    msg.setSource(42209U);
    msg.setSourceEntity(145U);
    msg.setDestination(13379U);
    msg.setDestinationEntity(181U);
    msg.possimerr = 0.9029061306657422;
    msg.converg = 0.7025917387134133;
    msg.turbulence = 0.917898319641562;
    msg.possimmon = 221U;
    msg.commmon = 2U;
    msg.convergmon = 77U;

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
    msg.setTimeStamp(0.49492531387971306);
    msg.setSource(5985U);
    msg.setSourceEntity(163U);
    msg.setDestination(3376U);
    msg.setDestinationEntity(229U);
    msg.possimerr = 0.7702804049717437;
    msg.converg = 0.2096270385004676;
    msg.turbulence = 0.30020680778343867;
    msg.possimmon = 36U;
    msg.commmon = 72U;
    msg.convergmon = 244U;

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
    msg.setTimeStamp(0.9719226997185874);
    msg.setSource(60491U);
    msg.setSourceEntity(81U);
    msg.setDestination(10341U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.6003839667083173;
    msg.converg = 0.5989786110916665;
    msg.turbulence = 0.07129705907128703;
    msg.possimmon = 140U;
    msg.commmon = 2U;
    msg.convergmon = 54U;

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
    msg.setTimeStamp(0.15581748585214894);
    msg.setSource(29926U);
    msg.setSourceEntity(67U);
    msg.setDestination(54231U);
    msg.setDestinationEntity(54U);
    msg.autonomy = 199U;
    msg.mode.assign("OPIRAWCHFDTOCKYERLQIMPXUQRPVNOPYVFJZGTOZCSCZCBNGWTHKRMCCWRMEPSJQHAPNHSY");

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
    msg.setTimeStamp(0.585880796338222);
    msg.setSource(958U);
    msg.setSourceEntity(239U);
    msg.setDestination(22106U);
    msg.setDestinationEntity(103U);
    msg.autonomy = 61U;
    msg.mode.assign("RSDAANEFUVTCCGPMKDMHBNIJEBUHYQCQD");

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
    msg.setTimeStamp(0.09511911862462341);
    msg.setSource(9944U);
    msg.setSourceEntity(39U);
    msg.setDestination(33349U);
    msg.setDestinationEntity(116U);
    msg.autonomy = 234U;
    msg.mode.assign("NWOPRFTMGHLDRIUEAXUQGICWNJJTTOMPXOJYMSMTKJLLTFYRKOLHZYDKXQBQOBVTZIKICQHNCCDSFMPSMODOBBWPCKFBLAGWERHKYCZEZFXWXFCQLSEEGXGKMDXELXRYDGDNEMJMTPNIVBDUOAHTPFUPTRAZVEYGJALVYS");

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
    msg.setTimeStamp(0.4066969605706139);
    msg.setSource(50773U);
    msg.setSourceEntity(61U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(84U);
    msg.type = 224U;
    msg.op = 215U;
    msg.possimerr = 0.8906817697893136;
    msg.converg = 0.21786725444895216;
    msg.turbulence = 0.9361030605997052;
    msg.possimmon = 121U;
    msg.commmon = 125U;
    msg.convergmon = 125U;

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
    msg.setTimeStamp(0.9256783008900583);
    msg.setSource(11854U);
    msg.setSourceEntity(143U);
    msg.setDestination(46971U);
    msg.setDestinationEntity(34U);
    msg.type = 137U;
    msg.op = 159U;
    msg.possimerr = 0.18104221240404728;
    msg.converg = 0.6418271360784323;
    msg.turbulence = 0.6867302274983854;
    msg.possimmon = 57U;
    msg.commmon = 68U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.3591677193443443);
    msg.setSource(54426U);
    msg.setSourceEntity(141U);
    msg.setDestination(47619U);
    msg.setDestinationEntity(97U);
    msg.type = 100U;
    msg.op = 73U;
    msg.possimerr = 0.4732645085359868;
    msg.converg = 0.5749982641835513;
    msg.turbulence = 0.5944743040800771;
    msg.possimmon = 1U;
    msg.commmon = 82U;
    msg.convergmon = 202U;

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
    msg.setTimeStamp(0.7148484745816028);
    msg.setSource(49521U);
    msg.setSourceEntity(25U);
    msg.setDestination(52536U);
    msg.setDestinationEntity(109U);
    msg.op = 173U;
    msg.comm_interface = 117U;
    msg.period = 63610U;
    msg.sys_dst.assign("KSNTXRSZAHVTXBGTKDLOBQRFJGDZDTWOYUCCNFDVSUWUUCWNDXNTWEHULAGIVHJBWKHOUULHMCAEPHCIOPEFQFNDOOZHQVQZZPIVRBKWNNTKQQDIGFUVHAVSWBKCASYCJQSPKTCGLVJITFIGEZPYILT");

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
    msg.setTimeStamp(0.3733883486346826);
    msg.setSource(30512U);
    msg.setSourceEntity(80U);
    msg.setDestination(63063U);
    msg.setDestinationEntity(237U);
    msg.op = 1U;
    msg.comm_interface = 32U;
    msg.period = 33807U;
    msg.sys_dst.assign("SXUQDRXCCVZOBWIFFVAJRPGJRDISAJCHMMYBTFHEVCQHJXBQOGPAICXUPMUKHOSZOUDCBATDTVLDUBPLEAOZWSPMBDSBPRJSYMXZSXNNRTAYQFYBSAIAFCPKZJOEKEYVNQWPJCWDICJVYNWGOWNJTEETXKHIGXFEUIQRRYTLKYNM");

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
    msg.setTimeStamp(0.4574924314675254);
    msg.setSource(18523U);
    msg.setSourceEntity(0U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(218U);
    msg.op = 119U;
    msg.comm_interface = 13U;
    msg.period = 12046U;
    msg.sys_dst.assign("VJSHOTPDPBPMZLIRLJHCLIDRFUEIZQSKAEFNVXVJGREMUGVOAZXWBYORYSNYGJCLLBCPBWPCRCJKXGAAFOWKTSGMBWTUIDAQGXBYMIKWZRZQGNMWBZSHFQKVXYTYOFHOQAEHXGTQIJFWTVHLWKVZUZQZKRETAMHDEXNLRDGIYJEIBMUVPUKZPJLCHFLPPPCMEOBLAUITNIMTNQS");

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
    msg.setTimeStamp(0.6083276365601391);
    msg.setSource(54539U);
    msg.setSourceEntity(164U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(212U);
    msg.stime = 107962712U;
    msg.latitude = 0.6834528525661696;
    msg.longitude = 0.4024816440055159;
    msg.altitude = 40672U;
    msg.depth = 50202U;
    msg.heading = 65155U;
    msg.speed = -31844;
    msg.fuel = -75;
    msg.exec_state = -43;
    msg.plan_checksum = 1291U;

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
    msg.setTimeStamp(0.17237615971512243);
    msg.setSource(29262U);
    msg.setSourceEntity(52U);
    msg.setDestination(40573U);
    msg.setDestinationEntity(157U);
    msg.stime = 757104218U;
    msg.latitude = 0.3792778224793283;
    msg.longitude = 0.9685748331942075;
    msg.altitude = 27133U;
    msg.depth = 23514U;
    msg.heading = 2655U;
    msg.speed = -22950;
    msg.fuel = 116;
    msg.exec_state = 56;
    msg.plan_checksum = 63846U;

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
    msg.setTimeStamp(0.5930142455804838);
    msg.setSource(40613U);
    msg.setSourceEntity(205U);
    msg.setDestination(57520U);
    msg.setDestinationEntity(65U);
    msg.stime = 3884758081U;
    msg.latitude = 0.8955444261638309;
    msg.longitude = 0.9938523817740269;
    msg.altitude = 43993U;
    msg.depth = 33201U;
    msg.heading = 10721U;
    msg.speed = 19440;
    msg.fuel = 47;
    msg.exec_state = 41;
    msg.plan_checksum = 45345U;

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
    msg.setTimeStamp(0.9636230198249861);
    msg.setSource(39600U);
    msg.setSourceEntity(177U);
    msg.setDestination(12766U);
    msg.setDestinationEntity(121U);
    msg.req_id = 52221U;
    msg.comm_mean = 97U;
    msg.destination.assign("VZUYZEQUYQSZNXGJIAYICVAJMUKUMYEKNHHNZMHWONHMOWDFGDSRYECPTKWRXKMYDEEBINUSBSDZSHWMNQDBOWBXXNVPLWSCTVTYPKXQDTLKUZ");
    msg.deadline = 0.010529883832827935;
    msg.range = 0.6714367666852281;
    msg.data_mode = 213U;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 131U;
    tmp_msg_0.x = 0.5547801477726338;
    tmp_msg_0.y = 0.31210161486828847;
    tmp_msg_0.z = 0.5164851134385934;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XZTMTBBWKKKUALRVSKMMXAGCCQVBYLGCOLAXANKYAOWFBIJDGWVNIEEWGTCHDFBOGPGUTPZCYRZHUXNFJDS");
    const signed char tmp_msg_1[] = {-49, -6, -30, -74, -109, -88, -97, 89, -49, 34, -110, 19, -90, 105, 59, -95, -33, 116, 88, -57, -22, -94, 68, -19, 71, 33, -8, 16, -4, 73, 36, 110, -26, -125, 106, 34, 63, 103, 13, 114, 22, -109, -35, 5, -91, -122, -85, -12, -116, -26, -100, -117, 89, -6, 59, 117, -27, -106, -48, -34, 48, -122, -82, 115, -21, -116, -10, -74, -87, -22, 29, -92, 90, -112, 25, 23, 104, -26, 3, -37, -22, -52, 49, -111, 49, 20, -59, 91, 13, 55, 101, -101, 11, -34, 27, 101, -12, 37, -32, 115, -46, 89, 117, -6, 45, 17, 23, 51, 92, 1, -28, 51, -16, 117, -51, -20, 24, -58, 115, -66, -51, -59};
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
    msg.setTimeStamp(0.45991354854105637);
    msg.setSource(4244U);
    msg.setSourceEntity(131U);
    msg.setDestination(25532U);
    msg.setDestinationEntity(165U);
    msg.req_id = 46275U;
    msg.comm_mean = 142U;
    msg.destination.assign("BVQZGKYNXJLNKACSUMKOYVSGMEKPCCLYONLLSAYEFIYQNIU");
    msg.deadline = 0.9324386342899228;
    msg.range = 0.9426651632369544;
    msg.data_mode = 182U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.9073817620978895;
    tmp_msg_0.temperature = 0.2007542617194955;
    tmp_msg_0.depth = 0.9926274122133313;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VTAMBOMFPPFAEPGJKCINVCVKNHWQDLBRICGZDEHJRLEYSPKWDUUGLENPDSBPNEOACOWXITXIRJLRZLSAKYJFYYXDEPRAMVHAVHCLUCKYVNNMOKTUYKJLKPVFDOZOFGSNOZGNYTHQRAZAVGWBYBC");
    const signed char tmp_msg_1[] = {-34, 19, -80, 100, -21, 117, -27, 78, 89, -42, -90, 38, 30, 36, -77, -123, -55, -23, -48, 98, 75, 72, -76, -51, 36, 75, -84, 125, 90, -64, -5, -35, -13, 68, -102, -108, -101, -16, 75, 96, -128, 102, -75, -34, 66, -41, 32, -124, 92, -87, 53, -10, -93, -119, 28, -89, 103, 90, 120, -67, -6, 115, 97, 42, 86, 109, 92, 31, 100, -32, -66, -73, -110, 108, 1, 89, -27, 74, 36, 85, -43, -65, -92, -15, -119, -110, 87, 57, -123, -115, -2, -114, 27, -120, -14, 69, -32, 75, -79, 111, -70, 54, -64, 23, -83, 111, 125, 64, 116, 1, 74, -15, -18, 105, -93, -119, -40, 9, -65, 90, -21, -109, -24, 46, -43, -6, -113};
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
    msg.setTimeStamp(0.2907289283107073);
    msg.setSource(31943U);
    msg.setSourceEntity(191U);
    msg.setDestination(19491U);
    msg.setDestinationEntity(206U);
    msg.req_id = 25542U;
    msg.comm_mean = 126U;
    msg.destination.assign("LEMWDIVDSGLNPTWZCHDXSEGTAXAQDIKTFKFUJVUJODROXQSBVCHIQWKYZOTYRFMRRRZVYGWWRRZIYPSPXSYIPJLAAFWGEBMPPZZITJWQLPMBSJROBOKFICAQHUNEYFGEMHFXGEREUAQTKOVLOSMBIBUNQ");
    msg.deadline = 0.3600940685371511;
    msg.range = 0.08546511976629112;
    msg.data_mode = 224U;
    IMC::GetParametersXml tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WUJGMGDYKQWESJITZWCWSVEQWBDAYINBDHHOLTKVNHLTBRYGTGXFOFPQGNNCRXFYUUVMSRKPOSJCOLKMDICPRSI");
    const signed char tmp_msg_1[] = {-4, -79, 110, 86, 123, 18, 50, -107, 60, -126, 108, -109, 65, -76, 83, -4, 94, -124, -107, 9, 13, 98, 117, 119, -95, -36, -93, 27, 114, -25, -41, 96, -81, 96, -61, -125, -114, -60, -89, -7, -54, 9, -84, 101, 4, 33, 87, -61, 59, 89, 94, -22, 100, -81, 59, -29, 100, 20, 56, 123, 58, -104, -79, 27, -68, 48, -39, 30, -93, 43, -44, -102, 62, -119, -64, 30, 5, -55, -103, 111, 45, 73, 2, -65, 125, -49, -57, 48, 46, -94, -88, 3, -17, -41, -13, -37, -34, 101, -103, -90, -60, 33, 126, -63, 125, -56, -69, 15, 3, 19, 49, 6, -77, -82, 13, 10, -39, 39, -92, -77, 115, 85, -47, 105, 78, -56, -108, -37, 61, -56, 110, -119, -12, -22, -116, -50, 4, 105, 28, 69, -119, -64, 100, 15, 86, 15, 91, 17, -30, 98, -72, -23, -13, -48, -2, -23, -35, 90, 32, -77, -20, -98, -105, -87, 54, -41, 54, -104, 76, 28, -108, 39, -19, -21, -17, 56, -110, -26, 104, -85, 16, 80, -44, 59, -61, -40, 10, -59, 123, 113, -32, 84, -120, 34, 35, -65, -102, -55, -115, -63, -20, 75, 54, 73, 121, -27, 30, -3, 54, -102, 24, 118, -29, 65, -46};
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
    msg.setTimeStamp(0.9810696964597045);
    msg.setSource(43523U);
    msg.setSourceEntity(162U);
    msg.setDestination(36130U);
    msg.setDestinationEntity(65U);
    msg.req_id = 20344U;
    msg.status = 179U;
    msg.range = 0.6435293324343249;
    msg.info.assign("XYAYYFJVZAVLHJQIYQCMYRALUWQPNAFNXDYTCKUDVTCIQCVQBFAGLJKGXBKTQTTYSBXORVIVFMGAPLBBZWXEVHDVKEOM");

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
    msg.setTimeStamp(0.2239186819808121);
    msg.setSource(11906U);
    msg.setSourceEntity(147U);
    msg.setDestination(25281U);
    msg.setDestinationEntity(64U);
    msg.req_id = 45596U;
    msg.status = 159U;
    msg.range = 0.38817954140774846;
    msg.info.assign("DOLDGYGXEYMKNJVVTRJHRCZFCOGOLUVRPSPFBONWSDOIULLFITEOLVDEKWTTBFYHBAGXEAQJZGJYHKTSCUPUECCWJOCUBFYKDV");

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
    msg.setTimeStamp(0.08512960088512866);
    msg.setSource(36980U);
    msg.setSourceEntity(23U);
    msg.setDestination(16849U);
    msg.setDestinationEntity(188U);
    msg.req_id = 35583U;
    msg.status = 81U;
    msg.range = 0.3335940578597323;
    msg.info.assign("ROBNCVULTQIHTHUQNSUWQCJCVCPBKCGALQXBSZJRDTXODZIWATFHOEXBRDTUNDIIKTBQZ");

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
    msg.setTimeStamp(0.6140472035861148);
    msg.setSource(17804U);
    msg.setSourceEntity(84U);
    msg.setDestination(26488U);
    msg.setDestinationEntity(140U);
    msg.req_id = 38851U;
    msg.destination.assign("WGBCWIYRJSKGKHREJHZEEZRIGILNFSZENWJRWUTJTYNSDUGTMXMPTZYO");
    msg.timeout = 0.5363124569707262;
    msg.sms_text.assign("XPUEKKSBREKZXKESOFDIPLBJXTCLVFEGWHAIVYANCVNHUEGYWTBHQRWTBATHKTEIOLKJGCUEOOWPYOWZVEVPTFURYLTQDZTIKMOYXSCHDYUZNJKXGOEYHASDUCVMDWNZDBMEXTXPGSIRWGMNMPSARGLNOCGZQSKHJNRYJCAVXGSTFHDIBPLCSAYBIUYSBRJVFGIMJKQNURQDLNQJFDPLLZVARQPBOFCBUXQIZQRLAWOMVAJHUM");

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
    msg.setTimeStamp(0.66709971060446);
    msg.setSource(49165U);
    msg.setSourceEntity(185U);
    msg.setDestination(9323U);
    msg.setDestinationEntity(59U);
    msg.req_id = 35381U;
    msg.destination.assign("USSDWUFKMLWUWTWFOYMZLJETAXLOIPYOMGHJJQMKOUYDUGBJGRHSMNQNYIFBAVHWOQNESLEPPCPEAAQJINMYEZXCAEXFOWKMXABZPRKHEPIDNVZBNFFTRMNRDIMTNZJVQCVJHRXVDSUWVOSBLVOPTRCKCCTIPHVTZQYEBX");
    msg.timeout = 0.9937405493702006;
    msg.sms_text.assign("JHMZPTONULVIWAVRZRZDSVIFEORVRTYQPWSILKBKYXUITUYHMQBRGZPNNUJFJNEGWGDOQAWIWHYSNAEMKVECXTGLFSMARRGSHVOVYWJOMIJYTSBLVYPKBFLJUWZDZWKUGEFYXJACI");

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
    msg.setTimeStamp(0.6522177976135598);
    msg.setSource(24776U);
    msg.setSourceEntity(174U);
    msg.setDestination(2842U);
    msg.setDestinationEntity(98U);
    msg.req_id = 29079U;
    msg.destination.assign("EZRFUCFBTGZIWFRAQDSDKHJXYMIMCGKQCNQEAVZUTJWRHJNMYDLNOVVKOLTJVPZZJTMLPLAEDBORRD");
    msg.timeout = 0.6496749220018856;
    msg.sms_text.assign("YWUCEFEZWQZEYLGTKMCXLNILRSNVKYKXAJFTXUYVXORTAMNZOJDKPWMXHOTKSCSVBAUSSGAGJAHCQPSFKNGQWIHSLMCVJJFNETHMZHMDXPQIONSONPKQJZKQPUHIVYSRVGBYLBBQSQIXAQDENMLHIAPFTQB");

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
    msg.setTimeStamp(0.048027451092640616);
    msg.setSource(64747U);
    msg.setSourceEntity(183U);
    msg.setDestination(26889U);
    msg.setDestinationEntity(204U);
    msg.req_id = 11470U;
    msg.status = 142U;
    msg.info.assign("AAIWVZGHIDTAKMCNLTHPVXVUFKWABRKPOXYIJBBVDFDIAQYNHJYFVXWTIMJHDQJXT");

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
    msg.setTimeStamp(0.2288028441040424);
    msg.setSource(58418U);
    msg.setSourceEntity(148U);
    msg.setDestination(47617U);
    msg.setDestinationEntity(81U);
    msg.req_id = 64915U;
    msg.status = 41U;
    msg.info.assign("TKSXOFCKDETZNEJC");

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
    msg.setTimeStamp(0.7748538098934049);
    msg.setSource(6777U);
    msg.setSourceEntity(167U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(26U);
    msg.req_id = 51811U;
    msg.status = 187U;
    msg.info.assign("BCOREYWNIDCBKEIBTZKIPHAQQCWJCLTZLZQSPAMPDFDWPQVVLVCYBTCUKPZCRYESCEJMYEZYXUAYERRLKKFTXQLQMJXGTOMGKHWVXMFUGBTQLCBFWGIFIVGOPRRRGO");

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
    msg.setTimeStamp(0.6038028292085431);
    msg.setSource(9695U);
    msg.setSourceEntity(235U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(116U);
    msg.state = 62U;

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
    msg.setTimeStamp(0.7692076616891771);
    msg.setSource(14441U);
    msg.setSourceEntity(187U);
    msg.setDestination(29015U);
    msg.setDestinationEntity(30U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.14804219811527963);
    msg.setSource(58524U);
    msg.setSourceEntity(87U);
    msg.setDestination(65166U);
    msg.setDestinationEntity(100U);
    msg.state = 236U;

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
    msg.setTimeStamp(0.1045411185829831);
    msg.setSource(3597U);
    msg.setSourceEntity(206U);
    msg.setDestination(42786U);
    msg.setDestinationEntity(123U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.3218644461064377);
    msg.setSource(8708U);
    msg.setSourceEntity(227U);
    msg.setDestination(46044U);
    msg.setDestinationEntity(174U);
    msg.state = 0U;

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
    msg.setTimeStamp(0.48975361881806523);
    msg.setSource(44674U);
    msg.setSourceEntity(208U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(170U);
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
    msg.setTimeStamp(0.5852288987511213);
    msg.setSource(49978U);
    msg.setSourceEntity(57U);
    msg.setDestination(63029U);
    msg.setDestinationEntity(182U);
    msg.req_id = 16232U;
    msg.destination.assign("QKYFMQDBPPMPOQAGKVOPSJPTKVZEYHNWUBJHVSFHUMZHLWAWRKBJCXVPJLRCNCLYEQOOFRIRMVGSPUGHLYNWCDIDZYFPMQGJBTWZDYZXGXSEBOWQKCOOTXYTACPRJWKLTLCRANCXWIPSAZWUDGTGROHVJEMMDBMFIQBMATVZVEICVQFDSJETUJNXIUSYLUUGVTAIRHXYKBNEKIQR");
    msg.timeout = 0.7328780759308736;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.2520354583363298);
    msg.setSource(38300U);
    msg.setSourceEntity(191U);
    msg.setDestination(51216U);
    msg.setDestinationEntity(60U);
    msg.req_id = 18864U;
    msg.destination.assign("YEHQOJQWTCQVTJKDGRAZBSFZRGLXVKWCJDOETYRUWIVVNUVMDLKBYEIGKPJWCMBQFDQLABRKTDCKFHBXTCNSACPSNAPGLHLYWPGSIYNHLLYZJCLPFPIBOEMJZREXJRAHSSOMTUWMPOUCVUIGZGEMUZXVD");
    msg.timeout = 0.8473797522833795;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 37U;
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
    msg.setTimeStamp(0.9100208115111954);
    msg.setSource(8484U);
    msg.setSourceEntity(28U);
    msg.setDestination(23870U);
    msg.setDestinationEntity(22U);
    msg.req_id = 65481U;
    msg.destination.assign("EWXCPZWMLMRLSHFTNSEVICDAMTJRUMGHPUCBYLFAIQYWNWKHOWXHZSBXKPULDOINUROBGRVNFQUPRCMJDYJIINGXATTGCTKNUBLHZSHSWQYKEQTVFFVEVNAEIOVXPMZYGJIZVFFSJQUZAKOFPPXXLBDTDJGX");
    msg.timeout = 0.04989485812713901;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.7546657196331075;
    tmp_msg_0.converg = 0.9193242743701953;
    tmp_msg_0.turbulence = 0.21321261479737397;
    tmp_msg_0.possimmon = 117U;
    tmp_msg_0.commmon = 65U;
    tmp_msg_0.convergmon = 61U;
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
    msg.setTimeStamp(0.8616214258859541);
    msg.setSource(53719U);
    msg.setSourceEntity(95U);
    msg.setDestination(54589U);
    msg.setDestinationEntity(89U);
    msg.req_id = 46885U;
    msg.status = 45U;
    msg.info.assign("ABWAOHGGFGUVLRBSMNMSTQNYXNAFJTVHJJSOIWJOOGRFNIRGYPGQJVKKCISAPPAEIJQDDEBRWYYURKUXSNYCKFENHTWONDYMTXCIQAZXWHL");

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
    msg.setTimeStamp(0.06516555740078211);
    msg.setSource(25430U);
    msg.setSourceEntity(213U);
    msg.setDestination(30576U);
    msg.setDestinationEntity(253U);
    msg.req_id = 27888U;
    msg.status = 4U;
    msg.info.assign("XDKBFWIXLYESYIKTJMAUWQDSRHPWLXNZJFISEZXDQFNQPXDORTJYMCFOREVLUEEKGZLCIVGISWOLNBSQMTDOSYISRANZGVHRZWMFAFYAGPQKGBMYCAHHSYZKTPRAIHWNSUDMXYKONZULRWULJDVCRCDVJAOILOHJXJDKUBLBBVADHPLGCCJQQQVEUUOWEXRKNXHKMORHQOZPZTMIGVJYPY");

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
    msg.setTimeStamp(0.9585456785078369);
    msg.setSource(39911U);
    msg.setSourceEntity(109U);
    msg.setDestination(46849U);
    msg.setDestinationEntity(239U);
    msg.req_id = 29861U;
    msg.status = 41U;
    msg.info.assign("LFJBFMDMCPIOYXHCYYMCKTJTIGHZKSODWEYETSQPXPASEYHULNRNQXKPVJQLVLBKUWUWMXZGJYVLFGTSHGXKIREKVCAIULRMBNEFEXKVPKLUAVDOJSOXYUJTVPBAZFOZSIHRCHJYSVCEBLFNOGTSMRJQHACIIDVQLJPCOZQ");

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
    msg.setTimeStamp(0.9776718788132341);
    msg.setSource(2689U);
    msg.setSourceEntity(84U);
    msg.setDestination(52158U);
    msg.setDestinationEntity(226U);
    msg.name.assign("JBZQYEIAHOSBSGUVRWQJOFYXWJQRKGTMOSZVLFAVGPMZBPVWJRARIMJBMMCEUMVNTOGTNKEANESFXMRKXEPLCDWRMZYQWSUGAKEADSQIPSYIVUNHDFAJROUYBKQVQQZLYAOUQWUTEWBTJCLHGPASXFICKLZHLJKNECIBUYZGGYFRENPADNXGWTKONHDLSBULKRTCDXGBFUXTZRXSFVLTXDPHHPNICLVPEDXKPYQZ");
    msg.report_time = 0.8165863820239818;
    msg.medium = 113U;
    msg.lat = 0.5010825319947099;
    msg.lon = 0.7760831881352203;
    msg.depth = 0.6641028091324331;
    msg.alt = 0.8005460514833678;
    msg.sog = 0.4240714657539968;
    msg.cog = 0.961431811185896;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 725U;
    tmp_msg_0.lat = 0.7116450676499361;
    tmp_msg_0.lon = 0.3440348840809275;
    tmp_msg_0.z = 0.32221804669026866;
    tmp_msg_0.z_units = 250U;
    tmp_msg_0.speed = 0.11344353991413281;
    tmp_msg_0.speed_units = 110U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.03903337695813103;
    tmp_tmp_msg_0_0.y = 0.897057971014548;
    tmp_tmp_msg_0_0.z = 0.8790947363084358;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KMPNYDUCXISGVLSNBLYPSQYCUVUEOEKJMMTLSQXIBDQGBEDFYIKRAUUYMXMDAVFMXXDHHEHCXJOJAVSZUHVWMRAPLTVNCYKCLDWKNXZJAGZUZRKOWTCZKODSQCOVVRNREINYCUBWGPCH");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.14127938626177883);
    msg.setSource(3066U);
    msg.setSourceEntity(211U);
    msg.setDestination(3103U);
    msg.setDestinationEntity(220U);
    msg.name.assign("JMKSXXMVKHQQBAIXELSTFTWHEHUGNKDBZJJNYJJCFPKRYXEKGAVBOVALWDYXMHFTFJDOQTMBUWPGYWTNHQBYEITEBBPHTUSZXZGVMSECIGLBZBPJZMNJTKZALSZWCRNQAQUARRTCGIYZLOCVUAEXHINMVUDLSHPCEARKSKYKXLSFEPPIEHOSVIPIWRCFNWDFCQCOOQMLWVPKTWCNVAZUJNDOOFXRLBYHYUDLFOURFGPDUQYSMWQ");
    msg.report_time = 0.48851546325547235;
    msg.medium = 3U;
    msg.lat = 0.07682145450534628;
    msg.lon = 0.08802442879307293;
    msg.depth = 0.20361332071113536;
    msg.alt = 0.6357584875142366;
    msg.sog = 0.6221119173661832;
    msg.cog = 0.08978795806865092;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8675721112857986;
    tmp_msg_0.lon = 0.9726919523947484;
    tmp_msg_0.height = 0.5773476163274596;
    tmp_msg_0.x = 0.8232482515963196;
    tmp_msg_0.y = 0.32737547585817783;
    tmp_msg_0.z = 0.9532879690708488;
    tmp_msg_0.phi = 0.8102347330620256;
    tmp_msg_0.theta = 0.2171979424318229;
    tmp_msg_0.psi = 0.6287536776847527;
    tmp_msg_0.u = 0.018654995116221484;
    tmp_msg_0.v = 0.8268642018070473;
    tmp_msg_0.w = 0.8276245580030778;
    tmp_msg_0.p = 0.1876125819583805;
    tmp_msg_0.q = 0.5851820032072702;
    tmp_msg_0.r = 0.1842725585289231;
    tmp_msg_0.svx = 0.91739899748033;
    tmp_msg_0.svy = 0.6890226660253905;
    tmp_msg_0.svz = 0.4572588399928801;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6404554293862506);
    msg.setSource(35334U);
    msg.setSourceEntity(138U);
    msg.setDestination(27642U);
    msg.setDestinationEntity(199U);
    msg.name.assign("PBUXGFLHUWTBFXKGSRJFVIZZCLCWU");
    msg.report_time = 0.6086702375888507;
    msg.medium = 254U;
    msg.lat = 0.927121906861298;
    msg.lon = 0.4998130332696107;
    msg.depth = 0.7821425610683223;
    msg.alt = 0.49598907200735254;
    msg.sog = 0.07201108108119647;
    msg.cog = 0.21085282092069202;

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
    msg.setTimeStamp(0.2393464715928223);
    msg.setSource(9687U);
    msg.setSourceEntity(1U);
    msg.setDestination(43752U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.02249644781216653);
    msg.setSource(8020U);
    msg.setSourceEntity(252U);
    msg.setDestination(40375U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.7765234432024173);
    msg.setSource(63732U);
    msg.setSourceEntity(239U);
    msg.setDestination(5154U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.3682539480622803);
    msg.setSource(121U);
    msg.setSourceEntity(17U);
    msg.setDestination(55301U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("LKMMGSBSCWFCFADNSYJSTACFOQRLUIFJMPCVHJYPFVORPXZDZFQTZOLPUFAFENJLTDQTLRWBTPEIORSHAXIPHNACRHWTMUHGVOKITJYBNVCXBXXZWIJSCWHMKEMLURUDNLJXQRNVETVQZDHJARNQKGVOGVBLHUUOBGYSMENYESSVAEOKQFAUTWLWFXPNQ");
    msg.description.assign("EWSWDMGHUQGUBGQCVJDHGTANJMZLBTIXERIFJYNIVPMSPZWKOAXLHVGGDIGNIHQDPROTTYDWVCSBSOXAQDEAYPZCMTMGKLMUNNLHJCMRTSUBEODKVLVUIOFEYWSNCHJUPHHSK");
    msg.vnamespace.assign("ECQJHHZQCADIQUPFSFHXDGYKVAIVMZVCLVBEHQGSKXTBBBSNPRHDKCGDVQLVTXRUAKWNAFROFJRGXACYZZEBGDPTOYDVPWNDWMUTMXLMRBPUNQWJBUTSLLOALWOHJYOCOGJJFIJTYUTPQXYMKLEZNGJXW");
    msg.start_man_id.assign("JWBDGVCQSCDKRAHGIEBCZGPXRINWL");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("USILKSOWVZEGERAOJCGZQYELIADZUQTNVKSQOWAMYDCDUMURJWXFKNDDQMIMGRCBGNQYNEYIHSBAQHRPUGMFHBEPGKOXVVJJTXKMTPLPTHBKIWHPQULCZOAGMKXYUBZHPLCRXTPULTRFFCCCSEESHPSABFQLLTGFXNJVYDOBRRQZLNPDKKBWZVZSYRWHTYJMRQEUAECIN");
    tmp_msg_0.dest_man.assign("WGMXJKVJQVDVITGQJOUVPQHPSYQLTABACWADLLQRLXBMCYEHXUTCSPOCIZXGPZYNOGROXAKWLCTKRAMXAFTGKNBZUJVRDVRSHIQZQYQOFAAYRGVFEPEHUIXD");
    tmp_msg_0.conditions.assign("TVNJBBXUUSTCWGPCIMZXWLYNDFQXQNENYWSHLRYRMURSQYDODSCAXIHQJNLBBHASOOZDEKWKZOVCFZVH");
    msg.transitions.push_back(tmp_msg_0);
    IMC::EntityActivationState tmp_msg_1;
    tmp_msg_1.state = 135U;
    tmp_msg_1.error.assign("FSBFZGMNHAQXHMFDDUEMOKYPRUWMXAEODHJSOYMBSAAFPBTHNKYDXDKBQAVTAYZMVREVSDVIQHPYRJLLCUXKSTOVCONSLUEKZEWACHQVLPQTPRZOSAHJLYEMBRIXZTXCLNIYTYGGCMBWNVQJZFOCGIDHJPRTWGSNGGQKGVHFQNLWBDUBYRTWSGWHOIXOJVUEQWFBDRVEFTGRXAJITXPICCUUFXKLICLMIINBKJPYDLAJUEKJRZZQNZW");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.4873143027645582);
    msg.setSource(12182U);
    msg.setSourceEntity(156U);
    msg.setDestination(60502U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("KLMBLAEIYYJHTBLOUVWDAKGPAUIUFAUSVLZRYBGVCRWMJTKRSWDTWCKWJJROOWFIDHNINGFZYXTQQXKZJIOQJDITGNNMHNYCBQKPPZXSEGBVUGBKPVOIGHDHVOZYQUUFKTPLNWXXEQDMNQFBRCSHBCRJEIJOZENAHDWZCUYMGKAZHMBFVTGLOOXPPSCETJPGWEM");
    msg.description.assign("ABTCRJUACLBZIJZNWDCJMPNEIBWUUVZOSQCKWQDIHVRRPZZRNVYHKDQMJBBDXAEKHTY");
    msg.vnamespace.assign("GZTHJQYCOEBWUBPJGWMNANYXDBQONSEFDVXTUZRKIEXZJIOGPDLPKNHOWFPXZMSYIALPYUCWDVTVRKNUOMWUGCHQRSKEPGFYWNNQQQTYCIADFMCAPAVSCKLBDJAZSVHZPHYXMAHLOEQXIUTORBPTKDUUZRNHMYQFDEVJGRYKSMATJTVPOJIFSMWBNORGMEFIBCVFFAVZRLDIBHOBKXSLILQCUSGMZERRA");
    msg.start_man_id.assign("YMZLHDOSYDPZVAMXKFANQRXHTIUIEQKQSUANFFLPOKVMRVLRTZIEDWEKZNEILCGUFORYBTMITTFAUZNOSKBMERCQBJDQYQMWSOFCWGGXSXVAEACLQXJXRKOTNSGNXWADJCWYYHPWBKZJIBNIWZVRIPHHQGGBJNIHPZLXFMT");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("CNEZJGABTTUSGRRKVNYEXTZIETBJBMILWOJSYXXXNCWUSGGZTOFMFKWTZQZERVFHLVKNYVELWCAGPSHXHGAJDTJMAYAQJWLZLVMKIFHUPU");
    tmp_msg_0.dest_man.assign("EMWKYRTRCWBVVTWSGJGTUOAERLHPFAAFAPLIKBQUCHJXSXEFVDJIHBVEYNQDXRMYIJWJLJDECBUCAZXOQNYQEDYAQQFGTKFWACFSNHUOJBGPOPNBOWUYDOBNDTXQKEUSO");
    tmp_msg_0.conditions.assign("DQHQPCEEXKWXTJMCVSRPDPXAELYTNAYDVFLQLKPSAHRVJWONAFKUTMOADIXLHMVVGPKRXBWKOWIULZHNABFVRJIVDVGZNSLSMGTECNIUYTZPHBTMEIKNXUCLSSSGFESQSXRBJECGZQOIOGOYHUTRAJFBUFQZYFXOJXZYZKDYPQDNKJRZHJMGUWPKEWGMA");
    IMC::NavigationUncertainty tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.02245681829180146;
    tmp_tmp_msg_0_0.y = 0.048413655872399874;
    tmp_tmp_msg_0_0.z = 0.5251619934094799;
    tmp_tmp_msg_0_0.phi = 0.01667591697554527;
    tmp_tmp_msg_0_0.theta = 0.30999471613583496;
    tmp_tmp_msg_0_0.psi = 0.33639847767606756;
    tmp_tmp_msg_0_0.p = 0.4409721075414089;
    tmp_tmp_msg_0_0.q = 0.08720219515201877;
    tmp_tmp_msg_0_0.r = 0.714324626661348;
    tmp_tmp_msg_0_0.u = 0.18240918239445925;
    tmp_tmp_msg_0_0.v = 0.8743600638453208;
    tmp_tmp_msg_0_0.w = 0.8459304660661455;
    tmp_tmp_msg_0_0.bias_psi = 0.2617562049166481;
    tmp_tmp_msg_0_0.bias_r = 0.40037406239540607;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::Aborted tmp_msg_1;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6976020639369978);
    msg.setSource(59651U);
    msg.setSourceEntity(80U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("VZOJDFYEJOMRSSPIDLORLZGEKEXDILRGPLMOGWIUBTGT");
    msg.description.assign("DINGCLSIWJIXLFCQZHDLERNBWWGJVJFBZFZHUSFCLSDMDAFGIJRNGSYPJCKEJKSTPCJFJZXPKDYN");
    msg.vnamespace.assign("IFILELWTJWRMMQMZTLYORLJKHTDMZSHAIGHZOAYGWUUBEWGZYRE");
    msg.start_man_id.assign("ZWOYMVCOXMELVVRELUFCUWURBJFCHALSZAUZMQVIBYULLTIPFEBABETPEOMCQWXLRZQJCOTRQRROHKAVSJQBXNIOCCUJHKDSYDKF");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YJUCRZVUECSAQINOPCCSHBJUNYMWKDVADULYMREHQDVE");
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 64502U;
    tmp_tmp_msg_0_0.lat = 0.7921962000667574;
    tmp_tmp_msg_0_0.lon = 0.7769653340594588;
    tmp_tmp_msg_0_0.z = 0.6844672161948951;
    tmp_tmp_msg_0_0.z_units = 102U;
    tmp_tmp_msg_0_0.speed = 0.4316692801654748;
    tmp_tmp_msg_0_0.speed_units = 5U;
    tmp_tmp_msg_0_0.bearing = 0.6672078440755214;
    tmp_tmp_msg_0_0.width = 0.15742845492598978;
    tmp_tmp_msg_0_0.direction = 149U;
    tmp_tmp_msg_0_0.custom.assign("CTTWLLZXFGFBNCVDLAQXROOQZPKDGGTZOLRHBCTXOTRRUFIWKOMVAHQTARPQWZACAMHCQVIYSAHBQJVEEBGZVERFBFNJJBPOULNMQXZGFJGSTBWYXVJOJPYUMXEHNOMTWUKYSHEVXCJUYCIUKHMOXPACWG");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::GpioStateSet tmp_msg_1;
    tmp_msg_1.name.assign("KNLOIETSCKTJSPDFBRKFPEZXYXWIRYLCESCJVFWHHWIERQOHVGMPLVAXZBSGUXTDAQCAIVNRJJLULRKQRPJDGUNMTCXIIWSTNJMSDZZOAUNDQNKXFTXXWVGFNROEBVOQRURXYYUAW");
    tmp_msg_1.value = 155U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5490030777286893);
    msg.setSource(24019U);
    msg.setSourceEntity(114U);
    msg.setDestination(31287U);
    msg.setDestinationEntity(161U);
    msg.maneuver_id.assign("RVFLJMEPKLGRHKRVCZYSIDELCQHZJZVYKYAOPCTSRUQGSHFGRQEBSOKIOGGXTUFWWEEBNSXHJATGJNGOOCBLKDBDZXXDIJBLRIDPDQJOZMNJQUTNLMUAVYTHESXUR");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 23727U;
    tmp_msg_0.lat = 0.1923950715028362;
    tmp_msg_0.lon = 0.5640775110968309;
    tmp_msg_0.z = 0.5850264680638367;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.pitch = 0.8552186492586483;
    tmp_msg_0.amplitude = 0.42150590282054656;
    tmp_msg_0.duration = 56402U;
    tmp_msg_0.speed = 0.6069611144460995;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.radius = 0.952507998286908;
    tmp_msg_0.direction = 142U;
    tmp_msg_0.custom.assign("WOEQZJANIZKXUPQSYAWUCVHLYKVKLWHOCBQSZMNRAMJRUJKLEURSRCWMRMGPJKVAEAYEFXTCLXVFQOQYGPKWACFXWSVFEZYDTSOQGXSGYZZKIOCNSVNUJXMIQDPMPMHTRPFIFFUETIOJNSDPYKQNOUIEWURQZXCYZHVNGLFYAHEJRTVRGGPXDZIKUMHDBJAALQIFDTSBTHYIGRHWDGPWJBKAOXINTBCLTBLOLPMBSBHLNW");
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
    msg.setTimeStamp(0.29458688390306587);
    msg.setSource(5887U);
    msg.setSourceEntity(211U);
    msg.setDestination(32344U);
    msg.setDestinationEntity(129U);
    msg.maneuver_id.assign("MWVGWBZSKPXQUZSNDKYLEXIMDYBJYPVSMXBOSADFOGKJXALFXBNOVIDLYHILSCDVAVHJQDBIFNDFGZAQMHYZMZMELZRJTEYPWMSQJOPJWJWFGAVCRB");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 17008U;
    tmp_msg_0.rpm = 0.4802298631330778;
    tmp_msg_0.direction = 92U;
    tmp_msg_0.custom.assign("BTTAOFVSMAXLTXEYWTIKWZMOLCLKVYQJFY");
    msg.data.set(tmp_msg_0);
    IMC::SetEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("WXGQBYYLKJTOQDXOFZNKWTEKPACBGEHRNHSDAZQWFNQMRZTSGNYZPRSVUPBRDTIFOFCEGENRBHKOEMBXQLNPDMKGAEDMFHCXRQGKCFTDPYHMEISBLRMIPKIULYPURAJNOIGTBOYQSQUVHXEYFCSZILUZQWVVWCVIXOMLOMJPLAEFJLROHZNSMCNIUEFYZXKVUSYJMIXTOTKTDWGYX");
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
    msg.setTimeStamp(0.736115325861102);
    msg.setSource(8602U);
    msg.setSourceEntity(124U);
    msg.setDestination(53193U);
    msg.setDestinationEntity(11U);
    msg.maneuver_id.assign("IIQFFCPJUJLGREKHOCSLAVPFQOIHHSZMUYOCXRBGVNAKDBFZURILLTYYJYDYEZFRMHDYYMZPBOXKWKIIESNUJAEJUQPDBWNFVMSMGCAHBTATWSTGTDSLZKDFHRPNIACMQZDKLWEQVTWDMEYAXFVDEHRDUIOVPUGCVKEBKBBAVFGSTQTWNTHNWWJVMGQXXZQ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 19156U;
    tmp_msg_0.lat = 0.007905211132423151;
    tmp_msg_0.lon = 0.14905494674102904;
    tmp_msg_0.z = 0.8266696433835016;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.7317766787006973;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.custom.assign("VOVZELBXHBFCWEMFUIXXLGZSIXCBNRFPQGIKHYABSAOZZSCLTDGNLYSBPYDYNKUNAPBWODUJZDQUJXBWITWKGMGYVYMU");
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
    msg.setTimeStamp(0.15547695208129053);
    msg.setSource(45342U);
    msg.setSourceEntity(152U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(7U);
    msg.source_man.assign("FPUQGOIDPRVENKOLDKOQRSLZJXOTPDRLXNRVITSGTBYCWPIWWXXMTJHVFLFRCWUCBIJPRYUEKUVUXPRFDTHFCOPLBNW");
    msg.dest_man.assign("CHURPEACBHUXTPWJIRVFIWPDKYLVLARIAPFAZZTZGFYQWXOKKONRUCKHEBNWDIHMMSPKTRPMHHCVQMZWLP");
    msg.conditions.assign("FQCHWMUTWLEQAZSGZRGEOPKYTOZNTINXILYMSLKCOPZYDDUALYKFKBCCJIAMHEOEXFBPPGSFBQMVOSGUEHCGYIRNABJZUINGUPCFZHQMRALRWPAXYBWBTTMNHZSSGDWHOVJHDVPEKQBUQEXVHVQXBIFJBKDNCWKMOETJQQJVIEFASCZXLRWHILRXCRRVHYIJTEUNUDJVUGDSPSFWFTAOYNKXYVRZT");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.43599771892286043;
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
    msg.setTimeStamp(0.3004855907005546);
    msg.setSource(24490U);
    msg.setSourceEntity(6U);
    msg.setDestination(3793U);
    msg.setDestinationEntity(90U);
    msg.source_man.assign("QIZKWEIODLMTRZBXZTXTRJLCNCTQHSUORWTMDFSX");
    msg.dest_man.assign("RVZJVDEPAIRAPFSTKJNZJIEGZAPYKLFFGZTBZHIHNOIYNLAWZZWXMMEQSRMODPGFOMFHUNDIHXXTNYRHJWWBXQWFYUASSQUATKVCUPMNGCWPLAQMIJJJCKIHAOXUYVVBUDSWAWLJTGDTYQQQSLZMGXHETSRITBEIJKBFXVKKNORCJUYGGLNPXERQBLUBUDOCVLDDVMTYCIMEKPQCTNBZWCRYBGCKVEFHXU");
    msg.conditions.assign("KJRTZYCWWXHIGHZMESZGJPDPECUCMFEWWRYYQHPKYRTLAUQCIIZVFBVYSCNRDHKIVULXGMLGFZTVHBTKAVPJIMJRGFROPCZKAGDBSCNEGKGOTDNRKQDNALFUJFWEHPNRXGMBDXFINSDYFISOMHIELJYQEJUDWMUNAJPWLLMIOQSBDFPHPXMUTGBOXKWBRTVXAYAVXTLQE");
    IMC::SimAcousticMessage tmp_msg_0;
    tmp_msg_0.lat = 0.9308381859097318;
    tmp_msg_0.lon = 0.5181789888969591;
    tmp_msg_0.depth = 0.2490441048438431;
    tmp_msg_0.sentence.assign("WRJNHZHJQEXRGWNQDPVGPIWHCO");
    tmp_msg_0.txtime = 0.6813575481643681;
    tmp_msg_0.modem_type.assign("HBFDFPEIWPMVZDXCBPMFJBFCUREOHJPSEVBUQATXSVFASVGQOYRSHNTKRHMEIZRBWUJQZIKWDZWMITECZVHNFJNJLQWYTUGGHJWLCSRRSAULIWNPTQXPDDIZWYBANKHUEOCGDOTUARKEIFLOCPVSRPDJQULMKXIGTZERIKWVXLHHQDYKYZEVMCOPAMJDBMPCG");
    tmp_msg_0.sys_src.assign("HXEJOEYPCPACCZOXUIEJVZCYATROOZCSJTALUAUFMRPSTHLBIDMJWKUPJDSQBDQPZDFFNZHJMSFJXWIGXMNUQVNJIASJQD");
    tmp_msg_0.seq = 16492U;
    tmp_msg_0.sys_dst.assign("RWRSCSHTVQBKIZLHPSIAKVDMVXLFDBNPETKJJAOMWFEELKOBLHOOBOLVGIFCTNSNGXVCEXBIXAPGJYZKIPNJDQTTJLDZGDGUXQRGFHALEGCKCSAYBEFTZCSIMXWZITIAJOAQCARUYFIHHHDVHDVEMNWWOJPAZHDWWQNLVLRFHKXFEMUYYUPWWVNRJEKQAYBVFUGFODZQMMUKNSPSMGMUZLBWPUPXTRZENBBPUQMKSCYORDOCY");
    tmp_msg_0.flags = 160U;
    const signed char tmp_tmp_msg_0_0[] = {-102, -15, -40, 6, -125, 54, -80, 95, -25, -110, 3, -51, 72, -77, 53, 77, -114, 35, 111, -38, -102, -80, -89};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.4510460063507512);
    msg.setSource(53304U);
    msg.setSourceEntity(243U);
    msg.setDestination(42863U);
    msg.setDestinationEntity(242U);
    msg.source_man.assign("YTXEIZIMZJHUXDRFMMZWLQQOCTAXNQTOMXQATJQBZNVAEYKVPDMSZKKEAGTWHLAJPASOCZOKCCFJXIVOJIIPWQUQXKLCNJRWYWBRLGRORKKMNOLZBANMD");
    msg.dest_man.assign("AIFCVTASRLYQVLHXJHHGRZMEGDSMQTRTYLRACIMRPXXKNGENCHOQKHTYIPSUHKKFAPWNBLZGDTBSBLKQXPZTEQLWYDZFAEAQUCSD");
    msg.conditions.assign("RYQQPAXDIRRYHFYCELOCYYPMPVQGZUMSWTKQELOOWJXXTRVXCIZOZLPBDBADWZGBGUNRJMWJOWQCVNHJIMHQYKUGFERRSNTEPGQZVGHNHJKIAZKBSQSHFTXBXHHMDKREYLTFACSTWIV");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("JDZRDLYKOGKNLBQPVPEPHBKORAUJFCTJBYNVGSBKKJUQU");
    tmp_msg_0.lat = 0.07715962868373982;
    tmp_msg_0.lon = 0.9812704032741151;
    tmp_msg_0.z_units = 152U;
    tmp_msg_0.z = 0.9046336528078589;
    tmp_msg_0.accuracy = 0.5990170964102193;
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
    msg.setTimeStamp(0.23034005158708815);
    msg.setSource(30672U);
    msg.setSourceEntity(48U);
    msg.setDestination(41023U);
    msg.setDestinationEntity(49U);
    msg.command = 54U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DJEJAKJGSUMLFQSFIDBAXFMXUMPWESRUKBRRAZJBHXSBHCGEBIOCMWNPETOFHGDPHQBCPMISBBXPKYJJGCGKIQWCOSDEVUACYRDFTHRWGIZFVPLQELGLLWNTMYDAAEBZKVZOQNYSTONCFMGNHYLTQEQWDCXZKZLDKRBLFMZXDQJAJTNHNIYXAELPWHWVOUNITIUVVOQGKMSRWPDXNUCZTSUYRKJRKACTIVYTOWMZU");
    tmp_msg_0.description.assign("SOAMURVHKUZAFWTNZVIAIUBFSFDHMRKYZCHLCBOYBMVUEOMMDTELVDOYDZOUHQXPTTSBVJOGDEWFOXKXXYPFSYJMUPWDLGWTNADRPJKHYKADKIACOSCXHKPLWSNAPEGCXHZBJCKFDEQCEUDBWVY");
    tmp_msg_0.vnamespace.assign("PJPPQZBSBPCKYSHIBHEUFDAKVXDTRKBNEPPNNZQXRAOKUDRQURDOTROQEGKCDNFTDFNWNCXEEXIOOLTNDYWQZFSFXZXSTPZJLERFNIJYNG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GSAOMFBHXCQPBMEKMKYKYVUVSVNUNXRJALMNELKJDHPUUZCHPHTKZVTQMJUHVFYRICAF");
    tmp_tmp_msg_0_0.value.assign("LSOXOEDRWRDACCSNPTMJXPURWSIFQBQWYHVKKPJXZBDMFFISHVPSGOKLTMHYLXVFYFWJ");
    tmp_tmp_msg_0_0.type = 229U;
    tmp_tmp_msg_0_0.access = 249U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CXPDDYODOMYCWMNOXRKGGQKUGCPRBRZAQVNEJKVKOGXLPHFTUENRCEEDWOOLIPWTTZUBQYHXXTWZIEULQRXWJBVMSVOSND");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VYLWJBJMIFUPFZMNIFIOOGRVKQQQZPSEDEKHKJXYMTRHEDTANIAZUOYEKNJXKLXMCPBSAZJVPCTCDGT");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6996278348740809;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.4587193795284087;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5964350733096851;
    tmp_tmp_tmp_msg_0_1_0.z_units = 62U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.2290090757151162;
    tmp_tmp_tmp_msg_0_1_0.duration = 28990U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.5757982926169659;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 104U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YMHRXUYXNIMVIRGJMRGWZZIJEAZHMVNYCFEPQAZDTJMVILWKWCFNHCYRDRIFQXSDLACHSHTVOPGYKNZKQBRFEOQYJVGDOQFDYWJJJOWEVFYPHQXBTWQRKXWUGLNILYTFEUEJCCQSDBAGPKTTUEAZICSMOAHAPOSLWNBAGTNSLMXIIMCEVKKPVRXMBKNNCWPZBVOJDUUTQZLSODEGI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LblEstimate tmp_tmp_tmp_msg_0_1_1;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.beacon.assign("UGMFYYXEHVDJSXOCJPRURAYHKICZIOQUUIEAYRAHVXZXOCKISZZITCFZGJNPDYPSBNXILNKLKVKGVWGSMBZQHFEVPMNWORQEQCZMNHPEUYJLOWWVOLFWGDVQ");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.3568307104385984;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.7309823929265805;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.depth = 0.3566813123509207;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.query_channel = 169U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.reply_channel = 219U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.transponder_delay = 184U;
    tmp_tmp_tmp_msg_0_1_1.beacon.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.x = 0.8427975156860694;
    tmp_tmp_tmp_msg_0_1_1.y = 0.28183624892262193;
    tmp_tmp_tmp_msg_0_1_1.var_x = 0.7049776943860973;
    tmp_tmp_tmp_msg_0_1_1.var_y = 0.9608616645890778;
    tmp_tmp_tmp_msg_0_1_1.distance = 0.40819159407751093;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LFDSFYIZJMFCEASLIMUTOLHZXYTXTSGTJMEPNRZERQQHAFPBYRKYGWUSCZUVXUGHABFGGWMF");
    tmp_tmp_msg_0_2.dest_man.assign("KYLEVFLGGAWBCAZZZVNIUYWZBEKQIEWOQMQWPJAORVKCTRRKMMZFQOTJJOQNLAGDQJMTVIHPASWXTMSCOEIULVTJSLWIZRJIOWCYCJBADPNLHKJOFGKBRSGJKAGTSEXDUEACHEZEKXUUHNYZVNXODHLUIFSMFGTBDTNWKNHVVMUSYBTWRDIHEBBPGUMGTQFES");
    tmp_tmp_msg_0_2.conditions.assign("VGYCZYIXUUZOBXWKOWYJNWIQGXUPVYHJFJTJBIACPTIYRBSFDENDBVPXNALCFCOJATTFTGZKMYWYAWVXDSZRYAHIPJRVQPLHQDEEQVSTPKRDAXOMNZXPMYIQAZUPGMXKVPGMLURURKHE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::LeaderState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.group_name.assign("NLJCPMVTXCKINRMWTUDSBXOKFXMTDEUNODSGIQUEMLSKZPBXQTNZFYSPGWLYQHCLAHAAHIVSPXXDGWNVSLAOJZZLUEORTJZEPTGYJFSGULWHALOAIJHBSYMBFFXVCIRNMDDKTMMBAKUVRVKGBCEIUJOBOQXQVDIW");
    tmp_tmp_msg_0_3.op = 176U;
    tmp_tmp_msg_0_3.lat = 0.7924126904425647;
    tmp_tmp_msg_0_3.lon = 0.5337292405546407;
    tmp_tmp_msg_0_3.height = 0.47630452225606523;
    tmp_tmp_msg_0_3.x = 0.6448531359832212;
    tmp_tmp_msg_0_3.y = 0.3415166047785231;
    tmp_tmp_msg_0_3.z = 0.9834687627634725;
    tmp_tmp_msg_0_3.phi = 0.7223063799189875;
    tmp_tmp_msg_0_3.theta = 0.6369528346687247;
    tmp_tmp_msg_0_3.psi = 0.5510836650902761;
    tmp_tmp_msg_0_3.vx = 0.8414315451556255;
    tmp_tmp_msg_0_3.vy = 0.3578764328845001;
    tmp_tmp_msg_0_3.vz = 0.8518138522079732;
    tmp_tmp_msg_0_3.p = 0.9351851199267075;
    tmp_tmp_msg_0_3.q = 0.8557615738075297;
    tmp_tmp_msg_0_3.r = 0.28234452955756517;
    tmp_tmp_msg_0_3.svx = 0.46017560249031964;
    tmp_tmp_msg_0_3.svy = 0.6488537589289979;
    tmp_tmp_msg_0_3.svz = 0.261695754775915;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.5247119163632771);
    msg.setSource(4025U);
    msg.setSourceEntity(226U);
    msg.setDestination(34912U);
    msg.setDestinationEntity(228U);
    msg.command = 218U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EYMASCMAEZNGGDXLKPOWJAVVORCUPADVRQWOFIQERGBF");
    tmp_msg_0.description.assign("QSHNRUPEGOJDDXHSTQIZDFYGSAXOOFGJPY");
    tmp_msg_0.vnamespace.assign("VEYMNBFMTDRLTNYZXVLZTCOFMDUCDUXBWOHPNLWKRFACUOAXMEMRCAJDRSYNWGSGMIWTFGUOWYTSMVJMKDDEGFMDTTVYZBETKQZAIXDJPQVIKJSVGKPQZKPOLZHSEUYKWABCBWJBLYEQKNYFPENWIXOHRCZRFGHQOOQX");
    tmp_msg_0.start_man_id.assign("DNLCUSPQNIOOSUAOGCIFZFWHXLRQMEQKYQUAJRKGIILJEGUULAAFKRIMOFSYUMBJAJTPWZPIGATRRMVDFYBPYMVDBUMOJEWTEOQOYNTHLZHEHFVDNCANSAGPYZXPJUOCKBLWVZLBZXTVJQGVX");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MSNYBVNLOMLIRRLIWEUUNSCCDXWCSYQAJ");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.20353748926951643;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5547838905933856;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7356793204213754;
    tmp_tmp_tmp_msg_0_0_0.z_units = 110U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.735176977821189;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 67U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GHQIZUCSYUUHJVPGXUTFLLIRYWBFTYAIEKPNROYSYUFGCRSBAUOTNITEUIHXQFPSZDEXOANQCMATRBDXHLPVAMMCP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("AEHKYTHNMFQXTUIWYV");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("KVWBSLSKCCUHEIGGXJMWLPCNWSIVZDTYYJQEYAGXGODDQMMORNEOKRPYUXHCCJTLZFBROSUZVRSQDEYSVNOLTFABRTVM");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("BYNRSXUSLWBBDOZTIBMQCFLZERXMIPOVNWJPTNIELVZSOHEDJLGUJPZYQFQEYF");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QCLMQFECUHCYPHUNYYAEIOFJIGZCMQRDOTDJKBRAHQVKFCJLIXXDRWPLXKKTYJEIBSAAQTAEUZMPDPBLWHK");
    tmp_tmp_msg_0_1.dest_man.assign("BFMPIKLNBEZSDHTKWZUMGJEPOCYWUCDECEPYVTPJZAQNMISNJEOYCBL");
    tmp_tmp_msg_0_1.conditions.assign("KLGSFBSZYKPCMVYWMSOHVFLCDWSCSWILUKTXKALIFFHLVHJVQALGCSUHQIEXXCATMGLBRBBVPNAWRJYUJUTFCRQOQYAHDZRZFEUYQVHKSRJGUVIPXVGOBDNMTZPMFDBMZRJYCKEOYHVGOZCMVPEXSWPGRWEBYTMXJEBBBTWO");
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
    msg.setTimeStamp(0.9499161536001361);
    msg.setSource(55689U);
    msg.setSourceEntity(84U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(161U);
    msg.command = 31U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FQOPNDWVHBEYHWGUEMIUAMWZUPRZCZUIYOVXLIDUSAAGQSRRJZHXFVLSTCZZVTY");
    tmp_msg_0.description.assign("JLQGGMGOSOSNCKPOXWWINGHSOKLADMURTYHUONHWJOWCTHFPTWZTCQBQHKBKDXWTZYJIDFASNJEGLWAVJEZZLKXBDMJSORUZEYPTFJADMSQNBEQINYJIRAQKZTELG");
    tmp_msg_0.vnamespace.assign("XVQHCYSJSLILHNRAGNMQIFBWODEWIIKZHTJJESNDQQGYOBBSSFEELQOOZEEKZAOEDNFPUECTVYUYKHWXRBWGEFIZAQXMSKLYCBNUOBKAXWDNORPTLMTNQQRBUZUZKJXTRWPCWMIAWTMYCCJLKLRUF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NEBDNTISEMPSPEJDMDAFYMAXWXMPEYMPJFWJFLRDLCGXTGWUSGMQHZPKYKVFVFDJSZROMHOEZOLUPYSRKUXZEVXAORWKYFUGAKBWWQGIXHQKQHGQEUIFQBSHVIRTSVANCTEDUOJTFWLZWPDMTNCOFJHUDLCIVOEVBBCBIPHKAXOTWBA");
    tmp_tmp_msg_0_0.value.assign("DBBPWJFTPHIVGEVTQQJXMILRBUIZNOWDSZRKEKJXVKFGIFHPBEKPFTIZJYRUJUYQPYNYMTOVZMRDLCPSENBWXJAUTUXCSIGCNKFKVBRRIGJOQYMYEVGDDTZOUSCNECQHRSUHSNXGDMEYWTPY");
    tmp_tmp_msg_0_0.type = 61U;
    tmp_tmp_msg_0_0.access = 209U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UPQEUFETVXSWQNIOWAZREJRQXAPFUSVWBDSRK");
    IMC::DataSanity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sane = 12U;
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
    msg.setTimeStamp(0.5369620358964347);
    msg.setSource(34163U);
    msg.setSourceEntity(26U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(171U);
    msg.state = 159U;
    msg.plan_id.assign("VSSGSUOYCGEUFAUSYQLIODALMMOOHFISEKFCDVKCIRZBBXIWGENFXYMFPZSNXEHVJOHCUQPZJMPAVXRNQGEWJIDRBZPDAIKVOESKR");
    msg.comm_level = 236U;

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
    msg.setTimeStamp(0.5903060327188064);
    msg.setSource(64408U);
    msg.setSourceEntity(194U);
    msg.setDestination(20401U);
    msg.setDestinationEntity(64U);
    msg.state = 215U;
    msg.plan_id.assign("HVEBTQJIUFSNYAIFTEWPYXOIDCXWLNKWJSWOVSOGBZSWJFJPDVAANNBCUTRIOYCAMXJGTLVMPTYOFXSHFZHUYNBQQCMMKFDEGHBUPDACGNVZFPQGLWBEBVLUNKOZZBTCDQIXVDXLWAKQQSXQTUZKXSOAKDWUGFLUUPEETHPXIRMVFOXSZZTDBRKCAYEPJQSMDPJIRNALJSORZYTCIMRLWHJWZAGMMC");
    msg.comm_level = 251U;

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
    msg.setTimeStamp(0.8899976282669568);
    msg.setSource(25813U);
    msg.setSourceEntity(103U);
    msg.setDestination(54247U);
    msg.setDestinationEntity(123U);
    msg.state = 38U;
    msg.plan_id.assign("POWOAFTCMOXQWBFRPLSRRKYDQVOPHVKDXMLKOORECQLSCKVNNQUZGEHMXADSSIWABCLAYMLAZGHQBSKBZYIBUJBKBGJDJTJUHDYNXDCIPDGYLWHPPBTJFSMRRNLYAMZIPSGANEFCZUZQAMWQ");
    msg.comm_level = 22U;

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
    msg.setTimeStamp(0.33737735166437643);
    msg.setSource(12293U);
    msg.setSourceEntity(251U);
    msg.setDestination(40749U);
    msg.setDestinationEntity(85U);
    msg.type = 133U;
    msg.op = 95U;
    msg.request_id = 65119U;
    msg.plan_id.assign("LKWEKABZDLLBKDZLCJRUAEPDXANWENZNKJQFBODHUSTHHLOFRUOKEUOSWRQROVXOQJBSUEXZNPLSXHVQQSGIY");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.85212405843728;
    tmp_msg_0.lat = 0.8793486599285284;
    tmp_msg_0.lon = 0.185952314528122;
    tmp_msg_0.z = 0.3742058745318424;
    tmp_msg_0.z_units = 155U;
    tmp_msg_0.travel_z = 0.5829988127354956;
    tmp_msg_0.travel_z_units = 73U;
    tmp_msg_0.delayed = 60U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EPHFQKTLGXYABJDHVJXCUWMXFGIRTKZIVXCGHYQVHHSWFJMLEJQIWZWENGBYYNTYEYDZPAGAPECQDAAQUMAHEQZBXVUXIIFVBAJSCKEQREBKPAGFDYTMMNPTOCHQDWXELMRMJKKXXCL");

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
    msg.setTimeStamp(0.8191620832227255);
    msg.setSource(10834U);
    msg.setSourceEntity(165U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(156U);
    msg.type = 219U;
    msg.op = 44U;
    msg.request_id = 17414U;
    msg.plan_id.assign("IGQNTLZQSMJHCBJOTWUKVBIVHMKVTNUHMTUTPROWNFNSQBKYCRFMOEJASZYCWKDTBEXISQQYLDLKGFXUVJAYWKYHSPMVQXDDCTAXHVXULYANEPSOQZYLFCBWLESTHAZSZKRPFJNAGHFXIERJUGNWILYCRFKSDICTRFKURVDXZIAQPIQZ");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MIAAKTZHQOVEQNWTMNMXBDOY");
    tmp_msg_0.lat = 0.42859067802663087;
    tmp_msg_0.lon = 0.9636631309660384;
    tmp_msg_0.depth = 0.9124100434865032;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 44U;
    tmp_msg_0.transponder_delay = 175U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KVDLNFMFXFXNKQJPJRBUXEDMXZCRWPGPGGLENRVYSMJVZUFNXFAETFHQUTRELOTWXHIUSTSNVEHXAMINAHJLSTBMFCDHYOGUAMLBIOHKGYYFCDWPZWUSZUFJQOWZUAIOCCNCIKDAVMGKRYIWUZSDGQGSZNTIYVBJPYZDVMBWORSIJOFXJHEZMQYSKTEJCBLAMRZKQPGHKIVXPDLYABHOBWPTLCRRXUDLVLCRGEQYQIKCOTKWAS");

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
    msg.setTimeStamp(0.33979723332376044);
    msg.setSource(59160U);
    msg.setSourceEntity(100U);
    msg.setDestination(8024U);
    msg.setDestinationEntity(73U);
    msg.type = 30U;
    msg.op = 83U;
    msg.request_id = 54292U;
    msg.plan_id.assign("XZRFRIDZIXGZVW");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("TEXFOCFCPMKDLFLDMKNJQBLCAHIJHVONLZIFURSTFXMTSIVVFUYRGWHEFSFCTR");
    tmp_msg_0.type = 216U;
    tmp_msg_0.op = 254U;
    tmp_msg_0.group_name.assign("UZSKPPVYGYMFSSTWMGQUHDABAQNKSSZBGCMAMYMQQCJEOYBDHRMOVUKRTZKKBQTHXYUODUSOQMHFEEBECVYODGGTPHLRFRLJSAYIJIWHKKOZXFYELFFJRHFTYXZNDZFXBYNNCRVMBZIVNWOLQUAKANKTHEJPCXXDVLNQWWOWUDFWDWUUOGRLCGIMZSTEA");
    tmp_msg_0.plan_id.assign("IBVVTDKVWKHKBKVOFLSPMQWKBVUTGACQHCVGNMGDDJBCLLPAUQBIMGXLAVTTQOCZGTNWHRZWIWKMBRYZNMBOHRUGNSYIJLMHSTOQPUSMUPXAIHZDWYNYIAIRODDBXYRHTZJZSACADKMCUZNJRFPQEOMSDWGFPLYUIEEVMARPQGRRXXBNXBFQGYJZTSCNEWXFIRYVSPLHFKLQDKQGDTCSFOYJIUVPLENJJZEAJOCFXHWYWXFUFPU");
    tmp_msg_0.description.assign("HHVSJCFEZGZGCWOKBFWYMWLBVCUJEOJTWTCUILJCPHTRATPTQNZMNGADRQTFZMMZDBOVR");
    tmp_msg_0.reference_frame = 81U;
    tmp_msg_0.leader_bank_lim = 0.17289992487579908;
    tmp_msg_0.leader_speed_min = 0.25954052636322233;
    tmp_msg_0.leader_speed_max = 0.41357179891086704;
    tmp_msg_0.leader_alt_min = 0.1960433132598014;
    tmp_msg_0.leader_alt_max = 0.7810412037151707;
    tmp_msg_0.pos_sim_err_lim = 0.8235876317147833;
    tmp_msg_0.pos_sim_err_wrn = 0.8969996023976707;
    tmp_msg_0.pos_sim_err_timeout = 45157U;
    tmp_msg_0.converg_max = 0.42234818933777274;
    tmp_msg_0.converg_timeout = 7338U;
    tmp_msg_0.comms_timeout = 54197U;
    tmp_msg_0.turb_lim = 0.248022475813915;
    tmp_msg_0.custom.assign("YSGCWWMZZFKP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DUJHEVMPWHJBNABGGPURVVKDDICGKITQUDOVRKKQLNFLEMPRTXWSQGZXSO");

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
    msg.setTimeStamp(0.9456010408004196);
    msg.setSource(9300U);
    msg.setSourceEntity(189U);
    msg.setDestination(38904U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 57010U;
    msg.plan_size = 3550254501U;
    msg.change_time = 0.7102762081040391;
    msg.change_sid = 53003U;
    msg.change_sname.assign("WXIQHLUWXFOTLXUNEKHKBYPFMGFDESDJZIACHRSHSPDKNELVJNVJQIQZFRWZYMHVUJDRBUBUOUCTNYRSJLSTYMIGFSANBQDWFJLYOTFWATPFRBGIMTVDCPWZNRSXFNARORBUGSYTPBJMEJDASUAWYKYNHEWKACLCDNVZITDPWIYOHOM");
    const signed char tmp_msg_0[] = {85, 21, 19, -22, 32, -93, 108, -81, -75, -15, -103, -70, -88, 1, 6, 113, 5, -9, 63, 31, -22, 70, -78, -120, -119, -31, -88, -118, -55, -78, 15, 61, -114, 114, -128, 71, -11, -41, 105, -63, -121, -25, -38, 23, 47, -118, 8, 83, -118, -111, 126, 51, -115, 123, -121, -3, -32, -112, 122, 26, -105, -47, 99, -79, 24, 113, 118, -89, 44, -104, -3, -100, 15, 5, -72, 121, 31, 60, -61, 79, 43, 61, -69, -42, -70, 117, 69, 47, -98, 78, 80, 83, -63, -125, 39, -109, -10, 94, -57, 84, -44, -113, 16, -74, 112, -116, -79, -9, 114, -32, 65, -3, -111, 10, -95, 126, 49, -51, -64, 30, 13, 57, 46, 27, 5, 8, 7, -29, 104, -7, -80, -117, 9, 69, 81, 92, 67, -28, -66, -72, -51, 16, 2, -103, 40, 122, -112, -92, -112, -20, -69, 2, -111, -68, 19, 30, 71, -15, -99, -20, -3, -48, 41, -44, -29, -75, 46, 108, 33, 24, -77, 126, -3, -33, 44, -121, -128, 60, 61, -59, 51, 71, 104, 28, -20, 37, 50, -49, 96, -33, -103, -68, -20, 9, -2, 24, 70, -88, -105, 24, 93, 25, -20, 108, -76, -12, -83, -57, -76, 45, -81, -12, -75, 58, -22, -122, 88, 62, 33, -3, -10, 9, -40, 77, 39, 122};
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
    msg.setTimeStamp(0.726572748684943);
    msg.setSource(57609U);
    msg.setSourceEntity(123U);
    msg.setDestination(5623U);
    msg.setDestinationEntity(53U);
    msg.plan_count = 12999U;
    msg.plan_size = 2505775992U;
    msg.change_time = 0.5674110335322;
    msg.change_sid = 45148U;
    msg.change_sname.assign("JDTVUCMOOXRUMTNKEWPGJPKECTOFOBYQZWNUSTVBNLSYTRABTZDWLLZMWCVSYORTXRSUYVGMGUMJCZNAAKEJBDWJDDZVDUVRMXNJCGTIPIKNHVIZFHVAFXRAIJSPQPJDXEYBZNLSNHXSSFIBHVQIFZACMCLYIXKFALBQ");
    const signed char tmp_msg_0[] = {59, 37, 27, -93, 64, -104, -23, 11, 105, -118, -85, -38, -27, -71, -7, 30, -115, -99, 25, 7, 82, 100, -10, 99, -3, 3, -103, 112, -57, 30, 37, 104, -31, -98, -57, 117, -116, -124, -56, 14, -127, 23, -1, -30, -95, -127, 37, -56, 46, -94, 38, -7, -30, -123, 19, 44, 103, -99, 74, 106, -112, -106, -85, -89, 13, -107, -78, 78, -89, -50, -104, 23, -42, -126, -61, 89, -104, 103, 80, 25, -77, -124, -87, 52, 33, -24, -126, 76, 89, 66, -15, 80, 44, 36, -44, -114, 43, 111, 49, -63, 80, 113, 40, -46, 12, -90, 18, -32, 106, -23, 99, 105, 90, -16, -6, 46, 79, 114, 39, 96, -11, -21, 9, -27, 29, 82, -55, -10, -105, -25, -54, -16, -83, -125, -21, -32, 19, 89, -83, 96, 21, -54, -52, 12, 65, -115, -88, -76, -91, -114, -77, -64, -51, 112, 21, 95, -83, -78, 20, -118, 79, 103, 77, 24, 47, -103, -43, -61, -10, -4, 26};
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
    msg.setTimeStamp(0.24023839109607326);
    msg.setSource(57604U);
    msg.setSourceEntity(154U);
    msg.setDestination(60708U);
    msg.setDestinationEntity(102U);
    msg.plan_count = 14158U;
    msg.plan_size = 860714066U;
    msg.change_time = 0.5334991556534594;
    msg.change_sid = 21271U;
    msg.change_sname.assign("IXZMJLWULQOTYSDOCCHWYMRZHNIRSNQMVZRUPKHEXDHSBWDDGNVRKWKWJSPNLTUAXXEHEBWHLPSRUYGLOPBXKASIUXALPNJVDOJNCAYKFMWTCQMARFRYQZKEOOYJTKIILFGRDYUGEAVAXFNIUUVBTQJKYOBBOBLZITTMVHTPEOIFTFZRSDEIJGZVYECLDWUVDBUMCICBWJAQ");
    const signed char tmp_msg_0[] = {-87, 86, -116, 75, -126, -115, -27, 101, -61, -21, -106, -103, 73, -63, -67, -99, -84, -65, -85, -124, 13, 121, -94, 76, 16, -13, 74, 2, 112, -4, 83, 53, -115, 75, 50, 26, -117, -95, -125, -85, 54, 65, -94, -58, 8, -80, 80, 63, -3, -128, -63, 44, 73, 73, -110};
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
    msg.setTimeStamp(0.31069553145920115);
    msg.setSource(62721U);
    msg.setSourceEntity(77U);
    msg.setDestination(13940U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("QFDNEPXWZSTGESGGOBMTNBEKJVSBOONXCFVLIIUSRTXBMTSHDUVXBNLVRRLPFKXYJFCDCJLHRPDNOVRLQTGGBJOYDHAQUOGKPYRKMAUIDOEJXNIWSCUHCVMQSWELMWIQQZKSWGTYARELPTDWVYQHHXZJTWZQJIVUWXJGMKMLBGRFPXCTFFECDNIBMELZJOJ");
    msg.plan_size = 61831U;
    msg.change_time = 0.641529328436299;
    msg.change_sid = 13382U;
    msg.change_sname.assign("LECIFQNRUFMDRZANWVAYYGMJQBZZBMDEESFBHWPJOGPXMVAVXHOCAIXOHTTKNUSSLEBBSGBWSCVHCHELWCTMGEIKFZTLVROJRAXJPDADPIXKHPUQGOJLGHYWVVFNOBFPWOCQUREYATINIBSSZKHR");
    const signed char tmp_msg_0[] = {-3, 115, 60, 45, -58, -110, 9, -16, 22, 53, 61, 80, -37};
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
    msg.setTimeStamp(0.6123963151254891);
    msg.setSource(10621U);
    msg.setSourceEntity(78U);
    msg.setDestination(63502U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("FBFYRDVAFGGFURDHGALMWIUPAKYNYULMYEARFEATJPSJULTOGCJDBZKQENSIUIHYOXDLFUHVWPHZRYQTPVVIDEOZNDSSQTQLKUMXAOQZVCJLXRKBQFVIZPHXWHTOUKCJFBXETSNRQFPCLBJCZWNMBWHGNTDEQWETOWPCIAHOCLIWOMTNRDCKGRGACOBXKIPAHZBMZUFVJEMEVBDVTGNQSJIQLXKHGARJXYMRKDNXUJBSEYZOSMYWGZSPKVS");
    msg.plan_size = 27657U;
    msg.change_time = 0.18225604217268943;
    msg.change_sid = 2869U;
    msg.change_sname.assign("MMHHSYOEVCQDKHQIGBRBTNVZVPMWGICFPTEKRKRWPSMHAGPDMQRVDPQLGUJSIUPEQGEQIASISXJTLAVNFFXBAXPFPYXKKQLVTRWQQJZMIBNCFKRMFLUTVWCCDZSLTBXCWQAFDAHKTWAGXTCINONKDJZOFLJZESDIUUBNIJOCNLEZEUJXFSIXHBBDJHGHBLYMAYTZOGVWXZSVDKROEMNUUWCPGOWYAYZLONT");
    const signed char tmp_msg_0[] = {28, 22, 2, -46, 44, -111, -65, 37, -17, 119, 120, -35, 111, -42, -94, 18, 20, 74, 19, 4, -63, 43, 108, -109, 126, 3, 113, 109, 108, -97, -55, -31, 107, 106, -127, -14, 35, 70, -116, 101, -66, -122, -6, -19, -14, 66, -27, -1, 10, 90, -125, -82, 71, 74, 92, -55, 111, 11, 100, -58, 98, 123, -97, 59, 25, -44, -53, -62, 8, 22, 61, 99, 44, -72, -40, -101, 107, -65, -2, -37, 11, -7, 2, -104, -88, 21, -82, 46, 23, -72, -51, -123, 123, 101, 114, 48, -94, 100, -9, 94, 98, -95, -7, -79, 14, 116, 74, -115, 95, -61, -41, 25, 40, -68, 66, -86, -41, -70, -7, -119, -86, 82, -24, 115, -122, 11, -113, 20, -40, -13, -45, 21, -76, -96, -79, -88, -118, 121, -71, -110, 72, -112, 17, 118, 113, 28, 63, -109, -77, 27, 80};
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
    msg.setTimeStamp(0.8303198077967879);
    msg.setSource(45347U);
    msg.setSourceEntity(213U);
    msg.setDestination(8864U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("IBPVPWXHFYZJCGLMIKDAHHUXEUXGZFUNTUSUZJFLKKIBRBGQLFSGDZDCSYOCTBEERPNPYTFBZIEEEKHZVDUYGBHIMWXUYGNHJRKMFZRBTRPCQTMJKNDAAJLZHLWPXDVGWVKRATEQOESGCRMYLOHIKYIUWYLXAPQQCZVNJMSVBPDXOIRQARYJNXCGMPLSMNCJWAUCMWFOCSESKDMYFOGOTVKVF");
    msg.plan_size = 36821U;
    msg.change_time = 0.9960805405674819;
    msg.change_sid = 17844U;
    msg.change_sname.assign("OBIKDXDQIPYPOVRMPENPDBYYZURDDUXWLJGLFNROATXPTKFNWKWGGRKWDACQLNYQENCOSWBJPYIAVVVXYWHEJNBQCLGCIMSTASFFJOVEBIAABUISNWKBJMBRTKVHYALCCTMHHRCJFRZXZQWJUSZUQQLDAIPSJTUEOFBFRZDHHKUKMTVWUMPZEUFXEVHKALSQRZGUFZGQRHZLSXNFGOWPEKMCNBMCIHLCMXDIDYSGSJOTVEMZAOPYIQOTYTNVLX");
    const signed char tmp_msg_0[] = {-115, -21, -44, -67, -73, -16, 44, 109, 17, 102, 13, 20, 4, -112, 95, -16, -60, -5, -8, 82, 111, -40, -46, -43, -97, -127, -119, -18, 101, -12, 107, 113, -3, 6, 1, -32, -35, 6, -82, 124, -68, 8, 71, 90, 66, -108, 86, 47, 15, -8};
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
    msg.setTimeStamp(0.9613757242875886);
    msg.setSource(12532U);
    msg.setSourceEntity(244U);
    msg.setDestination(38897U);
    msg.setDestinationEntity(95U);
    msg.type = 55U;
    msg.op = 82U;
    msg.request_id = 62102U;
    msg.plan_id.assign("SQQZNTQFPKUODHIQJGKHZVRIHDBCFHUUKEJSMUEFAAJZPZQLBXDDRWINLEKSGXGBCVGPIE");
    msg.flags = 58711U;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 217U;
    tmp_msg_0.snapshot.assign("YDNIUOVFUCWPQKDROVXGRBEHVEWBYKBERITOHKONJGZHNCPMEIAQSLQNKMJUKRFGMGLPVRPFMFDOTUGMK");
    IMC::OpticalBackscatter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3885654584182918;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LRHCKYSSKCXWCAJNDKMCNLWTBYSGRCROHXBWBZNRNFUAAPLVBJKVFIEWEUVKVHMMFXPLNBIMQRSXYLAPJYTGBSPCAZQPFHOZYZDIOWTEEQWUGWPWXNKLORHVDRQPPZAGDJFLOSCTQQKZIDDUQZMYAUENEYZNGOLEKXVFWMEUFDSDOJTEXTFSMETWOCJCOKIHXUALJGSGTPUXTDGMLZMQBIIBGBCDPYYUTMOAVJHBJHGRFVHVNQIAJYUNXS");

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
    msg.setTimeStamp(0.2072845705695946);
    msg.setSource(57951U);
    msg.setSourceEntity(245U);
    msg.setDestination(32884U);
    msg.setDestinationEntity(104U);
    msg.type = 179U;
    msg.op = 151U;
    msg.request_id = 36896U;
    msg.plan_id.assign("HEEJATCZHDQUPGSLOEVKSEYTDBJZOFLQXGKRRAHMSPGVALZQCQXIBZVQKOSMYQCFUNBVZROWIWIMTJVBZHPHADNWJNCJQMWJOENEHEBJKXWNDLTZZBUILXMQNGHMUNJSOUYBSKJIOVHIYLDGBVRDFCRSTYVPROBQWCTLDIOXIPGDHNYZZVRXGAFGGFEDUHXACNPYOETVUXRMNCRMAKKKBLPXTGLIMUKWAPKUFXQAPF");
    msg.flags = 27627U;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 39U;
    tmp_msg_0.reason = 161U;
    tmp_msg_0.value = 0.6779239369699168;
    tmp_msg_0.timestep = 0.44883912611781873;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YRVJJYEYARSFEOFNIHKNPOMEYXGZNVFKVCKIMBQTGLXLIFODVBEFCGWMRUZWGTCUUHENUXGANOHHJGMWOLPBEWVWBCKWZDJYVHATTAYJPBXAEDMCYRXBXUVZQWSJOMLHWSQLG");

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
    msg.setTimeStamp(0.853440170470883);
    msg.setSource(15397U);
    msg.setSourceEntity(157U);
    msg.setDestination(10291U);
    msg.setDestinationEntity(217U);
    msg.type = 131U;
    msg.op = 249U;
    msg.request_id = 25335U;
    msg.plan_id.assign("BAAUDRQFSDEEYJQGSUYIRBYAGQCVIJLDDCMYBPVNIFMZLRLMOJHVNBXTUHMRCPDRKCEHTJUHGPXVVPQJBMCSZFUYRNMIOXDIDHECJHAZFUUAYVZPURXEVESDOXZOMAKGZOLCOOLSACNSKTLBQFIPTTSWKWMYIVOZGJUXLDNBWHZJWRNECYFIKHKDXUSELPRWZIEK");
    msg.flags = 51083U;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 22679U;
    tmp_msg_0.sys.assign("GULZKIJCNVMQAINTXNPSLKODRSTWFJKNPYCYZRKWJUATCFBVYHSVGSHALBCUHSGBXDLOJIWIDFKLNJAEPUTZBPVPHJZSHMEEWMQMBCGYAWBHTXOXGEODCLEPZRIVGOUDOGIWFNDWKNDQJQBOMJAHOQPQWVAGFKXHBXBDHFIUZNNIRSPQDFLJAKXCZRJOEZYRSQGD");
    tmp_msg_0.value = 0.7987072179501339;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AMVELKJCQTQLCXRW");

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
    msg.setTimeStamp(0.8475917944976218);
    msg.setSource(6822U);
    msg.setSourceEntity(96U);
    msg.setDestination(25133U);
    msg.setDestinationEntity(118U);
    msg.state = 107U;
    msg.plan_id.assign("LBTCHHEQYLDNREDBHWFPZOJUTHFLSYODDHAAPNMBQZEWOYTGNSGQVCNUJJKRNZBDWKFXHCCYXQETJBAWWRGWRROJUSPUMYUBCSMLIWAWZKEDZDRZLVZBMARLA");
    msg.plan_eta = 2083492000;
    msg.plan_progress = 0.9443807103857431;
    msg.man_id.assign("OBYCCFQTLLTPNKZKTRTUVLHZAPWOMRVXYMSRJGSSJDMQYWZDALF");
    msg.man_type = 30218U;
    msg.man_eta = 378701874;
    msg.last_outcome = 118U;

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
    msg.setTimeStamp(0.7333656390922387);
    msg.setSource(34465U);
    msg.setSourceEntity(75U);
    msg.setDestination(2277U);
    msg.setDestinationEntity(224U);
    msg.state = 178U;
    msg.plan_id.assign("GUZDYPUPFJBZSRWNNRVYDDYPGMFMJAPQMLOQHDLSTLEIKQEWRVMCKFUNIEYVFVSGUWUFQCXMWGJEYJXLXDIBGFAOCICCBPAUVODBHOENTRTKFJJZZNVHHBBVCSQYRJNNWHWAZXRLMPLGZGBSZIXI");
    msg.plan_eta = 1680788875;
    msg.plan_progress = 0.3626846632745323;
    msg.man_id.assign("RYBRNGPUVBAKQTZYJSOLSDEJLSDPNUWTHJDXCFZVUPVXXMFEDNZNPTZQWXAXWPFHGLXMZCQKYFBISCODZYPGMQCKEVGKJFERILHNPGWOFQIIGKJJEBLPW");
    msg.man_type = 65394U;
    msg.man_eta = -2143121215;
    msg.last_outcome = 213U;

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
    msg.setTimeStamp(0.17369127285518438);
    msg.setSource(18937U);
    msg.setSourceEntity(92U);
    msg.setDestination(51002U);
    msg.setDestinationEntity(50U);
    msg.state = 81U;
    msg.plan_id.assign("IEGJDNXNWDBQBIQNQJUBOGQLCNXYRGFOPVGLPYYVRUYKHYKTPMWSFLAAQMFCTWXWYJQTENMYSZTVCSJZEHXHZIDMSLRDAPQPGJZSMOPIOHGKJUFODFUCVRONADRHIIEUNPBOULGTIDJAALSIHCSTLUFKRTHGCFFVMWEFIXCVUKNVQHZRBPKYKETWUDEBTLEMROYJKSU");
    msg.plan_eta = -1046604416;
    msg.plan_progress = 0.3563201217573154;
    msg.man_id.assign("XKQFDFTWJSHVJNOQUHCNTAHDVNELDNRRNGQHZOELMOXUWEFQISCXHJWLTJWZLASCZSMWTCXPYIGZSDVGBJPPZFFSLCFRPZUTGZPIWSQIYKTXFHMOFDVPWYYDEMYMXYAIUPWNVBMYLVBRNAZCNESQHRAXVIOUSHDKMIET");
    msg.man_type = 1864U;
    msg.man_eta = 1916443080;
    msg.last_outcome = 173U;

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
    msg.setTimeStamp(0.06148684991591702);
    msg.setSource(14841U);
    msg.setSourceEntity(155U);
    msg.setDestination(62662U);
    msg.setDestinationEntity(253U);
    msg.name.assign("EHZWUAGXDDLWTAIXQJYEJKAIPQXUVNPRYTETCRLBPPRSJLNQBAFILTUKKWVRFYQUFFNJOGZUVPFH");
    msg.value.assign("GYKSOUKUEBMEQDZRCUEPJHTNISNPFBBNPFGNMTKIDOFJCRMCAGCHEQDISUVWKYLNQGTXHMZSDSDGWVDNHLAXHWQGLYQIHVOOHFPGGJJIHNCILRJFAITQKLERZKXCOZJFVOLYWBUVPMRSUQREBBNUPRNXP");
    msg.type = 136U;
    msg.access = 221U;

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
    msg.setTimeStamp(0.2582562811753629);
    msg.setSource(12771U);
    msg.setSourceEntity(248U);
    msg.setDestination(60561U);
    msg.setDestinationEntity(61U);
    msg.name.assign("MLBFMZKSKDITIQNCAAFQHUVVZVPWTTVQJHINQGYLXIEMYECXLIYBCYLBYCCWOJMRANPRSMOMJNWTFVUCFVSDXYDAPEDMOQQAEUUFJFOLBBMFZGZSUBJOHYHGDLZPZQXO");
    msg.value.assign("KDVOKHAEWD");
    msg.type = 15U;
    msg.access = 80U;

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
    msg.setTimeStamp(0.42715368777237483);
    msg.setSource(34734U);
    msg.setSourceEntity(21U);
    msg.setDestination(49941U);
    msg.setDestinationEntity(147U);
    msg.name.assign("GNKFPAYSNQZTOFNZJYNATQOLAXMRWBGDDSIHJCVPVSYMBMURPCWEBUEATMK");
    msg.value.assign("SOABFTOFZRALFIZPQYBWAGIHMFUMCYOIWSGJXDZQCMPCGLTODUVSYNMFEQWSWCIJEBPDHKKJULQGQHTVMKYHODETNJOBCWNIXNIMNBEPRUYATWPHLKFVREYEHTBZZEOZRCNYXXUUYJCGXHKVDZLSWXNDMBTXVAPDOWQLSHVRYHQBFPRFLVGWRVEALIQREQMGTCUGOD");
    msg.type = 215U;
    msg.access = 165U;

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
    msg.setTimeStamp(0.5878770038236094);
    msg.setSource(704U);
    msg.setSourceEntity(80U);
    msg.setDestination(31083U);
    msg.setDestinationEntity(153U);
    msg.cmd = 226U;
    msg.op = 65U;
    msg.plan_id.assign("QQFYHNOHDAPJSFVEFRIARZYMEYOWLBTQIIQUVTLUDKOSEF");
    msg.params.assign("QSLZDUCYLMGEBNWPMWNBXDOIDLETDAHNKDTXNQYFRQHUFBAROXFLTOISTUXYPQALSGFAZMJ");

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
    msg.setTimeStamp(0.31688303609219737);
    msg.setSource(15795U);
    msg.setSourceEntity(163U);
    msg.setDestination(48498U);
    msg.setDestinationEntity(178U);
    msg.cmd = 84U;
    msg.op = 27U;
    msg.plan_id.assign("ZQSFVKDQVTCHSFHRMDIUNIGWINLVDRODSSTIVYXURFONBEOPVBMGDHTKAIIFDTEOHIACWWHQHBFGNYKDZXYQBVGCYCHPYAABEFJPFPDBRZQJJPWOMZYYXQLOEWGPFGMLRHUELXOLUOFNJSROYUMBNXJMBMUDBK");
    msg.params.assign("PWKUPZKZOQNQWZWBVICMZUUTLNTKOTSPKDBVIKSHCOAEBYUQVRJAMRXFHGIUDNMCHLNAREWJYWUCGJZWMJDGXOQSAFSLDIRZIZZTLBENSLQVAFJBHIOPCWSHFBTJRHCGYFVVPHDUSLFMKYLARR");

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
    msg.setTimeStamp(0.4074848817509107);
    msg.setSource(48812U);
    msg.setSourceEntity(2U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(35U);
    msg.cmd = 163U;
    msg.op = 216U;
    msg.plan_id.assign("IONIJMUWKMHCNSCQXGHLHLDNRIXLQBGKCUHYENVDJROBTRJISFWDYDAXFMJ");
    msg.params.assign("QHSXMRDNVJTLOHBAIXSEQUNVQLJKYDRMOBHSMJREHNRCNGDPLCFNUXTFKYFDJPXEDYFFFCVVKJTTCMLGBXETGGPDQBZXDTZPYPWGCOJLWMRZGUOTOZKALASTCECIMKIWRKJRWSWGYYTZOFUUYNXYHAPEMUEXKVLDVXSICOZZHMQGPOHGFOVRBWDVKZNIUGJIEPSAABTQLHDKPPQIVYLWNB");

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
    msg.setTimeStamp(0.13748939244831615);
    msg.setSource(19610U);
    msg.setSourceEntity(81U);
    msg.setDestination(32434U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("UYCIZEHSVQUZJTSWLNKOSLMDDLQNJPLQIMORZXMXTYKTFXCOZXRBKZFWPYZHKVNPEGYFBUBELRXDDHIOSMRYRMMBTNUSYVHDGE");
    msg.op = 240U;
    msg.lat = 0.1596280083948718;
    msg.lon = 0.6667759775049208;
    msg.height = 0.2675251972671623;
    msg.x = 0.6518881790276974;
    msg.y = 0.6018574619354264;
    msg.z = 0.2875726754602831;
    msg.phi = 0.6916742253481823;
    msg.theta = 0.8561599045331294;
    msg.psi = 0.5330733546697601;
    msg.vx = 0.10428279039953647;
    msg.vy = 0.5276530544982323;
    msg.vz = 0.47572129904194993;
    msg.p = 0.939923833877298;
    msg.q = 0.5788296211642108;
    msg.r = 0.24535639650558827;
    msg.svx = 0.6635310802675133;
    msg.svy = 0.41968547231304953;
    msg.svz = 0.8668908992482433;

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
    msg.setTimeStamp(0.6885393170558982);
    msg.setSource(44713U);
    msg.setSourceEntity(121U);
    msg.setDestination(39441U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("YNSGZVLKFCPBIDRQLDTQLHFFCBHWCDMJBFATYPVDQUHKEXJVNGGTAPTRCUIOPTTYOWQIIMVLRAAKBVVJTZBGIDOHLGDUOAPWTRNEIEPJNZCKEMTAHQNKMQWUBOYYXCXEZGSRMSEKZAMYAPDXDKRVLTNFYUFSIZYWABKNBMNVFCQSWQGUZMYUSSLHXSYFOQIWMHOXFSE");
    msg.op = 101U;
    msg.lat = 0.09779876501843132;
    msg.lon = 0.8339760310287139;
    msg.height = 0.6190818281747282;
    msg.x = 0.1927814155562232;
    msg.y = 0.9418212567259789;
    msg.z = 0.3362051250267928;
    msg.phi = 0.9604704302812642;
    msg.theta = 0.7797388985938121;
    msg.psi = 0.7610136936403651;
    msg.vx = 0.527736931282825;
    msg.vy = 0.2892081237959745;
    msg.vz = 0.06159861834135505;
    msg.p = 0.06331315987658881;
    msg.q = 0.015506815145319708;
    msg.r = 0.8295943386178491;
    msg.svx = 0.5765427881597566;
    msg.svy = 0.7578015939997806;
    msg.svz = 0.6846369981434901;

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
    msg.setTimeStamp(0.4932480553979953);
    msg.setSource(1662U);
    msg.setSourceEntity(117U);
    msg.setDestination(11291U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("JCJRDNKWLMSZQIQCJLTFATNORMIAGADZXVCWKZCRNNYBEMAUPIFJENZTLYHRWSLWBJFVBZTIAKSCFYBFSGATSBJHDIZJGUXCYIDOCHSUCLUPKAHTXOKXGNLOXHZEGMCBRSZSGPTMYVQKEIBQDMFVIRIUDDO");
    msg.op = 50U;
    msg.lat = 0.8298745466601709;
    msg.lon = 0.1350253876787897;
    msg.height = 0.5465188790681715;
    msg.x = 0.6203174816472178;
    msg.y = 0.6992658698181469;
    msg.z = 0.9279355508811469;
    msg.phi = 0.7074498965991446;
    msg.theta = 0.8018414768540891;
    msg.psi = 0.9202479821648926;
    msg.vx = 0.8616738133537704;
    msg.vy = 0.2922543785338092;
    msg.vz = 0.30298145783651553;
    msg.p = 0.9021031382120357;
    msg.q = 0.09253207029228583;
    msg.r = 0.5994279842761009;
    msg.svx = 0.011469519128532557;
    msg.svy = 0.2412259636919104;
    msg.svz = 0.49987043997336533;

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
    msg.setTimeStamp(0.5831099146581069);
    msg.setSource(28991U);
    msg.setSourceEntity(219U);
    msg.setDestination(18981U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("BHRRBSDQMKVTEPUUEQTRAHLTNCZACADKAHIADWLORXSJSXEIWROMGBHIIWCXJMUKTMYDQLNNFWGBOHSSKJKNKEDVJCACFIEPNXTCJJBBJSLQWGVYHENDVQZOFHMUBZVFYYWZWFQXDDOREOXMQTUDZPKXCMIQDUZOKCPCPSYABIPOLYYJFRZGGJIXAIGPVZSTWOUGROTHENWLUISFBUXTAKN");
    msg.type = 129U;
    msg.properties = 96U;
    msg.durations.assign("NEDSOWGCJRICNRXXVODPTASNHSMIKTGXLPZTVAQZMBQRRMGQAJPSFFWHYMWYCEVCMUVWDOYAAOLIXBHVPESZMBTEIJETZYWBMJDFMLDCGPKHONAOFLZGINFYXIUCLTCIGXIBNUHXWOADSJNRQKHBHBNKURGZRMLGEJTVOSQEXKZJTDOYVFEUCPTVBQYXJPLKWNLUWXFKAJCFNHQZKRJVVYQRDDLQEPFUKKGUZSEFLIUAWHORIM");
    msg.distances.assign("BQZVTSKWZJSGIUMMFPMHXHWUSRNQGOZLMAFAHVCJFXNFXAAPJTNYZXAGKSKGHCVKJMPKUWXEPJSNAXHGPRPIBUDJDONYOMKTBALTROPJEPCIIHBXGWGTWHFQLWXROMOBZBCCRZLUVSVDRCE");
    msg.actions.assign("RELZKNKZKWYARQJCEKFZQTBQNRNXJPFLZCMVVUBYGHBPMUVYPNZCQITEXLUBYJDHIAJAIXDWJIZLEXCKGCUHGGQXGDLHPZCTWNFFQLVAFTQSBKSSUTWUXFSYBPSOIJEYDBPUKWTRPDVPINRIAOFBEOQYJHTOMOWMXJNUAMPOHQJRMOGBFJYRFGZDCANHTMMCCMLWFTD");
    msg.fuel.assign("HSIMFDURBAIPHIIIRVZBKZRHYWGUSAGAFPCOQEZDULJMOCVDIGGRHEXVJ");

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
    msg.setTimeStamp(0.22876396860557524);
    msg.setSource(8915U);
    msg.setSourceEntity(218U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("WAXFOFEVQFHNKWZGRAWPIKBXLUINTBSDTQKOJNDBOPPICQHEFIBLQY");
    msg.type = 141U;
    msg.properties = 116U;
    msg.durations.assign("VBNPPFGATJCLANRCZWSMFBKLZSAOMAENFKZUGXOPGWYRAUJXEIZVBFHEACUQIDCCMANTBFWBELBJGXEAYIRDHLNYMTPXTTKOTKVJIHSHSDYUQKSIDHZVGLULVHKVDIWOZJNVQGWXWTLHWJIVCMOQEJNPXTDUMUJGIBSO");
    msg.distances.assign("PHRVVMMVUTGOULHUVUBLOCSCKQDQPSY");
    msg.actions.assign("TNUPWOYEZRGJIPJNED");
    msg.fuel.assign("QZYRASRYFMXTZASBJGTIDFOMOYFPHEMNGTWSZOTZDRLAEZBBXNETZQFJWTMPGOMUHZJRGDWPYIRLLEVIOESYUHIVBUPARQUCRLEGJQSCVKCKXSFTBXYCHUAULLJJESP");

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
    msg.setTimeStamp(0.3950306863619627);
    msg.setSource(42882U);
    msg.setSourceEntity(31U);
    msg.setDestination(7511U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("TCQCSWPMXXTKUVTPNNEAICSGJDZAQRZEPSORJMYFKCAYYBWSEETQNWAUGEEOFHYZZEHLUGUW");
    msg.type = 133U;
    msg.properties = 36U;
    msg.durations.assign("SHGGMOOQEVURWXOIDTZKQANUNLTUVOQETWCOBSLBEGSRJBKJERRCYXHUZGZPXSMKKKENYJAQKXXRZPAJJEWFEWOPSTNZWTDJXGPQIIHXARLCSACITVZD");
    msg.distances.assign("TCHTMXAKTDPHSAGRXBLGTYAJZLXNUQORVJADUIDUSHGJFYRQEDX");
    msg.actions.assign("LWVLOFVRUXNWSMUFRZYNPKMQTKIDRYBJUGYJTPDIYYAPEPWFAONGVDIQFDORTZBDKNNHQRHJUGIJQAKEVAJHFCBHXIZJBISBERMQVFYGDDXLDLYVUYGZVBBKTNUHCBLCHFHJZWSPYIWPZLKICGTAOMABFNXZGMEUJDOBSVZRXGWTCRKVXHESTEFAMCLRTACAQOLHPNJPKUIMQDXMCPXZVKPMOWRJCSNFSMHKCSXTNLTQEXYISEUOZUQGOW");
    msg.fuel.assign("DBQVTBPULIXSOCAUZCXOTJHVXNONVOHRHCDZHMLB");

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
    msg.setTimeStamp(0.4019982692273658);
    msg.setSource(166U);
    msg.setSourceEntity(168U);
    msg.setDestination(36849U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.790646499520542;
    msg.lon = 0.10947036018820278;
    msg.depth = 0.9840519544216417;
    msg.roll = 0.768044280246036;
    msg.pitch = 0.835667071358528;
    msg.yaw = 0.6844606974972401;
    msg.rcp_time = 0.3650580389505934;
    msg.sid.assign("UMQHNHQLJOEVDNUWEAIMNGQZYYFTHWELIHNONTXUWGYYLIAWNTVTLDZDQVQRRMEMUWYTCTBADGAELOKZMBJFKWATSZCKXHBPOERSHCRCFVVMRWAFZHPGUSFQJFRCLXAGKDWBFPBIPIDDPYCUOXXVYEKVKRGVRZSXUJATSORELEXWCJKZIGSJSQOGVZDYMOYSNIUPSPMNCBIFY");
    msg.s_type = 206U;

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
    msg.setTimeStamp(0.5663829161048372);
    msg.setSource(12863U);
    msg.setSourceEntity(60U);
    msg.setDestination(32641U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.8363643324147446;
    msg.lon = 0.5721358586513421;
    msg.depth = 0.7050864830429374;
    msg.roll = 0.34273605732630263;
    msg.pitch = 0.2070986842707162;
    msg.yaw = 0.18900473568985943;
    msg.rcp_time = 0.7479108634111701;
    msg.sid.assign("YTNDHVSWQBYNNXMOKPHGPBBSKGLWIPEGQKXWWZYRNKSZPCMUKZLTILEUBSAYXRLULFFLHEI");
    msg.s_type = 19U;

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
    msg.setTimeStamp(0.2540767685680717);
    msg.setSource(12038U);
    msg.setSourceEntity(24U);
    msg.setDestination(31283U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.3662411718957751;
    msg.lon = 0.7071314207272557;
    msg.depth = 0.23075065325714572;
    msg.roll = 0.9764849211026744;
    msg.pitch = 0.4442565684282872;
    msg.yaw = 0.22256658898547754;
    msg.rcp_time = 0.8354806689140118;
    msg.sid.assign("FDMOSLIKNRAWAVFRWAJNHNTDEPSHGMGLBZUPVJXWCXJXQCYQYQYGUPRFGPIHIQTOATWRDWHLVRNBHAVWZCARFEZGKTDJLNZEOUGOCOJMLEBQDTYTQFKOQQBHIVCNOKKHPIGESEIMETSLKMUPBCWENGZMXDRVXXYUMZAIHUXBAKYDROFIBPXZALSZKXUYQKLXGWSHNAPJCWKR");
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
    msg.setTimeStamp(0.5748462240945671);
    msg.setSource(58335U);
    msg.setSourceEntity(31U);
    msg.setDestination(53487U);
    msg.setDestinationEntity(245U);
    msg.id.assign("JTMCYYBLXCWGFGZOWMJDEZALDOGSEVYTAKJJRHRSLBJQCZPIPITLRKJOENGVIYXDGEHZKFQYVEKOCVONSWUVFHESOUPKDUQSXIRDTERGGZZIQWPNHUUIHQKEZLNMVDZPURHTGRNJRF");
    msg.sensor_class.assign("AEFXKFMHCMKFJEYPPCUHQQXNTGGBYEFFJUPNTIU");
    msg.lat = 0.9016490954477273;
    msg.lon = 0.9712370988357646;
    msg.alt = 0.9864423491009495;
    msg.heading = 0.5830476107204596;
    msg.data.assign("PAGQJLEQCBEZMXWBWWZAXFVUEHIMBKJZPLJDEILQGNVOOHYGYPKCXUZHFOALJRXDHUTGPSTMYAUWDBGPVVTXZFHRUYNGHFOARXKYGGCZVWEXMBWZ");

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
    msg.setTimeStamp(0.9970418656096915);
    msg.setSource(43874U);
    msg.setSourceEntity(65U);
    msg.setDestination(3328U);
    msg.setDestinationEntity(51U);
    msg.id.assign("WOJFMAISXJADVGFLYHKIBNASPVCJQLJQKFYTGXKIJRPOATWZTIVAYMDZRYELTWERYBEIDTHFSQBM");
    msg.sensor_class.assign("XVNNWBXQOQVAAOZWPSKLZFBKEYKGEGBENVBRTJBJCEYODSKVGMXONZLAUMELHQUQWYYHGTQJITGUHATXOMVLDORUDDDA");
    msg.lat = 0.45879564643516857;
    msg.lon = 0.23682977139252737;
    msg.alt = 0.8935284576736022;
    msg.heading = 0.9696212719203803;
    msg.data.assign("YLJJDTKLGMAKTKMNVCBYBJJWNUDSEZORCWOFPEQODCCBCXBGPJOYIYPIOWOIFHGNHKZMNFILESXATTDCUQRGCXNLZTJAMZNDJQAGNMPSPUVPWLHOOUORXTUXDNAUVEVIQCXREIVMLXHYYPIWFKENWCWZFSQEJSQG");

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
    msg.setTimeStamp(0.26081528139428045);
    msg.setSource(646U);
    msg.setSourceEntity(48U);
    msg.setDestination(62734U);
    msg.setDestinationEntity(18U);
    msg.id.assign("FXKRXKGJFPLHHNACMUMBLSQYTGASYNUDSNVAWPUCCAZLNPJYVZHRDFEGMCGEVHPZWZZZOKEQFFYOHZUPIJDTKCQQXDFUPVLOBEAIDXKAYJSGJWIUSGAMYRSNEDWJQTTNIGBNHQTQLABTAURDZBKNNNO");
    msg.sensor_class.assign("BYZIXTJNJENIYNJJVJTDNYWVEDMRQZLDTGTVFRJGJNIARFIZQALMHGHCOUGUSRDXVLYELPZTNPXZXMGHUUKFXTBPVLMYJCKDSLLRONEPARRETIRWZAYMKQOQTFRVFGEMSVAUOWGCCHNIQHYALQDUASFBKOBPKHSWDIEVB");
    msg.lat = 0.22100441715884944;
    msg.lon = 0.3772668918874641;
    msg.alt = 0.8758737796046949;
    msg.heading = 0.9176840408910822;
    msg.data.assign("NVJGHGRSUIEPUFPMZPTHITCERYLJLVDJPPWOBVDHOACQHETYWKGCEUBOXYLMGYRKNMHASCNVUHFFGXHR");

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
    msg.setTimeStamp(0.7917328405649936);
    msg.setSource(50050U);
    msg.setSourceEntity(247U);
    msg.setDestination(27940U);
    msg.setDestinationEntity(32U);
    msg.id.assign("NBAZDMFILLWMEVCHIEFUDPEXYYEVFJXDFDGVSUIEYQSQJIDHZAMXWTROKMGFESVCIBNFQWGWITKMARBPPRSSLIQJVGWLGVMXZOTAQMGJQYKSOHICCNZODFR");

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
    msg.setTimeStamp(0.11619861956214539);
    msg.setSource(60715U);
    msg.setSourceEntity(94U);
    msg.setDestination(57767U);
    msg.setDestinationEntity(59U);
    msg.id.assign("DGKIYGQCAMNTVLWGKQRFVMPFYOIFYMTDKBIVOTUOVXQGNHWEPQMBRQXBAEIGEGWWXJPWXIGTYAKWRHURFZSDKWUFBCDGRBDSCBYEUABHLHP");

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
    msg.setTimeStamp(0.8426448730992949);
    msg.setSource(39895U);
    msg.setSourceEntity(75U);
    msg.setDestination(55461U);
    msg.setDestinationEntity(218U);
    msg.id.assign("TLAUPBELWVVTSYLZHWVBSGEFZQWJNLDMMFITXRJMVKQSWACLWWCSCBNIREUIODDOKLAQILXLZATDIZUB");

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
    msg.setTimeStamp(0.7494989410609768);
    msg.setSource(6353U);
    msg.setSourceEntity(26U);
    msg.setDestination(51505U);
    msg.setDestinationEntity(14U);
    msg.id.assign("LGKFVMQBCTBCQWIEMQKCGEESCZZCOAACQYZDEAYGALZMKJSZRLPSYYOHOGFKBRMSXWWVIRPHFJOSFVXVDAFTOIIMWQJSQZZQKVGKTSRNZPMHBXRDHUGDURWXBTNREBDPDBWVQDFDPCGBEMEIYJHWXXYFULT");
    msg.feature_type = 254U;
    msg.rgb_red = 3U;
    msg.rgb_green = 65U;
    msg.rgb_blue = 192U;

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
    msg.setTimeStamp(0.49334770918896287);
    msg.setSource(16929U);
    msg.setSourceEntity(20U);
    msg.setDestination(61914U);
    msg.setDestinationEntity(12U);
    msg.id.assign("ZTVOHJFZCANQWEARQPEUVBYKDMCINQXBTXTDTQRBSHZUMMHZIZZHH");
    msg.feature_type = 67U;
    msg.rgb_red = 229U;
    msg.rgb_green = 140U;
    msg.rgb_blue = 144U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.34018606382401784;
    tmp_msg_0.lon = 0.9220423989361245;
    tmp_msg_0.alt = 0.63793085467827;
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
    msg.setTimeStamp(0.43661690609214354);
    msg.setSource(24010U);
    msg.setSourceEntity(190U);
    msg.setDestination(13146U);
    msg.setDestinationEntity(64U);
    msg.id.assign("KDSOECPDNCUUXNDH");
    msg.feature_type = 129U;
    msg.rgb_red = 104U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 227U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.19882347022981195;
    tmp_msg_0.lon = 0.9663502624092993;
    tmp_msg_0.alt = 0.03994740469613911;
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
    msg.setTimeStamp(0.7740704453170075);
    msg.setSource(23608U);
    msg.setSourceEntity(20U);
    msg.setDestination(16736U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.8106029272773364;
    msg.lon = 0.36857268908136487;
    msg.alt = 0.9099370829162818;

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
    msg.setTimeStamp(0.4877058975631855);
    msg.setSource(29551U);
    msg.setSourceEntity(199U);
    msg.setDestination(44634U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.9803318081076267;
    msg.lon = 0.812669817961255;
    msg.alt = 0.034023605737414586;

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
    msg.setTimeStamp(0.5920244938318537);
    msg.setSource(6718U);
    msg.setSourceEntity(3U);
    msg.setDestination(57159U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.8628085905492662;
    msg.lon = 0.4318365587728775;
    msg.alt = 0.6164289249010206;

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
    msg.setTimeStamp(0.2890362783626982);
    msg.setSource(1594U);
    msg.setSourceEntity(242U);
    msg.setDestination(11030U);
    msg.setDestinationEntity(88U);
    msg.type = 50U;
    msg.id.assign("HJUVYOWUMFJULDIIFRVLTQEUGSPEOCLYUYAPJFAZKIWNQJNHEDMPNOISARBZSMBOULVPOLOOZCAELQHBYAQYPKCWPWEDFGXDSNCNCGHEYXNBTFQOPBKCYBTEGHMKKAWG");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6536027328339831;
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
    msg.setTimeStamp(0.9443168279843472);
    msg.setSource(5768U);
    msg.setSourceEntity(113U);
    msg.setDestination(633U);
    msg.setDestinationEntity(47U);
    msg.type = 223U;
    msg.id.assign("JKCRHBJNZCNDDGOBSSTOJHELRYFUMAXUUQHDRVUCLKKLISPWGVLEKQWGHKKLVTRODMGGCXUTWEHXIPSWPCNCMBLJBMCZCBGHRJFHAQFPWVFNKXXWVUJQGENIBCRAFVJSOJONUQPXMJSD");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.44159059833383685;
    tmp_msg_0.x = 0.26688365554589943;
    tmp_msg_0.y = 0.41345150073817427;
    tmp_msg_0.z = 0.6325240858594642;
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
    msg.setTimeStamp(0.6462244066058007);
    msg.setSource(48463U);
    msg.setSourceEntity(110U);
    msg.setDestination(10331U);
    msg.setDestinationEntity(146U);
    msg.type = 134U;
    msg.id.assign("JRKNCZVZTIBOYWSXW");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 45462U;
    tmp_msg_0.sys_dst.assign("ZEKGPOVCUXXDALJKCSZHQGTIJZECGMRMWLOJITQUORMFWBRBJDZPDAIKSKUXFWHKOTUOPJOKVSUECTPAIKUZNGTEIHUIREMFCVARNRFYASEMBXGGLQVPTKMGYHAYBGNGWZQDCETNQFNPXPNMXHBALMIFVWMGCHEPVUBQVYYRHVIMWOLPDCQQQSXDDAHLOJLOKSRKWORHEXNVZYIWBDZLFYTZSXWYJDSJJPQNUERBZFA");
    tmp_msg_0.flags = 145U;
    const signed char tmp_tmp_msg_0_0[] = {89, -81, -10, -116, -95, 61, -37, -71, -25, 16, -42, -83, -125, 6, 37, -83, -68, 64, -104, -126, -106, 54, -90, 50, 43, -58, -19, -31, 115, -18, 89, 59, -37, 72, 34, -120, 24, -125, -24, 51, -126, -91, -27, 79, -20, -124, -110, 38, 113, 124, 50, 67, -76, 1, -11, 35, -18, 11, 58, -55, 54, -68, -102, -123, -37, 49, -61, 52, 48, -54, 112, 24, -19, -108, -110, -114, -46, -31, 22, 39, 10, 71, -52, 8, 71, -38, -28, 36, 41, -82, 40, 112, -3, 57, 24, 98, 70, 34, 49, 125, -10, -15, -39, 5, -100, 94, -26, 83, 89, -21, 49, -11, -75, -37, -60, 111, -104, 83, -96, -39, 14, -1, 69, -42, -41, 31, 111, -59, -102, -4, -120, 83, 0, 19, 91, 27, -24, -33, 8, 36, -8, -52, 47, 5, -97, 24, -34, -50, 56, -82, -128, 12, 45, -3, -62};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5661792616864864);
    msg.setSource(16299U);
    msg.setSourceEntity(245U);
    msg.setDestination(26634U);
    msg.setDestinationEntity(26U);
    msg.localname.assign("AMOSQJXJNYCSKFPUBYMMRKLHAGTZLLDQTNJLDCZZJVLKJDORGWPLEPEYKXIPGFHIRXWVNCGDMMWK");

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
    msg.setTimeStamp(0.3146090070173089);
    msg.setSource(40345U);
    msg.setSourceEntity(119U);
    msg.setDestination(42080U);
    msg.setDestinationEntity(174U);
    msg.localname.assign("HHOETNCUINXLRJRHKGCGZXJCIXKTZKOOEPVXNEYILUAFPUMFLF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AJLPLMCHDTHJLYTFYBRSPMACOKJDKKBBYMQWIQFINQUUMEJFAYQHKPWXHNSPQBVVBKUFXPBGJIIIWXENWSSVRNILRUACQUVABIRIDWHCKCDRYNKGAJVKQZHFNPQLUXOTWNZHJEXHEWNEVUTBOL");
    tmp_msg_0.sys_type = 221U;
    tmp_msg_0.owner = 5075U;
    tmp_msg_0.lat = 0.15891139442858293;
    tmp_msg_0.lon = 0.024316074723865988;
    tmp_msg_0.height = 0.05340115190178529;
    tmp_msg_0.services.assign("SMZMBXUSGPDJRVNZSAYAEYFCCQIEHNDTQSTIUPAWAQIIGVIJBXCKGZWJFDVHTKVUXSGNDSEGDPPEHAYNXTVJKIZKYDPBDMHFNWVMEKQJBGPFNLFYKRPFLGUZNQWUOIRFRANRPYLBWVZLQOCEWOUUZBKVTMMXODROPQOVCTJWLXRJCHMDWTOMSQFJBOORPQCXRXLKCLHFWAMSBYGYAXFLUINQEGBYTTERHZEZ");
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
    msg.setTimeStamp(0.7458751312075226);
    msg.setSource(47890U);
    msg.setSourceEntity(205U);
    msg.setDestination(48087U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("WMFPDTEACFSYZSSUSMOFUUPYBTSLTNIIXRDQVVRPQLWMIQNXSKNPZAANTIXILZFHSHXCNYADJDEAVSHJAPOVVJYHGECVYOFSSNGTKJFPFQZVGROQILYEDOPGTRBMCJHWYWDOBGEYAKMZKWXBJLLQEPJOIBRCRODGVJLRHQCNNHMTTCWKJUDEBUYRWGUXQQMBMTKILRZXEEJFBIMHEOALBCHGDZUURFWNHCKVMIKGNWWUBKATXAKYDP");

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
    msg.setTimeStamp(0.36575971502664917);
    msg.setSource(33480U);
    msg.setSourceEntity(223U);
    msg.setDestination(41851U);
    msg.setDestinationEntity(225U);
    msg.timeline.assign("YTHRISSQUBJFPHLNSVFWLDCTJENQSFADGIZCWNQXOGIKMERCSUFUTIHQVIRBTVECEDAZBBWQIVRSIXGQDYBFBHGMXWQRKPYVMNKGKSEDPJYOMZEXRGCEMPVHZLSFLQPSVEFJWKAYKAOHYJZERWZLPDOCHPWXUCBUIUIWVLGPZDYXLFYTGWCXBQVXZYTQAKAJXLVRJXTMRNKOAFHTHMIUBACNGTNTKDLLOCGUPNMZDOWFA");
    msg.predicate.assign("MLKRWAZBYRTUERSAIDIWHKVXEBJRFXRUDCMALOAQUCASQGYBPHKBBTJMKRCTGKWGFLJEWOGHYQSNUVXYDZHKMEUPCSXICCHQPWCQUXYNITMNYJTNDDEPNXOUYVOKFGSGWEFNXVIFBHCFYPIRGSJWKCGVJLARVURZTTLKAKDDLADUZNMYPZINDYXSVOBFMEZRQ");
    msg.attributes.assign("CIUAOFEGHRYMGPT");

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
    msg.setTimeStamp(0.8479716115378553);
    msg.setSource(592U);
    msg.setSourceEntity(235U);
    msg.setDestination(56653U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("JKJMHXPJOTXLBJXILTWSOYJFHBLGHTSFULFBXVMH");
    msg.predicate.assign("LVBGTDYLOCWBXSVNPNIBQLKNXVVHC");
    msg.attributes.assign("IGNQHBLUFBDEAEXVBOMUMZLPZJZIXXVAGRTJIIFXAVQESOTYSIECXSNSKUHXYRRCFPYIFOEOTKWJTJAREPHOLMDQGWLKCZTKBOPVHHLSLPKSQDDENVTDAOKGIQJDCGCOWPQJOWVZTMZGUHEQKYADMCHSUFXBYLJYDX");

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
    msg.setTimeStamp(0.5014285227816725);
    msg.setSource(6362U);
    msg.setSourceEntity(42U);
    msg.setDestination(30438U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("JDJBAZRBQNUXLITHNGIYTLLOGYMTSVQWYKTUOTAYRVBIZW");
    msg.predicate.assign("HFUQAVKNUCWUQXGAMQSKESKDCMXNNAOFAXDQFNIHTWKKILWQWYWUUUZVKJBMDQEJZHECCKPXOAWBSLVVKZOFMSBQAGYDBWZWZEYLPOGJSOINJZHFHXBATORNCLBDRTRPCYLILEIMVPHOFRUUYRMSDHLEZHKTACQMJDIKNJZGQIISGDJCVVUGAFPZIJNYWLGPFJCLPYCHWTDTYBGLSROMFGUPXYTSEEJVEYVXTPERMONHZBROBI");
    msg.attributes.assign("FFZJWEQRXVIZIAXCAFIPRSIRULYLTBCHUKPSVBWAKNOVCZKQAGFWOOKVHHWHDKSYYBEHWLCMATEJNFCSMWAGTNPJPEVYRBOEJGKVOQJHXBKJLYURJWUIKDTAVBZHDVGIXJYFTQIMWPQCURTRJMMGDDOLGOQRDASUWNNGXMUTX");

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
    msg.setTimeStamp(0.3149609895540879);
    msg.setSource(26190U);
    msg.setSourceEntity(224U);
    msg.setDestination(49784U);
    msg.setDestinationEntity(140U);
    msg.command = 79U;
    msg.goal_id.assign("ZUMBKLXPJVHCJUZUIAOGCEKOWRLSETNXJTQRQNKAAFHCYWINGBVAYCAOFINNVBWTDWDYQTRXRBLGPMTCGQIPFPGBADXOMAELDEIVZHMRMIO");
    msg.goal_xml.assign("DZOOUZMIBTAVAKYZIPRMJTZOCESYCFVRUHNQFZDDWNYFCJWKABLRZELXKNGSGVHFIQGOADDFVTJPODVHBWXDXMIEXWYCAHSUJBKLRCMRWQZHTNODDEQKFVQIACGNFLKGVXPVLKIINQUVQHZUQPWXBUGY");

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
    msg.setTimeStamp(0.23901689365637158);
    msg.setSource(34137U);
    msg.setSourceEntity(120U);
    msg.setDestination(7543U);
    msg.setDestinationEntity(72U);
    msg.command = 161U;
    msg.goal_id.assign("TBFCNIIRJGQWHJFXCWFJBZDXAXRXMVIBOATZAZLCWTSQEONTCNMCYUOLQFNLOOUAVADYYKACDSIILFOGSISKJEVEGDHDGKDSKNPDIFJAVWQ");
    msg.goal_xml.assign("EQMAPEIWCVRQFSJZXRINHLFDNOWDTUWDFBTEGIRZBFMWKYFGMKZGOIKWNWNHRGYQAPTUFGICEDVUUTDXRQLOCTRWASVZPZSOQUJJLCJHLFOLLSRFNXVYYAYSLGOZFMHPNQAPHCIOTLUYCXUJVYAVWSOTHSQBNSJHZYPDTKDAXGHYQBFADHXOEKJWI");

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
    msg.setTimeStamp(0.06980296238526762);
    msg.setSource(14580U);
    msg.setSourceEntity(130U);
    msg.setDestination(28618U);
    msg.setDestinationEntity(47U);
    msg.command = 242U;
    msg.goal_id.assign("TCQRVKXKFAWKLXAERLNBTZFFBRVUTMNKMFFYZZSGLYEOTOMOIQAPHXUOHSQZHUBJDRBTRSFMFWDYNJEB");
    msg.goal_xml.assign("CUEKXOLCWQOLUETPJWNXWFULXBHMOPBTGRSWSDJLHSGHGVVRIVJQHQINPGEXMCYPOLYGZUWFCHNL");

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
    msg.setTimeStamp(0.5678396834309477);
    msg.setSource(51981U);
    msg.setSourceEntity(214U);
    msg.setDestination(42366U);
    msg.setDestinationEntity(19U);
    msg.op = 154U;
    msg.goal_id.assign("NUTVPAQDCJFBFWFZQPXETDPECVNRTFPJXCFUBLYJQAFSWNNVGVHQYTWGIUPCXWZROZIZSPLOKGUZEROXONSBDWHXNK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MFUMFCNOLDMZJLARBHOLCKNSIPYQWBTZAIZRQYAZKLYGJCPUYETNEDKWBENSLGVEYXSEWPCGFGOGYVEPNRQUUOHHQBCFZGHMWUJTEXNSSXMXUHDWEKPSVFXVSWOANTJLAUPIKIEIMUHLJDFPTGBXCIVQZFWVHDKTVYEXJCRBNAFDAUCTQXPBQDIFPBLFQNCDTK");
    tmp_msg_0.predicate.assign("CJFKQUINLXILNWQKWOMPCFERVBGKRYAMWEXBIEBTHXFGTXNYXCFXTCJDBWMOFVSXNBOJQJKUQIVTWYJRDVYWSFLPITVT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HTHDFDIFYAHINRDDRRKDFVMSZTNJFLMUVSZHHZCQKAJBCLUOOPKRMNBLBXVTIRKOKAYISYOUDUWHRTCFXJQXHVPBOPBLSJUNTXPZIYAFZCNTTLRGRGGEDTFCVKJSLMJWVWMZXWEYZJAKWAQLXUHQNQCCQOVXLKYEBEGVMMJLPZCIRIXPVWQUPMSNLKFWEYZPSHXMEYGUNVEFDIGWBAPNBEASUOQCSIDYABGYODREETOUKZNJA");
    tmp_tmp_msg_0_0.attr_type = 69U;
    tmp_tmp_msg_0_0.min.assign("KWXAPQJWFXVONVVQDBRKHGJMCAYVZTTSCCAMZAPCPNUEN");
    tmp_tmp_msg_0_0.max.assign("WODGLMCLRFDNFTWANMKIVDMFSUJILKENIEAJYPBCSQGCQQUPLMFCFADJOBNQVJOHTCEBUIBCZBCXHRNUNAQBGWJDCTZMRWSVNBELVZORGUHSYISOKCXTHBWRWEXRMWXXGHGVIGZEUTKKDPRWY");
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
    msg.setTimeStamp(0.17377987317523103);
    msg.setSource(46528U);
    msg.setSourceEntity(139U);
    msg.setDestination(18419U);
    msg.setDestinationEntity(38U);
    msg.op = 103U;
    msg.goal_id.assign("OQAHUSLBFKGKQDPJDGWHTXQXZSEKPEAMJIYKSZVYPHILTGFSIMWCDNMFHXVGLOOWREDNQKFIXRAFYRWEBVXJZSNTDPNRHFHWGQLJCERIZYZIKWTLTKLZGCUTHGUUECDXVPADXOZPFUGPNVCAWXIGM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ALAAUOIKKOQLDCCJKYUIAZKXMSHDTBWRDAXPFOFDKMAROISBMUNKZLNOAJSFEMOXFRSZFXXEZISYITVNPNQJHLQCJVRJBGXGDHEZDTBVLBWXPVSZGHECSDGEEQAURHPYETOKDJITECAZEUWYGTHUKN");
    tmp_msg_0.predicate.assign("GWMYGPTHPKMAQFLLGYPNUHTVEDIDZRSYECBREUXHAMOISAWTYZTJYEGIDTFSJLMCDUHOAUCXRFZDRKMYEVMRGONEXAMXKUVCNYBTPTFPOJSLPIMCWJSSQLCTKOWZLQWXWVHIQJHWBGVFXWRMSIXKSSNQOKNLDZDBNCHQCCRLAVNNXEYBIGFYVAYFQIKHOAUOZDDLAQUIKIVWD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YTOOOSKPBZOTQJPUZYDVAJFEMLUUFIKUXQCWGQKRGHCZITNOBWHHNQTQTGGMARTIHYLMCGOVDFCDQFXGVZOVLFYLJNBJPFZMRUSPNNCVBEANZPDSVXPEWNBKIRORHNRCSVHYVKRMDMZPZLEJYATSYFIWXMEGIXBKERDRCNXMAKZLTYK");
    tmp_tmp_msg_0_0.attr_type = 162U;
    tmp_tmp_msg_0_0.min.assign("UGAWYDLYGQKUPYHBQNAHNIPBEZVZIPWKUYBQZVQLOLMJKMXJCCFSOIMJUDNICCEWFXMMYZAIKQNIRLFRAZNTCUONBHOVSNQGXPWPFZJSSMJAZQYYRPJHZIOPGTSYLDTRPCEXGNRWOUNCSQGPFKZJWWUBDLDYLESLCJKISWHHEHOCUHVAUWXTDYEVDXFDQMFGIXBOE");
    tmp_tmp_msg_0_0.max.assign("XUREXWSDIZMIKHBOCTMNBCKDMOWLOQPITDPABKGJFYNDJPOQUMZWLPEYAZEICEXCVWHSBE");
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
    msg.setTimeStamp(0.2534553297082147);
    msg.setSource(42622U);
    msg.setSourceEntity(222U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(218U);
    msg.op = 18U;
    msg.goal_id.assign("GASWZTHWTJUHQJZIURDUXNBGC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UMIIFJWVORCHKPVYUQIBYOTQMIJFISBAEGZXINVSZULEYHCMHDBCPXEGDJJARBTNOFQHNDCBNZHOKZGUSLTXOWKSPBLSUTURZWAMQVRLQOIWFYVABTKJRRRTAMGNGZZEIPCATFXIXMUHYOOWFGQHZAHDQMKHCGKGKQL");
    tmp_msg_0.predicate.assign("EFUZRPCFGFTBOYXFSSYJUMGJBITSLXHMSAEPQIVELIQRPUMVICGIOTLYZGJNMOPWUHDMZAOYABBODLOTDLVKNCWQGNQYXBDWJZMAGTUWWCIOGUAVNCAEFEUFPWARCAIDZDNRDMCMUDIZYCNECSPLNRRMETCHIDRZKPSSZAJPGKNBHTYRLQBHEVWHKTIZPSBVQHEXXPHWFONAXWGVLLYWQVKRVSXBHUFXTJNXFTBXKMOHD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TEEJTPSITXZHJQKOWIBFLXVA");
    tmp_tmp_msg_0_0.attr_type = 94U;
    tmp_tmp_msg_0_0.min.assign("FCCWKGAIFUAQWHTSDEDWRXGZMIUXGSKBGHFUZAOUKUTTEJYEYYDQKTFQFBQPDDANDXXMUSVQZHMCDVNTEBCWOQMSCRCYSNMARIMOOTSKOPFGLVKWRFWNSJNBYGZARDJNBRWYEELXWXMUPTPQXH");
    tmp_tmp_msg_0_0.max.assign("IWAJLQJFCTEDGOMAEAWPRVELWHDCKFJ");
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
    msg.setTimeStamp(0.738217388008736);
    msg.setSource(782U);
    msg.setSourceEntity(45U);
    msg.setDestination(31969U);
    msg.setDestinationEntity(79U);
    msg.name.assign("KMUEGPNWZFEZAIXYJNFHTHESDDGLPHSYTYVRGGDAGKPZUQFOZBRGWLMAMRLNINMADDXSVUBXOLVIKJCTEGABIYJATIGWKQYFPLPZHXRRIANINFFESODEIKIDZBASTDBZWXUMWZWQPOHCUBJCPTL");
    msg.attr_type = 161U;
    msg.min.assign("MNVNUEYTWAPGYQBIEHUW");
    msg.max.assign("XLXAGCZLSJBKKPAIDALJTJMCHIZZMLJUIBOFKMAREOYKLECBFUGICWQKDNKMBWLFWHOMDGSDWVXBNKBHBQIMJRGBRPMMXGPWTWDHYDEUYETNOQVVFSRKNCONZTDYAAUNPPZFKGTXSZCFIJWVCN");

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
    msg.setTimeStamp(0.7959134720191443);
    msg.setSource(11183U);
    msg.setSourceEntity(70U);
    msg.setDestination(45078U);
    msg.setDestinationEntity(221U);
    msg.name.assign("ZJJMUGXTUZAINSZXUDFKZJMELARMNCHSQFNWERPOHBCLDJIBPYEZEUBMIODKTGADGXYDTBQVCYMVHGUMMHOESQCRTHELXVESOYNHWL");
    msg.attr_type = 116U;
    msg.min.assign("XJLPSWRLZZUGFCAVAGPOSELLXXAKOMJTXVHCOFRZEJSSFSLWZPTBBAELYPQEZOJKQKMCFCYOBQCSOSUXAQRDZLCWRZFPEYINYHYVUKMIMMFBJDMJDTYNRFXCUTTAGGLGJLBD");
    msg.max.assign("NGBWZREFHTYFUGBDJKHDPIQEMJGCZWAZVGZFYRUVLBFPOCUCGFVURAPLWMOQQJHEJBSTCETHYPMEKOTRCTZSYSSDNWKEOXLKBQIRQAWKLYDNZJLAZIQDIALXOPMTOIQUWFORTUAEF");

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
    msg.setTimeStamp(0.17238841036474628);
    msg.setSource(48552U);
    msg.setSourceEntity(7U);
    msg.setDestination(63757U);
    msg.setDestinationEntity(128U);
    msg.name.assign("UTWYAKNZVMEVIZWKKNAYRPNOLBFNHMVEYGSGLHBNZXCRYTWUCXCAWFSRFMDJILFWZVUDATBMBPL");
    msg.attr_type = 121U;
    msg.min.assign("EGDCOHUFBEFVACEZBIKJMYVQKQACANPZYXUUSMIKSBLSFALHPANGLHVBSNWDDITBTVPFTGWOQRJYJLETOJHIGEGQMWWOFETLBYXDSGDLJCHLIIYFMTTBFRO");
    msg.max.assign("DBYPSXYSQJAWDIVGVRSFRBYMCKMJJZHLPATDMSNTRMNUKFMEWKWNRZBBIJHEYVMPFXPZAGGHNXUUOKQUUHNZWFLJGFAVFXIBNQNBAQQBUIWMITEFZIGEPDHZIZKT");

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
    msg.setTimeStamp(0.9679908971037802);
    msg.setSource(21434U);
    msg.setSourceEntity(198U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("NFFRDLLLERFOQRCBGICBOKWBFVCH");
    msg.predicate.assign("KWNMFMATRJUBONTKPCJTNQECZARJGGSBIXKSBHVNWOOSINRZFVPDPIGOTUQUXVJIEZYBRSVQTPMNSSHAPXLAWGQUQMVGWKHMRJACCBUYHEWRXYHRZIKWMYUDUACLXLOFN");

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
    msg.setTimeStamp(0.385768146702162);
    msg.setSource(28852U);
    msg.setSourceEntity(183U);
    msg.setDestination(39274U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("CIKBBTMHLYICEFXLYPBAEPWXMWZUKD");
    msg.predicate.assign("FHFFAZOQVBDITJTVENYZLNAJKPKQVRJPAJGDZGQUVSOGIQYTWPWYUSHXAEIPDZCQAYMHNXTHE");

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
    msg.setTimeStamp(0.6942791968904166);
    msg.setSource(36148U);
    msg.setSourceEntity(149U);
    msg.setDestination(28208U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("UXMGKUCNUYLLODRPJDZFXFXZZGEGDRLTNNIFHBIGOJSUESPIBWVRGFKZOOEGCBFQGPQKJNELHOXPDADEUDYORLTJHOUHTKJCPRQZOKOALIWDHFEVI");
    msg.predicate.assign("MWEOTXLBXLKWUFVAZGPPTHKSVXQQBUSIOTMJWOJIGLVDGAQVXCUWREKBNETIIUMLDRBOPCGE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PAEDXGIZXHTGTNJJJCMUIFBRZCEAWSXERNRLGSUPWZFPOUUVACBAAQNBOAQUTKXJPOEXMMLNNDWBWMVSYBFKJHBALZNLYRXOHPLNOTZKDYMSVQQYLKIGCZREDXPUJDIJHGWU");
    tmp_msg_0.attr_type = 1U;
    tmp_msg_0.min.assign("ONKJOFMXMDLTQNLZIAZQUKLVLUBTTGSDUMQLBJPVPMYRTINVDHXOLWXPIAPOTBAXTNLQJCMZEOFGHQZJKAUYWOHLBEXPHRWXQKDBAWIMB");
    tmp_msg_0.max.assign("AWEFXTPDBENAWALDRFKPXVTJGZIZSSYFQFLMDOGCTJMMGVIDWCFNUAMCCPDAEKEMAQYCYXOHOPOKUZWOFIZBUPGWIXBSWKGJYANYOHWLHCPNRVUQXCIUVKKZRNWPXUYWHELGU");
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
    msg.setTimeStamp(0.9575349581251283);
    msg.setSource(32054U);
    msg.setSourceEntity(178U);
    msg.setDestination(36049U);
    msg.setDestinationEntity(164U);
    msg.reactor.assign("XIWDEJCXUXKZHIFMTQZXMPRCLWAPBDNSJAFVNKUPQQSHTUHOULMANQVZJONLHFIHKBZFAWKMMMTUJJAUSWAEBYGYOIJOINVROLSRQYQEEVWBTINRICHZFHAXHEPHXIOYB");

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
    msg.setTimeStamp(0.8282044194269307);
    msg.setSource(7567U);
    msg.setSourceEntity(24U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(150U);
    msg.reactor.assign("FLXDIQDRHPASQVCDSRZNZFADYOTKKVDZTUSJCFCGWWZLAQQZSPDWKMSCKTLMIMWRCZOUYCBNGGCVIGLBPEUPWWAUSHPYNIKOSUFSMNEFVHFYRGFVQKQRUNJJTEQJAJUDOSEJOHLPHZRTBBEDMODTHTRKWQRVAEHTMWEGPDNAFGXCQHPLRYYUBMXZYLSUPJZMWKJXUKLGTVBXABIAONINMVXQAYVZMEOGJJGBIXXIYBFBFLNXICEHTOVP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SGUJNQUUNHRSYQUJFCKDXSBMYHBMHQAJWJWJ");
    tmp_msg_0.predicate.assign("LQBOMNDCGUGTBXYRMMADTSNDTWUBKKBKOJIVFKVVSJOYLXSWINSHRPPEHMRCQXLVWVKSHUILQKUFLUCLJGQAUEXBCNGROV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NQEJLLGQZFGCBOHJPRCNAPKXDCWGFUWERYFAOSMBFOYZXRGMIIBKIHEXVTRZUHTYZJWLZWVGPRELETCGBFKQKCXVULSEQBYASLSWKVHZJLNOIYKUQDUKEARUCDPDQBSMBVGLPYJPPBTFJMOXLYBYDHUWOTHCPVAFIMSGDZCVIAZWHFXQ");
    tmp_tmp_msg_0_0.attr_type = 39U;
    tmp_tmp_msg_0_0.min.assign("RLMVKHAKABTVSFKVYAHWSFQUAKKEQYOFIXXZNPNSPMHOFBYOYSGJQNEOMVTRFKJZGKUYLZDHTUQDMYBYYMJJFUMZZNLJPFQOZFQRHEAJXYVNCCCSIXCWWQXMTBHRYISBOAIIERRXAMNPDLSVHEDRDGIUVECWTGBUTGPKINTSTXJCWIVXPDEBSHRXTTEUBSJBMLRDRNG");
    tmp_tmp_msg_0_0.max.assign("TSKVCOIIDBIWKYFXBKGQHCQDNLWMIRSYVOCPGVFQUUURSGCOUPOVAZXKFCJREZZFBMQNMNHBSUJYNQTLVLSROLAFYIPXMIBECLGIEAZXNLHXJRXOQTLUSEJKTBWCPYZENRYQXHVEFJFTWRCTHDJNBVADGSHQBZFIYPECOPUZLWKCRPKDNHKZEMJVAWVDIWYWQGMWWMRUXGZJAYAFXJQD");
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
    msg.setTimeStamp(0.39222384144418443);
    msg.setSource(47992U);
    msg.setSourceEntity(51U);
    msg.setDestination(62623U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("HWDNJBDBRHMXXCWLFMNVCYHSQYSUDSKKWOIXULZWSZBGJDRNPNIMNCEXNMLQGPASNDTQPOZFALLEFUHKBOJKVQTNKALHQQUZSLOPHYQBUKCGZRXVURYODXSDPHLATOTOQIGSQOXQWAKZUZVJPRITBYWYLPBBMDKKTDWGAJVFXGJPFAMEFTRTBHSRTWE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VRPJZZLYDSWHYWHKXVFJMJRTAKBBPOHMFXDNGMGIZXAEAERPIOGEUVQRNRTECJLHBMPSSCIFLYQDIHFNWVBWMNMXUCSPAZGKFQUUBOJSXIDTPTTPJNEZCKTCMVAAUOPHCLDXMRBLNDBYOBVIXDWWUCEGORQRGZHMHSTZJOLEJXYKSAJQBYLSWVQGPQLFYJIVUHVRUDYXOMUUQODIKQNKCFYFATNSHPQZNA");
    tmp_msg_0.predicate.assign("CMISUVGHVXLUYADKSCFKGQBMVBZSXNIUSQYAMHJFTNWCTYKRQAVNNCJF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UDZAIRRJUVOCQHDNRTOKULRVBWRBSJEXCPCBFSQACIXQAPDFOWDKPDWKUYCGTMBDJPMWXPNIILSCXAYPCALCYHTVSAGEFGRSTMEZJMZVNTKAFYXJGQEUOECVCPSHRBARPFIPFFYBDIKEIXMKZMWHSNZIIZJNTZVWPKMONLXEAXN");
    tmp_tmp_msg_0_0.attr_type = 244U;
    tmp_tmp_msg_0_0.min.assign("MTTLQBVWLQKWATMVNEAPVVPDMYPJHQBDHZFCUMMETLCANRVZIYWTZAVYLNUQVKGUTRBQRZOPFRULZXWRKKGIPDFWRYOBHYPJRYHFLGPDENBKDSXCHSMECEA");
    tmp_tmp_msg_0_0.max.assign("INPZHGGHJZWTQTHYKEANTVDLTTWJUSXEDXMDEJFOLWYSCRLSQVUWWMBCWKPAEVHJINCCQGMPNPAGPTCPVRDZYKMTIOBLNMYLQHJPJDDUZTXXYXVKEABLBKROGFKBRFQVNCRDLVSQRFOWKCSSSFBQMQFOIZC");
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
    msg.setTimeStamp(0.041703231451451384);
    msg.setSource(34285U);
    msg.setSourceEntity(240U);
    msg.setDestination(31610U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("CVWOEDXLMGSEIDKUGMPGNXBJFIPQYMUNPQNYQHWDFYROERVKHSEEXTMSHJYBUIVWCTMAZTR");
    msg.data.assign("SPTDZIJUMGTJIUWLXGKMOREBLSAUEZOVUHHNYSGQXZYFPJHTVZYXGFGVDDBLYRWWMRHEKAUZGYMIRPLNDAITVYACOARWJOJSQMGHRDHFFADBQIVCOAYTPXBOUKLZSNUDTXIRHMXXXMSETBOSSMOYPPSFMGPFULQETLQUNFCSUFBXRCKL");

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
    msg.setTimeStamp(0.14466877351165774);
    msg.setSource(54053U);
    msg.setSourceEntity(213U);
    msg.setDestination(49804U);
    msg.setDestinationEntity(202U);
    msg.topic.assign("YIMNESRGJXKDVPZSFOXAOIDI");
    msg.data.assign("MUVLQZXOAAFQPSWAZVMUUREENJSBMTOOJSUVAQFTCCNZGOPFZLYCVYKO");

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
    msg.setTimeStamp(0.769349238091829);
    msg.setSource(20181U);
    msg.setSourceEntity(91U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(197U);
    msg.topic.assign("VUREHXYFCXELRKDFBMIHJKJBHIKQFMPGVRAKGNSILZMGMYVWVCZNJBAJLVCGVCFHXGTITSWKKRRAVKITHRWWCPYUZPXRQJKHQIBGOLSQPUYNOVEDPDSOMOFCZHGNSUQDTELLCNMQFVWQCQLZUGEYQWBPOWGCSQYTAFESYPNRDXJAAWHETXAMUZSMPJXCFIMAUDZNEPOOREUNTGAJN");
    msg.data.assign("NBVDKVRCFRKTHDGOGCLDPUXWFYTGCPASMWHWCY");

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
    msg.setTimeStamp(0.7523856187718306);
    msg.setSource(4215U);
    msg.setSourceEntity(25U);
    msg.setDestination(44695U);
    msg.setDestinationEntity(235U);
    msg.frameid = 227U;
    const signed char tmp_msg_0[] = {-17, -101, 26, -83, -119, -54, 73, -74, -60, -38, 92, -115, 64, -70, -114, -19, -113, -76, 60, -84, 19, -38, -52, 108, 20, 75, 98, 58, 123, -116, 32, -32, 101, -52, -116, 47, 20, -90, 13, -55, 58, 30, -85, -13, -114, 121, 56, 82, -59, 43, -101, 48, -93, -94, 120, -122, -82, 58, 111, 76, -99, -109, -102, -86, -43, 67, -33, 48, -120, -37, 81, 17, -59, 10, 85, -116, 5, 50, 29, 88, -107, -102, -3, -117, -16, 7, 23, -70, -9, 100, -121, 118, -29, -40, 121, 64, 106, -80, 121, -89, 60, -7, 125, 3, -73, -38, -43, 41, 28, 76, -107, 21, -10, -26, 22, 2, 110, -56, 65, -8, -21, -17, -59, -78, -65, -60, 115, 60, 109, 33, 26, -45, 82, 4, -118, -74, 75, 92, -2, -86, 1, 57, -4, 107, -99, -122, -51, -48, 37, -74, 91, -91, 84, 117, -123, -103, 7, 124, 71, -11, -120, -65, 89, 126, -116, 24, -16, -15, -73, -98, -85, -18, -48, -65, 107, -39, 51, -26, -111, 65, 112, 56, -14, -7, -45, -33, -107, 45, 92, 31, -106, -31, -82, -76, -103, 36, 48};
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
    msg.setTimeStamp(0.5951024321616726);
    msg.setSource(10757U);
    msg.setSourceEntity(26U);
    msg.setDestination(5167U);
    msg.setDestinationEntity(81U);
    msg.frameid = 7U;
    const signed char tmp_msg_0[] = {-71, -120, -71, -96, -17, 24, 101, 17, 112, -91, -11, -6, -37, 79, -34, 40, -19, -84, -123, -8, -62, 109, 124, -54, 86, -2, 85, -49, -53, -34, -30, -13, 115, 125, -77, 81, -1, 108, -37, -100, 86, 101, 98, 54, -3, -125, 90, 41, -126, -77, -12, 124, -115, -122, 110, -13, -73, 94, 52, 114};
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
    msg.setTimeStamp(0.13663462198151577);
    msg.setSource(14365U);
    msg.setSourceEntity(71U);
    msg.setDestination(7889U);
    msg.setDestinationEntity(184U);
    msg.frameid = 105U;
    const signed char tmp_msg_0[] = {49, -39, -124, -47, 100, 55, 5, 1, -126, -79, -93, -30, 16, 31, -124, -94, -100, -63, 90, -99, -75, 83, -110, 73, 41, 34, 55, 113, -103, 18, 59, 65, 17, 53, -103, -85, 29, -106, 84, 113, -22, -22, 9, -22, 6, 102, -117, -57, 65, -89, 63, 94, -15, -114, 64, 68, -113, -125, 90, 72, -62, -76, 59, 23, -73, -7, -103, 62, 18, 75, -37, 1, -125, 12, 96, 66, -118, 4, -20, -84, 74, -68, 20, 82, 125, -49, -50, -118, 20, -71, 15, 2, 102, -88, 20, 2, -41, -2, 75, 115, -24, 69, 28, -116, -32, -14, -49, 45, 109, -12, 120, 0, 80, -89, 80, -83, 78, 16, 55, -74, -63, -120, 105, 56, -90};
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
    msg.setTimeStamp(0.5246691456565711);
    msg.setSource(56171U);
    msg.setSourceEntity(210U);
    msg.setDestination(25971U);
    msg.setDestinationEntity(64U);
    msg.fps = 153U;
    msg.quality = 203U;
    msg.reps = 83U;
    msg.tsize = 111U;

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
    msg.setTimeStamp(0.6437008587614921);
    msg.setSource(25608U);
    msg.setSourceEntity(143U);
    msg.setDestination(44670U);
    msg.setDestinationEntity(152U);
    msg.fps = 208U;
    msg.quality = 26U;
    msg.reps = 87U;
    msg.tsize = 44U;

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
    msg.setTimeStamp(0.6625980572765332);
    msg.setSource(35855U);
    msg.setSourceEntity(46U);
    msg.setDestination(50826U);
    msg.setDestinationEntity(240U);
    msg.fps = 88U;
    msg.quality = 208U;
    msg.reps = 228U;
    msg.tsize = 205U;

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
    msg.setTimeStamp(0.4806483462138399);
    msg.setSource(60568U);
    msg.setSourceEntity(48U);
    msg.setDestination(36578U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.046517113247854125;
    msg.lon = 0.5222074032086671;
    msg.depth = 2U;
    msg.speed = 0.16783618136449852;
    msg.psi = 0.11263440523673485;

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
    msg.setTimeStamp(0.5168081341802259);
    msg.setSource(57465U);
    msg.setSourceEntity(126U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.9466944076533913;
    msg.lon = 0.76739582332613;
    msg.depth = 119U;
    msg.speed = 0.16326208312711699;
    msg.psi = 0.17674333243790985;

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
    msg.setTimeStamp(0.5406266350513181);
    msg.setSource(8490U);
    msg.setSourceEntity(116U);
    msg.setDestination(40866U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.24160498152276066;
    msg.lon = 0.6515677267513501;
    msg.depth = 107U;
    msg.speed = 0.6502351933647308;
    msg.psi = 0.8770777685097266;

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
    msg.setTimeStamp(0.9244241394097058);
    msg.setSource(27316U);
    msg.setSourceEntity(144U);
    msg.setDestination(45187U);
    msg.setDestinationEntity(241U);
    msg.label.assign("LSWISXWNREFBIVQSONJRRAFGYAAXRICWNYRPYEDDUTUYDTAKQHOTZVUKXUPKPDYVFCQHIKREBJFLNRFDHPKHONTMPXMDBVQMAGWQSJMZGKHOXYIEACTABJLITJNMJOPNCTMLCUUDKCVCVTOXOSUPKEGNGUVLZEXJKEJRWQZUVZBLQQDOPWGI");
    msg.lat = 0.038686798665599875;
    msg.lon = 0.08566645953182095;
    msg.z = 0.6026370607842318;
    msg.z_units = 128U;
    msg.cog = 0.5061840678747522;
    msg.sog = 0.4916912373042517;

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
    msg.setTimeStamp(0.4543963358782789);
    msg.setSource(58795U);
    msg.setSourceEntity(242U);
    msg.setDestination(41141U);
    msg.setDestinationEntity(77U);
    msg.label.assign("ITUTEBTTXTUQYVEFHPHMXKCLFWBMNMLPRFYAGSOBJANGNJCUEMLBWFVNCYNCCTVWRBAAGDWJJPOMIGUMXYPEAXYHDQZSFISXKFGKRALCIR");
    msg.lat = 0.3096673705471371;
    msg.lon = 0.040674456527333036;
    msg.z = 0.6132368937456643;
    msg.z_units = 110U;
    msg.cog = 0.41326527404852453;
    msg.sog = 0.6943414120450746;

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
    msg.setTimeStamp(0.0033649389150965936);
    msg.setSource(1891U);
    msg.setSourceEntity(209U);
    msg.setDestination(31344U);
    msg.setDestinationEntity(225U);
    msg.label.assign("KGZLDSBGBFVHOIKDCBMSKQSQNRWADGEBVLRUYXJEPFXJFOAVOQJQVNUNTNOXTKTM");
    msg.lat = 0.608089870141585;
    msg.lon = 0.7271451875384205;
    msg.z = 0.03232179773513677;
    msg.z_units = 219U;
    msg.cog = 0.5824486720759643;
    msg.sog = 0.0058492592756483885;

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
    msg.setTimeStamp(0.2584197358632835);
    msg.setSource(64286U);
    msg.setSourceEntity(40U);
    msg.setDestination(7639U);
    msg.setDestinationEntity(38U);
    msg.name.assign("NGBXCQJDNJKCFUJBEXZGTSVOMVYFRFETHWQFFVEBATKBEHANJYZEDIPUSSLFILPVSWTZCXKXLJ");
    msg.value.assign("TCADFGGHLQEWTWZTYFTAMJWGCXUSLCCJXQAICNZSCRIUBSPZBZNKVEWDNNUBQUKVBRFDPOCIJCGKKCVPZISLXMKXVMHUELBTGGNJHAYDEQHQVFHLPNNRMQPRTXEIIJMEDYUZLRXOBDIFDNURWTXKHSFUVFLHPSFXBWMAKFOYOURGTQMSTHDELNPBCARTHRMJMOWSAVPUYBXOBKQEVYOV");

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
    msg.setTimeStamp(0.8085885679152424);
    msg.setSource(51845U);
    msg.setSourceEntity(122U);
    msg.setDestination(65415U);
    msg.setDestinationEntity(115U);
    msg.name.assign("WTMNDVMEJRLQYFODNPLSBCZQAVESPHOGTCYURQAHGTPMOYJKDYHYEKXRPLHTKLJEVKRBXZFKANXRONL");
    msg.value.assign("JXPRLDHJCJUPDVGMEHZKPVAMSTXCPBSNQTCDYCKZBOLJGXZFNHQEGNXXCEGDPSKZCWKKLMMMZAGZRGLHBLOULYDHTVVQQUOQFQOBNRBIKIYVFLXLGIGAVZGJDVEWJTFOYUVKSOJHKBHIFWUROAYSOASPBAPWTUJRLMZTWU");

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
    msg.setTimeStamp(0.08754816124057074);
    msg.setSource(26831U);
    msg.setSourceEntity(105U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(196U);
    msg.name.assign("AKEGBIQHDVGWXTMRUHQTVQRKMSLMMVKDEIGJUZZBPUHXBHOLAKXVDECDIDFVJFUPCRETYCMUYTXHVFSDSEYLICLQPGEQOCJILVMYRJTTDSHLTHDOVJPMIRTQPFUZXAVBOHMBONAFJNSIOKWJYFFENXBGRWYSEJWMUGSXACNRXUOJCDRSCRGBTWEPAKBIIYYO");
    msg.value.assign("KZQIGOJMMOGYHMSYRWEFK");

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
    msg.setTimeStamp(0.7894625414832939);
    msg.setSource(58790U);
    msg.setSourceEntity(211U);
    msg.setDestination(12317U);
    msg.setDestinationEntity(189U);
    msg.name.assign("QNUUBRRKFHFARPJYSUCLGDCVXOJMQUCVXCSHBCOTXGYMEGDKHEIRMMHAXOINILCY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EBPFOZAWVVGQGIETDJEFPWSESUNMFSGAFZJAQLAPAGWSBXRJECRESUSJQAHYJCLKLRFZVBYTGNFXIUGWUDMOKVGIKSEINJDAUIVLTZVORBMQOJUBGKYXXWSNWZRIXQBUFIBKZHHPZTDJOYFPENMOHMODHDXCHD");
    tmp_msg_0.value.assign("QBYNTAFDKGBHPIQZXCTRPCYRHZQLBWMPAJHPAWBFLLKNUOPWMYDMQDXTIOTSGSGUBGSHMNQNHVRVINELSWYISRIITLOEVKCDZOVZUFFKRKOUEACFIVAJFWARFATRYSBXZMPNDUQSJMJQHAENUXTXOYVQUBVLJQDPTVOBJGRKZGKLRCMEJSPCWYBTHYZZOAIQJEPNWEDVAMFXHTHFWSWEWFDCKG");
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
    msg.setTimeStamp(0.3124317905962968);
    msg.setSource(23445U);
    msg.setSourceEntity(133U);
    msg.setDestination(22331U);
    msg.setDestinationEntity(148U);
    msg.name.assign("WTQUSIJFEMPFRGRTTKZIKEXDCOZHOLDCTMNFALFOJYSROTUYDJFWKXSXQJNHYJURNZOZEDNXZGIWAQTIXIYULLFPXZELADAWNREBCASEEVPOBFDHSKKXIIFSCCOJMLGAPAFSCHSMJVV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YBNOQGKUPJCCDX");
    tmp_msg_0.value.assign("HPGXQTSBIKJNEOLEZDALENRYQPRJIVQUKWFCUHPLXVUUGSSWYJZMOBNZSWMNTWXVXBPAMAECIEVNKJMQNJRPDGXJLMAGGZRFKNDCISHVIKJREQBFSZECDZYEHAVTAEODDUMADOHHBFGYPKNPKESLFXMGRMKRZYBPNLUITTPQXJYLOZJVLTWTBMCOCIYFBZTLTHQSAUOZXJFHFURSCBF");
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
    msg.setTimeStamp(0.11039462335281769);
    msg.setSource(7696U);
    msg.setSourceEntity(179U);
    msg.setDestination(15901U);
    msg.setDestinationEntity(241U);
    msg.name.assign("ECGNTGMJBSJXZQVMKUTSBROTQZQNKYDGCLHMLBEXGHMTFVFEYXGIOYQXFDAJSRMJLANUKUFHPWBZXIIZDPADDHKARYOZFEOPJUAHEAKMJOZRLEJOSPUNWVQDFHICQQVUBYYIABKFRYIQSPVKXZIINHTKETNRVJQYGCCSVALNLTEDYCSLVMOWQMRUCKBCGWRFOXUEMORXDZMKRLPOICUSXJZVDWEZBVTGHIXWFLPUBJTGPWWSFCAPNNW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RUWOTSFYBJBPXRFGOWZZXVURCXNCSMOUPAYIVOEKQDLHJHZUIQSIGOYCJNPNUVDSBBOOQTBEPBZRAYIHCYXIVMSCDPJVNULPBSXMBLVHFFHNPRJGLYAEGDQXMIKCXZAPSSUHCGTEIXGRYNZLARHQKBSQEAFLMJTGWYOJHMKDFIWQAWKFUMKCWUZFVGFWEILK");
    tmp_msg_0.value.assign("HMUVENIKUGQFRIKTQRBNUPFOYITDKMFXWLDHTMVAEEWFVGYVZNMUBUDHODZRVZKPQVAOBKTGPPDPDXGHNSYCQWJCGKWQEBGEH");
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
    msg.setTimeStamp(0.12072201767488921);
    msg.setSource(8113U);
    msg.setSourceEntity(155U);
    msg.setDestination(35791U);
    msg.setDestinationEntity(167U);
    msg.name.assign("RYIURHIWDMRJNOALKEHMJUWGGCYNLNNBEVBMZQDSBBTUWZBILSILZHVJTFYXIAFHYMEKUWADBTCOZHJBYFSDKUSOEWUFZRFNMWNDSOQAPSRGVTPZHXYWWBYMFVTNJXBOALDECQKRHXFTROQAGKLMQEUPXZDWJCKLYSJHSTVKIMHYOEQCDOKQEHXPRZYVAAUQJGGPPQODWRZMRMFNV");
    msg.visibility.assign("TTQHXUQTTYEPGMCMGFUXEQVINWCQALTZXFNUYUUZYELAGOKLYDVVHZJVOZISFSZHPUIHNFZKSOUUDLMQVJJJIILDRRKPBIKOPBONOHJSXKEKNPCJWZDCTCPSFDACYWRWMNEHNNBWAEGJOGQSHXKGGTXBVMBNLJMVAYBCALBDBKFNKRFWJWHGFXWGRLIVOQSASSYAIRLXCFCMKZDPOZTZX");
    msg.scope.assign("MTHJKMVMDYKNGLIEPLSOWSGOOFTRREMIPBCBZLMOWFCZJIUQNBDVHOYQRBABFWNXSCAOEHGCIEZFCAXSYJUAEBXKXINKQPONMCZNSSMFVLEHTXQCPISGFYBMJDXVRHFRPZYZVNTDOVXPPYQVXACJVGQZAZPDIDDLUKCQOULZKARB");

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
    msg.setTimeStamp(0.5873382623904201);
    msg.setSource(9377U);
    msg.setSourceEntity(240U);
    msg.setDestination(64748U);
    msg.setDestinationEntity(226U);
    msg.name.assign("HOOBXNYDHDLDSTWYSSDVDNGCEOQUZQLKIPBVCTIRIZOGFWQFIDJAGRKTYCUJQABEKIWUAGSYWRIETNQPOWBNWCHBYTKOOUKMWNWHQGMKZZBXMXNQHOIHIDFBZAEBXLRXZNOYLFGWTTCYPXXJPLZPCLHUAAV");
    msg.visibility.assign("BCBMRZZSUAOTGLUAFUCRJRVMKEEKGTDKBGDIAERCQLWPYYVHBZFCIMHUQKXDTHFNCJSNXKBOKQXJNDBMSIGHLIGOFKTCXPWWXGSAZIJEFKLYOTZDQVXMDNMPEGDICERZPUJRYVYAFXYHCLFPWQSWFOWHFNWOOQHOPNITHKSUSJEVBTLPWLARRBMUXLVSXGUJJIVLRDZKEVVDIIYMHRQMDSNUBYESCENCAZPGFNQHZWOPLTVTAGTPQMAWQ");
    msg.scope.assign("ACTSBIXQIFWTVEGOJUBRCUDTWUQYRVZXPKSQMZRKNNDTAXAADXQKLKPEZPNKM");

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
    msg.setTimeStamp(0.8049582573428962);
    msg.setSource(32728U);
    msg.setSourceEntity(205U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(105U);
    msg.name.assign("NNBLCAHRUIJFTAOIQFDJGEDXYHMKXMVDLBBJLOVOYVCQMIFMQQWYTEYHCTWRLHZHRRAAUBI");
    msg.visibility.assign("KEFFPGLTHJZNAZXVHZIFHYCWNGZWRVXGYMXXEDYAFAAUBSHXXSAJGFAYKOIDUXICYPQQNUGFCACOLNTWRWSBOESMQLWDRMZKWITPPUUKVYGVLMBBBORPTBHCPTNCOIIOWUFDPVSYCLJRBSTZBQVUTWGDHZZDRDKARRANLLJQCPGQMVVKEEEKQLQHDBDGTTFEMLMKJFIZXSNHJAIZNXOPJGJDOU");
    msg.scope.assign("PWSIIXRCXQXPYDRAHGEPUXIWDWBUEVPMQJWVTAIMBADRKCQPVDBKYYUYCLBUMSZFBZNORYNPLPEKMOSFKKNUWBJLSJGHKXFFJNRDBHVYQRBOACYZXQVCWICJSEGFOGEEVFFHTM");

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
    msg.setTimeStamp(0.6744057784439942);
    msg.setSource(60300U);
    msg.setSourceEntity(113U);
    msg.setDestination(2735U);
    msg.setDestinationEntity(161U);
    msg.name.assign("FAOFYLNRLUFSDICRQAZEJQOELJUUWWOHLCFCIYEWVATFFYNXATMLPDPQCDMMOQSGZBTAZWLZXAMSKCZMJWKTCJEPLWYNFHYGRPVQKNUVHGKDSCYMZOJBVUKEJWRQZTMGVHYGTDGEBPKUD");

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
    msg.setTimeStamp(0.1401145136713996);
    msg.setSource(4885U);
    msg.setSourceEntity(199U);
    msg.setDestination(15526U);
    msg.setDestinationEntity(213U);
    msg.name.assign("GCLURDDHKCVTWGASWKNGWCEWJZCBQJPTWRMLLQXUELJMRCODBNHUXVOMVZTGVZQQUTUUP");

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
    msg.setTimeStamp(0.41940829682023595);
    msg.setSource(8023U);
    msg.setSourceEntity(139U);
    msg.setDestination(38109U);
    msg.setDestinationEntity(222U);
    msg.name.assign("NGIYISDFZGGVNVKVNOABCOHTGLOAQVPLECHUJQJRPMQILONSWDASHJXMKYGSTOBIUUBMWDWBUKPUN");

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
    msg.setTimeStamp(0.4406984983648041);
    msg.setSource(42799U);
    msg.setSourceEntity(131U);
    msg.setDestination(7499U);
    msg.setDestinationEntity(89U);
    msg.name.assign("CFRYDBBJRFXZOEVWEICYZJMCLHLDKILPZVMYVIKOQWQTTSAGLLGZXQFTSZTNEGVOFTIIUEJKACYXPOHVPYWPRJBMGNRMJQSEUMRYZMGSDNFCANASWVVWNGOBGGSXJAWUTZMXZBBIUKMJ");

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
    msg.setTimeStamp(0.9561115008274383);
    msg.setSource(29137U);
    msg.setSourceEntity(132U);
    msg.setDestination(63804U);
    msg.setDestinationEntity(218U);
    msg.name.assign("PBDIFTPCOXOUDCVOWCQWRKHOCUTANYZSABVFTQKDGRDYJPPBVEXKBNBGEUBUZLUUPKSEUAWPLGLZDQLRXOHPIREKZDQXCBZTPGSDJJLFKLCNGNZI");

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
    msg.setTimeStamp(0.18520468535494372);
    msg.setSource(15928U);
    msg.setSourceEntity(3U);
    msg.setDestination(23962U);
    msg.setDestinationEntity(19U);
    msg.name.assign("VLAVDCPWPSELQXZIJQYTYXLMUJSGLUOCQACDAERCHDSLXTNIFBGIJMFOJXNPYPBONKJHHLHCZKBAGJTBZVLBBDLAJENNUBOYUXRKMHDOSBEPSUZYREKKFXQRQGYZDSQWJXUCZAELMTLIRSCOZHDHM");

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
    msg.setTimeStamp(0.5774248929977205);
    msg.setSource(48606U);
    msg.setSourceEntity(166U);
    msg.setDestination(33321U);
    msg.setDestinationEntity(243U);
    msg.timeout = 2837498485U;

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
    msg.setTimeStamp(0.5999346093318552);
    msg.setSource(65012U);
    msg.setSourceEntity(180U);
    msg.setDestination(43174U);
    msg.setDestinationEntity(184U);
    msg.timeout = 3211607803U;

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
    msg.setTimeStamp(0.4574329572108301);
    msg.setSource(61637U);
    msg.setSourceEntity(208U);
    msg.setDestination(10327U);
    msg.setDestinationEntity(130U);
    msg.timeout = 2626671793U;

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
    msg.setTimeStamp(0.3227290038439654);
    msg.setSource(32723U);
    msg.setSourceEntity(245U);
    msg.setDestination(36920U);
    msg.setDestinationEntity(181U);
    msg.sessid = 84564652U;

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
    msg.setTimeStamp(0.6856878765477179);
    msg.setSource(29930U);
    msg.setSourceEntity(83U);
    msg.setDestination(16728U);
    msg.setDestinationEntity(66U);
    msg.sessid = 818706782U;

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
    msg.setTimeStamp(0.8124919440536289);
    msg.setSource(61074U);
    msg.setSourceEntity(151U);
    msg.setDestination(22196U);
    msg.setDestinationEntity(120U);
    msg.sessid = 3011243707U;

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
    msg.setTimeStamp(0.6788544521500085);
    msg.setSource(59269U);
    msg.setSourceEntity(117U);
    msg.setDestination(52785U);
    msg.setDestinationEntity(253U);
    msg.sessid = 1792084524U;
    msg.messages.assign("NGAJYIKVUCOZDLIFFBFQLFOSOAFZDNRKXOEVXRBVNLLHYHCWCDEJLNPFBSAKECZGZMJKQTXBYQPXRQXTDSRWURRAPISMWTQF");

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
    msg.setTimeStamp(0.5271396735736051);
    msg.setSource(64819U);
    msg.setSourceEntity(211U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(61U);
    msg.sessid = 580999163U;
    msg.messages.assign("HBJJEUCALCYLUIXEGLJB");

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
    msg.setTimeStamp(0.329452785154313);
    msg.setSource(61853U);
    msg.setSourceEntity(97U);
    msg.setDestination(18374U);
    msg.setDestinationEntity(44U);
    msg.sessid = 3696700292U;
    msg.messages.assign("GINXFHIPOCGDUUYEVFJRSYZBPUMJKHHMWROAEONGXATYLNTCBUDXBCFEBQOMRHDPDTPGCISMNMVNRXFTNGVIMBOTHLIMIKWNSZQZAOBCPJRJKUAWTQYWVCXLQDBFWDXRCSZSQTFHYYKGCLAHPEYNAOMWPVUBZSYESSWCKHDYLEVEXROUKAZJLVQNJLNIIVPDGVXTELLAHIGQKVQSXJFTEJWWRZOQRZUWAASMKZFPHGBBRTMDXE");

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
    msg.setTimeStamp(0.8549186553715508);
    msg.setSource(9215U);
    msg.setSourceEntity(57U);
    msg.setDestination(57334U);
    msg.setDestinationEntity(88U);
    msg.sessid = 4126844459U;

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
    msg.setTimeStamp(0.6598417871774527);
    msg.setSource(9439U);
    msg.setSourceEntity(249U);
    msg.setDestination(38271U);
    msg.setDestinationEntity(135U);
    msg.sessid = 1771144721U;

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
    msg.setTimeStamp(0.5989198476553799);
    msg.setSource(35398U);
    msg.setSourceEntity(155U);
    msg.setDestination(29551U);
    msg.setDestinationEntity(39U);
    msg.sessid = 3388534491U;

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
    msg.setTimeStamp(0.7546671433724249);
    msg.setSource(32403U);
    msg.setSourceEntity(162U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(127U);
    msg.sessid = 4136693729U;
    msg.status = 9U;

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
    msg.setTimeStamp(0.00934823397661022);
    msg.setSource(54334U);
    msg.setSourceEntity(46U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(31U);
    msg.sessid = 797786610U;
    msg.status = 148U;

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
    msg.setTimeStamp(0.7870955293023737);
    msg.setSource(29635U);
    msg.setSourceEntity(84U);
    msg.setDestination(60625U);
    msg.setDestinationEntity(159U);
    msg.sessid = 332298347U;
    msg.status = 132U;

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
    msg.setTimeStamp(0.0968307624684005);
    msg.setSource(50659U);
    msg.setSourceEntity(146U);
    msg.setDestination(43500U);
    msg.setDestinationEntity(226U);
    msg.name.assign("URQHMCYMWDXDDLMTLYUUYKXZWKEHBIGOZYDMHOMKMKZLQVIZRTQPHPAPBCXEJSLCXGWFMPJVJEICEDYRUPSXRIFCTQBRYQXKNTUNBWGADIMSSHRRA");

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
    msg.setTimeStamp(0.3538650803030672);
    msg.setSource(51361U);
    msg.setSourceEntity(39U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(116U);
    msg.name.assign("ZDNUHJWWDBMNZRZBEZO");

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
    msg.setTimeStamp(0.38704196835297866);
    msg.setSource(39181U);
    msg.setSourceEntity(136U);
    msg.setDestination(55529U);
    msg.setDestinationEntity(157U);
    msg.name.assign("BEBOLXGDFSCMXCVUKJGFI");

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
    msg.setTimeStamp(0.4202115719646613);
    msg.setSource(36074U);
    msg.setSourceEntity(14U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(96U);
    msg.name.assign("ZSQJLDPWWMMIGYBIFLUFMODBSIMMZQDOXRNRJJSHCROKITBXFMYEFOVENKQSXFIEDOABWFUKXHSWUALDONFLQJXAXQPNEMZWFRVANBRSZRESHVEDJTCIAPPLOUGVHPYJDSYNVEKKDTTQXPGYPGPCVABCXMZXMTLEGYKSFQLHYJCHCGO");

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
    msg.setTimeStamp(0.3076539349845696);
    msg.setSource(44824U);
    msg.setSourceEntity(29U);
    msg.setDestination(29484U);
    msg.setDestinationEntity(4U);
    msg.name.assign("YFPVKAQQWBNMOZTXTOWPAIBWOAKQOLAWB");

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
    msg.setTimeStamp(0.0679044756684487);
    msg.setSource(57688U);
    msg.setSourceEntity(61U);
    msg.setDestination(38398U);
    msg.setDestinationEntity(80U);
    msg.name.assign("NUHYQKHPFYQOIEKZXMOWOKBKJNVMEYWXFBSVUFJFWBZOJAULGAMPEILRARIEHVWKRTPHEKSAPBTQHVRTSAPAYYQNTIAZSXJFZAPWKOZJKVYID");

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
    msg.setTimeStamp(0.8784031747593954);
    msg.setSource(10279U);
    msg.setSourceEntity(13U);
    msg.setDestination(19112U);
    msg.setDestinationEntity(59U);
    msg.type = 44U;
    msg.error.assign("FGWOKHONHUNPPJYDGROSJALIVURZNDPMLYGZXWDKSECFOYWRELILXQPGXTIBFYPCCBMMSYMSUOCBDWWABSITNQRNIXDVALAHGUEDKBDPRXQUYFBERQQFKDGBEWLWHJISCOWAZXRYPBZGVDUQLQURJXRSVMAMKMUNXLHFFJQSFMBITNKGJZISPAOWTJOZHJUJXTAKSIJTNNUWAHEVQYCECAEH");

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
    msg.setTimeStamp(0.13968082265814363);
    msg.setSource(57924U);
    msg.setSourceEntity(227U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(4U);
    msg.type = 173U;
    msg.error.assign("EYEKBXAYUTXJSUQOOHRQEJCTRIBZAKPTNQNYNVIWHVAMHVQJOCBZMGHPJBDCMSUYQOPOODSXMUXMSBAEVQUL");

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
    msg.setTimeStamp(0.6042336519948919);
    msg.setSource(11460U);
    msg.setSourceEntity(234U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(188U);
    msg.type = 190U;
    msg.error.assign("ZEHEWLLCIYHVDKPWSREFPDQDMYXSKPNIGWZLTHDZDQXDLJALCNUUDAVPYKFMJLMTOGVRYYAPJVVADH");

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
    msg.setTimeStamp(0.6615704642757007);
    msg.setSource(10626U);
    msg.setSourceEntity(50U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(206U);
    msg.seq = 49495U;
    msg.sys_dst.assign("OMWGEHZFRJOMPXQVEYXQJQTOGWKOOIRPZDVRWJBAFBBSWVYGMYYVQTWUGUPHAASRBEUGKMUICZMQAXXCKQTIZMDUVTNBYTLHAUKTOYYIONSRHOTE");
    msg.flags = 170U;
    const signed char tmp_msg_0[] = {-127, -127, -60, -7, 34, -125, 13, 118, -117, 90, 60, 91, -40, 96, 57, 99, -46, -6, 115, 19, -30, 122, -104, 123, -54, -34, 97, 41, -97, -5, -125, 18, -71, 3, -124, -7, 70, 31, -28, -79, 82, -111, -40, -91, -64, -47, 41, 58, -12, -98, -20, -53, 62, -23, -122, -35, 96, 81, -5, 117, -81, 60, 66, 56, 61, -56, -114, 107, -44, 89, 96, -43, -62, -74, 9, -70, -62, -107, -120, 37, 124, -44, -42, 118, 85, -23, 4, 25, -79, -85, -35, -4, -83, -127, 64, -7, -25, 1};
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
    msg.setTimeStamp(0.8535275730644691);
    msg.setSource(24889U);
    msg.setSourceEntity(167U);
    msg.setDestination(48385U);
    msg.setDestinationEntity(123U);
    msg.seq = 4760U;
    msg.sys_dst.assign("MCDDGCEBKLMPKEXNCJJODAEUHMMURSRCUZYQRKOZKUPXXLSJQGQWOXCICIBXUHTKHTNYILPLZZDZMZNAOXBYCZYJNSWAFSAIUTGYLUILKLNWNIIWXKRJDOVNKHODGZCEQATNOXEFVTERLFA");
    msg.flags = 126U;
    const signed char tmp_msg_0[] = {-26, 50, -16, 84, -124, -18, -72, -78, -5, 64, -25, -62, -34, 37, -69, 44, 30, -90, -19, -62, -102, 52, -38, -16, 123, -70, -120, 103, -75, -82, 74, 113, 63, -43, 6, 92, 58, 51, 108, -43, 89, -5, -94, 126, -37, 80, 59, 40, 121, 33, -39, 121, 79, 78, -85, -97, -81, -120, -32, 74, -74, -120, 116, -66, -86, -87, -86, 75, -28, 107, 66, -30, -120, -43, -91, -119, -42, 29, 36, -13, -111, -127, -109, 85, 78, -90, 112, 79, -28, -24, 125, 45, -43, -61, -25, 118, -120, 63, 124, -102, -103, 26, -57, -18, 79, -10, 17, -54, -102, 123, -44, 55, -49, -62, -25, 50, -116, -120, 102, 91, -7, -37, 113, 102, 18, 97, -13, 23, 16, -47, 83, -4, 16, -59, -125, -67, -71, 27, -27, -18, 53, -111, 57, 124, -125, -47, 43, 113, -29, 105, 90, -43, -88, -62, 50, -46, -4, -109, 37, 89};
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
    msg.setTimeStamp(0.21791744465708607);
    msg.setSource(10884U);
    msg.setSourceEntity(241U);
    msg.setDestination(24478U);
    msg.setDestinationEntity(175U);
    msg.seq = 30279U;
    msg.sys_dst.assign("WPGSMADDLOFANFCGXCVFRMIBFZJNUAYGDEPWVECPQXJVCAISWKWLEVSUPNTRGVQUK");
    msg.flags = 141U;
    const signed char tmp_msg_0[] = {-49, 74, -72, 104, -54, -103, -23, -91, -117, 3, 79, 9, 77, -62, -83, 60, -86, -53, -120, 3, -101, -88, 13, -50, 5, 106, 20, -88, -121, -107, -117, 122, -100, 51, 55, -29, 102, -62, -37, -57, 1, -47, 73, -66, 25, 101, -8, -50, 9, 102, 8, 7, 57, -95, -9, 13, -25, -75, -55, 101, 71, 109, -53, -83, -107, -103, 85, -70, 81, 104, 125, 118, -64, -67, 117, -52, -3, -117, 106, -53, -85, 6, 91, 51, 119, -56, -126, 54, 4, 120, -34, 103, -104, -125, -76, 42, 3, -107, -115, -112, -16, 101, -94, 67, -1, -83, 52, 119, 104, -105, -48, 38, -69, -93, -100};
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
    msg.setTimeStamp(0.5066174057513917);
    msg.setSource(18063U);
    msg.setSourceEntity(161U);
    msg.setDestination(32191U);
    msg.setDestinationEntity(58U);
    msg.sys_src.assign("UVXBILYTYRMHDGHEAYGEUMQITSMEJTNXVYTXKBQXFAGDQFRIDBFETEYUFYWMHHGDBXNCSSBIKPWBAKZPYWLLVALLPDZCQNAIOSVZRFJCMHADPPSCSJEYOCJIWVONZDXUEGTMLOQPRUKEIPQRFRTGKYKFVNUGIOKQNXSZNWZDHTOKNGAQHPSXJWVZBWANCOFMYSFEUAZIGJUZBBHNVQ");
    msg.sys_dst.assign("DSTAEAYNCVCMGIHZPIQKEQZBSZQHMFWVBUXSHZGCUHMJKDPRPVVSOFOWQUXJYIYAGEQXFPMVTRLMWKGVIPLCQIUQKWFBPYNWTGEOQARTUNBHZRBEHTRNOPDWOJKMOSYROFGKJMAIX");
    msg.flags = 80U;
    const signed char tmp_msg_0[] = {-13, -69, -34, -126, -61, -46, 25, 42, -71, 105, -90, 76, 39, 73, -71, -105, 26, -64, 80, 71, 114, 87, 122, 86, -80, -82, -47, 50, -128, -91, -64, -102, -54, -76, -61, 27, -117, 9, 97, -25, 33, -55, 32, -126, -56, 121, -110, -10, -37, 28, 48, 53, 70, 44, -22, 5, -2, 15, 21, -99, 25, 108, 39, -15, 74, -71, 118, -113, -13, 4, -124, 46, -125, -24, -6, -8, -64, 108, -87, -33, -117, 114, 35, -79, 109, 34, -6, -45, 74, -7, -125, 78, -102, -6, 69, -50, -77, -2, -119, -24, 48, 114, 58, -102, -127, 2, 55, -86, -3, 34, 108, -41, 29, 9, 24, 107, -13, 76, -6, 98, 56, 49, 98, -57, 19, -31, 26, -11, -103, -90, 102, -114, -72, -65, 41, -4, 9, -41, 93, -5, -40, 74, 12, 20, -121, 71, -13, -85, 58, -35, -24, 26, 94, 42, 55, 88, 93, -123, -57, -84, 125, 125, -120, 97, 61, -82, 25, -22, -108, -77, 36, 66, -9};
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
    msg.setTimeStamp(0.35744516902753687);
    msg.setSource(47479U);
    msg.setSourceEntity(129U);
    msg.setDestination(54549U);
    msg.setDestinationEntity(91U);
    msg.sys_src.assign("RJOAYJLGNXSUQMQLICNWQZKLTSPMXSUERIIQGNDKRPXGOTHZLXTRTAZXWIMFYVIQHMTIXURMIWDEVSAOQHDSFBXRGKAELAMHKACEXTABIUZGLKVYCMNYPNMOOPDWVGEQYHBJBHKDIOYPYJJATDPNVDBTNGHQAZJGSVPUYDJDWBSJFFLNWJKWLUECHOUZZDZSPKGEGWXRECRMJQPSOPCFUNLLIUCCVTWBVFSKUYFEEORHF");
    msg.sys_dst.assign("QVOGUNUZUUCLHHNDJWQXIZRZHIWPSQKPPLSQWTFXWTZDWOYHENYDHSGFHWAEKYNWDPLMCIJDMZYURBXUESNZSHKNEXNOEVGXRFQCUSLZCMAJHKNJTZCAIMTJKBXQFXEGPTMWLSSNAOBRUDQ");
    msg.flags = 94U;
    const signed char tmp_msg_0[] = {-78, -70, 94, -69, 65, 18, 13, -29, 71, -87, -47, -64, -4, 4, 4, 70, -121, -34, 116, 117, -91, 56, -45, 84, -53, 73, 48, -78, 81, -2, 90, -4, -110, 4, 101, -86, 116, 6, -46, -45, 22, -92, -120, -112, -127, -126, -17, 105, 28, -117, 114, 40, 12, 37, 43, -56, -41, -123, 99, 40, 2, -81, 73, -9, -33, -77, -55, 40, -60, -12, -92, -110, 22, 85, -73, 103, -12, 79, -47, -5, -64, 54, 43, -76, 24, 84, -12, 90, 93, -64, 84, -9, -7, 103, 61, -69, -109, -48, -72, -52, -44, -99, -37, -10, 48, 61, 47, -112, 115, -110, -8, -5, 69, -71, -113, 83, -36, -126, -15, 106, -118, -55, -98, 110, -16, -120, -116, -68, -4, -92, -65, 66, -8, -81, 87, -127, 84, -66, 103, -4, 40, 62, 87, -71, 112, 85, -123, -1, -86, 114, -99, 86, -49, -26, -21, -103, 41, -79, -124, -90, -34, -18, -28, -25, -97, -27, 85, 111, 88, -68, -64, 83, 19, 17, -57, -85, -69, 25, -41, 73, 26, -112, -111, -67, -113, 113, 112, -33, 13, 16, 32, 118, 56, -43, 46, 89, -80, -9, -41, -38};
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
    msg.setTimeStamp(0.7927642177761477);
    msg.setSource(45343U);
    msg.setSourceEntity(35U);
    msg.setDestination(12941U);
    msg.setDestinationEntity(213U);
    msg.sys_src.assign("RFHEDEZCZZQCXOHTMYAEDKUWVDKKOAOQGZMBGWFUUOTITZULSDAKJFIJSSYXNBQPTRXQZISPRCENVIIVENBDNLHZYMLDOXPRDCRXPDVIMWMYLZQAOHISNJUEMFCLOWQWTKUURBKFGVTFJYNFEKIMHPZGEVKEOLSGJTXMBSXDJQROHJTVBQLYIPYAXACTXHSNJWAMAHBKBFFYQVBKPRBWSEXYNCWNDAUMHGCGFUGIJTQSG");
    msg.sys_dst.assign("LTVRUYWSAWTNDQOMEJZKCGKMCGKXIVFIHNLBFSDSWLZRWICJPPQHAUDDMWSHVBCKTWYUVAOMMIVXRDSAQYWTYGJPESYWHOGYGDBOPNTQXZJWERORHFKOPFTHUQSMXNZMJXYAGRPXJKVBMIGOFYAQAFUBEWXZAVUKOQNVDIOVDPIZZXZFNYSHIKBFKEBRNSHLPECCJLLLTUGFRCMQPTERBDI");
    msg.flags = 47U;
    const signed char tmp_msg_0[] = {89, -114, -61, 98, -119, 11, -41, -60, 76, -50, -116, -12, 44, 53, -86, -26, -59, -22, -53, 36, -65, 82, 36, -74, -59, -104, 31, -89, 109, -30, -32, 17, -15, -97, 79, 54, -88, -21, 10, 107, 99, -109, -128, -59};
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
    msg.setTimeStamp(0.3570359038906178);
    msg.setSource(65076U);
    msg.setSourceEntity(210U);
    msg.setDestination(49387U);
    msg.setDestinationEntity(249U);
    msg.seq = 384U;
    msg.value = 77U;
    msg.error.assign("UOZPOHUBQSXZSMBFCOKOMDYTVWSYRGDJLDIMVQEBHENFVKMKEBWEJMITTCWOAPBNGTMIZKIZFGPTWUPPSLDYZAYPWJDYONI");

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
    msg.setTimeStamp(0.10659621258072782);
    msg.setSource(18652U);
    msg.setSourceEntity(86U);
    msg.setDestination(17563U);
    msg.setDestinationEntity(125U);
    msg.seq = 45838U;
    msg.value = 14U;
    msg.error.assign("RFYQEURSUZSZYERXIOYSENNTHPNFBPMDEJRVXSCEGXCAYCFLBTKRVKMLIXOGLQWUHFOQGWUIKSVSLJZQBMXQCPVOZORMIYPCNCBTJMWKLWVIHTIPJUHZBWUBDDTALJYMOLBTFASBIDQKYGLJKDGWSOOJYXPZBYPLCNVQOYMQLWZPTNSCTQHIJHNMKVUIDGGAGDHUZFKOHEDAQEZHWFTUVXDFVDRTAGWPMVWAMEZNGEANCAPSEANH");

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
    msg.setTimeStamp(0.2554487366878915);
    msg.setSource(49537U);
    msg.setSourceEntity(191U);
    msg.setDestination(41681U);
    msg.setDestinationEntity(51U);
    msg.seq = 40216U;
    msg.value = 15U;
    msg.error.assign("TAYNHRPEMSCBYTQTRLLGXLNLVGRTSRSUXUVZCIRDDMKNNAODKQLTADWBCQNMIELWDPJMGGTAAOYSKJXQIJVEFWZYHYIPKBRSFJCYFSCPKOOXCIRDPAUBHKHBNECHDXCG");

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
    msg.setTimeStamp(0.8294947173116296);
    msg.setSource(25212U);
    msg.setSourceEntity(168U);
    msg.setDestination(18633U);
    msg.setDestinationEntity(62U);
    msg.seq = 11562U;
    msg.sys.assign("FULTMPXPGCRCLXODSWNTBPADQSXYIMQGMYXANWGYYQBPNQIJEOLNKZAGZLYPYMDVMSJAOQKJTFUOMNHOBIWWEYGXJVSXNKILFCAUYNMUACTIPILHKIZBDBHVRSHSWOPWAJNGRHKKFTSEBVFEJKFFKZGQTTDOJRHTEHYRITCIEQZEGGLPHS");
    msg.value = 0.018089531294416927;

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
    msg.setTimeStamp(0.6433096877721983);
    msg.setSource(5849U);
    msg.setSourceEntity(120U);
    msg.setDestination(32600U);
    msg.setDestinationEntity(53U);
    msg.seq = 64506U;
    msg.sys.assign("GNJMDQLPVCHABLOLXAAGRKDUVXOMWMRGINOHUYEKIQYRPAQZHFTGWRMWEOFWHKFRDCSEMXEQVPMJZJNELNBHHLZIOQSPUDAPYOBYHEUEZFZCFFFRIKQASHNCIRKIBULPUUUXCZMQHTDGMYYOPBLZCDVTRKW");
    msg.value = 0.3280853571419162;

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
    msg.setTimeStamp(0.7023252461794955);
    msg.setSource(3018U);
    msg.setSourceEntity(17U);
    msg.setDestination(33309U);
    msg.setDestinationEntity(236U);
    msg.seq = 10182U;
    msg.sys.assign("KEHENWEUKOVPSZRKPGNCWGTYNXURNZJPAWCDKZLMGVMLWLGZCISMCBQOIDOXDURLJFJHMG");
    msg.value = 0.016317069889053237;

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
    msg.setTimeStamp(0.72067691760844);
    msg.setSource(32342U);
    msg.setSourceEntity(246U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(240U);
    msg.seq = 65416U;
    msg.sys_dst.assign("CJRKJCKZTCBUPWFLZXDELLNSIFKYHHKGSNQBJVJMZRLEVAWUKEUU");
    msg.timeout = 0.67541965475339;

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
    msg.setTimeStamp(0.7843756298292143);
    msg.setSource(36617U);
    msg.setSourceEntity(8U);
    msg.setDestination(51076U);
    msg.setDestinationEntity(151U);
    msg.seq = 10718U;
    msg.sys_dst.assign("PNLGFIXPOWHIRVZKBVNCOIV");
    msg.timeout = 0.10899111156236951;

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
    msg.setTimeStamp(0.967910321235916);
    msg.setSource(57485U);
    msg.setSourceEntity(157U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(172U);
    msg.seq = 6977U;
    msg.sys_dst.assign("VPEOVVTUOTIOIHMADUQLYAGHZBORCLHVGFHXOAPMDXFGZGNXMNCRQYCLMEUIKKQZPSKLUEWJHBNWRCYWIMNTMJVPRAYFIUAZFKCUWIOFEXMIFXVCRLBXRWJHNXCDWOYSKQEDKPRBJLVEUAJGEWPHTPBSLHNNSAGVTQKEGSQMOHLICNDMAZEKOTKIBFZDHTGNTFSFBPUBGRPCYBYWSYXZKJJZADUVQCSRGQIAWQBPZ");
    msg.timeout = 0.9986329840886632;

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
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.8616610786242134);
    msg.setSource(22425U);
    msg.setSourceEntity(74U);
    msg.setDestination(54638U);
    msg.setDestinationEntity(28U);
    msg.seq = 60795U;
    msg.op = 125U;
    msg.baseline_flags = 98U;
    msg.time = 0.9564697400710288;
    msg.class_user_id = 187U;
    msg.application_type = 127U;
    const signed char tmp_msg_0[] = {-26, 9, 26, 13, 9, -25, -35, 42, -18, 44, -122, 79, 54, 54, 119, -17, -27, -84, 45, -39, 43, -34, 51, -52, 3, -76, -78, -36, 101, 21, -115, -92, 69, 69, -18, 82, -105, -11, 28, 25, 115, 46, 70, 96, 78, -39, -80, 99, -19, 55, 26, -56, 27, 113, -7, -38, -113, -57, -67, 4, -31, -108, 76, -37, 38, -113, 63, 77, 84, -82, -50, 78, 12, 12, -15, -31, -92, 15, 66, -88, -33, 54, -41, 83, 47, -61, 126, -67, -12, 85, 92, 69, -87, -73, 33, -91, -85, 50, 104, 23, -24, -7, 71, 75, -70, 54, 29, 88, 9, -24, 41, -50, 46, 102, -17, 125, 65, 32, 93, -39, -81, -66, 22, 66, -121, -112, -48, -117, -45, 28, -96, -113, 124, -20, -58, 126, -119, -17, -120, 94, 70, -4, -112, -56, -109, -104, 77, -64};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("JYTTSZEHGQMXQPGLHHNJISJDKMODNXPXIZVDCYRUWFFPFPQOTQPMPRMLCAORIIKGMQKWWDEZ");
    msg.length = 21U;
    const signed char tmp_msg_1[] = {-43, -28, -113, -92, -52, 42, 96, 115, 16, -53, -37, -25, 6, 81, -41, 45, 122, 23, -64, 84, 19, -2, -20};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.9725818453445515);
    msg.setSource(21298U);
    msg.setSourceEntity(29U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(44U);
    msg.seq = 29846U;
    msg.op = 148U;
    msg.baseline_flags = 68U;
    msg.time = 0.391800106431047;
    msg.class_user_id = 140U;
    msg.application_type = 116U;
    const signed char tmp_msg_0[] = {-74, 97, 110, -35, -22, -27, 52, 78, 42, -15, -35, -123, 125, -117, 94, -11, -11, 119, -37, -45, 93, 10, -116, -85, 39, 83, -102, 2, -35, -38, 53, -19, -18, -114, -96, 112, -92, 6, 42, 126, -32, 28, -122, -2, 18, 91, 92, -87, 108, -52, -109, 49, -14, 13, 25, -69, 12, 15, 85, -53, 119, 50, -13, 114, 43, -57, -110, -27, 77, -3, -11, 30, -47, 41, -96, -47, -16, -115, -53, -113, 21, 5, -31, 121, 72, -24, -32, 108, 4, -83, 17, -15, -117, -57, 2, -26, -69, -34, 40, -123, -118, 123, -1, 114, 103, 124, -33, -105, -12, 100, -64, 25, -42};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("KGRKYCOGUQAYKMVPCHBPPCISMDTEXMEIUCETSFOCCLHWTUUDLULBUPIUCLXVVWQMFPZNELABNGMMTORWRKEJVWWTGYXIJIYRSJQJW");
    msg.length = 161U;
    const signed char tmp_msg_1[] = {-38, -112, 25, -122, 124, 55, 81, -60, -39, 35, -1, 0, 124, 58, -82, 50, 103, 7, -37, 22, -93, 102, 79, -52, 44, 8, 100, -36, -25, 104, -55, -86, -52, -113, 76, 69, 56, 83, -100, -61, 74, -51, -121, 1, -67, -100, 15, 104, -91, -65, 121, 65, -67};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.15811717657937086);
    msg.setSource(28423U);
    msg.setSourceEntity(126U);
    msg.setDestination(44308U);
    msg.setDestinationEntity(226U);
    msg.seq = 55612U;
    msg.op = 77U;
    msg.baseline_flags = 138U;
    msg.time = 0.3821010829428281;
    msg.class_user_id = 115U;
    msg.application_type = 67U;
    const signed char tmp_msg_0[] = {-123, -32, -26, 116, -65, -30, -64, 79, 62, -45, -51, -97, 52, 54, -127, 46, 77, -21, 55, -101, -83, 110, -29, 66, 63, 114, -82, 35, 31, -61, -5, -98, 21, 92, 111, -45, -33, -27, -40, -83, 61, -63, 105, -98, 2, 66, 54, -89, -93, 22, 44, -92, -27, 63, -94, 11, 28, -67, -79, 110, 11, -122, 88, -32, 117, -42, -111, -97, -113, -51, 28, 60, -96, -37, 94, -65, -43, 112, -91, 15, 19, -16, 70, -123, 79, -18, 66, 55, -3};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("POAVVRGVOKBZVNUJDDMPJEWJWBTLZVHSXXXDDJNMYPISAZRSPKTVXBH");
    msg.length = 169U;
    const signed char tmp_msg_1[] = {-28, -39, 5, 80, -114, 49, 34, 62, -88, -49, 30, 52, 37, -7, 96, 56, 5, -35, 94, -1, 98, -29, 21, 77, 107, -9, -113, -70, 52, 53, -110, 94, -45, 0, 75, -30, -61, -12, -98, 94, 102, 112, -103, -80, -64, 66, 52, -104, -53, 116, -76, -17, -46, 5, 97, 19, -5, 23, 61, -39, 82, 78, 31, 26, 96, 14, 66, -3, 108, 97, -64, -48, 1, -37, -84, -46, -48, -92, 19, 124, -2, 0, 17, 33, 82, -28, -2, -114, -48, 120, 102, 82, -27, -55, 98, 119, -89, -120, 83, 119, -122, -82, -60, 81, 65, -50, 4, -115, -121, -11, 23, -109, 74, -44, 58, 71, -115, 95, 92, -96, -72, -128, -82, -55, -56, -15, -63, 90, -119, -2, 14, 105};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #2", msg == *msg_d);
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
    msg.setTimeStamp(0.4283231187984199);
    msg.setSource(49005U);
    msg.setSourceEntity(131U);
    msg.setDestination(35053U);
    msg.setDestinationEntity(183U);
    msg.action = 129U;
    msg.longain = 0.8804145588336637;
    msg.latgain = 0.9615213525169461;
    msg.bondthick = 3767175676U;
    msg.leadgain = 0.8043396782323142;
    msg.deconflgain = 0.7649036929692442;

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
    msg.setTimeStamp(0.6687353740668759);
    msg.setSource(16915U);
    msg.setSourceEntity(100U);
    msg.setDestination(2470U);
    msg.setDestinationEntity(13U);
    msg.action = 249U;
    msg.longain = 0.30560957274994827;
    msg.latgain = 0.38046308102363335;
    msg.bondthick = 2791292479U;
    msg.leadgain = 0.36419553053261056;
    msg.deconflgain = 0.8987370278172759;

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
    msg.setTimeStamp(0.2132357316248853);
    msg.setSource(24837U);
    msg.setSourceEntity(226U);
    msg.setDestination(24084U);
    msg.setDestinationEntity(88U);
    msg.action = 20U;
    msg.longain = 0.6631841838619627;
    msg.latgain = 0.7948406698456979;
    msg.bondthick = 365700500U;
    msg.leadgain = 0.799705626682037;
    msg.deconflgain = 0.8743113883789693;

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
    msg.setTimeStamp(0.28390302578648563);
    msg.setSource(5975U);
    msg.setSourceEntity(167U);
    msg.setDestination(9249U);
    msg.setDestinationEntity(152U);
    msg.err_mean = 0.3944504246488606;
    msg.dist_min_abs = 0.4584530756973856;
    msg.dist_min_mean = 0.9822284402543408;

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
    msg.setTimeStamp(0.06480574497062253);
    msg.setSource(27807U);
    msg.setSourceEntity(45U);
    msg.setDestination(37892U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.023043776676344274;
    msg.dist_min_abs = 0.0891527729692565;
    msg.dist_min_mean = 0.8531808837932873;

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
    msg.setTimeStamp(0.9323120530674476);
    msg.setSource(51965U);
    msg.setSourceEntity(174U);
    msg.setDestination(47338U);
    msg.setDestinationEntity(126U);
    msg.err_mean = 0.1367882356638913;
    msg.dist_min_abs = 0.8763240899963138;
    msg.dist_min_mean = 0.7255835331523833;

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
    msg.setTimeStamp(0.9632431537478707);
    msg.setSource(11082U);
    msg.setSourceEntity(80U);
    msg.setDestination(45026U);
    msg.setDestinationEntity(149U);
    msg.action = 69U;
    msg.lon_gain = 0.9009207672374501;
    msg.lat_gain = 0.7432239473304463;
    msg.bond_thick = 0.018448149914324308;
    msg.lead_gain = 0.05445551879091948;
    msg.deconfl_gain = 0.29480745589456125;
    msg.accel_switch_gain = 0.41859367800346325;
    msg.safe_dist = 0.519954936044477;
    msg.deconflict_offset = 0.06861483905664234;
    msg.accel_safe_margin = 0.7266877993795474;
    msg.accel_lim_x = 0.8751084079625105;

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
    msg.setTimeStamp(0.05952792468177859);
    msg.setSource(2660U);
    msg.setSourceEntity(132U);
    msg.setDestination(11994U);
    msg.setDestinationEntity(3U);
    msg.action = 243U;
    msg.lon_gain = 0.7919528773215648;
    msg.lat_gain = 0.12404995768053051;
    msg.bond_thick = 0.6339654028531786;
    msg.lead_gain = 0.7225949785653161;
    msg.deconfl_gain = 0.2655168751453091;
    msg.accel_switch_gain = 0.29394304647839586;
    msg.safe_dist = 0.7893550300458756;
    msg.deconflict_offset = 0.9555631517518628;
    msg.accel_safe_margin = 0.22235363874575298;
    msg.accel_lim_x = 0.5103719268260832;

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
    msg.setTimeStamp(0.31380994681058494);
    msg.setSource(43786U);
    msg.setSourceEntity(7U);
    msg.setDestination(14780U);
    msg.setDestinationEntity(227U);
    msg.action = 69U;
    msg.lon_gain = 0.22814586780281465;
    msg.lat_gain = 0.4014172813463289;
    msg.bond_thick = 0.8233354644669039;
    msg.lead_gain = 0.4171074041472178;
    msg.deconfl_gain = 0.07132746066052331;
    msg.accel_switch_gain = 0.1578967738529483;
    msg.safe_dist = 0.6820603180199571;
    msg.deconflict_offset = 0.12681372091531196;
    msg.accel_safe_margin = 0.9955151770830513;
    msg.accel_lim_x = 0.5635228209666049;

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
    msg.setTimeStamp(0.15375082590907463);
    msg.setSource(12471U);
    msg.setSourceEntity(21U);
    msg.setDestination(31640U);
    msg.setDestinationEntity(215U);
    msg.type = 196U;
    msg.op = 92U;
    msg.err_mean = 0.6883669749143039;
    msg.dist_min_abs = 0.2742757002033014;
    msg.dist_min_mean = 0.9232089919678598;
    msg.roll_rate_mean = 0.7349364262582462;
    msg.time = 0.13616216393806235;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 189U;
    tmp_msg_0.lon_gain = 0.48967611848817416;
    tmp_msg_0.lat_gain = 0.5395314962299679;
    tmp_msg_0.bond_thick = 0.7595731014075202;
    tmp_msg_0.lead_gain = 0.022784938514265773;
    tmp_msg_0.deconfl_gain = 0.7571564267053721;
    tmp_msg_0.accel_switch_gain = 0.7141218031962688;
    tmp_msg_0.safe_dist = 0.04565699853768612;
    tmp_msg_0.deconflict_offset = 0.6199722563098871;
    tmp_msg_0.accel_safe_margin = 0.01917877752677677;
    tmp_msg_0.accel_lim_x = 0.19727086071217337;
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
    msg.setTimeStamp(0.5397923289192833);
    msg.setSource(27557U);
    msg.setSourceEntity(9U);
    msg.setDestination(41163U);
    msg.setDestinationEntity(155U);
    msg.type = 91U;
    msg.op = 228U;
    msg.err_mean = 0.1710284596432472;
    msg.dist_min_abs = 0.22551166895893782;
    msg.dist_min_mean = 0.4411992354531875;
    msg.roll_rate_mean = 0.7584317076380448;
    msg.time = 0.027170460752707903;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 253U;
    tmp_msg_0.lon_gain = 0.6388057426526461;
    tmp_msg_0.lat_gain = 0.8100081383758292;
    tmp_msg_0.bond_thick = 0.4167844206396192;
    tmp_msg_0.lead_gain = 0.06593517441398455;
    tmp_msg_0.deconfl_gain = 0.36440286977286096;
    tmp_msg_0.accel_switch_gain = 0.2195642077718003;
    tmp_msg_0.safe_dist = 0.7997818382513292;
    tmp_msg_0.deconflict_offset = 0.30818943985926506;
    tmp_msg_0.accel_safe_margin = 0.8248567450063597;
    tmp_msg_0.accel_lim_x = 0.4686453416554145;
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
    msg.setTimeStamp(0.03773423958546562);
    msg.setSource(15975U);
    msg.setSourceEntity(200U);
    msg.setDestination(54093U);
    msg.setDestinationEntity(190U);
    msg.type = 26U;
    msg.op = 234U;
    msg.err_mean = 0.6869844790318933;
    msg.dist_min_abs = 0.007500895558903986;
    msg.dist_min_mean = 0.9361164175202659;
    msg.roll_rate_mean = 0.6670666671257798;
    msg.time = 0.6673099242245689;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 198U;
    tmp_msg_0.lon_gain = 0.6192033462384774;
    tmp_msg_0.lat_gain = 0.11369073734393509;
    tmp_msg_0.bond_thick = 0.2566486583048685;
    tmp_msg_0.lead_gain = 0.870239559005032;
    tmp_msg_0.deconfl_gain = 0.4716015070743401;
    tmp_msg_0.accel_switch_gain = 0.06641654339781489;
    tmp_msg_0.safe_dist = 0.8468666351230251;
    tmp_msg_0.deconflict_offset = 0.09575705740710527;
    tmp_msg_0.accel_safe_margin = 0.3745513346744017;
    tmp_msg_0.accel_lim_x = 0.6454356383108475;
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
    msg.setTimeStamp(0.5618186601301605);
    msg.setSource(3718U);
    msg.setSourceEntity(91U);
    msg.setDestination(12244U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.24574827765170715;
    msg.lon = 0.8313961484881278;
    msg.eta = 3974690621U;
    msg.duration = 12430U;

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
    msg.setTimeStamp(0.3927677149224499);
    msg.setSource(40326U);
    msg.setSourceEntity(46U);
    msg.setDestination(43976U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.6790929057153923;
    msg.lon = 0.40096573150942216;
    msg.eta = 1254646423U;
    msg.duration = 44232U;

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
    msg.setTimeStamp(0.4888054560959858);
    msg.setSource(38218U);
    msg.setSourceEntity(72U);
    msg.setDestination(49567U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.9891292788884056;
    msg.lon = 0.5837942044888143;
    msg.eta = 1381413046U;
    msg.duration = 64254U;

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
    msg.setTimeStamp(0.2071580720118925);
    msg.setSource(42126U);
    msg.setSourceEntity(129U);
    msg.setDestination(20654U);
    msg.setDestinationEntity(251U);
    msg.plan_id = 34242U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.14755815977815756;
    tmp_msg_0.lon = 0.20156147611456487;
    tmp_msg_0.eta = 2691330658U;
    tmp_msg_0.duration = 51239U;
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
    msg.setTimeStamp(0.38984811849877354);
    msg.setSource(62855U);
    msg.setSourceEntity(212U);
    msg.setDestination(14991U);
    msg.setDestinationEntity(215U);
    msg.plan_id = 8333U;

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
    msg.setTimeStamp(0.49653443186519053);
    msg.setSource(16135U);
    msg.setSourceEntity(144U);
    msg.setDestination(53128U);
    msg.setDestinationEntity(169U);
    msg.plan_id = 36356U;

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
    msg.setTimeStamp(0.832437647136242);
    msg.setSource(40076U);
    msg.setSourceEntity(79U);
    msg.setDestination(54661U);
    msg.setDestinationEntity(164U);
    msg.type = 63U;
    msg.command = 112U;
    msg.settings.assign("YMGQBZQGUFBEYBXVRONACPSKHHZZOHEUFIZHLZDYINIZV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 6318U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6415602475698029;
    tmp_tmp_msg_0_0.lon = 0.20602892284745555;
    tmp_tmp_msg_0_0.eta = 196018787U;
    tmp_tmp_msg_0_0.duration = 18028U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BBFKVWAYAQIBPPRMEZQBNQZSMIPKPIIEWEIMZUEHCLJDLUKRFRDWOUMQWMAILEXMPOJAFSYAVKNJNURDMQRWWXZYHBGMVDGKFJZYTOFTOPDJPNXPFSNYBRRCGVFOLCYHEWVYNSLHUIDTDUJWHGUJZXJZNSTOKGOSFGAXGGHHVOTIUQOSCQTHACPYFVUFZGKEWLKCEYYNSMCHLACV");

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
    msg.setTimeStamp(0.8808099713746006);
    msg.setSource(44261U);
    msg.setSourceEntity(32U);
    msg.setDestination(18039U);
    msg.setDestinationEntity(51U);
    msg.type = 54U;
    msg.command = 12U;
    msg.settings.assign("MCCQXTSHVVMPXPFRNKZTQWOTUMPGDOGSHIRXFSEUPHAGVUCLFGIOKRTXPLBRVDNAWTZNLRNKHBSGEXWCVJEKMLGBDTPEAFEE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54922U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TNGQGDSZYAJENBQIEXDALHCERYWABJIONKZDHGXCHCLTDPNASUHXAVIBZKPJGPISVU");

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
    msg.setTimeStamp(0.6095600426939807);
    msg.setSource(16009U);
    msg.setSourceEntity(136U);
    msg.setDestination(59167U);
    msg.setDestinationEntity(66U);
    msg.type = 132U;
    msg.command = 190U;
    msg.settings.assign("QQJMBWVLKEGPQTZVRDQZOLQWXPPVZNSYFTAKFVRHMHPNQNGLENWYAGQQSLDJPYFIZLEIDVWLXKRSUUGKALCDBXIOHNHGVSP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11570U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5185563281638543;
    tmp_tmp_msg_0_0.lon = 0.3878062318461113;
    tmp_tmp_msg_0_0.eta = 3825422961U;
    tmp_tmp_msg_0_0.duration = 882U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NCATKBMACEPOVPHSTNDGOEOVUXTYQVUXCXNHLA");

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
    msg.setTimeStamp(0.8364843918460071);
    msg.setSource(57207U);
    msg.setSourceEntity(209U);
    msg.setDestination(34289U);
    msg.setDestinationEntity(180U);
    msg.state = 117U;
    msg.plan_id = 39381U;
    msg.wpt_id = 108U;
    msg.settings_chk = 11273U;

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
    msg.setTimeStamp(0.5309983048040343);
    msg.setSource(56905U);
    msg.setSourceEntity(97U);
    msg.setDestination(2984U);
    msg.setDestinationEntity(69U);
    msg.state = 3U;
    msg.plan_id = 13001U;
    msg.wpt_id = 39U;
    msg.settings_chk = 11534U;

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
    msg.setTimeStamp(0.7397756576605622);
    msg.setSource(25144U);
    msg.setSourceEntity(219U);
    msg.setDestination(36821U);
    msg.setDestinationEntity(89U);
    msg.state = 51U;
    msg.plan_id = 17262U;
    msg.wpt_id = 205U;
    msg.settings_chk = 23576U;

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
    msg.setTimeStamp(0.8166509373787023);
    msg.setSource(25504U);
    msg.setSourceEntity(247U);
    msg.setDestination(8251U);
    msg.setDestinationEntity(169U);
    msg.uid = 158U;
    msg.frag_number = 103U;
    msg.num_frags = 126U;
    const signed char tmp_msg_0[] = {77, 29, 87, -15, -105, -103, -71, 21, 89, 6, 69, -104, -71, -62, -114, -113, 65, -126, -124, 81, -113, 104, 64, -121, -82, 15, 120, -116, -124, 3, 57, 79, -49, 16, -83, -110, 109, -49, -18, 25, -45, -11, 17, 31, 125, -114, 17, 67, -27, 89, -6, -40, 116, -96, -100, -75, -127, 56, -65, 36, 118, -113, -58, 74, -124, -118, 90, -59, 16, 29, 125, -126, 101, -48, -35, -112, 63, -1, 123, -107, 60, -22, 85, -100, -75, -112, 50, 44, -93, -83, 19, -2, -36, -60, -79, 42, -1, 70, -29, 17, -46, -37, -65, -68, -69, -33, 9, -31, 58, 10, -110, -27, -115, -68, 42, -6, -28, -36, 122, -104, -126, 75, 22, -87, -53, -21, -117, 77, -56, -88, 89, 54, 23, 39, -103, 99, 66, -107, -24, 100, -60, 49, -125, 41, 21, 104, 104, 62, -28, -79, -33, 96, -49, 85, 25, 27, -43, 60, 14, 4, -122, -104, -61, -2, 47, -10, 68, 11, -50, -31, 97, -19, -81, -113, 53, 65, 28, 70, 37, 49, -106, 25, -119, 91, -80, 104, -117, 64, 10, 27, 47, 34};
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
    msg.setTimeStamp(0.2763313004055057);
    msg.setSource(56922U);
    msg.setSourceEntity(74U);
    msg.setDestination(35096U);
    msg.setDestinationEntity(50U);
    msg.uid = 163U;
    msg.frag_number = 119U;
    msg.num_frags = 7U;
    const signed char tmp_msg_0[] = {-54, 112, 60, -118, -84, -9, 70, 70, 94, -21, -108, -5, -57, 91, -119, -14, 50, -126, 25, 122, 100, 33, 84, -99, 120, -116, -37, 107, 117, 36, 11, -91, -114, -78, -120, -56, -78, 108, 67, -46, -54, -100, 62, 1, -107, -106, -128, 36, 92, 93, 71, 15, -74, -109, 34, -69, -53, 40, -41, 23, 99, -47, -99, -118, -96, 13, -46, 55, 124, 123, 69, 80, -71, 21, -20, 36, -59, -100, -44, 59, -29, 53, 30, -41, -31, -120, -113, -85, 11, -47, 56, 45, 38, -4, -42, 44, 12, 41, 55, 79, -75, 18, 100, -29, -121, 12, 8, 74, 56, 124, -28, 39, 70, 82, -62, 1, 43, 114, -26, 93, -104, 16, -1, 23, 4, -124, 97, 98, -71, 47, 55, 91, 59, -106, -13, 107, -115, -12, 13, 103, -38, -58, -90, -121, -18, 90, 70, 21, 5, 25, 50, -20, 87, -22, -66, 97, 70, -20, 50, -42, -45, -34, -67, -67, -48, 95, -9, 126, -21, 78, -73, -110, -75, -74, 27, -98, 110, 44, -105, 122, 67, 121, 117, -19, 97, -5, 49, 30};
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
    msg.setTimeStamp(0.6382425712187);
    msg.setSource(56419U);
    msg.setSourceEntity(44U);
    msg.setDestination(46175U);
    msg.setDestinationEntity(218U);
    msg.uid = 47U;
    msg.frag_number = 223U;
    msg.num_frags = 170U;
    const signed char tmp_msg_0[] = {120, -54, 15, -96, -79, -90, 14, 12, -116, -84, 98, -74, -36, -126, -104, -112, -89, 23, 72, -81, 72, 61, 2, 115, 107, -49, -100, 32, 26, 96, 121, 34, -28, -12, -128, 107, -21, 83, -84, 125, 13, 52, -119, -16, -23, -80, -45, 120, -66, 38, 18, -105, -55, -120, 96, -11, -125, -28, -101, 54};
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
    msg.setTimeStamp(0.31223889619465806);
    msg.setSource(924U);
    msg.setSourceEntity(200U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(181U);
    msg.uid = 169U;
    msg.op = 33U;
    msg.frag_ids.assign("XBEYLNLKXJWJSQFXBUGGNYUWEAHJTGVEDFILEZTTLZC");

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
    msg.setTimeStamp(0.07487945597950396);
    msg.setSource(23610U);
    msg.setSourceEntity(239U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(61U);
    msg.uid = 160U;
    msg.op = 77U;
    msg.frag_ids.assign("RMMBSKZUFAQZIWOYGPJWIXJMZHQUVCODDXHHUGJLIGYUXNCXGLKTUEOXTYSQTWVGSAVGVNKYWJVUFQOHMHPKADQKGIEPKZAKPRDRVRENPTMCTJEBGRAPZVCLPTFBWZHCBDTCNFNZMHYCBEBBSGJLZUQYUFZKLJIVSFFUCRTQYDLIHSAJEONNXMDBEKQWILYMAAZJ");

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
    msg.setTimeStamp(0.5080711353684778);
    msg.setSource(31046U);
    msg.setSourceEntity(239U);
    msg.setDestination(28493U);
    msg.setDestinationEntity(127U);
    msg.uid = 10U;
    msg.op = 43U;
    msg.frag_ids.assign("TYQWAWPQPBQYJOYVVTLRDNMYZRNECEBYLEIJEVIMOQXDJFCISASYLBKTMHRPDCUMVNCDVOAFHCLZZHUIKXOTRRZULSIGEJYOVDWLQWTAMUJBSKODFMXUXKKZFSGJWUQTOHHQKHCTEBIJPSLCQHWNQNGPBEJFEITMNFSJRLCMAXGKXULH");

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
    msg.setTimeStamp(0.5502521978952352);
    msg.setSource(65016U);
    msg.setSourceEntity(24U);
    msg.setDestination(62158U);
    msg.setDestinationEntity(228U);
    msg.content_type.assign("PHSLMVRZYXQBEVPMIMOHIMPUDHBZWJFFYBLOBQMCHMVDDDZJUJZKENGTEUJEHTZZWYIHLECBLXYXFSICHNFGDPNQOGPNXCTDJRUWKRUXACCWOTISKZH");
    const signed char tmp_msg_0[] = {124, 113, -30, 17, -24, -31, -122, 102, -88, 53, -123, 87, 9, -43, -73, -112, -28, 98, -68, -104, 2, -101, 86, -126, 9, 116, -49, -55, -106, -109, -96, -76, 120};
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
    msg.setTimeStamp(0.8717595893947212);
    msg.setSource(38627U);
    msg.setSourceEntity(54U);
    msg.setDestination(39929U);
    msg.setDestinationEntity(25U);
    msg.content_type.assign("UVSTWLQOWIITPRCCMLRWWLHIWJWVABTRUYAJKFZOQIQBVJRZFANVLEHNWBMJUADIZVAPEOQNXSKTTDGFCQHYFHZQXUFYQNSYRGKAZNAEXRGUPADNZBBVXSZMOPPSYIBJMVKSUVJGMRIXYROFTDYUMDXFMHMLCOSFTEEQDANS");
    const signed char tmp_msg_0[] = {-76, -62, 30, 20, 88, 111, -8, 38, 77, 56, 89, -6, -15, -61, -5, -3, 100, -63, -100, -33, -92, 12, -1, 48, 37, 31, -7, -29, 100, 64, -127, 81, 115, -33, 120, 43, -94, -81, 71, 64, -55, -101, -12, -117, 3, -70, 83, -3, 0, 0, -120, -14, -31, -76, 35, 123, 102, -2, 34, -123, -44, 55, 109, -18, -46, -19, 96, 73, -76, -32, -103, 20, 36, -56, -30, 81, 65, -74, -83, -79, 27, -119, -104, -52, 60, -105, 55, 20, -82, -38, 76, 59, -79, 104, -105, 9, 119, -30, -34, 42, -51, 35, -45, 57, 61, 8, 7, 54, -34, 14, 3, 64, -43, 106, -19, -94, -86, -51, 14, 40, 1, 34, 79};
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
    msg.setTimeStamp(0.5879324984847677);
    msg.setSource(40481U);
    msg.setSourceEntity(67U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(218U);
    msg.content_type.assign("RYIZVOMNHU");
    const signed char tmp_msg_0[] = {-73, 14, -37, -19, 21, 48, -112, 125, -127, -52, 21, -37, 109, -120, 124, 29, 43, 107, -103, 113, -44, 38, -50, 88, -117, 28, 45, 40, -75, -65, 39, -113, 112, -100, 72, 93, 99, 102, 23, -54, -28, -86, 98, 26, -121, -34, -40, -106, 84, 40, 7, -21, -67, 124, -53, 94, 125, -77, 19, 108, -54, 94, -74, -83, 108, 5, 14, 18, 92, 65, 107, -80, 89, -90, -42, 29, -97, 44, 92, -21};
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
    msg.setTimeStamp(0.23107402526253806);
    msg.setSource(42078U);
    msg.setSourceEntity(115U);
    msg.setDestination(52504U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.9580320210124974);
    msg.setSource(44400U);
    msg.setSourceEntity(35U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.39694503676314385);
    msg.setSource(55483U);
    msg.setSourceEntity(35U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.8206847516485563);
    msg.setSource(27853U);
    msg.setSourceEntity(41U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(73U);
    msg.target = 41241U;
    msg.bearing = 0.8418828235489481;
    msg.elevation = 0.034279060692655294;

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
    msg.setTimeStamp(0.8727087157069351);
    msg.setSource(35410U);
    msg.setSourceEntity(150U);
    msg.setDestination(65324U);
    msg.setDestinationEntity(44U);
    msg.target = 20208U;
    msg.bearing = 0.1527938004734486;
    msg.elevation = 0.7314325640013051;

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
    msg.setTimeStamp(0.5321573006395155);
    msg.setSource(49239U);
    msg.setSourceEntity(49U);
    msg.setDestination(831U);
    msg.setDestinationEntity(162U);
    msg.target = 57050U;
    msg.bearing = 0.7641352319732034;
    msg.elevation = 0.9444572765274605;

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
    msg.setTimeStamp(0.26131668653187057);
    msg.setSource(24100U);
    msg.setSourceEntity(217U);
    msg.setDestination(45177U);
    msg.setDestinationEntity(183U);
    msg.target = 42001U;
    msg.x = 0.938133584591143;
    msg.y = 0.4403421071564918;
    msg.z = 0.8992235765020486;

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
    msg.setTimeStamp(0.9235638475114462);
    msg.setSource(35549U);
    msg.setSourceEntity(139U);
    msg.setDestination(18136U);
    msg.setDestinationEntity(143U);
    msg.target = 48189U;
    msg.x = 0.5304446629301616;
    msg.y = 0.4313097949078828;
    msg.z = 0.33547116382778797;

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
    msg.setTimeStamp(0.277064642961676);
    msg.setSource(16858U);
    msg.setSourceEntity(172U);
    msg.setDestination(57092U);
    msg.setDestinationEntity(76U);
    msg.target = 41960U;
    msg.x = 0.5065558745275592;
    msg.y = 0.19984282403708764;
    msg.z = 0.39310501438412315;

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
    msg.setTimeStamp(0.252174608066311);
    msg.setSource(24848U);
    msg.setSourceEntity(190U);
    msg.setDestination(30667U);
    msg.setDestinationEntity(156U);
    msg.target = 38348U;
    msg.lat = 0.9104546164269649;
    msg.lon = 0.18440530125646182;
    msg.z_units = 22U;
    msg.z = 0.20814570990538728;

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
    msg.setTimeStamp(0.11539607173284339);
    msg.setSource(40917U);
    msg.setSourceEntity(225U);
    msg.setDestination(36975U);
    msg.setDestinationEntity(110U);
    msg.target = 48510U;
    msg.lat = 0.2805835560197073;
    msg.lon = 0.5661209326404977;
    msg.z_units = 135U;
    msg.z = 0.599397331210266;

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
    msg.setTimeStamp(0.5214121128837427);
    msg.setSource(12233U);
    msg.setSourceEntity(229U);
    msg.setDestination(21100U);
    msg.setDestinationEntity(121U);
    msg.target = 17435U;
    msg.lat = 0.8946953779578226;
    msg.lon = 0.7743076233795863;
    msg.z_units = 238U;
    msg.z = 0.624684864884318;

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
    msg.setTimeStamp(0.7299191384629108);
    msg.setSource(2061U);
    msg.setSourceEntity(205U);
    msg.setDestination(33179U);
    msg.setDestinationEntity(212U);
    msg.locale.assign("MXPDSWFCXLCKBPKALJJLAMJNWIOVEHOENCUAPVTAHTANZTCENBTKTPAJFJXRHFNPSZTQFSYYHHUYLOIZAWKUIQOYVRDNKGMXYNPEFMHJSDKBAIPMBUQDFVPQRYIKERGQBZWEWGHQELFEUMDRVDOIQSWYRLPLCYLOXSXMO");
    const signed char tmp_msg_0[] = {123, 0, 121, 58, -5, -10, 67, -104, -65, 88, 25, -2, 76, -118, -84, 29, -81, 97, 69, -124, -95, -20, -21, 40, -121, -54, -11, -16, 98, -124, 78, -80, -58, 68, 86, 40, -18, 40, -108, 28, 24, 44, 107, 88, 7, 20, -110};
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
    msg.setTimeStamp(0.14739524603966137);
    msg.setSource(15355U);
    msg.setSourceEntity(48U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(99U);
    msg.locale.assign("XIXTTEBGYOOUMZTIJZQSUPZUQVPOURLBHFHFOAHDJESUPLNMUCCNBMWYYSMXGFDSXWCKZQQEFKIDSTUAKJSAKRAXTQNHBYKOABJNLKAAVCJOJHLA");
    const signed char tmp_msg_0[] = {24, -80, 27, 31, -46, 18, -94, 75, -52, 114, -35, -112, 9, -74, -102, -72, 116, 68, -104, 108, -42, 37, 76, -123, 63, 72, 87, -38, 39};
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
    msg.setTimeStamp(0.9107405000354247);
    msg.setSource(60102U);
    msg.setSourceEntity(74U);
    msg.setDestination(56418U);
    msg.setDestinationEntity(128U);
    msg.locale.assign("HXNZQEEBNIFYBLXTQFFNQJQJOYDGEGAORI");
    const signed char tmp_msg_0[] = {20, -44, 0, 69, 44, 84, 55, -4, -63, 21, 77, -107, 37, -57, 15, 45, 119, 105, -64, 75, -72, -126, 50, -1, -8};
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
    msg.setTimeStamp(0.29209334434425704);
    msg.setSource(5955U);
    msg.setSourceEntity(103U);
    msg.setDestination(38400U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.08712397082805656);
    msg.setSource(4051U);
    msg.setSourceEntity(89U);
    msg.setDestination(11397U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.7117227029284672);
    msg.setSource(47429U);
    msg.setSourceEntity(204U);
    msg.setDestination(30984U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.9061165596338256);
    msg.setSource(34677U);
    msg.setSourceEntity(17U);
    msg.setDestination(49585U);
    msg.setDestinationEntity(3U);
    msg.camid = 132U;
    msg.x = 57134U;
    msg.y = 43409U;

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
    msg.setTimeStamp(0.8448847193548527);
    msg.setSource(29549U);
    msg.setSourceEntity(196U);
    msg.setDestination(61318U);
    msg.setDestinationEntity(72U);
    msg.camid = 117U;
    msg.x = 1082U;
    msg.y = 23302U;

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
    msg.setTimeStamp(0.8020484882100016);
    msg.setSource(60461U);
    msg.setSourceEntity(8U);
    msg.setDestination(59678U);
    msg.setDestinationEntity(100U);
    msg.camid = 62U;
    msg.x = 52077U;
    msg.y = 24090U;

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
    msg.setTimeStamp(0.5905139631346218);
    msg.setSource(8765U);
    msg.setSourceEntity(70U);
    msg.setDestination(45738U);
    msg.setDestinationEntity(9U);
    msg.camid = 130U;
    msg.x = 1251U;
    msg.y = 770U;

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
    msg.setTimeStamp(0.9260309566625236);
    msg.setSource(46815U);
    msg.setSourceEntity(237U);
    msg.setDestination(46318U);
    msg.setDestinationEntity(178U);
    msg.camid = 75U;
    msg.x = 59557U;
    msg.y = 6382U;

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
    msg.setTimeStamp(0.9905441640180749);
    msg.setSource(22978U);
    msg.setSourceEntity(209U);
    msg.setDestination(45142U);
    msg.setDestinationEntity(27U);
    msg.camid = 35U;
    msg.x = 20991U;
    msg.y = 54140U;

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
    msg.setTimeStamp(0.7534570624692686);
    msg.setSource(48022U);
    msg.setSourceEntity(10U);
    msg.setDestination(56819U);
    msg.setDestinationEntity(227U);
    msg.tracking = 169U;
    msg.lat = 0.22207215848546635;
    msg.lon = 0.8502665702525914;
    msg.x = 0.4339770504247672;
    msg.y = 0.558591807739556;
    msg.z = 0.5374699194015596;

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
    msg.setTimeStamp(0.8164073394821011);
    msg.setSource(1396U);
    msg.setSourceEntity(253U);
    msg.setDestination(8283U);
    msg.setDestinationEntity(182U);
    msg.tracking = 241U;
    msg.lat = 0.5631216216616192;
    msg.lon = 0.07695094544110026;
    msg.x = 0.8915948601699711;
    msg.y = 0.37519008517356156;
    msg.z = 0.22439104936451004;

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
    msg.setTimeStamp(0.9956576203728604);
    msg.setSource(54754U);
    msg.setSourceEntity(7U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(142U);
    msg.tracking = 47U;
    msg.lat = 0.3508117341762069;
    msg.lon = 0.09218057864295937;
    msg.x = 0.39917537225291344;
    msg.y = 0.8964566792020128;
    msg.z = 0.6671756473100253;

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
    msg.setTimeStamp(0.6137299098828243);
    msg.setSource(6891U);
    msg.setSourceEntity(166U);
    msg.setDestination(53319U);
    msg.setDestinationEntity(16U);
    msg.target.assign("VNQUHBOTRLLQXVDSTMCP");
    msg.lbearing = 0.1697553263989603;
    msg.lelevation = 0.41696823135673977;
    msg.bearing = 0.8223951294627897;
    msg.elevation = 0.021743352399959726;
    msg.phi = 0.2911088325078166;
    msg.theta = 0.5523660671036525;
    msg.psi = 0.2260143975924529;
    msg.accuracy = 0.06734527076440067;

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
    msg.setTimeStamp(0.2715989477120224);
    msg.setSource(37146U);
    msg.setSourceEntity(225U);
    msg.setDestination(2775U);
    msg.setDestinationEntity(219U);
    msg.target.assign("JOMGLHHOZAVGIFOUWLKERZUBGVTWJBCDWRLQMBMOPPK");
    msg.lbearing = 0.5907606016701;
    msg.lelevation = 0.8058540199182647;
    msg.bearing = 0.187105435945078;
    msg.elevation = 0.595337556765243;
    msg.phi = 0.17025622695480946;
    msg.theta = 0.7951695897481269;
    msg.psi = 0.8203068294677339;
    msg.accuracy = 0.8035257140215679;

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
    msg.setTimeStamp(0.2041875970552708);
    msg.setSource(44573U);
    msg.setSourceEntity(155U);
    msg.setDestination(8340U);
    msg.setDestinationEntity(173U);
    msg.target.assign("PCAQNHJNWYOSKLNFZRVLNEUTWVZBKIEGIMHIZMSBGSFTCHGJENCLEHBJBIRSEFYGTVQUUDAPJRWPBCVUWWBSOKLXYDXVUGDWTTPO");
    msg.lbearing = 0.26519185009120394;
    msg.lelevation = 0.41311926941481425;
    msg.bearing = 0.9148435912562957;
    msg.elevation = 0.561133985834733;
    msg.phi = 0.8109647431138001;
    msg.theta = 0.8640325506949956;
    msg.psi = 0.07702631518937908;
    msg.accuracy = 0.7692874197554898;

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
    msg.setTimeStamp(0.741030453961519);
    msg.setSource(37093U);
    msg.setSourceEntity(145U);
    msg.setDestination(39161U);
    msg.setDestinationEntity(132U);
    msg.target.assign("JTAUKNFKNRJAGYELAEHDOEDAMUQINTBMHIDPRHFYKSMPHWINCQBTFZOPGSXDVWJNGZIWMPAHRZZSVJAFIUXPJBSJOBLLYIBLBXSKTKVUZ");
    msg.x = 0.57798144666257;
    msg.y = 0.71495148210165;
    msg.z = 0.9533516195925241;
    msg.n = 0.7944289191241914;
    msg.e = 0.7853786848016612;
    msg.d = 0.5306360986352062;
    msg.phi = 0.2509294681725095;
    msg.theta = 0.8013263848823645;
    msg.psi = 0.20764162630873817;
    msg.accuracy = 0.4263905021464013;

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
    msg.setTimeStamp(0.24502433579628236);
    msg.setSource(28052U);
    msg.setSourceEntity(86U);
    msg.setDestination(17636U);
    msg.setDestinationEntity(203U);
    msg.target.assign("RELKLBXJMAJVSHCCNUCPJWAGEXPQADLHBPWHIFAKASRANXCAZVGOSOWDZZVMDVT");
    msg.x = 0.5268672441320688;
    msg.y = 0.5940591709532625;
    msg.z = 0.29327532784586396;
    msg.n = 0.46235903253105415;
    msg.e = 0.7649588101632734;
    msg.d = 0.9526530946151347;
    msg.phi = 0.3010652119071935;
    msg.theta = 0.6250660310392511;
    msg.psi = 0.9237293922060379;
    msg.accuracy = 0.40906995819054426;

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
    msg.setTimeStamp(0.2108885343714878);
    msg.setSource(14523U);
    msg.setSourceEntity(5U);
    msg.setDestination(16671U);
    msg.setDestinationEntity(38U);
    msg.target.assign("VWEKIUKSHLFTTVDKNZQSEHDJEKFSBEFKYIZDLEUCMHRPAEXXKEIMJXXIGGPBSTBKXOVWAPIXDREKRGASCPPIHWQAFG");
    msg.x = 0.8837752176844779;
    msg.y = 0.35216843105254125;
    msg.z = 0.7117026986075071;
    msg.n = 0.8732984401103664;
    msg.e = 0.9118496773521496;
    msg.d = 0.901395504133934;
    msg.phi = 0.13954013533330767;
    msg.theta = 0.5925596257091581;
    msg.psi = 0.973808928979071;
    msg.accuracy = 0.1550431266927743;

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
    msg.setTimeStamp(0.6121564812163817);
    msg.setSource(37494U);
    msg.setSourceEntity(136U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(78U);
    msg.target.assign("MSNBKASDAEZOYXJPFPIIJILLMJWOTHGXFVWCWDNMUVGDCAXUUNJESMHTGXTRCOCGMSPYQZCVTKSXTSLKSOHPCBISPJUIPCZVQWRFCBWQWRZIQNEZJUQYVKDGHALVDTSGIHUBFTAOLIFOJAHYDMPNYRFXVNZZOZHUVUWKDEJXAKHRYDEDPXBJUPNYY");
    msg.lat = 0.8789583320847729;
    msg.lon = 0.6111743860497176;
    msg.z_units = 45U;
    msg.z = 0.012583714975315852;
    msg.accuracy = 0.011136427011881223;

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
    msg.setTimeStamp(0.09695977958827617);
    msg.setSource(22388U);
    msg.setSourceEntity(240U);
    msg.setDestination(40534U);
    msg.setDestinationEntity(211U);
    msg.target.assign("YHYDOLKLIVIIZILHCVMSLJUBAQJXUXQGDOUKJMHAJWZWJASBCUGAWXYSBNCGCEUQPOZNTOMIKZSFYYXYSGCYVBKNBDNWGROGHHFQZZPNTEYGZDRMVMPRITY");
    msg.lat = 0.37522750501182456;
    msg.lon = 0.774537057786405;
    msg.z_units = 243U;
    msg.z = 0.5146282760172934;
    msg.accuracy = 0.8096148003180799;

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
    msg.setTimeStamp(0.8431373240947881);
    msg.setSource(8348U);
    msg.setSourceEntity(151U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(163U);
    msg.target.assign("XGGQMVCOXANEQCRVHKXHDAGZMDTOWTALACLRKVSPMPWJWGECPASNHZIYEDYDTBKJCZVOYFBISHLCEOJZIPVQUDWERJKURGOMWOYE");
    msg.lat = 0.8116056342370066;
    msg.lon = 0.26811471391815034;
    msg.z_units = 88U;
    msg.z = 0.010763685525827293;
    msg.accuracy = 0.4387164600863268;

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
    msg.setTimeStamp(0.8112012477384369);
    msg.setSource(9918U);
    msg.setSourceEntity(53U);
    msg.setDestination(39176U);
    msg.setDestinationEntity(74U);
    msg.name.assign("XBYAEEJOPBXMJNVLLHQMYXAUXUXZCRKDMCHZBSIQSRMJVBDCWQOJYAGBVUNKYKOGZUZRCCIAHWFYMJYFOGGVNPOSZTXVKNIOBRDLXUAYUHSUDSTGYNKLGEQKJLELNFURRNHVWZQTKHLBEPCZWMULTFXDIQWOPPDPDGNVUWBHTWKPPGBTTIFFAVRATHBGQJRDQXY");
    msg.lat = 0.8515035875067744;
    msg.lon = 0.8744294341473766;
    msg.z = 0.36570727062537667;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.770275863775028);
    msg.setSource(24119U);
    msg.setSourceEntity(27U);
    msg.setDestination(22148U);
    msg.setDestinationEntity(232U);
    msg.name.assign("XBROCHZSBEQVPKUDQKMZCCRDMTCRTKNJXCGYSPG");
    msg.lat = 0.7610018359032548;
    msg.lon = 0.3686326867974301;
    msg.z = 0.47587241914521916;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.9437807430313755);
    msg.setSource(44667U);
    msg.setSourceEntity(11U);
    msg.setDestination(4216U);
    msg.setDestinationEntity(9U);
    msg.name.assign("ENLAZWMDDNZGOYYKHZEVNIQSYARBJOKJKTMTDNNBPMTIOGMDKCZWSAICLABIXXRMZEXUBANLTVCWQJYFLBQCIPLPRCHJWUYXZOPHGFIGSYYKQVQCPSCJFFRSHTQJDSPLJCYWVIEUSGEMBTEVDVRLVXVIEADJFKFUGAHSXCODWHUFOTFUJOHKGHQFFVWEBXSPRMMRWXIKJODTHWMLQGXACBQREYNXWIPZNUBPNODEZNKTUORMYUSPLUHGKT");
    msg.lat = 0.3552536583243098;
    msg.lon = 0.4369166763328426;
    msg.z = 0.13913241172956492;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.27009070556829273);
    msg.setSource(7460U);
    msg.setSourceEntity(113U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(78U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.5243418295751888);
    msg.setSource(57234U);
    msg.setSourceEntity(149U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(67U);
    msg.op = 229U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TZLTPVUINAPNXTFTUZJVZTYDEDCEQVAD");
    tmp_msg_0.lat = 0.26896088581406863;
    tmp_msg_0.lon = 0.4150876518846299;
    tmp_msg_0.z = 0.41416627766143066;
    tmp_msg_0.z_units = 158U;
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
    msg.setTimeStamp(0.04613623600308814);
    msg.setSource(7381U);
    msg.setSourceEntity(28U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(139U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.6332723639615158);
    msg.setSource(18339U);
    msg.setSourceEntity(169U);
    msg.setDestination(12074U);
    msg.setDestinationEntity(187U);
    msg.value = 0.802143405062057;
    msg.type = 72U;

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
    msg.setTimeStamp(0.007851183699258857);
    msg.setSource(4851U);
    msg.setSourceEntity(96U);
    msg.setDestination(17066U);
    msg.setDestinationEntity(129U);
    msg.value = 0.27754783654015536;
    msg.type = 196U;

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
    msg.setTimeStamp(0.7582102942544132);
    msg.setSource(15348U);
    msg.setSourceEntity(147U);
    msg.setDestination(25036U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5127732323088252;
    msg.type = 135U;

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
    msg.setTimeStamp(0.17100468218810638);
    msg.setSource(46147U);
    msg.setSourceEntity(148U);
    msg.setDestination(42007U);
    msg.setDestinationEntity(209U);
    msg.value = 0.045963044344896176;

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
    msg.setTimeStamp(0.7094805675815375);
    msg.setSource(36992U);
    msg.setSourceEntity(58U);
    msg.setDestination(38081U);
    msg.setDestinationEntity(35U);
    msg.value = 0.5798117778958217;

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
    msg.setTimeStamp(0.897869306981955);
    msg.setSource(58399U);
    msg.setSourceEntity(26U);
    msg.setDestination(10367U);
    msg.setDestinationEntity(163U);
    msg.value = 0.15189899192149148;

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
    msg.setTimeStamp(0.5247404967369048);
    msg.setSource(8808U);
    msg.setSourceEntity(250U);
    msg.setDestination(8003U);
    msg.setDestinationEntity(254U);
    msg.timestamp_last_service = 0.4671441753285108;
    msg.time_next_service = 0.7067540806087235;
    msg.time_motor_next_service = 0.3581697847013795;
    msg.time_idle_ground = 0.5025893738587351;
    msg.time_idle_air = 0.10915402724146306;
    msg.time_idle_water = 0.6067214470483496;
    msg.time_idle_underwater = 0.6821837769462554;
    msg.time_idle_unknown = 0.28706334667845357;
    msg.time_motor_ground = 0.36735695080314923;
    msg.time_motor_air = 0.5252895346038354;
    msg.time_motor_water = 0.11766234550975829;
    msg.time_motor_underwater = 0.8760015616692591;
    msg.time_motor_unknown = 0.7049851108186653;
    msg.rpm_min = 27352;
    msg.rpm_max = -15185;
    msg.depth_max = 0.6968012839932541;

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
    msg.setTimeStamp(0.21777335610389514);
    msg.setSource(47996U);
    msg.setSourceEntity(240U);
    msg.setDestination(61982U);
    msg.setDestinationEntity(134U);
    msg.timestamp_last_service = 0.9842143130387957;
    msg.time_next_service = 0.5970627211873684;
    msg.time_motor_next_service = 0.872658081336488;
    msg.time_idle_ground = 0.7196005355238604;
    msg.time_idle_air = 0.6684294283100934;
    msg.time_idle_water = 0.5869782238780328;
    msg.time_idle_underwater = 0.3159398839477199;
    msg.time_idle_unknown = 0.997561124034703;
    msg.time_motor_ground = 0.8957597100772919;
    msg.time_motor_air = 0.4365340283110791;
    msg.time_motor_water = 0.934825702446499;
    msg.time_motor_underwater = 0.02524090130534462;
    msg.time_motor_unknown = 0.43035560367950043;
    msg.rpm_min = 2493;
    msg.rpm_max = 21921;
    msg.depth_max = 0.3598075912838996;

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
    msg.setTimeStamp(0.6404550624465317);
    msg.setSource(40103U);
    msg.setSourceEntity(142U);
    msg.setDestination(4511U);
    msg.setDestinationEntity(6U);
    msg.timestamp_last_service = 0.9311944755377443;
    msg.time_next_service = 0.9790615861615852;
    msg.time_motor_next_service = 0.4435634089559596;
    msg.time_idle_ground = 0.9774892952612836;
    msg.time_idle_air = 0.9608503031691704;
    msg.time_idle_water = 0.315905578796705;
    msg.time_idle_underwater = 0.7867249543058416;
    msg.time_idle_unknown = 0.37639759405865214;
    msg.time_motor_ground = 0.1457148377679398;
    msg.time_motor_air = 0.1839722401105729;
    msg.time_motor_water = 0.931504196793489;
    msg.time_motor_underwater = 0.3909855366229896;
    msg.time_motor_unknown = 0.2761676515396777;
    msg.rpm_min = -27253;
    msg.rpm_max = -11335;
    msg.depth_max = 0.30983753728790664;

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
    msg.setTimeStamp(0.008143350313344455);
    msg.setSource(48465U);
    msg.setSourceEntity(236U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(147U);
    msg.severity = 23U;
    msg.text.assign("QNXLIWCVTYAFILYUQHFQGMPEVZBQOIERLWZHGRXUUQNBCSFWJVKOPXTGLGOUFVWBJJR");

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
    msg.setTimeStamp(0.6511823946970444);
    msg.setSource(25241U);
    msg.setSourceEntity(216U);
    msg.setDestination(50957U);
    msg.setDestinationEntity(90U);
    msg.severity = 37U;
    msg.text.assign("GEMNLJQWREPQVYWMBYKJMNPUTBOJVKINCFTVTRXKEIBTDGOQXGURYUMBRCCSHFCQIVYPZTFTRNTMDNIYHJVYZVDLXDPDBVEWDSISLAFZSVCIZHOJTCMLLLMVRNYCTASFZQWTHWCUFNSXFCGGRKIAMIOENDZVFQKKBLIHFSAOFOMZLXWKK");

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
    msg.setTimeStamp(0.15164759262519523);
    msg.setSource(21708U);
    msg.setSourceEntity(248U);
    msg.setDestination(55219U);
    msg.setDestinationEntity(26U);
    msg.severity = 55U;
    msg.text.assign("YYLFJKMBGBGPSXOPDPWXTPZZKOXFOREBOUCHHPZDXSDINLMFVJFCKZAYTLEITRMHNLQOAPCGAWLKABUDGTBJVRVHYFALVGEUKWQYSOWGATUQCHLOXERIJMGQUHHOMFLCBSYIZVFXEPHUSOQXBYVYFRBRGITWQUJWMQVOUJKCRTIGCTJSXCBNWXKQDNEJUCHNXIVSDJLMAMPKNREPFZIENUBYCWQEVWWNSDJLZPMKIRDEGTDZATSMZDSVZYNFHA");

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
    msg.setTimeStamp(0.1923858571516731);
    msg.setSource(42130U);
    msg.setSourceEntity(207U);
    msg.setDestination(10088U);
    msg.setDestinationEntity(121U);
    msg.channel = 122;
    msg.value = -254368396;
    msg.gain = 8U;

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
    msg.setTimeStamp(0.9523279213156466);
    msg.setSource(32589U);
    msg.setSourceEntity(12U);
    msg.setDestination(47994U);
    msg.setDestinationEntity(19U);
    msg.channel = 92;
    msg.value = -1817706432;
    msg.gain = 163U;

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
    msg.setTimeStamp(0.3767728377232282);
    msg.setSource(65266U);
    msg.setSourceEntity(170U);
    msg.setDestination(54697U);
    msg.setDestinationEntity(242U);
    msg.channel = -79;
    msg.value = 1141258389;
    msg.gain = 147U;

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
    msg.setTimeStamp(0.03515684170710742);
    msg.setSource(37453U);
    msg.setSourceEntity(138U);
    msg.setDestination(59327U);
    msg.setDestinationEntity(36U);
    msg.ch01 = 0.1800027784673538;
    msg.ch02 = 0.9542141358979885;
    msg.ch03 = 0.2311361233060394;
    msg.ch04 = 0.03049759893278603;
    msg.ch05 = 0.9126282315970241;
    msg.ch06 = 0.8339812266394636;
    msg.ch07 = 0.7573265795972236;
    msg.ch08 = 0.8506562148881822;
    msg.ch09 = 0.7596177447444337;
    msg.ch10 = 0.8258410199887313;
    msg.ch11 = 0.24944960436854835;
    msg.ch12 = 0.1151873748467167;
    msg.ch13 = 0.8925055821738136;
    msg.ch14 = 0.25550439720932716;
    msg.ch15 = 0.6932869636986115;
    msg.ch16 = 0.3374951336300531;

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
    msg.setTimeStamp(0.5286864981339058);
    msg.setSource(32858U);
    msg.setSourceEntity(37U);
    msg.setDestination(29106U);
    msg.setDestinationEntity(163U);
    msg.ch01 = 0.49652927327075125;
    msg.ch02 = 0.016575890776160396;
    msg.ch03 = 0.16458795263322634;
    msg.ch04 = 0.3959085616982315;
    msg.ch05 = 0.14812577231659374;
    msg.ch06 = 0.1855738541154046;
    msg.ch07 = 0.4037532353807112;
    msg.ch08 = 0.866630785370564;
    msg.ch09 = 0.08092791649210429;
    msg.ch10 = 0.217676704883493;
    msg.ch11 = 0.7599475853342947;
    msg.ch12 = 0.3991967581662723;
    msg.ch13 = 0.6345838285300603;
    msg.ch14 = 0.09310380737813151;
    msg.ch15 = 0.8846063647719549;
    msg.ch16 = 0.1329580138638986;

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
    msg.setTimeStamp(0.4761390940857757);
    msg.setSource(32747U);
    msg.setSourceEntity(201U);
    msg.setDestination(30020U);
    msg.setDestinationEntity(239U);
    msg.ch01 = 0.14241395249180377;
    msg.ch02 = 0.3914611343748984;
    msg.ch03 = 0.22140687075910903;
    msg.ch04 = 0.40841719550342825;
    msg.ch05 = 0.5995023181469624;
    msg.ch06 = 0.5691262446819538;
    msg.ch07 = 0.9823395677921175;
    msg.ch08 = 0.8394913656390582;
    msg.ch09 = 0.6989220854454176;
    msg.ch10 = 0.7364266325347965;
    msg.ch11 = 0.24117248456786078;
    msg.ch12 = 0.2522359667813472;
    msg.ch13 = 0.33893738800269846;
    msg.ch14 = 0.05679952744571992;
    msg.ch15 = 0.5073067937528333;
    msg.ch16 = 0.6859720012962245;

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
    msg.setTimeStamp(0.2855054302176484);
    msg.setSource(43805U);
    msg.setSourceEntity(210U);
    msg.setDestination(57030U);
    msg.setDestinationEntity(122U);
    msg.op = 210U;
    msg.lat = 0.19149032539150923;
    msg.lon = 0.5475929116458278;
    msg.height = 0.6534856631022771;
    msg.depth = 0.7344479122825996;
    msg.alt = 0.3134861031417716;

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
    msg.setTimeStamp(0.38622657213851774);
    msg.setSource(54342U);
    msg.setSourceEntity(151U);
    msg.setDestination(4769U);
    msg.setDestinationEntity(111U);
    msg.op = 38U;
    msg.lat = 0.9945872097656644;
    msg.lon = 0.2339706550558287;
    msg.height = 0.29898645533103463;
    msg.depth = 0.39740834719141127;
    msg.alt = 0.13548352574687816;

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
    msg.setTimeStamp(0.2318798732094819);
    msg.setSource(54913U);
    msg.setSourceEntity(87U);
    msg.setDestination(33204U);
    msg.setDestinationEntity(189U);
    msg.op = 206U;
    msg.lat = 0.38852529857837426;
    msg.lon = 0.14506287544220653;
    msg.height = 0.0784536146277025;
    msg.depth = 0.7276306615359222;
    msg.alt = 0.5281812511030397;

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
    msg.setTimeStamp(0.4431254761824579);
    msg.setSource(1750U);
    msg.setSourceEntity(200U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.467938944442042;
    msg.speed = 0.25915365836103244;
    msg.turbulence = 0.8342774243255275;

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
    msg.setTimeStamp(0.8640409721682756);
    msg.setSource(6324U);
    msg.setSourceEntity(201U);
    msg.setDestination(32723U);
    msg.setDestinationEntity(128U);
    msg.direction = 0.10533941043743256;
    msg.speed = 0.6078832112831153;
    msg.turbulence = 0.09247260360912635;

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
    msg.setTimeStamp(0.1152198899688438);
    msg.setSource(3062U);
    msg.setSourceEntity(241U);
    msg.setDestination(35035U);
    msg.setDestinationEntity(85U);
    msg.direction = 0.4917227211413666;
    msg.speed = 0.37684395945121263;
    msg.turbulence = 0.7480566511336301;

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
    msg.setTimeStamp(0.9752589744815201);
    msg.setSource(57270U);
    msg.setSourceEntity(30U);
    msg.setDestination(26659U);
    msg.setDestinationEntity(55U);
    msg.msg_type.assign("PXHNWKBOAZVWUMGWLEKETDWSOYRAZBPDQVUZGFUTPXHOCKXMFYXBREFMCHKJOAPBEIGDBCLGSLPQGNQUCHDDENXNYBBYHTHRVHRXSNATANWLGGPZYQFVRCXNKQPQGAFPFJRICKVFBEDJOORAIWQZK");
    msg.sensor_class.assign("CXOWGUPJQSVRAUBJGTQPKZS");
    msg.mmsi.assign("YDJFOGUNHSERHTGQOMDOELDRMOSRWUKANYHSFYCKZPJLMIYKEPCGELFIKASXJYKIXQBUROCWW");
    msg.callsign.assign("ZHNVUQCSQLJFRERFJWXXYMKTAOSITUZNBHOOQVUSPTWAGKILWRPOMETSLOAJEPTLHIGMGSSIZCQFEAXCOUNDUZRVMJDCKCGWAZCB");
    msg.name.assign("WAFZRNJLKJEGIYEETUOCGUDESGZPRKDEIQXDZCMSQPMXIPGAVVAOTCMZPGRTFQIGHPERPDWFEBOVIKFXFYHRNXJSBFBJSOBGASBVVOAHMWYRYSHDQJ");
    msg.nav_status = 97U;
    msg.type_and_cargo = 244U;
    msg.lat = 0.23427605662890638;
    msg.lon = 0.6735029600987061;
    msg.course = 0.6151087539642637;
    msg.speed = 0.9737223033450177;
    msg.dist = 0.9777781001821371;
    msg.a = 0.841744098802004;
    msg.b = 0.21198683345472424;
    msg.c = 0.36564130372591175;
    msg.d = 0.23701757054104922;
    msg.draught = 0.07796422141727943;

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
    msg.setTimeStamp(0.8793554921409727);
    msg.setSource(24012U);
    msg.setSourceEntity(68U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(201U);
    msg.msg_type.assign("EYICMVQSONLQYOCEFZOMNTJWYCSVNIPNAYROZLZUKNJREITPROZGOMNUQFYRPDXSFGFXRHZMZIUTMQDPIETWDKBKPUDQMZPVDKRYWSVBCLPAHZHWUVAEJSPLFTVRJYAYFTMZGHLFIXDEOGJLTSBQCMCKHBQDMTRJBNULHYBAFOWWEDGPEJVBOXUQPAONLARFVIEXJIXGCUWSKXKSHDJLUKGWGWCQGKDBQAHZIXUWSAEYLNG");
    msg.sensor_class.assign("XSDFZLFMKURBZRDUCSIZQ");
    msg.mmsi.assign("RYJQFIFUNRHUWTKSJCZBAXVZRHDXFCQLDXVELLMMMIHWJCUSQNGDVGRJVMQGGBUKQYTAGKFRUCXNJSEYFZAKYKZWACQZAZPBTXOOECVAPLPDVPNNWMYSRES");
    msg.callsign.assign("MJNCUZXJECQJJXBTHXMTYPYHXZALVPLUGGSDAULDFERBZNGEHLVCVTSNKTEFWQBTVLXBXBSOCNSYMNUIZNXBZNOHUFPGNRNPMWTCADGSKWUCDOALLBHDRSRWKMSRBRDQVOJKEWMWFQAAPKIOHGL");
    msg.name.assign("ZPDYSNBUHZESMCITNWMPLRCTWHVHRTJKCAACMCGFAHKOIMXSDBSU");
    msg.nav_status = 169U;
    msg.type_and_cargo = 58U;
    msg.lat = 0.4118944469230814;
    msg.lon = 0.949149259162231;
    msg.course = 0.04851431596962397;
    msg.speed = 0.4393412431338676;
    msg.dist = 0.7190704130348483;
    msg.a = 0.978945167514676;
    msg.b = 0.8395706001391604;
    msg.c = 0.3735831456520936;
    msg.d = 0.999675776774502;
    msg.draught = 0.9424064029216269;

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
    msg.setTimeStamp(0.4759604423006877);
    msg.setSource(49994U);
    msg.setSourceEntity(82U);
    msg.setDestination(7117U);
    msg.setDestinationEntity(182U);
    msg.msg_type.assign("OHBWQJMNNAKWWLXITZFLPPGAEZYKDGJLYJBROQSZHOKTUDEHGILFXOULVUPGIWYUA");
    msg.sensor_class.assign("YSBIMGKJPQIMURXWDWRJVNZNCZVXNRVGSCBSZPNCLTEHTDYJKJXYMZVPKYTBYSEMCPBRMANZGUHXHHTWMAODPQBUCFIKWNDYNIEHRJHJOVSOWLQHKPQOABPV");
    msg.mmsi.assign("AHBESCFOFLSNQYNWZBMXYGHNQPYWYPXGPRRSMRRJUXWZNTAGDYDVZDISVLAVVOWHKIZIPJBKQEPDTQUAELSJETQHRGF");
    msg.callsign.assign("ACYTFNZIDENKGTPUZRHYEIROHNDKEAPUMMIVCDUSVTFCDDUHPGVJLDAPEHWIQAGJIQSKBT");
    msg.name.assign("ROLEZEDSSMUBIXSOETZIYJZDVSVDLMZZALRCLYGDNDVHQXCRRBVTMCFKPSBSIYZFWWFKXIOWIJTCSPWETGNAPRKSJRSHAWJUQAVCWIHKHUEOTPVOMQMKUKBBUOYXBWGTYNQYFERPERXGYPNORDBLYCIDXLHBEUMPOYPZAAMIX");
    msg.nav_status = 216U;
    msg.type_and_cargo = 253U;
    msg.lat = 0.1233997723738729;
    msg.lon = 0.46912564934286827;
    msg.course = 0.9882375387861448;
    msg.speed = 0.8587599026348305;
    msg.dist = 0.05254610520706826;
    msg.a = 0.1421559550019823;
    msg.b = 0.8769251578835299;
    msg.c = 0.7205581864776222;
    msg.d = 0.5936800684256107;
    msg.draught = 0.9972110082774834;

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
    msg.setTimeStamp(0.3894854912254524);
    msg.setSource(45337U);
    msg.setSourceEntity(66U);
    msg.setDestination(27760U);
    msg.setDestinationEntity(12U);
    msg.depth_at_loc.assign("HRKEHPOHJUXPTIKFTQRJOEBXSCQLZADYUIUBQSBZEOOYNJTXHJCYCFLEWXTDYHJLDFIBGULJ");
    msg.danger.assign("OPDATZWKMDCQQGZXLVPNEVAXPYHIRIIHMVJXPRJHYKUJJWZQGAZAGEWKMCMBVOITOBCORANOQZURXRSOSYTSDPHQENNFBEJFACHKYCAEKIOGYZHDQWSPSEQYRUGMNDFOFSL");

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
    msg.setTimeStamp(0.4331556690784111);
    msg.setSource(6092U);
    msg.setSourceEntity(149U);
    msg.setDestination(45993U);
    msg.setDestinationEntity(18U);
    msg.depth_at_loc.assign("BJFICXLRNNDZRNUVZOGWLIRJQIJZOSXICJKCEFYKQWKDLMMHYDNFBRBSYOBGRZYITXUPEBPMVFUJHECBITLVUZOABNXYSWWAMSPAVIDHJCHOPAZGXDSJGRSF");
    msg.danger.assign("VZYAYNHOLPCUJPPSFEZIEFICTARMJLBGPQHSMCCSO");

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
    msg.setTimeStamp(0.5907687594450922);
    msg.setSource(40001U);
    msg.setSourceEntity(140U);
    msg.setDestination(3934U);
    msg.setDestinationEntity(89U);
    msg.depth_at_loc.assign("YLOPNEHYMBQFAMFGFHDFCJQQQHIVUVDOUUWCRMRBVGEZTPFLNNUYB");
    msg.danger.assign("VRFJWLDANVNYECWKBUKOCNWMMOQEKTCLZSURXWRIBFTITIAJMVRQCKUOXPPVNLNZYIGJJOJIYFPFQBVFNUHGGFBFCABJUBVMXARGDLVMATNPSDQGKPZLMKKBPJWPZITEWJQEIHTCWYTXAXAHVGYCXUTPVLUSZJRPDLBRBZHQUSDDRQJELTSKWSXYMOQBUAEXYFXHPZRFHNUHOOGCZOHKLMQSCOWDLZAEGITMEEYSHRMASYDFXIDCGIZSEYNWQ");

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
    msg.setTimeStamp(0.8930527914249262);
    msg.setSource(49047U);
    msg.setSourceEntity(24U);
    msg.setDestination(60474U);
    msg.setDestinationEntity(211U);
    msg.time = 0.6309367568668718;
    msg.x = 0.8839021018959613;
    msg.y = 0.04522358265521964;
    msg.z = 0.11079162944211352;

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
    msg.setTimeStamp(0.017620908543979463);
    msg.setSource(45655U);
    msg.setSourceEntity(216U);
    msg.setDestination(61891U);
    msg.setDestinationEntity(128U);
    msg.time = 0.697135747415393;
    msg.x = 0.43663644376984434;
    msg.y = 0.056756590828884845;
    msg.z = 0.11811639970524301;

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
    msg.setTimeStamp(0.28853705096754745);
    msg.setSource(22678U);
    msg.setSourceEntity(172U);
    msg.setDestination(50694U);
    msg.setDestinationEntity(139U);
    msg.time = 0.6059182655023179;
    msg.x = 0.5183768578067652;
    msg.y = 0.5673551999827359;
    msg.z = 0.7526529987357697;

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
    IMC::TriggerAction msg;
    msg.setTimeStamp(0.070545061119623);
    msg.setSource(38980U);
    msg.setSourceEntity(98U);
    msg.setDestination(16762U);
    msg.setDestinationEntity(123U);
    msg.event = 20U;
    msg.act_id = 57475U;
    msg.custom.assign("WJYVHDNRIJFCGLKMJXDZGXXXDUFVAPQOZOQUADNIQRTQVRLJNAXWPIUBQAKVEFPVTMHIDKBEYMKBOBZQLNMGLIMAYKYRNZGHZINKSQRMPTBFNVSZIUGSCKBFSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TriggerAction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TriggerAction msg;
    msg.setTimeStamp(0.3363277177837405);
    msg.setSource(21235U);
    msg.setSourceEntity(242U);
    msg.setDestination(48107U);
    msg.setDestinationEntity(160U);
    msg.event = 78U;
    msg.act_id = 32549U;
    msg.custom.assign("CVGLHCNRSFWGCOYHLIAINQGQLENLTQGXWJGEVSARKHFFVMUUTGZBZEFNGJHEDYTDKGQQXCPDYOMLCMOICPJWEXUVIOIDTSJXRZZBBYLDMJTUOHZPPUWZIZLCQRIDBCSYYGRKOTFVFNWNRLXMEWFCKFACEDRUUPSRYXMMATKOBLPIPXXOQJBQRKDJHWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TriggerAction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TriggerAction msg;
    msg.setTimeStamp(0.2032429133502297);
    msg.setSource(4128U);
    msg.setSourceEntity(62U);
    msg.setDestination(26804U);
    msg.setDestinationEntity(140U);
    msg.event = 242U;
    msg.act_id = 27751U;
    msg.custom.assign("HQAHESHQDUMPJJZLXLOKEZKCMNVQWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TriggerAction #2", msg == *msg_d);
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
    msg.setTimeStamp(0.37534374902588064);
    msg.setSource(44037U);
    msg.setSourceEntity(23U);
    msg.setDestination(65389U);
    msg.setDestinationEntity(33U);
    msg.nbeams = 106U;
    msg.ncells = 58U;
    msg.coord_sys = 46U;

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
    msg.setTimeStamp(0.9996091407100945);
    msg.setSource(24845U);
    msg.setSourceEntity(222U);
    msg.setDestination(31262U);
    msg.setDestinationEntity(153U);
    msg.nbeams = 69U;
    msg.ncells = 109U;
    msg.coord_sys = 220U;

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
    msg.setTimeStamp(0.09702249879979752);
    msg.setSource(7692U);
    msg.setSourceEntity(20U);
    msg.setDestination(24621U);
    msg.setDestinationEntity(98U);
    msg.nbeams = 209U;
    msg.ncells = 58U;
    msg.coord_sys = 13U;

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
    msg.setTimeStamp(0.2666741913315188);
    msg.setSource(41424U);
    msg.setSourceEntity(246U);
    msg.setDestination(12068U);
    msg.setDestinationEntity(81U);
    msg.cell_position = 0.01904968372367044;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.903150380242743;
    tmp_msg_0.amp = 0.39864290193589513;
    tmp_msg_0.cor = 71U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9346477283110195);
    msg.setSource(47383U);
    msg.setSourceEntity(90U);
    msg.setDestination(11092U);
    msg.setDestinationEntity(245U);
    msg.cell_position = 0.9961736629952979;

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
    msg.setTimeStamp(0.6399325475743264);
    msg.setSource(3645U);
    msg.setSourceEntity(209U);
    msg.setDestination(22162U);
    msg.setDestinationEntity(204U);
    msg.cell_position = 0.7914754441555258;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.27818193824153514;
    tmp_msg_0.amp = 0.2456109209450842;
    tmp_msg_0.cor = 122U;
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
    msg.setTimeStamp(0.04685100344858828);
    msg.setSource(17371U);
    msg.setSourceEntity(16U);
    msg.setDestination(52263U);
    msg.setDestinationEntity(33U);
    msg.vel = 0.35823986268054075;
    msg.amp = 0.58534487059624;
    msg.cor = 55U;

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
    msg.setTimeStamp(0.6514521333845311);
    msg.setSource(8366U);
    msg.setSourceEntity(32U);
    msg.setDestination(42786U);
    msg.setDestinationEntity(246U);
    msg.vel = 0.6224824728777292;
    msg.amp = 0.8660572661797563;
    msg.cor = 12U;

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
    msg.setTimeStamp(0.3540676567775325);
    msg.setSource(39756U);
    msg.setSourceEntity(235U);
    msg.setDestination(64754U);
    msg.setDestinationEntity(217U);
    msg.vel = 0.5260194889480762;
    msg.amp = 0.0026902705566022034;
    msg.cor = 23U;

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
    msg.setTimeStamp(0.5096979819342601);
    msg.setSource(1346U);
    msg.setSourceEntity(219U);
    msg.setDestination(56646U);
    msg.setDestinationEntity(110U);
    msg.value = 0.685752058735726;

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
    msg.setTimeStamp(0.25244724169627386);
    msg.setSource(17934U);
    msg.setSourceEntity(204U);
    msg.setDestination(26751U);
    msg.setDestinationEntity(10U);
    msg.value = 0.4305047320972999;

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
    msg.setTimeStamp(0.30793421889206807);
    msg.setSource(14077U);
    msg.setSourceEntity(206U);
    msg.setDestination(16869U);
    msg.setDestinationEntity(187U);
    msg.value = 0.20030013125115154;

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
    msg.setTimeStamp(0.3635817614919995);
    msg.setSource(22307U);
    msg.setSourceEntity(108U);
    msg.setDestination(5347U);
    msg.setDestinationEntity(130U);
    msg.sig_wave_height_hm0 = 0.27954274985989047;
    msg.wave_peak_direction = 0.32004933524079104;
    msg.wave_peak_period = 0.7575385505199461;
    msg.wave_height_wind_hm0 = 0.2530886300709846;
    msg.wave_height_swell_hm0 = 0.35666031045805924;
    msg.wave_peak_period_wind = 0.39878047708673403;
    msg.wave_peak_period_swell = 0.3121819431077366;
    msg.wave_peak_direction_wind = 0.7510269259309825;
    msg.wave_peak_direction_swell = 0.7437316207541345;
    msg.wave_mean_direction = 0.39972863439444917;
    msg.wave_mean_period_tm02 = 0.24574237653813646;
    msg.wave_height_hmax = 0.47775206496741773;
    msg.wave_height_crest = 0.0825717486494355;
    msg.wave_height_trough = 0.5257748178209692;
    msg.wave_period_tmax = 0.6132809982622709;
    msg.wave_period_tz = 0.37058851729392217;
    msg.significant_wave_height_h1_3 = 0.004198398109833801;
    msg.mean_spreading_angle = 0.9449015869037404;
    msg.first_order_spread = 0.8491220468464322;
    msg.long_crestedness_parameters = 0.1648046281073262;
    msg.heading = 0.8420999082611716;
    msg.pitch = 0.5988273072330568;
    msg.roll = 0.9686558981473322;
    msg.external_heading = 0.7627396936232279;
    msg.stdev_heading = 0.4508610920474402;
    msg.stdev_pitch = 0.2265831856434367;
    msg.stdev_roll = 0.21264361088564954;

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
    msg.setTimeStamp(0.23995055057451886);
    msg.setSource(31181U);
    msg.setSourceEntity(155U);
    msg.setDestination(32343U);
    msg.setDestinationEntity(234U);
    msg.sig_wave_height_hm0 = 0.40166614631885555;
    msg.wave_peak_direction = 0.06511957151027414;
    msg.wave_peak_period = 0.7563379462361378;
    msg.wave_height_wind_hm0 = 0.9291961680978782;
    msg.wave_height_swell_hm0 = 0.9827268185158142;
    msg.wave_peak_period_wind = 0.8411044210544721;
    msg.wave_peak_period_swell = 0.5433117586147146;
    msg.wave_peak_direction_wind = 0.8788951322640836;
    msg.wave_peak_direction_swell = 0.6437131001724834;
    msg.wave_mean_direction = 0.6804053734388732;
    msg.wave_mean_period_tm02 = 0.7202795134670787;
    msg.wave_height_hmax = 0.3232978652415389;
    msg.wave_height_crest = 0.6968070699195889;
    msg.wave_height_trough = 0.7652328208797117;
    msg.wave_period_tmax = 0.4226581574363404;
    msg.wave_period_tz = 0.468253627598442;
    msg.significant_wave_height_h1_3 = 0.8919530032794089;
    msg.mean_spreading_angle = 0.017962342642275142;
    msg.first_order_spread = 0.6382961769409939;
    msg.long_crestedness_parameters = 0.5086385837757966;
    msg.heading = 0.7539736537007439;
    msg.pitch = 0.44289925093762084;
    msg.roll = 0.4752852358580384;
    msg.external_heading = 0.9178211637423457;
    msg.stdev_heading = 0.6594399512547212;
    msg.stdev_pitch = 0.6319309916434337;
    msg.stdev_roll = 0.9045750076243413;

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
    msg.setTimeStamp(0.03702020376547144);
    msg.setSource(43273U);
    msg.setSourceEntity(161U);
    msg.setDestination(43403U);
    msg.setDestinationEntity(91U);
    msg.sig_wave_height_hm0 = 0.4882575639900978;
    msg.wave_peak_direction = 0.20190329475184565;
    msg.wave_peak_period = 0.6236101881672906;
    msg.wave_height_wind_hm0 = 0.13116964763467387;
    msg.wave_height_swell_hm0 = 0.8565427014809227;
    msg.wave_peak_period_wind = 0.3644890893604429;
    msg.wave_peak_period_swell = 0.22600779468749743;
    msg.wave_peak_direction_wind = 0.8863455907211526;
    msg.wave_peak_direction_swell = 0.08381874256758015;
    msg.wave_mean_direction = 0.9330001926515199;
    msg.wave_mean_period_tm02 = 0.39591962144382964;
    msg.wave_height_hmax = 0.52359242070382;
    msg.wave_height_crest = 0.01013153134998046;
    msg.wave_height_trough = 0.9279349404013416;
    msg.wave_period_tmax = 0.6615354614381185;
    msg.wave_period_tz = 0.0050641689009407465;
    msg.significant_wave_height_h1_3 = 0.25051915955020243;
    msg.mean_spreading_angle = 0.21278393285557795;
    msg.first_order_spread = 0.3043641097436939;
    msg.long_crestedness_parameters = 0.5833810048595377;
    msg.heading = 0.09804805337377176;
    msg.pitch = 0.2386285521439574;
    msg.roll = 0.20169392036409162;
    msg.external_heading = 0.582273945829565;
    msg.stdev_heading = 0.12412152599222781;
    msg.stdev_pitch = 0.9145087429252475;
    msg.stdev_roll = 0.09620549584676497;

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
    IMC::HoPSTX msg;
    msg.setTimeStamp(0.1412446086917606);
    msg.setSource(11348U);
    msg.setSourceEntity(157U);
    msg.setDestination(17629U);
    msg.setDestinationEntity(28U);
    msg.hops_dst = 66U;
    msg.prio = 173U;
    const signed char tmp_msg_0[] = {-30, -64, -100, -89, 79, -32, 16, 91, 93, -94, -118, 91, 47, 58, 116, 60, 123, 107, 66, 118, -62, 39, -13, 22, -128, 102, 53, 115, 9, 61, -124, -82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.extra.assign("EUSWAKKWQXVYENVODLXTDEHPNIQZPUGFRAIUSFSDEBSFTHKUISWEQCGFLPYIEGNQSJMBAADTFRGIJCALMCAWHLPTZZDOIVQQKJHTONWJKQDHCCHFEMOKMEOGYXLLJBOUYAWTYHLJAINZGYRZCHXVJCSXMJVXALMUZMKFKUHZRKSNEVQSBBWMVRVIGYXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HoPSTX #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HoPSTX msg;
    msg.setTimeStamp(0.23993584225081133);
    msg.setSource(29672U);
    msg.setSourceEntity(58U);
    msg.setDestination(52226U);
    msg.setDestinationEntity(194U);
    msg.hops_dst = 163U;
    msg.prio = 103U;
    const signed char tmp_msg_0[] = {118, -101, 108, -110, -72, -94, -109, -36, -7, 30, 106, 77, 105, -81, 116, -124, -6, -14, -96, -10, -111, 73, -11, 71, 106, -36, -88, -127, -32, 45, 21, -5, -52, -9, 11, -44, -22, 77, -12, 78, -60, 64, 22, -58, -51, 75, -29, -87, 38, 80, 59, -7, 51, 27, 0, 26, -65, -106, -20, 54, 15, 38, -69, -97, -39, 111, -106, -42, 56, -41, -17, 94, -102, -95, 59, -33, 69, -56, 126, -30, 109, 98, 11, 50, 67, -13, -52, -68, 119, -67, 61, 21, -119, -68, 11, 81, 18, 82, -43, 89, -5, -26, -51, 15, -109, -3, -47, 117, -77, -61, 93, -126, 63, -2, -70, 15, 72, 55, -47, 83, 91, -39, -45, -20, -56, 65, -7, 5, 32, 82, 110, 89, 88, -127, -40, -107, -123, -18, 10, 71, 14, 0, 54, 19, 102, 4, 116, -128, -32, 42, -53, 1, 13, 112, -18, 11, -11, -35, -29, 31, 124, 69, 7, 81, -30, -62, -11, 56, -76, 76, -26, -75, 46, 117, 17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.extra.assign("HVTJFYIIFNWMLFBQCLXPYLFDTYGLDUNNMOQQKDMTMOILNRNBMJELGXAKBJOXZNGDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HoPSTX #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HoPSTX msg;
    msg.setTimeStamp(0.1291771173100159);
    msg.setSource(29588U);
    msg.setSourceEntity(89U);
    msg.setDestination(7250U);
    msg.setDestinationEntity(158U);
    msg.hops_dst = 212U;
    msg.prio = 186U;
    const signed char tmp_msg_0[] = {-128, 75, -32, -125, 41, -26, 17, -98, 88, 41, -47, 2, 8, -20, -124, 94, 72, 76, -84, 123, -111, 28, 8, -11, 67, 65, 102, 102, 64, 85, -88, -59, 60, 8, -24, 5, 122, 117, -127, -116, -46, 4, -19, -29, 12, -10, 3, 13, -55, -126, -39, -53, -90, -109, 109, 89, -50, 60, 1, -104, 11, -28, 34, 97, 13, 21, -119, -68, -56, 102, -83, 59, -127, -11, 113, 63, -84, 88, -33, -55, -66, -50, -10, 125, -33, 121, -114, -37, 52, -8, 52, 33, 101, -122, 113, 79, -14, 112, 21, 74, 86, 19, -91, -16, -3, 81, 92, -88, -33, -33, -21, 123, -63, -70, -10, 115, 108, 121, -36, 49, 101, -123, 111, 80, -103, -58, -120, 12, -93, 45, 15, 51, 74, 40, -77, 91, 7, -106, -122, -65, 79, -87, -22, 85, 50, -27, 64, -82, -67, -74, -60, 31, 5, -76, 58, 58, -75, 114, 71, 51, -45, -49, 85, -38, 81, 0, -73, 7, -51, -82, -28, 76, -117, 105, -127, 22, -35, -11, -56, -101, 82, -20, 82, -108, 5, 46, 96, 29, 39, -19, -121, -3, -35, -59, -87, -2, -4, -48, 28, -89, 94, 7, -96, 26, 105, 67, -78, -30, 60, 85, 126, -68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.extra.assign("OVFYOMCFDZDTICXRLUPTHWXEVJSGONVDPFGFIPLHUCPQTWGAYXSLTDAZQDLMLYKYXSZFWRSNJGDPIUSGHNSIUZBUKUHKAAAVUZKTDUWQLRPCBCRSTXVWMFVJMSZBQMCHWTKTPBXBRHJPNGFWPXFAQRSBVNNBOEKENKLZZILHHJKIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HoPSTX #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HoPSRX msg;
    msg.setTimeStamp(0.6062845454343193);
    msg.setSource(41244U);
    msg.setSourceEntity(241U);
    msg.setDestination(43488U);
    msg.setDestinationEntity(186U);
    msg.hops_src = 29U;
    msg.hops_dst = 249U;
    msg.prio = 45U;
    const signed char tmp_msg_0[] = {36, -34, -96, 110, -57, 108, 70, -94, -43, -40, -50, -103, 47, -88, -6, 80, 83, -42, 53, 123, -49, 93, -6, 119, -112, -21, -59, -46, 31, -90, -26, -119, 38, -120, -43, -36, -82, 73, 117, 2, 33, 29, -127, -50, 23, 85, 47, 19, 4, 40, -28, -18, 65, 61, 70, -20, 85, -81, 68, 100, -58, -120, -124, -7, 5, -7, -109, 119, 33, -21, -10, 8, -44, 86, -41, 77, -74, 79, -37, -82, -17, -15, 59, 17, 46, -101, 102, -91, 109, 35, -23, 15, 124, 73, 90, -53, -25, 4, -101, -2, 31, 72, 41, -13, 18, 17, -88, 19, 37, -35, -102, 107, 32, -24, -98, 57, 38, 60, 31, 76, -96, -96, -112, 68, 92, 102, -97, -73, -103, -64, -118, -64, -120, 35, 90, -7, 89, 27, -50, 47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.extra.assign("KETVWCIINUBYPUNEAPIQWUXZNSPIJRSERKGMCZFXAUDAXQMNOHEZXLHIMMSKKXWWAVAJILSMQGRTDVTURZHSAXERFWKMXRYOOFOVVGTVTLIKGDGXENMOYELFLTCYDWEGPTZHSFZBNQICODUZLYJLIJPBPUWKZDKABGHBHNYPFNPYMGOQLKZVZUWSTYWQFPXDOIBHXJUFHWYQOAFNCAVLEJUSDRJMRQOAGCRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HoPSRX #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HoPSRX msg;
    msg.setTimeStamp(0.11284638960049453);
    msg.setSource(39309U);
    msg.setSourceEntity(76U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(102U);
    msg.hops_src = 187U;
    msg.hops_dst = 181U;
    msg.prio = 213U;
    const signed char tmp_msg_0[] = {23, 46, 63, -26, -124, 94, -88, 53, 29, -73, -16, -28, 79, 126, -103, -15, -71, 23, -32, -85, -36, 45, 84, -75, -68, -107, 29, -2, 47, -75, 105, -21, -45, 100, -123, 70, 43, 47, 40, 18, -75, -123, -121, -38, -32, -15, 92, -21, 86, -86, -126, -102, -61, -107, -58, 42, -99, 12, 55, -114, 52, 93, -93, 72, -14, -27, 102, 76, -87, 45, -101, 125, 124, -76, 41, 112, 110, -89, -72, 75, 18, 32, -55, -11, 76, 115, 2, -123, -15, 67, 32, -123, 3, -6, 116, 70, -57, -39, -60, 63, 57, -97, 124, -110, -76, -51, -128, 119, -53, 70, -70, 117, -58, -33, 67, -3, -44, 54, 26, 31, 102, -85, -79, 28, -41, -33, -19, -23, 5, -74, 101, -9, 121, 122, -41, -99, 100, -35, -29, -65, 5, 112, 124, 73, 31, -28, 11, 10, -16, -50, 94, -42, 39, -55, 118, -88, -117, -67, 17, -16, -40, 49, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.extra.assign("TKVVFEKATWUDTMYVJGJOFVZLSZFEUECPRCJSIXNWMNQTSDSKLAAWIKNWCOVZBXCAOLFEGZXTALPQDWQBNJRNGNIAZHKWYHOLJBXNMKDXDHHITQBJRKLASEGFMYRXLRNLNHOMQGHCQZTMIMJWUDRFZHWOZBPXFVHALPVXYUYPJTIPRLEMOZGKCSDVETXFIEDGSUSPGERGQUQMBEPIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HoPSRX #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HoPSRX msg;
    msg.setTimeStamp(0.3156833264121367);
    msg.setSource(18998U);
    msg.setSourceEntity(54U);
    msg.setDestination(59638U);
    msg.setDestinationEntity(100U);
    msg.hops_src = 16U;
    msg.hops_dst = 192U;
    msg.prio = 118U;
    const signed char tmp_msg_0[] = {15, -74, 8, -91, -93, 0, -122, 78, -7, 43, 80, -122, -52, -115, -93, 66, -49, 10, 58, -28, -21, 80, 83, 57, -61, 23, 81, 84, 89, -122, -106, 10, -60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.extra.assign("EGHCIJTKGRXILXMOWLPQCTFZXAFQISWATPXTREAYVVNOHKQYAHWPZFUBSPOMLPLLVMWKKCHYSBNGYJSQDWAXDWAHATMFEQSORVEINTDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HoPSRX #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5925742980377073);
    msg.setSource(27806U);
    msg.setSourceEntity(154U);
    msg.setDestination(8209U);
    msg.setDestinationEntity(23U);
    msg.name.assign("MDKPWIQDDVHUCPEHMJXTHBNEWYS");
    msg.value = 13U;

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
    msg.setTimeStamp(0.10202821330597811);
    msg.setSource(12908U);
    msg.setSourceEntity(152U);
    msg.setDestination(55110U);
    msg.setDestinationEntity(249U);
    msg.name.assign("LVEQQSCYRRXQQOZIBMARUYJFIJCFMXGAKLKUHVVVCNQFVQPUFZVXZTAYTHYKMMUKLXDLXRKHUHYTPCRYWOAQJDMZ");
    msg.value = 51U;

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
    msg.setTimeStamp(0.09665433447392724);
    msg.setSource(1674U);
    msg.setSourceEntity(193U);
    msg.setDestination(36060U);
    msg.setDestinationEntity(136U);
    msg.name.assign("EYAGBALJRRTUMFDRUESOEIPPDSORXQNIXXIETOVLGHXVUGZZAQVUJKRNRVKVZPFYRVHAQPCTGNEY");
    msg.value = 162U;

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
    msg.setTimeStamp(0.2782351959034567);
    msg.setSource(49324U);
    msg.setSourceEntity(126U);
    msg.setDestination(27949U);
    msg.setDestinationEntity(120U);
    msg.name.assign("GTAYJFYGUHJYJQWMAPLBGNFKTOWOKRPNQCOSZCV");

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
    msg.setTimeStamp(0.15022818853982545);
    msg.setSource(19694U);
    msg.setSourceEntity(11U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(3U);
    msg.name.assign("SBXNXVUQOCDEXPVIOHLHJYSKQGGITYUDAJRSJOKQZFTZXRGKWELMYNKILVWVYCCPUGMGZKAVMFRXLSHHCCUNOSPRUQWKLLSSDQKTIBMTEZZGTRGYDVMAFETBWLCGPDDFJZBRXYFNWOED");

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
    msg.setTimeStamp(0.05694351335133041);
    msg.setSource(30608U);
    msg.setSourceEntity(146U);
    msg.setDestination(63493U);
    msg.setDestinationEntity(106U);
    msg.name.assign("RDCCYOBIGGKVDYNXLJJGHMYLMUEBMCKWOENIYODQEWJETKPDFADZPOVHOPNZEGWSREMHGTZBH");

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
    msg.setTimeStamp(0.47906499150634263);
    msg.setSource(43701U);
    msg.setSourceEntity(53U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(63U);
    msg.name.assign("OLRJKMEMLBQAGMYAZPJVBCUKHPSWKKTFWNSAHZBOAAWYPBYUPFOSYYOFUNDNNTPRIZQVIAGVQKEUOMETSRIWKNUCXZLPPQZSRWXLQGVOGMCR");
    msg.value = 188U;

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
    msg.setTimeStamp(0.14382690839688017);
    msg.setSource(64874U);
    msg.setSourceEntity(15U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(99U);
    msg.name.assign("JIRWOXUPPJHIVMDHRIISHHRKRGUKOVWPADSOJPJDKQQKYOSEBJCMNBVAMAUYVKGMYWYDTZG");
    msg.value = 180U;

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
    msg.setTimeStamp(0.27683621876730413);
    msg.setSource(2452U);
    msg.setSourceEntity(207U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(49U);
    msg.name.assign("WLLSLXRENENMAGVAKLTYWEWPUVUVTADEWLSSBSFKFQXCUHFRMDFUBKCMTMCWBAFXUJYFTJ");
    msg.value = 183U;

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
    msg.setTimeStamp(0.10572071746273726);
    msg.setSource(15726U);
    msg.setSourceEntity(155U);
    msg.setDestination(1019U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6122745791658191;

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
    msg.setTimeStamp(0.48152698551831874);
    msg.setSource(47022U);
    msg.setSourceEntity(230U);
    msg.setDestination(24680U);
    msg.setDestinationEntity(171U);
    msg.value = 0.670206048092891;

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
    msg.setTimeStamp(0.7852349874335562);
    msg.setSource(10073U);
    msg.setSourceEntity(156U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5520622713207828;

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
    msg.setTimeStamp(0.11522400434574676);
    msg.setSource(42754U);
    msg.setSourceEntity(90U);
    msg.setDestination(23852U);
    msg.setDestinationEntity(136U);
    msg.value = 0.1760878854389758;

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
    msg.setTimeStamp(0.7473914970231605);
    msg.setSource(46720U);
    msg.setSourceEntity(240U);
    msg.setDestination(62859U);
    msg.setDestinationEntity(113U);
    msg.value = 0.18967526271664037;

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
    msg.setTimeStamp(0.44030069029438423);
    msg.setSource(30349U);
    msg.setSourceEntity(174U);
    msg.setDestination(64579U);
    msg.setDestinationEntity(35U);
    msg.value = 0.5202036343971019;

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
    msg.setTimeStamp(0.984200151920131);
    msg.setSource(17912U);
    msg.setSourceEntity(69U);
    msg.setDestination(2102U);
    msg.setDestinationEntity(100U);
    msg.value = 0.6788180590163329;

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
    msg.setTimeStamp(0.5220973494981868);
    msg.setSource(29059U);
    msg.setSourceEntity(244U);
    msg.setDestination(31624U);
    msg.setDestinationEntity(43U);
    msg.value = 0.05881330264350815;

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
    msg.setTimeStamp(0.7247707849828806);
    msg.setSource(31107U);
    msg.setSourceEntity(37U);
    msg.setDestination(14443U);
    msg.setDestinationEntity(234U);
    msg.value = 0.33959533541075626;

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
    msg.setTimeStamp(0.16285685248967652);
    msg.setSource(47778U);
    msg.setSourceEntity(13U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(25U);
    msg.restriction = 175U;
    msg.reason.assign("OCXNPHFKYHOPNGMEWINQZIVGPMSENQIQEEPKVWBASJNRFGYWZSXYEGHNMDDCUUAYLQPQNZTCFMOGOWZYAVPMBJMNEEFQJAUHUPAFXJMIXDJDBCBKEAMZLYZOIKWHTLLIDILQVXOKVIBIPCFCJKLDCJDHLSONVSFWVCJXYWLRKURZAYZOBATXCHDMMUIZG");

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
    msg.setTimeStamp(0.3780161831732164);
    msg.setSource(13374U);
    msg.setSourceEntity(2U);
    msg.setDestination(57497U);
    msg.setDestinationEntity(16U);
    msg.restriction = 73U;
    msg.reason.assign("FAPAYXCVJLIXVSUGPZEHQWPTGPRAJVADNSVJZQZLQUZNOOGYJTLCEAXTHMQLTSAKHNMKSPWWNUBZHTZNRNDBSOWUJGJADVYDPCQGEHGQXCTPKKQHMNBYUHBNPSDKXFFOIQBWLHRUKSTNMKRCMEUVSRYIFBF");

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
    msg.setTimeStamp(0.5383004640883248);
    msg.setSource(56357U);
    msg.setSourceEntity(51U);
    msg.setDestination(10490U);
    msg.setDestinationEntity(112U);
    msg.restriction = 105U;
    msg.reason.assign("XHMWDUQQKKYTWLAWOFQQCFLBACCBVYKJUJUSFXPRXGSAEGYIVIBDCBAGZSQJIREGSQMIHNKATSXBKZEVTNYZJJDKYPBCRWZCHHZGAOODIGGOFDPRILMJEFRNUHKOYMVAHIEZJYLXEPUQOKGVCHRTMXTWDYCMNBZPYZUQVQVTLWPGTTNTVOREJUBTBXMZRWFUOXFLIWPAHDUHLMEEIKDFJVNPYSCPSXZEVNNJDRCQDWSARFMNLLWILM");

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
    msg.setTimeStamp(0.4532836190937721);
    msg.setSource(23498U);
    msg.setSourceEntity(37U);
    msg.setDestination(60148U);
    msg.setDestinationEntity(246U);
    msg.op = 112U;
    msg.request_id = 1696689849U;
    msg.entity_name.assign("EBGDCJJVTBWYKYRLLIKZHURFDADVESTWXJOMUAJQSUMXDFUQIKQIHOLNZTANZWHNXNWNNEBDNGKCLMXHNEQCYEAABSPUBFWJNAUUFMPSCTLDIPZMEOUGTCBZGIYROFLTKUVKTEXZZPOVDOJWXIGMVQJFTLBYHRIVGHKXCHEPAXGT");

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
    msg.setTimeStamp(0.46524798988225025);
    msg.setSource(53422U);
    msg.setSourceEntity(83U);
    msg.setDestination(40296U);
    msg.setDestinationEntity(33U);
    msg.op = 181U;
    msg.request_id = 2230148468U;
    msg.entity_name.assign("WPCMHFKFXNAESHLCAUWYKEFQPVRNNHHQUTRMXLINLAJQZIVERTYWOZRGGEYYZXBDDSBTFHGHTKNJUEMLITXAMPQEAACDQFKHYYMDBUMPLJOXAA");

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
    msg.setTimeStamp(0.985816871159691);
    msg.setSource(65534U);
    msg.setSourceEntity(79U);
    msg.setDestination(31920U);
    msg.setDestinationEntity(100U);
    msg.op = 254U;
    msg.request_id = 795586740U;
    msg.entity_name.assign("GVFJQLYAJVEGKZKTHMLZRGQQIRURZOCVNWPRGFVIORVUUDEEINKKOOGSWQCQXFGCNODURXYXTOSQJYMAPMQBAJJICJOSWXNHHCOQBTCOSJEVARGBSVDYEPADHAJWHKFZDAEDUFICPFSKNUPWZNBDYMMBLYSOADNSQLBEIUGKSPUIMAZGTSTIFEVULTBPUTMYQCXXFVDEWGZKTNRNBVKJPHHHTZ");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FIGXCNTQXKDGXUFDIOZBOLPXWJYXRQGMVQRGNIVWGVCGYOEFTRYAOZAFXHFONQZDDRZPQGFALORJBBRHSCBFEIKYNETPMSHBXIDMPWJDTCRSVKOAVYEVTUUCIYMMCLIZHEHUPULMEANOWUALXTBQSDYBNRBASYIQSLDDPT");
    tmp_msg_0.type = 225U;
    tmp_msg_0.default_value.assign("VOJMFGXRAJOKFJINWSKRMQWUTLRZBFQOEWVDDBUVMEFNVFAFMQSHVSTSHXYCOPPDJOQXVDGJHOHULINPGYSSIAXWXKTYCOXYZHMMGVCMCNKARJPLTMQDZKRCCGLEHEIGUMNQGNJQPOLKIWXJDDEZZUVKHGGRBBCQPFHQNAL");
    tmp_msg_0.units.assign("OUPKWAVRZCTUQKPMBQFAGSJVORNTYYTVMEWMSCOJFFQGPBRIZVKHIRIOSRMXPWUMKDKEQIRBEFGQTZLCXCIFIF");
    tmp_msg_0.description.assign("MQQCRZGEJPASJLLEGDVUBISWPZIMFXFYGZFXFGOSBXVPLPKNYHIWXAYZXZQEULNBIJOTHVREFYRLIOAKRXJLMDQINWSZTOGSU");
    tmp_msg_0.values_list.assign("ZSISTJVAJTXJRRTZPQLMEUWFWNDVPKYLPQQJLHOLBXHFGWPKYRMZDPQMZLBVKDWVXNIZDEIYQPWNHZXIPVOXICYQWIHSUHDGLNOTLBUDXPZVSBVREKYARDMIGSJOMPURKOUNAEFBMYJJQAOBFIXSETXTWFURGMNTQCW");
    tmp_msg_0.min_value = 0.7597749443041582;
    tmp_msg_0.max_value = 0.4719797968258792;
    tmp_msg_0.list_min_size = 54U;
    tmp_msg_0.list_max_size = 195U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("QLQRGBKYATLQPYEAIZVCMLOUCHKGSDZVEIAGZXOFHYVJIXRXLWXKFWRAADZOUMCFAYJXWNJBWKZOGIXDHRCUELRXESBLQZMJYQFIDDVLPWRYOARNVSTZJEJBGVYJNMF");
    tmp_tmp_msg_0_0.value.assign("IVWNRORSDMXKWLDQGAKNDSOILUNZQBPVGITKYEHYWBGAWFUWRYKCLCFHXPDNMZHWDEANHHGNRZWUTPVPYILYPJXJIFDVLEEYXRTCFTZHNOJMMGQADONQFUSXKGXCTSCTGYQZIUYLPJFAOKVUQKUALXRVPHDLONWZVEBCWXSHVQQSMOCZUJUYZAOJJCREXCTI");
    tmp_tmp_msg_0_0.values_list.assign("CLKLQSDCGONIINLYFCBZEEQZWIHYQASSAMOF");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 150U;
    tmp_msg_0.scope = 30U;
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
    msg.setTimeStamp(0.9882000756631147);
    msg.setSource(33580U);
    msg.setSourceEntity(6U);
    msg.setDestination(8510U);
    msg.setDestinationEntity(203U);
    msg.name.assign("RVQCHMNXWQHGRALVKBDCGXSNEOWZIAELYOTDZESHHIFGNSHGMYWRCNRJKVODAWCEYLAPKMBYGIPABSPHBJTJNVKJ");
    msg.type = 124U;
    msg.default_value.assign("YPBKXFUORCZNFMUFWQVORQECAFWCBARHWAJFEQDUKKFXCVQDORTXKXDMCGGEIKYICRHMEWGLGAATZVMGSTPONLUMYTSZYFDRKWTNMHYPLUJCPZADCWBSQCDRVFDILZEJYWRFYQOYJUPMDGKEBBHKWNHUEBOWEGQPZHXLKTURUSTIXTBBILHJJJIZFY");
    msg.units.assign("CAGEVRKUNXCLXVKMOMUUZKXOHQCUIMEWKHXMVOIUCELJQFZIITDSVYMLBGSAQTEWAWMBRTPYFJQXYRDCZHAQVGNCNBKYJELRSSKCGMLAWQOTAJZTNECGBYBHRPJSXEHLTDVHDJURVEWNDSXINUTEVQXYBPFBRMZCFPYYGOHFUNGQXZIVSVMQPOIZOZFWTHPDJA");
    msg.description.assign("HAURQTNOFLFPVSZRRJBLYBABIZIZTHJWHUVMSGUKWDCTCMWZDIZMGHHZLEXMQKUDSYMQT");
    msg.values_list.assign("QLFWXZEARMRKSLDRZXHOJNACZQQZJLTDPUMZNTOABUKNUJNCCDIIUNFOCDNSBVYXZBBVJMBVVYDOEXQKTTGDFJUABPCSOHYFZKIWHGXKULQSYNVVRJXIUFEFPSPRSFUHIZHOFGHLYSOQRMCEYLDRHGBPMKDUMROOAEAJGRNDFBEAQKXXUBQNMEAOPSVWYGVDKLWTECAPIPJBWWACTIGEZQJ");
    msg.min_value = 0.38730139507407124;
    msg.max_value = 0.06600358241788407;
    msg.list_min_size = 1U;
    msg.list_max_size = 242U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("LHVSFJUDBHOSJPQJHOXMXVFWGMRPIKYSIRKGLNZKYELEKENBKDVFFLMQZUDLIYYLDMJJWZIDWOSYCOE");
    tmp_msg_0.value.assign("CUTLRMZUYINNYMGSKYXCNWITFYMAARLENTFKCONFSZUPAJBVXFAYTVIPREDILWBKNPLEOARWJCFFPQQVEXBMNEWXHHZMBCJZSPQOYRMMTTOSZUUDJOCIFKGVDUAUCHEKRCVBNHCJMR");
    tmp_msg_0.values_list.assign("QRJBNZYGUILJZURNZRBSLTCQGKQRXKHMUZETTYCFASXFXOOPWWYIKUTYVQOPIQWUOPKPDOBJIFRKYUNJLRTGBGWHRACOHTLWDYQKDSYBQQCINDTVSMMHCMADIIEDSZMGLXOPGAOSVNFJELYVLDLYWABEMTIYWZORUNJAGPXBVREJCUIZFCESN");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 237U;
    msg.scope = 235U;

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
    msg.setTimeStamp(0.28213167609643164);
    msg.setSource(22171U);
    msg.setSourceEntity(222U);
    msg.setDestination(32253U);
    msg.setDestinationEntity(182U);
    msg.name.assign("JAZXDRHTFZHXDUNROEPWCYLILVUTKOSGRMSSNZPXBCJCBIRKWWHYDDBZFGKACAQVIDRNEYHUOFGRNHCWLBQOKNUDUCIGGUEOYPAJMVWESIQYBTLBZPPNMQSTHHIVDUUWXZZFXAFKGERHMCMJIWBKSBOXVRQAPTQEACI");
    msg.type = 152U;
    msg.default_value.assign("JZVEAGUTFYIQYNLSABLTQPIAUWLQFWBEDFKXAWESHLTRJGATDVJPOHOBSRDHNRBLOPAAMMOJMGDBCOXUQDZMVQCRQNSJUDGMWESIKOGUMMFBPIGNKDUTYHPXUCVPKRPIVOOMLRUZCYRZEXDNZCYWHXHLJFYCSVTZTHYJKQSBXLWGLZFMHZGOW");
    msg.units.assign("QSGDQATIVAUIMKFXWVHMWXYAQYIJIJQBOMKZYLMTBKGCQKXLJTGZJUEELXGBAPHGKJKQUZLFVIECSNYDGZEMVBZXEWWDQSPBCEBNVYCNGFWBWYARIROKRJTCELZNLWPVAKRM");
    msg.description.assign("WDKNBWCLRKE");
    msg.values_list.assign("VIICSNAIHGFWESPERZUVABYMGLFYOQBPXLZCTMVRRQNQJOEWDULCWEGIGMCUJDAFMFGWULZEEWRQKBTSTFWAOCKYXAFYMMMJTPHXXHYZSBMATEVWONZKOSRIXYU");
    msg.min_value = 0.8464848836268973;
    msg.max_value = 0.43221588160819524;
    msg.list_min_size = 131U;
    msg.list_max_size = 80U;
    msg.visibility = 23U;
    msg.scope = 238U;

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
    msg.setTimeStamp(0.08427757951599746);
    msg.setSource(65159U);
    msg.setSourceEntity(236U);
    msg.setDestination(29171U);
    msg.setDestinationEntity(152U);
    msg.name.assign("MBHMGCZSOVXLNMOHWKWNQUKUPIMKTHJWQKCBVJRRWRRRXYUSUHSDTAN");
    msg.type = 221U;
    msg.default_value.assign("QUWLLBJSHKXYBIEMNJDKQLSVFFQSCYCABKPEOIICUJWMKNCRLHHTNEKIZIAZUGPVOEUMMYTMVC");
    msg.units.assign("AGIUMDHMGTHNUZADBYPQAMWOHPZQVRXSUEJFPFKSJAJGXPKELGOLVWXKLSBBTFXCYWHSVWPFJQNUTTEN");
    msg.description.assign("YAPIUDCFZLHHCWROMWSYRBGMPQDZTEAFJBFCSWMJDUGUENVYMQOIAWWNHGONSNVCACKHHXBXNKKZIKNXBVLNWOULOVYDKFXPSWWJTHSOUEANODIUAKEZOJZEQMQSE");
    msg.values_list.assign("RSQOQJOYRGBQTUBZQDKJXUKHDOKCWQMULZBSAIAMTBDMOZWKEBOWHZHBKHSRMIFSCQICYLLNIGEWMPNOIDOZTXPARWYLPTPXJZXHUVMTEQ");
    msg.min_value = 0.12268732084693201;
    msg.max_value = 0.7324993682452265;
    msg.list_min_size = 122U;
    msg.list_max_size = 180U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("KFKNCVAAVVWOXVXAEZHRPOZMYJRVTSTOAFHYSBFXEJBZTZCKFPCJSFCWQLNATEGYRVWLILCJPIPDLKPLQHGCGMKRHRBCTEUADKWMVSOGHNSHIFAXDEOZEMUMCBDZANUBQWAQPJYNPRILSZSLXTRMHEYDEGDHBPVQFKPDLUNITLOVYQUXYNSS");
    tmp_msg_0.value.assign("KZVHVXNLFGFAURIIZEYFGZDEIYDWJXVMAXWGOIQCZASDKULTJLPBKEGFEBTGDCNKMTJ");
    tmp_msg_0.values_list.assign("BLEQQRTCLZZGJLNYJESJSLKSQXUWUDNHCSRAWFNYLSBEUYHPVMUIVVNKEFIMXTMGIUCFQLZVOEXNCLBQIPTXYTEYYANVBDKKDVQYIAOSMGGPMDJICJJUDDUNPXVMWIGMMVRM");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 68U;
    msg.scope = 136U;

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
    msg.setTimeStamp(0.1699804406206964);
    msg.setSource(3671U);
    msg.setSourceEntity(42U);
    msg.setDestination(7691U);
    msg.setDestinationEntity(34U);
    msg.param.assign("OBMYKAAVTOCTJOJJIETWYZGNAMIEOPXRVZCRYLZHXHVAOHMFTXRUSGFHGBPQXOHXAIPPDSCQNKPDUFDBRVBKJJTLSXEVDZVEFGENKESLNZTMRQOZHKXUCTDUXYMWWMOSZANKNSGMHMGWFDCVOBGCUWBCIUAFNBZCIURQBPWI");
    msg.value.assign("PDICNDHYOROSQDZKITRGVFJENLLKRIVQDXWQMRTDMGBAKDTIKHWMTIIXCOOUSGJQFXRKVKKLWPHZZMXYLO");
    msg.values_list.assign("EYAFGSGJZKMNVTJYTGCZOYLDLWFMXSLNNJXWJBRBLPKFMSKUUHIJYXQCMBYCKNYBYHIVTPOUUZLAGRTWPHVAPRGZWRTVWUANXRHSMKHEGCYUPVOOXDNZTDNFFWWGVNDEVJADZQQWMVIBQRZSZUXUDBOLRIEBXLPIOFEIAAGDPQSLQSOMT");

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
    msg.setTimeStamp(0.017415261947900107);
    msg.setSource(46224U);
    msg.setSourceEntity(112U);
    msg.setDestination(16375U);
    msg.setDestinationEntity(103U);
    msg.param.assign("VCOTWNFBDYUVRMCNVTYGMFJPFLYQYPLQLWIHZSZIVNNZXTEDFZOPOUNYWUCYUHCSXICKMUJGPBBTDRFYADUEGOSRWWQMJWPUHWSV");
    msg.value.assign("TTEOXWOOSUNAMELQMDACBDHBMTLUBDRQVNBEJRMKQOSXCCQUNFNYXUQCRIZUEDUZIDGASXGSYINGSLJTDKXJGMJHOERVLTPLIKTRQPGLELWOIGKIQB");
    msg.values_list.assign("EGHLIQXAVDFQOZPEQLVJFJBITGWVZKOQDWEBICEWRDHPGYYJDJHLUUUOWFZTYSGXRQCEGDCKPSMZCTPKNPXLUIWMDXVBFUESINHGFLEPHTRMOJTPLXMZOGXLCJYKHAGVGSTXUXKRBIOLSWQZRCAOINZNAQAWHFVAJNVACWZVCLXYVDBQUNBODJIISKDNWPOSQEFQISLVUNBBPKMHYBASPKFKGMSFOWEMAYEBCRRCTDNTKRARUTMJXNZJZYHYYH");

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
    msg.setTimeStamp(0.3434172721412845);
    msg.setSource(44543U);
    msg.setSourceEntity(21U);
    msg.setDestination(22467U);
    msg.setDestinationEntity(27U);
    msg.param.assign("LIYWUMVFWPHLPGHAQVEREJAYLPMCDDTDLTUMOLQNAXCHPPBGVIUDWFNJZWOUHIQSNCRGXBVMKDSNTMFZOSHVAFHGIEPQBZZIXFCSSKORUGOSLNAKKKGXGCKMUIMFUQJISMAJLMESBMIBKDQGCYOBQTNBHAKD");
    msg.value.assign("YOEBTMSYVTIBDUTFKOGCVZDARVXZHVWFGCMNXIGWCJXOZDMVRSFUSHKAYLRREFNVUWMGOLFKWLOIOQUTQKYLPIHNHSMHAKPJZVFHAZLMDGJVZQJSNGDLJTFAPOMQFYBRRASDAYQXQTUQBRZPAPOWOFTEEDEUBZUSNHVUOWBMWWKPJUIJNCAFXGBPRVBRNEKZHXGINHEDPSGCXL");
    msg.values_list.assign("UVSCDFMCBADREJFJVJXQZEMQPUOPDYHKHGHNBEJHNGOZVBEOACDXZATQQQJASOGXMXQNVFWAIOQLHBQLPIYUAEBNIFAVSFDEZRSCTISAGNTRSKJOUCUYHGQPMWMXPXDEFFHKZLWWQPGUWJWOGZIUXVYLKMPCTUYVNXYKREKKNGIAYLICDSJURJKPYTITSNXTFGZVJOKYLYBBLHPIZNCVHXRDATWSNOMUWTBLTWBFEGRDZFWP");

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
    msg.setTimeStamp(0.1511405866611758);
    msg.setSource(10901U);
    msg.setSourceEntity(232U);
    msg.setDestination(64995U);
    msg.setDestinationEntity(221U);
    msg.op = 97U;
    msg.version.assign("DIEZVGZGQJQANYLQAQCVCTHCCLXJUBSIJUAMVAPKWADSRVGZPSWNDMCTNR");
    msg.description.assign("HWJQDYCVOTYQGDVJNKXVYAMTPREKQGOFYFHJWOLGKWLDJCBOCCXJLBRKFLMMMAAALPOVMQZ");

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
    msg.setTimeStamp(0.38593863211558976);
    msg.setSource(52961U);
    msg.setSourceEntity(28U);
    msg.setDestination(47582U);
    msg.setDestinationEntity(184U);
    msg.op = 47U;
    msg.version.assign("WWQQIISUFXGJTGNZCHRLAAZRYHMBOWKUVIABREAGKYOZQMFNBFYTMHXWRVRHSGSK");
    msg.description.assign("VMLIQBDDRCLMMIHWEWNGWBPPCAGUNLJMVNJJVSPLGTYWQUXDBNFJLKXCPOZQKLROLATIPVCFEVMJMEEVATRYVRSCZXKPCEQLYXZDIHXHDTMIRGFEURNSFITMUJFHKHFKKDYOOGUIDXGVUVKHXQOTWHUZAZKRHNYSOIPZRTZFSSMXYPRXWZALAAWUUCGYTFHWBBWSBHEJUJQBSCNYBFQPIKXGNDCOBEFEQAAKPOOSJWBMVE");

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
    msg.setTimeStamp(0.6086895371707287);
    msg.setSource(60931U);
    msg.setSourceEntity(211U);
    msg.setDestination(3193U);
    msg.setDestinationEntity(207U);
    msg.op = 185U;
    msg.version.assign("FHWVXLNBKGBCOSNJFZAQKTXOGCOPLRVHRFHRCPARWOSUFWVUFHQBIEYETQYBZMUZGAZKQUKWRTTJAGUIAVOMDMXUCBIYYYIFLKQGFZKTBEULHPGIGHACXMTTJIDHXXYZVNPOGPWXMYGWVHRJLMIFOHELSELZJKKOYVDAPEOYATVLQNMRBOLIMDDTHNJGECDSSVQSCUQCWZNDPJFMIXRZWXUJSFCBKSRETEPQB");
    msg.description.assign("DOIZDJFNBYDZROQNZXLHILAKSBRCFCKVMKWUKXIYDGEVVQVEFOULQMBALLFMYUYIUCVONTXPLEPCBMAZSQZBGBHGIINPRRZG");

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
    msg.setTimeStamp(0.5328480294438036);
    msg.setSource(29307U);
    msg.setSourceEntity(157U);
    msg.setDestination(23877U);
    msg.setDestinationEntity(250U);
    msg.value = 0.7246152342532657;

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
    msg.setTimeStamp(0.5807552365574552);
    msg.setSource(13078U);
    msg.setSourceEntity(114U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(74U);
    msg.value = 0.33368536147094974;

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
    msg.setTimeStamp(0.6854393587496089);
    msg.setSource(33049U);
    msg.setSourceEntity(113U);
    msg.setDestination(38586U);
    msg.setDestinationEntity(68U);
    msg.value = 0.7555330384329642;

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
