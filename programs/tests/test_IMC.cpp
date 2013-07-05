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
    msg.setTimeStamp(0.4027301352453241);
    msg.setSource(58020U);
    msg.setSourceEntity(19U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(214U);
    msg.state = 225U;
    msg.flags = 44U;
    msg.description.assign("LKXGJMKMJCFWWGSWXKNLDHHEQWYXCTFDCNMJMMZYMFUGOBXDYUZXYOZMLPKCETSTTOVHEIOYMGNABWVNIVAUWCOXZEPUPHVLBAKSRONDKBYDQYQGAVCAJEYDT");

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
    msg.setTimeStamp(0.21717527455555574);
    msg.setSource(35224U);
    msg.setSourceEntity(226U);
    msg.setDestination(37040U);
    msg.setDestinationEntity(200U);
    msg.state = 152U;
    msg.flags = 96U;
    msg.description.assign("JLAIREMWXPOZXYSKZYQNJRS");

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
    msg.setTimeStamp(0.8180163899285432);
    msg.setSource(2552U);
    msg.setSourceEntity(168U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(225U);
    msg.state = 146U;
    msg.flags = 205U;
    msg.description.assign("PFLSCVYKRJMMFTUYWLFZKVHUBWEAAVSAOGNKXLIJDDYSQELB");

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
    msg.setTimeStamp(0.42700077808184866);
    msg.setSource(36270U);
    msg.setSourceEntity(104U);
    msg.setDestination(31435U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.8033945497166003);
    msg.setSource(51668U);
    msg.setSourceEntity(178U);
    msg.setDestination(58807U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.7635030595759971);
    msg.setSource(46018U);
    msg.setSourceEntity(4U);
    msg.setDestination(49852U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.5129657886614141);
    msg.setSource(8316U);
    msg.setSourceEntity(253U);
    msg.setDestination(54297U);
    msg.setDestinationEntity(198U);
    msg.id = 200U;
    msg.label.assign("NVGFJMFOGYTNERZLYDJZZPNEVIXOCDEMMPAQGXGLQQNYQHUARSOQAKBMRDNCTYAMWYIJWJSTNDDJVVCBLOVRTVFITBLOUEYJSKUUDEKGMLGXYCKGFVCBRPDACQPJXCOOMANIAPUSTBBXLWEPRDRBYUKJZHSLCVQWIETHMSHEXVZDYRSOWWQUDNSIZKNFQOFXEFTPUAUXILFSHKARGTKBHSPAJC");
    msg.component.assign("IVCYOQWAWJMGNMVTNNTONYYLNMTPAKWVKSWJHGBTRFOZNFDELVOWUPPVEOXBCUWRZPFLSEYUJOQUJXXGIRVQREILGLXYGMT");
    msg.act_time = 36726U;
    msg.deact_time = 54280U;

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
    msg.setTimeStamp(0.5913533407572842);
    msg.setSource(60358U);
    msg.setSourceEntity(33U);
    msg.setDestination(28959U);
    msg.setDestinationEntity(79U);
    msg.id = 127U;
    msg.label.assign("ZPAXYKYENNJCERFDCONBZLUJBIDZOTUPCBFTUZZNYLMAYVVFXSQEWWXGUPUJSPWVWEEUCDZXTJHBSXRPHAJZAKRGMLMYEUQQZTVWAAQPPDNAQHTZXTCHEDRSHMUXYEBQFSXSIVKCLRKUOMJLRIFCKHXMNEBJMJD");
    msg.component.assign("MGHLRXXWWGMJSIGKOLQGYRJQMQBLVRNDFVGXSALFCWXNFHDCJSN");
    msg.act_time = 30709U;
    msg.deact_time = 20980U;

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
    msg.setTimeStamp(0.38124065644835436);
    msg.setSource(22028U);
    msg.setSourceEntity(133U);
    msg.setDestination(17527U);
    msg.setDestinationEntity(7U);
    msg.id = 191U;
    msg.label.assign("KWVBPTUZWNUJGEWLVCRCIRYKAWGTEMYVTXALKKNTMGQNYWJQNAJLIQRAHKHWBWMWUIHIMVTJBDXMODDGMTCKKQFLRCNCZKFDSLDOBXEJGDADUPA");
    msg.component.assign("OSKNEOSSNAQLGTBHIAQRCXUYAWDDCTYMWUEFGSCJOJVHZMCJFDEKPBNNLLE");
    msg.act_time = 38233U;
    msg.deact_time = 10238U;

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
    msg.setTimeStamp(0.8206814927488651);
    msg.setSource(6205U);
    msg.setSourceEntity(37U);
    msg.setDestination(47887U);
    msg.setDestinationEntity(82U);
    msg.id = 227U;

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
    msg.setTimeStamp(0.7946934684162343);
    msg.setSource(48729U);
    msg.setSourceEntity(149U);
    msg.setDestination(3399U);
    msg.setDestinationEntity(140U);
    msg.id = 236U;

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
    msg.setTimeStamp(0.37508772963701364);
    msg.setSource(64597U);
    msg.setSourceEntity(246U);
    msg.setDestination(55052U);
    msg.setDestinationEntity(38U);
    msg.id = 108U;

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
    msg.setTimeStamp(0.7109299507707803);
    msg.setSource(29930U);
    msg.setSourceEntity(175U);
    msg.setDestination(56501U);
    msg.setDestinationEntity(223U);
    msg.op = 110U;
    msg.list.assign("LOIESHJGBDLJERWWDVBXVYMKEYCEQLRRWAPLQSMBXXORDQZHUHRHFPXFNBPGRQYFHXAAMHJINCTCISTCJGFUQWDIZZONBLZTRHQWJAMEFFQCNKOUVIZCOJVJZTIEAQCXUAKGSKTYWBUNPJFCJMMN");

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
    msg.setTimeStamp(0.3329887332234732);
    msg.setSource(13324U);
    msg.setSourceEntity(143U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(25U);
    msg.op = 233U;
    msg.list.assign("NPEDRGIMVTMNEAGWANSPUUFMYOCTJGQZJKOXDRUHFTCWLUDMLGYYHFSKJITLDIHCVBBRWDQDCNRKJXBFJULQVOLMVQCANMQHVATJRRXKHVSEPZEWSQPFKKKWMOJDSOV");

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
    msg.setTimeStamp(0.9915443814199888);
    msg.setSource(27313U);
    msg.setSourceEntity(61U);
    msg.setDestination(46732U);
    msg.setDestinationEntity(32U);
    msg.op = 150U;
    msg.list.assign("WLWCHAFUSBXRNAMJLAZBFLSKNZOARGNEIEOAMOUVRLMBDNEJJURRVMWFKVTTIGHQGTXQDTNDPPUWCZYSXCZXIQCKEWKODYKIOFZYVORGCMHAFANWFTDPCWJWEGTXDGEGNSHRHUMXLVIJKMPYUSZKPPVFBVHCTENGBJIPYOQEVBXBYQSPIOLXCUSUYMIYMTRAOZMGZPZLIDYYNZKXIHPJEHQARHKFQTJDQSBWBLXNFSLKUASVHT");

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
    msg.setTimeStamp(0.3625481531944349);
    msg.setSource(62079U);
    msg.setSourceEntity(153U);
    msg.setDestination(885U);
    msg.setDestinationEntity(211U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.7019251816190794);
    msg.setSource(54860U);
    msg.setSourceEntity(4U);
    msg.setDestination(246U);
    msg.setDestinationEntity(162U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.04460423344535147);
    msg.setSource(42078U);
    msg.setSourceEntity(239U);
    msg.setDestination(8117U);
    msg.setDestinationEntity(222U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.8418072428590424);
    msg.setSource(30469U);
    msg.setSourceEntity(1U);
    msg.setDestination(52567U);
    msg.setDestinationEntity(29U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.8081803279285315);
    msg.setSource(41146U);
    msg.setSourceEntity(222U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(106U);
    msg.value = 54U;

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
    msg.setTimeStamp(0.28230353447143264);
    msg.setSource(55650U);
    msg.setSourceEntity(63U);
    msg.setDestination(31662U);
    msg.setDestinationEntity(138U);
    msg.value = 245U;

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
    msg.setTimeStamp(0.8534463931661581);
    msg.setSource(64294U);
    msg.setSourceEntity(171U);
    msg.setDestination(48225U);
    msg.setDestinationEntity(69U);
    msg.consumer.assign("UTMWKBQEYKRKKYVXNZQPDBMOTLCAZZGOMUENITMBPVAKDATFPZSYDHMXYRQJJXCCFQSEASVASAOMDONHZHGGPJJAZZVSJIRWRHDLJXHNEWYRALYIXDEBSYPFZBAQIIOIUORIG");
    msg.message_id = 4323U;

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
    msg.setTimeStamp(0.3020611910925113);
    msg.setSource(17208U);
    msg.setSourceEntity(174U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(223U);
    msg.consumer.assign("FMHGTYYJRDHEQLUJUOKQGFRHZZJJIVWKPOUQWJZVMWUSEAWPKOBZQGYTDBQQXGTTWOLALSFADPNGIRLFSASEUJBACLNLEVKIZWCOXNVKPXAIBOCEYMDXMMOYXAGRHQZPIKRQGABFBSSSIZPXKTXHTNVCJDGNWSTYKVMPDPYCHUPGCBNWYDWDZB");
    msg.message_id = 44319U;

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
    msg.setTimeStamp(0.07347657830501297);
    msg.setSource(32331U);
    msg.setSourceEntity(33U);
    msg.setDestination(52456U);
    msg.setDestinationEntity(81U);
    msg.consumer.assign("VQAQTAACBSYLLCEJSVDEZNDPRDOAGIMLPBOENBFEIEOZWGCHNXYPUTUDDVNWRSWTQUDEKQHXZBDRJKBJCMEXQRBHIQQJLVJTRTWIPGKNQZVQFKKGEMPGAOSUTIPCLRYTJJIZPBNAZAMNCWMVQRFFISGXXVLPJVKCAFWLWXKERMGZSEKMIWCBOHRBFTUHGOUTYXHGDDZJCKIIRYHANHVNUHXAYUDMSFWO");
    msg.message_id = 56644U;

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
    msg.setTimeStamp(0.6848803694933789);
    msg.setSource(18790U);
    msg.setSourceEntity(186U);
    msg.setDestination(15205U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.683538770223102);
    msg.setSource(48978U);
    msg.setSourceEntity(215U);
    msg.setDestination(53012U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.3068901705511662);
    msg.setSource(15625U);
    msg.setSourceEntity(79U);
    msg.setDestination(41124U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.47150313207575334);
    msg.setSource(51054U);
    msg.setSourceEntity(174U);
    msg.setDestination(60812U);
    msg.setDestinationEntity(202U);
    msg.section.assign("TSPBZMEVXTZJFYPBHKWJEZQWSXHQDVNTDEDLUGGKJCRRUQCDLKREVEOTSOMKPZCPGLYODXBQXNITIQYMXZKVQJGSGAAELCAHAJUUAGVJTRPYMICCMLFKAWFPUMDHKFLUNVOULPIVYDW");
    msg.param.assign("LHBZOJVFHDGMKDPJRJJGXBRXUHAKNEDJEBMOOIMTSOMSXLFKSZGDAAZNWFTZYSQZXLQPFRRNECQLORVVTGSUDLVLKFCCYBSWGPJSEWGBYUYJIHPLJNZXRNIOHFFDTRXIMBRMSIGOHLRHUIXHUQATPIFINAWJKSTOQJATHPTVWUVVKYQMZGWNWAOEXPSCBNVACBDUYMCFZYEKYQMK");
    msg.value.assign("ESACGIOAUQLUXNXQZXWXLGJSQGQVKZKCNFPOGVMFDWOQOFJTIYPPHZAUPJTOUVALMRYTHHYBHKWWVLYZNFUJFMRORCDTTSIAEFXVDRRQPRKUOEHQXYMPKSHXE");

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
    msg.setTimeStamp(0.14284888255151773);
    msg.setSource(30554U);
    msg.setSourceEntity(219U);
    msg.setDestination(59977U);
    msg.setDestinationEntity(143U);
    msg.section.assign("LHPWVFDRCOIDVRTFNSNPJOYKZHBDWBSQASMDQ");
    msg.param.assign("SKJFREKUSGOCLHSNTTDWNNGNQXDGRQEROXYARGZQUHWAKIQYXHIIFJLPLWEBDYLKWJAVPXVOWPATGMOGLVVAHSNWJLTLTCYCZ");
    msg.value.assign("OBRGGVPDFCJESAFIIIHBWWLVJBITBAKBRNZAIYVNSZLOIDTXGZXPSYETUMQVZRFQCGYCKPJAJMEVFFDPRWFVIPQLQHGXWHOKOEHCKDHXYPCBOCRMJDEYJJPBRZUSNGNQRZYTNJATFNW");

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
    msg.setTimeStamp(0.3105046442342706);
    msg.setSource(61029U);
    msg.setSourceEntity(37U);
    msg.setDestination(13138U);
    msg.setDestinationEntity(129U);
    msg.section.assign("QDEWXVNKTPANAXUJLHXNCNRPXABIWPTVWEHWMXZKJMYSDZJVINLGEEDAVOIPQ");
    msg.param.assign("TKXCYJTABOWFLOSBTRLDVYUHONISSDLYQQFKMOFINYVU");
    msg.value.assign("ZWSILYRPAXSCRJBVYDPOGELNKAMNNFCVWJBWNMJLHLAZFWFPNVIUYAEWEKXQRHQOIRVYSFIUCCYSOBBTUYRWWYIFOHOCPIMUFSGTVQTZNMGH");

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
    msg.setTimeStamp(0.6017352784189155);
    msg.setSource(39680U);
    msg.setSourceEntity(2U);
    msg.setDestination(16184U);
    msg.setDestinationEntity(236U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.9176680315706847);
    msg.setSource(11975U);
    msg.setSourceEntity(104U);
    msg.setDestination(57909U);
    msg.setDestinationEntity(54U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.3362197084987175);
    msg.setSource(36971U);
    msg.setSourceEntity(212U);
    msg.setDestination(62816U);
    msg.setDestinationEntity(169U);
    msg.op = 240U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ARDYHZINPBTELQTVQLFNCD");
    tmp_msg_0.param.assign("KQOWCURUPPOAKILXKYRMJOCFBYUYMIWROXAIUMHLDPQUGWOSXFLRFHHNTSHNESZGSENNHJGFCUANTRWGYVPADCRJRLDVLJJTFBEEBWVCLN");
    tmp_msg_0.value.assign("TESBAHIQQNKNINVOJJOQEVFCRRGGFRCDYSPZGUWKESYHKBNDZSWPVWCHRKBYRUGMWMEQWEJXLPDBBKGFGQRLQGIIH");
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
    msg.setTimeStamp(0.8897798647713855);
    msg.setSource(23284U);
    msg.setSourceEntity(169U);
    msg.setDestination(291U);
    msg.setDestinationEntity(37U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.20773327082425463);
    msg.setSource(38224U);
    msg.setSourceEntity(122U);
    msg.setDestination(37179U);
    msg.setDestinationEntity(16U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.45966572924277094);
    msg.setSource(48305U);
    msg.setSourceEntity(21U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(143U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.7384455732971361);
    msg.setSource(47439U);
    msg.setSourceEntity(58U);
    msg.setDestination(58699U);
    msg.setDestinationEntity(215U);
    msg.total_steps = 34U;
    msg.step_number = 173U;
    msg.step.assign("GPNMIHJZBOHISRXWXPUZCOXMEEYEMBIDAIDBHKUAEWCDKAYENPNPWXTBKQNDIOARKKBGCRLFXGFUYWIJOTPYOBLXUDJKGQGCVJRQOMWPHFYMAADAECSSRIVCTRFHXGZBTGPTUMVHGYQHQAWPGEYRNVQLNWIOLTRKEHZSTMZPEFPWXCFKLLQOUFQNQOMRXZBNBUSVHTASVODZALLIMVDWSDDJSTRHCSJVN");
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
    msg.setTimeStamp(0.025825079399387607);
    msg.setSource(37733U);
    msg.setSourceEntity(119U);
    msg.setDestination(61963U);
    msg.setDestinationEntity(233U);
    msg.total_steps = 26U;
    msg.step_number = 16U;
    msg.step.assign("UHZCJTAQSXIJBNYIMAGPNOXDJTJHDSZXJMNIGLZLRHBQNYTYBXSPMKMTLRAQZYZSBIIHUPAPZAUNFOGIIUTDTXZUOJFICEQVNWRVHRGFFQCGGLFIBTLZHTEEOPRQKHMKLHSVWMUGXHOI");
    msg.flags = 57U;

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
    msg.setTimeStamp(0.7319553638202285);
    msg.setSource(40894U);
    msg.setSourceEntity(159U);
    msg.setDestination(39142U);
    msg.setDestinationEntity(33U);
    msg.total_steps = 229U;
    msg.step_number = 209U;
    msg.step.assign("NOXPOTZMRIPMKUAZVKNRXUJYDEIRBLADTAGWRXRMCXSPQSUDQWPOKSJWFTBDXFTKMYHHPGGXGSJSZEOKLHTYOUYAVECSWJICFQREIDINWHCSFXKZMNPOFCEBVOPLXQKQWIYJBIGLBMDHQOACBAJTLECFVWYJMBXLKK");
    msg.flags = 153U;

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
    msg.setTimeStamp(0.33192832545535933);
    msg.setSource(5437U);
    msg.setSourceEntity(145U);
    msg.setDestination(53510U);
    msg.setDestinationEntity(123U);
    msg.state = 14U;
    msg.error.assign("PNBEMNPFVPVAWIFSHSBDGOQDXCVTXKRROQKGPCCQQBJLNHIATZTWWZQDQWKTVRPBYYOREDDYSXWFZHXKTXOHRVCWGPJKNAFJVYGMEQFNBMIIHRUWECKLOKXNFLISMEHOUWBMUCZVXVQXCFEZUZSYQNLEUWAZGGMNXOIGMEFQKFPHPYPLZOMHDPJLLUOLSVRCHETADCRMYJEIHGGZKOLJXAJJNWUBAIDJRBBTYCUYTGZUIBSJNDAT");

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
    msg.setTimeStamp(0.24740677436722502);
    msg.setSource(50954U);
    msg.setSourceEntity(105U);
    msg.setDestination(33887U);
    msg.setDestinationEntity(196U);
    msg.state = 174U;
    msg.error.assign("AAWQMZULORBVTXWPTRQKBEGELZKHCRVSOJJIRRXQHZPEBAOPJWMPRFBTZHKFPZYLJVKNUFCQDISPWEXBIMBKLYORIHYCZCVWMTMPSZMFGSBPAGQUNLLEIDEAOHCUOUGAIJDSCUFXKYHVGGVRIDPAZYGDEVOKEFABNAPXNKCMVSVTITXFNONB");

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
    msg.setTimeStamp(0.44994846355450524);
    msg.setSource(39665U);
    msg.setSourceEntity(169U);
    msg.setDestination(61301U);
    msg.setDestinationEntity(235U);
    msg.state = 228U;
    msg.error.assign("CIOTFGBZCBIPIOUWKFNPMEACUHKSHHKXRGYHLAXDUMSLGDLQKYQHPCOJXJTWGGOQWAMXAKIHXUGTFMBXYJUZHCEGRLUIQKHMLYJJMSPTEQFTBGIFRRXYOPDFEAPHAGNQMTVZNTDADFTYPOWPDSUORDDETWVUBCDLSRLIWWNBQSXZNOKTBNFJEGAZYEYZMVUNCZWZLWNSJBCPEVVFDRCANVNS");

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
    msg.setTimeStamp(0.18457064088314834);
    msg.setSource(60834U);
    msg.setSourceEntity(209U);
    msg.setDestination(41948U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.42041528820484486);
    msg.setSource(36999U);
    msg.setSourceEntity(111U);
    msg.setDestination(33119U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.6285274400723906);
    msg.setSource(61982U);
    msg.setSourceEntity(10U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.6789522670721636);
    msg.setSource(65297U);
    msg.setSourceEntity(27U);
    msg.setDestination(57049U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.22896593682176958;
    msg.lon = 0.30975312247572906;
    msg.height = 0.30344572536195014;
    msg.x = 0.6209067247217035;
    msg.y = 0.5519189639801874;
    msg.z = 0.2693959867829192;
    msg.phi = 0.1679326578866842;
    msg.theta = 0.27473212841227357;
    msg.psi = 0.2688756917204893;
    msg.u = 0.8521014729846855;
    msg.v = 0.6994816262528321;
    msg.w = 0.37394323841568544;
    msg.p = 0.45283666704040737;
    msg.q = 0.11181237833391433;
    msg.r = 0.364009650452109;
    msg.svx = 0.20407515763925654;
    msg.svy = 0.5149839359117003;
    msg.svz = 0.6769539164922032;

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
    msg.setTimeStamp(0.30950723429209714);
    msg.setSource(24918U);
    msg.setSourceEntity(37U);
    msg.setDestination(22329U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.6966018106460333;
    msg.lon = 0.5980002417479289;
    msg.height = 0.17793427395171435;
    msg.x = 0.9323209416900082;
    msg.y = 0.06590524825861821;
    msg.z = 0.6155018794748671;
    msg.phi = 0.6449879411242242;
    msg.theta = 0.367175990858601;
    msg.psi = 0.23393138696907834;
    msg.u = 0.700874624250488;
    msg.v = 0.4108690668154372;
    msg.w = 0.20085298311253608;
    msg.p = 0.21507571817883542;
    msg.q = 0.9310639500291152;
    msg.r = 0.2456299394459065;
    msg.svx = 0.6891845822292241;
    msg.svy = 0.4198446573240283;
    msg.svz = 0.22106811557841488;

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
    msg.setTimeStamp(0.04485941871235044);
    msg.setSource(15303U);
    msg.setSourceEntity(146U);
    msg.setDestination(62064U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.2493620853195474;
    msg.lon = 0.36137689549461305;
    msg.height = 0.40171760067552664;
    msg.x = 0.7652184282230832;
    msg.y = 0.5139100266007455;
    msg.z = 0.14140908846177813;
    msg.phi = 0.346396764526647;
    msg.theta = 0.9362251389295494;
    msg.psi = 0.6021006287025454;
    msg.u = 0.658726095464045;
    msg.v = 0.22733216717068483;
    msg.w = 0.2940731007373747;
    msg.p = 0.10574029064389523;
    msg.q = 0.6419084758642417;
    msg.r = 0.7285244789406163;
    msg.svx = 0.7864631003863609;
    msg.svy = 0.5814410974784153;
    msg.svz = 0.9976339837141027;

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
    msg.setTimeStamp(0.16194253761698296);
    msg.setSource(7949U);
    msg.setSourceEntity(106U);
    msg.setDestination(56097U);
    msg.setDestinationEntity(69U);
    msg.op = 246U;
    msg.entities.assign("KODEVMOHBJSKTOGOMNUXGNRJDLVHHEOQPPGTKZRHPNCKDJNYTSMPCCAHSEFIOYHQVHSCPMVIFXDXTNDWHKIRFYYZCSYZVGUOQAGRSLOLTTSSGNUJAYRBUHNXWTDRGCBWMDLKUVTFEJJIXQQWFQWUBQPPZKOFIEKWDJWBRJZLFGLMCUYEARVEARUUBPIJULPRCQLNPGZYHLXAWNYBQZDITKAALAEVMVSVMWOFWXEZXESIJFKGFBDXCANYIIBMX");

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
    msg.setTimeStamp(0.41406863500273083);
    msg.setSource(42187U);
    msg.setSourceEntity(178U);
    msg.setDestination(61959U);
    msg.setDestinationEntity(252U);
    msg.op = 23U;
    msg.entities.assign("LXHXNELJDGQRNOIFWLIEEZCGGYFJEZOHXFILASYSLHBPZJXRQMSDZFDDBWCMDNXCMYDBVTPOECUFOMPVYTAUOWMBCSMVGRLPSXUBWJPELKRVJTXZ");

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
    msg.setTimeStamp(0.5229140612395867);
    msg.setSource(20670U);
    msg.setSourceEntity(53U);
    msg.setDestination(37908U);
    msg.setDestinationEntity(237U);
    msg.op = 4U;
    msg.entities.assign("EOFWSISKXBLJBEXDBHZAXGJHDEUDQCUBZTJRJXNZGJQPPILRYAVZZKVXKVLAWNSIHEJEFUDSDKDYEPRYBTUSRFASMVNLLPWITKGAYFYNCRMQMKBJMYBRSNUFCJXAOOGQLQTUHOSACPCJQWVQEWLMUHGTPNRIKCOWKFFVNIFIETHNV");

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
    msg.setTimeStamp(0.5486139444998729);
    msg.setSource(35203U);
    msg.setSourceEntity(94U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(14U);
    msg.type = 36U;
    msg.speed = 33667U;
    const char tmp_msg_0[] = {-87, 1, -32, 26, -22, -16, 60, -104, 56, 74, 9, 46, 56, 1, 89, 75, 108, -46, -109, -106, 67, 9, -76, 126, 57, -31, -45, 48, 18, 70, 71, -99, -74, 96, -19, -2, 26, 88, 114, 49, -125, -33, 6, -116, 92, -88, 80, 118, 118, -127, 98, 31, 104, -65, 81, 62, 33, 68, 3, -92, 21, -21, -81, 18, 23, 80, -90, 56, 76, -109, 95, 5, -20, 8, 86, -109, -68, -92, -6, -72, -17, 58, -78, -45, 41, -59, -20, -93, 57, 16, -23, 52, 42, -9, 71, -92, -30, -112, -36, -96, 36, 1, 55, -87, 114, 101, 45, 12, -2, -86, 66, -80, 92, -82, -77, 32, -100, 23, 105, 47, 14, 75, -112, 68, -30, 26, 63, -19, -89, 94, -11, 108, 38, 91, -88, 44, 80, -105, -42, 111, 116, 65, -75, -128, 99, 15, 104, 46, 65, 41, -19, -57, -18, -124, 27, -93, 119, 70, 82, -66, 28, -29, 118, 2, 97, -13, -18, 82, -29, 69, 6, 9, 55, 126, -1, 120, 124, 104, -122, 7, 79, 55, -22, 82, 7, 72, -73, -64, 112, 7, -23, 125, 15, -9, -79, 22, -118, -58, -33, 54, 52, 26, -21, 22, -17, 93, -52, 110, 98, -98, -15};
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
    msg.setTimeStamp(0.17113987459029245);
    msg.setSource(26082U);
    msg.setSourceEntity(14U);
    msg.setDestination(15312U);
    msg.setDestinationEntity(212U);
    msg.type = 87U;
    msg.speed = 1416U;
    const char tmp_msg_0[] = {-32, 45, 40, 87, 74, 76, -85, 70, -62, -92, 31, 69, 116, 100, 7, -16, -44, -41, 53, 117, 35, -117, -79, -79, 95, -21, -50, 109, 102, -93, 34, -47, -80, -3, -57, 95, 78, -93, 1, -115, 0, -27, -45, -96, 13, -97, -98, -110, -105, -6, -44, 71, -28, 76, 5, 103, 34, -112, -31, 107, 67, 11, -77, 91, 105, 96, -75, -92, 75, -58, -111, -44, 34, -113, -109, 49, -92, 121, -45, -100, 10, -45, -23, 67, 37, 50, 82, 64, 59, -84, -96, -5, -10, 37, -85, 118, -115, -3, -37, 107, -13, 60, 115, 107, -70, -51, 101, -21, -124, 108, 49, 63, -82, -81, 58, -71, 92, -26, 82, 43, -53, -20, 37, 34, -5, -98, 5, 94, -77, -6, 115, 55, 121, 76, 100, -111, 34, 64, 0, -10, 60, -35, 8, 34, 99, 94, -106, 55, -25, 83, -39, 39, -52, 118, 33, 58, 3, 13, -80, 104, 19, 48, 82, 120, 21, 119, 39, 88, 104, 116, -106, -31, -111, -120, 52, 7, 77, -126, 74, 38};
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
    msg.setTimeStamp(0.13897965077427266);
    msg.setSource(27436U);
    msg.setSourceEntity(35U);
    msg.setDestination(39195U);
    msg.setDestinationEntity(35U);
    msg.type = 220U;
    msg.speed = 60523U;
    const char tmp_msg_0[] = {-29, -101, -94, -128, -127, -18, 87, 88, 118, 34, -123, 3, 77, 63, 104, -30, 70};
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
    msg.setTimeStamp(0.7737805430019437);
    msg.setSource(38011U);
    msg.setSourceEntity(4U);
    msg.setDestination(33396U);
    msg.setDestinationEntity(187U);
    msg.available = 3767326803U;
    msg.value = 239U;

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
    msg.setTimeStamp(0.399700993952957);
    msg.setSource(19327U);
    msg.setSourceEntity(96U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(205U);
    msg.available = 3569240345U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.7584475015785601);
    msg.setSource(2763U);
    msg.setSourceEntity(230U);
    msg.setDestination(25587U);
    msg.setDestinationEntity(133U);
    msg.available = 1084943850U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.13446571995576706);
    msg.setSource(11761U);
    msg.setSourceEntity(120U);
    msg.setDestination(13349U);
    msg.setDestinationEntity(215U);
    msg.op = 210U;
    msg.snapshot.assign("WEDEHMCQGRJTCCHAARRGTYKFBCMOFXGZCPPSZJSMMRXIJAYURGSYVHVKEUNHBWKXAESKTDNHGBZKFPUOLWTDVHMPCAZGHTZLJQIXZHQEVQDYGXBIWXOVVMTVXNAJTLCPOQLWLNDZZFYQUINMLGYCDFYPBYXIMSEQZPWJOGAIIAFOAUKFENMKXLWFVURGJSBRJIDKEVNBRXLO");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.9803053402446598;
    tmp_msg_0.i = 0.7337087087763857;
    tmp_msg_0.d = 0.6584650844566347;
    tmp_msg_0.a = 0.5885874254758126;
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
    msg.setTimeStamp(0.24089929101548957);
    msg.setSource(61649U);
    msg.setSourceEntity(63U);
    msg.setDestination(32842U);
    msg.setDestinationEntity(118U);
    msg.op = 75U;
    msg.snapshot.assign("KGGGQMTUAJSMDLXRRYBRSZVATIFAVUMILBSMMFQEOQIOTKXUFAGSODRJYEWMAHZLXGOGCXSUNIJYVYIXNNWHCFZHRLUEKZLPDXVWNDNBRXYYYRKYUHZKASWMRMONKCBEPTOEOOXVJPSFNYVBQIHBBWVRKTVJELFAUKQTDZHHTKPJQCLMHCTISDWFCZOJEUIZWLTPDNILDHOC");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("LAZINAKTCFHZPVAFBYOACAIZKUBDJKBSBWIXKA");
    tmp_msg_0.value = 229U;
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
    msg.setTimeStamp(0.8891334291387308);
    msg.setSource(44883U);
    msg.setSourceEntity(10U);
    msg.setDestination(51054U);
    msg.setDestinationEntity(224U);
    msg.op = 160U;
    msg.snapshot.assign("HREVEQLBXOHGHZKHSYBDMVWNLCZTLYUHKRUPTQFRFEUYNTWBIZZFAGHZMBJIBOXWIEGXNANANUGTMQKWWYQNJEYICLAUAXJISPPPMZRGPTLACQPUXNFXKRIMFDTKSYVTKJRRTTSUSYHWOZSFRBJVYSHEPMJUIVGNKRXASYEITDQHQOGCLJWJPVXUFAFEOMMMVOLCKQZQVDSGFLJDZWOLCPKYAOQUCBGEPDOKZDDXJ");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("SUIDRQRMHERJGXBXJZCMQ");
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
    msg.setTimeStamp(0.7670700663872823);
    msg.setSource(22181U);
    msg.setSourceEntity(3U);
    msg.setDestination(14434U);
    msg.setDestinationEntity(22U);
    msg.op = 170U;
    msg.name.assign("SSTDQKJOWJNODXTVYLZEIGHSHKXLVUOVGGLFRPVZRYSJGHRRBZDPXAYQUQTPGMEQBWWPAZIYHDQKLFFCVEUKZOBCJXOTTMGOJMXDFORWEHAIZYNFVMMQUFBICPSIYTWJHUKCKXNJLVGEIEDSSWPMHOJEDTNLXABDAFPSLVBQLWNRKUKZNMORYRGMWAEBHUNICZQAVLDQJXUPKBASNEBIAE");

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
    msg.setTimeStamp(0.9835360795583966);
    msg.setSource(29366U);
    msg.setSourceEntity(44U);
    msg.setDestination(51264U);
    msg.setDestinationEntity(128U);
    msg.op = 117U;
    msg.name.assign("KYZGPMAVHUNUPQGMEZWJOCTKQACTYIDABLSUQQJFBLOCEXYRH");

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
    msg.setTimeStamp(0.9267803679227626);
    msg.setSource(59257U);
    msg.setSourceEntity(71U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(131U);
    msg.op = 239U;
    msg.name.assign("LBYYPZFZULXYSATQRKHNRXEZSBQDTNWVFSVIAVTRLRGNHAQWCVJKLPXABGCMZZLPIKNWCIBWCWYHNWCHKXNWOYFEJRUMZUMJBQXLVRUXENUIEFSDSHMPOHRVZFQAALW");

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
    msg.setTimeStamp(0.0285951166928905);
    msg.setSource(54332U);
    msg.setSourceEntity(28U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(191U);
    msg.type = 200U;
    msg.htime = 0.25398208598156746;
    msg.context.assign("NYTQOYYCXWFJFKIITGTMKUKWOOHIARVDAOZLJJKJLOTLFGZCZVGDRDKMALTNPIVNGIZVEFVQWWCRYTPNXFSZXKIPSJFBNBMQPGXGBQXDUHGQZUKXCQRFSBWAEHDHOESGSQQUEDNTPYBZDBLINJMCXBCCTLAUSHLZPCSJOXYUMRADEMEOERSUWHVADTMMWTXPNUHHP");
    msg.text.assign("DLKGNWFXLPASISTKBLSODSONAQKJTZZQWGDVWOEJKHOVEGWJVXCQMZYNYTVTAATBFNCOCBRXUWFPNEGLHXESMVFDVLOIPHDFCUFQSXMKIFSNGJOPSUWYKNZVTCIAOJNMGRRLJAVEFIZYEIJMBMTPDQESUUZHBVGPCGYEJRHPQRPKPHIHTGCNBKXUR");

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
    msg.setTimeStamp(0.29653562423145097);
    msg.setSource(50590U);
    msg.setSourceEntity(57U);
    msg.setDestination(43909U);
    msg.setDestinationEntity(194U);
    msg.type = 241U;
    msg.htime = 0.7921572299353209;
    msg.context.assign("YORQVJKLLAFNCOPOOYBMPSMKACFTXPOKBPRXAKWZRQEVUNHYHSYGTFGIAOBTUOVKVCKUUJIFMBHNEHVYEBCXNFYBYBZLTMRSWILSLAJPTDDPKNKFQNW");
    msg.text.assign("VBTDICTVYZRKKMLGICFUCQPZTAJZXQYVBJYQXAMVSZDUIAXZNTBUOMNEQXJWIMOECCOYQUTLRWAFYJHLCLWWBGYDHNCINQXFJHZNRFMVDKWSGGHECPPMLSTEJZ");

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
    msg.setTimeStamp(0.6434431516524217);
    msg.setSource(50812U);
    msg.setSourceEntity(32U);
    msg.setDestination(31504U);
    msg.setDestinationEntity(158U);
    msg.type = 241U;
    msg.htime = 0.9952040238142318;
    msg.context.assign("IVCXPMKQXNBXBKMBFLSQOTYCESVBTNFHMSAAIQPVQUYSDNHCHIWTXGVUFURJKAUAUMBUJMRHIVFLYMSBJCZQPTHPNQTRWFWBVBKGPZCDFDLOBHDILWXYTGKFRPKGCJIEOIDYAZRUWSMUOQIQGJXMOO");
    msg.text.assign("AHFCTFWHALXUEYDBXMWVQLHPCRYSCWLFFZXTSZUVLTOKIGJDFFLRSEFWVGROTQBVPVUDEZTKPJHOOZXFZMNCVCYQIEJZCOJKAIKKUPDM");

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
    msg.setTimeStamp(0.4658308656849458);
    msg.setSource(60057U);
    msg.setSourceEntity(176U);
    msg.setDestination(46656U);
    msg.setDestinationEntity(41U);
    msg.command = 103U;
    msg.htime = 0.4800816252150595;

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
    msg.setTimeStamp(0.8898640883608703);
    msg.setSource(26696U);
    msg.setSourceEntity(96U);
    msg.setDestination(60592U);
    msg.setDestinationEntity(111U);
    msg.command = 107U;
    msg.htime = 0.8748454904239872;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 200U;
    tmp_msg_0.htime = 0.9780518677886046;
    tmp_msg_0.context.assign("KZQAROTNHZLJAEKYMPOAMVQSJGJRQBZWWARU");
    tmp_msg_0.text.assign("SPUIPRFTLGLQEJQUJDUMKLJEBGVRGDVWLPFVGBHTJTUSMXMAVTJOCHYLGCAFEWERMCKVGHOPLBZIKFWJXBPDJXPRTQFXACOSKIHDUESMFAQWBOZHGODOILGOYTXKWPIZLDMVQBNNSPSFRYICYPQIFSMEHNKAWETKLIJKHOQWAI");
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
    msg.setTimeStamp(0.40869811679201906);
    msg.setSource(56636U);
    msg.setSourceEntity(194U);
    msg.setDestination(31171U);
    msg.setDestinationEntity(93U);
    msg.command = 108U;
    msg.htime = 0.3417031262321919;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 224U;
    tmp_msg_0.htime = 0.11949209787954895;
    tmp_msg_0.context.assign("YDKXEERTSUKVQBHQHNOQMPPBVTMOSJTDFEUYLJNUZORDHBCIHRXRKTCFBNNOINKDDIFCJHYXVRJYABLPFGBPTTVABZKVLITRMUSIJZAJYEHQDKGEYWAVGZETEIJUAUSZVEMJXMWLBRZWEQSONDSZWMVNHHLNOXPBAXYPKGLCWFYITIGUSJHSFCGOCPWXLZDRGURGMSCDVQWKFIK");
    tmp_msg_0.text.assign("VBSAUAWUJQNUWYQIGEJKLAMFFEULPTNRGGWSXQXEKNRAYUDOZRBVSYLEOELPCHWNWNSLMJCBLBVQPTNXXFODMMMSUFXYPAXIVQMJAVXSMBDRTESDVZRABXCHICTIOTBDINYZKUWIKRCEQFHQEVDAOMUELZCXLZJHFWVSVZGNWXCFMSPJHNCTJLIFKDZJGDJEYC");
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
    msg.setTimeStamp(0.4256105390190039);
    msg.setSource(25122U);
    msg.setSourceEntity(50U);
    msg.setDestination(1920U);
    msg.setDestinationEntity(236U);
    msg.op = 141U;
    msg.file.assign("CEEVRPORNSJAMGCJVZBBCTGVGQAEPHJBEXJKPAFVQGZUAUTNODDFCOBOXZSQFRNRQZJNKWCANUEMSHCMUQODLPXJIFLTKZKLESVZXVQJTGIAWYFZ");

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
    msg.setTimeStamp(0.1597689564180219);
    msg.setSource(9870U);
    msg.setSourceEntity(113U);
    msg.setDestination(19626U);
    msg.setDestinationEntity(121U);
    msg.op = 170U;
    msg.file.assign("UTHAMYPXCKTVXVVJWIUWGZQFZKAOHCTOWKRQQUKSKDZXNQVJZHJWTFMAFNXJFGAADSIEDABIAUPCJVJEYYZCDBLQLHPVYIBORN");

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
    msg.setTimeStamp(0.06294336450691684);
    msg.setSource(16278U);
    msg.setSourceEntity(170U);
    msg.setDestination(65086U);
    msg.setDestinationEntity(191U);
    msg.op = 238U;
    msg.file.assign("VVJRHWQPXKOBKORUPJNJULDBWPTJMLUXTXLJAKZZAVFFIQDWBUKASHGGEPNQRHQCYIFDFNSSEMUMRMHCGOCZHITYESMULIIRIKGMXRLRPBZWFMVFTXVGZOBTWYYWWUCKOSFKAVAGEHNSTOIJTCLBXTSHARMZURTVSCXOWCYJNQCEQPUOYIEVSLCDDRMDJLQZ");

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
    msg.setTimeStamp(0.38911944448254376);
    msg.setSource(50792U);
    msg.setSourceEntity(111U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(45U);
    msg.op = 225U;
    msg.clock = 0.8061100218250141;
    msg.tz = -65;

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
    msg.setTimeStamp(0.8645417106993446);
    msg.setSource(9005U);
    msg.setSourceEntity(163U);
    msg.setDestination(14463U);
    msg.setDestinationEntity(139U);
    msg.op = 174U;
    msg.clock = 0.31193795942858304;
    msg.tz = -58;

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
    msg.setTimeStamp(0.5303341802276476);
    msg.setSource(26075U);
    msg.setSourceEntity(65U);
    msg.setDestination(15772U);
    msg.setDestinationEntity(234U);
    msg.op = 135U;
    msg.clock = 0.28383248116156345;
    msg.tz = -25;

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
    msg.setTimeStamp(0.8363604713342951);
    msg.setSource(60085U);
    msg.setSourceEntity(79U);
    msg.setDestination(44161U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.8260677163894558);
    msg.setSource(21951U);
    msg.setSourceEntity(244U);
    msg.setDestination(45676U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.8866103765541822);
    msg.setSource(55710U);
    msg.setSourceEntity(52U);
    msg.setDestination(23120U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.37790242416540853);
    msg.setSource(44813U);
    msg.setSourceEntity(101U);
    msg.setDestination(40134U);
    msg.setDestinationEntity(199U);
    msg.sys_name.assign("QETLZNKTMUYYXJEBYDRZPUVGTEYYWYKJQLPXAQFIHIQW");
    msg.sys_type = 75U;
    msg.owner = 57529U;
    msg.lat = 0.993850975869253;
    msg.lon = 0.8688031096791885;
    msg.height = 0.6130744600886905;
    msg.services.assign("UFHUVQBLJPLGRJPIABOPJINWRYQFDRE");

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
    msg.setTimeStamp(0.46956909157846827);
    msg.setSource(39140U);
    msg.setSourceEntity(56U);
    msg.setDestination(50235U);
    msg.setDestinationEntity(152U);
    msg.sys_name.assign("GLPJTEPASRRDEILFXSGZTKMZLIWHPGNWTG");
    msg.sys_type = 70U;
    msg.owner = 13542U;
    msg.lat = 0.17930869187898557;
    msg.lon = 0.45203259983253063;
    msg.height = 0.2511237538601687;
    msg.services.assign("NMZVUPBLLBDLSVTJGACQJOFCKLXARNTSUMHMWVXIGKLMOYOQAJRLUIVWKEEIIBBTUNPFOGJSRRQHAXWMDUCFYQQ");

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
    msg.setTimeStamp(0.2713516820373022);
    msg.setSource(10621U);
    msg.setSourceEntity(246U);
    msg.setDestination(57088U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("JDUFVIKJWVDATIGZTPLBPMDEVQKEDMYPAKRNITZUMGLBUUUVRAYARVPHOJLQZWASRWAYLLVBHPAPMDWQETIX");
    msg.sys_type = 88U;
    msg.owner = 59735U;
    msg.lat = 0.5332814047899592;
    msg.lon = 0.31479004849944026;
    msg.height = 0.908144420114415;
    msg.services.assign("JQUHRCYWKSKJEBBSPUELMWDHXVVTGFLDKPVGTBMOMFUHJROAPTLZW");

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
    msg.setTimeStamp(0.012830405529338562);
    msg.setSource(16861U);
    msg.setSourceEntity(132U);
    msg.setDestination(12115U);
    msg.setDestinationEntity(142U);
    msg.service.assign("JNZDZOQHACFAWQKALCYYZHBUIXTEDXDCPTYEKFLFSZTQRUBGYDDXACDKWEFEHBJIOPZRUHPQLDZKSNVRXOTPMIPODYUGLPOURPCXMULOSIXACYUVEKJPSQAKVERWJXNEZ");
    msg.service_type = 145U;

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
    msg.setTimeStamp(0.18174945845781632);
    msg.setSource(51168U);
    msg.setSourceEntity(80U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(10U);
    msg.service.assign("YEEPFJHNGSNKWDLMCEJJRIKMMIKOMVLXHOFYINKJAHRMDWSVDDSKRGZDMMGYYJYYEABLSFVVVAGNRXGXUKAKSRDPTZBKXYOVDASOHTLOIXOVGUARVQPULDOCKOBMCWBOMTGGBUCXTRACWTUQFVRFRODTTZYSYPFRUHIJXZPWPELIJUZZELFYQUTZNSPPUEWPNHGKDXJVNXBQQHFIXBFSQLSTPAECLGWCIJANMNQHZTAQIWHNCBUWLQ");
    msg.service_type = 108U;

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
    msg.setTimeStamp(0.7443746915206277);
    msg.setSource(48480U);
    msg.setSourceEntity(157U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(195U);
    msg.service.assign("LSJJDWXBFZGTPWFZFHYZHYFRAXWRICVWPLZTAGMZYPSGQQMHAKURTEYKGIRNAPORETCDIKCDOBMMEGPUAYCDOTKBNXKZCLEQXODZFDZQUCXUNCWGSVXJUMRR");
    msg.service_type = 108U;

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
    msg.setTimeStamp(0.22482422285332215);
    msg.setSource(2843U);
    msg.setSourceEntity(156U);
    msg.setDestination(1819U);
    msg.setDestinationEntity(154U);
    msg.value = 0.3947336759818053;

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
    msg.setTimeStamp(0.41092075813247);
    msg.setSource(18628U);
    msg.setSourceEntity(229U);
    msg.setDestination(59213U);
    msg.setDestinationEntity(148U);
    msg.value = 0.1680376356877391;

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
    msg.setTimeStamp(0.08630091239272963);
    msg.setSource(38763U);
    msg.setSourceEntity(19U);
    msg.setDestination(18789U);
    msg.setDestinationEntity(26U);
    msg.value = 0.2615418294198688;

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
    msg.setTimeStamp(0.15051214518011968);
    msg.setSource(9480U);
    msg.setSourceEntity(177U);
    msg.setDestination(3385U);
    msg.setDestinationEntity(173U);
    msg.value = 0.09155052193782864;

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
    msg.setTimeStamp(0.161371842353337);
    msg.setSource(26696U);
    msg.setSourceEntity(96U);
    msg.setDestination(45866U);
    msg.setDestinationEntity(166U);
    msg.value = 0.08150038839046747;

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
    msg.setTimeStamp(0.441527860614931);
    msg.setSource(19971U);
    msg.setSourceEntity(209U);
    msg.setDestination(59594U);
    msg.setDestinationEntity(247U);
    msg.value = 0.8172721741260096;

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
    msg.setTimeStamp(0.38629146940800996);
    msg.setSource(5771U);
    msg.setSourceEntity(39U);
    msg.setDestination(21584U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5127592352530256;

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
    msg.setTimeStamp(0.9653451281389877);
    msg.setSource(4089U);
    msg.setSourceEntity(23U);
    msg.setDestination(57522U);
    msg.setDestinationEntity(57U);
    msg.value = 0.153522023461788;

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
    msg.setTimeStamp(0.04817942757711169);
    msg.setSource(53987U);
    msg.setSourceEntity(242U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(22U);
    msg.value = 0.053412834197289705;

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
    msg.setTimeStamp(0.5047330156610528);
    msg.setSource(43373U);
    msg.setSourceEntity(241U);
    msg.setDestination(15095U);
    msg.setDestinationEntity(20U);
    msg.number.assign("WWMMCXXINKAUOBPUFGTEXPZMTRJYCOKTOGDPQIKM");
    msg.timeout = 29019U;
    msg.contents.assign("ETHMTLKRBXPRGUBHWFMRCSESLWVNASXKGZTUBAMUPAJCNZIQBORAFYNKDCCWGJAJSMVTPKOLYXDJGBWEDXPKCQZODU");

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
    msg.setTimeStamp(0.594399799376591);
    msg.setSource(43980U);
    msg.setSourceEntity(244U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(69U);
    msg.number.assign("BUNEAUWSOC");
    msg.timeout = 24963U;
    msg.contents.assign("WZVVOELXIBOMPFPNHMDFGQWDVTWSDQZNJLXJUQWGCBXKZIKDBVYHIPRECXXJCCAWLNSASTMHWFBTPGJALNGFSHTRTLXIVAFUKRQEAPVLLDGNGCLKPWNZGDECTMHSOJOYEPVFACTIG");

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
    msg.setTimeStamp(0.19634714266961706);
    msg.setSource(44445U);
    msg.setSourceEntity(87U);
    msg.setDestination(568U);
    msg.setDestinationEntity(196U);
    msg.number.assign("XQVDBALBDPOPJYGMZNFUOQJTBAZUCJSCFAQWGGCYHYEAHPTHFGHYIONVBAJENZPVPFMURYUIMMCLFTGBDCFHNXXLWHMGKSQKGJEBZCEHFYIDKSPLZTQNRZUUFXWQNMCURRRRGYRPCDFXWNAOVDYXVUJSCMNTEVDAXAIBLERIOEUWYSQTYIAJBA");
    msg.timeout = 47396U;
    msg.contents.assign("ETASKOMLURYDOQBXRNUVMVHCLUROHDHGVGYDQEWLPHWJDEOAYZMHDQMGTREEARJGEUUNPBGCEIWCRTZQVPDOHCIGZFRSSQYXFVXFIUCKJAJYTSZSNLJHXBEFDPCMBIFOILFSJLIGWZKBYJUHWWAPYQICIYSXXJLJVJOHCMLW");

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
    msg.setTimeStamp(0.5099515747165774);
    msg.setSource(3945U);
    msg.setSourceEntity(221U);
    msg.setDestination(34458U);
    msg.setDestinationEntity(165U);
    msg.seq = 3592659082U;
    msg.destination.assign("CAXUOOSKLQINPTOQUNBRNAEANWCBNYJTHIOYBDZJUYNQWICZWDTGZHFPRKADVHYLWLCKIJOMVADCTFFUKVXXAYEOSZEBFIBBRWLZXHGHCOAVTQFOXXNFXJKDSEEAVCUWEHKUVMSTMVONUCTDATIRJLBPLBM");
    msg.timeout = 25967U;
    const char tmp_msg_0[] = {18, -86, -109, -47, 15, -124, -61, 126, -109, -8, 42, 90, 84, 17, -125, -63, 10, 114, 102, -15, -49, 8, 65, 50, 126, -13, -88, -122, -32, 44, -19, -127, -99, 73, 18, -32, 90, -29, 59, -125, -70, 73, -111, -59, 91, 45, 81, -48, 98, 103, 70, -86, 99, 114, -66, 113, 22, 52, -74, -31, -97, 125, 118, 66, -113, 123, 101, 26, 120, 68, -32, -23, -105, 59, 14, -105, -128, 122, 57, -67, -82, -70, 95, 83, 78, 104, -74, -106, 82, 2, -58, 31, -89, -109, -115, 31, 116, -63, -120, -34, -47, 89, 8, -94, 72, -39, -82, -18, -80, -21, 11, 51, -83, -128, -27, 11, 74, 45, -52, 72, 72, 65, 36, 62, 77, 45, -105, 62};
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
    msg.setTimeStamp(0.6383854675600823);
    msg.setSource(41532U);
    msg.setSourceEntity(12U);
    msg.setDestination(64910U);
    msg.setDestinationEntity(79U);
    msg.seq = 1777295514U;
    msg.destination.assign("RZMOQSOJOCWGGABKYBKHLWVXWZTQWRWTREPYCDGUSUDENLJAXDKNMWIMZRMZOMTFOVIGLSEYBACXXWSDVKSHJSUOVPQJRIEHHSORTRBAZHZTXFBQRCVACVZVIHOUNJLGTEUPQGQYSL");
    msg.timeout = 43971U;
    const char tmp_msg_0[] = {43, 53, -54, 38, 125, 92, -51, 82, 47, 105, 5, 65, 113, -77, 40, 73, -42, 114, 1, 84, 59, -43, 85, 4, -125, 53, -103, -10, 22, -111, 58, -59, 86, 116, 75, -124, 54, -79, 18, 63, -101, -57, 74, 66, 23, -78, 14, -36, -53, -121, 110, 22, 81, -47, -5, 15, 78, 9, -58, -71, -36, -72, -10, -48, 17, -106, -36, -124, 51, -85, 61, -33, -125, 54, 26, 58, 47, -56, -35, -120, -72, 109, -108, -40, -61, -120, 52, 5, 105, -125, 50, -27, -111, -111, 50, 22, -86, -12, 97, -94, -76, 117, 90, -24, -70, 25, 89, 51, 1, 110, 47, -114, 35, 94, -7, 47, 101, 112, 72, 34, -105, 114, -107, 11, 47, 79, 73, -30, -57, -44, 112, 24, 1, 17, 9, 60, 17, -21, -19, 67, 32, 6, -96, 31, 47, 97, -41, 72, -62, 36, -29, 126, 20, -33, 119, 92, -49, -127, 105, 32, -17, -48, 60, 44, 44, 42, -40, -61, 99, -23, 98, 67, -121, -53, -1};
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
    msg.setTimeStamp(0.702828361628382);
    msg.setSource(64596U);
    msg.setSourceEntity(154U);
    msg.setDestination(12380U);
    msg.setDestinationEntity(181U);
    msg.seq = 2545788647U;
    msg.destination.assign("HDROBLOYADNBLFTMXMRASTELXFCTNGHHYQEQVSQNADSUWHQJPVUBWJLQYVIZSAPPHTPSZLYYTGCRXEKCPGMVWKAOICUDRIXHWJFBYBGYNJZBODGRMNGFKWODUZVZUKQHKBBRPBSKZHIOLNRUWRZMVWXAXNFQGQAMUUMOTROYEVPNVIJQCOIZJCZGZKWRKBPIWJGSCYNCTNFFLEHCDXQEFPTDKSUVOEIIY");
    msg.timeout = 52711U;
    const char tmp_msg_0[] = {-60, 117, -72, -19, -50, -80, 67, 48, 109, -29, 92, -64, -111, 19, 58, 7, -17, -17, -118, 125, 82, -17, 91, -48, -125, -52, -62, 103, 21, 111, 96, 111, 27, -69, -25, -86, 126, 56, -128, -5, -94, 28, 118, -89, -111, -18, -67, 75, 114, 90, 77, -128, 76, 19, -91, -59, 43, 52, -123, -16, 82, 75, -115, 39, -47, 0, -22, 57};
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
    msg.setTimeStamp(0.9484312996682456);
    msg.setSource(48934U);
    msg.setSourceEntity(213U);
    msg.setDestination(32304U);
    msg.setDestinationEntity(118U);
    msg.source.assign("XLKXOWSQFPVTODIZUIZIISVIUJWTMPDKPPMJZESDFNXRVICSDNITWLYFNNHTLWZJFVNZGDAYKMEQQZHCXTLECBHYRBDVNBOJFREFPWAAIPKFMVNTXUFVOYGLUHDUCSMTYTEYPAROROYABMJXRYJFVLCRBWPU");
    const char tmp_msg_0[] = {-89, -85, -121, 8, 103, -60, 63, -89, 4, 10, 13, -120, 34, -74, -105, -100, 43, 105, 64, -36, -56, -59, 78, -95, -102, -2, 18, -50, -11, 7, 66, -48, 91, -90, 105, 32, -77, 38, 80, 100, -113, 15, -62, -59, -23, -37, 5, 25, -25, 123, -91, 6, 78, 3, 72, 19, 50, -110, -62, 44, 55, -34, -81, 4, -82, -123, -115, 99, 34, -52, 21, 39, -64, -108, -46, -19, 124, 90, -81, 103, 11, 92, -15, 57, 76, 21, 38, -112, -68, 54, -56, 10, 107, 122, -65, -63, -36, -92, 110, -127, -47, 21, -16, 119, 14, -19, 111, -90, 105, -123, 9, -24, -121, -25, -1, 63, 54, -16, 44, -36, 65, -100, 94, -4, 77, -82, -64, 22, -39, 54, -34, -60, 32, 73, -74};
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
    msg.setTimeStamp(0.286470263606312);
    msg.setSource(2409U);
    msg.setSourceEntity(45U);
    msg.setDestination(27952U);
    msg.setDestinationEntity(64U);
    msg.source.assign("RYYRDGGILTBKHKLJFCVVFUVUDLENPWHJSXKYEMQDRTAWLVHPYPCJTHKUXQZWJQKNKEWUIDBVYUIQRIDCTXJVZLHZBXQMJMQUOGNZZTUPZWFFPXUHODAVSNYWNICARLAGXKTSXDRZVOLGKXHDOGAGOMWIECCKAAFWBJETOGALMFPEEJMIIIRWZQKYNMNSFOMXUQRBBEYQBHZDHVBPDTFUVHMORSJCL");
    const char tmp_msg_0[] = {-28, 69, -77, -111, -69, -14, -128, -54, -68, 84, 106, -34, 41, 41, -32, -7, 110, -63, -66, -36, 18, 74, 95, 90, -83, 66, 43, 64, -54, -27, 61, -26, -18, 94, 6, -52, 27, -20, -68, -50, -96, -108, -102, 84, -66, -109, -51, -9, 19, -37, 43, -18, 108, 121, 63, -101, 104, 84, 40, 52, 87, 101, 49, -73, 14, 11, -6, -2, -114, -63, -122, 96, 7, -61, -44, 112, 63, 67, 2, 76, -24, 107, -73, -122, 58, -127, -74, -9, -94, -41, 35, -53, 72, 4, 0, 73, -85, -5, -120, -33, 62, -32, 125, 104, 4, -113, -39, -52, -78, -94, -102};
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
    msg.setTimeStamp(0.19639076289841484);
    msg.setSource(15375U);
    msg.setSourceEntity(108U);
    msg.setDestination(629U);
    msg.setDestinationEntity(102U);
    msg.source.assign("TOBVCXEITFMJBFLHQWYKJNVXAMGKEXQTMRGJYZOICHBIZYAIWAGPFGNZXPIYCFKUZEWEPWKJYHNLVYFXHZUSSUJOGYRILLVGFRDSKWQBDUUWVGEAZKAUAFJYQDIUESLMFMHKOCNUCMPVQZJRBGTLFIOVOBTLBKUH");
    const char tmp_msg_0[] = {15, 47, 36, 67, 44, 61, -21, 38, 64, -94, -26, -36, -109, -57, -121, 58, 64, 117, 111, 43, 5, -78, 30, 9, -118, -113, 98, -54, -18};
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
    msg.setTimeStamp(0.4970355857534381);
    msg.setSource(21936U);
    msg.setSourceEntity(142U);
    msg.setDestination(5920U);
    msg.setDestinationEntity(37U);
    msg.seq = 1785849466U;
    msg.state = 251U;
    msg.error.assign("GHXSCVNMEZFBMSGSKTVUPJXGWOOTBGOETIDXSKYVAJRHBGDVNATZSGGSQMHIYBSNJREKAPNNIUSDAKJJQXPRZFKSDZCQNGHLWUYKPWNRFXEHURQQRZWOY");

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
    msg.setTimeStamp(0.37825890091094994);
    msg.setSource(48973U);
    msg.setSourceEntity(164U);
    msg.setDestination(57320U);
    msg.setDestinationEntity(56U);
    msg.seq = 3793385639U;
    msg.state = 134U;
    msg.error.assign("HVKRRVDWSWNMYUUKQJQKJJDCKNQLFUSFGIJEZQNHLWUMAFRRGVDFOSBTTCETU");

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
    msg.setTimeStamp(0.15329270492684965);
    msg.setSource(12436U);
    msg.setSourceEntity(89U);
    msg.setDestination(62689U);
    msg.setDestinationEntity(52U);
    msg.seq = 937156926U;
    msg.state = 13U;
    msg.error.assign("IPVFHRHQZQOBFNJRAPEOUPPWKNMBMTXHOTFYZHZOSMJPBGEWPVRZDADTUGWGBPUJOFYXNTDCWJKMSHGYVXOXICJLFSJGKNWIRABQWYQCLADFGVNAVEPWJEKMJHUVCZBAZRYXRKQZRGLHMTJKLOFEJVCHQLGRCFSBXDUWXILQUTRKX");

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
    msg.setTimeStamp(0.8975681477467206);
    msg.setSource(9311U);
    msg.setSourceEntity(156U);
    msg.setDestination(7644U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("ACWPSVFPKGMDWPNCINNCGUXLXKOJAWYXUCRABWTYJLQAWCXZOINVAVQXRZBWAAMLQZISRES");
    msg.text.assign("KUZACKWUTPNMWVZYUPIZBCFEAVJOW");

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
    msg.setTimeStamp(0.525681069551988);
    msg.setSource(383U);
    msg.setSourceEntity(217U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(178U);
    msg.origin.assign("INBYBYOFHHYEUNJKWZUKTSWXECTOQWEGNGSZPMCRQPNXBCOVPLCOZTKXWUDIZDOBHBQMKMLHUYJTWVCTRHIQZASJNXMQPMRLCFYXOWRIXAOHDVOHWIIPUDFQUXNCATZYXSUVQIUSIYTQBGLPELBERSGWIOAXSDGJEDTDVPNFBPTQFVJAJYCCDSNGLNGEVBDLAMIKRVRDZEKWVXRGAFMFUNVTGAWHBKLYKJFKYHSUH");
    msg.text.assign("NOQVSIEVUVHZSEPNZGUTCQBPJSRNMXQNABIAACBKFRNDRNCMOSLIDDLCU");

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
    msg.setTimeStamp(0.2374826195264047);
    msg.setSource(13525U);
    msg.setSourceEntity(204U);
    msg.setDestination(52006U);
    msg.setDestinationEntity(67U);
    msg.origin.assign("KGLOBGIWKESZWXOQGSRKJRRSEHFEADQJADFMNAOUTMIIDMDANREGYLRRTBKJHZYACKGZC");
    msg.text.assign("JQRRTMLKUKYUJEKRXOHMQTXKUMHEMMVMNIYVWPWJRA");

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
    msg.setTimeStamp(0.04974082942115987);
    msg.setSource(23111U);
    msg.setSourceEntity(104U);
    msg.setDestination(21554U);
    msg.setDestinationEntity(39U);
    msg.origin.assign("EQKQFRKTYGWAWTKUFEZYYNHUAHSZDZLZIKXRSLIDDKNRXVZPMHQBKFFIVJMHBCGLXZHYSUZWSXRWUXJBASZIXAKAUDDIEQYMWCWETVXPB");
    msg.htime = 0.5752364226617;
    msg.lat = 0.16212942435729571;
    msg.lon = 0.9536022314047399;
    const char tmp_msg_0[] = {-32, 109, -54, 21, -29, -90, 111, 10, -112, -7, -40, -47, 28, -10, -63, -31, -82, -37, -98, -55, 46, 19, -86, 110, 111, -36, 125, 86, -93, -110, -53, 97, 100, 4, -40, 75, -102, -72, 20, -74, -12, -101, 7, 18, -29, 25, 110, 8, -95, 106, -88, 73, 110, -1, 80, -97, 94, -50, -19, 36, 14, 92, 83, 105, 67, 72, 38, 30, 117, 20, -81, -122, 22, 77, 63, 64, -104, 118, -70, 110, -53, -69, -49, -57, -100, -90, -39, -119, -24, 45, 105, -112, -48, -43, 0, -8, -7, 63, -35, 8, 26, 112, -80, -5, 13, -101, -114, -19, 52, 61, -40, -60, 26, -50, -44, -69, -41, -31, 106, 39, 113, -23, 69, -78, 70, -24, -57, -1, 43, 18, -91, -87, 79, 27, 39, -81, -116, -95, -120, -122, -52, -72, 42, -53, -85, 26, 11, 67, 21, -79, 17, -96, 121, 68, 70, 60, -122, -14, -19, 108, -73, 85, -113, -119, 30, -82, 74, 18, -18, 17, -80, 81, 73, -85, 40, 114, -14, -21, -103, -72, -9, 17, -106, 53, 14, -28, 3, -72, -85, -22, 106, -23, -123, -13, 97, -89, 10, -17, -90, -28, -29, 25, -95, 29, -72, 49, 108, 19, -88, 17, -117, -66, -68, -119, 105, -85, -4, -21, -83, -101, 47, -6, -95, -86, 35, 79, -16, -46, -37, 96, 41, -62, 99, 43, 19, 122, -91, 105, 82, 26, 124, -68, -58, -16, -100, -28, -113, -102, -120, -57, -105, -112, 117, -35};
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
    msg.setTimeStamp(0.4957961898304588);
    msg.setSource(32125U);
    msg.setSourceEntity(164U);
    msg.setDestination(31875U);
    msg.setDestinationEntity(40U);
    msg.origin.assign("GEBOXBAWBMKDQPUGRSPYIBGYVGLZQOAYCIQDAUSILZJDJMPJKGUSWNDXQVOQJXCWEGSDEPUFTNLTBAFOANEJFXTOTYXYYSKHTFPODFMMFFEOYGLMNZUTCKSLJAXCWQVJCSIXVBFTQVACPXZJTDANLBLBPPFJXTRXSIDTHPVUMEOHMZKKJZZUMHFQQWOKEMNKRWBDKRWCPRVUYMNBDILZNIRLRVIVRYRUAWEHCNHHHGZAUNICSSEWYRIHEZHQ");
    msg.htime = 0.3478091110616104;
    msg.lat = 0.976704288900562;
    msg.lon = 0.5157401497673662;
    const char tmp_msg_0[] = {126, 38, -54, -118, -123, -79, -17, -46, -53, 96, -19, -87, 17, -24, 7, 98, -9, -101, -25, -20, -51, -111, -64, -49, 95, 91, -61, 125, -42, 86, 101, -13, -99, -11, -112, 41, 34, -1, -30, -95, 98, -57, -25, 41, 17, 78, -103, 79, -101, 115, -117, -83, -87, 120, 112, 52, 8, 69, -100, -99, 6, -91, 69, 50, 44, -100, -21, 28, 21, 10, 63, 81, 102, 28, 21, 70, 20, -68, 92, 34, 75, 124, 114, 93, -19, 125, -39, 46, 68, 27, 15, -41, -29, 11, 93, 41, -30, 51, 78, 68, -119, -117, 118, -36, 29, -126, -46, -47, -30, -97, -104, 21, -15, -106, -57, -55, 1, 50, -53, 103, -101, 104, -53, -68, 124, -74, 50, -94, -41, -3, -11, -121, -101, 20, 30, -120, -87, -78, -115, 65, -42, 27, -24, -63, 107, -52, -1, 21, 23, 99, 75, 43, -121, -5, 107, 94, -87, -76, -23, 1};
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
    msg.setTimeStamp(0.9476584612605835);
    msg.setSource(57442U);
    msg.setSourceEntity(4U);
    msg.setDestination(42532U);
    msg.setDestinationEntity(103U);
    msg.origin.assign("WFKQDKMKPUVSZZWSPTDVHYDXHCNIWYSVCYYJHKIVRUGAAWVMNTFDVCTJQRHAZKUPMJMYFOEWECKLPZUCHYLHDCEWJBFRDPKPTQOJXKNQIYJZOAAUGSBWRRXBUNXBODHXZPLLEGCGTNAJNFRZDLAFGQUBCQSYBRBXWEVKYODWCVHMAOELVLEZCTGASRIYGEQPQOQFFHOJSBJXIXSJZ");
    msg.htime = 0.08947762971792583;
    msg.lat = 0.7261827848098797;
    msg.lon = 0.4137040908779229;
    const char tmp_msg_0[] = {-19, 104, 100, 9, -55, -33, 125, -89, -100, 69, -30, 13, -123, 66, -103, 116, -61, 17, -52, -78, -18, -35, 23, -39, -85, -102, 2, -32, 73, 18, -89, 19, -39, 70, 70, 66, -6, 82, 54, -42, -7, 37, -35, -30, 47, -44, -85, -25, 73, 20, 99, 14, 66, 22, -118, 39, 46, -107, -29, -103, 121, -90, -108, -46, 124, -83, 105, -28, 32, 76, -44, -101, -20, -77, -80, -29, 52, 99, -15, 23, -87, 14, 107, -12, 62, 82, 24, 50, -40, -35, 75, 47, -86, -107, 5, 103, -51, 41, -12, -83, -68, 96, 21, 119, -47, 35, 44, 79, 21, 3, 45, 20, 79, 85, -61, -38, -85, 124, -57, -62, 66, 37, -62, -89, -17, -97, 78, -60, -114, 19, 17, 67, -114, 124};
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
    msg.setTimeStamp(0.09851642567153562);
    msg.setSource(20451U);
    msg.setSourceEntity(144U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(171U);
    msg.req_id = 9770U;
    msg.ttl = 64639U;
    msg.destination.assign("RRKIMNLORHODKKIOCIVKZTFEJCYNLZUUBYMSUXWTUBVDSEIZSBEJVGOCZAFXHZSHXRSLQMA");
    const char tmp_msg_0[] = {97, 53, -87, -10, 98, 41, -99, -125, 10, 33, -112, -25, 110, 76, -42, 65, -96, -71, 75, -78, 51, -60};
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
    msg.setTimeStamp(0.9773753427449349);
    msg.setSource(9563U);
    msg.setSourceEntity(170U);
    msg.setDestination(20830U);
    msg.setDestinationEntity(97U);
    msg.req_id = 14682U;
    msg.ttl = 59605U;
    msg.destination.assign("FUXBUQYXBBJEBWVGZMKVALCNXOIMYVGMTANGLRWRFVSBSDYQNXDWRSEMCSNAECXUZZZQHPKAWMLUPSNCDVFNJTLNNVQYGMATTSYESAFIBEWCZNJNYIGXII");
    const char tmp_msg_0[] = {18, 26, -119, -20, 74, -25, 112, -103, 79, -122, 30, 68, 31, 68, 6, 60, -90, 119, -11, 14, -15, 39, -28, -118, -31, 85, -24, -124, -104, -48, 110, 120, -91, 66, 35, 23, 93, -83, -95, -102, 7, 21, 77, -3, -109, 71, -110, -99, -93, 60, -90, 80, -87, -58, 13, -81, -41, -67, -92, -64, -33, -30, -22, 121, 72, 116, 12, -63, -93, 110, 39, 6, -122, 40, 64, -75, -6, -104, 50, -97, -86, -22, -30, -32, 112, -44, -10, -67, 51, 63, -125, -8, -34, 17, 81, -63, -98, 44, -44, -33, -122, -73, 53, -26, 21, 30, -45, 107, -106, 71, -116, -3, -31, 47, 121, -90, -84, -37, -83, -88, 59, -67, 32, 104, 77, 51, 24, -99, 10, -44, -71, 42, 2, -92, -91, 56, 113, -43, 96, 59, -27, -47, 50, 10, 18, 75, -104, -47, 33, -123, 46, 41, -55, -62, 103, -77, 68, 47, -105, 54, -61, -122, 44, -67, 77, 94, 32, 62, 44, -28, -75, -23, -76, -113, 106, -51, -64, -1, -40, 69, 29, -26, 26, -9, 31, -29, 110, 9, 117, 32, 52, -58, 36, 58, 54, 52, 38, -9, 107, 17, -88, -71, 21, -41, 23, -111, -93, 120, 21, -119, 33, 104, -48, -65, -44, -42, -35};
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
    msg.setTimeStamp(0.2707182979250665);
    msg.setSource(62124U);
    msg.setSourceEntity(241U);
    msg.setDestination(48096U);
    msg.setDestinationEntity(79U);
    msg.req_id = 47474U;
    msg.ttl = 43482U;
    msg.destination.assign("MOUNLGICYRAKZGVDGAJXYLHPUBTJOSXHUALDYIFEKTZPKHSUHJJBMMDDCBCHAXRCJWQGVBXERQCGZWAZCXCXPOZSTMACOUFNBZAYVYHTSFSTUEOFWMNIBKVKMCYTJKLNDUSJWPINNBZYKUHTI");
    const char tmp_msg_0[] = {16, -72, -76, -52, -43, 61, -83, 89, 82, 110, 121, 72, -44, 66, -63, 94, -115, 43, -110, -120, 119, -44, -101, 52, -77, -90, -4, 65, 13, -8, 12, 9, 34, 26, 3, -38, 104, 32, -5, 65, 45, 20, -48, -24, -84, 6, 124, 31, -65, 58, -37, -28, 63, -53, 64, 124, -64, 32, -114, 85, 92, 81, 27, 73, -98, 2, 85, -56, -71, 73, -96, 113, 83, 60, 88, -103, 42, -53, 31, 65, 106, 54, 71, 113, -117, -97, 122, -118, -47, 123, 37, 52, -33, 31, -34, -64, -87, 51, -27, 125, -96, -91, -101, -57, 40, -21, 108, -80, -14, 96, 3, -36, 78, -26, -18, 89, -81, 82, 39, 82, -46, 26, 86};
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
    msg.setTimeStamp(0.4453866494229778);
    msg.setSource(15314U);
    msg.setSourceEntity(221U);
    msg.setDestination(11405U);
    msg.setDestinationEntity(28U);
    msg.req_id = 52137U;
    msg.status = 97U;
    msg.text.assign("XNGLDSODTXTHACRLFYSGBBZFHJKDIMERIAGTUZIXQVVOXVBMFOJNZSMAXTXVAQBQHDPCKYUNPGLITQJHWEIYCWUTAYYAKBRKJJZACZYWBYEMPESCOTPRVHSLTDUTZENIOCGLNPUHLRQDAPXZ");

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
    msg.setTimeStamp(0.7291970596211811);
    msg.setSource(6540U);
    msg.setSourceEntity(85U);
    msg.setDestination(39308U);
    msg.setDestinationEntity(48U);
    msg.req_id = 60143U;
    msg.status = 150U;
    msg.text.assign("QSWWIVOECIHBBWGIGEQSQURUWGOATWATOGZ");

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
    msg.setTimeStamp(0.1110397357505859);
    msg.setSource(32786U);
    msg.setSourceEntity(2U);
    msg.setDestination(11775U);
    msg.setDestinationEntity(96U);
    msg.req_id = 57537U;
    msg.status = 213U;
    msg.text.assign("FBHPAYPXMUOCZSFTDPPMWOAKTJSGQUXTMGXFPAOXMKWYDVJBEEOCPENLTQULBGNSCZLUDCFMYDNKLUKINEHTHYRZXFQYRFMEGSXTTEKMIIELHARFUWRWQCKFFQSHKENVIWERSPKVPZWCAUYKXQVJNCIBGSYIJLQYJVIQWOXIZHRDHWVVNCDYJMZCTLGMVZAORVABSJTFDNQUUILPHDLXBAGQAGNROHLVJOSMXGIWJPDWTJNYCGBZK");

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
    msg.setTimeStamp(0.4803295044310901);
    msg.setSource(3482U);
    msg.setSourceEntity(68U);
    msg.setDestination(5846U);
    msg.setDestinationEntity(138U);
    msg.id = 216U;
    msg.range = 0.3642683638719947;

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
    msg.setTimeStamp(0.671509481975861);
    msg.setSource(47690U);
    msg.setSourceEntity(59U);
    msg.setDestination(30660U);
    msg.setDestinationEntity(159U);
    msg.id = 52U;
    msg.range = 0.9116051032568285;

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
    msg.setTimeStamp(0.15626295379006194);
    msg.setSource(47985U);
    msg.setSourceEntity(200U);
    msg.setDestination(42959U);
    msg.setDestinationEntity(182U);
    msg.id = 173U;
    msg.range = 0.600186894650145;

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
    msg.setTimeStamp(0.2757157614788347);
    msg.setSource(47145U);
    msg.setSourceEntity(15U);
    msg.setDestination(15290U);
    msg.setDestinationEntity(195U);
    msg.tx = 136U;
    msg.channel = 194U;
    msg.timer = 45293U;

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
    msg.setTimeStamp(0.6188166670465172);
    msg.setSource(63197U);
    msg.setSourceEntity(123U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(138U);
    msg.tx = 182U;
    msg.channel = 161U;
    msg.timer = 38293U;

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
    msg.setTimeStamp(0.9330766539740903);
    msg.setSource(18157U);
    msg.setSourceEntity(150U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(80U);
    msg.tx = 221U;
    msg.channel = 85U;
    msg.timer = 49037U;

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
    msg.setTimeStamp(0.31593831977845066);
    msg.setSource(444U);
    msg.setSourceEntity(48U);
    msg.setDestination(55077U);
    msg.setDestinationEntity(2U);
    msg.beacon.assign("OXPUWLPQTBORLSTADKEWDJXMTONAHGKWLUUAAMXBXLQGFLNPMIEENGIRUSDPIYYTJAANBTQXKIGBDXHXCVGYXRBIQJHWVSHSZGCUKLWOAIJEEMAOBPPKUYQZUORGDMOJHQVHZNENFMBXFYTXCSYZWQRHYAHJCDVLTFRCWGTNMBKMBFIWSHLRRZFTLDCJNOUIIDVIZNZKMRFPPST");
    msg.lat = 0.44124808318886877;
    msg.lon = 0.9156359381984414;
    msg.depth = 0.49117176856521194;
    msg.query_channel = 242U;
    msg.reply_channel = 27U;
    msg.transponder_delay = 130U;

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
    msg.setTimeStamp(0.4149340732040008);
    msg.setSource(63533U);
    msg.setSourceEntity(20U);
    msg.setDestination(42752U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("MKQNWTBDEDWFXTZBGMXQXNJRQQBYVKFAGZFIIUASOQBFPRVRYXJ");
    msg.lat = 0.6765313555476135;
    msg.lon = 0.09150958144032029;
    msg.depth = 0.1727855471309505;
    msg.query_channel = 254U;
    msg.reply_channel = 154U;
    msg.transponder_delay = 34U;

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
    msg.setTimeStamp(0.2089526895363949);
    msg.setSource(10459U);
    msg.setSourceEntity(2U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(14U);
    msg.beacon.assign("QECRPANIPBVSGWEXJGQUJKQHFVYVSUBRFNVKNOCAWYHDZYTOUFHWOGWHAPCYHZJFNSDEIFJXQJMZJZWYIFLFSHOGLMVZIYBOXADKWPUB");
    msg.lat = 0.8975395892226111;
    msg.lon = 0.0030880565672325444;
    msg.depth = 0.26303412995630915;
    msg.query_channel = 245U;
    msg.reply_channel = 33U;
    msg.transponder_delay = 71U;

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
    msg.setTimeStamp(0.4129667206447404);
    msg.setSource(6608U);
    msg.setSourceEntity(253U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(225U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.7751449930989074);
    msg.setSource(33193U);
    msg.setSourceEntity(135U);
    msg.setDestination(24910U);
    msg.setDestinationEntity(82U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.10143656756339703);
    msg.setSource(64823U);
    msg.setSourceEntity(8U);
    msg.setDestination(10883U);
    msg.setDestinationEntity(63U);
    msg.op = 231U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EWTCYOEJBKEAPYHHROUOPAKIDJBPCCGDHESEAOGQNLDQJRGGMZOPGERURQFZXTFNMYDWPOKMLKCTBKPXQUDRRMJMYBVVLLXIEBFUSJISIEUKFUMLVHMOVJQTXCSNZAWGGTVCVHKWMZ");
    tmp_msg_0.lat = 0.39648980114250476;
    tmp_msg_0.lon = 0.7698584324240073;
    tmp_msg_0.depth = 0.45419820017780654;
    tmp_msg_0.query_channel = 135U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 76U;
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
    msg.setTimeStamp(0.02696784433419208);
    msg.setSource(34846U);
    msg.setSourceEntity(251U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(240U);
    msg.address = 38U;

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
    msg.setTimeStamp(0.7718541392286309);
    msg.setSource(37687U);
    msg.setSourceEntity(122U);
    msg.setDestination(41547U);
    msg.setDestinationEntity(89U);
    msg.address = 238U;

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
    msg.setTimeStamp(0.9483756802822028);
    msg.setSource(28006U);
    msg.setSourceEntity(69U);
    msg.setDestination(2648U);
    msg.setDestinationEntity(9U);
    msg.address = 51U;

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
    msg.setTimeStamp(0.5856854998293779);
    msg.setSource(46259U);
    msg.setSourceEntity(236U);
    msg.setDestination(8056U);
    msg.setDestinationEntity(158U);
    msg.address = 103U;
    msg.status = 130U;
    msg.range = 0.40860138496987697;

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
    msg.setTimeStamp(0.108836776766009);
    msg.setSource(41850U);
    msg.setSourceEntity(145U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(61U);
    msg.address = 150U;
    msg.status = 224U;
    msg.range = 0.4148517114755724;

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
    msg.setTimeStamp(0.9412543488141719);
    msg.setSource(21269U);
    msg.setSourceEntity(204U);
    msg.setDestination(34461U);
    msg.setDestinationEntity(71U);
    msg.address = 239U;
    msg.status = 163U;
    msg.range = 0.6481141388128153;

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
    msg.setTimeStamp(0.6836144117108786);
    msg.setSource(32918U);
    msg.setSourceEntity(158U);
    msg.setDestination(13344U);
    msg.setDestinationEntity(33U);
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.0233241242365404;
    tmp_msg_0.confidence = 0.4065264296722382;
    tmp_msg_0.opmodes.assign("QXYJYVFJAYNUETGUOJUJIWLXFKIPMODPVKCSFRVNIRIOFFVGJWTKCNODRMUGYEJZWNRDZDAZLMLCRUNQZZWUPATDUBKBHBCGSYHMWXSSVLOLBZXXBGBDPARRBIKHESZHFDVONEYAXGCLOLQUSWDQMDWKBWINXPYPTIBSLVLTZAAMKNPCSEHNUKBMJOIHQRFTICEGQGEUKJVITHZYROCHGPYSXWTRXFAAMMYQJCJHAEOVQ");
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
    msg.setTimeStamp(0.5648391133517345);
    msg.setSource(43414U);
    msg.setSourceEntity(158U);
    msg.setDestination(51768U);
    msg.setDestinationEntity(7U);
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.47060978206710535);
    msg.setSource(18132U);
    msg.setSourceEntity(48U);
    msg.setDestination(8578U);
    msg.setDestinationEntity(160U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WHPEVFOCLYXGAYFTQNSLGGLKA");
    tmp_msg_0.lat = 0.029982086614258385;
    tmp_msg_0.lon = 0.9700802235411021;
    tmp_msg_0.depth = 0.0017241984977859337;
    tmp_msg_0.query_channel = 39U;
    tmp_msg_0.reply_channel = 14U;
    tmp_msg_0.transponder_delay = 32U;
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
    msg.setTimeStamp(0.9083323275491516);
    msg.setSource(9342U);
    msg.setSourceEntity(252U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(24U);
    msg.enable = 111U;

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
    msg.setTimeStamp(0.5578157740335381);
    msg.setSource(1725U);
    msg.setSourceEntity(235U);
    msg.setDestination(34137U);
    msg.setDestinationEntity(70U);
    msg.enable = 148U;

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
    msg.setTimeStamp(0.7075111850904106);
    msg.setSource(53504U);
    msg.setSourceEntity(9U);
    msg.setDestination(23384U);
    msg.setDestinationEntity(225U);
    msg.enable = 249U;

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
    msg.setTimeStamp(0.6356453501781473);
    msg.setSource(61056U);
    msg.setSourceEntity(185U);
    msg.setDestination(30842U);
    msg.setDestinationEntity(205U);
    msg.summary = 185U;
    msg.level = 68U;

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
    msg.setTimeStamp(0.8117388341035799);
    msg.setSource(27814U);
    msg.setSourceEntity(4U);
    msg.setDestination(22840U);
    msg.setDestinationEntity(21U);
    msg.summary = 46U;
    msg.level = 136U;

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
    msg.setTimeStamp(0.16984140728156039);
    msg.setSource(23800U);
    msg.setSourceEntity(74U);
    msg.setDestination(64430U);
    msg.setDestinationEntity(43U);
    msg.summary = 246U;
    msg.level = 223U;

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
    msg.setTimeStamp(0.34117504724165104);
    msg.setSource(36892U);
    msg.setSourceEntity(29U);
    msg.setDestination(58123U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.47869187682812064);
    msg.setSource(33701U);
    msg.setSourceEntity(218U);
    msg.setDestination(47905U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.09860606142840633);
    msg.setSource(1609U);
    msg.setSourceEntity(155U);
    msg.setDestination(4138U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.24425635004713475);
    msg.setSource(40018U);
    msg.setSourceEntity(214U);
    msg.setDestination(15750U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.8920437418777637);
    msg.setSource(39215U);
    msg.setSourceEntity(173U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.95682915748322);
    msg.setSource(63493U);
    msg.setSourceEntity(133U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.39862827181182436);
    msg.setSource(10485U);
    msg.setSourceEntity(47U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(144U);
    msg.op = 106U;
    msg.system.assign("WPJWYCVTTSFQQRVQFXXSAKYCDWOIHUOWVGFHAMXTPXOEUTMZLIEPQPUYAQOTCAOSLDZJWOOMIWGATNIBXBZCEIAZLKHGFRDNOMVGNIBKBQYDNKEUPJGMXPQFHZZJZLFANHMOEGQNDGSDBIJFRSOCUBNTSKYBVKUYMEHZLNVSKPTRCLCFGEWCRMJIDFICLHPJSUXERCVLXZWRURKUEHA");
    msg.range = 0.18114927985779827;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 57820U;
    tmp_msg_0.control_ent = 63U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 226U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.8435042376979952;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 130U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.17455914018808116;
    tmp_tmp_tmp_msg_0_0_1.z_units = 194U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.3959895771195421;
    tmp_tmp_msg_0_0.lon = 0.09300592875813418;
    tmp_tmp_msg_0_0.radius = 0.9320426980842628;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 7U;
    tmp_msg_0.proximity = 181U;
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
    msg.setTimeStamp(0.12687809017662866);
    msg.setSource(26922U);
    msg.setSourceEntity(158U);
    msg.setDestination(65193U);
    msg.setDestinationEntity(207U);
    msg.op = 61U;
    msg.system.assign("VRVDZSASZRLQUGGDGYBWFXYAYPYBPXVIIWBQNRZHUYCMGANUSSXDYOZCVKLTLSFCQJQKEVNGTLBROXMYBHHIFJRUPKUZOHNFWOPKNWOFUAGLOUBNVHMEHOGEJJMJECKAPHMMCFBSDRIQZCIXPIRRYQQVUXETZIJTWCWJEDNYLYLTXGIPZUTSLHLMJMHJVFWTRAHVBODDCOZCEWGZDFSSXNFGAEXDKAJTPQPSQWKPTNIKILVCRDNABBOKEUMXMK");
    msg.range = 0.44988987139313596;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.14562927588549912;
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
    msg.setTimeStamp(0.05427663558953477);
    msg.setSource(54809U);
    msg.setSourceEntity(187U);
    msg.setDestination(4758U);
    msg.setDestinationEntity(166U);
    msg.op = 142U;
    msg.system.assign("VMDOPTPSOHQXUWSWYBTKQKXAVNBIAIAFJEPURQLRMZESRCGGPNUYCGHXEBIIZKUFPTZCLDHLLNNUCZBPWFOQFMUMLUIO");
    msg.range = 0.21062311180225968;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.154279064310073;
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
    msg.setTimeStamp(0.001947056066349595);
    msg.setSource(29756U);
    msg.setSourceEntity(81U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.39335472537120986);
    msg.setSource(28474U);
    msg.setSourceEntity(19U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.08663797053217781);
    msg.setSource(61209U);
    msg.setSourceEntity(239U);
    msg.setDestination(54166U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.38838442629313896);
    msg.setSource(46523U);
    msg.setSourceEntity(114U);
    msg.setDestination(59508U);
    msg.setDestinationEntity(157U);
    msg.list.assign("OBKHSWFLSEFMUHQHJXRQEVTPGEVRCKMUCTNUATTUXKAWBXYKYRFEQTNGBPESGSTXACYWFVKIURGHPHMRLONNHJDQCIIPFIPWUHLZDYVJFYUQSXLDXCQOGBNZCGALOZBVWWZLRIWGRUAEIAJNVQTOMIRLEBAJGJKVMYGBDPZVULSIOTKPZXRXMZMMHYEWEDXSDCCAETJKDNBPBKYAHWQBQFPJDICYZGRJFHM");

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
    msg.setTimeStamp(0.45644434134972);
    msg.setSource(62619U);
    msg.setSourceEntity(64U);
    msg.setDestination(4635U);
    msg.setDestinationEntity(94U);
    msg.list.assign("VEGREZZVMHBUJDUTXXARRULMGXNTTBNWYSUBUAIXSAKXJQBZPJKVHIZEICMNRECWSOYLZBAOXKIOJKSHWYFLEZBPNDQRIFRSDPFCDVKAJEMGPITSXETOKBDJZIJWYSDLGQADZIUBGOHXQFYKIAEWRKBTXJMONVSCGYNJVWTKQX");

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
    msg.setTimeStamp(0.030069252886886444);
    msg.setSource(59006U);
    msg.setSourceEntity(130U);
    msg.setDestination(6349U);
    msg.setDestinationEntity(71U);
    msg.list.assign("TWXSJRZUSGYMSPXXWGISZTCZQBHTGZJWYSPNPQQOFNWJJZOZJZCNKCNWWLRKCJLBPVORDFEIKBJSXQTBQLSRGAIXRRAAZYCTBQMUOHGPKESNHQGIRIVOUPLKDTNOPCIUPYEFAEJVUDPOIAQYMBF");

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
    msg.setTimeStamp(0.7680011889076256);
    msg.setSource(14246U);
    msg.setSourceEntity(234U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(3U);
    msg.value = 1002;

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
    msg.setTimeStamp(0.07042679359619508);
    msg.setSource(10893U);
    msg.setSourceEntity(37U);
    msg.setDestination(4884U);
    msg.setDestinationEntity(24U);
    msg.value = 21145;

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
    msg.setTimeStamp(0.5551339211915767);
    msg.setSource(30952U);
    msg.setSourceEntity(113U);
    msg.setDestination(48644U);
    msg.setDestinationEntity(148U);
    msg.value = 1367;

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
    msg.setTimeStamp(0.44134737041799776);
    msg.setSource(42970U);
    msg.setSourceEntity(222U);
    msg.setDestination(12375U);
    msg.setDestinationEntity(108U);
    msg.value = 0.6285534066123888;

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
    msg.setTimeStamp(0.3493422098799115);
    msg.setSource(65134U);
    msg.setSourceEntity(213U);
    msg.setDestination(11079U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8913335738583382;

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
    msg.setTimeStamp(0.39074855511184103);
    msg.setSource(56742U);
    msg.setSourceEntity(174U);
    msg.setDestination(23470U);
    msg.setDestinationEntity(122U);
    msg.value = 0.20507157484278693;

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
    msg.setTimeStamp(0.6496055932490699);
    msg.setSource(54386U);
    msg.setSourceEntity(57U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(170U);
    msg.value = 0.4134891165614425;

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
    msg.setTimeStamp(0.9185559972373327);
    msg.setSource(22745U);
    msg.setSourceEntity(242U);
    msg.setDestination(18586U);
    msg.setDestinationEntity(24U);
    msg.value = 0.1302740824218267;

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
    msg.setTimeStamp(0.6281401024744505);
    msg.setSource(29801U);
    msg.setSourceEntity(29U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(47U);
    msg.value = 0.4718756326535366;

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
    msg.setTimeStamp(0.12739120070325138);
    msg.setSource(28828U);
    msg.setSourceEntity(105U);
    msg.setDestination(14201U);
    msg.setDestinationEntity(50U);
    msg.validity = 14259U;
    msg.type = 187U;
    msg.utc_year = 21555U;
    msg.utc_month = 70U;
    msg.utc_day = 157U;
    msg.utc_time = 0.5443441157154061;
    msg.lat = 0.2276167533447746;
    msg.lon = 0.003938019348293187;
    msg.height = 0.2330265275569121;
    msg.satellites = 146U;
    msg.cog = 0.631422833330257;
    msg.sog = 0.25181972002735453;
    msg.hdop = 0.19417539157726238;
    msg.vdop = 0.18176570128963854;
    msg.hacc = 0.8271539537346804;
    msg.vacc = 0.32490398394475484;

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
    msg.setTimeStamp(0.8664127607420042);
    msg.setSource(42078U);
    msg.setSourceEntity(31U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(167U);
    msg.validity = 21544U;
    msg.type = 201U;
    msg.utc_year = 33788U;
    msg.utc_month = 121U;
    msg.utc_day = 201U;
    msg.utc_time = 0.07835217737053912;
    msg.lat = 0.5264905604593144;
    msg.lon = 0.7451786318389683;
    msg.height = 0.7594692891824617;
    msg.satellites = 63U;
    msg.cog = 0.984033184963561;
    msg.sog = 0.3063245711408482;
    msg.hdop = 0.9970829019667464;
    msg.vdop = 0.8181877872375245;
    msg.hacc = 0.21740442021963202;
    msg.vacc = 0.5461604201670889;

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
    msg.setTimeStamp(0.3592736552658814);
    msg.setSource(54485U);
    msg.setSourceEntity(210U);
    msg.setDestination(22456U);
    msg.setDestinationEntity(235U);
    msg.validity = 8160U;
    msg.type = 49U;
    msg.utc_year = 43055U;
    msg.utc_month = 213U;
    msg.utc_day = 158U;
    msg.utc_time = 0.8311768669968449;
    msg.lat = 0.18578890349588806;
    msg.lon = 0.751245095823302;
    msg.height = 0.5615922741899562;
    msg.satellites = 196U;
    msg.cog = 0.00580998252552023;
    msg.sog = 0.17175449711828428;
    msg.hdop = 0.4721605879809352;
    msg.vdop = 0.12044723311847116;
    msg.hacc = 0.5526481801653869;
    msg.vacc = 0.2723439095368153;

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
    msg.setTimeStamp(0.701973758830463);
    msg.setSource(65220U);
    msg.setSourceEntity(104U);
    msg.setDestination(32274U);
    msg.setDestinationEntity(161U);
    msg.time = 0.3045600751380211;
    msg.phi = 0.3822393360711881;
    msg.theta = 0.2531402506003364;
    msg.psi = 0.752757376265313;
    msg.psi_magnetic = 0.23283868199422741;

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
    msg.setTimeStamp(0.4838043590465936);
    msg.setSource(9657U);
    msg.setSourceEntity(135U);
    msg.setDestination(12889U);
    msg.setDestinationEntity(148U);
    msg.time = 0.4477922473848692;
    msg.phi = 0.44516790623800595;
    msg.theta = 0.9590866012352204;
    msg.psi = 0.32587709708786405;
    msg.psi_magnetic = 0.10447022775176396;

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
    msg.setTimeStamp(0.20866381795441558);
    msg.setSource(24813U);
    msg.setSourceEntity(61U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(208U);
    msg.time = 0.9305045611813337;
    msg.phi = 0.3917016987267804;
    msg.theta = 0.16516006027056374;
    msg.psi = 0.5561962516913682;
    msg.psi_magnetic = 0.5232616151937464;

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
    msg.setTimeStamp(0.18246532406514915);
    msg.setSource(33405U);
    msg.setSourceEntity(182U);
    msg.setDestination(63857U);
    msg.setDestinationEntity(238U);
    msg.time = 0.028024895857895027;
    msg.x = 0.5489061850365712;
    msg.y = 0.6861109592300664;
    msg.z = 0.48174330807837307;
    msg.timestep = 0.8723484634357568;

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
    msg.setTimeStamp(0.9136562509045218);
    msg.setSource(37373U);
    msg.setSourceEntity(82U);
    msg.setDestination(45863U);
    msg.setDestinationEntity(0U);
    msg.time = 0.8793021428957783;
    msg.x = 0.4235186518084574;
    msg.y = 0.313017347432058;
    msg.z = 0.9938552005705946;
    msg.timestep = 0.7207328284264729;

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
    msg.setTimeStamp(0.309225886938607);
    msg.setSource(57024U);
    msg.setSourceEntity(90U);
    msg.setDestination(5553U);
    msg.setDestinationEntity(24U);
    msg.time = 0.8503534882957946;
    msg.x = 0.5048124045706934;
    msg.y = 0.8121889311780699;
    msg.z = 0.8647876506941227;
    msg.timestep = 0.060914028292149425;

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
    msg.setTimeStamp(0.2809285483379158);
    msg.setSource(9268U);
    msg.setSourceEntity(62U);
    msg.setDestination(30883U);
    msg.setDestinationEntity(244U);
    msg.time = 0.9539191275384359;
    msg.x = 0.3134585440604907;
    msg.y = 0.6263075268855954;
    msg.z = 0.6254066454846835;

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
    msg.setTimeStamp(0.521052022564655);
    msg.setSource(61146U);
    msg.setSourceEntity(91U);
    msg.setDestination(15305U);
    msg.setDestinationEntity(164U);
    msg.time = 0.24849787744921503;
    msg.x = 0.5111372520848777;
    msg.y = 0.8849209375457394;
    msg.z = 0.07366419285416703;

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
    msg.setTimeStamp(0.2906845122641738);
    msg.setSource(8173U);
    msg.setSourceEntity(44U);
    msg.setDestination(29420U);
    msg.setDestinationEntity(63U);
    msg.time = 0.4633389547611366;
    msg.x = 0.24382118002114173;
    msg.y = 0.7455079822687156;
    msg.z = 0.5233166980829141;

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
    msg.setTimeStamp(0.5720582443116293);
    msg.setSource(36016U);
    msg.setSourceEntity(227U);
    msg.setDestination(42313U);
    msg.setDestinationEntity(5U);
    msg.time = 0.11357580555813285;
    msg.x = 0.6506057847371607;
    msg.y = 0.30346243082807234;
    msg.z = 0.8016701022498378;

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
    msg.setTimeStamp(0.520493332872416);
    msg.setSource(33694U);
    msg.setSourceEntity(207U);
    msg.setDestination(32498U);
    msg.setDestinationEntity(10U);
    msg.time = 0.4291515028853522;
    msg.x = 0.9597494826781253;
    msg.y = 0.8989798202927644;
    msg.z = 0.4194349129201047;

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
    msg.setTimeStamp(0.14982813366977343);
    msg.setSource(39348U);
    msg.setSourceEntity(194U);
    msg.setDestination(9380U);
    msg.setDestinationEntity(177U);
    msg.time = 0.6327048346361027;
    msg.x = 0.1932625699512055;
    msg.y = 0.5619326169431906;
    msg.z = 0.9603973201981397;

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
    msg.setTimeStamp(0.5765811002453662);
    msg.setSource(37212U);
    msg.setSourceEntity(209U);
    msg.setDestination(48665U);
    msg.setDestinationEntity(242U);
    msg.time = 0.49340473263714757;
    msg.x = 0.17290017286957926;
    msg.y = 0.7538169363549933;
    msg.z = 0.4357932684551311;

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
    msg.setTimeStamp(0.13115093232960884);
    msg.setSource(58337U);
    msg.setSourceEntity(123U);
    msg.setDestination(26935U);
    msg.setDestinationEntity(224U);
    msg.time = 0.10412855778931207;
    msg.x = 0.5553371803339141;
    msg.y = 0.3862573784250446;
    msg.z = 0.879006428389219;

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
    msg.setTimeStamp(0.35584014024977273);
    msg.setSource(60144U);
    msg.setSourceEntity(64U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(191U);
    msg.time = 0.8845817076603399;
    msg.x = 0.20795156361415001;
    msg.y = 0.5216290934167687;
    msg.z = 0.2693430651665759;

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
    msg.setTimeStamp(0.28809972028789765);
    msg.setSource(62429U);
    msg.setSourceEntity(58U);
    msg.setDestination(42412U);
    msg.setDestinationEntity(254U);
    msg.validity = 55U;
    msg.x = 0.5623696191406893;
    msg.y = 0.7205300323409963;
    msg.z = 0.9130011139530643;

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
    msg.setTimeStamp(0.5042958585221791);
    msg.setSource(42020U);
    msg.setSourceEntity(147U);
    msg.setDestination(29466U);
    msg.setDestinationEntity(41U);
    msg.validity = 104U;
    msg.x = 0.9670796758843117;
    msg.y = 0.37660246556126176;
    msg.z = 0.29438473649206054;

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
    msg.setTimeStamp(0.3240975851965858);
    msg.setSource(1644U);
    msg.setSourceEntity(166U);
    msg.setDestination(22771U);
    msg.setDestinationEntity(47U);
    msg.validity = 48U;
    msg.x = 0.06253684000391047;
    msg.y = 0.2576823350246895;
    msg.z = 0.6678312647725622;

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
    msg.setTimeStamp(0.8070018468155296);
    msg.setSource(13063U);
    msg.setSourceEntity(245U);
    msg.setDestination(44032U);
    msg.setDestinationEntity(73U);
    msg.validity = 7U;
    msg.x = 0.12506229877203123;
    msg.y = 0.3794144594660491;
    msg.z = 0.45880126276111044;

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
    msg.setTimeStamp(0.36930067704442116);
    msg.setSource(1067U);
    msg.setSourceEntity(68U);
    msg.setDestination(8146U);
    msg.setDestinationEntity(227U);
    msg.validity = 233U;
    msg.x = 0.46925884515515215;
    msg.y = 0.9150785271850452;
    msg.z = 0.25150976152028204;

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
    msg.setTimeStamp(0.7990926199617135);
    msg.setSource(64455U);
    msg.setSourceEntity(87U);
    msg.setDestination(27499U);
    msg.setDestinationEntity(26U);
    msg.validity = 207U;
    msg.x = 0.7535671180077548;
    msg.y = 0.15228098499411857;
    msg.z = 0.8737007520594501;

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
    msg.setTimeStamp(0.8805964786240271);
    msg.setSource(21957U);
    msg.setSourceEntity(57U);
    msg.setDestination(48840U);
    msg.setDestinationEntity(47U);
    msg.time = 0.4427598067837566;
    msg.x = 0.784881992338415;
    msg.y = 0.1811800944143075;
    msg.z = 0.6625457494232944;

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
    msg.setTimeStamp(0.16331528202917034);
    msg.setSource(41596U);
    msg.setSourceEntity(78U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(200U);
    msg.time = 0.36414299436583797;
    msg.x = 0.5843678459963625;
    msg.y = 0.02543255224565788;
    msg.z = 0.3821543338310346;

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
    msg.setTimeStamp(0.647933610677259);
    msg.setSource(17901U);
    msg.setSourceEntity(194U);
    msg.setDestination(5367U);
    msg.setDestinationEntity(213U);
    msg.time = 0.3153983403081351;
    msg.x = 0.08449601426687603;
    msg.y = 0.2238954087478472;
    msg.z = 0.47502247541088194;

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
    msg.setTimeStamp(0.22201648934956641);
    msg.setSource(52855U);
    msg.setSourceEntity(128U);
    msg.setDestination(20583U);
    msg.setDestinationEntity(240U);
    msg.validity = 192U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4484193859520179;
    tmp_msg_0.y = 0.6511296511007719;
    tmp_msg_0.z = 0.3940409130970177;
    tmp_msg_0.phi = 0.9206142024340993;
    tmp_msg_0.theta = 0.1397645269759601;
    tmp_msg_0.psi = 0.5587324741876352;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.6449296160338812;

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
    msg.setTimeStamp(0.673720100989042);
    msg.setSource(64289U);
    msg.setSourceEntity(192U);
    msg.setDestination(43129U);
    msg.setDestinationEntity(26U);
    msg.validity = 225U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5213756598924155;
    tmp_msg_0.beam_height = 0.39412753863310046;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.48795632050717286;

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
    msg.setTimeStamp(0.03926969230265276);
    msg.setSource(62940U);
    msg.setSourceEntity(205U);
    msg.setDestination(53455U);
    msg.setDestinationEntity(210U);
    msg.validity = 47U;
    msg.value = 0.8469770209458989;

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
    msg.setTimeStamp(0.3093589782651621);
    msg.setSource(54155U);
    msg.setSourceEntity(82U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(186U);
    msg.value = 0.07679524837127782;

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
    msg.setTimeStamp(0.7565471846094688);
    msg.setSource(61000U);
    msg.setSourceEntity(219U);
    msg.setDestination(35001U);
    msg.setDestinationEntity(184U);
    msg.value = 0.18055610651338572;

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
    msg.setTimeStamp(0.830413226566135);
    msg.setSource(10202U);
    msg.setSourceEntity(123U);
    msg.setDestination(21913U);
    msg.setDestinationEntity(64U);
    msg.value = 0.36505803148600524;

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
    msg.setTimeStamp(0.16601532374725614);
    msg.setSource(32387U);
    msg.setSourceEntity(39U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(196U);
    msg.value = 0.735899610650274;

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
    msg.setTimeStamp(0.39023703308730395);
    msg.setSource(22461U);
    msg.setSourceEntity(205U);
    msg.setDestination(26256U);
    msg.setDestinationEntity(135U);
    msg.value = 0.0413354437354434;

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
    msg.setTimeStamp(0.6750175757833412);
    msg.setSource(4282U);
    msg.setSourceEntity(237U);
    msg.setDestination(15626U);
    msg.setDestinationEntity(190U);
    msg.value = 0.3107553167877446;

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
    msg.setTimeStamp(0.006236628278126433);
    msg.setSource(45035U);
    msg.setSourceEntity(185U);
    msg.setDestination(4183U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5302026428396768;

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
    msg.setTimeStamp(0.39669543128558793);
    msg.setSource(22111U);
    msg.setSourceEntity(3U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(253U);
    msg.value = 0.8306352183972855;

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
    msg.setTimeStamp(0.1688674427166561);
    msg.setSource(19271U);
    msg.setSourceEntity(130U);
    msg.setDestination(35275U);
    msg.setDestinationEntity(195U);
    msg.value = 0.4436039642016324;

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
    msg.setTimeStamp(0.4811958540796323);
    msg.setSource(55963U);
    msg.setSourceEntity(16U);
    msg.setDestination(6172U);
    msg.setDestinationEntity(148U);
    msg.value = 0.48963205680413935;

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
    msg.setTimeStamp(0.7876471678877105);
    msg.setSource(38856U);
    msg.setSourceEntity(154U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9205083764482049;

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
    msg.setTimeStamp(0.7992549353768821);
    msg.setSource(31422U);
    msg.setSourceEntity(119U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(160U);
    msg.value = 0.818661869695465;

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
    msg.setTimeStamp(0.6383927399544701);
    msg.setSource(35773U);
    msg.setSourceEntity(192U);
    msg.setDestination(64442U);
    msg.setDestinationEntity(15U);
    msg.value = 0.9048920358342325;

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
    msg.setTimeStamp(0.6400585458709861);
    msg.setSource(14600U);
    msg.setSourceEntity(251U);
    msg.setDestination(5888U);
    msg.setDestinationEntity(252U);
    msg.value = 0.45890285484501736;

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
    msg.setTimeStamp(0.8362656294419116);
    msg.setSource(27435U);
    msg.setSourceEntity(176U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(76U);
    msg.value = 0.6613075906191587;

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
    msg.setTimeStamp(0.04385104758005587);
    msg.setSource(38415U);
    msg.setSourceEntity(55U);
    msg.setDestination(54663U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0798695933881951;

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
    msg.setTimeStamp(0.9980896197179582);
    msg.setSource(34228U);
    msg.setSourceEntity(68U);
    msg.setDestination(29883U);
    msg.setDestinationEntity(51U);
    msg.value = 0.4691908837859109;

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
    msg.setTimeStamp(0.15274966939665968);
    msg.setSource(47877U);
    msg.setSourceEntity(191U);
    msg.setDestination(58236U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9576790431384367;

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
    msg.setTimeStamp(0.22375803645054626);
    msg.setSource(10670U);
    msg.setSourceEntity(230U);
    msg.setDestination(17006U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8382577636898119;

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
    msg.setTimeStamp(0.5911096351446838);
    msg.setSource(22012U);
    msg.setSourceEntity(215U);
    msg.setDestination(45775U);
    msg.setDestinationEntity(113U);
    msg.value = 0.2369140244338851;

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
    msg.setTimeStamp(0.9650896120613424);
    msg.setSource(64336U);
    msg.setSourceEntity(214U);
    msg.setDestination(3717U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8473923604938958;

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
    msg.setTimeStamp(0.13574447618506702);
    msg.setSource(47375U);
    msg.setSourceEntity(183U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(245U);
    msg.value = 0.7422775558825231;

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
    msg.setTimeStamp(0.6884949724999355);
    msg.setSource(65516U);
    msg.setSourceEntity(11U);
    msg.setDestination(45641U);
    msg.setDestinationEntity(144U);
    msg.value = 0.032343230918186916;

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
    msg.setTimeStamp(0.03590311124621315);
    msg.setSource(38046U);
    msg.setSourceEntity(246U);
    msg.setDestination(14273U);
    msg.setDestinationEntity(132U);
    msg.value = 0.27262219600425586;

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
    msg.setTimeStamp(0.4116967854856357);
    msg.setSource(12628U);
    msg.setSourceEntity(214U);
    msg.setDestination(22422U);
    msg.setDestinationEntity(155U);
    msg.direction = 0.9957627581405701;
    msg.speed = 0.03931487547042267;

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
    msg.setTimeStamp(0.8779424906206125);
    msg.setSource(488U);
    msg.setSourceEntity(215U);
    msg.setDestination(24570U);
    msg.setDestinationEntity(70U);
    msg.direction = 0.46442442071979384;
    msg.speed = 0.8979032441790514;

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
    msg.setTimeStamp(0.3164483231050861);
    msg.setSource(7396U);
    msg.setSourceEntity(139U);
    msg.setDestination(47791U);
    msg.setDestinationEntity(153U);
    msg.direction = 0.6308768022117821;
    msg.speed = 0.2733953257598466;

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
    msg.setTimeStamp(0.7288306861966314);
    msg.setSource(20444U);
    msg.setSourceEntity(15U);
    msg.setDestination(35873U);
    msg.setDestinationEntity(248U);
    msg.value = 0.08633832923798412;

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
    msg.setTimeStamp(0.7000478745758832);
    msg.setSource(35949U);
    msg.setSourceEntity(230U);
    msg.setDestination(62726U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6112371169148485;

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
    msg.setTimeStamp(0.7720305922374934);
    msg.setSource(33711U);
    msg.setSourceEntity(44U);
    msg.setDestination(12320U);
    msg.setDestinationEntity(138U);
    msg.value = 0.27368156864795423;

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
    msg.setTimeStamp(0.3650404573317788);
    msg.setSource(16285U);
    msg.setSourceEntity(78U);
    msg.setDestination(51039U);
    msg.setDestinationEntity(232U);
    msg.value.assign("VXGYRJGGCNYSFFMAYKARIHZGPRVTXLGBQWCMHFCVBASJQDGUJPTHDYOJLNCEICQOUVEWACYNYMBCZJSDZNEIPJMHKDSUKMKYZHOAOAYOOQWDURPEEBUQCCFROTJIAXZFMLNQMICLUFAWZBAHFOQMPKBUNHNBZQLEMKTGLTNZOJBLVT");

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
    msg.setTimeStamp(0.6183343107571836);
    msg.setSource(13086U);
    msg.setSourceEntity(53U);
    msg.setDestination(52208U);
    msg.setDestinationEntity(102U);
    msg.value.assign("ZSWQIYAXREMEDMBKUIDFMPHPZDTJXVAAHYVJDIPPFWKEOUVORNFSKWUUGNXXPKTQYFSAKA");

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
    msg.setTimeStamp(0.5577493741470441);
    msg.setSource(64146U);
    msg.setSourceEntity(65U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(55U);
    msg.value.assign("UDEWXHCOMBHOBCIACLIJPORWWEPNHMTHLZEOGPTYMPIJRSNETSVJSJVYLAXTWOHURDLNKHAEVTZGNRHJCUXBQRIHWSICYYRZZNYKFBOGKPQVKXGWFDFJMTAQYAGEMKKCQZFDDRXKCZFEFDURUUBARFJKGFLGRXYBBUMNXPTLLZGVDEJGBNQLGWCWATMPIBVNVPZODMSMDCQTSQIFAK");

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
    msg.setTimeStamp(0.7386676295434809);
    msg.setSource(20037U);
    msg.setSourceEntity(203U);
    msg.setDestination(34554U);
    msg.setDestinationEntity(60U);
    const char tmp_msg_0[] = {67, 88, 103, -86, -55, 63, -75, -114, 87, 52, -117, 46, -22, 28, 28, -17, 17, 53, -64, 26, 116, -111, -17, 50, -111, -98, -41, 54, 126, -106, 95, 24, -104, -29, 79, -81, -88, -32, 104, -47, -122, -54, 26, 22, 100, 90, -28, 34, -58, 102, -42, 126, -26, 31, 43, 7, -57, -104, -76, -79, -99, -72, 44, 59, -80, -116, 17, -77, -128, -103, -102, -76, 23, -98, -62, 66, -82, -1, -23, -106, -71, -5, -66, -27, 74, 105, -46, 72, 47, 67, -116, -39, -63, -4, -95, -62, -54, 59, 1, 109, -49, 93, 71, 58, -4, -106, 54, 80, -40, -25, 52, 81, -45, -7, 86, -127, 92, -11, -8, 20, -14, 113, -126, -9, 77, 67, 55, -79, -66, 39, -20, 92, 80, 88, 40, -32, 71, 7, 4, -36, 113, -13, -7, 72, -64, -4, 46, 114, -68, 101, 90, 47, -71, 72, 1, -52, 65, 55, -2, -8, 45, 52, -59, 62, -98, -5, 80, -91, 22, 82, -13, -35, 104, -4, -78, 88, -51, -23, 27, -106, 21, -38, 90, 20, -68, -52, -85, -1, 39, -109, -3, -77, 13, -31, -127, 22, 58, 40, 73, 78, -61, -25, -57, 9, -121, 110, -87, -51, -51, 94, -20, 0, -104, -102, 77, 22, 42, -94, 20, -11, -41, -44, -43, 97};
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
    msg.setTimeStamp(0.7106177737720759);
    msg.setSource(51788U);
    msg.setSourceEntity(61U);
    msg.setDestination(62250U);
    msg.setDestinationEntity(15U);
    const char tmp_msg_0[] = {-111, 86, 16, -27, 13, -75, -69, -76, -96, 107, 77, -78, -5, 10, -107, -92, -23, -90, -61, 76, -90, -96, -26, -31, 125, 99, 73, 36, -122, 47, 89, -85, -37, 75, -80, 85, -9, -87, -63, 46, -73, 69, 55, 14, 22, -4, 71, 15, -79, 73, 56, -103, 40, -25, 4, 48, 97, 15, -117, 32, 80, -63, -94, 121, -54, -34, 53, 19, -10, 113, 9, -100, -72, -18, -102, -10, -28, -88, -41, 11, -119, 126, -62, 21, -72, -126, 25, -102, -114, -65, 123, -86, -10, 93, 7, 112, -121, 60, -96, -16, -98, 76, -31, 43, 113, 39, 17, -41, -12, -125, 34, -52, 14, -32, 117, -99, 15, 87, -118, 50, 81, 91, 69, 41, 68, -103, 79, -90, -60, -48, 9, -79, -45, 100, 9, 12, 76, 14, 50, -8, 50, -107, 36, -4, 97, -101, -52, -86, 13, 27, 118, -108, 114, -58, -16, -61, 83, 115, 55, 28, -109, 72, 95, -86, -93, 24, -51, 64, -30, -107, -101, -40, -71, 28, 29, 53, 6, -69, 11, 107, 119, -125, 18, 99, 108, 0, 59, -58, 64, -11, -9, 70, -118, -57, 96, 61, -52, -80, 62, 25, 13, 23, -117, 60};
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
    msg.setTimeStamp(0.896486284489998);
    msg.setSource(17222U);
    msg.setSourceEntity(207U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(151U);
    const char tmp_msg_0[] = {64, -88, -80, -38, -116, 17, -51, -37, -87, 108, 117, -35, 104, -6, -50, -25, -75, 101, 53, 81, 56, -9, -106, -77, -84, -5, -77, -91, -65, 53, 41, 21, -100, -16, -77, 124, 49, -62, -63, -26, 99, -70, -19, -117, 51, 93, -31, -118, -13, 2, 53, 0, 33, -107, 55, 22};
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
    msg.setTimeStamp(0.3976617808141161);
    msg.setSource(13604U);
    msg.setSourceEntity(18U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(14U);
    msg.frequency = 1547700409U;
    msg.min_range = 29792U;
    msg.max_range = 23280U;

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
    msg.setTimeStamp(0.9514840400325396);
    msg.setSource(57639U);
    msg.setSourceEntity(36U);
    msg.setDestination(12827U);
    msg.setDestinationEntity(120U);
    msg.frequency = 2403561048U;
    msg.min_range = 33038U;
    msg.max_range = 57665U;

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
    msg.setTimeStamp(0.6027946718471988);
    msg.setSource(16875U);
    msg.setSourceEntity(0U);
    msg.setDestination(52469U);
    msg.setDestinationEntity(164U);
    msg.frequency = 2113348961U;
    msg.min_range = 65433U;
    msg.max_range = 58166U;

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
    msg.setTimeStamp(0.21000564335673544);
    msg.setSource(35620U);
    msg.setSourceEntity(23U);
    msg.setDestination(57907U);
    msg.setDestinationEntity(165U);
    msg.type = 214U;
    msg.frequency = 542626852U;
    msg.min_range = 11082U;
    msg.max_range = 21393U;
    msg.bits_per_point = 58U;
    msg.scale_factor = 0.7522346458853741;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4527916186597042;
    tmp_msg_0.beam_height = 0.3948927394845053;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {125, 75, -51, -122, -54, -18, 106, 35, -98, -83, 11, 22, 97, -22, -69, -56, 79, -23, 108, 23, -22, 64, 39, 63, -118, 15, -57, -17, 123, -65, -60, -127, -116, -87, -123, -127, -50, -99, -117, -115, -46, -7, 37, -118, 23, 98, -108, -75, -55, 30, 71, 100, -5, -20, -55, 112, -35, -121, -116, -78, 78, -115, 56, -20, -4, 58, 31, -84, 22, -54, 5, -108, -56, -86, -124, 65, 103, -37, 45, 50, 90, 14, 59, 53, -91, 97, -64, -99, 98, -77, 100, -78, 110, -11, 119, -115, 100, 88, 104, 78, -74, -66, -39, 109, -105, 66, 27, -76, -30, 51, 2, 69, 22, 42, 95, -50, 42, 74, 36, 90, 21, -91, -54, 113, 36, 61, -21, -55, -86, -118, 42, -30, 91, 16, -67, 65, 56, -93, -75, 24, 65, 84, 125, -29, -53, 35, -83, -110, -39, -59, 61, -31, -68, -104, -94, 61, 107, 12, 78, -116, 71, -88, -104, 85, -125, -118, -14, -119, 104, -35, 37, -97, -50, 70, -93, -118, -116, 59, -47, 57, -99, 106, -11, 35, 54, 24, 69, 31, -106, 85, -81, 73, 5, 27, 70, -1, -45, -84, 92, -111, 54, -73, -81, 7, -6, 56, -110, 31, -123, 1, 106, 15, 17, -42, 39, -1, -37, -127, -96, -116, -75, 123, -82, 87, -43, -61, -58, -105, 85, -106, 39, 55, 70, -79, -122, 1, -14, -107, 45, -124, 54, -82, -100, 1};
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
    msg.setTimeStamp(0.8780760971705254);
    msg.setSource(46597U);
    msg.setSourceEntity(115U);
    msg.setDestination(50873U);
    msg.setDestinationEntity(89U);
    msg.type = 77U;
    msg.frequency = 1786813288U;
    msg.min_range = 30405U;
    msg.max_range = 20938U;
    msg.bits_per_point = 34U;
    msg.scale_factor = 0.1412441356934485;
    const char tmp_msg_0[] = {-116, -68, 113, -8, 23, -119, -115, 18, 85, 100, 5, 44, -121, -8, 15, -3, 50, -70, -84, -16, 56, 107, -121, -2, -82, 55, 72, 27, -39, -10, 59, 92, -34, 113, -44, -89, -18, 10, -21, 68, 4, -31, -94, -3, 109, -21, 67, -100, 37, 17, -61, 64, -94, -107, 15, 37, -53, -67, 56, 7, -10, -69, 120};
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
    msg.setTimeStamp(0.6833849403965028);
    msg.setSource(30480U);
    msg.setSourceEntity(240U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(168U);
    msg.type = 245U;
    msg.frequency = 815274956U;
    msg.min_range = 2188U;
    msg.max_range = 35651U;
    msg.bits_per_point = 191U;
    msg.scale_factor = 0.21202612103983343;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2790256678117472;
    tmp_msg_0.beam_height = 0.8845852124136051;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-101, -29, -123, 24, 73, 122, 124, 123, -48, 16, 59, 24, 123, 32, 83, 2, -39, 53, 19, 28, 94, -25, 65, 121, -112, -1, 100, -73, -120, 98, -115, -101, -11, 48, -120, 83, -76, -15, 97, 21, 119, 75, -81, 40, -59, 61, -62, -45, 98, 115, -89, -9, -23, -112, -26, -97, 116, 11, 13, 39, -67, -74, -4, -48, 74, -22, 102, 121, 72};
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
    msg.setTimeStamp(0.25094853725321686);
    msg.setSource(63580U);
    msg.setSourceEntity(87U);
    msg.setDestination(2445U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.9738991089600422);
    msg.setSource(54532U);
    msg.setSourceEntity(252U);
    msg.setDestination(31767U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.4984468546954992);
    msg.setSource(64302U);
    msg.setSourceEntity(222U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.9183029925880173);
    msg.setSource(736U);
    msg.setSourceEntity(71U);
    msg.setDestination(23753U);
    msg.setDestinationEntity(104U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.4756015172879612);
    msg.setSource(65356U);
    msg.setSourceEntity(23U);
    msg.setDestination(62907U);
    msg.setDestinationEntity(239U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.2298508217234);
    msg.setSource(5866U);
    msg.setSourceEntity(144U);
    msg.setDestination(56768U);
    msg.setDestinationEntity(116U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.4840182482125662);
    msg.setSource(33744U);
    msg.setSourceEntity(59U);
    msg.setDestination(45865U);
    msg.setDestinationEntity(177U);
    msg.value = 0.38685997277352546;
    msg.confidence = 0.1745045374047003;
    msg.opmodes.assign("GOFPAFRVEMCTXFCKXXCYPGMCVLEMIIBXZXBZNBOKVTGGRJNTXIHQTJBOSYLWYLFRAPMBMHAVAHLZMUZYJEFOLDPDVQYUBINMSMLWDPABWOLSJGUCOQUK");

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
    msg.setTimeStamp(0.7697709211832517);
    msg.setSource(65503U);
    msg.setSourceEntity(252U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(114U);
    msg.value = 0.2736046377026575;
    msg.confidence = 0.6831376887803229;
    msg.opmodes.assign("DYODRZOVJVWLLYEAPQRKAHKYHDVEZOUZIZGQXFFODYGETIPATSSMSFSCOLAMVIZHUTPYKJUNKRXYDUNOHQECXJRZFZIQMJTHVKFSIRJXLJIXZESM");

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
    msg.setTimeStamp(0.0403395256532838);
    msg.setSource(65471U);
    msg.setSourceEntity(51U);
    msg.setDestination(7283U);
    msg.setDestinationEntity(220U);
    msg.value = 0.524453040195407;
    msg.confidence = 0.45990101393842675;
    msg.opmodes.assign("DRBSUFFMBUUNFXVQQGIAEVKAKJTHUWREKIOGBBCFLJJRIERLKNPMUCMGPNWWPVCLHSKCMOHHLKZNWCXTOBHMCXJUJQPHSOPJUQOWYTLZVFMDWMVYLGQKGCRNQSJIDWDIHSUIAUESYLZQSNPE");

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
    msg.setTimeStamp(0.7180084671345776);
    msg.setSource(60600U);
    msg.setSourceEntity(20U);
    msg.setDestination(18159U);
    msg.setDestinationEntity(245U);
    msg.itow = 3762416618U;
    msg.lat = 0.6196511737903931;
    msg.lon = 0.07987816708813111;
    msg.height_ell = 0.774141584463193;
    msg.height_sea = 0.29394592431771394;
    msg.hacc = 0.6189060197458471;
    msg.vacc = 0.821008784149865;
    msg.vel_n = 0.6954142719909182;
    msg.vel_e = 0.4594280484933234;
    msg.vel_d = 0.6468386364632341;
    msg.speed = 0.6712703322717772;
    msg.gspeed = 0.25849088462775494;
    msg.heading = 0.009054618634240619;
    msg.sacc = 0.20811040273769166;
    msg.cacc = 0.1533066687093192;

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
    msg.setTimeStamp(0.19281260056567173);
    msg.setSource(52574U);
    msg.setSourceEntity(188U);
    msg.setDestination(26393U);
    msg.setDestinationEntity(122U);
    msg.itow = 1207710196U;
    msg.lat = 0.4290814590452293;
    msg.lon = 0.5811486170258372;
    msg.height_ell = 0.594062139803847;
    msg.height_sea = 0.6516468252183557;
    msg.hacc = 0.2739463891956958;
    msg.vacc = 0.3669184540244992;
    msg.vel_n = 0.21045910289151915;
    msg.vel_e = 0.13725173149326753;
    msg.vel_d = 0.9060044419932767;
    msg.speed = 0.23884278935323366;
    msg.gspeed = 0.6702536294879196;
    msg.heading = 0.10737654342968395;
    msg.sacc = 0.9198086141534972;
    msg.cacc = 0.07967110559489332;

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
    msg.setTimeStamp(0.08255097594092775);
    msg.setSource(3139U);
    msg.setSourceEntity(247U);
    msg.setDestination(1796U);
    msg.setDestinationEntity(179U);
    msg.itow = 3090303242U;
    msg.lat = 0.17784883777228455;
    msg.lon = 0.4734765985116316;
    msg.height_ell = 0.12061058522691015;
    msg.height_sea = 0.29466137746859267;
    msg.hacc = 0.9266825201525024;
    msg.vacc = 0.23177339115012197;
    msg.vel_n = 0.7386998154678992;
    msg.vel_e = 0.37283879249030294;
    msg.vel_d = 0.644201111350786;
    msg.speed = 0.30060290796841893;
    msg.gspeed = 0.29287902324771753;
    msg.heading = 0.4697173637140265;
    msg.sacc = 0.21493761053415594;
    msg.cacc = 0.05740341719503683;

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
    msg.setTimeStamp(0.3509937147210368);
    msg.setSource(45425U);
    msg.setSourceEntity(188U);
    msg.setDestination(5243U);
    msg.setDestinationEntity(203U);
    msg.id = 220U;
    msg.value = 0.23052862590496803;

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
    msg.setTimeStamp(0.43191837099424923);
    msg.setSource(55599U);
    msg.setSourceEntity(29U);
    msg.setDestination(36561U);
    msg.setDestinationEntity(38U);
    msg.id = 228U;
    msg.value = 0.7359606668743418;

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
    msg.setTimeStamp(0.17365063654570145);
    msg.setSource(17315U);
    msg.setSourceEntity(142U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(69U);
    msg.id = 252U;
    msg.value = 0.15559030867854962;

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
    msg.setTimeStamp(0.41975865927006584);
    msg.setSource(50109U);
    msg.setSourceEntity(6U);
    msg.setDestination(8962U);
    msg.setDestinationEntity(9U);
    msg.x = 0.39856713475087424;
    msg.y = 0.9344042457399332;
    msg.z = 0.1359946885895762;
    msg.phi = 0.631386193418959;
    msg.theta = 0.6337820157299301;
    msg.psi = 0.9116620180921312;

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
    msg.setTimeStamp(0.6454247443879904);
    msg.setSource(6871U);
    msg.setSourceEntity(31U);
    msg.setDestination(52362U);
    msg.setDestinationEntity(71U);
    msg.x = 0.6814361747688338;
    msg.y = 0.6860471499738255;
    msg.z = 0.6586833712769207;
    msg.phi = 0.5293604024395694;
    msg.theta = 0.4366900877846718;
    msg.psi = 0.5028880648817606;

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
    msg.setTimeStamp(0.12195763861802789);
    msg.setSource(64697U);
    msg.setSourceEntity(247U);
    msg.setDestination(8689U);
    msg.setDestinationEntity(2U);
    msg.x = 0.21660640682549637;
    msg.y = 0.5810859299681727;
    msg.z = 0.07450606885826117;
    msg.phi = 0.1215335957798872;
    msg.theta = 0.05675415269036399;
    msg.psi = 0.848105090573324;

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
    msg.setTimeStamp(0.325950909405195);
    msg.setSource(19773U);
    msg.setSourceEntity(247U);
    msg.setDestination(52455U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.14022257748635536;
    msg.beam_height = 0.06108087263464124;

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
    msg.setTimeStamp(0.7341801012173771);
    msg.setSource(41843U);
    msg.setSourceEntity(58U);
    msg.setDestination(54300U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.2047694448995957;
    msg.beam_height = 0.7767752987460121;

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
    msg.setTimeStamp(0.864321898424595);
    msg.setSource(6921U);
    msg.setSourceEntity(240U);
    msg.setDestination(61844U);
    msg.setDestinationEntity(11U);
    msg.beam_width = 0.21181507289505974;
    msg.beam_height = 0.5661999278626637;

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
    msg.setTimeStamp(0.08489693810363563);
    msg.setSource(29056U);
    msg.setSourceEntity(58U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(203U);
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
    msg.setTimeStamp(0.9272563207226225);
    msg.setSource(28718U);
    msg.setSourceEntity(115U);
    msg.setDestination(29694U);
    msg.setDestinationEntity(158U);
    msg.sane = 252U;

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
    msg.setTimeStamp(0.9281991669727475);
    msg.setSource(3189U);
    msg.setSourceEntity(130U);
    msg.setDestination(42731U);
    msg.setDestinationEntity(101U);
    msg.sane = 146U;

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
    msg.setTimeStamp(0.3454301094784359);
    msg.setSource(31210U);
    msg.setSourceEntity(196U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(93U);
    msg.id = 208U;
    msg.zoom = 16U;
    msg.action = 157U;

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
    msg.setTimeStamp(0.026370707364644974);
    msg.setSource(27005U);
    msg.setSourceEntity(137U);
    msg.setDestination(11751U);
    msg.setDestinationEntity(41U);
    msg.id = 242U;
    msg.zoom = 214U;
    msg.action = 241U;

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
    msg.setTimeStamp(0.8725035626207083);
    msg.setSource(22154U);
    msg.setSourceEntity(54U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(86U);
    msg.id = 73U;
    msg.zoom = 129U;
    msg.action = 73U;

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
    msg.setTimeStamp(0.09783359616351206);
    msg.setSource(48262U);
    msg.setSourceEntity(69U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(165U);
    msg.id = 119U;
    msg.value = 0.6058371539477724;

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
    msg.setTimeStamp(0.07163575174363246);
    msg.setSource(50067U);
    msg.setSourceEntity(130U);
    msg.setDestination(43559U);
    msg.setDestinationEntity(17U);
    msg.id = 189U;
    msg.value = 0.4977006610042861;

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
    msg.setTimeStamp(0.18275310203408524);
    msg.setSource(41151U);
    msg.setSourceEntity(240U);
    msg.setDestination(14394U);
    msg.setDestinationEntity(207U);
    msg.id = 248U;
    msg.value = 0.45461776274611565;

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
    msg.setTimeStamp(0.3795463770887647);
    msg.setSource(13464U);
    msg.setSourceEntity(147U);
    msg.setDestination(57454U);
    msg.setDestinationEntity(94U);
    msg.id = 137U;
    msg.value = 0.38030410056628117;

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
    msg.setTimeStamp(0.8027532999833985);
    msg.setSource(46743U);
    msg.setSourceEntity(156U);
    msg.setDestination(41946U);
    msg.setDestinationEntity(196U);
    msg.id = 203U;
    msg.value = 0.28958926244125804;

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
    msg.setTimeStamp(0.6608704620067476);
    msg.setSource(49939U);
    msg.setSourceEntity(33U);
    msg.setDestination(58056U);
    msg.setDestinationEntity(84U);
    msg.id = 84U;
    msg.value = 0.08875675184810594;

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
    msg.setTimeStamp(0.4993008205022872);
    msg.setSource(40845U);
    msg.setSourceEntity(236U);
    msg.setDestination(24551U);
    msg.setDestinationEntity(167U);
    msg.id = 11U;
    msg.angle = 0.5603196002742596;

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
    msg.setTimeStamp(0.8781186430016804);
    msg.setSource(51547U);
    msg.setSourceEntity(129U);
    msg.setDestination(16999U);
    msg.setDestinationEntity(50U);
    msg.id = 202U;
    msg.angle = 0.28135051082444495;

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
    msg.setTimeStamp(0.664108500941665);
    msg.setSource(14525U);
    msg.setSourceEntity(115U);
    msg.setDestination(30420U);
    msg.setDestinationEntity(33U);
    msg.id = 52U;
    msg.angle = 0.20164648178684352;

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
    msg.setTimeStamp(0.22829772496850453);
    msg.setSource(47562U);
    msg.setSourceEntity(171U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(128U);
    msg.op = 149U;
    msg.actions.assign("WSWESPKNIHXFANYHQXDMKCQOHUUYXREVMCNKNTWBVPLFVEZYMSXXOJBKNYJLPVMJCNDSUHXHGNEGGIEBFOBJLZCPGLKBFOEIGWYFDRRLMQXLZJXRZTKJDMYMWHUATQGYSETDNPYKJVPRZDECLOWSQCCQGHVPJFQALVBABWIZBXVEWKNMTAICDYZUQTSDIFIPHJSAOIIUZLMUMGWTGBQSTUAXHJFZRKKEGNVHOSCTOQDWDZROLFBPP");

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
    msg.setTimeStamp(0.22602513234971533);
    msg.setSource(7367U);
    msg.setSourceEntity(67U);
    msg.setDestination(4126U);
    msg.setDestinationEntity(238U);
    msg.op = 11U;
    msg.actions.assign("OZZOSMLTJHQPZCBTSUCKHCMRDJGHOUMQGNDOB");

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
    msg.setTimeStamp(0.3425310318613862);
    msg.setSource(18532U);
    msg.setSourceEntity(55U);
    msg.setDestination(64452U);
    msg.setDestinationEntity(90U);
    msg.op = 71U;
    msg.actions.assign("MFVSJOIXYGAQSGTGBBUAMEVUMRHNRMLXEFAQSCVKVAEPJFBPGSUJQLEHFBZNVVKHCCJXR");

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
    msg.setTimeStamp(0.5987518525582481);
    msg.setSource(21359U);
    msg.setSourceEntity(61U);
    msg.setDestination(20342U);
    msg.setDestinationEntity(83U);
    msg.actions.assign("XOJREMSOCAUDYGNNGDFYHJFGNCTWGQVFONQHENQGBBEOSVUCDSKIIRRTJTGVPAORZHIXRPZBSXLKTDLRWYHGULZDPEBTKLPKZFXAUCPTPSQKJHJBVJHOSFOCGRWFCYDUHDQYRNZPSKBFIIMWQEQYGRTTMOKUVGAPJUWLBKWVFIENYZNSFOSEYKTXMXXQNXQMVNXWKTEFVAZHAOALZUCCHSBVIICQIAELU");

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
    msg.setTimeStamp(0.820642660470179);
    msg.setSource(4119U);
    msg.setSourceEntity(172U);
    msg.setDestination(51985U);
    msg.setDestinationEntity(194U);
    msg.actions.assign("RYLCMGTQPTACDXKFRYHBENWAKSSOGSVGUTPCJXEPKGXYTDWGNRAKQSZONYDARXBIVXIDWNHVGRIEJFCYJUAIVIJPIHVTAGZBOUASCYEEBZZCDPJOLIQJDKDWAVHLLCUUTDROOUEUPFOSFMNWROEPIBXBRBNMZKQYFVHWZMQFLEFGRMIZWEBXOMYZHJU");

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
    msg.setTimeStamp(0.7887294433613765);
    msg.setSource(53404U);
    msg.setSourceEntity(35U);
    msg.setDestination(65518U);
    msg.setDestinationEntity(167U);
    msg.actions.assign("FBQXDOEBEKLAQEGFPFCGZBPSMTBINXSFDHZWYMGCOTUAMYNBJVHGNCBYYYTTNXLEUWIRIOEIMWUHUSCCXUPELMNZOJCXBKPANDISGUZQZQWWPRFEVLYEWSKQSGHFKSHBAX");

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
    msg.setTimeStamp(0.5978858818782063);
    msg.setSource(58070U);
    msg.setSourceEntity(146U);
    msg.setDestination(19638U);
    msg.setDestinationEntity(203U);
    msg.button = 40U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.6660190781864267);
    msg.setSource(7383U);
    msg.setSourceEntity(100U);
    msg.setDestination(25473U);
    msg.setDestinationEntity(23U);
    msg.button = 3U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.24512495883657104);
    msg.setSource(37812U);
    msg.setSourceEntity(156U);
    msg.setDestination(15384U);
    msg.setDestinationEntity(120U);
    msg.button = 88U;
    msg.value = 158U;

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
    msg.setTimeStamp(0.2926335407854618);
    msg.setSource(2927U);
    msg.setSourceEntity(244U);
    msg.setDestination(60007U);
    msg.setDestinationEntity(122U);
    msg.op = 2U;
    msg.text.assign("NUZZOQGHIWKCRYSZHZGKIKBUZSOMJXCPKMCGZVTQFVAFHJXGGHJPTJWWPEDSHLFVPYEAHYIRINZTLBAOHQQGQRMKRMOSGPUSCNIYLNYPWT");

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
    msg.setTimeStamp(0.40756229414279654);
    msg.setSource(7856U);
    msg.setSourceEntity(67U);
    msg.setDestination(48242U);
    msg.setDestinationEntity(227U);
    msg.op = 248U;
    msg.text.assign("AIJZFJEBXTPPDCSQXPKRPDDZBYABZHRMXWABVMEEILTFSOMAZTWAOGLURKOIDDJPBZYSILPULHCCMOUCAYASFADNTCDFKKQYJZKKOZKTOKZZIGTGYNEXYOUUANGHDGTCRMNQKCVSLJUPPSLKHYGNMMYNUQCSOURHRTBPVIXFATUNHXLOQXSHEHSEIHJJVLWIIDNUFEQNJFXEJVBRGCSVJOWZWMYLGW");

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
    msg.setTimeStamp(0.5072915275622143);
    msg.setSource(21312U);
    msg.setSourceEntity(64U);
    msg.setDestination(1175U);
    msg.setDestinationEntity(196U);
    msg.op = 202U;
    msg.text.assign("IGRLBGDSKLRTJZKSBEPXPDZSQGHKWCDIAOTWBBONJMOUJAQNCLHXCPHVZVOYZTPNYQMFIPXFXQUQGNKFIHRLBQQQIZHGNHJLMSYJIVUQPZVCKJJNEVTAWMAZNSPERYWZCWTXYRLJDLLCIEMYRUBDUUEBTCSINDMFCZOARSVGKXEXWVVLFTTRAEUXSPHFPHAJKATUEYMLKVHNBDAWCCDBWYUOWDOMDUVRYFXWESKORXO");

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
    msg.setTimeStamp(0.009364888279950079);
    msg.setSource(20750U);
    msg.setSourceEntity(89U);
    msg.setDestination(36817U);
    msg.setDestinationEntity(143U);
    msg.op = 60U;
    msg.time_remain = 0.9466197716776272;
    msg.sched_time = 0.96297255985797;

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
    msg.setTimeStamp(0.028433042484603877);
    msg.setSource(54072U);
    msg.setSourceEntity(61U);
    msg.setDestination(39533U);
    msg.setDestinationEntity(39U);
    msg.op = 202U;
    msg.time_remain = 0.5557605548984009;
    msg.sched_time = 0.41491420789506417;

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
    msg.setTimeStamp(0.32436594757013104);
    msg.setSource(15443U);
    msg.setSourceEntity(219U);
    msg.setDestination(14104U);
    msg.setDestinationEntity(13U);
    msg.op = 213U;
    msg.time_remain = 0.8290827091750711;
    msg.sched_time = 0.821161264068599;

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
    msg.setTimeStamp(0.056056625431472606);
    msg.setSource(47412U);
    msg.setSourceEntity(239U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(20U);
    msg.name.assign("EKCTSAQUTIUCPTSVNZYJBQBNIRGWTJSSUXQEFMHLDIYETMVMPYYYRNCGRABQJGMLWJAKSHPSLB");
    msg.op = 122U;
    msg.sched_time = 0.6159041099290766;

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
    msg.setTimeStamp(0.9898643030763039);
    msg.setSource(32829U);
    msg.setSourceEntity(194U);
    msg.setDestination(54331U);
    msg.setDestinationEntity(101U);
    msg.name.assign("WRKHJDFNJQHXLCEQUIKUBLIEAHCMMHFTXVKHQRIQLZUORXMJXNUIKGRZSAGWWVYHDVEXMTMFQYSNLAQOWUPBLEOQMMTINLTMZDGERGCJPOKJEGUPCPBNZKLVIVLFHHVWZHGGJCFBTTBQATQPYYZHQDACBRNYRTSBSZZJAVSUGISFOIPCJKKAYNXKJFFRUSDIADVBN");
    msg.op = 112U;
    msg.sched_time = 0.10469239471915437;

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
    msg.setTimeStamp(0.634682904394025);
    msg.setSource(23976U);
    msg.setSourceEntity(124U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(45U);
    msg.name.assign("MNECMVVDLSJVYBTQORVEQEHTOKROXDLTNYTDDAVXIGXYTEWIJZMIXNFQTQQLRSWGSNUSQVGXAMOAKCSKSGJAPVMJOGWRTFZADEO");
    msg.op = 180U;
    msg.sched_time = 0.4706521689174187;

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
    msg.setTimeStamp(0.12372488002850135);
    msg.setSource(5140U);
    msg.setSourceEntity(175U);
    msg.setDestination(13171U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.9252705788578904);
    msg.setSource(55963U);
    msg.setSourceEntity(95U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.6639419344304384);
    msg.setSource(804U);
    msg.setSourceEntity(213U);
    msg.setDestination(56170U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.7934241528545238);
    msg.setSource(56338U);
    msg.setSourceEntity(135U);
    msg.setDestination(22270U);
    msg.setDestinationEntity(176U);
    msg.name.assign("FPJRZYFVTCQZGUZYMKGFKWXTDLUYOSOXLVOPJIUVWXCPMCJNUXZWSCEXKHRABHEGDCVTRTFDSAKYWKREWOQJNZSLZIHBVSZWEWFPMBDQPTRUXJLNSANOIPUHCECHBDGCBEPYGKDNGNHTVXODBVOVXRQBYUGSKSUJUDNCKUMLJNGTHDMIDFAXWRYBFLRPXPJQA");
    msg.state = 169U;

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
    msg.setTimeStamp(0.6128042138786572);
    msg.setSource(26070U);
    msg.setSourceEntity(1U);
    msg.setDestination(19095U);
    msg.setDestinationEntity(93U);
    msg.name.assign("MUQXHNOFUTAXMKQIJLLKSOCKDSKZNHLSQVOXYVMTTBGSUZKDYTZYSAVHKNAMWEYKODZENNODVFWYREJJABPCQ");
    msg.state = 83U;

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
    msg.setTimeStamp(0.45907097064207714);
    msg.setSource(18763U);
    msg.setSourceEntity(29U);
    msg.setDestination(38982U);
    msg.setDestinationEntity(123U);
    msg.name.assign("REVHKFLUTVDEEORFJNPFCAEEDXXFUZWCKAYRMENCFFPNXFGGPTZSSHTEKFVZVBUUBXUBXMDCOXGDIYYQSQIDZHLLDWOBRMBINMSUDWXYOJLWBGASROWMKXRZCIHZMDQRNVIJQNPITLBBFRJNHUASPJYHTMSAJTGQTZPWOLYSWIYJKQVVAL");
    msg.state = 209U;

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
    msg.setTimeStamp(0.027697264212328543);
    msg.setSource(54047U);
    msg.setSourceEntity(72U);
    msg.setDestination(52676U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NKBAFGCXAZLAEYHOATDSLZEFBOGGQSHDIZTOZIVMAEPUHXUICFKHNAAFJXROKRRVKJKDYYJDXQWQVENZGPGRUMPBNMBUEXHUSNZLU");
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
    msg.setTimeStamp(0.20283400700593535);
    msg.setSource(1700U);
    msg.setSourceEntity(227U);
    msg.setDestination(14141U);
    msg.setDestinationEntity(179U);
    msg.name.assign("GQBQPTONUWKXCFQSCKWWROZPRXVLESHDBEXEVDIAQVDASYOJIFZIJKTTRASHVWKVZUUQFMMDVIJHJUSTYRMHYADWQWNAJZELPPKQNQNGGEZPCUCPJLMIMARBFEOTFYOOWOBZGVVPCTJODLLVMCSTIVYRXJHEXLFCCFAIADTKZLMBM");
    msg.value = 17U;

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
    msg.setTimeStamp(0.12085066960130564);
    msg.setSource(20061U);
    msg.setSourceEntity(23U);
    msg.setDestination(38188U);
    msg.setDestinationEntity(33U);
    msg.name.assign("AODQEWXNKLQXHBGMRKDQZHCRBGLLPFNWRGCMSXJDBLVPMCVNWINBBZAODGZXMTWKTHUO");
    msg.value = 24U;

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
    msg.setTimeStamp(0.6460975345885227);
    msg.setSource(52942U);
    msg.setSourceEntity(164U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(90U);
    msg.name.assign("TSWJJSEPUEHCFZWDBVDAUORIQNAGKPVEMEPNAGJLDMZPVYPOWWEZGRIPLLSDHYFASGWZUYNNNJXHBVOKRWJWCTWM");

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
    msg.setTimeStamp(0.5087425050233101);
    msg.setSource(42992U);
    msg.setSourceEntity(86U);
    msg.setDestination(47647U);
    msg.setDestinationEntity(34U);
    msg.name.assign("VXQNQMSYBTSUHSXTRKUXRDIEGQGJNMIFIMOFBENRGQBSROICSJAZTRLTJAXGBOPKBMDGVPJI");

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
    msg.setTimeStamp(0.2317929864496312);
    msg.setSource(16617U);
    msg.setSourceEntity(7U);
    msg.setDestination(29683U);
    msg.setDestinationEntity(135U);
    msg.name.assign("JDRIZGQEBPPKLFKLDQGUBDXARPCARMXUYVFEUOFMTMOWSWBFHQLWVZMQAMMNTKADJCEJWMTUHKLPLZPBOQRNKLTJYXYYOYOQDHRTCBTUCQIJFZZEESRWGGGZEPXZBWKOSCXHOOTXPSZAYQUGNQIHVMBRJEKWLKFNGHFJACABIHSNKOLWJHELQGBDSPTKAYYVDVNPYCAIGVWCFISVMRNYIVVBS");

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
    msg.setTimeStamp(0.5190364245693565);
    msg.setSource(29718U);
    msg.setSourceEntity(179U);
    msg.setDestination(39930U);
    msg.setDestinationEntity(34U);
    msg.name.assign("LNVFSDLWQSLZPDUOMVQJXGVJISHVZSUFCYZEZPDMIFMFNYISXXREBTSROKFKIIZDSJTMXCLFDJRDKRSLUUEYAYL");
    msg.value = 35U;

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
    msg.setTimeStamp(0.6341173743021604);
    msg.setSource(51709U);
    msg.setSourceEntity(48U);
    msg.setDestination(843U);
    msg.setDestinationEntity(66U);
    msg.name.assign("ABNHPGDNWQZ");
    msg.value = 148U;

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
    msg.setTimeStamp(0.628818366366963);
    msg.setSource(2802U);
    msg.setSourceEntity(7U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(92U);
    msg.name.assign("OALONZSQAXMOLTMQMAZLCUYEEVVSZHCJBVSTJUBMROUUPEFYBGIBXWNEAJVIGYAQGCDWCXIMKORWYPJRZBNJMYHIRAKDZOAU");
    msg.value = 166U;

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
    msg.setTimeStamp(0.3304908074852133);
    msg.setSource(40499U);
    msg.setSourceEntity(75U);
    msg.setDestination(12498U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.08573136800037295;
    msg.lon = 0.8463379343040855;
    msg.height = 0.14066463696225662;
    msg.x = 0.851917272876961;
    msg.y = 0.831709446778981;
    msg.z = 0.2531741882223363;
    msg.phi = 0.576761641243786;
    msg.theta = 0.2284997509477441;
    msg.psi = 0.8731328511250143;
    msg.u = 0.1850922815733418;
    msg.v = 0.532313920056627;
    msg.w = 0.14911141212823276;
    msg.vx = 0.4853662799574384;
    msg.vy = 0.6836710704101437;
    msg.vz = 0.8019520094806791;
    msg.p = 0.10807687359337548;
    msg.q = 0.9463420851273807;
    msg.r = 0.95451125858926;
    msg.depth = 0.3367669815728639;
    msg.alt = 0.04438095474391246;

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
    msg.setTimeStamp(0.4376751716979932);
    msg.setSource(30375U);
    msg.setSourceEntity(26U);
    msg.setDestination(55463U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.7170511485928484;
    msg.lon = 0.4936668899152201;
    msg.height = 0.42893393444911254;
    msg.x = 0.3223599943529374;
    msg.y = 0.6982560700783598;
    msg.z = 0.8665086074783825;
    msg.phi = 0.12744525473285917;
    msg.theta = 0.9825883290921359;
    msg.psi = 0.8892618920831803;
    msg.u = 0.9803512103887431;
    msg.v = 0.22005831669124398;
    msg.w = 0.94452707568089;
    msg.vx = 0.44820801646304576;
    msg.vy = 0.45056838041927283;
    msg.vz = 0.4681228670138339;
    msg.p = 0.5297419622984638;
    msg.q = 0.7041782037664709;
    msg.r = 0.8717427420992677;
    msg.depth = 0.6425654473280985;
    msg.alt = 0.8957058590355664;

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
    msg.setTimeStamp(0.6669179879002227);
    msg.setSource(6492U);
    msg.setSourceEntity(181U);
    msg.setDestination(21764U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.9233669904439914;
    msg.lon = 0.10789238752238084;
    msg.height = 0.4798664790816908;
    msg.x = 0.66682941005582;
    msg.y = 0.16681230587493223;
    msg.z = 0.354491938308541;
    msg.phi = 0.557898026102525;
    msg.theta = 0.09338302011972477;
    msg.psi = 0.30503596487674534;
    msg.u = 0.6711287799194757;
    msg.v = 0.4740926950578419;
    msg.w = 0.07054393754891297;
    msg.vx = 0.6313384600583541;
    msg.vy = 0.11696356308500366;
    msg.vz = 0.32759969118074184;
    msg.p = 0.25205261389676614;
    msg.q = 0.5156833801142774;
    msg.r = 0.612010279273632;
    msg.depth = 0.5961897337379869;
    msg.alt = 0.19484994035909553;

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
    msg.setTimeStamp(0.814388363127971);
    msg.setSource(25154U);
    msg.setSourceEntity(202U);
    msg.setDestination(2797U);
    msg.setDestinationEntity(204U);
    msg.x = 0.4261760449432118;
    msg.y = 0.8023801899131618;
    msg.z = 0.31292118516696554;

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
    msg.setTimeStamp(0.6788113534362691);
    msg.setSource(26642U);
    msg.setSourceEntity(235U);
    msg.setDestination(32848U);
    msg.setDestinationEntity(49U);
    msg.x = 0.2025689888620733;
    msg.y = 0.2899169600748358;
    msg.z = 0.8957537508158648;

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
    msg.setTimeStamp(0.9008435863584767);
    msg.setSource(65111U);
    msg.setSourceEntity(196U);
    msg.setDestination(18713U);
    msg.setDestinationEntity(98U);
    msg.x = 0.33710629760288735;
    msg.y = 0.09270930749132955;
    msg.z = 0.21339605920945637;

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
    msg.setTimeStamp(0.2057652341914894);
    msg.setSource(48861U);
    msg.setSourceEntity(34U);
    msg.setDestination(59283U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6099820031764555;

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
    msg.setTimeStamp(0.9601781115656937);
    msg.setSource(28869U);
    msg.setSourceEntity(140U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(61U);
    msg.value = 0.8229047707574448;

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
    msg.setTimeStamp(0.5011214058676408);
    msg.setSource(51987U);
    msg.setSourceEntity(78U);
    msg.setDestination(42771U);
    msg.setDestinationEntity(55U);
    msg.value = 0.6554400465599648;

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
    msg.setTimeStamp(0.01628211962030468);
    msg.setSource(931U);
    msg.setSourceEntity(247U);
    msg.setDestination(38428U);
    msg.setDestinationEntity(213U);
    msg.value = 0.3794450658833578;

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
    msg.setTimeStamp(0.734020274582554);
    msg.setSource(44566U);
    msg.setSourceEntity(218U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(159U);
    msg.value = 0.18338937279374845;

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
    msg.setTimeStamp(0.1246216460532491);
    msg.setSource(24984U);
    msg.setSourceEntity(235U);
    msg.setDestination(36618U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7863600870228694;

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
    msg.setTimeStamp(0.22281232192679234);
    msg.setSource(57035U);
    msg.setSourceEntity(76U);
    msg.setDestination(33994U);
    msg.setDestinationEntity(78U);
    msg.x = 0.5265992115800585;
    msg.y = 0.22152948939000883;
    msg.z = 0.12098402171285938;
    msg.phi = 0.02949805893894264;
    msg.theta = 0.022778405379100142;
    msg.psi = 0.51807598552604;
    msg.p = 0.9063781457447132;
    msg.q = 0.8175606876762733;
    msg.r = 0.8450624089424756;
    msg.u = 0.9596635680928864;
    msg.v = 0.5949607468879248;
    msg.w = 0.7379868011033764;
    msg.bias_psi = 0.9922836015939794;
    msg.bias_r = 0.48934148710077463;

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
    msg.setTimeStamp(0.42394951333421205);
    msg.setSource(55983U);
    msg.setSourceEntity(206U);
    msg.setDestination(15513U);
    msg.setDestinationEntity(186U);
    msg.x = 0.5926215116867115;
    msg.y = 0.5815630077772231;
    msg.z = 0.926488761249456;
    msg.phi = 0.5449317073193106;
    msg.theta = 0.49178359481982514;
    msg.psi = 0.537825315679453;
    msg.p = 0.8761489163190735;
    msg.q = 0.44991979943025706;
    msg.r = 0.38124506585290274;
    msg.u = 0.4049633780055517;
    msg.v = 0.12588427958645054;
    msg.w = 0.32118686560882037;
    msg.bias_psi = 0.421303997288236;
    msg.bias_r = 0.73410835306035;

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
    msg.setTimeStamp(0.40470381355760054);
    msg.setSource(3986U);
    msg.setSourceEntity(171U);
    msg.setDestination(53113U);
    msg.setDestinationEntity(209U);
    msg.x = 0.26330047710697013;
    msg.y = 0.27898829952940973;
    msg.z = 0.28767161940122843;
    msg.phi = 0.5914668673758119;
    msg.theta = 0.7350801577478849;
    msg.psi = 0.7582598300178532;
    msg.p = 0.8320623593494234;
    msg.q = 0.5933820096973138;
    msg.r = 0.5795431299485586;
    msg.u = 0.4954808686105031;
    msg.v = 0.3095633444143929;
    msg.w = 0.4615186696487267;
    msg.bias_psi = 0.103017521021037;
    msg.bias_r = 0.07473946672199827;

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
    msg.setTimeStamp(0.18091787917811508);
    msg.setSource(51868U);
    msg.setSourceEntity(58U);
    msg.setDestination(8194U);
    msg.setDestinationEntity(251U);
    msg.bias_psi = 0.628679456723015;
    msg.bias_r = 0.7071598400692098;
    msg.cog = 0.20909579746096696;
    msg.cyaw = 0.537918566393766;
    msg.lbl_rej_level = 0.5714115743706306;
    msg.gps_rej_level = 0.3874147440909601;
    msg.custom_x = 0.8925893234231936;
    msg.custom_y = 0.0024698509018283854;
    msg.custom_z = 0.35134166235416364;

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
    msg.setTimeStamp(0.39593520062823684);
    msg.setSource(51458U);
    msg.setSourceEntity(183U);
    msg.setDestination(6300U);
    msg.setDestinationEntity(197U);
    msg.bias_psi = 0.6683618120703981;
    msg.bias_r = 0.8997788289479257;
    msg.cog = 0.6915697181494199;
    msg.cyaw = 0.25736121341968;
    msg.lbl_rej_level = 0.14118334780918274;
    msg.gps_rej_level = 0.35803566559883016;
    msg.custom_x = 0.4250407006687217;
    msg.custom_y = 0.5092244679656944;
    msg.custom_z = 0.699637180080546;

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
    msg.setTimeStamp(0.5622328990661717);
    msg.setSource(36846U);
    msg.setSourceEntity(49U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(243U);
    msg.bias_psi = 0.39839190925174717;
    msg.bias_r = 0.8400845638978606;
    msg.cog = 0.5624729843376965;
    msg.cyaw = 0.9631569360362762;
    msg.lbl_rej_level = 0.36208451606736836;
    msg.gps_rej_level = 0.44562409226147526;
    msg.custom_x = 0.5888945974687056;
    msg.custom_y = 0.30446244422562685;
    msg.custom_z = 0.8919515146089073;

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
    msg.setTimeStamp(0.71032918280288);
    msg.setSource(61358U);
    msg.setSourceEntity(205U);
    msg.setDestination(11402U);
    msg.setDestinationEntity(9U);
    msg.utc_time = 0.9045951420853569;
    msg.reason = 201U;

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
    msg.setTimeStamp(0.8541544151435576);
    msg.setSource(20365U);
    msg.setSourceEntity(186U);
    msg.setDestination(2559U);
    msg.setDestinationEntity(12U);
    msg.utc_time = 0.6096350992959882;
    msg.reason = 227U;

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
    msg.setTimeStamp(0.19310812966292756);
    msg.setSource(49270U);
    msg.setSourceEntity(23U);
    msg.setDestination(27655U);
    msg.setDestinationEntity(236U);
    msg.utc_time = 0.16077714084505557;
    msg.reason = 51U;

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
    msg.setTimeStamp(0.2949907234717849);
    msg.setSource(18135U);
    msg.setSourceEntity(112U);
    msg.setDestination(11462U);
    msg.setDestinationEntity(56U);
    msg.id = 244U;
    msg.range = 0.36802989585646617;
    msg.acceptance = 130U;

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
    msg.setTimeStamp(0.8677016490612264);
    msg.setSource(37387U);
    msg.setSourceEntity(37U);
    msg.setDestination(1730U);
    msg.setDestinationEntity(25U);
    msg.id = 76U;
    msg.range = 0.11309234625073572;
    msg.acceptance = 153U;

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
    msg.setTimeStamp(0.4386361169865075);
    msg.setSource(10001U);
    msg.setSourceEntity(152U);
    msg.setDestination(12005U);
    msg.setDestinationEntity(51U);
    msg.id = 97U;
    msg.range = 0.8425067796925194;
    msg.acceptance = 175U;

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
    msg.setTimeStamp(0.8152006459499311);
    msg.setSource(53669U);
    msg.setSourceEntity(221U);
    msg.setDestination(12171U);
    msg.setDestinationEntity(118U);
    msg.type = 74U;
    msg.reason = 125U;
    msg.value = 0.9762469192291964;
    msg.timestep = 0.9830545004354282;

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
    msg.setTimeStamp(0.033772229800745235);
    msg.setSource(56039U);
    msg.setSourceEntity(75U);
    msg.setDestination(25826U);
    msg.setDestinationEntity(57U);
    msg.type = 65U;
    msg.reason = 144U;
    msg.value = 0.7457291602227143;
    msg.timestep = 0.8558366570020918;

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
    msg.setTimeStamp(0.9353021195274493);
    msg.setSource(29252U);
    msg.setSourceEntity(209U);
    msg.setDestination(18079U);
    msg.setDestinationEntity(128U);
    msg.type = 28U;
    msg.reason = 126U;
    msg.value = 0.5712513888836374;
    msg.timestep = 0.13363426433954484;

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
    msg.setTimeStamp(0.46648752074468125);
    msg.setSource(44700U);
    msg.setSourceEntity(196U);
    msg.setDestination(63804U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.22122189381167368);
    msg.setSource(8031U);
    msg.setSourceEntity(85U);
    msg.setDestination(47145U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.5800532803798483);
    msg.setSource(21279U);
    msg.setSourceEntity(98U);
    msg.setDestination(55382U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.4197927006869828);
    msg.setSource(42834U);
    msg.setSourceEntity(72U);
    msg.setDestination(40556U);
    msg.setDestinationEntity(175U);
    msg.beacon.assign("GDNJAULJXPHVDIWULXGGAZSGKQIFSEHUDRUFDEMOYCGOBBHPWFCAEFJCQQDBKWBHGQESRBIBNEVWICKPNPLEPYSLMIMYWLDC");
    msg.x = 0.21066838054501658;
    msg.y = 0.8148162801148442;
    msg.depth = 0.18140147027871367;
    msg.var_x = 0.7798399556618663;
    msg.var_y = 0.20400054343933005;

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
    msg.setTimeStamp(0.811420243218281);
    msg.setSource(43222U);
    msg.setSourceEntity(80U);
    msg.setDestination(40292U);
    msg.setDestinationEntity(115U);
    msg.beacon.assign("UVDVBQADGUCNMKFOMKWDSIJYWGFIRZSHBCWPVNEBLWFRTOKHXVEKHCUGAHYUKFEDAZLGYJIDOFROEOLGQDCHOMCVXHVAJLCVTYJBXXASWETHYLBPRUMSLZNNCNMYSEIUOIMCHSFZDKWSTBGQPJENUPQGKROMLBYXBWZASSXTOPONNFRRKDDGLJJHQ");
    msg.x = 0.5476550188282617;
    msg.y = 0.3818873442625953;
    msg.depth = 0.9214972099964374;
    msg.var_x = 0.6900551737030516;
    msg.var_y = 0.5571664516779276;

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
    msg.setTimeStamp(0.9654678507562574);
    msg.setSource(36701U);
    msg.setSourceEntity(112U);
    msg.setDestination(34450U);
    msg.setDestinationEntity(201U);
    msg.beacon.assign("XYCUDLRNTQFJYLTMMAWRBPASRECSPCRLTPFIHYVSYXDWUMHDAFAHDSJIDXIDECASLCMECGALQMVQBVEMCLWZDMKMSXIQMYQOUTKJZWGFPOKUSXKDUPKCMNWBKTLVGOBVFXEGGNJAQGJBRGZUVQHRKOVULDBWXGTOSJOKLWABWNDZWRHPKIFUNWNSPPIBUHFHEQNTPHFYCGBVCIQIEIYZFHOXJARFTU");
    msg.x = 0.7538875457137322;
    msg.y = 0.43997682274872996;
    msg.depth = 0.0678925632464038;
    msg.var_x = 0.46195506523250407;
    msg.var_y = 0.23423510872104192;

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
    msg.setTimeStamp(0.5928785083035759);
    msg.setSource(54804U);
    msg.setSourceEntity(22U);
    msg.setDestination(48974U);
    msg.setDestinationEntity(114U);
    msg.state = 241U;

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
    msg.setTimeStamp(0.9778570248299281);
    msg.setSource(17385U);
    msg.setSourceEntity(180U);
    msg.setDestination(63194U);
    msg.setDestinationEntity(86U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.7054203085491988);
    msg.setSource(19309U);
    msg.setSourceEntity(7U);
    msg.setDestination(41323U);
    msg.setDestinationEntity(85U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.04436235908361641);
    msg.setSource(45658U);
    msg.setSourceEntity(30U);
    msg.setDestination(16421U);
    msg.setDestinationEntity(185U);
    msg.value = 0.16520388360705818;

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
    msg.setTimeStamp(0.2262557678915138);
    msg.setSource(46975U);
    msg.setSourceEntity(37U);
    msg.setDestination(40903U);
    msg.setDestinationEntity(0U);
    msg.value = 0.40331546270995067;

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
    msg.setTimeStamp(0.4843199276058222);
    msg.setSource(62936U);
    msg.setSourceEntity(15U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(244U);
    msg.value = 0.24864923378680126;

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
    msg.setTimeStamp(0.030744547611154305);
    msg.setSource(60539U);
    msg.setSourceEntity(226U);
    msg.setDestination(9335U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7565883912820384;
    msg.z_units = 229U;

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
    msg.setTimeStamp(0.2006660680352762);
    msg.setSource(10433U);
    msg.setSourceEntity(68U);
    msg.setDestination(61260U);
    msg.setDestinationEntity(17U);
    msg.value = 0.23918686895459684;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.71055972362612);
    msg.setSource(42161U);
    msg.setSourceEntity(150U);
    msg.setDestination(37425U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5801875675544584;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.39365655229012875);
    msg.setSource(26105U);
    msg.setSourceEntity(143U);
    msg.setDestination(1434U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8998647536191009;
    msg.speed_units = 114U;

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
    msg.setTimeStamp(0.24616748031020885);
    msg.setSource(50575U);
    msg.setSourceEntity(72U);
    msg.setDestination(4613U);
    msg.setDestinationEntity(94U);
    msg.value = 0.1311517781180398;
    msg.speed_units = 137U;

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
    msg.setTimeStamp(0.3840335369515119);
    msg.setSource(58934U);
    msg.setSourceEntity(53U);
    msg.setDestination(47232U);
    msg.setDestinationEntity(165U);
    msg.value = 0.20410172838581453;
    msg.speed_units = 38U;

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
    msg.setTimeStamp(0.42401536213129754);
    msg.setSource(17390U);
    msg.setSourceEntity(177U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(153U);
    msg.value = 0.42515787899511337;

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
    msg.setTimeStamp(0.5314164714135332);
    msg.setSource(6235U);
    msg.setSourceEntity(249U);
    msg.setDestination(31680U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6816585533267604;

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
    msg.setTimeStamp(0.6633305778640118);
    msg.setSource(17503U);
    msg.setSourceEntity(67U);
    msg.setDestination(5386U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7524166988463126;

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
    msg.setTimeStamp(0.31788285863298327);
    msg.setSource(6887U);
    msg.setSourceEntity(39U);
    msg.setDestination(46761U);
    msg.setDestinationEntity(101U);
    msg.value = 0.11111228832718811;

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
    msg.setTimeStamp(0.6256862310928006);
    msg.setSource(32191U);
    msg.setSourceEntity(170U);
    msg.setDestination(34844U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4819581257570872;

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
    msg.setTimeStamp(0.91089827755638);
    msg.setSource(61240U);
    msg.setSourceEntity(141U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(170U);
    msg.value = 0.17813697773404746;

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
    msg.setTimeStamp(0.32402736809749155);
    msg.setSource(50249U);
    msg.setSourceEntity(201U);
    msg.setDestination(34469U);
    msg.setDestinationEntity(124U);
    msg.value = 0.9917165193758297;

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
    msg.setTimeStamp(0.46793443044549643);
    msg.setSource(12639U);
    msg.setSourceEntity(16U);
    msg.setDestination(45318U);
    msg.setDestinationEntity(89U);
    msg.value = 0.7168861990448838;

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
    msg.setTimeStamp(0.4804739249655583);
    msg.setSource(42424U);
    msg.setSourceEntity(145U);
    msg.setDestination(29501U);
    msg.setDestinationEntity(224U);
    msg.value = 0.006023597919091683;

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
    msg.setTimeStamp(0.6972440288028514);
    msg.setSource(20002U);
    msg.setSourceEntity(73U);
    msg.setDestination(2836U);
    msg.setDestinationEntity(131U);
    msg.start_lat = 0.18930900247784754;
    msg.start_lon = 0.7211760111906205;
    msg.start_z = 0.8607112185515858;
    msg.start_z_units = 168U;
    msg.end_lat = 0.2452132389681917;
    msg.end_lon = 0.790678348518981;
    msg.end_z = 0.9004592995806716;
    msg.end_z_units = 245U;
    msg.speed = 0.04032869956880125;
    msg.speed_units = 195U;
    msg.lradius = 0.8812830687033772;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.36262552641979706);
    msg.setSource(16777U);
    msg.setSourceEntity(98U);
    msg.setDestination(47267U);
    msg.setDestinationEntity(14U);
    msg.start_lat = 0.6121086882796125;
    msg.start_lon = 0.4361990327800426;
    msg.start_z = 0.9805905555477566;
    msg.start_z_units = 8U;
    msg.end_lat = 0.660874160313129;
    msg.end_lon = 0.09177810511594131;
    msg.end_z = 0.9686649590457773;
    msg.end_z_units = 90U;
    msg.speed = 0.9226279673493698;
    msg.speed_units = 204U;
    msg.lradius = 0.13533877561831176;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.4890508155682164);
    msg.setSource(59881U);
    msg.setSourceEntity(46U);
    msg.setDestination(22395U);
    msg.setDestinationEntity(43U);
    msg.start_lat = 0.7346234673824622;
    msg.start_lon = 0.3775672346096762;
    msg.start_z = 0.03746681903312121;
    msg.start_z_units = 23U;
    msg.end_lat = 0.23239428103654447;
    msg.end_lon = 0.5975792975762287;
    msg.end_z = 0.5808047147749034;
    msg.end_z_units = 135U;
    msg.speed = 0.01974429328840488;
    msg.speed_units = 60U;
    msg.lradius = 0.9674872943791877;
    msg.flags = 162U;

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
    msg.setTimeStamp(0.6422944708906647);
    msg.setSource(13885U);
    msg.setSourceEntity(193U);
    msg.setDestination(50543U);
    msg.setDestinationEntity(169U);
    msg.x = 0.26525430516326487;
    msg.y = 0.34876385061503457;
    msg.z = 0.478653974180854;
    msg.k = 0.259675923879935;
    msg.m = 0.4017891103554051;
    msg.n = 0.3604254514232589;
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
    msg.setTimeStamp(0.7696438194466299);
    msg.setSource(21608U);
    msg.setSourceEntity(130U);
    msg.setDestination(18403U);
    msg.setDestinationEntity(79U);
    msg.x = 0.34445282625101226;
    msg.y = 0.9858805408962398;
    msg.z = 0.7376807479594526;
    msg.k = 0.5098999735466695;
    msg.m = 0.1353246802791922;
    msg.n = 0.9985995413106699;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.689795068005694);
    msg.setSource(23416U);
    msg.setSourceEntity(9U);
    msg.setDestination(61710U);
    msg.setDestinationEntity(221U);
    msg.x = 0.9930843967275659;
    msg.y = 0.4197308477679733;
    msg.z = 0.7825820809602044;
    msg.k = 0.5445385981638082;
    msg.m = 0.3451285667639824;
    msg.n = 0.1941404061656662;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.14322450336180692);
    msg.setSource(52285U);
    msg.setSourceEntity(200U);
    msg.setDestination(48979U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7967901511617906;

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
    msg.setTimeStamp(0.20944546916233053);
    msg.setSource(1735U);
    msg.setSourceEntity(130U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(176U);
    msg.value = 0.7642857492953161;

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
    msg.setTimeStamp(0.6743171728743255);
    msg.setSource(33995U);
    msg.setSourceEntity(240U);
    msg.setDestination(19451U);
    msg.setDestinationEntity(192U);
    msg.value = 0.18134036714688706;

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
    msg.setTimeStamp(0.7165446951626391);
    msg.setSource(60162U);
    msg.setSourceEntity(54U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(106U);
    msg.u = 0.7678922972415815;
    msg.v = 0.056953623698509426;
    msg.w = 0.8078540409481864;
    msg.p = 0.1507443215824702;
    msg.q = 0.645562411127556;
    msg.r = 0.10818949737760009;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.8263472641139694);
    msg.setSource(15613U);
    msg.setSourceEntity(180U);
    msg.setDestination(25067U);
    msg.setDestinationEntity(254U);
    msg.u = 0.46547182620247884;
    msg.v = 0.7697041294005711;
    msg.w = 0.8553815345354316;
    msg.p = 0.5448467822000357;
    msg.q = 0.41312383137671427;
    msg.r = 0.577104773503693;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.17829651196473706);
    msg.setSource(16755U);
    msg.setSourceEntity(165U);
    msg.setDestination(30703U);
    msg.setDestinationEntity(182U);
    msg.u = 0.12039117932425136;
    msg.v = 0.8905516045530613;
    msg.w = 0.9783134556899852;
    msg.p = 0.4488290644092433;
    msg.q = 0.7493167074221464;
    msg.r = 0.6341424464653548;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.2496965496937591);
    msg.setSource(48297U);
    msg.setSourceEntity(55U);
    msg.setDestination(16073U);
    msg.setDestinationEntity(12U);
    msg.start_lat = 0.24336936554318234;
    msg.start_lon = 0.1135241825993678;
    msg.start_z = 0.6771833488601418;
    msg.start_z_units = 58U;
    msg.end_lat = 0.3373253871698433;
    msg.end_lon = 0.3232625347720175;
    msg.end_z = 0.4913919694091905;
    msg.end_z_units = 19U;
    msg.lradius = 0.4262174553789483;
    msg.flags = 249U;
    msg.x = 0.5261199059968368;
    msg.y = 0.7155153223103132;
    msg.z = 0.14309232678767037;
    msg.vx = 0.9218244161939909;
    msg.vy = 0.4646679711885702;
    msg.vz = 0.2768545877659586;
    msg.course_error = 0.8905452786101573;
    msg.eta = 45512U;

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
    msg.setTimeStamp(0.21646699850867646);
    msg.setSource(63309U);
    msg.setSourceEntity(124U);
    msg.setDestination(2253U);
    msg.setDestinationEntity(7U);
    msg.start_lat = 0.29061906151087735;
    msg.start_lon = 0.22537748588544226;
    msg.start_z = 0.7909544019752154;
    msg.start_z_units = 188U;
    msg.end_lat = 0.7709998853792043;
    msg.end_lon = 0.16773914274722668;
    msg.end_z = 0.4436981962575086;
    msg.end_z_units = 126U;
    msg.lradius = 0.4688613525304596;
    msg.flags = 58U;
    msg.x = 0.6722318130701695;
    msg.y = 0.19899476024740714;
    msg.z = 0.8186728889614646;
    msg.vx = 0.7931381589248636;
    msg.vy = 0.9199322357004901;
    msg.vz = 0.9441818022622028;
    msg.course_error = 0.9549233225532202;
    msg.eta = 24092U;

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
    msg.setTimeStamp(0.0496870930182276);
    msg.setSource(19269U);
    msg.setSourceEntity(143U);
    msg.setDestination(49344U);
    msg.setDestinationEntity(184U);
    msg.start_lat = 0.9343811474616341;
    msg.start_lon = 0.982885899281208;
    msg.start_z = 0.8596744433194734;
    msg.start_z_units = 183U;
    msg.end_lat = 0.29804927646646584;
    msg.end_lon = 0.09524042891863582;
    msg.end_z = 0.8431275402860973;
    msg.end_z_units = 68U;
    msg.lradius = 0.7638607804118271;
    msg.flags = 109U;
    msg.x = 0.23380530893029028;
    msg.y = 0.8124098238489222;
    msg.z = 0.09398089616890737;
    msg.vx = 0.5691311128106193;
    msg.vy = 0.2351885182757827;
    msg.vz = 0.7966000587000724;
    msg.course_error = 0.0961134861279056;
    msg.eta = 51458U;

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
    msg.setTimeStamp(0.5242904386790702);
    msg.setSource(61525U);
    msg.setSourceEntity(63U);
    msg.setDestination(59601U);
    msg.setDestinationEntity(80U);
    msg.k = 0.5020831538757559;
    msg.m = 0.7275995310056375;
    msg.n = 0.7065264793358335;

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
    msg.setTimeStamp(0.9331681131117197);
    msg.setSource(38408U);
    msg.setSourceEntity(182U);
    msg.setDestination(32456U);
    msg.setDestinationEntity(114U);
    msg.k = 0.16153464940320328;
    msg.m = 0.481938150656011;
    msg.n = 0.08094944380338664;

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
    msg.setTimeStamp(0.13683260092503946);
    msg.setSource(5029U);
    msg.setSourceEntity(216U);
    msg.setDestination(58447U);
    msg.setDestinationEntity(158U);
    msg.k = 0.2087008679821991;
    msg.m = 0.45391556775542785;
    msg.n = 0.3705904835064753;

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
    msg.setTimeStamp(0.6428228786752017);
    msg.setSource(62856U);
    msg.setSourceEntity(97U);
    msg.setDestination(6278U);
    msg.setDestinationEntity(211U);
    msg.p = 0.9140248078438924;
    msg.i = 0.14172834835317338;
    msg.d = 0.9336598101520844;
    msg.a = 0.21635861053440908;

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
    msg.setTimeStamp(0.7725668460976095);
    msg.setSource(10692U);
    msg.setSourceEntity(4U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(19U);
    msg.p = 0.5781925712013881;
    msg.i = 0.14694304176088058;
    msg.d = 0.6003197777253954;
    msg.a = 0.23297888195776106;

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
    msg.setTimeStamp(0.5603084268699395);
    msg.setSource(49175U);
    msg.setSourceEntity(71U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(176U);
    msg.p = 0.05048768542463267;
    msg.i = 0.2980243837495543;
    msg.d = 0.3599317061645826;
    msg.a = 0.47997790219934633;

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
    msg.setTimeStamp(0.6578279312453602);
    msg.setSource(36745U);
    msg.setSourceEntity(180U);
    msg.setDestination(10568U);
    msg.setDestinationEntity(152U);
    msg.op = 135U;

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
    msg.setTimeStamp(0.753595086491444);
    msg.setSource(21288U);
    msg.setSourceEntity(231U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(92U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.42028843547649564);
    msg.setSource(38976U);
    msg.setSourceEntity(122U);
    msg.setDestination(2388U);
    msg.setDestinationEntity(111U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.53713676650721);
    msg.setSource(53039U);
    msg.setSourceEntity(6U);
    msg.setDestination(58540U);
    msg.setDestinationEntity(106U);
    msg.timeout = 5737U;
    msg.lat = 0.9140039709214284;
    msg.lon = 0.7048277878584241;
    msg.z = 0.8231790230516786;
    msg.z_units = 203U;
    msg.speed = 0.5278589109959426;
    msg.speed_units = 132U;
    msg.roll = 0.4843916117745848;
    msg.pitch = 0.3545293565440196;
    msg.yaw = 0.5907498538490523;
    msg.custom.assign("HFIIXESHAVFSLSYWSICSGEOQYKAQRKFVSKZXYTNVJEBVENPHVVPRQZXSYCETWJXGNUSRICCRJUTSWAUBIPVFHRJVDYJKTYTTMJDMOWOKZLINKQRGBPCMTQNSQDBZADGLWXJVEDZHLIGOCKFHGPWABGKZZNJBLCLVMFNFCTWZUDUTODGPLLGRUMHJQWOKXUXPXCBNBREAFOZNMZUYDBMKPOIUBQMMPYOYUNYARHLGFLJTCIEEWOPEFQMAWAHQ");

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
    msg.setTimeStamp(0.3385850065054138);
    msg.setSource(22015U);
    msg.setSourceEntity(213U);
    msg.setDestination(11019U);
    msg.setDestinationEntity(83U);
    msg.timeout = 61396U;
    msg.lat = 0.29848524008252164;
    msg.lon = 0.7656658407331547;
    msg.z = 0.12719447783841387;
    msg.z_units = 21U;
    msg.speed = 0.8887019244705464;
    msg.speed_units = 113U;
    msg.roll = 0.639227070622126;
    msg.pitch = 0.8185864782697383;
    msg.yaw = 0.28265297961765823;
    msg.custom.assign("SAVWKXIQDYNANAKOCJDSMJHRAXFMFGXJVBIIEUWNRFFKOULKLOZIFMUWPRYBSILAEKDDPBHZWOYEVLTABQZUFUMESISKJBTVZTPXTTMYJTYSTRHKWRRJPRKNVQCIBDJFHLAKOJGZXJLHGYGHSPEAPVOKZOXYLRQNUHHOWUTGFVDGNDGJCAAXNDLRSWFIXMBSPTCDWGCHREPWHVQEBWCLNXNQCBCXUEGGMYUDPOZBTCFSVQNELZI");

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
    msg.setTimeStamp(0.7552545788174672);
    msg.setSource(43130U);
    msg.setSourceEntity(78U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(32U);
    msg.timeout = 22764U;
    msg.lat = 0.20999011094928477;
    msg.lon = 0.6966045723182777;
    msg.z = 0.8532148684396168;
    msg.z_units = 64U;
    msg.speed = 0.3392654519396625;
    msg.speed_units = 162U;
    msg.roll = 0.4451804866518291;
    msg.pitch = 0.25797394058463363;
    msg.yaw = 0.738165186653374;
    msg.custom.assign("WZMKVSVMPPTTFHXVIZRRRGOPLUHPVRNXLHKUNJQNYSPAWVZDWDVOGZOOSQXNUCGAXAKQPEUXRWZTCTVJIEEFHTVCXHLGKUKIP");

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
    msg.setTimeStamp(0.5796654127542841);
    msg.setSource(12653U);
    msg.setSourceEntity(227U);
    msg.setDestination(59118U);
    msg.setDestinationEntity(210U);
    msg.timeout = 32694U;
    msg.lat = 0.5597507930894581;
    msg.lon = 0.3700203869756652;
    msg.z = 0.5010245742590542;
    msg.z_units = 111U;
    msg.speed = 0.7807257902460772;
    msg.speed_units = 181U;
    msg.duration = 12976U;
    msg.radius = 0.18541283897778216;
    msg.flags = 151U;
    msg.custom.assign("BDXSDRYNWUHBVNIRPXLILRDRFSKQICQPVVPZTJDNPI");

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
    msg.setTimeStamp(0.39383573143953887);
    msg.setSource(47144U);
    msg.setSourceEntity(219U);
    msg.setDestination(25858U);
    msg.setDestinationEntity(221U);
    msg.timeout = 48754U;
    msg.lat = 0.8261413823038565;
    msg.lon = 0.6161880982773745;
    msg.z = 0.7418696214097916;
    msg.z_units = 181U;
    msg.speed = 0.5636101629457544;
    msg.speed_units = 139U;
    msg.duration = 45701U;
    msg.radius = 0.3058527562410075;
    msg.flags = 127U;
    msg.custom.assign("FKVDWPTVXFGZIYVWZKCNTXVLZHKTLKQLGRTXLJACMBPFAKHZENGQSQRAJLZNDDYRSFGYZREAOFNNOHWRUIXEBYXCXAMLCWGKBSNUJAPGTDFKWVOFBIBTORPDSOQYKMEBUEVMIZLDCULYOXLRJNEHCQZUVYEDUVDIXMRCSTPISMYBJNKFN");

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
    msg.setTimeStamp(0.36307883983980427);
    msg.setSource(54737U);
    msg.setSourceEntity(23U);
    msg.setDestination(21301U);
    msg.setDestinationEntity(16U);
    msg.timeout = 19773U;
    msg.lat = 0.07356771930762318;
    msg.lon = 0.22581399051998874;
    msg.z = 0.5096640254187148;
    msg.z_units = 250U;
    msg.speed = 0.9495367221294533;
    msg.speed_units = 95U;
    msg.duration = 18410U;
    msg.radius = 0.22273941832460198;
    msg.flags = 26U;
    msg.custom.assign("JMDBDKLVLVTOQTPVDFLMSOQWWCZFRZMHKJJQQANJUF");

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
    msg.setTimeStamp(0.6749549626828972);
    msg.setSource(30575U);
    msg.setSourceEntity(63U);
    msg.setDestination(44914U);
    msg.setDestinationEntity(98U);
    msg.custom.assign("CXOLATQSKHOELADIWFGERVYUQLTJWJZMCTUTRKEHXTRWVWMZUQMMTUVZZLNEJAOLKFQNBHPSPXGAXJQMFVCPUKESIQPIJCSKWYTUAZEYGNBGZXQSJVCEHDIZWNPMWAPMXOBUIYCQSBPRNDLBXRFHTGWHIXVWOURMLOJGDDNPSAKVOCIDLDZXWBEDZFFKEDIVEUHVSGANBOVFXGSRICDSBYFYTQRUBJJBTNGKFHCKYAPPNCORAK");

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
    msg.setTimeStamp(0.4316359906498496);
    msg.setSource(64414U);
    msg.setSourceEntity(44U);
    msg.setDestination(52885U);
    msg.setDestinationEntity(91U);
    msg.custom.assign("YBYIBEXNYCTUTSHGRSBQTDZIMBASOPNJBEEEHBTKCIJWKHYHKKHWWJYROCGAZTJFCVMMPEF");

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
    msg.setTimeStamp(0.008977485736078927);
    msg.setSource(52461U);
    msg.setSourceEntity(41U);
    msg.setDestination(26191U);
    msg.setDestinationEntity(184U);
    msg.custom.assign("XKBUFYIIIEOEMFNOAHSLJECFTANLXPOJYMJISVLKURPERLTGDDGWODVVUEYVHWVOYQQQVQVUIIWFMJZXWSAGFJAUMRTUM");

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
    msg.setTimeStamp(0.0763642199103266);
    msg.setSource(57651U);
    msg.setSourceEntity(63U);
    msg.setDestination(17071U);
    msg.setDestinationEntity(143U);
    msg.timeout = 53332U;
    msg.lat = 0.019502534485954404;
    msg.lon = 0.9368173103280204;
    msg.z = 0.13102785378812454;
    msg.z_units = 64U;
    msg.duration = 56844U;
    msg.speed = 0.03641514950076419;
    msg.speed_units = 173U;
    msg.type = 17U;
    msg.radius = 0.10907376830341342;
    msg.length = 0.8714231622046288;
    msg.bearing = 0.06660891539706693;
    msg.direction = 133U;
    msg.custom.assign("IPDCCUORSOKETVFEBWQBQLECCKTAQIGRSUPEHPWLADGLJKHHMNKHCSJIQVREIOLXNHYSJZYAOIHFNJSWWFYOUSKFLFIFEZDZNUZSZMQWIMNCSIXXDYVNLDZWWXFMTXOA");

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
    msg.setTimeStamp(0.15599655269802093);
    msg.setSource(33964U);
    msg.setSourceEntity(223U);
    msg.setDestination(5782U);
    msg.setDestinationEntity(93U);
    msg.timeout = 42309U;
    msg.lat = 0.04463832808178603;
    msg.lon = 0.940315771999848;
    msg.z = 0.9009260239227967;
    msg.z_units = 252U;
    msg.duration = 34507U;
    msg.speed = 0.07227686633559516;
    msg.speed_units = 8U;
    msg.type = 248U;
    msg.radius = 0.9077119661892298;
    msg.length = 0.33211035098113584;
    msg.bearing = 0.2971805958087219;
    msg.direction = 154U;
    msg.custom.assign("FDADDNYJSIHYXVJOUNROCAUTYQILRZQYNCFOPJGYWVAEORFSQEMOSXANOESTSLKCUGCLBCUDHQQHKZLQZVJWMDDFIPMQSILPAGWWWRHJHZLTNTODYTSVBHPBHEKVHWJCXLB");

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
    msg.setTimeStamp(0.5821192696587147);
    msg.setSource(2063U);
    msg.setSourceEntity(51U);
    msg.setDestination(917U);
    msg.setDestinationEntity(59U);
    msg.timeout = 20230U;
    msg.lat = 0.44821427771202793;
    msg.lon = 0.46764363548017474;
    msg.z = 0.7663165161671402;
    msg.z_units = 123U;
    msg.duration = 467U;
    msg.speed = 0.9098386421635373;
    msg.speed_units = 229U;
    msg.type = 70U;
    msg.radius = 0.816475885967888;
    msg.length = 0.0422812470844629;
    msg.bearing = 0.8716060827514399;
    msg.direction = 76U;
    msg.custom.assign("LOBGOAMZBRQFQDJKSVSTRDBSTKLHRZMLIFPYFIMQTDUIJAMZLYDJZXEREIULYMOBQKAEHNNYTVXNCLGTUTAHUHBUJIWQVOTQNLZVNWVVLCNWDIEUMCDRSMOZYEPKFGADIGSIPCDOJBJHMOXWXBGJKPI");

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
    msg.setTimeStamp(0.5149069657863292);
    msg.setSource(18976U);
    msg.setSourceEntity(125U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(182U);
    msg.duration = 27130U;
    msg.custom.assign("ANOWKLGTANQPFQBUHCPBHROVGRYHTPRSQWXYIOTFYZKTRVJDOZAZILRJLKOOCTPHWGUVNUWMZVUWQILQMKHKYJYNWEMMFENEZGRUFNFCLDHANDFVBSDHQDPJDKVBBABNJCEVMLUQQBRAJGZPGRSHSYIJSMIYJEZTTXWAGXXLJGDIBUZUPRLSKCDP");

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
    msg.setTimeStamp(0.3145010100336806);
    msg.setSource(4497U);
    msg.setSourceEntity(93U);
    msg.setDestination(24457U);
    msg.setDestinationEntity(61U);
    msg.duration = 54867U;
    msg.custom.assign("SRPEOMXSWHCDXOPMRXHGEKSCUIDZYSDVJBXOMKMDEZHQRWFCTFGMBVQMEZCAPJGYWLOWGPHZTCCRUMVTQWEIMNDLKVIBAUUTSYHEFKDIZNUHQBZXVJFWALRLVUZYGKQOVBNTJDWCJAKTDICOFQOHPEPBARFZILHNTNRXIAWOJVIASKQFAOHYUPBXMYRNGUXLEYBSEJOUVWLN");

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
    msg.setTimeStamp(0.6567348302192313);
    msg.setSource(40010U);
    msg.setSourceEntity(86U);
    msg.setDestination(53007U);
    msg.setDestinationEntity(49U);
    msg.duration = 39201U;
    msg.custom.assign("JPNAHCPNQZGAIFUCJDJVQFSQYPGTBOBUEDXULMFQRNVTUMWIKLOPKKRDYXZERPNCLXHAVEK");

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
    msg.setTimeStamp(0.4462778291178596);
    msg.setSource(28306U);
    msg.setSourceEntity(17U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(113U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.556790356995029;
    msg.control.set(tmp_msg_0);
    msg.duration = 47488U;
    msg.custom.assign("RDLGLYZURBYKWSFITTWPXCVOMZUYCVUZWYZXBQVAHOMHEKWIETH");

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
    msg.setTimeStamp(0.7192902580171219);
    msg.setSource(55127U);
    msg.setSourceEntity(123U);
    msg.setDestination(375U);
    msg.setDestinationEntity(63U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4153160609702353;
    tmp_msg_0.speed_units = 12U;
    msg.control.set(tmp_msg_0);
    msg.duration = 49221U;
    msg.custom.assign("YDQEGBCZMTVUHWJVHOXRPDOUOTVYKRBBSFJZBLRCGJKNABOYHIVGMPEQDHFSDTJQZAMZAINCTOXCJBTJRUPWVTZRTDRMCNYLJTFH");

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
    msg.setTimeStamp(0.8052091795212492);
    msg.setSource(10123U);
    msg.setSourceEntity(140U);
    msg.setDestination(49165U);
    msg.setDestinationEntity(26U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.35087010918461947;
    msg.control.set(tmp_msg_0);
    msg.duration = 33066U;
    msg.custom.assign("AFYHDFZWYPSWGLUYMHQZLRJZLVPDQOLBLBDMMNLDCHAXAJKRANCBEQSWIZGESYBJFTNTJKROVKEQOKKXWWEMUFXQ");

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
    msg.setTimeStamp(0.30038050782508396);
    msg.setSource(26687U);
    msg.setSourceEntity(164U);
    msg.setDestination(47983U);
    msg.setDestinationEntity(170U);
    msg.timeout = 63257U;
    msg.lat = 0.27354868186538184;
    msg.lon = 0.4597140835567265;
    msg.z = 0.9138894558862987;
    msg.z_units = 167U;
    msg.speed = 0.25668936437611156;
    msg.speed_units = 161U;
    msg.bearing = 0.9380958129512744;
    msg.cross_angle = 0.9417100723859307;
    msg.width = 0.4839508899510152;
    msg.length = 0.7125956050402489;
    msg.hstep = 0.41855369950872934;
    msg.coff = 187U;
    msg.alternation = 106U;
    msg.flags = 139U;
    msg.custom.assign("ALKAPOHHWAWRHJZZDYMBPUSKFETKRTCVXM");

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
    msg.setTimeStamp(0.2873697715464846);
    msg.setSource(58656U);
    msg.setSourceEntity(39U);
    msg.setDestination(25948U);
    msg.setDestinationEntity(41U);
    msg.timeout = 36005U;
    msg.lat = 0.2914989967989645;
    msg.lon = 0.9199879075827903;
    msg.z = 0.4435138936611056;
    msg.z_units = 221U;
    msg.speed = 0.7613292483697677;
    msg.speed_units = 50U;
    msg.bearing = 0.8878016338442121;
    msg.cross_angle = 0.7334862431659297;
    msg.width = 0.915935200370151;
    msg.length = 0.18585645998935596;
    msg.hstep = 0.4368485159256955;
    msg.coff = 92U;
    msg.alternation = 219U;
    msg.flags = 131U;
    msg.custom.assign("RYDAAYSBASZOGVSGBNCYAPZIHZGJUKUXRRGADDFILYMBHDUIYWBULVXWIZXPFOTPQWHMCW");

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
    msg.setTimeStamp(0.08415229364207266);
    msg.setSource(9053U);
    msg.setSourceEntity(71U);
    msg.setDestination(33046U);
    msg.setDestinationEntity(0U);
    msg.timeout = 17609U;
    msg.lat = 0.09556670925078536;
    msg.lon = 0.3034008175044316;
    msg.z = 0.48774853056764333;
    msg.z_units = 249U;
    msg.speed = 0.532684057578546;
    msg.speed_units = 232U;
    msg.bearing = 0.21231704383543115;
    msg.cross_angle = 0.6772188642529486;
    msg.width = 0.6781028890090346;
    msg.length = 0.6264184762740113;
    msg.hstep = 0.4053829678389649;
    msg.coff = 227U;
    msg.alternation = 64U;
    msg.flags = 60U;
    msg.custom.assign("YGMQHYMULEQVORIJFMTHKSPHREKWZGWMXHCSDCXVFQSKAODXDFSAGJTWQFYRSKTNRNTCPJPQLHIARLHXWTBEKRGYBPOFLUTUFJVHSDXMMLPZOVOVSMTLDOIAIS");

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
    msg.setTimeStamp(0.2736051147788725);
    msg.setSource(28848U);
    msg.setSourceEntity(161U);
    msg.setDestination(33862U);
    msg.setDestinationEntity(252U);
    msg.timeout = 15813U;
    msg.lat = 0.3642760939650185;
    msg.lon = 0.9700683146105707;
    msg.z = 0.16844130561560966;
    msg.z_units = 177U;
    msg.speed = 0.5412472727297535;
    msg.speed_units = 174U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.45948542568764106;
    tmp_msg_0.y = 0.4110723853993834;
    tmp_msg_0.z = 0.9257346850987345;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HMRFYUUFAOSTIHJNEVWWBPLAIMJOIZCRYKVMFJRXMKBGXAKSNJVBPSGMDWHPGNVJVJKDTQFRXZNLHINFRCWKCLBIWHFCROQGUNZOIYDUGBXXLAKZXDXXBIZQZVJPZQFSLWKECVHWHPOZTMFKJMEETINOUXBNSLOBRQAJEDRDZGYAUCCEICVKQEAGTPAYLYDPFYJYPYMHEESGGUXATVBQCNLZKOOPDDSWRSFQBU");

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
    msg.setTimeStamp(0.6275333518177948);
    msg.setSource(51223U);
    msg.setSourceEntity(5U);
    msg.setDestination(20605U);
    msg.setDestinationEntity(250U);
    msg.timeout = 5860U;
    msg.lat = 0.8870974662902923;
    msg.lon = 0.948733408986934;
    msg.z = 0.8665263870950342;
    msg.z_units = 1U;
    msg.speed = 0.63809697900821;
    msg.speed_units = 246U;
    msg.custom.assign("UGZYWSOCKTAVQPEQXKKLMECELENDMUBGPPWWFNVAQZYRSTRAOTVGSKWIZEXSORVTXNQWKBLJTQIXWHJYJGKPNJMCFHOMBVUSUMHOBMHJIXIARFUCKQGYPMBCFYPJ");

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
    msg.setTimeStamp(0.5692205553692598);
    msg.setSource(28096U);
    msg.setSourceEntity(245U);
    msg.setDestination(9885U);
    msg.setDestinationEntity(95U);
    msg.timeout = 14679U;
    msg.lat = 0.5119472453513061;
    msg.lon = 0.175045785876366;
    msg.z = 0.14694822514752348;
    msg.z_units = 210U;
    msg.speed = 0.7059896065162674;
    msg.speed_units = 174U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2223290978477147;
    tmp_msg_0.y = 0.8642910868825915;
    tmp_msg_0.z = 0.23349988869003357;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XAGXOPYCYVZTDIQRPACPSNHBYSIJPDNMYYOTHTJPTIIEFPFOLDOKAAEMXPEYGMJXMXCRGRFMLWRRGJBUJVIUKTOQUGNJHXRKQNLLQHXVUTASWMBLICNDGFUXAFRSTCVFAEFJVFARSKTZGVHEFNBKIEWDWJUJGKRNWQVMYZMLOBVIHZREIUJDECGVTMKWCUZQBBUSZAPYEDDLZHDLBOYLYNKCQUPGK");

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
    msg.setTimeStamp(0.9547376389196454);
    msg.setSource(38818U);
    msg.setSourceEntity(108U);
    msg.setDestination(50331U);
    msg.setDestinationEntity(126U);
    msg.x = 0.6355592933248949;
    msg.y = 0.7850401355289648;
    msg.z = 0.05134794351412186;

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
    msg.setTimeStamp(0.5396165097120202);
    msg.setSource(55315U);
    msg.setSourceEntity(12U);
    msg.setDestination(47452U);
    msg.setDestinationEntity(154U);
    msg.x = 0.7242246478850404;
    msg.y = 0.8160754344387461;
    msg.z = 0.6692174897788397;

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
    msg.setTimeStamp(0.1871923376764395);
    msg.setSource(3113U);
    msg.setSourceEntity(163U);
    msg.setDestination(12806U);
    msg.setDestinationEntity(108U);
    msg.x = 0.5378822701886615;
    msg.y = 0.8106598388468612;
    msg.z = 0.1550965693552877;

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
    msg.setTimeStamp(0.4752492860461428);
    msg.setSource(56809U);
    msg.setSourceEntity(161U);
    msg.setDestination(56265U);
    msg.setDestinationEntity(222U);
    msg.timeout = 46446U;
    msg.lat = 0.42770094329623054;
    msg.lon = 0.15425952950821087;
    msg.z = 0.8880718635502085;
    msg.z_units = 181U;
    msg.amplitude = 0.21219192761179817;
    msg.pitch = 0.6178734207526453;
    msg.speed = 0.6558969781505057;
    msg.speed_units = 24U;
    msg.custom.assign("BWNMHSFZVBIRHWGSIATDHOETQMKIQAGPVLCWVZRODVGXYECSFDUUXFCCKZYPYCAJOGNYHQTGBPFPPLHBQZTUAPWGYTBEVVXRAOHYNEDEOWIPOQGZQMUEKZCEWXSSKGBZQEUUZJUYNVORRLMFSELBIGAJIYLPJDJKFALTQKXTIWSHMNCBLMNFJWWDHKGBRJUVJRMEAFNRPSXCC");

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
    msg.setTimeStamp(0.8539648696742849);
    msg.setSource(44331U);
    msg.setSourceEntity(205U);
    msg.setDestination(32594U);
    msg.setDestinationEntity(91U);
    msg.timeout = 64112U;
    msg.lat = 0.48233937384490544;
    msg.lon = 0.21571529048445104;
    msg.z = 0.5648196432517159;
    msg.z_units = 103U;
    msg.amplitude = 0.8312004154392018;
    msg.pitch = 0.8128996101607323;
    msg.speed = 0.4397880281759363;
    msg.speed_units = 59U;
    msg.custom.assign("JIHDWDIPNSQJGHZQZNGMSCRPZMSGTLNDFOZOTXDVJPFVLSDPEDEJGXKYANCIATRHCTHBCJMASWCMXDXHOUOLVKRUEYNHOVMJUVZNOIPTSGLGKOBRNXUCGQSZYGEDEJYTYUWAVIYMCDUYCMRICFQMAZGS");

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
    msg.setTimeStamp(0.9131595520241046);
    msg.setSource(18616U);
    msg.setSourceEntity(29U);
    msg.setDestination(44617U);
    msg.setDestinationEntity(55U);
    msg.timeout = 51192U;
    msg.lat = 0.5534639138025734;
    msg.lon = 0.6084437257873012;
    msg.z = 0.09682036573133324;
    msg.z_units = 207U;
    msg.amplitude = 0.807137163613127;
    msg.pitch = 0.2776242804597008;
    msg.speed = 0.6465757926185072;
    msg.speed_units = 200U;
    msg.custom.assign("URXNLNLMEAEMOOTAVKFTFWLQRVJZHDXBGAIYTZXLZYWJNOC");

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
    msg.setTimeStamp(0.879882511686641);
    msg.setSource(35263U);
    msg.setSourceEntity(86U);
    msg.setDestination(38354U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.34884086449493146);
    msg.setSource(22886U);
    msg.setSourceEntity(112U);
    msg.setDestination(40973U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.5425234228650966);
    msg.setSource(13651U);
    msg.setSourceEntity(201U);
    msg.setDestination(48608U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.6231935713306602);
    msg.setSource(61951U);
    msg.setSourceEntity(59U);
    msg.setDestination(50033U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.43587199838470136;
    msg.lon = 0.17867481841525712;
    msg.z = 0.33044297774120923;
    msg.z_units = 117U;
    msg.radius = 0.04018009045220894;
    msg.duration = 52520U;
    msg.speed = 0.7981772149831322;
    msg.speed_units = 121U;
    msg.custom.assign("NUYZUPZSBCUHJWYSLIKLHVYCEFRMQEQFQMNQMLFKXZAGVDRLMTSBDZILDOPHTMXXJUTMQXWUWADSCTULAXDFAYIDOHOKKBPEVNITJSLFCQTDWKOBPHGXWNJBSEOFXFIHJSUOWUCKEMKTI");

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
    msg.setTimeStamp(0.2638961623712478);
    msg.setSource(45718U);
    msg.setSourceEntity(128U);
    msg.setDestination(51293U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.4865663788738146;
    msg.lon = 0.37752272990740043;
    msg.z = 0.23706116653919584;
    msg.z_units = 128U;
    msg.radius = 0.46379680422947445;
    msg.duration = 2464U;
    msg.speed = 0.6771391574317664;
    msg.speed_units = 178U;
    msg.custom.assign("KAFFOCAWFBAMQNHHZHVVMEOPRULJLEDQSJ");

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
    msg.setTimeStamp(0.6837465351275991);
    msg.setSource(35434U);
    msg.setSourceEntity(251U);
    msg.setDestination(58578U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.3728505093934401;
    msg.lon = 0.018958551204641072;
    msg.z = 0.7220836191855701;
    msg.z_units = 246U;
    msg.radius = 0.5716154924219992;
    msg.duration = 30453U;
    msg.speed = 0.4742732240863444;
    msg.speed_units = 103U;
    msg.custom.assign("QZHLZVODQKEADVZLCUFIXFBQLDDIRRPFSNTVYSDAJKAZPXORXNVYPBTBPBXZ");

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
    msg.setTimeStamp(0.050439049970902206);
    msg.setSource(26070U);
    msg.setSourceEntity(242U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(157U);
    msg.timeout = 20735U;
    msg.flags = 145U;
    msg.lat = 0.6100402892340858;
    msg.lon = 0.5930923626151021;
    msg.start_z = 0.2348723182760566;
    msg.start_z_units = 181U;
    msg.end_z = 0.7581177746010059;
    msg.end_z_units = 40U;
    msg.radius = 0.567741985175867;
    msg.speed = 0.8814887767020297;
    msg.speed_units = 164U;
    msg.custom.assign("BADLTFJDFXEDIKWWYHSLDRYANPYHIIKMQDWIINBKJXRQHGKQQNUOSQABRBKUUGWPJEXZWXJWNMSZPCDMRAL");

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
    msg.setTimeStamp(0.7193780581864425);
    msg.setSource(35156U);
    msg.setSourceEntity(185U);
    msg.setDestination(52519U);
    msg.setDestinationEntity(183U);
    msg.timeout = 8026U;
    msg.flags = 117U;
    msg.lat = 0.5686317064320248;
    msg.lon = 0.12002653289535803;
    msg.start_z = 0.07555273464631118;
    msg.start_z_units = 174U;
    msg.end_z = 0.9272744312745481;
    msg.end_z_units = 55U;
    msg.radius = 0.23489031053116927;
    msg.speed = 0.16443879868060274;
    msg.speed_units = 206U;
    msg.custom.assign("EKEBHYYXUJWWGRMYKEWIJFTMBMSHGSAVVREAKWORZUDPZISDKWFEAQHYLXMVYLCLHQSHGUCEQQODVFBJGDFCITQXJELIALZMPHAODQEHHQT");

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
    msg.setTimeStamp(0.21584390914196716);
    msg.setSource(33585U);
    msg.setSourceEntity(64U);
    msg.setDestination(59895U);
    msg.setDestinationEntity(153U);
    msg.timeout = 54880U;
    msg.flags = 170U;
    msg.lat = 0.2606382340699983;
    msg.lon = 0.7998961960596374;
    msg.start_z = 0.4044462144872124;
    msg.start_z_units = 31U;
    msg.end_z = 0.6300663155522078;
    msg.end_z_units = 126U;
    msg.radius = 0.07126913442603644;
    msg.speed = 0.5731136986738409;
    msg.speed_units = 234U;
    msg.custom.assign("ZJLAVJSUDEKYYNJZELETLHBFOITDAPSJEQDICCUGFRRXGUUQCMPZNIYIXCQKGUURTOJGZIHXBKYFRGVABEUHOWSHAEXIPZNPSKBFWPAQEHISVKWWMEPNHOHZEROBDGBYSYYPOMWOUALFJXMYLRHNGXDVNTQHTRDETPLXOWVNWSCRWSBQCMBMSXDAJCLJVGVTZJNPFHKUWCVNZYIZOAJLZAKX");

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
    msg.setTimeStamp(0.6944269208445978);
    msg.setSource(43246U);
    msg.setSourceEntity(53U);
    msg.setDestination(41504U);
    msg.setDestinationEntity(67U);
    msg.timeout = 61142U;
    msg.lat = 0.03352716567797531;
    msg.lon = 0.6307482747717819;
    msg.z = 0.2547599215738403;
    msg.z_units = 35U;
    msg.speed = 0.830838344003953;
    msg.speed_units = 69U;
    msg.custom.assign("RWJFKZUCRLBZPWBJEJODFGDNSXITKOWISZJEMTJJZISLZRWUUCP");

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
    msg.setTimeStamp(0.7424130651582664);
    msg.setSource(35831U);
    msg.setSourceEntity(248U);
    msg.setDestination(48075U);
    msg.setDestinationEntity(147U);
    msg.timeout = 60333U;
    msg.lat = 0.005257139672703914;
    msg.lon = 0.6372241726528928;
    msg.z = 0.19824226100116293;
    msg.z_units = 207U;
    msg.speed = 0.6746966429662261;
    msg.speed_units = 45U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7186696220533122;
    tmp_msg_0.y = 0.4833766815400935;
    tmp_msg_0.z = 0.6834915563756457;
    tmp_msg_0.t = 0.6753261454602986;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KKHGSJWECMCITXNPIJDDUMKHWGNTCLZKVUULFYBXQFMYMQGMISQZDOE");

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
    msg.setTimeStamp(0.9544906014898407);
    msg.setSource(15732U);
    msg.setSourceEntity(157U);
    msg.setDestination(18337U);
    msg.setDestinationEntity(145U);
    msg.timeout = 12579U;
    msg.lat = 0.6494802796540222;
    msg.lon = 0.7528147674159693;
    msg.z = 0.0869732704206102;
    msg.z_units = 229U;
    msg.speed = 0.8711134436344983;
    msg.speed_units = 157U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.20049149934629995;
    tmp_msg_0.y = 0.2974951051942364;
    tmp_msg_0.z = 0.16986907440890142;
    tmp_msg_0.t = 0.3644748644852054;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TVNMXWJYKYXKQUDHCBLKVCEORNICRWOMEAGXYZRTGSMAWJZIYZBGCHQJGEDTCSSHCQRAMGMFZVNHPJJSESTEZOKIQUQXWOLV");

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
    msg.setTimeStamp(0.04957495206555418);
    msg.setSource(44000U);
    msg.setSourceEntity(172U);
    msg.setDestination(61059U);
    msg.setDestinationEntity(141U);
    msg.x = 0.6875611960338208;
    msg.y = 0.18319201755677827;
    msg.z = 0.4153335665798942;
    msg.t = 0.6688140274628694;

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
    msg.setTimeStamp(0.05917293567772297);
    msg.setSource(47163U);
    msg.setSourceEntity(31U);
    msg.setDestination(18676U);
    msg.setDestinationEntity(108U);
    msg.x = 0.186377175662794;
    msg.y = 0.44760912352169757;
    msg.z = 0.345923267325809;
    msg.t = 0.08274145727710058;

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
    msg.setTimeStamp(0.3023415047324114);
    msg.setSource(3012U);
    msg.setSourceEntity(72U);
    msg.setDestination(25107U);
    msg.setDestinationEntity(66U);
    msg.x = 0.5060259621358979;
    msg.y = 0.3109386407909036;
    msg.z = 0.21296570919330804;
    msg.t = 0.19961527979974847;

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
    msg.setTimeStamp(0.8521031104304314);
    msg.setSource(33802U);
    msg.setSourceEntity(63U);
    msg.setDestination(14219U);
    msg.setDestinationEntity(128U);
    msg.timeout = 54897U;
    msg.name.assign("NVNDVMSHMAXCCBGNBXSIJUHNEIVOWWVJUHHLKQMVATZAPESTCOZGXECYWUFZAYDQXYQNJQBETDQITILNOTRETCECRAJCMSWOKPBEOIHLJ");
    msg.custom.assign("HDDUWGJJEC");

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
    msg.setTimeStamp(0.8454969638707781);
    msg.setSource(64858U);
    msg.setSourceEntity(165U);
    msg.setDestination(25554U);
    msg.setDestinationEntity(24U);
    msg.timeout = 44892U;
    msg.name.assign("OBLQOVAFSIVMIHWRYYULJJFRWUQBMKGBBWEHJLIDXBDSHJXTFVNSDVNAYVQAGEVTROXEULDXEGRZJLEOEPGUTSQMSGICFFKSYZMMNIPWUCFXMEDFICTKGXNIMGHCJPCGNVEHPCKTRLDUENPLTOKIYLWNDZCBOXMSQWZNXNOMTJZRVVPCZQJSFUWRWKZHURQKHMPZ");
    msg.custom.assign("CMYCZDDUDMEVVHFTTCCITWJJGAGNOJMIWQBCXZRSVBIWBODS");

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
    msg.setTimeStamp(0.41490044156102235);
    msg.setSource(60964U);
    msg.setSourceEntity(72U);
    msg.setDestination(5101U);
    msg.setDestinationEntity(186U);
    msg.timeout = 45033U;
    msg.name.assign("PABCSOBDDXIHXCMHNKZGMFBDZPXGTIJFTKFWGLKSHFRYCLEHXHRBFMNVWNODCMOMQYRKISFZOMMGYMNEXTNEDZPKEYGTAJJSQKDCZYPQJBASWUEXSLQDUKFEBPLJLFGLZQZIVEIANFVTGYYHODCICPAZWWTUJWAFPEBSQJXHITOJ");
    msg.custom.assign("ALJOYQNNQEDQYRKUNBIAULOOSMCCGAOHQEMYUKQERKATHDSRDWCMKPRUFSGVUVHKTXZIRKFLBDUSSOYKFJLSBGFYVHLDUTZAOWRNZCANTDTIPJGQEFMEVQDCVIZEBFOMVGHAHOYDPMHZFEVSJXITBRUVWCTWNYFJPXGZLRWXUZBSSPWN");

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
    msg.setTimeStamp(0.0827206073034209);
    msg.setSource(7956U);
    msg.setSourceEntity(36U);
    msg.setDestination(45287U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.539971902020127;
    msg.lon = 0.6695449720624636;
    msg.z = 0.9354513276580022;
    msg.z_units = 75U;
    msg.speed = 0.287606193893023;
    msg.speed_units = 78U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60971U;
    tmp_msg_0.off_x = 0.10008272981080046;
    tmp_msg_0.off_y = 0.27991161868137293;
    tmp_msg_0.off_z = 0.6701964488429408;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.22215014732380478;
    msg.custom.assign("FMABVCKWVWUORJAKMHPLISJZJCIAIZKPMQGXJDDDQFGJZAXMLVBTAFOPFEQTONSESJYWVVTWNFTTNSCOFILFVIGKHKVPKJWPZHHXUCQDDGRPFJOTODNGUMOSQGBLMNNXIOGHCXLYUWDRPSTYIDLRLTNABMHMRXYJVUYYZOAIBEYEUSELABLMCEYKWQKLAEURHBXOIBQNHDCWPPUCGEGQRXSRAKSBTXVBENXEIMFZYZJVNUZTWRQGRFYKCUZCS");

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
    msg.setTimeStamp(0.8558957098426867);
    msg.setSource(27255U);
    msg.setSourceEntity(215U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.4080250988410906;
    msg.lon = 0.7824980089200464;
    msg.z = 0.32311116550081487;
    msg.z_units = 228U;
    msg.speed = 0.3230151614805349;
    msg.speed_units = 157U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6209971072220811;
    tmp_msg_0.y = 0.2743087328061672;
    tmp_msg_0.z = 0.7783721931789847;
    tmp_msg_0.t = 0.15824358604495725;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 24294U;
    tmp_msg_1.off_x = 0.8357983020156352;
    tmp_msg_1.off_y = 0.8119041347014609;
    tmp_msg_1.off_z = 0.20275518327341135;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6552481941093431;
    msg.custom.assign("VLEOXYQWJOSZBLGKUVZPZSYOPJEAPEMWLECUVGNUGGHLDKMHDHNPHKXKSCSDIJSRTIDABTYEAJR");

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
    msg.setTimeStamp(0.036168243742650596);
    msg.setSource(2476U);
    msg.setSourceEntity(38U);
    msg.setDestination(26554U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.8595513755031174;
    msg.lon = 0.09304080124610448;
    msg.z = 0.9762798257807868;
    msg.z_units = 32U;
    msg.speed = 0.43572402576603764;
    msg.speed_units = 31U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5043486461754125;
    tmp_msg_0.y = 0.2765374279011401;
    tmp_msg_0.z = 0.9733966648387995;
    tmp_msg_0.t = 0.2804121440773457;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 2523U;
    tmp_msg_1.off_x = 0.4232148499425369;
    tmp_msg_1.off_y = 0.6437894764448339;
    tmp_msg_1.off_z = 0.08226428434051569;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8321778988361578;
    msg.custom.assign("RPDJGZSPZUNFVERFTWHELJDLKBQUMVYNWFLYBEUKXGEMQOBIREMPAQZVLHVHDBJCHIMPDZXTDGOTOHURCNUSIAUYIOUNRYJBYXIZHPPVGCRRWKZXJSCQCVJFBQVPOCSLMDDJMXVOOEGKQPFTMISWZFLNKJPTMC");

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
    msg.setTimeStamp(0.5932358346159895);
    msg.setSource(50449U);
    msg.setSourceEntity(242U);
    msg.setDestination(15315U);
    msg.setDestinationEntity(166U);
    msg.vid = 48857U;
    msg.off_x = 0.919023844875982;
    msg.off_y = 0.6785397775643187;
    msg.off_z = 0.8754911556389441;

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
    msg.setTimeStamp(0.32082755181399025);
    msg.setSource(63235U);
    msg.setSourceEntity(203U);
    msg.setDestination(12695U);
    msg.setDestinationEntity(252U);
    msg.vid = 53256U;
    msg.off_x = 0.7751588739435834;
    msg.off_y = 0.3639511999826621;
    msg.off_z = 0.32211960152279817;

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
    msg.setTimeStamp(0.9504530763667162);
    msg.setSource(30362U);
    msg.setSourceEntity(246U);
    msg.setDestination(37616U);
    msg.setDestinationEntity(206U);
    msg.vid = 17529U;
    msg.off_x = 0.13653843095925966;
    msg.off_y = 0.6074984620738637;
    msg.off_z = 0.013111835475767775;

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
    msg.setTimeStamp(0.22286517995614952);
    msg.setSource(62482U);
    msg.setSourceEntity(44U);
    msg.setDestination(58774U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.18037094056074776);
    msg.setSource(22226U);
    msg.setSourceEntity(245U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.6868860383523856);
    msg.setSource(38796U);
    msg.setSourceEntity(101U);
    msg.setDestination(19731U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.314812939613074);
    msg.setSource(56663U);
    msg.setSourceEntity(183U);
    msg.setDestination(16304U);
    msg.setDestinationEntity(44U);
    msg.mid = 31279U;

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
    msg.setTimeStamp(0.8471764018799769);
    msg.setSource(7201U);
    msg.setSourceEntity(222U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(46U);
    msg.mid = 55426U;

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
    msg.setTimeStamp(0.5592090418298615);
    msg.setSource(59210U);
    msg.setSourceEntity(241U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(189U);
    msg.mid = 47309U;

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
    msg.setTimeStamp(0.6262874192620231);
    msg.setSource(31429U);
    msg.setSourceEntity(197U);
    msg.setDestination(29935U);
    msg.setDestinationEntity(187U);
    msg.state = 136U;
    msg.eta = 61069U;
    msg.info.assign("XTYRPUEBNTMWFXWXKSIRYTGTVOVMUPHREAULPEVBLSSLXVIQNKLOFHSMOEFTCGKBJDNHIJMYXVMFSBMKNRKAKZEAYTYGWZKNRQAGQYMHVWGWRNQCITBDKGJTLCZUPSOQEDCWDRSVIBODZELEPI");

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
    msg.setTimeStamp(0.8035025292003038);
    msg.setSource(47810U);
    msg.setSourceEntity(229U);
    msg.setDestination(20538U);
    msg.setDestinationEntity(86U);
    msg.state = 151U;
    msg.eta = 4897U;
    msg.info.assign("KNPOHVCUJYRYRXNYBIHMZGBSNDAXJCDQFXXJSZITXACXQWPNQUBPXXCHVADTERWQCEHRVMZSYKHBENFHLMXUECZWOKSFCMGRZNZECGVMT");

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
    msg.setTimeStamp(0.3834447289404861);
    msg.setSource(56934U);
    msg.setSourceEntity(196U);
    msg.setDestination(37844U);
    msg.setDestinationEntity(46U);
    msg.state = 196U;
    msg.eta = 33197U;
    msg.info.assign("LLIPZJLSDZMNAHNJWOHNSFBCSJJNVMNPOGIABLTVMGTWKTCAQDEXFKSWGHPUBQIOUKXKGWBKLUSKPT");

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
    msg.setTimeStamp(0.9709093861398839);
    msg.setSource(45839U);
    msg.setSourceEntity(33U);
    msg.setDestination(17398U);
    msg.setDestinationEntity(213U);
    msg.system = 51265U;
    msg.duration = 18483U;
    msg.speed = 0.6674087148719617;
    msg.speed_units = 91U;
    msg.x = 0.9801355005005307;
    msg.y = 0.24749552963455013;
    msg.z = 0.813667582929914;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.4834924705672353);
    msg.setSource(17026U);
    msg.setSourceEntity(18U);
    msg.setDestination(51471U);
    msg.setDestinationEntity(229U);
    msg.system = 29063U;
    msg.duration = 51782U;
    msg.speed = 0.03064277596345999;
    msg.speed_units = 65U;
    msg.x = 0.5936511949839338;
    msg.y = 0.2819211922296284;
    msg.z = 0.8109182431904811;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.17587051445492086);
    msg.setSource(13200U);
    msg.setSourceEntity(164U);
    msg.setDestination(40253U);
    msg.setDestinationEntity(43U);
    msg.system = 65186U;
    msg.duration = 13615U;
    msg.speed = 0.10465633818050979;
    msg.speed_units = 140U;
    msg.x = 0.4103036934537607;
    msg.y = 0.3463399551724189;
    msg.z = 0.25194396797680574;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.5401975728835016);
    msg.setSource(40036U);
    msg.setSourceEntity(196U);
    msg.setDestination(9958U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.5338499317171218;
    msg.lon = 0.7571507295213282;
    msg.speed = 0.06898685506067326;
    msg.speed_units = 119U;
    msg.duration = 43439U;
    msg.sys_a = 13618U;
    msg.sys_b = 7798U;
    msg.move_threshold = 0.9515547433786793;

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
    msg.setTimeStamp(0.34930370651907783);
    msg.setSource(4722U);
    msg.setSourceEntity(135U);
    msg.setDestination(55328U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.09328717617950666;
    msg.lon = 0.11388939030653333;
    msg.speed = 0.273281816396568;
    msg.speed_units = 248U;
    msg.duration = 5523U;
    msg.sys_a = 27911U;
    msg.sys_b = 64941U;
    msg.move_threshold = 0.2500364716697636;

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
    msg.setTimeStamp(0.4735068357718861);
    msg.setSource(57024U);
    msg.setSourceEntity(162U);
    msg.setDestination(25045U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.9142387412450557;
    msg.lon = 0.05689735001488194;
    msg.speed = 0.10199618783834863;
    msg.speed_units = 118U;
    msg.duration = 29937U;
    msg.sys_a = 37198U;
    msg.sys_b = 8963U;
    msg.move_threshold = 0.32250994185991344;

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
    msg.setTimeStamp(0.1592038457138163);
    msg.setSource(10292U);
    msg.setSourceEntity(181U);
    msg.setDestination(30781U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.22815973817445623;
    msg.lon = 0.8463977004184554;
    msg.z = 0.36333175327556544;
    msg.z_units = 7U;
    msg.speed = 0.35134178843568464;
    msg.speed_units = 52U;
    msg.custom.assign("QWSSAHYSANHTEXFUYVIKVLLGKMGOFIANULJUEEDAESPMTYMCNFWWOHRVSFQGWCFTEDROKNBLMIYROEBDQYCVSKUZNJFEAJYHAXXWRHCGQFPWIMGXKIBUFPVTMJJWBKDXQXZCCSTPPTVBMXJUZJAHPOXKYKQJPOUAURRZWOE");

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
    msg.setTimeStamp(0.7640687896055425);
    msg.setSource(20813U);
    msg.setSourceEntity(236U);
    msg.setDestination(12392U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.4050738677152418;
    msg.lon = 0.5132315440943829;
    msg.z = 0.2388283434488636;
    msg.z_units = 24U;
    msg.speed = 0.6308806185116399;
    msg.speed_units = 212U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.34117740718716005;
    tmp_msg_0.lon = 0.10511784999010709;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZAJDAYXURKYTOAEWPRPKHJMSSUAIZRSNIFQBUYIYVPFBZXDPNVBQBGVOWQHTQLFFXOGTJLIAQJMPNCSSDIWIHFIUDFRWVZLKAWCRGIZGQXVLCGKEBBTUTAQKQHRJCQFVTFAJCHMZHCACMVMSECIF");

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
    msg.setTimeStamp(0.15483861390255627);
    msg.setSource(1495U);
    msg.setSourceEntity(54U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.6513231022152175;
    msg.lon = 0.18016886570016044;
    msg.z = 0.9656723599214875;
    msg.z_units = 91U;
    msg.speed = 0.5147584772422704;
    msg.speed_units = 88U;
    msg.custom.assign("UZHZNVPWXLAMMKWYIFXNVWDIOVWYEXCLSULGJAAWFEOFEBVNGBKHTBJGPZE");

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
    msg.setTimeStamp(0.21678963715423094);
    msg.setSource(7677U);
    msg.setSourceEntity(3U);
    msg.setDestination(45679U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.11257665319799603;
    msg.lon = 0.9839434737743383;

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
    msg.setTimeStamp(0.8812060324667924);
    msg.setSource(6628U);
    msg.setSourceEntity(138U);
    msg.setDestination(49060U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.22264919114969228;
    msg.lon = 0.11813744236662416;

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
    msg.setTimeStamp(0.33133346693434196);
    msg.setSource(25132U);
    msg.setSourceEntity(170U);
    msg.setDestination(20777U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.65049212670881;
    msg.lon = 0.6916823400982861;

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
    msg.setTimeStamp(0.1634563333761727);
    msg.setSource(7863U);
    msg.setSourceEntity(241U);
    msg.setDestination(57512U);
    msg.setDestinationEntity(22U);
    msg.timeout = 53886U;
    msg.lat = 0.8014558316073703;
    msg.lon = 0.08532422930033334;
    msg.z = 0.09525076546375744;
    msg.z_units = 145U;
    msg.pitch = 0.1659150745952631;
    msg.amplitude = 0.5389366887464488;
    msg.duration = 50238U;
    msg.speed = 0.4179322045120363;
    msg.speed_units = 51U;
    msg.radius = 0.04578687791675473;
    msg.direction = 104U;
    msg.custom.assign("BWJUWCCDFWSNMTHGDWAWLNVZOMXLUJVAYJGUKHAUHXVXNPZGYZPQQIWDVLIKLDRGFJERRTFNUXKFOBGCGZSPZLIOFFUZTOOMJHVCOQDHQADNTSLUIMYKAHRQRPIRZDKIXJKFJGRKLPBSETKWSMBFNE");

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
    msg.setTimeStamp(0.8745627162420063);
    msg.setSource(35151U);
    msg.setSourceEntity(78U);
    msg.setDestination(28350U);
    msg.setDestinationEntity(20U);
    msg.timeout = 59760U;
    msg.lat = 0.32336869997677786;
    msg.lon = 0.25684424925020355;
    msg.z = 0.41292153224663497;
    msg.z_units = 205U;
    msg.pitch = 0.7654557804785207;
    msg.amplitude = 0.586771832425628;
    msg.duration = 54668U;
    msg.speed = 0.9100311340903148;
    msg.speed_units = 56U;
    msg.radius = 0.873534232143015;
    msg.direction = 167U;
    msg.custom.assign("AKYXDIBABMFIKOWHYGVBCELLDLDRNUHHEOJDPSFXWFQZFAXVRUTNWGIJXQUSWEVVOYEFTRLKLRNKEAJAUQOHFDAZTZCHZUJYUSSEEGPYTJZNUWLQQLCJNAUXDWNOQWKKAYYWXPUCFSJSGMZVMRGB");

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
    msg.setTimeStamp(0.15946445985836954);
    msg.setSource(64713U);
    msg.setSourceEntity(112U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(112U);
    msg.timeout = 7257U;
    msg.lat = 0.9464948056623208;
    msg.lon = 0.8851310060381109;
    msg.z = 0.7563910437752307;
    msg.z_units = 250U;
    msg.pitch = 0.05251700380476232;
    msg.amplitude = 0.6578880766971059;
    msg.duration = 7447U;
    msg.speed = 0.901249382768322;
    msg.speed_units = 0U;
    msg.radius = 0.8938590267393048;
    msg.direction = 52U;
    msg.custom.assign("NYSTONHPFLCJGOVUZZESVPIMSIPPQJATNEQMZGORAGAXEOSSDKQQDJUPCTHFLFKWLUKTDKVUQRSMRBIUJBUWCVVURLZRHIGHBOXJCFBKDDJXXYAUIHHAYTXAKFLXGXDLTOOFCBVRNKADVZLANCLT");

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
    msg.setTimeStamp(0.18596957197725406);
    msg.setSource(53573U);
    msg.setSourceEntity(51U);
    msg.setDestination(13114U);
    msg.setDestinationEntity(246U);
    msg.control_src = 23373U;
    msg.control_ent = 173U;
    msg.timeout = 0.09455602495397031;
    msg.loiter_radius = 0.6816603933876837;
    msg.altitude_interval = 0.2479539878453042;

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
    msg.setTimeStamp(0.7644931803320144);
    msg.setSource(19200U);
    msg.setSourceEntity(189U);
    msg.setDestination(29345U);
    msg.setDestinationEntity(229U);
    msg.control_src = 48784U;
    msg.control_ent = 95U;
    msg.timeout = 0.34848770074603674;
    msg.loiter_radius = 0.1961682012159376;
    msg.altitude_interval = 0.8643108793473292;

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
    msg.setTimeStamp(0.7057958617857076);
    msg.setSource(35043U);
    msg.setSourceEntity(70U);
    msg.setDestination(34485U);
    msg.setDestinationEntity(161U);
    msg.control_src = 27785U;
    msg.control_ent = 119U;
    msg.timeout = 0.6901347643140445;
    msg.loiter_radius = 0.9878072777013787;
    msg.altitude_interval = 0.8601683546571001;

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
    msg.setTimeStamp(0.8031136480199134);
    msg.setSource(9782U);
    msg.setSourceEntity(39U);
    msg.setDestination(36460U);
    msg.setDestinationEntity(5U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5020966515816888;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.29848399481000554;
    tmp_msg_1.z_units = 138U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.10967233978128865;
    msg.lon = 0.5672712382345312;
    msg.radius = 0.1065814894285112;

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
    msg.setTimeStamp(0.2596103397346251);
    msg.setSource(56307U);
    msg.setSourceEntity(207U);
    msg.setDestination(25485U);
    msg.setDestinationEntity(176U);
    msg.flags = 138U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.36397382154388014;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5116555630795016;
    tmp_msg_1.z_units = 17U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6109002296893102;
    msg.lon = 0.34028328533684804;
    msg.radius = 0.45880144000244705;

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
    msg.setTimeStamp(0.3807655555545133);
    msg.setSource(56391U);
    msg.setSourceEntity(51U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(9U);
    msg.flags = 176U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.43534739801382916;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7410930615752316;
    tmp_msg_1.z_units = 39U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.719473155721847;
    msg.lon = 0.8071156330608675;
    msg.radius = 0.5065064544020988;

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
    msg.setTimeStamp(0.10046413501297147);
    msg.setSource(59552U);
    msg.setSourceEntity(250U);
    msg.setDestination(14168U);
    msg.setDestinationEntity(22U);
    msg.control_src = 593U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 89U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7226570170950052;
    tmp_tmp_msg_0_0.speed_units = 221U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7486359725682085;
    tmp_tmp_msg_0_1.z_units = 121U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1260948138446114;
    tmp_msg_0.lon = 0.07499915064319584;
    tmp_msg_0.radius = 0.017695822211596046;
    msg.reference.set(tmp_msg_0);
    msg.state = 40U;
    msg.proximity = 78U;

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
    msg.setTimeStamp(0.8161801600926545);
    msg.setSource(30101U);
    msg.setSourceEntity(15U);
    msg.setDestination(27545U);
    msg.setDestinationEntity(167U);
    msg.control_src = 57339U;
    msg.control_ent = 106U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 14U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4468906133583965;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4214270199784753;
    tmp_tmp_msg_0_1.z_units = 103U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4487105982207865;
    tmp_msg_0.lon = 0.20933660290130596;
    tmp_msg_0.radius = 0.9302213565295483;
    msg.reference.set(tmp_msg_0);
    msg.state = 116U;
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
    msg.setTimeStamp(0.8046939207578899);
    msg.setSource(54863U);
    msg.setSourceEntity(19U);
    msg.setDestination(35469U);
    msg.setDestinationEntity(81U);
    msg.control_src = 7304U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 111U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.21381744547089399;
    tmp_tmp_msg_0_0.speed_units = 39U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.1607860563200385;
    tmp_tmp_msg_0_1.z_units = 242U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.18632981352435507;
    tmp_msg_0.lon = 0.21947481161288762;
    tmp_msg_0.radius = 0.10531950648890331;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 11U;

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
    msg.setTimeStamp(0.8290017775168858);
    msg.setSource(13722U);
    msg.setSourceEntity(185U);
    msg.setDestination(56187U);
    msg.setDestinationEntity(5U);
    msg.op_mode = 189U;
    msg.error_count = 210U;
    msg.error_ents.assign("AQPDXSLJONQXNETTDGGHVUVDMAPNYPRSUTEFYHUHRWFUEXLFOZFYVTMVFMJKHBZMVXIWDFTPQCTGGVIBQDVXQKHCLFAPWCANWLOXCKHSZIDTE");
    msg.maneuver_type = 2216U;
    msg.maneuver_stime = 0.6704908900578969;
    msg.maneuver_eta = 36666U;
    msg.control_loops = 4106252705U;
    msg.flags = 223U;
    msg.last_error.assign("IUNEOIXZOUMDANRHDHKCLCLNRWB");
    msg.last_error_time = 0.68340574959083;

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
    msg.setTimeStamp(0.6251240185957376);
    msg.setSource(22823U);
    msg.setSourceEntity(124U);
    msg.setDestination(45070U);
    msg.setDestinationEntity(126U);
    msg.op_mode = 180U;
    msg.error_count = 106U;
    msg.error_ents.assign("GQWYEUVAFSJAGVLPYXRSBDQFMBOYOJTCVHTLGBRRASGCUPASQXSVNZRFRNOUCNIJZDCIYJULGJGACGYASKVTNUAJFDWXCDTNFNRMOMOHPKEIJVIWKXBTRFHLDXYFNTYBLDECNHBZIDVGVIBAZ");
    msg.maneuver_type = 65142U;
    msg.maneuver_stime = 0.7024546572969537;
    msg.maneuver_eta = 56307U;
    msg.control_loops = 45664091U;
    msg.flags = 223U;
    msg.last_error.assign("PHTNSFAWFMRHLDJKOSAWJOVECZJRKECNXUBQIJYXQAOOHVLRHAGNVEHAVFDDFIKGEJIPLMSEUITDSUGGWZLXUTKJRKDUMKQDYVGCNPQMGQSZWFYCCYYYDNJDIOOTRCYUAXT");
    msg.last_error_time = 0.524219489884705;

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
    msg.setTimeStamp(0.39774753047892186);
    msg.setSource(33284U);
    msg.setSourceEntity(50U);
    msg.setDestination(62631U);
    msg.setDestinationEntity(26U);
    msg.op_mode = 237U;
    msg.error_count = 158U;
    msg.error_ents.assign("IDKGNLXWERWAS");
    msg.maneuver_type = 7626U;
    msg.maneuver_stime = 0.46939583264178053;
    msg.maneuver_eta = 65358U;
    msg.control_loops = 61275457U;
    msg.flags = 56U;
    msg.last_error.assign("HSONLRQXRBUBUYMMUKNYGDCWKOTPCLCMIHSBWBXYCQNVETQZNBHQIMXZRJVOWZATUVTVRMGGDWYCZRFTFLNJSDWFDYJAIKMLCEMFTUJWDXPNWDNL");
    msg.last_error_time = 0.32006278860715653;

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
    msg.setTimeStamp(0.22855327840532036);
    msg.setSource(37515U);
    msg.setSourceEntity(101U);
    msg.setDestination(32464U);
    msg.setDestinationEntity(71U);
    msg.type = 132U;
    msg.request_id = 64839U;
    msg.command = 12U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.10858277981494924;
    tmp_msg_0.lon = 0.7115192779879116;
    tmp_msg_0.speed = 0.678821496144783;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.duration = 21906U;
    tmp_msg_0.sys_a = 36680U;
    tmp_msg_0.sys_b = 20304U;
    tmp_msg_0.move_threshold = 0.4846303943752469;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43676U;
    msg.info.assign("OBHCAZHDQXMZPLWWCMEDELSJIJPPFQCAQKISZSMVXGWQRMSLYUIWTAGRYPLVCBYNTLTN");

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
    msg.setTimeStamp(0.6912901649729242);
    msg.setSource(34329U);
    msg.setSourceEntity(254U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(149U);
    msg.type = 76U;
    msg.request_id = 61789U;
    msg.command = 6U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.42770683140038623;
    tmp_msg_0.lon = 0.9116702240073163;
    tmp_msg_0.z = 0.9403482560679657;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.speed = 0.15471801992278555;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.custom.assign("CIZUXNPIFEDARKFEIAIBGYHSLXXVQHRWWKRJKTNRQLIZHXXOIOMSJQFUAFDYTUMWPBTOEZSSVFHSTJAKEGMXUDUFGTZZTKHDSBNCGRHBYDMUBGLTGAQQLHQOWYEPDOTJBZJFOMZUQDYQCSWVI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38017U;
    msg.info.assign("LEVVNKHYOTRNJURCZUKJCPFWRBFYXDMKUFDHAAGQJVZVHRPYQUBVREVFGEHWCZEPWHBVQTXVCARZESNBGNPAQMABSSGSWXBKILSLQTIAPZXITSISHOWKADLWIALWGYOOEIXQBFHZJFSDYOCJGVIEAMUPPMWJCXZTRTMALNZHNCHTYBXKKQRDZNYJOMONGKQXKIPVYIJDLRMFFFCUPYUDOGEJRUTMBOSMDWCDJXEGBIOLXN");

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
    msg.setTimeStamp(0.7620833195406017);
    msg.setSource(63852U);
    msg.setSourceEntity(151U);
    msg.setDestination(46658U);
    msg.setDestinationEntity(16U);
    msg.type = 243U;
    msg.request_id = 29305U;
    msg.command = 153U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("UELHRQUKEBVSMPUGHQYTPMNJMVVNRAZEGUBJDIDOMLXWVTOOJCNAWTPOMUQLYCHIBHBWIOAKPJYXWZFRDQWSGHXRYYXYULHPFJTHPW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29784U;
    msg.info.assign("QBCYUQLSPMWXLDHMKEJEBLZLNVVXVHRHCFNQBEMHDNMUQUKQMGYEFJEPEBGMXVRQTTTRVIDNSKAOHWVNAHJXGWOQJOAPTKDBIDSUATCYXUNDYBRRQPLANEHKTMZVFBHLWPMAGAUNDJIRPYXOEWZFTUZDPCFHJBSIXKCEGBYP");

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
    msg.setTimeStamp(0.6296091396469843);
    msg.setSource(53283U);
    msg.setSourceEntity(84U);
    msg.setDestination(44962U);
    msg.setDestinationEntity(179U);
    msg.command = 236U;
    msg.entities.assign("UKVCJGSWET");

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
    msg.setTimeStamp(0.2416720920562011);
    msg.setSource(649U);
    msg.setSourceEntity(180U);
    msg.setDestination(47844U);
    msg.setDestinationEntity(147U);
    msg.command = 107U;
    msg.entities.assign("YIYWLZDUAO");

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
    msg.setTimeStamp(0.6583354612596062);
    msg.setSource(62555U);
    msg.setSourceEntity(254U);
    msg.setDestination(49231U);
    msg.setDestinationEntity(46U);
    msg.command = 6U;
    msg.entities.assign("MYKSLWYDMJJADTCXEUPFZMXRLNLZSQPQYUTNWZQHOEKVNGBJMDGENSEKRFUICETWHUQSZCYHXFXHPMBWDBFV");

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
    msg.setTimeStamp(0.7895028561977917);
    msg.setSource(62240U);
    msg.setSourceEntity(192U);
    msg.setDestination(20194U);
    msg.setDestinationEntity(228U);
    msg.mcount = 246U;
    msg.mnames.assign("FEDDMELJWDFSXWZOVSFBOWPYYUYIPDQNUNDBYRAXYRLKLAQQGCHJLSTNBAVAICKSATABNSCBZPZPDEW");
    msg.ecount = 19U;
    msg.enames.assign("BWUFEVEDJNXHVZXHWNYHNVZRLUZITPUZYZEVQULCKXXCTILFLWWMIJIQDRATWXUDQMJHSTYAAJWYWOTPJCWUEDRHKDIFPMVOEJ");
    msg.ccount = 188U;
    msg.cnames.assign("RZEQYRIMQJYXZTQFGPDNJNSCXCGZVVCNZAPXKPKGOTBTQVQXJKWSHSVVLMNUNUDBBSSHUHRDOEFRJZYJYWQUQWLVTRVMPJLRUXVCJCXOHGTCUUFLIFKMHZHNOOMDHOLZDFXJFMRMWUEKSNYVIRHUPPYIAOCTGTYLWOASZAILFPZQPHBCIGLPSVYTWYNADCELNAFXGEA");
    msg.last_error.assign("CPZRSFWRLASMKIOQBZWAYAZDUAHQGERHGDCPWJYFLYTBDDPPBMKYWXOKHDUFFV");
    msg.last_error_time = 0.6053402842181811;

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
    msg.setTimeStamp(0.9820526235946904);
    msg.setSource(45325U);
    msg.setSourceEntity(253U);
    msg.setDestination(28867U);
    msg.setDestinationEntity(91U);
    msg.mcount = 3U;
    msg.mnames.assign("VOYTGVXHEKLZURJABGXEPVYVJKQBMVIICRGTYFIABLMPMF");
    msg.ecount = 39U;
    msg.enames.assign("JJKFLAULKFUENWVICCZLEDXPKOBIKNZFDYGCSNWBPHRZEPHKDNGANAQKOETEQVZGYPTULJGDCDZOEDSQQFBRGMMJVIHWHLZDXNREYXAFXIBQNYJXDZBIKOJSYAQMWPRMYLFQVAMWBPAHRAGCRURBVEYGBTXCMSAWUPDWYFMBEOJTIKOINTPSCFWGZUHMCXNSATVIQHM");
    msg.ccount = 179U;
    msg.cnames.assign("UYMELYTFTLUGCZVQJUZUVBZKSZRQKKZVGPNVYF");
    msg.last_error.assign("KXXRFLAJNPRRIRAGATLAIYRKMYQTDSPCCNXSBCVUBYQWFMGMUEJMLYVSQZWKMERYZRWOCCZXPHVGTHSYFYROWFXDOZDUOHHTILACGLLCFJGMCPMBJVEJSZPFVDSOBISAKMNHUAKOPMTNEZIQWXNNLHQHBLFRZKZVJBUE");
    msg.last_error_time = 0.8146040044893459;

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
    msg.setTimeStamp(0.9932006458364268);
    msg.setSource(59013U);
    msg.setSourceEntity(176U);
    msg.setDestination(8681U);
    msg.setDestinationEntity(96U);
    msg.mcount = 19U;
    msg.mnames.assign("RQECOSLXANSGYEDOYKQYBDMZDMTWBWRNFCODSHCYPUWUOAVTXCGBWJPLPHSLDBQNROJWYCTDHGNHDBPIONQVIXIFFAVZMXDSHUV");
    msg.ecount = 4U;
    msg.enames.assign("AQXCRQRYXJORLAUBGBIBMVVTKEDJAFCQWLMZJGNFLLURHQPGGKTVAURSSHUZCXKHGDCPCROXMPCIQPOTPXTELBSESGJOQSXLFF");
    msg.ccount = 104U;
    msg.cnames.assign("BXCZLHTQIZXAVFIIDNMXLPUSNUHKITQVVJHYTQJVGLVYDLPVNGXSHDYVQGHJAYMRWSTZUFERHLDPKORUKVVDBRLNOGLRPPWMUEAWRZFQSOBIUABCEYWKPRFEWBDSYCYBYGUXAHOZJOLFNKZBSQCFYNTYQFDCQCEQNWTZOQEAHCFOUTA");
    msg.last_error.assign("CJDYMWGTQSGHTIUGZACLRAEHCMSRFNXQXJJQFQXOTBLOTHTEJISNZGLMJRPNINXGTCKKWBRCJHVIGCYMSBTADUIMFKRAJDKEVHDFBPBOSAAPVLWWFWJDEPCAXUMXPODVRELNVURELFXTYYEFKZZLHWRQOHALYTXGKUOJYWGVBUKHSXWZGIWVIEDKU");
    msg.last_error_time = 0.706167495252867;

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
    msg.setTimeStamp(0.18417689355373856);
    msg.setSource(25894U);
    msg.setSourceEntity(214U);
    msg.setDestination(26442U);
    msg.setDestinationEntity(22U);
    msg.mask = 248U;
    msg.max_depth = 0.6500918893779011;
    msg.min_altitude = 0.5969080478085919;
    msg.max_altitude = 0.5572050437171424;
    msg.min_speed = 0.2960254305728849;
    msg.max_speed = 0.6561351877034038;
    msg.max_vrate = 0.5916267642799733;
    msg.lat = 0.6171444762105817;
    msg.lon = 0.27792471229363136;
    msg.orientation = 0.7111760627861099;
    msg.width = 0.8461991747353533;
    msg.length = 0.5082136210192605;

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
    msg.setTimeStamp(0.843778002313506);
    msg.setSource(17497U);
    msg.setSourceEntity(143U);
    msg.setDestination(35498U);
    msg.setDestinationEntity(36U);
    msg.mask = 174U;
    msg.max_depth = 0.8147051240145564;
    msg.min_altitude = 0.9054553715607413;
    msg.max_altitude = 0.352614270439331;
    msg.min_speed = 0.9868713562922079;
    msg.max_speed = 0.6341112762196701;
    msg.max_vrate = 0.2942923681681602;
    msg.lat = 0.17489816691656856;
    msg.lon = 0.8333661851574712;
    msg.orientation = 0.7193882107878217;
    msg.width = 0.17904155044588632;
    msg.length = 0.050734054025869835;

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
    msg.setTimeStamp(0.005639867717406766);
    msg.setSource(811U);
    msg.setSourceEntity(44U);
    msg.setDestination(11382U);
    msg.setDestinationEntity(151U);
    msg.mask = 90U;
    msg.max_depth = 0.17566638283395075;
    msg.min_altitude = 0.6503814128248464;
    msg.max_altitude = 0.6273992852289787;
    msg.min_speed = 0.8463482399091895;
    msg.max_speed = 0.32891331430302406;
    msg.max_vrate = 0.5902077049974033;
    msg.lat = 0.09127554156099638;
    msg.lon = 0.5771900644700959;
    msg.orientation = 0.4821061986672259;
    msg.width = 0.70945530169736;
    msg.length = 0.9089482651775932;

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
    msg.setTimeStamp(0.8545947220057504);
    msg.setSource(25099U);
    msg.setSourceEntity(116U);
    msg.setDestination(13909U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.9271061513915627);
    msg.setSource(17980U);
    msg.setSourceEntity(44U);
    msg.setDestination(34404U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.715373754900801);
    msg.setSource(35971U);
    msg.setSourceEntity(159U);
    msg.setDestination(25448U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.9078127194043794);
    msg.setSource(35043U);
    msg.setSourceEntity(110U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(133U);
    msg.duration = 27895U;

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
    msg.setTimeStamp(0.9786698769420131);
    msg.setSource(31004U);
    msg.setSourceEntity(162U);
    msg.setDestination(17986U);
    msg.setDestinationEntity(157U);
    msg.duration = 23777U;

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
    msg.setTimeStamp(0.4173806453165435);
    msg.setSource(26223U);
    msg.setSourceEntity(254U);
    msg.setDestination(58725U);
    msg.setDestinationEntity(219U);
    msg.duration = 16605U;

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
    msg.setTimeStamp(0.096197511747251);
    msg.setSource(1803U);
    msg.setSourceEntity(250U);
    msg.setDestination(22773U);
    msg.setDestinationEntity(175U);
    msg.enable = 103U;
    msg.mask = 3866924238U;
    msg.scope_ref = 0.517183890751182;

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
    msg.setTimeStamp(0.5044102658400429);
    msg.setSource(22547U);
    msg.setSourceEntity(211U);
    msg.setDestination(36824U);
    msg.setDestinationEntity(248U);
    msg.enable = 131U;
    msg.mask = 1297921166U;
    msg.scope_ref = 0.42049698413740644;

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
    msg.setTimeStamp(0.018929976160474205);
    msg.setSource(5796U);
    msg.setSourceEntity(16U);
    msg.setDestination(12131U);
    msg.setDestinationEntity(116U);
    msg.enable = 63U;
    msg.mask = 2855740491U;
    msg.scope_ref = 0.49714094111078444;

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
    msg.setTimeStamp(0.8153964161519539);
    msg.setSource(26394U);
    msg.setSourceEntity(73U);
    msg.setDestination(37448U);
    msg.setDestinationEntity(165U);
    msg.medium = 205U;

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
    msg.setTimeStamp(0.2723680890228035);
    msg.setSource(62644U);
    msg.setSourceEntity(159U);
    msg.setDestination(570U);
    msg.setDestinationEntity(75U);
    msg.medium = 94U;

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
    msg.setTimeStamp(0.3491282947694886);
    msg.setSource(5357U);
    msg.setSourceEntity(184U);
    msg.setDestination(35474U);
    msg.setDestinationEntity(253U);
    msg.medium = 165U;

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
    msg.setTimeStamp(0.18967860683875004);
    msg.setSource(11954U);
    msg.setSourceEntity(161U);
    msg.setDestination(65485U);
    msg.setDestinationEntity(244U);
    msg.value = 0.07095300899749724;
    msg.type = 174U;

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
    msg.setTimeStamp(0.6459682007717255);
    msg.setSource(32084U);
    msg.setSourceEntity(171U);
    msg.setDestination(65289U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5476555271767064;
    msg.type = 57U;

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
    msg.setTimeStamp(0.36347199792705165);
    msg.setSource(12233U);
    msg.setSourceEntity(212U);
    msg.setDestination(60920U);
    msg.setDestinationEntity(173U);
    msg.value = 0.4273492293853157;
    msg.type = 30U;

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
    msg.setTimeStamp(0.41556710987715895);
    msg.setSource(60744U);
    msg.setSourceEntity(218U);
    msg.setDestination(22442U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.3855918651041065);
    msg.setSource(32969U);
    msg.setSourceEntity(192U);
    msg.setDestination(21925U);
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
    msg.setTimeStamp(0.1070200606209819);
    msg.setSource(61778U);
    msg.setSourceEntity(151U);
    msg.setDestination(9017U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.46441657719069385);
    msg.setSource(47021U);
    msg.setSourceEntity(237U);
    msg.setDestination(33953U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("OUEIWJOVELGTKBWGHMUXGOYXBKZBHPFCAFEWRKNYAJQSNPLBUXALZCJKRRPYBLMFIVAAYVOKDFVYHDKCCOQWLWQQZGQVOEZSWDQIVRSZWUNIXPNTXXHJXGCCESCODRNNMMNUGJQJZSOJYYEFHIQRFE");
    msg.description.assign("RENOIHPFAKJKJMNQOSETLAQBCGPRROAKYFLAFJXEYUNOQLJXYEBIKJRVHNYTFMHLSFVYIYVTHBXQADUUYNQKKDUPVRCQBEMCUQGVCXVOVOIXZVFWCWGUGJGRUPWBSMGCOIBOPFWKQNNWJCOLALIOGUWEGNTDDEHTBWMPBXWZFDACSUMTDIKM");
    msg.vnamespace.assign("NSLSJYJWEKZVSEPZQUKJVEPAHYDVAOONEATFQUQQHCMJOQFRFBCP");
    msg.start_man_id.assign("AHZRNEACTBEHJRLFEWXPBFOPKMUTUZJMESBUPDLMOJMRRWQAANBZAGXRYFZMASONCVDKSICDPYVOVBZIIAKISOELTPVBYLLVUCCCXYHTHZUEADQYTWVPGOVMVNHPKHXKRFZJKZLLMMXSUSFIJZSYNHFEDYFPMKQJGTQWBKNXOXIIDWNDGODNGDLEHTGBIOPTJWZCYNCUESBTVN");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.5267513981304738;
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
    msg.setTimeStamp(0.14937602279057216);
    msg.setSource(27697U);
    msg.setSourceEntity(15U);
    msg.setDestination(41881U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("NZQVLAVMNZDJOEZYUNKMUXWKSBHCONIDJXEUBCNSGVDWQCXUTVBGFKDIHSJGACIXSTAVOLWUSRFWXVSBKJNCXHWEJAPRWZQTLDJZIYZHTGZXBWFGGFYQPIMOLXQCDXUPPHURCEKPYOEYKDOJZFVTIHMRTARCLPQTIBAMEHYHOEVYELNOARJHMRPTPSMSTAFJEBWKQGCCXIRZELDAIJL");
    msg.description.assign("JRNRITXILFXWZCAXJIAMGDOTMQKDGWZGPRFFDPDQRPNFGCVCYBERVMBUVGMAUVNCLNONZOHQGGEWKXGHZDEPPMMXTHUHBZOZCHRKGTDVKIRZLLDEAYZAVIBXHYEOFEBFYNTQWLQLCJDEVSLMTEXMUGSFEKQJMSYRUUJMNSF");
    msg.vnamespace.assign("GUFZJHDJZGNNEBNEXWLYKYUOWORSTDKTALIGIBRRJPAXQRMFXNOXESYAOOSUUBQGREWHWYEMQISTKGJVUSCSCDCZPMXNPLHHHFIZRBFXCJMPLMIDKDNVREGTSBSYIZJACZFVKAJKQRZBMCHIIESOULZPVNTMVMFBVPMTJNQDWWNXXLGHXHEOCFYCCDBKDWTGYAGKAWPUPRHLXQOIRNFQVPAQFAZKWVCOTMVUEL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GVGEMELDERPDBBUEVMAMGNDGKWQNAFUPYFVAFXWRZXJOCQIAERYHSUONFKWAZNGNRVPWGBOHTSOVODBMLLRXPANOUYSISNWDNCXLPUKWQPTEKXQRIHCIHQUPCTMCFJHBJSTIBIKLRYVXEHTJIQKQDERCRGAKBNSFTMDLXZZULLYJDHJVDJPQVZYFZYFKPCTWMFVXOGTZAHGKMCXZ");
    tmp_msg_0.value.assign("BLHFZGHUQSQIIZXIJFNAKSKQVPCXUSGAHBMVYLXZNHLBRSKSSGZCJGLMAECUNIXHHDTOIFIUTNWAYWTKFOOYPKQKQBBR");
    tmp_msg_0.type = 196U;
    tmp_msg_0.access = 214U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ITWJLYFPZBIFGOIBHPHJHMOODHGNDHBCHXAMVYRUBEZCXTQLELMFOYOQBLLIJVZPANAEJAAKVMPZVNNKPYVQKSEPZMQUPTMBDEJFNMOXDKZBXVYSPPWAJWKLIAMZXHQCAWTIMRZGUUCQSFFYXBONHGYEWDXKFLDCKRRYJNQCVGBSWTPLGTDEXTFROSFAQGOZIDUTURUOCSETGRRVACWKZSHKWNDLJRUEIHRXIYMJKGJTCWXNDQWYVFVBUSLGEC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MBORWBDYXVIKICHIHOKDNDIHRKGTDPPRCYCAHJYVBELKSFLDVEOXZBTJWWNODKQCHRRVMFAXGVNDGFITRICPYLFZRATUZLUHQMVCEZEZUGDWSUVGSMIQZRVBGWJABEJZYJOABPOUAONMAMJHXHWYGNXYPLOEUIUUSMYHPLNYDCKZEQQJLASDTKQSEKXGXMCVQPSTNOGCNQXH");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 18971U;
    tmp_tmp_msg_1_0.name.assign("FERNVCQWIUFHNP");
    tmp_tmp_msg_1_0.custom.assign("HKLICOWACXMJHTUBWEKZMELPBZUANVJMOGPSJILXGUALYFPTUIFFDBPUGOACVAUKVHQISVXKTUZZBTSSTTGYICCKNV");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FollowTrajectory tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 22840U;
    tmp_tmp_msg_1_1.lat = 0.6323679483767627;
    tmp_tmp_msg_1_1.lon = 0.7427811039276531;
    tmp_tmp_msg_1_1.z = 0.6065000024364319;
    tmp_tmp_msg_1_1.z_units = 238U;
    tmp_tmp_msg_1_1.speed = 0.8481594795817512;
    tmp_tmp_msg_1_1.speed_units = 88U;
    tmp_tmp_msg_1_1.custom.assign("PYARQORIKFGDSNIWOMQKNGBLTTFJPOZMBOIQPWRYKJJUWUKXGCPCRKSZMANBDLNDBEAADATLVGHRBSWDPJIMVXTFBESYMTUZPKSYHUEHYMKAGZWGQDJDULBYP");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TFJTDYZCPCGUKUVIGKOPMUNFKWSFVONETKTOLFTDRBHAMMZZKFJNB");
    tmp_msg_2.dest_man.assign("WOCNQMHNXKTEBIJRXDAMBRBXXYLJKJEBASCEZHQVTSVPOYZNYLMIKHJAUELOSOZWRIYRIDZVSFPOUWVWHOCEHUVDHWUUDBJONNZRKQDWTMQWPTMFIIKUQYBQMZXTKHGXGVQPMFYFKIFGURMNXUXZHDLFEPATYNTQTPJSFKFVOAPTBLEMVSCLREWYADWLALKPRRIEJQZJEVLASVCYCSGJTOGGQGCIDAUDMNFPDBIOXSGFWC");
    tmp_msg_2.conditions.assign("LNPMVLDOQBSNDOKLYPFSWUSKBEVSAQUFWIUROAHOEAWCMIJECARBHQVAIPEYDMLLMJLJOZFWKHKGZTNTSRDGYAOECIJBFNDRYRXOINUVDGBYJNJIPZJYSUCNKBSHTJTHKMQLPTXMXTCYHXVLOGGRHOFAVGSJYNZFECCWPUSVCDI");
    IMC::EntityParameters tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.name.assign("OMRXUTBTNAZFRZPWVNDWZQRYQHQMPYYKCJWGOIZDPKEBJLLOBGLVISFFXTCYZVHKOIKHXSRZPHJNVSEMKFIOPLTHFYMOYLGGTQDYUCQXDSGYPCQCWUGJEEPZRLHWNUMPCCXDABRUJVAHANMWEUEOGBWMVIXKVBTKZMRSCLQIPQFELSFEMJUYAAGFICVXNTHNXKXLJUAJLDBWEWDBRVSAOEANBQ");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3128834435933001);
    msg.setSource(45721U);
    msg.setSourceEntity(110U);
    msg.setDestination(1749U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("XPRMIVGAREUGRUQKBPIEVXHCUWBACMSOJBMVOEIBAYVXONLLZHNGKNRAOTPNXFW");
    msg.description.assign("WVJOOTBEYUKEHFOBHBKXBQKPLIQCCXLVAAWPLIMSRYXRQXOYSHRSIEZPYALJPVQKLZRJRACCHUYMPICYUDNSPTBJPEBHVUHRUVRZDFEDWGEVGMTMCKJTILEFJXLZMJDKWUCOYGTPWDJNFDSHZNAFGMXASZFHQIHKRJZTFFEUVCBONAKVGMHAEWFGOUGSVXLVOYMI");
    msg.vnamespace.assign("IATLZDTPKKJDNGXCTUMRWPNMRQJKPGQHAQGWGJEXOQHXBNBCLWGTCNPYEVKMDCPMUQCKDCQVZDLVYWQPRVSUVNSPFCJYIFA");
    msg.start_man_id.assign("JVTWBKBONWVHO");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PHYWDKFWLZMDVJWJGPBTUVGQXGNJRIBVPOJASLAZQGQFKVLJRLMYNLALWEGJXAFDEYXIUXFIEPRQERSZREDNCYXLYWSPOBWECCGJUSKTJHZFMXEXYNBOVATYMDFFNSPFRUIIKKXZPKJAOYXYQOMDCKHSZOGHZWQCBEBKQHPKUKLQNYAHPRSXCZOTHMGRAVBVDZADDQUVITVSBTZAVSEOUORUCWWNHGIBFSEDI");
    tmp_msg_0.dest_man.assign("WWATCRUURXKBLYMOBVICURUXPEIQBUASGXNGVRJZFXZKHNGJCQJ");
    tmp_msg_0.conditions.assign("YATKNZFMOIUGZNNYLKDJUGKZHDUTHBUYDPSNTRPLQCQNIYEOEODVSFCYBYMCZWTYVFZFAWXLVSNGERUAKJABDCGXBEDMHQSBRUNCDPESBBWFGJWALPGKSLVPMVQEFMXCRTAMPICIXEJBMOXKLHOQURBYRC");
    msg.transitions.push_back(tmp_msg_0);
    IMC::PlanVariable tmp_msg_1;
    tmp_msg_1.name.assign("CSZKKGXPVMWMWEXYBOPTWJEESRHLXWCKBXUPJYOMFDQFH");
    tmp_msg_1.value.assign("ZJKRIKKULLHUTGFXCFWDSKRHIVPFUOBGQCQEENSEZTGTVWONJSXEDEHILVMPYBWXLVZQLQRWQBTJXGHMVTURIXBAILPPUUTCCQOFZSKJDBHJYDNPJKGPXFUYUIGHXIZFMLGOPMYDEELVMYKNMRCNPXNRAOF");
    tmp_msg_1.type = 161U;
    tmp_msg_1.access = 93U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PowerChannelControl tmp_msg_2;
    tmp_msg_2.name.assign("XAWXOAQQMAOUHHGZDZNZMSCGNZNCMZKREJVFKDDEBLBMAOWIBYZKUTJNTALQINEESHNBCYBTXCXB");
    tmp_msg_2.op = 200U;
    tmp_msg_2.sched_time = 0.6257521966029529;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.24948970687270888);
    msg.setSource(3488U);
    msg.setSourceEntity(26U);
    msg.setDestination(30724U);
    msg.setDestinationEntity(204U);
    msg.maneuver_id.assign("KUIXEGEJECDZZNINYDPPQYSHLGYUCSDVJTBSWJVVVUPWYMYHQGSYIDLTSTLURWHCPKKCMUFNXRPMKQTBWOBKUVYXZHHMDQEFHYMWWGZSNNXTQSLIPAKKIPMMB");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3730490122961413;
    tmp_tmp_msg_0_0.z_units = 218U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 64276U;
    tmp_msg_0.custom.assign("BBAARQQMXTSGBCGLSZILEALOZFPXSBHCCVYPEXGTDYMRFNIEKNYSKZPKRYAOKWBRJPMRNJKVTGOMXQNQHFBHUJTIKPTWEHXUTWUJUDWDGDVBNOCDYMONIHLVYFJTIGZVXSYDKLSYWGPRFFWUPCNQNNECQJRMEZWCAQAUIVGAZEVMXSEJLGCKWQBZZVVAQKUIWZZUHLESKSOMNBGORMHCDBOPXRXOJIUJOHQLFLAJWIIFPT");
    msg.data.set(tmp_msg_0);
    IMC::SetThrusterActuation tmp_msg_1;
    tmp_msg_1.id = 45U;
    tmp_msg_1.value = 0.16013605808299192;
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
    msg.setTimeStamp(0.25773943984219627);
    msg.setSource(51936U);
    msg.setSourceEntity(4U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(226U);
    msg.maneuver_id.assign("TGSPYCWAVDXYLLUPUFQXRJUZSPHYKBRKBOXEKTI");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.06701639027542938;
    tmp_msg_0.lon = 0.024479480325074077;
    tmp_msg_0.speed = 0.6125038448315522;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.duration = 63892U;
    tmp_msg_0.sys_a = 31277U;
    tmp_msg_0.sys_b = 153U;
    tmp_msg_0.move_threshold = 0.4383094903287911;
    msg.data.set(tmp_msg_0);
    IMC::AcousticRange tmp_msg_1;
    tmp_msg_1.address = 16U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredPath tmp_msg_2;
    tmp_msg_2.start_lat = 0.1211182839442565;
    tmp_msg_2.start_lon = 0.4760418765711023;
    tmp_msg_2.start_z = 0.0037285932115785902;
    tmp_msg_2.start_z_units = 95U;
    tmp_msg_2.end_lat = 0.07608892672546475;
    tmp_msg_2.end_lon = 0.5738081983507742;
    tmp_msg_2.end_z = 0.17944859762267307;
    tmp_msg_2.end_z_units = 204U;
    tmp_msg_2.speed = 0.166003639232417;
    tmp_msg_2.speed_units = 206U;
    tmp_msg_2.lradius = 0.39078578373743467;
    tmp_msg_2.flags = 25U;
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
    msg.setTimeStamp(0.7175480796678074);
    msg.setSource(32606U);
    msg.setSourceEntity(158U);
    msg.setDestination(59170U);
    msg.setDestinationEntity(85U);
    msg.maneuver_id.assign("OGCBPBBGGDXCCHYPLMUZNSVNRAJHLKWNKODEHZIKODZAQOHGUILTFBJYQWNSLQODRPJZUIFHKKWKKGELUCDAIZUIYXLWMDTFGIUOATPYYNRFOJQEVIHYHFLIMJMPYJRLCCSVVTBKDNSFHXPZROVSPNTJAKSBBTWCWSMBVYZTRWEQALUYDUHNITXWWRTOUVYMAVPEFCN");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 46637U;
    tmp_msg_0.lat = 0.5236977176441189;
    tmp_msg_0.lon = 0.3820558476998013;
    tmp_msg_0.z = 0.971194306337732;
    tmp_msg_0.z_units = 167U;
    tmp_msg_0.speed = 0.7776206458099694;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.custom.assign("IPRHREZUJPBDUTGVNMTRJORGDOMQZFPXEMSYTCPLMAEUWLSLUHBJQHKPNSUEYOHZXQGTMKVJJCVVUZOEAVWTYGTYULRAQNIUOCEPKQWUHCEDASXHEWDJQCAQNANMBRRYTVKXMNVFXPJBOAJTBFLCHCDLFDJWSGDQFFPNLSKYZWBXIMKGFGSCRBQHNRXZADJWSLPEUXTDFWDIFMBOGN");
    msg.data.set(tmp_msg_0);
    IMC::StorageUsage tmp_msg_1;
    tmp_msg_1.available = 253701092U;
    tmp_msg_1.value = 219U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::YoYo tmp_msg_2;
    tmp_msg_2.timeout = 61899U;
    tmp_msg_2.lat = 0.4001500149226068;
    tmp_msg_2.lon = 0.2854018779981108;
    tmp_msg_2.z = 0.6496217574211237;
    tmp_msg_2.z_units = 149U;
    tmp_msg_2.amplitude = 0.2418691127189747;
    tmp_msg_2.pitch = 0.7955754786154718;
    tmp_msg_2.speed = 0.40461019413819177;
    tmp_msg_2.speed_units = 236U;
    tmp_msg_2.custom.assign("AFAZRGOWKWFOWBNIKBRIOBWESBZXHXIUJJLXGCENCBXXCDOLFTMKGYENUDRSWHV");
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
    msg.setTimeStamp(0.17015994861017159);
    msg.setSource(39762U);
    msg.setSourceEntity(67U);
    msg.setDestination(28134U);
    msg.setDestinationEntity(77U);
    msg.source_man.assign("UCRVVQHUXKPRSGXQPSIBHWOIEWHOBREILPKWKPBCTYSLVUTAQV");
    msg.dest_man.assign("TZMPRBLWCXEGROCBYOMLJATECQPAEQQDESVXZEUXGIABLAKCWTHEWKDEBFFQBOXKSNNMDNDFIBSVJAKBJGZDKXJTMMRSAVHJOLLLWFZGYUHVIOTKCKCLPHUMVOTQYVSYNIUSDQEOR");
    msg.conditions.assign("PDDHYVBKRHKGNMOUKRRXFUMXJECXGMBVDJUMZGKELFNXTPFZCQXRYSJUGYENFAALNEZYXTWSABJSXPKTPRLPVCPOLQDCFZYLNKPUWVGRRBJKENIROUYVFXGTDBRWQQTFSWSINAGYAQCCMIZSBTVGQBLOEIHVCMTSQWCIPHHMUIHDKWAUFLVCJAXGDIHMHDAYXIJKUZEPPWWMVFTWTBOJSLOONTD");

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
    msg.setTimeStamp(0.07675023765182365);
    msg.setSource(34466U);
    msg.setSourceEntity(26U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(169U);
    msg.source_man.assign("YLKDHLKAIJNLTHQTTSQZWUCLMOBYIYBTMKPYCTRJCRKATBBPLKGYMMPOQOAVIMODLXVYBJRNFVWUXHELEETDUJHEZISPIVNSTBGUGNZHLMQZZWXSKJJBCCQCZUPGADQSWHCENCONYFFBBXZQVLPOEXRKJIDUFVEXHRWMJIZUWERAPOPXAUFRKOPASBLYSFRD");
    msg.dest_man.assign("AXFTNTFLSNMMFUGKQPACMVIJSMEAHCETCDWDGDRXXOTWO");
    msg.conditions.assign("OEHSYPNJLRQWVDINKTSYWLDZMEBIWBRIKNUBSIRTWGYRFQAPYELHOMKJERGAMDCZHKVAKRJTFJMSMNOTFFGOFLEXIWFFSKEDHXNUNWTCISHPDXIGLUOSHWBMOJFXQQPGDYZUPBVUAINMXGSTVLGMPRYCNPSBCPZRHVBOTUYCPXWTRIMZXXXNJZBHCQHMAAWYAGZBLVQBHXLKUTPICQTGJQUJOECDQRKZOYZFOFVEYDJDVAVEUSLJKDNQWAVLCG");

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
    msg.setTimeStamp(0.18930609447296276);
    msg.setSource(50302U);
    msg.setSourceEntity(60U);
    msg.setDestination(51331U);
    msg.setDestinationEntity(243U);
    msg.source_man.assign("ODJFXWRUNYRRPXDOQELKVUYNAZXLKQUGTKQESEEFFLXBFUKINVTAXGBVSKGPRNUIAMAHAVCKIRJLWWKGBDHSTVWSWEARZQJDEPPLGIHUCMOIFEXBJHYZTCPOLCWOQSMKEXMYPOJJXNIJFVCUPNCWZRQTIHSNHMEYTAJ");
    msg.dest_man.assign("OJPLFFABCILUMOBJCHISYNPBZHYFJFVCIGUEWWKALQGZKXGEYDOASSJSJRQRHYKVCILBDXSIUTHHNOOINGPNTCNAYJXMXSZWUEIFXSAOVGTBGAHLEQTUCYZJXEUOTOIWPZTMUPUQBNHMZBRB");
    msg.conditions.assign("BGPPOXUWKKKWZTMGMNZDYBAOFHDFSJVKYUHESTPEIIMHWTEBVRSOSCGGCHJXEPWNXAOBIDOZFXRILQRQHIDKVOXSYLLMMQYBHGDTSZFVUUSCCWACGMUTEDJQTYNHNNOASPTZXYIDYTYIJMIKCWLDUAVAPQNSBDCEQBPR");

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
    msg.setTimeStamp(0.7579637402094931);
    msg.setSource(53650U);
    msg.setSourceEntity(23U);
    msg.setDestination(35109U);
    msg.setDestinationEntity(221U);
    msg.command = 155U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VUUSZYTDEYZOYUPGEQOHXSXBQYTTPFVGYZWNSUGJFJKBTRJXOSPIUNRKOKMZIUUTLPLWMJPKRIMOAQHBCZ");
    tmp_msg_0.description.assign("BRSBRIZZPDLDHEHNWCFFBEGJRWCPUSFLCEKQTFWJXAALMHYASQGDOSDINNDUTAMCNEDBEROCPUBFGYIOWTMTQQSYYNZNKYRIWCKTHVTQXJJHAJLLREGWNIGQBVJUCQFX");
    tmp_msg_0.vnamespace.assign("YWIFBXHQDYSJITVVSAKLNJKSOHMLPOEDPNFYGZZQFCOLGBZRWLHCTJJIKOGTVTJUBASEAYUZCDPAMOIEBEQUHJRXWNSNB");
    tmp_msg_0.start_man_id.assign("PYMESNTYSBCDOEGAYZITEGWFFRYXILURQURBGVMZFMLAPNNQNAPWMEVAODVRIMJKMZXQTMSRINU");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("DEPDRBZSBWCMQUFSZDYNHIQKAGJHMVZRWRMENTPDJHKOBNQZTXWEOCONFLVIWURBJESOHNHKDOKLCYOWXHIMHXVASECWVFMBAMACLOXWGMIDFJZGWERFLLNNZPRQTNJPGDSWCOQLGTMERNJTEGZYSXYCIKPLAPFOLUUXFYSVSZSRJFTUGXYCBQDAZTQEPYGKVGRUKIBIPINKLILCXTVAQMUHTXWOKUJCYHJTP");
    tmp_tmp_msg_0_0.dest_man.assign("YQTCIHVVGLCDSSRAYTYGUKSNMBNVDMDORIESQLKSJVMDGULFKGRZUVORQKMQFOWPRQLNMJHRBVSERUCWMUDONRQXGDKRPCCAVZGULDEEAJFXOGXHINYEGXCGSRPTNXLLCNJIQYSLPAUMWSHZCEAHZPYZXLUXUDAFYPZWKZFPHSOZBVZ");
    tmp_tmp_msg_0_0.conditions.assign("DCAZBWRLCXOEFFAAXFMVSQVITMWBCCHIOTNRDRYXPKNCNBNHQQRRFUKEJ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DeviceState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.6665346404813376;
    tmp_tmp_msg_0_1.y = 0.12744660857699364;
    tmp_tmp_msg_0_1.z = 0.6790236183321819;
    tmp_tmp_msg_0_1.phi = 0.5827652855881206;
    tmp_tmp_msg_0_1.theta = 0.5505226273344505;
    tmp_tmp_msg_0_1.psi = 0.949873769037697;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.4515743593750686);
    msg.setSource(20583U);
    msg.setSourceEntity(37U);
    msg.setDestination(1458U);
    msg.setDestinationEntity(163U);
    msg.command = 12U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FCLPDYAJXBUQKYNHJZUEBMQRZOXQXZBEUMZGOHPTPCSUJHZSDIVZNCFMPSGAWDGPEEOISZLMYTBOWTSWOUTDCJKWSMRNOAVDKLBRBVYCVRCUGXJEDOYMVKPCAIQLSSMDIZILQNBVPRHLMRWSEETHWPFFKJLLTNERQNVJNFYBFYYGVNAHAIJCWBZAKHXCGGTRGKIQVATKBXUHESANZMILDHVQTJORKOIMHPIUDFXKYFGWLCDY");
    tmp_msg_0.description.assign("HDCCRKSEGZXVPWZIRBLAAIZUOAEOTNSHWIYYFJENUEEWSLVJOPQMPWJQMFXPTENLDLYGHXSYIXWDWKBZGLZOVXWSHRVTXJPQSPAAPFHRLJMZCYMRLXADKAOJYUVOZKPUXNBKMOBSJMCNZYCBDVQHQDGLIQIEOGNRBTBMFKBZHYZVPRHUBCNUOFAXHWWQIMXNSSBSTCKQCYVIYMREVFLCKVCTNFTDQHTRWEUAUGJPFMGLDGTKKGF");
    tmp_msg_0.vnamespace.assign("KEFDTVLWMSNJRPNUBZQGPLGCVIQISPCNYFPYMMNAYLOHICXXVSSWWDXYKWXWGNQLEHEDBZZMAVVTLAR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VMCLPANRXMZPOWYVEVUGBEZOILUJXACMNSXAPTIBVDSQRZBWURLOHXPEUJLXBLJEDKIHDKZJJGYDKIHURVUDXFLNLHOCYAUABRWCBJVCVLCQVYSRBKCZZQRSQHODIFRQTKGTYNFYDFGWEGYUWDBPPMMIFEUSRPTKJOOPENIUBNFKQZHQHYIWGODSJRMOTYWTSECMFJHLVNTTFCPSTOMJHFKYK");
    tmp_tmp_msg_0_0.value.assign("NDUXXRPWAZTJEUSOKPJPCSYRJXPQQAOYNIYSHMIRCW");
    tmp_tmp_msg_0_0.type = 17U;
    tmp_tmp_msg_0_0.access = 4U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YAWIPRZUYPRYWOZPYEJYNSYALPJRWIKCHMBZVOAIEKTJKJBHMQOUDYVSNYUJVIJCZRKIUDABANQDJIDZTEPSXPUTLAPXLSOIQCTGNGBVSXIBDQMCNBNRXFFNZDSFDGMPFJEOLAEUCDVVFSRULWOVSUXFBQLYPKKIHKVLMHWQNHTZBMRDWELIMBLCGTKGGOKGWCVCNGFHKYM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EOLPPNOOSYHBPSYCIGCHLMEQZNMJIVPXIWAXLIZHDKQMDNJOVRWRHCPIBWHDITKUXRMATVKQEOSFQXYWDXUDGAMQHUMZDYKJMOCUTSFEHABIDYKGECOWUGZHRE");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.05243602355242949;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9824265084611387;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9198615197788321;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 191U;
    tmp_tmp_tmp_msg_0_1_0.duration = 19481U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 49236U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 47235U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.9608476558002454;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Loiter tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 57441U;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.23493152029539976;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.6688973973413105;
    tmp_tmp_tmp_msg_0_1_1.z = 0.07033308036509045;
    tmp_tmp_tmp_msg_0_1_1.z_units = 117U;
    tmp_tmp_tmp_msg_0_1_1.duration = 47380U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.8976524311983556;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 242U;
    tmp_tmp_tmp_msg_0_1_1.type = 0U;
    tmp_tmp_tmp_msg_0_1_1.radius = 0.8109936335434865;
    tmp_tmp_tmp_msg_0_1_1.length = 0.27487784509007607;
    tmp_tmp_tmp_msg_0_1_1.bearing = 0.12444956298443055;
    tmp_tmp_tmp_msg_0_1_1.direction = 193U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("KSLEJGCOYAFDIKSPZQILRXHWLQYHDUCE");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("GLTNUUSTYDHJKTTHVDUHPVCAVRSMBMBQXTDXTCSHSPQCUOGVRJMNUXZJAYEXVTQONFQWAFEZXHFLOEHMEWEADPNYFIDZCJZKCRT");
    tmp_tmp_msg_0_2.dest_man.assign("CKHETMJQBVOGUWNMLARMAORPOBZVILTYBSZLDJGBEQNIEVDQYIZGARWKTXXSPJKFVELHVXGUYCSNBUHOJQQCABIYLXWJMXVYIPATUZWEAMUYEKDADXCLTNQOPIIMXFRKEIQUBMZYSHOJTPYDMSDDHVXSUVQFPHRPIFRRXZ");
    tmp_tmp_msg_0_2.conditions.assign("CAMJXIWJUGBFVSVCBQDQMVGDIZLRLYETNTBOUDUOASBHWPAYNILAIYYBNSMABFNKFPYLKHDQEWIZHJYMXIIRQVDOPNHZVRLR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SessionStatus tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sessid = 657708903U;
    tmp_tmp_msg_0_3.status = 192U;
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
    msg.setTimeStamp(0.128077483754664);
    msg.setSource(21583U);
    msg.setSourceEntity(15U);
    msg.setDestination(54570U);
    msg.setDestinationEntity(66U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IBCCYAGRYYWQYHDQLTEUWUYJSSIFNQGJDFJYFFOVMHJLBNDVSIUPWDXFLWHGTOYIGHJRBNGNICIOCZEBLEHXGGNENOEUDWTFRXVOZLVPPCSKVLMCMWHCZDAAPJQKHEQQGPMLAUJVXIXZFKPKMOCXBMZIUFBLGXPCKWHAOJAVJEZZRMSDUQCIBOHQRNXOFSTUTMWNMNWNRTPGKZLTWKDVKOTEBYSEPVBXRZSYRKDUQXPA");
    tmp_msg_0.description.assign("VJRBYVAQGRNUEYBEGIYOPOMADJEBFIEVQJHCXYIHDLWNCBOSRXANLBZROFEMMUCTUQZKSLJZDGWE");
    tmp_msg_0.vnamespace.assign("AYVNHPRCMSMFUBSZTDQYXFOAVMXDMJMIHNDEEFOUWKRODTNKIGBIXSVPKPVRQCBCOEFLTNQTDZLIGWXPYWUUWZWJHTBICAKLVZGFCZMGWIAIRKBNHGUEPBCGRXIHQQKLQLUEUFNTGTCUETIPSH");
    tmp_msg_0.start_man_id.assign("SGMOKKVTRARYJDEAESDLZDPJHBHHKRBNAZQGQXTBFKSDUTHMXBCSAYRSDRFVRMVJPNQFLQZZJNUQHDYMFVILNHEKEWNNCZILFUJLXEWWUJNDEXQLCVXVWIZQGABOPWOQHJSILAEOAUWSPCOY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("HXDYVHMKJTVMAKYFQCGEBBHVLCMECKGNKJOAUFCAAGEXXLOATZKDOPLWCJFMYXOGQIAVUIPAQQWHPCVYMITKASVVZGBWHKZNSDOHSXMIGPCJGZJOJJIJGNNYUPJXVBWBLMBXNRTXEDAPRUFZMQPIAPDISKROKUWISBCKNUFYLFNUZZHVTGDRFTFQQLXYSRMCZGERYZDEYHOLEQNQRUEUJYHNSFOEDLWBLTRWVHIRRWIEPCSWXBLQNT");
    tmp_tmp_msg_0_0.dest_man.assign("UNDLCDDFMSHSIKUJQRMNFVYJKOAEHGIKJYOLSYAXZGUZOEFWWBSEJBFBQJVDZGMCZMMHGNQDKPOICNMKWDJPAUVAIGLRLDYTZGVBJOSAHQJJBTQCUGFNUATVUBXSKKLCWDCIERURBXGWYOFHGHWOEHVYXNWNHIMOUBWPWMMTTCJSKCVNICZEPXLRPDHANOFYPPRAITPSRSZZIXLV");
    tmp_tmp_msg_0_0.conditions.assign("SDEOVLKWFBEKPRJAZPDSNYRDDBLVHNXXEJAFDSEWLYEACX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::GpsFixRejection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.utc_time = 0.9683312678094852;
    tmp_tmp_msg_0_1.reason = 56U;
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
    msg.setTimeStamp(0.012642125550504701);
    msg.setSource(14784U);
    msg.setSourceEntity(181U);
    msg.setDestination(39445U);
    msg.setDestinationEntity(240U);
    msg.state = 119U;
    msg.plan_id.assign("GPVHSPOOEPVUAXLBVQGTXBEIFDDVSYEEVTSLIGMFXNBODHHUHNJHFFNLQDAYHDBWYPOKBRHBBPQRWKSMMSXFAKWDIOTRJCBBQWWKNRLOIDQCKCEXZUJGXQJJSZLESFFQYDJYXZAGLGGHISLVZTAFNCPPANKCPKAADWHU");
    msg.comm_level = 127U;

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
    msg.setTimeStamp(0.5717163699377494);
    msg.setSource(8526U);
    msg.setSourceEntity(143U);
    msg.setDestination(43602U);
    msg.setDestinationEntity(150U);
    msg.state = 39U;
    msg.plan_id.assign("FQHRTSKJXNIYGQUJOMOSBXSRGHGATVFJDHLZXNGZKMVNWAIGODKYDFRCLVKOQCRRAIHXJTXMTNMPMUYKXGQTFCTMHWTEBRYJHJFHWQOLBQCPKKAJHXNOZUUHJPWNRMZLZAXSYLSUQPBOYVGVIWEPSIUQAQODEECPTIPJAWSMVCYGWEEZRILZ");
    msg.comm_level = 100U;

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
    msg.setTimeStamp(0.5582487767843405);
    msg.setSource(25430U);
    msg.setSourceEntity(120U);
    msg.setDestination(27260U);
    msg.setDestinationEntity(84U);
    msg.state = 106U;
    msg.plan_id.assign("JOEGARXNFVHMLYFZZVSFMRGCPQPOZUEQHLLOMDUOXUTRPJPWAWHXTNOUGXPWEBCHRVKIFSTINPXCNKIDNTIXWPYEMKMAGTRYWYCNQKZOBSKAVLQZDTWMLHVFFDZOADFAMLGQOJEZLNCTGSFSUSIDPLOPGJMGLCIUEQJRZJKKIXDTDUXEBVVCMAJKQHSQXUHIWRZYVRNSGYJWVUYDZAMKNOUJWBBXDNBHIB");
    msg.comm_level = 18U;

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
    msg.setTimeStamp(0.225111181661258);
    msg.setSource(64003U);
    msg.setSourceEntity(195U);
    msg.setDestination(47055U);
    msg.setDestinationEntity(84U);
    msg.type = 10U;
    msg.op = 194U;
    msg.request_id = 49225U;
    msg.plan_id.assign("XUIFWULECIPRSMRPDCBNWHTQBDNFUWRGFCZLAALPXKFUASNWGUVHVAKARIANMLUQWZYOCHEBHJSKJSVWTNFMYGTWRLUHZFDJXHENVYPVCHGSPPMGHFRYTTAEOHOLOGUQBYNOCYLQAGKIPFAXRZJEZZDMVYVPFSJCENBOINYXBGJNBIW");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 33U;
    tmp_msg_0.mask = 2823741968U;
    tmp_msg_0.scope_ref = 0.27123090571784847;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PTTSHIZQMOHNTEJVQCZVZDCZRFXFTLYTLNOYFNWQICJWIXWKWACRGYTDRICVNAIAWQVMSYZUIQMTDJGUDQXDMFCSBVVYEPUFQBJPVHNGXHTKYBGXLCEALRAADSEWSRSUVMAEKKRXUNNDKBRWMXAYEAMMWJRFKTKPNFQGXCYBJMOONHOWUEOIEZJKHCOSBELE");

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
    msg.setTimeStamp(0.4818900767954022);
    msg.setSource(41095U);
    msg.setSourceEntity(230U);
    msg.setDestination(15131U);
    msg.setDestinationEntity(140U);
    msg.type = 230U;
    msg.op = 192U;
    msg.request_id = 52050U;
    msg.plan_id.assign("FQCLLBAHOSXRMYYZLHJTMWKYKOCHHPHCRFFRVJKIGWQFVJZJWDMMAXDFQPZVPKSRBJZZNLICBMDPXHASSNDQXFZWNIMWBWOC");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 233055263U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MIJSVMGTVGQCKSDHHGDEULBRPDXQVXZEAZBUSXYSXLVRPAPAKJHCAHMODHHSLGFRGWQPSKEWESJQWTENVOPIWRIOCUOFBZKVUBINFUBYQHCFJTJMVWMKMYFZZTMEWTKIFRQSNVUXLOCIKJPJMHTLDPLZTNYXERUUCBNQYSIPWWPGNPVCEYDIBUXDQQORDKCRTEZGYGYNCLLAMZXFGJXVEMNLNTBSDWHNZFXLHIJWOQA");

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
    msg.setTimeStamp(0.9018342709781642);
    msg.setSource(65164U);
    msg.setSourceEntity(120U);
    msg.setDestination(34692U);
    msg.setDestinationEntity(108U);
    msg.type = 168U;
    msg.op = 43U;
    msg.request_id = 26770U;
    msg.plan_id.assign("NZNVNBDFRHBNUWWP");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 11U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WBVDFFLHHGTVCKOBPOALKOYABUDTMIGWNEOXAF");

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
    msg.setTimeStamp(0.5837512851116845);
    msg.setSource(54018U);
    msg.setSourceEntity(235U);
    msg.setDestination(33408U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 39330U;
    msg.plan_size = 4026287019U;
    msg.change_time = 0.10060305603117647;
    msg.change_sid = 16095U;
    msg.change_sname.assign("ZCLDDOVMXQCKYEJBNUUPGKMOFGAITSVHPMOFXJBYHTXXQPRQCOCSAWNLHXNWDMEDIGLFECCQWPJRWKUGUXTIVZWURJTHHKLIOQMDAXYFLEFOQIBYOLHTEVYNBDKBYNJRPZKVZVSOUEAAADPCSZFULTKMGZL");
    const char tmp_msg_0[] = {125, -104, -125, 70, -113, -26, -62, -66, -24, 81, 116, -74, -57, 105, 11, 95, 50, -121, 119, 89, 83, 28, -123, 9, 66, 56, 83, 96, 104, -1, -82, 18, -108, 92, -39, -17, -124, 90, -119, 41, 0, 46, -45, 109, 78, -38, -90, 47};
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
    msg.setTimeStamp(0.9222326047483925);
    msg.setSource(45282U);
    msg.setSourceEntity(122U);
    msg.setDestination(36064U);
    msg.setDestinationEntity(124U);
    msg.plan_count = 30576U;
    msg.plan_size = 4101764289U;
    msg.change_time = 0.031531034480799525;
    msg.change_sid = 17024U;
    msg.change_sname.assign("DTGYLHLEFAQKIZAQHFIBNUKVYSPOYEUVWDZUYDQLIDSJDSUZEMLRQUMOXMIRYJKEILBFTDZXPKYTLZRLTEJHGJHWILEQLPFZCYKKZXBXOAKWTVGXIKNRQRKCEEGNFWFBMCFMVRTBPHUVYPHGDAACCXGBCOXSRSOEPMHMZCBKDNBDOWFSNQHACJTAPAOVPAIIYW");
    const char tmp_msg_0[] = {-26, -108, -1, -64, 5, -68, 14, -58, 82, 78, -63, 61, 50, 61, -4, -116, -66, -112, 53, -109, -2, 102, 50, -110, -29, 16, -104, 6, 44, -4, -84, -113, -3, 93, 97, -48, 71, -119, -97, -105, -93, 6, 20, -125, 47, -98, 28, -39, -68, 63, 123, -103, 112, 7, 10, 49, 37, 101, 125, 124, 29, -63, 81, -38, 28, 93, -85, -114, -32, -106, -103, 47, -14, -23, -32, 19, 34, 103, 15, -41, 98, -109, -19, 100, -42, -64, 2, -82, -40, -123, -4, 94, -101, -114, -99, -36, 79, 86, -20, 89, 122, 91, 103, 0, -75, -88, -92, 105, -94, 56, 33, 42, -92, -72, 42, -39, 17, 58, -71, 89, -4, -18, 68, -120, 17, -72, 35, 38, -98, -18, -18, -57, 50, 62, -75, -70, -54, -63, -78, -57, -19, -118, -115, 40, -3, -94, -41, -118, 64, -26, -46, 24, -80, -106, 124, 29, -53, 111, -111, -6, -91, 82, 103, 65, -70, 25, -82, 11, 41, 16, -48, 55, 2, -34, 20, -106, 17, -17, -2, -33, 48, 29, 87};
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
    msg.setTimeStamp(0.49847559288554666);
    msg.setSource(61228U);
    msg.setSourceEntity(240U);
    msg.setDestination(44276U);
    msg.setDestinationEntity(200U);
    msg.plan_count = 9258U;
    msg.plan_size = 4017621489U;
    msg.change_time = 0.5023539514883548;
    msg.change_sid = 43322U;
    msg.change_sname.assign("ZRPDBMUNYYTXVZYOAXSMCXOVFLURTGEMCJFCUAFNGSVFMHGJBJGXXZEWIJYXHZIAQREPCNBFGODWLLGDPUXOFLOQLPQBNXME");
    const char tmp_msg_0[] = {27, -17, 36, 79, -10, 114, 28, -113, 105, 36, 73, -99, 57, -81, -113, 83, 78, 77, 42, -125, -69, 120, 12, 60, 119, -63, 84, -17, 31, -58, -94, -63, -83, 43, -36, -61, -16, 52, 77, 73, -125, 124, 59, -102, 39, -36, -19, 34, 2, -41, 20, -2, 70, 123, 3, -30, -89, -62, -22, 32, 46, -56, 93, 90, 125, 17, 52, 85, -90, 104, 22, 126, 10, 43, 108, 31, 17, -113, 30, 1, -94, 8, 84, 5, 26, 43, 96, -113, -90, -86, -103, -38, 91, -83, 104, -1, -15, -69, 28, -12, 38, -14, 38, 6, 30, 87, -25, -115, -35, 46, -84, -3, 122, 98, -57, 53, 73, -12, -117, -69, -34, 39, 55, 37, 103, 104, -120, 7, 23, 119, -95, 21, 90, -89, -97, 41, -73, -67, 45, 32, 14, 39, 4, 18, -107, 53, 33, 108, -24, -25, -35, -49, 113, 85, 61, 123, 118, 102, 123, 27, 69, -110, -94, -85, -38, -86, -41, 53, 34, 30, -45, -106, -54, 104, -52};
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
    msg.setTimeStamp(0.4356242921072925);
    msg.setSource(33778U);
    msg.setSourceEntity(58U);
    msg.setDestination(2414U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("IXJHMACHZYFNPPNIUZNRSZLCUAPABWFXEDOBWTJJPBYBIOZVEXXTABRGEEFIHHQJLGZM");
    msg.plan_size = 9029U;
    msg.change_time = 0.08631043241254399;
    msg.change_sid = 8983U;
    msg.change_sname.assign("JWPELBHUBHXVUSFGLORCUKNOWVHYGQSGCCYNABFIZGENRYSHJFAGEDSCOSINMWPRQKALHGEMKIEFHMWMFDZFKJYYBKQUGYWDBEYUYHPHQIDVUXTTJRKAZTEBZRLIBSFBXYGAOTPTVXLGXNBZHDUXHZSARAOZAVCKDYOQTOQVWNMANOWTPDIUQFXXQKG");
    const char tmp_msg_0[] = {-98, 6, 50, 57, -106, 77, -31, -95, -95, -7, 75, 50, 21, -117, -62, -44, 4, -104, -70, -84, 89, 57, 66, -118, 1, 58, 20, -50, -9, 120, 53, -59, 115, 90, 60, -92, 94, 37, -6, -63, 10, 118, 89, 99, 36, 43, -44, -21, -120, 77, -128, -83, 24, 0, -70, 17, -96, 18, 4, -9, 105, -12, -88, -118, 29, 105, 7, -64, 4, 48, -97, 56, -56, -62, -91, 26, -27, -84, 42, 78, -17, -103, -107, -53, 68, 39, 41, -121, -31, -8, -2, 100, -39, -105, -65, 124, -10, 108, -67, -106, -74, -118, -127, -23, 38, -26, 13, -94, -88, 4, 53, 97, 44, -98, 39, -106, -128};
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
    msg.setTimeStamp(0.5955542666102256);
    msg.setSource(23447U);
    msg.setSourceEntity(169U);
    msg.setDestination(34196U);
    msg.setDestinationEntity(40U);
    msg.plan_id.assign("QQVZHUFGQHSYVWFYRDAHMZOVRZZSTJSCYMLWUEEGKZYHFDFAZOGRZBPEBWBOQOCCISSKSDATSJVMTEAMSALYJVGVOBWLNFJGDDQKDJKIHYLTDBQPTXLIYIK");
    msg.plan_size = 35816U;
    msg.change_time = 0.8617138185767642;
    msg.change_sid = 33938U;
    msg.change_sname.assign("RUCUMDGNKKFRFMLFUWBKWVMERLLEHJTJSTNCZBXPOXWCEFFUPOAAFVDWQTWN");
    const char tmp_msg_0[] = {-123, 103, -52, 112, -106, 115, 86, 126, -97, 126, 49, 34, 51, -82, 91, 7, 50, -36, -93, -76, -18, -96, -74, 107, -89, 71, -46, 31, -53, -102, -26, -105, -43, -68, -38, -84, 85, 18, -91, -80, 112, 82, -35, -41, -98, 123, -59, -15, -84, -37, 87, 77, -87, 113, -43, -87, -122, 23, -119, 88, 73, -37, -35, -118, -2, -60, -68, 101, 25, 104, -96, -89, 47, 31, 72, -92, -101, 69, -126, 30, -2, -28, -52, 61, -42, -84, 98, -64, -35, -51, -120, -88, 3, 18, -76, -66, 21, -52, -55, 93, -58, -101, -119, -80, -22, 59, 71, -88, 23, -104, -105, -38, 99, 67, 114, -124, -38, 43, 67, 37, 74, -101, 75, 96, -88, 117, -23, 113, -68, -67, -1, 78, 82, -53, 123, 56, 98, -123, -19, 124, 37, -7, -34, 9, 53, 70, 64, 69, -58, -39, 89, 55, -54, -22, 43, -56, -39, -45, 125, 61, 51, 61, -83, -93, -112, 40, 21, -67, -69, 24, -61, 21, 34, 124, 39, -27, 105, 45, 119, 102, -118, 49, -13, -51, 3, -53, 77, 71, 101, 49, 124, -36, -21, -73, -55, 11, 77, 46, -75, -122, 109, -103, -75, -71, -13, 26, 112, 28, -44, -37, 40, -113, 26, -85, -67, 96, 119, 8, -15, 74, 3, 16, 96, -74, 64};
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
    msg.setTimeStamp(0.6274554047312837);
    msg.setSource(12671U);
    msg.setSourceEntity(196U);
    msg.setDestination(19337U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("ZGGBJGOSWCTDXTEPXZHEVLWPBZIZYONYEUHTMVJBRMUUPTJVAAGSRVXYSSKDHUMMMHBLKECDLRANMRNEEDAUTXOSNYJHLLMLVDQJVKJIOCXJTUZJKUJGFNIQWBBIILOSRUXHBZFHZYW");
    msg.plan_size = 51732U;
    msg.change_time = 0.4637038350927054;
    msg.change_sid = 55442U;
    msg.change_sname.assign("DVULHRCKWELHOFGILHOQBJGSBGFUUHTGDKWNUEVXWSTGWXNYVVRPBBXALPILFSCYPYOWLERIKKKHUMSQUVEKXCRXTPASCELKPSIXD");
    const char tmp_msg_0[] = {-94, 5, 54, -27, 109, -21, 11, 5, 94, 59, -125, -126, -15, -86, 43, -119, -21, -8, 70, 52, 56, -121, -125, -27, 87, -88, -93, 43, -109, 86, 79, -56, -83, 119, -115, 31, 111, -4, 35, 26, 42, -33, -61, -92, -113, 39, -16, -59, -3, -86, -46, -127, -126, 114, 71, 102, -49, -90, 46, 44, -59, 117, 100, -42, 32, -52, 97, -53, -115, -23, 46, 100, -14, 15, -36, 95, 114, -1, 51, 54, 53, 73, -3, 61, -104, 32, 51, 58, 53, 91, -47, -113, -19, 18, -16, 89, -45, 81, -57, 47, 62, 48, 118, 72, -84, -55, -34, 27, 35, 108, 26, -101, -112, 90, 45, -68, -31, -41, -63, 118, -89, -21, -124, 106, 52, -105, 108, 83, 76, 18, 90, -63, 112, 68, 48, -40, -74, -115, -67, 120, 125, 88, -116, -92, 93, -124, 96, -32, 99, -71, -107, -50, -114, 117, 95, 70, -73, 65, 107, -26, 1, 43, 111, 116, -25, -40, -124, -110, 101, 60, -48, -101, 39, -97, -71, 48, -103, 30, 93, -104, 29, 107, 40, 102, 114, 58, -110, -52, -17, -102, -44, -41, 111, -96, -119, 84, 110, 65};
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
    msg.setTimeStamp(0.5798622224096971);
    msg.setSource(28824U);
    msg.setSourceEntity(219U);
    msg.setDestination(34649U);
    msg.setDestinationEntity(39U);
    msg.type = 183U;
    msg.op = 176U;
    msg.request_id = 12688U;
    msg.plan_id.assign("OPJAOVRYIHWCBDRWVNWURQVFAEGYWQECLJOLWMNDPZECOLWFXCXNOUVBFQZQOPCAGMHPFRGGGDVVFQGLIDFHAOMZWBDSDIIALETHQZKFPDKSGCXVXUTFHZEUYRLTGSGIN");
    msg.flags = 7604U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.2713473469711971;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OFCCRYRWAFDIWNUGJWDZJISUYJIZFYVKRKWMPIXHHOWLRKLDMEAWR");

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
    msg.setTimeStamp(0.8984509342485685);
    msg.setSource(57016U);
    msg.setSourceEntity(163U);
    msg.setDestination(35722U);
    msg.setDestinationEntity(176U);
    msg.type = 139U;
    msg.op = 221U;
    msg.request_id = 61424U;
    msg.plan_id.assign("KEXNMBFZASWLOGPSNXHCD");
    msg.flags = 63108U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("EKCCEOUNZABZBUBHCRTBLWLSDXJWJNFDLEVHITNDCMWGEEFHZRHAUCCIDVOVDLFTHJKSARGPULVPHRGFABORXWAFNPSIUQXZAESYTDNRDOYXUXVWAMOBYHGWTWMGZKEONAFKRMJJCMXVITQQNUXCIRDEDTBBAHXRZKWMUQWXUTAZFLILPCQPOMZVYXGPJVKYSGYBTFMDKZPTEUKKOSNZQBMOYFJFCJVY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ODXGWPDBOONFJNCXDDVAKXVJYIVHQNQYEWKYALRTGBLKTLYCCRRNYVVWBIIDOMFLWGXPTXCLGCRKFTHLEZKWRPZECNKEUMLYZZYEOFBOZRQMKGHRTGDDPCRRXRIIJJMFASJGBJUWACIAFNKTBZJQPLMHGSGMHHVUEDLWTZGEQCPOYHQSSUEBXWNPSNADDASHPFQYWOUSAZQVZPJWSSUUNV");

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
    msg.setTimeStamp(0.35409748934071217);
    msg.setSource(30719U);
    msg.setSourceEntity(30U);
    msg.setDestination(2192U);
    msg.setDestinationEntity(107U);
    msg.type = 82U;
    msg.op = 235U;
    msg.request_id = 8790U;
    msg.plan_id.assign("VNMHUSGLZEPPIASLDILKQBVDNEVXRTTVTIMXVPJLEVYGUHPWJCNUQXYGXGFIJKAXIXFBYSQTMMSQQYYKEFBDNKOZUVALDLCRAOGMHBXSUINMPHHTNYKOQZROCINUHJBWRUJMFZDCMWCRPJWDIGEEZGLQQDXUOQTCABCMFDOWSOHGQUCGR");
    msg.flags = 52432U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 220U;
    tmp_msg_0.text.assign("QIWFWJVXKUZPUZOOOTVZRIWXRTKPBHEWBAKXCSFRECPTKDGLDUKNIXSOHCIJNQPDZDMFSKSDNYLMGPGLWPKCHMLYFRYYDPEXBIUMXXQUCQGYAALXCSCPETZMJNYQTRIABVHVOBMAVOWDNZTPUGBWJVGISWWKTSIYMZHCJGUNQJWFQTGDTQBYYDCEQXHYAIOHFXNEANJZVZEFULMEOREENFAANBSDLIOVUJABTJSJKSZUGRKLOMGVHLRBQHFF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EIQNIKWTLHIIMLWEPULFFXPWJEXGBJFIMGMURVODIWQYAGACAQRMAEXFLZPZQUHEJEOEZIJUYCWUX");

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
    msg.setTimeStamp(0.5595834486714611);
    msg.setSource(8033U);
    msg.setSourceEntity(211U);
    msg.setDestination(43396U);
    msg.setDestinationEntity(4U);
    msg.state = 159U;
    msg.plan_id.assign("PPBRULTQQRCSASSLTKNEIHVCMYLVQERRPUICHSQHYNNUPPEJBMYJRQLBHCUSYJYLMMIKIGOUBCHUAWDVNWZGHLKOXIXGWTMDMVN");
    msg.plan_eta = -1325155737;
    msg.plan_progress = 0.2678183311572516;
    msg.man_id.assign("IQIMEKXWCZPMMNSAUKZUDADNBYTLGSLWJSVSXJBDUXZOXZMGPMATPYVZRSURVWZGNMVFKSFRTAHNZMACZIEQIKGLNHCJTHUQJSUCBISOJBJLPEGLILOAPOXRDDXZCCIZYPFBUVPNOYYWXQECYKJJYDKVQLKPATKHOWRNJXOFNDALFJOEFDIAMGQQOBWGCRMXIPTEHFFXHEWCHFBQKGAIRTGE");
    msg.man_type = 59256U;
    msg.man_eta = -522069939;
    msg.last_outcome = 96U;

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
    msg.setTimeStamp(0.5226930250421898);
    msg.setSource(56826U);
    msg.setSourceEntity(194U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(254U);
    msg.state = 234U;
    msg.plan_id.assign("YIXOAZDTKZWMUODKZWQBURJSIIAKRLMNVJSANEZACISTCGACZEUMWTNDFWNXDXHKFZHLGRZUPDYLGHTEOMEIBOHNRIJMQXPYMBPLBPGLFUWBEEXTRJPCGRYEFEGAILFUCHKRVNDBSQWPUQVJMHJVHGOSISLSNFSTXHHCRVGAQUXJWYMAWUKPYBWDEPQVUZATXTPOJODPZHNTQVOYFQC");
    msg.plan_eta = 62440097;
    msg.plan_progress = 0.8482582837628182;
    msg.man_id.assign("AOVTKDDGDROADWAQNKAUIALHFJTRZUHZLTBFCVSGYDRKBTONVYMBWNXSEOTCISSHVZQJPJWFZWEBJMCWZCGVBBFGUWUSMLNXBNZXIHMEBITMVFLPSPEZLTJAPRAKDUJMUBYHULGPNHAKFOLCLNPSILJJEWTSKEHVQTPGCNCTJIQRMQPZWYHPIGQQUCZYRLYSFGVDOCEKAE");
    msg.man_type = 37930U;
    msg.man_eta = 1804620430;
    msg.last_outcome = 74U;

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
    msg.setTimeStamp(0.6066422900241255);
    msg.setSource(27849U);
    msg.setSourceEntity(116U);
    msg.setDestination(51263U);
    msg.setDestinationEntity(137U);
    msg.state = 218U;
    msg.plan_id.assign("OCJSHFAQMNUDOMVQDRUGWIMKPIMQFWNILGDUTKTUQOBGAWTRVGXXKVRTCYCLDZPMQLWLMAJTECWDERDEDKFTCPVICVUXSGXAYXBQOCHNNPODJLQHGYKWQKZPRNPLBIJPGCNZHSRVJNCXWAUHDVSWOEYYEPBSOPBXUDMRAIBIHOZBBKMUZFHFZXTVLPNBQOCRYSJOGHETMISKEHMAYFGLAFSLRWJZEFUSJWLZKFBHG");
    msg.plan_eta = 1130913538;
    msg.plan_progress = 0.7276611102044276;
    msg.man_id.assign("RZFDAHPHSJJPXHCWLXENBEZBJGIQZFNRSMYCYFOKGTIBZVBLAUTWFOXNTVAMLWQEAHHDISFIELKHDWRKMRFZYDDHKORGWCKVCOMT");
    msg.man_type = 20192U;
    msg.man_eta = 206737314;
    msg.last_outcome = 196U;

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
    msg.setTimeStamp(0.9114814930673469);
    msg.setSource(5648U);
    msg.setSourceEntity(64U);
    msg.setDestination(23262U);
    msg.setDestinationEntity(137U);
    msg.name.assign("VYZCWJFZBAXQKMYNRHUVOZUCCVKGFMSDHJXONWTOHULEGYWJNDDQGTACSCARCIPYYOKGIFWIPKVFYFAIRPWAZNJNBHMUYKIODBXWRENMVLSZTXWFTREUUYKJNKQVEGUPLSXQOTGFONXNRTKLQQTQOQLZQGSJZZJJBMMULGICUVE");
    msg.value.assign("FTZYVCJNLKCXMQAVWWQRMVUTTGYDLOCZKSXZYCGXXSCSUWOIEMKIOUCXZQMHYNILCPWNIDWATRVLPUAXYHUVASHEVXGRRSDPOWUBAXHKJYGBPGFVDOSFRNQSDUPLBJDUTWNELMORDADFPNAFDEXSZUQKZGYCAWKZGTOFDMBTKQJZEBBHSRONKJBEVMGRVTSHFYJHJOMJIIQYXWPRLIKMGNLLOEVPPFUGCQ");
    msg.type = 205U;
    msg.access = 6U;

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
    msg.setTimeStamp(0.22407325192080974);
    msg.setSource(1749U);
    msg.setSourceEntity(158U);
    msg.setDestination(42492U);
    msg.setDestinationEntity(53U);
    msg.name.assign("LFIHMIIUNUFTOPEEZLYXKOECHHXDFEOWSCNUTCYPBKLOODSQKPHGVCBBAXNGGFGNSBNIMPTKRTIGSIJZRDMPFASLWWVYMRGZVXRMBJLHCHCOPJRBOQUNIMYZK");
    msg.value.assign("RDBBSYPJCPLIHYOYKGJKVUOXDPNYZBSFMICHNXZYHIAMWMQLADPIBBBSRLVRERMLTNOKNFOLEEJDGFLZQCLHDMTUVWNUDQWZFUUFHBCTAYQVYSVRLMCVYZRINDHGXQJQJNWIQGUCFBBJVGOACMEXDEZOKZDQAHCMCLUQHWIXPTXJSLQJIWJSTIEWVEJFIRCOWBFGVAO");
    msg.type = 141U;
    msg.access = 237U;

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
    msg.setTimeStamp(0.7617147389724334);
    msg.setSource(19026U);
    msg.setSourceEntity(113U);
    msg.setDestination(46812U);
    msg.setDestinationEntity(212U);
    msg.name.assign("DJBCZBHOWRXFNSTPRGOKQKANLQWCQEVOCLWDOCUFWZJQAIDRMKWKFHJBPBTXUGHCBGWTMO");
    msg.value.assign("QSFHTBBXIKPQYSVUIJRGWTNYHWRLFTVSMVMGWXJDOXTFOVUHBOENZIMJMSXEUJAYQFRCAQFWOJKKKBGRTSZFVVVQXXIEPAAQWKOTNXPCPDLLFCIJPRUZDPXQMIBYOAIFQYSTZHJGYXONUWSGKPDBNDZVLVDIQHEYHNGZIKGWDACYCEREKATSQHJRBUXZBGCHLHNDISOCMPRYUBWBUMMOWDOCKZLAULSDLTG");
    msg.type = 18U;
    msg.access = 105U;

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
    msg.setTimeStamp(0.7035298654936054);
    msg.setSource(52430U);
    msg.setSourceEntity(94U);
    msg.setDestination(35929U);
    msg.setDestinationEntity(162U);
    msg.cmd = 177U;
    msg.op = 86U;
    msg.plan_id.assign("XNORFOGNTNCIJVMXJTQUFIBRAMELCCZOAVLGZHTVBUJXWZOZYSSBHNLCZEYPCDNDGQ");
    msg.params.assign("TINXGXAVJCSQEDODYZEAJSLPRBJMYWQMDNLQWSSHVGZCLGSZNLKOMQOAQYXTJKCBWJMASARTNDMEKORZVWBIVCWOVLTGFYRUJJGUPGMBBKPXGUHUXACENHSJDZNXF");

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
    msg.setTimeStamp(0.16251184380660233);
    msg.setSource(44384U);
    msg.setSourceEntity(175U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(120U);
    msg.cmd = 22U;
    msg.op = 186U;
    msg.plan_id.assign("TBADKBXSWIGHWELHTUJIMSPQNNBQBWUWNVUEIXOLZBYEJNRWETKPCDFVXLAZWQNDFVVBPGUQDQAJVQMNBROCSVGNFPSDYZPQEZFSHYKWTKMBOLUMITHPXXXKJMDREDNKOHZNVTXMMLGEYNOSVIRKZTYZBRUFYMHCTSECFRDAOLUXWHLAZFJDDMJUAFYBSCIO");
    msg.params.assign("UZCPIALOAQVYDBYJICQAHNDVZKENHNRYQHKCAPGKZJUTUOYXGXBMFGMAISAGDKBGYZ");

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
    msg.setTimeStamp(0.772433774672873);
    msg.setSource(1208U);
    msg.setSourceEntity(167U);
    msg.setDestination(57612U);
    msg.setDestinationEntity(159U);
    msg.cmd = 58U;
    msg.op = 253U;
    msg.plan_id.assign("MBOQFLRIBPZXEMUAVIDWBABHTBDKLFLZJHYUWDXUPSEDJMJORPKYNPUQXEGWQUOYSQYFTPMKRVEEVWUQRTYFLZASHPMWJNPOMFVDOEDWKGVTKAPZAYJLXCVLJGGTZOIOZYHKKURCIQFTQEPFRCCMNMWUQMMRVNLHICARUXAXBZHXGOSSOIKLVFYBLOZGQ");
    msg.params.assign("FISLHSUCVLBVFTSJTFKVNSJXVZFFCJHQVORZHLGUKAVBPRWHCTGLEBADPDKMEEJRLKCTMDLTJWZMUYDPIOFQDSCJXBYXTTGNVEIECFBIGCUASBQWNGOGNEXABJIQYZNAKSNPFZMWMXOGETCGVFTLQICMXJYKUGNHUOZBYOENRNQPYCPUPWKBRAQQXSZIMHXAWFDZLKKIHVPAOMXRY");

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
    msg.setTimeStamp(0.6601378210920505);
    msg.setSource(40080U);
    msg.setSourceEntity(117U);
    msg.setDestination(3111U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.9880964434010021;
    msg.lon = 0.7969411686964664;
    msg.depth = 0.20868195555333813;
    msg.roll = 0.36308117833106635;
    msg.pitch = 0.7761824253855631;
    msg.yaw = 0.34558876732247956;
    msg.rcp_time = 0.316865297656989;
    msg.sid.assign("JCFRTTEYTWARRXJOMQOJXYEZIBWEDJNMRYIBWTGOEFAPZSIWGENGUTXAXQDLKLJJNFLRFCRKSDZUZMDSMTOQHIUPMVGYCDT");
    msg.s_type = 20U;

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
    msg.setTimeStamp(0.07328032050058952);
    msg.setSource(38706U);
    msg.setSourceEntity(2U);
    msg.setDestination(47280U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.976153778974738;
    msg.lon = 0.3231039986755023;
    msg.depth = 0.6742826084031397;
    msg.roll = 0.3975888904062529;
    msg.pitch = 0.8607909600484127;
    msg.yaw = 0.2561714462329313;
    msg.rcp_time = 0.3856250364250978;
    msg.sid.assign("PBNAMGWQQMIKTPHNQJOYDJXDEIISJLWHXVCCVFDUGPIKJGLKAGMBXUFMNBRPWTNKBZWZJMVOAFOSHDWUWTSSZVZNLEFSXQYFTLTVSKXRYQPETMGCGOYJZUMXGLWQYDIEJRKPCSVWVBROKUANWHFBQACTTGXNBZGKAXLDCOFCOHEDPZEYELBIIIPDVLOSTRMHCAKJRRIJCMFEVPZDJLXH");
    msg.s_type = 27U;

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
    msg.setTimeStamp(0.7909019194287673);
    msg.setSource(65463U);
    msg.setSourceEntity(16U);
    msg.setDestination(16125U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.9209153040793076;
    msg.lon = 0.1988278322828526;
    msg.depth = 0.6790458396725497;
    msg.roll = 0.941732952673559;
    msg.pitch = 0.4086705829029724;
    msg.yaw = 0.6654313343883818;
    msg.rcp_time = 0.37914394970172727;
    msg.sid.assign("NEZNBAFDTCABPICPRLWVNVLWPSHDNGSSJWPGZASPXVWOEATLQTIAKYMLREAFGQMUGMWSIQUMLFXRJJDUJIUXGXUDYFBRMBLNHMPHMQYMRBRKEHSNGPFITQRKTAJOWECTIGCOB");
    msg.s_type = 128U;

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
    msg.setTimeStamp(0.08548941003125865);
    msg.setSource(2826U);
    msg.setSourceEntity(95U);
    msg.setDestination(59082U);
    msg.setDestinationEntity(119U);
    msg.id.assign("OIONDJSCQPHPWHBDDBCWRCWKDJKATXBFWIARGETIXNQCQUUFLELBZTNLYZFYYAAXEXYSENQDOLVFLEPZSQXGRSWVQBPKIHSTDBTEDUGTOLOTTRCUZKSCLMBVFUYHIVLDZGMYXHEPNXBENXCVYCBPMAKXLMJMA");
    msg.sensor_class.assign("FZFENGWVQJQOOOVXRMKLFEASMPYPITPIBMFTHXSCVQLTJYHATXLIBWNTIRCRKGPHXOAHDDFHCTSXRWFRWZOPADURSZXLGUCHHKHBKSBGVYDLYNEAHLADYWTKUVUDMCFOAUKJRCWF");
    msg.lat = 0.07604002685588152;
    msg.lon = 0.7992905331835668;
    msg.alt = 0.6032489217672529;
    msg.heading = 0.31445850227541283;
    msg.data.assign("TAUXVOETCJMRLSTYYQXGKMVFLHFXTMXDUPXFBISPDBVFGGJDQTQVVLCCHIEAZQGXODZICISNMBCKVUZBHNMEDVFFHXNKCDBAXYWIVCLCHQYEQWTSINWZDQYKKUARQEWVQGOWJJNFGLPRHSKYGJTWOJZBMGLU");

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
    msg.setTimeStamp(0.49782701057448697);
    msg.setSource(6227U);
    msg.setSourceEntity(216U);
    msg.setDestination(18139U);
    msg.setDestinationEntity(67U);
    msg.id.assign("MYFYGAWIJFRMLRYGFUDQDWOUGSVKHPEJOBNLRSGQNXIICFDAPDNRQEDKVZLCDOZCYJSEEGMCBVMVFBQTLTGKPHSNXKSMRXVNGUZAIMSBGJZOPRCABKRPFHYKEXCKAYZPGWBFUTIDZEHLTELVIWOZIUVZHDSQYONQSNPCHNTQMKFXA");
    msg.sensor_class.assign("EFDPRYKWNDVSHIZFGEOFMZZMKEPUNBURLBTMEJERXLDHUFPIMGOIQGQDJAXCIUYTTKIXAONJXWHUETMOTHRWMGJOELTDV");
    msg.lat = 0.48313160127121035;
    msg.lon = 0.8673702694969121;
    msg.alt = 0.5984339233058416;
    msg.heading = 0.3317350394878499;
    msg.data.assign("VZJZPYOMXSQZMMSJUVDBCRGTXUNFIHWTDRPLDJPUEHYTKIVHMEZJAGDKBBDUTVCLEOQOWFJLIKIWMHYUIIIQTLSKEOPRQPTMKFWYBNZBFCLSMNBOVHRJXBEJNWSKGLMXKRYSCZBUUJVKAXTEZWRSQFZYNFEEHGUDPWXHQQXAACHRPRXXYOYBJZRHKFPSIASAIWNCCCNFIAEQSFWC");

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
    msg.setTimeStamp(0.038375305651383584);
    msg.setSource(1359U);
    msg.setSourceEntity(108U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(95U);
    msg.id.assign("BELQKYGTQYBSJTIEKXLEORIDEABTWFYNRXHCVGAHWWIRUHCHPTEEAOXZVBLDFWYJMXUMSNXYUPBNLVKOVDANPARRCEDXHDHKCLQU");
    msg.sensor_class.assign("XBKDDWXVDRSYRCPZVHCCMIJCWTYKKPWHVRNBPSWRJSEOFRHPMOQSTMITYHCUTQBUADSLBHZCXACAPILLGJJIRFXABUSMTGEDRNQAIDVAKN");
    msg.lat = 0.18888535576937882;
    msg.lon = 0.5727869034491571;
    msg.alt = 0.6207658335038349;
    msg.heading = 0.2151255407511472;
    msg.data.assign("GZUYIPVEUXPHSIMKFZQSGHKBNVYXWFOVMZDZFZVYWLREPTMHESAXVSBLFBENXRFUYOK");

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
    msg.setTimeStamp(0.1584483580734639);
    msg.setSource(34197U);
    msg.setSourceEntity(74U);
    msg.setDestination(59308U);
    msg.setDestinationEntity(35U);
    msg.id.assign("EQZSPOKVYXABUWIZNMZEBLVSUAGCSJNHRRDOLIYTDZMHTADUUMDJYWYGQXXMLBIPNOZBCOKXXVCVURDFSYHFKRFGWHUKIEHNMTQOTNBRMKQEJFQEPOXGDLTPWHNFBZBGFTMJHTAIASJKDLNWRQQJVZGGNIKNQPL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UZEOMFQTQOHB");
    tmp_msg_0.feature_type = 62U;
    tmp_msg_0.rgb_red = 214U;
    tmp_msg_0.rgb_green = 209U;
    tmp_msg_0.rgb_blue = 136U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.53513764733434;
    tmp_tmp_msg_0_0.lon = 0.6233722576848731;
    tmp_tmp_msg_0_0.alt = 0.32366245667368043;
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
    msg.setTimeStamp(0.9298217827025498);
    msg.setSource(57558U);
    msg.setSourceEntity(81U);
    msg.setDestination(30487U);
    msg.setDestinationEntity(203U);
    msg.id.assign("KDVKDDHNAOORUPGMKTVTGBJRRMXKBTWBCLYCDAQPEHQGZMLIYZFIKPLWDZOFQYXNWCXANWGPDZYADGJRNBFCPBIBWKAFSUFIQHLJXYZFQPJHBNSGHJRGZUGMRIOCVEHQPKCSXRYQIWJRPEJQEHYHTXLIAZOWWOCTOWEOTZVNVDGXEYFFKKNESUICNWBFIEUDALSYPUVYTJTDLMSAMXMASR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YBWCPFCEJEOFDVUYODXPEVGYYNWUGCALRGOXJDSPALBFFZERPUTHIKZOFSHIJGPTASFQTBJBYLUMNTMXEEHFAVPNITIRMQKNVOXUQUHZUCPHQAHZEDSQDLBJJIZWGQEEGXUAKWTILDINRLXWWKZTIMZATRSDBIKSXVDQVBARGYLRFVCEQAJYNRUKHFKONMDCQXTMSPUGOLMNYYZZRBYVFVBQNGWJXSLODRICZOWKJCSPWCJHPKBALWHK");
    tmp_msg_0.feature_type = 246U;
    tmp_msg_0.rgb_red = 28U;
    tmp_msg_0.rgb_green = 6U;
    tmp_msg_0.rgb_blue = 116U;
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
    msg.setTimeStamp(0.8425145595233295);
    msg.setSource(3627U);
    msg.setSourceEntity(11U);
    msg.setDestination(61772U);
    msg.setDestinationEntity(208U);
    msg.id.assign("ZFVXCHGGEPRJIKZPEQADKXMTZKYUKHQTJORMXXKNCSWREMQIZTVBALUFNFZQSXDJKRADSCLQOMRBXOSJETMDPPILFOQYVUWVBPTRFZGLYYGMBEFADWTNIENCTSDGAUQDLKJKCVROLSSUANTBRCVZNEXJMUTVHURLJDDYKHNBFBDSJKNPYCIIIWMYUHIEJYAWCEHHYJVBGXPHPXBWQAZZHQNFGBRMFOSFECIOCYLXNUOPVAWOTGPUGL");

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
    msg.setTimeStamp(0.13545403196098527);
    msg.setSource(54281U);
    msg.setSourceEntity(78U);
    msg.setDestination(54087U);
    msg.setDestinationEntity(89U);
    msg.id.assign("GJCVZMFAGIQRKMROVDVYCLBTYBWSMKVYTGWQKDEZYECLVISXXRHCQJTZZOIYZP");
    msg.feature_type = 90U;
    msg.rgb_red = 10U;
    msg.rgb_green = 108U;
    msg.rgb_blue = 172U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5769628988124855;
    tmp_msg_0.lon = 0.2788892470181842;
    tmp_msg_0.alt = 0.020773403452062245;
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
    msg.setTimeStamp(0.6373182004131078);
    msg.setSource(29428U);
    msg.setSourceEntity(143U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(155U);
    msg.id.assign("DBJVASQWJBHBTOCVIFKZNKHYLBYPZRYMQWPCQVYRQOQTRZMOVXJGXKENXRVIBCCWPLEKPZSKJUWOMNWOSTUJJWPNLIYQBFPVHOHLMFTJEFSMUNMMXQJTAGXHFNSWXMTSESDUGITNVGDFBZAFPKLYUCTOIARWQNZPLATKYGFZM");
    msg.feature_type = 93U;
    msg.rgb_red = 46U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 113U;

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
    msg.setTimeStamp(0.7330432770574613);
    msg.setSource(47460U);
    msg.setSourceEntity(190U);
    msg.setDestination(18258U);
    msg.setDestinationEntity(201U);
    msg.id.assign("BDYQSQVDJZYBIKMCUKUVCPSKVLHPUEEAOQFBXRAHOFEIWYHOIGGEZRSAHLJSPTPY");
    msg.feature_type = 90U;
    msg.rgb_red = 82U;
    msg.rgb_green = 102U;
    msg.rgb_blue = 76U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5012051666799943;
    tmp_msg_0.lon = 0.4676451987139233;
    tmp_msg_0.alt = 0.21001029709569852;
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
    msg.setTimeStamp(0.5969310978949735);
    msg.setSource(16767U);
    msg.setSourceEntity(58U);
    msg.setDestination(47917U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.5539888403738903;
    msg.lon = 0.8530962805625372;
    msg.alt = 0.02746647247242595;

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
    msg.setTimeStamp(0.9381331459567104);
    msg.setSource(10336U);
    msg.setSourceEntity(16U);
    msg.setDestination(19951U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.7322197491558886;
    msg.lon = 0.5789566741573592;
    msg.alt = 0.8068455824011189;

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
    msg.setTimeStamp(0.543190791683579);
    msg.setSource(17853U);
    msg.setSourceEntity(187U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.655482976718994;
    msg.lon = 0.5297439900414413;
    msg.alt = 0.9791677890720615;

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
    msg.setTimeStamp(0.7325576117232796);
    msg.setSource(13018U);
    msg.setSourceEntity(131U);
    msg.setDestination(23861U);
    msg.setDestinationEntity(86U);
    msg.type = 134U;
    msg.id.assign("FENCIQHYISVLCELKGELMCJTBYCSWKEUVQYLPKSSHMFDJMDOSFEAZZQGRREIAVHKJQNMRYOGNNZXLKPXWUUTNHBCFLLCKYNPYKFHTGVHPKAQCBGUHHTISWMXQLFFQKNBWDTDRJOSZRBZFPRVZNPEFPNYDMPDXHVRICUUWEGTIOVZYWAUXDLSXKR");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("UFZXERHWGNKOJVZFETCGLIFZFGNJFCCDPXZNOPSTLCLWYOULUICFBNZJXONSEKQJLMZUOWEPOKYPNDKXFFKAYHMUHMGIJDGLWTJXBHMGRWTVVTDTYDCMICWHGEAAISQNGMBUARWDHEDZORRHUHLSRFPQVTPBNFAYXOWTPAGVISQXRKHRYEVBBDYSHMEIBELOUXCARSQLSQQQCZDYYNMRVXOKKPUQJBMJJWATCA");
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
    msg.setTimeStamp(0.8334774452133403);
    msg.setSource(55286U);
    msg.setSourceEntity(32U);
    msg.setDestination(64898U);
    msg.setDestinationEntity(118U);
    msg.type = 30U;
    msg.id.assign("POIFKTXPUKMHENAUVUXCSBVZYCBJBPKHACOWWOLMUVGEDKSFPTVXXANLIJQEPZIZPQFUXITGVWDGNEYSWLFMTJBPYGR");
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 138U;
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
    msg.setTimeStamp(0.48303563170862573);
    msg.setSource(4885U);
    msg.setSourceEntity(159U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(94U);
    msg.type = 33U;
    msg.id.assign("YQUWZQVUZYTIFHDAAPAVPTHZATDZZXWMQYKAJNAQNAJJHRACWJDFGRVGXOLIVNGOLSFFCD");
    IMC::AcousticPing tmp_msg_0;
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
    msg.setTimeStamp(0.2915809635151614);
    msg.setSource(61987U);
    msg.setSourceEntity(112U);
    msg.setDestination(54219U);
    msg.setDestinationEntity(37U);
    msg.localname.assign("BPYVOTYMZGBPAZKLXKANGKWKCMBLZTKOFICOVUOIRPTTFIOAVACXOKFDROVRDVBFEUDZZBRZIFMRZMCARSXVKJQBNLMQFVJDIGOHQEGEEHJFLSIAYGKLIQTUWYXCVDXVJHULWSUGSGZPGUTWQ");

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
    msg.setTimeStamp(0.041731703751679894);
    msg.setSource(41334U);
    msg.setSourceEntity(74U);
    msg.setDestination(1889U);
    msg.setDestinationEntity(37U);
    msg.localname.assign("PDAPZOIDXITTXYZMLVGRVGCZIVFMSIGKMDBASWPBHTBQJLNAHHQOASPKRFIUQFHPBKLQARSSJWHVSEMRTOGERHY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EIJJOLMBAZRNNILICMQYIUQKQNNJOYHSDTWBMWPYMAKWMKJRXBSTBEYXFFOEEDAFASUSDXADHBGRXSLTZVUYOMTXRPTFDWVFYNAW");
    tmp_msg_0.sys_type = 74U;
    tmp_msg_0.owner = 57031U;
    tmp_msg_0.lat = 0.250378681906558;
    tmp_msg_0.lon = 0.9840286130329506;
    tmp_msg_0.height = 0.08838317775522231;
    tmp_msg_0.services.assign("EHBSUTKJOLWPXDRXMUIQGNPABRIDTSHTXVBLOTPINQDJJFIRPZTRC");
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
    msg.setTimeStamp(0.012041201499136012);
    msg.setSource(5846U);
    msg.setSourceEntity(83U);
    msg.setDestination(20452U);
    msg.setDestinationEntity(217U);
    msg.localname.assign("RYZMSJWVRCGWZUPBELMMTOOAWCKVLJGZSCJSPNZCFLOBLXCKFNTPUIPNGUQWNIKLCANTRABZINUGDJRRRQZQHIMLGOFSEMFNVPZEXUUILGYSHTLXROXSTGBIFADBHXQDJVQHDBODWBWGBHAVTIFONJPYDUBWKUNY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YZPTNCRAXCADONGSBRUQIHTDPEOKPFVBCRMACLFBLJOISMYWVWANXMHBPLAYMKOFSO");
    tmp_msg_0.sys_type = 135U;
    tmp_msg_0.owner = 21464U;
    tmp_msg_0.lat = 0.19956816912284348;
    tmp_msg_0.lon = 0.9196601400068496;
    tmp_msg_0.height = 0.2024569227066838;
    tmp_msg_0.services.assign("OPFEOLTAXKFJWEASGDZUQUJZQQIJDNGPREALTWSRPNUHCRMVXAETTRYWFPJUIOOBGBYYJQXJBDYBKJTLFHCALVGMUMRHAE");
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
    msg.setTimeStamp(0.1200172612436119);
    msg.setSource(2818U);
    msg.setSourceEntity(143U);
    msg.setDestination(319U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("IKWVGUMSYBUFZWJMMAIKKKGCCZWQZRZEVLDRJJTHMFTHSZZXNSYWBFOBOPXQFIXFODUHQJCBMHIVWZCKDYPPLQKIWNAVCNWBQJAQDNETMEVGRIFMCSGDTRHJAOIWEVVFZNUDNBDXCXHHUASAOKRNEMSFJNXTNTLPZIOVECRLBV");
    msg.predicate.assign("XHLXARFZIFBGFHCFXMGZCQEXAZFMBVJPXCVS");
    msg.attributes.assign("LICYWFARBJFQYDYSJIGWCNFJUQOGOKU");

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
    msg.setTimeStamp(0.04070530632710401);
    msg.setSource(14650U);
    msg.setSourceEntity(147U);
    msg.setDestination(55340U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("BFVHIYAOJMPVUEEBFOQNLTRCMSHRNTALGJBSBQTPDQTTUQWAWJWJZIZVXRPAZ");
    msg.predicate.assign("IAHNORLYPIBGAJSZEBKPLMNXSANZKCJYKZWUUZISSRQMFSJGLKFRNUDIJGZHUXTQRUKLGQWLCRJVYZXDPCAFYTEYPBWRIAFSRAIGTQNTWJHDCLSZRQYMF");
    msg.attributes.assign("KBIOVVNDIKNWUUDTQJYSOQXBSYRLSAOSWDYZCSHEWIWLWJCQPXSHCXCZPSRETOBDJVXGQIUBYXKPINRBVPOFYDAHNGIOHMKZPFTTRSMMJEQKILAQZVFJHAODXPFEAUMTQANALFVWFGZYFTXBJUZGMTNVPPESLZMNXGVJBWKYUPRSUDEHZQDQU");

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
    msg.setTimeStamp(0.8612269041802834);
    msg.setSource(21647U);
    msg.setSourceEntity(138U);
    msg.setDestination(50347U);
    msg.setDestinationEntity(180U);
    msg.timeline.assign("KWDMZWKXAOEHZTVNRMQZRXGWZEJTDDFLCKCOYGFBICRYNAXAZBJUWBSKCBMEEWMSVVTSLNLFTQJNSWTNXUDDFKRUCVPOWJDZIBPMQTBUNIUJUNAILTTGIQYUOSNHGYEVPPKUBDRHJHOPJVHJFCIHMFCLBXAPEZHGQTSYWLQHKGRYGBQALSEQQZHXSAAOADVCLRFMEXSRKYIVOPPIGIZFWUGJPVZYRUYGRFXVBYMML");
    msg.predicate.assign("ECOFKCLGYBAZGUKVIACJPLIFZUJGXQSGVRQNQIVHJQHRQKYNPRZOMBEOVZYGLOZVLESVHK");
    msg.attributes.assign("EIXQCODEHECTMGBGFGORASLVGGUXRUSSBJEILHECEKADQPMVAQVJLMNIZZYYKUNTPMJPIOZTYHXJRVGAWQMZFZLWLWZFQPSHPLSBXJYMDHVONWBXOPJRFLBYYNKTCAVKFEAFSJCWRZAWURXTHYKDKYUTWNODBDVLLVXPIYUUDIZJMIQQOCNYMHFFHNGOZUTSQDFOBS");

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
    msg.setTimeStamp(0.25651790277056685);
    msg.setSource(6758U);
    msg.setSourceEntity(125U);
    msg.setDestination(16463U);
    msg.setDestinationEntity(96U);
    msg.command = 45U;
    msg.goal_id.assign("COKBAJCIHEYSQNNROQNXNDRGPDBHLYABXJLGCRAPMDNBVZFQOJYJRRFGVKYLOPTXGWXSDYPAVEDYVUIEHAPJUZTDTDHZZBJNIBWOEBAWMZMLSOLAQXHDVOKPOZEGYJEPTPFHIOTWGBYFFXGVMMWWNTURIQKJHQHKJUZS");
    msg.goal_xml.assign("KMYLDRXJHQBOOKVFRSFPCBILNUMHBWXOHZBGQEBSSXKMBZNHLRSNWRGIOPWJZEXJGPPWQFIRVMUQKCVCZBEPJUZGEFHUPQGODLYVXIDBACNIWAQPYVYZPEJFMRUQZVJYUOAKHLCSHRGTHVWPXFUYNYOJRLYUFQKACNZQWCDSCICZGTTKBIHXJAUWMADKJAHRMUNNEQOOGGAVSEAYFGBWAXNTRSVOLSXIETKXVJILSDLLMTDDMF");

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
    msg.setTimeStamp(0.734872251599136);
    msg.setSource(7836U);
    msg.setSourceEntity(68U);
    msg.setDestination(59947U);
    msg.setDestinationEntity(180U);
    msg.command = 245U;
    msg.goal_id.assign("YIFGZBLVSADOXAPFLWBAGYYYOJBQPFGVZSKFQKGLNRURYEBSJPCC");
    msg.goal_xml.assign("DGCHURFHHLQDLIXMUAANBAYSUEZEIVTONKTQYNVJDKPKETUTRCPDGXIICZSMJGRTJRUEJEUCDTKGJXFOLNLWGTONHPEOAGZFWORXKVBBXFPDBYYAWHDXZKGJPCAFYSFZJZXBLBWVSMPWJCHOSVEACVRXJQMCFUKKLMKNQILMNMBZAZAWUIBISRDNWZIE");

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
    msg.setTimeStamp(0.2621477076839088);
    msg.setSource(7955U);
    msg.setSourceEntity(70U);
    msg.setDestination(43897U);
    msg.setDestinationEntity(121U);
    msg.command = 90U;
    msg.goal_id.assign("ACEZZCJSCHWJ");
    msg.goal_xml.assign("GHTBWPSZWKUAGVWAIDNZKQBFDNUVPCXJANRVKMMLZJSZXHJCRRHESZTQWKOHKOGVUXFMSIPGNMLLZBKXJIGIJYTMLTKBTV");

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
    msg.setTimeStamp(0.749404758532401);
    msg.setSource(26462U);
    msg.setSourceEntity(80U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(100U);
    msg.op = 14U;
    msg.goal_id.assign("PIHHUASXELYQDDSFNSEHKOJXTHUVKILZXMOCTYPYLBGWXMTMRYGRMIVNKWUXPPGRTRDVAOHQFLRNXQONQXBPACTRQALZCLABDRZRBKZXZQVOCVYPMVGUEJPIMLEMKFWUQMKPAHTGEVV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WKVCPZISNGBIUDTLLAYZPACGTQSRXOITBNDMPBYZEDXGGPSWHHLNZNXYVCUHXMODNKAEDWOXYTFYWIWJWUAQSIAVJYYULSQBMWLQDOZSLNKOYFPUQFEJZWCMESBFNZGQ");
    tmp_msg_0.predicate.assign("EJMCXVBYSCTKFSEQYFLKRDVOAYQELASMKWNKWAYRZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WUGSREBTEOENFMVLXZVJFEWHOVJDWDAMVTNHMBEKIXMANCQMKGQBHYQCIYSVOBRJZWUQWIUZKH");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("CNFSJGDIMAYDDCRDXFXDEYKHWNUUFEIEDJCKVCQLQXCHUOOEXRGZCLGAWGPJKMRJAMJOKRYHKOVQWEVLTIJPZKBRRBTAYZVM");
    tmp_tmp_msg_0_0.max.assign("ANIHANEQHBSZOEPYJNXQSJGUNBQQLABDUKKWTRYURLYZJDXFPZRCOFZBGZIHQJGFLANKBTGPPXWRVAEZMWBKNRTXCGDOUTNXYPBMWCJGDAPDZULKCXCPMKPOVFVHO");
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
    msg.setTimeStamp(0.48857955647505413);
    msg.setSource(14759U);
    msg.setSourceEntity(27U);
    msg.setDestination(47659U);
    msg.setDestinationEntity(2U);
    msg.op = 36U;
    msg.goal_id.assign("ZVOQKSQCNPVSJOVBCRIEVXJZQLKDAIABLDHRTFEICYVCGQPMXBOFCNIXAXBIYVKOADROGKGWLDEVSPUWBJUIEJZNMEN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UIAPGBEZSCGBDTYAUKCZIWFHZQTICPJNXDXHGNRESUASHTOMKBMKGDUOOANMHSYTPLGOFLVJCKOKZDMBYWPELSRUPPFBVTZFKTMWWORILPJQZJSHSSWTNIHUQXKACRLESRUQEILYXHJCGTKRPAKOYNDDVTXBQWPKVODEQVFYZILVMCIZMNUFNVAAHOQIPYGDRGVML");
    tmp_msg_0.predicate.assign("ONFTTACKNUZMRXOBKSAYBMQAQHMLCHPOHBPDMEEHSTVNIFMJZIYZPNERBFVICWITYRPBKQFZOJURNSEDPBEJMNSMOCGMXKGFDATEQFNGYIETYKZDZDMOCVHGJRQYVGQKUVTJWGOLWKXHJPJIHWNUGRAAZYCUXSSCQJLBOFWVAAB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WBMUITYUNMXIZICCJIFTZSGFPPHABUGVFRIBVWJAQTXSBSLZDPGGEEUJLKXFKNYLMBSEAQJCFLWOHRIUUTQJDIJRGOYMCSACRNOBSAGPRXFGGNIZOXYZTHVHSQOJQGOVKHCPJK");
    tmp_tmp_msg_0_0.attr_type = 34U;
    tmp_tmp_msg_0_0.min.assign("SEWNGHOSAJIALDZSPWMCYCJVZDFTNFYOYCLBXSFLICVIGHOKWOJVQATQXRGXKCU");
    tmp_tmp_msg_0_0.max.assign("XVVZSKPUKTFHXRRZPHLVXCLPIULEHOXUAJTYTFDSIHIBTROIKBQSYLCVNAWXWGUGCGATRSTRABUOWDPBBCSNJONY");
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
    msg.setTimeStamp(0.6982664457350803);
    msg.setSource(15755U);
    msg.setSourceEntity(74U);
    msg.setDestination(17697U);
    msg.setDestinationEntity(67U);
    msg.op = 128U;
    msg.goal_id.assign("XEVKXTNMCGONABPSTIHIQFIZLIUTYFCOURBTSRPDANCFBDGXJVROMOQWEDZMHBZEZSSVOBVEGQPOMYFPUNKODFEWRFHJCKYRFSQCJJFDCTPRIS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ESEZDZYYWNJLNZKFWRGWMQWJXKOXOUIKGITXWZQVIBTZBDALFPGUDPAVNRNQTSARHTXZQLUDOVPGWEDCWQMQDJMKFXNCLBRCJWFSUTPDVXCVOTZPLIMEOBCTKFCHPHKBAMJPHEZKPBSHMEVNAYZJLMGAGKIKSGLURONEFAQVCYAQTHQOSYUUZBBWGONUHENDYBAHJGEITVC");
    tmp_msg_0.predicate.assign("IDHLEQWNPEOVTLTQDXDUCKNCZRHATERVGRWFMKYOLGGXOHEPACIXBHKBTCWDHUZTJMVRQKQGMZVUOXLXNIGMDRZDMAGIFQIVJPEUVZVQEOJEMHENTWYPRLDCYOWIRBYVSNIOXNSFGZFAPYCGIJNCNWWWLVXJBVPAICESMYBOTZOKXYUSARGJBDPCAJKWDPNLSTKFHSDZAFTJBYPLFGSUWBFXQJBHBZUQUZPNCYORFHAYKLEMXQKISFJUR");
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
    msg.setTimeStamp(0.17659754207706468);
    msg.setSource(12518U);
    msg.setSourceEntity(92U);
    msg.setDestination(24345U);
    msg.setDestinationEntity(40U);
    msg.name.assign("ZXICVNZSHADZQAPPJUELNVLQKPUMUJEHVWFPGBFOMOPCOIYAVVJKCEOWHFCOGITNSDYPKTIAGMGTJRJFXFDJWQPKFBCCULSLADIYLMZEQNMTRQMYRDFUNCLSTEKBEYRBNCDXSHURWRQSIKZGHIOZULGXLWYJCGRVKHFSQFVVLHTHXXRXDKSJHXMQP");
    msg.attr_type = 47U;
    msg.min.assign("CDCVUULDSWXBXLESGERGGNHHCGASEDQTRKMGEPGASYAOYVZNRFYDMYKYZFULJMLYVUOLCPIMMISTYQJBQKQUWDVUINAXTRB");
    msg.max.assign("IZDYYSNWVEEFFSRUQPIQLZCBOCCZOMPWHXZZAZIYEEHGKPDPGEVFEJAXQQTUCDFNRAHLTCHPMOAFZQSRWXHSDGEHMOUHKQNAMUTTYXVIBLFLLYCSYUUCYHBSBIDEGMLVSFTUXRGHXMZNBLKVRILQDBPPTXSQJFAVNSDTVYWJCUCFNGCTERDGGAMONQVOBVGWZAHJJKBKIKKKPMPNWPWJYIOIWWKFBXUTJMOARRUGNTZRRSKOB");

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
    msg.setTimeStamp(0.8308501202556215);
    msg.setSource(58229U);
    msg.setSourceEntity(156U);
    msg.setDestination(44775U);
    msg.setDestinationEntity(83U);
    msg.name.assign("SGNTGSBMXKTPOVFPEENTMXWOHQLVMNKTHFUZSHPUDEAIYWKEWGAPKYZWQIEOWDHAJLMLQLGHSXBBQIXTSKKWYURKRZIPTUYRXLMQMFXRDDCCEANTLSXAACJVJIVPQOU");
    msg.attr_type = 206U;
    msg.min.assign("SRGGSRDXUTREVUXYUNETLTMYQVVMAJTMXIFBZMEXUGOFOVRMHIAIGAQXKLOZ");
    msg.max.assign("ASEMOZJUFVBIQTYDDVRSMMBSDUOVMIXSKYKNVTTIQMHRNHGXYCXBINAHPZFWSHIGPQZXWQPNCYCQEZCOQOGDH");

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
    msg.setTimeStamp(0.5323431869204293);
    msg.setSource(13969U);
    msg.setSourceEntity(80U);
    msg.setDestination(15305U);
    msg.setDestinationEntity(170U);
    msg.name.assign("EANKWVFHRPBHSOYSRXCMIMMRWXZXEWVRIFHRVLDYAGRESHGGTZFFUOLIVCDIJXRAZTSPPRECOBZQGPCNRDMTWDXUKUSPVQGYODTEOMOVDIKPFNLQUEVSJFNYZDFXJFLAOVAXKEQGIVHQKTUMCGSBEJFJOJQZWYBNLRQBYHDQUALHGDWUGEJCLBIXFNXGUCTKHKSNVIAULASOWDYAQZABJJMQTWONIHCZJTHKTTMBPMSUWYZP");
    msg.attr_type = 53U;
    msg.min.assign("MLDPDRFHFFKHMORHWPEZKADZZMRIKIHTEOBZNDTXQUSAEOSTTGFZRGXSPHRKTEUWEPPBSNSFXCCRORHYVQGNGIVFOENRMCJYXCWXGBNQKVWPYQIMNVNQPOEIGVBSACYLK");
    msg.max.assign("DJFRMZPFCACVMHKVPBTXBWERCIZHOTNINMNUKMESKHOVAGZYDRDFUSFWZKZFZXGNETPZNBFHQTJLSYGASJNQOFEIXSOYWNUBUS");

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
    msg.setTimeStamp(0.27976920281416295);
    msg.setSource(60589U);
    msg.setSourceEntity(50U);
    msg.setDestination(26973U);
    msg.setDestinationEntity(55U);
    msg.timeline.assign("TVHSDNEFNKJYBUYKMYUSAFPEUOCQBPGLFIDEWPARAVCJJIWFNVAMAFWOTLCYUOLHNGHSWHBTQETGNGGHIFJIRNDSMBFLRKJCJIZIYYBAODSEELOMXZXEUOEQRWZNMZWBOZZAIDWJTDOYLAZKPXBMVHKSMQHXQYMHXNRUFBTXGBLZGDXVSTPWOLNJULCDZJVESBWPTMRFRXDORFGTCXCCZUPQQHPIN");
    msg.predicate.assign("WPCMLTVRWDJKBWMOZGOQINPVURFFABMPFMCGDARQXVVZVHXXMCAYQHQIYALSUAWTCKRYUGTBUAXYQOHYNIFRJGYSKHZLETUHDZVBCNHSMOFBR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NJZFUGBHAPMPETMOOBOHSBQ");
    tmp_msg_0.attr_type = 23U;
    tmp_msg_0.min.assign("ZYCXTHEGZGRMEXDZEFCFTWZNVYBBKKINVIXDTSYRLKNCLPXEFMVBAWGQOEEFZMZJPUEOMFLOKVXHW");
    tmp_msg_0.max.assign("NTXLWRNAHGHHJFJZLDUZJXCHWMPTUUPTOBZGMACXLQIPKKXWGDOMGEKZSLHTHWLXBGKWSFOIBIQSZURBXNNKYEHZCOVCGJRLZXXLYZIMYMDJZXYAEVVQBCREWENHFVHKAWKBUTQFBUVICMLGEFATYJQCPJRSUJO");
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
    msg.setTimeStamp(0.828060723197673);
    msg.setSource(51354U);
    msg.setSourceEntity(209U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("VTPGBTEHZBKVBMLESXFWBIPTLXCWELHGESRAHEJODGTQNVMNDNKJXPLFKUDJ");
    msg.predicate.assign("PHFEROPHGGIDBOVRYCPJUBKWTRFRIPMRULTPFFKXBAGYCYKNTXMVQFOVCKDSJFZMQEUZKBZHIRSOJAUCYKTXCLOLIGSTSNUSZWIZY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BGBSAVXOPXHGXSRDCSQFJPCUSTKCUAFJILEIWOGQAKRDVYJEHMFSWAKMNAEKZOTXPFWLHQRULUGEKTJSZZRGEXLOHVNYAMJJDYDGHCFDYTFIFJNBWYZOUL");
    tmp_msg_0.attr_type = 146U;
    tmp_msg_0.min.assign("CSDOYUPZWURSXCGHFFFMJXKKZLXKYZPPGHOEAYBHVGWDLEOLZZOGUDRDMTEPNISKVGUMKVRDWQAOPJIQQCETTLTAIQQIZQYFPPSUHFVSJJUDSIFECLEWNBHHADBTVGJDEZWNBAOKKXNERWSTWLELI");
    tmp_msg_0.max.assign("ZACQCJNNVBJSCEKQWPULTOVVVLQIRZDQNYWWKCGHYMLPSAZALYYFDFGPFHYQOBECTZXWUINKJWWBMOHFRUXMFVIXGEESLJUILRUZBGRKHXOXDIZNXPZCTVEKWHAOTTPZLAJSXWXBUGGYOPGVXKDMUUQSYDQRJIAWIKCCBPTIPYHSJMNTGAKMGFYJTMQPDABKHKJHBORNAFRZLSVHDRXOHUFYEMDEVCLEEMBIBGRSRFWCSNAQULVPTESQ");
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
    msg.setTimeStamp(0.042884804864971926);
    msg.setSource(2985U);
    msg.setSourceEntity(228U);
    msg.setDestination(9155U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("EVWWARUPUZPNTEXANOTXHMWFVUTACQDIVNDEIHQAARQGLAGAGUMOSBEXSOZYCNSCUVBDEUKPYZRZMJCKVITAWQMFEOHFTNKYJLBUTDZMRVUKUTKVZIKLLYOPYGJIJKXENQCTLFJWRSHCDHYVXGCWRGSWCOIXJPYLPSPNQPAUBQXCPYDBEBWHKFFSZKIJMDGSHBZLQJHPBMDGOYAZTMZVKLYRDWGLFMEJTXQXMHONBOR");
    msg.predicate.assign("ZUIFUYCBQVESKIKXOUVVRJIOLDLSVWVTIEKJPVMNECOWGGGBKTBBTRJHLNERXQUCCFCNNOIQVQEJMONQQVPZNFHMWTJHYDBYPBDSPMHLH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VJHZKBQPWFQSSRFKLOFVVJGUNLDGRZ");
    tmp_msg_0.attr_type = 100U;
    tmp_msg_0.min.assign("JDQBGFIZEWKURRYSHUQK");
    tmp_msg_0.max.assign("WHGTVDPMUWXMFECFBUOFJYIN");
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
    msg.setTimeStamp(0.8374286409712831);
    msg.setSource(16943U);
    msg.setSourceEntity(41U);
    msg.setDestination(53787U);
    msg.setDestinationEntity(84U);
    msg.reactor.assign("SPJRKUWYQKSMQCUMORXFPXIMQNINEPQXJRDRNDAFAWHEISJDDJNTEKUPMIAKIKBBGWUFCSZBBFZQZNLFGGZGANZWNCONFVLYSRUAFAQATLHQYWPJDJMVPQKHBDP");

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
    msg.setTimeStamp(0.8693254677695746);
    msg.setSource(52005U);
    msg.setSourceEntity(14U);
    msg.setDestination(29364U);
    msg.setDestinationEntity(211U);
    msg.reactor.assign("EOGXVGFTZQRDPJDGXANCDBFNXOYGBFJPNQLEJVJHMCBURIQMKQNIVXIJTPMVNJOVODDULRDTXUISLEFFDUGUOLOIBPEUKPFUCAWZGHSLTAOGQWBVIWZDWATZNEYLQHM");

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
    msg.setTimeStamp(0.04000692487838209);
    msg.setSource(22749U);
    msg.setSourceEntity(215U);
    msg.setDestination(29148U);
    msg.setDestinationEntity(209U);
    msg.reactor.assign("OQHYRZMUFXZMEQKXGPFVMTRQCZOBRAIAIPRULTUZWHYLGSBILKGUMNNPDCOBLWUKZBQGLQVPTCKIFFFUOYETKXHZGKQKVQJENLVFKMNFJELWNC");

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
    msg.setTimeStamp(0.6741310323272568);
    msg.setSource(49095U);
    msg.setSourceEntity(219U);
    msg.setDestination(25690U);
    msg.setDestinationEntity(130U);
    msg.id = 168U;
    msg.width = 42251U;
    msg.height = 59726U;
    msg.widthstep = 2182U;
    msg.channels = 215U;
    msg.depth = 244U;
    msg.finaldata = 228U;
    const char tmp_msg_0[] = {64, -39, -52, -89, 50, -85, -85, -72, -50, -37, 32, -91, -41, -123, -118, -18, 119, 123};
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
    msg.setTimeStamp(0.3600074617857255);
    msg.setSource(43395U);
    msg.setSourceEntity(114U);
    msg.setDestination(42476U);
    msg.setDestinationEntity(137U);
    msg.id = 51U;
    msg.width = 62205U;
    msg.height = 27485U;
    msg.widthstep = 22540U;
    msg.channels = 221U;
    msg.depth = 196U;
    msg.finaldata = 48U;
    const char tmp_msg_0[] = {82, 19, 94, 69, 93, -83, -24, 85, -79, 12, -3, -57, 113, 60, 54, -122, 53, -18, 74, -121, 100, -22, 94, -90, 100, 60, 88, -44, -12, -88, -95, 41, -96, 40, 33, 75, -21, -85, -51, 40, 92, -32, -85, 54, 71, -67, -25, 25, -51, 116, -46, 44, -76, -13, -23, 11, -92, 98, -55, -71, -8, 21, 97, -45, 14, -119, 79, -128, -44, -127, 103, -33, -84, 53, -45, 55, 114, 82, 114, 46, 31, 46, -6, 23, -109, 95, 48, -7, -75, 95, -116, -11, -81, -128, -85, -106, -15, 33, 112, 16, -44, 82, -116, 22, 82, -72, -44, 71, -94, -77, -15, -91, 53, 84, -100, 101, -47, 18, 57, 115, 11, -117, 34, -126};
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
    msg.setTimeStamp(0.7750434466642832);
    msg.setSource(17993U);
    msg.setSourceEntity(28U);
    msg.setDestination(17713U);
    msg.setDestinationEntity(147U);
    msg.id = 209U;
    msg.width = 13154U;
    msg.height = 56328U;
    msg.widthstep = 49055U;
    msg.channels = 42U;
    msg.depth = 89U;
    msg.finaldata = 16U;
    const char tmp_msg_0[] = {-37, 38, -61, 73, -66, -82, -78, -19, 50, 8, 44, 48, -35, -112, 16, 100, -27, -31, -88, -113, -85, -80, 46, 83, 60, -102, -32, 55, -28, -37, 57, 121, 123, 68, 61, -9};
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
    msg.setTimeStamp(0.15887416180177838);
    msg.setSource(23873U);
    msg.setSourceEntity(134U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(182U);
    msg.width = 7391U;
    msg.height = 52524U;
    msg.channels = 138U;
    msg.depth = 118U;
    const char tmp_msg_0[] = {44, -80, 69, -98, 119, -2, 106, -35, 30, 76, 46, -119, 41, -56, 95, 117, -77, 43, -64, 38, 110, -33, 83, -6, -109, 87, 124, 70, -36, -53, 2, 19, 109, -116, -88, 110, 110, 39, -83, -23, -87, 108, -97, -104, -50, -66, 92, -2, 33, 18, 106, 33, -39, 11, 76, -33, -72, 33, -93};
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
    msg.setTimeStamp(0.845173438942352);
    msg.setSource(61683U);
    msg.setSourceEntity(16U);
    msg.setDestination(20901U);
    msg.setDestinationEntity(90U);
    msg.width = 25932U;
    msg.height = 62753U;
    msg.channels = 135U;
    msg.depth = 12U;
    const char tmp_msg_0[] = {67, 7, -8, 119, 52, -103, 96, -38, 93, -114, 106, 67, -47, 112, 47, 9, -15, -33, 117, -19, -13, 64, -8, 20, 41, -1, -97, -24, 65, 27, 60, 49, 12, -1, -37, 84, -1, -23, 115, 58, -21, 125, 84, -44, 68, 52, 120, -30, -28, 62, 59, -15, -121, -26, 113, -39, 87, 123, -120, 6, -14, 16, 57, 41, 97, -119, 99, 55, 16, 55, -47, -101, 38, -3, 3, 62, -88, 32, -119, -55, 116, -59, -42, 46, 40, 14, -67, 3, -53, 43, -74, 126, 52, 33, -30, -119, 117, 102, 112, 65, -57, 89, -66, 108, -102, -85, 108, -107, -81, -55, 67, 104, 34, 40, 53, -60};
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
    msg.setTimeStamp(0.1933083557386266);
    msg.setSource(64139U);
    msg.setSourceEntity(241U);
    msg.setDestination(894U);
    msg.setDestinationEntity(190U);
    msg.width = 30292U;
    msg.height = 57255U;
    msg.channels = 91U;
    msg.depth = 140U;
    const char tmp_msg_0[] = {-54, 19, 11, 73, -67, 60, 86, -59, -87, 85, 60, -96, 17, 22, 98, -35, 30, -76, -36, -124, -42, 125, -128, 20, -76, -123, -19, -41, -56, 23, -52, -48, 101, 102, -74, -64, 81, -125, -121, -93, -16, -73, 62, 62, -18, -37, -15, 44, 63, 122, -69, 56, 115, 82, -64, 69, -41, 60, 37, 120, -21, -86, 22, 114, -119, 19, -124, 43, -40, -106, -42, 125, -33, -59, -69, 31, 57, -102, 125, -41, 115, -43, -27, -35, -2, -116, -27, 101, -60, 81, 70, -5, 1, 18, 52, 37, 97, -108, -1, -52, -81};
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
    msg.setTimeStamp(0.9117404823696291);
    msg.setSource(31498U);
    msg.setSourceEntity(83U);
    msg.setDestination(50463U);
    msg.setDestinationEntity(30U);
    msg.frameid = 134U;
    const char tmp_msg_0[] = {97, 72, -116, -10, 38, -7, 18, -11, -14, -72, 57, -41, 4, 119, -23, 94, 29, 109, 25, 113, 63, 100, -27, 107, -76, 73, -30, 27, 85, -7, -102, 36, -94, -11, 2, -110, -78, 5, -98, 33, 99, -15, 20, -13, 50, 73, 66, 17, -89, -110, 81, 39, 4, -55, -10, -80, -15, 68, -123, 64, -112, -27, 84, 54, 78, -8, 74, 46, -72, 43, -90, -82, -39, -49, -28, 117, -112, -94, -72, 98, -48, 96, 71, 2, -116, -47, -31, -117, -73, -37, 87, 72, -55, 52, 3, -11, -2, 35, -8, 53, 16, 4, 72, -4, 45, 56, 68, -108, -125, -67, -10, -89, 24, -20, -118, -36, 80, 121, 106, 35, 36, 126, -56, 10, 28, -124, -85, 36, 76, -56, 94, -78, -95, 65, -116, 113, -1, 126, 24, 95, -55, -105, -45, -57, 6, -95, 10, 98, 21, 29, -7, 25, 27, -26, 120, -23, -46, 39, 23, 88, -9, -9, 88};
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
    msg.setTimeStamp(0.7805023253676765);
    msg.setSource(53290U);
    msg.setSourceEntity(139U);
    msg.setDestination(64241U);
    msg.setDestinationEntity(165U);
    msg.frameid = 15U;
    const char tmp_msg_0[] = {-118, 40, -33, 29, 94, -49, 97, 111, -116, -99, 28, 21, 65, -113, 57, 82, 103, -57, 86, -4, -104, -122, 105, 100, 58, -19, -106, -126, -103, 12, -27, 41, -91, 11, 107, 2, 38, -69, -107, 102, -123, 58, -81, 123, -79, -53, -79, -29, -93, -26, 54, -52, -70, -64, 73, 17, 46, -40, 96, 69, -94, 55, -36, 78, 15, 15, 52, -69, 82, 109, -49, 67, -123, 75, -95, -48, -56, -20, -51, 60, 125, -124, -51, -98, 118, -51, -82, -71, 56, 17, -115, -39, 64, 2, -43, 20, -20, -23, 84, -44, 79, -10, -112, -63, -85, -73, -64, -43, -16, -32, -25, -45, 91, -48, -31, 78, 116, -117, 31, 111, -81};
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
    msg.setTimeStamp(0.7083410415366879);
    msg.setSource(40981U);
    msg.setSourceEntity(54U);
    msg.setDestination(15177U);
    msg.setDestinationEntity(104U);
    msg.frameid = 77U;
    const char tmp_msg_0[] = {124, 10, 58, 81, -82, -22, 101, -26, 82, 66, -119, -116, 115, 40, 27, -41, 114, -10, 99, 17, 123, -126, -88, 117, 49, -112, -89, 46, 43, -89, -10, -111, 80, 69, -69, 29, -95, -113, 13, 54, 74, -28, 42, 7, -53, -118, -75, -26, 90, -2, -19, -72, -96, 9, -68, -97, 100, 76, -31, -91, -54, 94, -63, 117, -119, -117, -34, 44, 55, -25, -23, -7, 112, 35, 103, -62, -59, 65, 113, -6, -24, 27, 45, -55, 99, -126, -91, 98, -39, 47, 20, -89, 104, 54, 7, 82, 57, 16, -9, 89, 4, -84, 46, 58, 32, 32, -40, -123, -60, -82, 76, -92, -16, -29, 19, -108, 64, -68, -55, 0, 21, 45, 63, 112, -2, -95, 123, 3, 35, -3, 89, 50, -71, -45, 33, -96, 51, 27, 69, -52, -84, -71, -79, -32, -62, -57, -82, -114, 32, -37, -86, -107, 94, 116, -8, -38, -48, 2, 78, 106, 86, -35, -40, 104, 73, 79, 113, -69, -76, 110, -110, -42, -58, 1, -47, -86, -105, -87, 35, -102, -34, 125, -122, 57, -123, 87, 99, -40, -92, -21, -55, -51, 32, -94, 13, 30, 37, 18, -108, -113, -81, 31, 92, 58, -99, 10, -72, 110, -49, 20, -57, 97, 113, 10, 88, 37, -92, 119, -106, -118, -83, 56, 41, 107, -124, -117, 110, 107, 64, 40, -14, 33, -112, 14, -57, -63, 50, 23, 8, -92, -68, -112, 67, 70, -87, 76, 43, 3, 79, 83, -32, -118, -69, -87};
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
    msg.setTimeStamp(0.9503833229560271);
    msg.setSource(60717U);
    msg.setSourceEntity(15U);
    msg.setDestination(9004U);
    msg.setDestinationEntity(12U);
    msg.fps = 222U;
    msg.quality = 178U;
    msg.reps = 148U;
    msg.tsize = 219U;

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
    msg.setTimeStamp(0.2941131333354211);
    msg.setSource(32804U);
    msg.setSourceEntity(254U);
    msg.setDestination(5341U);
    msg.setDestinationEntity(136U);
    msg.fps = 10U;
    msg.quality = 229U;
    msg.reps = 179U;
    msg.tsize = 108U;

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
    msg.setTimeStamp(0.09734438978775817);
    msg.setSource(55447U);
    msg.setSourceEntity(16U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(174U);
    msg.fps = 61U;
    msg.quality = 69U;
    msg.reps = 95U;
    msg.tsize = 90U;

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
    msg.setTimeStamp(0.4973001126560732);
    msg.setSource(24713U);
    msg.setSourceEntity(14U);
    msg.setDestination(47419U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.13863221717395657;
    msg.lon = 0.10154391127004969;
    msg.depth = 179U;
    msg.speed = 0.7439817349032131;
    msg.psi = 0.07631239747810614;

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
    msg.setTimeStamp(0.5380707479308524);
    msg.setSource(16835U);
    msg.setSourceEntity(251U);
    msg.setDestination(38872U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.14868151649552142;
    msg.lon = 0.18951781436857518;
    msg.depth = 92U;
    msg.speed = 0.3237760960684941;
    msg.psi = 0.08030528373654255;

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
    msg.setTimeStamp(0.3937727476134868);
    msg.setSource(60398U);
    msg.setSourceEntity(48U);
    msg.setDestination(56763U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.3309497327316737;
    msg.lon = 0.7075706064940468;
    msg.depth = 73U;
    msg.speed = 0.19193161471635634;
    msg.psi = 0.7721849850889686;

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
    msg.setTimeStamp(0.9983211571433598);
    msg.setSource(41109U);
    msg.setSourceEntity(55U);
    msg.setDestination(14001U);
    msg.setDestinationEntity(76U);
    msg.label.assign("IOWZMXSAPNCDHOWVSSNQKRIYEYYOTYAJHNWMMMTUZGRVKLLIKHVQHJXGJBWUGOQNKCIBRRLOHXQCXQVZPTPPITJVFTFCRKJFARYEF");
    msg.lat = 0.31738375023065823;
    msg.lon = 0.23234895636413622;
    msg.z = 0.9531438159683472;
    msg.z_units = 194U;
    msg.cog = 0.5269248751982045;
    msg.sog = 0.8203671273386036;

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
    msg.setTimeStamp(0.6208598406379553);
    msg.setSource(60730U);
    msg.setSourceEntity(200U);
    msg.setDestination(14192U);
    msg.setDestinationEntity(162U);
    msg.label.assign("ULOUNVNQJYLQAHMTZMFFFCLDGMVELVIYSWHAYMKKTUNXWUWQXACBRVPYZVNQQLMDXVZCEABAGWHOEADSNXBTZYSIIWEUDDOSAGQTFPPYEVBCITNJVMYUSIPKTSHSOWULFSGZXOMZOOTXHKMGBGELXROEWKJUCQJONMDK");
    msg.lat = 0.17177537420686795;
    msg.lon = 0.09707576361564874;
    msg.z = 0.11676708130191693;
    msg.z_units = 234U;
    msg.cog = 0.3649372356460465;
    msg.sog = 0.2620424902246473;

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
    msg.setTimeStamp(0.4483726582228613);
    msg.setSource(18603U);
    msg.setSourceEntity(116U);
    msg.setDestination(45862U);
    msg.setDestinationEntity(40U);
    msg.label.assign("IHNSUFNJEEPOJETZADLGWMXIXQH");
    msg.lat = 0.9561171113356584;
    msg.lon = 0.851533590637847;
    msg.z = 0.3566471092811081;
    msg.z_units = 44U;
    msg.cog = 0.23432152530489914;
    msg.sog = 0.9742056796713301;

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
    msg.setTimeStamp(0.1783001597105318);
    msg.setSource(5101U);
    msg.setSourceEntity(156U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(164U);
    msg.name.assign("JLHUZSJJJEENKLQRKN");
    msg.value.assign("IKUJKXWDPAQNDQMZQBAXIRDNNRQYHFHIOTVV");

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
    msg.setTimeStamp(0.9491798208198068);
    msg.setSource(15506U);
    msg.setSourceEntity(68U);
    msg.setDestination(24746U);
    msg.setDestinationEntity(30U);
    msg.name.assign("XRKQKDGFMJEVIUDWYLHMXWXFORKYOUVYZGWVBAQHQZWCXNDPCIJEEBEKVIYRUCFTHCZSMAMXJBKUNWLYHVVDOBIYKLQBPJ");
    msg.value.assign("PUJFQVYZDYJTPDLVVTERSHJIUDPTONKXMCVTPZKQNIFHHASKOWAFRVLACKOSJHEFKADYEIMGPTCGLRQWDJZSCXEVBPGHNKWQDUQNWKBKLJVTYHBBBZZOHOMRBIMSXEVQTJSJGXRSCQGEIGNWGULBE");

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
    msg.setTimeStamp(0.22729411193114268);
    msg.setSource(25442U);
    msg.setSourceEntity(253U);
    msg.setDestination(21756U);
    msg.setDestinationEntity(74U);
    msg.name.assign("EAIYMIDALSEYVQRYNHBFTQOMPCOULTZGYPDREYSSYEZCDWLVBLFHXDPFVXTLKFGMQUBIJGDPDB");
    msg.value.assign("LYSXURJIUG");

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
    msg.setTimeStamp(0.9661084905969384);
    msg.setSource(32824U);
    msg.setSourceEntity(210U);
    msg.setDestination(39205U);
    msg.setDestinationEntity(180U);
    msg.name.assign("IHFFZZIDUUPHAAHXMQFSDWDOPPFUREXYTRWNPFMZURXPTWZGLPZELWRXXDCVOSHLSCGRGBOJGJSLOTTSXSYRVZDZNHHUL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CUISKUDWPRXXOPCQZNOSKJVADJLOUBSWRGGRRSVPWBQMCMDWQYVKLFDBHHRUGHWPJIBPNLTHAIYOOIMMMPHCQSEDHLXMHLAEWHTCFZVLQYQSMZOITVKINTQZMHLNTMSHFDCCFPUTNCEYFJADVJKXXFJZRDZYFZTQAJOWKEVKNNEXXAZLPIFBFIYPAUEVBBORJKGAGWOWSBVLZTUZBSTCPGJMGRKXENUAY");
    tmp_msg_0.value.assign("OMLJQBMEREUTDAGVUDGXPNKZIACHSKVPPYOFUTDWPAUELRQDINPWHL");
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
    msg.setTimeStamp(0.2691744845272981);
    msg.setSource(10715U);
    msg.setSourceEntity(39U);
    msg.setDestination(17293U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ZFCNBSIMLSTRMIDRAINCEYDETDNCDCIBLJEYYWRUZOQJFONKSTVHCMGFUSIFTULHXYPLVXBFHZJWAOYZPQIJXLAISDQPEHRWILIUKLZOBHCDYWNLQMLOMMHYUWAVSFPEWWFSEPEVVNPZPHNGTTARCXFHODCRKEEBTZXKLSOPDKUXTOCNBVEWAYSHJWSBQDPKNPQFMJYKJQQDMZHGVGVYUJTAWMR");

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
    msg.setTimeStamp(0.6418116660399323);
    msg.setSource(12436U);
    msg.setSourceEntity(108U);
    msg.setDestination(52712U);
    msg.setDestinationEntity(52U);
    msg.name.assign("AHYGYDSUEDPNPWNXNKWVQYLNHWJEOCWVYEGUMQQOEIMPZCJIPZTUQXEQVLMJIXZOJFTDOHMAIEKTHWFDCUWDOADGGTOJWNGXFGLZAT");

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
    msg.setTimeStamp(0.438132465069595);
    msg.setSource(30913U);
    msg.setSourceEntity(45U);
    msg.setDestination(33677U);
    msg.setDestinationEntity(134U);
    msg.name.assign("CPSFPHBYPMFQTNUXRGEVROLPZBVJARWTJMDWNAOELHPPUEFHQUDJBHCFIZVWGBVGNVAMAZZBWLQFKTDGGIPWHMHUMVFSUQLBRSZUHXYPXDSBSMDWFJIXFMSBKHCRTFLCYOEISYBZGKCAQIYYAKXLDOJWXKWIOLITEWOMVOONVMKVDJZAXGDGQCLJXREWUGLKIZKZCREFESCRPACMRASKQL");
    msg.visibility.assign("UTHHLHJHZFODXOXMNMXZZWTXYVLMZWEUQKOL");
    msg.scope.assign("NKWOVIKCUPBMTWLLRYUPJPIEGHNRHRYDFGZTBTWRIJEMHXBSVDVKKZCCBXGUOXXTNDNRLHYGZGMDWUUOXEFZTXGTUWJXMRZRIIHMSOGNMVDQFPRNWWZPDPWNTJTZBZGMSQOJHTWVMSNCLSQVSAEAVVZOAFILEQQSIJAOICPCPCLJOEEVYEQSKAA");

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
    msg.setTimeStamp(0.2180835014519822);
    msg.setSource(25955U);
    msg.setSourceEntity(117U);
    msg.setDestination(27776U);
    msg.setDestinationEntity(154U);
    msg.name.assign("AVLSXKJZUPTYOHADCBTNXHUFGYBIQIMPRTCEKQIJQEFIFBVYZLZWNBHOQQGECRNTLHZAIOYBJPEELJEXRCZSVLSSHTSYFGKHERAFTDKRRWEDMBNOVWBDCQOZZFWGPHNSVRKBXPPUUNSUMFXHAWWLGJXYJSUUMYKV");
    msg.visibility.assign("YPTCJBZTUEQWKQUBDOLSGKVEXUCPMOFLCYDGUJRZAQVMHSFKOKODZEQKQFLSUDRLNJBH");
    msg.scope.assign("XKHQKASCOUFAKPECSNMFNMPUVCRIZCRUXQPBMHGYRNNCOTTNHRUSYIBDEHVWOQOYGEDAQMEXRYOLLEVPPLVJIQBARSKXOTWJJDJVVKJYFEMMZZNWZWEFWFAQVDFQKZDIAMRLZZSCBSLGIDXWHTFBAXGXNTUT");

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
    msg.setTimeStamp(0.6384632079568744);
    msg.setSource(17898U);
    msg.setSourceEntity(83U);
    msg.setDestination(30015U);
    msg.setDestinationEntity(187U);
    msg.name.assign("SCTFUWXMNSZKSPJORGXZANTZJVVWCYCHXLEGWTOVXGRGGSTNIRYMMPQYJM");
    msg.visibility.assign("GNBSLUFRQGDKQJIVWVSBCORBVOLCECMHYSBHGZSSBIJUUDLVWYLTKHVSXWEJQULNLEJTJGOAXRENAJJIFRROKACOYZGNUVPDLCZNLHDOWKEZBUEAXSHPIFUHMFPVJYCCGUQAQMZXYYCDMBQRMTIQOWFANYIMGKMT");
    msg.scope.assign("KPTEAILEOJKDBBRJWNUTQCZPRHOKWBUQWGSJRBORUQQNMAWIQZQPOZUVLJKHHCGICAMIZVSDTHROCXNFAEWMJYHFVWNVQMLMLUVFSL");

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
    msg.setTimeStamp(0.3598475529272447);
    msg.setSource(1933U);
    msg.setSourceEntity(25U);
    msg.setDestination(3580U);
    msg.setDestinationEntity(36U);
    msg.name.assign("SNYLPVTSBSZDBDINPPQMJSYRCNRSTKBFQDDZIMYFGZSDPUTBNALYJZLVXJMSFANEAGLNNWXFZYFYPEVIJEOUAAFTEXKPWNCWPUDIHILMIRJXQPJXMYQKGYUEDJAPOWBKRJUECAACCVZVHLDOHGIDUQQSXRGLARWFQBOQRVYWLFPMQMEHVNHHWBNHOYWRFZTCRMTGG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IEHAEJQQBKYLXPXVTZBFAGVJZTSYNOVWYRPSDODKGMSQGXWXKNHXPSDQKQRPTMUPXTGSHJZEHEIZBBVCBZOGXMBZGLGGWMFNBMJNASYNOLDITWPTAYINVLBKBHFGDUKXUSAFOIINGQN");
    tmp_msg_0.value.assign("AHKCWOYZEUVRUZXFBLVFLKSUQNRITPCDCJLQFSASAUKRDXEIDKLVGWOBICYOGONRACNITUNFHOBPXNJSIADSJHJJZMMQHGXVJGFKPYFEBZOHFBHZLYTYOICCSWLLWYTMBGBVXQJAHDQADJFNMRQFDOORLRNPIZMTIPPOVMYGYAUMEGBEWQKERZKVSMXPMDDXTS");
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
    msg.setTimeStamp(0.05645027897953747);
    msg.setSource(38273U);
    msg.setSourceEntity(247U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(220U);
    msg.name.assign("RNJCLUNVMIBXUNDFDZXGGUAOQXDHMKWMQYZSIGWUWRCZVTUWIOLPBUQDSTLLCJDHAIWKWSGVCAYCHWBAXLHTGOSCZVBLAJZHKFVECELTYYKQKEJDKSTFFYBDTMIUBPXPQBEWOOXAKRKCGEHVGILKIYZUVTRJLFZFSRYFAECPFXBNMJMMFZOGWRTCXAQNZUNJSOGRRINEKPJEYISEBRQDFNOTHOAWPSMUIQDTXVBAQHHNL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GMGZMPCTESWKPPYSICSBSXVKDFSDWA");
    tmp_msg_0.value.assign("GQRLUMRDTYMXGEVCALOBVYWQIRXUWLUJNTVGHZPREB");
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
    msg.setTimeStamp(0.8389724806199561);
    msg.setSource(55004U);
    msg.setSourceEntity(35U);
    msg.setDestination(7048U);
    msg.setDestinationEntity(60U);
    msg.name.assign("LBXIVMDKMMZVSWVPKFGPZZGFOAJIYCLNBFYEFPFZTASZLDNCHKWEBVARWYAFQISIDKLHZGJRLJSQDGWCPNUGFXLQJURYADCAEXRTSWETXTPLUCFXYXFKHIPWNHYRJHZAVMYUEUBKMDVAAXSBBWEWVJCLYOBLPIGMXGZW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QHDHIZKBKEXQGTROLDPHRJJFQERELPMSVABEWTQBZAASEORIJHKPCUNBZDHJGXXNXUTWDUMAVRIHSORLMPGELFKFFCNRIGUXKYRCDAYQJJOYDWFSZNASPBOFIAKVGWOFOZMUUZCSBOE");
    tmp_msg_0.value.assign("HIFUHVOWRMQKKUKCNEXLJXEVZMQASRPYBKWEWLFSPUNOXTZGCNTQUUIHBPQJQTPSKRGOSVCKJLDRENYALDDNMNXHBIOYJVZFNEZCVEQKEIFICAMPODXRGXFAMCIMFSUWPDFHLGWJSUTSYVJVDVDOSFTIRRWHYXYZNTBAZAJVZLQGBDQDJDZBYOXCELABRILNRMHYGUGNEXKLOHZOYIAWUQFFSRZTPC");
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
    msg.setTimeStamp(0.5384852238574587);
    msg.setSource(16748U);
    msg.setSourceEntity(0U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(231U);
    msg.name.assign("LXNKPWZDHFAWDOQFYIAIRVZVCYMKEHJNKXFJGWHJXRFOWBPCWLYDFDVGGBKRBVXDKXUEVZUAYHTMQXEPWEZQNZIOXSQSLGANLESQGEJTLYXFJHRDQI");

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
    msg.setTimeStamp(0.2543863247368907);
    msg.setSource(3353U);
    msg.setSourceEntity(104U);
    msg.setDestination(6800U);
    msg.setDestinationEntity(35U);
    msg.name.assign("QPLZMCZATOFWHEDYDFFYJFCXTOSGKXKCPFZVRKJGJYHPBHKQCGWTSRTDRGBRXUHWETANIOGIRKUMUIQPTAKSOZBSNHWNEVEGQDAHIDJFISBTGPWQJQCBVYXKZVLTSQNDDAKNZN");

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
    msg.setTimeStamp(0.5482830740881997);
    msg.setSource(7895U);
    msg.setSourceEntity(199U);
    msg.setDestination(61032U);
    msg.setDestinationEntity(35U);
    msg.name.assign("GYSYQWOXJCUIWJUCRGXDTPVKKUYHZOBBQVNKMBGVETFDECHYPIVHEGDPCAWAWHYROXNZIBFGJAYZSYNXRQNJLFMCXBWFSXUHSGUDOIJLFJEZTCBATMYLNAATSVEVBOCUQUJAIHSPWQTWZEITRNMQXKAIZQXMKLBURELVBGNFUKMMLFOJHORKNDIMZPJQDPGRQFSQCDKPRFDCZEOADFNZKTRMKJSGALLTRIVS");

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
    msg.setTimeStamp(0.28857185866515866);
    msg.setSource(58860U);
    msg.setSourceEntity(76U);
    msg.setDestination(50183U);
    msg.setDestinationEntity(15U);
    msg.timeout = 291305655U;

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
    msg.setTimeStamp(0.5344308671067177);
    msg.setSource(7929U);
    msg.setSourceEntity(22U);
    msg.setDestination(31628U);
    msg.setDestinationEntity(76U);
    msg.timeout = 4235479983U;

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
    msg.setTimeStamp(0.6323880737318309);
    msg.setSource(7593U);
    msg.setSourceEntity(76U);
    msg.setDestination(58036U);
    msg.setDestinationEntity(234U);
    msg.timeout = 3332988787U;

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
    msg.setTimeStamp(0.4663585298197961);
    msg.setSource(9123U);
    msg.setSourceEntity(1U);
    msg.setDestination(56864U);
    msg.setDestinationEntity(15U);
    msg.sessid = 3143845331U;

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
    msg.setTimeStamp(0.2256062028413841);
    msg.setSource(30887U);
    msg.setSourceEntity(197U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(198U);
    msg.sessid = 419181748U;

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
    msg.setTimeStamp(0.01903958783284765);
    msg.setSource(3147U);
    msg.setSourceEntity(237U);
    msg.setDestination(35069U);
    msg.setDestinationEntity(225U);
    msg.sessid = 453815587U;

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
    msg.setTimeStamp(0.24312754488167398);
    msg.setSource(26556U);
    msg.setSourceEntity(157U);
    msg.setDestination(64733U);
    msg.setDestinationEntity(6U);
    msg.sessid = 3636602965U;
    msg.messages.assign("AFQTNIJVFTGYCHKPGJTZQUDXSKVRSADDKGNAAZTBWFABGJWNOZWHEZBOZFLOXUJNWRXYIYUUDHELUIFVJYDCOSDIHFLPCFBOHRLZWXIULTTQMYMMJVLNVSPXHIDYYOCSVMROFCQPCSCOEGZSCEYLWTYKBUKPJPKVJBADQNKPGMUQEXHWDXBXAPNMRSHVLNQWBOWCZ");

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
    msg.setTimeStamp(0.8825695733493346);
    msg.setSource(9216U);
    msg.setSourceEntity(12U);
    msg.setDestination(60295U);
    msg.setDestinationEntity(210U);
    msg.sessid = 352352855U;
    msg.messages.assign("RCUBXYZFZVGUTUEGRNXQEQJIGKPHYVDOSMWJHLNLTXTQSCRRKSTPSFTRDKCKZNJXVDVLMNJ");

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
    msg.setTimeStamp(0.0009489110216148733);
    msg.setSource(52149U);
    msg.setSourceEntity(144U);
    msg.setDestination(25785U);
    msg.setDestinationEntity(245U);
    msg.sessid = 9517988U;
    msg.messages.assign("BFYVLGKZUYATZGEGXYKXRAYJUHRFJAAKWAZLMSZQLWIDUVXOOUFRSUIBHPHFWFMINGBXSNOTLQCFJWBVVCVQPDNLJEYOCPAJUYQEDPBMRPMLIT");

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
    msg.setTimeStamp(0.8423519059058112);
    msg.setSource(63601U);
    msg.setSourceEntity(134U);
    msg.setDestination(61667U);
    msg.setDestinationEntity(17U);
    msg.sessid = 4074523857U;

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
    msg.setTimeStamp(0.47061511177911663);
    msg.setSource(585U);
    msg.setSourceEntity(63U);
    msg.setDestination(6130U);
    msg.setDestinationEntity(180U);
    msg.sessid = 2299228205U;

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
    msg.setTimeStamp(0.009167381841759137);
    msg.setSource(24085U);
    msg.setSourceEntity(18U);
    msg.setDestination(22402U);
    msg.setDestinationEntity(145U);
    msg.sessid = 4084492848U;

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
    msg.setTimeStamp(0.28812044032064754);
    msg.setSource(10838U);
    msg.setSourceEntity(169U);
    msg.setDestination(14790U);
    msg.setDestinationEntity(3U);
    msg.sessid = 3593521847U;
    msg.status = 244U;

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
    msg.setTimeStamp(0.513655841396196);
    msg.setSource(48757U);
    msg.setSourceEntity(4U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(239U);
    msg.sessid = 205177055U;
    msg.status = 71U;

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
    msg.setTimeStamp(0.37934513743211296);
    msg.setSource(18238U);
    msg.setSourceEntity(10U);
    msg.setDestination(38387U);
    msg.setDestinationEntity(84U);
    msg.sessid = 3653041882U;
    msg.status = 215U;

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
    msg.setTimeStamp(0.873458493864258);
    msg.setSource(7955U);
    msg.setSourceEntity(142U);
    msg.setDestination(37201U);
    msg.setDestinationEntity(71U);
    msg.name.assign("ZVVSVYSIVEKUFKBRTDWUUZEORJJGGEIYEBHAEDGXIAXEMAVRUCVMXCHTGBCBQWYQKGSXBTIROSNQUHYKHWYJRSRBGFOTHOLAYPCXDYKNZNZYORIANDNANJTXBBBAWCVKMQCZDNTQSKNMMTXWDKLEEICPTIUQHFGZRQFOWAIOTAQLVYPEGJWJPMHQCJRNIPT");

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
    msg.setTimeStamp(0.6228933895378412);
    msg.setSource(33200U);
    msg.setSourceEntity(67U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(3U);
    msg.name.assign("YZHXRXOBCEIFXJZDGUJFLEHVJVWFEQHPHACCDVANVJCSPIXQMZHWBAHQIFLZRIAUGNXYJRWMITGINHROBGULTULXHGBNATOKTHESAFLQCYQRTODRQSMBZKIHOFYVERFGYWLBVKFEEXOKJCJYKJKPCUPPMKGNSZSAKZGMKTGUNWIDOQN");

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
    msg.setTimeStamp(0.8058279795616778);
    msg.setSource(41121U);
    msg.setSourceEntity(152U);
    msg.setDestination(32239U);
    msg.setDestinationEntity(165U);
    msg.name.assign("DRFBEUEGVOCYXDJNQIDZCQFBWFWLCOXNLCPGNPMPRWUIFLZOYFAMKKNIMTHUKSABQVPYQJLEAXCMCPVCRJNEJVICWJCXZEADYNRXTZHBKHOEKGTUZWFYPNWHOJHWAZUEQGFYFNTBXHWJLUA");

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
    msg.setTimeStamp(0.3867224410532034);
    msg.setSource(24816U);
    msg.setSourceEntity(195U);
    msg.setDestination(44613U);
    msg.setDestinationEntity(127U);
    msg.name.assign("OODBMTRCMAOYZCMTHFALNRBXJHUHOZGAYYDUJKUBQFGUQWXIFMRRJXVDKWIECWLONTODGHOWXXXCKRL");

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
    msg.setTimeStamp(0.8618789596395563);
    msg.setSource(64213U);
    msg.setSourceEntity(63U);
    msg.setDestination(47964U);
    msg.setDestinationEntity(198U);
    msg.name.assign("YKWRLSKGLNVUJDAXQCMCORNFKSVQYDJSYJXXXCJAYADVRZSAWAOBDMAPARTQSYRMMWUEGGOPLIKQSZGDNXCDCJDOOWOPEESXRINETNTQFKVNFXOUULPTTWZGZZBXCFVTNKLHCMXSHGYOQVROALLZJBLDIWETRBXYVKJIANPWHERBUPNBEPFZHIPDQBZLZCHQNU");

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
    msg.setTimeStamp(0.013277142500983552);
    msg.setSource(51254U);
    msg.setSourceEntity(167U);
    msg.setDestination(35061U);
    msg.setDestinationEntity(130U);
    msg.name.assign("VOYGSKXLAFLITRLOVAWMBFRRAGBSUBQTRIBPGXNVKHHWYQRFYSJTIYJSCTZZAAAMRJPAIPEMWMHGCNKQUNLJFODLJODXWNXXOFCSCC");

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
    msg.setTimeStamp(0.512373309727256);
    msg.setSource(49403U);
    msg.setSourceEntity(81U);
    msg.setDestination(59161U);
    msg.setDestinationEntity(85U);
    msg.type = 37U;
    msg.error.assign("GYTELROWSJTHIFVURYXIOLXMIOUUQLTYOEQDOGYGOWRYBBBROFGIYNRJCQKAPYNXYVCUKQFVFQCENZZHADSBKJWSTSGWZTGINJADXUZWQDHIXMXGPKKSYQEMZNXUPCPIWVDOGHULBPKELMTZASVSJMMUJLELVLHVRETIPJPRTBKURILLVKBVZRBYOFEJSPRQQCNAKHBPHNCGIWMAZNDS");

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
    msg.setTimeStamp(0.6680706769309902);
    msg.setSource(62693U);
    msg.setSourceEntity(108U);
    msg.setDestination(18117U);
    msg.setDestinationEntity(36U);
    msg.type = 236U;
    msg.error.assign("IFSKFPUVDPVZDXSHCRKLEYYTGUZYLAANUAFCHCTVPKQIRZRQLFFMWXNJBLAEBVXCJZFDUXEAPCYQKJLLQSHGYJHNIMOONFQYDBLKTNZPLKEFTNHYODWIJMOUREBRSVMJIUGYXODYXGZUZMICUENGIGUCIOPWNDKEVIOOEYURMGGPSBWSLQRSVBQARSMOWPWWSQTCIVMAJHOXBXLXTBTQRNTTMDWPCJAEJWG");

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
    msg.setTimeStamp(0.15272180194917384);
    msg.setSource(62490U);
    msg.setSourceEntity(166U);
    msg.setDestination(4505U);
    msg.setDestinationEntity(31U);
    msg.type = 220U;
    msg.error.assign("RXSXHBTEZHSVKMNWOLCLPTTLGEYQZQKSREAENTJPLKMGLCUZFLFAZFSNB");

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
