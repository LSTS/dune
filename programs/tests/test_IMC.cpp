//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 4c9dbd0e8271e97464c858f9d536d3f5                            *
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
    msg.setTimeStamp(0.317998541151401);
    msg.setSource(3628U);
    msg.setSourceEntity(111U);
    msg.setDestination(20714U);
    msg.setDestinationEntity(192U);
    msg.state = 1U;
    msg.flags = 208U;
    msg.description.assign("NGTQTNTAGMRDKHEDXBFPVMWLATVZRACNWHHMSMPZXKLYJKORJHQVZRWEAAPODYJDZSDJXZXXSASYMBXKLIZOOEKYFPB");

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
    msg.setTimeStamp(0.8564215853771644);
    msg.setSource(48504U);
    msg.setSourceEntity(114U);
    msg.setDestination(52408U);
    msg.setDestinationEntity(7U);
    msg.state = 199U;
    msg.flags = 178U;
    msg.description.assign("UCPQQTSGGWFHMDZOVRILABVJEKASIOEJSDUQHZMNLBFAFUHWEBCDXBRDAVLGYGVHJRWCTWRGAXJNUAUHSBQGCIYSMVRTKNBZFNUPIJIPQSKJMOXPQRZLXWQXUXCLMNWZZTINAOMJVRYYLZHTEEBIWBBPYKTVKAKIZSUTTZCCHQVDOLJHQGMPASYNWLFQDZHVWJOEHDNNGKPAYEERSFFPLEBYTUIPWYPRYJGXKOODXCMDDKNGCOIFU");

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
    msg.setTimeStamp(0.7840653252103138);
    msg.setSource(15607U);
    msg.setSourceEntity(85U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(162U);
    msg.state = 238U;
    msg.flags = 162U;
    msg.description.assign("YCPPBKDQGB");

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
    msg.setTimeStamp(0.23433942297140598);
    msg.setSource(43647U);
    msg.setSourceEntity(68U);
    msg.setDestination(57639U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.03146696770651858);
    msg.setSource(30602U);
    msg.setSourceEntity(145U);
    msg.setDestination(13465U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.5093536667793872);
    msg.setSource(1958U);
    msg.setSourceEntity(66U);
    msg.setDestination(19042U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.2540847152226201);
    msg.setSource(60500U);
    msg.setSourceEntity(251U);
    msg.setDestination(45747U);
    msg.setDestinationEntity(72U);
    msg.id = 101U;
    msg.label.assign("WQHVJXPIVLAESXYS");
    msg.component.assign("VBZUARPTCQCCYITDLTWHMNIVDLKJQGYARBRLYTDXFKWKRDIPBCVKDXGPMMTIWEEFJBACVFQLHXSNLEBSJMUOMMOBQUJQQKGSXNZYSPAZMBGMJUZVAQYZJAJGDZUAPXMYEPEYGZAVSXTVWQTCXZUXDAPDVSF");
    msg.act_time = 10312U;
    msg.deact_time = 40645U;

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
    msg.setTimeStamp(0.8878355976293993);
    msg.setSource(7166U);
    msg.setSourceEntity(119U);
    msg.setDestination(23449U);
    msg.setDestinationEntity(32U);
    msg.id = 138U;
    msg.label.assign("XSZLBPOUZOVCQOJZQMNBQIOYXYLPTPXYAEWJCZSICVDUGKCLIUJUBNKKRQMXGLOGILMTHYGALWYUGFVJMPUHCVGEIWPQRCAYBSTMIJNHDLKNJTOVBJRXTKFUMOCUORYBBXRSRAQEHENQHCTAZKWNBFUXSXYZRQRQMGOATLDZTULWAIDVLQIGMNWTGMAGKPNEPDHEFZEIMSOHKCBBEWRNKPJFXYKHZASDS");
    msg.component.assign("OUCPDLQJGRXRZDUXFPNYFXBGMKELJCMVXFSEDULSHFZKALVAINGFEWQWXYZOBSPTSXOAZPKHCHONYLNJVQFYRUZOHPYBPNUQFDESIBSCFSTEPNMIKPYWEMWQDAYSDADWJNROJRVLKTXVBAWGOTCZHDWOSVJDSMHFTAEGTCFI");
    msg.act_time = 48774U;
    msg.deact_time = 7032U;

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
    msg.setTimeStamp(0.9597536583299242);
    msg.setSource(18175U);
    msg.setSourceEntity(177U);
    msg.setDestination(19630U);
    msg.setDestinationEntity(41U);
    msg.id = 132U;
    msg.label.assign("XBOBBPAZEMEUKYCYBIOLMXFTQZBWHSZPKRTMIQWGMDGXVFTTNAZIREYLQYRDWXGKDYJQUCOUAKDZZVFGDSBKFENDMJUNXYSAYVSSOUVJTUNPYDLGRCLEPMHFHLADHOBCPXBTJHCOOWJWUQQJJFCVRQNGZIAIJVRLZ");
    msg.component.assign("NQEQGQUOCZCYIRESNVBYFXOUNJEHNHZHFXAXYEWCFUFLXMPJCIYYPLFOPBSFNPSRSXKPUECCJQYIZUVYZOJIDUVCWPKLMACTKWBAFJLTGETMSHNJKRYZHMRLVHMKHZRIMHUGIOIRJTI");
    msg.act_time = 23909U;
    msg.deact_time = 49838U;

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
    msg.setTimeStamp(0.3245208821125455);
    msg.setSource(55353U);
    msg.setSourceEntity(1U);
    msg.setDestination(34669U);
    msg.setDestinationEntity(74U);
    msg.id = 67U;

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
    msg.setTimeStamp(0.649926939937509);
    msg.setSource(51930U);
    msg.setSourceEntity(234U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(3U);
    msg.id = 193U;

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
    msg.setTimeStamp(0.8640846945901247);
    msg.setSource(60945U);
    msg.setSourceEntity(6U);
    msg.setDestination(14714U);
    msg.setDestinationEntity(229U);
    msg.id = 149U;

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
    msg.setTimeStamp(0.26119584168684773);
    msg.setSource(51674U);
    msg.setSourceEntity(76U);
    msg.setDestination(14701U);
    msg.setDestinationEntity(118U);
    msg.op = 45U;
    msg.list.assign("PENHIYKWWTASXOKFCZMMAKRESHBJCSRSIAWVXIIAUEORTQDBWZRKLOPQPQVFKLBTEDMTUPCGIALVTTFWGGKVVAGFODX");

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
    msg.setTimeStamp(0.9313021245317139);
    msg.setSource(51262U);
    msg.setSourceEntity(184U);
    msg.setDestination(57256U);
    msg.setDestinationEntity(26U);
    msg.op = 149U;
    msg.list.assign("VODUPHYMIXSKKUWONXPWFAKVWDTKQMGZWSOWQMLZIKMGJULMQZUXQNWYFZYVOFXBFIIUTMWOPYFBJSTHONAAGKTGRCCGIRUJDAKFVIDRPMNFBWHUMIWRAHEZIVGSNNQVPPKYBSIQRTLDDCVCJMCKVUBNCTXIJPYQGJEHSBZFRDASAGBEXLHGHWEURZRLHCLEDJTLTOBQTECLAYYZCPBHOMYOFZQRGNEEXSCZFYEJO");

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
    msg.setTimeStamp(0.894738889871351);
    msg.setSource(38722U);
    msg.setSourceEntity(225U);
    msg.setDestination(27197U);
    msg.setDestinationEntity(244U);
    msg.op = 209U;
    msg.list.assign("FRAHBGPVXEGSWGYKV");

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
    msg.setTimeStamp(0.35905787974822945);
    msg.setSource(57630U);
    msg.setSourceEntity(221U);
    msg.setDestination(52023U);
    msg.setDestinationEntity(16U);
    msg.value = 62U;

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
    msg.setTimeStamp(0.9033649412977924);
    msg.setSource(36288U);
    msg.setSourceEntity(57U);
    msg.setDestination(13254U);
    msg.setDestinationEntity(236U);
    msg.value = 37U;

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
    msg.setTimeStamp(0.6518848410309176);
    msg.setSource(51076U);
    msg.setSourceEntity(79U);
    msg.setDestination(15150U);
    msg.setDestinationEntity(162U);
    msg.value = 57U;

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
    msg.setTimeStamp(0.9027787657195848);
    msg.setSource(17062U);
    msg.setSourceEntity(64U);
    msg.setDestination(16742U);
    msg.setDestinationEntity(87U);
    msg.consumer.assign("HZWPHGPDRQLBPERBZERCOIYZRGGWSYJKMAPTNJBEOFSTOXDAWTCUNHARFUFJJGKNEPHMVXXTLAIJERLXMAMHNACVIYFKQJCJIUOZDARQOFDRVBYJEZKOZSNYYDEMHWSVYS");
    msg.message_id = 10092U;

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
    msg.setTimeStamp(0.056543498270050785);
    msg.setSource(21483U);
    msg.setSourceEntity(243U);
    msg.setDestination(63564U);
    msg.setDestinationEntity(77U);
    msg.consumer.assign("PTMSXWJLFFGOWJCNENXFQCIBZDLEGKQAMUUKRMXFVHETGCHTDYXKSOVHGBRWMIYMHAJZNVWD");
    msg.message_id = 56474U;

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
    msg.setTimeStamp(0.17102380175782317);
    msg.setSource(41134U);
    msg.setSourceEntity(12U);
    msg.setDestination(64723U);
    msg.setDestinationEntity(111U);
    msg.consumer.assign("QORGNJHWBNRXKSSUEUOVGHSAPFDKVWVZUIWNVTKZYXAHUHVMJVQLOBUQPOJHCSLBITQDGKYUCNJHAXZAGBRTXDFCDLFGDAQYPEIOTAJNJAZTXMKWPMYILUBWKSY");
    msg.message_id = 34488U;

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
    msg.setTimeStamp(0.8179473668489657);
    msg.setSource(33132U);
    msg.setSourceEntity(60U);
    msg.setDestination(41952U);
    msg.setDestinationEntity(227U);
    msg.type = 59U;

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
    msg.setTimeStamp(0.4687974201300752);
    msg.setSource(12622U);
    msg.setSourceEntity(217U);
    msg.setDestination(21495U);
    msg.setDestinationEntity(139U);
    msg.type = 229U;

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
    msg.setTimeStamp(0.5026726952450138);
    msg.setSource(35985U);
    msg.setSourceEntity(73U);
    msg.setDestination(39625U);
    msg.setDestinationEntity(17U);
    msg.type = 110U;

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
    msg.setTimeStamp(0.8862500409284797);
    msg.setSource(19928U);
    msg.setSourceEntity(208U);
    msg.setDestination(12377U);
    msg.setDestinationEntity(200U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.3193349216661757);
    msg.setSource(18093U);
    msg.setSourceEntity(244U);
    msg.setDestination(62375U);
    msg.setDestinationEntity(141U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.9305997517112214);
    msg.setSource(5415U);
    msg.setSourceEntity(140U);
    msg.setDestination(60453U);
    msg.setDestinationEntity(203U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.03213598350230462);
    msg.setSource(56057U);
    msg.setSourceEntity(31U);
    msg.setDestination(58577U);
    msg.setDestinationEntity(197U);
    msg.total_steps = 131U;
    msg.step_number = 220U;
    msg.step.assign("NMFZZJIYSLGKYSKAAOFVXINNKHLPSEEWSADPFORUAVDZLUJISSWAKIDXEGGUWESPFPBWYYAJFVYGHVZLZBJHHUUTPOCKXRLJYPYXOCZKQHMGCDGRQLNURTVWCXUFSCFABULGVWVNEBLWQUSNWOCMVHSDYMQXGQQYQYXIZT");
    msg.flags = 130U;

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
    msg.setTimeStamp(0.5183971394970313);
    msg.setSource(31134U);
    msg.setSourceEntity(177U);
    msg.setDestination(25420U);
    msg.setDestinationEntity(93U);
    msg.total_steps = 43U;
    msg.step_number = 186U;
    msg.step.assign("ESKJMEZQSYNUCTMUOCZRRPBEZDMRSPTXUYXPTPFGOXTYKIXNMPBCJILAACMOSBKTSOVGFDTZNYIGABUIJEHZREDWZODOPYTSHGFKQTLHNKYNJLRWVCWWLHCKUJWNUJALQRYQVLFJQTBKUBWRAVMMOLNIQSEUNPHGHDHMDPSFBFNYXYPCAZOGWVHXVGEVDOVKKXLGSJIZCFMOZLIXUPGWMQIKBAAHGFBTUASDVFRQXVCJCDHWDBEQR");
    msg.flags = 253U;

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
    msg.setTimeStamp(0.33090689964677544);
    msg.setSource(7261U);
    msg.setSourceEntity(228U);
    msg.setDestination(56050U);
    msg.setDestinationEntity(224U);
    msg.total_steps = 85U;
    msg.step_number = 154U;
    msg.step.assign("SLMQXCVWCZWROBICBBRSKRJVVQNPLDIPKGIYHDOGQAUFUVJBHADEGWNKHOMEPEQRKSNXSFLZLIWOGDVDMLZDMSELAQWNWHZWAGFRQU");
    msg.flags = 93U;

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
    msg.setTimeStamp(0.9580390539888985);
    msg.setSource(65131U);
    msg.setSourceEntity(119U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(108U);
    msg.state = 189U;
    msg.error.assign("TTRCLKEJYQQZDHFAVLZCUDMTALNKMPWZTRSYDTUQJXBFIBJTFDMBLIWLIPRCWWXOVXGFSTBPDKUJMGYOQYEHVWHNPLFSCZYVZPVEIKOBQTPUZGXOIURDYAMLZVQIEFOYKPHNRIBKYNSJKASEJXNOAFWXQFQOXZWDZANSVSRERHBBJZORCHBFKQXADNEVUERPIUQHEACJGMYUGIGRAOAVNCHGMBHDIVDGXPKLYGGWMHCLFKOSNUPTWMWJU");

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
    msg.setTimeStamp(0.8184734486030613);
    msg.setSource(18952U);
    msg.setSourceEntity(35U);
    msg.setDestination(37245U);
    msg.setDestinationEntity(160U);
    msg.state = 179U;
    msg.error.assign("EATXXNMPLCMDETIUEQPAFOYWWZGNUFNIMJSPDRPGRSNEQGIVXEIRIMAZUIIZLVAXJWRNKEWVHGFRYIKMZNHGEAQLGGYPOPOHKAPLGZTTFSQHNYDKUWUWBSKQJOYXHKMUJJLMYBHKBVXNCCPAZVWULJLYDQVCADESEOMWCBFRSM");

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
    msg.setTimeStamp(0.8859125430851232);
    msg.setSource(36278U);
    msg.setSourceEntity(1U);
    msg.setDestination(10624U);
    msg.setDestinationEntity(131U);
    msg.state = 121U;
    msg.error.assign("AUMXPJNJBGDXMWXHKTRRTBCVVBBLJBBRHKMZAZDNZAXIJFTOGDHOOYNPIWXJTDMXXCKXLFQCLQOOMFESMOKLYHCCOJDLDWSOWZTSSIYKAYSMQGYFLUKFPLTWWNXMAZRUREQPJWZYRVPUUOYSSGILYANMEPKHEGGREPEIECZQCVINTPZHBJPLVVQWFHFVRFGEBUIHSYAVTRCGDMAVADJNUBRNBKISKGNKQIFOYEUNSAJWFZIT");

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
    msg.setTimeStamp(0.3416967320578933);
    msg.setSource(45622U);
    msg.setSourceEntity(101U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.5119889968182318);
    msg.setSource(40886U);
    msg.setSourceEntity(227U);
    msg.setDestination(10402U);
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
    msg.setTimeStamp(0.15599926358620353);
    msg.setSource(19627U);
    msg.setSourceEntity(6U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.4097851740957906);
    msg.setSource(63145U);
    msg.setSourceEntity(86U);
    msg.setDestination(42727U);
    msg.setDestinationEntity(3U);
    msg.op = 41U;
    msg.speed_min = 0.5255929018476613;
    msg.speed_max = 0.005219875506766614;
    msg.long_accel = 0.3939481856110243;
    msg.alt_max_msl = 0.49045262157768565;
    msg.dive_fraction_max = 0.8927307124095972;
    msg.climb_fraction_max = 0.41186050188080603;
    msg.bank_max = 0.12154225729365675;
    msg.p_max = 0.626205337733985;
    msg.pitch_min = 0.3251562451893103;
    msg.pitch_max = 0.7697267808380496;
    msg.q_max = 0.3218403545977241;
    msg.g_min = 0.39346124022192486;
    msg.g_max = 0.7386581418906795;
    msg.g_lat_max = 0.17671745757407498;
    msg.rpm_min = 0.2554074764318972;
    msg.rpm_max = 0.6776977763320222;
    msg.rpm_rate_max = 0.1502835349298911;

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
    msg.setTimeStamp(0.0976804003418219);
    msg.setSource(52885U);
    msg.setSourceEntity(173U);
    msg.setDestination(61478U);
    msg.setDestinationEntity(158U);
    msg.op = 39U;
    msg.speed_min = 0.9505589723787797;
    msg.speed_max = 0.7897433715178535;
    msg.long_accel = 0.6793497589327565;
    msg.alt_max_msl = 0.609583144372042;
    msg.dive_fraction_max = 0.4389846162522145;
    msg.climb_fraction_max = 0.9849409562925744;
    msg.bank_max = 0.23027094834437334;
    msg.p_max = 0.10173907863189202;
    msg.pitch_min = 0.20869693831905445;
    msg.pitch_max = 0.12471300262392337;
    msg.q_max = 0.5837952107096477;
    msg.g_min = 0.02718511217639541;
    msg.g_max = 0.8735021470495492;
    msg.g_lat_max = 0.10115592295954212;
    msg.rpm_min = 0.2551892940936975;
    msg.rpm_max = 0.5291859170499704;
    msg.rpm_rate_max = 0.25026175390160743;

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
    msg.setTimeStamp(0.6384791972875876);
    msg.setSource(11662U);
    msg.setSourceEntity(204U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(196U);
    msg.op = 126U;
    msg.speed_min = 0.4176788927817695;
    msg.speed_max = 0.29244171781214345;
    msg.long_accel = 0.9404881853470316;
    msg.alt_max_msl = 0.4656877075001439;
    msg.dive_fraction_max = 0.631270401717394;
    msg.climb_fraction_max = 0.4417725786329514;
    msg.bank_max = 0.7099616851521;
    msg.p_max = 0.26520809143812185;
    msg.pitch_min = 0.6998425561486743;
    msg.pitch_max = 0.8068091999250149;
    msg.q_max = 0.4390081466097331;
    msg.g_min = 0.8811192299476405;
    msg.g_max = 0.5520045320201307;
    msg.g_lat_max = 0.6958198793186807;
    msg.rpm_min = 0.9006668782224333;
    msg.rpm_max = 0.4511741830392686;
    msg.rpm_rate_max = 0.8455343720433955;

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
    msg.setTimeStamp(0.13538628928609475);
    msg.setSource(29174U);
    msg.setSourceEntity(191U);
    msg.setDestination(48461U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.9167966909301186);
    msg.setSource(40835U);
    msg.setSourceEntity(214U);
    msg.setDestination(37295U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.011652394883966188);
    msg.setSource(11821U);
    msg.setSourceEntity(57U);
    msg.setDestination(29288U);
    msg.setDestinationEntity(253U);
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 10884U;
    tmp_msg_0.type = 160U;
    tmp_msg_0.tow = 1416214587U;
    tmp_msg_0.base_lat = 0.595244392982062;
    tmp_msg_0.base_lon = 0.7254261476340529;
    tmp_msg_0.base_height = 0.9219274413520607;
    tmp_msg_0.n = 0.35653855027942116;
    tmp_msg_0.e = 0.7013305635931077;
    tmp_msg_0.d = 0.9725620163182083;
    tmp_msg_0.v_n = 0.18800609005349966;
    tmp_msg_0.v_e = 0.06428848444132373;
    tmp_msg_0.v_d = 0.21820343273488285;
    tmp_msg_0.satellites = 198U;
    tmp_msg_0.iar_hyp = 49889U;
    tmp_msg_0.iar_ratio = 0.32083507874916795;
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
    msg.setTimeStamp(0.289525427129132);
    msg.setSource(32208U);
    msg.setSourceEntity(73U);
    msg.setDestination(28540U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.916183097164907;
    msg.lon = 0.3233732034760517;
    msg.height = 0.7890108208934066;
    msg.x = 0.07411391319089256;
    msg.y = 0.3053157098742111;
    msg.z = 0.6755891215206614;
    msg.phi = 0.5701354203729403;
    msg.theta = 0.6522536646419844;
    msg.psi = 0.14871820176694095;
    msg.u = 0.3874102834044246;
    msg.v = 0.9089200317814248;
    msg.w = 0.38540089601231065;
    msg.p = 0.6447193040108696;
    msg.q = 0.4498846933376227;
    msg.r = 0.42406285869823557;
    msg.svx = 0.344354858567016;
    msg.svy = 0.016757359223296908;
    msg.svz = 0.053579533589968475;

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
    msg.setTimeStamp(0.752211465428357);
    msg.setSource(44424U);
    msg.setSourceEntity(218U);
    msg.setDestination(34111U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.2407032282068987;
    msg.lon = 0.35800885556177753;
    msg.height = 0.6723247818333499;
    msg.x = 0.4610030637795056;
    msg.y = 0.5853725777932715;
    msg.z = 0.8016747746853223;
    msg.phi = 0.5654284330923323;
    msg.theta = 0.7212671412327069;
    msg.psi = 0.37187036711431887;
    msg.u = 0.46196850323616556;
    msg.v = 0.6971345859260456;
    msg.w = 0.22003813545679296;
    msg.p = 0.11349433830221622;
    msg.q = 0.6005086812700385;
    msg.r = 0.33699334337981834;
    msg.svx = 0.2792714913347836;
    msg.svy = 0.5168014001631128;
    msg.svz = 0.911899995402042;

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
    msg.setTimeStamp(0.8206330991795706);
    msg.setSource(34809U);
    msg.setSourceEntity(128U);
    msg.setDestination(13550U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.7936182088108319;
    msg.lon = 0.10568632860194338;
    msg.height = 0.3506706292869731;
    msg.x = 0.684612766660524;
    msg.y = 0.26795802564996984;
    msg.z = 0.9845703350200017;
    msg.phi = 0.8689253645706514;
    msg.theta = 0.9032047278024018;
    msg.psi = 0.7954090583488823;
    msg.u = 0.28958676996432253;
    msg.v = 0.21674745969860632;
    msg.w = 0.28146729696713557;
    msg.p = 0.016499532883668344;
    msg.q = 0.12477803332123871;
    msg.r = 0.6407786832732908;
    msg.svx = 0.6536556139825294;
    msg.svy = 0.01855427933873055;
    msg.svz = 0.6002973262874717;

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
    msg.setTimeStamp(0.3332291448277237);
    msg.setSource(59648U);
    msg.setSourceEntity(246U);
    msg.setDestination(59207U);
    msg.setDestinationEntity(27U);
    msg.op = 63U;
    msg.entities.assign("ZQPGWGTIJMOAMAJTCZJILENIWWNBCZBXSWFGPWOKLYZUSYPPCKDWTWDSGLVQKCKYJLTKMQEITBDXYLIDMHUBIHHBNYBRRORHVYVCBHIDSJWNXQZRJUSAMZXPFVVIRUBFOVQSARHQOKRGFYFLIXNQGLAVMPVUUUXMFDEHKSCHFRTQDWJPDNUOFHZAPGKGXNASKOCHECIZGNRSVNAM");

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
    msg.setTimeStamp(0.42252684999992707);
    msg.setSource(50722U);
    msg.setSourceEntity(46U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(59U);
    msg.op = 158U;
    msg.entities.assign("NWREOAQHBVCZNWJXYVRFDMCPIZUGQEQXVCCYGEYSMJWBZOUBNAGPLJRXWQSSVFQIOHJOWTRMXWQPUKMOMFUBTGXCEXSOPFOETPZSHIKETTLXNDBNRWJAVWODYTKUAANHDOVGAPCSBYULEBDVHDYSUDUJERFUWKVANSPQQHKLIIZLKMIBGYICIYJXDTULKGBXLIBDZCNJ");

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
    msg.setTimeStamp(0.6895376846905377);
    msg.setSource(17697U);
    msg.setSourceEntity(63U);
    msg.setDestination(50939U);
    msg.setDestinationEntity(178U);
    msg.op = 253U;
    msg.entities.assign("JJIIDOBOBCPRVNDCMXCSRRQNWFEFJNGHZZBZEHNRLGGFKGAKWSBJUQUWHOAOAGOQNIIPYVFZTRYLKPJOSQUZWFOLMXXMBAJVHTMTERIJHSVSCYDYBSIGSGTRWEAIYVFXULYEPTPGRVCZOLEKHXZTUGMUSKJRLD");

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
    msg.setTimeStamp(0.6340580421145979);
    msg.setSource(49177U);
    msg.setSourceEntity(221U);
    msg.setDestination(6724U);
    msg.setDestinationEntity(130U);
    msg.type = 161U;
    msg.speed = 23306U;
    const signed char tmp_msg_0[] = {45, 106, -21, -92, -29, -32, 123, -81, -55, 78, 5, 125, 63, -45, -104, 114, 62, 63, -18, 3, -29, -104, 88, -72, 80, -52, 31, -83, 45, -60, -104, 110, -95, 13, 15, 22, 16, 77, -92, 16, 0, -105, -68, 114, 22, 76, 86, -45, 37, -85, -48, 73, 8, -116, -78, 82, 114, 16, 106, -45, -120, 47, 39, 39, -125, -106, 11, 101, 86, -3, 41, 55, -23, 10, -10, -23, -69, -86, 83, -108, -119, 70, -123, -13, -31, 65, 76, 61, 35, 33, 109, 12, -63, 56, 44, 72, 23, -60, 97, 93, -28};
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
    msg.setTimeStamp(0.9434202586672681);
    msg.setSource(36665U);
    msg.setSourceEntity(108U);
    msg.setDestination(8959U);
    msg.setDestinationEntity(129U);
    msg.type = 89U;
    msg.speed = 180U;
    const signed char tmp_msg_0[] = {83, 20, 24, -125, -123, -84, -47, -67, -97, 71, -23, 80, -89, 107, -81, -61, -41, -49, 101, 104, -17, 67, 100, -16, 4, 36, -45, -13, 63, 11, 125, 19, 125, -61, 95, 50, -32, 62, 120, 87, 81, -77, 18, -71, -122, 112, -126, -49, 71, 92, -84, -5, -75, 14, -74, 75, 68, 58, -37, 114, 115, 35, -67, 110, 126, 76, 125, 41, -28, 126, 19, -84, -6, 30, 57, 15, 42, 40, -123, -128, -39, -74, -72, -63, 32, 65, -128, 3, 47, -113, 33, 57, 21, -77, -24, 0, -90, 3, -61, -100, 82, 44, -119, 111, -6, -57, 60, 52, 76, -1, 95, 81, 64, 110, -65, -4, -20, -104, -63, 19, 57, -126, -107, 126, 105, -116, -88, 109, -55, 1, -74, 82, 12, -48, -115, -100, -124, 13, -112, -26, -59, 60, 78, -70, -94, -20, -81, -33, 0, 56, 46, -102, -12, -112, -70, 30, 111, 123, 23, 104, -10, 68, -113, 106, 38, -67, -22, 117, -60, 6, -82, 29, 82, -121, 75, 12, 87, 65, 6, -29, 6, -116, 20, -92, -78, -26, -63, -105, -119, -105, 58, 91, 87, -81, 125, 116, 47, 1, -115, 85, -18, -13, -115, 39, 65, 0, 22, 12, -40, 60, -14, 100, -34, 110, -97, -80, 24, 72, 31, 20, -45, 92, 44, 55, -31, -39, -96};
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
    msg.setTimeStamp(0.33719412246658564);
    msg.setSource(10149U);
    msg.setSourceEntity(234U);
    msg.setDestination(40787U);
    msg.setDestinationEntity(230U);
    msg.type = 126U;
    msg.speed = 47033U;
    const signed char tmp_msg_0[] = {-61, 80, -114, -58, 23, -11, 71, -29, -76, 30, -89, -61, 14, -122, -1, 14, -22, -116, 107, 20, -64, -81, -43, 101, -40, -16, 117, -5, 42, 61, -62, 115, -15, 109, -51, -40, -2, -89, 90, 1, -43, 61, 55, 15, 100, -52, -79, 56, 20, -2, 9, -122, 83, 122, 55, 105, -1, -113, 105, 116, 27, -96, 63, 77, 79, 68, 92, 41, -21, -69, -92, -83, 44, -124, -99, -58, 8, -24, 36, -29, -72, 61, 6, 19, 36, -8, 95, 15, -62, 80, -48, -126, 119, 48, -75, -41, 21, -25, 102, 51, -53, 48, 63, 5, -117, 126, -76, 45, 3, -125, -88, -101, 64, 105, -89, -128, -117, -79, 23, -6, -45, 58, -21, 33, 3, 74, -84, 57, 11, 60, 95, -55, 70, 101, -90, 118, 22, -64, -123, 7, -122, -106, 106, 74, -63, 104, 113, 103, 55, -33, -71, 111, -60, -59, 104, -12, -125, -23, -92, -85, 71, 85, 35, 32, 85, 80, -117, -122, 59, -128, 66, -109, -106, -111, -112, 126, 105};
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
    msg.setTimeStamp(0.6754985457012573);
    msg.setSource(47188U);
    msg.setSourceEntity(221U);
    msg.setDestination(732U);
    msg.setDestinationEntity(18U);
    msg.op = 18U;
    msg.tas2acc_pgain = 0.20824182564942484;
    msg.bank2p_pgain = 0.8211927783252225;

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
    msg.setTimeStamp(0.069299823802626);
    msg.setSource(39988U);
    msg.setSourceEntity(39U);
    msg.setDestination(2959U);
    msg.setDestinationEntity(38U);
    msg.op = 62U;
    msg.tas2acc_pgain = 0.30051856964311696;
    msg.bank2p_pgain = 0.1039700902606362;

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
    msg.setTimeStamp(0.7763576624798801);
    msg.setSource(36861U);
    msg.setSourceEntity(50U);
    msg.setDestination(5361U);
    msg.setDestinationEntity(192U);
    msg.op = 159U;
    msg.tas2acc_pgain = 0.3570105600382941;
    msg.bank2p_pgain = 0.9381799962377915;

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
    msg.setTimeStamp(0.4300210978612453);
    msg.setSource(29218U);
    msg.setSourceEntity(86U);
    msg.setDestination(32763U);
    msg.setDestinationEntity(25U);
    msg.available = 3089405318U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.8435140237302787);
    msg.setSource(20399U);
    msg.setSourceEntity(23U);
    msg.setDestination(62574U);
    msg.setDestinationEntity(33U);
    msg.available = 2002710331U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.6603892173123862);
    msg.setSource(37934U);
    msg.setSourceEntity(34U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(132U);
    msg.available = 354284393U;
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
    msg.setTimeStamp(0.7744857643227314);
    msg.setSource(59808U);
    msg.setSourceEntity(188U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(14U);
    msg.op = 1U;
    msg.snapshot.assign("XINTBKMNUNWIBLCNRHOETQVHVQUNPYNYWETYTFUOGURRHSDLCTWDQQLJZFAOWSGKYQHLYRJB");
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 131U;
    tmp_msg_0.ncells = 227U;
    tmp_msg_0.coord_sys = 202U;
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
    msg.setTimeStamp(0.7003735193836129);
    msg.setSource(60061U);
    msg.setSourceEntity(45U);
    msg.setDestination(40563U);
    msg.setDestinationEntity(105U);
    msg.op = 47U;
    msg.snapshot.assign("ONLOECXVCNGHULFGJDRDVJYXITDABWXDTQYSAEMYYLQSNOTFHRAFBAAMICKMVDJWTQCFXTRKGLIPFSAVVSLWRRGXMDMHQSOZFPWORPJRGUMPCIGIWZLNBFKKKBQPCTXHQUOPDHJELRMQEMAZJIBVEECQAYXHYZXPNEYUHEGNOULAUFZSFIWYAFQLNVUOKDHYJOPSIBWXUTGBPCYKWNSBKBWCTDGBZZKEWOTVNRISUEJZURTVGXZMQCKP");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.21328137538522263;
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
    msg.setTimeStamp(0.8053375638237688);
    msg.setSource(15851U);
    msg.setSourceEntity(159U);
    msg.setDestination(2669U);
    msg.setDestinationEntity(147U);
    msg.op = 223U;
    msg.snapshot.assign("TQJLYHOZVODVAPGWECIFUOXJUIAEBIXNNSGBQFSSKYSNFYGVYUIVMMPIFHGBXTOMHGLCDJQDICTNWUFCKMBRWRTZYAIIXTGSOTFSOLOTVKXAHBPKJDAQPLHFGLAGLXKGRDIAKJEMZEROUJAVTCJZBRNPVPWYAOSHZBBVHQQM");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 40168U;
    tmp_msg_0.x = 0.14049068480876903;
    tmp_msg_0.y = 0.941515135125752;
    tmp_msg_0.z = 0.6041734123664014;
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
    msg.setTimeStamp(0.6124774001994154);
    msg.setSource(49958U);
    msg.setSourceEntity(180U);
    msg.setDestination(35084U);
    msg.setDestinationEntity(131U);
    msg.op = 119U;
    msg.name.assign("XEAHUWKHJXSDRVEEWXULOHECVGTQPAVQEXAIMUDGSLIUONKJC");

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
    msg.setTimeStamp(0.8368438777928829);
    msg.setSource(46113U);
    msg.setSourceEntity(31U);
    msg.setDestination(32280U);
    msg.setDestinationEntity(118U);
    msg.op = 7U;
    msg.name.assign("DPCWBIENYMMRNJITWGRTFURNONJSFWSYBMLFXDWWPAVDQXQFZKYOKZOTEUBNPKOQUAAPBDHGYMIHOWLVMLRRGHYTOKIWJKUEYUSMQYGRFTFACHLGJACFSVNOEXJJPLOBAHZETTXSYSBXCEQHVDZKHRTBFXVNBQJZQSIVT");

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
    msg.setTimeStamp(0.15696470801000761);
    msg.setSource(30679U);
    msg.setSourceEntity(67U);
    msg.setDestination(56729U);
    msg.setDestinationEntity(33U);
    msg.op = 231U;
    msg.name.assign("XPSDOKQOJMFPTZSJWIEBUHIPUJMZUGBDPOHGGWCYXGXFUNPOQJQKLSWFFVKLMRHFBUACDQTCJZHJVDOSCICNSPAYRISAJFDEHFCJITGRKBBVOXHGYHRSFWTIRVQUZHHHEYWJLBNMTLMENLIBDEATVSSXZDRKVYCMYERMRQMXKLEVPBYDCAWJYQSOANRYBUGXWPUAIAOZVTLBAOKXUKQTRILCUVKNIWWCVLZEPZZG");

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
    msg.setTimeStamp(0.4575260728140619);
    msg.setSource(48614U);
    msg.setSourceEntity(72U);
    msg.setDestination(2969U);
    msg.setDestinationEntity(187U);
    msg.type = 235U;
    msg.htime = 0.7399197057350467;
    msg.context.assign("RDKZLUIQZQEJYPHAUVYKZKMLTCFKMGQBNRROQZHXXIYXKALQFDMBWEMDMOBTYSVPTIPHNIFILJDXOBGOVIAOFXEK");
    msg.text.assign("IRSNNMPDUJKMGZGIOETWIKPTIZUNLDTYNQCOPNEULGWXBHOGUTRWLRGNMBXFTPCVQAXQORAYFBEVSLYDYKAXPJJEHSXOADUHBEOCYNJDWVLWEJLDPWCZELOBHVXDCHOGVHAGXAWBRTLGIABZEWKZVCBQAM");

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
    msg.setTimeStamp(0.8049882732202538);
    msg.setSource(2539U);
    msg.setSourceEntity(211U);
    msg.setDestination(10595U);
    msg.setDestinationEntity(212U);
    msg.type = 106U;
    msg.htime = 0.2335350127097341;
    msg.context.assign("IGYXRNSVLRUAOHYFHEJKNRAOZMSRATECEHFSWKKPUJXRMBIRCNPXOLLDXITGBJUNVIBTKCUWOHJBSTTWIERHYMHAQWDWXZVWPVVZLZCJPBKPYQOQGCQFNVAJEYAMJZBIGSYLNSNUYFIOBXPIZVVKONLOKXGLTGTZFDFPYPEPZSUKHBCIWEYLENSUVJNQXBLXRCHOKQRQAWHGTMDSAGMCEDRDDQDMFWCFEMIGWHFJGLSCUDTQXBFYPOJDQUM");
    msg.text.assign("VPYQECELHYVCDUXHJRAGBEXDGMKMLNBSVSJUCZKOUANNOTXFPYNJSOZLUFVDXABGUVPMTKSWPLZHKESFKOHYEWMCDMLRYQHNCTRMTVQDSWBKDQJRYSQSTNOUWYVPFOJVUKITCRJEBJACAYXIINMTWWEFWRDRPQOGFIIGBLHIAPYJIQDFJTATL");

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
    msg.setTimeStamp(0.4964455153471834);
    msg.setSource(2862U);
    msg.setSourceEntity(240U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(218U);
    msg.type = 207U;
    msg.htime = 0.9201664883985666;
    msg.context.assign("OIJGRHEQLBCHCEFHUHGMCAKXPBMXTVTKRFTXZPWDSNRULZVUJGZRFONKFYWQHGEVSDSXEROIBEYKKFXWBEIODZVZVDPUOITRWJJGZLIPJEKRZVHQRIBSKESXWTSBUMVWAKJHJQZPECNLMIOWPGINXCFEDJONOTWBNGVHGNTIYDXLRFITJFYRNXDYTVHLKBAUACQNMGYCMFDACSHWPLL");
    msg.text.assign("QTKVURJNVMELUXXCIPVRCOWGBTLRJLLVUSNZYXITDPKZKBKCPEIBIEDPASOFIFRKBVMAIUVSEUDHIBFWQQCNIIZQLULOABUWFADEJRXWAJZZEHSEEWZDDEAFSFXXLTZUPMXXGHSHBTOUYCOZWKMYJWAHVYOVZJAYRTBKPHJSQCADQWNGCKFRVWMSPCTYQELXQCJONRGYHDPNMYPTXGUTSGCVGRJMFWJSNGHNKNFGMAQLKTOYMD");

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
    msg.setTimeStamp(0.8793578449705782);
    msg.setSource(33225U);
    msg.setSourceEntity(254U);
    msg.setDestination(33140U);
    msg.setDestinationEntity(144U);
    msg.command = 46U;
    msg.htime = 0.34487899385291343;

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
    msg.setTimeStamp(0.5676383567580942);
    msg.setSource(1233U);
    msg.setSourceEntity(14U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(57U);
    msg.command = 48U;
    msg.htime = 0.9485747167442286;

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
    msg.setTimeStamp(0.31004660729992717);
    msg.setSource(49982U);
    msg.setSourceEntity(185U);
    msg.setDestination(42112U);
    msg.setDestinationEntity(58U);
    msg.command = 187U;
    msg.htime = 0.6618894088635281;

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
    msg.setTimeStamp(0.37967962669013344);
    msg.setSource(18667U);
    msg.setSourceEntity(19U);
    msg.setDestination(11843U);
    msg.setDestinationEntity(15U);
    msg.op = 155U;
    msg.file.assign("GCEHEJXUHSBBOLZVORPKUGFGOPEMOKPILFZQMCLFTQBYGBQHJQAAUSJPGKFWLHBXDCFPATEYBIVXSZWRUNJAMZZZDTLQDWOVHVNEBEHXHTUNPELCIYWDTUTRXPLWRUGISYMIWXTAJYIYHCJKWNISTDVKCNHCKRBGQLOMBOWSDXZORKEZRTDRUYINCSSQQRVGIMGEPZYSXXNLJAQNYAXYOUACDJFQNWVHDMSPKVWFJNGV");

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
    msg.setTimeStamp(0.43914134967586815);
    msg.setSource(36239U);
    msg.setSourceEntity(188U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(197U);
    msg.op = 188U;
    msg.file.assign("QTNOEZUGNJZPWERMAFEUPLXLACODNVYPSFFEFFZFBSJHWBBQJSVNWAHCWDZJNEDPQRTKHHYNCLYEIVFATWFXDKBHERLGJYGOKNULZOTQTBKBCYMZNTBGMBLKOATJTSUPLHLRAKQSEMMQABDCWRUGDAKMAMTGUWPMXYSKIZJJQIZTIHPDXNYPMUSVYCISHVMHQOIVLIRCUOWCNDIGZRXOKUDEJORFCVFWRIVVGXXOGSJYAWXEIUPBGXRKSCXYVQ");

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
    msg.setTimeStamp(0.23336248574660967);
    msg.setSource(61231U);
    msg.setSourceEntity(72U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(98U);
    msg.op = 30U;
    msg.file.assign("VSSJJAKWCXDLW");

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
    msg.setTimeStamp(0.05177867809649195);
    msg.setSource(21342U);
    msg.setSourceEntity(67U);
    msg.setDestination(30256U);
    msg.setDestinationEntity(28U);
    msg.op = 4U;
    msg.clock = 0.6158996583166911;
    msg.tz = -115;

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
    msg.setTimeStamp(0.19788944939191222);
    msg.setSource(20360U);
    msg.setSourceEntity(45U);
    msg.setDestination(54215U);
    msg.setDestinationEntity(105U);
    msg.op = 57U;
    msg.clock = 0.6875171776625028;
    msg.tz = 107;

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
    msg.setTimeStamp(0.5962546879086282);
    msg.setSource(64316U);
    msg.setSourceEntity(37U);
    msg.setDestination(41967U);
    msg.setDestinationEntity(202U);
    msg.op = 182U;
    msg.clock = 0.9674541585470774;
    msg.tz = -41;

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
    msg.setTimeStamp(0.20160721521483393);
    msg.setSource(64345U);
    msg.setSourceEntity(188U);
    msg.setDestination(10156U);
    msg.setDestinationEntity(152U);
    msg.conductivity = 0.15528716209010274;
    msg.temperature = 0.17828446710755053;
    msg.depth = 0.9754320712509357;

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
    msg.setTimeStamp(0.1824282101675221);
    msg.setSource(28078U);
    msg.setSourceEntity(237U);
    msg.setDestination(57566U);
    msg.setDestinationEntity(159U);
    msg.conductivity = 0.019662722599469773;
    msg.temperature = 0.2558831072350579;
    msg.depth = 0.6023160386305966;

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
    msg.setTimeStamp(0.5893252497047641);
    msg.setSource(62358U);
    msg.setSourceEntity(243U);
    msg.setDestination(24664U);
    msg.setDestinationEntity(45U);
    msg.conductivity = 0.45102012436537553;
    msg.temperature = 0.4206616871982224;
    msg.depth = 0.8191565991314964;

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
    msg.setTimeStamp(0.2177400945648631);
    msg.setSource(59035U);
    msg.setSourceEntity(70U);
    msg.setDestination(45136U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.5742144053537028;
    msg.roll = 2062U;
    msg.pitch = 56490U;
    msg.yaw = 59333U;
    msg.speed = 7609;

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
    msg.setTimeStamp(0.12712146988483985);
    msg.setSource(18744U);
    msg.setSourceEntity(100U);
    msg.setDestination(14237U);
    msg.setDestinationEntity(179U);
    msg.altitude = 0.7285845908678993;
    msg.roll = 30087U;
    msg.pitch = 5302U;
    msg.yaw = 38714U;
    msg.speed = -886;

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
    msg.setTimeStamp(0.2755090436143919);
    msg.setSource(4557U);
    msg.setSourceEntity(242U);
    msg.setDestination(36347U);
    msg.setDestinationEntity(63U);
    msg.altitude = 0.9758275813137677;
    msg.roll = 49902U;
    msg.pitch = 11446U;
    msg.yaw = 60535U;
    msg.speed = -18458;

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
    msg.setTimeStamp(0.18509298075845004);
    msg.setSource(34174U);
    msg.setSourceEntity(240U);
    msg.setDestination(29854U);
    msg.setDestinationEntity(149U);
    msg.altitude = 0.6048257405323644;
    msg.width = 0.7378376263654576;
    msg.length = 0.37785071559009564;
    msg.bearing = 0.8517209181608723;
    msg.pxl = 22973;
    msg.encoding = 158U;
    const signed char tmp_msg_0[] = {51, 109, -85, -63, 2, 95, -1, -78, -105, -93, -96, 75, -100, -12, 118, 41, -30, -51, -106, 114, -7, 79, 52, 73, -4, 82, 122, 50, 98, 61, 80, 102, 74, -23, 40, 86, 25, 14, -100, -59, -63, -29, 90, 55, -120, -74, 56, -87, -72, 24, -78, -87, -52, 106, 26, -74, 11, 64, 66, 111, 106, 114, 110, -103, -61, -78, 8, -24, 16, 71, -81, 54, -57, -55, -4, -123, 64, -60, -83, 116, 91, 93, -80, 104, -25, 76, 110, -75, 6, -62, 57, 59, -104, -88, 72, -18, -84, 3, -125, -106, -18, 4, 14, -125, -109, 20, 74, -13, -64, 5, -6, -48, -39, 45, 102, 95, -54, 116, 7, -45, -21, 34, 5, -85, 23, 34, -40, 102, -70, 96, -55, 35, 29, 31, 37, 96, 100, 122, -2, 32, 112, 69, 112, 33, -102, 41, -54, -16, -79, -56, 41, 0, -76, 38, 91, -22, -18, 114, -93, 23, -120, 105, -50, -89, -43, -112, -39, -16, 59, 124};
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
    msg.setTimeStamp(0.8633887022908076);
    msg.setSource(23724U);
    msg.setSourceEntity(26U);
    msg.setDestination(16004U);
    msg.setDestinationEntity(71U);
    msg.altitude = 0.31051458514337194;
    msg.width = 0.26888237532172277;
    msg.length = 0.7005397032695533;
    msg.bearing = 0.3508341453575621;
    msg.pxl = 19132;
    msg.encoding = 138U;
    const signed char tmp_msg_0[] = {-6, -52, 83, -43, 125, 96, 16, 9, 47, 64, 52, -39, -103, -87, 126, -29, 102, 67, 117, 80, 1, 68, 6, -114, -44, -77, 49, -49, -123, 86, 91, -21, 34, 13, -26, -23, 60, -3, -85, 100, -55, 74, 67, -125, 23, 4, -86, -114, -52, -32, -36, -3, 13, 116, 20, -6, -116, 14, -96, 47, -73, 97, 83, -93, 121, -73, -51, -20, -42, 15, -8, -75, -15, 40, 30, -9, -87, -43, -70, 11, -122, -95, 34, 22, -78, -75, 115, -103, 28, -50, 10, 11, -84, -53, -128, 67, -28, 69, -2, 117, 60, 17, 29, -46, -76, -44, 7, 125, 90, 85, 105, 119, -93, 7, 30, 40, -90, -83, 25, -116, 115, -94, 110, -51, 81, -42, -65, 23, 78, -38, -39, -75, 107, 8, 35, -79, -45, -89, -4, 110, -114, 20, 99, -124, 108, -13, -95, -116, 31, -82, -17, 109, -23, 24, -23, 18, 43, -128, -60, -5, -59, 91, -20, 98, -82, 97, 66, 108, 38, 80, 98, 96, -27, 37, -8, 19, 20, 70, -80, 99, 52, 73, -94, 54, -111, -80, 5, -43, 23, 46, -110, 38, 102, 108, 26, -100, 44, 33, 121, -9, 10, -95, -70, 103, 17, -108, 65, -57, -80, -35, -117, -23, 48, -66, -108, -4, 29, -124, -118, 43, 42, -128, -75, -51, -54, -81, 120, 47, -49, -88, 82, 26, 82, 26, 3, 114, 34, 34, 4, 86, -72, 83, -58, -48, -113, 76, 5, 95, -52, 30, -77};
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
    msg.setTimeStamp(0.13694632721595212);
    msg.setSource(58818U);
    msg.setSourceEntity(169U);
    msg.setDestination(52135U);
    msg.setDestinationEntity(185U);
    msg.altitude = 0.5145047410602859;
    msg.width = 0.29714107418750746;
    msg.length = 0.5569854998262541;
    msg.bearing = 0.5643636420790088;
    msg.pxl = 8341;
    msg.encoding = 42U;
    const signed char tmp_msg_0[] = {41, -14, 53, -73, -68, -125, -78, -101, -18, -89, 91, -45, 93, -75, 105, 71, 100, -120, -1, 9, 79, 123, 97, 116, -95, -81, -99, -79, 0, 91, 24, 122, -122, 8, -37, 85, 6, -7, 104, -18, -78, -73, -71, 106, -28, 6, 49, -111, -78, 39, 17, -103, -88, -104, -55, -89, 47, 64, -117, 110, 3, -37};
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
    msg.setTimeStamp(0.4775887993339899);
    msg.setSource(60568U);
    msg.setSourceEntity(164U);
    msg.setDestination(31279U);
    msg.setDestinationEntity(191U);
    msg.text.assign("UYSPRXCVXZLPPXMBDBUDTBXBWDDESAKRJQQWVEKUVTHWBBJWTFUWJSOFWVIIAIYTZOURWRGT");
    msg.type = 246U;

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
    msg.setTimeStamp(0.958776572439063);
    msg.setSource(16425U);
    msg.setSourceEntity(230U);
    msg.setDestination(30443U);
    msg.setDestinationEntity(99U);
    msg.text.assign("TJNSNTEWQUODNIQTVHBUYGWUEGUQWDIMQHSOXGGSQRABISCTFJFCDXLEZPQWRMEYUPOSHCBNNVWYAVQHXXPKLXJJV");
    msg.type = 59U;

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
    msg.setTimeStamp(0.3568799397360972);
    msg.setSource(14934U);
    msg.setSourceEntity(16U);
    msg.setDestination(28590U);
    msg.setDestinationEntity(116U);
    msg.text.assign("RIYVZNNXMBXHEDCXHILSSEJPPENCIOAHSWSCXELSTGLSYFHDASUZJNYWFJUDWBPIFSZATQPJAKSGTMTZRHIVZHMDEILZBGTRXGDIODQXZOQCNWYSRGPUHBRQYFBKVLXDJEYBDWQUJMFUHFAVQMGBKHJWCNUAKJXMVADVJOEPLTRZRNEOJKNQBQALOYWCFBNWIMYUWTRCAZWACKVRLOGFKEHUGLYTNVFILGITQCRXPKMZEGQMVXMT");
    msg.type = 244U;

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
    msg.setTimeStamp(0.17187932650715765);
    msg.setSource(59671U);
    msg.setSourceEntity(62U);
    msg.setDestination(64040U);
    msg.setDestinationEntity(5U);
    msg.parameter = 73U;
    msg.numsamples = 114U;
    msg.lat = 0.30510242947160937;
    msg.lon = 0.5051870878612003;

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
    msg.setTimeStamp(0.482467043837398);
    msg.setSource(34360U);
    msg.setSourceEntity(29U);
    msg.setDestination(23666U);
    msg.setDestinationEntity(226U);
    msg.parameter = 145U;
    msg.numsamples = 227U;
    msg.lat = 0.35011745595958677;
    msg.lon = 0.49257455918575377;

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
    msg.setTimeStamp(0.8234449770360368);
    msg.setSource(55343U);
    msg.setSourceEntity(146U);
    msg.setDestination(27064U);
    msg.setDestinationEntity(201U);
    msg.parameter = 215U;
    msg.numsamples = 202U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 16265U;
    tmp_msg_0.avg = 0.9274435302127092;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7696317946275224;
    msg.lon = 0.08930674096957791;

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
    msg.setTimeStamp(0.16347859500529616);
    msg.setSource(9947U);
    msg.setSourceEntity(141U);
    msg.setDestination(42618U);
    msg.setDestinationEntity(148U);
    msg.depth = 4391U;
    msg.avg = 0.08062927247349039;

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
    msg.setTimeStamp(0.6276947939577346);
    msg.setSource(23917U);
    msg.setSourceEntity(195U);
    msg.setDestination(38362U);
    msg.setDestinationEntity(105U);
    msg.depth = 60324U;
    msg.avg = 0.6185849050574861;

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
    msg.setTimeStamp(0.5418727683189174);
    msg.setSource(11589U);
    msg.setSourceEntity(230U);
    msg.setDestination(31915U);
    msg.setDestinationEntity(134U);
    msg.depth = 1667U;
    msg.avg = 0.7380642385936875;

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
    msg.setTimeStamp(0.5112478985567781);
    msg.setSource(19891U);
    msg.setSourceEntity(74U);
    msg.setDestination(6965U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.41830599244908273);
    msg.setSource(26025U);
    msg.setSourceEntity(28U);
    msg.setDestination(27577U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.23841089222164236);
    msg.setSource(16847U);
    msg.setSourceEntity(224U);
    msg.setDestination(48683U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.5184129621538489);
    msg.setSource(56251U);
    msg.setSourceEntity(83U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(199U);
    msg.sys_name.assign("CEFQZJHPIXXVKSUGEGIAOOMKRZFAGEGCCYHHXAKNKBHCQKCUIXDWHZVIOZMYDUYPTCSXVWFDWPNKQUIVEBQRFMUPCSBLNQITLBOYZLGBTQIVJANREMLIEACYNFGQOTJJGVNVZTVNDOZWFSPVPKDFZJHQUWSPASONPRSDTDSMHZUJFJUTXGRFBKRUKRTLFZMVDIQXDKLTMHAYJBMAJWLOPJMQWCBESUYYXCTXRHLSBWALNRLEWEYBDPOMHRNE");
    msg.sys_type = 17U;
    msg.owner = 26241U;
    msg.lat = 0.435685585517566;
    msg.lon = 0.4319162082652068;
    msg.height = 0.07061324113845147;
    msg.services.assign("QREYWSKPQOGUNYREDRJMMPTJAZXRMUUFVGLQSNUJWPZSPDOAPOTNXBTKEZVDXBTEHANFEFRKKAEBCMNXKJLKGZDXGHPOITYPGIFHOVKEMBIWJZJEUYDNWGAQLIJRBYIGYWPUIVLVQKFBHLOMLGHTFXSRILAZAJVVWBYEHCOCCBLLJWTZXQCRMVONDTFBBHMCCSIKHKPZIDGHYMCSJGQAQXAYNWQFS");

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
    msg.setTimeStamp(0.041048970410948016);
    msg.setSource(37014U);
    msg.setSourceEntity(117U);
    msg.setDestination(48155U);
    msg.setDestinationEntity(200U);
    msg.sys_name.assign("EMSCZHIICKLXGELWNKDFQPFSLTXTKWFZCBCAKKVHUHANLWOUHWZSMDQFARCZPIVNVNOORKPQYJGURSTAKTNFRQRNCNZSAOLGCPYDQPLIHSUKCBOJRWUYOEPRWVDGLYYZDORPIVXSSUYTLDPJHOVNH");
    msg.sys_type = 163U;
    msg.owner = 48353U;
    msg.lat = 0.8157156665218231;
    msg.lon = 0.2590286115442184;
    msg.height = 0.7599490691602088;
    msg.services.assign("WMRAVLQKTOGHXUFBKWVUJYVPWCNYFSCQKCWIZTJYWCIURMMWDHPYBYYVFXTPAXWEGZJVPGMUUOZSRVJQCEPPWBDIQXUSNCISHIYUHZNKXNSSZORREOOXYWNLFSEMMOZBGFHNKBLDHEJHLXHCJVGNUBZSRGTTCDIQNDDYBFMKORGABPAILAAKDVEQCQMRQCJLDHVUTLPXLQGVJKLTAZMAFLJZKZRWFPQOXFSEDAHORIFX");

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
    msg.setTimeStamp(0.5816722257478121);
    msg.setSource(22421U);
    msg.setSourceEntity(154U);
    msg.setDestination(31334U);
    msg.setDestinationEntity(71U);
    msg.sys_name.assign("IEETLDTYVSCXYKWXEBIDMEHPUAGPZCCKDPOHLCXJKEVXUZRTSMZJBUTLNLSRJITBHFQBGUQQAIZYBFEKFUFFCNYNNNHTQPJJCKWNSZELTVGAKVSBAMVAOEGBPTM");
    msg.sys_type = 238U;
    msg.owner = 58141U;
    msg.lat = 0.7031972282284548;
    msg.lon = 0.9327472410600277;
    msg.height = 0.506109034616058;
    msg.services.assign("LVEOFTKPGVZMKQDZYVFRZMJZROZCMWULYNJASGSCSXRJMCS");

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
    msg.setTimeStamp(0.7674291296951053);
    msg.setSource(37025U);
    msg.setSourceEntity(120U);
    msg.setDestination(56590U);
    msg.setDestinationEntity(37U);
    msg.service.assign("ZGQKFRSYMXPBGLRLEECNAQCOMLDRCYZDWJRTNJNNIFJOXZXSSEPYOPLSPSNLHHQFHGFDSBMIAAFUTADCMPIBAGRGQSNWDRIZCCWXMTEWJGRLLIXFUDVCWUWBQKLEHMKKWVUUPHTPJUSGQCTAEYDDXISKOAJOABAWBONBTFTXACGUDEGZTXTWPUMRYIIKJJFQHYRZOFNFOH");
    msg.service_type = 178U;

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
    msg.setTimeStamp(0.5336125283499008);
    msg.setSource(27092U);
    msg.setSourceEntity(205U);
    msg.setDestination(54813U);
    msg.setDestinationEntity(78U);
    msg.service.assign("YOXJOQVZHBVWUFACPJFWBDUKEUXFDIOWSKPHQYSDHHOWCIMRTMLJNCOVCPDYSNARVYYWTHEAYZWZNWEZDZAMYUVXBBJDVHZERAHTORZONGNHQGGJMKVCZDRIEJNECXFNVLUQKPNHOZAFRKTRCLGEALEMLJILBIPRFUFAAMTCFGMSUYFBPBJLXUJGWB");
    msg.service_type = 164U;

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
    msg.setTimeStamp(0.8482360643278304);
    msg.setSource(58862U);
    msg.setSourceEntity(60U);
    msg.setDestination(28551U);
    msg.setDestinationEntity(26U);
    msg.service.assign("ZIRYPYFOMNDHFNDIFRNIXAZTASUGGZPLYTWNPOWUGLAVOPRDKMHRSYSWVSRUBIESPWKERYQQBCIXLWHBYCLEKKBWITSBBJSTXXOQDKAZOCLKONVPJENBRXJCZVAWIQVSRTUUICGIUKCUMPDGNNFQOJJZWAPHUGJQCHXZZEGAYWZOQVMGTAYTMMQDEXAFPYCXIXLJMHUBFKFMTJJGECBFXRHFVNVSLMOACMPFKKGQDQHVTE");
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
    msg.setTimeStamp(0.1256429268074013);
    msg.setSource(59109U);
    msg.setSourceEntity(167U);
    msg.setDestination(23001U);
    msg.setDestinationEntity(154U);
    msg.value = 0.8694307767562769;

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
    msg.setTimeStamp(0.9416912289087248);
    msg.setSource(27351U);
    msg.setSourceEntity(44U);
    msg.setDestination(31828U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9274669796914774;

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
    msg.setTimeStamp(0.9931947620455509);
    msg.setSource(62704U);
    msg.setSourceEntity(28U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(77U);
    msg.value = 0.5273769359126012;

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
    msg.setTimeStamp(0.24845687764752822);
    msg.setSource(57156U);
    msg.setSourceEntity(176U);
    msg.setDestination(38137U);
    msg.setDestinationEntity(253U);
    msg.value = 2.8617983515943912e-05;

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
    msg.setTimeStamp(0.558788119470019);
    msg.setSource(62218U);
    msg.setSourceEntity(17U);
    msg.setDestination(31146U);
    msg.setDestinationEntity(23U);
    msg.value = 0.13768181456520667;

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
    msg.setTimeStamp(0.6252242503009605);
    msg.setSource(52495U);
    msg.setSourceEntity(242U);
    msg.setDestination(3747U);
    msg.setDestinationEntity(211U);
    msg.value = 0.9497887321567534;

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
    msg.setTimeStamp(0.7787587099132657);
    msg.setSource(6312U);
    msg.setSourceEntity(23U);
    msg.setDestination(3287U);
    msg.setDestinationEntity(26U);
    msg.value = 0.1171867304343599;

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
    msg.setTimeStamp(0.19992447911893674);
    msg.setSource(62325U);
    msg.setSourceEntity(64U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(100U);
    msg.value = 0.623170069407912;

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
    msg.setTimeStamp(0.28203942351774824);
    msg.setSource(33029U);
    msg.setSourceEntity(141U);
    msg.setDestination(35631U);
    msg.setDestinationEntity(113U);
    msg.value = 0.4630959904192402;

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
    msg.setTimeStamp(0.5901109189188484);
    msg.setSource(8030U);
    msg.setSourceEntity(195U);
    msg.setDestination(38883U);
    msg.setDestinationEntity(194U);
    msg.number.assign("VQFIPKSWHCDMNLIJPYASOLJAAULQXJZBNSOCUMXECFUBOQRVYOEKSKUSP");
    msg.timeout = 51205U;
    msg.contents.assign("MEGEBOMAVMROUXWOFUQRGJOCDUQXPQTCRCFIETHVGENDKLFCIMTZGNSLRJPGPTHYDQEEWBLFVCLPDIPWQINJUYXBPZXZJRVWNGRXOUHGGXSSKEFFHMVSUTSHKHJIDMVSFIXYXOXUABSWWQEFLLNNNNDJYKDACVOZTGGTBRCWPJVYQAHHKQBYOQSEZLUAPTXMJURMKDYMWZCIQHAKBMAOIAZPOAERIYNHWVSCLJBFRBYNJDALBUZCKV");

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
    msg.setTimeStamp(0.5368953092717811);
    msg.setSource(37656U);
    msg.setSourceEntity(114U);
    msg.setDestination(42132U);
    msg.setDestinationEntity(243U);
    msg.number.assign("EMTHXGHWMNPUMRGYXHWMINGGDOQQTHQLQWNCGWNBYKYRJXAAFAHTVBXBWZEKLSTVVEOGLFCYIGLVQNJHITMECACUJEDLIOAPKOGFWLQJEUKLMKPFSTLENGNIACFYMDDOVTZQDKSLAPOYKFKUZVZSJCOJKNXADHRUPLOZN");
    msg.timeout = 35788U;
    msg.contents.assign("EOPTOGVVRIESCNHQHFAKJLLKDKUUUDCYKFMFPNJVHPP");

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
    msg.setTimeStamp(0.8863492650490451);
    msg.setSource(35484U);
    msg.setSourceEntity(116U);
    msg.setDestination(14114U);
    msg.setDestinationEntity(115U);
    msg.number.assign("VVVGMTPRXJNJHODGDJISJRZRSOUOEVD");
    msg.timeout = 39664U;
    msg.contents.assign("ICUJCZJASOXUVYCCTADMKFKTEAWSNUZKKNTLVDQXPKGTBWGSWWZHBDEAIYSGURTGEVOJFOOTHMGTIQQDUHUYOJBAZLXKLLBMTPSGWXLZXBAJDSLCENNLYEQDRKEBHBIAWUPIAEPXMJBCNCHVOPXZMUGWGDMPIOAMHEFFQTKCRKGBZYFISKPHQWZFFFHRHQZPYOLJNRDSHAIZJMDXJRFVUQEFMVXVUERSRRNOGYSMVNC");

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
    msg.setTimeStamp(0.7273318652926994);
    msg.setSource(258U);
    msg.setSourceEntity(154U);
    msg.setDestination(62955U);
    msg.setDestinationEntity(68U);
    msg.seq = 1062737300U;
    msg.destination.assign("YLSHJDCURMEJTLKDLSGSIYTPKPPZANORIMXBMDIPIFWQTYSIDFFFQWUTQQJVFYBGNJCRWMHAUBXUEVCETLXKQEBFEDUMJFRNQWKZHHLAIUNGBVTJRLAGBZGFYCSVNOYADENVZSXOKRWZHYPTDUAGLW");
    msg.timeout = 32418U;
    const signed char tmp_msg_0[] = {75, -91, 63, 74, 95, -118, -37, -31, -13, -90, -9, 31, -65, -126, -22, 82, -108, 98, 113, -10, 113, -105, 19, -79, -24, -16, 23, 19, 92, 44, -65, -58, 106, -39, -22, -36, -20, -24, 62, 89, -7, -39, 23, 114, -123, 47, -9, 63, 18, 58, 102, 10, 16, -96, -73, -34, -24, 68, -122, -58, -41, -40, 109, 124, 52, -37, 114, 111, 100, -13, -4, 83, -107, -91, 9, 62, 57, 18, -51, 102, 28, 0, -18, -4, -125, 123, -92, 121, -99, 0, -18, 55, -58, -53, 65, 11, 112, 1, 54, -60, 124, -123, -90, 68, -98, 14, 77, -60, 95, -17, -49, -128, 113, -72, 120, 51, 88, 5, -78, 66, 46, -97, 103, -18, -114, 61, 43, -41, 100, -21, 23, -77, -90, 117, -9, 0, -51, -49, 74, 35, 112, -34, -73, 112, 76, 40, -77, -28, -13, -102, -74, 88, 91, 43, -125, 25, 9, -45, 19, 21, -6, 126, 41, 14, -39, 27, -9, -79, -105, 112, -77, -119, -99, -68, 20, 102, 103, -49, -51, -95, 93, 88, 69, 44, -112, -27, -115, 81, -106, -23, -90, -51, 65, 110, -48, -104, 19, -1, -98, -107, 87, -64, 77, 29, -55, -31, 95, 98, -104, -14, 6, -4};
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
    msg.setTimeStamp(0.08604642514082428);
    msg.setSource(44432U);
    msg.setSourceEntity(30U);
    msg.setDestination(3652U);
    msg.setDestinationEntity(127U);
    msg.seq = 2714977197U;
    msg.destination.assign("QXKPFWKUXOKHLJZBTFXVGAADHFSCHVGSOCOKXMYZMOEKNHOXECDQZHDQIIJZNEXAKXTTGMDGQOUCFBBRRFOTAIRXDBFAWNBOIJWNREXUATQCWLYYHWAPPKEEELFOHGDHFNWKBMPSQAMYSSGJPNMJUCDGVUSFPQPCRBNTRIAZRNZLTJVULZ");
    msg.timeout = 1287U;
    const signed char tmp_msg_0[] = {62, 126, -99, 59, 82, -42, -88, 54, 7, 16, -71, 8, -91, -10, 97, -38, 26, -80, -23, -121, 90, -112, -84, 123, -97, -91, 64, 6, 3, 101, 6, -119, 38, 18, -3, -103, -46, -31, 38, 18, -39, 31, 84, 21, 93, -117, 77, 80, 107, -59, 34, -35, -9, 43, 35, 90, 35, 118, 125, -120, -122, 63, -41, -53, -71, 47, -69, -7, 96, 91, 38, 90, -62, 126, -56, 99, -29, 81, 61, 5, 38, 73, -13, 60, 54, 69, 37, 21, 36, -92, 88, 29, -9, 90, 75, 8, 99, 2, -32, -49, 117, 104, 47, -63, 45, -29, 37, 123, -89, 72, 59, 74, 104, -118, -116, -14, 33, -6, -59, 19, -70, -18, -64, -99, -99, -15, 49, 95, 34, -95, 6, 53, 1, 58, 109, -122, 57, 61, -53, 87, 57, -119, 121, -13, -48, -49, -11, -79, 111, 120, -94, -71, 54, 10, -51, 125, 86, 15, 60, 88, 56, -5, 8, 117, -64, -37, -77, 25, -44, 44, 104, 98, 79, -118, 77, 100, 99, 124, 31, -118};
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
    msg.setTimeStamp(0.780595476228278);
    msg.setSource(54777U);
    msg.setSourceEntity(238U);
    msg.setDestination(60242U);
    msg.setDestinationEntity(254U);
    msg.seq = 3733409253U;
    msg.destination.assign("QZNXNIKYMQRWFXSRINJPGSMJVCASTNNBKLRBLCCBKOZAMXLKCDSZWTFXWBFXIPQTIIJJRYKCFHTJSWOMRWODJQCFJCEAZNUPZJWVD");
    msg.timeout = 5430U;
    const signed char tmp_msg_0[] = {56, 33, -38, 76, 29, -47, -80, -38, -33, 106, 76, -83, 35, -115, 30, -77, -40, -108, 9, -101, -126, 115, -5, -43, 52, -110, -42, -2, 90, 68, 77, -65, 91, 40, -103, -37, 89, -38, -95, 93, 8, 96, 93, 44, -9, 4, 118, -120, -39, -128, -94, 113, 50, -98, 17, 115, -115, 84, -7, 55, -108, 33, 54, 71, 65, -50, -124, -12, 118, -84, -89, -128, -4, 74, -88, 38, -50, -114, 17, 52, -123, 105, -126, -115, -81, 28, 106, -108, 66, -81, -82, -19, 61, -20, 83, 60, -28, -89, -123, -127, 60, -11, 101, -96, -42, 69, 106, -69, 25, -37, -11, -99, -64, -24, -88, -29, -14, 45, -29, -39, -83, 38, 42, -95, 14, 65, -112, 112, 38, 54, -59, 95, -13, -83, 99, 27, 0, 101, 18, 23, -126, -83, -2, 17, 28, -43, 60, -16, -100, 76, 26, 71, 26, 63, -3, -104, 6, -61};
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
    msg.setTimeStamp(0.5454218962358548);
    msg.setSource(47640U);
    msg.setSourceEntity(184U);
    msg.setDestination(38141U);
    msg.setDestinationEntity(96U);
    msg.source.assign("TTGJSIETCNXLYSUJKEHVUOCNPAOEFGXDPYXRVLVMWCDDJOOZADGMPBAKQRRKAXAOCALMNZUXXTCGWKCNICMUFREGFJLNHRKWSRFDZLZQYQHBSUETSLTFPVUBISKBZHMGUFZSJNNMYELRWHWAPTQEIHIXJBSZTPKEXQUUSHNTXEIRVDCYJDWIJQHCOYVGVLODGZYUWMWFPMTZWSVQDFBVNQA");
    const signed char tmp_msg_0[] = {46, -29, -26, 86, -67, 117, -39, 79, -17, 126, 7, -73, 47, -25, 51, 49, 6};
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
    msg.setTimeStamp(0.09549645329732204);
    msg.setSource(31203U);
    msg.setSourceEntity(42U);
    msg.setDestination(31112U);
    msg.setDestinationEntity(226U);
    msg.source.assign("TTGDTEYFOAGOBOFXKQRHGMFFPROYTQHRKJXKENIXBIYOIKPPCNRCFXUSBQYREQVBEHGJTCZNOADMWLPMNEUZEPLWVSOEKZHCIZWSGNPXLWQJVKDHIAVUMTKASADRUUV");
    const signed char tmp_msg_0[] = {-25, 22, 36, 25, -108, -115, 7, 114, -81, -31, 19, -85, -33, 0, -39, -121, -8, 12, 78, 83, 71};
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
    msg.setTimeStamp(0.5476604064788972);
    msg.setSource(3844U);
    msg.setSourceEntity(81U);
    msg.setDestination(54719U);
    msg.setDestinationEntity(124U);
    msg.source.assign("DPCFRIPKOCEPMZSETVBCWTSGLNZPIXGIDGXYNJFAQJCJERRGJDABVKKBEBUHZEERXHHOBSMPFIDJSQTTSFLTBOMLTRNYCUZTRNFIKTVKEMZXLWYBWULJPMKTEWZKYYU");
    const signed char tmp_msg_0[] = {105, 120, 54, 54, -52, 36, -77, 46, -25, 126, 23, 79, 9, -51, -2, 64, -121, -28, 91, -115, 90, 94, 38, -20, 51, -97, 94, 71, 81, 84, 0, 126, 114, 9, 83, -65, 18, -3, 108, 7, 12, -105, -19, -11, -32, 14, -119, 94, -55, -127, 91, 34, -37, -69, 15, -58, -62, 17, -37, -8, -69, 100, -85, 85, 30, 40, 84, 54, 46, -69, 5, 77, -40, 43, 7, -121, 63, -79, -91, -103, 37, 31, 125, 94, -62, -106, 79, -67, -5, -112, -68, 8, 42, 62, 73, 67, 24, -42, -36, 21, -128, -56, 70, -64, -61, -91, -4, 21, -77, -30, 29, 53, -82, -108, -105, -110, 55, -120, 24, 123, -122, -78, -113, -69, -52, -79, -125, -76, -64, 32, -123, 50, 52, 71, -12, 118, 18, 81, 14, 111, 115, -39, -81, 47, -13, 80, -26, 78, 27, 79, -64, -11, -36, -42, -12, 56, 16, 29, 24, -55, 32, 17, 64, -12, -75, 56, 34, 44, 5, 121, 24, 24, 6, -107, -58, 40, -4, 99, 36, 81, 94, 49, 16, -91, -36, 78, 50, -86, 86, 12, -56, -28, -120, 12, 113, -64, -80, -85, 66, 63, 48, 46, -34, -65, 93, 2, -83, -96, 14, -97, 23, -118, 31, -79, -122, -62};
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
    msg.setTimeStamp(0.5554079852302325);
    msg.setSource(50171U);
    msg.setSourceEntity(30U);
    msg.setDestination(5568U);
    msg.setDestinationEntity(85U);
    msg.seq = 3288130386U;
    msg.state = 199U;
    msg.error.assign("EUPPNXRHSQQXJKKNYTXMBVTTNBKOORRLXCFZNWUMWRIJHLWBRJIVOMNXMPVHGEQGDGFSOPWEZKEMATBFKDKMVJKRCGCNFOVKJNUIRSRSLCZLIGEQHAPAFCLQVFLPGSMYZYXITEQXBOTOZIPSEYQZNZHUESTCBMVSUGWLTIRZHWDQLABVANDFHUJ");

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
    msg.setTimeStamp(0.5557311026910627);
    msg.setSource(20561U);
    msg.setSourceEntity(242U);
    msg.setDestination(26365U);
    msg.setDestinationEntity(157U);
    msg.seq = 427204258U;
    msg.state = 201U;
    msg.error.assign("NWGIDTPUWIUHGOPTSOPYNALVRBKROESQWYFPQCFHZCAWMCMKZRFOLMNSFWNAJRZFBZOHYNVDISZZJGGDRHASTKXTDGIVCRNBSCHSZHBEVPGFUIONSCLZBSDLNKHFQHDKAJUPBAPFBUDIXWLDBYTQWOBFIGHOSXXYPEMJPEKREWHCRATTRVUCLKYBTOJOIETUCLZEXXRTANWUMGVJJAUQEMGVJYLYLXYLXQQEFYVQVDAZQMKWIJXKNJXQ");

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
    msg.setTimeStamp(0.6151001552512085);
    msg.setSource(16019U);
    msg.setSourceEntity(78U);
    msg.setDestination(9526U);
    msg.setDestinationEntity(211U);
    msg.seq = 3701073549U;
    msg.state = 109U;
    msg.error.assign("VDFEVDIWRYEEDEWPGKVZMSWCJOFWHVOQLBEXAMZSPYGHZMQHFZUCQNGOUWUOHDORQVUTFWZDITBYPJMYZVIRAVTJTVJYIPGKZKTX");

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
    msg.setTimeStamp(0.533535379318743);
    msg.setSource(3966U);
    msg.setSourceEntity(250U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(199U);
    msg.origin.assign("JAPNVMJFGYQAKELCVMVUMHVFCRHREDMMWUIEJDDHRFUFLEBZTDUVOVXDDZZJGBIKYLOPFHDRGYLLXWKXACBDPKICBACSIQVDWRHMRKSQETZIJFHSAXTQCLZVGNNJIUFGBXNHTWYYOVAWKAYTZOPBCWKTFQ");
    msg.text.assign("PYMBGJJYZXFRIFCVHINUMZECBZWQVKZDVOHKJHNYUDPGTZWTELSFOKKBMCSAZTNAWDDLZXAPTAHTYQFDTHAQAOIRMGEGSPGEIFYLJYJNCVHKSXVWMCSSQMGUBFYGUHRIQUOYOWWDSBHBVHTXNBWLF");

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
    msg.setTimeStamp(0.14932723284272809);
    msg.setSource(9178U);
    msg.setSourceEntity(247U);
    msg.setDestination(46436U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("ZNEFRJSTYRRXAMHYSRPLIQKLRYBNOWNLKHIZYPSMKNWYJPVANDPXAVODGMMMVZRODGCDHPJUUZWPTQXXEUYMULCEICCURVITPHSKVKATZCYJAUUQYZBLGJPDQMIJNFQBZTONFHIBDSECBTQOSWDFHVBUOQLDAAWESFDFIHKVWXGUGEFVNXOTKKNHQYTYWJCSTGMJGKELWHZBBFPGMTGFRPAIAEIVJCLXNOJBGCAVUQBLZCSZXEWFORLQORDSH");
    msg.text.assign("SZNINMGUCFJVDVVWXVXMZOFIZPCIYLUFLTUHPBEDDZHUYRMMTMHCTFQOVZZXUFDSSWWONHWATAJLQJKDFBBXOENYYRIGJYQCCGRFAAHTLMIJFXOGTYESXHGRSXVAOELLCWQFDVADNQLPDKXTOBEBEWROIUAKQHPBPYCMHEGNRKGIIYWJNNZSYAHKLUPBCRAAWVKZKZEIRFX");

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
    msg.setTimeStamp(0.01713034638432054);
    msg.setSource(63834U);
    msg.setSourceEntity(29U);
    msg.setDestination(43896U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("IJEYZSCJZTKMHLZIWNVUDMNXJWUMONBQWNBNQXBICXJAXQRBLBTKPPBGOKHTJIAKJPETVCPAWECGIYOIVKQULVJGQHBSMUHLYUJSYSFKIHADPGOAKVJWWQGEDROMUHGWLTHRMGCFWDXXRBFJNQXKRYZTEZCVYSSNFQDUTMDVMKTLHPDFEPLNQGSSMMDLCODCAPUCRHZLGEAXUAIZFOERVLIITFQEAXZHTWFZCYNRPROVGYYSSVU");
    msg.text.assign("AYAPMGWETQBKEFOZPMCEHXFYCJUWTXQLITOYRIIVPSJGYLAHZQODSRHPBJZCIZJIQUYNUVQFSASKWQLKILXTKEFHVEGTHCWJRTTKWXJYMRORXWMPFCFVH");

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
    msg.setTimeStamp(0.14564604958118088);
    msg.setSource(34671U);
    msg.setSourceEntity(91U);
    msg.setDestination(62733U);
    msg.setDestinationEntity(225U);
    msg.origin.assign("ZQWJIUGIWCBTTWIYSTPFJCXIFDUXGJCQKNFKFPVLOUOHXQPADMZWNORUMCHEXYTPBLVZXGYRYCHEPOYDKVATSXWY");
    msg.htime = 0.43484481773423855;
    msg.lat = 0.3642280140543791;
    msg.lon = 0.026627020851973326;
    const signed char tmp_msg_0[] = {-74, -63, 15, 88, 39, -34, -83, -1, 117, 36, -118, -59, -111, -118, -68, 52, 110, -107, 21, -7, 69, -79, -9, 21, 110, 31, -38, -54, 65, 69, 14, -35, -79, -111, -86, -21, -11, 14, -102, -108, -13, 69, -46, -49, -74, -113, -84, -16, -37, -25, -74, 11, -35, -20, -92, -96, -96, 46, 114, -26, -35, 122, -22, 36, -111, -106, -9, -105, 122, 102, -33, -48, -86, 118, 64, 60, 18, 124, 17, 116, 82, 101, 33, -48, 75, -67, 82, 108, 94, -104, 106, 9, -93, 40, -27, -22, -78, -98, -111, -93, 3, 91, 103, 74, 57, -37, 124, 5, -18, -30, 14, -86, 23, 95, 38, 54, -46, -32, 54, 55, -25, -43, 50, -38};
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
    msg.setTimeStamp(0.7992164212536892);
    msg.setSource(31901U);
    msg.setSourceEntity(249U);
    msg.setDestination(52530U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("YTCYVMRMWUOFIUICD");
    msg.htime = 0.17428250297787284;
    msg.lat = 0.3118899055376033;
    msg.lon = 0.4783545945341149;
    const signed char tmp_msg_0[] = {107, 2, 45, 53, 109, -58, 75, -47, 38, 90, 43, -102, -76, -32, -113, -67, 33, -109, -111, 105, -113, -111, 76, -113, -107, 48, -103, -41, -116};
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
    msg.setTimeStamp(0.6232152655362536);
    msg.setSource(445U);
    msg.setSourceEntity(224U);
    msg.setDestination(18746U);
    msg.setDestinationEntity(61U);
    msg.origin.assign("MGVUKRPEHWIZRTOCKLSZQLIDRLKBIHDDWFAFPIWIMRRGZIUGTVNAQRLOHYEJRMONNBXNIQVZBCQZNOKGVIAPAFKDUTSSNXSUWPNFQYLCGOZCGMJDFMLJXBXXBEWZXKNEMVGEIPVACPTWFBDBSTYGTUTAWARQQKDERXSNMJHOCZJHSZNUAQLQUELHPPHVKHMCVOYQFSUJSEDUUMOFXMJOKWAWLFGYGFSYOBBTJELWHEYHKXBTVZDVTDYIJ");
    msg.htime = 0.20074363233281156;
    msg.lat = 0.6270792928168103;
    msg.lon = 0.06038028504009818;
    const signed char tmp_msg_0[] = {-89, 118, -53, -83, 58, 112, -19, 109, 69, -5, -49, 20, -6, 111, -30, 59, -11, -63, -123, -54, -7, -65, -41, -67, -31, 39, 60, -85, 107, 14, 83, -86, -104, -128, 0, 116, -128, -105, 68, 30, 45, -71, 19, 54, -68, -44, -78, 42, 21, 16, 122, -83, -94, 22, 43, 87, 74, -90, -16, 120, 95, 118, -85, -126, -118, -69, -71, 43, -11, 95, -41, -123, -22, 32, -20, 126, -67, 62, -122, 98, -116, 104};
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
    msg.setTimeStamp(0.8016048665120064);
    msg.setSource(9960U);
    msg.setSourceEntity(136U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(53U);
    msg.req_id = 16746U;
    msg.ttl = 38338U;
    msg.destination.assign("RKAHNKDZZIBVWEOMLHIHSTMESXWHWNDZHJEJLASQTAGBTDJZSIQPKRNEOAEAMTKYBRTKOXCQLFZVHXGFDNLZRCDIJZALGFJMMDBUOYQOYNBGUGSEWDIDCIPUSOUKQYEQU");
    const signed char tmp_msg_0[] = {-114, 84, -37, 39, -52, -70, 58, -5, 88, -26, -53, -114, -13, 101, 60, 69, -46, 51, -59, 103, -3, -41, -106, 81, 34, 68, -3, -4, -119, 43, 71, 102, -16, -57, 50, -24, 109, 20, -96, -75, -35, 73, 51, 42, -17, 90, -50, 55, 19, 87, -101, -116, -76, 9, 95, 19, 12, -32, 105, 39, -53, 46, 47, 66, -15, 21, -47, -115, -109, 94, 28, 15, -126, -107, 74, -5, -23, 73, -52, -72, 67, 40, -69, -11, 41, 57, -29, 18, -70, 76, -22, 71, -34, 67, 46, 69, -127, 17, 95, -47, 10, -92, -76, -85, -88, -75, -46, 66, -14, 96, -42, 86, -90, -50, -108, 47, 74, -11, -16, 12, -66, 49, 54, -32, 101};
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
    msg.setTimeStamp(0.41636190546072593);
    msg.setSource(60472U);
    msg.setSourceEntity(1U);
    msg.setDestination(63465U);
    msg.setDestinationEntity(22U);
    msg.req_id = 55865U;
    msg.ttl = 25478U;
    msg.destination.assign("KHHWPIPQXBXEJRMFIVNFBDHWKSBWTTAGSPMDUMEIOWRFBRUUIYHDVGYTDKLUVXALZELLSQCXFWTMLIMCWAVWADJYYIOGQZRMWOFIKNHZIDVBGJYHZPPCLUSXKKNNVMEDCJWOGLBOSVTQGSJDMNAXSHUQZSGOXOEQECGFZFIXZAPJSBEKVPPJUNQWTLFTBZFBIYTRNZNOXTPJRPAJRKOVKREAYXHEMFNRLQBSNYH");
    const signed char tmp_msg_0[] = {-52, -83, 45, 0, -105, -75, 42, -92, -1, 96, 29, 119, 121, 93, 51, 117, 7, 116, 103, 98, -104, -12, -90, -69, 23, -77, 45, -80, 57, -101, -4, 90, -23, -32, 126, -42, -92, -17, 125, -110, 57, 81, -30, 84, 18, 83, 32, 80, -28, 88, -124, -98, 29, 46, -13, 41, -117, -92, -46, 48, -22, 78, 44, -23, 77, -106, 94, -75, -35, -61, 39, 36, -123, -3, -111, -89, -34, -90, -6, -86, 59, 76, -124, 117, 120, 83, -30, 99, 26, 55, 43, -42, -111, 22, 2, 37, 65, -16, 46, -20, 99, 8, -71, 2, -62, 84, 75, 22, -86, -87, 49, 50, -87, -105, -19, 29, -125, 18, -58, 111, 105, -119, 112, -11, 117, 126, -15, -86, -128, -27, -127, -125, 32, -124, 81, -27, -84, 35, 10, -67, 96, -50, -59, 35, -63};
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
    msg.setTimeStamp(0.9788238099734571);
    msg.setSource(61759U);
    msg.setSourceEntity(47U);
    msg.setDestination(14418U);
    msg.setDestinationEntity(234U);
    msg.req_id = 56267U;
    msg.ttl = 58876U;
    msg.destination.assign("XLBTWKERUA");
    const signed char tmp_msg_0[] = {-45, -50, -59, 107, 52, -27, 111, 115, -86, -37, -113, -108, -38, 113, -77, -31, 88, 82, -13, 43, 69, -59, -75, 74, -76, 54, -35, -108, 120, 121, -66, 83, 123, 64, 95, -18, 79, 9, -38, -74, 82, 65, 77, -109, -19, -79, -117, 42, -123, 57, 36, 22, -101, 88, 119, -3, -53, -88, 65, 116, -91, -98, 52, 80, 33, 110, -113, 108, -70, -34, 111, -86, 111, -111, 41, 43, -6, 76, -120, 86, 93, -40, 116, 63, -28, -21, 109, -122, 23, -36, -107, -118, 85, 31, 96, -52, -15, 56, -3, 91, -88, -81, 16, -112, 95, -16, -9, -49, -122, -127, 58, -108, -42, 30, 70, 84, 90, -84, 2, -51, -46, 107, 119, 82, 47, -13, -84, 84, 52, -34, -117, 61, 26, -52, 63, -9, 125, 83, -126, 90, 107, -27, 53, -18, 96, 47, 50, -102, -30, 33, -34, -84, -95, -17};
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
    msg.setTimeStamp(0.3658719815848611);
    msg.setSource(55500U);
    msg.setSourceEntity(35U);
    msg.setDestination(63129U);
    msg.setDestinationEntity(20U);
    msg.req_id = 19138U;
    msg.status = 43U;
    msg.text.assign("PCCRLVAIUZTEZNSVJKWICQKFAQNRFSLPNWDDYIWCMFGBVFSSXSLBHBXZUXECTYQPJKSQOGWRXBWEDLNPKOVQHGMOEUFZGJPEYKETZPOCXDBKSHLWUKOQOTGAFRLFNACYGXTDUKETRUYDCWVGUMFIHJRANKZIDMROXHRZVUOHJANIPFBEJLWIQYMJQDADGCHOSLXXWTMSBZANYBDHNKJEPVERBIM");

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
    msg.setTimeStamp(0.23456401261513216);
    msg.setSource(60585U);
    msg.setSourceEntity(87U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(243U);
    msg.req_id = 22362U;
    msg.status = 7U;
    msg.text.assign("INQJTTYJLGIRDLENUJDQWKQDAMIWXVSYNRLOLMZHIGEUALCLQPMATYITVXYKCWHPATVOKNCPQNFFUIXSBEDCYSOIRFBSZWVJEGCXVUPDQTPCDRYWMDHGLCMAQDEDLSZRSYHBKCPUMMUYRRHNJOKPBOBNHOBCSAPVRIVJXTKFMIRNEFQZJNRGUZYWJDOVEHZPXSXTI");

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
    msg.setTimeStamp(0.8420655580272958);
    msg.setSource(47564U);
    msg.setSourceEntity(94U);
    msg.setDestination(9713U);
    msg.setDestinationEntity(98U);
    msg.req_id = 62945U;
    msg.status = 140U;
    msg.text.assign("WFBWPWCFLCAVOELOGFVFSQQZGXIVLUOJKYIRYLVUDKPDYIQAKIEYHJJINNMZJAJBMDJAKKYSCLSBIPHZRHZQPTYUEAOPUBPFYXPWMFSRNJSJWBJEBFMYHNXDDIO");

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
    msg.setTimeStamp(0.4620901275158964);
    msg.setSource(50163U);
    msg.setSourceEntity(168U);
    msg.setDestination(25683U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("GSFHHPZQKROHBJYYKZLOBXKBVEARIPGWVRRFLCBCDKILYPUWMWAHTMYETGQGHWGWNKDMYBRSTGFSAZUMAXTZDHMFUDCILCAQYSPUZPNLLFOSKJSEWONJNYTRGUJIEEUTOVVCMMCFQZLOMXOSFVSUGVEBLNVCBBCJQIAPRIHKOQJCRLQBKTTGYHXEWNVSDVPKMUJFSDRWXVMTONZGHXHBIQAFYPUXDOCFDQZNRANJQIXJDULZZWE");
    msg.links = 3020019416U;

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
    msg.setTimeStamp(0.6045524300041484);
    msg.setSource(26587U);
    msg.setSourceEntity(168U);
    msg.setDestination(38869U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("AIYLFIVBCWULONASXCFNHRZSMLMYOZTNTMDCFYGQGBZTQVGMQARAUMVPAEXJHBBOPWIGYWXHYLCJSBAXCEEGJQWNTVZCBPLAWYOIFMCBQIGNSQXRCPCXEO");
    msg.links = 1463662514U;

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
    msg.setTimeStamp(0.9744052517476414);
    msg.setSource(42712U);
    msg.setSourceEntity(210U);
    msg.setDestination(23414U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("HANDOUHGNOITLCRFRFBNOZHRVGHMPUSAEKRYPWMEGKGCDZICBSIHJIPUOLKLELZAVNUFVSNCCNDJGJVKBTNQVEIPKOIUGDIIRHSSZMYHZHXWEDFLQYYFTRZUDBOTVMLMXOW");
    msg.links = 3139494524U;

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
    msg.setTimeStamp(0.9029917039224322);
    msg.setSource(62210U);
    msg.setSourceEntity(94U);
    msg.setDestination(61919U);
    msg.setDestinationEntity(164U);
    msg.groupname.assign("ZTWDMSNPZASUOXTDKNGVBMQDLXIPMFCUFZWEIKWVOXVIXBPFRNVCVFZYAYHOYQNQZKDLIYSGAWUOTFYGRGPUVWZTZNBSQJRLEDRBOYJLPLQOIHAIMXEMEDIIHSAMCQO");
    msg.action = 185U;
    msg.grouplist.assign("VFQIZOWMTLWTFDGVSGUKMNWYOILGUSHAYWNFQCGMCPSZVLULVSJABTRCUEFHBHSQHWDVUKDEERBXOEMJUDIZHQZWATQWVCRBLQGPMOYAZMNEIGJRBXXWPJKRINDYXYPLEXYNSOBBOZZHQJROUCRJNRPYCDLJXLJMOKAFRYAECBTTPFKHCSMPTOTCZDAQYBHPDKMXVVKGDPNQEZKUFNLITAXFEISNLHGPTWIZRWU");

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
    msg.setTimeStamp(0.6446712005144996);
    msg.setSource(37633U);
    msg.setSourceEntity(121U);
    msg.setDestination(29050U);
    msg.setDestinationEntity(180U);
    msg.groupname.assign("QPSTVVUKJSHRACWJQAFEMJMEVYPXSYRFNCBZYIOOZISNZTXDHHDIXEGWKXKUZSQKMBLIEGEXEROQOQFCQVAGOBNLBPNFYIUPMAZATENKDLFUSLOKCAVHKBJLGDNPOWTHZXFBPZDHREORVKFBUPTRSVJJ");
    msg.action = 98U;
    msg.grouplist.assign("WQKMCOCRAAOOXWZFJTINSGXFTRIDPDQRUVSDBZUEHZPKTKUQIMTBIJJNVNNPGJDIYGPRFQQOVBJAXAVNHLDSE");

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
    msg.setTimeStamp(0.5870043500844834);
    msg.setSource(48014U);
    msg.setSourceEntity(203U);
    msg.setDestination(50732U);
    msg.setDestinationEntity(194U);
    msg.groupname.assign("EVSOSVOMTAQMUGQFRDZRMGGTBSLLWSEORAJPXHNJIUPEBMHGRBLVLXBOYPVOYSDQPPTZMQCLHJLFEXASIKOZKTRITRJBJUGXKOEARIKCUAGDDIDDFRZNKBPNKWFNBCHKCYJWNXUSDAWSYUFLVOIJYEFWYWNZAVZESCPCHWAPPSQXTL");
    msg.action = 24U;
    msg.grouplist.assign("SSAMJJXMARWZTCFEQRSPYMKEWVJBCGIKCABRCHRCMGLPQWELMOIMEFOEHMIWUBEQITHVXUIBOZRNZFGLAAGJNECIXTOSDDRGNGD");

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
    msg.setTimeStamp(0.05721947430248364);
    msg.setSource(34879U);
    msg.setSourceEntity(204U);
    msg.setDestination(52995U);
    msg.setDestinationEntity(14U);
    msg.value = 0.4350266407546656;
    msg.sys_src = 9270U;

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
    msg.setTimeStamp(0.6646003980462301);
    msg.setSource(25838U);
    msg.setSourceEntity(21U);
    msg.setDestination(64311U);
    msg.setDestinationEntity(169U);
    msg.value = 0.33145325296574024;
    msg.sys_src = 19781U;

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
    msg.setTimeStamp(0.42032875209536236);
    msg.setSource(10527U);
    msg.setSourceEntity(77U);
    msg.setDestination(19393U);
    msg.setDestinationEntity(51U);
    msg.value = 0.3160530612864404;
    msg.sys_src = 8993U;

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
    msg.setTimeStamp(0.9334045121952584);
    msg.setSource(6192U);
    msg.setSourceEntity(173U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(166U);
    msg.value = 0.04481336379916323;
    msg.units = 31U;

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
    msg.setTimeStamp(0.43080320026571894);
    msg.setSource(584U);
    msg.setSourceEntity(246U);
    msg.setDestination(34348U);
    msg.setDestinationEntity(193U);
    msg.value = 0.766288567715697;
    msg.units = 10U;

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
    msg.setTimeStamp(0.614411171829404);
    msg.setSource(37525U);
    msg.setSourceEntity(172U);
    msg.setDestination(32794U);
    msg.setDestinationEntity(114U);
    msg.value = 0.48328524402567385;
    msg.units = 15U;

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
    msg.setTimeStamp(0.5382586962343892);
    msg.setSource(20508U);
    msg.setSourceEntity(199U);
    msg.setDestination(58771U);
    msg.setDestinationEntity(89U);
    msg.base_lat = 0.8657448059720555;
    msg.base_lon = 0.7356788230483553;
    msg.base_time = 0.44687910040389534;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 34809U;
    tmp_msg_0.destination = 18821U;
    tmp_msg_0.timeout = 0.1624684181282906;
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 61625U;
    tmp_tmp_msg_0_0.lat = 0.5177912598944638;
    tmp_tmp_msg_0_0.lon = 0.7468803461044561;
    tmp_tmp_msg_0_0.z = 0.22577561451877493;
    tmp_tmp_msg_0_0.z_units = 195U;
    tmp_tmp_msg_0_0.speed = 0.7971627826798549;
    tmp_tmp_msg_0_0.speed_units = 1U;
    tmp_tmp_msg_0_0.duration = 6196U;
    tmp_tmp_msg_0_0.radius = 0.44942768190574744;
    tmp_tmp_msg_0_0.flags = 20U;
    tmp_tmp_msg_0_0.custom.assign("TSPSSAVLJGPFRHRNLEBQJNUQTBJSGEMHZUUZZDAJVUEQUFYZMWCATVDGHNIUGNCVZTKLRTNQKQVEITBEBHXFW");
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
    msg.setTimeStamp(0.6906590039445628);
    msg.setSource(7886U);
    msg.setSourceEntity(11U);
    msg.setDestination(28188U);
    msg.setDestinationEntity(210U);
    msg.base_lat = 0.06054722242749755;
    msg.base_lon = 0.8767320527240708;
    msg.base_time = 0.129873056061792;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 25419U;
    tmp_msg_0.priority = -108;
    tmp_msg_0.x = -25572;
    tmp_msg_0.y = 19019;
    tmp_msg_0.z = -30982;
    tmp_msg_0.t = -5065;
    IMC::VelocityDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.0667693540280333;
    tmp_tmp_msg_0_0.x = 0.03639721077174707;
    tmp_tmp_msg_0_0.y = 0.40592561624230317;
    tmp_tmp_msg_0_0.z = 0.8888601353039014;
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
    msg.setTimeStamp(0.48792677435010845);
    msg.setSource(64964U);
    msg.setSourceEntity(18U);
    msg.setDestination(12572U);
    msg.setDestinationEntity(183U);
    msg.base_lat = 0.9846850744018072;
    msg.base_lon = 0.19710405910791895;
    msg.base_time = 0.22912487206898058;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 23400U;
    tmp_msg_0.destination = 56923U;
    tmp_msg_0.timeout = 0.6988010117748846;
    IMC::EntityInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 37U;
    tmp_tmp_msg_0_0.label.assign("HLYFYPKIVCFALBMMDYMEVYRDGZIQ");
    tmp_tmp_msg_0_0.component.assign("MGQPADJWNWTBUZUOSJADUEVJDMSDLJGATOPBIIZHEZYRXMYCQ");
    tmp_tmp_msg_0_0.act_time = 61971U;
    tmp_tmp_msg_0_0.deact_time = 51537U;
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
    msg.setTimeStamp(0.7040195694295353);
    msg.setSource(18181U);
    msg.setSourceEntity(42U);
    msg.setDestination(40099U);
    msg.setDestinationEntity(65U);
    msg.base_lat = 0.1882059642770314;
    msg.base_lon = 0.13115696665108478;
    msg.base_time = 0.6036725657440042;
    const signed char tmp_msg_0[] = {105, -30, 88, 37, 107, 102, 82, 3, -33, -67, 90, -8, -23, 32, 80, -67, -46, 53, -19};
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
    msg.setTimeStamp(0.5197762866659457);
    msg.setSource(46495U);
    msg.setSourceEntity(45U);
    msg.setDestination(19200U);
    msg.setDestinationEntity(13U);
    msg.base_lat = 0.8690209416533848;
    msg.base_lon = 0.7787399169654334;
    msg.base_time = 0.251043624986223;
    const signed char tmp_msg_0[] = {87, -15, 61, -77, -25, -18, -9, -84, -96, -32, -58, 8, 58, -109, -31, 42, -76, -83, 31, 74, -79, -40, 113, 44, -19, -51, 61, 2, -36, 7, -11, -42, 125, -68, 34, -117, 110, 109, -114, -93, -62, -122, 96, -106, 93, 118, 67, -127, 14, -66, -86, -13, 65, -56, 65, -69, 94, 59, 88, -14, -69, 6, -79, 35, -92, -48, -47, 122, -115, -112, -96, 76, 94, -77};
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
    msg.setTimeStamp(0.5157840336387582);
    msg.setSource(19341U);
    msg.setSourceEntity(69U);
    msg.setDestination(12658U);
    msg.setDestinationEntity(231U);
    msg.base_lat = 0.4892288661231956;
    msg.base_lon = 0.9083782944867641;
    msg.base_time = 0.6607540227750743;
    const signed char tmp_msg_0[] = {77, -27, 60, -125, 87, -20, 1, -68, -22, -53, -66, -121, 97, -55, -35, -57, -25, -126, -73, -9, 120, -58, 95, -63, 102, 35, 35, 118, 30, -50, 47, 86, 82, -88, -67, -42, -75, 66, -60, 76, -41, -77, 84, -67, 16, -82, 99, -8, -10, 77, 69, -19, 25};
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
    msg.setTimeStamp(0.1426201547075242);
    msg.setSource(37010U);
    msg.setSourceEntity(71U);
    msg.setDestination(9271U);
    msg.setDestinationEntity(90U);
    msg.sys_id = 42515U;
    msg.priority = -39;
    msg.x = 23521;
    msg.y = 825;
    msg.z = -14065;
    msg.t = -30257;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.4986090350904768;
    tmp_msg_0.sys_src = 58517U;
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
    msg.setTimeStamp(0.01718800884006033);
    msg.setSource(55068U);
    msg.setSourceEntity(128U);
    msg.setDestination(20971U);
    msg.setDestinationEntity(16U);
    msg.sys_id = 7303U;
    msg.priority = 119;
    msg.x = -24397;
    msg.y = -29927;
    msg.z = 28397;
    msg.t = 525;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 64819U;
    tmp_msg_0.name.assign("EUEJINKDHKRXODNAOJINYNKPCJVVAGPTRMGGUUBDZWRVJZZABZSDR");
    tmp_msg_0.custom.assign("PEFOYKFMZDOIRWGNPEMXULKUHROTVXRLFWQYJHLWNJQHKUSZOTYQFEMABOCKUY");
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
    msg.setTimeStamp(0.717031844938287);
    msg.setSource(59269U);
    msg.setSourceEntity(21U);
    msg.setDestination(64434U);
    msg.setDestinationEntity(232U);
    msg.sys_id = 60219U;
    msg.priority = 102;
    msg.x = -13077;
    msg.y = 19771;
    msg.z = 29798;
    msg.t = -1716;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.4633704000742075;
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
    msg.setTimeStamp(0.5310504180574949);
    msg.setSource(28899U);
    msg.setSourceEntity(38U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(189U);
    msg.req_id = 60957U;
    msg.type = 136U;
    msg.max_size = 53473U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.636949295038666;
    tmp_msg_0.base_lon = 0.6793775940349631;
    tmp_msg_0.base_time = 0.17095556949902357;
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
    msg.setTimeStamp(0.14164982434192297);
    msg.setSource(55938U);
    msg.setSourceEntity(185U);
    msg.setDestination(12428U);
    msg.setDestinationEntity(18U);
    msg.req_id = 7963U;
    msg.type = 37U;
    msg.max_size = 34804U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.1376628046098034;
    tmp_msg_0.base_lon = 0.9643201185485161;
    tmp_msg_0.base_time = 0.9366224450524666;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 347U;
    tmp_tmp_msg_0_0.priority = -71;
    tmp_tmp_msg_0_0.x = 31892;
    tmp_tmp_msg_0_0.y = 22886;
    tmp_tmp_msg_0_0.z = 19484;
    tmp_tmp_msg_0_0.t = 28485;
    IMC::VehicleState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op_mode = 178U;
    tmp_tmp_tmp_msg_0_0_0.error_count = 68U;
    tmp_tmp_tmp_msg_0_0_0.error_ents.assign("MDNDLPZIPPVZEWGMQFDLXBJLLMVQSXPUGQIKACFEKYLDBRNZCWSBJFGBOPXKZAXQEBNAFMIAHJWLGNGYMNZIOUWTTUOKERJOKVJFCHEPLHQIZCCKNFBMCARVTUSUUXKNNOLQCYYSWDCRVSVAGUXPHRUZHOAWOIAQRSRRWHBQEEMLDYHBEGMUCUMOAPVTRLSGSY");
    tmp_tmp_tmp_msg_0_0_0.maneuver_type = 14604U;
    tmp_tmp_tmp_msg_0_0_0.maneuver_stime = 0.34899685796805235;
    tmp_tmp_tmp_msg_0_0_0.maneuver_eta = 7723U;
    tmp_tmp_tmp_msg_0_0_0.control_loops = 510325670U;
    tmp_tmp_tmp_msg_0_0_0.flags = 142U;
    tmp_tmp_tmp_msg_0_0_0.last_error.assign("SJMFTBILXMOKICDNYQRXHHTZQGVEBGLJHYZQNZEECFPKVDGUUIYULPBZIJYKQJZDOAAVGFTQVLUOJYCQWGZIIDSKWHECSNZSFVIRXKFTKKSPHOPKXAOQHGVNGPSVXFPVXHHFTSNTRIMZOGNMJFZMUYLIBSCE");
    tmp_tmp_tmp_msg_0_0_0.last_error_time = 0.21381588553552078;
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
    msg.setTimeStamp(0.5739627875773287);
    msg.setSource(54440U);
    msg.setSourceEntity(72U);
    msg.setDestination(57523U);
    msg.setDestinationEntity(102U);
    msg.req_id = 54050U;
    msg.type = 234U;
    msg.max_size = 15186U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6080864813805362;
    tmp_msg_0.base_lon = 0.4717749209409132;
    tmp_msg_0.base_time = 0.9734637521629279;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 20883U;
    tmp_tmp_msg_0_0.destination = 50064U;
    tmp_tmp_msg_0_0.timeout = 0.3953624618421179;
    IMC::AcousticSystemsQuery tmp_tmp_tmp_msg_0_0_0;
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
    msg.setTimeStamp(0.1909246892525014);
    msg.setSource(38991U);
    msg.setSourceEntity(44U);
    msg.setDestination(17053U);
    msg.setDestinationEntity(120U);
    msg.original_source = 8374U;
    msg.destination = 6340U;
    msg.timeout = 0.7773481319288851;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 16884U;
    tmp_msg_0.lat = 0.8111244640194295;
    tmp_msg_0.lon = 0.8934481530268569;
    tmp_msg_0.z = 0.3456092591562393;
    tmp_msg_0.z_units = 57U;
    tmp_msg_0.speed = 0.41675029047263257;
    tmp_msg_0.speed_units = 184U;
    tmp_msg_0.custom.assign("UTFKGAVDCVRWSIQCZTMXNZXWBBSKZKJBIDCCPICNYKVINPMYAWRQSGNGLXNDIOAFXQVWLXSFTNDWGEAZGSVHWOGDPTCXUPKGPVBFCSAOZYYDHTPSYROBLRWDURLGKJPMUMEQGIMKNXNVRPQBHEHFHOZDEQLALYEPUU");
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
    msg.setTimeStamp(0.518770483134919);
    msg.setSource(28296U);
    msg.setSourceEntity(233U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(66U);
    msg.original_source = 1755U;
    msg.destination = 40991U;
    msg.timeout = 0.9608136511038916;
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("KVANKDBPMJWGXKTLLYNWMZQZSICJZEPXYACIFSTOFEUMFORTUPRNPKRXICKKDJADRXCZSSOKHLMUKRZYVVSBHPMQHFURBZLNEHRHXTPFXJBMIOVUSWDNGNABXLOPNWTEFWGPNOCWGMSVJYWGTHLDJCPQXBWOIUGZRULMYFQAREZOQLVULNEORZUQCHQJJYXQCIHJYBTFSIFVALAFETIPDDABDAJMEVDQBQKYXZEVCYKMIWIBAEHHVGGSTYGCG");
    tmp_msg_0.report_time = 0.43629639687989186;
    tmp_msg_0.medium = 64U;
    tmp_msg_0.lat = 0.19543424795423336;
    tmp_msg_0.lon = 0.8709906826409265;
    tmp_msg_0.depth = 0.3506019942498302;
    tmp_msg_0.alt = 0.3319853826570611;
    tmp_msg_0.sog = 0.015913191732043752;
    tmp_msg_0.cog = 0.24778488853479463;
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
    msg.setTimeStamp(0.2354159539429873);
    msg.setSource(31343U);
    msg.setSourceEntity(253U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(237U);
    msg.original_source = 40763U;
    msg.destination = 55405U;
    msg.timeout = 0.8454138265340853;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5613243948112185;
    tmp_msg_0.lon = 0.8933942781416896;
    tmp_msg_0.height = 0.4669288982475416;
    tmp_msg_0.x = 0.9452790182481154;
    tmp_msg_0.y = 0.2233407424142977;
    tmp_msg_0.z = 0.5461088820238813;
    tmp_msg_0.phi = 0.24140102353256687;
    tmp_msg_0.theta = 0.6345251468544261;
    tmp_msg_0.psi = 0.9209761460943913;
    tmp_msg_0.u = 0.3751704534882162;
    tmp_msg_0.v = 0.16084926035708946;
    tmp_msg_0.w = 0.6481758330014008;
    tmp_msg_0.p = 0.46072713880376626;
    tmp_msg_0.q = 0.9175316584813145;
    tmp_msg_0.r = 0.1277326008575005;
    tmp_msg_0.svx = 0.15387995627890305;
    tmp_msg_0.svy = 0.052505668253058135;
    tmp_msg_0.svz = 0.28509021680884905;
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
    msg.setTimeStamp(0.9573604726421769);
    msg.setSource(6849U);
    msg.setSourceEntity(189U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(218U);
    msg.type = 42U;
    msg.comm_interface = 49521U;
    msg.model = 30382U;
    msg.list.assign("KDLNNVLUZUEVPLPTPBZNLCEAVMSWDBMVDFQDIREBCZKXOBJJIDSIYYZLPFAIQMKDOFHXWZEDWCECNTRIQXERLODEUZKNXGRHGRSKJOCVVMBGHYLFKWFMWJWQKQRQTYWBXHEAGPJICKOATFTXIBQVOAHIPSRKJYTHLGEANWUOURXVMOMGGZABVHBSNAFTPZZGQSONFNRCCOLYGIXJ");

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
    msg.setTimeStamp(0.16597781954327473);
    msg.setSource(14147U);
    msg.setSourceEntity(153U);
    msg.setDestination(42122U);
    msg.setDestinationEntity(32U);
    msg.type = 62U;
    msg.comm_interface = 36265U;
    msg.model = 17850U;
    msg.list.assign("IKWPEEDNAKCFOXPZJFLUQOQCNEHTSIOBEXJKTYCHMNMDSNVPDFDURGGIJTSXDZNAHIPOEFPTYNRTZSJEWFWUVHVUINZFOQOLMKVSXTCCOMVYBOQMRSLUEAHAFCWUBGYKMXUPPWLJKJVMSZMQVCHHLZAYLEBDRQYHZKEXXDAWWDDPAGTGBYTYNJXBHOZIQCIAWOGGVDJLJURGLSWKJVYRQXUTSKRFMBPZRRIVXFUTAB");

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
    msg.setTimeStamp(0.35476213389728295);
    msg.setSource(17357U);
    msg.setSourceEntity(180U);
    msg.setDestination(3082U);
    msg.setDestinationEntity(242U);
    msg.type = 122U;
    msg.comm_interface = 12328U;
    msg.model = 37506U;
    msg.list.assign("JNMQZDPNQZLWKFBMXISLFPWRVBKRBUGOITOCORWCCYLCRVEXDIYOMDZPQXHAXNCGHPWBYYWTZHMNFXQNJGFVSJGSKSIAASAUMKBUBJVAGVUPIEQFDABKITGJZWPWPJQYNYOEXITTZPKDULWGUHGSILKCD");

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
    msg.setTimeStamp(0.02672690461839644);
    msg.setSource(22169U);
    msg.setSourceEntity(37U);
    msg.setDestination(13672U);
    msg.setDestinationEntity(240U);
    msg.type = 109U;
    msg.req_id = 365041371U;
    msg.ttl = 5716U;
    msg.code = 180U;
    msg.destination.assign("LOPEVTSDAKIYIMHHUXBYAPREIFXCKLPSDYROMSQZNYQJOTGOECLGWYFBXVINTYQFSUHFRYLJAGLMTDWMHWSNVZXOJYEVEMUHATNCWIBPPXICKJQFGRZENULJHSBAGUMRCWSXJZBTFRQEQMBZTWVVKQXDWGHAOLWXJKAHYUJEFPOWTXLIVGCVTDUNZISMGGRSHOTK");
    msg.source.assign("PGFMVBHVTQQNLPJTHOZOFQENAPUCBMPPXWR");
    msg.acknowledge = 118U;
    msg.status = 61U;
    const signed char tmp_msg_0[] = {115, 23, -50, -81, 62, 103, -112, 44, 26, 95, -84, -42, -73, -50, 83, 37, 2, -60, -61, 26, 42, -43, 65, -40, 23, 26, 86, -88, -94, -45, 17, 48, -109, 16, 100, -24, 30, 104, 119};
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
    msg.setTimeStamp(0.45548657561048445);
    msg.setSource(14369U);
    msg.setSourceEntity(44U);
    msg.setDestination(50672U);
    msg.setDestinationEntity(145U);
    msg.type = 98U;
    msg.req_id = 3368819981U;
    msg.ttl = 15104U;
    msg.code = 77U;
    msg.destination.assign("PFEBBFBNFHWMBUGAIVYATXLRYTGTXEJACCVWOVLDWGUPHYLXWBGELBSODSCXHFCBTPRLKOQISQLACAKVLJDMDXIYGQFNEPQCZPKYJDKSWWKVMUCOGKYXPOOGJPNIRQQHDUISTXVMUNRLFMJIJYUZATSMKFZNJIQREWRKLTTNGFSRKAFJNPM");
    msg.source.assign("ZKXIZDCENRURVBUAYDQHUVNXRQUCDGIFITXUJYHTSOQUBZUFJVOZCSAMWLITJOHGBPITTOPOFZFLCKXHWFOBDFGKSNYCCSPJXJAGQVWEZQGKEVKDKWVRLNSIYYSWIPAYGWBULPNMWAWQVQWTEDALPZLEGCNIENPPPTJKHMJBOSBAYEKYCHNXGQVRQJUMTMAMSMZ");
    msg.acknowledge = 236U;
    msg.status = 126U;
    const signed char tmp_msg_0[] = {27, 5, 0, -81, 100, 79, 112, -111, -30, -13, 22, 102, 21, -81, -25, 41, -80, -85, 104, -63, 0, -124, 126, -21, 110, -127, -28, 67, -72, -118, -94, -73, 70, -44, -46, -10, -123, -97, -125, 90, -74, 86, -64, 7, -102, -36, -42, 20, 70, -62, 57, -6, 50, -9, -25, -98, 44, 41, 76, -106, 27, -58, -81, -125, 39, 40, -32, 122, 61, -5, 91, -12, -41, -113, 18, 46, 114, 16, -106, -32, -34, -29, -30, -41, -55, 97, -88, -54, 1, -24, 78, 110, -77, 125, 116, 23, 38, 96, 82, 106, -118, 102, 86, -57, 121, 42, 76, 125, 110, 121, -87, -122, 68, -117, 91, -26, 1, -7, 91, 124, 25, 24, 66, -31, 82, -34, -24, -108, 99, -48, 87, 93, -22, -127, 46, 17, -76, 22, 115, -42, -98, -76, -32};
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
    msg.setTimeStamp(0.11484358462473543);
    msg.setSource(42577U);
    msg.setSourceEntity(120U);
    msg.setDestination(16255U);
    msg.setDestinationEntity(228U);
    msg.type = 30U;
    msg.req_id = 1231687673U;
    msg.ttl = 37526U;
    msg.code = 252U;
    msg.destination.assign("SVYHMQQEUUOAYBQZCTESWREHGXCZBOZYXTRKSRRDWJOXFAMHRABYUPJEKAKVUGDWGNOVHHSJFLDDKGQWTFXECTVWIMWPDECWQRUKJIGHTNFNRHAMTFZGVNJDVQQICADMYPSOBFUKGTZBVGZALLSIXUZPLIBJDGXMJFQXP");
    msg.source.assign("EXZLSWYQKKCCKAHYZMOKQYIGSAHGNLBGCCYGQJTXTRB");
    msg.acknowledge = 74U;
    msg.status = 95U;
    const signed char tmp_msg_0[] = {61, -19, 94, 82, -83, 76, -85, -37, 43, -1, 53, 66, -13, 20, -72, -104, 62, 111, 3, 122, 70, -94, 112, 112, -127, -73, -86, -66, -60, -1, -76, -64, 16, 69, 69, -37, -120, -79, -76, -44, -20, -56, 38, 73, -97, -125, 11, 54, -9, -16, -104, 93, -16, -31, 120, 74, -121, 78, -21, -80, 17, 95, 112, -40, -40, 54, 12, 100, -26, -3, -2, 45, 25, 89, 52, 97, 5, 50, 103, -15, -53, -9, 1, -126, -80, -100, 1, -109, -105, -38, -55, 10, -28, 38, 101, -29, -76, -51, 125, 18, -42, 50, -102, 100, -107, 23, -62, 95, -95, -126, 65, -42, 20, -81, -108, 26, 46, -2, 113, 41, 45, 26, 31, -3, 29, -41, -5, 12, 24, 19, -43, -108, 93, 125, -76, -126, -68, 122, 89, 66, 120, 84, 65, 93, -122, -45, -15, 121, 77, -63, 58, -122, 50, 26, -35, 18, -14, 22, -24, -120, -2, 72, 109, -41, -100, -25, -121, -37, -106, -97, -36, -48, -28, -39, 87, 57, -108, -26, 28, -80, 56, 105, 44, -100, 115, -101, -97, 68, -11, -117, -49, 125, -110};
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
    msg.setTimeStamp(0.7182250195374926);
    msg.setSource(35910U);
    msg.setSourceEntity(34U);
    msg.setDestination(65007U);
    msg.setDestinationEntity(78U);
    msg.id = 18U;
    msg.range = 0.21585179086512984;

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
    msg.setTimeStamp(0.6779870270250873);
    msg.setSource(26499U);
    msg.setSourceEntity(209U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(9U);
    msg.id = 41U;
    msg.range = 0.13514958791750997;

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
    msg.setTimeStamp(0.3737186180270743);
    msg.setSource(24177U);
    msg.setSourceEntity(124U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(117U);
    msg.id = 217U;
    msg.range = 0.5140423864904619;

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
    msg.setTimeStamp(0.37263755283153777);
    msg.setSource(4519U);
    msg.setSourceEntity(246U);
    msg.setDestination(18362U);
    msg.setDestinationEntity(78U);
    msg.beacon.assign("LJCBGAXEQFDBHZNBWDJZOQSMGAWDEIHQCXFEUJHRRKNMSFWSSYZUMNNXTMKPKOYLJSDHYRWRZBXNTEQJVVHRCCVWHGRQPPNLFCGTIOMITYBMCSIQDVETOGWECXJTDVMPKPIOVGIAXFYBFRXKUZRSJEGZWZQVMOFXPK");
    msg.lat = 0.03234698984108619;
    msg.lon = 0.8491697591670622;
    msg.depth = 0.9526320498189186;
    msg.query_channel = 43U;
    msg.reply_channel = 157U;
    msg.transponder_delay = 77U;

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
    msg.setTimeStamp(0.5469293518479496);
    msg.setSource(16838U);
    msg.setSourceEntity(136U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(140U);
    msg.beacon.assign("FGIZXTJEYJBWOWPSLU");
    msg.lat = 0.8004670197545207;
    msg.lon = 0.8070543619770277;
    msg.depth = 0.3475628892975836;
    msg.query_channel = 167U;
    msg.reply_channel = 47U;
    msg.transponder_delay = 24U;

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
    msg.setTimeStamp(0.21219180174772923);
    msg.setSource(35U);
    msg.setSourceEntity(120U);
    msg.setDestination(60224U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("MTGXRVMNYOHYMEQDYOGWUPVTBNEKXGYIXZZKJZXAINXEBSABATQWQTLAYBWLWHPFRCVAEUUIFENUXQGCRKUGNILLQJKVTPXRRPKNJOHJHCULWOTEKDALZJOCRNTMZAMUVTQNSOFOMUITIXPEXMVKZDIZQBOSFDWHLVZUWGFCKVTHMWYRKFSGRHIUGALNFYFMCIJCSZLSJIQEYRBPHAKMSJDDDEBCPYQ");
    msg.lat = 0.6369977307838135;
    msg.lon = 0.89451125075193;
    msg.depth = 0.0014803508391089126;
    msg.query_channel = 228U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 123U;

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
    msg.setTimeStamp(0.6170769309174953);
    msg.setSource(51195U);
    msg.setSourceEntity(74U);
    msg.setDestination(39103U);
    msg.setDestinationEntity(4U);
    msg.op = 137U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SBDMCFEMEKIJNXUHYSJYIKNZXBMTOIYSQAJOWOSWOPZJVDJNTXAMZNPHMEZCHLOZMTPCIUKVMZRVQWGYRODVRPQPKDBUERBQEJTFWBWEWZFBCDGXRMIBUNRCLNAYHKRJJBLCUERGHZIXU");
    tmp_msg_0.lat = 0.7593343347671547;
    tmp_msg_0.lon = 0.7267340018417645;
    tmp_msg_0.depth = 0.8384940398434182;
    tmp_msg_0.query_channel = 175U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 220U;
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
    msg.setTimeStamp(0.8526574069623156);
    msg.setSource(26856U);
    msg.setSourceEntity(76U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(24U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.22771148541560282);
    msg.setSource(48629U);
    msg.setSourceEntity(18U);
    msg.setDestination(22602U);
    msg.setDestinationEntity(58U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.23015939939433683);
    msg.setSource(6019U);
    msg.setSourceEntity(197U);
    msg.setDestination(55505U);
    msg.setDestinationEntity(12U);
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 252U;
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
    msg.setTimeStamp(0.8370165947504611);
    msg.setSource(53205U);
    msg.setSourceEntity(164U);
    msg.setDestination(64450U);
    msg.setDestinationEntity(207U);
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.01980309142627945);
    msg.setSource(48257U);
    msg.setSourceEntity(122U);
    msg.setDestination(10563U);
    msg.setDestinationEntity(160U);
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IHOOKLZYLTXQQTABMQEMVUKHLIMYOPENKQAWLYLKCCCNZTFYICVTBWDHEOJGNXSTBWKWGOYNCFUSUUTIFCMUYUADVFMZWRYCDXJMAXQIRPZVDIVNYJHOBXMFJXRSPECKSIXSNTQPXDSGVJIZHVSKTFEJGVWQUFYMRSY");
    tmp_msg_0.description.assign("VMTHOLEJHDYTYWXYRPUSGGPLKPYUGSZUAVLUVEOAQVCRNIRZZJPKORZYUBKFDQXSFKBLDAWFJLGYHNDYNMANJHHBPXCMAQAUFPCTMNDXCEITNBGWEEMNOBOZNIWARJXBGHLSXOOHQNDWBUYFKPQDLQFHHOPMVDRMIBQBXPLQMMFRTNXCWIUJQYSKQCWCWSYSJRJBZFEKXKHZVAKCJDVJEURTAIDSXMZZRTGSWTGLLVIZGEFGCFKICOIP");
    tmp_msg_0.vnamespace.assign("QQBCRNSPHJYYEHWGKUZSXNUATCJKCSBFGLFNAZPNBHGEUHNMJTDIVMOAAUDZMNEPYRXMRDTISQIYPPWGJMBWHQYXPVJLGBBNYKLVOBFDDCQSIURHBCLXFCKGTBOMRPNWFEQJEJZTFWIFVKMXKODRZJGZEZYGVCHXMZYAFQBHXEOKLPYLITCLLQDROOWLAV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AUNQFEPIUWGKTFNWHDHZZYSBFXLIHQRNCIHVCLEOJRQHVCTQVJJKSORRNPVNFNUBBYPWSJKQEQSQPOYWUZQWLYTOXDDBRCPMGTEXBVXBXCWYGIALJAQPNTDNFVEZOCMDDNLJHKCDDAD");
    tmp_tmp_msg_0_0.value.assign("RLILLWYYLDGPPEQPSTXDQHQTUIGTEEZFGREDCKJVXZOYRXMVZMTHXOOXRSBQVEBXRFNDFZCPQDIWROSSSPMNRUHPHGBEWDLVXWIKDGTLCQYYBHSKHYTWOAUNFZJTAEVLNCQAJSAKOJHBZDBTCQIPVWUESKZNCWVRGWNFQM");
    tmp_tmp_msg_0_0.type = 199U;
    tmp_tmp_msg_0_0.access = 120U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CKHKWJSFZOIZJWEDVGNIFVBLFYONEAMOXFUMCUVMBAUXCTMOSYWNKBKCUFGYBRFSLGGBOLOOXLJDSASGDTKFACNQQQXZMVMVWRAHHSPANXRCZVRPCZLKUBIPLUGEIWWPEHANVMYUKIAEPWJYBGCIDALOQZEXJJDRHRQOBUDWCPVRIDDLSDMRSJZNBQTCQRJEETGGSHQTZYXPIVBRTKLPDEHYW");
    IMC::TotalMagIntensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5455104189254293;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Calibration tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.duration = 16311U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.8523541183831408);
    msg.setSource(53023U);
    msg.setSourceEntity(230U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.7475875705381029;
    msg.lon = 0.9673500285684331;
    msg.depth = 0.0581931914317485;
    msg.sentence.assign("DPXXEVNXEFLXKBCGYTHKBICEMVTUQIGJSEOCEFFYOMNKCZGXBTDTBMFVSMZEDJTZBCDPZBQPMPZYRIYDNZPPWUSLAGWWYSDCZFWLNOEWOBEIKHNKGFIQIRHQUUQJLYYSPOTCLVTHVRIDJFSDQNXUTOGYYRIRQXRJMIKWDESUUJSHKKHVRQRBNCAHJNGVHIBROUCVWQTWZAYXEAHJLPMQDGKNOXMGALJOAOHATWAFUSLFWCLVJMKAPUFPRBZS");
    msg.txtime = 0.4271753697153575;
    msg.modem_type.assign("MPZCUTPBEFUSTIQITMVWKUSYDJZRZXUWEAKNOOCMEFXNXLNBHABRINRYKRPVVDKPWIYGOHDMZJEVWCEONUUFEQXLNWIKZTYGCBCYRJYSZRVMXFQACFJIFWGRJJMMFSVBLADTASPVLSTAZLUZOGDBPTZOJWBSCXJFQGZKPNWLCAHYELXDUKEXVYLIDQXKXHDOUYYDPOHEOGIIQQTGKJWHJBKPPVAAGRRGBOLWHMQTTAUQHGLMNNBIMSEHCN");
    msg.sys_src.assign("VURHFLZBQBSYZKDZZGCXGXRXBGDJJAYREYTYUKGWVAJLVMUSNWRZCSXLKEYVTIHTSKUYIJGFMEJAKFRJLZSIQSAVDQQEECPTIBOTQMTQNUDONPGFDZAWBOKMICOALXKSBXJUHPFECVHTDNWLFUQUEPFRLKOPEOOVAUNZSYYIPCDRKHEWUGLCHQBZVZGCMOHSXBONQNEWI");
    msg.seq = 14676U;
    msg.sys_dst.assign("GDTDGZIJUMEOVWTXIIHWWPRFHOKKGA");
    msg.flags = 129U;
    const signed char tmp_msg_0[] = {82, 20, -114, 95, 109, -39, 52, -65, -103, 60, -24, 8, -44, 116, -107, 31, -12, -121, -69, 68, -44, 4, 2, -105, -120, 97, 83, -58, 62, -58, 81, -122, 57, 115, 46, -125, -104, -17, 63, -57, 70, -104, 2, -101, -63, -10, 5, -9, 20, -80, 100, 22, 28, 91, -54, 51, 87, -58, -11, -74, -23, -12, -68, 76, -100, 98, -7, 118, -64, -87, 70, -61, 121, -87, -30, 53, -44, -117, 109, 113, 44, -77, -96, -114, -61, 54, 74, -105, -34, -8, -126, 96, -43, -6, -125, -112, 2, -4, 40, 123, 12, -55, 71, -48, 66, 31, 6, 52, -105, 93, 113, 63, -38, -66, 94, 3, -15, -58, 52, 16, -48, 31, 96, 107, 0, 80, 69, 109, 45, -112, -51, -45, 90, -91, 40, 108, -67, -51, 29, -16, 76, -117, -9, -109, 74, 126, -35, -39, -115, -101, 29, -119, -95, 31, 104, 126, 62, -20, -105, 69, -48, 32, -17, 70, 67, -123, 112, 93, -79, -41, -96, 12, 47, 78, 38, 56, 117, -24, 42, -113, 57, -97, -15, 53, -38, 117, -37, -2, 121, -107, -55, 124, -42, -87, -119, -7, 96, -116, -16, 98, 111, -124, -40, 75, 2, -65, -6, 73, 54, -67, 113, 18, 45, 57, -47, -20, 101, 118, 113, 110, 70, 107, 69, 33, 45, 99, 4, 81, 35, -57, 24, -107, -5, -98, 117, 60, -25, -7, -92, 87, 116, 67, 105, -120};
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
    msg.setTimeStamp(0.05309660991951126);
    msg.setSource(26790U);
    msg.setSourceEntity(0U);
    msg.setDestination(47571U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.656300766660757;
    msg.lon = 0.23836997080090927;
    msg.depth = 0.4577153185934717;
    msg.sentence.assign("ZEZZSKITYMMXTFBBAUWIUARRLTOYYYIGRYGSMPMQRSBLOCUQKOEHPBWNJJJCSKXWHC");
    msg.txtime = 0.6355783346370284;
    msg.modem_type.assign("CJOPERVWTBHCVBZDGYZKZUETEMLUFNIVRZAWYNWGVGTJMDZVFIQFLCEBOHAUJXVFXRKMXVJCRXLUTHPXOTSPPNTDWQYEDUFGCBXHZUBDZHFZ");
    msg.sys_src.assign("SGPEZUHDPWTLPNLQVBBIBNILYYXNTIQULGCRUNTZBZBPQVIOXUVZWQMCKAJZCZWTLKSEYXOURCHGLDZODGQYDISPOHKDJEMFBCGYOAFXHLBYMOJTRVJCAJLMEEMVUAWKDFZIXATEFJHPQOIQBRSKNLENGYJKAVHGMJSNFEIFQWUMXXSTBJXORIMNDOFKNSBXV");
    msg.seq = 54433U;
    msg.sys_dst.assign("JEJUDWCJIYTIPHKANZYBLCHYYJOKKEVCZGQFOYWCWNBDFNYQWCRZQPMCFOGAWXXUMNKNBMKPMWPAUZCXGZVDMPZDHSLLVLWUXLRGPYETJNGDITTCKPHUFEEQHAHSWASNEAFQQAXBAIJOAFIXVRIRSDVIJFMKVPWUOFOYTBKDDCMJTSTHACKXYEOVUTZQUVRVJZNBBMEURYXZSTPHDRQUQDGBOZRIGJWNMGFLSHLBTNISLXBKOQG");
    msg.flags = 47U;
    const signed char tmp_msg_0[] = {-70, 53, -18, 81, 79, -65, -30, 16, 35, -127, 81, -127, 68, -1, -128, 7, 79, -91, 111, 26, -25, -47, 76, 40, 35, -86, 4, 33, -40, -2, 48, -116, -57, -23, 122, 34, -94, 106, 94, 106, 51, 59, -18, -5, -125, 112, 8, -95, 104, 87, 95, 39, -83, -67, 74, -90, -107, -125, 101, 87, 76, 92, -63, -84, -107, -46, 37, 1, -21, 126, 60, -41, -116, 16, -2, -25, -43, 36, -66, 59, 78, 40, 17, 23, -16, 45, -48, 50, -14, -8, 57, 59, 44, 16, -94, -8, 15, 68, 113, -76, 89, 59, 29, 77, 70, -25, 7, 91, -32, 49, 17, 71, -35, 44, -119, 8, -43, -72, -113, 5, -59, -70, 47, -58, 115, -83, 61, 99, -123};
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
    msg.setTimeStamp(0.0654113829434586);
    msg.setSource(23164U);
    msg.setSourceEntity(135U);
    msg.setDestination(14466U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.5615101102437473;
    msg.lon = 0.5071075417922463;
    msg.depth = 0.17394735625096014;
    msg.sentence.assign("IDSVQOSCLRLIUT");
    msg.txtime = 0.6302193218428754;
    msg.modem_type.assign("FMCJNCAPUGAEIPBRLVTLQSXCWKECUNLQRFGWVLSVNMOSXZIWPMOLKYEQVHBLCYTBOIKAMEVIACBDBJNHFMCLTPGNJJQBQUAXIQDODXJHURZNYQKEVODVJILZXVFDBKYJACEWTBNNXKCHTZIYHEYZGITXSOOQHHRDFORGUSKNAWPGRFMWHWKPUZDZSUSIMEGVVQPPMLFRFUXXJMO");
    msg.sys_src.assign("PCKUONEFSVRRYCTRYEJHXKQWSTOALUGDJDPKAADHMYYGSQGJSZSFERUXLZDYUTYDQCWJBFXJUSOPBRCAHOIHGCXJGQMYQHMWALIOYWLLEZHZNEWFDPEOQANAPBTEBNCGIGNTVINRRZFPSPVUHBKCMDPMHWQVXBLBTFTBKWIEZW");
    msg.seq = 13774U;
    msg.sys_dst.assign("DUPYMXQEWKUCFGSACLBFKWLSJQVAZIAUWZPCXHRHEXLQNHIOYKQLKDESMRANOQ");
    msg.flags = 111U;
    const signed char tmp_msg_0[] = {47, -47, -43, -60, 79, 51, 18, -11, -127, -125, 19, 89, 76, -23};
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
    msg.setTimeStamp(0.5784835654882999);
    msg.setSource(1272U);
    msg.setSourceEntity(232U);
    msg.setDestination(52465U);
    msg.setDestinationEntity(253U);
    msg.op = 248U;
    msg.system.assign("ODBXYXJKLQZNBVIYHUPTJDRCUAAFZHGMAOLMYRGZVSKZYMQ");
    msg.range = 0.6394551264745448;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 64810U;
    tmp_msg_0.plan_size = 431186357U;
    tmp_msg_0.change_time = 0.3974681559519623;
    tmp_msg_0.change_sid = 12224U;
    tmp_msg_0.change_sname.assign("GPFSOTXSKWXDYUYAFWNVSOGUNWP");
    const signed char tmp_tmp_msg_0_0[] = {80, 32, -64, -88, -33, 24, 55, -90, 59, 120, 123, 74, -128, -36, 41, -77, -24, 46, -28, -9, 46, -79, 97, -78, -10, -102, 58, 2, 4, -44, 100, 51, 7, -66, 75, -119, -104, 5, 102, 28, -59, -67, 41, 44, -25, -4, -75, 40, 9, -46, -52, 9, 43, 82, 88, 51, -7, -76, -108, 51};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("EMHUOIMGTHRKEOLSFWSFPCKBWNXYRUEXSJZEIIKKXYCWPDPCTBLKZKTGACYFKJJYHVRZBCJVGLWYGZOTNA");
    tmp_tmp_msg_0_1.plan_size = 10521U;
    tmp_tmp_msg_0_1.change_time = 0.5935172788631744;
    tmp_tmp_msg_0_1.change_sid = 12089U;
    tmp_tmp_msg_0_1.change_sname.assign("LDYGZQBEODTEJVGKOOQXLQRKULRCMYISACOWZODGFTHFUURZ");
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {65, -64, -83, -77, 97, 15, -70, -110, 8, 41, -78, 81, 126, 81, -105, -1, 48, -16, 66, 93, 86, 82, -110, -9, 15, -69, 70, 94, -15, -128, -104, -125, -40, 119, 107, -10, 77, -128, 97, 101, -37, -36, 65, 93, -122, -120, -81, 119, 62, -107, -21, 81, -89, -111, 68, -89, -64, -32, -97, -51, 58, -16, -77, -19, 123, 56, -29, 104, -100, 46, 95, 33, 113, -86, 29, -53, -40, 4, -73, -123, 81, 41, 17, -128, 40, -68, 125, 115, 64, 58, -107, -9, 95, -69, -27, -102, -126, -105, 64, -25, 116, 5, 103, -73, 51, -23, -11, -89, 89, 91, -45, 0, -43, -68, -126, -38, -93, 37, -43, -40, -17, 72, -29, -55, 82, 115, 88};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.7816081007101798);
    msg.setSource(22076U);
    msg.setSourceEntity(44U);
    msg.setDestination(62105U);
    msg.setDestinationEntity(226U);
    msg.op = 219U;
    msg.system.assign("DBVBGOWAYUXYPTDKTAPHXBFDWLUGPFCDEZNMHQUAEIKZVVUCBJVTPGKODUJQIXEJYONZVWHFSSDKFGWQZCCCWNVFUCKGUISFHXYXARCSAOQYETKZFTLXJLTDVZMMSLYJLRONREYPFJYUOSDAHCARGEJSBCMHCLZIPETXTUDPARZ");
    msg.range = 0.8552144199190466;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.49728770664165234;
    tmp_msg_0.y = 0.6033618395114516;
    tmp_msg_0.z = 0.4053561390308601;
    tmp_msg_0.k = 0.3677204827296755;
    tmp_msg_0.m = 0.5949766431161098;
    tmp_msg_0.n = 0.5708895236694816;
    tmp_msg_0.flags = 171U;
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
    msg.setTimeStamp(0.18892685014159816);
    msg.setSource(4183U);
    msg.setSourceEntity(145U);
    msg.setDestination(47796U);
    msg.setDestinationEntity(173U);
    msg.op = 193U;
    msg.system.assign("ISXWCUQMQEHEXWFBCKTPHBYCLZEOSRFSQXWGRCAYBAHFCZFZBMKJFGDWUEOWGRJOMIIUNOXKXVPDQSMXGLYSTRNRCHWQNOHEKWMUGFPJUIULNMYZQSLYXTBXHAQVFCVSHKTKTDGECVIEKBWYVJATDUARPKOMRTAWLJPEOJPSFPLBTORZJMVDDYLUUNTTNCVGRVRZPZQJDIPYJQBKWYXSHMIIHZM");
    msg.range = 0.23237967849410668;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7568829558319118;
    tmp_msg_0.lon = 0.521989954027394;
    tmp_msg_0.height = 0.6635132750381164;
    tmp_msg_0.x = 0.24716123752544317;
    tmp_msg_0.y = 0.12988510544713672;
    tmp_msg_0.z = 0.057969018320430665;
    tmp_msg_0.phi = 0.7535385787278673;
    tmp_msg_0.theta = 0.20229390090411237;
    tmp_msg_0.psi = 0.3735091229976065;
    tmp_msg_0.u = 0.028335659805392988;
    tmp_msg_0.v = 0.8411944701605475;
    tmp_msg_0.w = 0.4279907340332674;
    tmp_msg_0.vx = 0.8716251099552742;
    tmp_msg_0.vy = 0.9248775183628046;
    tmp_msg_0.vz = 0.24840735662273028;
    tmp_msg_0.p = 0.8335544610869743;
    tmp_msg_0.q = 0.39179671937533034;
    tmp_msg_0.r = 0.8293815094176156;
    tmp_msg_0.depth = 0.1461596909036813;
    tmp_msg_0.alt = 0.0877777964625186;
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
    msg.setTimeStamp(0.1078029240391537);
    msg.setSource(32915U);
    msg.setSourceEntity(135U);
    msg.setDestination(7112U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.10905086943302589);
    msg.setSource(25998U);
    msg.setSourceEntity(241U);
    msg.setDestination(1740U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.35362676642793545);
    msg.setSource(33051U);
    msg.setSourceEntity(253U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.5953228412182432);
    msg.setSource(55747U);
    msg.setSourceEntity(101U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(84U);
    msg.list.assign("DYILTXKUSAMGBNJEXSYBHOESACVACHWMMUFHJGARPOHNLQPCLITDNOCHVAIFQPDWNPBZYCKMHAENUUTBSPVEUDVIRWQBYIDUHGBATBBVWTJCXYVZPFXISQANGLWZFUKWQFKVTIPEFGJJSZXBVO");

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
    msg.setTimeStamp(0.9784211429121729);
    msg.setSource(20469U);
    msg.setSourceEntity(55U);
    msg.setDestination(10706U);
    msg.setDestinationEntity(20U);
    msg.list.assign("EQPRZNCNXUANLHGWGBEXPDVIFSZIACBPBFJYTCSNQMVLJIDLAHROZIYCHVIWPQHASAOAGZEZTNOXQYSKEIOQRCGALAHQVJKPQXMONIVLXDCKEUBKPJYYZTLQYFLECWTHDFGTNEHSBKISOJWIGURTRCTVIVHPTJWSZORPMBVPLZWSJD");

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
    msg.setTimeStamp(0.11883311582896916);
    msg.setSource(8177U);
    msg.setSourceEntity(5U);
    msg.setDestination(35051U);
    msg.setDestinationEntity(49U);
    msg.list.assign("OAUDYCQTOJVIKOCDOWSLSCPPPGIWBMHQZBLQCDVVGCRIXTFMJBJVJWHYSSQDYMGMULJ");

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
    msg.setTimeStamp(0.16984894050003096);
    msg.setSource(30828U);
    msg.setSourceEntity(23U);
    msg.setDestination(49590U);
    msg.setDestinationEntity(125U);
    msg.peer.assign("WGJBHOTWGQBQNRFOPDFGXJJWRXSEIZZHRZLVEWXRQVADZCJPVWUOCWXPVHSEFHTTJEIUXKRSETVIBCGPNNYFDINAZFWHEBTLNYILAUWHTBXMGMVRJCQVYMSPCUKLKKQPYXDWKQLAY");
    msg.rssi = 0.03083889681598051;
    msg.integrity = 51362U;

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
    msg.setTimeStamp(0.04074710892851463);
    msg.setSource(16965U);
    msg.setSourceEntity(132U);
    msg.setDestination(42909U);
    msg.setDestinationEntity(144U);
    msg.peer.assign("JGNXROCSMBTPGXMIMQRKFFWVZHJSDWKINSJOQBWEVDRYDGVDFKAAJSUFPHNPYMTPXMZUEAQGCRCZY");
    msg.rssi = 0.7512476662584335;
    msg.integrity = 43376U;

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
    msg.setTimeStamp(0.46028137887487774);
    msg.setSource(45501U);
    msg.setSourceEntity(103U);
    msg.setDestination(41694U);
    msg.setDestinationEntity(34U);
    msg.peer.assign("FNTKIPMNKYVIOPTYTVDKYGIPCWRQVRPLRBTDHZRPTERHUIZKWQFSPLLVSIADAGSACADSISTXKQBULPGYKDGVCZUCAZFIJSGNXXUUOQMFSAQCWWXMUHJULRNJZBLNXIMCGJXNBKBGTXJCYVZZZJENNOMDMDPBGYASLWMJOEFRRXBGHKMHWIOFONYLJLDNEWV");
    msg.rssi = 0.1589428124577189;
    msg.integrity = 60629U;

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
    msg.setTimeStamp(0.7979171105954548);
    msg.setSource(53151U);
    msg.setSourceEntity(131U);
    msg.setDestination(21439U);
    msg.setDestinationEntity(98U);
    msg.req_id = 42785U;
    msg.destination.assign("WRNYWXQJTDTSXHUGZOZFENPVUJEGXLEHUSHHLZEBGWRPCZPIVDDXGPJGANAVITFLMIPPJYRHCVIBVHI");
    msg.timeout = 0.8407787673231469;
    msg.range = 0.4437880789621713;
    msg.type = 219U;
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("ZSXOAZSLZLDNIZUYTAUKJIKBXECQWATRKNXUMUBIFYLDCCMADPQLXEPWEVWTVNKRRGMXTGNW");
    tmp_msg_0.report_time = 0.8764597505887612;
    tmp_msg_0.medium = 218U;
    tmp_msg_0.lat = 0.9297644307452784;
    tmp_msg_0.lon = 0.5336835221762032;
    tmp_msg_0.depth = 0.5671987480331179;
    tmp_msg_0.alt = 0.8836831354868897;
    tmp_msg_0.sog = 0.11771458793045775;
    tmp_msg_0.cog = 0.5605232545936488;
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
    msg.setTimeStamp(0.7000902098675241);
    msg.setSource(39085U);
    msg.setSourceEntity(33U);
    msg.setDestination(36430U);
    msg.setDestinationEntity(45U);
    msg.req_id = 31023U;
    msg.destination.assign("ATCZJYCBGDFGVXF");
    msg.timeout = 0.2640472401431917;
    msg.range = 0.791598136961887;
    msg.type = 231U;
    IMC::FileSampleEvent tmp_msg_0;
    tmp_msg_0.fstype = 19U;
    tmp_msg_0.filename.assign("CTTUUXTAIRBQTKDNLZOYZFFDENWSLXQPXYTVBASIUUDTHLGHUFTPRIQLKJGNCFAVJDVXUY");
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
    msg.setTimeStamp(0.6398802140427293);
    msg.setSource(58697U);
    msg.setSourceEntity(14U);
    msg.setDestination(20372U);
    msg.setDestinationEntity(231U);
    msg.req_id = 42746U;
    msg.destination.assign("FSWRUEHSQAEFDBZSAORFCQRKFTCTFOEMODPPZZQSLEKZWGDIJXWDNMOMUPJCQHNILACPHXNWTEZGOVZOKUTABEHXNNJTXYSWBUOYTSSRXUUGBDBWWYCLEYUNVRDHBK");
    msg.timeout = 0.8829125587060132;
    msg.range = 0.5413854070138133;
    msg.type = 112U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 137U;
    tmp_msg_0.htime = 0.7956618793361929;
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
    msg.setTimeStamp(0.7614552196446045);
    msg.setSource(31265U);
    msg.setSourceEntity(40U);
    msg.setDestination(7046U);
    msg.setDestinationEntity(190U);
    msg.req_id = 11627U;
    msg.type = 51U;
    msg.status = 4U;
    msg.info.assign("UMAZTZFVJIDMYJXYQIBDJDDHHAXMGGINTVLITQCSRUIUDGIRCXEQFPPWCQESQPWKGTBMYKVPCCLDLOIEOHZQRZTNQTSMWSGUDZLMOWOSBWGMGHYCHUQVTKPCSNAJHBEPXBHDFZQNXFFVGFRFVATKSSTWPXXBMHWPRAENNHAKFEOLDYBTYYORBXHJZJVEWWKYQPLRGKKFWNJRSFNIBDJUUCNVVYAOICZNA");
    msg.range = 0.08698449896548599;

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
    msg.setTimeStamp(0.4760627040289066);
    msg.setSource(32976U);
    msg.setSourceEntity(232U);
    msg.setDestination(21093U);
    msg.setDestinationEntity(106U);
    msg.req_id = 51784U;
    msg.type = 247U;
    msg.status = 217U;
    msg.info.assign("UZKCKXUOMQKTPGOXENUOAELWJHRMLVILAOYOCMDRRAIZPDFJGMMRQPNWWBDRCTBHYXUINMOBIUGTQTUWLGMPJRWSXKTTIYFKOQCPAHVQZENVAJOEUKSDLZFKYJGYSWNHQBXJCMXGGTTVHDNDYBVCIZFUFJVDSZIXWESDBMIQZOEQWYPRYXDSJNGZVGRTPEPJFMALBKNFYWSBZTIVQLSFCXLAJFXEFGKRPBSCECVLSW");
    msg.range = 0.5148916934046487;

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
    msg.setTimeStamp(0.7328347202950168);
    msg.setSource(16804U);
    msg.setSourceEntity(251U);
    msg.setDestination(39986U);
    msg.setDestinationEntity(162U);
    msg.req_id = 21155U;
    msg.type = 21U;
    msg.status = 169U;
    msg.info.assign("RZPIJUYBINTSSOBKHGZQNWMTROWBLDWCMLBWGLSZIPASUFXKHRWQIRRCDAVFXVSNIEDYWABJWODQINSPHK");
    msg.range = 0.4058794662610705;

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
    msg.setTimeStamp(0.7742657020059199);
    msg.setSource(34324U);
    msg.setSourceEntity(59U);
    msg.setDestination(53653U);
    msg.setDestinationEntity(212U);
    msg.system.assign("JMPYLUXHUGUYFFBXAJCMSQZRIWTAHHPUBMOHBSOXLMCQVKKQRIRAFJKEUTSDYSXKTVPMQZKXRNNPOBXCLJORZLYUFASDJUCGNBQZQVOKWLWUWLPZUZNHQGDGOGNJHJKBPVTYMZVWFIHLSKSYTIPINRTFYKGBWMDEJAIZDMDDITECXYGVCSYMDFGZINQGQXICBDQAATEWVITBCPCDELAHFT");
    msg.op = 57U;

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
    msg.setTimeStamp(0.7103572131115673);
    msg.setSource(58828U);
    msg.setSourceEntity(69U);
    msg.setDestination(51651U);
    msg.setDestinationEntity(207U);
    msg.system.assign("EVUKMOKEWAIEAORVAZWJWMLOTR");
    msg.op = 111U;

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
    msg.setTimeStamp(0.1380537662333704);
    msg.setSource(46043U);
    msg.setSourceEntity(76U);
    msg.setDestination(7019U);
    msg.setDestinationEntity(156U);
    msg.system.assign("KCFCWWBUJAOOWSZESQWMDPUNRKZIEIVAKSXWQOVLJDJKM");
    msg.op = 47U;

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
    msg.setTimeStamp(0.6279746270052479);
    msg.setSource(37517U);
    msg.setSourceEntity(244U);
    msg.setDestination(62173U);
    msg.setDestinationEntity(248U);
    msg.value = 11020;

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
    msg.setTimeStamp(0.6483324461124942);
    msg.setSource(41410U);
    msg.setSourceEntity(40U);
    msg.setDestination(47835U);
    msg.setDestinationEntity(110U);
    msg.value = -3836;

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
    msg.setTimeStamp(0.08395681367774244);
    msg.setSource(32363U);
    msg.setSourceEntity(22U);
    msg.setDestination(52880U);
    msg.setDestinationEntity(102U);
    msg.value = -25091;

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
    msg.setTimeStamp(0.2819502101185595);
    msg.setSource(57735U);
    msg.setSourceEntity(242U);
    msg.setDestination(8319U);
    msg.setDestinationEntity(51U);
    msg.value = 0.49731117573675465;

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
    msg.setTimeStamp(0.9570573590696158);
    msg.setSource(63041U);
    msg.setSourceEntity(120U);
    msg.setDestination(39491U);
    msg.setDestinationEntity(228U);
    msg.value = 0.26336413297889916;

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
    msg.setTimeStamp(0.004968045524016307);
    msg.setSource(49951U);
    msg.setSourceEntity(56U);
    msg.setDestination(4993U);
    msg.setDestinationEntity(150U);
    msg.value = 0.02662013628174975;

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
    msg.setTimeStamp(0.9371812660652004);
    msg.setSource(36254U);
    msg.setSourceEntity(171U);
    msg.setDestination(34405U);
    msg.setDestinationEntity(11U);
    msg.value = 0.6490820748339698;

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
    msg.setTimeStamp(0.5097399750509887);
    msg.setSource(54080U);
    msg.setSourceEntity(165U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(82U);
    msg.value = 0.26123589137167125;

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
    msg.setTimeStamp(0.7804438918989812);
    msg.setSource(41814U);
    msg.setSourceEntity(28U);
    msg.setDestination(9943U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6766156753995667;

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
    msg.setTimeStamp(0.4732416036267425);
    msg.setSource(58939U);
    msg.setSourceEntity(40U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(130U);
    msg.validity = 27610U;
    msg.type = 228U;
    msg.utc_year = 64174U;
    msg.utc_month = 86U;
    msg.utc_day = 22U;
    msg.utc_time = 0.5982913684279058;
    msg.lat = 0.9690051712737952;
    msg.lon = 0.8097323507909403;
    msg.height = 0.17022386786319887;
    msg.satellites = 160U;
    msg.cog = 0.8508663849681046;
    msg.sog = 0.8484256057208047;
    msg.hdop = 0.61041828937071;
    msg.vdop = 0.7920393609342726;
    msg.hacc = 0.525151630117465;
    msg.vacc = 0.9822400638523663;

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
    msg.setTimeStamp(0.4198190570913424);
    msg.setSource(52405U);
    msg.setSourceEntity(242U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(129U);
    msg.validity = 36110U;
    msg.type = 196U;
    msg.utc_year = 53445U;
    msg.utc_month = 155U;
    msg.utc_day = 151U;
    msg.utc_time = 0.5608170188644075;
    msg.lat = 0.7444490506643408;
    msg.lon = 0.9229095737175778;
    msg.height = 0.8664838979716758;
    msg.satellites = 147U;
    msg.cog = 0.1193629098467871;
    msg.sog = 0.242006033276151;
    msg.hdop = 0.6259210214978916;
    msg.vdop = 0.6661364273318422;
    msg.hacc = 0.7352909336090988;
    msg.vacc = 0.3642512179560299;

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
    msg.setTimeStamp(0.3654877859983171);
    msg.setSource(64559U);
    msg.setSourceEntity(133U);
    msg.setDestination(61680U);
    msg.setDestinationEntity(141U);
    msg.validity = 716U;
    msg.type = 50U;
    msg.utc_year = 8284U;
    msg.utc_month = 231U;
    msg.utc_day = 192U;
    msg.utc_time = 0.353886899176034;
    msg.lat = 0.8805516653144058;
    msg.lon = 0.16806216935067397;
    msg.height = 0.5098823329416021;
    msg.satellites = 104U;
    msg.cog = 0.2424438950215555;
    msg.sog = 0.620510327496464;
    msg.hdop = 0.5343537583063437;
    msg.vdop = 0.613687078992285;
    msg.hacc = 0.8369304225648672;
    msg.vacc = 0.665843818316379;

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
    msg.setTimeStamp(0.7064472863411669);
    msg.setSource(2494U);
    msg.setSourceEntity(220U);
    msg.setDestination(11351U);
    msg.setDestinationEntity(243U);
    msg.time = 0.5711350200187956;
    msg.phi = 0.48628525206599393;
    msg.theta = 0.6121562619646357;
    msg.psi = 0.3331018509392287;
    msg.psi_magnetic = 0.6026855395729167;

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
    msg.setTimeStamp(0.890015080334207);
    msg.setSource(10393U);
    msg.setSourceEntity(139U);
    msg.setDestination(28810U);
    msg.setDestinationEntity(216U);
    msg.time = 0.7191831831317204;
    msg.phi = 0.8195019477500599;
    msg.theta = 0.6457018556305749;
    msg.psi = 0.06675833966677935;
    msg.psi_magnetic = 0.2034327791260081;

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
    msg.setTimeStamp(0.8199277831343429);
    msg.setSource(35009U);
    msg.setSourceEntity(85U);
    msg.setDestination(16337U);
    msg.setDestinationEntity(152U);
    msg.time = 0.7975627731992698;
    msg.phi = 0.9357683805802067;
    msg.theta = 0.25491930782057803;
    msg.psi = 0.382272940304731;
    msg.psi_magnetic = 0.25388082723978933;

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
    msg.setTimeStamp(0.25707134195215353);
    msg.setSource(9471U);
    msg.setSourceEntity(66U);
    msg.setDestination(59939U);
    msg.setDestinationEntity(201U);
    msg.time = 0.9601550298272186;
    msg.x = 0.6420711144740395;
    msg.y = 0.13862652157974809;
    msg.z = 0.8704587102842944;
    msg.timestep = 0.5510753231309191;

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
    msg.setTimeStamp(0.420435315678396);
    msg.setSource(56597U);
    msg.setSourceEntity(119U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(46U);
    msg.time = 0.06426585350271363;
    msg.x = 0.9750657084238421;
    msg.y = 0.9820493664521007;
    msg.z = 0.9674550927130725;
    msg.timestep = 0.12490429034821593;

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
    msg.setTimeStamp(0.1822752470534964);
    msg.setSource(5057U);
    msg.setSourceEntity(127U);
    msg.setDestination(28781U);
    msg.setDestinationEntity(140U);
    msg.time = 0.507961663631621;
    msg.x = 0.14526347958024388;
    msg.y = 0.7914718114449002;
    msg.z = 0.3561618187745197;
    msg.timestep = 0.0010222533048406257;

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
    msg.setTimeStamp(0.5613134910811611);
    msg.setSource(34679U);
    msg.setSourceEntity(0U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(206U);
    msg.time = 0.13698095304664892;
    msg.x = 0.5148594795489879;
    msg.y = 0.5677280791516687;
    msg.z = 0.05221168165160728;

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
    msg.setTimeStamp(0.05658555842505475);
    msg.setSource(10031U);
    msg.setSourceEntity(51U);
    msg.setDestination(6786U);
    msg.setDestinationEntity(242U);
    msg.time = 0.46305877611708357;
    msg.x = 0.4178834908786677;
    msg.y = 0.13189627371584245;
    msg.z = 0.814431059400136;

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
    msg.setTimeStamp(0.0716089031463949);
    msg.setSource(46097U);
    msg.setSourceEntity(246U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(249U);
    msg.time = 0.5746330757668922;
    msg.x = 0.29400984203007885;
    msg.y = 0.3722391317605116;
    msg.z = 0.12701730077253637;

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
    msg.setTimeStamp(0.6745975675192001);
    msg.setSource(61499U);
    msg.setSourceEntity(99U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(164U);
    msg.time = 0.30789445946087757;
    msg.x = 0.8589934463419527;
    msg.y = 0.6751941814827884;
    msg.z = 0.18863458471617456;

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
    msg.setTimeStamp(0.6910820927351089);
    msg.setSource(12041U);
    msg.setSourceEntity(55U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(126U);
    msg.time = 0.2261264167638265;
    msg.x = 0.7541583398508953;
    msg.y = 0.2745260520802931;
    msg.z = 0.15083775401390964;

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
    msg.setTimeStamp(0.8973316774667631);
    msg.setSource(60723U);
    msg.setSourceEntity(142U);
    msg.setDestination(9742U);
    msg.setDestinationEntity(210U);
    msg.time = 0.06893594333232056;
    msg.x = 0.5796941379960958;
    msg.y = 0.9869159798751312;
    msg.z = 0.31246907663895507;

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
    msg.setTimeStamp(0.6170172449771828);
    msg.setSource(15503U);
    msg.setSourceEntity(67U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(105U);
    msg.time = 0.21935705664810246;
    msg.x = 0.23871515940793764;
    msg.y = 0.45200521737995447;
    msg.z = 0.62047668069866;

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
    msg.setTimeStamp(0.6413506650863715);
    msg.setSource(57092U);
    msg.setSourceEntity(75U);
    msg.setDestination(26425U);
    msg.setDestinationEntity(246U);
    msg.time = 0.5126108757340262;
    msg.x = 0.4581456610556859;
    msg.y = 0.1197708991572266;
    msg.z = 0.3248799809172517;

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
    msg.setTimeStamp(0.11276396827362456);
    msg.setSource(41958U);
    msg.setSourceEntity(219U);
    msg.setDestination(52500U);
    msg.setDestinationEntity(184U);
    msg.time = 0.46788425959450863;
    msg.x = 0.9262884823931768;
    msg.y = 0.8314524636126699;
    msg.z = 0.4555451119030005;

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
    msg.setTimeStamp(0.7071201229321222);
    msg.setSource(37860U);
    msg.setSourceEntity(60U);
    msg.setDestination(55293U);
    msg.setDestinationEntity(58U);
    msg.validity = 13U;
    msg.x = 0.08529259478170015;
    msg.y = 0.643212190525363;
    msg.z = 0.1317160328805772;

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
    msg.setTimeStamp(0.038776939141702105);
    msg.setSource(11563U);
    msg.setSourceEntity(170U);
    msg.setDestination(45700U);
    msg.setDestinationEntity(143U);
    msg.validity = 98U;
    msg.x = 0.4993569970273819;
    msg.y = 0.9856026211752561;
    msg.z = 0.2701616337133307;

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
    msg.setTimeStamp(0.5720827763374795);
    msg.setSource(17746U);
    msg.setSourceEntity(6U);
    msg.setDestination(51598U);
    msg.setDestinationEntity(186U);
    msg.validity = 45U;
    msg.x = 0.4215464260596302;
    msg.y = 0.980718966784921;
    msg.z = 0.8149474222574475;

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
    msg.setTimeStamp(0.08056973592727734);
    msg.setSource(51081U);
    msg.setSourceEntity(35U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(206U);
    msg.validity = 188U;
    msg.x = 0.8331252734170989;
    msg.y = 0.8999882298656878;
    msg.z = 0.07962885869750125;

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
    msg.setTimeStamp(0.5740090505802523);
    msg.setSource(64338U);
    msg.setSourceEntity(74U);
    msg.setDestination(1463U);
    msg.setDestinationEntity(45U);
    msg.validity = 231U;
    msg.x = 0.62321344132283;
    msg.y = 0.9468915785611858;
    msg.z = 0.7906327323255715;

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
    msg.setTimeStamp(0.5362787493970369);
    msg.setSource(13615U);
    msg.setSourceEntity(248U);
    msg.setDestination(691U);
    msg.setDestinationEntity(188U);
    msg.validity = 190U;
    msg.x = 0.703212431643105;
    msg.y = 0.2604093336641704;
    msg.z = 0.030787835347357073;

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
    msg.setTimeStamp(0.04057389903426123);
    msg.setSource(56991U);
    msg.setSourceEntity(209U);
    msg.setDestination(59788U);
    msg.setDestinationEntity(38U);
    msg.time = 0.05125686927460804;
    msg.x = 0.6141331820102122;
    msg.y = 0.35332916847200746;
    msg.z = 0.9747338540162176;

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
    msg.setTimeStamp(0.005361825468136128);
    msg.setSource(53138U);
    msg.setSourceEntity(76U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(99U);
    msg.time = 0.8710542317121137;
    msg.x = 0.6572268942759755;
    msg.y = 0.7871613371584231;
    msg.z = 0.2448096916421324;

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
    msg.setTimeStamp(0.5199823130777839);
    msg.setSource(38580U);
    msg.setSourceEntity(135U);
    msg.setDestination(54070U);
    msg.setDestinationEntity(143U);
    msg.time = 0.6459452278920887;
    msg.x = 0.6667215151282989;
    msg.y = 0.6487893704773475;
    msg.z = 0.38826005371480166;

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
    msg.setTimeStamp(0.9328922134825718);
    msg.setSource(2946U);
    msg.setSourceEntity(193U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(29U);
    msg.validity = 25U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.05055906788618536;
    tmp_msg_0.y = 0.026781859175488476;
    tmp_msg_0.z = 0.023387775988137682;
    tmp_msg_0.phi = 0.39320063733616106;
    tmp_msg_0.theta = 0.29176608380344815;
    tmp_msg_0.psi = 0.7358094849507746;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.011996426394485171;

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
    msg.setTimeStamp(0.407005804118317);
    msg.setSource(58363U);
    msg.setSourceEntity(231U);
    msg.setDestination(31775U);
    msg.setDestinationEntity(55U);
    msg.validity = 113U;
    msg.value = 0.13638636661873182;

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
    msg.setTimeStamp(0.1672298353379622);
    msg.setSource(10052U);
    msg.setSourceEntity(224U);
    msg.setDestination(31319U);
    msg.setDestinationEntity(205U);
    msg.validity = 247U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3081548877484537;
    tmp_msg_0.y = 0.271482550869642;
    tmp_msg_0.z = 0.1382728038953217;
    tmp_msg_0.phi = 0.09220472541457225;
    tmp_msg_0.theta = 0.7327312436810929;
    tmp_msg_0.psi = 0.49459977375305253;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.01570045244100038;

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
    msg.setTimeStamp(0.014763474070978444);
    msg.setSource(43836U);
    msg.setSourceEntity(105U);
    msg.setDestination(63114U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6365828929608709;

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
    msg.setTimeStamp(0.2725452625573094);
    msg.setSource(31717U);
    msg.setSourceEntity(69U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8047166511533298;

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
    msg.setTimeStamp(0.7055881435652803);
    msg.setSource(30143U);
    msg.setSourceEntity(46U);
    msg.setDestination(22403U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6010080372764433;

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
    msg.setTimeStamp(0.24507120202013022);
    msg.setSource(56497U);
    msg.setSourceEntity(162U);
    msg.setDestination(21570U);
    msg.setDestinationEntity(243U);
    msg.value = 0.692756751536905;

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
    msg.setTimeStamp(0.5741488281467201);
    msg.setSource(4556U);
    msg.setSourceEntity(134U);
    msg.setDestination(60810U);
    msg.setDestinationEntity(55U);
    msg.value = 0.25648926043428644;

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
    msg.setTimeStamp(0.9928523453976684);
    msg.setSource(47632U);
    msg.setSourceEntity(52U);
    msg.setDestination(32086U);
    msg.setDestinationEntity(156U);
    msg.value = 0.37512052458166045;

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
    msg.setTimeStamp(0.32694299687611394);
    msg.setSource(59494U);
    msg.setSourceEntity(83U);
    msg.setDestination(21158U);
    msg.setDestinationEntity(122U);
    msg.value = 0.39654558595774925;

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
    msg.setTimeStamp(0.8528814359865872);
    msg.setSource(25887U);
    msg.setSourceEntity(240U);
    msg.setDestination(62431U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8521233869659003;

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
    msg.setTimeStamp(0.6674273438403449);
    msg.setSource(41605U);
    msg.setSourceEntity(162U);
    msg.setDestination(63554U);
    msg.setDestinationEntity(51U);
    msg.value = 0.2740528907464186;

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
    msg.setTimeStamp(0.5339102437334967);
    msg.setSource(41761U);
    msg.setSourceEntity(26U);
    msg.setDestination(55364U);
    msg.setDestinationEntity(53U);
    msg.value = 0.2638367577535854;

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
    msg.setTimeStamp(0.2595157343383744);
    msg.setSource(60970U);
    msg.setSourceEntity(254U);
    msg.setDestination(61684U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6038309806036593;

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
    msg.setTimeStamp(0.8643166219900407);
    msg.setSource(36591U);
    msg.setSourceEntity(206U);
    msg.setDestination(31611U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8999980856404973;

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
    msg.setTimeStamp(0.18904835032219947);
    msg.setSource(15479U);
    msg.setSourceEntity(50U);
    msg.setDestination(31370U);
    msg.setDestinationEntity(168U);
    msg.value = 0.722890729105938;

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
    msg.setTimeStamp(0.6805559362246227);
    msg.setSource(27210U);
    msg.setSourceEntity(42U);
    msg.setDestination(61600U);
    msg.setDestinationEntity(218U);
    msg.value = 0.03139956650320841;

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
    msg.setTimeStamp(0.8099968354764564);
    msg.setSource(54419U);
    msg.setSourceEntity(149U);
    msg.setDestination(34762U);
    msg.setDestinationEntity(64U);
    msg.value = 0.8205616327272254;

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
    msg.setTimeStamp(0.3776747854048067);
    msg.setSource(10134U);
    msg.setSourceEntity(107U);
    msg.setDestination(1848U);
    msg.setDestinationEntity(145U);
    msg.value = 0.8174156359522617;

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
    msg.setTimeStamp(0.006296332417838668);
    msg.setSource(17335U);
    msg.setSourceEntity(28U);
    msg.setDestination(23652U);
    msg.setDestinationEntity(2U);
    msg.value = 0.39100485889320413;

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
    msg.setTimeStamp(0.6234154282586425);
    msg.setSource(5624U);
    msg.setSourceEntity(254U);
    msg.setDestination(64369U);
    msg.setDestinationEntity(132U);
    msg.value = 0.01455338169844933;

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
    msg.setTimeStamp(0.46205122357107686);
    msg.setSource(40705U);
    msg.setSourceEntity(102U);
    msg.setDestination(8318U);
    msg.setDestinationEntity(58U);
    msg.value = 0.026195637770020874;

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
    msg.setTimeStamp(0.4619938487582991);
    msg.setSource(7632U);
    msg.setSourceEntity(82U);
    msg.setDestination(33820U);
    msg.setDestinationEntity(20U);
    msg.value = 0.18435929406513085;

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
    msg.setTimeStamp(0.3375254721985165);
    msg.setSource(45615U);
    msg.setSourceEntity(107U);
    msg.setDestination(54038U);
    msg.setDestinationEntity(69U);
    msg.value = 0.120958664065279;

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
    msg.setTimeStamp(0.02706515040324342);
    msg.setSource(51468U);
    msg.setSourceEntity(163U);
    msg.setDestination(498U);
    msg.setDestinationEntity(9U);
    msg.value = 0.7261824234620884;

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
    msg.setTimeStamp(0.33737526933081996);
    msg.setSource(36062U);
    msg.setSourceEntity(170U);
    msg.setDestination(18088U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8872104629183551;

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
    msg.setTimeStamp(0.2957236253817297);
    msg.setSource(17440U);
    msg.setSourceEntity(0U);
    msg.setDestination(49414U);
    msg.setDestinationEntity(236U);
    msg.value = 0.13105569722111887;

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
    msg.setTimeStamp(0.6487154433837155);
    msg.setSource(14897U);
    msg.setSourceEntity(35U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(121U);
    msg.direction = 0.5938764669248391;
    msg.speed = 0.6219661185112901;
    msg.turbulence = 0.9103005003107002;

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
    msg.setTimeStamp(0.8093036557075222);
    msg.setSource(46237U);
    msg.setSourceEntity(88U);
    msg.setDestination(64950U);
    msg.setDestinationEntity(192U);
    msg.direction = 0.579754917061953;
    msg.speed = 0.2393542038069032;
    msg.turbulence = 0.8054766939045125;

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
    msg.setTimeStamp(0.6185041904915626);
    msg.setSource(47473U);
    msg.setSourceEntity(90U);
    msg.setDestination(21325U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.26055711376832835;
    msg.speed = 0.6757941581120908;
    msg.turbulence = 0.3179308700115048;

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
    msg.setTimeStamp(0.9765374624734837);
    msg.setSource(29186U);
    msg.setSourceEntity(7U);
    msg.setDestination(24490U);
    msg.setDestinationEntity(135U);
    msg.value = 0.5240936320977543;

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
    msg.setTimeStamp(0.2633468496245672);
    msg.setSource(41764U);
    msg.setSourceEntity(17U);
    msg.setDestination(5139U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9059077014234571;

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
    msg.setTimeStamp(0.8334724369722145);
    msg.setSource(46073U);
    msg.setSourceEntity(62U);
    msg.setDestination(55210U);
    msg.setDestinationEntity(117U);
    msg.value = 0.914538222192418;

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
    msg.setTimeStamp(0.5905095139528894);
    msg.setSource(19410U);
    msg.setSourceEntity(70U);
    msg.setDestination(57287U);
    msg.setDestinationEntity(193U);
    msg.value.assign("XEVQGQDFGOGLYOMOUXDZHFWOTRFZPJKMBRPZALIEIGPUUKKRJGORJCLAGUBCSJNTRWSHEYJCXEQJXNEKTJRZVCMEUPMATHBBFNQGDJXSVZCLSPGEHIAHOQKTZKMFUCLTXPWFRSRIWKTWXLTIQNCYDYSVBINBIUSBWKWVUXABEMLDCDPZNZABNVNWPGOYOEYEYXHANCUGMZISLWJHRQMHZFNQ");

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
    msg.setTimeStamp(0.5854152210832347);
    msg.setSource(21969U);
    msg.setSourceEntity(125U);
    msg.setDestination(50630U);
    msg.setDestinationEntity(158U);
    msg.value.assign("LTNFOVMDWSXIHARBZGPGVBKXQMZAGGKTQCLSZTXAZNSFRBMXGJEFZBDCKVOTUTXYYQTSDSMKARQLDTPUCONFHPDCXLPOQNUSLUECRENBHTPYZEZIFDQHLVWDMSUANPIQJUIQWYWKENSFAWESIRKEUVGGXIAERBZIYVLOTWKJXVCVOYEJKTRMKUWGYYPNZXQCWH");

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
    msg.setTimeStamp(0.9893682798330249);
    msg.setSource(16381U);
    msg.setSourceEntity(58U);
    msg.setDestination(32500U);
    msg.setDestinationEntity(114U);
    msg.value.assign("FARIAQEVCLGYHBTWNXREEBSAWNNOVUUNKBGGSRBICLFRGSHXEHQLXSUARQIQYMSYPHWPOKVMXFKQOOYGFLUAVTRVDMIGAWWJPUBVEQPOTQJXDVPYXRTPIGAUEMWMSKVDHUVTZJSTDZGCZQMROJIBMTCLNZIRJUUMMKBEEIDGZHFFISCUMGLZYBTRJKHEJPJSKDBZNLYJCAEOXQHZIFOONYNQSNDCKTBHFKDCYYKDWNZXPA");

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
    msg.setTimeStamp(0.38762765922792575);
    msg.setSource(22057U);
    msg.setSourceEntity(60U);
    msg.setDestination(40948U);
    msg.setDestinationEntity(47U);
    const signed char tmp_msg_0[] = {-46, 38, -80, 35, 44, 88, 104, 122, -24, 89, 28, 27, -61, 28, -61, -56, -121, -42, -3, -119, 34, -40, -40, 120, 2, 80, -52, 0, 118, -9, 78, -49, 3, 106, -61, 94, 108, -77, -100, 55, -84, -58, 36, -110, 73, -92, 41, -55, -43, 7, 0, 4, -11, -10, -69, 121, -88, 16, 3, -40, -9, -29, 81, -123, 74, 108, 109, -99, -107, 83, 71, 96, 126, 42, -76, 98, 81, 100, -67, -93, 78, -59, -111, 115, -101, -18, 40, -21, -49, 68, 56, -45, -52, -44, -80, -95, -41, 101, -111, 100, 113, -52, 19, -117, 17, 56, 58, -99, -48, -45, -36, -81, -119, -4, 120, -33, 75, -59, -29, -40, -76, 96, -127, 82, -91, 103, 60, -15, -11, 109, 107, -3, -1, -62, 53, 61, -77, -1, -20, 117, -72, 93, 124, 1, 90, -48, -47, 95, 115, -103, -75, -114, 72, -32, -68, 108, -82, 80, 70, 47, -94, 54, -8, 117, -117, -48, -123, -106, 16, -8, 85, 71, 31, 19, -106, 86, 39, 105, -103, -94, -91, 94, 119, -105};
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
    msg.setTimeStamp(0.8389786611060432);
    msg.setSource(23580U);
    msg.setSourceEntity(91U);
    msg.setDestination(34657U);
    msg.setDestinationEntity(234U);
    const signed char tmp_msg_0[] = {97, -39, 71, 41, -54, 7, 25, 122, -20, -110, 101, -41, -97, -75, -10, -55, -82, 46, 77, -33, 94, -127, -72, -45, 0, 44, -56, -57, -58, -111, -26, -123, -102, 100, -17, 45, 58, 25, -16, -115, -102, 8, 8, 114, 34, -126, 20, -15, 56, 9, -56, -10, -98, 110, 52, 118, 45, 84, 34, -91, 126, 103, -85, 6, -109, -109, 74, -114};
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
    msg.setTimeStamp(0.1653645135338082);
    msg.setSource(32810U);
    msg.setSourceEntity(84U);
    msg.setDestination(15246U);
    msg.setDestinationEntity(0U);
    const signed char tmp_msg_0[] = {-20, -83, 50, 124, -39, -31, -13, -60, 8, 23, 67, 23, 8, 43, 102, -56, 72, 102, -52, -106, -10, -95, 62, -110, -114, 113, 119, 22, -92, -100, -23, 10, -97, 6, -22, 30, -104, -38};
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
    msg.setTimeStamp(0.11056534963136233);
    msg.setSource(47574U);
    msg.setSourceEntity(173U);
    msg.setDestination(62238U);
    msg.setDestinationEntity(36U);
    msg.value = 0.7209645608814662;

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
    msg.setTimeStamp(0.6748923849510934);
    msg.setSource(25277U);
    msg.setSourceEntity(70U);
    msg.setDestination(34326U);
    msg.setDestinationEntity(152U);
    msg.value = 0.19972533683018945;

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
    msg.setTimeStamp(0.43257664656269657);
    msg.setSource(40747U);
    msg.setSourceEntity(140U);
    msg.setDestination(61764U);
    msg.setDestinationEntity(136U);
    msg.value = 0.3157713927061554;

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
    msg.setTimeStamp(0.6319554819990059);
    msg.setSource(28911U);
    msg.setSourceEntity(206U);
    msg.setDestination(50843U);
    msg.setDestinationEntity(64U);
    msg.type = 195U;
    msg.frequency = 2317407207U;
    msg.min_range = 56307U;
    msg.max_range = 18617U;
    msg.bits_per_point = 250U;
    msg.scale_factor = 0.37384453713619414;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2975234620860945;
    tmp_msg_0.beam_height = 0.4170343270946638;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-122, 21, -28, 57, -71, -122, -56, 19, 82, 102, -72, 46, 38, -89, -42, 25, -40, -18, -117, 125, -42, -48, -76, -74, -16, -5, 56, 85, 100, 84, -121, 19, -107, 97, -38, 60, -25, 83, 88, 59, 25, 6, -11};
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
    msg.setTimeStamp(0.8527699716717597);
    msg.setSource(57567U);
    msg.setSourceEntity(237U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(129U);
    msg.type = 177U;
    msg.frequency = 3024349483U;
    msg.min_range = 51178U;
    msg.max_range = 9445U;
    msg.bits_per_point = 104U;
    msg.scale_factor = 0.8446695808359039;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.41855272072443184;
    tmp_msg_0.beam_height = 0.7652322297135755;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {101, 96, 4, 103, -127, -106, 39, -41, 77, -124, 13, -30, -75, -100, -112, 71, 64, 103, -15, -86, 85, -122, 87, -122, -89, 62, 123, 44, 24, -12, 78, -15, -109, -114, 105, 31, -118, 55, 105, -47, -104, 79, -36, -60, 58, 119, 86, -10, -85, -90, 94, 29, 14, 12, 107, 28, 82, -26, 71, -35, 62, 35, -3, -9, -26, -60, 98, 101, 82, -98, 13, 25, -121, -75, -17, 0, 48, 9, -98, 14, -82, 6, 66, 109, -114, -56, -113, 4, -115, -29, -5, -94, -94, 53, 25, 54, 114, 30, -116, 125, 51, 9, 68, 95, -18, 77, 55, -39, 67, -30, 123, 102, 91, 85, 84, -42, 31, 71, -35, 70, 64, -96, 42, -111, -58, 1, -33, 92, -123, -127, 34, -10, -107, -57, 40, -108, -52, 119, -113, 115, -27, -121, -122, 120, 72, -47, 21, 89, 53, -21, 71, -64, -57, 36, -69, 119, 103, -107, 63, 2, -107, 39, -52, -122, 17, -109, -50, 48, -40, 50, 46, 34, -4};
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
    msg.setTimeStamp(0.6030686586524865);
    msg.setSource(51734U);
    msg.setSourceEntity(54U);
    msg.setDestination(61542U);
    msg.setDestinationEntity(251U);
    msg.type = 243U;
    msg.frequency = 14728544U;
    msg.min_range = 48014U;
    msg.max_range = 9468U;
    msg.bits_per_point = 224U;
    msg.scale_factor = 0.40151739635713857;
    const signed char tmp_msg_0[] = {71, 63, -10, -88, 81, -119, -33, -72, -34, 29, -14, 63, -93, -47, 59, -48, -126, 26, -91, -49, -71, -75, -94, -28, 124, 2, -81, 88, -90, 19, 26, 23, 45, -98, 30, 1, 94, -94, 114, -96};
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
    msg.setTimeStamp(0.21838317384482553);
    msg.setSource(749U);
    msg.setSourceEntity(26U);
    msg.setDestination(12867U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.90489509185177);
    msg.setSource(1039U);
    msg.setSourceEntity(227U);
    msg.setDestination(45733U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.40563949598065563);
    msg.setSource(1658U);
    msg.setSourceEntity(202U);
    msg.setDestination(59788U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.023008712792431107);
    msg.setSource(36458U);
    msg.setSourceEntity(72U);
    msg.setDestination(50468U);
    msg.setDestinationEntity(121U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.9297382506298508);
    msg.setSource(60956U);
    msg.setSourceEntity(188U);
    msg.setDestination(26854U);
    msg.setDestinationEntity(213U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.784973276131931);
    msg.setSource(4587U);
    msg.setSourceEntity(225U);
    msg.setDestination(26615U);
    msg.setDestinationEntity(141U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.7908891301908241);
    msg.setSource(25572U);
    msg.setSourceEntity(181U);
    msg.setDestination(62013U);
    msg.setDestinationEntity(24U);
    msg.value = 0.1769720630397862;
    msg.confidence = 0.08205858630930318;
    msg.opmodes.assign("XNPOSRIMLHXWYQUODQUZCYIBIJIIUGTZVIKJNLMBTYPQJFQSVIUHJHQCVQGRLWHPZWYQBCAGXVHPIPFHZMMSFOYSDCVYJNWAEDUOVGGGFROAASMRSTNYJKOEZSRUCSYOAPPREPVKDCQUZMRBGCXFLIZOW");

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
    msg.setTimeStamp(0.4093202175461199);
    msg.setSource(39783U);
    msg.setSourceEntity(57U);
    msg.setDestination(61804U);
    msg.setDestinationEntity(82U);
    msg.value = 0.8605726835861303;
    msg.confidence = 0.3554045255724575;
    msg.opmodes.assign("HHKQFHDPINTUSFCDRBNWDUXVUHKDCIBMAYNNWEISLWJ");

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
    msg.setTimeStamp(0.9270199483387414);
    msg.setSource(8378U);
    msg.setSourceEntity(134U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(185U);
    msg.value = 0.2129139974715798;
    msg.confidence = 0.11316002726856733;
    msg.opmodes.assign("ZQCMOFHWZVEPOGSHUKILIXZJRVXVQBLVGNHMKKYUBUIWLCSTCCGPGCMNXODASAPYTTFRJUMIBVDPPBYFYGYVDAXRGIPTZSGYZSNDNKETUINQWQCDAMXRWBPSROICTJVRFUJHKIZNWPHF");

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
    msg.setTimeStamp(0.2444614792846307);
    msg.setSource(60437U);
    msg.setSourceEntity(112U);
    msg.setDestination(45688U);
    msg.setDestinationEntity(216U);
    msg.itow = 173558175U;
    msg.lat = 0.9344548007352976;
    msg.lon = 0.4187531950844857;
    msg.height_ell = 0.646707207615015;
    msg.height_sea = 0.3519588137231565;
    msg.hacc = 0.5789801566222588;
    msg.vacc = 0.9527057372719747;
    msg.vel_n = 0.4818768721613672;
    msg.vel_e = 0.0049142413150548014;
    msg.vel_d = 0.3378869748159117;
    msg.speed = 0.231324279439457;
    msg.gspeed = 0.24821176102839504;
    msg.heading = 0.7536017907175411;
    msg.sacc = 0.5843727033364363;
    msg.cacc = 0.4416888123225402;

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
    msg.setTimeStamp(0.09871672445450486);
    msg.setSource(21130U);
    msg.setSourceEntity(92U);
    msg.setDestination(4678U);
    msg.setDestinationEntity(6U);
    msg.itow = 403368237U;
    msg.lat = 0.0032717960896058162;
    msg.lon = 0.18128294202409645;
    msg.height_ell = 0.9961278298987664;
    msg.height_sea = 0.08346131523142353;
    msg.hacc = 0.10775909569964337;
    msg.vacc = 0.12421919159866224;
    msg.vel_n = 0.20839008546994908;
    msg.vel_e = 0.554624164555488;
    msg.vel_d = 0.5873708417434041;
    msg.speed = 0.8346814382633054;
    msg.gspeed = 0.0695437169975135;
    msg.heading = 0.9780192172924908;
    msg.sacc = 0.6006941264031465;
    msg.cacc = 0.3430540633924335;

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
    msg.setTimeStamp(0.4841548888731906);
    msg.setSource(59126U);
    msg.setSourceEntity(121U);
    msg.setDestination(28005U);
    msg.setDestinationEntity(48U);
    msg.itow = 3278371874U;
    msg.lat = 0.6259248144122733;
    msg.lon = 0.6219073166033554;
    msg.height_ell = 0.2873731801003524;
    msg.height_sea = 0.22207751453691327;
    msg.hacc = 0.8830198870517637;
    msg.vacc = 0.5011314441184218;
    msg.vel_n = 0.7521022947398341;
    msg.vel_e = 0.5573889033710245;
    msg.vel_d = 0.9935796732362931;
    msg.speed = 0.8783554479675558;
    msg.gspeed = 0.653339585709488;
    msg.heading = 0.3020128741042556;
    msg.sacc = 0.050161965448269674;
    msg.cacc = 0.1914629578415522;

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
    msg.setTimeStamp(0.5647740595607531);
    msg.setSource(48124U);
    msg.setSourceEntity(231U);
    msg.setDestination(50745U);
    msg.setDestinationEntity(80U);
    msg.id = 127U;
    msg.value = 0.6451480486924059;

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
    msg.setTimeStamp(0.1765809036646412);
    msg.setSource(12776U);
    msg.setSourceEntity(101U);
    msg.setDestination(4300U);
    msg.setDestinationEntity(16U);
    msg.id = 156U;
    msg.value = 0.7731807753568908;

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
    msg.setTimeStamp(0.7211457137941897);
    msg.setSource(3605U);
    msg.setSourceEntity(108U);
    msg.setDestination(29462U);
    msg.setDestinationEntity(220U);
    msg.id = 166U;
    msg.value = 0.005118448208532245;

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
    msg.setTimeStamp(0.7179091156527563);
    msg.setSource(21105U);
    msg.setSourceEntity(63U);
    msg.setDestination(4589U);
    msg.setDestinationEntity(179U);
    msg.x = 0.3254228493212771;
    msg.y = 0.21812542527399192;
    msg.z = 0.40471273301489974;
    msg.phi = 0.9000273733710771;
    msg.theta = 0.2697208164751135;
    msg.psi = 0.13275020865031895;

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
    msg.setTimeStamp(0.9248988068077248);
    msg.setSource(56490U);
    msg.setSourceEntity(107U);
    msg.setDestination(12970U);
    msg.setDestinationEntity(59U);
    msg.x = 0.3845251629326547;
    msg.y = 0.2657664253024511;
    msg.z = 0.26387290934316276;
    msg.phi = 0.309718274850469;
    msg.theta = 0.11897107210528635;
    msg.psi = 0.8159117218262314;

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
    msg.setTimeStamp(0.8183392033507468);
    msg.setSource(4227U);
    msg.setSourceEntity(41U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(56U);
    msg.x = 0.2301769210987208;
    msg.y = 0.16770158278713343;
    msg.z = 0.04400861041756132;
    msg.phi = 0.7922632064639055;
    msg.theta = 0.025306562553513712;
    msg.psi = 0.5651287271564398;

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
    msg.setTimeStamp(0.9066345069059251);
    msg.setSource(10451U);
    msg.setSourceEntity(229U);
    msg.setDestination(41043U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.24465269473112983;
    msg.beam_height = 0.5242371388761035;

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
    msg.setTimeStamp(0.37245180462153493);
    msg.setSource(12556U);
    msg.setSourceEntity(156U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(54U);
    msg.beam_width = 0.3582705622650152;
    msg.beam_height = 0.9233734764259963;

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
    msg.setTimeStamp(0.18595342223589806);
    msg.setSource(14627U);
    msg.setSourceEntity(15U);
    msg.setDestination(18469U);
    msg.setDestinationEntity(216U);
    msg.beam_width = 0.5637350859463043;
    msg.beam_height = 0.7805606926218055;

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
    msg.setTimeStamp(0.44827391640466474);
    msg.setSource(64335U);
    msg.setSourceEntity(12U);
    msg.setDestination(46010U);
    msg.setDestinationEntity(137U);
    msg.sane = 90U;

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
    msg.setTimeStamp(0.6288404493528289);
    msg.setSource(46355U);
    msg.setSourceEntity(69U);
    msg.setDestination(37001U);
    msg.setDestinationEntity(60U);
    msg.sane = 107U;

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
    msg.setTimeStamp(0.27877632514544215);
    msg.setSource(2600U);
    msg.setSourceEntity(80U);
    msg.setDestination(50031U);
    msg.setDestinationEntity(103U);
    msg.sane = 65U;

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
    msg.setTimeStamp(0.4022571529503578);
    msg.setSource(3561U);
    msg.setSourceEntity(202U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(128U);
    msg.value = 0.3278603108044166;

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
    msg.setTimeStamp(0.3843514956377784);
    msg.setSource(35592U);
    msg.setSourceEntity(228U);
    msg.setDestination(49598U);
    msg.setDestinationEntity(101U);
    msg.value = 0.49891816854322313;

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
    msg.setTimeStamp(0.3148340968016077);
    msg.setSource(13813U);
    msg.setSourceEntity(42U);
    msg.setDestination(35738U);
    msg.setDestinationEntity(56U);
    msg.value = 0.38830211530791536;

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
    msg.setTimeStamp(0.2541814594347396);
    msg.setSource(45477U);
    msg.setSourceEntity(98U);
    msg.setDestination(19832U);
    msg.setDestinationEntity(140U);
    msg.value = 0.3802064967553471;

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
    msg.setTimeStamp(0.6637272575007175);
    msg.setSource(39458U);
    msg.setSourceEntity(157U);
    msg.setDestination(40257U);
    msg.setDestinationEntity(70U);
    msg.value = 0.721829970170687;

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
    msg.setTimeStamp(0.15673792969277567);
    msg.setSource(25916U);
    msg.setSourceEntity(172U);
    msg.setDestination(12288U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8588792613019249;

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
    msg.setTimeStamp(0.0550502601709979);
    msg.setSource(16237U);
    msg.setSourceEntity(102U);
    msg.setDestination(40790U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6160914806683528;

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
    msg.setTimeStamp(0.21161188060946956);
    msg.setSource(45843U);
    msg.setSourceEntity(133U);
    msg.setDestination(59773U);
    msg.setDestinationEntity(224U);
    msg.value = 0.7685532902073664;

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
    msg.setTimeStamp(0.6448114329913415);
    msg.setSource(526U);
    msg.setSourceEntity(47U);
    msg.setDestination(5826U);
    msg.setDestinationEntity(134U);
    msg.value = 0.20362537124411784;

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
    msg.setTimeStamp(0.7186452715458026);
    msg.setSource(23170U);
    msg.setSourceEntity(112U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(244U);
    msg.value = 0.7789792725371806;

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
    msg.setTimeStamp(0.22767797061106487);
    msg.setSource(3855U);
    msg.setSourceEntity(151U);
    msg.setDestination(21587U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6445981967726903;

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
    msg.setTimeStamp(0.6516173899325595);
    msg.setSource(46594U);
    msg.setSourceEntity(150U);
    msg.setDestination(60111U);
    msg.setDestinationEntity(41U);
    msg.value = 0.12176294301351853;

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
    msg.setTimeStamp(0.3182427913041407);
    msg.setSource(9578U);
    msg.setSourceEntity(91U);
    msg.setDestination(58846U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9149912565351036;

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
    msg.setTimeStamp(0.11550416841035793);
    msg.setSource(61803U);
    msg.setSourceEntity(143U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6943267313623476;

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
    msg.setTimeStamp(0.07797606708434202);
    msg.setSource(24379U);
    msg.setSourceEntity(88U);
    msg.setDestination(39718U);
    msg.setDestinationEntity(247U);
    msg.value = 0.3763669654133416;

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
    msg.setTimeStamp(0.030804206880957197);
    msg.setSource(65354U);
    msg.setSourceEntity(133U);
    msg.setDestination(46099U);
    msg.setDestinationEntity(202U);
    msg.value = 0.140234710552943;

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
    msg.setTimeStamp(0.7188242624161545);
    msg.setSource(35601U);
    msg.setSourceEntity(142U);
    msg.setDestination(60310U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7361290064495758;

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
    msg.setTimeStamp(0.7322311703963861);
    msg.setSource(48565U);
    msg.setSourceEntity(227U);
    msg.setDestination(32654U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9139549848528318;

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
    msg.setTimeStamp(0.7403288913400689);
    msg.setSource(7322U);
    msg.setSourceEntity(228U);
    msg.setDestination(42289U);
    msg.setDestinationEntity(174U);
    msg.value = 0.648208659681585;

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
    msg.setTimeStamp(0.6602578439047138);
    msg.setSource(20276U);
    msg.setSourceEntity(58U);
    msg.setDestination(5661U);
    msg.setDestinationEntity(237U);
    msg.value = 0.43402720730196165;

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
    msg.setTimeStamp(0.5666155784995284);
    msg.setSource(27164U);
    msg.setSourceEntity(12U);
    msg.setDestination(27213U);
    msg.setDestinationEntity(128U);
    msg.value = 0.982484076800015;

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
    msg.setTimeStamp(0.5193882293564382);
    msg.setSource(13878U);
    msg.setSourceEntity(24U);
    msg.setDestination(48353U);
    msg.setDestinationEntity(133U);
    msg.value = 0.7957962708946297;

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
    msg.setTimeStamp(0.6794756761055484);
    msg.setSource(13931U);
    msg.setSourceEntity(120U);
    msg.setDestination(17119U);
    msg.setDestinationEntity(31U);
    msg.value = 0.66068499570616;

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
    msg.setTimeStamp(0.5197553709443737);
    msg.setSource(23691U);
    msg.setSourceEntity(7U);
    msg.setDestination(34916U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6575512334913141;

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
    msg.setTimeStamp(0.7139204880401605);
    msg.setSource(63505U);
    msg.setSourceEntity(81U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(174U);
    msg.validity = 60484U;
    msg.type = 163U;
    msg.tow = 424257373U;
    msg.base_lat = 0.8052428085094893;
    msg.base_lon = 0.9674791771456918;
    msg.base_height = 0.34902519233932416;
    msg.n = 0.27021563890410183;
    msg.e = 0.8731417644628982;
    msg.d = 0.6254201969780129;
    msg.v_n = 0.6635671253248774;
    msg.v_e = 0.17595574072415743;
    msg.v_d = 0.9005859668895227;
    msg.satellites = 176U;
    msg.iar_hyp = 55375U;
    msg.iar_ratio = 0.674656512124241;

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
    msg.setTimeStamp(0.6107035456713154);
    msg.setSource(32936U);
    msg.setSourceEntity(184U);
    msg.setDestination(63340U);
    msg.setDestinationEntity(39U);
    msg.validity = 50419U;
    msg.type = 106U;
    msg.tow = 1035282981U;
    msg.base_lat = 0.44783935925276497;
    msg.base_lon = 0.37182970237573165;
    msg.base_height = 0.6861810300675971;
    msg.n = 0.5828187553570406;
    msg.e = 0.40609080954681487;
    msg.d = 0.9985836921638483;
    msg.v_n = 0.5545502734585309;
    msg.v_e = 0.4632752207101497;
    msg.v_d = 0.8532022815831719;
    msg.satellites = 123U;
    msg.iar_hyp = 20670U;
    msg.iar_ratio = 0.28928688771624533;

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
    msg.setTimeStamp(0.03317212761845678);
    msg.setSource(47341U);
    msg.setSourceEntity(227U);
    msg.setDestination(34887U);
    msg.setDestinationEntity(48U);
    msg.validity = 48549U;
    msg.type = 233U;
    msg.tow = 2424913633U;
    msg.base_lat = 0.3778448191129933;
    msg.base_lon = 0.28132760689458447;
    msg.base_height = 0.7263534434077197;
    msg.n = 0.06886383003075491;
    msg.e = 0.9753246901408346;
    msg.d = 0.8248145154203376;
    msg.v_n = 0.38690951763119485;
    msg.v_e = 0.25367516080351715;
    msg.v_d = 0.6166726681202784;
    msg.satellites = 10U;
    msg.iar_hyp = 13753U;
    msg.iar_ratio = 0.682043553867687;

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
    msg.setTimeStamp(0.7857235594499178);
    msg.setSource(9030U);
    msg.setSourceEntity(47U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(111U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.31720890149719017;
    tmp_msg_0.lon = 0.5499504583694987;
    tmp_msg_0.height = 0.6731630487655531;
    tmp_msg_0.x = 0.02045992462219881;
    tmp_msg_0.y = 0.7558705068577539;
    tmp_msg_0.z = 0.8709991040047705;
    tmp_msg_0.phi = 0.12674349506131322;
    tmp_msg_0.theta = 0.47002398443464843;
    tmp_msg_0.psi = 0.415847787848484;
    tmp_msg_0.u = 0.18805045665319586;
    tmp_msg_0.v = 0.9371998268484201;
    tmp_msg_0.w = 0.6050217969744205;
    tmp_msg_0.vx = 0.259059066610003;
    tmp_msg_0.vy = 0.21961717525573698;
    tmp_msg_0.vz = 0.6148540794267041;
    tmp_msg_0.p = 0.4914687020075694;
    tmp_msg_0.q = 0.23969370963236902;
    tmp_msg_0.r = 0.3102382967789168;
    tmp_msg_0.depth = 0.11186834982772509;
    tmp_msg_0.alt = 0.9375164879485998;
    msg.state.set(tmp_msg_0);
    msg.type = 24U;

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
    msg.setTimeStamp(0.096351808538505);
    msg.setSource(7167U);
    msg.setSourceEntity(127U);
    msg.setDestination(20771U);
    msg.setDestinationEntity(107U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9891694731154067;
    tmp_msg_0.lon = 0.8883108735559325;
    tmp_msg_0.height = 0.260018283625605;
    tmp_msg_0.x = 0.1781712455203861;
    tmp_msg_0.y = 0.8248055109129391;
    tmp_msg_0.z = 0.8330771308751214;
    tmp_msg_0.phi = 0.8375279031772814;
    tmp_msg_0.theta = 0.18718614581657866;
    tmp_msg_0.psi = 0.3008366889142956;
    tmp_msg_0.u = 0.7674283252030859;
    tmp_msg_0.v = 0.6345875149474953;
    tmp_msg_0.w = 0.1884052387556714;
    tmp_msg_0.vx = 0.3043312924626196;
    tmp_msg_0.vy = 0.006643363287505366;
    tmp_msg_0.vz = 0.9193099094661483;
    tmp_msg_0.p = 0.9404373071535447;
    tmp_msg_0.q = 0.01678143097166085;
    tmp_msg_0.r = 0.7106292007759903;
    tmp_msg_0.depth = 0.35355753204360596;
    tmp_msg_0.alt = 0.5452570265018774;
    msg.state.set(tmp_msg_0);
    msg.type = 98U;

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
    msg.setTimeStamp(0.663912821177992);
    msg.setSource(54214U);
    msg.setSourceEntity(133U);
    msg.setDestination(52884U);
    msg.setDestinationEntity(233U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.714505805568952;
    tmp_msg_0.lon = 0.8552030300487277;
    tmp_msg_0.height = 0.15994594033417764;
    tmp_msg_0.x = 0.9139362700011695;
    tmp_msg_0.y = 0.7369959851197527;
    tmp_msg_0.z = 0.7010589288250858;
    tmp_msg_0.phi = 0.07386576938419076;
    tmp_msg_0.theta = 0.10897363735261201;
    tmp_msg_0.psi = 0.8016869261663929;
    tmp_msg_0.u = 0.5671809925462002;
    tmp_msg_0.v = 0.6753669388311351;
    tmp_msg_0.w = 0.4047587286246973;
    tmp_msg_0.vx = 0.8108498065553064;
    tmp_msg_0.vy = 0.22860458632220115;
    tmp_msg_0.vz = 0.5686193707104041;
    tmp_msg_0.p = 0.20420137588795695;
    tmp_msg_0.q = 0.9515018483042448;
    tmp_msg_0.r = 0.6173176587847715;
    tmp_msg_0.depth = 0.6784603730264822;
    tmp_msg_0.alt = 0.4405325269047108;
    msg.state.set(tmp_msg_0);
    msg.type = 127U;

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
    msg.setTimeStamp(0.11656672649993094);
    msg.setSource(5699U);
    msg.setSourceEntity(252U);
    msg.setDestination(16287U);
    msg.setDestinationEntity(18U);
    msg.value = 0.32009364322956047;

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
    msg.setTimeStamp(0.37367133579464096);
    msg.setSource(40654U);
    msg.setSourceEntity(159U);
    msg.setDestination(35955U);
    msg.setDestinationEntity(205U);
    msg.value = 0.8144477627237736;

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
    msg.setTimeStamp(0.7415801807701518);
    msg.setSource(65060U);
    msg.setSourceEntity(254U);
    msg.setDestination(47570U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5776928208496186;

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
    msg.setTimeStamp(0.5665550039430521);
    msg.setSource(34575U);
    msg.setSourceEntity(7U);
    msg.setDestination(26540U);
    msg.setDestinationEntity(132U);
    msg.value = 0.3885658573999029;

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
    msg.setTimeStamp(0.6825991279783985);
    msg.setSource(49228U);
    msg.setSourceEntity(92U);
    msg.setDestination(5305U);
    msg.setDestinationEntity(121U);
    msg.value = 0.38736644049455105;

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
    msg.setTimeStamp(0.14912460314008658);
    msg.setSource(59728U);
    msg.setSourceEntity(142U);
    msg.setDestination(41179U);
    msg.setDestinationEntity(64U);
    msg.value = 0.7787864520853042;

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
    msg.setTimeStamp(0.7973306168254789);
    msg.setSource(28550U);
    msg.setSourceEntity(246U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(70U);
    msg.value = 0.021286015830715432;

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
    msg.setTimeStamp(0.6194181341256273);
    msg.setSource(51381U);
    msg.setSourceEntity(226U);
    msg.setDestination(7400U);
    msg.setDestinationEntity(187U);
    msg.value = 0.3420471340686595;

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
    msg.setTimeStamp(0.8568449217806862);
    msg.setSource(37999U);
    msg.setSourceEntity(220U);
    msg.setDestination(28953U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6614548983762355;

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
    msg.setTimeStamp(0.38564354152716906);
    msg.setSource(20617U);
    msg.setSourceEntity(86U);
    msg.setDestination(54800U);
    msg.setDestinationEntity(15U);
    msg.value = 0.6918351834261113;

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
    msg.setTimeStamp(0.7507316978540189);
    msg.setSource(49505U);
    msg.setSourceEntity(164U);
    msg.setDestination(44204U);
    msg.setDestinationEntity(7U);
    msg.value = 0.4687008593484736;

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
    msg.setTimeStamp(0.4577645951397056);
    msg.setSource(32029U);
    msg.setSourceEntity(30U);
    msg.setDestination(6592U);
    msg.setDestinationEntity(116U);
    msg.value = 0.34517936393922655;

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
    msg.setTimeStamp(0.5987540070243902);
    msg.setSource(35328U);
    msg.setSourceEntity(103U);
    msg.setDestination(2257U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4965651545051246;

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
    msg.setTimeStamp(0.16861332898744652);
    msg.setSource(18519U);
    msg.setSourceEntity(127U);
    msg.setDestination(62248U);
    msg.setDestinationEntity(32U);
    msg.value = 0.029807592410807326;

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
    msg.setTimeStamp(0.486491545854179);
    msg.setSource(32964U);
    msg.setSourceEntity(115U);
    msg.setDestination(50460U);
    msg.setDestinationEntity(249U);
    msg.value = 0.18799982368073787;

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
    msg.setTimeStamp(0.7357506794522722);
    msg.setSource(8406U);
    msg.setSourceEntity(109U);
    msg.setDestination(4429U);
    msg.setDestinationEntity(56U);
    msg.id = 15U;
    msg.zoom = 142U;
    msg.action = 9U;

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
    msg.setTimeStamp(0.2615198686788782);
    msg.setSource(22038U);
    msg.setSourceEntity(165U);
    msg.setDestination(27017U);
    msg.setDestinationEntity(205U);
    msg.id = 231U;
    msg.zoom = 34U;
    msg.action = 37U;

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
    msg.setTimeStamp(0.7640225751550288);
    msg.setSource(62428U);
    msg.setSourceEntity(219U);
    msg.setDestination(11421U);
    msg.setDestinationEntity(34U);
    msg.id = 18U;
    msg.zoom = 166U;
    msg.action = 91U;

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
    msg.setTimeStamp(0.9401705265426682);
    msg.setSource(5020U);
    msg.setSourceEntity(102U);
    msg.setDestination(58627U);
    msg.setDestinationEntity(17U);
    msg.id = 116U;
    msg.value = 0.6934618865986057;

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
    msg.setTimeStamp(0.8920267967236618);
    msg.setSource(54081U);
    msg.setSourceEntity(144U);
    msg.setDestination(14543U);
    msg.setDestinationEntity(90U);
    msg.id = 111U;
    msg.value = 0.8102161497062557;

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
    msg.setTimeStamp(0.8007072094643689);
    msg.setSource(17020U);
    msg.setSourceEntity(119U);
    msg.setDestination(58503U);
    msg.setDestinationEntity(115U);
    msg.id = 118U;
    msg.value = 0.5550775170863707;

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
    msg.setTimeStamp(0.3810365659645343);
    msg.setSource(11726U);
    msg.setSourceEntity(184U);
    msg.setDestination(27556U);
    msg.setDestinationEntity(246U);
    msg.id = 200U;
    msg.value = 0.144265639081522;

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
    msg.setTimeStamp(0.5984440823690861);
    msg.setSource(44162U);
    msg.setSourceEntity(171U);
    msg.setDestination(37112U);
    msg.setDestinationEntity(134U);
    msg.id = 67U;
    msg.value = 0.9318225110885023;

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
    msg.setTimeStamp(0.2620093135899356);
    msg.setSource(15511U);
    msg.setSourceEntity(193U);
    msg.setDestination(25856U);
    msg.setDestinationEntity(228U);
    msg.id = 11U;
    msg.value = 0.15084622229002842;

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
    msg.setTimeStamp(0.9909159531285714);
    msg.setSource(26314U);
    msg.setSourceEntity(4U);
    msg.setDestination(53933U);
    msg.setDestinationEntity(200U);
    msg.id = 88U;
    msg.angle = 0.1361100654726265;

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
    msg.setTimeStamp(0.5523991388256293);
    msg.setSource(48811U);
    msg.setSourceEntity(180U);
    msg.setDestination(15364U);
    msg.setDestinationEntity(122U);
    msg.id = 130U;
    msg.angle = 0.477519762291606;

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
    msg.setTimeStamp(0.5819211072829832);
    msg.setSource(38853U);
    msg.setSourceEntity(26U);
    msg.setDestination(16806U);
    msg.setDestinationEntity(149U);
    msg.id = 244U;
    msg.angle = 0.6724930912905155;

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
    msg.setTimeStamp(0.5987757214251191);
    msg.setSource(34989U);
    msg.setSourceEntity(50U);
    msg.setDestination(59991U);
    msg.setDestinationEntity(171U);
    msg.op = 225U;
    msg.actions.assign("RSZVXJYCIKABKTIMHWENUOAHZFWMRJVPTCZZBAGBXZZXEXQAHAOYRAFIFPFTYAHQDZDQRAGNVOEPWWRJWIVPURMOGWGBGYEXNGCD");

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
    msg.setTimeStamp(0.5342033087086259);
    msg.setSource(24738U);
    msg.setSourceEntity(113U);
    msg.setDestination(6221U);
    msg.setDestinationEntity(66U);
    msg.op = 168U;
    msg.actions.assign("MRIBIDPBBUDZHLGNKVSVTTLKPYVTJHSYBANGSQODSYKTB");

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
    msg.setTimeStamp(0.24809267920357658);
    msg.setSource(36932U);
    msg.setSourceEntity(10U);
    msg.setDestination(46140U);
    msg.setDestinationEntity(14U);
    msg.op = 238U;
    msg.actions.assign("CMGCZXZCZVAIISUEQILPMACWENLQCJDEPKYARWKUYBWYEUJMYGDHAGHMYJIOVZDTVBFRPXDOUWWAHRQCQWVUN");

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
    msg.setTimeStamp(0.47398453300972987);
    msg.setSource(175U);
    msg.setSourceEntity(57U);
    msg.setDestination(48946U);
    msg.setDestinationEntity(68U);
    msg.actions.assign("KLHSKOKDOHZSBLEVFIVPURAXVHFCEOYQSNJCZZTVLZWJXQHDASVBPMJOQNGKKCBNLWKYRLNWHBTXRCFJNBBRITLAANXGMTFZFSDYGA");

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
    msg.setTimeStamp(0.4281742611136855);
    msg.setSource(6059U);
    msg.setSourceEntity(77U);
    msg.setDestination(28798U);
    msg.setDestinationEntity(76U);
    msg.actions.assign("ODFHVJQJTOCRNMPHOHBPKEKOQDMIXITGLFEXEVOCWMLCSLBWNRDJGLVXJMLXDWUDJAXJQYFHLZFAJVKOPHIP");

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
    msg.setTimeStamp(0.7483240602871823);
    msg.setSource(24086U);
    msg.setSourceEntity(247U);
    msg.setDestination(28662U);
    msg.setDestinationEntity(196U);
    msg.actions.assign("KAUKQTVDXK");

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
    msg.setTimeStamp(0.14497791876110477);
    msg.setSource(48327U);
    msg.setSourceEntity(82U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(234U);
    msg.button = 250U;
    msg.value = 242U;

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
    msg.setTimeStamp(0.38156882319254526);
    msg.setSource(44614U);
    msg.setSourceEntity(198U);
    msg.setDestination(2909U);
    msg.setDestinationEntity(15U);
    msg.button = 49U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.17319996457430764);
    msg.setSource(10008U);
    msg.setSourceEntity(36U);
    msg.setDestination(6946U);
    msg.setDestinationEntity(141U);
    msg.button = 103U;
    msg.value = 212U;

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
    msg.setTimeStamp(0.13483048431127787);
    msg.setSource(37077U);
    msg.setSourceEntity(223U);
    msg.setDestination(41408U);
    msg.setDestinationEntity(124U);
    msg.op = 168U;
    msg.text.assign("BLWSNZTPRRFXJMKQQTJVYZALGMPVMVNXAGDCOQBEKAUFTSFKYKVAWEQLCJSFANHVSWPENXHFXOPIPYCLTYRUUEJZKTFHMORRDDVIIGGWMRXSUJWTTGNPIWCBTOTPFEBRIBDMHCWZYGRSJYFDXALROJLQBHXYKFVNRVXNHUBVAWKIUJP");

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
    msg.setTimeStamp(0.723638629357725);
    msg.setSource(25719U);
    msg.setSourceEntity(79U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(187U);
    msg.op = 188U;
    msg.text.assign("NOLMDBIIPRDLHGTPUNDVGQMTGWQDOYXOJWLAUHDFCVZGORSHUISBPWRRSAVDGLXNVYZFHHYBYNUFXCIFMXALSJUSMECEZPUYHLJMKZVYZEJUQEJXXURPJJXVYWISWEPKIWDLTGNY");

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
    msg.setTimeStamp(0.5202878228026597);
    msg.setSource(60892U);
    msg.setSourceEntity(220U);
    msg.setDestination(23078U);
    msg.setDestinationEntity(0U);
    msg.op = 100U;
    msg.text.assign("MJKPXMFYQMRODHXEMHYNWBHGMAFDOWCBNILXAZBSGCISJLANXFYVJUVNFKUVYDPSPHHYAQJWDENSSTBKCCGZHAZIXZIFWPDPCBLEPCQVMXCAWGJKAUTKVIUVLZUGQUTLOZREQORHWHDEOEDVRPRLHXILORTWQEU");

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
    msg.setTimeStamp(0.03842644493109448);
    msg.setSource(26117U);
    msg.setSourceEntity(53U);
    msg.setDestination(29390U);
    msg.setDestinationEntity(44U);
    msg.op = 225U;
    msg.time_remain = 0.576650901309785;
    msg.sched_time = 0.4238791665695577;

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
    msg.setTimeStamp(0.5026136794992457);
    msg.setSource(41676U);
    msg.setSourceEntity(114U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(186U);
    msg.op = 100U;
    msg.time_remain = 0.5953468188747191;
    msg.sched_time = 0.5451498139932422;

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
    msg.setTimeStamp(0.43791000900420574);
    msg.setSource(5704U);
    msg.setSourceEntity(203U);
    msg.setDestination(38907U);
    msg.setDestinationEntity(194U);
    msg.op = 78U;
    msg.time_remain = 0.6955981735992572;
    msg.sched_time = 0.9522041289611302;

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
    msg.setTimeStamp(0.9361305002825338);
    msg.setSource(20938U);
    msg.setSourceEntity(195U);
    msg.setDestination(4369U);
    msg.setDestinationEntity(55U);
    msg.name.assign("YEKLTSOGGTYCRSWWTFKHDHDOGBZBRPLBQRHLFPXCBBFDYZQWLTIDSVOZPFUQZYMCHAHUNITACJKOJZVAWRLKFXFLRNZYNIGHWMKQISXVGNVOKMNHLYSIKIFUZUGIXPHFUKXHSCQWSBQCVBHSIOTVEOEXMGBVQWIDADAWV");
    msg.op = 69U;
    msg.sched_time = 0.6211292635808875;

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
    msg.setTimeStamp(0.02056084471565167);
    msg.setSource(34827U);
    msg.setSourceEntity(21U);
    msg.setDestination(32232U);
    msg.setDestinationEntity(109U);
    msg.name.assign("KDVWIOVUBOAASPNCEKODNATTZTKYGHLPWXGYPYOZRBTMYAVHYHZYQJNNFOMQDHWZIOBZJJABBYXFRLUBEMMFKCEMLXBQCXZUQJKZRPVEIRHADZGDLXFHQOMFSHUVOLQWLIDFDUHPWCGVFKQUNSZCLMCIRNTRSVJW");
    msg.op = 142U;
    msg.sched_time = 0.2597265851901417;

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
    msg.setTimeStamp(0.5027786269005844);
    msg.setSource(23987U);
    msg.setSourceEntity(116U);
    msg.setDestination(7336U);
    msg.setDestinationEntity(66U);
    msg.name.assign("HXIBBKDHYQZQSQLOMBRSBGEKTUUHNOEJOREJASYVEAXGMQMSLNSWTQJRHJLHWTDPZSLXFDZFAVXVNFFVXBAKVOIWJIHXGKCIMNYACYUZYEVRMAAJNVNAPOVWLJLWBYGFGJZHPCOTEELWFUTFPOCWQZOXKTJRN");
    msg.op = 168U;
    msg.sched_time = 0.9496614950022036;

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
    msg.setTimeStamp(0.6909338008282184);
    msg.setSource(39975U);
    msg.setSourceEntity(72U);
    msg.setDestination(43992U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.6797553606099065);
    msg.setSource(32235U);
    msg.setSourceEntity(31U);
    msg.setDestination(340U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.8043341085316327);
    msg.setSource(50966U);
    msg.setSourceEntity(51U);
    msg.setDestination(55208U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.13102442704845807);
    msg.setSource(49617U);
    msg.setSourceEntity(140U);
    msg.setDestination(41429U);
    msg.setDestinationEntity(5U);
    msg.name.assign("PJFTGKHQBNFRIVMAABWSZUIXRBBMTLBTNAGJYGWHPMLQDSAQMCRBPPIFK");
    msg.state = 36U;

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
    msg.setTimeStamp(0.7322772439488802);
    msg.setSource(27296U);
    msg.setSourceEntity(131U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(118U);
    msg.name.assign("HAKWNZWAQOMJRSBSJXORTWYIWCSXIZCKZNLVDGHVYRMXYADAQVYGQV");
    msg.state = 81U;

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
    msg.setTimeStamp(0.7673785491119957);
    msg.setSource(55978U);
    msg.setSourceEntity(106U);
    msg.setDestination(31200U);
    msg.setDestinationEntity(91U);
    msg.name.assign("FHYZGJUCOJWAMVMCFJJIMFMAHGRMGOENQVPYXGYRP");
    msg.state = 174U;

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
    msg.setTimeStamp(0.1864971580036292);
    msg.setSource(32910U);
    msg.setSourceEntity(42U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(151U);
    msg.name.assign("YIRJQVHGGFZLBXEAUXRZTDGXJNHKYTOOTDPOOFSETPHAMABBDYUGVPLIUWSLVLTLUPWGMQQSAHHKWNFSDQEFERYGPXZPARIMVDWNXYZCYKADUNEBMSMEDRZIMXUJKNVRQEKECYCVPQCQHWOALZCWLIWMJDQGFMJHPFBHEQIAZFDTLCOCXIPTOBBZMJSEVVVSKULSUZYYTIORQGRFKXXBWCYHCFNTFKLXWOP");
    msg.value = 195U;

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
    msg.setTimeStamp(0.8839882314108893);
    msg.setSource(21270U);
    msg.setSourceEntity(27U);
    msg.setDestination(39889U);
    msg.setDestinationEntity(76U);
    msg.name.assign("XUIKPLDPLQGPBLVTWJSZJDXKJZOTTEEOMFVYVSSOMXMBOFBFAEFXDZAYCVDTCNFHJGYKXCALLUWLAHJPZUNCSIDEHCFDOQKJKGFCXETPUXBJYERDPAHNYJSKLPRCZWTMTNULBINVCNGINLBGEJXAVRPTPDABYVQYNSQNODMODRUENXEJRER");
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
    msg.setTimeStamp(0.4177190567255705);
    msg.setSource(56546U);
    msg.setSourceEntity(205U);
    msg.setDestination(13877U);
    msg.setDestinationEntity(115U);
    msg.name.assign("SNYLKJQSRGRORHCWBWZFRZSTYVOMVNPZXXNESGQYUNTOZLUMVGMHEJNHUAYVMWWMNOLKWFTKUDSALKHKBPTXXXEBDQHGCPHXPULWGYVOPZOJRIJBQDFRXLFSKNPZJUOZZYNFIVTINJEOKSTXSRRLJAYFCDBRXWEDKAACYIFHIMWTEIPCWMTKTVUUDFGGKCAQADQQYZVSJO");
    msg.value = 126U;

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
    msg.setTimeStamp(0.9823427946628327);
    msg.setSource(3220U);
    msg.setSourceEntity(86U);
    msg.setDestination(32298U);
    msg.setDestinationEntity(124U);
    msg.name.assign("QVJIAQNHLTWKUKZGZCTPXKMCNLCFZTRPCDHGWMTPMOWFYIYANIMXEZEQVADKXVRUAZJYTWYQHTCOLSQBDYVSQZUWFZIUZOSKHBWQEEVIWRVNKBREKDEDMWZPFYDAAPWNGENTORVXVITCCKLHCLSVFHGDDPOULOJJLXFRXOLMNXGHSJUMOAPMYGHSFEHPPENNUJMUZRCKWPCJBYSJNHXIGBQBYAIQETSBTIU");

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
    msg.setTimeStamp(0.4343611448666297);
    msg.setSource(56916U);
    msg.setSourceEntity(118U);
    msg.setDestination(24307U);
    msg.setDestinationEntity(226U);
    msg.name.assign("QMQQMUWZHJIPYSJITSTSMQCBQLCLANTSWZEZSQPTVGXDXCEWGATLZPNIYHVJFYKEJMUDWCPURHCHMRGDJICFYOUJZBTBOJEXUBSWEYMXWLG");

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
    msg.setTimeStamp(0.21538784153553636);
    msg.setSource(25893U);
    msg.setSourceEntity(58U);
    msg.setDestination(29253U);
    msg.setDestinationEntity(149U);
    msg.name.assign("ADIRHXVTJQFUHLNFAIEPSNMGKBJJQZUOWJWDZYDZZCFKXMN");

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
    msg.setTimeStamp(0.6640653316687014);
    msg.setSource(45070U);
    msg.setSourceEntity(251U);
    msg.setDestination(27621U);
    msg.setDestinationEntity(58U);
    msg.name.assign("TXUFPYDLZMLKXWNYIPMIIIRWOGJFELHHZCURJUMWJQNUVGJDSFUTSEWSCBZ");
    msg.value = 98U;

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
    msg.setTimeStamp(0.5690357311973117);
    msg.setSource(27825U);
    msg.setSourceEntity(229U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(66U);
    msg.name.assign("APMAOFACEZATWYLHHNOPJXWGVRCLKLTGEEKIXCHDVJEJRHQFFBVUQNMMBITEAQOFKFHPFLQFDJBKCRONYIZUWECQDYJRCYJSVXMCMTPZQF");
    msg.value = 140U;

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
    msg.setTimeStamp(0.5619530535581913);
    msg.setSource(28805U);
    msg.setSourceEntity(145U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(178U);
    msg.name.assign("MNXHUPOJUJGEHBGXZFRAGPWILOQHXOCDZHKZNAFBAERKGNTLMJPYQZFWAVILKFOYUZUOQSCRMAEJKERHJJCDFMKOSQYYNJUVYBHECKBRWYZDQAXXPJJGDDCHTVTQAOVNNINPLJQADHUFCPUEIMWRBNWDNBYXWICWSSZWOPDCDVTYZQIR");
    msg.value = 160U;

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
    msg.setTimeStamp(0.9860199601096613);
    msg.setSource(10011U);
    msg.setSourceEntity(166U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(83U);
    msg.id = 51U;
    msg.period = 3844642687U;
    msg.duty_cycle = 967142176U;

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
    msg.setTimeStamp(0.4821025227152266);
    msg.setSource(17842U);
    msg.setSourceEntity(123U);
    msg.setDestination(2732U);
    msg.setDestinationEntity(147U);
    msg.id = 228U;
    msg.period = 2458425206U;
    msg.duty_cycle = 3981056041U;

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
    msg.setTimeStamp(0.17275899746858348);
    msg.setSource(20070U);
    msg.setSourceEntity(130U);
    msg.setDestination(12362U);
    msg.setDestinationEntity(118U);
    msg.id = 59U;
    msg.period = 1770199071U;
    msg.duty_cycle = 391936210U;

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
    msg.setTimeStamp(0.4115974722384905);
    msg.setSource(43492U);
    msg.setSourceEntity(17U);
    msg.setDestination(32848U);
    msg.setDestinationEntity(73U);
    msg.id = 4U;
    msg.period = 2290074353U;
    msg.duty_cycle = 3297271420U;

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
    msg.setTimeStamp(0.8901447983219886);
    msg.setSource(63082U);
    msg.setSourceEntity(27U);
    msg.setDestination(39165U);
    msg.setDestinationEntity(41U);
    msg.id = 76U;
    msg.period = 2091503860U;
    msg.duty_cycle = 1539814040U;

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
    msg.setTimeStamp(0.008411908638137566);
    msg.setSource(23336U);
    msg.setSourceEntity(200U);
    msg.setDestination(63556U);
    msg.setDestinationEntity(130U);
    msg.id = 38U;
    msg.period = 2931095619U;
    msg.duty_cycle = 1599904380U;

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
    msg.setTimeStamp(0.059407514708786135);
    msg.setSource(54407U);
    msg.setSourceEntity(88U);
    msg.setDestination(43912U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.8451164572468307;
    msg.lon = 0.9059656309985449;
    msg.height = 0.8045374126935858;
    msg.x = 0.02127686249560712;
    msg.y = 0.963972101180465;
    msg.z = 0.34303975594467007;
    msg.phi = 0.37227488833880085;
    msg.theta = 0.47638972207572394;
    msg.psi = 0.3161668424079245;
    msg.u = 0.9661909706175715;
    msg.v = 0.892762722784679;
    msg.w = 0.06786573759039072;
    msg.vx = 0.013586641912235686;
    msg.vy = 0.48011738392777825;
    msg.vz = 0.6418542240427699;
    msg.p = 0.03862855295821277;
    msg.q = 0.9769809392168363;
    msg.r = 0.4353916848937345;
    msg.depth = 0.5189600858208137;
    msg.alt = 0.2667061469512816;

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
    msg.setTimeStamp(0.007255413615813944);
    msg.setSource(29674U);
    msg.setSourceEntity(60U);
    msg.setDestination(61451U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.1913419621764536;
    msg.lon = 0.6858420861364274;
    msg.height = 0.01203066613019177;
    msg.x = 0.02867768655421976;
    msg.y = 0.6547704305588679;
    msg.z = 0.9961132989080969;
    msg.phi = 0.67764924502109;
    msg.theta = 0.40077743827993284;
    msg.psi = 0.33592391888896267;
    msg.u = 0.8136249993816482;
    msg.v = 0.05919955735016269;
    msg.w = 0.14291653641931235;
    msg.vx = 0.1845467848582809;
    msg.vy = 0.16016575704439584;
    msg.vz = 0.1416373586498667;
    msg.p = 0.4189906364840742;
    msg.q = 0.8699408542331346;
    msg.r = 0.14180456648325812;
    msg.depth = 0.7784225424193991;
    msg.alt = 0.4480331696620721;

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
    msg.setTimeStamp(0.6665610754939751);
    msg.setSource(41054U);
    msg.setSourceEntity(191U);
    msg.setDestination(41288U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.8787459518880295;
    msg.lon = 0.7394281809742261;
    msg.height = 0.06046361870895056;
    msg.x = 0.631364701238252;
    msg.y = 0.07758148291005218;
    msg.z = 0.6212583269470203;
    msg.phi = 0.8760373325747555;
    msg.theta = 0.5280869003429618;
    msg.psi = 0.4022165040379677;
    msg.u = 0.043998459927413136;
    msg.v = 0.7361004197176128;
    msg.w = 0.4881680971846821;
    msg.vx = 0.3434624739017176;
    msg.vy = 0.9146965347704779;
    msg.vz = 0.4115219709409971;
    msg.p = 0.08488066180957643;
    msg.q = 0.6359196350918855;
    msg.r = 0.587311499876866;
    msg.depth = 0.08193673683909253;
    msg.alt = 0.669004275372028;

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
    msg.setTimeStamp(0.8319365094318728);
    msg.setSource(41647U);
    msg.setSourceEntity(223U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(241U);
    msg.x = 0.10084086938266579;
    msg.y = 0.036519318396248;
    msg.z = 0.5271805570945017;

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
    msg.setTimeStamp(0.6385475182214551);
    msg.setSource(49595U);
    msg.setSourceEntity(104U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(121U);
    msg.x = 0.6515046742699574;
    msg.y = 0.15408588492115538;
    msg.z = 0.6037271850726442;

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
    msg.setTimeStamp(0.6754463403907847);
    msg.setSource(64202U);
    msg.setSourceEntity(33U);
    msg.setDestination(23341U);
    msg.setDestinationEntity(32U);
    msg.x = 0.05076097958213033;
    msg.y = 0.6348930344084766;
    msg.z = 0.48815775329883904;

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
    msg.setTimeStamp(0.8639429769694634);
    msg.setSource(7717U);
    msg.setSourceEntity(200U);
    msg.setDestination(58406U);
    msg.setDestinationEntity(199U);
    msg.value = 0.17869864774218303;

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
    msg.setTimeStamp(0.23506942968015465);
    msg.setSource(54280U);
    msg.setSourceEntity(241U);
    msg.setDestination(40732U);
    msg.setDestinationEntity(89U);
    msg.value = 0.49179604068825655;

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
    msg.setTimeStamp(0.753784947811288);
    msg.setSource(32545U);
    msg.setSourceEntity(124U);
    msg.setDestination(851U);
    msg.setDestinationEntity(114U);
    msg.value = 0.6353802345204067;

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
    msg.setTimeStamp(0.012303892264770466);
    msg.setSource(48676U);
    msg.setSourceEntity(229U);
    msg.setDestination(62099U);
    msg.setDestinationEntity(210U);
    msg.value = 0.837799689405383;

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
    msg.setTimeStamp(0.6239969450667068);
    msg.setSource(45506U);
    msg.setSourceEntity(27U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(213U);
    msg.value = 0.47258102590012596;

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
    msg.setTimeStamp(0.16548414475596696);
    msg.setSource(55821U);
    msg.setSourceEntity(253U);
    msg.setDestination(40799U);
    msg.setDestinationEntity(241U);
    msg.value = 0.07883129980326498;

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
    msg.setTimeStamp(0.817936719716836);
    msg.setSource(63480U);
    msg.setSourceEntity(75U);
    msg.setDestination(16616U);
    msg.setDestinationEntity(133U);
    msg.x = 0.9107956719941973;
    msg.y = 0.09730951912096875;
    msg.z = 0.39664169681398054;
    msg.phi = 0.2809497185051619;
    msg.theta = 0.6705621168714061;
    msg.psi = 0.8100142804809071;
    msg.p = 0.7057249544152181;
    msg.q = 0.02939940106443717;
    msg.r = 0.7967345819828162;
    msg.u = 0.13231642779135822;
    msg.v = 0.46538946525626124;
    msg.w = 0.12721098777632045;
    msg.bias_psi = 0.34817283603262217;
    msg.bias_r = 0.2688314825752849;

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
    msg.setTimeStamp(0.19438493316729022);
    msg.setSource(3183U);
    msg.setSourceEntity(102U);
    msg.setDestination(29421U);
    msg.setDestinationEntity(132U);
    msg.x = 0.7420900555947066;
    msg.y = 0.8206020077293311;
    msg.z = 0.23825987986570474;
    msg.phi = 0.42871898593401847;
    msg.theta = 0.8497781006319207;
    msg.psi = 0.5264076219262542;
    msg.p = 0.43080515518548;
    msg.q = 0.912131421403204;
    msg.r = 0.5768097186359944;
    msg.u = 0.054962415029288225;
    msg.v = 0.7865013500019734;
    msg.w = 0.7026145871987922;
    msg.bias_psi = 0.12036489109066362;
    msg.bias_r = 0.610892684394514;

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
    msg.setTimeStamp(0.32878680526482573);
    msg.setSource(63246U);
    msg.setSourceEntity(175U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(230U);
    msg.x = 0.3342674862851134;
    msg.y = 0.73048955486629;
    msg.z = 0.5499941909418654;
    msg.phi = 0.4836548870384392;
    msg.theta = 0.5846380378828373;
    msg.psi = 0.0740645546476758;
    msg.p = 0.46299217993473996;
    msg.q = 0.04052429034149074;
    msg.r = 0.7913068553648442;
    msg.u = 0.5371959613317159;
    msg.v = 0.9142149488719197;
    msg.w = 0.7249896229656049;
    msg.bias_psi = 0.792867715642525;
    msg.bias_r = 0.5428842251277073;

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
    msg.setTimeStamp(0.2677841804871507);
    msg.setSource(53U);
    msg.setSourceEntity(180U);
    msg.setDestination(27715U);
    msg.setDestinationEntity(230U);
    msg.bias_psi = 0.7757796068644421;
    msg.bias_r = 0.8387797045196457;
    msg.cog = 0.34044777050939934;
    msg.cyaw = 0.013084755067593323;
    msg.lbl_rej_level = 0.51441429564178;
    msg.gps_rej_level = 0.4117570589637849;
    msg.custom_x = 0.18358189951045534;
    msg.custom_y = 0.7988746286906502;
    msg.custom_z = 0.97190178204242;

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
    msg.setTimeStamp(0.060413093655667494);
    msg.setSource(15748U);
    msg.setSourceEntity(123U);
    msg.setDestination(29411U);
    msg.setDestinationEntity(13U);
    msg.bias_psi = 0.9660420296535971;
    msg.bias_r = 0.1072800218540284;
    msg.cog = 0.8790325912394665;
    msg.cyaw = 0.2484181591485124;
    msg.lbl_rej_level = 0.31021478372332767;
    msg.gps_rej_level = 0.16840835468501325;
    msg.custom_x = 0.662356440701384;
    msg.custom_y = 0.5220104101572557;
    msg.custom_z = 0.27741477108671486;

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
    msg.setTimeStamp(0.8317982539404816);
    msg.setSource(37873U);
    msg.setSourceEntity(178U);
    msg.setDestination(7419U);
    msg.setDestinationEntity(102U);
    msg.bias_psi = 0.6246694768060072;
    msg.bias_r = 0.28853791379107707;
    msg.cog = 0.49285593394028093;
    msg.cyaw = 0.7766533257752533;
    msg.lbl_rej_level = 0.11179959672066109;
    msg.gps_rej_level = 0.7903216880117739;
    msg.custom_x = 0.35204470968798807;
    msg.custom_y = 0.9780185703061915;
    msg.custom_z = 0.7674575365936468;

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
    msg.setTimeStamp(0.3246853921245072);
    msg.setSource(35650U);
    msg.setSourceEntity(133U);
    msg.setDestination(41972U);
    msg.setDestinationEntity(14U);
    msg.utc_time = 0.956765318641525;
    msg.reason = 130U;

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
    msg.setTimeStamp(0.5866474313499964);
    msg.setSource(2507U);
    msg.setSourceEntity(207U);
    msg.setDestination(35887U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.36325724130417736;
    msg.reason = 124U;

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
    msg.setTimeStamp(0.4547031141656924);
    msg.setSource(20982U);
    msg.setSourceEntity(209U);
    msg.setDestination(63972U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.7107255514543722;
    msg.reason = 102U;

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
    msg.setTimeStamp(0.6178618374908073);
    msg.setSource(39960U);
    msg.setSourceEntity(90U);
    msg.setDestination(12048U);
    msg.setDestinationEntity(62U);
    msg.id = 102U;
    msg.range = 0.576563025514462;
    msg.acceptance = 8U;

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
    msg.setTimeStamp(0.7575483507789869);
    msg.setSource(49996U);
    msg.setSourceEntity(235U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(194U);
    msg.id = 53U;
    msg.range = 0.8183491410515373;
    msg.acceptance = 168U;

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
    msg.setTimeStamp(0.7783206762979046);
    msg.setSource(204U);
    msg.setSourceEntity(159U);
    msg.setDestination(22392U);
    msg.setDestinationEntity(127U);
    msg.id = 200U;
    msg.range = 0.9535524162831345;
    msg.acceptance = 227U;

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
    msg.setTimeStamp(0.21721444370129428);
    msg.setSource(24800U);
    msg.setSourceEntity(205U);
    msg.setDestination(60369U);
    msg.setDestinationEntity(195U);
    msg.type = 20U;
    msg.reason = 78U;
    msg.value = 0.45419606142981206;
    msg.timestep = 0.8953719725233993;

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
    msg.setTimeStamp(0.9553086524386475);
    msg.setSource(50828U);
    msg.setSourceEntity(240U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(11U);
    msg.type = 3U;
    msg.reason = 111U;
    msg.value = 0.977696216101013;
    msg.timestep = 0.23589231221523932;

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
    msg.setTimeStamp(0.3885107006456243);
    msg.setSource(58721U);
    msg.setSourceEntity(42U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(48U);
    msg.type = 30U;
    msg.reason = 187U;
    msg.value = 0.8131094043685159;
    msg.timestep = 0.41998394391638094;

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
    msg.setTimeStamp(0.37192357771827256);
    msg.setSource(16453U);
    msg.setSourceEntity(212U);
    msg.setDestination(61562U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KGWXZLOSXSGFZLPHTKCKHUEHJWMUJOFQFTHQABGSTDNDSVQRUHXERQYBEOEVLRVLEBEIYNNMPOOBNMADHCPIMFJBRAKLVXOXMTQWDLKAZBJMXESIJBEHDZIUEUVZXQDWWYOCBPKUAKGKNYPXAQTCIDVPL");
    tmp_msg_0.lat = 0.3638299005464263;
    tmp_msg_0.lon = 0.5260673003055508;
    tmp_msg_0.depth = 0.6855622178084266;
    tmp_msg_0.query_channel = 126U;
    tmp_msg_0.reply_channel = 138U;
    tmp_msg_0.transponder_delay = 189U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4322638225797565;
    msg.y = 0.13552256928984996;
    msg.var_x = 0.48183222452267527;
    msg.var_y = 0.7710805731822749;
    msg.distance = 0.9471525613663277;

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
    msg.setTimeStamp(0.5421447917997386);
    msg.setSource(46514U);
    msg.setSourceEntity(238U);
    msg.setDestination(12904U);
    msg.setDestinationEntity(166U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DFIWJFRUWXYOIFS");
    tmp_msg_0.lat = 0.2967279042844182;
    tmp_msg_0.lon = 0.24972946640349358;
    tmp_msg_0.depth = 0.7057437153054422;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 215U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.010032940335843898;
    msg.y = 0.5416304553566033;
    msg.var_x = 0.14792855565366392;
    msg.var_y = 0.15747040882459118;
    msg.distance = 0.2700980840170597;

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
    msg.setTimeStamp(0.8774778432180473);
    msg.setSource(29305U);
    msg.setSourceEntity(189U);
    msg.setDestination(20466U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZMVVIOINAMFXLXHHPLDKWBHDTFYUPOWTJ");
    tmp_msg_0.lat = 0.5745796591223328;
    tmp_msg_0.lon = 0.008198294218589641;
    tmp_msg_0.depth = 0.12374038346786054;
    tmp_msg_0.query_channel = 41U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 242U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.37488667971172074;
    msg.y = 0.14230989854799403;
    msg.var_x = 0.05683987539428437;
    msg.var_y = 0.5654776529644489;
    msg.distance = 0.10432510216954383;

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
    msg.setTimeStamp(0.2059356246786026);
    msg.setSource(12479U);
    msg.setSourceEntity(8U);
    msg.setDestination(25860U);
    msg.setDestinationEntity(11U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.7459565004308654);
    msg.setSource(1948U);
    msg.setSourceEntity(76U);
    msg.setDestination(3643U);
    msg.setDestinationEntity(206U);
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
    msg.setTimeStamp(0.3306650931455757);
    msg.setSource(65523U);
    msg.setSourceEntity(221U);
    msg.setDestination(754U);
    msg.setDestinationEntity(118U);
    msg.state = 242U;

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
    msg.setTimeStamp(0.6685940954616229);
    msg.setSource(23148U);
    msg.setSourceEntity(38U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(14U);
    msg.x = 0.960001244653858;
    msg.y = 0.7322313431249914;
    msg.z = 0.6735232199879365;

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
    msg.setTimeStamp(0.1149903880951485);
    msg.setSource(36894U);
    msg.setSourceEntity(71U);
    msg.setDestination(58092U);
    msg.setDestinationEntity(147U);
    msg.x = 0.5309142515338131;
    msg.y = 0.04854335440725466;
    msg.z = 0.2570276447822586;

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
    msg.setTimeStamp(0.6650332979805574);
    msg.setSource(62007U);
    msg.setSourceEntity(25U);
    msg.setDestination(24248U);
    msg.setDestinationEntity(36U);
    msg.x = 0.7125832508544516;
    msg.y = 0.45684023840204946;
    msg.z = 0.571023761826131;

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
    msg.setTimeStamp(0.5234468690767773);
    msg.setSource(60432U);
    msg.setSourceEntity(50U);
    msg.setDestination(29508U);
    msg.setDestinationEntity(25U);
    msg.va = 0.9791867413730945;
    msg.aoa = 0.1442187535086531;
    msg.ssa = 0.1902096777746296;

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
    msg.setTimeStamp(0.6590235031134595);
    msg.setSource(57484U);
    msg.setSourceEntity(212U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(96U);
    msg.va = 0.7621929779936898;
    msg.aoa = 0.8668873479963014;
    msg.ssa = 0.05506173736781239;

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
    msg.setTimeStamp(0.4954882264445287);
    msg.setSource(22708U);
    msg.setSourceEntity(163U);
    msg.setDestination(38004U);
    msg.setDestinationEntity(223U);
    msg.va = 0.45317692064349113;
    msg.aoa = 0.4118093894304089;
    msg.ssa = 0.826866714646245;

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
    msg.setTimeStamp(0.8551632096884478);
    msg.setSource(50252U);
    msg.setSourceEntity(58U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6742767366642969;

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
    msg.setTimeStamp(0.792943381243869);
    msg.setSource(14561U);
    msg.setSourceEntity(151U);
    msg.setDestination(55577U);
    msg.setDestinationEntity(8U);
    msg.value = 0.8279220549298704;

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
    msg.setTimeStamp(0.9944962256480212);
    msg.setSource(14425U);
    msg.setSourceEntity(80U);
    msg.setDestination(28091U);
    msg.setDestinationEntity(82U);
    msg.value = 0.8828280833496671;

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
    msg.setTimeStamp(0.2523242657132476);
    msg.setSource(46528U);
    msg.setSourceEntity(122U);
    msg.setDestination(46609U);
    msg.setDestinationEntity(245U);
    msg.value = 0.08316453676035185;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.04037895411949455);
    msg.setSource(42880U);
    msg.setSourceEntity(27U);
    msg.setDestination(25927U);
    msg.setDestinationEntity(95U);
    msg.value = 0.4095763220975406;
    msg.z_units = 15U;

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
    msg.setTimeStamp(0.6739176249627534);
    msg.setSource(23195U);
    msg.setSourceEntity(136U);
    msg.setDestination(37972U);
    msg.setDestinationEntity(56U);
    msg.value = 0.4490543721483162;
    msg.z_units = 40U;

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
    msg.setTimeStamp(0.0989379708391599);
    msg.setSource(51982U);
    msg.setSourceEntity(101U);
    msg.setDestination(54832U);
    msg.setDestinationEntity(74U);
    msg.value = 0.3975931468239825;
    msg.speed_units = 26U;

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
    msg.setTimeStamp(0.6642146818697162);
    msg.setSource(59627U);
    msg.setSourceEntity(182U);
    msg.setDestination(61642U);
    msg.setDestinationEntity(32U);
    msg.value = 0.15783586303024055;
    msg.speed_units = 59U;

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
    msg.setTimeStamp(0.04858169517451194);
    msg.setSource(43239U);
    msg.setSourceEntity(23U);
    msg.setDestination(41071U);
    msg.setDestinationEntity(220U);
    msg.value = 0.9600774269891257;
    msg.speed_units = 136U;

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
    msg.setTimeStamp(0.2638923164418421);
    msg.setSource(44528U);
    msg.setSourceEntity(26U);
    msg.setDestination(3559U);
    msg.setDestinationEntity(169U);
    msg.value = 0.20455573758395962;

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
    msg.setTimeStamp(0.7893382425312649);
    msg.setSource(234U);
    msg.setSourceEntity(74U);
    msg.setDestination(60575U);
    msg.setDestinationEntity(99U);
    msg.value = 0.10344776848760517;

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
    msg.setTimeStamp(0.9022575497630222);
    msg.setSource(1758U);
    msg.setSourceEntity(18U);
    msg.setDestination(47994U);
    msg.setDestinationEntity(143U);
    msg.value = 0.39256861315787983;

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
    msg.setTimeStamp(0.43634709656585347);
    msg.setSource(38212U);
    msg.setSourceEntity(237U);
    msg.setDestination(53810U);
    msg.setDestinationEntity(76U);
    msg.value = 0.8342992521815991;

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
    msg.setTimeStamp(0.2126141892381963);
    msg.setSource(6156U);
    msg.setSourceEntity(79U);
    msg.setDestination(1855U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6559494588982638;

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
    msg.setTimeStamp(0.552479399543853);
    msg.setSource(56924U);
    msg.setSourceEntity(212U);
    msg.setDestination(43619U);
    msg.setDestinationEntity(228U);
    msg.value = 0.3165498133711452;

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
    msg.setTimeStamp(0.5966671024650708);
    msg.setSource(23714U);
    msg.setSourceEntity(173U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(116U);
    msg.value = 0.9739331094542928;

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
    msg.setTimeStamp(0.99773519089018);
    msg.setSource(7496U);
    msg.setSourceEntity(135U);
    msg.setDestination(59116U);
    msg.setDestinationEntity(200U);
    msg.value = 0.2869211955473331;

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
    msg.setTimeStamp(0.6820636643779371);
    msg.setSource(59885U);
    msg.setSourceEntity(206U);
    msg.setDestination(7383U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6113601190397769;

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
    msg.setTimeStamp(0.4190674569713303);
    msg.setSource(14677U);
    msg.setSourceEntity(61U);
    msg.setDestination(19538U);
    msg.setDestinationEntity(166U);
    msg.path_ref = 97778975U;
    msg.start_lat = 0.7544033070984055;
    msg.start_lon = 0.2189690665530305;
    msg.start_z = 0.7305734388434655;
    msg.start_z_units = 91U;
    msg.end_lat = 0.13800843250619188;
    msg.end_lon = 0.530976047726423;
    msg.end_z = 0.7655194314358391;
    msg.end_z_units = 181U;
    msg.speed = 0.34355036781629;
    msg.speed_units = 3U;
    msg.lradius = 0.2508033239425522;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.4800862098909957);
    msg.setSource(43173U);
    msg.setSourceEntity(53U);
    msg.setDestination(40463U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 113089761U;
    msg.start_lat = 0.0512319968786239;
    msg.start_lon = 0.4197262823022019;
    msg.start_z = 0.018854034394449326;
    msg.start_z_units = 120U;
    msg.end_lat = 0.5017540837719754;
    msg.end_lon = 0.040103882572300464;
    msg.end_z = 0.16342038696451044;
    msg.end_z_units = 172U;
    msg.speed = 0.28528154681971873;
    msg.speed_units = 92U;
    msg.lradius = 0.4493181042627733;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.8690683817315722);
    msg.setSource(13902U);
    msg.setSourceEntity(27U);
    msg.setDestination(1717U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 3660725285U;
    msg.start_lat = 0.7022460939279848;
    msg.start_lon = 0.9645566372750505;
    msg.start_z = 0.9309579584267976;
    msg.start_z_units = 206U;
    msg.end_lat = 0.38672696851940436;
    msg.end_lon = 0.6376515652484798;
    msg.end_z = 0.8876134650446839;
    msg.end_z_units = 187U;
    msg.speed = 0.9397129713432515;
    msg.speed_units = 161U;
    msg.lradius = 0.4910707089389861;
    msg.flags = 236U;

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
    msg.setTimeStamp(0.7837090069160785);
    msg.setSource(43850U);
    msg.setSourceEntity(185U);
    msg.setDestination(61168U);
    msg.setDestinationEntity(125U);
    msg.x = 0.15366029048532293;
    msg.y = 0.549247230802207;
    msg.z = 0.6970792680558539;
    msg.k = 0.19936659910021703;
    msg.m = 0.4184807084976895;
    msg.n = 0.2673504312889142;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.35279363948096565);
    msg.setSource(40923U);
    msg.setSourceEntity(14U);
    msg.setDestination(3079U);
    msg.setDestinationEntity(227U);
    msg.x = 0.4285778778280156;
    msg.y = 0.2765807830239465;
    msg.z = 0.61615031548084;
    msg.k = 0.0706042456069288;
    msg.m = 0.782117072809285;
    msg.n = 0.7328551482113256;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.4375200050993454);
    msg.setSource(24277U);
    msg.setSourceEntity(58U);
    msg.setDestination(51869U);
    msg.setDestinationEntity(56U);
    msg.x = 0.273955903231866;
    msg.y = 0.8184651980333871;
    msg.z = 0.14889283363338024;
    msg.k = 0.8839589298324833;
    msg.m = 0.02137691753198645;
    msg.n = 0.38230064123600793;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.06863592668295893);
    msg.setSource(61775U);
    msg.setSourceEntity(205U);
    msg.setDestination(33886U);
    msg.setDestinationEntity(71U);
    msg.value = 0.2561327064741459;

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
    msg.setTimeStamp(0.6141084060488059);
    msg.setSource(20523U);
    msg.setSourceEntity(179U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(245U);
    msg.value = 0.6954414945361671;

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
    msg.setTimeStamp(0.882006558975613);
    msg.setSource(5138U);
    msg.setSourceEntity(123U);
    msg.setDestination(49756U);
    msg.setDestinationEntity(202U);
    msg.value = 0.685661953699931;

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
    msg.setTimeStamp(0.7161115327765762);
    msg.setSource(63598U);
    msg.setSourceEntity(214U);
    msg.setDestination(46665U);
    msg.setDestinationEntity(143U);
    msg.u = 0.5835748525158919;
    msg.v = 0.9756325649264768;
    msg.w = 0.33034246140391055;
    msg.p = 0.4909793573089075;
    msg.q = 0.18242954697696423;
    msg.r = 0.9816423765407648;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.5277898924750608);
    msg.setSource(3124U);
    msg.setSourceEntity(24U);
    msg.setDestination(59729U);
    msg.setDestinationEntity(13U);
    msg.u = 0.9791500969553738;
    msg.v = 0.5714255232575874;
    msg.w = 0.026454811006488055;
    msg.p = 0.9135938702934138;
    msg.q = 0.18224553763660178;
    msg.r = 0.394392045946628;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.2621877508377951);
    msg.setSource(37421U);
    msg.setSourceEntity(193U);
    msg.setDestination(53912U);
    msg.setDestinationEntity(41U);
    msg.u = 0.47753467973126595;
    msg.v = 0.18346945798565117;
    msg.w = 0.7767932100809309;
    msg.p = 0.3679553933031531;
    msg.q = 0.4842583612388014;
    msg.r = 0.9550540554350797;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.8141562099990112);
    msg.setSource(22565U);
    msg.setSourceEntity(197U);
    msg.setDestination(42597U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 2361832573U;
    msg.start_lat = 0.30679594663571874;
    msg.start_lon = 0.11219415521630682;
    msg.start_z = 0.13099864147209317;
    msg.start_z_units = 157U;
    msg.end_lat = 0.45901723184144516;
    msg.end_lon = 0.24463296271255675;
    msg.end_z = 0.27288524531018765;
    msg.end_z_units = 224U;
    msg.lradius = 0.8244795555266491;
    msg.flags = 61U;
    msg.x = 0.6863344574338154;
    msg.y = 0.9609248353384713;
    msg.z = 0.43753200686505667;
    msg.vx = 0.9799227033474377;
    msg.vy = 0.7643533712748497;
    msg.vz = 0.39143030426668446;
    msg.course_error = 0.794751828851995;
    msg.eta = 54637U;

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
    msg.setTimeStamp(0.37284488782049563);
    msg.setSource(48261U);
    msg.setSourceEntity(209U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 1667846510U;
    msg.start_lat = 0.11596671850011919;
    msg.start_lon = 0.897853905371631;
    msg.start_z = 0.3565707656674175;
    msg.start_z_units = 185U;
    msg.end_lat = 0.5965150612998216;
    msg.end_lon = 0.10360955917876002;
    msg.end_z = 0.06007672372117023;
    msg.end_z_units = 236U;
    msg.lradius = 0.8418218575356059;
    msg.flags = 201U;
    msg.x = 0.7046230571929845;
    msg.y = 0.6458111419856941;
    msg.z = 0.8066802172906717;
    msg.vx = 0.7491657781617015;
    msg.vy = 0.5494539588257947;
    msg.vz = 0.18504752151229598;
    msg.course_error = 0.3920553416571927;
    msg.eta = 27162U;

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
    msg.setTimeStamp(0.3174423905629643);
    msg.setSource(38040U);
    msg.setSourceEntity(8U);
    msg.setDestination(22500U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 4061914385U;
    msg.start_lat = 0.041286596903626016;
    msg.start_lon = 0.23369281984341195;
    msg.start_z = 0.7748431946480039;
    msg.start_z_units = 101U;
    msg.end_lat = 0.14210948685855274;
    msg.end_lon = 0.6741056173193342;
    msg.end_z = 0.2225799729866771;
    msg.end_z_units = 101U;
    msg.lradius = 0.2603308249552403;
    msg.flags = 107U;
    msg.x = 0.2837202417040463;
    msg.y = 0.3730914546629869;
    msg.z = 0.051355752637139096;
    msg.vx = 0.006575757390876236;
    msg.vy = 0.37940795404679795;
    msg.vz = 0.12260251994863902;
    msg.course_error = 0.4439915958088102;
    msg.eta = 46902U;

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
    msg.setTimeStamp(0.44547396257186667);
    msg.setSource(48471U);
    msg.setSourceEntity(132U);
    msg.setDestination(49152U);
    msg.setDestinationEntity(29U);
    msg.k = 0.11661886389630927;
    msg.m = 0.11538409541382255;
    msg.n = 0.026628524568629408;

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
    msg.setTimeStamp(0.630361723399598);
    msg.setSource(10875U);
    msg.setSourceEntity(27U);
    msg.setDestination(46212U);
    msg.setDestinationEntity(197U);
    msg.k = 0.3165212257004921;
    msg.m = 0.8950565811289677;
    msg.n = 0.8235123460810123;

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
    msg.setTimeStamp(0.13572916940140112);
    msg.setSource(40406U);
    msg.setSourceEntity(22U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(36U);
    msg.k = 0.16752725971153626;
    msg.m = 0.22579448532993884;
    msg.n = 0.878789489452814;

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
    msg.setTimeStamp(0.9263067722037159);
    msg.setSource(20983U);
    msg.setSourceEntity(34U);
    msg.setDestination(50361U);
    msg.setDestinationEntity(26U);
    msg.p = 0.5594161723630591;
    msg.i = 0.14764468242710216;
    msg.d = 0.7450520718595456;
    msg.a = 0.970162427237622;

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
    msg.setTimeStamp(0.3300813589845423);
    msg.setSource(26532U);
    msg.setSourceEntity(148U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(225U);
    msg.p = 0.3103424817621566;
    msg.i = 0.6699016270709321;
    msg.d = 0.5858759704383916;
    msg.a = 0.6714157559635913;

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
    msg.setTimeStamp(0.4691494287648199);
    msg.setSource(24696U);
    msg.setSourceEntity(115U);
    msg.setDestination(17689U);
    msg.setDestinationEntity(249U);
    msg.p = 0.8299898343045958;
    msg.i = 0.7806171156492511;
    msg.d = 0.7737043118245714;
    msg.a = 0.3531330444855867;

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
    msg.setTimeStamp(0.9682511801942307);
    msg.setSource(5389U);
    msg.setSourceEntity(223U);
    msg.setDestination(56296U);
    msg.setDestinationEntity(252U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.7406034832603507);
    msg.setSource(3954U);
    msg.setSourceEntity(226U);
    msg.setDestination(15795U);
    msg.setDestinationEntity(44U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.6354690055769435);
    msg.setSource(26808U);
    msg.setSourceEntity(106U);
    msg.setDestination(4299U);
    msg.setDestinationEntity(252U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.3469287958813956);
    msg.setSource(7304U);
    msg.setSourceEntity(233U);
    msg.setDestination(28917U);
    msg.setDestinationEntity(135U);
    msg.x = 0.8864278846322365;
    msg.y = 0.8562033340720994;
    msg.z = 0.27628635345591057;
    msg.vx = 0.010722634070503556;
    msg.vy = 0.7340006716323721;
    msg.vz = 0.7117988650309328;
    msg.ax = 0.7274504063087275;
    msg.ay = 0.4241689861812865;
    msg.az = 0.10933731940934832;
    msg.flags = 16564U;

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
    msg.setTimeStamp(0.9487001386856015);
    msg.setSource(21165U);
    msg.setSourceEntity(29U);
    msg.setDestination(2109U);
    msg.setDestinationEntity(21U);
    msg.x = 0.13266198496634152;
    msg.y = 0.8926746240869481;
    msg.z = 0.8660977135464185;
    msg.vx = 0.47558956166196065;
    msg.vy = 0.3057798690245025;
    msg.vz = 0.6378621936942549;
    msg.ax = 0.411182438705614;
    msg.ay = 0.41027579032321615;
    msg.az = 0.33617358959563626;
    msg.flags = 63641U;

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
    msg.setTimeStamp(0.3667635003121954);
    msg.setSource(15532U);
    msg.setSourceEntity(190U);
    msg.setDestination(12666U);
    msg.setDestinationEntity(239U);
    msg.x = 0.9811666418295776;
    msg.y = 0.8232455766465835;
    msg.z = 0.5007674790836855;
    msg.vx = 0.33972615564955755;
    msg.vy = 0.49473377789627027;
    msg.vz = 0.5056352164125838;
    msg.ax = 0.9709313532715773;
    msg.ay = 0.7152463275791159;
    msg.az = 0.8716467231093719;
    msg.flags = 35177U;

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
    msg.setTimeStamp(0.09083238839271957);
    msg.setSource(16203U);
    msg.setSourceEntity(251U);
    msg.setDestination(35281U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8985394454824666;

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
    msg.setTimeStamp(0.4438926718743792);
    msg.setSource(24174U);
    msg.setSourceEntity(40U);
    msg.setDestination(36887U);
    msg.setDestinationEntity(128U);
    msg.value = 0.08873983078787906;

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
    msg.setTimeStamp(0.16524362607280219);
    msg.setSource(63800U);
    msg.setSourceEntity(206U);
    msg.setDestination(13506U);
    msg.setDestinationEntity(114U);
    msg.value = 0.46415033724056654;

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
    msg.setTimeStamp(0.5695041831857804);
    msg.setSource(36849U);
    msg.setSourceEntity(111U);
    msg.setDestination(29497U);
    msg.setDestinationEntity(32U);
    msg.timeout = 10780U;
    msg.lat = 0.6462964701518273;
    msg.lon = 0.5975285731416187;
    msg.z = 0.5529323851678167;
    msg.z_units = 154U;
    msg.speed = 0.7280832479141384;
    msg.speed_units = 161U;
    msg.roll = 0.4501236216049296;
    msg.pitch = 0.22447852237203536;
    msg.yaw = 0.2971128114738736;
    msg.custom.assign("SXHAMWBIJPBSQYBKVZSZVZQXEELTHLFDDPUHCEMFIRSORENOLBEMZGUWVKGXCPQNUZEMJDJWAELAPTQIDJCCTYXLRBLKGILWORSHJHPXMCQTGOQKCCKXCGRWZYGVBUGNTINBNEOHJSMHRKNVTDVWTARSBUPXNRWAUXPOAYAWNUYJIDVIZJWYAVAXPXPYHQQHDOMISOFLMEHUFZKYGOKAKUFVBBFNZWU");

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
    msg.setTimeStamp(0.8797487108581042);
    msg.setSource(17358U);
    msg.setSourceEntity(15U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(24U);
    msg.timeout = 16181U;
    msg.lat = 0.35156850400608086;
    msg.lon = 0.02295867181020883;
    msg.z = 0.05285147325767703;
    msg.z_units = 108U;
    msg.speed = 0.330726444385696;
    msg.speed_units = 218U;
    msg.roll = 0.39187518680878985;
    msg.pitch = 0.4585230488387352;
    msg.yaw = 0.15162564932674316;
    msg.custom.assign("DNOPETQCMFGGWDDNKOPCLWTVFSMPAAIKIKIDXDACTWNQIOZUUGX");

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
    msg.setTimeStamp(0.5725599642226882);
    msg.setSource(17639U);
    msg.setSourceEntity(219U);
    msg.setDestination(22490U);
    msg.setDestinationEntity(195U);
    msg.timeout = 4797U;
    msg.lat = 0.10424654655180687;
    msg.lon = 0.21637932394132497;
    msg.z = 0.9882884097502215;
    msg.z_units = 41U;
    msg.speed = 0.45372476557668784;
    msg.speed_units = 201U;
    msg.roll = 0.13716134033817595;
    msg.pitch = 0.5313647886246234;
    msg.yaw = 0.4343003332101867;
    msg.custom.assign("LEHPGOEFKGBJKJPSSEXIPZALISQRNCNNORCDIBKQCXEFEGSNMHAZOVDBPMUXN");

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
    msg.setTimeStamp(0.5556700517260259);
    msg.setSource(27653U);
    msg.setSourceEntity(194U);
    msg.setDestination(57259U);
    msg.setDestinationEntity(142U);
    msg.timeout = 49767U;
    msg.lat = 0.10752274753395163;
    msg.lon = 0.39809593522112063;
    msg.z = 0.12868436299940234;
    msg.z_units = 111U;
    msg.speed = 0.11470780611811227;
    msg.speed_units = 241U;
    msg.duration = 29201U;
    msg.radius = 0.8378467543485264;
    msg.flags = 136U;
    msg.custom.assign("EVAWVIISCHBOGGRFQKSIAQDEEPNTUOITIWWAFBSDXEEPLMQVMJASPTXZWJXDWXLHVLBTACHWROWISGDNXTREIQUCMVQBLTAILYLLERFRRQRYACOJYAPMJHWHVZHKCWOSFZXUIMGNMFG");

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
    msg.setTimeStamp(0.035455247951262314);
    msg.setSource(33384U);
    msg.setSourceEntity(82U);
    msg.setDestination(29927U);
    msg.setDestinationEntity(34U);
    msg.timeout = 22908U;
    msg.lat = 0.04107099110632617;
    msg.lon = 0.19389791729833383;
    msg.z = 0.943690847593871;
    msg.z_units = 85U;
    msg.speed = 0.12136907763784544;
    msg.speed_units = 251U;
    msg.duration = 21317U;
    msg.radius = 0.6212941061145074;
    msg.flags = 164U;
    msg.custom.assign("YWPPEIYWWVTUXUTZLPFLKMAEAWXZKWTUC");

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
    msg.setTimeStamp(0.6582358841817625);
    msg.setSource(60057U);
    msg.setSourceEntity(239U);
    msg.setDestination(62902U);
    msg.setDestinationEntity(120U);
    msg.timeout = 50046U;
    msg.lat = 0.42300110226709464;
    msg.lon = 0.2761402351575766;
    msg.z = 0.9742762001729137;
    msg.z_units = 222U;
    msg.speed = 0.4575370149145952;
    msg.speed_units = 27U;
    msg.duration = 681U;
    msg.radius = 0.21646525228486935;
    msg.flags = 103U;
    msg.custom.assign("YPMZOQWPNWCARFWXDEZMOEGEVSKRRSPYHHMOBKEUSRPPBYIXVJBQLBVHXFFDZWTIMRRREOYXSYAAZHUTIJPCDSUVQMOJCJZWFRC");

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
    msg.setTimeStamp(0.8288583584121753);
    msg.setSource(3510U);
    msg.setSourceEntity(250U);
    msg.setDestination(4939U);
    msg.setDestinationEntity(149U);
    msg.custom.assign("UGXQVVHKPDEZAMALGRVFIAHYXEYNZLDATNTPYUUWJKEXVOCKOOJCLDPSJWOSIFYFHAOZCQTJLVQFQYQIBZCCQFMDBCYMNDEIWKHCLSLYKZTSFBRYHINXYZZSRMSJWCAGUSRWBDEJGCGHKPKG");

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
    msg.setTimeStamp(0.4360415345435088);
    msg.setSource(45537U);
    msg.setSourceEntity(58U);
    msg.setDestination(9261U);
    msg.setDestinationEntity(116U);
    msg.custom.assign("ACYBQHYNEPJQIGJEOBBKBTZMWWKPICDJPCGVWQIJRLUUXP");

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
    msg.setTimeStamp(0.2327823865209221);
    msg.setSource(58853U);
    msg.setSourceEntity(191U);
    msg.setDestination(35437U);
    msg.setDestinationEntity(207U);
    msg.custom.assign("LKOIKLKDNTVLBSWGDQHIIKTNCQRBYHTXTJZMRHRGPTHCMXUTSNHZMXPFZCBTEMQJNJLRPRJRPXBVOKFAGEXWPUMVSTZLBGNNDUDSOCQJUUYGHGHDYVXYKOXOGKUCQBBRPEBESOOFJICNVZMWQIWIAAWPFZQWCYSZRA");

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
    msg.setTimeStamp(0.8524780981626817);
    msg.setSource(51822U);
    msg.setSourceEntity(19U);
    msg.setDestination(10059U);
    msg.setDestinationEntity(1U);
    msg.timeout = 6449U;
    msg.lat = 0.04822306805337462;
    msg.lon = 0.9470269716153598;
    msg.z = 0.4821366516046568;
    msg.z_units = 150U;
    msg.duration = 41447U;
    msg.speed = 0.93504261598715;
    msg.speed_units = 220U;
    msg.type = 50U;
    msg.radius = 0.9754762271505082;
    msg.length = 0.7321658298127396;
    msg.bearing = 0.013448267611646525;
    msg.direction = 152U;
    msg.custom.assign("JSNQNZCIMEJYROQ");

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
    msg.setTimeStamp(0.979264400440857);
    msg.setSource(35489U);
    msg.setSourceEntity(227U);
    msg.setDestination(42433U);
    msg.setDestinationEntity(233U);
    msg.timeout = 30092U;
    msg.lat = 0.010329422000140642;
    msg.lon = 0.504103795442555;
    msg.z = 0.6608487806848632;
    msg.z_units = 120U;
    msg.duration = 36810U;
    msg.speed = 0.8091068919348848;
    msg.speed_units = 206U;
    msg.type = 16U;
    msg.radius = 0.9640159432892421;
    msg.length = 0.43127660130701984;
    msg.bearing = 0.9201990943613625;
    msg.direction = 166U;
    msg.custom.assign("ITIKKHXNNBQBHOTEVUDLSRJPDMQCEXFSJQFQVBHWQFWNTSEGBHYGPTIHCRWUZMOOZWHQRRCYIVNTIASMTTLTUEVIMWQYBVBEYYLKKXDLTVQEXJMBKJCOKBDJVDULYAUTNNGNOYLGXZORFYUUHPPINGFLOASDCZMUOHNARPGCWZMJXOFXWLGSSNIWEGGXIRCDGFRVYZESHAKPVAZZMDKBYFJWLJVISAQPBREARJJDUOPSPCLCAQDXZPFMMFCKZX");

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
    msg.setTimeStamp(0.9001191267619767);
    msg.setSource(29445U);
    msg.setSourceEntity(233U);
    msg.setDestination(27598U);
    msg.setDestinationEntity(211U);
    msg.timeout = 56532U;
    msg.lat = 0.8428306129426586;
    msg.lon = 0.7007631572173072;
    msg.z = 0.2845963665583382;
    msg.z_units = 40U;
    msg.duration = 41357U;
    msg.speed = 0.6857660706771598;
    msg.speed_units = 167U;
    msg.type = 13U;
    msg.radius = 0.7305775140902596;
    msg.length = 0.4732431001703743;
    msg.bearing = 0.6663973270792766;
    msg.direction = 181U;
    msg.custom.assign("CQIWUXFTYYMODWJBYXNVVTWJGEYSYUYTFDLHRTJHVYTEQECIUVZOXZQBOVCASCRHDWKXLFRJBNSLTVAQAMGPQJDIUZUFFZTSPPHUEZLKJGTXTLISGHGQWPIOCOIKANZNAZAURPKCXUFVEEMIZYDIYHPRFFCGHRCOXMRSLQOPFRMDWRBGLNYEGVBISKDKJPKXQMWSGFHNOELNEOBAOHJCLWXAVMPMPKZEWABUBWKKJXVHNGRIBQLQJNMMDZ");

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
    msg.setTimeStamp(0.5871356484522556);
    msg.setSource(28838U);
    msg.setSourceEntity(235U);
    msg.setDestination(28787U);
    msg.setDestinationEntity(232U);
    msg.duration = 24397U;
    msg.custom.assign("VJGPDKKIAFYSJIOAZFWWDPTIWJPAVVXDUQIK");

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
    msg.setTimeStamp(0.9488088610808569);
    msg.setSource(51554U);
    msg.setSourceEntity(74U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(53U);
    msg.duration = 19461U;
    msg.custom.assign("OMJCIYHYMEWBGZCKZXNFQFIKRPVLEZLVWIHKTDLAEAIDUJSAYDCULPGCTWSNAAHYXZPJPECHFRPORTK");

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
    msg.setTimeStamp(0.3823417680857132);
    msg.setSource(55705U);
    msg.setSourceEntity(70U);
    msg.setDestination(57328U);
    msg.setDestinationEntity(42U);
    msg.duration = 52861U;
    msg.custom.assign("AXZGYZBCETUJOUNDAJXQPINNIUYTKDQRIKSQUIJJSLAHGBWESTPTWEJLYOWAVPHXJFGWDGRNCFNNPCCOFKPEGWITWCFIMFGXMIPBRLBTVRWSCLBGDAF");

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
    msg.setTimeStamp(0.5509730087645024);
    msg.setSource(9365U);
    msg.setSourceEntity(249U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(148U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.5542456697794513;
    msg.control.set(tmp_msg_0);
    msg.duration = 39309U;
    msg.custom.assign("XPEPFTAQZEAYAOYTRQYNXIBDZBWIDGBLCLSVFHYSQMHNIOKRGIBTOTGHFCLDPMRHHKKEKYGJWXQCNWDPNTEGUSVZMJFKFLHUZROWIFVDUKLCHIRWHMIAFVERFJTPJZVTHRMIUIZNYOZVQOBYYMTEWHVCXOPJVZLDGPEVMUQDYCWWSUE");

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
    msg.setTimeStamp(0.3830070547847986);
    msg.setSource(48000U);
    msg.setSourceEntity(238U);
    msg.setDestination(26917U);
    msg.setDestinationEntity(60U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.038958974470222674;
    tmp_msg_0.speed_units = 66U;
    msg.control.set(tmp_msg_0);
    msg.duration = 59609U;
    msg.custom.assign("YBLSNMUHGVLAMAVIBMNPDRAEMZTJCIIRFLPZJUCRAKMQUBIJAPUDJKLCINZHFOLBXDDFSBPYNNDSOEWLHUNCWFIWDHXIJASRCGIGVYYZRXJPYMLCXHTWDDZCPR");

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
    msg.setTimeStamp(0.42502436730644133);
    msg.setSource(23834U);
    msg.setSourceEntity(63U);
    msg.setDestination(38430U);
    msg.setDestinationEntity(63U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2181791836U;
    tmp_msg_0.start_lat = 0.8242722510662482;
    tmp_msg_0.start_lon = 0.9387787222268725;
    tmp_msg_0.start_z = 0.4319887286732381;
    tmp_msg_0.start_z_units = 34U;
    tmp_msg_0.end_lat = 0.3803094511889674;
    tmp_msg_0.end_lon = 0.7317978097664194;
    tmp_msg_0.end_z = 0.5334327694902135;
    tmp_msg_0.end_z_units = 22U;
    tmp_msg_0.speed = 0.5280450835510677;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.lradius = 0.41515468351830265;
    tmp_msg_0.flags = 66U;
    msg.control.set(tmp_msg_0);
    msg.duration = 40222U;
    msg.custom.assign("OPZBRBNGWWIIOVDTOUOJHGGTPNUYOERAZEMQVAPPRZTSGVDRYPXWHHGIYLCNUDDOCPIBOBDSJVWIJBFAENSJMHMKNLPRAWKLPJSEYOXDQAQDKZZNXYFAMKFFNDLZBWEUXIRVGTQKEHJNCQGUXBCWAXBFQVVRALACNWGEQRYLXIZFTDUMVCFLVWYTSPFRTAJK");

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
    msg.setTimeStamp(0.2777630484809891);
    msg.setSource(10234U);
    msg.setSourceEntity(134U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(222U);
    msg.timeout = 39505U;
    msg.lat = 0.33967215037637744;
    msg.lon = 0.5474950254546853;
    msg.z = 0.05293585034170689;
    msg.z_units = 240U;
    msg.speed = 0.23584925175002602;
    msg.speed_units = 134U;
    msg.bearing = 0.12010862343630979;
    msg.cross_angle = 0.49419114242193596;
    msg.width = 0.1175343115118962;
    msg.length = 0.24543315620916306;
    msg.hstep = 0.3558153910093368;
    msg.coff = 177U;
    msg.alternation = 68U;
    msg.flags = 200U;
    msg.custom.assign("FJFEGXLWFYCXYOQDNFMIMZPWYXNPQKOIFRMNZPKDRAMXFSSARBAFZSQBAMUSOTFJKNHLGIWSZPCACLJYMLHVBRKKEYTBWNBIGASHLEXGGWNXTJIUDCXOREXHRTKBNUSVJVBUPQIMYWYUXAPAUQTLVZJV");

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
    msg.setTimeStamp(0.5286792541033646);
    msg.setSource(53921U);
    msg.setSourceEntity(14U);
    msg.setDestination(36458U);
    msg.setDestinationEntity(78U);
    msg.timeout = 5310U;
    msg.lat = 0.8369169569775337;
    msg.lon = 0.6279038156149777;
    msg.z = 0.34606979284288186;
    msg.z_units = 82U;
    msg.speed = 0.18977569522277604;
    msg.speed_units = 200U;
    msg.bearing = 0.7858230596539588;
    msg.cross_angle = 0.546357749886757;
    msg.width = 0.5324410921221038;
    msg.length = 0.054991226860631626;
    msg.hstep = 0.7277983409565582;
    msg.coff = 34U;
    msg.alternation = 30U;
    msg.flags = 197U;
    msg.custom.assign("XYYPFWBWDNAVIMGLOUTOPBDWLWSPRWKEONIISYTPQJARYUTUXGSGBWMVVQZDZVULEQKZMVFTMARUFWOQSNKNZXWEZQKMZVKRUBXEYNCCPAOXQTSIOBFYLECSCPYIIGZUHPGCBDEGJ");

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
    msg.setTimeStamp(0.02096239538506084);
    msg.setSource(30617U);
    msg.setSourceEntity(124U);
    msg.setDestination(48636U);
    msg.setDestinationEntity(92U);
    msg.timeout = 39951U;
    msg.lat = 0.6282900873974199;
    msg.lon = 0.44167231830770626;
    msg.z = 0.9413235127137152;
    msg.z_units = 181U;
    msg.speed = 0.4082363332386989;
    msg.speed_units = 212U;
    msg.bearing = 0.6350004194097124;
    msg.cross_angle = 0.022120070225202015;
    msg.width = 0.5953323313761353;
    msg.length = 0.5423426937486637;
    msg.hstep = 0.1319865663555987;
    msg.coff = 109U;
    msg.alternation = 89U;
    msg.flags = 179U;
    msg.custom.assign("QDFSVZTVRGOPGWSJEMYXLRTFGAKVINELLVOMDFBPGMHULRWFVLLDOTTEZFEHVBVNZANSPNWUUJMIPYKIKFJDACBJMDQXRQJJWSQPHTZSYGHAIATAKYROYZRDAHORRPUHTGOOVJWTMTCFAKCEXQOYBBRUIWLVYFUZQNUHCXOOVYKXCFDKDSXWRQSIGSNSTLPBWPXQHGQXAMIUCPGWZCABXMENFLSIUNHZNEBZKECCDX");

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
    msg.setTimeStamp(0.6542057176164339);
    msg.setSource(56363U);
    msg.setSourceEntity(175U);
    msg.setDestination(53668U);
    msg.setDestinationEntity(26U);
    msg.timeout = 28937U;
    msg.lat = 0.7720563266450439;
    msg.lon = 0.3804888120398989;
    msg.z = 0.9297453936226986;
    msg.z_units = 38U;
    msg.speed = 0.734608655792397;
    msg.speed_units = 51U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7189182490172474;
    tmp_msg_0.y = 0.3493884478371202;
    tmp_msg_0.z = 0.7939884363582038;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YYWHHNWBEMNKLKUVVEOKGUMXHEAJDXBBZONXJGBRDTGWUSYJBJMRDRPNYFMKCSIHOIHMEJXFKCLMZKPJZYAIVAQLRCAZENJRDBFDPDLXDWLNLIFMSPORTHSYEUEFBVUKSTJXQOPT");

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
    msg.setTimeStamp(0.9399624022315515);
    msg.setSource(39920U);
    msg.setSourceEntity(72U);
    msg.setDestination(61672U);
    msg.setDestinationEntity(48U);
    msg.timeout = 23425U;
    msg.lat = 0.21509392723033194;
    msg.lon = 0.6163789741082489;
    msg.z = 0.5368657669176031;
    msg.z_units = 148U;
    msg.speed = 0.6763666102026965;
    msg.speed_units = 104U;
    msg.custom.assign("VXJWGUTHHZPWUTJYOBWMERTFRONZVEJWVBYRSSFYIRMNVNJAXJHJDMDQEMGQPNFXOLAOOUSGQXMPCZUKGCOLKCXFEQRNILSHKADZPAJFEPSCDVTBLKMQLTFPVBZFYUHYHYXKHKCTMBSIPLAHVWILIKLJZWXZ");

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
    msg.setTimeStamp(0.04427764919847044);
    msg.setSource(21833U);
    msg.setSourceEntity(39U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(9U);
    msg.timeout = 35758U;
    msg.lat = 0.7148929467046488;
    msg.lon = 0.154757813210747;
    msg.z = 0.10502803434023622;
    msg.z_units = 177U;
    msg.speed = 0.9232425539564919;
    msg.speed_units = 123U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.52846259547201;
    tmp_msg_0.y = 0.3405168863913298;
    tmp_msg_0.z = 0.8448700855867175;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HABYYXINWMTDTJEKIJAVZERAYOWNKJMMUHLUDFERSTBRUXGQWTJFMNHQXAYGBNTSVSHPRLJPDCZVYJYQACIEGOUTLJXXLBYVWZNGHLCSZPCVVRZQCWDNKKWFEYIJDKOSUIATQPLHIPCULUHBEOIOFLPRKWHZU");

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
    msg.setTimeStamp(0.859640913938901);
    msg.setSource(49114U);
    msg.setSourceEntity(17U);
    msg.setDestination(13266U);
    msg.setDestinationEntity(87U);
    msg.x = 0.9166030170084083;
    msg.y = 0.13470360457766017;
    msg.z = 0.23395032855919662;

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
    msg.setTimeStamp(0.09703425806972077);
    msg.setSource(28641U);
    msg.setSourceEntity(115U);
    msg.setDestination(39613U);
    msg.setDestinationEntity(217U);
    msg.x = 0.1091276800010802;
    msg.y = 0.7094599416809034;
    msg.z = 0.3909107727291522;

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
    msg.setTimeStamp(0.345741057284912);
    msg.setSource(30007U);
    msg.setSourceEntity(16U);
    msg.setDestination(38983U);
    msg.setDestinationEntity(88U);
    msg.x = 0.28859614032627934;
    msg.y = 0.6534284655869127;
    msg.z = 0.3102277412992718;

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
    msg.setTimeStamp(0.09072410128154906);
    msg.setSource(28809U);
    msg.setSourceEntity(8U);
    msg.setDestination(62495U);
    msg.setDestinationEntity(116U);
    msg.timeout = 5399U;
    msg.lat = 0.6518151939731516;
    msg.lon = 0.5191017760601613;
    msg.z = 0.5840045220183328;
    msg.z_units = 252U;
    msg.amplitude = 0.9662287135013544;
    msg.pitch = 0.9272002046948504;
    msg.speed = 0.9967291482863545;
    msg.speed_units = 21U;
    msg.custom.assign("GSFLEEWZMNIEVQQYMDNRLYEAPXLICADCVTMSBWOAOTQLJHSLONMYYWYWHSDYONFWMOBZESXDZXCGJIBKKOCEGYXMLBJEUTWAVPNOFOXALCOCRYRNUKPJFHWRTGSZFHIOEPVSDRSPJZVIKGURDGQAPNZBTNQIHCVQQUUZEQXSPILTBZPZCKIQMSHVJZPFBLFBWHQRMAKH");

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
    msg.setTimeStamp(0.14139335373954987);
    msg.setSource(44892U);
    msg.setSourceEntity(94U);
    msg.setDestination(7599U);
    msg.setDestinationEntity(38U);
    msg.timeout = 30201U;
    msg.lat = 0.40973693182088766;
    msg.lon = 0.6652308256636618;
    msg.z = 0.10761608810217871;
    msg.z_units = 128U;
    msg.amplitude = 0.9016923613169846;
    msg.pitch = 0.4859105442084066;
    msg.speed = 0.26209226878786906;
    msg.speed_units = 85U;
    msg.custom.assign("KBRMRBVYOQMQOPMHMZNFHORUQURERWGGLECJRNWYFTAFSGEIEZSVAUNIZMCXOCYVGBDUHTKAJJYLPYFXALAMITWICJGXTCKQHRJPJBBVBSKKQERPQXYDWLJCDDUIZCFBVCWHIBINLHTCPXVNTDZLXGMHWVIOHIMKMBDUKDGEYDOTSXYVXXCFSEAKWNQLTAAPAFTMW");

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
    msg.setTimeStamp(0.6480976534890741);
    msg.setSource(56128U);
    msg.setSourceEntity(142U);
    msg.setDestination(46993U);
    msg.setDestinationEntity(53U);
    msg.timeout = 31523U;
    msg.lat = 0.9427145674260387;
    msg.lon = 0.09619667546261546;
    msg.z = 0.7936722025579551;
    msg.z_units = 198U;
    msg.amplitude = 0.8148544970178869;
    msg.pitch = 0.713054681668977;
    msg.speed = 0.6329235290153609;
    msg.speed_units = 182U;
    msg.custom.assign("VTJYGTMOKZWDFDJZWEIQOUTDDMSEYXDTMKEHWVNQLMJNVMZQRCAVNPBFRBMAQDAJAAYVUEGCGBHFJILPJTOKENLPXLOVTEAREBYLCTFZZUOWVGTSVYHXQSEFOGRWSLSPXXXIDAHCZHIANPXXKNHBUEFJYGSSKUCQTIOVKDFYRIIYBIAWGWLQPEMBMKLDOPNRZFBHWOKFJCQXUVDRZCJXHRZQ");

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
    msg.setTimeStamp(0.834157754881829);
    msg.setSource(40986U);
    msg.setSourceEntity(158U);
    msg.setDestination(37964U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.45940894710705893);
    msg.setSource(58276U);
    msg.setSourceEntity(178U);
    msg.setDestination(13832U);
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
    msg.setTimeStamp(0.3652263752792414);
    msg.setSource(37226U);
    msg.setSourceEntity(127U);
    msg.setDestination(25863U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.6820750369963073);
    msg.setSource(10649U);
    msg.setSourceEntity(98U);
    msg.setDestination(13270U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.44518711339843897;
    msg.lon = 0.3019186368264166;
    msg.z = 0.07883070203765652;
    msg.z_units = 34U;
    msg.radius = 0.010228956362740127;
    msg.duration = 36114U;
    msg.speed = 0.5056334399357502;
    msg.speed_units = 44U;
    msg.custom.assign("SVVBVCPCNXJSVURKSGERZIZBFIQBIUZKIFBQKTKHCIORVILVBNIERYQNRTUNQBEAHGACRYZAMNLWWYUSHFMKCEFRTHZFGNEUNPYKHOOSIBFVOLAKFIASGZKMTEFYQSFWXWXXQRXMRCBOGDLSCGSATWTBPJQLJOXLADPPWMYFQGNPMBTSJHJUJWPDLUCXEANTCYDOGXQHOWTEXDGZH");

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
    msg.setTimeStamp(0.18301368385211347);
    msg.setSource(30249U);
    msg.setSourceEntity(21U);
    msg.setDestination(60659U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.9012351158880131;
    msg.lon = 0.45978990482029414;
    msg.z = 0.810004543784157;
    msg.z_units = 22U;
    msg.radius = 0.10851029079987806;
    msg.duration = 43550U;
    msg.speed = 0.13234007528421743;
    msg.speed_units = 228U;
    msg.custom.assign("FXSTHRCEZIDAMMJVNOKHNJLABHHLLFZPTYMSGHQQYEYXOVWXEDENURPWGPAPYCDCGJHANOZRAEDSQVEIKKRCSYBDWWKUKPTRXPZQKMQNZOWZXEQEKLCHLYQGJFDWIDRILCPBTJMWTBBXSOYOPSNUVOVBXXDSHSEJAUFFCFPTMOCNGKSLHGLOIFFIVMMBGKZZFWTXNPIJDBTBLRVNZOVJQCUHJUAAEGRZWUSIAUVIULDXMIKVGBYJMTFW");

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
    msg.setTimeStamp(0.36181341032852143);
    msg.setSource(19621U);
    msg.setSourceEntity(169U);
    msg.setDestination(65327U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.3546122899813604;
    msg.lon = 0.14108794046850426;
    msg.z = 0.7022189714270641;
    msg.z_units = 96U;
    msg.radius = 0.9435181091647227;
    msg.duration = 61600U;
    msg.speed = 0.8922946567073757;
    msg.speed_units = 181U;
    msg.custom.assign("PIAVPIAPWGXQHYHZDCYEQAMZLZVLTDTKSUCYYTDITSZGIDGUTSOGAILOOBFTGLSHHOOWSJFFQBZHJPMICXDKXYAMYWNACLUJXSBKEPNEVKAYWINIMCJARXIZOMEHIRPKRBFYPTWSGUV");

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
    msg.setTimeStamp(0.24860879970094807);
    msg.setSource(15849U);
    msg.setSourceEntity(26U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(106U);
    msg.timeout = 42086U;
    msg.flags = 37U;
    msg.lat = 0.8221500140563991;
    msg.lon = 0.012743655026084766;
    msg.start_z = 0.13773869732916577;
    msg.start_z_units = 203U;
    msg.end_z = 0.031542969218159134;
    msg.end_z_units = 236U;
    msg.radius = 0.925203986726374;
    msg.speed = 0.8191072294584575;
    msg.speed_units = 82U;
    msg.custom.assign("TEVCTMTQFJFQWGBEQKXEBIJHWFABCRMNKLBWNQFUFNXMWABAXZYSODICIVSGUOLWBSPVKRBRYKXDHMUQGOBEOACQPVPHNTHORTXYLOUINJRLYMGOAPKRCERFZYE");

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
    msg.setTimeStamp(0.4329749682518498);
    msg.setSource(56092U);
    msg.setSourceEntity(180U);
    msg.setDestination(47654U);
    msg.setDestinationEntity(15U);
    msg.timeout = 15089U;
    msg.flags = 168U;
    msg.lat = 0.6933326384204217;
    msg.lon = 0.1524141717209876;
    msg.start_z = 0.06046090750062172;
    msg.start_z_units = 29U;
    msg.end_z = 0.286159541526001;
    msg.end_z_units = 115U;
    msg.radius = 0.5307137309969799;
    msg.speed = 0.29080024439141694;
    msg.speed_units = 168U;
    msg.custom.assign("NBSJZGGSIMYDFOMTUBHIGBYDLMVMVZQPQCXNLQJWQNVRORCDRIIABEITUFFAPQBUMUICHJCOHEOETMXQPBAUBRCUVTAAAFKRRFLCOUJHOGKKTYSLJKYDUQHJMLFPGELEKDAKFQGTFYHTVXJWIAUI");

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
    msg.setTimeStamp(0.6286666257490979);
    msg.setSource(9806U);
    msg.setSourceEntity(64U);
    msg.setDestination(49652U);
    msg.setDestinationEntity(175U);
    msg.timeout = 50685U;
    msg.flags = 142U;
    msg.lat = 0.4099174762483001;
    msg.lon = 0.9531472472129356;
    msg.start_z = 0.6967890683831005;
    msg.start_z_units = 151U;
    msg.end_z = 0.3524332430033652;
    msg.end_z_units = 5U;
    msg.radius = 0.37343931520326257;
    msg.speed = 0.14954695658301342;
    msg.speed_units = 75U;
    msg.custom.assign("RBQJBQCRWTRPNVFFMKGWVZQTGFKGGQBTLQGBKSUVWYIUBKHPCTJOJSZXZTTNRCHYKECLDEINQKZSTQUYMOYPFWMBGSFLZNTPIAHXJVAVOCDROKOVHUFNYNCPKLJRDZRPQLRWEEHDVHFGYNWASBTOISIXKXMBDEMLZDIUWMUYTEFMMFPDODOREZJPLGNVZIFAMJHJPLQYSRWD");

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
    msg.setTimeStamp(0.9668652022435653);
    msg.setSource(54368U);
    msg.setSourceEntity(11U);
    msg.setDestination(20732U);
    msg.setDestinationEntity(167U);
    msg.timeout = 12569U;
    msg.lat = 0.3898837642343591;
    msg.lon = 0.5927293457462527;
    msg.z = 0.150109694944904;
    msg.z_units = 111U;
    msg.speed = 0.09301540505953232;
    msg.speed_units = 67U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2838361998525314;
    tmp_msg_0.y = 0.5877212499660965;
    tmp_msg_0.z = 0.2699110941597528;
    tmp_msg_0.t = 0.44870166975125425;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SUYYMPBKPPNVRTHAXNSPCTMAGWYVICSWEMBNLLDODAXJZVXCYAJIWDOZVISICELFGWRRTOTCBEDQQEMHDDODOBMVRKSFZWRYGHMYSWJFTEBDZIBCVKLJNGAVKIUXKZJOPCPUMGPLKAEAFTSXQPNRCLVBLZVWKQZHRTBMHTOEGMLOIHBZXKRVIKFPQRLSEIUMNSIYNQYDHHXHYJUQGSYZTBGX");

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
    msg.setTimeStamp(0.029658721536922505);
    msg.setSource(57793U);
    msg.setSourceEntity(172U);
    msg.setDestination(12450U);
    msg.setDestinationEntity(209U);
    msg.timeout = 34993U;
    msg.lat = 0.7903038090045919;
    msg.lon = 0.9851589472314671;
    msg.z = 0.7870658678288864;
    msg.z_units = 243U;
    msg.speed = 0.5153373173043206;
    msg.speed_units = 220U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.868171739586006;
    tmp_msg_0.y = 0.5290204393405711;
    tmp_msg_0.z = 0.12023450012040637;
    tmp_msg_0.t = 0.27406020140288345;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SMBSWVGHCADEXZMQUOEDQCKARVANAVZPLHHFGRM");

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
    msg.setTimeStamp(0.19025828568354963);
    msg.setSource(63907U);
    msg.setSourceEntity(26U);
    msg.setDestination(61106U);
    msg.setDestinationEntity(65U);
    msg.timeout = 55625U;
    msg.lat = 0.6717529955472257;
    msg.lon = 0.06799687106249674;
    msg.z = 0.8830246658650253;
    msg.z_units = 47U;
    msg.speed = 0.4961716783899234;
    msg.speed_units = 82U;
    msg.custom.assign("SGLXNADATGOHIDWTDDGUHXMCJACMGSQEUFPPJCKUSUDVOFXXPSMUKWMJGAHJPJZRNSELDQBINQWIOJCEEZZBDRYRKBLTGHTYRKLSQPNIWPYBWNHOTUYVEQWXAIYYFJNRBXWQJLCRAPBATSZXYBYQZTZVYCCVVAVXFMLOXIQUKMVHDIPLAFSLEMGIUKCQDFHRESEAV");

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
    msg.setTimeStamp(0.280416862909851);
    msg.setSource(4208U);
    msg.setSourceEntity(23U);
    msg.setDestination(35062U);
    msg.setDestinationEntity(244U);
    msg.x = 0.9988186874014331;
    msg.y = 0.30780827612700423;
    msg.z = 0.7226733783908651;
    msg.t = 0.3599463020405381;

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
    msg.setTimeStamp(0.7770452655744524);
    msg.setSource(18698U);
    msg.setSourceEntity(238U);
    msg.setDestination(14556U);
    msg.setDestinationEntity(144U);
    msg.x = 0.6344345631863353;
    msg.y = 0.160395768858132;
    msg.z = 0.5204140008383918;
    msg.t = 0.42790029809013364;

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
    msg.setTimeStamp(0.01947154412001406);
    msg.setSource(17591U);
    msg.setSourceEntity(182U);
    msg.setDestination(53584U);
    msg.setDestinationEntity(225U);
    msg.x = 0.2706228372277648;
    msg.y = 0.24220578151829897;
    msg.z = 0.30954224555424825;
    msg.t = 0.1916934025374668;

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
    msg.setTimeStamp(0.7683667165098196);
    msg.setSource(44953U);
    msg.setSourceEntity(179U);
    msg.setDestination(45068U);
    msg.setDestinationEntity(46U);
    msg.timeout = 55524U;
    msg.name.assign("KEQBPBACVJGCRBEMSRHNTPXKYRXRMPUTMWMIPKLQRRLOYUMVYCBSIKKOI");
    msg.custom.assign("IACQRQJNTSVDHNEONFHZVKGTRUSQSSSUTDBSNXIAHGHWZFZJVKOYGREPVLARNYKWXZFWFJOYPLQA");

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
    msg.setTimeStamp(0.4466804643534421);
    msg.setSource(33497U);
    msg.setSourceEntity(118U);
    msg.setDestination(63089U);
    msg.setDestinationEntity(142U);
    msg.timeout = 12547U;
    msg.name.assign("DLDOMVTWHAENXACNGQBPFIMWJBESSEJRORGVSDQOXXNRQKCPSJVERQINDUZFYNALWTCULJ");
    msg.custom.assign("OPQUQABEXGXZTYENRPHUJNXWIKYBFPTDOUIJPJLYFFBUJQHWIYLCBDDBNLJWPMGJKKCEFMHGZOLRHXUQIQKJHLJVPNIVDWDOPZUAAXFZWRTMRFPNIEPCPOCASTKLFUKIGSAJQGQOSTGBYDWBQAKMZIOHGVMZCRVQZHMMMENHXDZLRE");

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
    msg.setTimeStamp(0.17069167102181604);
    msg.setSource(28833U);
    msg.setSourceEntity(136U);
    msg.setDestination(10548U);
    msg.setDestinationEntity(195U);
    msg.timeout = 63988U;
    msg.name.assign("WYTUXZLEDGVWVAZWEMRPKDYHJYBJBULEPCIKPROGJMIBVGBFSZDGBHGAMHYPVTHLXSHTRISKZKNTMFTKQEDFVYRPUVIRQVQSUWLQOENBJJCMZMCAWINZFSIWCGXRXDXCIMTZDRAHUUPFXCODUFELHXMNWNGNQVSOAOSAGDZTWKQFBBJCAUPHTTEUDJOAGLYINNKQNXHMERSQFYBIFWOUOKRJVPZLLVJXRZIBOWPYYAECFCJS");
    msg.custom.assign("ZTOYCBHERGWOUGRVGMUKMSJQBCNYTZSPELGEMTEZRPNYIYAXXXQVFDJKDBNXAFQHERGPJCYELNUFRSGUWJQUONAMRAEVVNIY");

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
    msg.setTimeStamp(0.48791532285683836);
    msg.setSource(53559U);
    msg.setSourceEntity(186U);
    msg.setDestination(59869U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.009924381060123055;
    msg.lon = 0.9521115613111526;
    msg.z = 0.42678491909565264;
    msg.z_units = 40U;
    msg.speed = 0.2269831104249358;
    msg.speed_units = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17274U;
    tmp_msg_0.off_x = 0.6610204264399877;
    tmp_msg_0.off_y = 0.9411789899764658;
    tmp_msg_0.off_z = 0.3085838125444298;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.20968806901007475;
    msg.custom.assign("PQSQYIOMALKKEZUKVLQYFRCBAOQPLVBWXPWOTPCJNCIBEOFUZEEMNPXGYMZEXDHDGRDZ");

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
    msg.setTimeStamp(0.5884084507562495);
    msg.setSource(18725U);
    msg.setSourceEntity(39U);
    msg.setDestination(24643U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.7937420687643302;
    msg.lon = 0.17363596823093141;
    msg.z = 0.5017193145628434;
    msg.z_units = 185U;
    msg.speed = 0.5720867368754615;
    msg.speed_units = 244U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.06883332709719336;
    tmp_msg_0.y = 0.20669529883171156;
    tmp_msg_0.z = 0.8033347650977057;
    tmp_msg_0.t = 0.3774309211431405;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.1863878669124901;
    msg.custom.assign("QHENFIHVIBUGESVNQYCGECPVUMXTRJZAXOKWJMKOEMFSMYEHDXRFJMLYWSFEDYLIRPTDICPLFASGBBAXPJTOVVXZKOAHDXPOWINWQOCJYUPGSBNYAXNKJDALHTGPLOWAXGTQRVUFLLBAZCMGZHNURVQMTLARKOZPWIEKKQEDWCUVZTBUKGTBWBYFCJYAZUNWCXLJKCD");

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
    msg.setTimeStamp(0.38568089683383444);
    msg.setSource(26570U);
    msg.setSourceEntity(158U);
    msg.setDestination(11176U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.970139743793817;
    msg.lon = 0.04695810775583109;
    msg.z = 0.4401538426302305;
    msg.z_units = 146U;
    msg.speed = 0.973180838140759;
    msg.speed_units = 57U;
    msg.start_time = 0.9650126796273776;
    msg.custom.assign("QMLUOITEHDAZYYXMSBCQBXIITSRGWHDMBNGROGUGHZWMOHRLWRIEYULGXRGWAESI");

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
    msg.setTimeStamp(0.03216315980485074);
    msg.setSource(2136U);
    msg.setSourceEntity(27U);
    msg.setDestination(58831U);
    msg.setDestinationEntity(26U);
    msg.vid = 50227U;
    msg.off_x = 0.9072632765636488;
    msg.off_y = 0.5768996528388017;
    msg.off_z = 0.7035189478005053;

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
    msg.setTimeStamp(0.7001012210754215);
    msg.setSource(54680U);
    msg.setSourceEntity(163U);
    msg.setDestination(9538U);
    msg.setDestinationEntity(124U);
    msg.vid = 54669U;
    msg.off_x = 0.887537218887165;
    msg.off_y = 0.8392436180352647;
    msg.off_z = 0.883303776859557;

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
    msg.setTimeStamp(0.4447213546875771);
    msg.setSource(46557U);
    msg.setSourceEntity(200U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(40U);
    msg.vid = 20695U;
    msg.off_x = 0.7553635902887066;
    msg.off_y = 0.04752257131992477;
    msg.off_z = 0.7935804797907158;

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
    msg.setTimeStamp(0.9745189039647529);
    msg.setSource(4902U);
    msg.setSourceEntity(79U);
    msg.setDestination(29701U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.02949101529607201);
    msg.setSource(23898U);
    msg.setSourceEntity(12U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.940567192317102);
    msg.setSource(3212U);
    msg.setSourceEntity(232U);
    msg.setDestination(10221U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.6901558351715322);
    msg.setSource(13350U);
    msg.setSourceEntity(227U);
    msg.setDestination(32132U);
    msg.setDestinationEntity(93U);
    msg.mid = 26595U;

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
    msg.setTimeStamp(0.9979423909129594);
    msg.setSource(11534U);
    msg.setSourceEntity(213U);
    msg.setDestination(13656U);
    msg.setDestinationEntity(110U);
    msg.mid = 47814U;

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
    msg.setTimeStamp(0.8647752878132546);
    msg.setSource(50774U);
    msg.setSourceEntity(254U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(146U);
    msg.mid = 64954U;

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
    msg.setTimeStamp(0.8320199540718277);
    msg.setSource(60094U);
    msg.setSourceEntity(240U);
    msg.setDestination(11660U);
    msg.setDestinationEntity(101U);
    msg.state = 140U;
    msg.eta = 63114U;
    msg.info.assign("VJHTTVPTROQRTUOTXJQJMBWGMSFXVCGLUSQLCIYYHAPFFLPUAZLGSIWZRXVCCUNJEEJAKGRQUCHDFMQQPKWLOVVOAGKMHNIKIATTFGLOPZSARICDUZVNHYXJNXKREYVHNMMTFWSWWYDZFQWGPZOSXWXYNEFQHUQZZAHZTCZLTOXGLLJDEDJCRKMIBIKAPDAWEBBPSBRUBRMIGNDSLPXFQYXCKBMYHBKOJVBNMPRDCSBVEYJ");

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
    msg.setTimeStamp(0.9637051577423039);
    msg.setSource(38526U);
    msg.setSourceEntity(227U);
    msg.setDestination(38547U);
    msg.setDestinationEntity(140U);
    msg.state = 236U;
    msg.eta = 26794U;
    msg.info.assign("BRIRVFQLZUFXWSTKUIYDXWOAEQGBIFPDMWDAMSXBIXZPKLYDFYWSNHAMCEHERPSRKIBELPGHGOHBVXLAQUJXUGMIMJLDTBMCRSUJLAHYNMVZVOPAUCQMPOTUZWKS");

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
    msg.setTimeStamp(0.49374964615102557);
    msg.setSource(44191U);
    msg.setSourceEntity(23U);
    msg.setDestination(38301U);
    msg.setDestinationEntity(35U);
    msg.state = 165U;
    msg.eta = 54162U;
    msg.info.assign("BGCZVSFAKIJRLCNIBAGIXHKJWVQNXHOYOHLFWMXSCTOGZVNZFCCXUFXRPRURQKMIAPEBDZOHDUYLFTWLMMHJBKYUUNQUDSBOYPQIMDWVNDWFWGXSTWJGJEETANYROHUGEHNPYFZYAJBCAKPCGAIEWTFOLNSFENZTPKTOMJPDMMF");

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
    msg.setTimeStamp(0.492424971680798);
    msg.setSource(15111U);
    msg.setSourceEntity(0U);
    msg.setDestination(60056U);
    msg.setDestinationEntity(68U);
    msg.system = 16760U;
    msg.duration = 53927U;
    msg.speed = 0.4902298480531614;
    msg.speed_units = 86U;
    msg.x = 0.41725786668454656;
    msg.y = 0.5052859482018988;
    msg.z = 0.37225125020417604;
    msg.z_units = 246U;

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
    msg.setTimeStamp(0.2849795626545448);
    msg.setSource(26095U);
    msg.setSourceEntity(199U);
    msg.setDestination(31011U);
    msg.setDestinationEntity(64U);
    msg.system = 51264U;
    msg.duration = 52561U;
    msg.speed = 0.8853259005095601;
    msg.speed_units = 219U;
    msg.x = 0.631590115238805;
    msg.y = 0.11463648659269732;
    msg.z = 0.6869201439756969;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.3974058378137636);
    msg.setSource(15109U);
    msg.setSourceEntity(27U);
    msg.setDestination(20434U);
    msg.setDestinationEntity(134U);
    msg.system = 55535U;
    msg.duration = 50093U;
    msg.speed = 0.08126440808112334;
    msg.speed_units = 240U;
    msg.x = 0.04855444351967808;
    msg.y = 0.01717194653400056;
    msg.z = 0.21882868439648018;
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
    msg.setTimeStamp(0.6885870044748289);
    msg.setSource(62342U);
    msg.setSourceEntity(149U);
    msg.setDestination(2472U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.6204718176141567;
    msg.lon = 0.48491706752216035;
    msg.speed = 0.4332047923006479;
    msg.speed_units = 238U;
    msg.duration = 35980U;
    msg.sys_a = 26679U;
    msg.sys_b = 56358U;
    msg.move_threshold = 0.8065261020616238;

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
    msg.setTimeStamp(0.9445841541015374);
    msg.setSource(28900U);
    msg.setSourceEntity(33U);
    msg.setDestination(27225U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.7857561204088065;
    msg.lon = 0.42953960793795165;
    msg.speed = 0.9415750349164997;
    msg.speed_units = 118U;
    msg.duration = 34270U;
    msg.sys_a = 60579U;
    msg.sys_b = 20648U;
    msg.move_threshold = 0.28053066895402745;

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
    msg.setTimeStamp(0.3879476325084408);
    msg.setSource(18996U);
    msg.setSourceEntity(207U);
    msg.setDestination(45684U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.8996622065986692;
    msg.lon = 0.25856483216199877;
    msg.speed = 0.8673547944110312;
    msg.speed_units = 77U;
    msg.duration = 14637U;
    msg.sys_a = 42920U;
    msg.sys_b = 53397U;
    msg.move_threshold = 0.8197625248312609;

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
    msg.setTimeStamp(0.40412561035315975);
    msg.setSource(42473U);
    msg.setSourceEntity(174U);
    msg.setDestination(10182U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.3495960918261465;
    msg.lon = 0.8550632866916623;
    msg.z = 0.2985916566275124;
    msg.z_units = 247U;
    msg.speed = 0.3284794776400505;
    msg.speed_units = 22U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9340865278496487;
    tmp_msg_0.lon = 0.04208396373964873;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AAWUTBTLRVHDBCYIHACQCXXFYQWNWUPQZKOJGJHONSGWK");

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
    msg.setTimeStamp(0.845231581391952);
    msg.setSource(11404U);
    msg.setSourceEntity(128U);
    msg.setDestination(60205U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.4997486357445827;
    msg.lon = 0.14745014707773585;
    msg.z = 0.3603635494892077;
    msg.z_units = 44U;
    msg.speed = 0.014687905274710644;
    msg.speed_units = 91U;
    msg.custom.assign("EVZNXLZDEFZALHJIPOCFSMLFCPINDOSOWAHQAEXUEAJGLCWVMUYSWJOMQBPCIVQRHNFKOWFRNFPMWXBTNRTKTRMNDZYXQDANLRKSLWDGUPTJGNRHYWDONEBEESGVMUHUZZRTIKERZGLCY");

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
    msg.setTimeStamp(0.10837513823554756);
    msg.setSource(35417U);
    msg.setSourceEntity(147U);
    msg.setDestination(16929U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.3940384663767361;
    msg.lon = 0.1127794379410445;
    msg.z = 0.8937504762725774;
    msg.z_units = 37U;
    msg.speed = 0.7937326590267767;
    msg.speed_units = 19U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.39311233698036174;
    tmp_msg_0.lon = 0.7945685154515565;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JZGGHBWHPDZYXXTMNQXUEHOKTFOOYSHPONCSIXQDWBZQVGTLWBTLEQMPQMUVKASRWDKBAWRKEYWCDAFOOCWUTFTOIYREFLNQWPZRSNGNDMXDIJQAMHZRZBYTGDFRWAGLDIAJFGPUBSYEURRUNNFPTLLVYCPWVTIYEJVCQJIXMNJQIESPVBYSOMCAUCJJVVRRXKJTESNGYCXCDBZHKIAZVJBHLFXPKHMZEDFLU");

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
    msg.setTimeStamp(0.3455932405087795);
    msg.setSource(21235U);
    msg.setSourceEntity(133U);
    msg.setDestination(17483U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.34462663872520005;
    msg.lon = 0.17440549732445887;

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
    msg.setTimeStamp(0.27976277200446054);
    msg.setSource(14163U);
    msg.setSourceEntity(140U);
    msg.setDestination(7317U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.8258101550505412;
    msg.lon = 0.779356021318958;

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
    msg.setTimeStamp(0.621804441602122);
    msg.setSource(24895U);
    msg.setSourceEntity(155U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.1976141938639382;
    msg.lon = 0.7491767355572061;

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
    msg.setTimeStamp(0.6977942513817783);
    msg.setSource(45598U);
    msg.setSourceEntity(165U);
    msg.setDestination(1642U);
    msg.setDestinationEntity(26U);
    msg.timeout = 25216U;
    msg.lat = 0.25036795978371906;
    msg.lon = 0.14383748613027958;
    msg.z = 0.896230795131581;
    msg.z_units = 99U;
    msg.pitch = 0.7535669827951413;
    msg.amplitude = 0.23872495672094696;
    msg.duration = 46123U;
    msg.speed = 0.4524195268958797;
    msg.speed_units = 63U;
    msg.radius = 0.9576217061547487;
    msg.direction = 11U;
    msg.custom.assign("THYKZOUMZGHEJPEYGAFEPPLLYTLXVWNEQOBYADOAHTDBTCTACSLZFIXMQHWYFMKQSCJFDJBPRLURJXBVWWESMJLFZRKMNEASPNDRHYMDOPKNFUGQTAZXSJGYNLQZZHTHFZRIWAGRKDKWGFXEBHOZSDPBOUOXUIRKRPKKUJHVUVLJFBNCUQACMGMCTICVGSQIILWAMEQCNIFIVQYGDXSBJNEUYHRCUBVNWOWCVRVOPXWNOPDXBSMVGI");

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
    msg.setTimeStamp(0.9123473774737203);
    msg.setSource(36854U);
    msg.setSourceEntity(86U);
    msg.setDestination(38651U);
    msg.setDestinationEntity(41U);
    msg.timeout = 34024U;
    msg.lat = 0.36131808769187523;
    msg.lon = 0.7412299791301755;
    msg.z = 0.9247964638188808;
    msg.z_units = 191U;
    msg.pitch = 0.8680225770036115;
    msg.amplitude = 0.45885947588933185;
    msg.duration = 10072U;
    msg.speed = 0.5665478999291682;
    msg.speed_units = 106U;
    msg.radius = 0.8502093735738692;
    msg.direction = 31U;
    msg.custom.assign("KHIPZQVKMHRKGXZVVQVCQTCOOBOSWTJKIISIDRWVEHQUJYCXAAURFQLACMKXHNIAWXTEVEWCWTEYKNBHMKYNODEMJZKAGOYJBUXIRHPUPPTPRBRDWAFZPMEDMULYNFWOBKQULCCBMJEFYOCZSRZQIVTG");

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
    msg.setTimeStamp(0.09405576424033901);
    msg.setSource(26965U);
    msg.setSourceEntity(232U);
    msg.setDestination(18738U);
    msg.setDestinationEntity(102U);
    msg.timeout = 31278U;
    msg.lat = 0.654296949010963;
    msg.lon = 0.8545565664048846;
    msg.z = 0.5019317813200691;
    msg.z_units = 72U;
    msg.pitch = 0.7076914912340063;
    msg.amplitude = 0.688644439202979;
    msg.duration = 25635U;
    msg.speed = 0.9379080198963359;
    msg.speed_units = 84U;
    msg.radius = 0.4744559330754131;
    msg.direction = 11U;
    msg.custom.assign("OHUUEBTWGYCAUDHWDCUDYGRGTZJEBIMYPPPRMHQIGPAFOORJNUFQBAXSTAZDFVZMVCLBHWAMXNWCTKEZOPZPLFKFXXELKITJBLXDTBZENWULTEFSHIVZHVQWFYXDGMSHICVKX");

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
    msg.setTimeStamp(0.045788675763701714);
    msg.setSource(1256U);
    msg.setSourceEntity(13U);
    msg.setDestination(48652U);
    msg.setDestinationEntity(212U);
    msg.formation_name.assign("XTASJOXAPTIYRNEWMTGUCSQWHMSEJZRDVUWUTLEXBIOLKKKYPFPPJMBHHOUUARSYXGTXKBHZUJMIAWZVHRQPSSOITNFVZSGLRMAQ");
    msg.reference_frame = 109U;
    msg.custom.assign("GEEWCNCEKGMNRWGFMPHYMDJZBIYCAGTBSYXQAKBWAUAVSXNGQCTKRUKBOKWJYWZQHBOSAQIVZNFIFEAXUQMJLDOTFPBUUFUWYVMXXTHSTFWPZGFYXOSEVPADMPMIPORFFCNEGGVLVZJHZAXTCRRZINUCBZEGKYNEPJIKNTOMSLVYAJNRDTROODDLMDNQIHARUQHCYDBTIOIQXZJFSPJKVSULKREIQXDPLBCWKWVHGRPQCOXTBMLHDLE");

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
    msg.setTimeStamp(0.5793749693903516);
    msg.setSource(63219U);
    msg.setSourceEntity(114U);
    msg.setDestination(57479U);
    msg.setDestinationEntity(251U);
    msg.formation_name.assign("LXZWLMXYZGULBFOPDEZJNJSVIRDCWRGFCIMAEQXXOWILYDHZORMIODHKLOASCATCZOZDKBKHSTLSGEFFETOTPTHDFKNJITSNRAQMUDEVNYVZBEMGQLTWVKYQHQWUPJIGTCCDPGUBGYKKKPBMPXXYXJGMXSEUWFZURNVQAQIDQACNJRBHEHAAUPYQLNFOSJJYGVNYFVH");
    msg.reference_frame = 65U;
    msg.custom.assign("NNXEHEEMQSIHJDYSIJDLZGODBXAEVBBRVNOXFCMHSRZIMAFWCSRYDYRBHDJU");

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
    msg.setTimeStamp(0.5414309103436228);
    msg.setSource(56971U);
    msg.setSourceEntity(24U);
    msg.setDestination(37892U);
    msg.setDestinationEntity(81U);
    msg.formation_name.assign("ZKIYYNVLIDOPGFQVLTDQJBRCEARJYCWURVRTKGDSXJUWFIDVGTPXNWHQPOZKIIDCJRIKCIHDPWAHXCZZAGLGCCNFBUVMNJRENEQOUGOHODVYADEXGPJTPCSSFTEUXKHQOUBRZXTGXUPIFSBTWYWBKQMMTYSJZVHMLKRMBSLXYLACYOYEDAQFEIVAGZYRVBNOHHQORFGFDMZTJFQSNPTEESNU");
    msg.reference_frame = 180U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9632U;
    tmp_msg_0.off_x = 0.14693530253765152;
    tmp_msg_0.off_y = 0.0953888256400528;
    tmp_msg_0.off_z = 0.4250637739576997;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HERLZMBAYASRRJGHXFUXSDVFJOIEKCZQQEXJ");

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
    msg.setTimeStamp(0.0032075420775832253);
    msg.setSource(32482U);
    msg.setSourceEntity(142U);
    msg.setDestination(20453U);
    msg.setDestinationEntity(31U);
    msg.group_name.assign("YRFCBECZGGNTRJXVPSBZOWUHQJJXMIEHDYGILIQZFFPNXZTABBOHXFSBCYUTRMPGLLVPDMZCTDBWULDNRE");
    msg.formation_name.assign("PPOPHQDYHUTFDIFHPOKJUKHZHEAALJVGCSGRKZVMWCLWAPSPURDYBVGTIDNQRWFVLXZEUWIYCMTPSHEILVXBJJQZMSNFNEOEKFYGFSWJNAALNHXMCBMLATLRAGZYXWURVKWKEOGQCDGWCAYKTHNKSWQPDROXRDXZILEQMDILRBRBJTTMSAETOSXJMFZNIVNXTZAGJDPNOJXIVQCCIRKYHYGTFONWOUSDZPEUFJMHBBBSQVQLUBUYUZCK");
    msg.plan_id.assign("MNRTBOISYBWQTQBVNSCAWRWQMTRGFZZEHIHFDDFGLTZMSVANDKHMUSTAPDYQJLCNJKOOJQACYCKOGDIPEQWUYHOAN");
    msg.description.assign("KEQPMRRKUPANIFDAYFHUFIOIGPUUUZTYXLOZMRHFCBKBXOJQWJNDJRNCPTWRRJGFQHMPCIIGSGFGRKEAUEMVPOZZBXKCTKVWBWXDTZAHQMLLRTDVCGVVGMYHNSWOMONLDCXQFMJFLKWBBIRSSDAEEZUOELYWNJZVDTNHGHOPSJKEAZYPJENDWMLA");
    msg.leader_speed = 0.17329527508833087;
    msg.leader_bank_lim = 0.36251841272287344;
    msg.pos_sim_err_lim = 0.8214572716117762;
    msg.pos_sim_err_wrn = 0.44025766290464785;
    msg.pos_sim_err_timeout = 50824U;
    msg.converg_max = 0.9565246920563877;
    msg.converg_timeout = 28589U;
    msg.comms_timeout = 36805U;
    msg.turb_lim = 0.0288819335108903;
    msg.custom.assign("DTWISCJJVADDSGYGAHWERLQKLWQNRTCDATCWAVCHKDQBOTVKENZYWRIQRWGNUHQZIPZYCVWZOVGNULLZFLXMISNMOZZVQFARBPZHUNHXOBBXGDPXCANHIKLLTMOVEFGXWZCPAUBRUAWGRDPRPHTQHXYPEMBOGFJNSJASFNJGTVTUKBDKFSWFFREXSJOKJUQUUMIMFAGSQUVEYIMDLEEE");

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
    msg.setTimeStamp(0.8483650914742698);
    msg.setSource(6461U);
    msg.setSourceEntity(182U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("VQGQLCDTCWTAGJPKOZUDIUPIOPIUYYOHFUXZEHEXQOOUNBSVMAVYVLWFFYMJWCGIEUTYUSHRSBXZMHIIAYGKFZRPEQA");
    msg.formation_name.assign("FYYZZKAFHCWTFRZKWPIBRZSGNVSAJJLOROGQBCFMEBIQNGXLCSJPBDNJYZPQMFDHZWXTHQUAGODMRMVOWUJIOIMKEIOXGONZVWWUQRCKJAWYGELVVUFSJEKADINAHJG");
    msg.plan_id.assign("YWPRWAEFQJSABGXCVLTESZOKEAFWHZVEEDORYMMKZDCGKDYOYICJWNJCRTYCXUQADXBKTQHDDRFINUTOKPBSWFEQKXTULURAQIDAVOPBJCISNFHBTJNOBMVLBQJMFEZNVGXMNVCPJSFTPKLSIAGIYUNRIMVZOPXLKUNMQCGPWSPGXEWGLGEXCSIPOVSINYULUQQLWCFGHHWLVUZSHZGWTBYZDE");
    msg.description.assign("KFGJOSYOQGWUFFQMSENHJDOPXAURUALVJOPIZIGISTKXZTBMMSTXLMXMGBVUVPUPNLZRDAHSKMTR");
    msg.leader_speed = 0.9123742152721819;
    msg.leader_bank_lim = 0.9647079497677068;
    msg.pos_sim_err_lim = 0.48005859951350993;
    msg.pos_sim_err_wrn = 0.5572598640851391;
    msg.pos_sim_err_timeout = 28795U;
    msg.converg_max = 0.942149291556349;
    msg.converg_timeout = 58082U;
    msg.comms_timeout = 2619U;
    msg.turb_lim = 0.9307697803414583;
    msg.custom.assign("XJDFUAUKWRZNHEUVDACMQ");

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
    msg.setTimeStamp(0.89411198942033);
    msg.setSource(63936U);
    msg.setSourceEntity(186U);
    msg.setDestination(61790U);
    msg.setDestinationEntity(237U);
    msg.group_name.assign("HTRPLIIKVYUFBLEVQOYZDMVBAJKIXFBSCMPNAUPCCN");
    msg.formation_name.assign("QERRZEDQHIJVQAGRJMXPQMQEPLGBYMODTFKHLQJNNPKOFPAGHHMXFPWKXMJDTYWUOGIOGUTADKRIPWHPZCCYZDDMXAENCWOCNGATMDVBSROEQDRCSTUYIYACUEFSWPFRMKONZAIWAXBLVTJDBLJNBUNGQWIXBSKZAVBZHXOYTRKDTFCJUVHQCIOKSESWZXEUFLBYXGRTVINISJZVWEPNJSFESVCAQZHXFG");
    msg.plan_id.assign("FXBACEGLBFALNUIDUQGTLIHZSJDUEKNAFXAIFVGCCDNJFOSYVYVVXDFBTBTAHGAMDJCJYWIHYWZWUGRJNRKXPYTMWKNSMUYBCWAVWCNZQUJAIMNDPUJPRKKFPMUYVBHOZYIKWIMNHOKYRMLDLWEXODQLZIWHLKTEKRAESLILJQRGMSSQGYBETZG");
    msg.description.assign("WDVYUMZCHPFJFBUQXXLSOKMACNBFGEFEDEXAXCBQLVMZBNCDULUQTMGVZNGQUXIOQHXKYKEEDVRJFHIPQRYBGIHQOJFPTOVJGFNCHPTKAMDLRWJACSIZQHZD");
    msg.leader_speed = 0.30229621111918903;
    msg.leader_bank_lim = 0.8095829437009456;
    msg.pos_sim_err_lim = 0.45141238436298714;
    msg.pos_sim_err_wrn = 0.6756781838777386;
    msg.pos_sim_err_timeout = 46574U;
    msg.converg_max = 0.8974124352278353;
    msg.converg_timeout = 48727U;
    msg.comms_timeout = 25855U;
    msg.turb_lim = 0.6629119071922884;
    msg.custom.assign("OKUUJHYKFBQPBBQYITHHLHMTOXRNHPJIOYFTVUKMRZGECOBCNUXLEZOTKPJQMASSQBTJIOQYYLGBCWWLYZBLGAFECORPDMHDZTWPREVNRDBUCYPSGHNDQCXRLWQHGXJEFWJDSMNOHASJACENWXGAFEIPESZKMXMIXIDCQIRWUWUKLEKZLZFPSONNVRADVDRSJRKTIOYBUIKQFLJATDZYWNLMPQVUZUVFPAKGVVNSGEXZGXAWCFYJHBVTFTXDA");

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
    msg.setTimeStamp(0.5641797347630175);
    msg.setSource(15613U);
    msg.setSourceEntity(115U);
    msg.setDestination(53638U);
    msg.setDestinationEntity(6U);
    msg.control_src = 17751U;
    msg.control_ent = 153U;
    msg.timeout = 0.701140660592162;
    msg.loiter_radius = 0.4264086743240102;
    msg.altitude_interval = 0.5471801261131845;

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
    msg.setTimeStamp(0.07589428037065316);
    msg.setSource(13021U);
    msg.setSourceEntity(229U);
    msg.setDestination(29184U);
    msg.setDestinationEntity(138U);
    msg.control_src = 15135U;
    msg.control_ent = 253U;
    msg.timeout = 0.7655549142916986;
    msg.loiter_radius = 0.06882837008002418;
    msg.altitude_interval = 0.1692063270674553;

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
    msg.setTimeStamp(0.5695684500505029);
    msg.setSource(19632U);
    msg.setSourceEntity(173U);
    msg.setDestination(7621U);
    msg.setDestinationEntity(85U);
    msg.control_src = 24812U;
    msg.control_ent = 50U;
    msg.timeout = 0.7957265255338778;
    msg.loiter_radius = 0.23880536151158194;
    msg.altitude_interval = 0.2199941926118335;

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
    msg.setTimeStamp(0.9775316231549847);
    msg.setSource(37785U);
    msg.setSourceEntity(71U);
    msg.setDestination(40909U);
    msg.setDestinationEntity(0U);
    msg.flags = 116U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.015853268442936552;
    tmp_msg_0.speed_units = 241U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.14835848119316997;
    tmp_msg_1.z_units = 56U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7433725807413647;
    msg.lon = 0.807722296404311;
    msg.radius = 0.9189968017796435;

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
    msg.setTimeStamp(0.5978772068290059);
    msg.setSource(34191U);
    msg.setSourceEntity(243U);
    msg.setDestination(607U);
    msg.setDestinationEntity(226U);
    msg.flags = 59U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4909109477061582;
    tmp_msg_0.speed_units = 213U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07866208023613475;
    tmp_msg_1.z_units = 174U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6636618637802523;
    msg.lon = 0.7685098181110137;
    msg.radius = 0.7486094718869196;

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
    msg.setTimeStamp(0.9956829242562316);
    msg.setSource(47281U);
    msg.setSourceEntity(64U);
    msg.setDestination(15003U);
    msg.setDestinationEntity(251U);
    msg.flags = 174U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.41100783964183984;
    tmp_msg_0.speed_units = 38U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6973306594153547;
    tmp_msg_1.z_units = 97U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5366749703557607;
    msg.lon = 0.17183630198324917;
    msg.radius = 0.23886376723786884;

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
    msg.setTimeStamp(0.814960028869735);
    msg.setSource(14830U);
    msg.setSourceEntity(214U);
    msg.setDestination(64706U);
    msg.setDestinationEntity(69U);
    msg.control_src = 17341U;
    msg.control_ent = 169U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 177U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2715767574834944;
    tmp_tmp_msg_0_0.speed_units = 232U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.48693982500258637;
    tmp_tmp_msg_0_1.z_units = 142U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7089724450367748;
    tmp_msg_0.lon = 0.30314975748880113;
    tmp_msg_0.radius = 0.3478833013624769;
    msg.reference.set(tmp_msg_0);
    msg.state = 227U;
    msg.proximity = 179U;

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
    msg.setTimeStamp(0.3146136742195793);
    msg.setSource(36764U);
    msg.setSourceEntity(130U);
    msg.setDestination(18835U);
    msg.setDestinationEntity(120U);
    msg.control_src = 32937U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 100U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.910161350160239;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3025578804299319;
    tmp_tmp_msg_0_1.z_units = 43U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.048480625197858784;
    tmp_msg_0.lon = 0.4119140549678575;
    tmp_msg_0.radius = 0.7182149002663366;
    msg.reference.set(tmp_msg_0);
    msg.state = 219U;
    msg.proximity = 73U;

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
    msg.setTimeStamp(0.12129089387217318);
    msg.setSource(11625U);
    msg.setSourceEntity(195U);
    msg.setDestination(5130U);
    msg.setDestinationEntity(139U);
    msg.control_src = 24664U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 58U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8937886897988597;
    tmp_tmp_msg_0_0.speed_units = 232U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3713980246625982;
    tmp_tmp_msg_0_1.z_units = 123U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5279808829762851;
    tmp_msg_0.lon = 0.6733749876607245;
    tmp_msg_0.radius = 0.11695485285661034;
    msg.reference.set(tmp_msg_0);
    msg.state = 171U;
    msg.proximity = 153U;

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
    msg.setTimeStamp(0.20193406627109933);
    msg.setSource(60174U);
    msg.setSourceEntity(114U);
    msg.setDestination(13537U);
    msg.setDestinationEntity(98U);
    msg.ax_cmd = 0.7939593989579574;
    msg.ay_cmd = 0.24332815618330905;
    msg.az_cmd = 0.233748540492005;
    msg.ax_des = 0.01064153316580152;
    msg.ay_des = 0.486255313180215;
    msg.az_des = 0.5409761302748167;
    msg.virt_err_x = 0.6323804241838978;
    msg.virt_err_y = 0.8127157510307625;
    msg.virt_err_z = 0.24154399766545687;
    msg.surf_fdbk_x = 0.9386911761175407;
    msg.surf_fdbk_y = 0.5547301605502407;
    msg.surf_fdbk_z = 0.9536305161461369;
    msg.surf_unkn_x = 0.8946880902336599;
    msg.surf_unkn_y = 0.39510745119247603;
    msg.surf_unkn_z = 0.22573878072575992;
    msg.ss_x = 0.5181330311387875;
    msg.ss_y = 0.03128808311823805;
    msg.ss_z = 0.9384292193540394;

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
    msg.setTimeStamp(0.6594694615131677);
    msg.setSource(39493U);
    msg.setSourceEntity(66U);
    msg.setDestination(59038U);
    msg.setDestinationEntity(4U);
    msg.ax_cmd = 0.4196399524227282;
    msg.ay_cmd = 0.17688816644506233;
    msg.az_cmd = 0.27870931946131816;
    msg.ax_des = 0.6109321529163841;
    msg.ay_des = 0.6259449831420567;
    msg.az_des = 0.7740045216541843;
    msg.virt_err_x = 0.3964612802534434;
    msg.virt_err_y = 0.47689269786377597;
    msg.virt_err_z = 0.047221011426161086;
    msg.surf_fdbk_x = 0.9193144886453157;
    msg.surf_fdbk_y = 0.15974676853306258;
    msg.surf_fdbk_z = 0.02766684545339071;
    msg.surf_unkn_x = 0.08061088925683124;
    msg.surf_unkn_y = 0.06371092805789336;
    msg.surf_unkn_z = 0.5982649573551437;
    msg.ss_x = 0.23061034084842746;
    msg.ss_y = 0.9226898784575458;
    msg.ss_z = 0.36741207668015974;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LKRBVDCZPYSSWXYNPJBGEXGTHIPLUZENFODVFJMVYTHKGXABECBLZFANQZCMYNCDQAUAAJLNYVSHASZGDXDAOUUKXJXJSJRMWJEWCEPOGAZBOEJHKOFPKYTSBXBUIGDIOURFPVBVQTULRWPQFWBVCKCTIIMAWMYSNTMHLILKLDMGGTJQNFRBCPDRYZUQQZVJ");
    tmp_msg_0.dist = 0.4428844347291446;
    tmp_msg_0.err = 0.2224418321503383;
    tmp_msg_0.ctrl_imp = 0.6783188283084421;
    tmp_msg_0.rel_dir_x = 0.9099160473098129;
    tmp_msg_0.rel_dir_y = 0.4229521344462971;
    tmp_msg_0.rel_dir_z = 0.8512272649623858;
    tmp_msg_0.err_x = 0.19320651705313052;
    tmp_msg_0.err_y = 0.10831521410641232;
    tmp_msg_0.err_z = 0.6999441839655615;
    tmp_msg_0.rf_err_x = 0.24430525000371728;
    tmp_msg_0.rf_err_y = 0.7883613028052752;
    tmp_msg_0.rf_err_z = 0.3747355143238007;
    tmp_msg_0.rf_err_vx = 0.13956626695779295;
    tmp_msg_0.rf_err_vy = 0.2758126987616101;
    tmp_msg_0.rf_err_vz = 0.9038251485654062;
    tmp_msg_0.ss_x = 0.010566698680438691;
    tmp_msg_0.ss_y = 0.4723260608381391;
    tmp_msg_0.ss_z = 0.16136101079756626;
    tmp_msg_0.virt_err_x = 0.4251662135354529;
    tmp_msg_0.virt_err_y = 0.728437222558499;
    tmp_msg_0.virt_err_z = 0.40251160316124124;
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
    msg.setTimeStamp(0.9115041415048492);
    msg.setSource(63656U);
    msg.setSourceEntity(170U);
    msg.setDestination(31551U);
    msg.setDestinationEntity(221U);
    msg.ax_cmd = 0.37207300060021453;
    msg.ay_cmd = 0.935193505290734;
    msg.az_cmd = 0.16172107900978938;
    msg.ax_des = 0.9298863844774682;
    msg.ay_des = 0.8899154622186626;
    msg.az_des = 0.03556950033387307;
    msg.virt_err_x = 0.34160911986148823;
    msg.virt_err_y = 0.7520327947011812;
    msg.virt_err_z = 0.7100546783242494;
    msg.surf_fdbk_x = 0.4469390158217764;
    msg.surf_fdbk_y = 0.9785680394356157;
    msg.surf_fdbk_z = 0.26659274994696314;
    msg.surf_unkn_x = 0.5105966694179931;
    msg.surf_unkn_y = 0.8629511283997888;
    msg.surf_unkn_z = 0.5460009263566121;
    msg.ss_x = 0.5239365875719098;
    msg.ss_y = 0.39755561655761285;
    msg.ss_z = 0.6066285547359578;

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
    msg.setTimeStamp(0.023345313921570243);
    msg.setSource(28629U);
    msg.setSourceEntity(134U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(16U);
    msg.s_id.assign("JJMPZFBQSDZHKPKSOTJXWCRFXGMVMJMIYZKPFBBINGWYXQWNQRXHOOYULMNJWUHPONTEPVRVIYUNAENZROTUYWQN");
    msg.dist = 0.636888975530848;
    msg.err = 0.23346715756160807;
    msg.ctrl_imp = 0.721616816307729;
    msg.rel_dir_x = 0.22873773313980583;
    msg.rel_dir_y = 0.3949548633151452;
    msg.rel_dir_z = 0.8900416234831741;
    msg.err_x = 0.7317161293574148;
    msg.err_y = 0.9672918660691764;
    msg.err_z = 0.7520351978993131;
    msg.rf_err_x = 0.6325085448164617;
    msg.rf_err_y = 0.3113559443983771;
    msg.rf_err_z = 0.4972336801948316;
    msg.rf_err_vx = 0.6477366272461778;
    msg.rf_err_vy = 0.1921687693804469;
    msg.rf_err_vz = 0.4785490576062805;
    msg.ss_x = 0.37079602385930477;
    msg.ss_y = 0.941050504659814;
    msg.ss_z = 0.9827073311351323;
    msg.virt_err_x = 0.0522317471587902;
    msg.virt_err_y = 0.48451503922025185;
    msg.virt_err_z = 0.6854013350124307;

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
    msg.setTimeStamp(0.8489441328347778);
    msg.setSource(34893U);
    msg.setSourceEntity(234U);
    msg.setDestination(53058U);
    msg.setDestinationEntity(230U);
    msg.s_id.assign("DPUABVTGHSPMTKSWSTRKQCMCOFHX");
    msg.dist = 0.817114670901429;
    msg.err = 0.37225044507743;
    msg.ctrl_imp = 0.8424872868636;
    msg.rel_dir_x = 0.1548107836992434;
    msg.rel_dir_y = 0.5118882165819532;
    msg.rel_dir_z = 0.07009961777388474;
    msg.err_x = 0.8552241679309004;
    msg.err_y = 0.2173022239383564;
    msg.err_z = 0.5204724751197495;
    msg.rf_err_x = 0.5327860174942549;
    msg.rf_err_y = 0.13211873691504528;
    msg.rf_err_z = 0.3732098295358035;
    msg.rf_err_vx = 0.09236447178440654;
    msg.rf_err_vy = 0.9709401325227386;
    msg.rf_err_vz = 0.43557415797557475;
    msg.ss_x = 0.19155096170178365;
    msg.ss_y = 0.4822163967275451;
    msg.ss_z = 0.837524206522967;
    msg.virt_err_x = 0.054815584769061454;
    msg.virt_err_y = 0.9238486290485501;
    msg.virt_err_z = 0.41249238423778767;

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
    msg.setTimeStamp(0.10999139816410908);
    msg.setSource(59621U);
    msg.setSourceEntity(86U);
    msg.setDestination(1422U);
    msg.setDestinationEntity(14U);
    msg.s_id.assign("MJYQNNYIZMIYUYVAOKGLCOOCUBBHKQGXILNYIGRFUEHUESWYQUGQLTDPHVCNBOPALDRMPBSMPYKHALZWJESJFBVBDUTXIKGPDWUJXXAAVDREDCDKWKADNCONMN");
    msg.dist = 0.37484462046957445;
    msg.err = 0.13113752830904857;
    msg.ctrl_imp = 0.230612091967483;
    msg.rel_dir_x = 0.4494843398198618;
    msg.rel_dir_y = 0.47782921317769034;
    msg.rel_dir_z = 0.377472293119833;
    msg.err_x = 0.23281731516804394;
    msg.err_y = 0.08227329169851227;
    msg.err_z = 0.8158624702260968;
    msg.rf_err_x = 0.3942450700642961;
    msg.rf_err_y = 0.33778942660865097;
    msg.rf_err_z = 0.390435623869971;
    msg.rf_err_vx = 0.9423702114181186;
    msg.rf_err_vy = 0.9189648621153577;
    msg.rf_err_vz = 0.7392245054133761;
    msg.ss_x = 0.7969428605036144;
    msg.ss_y = 0.861977157909224;
    msg.ss_z = 0.12560326062734484;
    msg.virt_err_x = 0.4595165049931417;
    msg.virt_err_y = 0.20249180925311716;
    msg.virt_err_z = 0.8435810298182036;

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
    msg.setTimeStamp(0.936098255981759);
    msg.setSource(20181U);
    msg.setSourceEntity(21U);
    msg.setDestination(36948U);
    msg.setDestinationEntity(92U);
    msg.timeout = 29647U;
    msg.rpm = 0.3642175733674212;
    msg.direction = 158U;
    msg.custom.assign("TXQGQZVZNHIYQRQKLKWGSMECEXHOAHUOZBPUMXFLYMUYSIPDGMDVRWNOHXVWVVYLRNFRJHDAAPSEJGTSDDNGUXDLI");

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
    msg.setTimeStamp(0.3850182576628245);
    msg.setSource(11131U);
    msg.setSourceEntity(226U);
    msg.setDestination(35352U);
    msg.setDestinationEntity(145U);
    msg.timeout = 17588U;
    msg.rpm = 0.6191678820332734;
    msg.direction = 68U;
    msg.custom.assign("RJZXQNMJZFEJDNKZUKHOSKIGQJBBJDBCLGKXCQHNIILCCNKIIOUFQHFDYAQREEUPETDNTSHIQJNBQLCWHLNXFNFVYUUUSZRTWOYNORRXCXKFMVASAUYMQBFRWBDKMXLLPAZVNAWRYARWGJHIZQMDYDIDXMWWKAMDLOTUVHOVZASPYVSSEJOLTCEZCIBETGYMSEVUOEZWKJXQPBXRKPIPPMVGBGHECBTA");

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
    msg.setTimeStamp(0.7385003188323203);
    msg.setSource(60277U);
    msg.setSourceEntity(43U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(44U);
    msg.timeout = 62522U;
    msg.rpm = 0.0557491767398226;
    msg.direction = 136U;
    msg.custom.assign("CUOGAZHJNXVSIWLOTPMDFNSYXVJQDVCECFREGYTLEACIITRFESIEXPEFVNNABXNZWDZMPUIAAQKDUHRBVRWAGMOVCYLQUAZLKJFWPFKPEQUHFXHHFQMLRSJJYWBRMCGOBXTPNYEZWOTYHCAPCVKALLKJLBKONDYDXXBBISFHNLRBRTMUUSQIYMZXTYCBCHMBPOQVMWRWGJOZUPVNYDJQTODAIEUJDMSG");

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
    msg.setTimeStamp(0.5231264795893239);
    msg.setSource(27713U);
    msg.setSourceEntity(65U);
    msg.setDestination(41291U);
    msg.setDestinationEntity(182U);
    msg.formation_name.assign("KFLKUGYMKWUHPTSTEHICZSZHCGHIGLXXJZVQEANTAQGSFCZSBKTNTMKZFDAUKCEGWLFZDYBOWOVHDFFJHICIXUKRORPSVPLQIEWJJVPUHMWODYOXRZEWYPEGGMTJBXAVJMWPCLTIYNLDWGROPMLZQXFVMTFYIQYCYJVROXBXSNNTIBHWBLK");
    msg.type = 218U;
    msg.op = 79U;
    msg.group_name.assign("QIGPLCYWPJDESPRSTLUADTLIOOAYDUGKFBBQHHFSLINPXUVVTMKXEKEXCBOLECNVOQIZKOMDNKHXHBSVSOIMNXZEWNVGWCPRTCTTKRWGCVJKLYRBXZVFWJEAVCAJTJXPAFYHSHQZUBFDDUNWUMMJISJRTZPOGOBAVUJWPKXDIEMRCFORKCWNGH");
    msg.plan_id.assign("YSUOFCAUIMNARXSEHRCYZPOHYGSGDLFEYCKFQHLQTQOJR");
    msg.description.assign("BKAPODUDAUNBXDEARQCLLXJFQJFPWTIHABNGONEJDJQJPZBZMHTGVWIZKHQ");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65503U;
    tmp_msg_0.off_x = 0.38226183525948054;
    tmp_msg_0.off_y = 0.1439608510265611;
    tmp_msg_0.off_z = 0.8129965308453514;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.504929134246082;
    msg.leader_speed_min = 0.3904809920387424;
    msg.leader_speed_max = 0.13074074310914996;
    msg.leader_alt_min = 0.513998115372353;
    msg.leader_alt_max = 0.24569913753586303;
    msg.pos_sim_err_lim = 0.6102485032233055;
    msg.pos_sim_err_wrn = 0.6652143284121621;
    msg.pos_sim_err_timeout = 2127U;
    msg.converg_max = 0.5738788995920361;
    msg.converg_timeout = 14960U;
    msg.comms_timeout = 18708U;
    msg.turb_lim = 0.2381877984707499;
    msg.custom.assign("ERLLTBKRVBMIBBKNNDJOXBZQPWFKCVMHYVMCYNEYDNCHBIIIAUSUSCZQWBRAIDWLZJQSTAVVNTQPVWHPA");

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
    msg.setTimeStamp(0.106118945631542);
    msg.setSource(3886U);
    msg.setSourceEntity(164U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("SIUGGHTTECALMRTHIUTECXYG");
    msg.type = 223U;
    msg.op = 191U;
    msg.group_name.assign("POIKNCJDZWDQDWWUDAAJPVQIPYLCQXBMHCTZLZRUTAL");
    msg.plan_id.assign("LBFHBKBAGWVLZVTMZUAKKQANSQYDSDATHQOMBXIPPCOSBQRJUILIUFYAEWYCFHIRKUTBLZTSPJYQKREBPOJFQCMJWQRQZDORCLJTEGEKGYDHMRUXMNQFGACSNZHBNDXVVWLGOKGPODHZMQEGROSNISX");
    msg.description.assign("BYDKWJGTBIUHVBIZELPCHPMMJKZPOXPOHDWQQHFPGRQFAUMKAVNHUKGQQVRXFMPIYSWWSCFCAJKRUDWJRCFBEDASJUEQLFPAZVRZTSXOQEUELTJIEBDNTIOKFJAB");
    msg.reference_frame = 56U;
    msg.leader_bank_lim = 0.5852851240121735;
    msg.leader_speed_min = 0.5086741975902459;
    msg.leader_speed_max = 0.1116925866395656;
    msg.leader_alt_min = 0.5545351684431334;
    msg.leader_alt_max = 0.03494905705020235;
    msg.pos_sim_err_lim = 0.34016630782736323;
    msg.pos_sim_err_wrn = 0.46073804203733526;
    msg.pos_sim_err_timeout = 34442U;
    msg.converg_max = 0.3034883940279166;
    msg.converg_timeout = 21113U;
    msg.comms_timeout = 63489U;
    msg.turb_lim = 0.6807109353892202;
    msg.custom.assign("YZCITSMGWDWHEYUFTVNRLYNHINKPDXXLVHBDFW");

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
    msg.setTimeStamp(0.5445958087385188);
    msg.setSource(53237U);
    msg.setSourceEntity(145U);
    msg.setDestination(29071U);
    msg.setDestinationEntity(197U);
    msg.formation_name.assign("IFJWOUEJXBWWVYHLXQIMPSHWKBSSNNPQRTQEZYKYRTHEYUQRLLSVCKJZADDCUNHT");
    msg.type = 71U;
    msg.op = 58U;
    msg.group_name.assign("DIEKXGMJXIXWKUSLMGUVIQXZREJADOXNKTMOESQIKVODMPZWPHOOTCNXTSSRKJWCPWFAUICAFWCCWJEZOBTGBEBUFFJMLLRATLHEPOHOPVIZYNSEZUYUKYFUIDQQADJLGZJNBNQRHTHUHRFQLYVL");
    msg.plan_id.assign("BTRPNDLPNBMTFNCXAVQOYIDCXOKRJQSQQGBQTGOTCFOEZCAMMUPJBKIRGTBTBVIIOLIZFIWVNYXVXBGLHJAHKVMCKJWSIGEMWLZSHQFZMUEFWUDDRUCWEJUHTQQNOWRFWYTSFZSKVHGGPKXWSBOANAZQJHYVHEBDELL");
    msg.description.assign("HVCEUPQQTWIJFHOTFNDXUHBNCBCZIXZMEMTSALNMUGSOGAAEKXSIWCHGMJMHVLGWCYZYJAJRUIWUARSQIVEZGFCMGGUKJWZMKIIKSPITBEDPQMDDLVZORVTQKKPERKPOFLSVJFYDGBBBMTEHQXQAEZQJPULZNSHXRLOOPJFWCUFTNCFROUWYDOPTATYZESBFTIWRYKDHVWEDAGPVNLDXNNASJXLXSLKVB");
    msg.reference_frame = 241U;
    msg.leader_bank_lim = 0.12789971464388106;
    msg.leader_speed_min = 0.9544143753060399;
    msg.leader_speed_max = 0.7922699751261933;
    msg.leader_alt_min = 0.6133116738221338;
    msg.leader_alt_max = 0.016174915664143086;
    msg.pos_sim_err_lim = 0.15091621701259272;
    msg.pos_sim_err_wrn = 0.948193036719663;
    msg.pos_sim_err_timeout = 29604U;
    msg.converg_max = 0.860517337793609;
    msg.converg_timeout = 44428U;
    msg.comms_timeout = 1069U;
    msg.turb_lim = 0.36227879953356024;
    msg.custom.assign("PMPECZUXSKPGVJGEFTCFREWOXQPZVURMQSDJLZOWVZBNSPZFNLCDMQYRPDXTVCAJWPULTLDVOHUTTDFAVJLFNVSNGAYGCBHXWSQESXHINKFQXCWTNHVQTBBWRCKAJIZZUHHYHKOFPKOWMGIUTBJDAQIDBVKYYNQUM");

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
    msg.setTimeStamp(0.9550112075366103);
    msg.setSource(38630U);
    msg.setSourceEntity(119U);
    msg.setDestination(42245U);
    msg.setDestinationEntity(216U);
    msg.timeout = 40269U;
    msg.lat = 0.1799676865254396;
    msg.lon = 0.43504888422370913;
    msg.z = 0.6710052715759403;
    msg.z_units = 217U;
    msg.speed = 0.9596439187510802;
    msg.speed_units = 195U;
    msg.custom.assign("CXFVPASJHYGSUJDGLZUUIIBKICYYUAVJPJIDTMQNEPOVYOROKNWGCSCKLUJPOSMXYCIXRVHVQLYGFZNZLRFXOXRGHFDUBSPYTKTAUWZUSRQXOQAQPSJNKAOUQN");

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
    msg.setTimeStamp(0.601296331317835);
    msg.setSource(65482U);
    msg.setSourceEntity(9U);
    msg.setDestination(20672U);
    msg.setDestinationEntity(164U);
    msg.timeout = 16084U;
    msg.lat = 0.8863858178935129;
    msg.lon = 0.5799536904818308;
    msg.z = 0.7580167587728843;
    msg.z_units = 130U;
    msg.speed = 0.324825102421504;
    msg.speed_units = 90U;
    msg.custom.assign("SVNLVTXIYNQCMDIEHJFGGHQSRFZUGRFKZDJVDKPWFYPKHRHIO");

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
    msg.setTimeStamp(0.48329793886153616);
    msg.setSource(17504U);
    msg.setSourceEntity(148U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(119U);
    msg.timeout = 58982U;
    msg.lat = 0.978141894845095;
    msg.lon = 0.8340631211398883;
    msg.z = 0.6014860865026491;
    msg.z_units = 119U;
    msg.speed = 0.8065396450991165;
    msg.speed_units = 195U;
    msg.custom.assign("BNZVCXQEKZDBWNLSUNINIDTSOBDEAMLOEYVFJRWGSOASFVJIKMJPKEJGQFKMWPBDXPZKZOFQVOPZIGMJLQXYJHWJSDYWEHUNNYSZJHHRLOPIMETGSUZXGHYPVBJPNSVNOVAHZHTROPCMMXNRYTDYKNRDEGDIBLIJBBCQKBGIKCZTEGALLRKAQCPUTCHCQCEXWXRQOSVWTMWWFVMKLYUDTISPXZAFTFWRAARCADTUMHFB");

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
    msg.setTimeStamp(0.35196239827395825);
    msg.setSource(44743U);
    msg.setSourceEntity(155U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(72U);
    msg.timeout = 63190U;
    msg.lat = 0.2774639444668001;
    msg.lon = 0.20115622790043752;
    msg.z = 0.4961104616023545;
    msg.z_units = 71U;
    msg.speed = 0.23178351659323182;
    msg.speed_units = 116U;
    msg.custom.assign("CMMIHXKNIUSHWNQCWIZOCCDSFZALTGWERFDFANOSOVADVJZDMFYXRVULQNNVACZHGBJODKIXFJTQBOGVNGWIPAOWKHSSNVWMYMVSQQVMJRWPTHSTKBPTLEHGKRYFXXJJJSJGYIKJRALUIZEBZAVHLPODEEI");

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
    msg.setTimeStamp(0.308960266989177);
    msg.setSource(11177U);
    msg.setSourceEntity(155U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(149U);
    msg.timeout = 43598U;
    msg.lat = 0.8499856352517875;
    msg.lon = 0.15956271735062832;
    msg.z = 0.29057623006433064;
    msg.z_units = 139U;
    msg.speed = 0.5818759175335024;
    msg.speed_units = 111U;
    msg.custom.assign("VZFQAFWLQOSIIJHWAIPYOYBGHTOSMWKCLNCRAVXKIUCICJQRLRNZDHQEURDCSTVNYVHHEPZOLNVTWAYGXELBTBRQBVYPESLTWBUS");

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
    msg.setTimeStamp(0.09592967534830799);
    msg.setSource(45712U);
    msg.setSourceEntity(214U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(28U);
    msg.timeout = 34669U;
    msg.lat = 0.9114440412342616;
    msg.lon = 0.8435875990952927;
    msg.z = 0.7563429251908632;
    msg.z_units = 55U;
    msg.speed = 0.24386490758160106;
    msg.speed_units = 237U;
    msg.custom.assign("PQRYGZLSDELSPOKBHJNNGJNNUNUTLCGOHFNMMPZOASRBHOVAJCAPBFDWJVOJOJADHKSCQAOBTVXEYGINLXLFUSOJMAOMZKTZIKGMULPVVVETEYZSHVRVYQDFHTMEWWQDQUVFZNLTNRXIUMWPXRKMDKXCZWLCCWYZYGRCRIDKEOSCTXDTEXPAQBRKIQBFSWIIUXWZAVABFYNJGPYCEXHELKJQDUIHTUSPWWASFFYHGKZTBFBGHGILJUQDMRBYER");

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
    msg.setTimeStamp(0.13910383600284904);
    msg.setSource(25567U);
    msg.setSourceEntity(195U);
    msg.setDestination(44355U);
    msg.setDestinationEntity(237U);
    msg.arrival_time = 0.7954360174055999;
    msg.lat = 0.28279735986133514;
    msg.lon = 0.7659425968920895;
    msg.z = 0.6811791429186694;
    msg.z_units = 252U;
    msg.travel_z = 0.4722471274528053;
    msg.travel_z_units = 69U;
    msg.delayed = 131U;

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
    msg.setTimeStamp(0.7289916692187219);
    msg.setSource(7731U);
    msg.setSourceEntity(118U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(222U);
    msg.arrival_time = 0.7131866387157219;
    msg.lat = 0.02298369100837927;
    msg.lon = 0.7916797672605894;
    msg.z = 0.9033796996397342;
    msg.z_units = 113U;
    msg.travel_z = 0.31297368948853843;
    msg.travel_z_units = 31U;
    msg.delayed = 193U;

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
    msg.setTimeStamp(0.6376233779694739);
    msg.setSource(29284U);
    msg.setSourceEntity(191U);
    msg.setDestination(46216U);
    msg.setDestinationEntity(37U);
    msg.arrival_time = 0.7826766680102165;
    msg.lat = 0.15373089935738515;
    msg.lon = 0.6442544040047299;
    msg.z = 0.2605736754713952;
    msg.z_units = 123U;
    msg.travel_z = 0.5118767194035055;
    msg.travel_z_units = 13U;
    msg.delayed = 81U;

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
    msg.setTimeStamp(0.35718489717274027);
    msg.setSource(52227U);
    msg.setSourceEntity(17U);
    msg.setDestination(39256U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.4266412773824214;
    msg.lon = 0.7051992616559207;
    msg.z = 0.4196895600292099;
    msg.z_units = 143U;
    msg.speed = 0.3249305200814486;
    msg.speed_units = 91U;
    msg.bearing = 0.5002755349167981;
    msg.cross_angle = 0.19671544616141434;
    msg.width = 0.9436015669756287;
    msg.length = 0.30809680183193366;
    msg.coff = 68U;
    msg.angaperture = 0.04494511407646362;
    msg.range = 34336U;
    msg.overlap = 78U;
    msg.flags = 71U;
    msg.custom.assign("WSQOAPQQMMWXMXPNAVIDWRLTLXMZUGPNKYEAGYSSPNBQCBLUJAKFBVENZQTAKOKPDSIMVTMNRODMRURIVYERIGFLMGVCZLNQDSHDPHEUCVFPTTJPTGRJHZIWEHPBVJYVTOXXMTBFFHANLRUYLZETFSCRXJVZBQJXJHOBDPJMZFSUWSEDBYCNHRXYODQNJXAIACXUIDUKWGFEIYKTDZGFYBLOQJBKYECKAUCWZW");

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
    msg.setTimeStamp(0.10043809412379867);
    msg.setSource(38014U);
    msg.setSourceEntity(32U);
    msg.setDestination(12911U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.3665417823484013;
    msg.lon = 0.2794378018395427;
    msg.z = 0.8719184790228516;
    msg.z_units = 145U;
    msg.speed = 0.8179786225707242;
    msg.speed_units = 231U;
    msg.bearing = 0.6143936732254589;
    msg.cross_angle = 0.44550672509677014;
    msg.width = 0.2817411147464224;
    msg.length = 0.20173466793384454;
    msg.coff = 81U;
    msg.angaperture = 0.12501144616321247;
    msg.range = 54788U;
    msg.overlap = 232U;
    msg.flags = 247U;
    msg.custom.assign("XBQUTTESSEBYDUMQRPOPGRPZEDBSKVKIDAJNLAVCELUHJBAWYHBQTWJVASNLFZDHBSQIOWXJOUFQSRJMXQHYDQHIFLVTKFAKXFWKQIUMAZZXFNWLKAGWCXGCUIZGGOFVWIQZGSMBUMZPYJRNRHKS");

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
    msg.setTimeStamp(0.9511088178319413);
    msg.setSource(18645U);
    msg.setSourceEntity(137U);
    msg.setDestination(48263U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.30562362843027757;
    msg.lon = 0.07349646204380778;
    msg.z = 0.43125367228390743;
    msg.z_units = 236U;
    msg.speed = 0.9403975517590637;
    msg.speed_units = 102U;
    msg.bearing = 0.6983548008420856;
    msg.cross_angle = 0.6759289031710003;
    msg.width = 0.559563815805523;
    msg.length = 0.7393260800680305;
    msg.coff = 219U;
    msg.angaperture = 0.4578727113037946;
    msg.range = 1376U;
    msg.overlap = 149U;
    msg.flags = 194U;
    msg.custom.assign("TNMHDBNOQQSWDOQFSINCPKCEUVZKLGAQRTINQLRR");

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
    msg.setTimeStamp(0.02488191895272962);
    msg.setSource(31508U);
    msg.setSourceEntity(27U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(106U);
    msg.timeout = 4076U;
    msg.lat = 0.7925942997965546;
    msg.lon = 0.7398907816049661;
    msg.z = 0.09375699672832183;
    msg.z_units = 83U;
    msg.speed = 0.0003314735753350284;
    msg.speed_units = 254U;
    msg.syringe0 = 152U;
    msg.syringe1 = 226U;
    msg.syringe2 = 115U;
    msg.custom.assign("PLELFUVVFYQMCTVVRDJFCAQZBSHKETSDSBXWGPQNAVIEGNIMF");

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
    msg.setTimeStamp(0.6245321250999516);
    msg.setSource(52362U);
    msg.setSourceEntity(1U);
    msg.setDestination(18816U);
    msg.setDestinationEntity(69U);
    msg.timeout = 19726U;
    msg.lat = 0.5210076099915035;
    msg.lon = 0.6588856190806761;
    msg.z = 0.4218074779850286;
    msg.z_units = 2U;
    msg.speed = 0.9999796421506665;
    msg.speed_units = 89U;
    msg.syringe0 = 221U;
    msg.syringe1 = 7U;
    msg.syringe2 = 159U;
    msg.custom.assign("FNPHBNLXAGRNSXIFUNTDCWPRVKLJVHKIFYDHUVAGPJXSHZKZSSDLBLEJZVLDTSCIYXXFGXUSJEBOQOEAITCXEVYYGPYOLQETUWNCRMWOWCRZZEYJOKVHXMSCBAIEM");

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
    msg.setTimeStamp(0.3834287530455901);
    msg.setSource(5376U);
    msg.setSourceEntity(235U);
    msg.setDestination(53698U);
    msg.setDestinationEntity(122U);
    msg.timeout = 23274U;
    msg.lat = 0.3945856144318074;
    msg.lon = 0.6317843404403235;
    msg.z = 0.16689141610956193;
    msg.z_units = 210U;
    msg.speed = 0.9753488620732351;
    msg.speed_units = 203U;
    msg.syringe0 = 91U;
    msg.syringe1 = 246U;
    msg.syringe2 = 47U;
    msg.custom.assign("APIGEFYKRCLHOGFFNQXZOGCLJVAGOKJUSYAJEXJHJPQEAAURWQOHBQQYQWPBCLVUTRSBHBVBZHONMEGKLRPDUDMWOPMYZYVGVDRBJJRXPWTUQLPLJETNOIMAIBRZVNFUNEFURMYZSLPXLIQGSCGOIIFDHTXDTYCZHRHHNPYNSFWNIAQEKWETJMWDMXVMNUXGBQSILGXUVKISBNKYMEDXUCSWCZOADWTMSKRZDT");

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
    msg.setTimeStamp(0.016180800741280144);
    msg.setSource(15259U);
    msg.setSourceEntity(96U);
    msg.setDestination(44191U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.6092945083472109);
    msg.setSource(62308U);
    msg.setSourceEntity(218U);
    msg.setDestination(5232U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.09210389648716588);
    msg.setSource(7904U);
    msg.setSourceEntity(44U);
    msg.setDestination(33772U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.4102347512286252);
    msg.setSource(23723U);
    msg.setSourceEntity(11U);
    msg.setDestination(1437U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.24625690168641212;
    msg.lon = 0.615130666812097;
    msg.z = 0.8257458833832769;
    msg.z_units = 39U;
    msg.speed = 0.33374110079238783;
    msg.speed_units = 174U;
    msg.takeoff_pitch = 0.6847560665896142;
    msg.custom.assign("UDRYNESHEOBRPVDDMVSDOJMRMZHWEWZZIIZOGNACVTZJMWOKEQTGAPCRVTRTBSARXQSLTLEIGFWNUVDUALPUSUGVENMZZNPZFDHIXWAQVQMLYXRXQPKXDMOUYGTMBTOLQSOLGIEBWKXHDSUFKCRJKNXLW");

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
    msg.setTimeStamp(0.025436365259548288);
    msg.setSource(41846U);
    msg.setSourceEntity(141U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.07462636250735499;
    msg.lon = 0.44116867584204533;
    msg.z = 0.6216873865441687;
    msg.z_units = 136U;
    msg.speed = 0.9116608697969473;
    msg.speed_units = 193U;
    msg.takeoff_pitch = 0.22425851532968144;
    msg.custom.assign("MWUPUWBGRNRLNV");

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
    msg.setTimeStamp(0.929798079763361);
    msg.setSource(37704U);
    msg.setSourceEntity(133U);
    msg.setDestination(13277U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.4656176505370163;
    msg.lon = 0.8793003157037836;
    msg.z = 0.014190568727799446;
    msg.z_units = 89U;
    msg.speed = 0.9144482896205715;
    msg.speed_units = 117U;
    msg.takeoff_pitch = 0.038386853927772635;
    msg.custom.assign("WAFUDBLXOJQDBBOOQHFTRPLNWBVTBVSPZMTKUZIKIHXNTQKOXNNZVZWSUGPIMYULEWYEVTZFXHSHWESHZBOFWLBAERQUQZUERZPCXVMIBXTSUCOOAJQENGTAKCKRYADYIXIJPARASWJMCYSL");

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
    msg.setTimeStamp(0.20198377506725995);
    msg.setSource(2028U);
    msg.setSourceEntity(11U);
    msg.setDestination(22149U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.11845899304063878;
    msg.lon = 0.17533378015218637;
    msg.z = 0.17572886507333463;
    msg.z_units = 168U;
    msg.speed = 0.9860640315040748;
    msg.speed_units = 82U;
    msg.abort_z = 0.4219930921032815;
    msg.bearing = 0.6571066262200432;
    msg.glide_slope = 180U;
    msg.glide_slope_alt = 0.6362472971025529;
    msg.custom.assign("HQPWDLBHMAVXBGYKLQTDPUSABTZVRINLUFTFUQYCXTWBSPSNKAQJRCRMMACXYPSAYUHZISNSUVWBEYHPTNMGZMIGBMVGPYSCYVNLRKRWWBTVETUONODDKXELSPWRDPFOXXZEFYWFGBXFGADVQAJKUKEAQXOCNTDKFIPCZZUMFCSRCBJDRQHRNJJHLHXVJXMIKTEKNWHGRETSILGLYVGBIWJFEJOEQI");

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
    msg.setTimeStamp(0.9401999187563259);
    msg.setSource(13478U);
    msg.setSourceEntity(225U);
    msg.setDestination(25668U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.6131397940042169;
    msg.lon = 0.21875503297044818;
    msg.z = 0.46392818483773657;
    msg.z_units = 86U;
    msg.speed = 0.2959069049764961;
    msg.speed_units = 58U;
    msg.abort_z = 0.031102721280993118;
    msg.bearing = 0.34740176055137784;
    msg.glide_slope = 126U;
    msg.glide_slope_alt = 0.2685632959426739;
    msg.custom.assign("PJOGRCUNVKBTUEGQWQBKWVHLZDEKRKIRMOQSGXJUHVMIMWRVJHEFWXKPCAZFSJBCNYJMDKYWIOLEDQBOBGPXPSKTRAYRTFFDIQWTDUEVAVULZFGYCPMPUTRRXCHHZZEJLCYVTXNQTKCHUQQOLJFEOUCEIXNADNGLBYGNKYDTDOYPGMHLFQWHARAOXSXIMKSEBGRDUJTPLLS");

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
    msg.setTimeStamp(0.7838938034561947);
    msg.setSource(22070U);
    msg.setSourceEntity(206U);
    msg.setDestination(33896U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.9915683011736937;
    msg.lon = 0.5105197780508777;
    msg.z = 0.45896152850192296;
    msg.z_units = 86U;
    msg.speed = 0.8662022519214291;
    msg.speed_units = 35U;
    msg.abort_z = 0.9809330477400869;
    msg.bearing = 0.44835937180166185;
    msg.glide_slope = 151U;
    msg.glide_slope_alt = 0.4504752147699502;
    msg.custom.assign("LEMAVENIFN");

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
    msg.setTimeStamp(0.012970906883537303);
    msg.setSource(38015U);
    msg.setSourceEntity(118U);
    msg.setDestination(674U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.6673489499884501;
    msg.lon = 0.543328648414722;
    msg.speed = 0.6633860196590506;
    msg.speed_units = 148U;
    msg.limits = 148U;
    msg.max_depth = 0.5851417765385515;
    msg.min_alt = 0.8377508275419905;
    msg.time_limit = 0.43068561058561083;
    msg.controller.assign("JZSKJEHZLOQBHGSTXJLBBRAZWRVJCTUGKPVUNZYBDVCQDAOSMNLHMZFRZQRKGPOOHLBHFVYTOABQVDHAKWUGSLTTSIFMXPSUKEWANRBJLLPS");
    msg.custom.assign("IIOPMMGKQLZUZSOTOKPEAMVNCYKKOSFGEAUZVBKLZTXXQAXVTVDZDSMBVXFEUXTQGUYVJHJPBWDTARJIRSNBQXZUHYNOJWIESGHEWJIOWVJJYZPAWUTPAZKUOFUFBREIZKHCGXNSQ");

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
    msg.setTimeStamp(0.5728344191554374);
    msg.setSource(10245U);
    msg.setSourceEntity(144U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.45376809269401785;
    msg.lon = 0.46825349609470335;
    msg.speed = 0.6168053149924004;
    msg.speed_units = 180U;
    msg.limits = 165U;
    msg.max_depth = 0.6460417034342835;
    msg.min_alt = 0.007913829815016649;
    msg.time_limit = 0.9531848850605976;
    msg.controller.assign("MJBYWLVUBYNTYNGNIRTQLZEFIPNDNSKMFDBSPTBTRXPRHGNYKCSFCHMVCGSFPKLCZOARKPCDDVOVXLGXEUQLXDTUILGFTDUWRZJET");
    msg.custom.assign("ARCTUVXIFTFAQNVQFMLZLJJZEVRHDFBHOUTGCOFWBCHNEPFERIPSQZTJNSKJRKCWRSGIBQCXOYYAGGDJKEXCLFUAXVFABVYZNHTHXJGMVKUHBISPFBPPOBJZXYYMDLKDMGSMUWMWGKUNCLPCZEEHFSJATWWQRBKGLQVDRHLNRSRCIGDOZBDBDOHJNWYMEIX");

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
    msg.setTimeStamp(0.9434646470398438);
    msg.setSource(29640U);
    msg.setSourceEntity(67U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.9058800235183418;
    msg.lon = 0.15567404840946863;
    msg.speed = 0.6917680826924718;
    msg.speed_units = 250U;
    msg.limits = 225U;
    msg.max_depth = 0.5707231063586667;
    msg.min_alt = 0.9040257441010758;
    msg.time_limit = 0.15740390999029985;
    msg.controller.assign("CZAZCOFTQEFYXAPYYE");
    msg.custom.assign("GVZYVVSILWDXNNISKBUORFMDSFPAMHNFCCVHRVSTEWAPMWAQZOSQHSKTUSGTERVXKWKTQGOJKUOMIWYSJLGBZTLTGJRKHRJCLKWYZOFGVDYDFMIJLLGAZMDHNAJEDLDQWNBUTPYNGNJS");

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
    msg.setTimeStamp(0.3709766983032716);
    msg.setSource(28266U);
    msg.setSourceEntity(188U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(195U);
    msg.target.assign("PKZNTCIGEIFDJHUCVHQXLWIVPHGFGWECECEUSPNILLSFFUFSPGYGYNGGQQDJKWATRPYIHRXZADTDOAWTCLVPCRZOMBJTJOQRPXSTMDFXHTGEXIIBCXUYXHESLPVJINYFREDVKAGSBKJJBXUQDBKIKLEXLEPBFMZNWYWZUSVLVZLMOOMKQBMYAJKACUOWBZGFBRQKOAMNHRMVWOUN");
    msg.max_speed = 0.9127024875523863;
    msg.speed_units = 102U;
    msg.lat = 0.639480919059911;
    msg.lon = 0.9799612929682151;
    msg.z = 0.9135757306380371;
    msg.z_units = 14U;
    msg.custom.assign("SNHGCQRXZZDDFJNKKHRCRKZYJRQTZGOURBXRNHKPCZGGYLWNPJNRMASAWDLLPACWPLFYVVLSAFFOVAZIQWYLEHNUSSARICPFESCSVKHVKFIHWQNDPXABYQCVMCXBMXIYMHTJSXIBBQIRHYFLDJGKOUWTNULTQIGBWMPEJDMTQKJCEBBLVJP");

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
    msg.setTimeStamp(0.14909996795722236);
    msg.setSource(8134U);
    msg.setSourceEntity(107U);
    msg.setDestination(63348U);
    msg.setDestinationEntity(243U);
    msg.target.assign("KTUHPTPNAXPMJOUJAJPTVYUQOKXYSIXROLATGBZAOAXZJOIWBUNUNFJEBQOZAWXUAREMUIFEVJQBFTTHGKCBVSPYKQVDWWOYPEOTRLYSQRNFERDZEYXCUMEYGRHMWDMCIDQHVHDBZCVZKLNSHTPKMTHMWLNDUISJDNVFCOBLXYNPIGEYLISZKGCCAELGFRXGWRAZVKXCFJZMAYWQ");
    msg.max_speed = 0.5411626209821561;
    msg.speed_units = 82U;
    msg.lat = 0.3807264277739043;
    msg.lon = 0.06693207213560748;
    msg.z = 0.35048436574704034;
    msg.z_units = 232U;
    msg.custom.assign("MNSDWBVGRDCLXTMKUFWEOPMORQBUUSCWSVNAIHMIRUHKFFXQXZBNERS");

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
    msg.setTimeStamp(0.9281520431858643);
    msg.setSource(14316U);
    msg.setSourceEntity(226U);
    msg.setDestination(58770U);
    msg.setDestinationEntity(156U);
    msg.target.assign("OITSDWTNAWUNUFZEXZREEVLTTQCDZVDNLRPMPBPALGHWDMXEQYJJBFGESRBCJQUXHSIUNBKZYGVQLVKLSMDUIZHGXQKJPRKJTFATKRIWOPJWMIOXSTYDFCKLRYJAONEUKSCLXIYOGOZVUXPLSWIFQLAVFOCBNHWTMZQYZOFCJPSXEEXABDNGBPHDCUMSVKHKUANQHGYFGKDFBLYBSWBCPRPMHHGJZUGIARVMXNNCEYCE");
    msg.max_speed = 0.7397517632214674;
    msg.speed_units = 144U;
    msg.lat = 0.8303006385144962;
    msg.lon = 0.25871767462344775;
    msg.z = 0.9888497029864366;
    msg.z_units = 164U;
    msg.custom.assign("VUNTXMFLWVRZYTTJJDUQYNKALVOOMTIBDJZGCRLTMJAZHJJRWJBKROZCW");

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
    msg.setTimeStamp(0.6383269159460377);
    msg.setSource(2267U);
    msg.setSourceEntity(137U);
    msg.setDestination(51866U);
    msg.setDestinationEntity(90U);
    msg.timeout = 32889U;
    msg.lat = 0.7699389008548775;
    msg.lon = 0.5004571242458061;
    msg.speed = 0.6651546378572544;
    msg.speed_units = 59U;
    msg.custom.assign("MHUNZOFUSXGMEBWKNFVXGHPLICTCKOXXJRVWPYRFWJWHUNWASZIHXJOEESPQJGOYIEURKIQNFKXIWWDBSJLHKOBBXOAVFZSJJKZVZWCANSGFOHJYLZDQZHTAGMQYBLNBVPOYRCHGCESIQKBMPTRCAWCLCQOUGTUTXBMVVSIVXMFNVAMIWCUNELEOTDDLJPCUDKLUEHYPUZKGIYDQASQZYXARPLNGJPYBHNMTPEFT");

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
    msg.setTimeStamp(0.596842170857355);
    msg.setSource(11894U);
    msg.setSourceEntity(217U);
    msg.setDestination(9372U);
    msg.setDestinationEntity(72U);
    msg.timeout = 26960U;
    msg.lat = 0.8135880383441794;
    msg.lon = 0.9789219943973537;
    msg.speed = 0.2220536000771267;
    msg.speed_units = 34U;
    msg.custom.assign("CMVZOZERWPXJHTKGEWDHKELJMXWKDRM");

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
    msg.setTimeStamp(0.44965298439629287);
    msg.setSource(17147U);
    msg.setSourceEntity(42U);
    msg.setDestination(1629U);
    msg.setDestinationEntity(252U);
    msg.timeout = 25689U;
    msg.lat = 0.015597616544432924;
    msg.lon = 0.37390404294814716;
    msg.speed = 0.043056645689769635;
    msg.speed_units = 146U;
    msg.custom.assign("UCCRCSWDGEDJQFBUUVERWWSZPVEZDGVLDLLILQEZNFOQXGUERVUHBKHKEJYXXQNGMNQKZOKJQOTEYPJLZPACBBRDTRYGDUIDSHA");

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
    msg.setTimeStamp(0.9181875586650952);
    msg.setSource(61989U);
    msg.setSourceEntity(100U);
    msg.setDestination(708U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.15088569616280567;
    msg.lon = 0.9981398508375865;
    msg.z = 0.9749011988298041;
    msg.z_units = 254U;
    msg.radius = 0.982472313091167;
    msg.duration = 1113U;
    msg.speed = 0.5613553912796918;
    msg.speed_units = 172U;
    msg.popup_period = 3626U;
    msg.popup_duration = 81U;
    msg.flags = 15U;
    msg.custom.assign("WBWQOSRWSGAINZFJGVCBIHJJJGEDJKOZHMBXXTKKWIMQVTTDVYNMDEDZERUHDHHJYALWPYFQBHROWNBTFFMNKTQEDUXKIJRIWTCMOUUQWMPUTDGPJGHTAOTBCUVYCHADBQCXQEFWSXOYAPSXSMZWNOCERLASQUYIKXZRYCBNXIKCK");

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
    msg.setTimeStamp(0.8935126971933949);
    msg.setSource(29626U);
    msg.setSourceEntity(70U);
    msg.setDestination(19886U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.4222309109763712;
    msg.lon = 0.15434303002240657;
    msg.z = 0.8840910083749991;
    msg.z_units = 61U;
    msg.radius = 0.4502250508107385;
    msg.duration = 62597U;
    msg.speed = 0.33951813262578723;
    msg.speed_units = 2U;
    msg.popup_period = 4276U;
    msg.popup_duration = 56863U;
    msg.flags = 254U;
    msg.custom.assign("EGWIUSNLTKZYCCYBOTIEMRHBWOQDXEHPCTOYGFIQFZLNQHAUMNEZCVRLBHKVIRNFKLJRWBBEKCHHEOQLDNUXVURYVEONFJRFRVZFAVBXOFCZWGMIVPMCVQJGESZ");

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
    msg.setTimeStamp(0.2258594861818619);
    msg.setSource(5903U);
    msg.setSourceEntity(194U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.5102954064563563;
    msg.lon = 0.146799728829894;
    msg.z = 0.25453474849513447;
    msg.z_units = 82U;
    msg.radius = 0.8558481735740462;
    msg.duration = 58604U;
    msg.speed = 0.5058660714595035;
    msg.speed_units = 152U;
    msg.popup_period = 27492U;
    msg.popup_duration = 48357U;
    msg.flags = 148U;
    msg.custom.assign("FTCFABJNLKNPHSEAIRUCHTSDADVEINAQQJBAVPMILAMOXVXIRKAKWESMFLOFMQLZCRYIIJZGXVSUDODBXHPTBTZBDHUVGBXJTPKIEOFXHCFYSOEGHCUMKAGR");

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
    msg.setTimeStamp(0.3590621432477251);
    msg.setSource(57980U);
    msg.setSourceEntity(154U);
    msg.setDestination(16126U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.33223630333773446);
    msg.setSource(10089U);
    msg.setSourceEntity(171U);
    msg.setDestination(20029U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.14915730830021423);
    msg.setSource(15296U);
    msg.setSourceEntity(193U);
    msg.setDestination(17580U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.880948613935665);
    msg.setSource(39617U);
    msg.setSourceEntity(253U);
    msg.setDestination(29061U);
    msg.setDestinationEntity(36U);
    msg.timeout = 27768U;
    msg.lat = 0.931482583541146;
    msg.lon = 0.19008655566643207;
    msg.z = 0.381758512430347;
    msg.z_units = 243U;
    msg.speed = 0.6200379322917683;
    msg.speed_units = 112U;
    msg.bearing = 0.23196196168328398;
    msg.width = 0.930265760698092;
    msg.direction = 76U;
    msg.custom.assign("ZIVKFSDHXHGRWMOXUNVTJFQMMPGBFGKXFADAUMWXVDXTXTKBWQQPBBIWSRTYJRWYTCEQIEAAMNGGNFPNGYQULDFOFCSWJRKEPHFANHWVVEXKNPWLOKZFVJLASNSIGFIHBPIZYCBOVLMAZJATCPLTJWLOEEYMJPOOTUTQBVZZQNR");

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
    msg.setTimeStamp(0.09781804744360445);
    msg.setSource(40680U);
    msg.setSourceEntity(77U);
    msg.setDestination(9147U);
    msg.setDestinationEntity(143U);
    msg.timeout = 10852U;
    msg.lat = 0.2900670481715226;
    msg.lon = 0.4797759046387451;
    msg.z = 0.3087819593830575;
    msg.z_units = 6U;
    msg.speed = 0.5840913588612636;
    msg.speed_units = 126U;
    msg.bearing = 0.8158804423933804;
    msg.width = 0.28344637900988;
    msg.direction = 101U;
    msg.custom.assign("IJGONEZTMWSXMZKLQHPABRCBIJFGUBAQRXNVXELOTQHRGBGEWTZNMHWFXRIOHWHMSXUYLEYYLMNBCSQXIKVDAYGDQBGMIPZYTWDKKQMCAZZTCFUVOOBNDGGACOWHKAZVGYELQSWESOAPKWTLSLJFHBQTWNNSKYTPHCIYPCZCJNNQARCMLOKOPDKFHXUUCDBPWVUSDJE");

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
    msg.setTimeStamp(0.09129811728409076);
    msg.setSource(23210U);
    msg.setSourceEntity(9U);
    msg.setDestination(24221U);
    msg.setDestinationEntity(111U);
    msg.timeout = 53823U;
    msg.lat = 0.41164603663989563;
    msg.lon = 0.4570684957815373;
    msg.z = 0.9843389080010893;
    msg.z_units = 201U;
    msg.speed = 0.7920801272722438;
    msg.speed_units = 12U;
    msg.bearing = 0.14456739031266386;
    msg.width = 0.1856347382785316;
    msg.direction = 221U;
    msg.custom.assign("LYSCLEBEOVMNZDLAQXOGGBVIFFJIYWQMAEXXESBBKOADBHGMMKOVGGOSXNCUCDFSHYQSFZGNDKJRCDAXXLTHLWBTTQHOCWKQNFYCPVIZIWFPTZSMERBYRWXJEEVEILNJPDMEIUXPJXLYPIUTRRRMAKRKVLNTYPJNQIHNWT");

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
    msg.setTimeStamp(0.29809539316187006);
    msg.setSource(56566U);
    msg.setSourceEntity(110U);
    msg.setDestination(4631U);
    msg.setDestinationEntity(254U);
    msg.op_mode = 113U;
    msg.error_count = 1U;
    msg.error_ents.assign("UZIYXOYTNWMTRJIXMTLALPFEHCDFAOUTCDISFEZFZATCHTEZQQMZGBJVXBSRLFWCOSGUWTERLBUHPQNABVKGVDZBCXHEFZ");
    msg.maneuver_type = 47350U;
    msg.maneuver_stime = 0.6084261846011094;
    msg.maneuver_eta = 21630U;
    msg.control_loops = 185484538U;
    msg.flags = 58U;
    msg.last_error.assign("FHCIEKIXWQXDDEJPXWXIDMCMLWNUSVARLOIESOROHEVGCVZLZRDAGMUXFFIRPQFROGAWCJRNLSVWYGGCYKJNYLJQAXSEJZZNWNMOSNKTIYPQEHMLEAFCQLDUTOVICROMNGVAPRVTHYMXSQB");
    msg.last_error_time = 0.9487034408835284;

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
    msg.setTimeStamp(0.5323325010004304);
    msg.setSource(58780U);
    msg.setSourceEntity(65U);
    msg.setDestination(23337U);
    msg.setDestinationEntity(122U);
    msg.op_mode = 160U;
    msg.error_count = 245U;
    msg.error_ents.assign("UFPUPSJBYJWOOF");
    msg.maneuver_type = 40914U;
    msg.maneuver_stime = 0.40339817495093333;
    msg.maneuver_eta = 58655U;
    msg.control_loops = 1476195162U;
    msg.flags = 58U;
    msg.last_error.assign("OYOOCWTSMHTYYHDYSVYBEKZNFMFGXQMWBSKMBIDLGEPRNRV");
    msg.last_error_time = 0.3713205280143025;

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
    msg.setTimeStamp(0.7622121948026567);
    msg.setSource(62375U);
    msg.setSourceEntity(17U);
    msg.setDestination(7605U);
    msg.setDestinationEntity(57U);
    msg.op_mode = 24U;
    msg.error_count = 52U;
    msg.error_ents.assign("SWGQQJVHRKRFXVDWRVOKYKTFITLJRIEXHSNIOALCUHUYBHPSODKJBUZSYRKTSLZIPXZVMPZWTGQMPVOUCYMTPEKCKYAQGDIAZGFZLXMBQELRGNZLHBMFJUXAPNBFOENW");
    msg.maneuver_type = 51690U;
    msg.maneuver_stime = 0.04790666818375333;
    msg.maneuver_eta = 56317U;
    msg.control_loops = 315263453U;
    msg.flags = 110U;
    msg.last_error.assign("VGNYJFKSZRWCZWJRBQQJPXPYNWQSKKMAPLUDVAXOFHOCMSXKZBHHCTAPUQUVGTLCFDKQCIXBCTMNLUBUYVSXGIIKFBRQDQYGTYRJYZUJIUHSJGMNKSEOASNEZLINOMEPMMDJLONFBUHWROQCGJVWVVSMYVKZYWSBHOCODUWYFOLKNDHAPGGHIWYLFZRRISBEDCAVTDQUDWTLBEWRCTJHNREIIEHZIVFTTPMEJDLBFPGK");
    msg.last_error_time = 0.7814735536478067;

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
    msg.setTimeStamp(0.8355291078914759);
    msg.setSource(9251U);
    msg.setSourceEntity(7U);
    msg.setDestination(27769U);
    msg.setDestinationEntity(211U);
    msg.type = 2U;
    msg.request_id = 48780U;
    msg.command = 29U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 32339U;
    tmp_msg_0.control_ent = 221U;
    tmp_msg_0.timeout = 0.2066352246308697;
    tmp_msg_0.loiter_radius = 0.49199436325732526;
    tmp_msg_0.altitude_interval = 0.9891604667481204;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51983U;
    msg.info.assign("NJHFKLNZDEXVVDOWIMQHWEJUOLKYRWFTGAXHHHWOEJUILGXAENBRUVSTLNSYKSLPTCPZVUZVZGSGIKPNGGKKDPVJDNDAAWFUMROVBSWOPMCAPQZYIABSCTUOWQPJRUXRSNHZRYCOHTSCVKYMXOYJBBSSUFLXBLECDNHUQMWZJRAICXEETPNJEUTDQDZFTZVBBKYAJMGYIGWTREYNX");

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
    msg.setTimeStamp(0.29173595945166586);
    msg.setSource(57736U);
    msg.setSourceEntity(113U);
    msg.setDestination(59747U);
    msg.setDestinationEntity(187U);
    msg.type = 55U;
    msg.request_id = 45982U;
    msg.command = 53U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 58518U;
    tmp_msg_0.name.assign("MJSCUNDOITUCWKZOAJEXIBXCVPHFFJY");
    tmp_msg_0.custom.assign("LOJPPXPGFWYEDRYE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61989U;
    msg.info.assign("PWTHAAIJULWGGWWDKXTWEYSPZCMIGNVKLNQPAXZORQVNLYJGDFZPJGSFUYFRJ");

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
    msg.setTimeStamp(0.32115430808917445);
    msg.setSource(41406U);
    msg.setSourceEntity(105U);
    msg.setDestination(53578U);
    msg.setDestinationEntity(3U);
    msg.type = 232U;
    msg.request_id = 40030U;
    msg.command = 23U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 26365U;
    tmp_msg_0.rpm = 0.7582584235431254;
    tmp_msg_0.direction = 121U;
    tmp_msg_0.custom.assign("TTPEAWMJAKCYTLERFRPEZPXGAYBPDEBQGYPGBWGDDLHPOVRGNUEZZOQBJFMV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10793U;
    msg.info.assign("VANFDCAJZSKGZSKAFCTJZPGENJOSCPBUGPTSFZNERHOPGYWHOMWXRUIYZJEKQKVHIIQZUFFNWJDWBSMNGRBVNQBDVYRMQYLYRWCPEVKOEWAJPSCAVKVYXAQASLGEJRLKUQMKIPUAQAHDJWTHKBMNDDMQHGDTPTRCBNRNAFJZGOYSTFIHPHXYIEVFUQLRFXLLCBIC");

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
    msg.setTimeStamp(0.6075118772908378);
    msg.setSource(33280U);
    msg.setSourceEntity(91U);
    msg.setDestination(12750U);
    msg.setDestinationEntity(154U);
    msg.command = 16U;
    msg.entities.assign("FDDTHZQPGPDWUPMNARMCXLXXJOWUDBGRCXOSJSCQKQLFUAESVYKGPKHZZEEMVNWEJHEMZEEHVWVFFRYTCPXWNXCAVOVGJEHVSVOZEYIUYXJMWCNIBQJQKDBSLCOLCMWFQXBZKASHUINGCVAPIKERFAYYYMR");

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
    msg.setTimeStamp(0.7800712510399086);
    msg.setSource(13157U);
    msg.setSourceEntity(38U);
    msg.setDestination(6031U);
    msg.setDestinationEntity(152U);
    msg.command = 126U;
    msg.entities.assign("ARXKEFDPNZWFYDAWWWSUFQMVAEXDSBEHYOGBSNQHLTTJLQCLAJFRADNTEOYJRIUDSHJPBSVCUICTJOPJBVMGNABXZYPLERMGOCNQSRBYPNWZTDWTIBKYCSRCLMDUZKVEGQICNLMKAFHQUXVMVOC");

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
    msg.setTimeStamp(0.7362413539186945);
    msg.setSource(54146U);
    msg.setSourceEntity(207U);
    msg.setDestination(10276U);
    msg.setDestinationEntity(199U);
    msg.command = 194U;
    msg.entities.assign("LVBNWNUILSDLVHHPQFIJUGPQB");

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
    msg.setTimeStamp(0.44765548270568245);
    msg.setSource(47320U);
    msg.setSourceEntity(221U);
    msg.setDestination(43939U);
    msg.setDestinationEntity(33U);
    msg.mcount = 78U;
    msg.mnames.assign("EYWJCSOJVECOLXGYNEVCWVWHTNVCXUNIFZWUKDTEXWDTWPQYMMKWSUGRNEYKLQOMIWISEPKFXZNYCICJHYMFNDJSRIVHLBFJQBLUGACLXRAVGAMFRAXVKTHMPBLPJTPQKIAWHQRXZDPRCQJOUQPUWVRTQRGDFGHCVIO");
    msg.ecount = 29U;
    msg.enames.assign("BUAFBRYTQZNPKFIZTLUWFGHIYQAMCLJKTVWHUPAWHUFCGHLUMGFEEHBYVRQGTVNIKIOPKDVSGCRUHQCULJXSQBPOTQPSBABBVASCLDWIHJYBLAPKYEERPOLXKYNXXZIXJDFDCQEMSXZVKUXMWSPNNOCWGZTPAQJYOUNOLOFFKJNMEZVQGTJALIRJXVIIYXYRJWMZDSZYDEOGFRVDAOPNELRMSRCTDMRXDWEGCBGNCWW");
    msg.ccount = 90U;
    msg.cnames.assign("LVBPVTNVAFZIHNVOAVWGQZJMDDNBWALQHWSUPSEGKTHGGRVHBURKLRTFLAQJLTYEXWDLQZQKRWKFLONRYSRE");
    msg.last_error.assign("NGRCBEITNQYCPBCPGVXZPWDONHIROTRBUXUHSFPHJVDEKCWCTPLLXESPHODGJCVYLTHZKVWXUOZNBADVFWAHJVXWTEXYZKONRYWGZUMRTUYHBUQQUCWELEQNIIKEQDBWLFDBMQFYVXKMIIGAZJSFRZAOTRJLYCSPHAFKZLOENSQZNJLPEUFMXKFAJASMMHKVLOMYTLHXMIUQRSIUJVFNTGMPKEDDWIAVFBS");
    msg.last_error_time = 0.5129586968841937;

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
    msg.setTimeStamp(0.40451952361065147);
    msg.setSource(60580U);
    msg.setSourceEntity(198U);
    msg.setDestination(21712U);
    msg.setDestinationEntity(222U);
    msg.mcount = 54U;
    msg.mnames.assign("WTUKODBWMOINFLPQCOPSZAEJWRMLHPKXEXAMKUMYMVZLFNSQCMGGAUDLGVDDSHQREIQLWUJGIARUWAKOROXOBCSVHQJSXDPOKBOHDCHWCGIRSSITYJTKBAFXDMZGVARYJAZSLNIQQUPDIVFRTCZNHQVNIUQWFYEEZUFYAIYPVXEXUCEVPFMZLWFSPNVBBZXWZJLBHNZYQJRNRPVPBOLMGFTRNGH");
    msg.ecount = 37U;
    msg.enames.assign("GBLZXIOOVSYWXLAAUQNOV");
    msg.ccount = 43U;
    msg.cnames.assign("ARPVIOVNHYNATTAOMWHGBMYTYNSBGGTHVVNJSXIJIICGMFKRQQOKEYGTKQMPBJUGFSCQFHTDRVOXUDTXAILDPMUIYUVNCEZ");
    msg.last_error.assign("DZSRMXJNAZOGXTNIFZXNVDITGCRVVVCWIPRFOPGCZQFDJHPHXZCRVKVUGZHNWDRTHCAMQKBAKMTCSWHWCFAKYEWPGUGPMKJNKYLHWZMNQAFUDQMTYQEIJBVUJZEUIIIYYOVSDYIPQXXLSJTABEPHTOFMOXHWEHFEQVNSQOZWCBOCXTSPUKJSTBBRLPNGXDPKAJGLFRMSGSOAQWOLRKLDDLBMBDGFNUEQ");
    msg.last_error_time = 0.8509063724876461;

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
    msg.setTimeStamp(0.02731061596922091);
    msg.setSource(62229U);
    msg.setSourceEntity(148U);
    msg.setDestination(31329U);
    msg.setDestinationEntity(84U);
    msg.mcount = 105U;
    msg.mnames.assign("RSIVUZJICITNHMEKSBTPZDTLWAUGQNMQVYBAAEDCPYIWHATPOZRRPIBCVLWGHXKKIERJZGSCSSOLWFVKADARFYLIYOTGKZKFCVJNVHORDCBHEKUGS");
    msg.ecount = 216U;
    msg.enames.assign("TNMLVUITAYOZNVOAKLBVJPNHELCGZIIAMRTRRBWRJWYPAUNLVYHLWVOGLUDYQMHJSNHJBNEFQTSUMIZODLCULZVFUBZCDRXTHJFXDCIAEYCJIPDDKNAFWJVJPADKSGZTUZ");
    msg.ccount = 46U;
    msg.cnames.assign("HAEOHUUROAUMRPIHNQXMSILPEYPXKURGFETCKEYBWIKPTFJDGGELLAVNWAANMZSHQYZZAZDDYSDRYFKOJNERAWTBIKUOGTQLMRSXLVZCFVXBTLGHPNWOXHUYHCJWSGKVAPBMXXYAXWFJVZDQWCMUQBOQODNUHSBGQGUTBDTHSPVIZRESNSLPVNSVOHFXYOCTNBMNMJREBOEKVWGGMCQCIYDCTLDL");
    msg.last_error.assign("YEZDWIWGKBYRSZVLFOAC");
    msg.last_error_time = 0.7568703576461642;

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
    msg.setTimeStamp(0.5460252671751753);
    msg.setSource(22855U);
    msg.setSourceEntity(154U);
    msg.setDestination(11924U);
    msg.setDestinationEntity(10U);
    msg.mask = 8U;
    msg.max_depth = 0.31821447066190456;
    msg.min_altitude = 0.5299750584185415;
    msg.max_altitude = 0.7065788927751553;
    msg.min_speed = 0.5791281473724599;
    msg.max_speed = 0.10718667462770748;
    msg.max_vrate = 0.1145909449161443;
    msg.lat = 0.7054457577619521;
    msg.lon = 0.883404446941284;
    msg.orientation = 0.8264740061719698;
    msg.width = 0.1888920234035001;
    msg.length = 0.10215820578034174;

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
    msg.setTimeStamp(0.7711297152336705);
    msg.setSource(58715U);
    msg.setSourceEntity(231U);
    msg.setDestination(23475U);
    msg.setDestinationEntity(146U);
    msg.mask = 205U;
    msg.max_depth = 0.6988865912975588;
    msg.min_altitude = 0.4239108209689695;
    msg.max_altitude = 0.07081033788561042;
    msg.min_speed = 0.8495372609717156;
    msg.max_speed = 0.2815349397784217;
    msg.max_vrate = 0.22395779906799385;
    msg.lat = 0.8661022867416063;
    msg.lon = 0.11123079299102978;
    msg.orientation = 0.949356851532816;
    msg.width = 0.9068254179344061;
    msg.length = 0.6553767923901012;

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
    msg.setTimeStamp(0.8971513844077205);
    msg.setSource(57887U);
    msg.setSourceEntity(206U);
    msg.setDestination(63068U);
    msg.setDestinationEntity(129U);
    msg.mask = 253U;
    msg.max_depth = 0.055627321690290166;
    msg.min_altitude = 0.5412409114245316;
    msg.max_altitude = 0.08654325523516304;
    msg.min_speed = 0.9078087768652707;
    msg.max_speed = 0.4311095353773694;
    msg.max_vrate = 0.6026019942691788;
    msg.lat = 0.40455202661507117;
    msg.lon = 0.9714732504985497;
    msg.orientation = 0.41606259330542916;
    msg.width = 0.41745687154473354;
    msg.length = 0.41795670766221493;

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
    msg.setTimeStamp(0.46780514932547146);
    msg.setSource(20794U);
    msg.setSourceEntity(220U);
    msg.setDestination(19852U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.627619925824641);
    msg.setSource(2459U);
    msg.setSourceEntity(249U);
    msg.setDestination(60200U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.27419983090974465);
    msg.setSource(7535U);
    msg.setSourceEntity(120U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.1482845082030425);
    msg.setSource(14723U);
    msg.setSourceEntity(106U);
    msg.setDestination(51164U);
    msg.setDestinationEntity(1U);
    msg.duration = 59281U;

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
    msg.setTimeStamp(0.6526762971459787);
    msg.setSource(52749U);
    msg.setSourceEntity(108U);
    msg.setDestination(16623U);
    msg.setDestinationEntity(174U);
    msg.duration = 17949U;

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
    msg.setTimeStamp(0.3804454417971591);
    msg.setSource(8878U);
    msg.setSourceEntity(165U);
    msg.setDestination(16097U);
    msg.setDestinationEntity(185U);
    msg.duration = 13975U;

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
    msg.setTimeStamp(0.4423965011012676);
    msg.setSource(28674U);
    msg.setSourceEntity(239U);
    msg.setDestination(7095U);
    msg.setDestinationEntity(200U);
    msg.enable = 178U;
    msg.mask = 848604328U;
    msg.scope_ref = 977429337U;

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
    msg.setTimeStamp(0.06356437229902456);
    msg.setSource(50866U);
    msg.setSourceEntity(122U);
    msg.setDestination(37603U);
    msg.setDestinationEntity(210U);
    msg.enable = 112U;
    msg.mask = 3167286648U;
    msg.scope_ref = 4291243547U;

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
    msg.setTimeStamp(0.2896556240905497);
    msg.setSource(56461U);
    msg.setSourceEntity(215U);
    msg.setDestination(15164U);
    msg.setDestinationEntity(246U);
    msg.enable = 56U;
    msg.mask = 4208505852U;
    msg.scope_ref = 2376746462U;

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
    msg.setTimeStamp(0.5638993147521395);
    msg.setSource(41664U);
    msg.setSourceEntity(4U);
    msg.setDestination(2337U);
    msg.setDestinationEntity(137U);
    msg.medium = 9U;

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
    msg.setTimeStamp(0.018238872023429442);
    msg.setSource(20189U);
    msg.setSourceEntity(33U);
    msg.setDestination(23917U);
    msg.setDestinationEntity(96U);
    msg.medium = 126U;

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
    msg.setTimeStamp(0.564534925092267);
    msg.setSource(30669U);
    msg.setSourceEntity(14U);
    msg.setDestination(50334U);
    msg.setDestinationEntity(176U);
    msg.medium = 55U;

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
    msg.setTimeStamp(0.9561020905859693);
    msg.setSource(64911U);
    msg.setSourceEntity(237U);
    msg.setDestination(10695U);
    msg.setDestinationEntity(20U);
    msg.value = 0.49707062133497826;
    msg.type = 178U;

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
    msg.setTimeStamp(0.01040517726805712);
    msg.setSource(54293U);
    msg.setSourceEntity(211U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(62U);
    msg.value = 0.8095741114845995;
    msg.type = 219U;

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
    msg.setTimeStamp(0.2977132304777468);
    msg.setSource(56511U);
    msg.setSourceEntity(14U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(211U);
    msg.value = 0.11146285536788147;
    msg.type = 65U;

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
    msg.setTimeStamp(0.5636174934553428);
    msg.setSource(31009U);
    msg.setSourceEntity(100U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(241U);
    msg.possimerr = 0.3646777981895206;
    msg.converg = 0.19602249602179833;
    msg.turbulence = 0.3388632542362231;
    msg.possimmon = 80U;
    msg.commmon = 111U;
    msg.convergmon = 89U;

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
    msg.setTimeStamp(0.6460021645623077);
    msg.setSource(63078U);
    msg.setSourceEntity(87U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(25U);
    msg.possimerr = 0.9799546247925668;
    msg.converg = 0.1735527774947906;
    msg.turbulence = 0.14187085259903476;
    msg.possimmon = 99U;
    msg.commmon = 172U;
    msg.convergmon = 62U;

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
    msg.setTimeStamp(0.4609390534476254);
    msg.setSource(39439U);
    msg.setSourceEntity(167U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(212U);
    msg.possimerr = 0.4176446607467832;
    msg.converg = 0.505677149877012;
    msg.turbulence = 0.8949018525711891;
    msg.possimmon = 164U;
    msg.commmon = 162U;
    msg.convergmon = 105U;

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
    msg.setTimeStamp(0.8368916599376064);
    msg.setSource(8245U);
    msg.setSourceEntity(13U);
    msg.setDestination(24935U);
    msg.setDestinationEntity(53U);
    msg.autonomy = 68U;
    msg.mode.assign("HDWGICKWZMBPCPTGJNOMSVPJVFWWTIKRKWSDUZOPVWOXLEAPYBTFQRVJUIFLTSPOZGNJJAVFHCSMQEPABRYUYTEUTQDGQXMMLXEHNVCRKCSZKNRQGSVEPFGECNCLTORHJOZPBIQBIRHMVYSGAXDAEZIKXMBMAJYNXIIHYDPSIOKVZAGEBGBTKJEBIWFASOWGJTFUKHLDCJHQUWQMXFSHUULZNVR");

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
    msg.setTimeStamp(0.2661372556322785);
    msg.setSource(3079U);
    msg.setSourceEntity(46U);
    msg.setDestination(54149U);
    msg.setDestinationEntity(37U);
    msg.autonomy = 184U;
    msg.mode.assign("JQHWXKALVXVKTMYJIPGFGFGODQEOHULWPTVDZUWWTBFQBZWVIKAAHELGSWUC");

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
    msg.setTimeStamp(0.5326397226016334);
    msg.setSource(33385U);
    msg.setSourceEntity(72U);
    msg.setDestination(56002U);
    msg.setDestinationEntity(247U);
    msg.autonomy = 152U;
    msg.mode.assign("TLRNFAVTEPOULFBCAIKXEMGDAQVSHBHTCGXEHASQRJTDQUOEZARGKFLNTRVCYX");

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
    msg.setTimeStamp(0.6405456567607885);
    msg.setSource(34139U);
    msg.setSourceEntity(157U);
    msg.setDestination(38263U);
    msg.setDestinationEntity(109U);
    msg.type = 155U;
    msg.op = 78U;
    msg.possimerr = 0.1971900360564448;
    msg.converg = 0.5818125402268732;
    msg.turbulence = 0.2974520011942655;
    msg.possimmon = 83U;
    msg.commmon = 239U;
    msg.convergmon = 212U;

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
    msg.setTimeStamp(0.059737251840295214);
    msg.setSource(32243U);
    msg.setSourceEntity(189U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(77U);
    msg.type = 25U;
    msg.op = 59U;
    msg.possimerr = 0.5758656324163843;
    msg.converg = 0.12723070055233765;
    msg.turbulence = 0.05832642392905796;
    msg.possimmon = 200U;
    msg.commmon = 203U;
    msg.convergmon = 252U;

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
    msg.setTimeStamp(0.2641145483249214);
    msg.setSource(20089U);
    msg.setSourceEntity(186U);
    msg.setDestination(40763U);
    msg.setDestinationEntity(183U);
    msg.type = 28U;
    msg.op = 90U;
    msg.possimerr = 0.153734928560325;
    msg.converg = 0.6830241279303066;
    msg.turbulence = 0.5559258776441537;
    msg.possimmon = 112U;
    msg.commmon = 240U;
    msg.convergmon = 199U;

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
    msg.setTimeStamp(0.19799041232795112);
    msg.setSource(32710U);
    msg.setSourceEntity(185U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(240U);
    msg.op = 161U;
    msg.comm_interface = 121U;
    msg.period = 46493U;
    msg.sys_dst.assign("JOIMNXWTTKZCQHDIIHKDGTUMZYJMFDJLDYRAQJTPJRQYSHMJKVXXOGTXAZHWMNUFNTRIGBGEKKMCASQXTEQJSRGLUKEBKRXLOZHVIUWYYWZXAQHDRVYGCNDHYAPPLHFTBCSPZKIVBNOBBSGCVOERBQFRQTOUPCLEGSHDPGAYSUFOLYVDIFKRHNZWEJEEAXZZRWODSIUCOVAMNVGXOZIEPWTIWEKXPBJASYLCFNDMCFNUUSFMWQAV");

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
    msg.setTimeStamp(0.10664587513314328);
    msg.setSource(35785U);
    msg.setSourceEntity(92U);
    msg.setDestination(2465U);
    msg.setDestinationEntity(97U);
    msg.op = 23U;
    msg.comm_interface = 87U;
    msg.period = 22133U;
    msg.sys_dst.assign("ZARSRTSAJXUAMEREFLAMXYXLOQCITKMHXOUSMIZLYFYDFTQAJMDQCIGFWEZPVWYBNCKUHHKCTWISQPPVIMJOOCTNGGYDSKQZYUJVOBROFVMBYTSWQFDZSHKBEWHPGJKNAGAUIXNIWXVSEIUGYKHGKNJPPZHLCRHFLQDWGNMQVDZROCUSRMTBXEKIWFFSOBCTXQVLXJBPEYLCUUVLVOHJBZNNLRKNDHDECTYGPLPZJ");

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
    msg.setTimeStamp(0.737630420055995);
    msg.setSource(11340U);
    msg.setSourceEntity(204U);
    msg.setDestination(22648U);
    msg.setDestinationEntity(173U);
    msg.op = 28U;
    msg.comm_interface = 243U;
    msg.period = 34265U;
    msg.sys_dst.assign("XQKJKVCSGGPFGJOUDYJSPZXZZWFNIBVYUTLBFRDZKDANIPALWCSEDETXMGAUFRUXRYVCKIDXWRFBCAOMKNDYMQQIPRXVUOJMPFCAIPIJEMCVDWMNVKUGNYGPLHXPCBEWLARYAQGQKJLENSHLYZTRUCMTJHSXLOYHHBWQZFJEQLAIMJCXEOFBOVIVIXNTHWSQZRVWBTOVWENSNFOCZRMIQGQLSOMARHADTJKTWHBPDFZSHYENSKUEGYUPZTB");

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
    msg.setTimeStamp(0.9590256571453549);
    msg.setSource(1685U);
    msg.setSourceEntity(166U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(59U);
    msg.stime = 2722657976U;
    msg.latitude = 0.6146968952649321;
    msg.longitude = 0.7485052261582348;
    msg.altitude = 2963U;
    msg.depth = 35030U;
    msg.heading = 14304U;
    msg.speed = 14058;
    msg.fuel = 98;
    msg.exec_state = 124;
    msg.plan_checksum = 63025U;

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
    msg.setTimeStamp(0.35329912597425106);
    msg.setSource(279U);
    msg.setSourceEntity(166U);
    msg.setDestination(57703U);
    msg.setDestinationEntity(13U);
    msg.stime = 2273893606U;
    msg.latitude = 0.8422513053544567;
    msg.longitude = 0.012109856020014576;
    msg.altitude = 52478U;
    msg.depth = 20427U;
    msg.heading = 42136U;
    msg.speed = 2437;
    msg.fuel = 113;
    msg.exec_state = -47;
    msg.plan_checksum = 7698U;

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
    msg.setTimeStamp(0.14335565139410733);
    msg.setSource(36619U);
    msg.setSourceEntity(142U);
    msg.setDestination(31550U);
    msg.setDestinationEntity(58U);
    msg.stime = 4256605392U;
    msg.latitude = 0.993280073223761;
    msg.longitude = 0.13259236484393888;
    msg.altitude = 17713U;
    msg.depth = 51115U;
    msg.heading = 13401U;
    msg.speed = -28667;
    msg.fuel = 96;
    msg.exec_state = -121;
    msg.plan_checksum = 10330U;

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
    msg.setTimeStamp(0.19129297139877288);
    msg.setSource(37987U);
    msg.setSourceEntity(97U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(83U);
    msg.req_id = 32431U;
    msg.comm_mean = 165U;
    msg.destination.assign("AUCXVABWHXPGASAVRUZEKLQVWHWQWHRFLYGJIYCNGARMSUDJJZHWBRPQXTRDDDBYHXHMOPAPZYZHMZPSRKGWLNVPVRSNHOTTSUOKEWJYDDECVRPTTGQCIBDXFUEVN");
    msg.deadline = 0.057082403784547986;
    msg.range = 0.6014742375815708;
    msg.data_mode = 16U;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 62U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KLZLMLITAQMFJRNPWNSWMOXSVLAIREIZBJITAWPJHJTIZVBIMKFKMCXCGGOFXNGWOETADXCGXXADYQBRZQNRUBUEVZKZYFOFGWBFIPOQVPNCJFSRZGQDEQYRBADLCUMWIKHNTHVKFPJVCKCIGGHGVBFSMEZTNKMEIYAWC");
    const signed char tmp_msg_1[] = {10, 95, -38, 117, -22, 78, 63, 61, -65, -35, 9, -115, 109, 91, 60, 126, -88, 94, 60, 110, 111, 112, -43, -100, -10, -78, 96, -55, -52, 60, 34, -101, 45, -116, -20, 14, 15, 83, -7, -101, -104, -85, 117, -30, -113, -101, 49, 107, -124, 80, -46, 103, 26, -108, 90, 48, -67, -71, 90, -6, -9, 63, 12, 117, 84, 70, -63, 45, -23, 30, 49, 41, -88, 118, -15, -48, -109, 5, -107, 88, 108, 104, -56, -16, 55, 31, -82, 23, -82, -69, 121, -10, -126};
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
    msg.setTimeStamp(0.41132249469661264);
    msg.setSource(216U);
    msg.setSourceEntity(48U);
    msg.setDestination(18893U);
    msg.setDestinationEntity(32U);
    msg.req_id = 24676U;
    msg.comm_mean = 54U;
    msg.destination.assign("NSTTIFZPGXMGLKEPKKQHYECEMVPCYZQFJQYLTVURWYDMNHJXAUMIOBUOAJHEBWCQPCBKWOUMWXQELQZFPDTXGSJMOEBXFOJXTNIWABANIEBDVYRNWPWSZOKVGGDJSUKFLHISIASXODWBBCYJQVHVLILGYHNEMQTDWMVAQJNAUVLZKOGOVTKGRZAAQSFJSPOAITNGRFMGUPNDKFYBUILXCKCEBMR");
    msg.deadline = 0.6442680300225584;
    msg.range = 0.7597608525762228;
    msg.data_mode = 136U;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 212U;
    tmp_msg_0.error.assign("FYBUGAAYBKAETUTFORPOMNANWFWFSWPEOJVQXBRNVJHPDTGOEHKOZQHXYWFPMITNRCMJKHVBVWIWRLYKZMIPEULZRRMYWJSZYZJUUUCSEUNLCMPKE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WTZSHHZWIJGJYIJFXSZIQAVRVVNPEEIFIOSRLRGHTTVXEEEAAUCIUMQVAOVWKCSNKTDEOHNQAHBPRQOWZNZDZUSYILWBGOBJMKGOUEEAILPQTEUWKDYZTZSNFMUXYGCMOJYRZFCSTVDWUPMFLCYOMXMRLKRIGOKZQOGPIMDQYHPJRDBDMJUNXFBNDURCHWFQLE");
    const signed char tmp_msg_1[] = {-109, -6, 1, -43, -114, -4, -43, -18, -23, -12, -64, -22, -22, -84, -115, 42, 62, 88, -48, -9, -8, -79, -69, -44, 38, -92, 77, 96, 103, -72, -35, -50, -74, 99, -30, -61};
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
    msg.setTimeStamp(0.20715508435620378);
    msg.setSource(19924U);
    msg.setSourceEntity(151U);
    msg.setDestination(8294U);
    msg.setDestinationEntity(224U);
    msg.req_id = 48570U;
    msg.comm_mean = 47U;
    msg.destination.assign("UNTJYNJFLFKYEIRAICJGVWKGDWFAGDEBEMFLNCODOXNMRI");
    msg.deadline = 0.5513269263235102;
    msg.range = 0.48339015776147254;
    msg.data_mode = 162U;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.15756943991356853;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CJBRNAXZNUPQFJOMZYTAUDCBSWHBYIYTBVKNDSUEIAPLMPILMXWHCLEUSHFFWUTZCXNVOJFREDQFOLYEEONLBTERQOXLHUBKZJRVVWFRRIITTIQJFKYQAWPKDKRPJAJASXJMNVMDZPGMSAYCEAXVIKDKEIXDCFZLPAKWKFCHBUQGUZGJWWBLYSMGUPYNFUYHWVKVTVZMWCYTSGPOALPSCOTGTNQJENOSRBSXXG");
    const signed char tmp_msg_1[] = {39, 36, -123, -24, 5, 41, 28, 74, 36, -66, 76, -55, 68, 72, -124, 52, -60, 84, -102, -42, -52, -65, 89, -87, 83, -45, -55, -85, -116, -66, 32, -2, 29, 58, 122, 45, 3, 34, -52, -3, 9, -91, -102, 27, 74, 5, 1, -33, 14, 80, 51, -112, 108, -66, -28, -109, 50, 63, 11, -43, 26, -95, -10, -14, -94, -19, -21, -101, 111, 104, 18, 114, -23, -117, 81, 85, -12, -52, 81, 71, -96, -96, -109, 85, -5, 73, -119, 98, 113, 103, -116, -98, 116, -98, 116, -122, -106, 81, 114, 73, 9, -22, 65, -4, -35, -16, -30, -83, 22, -117, 44, 77, 95, -40, 126, 61, -27, 79, 119, -85, -127, 77, -117, 118, 84};
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
    msg.setTimeStamp(0.7469656666027858);
    msg.setSource(27782U);
    msg.setSourceEntity(120U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(219U);
    msg.req_id = 64530U;
    msg.status = 106U;
    msg.range = 0.13816230066540547;
    msg.info.assign("JRYHEAULRXCKMEAUJPOQTNQKZKXYKFNMONBQAMRUHBONZKHWNSZJNISVCEQHTZXYSUGEYDXXFPMGXFDCIJVYQCJGTLJKYBPVIEOWCSZIMEGZSIWTAKQCUDNGXJJMQBVWLACCPIFUSLRMQLPFDWKXFHCATTLGIHNEDIRGRIPPAMGBLXVVBPJVPOASXRQMBTFZWUDBYWHMZSVLRIZVUYKFOHCTWUDKDEAUZNOQSVYBWYTLSFDPOBTL");

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
    msg.setTimeStamp(0.46479676419450855);
    msg.setSource(36652U);
    msg.setSourceEntity(59U);
    msg.setDestination(61067U);
    msg.setDestinationEntity(29U);
    msg.req_id = 40752U;
    msg.status = 146U;
    msg.range = 0.771769908486765;
    msg.info.assign("TQLLDKHCQYFQSFYEUDIPRJUTKINKGGKJOCEBQYIWHGMLPCASWZHDBWPWECBXCMLJSUJOKRECRCEYWFSOOLUBGUABRJUNAKJZDTJJPUBDTQGUWOPTNCMXXAMRVVHVDIFLDGIVVTHSFZBLPVTYXLFYASZSUQSZIAELHZHIZMERZFXYMTAMQRNIOMDJNJGBNVNNRONVEIQZTYRNXAOCXWBCXRGAGHOWPFLHUDBYFVKQPXDKXAV");

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
    msg.setTimeStamp(0.28265352155678625);
    msg.setSource(35980U);
    msg.setSourceEntity(104U);
    msg.setDestination(3561U);
    msg.setDestinationEntity(43U);
    msg.req_id = 2311U;
    msg.status = 78U;
    msg.range = 0.368925763389753;
    msg.info.assign("NZCZWTATTSEWPFMVZIZNUUIFJPKIQYGUBTIJWWKDUEKTPMJEGCMTWYJITW");

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
    msg.setTimeStamp(0.5515722178993305);
    msg.setSource(13562U);
    msg.setSourceEntity(232U);
    msg.setDestination(18521U);
    msg.setDestinationEntity(215U);
    msg.req_id = 19969U;
    msg.destination.assign("GWCIWFADAIIUTSTQXNSQUVHLSCVYUQNRMGDEOJPAXRFGTWHPNAZZKFQNABWKZUUFUEJZTEROIOSBVINJBYEZHGLIKXWOMOLSCEVRHRSAZIXCTRJGJHBDHBRWBQKZSXELTMCNEBGYNPYBMVWAPQRDHPXVMKTPZFXMXYCDMTGWPIUJHUKMHQCKDJMULZCVFKKQJDBTLIODWPADXLE");
    msg.timeout = 0.7564696192907;
    msg.sms_text.assign("CWFBQTRGAXMAJZUEODHKHMOUCEVYNNSQIUHJWIOGEHMTNCWADYOZKISXVLADZTDMIGYWPPLUOGLUTSLCVWVJSYOMCRBLICZRVGQYPQGAHBHSXEBNKVRGUSWJFAOAIMMTYNZPYNZOLVYFZFKEBFHWZNFUZRBBGLCUQVXDMPJVGRPSCXHHEDMAEXTQSFFT");

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
    msg.setTimeStamp(0.22799563767971254);
    msg.setSource(42667U);
    msg.setSourceEntity(9U);
    msg.setDestination(50108U);
    msg.setDestinationEntity(147U);
    msg.req_id = 40217U;
    msg.destination.assign("LHIQIJSZBQQQWZFYZMYKLCLSWSMJCFKDQTQKROJAGYFLVOZNTKIYAHEUKRGJVXOC");
    msg.timeout = 0.9862693228851097;
    msg.sms_text.assign("WUQPPGRNUWPUSWSOFKPEVZX");

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
    msg.setTimeStamp(0.5634689374177785);
    msg.setSource(13392U);
    msg.setSourceEntity(46U);
    msg.setDestination(10287U);
    msg.setDestinationEntity(162U);
    msg.req_id = 43189U;
    msg.destination.assign("IBTLALZEHFQDAKERBHWPHGURSDGYEJLOJDNTXNUWERTJRNJNODNAATXORUFSEUEMNWUGPQYITBJFSZYJSHIEMGGUZLZLYCHALAZPGCLWOKZWPQMMXJKTIBKCDALRLNPVIXICHSYJXQCRHKVVHTYGFYWOBQCOGVOBGUDMWVRQLQBEQCACKNVBVNUHZIQYVQPKKSYMTNFRBPMOPZUXSUAXKAIMVEOFHKJCXZIMFDIVXTSFWSDZMYPSBDR");
    msg.timeout = 0.01795124797668246;
    msg.sms_text.assign("IMBUXZVFXHGCFZJTYURPATXPOTMYEUCGCRGSENZGNYWNRYIRYXOCSBZFHQLRDDTPISCMPXUELVCSCSDGLDPRIOSAQOKHTUZNDDXJUHNETSEMNSOGAVZCDJKOSRAJOJYKYWZKJUAKFQJWDZQMAYNFWBWACCUAHLJI");

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
    msg.setTimeStamp(0.14579711371224313);
    msg.setSource(60660U);
    msg.setSourceEntity(161U);
    msg.setDestination(22699U);
    msg.setDestinationEntity(254U);
    msg.req_id = 65475U;
    msg.status = 30U;
    msg.info.assign("MNZPQIRNXQINHRQFVWAUFYJWKOPKZZJIPPKWMJITGOFMHQWTXSNEXBWDHCZEDQEAIBRQVDMCRNJBTOYFJDQGMTOARTDTFJCAARQYPIAPCQHZVDVDUPXIURVJLWREGKGFESQSVJEHHMIUUNXEHCYXZLXWYOPHBAKVFUGGZJLJUBGUERRAEZXYOXBDV");

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
    msg.setTimeStamp(0.99746459215042);
    msg.setSource(51124U);
    msg.setSourceEntity(139U);
    msg.setDestination(40326U);
    msg.setDestinationEntity(15U);
    msg.req_id = 42696U;
    msg.status = 77U;
    msg.info.assign("HMJPOKRGZRUQJBINIYRFCSBAMDVTHVHEISWGEZHJQOZFJLEMSOCSNKRUABFGWOBRWOHOECPVZYUBJSLCKLGZAKWKCDASSMLYFTNVCABDTFAIGAWZXJXLZRGZBMRCMTQGQQIDCQDAXVBCXTTUSPBLODNGMYDYNTDAHPECEYVAKXKRJNLFWWSPFUHMZOQHXRT");

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
    msg.setTimeStamp(0.04280254549132256);
    msg.setSource(14274U);
    msg.setSourceEntity(108U);
    msg.setDestination(21838U);
    msg.setDestinationEntity(124U);
    msg.req_id = 36444U;
    msg.status = 126U;
    msg.info.assign("QWPXSOPSJCUMIOPYKHIAWDCTQRXVIXZIALBPTLTJGVSENLZWHDHSELBWVYWUPPCMEAX");

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
    msg.setTimeStamp(0.8078802562800278);
    msg.setSource(60378U);
    msg.setSourceEntity(35U);
    msg.setDestination(62301U);
    msg.setDestinationEntity(216U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.6738652372406775);
    msg.setSource(56760U);
    msg.setSourceEntity(130U);
    msg.setDestination(16310U);
    msg.setDestinationEntity(68U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.6290774435104877);
    msg.setSource(56078U);
    msg.setSourceEntity(144U);
    msg.setDestination(63074U);
    msg.setDestinationEntity(14U);
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
    msg.setTimeStamp(0.8070665801276077);
    msg.setSource(62101U);
    msg.setSourceEntity(235U);
    msg.setDestination(2845U);
    msg.setDestinationEntity(194U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.9740477520585593);
    msg.setSource(28058U);
    msg.setSourceEntity(213U);
    msg.setDestination(46161U);
    msg.setDestinationEntity(172U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.6562231852167526);
    msg.setSource(12124U);
    msg.setSourceEntity(172U);
    msg.setDestination(39241U);
    msg.setDestinationEntity(42U);
    msg.state = 198U;

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
    msg.setTimeStamp(0.7145851214882605);
    msg.setSource(57849U);
    msg.setSourceEntity(244U);
    msg.setDestination(57655U);
    msg.setDestinationEntity(156U);
    msg.req_id = 53084U;
    msg.destination.assign("HJTOOPGZAGWZEFEZTDGVFMCQFIWWNPGKSUXAQMYTSOZMJHBLDDECNVEWAIHKJXEZYNZQWJHVCGLBMMRABRGVEIIYODDOSJDBOIJQLHZSTPEVGKWXKXTYLAWCFSRRMTOXHQUSYSAIWVVKYJFPSOERYFUARGMRUFJUBXDHQBLX");
    msg.timeout = 0.7264353987557305;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("PEFEHRBWLXARFBQICIXETYOLQVRWGVFZRQEAVHKGSWOZUCTKZCN");
    tmp_msg_0.message_id = 56569U;
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
    msg.setTimeStamp(0.08694764358779605);
    msg.setSource(55419U);
    msg.setSourceEntity(216U);
    msg.setDestination(6678U);
    msg.setDestinationEntity(196U);
    msg.req_id = 33952U;
    msg.destination.assign("DIMGHKSYBQTFLHVPECGQMJPPNHQAPYYIZOGYWBFDFRLQQFEQEHGBVJRKPDMUNGJDBLVBZGZEGCWXWEXLHRZOCIDSMEKXKBDDTVTEYOGILWCXXXRVZNOUUVYNTJBPNCSUQQWJHAAQZFMMSCINATHMXOIXUTTANSFNIVLILWJYRXTAOIVPLATMTQURWZPVALASARYYEJPRWSFHKSKJKZCCKFKXUZRHCBPNINMOEMSUOGSG");
    msg.timeout = 0.11326443427852917;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7017813765689662;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.3264062032230324;
    tmp_tmp_msg_0_0.amp = 0.5452386618309951;
    tmp_tmp_msg_0_0.cor = 133U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.07362757668352948);
    msg.setSource(45690U);
    msg.setSourceEntity(252U);
    msg.setDestination(49832U);
    msg.setDestinationEntity(22U);
    msg.req_id = 23907U;
    msg.destination.assign("CTIGNYRCDUUQGIVGEREOUXARWZJXXHYCNBOPEYGWAOPJRYJMFNUQNKLSQBPJTXGMYNSDXMOGECYWUKBMSLTLHPSUHIJCQFTXWHDAQLOVVFAKOZRFUHSZGGECYVDHIPWVLALVPAFPDICWTRUCALXNANSXITZWJPKBFFVZHTM");
    msg.timeout = 0.5042520367451973;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("XTCNQZSYEHSVPFJZEJNGRLKXXRMLDDEJJHESNKCHBDYFBDGVCKYITQOFDTWUBYIRTPCRUQOAYEQJSEEIWYAWGQBHPFUNDVLHTOCQWIAFSHWNBMZKNRGKMJGKICAIFPSVTBBGJEIGUKSADDWFNIZHZOWKLVGBEPCWGYXOSLOSRDCRJONAROVXAXKWVUQLCZLOLIXHMKZMTTZVSXPN");
    tmp_msg_0.type = 26U;
    tmp_msg_0.op = 191U;
    tmp_msg_0.group_name.assign("BDNGUNZFXWRQMFVEMGFNHQXPALCYKGBPCDCKYSOYZNSMFHHVS");
    tmp_msg_0.plan_id.assign("CJGZQAXAJSITGAEPRGNUWMSRLWAXPJSJLEMWBFHTKXRTHPYZDZIQQQJDJBFXWLEIVXADVUKURKCRMRDSZFI");
    tmp_msg_0.description.assign("GUTBEYPIBVMXKZUSTGFMKUWOEYNYUVJAKBOAZNLYQNEVEZGDIOFJILAHSZODDMGRQWHKVWROEMYJWFPGINTQQNJGPLSSTYECOICWVGHPRTYHQMABHDRUEHUARTRCNIUMHNKKCVXRAUXZFOKISNL");
    tmp_msg_0.reference_frame = 245U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 51627U;
    tmp_tmp_msg_0_0.off_x = 0.3572280148050797;
    tmp_tmp_msg_0_0.off_y = 0.5274710528368786;
    tmp_tmp_msg_0_0.off_z = 0.8891844932602341;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.5762080991288856;
    tmp_msg_0.leader_speed_min = 0.08033896231186632;
    tmp_msg_0.leader_speed_max = 0.24134431141953638;
    tmp_msg_0.leader_alt_min = 0.32055106145326007;
    tmp_msg_0.leader_alt_max = 0.4237755486039616;
    tmp_msg_0.pos_sim_err_lim = 0.01385482568167129;
    tmp_msg_0.pos_sim_err_wrn = 0.9846695307131739;
    tmp_msg_0.pos_sim_err_timeout = 38108U;
    tmp_msg_0.converg_max = 0.7285590200864529;
    tmp_msg_0.converg_timeout = 21846U;
    tmp_msg_0.comms_timeout = 12395U;
    tmp_msg_0.turb_lim = 0.05550266631069822;
    tmp_msg_0.custom.assign("UMLMOEHRCWABALGXPAOTQQHDTHIGSINMNZATOIMIOUVOWGBSXASQKJNDHMZWKLDPWYMEJMPXYQZYMUWNSVRXRZFRKIUFXKVQCG");
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
    msg.setTimeStamp(0.43908206797590443);
    msg.setSource(31113U);
    msg.setSourceEntity(149U);
    msg.setDestination(50003U);
    msg.setDestinationEntity(139U);
    msg.req_id = 51102U;
    msg.status = 120U;
    msg.info.assign("UTVGCJIXQPJPKEMMHDLIJFHWQLERNFEETNGLMTKAPAPXIIOAPOXPZTLGVKNCZXYLYHBURVIHKOBBLRWIZBXGWWSYRDIRNSBDBLDNKWCMUDFFSXROIEYNOVYZQDHVWKSKRANZOJLVXMMXYHGZHQDHSBCPTJQEPCYUFWVCGSVTUGALSOWAMYFBUMCUKQQDHNTPGFCOBGUJYIAJEHCEQEAUTZFXANFSWIDTVCZUYPQGBXONQWDMTZLVFSKOKE");

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
    msg.setTimeStamp(0.5843059264176323);
    msg.setSource(40411U);
    msg.setSourceEntity(174U);
    msg.setDestination(36001U);
    msg.setDestinationEntity(82U);
    msg.req_id = 32591U;
    msg.status = 135U;
    msg.info.assign("DNQAUGPXDDLFOBRIVKCNZAECLSTFLAJHEAKWNPQKUSIYSCSAYRRYJFKXSEVDFWUQRETILLUWQENMKLJCNSHTAOCIPZLVMZIZUHVHNCDXDUJSXQDWL");

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
    msg.setTimeStamp(0.31446117584268896);
    msg.setSource(30444U);
    msg.setSourceEntity(40U);
    msg.setDestination(47707U);
    msg.setDestinationEntity(58U);
    msg.req_id = 1184U;
    msg.status = 71U;
    msg.info.assign("SRMCEBMKHRANWVBTNHVDHCCYGTKTUXBEKYUGPLQOSLDZLSYUOAFHDNNQKVAVLYCXFQSDRKCJSZGQGWEFDPSFVHBEPINDPWUSPEINOTDEZJHVMOIERRLMIHTAWPTNVVKEGFWZGFLKMKWAWZDYSUHOOYCZXPJLPG");

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
    msg.setTimeStamp(0.03624944661086382);
    msg.setSource(9377U);
    msg.setSourceEntity(94U);
    msg.setDestination(45448U);
    msg.setDestinationEntity(227U);
    msg.name.assign("ALLFHRCMOKASRMZSZIDOBDXEUPDJNEXNIGDHZKDXGSYSJJRBCPBTSMNIYUUNPEVLPTKUKPFAFMWSLHGQCVADVBVLTUATEYUIIXIWJIGOTPRQFATQB");
    msg.report_time = 0.08154487696974833;
    msg.medium = 15U;
    msg.lat = 0.1581380710661795;
    msg.lon = 0.42131257410857603;
    msg.depth = 0.7225055537370015;
    msg.alt = 0.3532339338492021;
    msg.sog = 0.4722140458039158;
    msg.cog = 0.2061954166425528;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.08197023843847928;
    tmp_msg_0.lon = 0.6379572195490336;
    tmp_msg_0.depth = 100U;
    tmp_msg_0.speed = 0.11910626501399513;
    tmp_msg_0.psi = 0.4395098516177638;
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
    msg.setTimeStamp(0.8179528665765334);
    msg.setSource(9998U);
    msg.setSourceEntity(175U);
    msg.setDestination(28829U);
    msg.setDestinationEntity(212U);
    msg.name.assign("HRWZRZSPQDJPFHLRGCGDKLONHRLVBSTFTESMYVCMPOWRQEPNJRLOYJVASXJFKBGPGAOJLZTXIZZOQKVCVNHSEFWUJBLXETAMKYJZGIIFSDFB");
    msg.report_time = 0.06537822491810619;
    msg.medium = 188U;
    msg.lat = 0.21036991036262853;
    msg.lon = 0.035201111885114766;
    msg.depth = 0.8771817003159554;
    msg.alt = 0.9837041979129426;
    msg.sog = 0.2970892836474216;
    msg.cog = 0.8869103512314425;

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
    msg.setTimeStamp(0.9575848551012905);
    msg.setSource(64327U);
    msg.setSourceEntity(47U);
    msg.setDestination(12509U);
    msg.setDestinationEntity(33U);
    msg.name.assign("GYPKQJHSJYHBBQFMSKKNDCZQUJQVBPUWRNDOWLGIAITLGMTPVINDOSHKTCXJJKQLXIDRABOSSHOFDJMZNEYLOTPHSCLSOMIRWHQHYCJUBHVRNLNXXFZUXOTWVEIKDWVAWUBOCDPLYUWEAYCEIRFMCSAAZ");
    msg.report_time = 0.209553206454415;
    msg.medium = 213U;
    msg.lat = 0.333823291538627;
    msg.lon = 0.8161092111855239;
    msg.depth = 0.3164910608764471;
    msg.alt = 0.19788606844441947;
    msg.sog = 0.3965189807363506;
    msg.cog = 0.29408003704788144;

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
    msg.setTimeStamp(0.4563494915589952);
    msg.setSource(19150U);
    msg.setSourceEntity(114U);
    msg.setDestination(37317U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.3190248133118754);
    msg.setSource(47426U);
    msg.setSourceEntity(71U);
    msg.setDestination(42897U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.6362049826511971);
    msg.setSource(20602U);
    msg.setSourceEntity(138U);
    msg.setDestination(38544U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.9452403939822073);
    msg.setSource(14473U);
    msg.setSourceEntity(48U);
    msg.setDestination(52923U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("NKPSKQWQOGYAFREIJHGFNCOHQDGMOUYGYPNDCIOOTDSXYXNGITVDCXYWXCVXWULVFHUEKORQLRLHLRYPUBCBKGRXEKBRFABKFMUGU");
    msg.description.assign("WCWVHYBKWSFZORRKOZNQDLQUKBAPTZ");
    msg.vnamespace.assign("OPAGYAHZBVUFRWQYOEPOBILNDCWVMRWHVUUXDDCJZTDSFBADCBGYLPHOWDLSXXHXKHHFUFHNFGLTYQSYVKXTLBPLNRCSVSQJTZEQKPSVCWJJVCIBBXRSNMUCFWQMQWKUDJZIGDUMNGQMTHOMUAYFTAKFSCMIZIQUIGOFWNZXCXRMSNBBFKENEAOCZAHETPODR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WNCRMLWKROSDWPKHNTPRZUKBXDXFJLLKSVZGCWMXUTBQZYKWBBOROTRPYBVSCJJOZWIDPAHVZVYUMSBTNYFDRXEQPNURKNDOZGLNGMHIFAYBECDDIYPAJVLXZFIDEUMKTEBJZTOOMAXIYSXYEHEJGBAFVQRLHSVFMGGGUBCCRGHJJHCDKOXNNPANONJQALAFCYPPUVTZCSHLIFAEGSERQLWDXOFVTF");
    tmp_msg_0.value.assign("FULKGDSUSGGSWLSUKVRCIXWTVKZWLZACLDIMJBGWUTAUFTOBEPLVWDDHFYRNAHHMJP");
    tmp_msg_0.type = 193U;
    tmp_msg_0.access = 107U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GSUYKSJLGHMFKWMZUKDCNCOHAGTADIJMBGASVYISJFUNQWNMODMBRQDLCHI");
    IMC::FineOil tmp_msg_1;
    tmp_msg_1.value = 0.9904782235750348;
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
    msg.setTimeStamp(0.3512111097438443);
    msg.setSource(57470U);
    msg.setSourceEntity(28U);
    msg.setDestination(62952U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("CYADQRPECAYVONGJDSCBEBYKDCHABIWKMJWZHEVVSLOMYSHXQJGVENPILJSDXFGGZUGLXZWRQPMYNXKCHSCUKTKZJZWIQJWESAFYCLGOAQTDXLWDLPHADRRFJBZHKFCNSRVFUBQNEPXTQTPQXMCIDSMUGABBVQOYKRRZBZFENKLRFHVNUYEMOWBNAKEANITLDFLSTIRB");
    msg.description.assign("EDLGBDDVZRUDGBKOFVGPJERIOUCWCXDKDLIRIFEPYBQQETEVGHDYIDFFFJABTTYITSOQZZAMJJARYECPJEBCYTQCFNBAPGSKXJTDIJNDJAGHZMESQNUZRGAWBANHLWKLXHXTAMMQPLQSXMAXVPCWEIGNLZFYYLKNCIUIMKFSQOXQLSVHPUHLSYFUKYMBZGPKWQXPJYVEOTHXUUINCOZBZVUMMHVVRRLGFBWRWONHWASSVOTMZWKONWNUKT");
    msg.vnamespace.assign("PFVXRMKCGROJRVBCRWRWUEXJCWYGNBMUVZDPQGIENDHRRIRXQSTUWDMCQSHYPTLCDYYEWQXUZOFCGXOQLHJJIPVIDSFAADNFEFDWIVFSZBTXCLMINMZUNSLEFOVLASLDQEJOAPSVKLBAYMHJZZTTMAKRDOPMZTQVGESAKWBHOIAUONWVPRIMQQLBZZFXKDCSYHIVXJOABKGUYGPFQCKITENXBYLUEJHFAGZXCUK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AGIMWGDSOSLVFKBXGRWWLAZITRTWXNYXOPSJPPNHYPKCOWFTNISYPKHNAVFGMRNFSBFQSRCYKBPDJHTUJBJYUCRTGJBQJCGZFNEJZUZSTZGUEKVQFQMIOXZLLHTRCIFKDMDAVQDJERZLBICEWWVMTPKMJPDIRKYZUBAQJTRLBXMBKWVEQXVIAIOZULYDPHGEYHXGXETNCA");
    tmp_msg_0.value.assign("WUSAABUUYPOXTEDKMYBLTZOHMPMFZGALIKVOL");
    tmp_msg_0.type = 183U;
    tmp_msg_0.access = 18U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RRJXVIOTRPIOMLSWLGOPROQFBACNMHEMWQGXRYQNFOCBMBIGUWQZYVQNGXOZNBRTAKCSHGSAFEDJYMDDCTJOLFLOG");
    IMC::CoverArea tmp_msg_1;
    tmp_msg_1.lat = 0.42519067428948853;
    tmp_msg_1.lon = 0.735665368053335;
    tmp_msg_1.z = 0.567094775576354;
    tmp_msg_1.z_units = 222U;
    tmp_msg_1.speed = 0.729530495891617;
    tmp_msg_1.speed_units = 109U;
    tmp_msg_1.custom.assign("SKEEWCLMQVIETVTNICJMSMUXBCRKDMVIRZISHJMODDQESSYCYHNEVHLRCOMGDFOTFANWBDPNEUFQNWKLBVWTGASJWAZFKKOZQQUZGYVEGLXRPBJFXELARQKNSMAOLZJPFNMILVJNTTTXJHRNBAAUHAELYCPZWYUBJDVXDPIGTUGAIHRZMHRCLXQMWPUZFVRIWCFKOZHHWSOSRYKCBPBXBZLGPANYGOOFUJHYWIQQTPBYKSOGCVXUIKGY");
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
    msg.setTimeStamp(0.3756623972185188);
    msg.setSource(19191U);
    msg.setSourceEntity(34U);
    msg.setDestination(12674U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("QGYSHFDQRENGIHMTYEYCZQLLHFCOAIHTFVBUAHPRDFCUQYVXHJRNIDOMUBLQBYTOVSOWNSAPPNESOUYGIDVJFDNSPMJRRBYEGGAITDBGIUIAOPI");
    msg.description.assign("VFMATINKNFMKPXAUEMRAXKZFXIRGZGNDWNXJOACWDURBTC");
    msg.vnamespace.assign("UMSOWPABKMNYIXUGENWYPCRTRAGZPIDFLHZBMGSTGXQNEWOAXWOLVNOXNRDHJFMMDWYBSJQATCPKLGTWZGJUOSRGZNALQJPZDDJUMHLFEPEPLQEQDOISYUZQVRCW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PPBLFBHAEBFCGQLVZUFCOQNWAHQETSRWDAIIDSQOOFHDJPLVAPEXLMZYOZCCIMHKAXJDUBUNKWXWNUWNOJXRQPZTMJTMIGAVSAEYOGXMZLWNAIFSPVDSUGBLHHCQVTJECXEXFHNRLYGLJWYOEHZYURIDZPRPKVINKOIUYUXZVNEQKOBAWCCXGZ");
    tmp_msg_0.value.assign("OAKHWEPQTGVYFRPDVLNLAMFBCHGCPFKXVKGXKHBYZLGIDXEMPKKNIVFLVRQSFRERCSUWEKBDIWJISPKGXHBBATUYCJOZHSGWCQUPDZWSVTPPQDNQQICDTFJFENMVQBXOAKRUBMZ");
    tmp_msg_0.type = 31U;
    tmp_msg_0.access = 34U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DEJXMZBYQRFONDJVHJCKWXUYXQKOGDHJXICGXWWVOXSTZOSTRDDIALCK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ETCIKAIIDJCGKPNPDGIUCXRCWTYSHMFWNWTCOMQNKWKAMDLNFXMSCSOSETWQITYREFFFAZJSUHRRHCMUYQWAZTZNNNMUEWEFEOIVVAJESNRQDXLEAIKTGVOKYUDFVBEZBOECPUUHGOJJMVRMKBLXLSABBXDHLXMVLBBTDZNFX");
    IMC::Magnetometer tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 17745U;
    tmp_tmp_msg_1_0.lat = 0.3440759295931214;
    tmp_tmp_msg_1_0.lon = 0.3090506198612545;
    tmp_tmp_msg_1_0.z = 0.9333870541119083;
    tmp_tmp_msg_1_0.z_units = 61U;
    tmp_tmp_msg_1_0.speed = 0.23676725403347532;
    tmp_tmp_msg_1_0.speed_units = 48U;
    tmp_tmp_msg_1_0.bearing = 0.814107940355543;
    tmp_tmp_msg_1_0.width = 0.2368236310488142;
    tmp_tmp_msg_1_0.direction = 7U;
    tmp_tmp_msg_1_0.custom.assign("WPHFAOFZVMAZ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Tachograph tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timestamp_last_service = 0.29546308873010285;
    tmp_tmp_msg_1_1.time_next_service = 0.3539551375358163;
    tmp_tmp_msg_1_1.time_motor_next_service = 0.6457595777252347;
    tmp_tmp_msg_1_1.time_idle_ground = 0.46501814359571747;
    tmp_tmp_msg_1_1.time_idle_air = 0.9825866541172364;
    tmp_tmp_msg_1_1.time_idle_water = 0.5541271358817075;
    tmp_tmp_msg_1_1.time_idle_underwater = 0.8388689641572631;
    tmp_tmp_msg_1_1.time_idle_unknown = 0.26195330326363997;
    tmp_tmp_msg_1_1.time_motor_ground = 0.46113435948001325;
    tmp_tmp_msg_1_1.time_motor_air = 0.04594797844102372;
    tmp_tmp_msg_1_1.time_motor_water = 0.2405734412298307;
    tmp_tmp_msg_1_1.time_motor_underwater = 0.8238819288065232;
    tmp_tmp_msg_1_1.time_motor_unknown = 0.27562418067228833;
    tmp_tmp_msg_1_1.rpm_min = -22119;
    tmp_tmp_msg_1_1.rpm_max = 22999;
    tmp_tmp_msg_1_1.depth_max = 0.7164419099683618;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::SmsState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.seq = 4293836445U;
    tmp_tmp_msg_1_2.state = 168U;
    tmp_tmp_msg_1_2.error.assign("QLHFFCEDWOFOCYUOPNEQPKWHILXJFEOLPFXQSZDCOSXTKNZEICMLHXZWCMJVCGIAURPPXVFJEXWQTPBSBASDANXCTZWBSPBUNITUBQIAJZEJSQANVPYCZSOSDLRAESFAWVJVYMXNORMMIKNGQYMBRGFZTPKIHUDLGDJKKAXSIALNIHUVHYNMDVY");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5571418386973869);
    msg.setSource(56717U);
    msg.setSourceEntity(252U);
    msg.setDestination(40045U);
    msg.setDestinationEntity(205U);
    msg.maneuver_id.assign("WHZIKDUGQRWKTJLVONKWUULMJDTQELGFMHTCFQQVPDZIGQBOBAGXGANYSQOSRBCDWKKTEAYUJLELIEHPHZZAOEWTCQRWHFEHVVVGXRGMRCJHKBPRSDNUJFSXFFHZWCPAQXWAHYLNYFSFSUMPIPGUUXGNEKMLNTIYDXWDYAMBXJR");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 46441U;
    tmp_msg_0.name.assign("MVHVWIKXBFZOJTBJQYOSTTCIYOAAAWIWSZHOUKNRFRCIWVJDLGQUSPJUAFQVGCDGKUKOQMDRPRCKQJSTNZITKFMCJXZJYUYEACMXPFRACEJHLHANEZLIQXMNUGVKQLLEVDYNMGSUZPYRWRHXBODPZFAREWSVCBQGWQSOWFDVZMBXHNNYZSWPRMIPKT");
    tmp_msg_0.custom.assign("GHFPMVZQUHAMFXAEGPECOKENJSCHECQGNJMBNBOVOVDVROYFDKVODJESCDLZFJAYIYSIQKXDURTNAWJBTRNZKWZMYLWBILWRCMLLISCORAZXKCHVFYDJN");
    msg.data.set(tmp_msg_0);
    IMC::SessionSubscription tmp_msg_1;
    tmp_msg_1.sessid = 980021001U;
    tmp_msg_1.messages.assign("RAJYYGZRBFEWTXGCCKGXOXCRPEVYHOJRRFOLZVWJFYNVXQYFOHQENJSHHGKBOMAXTNRYQVFLVBYWWUMTIODZXKUEZXBTPUVSHRSRFUKIQKUSKMZVHK");
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
    msg.setTimeStamp(0.18785867566266745);
    msg.setSource(27947U);
    msg.setSourceEntity(223U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(180U);
    msg.maneuver_id.assign("LKABEDPXCXFGBGPKCLZRMSSJVR");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.036637314146742095;
    tmp_msg_0.lon = 0.9002735871554256;
    tmp_msg_0.z = 0.9825200134154042;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.speed = 0.5178719114407907;
    tmp_msg_0.speed_units = 142U;
    tmp_msg_0.custom.assign("UJLWXCMESVSQABAKOKDTCLTMWCDKVJQBFBGAOPPHXBIRGLUPJJCNNSCTYUMAGERFFPSJTNLJVZDXYCHCDNEPHIMRHGPQZIZEWAEFHHWAGDBAYRZCDKVEXOMGFXXKXFNLAUORYWOKYQKEMEJFVKIPSJDMFOZVVLMPNQZSIZLYKPITGNB");
    msg.data.set(tmp_msg_0);
    IMC::DesiredVelocity tmp_msg_1;
    tmp_msg_1.u = 0.431333401785428;
    tmp_msg_1.v = 0.07879421114592966;
    tmp_msg_1.w = 0.541913086483936;
    tmp_msg_1.p = 0.5107674724557866;
    tmp_msg_1.q = 0.4060027680924506;
    tmp_msg_1.r = 0.7724279434046286;
    tmp_msg_1.flags = 248U;
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
    msg.setTimeStamp(0.9540983628794781);
    msg.setSource(6809U);
    msg.setSourceEntity(7U);
    msg.setDestination(41029U);
    msg.setDestinationEntity(243U);
    msg.maneuver_id.assign("SQRFNBSHOMKSUANTGPTYIYHLGSSGMTPCXVVCEAGPXGUDYZRWVUMJXRYPQOYRTLOJTXFNHPMFYKDIRZMXWEOQCHTRNAAPFFEYJMQLIIOVMHVOKSMCTCJVIBHGKVYKMJJBUKNSNIIJTXRPGKICAXVNSYLCBDVWDQBEEEGBOZLWXWDCCUWUNLPOLAIGUVHZHDPIZRZZQTDEH");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 26678U;
    tmp_msg_0.control_ent = 163U;
    tmp_msg_0.timeout = 0.30381910857347094;
    tmp_msg_0.loiter_radius = 0.5298175089077496;
    tmp_msg_0.altitude_interval = 0.649820958203274;
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
    msg.setTimeStamp(0.45453953059145347);
    msg.setSource(37385U);
    msg.setSourceEntity(102U);
    msg.setDestination(31566U);
    msg.setDestinationEntity(18U);
    msg.source_man.assign("XUKFEXBERNMIWAHURFGCHJSNHYVDNOOACFZPYLSQTJXFOEQFTZTNDHKDAQVEQGIXMRCFIWQFBKPAUEUXXMZRIUDMWDKNBXCWLPWRRHZTZPBHUCDQJGLSVYPZFOJGIQLJBZEHMGMOKWPUCKSYLLTVCTQJBNQZYNSSHSGYCIVKMT");
    msg.dest_man.assign("XPVGTBZENDDRYKPJIGERULRYXNZKDDLMRTRMAKWQFNBNEFPIHAWOVCQEFISZKXLTQOMKKRXEJBMHJBUAAYQTTZWYWJKIVLGUPLSBYFYODNOUAVEPRPOD");
    msg.conditions.assign("TQPKBGECFWIVBEJHNLIDGFSXTZDAQOMPRCVEROANGJXPHKSPNKNEAJPOXRSIINTHMQWUGIPROCZUVNRFPIPXUOFEAYUVBUEXBXFYAITXQQL");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 59892U;
    tmp_msg_0.lat = 0.730034691144586;
    tmp_msg_0.lon = 0.654041790974192;
    tmp_msg_0.z = 0.6663541112877845;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.speed = 0.10066068809603723;
    tmp_msg_0.speed_units = 74U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.33379441785539;
    tmp_tmp_msg_0_0.y = 0.1591787075605814;
    tmp_tmp_msg_0_0.z = 0.28226808726369323;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ODEAOWZWIRTQPOQLGIIPWMVLRXNGXJCGKTKRAMUOPOCVFQKXTIZDAUGTNQCZOPZSJQIQZRYWVTJUHCRAXUDNUDTBCNJNEPFHFMKGSKVLGBLENMQBPGTWWTMLZDRCSSJMFAFDBEDVSIDM");
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
    msg.setTimeStamp(0.9312400548403211);
    msg.setSource(18367U);
    msg.setSourceEntity(122U);
    msg.setDestination(56410U);
    msg.setDestinationEntity(245U);
    msg.source_man.assign("TXCTHQYFACOAKRODFGUUYBHKUEEVFRPPDLOVYFBQVIWMVMSPCAIHGINYMXZBOTNPJWSJAJCWBOOZNXSGOCCMRMUDDROXUMHETYMLMNUXHWUVHIDRWNWJLDGDSKJJJXZBLBFZJGFIKYKUGCUGNHKVFPPKAJFSJRPQARIIVSLYHTSFEENTMRKSLQACFZQOIWHOLQTASNYIQ");
    msg.dest_man.assign("WXHRCOKIOKRDNJIXPDTWVDMJCSUAGPDEBFFNKICHRKGFTRBWEKMGEOBUCMPSMMCMKVDQUNYYENVUEZKMEZIXCAOMTBSARDDDUWSGVILXHVPJFUZXBOKELPODULCNQNXHQITWXDAOSTNULJSPCMLZBLXGY");
    msg.conditions.assign("YOSVNKMZSDCKVWHMFXPRHYXDPVXHLUTFMNUUNIERDZYIFUNKZFKHIQRMMKVVPHGHZGNNCPKLUEXJIWBYELAWAWVCDPXOEJJDPQKLHXGSFHLSHRGCGBAIJEBYQGRODJNQCATRQBBVOTRKH");
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 21573U;
    tmp_msg_0.destination.assign("BNGPDDXUHKQADSSIGOZVYTLEPZEFPVVELRJDTCAQJHFESETBWXCWCAQYVXTYQSLKGHGKCMNZYUSCOOQUGSHFALUXSVMODWVXRJTJAHBKFWHMIULWMIBRCKITWQLGKXMBDQIHAIOXECWIPIZNZPJZCFFRNNXZDUUTZNMOOXLPBYGDNDFZOKKEJUYMNGYEYUNPLE");
    tmp_msg_0.timeout = 0.7646442107923638;
    IMC::Heartbeat tmp_tmp_msg_0_0;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6489622546704171);
    msg.setSource(51731U);
    msg.setSourceEntity(18U);
    msg.setDestination(2076U);
    msg.setDestinationEntity(231U);
    msg.source_man.assign("LQLOPCMONGTZEVWVQIUOKQEFWNNPXPXLZMRGINMEENVSMFACSOMVFRK");
    msg.dest_man.assign("CETBAHVSYFQBEMYXJIKOSMNLLMMBOSYDVADPPZRCQFFPCIBVAXRIYLWQCKELZKMUFYRGRIHFNFINIJWLJQDEDPYQTFNZWXRXUJGKBLRPOGJTRLTOKRYGWRUXKJUYGHADQNWUSLZZGWSACZTGMTQTXSNBMPMKEHECZOUNIVBKNLBXSWFXFNHGFEEYQZVDPYAWAXVZCHODOKIBDHVOMVILSZCJQHASCWVTRBJSJTUPGM");
    msg.conditions.assign("NYCFJADLCRGCEMGNQUVJSLKUOORHEXUTNZPKMDEESPQNIDLVMGHVMJOXPSLPQTCSTBDXFWSPVAGTCQIIKYZBVKNFHZBYAXSFHNSZKLGDJUZVXLPRQICRIITXKHAQXMYWWTESKZAQOAVRVGUWIWKCNBJMYJHOZUOWHFXJEYHYKBRSPAPPZOJTBUDNEMLUYJIVTMCGWRVBGFAERREAMLZQUGMOJBNHIWLERODKZS");
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 151U;
    tmp_msg_0.command = 238U;
    tmp_msg_0.settings.assign("UTDDMFTHHZDDQZJSYKBTQIUPBCDBVGETVBYWXJGIVEXSZCWOJJMMMKZLOAQXCNQZUKJEOXOPHMZQJYHYXPWBWKP");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 8935U;
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VEONIJDOPRZXNTQGZMQUKIWEWHEHZTDNAPHSLSLHPZJVICITTXGEPKTKHHRONIULWJPVOXFWEOQABYSCWBJOUBWFMYDZJUIMAPSGSIZYFU");
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
    msg.setTimeStamp(0.20845370303097788);
    msg.setSource(10391U);
    msg.setSourceEntity(135U);
    msg.setDestination(36086U);
    msg.setDestinationEntity(34U);
    msg.command = 149U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OHPKDUTWXWDAHXOYZHTAJDVGAOKROKQYYKUQSIHGKQTZXOLQVBNCGFRBNZZKWXFTYWXVVHTWALZXASXTRFBXOGJGJAMQFJSCYKWYPXNQIOBRCEOCRBBCMYZUGXLLUMKNRJH");
    tmp_msg_0.description.assign("JIUBPKJYTVCAIXZCJXBNVAHRBLMUSGSRKPHIRNPDIDHLGAZNHZHTQLTSBRXPOIHEJOZBYNFWMUGKQSWJEQCYUTVHNWLCLOOBPOVSEYRIWSAJMSOUDYQDAGMOBIKXMXAVFNRFGWMTNZJZHTVBLSFGXETCUUKRTYJIRDAMQLRGFIXCDTEGDZDFWBRLCPCGQHXMJQLIYPSMEUZWQYAOVFVKCKGPZAUNMQNBKEFQUSEPNEFCXLF");
    tmp_msg_0.vnamespace.assign("WGDVFTDSLDCWKNFTKNOQRCOMAYZNCWIYVPMEUQFXXJLGSQPISYHWEHMZSMAQYHXFIRRJUDNLHBQKSEOWJLXCULRNRXBAYTMBFVJIWSBPUAPOIQDKTZZTGHZFZILKFLCHVKCYDEIFGDNCNESAAEJWOPQARTEGUUOORE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VVLDQFHGUDZYWZJBWZQBSXWPEIGCREJHDLJQXQWRNLPZRUKDWLEOIXASHZDJYXAQCMVE");
    tmp_tmp_msg_0_0.value.assign("TQRLNJHIMZAAPJNCZLPVUOHMRKXDHEZGABWSQJCBMMYFGQQMXVRIIUMEOSDGFYOJPLFRMDNBXRCQCLEAFYTJWTSZHPKHKHVFBGVCDKUYWLDIXDSOUXOXJUREJFWCKKGSLBOFTUXIRPVTFGAEDNQSANAIHMELWNMAHSWKIKZLTZIQYOWABKGWLVQVTENPGZFJXERZSDPME");
    tmp_tmp_msg_0_0.type = 33U;
    tmp_tmp_msg_0_0.access = 182U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IZOVEGKFIHUEHQYJFBAMAORIADQJYAPHNCMTLZSQSBUHEZCGBDZLHRYOULPRQVNZQXWJGMMSZUMTEWQOOQXLLJANSWLASSJPFNLCGGGBHEZVSDZXMRNJGOSMBQFFCYBWHUVRUXACDYCUKKWYXNWGNUILIHIDCVPVLVTGUIBFCPVYATKCPTJPOEXRNDRQTKOKOHAPIDTEDEPXJS");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KWHBLGDXTRCFRHUYAIQVMDCWKWUARMZPIDIGSVGTFV");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ADBCRVXXJYWZQMFZESAEQBEEHOTSULYADUWOHHHKXFMZQUDPSEIETCTAP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::UASimulation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 138U;
    tmp_tmp_tmp_msg_0_1_1.speed = 34550U;
    const signed char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {72, 44, -7, -110, -117, -78, 109, -62, 104, 81, 45, -127, 1, 17, -59, 88, 60, -49, 12, -51, -72, 86, -10, -112, -31, -57, -17, -44, 55, 112, -122, 87, 6, -20, 9, -95, 28, -85, -46, 18};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::FormationControlParams tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.action = 49U;
    tmp_tmp_msg_0_2.lon_gain = 0.4545492846056578;
    tmp_tmp_msg_0_2.lat_gain = 0.298618831665868;
    tmp_tmp_msg_0_2.bond_thick = 0.1937793783471351;
    tmp_tmp_msg_0_2.lead_gain = 0.052832396486401256;
    tmp_tmp_msg_0_2.deconfl_gain = 0.37566527749848777;
    tmp_tmp_msg_0_2.accel_switch_gain = 0.6430220962656863;
    tmp_tmp_msg_0_2.safe_dist = 0.24374742597186327;
    tmp_tmp_msg_0_2.deconflict_offset = 0.7401044163123512;
    tmp_tmp_msg_0_2.accel_safe_margin = 0.6879499741412884;
    tmp_tmp_msg_0_2.accel_lim_x = 0.8758997937597686;
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
    msg.setTimeStamp(0.9753759513392634);
    msg.setSource(4826U);
    msg.setSourceEntity(221U);
    msg.setDestination(19230U);
    msg.setDestinationEntity(131U);
    msg.command = 154U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XAZSASLTQEFCMKUPUQHPCXRDMDCACGSVIYNWHGRBRJFCJDOCTZVLXGSEPIPFYTLWVLWCMLTCOQVUXKNSPNFIHSKZWQ");
    tmp_msg_0.description.assign("HEJBRRHJIHAJKWZGXXKOYEZKYQRPWQWAYLWPTCGWIYWNJDLSSREBQRAWOAXKOXPPARHQCYRFMUIZFFLVMKLSOZIZRPQSBANHNMCVLPBMGHTMJIDNXXBCBTM");
    tmp_msg_0.vnamespace.assign("QECFAMDYWXUPLKJFNICRQCYLSWAXTZVOBQANMEFGFKKNTKSZMPHPUEERHVOXHIXATMVNGGSILHYWDVOFGSMIMNCOWACBBBBRGJNVNJTTFQNSVFCDXLZJIIUIJQULBFYWWSPIPTJMEQGBIZRHPSQCADUVRSFMXAAHJDHIKJCXHYDPVLOWHLTUGTZGPVEKDYGZCRBRRLKKKROTYYOPHBGZNDEOZEVXJSSEDFOAQBDU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BSZCWXSVRDTQUDWFPMTTEKQJTAZEGKMZCCJPDYTRZDCCAOOBKRRCNTGDFGBCHAFLNAGMQMEAYUTENHXVOSIJE");
    tmp_tmp_msg_0_0.value.assign("UDBXOMSXITTQZXERBSCVDJLMORBJGHNQTNEOVEFGFQAGQEENCYLJBVCOMHWRMTWAOVYQUKUKUZQAZZSNAAQR");
    tmp_tmp_msg_0_0.type = 87U;
    tmp_tmp_msg_0_0.access = 45U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TPQICPZSDAWRRJWIGLBDJSYVSRGERBIFGZGWQKUZKJIVTTGARXGPQVQKOHWJKNUCIMFUBEHLJZLCBLHVMDYWTGNLIHNFQMLNUKDQXIKJXEXAERMVEYKPTCMVWATSBBOXUNSXXSYHNAQCVZLVFTNYOYDFPTSNEFIEPYDHPRQOMEMYBSNPP");
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
    msg.setTimeStamp(0.27828077793798167);
    msg.setSource(24175U);
    msg.setSourceEntity(112U);
    msg.setDestination(64817U);
    msg.setDestinationEntity(237U);
    msg.command = 144U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZWCFBHQUVNFNKIQLQNFUIKOPAWCCKZMWFMIWJTKRAJSRNUMCDDDQHVHYYTVOEEKWZXBFFEDBFAXKHNPNOHDOC");
    tmp_msg_0.description.assign("UCRFTKBSGHEPPFSNHOBBDMBYVJRMEPHNMIZIWKYDULYSLDCRETWYQUIIJQTBVNQAZVYEHFYQTIGENU");
    tmp_msg_0.vnamespace.assign("BOOOHEINZBFTRXBM");
    tmp_msg_0.start_man_id.assign("VLPUSRKYHDEDHDLMULWHFGIUKZIVTYHNERNA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WVNFRFVHDBRNDCMFWIXREDWVTQMYMPTMPENJAVILQZDHYJBQNZAZYHZEMNYWKUSQRETTAFBGMCWUGKOIXYASFWLODHCGJZOKEABTRGGGTLFZVTUZRCUFPPIQOYIPLIEECMOHTNGXXOXUOJQNACZHDLPIJFKFSBOPWDWUBXYSKJRXSDNKSSIPAHEJQGFJEUKPWMLKLRNYIMHXBQCHKVLSORVHLCVXASUADVUQQBGROEXCYVKTJBIZGLA");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9922293813741379;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9067544023438802;
    tmp_tmp_tmp_msg_0_0_0.z = 0.38473095202549357;
    tmp_tmp_tmp_msg_0_0_0.z_units = 223U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.6493040179744559;
    tmp_tmp_tmp_msg_0_0_0.duration = 6036U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.03006649222755986;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 126U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GJVBSVAFIDICEHJIBTOUAVNUFJXYTTQGHGMWAVIMKHBYHBIGPOJDXREUTOUKKRPOIAOEVPBTGSCSCBMKYUDHAJHACLDIZVENRQVUZGAXYSWUQLTNGRPXZOSKOBFMNHBACOPFYVPQERLXXSILXMTVOYKSSNTWLJXRTW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TransmissionStatus tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.req_id = 9464U;
    tmp_tmp_tmp_msg_0_0_1.status = 189U;
    tmp_tmp_tmp_msg_0_0_1.range = 0.2365089788805922;
    tmp_tmp_tmp_msg_0_0_1.info.assign("SKELQWIXOHRLZDTTNCPGWHPFKOFSDWPVXLTGNUXCGJFTVSKLKSPGQTRLMSBCWPCUKCJYEGAYNDRNDTQMQPUAYDFBQIZSHSNYVDBNMKAJMQOGNRAXKEGMZJPCFOZEYQVOUBNZEBMZHUPZQLTIDRISTOPLQVFIJRZJFXHOWICAVPKFTEVRWILXUMRURAKJWQYWMEYHJHAFFVLCJXYEAOUDJY");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VGMPNTXSTCNDXAKJOVDLKCTBWOYLGMLAPVZ");
    tmp_tmp_msg_0_1.dest_man.assign("YDWWAWTRHBUAFIWPFVMNBTLOOBAXKRXSZUMCLESZJTBLMUKVVMUJEOICJLEDVBWIQWGTGW");
    tmp_tmp_msg_0_1.conditions.assign("AVTKIIGGMAZDBPYEASMLPXQGWNUXDDULEFJLRUXHCBEJQDBEXXJFQDTZOWPSKHBJYZBOABPFJLNCTQYOLQKYOJTOMDIHQBEGTFHFMUGGOYNONALZPLNKGJTHFOYWHNEYCRWSPSDKYUCKELMVRIUESJTDZGVZVZGWCPRWWIMRHIEBNPLHRVSQUL");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.11399960254519748;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::CoverArea tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.8687879218460337;
    tmp_tmp_msg_0_3.lon = 0.8828133179473298;
    tmp_tmp_msg_0_3.z = 0.9672688199088988;
    tmp_tmp_msg_0_3.z_units = 179U;
    tmp_tmp_msg_0_3.speed = 0.8768616928380497;
    tmp_tmp_msg_0_3.speed_units = 133U;
    tmp_tmp_msg_0_3.custom.assign("NBZDVXONTINPFFDZHXNAWMBDAYQNRMCQIRODPMHTUZWRZJIWMVBANEMUQCGKQWNXAKNTMKTSYKUPHBCDGZCCMHFPGJGUEUQW");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.3323916868902619);
    msg.setSource(9921U);
    msg.setSourceEntity(196U);
    msg.setDestination(17922U);
    msg.setDestinationEntity(46U);
    msg.state = 231U;
    msg.plan_id.assign("OKGLWBGDYWOAWEJXSJEJWLSKQYUYZXAHCQNLVNLFUXAJTEYZQXOCHMVPBECQNYUDPEZEFTDCZWGXSSYGVTFBINZFWLZZXLYMKCRUXGHKECFIVMYSOIZCANGIHPJCVSFLIDBTMMVSZIASFI");
    msg.comm_level = 89U;

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
    msg.setTimeStamp(0.3826661273077342);
    msg.setSource(58542U);
    msg.setSourceEntity(78U);
    msg.setDestination(25843U);
    msg.setDestinationEntity(115U);
    msg.state = 158U;
    msg.plan_id.assign("AUEAFVBGIKUCEJYQIDKROFYXWENUVWYQRGFQMLMYPGFRPIPJDOQYBVSUHSKHKLZUMHQKBNYDSRARDFOVDIGZOEUAKJCH");
    msg.comm_level = 14U;

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
    msg.setTimeStamp(0.5586562027296215);
    msg.setSource(22179U);
    msg.setSourceEntity(113U);
    msg.setDestination(27484U);
    msg.setDestinationEntity(249U);
    msg.state = 152U;
    msg.plan_id.assign("WKPKJXSGZWTEUTIVSNJUGTGFJCXTZLZMMOLBFRQQBFKVNLDXYILDKWHMGPPVXEFZSUJBCBMAISIALAUQOWDMH");
    msg.comm_level = 13U;

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
    msg.setTimeStamp(0.7599537157332915);
    msg.setSource(48297U);
    msg.setSourceEntity(149U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(146U);
    msg.type = 179U;
    msg.op = 181U;
    msg.request_id = 4002U;
    msg.plan_id.assign("IXCOCZVHGXPKJBHJKEUNPKLDLXBRTXQGIJQIWPVFGXHVHLWYWLMIPSMFWEIPEXGBMKVJUQQMTDCWESFGTSXXMDULFSBEBBXKAAJKAOGLUEMFIVZEUAQQTESMJPYSOCRQAJMYFLIEDWVUWYGKUIQVZRFRLHNBCRXYMQZVGHFAKEPADPNSJGVDNHDZASTTRTFCFORNRZLZYBSUZOOHNCPRNYOV");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 91U;
    tmp_msg_0.value = 0.01864709751324234;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YYZYGOHEAJLDZWJUJPSOYUFNFDSCHMBJOMVXOWAUOVTDFLGILNMVUFTJHNKYEUOIJDDIXYVRMNBRWTXDVBUUHASRNQEKRLSHXHIIBZZJKEOQCZWAVAPQCJKIIEBNCUHBLXVSQCDRKLACYEWFWAMPIKYUXWBGGLIHPNVLYGXVZ");

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
    msg.setTimeStamp(0.5348348310132138);
    msg.setSource(54583U);
    msg.setSourceEntity(60U);
    msg.setDestination(32095U);
    msg.setDestinationEntity(207U);
    msg.type = 144U;
    msg.op = 157U;
    msg.request_id = 59709U;
    msg.plan_id.assign("SRKOYKQOZUYJAJZDEKMYDWUTVNGZCMJBITKTVOMACWVWGHPCAFYAZIMIVEZKZUJCOAYBCJIVSOXQOBGTBOVMEAXSSCALHDPCLIIDULAFSFERCVWQFFXLXDYE");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 37727U;
    tmp_msg_0.status = 186U;
    tmp_msg_0.text.assign("LFBAHHPNDDVZUJQYEUIFWUBLZGIELMPMMZXCGGDPJOGEHISY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ODWNPMKKLJZFSH");

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
    msg.setTimeStamp(0.4631930552321526);
    msg.setSource(19033U);
    msg.setSourceEntity(154U);
    msg.setDestination(38728U);
    msg.setDestinationEntity(18U);
    msg.type = 160U;
    msg.op = 101U;
    msg.request_id = 43044U;
    msg.plan_id.assign("VZVLWOGWOGBDVYVZRCWMSARANFASADXGYYHISUCSOCAPNGXUYVZJTLRDHQHLQ");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.reason = 231U;
    tmp_msg_0.value = 0.6290042232438704;
    tmp_msg_0.timestep = 0.4716070436340324;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EMTTURZCMOSRSUIWBFXBAJYMTURQFEGAAEKDXFCDCOZZQLAHYKNJLEIVYPYEFQSTKPOADALFDKEYUOPWMLZRWROSLHIRTXGXGJGHSVBEQXNISVGOFTDKRCSDDUJZSOWTJXNBPWFZTBNPMWB");

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
    msg.setTimeStamp(0.3736535598467322);
    msg.setSource(8469U);
    msg.setSourceEntity(253U);
    msg.setDestination(31149U);
    msg.setDestinationEntity(158U);
    msg.plan_count = 63591U;
    msg.plan_size = 1221815586U;
    msg.change_time = 0.569863798262285;
    msg.change_sid = 38717U;
    msg.change_sname.assign("MBJXYKORPHKENSSMXIVBLBEBAYUDHGYCGLQVEJQMFFPKYTHSTWYJDDZOSULHXZXHGHIAKFIIUWVNYGE");
    const signed char tmp_msg_0[] = {-34, -113, -70, -118, 118, 67, 62, -57, -127, -125, 50, 24, 102, 110, 9, 49, 86, -66, 119, -65, 88, -37, -46, 86, 108, 124, 107, 43, 53, -23, -94, -39, 69, -120, 50, 59, 30, -84, -55, -122, -121, -86, -20, 14, 59, 123, 53, -62, 83, -20, -95, -14, -59, -25, -88, -113, -4, -97, 25, 27, -33, 126, -100, -3, -101, -73, 121, 118, 54, -121, -76, 30, 42, -17, 88, 14, 12, -106, 69, -39, -92, 30, 72, 65, 116, 88, -23, 76, -29, 112, 13, -20, 122, -89, -99, -41, 115, 105, -95, -28, -22, 1, 93, 84, -10, -123, 1, 73, -99, -61, 33, -78, -1, -26, -71};
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
    msg.setTimeStamp(0.46836477374368335);
    msg.setSource(47285U);
    msg.setSourceEntity(154U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(105U);
    msg.plan_count = 33069U;
    msg.plan_size = 1334216662U;
    msg.change_time = 0.9568880125485923;
    msg.change_sid = 45984U;
    msg.change_sname.assign("JNXNPAEMAPFCCGBUEXQNXMCHDRVTBQSVZBKBIILAWKKWGSCPRKGLPGCTPQCHMHPATJULFIEGSRLDBWNEVIRWKRHNOHGFTISYEYFMYEQNAZHXLZVDSHUHNBJAQYMYEQUYOKBLOIUMNU");
    const signed char tmp_msg_0[] = {-111, 60, 55, -17, 12, -46, 95, 95, -11, -58, 113, 51, 105, -118, -59, -18, 84, -46, 85, -57, 80, -23, -11, -105, -124, 34, 12, 98, 75, 55, -85, 36, -29, 16, -110, -60, -25, 33, 82, -5, -6, 116, 110, 41, -79, -78, -13, -67, 76, 11, -126, 69, -97, 17, 50, 15, 56, 100, -74, 61, 46, 46, -109, 62, -70, 112, -120, -2, -50, 73, 79, -45, -58, -96, -90, 102, -108, -56, -108, 50, -102, 77, 71, -50, -84, -90, -126, 2, 123, -122, -101, 109, -67, 20, 61, 57, -17, -115, 97, -19, 0, 108, -109, -12, 99, -55, 87, -127, 10, -13, -36, -81, 93, 79, -3, -10, -72, 9, -64, -82, -103, 116, 83, 32, -109, 86, 112, -79, 100, 9, 60, -45, -120, -22, -12, -66, -25, -105, -36, 96, -52, -124, 45, -88, -83, 58, -34, -9, -6, -4, -9, 84, 14, 60, 61, 1, 71, 92, 56, 91, -43, -5, 108, 80, -10, 100, -107, 68, -118, -81, 55, -39, 52, 20, -26, 63, 46, 99, 84, -73, -5, -98, 51, 14, 70, -9, 60, 8, -22, -5, 29, 102, -54, -29, -101, 86, 57, -100, -104, 97, -79, 76, 61, 52, 5, 16, -120, -55, 26, 98, -80, 4, 36, 16, -18, 49, 66, -4, -24, -42, 96, -69, -12, 53, 113, -56, -94, -5, 83, 94, -3, 78, -33, -39, 112, 102, -128, -61, -70, 56};
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
    msg.setTimeStamp(0.08389275755375947);
    msg.setSource(16977U);
    msg.setSourceEntity(34U);
    msg.setDestination(2935U);
    msg.setDestinationEntity(15U);
    msg.plan_count = 17063U;
    msg.plan_size = 2673932524U;
    msg.change_time = 0.37423800776453087;
    msg.change_sid = 52903U;
    msg.change_sname.assign("WKONHITUIYABIAIPQTULFKZZCRFQGRRNWYZDVVAALNXVLSPPFVFQDDLHYJKUYOZKENXNSNUFXVRLMKJKALTBUSHMDMBMQLSVFOLEMYHSJJYUTKIWEXCCGNQGBBDWCZWPSRFZHWDXGOPJTDEKJZBBHRBVDKCIOLXAHCUNNDQXETJJGDMHAYVTBOAPUZBQPSVFHUGMCFQMWTYCICWZOAGGVWEKGOOSRLYCEEXIRNAEQMZX");
    const signed char tmp_msg_0[] = {104, 98, 64, 104, -62, 125, -73, -39, 89, 118, 41, -71, 55, 24, 112, -54, -56, 118, -40, -115, 97, 90, -39, 74, 50, 104, 86, 4, 7, -58, -41, -83, 21, -75, -15, -27, 56, 1, -28, 91, 59, -91, 120, -124, -107, 68, -38, 99, 76, -45, -78, 44, 86, 12, -85, 103, 24, 54, 72, 35, -40, -104, -57, 24, 13, -25, -8, 4, -115, -56, 124, -89, -110, 0, 91, 53, -2, 57, 84, -68, -67, -36, -72, -59, 46, 87, 52, 10, 10, -101, -88, 48, 27, 30, 53, -124, 64, -60, -48, 85, -88, -86, -116, 119, -115, 51, -100, 123, -29, 113, -13, -109, -35, 117, 111, 88, -45, -58, -54, -112, -103, 124, 59, -30, -50, 45, -9, 64, -17, -21, -109, 53, -124, 55, -44, -120, 0, -2, -14, -95, 123, 102, -121, 56, 97, 32, 105, -42, -7, 118, 112, -37, -111, 21, 88, -127, 100, 64, 73, -29, 1, 39, -18, 68, 24, -4, -10, -111, -28, -82, 86, -33, 120, 35, -118, 71, -102, 80, -108, 52, 45, 80, -58, 9, -123, 31, -93, -46, 27, 24, 40, 8, -108, 66, 82, -57, -32, -28, 4, 86, 120, -86, 61, -5, -90, 3, 26, -52, -39, 44, -3, -120, -49, 67, -111, 85};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OTMPUARCEGJBXFQUBNGRJVBWCCYBIRYQHYZQIKOAYTWKHSQHZQSKYCSFVWSIIFUDEDFEZXMZAEAGQKBZNRTVDPXJKDWLEVMAFRJUUGJTMZBHPDLMCUXJETD");
    tmp_msg_1.plan_size = 26303U;
    tmp_msg_1.change_time = 0.8545646747677902;
    tmp_msg_1.change_sid = 34257U;
    tmp_msg_1.change_sname.assign("TFPGONLRFGPQUSRFJKQCDYVVPGZZCIYYLRXEPECNTMGOEZWOZPEAEDNLQNNDKWMETLDSFGPLKVGZCUWQNUKXCOZYJMNGEFIUBHOFLKEGXTCNRXHPNDPFTWSJDYVTOIYEIJDOMRJBEAAJTOGPWSBJIKKSXTORYLSXWUQWUXMRHTWCSYQGPHCBLBXB");
    const signed char tmp_tmp_msg_1_0[] = {-12, -50, 119, -85, -30, 56, -13, 106, -87, -62, -49, 89, 83, 15, -119, 85, -92, 91, -34, -22, -114, -38, 10, 22, -40, 37, 93, -74, 43, -65, 58, -112, -60, 98, 1, -29, 6, -11, 99, -59, 23, -115, 12, -2, 120, -105, -91, 21, -98, 61, -118, 121, 42, -52, -110, 75, -17, -121, -127, 8, 4, 115, 109, -39, 14, 47, 22, 55, 111, -49, -120, -94, 21, 25, 68, -80, -34, 17, -14, -50, 20, -58, -35, 116, -101, -115, -71, -91, -95, 27, -38, 123, 119, 9, 79, -53, 82, -34, -45, 69, 40, -18, 26, 70, 98, -12, 101, -36, 100, 112, -26, 100, 4, 42, 88};
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
    msg.setTimeStamp(0.48758515118003787);
    msg.setSource(6366U);
    msg.setSourceEntity(76U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("JORLYGDBHDTLGAGKUYWDOHEWPECSEOYLESSEJOMFVURJIJFKAFQQDGQTCHUWRFNRNNJJZTVQCOWTUVVCUHMPZRKMNPMSBAGNXUDDVIJPXKARDBQZHCTBZHVXMLUNAFSYEEPMFYAZZWIMMOSIORQXKCRGZJRFZYNTILNDLBPWSPHJCBGEJZUQXQFBBWRSDGAPYYAHWCPVOKXTLXLUODPHBQHKGXQ");
    msg.plan_size = 48082U;
    msg.change_time = 0.8903484837801027;
    msg.change_sid = 33003U;
    msg.change_sname.assign("LLZDNVUQPVIPJHSQPMGISDEWKTRSDXVCYFNJCAGREIEGEILABOHAFBYCSUSVHIKLDYFKMHTJWEJFQMZXHPDMJJFVFHQUROXUMRIVLBQJZGGWKTWYKMOPRKBNQJAZIXUHRPYDTBCWAHIRWVCYWZMZNSDFLIPEYHZGMINKMWFOSUNXWUPXO");
    const signed char tmp_msg_0[] = {11, -1, -49, -109, -34, 24, 59, 121, 7, -74, 121, -47, 18, 22, -49, -82, 25, -105, -52, -105, -22, -9, -80, -123, -22, 43, -10, 33, -66, 29, 91, 80, -86, 120, -39, 20, -75, -31, -36, -58, 19, -106, -57, -112, -126, -127, -81, -88, -123, 94, 0, 123, 116, -5, 101, -109, 4, 70, -104, 98, -29, -31, -114, 9, 111, -70, -31, -120, 73, 62, -4, 54, -36, 107, 121, 114, -44, 99, -114, 12, -43, -122, -39, 24, -82, -7, 25, 52, -83, -52, -128, -47, 44, -74, 49, -62, -56, -7, -5, 36, 76, 47, 47, 1, -107, -121, 49};
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
    msg.setTimeStamp(0.8004544864603435);
    msg.setSource(33903U);
    msg.setSourceEntity(127U);
    msg.setDestination(60973U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("QABETLHNYSPTATPOEVWMBTYUKKEYVWGVGZADNMWXOHMZWXPNMMFRCTSZWHKQXMGPJJOTDJPXNLIJUVUTOLHXTQOSCIIHGUQEMPCCAYMLYAICMVRLZIXBWPGFUCRZCDHPCBSJBGFDSUYUEZLNHSBFLLBYIJATAFONZVBRATQKSNEOHZCSDPQEWYUDWFFEYHHKJZZRXIBALDSRAFIQWMRGDOGN");
    msg.plan_size = 33286U;
    msg.change_time = 0.8187505353357665;
    msg.change_sid = 18801U;
    msg.change_sname.assign("RCCOHKQPAZBWGKEAXWAANSYPRBUFKLOLHREEFXRDRSCPAWLTTYHSBYLVNVAGMJRHUXHQSCVZNUPOIWEVMKLDDUVPNUMQGSDNNZGZCKLKFSUAJLSRZVMINCIWQTKHUHDYJAGIXSJTKVQOYGZJUPFNWETMMBBMWZGJBTKOCXXLODVCADEXGHELEXROI");
    const signed char tmp_msg_0[] = {6, 64, -54, -33, 21, -19, -91, -31, 97, -95, -33, 57, -119, -73, 89, -36, 18, -111, -123, -30, 20, -35, -107, 126};
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
    msg.setTimeStamp(0.9908301298913762);
    msg.setSource(14952U);
    msg.setSourceEntity(199U);
    msg.setDestination(64813U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("PSQXMTYCKATSMATPSIWHEEECOFVCFZXQDZMWJVRVYWIFBJNVLNRSOHOIXNKRLQJQKZBOYVOJXQXICATYMROIVNAURYCBLHGMPECBXDBWHKLWZZSSJISRADTBSSYMLIRQGWPJEHPEDARFOEBYMHQFZEOXPMCDNOWGCNLBPAJKVGQUUHZYCTUXGLLHBKIGKJNTUFKVFFCMXQVHBHQEWNMZAUGNTKXPUDGUFWSZPIGZATTWNVDDUPJDEYJRLOU");
    msg.plan_size = 6924U;
    msg.change_time = 0.26516449934777075;
    msg.change_sid = 9813U;
    msg.change_sname.assign("JDZZGYPOYPPIAFPCBUNTQEKUHUNWGAPIHWVIRLLTAYPCZXTFLABIVQRQAJHVZEIOTQGSXCOMC");
    const signed char tmp_msg_0[] = {67, -112, -25, -126, 85, -10, 83, 104, 34, -82, -83, -85, 30, -122, 32, 18, -26, 68, 126, 46, -1, -128, 51, 33, 16, 92, -47, -11, -33, 79, 106, 70, -97, -27, -128, 115, 117, 122, 31, 39, -121, 34, -109, -20, 74, -32, -92, 124, 28, -108, 109, 113, -60, 84, -43, 3, -1, 104, -15, 0, -107, -128, -60, 113, 19, -32, 82, 28};
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
    msg.setTimeStamp(0.6747739234119521);
    msg.setSource(58678U);
    msg.setSourceEntity(214U);
    msg.setDestination(65054U);
    msg.setDestinationEntity(215U);
    msg.type = 152U;
    msg.op = 8U;
    msg.request_id = 56378U;
    msg.plan_id.assign("WXCVWGQRNBOWUGCZNAHQXEDPQSKKQSJJWIVPGURIZWMVMIZJH");
    msg.flags = 55427U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 38U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("SMZCRYAOACVMFJTRWVJFCYD");
    tmp_tmp_msg_0_0.description.assign("BRIBUBZAHMDZAZUSTJISFLSLWPUMXGFLOWBGNTHVWUSYPJYARKOCFYKCGUZGPYMRNUCVWNVDOGNQSVTKXSEAMHAAHOWXSWGOQBYITVHOFDFZPRIPZCMGMDBXTXZVLDTKNFLEJFCOBVVX");
    tmp_tmp_msg_0_0.vnamespace.assign("HPVBAQYJYVHZEPRAUGOGMWXKMNIDSKBBDVIHRTZQPYUOUZUSXXHCSZYIZHYTIYZHGKCXGMDTOQOLRBTAUPNGTDZCFJBJLFJKCQESNQVWMFOFHONIDWLBJCPSIFQM");
    tmp_tmp_msg_0_0.start_man_id.assign("PIHIEKXXQOZHISWGNGBRHYVXEORSJFPOBMEYKU");
    IMC::CurrentProfileCell tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.cell_position = 0.2133103074383853;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::Voltage tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.6151185305379181;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NZKTUHQJMPDMEZUXLWIGAZPYHMBDLPUEQJNRXVZQGVPXSLKGIEZBIEUTARKBSPTRCXDOCGMDGFIAZMFNBHVWQPGZUUYBXJDNWVEQTMJIWWOOXAYLHHSHZGRBJUGJZOOAJOYVWRQEFCVPYVBSCRQCCDIWTQKOSNKPDMLTXGRIYVFJDFPBENJTYMANHFYUMWBWRNALHSELFIFSA");

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
    msg.setTimeStamp(0.48005226533385326);
    msg.setSource(59399U);
    msg.setSourceEntity(1U);
    msg.setDestination(15U);
    msg.setDestinationEntity(232U);
    msg.type = 194U;
    msg.op = 125U;
    msg.request_id = 37903U;
    msg.plan_id.assign("XZDRBRPCCFXIBYJXBWMSDXGPVEPEPJMRVXPZKNAZPNSELOBSRRBFRXLVRBUCQOJKLSIGOKVCFVVILUTUIETJRQPGYCEUVEOKEQSONDUHHNQUMZWKIZVICLBTFKXKGDM");
    msg.flags = 20689U;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("FIVBDQMDNEPXLCEOVSQGBWXSLPOKXXPASHORNEKNNZJQBGCVZCJWEKLIUCADHPKVKDIYYSAGLNKSSNBLLLPYYMBBKUMXQUECFECMXISWVFPAGZXSIIJTWDOFYUVKUZUOSHVJLFKBRNSHAMMHRPEQTUXWUZMRGWZZHGMOTCRNEDFIYFQGPIRYHGLAWEVDHJTHXYTHQGFFOPAM");
    tmp_msg_0.op = 70U;
    tmp_msg_0.sched_time = 0.41303474470503687;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RYTEUGHYKSONEJJNIQQRKRIPFOHJVDVCFDVLLAUPQSDRQHVHQYSMEBAZEOSOVHMEPGCCFKKTIGHLXQPQWBRAMTISYWJJJMVHUAZPZLKDCTXCTMXEIEWBFSZCMGUGXLBKNZLLJWLFILMJOUSXQDRVFSYDASTOAHZXRWUXNUYRGFRIJNQKWPTVCDIUGGFGYGHUTNSNMKBP");

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
    msg.setTimeStamp(0.15717472212933092);
    msg.setSource(44548U);
    msg.setSourceEntity(28U);
    msg.setDestination(1182U);
    msg.setDestinationEntity(47U);
    msg.type = 148U;
    msg.op = 102U;
    msg.request_id = 25669U;
    msg.plan_id.assign("WCWHYHOQDTHUFQYZLEU");
    msg.flags = 62001U;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("VVMNOUJPXMKFEXNVIQDRSBQALRXJS");
    tmp_msg_0.predicate.assign("VHWZGPOITENNJLSRLDIOJHXKYPSECXGASGDUXBTSYZBYBJMGNRXEGLQENPIORATARSWIDVCQZNCVEBKWQKFLAIVZNEXCRUAQDCWISJKBODUKRWXQWHTWUUYFMKSQFTFZOCVONNNEUHIQGJPRJYZYDGRUUHOMOWWFOVEYDLVDGPMFVTSXBZFZZLSHEIM");
    tmp_msg_0.attributes.assign("CJTIBFJFKRLUZXXGJRSOPOSIOMKTXFHNJODTJLYPIDANLSYYXMZFVBTHNUCUQEGQWPODTQKTDAIDMTDUCSCJOMHHNWFUYLIVDZTRGMCZFPJKQVIUKWPZNRVZQKDOVGWEIBLLKDBOCGJHEHUXRWJWBYXEEQNMUQCWZEVNSAYGLACBIHGVPZOYKPPMCABMRYCG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YJEGRXTGBOEIPVMXHGSVVHIQSGNBDOIYPYDICMGSLOTXKHRBYRKOWVKJGBPPBQAMYDLBCQBCYCUTFMDOFVMZRXRSZJCVKLLFHRHYVNTKUGPNNCZSLRFSOSBOKAOOIXSAQWIKDRNJCBUZZSXYXEGSNTPHWAGIPQMWZCELUZ");

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
    msg.setTimeStamp(0.8909552337411552);
    msg.setSource(38072U);
    msg.setSourceEntity(95U);
    msg.setDestination(59079U);
    msg.setDestinationEntity(117U);
    msg.state = 187U;
    msg.plan_id.assign("UCULETSSKIOQOHMYJHSPDGZWXIWNGFWZMDZMEZHSZFNLUVQJSOJQLKPGWYFHDOISBNRRHBPTRDCRBBMRIYDZDZUGIQBMPWPHUXQAVPOBALYCAWJRFTKXESVLWAEMRZLPWGOBROCNMNANEHWFUJUTZUVKYEC");
    msg.plan_eta = -882681912;
    msg.plan_progress = 0.22351929215321897;
    msg.man_id.assign("QGRVHZXZROLAVHUUDRGWYILSIDGBQQBAQNQLKLKPTJSNOMFBOSGDOTCEKNDLCWTEHVPLCYCBPUPPXACRIEICFSBRUQUNFEHXLXZKYSGIMJPWVVYWIDKCASMPQULETANLCXHKODVTVTEFJNAJJETEBIGAYFNLGKRAPT");
    msg.man_type = 19929U;
    msg.man_eta = -1021394137;
    msg.last_outcome = 135U;

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
    msg.setTimeStamp(0.8360732030563939);
    msg.setSource(49605U);
    msg.setSourceEntity(122U);
    msg.setDestination(11430U);
    msg.setDestinationEntity(134U);
    msg.state = 13U;
    msg.plan_id.assign("KQHXEGXEZZYKYCRMGDLBE");
    msg.plan_eta = -782334053;
    msg.plan_progress = 0.939997243864701;
    msg.man_id.assign("GBPJRKXYWVVMNIPGUQGIHQJUNAXQMYBOLATXVXCTWFIDWQIOUHOKDKQCLXRDRTPOMRBLTCCKQWHGPBXLRUSHTDOLDLLZWWKJYOFAYQZXOPSTYCJHHRVY");
    msg.man_type = 1881U;
    msg.man_eta = -843378471;
    msg.last_outcome = 211U;

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
    msg.setTimeStamp(0.1329351206625513);
    msg.setSource(54516U);
    msg.setSourceEntity(221U);
    msg.setDestination(17347U);
    msg.setDestinationEntity(199U);
    msg.state = 149U;
    msg.plan_id.assign("GPWFOLDPTDDZADZWOWZCEPCTFQJJCAOVJOJVYCRPFOIUIIGQNQUNCTFVZCHZBTNCGXSHJQSMFWQAKUVEIWBFBRTNDQJEHGOGKGSUOKMLBSUXCYSKAABVDHYWENXZWRHRLLSNKNMVIVBHLLZTPFIXRJASMYSLWYWGIETDGBOBQXTZYATJEMKAXPRSKMYGULWCFHQTNKRMAKFZHHOUPQXQXDIOMMDUAZJSLVJPGEUBLRRMYEIVEDINKNB");
    msg.plan_eta = -1519159469;
    msg.plan_progress = 0.8384022696469637;
    msg.man_id.assign("TKPDHIKYWJIUMHDUXNNUVNTUVPDYSZDRZNNFCLLSRHVEAWMRDLNXFZFXXXIWHQAUHSHGZDLKIKWGMEABKPKOVQWPJLCEJQRPFVZRVSMAFAQQGSCXEMNKVCQTHJJRLWWEIDAWNAUBFVWJJQRQGXIUPPQHOPXGFUBTSNEELKODQRUJETMHIGMKIEDTBOCXXSZYNALFVCIRYYPZCOTTBBWTYBEJCZFOSHCYMBPKULTZRVYLGFJBOCOAYYMAOGZD");
    msg.man_type = 3019U;
    msg.man_eta = -266416474;
    msg.last_outcome = 217U;

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
    msg.setTimeStamp(0.23805729765089645);
    msg.setSource(62808U);
    msg.setSourceEntity(41U);
    msg.setDestination(45588U);
    msg.setDestinationEntity(40U);
    msg.name.assign("MHTYDNFZHCSEQDAYOJVJU");
    msg.value.assign("NPNARMKHCFWIBTOKVUPPAAJEGWTUUVQZTYJAVSMCMBPOSYZIOOCSECOQJIYJDMLLHFUIJWSNXGNIBUIBZKDQABKCMYUPFTXDOFUVFYYRXXVCDSHTIZLN");
    msg.type = 134U;
    msg.access = 196U;

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
    msg.setTimeStamp(0.011732869129747803);
    msg.setSource(60314U);
    msg.setSourceEntity(182U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(14U);
    msg.name.assign("YGBTARPKBVLBOMGEXKPIGAULZKUMBKWKQPUFZQYTJ");
    msg.value.assign("CVQMKYAWHNMUGAEVYHYQSDXTJUGWZNZLGRPVLWZEFRSIBLZDIYNKDJZFILDCKDICTGAZALJVBZEVTPIANTDJQKYMBFJMRAGJBYXECOHKBHRJELWQQHPFTOPPCHKMNOTOBJEUTSUQQPNHREDOBOIPCFCMOVYLSNQVDIHRVUASXBWHZ");
    msg.type = 10U;
    msg.access = 43U;

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
    msg.setTimeStamp(0.03002651796000555);
    msg.setSource(25710U);
    msg.setSourceEntity(81U);
    msg.setDestination(64304U);
    msg.setDestinationEntity(3U);
    msg.name.assign("OAVONGCBZESEHYEXARWJNZWFIJWWIBVCLKPHBGMMHTQIENQTUGDPUQJLXTRNUFAVAKMKHDOLFJAPIXJ");
    msg.value.assign("QPCBKOCRJLFIRTZGYNJTZSGRJLLYODMXURHGVQTOUEMXHKKGHPKUKYLCUAQTOOVMGMVROXCMSRXMNQIOFFJJB");
    msg.type = 142U;
    msg.access = 153U;

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
    msg.setTimeStamp(0.35839635801895353);
    msg.setSource(7547U);
    msg.setSourceEntity(50U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(239U);
    msg.cmd = 12U;
    msg.op = 137U;
    msg.plan_id.assign("PUXQKTQFMOQXUCTIKSDBVGYGJZ");
    msg.params.assign("NKYHOQGNXOSJJLTGYWUTWGRRJDRHZPCPYPUPMOSMTQMTHFLSCAIFQKRMKKYHYYMZHZTZMVBQQWUNCKWVYZIRARXHGPQHGXFTURNSHDBEFENVIQYO");

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
    msg.setTimeStamp(0.991814098114581);
    msg.setSource(55443U);
    msg.setSourceEntity(45U);
    msg.setDestination(61764U);
    msg.setDestinationEntity(32U);
    msg.cmd = 245U;
    msg.op = 138U;
    msg.plan_id.assign("JZCVPWLUMTELWCNODVKKUKLXACAGAPMASOOB");
    msg.params.assign("QVEZOZEZLRBMRINZSUPENHFBRNOKVAYSFNMCABMXWZJGZ");

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
    msg.setTimeStamp(0.09653591349502189);
    msg.setSource(33586U);
    msg.setSourceEntity(150U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(63U);
    msg.cmd = 136U;
    msg.op = 191U;
    msg.plan_id.assign("MNJWXXDUBOEACGFQVZYXKVIZQWRECRPTYTHOUMJCNVXKXDEUALPBNYWQMKLCHVCRTMNDRKMJWHSNFOQHYHQDAHGZSAWLGWDIIJUTWGUVMBUKISFSPZPNADCKLMLGTLUXEXRFHQWBENOULFWVIPNEEJHSTFJOSYVXLGTFKBPZTQWBCVCKZJEARFOYQSPXBBMSKYHRLJZMGPN");
    msg.params.assign("JQCMWUJUKFEMMGTDE");

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
    msg.setTimeStamp(0.21630646970990386);
    msg.setSource(14143U);
    msg.setSourceEntity(79U);
    msg.setDestination(7438U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("NCBEPEWUZCPXJMSVNKZWDIODACEWWWSJXVGOMUCNOMXIRZIOTMYMPDISZSEDNXNBVAVNKCPGKHJ");
    msg.op = 86U;
    msg.lat = 0.7739049836610894;
    msg.lon = 0.11322909280098348;
    msg.height = 0.8915193780509414;
    msg.x = 0.4373935759563766;
    msg.y = 0.18629624689143542;
    msg.z = 0.6524405350449722;
    msg.phi = 0.3178797153518301;
    msg.theta = 0.8183673457740862;
    msg.psi = 0.7766008166799577;
    msg.vx = 0.49972072256029343;
    msg.vy = 0.9807512589859443;
    msg.vz = 0.6753581103025372;
    msg.p = 0.9668844688244852;
    msg.q = 0.014485144683321627;
    msg.r = 0.605713594601601;
    msg.svx = 0.6964166183281764;
    msg.svy = 0.8542130092397336;
    msg.svz = 0.03876542103662761;

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
    msg.setTimeStamp(0.9451054809856394);
    msg.setSource(7648U);
    msg.setSourceEntity(43U);
    msg.setDestination(30974U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("DROTPUINQIOOHCKLSXGTBZTVTOXJUERNVIQWMGHJKYUMDBPALKVKVLWMCBDUNMSCWVQEULRGUQWQXYJXPZVRHYPABFLADUIDQERUKWJBKNZFXTKXTFYMMRRCPKRLFAUYLICGMGPNTOXZHJQIHHABDAFJOEJNOFQXPEZHTEKFYBICSLLPKSHB");
    msg.op = 154U;
    msg.lat = 0.9208293334613508;
    msg.lon = 0.3950660464476853;
    msg.height = 0.9395691991392596;
    msg.x = 0.9223538607037698;
    msg.y = 0.13771838362003952;
    msg.z = 0.5900966682122603;
    msg.phi = 0.29110971451336876;
    msg.theta = 0.9796177916240578;
    msg.psi = 0.3881256184688934;
    msg.vx = 0.23145932408855852;
    msg.vy = 0.8530977640625407;
    msg.vz = 0.8753701214014805;
    msg.p = 0.7721850344109971;
    msg.q = 0.6254392859802247;
    msg.r = 0.8837180819754245;
    msg.svx = 0.06264707720796148;
    msg.svy = 0.41269805633102297;
    msg.svz = 0.11760714060261046;

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
    msg.setTimeStamp(0.4039455278895513);
    msg.setSource(37952U);
    msg.setSourceEntity(140U);
    msg.setDestination(43601U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("WURWTDMHSUOIZNYUVNOEEVGZCFXNDPJQTJVDRZUDGWFAJIBIBCDCEOWMXMKQLJMJORNAWILJBYCKZCWBUQOQBFAHQCPBMWSPILFQSRWPNMZAQNOUJZHIXK");
    msg.op = 98U;
    msg.lat = 0.8992487759236171;
    msg.lon = 0.4949228661971632;
    msg.height = 0.4856319488523344;
    msg.x = 0.6993354792723018;
    msg.y = 0.3244471885854917;
    msg.z = 0.05711571215814937;
    msg.phi = 0.9805000767619163;
    msg.theta = 0.15082434184641103;
    msg.psi = 0.49250338252265924;
    msg.vx = 0.010826389073694265;
    msg.vy = 0.7462222841232968;
    msg.vz = 0.5965427407802981;
    msg.p = 0.21244288005315526;
    msg.q = 0.3114189005189437;
    msg.r = 0.04991986888780986;
    msg.svx = 0.4769289527799426;
    msg.svy = 0.30775458216711316;
    msg.svz = 0.8441516156686452;

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
    msg.setTimeStamp(0.9686358957690554);
    msg.setSource(21825U);
    msg.setSourceEntity(41U);
    msg.setDestination(29304U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("MBAZOJMSOPQPKDBEAJXLUVTPSMQOMUQSPFSHIFTCSFJIGCEFQYPHGJGYIBJHFKVXFZRSYRXBWQTKSIFVNQJGDGNZXOZLLWIYUVWWOUBYYCKYYKZTWREMZUXCNBIHQTUXTCKLLXEGORJRPNHFOJDNPVSCZCWQPGFCHDTDXBLVMWMEOT");
    msg.type = 58U;
    msg.properties = 92U;
    msg.durations.assign("GDGYAWDDRN");
    msg.distances.assign("ODCHHLVJPMINUOVWOKHNUMCSYHWYCAXUSGOUPYRCO");
    msg.actions.assign("PXQBTDIUMGNEQUKMERADLZPVDOSGXIWTKHSJSYVXUUHWSCBVWNBVISHVNRAXEALHUFBMJRUYCZDJXRAWFOFWAZJPDKEUTIOMYPIQCFLZTVMKRGVEBTOQKNCTRDKTSHAMNNMMLVUXJBMSLLYWXCOFQHAJPIYDPHBFZSUQJQGDQTLGRASYRGEFYCMGTZEPYXKZJYLSVUCQHDHLLGIONKDAEWPYOOCOXNBJAB");
    msg.fuel.assign("GYCRFMOXOUWPETQRYZUGJFMCGNCOIESPPQMEWPEAATTZFLKJMGSEHSZGXJQVIWUBLFTKVZSJYQDLSCSHPZLTZBNSGNBIFKXTXDBDOCXFHNNARXCLPJAGKCMOWSROKJPYU");

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
    msg.setTimeStamp(0.6582148318921058);
    msg.setSource(30470U);
    msg.setSourceEntity(230U);
    msg.setDestination(40016U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("EIRXJPMOXKOTIMNAJOFCEEZHZKURTSUWCAHLSHTLJBFGSBCEQYLIKUGDXFGXMRQDCLMXRGFPKJGWHVBYMUWHCWLOSVQMIJYEDHOLSVQPJBKIWUOBPHVIFZSNGAQMJFEJPBYGPLAQZTDJJUTNSRMWKCWFTCRUYHDYZBOQONYMRWLDGDYQNDFKBCQGUKNNEASXEEROKADTAVGCIVRTOWUZKNXPZZVFXWHTE");
    msg.type = 81U;
    msg.properties = 109U;
    msg.durations.assign("ZYSZLPSPPUDOIZFIJUAJFYINGZXKCWIDRKTIECKSGKWV");
    msg.distances.assign("DDVNEIAEVNTSWQSRFVTZHZTLDCNVHESPRIJOGWQTNCJQENZVUNFWHXBTIICJFPQVMUNSSUWHLUYHKRURYCX");
    msg.actions.assign("KNPEWHTJESDQSYOBURCNIPKVLUREUJVNYQYQUFTZMIMUIWZZWDRCKSMWPFGRPVWXYNGTMLVOVUSJQEFKCDGMBSELWFPXTTTLLSAZNJHBIOOGNQTZYEPTKLXAKGKYREOJFZFICTYDAHIHNNMHBVBAAEXBSEDXCICLDFSACRHGIYDULPGNMXRZQZQXMNBAOXCWVTLAOYRHQXUGMPJLFKROJMH");
    msg.fuel.assign("KLBRMSWSKLMKOHVHEVCKCXCFDHBAHYVLIKYLIBQSPQSBZNMLFVOXRUCJYIEPDJRHTVSPVDWXAIJCJYOGSBZTDYEXUQLRWEWDXICCZRVBGXEKPMHTQTMAHYNIUXGMPWAPTDONFCXPRFWTMUTDLHCJODUIZQEAAUXOFMYQJZURZRPZNEGMVQGWLOQWGGTSLASIONRPNWYFUKIJKBNFDHPZUAQOYVJJCZTXYGZVWUGMNDGFBL");

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
    msg.setTimeStamp(0.28891355302374033);
    msg.setSource(49786U);
    msg.setSourceEntity(108U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("CZIPBINCKDGHMHKOAPOQAHCEMFAYTWIVAMHYJKZGFQEKBCLPZRGQSTSSRAT");
    msg.type = 10U;
    msg.properties = 87U;
    msg.durations.assign("QFTLMKGLFEUORGHHFWDFETTHSRYPWYNKTIRUMPHXAWVXDAQHGRXHYJJQUWBGFR");
    msg.distances.assign("QNCGAGDWYNIOBJXLPSFHBDZSLJUCJFRNUYKBXWZAQUXENKDQNTPGYULNGMILBQWXAPVNFHO");
    msg.actions.assign("HEFANVLAKTUONXSKXGDTTDIHLSRDABSBNNCEDBISGISKBCLHHOEIAHSOQJZTJTRFUPJMBCTQOCKULZYXXQSJEXYKFVMWXESJWWIYUNTQPODEGIRAKXUDLFUIWJMLGJVZVJSHAQO");
    msg.fuel.assign("PPHDEHUODSJAWQVJERNQFQZQEYSETXAKMI");

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
    msg.setTimeStamp(0.0881856056598771);
    msg.setSource(40542U);
    msg.setSourceEntity(37U);
    msg.setDestination(44668U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.4943468576765414;
    msg.lon = 0.7275711416837696;
    msg.depth = 0.9698158928442331;
    msg.roll = 0.7331051987772024;
    msg.pitch = 0.411460210894658;
    msg.yaw = 0.12459018880866635;
    msg.rcp_time = 0.5841312270011669;
    msg.sid.assign("YRAAUQNKBEOWBGUSXEEKWCGFRNQOJTEABUCRJMTRLTDJOTLMWZMLOLKRWZFNZXNMZJAXTCAFPVMNNSQMGZDXTEVUHNYSSOEUWORXGUXXUWHDGKVDIJKTASVQFGCFSWLCKIDFYQEAXRZICDYAJIHMPYCSDGNFHILBHQVYQWVOZPEEUZOGOPQ");
    msg.s_type = 72U;

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
    msg.setTimeStamp(0.29627339023785626);
    msg.setSource(33319U);
    msg.setSourceEntity(233U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.7874102996966433;
    msg.lon = 0.4440509739025321;
    msg.depth = 0.3680667160457203;
    msg.roll = 0.9802999449819557;
    msg.pitch = 0.5908332950576065;
    msg.yaw = 0.7451718038424457;
    msg.rcp_time = 0.40416602258229617;
    msg.sid.assign("VTRKNNDEKMOOSPZBPTJPGQTYYBTRHCACDVCSNLZXWGTLMLMXILAVMXZOQCVHHOIZISDXNLMCNORPLUEDZHHIXEBIKEDTHYQOVYBFXBTHDOAMUELBVWSQQPLRMIJPAPRYQNZYKEJCJEHGFNNWSKUQUWCRKAEOFUHPGMTWGWZAVBRFCVUUIDQXGAJGOVCZIGZNAFROLFJJSDQIBASQYPXFBEVTWKMCIKBDJKGW");
    msg.s_type = 137U;

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
    msg.setTimeStamp(0.18554669002025181);
    msg.setSource(29534U);
    msg.setSourceEntity(8U);
    msg.setDestination(59609U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.3576123657315432;
    msg.lon = 0.28589238500564995;
    msg.depth = 0.5497656427670738;
    msg.roll = 0.9133112222080799;
    msg.pitch = 0.04404986416099099;
    msg.yaw = 0.03559535969354077;
    msg.rcp_time = 0.7802967248450975;
    msg.sid.assign("JKYTDLGYRZDUQXZFWLKHIMQGRVQOYJCBCHMDZPQOIUAU");
    msg.s_type = 147U;

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
    msg.setTimeStamp(0.8898293916863808);
    msg.setSource(17236U);
    msg.setSourceEntity(78U);
    msg.setDestination(6240U);
    msg.setDestinationEntity(168U);
    msg.id.assign("AQKPANVBPSIAJQXKVGDJKSXOCIOALOANHSKQLIUDULXCENQQNSHLRUFTWOVEYDCJEMBSRYDVDLYTEBXMXXSDDSMKPWMRGMPAUPRWXWWMJYACHGINWAEQZVMYZKJCGBYOKHQZIGFZBCPNGRNZEMEPGFQHUVJRUMWNKIOLFDCPIZWUFIHVQVRHTUZHJBWXEKLPUFRTNFYTESCOQBVBFDGEZZOJJZISLR");
    msg.sensor_class.assign("UJLCGBSGOHEJXQCTWWDVDPRMPHHBZKXHEPXEZPNINBHDJDKCZVGDAKNSAISNWESGORLJLPUYZVOEIRAVRAKMRBKVMIIIAADAUYHVECYBSEUPLXSIRBTQYHFQJFSRFUABBLWEOIWGJMCTFDYGSPLTCNQMXRZUTOIFCFONLFVXTYDQYHKL");
    msg.lat = 0.162662623431847;
    msg.lon = 0.012425894783644753;
    msg.alt = 0.5104006948430714;
    msg.heading = 0.7850722594785322;
    msg.data.assign("ZRRVWPTUNAQLUZJCHXKTXSCDVHFHJOWAUWLP");

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
    msg.setTimeStamp(0.01805701794040271);
    msg.setSource(42033U);
    msg.setSourceEntity(71U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(36U);
    msg.id.assign("YZHQPRPDAYZRCWFZLJBSVJQWCSDNPKOYWQUXKOPURLQVHFJEZNEXMJCOGKDMOSXAZQGPNFTGYTQDASIUBFKCTXTBORLMJUIHJCKSBDSY");
    msg.sensor_class.assign("YWLUOOETPOEVANHEIQAPSBLCSDGTZGSWLRCUDNYEADHQPZKIBFKTZQBGQHNCIVXPBFSVDJFSMYOUCBFGBMEJMTZFXZKOXGLRLMTBNJQPDSAAWREXTMHPDULHVPUVYNIKORZHTCTJLWANPZGAUKXCZSVUKYFXJNXJUKMLQWQB");
    msg.lat = 0.13948452242915776;
    msg.lon = 0.5089626236010889;
    msg.alt = 0.27957752640157163;
    msg.heading = 0.12593516413089134;
    msg.data.assign("XBPDNNJGEWHHALOFGSEIAYABCPAHNFVVGZWZGJTITSKRDBXASMMODHFBBCUZKWJCXIHARGJOETIVITPPQJCVNUALSTJJKDVBLGMGERVUBDZCQSJYTPGWSNKWLKNPSFFCXMONOCWKRLMMXDWYNIQTBZJORHSIGQXYQP");

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
    msg.setTimeStamp(0.8208470230026186);
    msg.setSource(8441U);
    msg.setSourceEntity(11U);
    msg.setDestination(5505U);
    msg.setDestinationEntity(103U);
    msg.id.assign("MADVJXPUFTMPUFGEPVFEXSSXVLXLRNFCNLLATRNWMIEKLYABQVQLNZMDZVMKMWPXJWYZEQJJFZVHJINLQOGIHRGKDVQACTCFDCBW");
    msg.sensor_class.assign("OROKPXJFEXHPTGPZVQJZIDHGOOENFVIKGWQUJBQBJWFIFDYHNVIQRYGFYJYEZMVUWACLKTTAUZFAPXCXVNDPUVAUXLLSNDANFJKMTYGTRWEYXUWTGCUSXSMBXMXDSGCISJUTNKCLTLJDREUHYOYOMNZALPSFECZHDQABIZQILRSVFMWWLCBCYZRKRIHDCAKOQAORMNEIKMRPNM");
    msg.lat = 0.34824027993641027;
    msg.lon = 0.8149359154984769;
    msg.alt = 0.32507418055400394;
    msg.heading = 0.5281500827725759;
    msg.data.assign("NEJPYZLSPGOPWUNRCKXPNMWTFQWQEZRLKHMHAGOFCIMDFTCXDTADPRGUYYLIMGKMDVIKPSOHQTMXYKRRVKZILZGD");

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
    msg.setTimeStamp(0.5387148560812107);
    msg.setSource(58062U);
    msg.setSourceEntity(160U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(229U);
    msg.id.assign("WWVHOQCBWZRQLLKLNSETLZSFNVMIAJCOKWVDCWODZOWRRVMBHICHFUYYAYLVCAJHPGMOHUPKZ");

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
    msg.setTimeStamp(0.8733617324955193);
    msg.setSource(53534U);
    msg.setSourceEntity(190U);
    msg.setDestination(5886U);
    msg.setDestinationEntity(10U);
    msg.id.assign("YQLJOUUSBEXGUKMSMSSBSTQAYYNMNMKHOQZUUXPLAVGAXRWIHOFMFJTFZHPJQHCXWSGATAWKRNB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HIWGIDUDMHGKVKBAAXEESIXWMUZXFGQYNIRHBLFBXHLOEGOPNKMMDEQRCCOPFTMVSJKFATWNBJSDKCMCNOZZDNLTJQXDFWMMGRSGFAKUEHVSMDL");
    tmp_msg_0.feature_type = 10U;
    tmp_msg_0.rgb_red = 206U;
    tmp_msg_0.rgb_green = 119U;
    tmp_msg_0.rgb_blue = 50U;
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
    msg.setTimeStamp(0.794897190842924);
    msg.setSource(7083U);
    msg.setSourceEntity(241U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(100U);
    msg.id.assign("IZCZDBNHWU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QUSXDNZMKRBFIMJJXAHWCBJFDZWGLKOUXOYHTYVRLPAENG");
    tmp_msg_0.feature_type = 4U;
    tmp_msg_0.rgb_red = 133U;
    tmp_msg_0.rgb_green = 127U;
    tmp_msg_0.rgb_blue = 138U;
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
    msg.setTimeStamp(0.0209806535076682);
    msg.setSource(49865U);
    msg.setSourceEntity(11U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(179U);
    msg.id.assign("LJFETRUBRUINQDJOMOVTHQAPMSTGDSENPPVNKJIPLMHFDWAJHFXILEPCAIZESUBJZBWVCIQCWZHXTBYQZVEQKATDICOERLIBDVFXCNVYRFSZRKLUPGASMCNGNGKYBFLBNHSXSXZNBONMZOJVDOJHYYGAYZEXGPAGKLEOTRWJFVLQ");
    msg.feature_type = 244U;
    msg.rgb_red = 67U;
    msg.rgb_green = 69U;
    msg.rgb_blue = 245U;

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
    msg.setTimeStamp(0.6443001232452303);
    msg.setSource(44698U);
    msg.setSourceEntity(73U);
    msg.setDestination(63737U);
    msg.setDestinationEntity(168U);
    msg.id.assign("LFDLIXBJYYTGMKFDCHQUOYNRYHZAZKAXYQMHHKGYRLKGCJLXBEYGJWSFUOKDRNASJBCUUHCIUJSHEBEZQNMMYTCBOFLWVWRPAJPVZUQJENTZLXPIPCSWQAVHTVIBAJGRITDOEAOBGVVNBGWMPMESOUFXKRFDDGLDTCMBWCHSRERANXJANIQUGFOKJOLDWACKZXTVMZHTQQIIFQKPSBVFNUECWSEXPLKGQZPENIYSNRMOVRXFO");
    msg.feature_type = 78U;
    msg.rgb_red = 148U;
    msg.rgb_green = 55U;
    msg.rgb_blue = 135U;

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
    msg.setTimeStamp(0.25237476255458713);
    msg.setSource(36180U);
    msg.setSourceEntity(68U);
    msg.setDestination(64986U);
    msg.setDestinationEntity(84U);
    msg.id.assign("XVHHXSKOEEKPEQINYSRTJAROLABORTSDUUKOQGTT");
    msg.feature_type = 100U;
    msg.rgb_red = 229U;
    msg.rgb_green = 115U;
    msg.rgb_blue = 41U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.14129783271534568;
    tmp_msg_0.lon = 0.5165672325199;
    tmp_msg_0.alt = 0.7748820243566343;
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
    msg.setTimeStamp(0.11080040921658318);
    msg.setSource(64124U);
    msg.setSourceEntity(206U);
    msg.setDestination(10880U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.230887160721574;
    msg.lon = 0.9785999519910494;
    msg.alt = 0.3296012873530567;

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
    msg.setTimeStamp(0.9213628467365499);
    msg.setSource(65088U);
    msg.setSourceEntity(170U);
    msg.setDestination(58166U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.4619184882468157;
    msg.lon = 0.1270965939943629;
    msg.alt = 0.8910161022489672;

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
    msg.setTimeStamp(0.4479556843352068);
    msg.setSource(13046U);
    msg.setSourceEntity(161U);
    msg.setDestination(32408U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.5795363612004876;
    msg.lon = 0.006092680751701329;
    msg.alt = 0.7599705774361103;

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
    msg.setTimeStamp(0.984221295034415);
    msg.setSource(59057U);
    msg.setSourceEntity(173U);
    msg.setDestination(10567U);
    msg.setDestinationEntity(227U);
    msg.type = 81U;
    msg.id.assign("BKQPFDAWAGOZGXWERSMTWHSJUVXWQXIIDOFRMFTAZIWCKUZSGBKBOYXCMPZFDMVACYJGDVMLRFRNMLYLWXDJCPDDPOHJCQKNUEIQMJGAEOJNEVUWNHVDCSZRUVQAMPUCNJLUBLDLIHOLQIVWTOLSHTPUIJKUQBHEKBXOYZARIOPTYEGXUNTRMSYIS");
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.40373118974253586;
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
    msg.setTimeStamp(0.8761088736552419);
    msg.setSource(52244U);
    msg.setSourceEntity(52U);
    msg.setDestination(32725U);
    msg.setDestinationEntity(208U);
    msg.type = 45U;
    msg.id.assign("CFBSLVDBITZWAMHWCSUKACADCYIJFRTSSOYJRRYBEJBWURNULYAXCBPRRDVDFOEDQXKVMVJQVNGMJIQZMHJFSHZPLGPBWEEIYTNETZKWPAYXGQYTZPKVWRKFRQAMPFHQOTNXQBOBEOUIFMFPGVJCJXHCXHGVWLTAKLKIXQLZUOIFGCNECFHVDMDNEGIMLUKHLNLQOZCTESZHNSJMQIMTYAVZDUIGHOPOGNBPKATGBPSXXSNW");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 9750U;
    tmp_msg_0.value = 43U;
    tmp_msg_0.error.assign("AKFQQHSAJYXMLWDYCUWPMRPAWTELZNX");
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
    msg.setTimeStamp(0.8614672264166402);
    msg.setSource(21136U);
    msg.setSourceEntity(171U);
    msg.setDestination(2624U);
    msg.setDestinationEntity(146U);
    msg.type = 134U;
    msg.id.assign("QAKVYHWNTRXTGVDZJMQVUXIAGPBZCIIPFHYOOEVPKEQNGPCNJUWOKUPFEPHWPRKZIBPJOZQFOYEYGFNQFHAJALQCRYGVZIAVWLVMHFJASZGNVMDCMEHMNDFTGKFXNBEZJAXUGINQISSLIMWTAYJTULJKSLWXXYRTOJFKTZIBMQEGHOYZBSTOYFSDUI");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.29617495844552744;
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
    msg.setTimeStamp(0.5244249505148119);
    msg.setSource(28128U);
    msg.setSourceEntity(27U);
    msg.setDestination(54030U);
    msg.setDestinationEntity(64U);
    msg.localname.assign("NNCWLJUMFFCQXDBEXXVYSSTDXGWMIVUYQHBZIAFRTEPFYKIRVZOOINTTNFYZUZYZCKYXCBZQDVNSDPPUFEVJSXMFPVBRCCLRJDKAHGOEUWAUJRHSWEAHQPKTQDMXCKBKIMEDUHTXAVAOJOBJLTBHPLENYCNGMWXOLCZDLPXMVNPHQVQWUKBEABDJTLQGNAQGGZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FYSCPOGPKURQDAQJBCGDBDI");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 33256U;
    tmp_msg_0.lat = 0.02520642683075336;
    tmp_msg_0.lon = 0.8666891110957057;
    tmp_msg_0.height = 0.09193302920330171;
    tmp_msg_0.services.assign("GLGNPFWLIFPSPBBICXSAJMFXMWVTCXCNRQBBHQAGYZVSMZWBOPGUSNUHKMJOMVXJPLSZXVZYBDITZFDAIWHQKNLMLYDLOCQFWFFGEBHEWVJUSUXCHQDVMXOKVNKYTXVLLEKRILPMOMHTYGHEEOPTKABROZHDAYUYKTHUMOCJTCSJQADOUDGQYTSWIFPZRNWIFQQCUDEEYDTNRJGRAUUAKBJFNOXWAHRTSEPXQWIJCSRNZGLRP");
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
    msg.setTimeStamp(0.252217550030318);
    msg.setSource(48270U);
    msg.setSourceEntity(106U);
    msg.setDestination(35172U);
    msg.setDestinationEntity(231U);
    msg.localname.assign("YGXIORBHDTDGCPFIQLNHXLIBRQUPVSBQGADJZHAGTRYXDDJULUKCYRB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ANANUCMVYRSFMKMSXBFFWDSQBIVXNGIBLJTCVDYFKKHHHNOYKMAHDOYVXDORFBEZZCYEUBBAOWOWNAPTDAPWKDPEHROLJSQQIEUBUTGPLRDROELVQAUJUFKHPJJZT");
    tmp_msg_0.sys_type = 139U;
    tmp_msg_0.owner = 36323U;
    tmp_msg_0.lat = 0.06036672228720841;
    tmp_msg_0.lon = 0.0687754452212962;
    tmp_msg_0.height = 0.868041023932631;
    tmp_msg_0.services.assign("XQVOSBBIYSIAEEVGSGHYNLQIMIOKVUXTXAUALTOZXDIZWMMDDWQRJWG");
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
    msg.setTimeStamp(0.593773803070577);
    msg.setSource(25254U);
    msg.setSourceEntity(135U);
    msg.setDestination(51120U);
    msg.setDestinationEntity(26U);
    msg.localname.assign("WDNUSFTXMGEMAJCRGLTSBSDNBHFLGWWTGZTURDRTRPOIDXIKCCBGOZBRJOXQKOCDMVWZEXPVBPXVEGNESZJAWFSTJFNOTYQMHQBDKHIHQRNTPWLRBLVXAURTGCEQUYBCIXJVMYDFMCJYFLFFXPOWSEVZKKZVZVOLSUNUPQEYLSTDAWFCMDMJZOQUHARQADNNMCJHZHNZOAQXISWPAIJHHPLYCQEMIGPYKVK");

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
    msg.setTimeStamp(0.2561432164045152);
    msg.setSource(1788U);
    msg.setSourceEntity(235U);
    msg.setDestination(24047U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("KWGWWXVOKLWEGJUZYOYHBNKZLATWCVXESCEGIPYVFCGGTKGDSEOMRRPLQJRLCHDKCVDWBQPTPNMIVXATISHZYOYMHZRZNUFFNM");
    msg.predicate.assign("UHCQGSTELVCMWEESHFHYXAGMJLQTLOQOUMZFWNJZVTMPNUCQXHRMKFKRBBVJBPNNYZLXOOBGFYGINPNDMAWKIXKSHCLCKILPQORCSR");
    msg.attributes.assign("DVAERLJSUKYIZHIDDRWEFDDPQUPTFAMCDPOTNAMVLCYUBXMAREZIZHVEWSTBOEBGRKYLGAZJLNJVRWHIXGRFJBCXLWMOGLYOSPVBNIYNBVL");

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
    msg.setTimeStamp(0.8555825226247763);
    msg.setSource(44065U);
    msg.setSourceEntity(166U);
    msg.setDestination(64481U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("TMOINURKWBGDXADEZHMMGPDJPXGEQULGTSZICMPAYKVGYTAOYSVEQSEMHIIBDVVEIQAIFRICHWXVBUFTVAYUDBFNNJONCONSCPJWAYWFNLXFHBOD");
    msg.predicate.assign("QLBYMZHKSVGDPZRLFBRVYYIUMCQNCAQFRVVJWMUDYNJMRXWHASFBJZOZTOFYHCBSWIKCTLJXQFQVAGHHMUCTUOOQLXIPQHTBLJGE");
    msg.attributes.assign("OMZUUGPWOTVSVPDRIRDTOMRJLAJFAWIEISQMZTAQHOPZCLVUUBSGVNGXOFKFCHHUJIHZAFTXIDZCTFJVGDPVEEHQKANKKGBBRMBARNWSIFWE");

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
    msg.setTimeStamp(0.11380011744334861);
    msg.setSource(37361U);
    msg.setSourceEntity(61U);
    msg.setDestination(26902U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("RBFWGDXYNTYQFLY");
    msg.predicate.assign("NNXWSPISDCDUPJRGBZTXJQARGYLMLJGUNXQENMPRXJPUNKEWZIGYLQDCPEANTOSGEZUDLQIZDTLAYOWARLPXZSXBUFANWHOCGZUBVIXFQKFHD");
    msg.attributes.assign("UUULUCFDFZARWSGTGATSCPLCCFFDBFESGVGHJHPGAQKBBFIATZQJIMLVJBUKSEGTWYNREEJEPWLYOOPBNOCRHCSRTUMHPDTIRJKOWDSBVQDIRPYMQMLFZZL");

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
    msg.setTimeStamp(0.6824878897258776);
    msg.setSource(63742U);
    msg.setSourceEntity(90U);
    msg.setDestination(30805U);
    msg.setDestinationEntity(185U);
    msg.command = 233U;
    msg.goal_id.assign("HSQGRXDTMRTYPZWIQKEEBEAIVMOFKQUUJOGKUQYOLHPFSBCCZFWBLXZEDQLCMEORMXESTFDHHSUEWONVSVKKCROWGWVYRQBTYBNAXSNWIPBVARIZNNIEYCYQKVFLHDNXWBGSJMLUDZGTNZHMDPBZSGJJZJUDKPMILYACPGMJTFBRXJYWVDOUORXS");
    msg.goal_xml.assign("COXVUTCPURIHVSEAYLMHBNSPYGOASOBFVHTKOZZPGYXZEXTUDUEDRKZNZL");

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
    msg.setTimeStamp(0.6770851596146001);
    msg.setSource(20980U);
    msg.setSourceEntity(83U);
    msg.setDestination(58969U);
    msg.setDestinationEntity(246U);
    msg.command = 83U;
    msg.goal_id.assign("RXRHGTIFVWMXJQBRLVEKWIDLRMSBEPZQDYUKNJMCTIQWWJHSLZZSJNRQZVYOTFPGMEFWKOWUJMSEHGCZXUQRXOZ");
    msg.goal_xml.assign("ORKZITBMLCDUBSVKSWYHEOSLLWRJQXNEEFMRHJQXJDUKUJHNDVGYDZYGJYXLBJBOABKTXFCPSMOPOVSFWCMADATNJXFCXJI");

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
    msg.setTimeStamp(0.03234000525489167);
    msg.setSource(13385U);
    msg.setSourceEntity(57U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(194U);
    msg.command = 87U;
    msg.goal_id.assign("QBJQDKZZTTXFAECITQAJDTOIWBTJBSVSLIULKJTHPLDESXHXHNCFQDBCLBKJMAOKNCAPPAGIUNWUONYFWRRIEKUCOMZJSHQV");
    msg.goal_xml.assign("QAZYUAAEHEXXMNROZMYULRLKCABWWHEMJFPKPP");

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
    msg.setTimeStamp(0.9031254052853969);
    msg.setSource(40146U);
    msg.setSourceEntity(54U);
    msg.setDestination(44101U);
    msg.setDestinationEntity(186U);
    msg.op = 203U;
    msg.goal_id.assign("CULEXVOZTNPPRVNERZAPKAGITZSQJLEFGSGDMXOQWAKJQSLTBCAVCURMTFRKYPPDGCQZUWKWRXNIDSBHMDZGYKKUWMPUHOTIBFHRRSNMRQLRQVJZEOVGGNVXEGEACBMQZXVDBWOANSITMFSKHMIHZELUKHYJLJVQWCHBAZDJAPTSDIFI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HFDYJMNCXYHJINYPITEXSPQMQDNQBASMHIIXCOQCXWNATFZKIAXJAWDVYDJSHLFQKPVBSACLMXKJZKWUFREGCDWBRIUGFJEOWLYBUVPQBKBKRECHTPEDDHWZTLGZWVFEQRBNATOOJPTIUMB");
    tmp_msg_0.predicate.assign("RTTHRWFIDJZRGSKTNDLUXDYYSZMJSZOWEONPDMGLLMBHMEWXSCSBAHSIVVKRESUNQTJKRYFHGNBFFUWCBECVXMZBSOCKYVFWKDRHXKMVOGBHAJDIFWZGALAUCVWIGPWRXX");
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
    msg.setTimeStamp(0.9656435440296275);
    msg.setSource(63913U);
    msg.setSourceEntity(203U);
    msg.setDestination(39186U);
    msg.setDestinationEntity(164U);
    msg.op = 158U;
    msg.goal_id.assign("ULKFZBYEAAPXXBNUULZHUILSIAKBPGATTFVXVQZBXPYRWUHYMQDNCORXDIZWYEMXRIFMXODLVTPWOPANKQBUCLIRVZAJDCNIQHEJGAKHSWHAHSJJZGBUGSTPMWNLUCVRCZBOHWLSNSTDTYGKOTQMIJERKCFYSHFHSFSWKECOEH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WJBSSQUGCNYSQECIIMYBZLBPDULRAOFAMEWORYMUWZGRFBGJBGKKKSJLPUEZIOKTJVMSICHVFFDNVYXEDYXUZIPJXNTJIKRINVRQNGRXQQUENNSCQFTRDA");
    tmp_msg_0.predicate.assign("HYXCDAXBMFTFWPYHPFDQXUTQHJKGUJSYJPVLPTUIIMCWFZWSOEKNMGBGWCGLQKCKWJBGGJIXBBG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RBMURCDVMIOHNNLZLYUPIZQVEDRTXDRVBSFKQTZKOYCJAGPGIZFACLGPOQZAUFNAHMBKYXTVJCUJEPEXRQKJPHTCEAQIGIQGODILLMAKNNABFIWBIPMDSFDZXTFWBZUOPONDYGQXCGWAWKMJDWLEZMSTFKLSSGS");
    tmp_tmp_msg_0_0.attr_type = 123U;
    tmp_tmp_msg_0_0.min.assign("NCUVJYPGUHXSYSRMLXHPAXUBGKGNAKRSDAYNTBUVLBBSOUENEVJEWZTXINOQLLXTPYOUIUDEKLQDFGOVMFSDROPIOJYERIACJRXTNCWFCQMJZEQZTNMBGDWMZSXYLSNIWHFWSFIIBCMOKDKKRHQYARRHKDCQAT");
    tmp_tmp_msg_0_0.max.assign("WLHUABDBSGWFADJVSQKMSRJVJSEVTSPVLEMBERUPMKISFDQCFIRCNORWMLAOGTPZMBJFNYKZYWLXZQGIYDZBWWZOEVAHCAJCQMNWACETYINPCQRVTO");
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
    msg.setTimeStamp(0.7607645652849915);
    msg.setSource(2684U);
    msg.setSourceEntity(70U);
    msg.setDestination(60843U);
    msg.setDestinationEntity(149U);
    msg.op = 105U;
    msg.goal_id.assign("NAAJWBYOARSVDRYRBYSKROXOKWEYMESZMHJUTZNCIEXQEAHNJMVNIMBJLMDQMYQIYHGJPMTEKXDQLDIDGRGGIHAWHDTLTQSEKZLOT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AJMCBLKTOVWIXQZBKPPNWKJVULBVRNUEFUVZNZYEVYQOKLHISAHSVJUFGZPVINZWXNZAEDBUBSOYFHWOAEFRANFWLZTQSZORHOECGYTGSJETKAFHJLGEBPBTWMXCLCWSEVWPYXVLKTDRRPQQHYKYLQB");
    tmp_msg_0.predicate.assign("OSBVXNXONANUCVRWBBBUBXLAGTDXRIYUGTOWIOERHWPFGDAMHVLJWZBDCHNRZACZUXQNPLCMZSGBVPMOECEAKMOYVTKUXXFSPVIJQJCDRHUJEJTLQQLUSVHTODMKYWNTNMWDJPXEZLPQ");
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
    msg.setTimeStamp(0.06123241989630368);
    msg.setSource(43971U);
    msg.setSourceEntity(100U);
    msg.setDestination(64747U);
    msg.setDestinationEntity(201U);
    msg.name.assign("CFUHRQQKRDCGMUFGTNZJVTCXZBULYTLHWJBARKIPHXRAOWHSBAPECNZMPLHOFTNNJUVGEDLBMYNEFPKLMHGTDHQWQSISJVIPZHJRXWVZPLAISKXIWEOQTJAFGSXVSJECRXBWZFZJFSBMTOMLNUPXFJDUKQOHPAMUUQCOOYYAWHSJDDBMWVGRNZQBBCWLEKGTYTAXOAFIXRLAEMMTYGDPQCIERULVZK");
    msg.attr_type = 225U;
    msg.min.assign("UHNQSLWBRIFNR");
    msg.max.assign("BVNOUWXOAJPPJXZWMVNSKKGHWAVXSRBCHNHKFYWIMCDSWZQYXUJJRETHVGVFGHRGRRECKRZIKNCYILTWSQQZYLRTFBSABIXSLQBPQDZBBEFWUNXEMAQUU");

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
    msg.setTimeStamp(0.038541144717203046);
    msg.setSource(23687U);
    msg.setSourceEntity(87U);
    msg.setDestination(18790U);
    msg.setDestinationEntity(100U);
    msg.name.assign("XHJMEZHEPCEEUIUEZFPMDQUIFYVMNTRSXPYMOIGMGNKMWKNVGTWZIOHJUATBNIOJFCVQOGFVCZZCKIYREPLSBCUHLFDTLORYDVWTYBKKDKUFVWPEXMOJBLWSLSHZR");
    msg.attr_type = 40U;
    msg.min.assign("MROPFSRUBLLCWMPAFVQWDNQWXGTQDTEXFOXNKOIDWZMQFZPASITSJWDWETSQKTHUEIEURXIVBSWLADNMUIJYERUCICPHYTOZZZONJRJGAHRLHDYJEAMFHQNIVLOFCYGPOBUAQNZFRBUXJBLKKDYJYAVTPEKHBQWBWMGSHJSGKXYNGKLDXVMGXM");
    msg.max.assign("APQDSLJXIZTOVFTAOTYUQVJXIRLEUHSTZPZYERPUEJIBXIVZCHSRQDJYARNMGZOJVGCQAKWOIFNZANUSVNGBLBQRWMWKDGMOYSRKKLBGGGUVCMCKPLLVVPIHAEYUOLMSFNTCOBZWWXVGWQMAIJTXDEDKPHFVGPAHCXWSZNRDFCFBLGTITWPCHOQQFQAEBJJAHHENMHNXKXLSDONRYLKRSYKXZCIDPYTHCFUIBWNKE");

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
    msg.setTimeStamp(0.11182229942364041);
    msg.setSource(44530U);
    msg.setSourceEntity(225U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(148U);
    msg.name.assign("FUYXBTRLYPNKIDUUKVPUVVFSPYADRMUDJHGYEMOLGQNZNVCBHAWVDTIRKWHDHTZOEARLZRSJMJWZJGFFHLYLUOVNACLMLVJLKCSRARPVPWIGMQOPBHWTDYHNKFKIMMAQZEBXPJKIASINRCBEZEJPSBSDTTTQXWCFFNJEHJBYDQABWCROQKHMGCPTXOMGPVUFICTXOIY");
    msg.attr_type = 50U;
    msg.min.assign("MKEURKQLEILTCJBTGUHMAPRSJCQMRLKIDEPJLWEBINKAYFRLWSROWZMAQYUOEPBNZYUCHHDLQKAYNOJWMSRHZGDIOCNWZBIOTOPJUFTTBG");
    msg.max.assign("OPMXRXNJEKZYCUNMOUR");

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
    msg.setTimeStamp(0.1493391306613998);
    msg.setSource(39606U);
    msg.setSourceEntity(19U);
    msg.setDestination(23846U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("MZVGBUGQOMKPXSM");
    msg.predicate.assign("ACROTCUPQXXGSUMIMXFUJCMUZGGXDHIHPVKWAVNSKRXHWTLEBTZJKDSMPMJRPTVARAQKYLDFKONLUOLHXNOQZONPJJRDPWIFLVFULOBZVGDFXQAEADQTDBCYONIGIYYQCBVEHMFGWDBYHFVIRTMIVUSZHHLSISGKZQOZEBBMKBN");

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
    msg.setTimeStamp(0.18131528415432596);
    msg.setSource(24176U);
    msg.setSourceEntity(211U);
    msg.setDestination(58136U);
    msg.setDestinationEntity(189U);
    msg.timeline.assign("LRXYXVKYMKCFWUDLSWCCXBBGMNIMMZBWRIFYEKBKDFWVUPHUIVHCEYBTNPLLTNIOEAUQZXYARHHZXZ");
    msg.predicate.assign("WWPXHCDJKOJFNRRXBGEUYMDHJIIPWGGVGVHWRMTDTPPYCDEHEKYBFKWFNBMMVPZHBZAMLFAPVWSGCGQUYXXBQSOHNQPNUTZOETHSXAWONRRFNOLOKUICFRULTPKYCJOOJVCIZZXTZRJNTLPNLFVUBASSCCAQCVPEYAJQTJQYHGTFQVDYSAZKMXDDURTSEFLYHNOULCKUSGKVBIBEXSUQMAORQWBWLN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZPJHNLCFJTMYSLMVOZUGK");
    tmp_msg_0.attr_type = 98U;
    tmp_msg_0.min.assign("CCIAJETTWAGSEDEUKDXQDDYFOXKTBKCPTIZSSHHFRGUCHTCRZMIBIWWZEZZDGTPUOBRKWQIJBULOPNGWRMZMXJJTOXCOCFWHWIKMBSYZYWCDHFYINQURQRPYSHAVEZVUHOKBEMNGYYXPWNXQIKNLNIGJMQSACGAQKAPFNXHOLALUKUJMPNGBJLQWRTAVVJOJSEDMTLOIMLBOSR");
    tmp_msg_0.max.assign("VUCXGLITHWYSCYBKKCPFAHWYPZLIWKIUZRERKNTJLWJWMPWBAOLVQDQNUZNMZOVYCXGDGMPAQBIIMHLTWVZSBS");
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
    msg.setTimeStamp(0.5957668386996505);
    msg.setSource(36935U);
    msg.setSourceEntity(87U);
    msg.setDestination(35370U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("IEFHYWFICDCJKDE");
    msg.predicate.assign("DXVUOPRTNLQJPTFFZUQYDCGMILURPNAPD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QBDCUPSGWVPOVDQRNATZHOKCGDVMPUVRBVUUAKOBHCXJFPWLMAKKVQFHDYFIAESAOFNITOTQCBTXYBDJXGKPNYXJBWRMDMYLASHIIZWEIAXMGLWPDBSESMVJYLEEBRITKXCWJENBMNXFEGUGAZPQZXCCYFRYLWRCDGZU");
    tmp_msg_0.attr_type = 86U;
    tmp_msg_0.min.assign("TPPDNCBHQWBCOKQOWKJIALQJAMIMKGEIINKRXAQUHGWOCTJTWPCECAWIUEPKTLKFQUDODHJRLRVUCUZDULYPJVJSFGJLMSGMGGAXCABZWCSIQKDWYM");
    tmp_msg_0.max.assign("FFJRSZYQONMYOWCTKDJADUOTZCKYBHWVDUUSDXKKQLTARZIQQBLBJMYGYVHHRDGJJLXBUUFMOGQFJREPVEWVRPMDSBENNOPSCZAXMGUPQREPEVZFXQRINPVFGKKXJTMTJHMOWWDBXVLYYHZBRKIUFFSSZLNMRFCEKIHPCDXKIQTZTGGIIJLPBTHEPYNLIGNHEOAOGOEFAHVMWS");
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
    msg.setTimeStamp(0.28498222513339266);
    msg.setSource(34890U);
    msg.setSourceEntity(142U);
    msg.setDestination(13962U);
    msg.setDestinationEntity(210U);
    msg.reactor.assign("CWOOOVGYINCRBKPKCHLXLCVXADWKRZZUWOIJJWCGRCJKIKULCILZZHEFIPNHQPBES");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XVLDIPSQRXDISZYWJBAFJCDZMUSSULTOJKWTWEXGLTMKZTSYHBMQATMZQHWRJMJEFHCUGWGVOLNFVEIGDHASOANYROTAVTNPAYMKAZWHNRXEXQFYNLILQXTZXFMKSDKCIPPWRERIOIKIAPIRVXFSDGPTEBAJNCZSNPPSOCDFUNWMBZQUUHNVVKHCBRIJVDJMQTUKBLYMVZOHUCFOEUHQEAHBPCWDLGPDBJQWOBLYGJGCVYQYEREFRGFNXGU");
    tmp_msg_0.predicate.assign("LNKIVPJZOCYXTIFGNPQXUNTBWEBVSYJFKIIRNNLAWIVYCGTPSTRJBZBOWYUKXEZCWYHQNDJMMEOJHXTYPWOPTQWSFYGIBAJHGCMARPHGXCXVZO");
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
    msg.setTimeStamp(0.8736566184250046);
    msg.setSource(61425U);
    msg.setSourceEntity(45U);
    msg.setDestination(14840U);
    msg.setDestinationEntity(139U);
    msg.reactor.assign("HTLJOPMPTERFYBREHVRIZGGKFJOCYVFAYVRZUSQODPHRBIDGTCRPCPOIGAITNIXVWJKURMJJSWPJLQJPZBBMDLZXBLEQNDFOUXPEYHWJSIVYDQHVANYTMHGASWTSFMYFWLJYEOWWLCKOIQQENGKZHHWKMHUMXLXEPGMBTLDFMACDOLTACZSNGNRUPXQZEHQSBDTWIAFZKUDECSUIDKUKXFJBAZUVILYFROOWAGANCSRNNYNQK");

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
    msg.setTimeStamp(0.5654612407814891);
    msg.setSource(58692U);
    msg.setSourceEntity(28U);
    msg.setDestination(24835U);
    msg.setDestinationEntity(23U);
    msg.reactor.assign("ZGXQHLAVSVTJONJZXFGRVKRJUFDQUYWBQEACMNAZNITHUKWLMWBYRXQTADOZVTURMOFYXPKSSZJHQAFMKD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QRRZBVPBJWEGJDMWXVJNOGHFZMHHRAJTVRHDGPIDGJZOHWCAKHVRYKWYQYLBPDZDFQECZTMTFCYSDNFQUTAHSAJSXPKYQIOHKIZVNENALHMUELWJFTWAEGOESVAIXJLSIGSWDYZXLTIOFUUXEYMVKIKFMFBWSOSRTZKDJOCLOXNLSMRK");
    tmp_msg_0.predicate.assign("ORRJXEUPFSOFZQBDMTZAGFILWIQEIQTMVCYKIWARHLEQMPOQCHDRQMVQSLFTZGHMBULSCGFOULAGZORIUUMWYZPMFMRSKCYDJVCEHBZNKEOWDTDGCDN");
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
    msg.setTimeStamp(0.4255619219552711);
    msg.setSource(56064U);
    msg.setSourceEntity(118U);
    msg.setDestination(1724U);
    msg.setDestinationEntity(189U);
    msg.topic.assign("XRYCOERJEJ");
    msg.data.assign("ABCGQFUUTJFSOENPUYYIESQXGMDNZKDLKRLVVTMONPVRFLWCHISITGEKMYSLDZKXBT");

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
    msg.setTimeStamp(0.42922406969214344);
    msg.setSource(4255U);
    msg.setSourceEntity(120U);
    msg.setDestination(21701U);
    msg.setDestinationEntity(87U);
    msg.topic.assign("TNDFIEHYTHJJDYSSRFBVOTSCIRHLFKMJMNYYMKWAUVREKWDMGGVHDYKTLBXIYPOWEAQWJHWYEGAANZKBETJQFPESNUOCRHFSJWQBLNCZJJXISKLMGQDZXJZCUWPSOUZCJPZ");
    msg.data.assign("HJXVRAKDKUXVXUVOAEVDBMCBNCMTSYFHDITLRPHQPWXZODFUJYXIXEDFHYZPKYMAESVKQQTYTXQUYRVPRFRLNJYUDDOTYORTTKNLSIOBZCCLWGLXKPILCJUKJMPGNZKGEGIOFPWHGQAAGSZOFNZMMGHCAFBLCEQFBQAVQSFWNESC");

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
    msg.setTimeStamp(0.3328987007217781);
    msg.setSource(54857U);
    msg.setSourceEntity(189U);
    msg.setDestination(18110U);
    msg.setDestinationEntity(70U);
    msg.topic.assign("PUACOEAGSVDLXRFFZYTJNQFIGRGEZBAISRUTAERBFGPZCBQCRFSMYTVLRUOSGQNHVJHPOLWSNWPGDZEUFDNKHWKYPKTAGWVXEFZOJMOWIIDXYBLAPZTNGDVLWKXXUNJSSZDEXXIIBUHYHHAQSRJLOMXDKOMPSCJQUFICPUJOJTDCBSXTEWMKBMTDKMAEYKKQVJQTQVZUXAHVY");
    msg.data.assign("NGRWMDSEFKTOHTJAATLUPMQWOZPMRXUNVGSRNWHCMCISPLXCJX");

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
    msg.setTimeStamp(0.7788430722059734);
    msg.setSource(20281U);
    msg.setSourceEntity(218U);
    msg.setDestination(48461U);
    msg.setDestinationEntity(103U);
    msg.frameid = 92U;
    const signed char tmp_msg_0[] = {37, -61, 29, -9, 84, 20, 113, 49, 4, 121, 57, 91, 65, -65, 8, 20, -65, -128, -113, -101, 29, -39, 63, 55, 122, -51, -21, 111, -103, -67, 117, 116, -38, -79, -78, 113, 84, -91, -70, 64, 126, -108, 64, 83, 59, 93, -75, -114, -53, -73, -65, -54, -87, 69, -46, 2, -37, -36, 72, 59, 48, 98, 19, 38, 7, -52, 103, 14, 97, -86, 108, 29, 0, 54, 101, 95, -40, 43, -54, 43, -92, -22, -93, 23, 66, -125, 27, -52, 121, -111, 27, 46, 71, 2, 59, 65, 103, 22, 71, -41, -65, -120, -99, 55, -55, -104, -109, 49, 32, -42, -79, -74, -28, 18, 104, 11, -126, -81, 97, -82, -71, 31, 74, 123, -61, 110, -15, -1};
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
    msg.setTimeStamp(0.946110559988911);
    msg.setSource(60475U);
    msg.setSourceEntity(192U);
    msg.setDestination(4701U);
    msg.setDestinationEntity(118U);
    msg.frameid = 8U;
    const signed char tmp_msg_0[] = {-81, -97, 49, -37, 5, 17, -107, -65, -66, -104, -26, 116, -36, 45, 14, 9, 84, -38, 111, -74, 9, 97, -54, -31, -102, -40, -78, 64, 107, -45, -19, -94, 109, 116, -15, -74, 50, -47, -25, -96, -23, -65, 6, 59, 34, -88, -32, 117, -30, -51, 120, 11, -61, 125, 35, 5, 122, -54, -124, -82, -88, -42, -11, -103, 35, 123, 38, 75, -57, -102, -87, 63, 97, -49};
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
    msg.setTimeStamp(0.3310527154619728);
    msg.setSource(11618U);
    msg.setSourceEntity(249U);
    msg.setDestination(6586U);
    msg.setDestinationEntity(186U);
    msg.frameid = 16U;
    const signed char tmp_msg_0[] = {-8, 104, -122, -87, 40, 35, 17, -60, -7, -76, 87, -112, 35, 113, 109, 47, 7, -109, -36, 17, 44, 47, -119, 70, -65, 122, -64, 77, -95, 62, 38, -108, -76, -38, 30, -22, -91, 27, 13, -3, -106, -29, -39, -60, 15, 62, 53, 124, -23, 93, -51, 66, 56, 37, -30, -77, -31, 0, 124, -13, 55, 35, 115, -70, -126, 82, 80, -17, -46, 27, 75, -92, 1, 59, 67, 53, 74, -6, -56, 122, 117, -107, 89, 107, -10, -124, -101, 91, -47, -65, 3, 30, -84, 62, 13, -109, -44, -84, -84, -56, -19, 17, -82, -7, -29, -6, 60, 75, 97, -107, 60, -38, -122, 53, -107, -57, -43, 86, 84, 39, 2, -10, 58, -108, -69, 31, -99, 103, 117, 15, -46, -92, -55, 31, -30, 51, -45, -61, 11, 72, -70, -74, 6, -58, -45, 62, -92, -127, -15, -119, -23, 14, 33, -1, -87, -21, 116, 31, 123, -15, -45, -26, -27, 5, -83, 67, 2, -41, -46, -33, -94, -65, 51, 3, -47, -93, 16, -61, 65, 112, 63, 58, -19, -23, 31, -61, 55, -46, -42, -52, 69, 23, -83, 120, 75, 61, -126, 43, -105, 77, 73, -5, 98, -79, -108, 27, 36, 94, -25, -61, 10, -79, 25, -108, -22, -63, 109, 115, -81, -14, 90, 99, 54, 102, 17, 26, 88, -76, -123, 107};
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
    msg.setTimeStamp(0.37219897960924797);
    msg.setSource(22387U);
    msg.setSourceEntity(152U);
    msg.setDestination(36891U);
    msg.setDestinationEntity(78U);
    msg.fps = 238U;
    msg.quality = 155U;
    msg.reps = 132U;
    msg.tsize = 34U;

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
    msg.setTimeStamp(0.32371354542339914);
    msg.setSource(58187U);
    msg.setSourceEntity(197U);
    msg.setDestination(28877U);
    msg.setDestinationEntity(170U);
    msg.fps = 250U;
    msg.quality = 84U;
    msg.reps = 41U;
    msg.tsize = 36U;

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
    msg.setTimeStamp(0.1002929548963909);
    msg.setSource(41986U);
    msg.setSourceEntity(234U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(94U);
    msg.fps = 44U;
    msg.quality = 249U;
    msg.reps = 48U;
    msg.tsize = 100U;

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
    msg.setTimeStamp(0.771288706611479);
    msg.setSource(13666U);
    msg.setSourceEntity(118U);
    msg.setDestination(57695U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.33278172778490855;
    msg.lon = 0.1496871612245455;
    msg.depth = 45U;
    msg.speed = 0.06692606242533872;
    msg.psi = 0.32062199422599436;

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
    msg.setTimeStamp(0.18929969764571875);
    msg.setSource(6701U);
    msg.setSourceEntity(22U);
    msg.setDestination(32728U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.03815880243245329;
    msg.lon = 0.14287498219083827;
    msg.depth = 216U;
    msg.speed = 0.15987472060963448;
    msg.psi = 0.7245003481514654;

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
    msg.setTimeStamp(0.8563458112930957);
    msg.setSource(39673U);
    msg.setSourceEntity(79U);
    msg.setDestination(55371U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.15000342030983005;
    msg.lon = 0.9008126359605769;
    msg.depth = 41U;
    msg.speed = 0.3646159150750019;
    msg.psi = 0.7248655584173912;

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
    msg.setTimeStamp(0.5683575999899467);
    msg.setSource(7965U);
    msg.setSourceEntity(213U);
    msg.setDestination(21092U);
    msg.setDestinationEntity(187U);
    msg.label.assign("JVMIMVFXQGXSRTCICYAXAOCIPZJOJQYRLYQTRMIPSMEEPKMJPCXBOLOLLMKAKTJCNVLUGEATBUGRBNXLYFADVEPRCGPBMBKUIXHGVJZWWAFDMXRQJTFNSBYVCZQQWIBDVYKMSUJDDETAJEHNFORZGENPGBBDHZFZRNCITWDNCHKZLDPQLHXUHFSUYYSTOSHEOZAWIZUFWATFWQHNCVKWVIFGISMROEKPDHUKWESGUHSVJPL");
    msg.lat = 0.2951955665378386;
    msg.lon = 0.15859437030509593;
    msg.z = 0.8229458734860747;
    msg.z_units = 184U;
    msg.cog = 0.24529808460642888;
    msg.sog = 0.6949756900914453;

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
    msg.setTimeStamp(0.5547612925646853);
    msg.setSource(48895U);
    msg.setSourceEntity(124U);
    msg.setDestination(53187U);
    msg.setDestinationEntity(14U);
    msg.label.assign("TMTQGFWOILCPISPWIBZVZTAOWNRUODWJGKKOBADDRANMQAZWQPTHQYYQGHSRZSRXAZYQLOGAWYJSPJQVEEXIONUICQPNGDFXGALUCKXUWIVMFYVNESLZFDPWHIYDTXJXAUAWXZJJFUEVKLKEBJYOHVUWKMICQKRJFLNBRN");
    msg.lat = 0.6912874516310378;
    msg.lon = 0.4564550454233618;
    msg.z = 0.4323937145184621;
    msg.z_units = 142U;
    msg.cog = 0.16088122131907634;
    msg.sog = 0.3328360913939128;

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
    msg.setTimeStamp(0.6566003009441961);
    msg.setSource(34667U);
    msg.setSourceEntity(38U);
    msg.setDestination(65091U);
    msg.setDestinationEntity(68U);
    msg.label.assign("VWKCJHITTZOFRVPUOIGBXGALURDBAMZ");
    msg.lat = 0.8140141225443057;
    msg.lon = 0.5978918093972684;
    msg.z = 0.1972436291628804;
    msg.z_units = 162U;
    msg.cog = 0.4747952842419185;
    msg.sog = 0.9828619095907547;

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
    msg.setTimeStamp(0.0017818115458538841);
    msg.setSource(55843U);
    msg.setSourceEntity(161U);
    msg.setDestination(56594U);
    msg.setDestinationEntity(204U);
    msg.name.assign("UDSDSGEJWYVOIMLJPVCSFGRLTBXWTUJNFLVHLGTZSKOHQQIFAPISVWI");
    msg.value.assign("YZNGIECQQMWIXISHPTRDPHTTOCBNHKEHBXDKIBUCFTJWXAKYPRXQLGRAOXWVIDGUNALIQEEZLUSZWJFADGFI");

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
    msg.setTimeStamp(0.7038476632140769);
    msg.setSource(3474U);
    msg.setSourceEntity(249U);
    msg.setDestination(14423U);
    msg.setDestinationEntity(154U);
    msg.name.assign("IGJMTKKOBBJDERAYDYUYYHUDAPLTWKAVCBFDOCVEKMERWGYVWRNPWFXHPRSXHCENCNJVYLUQEQDOYSACIKXCTTORHUPSGFFNAZFADLLMZVMJTVMGTSYMMHMWLNIOBZNWZQUOPEGGTPDCNLKEXIXSEBZUXGESBVTSXAJAP");
    msg.value.assign("QWMWJWJGEQKNOILIKCCGONDPCXMUDZVRDFYVOHHEJQJNPGXRLSKCGNNLXPYBYIYASALBEWTEQLWVUBLYLBHMVGXZFNKBDHOGVZWAACPCHKVDWFHGUCVBRGIPFSZZVSBCQIKZRISIFXZNDARYFLEJBMEXWOUZFTUTQDRTZOQDUOXPKURPJOYHBDAOSCSEJMSGPFASTMLITXLAZWNFTMJTHVOEDYNUTQQEPMEAIFUHHQXSXWMUKGKAYI");

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
    msg.setTimeStamp(0.657572338823569);
    msg.setSource(42848U);
    msg.setSourceEntity(248U);
    msg.setDestination(40402U);
    msg.setDestinationEntity(149U);
    msg.name.assign("HBXZYNBNQHMFFIZKLNEGKKWOVWVUETZLQQIXADOGEXSZTSFPPAPGLBOJGOWBEGRUCBAIUIHNWAJORPPLZRYVKDAEDYKUPDQDPIGOMQXMNFPCVRONJFHWTBVUCYERCFCKGSLTRYEAMCXMKJXEKCCHTXOPQHIIXMMMLFYAKKALTVNZMRJHYPYAAGTLEJRQBCQJDDSJZGNOZLYFSIWEDSLVQHCJXBHWITNBHDWZUSGSBRUTFVMQOXDZNTURSWUWIV");
    msg.value.assign("LONNYIDRORVYLPJWZDMCQEMMGOFUCYNUBPGHPXQGAZDQXRVKKNJ");

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
    msg.setTimeStamp(0.22577859812997203);
    msg.setSource(60577U);
    msg.setSourceEntity(25U);
    msg.setDestination(17421U);
    msg.setDestinationEntity(171U);
    msg.name.assign("PFAAJZYTUKODFVTZWRGAQHPLEKCIQVCWUHUTBSBPKSJECYUIJYY");

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
    msg.setTimeStamp(0.5905602966671811);
    msg.setSource(52802U);
    msg.setSourceEntity(104U);
    msg.setDestination(9209U);
    msg.setDestinationEntity(70U);
    msg.name.assign("WUBWOUNVZRYAEARNTJYCWGZMVGQZGPXKIACXNPFRDQNCVFLGWKPFTEMLJQKDFEDFZUQPMHYRXGYIJCMKCWRQMHPMFTFCQLEWOXHQHGOCJLBQBUIDTTGWYUCPBHYPWSUNDPKVNRHZOKQREKCMAGVAMBJNBXQYXIBIIYOUREBSVLELUHNEGZIAFGSNH");

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
    msg.setTimeStamp(0.11455644459068526);
    msg.setSource(58734U);
    msg.setSourceEntity(86U);
    msg.setDestination(9686U);
    msg.setDestinationEntity(171U);
    msg.name.assign("ZLPAAQVYILYMSYKJFQIKWHMKLOZXVFGAXFWBBRCQWENWZRXTZHKMVUJITGXHRTLBFILBUWZDQEXAFEJZZNHTOBUGBOKVMQDUBUIXGAYNELDXKHQOOWYSBLYSMCIJCYPINNIKRSDVSCLUHEGQDJCSASJORJRPZCNECPARAKLGMWPKGSDVWMTUVFPFHYLMNWFTIJAFNZUEYMCPGUNOOPU");

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
    msg.setTimeStamp(0.10703999093241323);
    msg.setSource(50840U);
    msg.setSourceEntity(182U);
    msg.setDestination(881U);
    msg.setDestinationEntity(50U);
    msg.name.assign("IAYQHUOJJHJRQHIUYWZYFUTFENXKRMOJSVEFVOUTPRTWQTZTDVKAZLWFMJBKZWCOXLHPFVLZMQGVXCMEGADRUDUYRTTSLIDZJCNUROXLSIJXSH");
    msg.visibility.assign("IYEPDOQUEGHBOGEOWASKPINJWTSNWLSJASLXHDXIOYWVKGFHJCUIEJHRUIXARRFBODJZOQTQHFVLVHUSCEIYIPCJGPXTQCWMM");
    msg.scope.assign("LNWHKYXIMRENRPGNFSCDQKAEAOXXJTUZKLNQEPBBFAPPZDRTSUFQAGRZSQYTNCZCTMSQODIIZVPMGMNIRUYUWMXGXX");

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
    msg.setTimeStamp(0.6542962157124805);
    msg.setSource(7972U);
    msg.setSourceEntity(72U);
    msg.setDestination(64254U);
    msg.setDestinationEntity(141U);
    msg.name.assign("MTFDDPRWSQAPLCAOQKYMZLKXOUMRJTPBVOIXCHWGPCQCXYODHHHKOTFLCJGWVSMAN");
    msg.visibility.assign("TIOOTUXWGYNXJJKLWYZUKJEAWHLYGNPRDHLQXOIXMXAXZFNDJDHRYFIMGLAOELQGLZPEKLDHRSNLUWVDFLVABJYHEYUGPEWMNHTIBCTERQPPCJCKEWZQTUWJNSZSXVPCZHOIBZQGBACXPGTBVVVAYCFJHKVDK");
    msg.scope.assign("FDZQZLVRTBAJYYSMJEFDUVUGBZHVXTGKRWCNEFMKASSGLOATZCMSGCSOUALCTBIJBIZCPYKAPXMYJWHQWMKQYHPOICCUJAHBLDWFBJIRMEDHDRDVIMVICXXMCOMKZUXWEQWZFYMKPORXXCGRXLFGLYKYASAJZOJPPVUBOHWWDGVQUHN");

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
    msg.setTimeStamp(0.6806328853518319);
    msg.setSource(65461U);
    msg.setSourceEntity(238U);
    msg.setDestination(62527U);
    msg.setDestinationEntity(31U);
    msg.name.assign("YKWXNNSLZUIOZAWPTVRLCNJKKUTFYEJSPBUQTJLRVNFEAJIACAGGWUVTIQNGQBYDQVELCCXHPQUOAIOFPLNAVHRZCMDCPXRPPVYEWCGLSKIMFZKXBSZHTTWUBOIBXGBSPTOMDEMCNHRJSFHOKJACJYHNFMSBHUANJYDOULWTIGWXVZOMDAXDGFVNDAMTQKLMFXPBGGKHKRFBSHED");
    msg.visibility.assign("TBLZABRQWMVKGTKNQCKUHDIQSKCLQSTJGQFWYWONBAMYQYWBFSETTEOXATOVXLKWMLIXKDIKOPQRNEIAUGEBHDJBAI");
    msg.scope.assign("KJMHDXYCWNGKXROHSFQQRSMXOTASZGCTJIQGJDEWPNKEDCVIBADSPZFXNEMPXOLYPQPFTKINHBWIXAHATFOPINYRLANCBWEYUIUFXLQAREBZBOVMZRTANFLTJTVRWEUBZMJXLDCBTKWDYVMYWPHOVZSEEDIRAYMQQLDKUGLXSUWYBJQBAIOLRFVICQY");

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
    msg.setTimeStamp(0.7322007464749732);
    msg.setSource(47813U);
    msg.setSourceEntity(8U);
    msg.setDestination(28496U);
    msg.setDestinationEntity(119U);
    msg.name.assign("EPMSGCBEKBZXBKUDSGSJKYQCZVCCJUDHJHMIXRTAOARPAZMADYSMUVVQCFATFJRVZCBSAOIZHSYGIXOHGKJDOCPKRJOUBJYWKEAARPGUQDCWIVYTRONHHOVRNGYHHWLDLTPGVOLZMUNFABLQ");

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
    msg.setTimeStamp(0.7412985107558704);
    msg.setSource(11419U);
    msg.setSourceEntity(32U);
    msg.setDestination(56265U);
    msg.setDestinationEntity(94U);
    msg.name.assign("DSNOEAPLCPQGIJWBRLISDZYVDKLFOOGZSSXVVSWXJMWVHPOBTDYFWRHWCHCUMCUDROIMEGMC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MWMXZEQAPJQXARBUIJUXKUMRRTUFGYHXJGKMXSKYBQHFLCWZOFTIRHMEQYDCEWNXTGDVJGIHPUNYHNZFAVPGQYARSSSQFZYFXZDXCNKFUPLSZNBFTCGEEIWZLYOBWJPFVWJODBDLNZDGVHQADXEAOELHPBETGATRBECR");
    tmp_msg_0.value.assign("XTGVNSNQIAXJJTFTNNSXEP");
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
    msg.setTimeStamp(0.737504550964805);
    msg.setSource(8495U);
    msg.setSourceEntity(8U);
    msg.setDestination(25939U);
    msg.setDestinationEntity(216U);
    msg.name.assign("WCABQBMEQDOUPCYWMYJAITBWIDXVCPGWPALRUKLGOPTNVAMDMCRFWYZUNQZZKIUKZWSRZAHTVFRPAUYGAXILQCFREVJZLKBCHINOCSNTZGGLMTCFYGHYOVGSETBOFHSWVDRHGLVZHMYTNKFISQNJUGXCOKHOYWSFTXMDMEJXSVZPJIWTISDFSOLKBQHUYIVDJQRWFSNDZRKLTPGOUOBMLREAXUJXKLEAEFJJXD");

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
    msg.setTimeStamp(0.17937572191762519);
    msg.setSource(45536U);
    msg.setSourceEntity(29U);
    msg.setDestination(49023U);
    msg.setDestinationEntity(69U);
    msg.name.assign("LTQFSRLHCSNSOWUVSHPRVKMGNGVWADKQMNKIZGBCESOHROTGFCIUGBFXPIBQUVBAZFPFZZHUBEVUQERBJOOIYVGLZOTBSJQYVIWANKTNGJMPTJENXWMQDSHXURWJLJKLKTQZYRSDQGYHKJMFAUNICRYAWZMYDYWCXEDXUFDBVLPOAXXEGAHCWCIPIJJPFXZALHVRSYMKWMBOQKXOPMNDIADCPLMARYWSTPGCEHUDIEB");

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
    msg.setTimeStamp(0.8540801735461421);
    msg.setSource(51591U);
    msg.setSourceEntity(27U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(13U);
    msg.name.assign("WVCULMPEIKLUSNSZKRPNAVYLFSIOPPQTHBWZOSHYHS");

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
    msg.setTimeStamp(0.8562064861144608);
    msg.setSource(10232U);
    msg.setSourceEntity(145U);
    msg.setDestination(31643U);
    msg.setDestinationEntity(208U);
    msg.name.assign("NGINQNUPDGCMPEBZYZRRHTYALZEVLHRQQIJODLOFPUCBSDMJLIFWQIHSDJLRVXWAYHJFHIZXZWYXJIVZUVTSBVRNNMFPZVXLQRIZDMXQWMAGEWTQHCGTARZGQRUXLMPDEOKGGSUJKYXSFNJEWVVEHFSMIGCKNYWIHSLTUXPACKPE");

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
    msg.setTimeStamp(0.0948643345894854);
    msg.setSource(13625U);
    msg.setSourceEntity(46U);
    msg.setDestination(26804U);
    msg.setDestinationEntity(129U);
    msg.timeout = 3081157998U;

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
    msg.setTimeStamp(0.7260720481411127);
    msg.setSource(20010U);
    msg.setSourceEntity(63U);
    msg.setDestination(35740U);
    msg.setDestinationEntity(178U);
    msg.timeout = 1228055577U;

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
    msg.setTimeStamp(0.6032799296160022);
    msg.setSource(26190U);
    msg.setSourceEntity(154U);
    msg.setDestination(45916U);
    msg.setDestinationEntity(136U);
    msg.timeout = 1080689038U;

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
    msg.setTimeStamp(0.9436180981793366);
    msg.setSource(52462U);
    msg.setSourceEntity(77U);
    msg.setDestination(54982U);
    msg.setDestinationEntity(8U);
    msg.sessid = 3422110312U;

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
    msg.setTimeStamp(0.8810735100332108);
    msg.setSource(33269U);
    msg.setSourceEntity(221U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(82U);
    msg.sessid = 1982781894U;

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
    msg.setTimeStamp(0.4686067207364035);
    msg.setSource(59419U);
    msg.setSourceEntity(139U);
    msg.setDestination(9217U);
    msg.setDestinationEntity(208U);
    msg.sessid = 1681427024U;

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
    msg.setTimeStamp(0.8287487441133997);
    msg.setSource(5447U);
    msg.setSourceEntity(116U);
    msg.setDestination(27115U);
    msg.setDestinationEntity(251U);
    msg.sessid = 2876477101U;
    msg.messages.assign("SMIQIUGHRTCXGKUOFOHGZTPPBZRKTRBEIRGYSVDBHRDRXVJZHVPWVPGTJNWXSBVOLEEDECCKJQNLFTZLUVBQZAXCJMPGEQUEWYVDNDDSHQJTOUCAKOFGMPIJLAJTAVOHRZDQKHNIBGBESAOYTASDXTPMOMNVNJMYLOHFIHYZBGIWASU");

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
    msg.setTimeStamp(0.14363799494476193);
    msg.setSource(54832U);
    msg.setSourceEntity(127U);
    msg.setDestination(22456U);
    msg.setDestinationEntity(28U);
    msg.sessid = 1368276190U;
    msg.messages.assign("BIJKAIFSUQZOIZEWVIAIYUJORAQQBOMOOPOIPCJNJHUFZFYISLGAJVRLDDHXKYVNRLFZEOREWCHTEQECHKMYPTLSIVXMHQTTYASPMDOVYNMLHQDGAUAULJDLGTWXKBEFZBYKNPRFRSUZWRNDQ");

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
    msg.setTimeStamp(0.8850406465081615);
    msg.setSource(36069U);
    msg.setSourceEntity(91U);
    msg.setDestination(64026U);
    msg.setDestinationEntity(32U);
    msg.sessid = 4127298650U;
    msg.messages.assign("JSHZRFQXUFZGMXGJTOYXBWKTPCYUOKKHDJLLDNOXOOYQMRSDMEDWGFDACK");

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
    msg.setTimeStamp(0.3224439412140986);
    msg.setSource(43051U);
    msg.setSourceEntity(204U);
    msg.setDestination(26271U);
    msg.setDestinationEntity(46U);
    msg.sessid = 2446793801U;

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
    msg.setTimeStamp(0.2713510660356444);
    msg.setSource(9289U);
    msg.setSourceEntity(73U);
    msg.setDestination(48019U);
    msg.setDestinationEntity(70U);
    msg.sessid = 1106835653U;

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
    msg.setTimeStamp(0.8650020407966331);
    msg.setSource(43541U);
    msg.setSourceEntity(128U);
    msg.setDestination(13426U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3242904310U;

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
    msg.setTimeStamp(0.6354110642844467);
    msg.setSource(34310U);
    msg.setSourceEntity(32U);
    msg.setDestination(22345U);
    msg.setDestinationEntity(241U);
    msg.sessid = 1476297165U;
    msg.status = 124U;

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
    msg.setTimeStamp(0.674758391709232);
    msg.setSource(53250U);
    msg.setSourceEntity(71U);
    msg.setDestination(51629U);
    msg.setDestinationEntity(14U);
    msg.sessid = 3557150384U;
    msg.status = 205U;

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
    msg.setTimeStamp(0.5917150206398418);
    msg.setSource(2635U);
    msg.setSourceEntity(254U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(129U);
    msg.sessid = 449746533U;
    msg.status = 119U;

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
    msg.setTimeStamp(0.1275386429719353);
    msg.setSource(18721U);
    msg.setSourceEntity(195U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(15U);
    msg.name.assign("EXVVHOYNQVDZEWSHLQVLIJGGMODHZKLBLXAUZCYTMIKJTRTBJPQUBSISIQGBFFVSNMZXNDCXITYXMJCADJSESEVZPQMSFGFHRGUHFBDUPFHDAOYXJUHLBBWRENOPUYNRGKPLMUOYHJLQR");

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
    msg.setTimeStamp(0.7770897012890047);
    msg.setSource(63908U);
    msg.setSourceEntity(189U);
    msg.setDestination(57673U);
    msg.setDestinationEntity(16U);
    msg.name.assign("NKLNTWECHMBCFFISOPETXIEGAVSSPGHBCJFNKCBVCFMYDNHLGLHTEYFZYJACALRRJDKPZMZAXAWOXBXAXEYAYRKOESQHPMPKPBTMIDQHZBOODUPODIMTGFRXDWBLIXJREERTNOAOIBSNNGMGTYUULFUBJMKWHJKWGHOCPJPGVSQIRJLKWYXDZZSSCLTURUVVQQZFIVQHQUWOWJBVCGAVKFTHQLUVZQZX");

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
    msg.setTimeStamp(0.9409851785336119);
    msg.setSource(13471U);
    msg.setSourceEntity(50U);
    msg.setDestination(54441U);
    msg.setDestinationEntity(191U);
    msg.name.assign("VQYHGYLPEOPPKSSWUOLNJFDYREPWCVLOJLHCYWFWXWGYPIMLSQTADYAURXTDAOBUGPDDUAEUIIZPF");

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
    msg.setTimeStamp(0.4805960785517015);
    msg.setSource(63204U);
    msg.setSourceEntity(215U);
    msg.setDestination(61811U);
    msg.setDestinationEntity(52U);
    msg.name.assign("FTKJBHCQPWCPKPKXHPPRWWDLMHNTGRYBXGACZQKBEXDVMANMVDRMQJYUYXJABPXFGIWIEOSIVQSHJTUJMOCCHZCCELZMEPBDISAOOUWIDUVKAPQTMLGCISVZWTIZLVUSLDIEFWYTDKMODYGSFZNJHSORKZZVJGWNPGARJETKLHTLNUZYQS");

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
    msg.setTimeStamp(0.690243557913057);
    msg.setSource(46903U);
    msg.setSourceEntity(236U);
    msg.setDestination(39811U);
    msg.setDestinationEntity(15U);
    msg.name.assign("FEKCCELMJAVSCFGGCUPWQHNWAAMDXQGPIOPEEXDGYDHNKUZAQZLVXFRRLBIJLSIUAZZQNTZGLCVUBIPLAJTIXKOCAQFVSJWGFBYYNBFOVYJQDONWRLGKIJHKHFIKQBNTEYWUHVVZEBQUZOTCDRMSIOAEYRTMZHMNSBUNDFRXCBDKNZTDWCZDKYGEXSCKUAQTWVXJPQJLGNWVOBPEMHXRTBYOPSEVFMMRHJGOXDSSHRYPYIPOWKMI");

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
    msg.setTimeStamp(0.31634854731827156);
    msg.setSource(57570U);
    msg.setSourceEntity(42U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(27U);
    msg.name.assign("SRULRDEVHXDPZGLBHJOILUZMFKOERRMEAJSZTTMJOJQGMBYDNGTHRCHTZOXDJQPJDOLOFJFKLENBWANKY");

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
    msg.setTimeStamp(0.5574304006576147);
    msg.setSource(8943U);
    msg.setSourceEntity(27U);
    msg.setDestination(45078U);
    msg.setDestinationEntity(121U);
    msg.type = 132U;
    msg.error.assign("XXQGPUQYTRHRJADEPZQRJIXBSBIEDHGVMFTVDYFHDYSVRFYIBWMMNOYDMSPFLZYLTRWNYVFAIUWUNQUZDQZHQQVQICAXMCBBZTXKYLISVNHWOJUTXJOCFHSGATWEWBPTWFMRBSTPLLHLELDPYE");

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
    msg.setTimeStamp(0.38574603722451806);
    msg.setSource(25289U);
    msg.setSourceEntity(233U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(25U);
    msg.type = 242U;
    msg.error.assign("WQVUHAKBWNYMNIRVWZJKLQBTQPGTMWEWSMRWWCTCFXPDJGBUVMADYBMIAIVELUZRRZKUJGCPOCFLYKTSTXUOZVGRUDLDNYIPOXQFKQCSMPTWKCNEAXKZAAROADNJIGMONDGCOMVBNTHMXVQODHKCEITFZKILSQGLLGSQFJFZDYLNHPCJAYHFIHYLFXWQZYNEZOJZACURBXSVPBGUE");

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
    msg.setTimeStamp(0.3255415927534987);
    msg.setSource(30603U);
    msg.setSourceEntity(121U);
    msg.setDestination(39078U);
    msg.setDestinationEntity(82U);
    msg.type = 241U;
    msg.error.assign("MBFQPFXHSVNUQUYBNCQPXVRWCMPGEKBYUXMKXTJAPRHOFVTLSEOCOIIRYVCKJQATGIPULZTAFZSUWCVAYLJPDNJMNUBJSGYQNVQKFITOUABZOGLDISGLFMLTOAZRPGAAJJKODZKLVTWWXLMOSFZEYEWXWQXHUFEKDGENBUDDNLROQCZYHKZLJDZYSJECRYMUHSRHEVRRESKTCABXPBINHHIHV");

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
    msg.setTimeStamp(0.06721793951920152);
    msg.setSource(1145U);
    msg.setSourceEntity(203U);
    msg.setDestination(12990U);
    msg.setDestinationEntity(102U);
    msg.seq = 7382U;
    msg.sys_dst.assign("LVYTULIEVEQDZJACFWWMYUBXORSBZTBYNZGPNCJSXTXUVKFMAZPKGDAHKEWMJU");
    msg.flags = 247U;
    const signed char tmp_msg_0[] = {46, -6, -41, -12, 90, 12, 15, 21, -68, 41, -21, 24, -12, 53, -8, -99, -77, -35, -79, 106, -42, 57, -22, -115, 36, 8, 44, 21, 22, -97, 113, -81, 61, 9, 108, 36, -51, 6, -82, -13, -17, 72, -14, 29, 105, 3, 108, 33, 33, 113, -35, -6, 22, -32, 117, -8, 70, 17, 60, -17, -124};
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
    msg.setTimeStamp(0.6495100365027223);
    msg.setSource(41107U);
    msg.setSourceEntity(90U);
    msg.setDestination(42476U);
    msg.setDestinationEntity(175U);
    msg.seq = 49853U;
    msg.sys_dst.assign("ONVSGGUFAMCMUHXIFKPUDYNWQPVDIRSKLZBMOBWUKGQQOAMRSCCEJOHLBIHRSPAHIVDRH");
    msg.flags = 26U;
    const signed char tmp_msg_0[] = {77, 103, -84, 65, 37, -22, -94, -69, -5, -69, -112, -98, 38, 85, 70, 73, -81, -113, -108, 43, 56, -13, 52, -64, 84, -79, 38, 106, 106, -66, -80, 52, 107, -60, -56, -55, -26, -65, 18, 119, 26, 36, -128, -101, -4, 41, 64, -47, -47, -17, -92, 37, 27, -26, -74, -2, 46, -123, 72, 34, -48, 50, -94, 36, -16, -122, 36, -75, 80, 119, -113, -6, -112, 97, -34, -29, -53, 24, 3, 34, 9, 106, 77, 124, 50, -128, -10, 38, -114, 76, 4, 35, 120, -91, -46, -52, -106, 54, 34, 63, -10, -123, 5, -106, 55, -108, -6, -69, 87, 106, 43, 54, -88, -112, 39, -124, -57, 96, 57, -72, -125, -90, -63, 117, 1, -88, -47, 109, 11, 4, -38, -8, -41, 89, 107, -9, 70, -82, 64, -109, 61, 110, 33, -79, -51, -85, 28, 104, -39, 28, -52, 58, -84, -96, 103, -51, 80, -44, -8, 34, 118, -75, 84, 9, 94, -94, -7, -124, 99, 37, -119, -53, -89, -63, 26, -52, 35, -23, -2, -10, -97, -123, 65, 30, -85, 77, 89, 106, 11, -70, -35, 94, 103, -120, 107, 66, 90, 10, 8, 121, -77, -120, 94, -77, -123, -4, -80, 29, 41, 32, -21, -58, -76, 115, 9, -85, -92, -91, -115, 37, 27, -80, 84, 92, -62, -53, -61, -32, 103, 110, -69, -99, 114, -74, -86};
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
    msg.setTimeStamp(0.7102644842837349);
    msg.setSource(41971U);
    msg.setSourceEntity(228U);
    msg.setDestination(63932U);
    msg.setDestinationEntity(241U);
    msg.seq = 22001U;
    msg.sys_dst.assign("SIRHHXCMBJCHDZOQMLKAALGQTYSGCXGHWOEOJZLVYHAFEMPOKVVSFFKIIQYDAXJNSRUTDWWQSHUGQEWXOYYCDKRSIRUJKVUDYTERPFPPRDTDJXOMBOPNAYPREJXFYGNXLTOQZWEOHRZQSBMEKTRWGEOVC");
    msg.flags = 192U;
    const signed char tmp_msg_0[] = {-115, -98, 59, -9, -30, -61, -89, 33, 21, 44, -87, -25, 84, -52, -54, -84, 118, 45, -94, -42, 58, 33, 89, -90, 39, -23, 45, 109, -105, -124, -79, -6, 95, -77, -23};
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
    msg.setTimeStamp(0.20916443233404503);
    msg.setSource(40242U);
    msg.setSourceEntity(145U);
    msg.setDestination(4858U);
    msg.setDestinationEntity(8U);
    msg.sys_src.assign("KCMLFDFYXZONRIGWFLVWDDSJOQOGRACCNPVZYKSDQKHLXIHXPBLSKVZEGJAZ");
    msg.sys_dst.assign("PIXFMFQTJLIHTHORICMKCENMLOAKMHZUJVADVBUGMYFGGFMRJBWSCAVRJBWHLYYKSMBVASQBOFOPJVZDPXEWNIPQDQRKOVFXGJSRLQTWYCCFYCBDQTTZNEQUNKHWSOULEEPRMNAQJOYXSUDLAUJORXNZT");
    msg.flags = 244U;
    const signed char tmp_msg_0[] = {-76, -43, 41, 48, 13, 37, 49, 42, 24, -24, 88, 8, 101, 43, -73, 27, 23, -111, 77, -13};
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
    msg.setTimeStamp(0.16190374264404206);
    msg.setSource(46493U);
    msg.setSourceEntity(3U);
    msg.setDestination(39922U);
    msg.setDestinationEntity(156U);
    msg.sys_src.assign("JEYYZDNQBNQLJCQECRDYRIFQNKDXRLSEOPFBRVVXZQIYHQSSIKPTRVKMWMHRXHUSYLAPBHBLFRSCZCDDNOBZURXFLFWDFLPVMTVGOQDBBIAEXRSJVHEZAOZABGYENHTMYOCCOFBEAUFTNWTKGNASKYMWIMXEWTQMZQAJMHJTKGPSYXKMUQWZDLSAIKLUIECAPGIUYVPUFVPKHCXMTXJTZGOWGWHGJLEJPUWV");
    msg.sys_dst.assign("FCZSNRTTOVUKIVOESNASPJQPBCCVMFTQFJQCZRBIFTHGQRRZRDBWTYNODLAZEUVSEDAPOMAVSEXNKXHHFAZNWDMWMPJUSKDJO");
    msg.flags = 171U;
    const signed char tmp_msg_0[] = {-102, -86, -6, -77, -39, -35, 57, 112, -34, 29, 108, -52, -37, -10, 2, 38, -23, -3};
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
    msg.setTimeStamp(0.9757728185472274);
    msg.setSource(7951U);
    msg.setSourceEntity(2U);
    msg.setDestination(59217U);
    msg.setDestinationEntity(207U);
    msg.sys_src.assign("DSZJTDDHXIIDYYMZZKPGH");
    msg.sys_dst.assign("SXZAZFAGQFRNESLVJO");
    msg.flags = 120U;
    const signed char tmp_msg_0[] = {95, -8, 95, 62, -41, 23, -82, -17, 27, -13, 59, -33, 126, 69, -34, 45, -43, -102, 26, -5, -25, -94, -48, -20, 79, -118, 65, -76, 60, -87, -59, 98, -51, -43, 19, 34, -101, 100, -121, 61, 54, 12, -120, 37, -95, 20, -128, -122, 52, -117, -127, -50, -97, 62, 104, 89, -22, -62, 36, -121, 65, 13, 57, -53, -57, -55, 77, -77, -17, -38, 89, 49, 68, -77, 97, -23, -41, -123, 50, 24, -83, -28, 53, 89, 114, 116, 33, -66, -5, 68, -105, -54, -49, -80, -18, 88, 6, 114, -72, 17, -62, 117, -33, 107, 52, 66, 62, 30, -121, -124, -114, 98, 28, 20, 121, -110, -121, 99, -66, 124, -96, -10, 49, -119, 50, 71, -73, 1, -82, -17, 48, 34, -25, -36, -94, -122, -31, 91, -125, 20, 20, 89, 98, -84, 60, -59, 74, 15, 15, -72, -82, 33, 102, -61, 92, 46, -119, -44, 55, 18, 11, 95, 43, -55, 10, 47, -77, 73, -126, 54, 41, -104, 76, -26, -100, 53, 14, -66, 71, 70, 84, -113, 100, -6, -51, 29, 109, -1, -61, 53, -80, 34, 68};
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
    msg.setTimeStamp(0.9182894767400601);
    msg.setSource(55552U);
    msg.setSourceEntity(22U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(196U);
    msg.seq = 35462U;
    msg.value = 183U;
    msg.error.assign("UYLKQKHQACNSGKEIKHIKJFOQJLIQWHHQXRYMSBPDAPVPWFHJKIWULHMVCPONJQBWAZVXYWBMGTSOCIWSERTPZAODNCSPLGQF");

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
    msg.setTimeStamp(0.576430031545109);
    msg.setSource(20111U);
    msg.setSourceEntity(228U);
    msg.setDestination(26319U);
    msg.setDestinationEntity(23U);
    msg.seq = 29392U;
    msg.value = 147U;
    msg.error.assign("IGTMMWCHXOXLOGNMNHNTEFLGJWLAVNFSRZVCUOQIVZRZSYKITECWVUFKLIAJQSOEYBPSFACFPIJYRQAPHRSUZMTUDTBDAHBO");

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
    msg.setTimeStamp(0.5201917022072405);
    msg.setSource(45502U);
    msg.setSourceEntity(163U);
    msg.setDestination(44890U);
    msg.setDestinationEntity(174U);
    msg.seq = 2887U;
    msg.value = 8U;
    msg.error.assign("HDEEWJRGZVDHHUOVWIZSGBVQAFAJNPTNYCHJNYSXIUTORQOEFHIXFKMVRELDUUGSHRKRSJHMPACZTEVBZM");

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
    msg.setTimeStamp(0.8761282335772118);
    msg.setSource(15030U);
    msg.setSourceEntity(77U);
    msg.setDestination(51295U);
    msg.setDestinationEntity(155U);
    msg.seq = 26531U;
    msg.sys.assign("GXFNIUUOPSWZGCRGTNTEEXVKVYOUJNLKMZWOBYRCJUWIXVBJQXKSRQGNAACLFDXZEPWTKPHYOMKTLBFAVFLMMJDIXDRSPVWBRSZRFLYSPDJGITPHIEDUHWPWFDNQLNMBYMYJGBMWIABQPKDFDCJAZWNUDJEQETKOVYLIDVHIELQOHKPUZUYQFVASZGCXYBEMMOHELQ");
    msg.value = 0.6722555798973163;

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
    msg.setTimeStamp(0.14578725187595165);
    msg.setSource(264U);
    msg.setSourceEntity(130U);
    msg.setDestination(58586U);
    msg.setDestinationEntity(51U);
    msg.seq = 60016U;
    msg.sys.assign("KYMKQCBSTJWZWWWNCNIBEZDDFGCVXHHANFCHEIHKAEPJZTCRPKOOHVBFEPFDVCREEIOMKLLXXSRSTXLHLJLGPTPTKFTVJUYPHTQDBXGUWASRKWDPNSTQQFIFZMQYEEXIVCXVAIIYBGKAFZFRTYNGIHGQDWUGVNHUVMBEARJENYURGWZJCLUADKQMCABMYJOXSDK");
    msg.value = 0.2518266290894372;

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
    msg.setTimeStamp(0.4543904081889052);
    msg.setSource(10646U);
    msg.setSourceEntity(169U);
    msg.setDestination(28552U);
    msg.setDestinationEntity(137U);
    msg.seq = 36033U;
    msg.sys.assign("ZUXPVTKHAEZDQQDXQNFYYZUJDBRZYLWOIMLNIBENJCTGMEQRJOJTLOTDCHDXUQENAUZSNSEATASONFGJUDVPKLZPLGFLNABWP");
    msg.value = 0.06972550363093699;

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
    msg.setTimeStamp(0.22588319184884942);
    msg.setSource(9129U);
    msg.setSourceEntity(86U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(177U);
    msg.seq = 46151U;
    msg.sys_dst.assign("WTDYYSAMOSPTYGEFDEJNFFKNMCSSHMVQOYHCCJQPJOKFABPLXATBNRIXYRBQWGCALMFRXVIHRXTRDXANJUDNILGPWSTLBQNPLLFKADUPYNEEEBDUFOEUQVZRVXTISSUKOZQJMUORGPLAITZLQUSJRZYKUBVEBYJIXKRDAMFEAVXDWJBKNHCGXZQGCRCPGYSGHWFWMETKDPNQTDZGGHVHVABIVOTCZSMFLZCZMHCMJ");
    msg.timeout = 0.33101531978867205;

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
    msg.setTimeStamp(0.6445372107380396);
    msg.setSource(24095U);
    msg.setSourceEntity(129U);
    msg.setDestination(59660U);
    msg.setDestinationEntity(17U);
    msg.seq = 43158U;
    msg.sys_dst.assign("OUBRCLZFLFKPKPNMCQPOTXSJQRVSKVCTCPJJMEAHBJCCYHEVVXPIDJSFDYRINUKIXUIVNIZVROYOGKOPKVDYAQFCMXWDPJGTWZ");
    msg.timeout = 0.04444771006293913;

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
    msg.setTimeStamp(0.3253628844798243);
    msg.setSource(16657U);
    msg.setSourceEntity(56U);
    msg.setDestination(61359U);
    msg.setDestinationEntity(247U);
    msg.seq = 22078U;
    msg.sys_dst.assign("QIXAGATBYNURKJRCQGQNGHXSKYDZBSOZGXBJWAKKNXUQWCLZILVOOMWKUPEUVPDMNJWJLOFTOWYYGQFTOMYVTDBXNMHZQAWRSYLBSMXDKHCHHHCLZCVRQFLCGWRAIDAVLGVNSRPHIBMUCYCANDSIPLKCTSTPGYFEVROKVFEPIUOXZOLRJFNQ");
    msg.timeout = 0.13495507870067047;

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
    msg.setTimeStamp(0.029010278403008294);
    msg.setSource(23842U);
    msg.setSourceEntity(205U);
    msg.setDestination(8454U);
    msg.setDestinationEntity(152U);
    msg.action = 214U;
    msg.longain = 0.4961026951978138;
    msg.latgain = 0.05380868142940454;
    msg.bondthick = 2837881603U;
    msg.leadgain = 0.5878416845401286;
    msg.deconflgain = 0.7032349979161908;

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
    msg.setTimeStamp(0.6526161856959671);
    msg.setSource(65085U);
    msg.setSourceEntity(113U);
    msg.setDestination(4033U);
    msg.setDestinationEntity(39U);
    msg.action = 88U;
    msg.longain = 0.15516385534574317;
    msg.latgain = 0.17550921298214162;
    msg.bondthick = 3481684497U;
    msg.leadgain = 0.26558340264217983;
    msg.deconflgain = 0.9132266077071975;

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
    msg.setTimeStamp(0.1137453769105734);
    msg.setSource(31802U);
    msg.setSourceEntity(151U);
    msg.setDestination(4204U);
    msg.setDestinationEntity(35U);
    msg.action = 72U;
    msg.longain = 0.6736323289982228;
    msg.latgain = 0.17843014253049216;
    msg.bondthick = 1142247866U;
    msg.leadgain = 0.5251571280542721;
    msg.deconflgain = 0.20819710411358283;

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
    msg.setTimeStamp(0.7924400461600927);
    msg.setSource(13710U);
    msg.setSourceEntity(218U);
    msg.setDestination(4768U);
    msg.setDestinationEntity(125U);
    msg.err_mean = 0.3003747686647008;
    msg.dist_min_abs = 0.889922634422779;
    msg.dist_min_mean = 0.6505261098639877;

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
    msg.setTimeStamp(0.7000536540497014);
    msg.setSource(46978U);
    msg.setSourceEntity(19U);
    msg.setDestination(615U);
    msg.setDestinationEntity(226U);
    msg.err_mean = 0.5254286260608514;
    msg.dist_min_abs = 0.2916154780962832;
    msg.dist_min_mean = 0.9053070563737475;

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
    msg.setTimeStamp(0.6520087130276179);
    msg.setSource(32817U);
    msg.setSourceEntity(234U);
    msg.setDestination(18205U);
    msg.setDestinationEntity(116U);
    msg.err_mean = 0.17170325823434696;
    msg.dist_min_abs = 0.8338568967944844;
    msg.dist_min_mean = 0.806577208834493;

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
    msg.setTimeStamp(0.9343864607151606);
    msg.setSource(9778U);
    msg.setSourceEntity(197U);
    msg.setDestination(5029U);
    msg.setDestinationEntity(122U);
    msg.action = 130U;
    msg.lon_gain = 0.6753284520802206;
    msg.lat_gain = 0.8277391266807035;
    msg.bond_thick = 0.6467157997249285;
    msg.lead_gain = 0.11693200041258967;
    msg.deconfl_gain = 0.4239098542131673;
    msg.accel_switch_gain = 0.02638529418334956;
    msg.safe_dist = 0.1280902825837007;
    msg.deconflict_offset = 0.7345953887095155;
    msg.accel_safe_margin = 0.8237894263768242;
    msg.accel_lim_x = 0.3165149757028711;

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
    msg.setTimeStamp(0.12952362643382176);
    msg.setSource(41943U);
    msg.setSourceEntity(43U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(61U);
    msg.action = 191U;
    msg.lon_gain = 0.8308637885312657;
    msg.lat_gain = 0.3727694429275904;
    msg.bond_thick = 0.8948684529529964;
    msg.lead_gain = 0.39728118731203976;
    msg.deconfl_gain = 0.4871747500429273;
    msg.accel_switch_gain = 0.8899659297036691;
    msg.safe_dist = 0.8076648657024884;
    msg.deconflict_offset = 0.21636350604226362;
    msg.accel_safe_margin = 0.9668817647887508;
    msg.accel_lim_x = 0.3272898435409338;

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
    msg.setTimeStamp(0.909586845216159);
    msg.setSource(62931U);
    msg.setSourceEntity(33U);
    msg.setDestination(33307U);
    msg.setDestinationEntity(150U);
    msg.action = 196U;
    msg.lon_gain = 0.0498391931772566;
    msg.lat_gain = 0.8516310200068329;
    msg.bond_thick = 0.6240850963557335;
    msg.lead_gain = 0.6167478048217453;
    msg.deconfl_gain = 0.38638257035194945;
    msg.accel_switch_gain = 0.5091088181859094;
    msg.safe_dist = 0.5984897716572997;
    msg.deconflict_offset = 0.5535433573096039;
    msg.accel_safe_margin = 0.8863024120106439;
    msg.accel_lim_x = 0.4994616596055431;

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
    msg.setTimeStamp(0.1923160187837918);
    msg.setSource(45354U);
    msg.setSourceEntity(31U);
    msg.setDestination(58564U);
    msg.setDestinationEntity(231U);
    msg.type = 165U;
    msg.op = 36U;
    msg.err_mean = 0.6484842140146614;
    msg.dist_min_abs = 0.3251852060874538;
    msg.dist_min_mean = 0.46572522248821224;
    msg.roll_rate_mean = 0.0787171388524538;
    msg.time = 0.15857253031143015;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 203U;
    tmp_msg_0.lon_gain = 0.555246685040901;
    tmp_msg_0.lat_gain = 0.2887698958082152;
    tmp_msg_0.bond_thick = 0.002083436837514996;
    tmp_msg_0.lead_gain = 0.6981584261131601;
    tmp_msg_0.deconfl_gain = 0.3375184711234144;
    tmp_msg_0.accel_switch_gain = 0.6781308472652469;
    tmp_msg_0.safe_dist = 0.9764321990685347;
    tmp_msg_0.deconflict_offset = 0.12055587841314619;
    tmp_msg_0.accel_safe_margin = 0.24599511930069062;
    tmp_msg_0.accel_lim_x = 0.919972744997375;
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
    msg.setTimeStamp(0.2998384487797411);
    msg.setSource(36124U);
    msg.setSourceEntity(65U);
    msg.setDestination(4643U);
    msg.setDestinationEntity(178U);
    msg.type = 121U;
    msg.op = 104U;
    msg.err_mean = 0.6988098897995577;
    msg.dist_min_abs = 0.7387789076414469;
    msg.dist_min_mean = 0.695962460833238;
    msg.roll_rate_mean = 0.50319533140944;
    msg.time = 0.13026073167955754;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 167U;
    tmp_msg_0.lon_gain = 0.5119427464054349;
    tmp_msg_0.lat_gain = 0.08284875691737259;
    tmp_msg_0.bond_thick = 0.860831813357365;
    tmp_msg_0.lead_gain = 0.9422481449444717;
    tmp_msg_0.deconfl_gain = 0.8004398542098072;
    tmp_msg_0.accel_switch_gain = 0.2540696536333138;
    tmp_msg_0.safe_dist = 0.5886462639412486;
    tmp_msg_0.deconflict_offset = 0.03825383971933405;
    tmp_msg_0.accel_safe_margin = 0.8231322347545615;
    tmp_msg_0.accel_lim_x = 0.2985228766456286;
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
    msg.setTimeStamp(0.3660599715569435);
    msg.setSource(39938U);
    msg.setSourceEntity(56U);
    msg.setDestination(28139U);
    msg.setDestinationEntity(70U);
    msg.type = 25U;
    msg.op = 85U;
    msg.err_mean = 0.5312029214905367;
    msg.dist_min_abs = 0.7216920800575404;
    msg.dist_min_mean = 0.9420830971931802;
    msg.roll_rate_mean = 0.7364466119016685;
    msg.time = 0.5203990179985751;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 127U;
    tmp_msg_0.lon_gain = 0.6997415902111302;
    tmp_msg_0.lat_gain = 0.44600490700062534;
    tmp_msg_0.bond_thick = 0.43254825230376537;
    tmp_msg_0.lead_gain = 0.16230762451841807;
    tmp_msg_0.deconfl_gain = 0.389682282301851;
    tmp_msg_0.accel_switch_gain = 0.721802337900142;
    tmp_msg_0.safe_dist = 0.9331668210488183;
    tmp_msg_0.deconflict_offset = 0.6710353776168976;
    tmp_msg_0.accel_safe_margin = 0.434192654830849;
    tmp_msg_0.accel_lim_x = 0.5813303177721202;
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
    msg.setTimeStamp(0.44783050316869655);
    msg.setSource(2913U);
    msg.setSourceEntity(116U);
    msg.setDestination(1903U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.6925616301544223;
    msg.lon = 0.4028159527992553;
    msg.eta = 2522417863U;
    msg.duration = 11212U;

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
    msg.setTimeStamp(0.6493388033519473);
    msg.setSource(41865U);
    msg.setSourceEntity(115U);
    msg.setDestination(51063U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.7582252888873343;
    msg.lon = 0.7219395263910118;
    msg.eta = 2440960191U;
    msg.duration = 37174U;

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
    msg.setTimeStamp(0.3309373781817728);
    msg.setSource(41242U);
    msg.setSourceEntity(67U);
    msg.setDestination(22736U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.4189230451243552;
    msg.lon = 0.5959575272527836;
    msg.eta = 3799937829U;
    msg.duration = 30497U;

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
    msg.setTimeStamp(0.38948002912943547);
    msg.setSource(60509U);
    msg.setSourceEntity(143U);
    msg.setDestination(6673U);
    msg.setDestinationEntity(6U);
    msg.plan_id = 20284U;

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
    msg.setTimeStamp(0.7384821582118085);
    msg.setSource(55047U);
    msg.setSourceEntity(124U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(102U);
    msg.plan_id = 19630U;

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
    msg.setTimeStamp(0.7888825347873697);
    msg.setSource(56493U);
    msg.setSourceEntity(190U);
    msg.setDestination(28111U);
    msg.setDestinationEntity(184U);
    msg.plan_id = 62712U;

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
    msg.setTimeStamp(0.7847441385054398);
    msg.setSource(30755U);
    msg.setSourceEntity(106U);
    msg.setDestination(64303U);
    msg.setDestinationEntity(46U);
    msg.type = 92U;
    msg.command = 142U;
    msg.settings.assign("MTQITLMPSYBBUUWYMGRCGEZICSTDZAUCWMONBMCHJZYNTLKYKIJSERNLMQYCXZMKBOWHFZVDDGIGRKMJRJGVXHPAOJJAPJJHKDSIYGHQHAIMWUYOWUARAUNPOETEKCPGKJFWNVZDFNLBLXRLXIESTXEHKFPQOKNNFBMRANHFGSOXDGSOVLVIPFIISVTBUAXLP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 33815U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3447896913807148;
    tmp_tmp_msg_0_0.lon = 0.8235506716222739;
    tmp_tmp_msg_0_0.eta = 616156688U;
    tmp_tmp_msg_0_0.duration = 15264U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EQVXHWWZLSQEDXDDDUAXVOZTKGYJCIGAMVCYOMBQCFKGRDIUUWKVIFIHJTSXFKHIZONEZZVCWEKKFIOTJFWBFRKYQX");

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
    msg.setTimeStamp(0.5862337194855136);
    msg.setSource(25458U);
    msg.setSourceEntity(66U);
    msg.setDestination(17512U);
    msg.setDestinationEntity(181U);
    msg.type = 79U;
    msg.command = 42U;
    msg.settings.assign("GTYXGIWDYRHMBBOMALPDBJJVOTMNLDJPOPMGTJCZRNRNKBXYBGNGNIE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8959U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6064606461395906;
    tmp_tmp_msg_0_0.lon = 0.4570878134385332;
    tmp_tmp_msg_0_0.eta = 2310404256U;
    tmp_tmp_msg_0_0.duration = 14300U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DWWNTPCRBOBRDJNZFUZIAXKYLEJJGLOFIWDKKCGGTAAIZMNFEIMFWZQUCQAAYQACWXVHQIEOVSBQENGGRBVMIDHVTXYCZKSUPDNXFJMUXHETVSLCIYNTRQXWXGRGHKYHEWUTS");

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
    msg.setTimeStamp(0.5139736347687448);
    msg.setSource(12239U);
    msg.setSourceEntity(219U);
    msg.setDestination(31912U);
    msg.setDestinationEntity(13U);
    msg.type = 181U;
    msg.command = 121U;
    msg.settings.assign("XIMNUGIBTYGWFMRHUNWYFJTSWSSZTJLHIAONFDAVLRBAKHGIYYZBHGMBUODOMGOQSPRMWXGRNLBDNNIUKBIPPVEBLSCVQVVAXTSOCJDAWLHZENUEVKJUIOYJVCPWVKUHSAALDYPGHCNPLDSX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54042U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3832689107637878;
    tmp_tmp_msg_0_0.lon = 0.4019465576720468;
    tmp_tmp_msg_0_0.eta = 2194383692U;
    tmp_tmp_msg_0_0.duration = 62137U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OUEWUZKHGCARDOWBTLUVBGFVIFRASHITIOODFWNGHAACPSPBGUJUKIXXYRXQYOSMZKVLJGBJAWVQPFVGXLPMXDNYLNMLNXFHXQMYYETJZZRMUWEDHMBKRMPWCCKOXOTRFYABLIGQKYPNCMNEJAFTKNXKFRCSJBQHQWFVIKUOZUJHIQJLPBEICDNWEQZFZSLOHWHCTLVTYTDIPSSKCSSGNMRZBJDWQEDAAYAYQTUNVRVVBETPCZ");

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
    msg.setTimeStamp(0.10855196496748165);
    msg.setSource(55128U);
    msg.setSourceEntity(143U);
    msg.setDestination(64668U);
    msg.setDestinationEntity(154U);
    msg.state = 209U;
    msg.plan_id = 56986U;
    msg.wpt_id = 191U;
    msg.settings_chk = 6114U;

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
    msg.setTimeStamp(0.893800368562265);
    msg.setSource(65305U);
    msg.setSourceEntity(180U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(121U);
    msg.state = 36U;
    msg.plan_id = 20435U;
    msg.wpt_id = 180U;
    msg.settings_chk = 49225U;

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
    msg.setTimeStamp(0.9184350877236218);
    msg.setSource(2017U);
    msg.setSourceEntity(143U);
    msg.setDestination(25699U);
    msg.setDestinationEntity(99U);
    msg.state = 82U;
    msg.plan_id = 3268U;
    msg.wpt_id = 253U;
    msg.settings_chk = 5139U;

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
    msg.setTimeStamp(0.2939026173608581);
    msg.setSource(8933U);
    msg.setSourceEntity(211U);
    msg.setDestination(8421U);
    msg.setDestinationEntity(8U);
    msg.uid = 99U;
    msg.frag_number = 56U;
    msg.num_frags = 168U;
    const signed char tmp_msg_0[] = {-124, 77, 62, 109, 122, -24, -74, -11, 27, 123, -42, 74, -72, 28, -48, -25, 22, 91, 45, 63, 14};
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
    msg.setTimeStamp(0.49232314692981527);
    msg.setSource(36932U);
    msg.setSourceEntity(199U);
    msg.setDestination(15467U);
    msg.setDestinationEntity(52U);
    msg.uid = 225U;
    msg.frag_number = 162U;
    msg.num_frags = 157U;
    const signed char tmp_msg_0[] = {-96, -120, -26, -5, -64, -9, -81, -77, -51, -11, 28, -104, -79, -88, 67, -8, 106, -102, 1, -86, 119, -42, -109, 39, 24, -93, 124, -116, -43, -16, 70, 102, 87, -111, 62, 78, -52, -8, 104, 85, -81, 0, -53, -27, -118, 10, 38, -68, -23, 125, -126, -75, 76, 54, 86, 88, -96, -40, 61, -116, 113, 30, -59, 76, 19, -80, 71, 101, 93, -42, -79, 19, -4, -72, 67, -55, -24, -29, -89, -68, -45, 93, -83, 77, -16, -8, 53, 106, -6, -9, 26, 57, -50, -54, -71, -67, 5, 17, -5, -91, 97, -68, 119, 111, 4, -63, 86, 2, -30, 123, -48, -12, 119, 20, -7, -55, 93, -78, -95, 100, 96, 26, -79, -34, 18, -31, 45, -80, 41, 26, 19, 86, -104, 91, -66, 43, -13, -10, 118, 45, 18, -27, 100, 25, 99, 107, -95, 30, 18, 104, 54, -109, 26, 46, -109, -29, -71, 17, -60, 68, 81, -101, 33, 48, 125, -118, -74, -81, -97, -16, -122, -81};
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
    msg.setTimeStamp(0.5727929565558189);
    msg.setSource(17642U);
    msg.setSourceEntity(90U);
    msg.setDestination(9130U);
    msg.setDestinationEntity(9U);
    msg.uid = 157U;
    msg.frag_number = 187U;
    msg.num_frags = 99U;
    const signed char tmp_msg_0[] = {-112, -118, -51, 99, 84, -26, 87, 3, 86, -60, -68, 90, -122, -47, 121, -35, -54, 78, -6, 113, 50, -5, 65, 66, 80, -83, 71, 98, -6, 67, -100, 74, -125, -113, -81, -106, 31, 121, -24, 96, -128, -127, 19, -8, 24, -65, -76, -126, 110, -21, -39, 101, -100, 90, -58, -22, -79, -69, 49, -81, 121, -34, 69, -11, -59, 107, -66, 30, -4, -43, 91, -42, -22, 75, 3, 46, 10, 57, -31, -24, -18, -23, 42, -96, -33, -69, -78, -102, 117, 24, 8, -50, 83, 5, 73, -114, -118, 63, 121, -38, 38, 101, -65, 36, 69, -39, -113, -77, 120, -49, 102, -90, 104, -89, -27, -65, -41, 33, -97, -54, -81, -83, 18, 71, 19, -101, -125, 100, 8, 116, -73, 25, 81, -100, -6, 69, -42, -62, -118, -34, -44, -116, -58, 93, -126, 34};
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
    msg.setTimeStamp(0.3231715221204541);
    msg.setSource(58178U);
    msg.setSourceEntity(251U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(198U);
    msg.content_type.assign("YJVWMKMBLPCFTFFSDKWKGGQWIPZHAKJOADINWIDJAKKOPYAHDILOLWCEJHFYNMKNWXPQOMTHVVYQPJGSEVENVEROBTCWNRTEGUSXTQPAQJIXEARSYFLRMJUWHSHXP");
    const signed char tmp_msg_0[] = {50, -25, -48, 12, 28, 88, -88, -7, -99, -45, 121, -52, -41, 32, 63, -25, 51, 43, -65, 57, -95, 107, -128, -112, 43, 50, -126, -52, 109, -82, -51, 89, -119, 53, 69, -43, -124, 72, 6, 24, 46, 106, 105, 122, 20, 2, -115, 82, 58, 54, -14, 1, -60, 51, -113, 120, -45, 1, 89, -72, 18, -22, 51, -33, 27, 126, -83, 115, 93, -84, -59, 106, -54, 9, 62, -49, -25, -111, -89, 72, 24, -124, 124, -63, 52, -89, -106, -83, -11, -10, -115, 98, 122, -10, 37, -117, -43, -110, 123, -11, 72, -60, 63, 8, 99, -21, -59, -25, -98, 38, -31, 116, -52, 78, -63, -70, 98, 59, -16, -122, -44, 67, -98, 93, 79, 18, -75, 93, -64, 44, 21, -57, -28, 39, -38, -9, 92, 21, 81, 44, -58, -76, -33, -27, -113, -46, -54, 101, -10, -8, -67, -66, -93, -93, 36, 106, 35, -103, 103, -39, -120, -60, 24, -115, -48, 62, 44, -20, -16, 42, -1, -46, 39, -2, 62, -67, 124, 10, 43, -2, 27, -74, 105, 11, 92, -104, 95, 7, -17, 10, -6, -90, -124, 31, 34, -50, 22, 56, 9, 111, -33, -97};
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
    msg.setTimeStamp(0.669743437993239);
    msg.setSource(8693U);
    msg.setSourceEntity(206U);
    msg.setDestination(40008U);
    msg.setDestinationEntity(131U);
    msg.content_type.assign("WIQNTRYSIKVVWXSUSTUIPMIQEZMHJYBCKMBRJODZECSGWKBRUBRLACGVILROWFHJCOIFDBMEEFERFWPMKXZMZGEVIAPUPAIQQUDABDODSYOTWQUJYIPDHCNRVGFMLLYNXZMOYSSGOKMHGOYDWZUOCTHTQGHAWWBLSCQ");
    const signed char tmp_msg_0[] = {-39, -122, 53, 4, 2, 125, -13, 125, -25, -61, -38, 59, -18, 18, -80, -13, 84, -71, -108, -16, -126, -10, 71, -108, 99, 49, -37, 2, 37, 57, 83, 28, 14, -48, -100, 1, 92, -8, -19, -9, -68, 66, 78, -125, 20, -29, -123, 86, 62, 91, -86, 76, 54, 3, -69, 64, 31, -34, 49, 16, 25, 121, -64, 90, 19, -40, 8, 9, -94, -108};
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
    msg.setTimeStamp(0.6771072928060464);
    msg.setSource(16181U);
    msg.setSourceEntity(44U);
    msg.setDestination(1716U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("YSYTBYLTYYEVXOKSBPXGOWRHOBIWCRNRILPTCGCMPOWUYVODVAJXLCZHJJCAFOJRDIYKBJBGLBLESDLYQFTZHAARMAUNUSZQDHHBPXVWGWGM");
    const signed char tmp_msg_0[] = {89, 106, -45, -118, -124, 118, -11, -31, -47, 38, 60, -40, 59, 85, -104, 88, -124, -62, -72, 43, 70, 23, -122, 53, 75, 106, 35, -22, 115, 114, -110, 74, 99, 53, -54, -123, -61, 14, 83, 14, -112, 37, -30, -111, 126, 77, -109, 52, 26, 25, -9, -80, -53, 84, -12, 87, -100, -127, 91, -60, -97, -20, 6, 106, -14, -16, 29, -82, 105, -122, -42, 97, 3, -125, 117, 16, -38, -95, 111, 113, 90, 79, -45, 105, 10, 21, 90, -12, 34, -67, -19, -82, -48, 87, -51, 15, 120, -15, -64, 35, 80, -44};
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
    msg.setTimeStamp(0.06595165173615791);
    msg.setSource(51415U);
    msg.setSourceEntity(89U);
    msg.setDestination(59370U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.07557221515442147);
    msg.setSource(60091U);
    msg.setSourceEntity(185U);
    msg.setDestination(30114U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.8053208793482745);
    msg.setSource(65249U);
    msg.setSourceEntity(229U);
    msg.setDestination(12774U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.7704324955546226);
    msg.setSource(22247U);
    msg.setSourceEntity(157U);
    msg.setDestination(50522U);
    msg.setDestinationEntity(109U);
    msg.target = 30348U;
    msg.bearing = 0.8555894309271962;
    msg.elevation = 0.947048888379965;

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
    msg.setTimeStamp(0.1541338349377892);
    msg.setSource(62464U);
    msg.setSourceEntity(63U);
    msg.setDestination(41697U);
    msg.setDestinationEntity(99U);
    msg.target = 55229U;
    msg.bearing = 0.05254899585171324;
    msg.elevation = 0.28436989184381756;

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
    msg.setTimeStamp(0.09248071478178688);
    msg.setSource(32860U);
    msg.setSourceEntity(88U);
    msg.setDestination(40571U);
    msg.setDestinationEntity(27U);
    msg.target = 41098U;
    msg.bearing = 0.6201694056766087;
    msg.elevation = 0.8899062547857152;

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
    msg.setTimeStamp(0.9228160057905317);
    msg.setSource(48915U);
    msg.setSourceEntity(1U);
    msg.setDestination(52185U);
    msg.setDestinationEntity(155U);
    msg.target = 22780U;
    msg.x = 0.37746237154693973;
    msg.y = 0.4316394688028049;
    msg.z = 0.7314912767103853;

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
    msg.setTimeStamp(0.3590486700903541);
    msg.setSource(57698U);
    msg.setSourceEntity(198U);
    msg.setDestination(38647U);
    msg.setDestinationEntity(57U);
    msg.target = 13364U;
    msg.x = 0.8560623205620816;
    msg.y = 0.8542470216585546;
    msg.z = 0.5797652679469606;

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
    msg.setTimeStamp(0.9729912743510678);
    msg.setSource(51184U);
    msg.setSourceEntity(129U);
    msg.setDestination(49842U);
    msg.setDestinationEntity(199U);
    msg.target = 31361U;
    msg.x = 0.09320562967890911;
    msg.y = 0.6916463164209472;
    msg.z = 0.7102656849221499;

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
    msg.setTimeStamp(0.28438205976406195);
    msg.setSource(18986U);
    msg.setSourceEntity(197U);
    msg.setDestination(23312U);
    msg.setDestinationEntity(14U);
    msg.target = 52922U;
    msg.lat = 0.16058832270712187;
    msg.lon = 0.7575970662055697;
    msg.z_units = 107U;
    msg.z = 0.6181006898596402;

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
    msg.setTimeStamp(0.7496352095138503);
    msg.setSource(52077U);
    msg.setSourceEntity(52U);
    msg.setDestination(64625U);
    msg.setDestinationEntity(212U);
    msg.target = 16020U;
    msg.lat = 0.545334678302753;
    msg.lon = 0.7773637376798274;
    msg.z_units = 138U;
    msg.z = 0.49389482164718423;

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
    msg.setTimeStamp(0.6109919068023334);
    msg.setSource(31136U);
    msg.setSourceEntity(118U);
    msg.setDestination(12868U);
    msg.setDestinationEntity(242U);
    msg.target = 16590U;
    msg.lat = 0.6430784495078031;
    msg.lon = 0.44377966916694556;
    msg.z_units = 28U;
    msg.z = 0.7143199462980947;

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
    msg.setTimeStamp(0.17623639684964854);
    msg.setSource(21475U);
    msg.setSourceEntity(170U);
    msg.setDestination(51747U);
    msg.setDestinationEntity(75U);
    msg.locale.assign("WRVPUIDTNAW");
    const signed char tmp_msg_0[] = {104, -91, -97, -39, 59, 56, -14, -40, -5, 8, 99, -5, -107, 16, 105, 70, 6, -43, -61, 81, -80, 116, 41, 90, 116, 125, 75, -11, 89, 27, -91, 90, -10, -47, -101, -102, -22, -15, -73, -7, -10, 107, -70, 124, -80, 16, 109, 16, -76, -82, 62, -116, -5, -8, 7, -72, -69, 71, -28, 124, -72, 6, 70, -32, -96, 108, -16, -7, 86, -11, -81, 27, -69, 110, 58, -47, 71, 0, 1, 9, 107, -51, -43, 126, 80, -25, 12, 93, 119, 33, -93, 22, 17, 77, -118, -53, 62, 31, -29, 25, 38, 47, -74, -26, -8, 106, -114, -44, -95, -92, -92, 85, -80, 43, 106, 110, -44, -33, 81, -80, -38, -91, -3, -63, -90, 21, -30, -119, -22, -97, -112, 77, 107, -56, -82, -118, 63, -43, -109, 3, 3, 36, -54, -81, 61, 50, -13, 71, 10, -126, 111, -93, -96, -123, 18, 42, -10, -102, -34, -34, 114, -38, 10, 38, -109, 16, -46, 29, 91, 45, 95, 79, -121, 8, 57, 8, -92, 111, 6, 15, 110, -78, -18, -98};
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
    msg.setTimeStamp(0.880000864735496);
    msg.setSource(29595U);
    msg.setSourceEntity(166U);
    msg.setDestination(3299U);
    msg.setDestinationEntity(32U);
    msg.locale.assign("IIQSJLTFDYQZVFIMGSAMBTUXQGWVYGUQDMASNVNUMCPYKOKBUREZGBOOHLZDKDVBYPLFLPPAFXSLECBXCVUBJAYEKKQBHASWUEVDWGTEEHM");
    const signed char tmp_msg_0[] = {56, -104, -112, 31, 61, 80, -34, 37, 107, -63, 99, 110, -123, 45, 126, -72, -89, -95, -121, 91, -80, -95, 104, -35, -13, -34, 55, -26, 3, 66, -24, -89, -86, -69, -78, -89, -125, 55, 120, 12, 111, -29, 6, -41, -81, 58, -41, 105, 77, 14, -111, 43, -20, 74, -11, -89, -91, -28, 70, 103, -50, -76, 84, -86, 83, 40, 56, -86, 0, -76, 106, 97, -66, -123, 16, -36, -27, -14, -92, -38, -92, 80, -33, 56, -25, -39, -76, -42, -128, 59, 72, -71, -35, -127, 113, -70, -110, 46, -104, -18, 90, -121, 107, 56, 100, -45, -93, 23, 100, 56, 41, -67, 120, -63, -88, 67, 113, -109, 60, 36, -105, -48, -59, 30, -15, -120, 21, 17, 101, -93, -123, -8, -43, 124, -90, 27, -28, 5, -116, 119, -45, 62, 4, -73, 112, 68, 26, 45, 72, -50, 47, 86, -13, -127, -95, 119, 2, 55, 26, 18, 119, 121, -79, 12, 7, -61, 50, 1, 44, -112, -85, 18, 108, -86, -114, -113, 62, -127, 107, -28, 113};
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
    msg.setTimeStamp(0.11761635675978854);
    msg.setSource(55484U);
    msg.setSourceEntity(22U);
    msg.setDestination(32353U);
    msg.setDestinationEntity(102U);
    msg.locale.assign("JVORXIJPMAIHQKTEYZTKNAODOEXEKXHLNZCLFCJOCPYQGVDSGIAQHISFSEUDBCKLPNZKYSPSPBGYATFAWZDZRBDTMUWVLJYREBRKBFVRUYSOCWDBHOTMJMAXUQFSTZWXXGLKMBUQUYPZISNJMNGNWSTNBRFXOECTYFJVVBVHMULJWWYJRPKUNKGVWJCLSPELWYAGOMZCLPULHXPTGXVDQT");
    const signed char tmp_msg_0[] = {28, -7, 69, 126, 71, 100, 82, 126, 103, 51, -94, 107, 106, 110, 89, 26, 53, -127, 90, -117, 62, -25, -114, 69, 53, 51, 68, -17, -121, 11, 64, 114};
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
    msg.setTimeStamp(0.33455586144271154);
    msg.setSource(32094U);
    msg.setSourceEntity(253U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.5437966985841816);
    msg.setSource(17195U);
    msg.setSourceEntity(29U);
    msg.setDestination(37020U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.31000000794708316);
    msg.setSource(48270U);
    msg.setSourceEntity(49U);
    msg.setDestination(49106U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.1502191961683198);
    msg.setSource(57372U);
    msg.setSourceEntity(137U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(124U);
    msg.camid = 239U;
    msg.x = 6507U;
    msg.y = 44827U;

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
    msg.setTimeStamp(0.9237688898595616);
    msg.setSource(6988U);
    msg.setSourceEntity(1U);
    msg.setDestination(33299U);
    msg.setDestinationEntity(159U);
    msg.camid = 241U;
    msg.x = 39086U;
    msg.y = 5945U;

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
    msg.setTimeStamp(0.0540438756962589);
    msg.setSource(40188U);
    msg.setSourceEntity(230U);
    msg.setDestination(59721U);
    msg.setDestinationEntity(139U);
    msg.camid = 2U;
    msg.x = 19717U;
    msg.y = 21238U;

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
    msg.setTimeStamp(0.9175441650412666);
    msg.setSource(15642U);
    msg.setSourceEntity(12U);
    msg.setDestination(4409U);
    msg.setDestinationEntity(118U);
    msg.camid = 153U;
    msg.x = 41312U;
    msg.y = 64346U;

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
    msg.setTimeStamp(0.47055091370294555);
    msg.setSource(3810U);
    msg.setSourceEntity(225U);
    msg.setDestination(27281U);
    msg.setDestinationEntity(187U);
    msg.camid = 182U;
    msg.x = 56577U;
    msg.y = 35825U;

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
    msg.setTimeStamp(0.7654875643609916);
    msg.setSource(27117U);
    msg.setSourceEntity(45U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(23U);
    msg.camid = 187U;
    msg.x = 25070U;
    msg.y = 23960U;

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
    msg.setTimeStamp(0.40591078312392426);
    msg.setSource(18007U);
    msg.setSourceEntity(220U);
    msg.setDestination(47295U);
    msg.setDestinationEntity(232U);
    msg.tracking = 54U;
    msg.lat = 0.4639041049479503;
    msg.lon = 0.485996463062489;
    msg.x = 0.6205144373293622;
    msg.y = 0.7246281236132296;
    msg.z = 0.9334042680205906;

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
    msg.setTimeStamp(0.6720553622817709);
    msg.setSource(47229U);
    msg.setSourceEntity(154U);
    msg.setDestination(30426U);
    msg.setDestinationEntity(66U);
    msg.tracking = 181U;
    msg.lat = 0.38581345839285963;
    msg.lon = 0.16364941857422444;
    msg.x = 0.35771851601390525;
    msg.y = 0.26746665693543914;
    msg.z = 0.8805493502647205;

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
    msg.setTimeStamp(0.9013860030875245);
    msg.setSource(44641U);
    msg.setSourceEntity(12U);
    msg.setDestination(27035U);
    msg.setDestinationEntity(181U);
    msg.tracking = 208U;
    msg.lat = 0.6174777474868216;
    msg.lon = 0.24320044536301155;
    msg.x = 0.8557864091564594;
    msg.y = 0.6591602348833031;
    msg.z = 0.48254440066351734;

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
    msg.setTimeStamp(0.451552069201395);
    msg.setSource(16191U);
    msg.setSourceEntity(95U);
    msg.setDestination(12432U);
    msg.setDestinationEntity(101U);
    msg.target.assign("JMNUPFNDJVFNXVOUHKEKQLXHPUPOEUGMVUYJRBZZLQEOLSBMUIIAUXAINXFZWBAVLYIKTRTDRLCGEHXHZJTXXTQKHKPVMIUDLPBZYWLWMWVBYARAAWFXWMQTDCIEPPKLTSILUMAYGNSGNNJGWOPSVGDRUSZEOCYQCCR");
    msg.lbearing = 0.9309127424283953;
    msg.lelevation = 0.5752138583777966;
    msg.bearing = 0.15299977901927353;
    msg.elevation = 0.23207637023231908;
    msg.phi = 0.5220163811944739;
    msg.theta = 0.28947948516006716;
    msg.psi = 0.6448238845720486;
    msg.accuracy = 0.5030828035732428;

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
    msg.setTimeStamp(0.964546173930615);
    msg.setSource(7010U);
    msg.setSourceEntity(93U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(247U);
    msg.target.assign("UVQXLQIZPWLMJPHGLBECXHASWIWDSZDJNOBHCNIPECKGGNFFOYUHROJAOLXPYCLJFAIGSUFBBLYZHDYHMMDWXS");
    msg.lbearing = 0.1948644536635845;
    msg.lelevation = 0.9476955242316532;
    msg.bearing = 0.982002177834401;
    msg.elevation = 0.602804438729249;
    msg.phi = 0.5424725545586209;
    msg.theta = 0.8885035898232144;
    msg.psi = 0.13017786621493155;
    msg.accuracy = 0.3605495866200801;

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
    msg.setTimeStamp(0.32959693197447304);
    msg.setSource(58403U);
    msg.setSourceEntity(167U);
    msg.setDestination(64983U);
    msg.setDestinationEntity(222U);
    msg.target.assign("OXWZUYPVPCILJJ");
    msg.lbearing = 0.7981686332698531;
    msg.lelevation = 0.7783859819602057;
    msg.bearing = 0.9483941817504201;
    msg.elevation = 0.12641967083006345;
    msg.phi = 0.2624689350796082;
    msg.theta = 0.9505486080336821;
    msg.psi = 0.785950461148325;
    msg.accuracy = 0.002667101359657975;

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
    msg.setTimeStamp(0.4592729581133347);
    msg.setSource(35422U);
    msg.setSourceEntity(178U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(62U);
    msg.target.assign("ZAEYVOUNVLYDUQZWABLATJICGRCPBPOMIHXTXDBAHRELWUTSYMXXQRRWHKMYKEJCYUMUTQLRARIQOBTLCOSFNMBQMU");
    msg.x = 0.9962221296797587;
    msg.y = 0.08341045544329717;
    msg.z = 0.7943531673802169;
    msg.n = 0.49691804455213073;
    msg.e = 0.76684613757587;
    msg.d = 0.02210072203740554;
    msg.phi = 0.354986717511955;
    msg.theta = 0.0076406722074343625;
    msg.psi = 0.514753841571101;
    msg.accuracy = 0.0745955114874135;

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
    msg.setTimeStamp(0.34265839915411667);
    msg.setSource(2673U);
    msg.setSourceEntity(133U);
    msg.setDestination(42029U);
    msg.setDestinationEntity(245U);
    msg.target.assign("QBUHJIGOABCYFSOJMEEJRZGOGWLQZFJZWNRCKJHYZKGYMIXINQYCPMFOCK");
    msg.x = 0.8186527924455065;
    msg.y = 0.10943930682936476;
    msg.z = 0.21315010296091663;
    msg.n = 0.9103868956568596;
    msg.e = 0.465989997270427;
    msg.d = 0.0885076853788952;
    msg.phi = 0.9451065922817089;
    msg.theta = 0.636975836928322;
    msg.psi = 0.26191658128244666;
    msg.accuracy = 0.14752400209828043;

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
    msg.setTimeStamp(0.9384658692663351);
    msg.setSource(1559U);
    msg.setSourceEntity(199U);
    msg.setDestination(44155U);
    msg.setDestinationEntity(31U);
    msg.target.assign("HONUICLBHIDCQMVDDYOQBEIXVAM");
    msg.x = 0.4482740483381348;
    msg.y = 0.8867379038840353;
    msg.z = 0.5310405395612522;
    msg.n = 0.6063338248087903;
    msg.e = 0.24038912433582227;
    msg.d = 0.5694462073934672;
    msg.phi = 0.6935970512265905;
    msg.theta = 0.9606201615523002;
    msg.psi = 0.4715175907942858;
    msg.accuracy = 0.05359960426065147;

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
    msg.setTimeStamp(0.10481912539931748);
    msg.setSource(59687U);
    msg.setSourceEntity(239U);
    msg.setDestination(20418U);
    msg.setDestinationEntity(218U);
    msg.target.assign("HSNYQVFMPZFFQQNCWTSG");
    msg.lat = 0.21774612365018442;
    msg.lon = 0.8112982367223841;
    msg.z_units = 180U;
    msg.z = 0.4696889170005354;
    msg.accuracy = 0.4578559359617993;

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
    msg.setTimeStamp(0.42404377717026476);
    msg.setSource(9026U);
    msg.setSourceEntity(62U);
    msg.setDestination(29817U);
    msg.setDestinationEntity(175U);
    msg.target.assign("EYSQZIRKJYCMJQZQWWJIZFKCCKIZFWSFNVDVLWQFRYBOULEJKVRHPBRIOTDOZSCYGTMBLDYTZXLFOLNLPYCIZQXXQZYOGIUPVDHKXEVTUXBOMNYLSQTSKJDYPATFSHEFISKMWAXZYLJTEGPXALXHCDMJBUEESLBENMDWGIQNAEGVANCRPNROAINUFR");
    msg.lat = 0.15176903355337334;
    msg.lon = 0.4102443677033595;
    msg.z_units = 47U;
    msg.z = 0.6630926545165203;
    msg.accuracy = 0.38279020128635477;

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
    msg.setTimeStamp(0.42441437726451336);
    msg.setSource(18662U);
    msg.setSourceEntity(175U);
    msg.setDestination(51663U);
    msg.setDestinationEntity(34U);
    msg.target.assign("TWNNPSKJRWNALOMVQTKFPWUUCDMDOAWECHZCYYQKMSNMIWXYWBVZFFFLARXLOLQXGPOOFTATYWUZFDIIGHL");
    msg.lat = 0.6677534177097089;
    msg.lon = 0.4035729314452773;
    msg.z_units = 109U;
    msg.z = 0.34656991812420135;
    msg.accuracy = 0.7252054549416359;

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
    msg.setTimeStamp(0.5276449098435498);
    msg.setSource(41385U);
    msg.setSourceEntity(189U);
    msg.setDestination(17089U);
    msg.setDestinationEntity(96U);
    msg.name.assign("YLBFRGUBKBZJLOHDHBBPKZFCZIYUUSXTFQCRECMYNNHQYKKGQQFKJIRDKTZFZHMAVJORMOWAUDZQDEBTYGNOTHBSMZSJERODPFGQRDHIXBHUNJECAGPKVKYTM");
    msg.lat = 0.863803542852699;
    msg.lon = 0.7113060064707553;
    msg.z = 0.028661657597047308;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.983015362275938);
    msg.setSource(17954U);
    msg.setSourceEntity(128U);
    msg.setDestination(6863U);
    msg.setDestinationEntity(129U);
    msg.name.assign("CVUTJNFPWBLLADHURWLHQGYELQVTACWGTPGZWEFHEULCKEEXOCOUTDZZYXFFJNCMQMJTLYBWRBQRWVNNOEZNGKKLGKACPADOMYGENMWSSEJJMBYXFAXXHHOBSXKRHKRDXLIDCUFVPKSQKVHTPVBDXYOGMFKRAVMUVTWMSEJSJYMUYIWIZRHVNACZOWHICKSXJUIEFLGIBQHXUSI");
    msg.lat = 0.5854350535136432;
    msg.lon = 0.3510696480508635;
    msg.z = 0.8773843056880867;
    msg.z_units = 166U;

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
    msg.setTimeStamp(0.4608575637745488);
    msg.setSource(60752U);
    msg.setSourceEntity(224U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(61U);
    msg.name.assign("NNHKOIPLXKQ");
    msg.lat = 0.6795298909963641;
    msg.lon = 0.7135126409578034;
    msg.z = 0.0011848051785066094;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.9718235122255926);
    msg.setSource(49065U);
    msg.setSourceEntity(95U);
    msg.setDestination(63108U);
    msg.setDestinationEntity(224U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.47899074184379886);
    msg.setSource(14588U);
    msg.setSourceEntity(82U);
    msg.setDestination(31300U);
    msg.setDestinationEntity(10U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.769341558655503);
    msg.setSource(11025U);
    msg.setSourceEntity(41U);
    msg.setDestination(49406U);
    msg.setDestinationEntity(19U);
    msg.op = 192U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("DBGRYFKXNXMCVWTSDVWYCJHANZVICZQVLEEWTYDBMQBVTKWLJBPCIWBFACUEYLJWSXEJOFGOXLFUVSYEUCKOUQMKHTRFCAQLDQQKRULMHXVXQHPGLWUHKNRLOYADVYISIFZADGHJBUSRGYKTTRAXNJOOPISELKPPUMJXWTFYQPUHGXWKPMXQKENZRMAENJORGEYPFUVGVZNPMSZBI");
    tmp_msg_0.lat = 0.41429125892916097;
    tmp_msg_0.lon = 0.968309257093992;
    tmp_msg_0.z = 0.1848690359236176;
    tmp_msg_0.z_units = 209U;
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
    msg.setTimeStamp(0.23299196789600718);
    msg.setSource(22596U);
    msg.setSourceEntity(211U);
    msg.setDestination(51777U);
    msg.setDestinationEntity(16U);
    msg.value = 0.6346079994719172;
    msg.type = 196U;

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
    msg.setTimeStamp(0.37435079568890106);
    msg.setSource(49125U);
    msg.setSourceEntity(146U);
    msg.setDestination(54542U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8492205956989693;
    msg.type = 214U;

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
    msg.setTimeStamp(0.8502747967039465);
    msg.setSource(25123U);
    msg.setSourceEntity(103U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(177U);
    msg.value = 0.2867137314775309;
    msg.type = 61U;

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
    msg.setTimeStamp(0.05789027601773333);
    msg.setSource(17533U);
    msg.setSourceEntity(52U);
    msg.setDestination(38816U);
    msg.setDestinationEntity(24U);
    msg.value = 0.8332453740883923;

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
    msg.setTimeStamp(0.6611623836216729);
    msg.setSource(26562U);
    msg.setSourceEntity(58U);
    msg.setDestination(56873U);
    msg.setDestinationEntity(192U);
    msg.value = 0.6022335072255526;

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
    msg.setTimeStamp(0.4615695773386831);
    msg.setSource(28937U);
    msg.setSourceEntity(215U);
    msg.setDestination(25838U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8743495452204986;

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
    msg.setTimeStamp(0.32699363191341324);
    msg.setSource(38033U);
    msg.setSourceEntity(52U);
    msg.setDestination(65072U);
    msg.setDestinationEntity(17U);
    msg.timestamp_last_service = 0.5980795572194141;
    msg.time_next_service = 0.0060478129666446945;
    msg.time_motor_next_service = 0.39066928066400364;
    msg.time_idle_ground = 0.9906431615811011;
    msg.time_idle_air = 0.10739231549938044;
    msg.time_idle_water = 0.11563354492703004;
    msg.time_idle_underwater = 0.7818627037281284;
    msg.time_idle_unknown = 0.7472037802041525;
    msg.time_motor_ground = 0.17956726081544494;
    msg.time_motor_air = 0.12216821496052588;
    msg.time_motor_water = 0.5041798712860498;
    msg.time_motor_underwater = 0.6440843340368726;
    msg.time_motor_unknown = 0.1291048601009318;
    msg.rpm_min = -29865;
    msg.rpm_max = -30809;
    msg.depth_max = 0.9410554870663738;

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
    msg.setTimeStamp(0.22281269910575408);
    msg.setSource(60691U);
    msg.setSourceEntity(210U);
    msg.setDestination(40048U);
    msg.setDestinationEntity(216U);
    msg.timestamp_last_service = 0.10917052735117472;
    msg.time_next_service = 0.7274834735576029;
    msg.time_motor_next_service = 0.9287445825299977;
    msg.time_idle_ground = 0.5240931451300811;
    msg.time_idle_air = 0.8949413726894005;
    msg.time_idle_water = 0.8172776180756043;
    msg.time_idle_underwater = 0.8157541349623281;
    msg.time_idle_unknown = 0.9457554477809158;
    msg.time_motor_ground = 0.44808108243778355;
    msg.time_motor_air = 0.08789488874626306;
    msg.time_motor_water = 0.5951824663873189;
    msg.time_motor_underwater = 0.17176776751731337;
    msg.time_motor_unknown = 0.5756557870270446;
    msg.rpm_min = 2448;
    msg.rpm_max = -3463;
    msg.depth_max = 0.0710114461638729;

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
    msg.setTimeStamp(0.23730329856721089);
    msg.setSource(22531U);
    msg.setSourceEntity(94U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(84U);
    msg.timestamp_last_service = 0.25326322399019574;
    msg.time_next_service = 0.004916631639808711;
    msg.time_motor_next_service = 0.990568816366637;
    msg.time_idle_ground = 0.39536599977346387;
    msg.time_idle_air = 0.883887256249031;
    msg.time_idle_water = 0.5185631382745088;
    msg.time_idle_underwater = 0.7106839775723228;
    msg.time_idle_unknown = 0.028975663888319514;
    msg.time_motor_ground = 0.4785847222645323;
    msg.time_motor_air = 0.2226683606967793;
    msg.time_motor_water = 0.03421308386380717;
    msg.time_motor_underwater = 0.5235907375173368;
    msg.time_motor_unknown = 0.127653203353168;
    msg.rpm_min = -3216;
    msg.rpm_max = -23846;
    msg.depth_max = 0.38498795289391863;

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
    msg.setTimeStamp(0.3752027311215327);
    msg.setSource(62197U);
    msg.setSourceEntity(75U);
    msg.setDestination(6609U);
    msg.setDestinationEntity(84U);
    msg.severity = 248U;
    msg.text.assign("XGRWCGJYWIIOXTUNRXH");

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
    msg.setTimeStamp(0.38786923192562117);
    msg.setSource(57025U);
    msg.setSourceEntity(127U);
    msg.setDestination(42201U);
    msg.setDestinationEntity(166U);
    msg.severity = 218U;
    msg.text.assign("SRWVCOYPFRPWOILQVEHOXHKDQNXFXHCZARWJKRDCJGILJCZQOHYAI");

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
    msg.setTimeStamp(0.46473849924888444);
    msg.setSource(26425U);
    msg.setSourceEntity(43U);
    msg.setDestination(48235U);
    msg.setDestinationEntity(211U);
    msg.severity = 168U;
    msg.text.assign("DNFEFMMXJVXVRBYUODYAKOIALMAWTULIPQQQXTRHKUIDBWMJVVJZBVA");

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
    msg.setTimeStamp(0.4891729713648866);
    msg.setSource(1330U);
    msg.setSourceEntity(73U);
    msg.setDestination(483U);
    msg.setDestinationEntity(114U);
    msg.channel = -69;
    msg.value = 969811498;
    msg.gain = 211U;

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
    msg.setTimeStamp(0.3089822749159655);
    msg.setSource(19706U);
    msg.setSourceEntity(73U);
    msg.setDestination(41778U);
    msg.setDestinationEntity(60U);
    msg.channel = 50;
    msg.value = 1089124126;
    msg.gain = 45U;

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
    msg.setTimeStamp(0.5937947424384001);
    msg.setSource(5926U);
    msg.setSourceEntity(55U);
    msg.setDestination(1805U);
    msg.setDestinationEntity(60U);
    msg.channel = 27;
    msg.value = 1345102641;
    msg.gain = 216U;

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
    msg.setTimeStamp(0.4057361069279787);
    msg.setSource(1797U);
    msg.setSourceEntity(84U);
    msg.setDestination(39885U);
    msg.setDestinationEntity(124U);
    msg.ch01 = 0.2903828243931157;
    msg.ch02 = 0.40387702159591055;
    msg.ch03 = 0.9416072088471332;
    msg.ch04 = 0.5073809709156313;
    msg.ch05 = 0.8696768322767657;
    msg.ch06 = 0.19562708326617528;
    msg.ch07 = 0.6953002160992251;
    msg.ch08 = 0.3827686147153637;
    msg.ch09 = 0.9626445688330028;
    msg.ch10 = 0.2717068755053852;
    msg.ch11 = 0.8588047397052112;
    msg.ch12 = 0.5455668258338088;
    msg.ch13 = 0.8455832142533795;
    msg.ch14 = 0.5632320686205493;
    msg.ch15 = 0.4668724424316425;
    msg.ch16 = 0.1769405295090849;

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
    msg.setTimeStamp(0.19491446714270644);
    msg.setSource(12156U);
    msg.setSourceEntity(126U);
    msg.setDestination(39081U);
    msg.setDestinationEntity(47U);
    msg.ch01 = 0.9558784642595253;
    msg.ch02 = 0.2867702437160363;
    msg.ch03 = 0.1956357883955887;
    msg.ch04 = 0.1482362509839501;
    msg.ch05 = 0.6644310758910719;
    msg.ch06 = 0.16096574149882947;
    msg.ch07 = 0.5138425354251438;
    msg.ch08 = 0.5639995449810775;
    msg.ch09 = 0.36775883470907145;
    msg.ch10 = 0.49669979783841667;
    msg.ch11 = 0.7382210020366081;
    msg.ch12 = 0.6956960093834029;
    msg.ch13 = 0.8551370123380084;
    msg.ch14 = 0.8171904287371252;
    msg.ch15 = 0.2855396344966864;
    msg.ch16 = 0.6711835377763193;

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
    msg.setTimeStamp(0.5058178538792271);
    msg.setSource(62753U);
    msg.setSourceEntity(164U);
    msg.setDestination(209U);
    msg.setDestinationEntity(33U);
    msg.ch01 = 0.1684392830951401;
    msg.ch02 = 0.11795060810291624;
    msg.ch03 = 0.3697411966765556;
    msg.ch04 = 0.4923110768191833;
    msg.ch05 = 0.2318529972335942;
    msg.ch06 = 0.8398359618435247;
    msg.ch07 = 0.8389171679798687;
    msg.ch08 = 0.6563706472174091;
    msg.ch09 = 0.7666530651151804;
    msg.ch10 = 0.8930582141336222;
    msg.ch11 = 0.5503661894070899;
    msg.ch12 = 0.30017041508831754;
    msg.ch13 = 0.6267720893347142;
    msg.ch14 = 0.6861346841702342;
    msg.ch15 = 0.004286662828613563;
    msg.ch16 = 0.5258801395065441;

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
    msg.setTimeStamp(0.029825785348637113);
    msg.setSource(37693U);
    msg.setSourceEntity(50U);
    msg.setDestination(27541U);
    msg.setDestinationEntity(17U);
    msg.op = 154U;
    msg.lat = 0.2732738375013649;
    msg.lon = 0.34863137942495925;
    msg.height = 0.7941458130507266;
    msg.depth = 0.013159292373853715;
    msg.alt = 0.7626169230344468;

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
    msg.setTimeStamp(0.2695481398134707);
    msg.setSource(35587U);
    msg.setSourceEntity(27U);
    msg.setDestination(37422U);
    msg.setDestinationEntity(111U);
    msg.op = 82U;
    msg.lat = 0.716084619766722;
    msg.lon = 0.7954924522928079;
    msg.height = 0.2429799418534916;
    msg.depth = 0.6895965994433644;
    msg.alt = 0.6534737943827471;

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
    msg.setTimeStamp(0.5721054247675258);
    msg.setSource(13825U);
    msg.setSourceEntity(240U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(240U);
    msg.op = 10U;
    msg.lat = 0.6744544317405718;
    msg.lon = 0.647709889864325;
    msg.height = 0.33524400437546287;
    msg.depth = 0.04159051038056116;
    msg.alt = 0.6525657000975018;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.08556505646822599);
    msg.setSource(17794U);
    msg.setSourceEntity(132U);
    msg.setDestination(15903U);
    msg.setDestinationEntity(38U);
    msg.nbeams = 128U;
    msg.ncells = 86U;
    msg.coord_sys = 75U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.6362781894241742;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.43446249092113054;
    tmp_tmp_msg_0_0.amp = 0.4176428290319666;
    tmp_tmp_msg_0_0.cor = 187U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.07090604718928839);
    msg.setSource(61788U);
    msg.setSourceEntity(195U);
    msg.setDestination(17889U);
    msg.setDestinationEntity(220U);
    msg.nbeams = 26U;
    msg.ncells = 191U;
    msg.coord_sys = 252U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.43397374928470545;
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
    msg.setTimeStamp(0.15203786951367337);
    msg.setSource(14990U);
    msg.setSourceEntity(116U);
    msg.setDestination(65328U);
    msg.setDestinationEntity(49U);
    msg.nbeams = 227U;
    msg.ncells = 60U;
    msg.coord_sys = 90U;

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
    msg.setTimeStamp(0.427134057074253);
    msg.setSource(52594U);
    msg.setSourceEntity(158U);
    msg.setDestination(53428U);
    msg.setDestinationEntity(246U);
    msg.cell_position = 0.882019568756075;

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
    msg.setTimeStamp(0.9676891688442217);
    msg.setSource(25757U);
    msg.setSourceEntity(92U);
    msg.setDestination(57280U);
    msg.setDestinationEntity(155U);
    msg.cell_position = 0.39541751376715817;

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
    msg.setTimeStamp(0.3085112847783602);
    msg.setSource(29844U);
    msg.setSourceEntity(152U);
    msg.setDestination(4501U);
    msg.setDestinationEntity(61U);
    msg.cell_position = 0.23562663401167327;

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
    msg.setTimeStamp(0.7486879653346762);
    msg.setSource(35391U);
    msg.setSourceEntity(137U);
    msg.setDestination(44303U);
    msg.setDestinationEntity(16U);
    msg.vel = 0.9923310829189441;
    msg.amp = 0.9213356987093929;
    msg.cor = 166U;

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
    msg.setTimeStamp(0.5617139861156678);
    msg.setSource(22037U);
    msg.setSourceEntity(155U);
    msg.setDestination(47843U);
    msg.setDestinationEntity(88U);
    msg.vel = 0.24111506690420237;
    msg.amp = 0.16888798375789194;
    msg.cor = 254U;

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
    msg.setTimeStamp(0.5922957293053972);
    msg.setSource(37144U);
    msg.setSourceEntity(108U);
    msg.setDestination(41175U);
    msg.setDestinationEntity(14U);
    msg.vel = 0.034865718734399476;
    msg.amp = 0.7538679373141047;
    msg.cor = 249U;

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
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.7943309227520198);
    msg.setSource(7992U);
    msg.setSourceEntity(182U);
    msg.setDestination(62559U);
    msg.setDestinationEntity(125U);
    msg.rid = 38485U;
    msg.host.assign("EWOQSVOTQFCNIFTBRUDRQKYDCCGXMXEUIOBOEZWKGXDKHPKEHKOXRLUCUAAMDVHNNQRYNZTCTAFHDHPEIZWFJPEXKVBCJFABTDINAMHILSSYZZSJDFPBXKX");
    msg.path.assign("NQMODWFVOMUOZAKNRXINEJCGYG");
    msg.query.assign("QMQDKUHUOCIKBRJITJCUVPZSPBYWIXXJOTLKPCVDCPGNDJKRFFSHEUZXMQASGNLREARAPLEUTHXMOJTVNCYYCYAILWVJUBDRPGVOYIXFDSZDGBBWSYDOFWAQAZOFNMHFMQBUGXYEXBQQMQCFFVDYHSA");
    const signed char tmp_msg_0[] = {91, -25, 98, 21, -39, -102, -98, 116, 28, 118, -121, -36, -55, 118, 123, -106, 20, -40, -5, 2, 111, 57, -82, 54, 88, 90, 9, 71, 96, -77, -3, -104, -74, -64, -26, -109, 33, 20, 16, -61, -48, -97, 109, 58, -97, 5, 120, 96, -88, 94, 18, 28, -21, -57, 22, 49, -48, -73, -118, -70, 73, -37, -122, -90, -69, 38, -94, -91, 40, 109, -27, -57, 6, 96, 109, 86, 71, 52, 76, -84, 62, 119, -118, 121, -82, 92, -7, -51, 36, -88, 22, 95, 66, 72, -95, -85, 49, -57, 90, -99, -85, -84, 15, 101, -118, 76, 68, 84, -89, -38, 96, 36, 112, 38, 73, 105, 115, 92, 23};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 50U;
    msg.file_data.assign("NHQIOEAOZVVOBQTEZQFPJPKEFBPYDDGWIIOTICMARMPCKVVYCBDZWYIWQWLGTOXXPYZSHOUKCULLKLBKEKBABSEBLNJCMSCCLCNABFKDJNLYTBUOYELUJMUWMJECKHUXHWSGVTERDPJDLTOSHWFNPRWVUDXFGRFQZDVFJCNGARRHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.9262651254879356);
    msg.setSource(14665U);
    msg.setSourceEntity(4U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(167U);
    msg.rid = 39148U;
    msg.host.assign("IROQZNRFFUCVBXLDGMYJNUKXLGIHCSLBPUZCQFTQDLIGNLLUHTSTIYYAIUJHSNHTTRKWVVYYBQAJIDQFSEBDBNLGWTRPFBNREXVDUPOPTKFYAJZEPUXHQDUWHZYXFPTDMZBELJCOKRHMXAZXGWCMXXGQVHHSKTRDGJCFSYMRPNVIWJSYESFM");
    msg.path.assign("MRBMFCDWCMGIDSTNMTNAFDBIKQVMHZQEZJGYBATXFLCEUSOBUHXVNPOBDYPHZVTGVLXJTHNARCOZHKBKTQRDFNABEJOPYSASTKLUCTASMZXETXSHNWOYBFYZAJUZMLZXPYWQCWRMOPEUOGCFIOPRGQWIIXXANLRXUESELLKAGNYYQEQKHCBFJJIQIUPGNOVQGIIGFJDDLPJRUGWKFEBLZRUSMVIDHMRKDJRZEWVVDOHALWHCPXKPCKQJY");
    msg.query.assign("YRKVTRJFMJHCTN");
    const signed char tmp_msg_0[] = {117, 10, 104, -87, -36, 30, 79, -3, 38, 97, 4, -109, -81, 78, -35, -107, 70, -103, -76, -50, 83, 43, -84, 70, 76, 14, -108, 40, -95, 19, -41, 32, 123, -16, 28, 119, 20, 82, -87, -26, -5, -111, 52, 80, -81, -45, -95, 80, 36, -9, -48, 84, -63, -73, -103, 68, 59, -50, 110, 56, -3, -44, -60, 100, -94, 33, -7, 90, 121, 7, -51, 0, 103, 8, -71, -6, 93, -76, 33, -93, 123, -111, 58, -45, 125, 80, -28, -77, -52, 6, -15, 53, -21, 50, 68, -61, -50, -106, 86, 101, -23, -69, 61, 113, -62, -30, -63, 59, -48, -65, 103, -14, -121, 116, 16, -28, -109, -70, -78, -21, 122, 46, 76, 124, -87, -84, -70, -85, -48, 98, 46, 6, -86, 4, 37, 86, 44, 114, 0, 48, -12, -79, 25, -48, -89, -91, -59, -49, -85, -31, 68, -25, 77, -99, 103, 6, 58, -55, 10, -24, -33, -31, 83, 94, -73, 107, -98, -22, -110, -67, 61, 110, -75, -50, -120, -51, 120, 59, -82, 52, -16, 88, 46, -6, 72, -98, 3, -85, 48, 28};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 117U;
    msg.file_data.assign("DXGDVMOUHVPCDJCLOYGSLKNWSPNGAKNCYYEVJWOSUFWXDDUPTPYLTNMQCTVYRRBQVYJTLIEOBUCDKVKZWTZIVDTQMZXHJMFORRQNRHDOZFWTBEIBQSQOXBFXAAIKNQVREXUHFGOZXNLACLAUEZBSFNWILY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.5891355729005574);
    msg.setSource(19154U);
    msg.setSourceEntity(103U);
    msg.setDestination(29001U);
    msg.setDestinationEntity(147U);
    msg.rid = 12658U;
    msg.host.assign("TSNADXLERICVTRUCPGHYGAHWZWXJWKCYRMNKVINGCEMHDUOLTJMVHBTXZSOSTIMMXBJXQNWGWMODFMLYWVOYHPOJSIQDMJAAKQJCPKPDU");
    msg.path.assign("KHWLTJINZTEPUZWLCOJOPQFUCKBJDDTTRGVIEWXRUWMFHQPENAXOCOIGUFKXZTREUWYPJAKEUACTMRWKLRUYQJNKXGQYCHUBQIFMDOYNELPVZSEKINBVZPIAXSVJPLLPATBHMROQQHZVDCJVBKSABNMFSOWYMUKGYLNSLOBCYXFOFJHURWSAPRDNSZMMDXQYFAKGCIEVDIYPWAJXXVQFMWODHDSRIGJT");
    msg.query.assign("HUXJWSAAWTGLCBEPVDUGGMHADFMKSSBFQDDQLMHBFNXRQPFKAWJKQMGWTWBLSNVDUWXJACBQSLJVCNEFOPRQZFCXLFYORRTBIKTKVNLPTMXUYBPYGZGNERYCOGMPLQINZAGSZXDVHRGQYCCINRMYVEIWMJMHCRDZSHYWZEMTODZNKTSIXNEPKAQPLKJIXBUKJDTLPCHUYTZGBIUPVIOWASHR");
    const signed char tmp_msg_0[] = {-121, -4, 33, -126, 15, -67, 0, 7, -108, -84, 63, 85, 35, 97, 96, 38, 17, -5, -45, 41, -121, -4, -1, -23, 78, -62, -71, 11, -30, 79, 16, 70, -21, -103, 116, -101, 103, 107, -12, 53, -16, -48, 26, -75, -37, -101, -52, 21, 77, 106, -72, 43, -64, 114, 98, 126, 64, 10, 105, -1, -25, 87, 51, 28, -48, -86, -19, 41, -44, -86, -68, 49, 48, -105, 4, 1, -107, 112, -93, -108, 67, -69, 43, 41, -3, 67, 80, 2, -59, 15, -38, 121, -63, 27, 74, -84, -79, 100, -113, 42, -23, -128, 101, 112, -116, -15, 15, -63, 66, 90, -126, 25, -27, -114, 109, -46, 83, -40, -93, 39, -83, -45, -1, 102, 107, 94, -109, -63, 88, -100, 69, -17, 37, -118, -2, 35, -69, -13, -59, -2, 4, -73, -24, 52, -36, -110, -34, 62, -12, -80, -82, 108, 69, 27, -63, -87, 115, -45, -48, 49, -79, -113};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 239U;
    msg.file_data.assign("QOIQWOCVGISFSAXCRMZOPXPUOKNJRBRVBVKEEJAAXSVYKTSOAWLACOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.199702020279101);
    msg.setSource(34681U);
    msg.setSourceEntity(14U);
    msg.setDestination(37489U);
    msg.setDestinationEntity(113U);
    msg.rid = 2965U;
    msg.response.assign("SOQBEAZMTYRKSHIWLVINFVCLAXGGSTXKLPNUADEWRICHXGHBBOLJPTIDASBXEXFWGHQGENKVVPFOSAJUAMFPANWSILLRCYXKPXBMMJZZKSUNLXIELA");
    msg.status = 20537U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.3104808793161723);
    msg.setSource(32101U);
    msg.setSourceEntity(115U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(168U);
    msg.rid = 54965U;
    msg.response.assign("JHMABTKNVHVAEJGRWPGFSOKRZEPLLVIOHYDZLIMYEYWACHCTFDIFSXSBZMIYQVQJXZAQKEHNNWXTULLFFLSJVCOSOOAFZYCLOFZTDCVETKGOBXSDIZTHYDCGAPRBRMGOUNUGXNUSSJQRQQGHMWUBMTXMYWWQDQGPZDPPYITCAULREI");
    msg.status = 60998U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.47817367082564444);
    msg.setSource(44621U);
    msg.setSourceEntity(186U);
    msg.setDestination(2156U);
    msg.setDestinationEntity(32U);
    msg.rid = 4100U;
    msg.response.assign("EVBGHEVKIAFWWGEFFXFRUNCFKDSHLAHNCENAPPVTDDRQSDOOELYGDQYITUIVVNEFTGTTSDVHIOMXZTNSZIJKBWQWRPCIQMIQORHIZTRMLBYSMNFUEOEPLFDDZCNLOQVOHKYQZSJAJMWVKMAIDBXVPKBZJSWXBRXMPEQVKCMSTHURYLGCJUXYMUCTAKNSGJOLRCUHA");
    msg.status = 59526U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.07479988126819315);
    msg.setSource(5799U);
    msg.setSourceEntity(1U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(213U);
    msg.fstype = 240U;
    msg.filename.assign("ECJVFMLZSPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.11303227178087272);
    msg.setSource(8719U);
    msg.setSourceEntity(119U);
    msg.setDestination(57886U);
    msg.setDestinationEntity(82U);
    msg.fstype = 216U;
    msg.filename.assign("ZGDDRJTVWPGRDNKDRCQHCGRZFYYTLCXIROHLHGHMFGFXISREMIJYKXRKUVFAZYIENCNJCOQEYMPVQTLMQISPLEVUYFFYTOXWICDGUPEKXXBKMQBLCIBBNMVPOAJWOZSDZUZEDRONJHTLAIUTDKDKUNWVBBCNQGXJQXZVMLKVAMTGZENQBSWWSSJHFPQKBAMAVIWSUOASFYDOHNFLENWJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.7220771280767507);
    msg.setSource(58663U);
    msg.setSourceEntity(167U);
    msg.setDestination(11014U);
    msg.setDestinationEntity(203U);
    msg.fstype = 15U;
    msg.filename.assign("BPIJQRZFKKTADQJTEHWRCNWXGTWDFNPLPXFQOYDLIBZOQYDRLOJTCXOQUFXAPUBXBDVNCQZAXYSFTSKOGVKHYYUKCEWUCVDVJDNEGNYJQNYTDJLIPRESOAVSKPSUWUGINCAUEBMPBVXBMEAAEKAJNUSROVTLZIMHYZHEMGWWAEPMVPRHZOIHTJZUWZKNRSBGDFIFDMWLBSXHEMMMCTIRACQCLSQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryGsmCredit msg;
    msg.setTimeStamp(0.8983226857286626);
    msg.setSource(60329U);
    msg.setSourceEntity(59U);
    msg.setDestination(50960U);
    msg.setDestinationEntity(203U);
    msg.req_id = 49320U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryGsmCredit #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryGsmCredit msg;
    msg.setTimeStamp(0.3301657651259);
    msg.setSource(61995U);
    msg.setSourceEntity(109U);
    msg.setDestination(923U);
    msg.setDestinationEntity(19U);
    msg.req_id = 35382U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryGsmCredit #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryGsmCredit msg;
    msg.setTimeStamp(0.8452108687459354);
    msg.setSource(38383U);
    msg.setSourceEntity(202U);
    msg.setDestination(40818U);
    msg.setDestinationEntity(33U);
    msg.req_id = 6400U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryGsmCredit #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileClassification msg;
    msg.setTimeStamp(0.48908942444042824);
    msg.setSource(47994U);
    msg.setSourceEntity(225U);
    msg.setDestination(485U);
    msg.setDestinationEntity(166U);
    msg.original_filepath.assign("HUWGSLFGCWIYWRTKRNPUQJOUYEHYERJWKBRPMIDWXMZRTGXQOCAFMBBPQTMDRHLAETPFZDNKGYVNEQGQJESZIGNKFWMASTNMNQSOGKVVIXDPVSBRLIVIUCXFKQTWDVDNBGUXSAOICFSHRAOKCLMGICYAPHTXWBZSCBPSKCUVPOUVRAOJHDQEMMXTTUKFYEJLDDHTJDMBVFHCNXQJZYRLAIYJAN");
    msg.resized_filepath.assign("JADMSUWREFYQUWJCQTDHWKTNKOABFQPGQEQTKCRCYZIPVDKBFWYXCFPOXEQXBCTVMAUMFRXTCLJXXBRGIXCPNHWGPLSBTNFBMCFSUMLFZOOGYSNNVYDJNMADVSWBROTTJZAGRYRIBOJWLDSNMILGMIIHHYDQKIQVIHEEFLHSZJGHWGEMOAZOBHEXXDOJZAGURFNVSPWUCUUAZMKLVTKQQNKJBS");
    msg.class_prediction.assign("VUXERYUWNYTLQAMTYKMKFVKYLPEYBCSOOUDXQSWMJPOJGHZYQNTIGRPNTJAGCIZOIRHKTDQMYFVZGXBGRRBWSPFVZUWXMPNQTULZPRUOKBZGSYACAUMSBBSEVLZTBKPAINKGMGFNFVRCCDCTWQQHAJA");
    msg.confidence = 83U;
    msg.fstype = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileClassification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileClassification msg;
    msg.setTimeStamp(0.819208741945909);
    msg.setSource(19918U);
    msg.setSourceEntity(243U);
    msg.setDestination(60693U);
    msg.setDestinationEntity(70U);
    msg.original_filepath.assign("OZMHXHOFBRLPFEQPLZMHGDZQGFRMJVQAQDCENJLGHUWTFNGWDJDMCYPMRWALYJELNDCMDFDZCFZCWTEPYISUSXNLWXQDVPWTELQOVJHUYRWZGMNTRNSBEMFKBXSLJGAK");
    msg.resized_filepath.assign("DVWAGYNMAQKXUJLKXYBUBBFLHKCMSSVPUFHJKINCWIIVJEXEZWPIRZLMWNYNDLNPHBEHSADLPGQLWMDJURVZURNHZLCCZRLSJKDMKPPSRXTIYMVDGXMRYHOGCBITKYS");
    msg.class_prediction.assign("OTQROMBKPIXSELUDNCBIAVOBUAVXDJYSGDGQTTWYTXHXOKDECUNBLLUFWVGKQZPVTNIJJMGKNGEIYFSEAZEPIYVQISTUJFPZDFHHNWKMKAEXBLAMMQBVNAKJUSEXBCCRHQTBPRGFDJYAGJPENMDHRDVVHLCJQLMXMYGWOAESYNYZFWAQWLNILKGOSMUPCXCHGVLTJACRZQUUZLXKHSNWEKBRIXZIODFOZYOVRRHFMUWIZSTJWCQPZOPYRFRTW");
    msg.confidence = 90U;
    msg.fstype = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileClassification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileClassification msg;
    msg.setTimeStamp(0.28691667650748276);
    msg.setSource(50600U);
    msg.setSourceEntity(52U);
    msg.setDestination(52432U);
    msg.setDestinationEntity(138U);
    msg.original_filepath.assign("XOWSPVHZFNKSRRNROKVARL");
    msg.resized_filepath.assign("DJSKSWMDZTKVOCNAARUJSAMZEFEYWZSCBWALIVSCWDUOKQHTLYPYUZSOMPUVHHDKFCQLKKCEQXENWTYPMOIQHXZFKMSGJYGGAXMTIRBJCMHGHWHFWLKLVFWQFICTTROQXMAGBMQGXTPUVKFEXZWRPRSLREOXQVCPQEIPNALYILWINYOGCGVUIUNBNZFBXHPLZBJGRHJZDGNVRDPMBJDIADJTJNRUSNQK");
    msg.class_prediction.assign("VAZPQVZUJYSODLEEATXBTEETUDXBRMZRBKKYYUDXYFFTBIHEXKPXRWLVXMJKYWPUWIXNMSSTMRQCXQNVWZNIUOJDQGWOPJCHNSKFUSFZGGYEFILLLUNQJJCVQVROYNHFKDNVWZAHTTVBTJVMOBOKZSZSFHBNRMDNEGJKKCMTRFOVWSCONHHEYFGJPYFDCPXUA");
    msg.confidence = 77U;
    msg.fstype = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileClassification #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9610192588857118);
    msg.setSource(42278U);
    msg.setSourceEntity(104U);
    msg.setDestination(49623U);
    msg.setDestinationEntity(165U);
    msg.name.assign("LJNZGASYAZHTZDXOVIKVJPXHQJRTLYYFPAWWSSOPMYQFRPHILXIBIUZJDECXCGBAFBPZOXLRYYTQWXTDJPHQICMYRMLFTBOQSCAHML");
    msg.value = 222U;

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
    msg.setTimeStamp(0.11317672740733231);
    msg.setSource(43401U);
    msg.setSourceEntity(189U);
    msg.setDestination(37850U);
    msg.setDestinationEntity(62U);
    msg.name.assign("BQZPSTHWLTYTGLXXWSTORNHXVYDKZOPRBSHJVAULOCACGSPHCZZUWKDFEXSXNEJXPQPKYFR");
    msg.value = 15U;

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
    msg.setTimeStamp(0.8242622730697818);
    msg.setSource(9103U);
    msg.setSourceEntity(27U);
    msg.setDestination(55485U);
    msg.setDestinationEntity(29U);
    msg.name.assign("ZJWDGSYVCXCJFKWHERHGETDLBMMHWGXSSKJFSRJVBYZJTSSNNEGRIBRAAJGHZFIXPXEAZWUJKFKEZQAXOLYQDRZBTLQQUQLXIECTXJMWMNFYPSDTYFLPDKQFHBIOSYNTNHDZOMBCUWMJLOKCBTRGVTIXWIINSGWURGXKRZXOVCUICOPQQPDFDFGQDYAUEA");
    msg.value = 117U;

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
    msg.setTimeStamp(0.6452333898934888);
    msg.setSource(54166U);
    msg.setSourceEntity(46U);
    msg.setDestination(27047U);
    msg.setDestinationEntity(1U);
    msg.name.assign("PFWJSXAERRWCSFTQHHRCVQIYIUVOJGIJGUEKIAFYDNEPPZAUBFDXUBIWHMGWACMBQDURMEJMLJLOETOZSBLLKEJQFHAMWXKBSREMTHOQNKCZUDTOGQIOCWBNRZHYCVJSKLJZZTBLFGYDCT");

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
    msg.setTimeStamp(0.9734699059877032);
    msg.setSource(11721U);
    msg.setSourceEntity(220U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(10U);
    msg.name.assign("CJCMVJZIFPGYJOTDWTNJTGLWUQFJWBFGNXTXKERDKGEMZVZXTOWAWKIHLSHKVCXQUZRRVKLMIUWYPAAAMKHYNSGAXDDZTLNCWPEROHMBGSIHNZLGPELKEMPYWCFBTBRFTISJUPFQKDZYWSUCVDGBRPOQNYCS");

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
    msg.setTimeStamp(0.7034487219669533);
    msg.setSource(43466U);
    msg.setSourceEntity(104U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(218U);
    msg.name.assign("QRCNQFBMHEYGLXBTBKKKJTWLOYANYFSZCSLDWASEYHDXKQBEIAFAZEUSJLYCVLOKSAOQVNGXLNCSMVBBTPEFHRTUZHDFUJMMCNCDVJHYVRBIWHVXNQPQTEGUEAJOMDPTVOBDFGNROUFAIBWZFJDXAGZXZY");

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
    msg.setTimeStamp(0.9308043910889723);
    msg.setSource(48905U);
    msg.setSourceEntity(85U);
    msg.setDestination(60441U);
    msg.setDestinationEntity(240U);
    msg.name.assign("BYAAZBIFVTKKWIUQDEDIYLCNYWFUAPQQGFLISGYQGBGTMSRGHOGDKQXEMHZHHXEPNOKVALSQJBMCLCGWHHXQEVLFSFYPJMUCWYUFZIOMNJKDXNMUTPHYISCPABVNZQZUUOBDBKGSBXRADLHELHTKTWVEARNEKCP");
    msg.value = 184U;

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
    msg.setTimeStamp(0.7358545614133978);
    msg.setSource(16881U);
    msg.setSourceEntity(178U);
    msg.setDestination(36766U);
    msg.setDestinationEntity(142U);
    msg.name.assign("SKLIUOMHZXWGCZMXFOWTAOEUWZLECLDJYDHIDCQMIHTOVARJHNRESYKFVONWZPMAZHWQOJVEKSQQQTMVBLJKHBTZTESSIOGQBQDKCUVCXYQLEMONPFTUWUUFDVRPUZCDHAYYSISYMAPYCAUXDBIISBBLVXEFPTDJQBZURKHGJDF");
    msg.value = 2U;

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
    msg.setTimeStamp(0.5362129880928479);
    msg.setSource(33225U);
    msg.setSourceEntity(208U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(186U);
    msg.name.assign("DWCGGYFXANGARIOHMSDJYYWGPLXKTVKJSQHOYSMUQNGHETABYHFUNKKLUDTNXZZIIIQUAIAFOCEJBBNOISDXJVCHFBYQRRPRYUSEZKPAWBHKPPIPPNRDOQZT");
    msg.value = 67U;

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
    msg.setTimeStamp(0.5714773218920877);
    msg.setSource(51975U);
    msg.setSourceEntity(32U);
    msg.setDestination(55949U);
    msg.setDestinationEntity(134U);
    msg.value = 0.3510825658870008;

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
    msg.setTimeStamp(0.12243463817443856);
    msg.setSource(57570U);
    msg.setSourceEntity(140U);
    msg.setDestination(47844U);
    msg.setDestinationEntity(38U);
    msg.value = 0.7622859125894281;

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
    msg.setTimeStamp(0.9435185654820175);
    msg.setSource(51623U);
    msg.setSourceEntity(246U);
    msg.setDestination(1098U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6059214031452718;

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
    msg.setTimeStamp(0.44923405119555637);
    msg.setSource(7679U);
    msg.setSourceEntity(165U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(131U);
    msg.value = 0.16674698119400821;

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
    msg.setTimeStamp(0.025683673029749277);
    msg.setSource(5615U);
    msg.setSourceEntity(53U);
    msg.setDestination(23118U);
    msg.setDestinationEntity(11U);
    msg.value = 0.09602418036964255;

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
    msg.setTimeStamp(0.20295237623682383);
    msg.setSource(43712U);
    msg.setSourceEntity(121U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(13U);
    msg.value = 0.1555392178139009;

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
    msg.setTimeStamp(0.6384760131950152);
    msg.setSource(57771U);
    msg.setSourceEntity(64U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(168U);
    msg.value = 0.30769755747584393;

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
    msg.setTimeStamp(0.6930768282987315);
    msg.setSource(18975U);
    msg.setSourceEntity(32U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(254U);
    msg.value = 0.3776258786280928;

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
    msg.setTimeStamp(0.3211859046696923);
    msg.setSource(13713U);
    msg.setSourceEntity(161U);
    msg.setDestination(38002U);
    msg.setDestinationEntity(19U);
    msg.value = 0.5451648808566617;

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
    msg.setTimeStamp(0.9303938550459712);
    msg.setSource(42671U);
    msg.setSourceEntity(181U);
    msg.setDestination(63136U);
    msg.setDestinationEntity(41U);
    msg.restriction = 221U;
    msg.reason.assign("HKMNGKLHAMCRCWSZVAPJNSQFZLLVFGYRVBULEZJMVDQQQ");

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
    msg.setTimeStamp(0.049459301889668295);
    msg.setSource(33556U);
    msg.setSourceEntity(172U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(194U);
    msg.restriction = 84U;
    msg.reason.assign("BFMUQCYPFVAQRVSTPVXYI");

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
    msg.setTimeStamp(0.5567434489053182);
    msg.setSource(5843U);
    msg.setSourceEntity(244U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(23U);
    msg.restriction = 26U;
    msg.reason.assign("JIYNQAHDEZLDPTWVRFQVJSXHGMVPTFYHCIIJVMBHIGEBHPLCQQHWZRZASAWFFNXBSFDUAIDURYWWWVPXNUGHIEEMCISRKDJKNUXTOAKCOBNCZYBEFHVGRKERBQUTTYSQZYLYWLGWEIZFMEIRUTPVMVQYUFJZMHMNOQDJVNLSXEMWDOJCRBKXFTILKJXSPMPAXRDSDNPUFWCKHLDLAOCOPQTSNUUCZBSJXAKGRLOOKETGMYCZJT");

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

  return test.getReturnValue();
}
