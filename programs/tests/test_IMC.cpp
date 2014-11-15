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
// IMC XML MD5: 73b91babb844cbd885fecbb79bb415cd                            *
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
    msg.setTimeStamp(0.871320165895);
    msg.setSource(18643U);
    msg.setSourceEntity(159U);
    msg.setDestination(13117U);
    msg.setDestinationEntity(245U);
    msg.state = 104U;
    msg.flags = 194U;
    msg.description.assign("UQUWQSEHUKHNBFHCOTZGKHDFWDABLUZWNHVVQCJPUAXPSJ");

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
    msg.setTimeStamp(0.971096938866);
    msg.setSource(63756U);
    msg.setSourceEntity(193U);
    msg.setDestination(39338U);
    msg.setDestinationEntity(191U);
    msg.state = 191U;
    msg.flags = 113U;
    msg.description.assign("DURYCRLSWQQLQMEFPEYBFMQUUZVSPAOYIEYSALUROZGYLVGZHSOCPIWDSBKUQXGGMIPJNWJKCGENZNKJGZDSBWWBMXOQCJXNYJSSAXATDYHKTPLCHOFLABQGEFWIYZMQFTVAJDXBQITLTYAFKBPAIJKTRTHPXTVZWCJTCCVTOEONLXFAIWHXIOMZECGLMAUYJROIFSVPSDEBRUHDUQXNKKZBHZPEVIRKKGMBNP");

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
    msg.setTimeStamp(0.104841847811);
    msg.setSource(4176U);
    msg.setSourceEntity(26U);
    msg.setDestination(10125U);
    msg.setDestinationEntity(125U);
    msg.state = 46U;
    msg.flags = 92U;
    msg.description.assign("LUYPCDJHSNVDURQKPJZFUCNRSOLNZUJWQOCEJOCOFRSUVHWJJXSNECBLTTQUZAKESAJUGZITEICPJRHDEMVBWHXYIGOARFCHLYGVPGXSZSHQOKYZVBVWNLNABIFRNAMEIWIYTNDXVTIAAQYQPBGFIQCBONEVFWZKRKUXAYQZBWKFAEKPUYDLGDCXTHTKYZDGKVPSLMNUBEJFMGBXWIYMJOZ");

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
    msg.setTimeStamp(0.783380566307);
    msg.setSource(63358U);
    msg.setSourceEntity(235U);
    msg.setDestination(46973U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.757309301285);
    msg.setSource(33314U);
    msg.setSourceEntity(223U);
    msg.setDestination(18101U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.656953747155);
    msg.setSource(34678U);
    msg.setSourceEntity(182U);
    msg.setDestination(27230U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.941928652316);
    msg.setSource(63669U);
    msg.setSourceEntity(149U);
    msg.setDestination(43901U);
    msg.setDestinationEntity(30U);
    msg.id = 175U;
    msg.label.assign("ERDWOWMEJVLTWVTYDNAXLOTRFFVEIYZBVENEQTGDIFKPMMBOPIRJNAMKPCZNZLHFSODQTPACKWAEEULNALBLWKQZCPNYDZPCXJRBRXZHJFSYAALEYEXJURIYDOBDLDRTXOMOHSWKPPGYNKTTSMUGHVBZSUMRQBIOCIAWSGKUKMJLHRDTSVKZCJ");
    msg.component.assign("BPOPAZKTENGSRYTBBMEETIAHYFGPRYDDEYYMFXIHFFESWVCBPNLJQLLZCJLDXZAKDJURXMVPFOOXSBRXU");
    msg.act_time = 14357U;
    msg.deact_time = 13499U;

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
    msg.setTimeStamp(0.9449639621);
    msg.setSource(9327U);
    msg.setSourceEntity(131U);
    msg.setDestination(3459U);
    msg.setDestinationEntity(120U);
    msg.id = 199U;
    msg.label.assign("BCWESKOXLVVXSAGZDPHMBKKQWHFFEULKHCFIRPHKLVTCFRAUDNMTRGLLNYTYWQVNVWCOMRTQNOGOOUWBXSASVGRDZNTXDIKZPJFZXHSJN");
    msg.component.assign("MGIAFAEFHYDMMCAQPJSFOFQSTPKGUPOMIWXQQPVRGYFYCBGQ");
    msg.act_time = 7251U;
    msg.deact_time = 10809U;

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
    msg.setTimeStamp(0.88012971444);
    msg.setSource(4114U);
    msg.setSourceEntity(185U);
    msg.setDestination(52765U);
    msg.setDestinationEntity(213U);
    msg.id = 41U;
    msg.label.assign("PVQNYUPJWOFCKNCDHTFKUXSJHDGOETUMHVTLFBEZAIDZXPOZA");
    msg.component.assign("PTJQNKADTMYWZTLKJIIGGVEZHPWBFYMEWQUKNQYNXIBUNTSZWOQORNUQZRXSQCBWLV");
    msg.act_time = 42981U;
    msg.deact_time = 1322U;

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
    msg.setTimeStamp(0.739462029009);
    msg.setSource(44388U);
    msg.setSourceEntity(95U);
    msg.setDestination(65324U);
    msg.setDestinationEntity(183U);
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
    msg.setTimeStamp(0.0891462459604);
    msg.setSource(63194U);
    msg.setSourceEntity(230U);
    msg.setDestination(4108U);
    msg.setDestinationEntity(172U);
    msg.id = 108U;

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
    msg.setTimeStamp(0.977379890955);
    msg.setSource(35238U);
    msg.setSourceEntity(24U);
    msg.setDestination(36601U);
    msg.setDestinationEntity(100U);
    msg.id = 237U;

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
    msg.setTimeStamp(0.981228624032);
    msg.setSource(15366U);
    msg.setSourceEntity(77U);
    msg.setDestination(53280U);
    msg.setDestinationEntity(222U);
    msg.op = 66U;
    msg.list.assign("JVBYUVYUXAQNPNTZGQPTHCUCCMVRPEOPMWKZNGLJLFXIMQHLKSVSCSNREWVKPRDMH");

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
    msg.setTimeStamp(0.346008185696);
    msg.setSource(40425U);
    msg.setSourceEntity(70U);
    msg.setDestination(15102U);
    msg.setDestinationEntity(5U);
    msg.op = 158U;
    msg.list.assign("IJTBANPJWZQQGKPJURADDKAILBYDCCFZKJCZNPEQKSERLRMBZXEVVQDQHQLYFSHPMVUGWHDIOVNFHRAXNMZKXICIHBZUOSDNOEFAEXLR");

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
    msg.setTimeStamp(0.0419883473388);
    msg.setSource(17716U);
    msg.setSourceEntity(126U);
    msg.setDestination(1061U);
    msg.setDestinationEntity(49U);
    msg.op = 90U;
    msg.list.assign("TIDMTBQSPSPOYJAYIHNXXGUOTZUJMQXPUXHCMDPGYDNKEWRFDUMLCIBXQOSALOSHCRCNZQMJJAEKFSJSLTJRCTIKIKOWOSAOSNJYZDVRCPVXGAYXANYUVDTBHPRGLMGBSMLQVPNNZYYAXFUNMEAVTBMKZWWWIEEBJEUFKDTBBZBHFIXLHW");

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
    msg.setTimeStamp(0.199288035786);
    msg.setSource(55322U);
    msg.setSourceEntity(93U);
    msg.setDestination(43345U);
    msg.setDestinationEntity(22U);
    msg.value = 131U;

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
    msg.setTimeStamp(0.571813519656);
    msg.setSource(10222U);
    msg.setSourceEntity(232U);
    msg.setDestination(10780U);
    msg.setDestinationEntity(163U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.532097389964);
    msg.setSource(33096U);
    msg.setSourceEntity(201U);
    msg.setDestination(42265U);
    msg.setDestinationEntity(29U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.0143148869656);
    msg.setSource(4743U);
    msg.setSourceEntity(71U);
    msg.setDestination(36318U);
    msg.setDestinationEntity(250U);
    msg.consumer.assign("NKSFZFBPKLNQCWDHZLTRLWIHUAWFAGNSFTTKIYVIWRNYLBJPOIEPHCMXWXCMAOJNCQSWRONPPNVHTKJBGWYERXZCMFGWFJGWGQTADFVURPQQPHZEHVAVHOQFQOEVJZDAJMBZVXRGKMERLHTYUKBMVSNYQGSBGMUEFCYBSLMSEXDTIZARBJDCXJYZYDICYTZAIXJIBRVCB");
    msg.message_id = 5580U;

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
    msg.setTimeStamp(0.166941669233);
    msg.setSource(46727U);
    msg.setSourceEntity(58U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(54U);
    msg.consumer.assign("OUQJGMAYCEUMZQDHCVXWIOPYDQPMDBIZGYSCMDNERKGTYEFEAZKTTXC");
    msg.message_id = 53230U;

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
    msg.setTimeStamp(0.229715482506);
    msg.setSource(41741U);
    msg.setSourceEntity(144U);
    msg.setDestination(49729U);
    msg.setDestinationEntity(198U);
    msg.consumer.assign("WOCLZTAIKYANEIGYBVMNJRQOEVVMFADITSQOEIAPZCFCFFZLKPZWPVUGDRSLASGHUNJTMAGHGWVHMNZKYHHEQCUKAYZBIVXVOBFDBXXXMWDYNILCZSUSSCPCHQTUGPXEDBXOSRQRDOJTXEEJTUIBWOGJIASEBKNWKYLAYDPJXSXGOPOCMPFFNJTUWKZCPYFBTHUJNRTELZQLHRDIFRRMVDHLNJQNYWWTKBQVCXYFAUKGGLQJKRUVIHSPLWMEZ");
    msg.message_id = 48698U;

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
    msg.setTimeStamp(0.339709224995);
    msg.setSource(63706U);
    msg.setSourceEntity(50U);
    msg.setDestination(56498U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.627588832085);
    msg.setSource(41913U);
    msg.setSourceEntity(65U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.462003405066);
    msg.setSource(25509U);
    msg.setSourceEntity(169U);
    msg.setDestination(45564U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.789650318094);
    msg.setSource(4926U);
    msg.setSourceEntity(64U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(248U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.445859649521);
    msg.setSource(24291U);
    msg.setSourceEntity(134U);
    msg.setDestination(3919U);
    msg.setDestinationEntity(206U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.278740900328);
    msg.setSource(60789U);
    msg.setSourceEntity(187U);
    msg.setDestination(31397U);
    msg.setDestinationEntity(75U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.645584645572);
    msg.setSource(42588U);
    msg.setSourceEntity(121U);
    msg.setDestination(7121U);
    msg.setDestinationEntity(79U);
    msg.total_steps = 58U;
    msg.step_number = 108U;
    msg.step.assign("ACDOQWTFPODMKTIJRANKQPJOQWRMSPLJJTZXMEOSUNMOPHWIBJHWGYTNFVMRKAVZYULOTJQANZGWVDDGUVKHZSQKQLBVXQPYVMHQKLBDDMHFBREORHDXNWLAUUICBLXNDNFERXUJCIFWAUTWPLBKXGEMBCGFVRPIJWPIPBBTUTRGFSICPZXELFOSIGAZAEZAYHCDZSUDYIGXVJRZOYYMKCZEAHCGSNXHMTXRYNUYCSQYFEHKC");
    msg.flags = 71U;

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
    msg.setTimeStamp(0.398228434082);
    msg.setSource(18119U);
    msg.setSourceEntity(34U);
    msg.setDestination(18655U);
    msg.setDestinationEntity(146U);
    msg.total_steps = 123U;
    msg.step_number = 155U;
    msg.step.assign("SHLZZQQMOMSARJDVIDFWALODLFBJVDOVEUZHEEHJXUEGFGWRYQFSRHKSHZMHIFWRKNR");
    msg.flags = 254U;

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
    msg.setTimeStamp(0.906904716016);
    msg.setSource(31664U);
    msg.setSourceEntity(67U);
    msg.setDestination(32494U);
    msg.setDestinationEntity(11U);
    msg.total_steps = 51U;
    msg.step_number = 202U;
    msg.step.assign("KKMLEQIMMHFQUPSTPCPYUZXDCXAXVEBEVIHQMFJWPYVFTGWTXGFWBIXSOUDJQLCKIRNBBKSRFKYVYILSWKDDRWTNRHDRWVHHTKPHXNPDUCOFYNADAKRALXWFHZMINQCRGVUNAZLQOOPZXBGUIDVMSGOLELJWYRCSSYKBTFAWNXGEAEVJNGXDMYIAJLZUVBNOFTEJJSPGUZJWHEYADJREMGPKEGOMSCLCATBHUZIPCOQUHCRQMLTONOTZQI");
    msg.flags = 167U;

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
    msg.setTimeStamp(0.988257917068);
    msg.setSource(48073U);
    msg.setSourceEntity(81U);
    msg.setDestination(16729U);
    msg.setDestinationEntity(174U);
    msg.state = 9U;
    msg.error.assign("UBIVDFOIANYWKAXDZABYLTZBTFUECJEEUCXOIZGBGVXAPXGZFUGRZFPMNRJIUOHYKWMTLQEHJZWOWEQGWVYQFHZRIPMHEHBNTJFCDJFOKAEYFQMNMGKBKVBULFZSQWDQNSGUPIDPBXHKLTPLAGHXPUMYIQMJWMXLKGAPOXADCTYJXUHRNWCLVCNSERYLORONWGJV");

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
    msg.setTimeStamp(0.988741410181);
    msg.setSource(26068U);
    msg.setSourceEntity(240U);
    msg.setDestination(65072U);
    msg.setDestinationEntity(139U);
    msg.state = 102U;
    msg.error.assign("WXPYCKSITGRUXUXQTDRVJWZENUDOXUWFALHWUJFEQECBUJVFYFCDUBFKIWLMGQOHSZBBDQOYOSZXVCQIPNMJHWYSEOLLARHUYMWZPLEPMITEHKYZBZFGPKCPPUTOQSXEIXTDEDDSJPPTVISIARLQBLKYMRCDNNKNXANMHHFVGPUV");

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
    msg.setTimeStamp(0.473132716721);
    msg.setSource(30673U);
    msg.setSourceEntity(75U);
    msg.setDestination(4116U);
    msg.setDestinationEntity(5U);
    msg.state = 198U;
    msg.error.assign("KLAROPMDIAVTEJKOLGHQ");

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
    msg.setTimeStamp(0.514808732718);
    msg.setSource(43876U);
    msg.setSourceEntity(108U);
    msg.setDestination(30531U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.723411605235);
    msg.setSource(26995U);
    msg.setSourceEntity(131U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.662269797101);
    msg.setSource(17272U);
    msg.setSourceEntity(218U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.271272946361);
    msg.setSource(36324U);
    msg.setSourceEntity(69U);
    msg.setDestination(48553U);
    msg.setDestinationEntity(95U);
    msg.op = 244U;
    msg.speed_min = 0.169019964039;
    msg.speed_max = 0.0746474657401;
    msg.long_accel = 0.735030071222;
    msg.alt_max_msl = 0.520772480769;
    msg.dive_fraction_max = 0.285955299575;
    msg.climb_fraction_max = 0.432026352054;
    msg.bank_max = 0.105232435111;
    msg.p_max = 0.702715906074;
    msg.pitch_min = 0.399463545746;
    msg.pitch_max = 0.772365969645;
    msg.q_max = 0.25970374245;
    msg.g_min = 0.304495664705;
    msg.g_max = 0.368718244994;
    msg.g_lat_max = 0.134793293352;
    msg.rpm_min = 0.652634717058;
    msg.rpm_max = 0.093774002718;
    msg.rpm_rate_max = 0.492506178481;

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
    msg.setTimeStamp(0.0438493361206);
    msg.setSource(7048U);
    msg.setSourceEntity(227U);
    msg.setDestination(64516U);
    msg.setDestinationEntity(251U);
    msg.op = 52U;
    msg.speed_min = 0.655360803782;
    msg.speed_max = 0.280349034222;
    msg.long_accel = 0.295928089295;
    msg.alt_max_msl = 0.530283961753;
    msg.dive_fraction_max = 0.667094787696;
    msg.climb_fraction_max = 0.664298577507;
    msg.bank_max = 0.153193484672;
    msg.p_max = 0.413880340981;
    msg.pitch_min = 0.645274929159;
    msg.pitch_max = 0.481283261997;
    msg.q_max = 0.0703789045786;
    msg.g_min = 0.146950938021;
    msg.g_max = 0.0251230990791;
    msg.g_lat_max = 0.667720247186;
    msg.rpm_min = 0.41617254166;
    msg.rpm_max = 0.506027783498;
    msg.rpm_rate_max = 0.361129853681;

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
    msg.setTimeStamp(0.491337633053);
    msg.setSource(23334U);
    msg.setSourceEntity(58U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(137U);
    msg.op = 121U;
    msg.speed_min = 0.794561531839;
    msg.speed_max = 0.311508160188;
    msg.long_accel = 0.40714666129;
    msg.alt_max_msl = 0.669031149006;
    msg.dive_fraction_max = 0.766809393437;
    msg.climb_fraction_max = 0.43721337297;
    msg.bank_max = 0.925356052215;
    msg.p_max = 0.749350852681;
    msg.pitch_min = 0.743848878667;
    msg.pitch_max = 0.123797240047;
    msg.q_max = 0.127706246423;
    msg.g_min = 0.179105054863;
    msg.g_max = 0.33121573914;
    msg.g_lat_max = 0.262741020353;
    msg.rpm_min = 0.347243755562;
    msg.rpm_max = 0.68544726194;
    msg.rpm_rate_max = 0.700841428951;

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
    msg.setTimeStamp(0.60721336909);
    msg.setSource(5855U);
    msg.setSourceEntity(26U);
    msg.setDestination(53948U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.980307712474);
    msg.setSource(2529U);
    msg.setSourceEntity(100U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(59U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 36U;
    tmp_msg_0.list.assign("SBFQOVOYSQZYQHLVOAGTTQCBBPWVQWUHUAJPMXJCMKAYIPSDTFWNHLTDZXCKCFJHHEUXEIEWRORLFBBTKRXVTQXIKWWROIISUZYDEJQIPCLKRLAZMNMEFAFGNENKHMGNXJHDQLAZUBQHYXOMGUIEBDLANUGOSBYOPPNXUPPGYZAJJAGULWVTCZJINHSOPMCRSKFJUC");
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
    msg.setTimeStamp(0.644343837045);
    msg.setSource(56192U);
    msg.setSourceEntity(59U);
    msg.setDestination(39541U);
    msg.setDestinationEntity(236U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 32U;
    tmp_msg_0.entities.assign("GWBQGGOQKVVODMOVYKBCNCBTWTJNZZQBQMRMMWEGX");
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
    msg.setTimeStamp(0.468432651499);
    msg.setSource(26957U);
    msg.setSourceEntity(37U);
    msg.setDestination(20506U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.845319934;
    msg.lon = 0.281855718521;
    msg.height = 0.31005697376;
    msg.x = 0.856156565973;
    msg.y = 0.682920442304;
    msg.z = 0.940795293307;
    msg.phi = 0.339921428545;
    msg.theta = 0.729528270423;
    msg.psi = 0.257338707589;
    msg.u = 0.654112946156;
    msg.v = 0.243615411576;
    msg.w = 0.551234358196;
    msg.p = 0.276942976156;
    msg.q = 0.296366580646;
    msg.r = 0.311177920701;
    msg.svx = 0.139957481453;
    msg.svy = 0.398223115878;
    msg.svz = 0.0758064333741;

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
    msg.setTimeStamp(0.965213614103);
    msg.setSource(38259U);
    msg.setSourceEntity(55U);
    msg.setDestination(36216U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.82940076231;
    msg.lon = 0.373629693601;
    msg.height = 0.819847575764;
    msg.x = 0.988415866783;
    msg.y = 0.874217518561;
    msg.z = 0.692679084137;
    msg.phi = 0.649533612821;
    msg.theta = 0.424733674852;
    msg.psi = 0.186729458749;
    msg.u = 0.407205374767;
    msg.v = 0.303057678013;
    msg.w = 0.0836551439619;
    msg.p = 0.140381097973;
    msg.q = 0.85322133221;
    msg.r = 0.892307618337;
    msg.svx = 0.712803886106;
    msg.svy = 0.415436187643;
    msg.svz = 0.356529775861;

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
    msg.setTimeStamp(0.87140101616);
    msg.setSource(4087U);
    msg.setSourceEntity(125U);
    msg.setDestination(57196U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.87538909013;
    msg.lon = 0.251251636753;
    msg.height = 0.169221274889;
    msg.x = 0.570336352619;
    msg.y = 0.143876980006;
    msg.z = 0.288402563531;
    msg.phi = 0.282020852814;
    msg.theta = 0.569478705465;
    msg.psi = 0.722053974221;
    msg.u = 0.0239968615673;
    msg.v = 0.339947639984;
    msg.w = 0.635446705948;
    msg.p = 0.427921913641;
    msg.q = 0.323849633136;
    msg.r = 0.502285207233;
    msg.svx = 0.905896924024;
    msg.svy = 0.388404970531;
    msg.svz = 0.184953221609;

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
    msg.setTimeStamp(0.920727518132);
    msg.setSource(62389U);
    msg.setSourceEntity(228U);
    msg.setDestination(15817U);
    msg.setDestinationEntity(149U);
    msg.op = 43U;
    msg.entities.assign("ULXXTBFFQHDICMYZGZBCUJTERTITA");

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
    msg.setTimeStamp(0.466915494111);
    msg.setSource(37464U);
    msg.setSourceEntity(103U);
    msg.setDestination(5124U);
    msg.setDestinationEntity(6U);
    msg.op = 38U;
    msg.entities.assign("ETUPRMBZTEJUTBMVPYIIHDDQFHCLGD");

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
    msg.setTimeStamp(0.130760591101);
    msg.setSource(54924U);
    msg.setSourceEntity(141U);
    msg.setDestination(65163U);
    msg.setDestinationEntity(91U);
    msg.op = 35U;
    msg.entities.assign("LFXFGIWNMCSYTOHRUPZXQRNUDIFBTIDRCZBUOHWEQJBNVUNYZLXNHDYNTEVHJHKCKIXWOPBVS");

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
    msg.setTimeStamp(0.600926134004);
    msg.setSource(14713U);
    msg.setSourceEntity(250U);
    msg.setDestination(14804U);
    msg.setDestinationEntity(43U);
    msg.type = 73U;
    msg.speed = 8321U;
    const char tmp_msg_0[] = {7, 45, -118, 8, 26, 33, 75, 63, 22, 70, -121, -22, -47, -115, 2, 50, -98, 50, 109, 19, -18, 21, 82, 91, 18, -51, 68, -61, 120, -11, -105, 24, -44, 105, 111, 91, 103, -33, 102, -122, -116, 33, 32, 26, -9, -100, 49, -11, 75, 41, -21, -3, -58, 14, 86, 104, 5, 114, -47, -58, 77, 74, 122, -83, -94, 126, 23, -110, -40, -55, 53, -100, 7, -39, 74, -89, -93, 22, -120, -97, -20};
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
    msg.setTimeStamp(0.682634384612);
    msg.setSource(26902U);
    msg.setSourceEntity(138U);
    msg.setDestination(153U);
    msg.setDestinationEntity(233U);
    msg.type = 178U;
    msg.speed = 59783U;
    const char tmp_msg_0[] = {114, -9, 124, 35, 42, 83, 121, 11, -83, 119, 21, -115, -102, -128, 17, 97, -85, 108, 107, 120, -59, -71, -80, -21, -58, 86, 64, 37, -52, -3, -61, 95, -59, 14, -48, 59, 33, -44, -92, 116, -92, -119, 29, 72, -114, 36, -67, -124, 61, 17, 87, 114, 1, 125, -52, -39, -120, 82, 8, 38, 25, 33, 80, 19, 16, -70, 105, 60, -95, -44, -66, 38};
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
    msg.setTimeStamp(0.751956564721);
    msg.setSource(8544U);
    msg.setSourceEntity(242U);
    msg.setDestination(59355U);
    msg.setDestinationEntity(237U);
    msg.type = 63U;
    msg.speed = 39884U;
    const char tmp_msg_0[] = {48, 80, -39, 125, 105, 11, 77, -42, 126, -101, -77, 6, 41, -4, 17, 0, 31, -23, -99, -5, 91, -51, 41, -28, 113, -71, 116, 27, 92, -28, -8, 18, 73, 81, 122, -60, -68, 23, 119, 49, 75, -69, 116, 90, -26, 59, -53, 59, -65, 1, -44, 17, -20, 5, 100, -35, -34, 96, 52, 56, 90, 2, -22, 0, 4, -10, -93, 4, 72, -124, 6, 3, 53, -127, 70, -26, 99, -60, 3, -60, 55, -116, 66, -63, -67, -21, -27, -66, 15, 17, 101, -33, -126, 86, -126, 58, 79, 49, -50, 25, 35, -69, 114, -60, -96, 96, -3, -30, 104, -65, -113, 49, 105, 95, 87, -67, 59, 22, -57, -81, -84, -77, 9, -60, -84, -44, 63, -7, -124, 19, -20, -88, 63, 114, 112, 36, 76, -47, -38, -68, 118, 63, -72, 0, -124, 81, -29, -9, -102, -109, 16, -18, 43, -66, 47, -96, -18, -38, 87, -2, -77, 50, -46, -2, 51, 50, 93, -41, 13, -110, 126, -94, -13, 96, 113, -9, -27, 47, 15, -34, 78, 28, 59, -82, 19, 115, -21, 4, 47, -26, -34, -89, -49, 99, 2, 97, 29, 52, -55, -71, -87, -33, 125, -127, 57, 59, -96, -65, -69, -45, -74, -16, 78, -91, 49, 41, -68, -77, -79, 88};
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
    msg.setTimeStamp(0.395609299271);
    msg.setSource(9994U);
    msg.setSourceEntity(220U);
    msg.setDestination(61399U);
    msg.setDestinationEntity(249U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.53736665103;
    msg.bank2p_pgain = 0.450060334077;

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
    msg.setTimeStamp(0.19523282112);
    msg.setSource(26340U);
    msg.setSourceEntity(163U);
    msg.setDestination(35238U);
    msg.setDestinationEntity(205U);
    msg.op = 81U;
    msg.tas2acc_pgain = 0.236531144627;
    msg.bank2p_pgain = 0.0311074631386;

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
    msg.setTimeStamp(0.186709517274);
    msg.setSource(16667U);
    msg.setSourceEntity(168U);
    msg.setDestination(41347U);
    msg.setDestinationEntity(95U);
    msg.op = 85U;
    msg.tas2acc_pgain = 0.688288859056;
    msg.bank2p_pgain = 0.210320921766;

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
    msg.setTimeStamp(0.0987510759981);
    msg.setSource(28313U);
    msg.setSourceEntity(112U);
    msg.setDestination(53512U);
    msg.setDestinationEntity(146U);
    msg.available = 2544494768U;
    msg.value = 172U;

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
    msg.setTimeStamp(0.0402623281756);
    msg.setSource(65499U);
    msg.setSourceEntity(52U);
    msg.setDestination(44U);
    msg.setDestinationEntity(162U);
    msg.available = 2191234956U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.638390308292);
    msg.setSource(16504U);
    msg.setSourceEntity(86U);
    msg.setDestination(56292U);
    msg.setDestinationEntity(74U);
    msg.available = 3846933253U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.590841296699);
    msg.setSource(3623U);
    msg.setSourceEntity(163U);
    msg.setDestination(28610U);
    msg.setDestinationEntity(103U);
    msg.op = 98U;
    msg.snapshot.assign("AJIPCOIMMYPPYXDNQWQEXFSOVVKSMVKJHGBERJYHZXRCZIHPFCZMWLYCTLCYMFLASWQOVEPLDKA");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.571330030407;
    tmp_msg_0.bias_r = 0.669819306982;
    tmp_msg_0.cog = 0.844392300335;
    tmp_msg_0.cyaw = 0.0153081956746;
    tmp_msg_0.lbl_rej_level = 0.810960041988;
    tmp_msg_0.gps_rej_level = 0.397849850585;
    tmp_msg_0.custom_x = 0.256384068438;
    tmp_msg_0.custom_y = 0.785820595046;
    tmp_msg_0.custom_z = 0.623574356643;
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
    msg.setTimeStamp(0.996103227146);
    msg.setSource(1078U);
    msg.setSourceEntity(168U);
    msg.setDestination(42487U);
    msg.setDestinationEntity(110U);
    msg.op = 240U;
    msg.snapshot.assign("CKOWXAXSOOPPDYFOXGAVQDSBUBTTLTYKODSOJMRVZYGEGSMLVMLLIOKBARHBCSBIACHMHIZKSJTMJULELPUAQHITNMXVZNEFPKEUJMKIAKCHJOXBUZYJQVWWOWLZTAWDVPEXJNHCAFSIBWIQXQJJRAFFZXULGEPCWKPHVHIHUWQGNDMDQHRENFPCFMTRTSWKJZQSDDCY");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 242U;
    tmp_msg_0.tas2acc_pgain = 0.978720586787;
    tmp_msg_0.bank2p_pgain = 0.210024606782;
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
    msg.setTimeStamp(0.437330046856);
    msg.setSource(50756U);
    msg.setSourceEntity(67U);
    msg.setDestination(55274U);
    msg.setDestinationEntity(69U);
    msg.op = 17U;
    msg.snapshot.assign("SORKDVGRDYAUUSRAAQQKVYPYXTMNMSDZNLBOBBQJFBHQIZIRUZCLBAKCJPMLCMMJJJPFWSZVFBWBUDKKWUWMJQXFGUAHXJCOPJKONZIVVTFQQHHVEHICEEUNTBKGDUICGLSEXWFECPZRGWSXZYADFTTNOEWB");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 206U;
    tmp_msg_0.reason = 214U;
    tmp_msg_0.value = 0.960552503898;
    tmp_msg_0.timestep = 0.940436207458;
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
    msg.setTimeStamp(0.537682554983);
    msg.setSource(57957U);
    msg.setSourceEntity(230U);
    msg.setDestination(45152U);
    msg.setDestinationEntity(56U);
    msg.op = 191U;
    msg.name.assign("DASKUQMNHVJGZNCFRRRSXDKJTGBYVTPOCCLFTRPLWGNASDIEWQGIOOYYUZFFXBQUCZFUJQWAWHQJJMOYRSIMJMEKKKOCPAVXSTVLMQWGBQCNZQXUTQLMNCEJPIRIEVYGOIZRBIKSEWPLUNTXUJYAFRDMZPVAUOZPTUNCHARLWEFHBYLNLZDXIBGKDDAAIJWFCBVIESLMLXHXSEPKYXBFPUMVAYMNXSSQKTBVGJTEZYGHDEZVOT");

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
    msg.setTimeStamp(0.0693408942284);
    msg.setSource(25684U);
    msg.setSourceEntity(144U);
    msg.setDestination(55761U);
    msg.setDestinationEntity(18U);
    msg.op = 104U;
    msg.name.assign("GVLTIWWBFXWCVNXUYTDLFDSPXUJMGKNNTSOLRCAHESEVAGHCLLROGCAJYPBINPKGJHKAROILNHNCALBKRPOAISIOXKIQNOJGUREZQSVJBJEOVADUISQXDBNHBZLWTVFKQRTMSHKDQZMHPUMGJACEHVYTYRPJIMYRHVFSXCFEVZZGGDUNUMELCZDWCSNUQQJVTMYARBCHZEDFLXKDPTTXUYZEWYJXWOSP");

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
    msg.setTimeStamp(0.33181907536);
    msg.setSource(65490U);
    msg.setSourceEntity(43U);
    msg.setDestination(35076U);
    msg.setDestinationEntity(196U);
    msg.op = 103U;
    msg.name.assign("FNPPNBCUFWWPXLSHLLZPTQAHOCEODAAPYRDGYMZVHIAIXVIDMEXUJQVKEHMWIOVCSCIXFVBRKJYRVTSFLOWTLALHOYRTPQJQSPETGBKDRFXHNPYDYMDJAGPCAFCNEWYVXLTYCZHBBFHZMVNKHGERFGAZWQROAVKKJMSMSMSUQGJCJSQQCDEKWKITEZJWRLMSXEWOIZUWUYTOGBLGURXPHSXZMQ");

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
    msg.setTimeStamp(0.936865453537);
    msg.setSource(37395U);
    msg.setSourceEntity(198U);
    msg.setDestination(58427U);
    msg.setDestinationEntity(196U);
    msg.type = 24U;
    msg.htime = 0.435114841189;
    msg.context.assign("QKSMOSNEEUBZVCVMQNJZSBMEDTFDSEPGCEKK");
    msg.text.assign("DJHZZGTPBXMAALTJSAGBYOOZMKVOFLZTTQDGXNTRWPMSNHPGKILMYJHVELVQSMXSECOCGLJCXPUIIGXSJNMVTFIQTWDARDEZOEKUAPKMYLNNLJXWNIUHFYPOTECJHYORWTKQCEGFCCIVZXWOBVBEDSAGOMUIXARBPSTYZHQFGYDGN");

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
    msg.setTimeStamp(0.972333381101);
    msg.setSource(5470U);
    msg.setSourceEntity(144U);
    msg.setDestination(4532U);
    msg.setDestinationEntity(108U);
    msg.type = 63U;
    msg.htime = 0.844499213005;
    msg.context.assign("SRJEFYZIVKLBTPJGXT");
    msg.text.assign("WLBQUANFRXOAPMDJTVWLSAHYNFZBYHZZSDWTKEQYBXFVDMDEGBLBKVCMVMKOJJYEGXNEUPATGLHOFXAQTLRORXQFTVEMXAJXQGIYMPPIHPNLCZFGHOAUOHSNCIHEMWEYUJMRDYKWOSBHRWJCES");

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
    msg.setTimeStamp(0.49170428832);
    msg.setSource(1997U);
    msg.setSourceEntity(245U);
    msg.setDestination(11458U);
    msg.setDestinationEntity(60U);
    msg.type = 46U;
    msg.htime = 0.313262081576;
    msg.context.assign("OXOWWAJFHQNGTKWHQVWRQYBXBVWZNESOKDCIAVXCQTYUHCKJEYFSXIQINHJADIMPOERYMBITYWHFCHUSKEZQBRKNFYLVDFABYVPTLLZIJR");
    msg.text.assign("ACEMJDFHJUIQURYPSDWFMVWXREDPGISSRVDGXWMZKLKHQTPBVOHIKTWTNXLAHFSAEBYFWNQDLVYSYGUALESVZAJYNZZXLHZBJQBDIOTFNNQSTUWDDYCVJYKWXGMCPOOUKBZKHONUHPPTRHLVSHUWZRAAQJNAZSGCXRTDZMXIELZHENFFKVMSBPJIQVYCRGBULBEFRPJWUM");

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
    msg.setTimeStamp(0.166300112197);
    msg.setSource(13809U);
    msg.setSourceEntity(6U);
    msg.setDestination(1064U);
    msg.setDestinationEntity(75U);
    msg.command = 98U;
    msg.htime = 0.726872448738;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 208U;
    tmp_msg_0.htime = 0.339263504287;
    tmp_msg_0.context.assign("IDGIXULJTMAHVWFTIVERXNWQBZPXSCCTKRNKRIDCGEYQBST");
    tmp_msg_0.text.assign("SODAZSTYMHSOGJKUSBYVMZTNQDZUXZZCKHSTKEELWNDCJUFMBGZQZBYTRKOCCYMZONCMQPSILYLYPAGUGJGIDRNXQAGPOTVQOFNVJWXZPMILMNMGAIFBJFXBDBHIRAYWYPOVTIYLEVTNDSRROXZQEKWSVPHCNQEJWUNWIHBSKGHLVUFWFTEDXDIPQWKTBKBDAXGUS");
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
    msg.setTimeStamp(0.893273836833);
    msg.setSource(15215U);
    msg.setSourceEntity(148U);
    msg.setDestination(23158U);
    msg.setDestinationEntity(152U);
    msg.command = 184U;
    msg.htime = 0.168217654551;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 225U;
    tmp_msg_0.htime = 0.73511968026;
    tmp_msg_0.context.assign("IMWHRVOHVFIGQIFLIPGWKDUNYXBT");
    tmp_msg_0.text.assign("ZQTUIKATKOCNOKPVRMEYXSHMRAJQMFQVOZMDPKZFHBZ");
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
    msg.setTimeStamp(0.616225247311);
    msg.setSource(31278U);
    msg.setSourceEntity(118U);
    msg.setDestination(63966U);
    msg.setDestinationEntity(155U);
    msg.command = 128U;
    msg.htime = 0.985444632933;

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
    msg.setTimeStamp(0.969564774639);
    msg.setSource(19876U);
    msg.setSourceEntity(56U);
    msg.setDestination(54829U);
    msg.setDestinationEntity(178U);
    msg.op = 245U;
    msg.file.assign("CKHFQTOXZADZEQLPEWOFAVBWJIQEUKHCRVPAOSWVFCUZUEQGJMAIYSBHIWKDNUXMRPIDMDQZTXOUVWYFCOJDOGHBZMBGAJRALPPXBCAUUB");

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
    msg.setTimeStamp(0.815252741533);
    msg.setSource(38943U);
    msg.setSourceEntity(167U);
    msg.setDestination(26646U);
    msg.setDestinationEntity(134U);
    msg.op = 165U;
    msg.file.assign("NNVQADZBOKBZDDAXPIACLGFJKUGOITMUVISLTEKJWSCEKNJKLIAGBIIDXXNZNDXWYMSODQHJCFGTUYZNAQULJBXHLZJVP");

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
    msg.setTimeStamp(0.333045538723);
    msg.setSource(18940U);
    msg.setSourceEntity(24U);
    msg.setDestination(23605U);
    msg.setDestinationEntity(108U);
    msg.op = 220U;
    msg.file.assign("KTLBLRBDODVTUXRGPQFZLYGJOKABRGDVFIPCJSIJBNCVUHYJWXXSNTIYSWAGKYABFYVDXUSLMPUEDTYYJNOSNSZQKOCULSZDNPOXITGZMAAVDZPHOHVLNXMRKJXGGIZBZTDOEMLERLOHUQQDMBGECJBANNUPGKOMULXERNEWBCIPHWAKTJQGMCQFUKWFYWFMQRHRHDRXKLHCQYW");

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
    msg.setTimeStamp(0.10974850448);
    msg.setSource(36766U);
    msg.setSourceEntity(106U);
    msg.setDestination(62273U);
    msg.setDestinationEntity(4U);
    msg.op = 179U;
    msg.clock = 0.321701576058;
    msg.tz = 95;

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
    msg.setTimeStamp(0.470851827427);
    msg.setSource(42517U);
    msg.setSourceEntity(86U);
    msg.setDestination(12961U);
    msg.setDestinationEntity(246U);
    msg.op = 240U;
    msg.clock = 0.558198770382;
    msg.tz = 64;

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
    msg.setTimeStamp(0.0376976637447);
    msg.setSource(20508U);
    msg.setSourceEntity(242U);
    msg.setDestination(47758U);
    msg.setDestinationEntity(56U);
    msg.op = 169U;
    msg.clock = 0.0613572477947;
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
    msg.setTimeStamp(0.114711851607);
    msg.setSource(53807U);
    msg.setSourceEntity(205U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.681350427301);
    msg.setSource(40394U);
    msg.setSourceEntity(56U);
    msg.setDestination(61124U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.177514867459);
    msg.setSource(42605U);
    msg.setSourceEntity(59U);
    msg.setDestination(35844U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.808899472243);
    msg.setSource(35042U);
    msg.setSourceEntity(73U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("HZWGKIPIMFPHQCQCWXTMDAXRZLJLBRYCPMHNBLIZOLMMRXBINGUGAOFQIVVGEFCHEMOOBHETHDGQKGJAICBZEGVDLVZPSSHBHEUADEW");
    msg.sys_type = 45U;
    msg.owner = 25175U;
    msg.lat = 0.93782341615;
    msg.lon = 0.208171380909;
    msg.height = 0.374049533504;
    msg.services.assign("OWMVAIJZDZFORSCMJPGGNMKTDBTOYQDCNWKAAWDOQXGPZGPYIFSVSKKDWYEBRJPMQRSXRTZAVTOFLGZCQHBIVCMGOFEXGNJTHWQBKRVISKEPAYDYSUZNFXECDPEBCIWZIMVUDHNYFCMRLFYETNWJFKBAKOBQKGGETYMAXWRZLUZBIGUNWTXEEITYLCMFOHLHPU");

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
    msg.setTimeStamp(0.954814944103);
    msg.setSource(57710U);
    msg.setSourceEntity(248U);
    msg.setDestination(6785U);
    msg.setDestinationEntity(21U);
    msg.sys_name.assign("UNLKPISHJGVFOGUKTWLQBJPXGXNDPKESOQAPNZMROWCKGMFDQAJBBBSWUXRMLYVSIKTYCYVLQPFMECJDZRPBLJDZSANAPWIYQEOONDFGYVCXRUEKVZMTWLDAIRYVQGHXLFRSTGTLWOLQTJHAUKMTUEPFUYBZCSOGQSIMCPNUKXMFOFHHNOUBVDXWYRWVNQDXECVZATGBOIAFLMDWRBECSIJHCKIIZVENHYHHCQEBZJUZNDFPIXMRHATKGJXTS");
    msg.sys_type = 76U;
    msg.owner = 57509U;
    msg.lat = 0.453191608486;
    msg.lon = 0.975049819103;
    msg.height = 0.209353933388;
    msg.services.assign("TFGQWCVGRHMIEYDQJLBOXNCWMXVBBSJSHUOTRLXRIMKELZPMGDXIGYXTIJXVITPYNJKPMVJFAKROBQGARMLJLIHZZLGWXAXOGZEEKSNUUEOIAJSHQGJUWZYHDQKCQGTWNSPEDSBCKPWRQROUXNSEYHTRFJLSCKHTUOBPNRIWBMDRXTYNVYPAADKNUVMCLZVUZCCFTHZBAISVAYNDWEWOFEFHEOGVLBKKFPTPFMAFYMCZZDHFNWQPSUA");

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
    msg.setTimeStamp(0.149680120762);
    msg.setSource(28576U);
    msg.setSourceEntity(168U);
    msg.setDestination(58495U);
    msg.setDestinationEntity(69U);
    msg.sys_name.assign("SCWIZQAVQLFUEBVLNPILMXRYOKWTMQHDFPEOFLMTVLQHYRPUROMVBRIDFBAJDEIZOZZKJJIGINQZYBWNPYOBKSRCCEEGBIIEWWXXYRVOEZKHGTXDMVQWAISXJXOYQMUWZPNVVOYFPGJBPGNUUDLSLHLRAZAEGTMTMSDKWVJDTUPCAHJUZJYKNWXSAMPNK");
    msg.sys_type = 24U;
    msg.owner = 20097U;
    msg.lat = 0.30789025322;
    msg.lon = 0.290168577756;
    msg.height = 0.397552866186;
    msg.services.assign("ADGTPWSUBDFSACXZCEIDNSMVDLJFTZUOYZTCKNNSBUGBDTIQXVLJJRGBNZUOZQMOWOXUQPVTYLELFI");

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
    msg.setTimeStamp(0.775533373877);
    msg.setSource(20817U);
    msg.setSourceEntity(163U);
    msg.setDestination(54203U);
    msg.setDestinationEntity(248U);
    msg.service.assign("VMSXRREGVWETLYZBTJUYSEFHAPMJWSPEISVOCBSFXSSGWTORFACQJRQBLBMONETPVLYGFJGPGKGKWWGXJLUKXSPUPRDBFNTBKZIZQCLXNZZMUCAIKMYHFQZFTOLSUALEZZOHMKCABJCOQUEDAKQZIZGOUNOVXEDTVVDDNGFWHRIIKDANTINWHAGYWPK");
    msg.service_type = 52U;

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
    msg.setTimeStamp(0.812287182819);
    msg.setSource(2288U);
    msg.setSourceEntity(215U);
    msg.setDestination(28086U);
    msg.setDestinationEntity(176U);
    msg.service.assign("MEWQXOKRPTEMLPRYSSKKMXODZRKTYEXDAPIOGYSXQUUYXMKPLIZJFNXPVBMHWCJNYDKYEOSC");
    msg.service_type = 124U;

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
    msg.setTimeStamp(0.701525147516);
    msg.setSource(58805U);
    msg.setSourceEntity(109U);
    msg.setDestination(50043U);
    msg.setDestinationEntity(127U);
    msg.service.assign("XASNPESDJUYAFBQKVWFWGBBVJTDLYDCVHDQPQZFWHATSKHRYYUGVFKLRMSH");
    msg.service_type = 173U;

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
    msg.setTimeStamp(0.803996384372);
    msg.setSource(17710U);
    msg.setSourceEntity(96U);
    msg.setDestination(30551U);
    msg.setDestinationEntity(163U);
    msg.value = 0.573484797851;

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
    msg.setTimeStamp(0.642623737389);
    msg.setSource(48466U);
    msg.setSourceEntity(143U);
    msg.setDestination(60170U);
    msg.setDestinationEntity(26U);
    msg.value = 0.0279915462908;

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
    msg.setTimeStamp(0.924154669049);
    msg.setSource(12270U);
    msg.setSourceEntity(138U);
    msg.setDestination(21490U);
    msg.setDestinationEntity(71U);
    msg.value = 0.633729218252;

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
    msg.setTimeStamp(0.524786773849);
    msg.setSource(63838U);
    msg.setSourceEntity(99U);
    msg.setDestination(43955U);
    msg.setDestinationEntity(139U);
    msg.value = 0.500007828136;

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
    msg.setTimeStamp(0.48177479003);
    msg.setSource(65495U);
    msg.setSourceEntity(167U);
    msg.setDestination(24474U);
    msg.setDestinationEntity(104U);
    msg.value = 0.669900583416;

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
    msg.setTimeStamp(0.757941485483);
    msg.setSource(15908U);
    msg.setSourceEntity(180U);
    msg.setDestination(18480U);
    msg.setDestinationEntity(118U);
    msg.value = 0.0656614386539;

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
    msg.setTimeStamp(0.950688325455);
    msg.setSource(30458U);
    msg.setSourceEntity(145U);
    msg.setDestination(51426U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0372041637126;

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
    msg.setTimeStamp(0.896136664261);
    msg.setSource(62122U);
    msg.setSourceEntity(22U);
    msg.setDestination(9790U);
    msg.setDestinationEntity(64U);
    msg.value = 0.983768149826;

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
    msg.setTimeStamp(0.317963296016);
    msg.setSource(23078U);
    msg.setSourceEntity(72U);
    msg.setDestination(53170U);
    msg.setDestinationEntity(205U);
    msg.value = 0.143111079997;

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
    msg.setTimeStamp(0.147718534486);
    msg.setSource(48626U);
    msg.setSourceEntity(13U);
    msg.setDestination(40645U);
    msg.setDestinationEntity(52U);
    msg.number.assign("GMLRKVCJDLAIWOORZZKIOFBXRWNDRJQNHSKABPBANGPHSIJNVEXQEZZUPQRKLKWXHGKVCOGCMLJYYWWMYFRFLKIZPDLSYEKTNTTBUVFAMEYGYEHUVIAZUYXAMAAFNRBGRGSTSQFFUJTCFSHES");
    msg.timeout = 16472U;
    msg.contents.assign("AHKPMLEUSNQQGOFKKBIQWECMYNX");

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
    msg.setTimeStamp(0.779535768035);
    msg.setSource(55679U);
    msg.setSourceEntity(122U);
    msg.setDestination(21122U);
    msg.setDestinationEntity(189U);
    msg.number.assign("JOECQRCHEIHADUTBSGAUIOFSPVNJPKMMEIRZEELOBZOITBEIAVFGQUDKCBFRLTGAWBYMNJ");
    msg.timeout = 19388U;
    msg.contents.assign("NRPYKTAXDHGAISSSDHICQFJFRKXKDIIKCZCXTEOAHTLSOPKFOQOFJHRYVBBCRQTWMZKUXYNOVGRRMIQPJVAKNOXSPJDHVUYNUJCVCLWEDIGTGFKSCHLUXMGUIIZFJJXMBRRPPYFFZPJIOWBSJTMEAWDZHEQIOBMTZVBNGTUWYZNRYXWEFAAMQBVLULLBPSLDGQVHYDHNVQEEAUHKNJNZCCMYSQXWOEGUENFQRCLOWSZZKYAMMPUE");

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
    msg.setTimeStamp(0.967803262234);
    msg.setSource(31690U);
    msg.setSourceEntity(40U);
    msg.setDestination(9609U);
    msg.setDestinationEntity(89U);
    msg.number.assign("RTYYIVASFEWXNGQMLFOP");
    msg.timeout = 47997U;
    msg.contents.assign("XXYGIIWUXAVAHZFPJVBQZBLYURENVBQVT");

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
    msg.setTimeStamp(0.47653349551);
    msg.setSource(34936U);
    msg.setSourceEntity(211U);
    msg.setDestination(6816U);
    msg.setDestinationEntity(177U);
    msg.seq = 901714429U;
    msg.destination.assign("SACFUGATKLVWHCKIDOIDXXPIODHHH");
    msg.timeout = 59490U;
    const char tmp_msg_0[] = {122, -63, -112, 118, -83, -93, -11, -96, 71, -38, -86, -39, 27, 104, 102, 68, 32, -69, -48, -52, -91, -94, -6, 91, -93, 112, -125, -104, -122, 11, 33, 21, -91, 77, 98, -79, 61, -119, 94, 9, 58, 122, -86, 97, -1, -59, 38, 33, -33, -125, -50, -64, 68, -90, 16, 55, -82, -11, -31, 38, -58, -30, 54, -10, -16, 71, -109, 111, -128, -9, 104, -53, 19, -89, -46, 61, -4, -53, 41, -100, -6, -106, 53, -73, 66, -58, -112, 100, -103, 22, -57, -26, -40, 120, 24, -15, 53, -111, -64, -45, -40, -114, 110, 91, -59, -101, 75, -41, 49, 84, 12, 85};
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
    msg.setTimeStamp(0.346829129552);
    msg.setSource(54399U);
    msg.setSourceEntity(125U);
    msg.setDestination(39666U);
    msg.setDestinationEntity(98U);
    msg.seq = 2571048411U;
    msg.destination.assign("OMUSNRVVTAYZNDOLOBPCXJCEMSXZSLPRMTUMWQVGCCJORQVBSYQTRCHEACKINNIKOAIFGIXKZLVBVIEDTPZQNDHLNDKKSDLBAUJFIJXHDMNSKUOMCPUTWXGPQXGFNPF");
    msg.timeout = 64171U;
    const char tmp_msg_0[] = {-123, 32, -70, 5, -9, -113, -19, -103, 92, -33, 124, 113, -83, -36, -78, -11, -40, -109, 107, -13, 65, 9, 115, 55, 65, -39, 1, 111, -23, -28, -114, 108, 22, 86, 90, 47, -20, -36, -28, -109, 9, 25, 36, -20, 47, -121, 37, 73, -83, -18, 120, -86, 4, 14, -49, -110, -18, -4, -127, 46, 14, -48, -58, -77, -45, 100, -21, -112, -33, -30, 66, -110, 87, -81, 74, 77, 60, 61, -5, 22, -22, 3, -100, -60, -103, 11, 43, 34, -63, -37, 91, 104, -47, 27, -83, 112, -38, -106, -60, -55, 30, -40, 42, 66, -33, -128, 9, -20, -36, 92, 38, -124, -60, -18, -49, -36, 88, -100, -40, 52, 55, 118, -114, -34, -104, 122, 91, -6, 5, 91, -18, -22, -15, -61, -57, -59, 38, -42, 38, 30, -11, 74, 55, 54, 121, -1, 5, 96, 92, -101, 8, 83, -101, 32, -85, 37, 95, 94, -51, -118, 89, -19, 32, 13, 43, -90, 56, -63, -12, 38, 107, 78, 36, 39, -63, -76, -41, -113, 19, 57, 70, 125, 62, 15, -58, -80, 83, 63, 96, -21, 101, -127, -84, -26, -27, -30, -8, 73, -34, 4, -89, 6, 92, -15, 57, 87, 30};
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
    msg.setTimeStamp(0.444982718094);
    msg.setSource(17308U);
    msg.setSourceEntity(8U);
    msg.setDestination(63411U);
    msg.setDestinationEntity(198U);
    msg.seq = 310447426U;
    msg.destination.assign("LNTPABCIBDKXAGFYOXLUPZFBRQKFVIOQYZHGPZQDFUQGISISBDMWUVCZLLEJVOAKV");
    msg.timeout = 4928U;
    const char tmp_msg_0[] = {73, 125, -64, -13, 124, -20, 48, -65, 116, -41, -51, 123, 110, 91, 22, 30, 97, -3, 65, -88, 105, 84, 37, -99, -80, -88, -78, 35, -2, -48, 42, -32, 23, -79, 53, -110, 50, 53, -99, -94, -93, -76, 7, -110, 43, 120, 63, -44, 108, -12, -33, -101, 107, 89, 13, 98, 72, 90, 53, 113, 31, 78, 48, -92, 73, 61, 4, -14, 108, -21, -80, 88, -124, 27, 85, 123, -53, 42, -31, 40, 18, 69, -42, 56, 51, 3, 96, 16, 70, -29, 116, 48, 74, 99, 63, 15, -105, 26, 43, 59, -97, 83, 3, -59, -6, -101, 8, 71, -47, -3, 116, 82, -11, -88, -110, 96, 25, -116, -59, 21, 40, -117, -82, -9, 4, -110, -50, 51, -102, 4, -111, -101, -53, -109, -70, 1, -109, -126, 0, -16, 45, -45, -42, -16, -126, 68, 25, 31, 106, -127, -69, 53, 12, -61, -85, -77, 24, -115, 33, -10, 85, -58, -119, 86, -2, -74, 91, 37, -128, -46, 18, 52, 0, -92, 94, -63, 119, 45, -27, 101, 69, -127, 8, 122, -40, 2, 85, -12, -32, -35, 43, 121, 32, -116, -89};
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
    msg.setTimeStamp(0.501416095978);
    msg.setSource(14228U);
    msg.setSourceEntity(204U);
    msg.setDestination(41673U);
    msg.setDestinationEntity(169U);
    msg.source.assign("AJNGWRBYWZXVIQKQYJNFUOCDJYGHRISMYAQLPZKEUXKAPRFFGGDMYDEOILJHWJIQQFEBLHPVACNLFTWTIOOBCTLDKGPRVGDSIUBPCYPFPRXQZZIXRSEVELSKRVYATKPVVNCSQOU");
    const char tmp_msg_0[] = {71, 21, -31, 74, 97, -109, -124, 31, -38, 116, 81, -2, -39, -109, -121, -94};
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
    msg.setTimeStamp(0.625101155975);
    msg.setSource(42159U);
    msg.setSourceEntity(83U);
    msg.setDestination(31881U);
    msg.setDestinationEntity(107U);
    msg.source.assign("SYHYZPWVBKFEBABGNNVCLWZDWAQTPJHWRFNRSBHOJJDGIKZYIQJYXVVKFQAHIFRASJVOOZFPRKXTMMKELJDBXKZRI");
    const char tmp_msg_0[] = {-90, 120, 97, 98, 117, -117, 100, 11, -83, 68, -69, -104, 109, 116, 58, 118, -48, 108, -9, -59, -63, 98, -34, 93, -27, -90, -15, -116, -41, -42, 42, 96, 85};
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
    msg.setTimeStamp(0.503500668927);
    msg.setSource(20804U);
    msg.setSourceEntity(29U);
    msg.setDestination(1889U);
    msg.setDestinationEntity(229U);
    msg.source.assign("WGGRLRCXSVDSFENILDDIEGUKNSVPGSSQHROXFNJTGZSHBDHFEYOAMOMYASVLKCJJXUITLMDRSOOSXLWESAUIPGMEAAZQBUYMKQNFPTZRITQGUPDGBOHTMRXFAYECFVBMHBCRZWHTPFZXYXBIOCKWZFAGQFDKJULRTGEUJNNK");
    const char tmp_msg_0[] = {2, -114, 46, 62, 109, -22, 126, 58, 87, 48, 12, -44, 103, 7, 97, -116, 42, 46, -106, -89, 22, 82, 47, 89, -62, -14, -87, 57, 72, 18, 81, 7, -21, 27, 90, 27, 33, -124, -82, 36, 5, 10, 96, 89, 63, -123, -33, -49, 5, 49, 29, 35, -112, -92, -58, 91, -2, 71, 70, -72, 46, 34, 113, 123, 39, -24, 7, -53, 7, 65, -34, -46, -60, -69, 40, 42, 18, -9, -106, 98, -32, -99, -53, -128, -57, -19, -113, -48, 61, 40, -18, 49, -14, -117, 12, -101, 106, 44, -2, -34, 123, -42, 102, -45, -71, -28, 85, -105, 55, -110, -68, 117, 88, -38, -79, -25, 13, 83, 93, -5, 88, -125, 111, -109, 60, -33, -124, 22, -62, -66, -60, -54, -127, -4, -35, 35, 28, 48, -76, -43, -85, -26, -3, -111, -124, 97, 19, 48, 41, -36, -42, -52, 9, 64, 82, -59, 90, 62, -97, 12, -66, -120, -48, 90, 120, 74, -109, -23, 40, -65, 109, 96, -64, -90, 49, -5, 0, -55, 117, 113, 74, -91, -54, 9, -17, 22, 95, -14, -92, 37, -92, -28, 51, -73, 100, -114, -55, 69, -98, 90, -99, -93, -97, 106, 13, 53, -115, -18, 89, -70, -36, 111, -73, -110, 41, 54, -13, 37, 90, 23, -29, 100, -88, 65, 126, 64, -49, -111, -67, -46, 7, 108, -20, -7, 120, 7, -22, 93, 5};
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
    msg.setTimeStamp(0.557877294599);
    msg.setSource(38588U);
    msg.setSourceEntity(182U);
    msg.setDestination(20430U);
    msg.setDestinationEntity(100U);
    msg.seq = 176543832U;
    msg.state = 120U;
    msg.error.assign("EJOSLFZPZDYAGBYYPOXCGSYIKPFMJRAVNZDSOGANJEKTU");

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
    msg.setTimeStamp(0.153238874963);
    msg.setSource(9853U);
    msg.setSourceEntity(215U);
    msg.setDestination(59831U);
    msg.setDestinationEntity(231U);
    msg.seq = 1200076337U;
    msg.state = 249U;
    msg.error.assign("HEMBHNNXTALXHPCKBLYHNRCITICUOKHSNYSCVZFISLEBFAYQINOHGDNEBRIYJGWXWCMYJVJXNLMDUCSECPBGTZAKSTDWBZKLNPMPKIEPGOZEWRKIDOFWLPGVAZFLCFYVVFYJQEQOQOQUZTVDMJCKXXADMTLYEAWZWTBNZJMSTJFQRXQNDIWTAGHGOVOZQGOTFOMVDZSFHDHXLRRQSUUAUJPRMEXYSRYDP");

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
    msg.setTimeStamp(0.634642489285);
    msg.setSource(13462U);
    msg.setSourceEntity(111U);
    msg.setDestination(8018U);
    msg.setDestinationEntity(183U);
    msg.seq = 557009952U;
    msg.state = 135U;
    msg.error.assign("IHHAMORNDQAQSYVMLYXADWEMCUAEYLOSPNGUDXFQBGPSQJHGQGRNFOYILKUDKCWMEHBCRJASXZGYWVDJHZZGJCYNECPWFNHBQBYRDATWWBVZPLJSCSTLBKZTRISXRQKIGGSWZNCABEYAKMVQOVNHVXOSFZLJHBMNULEWLUANSXMOOXPDFDUVUCYTVECDIDOXJBATXTFRFYEJPKE");

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
    msg.setTimeStamp(0.702772935288);
    msg.setSource(9632U);
    msg.setSourceEntity(226U);
    msg.setDestination(24473U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("VZDFZDZLINQASYZYFENMQRQBZIUETVOKUMLCRSLPQROLWOWYXZLASWMNBBCIAJDBDARAMBNEJKUVITSVMCJHKVWTHFRRECFAEJLSJURCAXHTOIBSAJASPBBMGTVXSVODYGKCRBMJQPXUFLXZUMFUYGWCZWCKGZHHONREFWWTPGPRHPGTXYD");
    msg.text.assign("GWKJDZTNZVSJOQQKSZCBGIXDMHREFPSVTLUSEDFPMCEKNFKOYHRXTPECLDKZAQKVYOCXAUJWXZRPXUYBWKHBHQHLTSRPPYAQWQFBIYNNJMNFVAGVJXSOODHWKFRTXRKGNMGGUEQLCLCFIMTZYSBWLHGOKUDSUCOJNQBHMZOAREIUQWEMRGYEWAAPNHTBILVMRLOJTRLWIXOJJCLJGESDBNIICZHUDFYYZBYQAUXAGAVVCBMIVXMZVPP");

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
    msg.setTimeStamp(0.610827457094);
    msg.setSource(28613U);
    msg.setSourceEntity(156U);
    msg.setDestination(35111U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("HSGIBBRRNIGPXYMSALCSXEEKACZLSYODGIQEQWYEZKPATLCXEXFVSKBUKGJZNPVJHOLPOFBUJITCTHXLZTONVRGRQXRSUUJVRXMBISHCLTVVPTOBDDJHHDDUYIXEUTOMPKTVWMAQGFEGDGIYEINNWJZZZWKHCFWAFHVDCKECMBMXGQPSIU");
    msg.text.assign("IPIUDYVFRTYKQJITAOGHKKCMIJHQXWCQQFOUBBDHTZFMPWOBWUSLNHCRJGRADEBWAPQOOMVLVNNHNTAYACWABANOZRUTKLEMPDEWCUYHUKGFEUVXVUBUJEPQKFKRIPZSEWFNCSQPSGRC");

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
    msg.setTimeStamp(0.990516768076);
    msg.setSource(45382U);
    msg.setSourceEntity(42U);
    msg.setDestination(59980U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("LAPZAQNTLBOKKJLYHHDNHSEYMWYKRMMUVQOQFSCBMCDJNVQNZBCKLPNUXHUUTSWKTARFDRQTFLIHLLZNOONOJIGYZKALZPFJVRFIVWRUSXIH");
    msg.text.assign("YSSXOGDZYRVUUESIOCZUBFTPNLCVPOQNFGGKYBABUIBMSRZNRDWCIYHZJDBAKMAQCPEGIJOAVGHDDPOMJUHZNPHQGVKBTEAOWHBMLDTLVPYWUBLAUPXSKYYQJLTZCQDCFDXEMWOEOGGKDWXUFELZRVFJOVGALVBQIRZVMTQN");

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
    msg.setTimeStamp(0.905622280759);
    msg.setSource(21816U);
    msg.setSourceEntity(203U);
    msg.setDestination(10957U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("YNGRBMCDHRADMIQCNVIUGHQLWBSDYPLWLYZMVUPKBHEVPRATICLOGKVBCXBSUIUOFEHMQUVRKRXZWXJXBKGFCAHUVPURCGSOZLAPKGYNRDCHPE");
    msg.htime = 0.47474523959;
    msg.lat = 0.71918854899;
    msg.lon = 0.0117983222576;
    const char tmp_msg_0[] = {-46, 73, 79, -48, 118, 126, 69, -15, -125, -97, 62, -28, 18, 54, -38, -35, -48, 101, 27, -93, -35, 86, -41, 14, -3, 25, -6, 31, -27, -72, 42, -20, 2, -9, -93, -8, 19, 101, 110, -83, -41, 53, 86, 45, 91};
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
    msg.setTimeStamp(0.416362159045);
    msg.setSource(10995U);
    msg.setSourceEntity(93U);
    msg.setDestination(47921U);
    msg.setDestinationEntity(215U);
    msg.origin.assign("APYUVFOFETIVLTYRWMZOQXKZESKWISBKASLFOFLQDUGLWHEQZXKBWIPWTNKRGMEGIADWQSLCBJPFCTKONOKCQHHGXCOUPLRRPBYEEILWYVUGBSEJMUVQAQMSGHFYFVBFGVDYZKCRCTMQHNIPLEWANEAMTOMSHYD");
    msg.htime = 0.609484110815;
    msg.lat = 0.788667252681;
    msg.lon = 0.63259434833;
    const char tmp_msg_0[] = {64, 34, 81, -41, 31, 23, 8, 17, -24, 98, -3, 19, 64, 37, 124, -38, -16, 10, -128, -94, -126, -9, 98, 57, -80, -18, -11, -4, 50, -103, 83, 37, 21, 85, -17, 23, 19, 118, 28, -71, 2, -127, -69, -64, -47, 101, 126, 57, -88, 5, 70, 47, 15, -74, 92, -7, -5, 112, -28, 88, 79, 83, 47, 41, -75, 1, 31, 21, 107, 28, -25, 82, 17, -26, 107, 85, 44, 25, -112, -56, 32, -57, -70, -75, 105, 94, -85, 108, 75, -105, -88, 75, 96, 64, 67, 121, 77, 45, -67, -58, -83, -54, -109, -96, 44, -34, 69, 57, 121, -116, -9, 68, -45, -34, -67, 80, 116, 79, 71, -31, 57, -18, 77, 110, 71, -75, -17, 91, -20, 103, 104, -2, -26, -110, 126, 79, 124, -116, 104, 44, -53, 8, -52, -109, 100, 80, 69, -92, -83, 101, -122, 80, -79, 117, 55, -42, -77, 89, 95, -102, 19, 64, 25, -16, -55, -36, -119, 122, 77, -9, 121, 61, -53, -86, -51, -40, -82, 44, 25, -13, 0, -77, -100, -68, -104, 112, 94, -126, 21, 34, -128, 3, 0, -101, -32, 87, 57, -38, -8, -14, -128, -21, 118, 80, -1, -123, -33, -61, 81, 72, 17, 69, 35, -53, -120, 100, 0, 9, 17, 109, -12, -5, -117, -75, -42, -102, -28, -11, -74, -117, -93, -89, 10, 35, -44, -123, 34, -58, -33, -87, 119, -113, -91, -85, -5, -99, 120, 63, -80, -41, -58};
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
    msg.setTimeStamp(0.685728614592);
    msg.setSource(57562U);
    msg.setSourceEntity(125U);
    msg.setDestination(43601U);
    msg.setDestinationEntity(15U);
    msg.origin.assign("HDQWETSZGNQVPYCTIXBLOLCKKZDHBLAYQBXNBIFPKWVLDGTCICOAPTICFTGBYNOFQSCXBKFLYZKJGRJMDRVXNSUOXFSPHXMUPXNNGLDFYKWKBEGZUYIVTHWPPMRRJROTMWKHQQWSBHSMNVNPCTFHEPEZJMGLOEMDVVPCZRIVEJUORTGOZMRVA");
    msg.htime = 0.667167196369;
    msg.lat = 0.329729812416;
    msg.lon = 0.257363640332;
    const char tmp_msg_0[] = {10, -77, 115, -12, -62, -111, 61, -73, 19, -55, 44, -5, -67, 81, 87, -54, 46, 80, -60, 33, -9, -87, -10, -20, 35, -8, 76, 103, -44, -27, 105, 20, -36, -104, 16, 59, 10, 48, -81, 15, 102, 85, -52, -61, -74, -45, 53, 40, 46, 109, -37, -42, -94, 125, 82, 69, -61, -88, -23, -112, -118, 30, 57, -124, 5, -3, -12, 56, -106, 56, -102, 21, -4, 22, -126, -10, -51, 30, 32, -65, 34, 21, 71, 82, -86, -98, 2, -80, -40, 95, 75, -49, 60, 48, -109, -93, 100, -91, -5, -102, -28, 44, 53, -125, -19, -96, 56, 62, 101, -109, -7, -44, 28, 34, 29, -66, -43, 34, 66, -53, -2, 57, 95, 7, -87, -41, -125, -120, -52, 14, -51, -90, 81, -84, 83, -44, 126, -96, 36, -31, -54, -78, -37, 12, -25, 18, -45, -3, 50, 18, -118, -6, 40, 27, -76, -9, 79, -39, -114, -112, -109, -77, 80, -113, -100};
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
    msg.setTimeStamp(0.331368025135);
    msg.setSource(24986U);
    msg.setSourceEntity(165U);
    msg.setDestination(54640U);
    msg.setDestinationEntity(33U);
    msg.req_id = 49331U;
    msg.ttl = 51384U;
    msg.destination.assign("PEYMBZNPLXKDIVQARPBYUQDRCANQKLEWVNOERXRVMGUVDXZBQVAXSYFNCGSKIKXUKHIOOGYUPSBFYFLCUFEDUZJVHDANLLWHDNHJZPFJPQRAUPTESXROGILETSPBUVWZDCZTSCQ");
    const char tmp_msg_0[] = {38, 97, 24, -75, -73, 6, -101, 119, 98, -45, -1, -2, -48, -8, 31, 55, -65, -1, -39, 70, -19, 23, 25, -34, 65, -70, 38, -110, 2, 68, -90, 44, -75, -6, -127, 124, -15, -87, -5, -23, -30, 80, -54, 44, -115, 78, -12, -17, 7, 98, 81, -106, -81, -111, -52, -32, -114, 42, 66, -63, -128, -126, -114, -21, -46, -108, -7, 25, -111, -71, 95, 67, -48, -104, 8, -54, -19, 126, 55, 66, -106};
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
    msg.setTimeStamp(0.0106493810358);
    msg.setSource(58108U);
    msg.setSourceEntity(39U);
    msg.setDestination(10480U);
    msg.setDestinationEntity(153U);
    msg.req_id = 58648U;
    msg.ttl = 38329U;
    msg.destination.assign("BVTPRQVMQLINOHPMXEIATYYSUXVXMSJZVIZMGRHOUADWPFJVRXKJYRBNOGFTAIBUJVBLOMEWYCHQPMYSONWSABLTGMKTBUHZFFNENWVBAPIKJOKNVFQOAQGSRUKGTVYEUZXHLPGECTUAHCPNGZULZPEXFHKIFDMDOPFYKCMDUTGNXOENFYKLTJCCKAR");
    const char tmp_msg_0[] = {12, -31, -29, -35, -122, -52, -55, -74, -33, -99, -29, -63, -81, -79, -80, -46, -30, -34, 82, 22, -62, 98, -123, -18, -87, -110, 100, -39, 110, 33, -12, -125, 19, 56, -60, -106, -22, 67, 63, -20, -34, 103, 60, -31, 53, -8, 109};
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
    msg.setTimeStamp(0.837040736467);
    msg.setSource(50224U);
    msg.setSourceEntity(95U);
    msg.setDestination(7234U);
    msg.setDestinationEntity(148U);
    msg.req_id = 40483U;
    msg.ttl = 61436U;
    msg.destination.assign("FOYATFCFWYBMDDDFRXJHYGQZPOIBPWJQCHDIIACLBCRXUSXCKZVVLRAEVYBVZTDGKUTNPILSDVVFTXMHTAUWZNTFXKTEYROBNWSZPARMPGLZAVOWGJVWCJZLLTQJKQMYWVCAJIRLPDKROQMNCFACILPXNNEFLSYNUHRFJHUXHTFUKHAPTMMXOGPSOSIKLHPCZZBHZJENRUBOEQKBNW");
    const char tmp_msg_0[] = {78, 64, -31, 78, 21, -101, 89, -43, 28, 98, -28, 1, -104, -62, 13, -99, 34, 2, -81, 122, -24, 22, 22, -64, 58, 62, 55, -10, -26, -55, 60, 53, 68, 0, -57, 87, 84, 32, 18, 91, 111, 2, -5, 97, 73, -40, 27, 81, -59, 64, -3, -66, 17, -105, 0, -73, 62, -77, 95, -116, 54, -74, 94, -66, 16, -1, 113, 121, 91, -89, 8, -93, -25, -88, 79, -57, -68, -95, -72, 53, 98, 26, -120, -86, -121, 82, 14, -41, -70, 60, -89, -67, -119, 119, -6, -97, -85, -13, 91, -35, -32, 14, 50, -31, 88, 36, 28, -62, -108, 86, 22, -69, 44, -123, 86, 8, -98, -126, -63, 10, -7, -80, -37, -60, 117, -109, -81, -85};
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
    msg.setTimeStamp(0.100289762942);
    msg.setSource(25085U);
    msg.setSourceEntity(140U);
    msg.setDestination(35610U);
    msg.setDestinationEntity(223U);
    msg.req_id = 1612U;
    msg.status = 143U;
    msg.text.assign("JDFKFNZKEILSDJILVBIDFDOITWWMMGPRVATPLCWDSREHGUMKNFGMWBNZQPMQJPATODEHUCCTXYQLJDYGHHGNYIJCKYXBDVUZBCMGTYWVLZNRTCUUHJESTPAXZVVUCSUXRAQKULKHOCOJYNDFOCYSRWNGQPIWBKQLVH");

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
    msg.setTimeStamp(0.935247400645);
    msg.setSource(32936U);
    msg.setSourceEntity(24U);
    msg.setDestination(57973U);
    msg.setDestinationEntity(99U);
    msg.req_id = 8787U;
    msg.status = 36U;
    msg.text.assign("OFKNYZABYXORIMJXSNVOTLWPHJCCUIHFNYJOHXIFEEHZMVYRILAJRNZWELYXOZZWGBMBKYEPUKIJVDADTHQSBAQGGSCVVCEFJNQHMFCUYDWBRKDCACJQEHNXCSPDWBGFGJLLCWLMSD");

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
    msg.setTimeStamp(0.567891981976);
    msg.setSource(23145U);
    msg.setSourceEntity(68U);
    msg.setDestination(54679U);
    msg.setDestinationEntity(59U);
    msg.req_id = 7270U;
    msg.status = 233U;
    msg.text.assign("TQNYILQSQHMGTKMHIQQBDVUNBSDWIBOKVVXCRMQTOJJEUHGZUOSBVWEKNFPPRXEARKMXJWDXOBRAFLJCU");

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
    msg.setTimeStamp(0.424257340887);
    msg.setSource(32370U);
    msg.setSourceEntity(52U);
    msg.setDestination(47322U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("TTQHJSRABPKATMCTVGWXTYJQXCGKELHPQNQDZGYPCHKXQGZB");
    msg.links = 3654136432U;

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
    msg.setTimeStamp(0.232460062153);
    msg.setSource(45004U);
    msg.setSourceEntity(246U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("YCMIFNZUNWEZIJCGBCKPOPKKPOGMHSLZMFUMQFGCTEGTQDUITYNWYLEQGHKGRWWJZLVFFODZVEKULEONQTWIUGHJIXWEERJKQPDRZAZCUKMAQBRCGNJPFPONKVQAHAIXTHABXLCJRHATVPUDMOFYDRCSYBSZWXDXFSXLJZXJYGUHNSBQLEPOSBJHU");
    msg.links = 436979631U;

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
    msg.setTimeStamp(0.402770659205);
    msg.setSource(45414U);
    msg.setSourceEntity(185U);
    msg.setDestination(5835U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("XIOONFIBTQBLLYQDZOEVCMMGFEPUWWR");
    msg.links = 3541487587U;

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
    msg.setTimeStamp(0.614547190443);
    msg.setSource(31524U);
    msg.setSourceEntity(31U);
    msg.setDestination(41217U);
    msg.setDestinationEntity(68U);
    msg.groupname.assign("FVIBTMRMWOZUYZADFYNCIABZTQHIESRDIUZCOGYBWSJTSJVDKLYCHLNTIHGDXRKJFITONPVUXKMPRAFUDUCKSTSQPTMQYMDMYAPHAUBOWBYCLJBXZJHSXJQBEDMBARWVEHESNCJLFHKMXDJWUFFWBSRVHVQOOQPEEWCKNHJHVGKALIRGNGURWFRPTVLQZXNPIQEBYCTVEWZ");
    msg.action = 173U;
    msg.grouplist.assign("JFQKMBNZLYCHANUGRJTQFLIIHWCASHRSEAMXESRXTOBPNDZMATXBEYOUCVJOTWSEZPUUFDDPWHKTRKDLSYIDBWWLCEIBOGIRSUZUMNPGWYPDA");

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
    msg.setTimeStamp(0.721746321122);
    msg.setSource(36034U);
    msg.setSourceEntity(134U);
    msg.setDestination(21749U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("BZTCVXMHTUYVSTAWCWMTJUANLZUSAWNQWHZVDHKAWODGPXQPPMZUISPVAOOVXNFOEAGQWBLIINLVNKWFMCIQAGPDLTNPMJJX");
    msg.action = 107U;
    msg.grouplist.assign("YLKBNSHHSWEYFEPKNKVNAKWDTFFGCOSJBMCAVNIWIBOCPHXGPQTSMGOCIQZLKOGMDYAUZFIPZRJLEAFFUTUTAYXXLRHVOGKDJQQCZWUYIYICFCKALURUZJYPAFSWCLYHETDLRVMZIROLBYGXZPUAJVSSXOXHEWPMMRVOSMQHRCWHRVAUMAEPITXPJRQOJJVOWNHVBPBXBCZVIKQNGTDJNNXIKTTUNEGTFDYSLQDKLB");

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
    msg.setTimeStamp(0.0544140853892);
    msg.setSource(20260U);
    msg.setSourceEntity(110U);
    msg.setDestination(8184U);
    msg.setDestinationEntity(139U);
    msg.groupname.assign("HHWOUBRJAETEXUMRVABVBXSFKXXBAAHLIPUGWWIDUZRIACVQKZRFCZECAKLCSTNLTQPEKGXDVTUVQENKPQBOWRZWBVLZQAEWTYNNDCHNOGSQSPGZXIXILBJDYMJJDDXGEIITWCJQCNRJSKHLPYPVMTKECGZUHYUNDWVDTPBNMESSMRFDDOURHMLFWKOFPGBTTNGMILYCCJGQWBOYYFAOJHYISGFYV");
    msg.action = 195U;
    msg.grouplist.assign("EXHIBUAGJLPQWLXNXWGFJUPZKSBGKLHHVJGSTRVTYKSPUOKNGJVFUALZQYFOYCHYEVFTLAQEQDPUDBVQDOBMNIPDMRTRMCIKGSYKLQVDOMERHKTXEIADFVXHDAGCULJVNSHZOTNSPNRWKNLJIIMRXIIZCKJHTJAPWVATZZOONRWAUCWSUBSMMXWYFFDTGZXMXEHQMEVBZJGZYZPHCQQXRCPWWOBPUESWKBOFCNNQTRBADJISDRGCYYMIBFC");

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
    msg.setTimeStamp(0.439493168842);
    msg.setSource(65093U);
    msg.setSourceEntity(202U);
    msg.setDestination(58726U);
    msg.setDestinationEntity(56U);
    msg.id = 238U;
    msg.range = 0.935730750396;

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
    msg.setTimeStamp(0.0067793538052);
    msg.setSource(27420U);
    msg.setSourceEntity(71U);
    msg.setDestination(8795U);
    msg.setDestinationEntity(98U);
    msg.id = 175U;
    msg.range = 0.977374336118;

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
    msg.setTimeStamp(0.923600479932);
    msg.setSource(54570U);
    msg.setSourceEntity(140U);
    msg.setDestination(13712U);
    msg.setDestinationEntity(251U);
    msg.id = 221U;
    msg.range = 0.621997339569;

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
    msg.setTimeStamp(0.539288328368);
    msg.setSource(35127U);
    msg.setSourceEntity(148U);
    msg.setDestination(65226U);
    msg.setDestinationEntity(230U);
    msg.beacon.assign("BRDKKMGZVAKGVPNMOCGFXKQPNHYSBMTLVLHEULECIECWJFTSRDFNXXNGHSTTCUNSZZRUIYPQFINRXAVMABSBYWDRCWMFEMRAEOMVBUYODFNHPDGRQDXQYOZEXFUEALHZQJHSQITLAKTGULLGQFEWSZEVAXXIIBTTSABJBRKTOVDLHZPKXGDZOPHPYYIWVJJOLECWKIGJOH");
    msg.lat = 0.381253526298;
    msg.lon = 0.240842237658;
    msg.depth = 0.100813817512;
    msg.query_channel = 249U;
    msg.reply_channel = 31U;
    msg.transponder_delay = 89U;

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
    msg.setTimeStamp(0.982767606745);
    msg.setSource(44580U);
    msg.setSourceEntity(146U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(105U);
    msg.beacon.assign("RJHBHZCEVIVQFCQMKSOGVUOZAOPVNRHJWEFWBBFBQLMMROWBWDYLOGCAKYAKDSLSIIGNLRWHAUDIWQZCILZZNTAMOPTVPVDFTQFESCFYEETAYXJMENBXKENKXJRWXPDRITKPXRIMYGLCAPFKZYPPXDLVIDUN");
    msg.lat = 0.716561700765;
    msg.lon = 0.315747471419;
    msg.depth = 0.221848501146;
    msg.query_channel = 56U;
    msg.reply_channel = 97U;
    msg.transponder_delay = 26U;

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
    msg.setTimeStamp(0.909538832695);
    msg.setSource(64994U);
    msg.setSourceEntity(129U);
    msg.setDestination(32448U);
    msg.setDestinationEntity(228U);
    msg.beacon.assign("NXNIRNPCLABMHIJPHROXPCAABYSHLGFMJNDQYRCAORGNOCSLUB");
    msg.lat = 0.391178333275;
    msg.lon = 0.839895975478;
    msg.depth = 0.507716672942;
    msg.query_channel = 247U;
    msg.reply_channel = 31U;
    msg.transponder_delay = 57U;

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
    msg.setTimeStamp(0.176066418711);
    msg.setSource(55742U);
    msg.setSourceEntity(129U);
    msg.setDestination(28505U);
    msg.setDestinationEntity(159U);
    msg.op = 178U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BMKHMEVPFXMFFECJLMMQRYAXLZJTESZAXAIDXXXNURGCMTESPPUSSCUSQZGYPFVEXAIQQJBGPBPGNHNHDBAVLWGBYDAUORTELWYKVPHPQTIGKMDDDNUOYCJIHUUTHWLKWOWNKNVZBBOFQHYIXPTDOHRLZZCESM");
    tmp_msg_0.lat = 0.0966080662069;
    tmp_msg_0.lon = 0.671164199941;
    tmp_msg_0.depth = 0.56988932197;
    tmp_msg_0.query_channel = 249U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 56U;
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
    msg.setTimeStamp(0.142036220999);
    msg.setSource(21228U);
    msg.setSourceEntity(158U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(87U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.525350864473);
    msg.setSource(54788U);
    msg.setSourceEntity(57U);
    msg.setDestination(45981U);
    msg.setDestinationEntity(54U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.454799498009);
    msg.setSource(26535U);
    msg.setSourceEntity(212U);
    msg.setDestination(49474U);
    msg.setDestinationEntity(140U);
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 100U;
    tmp_msg_0.value = 0.0088140936994;
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
    msg.setTimeStamp(0.977028788649);
    msg.setSource(60317U);
    msg.setSourceEntity(38U);
    msg.setDestination(63768U);
    msg.setDestinationEntity(16U);
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("EAHBSTFOZWJFWYCUPDXTITMRUOZNLUBUXCZZYHEBQDDSTDJSAMVEKDUAGNEPYUKPLTGISIZRCUWXULKCLROZXKOJYWIMNBRCTZJYGMQRXHVDKJKWLCVXQBGOOUVTVJIQREH");
    tmp_msg_0.predicate.assign("CXFPGNTZRMONGTARLVHLPRVRIZGYQBQGWTCOTHSEPRTIQCRKJLYIPSVICSWAIFPQFZAMMZEARZUBHJXEXMKXZRCJUIDYZYUMAY");
    tmp_msg_0.attributes.assign("IZIDHMCCQBVWHQVZTTVNZKUCLHHDNFWKPSGFLARWAOOSDDQQYOEKYFJPLJYJUPSXWFHQIFZADEMUSOFXZDICTUFSXXGRLMQGENSMBCPOGBIGNVRGIEEUWWESLNVJTJNJDTDCCBPXNZXVAGNOUBMPXU");
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
    msg.setTimeStamp(0.223050191105);
    msg.setSource(47867U);
    msg.setSourceEntity(228U);
    msg.setDestination(54403U);
    msg.setDestinationEntity(26U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 191U;
    tmp_msg_0.eta = 62806U;
    tmp_msg_0.info.assign("PIRDFOYMZHDZZWLYBUJKNCZSXXQDPLQOMWWOMZHWPXTIHHORKKJVNUSIXLAASWHYBWQXLAACHETBBVTFRUVVKMRRZZHDQQXGKNIGBFLGKTITMOCQWJLMJYDUGGCEHDKJOKCGSVYNYCGJNSANASNEEVAHPYKUFOEOUUPCPRFUZRBOHESIGRCVJQBDQUBBPIVTFJCWEQYX");
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
    msg.setTimeStamp(0.168211399068);
    msg.setSource(35614U);
    msg.setSourceEntity(57U);
    msg.setDestination(56622U);
    msg.setDestinationEntity(206U);
    msg.op = 246U;
    msg.system.assign("XCMEPKKHBPXBKSIFDLGHLONYZAGHNREUVAVKFAHOBBMLLDLRIUBDNFNWHGDYNZQPZCZULTCDXGTDACRXWWQTVVIHHIEDQTMINSGZKGWHFJMIGJSREPECVGDOCOBPRQFLRZJOYMXKSCAJSPLSWJTDQUTARXQFWTJBRYIYEJOFVIWOYTXYOAMACHKNEQJLUSXUEQFYQKXPRWTTPDCLCXVWMZUBRHGZAZSMBVENNINVFMJBASEUGIF");
    msg.range = 0.628284513776;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 79U;
    tmp_msg_0.value = 0.385043686793;
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
    msg.setTimeStamp(0.922742017557);
    msg.setSource(55599U);
    msg.setSourceEntity(229U);
    msg.setDestination(2984U);
    msg.setDestinationEntity(109U);
    msg.op = 58U;
    msg.system.assign("PAFFDGPWSBERBSFYNPWESGFEFXMMNZIRVSMWATHNPGLTJEJLSORNYRTRMDSINQAJVWRWXSARVANQYJETAHUJVCTJMBENTLHQIBXZKKFJCMEDFUROODCHCPCLHGDUHLQZQZDIXSBCXXTK");
    msg.range = 0.848406517554;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.973973215291);
    msg.setSource(30366U);
    msg.setSourceEntity(9U);
    msg.setDestination(2391U);
    msg.setDestinationEntity(228U);
    msg.op = 74U;
    msg.system.assign("IMABNRQZEDQGYJTLVSZOLCRYPKEU");
    msg.range = 0.845303176458;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.256410244794;
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
    msg.setTimeStamp(0.447956279389);
    msg.setSource(4463U);
    msg.setSourceEntity(155U);
    msg.setDestination(43508U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.672905901163);
    msg.setSource(37117U);
    msg.setSourceEntity(140U);
    msg.setDestination(37766U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.341182865824);
    msg.setSource(18241U);
    msg.setSourceEntity(14U);
    msg.setDestination(15816U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.196663153933);
    msg.setSource(39058U);
    msg.setSourceEntity(99U);
    msg.setDestination(21265U);
    msg.setDestinationEntity(57U);
    msg.list.assign("MMHVWXTFVZBPCGIMGRJEXTQBGSRJKRKCYRHDGUFIMCZAAPDCJISPAOIZBBWILIYSPKUXCBXXWZUXFDYRCFTGVVLXGLQHDFWHEMCARQUYPEYGPZZJOKAFQUTDMYOEVJITXESSELVJJSFZUAWNBTMVN");

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
    msg.setTimeStamp(0.995218402152);
    msg.setSource(15876U);
    msg.setSourceEntity(155U);
    msg.setDestination(49200U);
    msg.setDestinationEntity(206U);
    msg.list.assign("JTAMASTPWNETBBBEREDNWDQGNKSJBXBOAJPIGRZCRPYIUJFIPUQYDLCEUXVDWNRHDYLKJDFHFJVZUEIDZNWRBEYCSFUDHWRKKOQYHOOTNIALUNZQKXGZIFFQXYTASLFKW");

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
    msg.setTimeStamp(0.129867721534);
    msg.setSource(10140U);
    msg.setSourceEntity(187U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(241U);
    msg.list.assign("UAHQEMDLYSZZDXKHKUGUYYENQKBGNFNIEGGPXHDHPLYMBOLMIVWVAJIDEKBRPPSGFIFDYLJZBFMCQOZOEPDUMEYJSVGKGPBWXNP");

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
    msg.setTimeStamp(0.696256654486);
    msg.setSource(40321U);
    msg.setSourceEntity(134U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(43U);
    msg.value = -7372;

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
    msg.setTimeStamp(0.329251998664);
    msg.setSource(37070U);
    msg.setSourceEntity(124U);
    msg.setDestination(37795U);
    msg.setDestinationEntity(250U);
    msg.value = -28440;

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
    msg.setTimeStamp(0.673830472608);
    msg.setSource(49605U);
    msg.setSourceEntity(18U);
    msg.setDestination(42441U);
    msg.setDestinationEntity(4U);
    msg.value = 9940;

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
    msg.setTimeStamp(0.566663123712);
    msg.setSource(55774U);
    msg.setSourceEntity(35U);
    msg.setDestination(23944U);
    msg.setDestinationEntity(41U);
    msg.value = 0.203862025628;

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
    msg.setTimeStamp(0.0253913487465);
    msg.setSource(39146U);
    msg.setSourceEntity(80U);
    msg.setDestination(38651U);
    msg.setDestinationEntity(19U);
    msg.value = 0.99666856457;

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
    msg.setTimeStamp(0.128475708344);
    msg.setSource(3750U);
    msg.setSourceEntity(169U);
    msg.setDestination(19072U);
    msg.setDestinationEntity(194U);
    msg.value = 0.444015967365;

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
    msg.setTimeStamp(0.370355769073);
    msg.setSource(20810U);
    msg.setSourceEntity(77U);
    msg.setDestination(15324U);
    msg.setDestinationEntity(223U);
    msg.value = 0.192118261694;

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
    msg.setTimeStamp(0.552525076155);
    msg.setSource(55863U);
    msg.setSourceEntity(95U);
    msg.setDestination(1211U);
    msg.setDestinationEntity(92U);
    msg.value = 0.660848148661;

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
    msg.setTimeStamp(0.162342098286);
    msg.setSource(16816U);
    msg.setSourceEntity(42U);
    msg.setDestination(15751U);
    msg.setDestinationEntity(7U);
    msg.value = 0.0704003860749;

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
    msg.setTimeStamp(0.668271582685);
    msg.setSource(63693U);
    msg.setSourceEntity(4U);
    msg.setDestination(40987U);
    msg.setDestinationEntity(134U);
    msg.validity = 34030U;
    msg.type = 92U;
    msg.utc_year = 52342U;
    msg.utc_month = 175U;
    msg.utc_day = 16U;
    msg.utc_time = 0.577518472615;
    msg.lat = 0.637787008158;
    msg.lon = 0.457666741152;
    msg.height = 0.493487868246;
    msg.satellites = 218U;
    msg.cog = 0.074903576682;
    msg.sog = 0.684294705911;
    msg.hdop = 0.426133808278;
    msg.vdop = 0.156294511943;
    msg.hacc = 0.0432540694178;
    msg.vacc = 0.398100626247;

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
    msg.setTimeStamp(0.304696361322);
    msg.setSource(5133U);
    msg.setSourceEntity(47U);
    msg.setDestination(49435U);
    msg.setDestinationEntity(216U);
    msg.validity = 32979U;
    msg.type = 140U;
    msg.utc_year = 11516U;
    msg.utc_month = 111U;
    msg.utc_day = 45U;
    msg.utc_time = 0.519806767878;
    msg.lat = 0.284753534939;
    msg.lon = 0.372356759568;
    msg.height = 0.287695949625;
    msg.satellites = 102U;
    msg.cog = 0.517607498655;
    msg.sog = 0.0609987699809;
    msg.hdop = 0.729907365448;
    msg.vdop = 0.60586285464;
    msg.hacc = 0.707346325946;
    msg.vacc = 0.370050447361;

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
    msg.setTimeStamp(0.35646317113);
    msg.setSource(61564U);
    msg.setSourceEntity(49U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(121U);
    msg.validity = 53798U;
    msg.type = 88U;
    msg.utc_year = 21599U;
    msg.utc_month = 115U;
    msg.utc_day = 230U;
    msg.utc_time = 0.524667522957;
    msg.lat = 0.123676875828;
    msg.lon = 0.560358823385;
    msg.height = 0.533470973732;
    msg.satellites = 222U;
    msg.cog = 0.370765992403;
    msg.sog = 0.0239395889041;
    msg.hdop = 0.759660983072;
    msg.vdop = 0.569784097958;
    msg.hacc = 0.325841163422;
    msg.vacc = 0.323600952795;

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
    msg.setTimeStamp(0.899187679752);
    msg.setSource(34139U);
    msg.setSourceEntity(175U);
    msg.setDestination(45660U);
    msg.setDestinationEntity(156U);
    msg.time = 0.486855543988;
    msg.phi = 0.123952210437;
    msg.theta = 0.965118039002;
    msg.psi = 0.0169836749393;
    msg.psi_magnetic = 0.727011195559;

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
    msg.setTimeStamp(0.610219631621);
    msg.setSource(45825U);
    msg.setSourceEntity(66U);
    msg.setDestination(37429U);
    msg.setDestinationEntity(130U);
    msg.time = 0.91157995993;
    msg.phi = 0.685930392346;
    msg.theta = 0.424111918587;
    msg.psi = 0.438035126733;
    msg.psi_magnetic = 0.393337473723;

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
    msg.setTimeStamp(0.0524234900518);
    msg.setSource(42517U);
    msg.setSourceEntity(214U);
    msg.setDestination(34188U);
    msg.setDestinationEntity(238U);
    msg.time = 0.510261071317;
    msg.phi = 0.226588509531;
    msg.theta = 0.0820428192112;
    msg.psi = 0.666080134962;
    msg.psi_magnetic = 0.977349698925;

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
    msg.setTimeStamp(0.301038320023);
    msg.setSource(18854U);
    msg.setSourceEntity(64U);
    msg.setDestination(34490U);
    msg.setDestinationEntity(126U);
    msg.time = 0.975252847383;
    msg.x = 0.0312519719996;
    msg.y = 0.130192657487;
    msg.z = 0.252428192139;
    msg.timestep = 0.364079093178;

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
    msg.setTimeStamp(0.83898015295);
    msg.setSource(24884U);
    msg.setSourceEntity(46U);
    msg.setDestination(49669U);
    msg.setDestinationEntity(117U);
    msg.time = 0.567460618753;
    msg.x = 0.19111616503;
    msg.y = 0.945465764951;
    msg.z = 0.22287168194;
    msg.timestep = 0.319085781767;

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
    msg.setTimeStamp(0.161364220109);
    msg.setSource(4044U);
    msg.setSourceEntity(143U);
    msg.setDestination(986U);
    msg.setDestinationEntity(124U);
    msg.time = 0.418509875117;
    msg.x = 0.565329352649;
    msg.y = 0.0333689676148;
    msg.z = 0.286723723722;
    msg.timestep = 0.780553876273;

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
    msg.setTimeStamp(0.816177770769);
    msg.setSource(28122U);
    msg.setSourceEntity(147U);
    msg.setDestination(58288U);
    msg.setDestinationEntity(79U);
    msg.time = 0.620657662444;
    msg.x = 0.234411424157;
    msg.y = 0.10421769938;
    msg.z = 0.663579840991;

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
    msg.setTimeStamp(0.305178825619);
    msg.setSource(24880U);
    msg.setSourceEntity(87U);
    msg.setDestination(52180U);
    msg.setDestinationEntity(59U);
    msg.time = 0.705968805042;
    msg.x = 0.447880136986;
    msg.y = 0.315732895136;
    msg.z = 0.424051375537;

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
    msg.setTimeStamp(0.113290193935);
    msg.setSource(25898U);
    msg.setSourceEntity(162U);
    msg.setDestination(31711U);
    msg.setDestinationEntity(138U);
    msg.time = 0.597719983295;
    msg.x = 0.276324166842;
    msg.y = 0.5369937143;
    msg.z = 0.331347334064;

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
    msg.setTimeStamp(0.333379398183);
    msg.setSource(14505U);
    msg.setSourceEntity(127U);
    msg.setDestination(28310U);
    msg.setDestinationEntity(227U);
    msg.time = 0.568156284447;
    msg.x = 0.072733346758;
    msg.y = 0.421024472962;
    msg.z = 0.623603801315;

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
    msg.setTimeStamp(0.54354969331);
    msg.setSource(54124U);
    msg.setSourceEntity(202U);
    msg.setDestination(4256U);
    msg.setDestinationEntity(165U);
    msg.time = 0.868049644042;
    msg.x = 0.694612653274;
    msg.y = 0.840120043593;
    msg.z = 0.954146339157;

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
    msg.setTimeStamp(0.122170098188);
    msg.setSource(30111U);
    msg.setSourceEntity(149U);
    msg.setDestination(45593U);
    msg.setDestinationEntity(193U);
    msg.time = 0.331912530961;
    msg.x = 0.487152462126;
    msg.y = 0.681252795679;
    msg.z = 0.661844164547;

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
    msg.setTimeStamp(0.704505042745);
    msg.setSource(56638U);
    msg.setSourceEntity(81U);
    msg.setDestination(36406U);
    msg.setDestinationEntity(202U);
    msg.time = 0.00799172119683;
    msg.x = 0.328214530434;
    msg.y = 0.524635576169;
    msg.z = 0.692531021025;

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
    msg.setTimeStamp(0.487002714494);
    msg.setSource(61101U);
    msg.setSourceEntity(92U);
    msg.setDestination(49867U);
    msg.setDestinationEntity(243U);
    msg.time = 0.795870752492;
    msg.x = 0.0574008457148;
    msg.y = 0.715220589848;
    msg.z = 0.725950661681;

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
    msg.setTimeStamp(0.497600769907);
    msg.setSource(60711U);
    msg.setSourceEntity(157U);
    msg.setDestination(43911U);
    msg.setDestinationEntity(201U);
    msg.time = 0.470468728782;
    msg.x = 0.965439255724;
    msg.y = 0.982949225452;
    msg.z = 0.185518273856;

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
    msg.setTimeStamp(0.549679940568);
    msg.setSource(38590U);
    msg.setSourceEntity(174U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(196U);
    msg.validity = 41U;
    msg.x = 0.792618112909;
    msg.y = 0.453836805756;
    msg.z = 0.19551135348;

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
    msg.setTimeStamp(0.436160135614);
    msg.setSource(39862U);
    msg.setSourceEntity(251U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(9U);
    msg.validity = 253U;
    msg.x = 0.972444395121;
    msg.y = 0.84782716477;
    msg.z = 0.346921286401;

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
    msg.setTimeStamp(0.888113442436);
    msg.setSource(23262U);
    msg.setSourceEntity(249U);
    msg.setDestination(43989U);
    msg.setDestinationEntity(19U);
    msg.validity = 200U;
    msg.x = 0.0248008111664;
    msg.y = 0.683175033621;
    msg.z = 0.550454506368;

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
    msg.setTimeStamp(0.0333983836045);
    msg.setSource(46092U);
    msg.setSourceEntity(206U);
    msg.setDestination(27244U);
    msg.setDestinationEntity(58U);
    msg.validity = 174U;
    msg.x = 0.0818167305949;
    msg.y = 0.89814423408;
    msg.z = 0.45055043031;

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
    msg.setTimeStamp(0.868885392594);
    msg.setSource(34263U);
    msg.setSourceEntity(216U);
    msg.setDestination(40103U);
    msg.setDestinationEntity(141U);
    msg.validity = 65U;
    msg.x = 0.0419450964552;
    msg.y = 0.704546781504;
    msg.z = 0.789321062809;

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
    msg.setTimeStamp(0.91197439942);
    msg.setSource(6867U);
    msg.setSourceEntity(146U);
    msg.setDestination(11869U);
    msg.setDestinationEntity(111U);
    msg.validity = 111U;
    msg.x = 0.168547176192;
    msg.y = 0.258399074362;
    msg.z = 0.694727644978;

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
    msg.setTimeStamp(0.579164881323);
    msg.setSource(17055U);
    msg.setSourceEntity(90U);
    msg.setDestination(11930U);
    msg.setDestinationEntity(204U);
    msg.time = 0.548609224146;
    msg.x = 0.165242294767;
    msg.y = 0.886310021457;
    msg.z = 0.861929347165;

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
    msg.setTimeStamp(0.158701027084);
    msg.setSource(16034U);
    msg.setSourceEntity(184U);
    msg.setDestination(14354U);
    msg.setDestinationEntity(248U);
    msg.time = 0.545326050321;
    msg.x = 0.543872053305;
    msg.y = 0.0768319132208;
    msg.z = 0.510424396102;

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
    msg.setTimeStamp(0.49040760003);
    msg.setSource(4886U);
    msg.setSourceEntity(67U);
    msg.setDestination(22907U);
    msg.setDestinationEntity(42U);
    msg.time = 0.800557593487;
    msg.x = 0.985792206433;
    msg.y = 0.314229784949;
    msg.z = 0.398834258875;

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
    msg.setTimeStamp(0.069869755225);
    msg.setSource(35955U);
    msg.setSourceEntity(168U);
    msg.setDestination(51352U);
    msg.setDestinationEntity(107U);
    msg.validity = 71U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.00395773264323;
    tmp_msg_0.y = 0.174248881569;
    tmp_msg_0.z = 0.239158895924;
    tmp_msg_0.phi = 0.308520732325;
    tmp_msg_0.theta = 0.100049857363;
    tmp_msg_0.psi = 0.748543771772;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.00737506775321;
    tmp_msg_1.beam_height = 0.980707271904;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.119295849323;

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
    msg.setTimeStamp(0.652052636927);
    msg.setSource(31653U);
    msg.setSourceEntity(219U);
    msg.setDestination(26029U);
    msg.setDestinationEntity(15U);
    msg.validity = 217U;
    msg.value = 0.0370978911573;

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
    msg.setTimeStamp(0.41567341019);
    msg.setSource(45215U);
    msg.setSourceEntity(213U);
    msg.setDestination(7347U);
    msg.setDestinationEntity(35U);
    msg.validity = 187U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.151818795466;
    tmp_msg_0.beam_height = 0.561760003384;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.161809312517;

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
    msg.setTimeStamp(0.69733608035);
    msg.setSource(14985U);
    msg.setSourceEntity(47U);
    msg.setDestination(12348U);
    msg.setDestinationEntity(72U);
    msg.value = 0.8787727935;

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
    msg.setTimeStamp(0.012617711626);
    msg.setSource(35973U);
    msg.setSourceEntity(179U);
    msg.setDestination(62712U);
    msg.setDestinationEntity(206U);
    msg.value = 0.47887318237;

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
    msg.setTimeStamp(0.154218368367);
    msg.setSource(2867U);
    msg.setSourceEntity(7U);
    msg.setDestination(50439U);
    msg.setDestinationEntity(84U);
    msg.value = 0.655120333582;

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
    msg.setTimeStamp(0.118065126519);
    msg.setSource(21201U);
    msg.setSourceEntity(141U);
    msg.setDestination(17290U);
    msg.setDestinationEntity(129U);
    msg.value = 0.318802401819;

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
    msg.setTimeStamp(0.664330938835);
    msg.setSource(30699U);
    msg.setSourceEntity(251U);
    msg.setDestination(35062U);
    msg.setDestinationEntity(120U);
    msg.value = 0.182841882591;

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
    msg.setTimeStamp(0.220011881559);
    msg.setSource(47745U);
    msg.setSourceEntity(89U);
    msg.setDestination(33642U);
    msg.setDestinationEntity(108U);
    msg.value = 0.496409125823;

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
    msg.setTimeStamp(0.397777231552);
    msg.setSource(37326U);
    msg.setSourceEntity(211U);
    msg.setDestination(65078U);
    msg.setDestinationEntity(141U);
    msg.value = 0.305979612075;

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
    msg.setTimeStamp(0.503584829079);
    msg.setSource(5161U);
    msg.setSourceEntity(200U);
    msg.setDestination(51930U);
    msg.setDestinationEntity(77U);
    msg.value = 0.676160976462;

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
    msg.setTimeStamp(0.00898866116021);
    msg.setSource(25627U);
    msg.setSourceEntity(80U);
    msg.setDestination(16741U);
    msg.setDestinationEntity(30U);
    msg.value = 0.00578979628738;

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
    msg.setTimeStamp(0.0794462603931);
    msg.setSource(43415U);
    msg.setSourceEntity(181U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(55U);
    msg.value = 0.0210690136219;

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
    msg.setTimeStamp(0.800520989423);
    msg.setSource(14545U);
    msg.setSourceEntity(160U);
    msg.setDestination(463U);
    msg.setDestinationEntity(99U);
    msg.value = 0.274053988598;

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
    msg.setTimeStamp(0.102958785186);
    msg.setSource(47132U);
    msg.setSourceEntity(179U);
    msg.setDestination(45696U);
    msg.setDestinationEntity(10U);
    msg.value = 0.170336947887;

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
    msg.setTimeStamp(0.395226309488);
    msg.setSource(25196U);
    msg.setSourceEntity(132U);
    msg.setDestination(29250U);
    msg.setDestinationEntity(40U);
    msg.value = 0.768120788739;

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
    msg.setTimeStamp(0.548035664407);
    msg.setSource(44128U);
    msg.setSourceEntity(17U);
    msg.setDestination(32927U);
    msg.setDestinationEntity(9U);
    msg.value = 0.893029107975;

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
    msg.setTimeStamp(0.0356918382459);
    msg.setSource(65489U);
    msg.setSourceEntity(104U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(151U);
    msg.value = 0.419837187747;

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
    msg.setTimeStamp(0.640944871964);
    msg.setSource(40714U);
    msg.setSourceEntity(18U);
    msg.setDestination(3982U);
    msg.setDestinationEntity(2U);
    msg.value = 0.556577506714;

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
    msg.setTimeStamp(0.423889946215);
    msg.setSource(5599U);
    msg.setSourceEntity(94U);
    msg.setDestination(18802U);
    msg.setDestinationEntity(238U);
    msg.value = 0.778533811432;

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
    msg.setTimeStamp(0.956255688692);
    msg.setSource(31642U);
    msg.setSourceEntity(251U);
    msg.setDestination(7430U);
    msg.setDestinationEntity(245U);
    msg.value = 0.682652515146;

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
    msg.setTimeStamp(0.941593263546);
    msg.setSource(23085U);
    msg.setSourceEntity(213U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(174U);
    msg.value = 0.102190263458;

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
    msg.setTimeStamp(0.665855359604);
    msg.setSource(32968U);
    msg.setSourceEntity(246U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(165U);
    msg.value = 0.875568120194;

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
    msg.setTimeStamp(0.752925483778);
    msg.setSource(48942U);
    msg.setSourceEntity(179U);
    msg.setDestination(36157U);
    msg.setDestinationEntity(35U);
    msg.value = 0.799824857533;

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
    msg.setTimeStamp(0.938270556819);
    msg.setSource(51382U);
    msg.setSourceEntity(89U);
    msg.setDestination(5501U);
    msg.setDestinationEntity(13U);
    msg.value = 0.158794444095;

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
    msg.setTimeStamp(0.0392137372779);
    msg.setSource(22460U);
    msg.setSourceEntity(65U);
    msg.setDestination(51632U);
    msg.setDestinationEntity(17U);
    msg.value = 0.609798676931;

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
    msg.setTimeStamp(0.779799590873);
    msg.setSource(59673U);
    msg.setSourceEntity(227U);
    msg.setDestination(30440U);
    msg.setDestinationEntity(106U);
    msg.value = 0.588429065404;

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
    msg.setTimeStamp(0.164449503037);
    msg.setSource(1055U);
    msg.setSourceEntity(233U);
    msg.setDestination(15952U);
    msg.setDestinationEntity(83U);
    msg.direction = 0.841262393577;
    msg.speed = 0.988827236392;
    msg.turbulence = 0.761273611201;

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
    msg.setTimeStamp(0.357751777841);
    msg.setSource(61926U);
    msg.setSourceEntity(217U);
    msg.setDestination(20737U);
    msg.setDestinationEntity(74U);
    msg.direction = 0.393523499914;
    msg.speed = 0.369216462323;
    msg.turbulence = 0.663137131458;

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
    msg.setTimeStamp(0.214959843473);
    msg.setSource(41351U);
    msg.setSourceEntity(190U);
    msg.setDestination(54279U);
    msg.setDestinationEntity(186U);
    msg.direction = 0.0807873987705;
    msg.speed = 0.449221342022;
    msg.turbulence = 0.786713962525;

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
    msg.setTimeStamp(0.502570091424);
    msg.setSource(53657U);
    msg.setSourceEntity(48U);
    msg.setDestination(29199U);
    msg.setDestinationEntity(82U);
    msg.value = 0.682366238097;

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
    msg.setTimeStamp(0.915664437681);
    msg.setSource(33120U);
    msg.setSourceEntity(143U);
    msg.setDestination(16417U);
    msg.setDestinationEntity(66U);
    msg.value = 0.152671650374;

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
    msg.setTimeStamp(0.135546941572);
    msg.setSource(62879U);
    msg.setSourceEntity(241U);
    msg.setDestination(59513U);
    msg.setDestinationEntity(61U);
    msg.value = 0.981121594224;

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
    msg.setTimeStamp(0.338673338985);
    msg.setSource(50481U);
    msg.setSourceEntity(75U);
    msg.setDestination(2069U);
    msg.setDestinationEntity(113U);
    msg.value.assign("RLVQCRMZEYNVETTLZBXDZPVMUHBFOKWYBONIGYXODPDKUEMHPGEZIAJHVGLIDTVMKXSXMXWKRXHZLXGANLKSSUCGZCOUS");

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
    msg.setTimeStamp(0.715913796383);
    msg.setSource(5602U);
    msg.setSourceEntity(146U);
    msg.setDestination(31501U);
    msg.setDestinationEntity(68U);
    msg.value.assign("SVYMGAFPKZZKCQRJNZZYWSHLTCGRFUMJGMESRPLEWMOIWDURHQVIAPXJPIDKKSHLYSCWOCCNWVBPUCLLNHGBOOWNXOHTVIXZZGQVAYPFCJD");

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
    msg.setTimeStamp(0.793989164614);
    msg.setSource(54652U);
    msg.setSourceEntity(12U);
    msg.setDestination(60193U);
    msg.setDestinationEntity(251U);
    msg.value.assign("QKAHSEIOIAZIGZDTHCQFSDMRMNNFTWJPQEIJGPEBYYLUSGLOYODUFBWQVXUNCEJXPQHZDMAVFRHQVKYJLMVCHXGXXEFAWFVKIMLDGMYYWIXPYDLOQIAUAFSWWBKEQSMPROGKHARQUNHHLAOZODBUEJNOEZKBDFHWHEUIRMCBFXYUJLWJPFVBDTNRMNGTJLYUKIZZJAWNGUXVPXTBYSKSMRKCAZCBOZZBXIPECTDTNRWOVSCLJCQTKRGPLVSRV");

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
    msg.setTimeStamp(0.907658852364);
    msg.setSource(28789U);
    msg.setSourceEntity(3U);
    msg.setDestination(8707U);
    msg.setDestinationEntity(131U);
    const char tmp_msg_0[] = {16, 62, 56, 90, 105, -41, 41, 18, -62, -24, 23, 90, 52, 59, -81, -76, 8, 10, -90, 25, 79, 86, -55, -82, -29, 77, -119, 40, 113, 4, -35};
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
    msg.setTimeStamp(0.0851542002018);
    msg.setSource(35377U);
    msg.setSourceEntity(4U);
    msg.setDestination(22950U);
    msg.setDestinationEntity(135U);
    const char tmp_msg_0[] = {72, -38, -13, 24, -40, 111, -114, 66, -61, -78, 21, 40, 9, 84, -14, 23, 36, 121, -13, 2, 58, 18, -27, -24, 54, 45, -90, -29, -92, -89, 67, -107, -124, -67, 14, 87, -118, -94, 57, 80, 107, 69, -42, -65, -106, -4, 103, -99, 71, -125, 89, -13, 97, -2, -53, 112, 55, -28, -106, 12, -89, 17, 92, -87, -24, 25, -82, 80, 110, 71, -31, -111, 83, 113, -128, 96, -72, 76, -45, -36, 122, 103, -125, 28, -82, 95, -5, 124, 104, -36, -31, 21, 115, 59, -78, 86, 35, -1, 46, 123, 112, 103, 93, -93, 121, 31, -71, -92, -21, 33, 63, -107, 3, -101, 118, 103, 7, 40, -27, -92, 90, -4, 31, 29, -93, 46, 117, -26, -111, -3, 32, -18, -108, -71, 30, 15, -78, 99, -29, -100, 123, 126, -26, 1, 66, 62, -88, 13, -112, -25, 11, -59, 54, 108, -12, -30, -34, -44, -68, -119, 81, 117, 124, 15, 79, -18, -75, 106, 98, -58, 26, -103, 53, -69, -44, -5, 28, -69, -60, -42, -11, -40, 102, -74, 102, -25, -31, 44, 120, 101, -122, 54, 65, -77, -53};
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
    msg.setTimeStamp(0.308935913818);
    msg.setSource(17721U);
    msg.setSourceEntity(213U);
    msg.setDestination(57965U);
    msg.setDestinationEntity(150U);
    const char tmp_msg_0[] = {-104, 59, 49, 63, 93, 92, 40, -60, -72, 79, 65, -32, 35, -14, 101, -107, 67, -85, 74, -82, -69, -94, -16, 29, 115, 58, 0, -98, -117, -49, -46, 66, 108, 2, -11, 61, 94, -34, -10, 106, 49, 49, 54, 59, 13, 68, 106, 77, -82, -57, -118, 126, 75, 125, 123, -68, -33, 77, 56, 92, -33, 119, -23, 48, 97, -117, -92, 8, -24, 17, -77, 43, -2, -71, -64, -36, 121, 36, -94, -50, 82, 98, 35, 124, -99, -87, -1, -126, -19, 80, -113, 78, 12, -3, -83, 71, -9, 114};
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
    msg.setTimeStamp(0.347963779296);
    msg.setSource(54929U);
    msg.setSourceEntity(211U);
    msg.setDestination(64374U);
    msg.setDestinationEntity(64U);
    msg.type = 244U;
    msg.frequency = 2619822416U;
    msg.min_range = 2360U;
    msg.max_range = 35154U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.240343965675;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.78909783601;
    tmp_msg_0.beam_height = 0.693960503918;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-24, 21, -113, 51, -9, -64, 51, 36, -71, -13, 91, -22, -82, -26, -96, -74, 14, 16, 114, 35, -103, 45, -110, -12, -106, -128, -80, 112, -73, 4, 46, 97, 24, 86, 34, -81, -98, 85, 124, 67, 55, 63, -37, -72, -51, 102, 69, 81, -89, -32};
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
    msg.setTimeStamp(0.725116156797);
    msg.setSource(42684U);
    msg.setSourceEntity(87U);
    msg.setDestination(63146U);
    msg.setDestinationEntity(106U);
    msg.type = 128U;
    msg.frequency = 2461008432U;
    msg.min_range = 22333U;
    msg.max_range = 47692U;
    msg.bits_per_point = 248U;
    msg.scale_factor = 0.0897769368777;
    const char tmp_msg_0[] = {-79, 32, 123, 4, -102, 80, 25, -36, -104, 24, 87, -29, 45, 2, -39, 17, 92, -17, -73, -62, 15, 19, 36, 65, -111, 35, -84, 47, -75, 95, 27, 36, 7, -67, 94, -25, 126, -108, -26, 72, -75, 59, -100, 10, 33, 3, 28, 2, 79, 104, 0, 72, -43, -53, -87, -28, -79, -31, 68, 114, 120, -43, 16, -18, -5, 10, -82, -18, -125, -80, 23, -117, 96, 78, 20, -21, -99, 122, 7, -87, 22, 100, -6, -43, 29, 80, 71, -71, -63, 64, -121, 61, -34, -118, -38, 85, 0};
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
    msg.setTimeStamp(0.756045835035);
    msg.setSource(60085U);
    msg.setSourceEntity(21U);
    msg.setDestination(46388U);
    msg.setDestinationEntity(93U);
    msg.type = 162U;
    msg.frequency = 1813352175U;
    msg.min_range = 15736U;
    msg.max_range = 38981U;
    msg.bits_per_point = 49U;
    msg.scale_factor = 0.0581122387551;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.187505035319;
    tmp_msg_0.beam_height = 0.871269504491;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-76, 101, -62, -69, -16, -49, 45, -35, 120, 113, 125, 32, 77, -78, 48, 39, -8, 55, -23, -25, -4, -10, 117, -76, -11, -7, -23, -111, 73, 68, -51, -28, 17, 58, 89, 87, 3, 40, 47, -128, -106, -108, 103, 62, 20, -67, -5, 68, 11, -2, 99, -38, 104, 122, 99, -54, 111, -52, 44, 74, 106, 122, 80, 91, 24, -86, 96, 60, -37, 92, -68, 100, -39, -81, 58, 108, 44, 67, 114, 45, 80, 77, -101, -22, 24, 45, -80, 16, 96, -64, -21, 113, -105, 115, -47, 40, 18, 11, -109, -114, -78, -74, -104, -69, 13, 112, 51, -59, 71, -30, 37, 28, -49, 117, 112, -90, 67, -17, -1, -29, -48, 101, 65, -77, -114, 62, 108, -90, 47, 3, -82, 31, 82, 34, 17, -7, -43, 114, -35, -17, 108, -108, -41, -60, 99, -95, -107, -45, 7, -52, -102, -46, -60, 13, -109, 59, -125, 103, 94, 65, 31, 99, 86, -66, -34, -120, 78, -70, 97, -33, -71, 38, -28, 67, -35, -11, -126, 107, 46, -105, -86, -83, 0, 33, 13, -67, -126, -9, 42, 124, 62, -44, -62, 49, -100, 100, 3, 57, 56, 86, -3, 97, -43, 15, -40, -87, -107, 34, -46};
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
    msg.setTimeStamp(0.110482609435);
    msg.setSource(1752U);
    msg.setSourceEntity(181U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.794486180074);
    msg.setSource(9724U);
    msg.setSourceEntity(216U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.881464401704);
    msg.setSource(5181U);
    msg.setSourceEntity(112U);
    msg.setDestination(1856U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.281321891076);
    msg.setSource(45675U);
    msg.setSourceEntity(4U);
    msg.setDestination(32611U);
    msg.setDestinationEntity(45U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.048617014988);
    msg.setSource(63576U);
    msg.setSourceEntity(244U);
    msg.setDestination(30324U);
    msg.setDestinationEntity(200U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.406589622643);
    msg.setSource(48641U);
    msg.setSourceEntity(244U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(159U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.507486510213);
    msg.setSource(22440U);
    msg.setSourceEntity(95U);
    msg.setDestination(65360U);
    msg.setDestinationEntity(182U);
    msg.value = 0.787665782454;
    msg.confidence = 0.366063231068;
    msg.opmodes.assign("ZATXPGHALUWIPKMOYNHOVNHJGGVSVM");

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
    msg.setTimeStamp(0.0921114745242);
    msg.setSource(50854U);
    msg.setSourceEntity(237U);
    msg.setDestination(7107U);
    msg.setDestinationEntity(167U);
    msg.value = 0.166937497413;
    msg.confidence = 0.131442294373;
    msg.opmodes.assign("DACPINVFATUCOFLAETWBBYMBOXZJJFHWGDYMRBEXKYFKKOUWFUEKXDVLVGZGPNTKQMKOQGLPQHFCVQSZQMKSJOMAYBMNTMTYZNMNJBXQWSRDCLESUULYWZZHLIPOAXIIXNKYRCPJSCQDZIXBEHOGQPVGHFUHGUXDIVTTLALRIVRELUMDRUNQXENFAQKVYARSWEDFGFWVXYTILOTMAAOWYJZJEPTGJVBHKRSDPNSZOHIHRSG");

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
    msg.setTimeStamp(0.941452922243);
    msg.setSource(83U);
    msg.setSourceEntity(160U);
    msg.setDestination(64871U);
    msg.setDestinationEntity(142U);
    msg.value = 0.547651672926;
    msg.confidence = 0.716889749024;
    msg.opmodes.assign("CMHUEZYBJZGJWLARGWDEOJSDXXPTNHWQSKMHCELQPVREFMJAVCFPXGBGFAMPZSHSOCRNBYJESLWNHYIWHDYGDWRGQVMSYXPBYXKATBIBJMOIEBBTPMTBSORVHNMCKRUGWUWHNQCIABNMKZAPATITYQILWNVKKULHQDAPJCCUXKIQAUXJFFQTQXWUVEAVKFVXVREZYXIHURPORVJQOMOYONILNCOFSEZJRZUDGOFDGNLL");

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
    msg.setTimeStamp(0.276493266918);
    msg.setSource(29932U);
    msg.setSourceEntity(172U);
    msg.setDestination(4907U);
    msg.setDestinationEntity(86U);
    msg.itow = 3659245980U;
    msg.lat = 0.336092354782;
    msg.lon = 0.729115258922;
    msg.height_ell = 0.650787762756;
    msg.height_sea = 0.811356729743;
    msg.hacc = 0.686358279885;
    msg.vacc = 0.911058691713;
    msg.vel_n = 0.649436897183;
    msg.vel_e = 0.929417461109;
    msg.vel_d = 0.403081451781;
    msg.speed = 0.894754930274;
    msg.gspeed = 0.0326235105647;
    msg.heading = 0.945214834116;
    msg.sacc = 0.423914645162;
    msg.cacc = 0.307094667442;

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
    msg.setTimeStamp(0.540225639016);
    msg.setSource(20843U);
    msg.setSourceEntity(105U);
    msg.setDestination(46604U);
    msg.setDestinationEntity(99U);
    msg.itow = 2429669168U;
    msg.lat = 0.275506775683;
    msg.lon = 0.828657969636;
    msg.height_ell = 0.482802099026;
    msg.height_sea = 0.588853061735;
    msg.hacc = 0.511763309814;
    msg.vacc = 0.993717280393;
    msg.vel_n = 0.0914000004782;
    msg.vel_e = 0.989863929358;
    msg.vel_d = 0.950859636039;
    msg.speed = 0.353229070819;
    msg.gspeed = 0.0448519589079;
    msg.heading = 0.752644080277;
    msg.sacc = 0.465069697013;
    msg.cacc = 0.20701337856;

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
    msg.setTimeStamp(0.286492241141);
    msg.setSource(18956U);
    msg.setSourceEntity(151U);
    msg.setDestination(11603U);
    msg.setDestinationEntity(5U);
    msg.itow = 799883325U;
    msg.lat = 0.102632140665;
    msg.lon = 0.79741894695;
    msg.height_ell = 0.446315924207;
    msg.height_sea = 0.760298600005;
    msg.hacc = 0.823809569803;
    msg.vacc = 0.8980077996;
    msg.vel_n = 0.784789364728;
    msg.vel_e = 0.127975067972;
    msg.vel_d = 0.198762412968;
    msg.speed = 0.0165259794324;
    msg.gspeed = 0.708721253087;
    msg.heading = 0.235481188364;
    msg.sacc = 0.915738459809;
    msg.cacc = 0.51325445616;

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
    msg.setTimeStamp(0.241177405457);
    msg.setSource(14648U);
    msg.setSourceEntity(48U);
    msg.setDestination(63119U);
    msg.setDestinationEntity(237U);
    msg.id = 23U;
    msg.value = 0.408834334943;

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
    msg.setTimeStamp(0.502118476679);
    msg.setSource(27484U);
    msg.setSourceEntity(222U);
    msg.setDestination(30482U);
    msg.setDestinationEntity(36U);
    msg.id = 136U;
    msg.value = 0.38464271431;

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
    msg.setTimeStamp(0.442250928124);
    msg.setSource(20095U);
    msg.setSourceEntity(92U);
    msg.setDestination(1316U);
    msg.setDestinationEntity(182U);
    msg.id = 236U;
    msg.value = 0.436323274073;

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
    msg.setTimeStamp(0.618024940025);
    msg.setSource(39876U);
    msg.setSourceEntity(97U);
    msg.setDestination(11074U);
    msg.setDestinationEntity(46U);
    msg.x = 0.215700166533;
    msg.y = 0.742263720686;
    msg.z = 0.185642566309;
    msg.phi = 0.674040283533;
    msg.theta = 0.313274975632;
    msg.psi = 0.825299703751;

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
    msg.setTimeStamp(0.207226020761);
    msg.setSource(31601U);
    msg.setSourceEntity(8U);
    msg.setDestination(64255U);
    msg.setDestinationEntity(250U);
    msg.x = 0.206801913441;
    msg.y = 0.166122967011;
    msg.z = 0.375887787659;
    msg.phi = 0.0765501247893;
    msg.theta = 0.21823524886;
    msg.psi = 0.169005989168;

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
    msg.setTimeStamp(0.913747928509);
    msg.setSource(29211U);
    msg.setSourceEntity(172U);
    msg.setDestination(34976U);
    msg.setDestinationEntity(108U);
    msg.x = 0.253871296646;
    msg.y = 0.0541060857123;
    msg.z = 0.0152329186755;
    msg.phi = 0.167304373974;
    msg.theta = 0.107781146488;
    msg.psi = 0.406800185426;

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
    msg.setTimeStamp(0.251377651536);
    msg.setSource(25521U);
    msg.setSourceEntity(201U);
    msg.setDestination(51130U);
    msg.setDestinationEntity(109U);
    msg.beam_width = 0.538655226089;
    msg.beam_height = 0.664798498152;

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
    msg.setTimeStamp(0.507861841882);
    msg.setSource(18638U);
    msg.setSourceEntity(190U);
    msg.setDestination(50005U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.684531544806;
    msg.beam_height = 0.903385402349;

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
    msg.setTimeStamp(0.825036340563);
    msg.setSource(58580U);
    msg.setSourceEntity(202U);
    msg.setDestination(33180U);
    msg.setDestinationEntity(146U);
    msg.beam_width = 0.441207875485;
    msg.beam_height = 0.299323559682;

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
    msg.setTimeStamp(0.57067567156);
    msg.setSource(18122U);
    msg.setSourceEntity(166U);
    msg.setDestination(57421U);
    msg.setDestinationEntity(55U);
    msg.sane = 229U;

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
    msg.setTimeStamp(0.414277150438);
    msg.setSource(23738U);
    msg.setSourceEntity(37U);
    msg.setDestination(65036U);
    msg.setDestinationEntity(128U);
    msg.sane = 165U;

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
    msg.setTimeStamp(0.802137383208);
    msg.setSource(63146U);
    msg.setSourceEntity(114U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(37U);
    msg.sane = 188U;

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
    msg.setTimeStamp(0.0297832168281);
    msg.setSource(27178U);
    msg.setSourceEntity(188U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(117U);
    msg.value = 0.276129238993;

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
    msg.setTimeStamp(0.97032876822);
    msg.setSource(55144U);
    msg.setSourceEntity(107U);
    msg.setDestination(58963U);
    msg.setDestinationEntity(118U);
    msg.value = 0.392357520404;

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
    msg.setTimeStamp(0.15045718499);
    msg.setSource(2988U);
    msg.setSourceEntity(96U);
    msg.setDestination(4176U);
    msg.setDestinationEntity(199U);
    msg.value = 0.94815892226;

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
    msg.setTimeStamp(0.328451024);
    msg.setSource(38435U);
    msg.setSourceEntity(188U);
    msg.setDestination(48230U);
    msg.setDestinationEntity(125U);
    msg.value = 0.866141777561;

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
    msg.setTimeStamp(0.213480593387);
    msg.setSource(14722U);
    msg.setSourceEntity(36U);
    msg.setDestination(32712U);
    msg.setDestinationEntity(138U);
    msg.value = 0.32573614929;

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
    msg.setTimeStamp(0.152976636951);
    msg.setSource(46204U);
    msg.setSourceEntity(80U);
    msg.setDestination(63996U);
    msg.setDestinationEntity(165U);
    msg.value = 0.830257019882;

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
    msg.setTimeStamp(0.507907017093);
    msg.setSource(33174U);
    msg.setSourceEntity(95U);
    msg.setDestination(35532U);
    msg.setDestinationEntity(44U);
    msg.value = 0.111473375817;

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
    msg.setTimeStamp(0.501798352887);
    msg.setSource(36159U);
    msg.setSourceEntity(22U);
    msg.setDestination(5663U);
    msg.setDestinationEntity(158U);
    msg.value = 0.4027698515;

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
    msg.setTimeStamp(0.687826090922);
    msg.setSource(17158U);
    msg.setSourceEntity(60U);
    msg.setDestination(63220U);
    msg.setDestinationEntity(208U);
    msg.value = 0.749444327838;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.28664711361);
    msg.setSource(14848U);
    msg.setSourceEntity(91U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(143U);
    msg.id = 166U;
    msg.zoom = 44U;
    msg.action = 218U;

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
    msg.setTimeStamp(0.145780746203);
    msg.setSource(42260U);
    msg.setSourceEntity(65U);
    msg.setDestination(5951U);
    msg.setDestinationEntity(98U);
    msg.id = 106U;
    msg.zoom = 193U;
    msg.action = 229U;

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
    msg.setTimeStamp(0.659682607138);
    msg.setSource(58331U);
    msg.setSourceEntity(50U);
    msg.setDestination(629U);
    msg.setDestinationEntity(180U);
    msg.id = 176U;
    msg.zoom = 15U;
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
    msg.setTimeStamp(0.914661147804);
    msg.setSource(56610U);
    msg.setSourceEntity(92U);
    msg.setDestination(19683U);
    msg.setDestinationEntity(54U);
    msg.id = 211U;
    msg.value = 0.805911597379;

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
    msg.setTimeStamp(0.358485894838);
    msg.setSource(25917U);
    msg.setSourceEntity(184U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(56U);
    msg.id = 110U;
    msg.value = 0.421930472245;

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
    msg.setTimeStamp(0.364496542443);
    msg.setSource(35847U);
    msg.setSourceEntity(231U);
    msg.setDestination(60051U);
    msg.setDestinationEntity(211U);
    msg.id = 33U;
    msg.value = 0.180055903673;

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
    msg.setTimeStamp(0.0294289574037);
    msg.setSource(32637U);
    msg.setSourceEntity(156U);
    msg.setDestination(41813U);
    msg.setDestinationEntity(65U);
    msg.id = 54U;
    msg.value = 0.0167557174881;

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
    msg.setTimeStamp(0.752106892135);
    msg.setSource(20280U);
    msg.setSourceEntity(49U);
    msg.setDestination(58083U);
    msg.setDestinationEntity(11U);
    msg.id = 59U;
    msg.value = 0.557145773136;

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
    msg.setTimeStamp(0.480161631133);
    msg.setSource(9290U);
    msg.setSourceEntity(187U);
    msg.setDestination(24664U);
    msg.setDestinationEntity(9U);
    msg.id = 250U;
    msg.value = 0.340565716685;

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
    msg.setTimeStamp(0.214528129914);
    msg.setSource(45240U);
    msg.setSourceEntity(35U);
    msg.setDestination(20404U);
    msg.setDestinationEntity(208U);
    msg.id = 196U;
    msg.angle = 0.0202417952867;

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
    msg.setTimeStamp(0.251714300715);
    msg.setSource(41592U);
    msg.setSourceEntity(242U);
    msg.setDestination(15174U);
    msg.setDestinationEntity(184U);
    msg.id = 229U;
    msg.angle = 0.763013153833;

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
    msg.setTimeStamp(0.842840241967);
    msg.setSource(13679U);
    msg.setSourceEntity(18U);
    msg.setDestination(53480U);
    msg.setDestinationEntity(191U);
    msg.id = 52U;
    msg.angle = 0.211948005587;

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
    msg.setTimeStamp(0.690393680274);
    msg.setSource(18583U);
    msg.setSourceEntity(212U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(150U);
    msg.op = 248U;
    msg.actions.assign("AOWQNHTQKRPHTJYXCMYDBHBDHLUTICSDEWGPSLNPIGXJRMXALESXAVITKVDNUJZBDSYWUBVJYXVTVNIWEXLOCCARKNMYBFUVISPKSDSBWSNNPOOFBRGMQXEUIROCUHMMACNLIZWLMZFZJODUXKJFQRBCMNQLRQPPPQAGWOHETGGBRZKZTYDIRZFWZQAKCDJLCFPMGWZVAEJUXQYILKVEXH");

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
    msg.setTimeStamp(0.850174357973);
    msg.setSource(56642U);
    msg.setSourceEntity(223U);
    msg.setDestination(46374U);
    msg.setDestinationEntity(47U);
    msg.op = 118U;
    msg.actions.assign("VHKIOEPDZXIOJYMVHFEPEUXQMIOMIFFCSUWLWXATDTPSPWVNSFSMTVTDNJHSDGCXQZEOLLATMFROLMEYOKQJGQHYZILBLKRFTMSWAAGZGYADAPTMRUJOVGEIEHNVBAFWPCVLKTBWLJJSWZJAUBRKVZWZHXXP");

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
    msg.setTimeStamp(0.0465975892172);
    msg.setSource(20982U);
    msg.setSourceEntity(218U);
    msg.setDestination(60894U);
    msg.setDestinationEntity(190U);
    msg.op = 178U;
    msg.actions.assign("PZDPULNVEVLXQJISESAUGUQMCMGNUQAWFOJLDZEGOEVLLOFVCJFPCZRSWHYKHFIDKFVSSHXDLJPFIATRKQQTMMSWYTDJWYOTCIUHNMPWQBVTIAINNPZDHMXYUCTHBAKYYSFGDBZMGDQORTMSCXLNAKAQGGONKWHWAJXUAYEBW");

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
    msg.setTimeStamp(0.14731267853);
    msg.setSource(45646U);
    msg.setSourceEntity(241U);
    msg.setDestination(15921U);
    msg.setDestinationEntity(49U);
    msg.actions.assign("POFGLEAKJGTNVHOJRNPWQKRBXIWEZUIUMIXYVJGSDHHAWSLNDZSXLLPHJMJFDHECX");

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
    msg.setTimeStamp(0.809898302168);
    msg.setSource(14180U);
    msg.setSourceEntity(91U);
    msg.setDestination(35620U);
    msg.setDestinationEntity(144U);
    msg.actions.assign("LWKGXOMYVGYKYABGAKLBMDVXAGTWKPSPDEECTUAZTYOXAFFDBCORYXKIVPHONQATBMSWPBFJQMGHVEKDBBRLFIGCHOUPEFLSNXHZLNRPJ");

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
    msg.setTimeStamp(0.533794847451);
    msg.setSource(40290U);
    msg.setSourceEntity(102U);
    msg.setDestination(53528U);
    msg.setDestinationEntity(221U);
    msg.actions.assign("ERZWKDDMYTEWBZXSLSJYHGPKBUBHTFGGBRIQCRCRUSEUZRTGAUQHIOTASMOUFIXOBJDGBFLTOGCCXYJKVIBPSEHIQTHEJLQRMFCQRJLMJLXENLPBFPHSNKYTZAXJYVMGIVOWTIOADUBUILPUZDNSUEPYCTQDXKPHRGZSQDXNWEMOHVKVNAKRHNKLWXAQUVCVHNWFPOAEASFCOXFGYVGAYVDEZAQ");

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
    msg.setTimeStamp(0.972199154429);
    msg.setSource(22539U);
    msg.setSourceEntity(16U);
    msg.setDestination(12257U);
    msg.setDestinationEntity(116U);
    msg.button = 151U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.486295333523);
    msg.setSource(62654U);
    msg.setSourceEntity(2U);
    msg.setDestination(37526U);
    msg.setDestinationEntity(76U);
    msg.button = 185U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.573898991817);
    msg.setSource(8805U);
    msg.setSourceEntity(104U);
    msg.setDestination(10333U);
    msg.setDestinationEntity(95U);
    msg.button = 174U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.140442550094);
    msg.setSource(13650U);
    msg.setSourceEntity(233U);
    msg.setDestination(42466U);
    msg.setDestinationEntity(156U);
    msg.op = 123U;
    msg.text.assign("WOBZNROFVPCMSDAHGLCYPJWBRWOQUFGMZKRXLUSBYHJLIIITTZDVIISCDHDTTEDKUMK");

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
    msg.setTimeStamp(0.571333637736);
    msg.setSource(2729U);
    msg.setSourceEntity(76U);
    msg.setDestination(30611U);
    msg.setDestinationEntity(4U);
    msg.op = 120U;
    msg.text.assign("PWFZAPVCANPIOSGPPRXQZKVOTZHSDYXYAICJDATTNRORCIYAHMEGWTKQKXHDXLLYNSGXVOWEGEOQMCLQEJCBIBFMBRFLWHCBRWIZUVDALOOFWRYFQVIFMPAVXISKWBQKRUAFNLGZISNN");

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
    msg.setTimeStamp(0.382633023399);
    msg.setSource(21126U);
    msg.setSourceEntity(35U);
    msg.setDestination(10956U);
    msg.setDestinationEntity(163U);
    msg.op = 242U;
    msg.text.assign("PIISXIJMDCGWWYILPUWQMAQONQSZIKBACVKRMDMZVKFYAPXPMRYSSNCYEMAUCWUAAJNHSFBBTBHUCLGUFXTGGHVCVDJQPEJFPAWBAFZIYOTPTONCQLHFRSRZROBIPLTLDKYDYKXDHOTWZYCRCJZNXOGPNGDXSVUVZZHRPBVCLEVMYUJTKXHENLGBSZIRIAJKLXKEOMNHRV");

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
    msg.setTimeStamp(0.0838469804524);
    msg.setSource(48683U);
    msg.setSourceEntity(181U);
    msg.setDestination(47679U);
    msg.setDestinationEntity(135U);
    msg.op = 210U;
    msg.time_remain = 0.486690419674;
    msg.sched_time = 0.278483776647;

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
    msg.setTimeStamp(0.214315954646);
    msg.setSource(35375U);
    msg.setSourceEntity(167U);
    msg.setDestination(48035U);
    msg.setDestinationEntity(209U);
    msg.op = 28U;
    msg.time_remain = 0.436133822636;
    msg.sched_time = 0.319994508196;

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
    msg.setTimeStamp(0.599214231004);
    msg.setSource(2234U);
    msg.setSourceEntity(203U);
    msg.setDestination(43719U);
    msg.setDestinationEntity(168U);
    msg.op = 220U;
    msg.time_remain = 0.646719288782;
    msg.sched_time = 0.075514136526;

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
    msg.setTimeStamp(0.836405154241);
    msg.setSource(53231U);
    msg.setSourceEntity(211U);
    msg.setDestination(39681U);
    msg.setDestinationEntity(190U);
    msg.name.assign("PTLAXXMRHJEYCEZOMJNOIOYFTSKFLUCYUTPQGFIJLIJRRTTTNMBHMZQYRYQKISGVNNFWMMNBDXZELAGUFFGATOSBCOUZXVXULWPBLCMDCQVRJTVENQPOHLPWOWIHSXYZJDKHUIPXVYGSDBZKDFHXEVDJRXKJNEHUAMSTKZLSFPIQQVIHVOLATCNGGEKALPPKIPAGNDCKAYQBUCSBJGRQVAEBGUXCUWFHHSJFBDYWRDOSWBW");
    msg.op = 74U;
    msg.sched_time = 0.942603143381;

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
    msg.setTimeStamp(0.738299211572);
    msg.setSource(47342U);
    msg.setSourceEntity(132U);
    msg.setDestination(25651U);
    msg.setDestinationEntity(70U);
    msg.name.assign("QPFYAHGQLZBOUXBRLKOSATDPNSXJYVZCLULFSDZYRXQCEGCAHJCQONXGRVVCPCTJSDDZZKQBAENBPOAFEESUWTLWERTXJTPINHJOQUQVTGSOEVLUPIDBMMKBSUPAOXIIXHTRNAMSSDGWNZJLVKHJHWVXYQYINUWXQHWUFDYMVPGIZR");
    msg.op = 121U;
    msg.sched_time = 0.233876381296;

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
    msg.setTimeStamp(0.934396908938);
    msg.setSource(18056U);
    msg.setSourceEntity(119U);
    msg.setDestination(11951U);
    msg.setDestinationEntity(163U);
    msg.name.assign("PYOKBUHXTYVRFGKAQSKGGFWURSUQBMURNCDZEKENSMHEMPADPLOHRIQNRWNXXTMGHDIZZWDBUSAWQRPVDOJBUDLWHCYBLVZSMMKZTJCYNCAERRMLECLUJIKVXZZ");
    msg.op = 199U;
    msg.sched_time = 0.355528958547;

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
    msg.setTimeStamp(0.32523461136);
    msg.setSource(49187U);
    msg.setSourceEntity(33U);
    msg.setDestination(46358U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.857082409148);
    msg.setSource(31524U);
    msg.setSourceEntity(32U);
    msg.setDestination(12028U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.265987539308);
    msg.setSource(23141U);
    msg.setSourceEntity(240U);
    msg.setDestination(48305U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.000491672034002);
    msg.setSource(59924U);
    msg.setSourceEntity(181U);
    msg.setDestination(25078U);
    msg.setDestinationEntity(157U);
    msg.name.assign("TNDANZAYJOWAKLFLPMAEEQOLPXYFXYNDEONBCW");
    msg.state = 154U;

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
    msg.setTimeStamp(0.33522867711);
    msg.setSource(25000U);
    msg.setSourceEntity(206U);
    msg.setDestination(46765U);
    msg.setDestinationEntity(76U);
    msg.name.assign("INLKPZUOGVTJCLSAVGXFPZDWTHCKAYALEQWNNPGMFKCLZTHTDFYFUIOIWKUUOSQMSBOAOFWQICCTUTRYVWGQZXSLTJUMASVYKZDMUWNFJOXQLZF");
    msg.state = 54U;

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
    msg.setTimeStamp(0.253629086931);
    msg.setSource(49906U);
    msg.setSourceEntity(49U);
    msg.setDestination(32137U);
    msg.setDestinationEntity(171U);
    msg.name.assign("AQQKHXLXJEABUXUHCXZVNICJYDEKLZFCMRPUUJCGDETWJYOAQYPNYEYMDUGUPCVMBVDSBNGQTIJZLUCBYKWNBRGXETHRWHXOFMQEEFPAKFBPKHFTWRAPQDJVXBHICMFNIFEGGWOVMUSNIBMUNHRWVMTRLIO");
    msg.state = 122U;

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
    msg.setTimeStamp(0.271557518456);
    msg.setSource(1610U);
    msg.setSourceEntity(105U);
    msg.setDestination(8565U);
    msg.setDestinationEntity(201U);
    msg.name.assign("XSVNTBXAKTDBOXEYZJTFUQCWURJKHXHNGNWWYQLDHJASCLWWTAOBCZPFQVHFAUGHLIQZEDKXILGOSZXRIMKREFIMEVBPXJURCHBUCXTEQRBLJIMEEQPCYVYQVRRDZBEDZ");
    msg.value = 21U;

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
    msg.setTimeStamp(0.549497844743);
    msg.setSource(25463U);
    msg.setSourceEntity(82U);
    msg.setDestination(77U);
    msg.setDestinationEntity(14U);
    msg.name.assign("OZWMPTWVLWMCLBWFNXDBHLKGRSNLOEHIZBTQKFZAGXVICETZGUPPAUELLGYRMJPNRJQFQCNCWXMJZVEWBTWOFCOYPTLBYXUQGFAXNVQJLYUOAOHSNVQKDYWOSMAOVKRHHYSDISZRZZJMVDT");
    msg.value = 195U;

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
    msg.setTimeStamp(0.974817810372);
    msg.setSource(48911U);
    msg.setSourceEntity(88U);
    msg.setDestination(61491U);
    msg.setDestinationEntity(233U);
    msg.name.assign("XPMAWHOGWSQGASFIONCQNOMPTFXJRKISIRDTUGFKLHEESDRSDALVKAIMUBPWETIEPYKGNZQNSJLSTCBZQMDYYDVCMTPORHRXPEXQDVWBBUNQLAOVTFLGDUIJHRWYJGCPNYSFXVRCKJQZABCLHJKKRLUAXDFBODFVNHAQUTCSLBNRWJHZNKUYLBHPUMJEGXGOXWCYXEYZOMEJYIVIWIVQUUBGCORZTMZYETMMLGKDZPEP");
    msg.value = 80U;

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
    msg.setTimeStamp(0.570317489232);
    msg.setSource(3960U);
    msg.setSourceEntity(239U);
    msg.setDestination(35250U);
    msg.setDestinationEntity(81U);
    msg.name.assign("XBAJKAATGXIPARRLGOQBMUSYGDHSRLXFHGUCMOEVCEMAGURIDB");

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
    msg.setTimeStamp(0.0387419488475);
    msg.setSource(34926U);
    msg.setSourceEntity(87U);
    msg.setDestination(33094U);
    msg.setDestinationEntity(162U);
    msg.name.assign("VVDOYXAVNFKEYEUTUQUVIWWUZJSJMHMQDLWBTSPBYHKUJCJDXFMCJKABKRICPOZXTUZZCDSNXOHPZFWBIUVCRTXZLOTHOJGXDEOBSKQKTUSLMSASHMZDDFMRJPGPRWACHYBRHKIEGVONRNCLWYGQGXMCEKUDBFRBBYXRPOBHOMESFLWWXNMPHAQUNQTGALTIEAWLAZGERFMGQCIDIAZVRNTTFFCSPLD");

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
    msg.setTimeStamp(0.443371845591);
    msg.setSource(7927U);
    msg.setSourceEntity(111U);
    msg.setDestination(9037U);
    msg.setDestinationEntity(121U);
    msg.name.assign("UOKBNAKBYSCZFBDLFJTXECUJNEFDIGVVLYPZSWCPFXQYUXJQKDKOESILLSBKOTMRQVBBSYGDTSIWMMSCHUZTVUPIDCKQKTWBJNEJEWRTZWMMSUPJJIOXVIGHBFOUFRJVPOMNYFPRWKVNWODAYHEFKQTXAWXLXLLJDSUHRGYTHCZYDRIPBRXIHOFQWMGNHPVHGAOB");

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
    msg.setTimeStamp(0.231923756432);
    msg.setSource(59243U);
    msg.setSourceEntity(147U);
    msg.setDestination(51955U);
    msg.setDestinationEntity(189U);
    msg.name.assign("VDSUFCFZKVWPUXRYEKBFNNLPTAVYBKWBUJJOCLRZCNTSXTMIOMQLOHOMEEMGWPNXJDASOZEDRBILGGDNCFEVFWQODFYQYMHJPQRWQRGFSPHBTTNNEAJLEXSBZTIJNDKCIUWRFUQDV");
    msg.value = 115U;

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
    msg.setTimeStamp(0.127839287073);
    msg.setSource(35445U);
    msg.setSourceEntity(246U);
    msg.setDestination(25077U);
    msg.setDestinationEntity(186U);
    msg.name.assign("NEINEBWEDOWSPVUOQLIUTLIAZS");
    msg.value = 175U;

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
    msg.setTimeStamp(0.723013703881);
    msg.setSource(42296U);
    msg.setSourceEntity(215U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(48U);
    msg.name.assign("QVWTLAGCALIIFAGXCWYCIRCZETMDOASPKIUROUKNJFDTKQHIPWUAEDRURXFKKBKCLVMUQRABQZCBJGSXCDYMWPXKFFGQOXTTVXESFXSVFIEAHQDOFDWXQJFJIUIUVXMZUCSEPQOJINVCTJMHRONWWGHPEMSYNVBVJLCYQHNSMRKLMYBTYBBNFALERBLVMLDYYSZPZBHMGGLNZDOZJY");
    msg.value = 174U;

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
    msg.setTimeStamp(0.62945986567);
    msg.setSource(20058U);
    msg.setSourceEntity(147U);
    msg.setDestination(10941U);
    msg.setDestinationEntity(215U);
    msg.id = 159U;
    msg.period = 2731406774U;
    msg.duty_cycle = 1015418676U;

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
    msg.setTimeStamp(0.959036057052);
    msg.setSource(35271U);
    msg.setSourceEntity(13U);
    msg.setDestination(21234U);
    msg.setDestinationEntity(108U);
    msg.id = 200U;
    msg.period = 1716217215U;
    msg.duty_cycle = 403869357U;

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
    msg.setTimeStamp(0.71926948249);
    msg.setSource(55221U);
    msg.setSourceEntity(128U);
    msg.setDestination(24623U);
    msg.setDestinationEntity(125U);
    msg.id = 23U;
    msg.period = 839666471U;
    msg.duty_cycle = 2444703717U;

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
    msg.setTimeStamp(0.695697711734);
    msg.setSource(38150U);
    msg.setSourceEntity(122U);
    msg.setDestination(44499U);
    msg.setDestinationEntity(164U);
    msg.id = 5U;
    msg.period = 2048532263U;
    msg.duty_cycle = 432426796U;

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
    msg.setTimeStamp(0.841949606208);
    msg.setSource(55088U);
    msg.setSourceEntity(163U);
    msg.setDestination(31779U);
    msg.setDestinationEntity(152U);
    msg.id = 30U;
    msg.period = 289827052U;
    msg.duty_cycle = 3443196195U;

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
    msg.setTimeStamp(0.51122050672);
    msg.setSource(64204U);
    msg.setSourceEntity(176U);
    msg.setDestination(18418U);
    msg.setDestinationEntity(92U);
    msg.id = 76U;
    msg.period = 364685335U;
    msg.duty_cycle = 679117396U;

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
    msg.setTimeStamp(0.013116841125);
    msg.setSource(31966U);
    msg.setSourceEntity(169U);
    msg.setDestination(60854U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.865946273711;
    msg.lon = 0.884698542913;
    msg.height = 0.0905794097102;
    msg.x = 0.692136175439;
    msg.y = 0.8418014067;
    msg.z = 0.319632351534;
    msg.phi = 0.894532306384;
    msg.theta = 0.336247402918;
    msg.psi = 0.684645088035;
    msg.u = 0.520846382061;
    msg.v = 0.171945209738;
    msg.w = 0.648090317782;
    msg.vx = 0.286023281915;
    msg.vy = 0.279323913893;
    msg.vz = 0.213790346423;
    msg.p = 0.304106808066;
    msg.q = 0.82233693469;
    msg.r = 0.991182892055;
    msg.depth = 0.79804977206;
    msg.alt = 0.740800985303;

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
    msg.setTimeStamp(0.285731802539);
    msg.setSource(63330U);
    msg.setSourceEntity(16U);
    msg.setDestination(21931U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.313671496869;
    msg.lon = 0.308174328923;
    msg.height = 0.749770575709;
    msg.x = 0.24827468455;
    msg.y = 0.559353112521;
    msg.z = 0.23283267966;
    msg.phi = 0.732445662462;
    msg.theta = 0.287723082556;
    msg.psi = 0.573693345771;
    msg.u = 0.633432243904;
    msg.v = 0.639166763205;
    msg.w = 0.93270896474;
    msg.vx = 0.523871503309;
    msg.vy = 0.319166272131;
    msg.vz = 0.412646117984;
    msg.p = 0.523213565792;
    msg.q = 0.404007412413;
    msg.r = 0.903032496768;
    msg.depth = 0.16551866063;
    msg.alt = 0.0766725668986;

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
    msg.setTimeStamp(0.388096464668);
    msg.setSource(55168U);
    msg.setSourceEntity(74U);
    msg.setDestination(1851U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.354298574641;
    msg.lon = 0.715686026142;
    msg.height = 0.0716371821079;
    msg.x = 0.491267017534;
    msg.y = 0.0171190101619;
    msg.z = 0.338435991632;
    msg.phi = 0.720962591311;
    msg.theta = 0.754766075953;
    msg.psi = 0.613212618473;
    msg.u = 0.76150142967;
    msg.v = 0.0830025502555;
    msg.w = 0.65171571383;
    msg.vx = 0.242115161298;
    msg.vy = 0.750020996082;
    msg.vz = 0.686136856192;
    msg.p = 0.989367569775;
    msg.q = 0.890861957639;
    msg.r = 0.49309459709;
    msg.depth = 0.0121439460236;
    msg.alt = 0.0988858838768;

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
    msg.setTimeStamp(0.243476292791);
    msg.setSource(21526U);
    msg.setSourceEntity(111U);
    msg.setDestination(11361U);
    msg.setDestinationEntity(34U);
    msg.x = 0.347587085066;
    msg.y = 0.728129111468;
    msg.z = 0.940627331301;

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
    msg.setTimeStamp(0.068466306261);
    msg.setSource(52415U);
    msg.setSourceEntity(234U);
    msg.setDestination(18590U);
    msg.setDestinationEntity(79U);
    msg.x = 0.499816915811;
    msg.y = 0.501627169291;
    msg.z = 0.364204614973;

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
    msg.setTimeStamp(0.391201958666);
    msg.setSource(61295U);
    msg.setSourceEntity(26U);
    msg.setDestination(56526U);
    msg.setDestinationEntity(76U);
    msg.x = 0.610438695203;
    msg.y = 0.507402331827;
    msg.z = 0.815829514424;

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
    msg.setTimeStamp(0.821829060905);
    msg.setSource(19476U);
    msg.setSourceEntity(100U);
    msg.setDestination(59004U);
    msg.setDestinationEntity(159U);
    msg.value = 0.889607897992;

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
    msg.setTimeStamp(0.45840845874);
    msg.setSource(41794U);
    msg.setSourceEntity(168U);
    msg.setDestination(9446U);
    msg.setDestinationEntity(198U);
    msg.value = 0.670376716687;

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
    msg.setTimeStamp(0.376506621093);
    msg.setSource(30999U);
    msg.setSourceEntity(2U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(72U);
    msg.value = 0.688693982079;

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
    msg.setTimeStamp(0.368270951458);
    msg.setSource(4061U);
    msg.setSourceEntity(81U);
    msg.setDestination(41958U);
    msg.setDestinationEntity(252U);
    msg.value = 0.231449944667;

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
    msg.setTimeStamp(0.713982297502);
    msg.setSource(10540U);
    msg.setSourceEntity(34U);
    msg.setDestination(18932U);
    msg.setDestinationEntity(100U);
    msg.value = 0.984094183232;

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
    msg.setTimeStamp(0.416906642253);
    msg.setSource(16237U);
    msg.setSourceEntity(233U);
    msg.setDestination(2604U);
    msg.setDestinationEntity(81U);
    msg.value = 0.707506747311;

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
    msg.setTimeStamp(0.384657648219);
    msg.setSource(44069U);
    msg.setSourceEntity(114U);
    msg.setDestination(11873U);
    msg.setDestinationEntity(227U);
    msg.x = 0.963961003257;
    msg.y = 0.979937708968;
    msg.z = 0.521729332167;
    msg.phi = 0.395694952811;
    msg.theta = 0.609936394736;
    msg.psi = 0.96934062118;
    msg.p = 0.0197066651751;
    msg.q = 0.432839660805;
    msg.r = 0.0831672623755;
    msg.u = 0.698555050117;
    msg.v = 0.000240431403683;
    msg.w = 0.994981425353;
    msg.bias_psi = 0.877924528373;
    msg.bias_r = 0.755495408887;

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
    msg.setTimeStamp(0.720528433691);
    msg.setSource(64922U);
    msg.setSourceEntity(38U);
    msg.setDestination(16751U);
    msg.setDestinationEntity(26U);
    msg.x = 0.556818602865;
    msg.y = 0.636072547886;
    msg.z = 0.272228164339;
    msg.phi = 0.910991176446;
    msg.theta = 0.260021066443;
    msg.psi = 0.799773118777;
    msg.p = 0.00126700322128;
    msg.q = 0.0164488425585;
    msg.r = 0.893189453744;
    msg.u = 0.489854088102;
    msg.v = 0.101130894381;
    msg.w = 0.823020909552;
    msg.bias_psi = 0.898475699366;
    msg.bias_r = 0.58016178042;

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
    msg.setTimeStamp(0.434270749469);
    msg.setSource(17410U);
    msg.setSourceEntity(61U);
    msg.setDestination(24571U);
    msg.setDestinationEntity(182U);
    msg.x = 0.206383196031;
    msg.y = 0.948664199493;
    msg.z = 0.535827363758;
    msg.phi = 0.329122343311;
    msg.theta = 0.745180331565;
    msg.psi = 0.961985006334;
    msg.p = 0.639129874655;
    msg.q = 0.516896465431;
    msg.r = 0.393923045139;
    msg.u = 0.578055141563;
    msg.v = 0.838537396513;
    msg.w = 0.0497647721664;
    msg.bias_psi = 0.686419111257;
    msg.bias_r = 0.636709167954;

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
    msg.setTimeStamp(0.580889100292);
    msg.setSource(37128U);
    msg.setSourceEntity(221U);
    msg.setDestination(16135U);
    msg.setDestinationEntity(120U);
    msg.bias_psi = 0.350681256829;
    msg.bias_r = 0.310148673649;
    msg.cog = 0.196313001537;
    msg.cyaw = 0.913347223422;
    msg.lbl_rej_level = 0.511404334583;
    msg.gps_rej_level = 0.774988138944;
    msg.custom_x = 0.524223377013;
    msg.custom_y = 0.563776893531;
    msg.custom_z = 0.32542720819;

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
    msg.setTimeStamp(0.968752777024);
    msg.setSource(10623U);
    msg.setSourceEntity(134U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(185U);
    msg.bias_psi = 0.092582852449;
    msg.bias_r = 0.715419141149;
    msg.cog = 0.906697843662;
    msg.cyaw = 0.413818218026;
    msg.lbl_rej_level = 0.364213629933;
    msg.gps_rej_level = 0.886580363255;
    msg.custom_x = 0.811182894592;
    msg.custom_y = 0.877572879156;
    msg.custom_z = 0.720662001587;

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
    msg.setTimeStamp(0.22221450807);
    msg.setSource(58392U);
    msg.setSourceEntity(160U);
    msg.setDestination(20804U);
    msg.setDestinationEntity(194U);
    msg.bias_psi = 0.46580509966;
    msg.bias_r = 0.704848907512;
    msg.cog = 0.811702307353;
    msg.cyaw = 0.810705623951;
    msg.lbl_rej_level = 0.450820482633;
    msg.gps_rej_level = 0.240423274766;
    msg.custom_x = 0.508524912218;
    msg.custom_y = 0.153544502145;
    msg.custom_z = 0.868697005569;

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
    msg.setTimeStamp(0.931777507877);
    msg.setSource(27427U);
    msg.setSourceEntity(114U);
    msg.setDestination(60584U);
    msg.setDestinationEntity(240U);
    msg.utc_time = 0.100325495793;
    msg.reason = 54U;

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
    msg.setTimeStamp(0.262235836714);
    msg.setSource(736U);
    msg.setSourceEntity(231U);
    msg.setDestination(5790U);
    msg.setDestinationEntity(88U);
    msg.utc_time = 0.567553491982;
    msg.reason = 127U;

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
    msg.setTimeStamp(0.796916819128);
    msg.setSource(49514U);
    msg.setSourceEntity(128U);
    msg.setDestination(47509U);
    msg.setDestinationEntity(4U);
    msg.utc_time = 0.881596110784;
    msg.reason = 137U;

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
    msg.setTimeStamp(0.874496742634);
    msg.setSource(57180U);
    msg.setSourceEntity(3U);
    msg.setDestination(31443U);
    msg.setDestinationEntity(232U);
    msg.id = 211U;
    msg.range = 0.481380602606;
    msg.acceptance = 153U;

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
    msg.setTimeStamp(0.882966520127);
    msg.setSource(7942U);
    msg.setSourceEntity(99U);
    msg.setDestination(37016U);
    msg.setDestinationEntity(216U);
    msg.id = 13U;
    msg.range = 0.228203995734;
    msg.acceptance = 207U;

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
    msg.setTimeStamp(0.671273950645);
    msg.setSource(62156U);
    msg.setSourceEntity(144U);
    msg.setDestination(55815U);
    msg.setDestinationEntity(11U);
    msg.id = 37U;
    msg.range = 0.535362055802;
    msg.acceptance = 101U;

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
    msg.setTimeStamp(0.710458215483);
    msg.setSource(48912U);
    msg.setSourceEntity(103U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(8U);
    msg.type = 41U;
    msg.reason = 48U;
    msg.value = 0.978645325328;
    msg.timestep = 0.441598649595;

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
    msg.setTimeStamp(0.817816933198);
    msg.setSource(40103U);
    msg.setSourceEntity(240U);
    msg.setDestination(65135U);
    msg.setDestinationEntity(78U);
    msg.type = 167U;
    msg.reason = 58U;
    msg.value = 0.532361139198;
    msg.timestep = 0.625054674866;

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
    msg.setTimeStamp(0.947439910603);
    msg.setSource(53339U);
    msg.setSourceEntity(239U);
    msg.setDestination(49878U);
    msg.setDestinationEntity(113U);
    msg.type = 109U;
    msg.reason = 163U;
    msg.value = 0.430912360381;
    msg.timestep = 0.633595613484;

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
    msg.setTimeStamp(0.52977471546);
    msg.setSource(14814U);
    msg.setSourceEntity(199U);
    msg.setDestination(9702U);
    msg.setDestinationEntity(108U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GCDCTZBKSUYLTKUNBJYSDGJIMPGTTVWHTFOBHZQRXIAPUNENFBQKLEMWNXVECAUQJKIJYWWTHXHIDMRXYUNCCBXSSOLRWERUVQYTAROAQRBWOZOQERVLHPMSGEFDYRSBIOLLHPDQLIUPVMTZCZQWQGAKGUTJBJOVDVPUHVIGZCAVJJECVIHE");
    tmp_msg_0.lat = 0.135254779128;
    tmp_msg_0.lon = 0.652241019891;
    tmp_msg_0.depth = 0.273208002979;
    tmp_msg_0.query_channel = 77U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 139U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.845201276248;
    msg.y = 0.304915375244;
    msg.var_x = 0.160477055491;
    msg.var_y = 0.737981925967;
    msg.distance = 0.503841227785;

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
    msg.setTimeStamp(0.604650177818);
    msg.setSource(23836U);
    msg.setSourceEntity(71U);
    msg.setDestination(14380U);
    msg.setDestinationEntity(199U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DPKRKXQWQBOZZKSVBXNUJVHUEEAIJLCDALLGZMHZCBZXODASGYZGFXHKOQGKIMSCAOKOIBRIEIABTVVVPZTHPMMPTPHXPYLHNUECBJJRXUJAGHUEQAYAYOZVHTLPSTOIMGWXYTSMFPGORLMDVNKPESMFC");
    tmp_msg_0.lat = 0.137688122177;
    tmp_msg_0.lon = 0.00366276857232;
    tmp_msg_0.depth = 0.952639808929;
    tmp_msg_0.query_channel = 244U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 34U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.370869767636;
    msg.y = 0.749468336723;
    msg.var_x = 0.721840136381;
    msg.var_y = 0.815955427355;
    msg.distance = 0.79812825772;

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
    msg.setTimeStamp(0.93191990939);
    msg.setSource(51679U);
    msg.setSourceEntity(225U);
    msg.setDestination(2970U);
    msg.setDestinationEntity(22U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JIYQDRKPQXCKAKMPCAZTDIIFCHGOTNUZXEIZUWDPPJPDQPXQXSLRNSSYJLZFTSGEOBFFMSUAEQTIEXBVVQUTZMWGGTYZECELKPHRHVAOWFOBVKJCEBJHJYDDEHKRJZWBELQZODFNXDYPDLHTPGRWWCVIPFORAARJLFILVUUDN");
    tmp_msg_0.lat = 0.991970783843;
    tmp_msg_0.lon = 0.744348571111;
    tmp_msg_0.depth = 0.513117826309;
    tmp_msg_0.query_channel = 251U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.492407727987;
    msg.y = 0.460291128741;
    msg.var_x = 0.17094062661;
    msg.var_y = 0.796098784615;
    msg.distance = 0.321397073964;

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
    msg.setTimeStamp(0.623515137686);
    msg.setSource(64708U);
    msg.setSourceEntity(135U);
    msg.setDestination(54899U);
    msg.setDestinationEntity(62U);
    msg.state = 200U;

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
    msg.setTimeStamp(0.833694732152);
    msg.setSource(12625U);
    msg.setSourceEntity(205U);
    msg.setDestination(16371U);
    msg.setDestinationEntity(14U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.902322146035);
    msg.setSource(24174U);
    msg.setSourceEntity(208U);
    msg.setDestination(43655U);
    msg.setDestinationEntity(157U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.30225308977);
    msg.setSource(50596U);
    msg.setSourceEntity(143U);
    msg.setDestination(10169U);
    msg.setDestinationEntity(195U);
    msg.x = 0.273890122219;
    msg.y = 0.174813492219;
    msg.z = 0.287672740694;

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
    msg.setTimeStamp(0.643777817668);
    msg.setSource(19704U);
    msg.setSourceEntity(215U);
    msg.setDestination(19528U);
    msg.setDestinationEntity(121U);
    msg.x = 0.176223741011;
    msg.y = 0.899169266298;
    msg.z = 0.177939730465;

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
    msg.setTimeStamp(0.386561957836);
    msg.setSource(12363U);
    msg.setSourceEntity(213U);
    msg.setDestination(12556U);
    msg.setDestinationEntity(154U);
    msg.x = 0.57469755534;
    msg.y = 0.54933859878;
    msg.z = 0.915308341304;

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
    msg.setTimeStamp(0.368967793097);
    msg.setSource(22028U);
    msg.setSourceEntity(1U);
    msg.setDestination(55845U);
    msg.setDestinationEntity(145U);
    msg.value = 0.381393243886;

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
    msg.setTimeStamp(0.0268678659493);
    msg.setSource(21226U);
    msg.setSourceEntity(10U);
    msg.setDestination(12453U);
    msg.setDestinationEntity(41U);
    msg.value = 0.512594260078;

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
    msg.setTimeStamp(0.375791002871);
    msg.setSource(43168U);
    msg.setSourceEntity(147U);
    msg.setDestination(17522U);
    msg.setDestinationEntity(14U);
    msg.value = 0.729919639048;

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
    msg.setTimeStamp(0.515793161961);
    msg.setSource(3696U);
    msg.setSourceEntity(197U);
    msg.setDestination(14700U);
    msg.setDestinationEntity(229U);
    msg.value = 0.941208841654;
    msg.z_units = 128U;

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
    msg.setTimeStamp(0.429155877306);
    msg.setSource(39895U);
    msg.setSourceEntity(57U);
    msg.setDestination(42662U);
    msg.setDestinationEntity(220U);
    msg.value = 0.753539479807;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.586633931853);
    msg.setSource(12396U);
    msg.setSourceEntity(207U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(62U);
    msg.value = 0.101709037736;
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
    msg.setTimeStamp(0.136620365096);
    msg.setSource(39045U);
    msg.setSourceEntity(1U);
    msg.setDestination(19114U);
    msg.setDestinationEntity(93U);
    msg.value = 0.735889230531;
    msg.speed_units = 214U;

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
    msg.setTimeStamp(0.921940479429);
    msg.setSource(58385U);
    msg.setSourceEntity(102U);
    msg.setDestination(27607U);
    msg.setDestinationEntity(130U);
    msg.value = 0.721576566467;
    msg.speed_units = 141U;

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
    msg.setTimeStamp(0.859277378637);
    msg.setSource(40854U);
    msg.setSourceEntity(2U);
    msg.setDestination(32782U);
    msg.setDestinationEntity(184U);
    msg.value = 0.773543736723;
    msg.speed_units = 215U;

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
    msg.setTimeStamp(0.381660125092);
    msg.setSource(31262U);
    msg.setSourceEntity(140U);
    msg.setDestination(45237U);
    msg.setDestinationEntity(52U);
    msg.value = 0.196931793339;

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
    msg.setTimeStamp(0.00618384167843);
    msg.setSource(20760U);
    msg.setSourceEntity(90U);
    msg.setDestination(39368U);
    msg.setDestinationEntity(74U);
    msg.value = 0.753976890907;

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
    msg.setTimeStamp(0.846978897519);
    msg.setSource(26646U);
    msg.setSourceEntity(202U);
    msg.setDestination(13248U);
    msg.setDestinationEntity(244U);
    msg.value = 0.594180870357;

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
    msg.setTimeStamp(0.399376584326);
    msg.setSource(229U);
    msg.setSourceEntity(250U);
    msg.setDestination(33403U);
    msg.setDestinationEntity(91U);
    msg.value = 0.401535240226;

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
    msg.setTimeStamp(0.301080207403);
    msg.setSource(37026U);
    msg.setSourceEntity(91U);
    msg.setDestination(13053U);
    msg.setDestinationEntity(248U);
    msg.value = 0.170138977266;

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
    msg.setTimeStamp(0.632071538823);
    msg.setSource(59057U);
    msg.setSourceEntity(191U);
    msg.setDestination(59094U);
    msg.setDestinationEntity(128U);
    msg.value = 0.385102082671;

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
    msg.setTimeStamp(0.238512613052);
    msg.setSource(32537U);
    msg.setSourceEntity(75U);
    msg.setDestination(44498U);
    msg.setDestinationEntity(136U);
    msg.value = 0.806063428897;

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
    msg.setTimeStamp(0.108448665);
    msg.setSource(46858U);
    msg.setSourceEntity(176U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(175U);
    msg.value = 0.702391037028;

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
    msg.setTimeStamp(0.264774550081);
    msg.setSource(46295U);
    msg.setSourceEntity(97U);
    msg.setDestination(6793U);
    msg.setDestinationEntity(183U);
    msg.value = 0.099041212929;

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
    msg.setTimeStamp(0.649503056048);
    msg.setSource(6995U);
    msg.setSourceEntity(76U);
    msg.setDestination(2393U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 193592192U;
    msg.start_lat = 0.516026247382;
    msg.start_lon = 0.215702067027;
    msg.start_z = 0.873174853441;
    msg.start_z_units = 136U;
    msg.end_lat = 0.955784381372;
    msg.end_lon = 0.858341641934;
    msg.end_z = 0.241641232692;
    msg.end_z_units = 195U;
    msg.speed = 0.885824745538;
    msg.speed_units = 112U;
    msg.lradius = 0.467423558223;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.0748697683412);
    msg.setSource(40113U);
    msg.setSourceEntity(145U);
    msg.setDestination(55632U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 1325317247U;
    msg.start_lat = 0.322237049602;
    msg.start_lon = 0.53946767439;
    msg.start_z = 0.897750519837;
    msg.start_z_units = 250U;
    msg.end_lat = 0.529415463319;
    msg.end_lon = 0.355781653935;
    msg.end_z = 0.690166946237;
    msg.end_z_units = 224U;
    msg.speed = 0.45196515929;
    msg.speed_units = 58U;
    msg.lradius = 0.0965704942484;
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
    msg.setTimeStamp(0.15924943708);
    msg.setSource(23306U);
    msg.setSourceEntity(1U);
    msg.setDestination(28380U);
    msg.setDestinationEntity(216U);
    msg.path_ref = 4054282485U;
    msg.start_lat = 0.202184642587;
    msg.start_lon = 0.765593348891;
    msg.start_z = 0.625407341586;
    msg.start_z_units = 98U;
    msg.end_lat = 0.114914079073;
    msg.end_lon = 0.89302374429;
    msg.end_z = 0.831525876754;
    msg.end_z_units = 209U;
    msg.speed = 0.125680588688;
    msg.speed_units = 76U;
    msg.lradius = 0.585372639051;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.458262026633);
    msg.setSource(64077U);
    msg.setSourceEntity(107U);
    msg.setDestination(34954U);
    msg.setDestinationEntity(120U);
    msg.x = 0.83685744379;
    msg.y = 0.378018100975;
    msg.z = 0.203320727877;
    msg.k = 0.776956393328;
    msg.m = 0.909823259737;
    msg.n = 0.537044639125;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.133667271781);
    msg.setSource(54617U);
    msg.setSourceEntity(228U);
    msg.setDestination(62676U);
    msg.setDestinationEntity(110U);
    msg.x = 0.236082955207;
    msg.y = 0.975387112071;
    msg.z = 0.078656558695;
    msg.k = 0.180694483235;
    msg.m = 0.320059750595;
    msg.n = 0.985134037009;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.730981095685);
    msg.setSource(36918U);
    msg.setSourceEntity(50U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(162U);
    msg.x = 0.973133421622;
    msg.y = 0.743256120603;
    msg.z = 0.983313910889;
    msg.k = 0.0710791092482;
    msg.m = 0.684041757686;
    msg.n = 0.155600458397;
    msg.flags = 224U;

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
    msg.setTimeStamp(0.330011782985);
    msg.setSource(21028U);
    msg.setSourceEntity(80U);
    msg.setDestination(30459U);
    msg.setDestinationEntity(239U);
    msg.value = 0.357553473889;

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
    msg.setTimeStamp(0.134194295997);
    msg.setSource(46233U);
    msg.setSourceEntity(73U);
    msg.setDestination(5747U);
    msg.setDestinationEntity(131U);
    msg.value = 0.761890171569;

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
    msg.setTimeStamp(0.957248025093);
    msg.setSource(33859U);
    msg.setSourceEntity(207U);
    msg.setDestination(35304U);
    msg.setDestinationEntity(102U);
    msg.value = 0.542199114089;

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
    msg.setTimeStamp(0.66830933762);
    msg.setSource(56254U);
    msg.setSourceEntity(43U);
    msg.setDestination(53970U);
    msg.setDestinationEntity(194U);
    msg.u = 0.352897119606;
    msg.v = 0.864965437397;
    msg.w = 0.892502726648;
    msg.p = 0.727406790742;
    msg.q = 0.29866246466;
    msg.r = 0.468071463606;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.304144193217);
    msg.setSource(11249U);
    msg.setSourceEntity(45U);
    msg.setDestination(40463U);
    msg.setDestinationEntity(76U);
    msg.u = 0.846160874457;
    msg.v = 0.323470762975;
    msg.w = 0.42461017008;
    msg.p = 0.300333670021;
    msg.q = 0.181164966324;
    msg.r = 0.280896045572;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.708224197525);
    msg.setSource(8590U);
    msg.setSourceEntity(125U);
    msg.setDestination(58102U);
    msg.setDestinationEntity(100U);
    msg.u = 0.127422317994;
    msg.v = 0.317442580474;
    msg.w = 0.58375311745;
    msg.p = 0.412505073909;
    msg.q = 0.8559788031;
    msg.r = 0.0978733367528;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.0195277461406);
    msg.setSource(1948U);
    msg.setSourceEntity(165U);
    msg.setDestination(32940U);
    msg.setDestinationEntity(131U);
    msg.path_ref = 1354881184U;
    msg.start_lat = 0.455855998621;
    msg.start_lon = 0.949752075639;
    msg.start_z = 0.904965891372;
    msg.start_z_units = 31U;
    msg.end_lat = 0.0155642581069;
    msg.end_lon = 0.252030199416;
    msg.end_z = 0.848350638536;
    msg.end_z_units = 51U;
    msg.lradius = 0.120760887334;
    msg.flags = 193U;
    msg.x = 0.0676286483541;
    msg.y = 0.569708649771;
    msg.z = 0.300297105502;
    msg.vx = 0.944909042439;
    msg.vy = 0.214340411666;
    msg.vz = 0.728976648308;
    msg.course_error = 0.372441537996;
    msg.eta = 2995U;

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
    msg.setTimeStamp(0.571154865992);
    msg.setSource(33025U);
    msg.setSourceEntity(41U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(164U);
    msg.path_ref = 2953908941U;
    msg.start_lat = 0.540244290814;
    msg.start_lon = 0.482692212443;
    msg.start_z = 0.593144374168;
    msg.start_z_units = 209U;
    msg.end_lat = 0.716564624637;
    msg.end_lon = 0.494218114395;
    msg.end_z = 0.524872983442;
    msg.end_z_units = 199U;
    msg.lradius = 0.884761307575;
    msg.flags = 123U;
    msg.x = 0.352816948997;
    msg.y = 0.733651991402;
    msg.z = 0.967053274122;
    msg.vx = 0.91179055798;
    msg.vy = 0.123324007928;
    msg.vz = 0.0499993065193;
    msg.course_error = 0.425512887066;
    msg.eta = 35668U;

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
    msg.setTimeStamp(0.380797317026);
    msg.setSource(52020U);
    msg.setSourceEntity(252U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 938860073U;
    msg.start_lat = 0.0458266064203;
    msg.start_lon = 0.0642120580976;
    msg.start_z = 0.214383431161;
    msg.start_z_units = 250U;
    msg.end_lat = 0.295450906076;
    msg.end_lon = 0.614381425999;
    msg.end_z = 0.926327884655;
    msg.end_z_units = 6U;
    msg.lradius = 0.0777029448079;
    msg.flags = 186U;
    msg.x = 0.531747857102;
    msg.y = 0.906976063722;
    msg.z = 0.157560643423;
    msg.vx = 0.968281486824;
    msg.vy = 0.684756566082;
    msg.vz = 0.304031199581;
    msg.course_error = 0.346729854145;
    msg.eta = 60882U;

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
    msg.setTimeStamp(0.793204921684);
    msg.setSource(33351U);
    msg.setSourceEntity(189U);
    msg.setDestination(212U);
    msg.setDestinationEntity(189U);
    msg.k = 0.877407311249;
    msg.m = 0.374015672232;
    msg.n = 0.675913562183;

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
    msg.setTimeStamp(0.355060062573);
    msg.setSource(43152U);
    msg.setSourceEntity(249U);
    msg.setDestination(45592U);
    msg.setDestinationEntity(224U);
    msg.k = 0.799193836761;
    msg.m = 0.350035167858;
    msg.n = 0.439959929017;

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
    msg.setTimeStamp(0.238935875599);
    msg.setSource(51005U);
    msg.setSourceEntity(70U);
    msg.setDestination(52747U);
    msg.setDestinationEntity(199U);
    msg.k = 0.914031382978;
    msg.m = 0.645833481316;
    msg.n = 0.277449695319;

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
    msg.setTimeStamp(0.763701658693);
    msg.setSource(61487U);
    msg.setSourceEntity(176U);
    msg.setDestination(63599U);
    msg.setDestinationEntity(111U);
    msg.p = 0.208576068513;
    msg.i = 0.180629406968;
    msg.d = 0.578858046909;
    msg.a = 0.158054493558;

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
    msg.setTimeStamp(0.709468678634);
    msg.setSource(65319U);
    msg.setSourceEntity(251U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(201U);
    msg.p = 0.861087916385;
    msg.i = 0.0882195358308;
    msg.d = 0.406823484946;
    msg.a = 0.74274022808;

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
    msg.setTimeStamp(0.930369901151);
    msg.setSource(61831U);
    msg.setSourceEntity(178U);
    msg.setDestination(53474U);
    msg.setDestinationEntity(168U);
    msg.p = 0.384204433438;
    msg.i = 0.244039814991;
    msg.d = 0.62468991361;
    msg.a = 0.656891532462;

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
    msg.setTimeStamp(0.469665016416);
    msg.setSource(6298U);
    msg.setSourceEntity(52U);
    msg.setDestination(2212U);
    msg.setDestinationEntity(147U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.41951701892);
    msg.setSource(47995U);
    msg.setSourceEntity(25U);
    msg.setDestination(33868U);
    msg.setDestinationEntity(59U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.524676751361);
    msg.setSource(28471U);
    msg.setSourceEntity(43U);
    msg.setDestination(59039U);
    msg.setDestinationEntity(233U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.541980381884);
    msg.setSource(54283U);
    msg.setSourceEntity(242U);
    msg.setDestination(15131U);
    msg.setDestinationEntity(81U);
    msg.timeout = 20227U;
    msg.lat = 0.697934977859;
    msg.lon = 0.847448723209;
    msg.z = 0.551073224777;
    msg.z_units = 94U;
    msg.speed = 0.148985640444;
    msg.speed_units = 172U;
    msg.roll = 0.912685514166;
    msg.pitch = 0.37360453648;
    msg.yaw = 0.0623356070178;
    msg.custom.assign("HKUSNCBWGRBKOAXNDIQQJWYDKFCBTAFIBKXSZMLOAPHVYCBFQNXNXZLNYTSNPLKCJZFUHKTLTIJPWOEEJNU");

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
    msg.setTimeStamp(0.733382317552);
    msg.setSource(20043U);
    msg.setSourceEntity(242U);
    msg.setDestination(32901U);
    msg.setDestinationEntity(48U);
    msg.timeout = 22896U;
    msg.lat = 0.263685081075;
    msg.lon = 0.749336762522;
    msg.z = 0.566073314748;
    msg.z_units = 14U;
    msg.speed = 0.0255906025976;
    msg.speed_units = 155U;
    msg.roll = 0.827353068442;
    msg.pitch = 0.623180357217;
    msg.yaw = 0.627136898693;
    msg.custom.assign("MMBTDETMPYYSTYQRNZDBCSDDWXEENKUVIDOKOMLSCKZGJGLNOQUVBKUAESQHAJCMVHIQQJEAVMOPWUGCURIZEBLOXNASXOEQGHRFD");

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
    msg.setTimeStamp(0.704934363481);
    msg.setSource(61144U);
    msg.setSourceEntity(205U);
    msg.setDestination(34842U);
    msg.setDestinationEntity(49U);
    msg.timeout = 33464U;
    msg.lat = 0.712487596556;
    msg.lon = 0.856392705795;
    msg.z = 0.701720965883;
    msg.z_units = 178U;
    msg.speed = 0.887962273575;
    msg.speed_units = 74U;
    msg.roll = 0.259919084231;
    msg.pitch = 0.985083661084;
    msg.yaw = 0.195856448756;
    msg.custom.assign("UZVAWXZOOYSDBXUUCAUQITCRJRUXCZFXJMNGWEQUTNRPSQJJGZOZVZKDPSCIZWTRRZJPRVGPLWOFQFTIGEQMRWRSBQJIPDLJGNAASRKPAHMCOIXYCMDHKBQMXKBVQLKPDIFNQFMXTI");

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
    msg.setTimeStamp(0.268179668209);
    msg.setSource(43998U);
    msg.setSourceEntity(59U);
    msg.setDestination(19359U);
    msg.setDestinationEntity(129U);
    msg.timeout = 10878U;
    msg.lat = 0.152035986402;
    msg.lon = 0.523415678446;
    msg.z = 0.396677866929;
    msg.z_units = 141U;
    msg.speed = 0.859979307528;
    msg.speed_units = 139U;
    msg.duration = 17503U;
    msg.radius = 0.571282097481;
    msg.flags = 181U;
    msg.custom.assign("ZZGGZFQCSUJNKVGFBNNIXEJUTJNGNDOFRSDWWNQOCUMTCPKOZJFLOTSAMXZGOVWRNHTMVPKQLHZYKXMDWVPBBYQRWLLAQNOVGEBAWQBJVVFPMBGNECSHQHJFJJCXBYGDVMWNACAYDDKYETEFIDOSBKHARPHDEZCVXLLXTPRMYOTUAWQAGRIIEUFUWOALKOIXMSTDYBRXPYYQZILSFZQICRVHHPBPWXMJEREXEDUGSLSCYCZKMSHULIHUTFT");

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
    msg.setTimeStamp(0.528227979979);
    msg.setSource(19277U);
    msg.setSourceEntity(120U);
    msg.setDestination(22476U);
    msg.setDestinationEntity(117U);
    msg.timeout = 48525U;
    msg.lat = 0.534221273735;
    msg.lon = 0.373991772841;
    msg.z = 0.649241006954;
    msg.z_units = 14U;
    msg.speed = 0.784836047774;
    msg.speed_units = 162U;
    msg.duration = 54624U;
    msg.radius = 0.493001662124;
    msg.flags = 160U;
    msg.custom.assign("MLBVEPYKOHMXSNFFWLLRNMYYOWHDBEFUUOEJYBFGTOVCJQQWRPOHIXYHGSIBXKONHSSRP");

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
    msg.setTimeStamp(0.188690878541);
    msg.setSource(5955U);
    msg.setSourceEntity(82U);
    msg.setDestination(1815U);
    msg.setDestinationEntity(35U);
    msg.timeout = 38006U;
    msg.lat = 0.662126472593;
    msg.lon = 0.996509244691;
    msg.z = 0.806247661873;
    msg.z_units = 107U;
    msg.speed = 0.325697188356;
    msg.speed_units = 65U;
    msg.duration = 64196U;
    msg.radius = 0.57361066714;
    msg.flags = 31U;
    msg.custom.assign("FZZNJMODZMRTLHSTUPHTUDPUXJTHWHCGCNTYLUSAAELFMLZWEGBIXECDBZCVZGJARXBOHSQVFLXDITN");

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
    msg.setTimeStamp(0.469289569064);
    msg.setSource(30201U);
    msg.setSourceEntity(2U);
    msg.setDestination(23801U);
    msg.setDestinationEntity(68U);
    msg.custom.assign("JBIBSVJZJSFVVDGTMHDSAJITPHMRALSNBGZYIFHQWRHRDNTZXATFUXVKZLQXCGLTGYIGUCPKDZSXZCTPZHEEVYWOKAAQFDLOBKAUEFWJQOGTKWEPWFRCNEBSDLDWUOLAJHMZNKJSQNOXYCDMEOMPDJKEGIUQQVYXKZAHHLGLUAXTWPTKRTBNENFXGMGLSNINDEVHHMWKO");

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
    msg.setTimeStamp(0.835580501153);
    msg.setSource(11912U);
    msg.setSourceEntity(149U);
    msg.setDestination(60408U);
    msg.setDestinationEntity(188U);
    msg.custom.assign("UYIPWXPVGTEMWVAUZRJRLHNSWRTMFDPQIBWJKMTAGOGOSAYSCDDWHZZLQGBPUJXMXSYCEABDFWCEYIOKLQKRMCMZFJJHATMONFPILWLHGQE");

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
    msg.setTimeStamp(0.48439100625);
    msg.setSource(32555U);
    msg.setSourceEntity(45U);
    msg.setDestination(16879U);
    msg.setDestinationEntity(79U);
    msg.custom.assign("ZOTPKDTNSHZCUFBTWEKZGNYNSCXUFXATKDYLIDMAUTDVRPPPQKTHUSEUWVAACNRHOERABDOMKWYMACQORHPIPBVCKSRGFJCGMSQJXGIKVMHOMBJYBZNBDRZVPXESIZOQOBBSZRLMNZWLOXAO");

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
    msg.setTimeStamp(0.678540824405);
    msg.setSource(20279U);
    msg.setSourceEntity(153U);
    msg.setDestination(41051U);
    msg.setDestinationEntity(176U);
    msg.timeout = 10927U;
    msg.lat = 0.45025859893;
    msg.lon = 0.336009072609;
    msg.z = 0.925928918965;
    msg.z_units = 79U;
    msg.duration = 36989U;
    msg.speed = 0.319738925156;
    msg.speed_units = 152U;
    msg.type = 105U;
    msg.radius = 0.19116662932;
    msg.length = 0.449854086712;
    msg.bearing = 0.434235414536;
    msg.direction = 30U;
    msg.custom.assign("YPGDAJGOZOOXTWMXMAFPZ");

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
    msg.setTimeStamp(0.392394808627);
    msg.setSource(64480U);
    msg.setSourceEntity(215U);
    msg.setDestination(18095U);
    msg.setDestinationEntity(43U);
    msg.timeout = 62049U;
    msg.lat = 0.443032968884;
    msg.lon = 0.33097945333;
    msg.z = 0.376022951968;
    msg.z_units = 145U;
    msg.duration = 10878U;
    msg.speed = 0.333555208025;
    msg.speed_units = 101U;
    msg.type = 17U;
    msg.radius = 0.645744983446;
    msg.length = 0.71177118729;
    msg.bearing = 0.791851076906;
    msg.direction = 25U;
    msg.custom.assign("TFJBJRLOAOVKBBDNNXZWTFEQWOQUOVUERKWENEADKCZUEYXNFTFPSDJHRUHRHFQIPUEYNCXKISMCYUJZBYKRIROGKJORAADYKJVMCEJDMNKDMZYZKCFGJIXMDHQXGDSGLUQSAGOLUVPZDGVFP");

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
    msg.setTimeStamp(0.447083604739);
    msg.setSource(40060U);
    msg.setSourceEntity(61U);
    msg.setDestination(21012U);
    msg.setDestinationEntity(243U);
    msg.timeout = 39621U;
    msg.lat = 0.44918075313;
    msg.lon = 0.26251057984;
    msg.z = 0.959050347493;
    msg.z_units = 183U;
    msg.duration = 8698U;
    msg.speed = 0.129175552312;
    msg.speed_units = 237U;
    msg.type = 53U;
    msg.radius = 0.266247356928;
    msg.length = 0.629106827168;
    msg.bearing = 0.642468714076;
    msg.direction = 50U;
    msg.custom.assign("IUVLQEOJNLCAUYBGMXBVLEADZJGWJKACPOUHRWWLKGBOWGPJBYSZHYXPZMQTKRNAGZDNKQGICFIIRVUMBQEWTJZHIIGSUHBDKESKTUHBFPAJKQDDBBUQKLQYBNMPFNLVOTFRXRPAYTHOCDLHGQVMXDCXWOJNXIYWFHJZIXFEUDACSLNQRFAGVNLTASJNDCOEKHCPTYHCZXELGOXXVUMDNZEIFWRSEVQFMRSKSJYMVVUTZSATTPSWC");

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
    msg.setTimeStamp(0.850222892899);
    msg.setSource(43392U);
    msg.setSourceEntity(123U);
    msg.setDestination(44068U);
    msg.setDestinationEntity(19U);
    msg.duration = 3434U;
    msg.custom.assign("YAEAUXRSYIJHNTLQOOTHQTETOFZHWYZRUPCIYVFTNJVWZHLAGFNVLXAEFXSEIWMMQQSKKDILFSCGRBHMKQNIFJZCXNSIDYDPFWUZEEHPITUIVGXAVDJCEALTCQCKCNEBLMZJUHDWKSYGTWNJJWPARVXPBRXPZYVVOSWAFCELHIDMGQ");

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
    msg.setTimeStamp(0.179658582991);
    msg.setSource(29008U);
    msg.setSourceEntity(61U);
    msg.setDestination(11153U);
    msg.setDestinationEntity(69U);
    msg.duration = 43135U;
    msg.custom.assign("BVSQDKXOJGAIIQUOJDFLZUZYXZELCCJTNXZWLUNQVTGTTNDHYHQCCRXEYEATKBQNUQRGYPSVZFUQWSBRRERVPAHCCHCIVEJNSLGBNTXTRUMFMPISPQSZNDLVFKGTQVKCBUDWFFWXKAHLAPDIJGIDMGMHEORBGSNYTVLSPBYKZAYKUJKDFWIHMJPPJROAYMO");

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
    msg.setTimeStamp(0.795228870796);
    msg.setSource(61267U);
    msg.setSourceEntity(228U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(156U);
    msg.duration = 14312U;
    msg.custom.assign("ZXCWUDSNXFQVQZBUFHSGKXWBKYREJOTBLYMSPTNNJHHZZZENAX");

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
    msg.setTimeStamp(0.238605186613);
    msg.setSource(36928U);
    msg.setSourceEntity(212U);
    msg.setDestination(23203U);
    msg.setDestinationEntity(134U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.224109646897;
    msg.control.set(tmp_msg_0);
    msg.duration = 41678U;
    msg.custom.assign("WHGKIJEAAYJOLNOYPBVKUVHAYGRDADUPZAMCBFJQOVKAUUBWNXBMQWKZE");

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
    msg.setTimeStamp(0.960493313392);
    msg.setSource(27208U);
    msg.setSourceEntity(127U);
    msg.setDestination(64431U);
    msg.setDestinationEntity(186U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.440176857258;
    msg.control.set(tmp_msg_0);
    msg.duration = 45324U;
    msg.custom.assign("BLMRODPAGICDIKUPVUILXJZWNSCFIFMZYJLKTFGRBOAVFYUNNVRDSDGZXTDIRRTHTUYUNQOQVGHGLWDKUNMBSYUAGQIVDVZOYDPREZSDKLJUCCANXVNXPBXCJPYUKYWTEXSESFGBHR");

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
    msg.setTimeStamp(0.985930181314);
    msg.setSource(36066U);
    msg.setSourceEntity(106U);
    msg.setDestination(1309U);
    msg.setDestinationEntity(192U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.998877319866;
    msg.control.set(tmp_msg_0);
    msg.duration = 15391U;
    msg.custom.assign("AOMHVJEYVDJOWAWCGNRSJHKUDJATPCMSGVHCFTNZSQNKQWLZXCEQETUQJGBHQSFCPEFFDULHIPHKMWALTUORSYIXPIEAODVDUSLZBRULJOXVPADYISBUWGBXKKNQKMVBTSTZNVOHXNBKJJFIBMCWHORXTNGRPRXFZGXAQDYWBELZGPMDYEQPDIYCEVLDACZMMNSSVQGRFRNMKYFRRIEWYWIXLENJLHIFPZYUKWKAHIABOQG");

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
    msg.setTimeStamp(0.558135389978);
    msg.setSource(6242U);
    msg.setSourceEntity(191U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(224U);
    msg.timeout = 64500U;
    msg.lat = 0.045707108489;
    msg.lon = 0.955430280621;
    msg.z = 0.815798278078;
    msg.z_units = 55U;
    msg.speed = 0.0140280112411;
    msg.speed_units = 37U;
    msg.bearing = 0.691026726425;
    msg.cross_angle = 0.326389652798;
    msg.width = 0.539672313454;
    msg.length = 0.652096662346;
    msg.hstep = 0.45966834271;
    msg.coff = 113U;
    msg.alternation = 167U;
    msg.flags = 81U;
    msg.custom.assign("UYDAWRPQVFQGZMOKLCBIFZUBMDVJSPSYFXEDIYISMGCQIXJQTMHORBQRTMNSXGHZFUOYAJKYGTUFHW");

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
    msg.setTimeStamp(0.00426631481899);
    msg.setSource(38497U);
    msg.setSourceEntity(183U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(166U);
    msg.timeout = 47619U;
    msg.lat = 0.993160775747;
    msg.lon = 0.0294219546343;
    msg.z = 0.304784062157;
    msg.z_units = 43U;
    msg.speed = 0.178882829885;
    msg.speed_units = 80U;
    msg.bearing = 0.706880324088;
    msg.cross_angle = 0.883418844308;
    msg.width = 0.746943760385;
    msg.length = 0.96947343225;
    msg.hstep = 0.0120146439333;
    msg.coff = 246U;
    msg.alternation = 133U;
    msg.flags = 40U;
    msg.custom.assign("ZIQJYHBDQJJRNLSRFQLBVKLLQZRDGIUKHWZKCKXZVKTOIIAZGBVFQIEMPWAAAYUQFAEZSEWMQIZTYEBXATVOCHORXPQJIAUTSDCGTVBMOETVDFENPDMPOXFRBSYKDOJZWYDCLGIEWDAEVNNMSNQPFCUGXIKHPSGMVBRENTHUCSQEXJFWIRYMWNAONDPXULJCUUMVHKXCTRGMBZTLGJHNXORKFYBLYHLRMJSPNHUYCBPOZHUDTWVGAKCFPXFLGJ");

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
    msg.setTimeStamp(0.98852480402);
    msg.setSource(13612U);
    msg.setSourceEntity(243U);
    msg.setDestination(43660U);
    msg.setDestinationEntity(237U);
    msg.timeout = 31585U;
    msg.lat = 0.547147405502;
    msg.lon = 0.664001055248;
    msg.z = 0.800366285953;
    msg.z_units = 104U;
    msg.speed = 0.110070526524;
    msg.speed_units = 94U;
    msg.bearing = 0.601414286213;
    msg.cross_angle = 0.214393622925;
    msg.width = 0.741850588772;
    msg.length = 0.386726978835;
    msg.hstep = 0.229437690379;
    msg.coff = 200U;
    msg.alternation = 187U;
    msg.flags = 207U;
    msg.custom.assign("MJWNTUCQRFXYJIKKPNJSWLZIWMZVAXLYZWENAPKRXQPWHJGFLCCWITLJICXCCOZUUAAAQVKYTDUKSNJYEMBANFUDCGCFGSFEVJMZYILORFVWMAVKXEGSBSOPRBVDWOCUSDKGHEYQBZBHLCBBIOTFJSUTJXIQYXTSXGYPQLBRRBMPDLKQNETDDUDHUQRYZZXISFJENHEVPNOVMGMAOGRQWPWLHHPEYTZDNRDONQH");

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
    msg.setTimeStamp(0.506118098504);
    msg.setSource(38513U);
    msg.setSourceEntity(56U);
    msg.setDestination(38870U);
    msg.setDestinationEntity(47U);
    msg.timeout = 29186U;
    msg.lat = 0.050500298903;
    msg.lon = 0.086087714604;
    msg.z = 0.375385626852;
    msg.z_units = 8U;
    msg.speed = 0.578561312318;
    msg.speed_units = 171U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.437830278035;
    tmp_msg_0.y = 0.216146715066;
    tmp_msg_0.z = 0.16195847101;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TQWVJADRZFWOZGEQKYKUSNODJPHDQESQELKMJZBRRPOJERWEBCGYJRXAWIRWSUVUOZPXPDFSXMICUANLZFQXICANUYFRFFQTMUHUFNPO");

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
    msg.setTimeStamp(0.338191411006);
    msg.setSource(4731U);
    msg.setSourceEntity(185U);
    msg.setDestination(61793U);
    msg.setDestinationEntity(248U);
    msg.timeout = 49085U;
    msg.lat = 0.302877645264;
    msg.lon = 0.287680540135;
    msg.z = 0.69147654131;
    msg.z_units = 111U;
    msg.speed = 0.568321412787;
    msg.speed_units = 12U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.825976865178;
    tmp_msg_0.y = 0.362238639108;
    tmp_msg_0.z = 0.815910007162;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LIELOOXIIERVKAQTURPGVXWSMYBPJXXRVQDPSUTJBSPBKRLIOLUWZBJXTWDZUXCNHGJKQFAFUQJNSEOKCDDQFHZYZGCXLGJMYDTTHALVDECYCXTQOIDASYAIYMZUBPNFCUNBPMWRJLBNOUPVWSAETGPVNHWEGQZCBTOHTQZTECDZUCDGFFIMPKKBGVEHQKAAHNLLFF");

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
    msg.setTimeStamp(0.207021510986);
    msg.setSource(50573U);
    msg.setSourceEntity(37U);
    msg.setDestination(49349U);
    msg.setDestinationEntity(98U);
    msg.timeout = 27955U;
    msg.lat = 0.708202648597;
    msg.lon = 0.048143633583;
    msg.z = 0.0333674903036;
    msg.z_units = 173U;
    msg.speed = 0.111021969671;
    msg.speed_units = 35U;
    msg.custom.assign("VIWJKDZQPRUDTUXKBSMTOQSQQAYOKLTELFWLGUBHRNQYCOMYZDJTYMLKJFMAEZEXNZRUNDUEPFWBYSHGKGICVCGATHOMZXOGWLJSHYVALFDSBOBFDAETMCWCLREUUDBKNRDGNPBUYPIHWVGZGOTSMYVXCQLRQJBWOLFYKTZNFZMGFQAECBXJRIGJRTKPXXKHVICZWNEHPDAFIEUUHNMZTXPSOPIHNJHYVVIVMOAAVCRPSBFNPXK");

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
    msg.setTimeStamp(0.0922753867558);
    msg.setSource(60267U);
    msg.setSourceEntity(220U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(127U);
    msg.x = 0.438714757524;
    msg.y = 0.318262579555;
    msg.z = 0.672872414398;

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
    msg.setTimeStamp(0.921899503958);
    msg.setSource(36349U);
    msg.setSourceEntity(130U);
    msg.setDestination(65292U);
    msg.setDestinationEntity(44U);
    msg.x = 0.717105286993;
    msg.y = 0.770460105418;
    msg.z = 0.784955359566;

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
    msg.setTimeStamp(0.702567122195);
    msg.setSource(57652U);
    msg.setSourceEntity(214U);
    msg.setDestination(55002U);
    msg.setDestinationEntity(48U);
    msg.x = 0.253718085665;
    msg.y = 0.718817607316;
    msg.z = 0.544050129232;

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
    msg.setTimeStamp(0.437448075444);
    msg.setSource(35217U);
    msg.setSourceEntity(97U);
    msg.setDestination(50081U);
    msg.setDestinationEntity(201U);
    msg.timeout = 59697U;
    msg.lat = 0.467022070538;
    msg.lon = 0.908064788663;
    msg.z = 0.45953250739;
    msg.z_units = 82U;
    msg.amplitude = 0.656748755849;
    msg.pitch = 0.141372794238;
    msg.speed = 0.979879652334;
    msg.speed_units = 78U;
    msg.custom.assign("IFJHLMKDRAXTNQVHXRQYPXALTALEZVIMVYUVVYJAWPCTBJTZOSCHGQIGRNDFQJBJFTWGLSHBCRWDYRPZGZDSJMVOHAKINHSCFZPAIWSEDGPGWGAIVFQSRMHTAQFOKRYDQKOEKYUDUSMPKSUKHUTLYNENFNHAVCBMTDCLPSVEUEXRCWNRSUXBJDZMKKWBRJGVJOJFIOQENMBCEXXZPPYGUXWWICZKUGTYYTEMABDXQOILWZHFLCXNLBOFEPMBL");

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
    msg.setTimeStamp(0.517798970223);
    msg.setSource(17062U);
    msg.setSourceEntity(226U);
    msg.setDestination(51489U);
    msg.setDestinationEntity(40U);
    msg.timeout = 137U;
    msg.lat = 0.908964017166;
    msg.lon = 0.954906033657;
    msg.z = 0.587475802749;
    msg.z_units = 191U;
    msg.amplitude = 0.644472221085;
    msg.pitch = 0.730192567356;
    msg.speed = 0.554854913025;
    msg.speed_units = 163U;
    msg.custom.assign("SQUOYKNBRQFNPLNANVGOZWPLGWKNKZZLABAPQXBCNFTIARCPIY");

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
    msg.setTimeStamp(0.666458880406);
    msg.setSource(32181U);
    msg.setSourceEntity(226U);
    msg.setDestination(10590U);
    msg.setDestinationEntity(241U);
    msg.timeout = 4176U;
    msg.lat = 0.828880886195;
    msg.lon = 0.789106247321;
    msg.z = 0.906206004817;
    msg.z_units = 69U;
    msg.amplitude = 0.314316376202;
    msg.pitch = 0.608270436765;
    msg.speed = 0.986128268577;
    msg.speed_units = 242U;
    msg.custom.assign("JYODUMPVPASRKSPHFOBYKVTTWJKHYHYXECHEJDIYXXATMKKIGLYZZHRLNMATEIJRBGXGWDLMYCNZOQYXORZBCXUADJTJLMLQPVKPMZMSOODKOXWBMFLMNPRUANIPE");

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
    msg.setTimeStamp(0.373276205786);
    msg.setSource(28802U);
    msg.setSourceEntity(55U);
    msg.setDestination(7308U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.832666620262);
    msg.setSource(50322U);
    msg.setSourceEntity(250U);
    msg.setDestination(5018U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.729160951634);
    msg.setSource(26013U);
    msg.setSourceEntity(121U);
    msg.setDestination(65290U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.0502411507528);
    msg.setSource(50612U);
    msg.setSourceEntity(48U);
    msg.setDestination(44112U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.809538130331;
    msg.lon = 0.139777564918;
    msg.z = 0.581892515047;
    msg.z_units = 132U;
    msg.radius = 0.176753170801;
    msg.duration = 64260U;
    msg.speed = 0.647733048929;
    msg.speed_units = 16U;
    msg.custom.assign("YXIEMBDZWWGPVCDIYZQLBPMTHFAADKNSLAKGYLPBXAIESTFTASVKRYXXXUOSYKBJCBARGYCYPGNSKVLGNELHFVJBVKQXWFRORNRHMKBYIPPCVDLUOZLPTICQH");

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
    msg.setTimeStamp(0.365116809248);
    msg.setSource(13995U);
    msg.setSourceEntity(63U);
    msg.setDestination(6171U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.918628665578;
    msg.lon = 0.889493004103;
    msg.z = 0.0054480963107;
    msg.z_units = 184U;
    msg.radius = 0.147952227287;
    msg.duration = 34438U;
    msg.speed = 0.484144723101;
    msg.speed_units = 16U;
    msg.custom.assign("ZBJQCAPLKKVUZFXYUMCQGCBITYJIAOGSTHHBQLUTWTSALDLPYDOISOAKLNOKDBGIQSBSCBRKHDIGWWVRHMVGWOIMCFHZSFDLPAYZTYRAGHNXOFWFPFXGUFJYFCXUDGZHIMVRIPTKZKHNACSNYZEBVQADEHVDSLMTWRABIFPQNZQOPZVUKYMRNXRG");

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
    msg.setTimeStamp(0.0349822724279);
    msg.setSource(37024U);
    msg.setSourceEntity(0U);
    msg.setDestination(58376U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.442073834068;
    msg.lon = 0.755340433792;
    msg.z = 0.637992513673;
    msg.z_units = 67U;
    msg.radius = 0.646824526229;
    msg.duration = 34537U;
    msg.speed = 0.113037625743;
    msg.speed_units = 94U;
    msg.custom.assign("CJPFRMLAXKVEWXHGNIQJNKLETBVPGWYMDYGXGCLBOORHMWRYQFSFTTAAHICQPLMRJBLVKVQODJYZYURKPEZUSBZRWUNGDVTQNQHCYODZHPKESCVOTSKJOMLZUVZVBXDGEXONYSEQRCIFWIWZZBQLXHNUFEVTNFUCXRRNBAUHO");

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
    msg.setTimeStamp(0.286557468843);
    msg.setSource(18488U);
    msg.setSourceEntity(135U);
    msg.setDestination(45359U);
    msg.setDestinationEntity(209U);
    msg.timeout = 42868U;
    msg.flags = 248U;
    msg.lat = 0.40909481893;
    msg.lon = 0.337347225711;
    msg.start_z = 0.525426175404;
    msg.start_z_units = 230U;
    msg.end_z = 0.0160441763669;
    msg.end_z_units = 195U;
    msg.radius = 0.693488273673;
    msg.speed = 0.277918777943;
    msg.speed_units = 254U;
    msg.custom.assign("WIFHLTTUQFRZUPYYDCZGHWSYPIKWMVQONEQAKIAPRPMJIJDTKLPNMHACJYQOJHUSFHCPYDLDVDJCRKLOGNOULWKXIVFIPFRQNHSLZQRRYHRBLYCQSVMBIKOFRENGTGDSEVCZGXBIOZKMDWBYQLNSDRTSCUULSHVBVJOMAMOZO");

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
    msg.setTimeStamp(0.754734271203);
    msg.setSource(51511U);
    msg.setSourceEntity(117U);
    msg.setDestination(46123U);
    msg.setDestinationEntity(190U);
    msg.timeout = 58694U;
    msg.flags = 29U;
    msg.lat = 0.791241965825;
    msg.lon = 0.22238647853;
    msg.start_z = 0.691762567564;
    msg.start_z_units = 169U;
    msg.end_z = 0.729476853089;
    msg.end_z_units = 133U;
    msg.radius = 0.211200098887;
    msg.speed = 0.353799302512;
    msg.speed_units = 67U;
    msg.custom.assign("BLADIAZHYXSVXQCKEUGCU");

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
    msg.setTimeStamp(0.588516178675);
    msg.setSource(25076U);
    msg.setSourceEntity(125U);
    msg.setDestination(46128U);
    msg.setDestinationEntity(160U);
    msg.timeout = 59076U;
    msg.flags = 235U;
    msg.lat = 0.230612609861;
    msg.lon = 0.558498215807;
    msg.start_z = 0.431464082698;
    msg.start_z_units = 101U;
    msg.end_z = 0.62000283732;
    msg.end_z_units = 170U;
    msg.radius = 0.558725341187;
    msg.speed = 0.993247699651;
    msg.speed_units = 111U;
    msg.custom.assign("AQGHSNEYBPHWQRTKFVUQUHLJWXCRKSTLKBARRXBEYQTIZOLLXMVPMWTOHOVXFGEWWMHKUJFAAMMPTEHKOHJSZJRSEIYADDPZJXGTELINSTODNPWMXITKZDDEIRVPMAPBCAQSGGCNDGQLTFJMZKNABECMCKQOVWLXYOYWKJCGUPKSVFBVQXBFWIGHINUBLPZINSYJAYDUCIFFLBPQVDRCONRZYXNELJSHQJUDZZOIFEVCADHGXM");

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
    msg.setTimeStamp(0.707346492502);
    msg.setSource(31049U);
    msg.setSourceEntity(217U);
    msg.setDestination(10315U);
    msg.setDestinationEntity(45U);
    msg.timeout = 48605U;
    msg.lat = 0.0207252334297;
    msg.lon = 0.763899086386;
    msg.z = 0.466696570533;
    msg.z_units = 131U;
    msg.speed = 0.544422203312;
    msg.speed_units = 244U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0676440909351;
    tmp_msg_0.y = 0.621225079032;
    tmp_msg_0.z = 0.0550239069804;
    tmp_msg_0.t = 0.517193328665;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LBSOPIGBUAJLJHSGNPCBYMPFKXTJAXPNOVDDFLYKJKWICSUGMCFRQYCYOSCWBMRAOXSAZZAKJAROHBLULEMHVBIQVQIRGZVKXJNBLUWGMVNTGTSZQEEYAUSTAMSUETFRQMRWOZQKDPEHBCWZSYGXUIMHWANYEVRCHAJEGIJHXRBTMXZQIOMWPKWLFLIDKWVQPHENUDVTTNYBSQJZCIDDLLFDKXTHOKVNPOPQNNI");

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
    msg.setTimeStamp(0.783201328099);
    msg.setSource(60158U);
    msg.setSourceEntity(90U);
    msg.setDestination(26648U);
    msg.setDestinationEntity(247U);
    msg.timeout = 14486U;
    msg.lat = 0.13032142116;
    msg.lon = 0.425388935621;
    msg.z = 0.684011385055;
    msg.z_units = 77U;
    msg.speed = 0.547574873523;
    msg.speed_units = 202U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.469622939432;
    tmp_msg_0.y = 0.968350582596;
    tmp_msg_0.z = 0.691509334681;
    tmp_msg_0.t = 0.78986595479;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RZWDZEVFHYTFFCGBOMHBBD");

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
    msg.setTimeStamp(0.423662058369);
    msg.setSource(65501U);
    msg.setSourceEntity(15U);
    msg.setDestination(1898U);
    msg.setDestinationEntity(249U);
    msg.timeout = 65000U;
    msg.lat = 0.709658734501;
    msg.lon = 0.959192321456;
    msg.z = 0.342146617368;
    msg.z_units = 12U;
    msg.speed = 0.375312785361;
    msg.speed_units = 12U;
    msg.custom.assign("VCLPZHSFHTURHKKENBZZNAERYCGCYQMYGZOVDATSWTVECZVPIOXHMWKJHKDCPUPLIHOMKJMPQAABCAKKRQHOMPDEEGZWYBXDCCHORVNJKOILBJTNASABRJLY");

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
    msg.setTimeStamp(0.160708482027);
    msg.setSource(47513U);
    msg.setSourceEntity(178U);
    msg.setDestination(7268U);
    msg.setDestinationEntity(59U);
    msg.x = 0.658122385457;
    msg.y = 0.762039286815;
    msg.z = 0.773679510361;
    msg.t = 0.0688478262629;

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
    msg.setTimeStamp(0.507293693252);
    msg.setSource(58287U);
    msg.setSourceEntity(126U);
    msg.setDestination(33479U);
    msg.setDestinationEntity(109U);
    msg.x = 0.981375625651;
    msg.y = 0.37010610636;
    msg.z = 0.000288165224377;
    msg.t = 0.95872164453;

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
    msg.setTimeStamp(0.63425627134);
    msg.setSource(16863U);
    msg.setSourceEntity(148U);
    msg.setDestination(64910U);
    msg.setDestinationEntity(101U);
    msg.x = 0.367990173303;
    msg.y = 0.450771443857;
    msg.z = 0.874541721634;
    msg.t = 0.820329901773;

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
    msg.setTimeStamp(0.0698371532078);
    msg.setSource(42062U);
    msg.setSourceEntity(71U);
    msg.setDestination(47601U);
    msg.setDestinationEntity(109U);
    msg.timeout = 41769U;
    msg.name.assign("CBPNGZHCRDTNQVYSQIVTZYWHICRWCUDHXTQEOJMCPSBYXSCSLXNAZEWHAJPGAYMTBLGWNRGEPPCSTQXGADRYPJHKOMMXAXJKYHRCISMQF");
    msg.custom.assign("BPWWYXMYWCLZRIVNJCBNABZPETQVGJDCOOFJUOHETQDSTKBHCKGOCYG");

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
    msg.setTimeStamp(0.450216564854);
    msg.setSource(10855U);
    msg.setSourceEntity(126U);
    msg.setDestination(37549U);
    msg.setDestinationEntity(62U);
    msg.timeout = 24294U;
    msg.name.assign("SOSZVSSZUKRDXDACSFRAZNETDSJJZYISQTDHJXWZDUFHCUFYILVZJZTLEEJEDLZCMIGKQGQNYSVFMIEAOARFQIVWRYTLHKOFVWUWGBRJIXBOYBOBIHMC");
    msg.custom.assign("NWYFAVIODOWTMJHVKRMIQXOKCCYBRJEPMMXMLIPRJSONXTDCBVIYVQFYCGFONKZRXEQFGSUJFUJCEVRXVBWQHYXWTSITOSCMPHAHGQYEQHIKXMCIYVHWKUBDDRPIGWQSOZBAMQBOHCZTLRUHNTXZK");

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
    msg.setTimeStamp(0.40904998535);
    msg.setSource(32395U);
    msg.setSourceEntity(72U);
    msg.setDestination(8721U);
    msg.setDestinationEntity(6U);
    msg.timeout = 32370U;
    msg.name.assign("FIQBAVQNCBGODUEPZRVJZBEARSWCPNPWUYNIJLVIACNTLJCRSLNCITZZISQJVFXEFUZCGVYJGHPFYIBMYKXSGPTBAEEYZHBKURIYBKMVCHSAREVYSOZHMNUTSRIWYSPMLJBYOODRKGLUOZEMCXEODMXXFKXFHBUQWOWPUNSNTG");
    msg.custom.assign("LODNVHBDYMUZXWAYGGRIIWZUNDUS");

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
    msg.setTimeStamp(0.603659562212);
    msg.setSource(58530U);
    msg.setSourceEntity(172U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.854398353674;
    msg.lon = 0.117840062202;
    msg.z = 0.547359873139;
    msg.z_units = 24U;
    msg.speed = 0.901959770719;
    msg.speed_units = 210U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.129048315198;
    tmp_msg_0.y = 0.141592027045;
    tmp_msg_0.z = 0.768582596316;
    tmp_msg_0.t = 0.527873075918;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.543345893968;
    msg.custom.assign("KNARGMKIPEDZYRANVXMGYKGQCTIPWOVEBUCSBZDHVFHEUHSOQJGJTMQSLZEVQRWMEOALBPCKPVAZGPNXXNHSLGUPYOUTAXNKYJAJDMTNYWXHEQUISXOAXDDQRDNCRKRSMLWJWFLBSZCSFHMTJUAPGWNTYZKEBXIJWYULAMWENB");

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
    msg.setTimeStamp(0.893452905281);
    msg.setSource(51250U);
    msg.setSourceEntity(239U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.983507358266;
    msg.lon = 0.798526478755;
    msg.z = 0.790040058143;
    msg.z_units = 148U;
    msg.speed = 0.192189767387;
    msg.speed_units = 158U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4385U;
    tmp_msg_0.off_x = 0.0650675166572;
    tmp_msg_0.off_y = 0.66452465674;
    tmp_msg_0.off_z = 0.500710068656;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.663522912066;
    msg.custom.assign("LHYVJGTCCZDKOMTHJAZZUUDBUBEWCXVXMRITGRICN");

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
    msg.setTimeStamp(0.253322942487);
    msg.setSource(41486U);
    msg.setSourceEntity(43U);
    msg.setDestination(3564U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.575553548937;
    msg.lon = 0.742984110685;
    msg.z = 0.0314903969927;
    msg.z_units = 174U;
    msg.speed = 0.628041741944;
    msg.speed_units = 123U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.234792509094;
    tmp_msg_0.y = 0.944010526515;
    tmp_msg_0.z = 0.594244730778;
    tmp_msg_0.t = 0.853523213877;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.268272198606;
    msg.custom.assign("ZYNUYMJRZLWIMXEESQMCTKSKARSUWFXKIUOHPPONNVSWOCYAXLVHEFDGDIINJQAGVHRAHQTMYHAACRIFPVTRZSRXDGAJKPVLWCFXCBQIWCYQIMNQDWUOHMOAJZTUCVTWEZXZZJJVKBXDALQHFLCHEXVTNRGFBDXFSELMPJJUGPSSBSBGRDRYLWONGHJBGRMZYDEFNEVBFDGBKLWMXTQNKVUZJUDBPKYUNKUZCQQT");

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
    msg.setTimeStamp(0.317502787555);
    msg.setSource(17707U);
    msg.setSourceEntity(102U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(162U);
    msg.vid = 23578U;
    msg.off_x = 0.753785063747;
    msg.off_y = 0.758298612432;
    msg.off_z = 0.565553011225;

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
    msg.setTimeStamp(0.782129466497);
    msg.setSource(52067U);
    msg.setSourceEntity(195U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(245U);
    msg.vid = 1509U;
    msg.off_x = 0.202963267463;
    msg.off_y = 0.782742505481;
    msg.off_z = 0.607058708113;

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
    msg.setTimeStamp(0.575014672175);
    msg.setSource(4377U);
    msg.setSourceEntity(78U);
    msg.setDestination(55275U);
    msg.setDestinationEntity(163U);
    msg.vid = 46988U;
    msg.off_x = 0.717035481422;
    msg.off_y = 0.942261830373;
    msg.off_z = 0.603220944244;

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
    msg.setTimeStamp(0.930043505359);
    msg.setSource(46743U);
    msg.setSourceEntity(107U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.271639866807);
    msg.setSource(34278U);
    msg.setSourceEntity(134U);
    msg.setDestination(37221U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.849925779556);
    msg.setSource(29322U);
    msg.setSourceEntity(210U);
    msg.setDestination(19374U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.810704993826);
    msg.setSource(9784U);
    msg.setSourceEntity(18U);
    msg.setDestination(21764U);
    msg.setDestinationEntity(218U);
    msg.mid = 42658U;

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
    msg.setTimeStamp(0.483506816383);
    msg.setSource(38969U);
    msg.setSourceEntity(243U);
    msg.setDestination(38983U);
    msg.setDestinationEntity(144U);
    msg.mid = 40021U;

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
    msg.setTimeStamp(0.847881920762);
    msg.setSource(14078U);
    msg.setSourceEntity(210U);
    msg.setDestination(4980U);
    msg.setDestinationEntity(200U);
    msg.mid = 45719U;

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
    msg.setTimeStamp(0.0190645173488);
    msg.setSource(36692U);
    msg.setSourceEntity(185U);
    msg.setDestination(23158U);
    msg.setDestinationEntity(122U);
    msg.state = 25U;
    msg.eta = 30153U;
    msg.info.assign("FIGDKWGLDCPTIZZKQNMCMIKNNQCMSLMNZESUYQYWYESZNWUUNDIRULOXHOVJKSKDNMVPXIFRDCXBNREATAUWHOQXPPHQWRNPNJKBATFWVWRAHYGXSKWLVPYAYCWDYIPHPGGLLEELDZTWMEVCMGFRPSRSJYMBJAKRZABODQLJVTJFT");

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
    msg.setTimeStamp(0.478856580403);
    msg.setSource(55001U);
    msg.setSourceEntity(87U);
    msg.setDestination(56981U);
    msg.setDestinationEntity(206U);
    msg.state = 178U;
    msg.eta = 34359U;
    msg.info.assign("FUJKATOTNRFCA");

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
    msg.setTimeStamp(0.0883976383696);
    msg.setSource(27921U);
    msg.setSourceEntity(227U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(32U);
    msg.state = 168U;
    msg.eta = 16521U;
    msg.info.assign("GYVPCMXPSBPROAEMUVTMBYPZIGKETXIDWLIH");

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
    msg.setTimeStamp(0.113215077777);
    msg.setSource(20778U);
    msg.setSourceEntity(89U);
    msg.setDestination(82U);
    msg.setDestinationEntity(182U);
    msg.system = 29927U;
    msg.duration = 31511U;
    msg.speed = 0.863950515882;
    msg.speed_units = 169U;
    msg.x = 0.809367373535;
    msg.y = 0.412499126893;
    msg.z = 0.655025019236;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.790574718376);
    msg.setSource(11896U);
    msg.setSourceEntity(103U);
    msg.setDestination(33459U);
    msg.setDestinationEntity(66U);
    msg.system = 58938U;
    msg.duration = 2187U;
    msg.speed = 0.872225842678;
    msg.speed_units = 153U;
    msg.x = 0.16710150847;
    msg.y = 0.298521664845;
    msg.z = 0.944698303235;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.511966357294);
    msg.setSource(52720U);
    msg.setSourceEntity(39U);
    msg.setDestination(45238U);
    msg.setDestinationEntity(106U);
    msg.system = 12551U;
    msg.duration = 3585U;
    msg.speed = 0.55930272915;
    msg.speed_units = 135U;
    msg.x = 0.503743863233;
    msg.y = 0.472263720433;
    msg.z = 0.0269790064152;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.0940780062051);
    msg.setSource(7927U);
    msg.setSourceEntity(99U);
    msg.setDestination(59933U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.0937250322804;
    msg.lon = 0.996770064547;
    msg.speed = 0.0213844447815;
    msg.speed_units = 194U;
    msg.duration = 23699U;
    msg.sys_a = 37636U;
    msg.sys_b = 2849U;
    msg.move_threshold = 0.19600307724;

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
    msg.setTimeStamp(0.24899895998);
    msg.setSource(54071U);
    msg.setSourceEntity(167U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.193074589382;
    msg.lon = 0.696607884852;
    msg.speed = 0.112153725278;
    msg.speed_units = 94U;
    msg.duration = 49269U;
    msg.sys_a = 57741U;
    msg.sys_b = 6125U;
    msg.move_threshold = 0.17804582413;

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
    msg.setTimeStamp(0.917547829978);
    msg.setSource(18120U);
    msg.setSourceEntity(224U);
    msg.setDestination(28472U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.350231270362;
    msg.lon = 0.584323830075;
    msg.speed = 0.587296729885;
    msg.speed_units = 98U;
    msg.duration = 41591U;
    msg.sys_a = 60468U;
    msg.sys_b = 44395U;
    msg.move_threshold = 0.630271868861;

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
    msg.setTimeStamp(0.803984225947);
    msg.setSource(57448U);
    msg.setSourceEntity(254U);
    msg.setDestination(29531U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.106266800606;
    msg.lon = 0.221316643768;
    msg.z = 0.808744229025;
    msg.z_units = 77U;
    msg.speed = 0.515742792876;
    msg.speed_units = 44U;
    msg.custom.assign("WALSBENHOFUCBACGIXRMLNNUZQECBRQWPQNELGGRKRXOZBVUOWCGOMUXIMGDTCAAFLWKOZPIERSBLWRVWFWJTGHOJNVVOGCRZWJTFYDNDPXUJSJQADXQMKYJJUHMFFWRUSTDYVWFNBSDMZXVTAHPCZSQLCLAJLINZGKSQPOXVBKQHHJHGMDSAL");

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
    msg.setTimeStamp(0.507061888227);
    msg.setSource(17576U);
    msg.setSourceEntity(151U);
    msg.setDestination(30186U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.645474104516;
    msg.lon = 0.428065283251;
    msg.z = 0.477506554687;
    msg.z_units = 143U;
    msg.speed = 0.949668068257;
    msg.speed_units = 18U;
    msg.custom.assign("XYZXRWFLXPWXJKGRNPCFUDBZNWEQHOEKMZOHXAJVIWYQLQVTVQGNGPRTYCLPTBYRJCGAXWUOLIOWVSBPFCZESDMJWPHVZZKFHWUCIUMJGDOBQVSVSMZEUNJCKNTIADLHZKSIROIDDUARYGKTNBJKLEGYXUPCNUYZDMETQMYFITUYAQFI");

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
    msg.setTimeStamp(0.608760787143);
    msg.setSource(4445U);
    msg.setSourceEntity(185U);
    msg.setDestination(30308U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.0200054460206;
    msg.lon = 0.124942671549;
    msg.z = 0.486919269112;
    msg.z_units = 178U;
    msg.speed = 0.368154515096;
    msg.speed_units = 24U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.234674312931;
    tmp_msg_0.lon = 0.324114082869;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GZXSSHIPKWOOJLGTPDRYBIQSMBCKNCLFYYBXYPLDEANXW");

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
    msg.setTimeStamp(0.636303917794);
    msg.setSource(16422U);
    msg.setSourceEntity(144U);
    msg.setDestination(60528U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.736565820227;
    msg.lon = 0.591397543349;

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
    msg.setTimeStamp(0.55008810745);
    msg.setSource(23490U);
    msg.setSourceEntity(250U);
    msg.setDestination(17099U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.803254535665;
    msg.lon = 0.731819934659;

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
    msg.setTimeStamp(0.610146960646);
    msg.setSource(13686U);
    msg.setSourceEntity(13U);
    msg.setDestination(48503U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.0449563154364;
    msg.lon = 0.700302339725;

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
    msg.setTimeStamp(0.270291972214);
    msg.setSource(62308U);
    msg.setSourceEntity(33U);
    msg.setDestination(30275U);
    msg.setDestinationEntity(157U);
    msg.timeout = 31032U;
    msg.lat = 0.351484428548;
    msg.lon = 0.9150634664;
    msg.z = 0.117613394252;
    msg.z_units = 193U;
    msg.pitch = 0.0307063513314;
    msg.amplitude = 0.371612266397;
    msg.duration = 18878U;
    msg.speed = 0.418254663521;
    msg.speed_units = 224U;
    msg.radius = 0.403833698438;
    msg.direction = 84U;
    msg.custom.assign("JGMMFQKWSSOGODFKFCXDULXJPZRSVFYUUMSCKROOXKYTPYWYIQPPWZLAKMCIIGNRTLNBEQIKKYBZAFDCNKKNVWOCQMDULNCYGIPGJKXTHILPGLRBQGLXSAQHEBJHSSZAMPGTNZBZOIVHWEWDTTJARQSQGULMTNZELOJDWWVJWMUBNHDOYVRV");

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
    msg.setTimeStamp(0.0790127664719);
    msg.setSource(63046U);
    msg.setSourceEntity(162U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(4U);
    msg.timeout = 31032U;
    msg.lat = 0.41856593257;
    msg.lon = 0.8030859915;
    msg.z = 0.323061946083;
    msg.z_units = 216U;
    msg.pitch = 0.610412945361;
    msg.amplitude = 0.833316882138;
    msg.duration = 36242U;
    msg.speed = 0.560211511128;
    msg.speed_units = 248U;
    msg.radius = 0.854635095934;
    msg.direction = 11U;
    msg.custom.assign("LXJLXRKHUMTUSSSRHVTZVWGWWXBTBRLTNIYYYLMLTDRREZBBVTPZEVFENCVCGOKQCKODYGZAMQUXRSQNDHNANPMBHIGYUFAEDYSIVEALXOIZIQBCUQXGCLWMOCBNGAACOFHFLDNFAQJJSDPTUQZOQOOHUCPZGZKWPORESJWITEPXQXIDK");

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
    msg.setTimeStamp(0.424440226932);
    msg.setSource(37456U);
    msg.setSourceEntity(172U);
    msg.setDestination(43053U);
    msg.setDestinationEntity(51U);
    msg.timeout = 52467U;
    msg.lat = 0.282393158485;
    msg.lon = 0.875476851798;
    msg.z = 0.60325372625;
    msg.z_units = 5U;
    msg.pitch = 0.0646631121939;
    msg.amplitude = 0.583196813199;
    msg.duration = 22224U;
    msg.speed = 0.629685412211;
    msg.speed_units = 186U;
    msg.radius = 0.872032807687;
    msg.direction = 185U;
    msg.custom.assign("GZNNOSCMAPHUEPRWQGDVIJNPACAAKTPM");

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
    msg.setTimeStamp(0.408116090098);
    msg.setSource(16773U);
    msg.setSourceEntity(202U);
    msg.setDestination(21348U);
    msg.setDestinationEntity(6U);
    msg.formation_name.assign("WHQCEDSTTNEJMZIXGBNGJCICRDHIHEOZIFGLOAMXWOTIFNTYIRVSOUXBZFZADWJTFUSAVLECCKAZJQOOVPAJEICLFHNEPBVRRGHHXOPWKTZOKQETIASQGDYJPMGNYGAXEPVPEASUKBFUYNWJLUKQYQZSXZHFLDBYKMOBTXRNUCBUFMEMV");
    msg.reference_frame = 200U;
    msg.custom.assign("PYEKJOGLHYZUNGUCMXEERID");

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
    msg.setTimeStamp(0.0946166395929);
    msg.setSource(30121U);
    msg.setSourceEntity(51U);
    msg.setDestination(47486U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("CAXZQHVQHQMKAXEDEJEDLPZGUMBYULHXTKCKYLVUEQMGPLGUDGVCZVEXNFSPGNUUFWFSFKJLNHOXARWBPHZWIIYMIHLSVOFXXJROBCWMIUVIPTJHGYDSLGKWQXZYVNYNCUARUBTRLKBAPVMCQIAFJOSCOFNUDBTQPYRBRRAWTOMSPGNZLETLQNBZXOMEDBDDJWIZYVEADJTWPHIBGMOCTSPSTCQS");
    msg.reference_frame = 242U;
    msg.custom.assign("KLSEUWTXCLSGHWFMRVWZPYPZVEEVSBVOGNDXILMZZYZYYRKNNXAXFXIGPHLQFPWAAKZZWAXCVIMJKDTGORFTMJTDKCJQYBFQXOLXSS");

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
    msg.setTimeStamp(0.719637934564);
    msg.setSource(49481U);
    msg.setSourceEntity(150U);
    msg.setDestination(51419U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("AAPVSDMFSNJFUQNHRYZDTXZMBGHVILEXORCMWULQWGMEBWWPKJZBMVJPDOOLGZQDIYOGZSBKOHQAWJVMRMEEPNLKCZHPQJDKHCCASDZZTHAAXUWLFRTVRWMLHUFOBJRINQUUAQFSYOTAYTARUWRVUDCFS");
    msg.reference_frame = 134U;
    msg.custom.assign("EODTKNTLVOFTRPCDXJZYGUCTYEWJVVLTSKCQDALFIHCNCQJVVQADNGUDAJEZBBKGDAXXKHTCFEFUMRZG");

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
    msg.setTimeStamp(0.0493755681667);
    msg.setSource(61443U);
    msg.setSourceEntity(28U);
    msg.setDestination(54834U);
    msg.setDestinationEntity(16U);
    msg.group_name.assign("NYHUOVZUSLZYMENHAJBFTINDKXELFD");
    msg.formation_name.assign("DOFHYFBSEZGRUHDENQTIVLVIFNUDKKATLESOFAWPAIGKWQWNXNSQIMKFSAHVJSJBEQOEBIETOOOXBKGPHUWPLMYBZHUYJRQDLFXCGIJQALSRNEKQRUJHJARWULZYXXVVMWDOCFMRBSQATVPR");
    msg.plan_id.assign("TPMFZXOXXGARGVYKOCCMOCCATMYIPHZLSBUYUMWHTIFPBAWFMROGOJUKLVBUXSQUTBHUGJKGRAWTJIQULSQCFIWNJVTXILFDQDDKBXZFREAMZGRMBZHYCKNIQNLQWUDWESGVPDMJEAYPCWAJSCOINNLYZDOYXJVXWNKVYRHXIBYSWSQEMBDZLPOURZA");
    msg.description.assign("CUHKGLSQSTRXCMJYLCIPMJMPQABAFHGLXORWXNPHJSNNZSVKOIZKCRRDDODSRDWETKDMQWIYAJZYHBJIOHUTSJZVYKXBXZXRKFUUGMBBNEIFAUDNWATYVYEYVNKZPANATMXUNJVMBIDOCVQOIDILUEOWKQCRGXMPBLYDZJQUWJTBEBQUTRSNHKFHVPVTJFXDFEMCQIZGWTVOGUOYCQLBEGH");
    msg.leader_speed = 0.131415359959;
    msg.leader_bank_lim = 0.0637325295658;
    msg.pos_sim_err_lim = 0.968736022832;
    msg.pos_sim_err_wrn = 0.838808629261;
    msg.pos_sim_err_timeout = 14167U;
    msg.converg_max = 0.181288110376;
    msg.converg_timeout = 51994U;
    msg.comms_timeout = 57256U;
    msg.turb_lim = 0.0345785751658;
    msg.custom.assign("EENMJZUSSJXAZFM");

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
    msg.setTimeStamp(0.629215277821);
    msg.setSource(35034U);
    msg.setSourceEntity(73U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("RRIGYNKFWWZVQLPUHHDERMCSDMQJFRQIMMDE");
    msg.formation_name.assign("HZVPGWCKUDCKORPTXSSEIJFJHDARMODGVRMGLJKKCEASQUNBWVNOKRFHBUEGNRUFDTJXSKQILKWZIVWLLNFXOFDFLYVEYNNYQPCQTPLFULZHZAMPTSDPZLXWAVGTTZEXJNSFRGZQDAMDYYTHEPBMEPXQHNGMECKXXOAIWJCPMQBFWYRJEIIUILEGHSCIJWSSVOALRVMUHNZYYTBVYOGBONO");
    msg.plan_id.assign("RJNELMWIYHZBCZADHOJVOQYPKZPLXINKEGPTSARQMGSQWXFZNKUUBUQXSNEWXLFHYSDZXTRAHIVOPOAQXQVBAPUEBBMCLGFRFKVRFMOTUCRXETFNPISJFBSVFFHVCIWQUGVOPNIYUYQNBESYHMCDUKSLZY");
    msg.description.assign("OJIVIUROSWNRCQDBEAPFQKABGJJOCNEPBMVOJXDCPXNTQWVKHLBDRWYIARDGVPMOEEVUHNMPKNCAKDUUYKKMXLL");
    msg.leader_speed = 0.562683532706;
    msg.leader_bank_lim = 0.940648263432;
    msg.pos_sim_err_lim = 0.460896935288;
    msg.pos_sim_err_wrn = 0.73264393284;
    msg.pos_sim_err_timeout = 62746U;
    msg.converg_max = 0.999986677099;
    msg.converg_timeout = 33626U;
    msg.comms_timeout = 42343U;
    msg.turb_lim = 0.962851533628;
    msg.custom.assign("ISBFLHAMAAJRTEMCTYUGFDMWRXQMCDDRDICYMQDFBUHXOCIOEGGKXFOJNUZFZZKFBOLXHTVHEDLDITISWLVMYUHUABAGZQTVGQSYDTZPJVFZUEBNPQTOGPUIWGWACYGTXRJWUPEKLWCROYKBVKTKLXPRJZJEEHLMCZZQUWLOCWCWIDYBGKROYKYHSENKEQIPCRVXPXNNJFLXBIXETSVRUWPIQFALOHJGJJVSMRAKYQSHVNPNSFHMAABZNQ");

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
    msg.setTimeStamp(0.578768286831);
    msg.setSource(48567U);
    msg.setSourceEntity(112U);
    msg.setDestination(25974U);
    msg.setDestinationEntity(208U);
    msg.group_name.assign("ZGPYSGFDRQYGLNMQCKTXXKIRLTFBCRKZDBFJJBPHZKOVGTUEHSRHCTNPELVFADDHDUPWISVQEPIFAHKNVQQXWJMKXPEKADZAIJDCLIUVIEOHPUCFKCBVZJMYMANMVSMSBFIGBOASSRGSQIU");
    msg.formation_name.assign("DNGFSUYIESBJNKUNWPZQVXYJGRIFGKGDYSFADVIJWQWYMOCHQNYCMRWUPELIBLKATAIFHYMPAAQGFUVIGXLNIVOBFHKOBPAPVSKOMKJDOUBIDCVWLLDQMKEQPLXRDDI");
    msg.plan_id.assign("SVIYMDHCGVELLUZAJEBGVVGJISRMEGUUTPIARQMOQMNJEYANZTQBRRFGKUJVYLPGWEZSMV");
    msg.description.assign("YUTIYMBJWJRFPXUIELBOJSWNM");
    msg.leader_speed = 0.791347292932;
    msg.leader_bank_lim = 0.919542196337;
    msg.pos_sim_err_lim = 0.161275786103;
    msg.pos_sim_err_wrn = 0.0912653458293;
    msg.pos_sim_err_timeout = 6307U;
    msg.converg_max = 0.599477120059;
    msg.converg_timeout = 22598U;
    msg.comms_timeout = 45652U;
    msg.turb_lim = 0.752876825569;
    msg.custom.assign("YAMPSIHICCAKILJNGTLXLLXIZGIJBZFPDRPOOTBFNRZETJIPNBLYSUOFFRZABGACWYSTWIXLKYU");

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
    msg.setTimeStamp(0.79646440229);
    msg.setSource(748U);
    msg.setSourceEntity(240U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(41U);
    msg.control_src = 23451U;
    msg.control_ent = 26U;
    msg.timeout = 0.700907217683;
    msg.loiter_radius = 0.402328263513;
    msg.altitude_interval = 0.856316160065;

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
    msg.setTimeStamp(0.82854595794);
    msg.setSource(6263U);
    msg.setSourceEntity(40U);
    msg.setDestination(48653U);
    msg.setDestinationEntity(146U);
    msg.control_src = 22664U;
    msg.control_ent = 152U;
    msg.timeout = 0.470982732957;
    msg.loiter_radius = 0.124262481553;
    msg.altitude_interval = 0.985905905059;

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
    msg.setTimeStamp(0.142880534431);
    msg.setSource(65329U);
    msg.setSourceEntity(236U);
    msg.setDestination(2853U);
    msg.setDestinationEntity(165U);
    msg.control_src = 50912U;
    msg.control_ent = 63U;
    msg.timeout = 0.711529864344;
    msg.loiter_radius = 0.365149481899;
    msg.altitude_interval = 0.365918729059;

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
    msg.setTimeStamp(0.659537982536);
    msg.setSource(61243U);
    msg.setSourceEntity(57U);
    msg.setDestination(23217U);
    msg.setDestinationEntity(127U);
    msg.flags = 74U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.600144463399;
    tmp_msg_0.speed_units = 227U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.869445173334;
    tmp_msg_1.z_units = 146U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.143264790841;
    msg.lon = 0.679150302335;
    msg.radius = 0.941425006542;

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
    msg.setTimeStamp(0.223866929369);
    msg.setSource(21890U);
    msg.setSourceEntity(219U);
    msg.setDestination(47530U);
    msg.setDestinationEntity(49U);
    msg.flags = 116U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.530926951405;
    tmp_msg_0.speed_units = 194U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.373042269624;
    tmp_msg_1.z_units = 187U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4289315893;
    msg.lon = 0.393357605203;
    msg.radius = 0.0588965411965;

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
    msg.setTimeStamp(0.771238856956);
    msg.setSource(63665U);
    msg.setSourceEntity(17U);
    msg.setDestination(59185U);
    msg.setDestinationEntity(214U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.392576027812;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.973082043326;
    tmp_msg_1.z_units = 6U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.177809008458;
    msg.lon = 0.212553195716;
    msg.radius = 0.979346282075;

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
    msg.setTimeStamp(0.00252401434724);
    msg.setSource(29806U);
    msg.setSourceEntity(211U);
    msg.setDestination(54755U);
    msg.setDestinationEntity(123U);
    msg.control_src = 6554U;
    msg.control_ent = 211U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 95U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.341055642108;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.122099455586;
    tmp_tmp_msg_0_1.z_units = 99U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.992949404445;
    tmp_msg_0.lon = 0.304318094033;
    tmp_msg_0.radius = 0.679424169312;
    msg.reference.set(tmp_msg_0);
    msg.state = 171U;
    msg.proximity = 237U;

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
    msg.setTimeStamp(0.796983541692);
    msg.setSource(56342U);
    msg.setSourceEntity(13U);
    msg.setDestination(61597U);
    msg.setDestinationEntity(131U);
    msg.control_src = 51470U;
    msg.control_ent = 151U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 197U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.851315873613;
    tmp_tmp_msg_0_0.speed_units = 194U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.74077735563;
    tmp_tmp_msg_0_1.z_units = 229U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0597066731398;
    tmp_msg_0.lon = 0.325820306398;
    tmp_msg_0.radius = 0.141300974128;
    msg.reference.set(tmp_msg_0);
    msg.state = 56U;
    msg.proximity = 34U;

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
    msg.setTimeStamp(0.679380736254);
    msg.setSource(52901U);
    msg.setSourceEntity(97U);
    msg.setDestination(754U);
    msg.setDestinationEntity(202U);
    msg.control_src = 21532U;
    msg.control_ent = 248U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 184U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.59083029394;
    tmp_tmp_msg_0_0.speed_units = 1U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.526085367412;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.945994618923;
    tmp_msg_0.lon = 0.808901901622;
    tmp_msg_0.radius = 0.824104497147;
    msg.reference.set(tmp_msg_0);
    msg.state = 241U;
    msg.proximity = 111U;

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
    msg.setTimeStamp(0.270073338958);
    msg.setSource(48503U);
    msg.setSourceEntity(223U);
    msg.setDestination(39846U);
    msg.setDestinationEntity(170U);
    msg.dist_min = 0.389084132023;
    msg.ax_cmd = 0.610588334825;
    msg.ay_cmd = 0.760753859584;
    msg.az_cmd = 0.153230522253;
    msg.ax_des = 0.896997899221;
    msg.ay_des = 0.823308999649;
    msg.az_des = 0.846045899389;
    msg.virt_err_x = 0.636382532916;
    msg.virt_err_y = 0.53970191111;
    msg.virt_err_z = 0.115545078358;
    msg.surf_fdbk_x = 0.258927180839;
    msg.surf_fdbk_y = 0.189097218793;
    msg.surf_fdbk_z = 0.868096024575;
    msg.surf_unkn_x = 0.862232411624;
    msg.surf_unkn_y = 0.117311515564;
    msg.surf_unkn_z = 0.740067592343;
    msg.ss_x = 0.471401844097;
    msg.ss_y = 0.699888696958;
    msg.ss_z = 0.715216341457;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HBUBGYHSLPNDFUQGPNNDGZVHCATGOKAIABSSLUFPNUOVOCABMIZEWMKMMZFDLXPVNTGAJPUXJVTNEFRPVFJQVYGSCBOQRKCFYTXLWGPCSZXPCRVMMJIRYVHWWGYTXYIMGCSYNZJPMQDBEZDDKCUJAHDEJQ");
    tmp_msg_0.dist = 0.465263470374;
    tmp_msg_0.err = 0.208731408649;
    tmp_msg_0.ctrl_imp = 0.529020485582;
    tmp_msg_0.rel_dir_x = 0.240015447905;
    tmp_msg_0.rel_dir_y = 0.113144273703;
    tmp_msg_0.rel_dir_z = 0.385079793331;
    tmp_msg_0.err_x = 0.523924733567;
    tmp_msg_0.err_y = 0.605660710706;
    tmp_msg_0.err_z = 0.995164133844;
    tmp_msg_0.rf_err_x = 0.0828030800654;
    tmp_msg_0.rf_err_y = 0.503366617202;
    tmp_msg_0.rf_err_z = 0.604094567887;
    tmp_msg_0.rf_err_vx = 0.512385668137;
    tmp_msg_0.rf_err_vy = 0.989405858027;
    tmp_msg_0.rf_err_vz = 0.622549072148;
    tmp_msg_0.ss_x = 0.879958467397;
    tmp_msg_0.ss_y = 0.409084193564;
    tmp_msg_0.ss_z = 0.145334844241;
    tmp_msg_0.virt_err_x = 0.314040577147;
    tmp_msg_0.virt_err_y = 0.250411828585;
    tmp_msg_0.virt_err_z = 0.528342494708;
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
    msg.setTimeStamp(0.248427317052);
    msg.setSource(3888U);
    msg.setSourceEntity(17U);
    msg.setDestination(17291U);
    msg.setDestinationEntity(52U);
    msg.dist_min = 0.617520088862;
    msg.ax_cmd = 0.0601112706438;
    msg.ay_cmd = 0.31527098418;
    msg.az_cmd = 0.957907344854;
    msg.ax_des = 0.761387039349;
    msg.ay_des = 0.768744300623;
    msg.az_des = 0.177003353943;
    msg.virt_err_x = 0.400797191518;
    msg.virt_err_y = 0.884216229594;
    msg.virt_err_z = 0.993415155461;
    msg.surf_fdbk_x = 0.765058606732;
    msg.surf_fdbk_y = 0.256575578336;
    msg.surf_fdbk_z = 0.283156773857;
    msg.surf_unkn_x = 0.845197002171;
    msg.surf_unkn_y = 0.160948035992;
    msg.surf_unkn_z = 0.239462427587;
    msg.ss_x = 0.541581085628;
    msg.ss_y = 0.197927467552;
    msg.ss_z = 0.733923748094;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MWUSDRIADEHHWUDZHKHBWCMWTTMIWASHURMKMHFLTEZSYGELIYXKUZIOYDLJFQVJFBGTNTDQECKOOEVXXUQCZZENGVGQCIQJEIAUGQKPYIVNDADZXYYWTCBGWLPNBMGPQKNKJSZKDSUSBXRPASNRHXYXQEXTILRPAZUT");
    tmp_msg_0.dist = 0.884373568774;
    tmp_msg_0.err = 0.615836108995;
    tmp_msg_0.ctrl_imp = 0.694961999206;
    tmp_msg_0.rel_dir_x = 0.0953460925848;
    tmp_msg_0.rel_dir_y = 0.84159773668;
    tmp_msg_0.rel_dir_z = 0.791671785709;
    tmp_msg_0.err_x = 0.605525404898;
    tmp_msg_0.err_y = 0.108236047516;
    tmp_msg_0.err_z = 0.883940449571;
    tmp_msg_0.rf_err_x = 0.85039115482;
    tmp_msg_0.rf_err_y = 0.98072489992;
    tmp_msg_0.rf_err_z = 0.804205653126;
    tmp_msg_0.rf_err_vx = 0.343076734826;
    tmp_msg_0.rf_err_vy = 0.19283483401;
    tmp_msg_0.rf_err_vz = 0.36813022965;
    tmp_msg_0.ss_x = 0.8334370563;
    tmp_msg_0.ss_y = 0.910404239803;
    tmp_msg_0.ss_z = 0.532958671591;
    tmp_msg_0.virt_err_x = 0.00157645012922;
    tmp_msg_0.virt_err_y = 0.859674564979;
    tmp_msg_0.virt_err_z = 0.836619824354;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.019966079126);
    msg.setSource(2567U);
    msg.setSourceEntity(48U);
    msg.setDestination(63969U);
    msg.setDestinationEntity(70U);
    msg.dist_min = 0.766463027112;
    msg.ax_cmd = 0.478233727383;
    msg.ay_cmd = 0.605849634015;
    msg.az_cmd = 0.77019887904;
    msg.ax_des = 0.0956334147339;
    msg.ay_des = 0.573994491196;
    msg.az_des = 0.694656974771;
    msg.virt_err_x = 0.262937367713;
    msg.virt_err_y = 0.788010785581;
    msg.virt_err_z = 0.0293436765879;
    msg.surf_fdbk_x = 0.691214900376;
    msg.surf_fdbk_y = 0.413539647791;
    msg.surf_fdbk_z = 0.0543587976692;
    msg.surf_unkn_x = 0.0272344328199;
    msg.surf_unkn_y = 0.383074295927;
    msg.surf_unkn_z = 0.878217038006;
    msg.ss_x = 0.416859482744;
    msg.ss_y = 0.997293947353;
    msg.ss_z = 0.807980692898;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BQTSFMRZURADKPPIPNGJOOQEZKZGAEUKRHJUHTZKGAMONEVIMPJFVLZWVQWWZVOVDMHQQCXTWMRBJKTIVDSGHWWLTLNICKWNJAQ");
    tmp_msg_0.dist = 0.857567717458;
    tmp_msg_0.err = 0.494614789242;
    tmp_msg_0.ctrl_imp = 0.242797236053;
    tmp_msg_0.rel_dir_x = 0.822999002685;
    tmp_msg_0.rel_dir_y = 0.802176392696;
    tmp_msg_0.rel_dir_z = 0.656338858635;
    tmp_msg_0.err_x = 0.839860435921;
    tmp_msg_0.err_y = 0.0351343301684;
    tmp_msg_0.err_z = 0.428145006712;
    tmp_msg_0.rf_err_x = 0.28842779077;
    tmp_msg_0.rf_err_y = 0.324783636499;
    tmp_msg_0.rf_err_z = 0.559074240598;
    tmp_msg_0.rf_err_vx = 0.537101056362;
    tmp_msg_0.rf_err_vy = 0.27133843496;
    tmp_msg_0.rf_err_vz = 0.117390609296;
    tmp_msg_0.ss_x = 0.291262092172;
    tmp_msg_0.ss_y = 0.152683322203;
    tmp_msg_0.ss_z = 0.800137182892;
    tmp_msg_0.virt_err_x = 0.683429916547;
    tmp_msg_0.virt_err_y = 0.750523175182;
    tmp_msg_0.virt_err_z = 0.787438679;
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
    msg.setTimeStamp(0.728896774288);
    msg.setSource(48548U);
    msg.setSourceEntity(171U);
    msg.setDestination(42506U);
    msg.setDestinationEntity(223U);
    msg.s_id.assign("KBCXUFHGRQXHRDONWLUECPHRRGKOFQWCTVCKBYDFSMPVCZKYDATSGZOIAMVGKBAHVSQHZMLRJLZQVFAU");
    msg.dist = 0.99496326887;
    msg.err = 0.947372677909;
    msg.ctrl_imp = 0.247546453241;
    msg.rel_dir_x = 0.580766353227;
    msg.rel_dir_y = 0.820795542486;
    msg.rel_dir_z = 0.43401372428;
    msg.err_x = 0.66243087741;
    msg.err_y = 0.203399174015;
    msg.err_z = 0.324469922637;
    msg.rf_err_x = 0.246003250558;
    msg.rf_err_y = 0.668827996043;
    msg.rf_err_z = 0.333188743218;
    msg.rf_err_vx = 0.466845197653;
    msg.rf_err_vy = 0.674051231191;
    msg.rf_err_vz = 0.396098619609;
    msg.ss_x = 0.386333083437;
    msg.ss_y = 0.57932594191;
    msg.ss_z = 0.561190804432;
    msg.virt_err_x = 0.0648265409944;
    msg.virt_err_y = 0.771378870786;
    msg.virt_err_z = 0.448319039628;

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
    msg.setTimeStamp(0.223016770918);
    msg.setSource(40852U);
    msg.setSourceEntity(206U);
    msg.setDestination(1759U);
    msg.setDestinationEntity(147U);
    msg.s_id.assign("BFORMNRKFBLYOPWZYBAZIEDKZXMKKSCAJKHBRUFQWHQCXSTMTDSEVRLRFXLQNLENTBPMMYIXIEJCWGZSRRZYGBBDRLDNDETQGCJSSYGKVOFEAOYCBUMSYQLFDLLEVDTISZKGSIPFUOHOZIFHATJJXXJTDUTDFGPAYVTQHKTWLPACQJUHI");
    msg.dist = 0.539176529592;
    msg.err = 0.20042564858;
    msg.ctrl_imp = 0.651190690296;
    msg.rel_dir_x = 0.773974041914;
    msg.rel_dir_y = 0.762759447305;
    msg.rel_dir_z = 0.334058289557;
    msg.err_x = 0.528702244842;
    msg.err_y = 0.561096657807;
    msg.err_z = 0.939662732923;
    msg.rf_err_x = 0.672376667577;
    msg.rf_err_y = 0.521143692984;
    msg.rf_err_z = 0.148754819985;
    msg.rf_err_vx = 0.846087186882;
    msg.rf_err_vy = 0.0389027258516;
    msg.rf_err_vz = 0.273585362563;
    msg.ss_x = 0.132987698735;
    msg.ss_y = 0.655438295289;
    msg.ss_z = 0.270561499415;
    msg.virt_err_x = 0.272151654123;
    msg.virt_err_y = 0.423472416481;
    msg.virt_err_z = 0.981930900568;

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
    msg.setTimeStamp(0.341037412853);
    msg.setSource(14407U);
    msg.setSourceEntity(167U);
    msg.setDestination(43298U);
    msg.setDestinationEntity(217U);
    msg.s_id.assign("SGBRVZJVXIQHBCYHJTYOYQAMMBUVRNEBOWLTKDUFHXC");
    msg.dist = 0.114801042346;
    msg.err = 0.821009773863;
    msg.ctrl_imp = 0.169788872862;
    msg.rel_dir_x = 0.156497866837;
    msg.rel_dir_y = 0.00237201818212;
    msg.rel_dir_z = 0.484479493246;
    msg.err_x = 0.597222762245;
    msg.err_y = 0.558832219935;
    msg.err_z = 0.782061181188;
    msg.rf_err_x = 0.271678534016;
    msg.rf_err_y = 0.519224267761;
    msg.rf_err_z = 0.69155719297;
    msg.rf_err_vx = 0.157637450972;
    msg.rf_err_vy = 0.779554134899;
    msg.rf_err_vz = 0.0748261351151;
    msg.ss_x = 0.350543821522;
    msg.ss_y = 0.720486389188;
    msg.ss_z = 0.763513223128;
    msg.virt_err_x = 0.0266646810578;
    msg.virt_err_y = 0.152184113475;
    msg.virt_err_z = 0.877023114121;

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
    msg.setTimeStamp(0.071896221943);
    msg.setSource(63134U);
    msg.setSourceEntity(185U);
    msg.setDestination(7022U);
    msg.setDestinationEntity(247U);
    msg.timeout = 54365U;
    msg.rpm = 0.0488900669346;
    msg.direction = 88U;
    msg.custom.assign("GSJBJJPICCUGRRXSADHMVRJYBIOLMYFIRWXMWKHVSWMDHZCUDERFIEOPFBCGTWZTBCXJYWKLWTKVVUHISIWBPLJOTPUFCGRTBMGWAMZQQBKDJKCQJLNEUBNCEHYKYLOAVYVGOXTZKACKLOIDJZGHTOYFMAPOKMHCGRFMQNDUETEPMWFQAYAPDNZHEUDPYNGRNDBUAXSFIQZAINESTONFZLHEA");

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
    msg.setTimeStamp(0.300953743947);
    msg.setSource(6591U);
    msg.setSourceEntity(154U);
    msg.setDestination(31248U);
    msg.setDestinationEntity(24U);
    msg.timeout = 35614U;
    msg.rpm = 0.239438094983;
    msg.direction = 27U;
    msg.custom.assign("SAEZGHJMXUVDXXAHEOQTRVBKQFWOELRPLKGFYNBVHMBECTKKPVUMMZVFSZZIYIJNHILGPOCVDOTCFOJJTGSHOSXVAGLEILCXFPJSZQRYCHATNYBGRJHHTNMFOYUDLQXWJCAPXDGJFEYPLDIKWWEDURPZUNIUJYBAKGCEIWQRLWHQDVHEWFMKDVNWPXSYOSAIWUUNNZOTBXSTDRCLZAYWIDZQBUQKAJGMKLTBINQYXPRSMFBF");

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
    msg.setTimeStamp(0.3443469451);
    msg.setSource(21724U);
    msg.setSourceEntity(0U);
    msg.setDestination(58318U);
    msg.setDestinationEntity(130U);
    msg.timeout = 51160U;
    msg.rpm = 0.0545750685314;
    msg.direction = 125U;
    msg.custom.assign("FKCTZBBAXUOUWHMZLBFJVEXU");

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
    msg.setTimeStamp(0.70707851596);
    msg.setSource(12445U);
    msg.setSourceEntity(116U);
    msg.setDestination(34187U);
    msg.setDestinationEntity(95U);
    msg.formation_name.assign("AKXUYJJWMJGBUDGVOFSEJZKFXCVSWZIGCSYXEDEAOIKADRYMGRMPEHHGZEFHTGRPDZRSYEQMIDAJHWGGEDMTHJUOCBNOWCSXHTBNWLPIAMOCYAZPDPFKLPCETQFLWK");
    msg.type = 213U;
    msg.op = 163U;
    msg.group_name.assign("PGFJJJQZLRPALNMVLZWBLXHDDISVQKKVNTDOOYI");
    msg.plan_id.assign("WTRJETZGXKELMYDCPLEPFUAXJVXLSYFGBKBCLKPRGVWGGPXUPDXKAFFYULMHCSCIQYQWXIEZUJGEMMAJQCYTZVHUWODNDBHZSJWVUKMOFOZCYOEZPOYNEYSPMCRZJUTNAOBHNACDUFQPSNQTZROJXECULARIQITBFBWTJIXSHXRMRUGIKVNVDDCQZAFIXWZPQDQMFNEIHRGSGHTWBHMJSDAOLRKGDTERHNTAVVYKHLVYBL");
    msg.description.assign("AVCFPNAFCOWMVSIZNLHUNQADIYINCQTYPXMSAATHWUGDHJPZBKRRROIYBHVQETQEBFLWGAFELIFZGCVUMVKCMSGOXXGGATMOGHSLJGJQYDEYQEBHORYYRXOLNFOJPZUZTLVAHKKPBLWBIGEATMORFDXCVRSTJCXFCM");
    msg.reference_frame = 44U;
    msg.leader_bank_lim = 0.530193809187;
    msg.leader_speed_min = 0.663849255319;
    msg.leader_speed_max = 0.367572813398;
    msg.leader_alt_min = 0.422939645732;
    msg.leader_alt_max = 0.840233721023;
    msg.pos_sim_err_lim = 0.403266327387;
    msg.pos_sim_err_wrn = 0.368926601757;
    msg.pos_sim_err_timeout = 49213U;
    msg.converg_max = 0.802265588781;
    msg.converg_timeout = 4989U;
    msg.comms_timeout = 6401U;
    msg.turb_lim = 0.263899565063;
    msg.custom.assign("JAMZNCKDVNGIJUXHTSAZL");

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
    msg.setTimeStamp(0.581193181446);
    msg.setSource(11491U);
    msg.setSourceEntity(169U);
    msg.setDestination(56410U);
    msg.setDestinationEntity(159U);
    msg.formation_name.assign("GRRLDKPFLHUJKESTPOZHEXZALQRUYFMDGBAFCHUAUHHTVWFKVRGGXKYPCXLYCZVJKFSZBXIMSIYODJFRJOXSAQCITWTVJOJHMEDODWBDWRJTZWBWLJCTNZGDIFQYNKZSVVXUAYFAYJHKWCRZODLVIGBICG");
    msg.type = 179U;
    msg.op = 205U;
    msg.group_name.assign("KYEXTNURIFGNZXIMIKYWWKRPGBDDPRWLFDHHQAXMJCYTPRSVWJILJALZVKOZYBYNWKUMRUOHNOSVGHYFUGPCEQVYBFJXZDHOCDIOMAAESWBKQCBFKJQUTYQUYBBNMFCQFMYAWWVXZUVLHMAJTJOPEHLTBISECFUDWHGSZKTXDAUTEJTQFCQPFMPKMSCEONNWSLPSXHZRZLSIMOKGNUPB");
    msg.plan_id.assign("FVUMPVFCIULWBJFZXPKIQVRWOSXRIKRNFHNHSTPTYKJRZJYJXBBISAGTOPLQLNGNWBSSHUCYWWNDGOUJXXTLCGOTUFGNFSLBYYCQIDKLZQBIEEEKADACIAZAGJOHEUUCHXEBKYFVJHMTOEABVQEARKZWWMXRHGEAXPWJTITOEVFRYLWRYLCPWDGSTMNIHYQXZOFMMOGPAONMBNZSVD");
    msg.description.assign("HTNOPTJGVASQRTLRDCERHIATEEWNPKXHUBDVDJCZZRAMFHSITEALAWSXJXGTSOACQTFJMZUQBVKFJAINBZADHXOFEBSCJHVWAERPDLFUEWVMGFQLYPKCMZPRPMKOLKMPRMBQTUKHDRGYJDWBIUMTWJIPKTGSSPZYZYJLCVKRJULSECXMGDBGSUOUFLUZFQFGY");
    msg.reference_frame = 180U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40029U;
    tmp_msg_0.off_x = 0.484221809287;
    tmp_msg_0.off_y = 0.696843792877;
    tmp_msg_0.off_z = 0.336330910284;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.173750287283;
    msg.leader_speed_min = 0.887995947701;
    msg.leader_speed_max = 0.430325422153;
    msg.leader_alt_min = 0.151503418374;
    msg.leader_alt_max = 0.266833601079;
    msg.pos_sim_err_lim = 0.0843349277457;
    msg.pos_sim_err_wrn = 0.26620326928;
    msg.pos_sim_err_timeout = 14076U;
    msg.converg_max = 0.569914511802;
    msg.converg_timeout = 41762U;
    msg.comms_timeout = 34469U;
    msg.turb_lim = 0.178729801986;
    msg.custom.assign("IZKSJPQTCICLYGURIPCFWNZSZUFSFJDFLYRPGJAETBYHKKDXTOSNPAEBDJALYMYXVGNHQXUZCWQAHJMOBKGDXULWZURMDDRSRWFIAUEC");

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
    msg.setTimeStamp(0.00843007104515);
    msg.setSource(6066U);
    msg.setSourceEntity(96U);
    msg.setDestination(14817U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("LTYOGRZINJBCRNDKEFSTGSSZIEFXBQKHUZTLGEUZCXGNCMDYMVWPDKCGODBRPBFSOHAVARGECFRWCJXIUSPEJXWVGQZRUHOWBKHDKKXXVMFDEYQTOUJWXPKMGBBUDLQXNKQCILJQDZLQMFISHSTVAATTYINTWKJUIWFMWLYHGBAVZXZTNOYRECYULHRFFAVOJIVLBZNMCNPOMIAQPNDSRSWKEJOMUPPYVCJPRXEFM");
    msg.type = 74U;
    msg.op = 25U;
    msg.group_name.assign("IEKBSGRAGMHGDAZOMPZZUXHUQLHOVOGSQYFRUDEXFEBSUMHBHJHTAGHUJBEBPEYIVWLDWAVLRWDGIFRRYBAXKVGCLRNAKMQANGYZJOCPJCOILCLFZFRKCSODKUWTSNBNKVYTKPOLOFCPYJNRETIGBTEZVMMXUNAIPRLTWWJACNDDKWOZCPJUVXYFURJFQMTIMSBLEHJHUJVQEPCPZ");
    msg.plan_id.assign("VNGIXQOWPIIJABIRKLHNOKMWEDCYYKCEMLLVLTHPDVHVZDXSEZHVMBUHRAYAKVXBBJDIYQJLXESRPQTRJSOPYZCYNJCALBCRUHGAEZNTMBWQCCIFLYQBQGYABGWUCXIPDRJZAGDGEUTDUPRZZMVMQGVOHLNTJEKXEJMHSMWONXRXNIFHYJKKMTRGDOSTAUKTXFP");
    msg.description.assign("JKLYVCZYRUTQGIFUQVIJEBVLUIFDGWVBSFPYQDAGLEHJTGGWSOCVYNNLDXLOFTBRMKDDOGBRURYPZPMNXHHENHAGIFWZTCPBMMQTUEUQYJWKCSOJSQEJKBUCJFSZGWKRSKGYTMMCTKXKPIDTUIHAZSSYLSHDWKHVDTMLNZPPMZARPAAFOLLOYZPOJERNCCORNFOERVIADEMFTRLB");
    msg.reference_frame = 138U;
    msg.leader_bank_lim = 0.385728397839;
    msg.leader_speed_min = 0.2603673119;
    msg.leader_speed_max = 0.0144353704521;
    msg.leader_alt_min = 0.401008025753;
    msg.leader_alt_max = 0.183104649646;
    msg.pos_sim_err_lim = 0.913512463727;
    msg.pos_sim_err_wrn = 0.804137027269;
    msg.pos_sim_err_timeout = 32769U;
    msg.converg_max = 0.601584317759;
    msg.converg_timeout = 3724U;
    msg.comms_timeout = 40902U;
    msg.turb_lim = 0.124380283462;
    msg.custom.assign("CCSSTCTAODWRLVXFCCAFMZNBLXQREQQHIPNNOXS");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.680922036016);
    msg.setSource(399U);
    msg.setSourceEntity(38U);
    msg.setDestination(34251U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 249U;
    msg.error_count = 174U;
    msg.error_ents.assign("CTBKZSXYNLXMCPZURZYRKEQGOLAADYWGDXPNLISYSXTFRITTCMHRUWHBHXBAFRULHFNDRZVPXWMYAQCJDYE");
    msg.maneuver_type = 3228U;
    msg.maneuver_stime = 0.688511103452;
    msg.maneuver_eta = 43369U;
    msg.control_loops = 2928563462U;
    msg.flags = 169U;
    msg.last_error.assign("JCLFNKAWJVOWEUGMOGMLGAPXJCYJWNWTLMSLXPABYFZAOOXHHZDABTHUSNUDUN");
    msg.last_error_time = 0.0803193323269;

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
    msg.setTimeStamp(0.394068442694);
    msg.setSource(61324U);
    msg.setSourceEntity(51U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(154U);
    msg.op_mode = 113U;
    msg.error_count = 98U;
    msg.error_ents.assign("KCEZQWCXSRUBALWOFWCAHGTQTANQAMEODLJNYTRIJNHDGLFDYFRWSKTTKIMMGFLVEEYDYVXZKGQKJDUM");
    msg.maneuver_type = 27479U;
    msg.maneuver_stime = 0.657381907912;
    msg.maneuver_eta = 5211U;
    msg.control_loops = 1952147014U;
    msg.flags = 162U;
    msg.last_error.assign("OMVMFHZDEBARBQHFPVXOIHQDLCTHKNCGFTITVCEKFRPWSLMWGKYCZSAZGSSEEXFJSUVGYWDWNLTJVMWODCUJXCZRJGQYHNAQUDPSZJKHUEFWMLVUHBXJYHSBNRXBLMPBTZYAQLXGSTQPKXRXONKNALGOUKRLAEMYGWUVVNKPWUCLQAQNOBJ");
    msg.last_error_time = 0.844715752171;

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
    msg.setTimeStamp(0.0550132526029);
    msg.setSource(57672U);
    msg.setSourceEntity(191U);
    msg.setDestination(4285U);
    msg.setDestinationEntity(55U);
    msg.op_mode = 241U;
    msg.error_count = 47U;
    msg.error_ents.assign("CAQSJJPQWTJMZHPRBRBDPOTXNHEQLGFSXXMOKOFZEZQNVQDPSURGSAWJF");
    msg.maneuver_type = 51507U;
    msg.maneuver_stime = 0.901761608853;
    msg.maneuver_eta = 32796U;
    msg.control_loops = 4085226665U;
    msg.flags = 123U;
    msg.last_error.assign("EJJOFMRGRBXUQKORJMLTANTTWLZURUYYUPXKCVQVCEWYFRSAZKKDYQWODQLOFMOLSHFVJTNOXHAINLIMKGTRENEPUHCUUKXYFHIXLUCATPOPTVDPHXIYQBVIABZKEBXNGWRUZOIQPVBBVFYCCQNLSDGWYHWFFANCXPDBSQLBJGYVIKHZEFCJZAJSNGJDTGWDASMEESLQHJB");
    msg.last_error_time = 0.642878549307;

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
    msg.setTimeStamp(0.677140873013);
    msg.setSource(61816U);
    msg.setSourceEntity(200U);
    msg.setDestination(21349U);
    msg.setDestinationEntity(43U);
    msg.type = 166U;
    msg.request_id = 42522U;
    msg.command = 92U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6444915396;
    tmp_msg_0.lon = 0.462889475557;
    tmp_msg_0.speed = 0.780118103922;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.duration = 15940U;
    tmp_msg_0.sys_a = 11273U;
    tmp_msg_0.sys_b = 18449U;
    tmp_msg_0.move_threshold = 0.881179444241;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14040U;
    msg.info.assign("AJQCFKTHWCBIVUFKHOOFMNFPGIARHZNCQBQMKFRGCYUXRXJHOHFUBNEEWTRLPQPZPUZFVQFGIEYGMUZCTMXMWE");

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
    msg.setTimeStamp(0.565621582541);
    msg.setSource(32748U);
    msg.setSourceEntity(227U);
    msg.setDestination(19956U);
    msg.setDestinationEntity(103U);
    msg.type = 117U;
    msg.request_id = 9134U;
    msg.command = 210U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.561557722493;
    tmp_msg_0.lon = 0.581152965819;
    tmp_msg_0.speed = 0.565990421063;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.duration = 41122U;
    tmp_msg_0.sys_a = 41570U;
    tmp_msg_0.sys_b = 35210U;
    tmp_msg_0.move_threshold = 0.993289232459;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17443U;
    msg.info.assign("HVXIYVTWQHCMQBPBZNKPFQUAVAMOOKPOKEGRBHZMOTTXJZFFFQDWEGCRLODOPVGNBHBLXMTGVEIBPFNLCRLQCIVEGFSCKY");

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
    msg.setTimeStamp(0.214064310335);
    msg.setSource(63009U);
    msg.setSourceEntity(209U);
    msg.setDestination(60327U);
    msg.setDestinationEntity(136U);
    msg.type = 149U;
    msg.request_id = 5941U;
    msg.command = 245U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 19473U;
    tmp_msg_0.lat = 0.590910878332;
    tmp_msg_0.lon = 0.861268403758;
    tmp_msg_0.z = 0.00307697292982;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.pitch = 0.463252271364;
    tmp_msg_0.amplitude = 0.973102044356;
    tmp_msg_0.duration = 62224U;
    tmp_msg_0.speed = 0.851569595999;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.radius = 0.779549685861;
    tmp_msg_0.direction = 202U;
    tmp_msg_0.custom.assign("CCTZGBIONJVSHGREUIEICQCFDPLLVNPVFNLKIWIWOLUFAOIBQDCULBHYDHQFUYTOMMMUSKQYRMHVANAPYFNQATXGWC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40371U;
    msg.info.assign("QIZPXJGDRKONUXOZVWHNDXVRODIVHYNQUPCALXUIFGYHKFHMBTAKQLHJMBFUFIPTAQOCULFYMGBEVTSDPDQAIZJRSRKCIMYVSLYOPSKXZPT");

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
    msg.setTimeStamp(0.0182803971347);
    msg.setSource(63346U);
    msg.setSourceEntity(63U);
    msg.setDestination(24867U);
    msg.setDestinationEntity(210U);
    msg.command = 168U;
    msg.entities.assign("TUJWPODSGCHEOJUZDGQRVYJMFZKONMNCVSTBDXPXZRADHNBUMBFKNYDFUDJDIKFQIPOEQTTWNPLNYMUSLXECSTUNISPWBJMLFWJLXCQWZMCVYAFJDGYVHPGCEEQOSBRXZQVRHKTAXMIGUVMRRBBLEYSFAZXCMIGCRSEAVUYYKGNHNNJRWTLKLIA");

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
    msg.setTimeStamp(0.99647583634);
    msg.setSource(17205U);
    msg.setSourceEntity(66U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(57U);
    msg.command = 197U;
    msg.entities.assign("TQHYVKVOBNMWGTQBLEFUAIUYHJVTSMRNZRWHEEATHZADAWSGLTFDRHBQPNRBCWEZJVOUOJPQCHCUCIFDCMSSJYIOXLKXQHYMPWIIDQBNZMXGSPXNBYGAJSWKNEAQSFDJFVUOFFAYWDWEICMVAJLZVNORXZBEDKQUUPHHUBXKPOURXLNGULPHOLMIPTRKEBISKWGEDCNSXLXRXTZMRTCTVKYROVEJFVGQCI");

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
    msg.setTimeStamp(0.767340766502);
    msg.setSource(29189U);
    msg.setSourceEntity(153U);
    msg.setDestination(23231U);
    msg.setDestinationEntity(106U);
    msg.command = 89U;
    msg.entities.assign("IDJRSRIWLTVNHRWUNXRSUWPJTADSHQZAKKEULHWZOOKIQLZMPAEHBHDSZITLKLEQDOJHULF");

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
    msg.setTimeStamp(0.111183615319);
    msg.setSource(6888U);
    msg.setSourceEntity(112U);
    msg.setDestination(6724U);
    msg.setDestinationEntity(76U);
    msg.mcount = 26U;
    msg.mnames.assign("GSUASWERDCRHKSOYMMGNLGZWBVPYUJTSIPUFCFLKYNIYWNLFPZASMJLBNLDFCVOZLACKZQHUDPSYNQATJGGUUFDWDGJNKQOUCXXTVVKRRLRCMCMHLEBW");
    msg.ecount = 88U;
    msg.enames.assign("OGYNHSFUQQHCEELVRXNKWNFDDZRANFCWEGFAIPZGQKASNHUHADQVUALPPLTCHWUNJIWLBIETKGXOCPJVCSCTXBJQO");
    msg.ccount = 6U;
    msg.cnames.assign("VVSKFIHAJRYWTTBJFZXGXPEZOGBUKGLJBONZCDOWELITMRMAFRJGQTABABIJGPEBUXJCGYYOLZMYKITLZHMQNTNHMENYWXSNSXPEVYQLXHPADNRRWBFXUMCZSGVDUQIMSPVSGKUCNSCURKOXOFLJDQYCLBTPCARHIZDGSCQJVVJMFEARUAQZAPHODYVWSFXTVUANHWFIENRWOZWUYBELDDEQPKVKKHNMPLODGHODIYWIKXZ");
    msg.last_error.assign("SJIGMZSWVQZQEBYIWZATUYXRTJJKHDCPDRESFHNARRGSZOCGMKFJQHQBVQHNKZVXLDCPMQJUBDOVODKINJRNSKAAXFQNOBORUPXQLLCAQFYZUCWKPGMGTBIXODMDWNFSXULDBTSRXAQXTYYFLNIJIGFAXVVFLWHEHIWKDRJWWTLUOVSILVGFKVGMPOEDABHICPNCESTMHZNPCVYYBPYRMWEOEBRAYUTLZGUKABP");
    msg.last_error_time = 0.610942074561;

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
    msg.setTimeStamp(0.828232046326);
    msg.setSource(37367U);
    msg.setSourceEntity(7U);
    msg.setDestination(48092U);
    msg.setDestinationEntity(37U);
    msg.mcount = 114U;
    msg.mnames.assign("OSLUHIMWWQYKUXODUHYQCACAIEBVXYKQSFQSRULVRRQKDYEMEJBMEJEZSAMLCQXJGHGPGNINKKDBSDSLNTZFHFMLXKDPOSFVVILDALNACOJMWTGSCIUJAEYDQVOIWGHJZGNAUFPTIRVQEAVKHNYTMWDYNOZRRPUJNPLMXFTRBMBSKTXVZCWHLRNCZMVJGZPXXZBCINTFWYUUAHTKOBYBFQOBPIKIEZPDWPGLYGWSHRTBFWADHZ");
    msg.ecount = 216U;
    msg.enames.assign("YLJBIRMUUEBXXAFIKTTFAWYPAKRRYTFELCWJOXKSWLVCIJYSUKGTDRWJSNQNSBCPHRZWQDANCXFLNENBEVOZGRNQRUILFKFGGVTXQOIZJACLYLZVLHRDJMCKAMZUTBVUFLPPXSQSQVYHZENBJXBDUPUMUNTCKOQIYPZSWYAPTJEIRVHYKXZOWFDEGWDKXPHBZLNGOMEFMZSMOHVYPVBPUOQDSEHGHITQDGTOCAJSCDIAKCFWGWXJMAHRMDMGNI");
    msg.ccount = 230U;
    msg.cnames.assign("JJGAVSEDFVXFLSLEOWXMUVCFIGYBENOBHRQXYIZNPZYBPF");
    msg.last_error.assign("LYGICCKUFYGUVJMTBCDKALVLTZUZROGUPODSPNYLYHSIJUPLVPEUBFFBPGQZFOZGAHXDNCNRKMWYDSXQGFCDDMSBUFWVKCPOQVSHZXGA");
    msg.last_error_time = 0.874247882953;

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
    msg.setTimeStamp(0.414138864615);
    msg.setSource(25494U);
    msg.setSourceEntity(233U);
    msg.setDestination(64385U);
    msg.setDestinationEntity(48U);
    msg.mcount = 146U;
    msg.mnames.assign("FIQYIUNAVTRFSYCHOOIAUVARDGYHRXWRGVFTJLCVXPVUZJXLJJBZDQVZCNSSKANGDKPWHTWZDWVAIZEOTOBPLMPHCOGLKJKBBDACJKZKPESZUGIBFNOQSADBPCOUBMBFARD");
    msg.ecount = 25U;
    msg.enames.assign("XZKMXNSPNZLZKUBCDXOEMZLDLFMGK");
    msg.ccount = 50U;
    msg.cnames.assign("QJDAUBFIGERAENFREWSALJT");
    msg.last_error.assign("PTYFRIVYIABSKVCZKKUOOQHMIQXGKEJQBJEKBOACEJDYJBHGFVHQKWDOMWTAQJRSGJHUPECYRYXYLNZSMNAPNDRIKLLYZIEMOZFGWUWCOMXFLEBHARTTZNTLCPSQSWHDPJBJEXPIOSVFFTNMTXBILCKCFSCBYXOEFGVNPQOEWJAEWTLASQRRDG");
    msg.last_error_time = 0.535191221447;

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
    msg.setTimeStamp(0.497647554556);
    msg.setSource(22415U);
    msg.setSourceEntity(14U);
    msg.setDestination(56840U);
    msg.setDestinationEntity(194U);
    msg.mask = 139U;
    msg.max_depth = 0.636185292905;
    msg.min_altitude = 0.0410528659747;
    msg.max_altitude = 0.830772061979;
    msg.min_speed = 0.578557373736;
    msg.max_speed = 0.116905140677;
    msg.max_vrate = 0.00830042449618;
    msg.lat = 0.0674887374099;
    msg.lon = 0.23565048737;
    msg.orientation = 0.797611448116;
    msg.width = 0.425507892296;
    msg.length = 0.539404365867;

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
    msg.setTimeStamp(0.407298687795);
    msg.setSource(13697U);
    msg.setSourceEntity(10U);
    msg.setDestination(54940U);
    msg.setDestinationEntity(180U);
    msg.mask = 246U;
    msg.max_depth = 0.0561074129078;
    msg.min_altitude = 0.290281752884;
    msg.max_altitude = 0.028148538161;
    msg.min_speed = 0.44902297298;
    msg.max_speed = 0.206457293652;
    msg.max_vrate = 0.0643929062098;
    msg.lat = 0.410546214793;
    msg.lon = 0.0094006560512;
    msg.orientation = 0.612130073304;
    msg.width = 0.906458430505;
    msg.length = 0.157148599112;

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
    msg.setTimeStamp(0.143227894382);
    msg.setSource(55292U);
    msg.setSourceEntity(131U);
    msg.setDestination(52165U);
    msg.setDestinationEntity(59U);
    msg.mask = 126U;
    msg.max_depth = 0.969140350848;
    msg.min_altitude = 0.370093920056;
    msg.max_altitude = 0.702554664073;
    msg.min_speed = 0.388367619774;
    msg.max_speed = 0.643292788671;
    msg.max_vrate = 0.247370955496;
    msg.lat = 0.407989029472;
    msg.lon = 0.383158168252;
    msg.orientation = 0.30470866533;
    msg.width = 0.480066070449;
    msg.length = 0.609282977753;

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
    msg.setTimeStamp(0.462585726924);
    msg.setSource(20671U);
    msg.setSourceEntity(161U);
    msg.setDestination(14051U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.12647140612);
    msg.setSource(41431U);
    msg.setSourceEntity(73U);
    msg.setDestination(39533U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.191780158436);
    msg.setSource(17386U);
    msg.setSourceEntity(177U);
    msg.setDestination(44478U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.449994047874);
    msg.setSource(4172U);
    msg.setSourceEntity(111U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(104U);
    msg.duration = 22941U;

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
    msg.setTimeStamp(0.452207785771);
    msg.setSource(51363U);
    msg.setSourceEntity(119U);
    msg.setDestination(52130U);
    msg.setDestinationEntity(157U);
    msg.duration = 32969U;

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
    msg.setTimeStamp(0.262729951655);
    msg.setSource(32782U);
    msg.setSourceEntity(44U);
    msg.setDestination(20941U);
    msg.setDestinationEntity(32U);
    msg.duration = 49913U;

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
    msg.setTimeStamp(0.705677903786);
    msg.setSource(20036U);
    msg.setSourceEntity(22U);
    msg.setDestination(309U);
    msg.setDestinationEntity(70U);
    msg.enable = 96U;
    msg.mask = 3685612896U;
    msg.scope_ref = 1320792660U;

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
    msg.setTimeStamp(0.375680541428);
    msg.setSource(59469U);
    msg.setSourceEntity(170U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(108U);
    msg.enable = 17U;
    msg.mask = 2099766497U;
    msg.scope_ref = 349806331U;

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
    msg.setTimeStamp(0.387526834501);
    msg.setSource(58620U);
    msg.setSourceEntity(216U);
    msg.setDestination(56922U);
    msg.setDestinationEntity(12U);
    msg.enable = 53U;
    msg.mask = 4228715489U;
    msg.scope_ref = 4128578749U;

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
    msg.setTimeStamp(0.0188769309608);
    msg.setSource(40377U);
    msg.setSourceEntity(4U);
    msg.setDestination(60490U);
    msg.setDestinationEntity(227U);
    msg.medium = 198U;

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
    msg.setTimeStamp(0.582749595466);
    msg.setSource(18019U);
    msg.setSourceEntity(127U);
    msg.setDestination(54236U);
    msg.setDestinationEntity(139U);
    msg.medium = 107U;

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
    msg.setTimeStamp(0.980248863992);
    msg.setSource(44801U);
    msg.setSourceEntity(113U);
    msg.setDestination(53091U);
    msg.setDestinationEntity(62U);
    msg.medium = 39U;

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
    msg.setTimeStamp(0.643238086404);
    msg.setSource(43408U);
    msg.setSourceEntity(48U);
    msg.setDestination(3895U);
    msg.setDestinationEntity(15U);
    msg.value = 0.40208687979;
    msg.type = 221U;

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
    msg.setTimeStamp(0.157766870771);
    msg.setSource(27582U);
    msg.setSourceEntity(160U);
    msg.setDestination(45282U);
    msg.setDestinationEntity(129U);
    msg.value = 0.914445394344;
    msg.type = 81U;

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
    msg.setTimeStamp(0.254763665185);
    msg.setSource(10022U);
    msg.setSourceEntity(143U);
    msg.setDestination(1076U);
    msg.setDestinationEntity(140U);
    msg.value = 0.920588608061;
    msg.type = 55U;

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
    msg.setTimeStamp(0.254649873011);
    msg.setSource(25187U);
    msg.setSourceEntity(44U);
    msg.setDestination(12123U);
    msg.setDestinationEntity(67U);
    msg.possimerr = 0.846254688773;
    msg.converg = 0.0226687117761;
    msg.turbulence = 0.614514227507;
    msg.possimmon = 190U;
    msg.commmon = 7U;
    msg.convergmon = 197U;

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
    msg.setTimeStamp(0.277718469002);
    msg.setSource(14307U);
    msg.setSourceEntity(170U);
    msg.setDestination(21552U);
    msg.setDestinationEntity(105U);
    msg.possimerr = 0.411266072114;
    msg.converg = 0.345017125429;
    msg.turbulence = 0.00654361101953;
    msg.possimmon = 161U;
    msg.commmon = 201U;
    msg.convergmon = 101U;

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
    msg.setTimeStamp(0.553862983018);
    msg.setSource(49526U);
    msg.setSourceEntity(53U);
    msg.setDestination(14049U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.84785726868;
    msg.converg = 0.999178885157;
    msg.turbulence = 0.557557791805;
    msg.possimmon = 31U;
    msg.commmon = 57U;
    msg.convergmon = 252U;

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
    msg.setTimeStamp(0.140924296674);
    msg.setSource(36016U);
    msg.setSourceEntity(50U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(54U);
    msg.autonomy = 76U;
    msg.mode.assign("CEVMJGBRQIDXIEWMQADZVPEYCLNUCIVXRPBUSILEXIQNMHMSPQPKQWBAZPGKGMTRJRZVGZRQOKJDMNVCJYHXBUAEAZWYWUXKOBBQLEFPFCFLYMXTYIKEIFJNGMATJUYKFVHSLDYVHYWTJXCCUFKFBJDNAPGWPNEFHBLHWG");

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
    msg.setTimeStamp(0.334468908039);
    msg.setSource(3185U);
    msg.setSourceEntity(192U);
    msg.setDestination(16404U);
    msg.setDestinationEntity(142U);
    msg.autonomy = 156U;
    msg.mode.assign("ANWVDBCHLJFMRJASUNOXIAGYEJQOANYXQIRLOISNTELSEKZNYHGOXFJFQZNQAXCBLZKJINIWCWWELLFTHVXKABOHRODASSKRLUEZPPFHZYYMTMSNDGJSZLCTXMUDKWTSBDOYBQPHLVHQEAVZMCMBBGGPYLUMKJKBOCTWDPGHXXYVRECCVJZORRRXGFQKFJMMFBOUUUDPM");

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
    msg.setTimeStamp(0.582419111545);
    msg.setSource(55766U);
    msg.setSourceEntity(59U);
    msg.setDestination(63683U);
    msg.setDestinationEntity(224U);
    msg.autonomy = 48U;
    msg.mode.assign("UKKFJFBEVUEYDUQBXNYJMJCMGQUYVJRUCUKPHCIVLHSDCDZWMVYZXOIOXGBNKGPJDRPIARPFEXLSTYRAORFKNTQEQXTJIUBQHDFECLZCXWXDZBGQFFVTVWWYSTBGLDDOGVIKRBOELULLPPRWHHUQOTADTCKNSNZZDENHPWVRNKEQTEZSBFZORYWZAFMIYWWWIRVIAYVZGO");

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
    msg.setTimeStamp(0.779611978532);
    msg.setSource(65527U);
    msg.setSourceEntity(47U);
    msg.setDestination(42591U);
    msg.setDestinationEntity(38U);
    msg.possimerr = 0.589622625126;
    msg.converg = 0.345256546517;
    msg.turbulence = 0.269496374231;
    msg.possimmon = 254U;
    msg.commmon = 186U;
    msg.convergmon = 165U;

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
    msg.setTimeStamp(0.915735910665);
    msg.setSource(64384U);
    msg.setSourceEntity(94U);
    msg.setDestination(33021U);
    msg.setDestinationEntity(157U);
    msg.possimerr = 0.254658902366;
    msg.converg = 0.504770052471;
    msg.turbulence = 0.214839495111;
    msg.possimmon = 125U;
    msg.commmon = 167U;
    msg.convergmon = 254U;

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
    msg.setTimeStamp(0.909604506329);
    msg.setSource(29705U);
    msg.setSourceEntity(252U);
    msg.setDestination(47954U);
    msg.setDestinationEntity(186U);
    msg.possimerr = 0.685415136726;
    msg.converg = 0.437403578487;
    msg.turbulence = 0.870684953357;
    msg.possimmon = 128U;
    msg.commmon = 111U;
    msg.convergmon = 48U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.209983833323);
    msg.setSource(65455U);
    msg.setSourceEntity(211U);
    msg.setDestination(7148U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.627288709748);
    msg.setSource(10463U);
    msg.setSourceEntity(152U);
    msg.setDestination(34698U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.621187036526);
    msg.setSource(58290U);
    msg.setSourceEntity(123U);
    msg.setDestination(8548U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.574022114353);
    msg.setSource(6715U);
    msg.setSourceEntity(120U);
    msg.setDestination(15468U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("KCWXEUORRZTQGHIMWWENYBBQCXHXHGIVMBLLNELAWHWFVJDMJPUTZCSVKMLRYAEIUWDH");
    msg.description.assign("MCERIUJDNLLJRVHGYYBOSDHBKQZGTVGNFUMRYXWPUZFEAQFCUGBABBWAXJKGIJARHOIDUNHLIQZADMPNHLDLAOVPJICTTQUJMFCXCRISRMGSMTPDWHZBKLPYQKKBNQNWPCSKAVGKSWVFYWCRO");
    msg.vnamespace.assign("IQUTMTDULZBGPYZQBGNQJSDHSMWHEFCPEFZIAKBSJACGDOSEPDHAJFXMYOFUKOMCSAJCSUTFLPXUBOAVHYQPPYOYSWAOQLANORXVWVAZFCBBENEKVXDHOUSJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LWLBHGNCIYOMQHWUWSYEZPTWRKKGIJUBYGAZJCSFPCXJSOZNTYGRHDKRYVUEXHUYMLHKVZQLHVBXFJAFLSKQPEKMAKLGBETUQNKFKZYZPZUXVMBLEPQNDHNIVUHJARWGGBCIDILMSLITIFZQAYBNOOTCUEFZBPSWCXJOSFNVPJOERXNTQAKRFXWQYCAUTRAX");
    tmp_msg_0.value.assign("RKNCRZGMQCPWUGOVBIYDWRFDKKKHAOOHZUMUFTBDEHGZXTEWOLJQLSVEXOKICAPJFYPBSMXPYBEUSQEPRHJVBWPWUZTC");
    tmp_msg_0.type = 212U;
    tmp_msg_0.access = 148U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OLYJEWRHKXTIMMZCJMHTDVEPHZZQBBBWSDOTULEAHFMOBHBKJHCJPWUIRGNPRLTJGWVJRHYYYGAFTVCBPANCKCSYTTYFCIZTCLLNEQFPMSAMWWIXSSTRQSWBOFEUHIVIIGFCSOOZEBENEZOLQIWEFJZPUTVORYNVYQAVZDDUDGIQNKKMGQXRWRRLRUPVQMFJGMLYILSQGZKDXOVDAJEGKUXCSJFWUQXZAFUHLKA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UZSKKYMLFDCKGWYCIFBIZREMWMNPLWSIMXROEDOMGC");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 50326U;
    tmp_tmp_msg_1_0.name.assign("DIPHAEPYML");
    tmp_tmp_msg_1_0.custom.assign("QKLNOXJPDWYWONCIQCPOXBSOJQIAKTMEMEHLXMHZTTIHTCAYKCRTVKLVZSWHXURIQMIFWKFLROVKAZZZUFWMBYLNZMBVFDLNCAUWKMNPYNS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SetLedBrightness tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("DTWNNNJZAKXVTXBCVJQAGYUSWDOEKDUVSMMWPHUIBCDJTTZDUJCQUBHMNZ");
    tmp_tmp_msg_1_1.value = 133U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::ControlLoops tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.enable = 232U;
    tmp_tmp_msg_1_2.mask = 1842776567U;
    tmp_tmp_msg_1_2.scope_ref = 2640118940U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("YNROBWTJKKSGXTHKWYJDEIELCOOGCXMXOUACVGHJAZJQULBJHURGDMEUIVCWBLDTWWNAYEY");
    tmp_msg_2.dest_man.assign("MFORTQXDYJVRHZEOHMZWEPDBZOBIBCSQRUWSRPH");
    tmp_msg_2.conditions.assign("BZVSNZHPTSEFDFDDAFLMMXIBZECPUSMNRIUKDOJNOHGZSHUBHXNYYRDINELWMSKCNPAPQCUXQWMXMOTCUPXYJHYVPHNYFEJHJVWGKGYUDBOW");
    msg.transitions.push_back(tmp_msg_2);
    IMC::QueryEntityInfo tmp_msg_3;
    tmp_msg_3.id = 186U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.19008704655);
    msg.setSource(11009U);
    msg.setSourceEntity(108U);
    msg.setDestination(3899U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("ZMDYOASNFYSIUAISAJFBIDDUSMKCHJVLKCLGZWTVFSOEVLNSJPISRRWGHGRKUGCEQCYDSDPTKCOEIMLWUDAHXGNQQYTWMUXKHFRHFPJGEIOGMWOFRBBZATKBEBXICXDMINMVWGGAJYPFPWKORNTQWYZFYQYKRPSOBNBZUEUAVDLWXEKLQNJEXHCJQFTZLKXCHHHINZROUQHFZRMJUXULRPEQIBTBVTLVZYXG");
    msg.description.assign("RLETOJOBRPTTYFNQDXYSLPMNYUAOYBRAWSDKXXJFNLRUCJZDMIIFXBMCNWTFGIQWYBWWVLPVQDVGKEJDUCZWOK");
    msg.vnamespace.assign("KQWRJGNMWRPHLKFGUPVDOIUSPJOZUDSJNSAGOCSZGGVLVXKLXYBCWFANOTHA");
    msg.start_man_id.assign("DNBKQNOPSELLTQVMLIJVCZGBUAXWLKKBFVGCJAOYXEYKNJZROVQMDUWLGITRCSKSXDXMRZFPASHFHJQMZQMNVIGTPUEOEPBTGBJHRDDIDZHYAXOJAHDHZASBFKWAIKVTJEDGXYILDMXCANOVYECTMYUBNRQGUFUXMPBINLSPUMACQZRUHWRLPSCZJFFWESNFPTRQAKGEGWKOFICTBCSQW");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WNCAKMVZQFNERGVGTWAAVGXQSWMHPLUCEJXIBSCUDTMZVKONXSGBDWYZKCLQLXMQKBGBEOBORXGZBPPJUXTOAFIDJWSFRWTKAVNXFOMDGRUANYVANGTITSJLIBDLBMQRYJOCYJMYFLPRJQABYCNEIQMLVHKEHPDDQJXPEYJDWUHOZFCROTHDVSREIBRTHUFFLMKZSPTUOHILPUSXAKXPAWNHFCFGEIJWR");
    tmp_msg_0.dest_man.assign("PRPUVJGSEANFGURDKQPNGIND");
    tmp_msg_0.conditions.assign("JXNVMHVSCACDPYJEBZIBJXLWRDSPYAKAFQQASYAFMVJVMBACUUEMSNQLFMXYWXGYMZOSENROTJGLZTZMPLHTHXNHHABCHGJDYLCPLWONMTVQHFSUQKBTKSWXFYKRKIUAFGJCEUCITKIPSXDOPHVYFOZVJMAJPMQZJRWEBKQLDTDOEINGOIB");
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("TZXZGGOXPEKSBFRXGKAGUTISQKKYHZHRDBQODCPETUDRWELALWDQOOUQEOOMBFFVJCEKJCPIPYEI");
    tmp_tmp_msg_0_0.description.assign("CBHWXISDGNIWCZACEIAMCOLZDJKIVWBRBNYXELLMBSENJZPCLDITFWBWKPGAQGODRYOHRYCWPQOHSDLXVLVYGDCJZHVBQOJPQBWWTRRVYXUHKZBSFVJOPKTUMXNAKAAUMRFFHSLXXABTTPKSFMSNHLFGEOVUQFHXXERQMGNALOGIAWSETYNKTINDRRPENUATHMUZICOEMFWFPNSFQGVKJGJCKZBZJDYIDUDJVRZEMIQUSEOYPY");
    tmp_tmp_msg_0_0.vnamespace.assign("NEGSIZZUUIOGTZJEZFGHSLIDLBZDCVCPYKDLPTSTKYFBDPVWJSWRAAQLTEMAPSPEYGBCNXAWIHRTRYNKXGLKQX");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("ODAFWMZMCTHMALZJIVTUJGWBBONKDHRUARROACGQCXDHAWZDCTROFYRUDXNEAFJXJWCBKFIRBXEFDXTPCRQNZFSKLYXOPPUZFPWWISQDUHYUGEYHCVBYDFJTSVJHEENPMHCQPMLRFEIQUNOGBJ");
    tmp_tmp_tmp_msg_0_0_0.value.assign("JSWNEMXQKBBNGCWZESGDUUKBJFNSRXVDJPXYTACTBENTLREMCWYYFDHBFPVIZFIUWOFDGUJIDQWTQVKEKBOOGPQCWZQBDHYJVVOROKVOIZSPGQHALVNMYJRVIVEOJHTTSLNQTHRYAGXUDFUKZXRNYLIPOUIWJBCYUNBWSMJNAX");
    tmp_tmp_tmp_msg_0_0_0.type = 177U;
    tmp_tmp_tmp_msg_0_0_0.access = 138U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("JIHREKDVSCOMNXFTPSQIZPULWGXEHDGYACGUKQORJLCUFDKSGPFTCHRPQAQNTVNWWUOVDNZBYKXWIGIEBS");
    IMC::SystemGroup tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.groupname.assign("XXLMNNOAGYCHMCFDXJBGYHSXTZXSXZJQNIYNDFVEODYVITEZKAVUMKVNWIJJAMGPVPMHIBHIZERCBQDKXBPJTTHLNFKPLKBSAEOSKFROTGADCEYHWUGOPGTMTPHYQCUOZBDSQEXDLWUUSCOBMXLGRNZSMTHTQIDULFPHGAIXEAEUOKRLDJTFCZJSSRLGWR");
    tmp_tmp_tmp_msg_0_0_1.action = 203U;
    tmp_tmp_tmp_msg_0_0_1.grouplist.assign("ONPGSZSDPALHCIVDCZYITIMXJLSFNFVLNIQLMUTOFBOZDLBMVGWCXMVPKXBRVVYSKULARGHWXSZCAKXZQSHRIEUNYGQWQDPBIJMEELJKORRURIMALLEBQADZUBETTBUFKROPZHXYYEJHQWEYFTGYZHVHBWGKGDOWRNWQCZOSFSIIGK");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::QueryEntityInfo tmp_msg_1;
    tmp_msg_1.id = 209U;
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
    msg.setTimeStamp(0.0222043652162);
    msg.setSource(16345U);
    msg.setSourceEntity(218U);
    msg.setDestination(4337U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("XLDEYJDSMJZOHHZBHPFTQFPRYFDFAWFUQHJSNBKTLEXWWVPHXBDHRZSLHUEVRBRFKIVDKBBFMUKOGHUSMDAVGGIFIRPKUMVBUKWOJDJVJIYTIGWGIOKOLSTNZQEUALRBEMYWLMJARESCQPWMEIAIQXMTSKPDTCBYXYOXZYQTPKZYXRQNQACJMZTXFCZGITYHUXOKOELLNNXCELHWWTIDGCPNNRDVNOUCZSPLQPVCYNSAQ");
    msg.description.assign("DZCMWYHUNTMOHWFGZZUUSWAZYBRPWCYLZHINPTEKIJCVTZQOMASGDFMQLZYMFKPJLYDMTZUEBLSYCTVAWDXWFBULCEMXGGCAYNDOYUHAXEDEHNQMEBPCIBFUHLRYNAIGRWBKHPVAHOSLKSKDURPOONQKXOBHVUNSXSGDDQRLEXIIV");
    msg.vnamespace.assign("QUUOKUGXHEODXPUBHGYCDGEVCTTDIQKBNIAPCFCRMCGQWYDSKELJMLLFGRMZJPSBGZXJNGUNURTWQDFTQNSKJCZEBMJXASNRAXATFZUVDHIZKYISNXADKXGZAEMIAVWUJOCPNVYMHYPLUFKTDOZIHWVLYPIIHBLEKRITORSIYNVZXFNQFMWJKLXWEMJEPJBMRZVPLSBSOHWTPQFCQHEVOLKYODGNSHERRRALBDWMCGXUJOVBOPZY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PWAZXCPRZAJQYXBG");
    tmp_msg_0.value.assign("HMESEWGPSGKVVGGWQLICFJHNLZDEJLVHPUQEDSIOGNTJBZIMUQUYDXGZHTAUONRSQWJKDYRKAWNHZTLFAUFCBHMTEGJEFBDVCIJEAPBTGXMSOBFPXIVKFYMHAOLXNFPTMSKVOLETJOAWEPRACRNIPXVNRXZPMCQTSVURXRPBDBOKOUDFGZYFQIWGUEJKXCBAJHDMRLNWHCYSPTMBZWWZTZDHZKV");
    tmp_msg_0.type = 130U;
    tmp_msg_0.access = 220U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LMBNCXDBXMEQQXENNQGMDDIRJOASCUPLUZXGQLWYNFRZGJHOXDADLMQVIRXBLXYQZWAOTXJZXAYILIWPKNDSASLNFMGTDQHSJJJTTKPKWUERKRGOSUPTZVRYAOUXURVVHNHKIPSSVAYITPZDFFCZGQLVNIYEJUMBHCCEOSGHFHFDGKWFVPMAMYEQNBCSOHPEB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JESPDLXMABOMFVHAHTDIWNYXRVUSLMYNADIJHCVLRKACUKJGISZNLMRNODHGZNEFAEBYGWRDWMOZXLNSOSCBXUKZQJXGFRYGPIFTHTJRTQNSNQYQSXKLGKHOPWEEFVUWVBQJSXUGSFIJOZRTLJUMXTIDQGYROCHBTBYUIVZZIJULFXMBEQGDAPIPEKWELQTQINVKYLAYDEQHOZPJRYWWCCUVPAR");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0639855252889;
    tmp_tmp_msg_1_0.lon = 0.371328284585;
    tmp_tmp_msg_1_0.z = 0.0708493848512;
    tmp_tmp_msg_1_0.z_units = 20U;
    tmp_tmp_msg_1_0.speed = 0.490256159992;
    tmp_tmp_msg_1_0.speed_units = 239U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.323241262088;
    tmp_tmp_tmp_msg_1_0_0.y = 0.968870896925;
    tmp_tmp_tmp_msg_1_0_0.z = 0.125330807114;
    tmp_tmp_tmp_msg_1_0_0.t = 0.748566182047;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.973623433553;
    tmp_tmp_msg_1_0.custom.assign("LESZLSIWZCUUGOFKJVNPWSTELYNMZAFFTFEOYQTDEGLHCAEHWUTGOUOKQQUWVEDJGQXKGJAVMOYBWOSHHIMKCDNSDIRPWBXKHFPKBTNNLDHVUPMHGJXDVJWPJIIRHYNRJXRPGUXUMYFASVLZZETZYQKYVZDUBKALRTQNXAXCHIAPNAONEVYCZBQTSKGTMMZQPSQGRBDKOFLOIBHWNISFLAMYPRYJPXWWCVDM");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QCGJTHHHYTNGCQLTCXRAHJNQVULFHXELNSOBTWSOWEESHUJQVGESZEMPEFNBBYKWQZYXCMGTDRAKOQHYJGLAWGTGQIYFIPZIRQLHLSRUMXJVWXUKPSYMXWZPECNVOXZMMEBBOALAIIXCVFKWXCRILDBPFZFKDKSRMTCBBFAVTODOPIL");
    tmp_msg_2.dest_man.assign("AGJXHSJVUKFHLVONWZANZFAWJJRSFTBLPDAMFYYQLJDVGDJYEGAYXPTAPIPJBSGOQFUWLGKUIXXCRNFCDAELEAMDBXGKZWBYKLRKEXMDJSRCPHHQTSMRCUCOFITNTMHUKHQWIOVYCUWUPZBYPCSZEQNYZFKVNTRAOGDBKZXNEDWPDIIEZWGSQGIUXTRIX");
    tmp_msg_2.conditions.assign("ATAYAOKNRTMMZZLYRRFHONUDPXMJCYDGT");
    msg.transitions.push_back(tmp_msg_2);
    IMC::SmsRx tmp_msg_3;
    tmp_msg_3.source.assign("NJILYFSQEGBMOOVKLSVBUCPDNQEXFBFHSHKWDNG");
    const char tmp_tmp_msg_3_0[] = {46, -108, -121, -38, -97, -2, -100, -91, 79, 93, -51, 90, -67, -109, -127, 108, 119, 42, 122, -25, 45, -8, 89, -29, 72, 120, 10, -92, 18, 2, -41, -42, -46, 54, -89, 102, 51, 46, 49, -42, -106, -83, 28, 97, -41, 105, -61, 99, -30, 69, 123, 42, 40, 101, 96, 20, 86, 95, -101, 62, -67, 59, 87, -90, 115, 105, 41, -108, -75, 86, -90, 33, -64, -128, -15, -33, 74, 122, -40, -8, 34, -89, -68, -14, 121, -68, -13, 75, 7, -47, -88, 90, -117, 70, 25, -38, -123, -67, 56, -13, -4, -41, 75, 93, 109, 18, 69, -97, -28, 17, -12, 24, -107, 0, 61, 16, 112, 38, -120, -29, -121, 103, -113, -16, 95, -92, 46, -122, 103, -6, 36, -20, 99, 93, 14, -82, 80, -2, 7, 35, -51, -39, -31, 121, -45, 106, 109, 91, 56, -108, 15, 55, -102, 1, -7, -4, -48, -89, 126, -118, 109, -3, 49, -29, 51, -16, -28, -103, 107, 6, 62, 13, 27, -104, -4, -5, 68, -59, -119, 25, 74, 13, 104, 97, -72, -97, 39, 83, -122, 118, -35, 25, 21};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.start_actions.push_back(tmp_msg_3);
    IMC::OperationalLimits tmp_msg_4;
    tmp_msg_4.mask = 18U;
    tmp_msg_4.max_depth = 0.340481827666;
    tmp_msg_4.min_altitude = 0.378644481636;
    tmp_msg_4.max_altitude = 0.154564713538;
    tmp_msg_4.min_speed = 0.113491725652;
    tmp_msg_4.max_speed = 0.292419080161;
    tmp_msg_4.max_vrate = 0.334365205228;
    tmp_msg_4.lat = 0.160487276042;
    tmp_msg_4.lon = 0.446172111883;
    tmp_msg_4.orientation = 0.981588301011;
    tmp_msg_4.width = 0.405937368967;
    tmp_msg_4.length = 0.760693882212;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.440873868747);
    msg.setSource(23561U);
    msg.setSourceEntity(245U);
    msg.setDestination(37764U);
    msg.setDestinationEntity(224U);
    msg.maneuver_id.assign("YTZGJVCPSKLFMUUZUGQRASDDNBURASAIHZZIKOGHFWOPLOTLMVWJHTUFZUEDWYMAXTXHXWIHQQTKDWUSHRIBFJKXQDCJPTMOBINAWMGWJNTCLYOSRQHFEDKOQDYCWQBUARFKEINRCXDJHPTPAXBKVYNFBHGAUCCRXMYERQGJNZIDOENIUOLSNPEKLIHCMNKJLGAYVYXJTEDVBLRYLCB");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 20554U;
    tmp_msg_0.lat = 0.128897470985;
    tmp_msg_0.lon = 0.231162389218;
    tmp_msg_0.z = 0.411740346312;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.speed = 0.94095903738;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.custom.assign("PVOIWBSWFLWIZWXNSQOKKFGBFECGTOHEPLFTAENDCAGYGSZBOATCDJBXYEJUNQKNQKFPOAZRVFAQDHSONFROXLISVMPBYYFIWTUKSUYOXMDLVPQBHBWBWIBCECDGCRZNXKJKZSEJVZQLEYXHCBAUHMASYJJRHAUYSGEDNRZMLOKQIMVQTTGWDUDNHMLXTNLVXICHZUAGIMQNAVXLTRPLQTOKCZPSUDWKCVMIPHDUHPRGMVRMEUEYWRYZGPRJ");
    msg.data.set(tmp_msg_0);
    IMC::EulerAnglesDelta tmp_msg_1;
    tmp_msg_1.time = 0.564235608896;
    tmp_msg_1.x = 0.491206636561;
    tmp_msg_1.y = 0.856897159656;
    tmp_msg_1.z = 0.347649465078;
    tmp_msg_1.timestep = 0.337487782933;
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
    msg.setTimeStamp(0.942429750875);
    msg.setSource(387U);
    msg.setSourceEntity(7U);
    msg.setDestination(59318U);
    msg.setDestinationEntity(158U);
    msg.maneuver_id.assign("KTZCAZLWFFRGWUKMJFJVEQUWSUOVHEFOHGNLDDHPFKQZYTXYDBLCBMLPJUOOHJFFSPDJRMALTYNCDRWSSYEJS");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 4500U;
    tmp_msg_0.lat = 0.797883120231;
    tmp_msg_0.lon = 0.714590202651;
    tmp_msg_0.z = 0.278383288871;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.pitch = 0.0261455982138;
    tmp_msg_0.amplitude = 0.077132890468;
    tmp_msg_0.duration = 700U;
    tmp_msg_0.speed = 0.78461949428;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.radius = 0.479347048707;
    tmp_msg_0.direction = 228U;
    tmp_msg_0.custom.assign("HUWOJYHNIINQSXSJKPEXNMROQJHMWVGGRCPDSFECIQAUQOIBKWSVULDJBLTJQMPNBNENMDAAUYLSHLIGVOALPEXMEBWJFYCCOXZYNOGXOJKNKFTZHCDD");
    msg.data.set(tmp_msg_0);
    IMC::UsblFix tmp_msg_1;
    tmp_msg_1.target = 56879U;
    tmp_msg_1.lat = 0.585246226472;
    tmp_msg_1.lon = 0.877046439416;
    tmp_msg_1.z_units = 248U;
    tmp_msg_1.z = 0.864084020855;
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
    msg.setTimeStamp(0.614531047283);
    msg.setSource(13575U);
    msg.setSourceEntity(147U);
    msg.setDestination(44339U);
    msg.setDestinationEntity(127U);
    msg.maneuver_id.assign("UATBVFXXITNVGEXWWOSNLHDRMAWDHPAUNIINMMZEWMBDIRRMUJIMLUNLEHOBFGPVZQZVGHRUNYXUQILIJLQJVJYFYRCZALSBJVNFPOBSXCOSBXEEGCEWBJTGHGRPZFLYJTZAKMEFKRWIMPTKGXEFXAFQSDXKOCSISYKGEHVRLZYOPKUWMHPQNAXPZQGUQRKDNOKZSQBWUWAADKIKQSOC");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 53311U;
    tmp_msg_0.lat = 0.718148238836;
    tmp_msg_0.lon = 0.0401877180264;
    tmp_msg_0.z = 0.49687329861;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.speed = 0.449248080703;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.duration = 38495U;
    tmp_msg_0.radius = 0.0918107004991;
    tmp_msg_0.flags = 193U;
    tmp_msg_0.custom.assign("XDHVEHTKIULXCEFUJPZYMJFEDQGDRNCPNAPMVDABAAFNWIRTZIQRJNIFZXBJVYWDPWIYO");
    msg.data.set(tmp_msg_0);
    IMC::ControlLoops tmp_msg_1;
    tmp_msg_1.enable = 61U;
    tmp_msg_1.mask = 3054722448U;
    tmp_msg_1.scope_ref = 249701622U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FuelLevel tmp_msg_2;
    tmp_msg_2.value = 0.792241510409;
    tmp_msg_2.confidence = 0.799131010676;
    tmp_msg_2.opmodes.assign("XWGDGPCFYXQTUXBHELIWARDKJTFVNLUDEKTJZRHJQEYNEYECNIILTHQQXBZJZASSXRIACNAYUQZOTCWVPBMTOFBMGIXEUKBAOBVDJODBSYTWKBKRSEOFPZBKDGIOXUIOELQDUIYGTQRGPMADSCNYGLXQMWRCWNAYVKUGWCPASPNUMKS");
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
    msg.setTimeStamp(0.338232178068);
    msg.setSource(18530U);
    msg.setSourceEntity(62U);
    msg.setDestination(5912U);
    msg.setDestinationEntity(109U);
    msg.source_man.assign("ATWHEBXHXEQLATYSTZNEEOCGMCSTNOGANDXAMNHXJLCISTBDPUKDUGLAJRMIZHXDKGPJVIBPUHNYXKUUFUORDDBYRYXNKZXKUNAVQPWLNRFRFABSZECPPEVVIVAIIKHZHJGOZOVFQRSCZFBDMSIJYZILXESPQUELXGWCSUMGRSMGMDTWBJDCKQHJWJAFFSMYJOJTBDFOLTVKPFTNE");
    msg.dest_man.assign("KJRQRYXPWCVDHBFECUKGPEQHTLJAKCAUGIBMNZNFOJHAQGTPFBUIRBGRBAKSAZBSCKIZLLSKSPOHREYAAIHLVIJHKNTZMSOFUOWVHBWAYUEVHCQYWWHQZNDYMEXVRDIWFTJUYPDIDXDWCCEPXIEVLZGSTPKWFURJBDZLBXEMOFTSOQGBYGNNTOL");
    msg.conditions.assign("QAJCZALLIDNNXIETGETJUBOYVVKEMRNUQJOYVNARCCISZIWMTGWQBPXDLPKLQFZBYSFXYHCITJCTWZOF");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HROQMSQYEZGJOOAQQSMKYMVXDOCQDJVLKRLEDKKJHIPGYXNDIIBQAVUKSKWVNDAWZMRXEFHNGBDKLCZICODZVQFYSHKGPUGXELVTYMJAHDEVVSTJCBHCSFYPSTYHNFNFMRGNWZZBWQUWUPDOHVZERPNIMFPCGYOQZTZFLCAUAXKHJCRWDTNA");
    tmp_msg_0.lat = 0.555984500462;
    tmp_msg_0.lon = 0.627855698322;
    tmp_msg_0.depth = 0.172553038819;
    tmp_msg_0.query_channel = 140U;
    tmp_msg_0.reply_channel = 127U;
    tmp_msg_0.transponder_delay = 60U;
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
    msg.setTimeStamp(0.595262349325);
    msg.setSource(42120U);
    msg.setSourceEntity(42U);
    msg.setDestination(33276U);
    msg.setDestinationEntity(79U);
    msg.source_man.assign("TOFALEZEXIGEFGMJQGROMIRJBNAZZCHXBPTUWCUVRRDTGOPKJKSSYMHPIXESVJEARSCZHAXNDWDYKOPXGIMQYNGYXDFWNVW");
    msg.dest_man.assign("HNNYBKQPAVXVFBDHOSLYGK");
    msg.conditions.assign("UHGEVLYVVNAABIYMELXLFCXOKMIOCADPSUYAXHMGPRRHEESRKHZGOYMMZIPJAXUNDBSYRPQFADEHVLQTMNKJWZGMRWWFFBVQNGJUXKXATRRUSRWOOCPDLSLICCYRMNQEOXDYWUPTLZGSPBVAHFZIBTFTQJJVISGNQDABWKUOTNSXUBVCDTXOBETPIBMZHPYOFGJNNWMHYZLCZJXNPYBZEIUKERKSLCDJU");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 132U;
    tmp_msg_0.htime = 0.341632957859;
    tmp_msg_0.context.assign("QRXZMRNPNPKVSLZGZLHPXTOBCRUPHSHGUWTSTXXDFXHNYSAUXABOQRCCPMNHIBOWQAOVXPSVPDUFBSQHIDB");
    tmp_msg_0.text.assign("XACEIZAMTDMQIYLZZOOSCMPEAGSFDLNUMZNJIRXVMUQGMAJKLTVICLKXWFDWQEOBWOQBNUBJDNANTYVWRUWALZYHN");
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
    msg.setTimeStamp(0.573720320068);
    msg.setSource(3536U);
    msg.setSourceEntity(66U);
    msg.setDestination(44779U);
    msg.setDestinationEntity(190U);
    msg.source_man.assign("KZWFLTJEIVZOOTRGSUOSDXCQWDSOIEKCYOVFSOFAQVAWSLLQDZUXPEPMZGMPNROXIXLBTYLTUNUJXWNRHXTZUMGNXQBDVTQWRHJYVNQIYQIEOCKKMJHIHRURUJYGLTYPIHDWGUNMSAEDKLCWHSVYQA");
    msg.dest_man.assign("EBWOBPMBNHLDRGAXUCDFRQAEGJKAVLUTSKHLXWJDYXGXZSRCISQMOAQURHAWMBVIRTUXOSKLSZONOIZWDFENWXOUECFBRPYSAQRWQPYYDVVKCWUIOUYFPNMEWXGGSCHDBMEBTHTMQKTJETPVBNLLKQHUYZLMBWYSINATJNHDUPJRYVGFFH");
    msg.conditions.assign("FSDNVAPPVTELHBYEOBWPXCZXLKUWYCLNVKEIEBHAPTGBAWUOMVENTCZFXJHFOPAZYQOQAYMJOYYXGLROKRFZUKGBEKJSSNOTVVWJLFEPXICYHUYMRXXIPVNLLZRLISKGQIRJOQSCMDTEDBUBQTJGRKQDNDMFFHHLMAZBZUCHUMQAVNZUSQSHXDFNBOWDTLZDFEGGNIVJHIGCJKO");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("NCNYZDAUQKVIPFPZPZCURKQFJQRZGZJJYWICAWEPRFMOMHVDUABKPLTFICHXJDLGEPCGYWMLVMWYMTEULMRALXWCGMRSOHLNSOBBJXJJHDKSEXVQNELVRGNNCJSXZLMQIZZXROPNFDXGRTOYTFIAQ");
    tmp_msg_0.value = 0U;
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
    msg.setTimeStamp(0.996866861768);
    msg.setSource(30029U);
    msg.setSourceEntity(168U);
    msg.setDestination(49118U);
    msg.setDestinationEntity(47U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HVOKMLHHVHXDWMIKNODZMIIQAXVEYQAUTOWBQNXKRESZHNZCKFPYJYWGRXOAHBADPJOQFJLFPCEQRGUVENEIBPKGAEWRSMSJETRTRURFLXQGTASIDPJYACZIMVDXZGC");
    tmp_msg_0.description.assign("ZLEZIUGGESMVRNJMCMFORNUCEZUALJHODAZQGASDLMEYDLPVSPPQFOAXVPICHLUWZGMZURBJRFTUNLQIKFWDFXNIDYKWTDYTATMIZXQUPKSBJYMPSVCJTGAWTWEOGVHSQGVFKUHZPAWHSUBGZHYLYRCXNEEBVOYRQLLXWJETSRXOBLDEUFFIDPIBJSBCEIFWOMSKYBKVJCQXFO");
    tmp_msg_0.vnamespace.assign("JRHHKQAIUSPJOSUUBBRFAYPAQISOFZDVECDBNOIDPTEYJWJGTZIWEWVWMXBFUQEMSXTQLU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KMUDYJUZPUUEWHUYLGTQMTPJCDKRSNTMIPMRLTZWZOOELJLFQNGLHBWISENCSGDQFTHXMXUVASYWENVZKFABHHZCEQGKAPDFENWBWKPQKXKOYJRRCRDOGGRTBDJYRPDIVY");
    tmp_tmp_msg_0_0.value.assign("PEMIOBUDYQHLOLILNCZBBKOQQFRMWWYHVARLXYLPTTKYLENEPFBULJEGNHIDDYDLFSADYHUITEPSEHGYCCRGUWKBYAIKFPPGHGZZFX");
    tmp_tmp_msg_0_0.type = 230U;
    tmp_tmp_msg_0_0.access = 4U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WLDQAGPCMYDJRPZR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WXHDFNBDEVXYXQFJTPAZVHJKUVZABSQMRQBXVOHIHXDBEPSBPCTOITZPNNGGIJEMFAVGCJRR");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.330334490909;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.248410472756;
    tmp_tmp_tmp_msg_0_1_0.z = 0.370009644098;
    tmp_tmp_tmp_msg_0_1_0.z_units = 37U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.583929960118;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 61U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ZTBOZIUAKWBPXOULYYOBRVGZKBMFVHAWXCFQPUKTMTWJHKJWECXEKDRXMZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.266916438142;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.389442336899;
    tmp_tmp_tmp_msg_0_1_1.z = 0.858333128535;
    tmp_tmp_tmp_msg_0_1_1.z_units = 134U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.215790832738;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 128U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.78658239656;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.797493364387;
    tmp_tmp_tmp_msg_0_1_1.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.custom.assign("MGYBNQGBTKVOIJIPXDMYHSPJPZDRZNVSUFNIOOGNCPJMFDVMLAFNOIQKUTCLRPKGHIXEHETTLYAEGRUUNKUYARCZBFKNKJEXHYZGBAKRCGOMQKZPJLFYDVCSBOWICHCDFGQOHFFAJSMARCH");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::LinkLevel tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.0806385229693;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Target tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.label.assign("ZYOAXDVHUBVFKPPCHJYPXBMNZATYJWACPBLMIGTGBKDQLEBLUAHFMXXILZMDVBACZLJEQCEPXMSNBCAAUWLNRRSJPHJPXFRSOQJXWTPQOVGVEEUQOUKWKSMEZHFMNEGHQRRDTNCEVSVWVNGKWWNDNYXODKTOUKOZSUKDSIZIMIJQTSKCTJYVIWSYFGDDLRIQMYZURROMCLCBAGF");
    tmp_tmp_msg_0_2.lat = 0.0676765212399;
    tmp_tmp_msg_0_2.lon = 0.562238040006;
    tmp_tmp_msg_0_2.z = 0.835290755983;
    tmp_tmp_msg_0_2.z_units = 105U;
    tmp_tmp_msg_0_2.cog = 0.901836426531;
    tmp_tmp_msg_0_2.sog = 0.276945447587;
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
    msg.setTimeStamp(0.121902821167);
    msg.setSource(61368U);
    msg.setSourceEntity(6U);
    msg.setDestination(57886U);
    msg.setDestinationEntity(32U);
    msg.command = 80U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TUKGIITHFOJSKUZFGZFDLVLMBHCIVNUHWYJNSXCYQFMEHXSJQCHELMUAWRPPDSLXDJLXBMNDESOQOWXEWAQKMENRPFTERQTHGYOKUUDEWDRNTZVVZYGWFGAZGZIXZREMJDNVEZDS");
    tmp_msg_0.description.assign("RPCBHSWPVGJNPBHLXCBDMJEWVVKIQAWXDNPMUBAJJLFOOGYVRKXUNAZWHRYBIFSTWONQRJKLPKUUDDCLRKDABACXCLWWKFFNEOE");
    tmp_msg_0.vnamespace.assign("XFEGCBJQLBPLEXYBHWLFOEDCVRIZNOWYFKWSBIEMTRLXWGCKUQXUSUJCOYHYFZJIIPBJRTVZQVSABLLAKTVNTBSCJRHUSVEFCMOQMRLQRRAJGGWECNEHYCEYWGBLGCOIYBTKJU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LEGMJVBJOGGFJAMBCBAFIWTCVXIFKZMOBHTBTGKAUSQHOOVJYGXQYIRAVSCIMKOZWPTQURATZJKQFZLDUQBURWQKNQAWEGDKJKSLZXEQIMVPBLREHDHSEOLXRGUUVMLENFRCVGSPNGYUUOJDDNAANWYDKQZKZADWPCNHBIBHYRHZVZSXRJXBITAKLFOLTTRCNPXYMTSERXCJOCFWNPYWJPSPLLHSDHCOPVEQFUN");
    tmp_tmp_msg_0_0.value.assign("TINCOTMZTOJJXRDTOOFLDUASIIKTAALDNELUMU");
    tmp_tmp_msg_0_0.type = 220U;
    tmp_tmp_msg_0_0.access = 158U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JLUTPNDFHHOVTGGHGORJJHAJUSVTRAVP");
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
    msg.setTimeStamp(0.182268153546);
    msg.setSource(25905U);
    msg.setSourceEntity(77U);
    msg.setDestination(55293U);
    msg.setDestinationEntity(90U);
    msg.command = 238U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YVDBOFEIKHUIZWBBPGFYLATCAAINXIZEJVIIMXMKPGTHCNSDGDLOHOUPOSGHQEMLYNTQIHWMQRIUTVEVUASGKZPQRABSRYYKSDCJKJEXNZCAMUTSZNYXJGQQRROJKCBYXVHLKLOTRFIEFCFDBWPRL");
    tmp_msg_0.description.assign("PJQCMVOBRUVBQLCAHPEANIWTRPZVGBXLZEHVJDIZRUGFMCGKYFPDRPNUMZPALLKOVOLBHWMFOSOUFMGRJGMWHCUXYUNAXFKHFAAADDZXBUQHONHXNLLOSQPSCXCYKXQUTJHREMGVJEPGEASOJNEKSWZDTDJSDYJEYCYTNVDNUASNIRXPFIHBYUCMBTJWTKORWWYOIIYQIVLTZGBXWCQTFVGSDTAIBEZDTKLR");
    tmp_msg_0.vnamespace.assign("CMMJNHMVEEPPCZXNZUINJKYBSYDIQVQAIKRRQSICQGICCJLZLKPFIPSCUWLABKKNJLROQHDUAGJNLZGVFADJOWHDHPKSGKJEOYUYBIPTOHLXABHTXGTWRSRFFVSOJMZSBVPXGLVJUBNDNKYPHGUNWMOTVZTFHEFDGDFHSBUFRMZQQWAYLLEOAXCCI");
    tmp_msg_0.start_man_id.assign("OAYEYJHWNWPPLUNIVDKVFPRKKXMOJDTXPOZRUYCONNDUXBUTQLLNXKHTIJFEIJVHFXFBUTSRBIJEHWYXDVWMRADGGWPRBGEFGLQASFFALULBUPASYHVVIZYVWYINRZGEGHCOBCMRAJDPXOYVKAQFSZMRDCNSCSCJKBTPIWWNEAZECGEFXIWGVTLEZZLDQBQOOXUC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PRZBMZLCVFOXTSEIPKIWKSOBZLTK");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("ICNXNPXLRBANCJBHRXIMHDLCAMSPHQIFYBWILCYOYFTTKAIGXLUFYDVHGTNXSEFXFLSVYGZOXLIDJRTEHQRFKMWFDZEQDDPZUPHVZWWMADFKZDLUOMVIQPSUZKSWZSKQBHBZBFPMQJQAVGAKWVUEJYTVPJVKUWUJAGXMCYKJRBKDDARSXIOTBJSCKQTYBEJENZ");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("UFSMZJGXDMHHWUSFUPGHNQFJQVPVZIAGQQJPRKFYWJDBEKFRQAIMTERTXUERDCLLLINPCJKSSDTSRWCPCARBBGCUPLVAYPOMSXFCYBNLMYQTWGWXAWDJAROTCTNQIEKQIOHLMNZXEQKOSZHCNDYEYJVHXCFSAVIIYALDVFDRKJFOTPKZYUBYIBMWFX");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("JHKGNLMEBDZSOMCZSOLAFQLIXEOYEXANTFBCVVITLMHSANSTUOIXJAFFBZGPHOHPEYTRCRYGGTDDZUGPUKGQTMKKCPULFRKGNZORCJCHQBJSDMCCWFVKAYLERNUDZDTXQHHQLSWXIPYGBUFXTBMQWJWLLBHRMNCJRRDUIYZQBVIFIFKQDYNWDVWOVTZUMQPXOH");
    tmp_tmp_tmp_msg_0_0_0.description.assign("AMKWPMGVXBEPVFXUXKQKAVMLYGMQWHPYSWOMPBWEEIFYSLENUHUCTTVKQBIIDYNAOKFDIXCYZSVPGAECCNPZCBFKBIVKORIODJGCQXDUOXENPXABWMLSWFTHMFQDAZARSZZTUAJPFGNNVXGJGVUCLFSZHLUVOSHRQEJBNCKXOYSBNPLDZITALDZFQEYWCQILKQLOJTPEWERYTVCWUXTYDMJ");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.790342239923;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.0459784135051;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.130907326019;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.415147145309;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 45618U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.93089431121;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 48972U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 9050U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.350702885903;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GMDINWTZDJZBYFUJPFZXIYVXHHKNGYBRDBNIDTRDJZLPTOHEIRFGVKKHFMUOQDQVZZFRWHQAG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Pulse tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DynamicsSimParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 137U;
    tmp_tmp_msg_0_1.tas2acc_pgain = 0.932987473641;
    tmp_tmp_msg_0_1.bank2p_pgain = 0.0517495127667;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SetEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("USOCTSZYQKRNKJJEVPKYQEBCXRAPHJPBGDXGTUEDXBXOLKFWMIPABBRLGVTRREZOYKKVMMWWKJYLGEWAPQGZRPLHWUFBMOSIHTXZGRDXWINXMNEYNYECKXUAUAVFFZTBFHNSZVEQLJDSYVBUONCKO");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("QZHPVVXKIBNXLCPIWNJLFLHOVNIAUJFSCXDGMJGTUQBEAFXSECAABLWLJLTUOGMRZCWSMDYYBIZWHNBBDPZOXERLYSLFJHIIJ");
    tmp_tmp_tmp_msg_0_2_0.value.assign("MHALONWRMUNPKLSVQEFTQPKYYCVENTLQDECOYXBTZDCVBNJNMOKYFRLSQPYZFVGCOIGHODDUUSXIKIXLXBXJHJHXRJRHDG");
    tmp_tmp_msg_0_2.params.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.402812321065);
    msg.setSource(53371U);
    msg.setSourceEntity(93U);
    msg.setDestination(48131U);
    msg.setDestinationEntity(254U);
    msg.state = 113U;
    msg.plan_id.assign("VSCMAKSBMRBZBHZCCYRPSKYLWEIHDHJOBPVGFRKMZDGYAZDPNNMLLNFIJVFFZUQCVXPIEULIPCNUOLXLAPUHADZDXEQCSKRJODXLAZAMZSJYTRGJMFFKPHVWOKODWYEGXIPWSEGAQTYFCEXBWRUIUJGANOPKYKPQFZEBWCVMXGOGTTNSQOWCTTKTQUVDAFEQORZSTKTJMFMBILHWRBGNHXYWXUWOVXHIUYBDJAHVYQMLD");
    msg.comm_level = 203U;

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
    msg.setTimeStamp(0.480708946008);
    msg.setSource(63678U);
    msg.setSourceEntity(202U);
    msg.setDestination(65234U);
    msg.setDestinationEntity(210U);
    msg.state = 180U;
    msg.plan_id.assign("IZICQLYMWYABIBKTAOIWWKNDBZQKTRFHTECELGGWPJDUSVEONFJRFMQZOORPXQUSEIPVWICVKOGXCRBYEJRZEJBHWFYFCCEJFAXCSGMEXPXPKLDJFFTYPQHUYOHANWVKIDKCXEORSQHTBSVHNYUDEIHVOUPIAXWPHXHTMLMKMUONLBMZRLIYNMRQBZVMDZOXSCSYQUAPYGLAXWFRJDZKKANLVGBWLDTTFDPHARGUMJLUAQCZVNSSGNSDN");
    msg.comm_level = 204U;

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
    msg.setTimeStamp(0.520564027738);
    msg.setSource(196U);
    msg.setSourceEntity(222U);
    msg.setDestination(45605U);
    msg.setDestinationEntity(33U);
    msg.state = 212U;
    msg.plan_id.assign("YACHAPEREWEUIHUDLQGGEXGYWICQMBBXUHDVQFULELMAJQTEQWKBABZGGHYGYHMJOMEYYOTZOE");
    msg.comm_level = 37U;

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
    msg.setTimeStamp(0.256277771226);
    msg.setSource(29720U);
    msg.setSourceEntity(150U);
    msg.setDestination(38525U);
    msg.setDestinationEntity(254U);
    msg.type = 67U;
    msg.op = 200U;
    msg.request_id = 31815U;
    msg.plan_id.assign("GDHITRNHAOHZCZQWWIFEIGJJONHHFKNMGJJTBXEESDIFZRKBROUNDPLZWQESUYYDDKRCYISSXMYBWVLJKLWOHDCNWOACSSFGHELYAPRUFBGPMMZDUXAHNSWQZHMMLJLQEFBWCHUCP");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.302729207267;
    tmp_msg_0.lon = 0.321408338719;
    tmp_msg_0.alt = 0.114772182942;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOMTXBNZQHZGNUCNWYZQSIJTUNYAIIUGKRAWDHCHV");

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
    msg.setTimeStamp(0.759880647422);
    msg.setSource(20878U);
    msg.setSourceEntity(62U);
    msg.setDestination(3850U);
    msg.setDestinationEntity(223U);
    msg.type = 11U;
    msg.op = 211U;
    msg.request_id = 50460U;
    msg.plan_id.assign("NFWBVAZDLRQPVESYRHOAPKOIPXQPYIQVLMKPIOWMXDUYWFSTGNPFEYNQHCLTYSWQKOMAKUYGLEWTDTJAVDCUWDJOSHXHASIWCVKEESVBZDPGIRRRWNXFEDANJDECWJLNGGZXBXECCSJ");
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.793534620357;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GIUGEYUJJFYBDCMNQLFDXTVUPOKCMWRSYHPBQVFIQTECNMJEWPMDCVLEZSZUTFXT");

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
    msg.setTimeStamp(0.571452451766);
    msg.setSource(4043U);
    msg.setSourceEntity(141U);
    msg.setDestination(22624U);
    msg.setDestinationEntity(212U);
    msg.type = 240U;
    msg.op = 201U;
    msg.request_id = 13664U;
    msg.plan_id.assign("CXVWLHKEIQKVCFIQPAXJJKPOFCZUMTFLUYRTVWVZZGMPKBRQEKISDHPIKNUHEXQXNYWFLHNWHTKYZEXJJTIVSWDOGSBEQARPHTUZOCZYLJKNBOGDKKIBPEJRMDXTGDMGYAGLRBJRMBAUOOSVWFSLTEAJMWFEC");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.221763714556;
    tmp_msg_0.dist_min_abs = 0.974613527959;
    tmp_msg_0.dist_min_mean = 0.494552829173;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RMWCMIYDADEZJQHLVPVFLCGHHEDTHWUOYZRNWHWWHXJKJWXSPDUUCZBFDFNSFZOBEIFNPIKSFLERYYJSKSCNYITRCQCSDQBZGIXQKKOTGSJVCXYHQHYJSKNTFGPYJBNGKIUDAMUKMMTONOSQIPQZONZCLXUZXMARFHETPFPTSOEXVGBGVYTLTANLRJGEVUIJLJPMFWBBPVIXZUERCEPQAOAVXBURILMCAURNXZLVKWYMRVDAT");

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
    msg.setTimeStamp(0.633980166436);
    msg.setSource(49959U);
    msg.setSourceEntity(248U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(185U);
    msg.plan_count = 23399U;
    msg.plan_size = 3864691515U;
    msg.change_time = 0.733995228368;
    msg.change_sid = 29219U;
    msg.change_sname.assign("XNYGPXLBADJGUDPRIFD");
    const char tmp_msg_0[] = {90, -97, -1, 71, 117, -123, 41, 70, -33, -41, 124, 30, 54, 106, -91, 123, -25, -103, 48, 26, -125, -90, 121, 18, 122, 107, -112, -91, -41, -6, 7, -77, 29, -123, 61, -124, 55, 40, 55, -56, 118, 22, -89, 27, 73, 94, 82, -19, -93, -42, -109, -15, 104, 86, -59, -100, 79, -69, 106, 66, 25, 87, -100, -95, -8, -99, -94, -91, -97, 116, 12, -88, -19, 109, -51, -75, 5, 31, -19, -43, -89, -115, 53, -95, 32, 54, -82, 13, 8, -34, 29, 90, 66, -76, -34, -18, 113, 94, -115, -80, 65, -61, -114, -86, -28, -102, -113, -123, 87, -29, -10, -122, 63, 1, -21, -36, 89, -66, 44, 5, 12, 74, 72, -47, -69, -49, -57, 47, -119, -88, -82, -70, -85, -2, 37, 16, -37, -106, 93, 125, 105, -108, 91, 19, -97, 93, 23, 88, -27, 26, -113, 122, 116, 6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WQDCIVZAPEZGMPHHYWZPSZWWSANSKUEEOINJUFJLMREHFITSLGHRLOSOVRTOGOXYUKBZBQEACMTRKFRHONVEDDVNVAMBVDCZTZFBXIHDXDDFQJFAPDWLMZCTLXJVQEKATFPIGSCXMLQYGYAFDMXQPGLIXJTKAHJIOSKWKFUNNYRJWRZWBLNCIUYJYGJCQPRCOYAUSBNBM");
    tmp_msg_1.plan_size = 62163U;
    tmp_msg_1.change_time = 0.748283476434;
    tmp_msg_1.change_sid = 1023U;
    tmp_msg_1.change_sname.assign("HEWXQXZKGOYWCRAGGOKDMSOPQCTSPNEJPXTCCHSWUROYFDMBJTTRRXHDAZLMWIYVTQCHBDRETYVAGJO");
    const char tmp_tmp_msg_1_0[] = {9, 55, -122, -61, 49, 46, 73, 51, -104, 72, -6, 103, -35, 120, 105, 100, -100, -21, -31, 33, 13, 51, -64, 104, -34, 17, -110, -83, 11, 81, -85, -127, -102, 60, -23, 20, 34, -96, -114, -99, 34, 13, 19, 81, -71, 105, -89, 60, 41, 115, 110, 12, -99, -70, -91, 44, 24, -55, -23, 15, 56, 26, 7, -92, 87, -100, -103, -98, -11, -22, 69, 102, 79, 97, 7, 86, 122, 85, 117, 18, 2, 107, -67, -33, -34};
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
    msg.setTimeStamp(0.80559127232);
    msg.setSource(54236U);
    msg.setSourceEntity(212U);
    msg.setDestination(21978U);
    msg.setDestinationEntity(220U);
    msg.plan_count = 63370U;
    msg.plan_size = 2825814916U;
    msg.change_time = 0.663125867777;
    msg.change_sid = 60667U;
    msg.change_sname.assign("GCZDMRBBFTOLDSIDRZSUFCJRELWLEXWKXKLJJFIPDBJQONLPPGFBVDMYVGGAUTNULWYCEWNKMRJXPLTDPGIOZTNMZDOKXYBAISNWJNQRCCBBSNPGQOYGHARWVWQHERFYYHPXMVPUTKTEKJZYRWTOQLEHIEBXUFGPHMTUJVKVAGFFVFQYRKHKZXOHMTIUVNAQUFJASPAZSCKRJUOHODQCEHXICEADZXVOSNQVILTXWIN");
    const char tmp_msg_0[] = {1, -23, 5, 17, 66, -58, -107, -108, 102, -10, -116, -26, -95, 93, -109, 85, 19, -36, -76, -7, 39, -122, 22, 63, -124, 68, -84, -125, 0, -116, 15, -90, -100, -15, 1, -110, -56, 88, 14, -61, -119, 56, 23, 29, 109, 47, 81, 57, 79, 89, -84, 55, -98, 109, 59, 52, 66, -114, 122, 124, -116, -12, 17, -123, 96, 107, -88, -13, 105, -18, -47, 82, -119, 59, -2, -16, -96, -20, 52, -112, 97, 69, -62, 88, 23, -59, 17, -48, 26, -90, -96, 103, -66, -27, 61, -111, -35, 60, 69, -68, 74, 75, -5, 33, -116, 106, 117, -8, -111, -4, 80, 26, -117, -58, 122, 25, -80, -8, -113, 114, 85, -13, -109, -70, -90, 24, -77, -5, 71, 44, 70, -84, -73, -125, -6, -119, -15, -78, 1, -83, -31, 36, 51, 15, -32, 82, -2, 27, -18, -6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IBOPJDISBNBULXIAEAXONMQUYJUDRRRGAHWYKPCFBXLSTITHANGSSEEOPZAGEKVUJTWTMZYZJCNZMOKOGJDQFQSFXHZOBWSCIIU");
    tmp_msg_1.plan_size = 18807U;
    tmp_msg_1.change_time = 0.763355762633;
    tmp_msg_1.change_sid = 59604U;
    tmp_msg_1.change_sname.assign("KRZHPIDEGGZVJUOWCAJBVGXXLQPULTVUBIIBUVLHFACJCNSKYWQBNHXFDINYIPHBKNDPHFALBMSZRWJFKJUTMRWYXJMTPJBEXBCQZIQLXWQRMCFGZSTZZLSRMIRPAVLACSTSNGSYDUITWZKFSDOEEOPGYFFYRQNMOSKPABZKQWIVNODCNOEQXGWVKE");
    const char tmp_tmp_msg_1_0[] = {-128, 106, 47, -49, 29, 41, -31, 59, 101, 104, -43, -114, 95, 34, -50, 70, -44, -96, 82, -82, 76, 29, -111, 105, 87, -109, -122, 93, -98, -124, -65, 50, 78, 107, 34, -21, -94, 9, -106, 71, 30, -112, 77, -34, -116, -71, 111, 34, -52, -39, 106, -10, 96, -50, -45, 69, 0, 96, -39, -12, -50, 104, 63, -57, 27, -10, 57, -18, -30, -22, 40, 48, 44, -6, -124, -49, 77, 76, -72, 50, 88, -128, 7, -105, 8, -88, 37, 96, -56, 58, -76, -69, 75, 0, -54, 35, -12, 110, -23, -27, 1, -20, -92, 53, 101, 2, -8, 19, 27, -85, 85, 55, -46, -65, 9, 123, 51, -59, -28, -92, -27, 39};
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
    msg.setTimeStamp(0.495552202911);
    msg.setSource(56431U);
    msg.setSourceEntity(54U);
    msg.setDestination(29273U);
    msg.setDestinationEntity(235U);
    msg.plan_count = 2298U;
    msg.plan_size = 3572939846U;
    msg.change_time = 0.838393279253;
    msg.change_sid = 44048U;
    msg.change_sname.assign("BZBVMQIKUURHFOEFQCWMGPPPVSWSFKBTDYNMEDYAQMNRTHUIGTEBZXHHCXMJSUYWCGWGIQXDFZTWMPAIBTMKKYYXCKEGBIDGUOGPOERKLBARNDJRVOSCOKUNJTFCEQVANXRECSKLKZVPZLJATRVYXCNBLWIZIDFVPHDVLAYMSSDZOJOGFAJXVFMHTQZSXPNJHTRFUGQYNQGHLXWEHACHWZQKIAPLLFUZNUBDJOMNOTRSVXLLPIUAJIBS");
    const char tmp_msg_0[] = {19, 105, 86, -81, 12, -23, 4, 13, -39, -33, 97, -62, -75, -16, 110, 61, -30, 59, -125, 56, 73, 83, 33, -28, 107, -37, -10, 75, 121, 84, 100, 89, -62, -68, -116, -29, 113, -115, 57, -111, 98, 113, 111, -17, -75, 12, -121, -43, 59, 2, -39, 9, 59, 18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EKQZNMRLWCCUCDEVQGKHHDXZJXJDEHHTUMXVAXYVZKLBNGXGTNJOERRGQLWMANNTUNTSBPNTCHXLJGOSFVGROAUPWYVOTGYOEBFSPOAMFCRRDOYJAIZJBMWLJKJQSRNDSZQIFHBEDAPWIXFCKWKMCUUVSWTTFVOGNLMQBKEPYVILESNPLOLBYUBFXIUKSIADRHIMCDUQ");
    tmp_msg_1.plan_size = 63006U;
    tmp_msg_1.change_time = 0.902183428661;
    tmp_msg_1.change_sid = 2730U;
    tmp_msg_1.change_sname.assign("CMGZIPHXRSIBSFZYNFDCBVLNEGDWSWQTSUWRBCZTOUGNTHVBVXPBPHSPWTMHMOZSUQYIFJLXJEVRLDXBLFCADNGWYMIUCRNLQRFHCYVQAUAIKCBDAROCOKPIJWUPLRWSSZBQXHHZJVPDJGXIRKRGMBDLBTVAVFXTZDWFQGFEUKTAMMNILVUSWZEPYJDEEJVOGQPOEACHNJ");
    const char tmp_tmp_msg_1_0[] = {-66, -30, -59, 21, -45, 52, -20, -66, 28, 120, 26, 47, 49, -18, -96, 20, -126, -24, 92, -73, 90, -87, -67, 114, 35, 119, -37, -119, 114, 94, -18, -11, 14, 125, -123, 33, -60, -108, -30, -35, -125, -50, -27, 106, -69, 110, -120, -19, 126, -8, 51, -51, -19, 116, -109, -40, -18, 126, 121, -35, 48, 33, 35, -73, -76, -28, -21, -41, -128, -107, -41, -35, 79, -113, -126, 107, -92, -89, 123, -93, 45, -74, -81, -13, -109, 46, 111, 16, 125, 84, -34, -29, 44, 13, 33, 64, -89, -6, 42, -17, 118, 34, 20, -94, 43, -111, 116, 48, -46, -32, -29, -67, 90, -75, 86, -13, 20, -83, 84, 38, -61, -45};
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
    msg.setTimeStamp(0.266631994606);
    msg.setSource(34564U);
    msg.setSourceEntity(170U);
    msg.setDestination(20232U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("YFFQPOITUAKOJWMPEZPJGWBFJMVHSVKKNEYZHKXWLVWEYODXHBMSQSRAFWVKPUQZZQYCELISRAUZOYCMHLNDBGQHCIUDAVFCOPLRIDLHRWXLBXGPUFEDZIRZQMESWTDFITMEUZURKJLCNFYGRAAVINHQTPBHRIBQKBBNJNQYNCFCBXCVSX");
    msg.plan_size = 877U;
    msg.change_time = 0.652038948262;
    msg.change_sid = 49879U;
    msg.change_sname.assign("QDRNJFTENEFEDMRBECZKFGCEMQAXXKMGUUUPTXMLTRBTPKWTZMVNLSQCYMVRIIUVGQIDEEQJODSJCDZGWIPUOZNFVMAYCBEWIPNOBFXYOZQZBOONHRNGACIDBMQC");
    const char tmp_msg_0[] = {70, 8, 0, -76, 53, 108, 4, -80, -124, 80, -23, 52, -57, -46, -96, 20, 24, 91, -1, 67, 8, -59, 49, -4, -72, 64, 104, -1, -31, 111, -70, 106, 87, -90, -92, 88, 7, 121, 37, 96, -23, 124, -1, -22, -64, 81, -21, -2, -36, 40, -111, -11, -7, 68, 94, -67, -20, 100, -47, 111, 76, 40, -59, 57, -82, 45, 38, 58, 30, -47, 51, 91, 79, 24, 66, 84, -126, 75, -55, 68, 40, -88, -34, -4, 64, -30, -116, 104, 64, 19, 84, -12, -117, 91, -114, 20, 101, -22, -128, 81, 92, 120, -16, 111, 86, 88, -28, 11, -113, -83, -2, 44, -94, 83, 0, -72, -127, -82, -61, 68, -6, 9, -63, 90, -59, 31, -79, 77, 68, 105, -46, -62, 90, -86, -67, 79, 17, 7, 11, 124, -115, -47, -126, 31, -87, -72, 125, -26, 71, 29, 52, -14, -111, 101, 31, -40, -121, 125, -32, 45, 52, 16, -90, 110, -118, 24, -118, 53, -74, -67, 91, -15, 16, -112, -8, -124, -126, 110, 114, -122, 121, 21};
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
    msg.setTimeStamp(0.97569031292);
    msg.setSource(60537U);
    msg.setSourceEntity(122U);
    msg.setDestination(27561U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("GIHILLMAADBGBAOWKCSMWPJTASLJZYBQQINECARNBKRZJFSBXPDKPWUUNCPZQWNUGQLZZTKQTMBAKEFAOQVNWMJSIUHDICVHLCXOQE");
    msg.plan_size = 50120U;
    msg.change_time = 0.711500501171;
    msg.change_sid = 44370U;
    msg.change_sname.assign("LMNVWYNQXUVODSXUWTGMOOTPRQOYCUIZDFZFRTFOPMGFUIEVLKNJGZSQVJKFQJTNCMTHSDROWB");
    const char tmp_msg_0[] = {37, 71, -81, 46, 34, 13, -98, -102, 73, 22, 80, -78, -46, 27, -11, 94, 95, -57, 52, 47, -104, -66, -5, -37, 57, 124, -126, -22, 119, 69, -8, 44, -91, -46, 122, -10, 65, 81, -82, 67, 14, -5, -81, 125, -92, -27, -12, 24, -22, -57, 85, -65, -104, 36, 123, -92, 98, 64, -71, -46, -120, 98, -9, 12, -97, -89, 16, -89, 0, -107, -118, -4, 82, -115, 122, 19, -13, 106, 110, 117, 96, -5, 74, -121, 69, -60, -5, -62, 3, -55, -5, -127, -113, -57, -24, -60, -47, -65, -108, 108, 52, -59, 25, 116, -114, 43, -95, 5, -9, -22, -25, 10, -37, -108, -40, 68, -88, -1, -84, 76, -106, 17, -111};
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
    msg.setTimeStamp(0.977501659324);
    msg.setSource(54808U);
    msg.setSourceEntity(43U);
    msg.setDestination(51433U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("QUXOWIWRNNVAJUMFGKLUQLPWUHGSVTZJSXVLXWZZOJGXJEBYZNGCWFCQVOZDYWJKRRFXHWRYHSFQCIHUUULGILITDXWCK");
    msg.plan_size = 14213U;
    msg.change_time = 0.0490156348827;
    msg.change_sid = 50959U;
    msg.change_sname.assign("SQSHKLHZKRIHXKIBHQPJ");
    const char tmp_msg_0[] = {-6, -102, -9, -105, 0, -44, -94, 76, -74, 61, -56, 116};
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
    msg.setTimeStamp(0.602790645424);
    msg.setSource(57390U);
    msg.setSourceEntity(97U);
    msg.setDestination(26420U);
    msg.setDestinationEntity(107U);
    msg.type = 72U;
    msg.op = 119U;
    msg.request_id = 28543U;
    msg.plan_id.assign("XGDRFQNJULKYPZVICZBOHMVDPUATSHFDP");
    msg.flags = 38267U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("AVKCCDDPUJE");
    tmp_msg_0.reference_frame = 58U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 53863U;
    tmp_tmp_msg_0_0.off_x = 0.156011607218;
    tmp_tmp_msg_0_0.off_y = 0.5042688493;
    tmp_tmp_msg_0_0.off_z = 0.436023051134;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OINWHPEGMQBUZJENXMHXJYBVRQZHGDHIBGTPLUEERMWZZLYJBYZMAJZPRMECNHWOAWYKOXVEONQXZHQSOPTIMVTRUJSCLTACFUUFGXLUWDVLPDAOQQQQPPCIFRLINUJOTFVPWBODFNVDUGACTOTYSEVUGYTJHSFACNSDJIQWDWHYLU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HEKRCGVFQJTLUZJUUNBSDJMPOZVFOCZKWEHMXNDCOGUUHPOSYIFMXCLTXIJMNLWVIWOYZSDXLDWELECNOGUNSQAKWMXCMCUXVRAJGMUQMLDIAIFQERHSKBRWZEVJQBLTPKYANKCBDIKNBZXNWNFQXPWHSYOOGCREYTPOEBQGTRMFHT");

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
    msg.setTimeStamp(0.969826063722);
    msg.setSource(39186U);
    msg.setSourceEntity(122U);
    msg.setDestination(12307U);
    msg.setDestinationEntity(209U);
    msg.type = 124U;
    msg.op = 99U;
    msg.request_id = 19922U;
    msg.plan_id.assign("PNTBNFYXFCMHJMOBVPURRQZGIVTLDHNWKWGRFFAJNCXTKUCMGWKQIOPBGGIODOEMQYUUIJUYRTOTUPLEIISVHSAXSVAJXZXYQPRQRTQPISMLHPWMDKMBBWBLZGKIDYWNKVMACQHEHMCAXYYPGLOOZXFFAYRDLQFZDTOAVLWXKEOWRHSGJ");
    msg.flags = 37528U;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 75U;
    tmp_msg_0.x = 0.500415582195;
    tmp_msg_0.y = 0.479911607078;
    tmp_msg_0.z = 0.15233021831;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XILFFQBBGLNNWEYRINHOGTZVUAPZBZNXDYXXHODQLKJWSXZUAGXVFASPJTEJLAHLKKREEPRDMVEJFVJDPMQAABZPIHYSTWZDTTY");

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
    msg.setTimeStamp(0.242016725545);
    msg.setSource(15555U);
    msg.setSourceEntity(60U);
    msg.setDestination(13257U);
    msg.setDestinationEntity(48U);
    msg.type = 231U;
    msg.op = 192U;
    msg.request_id = 14294U;
    msg.plan_id.assign("ZLXFSAIMNOOBDCBONEKEKWNKRBRTWQVVDLQZHBTRZTMMYJUHJCYQUGZXDCFGPNESFDRGBQTVGZFOHCYYXZAHQYAQETPUJVJLMNAITHBWGOETUDXXCKASCUORPQBWVOSJYNBOLUGGSXFLAWGRZTVPDLFAQMLRALKWWJFQZRXXDBUNKWKOVIMIRMELOCCXSHJHKPXSIIKYVSQPYCMNETTIRZFWNWFGBHPFVAIMDGCLUJPPSDUJMEYP");
    msg.flags = 51678U;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 107U;
    tmp_msg_0.frequency = 86498854U;
    tmp_msg_0.min_range = 30160U;
    tmp_msg_0.max_range = 36642U;
    tmp_msg_0.bits_per_point = 236U;
    tmp_msg_0.scale_factor = 0.0388508731224;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.998535077095;
    tmp_tmp_msg_0_0.beam_height = 0.516994863436;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {-28, 81, -91, -37, 7, -17, 70, -61, -73, -126, 75, -35, 0, 120, 39, -94, -1, 46, 14, 53, -4, -27, -94, -58, 7, 117, -28, 46, -97, -91, -25, 86, 66, 12, 54, 89, 115, -56, -91, 114, 38, 0, 110, -7, 2, 21, -73, -41, 42, -56, -97, 46, 0, -14, 75, -96, 94, -25, -72, 92, -36, -17, 121, 14, -114, 66, 24, 122, 70, 34, 124, 93, -63, -124, -51, 122, -91, 103, 43, 94, 58, 39, -75, 4, -121, 58, -105, 41, -79, 12, -7, 61, -16, 85, 99, -113, 101, 9, 105, 97, 64, 14, -91, 26, -51, 74, 119, 103, 112, 93, -55, 17, -121, 35, -16, 65, 92, 106, 20, -96, -18, -57, -63, -108, -120, 103, -9, 62, 98, 10, -93, 72, -16, 28, -96, 41, 10, 2, 58, 84, -21, -65, -66, -20, -64, -79, -118, -75, -4, -6, 46, -96, 47, -25, -124, 113, -77, -3, 23, -80, -51, 39, 15, 25, -105, 106, -126, -94, -74, -31, 109, -36, -71, -72, 51, 40, 49, -32, 107, -112, -1, 0, -59, -48, -115, 94, 123, -48, 61, -106, -49, 92, 8, 41, 58, -109, 113};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BESEGEVPOACMKQKFYHEEMTVYAAJSDHARAVVMRUXASQDMXMBVOJCWNGXTDYZFDAKQUCZWJLXHODWBWYTFNUQIOVOBHTLHWNFUIYJFPFYBDBIGGKZZLLIBTKIYTTGIJWSBXQNO");

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
    msg.setTimeStamp(0.354224358267);
    msg.setSource(28197U);
    msg.setSourceEntity(178U);
    msg.setDestination(62206U);
    msg.setDestinationEntity(65U);
    msg.state = 66U;
    msg.plan_id.assign("LGGOUZLOCLEWLZFJGRIURXPHVPXBDDTENOSEBSVWTPCTEVBZOXVMCFLAPWGREIPYUKSQXYQKOEUQDJUUAJEGQMHDFLSJKVBCZK");
    msg.plan_eta = 108203792;
    msg.plan_progress = 0.204529871904;
    msg.man_id.assign("QBYEWAAITMVUXKXEZGRPLXGIZKJVQVSDXXHZKTUYEXGLAHDGNJCYVZEITGTRVAJRLYHRMDSFSTNFKURDYKWOZIHBCJIJMQVQFKRPYGXDHWDSGPCDXQLIAEWVDMHQIPZE");
    msg.man_type = 8610U;
    msg.man_eta = 1802314049;
    msg.last_outcome = 146U;

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
    msg.setTimeStamp(0.00762477864684);
    msg.setSource(29084U);
    msg.setSourceEntity(197U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(82U);
    msg.state = 205U;
    msg.plan_id.assign("PUQWQVXQVPUWVWNSLHQWSYYEDBMFCVNLSJQOAEPVFZJTIROGLTWCKIYAHMBGYBXYDCCGWXLSAAZCEFALJCAEYBJZHODZNBXIDBARXUIXGGHUCMUCSKWESPBK");
    msg.plan_eta = -1672258115;
    msg.plan_progress = 0.111918085062;
    msg.man_id.assign("ZXRFSEMPBBTEFHZTWXADHJFAFRIEHQKSTIWMVKJCGSRQTYQVLVEMGNBDOSXBW");
    msg.man_type = 58765U;
    msg.man_eta = -1984073502;
    msg.last_outcome = 33U;

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
    msg.setTimeStamp(0.861140550451);
    msg.setSource(7274U);
    msg.setSourceEntity(213U);
    msg.setDestination(39220U);
    msg.setDestinationEntity(214U);
    msg.state = 183U;
    msg.plan_id.assign("EBLPYHLCPEGVSELJPJGIQHASZRCRIQWYWFQVCBTDPZZIQJQHNDAETDLUFEOJFJVTZVWXJDCTWTIWONWPMTKXHSFKCFCRBSKVCYMLMEQZZOGDGFMCYVRBHYXBGRMXM");
    msg.plan_eta = -163804063;
    msg.plan_progress = 0.720215756709;
    msg.man_id.assign("SKNEWNSRIHDYIWTPDZNGTBRBKZCEKSZYFAIGDZPCTSSMBHLLWYXLCLWHBBNZSHSODDOUERWLFZQGGORQNUZIRFOHWKUYCHBTXSHYNAALFLVJIRXJXHBYXUFYEV");
    msg.man_type = 62767U;
    msg.man_eta = -877611126;
    msg.last_outcome = 250U;

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
    msg.setTimeStamp(0.543007517092);
    msg.setSource(34748U);
    msg.setSourceEntity(112U);
    msg.setDestination(46652U);
    msg.setDestinationEntity(208U);
    msg.name.assign("VSUVYGBAIHWKTXKQSFACOMJZQGHLZNPUHUUYLGOSJHKTHWFGANPFNMRMFIVNHNJFOJSAOZKECUBAPDBCDIGVUTSKQGITJMZGZJIEODCDPRWCGANTFRSRPSTDIQLBQDBXLXYOUWYUENDFRBLRVXQQPRXSNQCQFUXJOHRI");
    msg.value.assign("DENDNYKZBFOUXZQ");
    msg.type = 228U;
    msg.access = 70U;

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
    msg.setTimeStamp(0.489343497991);
    msg.setSource(20296U);
    msg.setSourceEntity(205U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(205U);
    msg.name.assign("ANEXULJSWCXLRQFPHNLQZLZYLZVIPCNETHLJOQBJUDYOBJKMYFOXFVJOKCECMVFTUTGOPGQCKZIYUWIDZPBBBAFIVMREUNBLFSWNEKGJPHHNJBARYFWTGKJBXAEDPPHRDDLFUMWKCIXHQMMUXSHZTVORZYDHNKLSTUCWVT");
    msg.value.assign("PYTEVDBZHBYJSYYHOCNAWHQJQEXJQKNCRJBA");
    msg.type = 171U;
    msg.access = 220U;

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
    msg.setTimeStamp(0.768972879057);
    msg.setSource(25898U);
    msg.setSourceEntity(49U);
    msg.setDestination(59755U);
    msg.setDestinationEntity(235U);
    msg.name.assign("VCSPGOGHHYSNQQXSSNYAYCLTNHPIMSVXKZCEQVWTIHLWRZOBYFLUHOVLJANMSGCDNWEIDFJLVLULHRAAHQKCUUORCEKYEMWNBFVNWMGOYGANQKIUXFIFBREWABPCLTZXIKSZXQUTVEBSFRRFKTQQAKFUWCEZKMIHBJYIDXUNQOREMXGRTUPPFJFGCRWVYDWBDHPSZMKLRYDBXDQDG");
    msg.value.assign("BHOFXSMJDXMDJSDFUNDGGCGYDDEQJQKBQZGILAQYWMGKCAYAYMXCEBQUJRJWBVEHTWYNRKEALZIZTTREVBCTNSABYQVVUQFVOUZUONLPOXPXYKMBCTTPDBZLWD");
    msg.type = 69U;
    msg.access = 232U;

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
    msg.setTimeStamp(0.0319195107227);
    msg.setSource(51536U);
    msg.setSourceEntity(162U);
    msg.setDestination(41120U);
    msg.setDestinationEntity(251U);
    msg.cmd = 60U;
    msg.op = 223U;
    msg.plan_id.assign("JEGSSTQUOUFWBNWQPJLVDTTOZZJIHECDREJLTQKIZHAYXFVRAZQGITHYVZHVMLGQBFMZINKVPDOOYYRUDKIRMHQPIQKZVIOWCMPQKEAGXMNCNSADNVMUPBGUGXMJCVWILXMIUJCWVJHFLGKCMRTLSAHKTVUJ");
    msg.params.assign("JZQFCBVZNIJJHLVHGNOMNTSVYSJWHRMQLPVYJCVCKDWAYOTBFANCGBRTOWENASWHGEKTMGIQEWZOKMVQYUVXEMITKUXSCBSENFLGZKSHDXRTINQIDRQCXDVHEGUQDEIANIOFFUZAQJRSBRGHCKSH");

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
    msg.setTimeStamp(0.758561809877);
    msg.setSource(53053U);
    msg.setSourceEntity(181U);
    msg.setDestination(34695U);
    msg.setDestinationEntity(30U);
    msg.cmd = 152U;
    msg.op = 129U;
    msg.plan_id.assign("UHOEWWOFVKUSNJZLINOAMQMEGGVQHGUWEDJSWBJFYHRFACIEUVYXJFANPAOCXGLDOHTOYLQJSEWNHJBVBILYBRKVMSSOYPULKJWKVMTRNLJSZTJWDVXRULIKTCAZXZPHMSUVGXKWMRTUHVMISRCFLCEQXDMX");
    msg.params.assign("WBBINOREZFKKDUDQCPSTACDMBLXPCILMQHNXQITDFAZAICVE");

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
    msg.setTimeStamp(0.4833239279);
    msg.setSource(26201U);
    msg.setSourceEntity(199U);
    msg.setDestination(25076U);
    msg.setDestinationEntity(239U);
    msg.cmd = 194U;
    msg.op = 107U;
    msg.plan_id.assign("IWJWQJTNJFTFDYLFMTBIFXGLCYMQQHRORWPVNKWDM");
    msg.params.assign("OSSOWZJAWYBDYAFBKBRALNNUOQZXPPHGHXKDIFNCPFFBQGGEIWDINKRZWQIMRMMOKY");

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
    msg.setTimeStamp(0.914058132337);
    msg.setSource(46559U);
    msg.setSourceEntity(41U);
    msg.setDestination(34594U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("RQSGQEXBTQFYXCQNSCTFIBYMZERVHMZLOCRGAXEGUZXYRUBVYQWRBBZTAJBONFCZPWWJDAVM");
    msg.op = 76U;
    msg.lat = 0.413873486503;
    msg.lon = 0.282642041635;
    msg.height = 0.928691095193;
    msg.x = 0.312807802306;
    msg.y = 0.900008608431;
    msg.z = 0.946317447239;
    msg.phi = 0.250330400485;
    msg.theta = 0.323224843302;
    msg.psi = 0.345870585128;
    msg.vx = 0.363510518443;
    msg.vy = 0.759307665098;
    msg.vz = 0.684702234022;
    msg.p = 0.876172337155;
    msg.q = 0.0943683110969;
    msg.r = 0.0989576320047;
    msg.svx = 0.426067840231;
    msg.svy = 0.663830189108;
    msg.svz = 0.551116733254;

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
    msg.setTimeStamp(0.066879028206);
    msg.setSource(56816U);
    msg.setSourceEntity(126U);
    msg.setDestination(17665U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("WITFSBIQPHQURINGURHONSPFXECUOIJJGQLWFAZTSBQOZMXWIHYMBYJQXAZCFHTPVDXGHOPUVSVBZXNMCJNUGMRSHZDOKHTHPLAMKOYUDNMIPPTBFELQKNDYEKMWLTZMPLVQJDLVGISQBTKZDWRKEVVAWTXEGBMJZAZHXECQUAO");
    msg.op = 254U;
    msg.lat = 0.882713843068;
    msg.lon = 0.448722721612;
    msg.height = 0.546862603173;
    msg.x = 0.859996567384;
    msg.y = 0.0361787527682;
    msg.z = 0.714251518667;
    msg.phi = 0.230903303278;
    msg.theta = 0.495392699264;
    msg.psi = 0.700046468298;
    msg.vx = 0.425856159688;
    msg.vy = 0.461464810618;
    msg.vz = 0.434791616167;
    msg.p = 0.69735734356;
    msg.q = 0.810723344864;
    msg.r = 0.641991999335;
    msg.svx = 0.732039215012;
    msg.svy = 0.680179105283;
    msg.svz = 0.681132901717;

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
    msg.setTimeStamp(0.18979957307);
    msg.setSource(24368U);
    msg.setSourceEntity(84U);
    msg.setDestination(30045U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("ZOEOISYTEYSYQYSORCNKXJHZRO");
    msg.op = 136U;
    msg.lat = 0.757696047942;
    msg.lon = 0.704324622034;
    msg.height = 0.0976249946078;
    msg.x = 0.738495357687;
    msg.y = 0.91431941167;
    msg.z = 0.530879215474;
    msg.phi = 0.102402779231;
    msg.theta = 0.831860309821;
    msg.psi = 0.818667111469;
    msg.vx = 0.999677262023;
    msg.vy = 0.959772378426;
    msg.vz = 0.852592934329;
    msg.p = 0.419254079817;
    msg.q = 0.747097727038;
    msg.r = 0.524400486977;
    msg.svx = 0.974094417594;
    msg.svy = 0.805752714829;
    msg.svz = 0.750409686256;

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
    msg.setTimeStamp(0.141514002426);
    msg.setSource(28116U);
    msg.setSourceEntity(83U);
    msg.setDestination(12405U);
    msg.setDestinationEntity(24U);
    msg.plan_id.assign("ENZLFOBYHRXZVCPE");
    msg.type = 61U;
    msg.properties = 54U;
    msg.durations.assign("LOLAAPSJEQUPWXJIUEJXPXPILDGZNTVQVIQPRHMMPMKOANXVDRBNUSKZYMYOINLSYYHFYACOZIHRSEITKI");
    msg.distances.assign("UPPHFSMAQNLKIBUGPMPERFVXNYQJWTRAAMEYGQVRWOBEDAERCDRLPIIKLIJWGLKCENYBNXGUVWSVHVZFLTOFKMCUNHWQRUXUKFZTMHTCAHTEBUBQHXYJQFOTBFSKLAONCSKUEZECVJYISPTXYBPHMABSLIDZGQNOXZGJ");
    msg.actions.assign("OHCZRPEVAVYYDTEISUZKWWGRGPYHCUAHJFTSXIZZHXTIEGZPLOHAQXSZPXBTXMCEOFBPJQFYLETYXCWPLUAQATFZUOAAECARTKPDKRIQQIGUDHTSHBMXIRXJEFYNUPZRDJLVFKIHTJSQGOMNMKVDUCCKOKLMBKYNVKZUQFLFHMCMRGWVJLEIGVSDVOJIBDSWQFDMSPBDXJDHNRGTNSXOBRNWBVNQLNNGEAWZUOROSQGVJYWWNAFWPEC");
    msg.fuel.assign("WPKUCTBRMDBPSEZHWIHSXBZEJTMNLQAUFHNHQLZPWSBXMQLJDEYQCADRRYPVGULZXMDHIJKEXUCIYPBCOAINDTWVJFNBYLLHEC");

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
    msg.setTimeStamp(0.839260237045);
    msg.setSource(54717U);
    msg.setSourceEntity(234U);
    msg.setDestination(17955U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("CKABEWAHQBMSDCXWPIBWJQMIPEFQXPXJUZGKKTRGYTSCGDJYUNFPEVHNJTPDHIZZULTJVAMHSQTBUSFODMAKOIQJCUDKHSZWPWFUNNGNEKZPFSGAOIFUGEAJGIERXGCZLROVMMYDSHNTDWWHEXZQRRMBWVBNTRXPBRVCCYCFLLVXOYIPOCRAE");
    msg.type = 30U;
    msg.properties = 155U;
    msg.durations.assign("LCBYMVUAULTGGABBMEIIYXWNXLIESHMVUHQJYSOCWTLRCYIUPOYCKVRDTYYVWPGHFQBDXXHQZPXKOEFLSNSISRGWJUOWEFKAKSFTVNGDKUXXBPHMRWITZKBHTAKJLTAJBUQDJ");
    msg.distances.assign("HDHGQOINDZXXHYCBVTWCSGZPCRIBBXLPLKQFPYWNKAXPRNERWWWUILQEURRORTEHSMKRPSO");
    msg.actions.assign("AGYHLPWPWBJHNZDSTQUCZDEKVYJWBZLZPVAHTBAKOQGYJPMCQUCOMSAWFVGGFIWYDBWMUBISDXVGZLUIIOWFVJNDLGKKZFKHSUEU");
    msg.fuel.assign("MLXBJXIUBMIOKUUYZXVPQKTZOSKCXYNBEFGCGIVUCJATQOCPQNXPZTLICHPYFAWXBJBANREITNWYDPGHJOSCMVDVUPONWZZPWLEVMBCCHKLJVDRFNSDQRTXTMCFLRMYGQGURVNHRFEGRZHRBMKQLSRZGDIPXKGPSTADSOLAWKFUOZAJUJDIYHNMKKZXVVFIIIWGTEHDWFUYQHLAYRDSYOUMWLWEAHQJLCZMJYQGAESNSDBOAEVJPXKETN");

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
    msg.setTimeStamp(0.956250260178);
    msg.setSource(36761U);
    msg.setSourceEntity(69U);
    msg.setDestination(60478U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("BKDPZUVEGTRXEHMKIRCSYNDNPZYXPUISUCFCIHEVNRBTIAITXYMBBDQWCRBDIAAGLCRWKYNG");
    msg.type = 196U;
    msg.properties = 42U;
    msg.durations.assign("VFWULHCPTBJCPPHCLRBLDQDGSINRMCNVLJUVMVJYMQGREAYTJFAYFJODTEXANBLATDWXOGXALVEKTSDNJQAKTPHHSYZTEOEOJWPAUNKWWVYIBVNUHCMMESDUFYGKM");
    msg.distances.assign("DVBLYZPIZKBQJJMQRUPJHUXRMFSPTUYMIQCZQAAMXUKAUWLNRSDJRXUTFKTZLZCSLVUEBJTKSIZOCTPKBXQYKHIWXFRBJREJETBNAMCNHXWDGOFNEWEDKBWNESCYGIJRDCQPEQGFLAPPPFGCQBLTRZSFLENGNCFCDTXPQHHPRBLTISHXYAVVUWSTWKDGIBGUZGMROKOYWIYHWIHVWNJOYUVQYOA");
    msg.actions.assign("NOVVBEKRTUQKWEZHYRDOZFFLYFXJZPJEZUIRYNLSNBCMSTYKGFWGCLHWRTEXFHNSMTILPPCXOCSIMNMOOXZFAEYHBZUQPHZTQBEPKXQJUWTKVDPFAJETSJRBGSOAJWPBMIJQHVSVPCULVPVNTFMWIWVHGHXCXXXBQKGTHRWMWGYNRROOZDZYJCGATWMSINRBGDFNKEKADQZISUUKXQDASAALYFCOKBLGJDJYLNQMUD");
    msg.fuel.assign("IJMWMWIESDEGBCCAFMEYJBTEELMNPUZMAMGCJVHBRWRFNAQMSQZMJYIVTYJSVCSXGGDKLUOAZDACDRNPBVQXUPOKHSKTIIBFLNYNQRANRKFPSTJBKUDBPBWVNUPRHUQ");

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
    msg.setTimeStamp(0.564415770153);
    msg.setSource(57443U);
    msg.setSourceEntity(158U);
    msg.setDestination(40332U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.855644661288;
    msg.lon = 0.186815699563;
    msg.depth = 0.98736130363;
    msg.roll = 0.67406701798;
    msg.pitch = 0.781135085262;
    msg.yaw = 0.28736359837;
    msg.rcp_time = 0.496663361059;
    msg.sid.assign("WZRYOLRWICBJJPKWGTZDCAXXCQHCCAYAXYPZNTDUELDKKENBMTYBCQNSEDEHJRSBSOKIEYJIMEGLKPGTRWHJDHMVOGAXYDZYGLWZYPUQIGOMXIKTNXSTERGDQSLZNPREHSPWNUMDRTFATBOMZQVSNCQVLVIHERKPLJJEOVQNOUMCXBBTAGULOAUUSWPLFKDHADNGZPVIVMBVNVC");
    msg.s_type = 149U;

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
    msg.setTimeStamp(0.229602543269);
    msg.setSource(9648U);
    msg.setSourceEntity(99U);
    msg.setDestination(45279U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.0303068015191;
    msg.lon = 0.31686447464;
    msg.depth = 0.909416556392;
    msg.roll = 0.228099467255;
    msg.pitch = 0.966972610357;
    msg.yaw = 0.427202186962;
    msg.rcp_time = 0.451300274584;
    msg.sid.assign("PTOLVWKWBDAEIOJREBWGJRTXMKXKJFQRCCGMGEKDPWUNFCMAPYVNTXOHUDIKSIDJCNLYTXOJLMFQITHJUHTHCNRFZBWWLUO");
    msg.s_type = 140U;

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
    msg.setTimeStamp(0.707326096797);
    msg.setSource(9332U);
    msg.setSourceEntity(131U);
    msg.setDestination(2144U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.225955918834;
    msg.lon = 0.0067013063135;
    msg.depth = 0.812549958268;
    msg.roll = 0.313099668544;
    msg.pitch = 0.350485281493;
    msg.yaw = 0.152961125916;
    msg.rcp_time = 0.332633768602;
    msg.sid.assign("UZHTUQMLIMBGFKLSJXHBMWHYTBBGEZONFAHVUKNNTARLGEQMCJXJSEBURWTJMDDZEOURTHHLUYRRLUGFWBKJKLNCYPZRQNNWCDNSEHGOQRFILTIIWBBNKIXEDJNPMQASOKCZTKRZUBUAFLZXYCIXLWVVYSOXJVSAFTJUPVQJG");
    msg.s_type = 17U;

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
    msg.setTimeStamp(0.378746518616);
    msg.setSource(19754U);
    msg.setSourceEntity(58U);
    msg.setDestination(1117U);
    msg.setDestinationEntity(133U);
    msg.id.assign("QHPLXCVLCOUALHVNBZHTXTYWONNTINTAJHVWMAPBGKIGSETZJFCMUEDAQKDOZYACAFNRQBFMFRXGWXTZUHMDMHQERSSWTWXDYYOISHQFEXBLTPLXPLHISBIGWGFXAVNOESCPJIZUGUKEJWYZDYKVIBHDOKRJDYDNFWQMYLAUKVYBUSEZCCROKHLJMXVIZQMCQMJNRIGIAKVULXUVEMKSAJYJBGURPQGFRRJPKNFDREPOBWWLZOPECTBSSFGP");
    msg.sensor_class.assign("SNGATESRTWGIVUZCIQMBPPKGFWIHODAACFTINXWYHQYQWVWZAGIJVLZDSDXRUMFZNPLEUJMJRODPVDSVSGNHDKYIWZZPTLGCVDUGSLBMXDBNXPOIAMQURWHKFPSVKTSMYLUHUCYEILJTTRQCDKOJCEJDAFEQUKCBNOMKNRKCWKGTNJYBXHCBXLPOERIEBGHIRMZQFCYHJLLWQEJMAXAENMZ");
    msg.lat = 0.0207353849829;
    msg.lon = 0.833375665519;
    msg.alt = 0.506758464199;
    msg.heading = 0.598137210895;
    msg.data.assign("XCFNQGVQLYATGQVYPXBLTGIMKOBIBLKGFEKQJXJTHGFHKQDLMADINEUEMGPBTSSOKPOFBINSDRSWSSRCTJYRMIRPZACRVCXFYOTI");

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
    msg.setTimeStamp(0.287318923632);
    msg.setSource(55327U);
    msg.setSourceEntity(252U);
    msg.setDestination(22471U);
    msg.setDestinationEntity(108U);
    msg.id.assign("CUAHLNTZCHPHXVWFKGBSLUNCALZSCCNDGLDSHWPHERZCVSIIMYGPFAIFNAQOMVJOIXQUFMEJMGUUZRLTQDMUINQOEWOLAUSYYBPOGISJFODNCDEIAPYTR");
    msg.sensor_class.assign("ZFCYOPRSHUWYQCCYMSTHBPGXTDMJKFHSKMFNJYIXNRFQNVDRFAGYTHIVREJZGDTXTZCNKDAXFAELWWLEEASJDVMWORXEXUBNBZCPMOBOGUNABHTZPGINNULHNAEWQCCWZFLXZFIUQZSWMSKSDRCYXPUQNPGDVJMYFCREJ");
    msg.lat = 0.89277451379;
    msg.lon = 0.570438753691;
    msg.alt = 0.347046187606;
    msg.heading = 0.128016145147;
    msg.data.assign("UVRLEZSPAJBJYKJAKMZRGXCRNEEMLHZDDZLOMTQMNHTUGFIVPIHSZFMZJHFZWEVXIPAULVMPKVZCXS");

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
    msg.setTimeStamp(0.712165703102);
    msg.setSource(29632U);
    msg.setSourceEntity(218U);
    msg.setDestination(13021U);
    msg.setDestinationEntity(150U);
    msg.id.assign("APYMJYNFPZHOMSVKNMJGUEZDRHJPTTTHUMGBOZLUHWWIJGPMOYHXWQKSJGEEXZVWUNIQAAFBFQCYCLAEZCWDJPSPMUYPBFWTDQQXKUIAYTCDOFFKFXGNINRDXGVVFSUCTKSESTLHFMCWLJWVKMXSEINUJQIBASUBVCQRLDRRELBIVILPVTDDDWANXBAYBYAZJROKJSQYOWHFEOXDGKZRPZMEURHKGCAVNQINBOQRRVZEGXBLGCHHN");
    msg.sensor_class.assign("LCOBIPZPDKNWIQXWCZLXYUZLMGDJNHSWDGXVMVCEQTIRXLIXRQPEIDWSTTQTQXNARAPVFKQPJVTHHNDKFCRGMZOSNEWFIYWCRNKWMYOGFSXYNVIJOPPKTWJVMZNOJTUOFGYQAXGREKGORWTJOVHRSUFVADLFQHWAFNZLRCSEHEKPNLBYBXGHEZLAMCBBYFFUSLLTKUEZJPJYBKRJMCQETUYDUCBIABDCO");
    msg.lat = 0.748625815814;
    msg.lon = 0.502935479251;
    msg.alt = 0.554774441032;
    msg.heading = 0.0757315789917;
    msg.data.assign("LXXRCWFETZYJINEJCOUCAYQWQRWH");

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
    msg.setTimeStamp(0.31020468323);
    msg.setSource(64799U);
    msg.setSourceEntity(172U);
    msg.setDestination(46254U);
    msg.setDestinationEntity(27U);
    msg.id.assign("IIRWXNZUMLHQQGVZCJJWAISPFBLTSREPLBKBOAGLWRQASGJSTMDMAQEMHPYTZHHERFVBZQWDLCPHTQCUQOCWERPSJTYGCZDUNFEWKMXAHJCDDFMUFMOCBYIFDOPGOG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LZUBVDMLUFIFUMZSTMYVYWAPDRCCLQTWVVNRJXSAOQBUBVOROWNOWFNKLIBTHIACSPDRVJJXIACUYYFMMPRDXCZKBEIXVFDNRBCHSKOBWZGJZKQJXLPICGEHQWBDWXJIMWXAPV");
    tmp_msg_0.feature_type = 129U;
    tmp_msg_0.rgb_red = 183U;
    tmp_msg_0.rgb_green = 105U;
    tmp_msg_0.rgb_blue = 121U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.599696468905;
    tmp_tmp_msg_0_0.lon = 0.441322420343;
    tmp_tmp_msg_0_0.alt = 0.127591662004;
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
    msg.setTimeStamp(0.468190111517);
    msg.setSource(51932U);
    msg.setSourceEntity(97U);
    msg.setDestination(225U);
    msg.setDestinationEntity(207U);
    msg.id.assign("FENSDIFKGHDEWFUBHIHIHUSYZOKJCTPRBJHPMVSOHILUKQYJVLMAROXDWOKJZXMBXALOPSAOUFLFNZAOJNLFCMTWCYGRLOZGGHHJDZYSLDXCWMCUWFETBYDBRPMQIJIBYVJNMBST");

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
    msg.setTimeStamp(0.845426085198);
    msg.setSource(35074U);
    msg.setSourceEntity(5U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(230U);
    msg.id.assign("RUOUSKILNFLNIZWZCDLJWULTZAPKVGPMFDCDCLXFQVMGTECXBKFJBFVOWORDEEZCZILSIASDXSFSIZRUPAYAKHETGWUNUCOMNOYMXXJATEVKSSJCZOSMFIKNWSTOADRP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DDKYPADKANQTMMQRWFIXZWBRMYZDBOCJYHABMYSZVPKMXXCDRASBUAOFUXIQBIETOVJVEKOFNLLBGJPYLNHRVXHWTEGTVSXOUHWNLNWLSPHDYOV");
    tmp_msg_0.feature_type = 78U;
    tmp_msg_0.rgb_red = 193U;
    tmp_msg_0.rgb_green = 186U;
    tmp_msg_0.rgb_blue = 76U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.617933424535;
    tmp_tmp_msg_0_0.lon = 0.441349930852;
    tmp_tmp_msg_0_0.alt = 0.325847947181;
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
    msg.setTimeStamp(0.0502512562867);
    msg.setSource(6612U);
    msg.setSourceEntity(116U);
    msg.setDestination(57457U);
    msg.setDestinationEntity(69U);
    msg.id.assign("UGYQTOUIQCXWATDGTMEUB");
    msg.feature_type = 222U;
    msg.rgb_red = 120U;
    msg.rgb_green = 174U;
    msg.rgb_blue = 161U;

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
    msg.setTimeStamp(0.170258776973);
    msg.setSource(7522U);
    msg.setSourceEntity(86U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(190U);
    msg.id.assign("BINPSQVVTXDQNEATGSLAYDGAAFFZFTNYKFYJJMGBWZKDQECPZVPLQRAMRMFLRBEIXWUEMLISDQWALJDBKMGMIDDCKZTSSAIOHYESHECYNKLSEJPZASVFBPLCRWBTXVRRNQWOHUUXROUFRHJFYKKOXPYRHNJWOTFUNQUWHAZHYKCLZDVEPIBDCIWUBNZPVNXZIX");
    msg.feature_type = 55U;
    msg.rgb_red = 180U;
    msg.rgb_green = 94U;
    msg.rgb_blue = 8U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.465225225277;
    tmp_msg_0.lon = 0.828677017379;
    tmp_msg_0.alt = 0.207067026914;
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
    msg.setTimeStamp(0.667858505742);
    msg.setSource(63436U);
    msg.setSourceEntity(166U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(43U);
    msg.id.assign("MCKJTHODLUPIYTDDZYCJXNRIACIYEYPKJNBWMWHMQZISDKQAPVDIYYTFGXBNFZIRBCQVMDFKEVLFOQPFTIEVAEQRRQJLJUGVNBIXNEDKLZSMHNSFSZKRUHTKTQAWDYKMHVGRSJKUOZANBXDFGXTNCZASQURPTXOBCPMLL");
    msg.feature_type = 188U;
    msg.rgb_red = 151U;
    msg.rgb_green = 32U;
    msg.rgb_blue = 241U;

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
    msg.setTimeStamp(0.531334287015);
    msg.setSource(6517U);
    msg.setSourceEntity(93U);
    msg.setDestination(18979U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.121559436805;
    msg.lon = 0.558699960907;
    msg.alt = 0.396492241222;

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
    msg.setTimeStamp(0.940569193417);
    msg.setSource(45347U);
    msg.setSourceEntity(29U);
    msg.setDestination(35170U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.816937687547;
    msg.lon = 0.0167909975625;
    msg.alt = 0.526158874933;

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
    msg.setTimeStamp(0.702632687904);
    msg.setSource(3106U);
    msg.setSourceEntity(143U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.75757173737;
    msg.lon = 0.444070043623;
    msg.alt = 0.587712814077;

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
    msg.setTimeStamp(0.56645592856);
    msg.setSource(55003U);
    msg.setSourceEntity(155U);
    msg.setDestination(36330U);
    msg.setDestinationEntity(129U);
    msg.type = 219U;
    msg.id.assign("AESIXUMGLJLIKEUVBOJMPVWIUYWLWWIYQYLTYWZYDYIXYSUAFXRVTCJFWINEHZKFITKLAUOWFZGTKBVBBQNPMCQPJJCCOHPHFEPQKQTMGSKVXSOHRXOPYDBDHVRQGEGTIJRJBOVWJGMXRQZMETYUCEZPSOCSHLBSPTVQABCLRRFCIMGPZMQQSVIRLDAWCAFALEPXDHAGDGZZBCDRKOUDTBUNWZEZLURKHJOMG");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 695163303U;
    tmp_msg_0.value = 117U;
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
    msg.setTimeStamp(0.759527354671);
    msg.setSource(53476U);
    msg.setSourceEntity(85U);
    msg.setDestination(26286U);
    msg.setDestinationEntity(177U);
    msg.type = 91U;
    msg.id.assign("JPKXTMPXXDLONFTZVJCQNBVZKXAAUATFRYCVDKNDTKYUYONRVGLMBKDCTEVFOVZGSWYAZGZLJXZBEEGIULHKGNXGPNATJHIHWFICYQQUDGYAJWFFZWRAXVCAVYBIHQSIHUUUBWLJKCOZMKBBSCDDSESMUJAESPLCNSLSTVZGLKRFSENFMQQRTWFQTIXOEMBWNIPGXIPTPWRIERYIURHYMSQPYQODCEBMADCKOLNVQJJHBHOXGOWUM");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("LVBAJPGWSRYAGLDHJAVSPWEHAIKVLJTIGFROIFSJZOKADPZZMRMEKCA");
    tmp_msg_0.action = 143U;
    tmp_msg_0.grouplist.assign("PYBTXHYCSOIAKMTMZLXTUPURLLRNQPFBGOGXIEQRLKMDPABZVASBMLJNTWZNDGHKTKUWASROCTRFOTSUYLQKVIHUBRHLHSJJOGRZXIWVQHQBXJSKXIPZLFJJEDPCDLKKRNXNKYFVFYWECMS");
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
    msg.setTimeStamp(0.177589730252);
    msg.setSource(45942U);
    msg.setSourceEntity(187U);
    msg.setDestination(4342U);
    msg.setDestinationEntity(165U);
    msg.type = 113U;
    msg.id.assign("KLCSSIIZFQSPRPERKWUCCWLXFZNALSJAKTTIDPLAYFNGQGJJBBDAVRYKDEBWPVFCOOTBKEMZZVHWSPMARRNIEVKJIMBYHCZZECKKDMPPAA");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.87935855079;
    tmp_msg_0.y = 0.958555834731;
    tmp_msg_0.z = 0.422015049026;
    tmp_msg_0.phi = 0.770779231812;
    tmp_msg_0.theta = 0.617349378142;
    tmp_msg_0.psi = 0.575443091348;
    tmp_msg_0.p = 0.477027520681;
    tmp_msg_0.q = 0.873787468868;
    tmp_msg_0.r = 0.664777430803;
    tmp_msg_0.u = 0.37623309893;
    tmp_msg_0.v = 0.704212636946;
    tmp_msg_0.w = 0.567212841811;
    tmp_msg_0.bias_psi = 0.0931465253555;
    tmp_msg_0.bias_r = 0.78794373469;
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
    msg.setTimeStamp(0.959173010096);
    msg.setSource(50410U);
    msg.setSourceEntity(175U);
    msg.setDestination(18455U);
    msg.setDestinationEntity(99U);
    msg.localname.assign("PQZMGHQAUKLMJUVGNPRZRCTRJWGUOSBDKCZWBDBFIMCQAKTKLNJEXFADCVBZVFAKKBWPNNMBMORQNJSTILYXZVRPIMUEHSJNXCAOFLVEQTEXPCAMUUFIYGTCFDHFXF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OWUZCTSCGYZNHFXSKXUPNZNBUAMIBDXJKJVN");
    tmp_msg_0.sys_type = 213U;
    tmp_msg_0.owner = 50056U;
    tmp_msg_0.lat = 0.906013456141;
    tmp_msg_0.lon = 0.0695327593122;
    tmp_msg_0.height = 0.566726031317;
    tmp_msg_0.services.assign("JWBIUWFPALOXSJJTQBSDADDGIYLFQMSOZWTELKACQTBCQAIWYOYREFEINLGWYNFSSJCLOSLXGVXYVE");
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
    msg.setTimeStamp(0.791206918775);
    msg.setSource(11061U);
    msg.setSourceEntity(79U);
    msg.setDestination(35811U);
    msg.setDestinationEntity(64U);
    msg.localname.assign("EIDQENJPWLGAGDFYTCGPNXQVAZOUNNOFGZZMIJFTRBMCEKUHLPESGVAHVBXDSAYWCXFIPIMRLOULLRMCQJWGVUJDVNZCXWEUETBTFWQLYURDWZSBENSKSQJYCPAKRQTWYRVQJIEFRXYBFOOGHRJFAIGTYOXSEOKQUTXPEPDYKHATBAHHKSOZCLBFTTXWYBDIMJMKHHCGLNRQWUVQDNIISADCWZFUKRJCXVXPHZPMHAPULDVMS");

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
    msg.setTimeStamp(0.990797338869);
    msg.setSource(26813U);
    msg.setSourceEntity(135U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(161U);
    msg.localname.assign("NGXZKHEPGVEYIABRDCQPFVGCEJQDSYXSRRAUXSZOKZIOBDEFXJNULITNHCAOPMCCMRIPJLOGXCJWHZMAPXZGKBQSOQIUIMVKEUTHWPIRCWHAKUNGKCRBYBWKLOTMQBXLZVEEKXFOSWZWNQDVNSELQWLQJLFAHQLTIYWUEQNU");

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
    msg.setTimeStamp(0.514072286817);
    msg.setSource(43112U);
    msg.setSourceEntity(210U);
    msg.setDestination(14008U);
    msg.setDestinationEntity(218U);
    msg.timeline.assign("ZZHTWOTFNDEDPVVLLEDVLBAVWANTCHRTWQFQCXNYAVUADGEHJIZOXNUVIWUYKGBSCAJKMRBABYMWEDQFSQKMK");
    msg.predicate.assign("GPCSROFQGUQYIZWTV");
    msg.attributes.assign("DYPYFUSEGJQUQADVKCDESPTCKXWEQYFTYXUNOKVCFBKRCSOROOLLKWWMIMGZYPRHJVVGZPVNOGBVWEUHPYZIBAFZAYTFUQCDDARPKEJJZTXFCLQKSTNZINGYEODQNLSRPTLXBGZNVJUFXNRYUOWHSLSXWQAASRENBJMPTMPHEWOUSIRGVBCFQGTSKFXBMKNQTCHAUZDEHOXWXKBTZJQIUGLRHLJAHIMLIXDGBBWLVAZIDPENJCWVM");

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
    msg.setTimeStamp(0.956065265115);
    msg.setSource(55250U);
    msg.setSourceEntity(196U);
    msg.setDestination(29555U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("ANJBDULOUXKEPVDHCBQDBQRMEXPEGJCABWYCQOXLGW");
    msg.predicate.assign("FJISFGJTDTCSIGLHDVFDWSYBZJXYJOZFYUQWPIEWHUAYZCFPRZGJXRDYZHIDBJQNCMMOJSJOUSLALMJYEMGQKFROVZDKBXBNHPSNKBTCFICILLTMKWW");
    msg.attributes.assign("WQNXSCJVEMAVKAEHNPSOWJGTHCLCGPGXXOQBPLITFTILUSAXRLLWPAKIMTXZGZQTETDPDUKQNMBR");

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
    msg.setTimeStamp(0.435779388981);
    msg.setSource(9300U);
    msg.setSourceEntity(144U);
    msg.setDestination(44041U);
    msg.setDestinationEntity(8U);
    msg.timeline.assign("EACAIUPRZYGSRSCRLGYDBQXKJBSWPOOVHNQWHUYSNIVXDASMFAGBKHERKOFPGZVKMUFPDZMVTMNYGHNJEFIWHTFNYLMEJOXQEUVEC");
    msg.predicate.assign("DNAYKZTPUUQNHBGJCLXPJSPMFCYTMK");
    msg.attributes.assign("JLNASHZSSNRTWFWCXPHPOBRLJKZIAFHGYNPUQNPXZIEJRGLYEVHBQCLGYRZRNXECSFJUUDSYPUAQTEICJYTFWGFNWUUDCOMZIOVWRSUVFGKNEADNVMLOHZVKCRYXLCBAAJQBOAKXDJLPMYDRTXBMEIGGZGNTHYTJO");

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
    msg.setTimeStamp(0.0504999789621);
    msg.setSource(18007U);
    msg.setSourceEntity(47U);
    msg.setDestination(31685U);
    msg.setDestinationEntity(9U);
    msg.command = 173U;
    msg.goal_id.assign("RMLNDLZPXJFJABFVYXWVZVAHCXCOKPDRJYYZEIBSKHMWBUNXDQMQETAYUTGWSSISPWDVXATKPQMUGEXIAEDUDFRHNIJT");
    msg.goal_xml.assign("BNWTYVRKELZDLAYDXIKUGBGQIXVOJNWKWTHHINXLUZJADEUOBFAJDVBSRVQXREVHCGJRLLWVQCSJQKNEIINYZWXRNAQHNPLTOYPPJUGOXYRIQVAFYUFINMPERSLZLOGTKBSCGKYUDOSCWEZMJGKFEZRFVHDWSAWSGXLKOXEDZTEDNQHAHBBQMXEMCDPBTCPQJPHMJAKP");

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
    msg.setTimeStamp(0.857753858921);
    msg.setSource(31339U);
    msg.setSourceEntity(92U);
    msg.setDestination(32580U);
    msg.setDestinationEntity(246U);
    msg.command = 170U;
    msg.goal_id.assign("FPPSQHZGLXQBYCNSIXTGPBRAUBEWWIKRKLUOULVYGPNHYRJHMCZEIZOPDXYGXTOOEQVJYKZSNJMZYKAMXSCPTKUNKRHEVDWTVHQLYOENXVFMGCJLBXPUCBQGOZVWOFURRIQYSABEAMVCWDDEZJFGVNKNJECDIDPZJCFFTSHVLUMNZJQVBDYHKRXLMTHLEAFJUQUCDTRZHOFDEBNBGSLBKXYAMQANACSAWIKMIGWRW");
    msg.goal_xml.assign("WARHQZUHTANOFMBHSOWUHIZXLRXGMVIAXTRSBERNNIKQKIDCCCYGTVXRPLPSVQZCOLKBUKFVBTLPVIZMGYSVDAENXJUWWLJIMDUVLMZQAOGRATUDDWGXFEJGICNTLXHUYHZUPIP");

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
    msg.setTimeStamp(0.319295734621);
    msg.setSource(10816U);
    msg.setSourceEntity(226U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(64U);
    msg.command = 82U;
    msg.goal_id.assign("KNUDCRDEYWQQJNQNUFIWDIIPYOSJMVTRUQXC");
    msg.goal_xml.assign("OOVSOYSVQZQOISNKLFJALZDIXLKEGANWWDSDKDFKRUYXSOCUEKGUNAGHMXT");

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
    msg.setTimeStamp(0.80375147168);
    msg.setSource(2031U);
    msg.setSourceEntity(190U);
    msg.setDestination(20984U);
    msg.setDestinationEntity(185U);
    msg.op = 21U;
    msg.goal_id.assign("JYEUKDCOJWFTGLTNWCKPTRFHHPQUUBNLSEDYZQDLYDGZGFXQHYZOYPQMLZWCDXWDMCYEFLHOGRPMOZZFWINUZTEVPRINBTUXKVOQCFIYCHXTRHJCRAEBGOEKXUVWPKKATRROSAOIJSAYGDVMDDQBKPQJGRBBLVIXUMLL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LHDNDNPVPFKMSURIEATUURESWANBPJZRRCJZYILPMPQSBIJTPLGJKUNOXVRVKVNYHLKPAGBWXFMJMIVMYBTFYEQBJRVESQYQKMNEWVZWDUGTTYTGJZWMMZAQHXOTQEHERJIDFGVSDRCERNHUTUQQHACXSAOFDWLLSKPZCMIYLCSTYXPIFBBWUCBCSEGOSGPDILDFCOOVNWYVIWHLHIFBAUKCZFXNALQOXWZEDOJUYJRHKDNKCZFXMXKGAHGT");
    tmp_msg_0.predicate.assign("VTWAJJMCAYFOSRLRKUKBGLDCBICXZDRZTFHXQMWYVJIPHEGLBHKKLSBONLALQXJVXREPWDDRHGOMUWDMPTFBCOUIXTRVIZRXPGKKVNHCGITFFEDFOZSC");
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
    msg.setTimeStamp(0.150861870361);
    msg.setSource(43781U);
    msg.setSourceEntity(49U);
    msg.setDestination(35816U);
    msg.setDestinationEntity(113U);
    msg.op = 176U;
    msg.goal_id.assign("CREEIXSIQJENCCJKAPXWUDUYDEPDPXTGCIAVAHVLAEMAWDQXWEFZPMOJZMTORRYTNKWBBUTJNOB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HCFMOEPAAEFKSYPHKCQOVXGCCPCEEXISVNHABRUBBPVMVYYLDYRZUOBHMERVJAMDIGYLWQJXGZOWDSQJFWYZTTHRZKMVUYICWAZACDGHPQXSMLKGPJORKIRQTEAXWRBMDYNWTJCLFNDYKKWVOJBGSTAWFBKSKBHUINRPMAPZUBUV");
    tmp_msg_0.predicate.assign("VCZTXGFRZPCGERBWJETLMULFBWDPGDEOCINCXKBKTAGLBPMYMDHIBMVQCLGVHWGHRAHPKVQJSRNWOYSVOAQGGAEJDUYIBPZYJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UYCXLPMZUQLHLPXQUNIIVVNZLWFJBFYJYCWTFT");
    tmp_tmp_msg_0_0.attr_type = 165U;
    tmp_tmp_msg_0_0.min.assign("RCFUYCXKHEYSIQDEIAABTZNNUJVSGWANNRBNAECTLMXKPUVOUCXRQ");
    tmp_tmp_msg_0_0.max.assign("BRTWRXNLSGSTLNETYZOZESXBAAUCCMXYZLUYCXXVLWBQEWDDFEACLRRPBYURSUWHPXJDIPZJKIQTGBCBTVRVZRKLZYDVFONTHZLWOBSNOMIYROHMLAFPDDOXUMKDLJEXQASPEGIMWSVWIEGKHCNYWTBMQITUPZVRHPSUGYA");
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
    msg.setTimeStamp(0.53895067131);
    msg.setSource(31038U);
    msg.setSourceEntity(40U);
    msg.setDestination(58524U);
    msg.setDestinationEntity(36U);
    msg.op = 132U;
    msg.goal_id.assign("WREFCDETEXGWKSFELZGTOHKLFVAZWEDWZGFCOFMXMYHRNEZSWCNVGEAHPYUZOMYMYUBDARVRRTVAYLIBYXYMXBNRKBAZM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DZVJZCLRYYMDHYBBNEHPRTOOVJAXWASPWFJOHZLQGFCUHUGSIDQZSEODCWUZIKGRLUBJAHEPKE");
    tmp_msg_0.predicate.assign("GLUZLMOGRETGEYVXXJBGWROGMPWTZLOXZJEFIKZBFDANYDUPGCPXVBLVMZSIUWCAFPIAPTNCAQXMTOUHQSEURFIIUJEWRRHNDKYDBSZOZEYDXJPIBPKMNHUVCHAERQKKDYRPGCKBHZYAXNDIFBSTLLCWINFRMESVWWFUCVVMLT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YCTVKWBGIHFIJQHBTGPHFTMUAAYMOSDRHSTPIGHDSEQBKWMNXRZSAPLPJEEJOPYUGSVZNTOLOXLCYZPUVLQPXSSWVZQNLLCBLAMDOMAJKCNZIQTEHBUFIKNTUYIRKIQZDUYWWDMRIGGBCCMTGCFZDHVEZFXMKVKXBNJJRAPJEMPWGSAOEJYTAFJVBBDEVOPRKGSOQHYFNDLRAVUEKFDOIUWJHVXWWABWLZRM");
    tmp_tmp_msg_0_0.attr_type = 47U;
    tmp_tmp_msg_0_0.min.assign("BHRWCULDOPALMSNZXETEEYHRSDONNNUPIAWXGNEMBDMZ");
    tmp_tmp_msg_0_0.max.assign("GQGUJMJKVOUNPMRGXLMVIAKGTUHRKIZLESDBDMEYAMCBCUUCTHNVGCLAWPAOP");
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
    msg.setTimeStamp(0.920184416551);
    msg.setSource(32935U);
    msg.setSourceEntity(119U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(173U);
    msg.name.assign("BFMLIBDLJGGRAJPFZZWVQSKAHUDLYCYKRIIULZVXQADJHSYRDQBHMUVEOIQHCFMMUBBBPAPTKMOZGWOYEPXDHRVHHTVM");
    msg.attr_type = 198U;
    msg.min.assign("ODZRYCIFZCNECDPUWEYNKBDLMNFARJORJBPEIIYTQZOETPGSYYWJPHLJKLXXIUYZPDEOWJNRHYFKLKZAAMMMDTOKTVVAEBSSVBTLAWTUOGJYDNXWXWUCXPUUGQLCWQDSIBPFZQFBTBNMXQZGCBYVJVENGHQSRMGCFHXXAPSTCLHGSLMWTKZMULTFVWGIXL");
    msg.max.assign("KHRNMBDDNYTODABIMLCLQSVKXEESLGTYEZLIDFOZSBUOZRKIZELQOYUPUBZJHVECXYIDAZBSIFCLUTWNQAEXZYLTJHGTKWGWYCGFKMZRPXNAHQQKJPOEOMKYNI");

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
    msg.setTimeStamp(0.319939550657);
    msg.setSource(48419U);
    msg.setSourceEntity(165U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(67U);
    msg.name.assign("ZNUFRGVWUVMPHARGJLOXGFXHWDDPQDYLPNDEOTFQWUEHJJQLKBBXSSENJDFHCKOXKTFFBDAKVYB");
    msg.attr_type = 247U;
    msg.min.assign("PPYNNJKGTARKKPZRKFGWXZOBGSZLWYYHJTBCLIUDCCXTVJZEIEQXTDCQVHV");
    msg.max.assign("ESDBALJOZHMFYEGHSOEOQMFZZYXCNFYHKWTOTRUVVFEXRPJOUQPYQPERGJQWHSLOTKRZWYOQGMDDRDUXKCKWTRESXNVKAAHJLSVKSCFJAPPIDTEMICZJSZJNIBIICFFVGBGLZRWNBDZUCCAYNQLPYWLQWIXTUIHCVEYADPXKOSPBTVXLQFGIDYFMHR");

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
    msg.setTimeStamp(0.887230645178);
    msg.setSource(61287U);
    msg.setSourceEntity(137U);
    msg.setDestination(54050U);
    msg.setDestinationEntity(50U);
    msg.name.assign("BBBQMNAZEIJIUIKUYTUGTAEEQMRQWRFKUXILDWVSLBW");
    msg.attr_type = 139U;
    msg.min.assign("VEYJWSFBTHPVRSOVRHJVVZOBEUWSGCWPJOHMFGJLWAUZBDGCJKJGCWRFZKLZQAMAXTIHZLRIEQMKFXEPOTRSJYTZDNQRLCUNXMMLGUNHPNYKVQOXDTOMNXBTOQYMLPYQYIXXIBUHKPAIDSWNTCDLBFKVGZQKMUGNWJSGKJETYEZTRPDIAGSFICCNCBASLEDPDXFBQIWHKHCUSQDUPFLCS");
    msg.max.assign("AJQKJVYILFOGAZWRGNXBYZNMJNUPPMQNWELQWRPSORFUHAVHECZXRQNNCJNCSALBDHFRFKYUTQXKJAIFEHRYCKUYZOADVZQEDJNYEDBJOITHTEXP");

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
    msg.setTimeStamp(0.514355411425);
    msg.setSource(42492U);
    msg.setSourceEntity(196U);
    msg.setDestination(7316U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("FKSOTRVBGYDAZKGHBENZCGKPCNYYACUQBDAEFMMGF");
    msg.predicate.assign("BAIGVACMNCSKIKGPRYIRWYXAJESHGQZLOXMLQQDELCIZDJHQUWYBEXNASWSEBXRNVLUCXTUFDWTLOHDBPKNOYBTZUPHSYSFKTDPGLFVZZRNHVIXCQSEQQJD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VRZYCIUDNCKRXKKGLRDBPRJGZYVPWQQRGKLPLPWLWUGHZBSMDNLRUOUVZTSBEQUNBSTLHSNUECDXDKOBQNPCMLMCXHHZJFDXCRYRBBFGBNWHJWKIWQMJSQQZMUUPJHMWEAYIEJ");
    tmp_msg_0.attr_type = 230U;
    tmp_msg_0.min.assign("DESACYHLPMPBIYECPLCBAAXGXAZKKTLFOHGZXQTBEFCNYXNEWLFTFAMXRFAJUJCFVGNUCRZPHB");
    tmp_msg_0.max.assign("RGQFBDBYNWBCYADCMFIUCEYWSOIZIPSKGBOSGZKHLCQHBXLSZICPBQLTWXKILQJDRQWLDPWRJYNNDEIFOLPNCPPWZXMBOAEIHRUNUZGDVZDKWMTBJAEPLUNLYKXLEVYPTBGGOAMSJEQMMXZWTAOFXAYISXVWEVKGTHCHXVOWXASUJMGGKMDUKYTDFRUAHBJJZCZHXQRCGJECKEVYMNSJQVMFIZINRHPTEDOVQOUARONV");
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
    msg.setTimeStamp(0.484958294258);
    msg.setSource(49294U);
    msg.setSourceEntity(104U);
    msg.setDestination(23127U);
    msg.setDestinationEntity(187U);
    msg.timeline.assign("XFGUNZOSDRKATRCCIMCIFFCRXIDTPHQBRCEKSPZNLIRVADYYJOIJNZIEESKEOJHTISXKQLWAMMATUFMWGOWUUZZRIMLQETVDSSBBKFFAQJQVVEUBJVEQESWEOUQHBJYUGHAGHVMQXLKYNADHMTWKHOGPSIUUAZGJNPZARWPYMRTCYBONNAWUJXQPOCDJLDHBGMVXBXTSTLBOGZQOKGXYLHPCNJWZPRTC");
    msg.predicate.assign("KSQJZAQFUEOTOXHNCDPNEQTZETVGFUEQYUKF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LGUURNQWZYDUNUJEMHERSFAPGSZLTHSCZUNIBUPROTGQALYVWSYZWEPXLULVNVEAPUIERXFTFLNWZSOKCXIMICTINNZVYRWBWWZYB");
    tmp_msg_0.attr_type = 36U;
    tmp_msg_0.min.assign("DHNIZOWDWTPFL");
    tmp_msg_0.max.assign("VLHRDIQGRUYZGIOAWZCGWNHNGLEEBNJFECPBUHCWHXURAKVJIDQTNPYTFGRXCYWWSHOSDMMVQOABXEQQKZDAICMFHWZNQEDJDWFLFGGSMFIVJGZKRMKBOIHTVPRUXPLLOMVJTILHKAXCQSMGXFJXTJXUUESZTPMPTDBTSNLDYWSXYQZEUTKAOEKDYUYWOASFPENZAAULRPOHVBDMJVECSPZCOHRALC");
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
    msg.setTimeStamp(0.283157194303);
    msg.setSource(6105U);
    msg.setSourceEntity(127U);
    msg.setDestination(14948U);
    msg.setDestinationEntity(108U);
    msg.timeline.assign("GNANSOOZCCOBIVQJBKUFQBNITYNTNGRAVBGMKUZMKMVEDDJHQELGDFRCXRJDSSMOMLNRSVWQLHAFIUIIZXWYZFQKHPGYHZUWWTDZIDFTTOHMOFZJCSJQLYUPXCAOFLMPCEKZYNEQXCMCXJTKSFGBRRQPWXAMNEUKTVCSASECDTAELUGUYBHXIGRRMNXYVNXGDYBFJ");
    msg.predicate.assign("IESLYWXJTAVTBWBQHYUNMVOZIGXMYHQWHXGERJWHYFBJELIKNHNSUKTDMIYCMPGMODVQBPOVSGAYCNQVUUWEVEJHRWZPZWZCDLTCKCYSKLXDSFABMTIOKVTKHHQGBDSNZGTGCTFJIPDXAFLOXRRGXJZYOZUAXAIEBUJWDPPKHOMVVBFUIIJACTRERZJM");

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
    msg.setTimeStamp(0.808915237188);
    msg.setSource(59964U);
    msg.setSourceEntity(144U);
    msg.setDestination(15410U);
    msg.setDestinationEntity(214U);
    msg.reactor.assign("CVCZNJKVKLFOKICINCMTWCNJHUWMWXZHQJWAXTMSZHSNUZKIKASUYNRCFLDPUQWPSYMQFVEHQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HILTTOFKLJVJZAIGOWGYPUXVKJVXMNJLBMGEQZJZNBCSPHMBFZKTALQHHNRPRK");
    tmp_msg_0.predicate.assign("KLEZWGMOJCXLSRAYOVOPPKAKIDXJWBETQGWNZHCZJCSYQVWASJVEMYCUPSKIOOPLRZXANUATNPBPDFWFXKYXUZQIRGWREMQUSHDBEYTCODHDZAIYGFLAKBHMDVFUHGMXXUWUELMMCUKFBGJINHVEBBPYVGOYNTQBSHLR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ALZMLXZUDPMEUQLCAVNXDFM");
    tmp_tmp_msg_0_0.attr_type = 207U;
    tmp_tmp_msg_0_0.min.assign("FOBKZZVJYAEQWYOYPRUJXHLBUIBQCIBPGUJBZEOHRCDILDOEEAIKJNFPWRWAMORVUZLKVMALDAQUTPVWUIQZZDZLHYRBLVEFGUFSLCLGZGILSEADKDCGCYLORCPYWMBEPEFTYIDIFPXJJTPNISYMHQJR");
    tmp_tmp_msg_0_0.max.assign("OGKYGGDVFISGSNLFOTQZJERAUHWNEIXHFPWHLOFROTHPFZQKZHEIITDDNJBIBCYGWFUNILVZIYMEXAXZXPGDJELBPZPXEMVPCQKQXAPFUAVQFWMATGBIRYRKHSAPXRJVVMEYSWWYYOCRKCQLAWNQZCBDGERKCUJTOFAVWLOUSSJMYCXZWISJDDHTUDJECFTTIMUECKPNMLM");
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
    msg.setTimeStamp(0.970183113995);
    msg.setSource(34497U);
    msg.setSourceEntity(59U);
    msg.setDestination(43066U);
    msg.setDestinationEntity(187U);
    msg.reactor.assign("AWLLPYDCKVDSPTBNIZKYFTCVGTRXGXVDGKURTVXYEEIICJUIELMFSWHMCCHMYCHAOFVWPWGQNNVLSBQCNZKBMDZBXFAGUWPFBORJGAOPVRMWUUAUZQZHPRJQYYXZXSZWMANPBIRNLXVTFCBVKHYSSDWXRBIBTEPQDNKLIFZASY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RAZJCQIVRNCDHVURCLGEQWUYJEIBLWIJDKEUZAIOUAMBFMZEEWCXXRVVTHGTPOASIYJTSCOPUBFSQHTJGHDGYSVHQICJRMDDQOLGZNYWFTREGFDNYDLFAOKUVEVPQYMYYSNHSPGRSYDCRCUGPPLNOEXAZXPZJAFUCTNKVWKBWDLNAAKOXMVZBMBHGOQRIIFHXRNAKJMHQKFXLBFZXDZYXKIH");
    tmp_msg_0.predicate.assign("VGTZXKHQKCHCCLMXOIQMTYQSEVURSYUTRMQIAZNLFCXYLZMLKBGBNDWWAXWJOTECSNWQLNJRDGUSBXDXOMNHPKVUJYPZDXJHMHHIHGWIRTVZEFLP");
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
    msg.setTimeStamp(0.0292026815833);
    msg.setSource(48411U);
    msg.setSourceEntity(99U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(231U);
    msg.reactor.assign("VTYDXZBXKKTESDCJBAXLZYUIZLRLAETHVCNTFWQYGRUPWBOUUHHZMFSFCSBHJFDHGSIMOOJBGSIABYCBMPTPQIJEL");

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
    msg.setTimeStamp(0.0832646098331);
    msg.setSource(37170U);
    msg.setSourceEntity(33U);
    msg.setDestination(3006U);
    msg.setDestinationEntity(182U);
    msg.topic.assign("KLXEMFVBWJTKNRXJKMPGBFYZPMZUTBWTFJJQPIFQYNZEHBWVKWDUSCZGOUQDCERYRHSSMUFQJWCAPNGRSVAKQDTYSVHALHDHNPUANVUQLIEP");
    msg.data.assign("STMTIRRPPGUWYMRMZOQQAJXASEXKAHOIGCUELSNQWBSBPYINJZBDEFNXQWRGEYHKZKTMTKFGRTDVWXNXPWIZZWHCXWEGMQLLIKBGBHDOHLGOLRNONBZCJLUIRJEDKHOANOQYDDUTYLGIQJBIMJSQCUMCAJAP");

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
    msg.setTimeStamp(0.912067046834);
    msg.setSource(56069U);
    msg.setSourceEntity(111U);
    msg.setDestination(26717U);
    msg.setDestinationEntity(125U);
    msg.topic.assign("THYHUBKNPLMADNJOJBNAVEINUQMHQRAMDHL");
    msg.data.assign("GCVOHFUAKJJGNPSSNCJMRHEUMTKGSHIYSVVAQSWUTLQBBUQLGKULPOUCHLRWHKPAMFOOLWJFICCYCWMRUYHTSGRYJFBDWBXUEZWPYXTSLPXERDQTVTQFOAAV");

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
    msg.setTimeStamp(0.632429126902);
    msg.setSource(19966U);
    msg.setSourceEntity(179U);
    msg.setDestination(5548U);
    msg.setDestinationEntity(10U);
    msg.topic.assign("HZHCBYKSEAPGFRXVXADVIMUIHMBGLDQRBOXYBTEDSOHDJKCLKBVPTLUBWSBKWRCUWTGKQLDJFSRGIVUOQJUNKEIJVJTJMTUGMKQDDZHHTOXFQRCUIHFRQYIOKWEMSSNZFVJGDTEZVSAPQAOCDARWANUHJIPGIMWSOYAVGYIGNRXB");
    msg.data.assign("MDRMDSFMYVBZXTNHCDJBKIQHEAGDSAKDTGSQBGRUTMSEOYMZVXBGOGWVKPJBNLZUAQKYXXBUPWZSRTDSEEWPOFPRFLGBNGHJCQNNWLOYTUHUUEVAMLXQDVAXIKUTHZKLYLELRJLXQWDTRMWVLUIOVZTKPYAOJKFRRNJHTFZCJMFKIKTPPCAYOWRJQZJNEIAOBFZIHVCSNESXQHSEXCFDZMVACIXMRQCLPSHBGN");

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
    msg.setTimeStamp(0.716055369606);
    msg.setSource(62525U);
    msg.setSourceEntity(195U);
    msg.setDestination(61221U);
    msg.setDestinationEntity(18U);
    msg.frameid = 191U;
    const char tmp_msg_0[] = {-111, 57, -115, -4, 38, -100, -19, 21, -7, -71, -93, -93, 119, -115, 13, 56, 57, -112, -7, -24, -63, 94, -88, 33, -70, -126, -66, -13, 21, 7, 26, 111, 37, 45, -75, -32, -1, -7, 83, -114, 16, -126, 45, -2, -48, -48, -28, -19, -126, 10, 28, -30, 114, -62, 92, 106, 86, 5, -52, 86, 85, 24, 11, 43, -30, -51, 51, -54, -120, 57, -51, 63, 123, 125, -95, -23, 118, -92, -53, -123, -33, -3, -35, -65, 14, -20, 52, 112, 37, 11, -55, -57, -73, -5, 5, 48, -62, -128, -4, -97, -104, 119, 64, -74, 106, 98, -56, -36, -50, -80, -12, 92, -8, 1, -47, 67, -115, -74, -4, -120, 15, -113, 101, 49, -99, 100, -97, -5, 24, 93, -58, 92, 84, 100, -70, -53, -16, 105, 111, -30, -78, 91, 126, -1, 29, -121, 111, -61, -23, -4, -17, 51, 17, 52, 42, 125, -67, -105, -2, 107, -111, -33, -57, -73, 41};
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
    msg.setTimeStamp(0.6830438558);
    msg.setSource(63087U);
    msg.setSourceEntity(152U);
    msg.setDestination(18517U);
    msg.setDestinationEntity(125U);
    msg.frameid = 24U;
    const char tmp_msg_0[] = {120, -32, 105, 58, 115, -21, 107, 99, 9, -9, -115, 113, -99, -21, 13, -81, 29, -6, 100, 38, 48, 108, -97, 60, 77, -120, 81, 25, 14, 38, -119, -42, -121, 33, 22, -111, -100, 75, -51, 93, 108, 81, 118, -18, 73, 103, 2, -107, -3, 80, 26, -24, 73, -87, -45, -43, 41, -90, -115, -90, -100, 9, 111, -103, -12, 69, -120, 122, 63, -11, 85, -39, 73, -45, 49, 45, 103, -109, 58, 90, -60, 126, -24, 92, 66, -11, 41, -53, -29, 17, -64, 115, 85, -64, -81, -111, -115, 92, 45, 50, 1, -100, -23, -26, 25, -59, 19, 10, 45, -101, 31, 111, 62, 117, -65, 48, -23, -120, 46, 74, -124, 54, -16, -42, -86, 13, -21, 109, -93, -62, -93, -19, -6, -45, -81, 64, -61, -20, 83, -73, -61, 29, 119, -25, -30, -111, 50, -61, 73, 66, 12, 18, -105, 24, 41, -84, -65, 103, 8, 73, 83, -75, 106, 39, -105, -13, 106, -13, 106, -32, -79, 103, -35, 107, 3, -22, 53, -79, -51, -43, -16, 34, 100, 98, -97, 107, -125, 121, 100, 4, -70, -127, 111, 50, 69, 100, -26, 116, 125, -9, 66, 41, 22, -10, 9, 41, 42, 102, 56, 87, 104, 74, 81, 49, 11, 69, -63, 41, -61, 67, -51, 65, 86, -23, 124, -112, 96, -40, -7, -51, -87, 39, -47, -53, -63, -69, 121, -3, 114, 77, -42, -40, 81, 104, -1, 98, -2, -30, 46};
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
    msg.setTimeStamp(0.413655195189);
    msg.setSource(18094U);
    msg.setSourceEntity(59U);
    msg.setDestination(61514U);
    msg.setDestinationEntity(216U);
    msg.frameid = 40U;
    const char tmp_msg_0[] = {-92, 63, -31, 41, -26, -89, -47, 10, 66, -46, 109, -55, -124, -62, -90, -97, 3, -32, -125, -9, 108, -106, -65, -4, -30, 106, -10, -77, 126, 100, 49, -82, -49, -10, 101, 58, 114, 39, -24, -29, -87, -45, 14, 86, 25, -52, 50, -123, -2, -26, 57, 46, -47, 79, -5, 52, 85, -97, 24, 34, -73, -45, 19, 115, -102, 12, -35, -1, -112, -3, 18, -56, 54, 29, -85, 32, -101, 120, -101, -22, 39, -34, -49, -38, 43, -38, 61, -63, 18, 6, 47, 24, -121, 39, 110, -88, 74, 17, -9, 50, 101, -57, -7, 29, 50, -127, -17, -106, -110, 10, -64, 57, -112, -23, 68, 10, 31, -14, -64, -43, 117, -1, 17, 23, -35, 53, -36, -39, 14, 49, 81, -78, 6, 34, 13};
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
    msg.setTimeStamp(0.855020990755);
    msg.setSource(6658U);
    msg.setSourceEntity(17U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(18U);
    msg.fps = 35U;
    msg.quality = 28U;
    msg.reps = 231U;
    msg.tsize = 251U;

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
    msg.setTimeStamp(0.825535129734);
    msg.setSource(58898U);
    msg.setSourceEntity(231U);
    msg.setDestination(35936U);
    msg.setDestinationEntity(120U);
    msg.fps = 253U;
    msg.quality = 99U;
    msg.reps = 24U;
    msg.tsize = 68U;

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
    msg.setTimeStamp(0.472029051961);
    msg.setSource(11217U);
    msg.setSourceEntity(2U);
    msg.setDestination(32060U);
    msg.setDestinationEntity(78U);
    msg.fps = 112U;
    msg.quality = 112U;
    msg.reps = 161U;
    msg.tsize = 222U;

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
    msg.setTimeStamp(0.31813458939);
    msg.setSource(17017U);
    msg.setSourceEntity(99U);
    msg.setDestination(33197U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.305936153314;
    msg.lon = 0.119618452397;
    msg.depth = 130U;
    msg.speed = 0.582194507023;
    msg.psi = 0.222079990885;

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
    msg.setTimeStamp(0.340803206115);
    msg.setSource(52424U);
    msg.setSourceEntity(86U);
    msg.setDestination(34027U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.268665897721;
    msg.lon = 0.415570732342;
    msg.depth = 74U;
    msg.speed = 0.881606871282;
    msg.psi = 0.337661670334;

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
    msg.setTimeStamp(0.991066834629);
    msg.setSource(45814U);
    msg.setSourceEntity(69U);
    msg.setDestination(17537U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.208153183187;
    msg.lon = 0.315517272992;
    msg.depth = 140U;
    msg.speed = 0.292942390833;
    msg.psi = 0.706454852775;

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
    msg.setTimeStamp(0.730613802956);
    msg.setSource(39426U);
    msg.setSourceEntity(37U);
    msg.setDestination(5349U);
    msg.setDestinationEntity(50U);
    msg.label.assign("ZENILKSGJLYIHGFAPOFNTLRWVXOPRHPZJPMMIZPUYQQRRQDMSLQPYRUSHYTPKKNFQJOEOIUEWKBBWIUVEAXZODMBHDSGCH");
    msg.lat = 0.498123000224;
    msg.lon = 0.890000353684;
    msg.z = 0.063349616604;
    msg.z_units = 8U;
    msg.cog = 0.698254109139;
    msg.sog = 0.337326601219;

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
    msg.setTimeStamp(0.671129624583);
    msg.setSource(61892U);
    msg.setSourceEntity(97U);
    msg.setDestination(2760U);
    msg.setDestinationEntity(213U);
    msg.label.assign("FGPULNBEMTRRKOUTOJAHNCCAVWNFVLOVYWVSDHSVJRGCATETHLABFDKKGQJCEIMXDPBKIEWFASMZOHJGCWIEJGQFLUAAUI");
    msg.lat = 0.517310831516;
    msg.lon = 0.938261892554;
    msg.z = 0.729331732417;
    msg.z_units = 39U;
    msg.cog = 0.304943627732;
    msg.sog = 0.109271853086;

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
    msg.setTimeStamp(0.71789795828);
    msg.setSource(61590U);
    msg.setSourceEntity(223U);
    msg.setDestination(27258U);
    msg.setDestinationEntity(211U);
    msg.label.assign("ZHMKYXMUKM");
    msg.lat = 0.77246768918;
    msg.lon = 0.188539929011;
    msg.z = 0.311499745665;
    msg.z_units = 246U;
    msg.cog = 0.788829448663;
    msg.sog = 0.903532438116;

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
    msg.setTimeStamp(0.244618730175);
    msg.setSource(2095U);
    msg.setSourceEntity(23U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(30U);
    msg.name.assign("YDAZXVBDZTAKFQSYSBHCOPQZEJFPYKLSRQCRFWXMNGMQCIOIIZEZYTWNPODEBABWNUDBTJLDSMPEWLKPTQKOFQTXOUVCSNJOPCVEYAXTGNEBUEPWOWYKGVLILIVAFUVTLZRPXHSUKEQRYIBHIKZMIUJGHCWYFQGCRNDRGO");
    msg.value.assign("IKIJTTYLICCYOVSMYRFPYRKBIPLHVPWLZVFZWNEWGAWHZYDRKKVSOEQHDVUNTFQWVUANMXYDCZZWQMOHJBOXSCKUIFBVGJDXKILEXFSXGPAHMLWEBAWUJSRJLROQPTXZPNAQTZQWGMXLZSBJTEDMYMEBRQGUCOANOLNQVCEBTPSBHGDGUHCOQSIUOMXFZEMXKJKYIJX");

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
    msg.setTimeStamp(0.414813837623);
    msg.setSource(20444U);
    msg.setSourceEntity(133U);
    msg.setDestination(11425U);
    msg.setDestinationEntity(55U);
    msg.name.assign("SYQCWYEGKUJOIPNEKJQVRHTKGHZOVVZBDANOYJYCWUXBZVQSCMBIPBSUFCLHTSUPSBUWMDMSULARKQDAJPWXFDLRCBQBFSLNHCMILYWLMJHXFOJFQXQOGRHOIZRYGSDJDPVKKAVTIVPZVHWIXELOTFJTPOQAUEMNIAWMWOYLHZGEKRFICEOVLTWYXWJLUGAMNFBNZDGTRFKJDGYCMSRHGDNANMNGTNBAZH");
    msg.value.assign("AIJAMDTEGSFTWYCOKOGSIDZVVLXPRCQEWORVMLRKMHDNNOWJDXAJMSCLBBHXKFZTHEZTGTIBPRZHPCTOIQYXRYLAJRQVDPIQWLFSZNWJPISMVBOJQIZXEUMVKPHZMJBTRDYSVONJWA");

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
    msg.setTimeStamp(0.462811695285);
    msg.setSource(57010U);
    msg.setSourceEntity(212U);
    msg.setDestination(60231U);
    msg.setDestinationEntity(244U);
    msg.name.assign("KFVTJYGAHPXIDIVLDUGSDTGMFJBUZPFOORRRBHZIEEIHROBXTAWEALQOPKATSRKWRKSUPACXLVTZFZMETMAFSDPJXHWFCLSXKZZOLWELSVDUBCVGCCEAMNNTQSP");
    msg.value.assign("TEGWNKBZEKQTPJEUBFHOGXZFGEQDKCHIXHZLYICFVJYFJABTANCIADOLOOLAJRDLOYDSJOHUVVXROFBTWIZYQ");

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
    msg.setTimeStamp(0.041053043403);
    msg.setSource(39604U);
    msg.setSourceEntity(113U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(207U);
    msg.name.assign("VPHLFAVTTVXRNLIJANWUPMLKRKNXZMBIHNMRDLEGSKIRMVQYYTOKLVOFWCTGESHQESEDCLGTWGWKNZECOPIWGYCHSRJWJQTHXWUKMAAIGZUNQMUAJSVLMZPCSNPHXXTIDIKOQJBCYQYBCUHCPZODRTZNFUJIFEMAHDWMGBDLJRQJXMKWZENOXZDPVSOXORGUSJEPHDSFTSQWDYFFAAPKPYAJIOYVBKXYZZBU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MBVTQIQRPWLEGIQFYNDMSCELYGACVSCFUZKWIWLLYMHWFVTDXGZXZTMNEAFNRUCYOZFLRTLHFQDJBRRBBTZBLBKACEZKQPVNDSWMSUJHKTGZGZNMSVUHXOUNXHLTUDDAHIRSMGDOPPMCPWJABJOIUBCAXQHPDEQVXOMBLCPKVFHNZVYIPYFXKKSQVJBDNUATQOJGWWIJEAJOJOTNGFOEGRFACYYVMGDEISKJNUCAHLWPPRYK");
    tmp_msg_0.value.assign("TDHZXZZSXTMNKBCNHGEPPZFBSFOTNQVGDEKCWMKMRITCCIKOEQSOVVVAAAJLLETSAOHBJYZKYUROQXDJVUSCHNOHWFCDFQDOWMNERQRXJTYOK");
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
    msg.setTimeStamp(0.434555763276);
    msg.setSource(54981U);
    msg.setSourceEntity(96U);
    msg.setDestination(57329U);
    msg.setDestinationEntity(88U);
    msg.name.assign("TPRFOILJAWCWJLAOXWKXTXMPKPBTAHDPWOBZDFWYVGOXUKAGRDMDHEHSVLXFKEOPCSECIIUVVRZUMCGOJLMMFCSJYHDERUOZUNVTHPEIKMNAQAWKNBEBUNFYREIVGFSCVPXQWDSEHMGRVLZRQWAXBFCHEQZAYSVBBKWIYYPFFIAKQMNLKROANNTQBMZTGDWURLZQDYJJBSQYUGNUTYDNVYIPCHDJITIOMKGXLHGRTTQESHZCUSSLXJZXGLFCN");

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
    msg.setTimeStamp(0.241085689586);
    msg.setSource(29868U);
    msg.setSourceEntity(113U);
    msg.setDestination(18690U);
    msg.setDestinationEntity(3U);
    msg.name.assign("GVHLBBKMHBYYYWRFRTQEFDGJCLQPRRGZJSDVXCCXOEDQGZYRNAIINLJKHKTJXAECDRVCIWBHXRSAHETUTCYSGMFBUYLOGCZEQPXNFEZUCBLHEZQMMDAPAVAKYVPWDMCJRGYOOEIZLNISXVKIJDPWZWUPTDGOXZQJJIMEMFQXBTQXNJWKVSUGZKNIPKQPPWOJFTBAWNEPSFDNLFTUDSUUWCKBYTSQVLNAOALRIFAOMYVMHUUMVOFSHZKBR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HQNWECUASDHMENQIUVRJRYWXRDEAPRAHBDNBNHAKVFJYPZMKWGBFZSMIWYYEDPUNXKQPSAATFGGZZILCBLXDTDTIKCXZHLCBQQOXGUVGXIXFVERKZNPREJQTJUFDGFWUDNAGXEVTQOOPOUOQMJMLYISRKJCIROWHKGBCAEOCYKLIHMVPYJUNPFWQFJVTDVGBWRNFSOASHMLZVEDGUAQTSOYSSWLKCZPWIZBFJICLCEMVMKXT");
    tmp_msg_0.value.assign("ZDERMLCIUJXABVYXBJQJKMUUYBKPMTQOTFWAIPUHXMUSTCXDPBSIEJIFADYNNJIGDXJJOYLWVSTRMYMOPFDYPQRCILHIGZEFOCFNXLHTZLFCHRQFLEXKOCWSIGHMKSUEWVTOOCLBJGCVVZJNZDGHZRRXEKTVAGNOZGQLQVV");
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
    msg.setTimeStamp(0.998803368746);
    msg.setSource(24846U);
    msg.setSourceEntity(45U);
    msg.setDestination(29177U);
    msg.setDestinationEntity(126U);
    msg.name.assign("HMJEJEGPDOKBWOYIQDMTXLUYTNUT");
    msg.visibility.assign("IIYBIORZMQNGBEUWZDLQWDBAFHXTNDWKRPRWYZTVCIJYU");
    msg.scope.assign("WVNJAMIDVOFRGKYTVFRLIP");

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
    msg.setTimeStamp(0.72060387767);
    msg.setSource(34725U);
    msg.setSourceEntity(50U);
    msg.setDestination(2531U);
    msg.setDestinationEntity(63U);
    msg.name.assign("NGCITZZQSXCXLRJKRIEGOMLLEGFFDBQOK");
    msg.visibility.assign("KFZWFCSISFEMQZKBWOTHNNCSEJRPTIPAUORGTLXYNMBAXUMGJWHNIVRBAWHGDZCCULSUMRSJKNZHMOLHHMSWCRJVVFGUTPLCGJBHAXJFYEVDAJFBRMOOATXEDVODNIEIYIYGREL");
    msg.scope.assign("PVENMWNKDGWBMPSGJRTGXKIRVNAXDGWGEJSWFGJBTAQVIAYVKTCBXIQZRPOKYERXMPUWZFFOPWQYPKSYTZSNUTMUZUKDLIFLWVIOXXUOVNZNIHDZCZTLAAFAQZILYVBJJQEEGLJZHTYF");

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
    msg.setTimeStamp(0.508101550989);
    msg.setSource(35115U);
    msg.setSourceEntity(68U);
    msg.setDestination(41134U);
    msg.setDestinationEntity(126U);
    msg.name.assign("VIZFZCZMUYOBYMTESKWQIUOIGWGSNZSAVLGOXEXRBOEXMYKCQRHQFNKWQERXIUBPHSLPCKGJOJZKCUAHDUVHFZJMEBXQTUAURMSDXCTHSRGQNTPDBPKTJOMDRQERZIGELYUDHOAAZHOWVWNNQYRLJELETGSTABVRYSNGDXNDCUKMQGLTXICJTVAAVNBPIPFWFKFMPVLBOIYHWAPXKSLW");
    msg.visibility.assign("BISZLBVBDLJRWIUPAZDCQOMFYHJRLQUVJLVUDUIZHDOKBCYZWIVXGTVNGLFHGQPRSNLECDDNOPATLKDMCWQTACWQPBMPYRTPTOEOARUBJ");
    msg.scope.assign("MODUFYXOZJXBUZJGTRWINRYXTVWSJNYHXWDPOFAHMAPRUVBBQRXXOMEKBNSUYTIRTEQESJHMIVPFSNAZKQUEMNLJZSVCKLRIYBCZGUCDGLQIOCFMCMWVDDNZKGOCEEKVHGXSOVVCCAKJTELTFILMALZRYJDYQ");

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
    msg.setTimeStamp(0.306376932647);
    msg.setSource(49583U);
    msg.setSourceEntity(181U);
    msg.setDestination(51145U);
    msg.setDestinationEntity(59U);
    msg.name.assign("FOBLXTDCGMRISKJAMWNSEEAOBFGIHTSQYXVZNGZBRUXYWDAPYYXNQAJBCBZYPZNRLWWBFAWJYDJD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DYSKOVUXWELSLVJBT");
    tmp_msg_0.value.assign("HUALZZESHDUKEGPDGORKKLMMUOOTADYDPVTLYQWJFWHLLOEBEXESHGXAJLL");
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
    msg.setTimeStamp(0.489722086311);
    msg.setSource(18610U);
    msg.setSourceEntity(64U);
    msg.setDestination(58965U);
    msg.setDestinationEntity(49U);
    msg.name.assign("BPSMVMPCVIIAKKRBJZFBBWJJNOLQFHATYOTTYSEGDISXEJHHUGDRHJWVTZFLUFPIPMNSUDZAVISIDNUZKDKFQPWJGQVTCTZRCGLLLKJRGGHFYVBLYRSKEKGWAHOPLBRXTWMSOFNIGTBHVUEUJWYMQALNEACYAOJNXFTAGEQUFTIFCGRMVDDMSRKPDCCMMNBYOIHDRQCVQOXUQPUZBWQCYXSXXEEZYKDSCOWXEZBNYJELWXLPQUWZVNHOZKNMRI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VJTXMVKJPGLXOYRXKWHKAAATARBVJQ");
    tmp_msg_0.value.assign("SRBUIUIMRFIKPQCRELAMGKSTWABJMUIERGQPJWMBE");
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
    msg.setTimeStamp(0.543193333772);
    msg.setSource(16801U);
    msg.setSourceEntity(40U);
    msg.setDestination(816U);
    msg.setDestinationEntity(150U);
    msg.name.assign("KEIKANGPOYDRLKSUGZFEEJXQUEICNWPFPMRDMKGYZFUPCIAEXQTSXBPKDFLQCYQWRMONXVZGQMTG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LFFYJRQDPLHNZZUOORAOVAHPSIVSSSGKIYIUGPTZORFQTZRKXFGWYZWCWIBKYDMXODUVUYWWNORGCDLKJFPBTSBEVXIDGRLVLZRMOKKIJBUYAWWPXTZOFDHJQKMIUBAJLHQNCMBXVXHJAHEHVNLGNQBYDUPCOGKUMCEIMDKYAQPPSTTIWKLJQHBMSZXWRCD");
    tmp_msg_0.value.assign("TYCPJOYJLMNKWDUSWDPSUYSTFUYZLAIFNLXZYAAOENOMTHVNPKIVWRGEUIOKEBCTKEZRTMLUXQPDRQVGBMCNWFKTZAGMOETHOEQBDNGJDIEFZGAQXXLYVGSUASWBPHPFIHXLCYDZRPIWSKEFMKYUJHAVUSRZHXNJXCHZCKUWHFIAIMJOYTRMRRFQXGJAXJRPJBKWQBENBWDISUPNFVKOWDAMBVIYGQL");
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
    msg.setTimeStamp(0.748899416368);
    msg.setSource(12598U);
    msg.setSourceEntity(136U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(245U);
    msg.name.assign("MZRNGOQCZCKMEJXZGTJUJLGMPOBQSGNFXUDXNJGSNURAWPQVRSHOVBNYWSWEVDCKLWYCFVHHOHMRXWBJHPEDCMGWYSXCYGZHUYYIFBHSTRZKYMKSTDAYONXHVRQLKBXGCJVAKPMZZIFEFBIVJLTQXEFPAEWLUHLBDUOFOFXTVXATAR");

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
    msg.setTimeStamp(0.930223366324);
    msg.setSource(8793U);
    msg.setSourceEntity(146U);
    msg.setDestination(33700U);
    msg.setDestinationEntity(207U);
    msg.name.assign("UYYVSIUSIBQLJAFCLKMSFKJGPVKEKHPOHSCQPBTAXTNQMZTGIMDWWOXKRWBEOLZRNRROWHSOZKEQSUZFROGEJHMDTQQOYACL");

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
    msg.setTimeStamp(0.682076005277);
    msg.setSource(35216U);
    msg.setSourceEntity(142U);
    msg.setDestination(13724U);
    msg.setDestinationEntity(91U);
    msg.name.assign("QYBXCUWONKGGGOCRWRUXXAFLLSYKVDWRCEWMVMAVVJIYIQPBEYJEKJZIJMIPCJSKVBTGZKZAVTTILEGEUKWNQLJDXXPLINUNFGPYVQTJLXDTFHPMUVFIOFZOCLGAUDSQUHGOTFTJIQHFAOODMRMZAHHVHNMODAGOEFSWNHBWKYASSBYZCPZNPRJIDRKXDTHCQSNDRMQMLPXZTSNL");

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
    msg.setTimeStamp(0.749736497376);
    msg.setSource(39405U);
    msg.setSourceEntity(168U);
    msg.setDestination(47029U);
    msg.setDestinationEntity(192U);
    msg.timeout = 1151655255U;

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
    msg.setTimeStamp(0.652739252093);
    msg.setSource(30481U);
    msg.setSourceEntity(216U);
    msg.setDestination(54291U);
    msg.setDestinationEntity(203U);
    msg.timeout = 32444808U;

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
    msg.setTimeStamp(0.711994460277);
    msg.setSource(43012U);
    msg.setSourceEntity(123U);
    msg.setDestination(63919U);
    msg.setDestinationEntity(20U);
    msg.timeout = 2204973594U;

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
    msg.setTimeStamp(0.958125154889);
    msg.setSource(41902U);
    msg.setSourceEntity(236U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(59U);
    msg.sessid = 228637701U;

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
    msg.setTimeStamp(0.127030222767);
    msg.setSource(10084U);
    msg.setSourceEntity(121U);
    msg.setDestination(27342U);
    msg.setDestinationEntity(12U);
    msg.sessid = 2515997435U;

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
    msg.setTimeStamp(0.521767926245);
    msg.setSource(59775U);
    msg.setSourceEntity(244U);
    msg.setDestination(48722U);
    msg.setDestinationEntity(25U);
    msg.sessid = 3051681743U;

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
    msg.setTimeStamp(0.716734724355);
    msg.setSource(3672U);
    msg.setSourceEntity(181U);
    msg.setDestination(18258U);
    msg.setDestinationEntity(178U);
    msg.sessid = 3786087153U;
    msg.messages.assign("QPIGTUVZZEGHAIJZRSAPDYOOUFWKTRNDCCSAKQNUXCOMUEDUNKIINGTXMHMOJGPLXLY");

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
    msg.setTimeStamp(0.273340574663);
    msg.setSource(19492U);
    msg.setSourceEntity(231U);
    msg.setDestination(27294U);
    msg.setDestinationEntity(192U);
    msg.sessid = 3207645200U;
    msg.messages.assign("LOOWBLTEWZTQIDMUYMBDCAIMEWERJZXWTLIOCZQEZGRJRUKIPNSUJHNZXKLLFCNVMAEBV");

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
    msg.setTimeStamp(0.39127056717);
    msg.setSource(39519U);
    msg.setSourceEntity(70U);
    msg.setDestination(38370U);
    msg.setDestinationEntity(11U);
    msg.sessid = 929685096U;
    msg.messages.assign("GMBMLWPZUFGVYCAUMTNWPUHAYHGBXIFVQKZOOCIZRPDZHJCVIEKFNYASCAGWGWHYJDMVQPDMYPFJRDKQWFCBTUDDOKFWWXIRSRYLLKJXNQCJDHTUKNGQOPUFCPX");

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
    msg.setTimeStamp(0.390863730747);
    msg.setSource(25057U);
    msg.setSourceEntity(188U);
    msg.setDestination(17538U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2597989294U;

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
    msg.setTimeStamp(0.083058883432);
    msg.setSource(25451U);
    msg.setSourceEntity(16U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(33U);
    msg.sessid = 1898724200U;

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
    msg.setTimeStamp(0.341813739724);
    msg.setSource(44306U);
    msg.setSourceEntity(93U);
    msg.setDestination(53954U);
    msg.setDestinationEntity(101U);
    msg.sessid = 985526411U;

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
    msg.setTimeStamp(0.893688263984);
    msg.setSource(26956U);
    msg.setSourceEntity(69U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(55U);
    msg.sessid = 3640607052U;
    msg.status = 7U;

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
    msg.setTimeStamp(0.97727754835);
    msg.setSource(26139U);
    msg.setSourceEntity(237U);
    msg.setDestination(33084U);
    msg.setDestinationEntity(154U);
    msg.sessid = 2535205083U;
    msg.status = 202U;

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
    msg.setTimeStamp(0.0550872390543);
    msg.setSource(2284U);
    msg.setSourceEntity(67U);
    msg.setDestination(42893U);
    msg.setDestinationEntity(106U);
    msg.sessid = 2557875965U;
    msg.status = 48U;

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
    msg.setTimeStamp(0.324036354523);
    msg.setSource(36556U);
    msg.setSourceEntity(13U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(223U);
    msg.name.assign("BODZZFGFGSMBSBACQEZNUYMRKCHYENDDIQNOYARJUGBYGOUIPLSJDLODWWLQQZRSZXDKFWPXCTBZLNQCJYUURHZTPLKVROWNUVV");

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
    msg.setTimeStamp(0.431590837631);
    msg.setSource(51151U);
    msg.setSourceEntity(53U);
    msg.setDestination(10154U);
    msg.setDestinationEntity(234U);
    msg.name.assign("BRFOIOKPSQINCNXAJMLTFTQQJUSVEIOIKUEQBJMAGWFLVEICCKEGTQVPQABCLBXKWUBIGCGZCSEVKMZSAOWDLQPXUUNNTEYMYVNLGQFKVRHXAJUZHNGBPSGTUNXJTLOHSDZCJDJVWBCYWZLTHDIZNDHSESXBZQIYWPAQFYWRYDGKRPTPIUAJYPZMNZMWAHSVPFXYJKDLREPREHHUMMOCBWDVGUE");

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
    msg.setTimeStamp(0.666875897342);
    msg.setSource(26354U);
    msg.setSourceEntity(57U);
    msg.setDestination(34172U);
    msg.setDestinationEntity(16U);
    msg.name.assign("PGTPBHVXYIROIHHLTQAKKLFRUJGHBMXKWPYBJOKBJNOZXJJIKQZCAYFLCLOMRY");

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
    msg.setTimeStamp(0.0458982798401);
    msg.setSource(53424U);
    msg.setSourceEntity(1U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(10U);
    msg.name.assign("HUDYAJIGDVPSNETNRCIVYNAWLFWPFERXMLKARKQJQWOAEOJXUVWSOLBUQDZAJFCTDYOKDBZMHXGSJHIXIUZARVIPFTLTSLYDCCITZNAVMYQNT");

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
    msg.setTimeStamp(0.553462338773);
    msg.setSource(40316U);
    msg.setSourceEntity(210U);
    msg.setDestination(30700U);
    msg.setDestinationEntity(195U);
    msg.name.assign("WRBVSTLIESDVJBRDGUSSCVTFICYESILFHTJKGOVDWBMTZKLMEDAPAQZFPEAXCOHHGUXRUXNSOPDIOCCFMPXXMJSRORRZQLWUNYYRYKUXEXIKCNOWKNGVAPOCDFXMJWUHJMLQTHYBJPWLWGJASYIPPANPELGNLFUBRLOGCVOZYNJHEECYBMBBMNUESFZQAAFIQZZZGAKELVODSUKQTFQKTJGHJND");

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
    msg.setTimeStamp(0.245130845624);
    msg.setSource(32701U);
    msg.setSourceEntity(134U);
    msg.setDestination(24809U);
    msg.setDestinationEntity(71U);
    msg.name.assign("TQWSARQMFCOTNKBEMLJKBIXITP");

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
    msg.setTimeStamp(0.382587344716);
    msg.setSource(19354U);
    msg.setSourceEntity(175U);
    msg.setDestination(37127U);
    msg.setDestinationEntity(4U);
    msg.type = 89U;
    msg.error.assign("VOWKHBGBCLFLVCAQGCPBWXFSWLDLTJOUXUKENHWBDJPICFMAPBBAZNUUFWSTQBADNCEPKVLRIHRMQHVYZDCSFFRFGUKNZSMKIUXERXTHGIOGPJQCYQGTHNYXGWAMOIWKBEKDENCDYYDZRTMAPJPRBGJJZIIWSPJHTZIDOOWLNMIQVXSWUGOHSAZNUEXBQTXVRFCAZVSAPKQEGRYZXY");

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
    msg.setTimeStamp(0.449492554557);
    msg.setSource(12709U);
    msg.setSourceEntity(16U);
    msg.setDestination(62939U);
    msg.setDestinationEntity(4U);
    msg.type = 63U;
    msg.error.assign("IAWMRKHXDDBBHXLWJEPVIAXGINYLKSPUGIUIBHZNTURRHKHHUDYTNJETIWKEENVSASXOCKSYVLGCMZAYBBUHRLFDLKOABZWFJMUQRDNOHOIFSOBCPWIUNFVJDIGZQCTQIMFMAKTOXZTNZRQYCPUKRKMZPWXDMVXERGGPRTFXNFCQYAJVFAXVGCOWJWKSETQBEJCLYLPUTSREAXPQMQBZEMDZ");

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
    msg.setTimeStamp(0.934809626803);
    msg.setSource(28981U);
    msg.setSourceEntity(252U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(33U);
    msg.type = 162U;
    msg.error.assign("ZKOKKCIDRIJJHHYMRTTBWLJTENLOGIDSAVLMHEQYQRLUWOQIHZXDWHIXNVIJXVEBJTUSMPEALLFSXOKGCSJBFZPSNRNXXYDLWQIJT");

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
    msg.setTimeStamp(0.679644519107);
    msg.setSource(20384U);
    msg.setSourceEntity(173U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(50U);
    msg.seq = 23444U;
    msg.sys_dst.assign("TGAWVGYWZSOFNWMICUDSXR");
    msg.flags = 120U;
    const char tmp_msg_0[] = {45, 11, 87, 71, -119, -85, -95, 62, 9, -6, 47, 52, -100, 78, 117, -39, -39, 111, 26, -15, -20, -29, 30, 38, -120, 38, -83, -30, -36, -12, 101, 74, 113, 108, 76, 37, 76, 72, -30, 100, 37, -97, -34, 90, 126, -4, 102, 105, 119, -100, -41, 90, 33, -77, -44, -104, 54, -36, -85, 88, -42, 49, -23, -28, 44, 45, 77, -12, 25, 59, 47, -117, 34, 33, -42, -40, -39, -26, -19, -81, -121, -57, 126, -96, 92, 36, -98, 22, -23, -101, -121, 80, 23, -45, -47, 124, 82, -54, 31, 29, 16, 118, 51, 67, -49, 6, 65, -21, -108, 72, -74, -15, 90};
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
    msg.setTimeStamp(0.0845080885811);
    msg.setSource(18766U);
    msg.setSourceEntity(230U);
    msg.setDestination(43879U);
    msg.setDestinationEntity(221U);
    msg.seq = 27774U;
    msg.sys_dst.assign("AHRWDROIXBACMFGFQSBOTYHEQLTMRKLDYSDEYPLLPMHPPFAEICFSLNJHWJIYSMKGLYCEUDFCZYKEQNQCVQBMYZBWUVKTVFHDHXXTBINVOPDPCEHQGXTGIJDGTAJOAOCMIBIHAENZFHSSSMKKQYUAVNPSKVXBBGBFTGXUOUOGJRWOWQNRZR");
    msg.flags = 71U;
    const char tmp_msg_0[] = {95, 84, 30, 113, 58, 32, -40, 103, -109, 120, -84, 60, 88, -37, 19, 107, 9, 48, 23, 92, -119, -43, -50, 43, -29, -52, -54, 102, -51, 61, -98, 11, 65, 119, 0, -127, -6, 112, -24, -44, 62, 20, 27, 15, -42, 41, 105, 99, -64, 108, 47, 56, 60, -50, 107, -85, 100, -19, 90, 25, 52, -93, -99, -42, 17, -119, 103, 96, -32, -72, -35, -23, 24, 85, 31, 12, -80, 51, 122, 34, -76, 96, -93, -117, -50, -21, -73, 70, -31, 19, 12, 105, 56, -122, -95, 18, 18, 23, 28, -7, 125, -7, -126, -127, 110, 21, -70, 2, 79, 124, -70, -118, -42, -44, 22, 54, 71, -31, -36, 90, 45, 10, 79, -107, -86, 90, 112, 113, -104, 12, 20, 58, -127, 47, 104, 34, -62, -5, -81, -72, -76, -84, -54, -79, 126, -123, 34, 90, 126, 121, 23, -100, 93, -32, 61, -24, -86, 12, 96, 7, -12, -125, -118, -110, -105, 124, -92, -22, 24, -21, 100, 55, 32, 73};
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
    msg.setTimeStamp(0.489403970164);
    msg.setSource(30502U);
    msg.setSourceEntity(232U);
    msg.setDestination(22828U);
    msg.setDestinationEntity(210U);
    msg.seq = 56062U;
    msg.sys_dst.assign("IPUNVXSSIRBDQCULVDYNKKTXEQYUQCZNFMJTZMYJJUZDGQHFJAEBJSFKDJOHTORQAIKEYGOHBKRFDRCMBYGRKYHBNVSZJNQXCOZSMILRK");
    msg.flags = 175U;
    const char tmp_msg_0[] = {123, -108, 27, -71, -64, 93, -106, 94, -17, 72, 85, 51, -32, 126, 16, -110, -62, 4, -91, 36, 8, -42, 70, 51, -56, -97, 65, -90, -35, -62, 98, 42, -31, -55, 47, 113, -118, -120, -107, 96, 107, 68, 63, -88, 43, 77, 85, 60, 47, -108, 55, -84, 77, 6, 28, -112, 126, 114, -111, -73, -53, 33, 100, -1, -95, -70, -37, -83, 100, 13, -128, -60, 109, 89, 36, 60, -70, 53, 70, 94, 17, 34, 52, -22, -126, -125, 90, 20, -69, 87, -118, 125, -76, -47, 99, 10, 36, -32, 58, 42, -70, 126, -11, 101, -33, -17, -19, 116, -6, 102, -11, 120, -102, 106, 82, 119, 74, -121, -128, -47, -60, 69, -76, -114, -15, -51, -31, -86, 75, -87, -64, 71, 29, 26, 82, 101, 12, -27, 2, 67, 20, -40, 55, 36, 70, -67, 11, -75, 16, -105, 109, 117, 33, 47, 88, 28, -48, 89, 126, 32, 61, -48, -52, -52, -8, -78, -108, 107, 82, 70, -77, 63, 82, -24, 113, -59, -84, -104, 72, 111, -23, -9, 83, 120, 24, -30, 71, -57, -45, 42, 16, -108, 119, -61, 23, -17, 4, 104, -39, -116, 2, -37, 107, -64, 113, 24, -58, 94, -123, -62, 32, -71, 111, 33, -40, -72, -124, 18, 18, -37, 66, -69, -101, 118, -116, -51, -95, 19, 57, -106, -28, -12, -25, -39, -19, 106, 71, -51, -77, -22, -43};
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
    msg.setTimeStamp(0.263546204394);
    msg.setSource(5827U);
    msg.setSourceEntity(161U);
    msg.setDestination(36743U);
    msg.setDestinationEntity(21U);
    msg.sys_src.assign("XAPKRNNENYJBEMLPGJYPTMZIZPJLDHMXAOWFHYAZDOWPERSNSRCLQKUAVDVLVSLACEDJWZTMTNQQCUXUXXJFQKTODKY");
    msg.sys_dst.assign("NAHEHPICZJQYESFVFWJGFUULTANCKPCWVDZXDZBFBYTIEUFPHCFPCRTGLKIIAPDKMYPNKNRVUXUNVYJGNLXGJTWDJZYUZZDEKHMQMOZEIBWBNXJKTNUXLRDZNTHMRIDX");
    msg.flags = 146U;
    const char tmp_msg_0[] = {104, 34, 12, -59, 103, -103, -7, 92, -56, -126, -9, -118, 83, 92, 46, -86, -97, -104, -44, 14, 50, 4, -17, 65, 18, -57, -22, 115, 3, 81, 94, 15, -94, 7, -71, 48, 57, 92, -93, 75, -90, 14, 23, -78, -98, 5, -14, 98, -70, 58, -127, -60, -74, -39, 115, 84, -74, 15, 14, 117, -4, 74, -31, -123, -58, -72, -108, 15, -6, -23, -16, -75, -2, -56, 17, 26, -50, 78, 65, 57, -31, 40, -83, 68, 52, -25, -52, -87, 39, -122, -11, 68, -7, 12, 44, 58, 75, -29, -119, -123, 52, -29, 72, 62};
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
    msg.setTimeStamp(0.736078651768);
    msg.setSource(7149U);
    msg.setSourceEntity(89U);
    msg.setDestination(48285U);
    msg.setDestinationEntity(45U);
    msg.sys_src.assign("TAKZBRWWZTJLDQEHZCHFNXLBKNMGBRSDSJMYHDEYUBRKHIEGCGYWJJIIYRNGTEBQUNTCTKNIXSMMFWDCVNDBVUAVTVOEKCJJOIHVE");
    msg.sys_dst.assign("PNEUISGXYNTHLTSIAMRQVZKEUIUWARLQHXRXGPIEIQDAWRLYQDUTEPKYRJYGBTHWNZFCMLDPMAJSRENHCBCWZGSQVDSAEXOONP");
    msg.flags = 227U;
    const char tmp_msg_0[] = {-17, 14, 56, 73, 57, -104, 28, 2, -120, 105, 27, 24, 101, 37, 99, -70, -43, 0, 53, 126, -84, 124, -74, -28, -81, 125, 8, -2, -113, -31, 98, 30, 98, -28, -110, -77, 103, -67, -120, -14, 76, -3, 118, 110, -83, 58, 85, -38, -28, -91, -80, 25, -94, -102, -10, -75, 0, -36, -52, 11, 125, -89, 76, 114, -38, -79, -42, -19, -38, -97, -113, 5, -119, 69, 21, 25, 20, -119, -91, -23, -8, 71, -19, 40, -24, 58, 26, -1, 60, -102, -98, 2, -48, 44, -66, -4, 8, 97, 14, -96, -3, 7, 48, 119, 40, 119, -116, -121, 57, 68, 82, 118, 112, -49, -35, 68, 14, -57, -20, -84, -62, 63, -128, 115, 108, 20, -25, 77, 50, -71, 43, 5, -82, -20, 115, -25, 25};
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
    msg.setTimeStamp(0.825435080108);
    msg.setSource(16022U);
    msg.setSourceEntity(50U);
    msg.setDestination(24327U);
    msg.setDestinationEntity(36U);
    msg.sys_src.assign("FPGBRTRLYXKURNLTWLDCTKVJIFTYAOS");
    msg.sys_dst.assign("RWCYJTMXADZBDLUAAJBNOUIFWLKMCJPRAVNQXFLMCVRUFIZGHIYHQOROEMWLQGQTGDHUAOPJBLSVMAXXRELDSHEGNFCOZHIQEZCZAYTTDUSJYBPCNWRL");
    msg.flags = 165U;
    const char tmp_msg_0[] = {116, 26, -14, -9, 8, 86, -97, -52, -105, -113, -122, -84, 37, 74, -50, -113, 107, 29, -106, -119, 105, 90, -4, -12, 56, 83, -12, -7, 8, -99, 120, 12, -35, -10, -112, -8, 23, -44, 56, 116, 21, 107, -17, -104, -21, 77, -29, -20, 70, 124, -56, 3, 12, -28, 48, -51, 2, -30, -33, 66, 75, -113, 76, -100, -11, -68, -108, 109, 92, -86, -46, -82, -81, -73, 10, -77, 61, 116, 27, -34, 76, -95, 126, 83, 17, -32, 115, 120, -67, 76, 118, 21, -44, 84, -1, -33, -34, 124, 24};
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
    msg.setTimeStamp(0.283568200056);
    msg.setSource(50378U);
    msg.setSourceEntity(121U);
    msg.setDestination(51418U);
    msg.setDestinationEntity(251U);
    msg.seq = 35511U;
    msg.value = 58U;
    msg.error.assign("JRNBGSQWTECCOKYVVOOFJCJRTNLDEIJLQDMPNIFRMDYKCKPBGNYLDPWTJRVGOSSIUIXERMZQXLAQJOOMJGKUGEUBKDNEXQHWHDFP");

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
    msg.setTimeStamp(0.38947209047);
    msg.setSource(50168U);
    msg.setSourceEntity(61U);
    msg.setDestination(41847U);
    msg.setDestinationEntity(164U);
    msg.seq = 25276U;
    msg.value = 75U;
    msg.error.assign("OZIFZCBFIDOEVLMYHJUHGSTMQFJFAHKGIIFODWBFXAHRHTVSUWTRQWEOBDKTESTUXPSLMCDJONBSILCWQDGOJNEJMRYLGSWXKOPABIWNELTXNUCKOAYOQGDVPMNUTTCYMXFJJAQRVWGDWZNYZRMCPQNQBAP");

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
    msg.setTimeStamp(0.00337977239905);
    msg.setSource(38227U);
    msg.setSourceEntity(185U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(240U);
    msg.seq = 37493U;
    msg.value = 134U;
    msg.error.assign("UFDHTHTIVZVNKLPYRIFLONABIGCEFPRRWXWITBVOKRAFFSQESFEBBXNCRCLNXXVNSKDDHKBLZCAWMFGHGGMAEYIFSMPNEQIQEYZNFRDNFTDSCXWKDYTTJWPLQVEJZULAJDJI");

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
    msg.setTimeStamp(0.0833462599004);
    msg.setSource(38627U);
    msg.setSourceEntity(221U);
    msg.setDestination(51682U);
    msg.setDestinationEntity(11U);
    msg.seq = 19434U;
    msg.sys.assign("DNNJIXWWGBROXAHGNYTSFQUDYASWNKVJMKCRGMEYFIPBWDXOMXNZVVXZZPDXIZMJAPOYTTYBKBZLDHUTZIRVEOMVRRPGSDSIKHWNUKCAEAYREUSAHTLUF");
    msg.value = 0.625393709106;

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
    msg.setTimeStamp(0.561511930015);
    msg.setSource(45025U);
    msg.setSourceEntity(75U);
    msg.setDestination(1293U);
    msg.setDestinationEntity(51U);
    msg.seq = 21153U;
    msg.sys.assign("VPLGVMVXFMWELHSUAWFKWPOKVUODBUIVTGFTXNKQSZNGIAOYBAFGNRBPSSLYPUJFUKKIAAECEBORBWEKBNMTHYYNWACUMSVHXCLRSXSUIUDMBGPPZGEHWUKKQSVJIDHZWMRQZJHDAENXAJIPLJNCJGUCORIWZLYJZQTFQJQCDDWPRPXFXTWLEOAXPMZMYOYQGBEHTRKEGNOCISFHBYQODMXVFFJDDIXQCYQITEHNZNMOT");
    msg.value = 0.412219302994;

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
    msg.setTimeStamp(0.240191689032);
    msg.setSource(42356U);
    msg.setSourceEntity(119U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(16U);
    msg.seq = 19789U;
    msg.sys.assign("VAMMSRSZWXVYSFWPJDEJNLCJBJDHMCHUKIIRTFBIOWLUIHYOATXLHNYMAXJTYMJZGAAOGIZSAZHFDTJUYWNRUTGVXGQVIBMCNQE");
    msg.value = 0.362172043587;

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
    msg.setTimeStamp(0.88999174636);
    msg.setSource(53990U);
    msg.setSourceEntity(130U);
    msg.setDestination(24893U);
    msg.setDestinationEntity(134U);
    msg.action = 36U;
    msg.longain = 0.672178508738;
    msg.latgain = 0.187429671406;
    msg.bondthick = 3144310770U;
    msg.leadgain = 0.975322073976;
    msg.deconflgain = 0.923867862817;

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
    msg.setTimeStamp(0.158048154149);
    msg.setSource(19566U);
    msg.setSourceEntity(105U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(191U);
    msg.action = 210U;
    msg.longain = 0.711209196577;
    msg.latgain = 0.756751424027;
    msg.bondthick = 1538793723U;
    msg.leadgain = 0.636092729245;
    msg.deconflgain = 0.43999896993;

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
    msg.setTimeStamp(0.000901506762117);
    msg.setSource(14223U);
    msg.setSourceEntity(222U);
    msg.setDestination(18272U);
    msg.setDestinationEntity(193U);
    msg.action = 161U;
    msg.longain = 0.889035728964;
    msg.latgain = 0.520619484267;
    msg.bondthick = 2841128474U;
    msg.leadgain = 0.568599378892;
    msg.deconflgain = 0.35225623906;

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
    msg.setTimeStamp(0.0939173330068);
    msg.setSource(32246U);
    msg.setSourceEntity(136U);
    msg.setDestination(47796U);
    msg.setDestinationEntity(221U);
    msg.err_mean = 0.364242963887;
    msg.dist_min_abs = 0.188178679713;
    msg.dist_min_mean = 0.582753046614;

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
    msg.setTimeStamp(0.199027098423);
    msg.setSource(12281U);
    msg.setSourceEntity(39U);
    msg.setDestination(24627U);
    msg.setDestinationEntity(127U);
    msg.err_mean = 0.989773397645;
    msg.dist_min_abs = 0.174621568107;
    msg.dist_min_mean = 0.474768424107;

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
    msg.setTimeStamp(0.250058849602);
    msg.setSource(42934U);
    msg.setSourceEntity(134U);
    msg.setDestination(25995U);
    msg.setDestinationEntity(138U);
    msg.err_mean = 0.409359298559;
    msg.dist_min_abs = 0.460842155683;
    msg.dist_min_mean = 0.843779642943;

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
    msg.setTimeStamp(0.572039805556);
    msg.setSource(10626U);
    msg.setSourceEntity(234U);
    msg.setDestination(44984U);
    msg.setDestinationEntity(101U);
    msg.action = 80U;
    msg.lon_gain = 0.37241930796;
    msg.lat_gain = 0.714503446662;
    msg.bond_thick = 0.782592356553;
    msg.lead_gain = 0.950258488223;
    msg.deconfl_gain = 0.0684202488286;
    msg.accel_switch_gain = 0.354657079504;
    msg.safe_dist = 0.673562390185;
    msg.deconflict_offset = 0.338269094943;
    msg.accel_safe_margin = 0.0992758704809;
    msg.accel_lim_x = 0.92969090933;

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
    msg.setTimeStamp(0.949736367725);
    msg.setSource(35482U);
    msg.setSourceEntity(59U);
    msg.setDestination(41750U);
    msg.setDestinationEntity(123U);
    msg.action = 232U;
    msg.lon_gain = 0.144211058277;
    msg.lat_gain = 0.415017865217;
    msg.bond_thick = 0.501593510713;
    msg.lead_gain = 0.530646812118;
    msg.deconfl_gain = 0.136195628121;
    msg.accel_switch_gain = 0.452776184912;
    msg.safe_dist = 0.938258417322;
    msg.deconflict_offset = 0.296139384889;
    msg.accel_safe_margin = 0.468200404884;
    msg.accel_lim_x = 0.784626109063;

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
    msg.setTimeStamp(0.72162893947);
    msg.setSource(38832U);
    msg.setSourceEntity(89U);
    msg.setDestination(17747U);
    msg.setDestinationEntity(122U);
    msg.action = 166U;
    msg.lon_gain = 0.549800300783;
    msg.lat_gain = 0.777966980456;
    msg.bond_thick = 0.398701002366;
    msg.lead_gain = 0.818776917351;
    msg.deconfl_gain = 0.851099979186;
    msg.accel_switch_gain = 0.642659441009;
    msg.safe_dist = 0.0540808218797;
    msg.deconflict_offset = 0.0302273561456;
    msg.accel_safe_margin = 0.447884503768;
    msg.accel_lim_x = 0.228641576229;

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
    msg.setTimeStamp(0.189417778007);
    msg.setSource(37664U);
    msg.setSourceEntity(118U);
    msg.setDestination(48210U);
    msg.setDestinationEntity(69U);
    msg.err_mean = 0.457491464791;
    msg.dist_min_abs = 0.642329157258;
    msg.dist_min_mean = 0.21731611724;
    msg.roll_rate_mean = 0.356399927197;
    msg.time = 0.239562764231;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 197U;
    tmp_msg_0.lon_gain = 0.934002523587;
    tmp_msg_0.lat_gain = 0.371287867312;
    tmp_msg_0.bond_thick = 0.0314271681443;
    tmp_msg_0.lead_gain = 0.623960591758;
    tmp_msg_0.deconfl_gain = 0.341289277047;
    tmp_msg_0.accel_switch_gain = 0.694216086213;
    tmp_msg_0.safe_dist = 0.81896729453;
    tmp_msg_0.deconflict_offset = 0.587221656601;
    tmp_msg_0.accel_safe_margin = 0.621459184952;
    tmp_msg_0.accel_lim_x = 0.821199830402;
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
    msg.setTimeStamp(0.86002685771);
    msg.setSource(9725U);
    msg.setSourceEntity(76U);
    msg.setDestination(43507U);
    msg.setDestinationEntity(178U);
    msg.err_mean = 0.969558605197;
    msg.dist_min_abs = 0.648766617815;
    msg.dist_min_mean = 0.687664067459;
    msg.roll_rate_mean = 0.544584281012;
    msg.time = 0.74690435722;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 60U;
    tmp_msg_0.lon_gain = 0.820676912131;
    tmp_msg_0.lat_gain = 0.395077258006;
    tmp_msg_0.bond_thick = 0.920766665547;
    tmp_msg_0.lead_gain = 0.195673972843;
    tmp_msg_0.deconfl_gain = 0.300306789788;
    tmp_msg_0.accel_switch_gain = 0.397495163926;
    tmp_msg_0.safe_dist = 0.639382696306;
    tmp_msg_0.deconflict_offset = 0.206924090994;
    tmp_msg_0.accel_safe_margin = 0.669483628302;
    tmp_msg_0.accel_lim_x = 0.476059450716;
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
    msg.setTimeStamp(0.225458845352);
    msg.setSource(63964U);
    msg.setSourceEntity(245U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(199U);
    msg.err_mean = 0.038224437289;
    msg.dist_min_abs = 0.372989350877;
    msg.dist_min_mean = 0.447834356137;
    msg.roll_rate_mean = 0.344476166405;
    msg.time = 0.183928301796;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 226U;
    tmp_msg_0.lon_gain = 0.814816507088;
    tmp_msg_0.lat_gain = 0.633451064705;
    tmp_msg_0.bond_thick = 0.484891231544;
    tmp_msg_0.lead_gain = 0.449698377182;
    tmp_msg_0.deconfl_gain = 0.999684076828;
    tmp_msg_0.accel_switch_gain = 0.449770091094;
    tmp_msg_0.safe_dist = 0.124354517909;
    tmp_msg_0.deconflict_offset = 0.181194435594;
    tmp_msg_0.accel_safe_margin = 0.0379726452529;
    tmp_msg_0.accel_lim_x = 0.431156154782;
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
    msg.setTimeStamp(0.0629879395923);
    msg.setSource(38413U);
    msg.setSourceEntity(210U);
    msg.setDestination(39866U);
    msg.setDestinationEntity(31U);
    msg.uid = 173U;
    msg.frag_number = 25U;
    msg.num_frags = 61U;
    const char tmp_msg_0[] = {74, 43, -75, 83, -121, -104, 9, -29, 34, 53, -55, 11, 1, 125, -91, 109, 123, 95, 44, -95, -22, 45, -31, -1, -19, 65, -86, 108, 35, -23, -65, -127, -92, 37, -102, -80, 0, 60, -24, 80, -73, -18, -14, 118, -83, 109, 6, -86, -100, 51, 36, 104};
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
    msg.setTimeStamp(0.492829013004);
    msg.setSource(53739U);
    msg.setSourceEntity(98U);
    msg.setDestination(19813U);
    msg.setDestinationEntity(195U);
    msg.uid = 49U;
    msg.frag_number = 31U;
    msg.num_frags = 8U;
    const char tmp_msg_0[] = {117, 64, -105, -36, -127, -100, -23, -21, 73, 73, -91, -47, 14, 35, 115, -3, -31, -66, 8, 0, -52, 90, -75, -91, -62, 1, -54, 16, 62, -78, -28, 111, 5, -7, 47, 96, 118, -62, 29, 85, -120, -100, -98, -125, -98, 78, 13, -108, 112, 97, 84, 90, -54, 34, 44, 30, -55, 0, -14, -87, 94, 97, 109, -67, -24, 109, 80, 84, 91, 120, 34, 117, 17, 117, -84, 67, -67, 83, -83, -106, 101, -42, -42, 27, -28, 89, 21, 47, -27, 39, -44, 89, 70, -50, -74, 46, 98, 43, 122, -17, -94, 90, 55, -19, -109, 39, -46, 119, -94, -124, 12, -35, -9, -123, 114, -4, -99, 20, -71, 43, -85, 51, -50, -61, 40, -51, 63, 88, 75, 124, -16, 6, -41, 27, 3, 72, 88, 95, 28, -41, -116, -12, 113, -6, -32, -92, 0, 120, 123, -10, -74, -56, 65, -15, 45, -54, 54, -10, 48, -15, 108, 117, -98, -116, -6, -22, -19, -67, 69, 5, 86, 11, -56, 102, 63, -126, -128, 82, -111, -123, -51, -111, -124, -80, -41, 113, 33, 27, -107, -6, 3, 111, 22, 11, -119, 106, -90};
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
    msg.setTimeStamp(0.837706462389);
    msg.setSource(64865U);
    msg.setSourceEntity(59U);
    msg.setDestination(34834U);
    msg.setDestinationEntity(133U);
    msg.uid = 147U;
    msg.frag_number = 249U;
    msg.num_frags = 92U;
    const char tmp_msg_0[] = {22, -83, 63, -57, 31, -42, 115, 46, 51, 37, -103, 118, 30, 47, -122, 54, -43, -12, -100, 66, 78, -3, -119, 123, -78, -91, -26, 59, -57, -105, -28, -66, -87, 117, -82, 93, 84, 94, -81, -44, 112};
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
    msg.setTimeStamp(0.640397014111);
    msg.setSource(47500U);
    msg.setSourceEntity(155U);
    msg.setDestination(56072U);
    msg.setDestinationEntity(81U);
    msg.content_type.assign("OPHIMTUVSRCLCHZWTCEJJYXEIBFNKZZPZGPNQWXOKBKZYOORIQCKBOLZEQCBJWQIGDTMABJBVSLHNNMFDCTJCJMBVFJWGWMGCEWIWVXXHYOLYTSRLFXIHLCAVKJEAUQFRRSKDUE");
    const char tmp_msg_0[] = {-45, 125, 47, 13, -2, -115, 82, -49, 94, -78, 74, 0, -64, 66, 90, 124, -47, 34, -22, 126, -27, 70, -68, 14, 76, 18, -74, 54, 24, -25, 48, -124, -32, 39, -17, 120, -97, 56, 10, 49, -107, 46, -73, 29, 55, -103, -11, 1, 120, -91, 35, -41, -20, 76, -16, -87, -92, -3, 125, -84, 126, 6, -31, 16, -45, 12, 111, 8, 85, 59, -101, 126, 101, 44, 125, -4, -112, 88, 5, 112, -85, -47, -13, -128, -32, -20, 38, 76, 51, -11, 85, 123, 45, 56, 100, 97, -84, 36, -124, -17, 88, -103, -79, 87, -92, 43, 31, 78, 60, -27, 86, -75, -84, 98, -43, 3, -89, 111, -53, -1, 65, -30, 75, -14, -96, -51, -123, -110, -5, 97, 30, -126, 25, -108, 107, 114, -92, 30, 77, -14, 117, 92, 100, -68, -107, -50, -43, 78, -31, -123, 12, 27, 104, 99, -109, -77, -93, 69, -37, -114, 13, -95, 67, -40};
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
    msg.setTimeStamp(0.219432545808);
    msg.setSource(8933U);
    msg.setSourceEntity(90U);
    msg.setDestination(33872U);
    msg.setDestinationEntity(164U);
    msg.content_type.assign("DBOFKBEAMUGSUSXCHIWJABAZVMNADGZJGYZROCPMYVSRJGAKPRLHPBUYKNWHZOTQILLZPNUAJFHWVROOLVCJIUWWFQPJSKZBJTBWFKLFTKHIWXCGVIQVEUECLATWSQQBQYHLJRNJPYRQVNMVSUAUYZNOHMCEDIFNUDNMPXGIXELALRXDXSSIXBSMRTDEKTMMKVRCEILOQHTEOHXGQPGKZ");
    const char tmp_msg_0[] = {67, 18, -44, 51, 47, 68, 77, 89, 116, -26, -78, -127, 75, -121, 89, 98, -79, -86, 10, 13, -40, 61, 86, -53, -29, -28, -30, -65, -66, 23, 29, 98, -79, 29, -50, 77, 5, -63, -79, 23, 10, -101, -108, -81, 126, -117, 84, -100, -1, 10, -127, 121, 81, 118, -54, 1, -65, 104, 121, 25, 62, -27, 28, 124, 31, -22, 86, -41, 112, -36, -94, 28, 74, -81, -69, 114, 66, -89, -63, -40, -45, 18, 91, 67, 124, -127, -91, 44, -99, 14, -20, 25, 8, 117, 6, -82, -25, 6, -93, -52, -6, 28, -105, 99, 77, 20, 0, -106, -27, 26, -72, -11, 65, 111, 17, -105, -50, -75, 72, -102, 55, 90, 2, 36, 122, 40, 112, -84, 10, -79, -56, 32, -14, 25, -63, -2, 80, -74, 25, 35, 35, -87, -27, -102, 37, 84, -31, 43, 123, 89, 23, 117, -101, 15, -29, 50, 2, 41, 122, -117, 51, 77, 54, 112, -73, -15, 25, 62, 120, -27, -13, -65, 1, -7, 90, 53, -21, -83, 81, -80, -3, 7, 54, 40, -113, -40, -73, 44, -13, -111, -60, 121, -73, -18, -64, -60, -111, 73, -121, 55, -119, -74, 37, 0, -84, -12, -103, -48, -86, -16, 123, 69, 11, 106, -102, -117, -96, -103, 67, 35, 120, -27, 4, 41, 97, -26, 63, 7, -127, 1, -64, -27, 57, 8, -17};
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
    msg.setTimeStamp(0.29538443713);
    msg.setSource(17087U);
    msg.setSourceEntity(135U);
    msg.setDestination(64826U);
    msg.setDestinationEntity(66U);
    msg.content_type.assign("CZAOVNVEXYLAHSUNNAKNRBHNBUJTCEYRUWJMHJXNQYYFRLSGKITVWHZTXQZGPFHGCRBROIGBGZKQVZOEEOORVPHETPIUWJGMBBMKIOIMDFCQSSXHJSASXLRSCDDSCTIPXHJAOICWIIFQPAZSJMVNQQAUKDDNUBUXYWZLEKZHJYJAZIMGFMBRM");
    const char tmp_msg_0[] = {-114, 25, -56, 51, -48, -52, 53, 95, -100, -92, 71, 59, -117, 51, 50, -120, 82, 75, -91, 26, 102, 97, -110, 33, 33, 90, -83, -27, 55, 41, -61, 45, 46, 44, 111, -51, 64, -68, 42, 76, -42, 113, 52, 13, 49, -121, 121, -24, 17, 31, -125, 120, 119, 61, 116, 52, -41, 92, -38, -50, -79, 116, -33, -76, -7, 104, 18, -93, -83, -122, -13, -78, 124, -31, -66, 32, 104, -71, -3, 44, -107, -6, -62, 94, 31, 61, 115, 68, -108, 104, -43, 6, 117, -79, -64, -86, -102, -119, 49, -125, -52, 73, -69, 61, 54, -73, -20, 31, 46, 44, 10, 94, -108, -102, -1, 89, -49, -49, 81};
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
    msg.setTimeStamp(0.158147279677);
    msg.setSource(60359U);
    msg.setSourceEntity(238U);
    msg.setDestination(15693U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.276281644944);
    msg.setSource(17637U);
    msg.setSourceEntity(219U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.350186151713);
    msg.setSource(29878U);
    msg.setSourceEntity(19U);
    msg.setDestination(36669U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.797132154468);
    msg.setSource(14609U);
    msg.setSourceEntity(126U);
    msg.setDestination(14077U);
    msg.setDestinationEntity(212U);
    msg.target = 2747U;
    msg.bearing = 0.331166577743;
    msg.elevation = 0.815984695947;

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
    msg.setTimeStamp(0.328056976583);
    msg.setSource(52810U);
    msg.setSourceEntity(179U);
    msg.setDestination(559U);
    msg.setDestinationEntity(159U);
    msg.target = 65224U;
    msg.bearing = 0.0688680923365;
    msg.elevation = 0.363752576228;

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
    msg.setTimeStamp(0.301692403661);
    msg.setSource(29495U);
    msg.setSourceEntity(208U);
    msg.setDestination(39728U);
    msg.setDestinationEntity(131U);
    msg.target = 13769U;
    msg.bearing = 0.667772087278;
    msg.elevation = 0.953985561148;

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
    msg.setTimeStamp(0.208336440637);
    msg.setSource(38633U);
    msg.setSourceEntity(134U);
    msg.setDestination(12101U);
    msg.setDestinationEntity(177U);
    msg.target = 59738U;
    msg.x = 0.202136270016;
    msg.y = 0.88574208162;
    msg.z = 0.938744460509;

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
    msg.setTimeStamp(0.725771104195);
    msg.setSource(56172U);
    msg.setSourceEntity(15U);
    msg.setDestination(25029U);
    msg.setDestinationEntity(167U);
    msg.target = 41053U;
    msg.x = 0.508206300624;
    msg.y = 0.277160821288;
    msg.z = 0.82885403953;

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
    msg.setTimeStamp(0.102545467584);
    msg.setSource(18893U);
    msg.setSourceEntity(5U);
    msg.setDestination(4199U);
    msg.setDestinationEntity(100U);
    msg.target = 35953U;
    msg.x = 0.710260963256;
    msg.y = 0.415979043846;
    msg.z = 0.837887690908;

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
    msg.setTimeStamp(0.683908094691);
    msg.setSource(2221U);
    msg.setSourceEntity(56U);
    msg.setDestination(56208U);
    msg.setDestinationEntity(116U);
    msg.target = 59759U;
    msg.lat = 0.674768757315;
    msg.lon = 0.178536485926;
    msg.z_units = 56U;
    msg.z = 0.0654415048399;

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
    msg.setTimeStamp(0.177361467889);
    msg.setSource(61816U);
    msg.setSourceEntity(8U);
    msg.setDestination(4948U);
    msg.setDestinationEntity(162U);
    msg.target = 25749U;
    msg.lat = 0.555038779984;
    msg.lon = 0.208195316709;
    msg.z_units = 203U;
    msg.z = 0.665106540323;

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
    msg.setTimeStamp(0.301958112881);
    msg.setSource(40497U);
    msg.setSourceEntity(232U);
    msg.setDestination(27835U);
    msg.setDestinationEntity(7U);
    msg.target = 39158U;
    msg.lat = 0.0619358316139;
    msg.lon = 0.5380687625;
    msg.z_units = 97U;
    msg.z = 0.874257530467;

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

  return test.getReturnValue();
}
