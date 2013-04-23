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
    msg.setTimeStamp(0.633731337336);
    msg.setSource(37106U);
    msg.setSourceEntity(29U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(161U);
    msg.state = 120U;
    msg.flags = 105U;
    msg.description.assign("HTTMQSJJPQPUDNDULPQWRWOLAZFBUAKTIXSXOXDVCFYRAHHTEHOQTACCVLCHWSXKFUMIQIHSKZKXCDGGIDTAVDWJVNGOSFRTZJJCBJSMSBBUGLJNHBYWVPEOFBRJIEBELOEEXOBYNTMZYRYNAYDIFJPEWMKNYUMIFDQUOPLBPQEZWRDCMLXQKUPRA");

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
    msg.setTimeStamp(0.667623158717);
    msg.setSource(2529U);
    msg.setSourceEntity(87U);
    msg.setDestination(6990U);
    msg.setDestinationEntity(148U);
    msg.state = 232U;
    msg.flags = 240U;
    msg.description.assign("MFHNUYDPFGZPCXOQIKENRBYEFYIUHNZWRJGLDCEXIPPHDPBOMBNHCWGYJWNEFZOBOTSLCQFYXBDIFNAMVESZMRAKKMGUKGTFUWKRSOKAOQGQUOGCXNJVEBUIQCQJSUXKVZAJWYFEIPEUOWUUCYRXBOSVGTJSWZYMLOLKSFMYTDJLLHGZWARCBVSRDVDDBLDDAXHSCQLZEITARXPSKF");

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
    msg.setTimeStamp(0.362100396909);
    msg.setSource(23518U);
    msg.setSourceEntity(177U);
    msg.setDestination(21106U);
    msg.setDestinationEntity(196U);
    msg.state = 147U;
    msg.flags = 87U;
    msg.description.assign("NDWMOQPWWIMGBRMTVTDRRLGQOORTPAKQWEOWZABFWELVHGUXEABIMGSNZCCRQPVJZQCTPPKICLFXRYHCGGITBSMKKXKVZKUBECINXBLSWRNFAJCEXZJFZABWYLHXATYNOHGPUZFOZVDINWQYJ");

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
    msg.setTimeStamp(0.282548686288);
    msg.setSource(26366U);
    msg.setSourceEntity(11U);
    msg.setDestination(41792U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.107647491938);
    msg.setSource(38218U);
    msg.setSourceEntity(249U);
    msg.setDestination(1312U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.34508139104);
    msg.setSource(992U);
    msg.setSourceEntity(20U);
    msg.setDestination(56682U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.173659045966);
    msg.setSource(49861U);
    msg.setSourceEntity(140U);
    msg.setDestination(22354U);
    msg.setDestinationEntity(31U);
    msg.id = 98U;
    msg.label.assign("CYCNYGNBIDCLWDHYQQ");
    msg.component.assign("BGRLSJYOSNUAFGQZKPHTATLPLDMHJIIQUMIEMSBDJIVWXWKUWBZCFVNYZSVFRPGLVQHDTOZYWUZLLBEIIPKHPMAPYBNAKJTYCTPOWXJDEWOBYCMXXKTXKKHZMNVRUFNHSERCUBJHEQPANUFOGUQXSOVXGFMQVIQVGYVBQFOCTHZPCWXQFLNXRWTDEOJYCQFYKADWSBENEDLHAGLKBFAMZCDMXTWORICMSSIVH");
    msg.act_time = 41600U;
    msg.deact_time = 54955U;

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
    msg.setTimeStamp(0.788949555589);
    msg.setSource(27209U);
    msg.setSourceEntity(86U);
    msg.setDestination(21510U);
    msg.setDestinationEntity(92U);
    msg.id = 32U;
    msg.label.assign("ZMYHEDZRSWSJDMTHQPDIJIGKMABIGDRLWHVSUTBUENTAEFVNZMXUMFSFESIFJPHHBIUJVYUZSENKABOQEQWPWPTMXXORWBHWNODZVLTSVTXHY");
    msg.component.assign("RYJTEQGRBFPFRRAFPPQCLSZARFLFAKMUASUADUSZVKULSSTXOVMVXQVTWGOOGAYECJZZCELFEBIKXWRCNPZTXAMSMCTPTRYNVGWANDVYIGHFINVHWDDQKNLFWUYTMONMCWLKYPTRKHPNLGCGBHIBIIJQLPXBJMCBSOCIOXZCZFGUOKUPDEQPHKUBJISJTVTAJZKBQZNVRDMEMYDJQJW");
    msg.act_time = 35863U;
    msg.deact_time = 22702U;

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
    msg.setTimeStamp(0.439509862938);
    msg.setSource(6969U);
    msg.setSourceEntity(160U);
    msg.setDestination(27454U);
    msg.setDestinationEntity(161U);
    msg.id = 96U;
    msg.label.assign("VWYBPBAIVSFQOFLMUGBYDNKDOBIQEWHFHVHCYHEMMRZXHXUSSCDCPDSHTZIGGHHLTJVXDZXJJNPUFUOBLLNELVEATEPLSICKBUNLPDKZOLRXNTQGYSBQCJGEPTDQICKAMWZOXJMRNL");
    msg.component.assign("KUBJOVATAQAVJQTYJPHFUONRRRLJBTTUYAANEJWYYAESGSQYPPLWWJWDQDLHILTICEEDXYOZXCWTKSOGNDLPEXQLLSKYXMARIMFGIKHSGZIZRKGCAQRPHVMMHLTNUKFGBLNNM");
    msg.act_time = 13556U;
    msg.deact_time = 14616U;

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
    msg.setTimeStamp(0.172682953597);
    msg.setSource(8990U);
    msg.setSourceEntity(177U);
    msg.setDestination(49799U);
    msg.setDestinationEntity(54U);
    msg.id = 167U;

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
    msg.setTimeStamp(0.553354383573);
    msg.setSource(4786U);
    msg.setSourceEntity(160U);
    msg.setDestination(9287U);
    msg.setDestinationEntity(190U);
    msg.id = 62U;

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
    msg.setTimeStamp(0.223080503054);
    msg.setSource(42238U);
    msg.setSourceEntity(75U);
    msg.setDestination(61813U);
    msg.setDestinationEntity(35U);
    msg.id = 103U;

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
    msg.setTimeStamp(0.302599341217);
    msg.setSource(43797U);
    msg.setSourceEntity(130U);
    msg.setDestination(21358U);
    msg.setDestinationEntity(172U);
    msg.op = 105U;
    msg.list.assign("PYGDRXBRCHCJVZAWVJTJSQVILRFFPSVCAEASXOWXBBPAMZYUUZRMWAXZKOEQLEXRNSDSQFNFNADHHUGIGBMTLYLFNQYGCRAZYSORMHZ");

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
    msg.setTimeStamp(0.810343172832);
    msg.setSource(43756U);
    msg.setSourceEntity(3U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(145U);
    msg.op = 152U;
    msg.list.assign("YMFACLSNMFDXXVBSDICKCLLYMANZXCIDJZBFOLZHZEVYGUAPKSFRROXCZURVIOGNEWJRXJJAYUBMBPPOTFIOKNLOQGUNFBKSWWLQTUYHKSXZCTGGKSXEDJWE");

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
    msg.setTimeStamp(0.456420288529);
    msg.setSource(14169U);
    msg.setSourceEntity(15U);
    msg.setDestination(44690U);
    msg.setDestinationEntity(121U);
    msg.op = 24U;
    msg.list.assign("DSENDKASHCXULDCHTONDJLLJHKKTUETXUAODTAFZLEHOBNFIQSODHELITNWMMNDGHIILVKUVQGIBPQPRZWRNAYZLPAUSZXFYXYOMRTICSCTNBNTWJQGBZ");

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
    msg.setTimeStamp(0.721090782518);
    msg.setSource(10371U);
    msg.setSourceEntity(10U);
    msg.setDestination(55563U);
    msg.setDestinationEntity(208U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.198698792763);
    msg.setSource(55382U);
    msg.setSourceEntity(208U);
    msg.setDestination(22739U);
    msg.setDestinationEntity(141U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.0973416266681);
    msg.setSource(28655U);
    msg.setSourceEntity(157U);
    msg.setDestination(62081U);
    msg.setDestinationEntity(237U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.477578918509);
    msg.setSource(51431U);
    msg.setSourceEntity(192U);
    msg.setDestination(39917U);
    msg.setDestinationEntity(55U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.0507261000731);
    msg.setSource(53818U);
    msg.setSourceEntity(118U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(119U);
    msg.value = 142U;

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
    msg.setTimeStamp(0.243440157267);
    msg.setSource(35723U);
    msg.setSourceEntity(123U);
    msg.setDestination(43269U);
    msg.setDestinationEntity(217U);
    msg.value = 133U;

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
    msg.setTimeStamp(0.538938963023);
    msg.setSource(3464U);
    msg.setSourceEntity(251U);
    msg.setDestination(57782U);
    msg.setDestinationEntity(197U);
    msg.consumer.assign("GGVVVMOHXGKXGPQDMJDHUBNISWHYAMYBNDJAITJNNZETAHYTAVQWWXXJCZNWLKUEJLSLRMUSDLDPEMPQXLIZGSHYSKSEPHAMCRFXRALERLLEXPABVAENWWBPIAWKGOQTNUOGJ");
    msg.message_id = 14618U;

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
    msg.setTimeStamp(0.54641374662);
    msg.setSource(20285U);
    msg.setSourceEntity(71U);
    msg.setDestination(42550U);
    msg.setDestinationEntity(241U);
    msg.consumer.assign("MPYCKJFVEPXSMYWZSTDWWDIZLQAOIEJNJLUFNUQWGDKXPKGWUGRUZFUSFBNYLFRXVNAJBRZBNWNYTESAWSWBFIDKUDDCATRVZGJPPRZHOSECIIQUYAQTLAOQYXLCBHPQGYXHZXMKOMHICWBAKNEQPMVTGXBLGTFGMCUKNDBEVUFBGPPFTVOHCRSJYNIOOHWMSFACGOZSVVQJLRMOLAZAREBJPRXMLIOKCCUYVKQEHTJRHDHTDEQXLMIKJXTVN");
    msg.message_id = 46251U;

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
    msg.setTimeStamp(0.589294211345);
    msg.setSource(10894U);
    msg.setSourceEntity(63U);
    msg.setDestination(30260U);
    msg.setDestinationEntity(91U);
    msg.consumer.assign("QXINTFQAIDLFFMRNOLLYOPVQQVNIRNPUTLRHVICHYGPBWDTNIJMSVANAWYGMRGPPKHTEMXURGG");
    msg.message_id = 10848U;

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
    msg.setTimeStamp(0.414309712568);
    msg.setSource(34361U);
    msg.setSourceEntity(145U);
    msg.setDestination(34270U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.747820637072);
    msg.setSource(59731U);
    msg.setSourceEntity(54U);
    msg.setDestination(19006U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.552107637537);
    msg.setSource(38932U);
    msg.setSourceEntity(151U);
    msg.setDestination(41851U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.294061338231);
    msg.setSource(50518U);
    msg.setSourceEntity(74U);
    msg.setDestination(64300U);
    msg.setDestinationEntity(75U);
    msg.section.assign("EFMOEPSNENFQTMTBFETBCLZBSGWJUSEDVHXZIVYOYHJNUIYFILMZTOBZKJCOEXVPUZHQCQBTWSDJYYTVOZWPKNMVCKGNRPCWXPLDWHRKJGGROEFQVRJDKAKMYNMJIIKQQDADESEBAJDTOS");
    msg.param.assign("PLSBYRDLZSORAGCXJYNQZSAWZUHYIZWVOLRHIGBUHBFYTWXNTPZGXQLLCIGFTUOYGCEKETCGBYOEVWBIQMRKALYHOMSGRTHEVVDELIPPXYPSZGKCOFDKPZMCOASMNDHHDUTCLROBMY");
    msg.value.assign("GTYROLMWAIYKFNJCVZKQTUTVTQZGCWLCOPKLSYCCFIZVDSNCPPCTYRPKWPVJRGKBUDDOIEBXBENAXQJTKJQZXMHAXXDHQXWBINVZZTMSULJLWKRUYMOEXQRUDJAOSWRNHVNYPNWHJEAISBQRILNYFQJSZHAGOVIDLHUVTFJDEXYHPYFEBJAEZGMCBLYIGFDSKTIWICHAOFBMEPHMSMRGUVUXXGACGEPDAHGRBFONRED");

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
    msg.setTimeStamp(0.568782884299);
    msg.setSource(20607U);
    msg.setSourceEntity(60U);
    msg.setDestination(43102U);
    msg.setDestinationEntity(139U);
    msg.section.assign("AQSJOVYMZXSEEOXRWJNRQXCZCKCHQRATVRPJQDBZWHBOCSEVLPQDIHDGUTOUXTHEFWABQEDYZFJGLLBOUHR");
    msg.param.assign("ELBHWSKZPAGZQEGOEGMHPYYRNCLXJNDWUWJTDZKODWJGXJLLINPMCKDW");
    msg.value.assign("DBGKDFGTRTFSQXBRLWNDGWTERTPHYINUVCKYVLKTXWZCRKNKUYODZIDXRRFQGEJPDSWLASBCHHBRVJOOJPKNZFWUYZOCGOJLTYZQZWQARFHACHCPRVILALXNLVXXUFYQJNELAIMSFYMOQJICXIXHAWCWDPTQCULPGUVJGBJMZDFEZZWBESXZAMVKKVRUHPIBHEHVPMNEKPSGBSPXOC");

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
    msg.setTimeStamp(0.658339174913);
    msg.setSource(55971U);
    msg.setSourceEntity(20U);
    msg.setDestination(24140U);
    msg.setDestinationEntity(234U);
    msg.section.assign("ZEXXNSDPUWVOZBOYBGKLTUERRQFLMLMKITRMSIIQBXZETWYVNIAJTROMOHAEOXDNIULEWPICQLNDANVVFPGKDWAROSTCKKMPRNGKPJYGZPSQYAGJEJCFHBQTCLMJEHEGQYDNDIBSDCGVZAPWCKZFNR");
    msg.param.assign("WMMXTVFBJFLXYCQAJOBEBNWMXLQOKFQRXTDROAWLTSBAJTVNJQRBXHKUWPCRGGIYWFIFPWDVVHM");
    msg.value.assign("DNHUDAIWRBOBROETYOSREMJNFLIDZNTWOHFGKSLPJFFVRSJNVXAOGPFEZLWVJSBRKQYZAZIEVPKDNVZKQULQXLWOHMACFMZULEEHAFVWCXXWOTXMDBJZAYMPAHPSSQBCUAQHDY");

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
    msg.setTimeStamp(0.80118652122);
    msg.setSource(49210U);
    msg.setSourceEntity(78U);
    msg.setDestination(48223U);
    msg.setDestinationEntity(146U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.972067187033);
    msg.setSource(45289U);
    msg.setSourceEntity(53U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(8U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.614689868203);
    msg.setSource(21432U);
    msg.setSourceEntity(21U);
    msg.setDestination(55622U);
    msg.setDestinationEntity(105U);
    msg.op = 32U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("XPAWBBGYDKFXSVPJSTWOTNGCERSPDPHHKQCPTFMZPMVQRWIHRUUNGECOIEXJSMESOUEWQQWXVMWUMNEJULYLZNXYKYLEOHCDXJMBDADIAROTWOCCBHFQJPBVRZAFHGTYCQLYMNEVYNGBNFZDGLGSSUWPRZZDAXCZGOQVFFXLAMTTMKGDAEXUKLOTBKFQHPR");
    tmp_msg_0.param.assign("EWBVFVDFDRRRBINFUETLSLDGEFDNAIZLPNYXWDIXDHQSAPMPVSHBTXACATSTQUIEWXDLBQYDWYKCRNRXJTBJRUFCYJIPMEZYMYKXGVTOGBCGDBHCLXMVILVPCKBHCYAYEHKMGUSMPDWJJVQINSFAORBHKZ");
    tmp_msg_0.value.assign("EUKOAUIITCETJZVUFFTKPCKNZFJOBDGSAYAZGNZXQQUFPVKQHJUULQNQDSPEZLPJSRBCKXOLDYUBKGAYLAVMVGXTXXVFBCZVFNYYKCFHIYIWSJOAAKDHJMTXVQEZIBYPMJAHWVSBVIQKBHCLJHITMRTAQWFOOGEPDGWEGRNWDTPBRCBRBTYKSNLMNWDMXMQWEFZRLPNJZGLUCGIRXPLSSHZSROSDTXGEQLNU");
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
    msg.setTimeStamp(0.76641755931);
    msg.setSource(57494U);
    msg.setSourceEntity(53U);
    msg.setDestination(19652U);
    msg.setDestinationEntity(197U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.788990821123);
    msg.setSource(35189U);
    msg.setSourceEntity(25U);
    msg.setDestination(33408U);
    msg.setDestinationEntity(14U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.679631692085);
    msg.setSource(7702U);
    msg.setSourceEntity(116U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(185U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.469921528232);
    msg.setSource(63782U);
    msg.setSourceEntity(64U);
    msg.setDestination(10402U);
    msg.setDestinationEntity(236U);
    msg.total_steps = 227U;
    msg.step_number = 197U;
    msg.step.assign("OQNGYPYHJQKNBBCWXHOGLDMXICUWYQBXBBSFJGPSWXWKHULUIMNEUBHDCQWOAGNPJPZENARFDQRLOOQNZLSHLMQPTMFXDBUGIVUTRPVVILZICDHEINUYPDDDLWRZBXMMGZJGSJTAEOLRCFBPVHFNVEHRMNANTIMWSGLVZUFDIBGAJKZRMUJSWZJIECXRMFFESSVIXTPREOTAEUCAXOLYKKYAAWDYPHOCAJEYTYHGQRSYVKZ");
    msg.flags = 16U;

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
    msg.setTimeStamp(0.152055665288);
    msg.setSource(17698U);
    msg.setSourceEntity(86U);
    msg.setDestination(3142U);
    msg.setDestinationEntity(86U);
    msg.total_steps = 114U;
    msg.step_number = 125U;
    msg.step.assign("BNJDIDKCSPCSHFWANQLMOVEJJETUCSYVXVCCVZXZJVNDOYAEUHEZGDKOWHLBDYFQFHIUPQLNPWMIWUYQUC");
    msg.flags = 151U;

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
    msg.setTimeStamp(0.91581165133);
    msg.setSource(4753U);
    msg.setSourceEntity(247U);
    msg.setDestination(6695U);
    msg.setDestinationEntity(117U);
    msg.total_steps = 78U;
    msg.step_number = 206U;
    msg.step.assign("ILRYCQTKCQLYUCDAABESBFRDJCNUVQVWRJMZHIKMNDUOPVHRMSMRQESKHHOMOFHXZMMZXUKVYVNZVVXFGXSQERLUFZETDAAJYDDAUKRFARSYZNWKJNTBQCSBYNZCTYIQXQP");
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
    msg.setTimeStamp(0.436442424901);
    msg.setSource(44011U);
    msg.setSourceEntity(47U);
    msg.setDestination(36117U);
    msg.setDestinationEntity(7U);
    msg.state = 37U;
    msg.error.assign("IRNRFHVYQDPAYHRCYWWXCHFFLWFMYLZLADIGNLMQCUQJXVQKTOQOZJMTGEECHYTVNNPCYBUNLVKAMXEUHXJGEAWIULCDSJDGLOWKJPRPLZQUAXSVVKGETP");

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
    msg.setTimeStamp(0.355854810476);
    msg.setSource(22485U);
    msg.setSourceEntity(12U);
    msg.setDestination(30469U);
    msg.setDestinationEntity(197U);
    msg.state = 30U;
    msg.error.assign("KBNRMMEREQSLPMVHWQTIIJYNPTMAECFBSDUOWYVPTXWKHTMBYSIOMCAPQLKCPPVXRWEMSKWUFIQCKSZLJAZCFASVBRNX");

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
    msg.setTimeStamp(0.111201413074);
    msg.setSource(21487U);
    msg.setSourceEntity(232U);
    msg.setDestination(10352U);
    msg.setDestinationEntity(199U);
    msg.state = 3U;
    msg.error.assign("DMGQUHGUIEIJWOYAYBULENTGTXRXEDAVKTBMEKUHASKTBJPQZLJPCBDJLPRYNYSWACGCNQXWLIJROIGXDGJATQ");

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.253398194432);
    msg.setSource(58558U);
    msg.setSourceEntity(216U);
    msg.setDestination(3784U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.0170780961045;
    msg.lon = 0.551140592594;
    msg.height = 0.924291106833;
    msg.x = 0.42544576425;
    msg.y = 0.203478893361;
    msg.z = 0.199533852544;
    msg.phi = 0.607470911851;
    msg.theta = 0.817470274951;
    msg.psi = 0.994686511904;
    msg.u = 0.7566558728;
    msg.v = 0.859580715172;
    msg.w = 0.0395302816669;
    msg.p = 0.159199478884;
    msg.q = 0.935572671148;
    msg.r = 0.519468007531;
    msg.svx = 0.816140332023;
    msg.svy = 0.651696656776;
    msg.svz = 0.310898710105;

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
    msg.setTimeStamp(0.732747760924);
    msg.setSource(27287U);
    msg.setSourceEntity(202U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.525364324196;
    msg.lon = 0.420007355949;
    msg.height = 0.862871861474;
    msg.x = 0.44564771251;
    msg.y = 0.527717519724;
    msg.z = 0.237572308427;
    msg.phi = 0.835430950161;
    msg.theta = 0.779904539516;
    msg.psi = 0.776587824117;
    msg.u = 0.303241571902;
    msg.v = 0.740422168697;
    msg.w = 0.0650855916067;
    msg.p = 0.382810647806;
    msg.q = 0.651997378954;
    msg.r = 0.199983467253;
    msg.svx = 0.175660753882;
    msg.svy = 0.509902301076;
    msg.svz = 0.000820125545443;

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
    msg.setTimeStamp(0.209877286014);
    msg.setSource(94U);
    msg.setSourceEntity(28U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.437811695598;
    msg.lon = 0.892879043348;
    msg.height = 0.813909884977;
    msg.x = 0.632530598815;
    msg.y = 0.887041733636;
    msg.z = 0.430317250079;
    msg.phi = 0.200732279865;
    msg.theta = 0.94943800075;
    msg.psi = 0.974062579993;
    msg.u = 0.965092948913;
    msg.v = 0.477710346811;
    msg.w = 0.0917447712471;
    msg.p = 0.135749455588;
    msg.q = 0.399586351844;
    msg.r = 0.0112603474585;
    msg.svx = 0.603225910966;
    msg.svy = 0.657572776919;
    msg.svz = 0.938883905231;

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
    msg.setTimeStamp(0.546640068047);
    msg.setSource(39570U);
    msg.setSourceEntity(51U);
    msg.setDestination(8098U);
    msg.setDestinationEntity(209U);
    msg.op = 165U;
    msg.entities.assign("JTAHAIEPFBQTFVKWGSPXWIKXPYUXZNTNBSWCEYNGQXJZVQOCBGXWTCDMGINURJCTGGPAMUFOJRGFBOOYFZLFBJEQNWOETVVHWKPDRSOHBLWQDHEEXLOGWKLHRQPKIDONJQ");

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
    msg.setTimeStamp(0.0418544268696);
    msg.setSource(24320U);
    msg.setSourceEntity(151U);
    msg.setDestination(62798U);
    msg.setDestinationEntity(28U);
    msg.op = 191U;
    msg.entities.assign("ZNPFPANCEJLEEIXGVMWBABULKHTYUUVLRYMBVVQXTPRZKKZMLQNPHFMWMVBXWL");

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
    msg.setTimeStamp(0.168426717941);
    msg.setSource(64080U);
    msg.setSourceEntity(40U);
    msg.setDestination(6242U);
    msg.setDestinationEntity(98U);
    msg.op = 212U;
    msg.entities.assign("PZHPTCVLGVYIEIDJRMNDDLKPCZCZEOGQAAAWRJQROCPNULQZOZSHUCVDGVLFBWTBYIEPTSHYWUREJBRLAXUSMEWBKKEFNSCFSBJYHHQPQEJKUQDMMESB");

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
    msg.setTimeStamp(0.57973446986);
    msg.setSource(35842U);
    msg.setSourceEntity(238U);
    msg.setDestination(10801U);
    msg.setDestinationEntity(9U);
    msg.type = 95U;
    msg.speed = 58157U;
    const char tmp_msg_0[] = {-29, -16, -13, 56, 26, 91, 4, -23, -74, -85, 102, -63, -1, 36, -31, 113, -65, -44, -57, -83, -49, 57, -39, -5, -13, -10, -80, 78, -125, -110, -123, -13, 92, 40, 20, -20, -5, 42, -88, -92, 97, 94, 97, -20, 111, -53, 96, -109, -24, 125, -105, -112, -62, 84, 75, -91, 9, -73, 68, -6, 71, 64, -85, 110, 46, -49, -25, -113, 31, -16, 71};
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
    msg.setTimeStamp(0.317265830872);
    msg.setSource(8923U);
    msg.setSourceEntity(152U);
    msg.setDestination(43052U);
    msg.setDestinationEntity(184U);
    msg.type = 91U;
    msg.speed = 37119U;
    const char tmp_msg_0[] = {-41, 52, -2, 88, 34, 100, -51, 79, -77, -104, 93, -100, -81, 65, -121, 122, 41, -109, 24, -92, 84, -1, 116, -23, -87, 49, 16, 61, 59, -58, -114, -63, 52, -8, 32, 20, 124, -128, -67, -49, -39, 17, -87, -19, -8, 88, 13, -87, -110, 78, 103, -50, 36, -32, -27, 116, -50, -67, 24, -107, -115, 14, -69, 13, -13, 125, -50, 13, 15, 114, 34, -117, -58, -7, -66, 64, -35, -44, -117, 122, -84, -74, -6, -86, -72, 70, -51, 30, -47, -60, -124, -71, 51, 60, 107, 6, 96, 43, 79, -22, -27, -67, 21, -89, -112, 44, 109, -81, 57, 89, 9, -113, -4, 93, 17, 114, -2, -4, -25, -83, 14, -74, -14, -72};
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
    msg.setTimeStamp(0.037765300839);
    msg.setSource(26174U);
    msg.setSourceEntity(67U);
    msg.setDestination(9782U);
    msg.setDestinationEntity(160U);
    msg.type = 204U;
    msg.speed = 24304U;
    const char tmp_msg_0[] = {-12, -107, 45, 110, 123, -58, -81, -81, 48, 50, 63, 65, -123, 67, -38, 46, 56, 66, 76, 30, 7, -85, 2, -2, -103, -94, 73, -99, 13, -33, 58, -10, 98, 40, 60, -102, 72, -38, -82, -75, -39, 11, -37, 54, -6, -105, 93, 82, 98, 72, -74, -80, 118, 105, -60, 109, 50, 15, 62, -12, -48, 11, -11, 22, -90, -19, 120, 75, 120, -75, 21, -54, -39, 52, -4, -102, 79, -20, -36, 82, 55, 100, 47, -91, -110, -62, 46, 34, -90, -111, -99, 104, -100, -47, -114, 32, -5, -60, 123, -79, -55, -42, 108, -30, 45, 68, -68, -7, 123, 81, 83, 126, 19, 113, 78, -122, 82, 81, 34, 84, -109, -42, 27, -35, 25, -87, 125, 62, 54, -15, 117, 76, -4, 3, -110, -60, -31, 110, -1, -52, -19, -126, -3, 86, 39, 106, -51, 72, -43, 58, 55, 2, -30, -126, 45, 52, 86, 1, 0, 5, -109, -58, 119, 62, 105, 24, -24, -100, -5, 11, 67, -69, -126, 0, -70, 14, -78, -122, -26, -30, -107, 117, 107, 117, 78, 114, 61, 0, -24};
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
    msg.setTimeStamp(0.949352157116);
    msg.setSource(36330U);
    msg.setSourceEntity(29U);
    msg.setDestination(25314U);
    msg.setDestinationEntity(18U);
    msg.available = 1603821173U;
    msg.value = 57U;

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
    msg.setTimeStamp(0.00203126464401);
    msg.setSource(61342U);
    msg.setSourceEntity(205U);
    msg.setDestination(3576U);
    msg.setDestinationEntity(191U);
    msg.available = 2032403829U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.440509574776);
    msg.setSource(53755U);
    msg.setSourceEntity(229U);
    msg.setDestination(22045U);
    msg.setDestinationEntity(90U);
    msg.available = 1818620114U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.907768338323);
    msg.setSource(19988U);
    msg.setSourceEntity(216U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(193U);
    msg.op = 178U;
    msg.snapshot.assign("RBRPESTBPIZBJNVTUSYTEKCHEGUGRGGHXCMJQ");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("TGCYCODVWFYAMHBVZEMRZDKMUNIHJGAZVXSBOFANPF");
    tmp_msg_0.visibility.assign("MZETRIOFRVGLJELLSZYCHIWNSXCJSRZKQVXSDJTTWPDMKHWCOLKAOYQHIYUODKDJUZSBHOSNVES");
    tmp_msg_0.scope.assign("PCACWEWVKZTVJCJAXEVEPVQRGBKAEIZCSYVDVAUTFRHTBFAPJHMEYVXNGKANNGSNJADOWFOZQPSLQDLFVHNZHXJTPLULFCXOCGDNJDEWCQEBSUUBWTLJZBRTXWHWURKDTBIOPPYMKUDYZFOOHMGHDITSEQYYRXJWXLWJD");
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
    msg.setTimeStamp(0.143676549282);
    msg.setSource(61287U);
    msg.setSourceEntity(52U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(34U);
    msg.op = 95U;
    msg.snapshot.assign("TXULHLNUSOHMRGHPYVNKIQBPXMMXHUVATHVQPHOGKYCVQLPTWRTDLJRJGMUXQGCNJEYAZWOVGOWTOZDHRXGAUYBSEABWNLXOMFIHBAQSSYCSWFDJPBIXXJEAJRFKYISIVFC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JZWLUEDDOPOJRIJPXUKMDWFTCSRVYTCJHTISDWCGTSIQXMCRPXSTOBVEBETBGPRIUSNZELUDSKXFBNKLHHGFSGQWKVQYHIJQNGELWZVVFYZQXAKDVWMYDGFWJBOJPNECZLUQAOYLHRBO");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 25842U;
    tmp_tmp_msg_0_0.custom.assign("IUYRAJPZFKFPMFHMDTNVCSOPCJNXURNOPOLS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RawImage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.width = 16645U;
    tmp_tmp_msg_0_1.height = 9700U;
    tmp_tmp_msg_0_1.channels = 34U;
    tmp_tmp_msg_0_1.depth = 186U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {19, 28, -53, 42, -46, 12, 33, -80, 14, 61, -76, -57, 51, -7, -96, -49, -77, -108, -33, 123, 30, 99, -127, -128, -105, -54, -90, -22, -24, -39, 39, 51, 60, 76, -33, 16, -44, -51, 98, -104, 28, -31, -99, -70, 47, -105, -75, 1, 46, 102, 19, -23, 24, 80, -82, 85, 86, 84, -74, -91, -33, 114, 95, 83, -73, -121, 31};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.414758519032);
    msg.setSource(35155U);
    msg.setSourceEntity(97U);
    msg.setDestination(25484U);
    msg.setDestinationEntity(142U);
    msg.op = 205U;
    msg.snapshot.assign("ZDCALJOHMXOHVVJKDMZRLCDEHMTXCMJGAVYBUXMBQTLEMVOUCSTGXPFPWDLCQFBRTVFITTAYHJFIAZJOBGOAREJMEYVBMNWFWFINCVLSEXWBYPSXWIEPPWTZGLTSIZHSFJPDUGKERWKCGNVNNGRFKFCHIPYXOIQPGORHHCJSZNUHJNQEUJOAUUTASNOWZQDLKCQPLKGKPDYALIWURKXZZTRBLIEBIXKEOMBYSQVY");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 3039U;
    tmp_msg_0.name.assign("SQVERCMOPFBXNHH");
    tmp_msg_0.custom.assign("OFLTPGKZFVCLMARGTHXNAZEQINNISCZJEQDSPTTAVLHUMHLYVBSOPHWXNLSDORSFPNIVASQWQUTTMDNRVEDMKEUMIJUWYYZLQXGZXNZWQFHWZBECRKOFYURCZISFPOYDRUVKKLDRKKLDIEWDAKXBKSHSCATJMJHCXCYERZEAGYHBWYPUBNQEJGXICUZIOBGXHMWVWQNLOOYFJIPTJFGMDUMTCYPFAPXHMOWKQGTVAPGVBRLBAQJUBFC");
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
    msg.setTimeStamp(0.810048887731);
    msg.setSource(30566U);
    msg.setSourceEntity(39U);
    msg.setDestination(21489U);
    msg.setDestinationEntity(16U);
    msg.op = 175U;
    msg.name.assign("KZBXFXBONTWQTOGFAIGKUZUZIVTNHBGDIFJJRJAVKNJIWHDOEACFKHBMKLAXPYLLUDRJRDQUPZQCUNOLXAPUMCOLCDYASNCKGRUOKQFAYWXSFWMEQNKHIRYZGXZAHPEGMLSWYIDYNMDLTLVFHWHGNONOTSUMWIBWVEYSDXTRGZTVHRBGRIECQZBNFCJOWPSYEPEJJPCXIVBHJSSSKJWTIMM");

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
    msg.setTimeStamp(0.866930997198);
    msg.setSource(455U);
    msg.setSourceEntity(186U);
    msg.setDestination(4746U);
    msg.setDestinationEntity(57U);
    msg.op = 217U;
    msg.name.assign("FFXYITWRRBGOUULOTUPCDDQSELKLYGNFZDRVATHCWNEGRAJSXCQNBLMPXLDXSP");

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
    msg.setTimeStamp(0.120162248835);
    msg.setSource(33576U);
    msg.setSourceEntity(170U);
    msg.setDestination(29180U);
    msg.setDestinationEntity(58U);
    msg.op = 25U;
    msg.name.assign("EQGGLBRMGZBXWCYKIOCKEHEXFUAVEHZKXORKQHDEWMDZBWCCRCUDJDYNXO");

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
    msg.setTimeStamp(0.432851769476);
    msg.setSource(39207U);
    msg.setSourceEntity(92U);
    msg.setDestination(32840U);
    msg.setDestinationEntity(124U);
    msg.type = 149U;
    msg.htime = 0.777956383978;
    msg.context.assign("QOMSOZRXHYTBFZLHCNNKBOACQTVUEFFFERLDCDKCJZIXBXSZZQTPMMXSTGYSLTQVXNAGTDGIAQIMQFBTZWPRDUGAMHHXYCWMGECTODVRPILBYHFWJGHPTMHSXINRJMUOAHNJFEYWWCQBFSOVEZKEOWMNKFDXJVXLNGUNHPKHKSACFJAJDORVWZIUNZDIGKYEPCUSUANGOYWUEECRQYUEVQBJP");
    msg.text.assign("XGMITFPAGPOYLMTEAGVIHOKJNNOTWGFQPPXSZBUIMRBJKYQSVZXAISZWAEGPPQXFLTUAKJPKDWCFUIWOEYAINPWJWZVDOODNTJQSHDHMEMNTNVLHJURRSLBEHFVXY");

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
    msg.setTimeStamp(0.775325971599);
    msg.setSource(5391U);
    msg.setSourceEntity(235U);
    msg.setDestination(37990U);
    msg.setDestinationEntity(238U);
    msg.type = 6U;
    msg.htime = 0.506006107179;
    msg.context.assign("TZZNKDOIRIHWRRIHAGYIHMHFWCCUAEATYQXYYCGDLKLKFLFTCUYTPFGINZODUIZCEQG");
    msg.text.assign("XSXLJGUWXWYYMMCGUGSDDSNROSIBYFKNVKFWIBHGMTLPLVZSLXMQQ");

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
    msg.setTimeStamp(0.587721316658);
    msg.setSource(55305U);
    msg.setSourceEntity(141U);
    msg.setDestination(31191U);
    msg.setDestinationEntity(109U);
    msg.type = 120U;
    msg.htime = 0.359676681781;
    msg.context.assign("LEYRTTNDBYNLQRXEPTYXAKMSJOCSGEYQWXCXJCHZUWIPNROAUXGTQWFJUCEBZWZQLLUQOJISSDFPUZXWONTBHUAEBGMPKVXWFBXUQMOPQAYIAIMGSBUHWVFVKTQKPECBFNISAKEHMKBFLOBUCXJCHPYAJOQDMVAW");
    msg.text.assign("BYJGBSHEKNWFFIJKRGXVSCSJETSRBWMKWCURFLIVPVCPRJTGHABNQAOOZHBHFYWSIDXUDJAGGSVPCEPZFMTROYFKNWYUDXODXHYPQVWHTSMLJZBB");

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
    msg.setTimeStamp(0.983785151182);
    msg.setSource(32484U);
    msg.setSourceEntity(88U);
    msg.setDestination(51920U);
    msg.setDestinationEntity(144U);
    msg.command = 126U;
    msg.htime = 0.532663216547;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 216U;
    tmp_msg_0.htime = 0.85335801604;
    tmp_msg_0.context.assign("UGJMXISZRNTIJXKIEOAPODDUACXKLQTGAZEAVCFDOVCUFCBILOSZNFRYDUGSETCQIBMYOJCIWJFOAZTFDALSJSKGFIFRXODMPFRMNULBEEUWBYHBLQYZNXD");
    tmp_msg_0.text.assign("MESNHHPBKUNXUZLMIFILDHJNPCUOGJAVWQ");
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
    msg.setTimeStamp(0.7228601111);
    msg.setSource(55645U);
    msg.setSourceEntity(40U);
    msg.setDestination(57724U);
    msg.setDestinationEntity(92U);
    msg.command = 143U;
    msg.htime = 0.243305062909;

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
    msg.setTimeStamp(0.574011244298);
    msg.setSource(56620U);
    msg.setSourceEntity(156U);
    msg.setDestination(25416U);
    msg.setDestinationEntity(212U);
    msg.command = 150U;
    msg.htime = 0.230657575407;

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
    msg.setTimeStamp(0.340575318148);
    msg.setSource(39158U);
    msg.setSourceEntity(153U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(102U);
    msg.op = 28U;
    msg.file.assign("ZJBQDCYXYWHLQCBFGRZREPLVPGLCBCXNKNAXYFUXSMRHGHVHTNYCEEERLSIYQNSBQVMVOCLKPALUZKVIOPXQUAZNGRIGFPVRDSEBNNFRJWWUKAEZOJFDUGKPRGMKJXWKYTJJZBEWASKOPAUZTSNIOMUFT");

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
    msg.setTimeStamp(0.0374750651255);
    msg.setSource(2048U);
    msg.setSourceEntity(24U);
    msg.setDestination(56326U);
    msg.setDestinationEntity(106U);
    msg.op = 125U;
    msg.file.assign("EGGNCSVNKIHCBLKADMMEIWNQTTTVSAPJIBBHXZEOMQHDPRXKLWXVOKIOVVLGATEFUZZHBTYIIXOFCXLRCFMPGEKHFPKYTBIRSJRUPZWDAGWQJCVYRBGJMBVRMYWWZDTHTCOFJFGQGVAESODIAWJMLSIRORNXFBUPULUPFSLKVBFWNSHCZNNWGYOQUUQ");

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
    msg.setTimeStamp(0.631685912567);
    msg.setSource(38851U);
    msg.setSourceEntity(88U);
    msg.setDestination(56168U);
    msg.setDestinationEntity(64U);
    msg.op = 60U;
    msg.file.assign("XAVZIKMMHRLOPBNEOBWPDVTQENTCDHMGYWGJETJIDMEQCXTFCDDZVLKJRTPXFPNISWSNCKBVISCZFYQWCVSWQWLAAQQARYRBRYGGPLRJTFDXVFFNDPOGIWKVFZIJEYMOYHXNZSOTAGUOLUBUBEZNSNYKTQSHXAUGLTOHKMLAKWBDQEHHUSSEHZIEUOXFUXQXOJCRUOCLADPRCGBIXYJKUJASZNEBDYKKWHTRCIBJVNLVZVMFGPQMFPAMZ");

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
    msg.setTimeStamp(0.00327192326807);
    msg.setSource(36718U);
    msg.setSourceEntity(93U);
    msg.setDestination(13187U);
    msg.setDestinationEntity(47U);
    msg.op = 143U;
    msg.clock = 0.22091567955;
    msg.tz = -75;

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
    msg.setTimeStamp(0.199609141302);
    msg.setSource(42191U);
    msg.setSourceEntity(173U);
    msg.setDestination(31166U);
    msg.setDestinationEntity(214U);
    msg.op = 204U;
    msg.clock = 0.411725911427;
    msg.tz = 97;

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
    msg.setTimeStamp(0.938738956077);
    msg.setSource(20946U);
    msg.setSourceEntity(122U);
    msg.setDestination(18263U);
    msg.setDestinationEntity(99U);
    msg.op = 193U;
    msg.clock = 0.830784747865;
    msg.tz = 5;

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
    msg.setTimeStamp(0.145497681737);
    msg.setSource(24157U);
    msg.setSourceEntity(215U);
    msg.setDestination(5469U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.929981370064);
    msg.setSource(42311U);
    msg.setSourceEntity(122U);
    msg.setDestination(47265U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.0686897507402);
    msg.setSource(52486U);
    msg.setSourceEntity(59U);
    msg.setDestination(25897U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.302736200262);
    msg.setSource(43612U);
    msg.setSourceEntity(128U);
    msg.setDestination(27390U);
    msg.setDestinationEntity(176U);
    msg.sys_name.assign("SIETGBSDDFKGSUHYWXQKTHBGDTCFNECCGTFZDXIOMFPZJXOGMIQKRVSKVUBUNCZMNBBPNYYPDLBJAYZWFASPQWDKJJEAKXERHPWRZXQGSAAJGNGVUQRMCNUGJQZEKFWIBOPEDYFLHLYKQYIYAOJQHIVJHZALEWMEVPDTECOVOYIAFVUIOXZDARUEVQCPORSQWLMTSUWLIX");
    msg.sys_type = 150U;
    msg.owner = 58248U;
    msg.lat = 0.945673869544;
    msg.lon = 0.430569097153;
    msg.height = 0.536233134314;
    msg.services.assign("CDWOIDNVUFWYPPDEMELDTDAZQPCLAXTTWOOFRFMVEIZTSNIGHUVEPIXCRNLIKEVALMA");

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
    msg.setTimeStamp(0.114009477369);
    msg.setSource(46997U);
    msg.setSourceEntity(44U);
    msg.setDestination(11651U);
    msg.setDestinationEntity(41U);
    msg.sys_name.assign("BEUJVGSEJPEBJYXMDYQRLTCSITCEJKBYFSKQIWXDDHWNPROWBPJGNTLTPLBVACJYRAWUARFKKXIVVRTXJNVAGTLGOKQQRMNOZGHJRGQZWEZDPFXZCROAVWQUPKESYFCNBVBDLTLVDMBPOAHNUFRYFNGSAOLTSGGJPEHTFDKHIQOAGZSBZNHIQMYXTUIDMMEUWUHHMMIZIEMCL");
    msg.sys_type = 26U;
    msg.owner = 45055U;
    msg.lat = 0.573239763608;
    msg.lon = 0.990097253977;
    msg.height = 0.134121585779;
    msg.services.assign("ZDNIMRUAHQSGFNBHAJZWKSGXDFBTBFTVLTWYDXBYUDFYMZBVLACMPQUFIKRYVAXBHQXSZURUZJCUETH");

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
    msg.setTimeStamp(0.156088587473);
    msg.setSource(37116U);
    msg.setSourceEntity(252U);
    msg.setDestination(7792U);
    msg.setDestinationEntity(199U);
    msg.sys_name.assign("PZLTVPUGUVAXQBMWHBLQHRZCKKGAMZLEYJNXQCFEUKMOGPVQTOXHBMNXXVAHGTFJWWJZQMAI");
    msg.sys_type = 21U;
    msg.owner = 16739U;
    msg.lat = 0.237377960752;
    msg.lon = 0.806930699326;
    msg.height = 0.796464859631;
    msg.services.assign("NSWONJJVOSVLPFKPDBLVEMDJFOROIXRMHYXFNTOBUGJYJBQFLTAMKCRB");

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
    msg.setTimeStamp(0.82835026985);
    msg.setSource(35516U);
    msg.setSourceEntity(56U);
    msg.setDestination(37939U);
    msg.setDestinationEntity(216U);
    msg.service.assign("OOMFOBEVJZGFIXFAGTGYGBQZQUZVDQAUDZLJNMOQKUSZAGPPCKVTFNTPHLJZRNQMHPOLKEGRHGXTIYIAXBBKKFIURJPHYWWYDYGWTJFCHZCNBANQMOXTVKKSPZTGIZKGOIQRPTUKYINMMCWTSBEUCSYUDBLOAKIWRSRUXXSLHNTPRWEVXEUSLDYCFHNBWFJXBVWLQVDHPYIJEHEXCNSWXEZJNVFDWVJLARQCAMEQL");
    msg.service_type = 240U;

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
    msg.setTimeStamp(0.408963611103);
    msg.setSource(52269U);
    msg.setSourceEntity(170U);
    msg.setDestination(3544U);
    msg.setDestinationEntity(209U);
    msg.service.assign("BNKRYCZNZPCOOUWSHUOXWSDLJDTBPQVHBAKYHXLGPKJMMCRWXRSEJMKDRNXCSJGAQFLCOBWEXAPBHQJFARZMNPODVUHFYDVRVCFRVMTFGWKZVUOUMKVJAHXAAVNABEDSQPUZEGQSIWIKYYBXLDCGVTFFIQIORFXNUAJYUGBCSQQETECBISZIZWWPNXTIUYTRLP");
    msg.service_type = 20U;

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
    msg.setTimeStamp(0.898439719648);
    msg.setSource(7263U);
    msg.setSourceEntity(40U);
    msg.setDestination(42584U);
    msg.setDestinationEntity(218U);
    msg.service.assign("CXTVELMFYZBGUIJWXKFYNKNXMXQZIIMNEGLDMECVYAIRMYTMPUNVRTYJAHSAHXFDOQHYAKANQFBOFCMSPBW");
    msg.service_type = 158U;

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
    msg.setTimeStamp(0.791953969479);
    msg.setSource(7841U);
    msg.setSourceEntity(211U);
    msg.setDestination(7781U);
    msg.setDestinationEntity(97U);
    msg.value = 0.41595900806;

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
    msg.setTimeStamp(0.487618660842);
    msg.setSource(53740U);
    msg.setSourceEntity(0U);
    msg.setDestination(41576U);
    msg.setDestinationEntity(240U);
    msg.value = 0.836334880422;

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
    msg.setTimeStamp(0.858347157741);
    msg.setSource(25479U);
    msg.setSourceEntity(125U);
    msg.setDestination(10827U);
    msg.setDestinationEntity(163U);
    msg.value = 0.941664113578;

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
    msg.setTimeStamp(0.819276904047);
    msg.setSource(27122U);
    msg.setSourceEntity(143U);
    msg.setDestination(20649U);
    msg.setDestinationEntity(68U);
    msg.value = 0.927828204781;

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
    msg.setTimeStamp(0.304179171244);
    msg.setSource(34681U);
    msg.setSourceEntity(39U);
    msg.setDestination(56932U);
    msg.setDestinationEntity(100U);
    msg.value = 0.661849198743;

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
    msg.setTimeStamp(0.41737929244);
    msg.setSource(21619U);
    msg.setSourceEntity(199U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(229U);
    msg.value = 0.961250140597;

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
    msg.setTimeStamp(0.495003970146);
    msg.setSource(7879U);
    msg.setSourceEntity(150U);
    msg.setDestination(8322U);
    msg.setDestinationEntity(23U);
    msg.value = 0.385191108814;

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
    msg.setTimeStamp(0.951533424412);
    msg.setSource(62028U);
    msg.setSourceEntity(129U);
    msg.setDestination(4598U);
    msg.setDestinationEntity(248U);
    msg.value = 0.0436176026355;

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
    msg.setTimeStamp(0.236962327635);
    msg.setSource(11902U);
    msg.setSourceEntity(191U);
    msg.setDestination(7931U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0963730328197;

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
    msg.setTimeStamp(0.516374313238);
    msg.setSource(31428U);
    msg.setSourceEntity(221U);
    msg.setDestination(22628U);
    msg.setDestinationEntity(234U);
    msg.number.assign("FTYMLATGRIKXWTMOHZBTVBOOCDGOQOZSAZEATQRSWGKPDWABNTGGLCLBLCPTPUYRFNVXNVRODXUYPVIGNRFRUAEHKSVLJEEJGXNFEWYKUQJHHBRYKITFRBCPFHKNHWOEMMDITYBJDGQGSJIHXZYKXMCCENMLUEZUIQDDIZIYMNVSPUFBAAHJPIZDALHSQJ");
    msg.timeout = 36952U;
    msg.contents.assign("GQMDWYFMOWXHQCBBSUKYFFMBGPIUKOQCRYIGDRLJOJWNSSEPHKJNDHSYRCLLJELAOOSVYADUWIYGQFURPJZSFHLCWDTFCTSJCZCJCQOBZVKXNAUIVTQHBLEOAPZAMBEEVXWNZPNQXMFIAPSUXNFDKMTTHJBGTIRFJTDXYRNIOINKHGHAXZUZVZDAEERBWZHHSFVTGSYXGMUCRIWLULGBKEEXNVPAQTPCQDYRYKJANKPQMVIWVK");

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
    msg.setTimeStamp(0.89848896097);
    msg.setSource(13512U);
    msg.setSourceEntity(31U);
    msg.setDestination(127U);
    msg.setDestinationEntity(63U);
    msg.number.assign("LFFKMMHDCTVTTVISREQIUVDFYEAPCKTTZKLMBUVMBUMRPVOIMFLUSHYJNTQICKJSYBHAEWLSBEZAXOCYKZJFSNYRXVZQSNLCQPWJJUFOPRBVHRNWPYRJQIJXHXXZXWN");
    msg.timeout = 35235U;
    msg.contents.assign("ICREXIAGCSVIXWPUZIDUQYYGNJLEIKZWXUPFCPQCKFDABFHWPTZXHXHPNLPPFGMCOTYMPOJTESTAVHVSLUUHHEBQEDOAJKOMRJWP");

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
    msg.setTimeStamp(0.0165961999171);
    msg.setSource(29979U);
    msg.setSourceEntity(206U);
    msg.setDestination(7183U);
    msg.setDestinationEntity(185U);
    msg.number.assign("VUIBTSVNTHBOVGHHMXATJQTIHCIAIVVBEGUUGYQFXSDIDWSUOLWMERPPJZCACXAPLTKCIYYMTNRPFGLPIZUSBQBCSCLYNUJXNGDKCOAMVQF");
    msg.timeout = 8465U;
    msg.contents.assign("CGQYEZORZYPNJNBADTSPUKZDZWKBBEFIRIBZPUYLUISXHXBPYEWFIUNMQQXJPXFOTRWYUMYDHLAPRRCKMAWTLYOWCALLSBCUEHQGWOFAXPDKSQORDSEKF");

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
    msg.setTimeStamp(0.786475603797);
    msg.setSource(16861U);
    msg.setSourceEntity(213U);
    msg.setDestination(9174U);
    msg.setDestinationEntity(119U);
    msg.seq = 848581534U;
    msg.destination.assign("QUYAWBRPTJKPUSTVFFVSASQIPZZFOKNDNKXDNSHCMECBDJBWKNMARXAIXLNUBQHCCZHGEELVFTI");
    msg.timeout = 33804U;
    const char tmp_msg_0[] = {-54, -118, 97, 71, -104, 72, -67, 49, 48, -95, 32};
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
    msg.setTimeStamp(0.0529322434235);
    msg.setSource(8328U);
    msg.setSourceEntity(132U);
    msg.setDestination(5572U);
    msg.setDestinationEntity(140U);
    msg.seq = 617816480U;
    msg.destination.assign("CUASXZJQDQEWFCQTVHYUNEHVLXCGELWGMLGURIXKAFWXWKTMZDOHPNMUMVUWSSZCVINPJREJWBAIZBTNNPESAMMSGEXIDGRUBXISXRUYCQAZDMKMIPNTCFFXLWYBCSGINGTAQRBGLZSVAKOLNBSFPXRKEYLQFJENRAFFOCSMOBIKHPVVNBWTOLKARKXYGDKJJPOYHYVQDZTFBLHTHDEJZRTJWMPZOOWCARODZKDFJYTHPIUIQUPQ");
    msg.timeout = 6758U;
    const char tmp_msg_0[] = {-82, 59, 109, 126, 86, 75, 108, -5, 50, -4, 36, 114, -35, -54, 82, 69, -41, 22, 35, -98, -36, -58, -24, 28, 116, -125, 64, -19, -115, -62, -72, -8, 76, -32, -56, -39, 44, 70, 83, -52, -49, 10, -81, -89, 16, -111, 60, -61, 98, 34, 48, -44, -64, 81, 55, -98, -52, -39, -57, -53, -31, 45, 8, -76, -46, -39, 8, 43, -91, -63, 1, -58, -91, -111, -45, -114};
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
    msg.setTimeStamp(0.356156013694);
    msg.setSource(36706U);
    msg.setSourceEntity(56U);
    msg.setDestination(42180U);
    msg.setDestinationEntity(86U);
    msg.seq = 588174679U;
    msg.destination.assign("YMRFUAFJEVZCSZLWHLCMJKWGIAFGDTPHQXLPKOYDIYCMJCDGGMUUIRNXZVMFSXEBHOQSPYOWFSVFOEIIWCIEPYQDRNGWUSTRMPHVOLNBPXAQUCRTZUVBKBQQROFENWCOGJSPGAHENSQSCWTNGTEYBMAHNATIJZHEDAHILDTBQKSXYTLZHKMCXUGXJQVPDBZMBULVZNJRNULVPBTMQKWSZYXRGAHDYYBXLOKKDL");
    msg.timeout = 64936U;
    const char tmp_msg_0[] = {116, 56, 117, 51, -81, -108, 25, -97, 73, 72, -67, 114, 115, 5, 102, -68, 47, -4, 92, -66, -28, -102, 0, 28, -119, -90, 72, 43, -17, -81, 87, -2, 18, 50, 43, 10, -102, 104, -3, 28, 11, 33, 39, -93, -45, 70, 5, -57, -15, 30, 56, 79, -81, 48, -47, 23, -87, -89, 114, -84, -122, 123, -31, -54, -72, -19, -32, 93, 79, 35, 73, -124, -39, 56, -17, 37, 65, -58, -19, -56, -126, 87, -115, 71, -81, 56, 44, 24, 23, -12, 72, -94, 89, -8, -6, 40, -104, -14, 85, 64, -19, 96, -24, -26, 113, -59, 83, 122, 3, 55, 103, -95, -89, 5, -54, -113, 52, -26, 14, -102, 27, -11, -86, -82, -20, 78, -61, -83, -100, -58, -60, -73, 2, 66, 94, 22, 124, -120, 106, -117, -82, 51, -105, -127, -127, 68, -31, 25, 32, 73, -26, -107, 58, 24, -58, 116, 17, -91, -57, -56, -96, -14, 63, 104, -22, -14, -87, -78, 47, -28};
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
    msg.setTimeStamp(0.116184999352);
    msg.setSource(26167U);
    msg.setSourceEntity(98U);
    msg.setDestination(65409U);
    msg.setDestinationEntity(79U);
    msg.source.assign("ISETOIEPELGCNBIQLEQIFLLWZINAYSPQQHGRWLJTSYNFBODFOOLTOPKYPXFGMGUPPITSDNTUCCJJMHBYWAAKMRAJOKDDVTXWRJKBAUBBXVRMUVQCKTMHIMTAKKSVHCVNDUEPSJWZDWWQAD");
    const char tmp_msg_0[] = {80, -106, -1, -22, 63, 43, -128, -63, 50, 80, 56, 66, -92, 102, 93, -64, -64, 22, 36, -16, -97, 92, 22, -92, 40, -39, 91, 122, 3, -98, -6, -128, -44, 121, 7, -55, -1, 75, 86, 38, 10, 99, 37, -95, -90, -20, -21, -25, -59, 31, 120, -20, 51, 84, -94, -77, 111, 94, 6, -39, -59, 92, 72, 18, -30, 1, 36, -122, -24, 73, 96, -23, 125, 53, 1, -14, -48, -107, -38, -112, 107, -88, -14, -84, 86, 1, 109, -87, -35, 19, 106, -93, 41, 124, -116, 100, -99, 33, 6, -105, -116, -20, -126, -33, 30, -9, -127, 77, -90, -36, 123, 94, -88, 126, -60, -107, 78, -4, 41, 43, -48, 124, 16, -21, -38, -94, 37, 48, 97, 43, -33, 6, -80, 23, 104, 117, -44, 116, 44, 60, -13, 4, 30, -56, 126, 20, 126, 20, 9, -95};
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
    msg.setTimeStamp(0.375329080828);
    msg.setSource(25040U);
    msg.setSourceEntity(189U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(215U);
    msg.source.assign("NQBSSMNLIQWLI");
    const char tmp_msg_0[] = {46, -71, 115, 124, -36, -41, -2, -19, -83, -19, 77, -81, -75, 120, 123, 48, -39, 10, 61, -71, -63, 91, -85, -51, 50, 100, 50, 108, 27, -59, -3, 117, -110, -48, -98, 108, -13, -76, -96, -29, -122, 121, -76, 26, -49, -25, 98, 49, 96, -68, -97, -66, 18, 61, 94, -98, -44, -34, 47, 57, -17, -33, 71, 31, 88, 66, -74, 15, 121, -1, -62, -56, 68, -32, -3, 31, 25, -96, 56, 44, -67, 78, -61, 79, 5, 96, -66, -65, 36, -124, -56, -6, -77, -98, 46, -116, -98, 113, -83, -40, -6, -111, 78, -8, 20, -53, 10, -78};
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
    msg.setTimeStamp(0.299320031758);
    msg.setSource(7255U);
    msg.setSourceEntity(122U);
    msg.setDestination(40009U);
    msg.setDestinationEntity(50U);
    msg.source.assign("GISULJDVBFZGDPFCJHEOJDEUIAYTNPDEROMAPJOGXEAZFWZBXKTFHTPVBHJXZANSUYPTOTNDLWHRMOGDQWGT");
    const char tmp_msg_0[] = {121, 59, -106, 15, -30, 100, 123, 109, -28, 117, 36, 74, 89, -46, 11, -2, 26, -95, -84, -58, -79, 31, 1, -56, 121, -36, 87, -40, 51, 24, -76, 23, 50, -90, 50, 35, -69, 88, 78, 3, -63, -115, 46, -27, 62, 52, -11, 81, -92, 76, -68, 90, -127, 60, -36, -116, -47, 7, -57, -37, -123, -91, -43, 98, -90, -29, -79, 23, -88, -74, 125, -113, 56, -29};
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
    msg.setTimeStamp(0.589405849025);
    msg.setSource(31057U);
    msg.setSourceEntity(107U);
    msg.setDestination(57886U);
    msg.setDestinationEntity(220U);
    msg.seq = 2584923453U;
    msg.state = 192U;
    msg.error.assign("ZKRDJBALONYJCQILLBDUYOEENYOZCDCAPTBNHZIBLDZQSMCGKWFIMFFSNAFYWBBJRHTMLWGBGPXSRZDIHVKIQQAIJGFUWTPULKXHGOPKESHMWXNYUAWFNDMKYXJYRXIFSVOQPDOCQXUJVMVQVBLVFXCENEZRPVHOEXCONUCAVTTMKEDAGTLBYLASNBEJURDAXDHQYWPKSTIPWSUGHRMRICCTGPOIEJRUTVWKRZZHNHGQAOPJLGTYXME");

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
    msg.setTimeStamp(0.728449502101);
    msg.setSource(353U);
    msg.setSourceEntity(144U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(107U);
    msg.seq = 4200945288U;
    msg.state = 92U;
    msg.error.assign("PJIGVFEHJFOMIAXULNEHBNHVDNVBIZLMJDKANCFWNUQSFCUQZJMKBULTOYKXZFPSGJHRBEPRXYYPBKQROPWJJYPZQSTVSAVYGPTOJLPRMWQHKPLYXTWQDJSOFKYDHEE");

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
    msg.setTimeStamp(0.166260406887);
    msg.setSource(5901U);
    msg.setSourceEntity(207U);
    msg.setDestination(63011U);
    msg.setDestinationEntity(228U);
    msg.seq = 3329785420U;
    msg.state = 16U;
    msg.error.assign("GEASALDLSDIUBFPNBKTEKVBACQMQFCXOWH");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.662090987707);
    msg.setSource(41766U);
    msg.setSourceEntity(128U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(152U);
    msg.id = 217U;
    msg.range = 0.115124658639;

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
    msg.setTimeStamp(0.362701010467);
    msg.setSource(23509U);
    msg.setSourceEntity(27U);
    msg.setDestination(53727U);
    msg.setDestinationEntity(21U);
    msg.id = 218U;
    msg.range = 0.632905922894;

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
    msg.setTimeStamp(0.641595030204);
    msg.setSource(11851U);
    msg.setSourceEntity(151U);
    msg.setDestination(14430U);
    msg.setDestinationEntity(141U);
    msg.id = 251U;
    msg.range = 0.0254713766296;

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
    msg.setTimeStamp(0.642488724694);
    msg.setSource(31914U);
    msg.setSourceEntity(39U);
    msg.setDestination(48396U);
    msg.setDestinationEntity(247U);
    msg.tx = 60U;
    msg.channel = 245U;
    msg.timer = 18713U;

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
    msg.setTimeStamp(0.692579869597);
    msg.setSource(31213U);
    msg.setSourceEntity(42U);
    msg.setDestination(42133U);
    msg.setDestinationEntity(70U);
    msg.tx = 97U;
    msg.channel = 148U;
    msg.timer = 25285U;

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
    msg.setTimeStamp(0.330736139941);
    msg.setSource(11982U);
    msg.setSourceEntity(245U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(219U);
    msg.tx = 140U;
    msg.channel = 45U;
    msg.timer = 17884U;

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
    msg.setTimeStamp(0.852841475233);
    msg.setSource(25254U);
    msg.setSourceEntity(169U);
    msg.setDestination(12620U);
    msg.setDestinationEntity(170U);
    msg.beacon.assign("CRUAONJKWMMAMSEIXHHTIIPYXMLPBDIZXVQCBKAXAWFWGJJJI");
    msg.lat = 0.908997062225;
    msg.lon = 0.315723853524;
    msg.depth = 0.320382912214;
    msg.query_channel = 106U;
    msg.reply_channel = 8U;
    msg.transponder_delay = 197U;

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
    msg.setTimeStamp(0.599242321852);
    msg.setSource(33088U);
    msg.setSourceEntity(92U);
    msg.setDestination(59573U);
    msg.setDestinationEntity(252U);
    msg.beacon.assign("HCILAKXWPQHGATGCCFWLQFAQGTQUZVGYNIVEMKFKNEPLIYMVMKIPEJXNYPBDMKWLSMFULLZIONRUDCBSZBHBOIOSTSLXYQCWCGAOSJGHYFPBDDTMYFFOBEFDVQJEVXYRBRHTAVKXXUPAIEWNXACYQETJLNLRESTKYNUHIUKZEINDOJBUJNJZZVOHHIVRUMJMNCGSMOQAYBZTHTGQDSDXSKBPCWRQGDHPRCWWUJRDGWZ");
    msg.lat = 0.494718245389;
    msg.lon = 0.0154725097832;
    msg.depth = 0.414029136947;
    msg.query_channel = 12U;
    msg.reply_channel = 220U;
    msg.transponder_delay = 79U;

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
    msg.setTimeStamp(0.202206736601);
    msg.setSource(37209U);
    msg.setSourceEntity(165U);
    msg.setDestination(9365U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("NRTLMYZVGBKFNXXWCIMQBRZIHIJLXFDRTFVWLYVYNIVCLGBQSEXIWXKXHPEMSDBTIXMECAMPAQJDEJPFUQVIFZRZFZCGCZUTEUALNJZFHFVLIAUHRISWHOCGPQGROXQPOVLTCRBSLEAPZUVPLTWBKYSNTYQRHWJWKZM");
    msg.lat = 0.356607764444;
    msg.lon = 0.158203937294;
    msg.depth = 0.308522555823;
    msg.query_channel = 129U;
    msg.reply_channel = 220U;
    msg.transponder_delay = 142U;

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
    msg.setTimeStamp(0.758048268851);
    msg.setSource(61733U);
    msg.setSourceEntity(38U);
    msg.setDestination(35661U);
    msg.setDestinationEntity(12U);
    msg.op = 46U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LGSTHWXAKKLMALRAMWOIEJMNNZTBBVMPBEFNOTXSBKHMUMRLLGRKDXKOJZQTYHADOCLJQUAUZFGNAWME");
    tmp_msg_0.lat = 0.903015088005;
    tmp_msg_0.lon = 0.969062071149;
    tmp_msg_0.depth = 0.834315160956;
    tmp_msg_0.query_channel = 104U;
    tmp_msg_0.reply_channel = 62U;
    tmp_msg_0.transponder_delay = 246U;
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
    msg.setTimeStamp(0.388190757725);
    msg.setSource(58775U);
    msg.setSourceEntity(59U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(156U);
    msg.op = 98U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BFSLFXCKZPELTVBZKQIUKQRPYAVTEETDDYHPNGBOWOJKSVDAMFOCGHTJVZUYFVGMGOGZOOAJRFENXELSOVQMVXIRCLTYMBKWHRKIIQNQQSNURRDBFPTJGGYDHZQNJHIAGVPHCIKDWBIJNDBDCNSXCZFXWQJETPMBMZIWEZTJWWFMANNPUUETYOVAADXU");
    tmp_msg_0.lat = 0.471733611249;
    tmp_msg_0.lon = 0.0336568817581;
    tmp_msg_0.depth = 0.882104667065;
    tmp_msg_0.query_channel = 25U;
    tmp_msg_0.reply_channel = 112U;
    tmp_msg_0.transponder_delay = 89U;
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
    msg.setTimeStamp(0.400638942166);
    msg.setSource(41627U);
    msg.setSourceEntity(238U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(251U);
    msg.op = 121U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CWLHOARBSMQTXWGFAFTRDWFFXKVBITMTNPSPUTCBVPIQZEIGOWRRKYWQSIFNURJVAOHYWECIZEZHGLKLOMPESOUSTJIPXGAJUUIDSDNXMSFPFDDNHDZUQKIDVHQQZQEUAKLYRNJDBLZFZJBJMERRWOXXTAXKHBKVPLQCYBGPVTVYSJOVG");
    tmp_msg_0.lat = 0.817920435769;
    tmp_msg_0.lon = 0.479619075369;
    tmp_msg_0.depth = 0.173236183452;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 47U;
    tmp_msg_0.transponder_delay = 87U;
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
    msg.setTimeStamp(0.166056267761);
    msg.setSource(34532U);
    msg.setSourceEntity(251U);
    msg.setDestination(18922U);
    msg.setDestinationEntity(195U);
    msg.address = 135U;

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
    msg.setTimeStamp(0.698416442908);
    msg.setSource(8748U);
    msg.setSourceEntity(92U);
    msg.setDestination(52196U);
    msg.setDestinationEntity(215U);
    msg.address = 53U;

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
    msg.setTimeStamp(0.496988424797);
    msg.setSource(51310U);
    msg.setSourceEntity(5U);
    msg.setDestination(38697U);
    msg.setDestinationEntity(155U);
    msg.address = 102U;

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
    msg.setTimeStamp(0.655773568085);
    msg.setSource(10095U);
    msg.setSourceEntity(241U);
    msg.setDestination(24169U);
    msg.setDestinationEntity(87U);
    msg.address = 15U;
    msg.status = 109U;
    msg.range = 0.501259706995;

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
    msg.setTimeStamp(0.709262112923);
    msg.setSource(7464U);
    msg.setSourceEntity(124U);
    msg.setDestination(14569U);
    msg.setDestinationEntity(206U);
    msg.address = 107U;
    msg.status = 58U;
    msg.range = 0.496308113614;

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
    msg.setTimeStamp(0.901857726616);
    msg.setSource(5658U);
    msg.setSourceEntity(66U);
    msg.setDestination(236U);
    msg.setDestinationEntity(167U);
    msg.address = 180U;
    msg.status = 205U;
    msg.range = 0.362434411249;

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
    msg.setTimeStamp(0.329535876896);
    msg.setSource(28749U);
    msg.setSourceEntity(105U);
    msg.setDestination(16966U);
    msg.setDestinationEntity(106U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 164U;
    tmp_msg_0.quality = 91U;
    tmp_msg_0.reps = 122U;
    tmp_msg_0.tsize = 228U;
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
    msg.setTimeStamp(0.352621094486);
    msg.setSource(50150U);
    msg.setSourceEntity(95U);
    msg.setDestination(20090U);
    msg.setDestinationEntity(238U);
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 64161U;
    tmp_msg_0.custom.assign("XXRHNFMQWGTWZSEXAEYDHVKZALAETHCEHWISXEGBKVDYJBWZGNGVSGMRQTZKOQPXAAJKJUYNWCQWFBNIVPICYNHYMJIIDEFZIZJKVAVZK");
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
    msg.setTimeStamp(0.760975249374);
    msg.setSource(30697U);
    msg.setSourceEntity(221U);
    msg.setDestination(17777U);
    msg.setDestinationEntity(94U);
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("XQMHMZRTUWDEGDABXPQKJWAPZAASLEGFESTBYHRNUSFEUWOXKMDLDKIRAIXNOKTBVCBZAKPWMHWRIICVCRCOPGUFNGNXDKDKUQUKIQHWQMWPFCUQRVEJLGDYQTORFJREBYPYJGMMFPLHBANXNCLFMEJSWYNSZMRIORSUBINTVOOFAXGLTHEPUZFZXCQTGASQKELYEQSBWJGJVYSIPXTOWZZTBUYVOVXVHVADVZODFLCLJYINTJKDY");
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
    msg.setTimeStamp(0.851026332069);
    msg.setSource(290U);
    msg.setSourceEntity(25U);
    msg.setDestination(55357U);
    msg.setDestinationEntity(213U);
    msg.enable = 182U;

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
    msg.setTimeStamp(0.747419710801);
    msg.setSource(48912U);
    msg.setSourceEntity(50U);
    msg.setDestination(59208U);
    msg.setDestinationEntity(144U);
    msg.enable = 129U;

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
    msg.setTimeStamp(0.870949115958);
    msg.setSource(55094U);
    msg.setSourceEntity(200U);
    msg.setDestination(54024U);
    msg.setDestinationEntity(232U);
    msg.enable = 46U;

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
    msg.setTimeStamp(0.369044499182);
    msg.setSource(38201U);
    msg.setSourceEntity(236U);
    msg.setDestination(54603U);
    msg.setDestinationEntity(187U);
    msg.summary = 1U;
    msg.level = 91U;

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
    msg.setTimeStamp(0.671144745278);
    msg.setSource(24466U);
    msg.setSourceEntity(43U);
    msg.setDestination(56981U);
    msg.setDestinationEntity(50U);
    msg.summary = 15U;
    msg.level = 108U;

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
    msg.setTimeStamp(0.649855899711);
    msg.setSource(50363U);
    msg.setSourceEntity(63U);
    msg.setDestination(63873U);
    msg.setDestinationEntity(156U);
    msg.summary = 2U;
    msg.level = 244U;

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
    msg.setTimeStamp(0.149183506319);
    msg.setSource(65360U);
    msg.setSourceEntity(121U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.778266628566);
    msg.setSource(34068U);
    msg.setSourceEntity(247U);
    msg.setDestination(62706U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.890814460185);
    msg.setSource(31208U);
    msg.setSourceEntity(179U);
    msg.setDestination(63477U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.567671993626);
    msg.setSource(56105U);
    msg.setSourceEntity(148U);
    msg.setDestination(61388U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.717016462991);
    msg.setSource(45726U);
    msg.setSourceEntity(107U);
    msg.setDestination(58738U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.144033058908);
    msg.setSource(26142U);
    msg.setSourceEntity(8U);
    msg.setDestination(62498U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.37898506985);
    msg.setSource(6925U);
    msg.setSourceEntity(98U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(75U);
    msg.op = 68U;
    msg.system.assign("FQQSHQXTJCLQCODPSMRZPWSGNJTRQSDYCMXHQEATQXEZLNFUHHKCLRCBWMQDPGWYBDEGTUNLBZEIZFINURRBOSMRXFFONMLUEBOJOHGYTFLIZVVYTXNWWIKPZAULOWIKIFWLTKNBRDIDPHDISGKJZBHYAQRIAJEGXEBCVBRMWKVXX");
    msg.range = 0.555768955643;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.551594109898;
    tmp_msg_0.lon = 0.955044490563;
    tmp_msg_0.depth = 0.0229079774739;
    tmp_msg_0.roll = 0.621485636736;
    tmp_msg_0.pitch = 0.390667198224;
    tmp_msg_0.yaw = 0.565606776017;
    tmp_msg_0.rcp_time = 0.00810690053792;
    tmp_msg_0.sid.assign("HOKAYILEKOXYBEYDLHREUPGCHGAMFSXNFNPVVUU");
    tmp_msg_0.s_type = 173U;
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
    msg.setTimeStamp(0.92155275052);
    msg.setSource(34533U);
    msg.setSourceEntity(42U);
    msg.setDestination(19271U);
    msg.setDestinationEntity(105U);
    msg.op = 30U;
    msg.system.assign("ONRKUIPTIUTKHIWIJWKPXHLGRWAOIMPBNFEXGCCSFZYLGRCYZZRALTZJWDVIJDLKVWBKMHOXQARRXRDBBMLEQOEQXPDNQHVBOUSFNGBEUHGPIQKEYLZAESXNUAWPGAMUAIVGFGMWXNC");
    msg.range = 0.422433050307;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TUKWSQWSFWVH");
    tmp_msg_0.param.assign("ZSOJDRUEHQBPLZUJBKKVPUGKNUMDGRKGXJETVGOLQRJICBNGNLFOZSGITVFFTLAYSLIENNVUBXJGYAFPXSJIQUZHOKYKAWRIRTFTPBOHRTVMDAYLQYPBSOYCCHTQWVUQMLZOLZDKPZGXDKMPVACXEDUQCNWBCZDAYRLCWSOYJMXFETFJXIWHPHM");
    tmp_msg_0.value.assign("BGDTKEWRSLFMMKYZIGOVNBBMUQHOTPCGARHYNFVOMDSEIPCJPQXGQUTOUVJRFWXWTBPFPVILCSLXNNSRSHWHMKWKAHFFDEALVUGZXYYMKMNLIOMERYSOHCWJWPUKISZDTYYNCPFGQRDFIJ");
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
    msg.setTimeStamp(0.447573163196);
    msg.setSource(21119U);
    msg.setSourceEntity(227U);
    msg.setDestination(59261U);
    msg.setDestinationEntity(240U);
    msg.op = 197U;
    msg.system.assign("ZBXAQHSHBKIDKDITGTXKOIVQLYXJCVCZAOKMLPRFCVEWIOBLERETLEFFUYZAYXEOSLXDVRUWSANIOFDZNTSZBXSGDVLFWRYJICTQGKVUTEHXBUTGSFUXRNWJGNHPQTCQLIPFSAIIWQOMOOPMILSKHXLMBNZNN");
    msg.range = 0.541038604103;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 3931U;
    tmp_msg_0.lat = 0.292745950131;
    tmp_msg_0.lon = 0.701867187612;
    tmp_msg_0.z = 0.224074028702;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.speed = 0.397975576045;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.bearing = 0.189158458621;
    tmp_msg_0.cross_angle = 0.410156861662;
    tmp_msg_0.width = 0.866940763368;
    tmp_msg_0.length = 0.186809636915;
    tmp_msg_0.hstep = 0.311433064012;
    tmp_msg_0.coff = 228U;
    tmp_msg_0.alternation = 107U;
    tmp_msg_0.flags = 10U;
    tmp_msg_0.custom.assign("IQWNZQRBEDZRYHQEODMPQTAUDOANLPQYVVQVQYMEDOXVGXBWFLOZSBGBZIKAGMSZFRCJNCCPABKCZHMGLSBAZJIBCNYWUOVIFKJHHBRLTMALZZYLCHYPSXLUAURJXAXESXOIFWVJYIJKYWFGU");
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
    msg.setTimeStamp(0.591433330809);
    msg.setSource(37702U);
    msg.setSourceEntity(189U);
    msg.setDestination(57885U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.0506967228894);
    msg.setSource(17461U);
    msg.setSourceEntity(97U);
    msg.setDestination(18632U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.191236323497);
    msg.setSource(2520U);
    msg.setSourceEntity(103U);
    msg.setDestination(61182U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.845200572801);
    msg.setSource(53595U);
    msg.setSourceEntity(10U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(230U);
    msg.list.assign("SVZIGYKEXPDLQCFGXAKZVBFMNFEHSZDMTLSEVXYNBLHELAVJJYKSODATWKWHFCYREQTIOTOVYKGQWAWRBFEODCUMZREQJNSXCEUSONLLMCKTBBOFAWQFDDGIGFSQCUQNMMTDSYLZNKRRUUQURX");

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
    msg.setTimeStamp(0.961439423316);
    msg.setSource(30487U);
    msg.setSourceEntity(76U);
    msg.setDestination(45392U);
    msg.setDestinationEntity(228U);
    msg.list.assign("KYDIIOXJYCPBGASLPVTHKZVKPRLIZQSDIFHKCPBSBNWPITMQXEWTDNTMXMPFBY");

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
    msg.setTimeStamp(0.208360816931);
    msg.setSource(40651U);
    msg.setSourceEntity(196U);
    msg.setDestination(40555U);
    msg.setDestinationEntity(211U);
    msg.list.assign("VYAHDCMGGVFIRPANTBAJBUOHMKTLYWQIYIOHATHTNZSNBJYYGFVSHMINDFCEZCOVEMQKQLUTMJDBWJZHARXTSVAVCEJCLOEKWO");

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
    msg.setTimeStamp(0.621032493669);
    msg.setSource(48834U);
    msg.setSourceEntity(34U);
    msg.setDestination(44870U);
    msg.setDestinationEntity(146U);
    msg.value = 5057;

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
    msg.setTimeStamp(0.726662995793);
    msg.setSource(14205U);
    msg.setSourceEntity(190U);
    msg.setDestination(53335U);
    msg.setDestinationEntity(166U);
    msg.value = -17105;

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
    msg.setTimeStamp(0.892859452375);
    msg.setSource(6571U);
    msg.setSourceEntity(108U);
    msg.setDestination(48077U);
    msg.setDestinationEntity(100U);
    msg.value = 2790;

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
    msg.setTimeStamp(0.0832741173723);
    msg.setSource(62782U);
    msg.setSourceEntity(26U);
    msg.setDestination(50956U);
    msg.setDestinationEntity(48U);
    msg.value = 0.986924019882;

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
    msg.setTimeStamp(0.360551843284);
    msg.setSource(58373U);
    msg.setSourceEntity(68U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(186U);
    msg.value = 0.761640322295;

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
    msg.setTimeStamp(0.522711971122);
    msg.setSource(38016U);
    msg.setSourceEntity(154U);
    msg.setDestination(52340U);
    msg.setDestinationEntity(135U);
    msg.value = 0.645531473142;

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
    msg.setTimeStamp(0.0722364131417);
    msg.setSource(48122U);
    msg.setSourceEntity(133U);
    msg.setDestination(43591U);
    msg.setDestinationEntity(145U);
    msg.value = 0.0165463037044;

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
    msg.setTimeStamp(0.353405711638);
    msg.setSource(13352U);
    msg.setSourceEntity(26U);
    msg.setDestination(58010U);
    msg.setDestinationEntity(140U);
    msg.value = 0.487623939487;

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
    msg.setTimeStamp(0.227911352109);
    msg.setSource(64459U);
    msg.setSourceEntity(73U);
    msg.setDestination(44008U);
    msg.setDestinationEntity(122U);
    msg.value = 0.637973406381;

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
    msg.setTimeStamp(0.557543274843);
    msg.setSource(7383U);
    msg.setSourceEntity(26U);
    msg.setDestination(48825U);
    msg.setDestinationEntity(167U);
    msg.validity = 13603U;
    msg.type = 5U;
    msg.utc_year = 54590U;
    msg.utc_month = 166U;
    msg.utc_day = 98U;
    msg.utc_time = 0.682496872957;
    msg.lat = 0.0889477852597;
    msg.lon = 0.197637718351;
    msg.height = 0.428880338159;
    msg.satellites = 4U;
    msg.cog = 0.55749553971;
    msg.sog = 0.142044200366;
    msg.hdop = 0.13663122273;
    msg.vdop = 0.0842313640979;
    msg.hacc = 0.814197522833;
    msg.vacc = 0.46185068847;

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
    msg.setTimeStamp(0.0402132350719);
    msg.setSource(47660U);
    msg.setSourceEntity(54U);
    msg.setDestination(37573U);
    msg.setDestinationEntity(70U);
    msg.validity = 17138U;
    msg.type = 94U;
    msg.utc_year = 18609U;
    msg.utc_month = 14U;
    msg.utc_day = 220U;
    msg.utc_time = 0.00371421005476;
    msg.lat = 0.896884494336;
    msg.lon = 0.188415734002;
    msg.height = 0.44519952542;
    msg.satellites = 161U;
    msg.cog = 0.220692352422;
    msg.sog = 0.352872974658;
    msg.hdop = 0.792695317974;
    msg.vdop = 0.495334834012;
    msg.hacc = 0.0104390425357;
    msg.vacc = 0.994731120038;

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
    msg.setTimeStamp(0.61710845292);
    msg.setSource(4824U);
    msg.setSourceEntity(74U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(107U);
    msg.validity = 45363U;
    msg.type = 111U;
    msg.utc_year = 6502U;
    msg.utc_month = 160U;
    msg.utc_day = 94U;
    msg.utc_time = 0.745975858925;
    msg.lat = 0.415499486095;
    msg.lon = 0.29408183718;
    msg.height = 0.701084434324;
    msg.satellites = 103U;
    msg.cog = 0.312036765925;
    msg.sog = 0.109746305037;
    msg.hdop = 0.110850639289;
    msg.vdop = 0.0607609477384;
    msg.hacc = 0.510145999346;
    msg.vacc = 0.390004197484;

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
    msg.setTimeStamp(0.028983246102);
    msg.setSource(19123U);
    msg.setSourceEntity(122U);
    msg.setDestination(52589U);
    msg.setDestinationEntity(223U);
    msg.time = 0.0262840031693;
    msg.phi = 0.121744041647;
    msg.theta = 0.976611995405;
    msg.psi = 0.335875447608;
    msg.psi_magnetic = 0.956630883631;

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
    msg.setTimeStamp(0.957448366312);
    msg.setSource(40060U);
    msg.setSourceEntity(141U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(62U);
    msg.time = 0.594543533677;
    msg.phi = 0.621479403563;
    msg.theta = 0.713460922413;
    msg.psi = 0.251249167789;
    msg.psi_magnetic = 0.520405245155;

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
    msg.setTimeStamp(0.339396081429);
    msg.setSource(55578U);
    msg.setSourceEntity(107U);
    msg.setDestination(19207U);
    msg.setDestinationEntity(92U);
    msg.time = 0.747196739164;
    msg.phi = 0.209781208824;
    msg.theta = 0.605700713431;
    msg.psi = 0.0163516321009;
    msg.psi_magnetic = 0.160805138607;

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
    msg.setTimeStamp(0.344295337051);
    msg.setSource(17013U);
    msg.setSourceEntity(104U);
    msg.setDestination(13629U);
    msg.setDestinationEntity(143U);
    msg.time = 0.174289368606;
    msg.x = 0.119386139071;
    msg.y = 0.646523935056;
    msg.z = 0.96298011519;
    msg.timestep = 0.253976156709;

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
    msg.setTimeStamp(0.105639024883);
    msg.setSource(47608U);
    msg.setSourceEntity(79U);
    msg.setDestination(23547U);
    msg.setDestinationEntity(91U);
    msg.time = 0.219467374839;
    msg.x = 0.591546292742;
    msg.y = 0.80388742095;
    msg.z = 0.690567159067;
    msg.timestep = 0.213411722228;

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
    msg.setTimeStamp(0.527888996846);
    msg.setSource(8361U);
    msg.setSourceEntity(38U);
    msg.setDestination(2569U);
    msg.setDestinationEntity(251U);
    msg.time = 0.535331165822;
    msg.x = 0.172200077416;
    msg.y = 0.502119081965;
    msg.z = 0.389254208607;
    msg.timestep = 0.648348100739;

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
    msg.setTimeStamp(0.28463382049);
    msg.setSource(30374U);
    msg.setSourceEntity(209U);
    msg.setDestination(28658U);
    msg.setDestinationEntity(122U);
    msg.time = 0.390496593333;
    msg.x = 0.203179961209;
    msg.y = 0.420551850888;
    msg.z = 0.439516069791;

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
    msg.setTimeStamp(0.0382060893392);
    msg.setSource(63866U);
    msg.setSourceEntity(22U);
    msg.setDestination(62658U);
    msg.setDestinationEntity(240U);
    msg.time = 0.00862040085913;
    msg.x = 0.470515041626;
    msg.y = 0.958039959417;
    msg.z = 0.284483022155;

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
    msg.setTimeStamp(0.713163317355);
    msg.setSource(43203U);
    msg.setSourceEntity(209U);
    msg.setDestination(21904U);
    msg.setDestinationEntity(102U);
    msg.time = 0.610982953831;
    msg.x = 0.625917326993;
    msg.y = 0.908764639047;
    msg.z = 0.28863413621;

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
    msg.setTimeStamp(0.141222932733);
    msg.setSource(46019U);
    msg.setSourceEntity(88U);
    msg.setDestination(37016U);
    msg.setDestinationEntity(235U);
    msg.time = 0.599243165665;
    msg.x = 0.978099949109;
    msg.y = 0.809709553905;
    msg.z = 0.532366085867;

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
    msg.setTimeStamp(0.88715413888);
    msg.setSource(62350U);
    msg.setSourceEntity(60U);
    msg.setDestination(40718U);
    msg.setDestinationEntity(145U);
    msg.time = 0.958533195325;
    msg.x = 0.536779098468;
    msg.y = 0.840804103729;
    msg.z = 0.705307763838;

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
    msg.setTimeStamp(0.578346263157);
    msg.setSource(42638U);
    msg.setSourceEntity(46U);
    msg.setDestination(63690U);
    msg.setDestinationEntity(140U);
    msg.time = 0.0832442188591;
    msg.x = 0.832305792238;
    msg.y = 0.803568763732;
    msg.z = 0.325607756975;

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
    msg.setTimeStamp(0.343687344459);
    msg.setSource(21766U);
    msg.setSourceEntity(144U);
    msg.setDestination(56158U);
    msg.setDestinationEntity(173U);
    msg.time = 0.556171158815;
    msg.x = 0.651366937256;
    msg.y = 0.291263267815;
    msg.z = 0.701030729226;

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
    msg.setTimeStamp(0.865130016905);
    msg.setSource(39852U);
    msg.setSourceEntity(64U);
    msg.setDestination(50450U);
    msg.setDestinationEntity(35U);
    msg.time = 0.0462877746647;
    msg.x = 0.200974435009;
    msg.y = 0.0170344903724;
    msg.z = 0.406606607782;

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
    msg.setTimeStamp(0.715625213002);
    msg.setSource(46532U);
    msg.setSourceEntity(239U);
    msg.setDestination(18016U);
    msg.setDestinationEntity(218U);
    msg.time = 0.924100969864;
    msg.x = 0.567277832409;
    msg.y = 0.912270644556;
    msg.z = 0.260597107232;

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
    msg.setTimeStamp(0.20799561462);
    msg.setSource(37570U);
    msg.setSourceEntity(30U);
    msg.setDestination(50084U);
    msg.setDestinationEntity(214U);
    msg.validity = 88U;
    msg.x = 0.724171038242;
    msg.y = 0.352944347241;
    msg.z = 0.293880367856;

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
    msg.setTimeStamp(0.10512144273);
    msg.setSource(8358U);
    msg.setSourceEntity(116U);
    msg.setDestination(18959U);
    msg.setDestinationEntity(92U);
    msg.validity = 213U;
    msg.x = 0.13971447782;
    msg.y = 0.16702865107;
    msg.z = 0.441415250221;

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
    msg.setTimeStamp(0.356469209331);
    msg.setSource(50932U);
    msg.setSourceEntity(162U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(200U);
    msg.validity = 215U;
    msg.x = 0.0176965414518;
    msg.y = 0.893523465854;
    msg.z = 0.846595744496;

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
    msg.setTimeStamp(0.371986843915);
    msg.setSource(56550U);
    msg.setSourceEntity(93U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(41U);
    msg.validity = 229U;
    msg.x = 0.426508791838;
    msg.y = 0.463124575501;
    msg.z = 0.650997765994;

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
    msg.setTimeStamp(0.749912449181);
    msg.setSource(13225U);
    msg.setSourceEntity(249U);
    msg.setDestination(16093U);
    msg.setDestinationEntity(85U);
    msg.validity = 0U;
    msg.x = 0.873918199706;
    msg.y = 0.630256331446;
    msg.z = 0.725007617121;

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
    msg.setTimeStamp(0.973036585627);
    msg.setSource(42833U);
    msg.setSourceEntity(50U);
    msg.setDestination(59941U);
    msg.setDestinationEntity(6U);
    msg.validity = 46U;
    msg.x = 0.896102791178;
    msg.y = 0.775675258664;
    msg.z = 0.983796344022;

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
    msg.setTimeStamp(0.261143050057);
    msg.setSource(59735U);
    msg.setSourceEntity(233U);
    msg.setDestination(43665U);
    msg.setDestinationEntity(232U);
    msg.time = 0.159854541728;
    msg.x = 0.853596934215;
    msg.y = 0.122459440982;
    msg.z = 0.266664762497;

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
    msg.setTimeStamp(0.870968920077);
    msg.setSource(27545U);
    msg.setSourceEntity(144U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(109U);
    msg.time = 0.808421444342;
    msg.x = 0.705260754216;
    msg.y = 0.427103355006;
    msg.z = 0.586613213302;

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
    msg.setTimeStamp(0.490569874791);
    msg.setSource(28612U);
    msg.setSourceEntity(53U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(125U);
    msg.time = 0.114027585629;
    msg.x = 0.928454676849;
    msg.y = 0.59728030092;
    msg.z = 0.127371825548;

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
    msg.setTimeStamp(0.785770146605);
    msg.setSource(21139U);
    msg.setSourceEntity(75U);
    msg.setDestination(6546U);
    msg.setDestinationEntity(56U);
    msg.validity = 75U;
    msg.value = 0.00878997570393;

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
    msg.setTimeStamp(0.604100481575);
    msg.setSource(57904U);
    msg.setSourceEntity(8U);
    msg.setDestination(37856U);
    msg.setDestinationEntity(180U);
    msg.validity = 193U;
    msg.value = 0.148289582174;

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
    msg.setTimeStamp(0.464265832072);
    msg.setSource(46779U);
    msg.setSourceEntity(0U);
    msg.setDestination(64537U);
    msg.setDestinationEntity(17U);
    msg.validity = 206U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.983504190738;
    tmp_msg_0.beam_height = 0.555323744464;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.310098012085;

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
    msg.setTimeStamp(0.901220973675);
    msg.setSource(11593U);
    msg.setSourceEntity(180U);
    msg.setDestination(11607U);
    msg.setDestinationEntity(69U);
    msg.value = 0.870978291074;

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
    msg.setTimeStamp(0.704656693417);
    msg.setSource(31159U);
    msg.setSourceEntity(38U);
    msg.setDestination(59139U);
    msg.setDestinationEntity(190U);
    msg.value = 0.826733972895;

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
    msg.setTimeStamp(0.259500855464);
    msg.setSource(1576U);
    msg.setSourceEntity(250U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(246U);
    msg.value = 0.332132905796;

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
    msg.setTimeStamp(0.787540003665);
    msg.setSource(34614U);
    msg.setSourceEntity(236U);
    msg.setDestination(35481U);
    msg.setDestinationEntity(207U);
    msg.value = 0.716607905024;

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
    msg.setTimeStamp(0.14416287378);
    msg.setSource(13667U);
    msg.setSourceEntity(143U);
    msg.setDestination(31615U);
    msg.setDestinationEntity(222U);
    msg.value = 0.728784271938;

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
    msg.setTimeStamp(0.638139883595);
    msg.setSource(51704U);
    msg.setSourceEntity(33U);
    msg.setDestination(49052U);
    msg.setDestinationEntity(152U);
    msg.value = 0.930128441631;

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
    msg.setTimeStamp(0.649796744196);
    msg.setSource(28577U);
    msg.setSourceEntity(110U);
    msg.setDestination(38692U);
    msg.setDestinationEntity(109U);
    msg.value = 0.544756633969;

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
    msg.setTimeStamp(0.7254690757);
    msg.setSource(34718U);
    msg.setSourceEntity(120U);
    msg.setDestination(8493U);
    msg.setDestinationEntity(4U);
    msg.value = 0.3391433952;

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
    msg.setTimeStamp(0.924810670407);
    msg.setSource(8039U);
    msg.setSourceEntity(240U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(155U);
    msg.value = 0.870316314643;

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
    msg.setTimeStamp(0.715888840446);
    msg.setSource(22295U);
    msg.setSourceEntity(208U);
    msg.setDestination(9279U);
    msg.setDestinationEntity(10U);
    msg.value = 0.681391651612;

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
    msg.setTimeStamp(0.7423342327);
    msg.setSource(12002U);
    msg.setSourceEntity(126U);
    msg.setDestination(50436U);
    msg.setDestinationEntity(5U);
    msg.value = 0.833063200799;

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
    msg.setTimeStamp(0.440159978621);
    msg.setSource(9210U);
    msg.setSourceEntity(67U);
    msg.setDestination(12533U);
    msg.setDestinationEntity(84U);
    msg.value = 0.0766001159176;

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
    msg.setTimeStamp(0.883909618202);
    msg.setSource(65365U);
    msg.setSourceEntity(6U);
    msg.setDestination(27501U);
    msg.setDestinationEntity(44U);
    msg.value = 0.766106630605;

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
    msg.setTimeStamp(0.378761077897);
    msg.setSource(2421U);
    msg.setSourceEntity(221U);
    msg.setDestination(63528U);
    msg.setDestinationEntity(40U);
    msg.value = 0.0903681697445;

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
    msg.setTimeStamp(0.196280877334);
    msg.setSource(39937U);
    msg.setSourceEntity(248U);
    msg.setDestination(22790U);
    msg.setDestinationEntity(19U);
    msg.value = 0.0326285315157;

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
    msg.setTimeStamp(0.12336260057);
    msg.setSource(4939U);
    msg.setSourceEntity(140U);
    msg.setDestination(24652U);
    msg.setDestinationEntity(172U);
    msg.value = 0.734171888203;

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
    msg.setTimeStamp(0.473009051396);
    msg.setSource(34096U);
    msg.setSourceEntity(48U);
    msg.setDestination(7612U);
    msg.setDestinationEntity(246U);
    msg.value = 0.59941214893;

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
    msg.setTimeStamp(0.165591680984);
    msg.setSource(39375U);
    msg.setSourceEntity(90U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(137U);
    msg.value = 0.43715716397;

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
    msg.setTimeStamp(0.755226851187);
    msg.setSource(51502U);
    msg.setSourceEntity(131U);
    msg.setDestination(11416U);
    msg.setDestinationEntity(167U);
    msg.value = 0.983462690401;

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
    msg.setTimeStamp(0.694385540642);
    msg.setSource(25125U);
    msg.setSourceEntity(180U);
    msg.setDestination(62464U);
    msg.setDestinationEntity(90U);
    msg.value = 0.707975753085;

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
    msg.setTimeStamp(0.933123985289);
    msg.setSource(60113U);
    msg.setSourceEntity(38U);
    msg.setDestination(56275U);
    msg.setDestinationEntity(91U);
    msg.value = 0.121025048197;

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
    msg.setTimeStamp(0.938208971982);
    msg.setSource(19401U);
    msg.setSourceEntity(232U);
    msg.setDestination(21628U);
    msg.setDestinationEntity(216U);
    msg.value = 0.206821910996;

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
    msg.setTimeStamp(0.75274390537);
    msg.setSource(18087U);
    msg.setSourceEntity(97U);
    msg.setDestination(48506U);
    msg.setDestinationEntity(64U);
    msg.value = 0.234614546963;

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
    msg.setTimeStamp(0.20656312291);
    msg.setSource(34164U);
    msg.setSourceEntity(191U);
    msg.setDestination(42141U);
    msg.setDestinationEntity(42U);
    msg.value = 0.913973895637;

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
    msg.setTimeStamp(0.603706736385);
    msg.setSource(40145U);
    msg.setSourceEntity(152U);
    msg.setDestination(40576U);
    msg.setDestinationEntity(28U);
    msg.direction = 0.437673471794;
    msg.speed = 0.477177824186;

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
    msg.setTimeStamp(0.305455732717);
    msg.setSource(36630U);
    msg.setSourceEntity(21U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(127U);
    msg.direction = 0.975852854638;
    msg.speed = 0.27836848912;

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
    msg.setTimeStamp(0.916307157549);
    msg.setSource(41104U);
    msg.setSourceEntity(228U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.279998723969;
    msg.speed = 0.182219581436;

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
    msg.setTimeStamp(0.466104485555);
    msg.setSource(2876U);
    msg.setSourceEntity(211U);
    msg.setDestination(31467U);
    msg.setDestinationEntity(112U);
    msg.value = 0.326702486486;

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
    msg.setTimeStamp(0.638592018393);
    msg.setSource(38549U);
    msg.setSourceEntity(134U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(167U);
    msg.value = 0.865736788907;

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
    msg.setTimeStamp(0.322558088637);
    msg.setSource(5644U);
    msg.setSourceEntity(165U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(123U);
    msg.value = 0.0803206563594;

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
    msg.setTimeStamp(0.737393577368);
    msg.setSource(32325U);
    msg.setSourceEntity(100U);
    msg.setDestination(10181U);
    msg.setDestinationEntity(114U);
    msg.value.assign("PYKYIOGQGRXFNNEJPUSJXPUVNBGNLWZTQAVAYURDHSYQCFJBHVJMZMTFPZKDRVKAMQICXIRQVMYHCYHRTEQODTLKEWSIDZHNOMQHBKDXREZLTPUZZVPLTNIWWCTOWLHOSXSKAHFUNXIHIXZILJEGJVABUDZOGAWALKKYPIBLOGYCDTFFUOU");

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
    msg.setTimeStamp(0.796949050978);
    msg.setSource(42814U);
    msg.setSourceEntity(238U);
    msg.setDestination(20948U);
    msg.setDestinationEntity(68U);
    msg.value.assign("DJEKOVZCMCCSTKMPTYNEQHWNOEWLQGANOSBIFFLREUFFPWWZRILDLMJGUYUDAPWDGCPEGGOZICYFDSUBCMLBWDIUCOVNEOYXAGJUZPHDHKMYXSKTBYNGQBFJDOTJGKZXNWXAHJVXMROSJB");

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
    msg.setTimeStamp(0.264824264124);
    msg.setSource(15607U);
    msg.setSourceEntity(45U);
    msg.setDestination(41161U);
    msg.setDestinationEntity(208U);
    msg.value.assign("JFQODFQMCMWTSSIYUVKPMFWKQBPVRDENEKAGQTHBOPNFEPTXHOORBIGWPRYZWKWLCCXLYRLLLVASXKPCVLIXGKZRCZBURMPAIGHYHRSAARJQGZHVA");

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
    msg.setTimeStamp(0.606817482911);
    msg.setSource(41973U);
    msg.setSourceEntity(174U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(111U);
    const char tmp_msg_0[] = {71, 1, 6, 51, -73, -117, -106, -99, 27, -125, 80, 59, 47, -77, 3, -72, 47, 75, -28, 94, -1, -56, -102, -12, -2, 14, -51, 11, -83, 81, -21, 43, -89, 112, 72, 44, 72, -20, -128, 105, 101, -115};
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
    msg.setTimeStamp(0.103720180958);
    msg.setSource(9254U);
    msg.setSourceEntity(148U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(174U);
    const char tmp_msg_0[] = {21, -101, -62, -45, -122, -15, -54, 25, -4, 37, 112, 80, -110, 38, -6, 45, -119, 80, 91, 115, 22, -37, -81, 7, -96, 93, 25, -22, 44, -77, -2, 113, 108, 23, 64, -111, 54, -125, -14, -14, -52, -113, 19, 108, 123, 114, 73, 53, 52, 45, 0, -58, -98};
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
    msg.setTimeStamp(0.20459853508);
    msg.setSource(19148U);
    msg.setSourceEntity(82U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(236U);
    const char tmp_msg_0[] = {3, -39, 33, 37, 60, -28, -81, 6, 6, -116, -91, 46, -30, -4, -45, -11, 108, 21, 82, 62, -91, 65, 0, 99, -92, 111, -112, 39, 15, -69, 0, -59, 100, 64, -8, -109, -97, -115, -10, 30, -23, 53, 122, 108, -128, 101, -50, -75, -3, 92, -57, -62, 37, -62, -17, -14, 87, 107, -81, -53, -11, -126, -25, -77, -25, 106, -42, 94, -91, 11, -64, 77, 103, 125, -76, -39, 83, -103, 84, 103, 109, -25, -34, 36, -23, 39, 98, 30, -70, -124, -105, -39, 70, 103, -22, 70, 85, -11, 2, 116, -8, 70, -106, -39, -40, -85, 0, 110, -29, 45, -89, -33, 34, 72, 7, -120, 56, 40, 9, -35, -125, -121, 30, -98, -107, 46, -29, -74, 112, -89, -54, 73, -66, -90, 52, 88, 84, 58, -37, 38, 86, 123, 7, 122, -104, -100, -82, 81, -25, -43, -104, -37, 40, 41, 18, -51, 77, -76, -19, 38, 11, 82, 92, 101, 54, 66, -52, 19, 109, -82, -93, 90, -35, 53, -84, -124, 44, -95, -69, 44, -94, -103, -9, 25};
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
    msg.setTimeStamp(0.491662808512);
    msg.setSource(30966U);
    msg.setSourceEntity(195U);
    msg.setDestination(17720U);
    msg.setDestinationEntity(159U);
    msg.frequency = 4006787309U;
    msg.min_range = 55943U;
    msg.max_range = 7475U;

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
    msg.setTimeStamp(0.706846177045);
    msg.setSource(23739U);
    msg.setSourceEntity(63U);
    msg.setDestination(21669U);
    msg.setDestinationEntity(159U);
    msg.frequency = 1469166273U;
    msg.min_range = 17265U;
    msg.max_range = 24435U;

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
    msg.setTimeStamp(0.15509418016);
    msg.setSource(57022U);
    msg.setSourceEntity(89U);
    msg.setDestination(26055U);
    msg.setDestinationEntity(224U);
    msg.frequency = 1069234350U;
    msg.min_range = 5066U;
    msg.max_range = 4051U;

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
    msg.setTimeStamp(0.207604818304);
    msg.setSource(61410U);
    msg.setSourceEntity(244U);
    msg.setDestination(24959U);
    msg.setDestinationEntity(47U);
    msg.type = 108U;
    msg.frequency = 4240028223U;
    msg.min_range = 53315U;
    msg.max_range = 18800U;
    msg.bits_per_point = 196U;
    msg.scale_factor = 0.0322775123968;
    const char tmp_msg_0[] = {57, 19, -18, 114, 8, 50, 55, 114, 53, -68, 54, -53, -3, -94, 78, -13, 76, 122, 0, -31, 5, 15, -37, -110, 26, -33, 45, 123, 62, -51, 93, -61, -65, -104, -43, -50, 121, 42, -68, 9, 80, -68, -49, -88, 14, 25, -19, -111, 9, -123, 115, 83, -34, -56, 0, 65, 93, -83, -121, 94, 72, 0, -66, -63, 0, -34, -56, 10, 121, 97, -41, -117, 79, -22, 43, 13, -2, 82, 37, -58, -74, 15};
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
    msg.setTimeStamp(0.1845168162);
    msg.setSource(39557U);
    msg.setSourceEntity(111U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(69U);
    msg.type = 106U;
    msg.frequency = 612232748U;
    msg.min_range = 30382U;
    msg.max_range = 44169U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.405156588759;
    const char tmp_msg_0[] = {72, 35, -24, 92, -19, -2, -71, -59, -57, -99, 17, 77, -118, 29, -86, -38, -31, -20, -59, -47, 103, 13, 62, -37, 83, 30, -35, 24, -78, 7, 59, 36, -104, 89, -57, 75, 104, 34, -122, -127, 101, 35, 65, -54, 96};
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
    msg.setTimeStamp(0.312619597596);
    msg.setSource(20719U);
    msg.setSourceEntity(0U);
    msg.setDestination(61732U);
    msg.setDestinationEntity(163U);
    msg.type = 220U;
    msg.frequency = 3046328419U;
    msg.min_range = 39221U;
    msg.max_range = 11928U;
    msg.bits_per_point = 127U;
    msg.scale_factor = 0.0938212465477;
    const char tmp_msg_0[] = {-60, -2, -12, 99, 80, -69, -69, -3, 112, -97, 125, -59, -66, -118, 100, 47, -73, -70, -37, 43, 24, 75, 11, 81, -116, 15, -58, 100, 120, 44, -41, 56, 60, -84, -58, 57, 124, 60, 90, -65, 2, -100, 8, 109, -35, -47, 15, 90, 76, -9, -72, -82, -57, -31, 3, -51, -21, 44, -85, 24, 18, 34, 97, -55, -86, -12, 51, 58, 90, -127, 112, -14, -41, -35, -125, -18, -68, 95};
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
    msg.setTimeStamp(0.485582916886);
    msg.setSource(25135U);
    msg.setSourceEntity(161U);
    msg.setDestination(47943U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.254836521291);
    msg.setSource(64651U);
    msg.setSourceEntity(121U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.259472444942);
    msg.setSource(60734U);
    msg.setSourceEntity(250U);
    msg.setDestination(63115U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.686385588279);
    msg.setSource(35867U);
    msg.setSourceEntity(95U);
    msg.setDestination(721U);
    msg.setDestinationEntity(10U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.262245925752);
    msg.setSource(48011U);
    msg.setSourceEntity(218U);
    msg.setDestination(28581U);
    msg.setDestinationEntity(207U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.537292179006);
    msg.setSource(1869U);
    msg.setSourceEntity(149U);
    msg.setDestination(42744U);
    msg.setDestinationEntity(77U);
    msg.op = 16U;

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
    msg.setTimeStamp(0.120276369058);
    msg.setSource(63954U);
    msg.setSourceEntity(207U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(235U);
    msg.value = 0.924781815007;
    msg.confidence = 0.75718686514;
    msg.opmodes.assign("MPDENSBMTPARSHYXXQYCUNQUQKSTNBACCEMWYDSFFNHVDPEOZXFSEZBWBBZVUQLPMJILIRSTVAAKGRRPAOJQRECYYPWRMWNBICLIMFJANRPQYZDTAGFOFKIXLLTCRYDGWQVWUUGMMCNSGXSZLWOMDJZTMKZHEFXEEVGCAHUXZCIVVHASLTNBOKVYRLIGLBPJXKHTQGUNQWITKUHEKXHPJGJKWJWZFYQUGRVDABHOPXYODUVDOCTF");

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
    msg.setTimeStamp(0.419898293377);
    msg.setSource(34442U);
    msg.setSourceEntity(60U);
    msg.setDestination(12613U);
    msg.setDestinationEntity(208U);
    msg.value = 0.97944606628;
    msg.confidence = 0.0314277501144;
    msg.opmodes.assign("FPUKAELVFZXKVQOVOWKJTSQQFSYIOJWJGMFLNDXCPJZGPIHYQPVEQDMQUGDYDYIEBLCKCCSUHIYNEVYSZRNSQVKKTCGFOCZMTZYHYEITSGLUAFVSZAMFNBQWDWLHCZTNNFMJKT");

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
    msg.setTimeStamp(0.750149932043);
    msg.setSource(42930U);
    msg.setSourceEntity(148U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(168U);
    msg.value = 0.733647581425;
    msg.confidence = 0.660641674476;
    msg.opmodes.assign("GWPSOCXLLAQMTGMUGXKZRRDBUNOZZQROANMYLOIEKHBFVSJYBWANDUSAZLVSRZTKEGEFWQSBCZMNWTQTFIAOUHMXWUNYJTEIRQHBREWPFZKXXRMJCAGBYCSQVBSMUXYGPUBCDOAIIFDJPCJHIOEPKGHPKTDADFYBQWFVXEGNDV");

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
    msg.setTimeStamp(0.601008831124);
    msg.setSource(41241U);
    msg.setSourceEntity(247U);
    msg.setDestination(55107U);
    msg.setDestinationEntity(158U);
    msg.itow = 234227145U;
    msg.lat = 0.87187652695;
    msg.lon = 0.556522070558;
    msg.height_ell = 0.308353520802;
    msg.height_sea = 0.768072004435;
    msg.hacc = 0.402893285418;
    msg.vacc = 0.169710390331;
    msg.vel_n = 0.864175532799;
    msg.vel_e = 0.802847600466;
    msg.vel_d = 0.582009802046;
    msg.speed = 0.796863578569;
    msg.gspeed = 0.630873560934;
    msg.heading = 0.113942720092;
    msg.sacc = 0.999332048406;
    msg.cacc = 0.191914585772;

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
    msg.setTimeStamp(0.304980923084);
    msg.setSource(4656U);
    msg.setSourceEntity(169U);
    msg.setDestination(23771U);
    msg.setDestinationEntity(169U);
    msg.itow = 3035746264U;
    msg.lat = 0.0308233923682;
    msg.lon = 0.985502041926;
    msg.height_ell = 0.428242843793;
    msg.height_sea = 0.580747793583;
    msg.hacc = 0.737937009473;
    msg.vacc = 0.393236122922;
    msg.vel_n = 0.339602420192;
    msg.vel_e = 0.0234332643195;
    msg.vel_d = 0.93359395645;
    msg.speed = 0.388750237295;
    msg.gspeed = 0.951854066243;
    msg.heading = 0.0542848245077;
    msg.sacc = 0.479226955112;
    msg.cacc = 0.279012885952;

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
    msg.setTimeStamp(0.85088663297);
    msg.setSource(62201U);
    msg.setSourceEntity(67U);
    msg.setDestination(55526U);
    msg.setDestinationEntity(79U);
    msg.itow = 2635117559U;
    msg.lat = 0.0230186259313;
    msg.lon = 0.0445468551006;
    msg.height_ell = 0.502645451549;
    msg.height_sea = 0.33209305288;
    msg.hacc = 0.0871757791117;
    msg.vacc = 0.142537580466;
    msg.vel_n = 0.906846956323;
    msg.vel_e = 0.155613350741;
    msg.vel_d = 0.343203727737;
    msg.speed = 0.393061153931;
    msg.gspeed = 0.831559733698;
    msg.heading = 0.79614794391;
    msg.sacc = 0.240757062273;
    msg.cacc = 0.965640724366;

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
    msg.setTimeStamp(0.276154978732);
    msg.setSource(31612U);
    msg.setSourceEntity(244U);
    msg.setDestination(56087U);
    msg.setDestinationEntity(177U);
    msg.id = 249U;
    msg.value = 0.108682297951;

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
    msg.setTimeStamp(0.189846388859);
    msg.setSource(35074U);
    msg.setSourceEntity(221U);
    msg.setDestination(58119U);
    msg.setDestinationEntity(237U);
    msg.id = 96U;
    msg.value = 0.338086936392;

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
    msg.setTimeStamp(0.748730849193);
    msg.setSource(27935U);
    msg.setSourceEntity(103U);
    msg.setDestination(61684U);
    msg.setDestinationEntity(197U);
    msg.id = 61U;
    msg.value = 0.417496742825;

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
    msg.setTimeStamp(0.92717401251);
    msg.setSource(48267U);
    msg.setSourceEntity(5U);
    msg.setDestination(35462U);
    msg.setDestinationEntity(130U);
    msg.x = 0.557688057808;
    msg.y = 0.260657918316;
    msg.z = 0.778658561945;
    msg.phi = 0.350734553316;
    msg.theta = 0.834227204739;
    msg.psi = 0.406750590916;

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
    msg.setTimeStamp(0.265955676999);
    msg.setSource(57867U);
    msg.setSourceEntity(245U);
    msg.setDestination(58151U);
    msg.setDestinationEntity(64U);
    msg.x = 0.324107262963;
    msg.y = 0.773485038483;
    msg.z = 0.138581857909;
    msg.phi = 0.965224809464;
    msg.theta = 0.0593803734525;
    msg.psi = 0.538576041966;

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
    msg.setTimeStamp(0.795899339262);
    msg.setSource(36890U);
    msg.setSourceEntity(142U);
    msg.setDestination(58717U);
    msg.setDestinationEntity(227U);
    msg.x = 0.669765430154;
    msg.y = 0.393255823253;
    msg.z = 0.494210870208;
    msg.phi = 0.274588815737;
    msg.theta = 0.593496902556;
    msg.psi = 0.192491553576;

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
    msg.setTimeStamp(0.500407555041);
    msg.setSource(21691U);
    msg.setSourceEntity(90U);
    msg.setDestination(19052U);
    msg.setDestinationEntity(192U);
    msg.beam_width = 0.518468533444;
    msg.beam_height = 0.926392225714;

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
    msg.setTimeStamp(0.480659525002);
    msg.setSource(11876U);
    msg.setSourceEntity(85U);
    msg.setDestination(23927U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.921954905747;
    msg.beam_height = 0.589803930398;

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
    msg.setTimeStamp(0.0931181521166);
    msg.setSource(29274U);
    msg.setSourceEntity(254U);
    msg.setDestination(37540U);
    msg.setDestinationEntity(232U);
    msg.beam_width = 0.0090809565499;
    msg.beam_height = 0.311689126345;

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
    msg.setTimeStamp(0.159710285704);
    msg.setSource(43569U);
    msg.setSourceEntity(89U);
    msg.setDestination(43481U);
    msg.setDestinationEntity(5U);
    msg.id = 145U;
    msg.zoom = 176U;
    msg.action = 56U;

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
    msg.setTimeStamp(0.498413037456);
    msg.setSource(37319U);
    msg.setSourceEntity(194U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(143U);
    msg.id = 156U;
    msg.zoom = 172U;
    msg.action = 239U;

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
    msg.setTimeStamp(0.326481556621);
    msg.setSource(37655U);
    msg.setSourceEntity(124U);
    msg.setDestination(38853U);
    msg.setDestinationEntity(248U);
    msg.id = 14U;
    msg.zoom = 103U;
    msg.action = 68U;

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
    msg.setTimeStamp(0.519920882222);
    msg.setSource(48845U);
    msg.setSourceEntity(18U);
    msg.setDestination(21357U);
    msg.setDestinationEntity(148U);
    msg.id = 120U;
    msg.value = 0.0984631473802;

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
    msg.setTimeStamp(0.0517938009556);
    msg.setSource(50474U);
    msg.setSourceEntity(148U);
    msg.setDestination(18067U);
    msg.setDestinationEntity(14U);
    msg.id = 88U;
    msg.value = 0.177089687269;

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
    msg.setTimeStamp(0.935246555334);
    msg.setSource(53119U);
    msg.setSourceEntity(127U);
    msg.setDestination(42505U);
    msg.setDestinationEntity(50U);
    msg.id = 240U;
    msg.value = 0.799179273772;

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
    msg.setTimeStamp(0.0424153595445);
    msg.setSource(51106U);
    msg.setSourceEntity(14U);
    msg.setDestination(32213U);
    msg.setDestinationEntity(248U);
    msg.id = 83U;
    msg.value = 0.926754708144;

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
    msg.setTimeStamp(0.93004726601);
    msg.setSource(28204U);
    msg.setSourceEntity(48U);
    msg.setDestination(32731U);
    msg.setDestinationEntity(166U);
    msg.id = 87U;
    msg.value = 0.389465000895;

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
    msg.setTimeStamp(0.45907428267);
    msg.setSource(14637U);
    msg.setSourceEntity(105U);
    msg.setDestination(15169U);
    msg.setDestinationEntity(213U);
    msg.id = 17U;
    msg.value = 0.591795216691;

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
    msg.setTimeStamp(0.113497632368);
    msg.setSource(34357U);
    msg.setSourceEntity(104U);
    msg.setDestination(648U);
    msg.setDestinationEntity(23U);
    msg.id = 146U;
    msg.angle = 0.228882717591;

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
    msg.setTimeStamp(0.320263066229);
    msg.setSource(29790U);
    msg.setSourceEntity(49U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(105U);
    msg.id = 33U;
    msg.angle = 0.961008154894;

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
    msg.setTimeStamp(0.46168353779);
    msg.setSource(6601U);
    msg.setSourceEntity(125U);
    msg.setDestination(57453U);
    msg.setDestinationEntity(103U);
    msg.id = 110U;
    msg.angle = 0.621845474113;

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
    msg.setTimeStamp(0.204511223037);
    msg.setSource(62886U);
    msg.setSourceEntity(74U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(171U);
    msg.op = 79U;
    msg.actions.assign("HVHXHJPMPMCORHNAADIURKTFSGWINRGOFTVZEUWFAZAUWVVWIGXECSLUPYRPPBZAGNSJMDIKCODJLHIJTLSYQHXRXJWFUXOVOMGOPQFYSQHLLGEKDLBZCDFIQUUWNQKUKEPXYYAZQKEIBYWDVENVZMIDMQJCZQVKOTSTSV");

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
    msg.setTimeStamp(0.940919275504);
    msg.setSource(28626U);
    msg.setSourceEntity(124U);
    msg.setDestination(58576U);
    msg.setDestinationEntity(84U);
    msg.op = 51U;
    msg.actions.assign("SUNXEBQIITTWMWHKPPGHL");

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
    msg.setTimeStamp(0.782489017919);
    msg.setSource(47991U);
    msg.setSourceEntity(127U);
    msg.setDestination(22485U);
    msg.setDestinationEntity(58U);
    msg.op = 50U;
    msg.actions.assign("DVHMUUEEGOUQYPQATOHGLUVDFJCGNEPFDKPHLUDGNQEWPTKCEHQRVYXZKCVTLHCC");

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
    msg.setTimeStamp(0.840764143891);
    msg.setSource(14201U);
    msg.setSourceEntity(43U);
    msg.setDestination(26217U);
    msg.setDestinationEntity(164U);
    msg.actions.assign("RVOCHPVCUIPQSNHETCYXFRMKLYFLTBXYJHWREWGXKNDDGZLPAWNUOCFGLWMEAOHYJKAYQZVINMMDMDWNUEJPKZRSXTAODOGNYKFIXUJDERBOUE");

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
    msg.setTimeStamp(0.22639312973);
    msg.setSource(14812U);
    msg.setSourceEntity(118U);
    msg.setDestination(52108U);
    msg.setDestinationEntity(3U);
    msg.actions.assign("JDVLZRNTIFNLXQMFCTGBRMEEXDZHQKOOTOUYSMEAXEXUPHGDRGJYULLAQXTFJCYFHBUBIWSPISVVKZSMNNSUKEGMASRBJYVDOPQDUPIQKWDNFZHEXFYBYAYWHLOVYJCXCEHMJNIZLODJLSHEPSGLMBBJTYUOCJUVQWTTKKCCDQ");

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
    msg.setTimeStamp(0.163715736571);
    msg.setSource(38957U);
    msg.setSourceEntity(26U);
    msg.setDestination(17195U);
    msg.setDestinationEntity(216U);
    msg.actions.assign("ILMODYSNMAZNROXZTTAWRPBCNUBKNRHHQTUOWEEKSWOZLXBBEMOISVOUGIKFKOCXUHXXMBYDGWCSYJKFKJVMRJKHXLUWDLNLMGIUVQFIPJYFFWIBHVCFSIVZGELXMKITOFBHYQSTCAFRZ");

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
    msg.setTimeStamp(0.98140166919);
    msg.setSource(17196U);
    msg.setSourceEntity(139U);
    msg.setDestination(41446U);
    msg.setDestinationEntity(88U);
    msg.button = 76U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.946351826546);
    msg.setSource(33725U);
    msg.setSourceEntity(196U);
    msg.setDestination(34117U);
    msg.setDestinationEntity(20U);
    msg.button = 153U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.0295880736495);
    msg.setSource(3240U);
    msg.setSourceEntity(95U);
    msg.setDestination(51634U);
    msg.setDestinationEntity(215U);
    msg.button = 205U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.453843038609);
    msg.setSource(46189U);
    msg.setSourceEntity(180U);
    msg.setDestination(15373U);
    msg.setDestinationEntity(49U);
    msg.op = 24U;
    msg.text.assign("HYHRRAGCIHOPXITMMHUCBJPIEZWKZWFGNFFCNLUWOSIQBPYVUOAPLDXNYBFKTIDHRIVLOBACVCMGIBLMJIAGXJMZNLWSGTEKNKORWKVGTSGPQDEQVDDUZ");

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
    msg.setTimeStamp(0.967205169877);
    msg.setSource(7497U);
    msg.setSourceEntity(226U);
    msg.setDestination(7375U);
    msg.setDestinationEntity(208U);
    msg.op = 254U;
    msg.text.assign("NKIHAHIGKQSLBNYMUZYEVPETWNDMXPCCTODAVVANSEDRPOSVLFQUDGYKKCPVHCFNIQMXLNBTAKPAVRGJWOQKUHSHREPWSKYIRJMBGBRWTBZVCJYOJYAJIYUHIWGPMKFLDSLSQITLTUZEBSHHIJDUDJKAWBXBDVOWWXXAOCETPXVLQOLLXUE");

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
    msg.setTimeStamp(0.787643894479);
    msg.setSource(24325U);
    msg.setSourceEntity(193U);
    msg.setDestination(44884U);
    msg.setDestinationEntity(10U);
    msg.op = 173U;
    msg.text.assign("MFQJUFMNCQYAKYVVPGCJGCXVMDTFVCZCUNBHHDAEESCKHPEQIPODNVBCGWKCUFSQPLEOIPLISHGAVFRRVTJDBDPQRSERXJTKJEZSDADZIBDSNEYERAUPRLZMKOHTZKNXOLWKKNAUTPTLOKHMFRBWXEQ");

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
    msg.setTimeStamp(0.551298842685);
    msg.setSource(9841U);
    msg.setSourceEntity(228U);
    msg.setDestination(54516U);
    msg.setDestinationEntity(15U);
    msg.op = 198U;
    msg.time_remain = 0.100134736076;
    msg.sched_time = 0.226722312483;

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
    msg.setTimeStamp(0.606844870687);
    msg.setSource(58614U);
    msg.setSourceEntity(85U);
    msg.setDestination(58181U);
    msg.setDestinationEntity(98U);
    msg.op = 151U;
    msg.time_remain = 0.140363447139;
    msg.sched_time = 0.388116512203;

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
    msg.setTimeStamp(0.196340976876);
    msg.setSource(42414U);
    msg.setSourceEntity(250U);
    msg.setDestination(55017U);
    msg.setDestinationEntity(122U);
    msg.op = 204U;
    msg.time_remain = 0.0526886908062;
    msg.sched_time = 0.626672875992;

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
    msg.setTimeStamp(0.828814668063);
    msg.setSource(25523U);
    msg.setSourceEntity(251U);
    msg.setDestination(30706U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ILRFWFJJGGOJSHRYBJNEBLYYKKSJAPUMNEJSOKNYMLWDARUMENSTBYIARJXXPVUPQGRZIPCITDGVHTSQLXQRBAKVTFPLVUBQUACTLWJVROGYIOSVUTOBVLMQLFXNGFOHNKBLODPVGAQXPXANEBKWEIKDXAIWYVXCNOFDMG");
    msg.op = 202U;
    msg.sched_time = 0.828986443387;

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
    msg.setTimeStamp(0.179783799256);
    msg.setSource(54427U);
    msg.setSourceEntity(171U);
    msg.setDestination(13144U);
    msg.setDestinationEntity(37U);
    msg.name.assign("DNSFKGSDQJHTALCLEAL");
    msg.op = 36U;
    msg.sched_time = 0.966906411849;

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
    msg.setTimeStamp(0.306213066937);
    msg.setSource(17618U);
    msg.setSourceEntity(180U);
    msg.setDestination(62603U);
    msg.setDestinationEntity(47U);
    msg.name.assign("NVAHTPZCHOHCBXUXJMRKTCDFEHZMQHNPSAUUFALOMNOJMXKZBWTSWGRSAAZRUVYAYXVBVWBGQOFUOAKEUGFVGFWEIULMYHBQRSSXTKOXCDIOREFRYBEPJCTKFUDVLHAQBDVWPVX");
    msg.op = 165U;
    msg.sched_time = 0.229985065433;

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
    msg.setTimeStamp(0.459287966822);
    msg.setSource(21520U);
    msg.setSourceEntity(123U);
    msg.setDestination(26472U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.319782981448);
    msg.setSource(47050U);
    msg.setSourceEntity(227U);
    msg.setDestination(34064U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.118303210226);
    msg.setSource(62877U);
    msg.setSourceEntity(43U);
    msg.setDestination(32377U);
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
    msg.setTimeStamp(0.355717634405);
    msg.setSource(29335U);
    msg.setSourceEntity(132U);
    msg.setDestination(64708U);
    msg.setDestinationEntity(194U);
    msg.name.assign("LCUBDMKKCXETNKDTXGPRNDVOQSKANQVNHZWAAQOQDLXIMFDEZIJMCRELQFUXLWXMXINRGWKIPLHCAGVZDSFYYMALZBUUQVNCFSRDKITAHRYGQSZGBPUPTZ");
    msg.state = 10U;

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
    msg.setTimeStamp(0.716034193026);
    msg.setSource(32573U);
    msg.setSourceEntity(34U);
    msg.setDestination(1936U);
    msg.setDestinationEntity(99U);
    msg.name.assign("ERETAOGHETWMQLUORPTQPDLWKQUVYZOZDPORWYDUINGPDPSJIXQG");
    msg.state = 170U;

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
    msg.setTimeStamp(0.990847685801);
    msg.setSource(11470U);
    msg.setSourceEntity(149U);
    msg.setDestination(24314U);
    msg.setDestinationEntity(21U);
    msg.name.assign("AFTRPRDLODXWTUJHNZMINYFZUZJSAEMWGEOUSIVZSSVCAVQCMRQSIOJAUXFBPUDLGFFNZHCPJLYPIQDQZJDTIYUEEAWOAHKTPSHCBYQDJEUKNVWSOLYZPQDQFDROYLERXNSIIKXGZRMANPKPXQOMCHSCWPGNXBRJBYTHXOFIVWFEYGWEBNCTRC");
    msg.state = 242U;

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
    msg.setTimeStamp(0.673998421405);
    msg.setSource(53450U);
    msg.setSourceEntity(179U);
    msg.setDestination(56544U);
    msg.setDestinationEntity(176U);
    msg.name.assign("GLEBEFZMZKRWNBNGLLFIXLEDVSUCRTNAFBCCOW");
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
    msg.setTimeStamp(0.603412373966);
    msg.setSource(56669U);
    msg.setSourceEntity(141U);
    msg.setDestination(4426U);
    msg.setDestinationEntity(213U);
    msg.name.assign("FACFBNVGMLYLJADLVIZCPIFYXSWAOZXLLEJJNGDKBRBKOFKUVNOHRNRQEIGIDXTCIMTRYKHIPHTLOWSUVARDUUSFHGUJCRTSLJHPMMIDBTPTBXBQKCHYNWJDEXSKPWOBAELTWWMQGEZYHMNUQCXFWQSEPYEAGZNXZVZOEKUKGTMDFTZPGIPNKNWRARVYCUZXHEOHCIQVTIQBHVMUJS");
    msg.value = 30U;

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
    msg.setTimeStamp(0.2065401087);
    msg.setSource(32363U);
    msg.setSourceEntity(134U);
    msg.setDestination(33042U);
    msg.setDestinationEntity(114U);
    msg.name.assign("EWBJYTEOUBZVJDILCANHVWXWRBADVDBOJSQGZDVQO");
    msg.value = 90U;

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
    msg.setTimeStamp(0.0840533655067);
    msg.setSource(25410U);
    msg.setSourceEntity(206U);
    msg.setDestination(27990U);
    msg.setDestinationEntity(84U);
    msg.name.assign("LDSRQREQIDTTFIPTZNTLWWZTBDXNYJAVKBEYUUIMHIGEIMEFIAVVBJYPHXENKQ");

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
    msg.setTimeStamp(0.21302706209);
    msg.setSource(22184U);
    msg.setSourceEntity(104U);
    msg.setDestination(47426U);
    msg.setDestinationEntity(57U);
    msg.name.assign("SZYWIZBUUZLLAERXBKQOAPUDNFJYTQGSEZQGRHVDSTADRPTCUGHLOYXMXXPZYMBPZSSR");

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
    msg.setTimeStamp(0.339557638031);
    msg.setSource(34205U);
    msg.setSourceEntity(116U);
    msg.setDestination(19416U);
    msg.setDestinationEntity(38U);
    msg.name.assign("ICGVQSIECESJHTRBZEROHZZEYUJRTOSFWNGPJGMPKLGSVAYXXAAYRTOUVPTBPMSFPSDZZPB");

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
    msg.setTimeStamp(0.426369422033);
    msg.setSource(11237U);
    msg.setSourceEntity(248U);
    msg.setDestination(12545U);
    msg.setDestinationEntity(232U);
    msg.name.assign("XQUMCLNHDDPANRGUPWZSZEAWQAYYXICURYVMBRJQHDTTFEBXGVIYNKJBKKLJAMBKFDERGYJFKGPKQDHBYSEPHBEGQXNLSSILGUIMTGSZWRJSVVEEOGNHPCXRQAAOLMVLVIOOFBIKPQIMSITOTZBPXBLFICFIPMMOCYLFVDRKUWWXVTXNNFHOBTCDMNGUWEOPSTSXQHQARZPRWCCAAKH");
    msg.value = 167U;

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
    msg.setTimeStamp(0.58508210125);
    msg.setSource(28970U);
    msg.setSourceEntity(193U);
    msg.setDestination(11995U);
    msg.setDestinationEntity(253U);
    msg.name.assign("FNRXRKFQXGWETIOSNESTBEOOI");
    msg.value = 173U;

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
    msg.setTimeStamp(0.201403042147);
    msg.setSource(14819U);
    msg.setSourceEntity(166U);
    msg.setDestination(6873U);
    msg.setDestinationEntity(137U);
    msg.name.assign("PLNAZMWBITDWCIUKRWUIDEFCUFTCDZDGLVWHKNVDPHPURNDXSLNPPRHHVQDJSUZFBRYPGKFLVEZYMTXAULTQUXFKZTGTNGAOQXQTHMTJKWDSKCBIXMGDIRSYSNUHMZCPOEQVOQEJKSW");
    msg.value = 230U;

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
    msg.setTimeStamp(0.447467132785);
    msg.setSource(42657U);
    msg.setSourceEntity(241U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.322711900334;
    msg.lon = 0.128546300012;
    msg.height = 0.918088715043;
    msg.x = 0.778603272177;
    msg.y = 0.763110398737;
    msg.z = 0.44363873621;
    msg.phi = 0.267489721214;
    msg.theta = 0.911442808598;
    msg.psi = 0.157847206574;
    msg.u = 0.626346340838;
    msg.v = 0.000752996357757;
    msg.w = 0.265661622703;
    msg.vx = 0.832222416077;
    msg.vy = 0.368430304812;
    msg.vz = 0.227181149599;
    msg.p = 0.909709091542;
    msg.q = 0.481655005487;
    msg.r = 0.774150546468;
    msg.depth = 0.408140377999;
    msg.alt = 0.929951952683;

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
    msg.setTimeStamp(0.0308466479062);
    msg.setSource(31193U);
    msg.setSourceEntity(73U);
    msg.setDestination(14574U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.765785688839;
    msg.lon = 0.66825431138;
    msg.height = 0.651213420206;
    msg.x = 0.0596845301685;
    msg.y = 0.38561619524;
    msg.z = 0.235852403249;
    msg.phi = 0.0916938455028;
    msg.theta = 0.971476556992;
    msg.psi = 0.269295448444;
    msg.u = 0.14759875167;
    msg.v = 0.0274474143648;
    msg.w = 0.272125882493;
    msg.vx = 0.996404268498;
    msg.vy = 0.372791719483;
    msg.vz = 0.288822324193;
    msg.p = 0.103647454394;
    msg.q = 0.250612425399;
    msg.r = 0.481324500983;
    msg.depth = 0.0518382952741;
    msg.alt = 0.608768336597;

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
    msg.setTimeStamp(0.294486552444);
    msg.setSource(1592U);
    msg.setSourceEntity(141U);
    msg.setDestination(60613U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.112879061643;
    msg.lon = 0.0516025348866;
    msg.height = 0.36487319178;
    msg.x = 0.564165567198;
    msg.y = 0.273543503853;
    msg.z = 0.991428513596;
    msg.phi = 0.319315672709;
    msg.theta = 0.118988041471;
    msg.psi = 0.51997492912;
    msg.u = 0.571973381918;
    msg.v = 0.626408276136;
    msg.w = 0.167215432926;
    msg.vx = 0.984289478815;
    msg.vy = 0.503743604481;
    msg.vz = 0.449614871811;
    msg.p = 0.793809539136;
    msg.q = 0.108062648423;
    msg.r = 0.102547567202;
    msg.depth = 0.143505332048;
    msg.alt = 0.551047438261;

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
    msg.setTimeStamp(0.840235231384);
    msg.setSource(50705U);
    msg.setSourceEntity(247U);
    msg.setDestination(34957U);
    msg.setDestinationEntity(4U);
    msg.x = 0.993025072753;
    msg.y = 0.26638576246;
    msg.z = 0.596042698519;

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
    msg.setTimeStamp(0.0438646101823);
    msg.setSource(27672U);
    msg.setSourceEntity(129U);
    msg.setDestination(63753U);
    msg.setDestinationEntity(110U);
    msg.x = 0.501934179176;
    msg.y = 0.698772660823;
    msg.z = 0.879769845329;

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
    msg.setTimeStamp(0.321706340362);
    msg.setSource(41652U);
    msg.setSourceEntity(193U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(232U);
    msg.x = 0.329051250622;
    msg.y = 0.731311111438;
    msg.z = 0.963427947393;

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
    msg.setTimeStamp(0.356024800455);
    msg.setSource(27898U);
    msg.setSourceEntity(34U);
    msg.setDestination(30124U);
    msg.setDestinationEntity(144U);
    msg.value = 0.258517321075;

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
    msg.setTimeStamp(0.72921757702);
    msg.setSource(64758U);
    msg.setSourceEntity(130U);
    msg.setDestination(35787U);
    msg.setDestinationEntity(231U);
    msg.value = 0.538569701751;

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
    msg.setTimeStamp(0.686157678709);
    msg.setSource(30207U);
    msg.setSourceEntity(15U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(69U);
    msg.value = 0.885183247364;

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
    msg.setTimeStamp(0.704985514999);
    msg.setSource(48194U);
    msg.setSourceEntity(61U);
    msg.setDestination(29501U);
    msg.setDestinationEntity(1U);
    msg.value = 0.819388898846;

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
    msg.setTimeStamp(0.988437855901);
    msg.setSource(7198U);
    msg.setSourceEntity(231U);
    msg.setDestination(24364U);
    msg.setDestinationEntity(114U);
    msg.value = 0.51651606761;

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
    msg.setTimeStamp(0.216700609145);
    msg.setSource(21263U);
    msg.setSourceEntity(120U);
    msg.setDestination(12902U);
    msg.setDestinationEntity(243U);
    msg.value = 0.561061304932;

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
    msg.setTimeStamp(0.235111975013);
    msg.setSource(23396U);
    msg.setSourceEntity(220U);
    msg.setDestination(54954U);
    msg.setDestinationEntity(42U);
    msg.x = 0.178362442218;
    msg.y = 0.166027577693;
    msg.z = 0.935566642739;
    msg.phi = 0.11738464638;
    msg.theta = 0.8082500537;
    msg.psi = 0.228739255388;
    msg.p = 0.0031299162213;
    msg.q = 0.835569325411;
    msg.r = 0.468293459424;
    msg.u = 0.271238328948;
    msg.v = 0.238085295735;
    msg.w = 0.812105477513;
    msg.bias_psi = 0.622571405559;
    msg.bias_r = 0.717876140989;

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
    msg.setTimeStamp(0.908845759377);
    msg.setSource(49170U);
    msg.setSourceEntity(116U);
    msg.setDestination(34921U);
    msg.setDestinationEntity(110U);
    msg.x = 0.639137546328;
    msg.y = 0.43912213036;
    msg.z = 0.659811244676;
    msg.phi = 0.277620843864;
    msg.theta = 0.129833055712;
    msg.psi = 0.0872044714871;
    msg.p = 0.18974000625;
    msg.q = 0.678013100868;
    msg.r = 0.636295069554;
    msg.u = 0.854307915921;
    msg.v = 0.854791896604;
    msg.w = 0.137177478198;
    msg.bias_psi = 0.213276654348;
    msg.bias_r = 0.785317584027;

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
    msg.setTimeStamp(0.18539411415);
    msg.setSource(38092U);
    msg.setSourceEntity(141U);
    msg.setDestination(33933U);
    msg.setDestinationEntity(132U);
    msg.x = 0.222818436211;
    msg.y = 0.230491612437;
    msg.z = 0.989747207999;
    msg.phi = 0.119767523733;
    msg.theta = 0.376123816365;
    msg.psi = 0.676458361205;
    msg.p = 0.769117220216;
    msg.q = 0.560938704257;
    msg.r = 0.542001814627;
    msg.u = 0.55280453604;
    msg.v = 0.68867675046;
    msg.w = 0.689825255092;
    msg.bias_psi = 0.977356724661;
    msg.bias_r = 0.546706460418;

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
    msg.setTimeStamp(0.225019409731);
    msg.setSource(64508U);
    msg.setSourceEntity(22U);
    msg.setDestination(41822U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.517076137316;
    msg.bias_r = 0.497444307907;
    msg.cog = 0.982126591039;
    msg.cyaw = 0.20283502163;
    msg.lbl_rej_level = 0.114875787599;
    msg.gps_rej_level = 0.740673613089;
    msg.custom_x = 0.74933774947;
    msg.custom_y = 0.926929637866;
    msg.custom_z = 0.6713421094;

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
    msg.setTimeStamp(0.405657928364);
    msg.setSource(52722U);
    msg.setSourceEntity(87U);
    msg.setDestination(26403U);
    msg.setDestinationEntity(40U);
    msg.bias_psi = 0.868872214226;
    msg.bias_r = 0.426384960749;
    msg.cog = 0.540259905717;
    msg.cyaw = 0.794300695907;
    msg.lbl_rej_level = 0.271779456879;
    msg.gps_rej_level = 0.14383169682;
    msg.custom_x = 0.382172267709;
    msg.custom_y = 0.0766076427864;
    msg.custom_z = 0.257870438558;

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
    msg.setTimeStamp(0.532616348374);
    msg.setSource(49892U);
    msg.setSourceEntity(241U);
    msg.setDestination(41881U);
    msg.setDestinationEntity(136U);
    msg.bias_psi = 0.638907016201;
    msg.bias_r = 0.179381289054;
    msg.cog = 0.421058818534;
    msg.cyaw = 0.380639111101;
    msg.lbl_rej_level = 0.204070425387;
    msg.gps_rej_level = 0.276445615811;
    msg.custom_x = 0.232323982494;
    msg.custom_y = 0.775371557042;
    msg.custom_z = 0.0343393998167;

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
    msg.setTimeStamp(0.603093737787);
    msg.setSource(4030U);
    msg.setSourceEntity(136U);
    msg.setDestination(51825U);
    msg.setDestinationEntity(118U);
    msg.utc_time = 0.30942036849;
    msg.reason = 16U;

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
    msg.setTimeStamp(0.156781897457);
    msg.setSource(65218U);
    msg.setSourceEntity(46U);
    msg.setDestination(33410U);
    msg.setDestinationEntity(217U);
    msg.utc_time = 0.790655009423;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.552699339891);
    msg.setSource(35276U);
    msg.setSourceEntity(33U);
    msg.setDestination(2596U);
    msg.setDestinationEntity(47U);
    msg.utc_time = 0.00109028154021;
    msg.reason = 119U;

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
    msg.setTimeStamp(0.370076834287);
    msg.setSource(59530U);
    msg.setSourceEntity(252U);
    msg.setDestination(50283U);
    msg.setDestinationEntity(58U);
    msg.id = 195U;
    msg.range = 0.0753468584366;
    msg.acceptance = 43U;

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
    msg.setTimeStamp(0.891422652166);
    msg.setSource(33650U);
    msg.setSourceEntity(188U);
    msg.setDestination(50308U);
    msg.setDestinationEntity(91U);
    msg.id = 129U;
    msg.range = 0.288514819611;
    msg.acceptance = 15U;

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
    msg.setTimeStamp(0.779618525319);
    msg.setSource(4540U);
    msg.setSourceEntity(51U);
    msg.setDestination(29514U);
    msg.setDestinationEntity(163U);
    msg.id = 148U;
    msg.range = 0.0683412947848;
    msg.acceptance = 74U;

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
    msg.setTimeStamp(0.0430628911051);
    msg.setSource(11364U);
    msg.setSourceEntity(156U);
    msg.setDestination(7415U);
    msg.setDestinationEntity(1U);
    msg.type = 87U;
    msg.reason = 14U;
    msg.value = 0.468186151373;
    msg.timestep = 0.560312989387;

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
    msg.setTimeStamp(0.899154058315);
    msg.setSource(63615U);
    msg.setSourceEntity(130U);
    msg.setDestination(29716U);
    msg.setDestinationEntity(135U);
    msg.type = 57U;
    msg.reason = 75U;
    msg.value = 0.466009231887;
    msg.timestep = 0.621679836518;

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
    msg.setTimeStamp(0.669355845785);
    msg.setSource(34324U);
    msg.setSourceEntity(89U);
    msg.setDestination(1531U);
    msg.setDestinationEntity(139U);
    msg.type = 185U;
    msg.reason = 111U;
    msg.value = 0.257477432649;
    msg.timestep = 0.135148942923;

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
    msg.setTimeStamp(0.275447551293);
    msg.setSource(5666U);
    msg.setSourceEntity(62U);
    msg.setDestination(30834U);
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
    msg.setTimeStamp(0.71013737689);
    msg.setSource(44788U);
    msg.setSourceEntity(15U);
    msg.setDestination(17952U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.733525053734);
    msg.setSource(13594U);
    msg.setSourceEntity(98U);
    msg.setDestination(40558U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.420277021143);
    msg.setSource(62133U);
    msg.setSourceEntity(116U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(91U);
    msg.beacon.assign("UXDQGCVYJVVMXNUSEAJSKJYKUHEUYHEPVGQLTIIIZFNNWCTLWDBXXENTQGKMLHCPKPPUICTPBGACBKMKDFXXAWRZQHZFKWWNHWDJVBCOUZQMLFNZNDISEKLJSRYWIPMAHMQOEBXQEZJSWJOQZCLWHPYBFNCFEO");
    msg.x = 0.0345532888564;
    msg.y = 0.0550823363383;
    msg.depth = 0.952286871145;
    msg.var_x = 0.641129631185;
    msg.var_y = 0.481813854355;

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
    msg.setTimeStamp(0.212567473079);
    msg.setSource(18685U);
    msg.setSourceEntity(101U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(227U);
    msg.beacon.assign("JZRKCLASBIRQXSGHTPPIMGKXWZXMCLBUTVOIXDJVPTGPESU");
    msg.x = 0.273510914045;
    msg.y = 0.610238131372;
    msg.depth = 0.894887002751;
    msg.var_x = 0.910799375119;
    msg.var_y = 0.157699627112;

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
    msg.setTimeStamp(0.141893877979);
    msg.setSource(23873U);
    msg.setSourceEntity(135U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(27U);
    msg.beacon.assign("TVCAGXYUIMLLANSUVVNIOEMDAQSQKJJWXHJKOEPLIAIHYSWJKOCPQODPHMRBSRBFPIUXKWWHPJWMCEUNKTHNOLODYMSGIUETZYVTZERQVDBLFANTSCRFDEDHESPNRMMIYFYNVXMJLTAKCTDAAQFBHGJMLKZIUAKTTWXWFQVPQVWJQBOIBFWEIRTZEBCDXBCOHQZPLRYUOOGGXDNYXGANHMZXRFZUVJ");
    msg.x = 0.0468017261613;
    msg.y = 0.120237950166;
    msg.depth = 0.458964678648;
    msg.var_x = 0.0855744940316;
    msg.var_y = 0.932672400093;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.58109296263);
    msg.setSource(61122U);
    msg.setSourceEntity(245U);
    msg.setDestination(3620U);
    msg.setDestinationEntity(47U);
    msg.value = 0.702705829867;

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
    msg.setTimeStamp(0.766874028141);
    msg.setSource(42703U);
    msg.setSourceEntity(239U);
    msg.setDestination(59039U);
    msg.setDestinationEntity(12U);
    msg.value = 0.0804835159126;

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
    msg.setTimeStamp(0.209641488308);
    msg.setSource(44902U);
    msg.setSourceEntity(177U);
    msg.setDestination(18902U);
    msg.setDestinationEntity(0U);
    msg.value = 0.93064896415;

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
    msg.setTimeStamp(0.913993503315);
    msg.setSource(54915U);
    msg.setSourceEntity(202U);
    msg.setDestination(12062U);
    msg.setDestinationEntity(159U);
    msg.value = 0.598435063866;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.938935125137);
    msg.setSource(41815U);
    msg.setSourceEntity(74U);
    msg.setDestination(44013U);
    msg.setDestinationEntity(12U);
    msg.value = 0.246636839777;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.983327790616);
    msg.setSource(1941U);
    msg.setSourceEntity(90U);
    msg.setDestination(12362U);
    msg.setDestinationEntity(7U);
    msg.value = 0.408314143936;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.325780208866);
    msg.setSource(28295U);
    msg.setSourceEntity(162U);
    msg.setDestination(35321U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0277083818173;
    msg.speed_units = 66U;

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
    msg.setTimeStamp(0.651311873155);
    msg.setSource(45913U);
    msg.setSourceEntity(60U);
    msg.setDestination(60207U);
    msg.setDestinationEntity(201U);
    msg.value = 0.302997873207;
    msg.speed_units = 53U;

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
    msg.setTimeStamp(0.906845950272);
    msg.setSource(61256U);
    msg.setSourceEntity(250U);
    msg.setDestination(50933U);
    msg.setDestinationEntity(85U);
    msg.value = 0.304811313635;
    msg.speed_units = 127U;

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
    msg.setTimeStamp(0.152162459649);
    msg.setSource(35280U);
    msg.setSourceEntity(121U);
    msg.setDestination(25178U);
    msg.setDestinationEntity(19U);
    msg.value = 0.795485106207;

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
    msg.setTimeStamp(0.308303447185);
    msg.setSource(38248U);
    msg.setSourceEntity(82U);
    msg.setDestination(45764U);
    msg.setDestinationEntity(56U);
    msg.value = 0.875450986799;

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
    msg.setTimeStamp(0.391681923996);
    msg.setSource(19671U);
    msg.setSourceEntity(100U);
    msg.setDestination(8918U);
    msg.setDestinationEntity(235U);
    msg.value = 0.791105236143;

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
    msg.setTimeStamp(0.213288247665);
    msg.setSource(64364U);
    msg.setSourceEntity(86U);
    msg.setDestination(52677U);
    msg.setDestinationEntity(88U);
    msg.value = 0.123943871063;

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
    msg.setTimeStamp(0.441960259673);
    msg.setSource(35876U);
    msg.setSourceEntity(132U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(62U);
    msg.value = 0.235197344623;

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
    msg.setTimeStamp(0.710777863742);
    msg.setSource(54151U);
    msg.setSourceEntity(127U);
    msg.setDestination(23979U);
    msg.setDestinationEntity(89U);
    msg.value = 0.733607207234;

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
    msg.setTimeStamp(0.398842754541);
    msg.setSource(15752U);
    msg.setSourceEntity(128U);
    msg.setDestination(16607U);
    msg.setDestinationEntity(19U);
    msg.value = 0.906939857149;

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
    msg.setTimeStamp(0.257507688954);
    msg.setSource(47203U);
    msg.setSourceEntity(231U);
    msg.setDestination(10666U);
    msg.setDestinationEntity(39U);
    msg.value = 0.328871956316;

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
    msg.setTimeStamp(0.492055398627);
    msg.setSource(30579U);
    msg.setSourceEntity(178U);
    msg.setDestination(28237U);
    msg.setDestinationEntity(102U);
    msg.value = 0.802436169872;

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
    msg.setTimeStamp(0.312284155805);
    msg.setSource(41434U);
    msg.setSourceEntity(72U);
    msg.setDestination(45244U);
    msg.setDestinationEntity(167U);
    msg.start_lat = 0.562040001286;
    msg.start_lon = 0.256926322823;
    msg.start_z = 0.639989733139;
    msg.start_z_units = 29U;
    msg.end_lat = 0.853127146936;
    msg.end_lon = 0.445265272776;
    msg.end_z = 0.818389770367;
    msg.end_z_units = 14U;
    msg.speed = 0.803217951201;
    msg.speed_units = 106U;
    msg.lradius = 0.348190686562;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.0589792030744);
    msg.setSource(40024U);
    msg.setSourceEntity(132U);
    msg.setDestination(27614U);
    msg.setDestinationEntity(228U);
    msg.start_lat = 0.783478550045;
    msg.start_lon = 0.104301454428;
    msg.start_z = 0.00923748878843;
    msg.start_z_units = 26U;
    msg.end_lat = 0.375525520905;
    msg.end_lon = 0.741799461942;
    msg.end_z = 0.613965490767;
    msg.end_z_units = 230U;
    msg.speed = 0.929617548752;
    msg.speed_units = 68U;
    msg.lradius = 0.1322274732;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.768567009494);
    msg.setSource(4011U);
    msg.setSourceEntity(188U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(249U);
    msg.start_lat = 0.634357547084;
    msg.start_lon = 0.268548638797;
    msg.start_z = 0.453092740601;
    msg.start_z_units = 103U;
    msg.end_lat = 0.55071042849;
    msg.end_lon = 0.634878865641;
    msg.end_z = 0.472120474162;
    msg.end_z_units = 77U;
    msg.speed = 0.727647014573;
    msg.speed_units = 45U;
    msg.lradius = 0.521015359906;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.183312977832);
    msg.setSource(37061U);
    msg.setSourceEntity(11U);
    msg.setDestination(13749U);
    msg.setDestinationEntity(128U);
    msg.x = 0.835274560439;
    msg.y = 0.606265482196;
    msg.z = 0.992067084349;
    msg.k = 0.810597246657;
    msg.m = 0.604542728424;
    msg.n = 0.62459109347;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.888772145315);
    msg.setSource(45226U);
    msg.setSourceEntity(161U);
    msg.setDestination(57467U);
    msg.setDestinationEntity(114U);
    msg.x = 0.391212025537;
    msg.y = 0.398155218825;
    msg.z = 0.0483905897919;
    msg.k = 0.246465189448;
    msg.m = 0.174629545535;
    msg.n = 0.12005440424;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.339630823953);
    msg.setSource(7182U);
    msg.setSourceEntity(131U);
    msg.setDestination(9356U);
    msg.setDestinationEntity(10U);
    msg.x = 0.249024154169;
    msg.y = 0.0943259528062;
    msg.z = 0.259202324305;
    msg.k = 0.0902087173047;
    msg.m = 0.950493906281;
    msg.n = 0.0985801729401;
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
    msg.setTimeStamp(0.432478984003);
    msg.setSource(4841U);
    msg.setSourceEntity(86U);
    msg.setDestination(36296U);
    msg.setDestinationEntity(107U);
    msg.value = 0.429116320399;

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
    msg.setTimeStamp(0.388453303075);
    msg.setSource(61923U);
    msg.setSourceEntity(98U);
    msg.setDestination(55287U);
    msg.setDestinationEntity(64U);
    msg.value = 0.455464220242;

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
    msg.setTimeStamp(0.852331898301);
    msg.setSource(45105U);
    msg.setSourceEntity(131U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(186U);
    msg.value = 0.015299435377;

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
    msg.setTimeStamp(0.667309357261);
    msg.setSource(56889U);
    msg.setSourceEntity(85U);
    msg.setDestination(13031U);
    msg.setDestinationEntity(240U);
    msg.u = 0.903750623411;
    msg.v = 0.537881587591;
    msg.w = 0.210365526848;
    msg.p = 0.0339546424646;
    msg.q = 0.452825280366;
    msg.r = 0.433323114706;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.851993430502);
    msg.setSource(14526U);
    msg.setSourceEntity(154U);
    msg.setDestination(47980U);
    msg.setDestinationEntity(184U);
    msg.u = 0.642141804505;
    msg.v = 0.194775877493;
    msg.w = 0.903506123507;
    msg.p = 0.161604708672;
    msg.q = 0.371940045512;
    msg.r = 0.689045918135;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.253967845248);
    msg.setSource(39679U);
    msg.setSourceEntity(3U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(32U);
    msg.u = 0.693654229063;
    msg.v = 0.38019975136;
    msg.w = 0.83161771616;
    msg.p = 0.201741356431;
    msg.q = 0.36316295887;
    msg.r = 0.25670034127;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.0761797080336);
    msg.setSource(5071U);
    msg.setSourceEntity(215U);
    msg.setDestination(5112U);
    msg.setDestinationEntity(102U);
    msg.start_lat = 0.551834761984;
    msg.start_lon = 0.0470309307295;
    msg.start_z = 0.415068741904;
    msg.start_z_units = 46U;
    msg.end_lat = 0.533889675171;
    msg.end_lon = 0.690949026418;
    msg.end_z = 0.676713020847;
    msg.end_z_units = 25U;
    msg.lradius = 0.62446271225;
    msg.flags = 52U;
    msg.x = 0.945536224066;
    msg.y = 0.878263006758;
    msg.z = 0.930602967387;
    msg.vx = 0.0100809499782;
    msg.vy = 0.445810851364;
    msg.vz = 0.749451463165;
    msg.course_error = 0.28288554321;
    msg.eta = 33401U;

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
    msg.setTimeStamp(0.596665382718);
    msg.setSource(267U);
    msg.setSourceEntity(56U);
    msg.setDestination(31426U);
    msg.setDestinationEntity(7U);
    msg.start_lat = 0.262507925049;
    msg.start_lon = 0.801464803152;
    msg.start_z = 0.510824931574;
    msg.start_z_units = 170U;
    msg.end_lat = 0.809856150275;
    msg.end_lon = 0.954642585708;
    msg.end_z = 0.367420915667;
    msg.end_z_units = 163U;
    msg.lradius = 0.887868245052;
    msg.flags = 14U;
    msg.x = 0.768506832123;
    msg.y = 0.880834093136;
    msg.z = 0.739959038334;
    msg.vx = 0.98163678794;
    msg.vy = 0.850700036008;
    msg.vz = 0.644249342288;
    msg.course_error = 0.7893500991;
    msg.eta = 40983U;

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
    msg.setTimeStamp(0.439164323747);
    msg.setSource(51594U);
    msg.setSourceEntity(150U);
    msg.setDestination(10866U);
    msg.setDestinationEntity(37U);
    msg.start_lat = 0.729761778452;
    msg.start_lon = 0.907856547768;
    msg.start_z = 0.762734401137;
    msg.start_z_units = 223U;
    msg.end_lat = 0.0875036304689;
    msg.end_lon = 0.237975554308;
    msg.end_z = 0.00522530153034;
    msg.end_z_units = 28U;
    msg.lradius = 0.903132406446;
    msg.flags = 39U;
    msg.x = 0.053254444904;
    msg.y = 0.967267875534;
    msg.z = 0.367336318116;
    msg.vx = 0.348557880564;
    msg.vy = 0.170879471582;
    msg.vz = 0.273478657002;
    msg.course_error = 0.905525325608;
    msg.eta = 4784U;

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
    msg.setTimeStamp(0.0679452046421);
    msg.setSource(42337U);
    msg.setSourceEntity(224U);
    msg.setDestination(43173U);
    msg.setDestinationEntity(185U);
    msg.k = 0.493306037871;
    msg.m = 0.382352976831;
    msg.n = 0.87328587687;

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
    msg.setTimeStamp(0.140650397228);
    msg.setSource(48159U);
    msg.setSourceEntity(142U);
    msg.setDestination(21080U);
    msg.setDestinationEntity(238U);
    msg.k = 0.568177338166;
    msg.m = 0.0326865615023;
    msg.n = 0.409446326582;

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
    msg.setTimeStamp(0.372734135216);
    msg.setSource(24937U);
    msg.setSourceEntity(1U);
    msg.setDestination(13023U);
    msg.setDestinationEntity(17U);
    msg.k = 0.878384799441;
    msg.m = 0.793242543919;
    msg.n = 0.80801681372;

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
    msg.setTimeStamp(0.775087441812);
    msg.setSource(46324U);
    msg.setSourceEntity(19U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(234U);
    msg.p = 0.699483485113;
    msg.i = 0.606682900565;
    msg.d = 0.808415751798;
    msg.a = 0.0753379313001;

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
    msg.setTimeStamp(0.838542805045);
    msg.setSource(50413U);
    msg.setSourceEntity(82U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(247U);
    msg.p = 0.484238593917;
    msg.i = 0.315018948736;
    msg.d = 0.0955964067384;
    msg.a = 0.543741179392;

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
    msg.setTimeStamp(0.279239174586);
    msg.setSource(34845U);
    msg.setSourceEntity(27U);
    msg.setDestination(5032U);
    msg.setDestinationEntity(91U);
    msg.p = 0.246209324745;
    msg.i = 0.604196430395;
    msg.d = 0.500519486272;
    msg.a = 0.832069595595;

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
    msg.setTimeStamp(0.960696665745);
    msg.setSource(35259U);
    msg.setSourceEntity(54U);
    msg.setDestination(25760U);
    msg.setDestinationEntity(180U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.628613725956);
    msg.setSource(20684U);
    msg.setSourceEntity(48U);
    msg.setDestination(51445U);
    msg.setDestinationEntity(25U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.190482642989);
    msg.setSource(8833U);
    msg.setSourceEntity(194U);
    msg.setDestination(46623U);
    msg.setDestinationEntity(165U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.426803725682);
    msg.setSource(625U);
    msg.setSourceEntity(120U);
    msg.setDestination(63675U);
    msg.setDestinationEntity(251U);
    msg.timeout = 16890U;
    msg.lat = 0.581679182347;
    msg.lon = 0.880322694576;
    msg.z = 0.77755593441;
    msg.z_units = 178U;
    msg.speed = 0.572234657475;
    msg.speed_units = 196U;
    msg.roll = 0.665087388786;
    msg.pitch = 0.629183696799;
    msg.yaw = 0.653857808646;
    msg.custom.assign("BYJFCLDAREVPRAYYFZBGHCKRLCIIHVCMLTXWEXEQUNHOJNJGJBGAESDDFVFAJPWBREATZLWMSSCATHV");

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
    msg.setTimeStamp(0.650459908667);
    msg.setSource(17377U);
    msg.setSourceEntity(149U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(36U);
    msg.timeout = 3883U;
    msg.lat = 0.75439830176;
    msg.lon = 0.584794637892;
    msg.z = 0.600910589507;
    msg.z_units = 218U;
    msg.speed = 0.379345813285;
    msg.speed_units = 25U;
    msg.roll = 0.56893052197;
    msg.pitch = 0.381920746279;
    msg.yaw = 0.0626414575626;
    msg.custom.assign("MGSLNZVZUYYARZFLFCWPXPIOWWKBBRMNEEQTQUMAXTAHOEZOBRUPMKGJWIXMTVXISUNJLTQSHYSIPCOWKUMCDCYCJTQJSAZRPWGBXVMYSEOQZSIIELCCERJBOKBGRJDLPBSSDANDQKTFMVNOKTIX");

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
    msg.setTimeStamp(0.961673529236);
    msg.setSource(1294U);
    msg.setSourceEntity(0U);
    msg.setDestination(35632U);
    msg.setDestinationEntity(181U);
    msg.timeout = 16377U;
    msg.lat = 0.425701564948;
    msg.lon = 0.26242623426;
    msg.z = 0.84025533149;
    msg.z_units = 95U;
    msg.speed = 0.810577408924;
    msg.speed_units = 20U;
    msg.roll = 0.514699850135;
    msg.pitch = 0.815360306467;
    msg.yaw = 0.300886853444;
    msg.custom.assign("HZKJGLQHGCPRHRQWSCEGHHZEQIMVAOTECRHFSS");

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
    msg.setTimeStamp(0.695700592839);
    msg.setSource(29871U);
    msg.setSourceEntity(47U);
    msg.setDestination(5045U);
    msg.setDestinationEntity(104U);
    msg.timeout = 18003U;
    msg.lat = 0.714449421846;
    msg.lon = 0.98563721645;
    msg.z = 0.17953764186;
    msg.z_units = 94U;
    msg.speed = 0.429521740224;
    msg.speed_units = 244U;
    msg.duration = 19111U;
    msg.radius = 0.239465299442;
    msg.flags = 151U;
    msg.custom.assign("QCCEIPPFUSHRQRBICBNZLHPZQAEKKRZLJBTUBCAJKJVOQGDNCPVUBCQKRGVVYXHAKXOLGUMDNEAXLIYNPMFNODNONRVGAMHSQPSEZYVAHRTIGZYTFBSLFYJDJCUDFMUJLFWGPTRJTIOZZMHYYDXGBMWAKSWLEZJQNAQIMSIFFLTPOWTOUOWIKABTWAXSUOKWGLXXDIXEEBZXDWUSM");

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
    msg.setTimeStamp(0.706726814336);
    msg.setSource(32422U);
    msg.setSourceEntity(134U);
    msg.setDestination(38761U);
    msg.setDestinationEntity(228U);
    msg.timeout = 38674U;
    msg.lat = 0.441019756265;
    msg.lon = 0.0956293805436;
    msg.z = 0.143193399894;
    msg.z_units = 25U;
    msg.speed = 0.119560957477;
    msg.speed_units = 24U;
    msg.duration = 2954U;
    msg.radius = 0.298421778444;
    msg.flags = 59U;
    msg.custom.assign("OHMRMTZVYUTEDXKRWAOXMOBRPITSDHNSIWQOGVXKBWCYKCGIHTGOGDY");

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
    msg.setTimeStamp(0.211104052963);
    msg.setSource(29485U);
    msg.setSourceEntity(85U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(61U);
    msg.timeout = 45314U;
    msg.lat = 0.471961187369;
    msg.lon = 0.650248139976;
    msg.z = 0.0470887954294;
    msg.z_units = 140U;
    msg.speed = 0.106009547482;
    msg.speed_units = 30U;
    msg.duration = 16509U;
    msg.radius = 0.336949494089;
    msg.flags = 212U;
    msg.custom.assign("OIVEJFMFSOGDHJYURDLJUKSYMJRCPLZFNARVIEMFTHOTKVKNWUTMIRGBOGHRPYXLZDESSPDJDVNPCZPJLEYNJVLTWNZGQEKICDMWPCWIWHKVULMRPJAGDHARFRQWUDKKNWRKLZFS");

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
    msg.setTimeStamp(0.0328320121843);
    msg.setSource(28823U);
    msg.setSourceEntity(253U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(193U);
    msg.custom.assign("CSSLCGLXRFBJNHXQVKEBAYAXFWOQIDPJEHTDIWHMZATEPZMFFLJNHVCXTICAWYZAYCZP");

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
    msg.setTimeStamp(0.0900797930019);
    msg.setSource(6709U);
    msg.setSourceEntity(228U);
    msg.setDestination(29170U);
    msg.setDestinationEntity(128U);
    msg.custom.assign("TJUZMBHXSZOIOHXPBQEDJAWZDVAKANIWHASOVYWVXSMWJCPKBOWEQUQJJCZMCONHGKVDXIUEMFTKRUQESTGGNWOBALUAF");

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
    msg.setTimeStamp(0.0136519042654);
    msg.setSource(29273U);
    msg.setSourceEntity(73U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(38U);
    msg.custom.assign("GUPFSQQMUQLXPAYDZTVWOMGWARFASTHJDHJDIMMHODUXTINNQIKPOWBTXNDKXMTZFHMEVRPDZFEOOLAPCEZGGVNBJCEONRVJEQJYUKCBHYXLGMFWPGGCYCHEIBISKKKBVGLLISSJFTDTTMJXHUHW");

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
    msg.setTimeStamp(0.275231116227);
    msg.setSource(61885U);
    msg.setSourceEntity(125U);
    msg.setDestination(32287U);
    msg.setDestinationEntity(85U);
    msg.timeout = 32083U;
    msg.lat = 0.650119496894;
    msg.lon = 0.896848800949;
    msg.z = 0.425962225028;
    msg.z_units = 180U;
    msg.duration = 18435U;
    msg.speed = 0.18276236409;
    msg.speed_units = 170U;
    msg.type = 222U;
    msg.radius = 0.167493146121;
    msg.length = 0.368185094011;
    msg.bearing = 0.0883860354503;
    msg.direction = 93U;
    msg.custom.assign("UGPCMIMFFMARSVYYJXOVANGLNQWBRKFYZTXDCADUGHAIDRRHCAKZBHWCROKXNYWDQDKUMBJENKNLBSVOXPPPWGZNJQOBLRRIGYJOETSDFBNKHOQUTZBUIVODWTQHUGVYPUGWTURBOBLEFPCDSSVJYQLIQAXJNIYJLTHAGCXLLSIOCWZYXPKNFEAAVFRFKHBOUXXVQFSAEYIIEEWCZIGNZWEMJHTSRMMXZKTEPSZJVFUKTDLDJSCZHTWHM");

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
    msg.setTimeStamp(0.328754803984);
    msg.setSource(65363U);
    msg.setSourceEntity(240U);
    msg.setDestination(27196U);
    msg.setDestinationEntity(36U);
    msg.timeout = 4259U;
    msg.lat = 0.728604477986;
    msg.lon = 0.694771263141;
    msg.z = 0.603855079337;
    msg.z_units = 105U;
    msg.duration = 30139U;
    msg.speed = 0.548597317054;
    msg.speed_units = 185U;
    msg.type = 139U;
    msg.radius = 0.849555372378;
    msg.length = 0.434864017557;
    msg.bearing = 0.646513020959;
    msg.direction = 150U;
    msg.custom.assign("PPABNLJIODMZTBDMFGCJODZLVRXAGQABCFDTVUPYXYMFOXKDJHYIHGDMRLBZEKKTWVXRCULOJQWIIEM");

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
    msg.setTimeStamp(0.0869661237068);
    msg.setSource(55943U);
    msg.setSourceEntity(81U);
    msg.setDestination(9642U);
    msg.setDestinationEntity(48U);
    msg.timeout = 14774U;
    msg.lat = 0.476402071803;
    msg.lon = 0.153266772448;
    msg.z = 0.10636331484;
    msg.z_units = 101U;
    msg.duration = 17909U;
    msg.speed = 0.421629686793;
    msg.speed_units = 131U;
    msg.type = 28U;
    msg.radius = 0.508320789201;
    msg.length = 0.857972853025;
    msg.bearing = 0.663717359361;
    msg.direction = 212U;
    msg.custom.assign("ZACEFHUYDRJINOPAPAXMWHERUQFIZGSTUYOMMVAMVNXLEAZXQIUUNHCREMKDUUJXHWOYBOWDUTJRQVFKZDXCEKVJGSEWVKYTLBTPOVCOLNWKSTCJGLIBLUVXQRBPCMZFXHBDLLMGRAHSHIATAS");

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
    msg.setTimeStamp(0.076014518402);
    msg.setSource(64038U);
    msg.setSourceEntity(44U);
    msg.setDestination(57962U);
    msg.setDestinationEntity(147U);
    msg.duration = 1443U;
    msg.custom.assign("AXYULEYAOWVDMUCZZIRQBNGTVHAKQJQZARHJDONCBSIELRRFMRUJYRTSGEKSLKGKZPTQALBQJSVCWFYWWLSTZNSMAHUSEXCMXOACHVYFEQWSOPGDNCYGDORYDFUBNVWFOEKIJHTUMMIKQFITSDBYFIMKBREUWXWNALXFJPOXVJPTCHPZI");

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
    msg.setTimeStamp(0.0244677773199);
    msg.setSource(37141U);
    msg.setSourceEntity(41U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(129U);
    msg.duration = 62075U;
    msg.custom.assign("SJMSNBYOZNFDHZBCPUPIUEEZMFLUQGUKTNZFYVIKHPIEQQGBRULEUHRCQSAHPCMGRWRPJSCDPQXKNOIODSBZLIKXHCPQETJOGXLNWSESASLJXFDKQHRCTUUNBXQFVMKTJUNVEGTTADLGHDTJMLIOWFTXVPWDJAYYVFZCDRGF");

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
    msg.setTimeStamp(0.472904845377);
    msg.setSource(8296U);
    msg.setSourceEntity(67U);
    msg.setDestination(54399U);
    msg.setDestinationEntity(190U);
    msg.duration = 58033U;
    msg.custom.assign("SDHXPOWXVUJLDZMVXIX");

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
    msg.setTimeStamp(0.503118475004);
    msg.setSource(15125U);
    msg.setSourceEntity(167U);
    msg.setDestination(10447U);
    msg.setDestinationEntity(207U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.167457000073;
    tmp_msg_0.z_units = 117U;
    msg.control.set(tmp_msg_0);
    msg.duration = 15064U;
    msg.custom.assign("PZIOXZVPAPPCEQHTPEGTAUGWOUCTIHJQJBS");

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
    msg.setTimeStamp(0.468715336835);
    msg.setSource(7728U);
    msg.setSourceEntity(42U);
    msg.setDestination(7781U);
    msg.setDestinationEntity(181U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.515881088473;
    msg.control.set(tmp_msg_0);
    msg.duration = 45988U;
    msg.custom.assign("VEKRNGXWROOKINAIBUCRNNLXMKQHPZEGHUTGIUZYECZTVLELWBWFKDXAMDAHGFWMPIVHFZUCIZDACAOSKSLUSBSCVCTQVNDUBKRQBBRYJFBUKJDVTXCNJZWXDAQRTFLOREVISTPM");

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
    msg.setTimeStamp(0.659249850777);
    msg.setSource(55609U);
    msg.setSourceEntity(122U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(251U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.759705132038;
    msg.control.set(tmp_msg_0);
    msg.duration = 64586U;
    msg.custom.assign("XYJCTJZQJYRHPNSGK");

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
    msg.setTimeStamp(0.641361576966);
    msg.setSource(15636U);
    msg.setSourceEntity(172U);
    msg.setDestination(19463U);
    msg.setDestinationEntity(100U);
    msg.timeout = 36286U;
    msg.lat = 0.410373275291;
    msg.lon = 0.279374586073;
    msg.z = 0.77430028323;
    msg.z_units = 216U;
    msg.speed = 0.177378987644;
    msg.speed_units = 74U;
    msg.bearing = 0.694851941086;
    msg.cross_angle = 0.964424718833;
    msg.width = 0.592025712589;
    msg.length = 0.0508559136065;
    msg.hstep = 0.0475653077662;
    msg.coff = 212U;
    msg.alternation = 156U;
    msg.flags = 102U;
    msg.custom.assign("RCIJHXHWJCBWWHMEZMZQRYQULQEGOYLLLRHHFYZNMTEFLKJWTCGFABZKDODAAGQUMAKMZTAXLQXZKAORGPTMEETIHH");

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
    msg.setTimeStamp(0.180202656976);
    msg.setSource(12065U);
    msg.setSourceEntity(189U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(153U);
    msg.timeout = 43028U;
    msg.lat = 0.956912429341;
    msg.lon = 0.760171977995;
    msg.z = 0.852917774493;
    msg.z_units = 120U;
    msg.speed = 0.143623323923;
    msg.speed_units = 229U;
    msg.bearing = 0.605025901915;
    msg.cross_angle = 0.3258317427;
    msg.width = 0.93110238839;
    msg.length = 0.692945410237;
    msg.hstep = 0.0370787135106;
    msg.coff = 52U;
    msg.alternation = 142U;
    msg.flags = 149U;
    msg.custom.assign("FYQFAYXBRKTDEQDKZNDCHYVLPKFWJXWSDGUPQJUQBDIXCD");

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
    msg.setTimeStamp(0.152386141939);
    msg.setSource(55484U);
    msg.setSourceEntity(52U);
    msg.setDestination(36911U);
    msg.setDestinationEntity(2U);
    msg.timeout = 59900U;
    msg.lat = 0.66488388359;
    msg.lon = 0.488852655608;
    msg.z = 0.598200115015;
    msg.z_units = 230U;
    msg.speed = 0.704683823628;
    msg.speed_units = 44U;
    msg.bearing = 0.467581392299;
    msg.cross_angle = 0.192128308363;
    msg.width = 0.662505265969;
    msg.length = 0.670560128576;
    msg.hstep = 0.15962020748;
    msg.coff = 77U;
    msg.alternation = 178U;
    msg.flags = 112U;
    msg.custom.assign("YEOBGRCAUTMAZFSKLPP");

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
    msg.setTimeStamp(0.867252541794);
    msg.setSource(33065U);
    msg.setSourceEntity(95U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(163U);
    msg.timeout = 62211U;
    msg.lat = 0.269492240879;
    msg.lon = 0.472881374011;
    msg.z = 0.690563112835;
    msg.z_units = 102U;
    msg.speed = 0.157493570537;
    msg.speed_units = 193U;
    msg.custom.assign("XOLEFBACWFYWNMAXNHXBKXAIVGVPMHZUKZHVRXBSZISNZQGDELKXMZUSITCDCORMTXJGBJUBMFRHWEQWQPOEXHDRWRDKZJGDVEDCUSJTQQARCGFMNVIWYPOYJHKUJCVBZPDO");

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
    msg.setTimeStamp(0.105462391504);
    msg.setSource(59674U);
    msg.setSourceEntity(220U);
    msg.setDestination(37083U);
    msg.setDestinationEntity(121U);
    msg.timeout = 27893U;
    msg.lat = 0.708441421558;
    msg.lon = 0.662202262125;
    msg.z = 0.373725652892;
    msg.z_units = 240U;
    msg.speed = 0.32740717158;
    msg.speed_units = 189U;
    msg.custom.assign("QMEUGEOIPQJZMVRBDLFCOSJMWETCLQKPAKZOHOPUVTUDGYUSUOJCDANODMTHYPFWHLHJJSDXISBPQNNCSBMZQPIFQLMZNXSCJWBBTNRGYNAALNZKKNBVSOMDSIRB");

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
    msg.setTimeStamp(0.201204205769);
    msg.setSource(49087U);
    msg.setSourceEntity(60U);
    msg.setDestination(821U);
    msg.setDestinationEntity(220U);
    msg.timeout = 2548U;
    msg.lat = 0.777568462361;
    msg.lon = 0.0384845036296;
    msg.z = 0.836869235223;
    msg.z_units = 148U;
    msg.speed = 0.145331894695;
    msg.speed_units = 179U;
    msg.custom.assign("VRBUVMFZDHJTOKZUMMBWTPLZNPUSGUERCFNRIQBGQHESHCZPTAEBVTZNF");

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
    msg.setTimeStamp(0.636889971224);
    msg.setSource(29335U);
    msg.setSourceEntity(57U);
    msg.setDestination(55176U);
    msg.setDestinationEntity(223U);
    msg.x = 0.493117569958;
    msg.y = 0.815185870564;
    msg.z = 0.941551715378;

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
    msg.setTimeStamp(0.49620165153);
    msg.setSource(65388U);
    msg.setSourceEntity(171U);
    msg.setDestination(62196U);
    msg.setDestinationEntity(228U);
    msg.x = 0.17935650887;
    msg.y = 0.524482134721;
    msg.z = 0.743735467432;

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
    msg.setTimeStamp(0.450072341048);
    msg.setSource(42913U);
    msg.setSourceEntity(195U);
    msg.setDestination(59922U);
    msg.setDestinationEntity(239U);
    msg.x = 0.595019588823;
    msg.y = 0.610709222012;
    msg.z = 0.0755478311115;

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
    msg.setTimeStamp(0.512863859452);
    msg.setSource(33623U);
    msg.setSourceEntity(157U);
    msg.setDestination(5502U);
    msg.setDestinationEntity(56U);
    msg.timeout = 43905U;
    msg.lat = 0.197515298642;
    msg.lon = 0.109487207806;
    msg.z = 0.391349042061;
    msg.z_units = 116U;
    msg.amplitude = 0.62850515073;
    msg.pitch = 0.543474014892;
    msg.speed = 0.487618929378;
    msg.speed_units = 189U;
    msg.custom.assign("ZUFRRQWOXZMHAERYLDWRHHGNPOJKEWCYEPVKTVZCTUVUOSMFPVEPCFVLKJQXWIVXDLTLGGIDJGEBXKSQUOLCHLHQJBMEVOFLDESBAJSCEXIBDHAHJIAPTDDAIRNXBZGLUWTFYNCJNRYMWNKFFKFSBM");

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
    msg.setTimeStamp(0.229728523116);
    msg.setSource(59129U);
    msg.setSourceEntity(52U);
    msg.setDestination(9986U);
    msg.setDestinationEntity(138U);
    msg.timeout = 61426U;
    msg.lat = 0.275682701312;
    msg.lon = 0.678017532268;
    msg.z = 0.673861267586;
    msg.z_units = 185U;
    msg.amplitude = 0.00380154439043;
    msg.pitch = 0.54442032928;
    msg.speed = 0.79442700269;
    msg.speed_units = 111U;
    msg.custom.assign("TASQFEKZWAQRJCFPMTGXKKHIZOHOANCKDJDQILVUNHQVZSLWZETSKVBBIQFXRIWAXGRYRUGFTCPBUAUKUAPKQVTDKYBDQCEDLTSQCGHMEWDRPCNSUMYXVNLHVNIMZMRAJMXMDDKBOOIDEQEYXBXNNMFYYUOEHSFPGJZGGIIEAMGHALVQSWLUXPORLCRIJFT");

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
    msg.setTimeStamp(0.740071799101);
    msg.setSource(47496U);
    msg.setSourceEntity(124U);
    msg.setDestination(8840U);
    msg.setDestinationEntity(22U);
    msg.timeout = 46344U;
    msg.lat = 0.709676594594;
    msg.lon = 0.926717633976;
    msg.z = 0.143197619385;
    msg.z_units = 92U;
    msg.amplitude = 0.799819235984;
    msg.pitch = 0.912405517449;
    msg.speed = 0.00798007350073;
    msg.speed_units = 111U;
    msg.custom.assign("ETWLYVJFKWPOQKCZXMJCZPDIDBSXSJFEAYHRIFEAPXDRGDQNRRSWIMLOXDYYHAUQBMZPWXQGVTNLCELEDUPVGMHTADRNMNOLHHYIXHHIPIPEVUHBCANNWGTSYKLJBUSZKQBTMDCZIAFSDDLUIFJTGQVSAXHKSSRCFKTLZUBVMCPOU");

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
    msg.setTimeStamp(0.110049854331);
    msg.setSource(63678U);
    msg.setSourceEntity(3U);
    msg.setDestination(2808U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.629860423752);
    msg.setSource(45618U);
    msg.setSourceEntity(98U);
    msg.setDestination(47332U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.427399504857);
    msg.setSource(26693U);
    msg.setSourceEntity(222U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.34578650602);
    msg.setSource(36848U);
    msg.setSourceEntity(89U);
    msg.setDestination(62338U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.374093770695;
    msg.lon = 0.445130384692;
    msg.z = 0.778097261203;
    msg.z_units = 172U;
    msg.radius = 0.494145433668;
    msg.duration = 65102U;
    msg.speed = 0.235741154975;
    msg.speed_units = 4U;
    msg.custom.assign("ZHSJSZYWDEDPFLQKCJYJBHKYHXBOZTVLEWLQDDWBJWMVJINRGLIHUJAUKYTCTAHLSPBHRAMHWGZNRUTPPZBIFFMMPBWSGTVUPXBKXTPNXFOCSXCUQGUIRANCVYDONEVWZKNVRMLYHVDYNOWSOGJOQMROQVPKLSCOQYAZKRKHWPSSZIGCSBX");

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
    msg.setTimeStamp(0.160240876422);
    msg.setSource(8060U);
    msg.setSourceEntity(243U);
    msg.setDestination(4369U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.667840608202;
    msg.lon = 0.812704157584;
    msg.z = 0.0409572720912;
    msg.z_units = 238U;
    msg.radius = 0.877431882241;
    msg.duration = 57514U;
    msg.speed = 0.328066574234;
    msg.speed_units = 54U;
    msg.custom.assign("RSNPSYZTKAEKYGGUPXXZWBZMDPITKQWAOLNTNATIULCHEMKKSCGJYFHNJLQDIMXOXDVCERDRZHVGLWTXUHZXHIVVNBBWRTSJBTBQJVBPNWVYFDQLFISBNCRDAQHUCSIDVIWPTGLIVKPOBZCRMBKGESFPWUFKMNEFWHGQAFSQATBKDJOMXXCUXVLJQYCJZVEAHYYNDWCJEMGOUYQRHAJLXTUYOMONROSZJEKCLIAFYMZWGPPRZEIQ");

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
    msg.setTimeStamp(0.934931150553);
    msg.setSource(43400U);
    msg.setSourceEntity(15U);
    msg.setDestination(15801U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.476309255592;
    msg.lon = 0.619350200299;
    msg.z = 0.688018853869;
    msg.z_units = 208U;
    msg.radius = 0.668881694004;
    msg.duration = 43766U;
    msg.speed = 0.378042845543;
    msg.speed_units = 58U;
    msg.custom.assign("FAFWYZATTEQUXZCGJSMZSYNVESZPERLMRDGOIUQOMLJMHRYUVGCPKZKCCXVHBGNJIGYPNOXZJXETWWCMYIQDCPQCOMFLHLINQFUDENMTKABPDZRTXMASQBOHIOTCUQXPYWAIISXDJNIHFPBYLGESOAKCEGBWZBHUTEWWRVSVQIJUGRJFVDKGVDFJBWO");

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
    msg.setTimeStamp(0.589019629887);
    msg.setSource(31165U);
    msg.setSourceEntity(100U);
    msg.setDestination(26316U);
    msg.setDestinationEntity(71U);
    msg.timeout = 14559U;
    msg.flags = 150U;
    msg.lat = 0.0826072384319;
    msg.lon = 0.29591264949;
    msg.start_z = 0.192098325068;
    msg.start_z_units = 112U;
    msg.end_z = 0.749651163937;
    msg.end_z_units = 87U;
    msg.radius = 0.615881344033;
    msg.speed = 0.917632411984;
    msg.speed_units = 62U;
    msg.custom.assign("INFJQMAQXVLYDJFKDUZGRVUFIPTRXRINCKMUXIXHWTUNWCUZRZTWGLNCBWAGPHSJFMFHAYXOVAEJOYBGHSVHYJMCVKLBNSZUTHETFVAVOFPKNHXJUCQOONTPWEVDXBTWF");

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
    msg.setTimeStamp(0.907146388966);
    msg.setSource(46975U);
    msg.setSourceEntity(178U);
    msg.setDestination(54053U);
    msg.setDestinationEntity(100U);
    msg.timeout = 36996U;
    msg.flags = 43U;
    msg.lat = 0.331897230985;
    msg.lon = 0.470839486151;
    msg.start_z = 0.341492407091;
    msg.start_z_units = 63U;
    msg.end_z = 0.325230563538;
    msg.end_z_units = 17U;
    msg.radius = 0.527000540421;
    msg.speed = 0.907250631509;
    msg.speed_units = 111U;
    msg.custom.assign("QXQEGZPHBDBKOPORNWDKTUEM");

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
    msg.setTimeStamp(0.645785334756);
    msg.setSource(16705U);
    msg.setSourceEntity(170U);
    msg.setDestination(20908U);
    msg.setDestinationEntity(133U);
    msg.timeout = 14546U;
    msg.flags = 59U;
    msg.lat = 0.094944412909;
    msg.lon = 0.69512628719;
    msg.start_z = 0.692210812573;
    msg.start_z_units = 42U;
    msg.end_z = 0.912670927018;
    msg.end_z_units = 152U;
    msg.radius = 0.0629752583265;
    msg.speed = 0.456700084297;
    msg.speed_units = 49U;
    msg.custom.assign("QXDSNUTMPUQATKBGUJBSWRKSHILIJHXPQYYJMVGRGRPRVMADEBQHXJCCKKFERULAY");

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
    msg.setTimeStamp(0.779098177417);
    msg.setSource(61471U);
    msg.setSourceEntity(2U);
    msg.setDestination(50856U);
    msg.setDestinationEntity(26U);
    msg.timeout = 13423U;
    msg.lat = 0.475768755264;
    msg.lon = 0.222663855441;
    msg.z = 0.64139706498;
    msg.z_units = 246U;
    msg.speed = 0.757844897107;
    msg.speed_units = 82U;
    msg.custom.assign("DCBXTKKPASUHFHXDIOQIUYLDQNIXEBLDJMHMNMLXJMSTUASTKJRIBZGSNLGIQKMYTFFWTBFDZYPHDRAZPGBGGNVDYRFCDODQSXMXGSBM");

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
    msg.setTimeStamp(0.561678304475);
    msg.setSource(38665U);
    msg.setSourceEntity(249U);
    msg.setDestination(31779U);
    msg.setDestinationEntity(178U);
    msg.timeout = 57592U;
    msg.lat = 0.192470289372;
    msg.lon = 0.836373017302;
    msg.z = 0.377712954329;
    msg.z_units = 67U;
    msg.speed = 0.112000268456;
    msg.speed_units = 221U;
    msg.custom.assign("BEYMFPUKZBUWJOOXLEFSCJMLPDJFCIHVCPQWKEEKZKSC");

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
    msg.setTimeStamp(0.842540800036);
    msg.setSource(20429U);
    msg.setSourceEntity(157U);
    msg.setDestination(41041U);
    msg.setDestinationEntity(120U);
    msg.timeout = 54625U;
    msg.lat = 0.531608408031;
    msg.lon = 0.501703786173;
    msg.z = 0.170069908963;
    msg.z_units = 214U;
    msg.speed = 0.763905834863;
    msg.speed_units = 121U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.343504231478;
    tmp_msg_0.y = 0.719383473137;
    tmp_msg_0.z = 0.534038436145;
    tmp_msg_0.t = 0.0284346333309;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XVRZKRBRVOQUQTIDEJPXSOLYSQNZYAHNMLTDNLFEQABJLGMQJVRUTJTMUBDCDWLVFYAOIYXBXXNVUPZDFHUAZAXBMNCFZURJQDYUZIYRZCNAEN");

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
    msg.setTimeStamp(0.057253439018);
    msg.setSource(18350U);
    msg.setSourceEntity(80U);
    msg.setDestination(33669U);
    msg.setDestinationEntity(198U);
    msg.x = 0.060501539474;
    msg.y = 0.396191331574;
    msg.z = 0.597868621484;
    msg.t = 0.187192823185;

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
    msg.setTimeStamp(0.481637919788);
    msg.setSource(55433U);
    msg.setSourceEntity(246U);
    msg.setDestination(15044U);
    msg.setDestinationEntity(75U);
    msg.x = 0.408432461813;
    msg.y = 0.284582751932;
    msg.z = 0.424571344409;
    msg.t = 0.529137323138;

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
    msg.setTimeStamp(0.788528917653);
    msg.setSource(13818U);
    msg.setSourceEntity(42U);
    msg.setDestination(59651U);
    msg.setDestinationEntity(11U);
    msg.x = 0.326610271789;
    msg.y = 0.197999919241;
    msg.z = 0.0754433953482;
    msg.t = 0.969217559857;

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
    msg.setTimeStamp(0.46760570592);
    msg.setSource(41245U);
    msg.setSourceEntity(203U);
    msg.setDestination(679U);
    msg.setDestinationEntity(180U);
    msg.timeout = 39740U;
    msg.name.assign("QGHMICEUYAATOPGUF");
    msg.custom.assign("EFHLDVZGNITJGJXKQJROAMDWQFCQZESBUMLPICWFVJVRJQDHUZESXQDKXHWBKXLDOEDKIXRPHUXAGYVBPLTMLPYYUBBWPNQEGISHGABYRUAHJKOQMKUNHBAASFCKRETYXCXVCKMUIRWOJIDFILPLKSVPQWOU");

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
    msg.setTimeStamp(0.0382477369789);
    msg.setSource(7658U);
    msg.setSourceEntity(51U);
    msg.setDestination(19417U);
    msg.setDestinationEntity(16U);
    msg.timeout = 23090U;
    msg.name.assign("INDZPYRAIOPRRZQNNXNGZTSWXCARSPWLDSCCYOVMILEEMAXLLRQHHOVKPREWVPGQSKYQNDTUWNQMGHGCTXCNLJMBFPUWAIIOIKFXFUMGCCWNGUYYWSQDBEVMTDMXQVAHPVYKRQBSQJ");
    msg.custom.assign("LVIFYVFDTYXAJMGDNIXJYVXOYLEZOCNFDVDFBLDFTURFTMGYOPE");

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
    msg.setTimeStamp(0.111491729379);
    msg.setSource(12315U);
    msg.setSourceEntity(87U);
    msg.setDestination(35625U);
    msg.setDestinationEntity(224U);
    msg.timeout = 46452U;
    msg.name.assign("ZGICZQSHDPCTAXYXJXLGWENPMAQBRXDZYTPEWCHLYDIUYUMQWHKRMLIMAMSYUTWPH");
    msg.custom.assign("WSSGZIOIVZKLNROVUXJTMRCGLZZU");

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
    msg.setTimeStamp(0.808464062161);
    msg.setSource(2882U);
    msg.setSourceEntity(199U);
    msg.setDestination(5492U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.808427664929;
    msg.lon = 0.935021036348;
    msg.z = 0.374988074275;
    msg.z_units = 37U;
    msg.speed = 0.87999671704;
    msg.speed_units = 10U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20690U;
    tmp_msg_0.off_x = 0.303753355092;
    tmp_msg_0.off_y = 0.999210049084;
    tmp_msg_0.off_z = 0.186351328719;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.570539917152;
    msg.custom.assign("RUPWTEAVWQRBPSWOGC");

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
    msg.setTimeStamp(0.0705036982949);
    msg.setSource(23607U);
    msg.setSourceEntity(171U);
    msg.setDestination(52625U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.0065966880355;
    msg.lon = 0.806252135988;
    msg.z = 0.547730800712;
    msg.z_units = 156U;
    msg.speed = 0.345184466638;
    msg.speed_units = 180U;
    msg.start_time = 0.768772825264;
    msg.custom.assign("QCUSMIPXHIQVYJULGWHRVAVXSQNOFDBJGFCGDCMBNYMHPCWYPZSVAWGTKCTLVUQQGHCWPOVCRRFNRFSBKSPMFAXJWSXNOWOQTUZZTNJYZSHWUBJRTMDFEEMXZMLYRIHIOYGKE");

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
    msg.setTimeStamp(0.806883958277);
    msg.setSource(20268U);
    msg.setSourceEntity(3U);
    msg.setDestination(29304U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.552516714908;
    msg.lon = 0.693037805432;
    msg.z = 0.973359177328;
    msg.z_units = 124U;
    msg.speed = 0.369799770463;
    msg.speed_units = 205U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.883273206712;
    tmp_msg_0.y = 0.223481069517;
    tmp_msg_0.z = 0.356743361327;
    tmp_msg_0.t = 0.583303521849;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 23345U;
    tmp_msg_1.off_x = 0.00363631184361;
    tmp_msg_1.off_y = 0.904105476394;
    tmp_msg_1.off_z = 0.00870945508691;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0209351710889;
    msg.custom.assign("QHQCYEKRNNALFIMJUFJIGKLOZEGYXUFWDIXJKNVXHGDZYAAHMTZTVUIZATAQTJWDOPRGURIGNKFXBPWFBO");

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
    msg.setTimeStamp(0.496556310867);
    msg.setSource(24894U);
    msg.setSourceEntity(132U);
    msg.setDestination(60375U);
    msg.setDestinationEntity(59U);
    msg.vid = 25722U;
    msg.off_x = 0.56856154323;
    msg.off_y = 0.479525319928;
    msg.off_z = 0.546851482012;

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
    msg.setTimeStamp(0.357268050771);
    msg.setSource(8638U);
    msg.setSourceEntity(63U);
    msg.setDestination(57643U);
    msg.setDestinationEntity(157U);
    msg.vid = 25950U;
    msg.off_x = 0.165401893513;
    msg.off_y = 0.108281175678;
    msg.off_z = 0.491403817725;

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
    msg.setTimeStamp(0.193623832976);
    msg.setSource(24410U);
    msg.setSourceEntity(11U);
    msg.setDestination(17572U);
    msg.setDestinationEntity(159U);
    msg.vid = 53949U;
    msg.off_x = 0.648213662655;
    msg.off_y = 0.147962059304;
    msg.off_z = 0.957983314501;

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
    msg.setTimeStamp(0.801959628181);
    msg.setSource(36811U);
    msg.setSourceEntity(79U);
    msg.setDestination(59743U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.149421998918);
    msg.setSource(15988U);
    msg.setSourceEntity(48U);
    msg.setDestination(39259U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.453315081393);
    msg.setSource(10817U);
    msg.setSourceEntity(184U);
    msg.setDestination(63443U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.768833979654);
    msg.setSource(53939U);
    msg.setSourceEntity(198U);
    msg.setDestination(23957U);
    msg.setDestinationEntity(3U);
    msg.mid = 32505U;

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
    msg.setTimeStamp(0.401702166309);
    msg.setSource(39877U);
    msg.setSourceEntity(188U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(142U);
    msg.mid = 29399U;

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
    msg.setTimeStamp(0.882496577803);
    msg.setSource(42141U);
    msg.setSourceEntity(62U);
    msg.setDestination(62139U);
    msg.setDestinationEntity(11U);
    msg.mid = 26455U;

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
    msg.setTimeStamp(0.277135129099);
    msg.setSource(51722U);
    msg.setSourceEntity(70U);
    msg.setDestination(44602U);
    msg.setDestinationEntity(138U);
    msg.state = 56U;
    msg.eta = 41368U;
    msg.info.assign("JDIKWIHFMSCSPHVEAHLYNSPLUAYMQYLBJIQJWOXLUZXHICSACHBTFUDKORXROYKOMBJXYRSWTDQWSIICUQKGFGXBGZHNOUIJVCKADLRFTGNLFEXSJYNKQJWWTTPUFSNTPWJVRABZUINVHS");

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
    msg.setTimeStamp(0.928729493743);
    msg.setSource(11352U);
    msg.setSourceEntity(180U);
    msg.setDestination(4062U);
    msg.setDestinationEntity(143U);
    msg.state = 144U;
    msg.eta = 18892U;
    msg.info.assign("SVJOGEIMCREFVTQBHQQIZEAULFCUJMNYBEKJFUNKLWGPBONPHM");

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
    msg.setTimeStamp(0.0694499696233);
    msg.setSource(57375U);
    msg.setSourceEntity(115U);
    msg.setDestination(23303U);
    msg.setDestinationEntity(2U);
    msg.state = 99U;
    msg.eta = 8176U;
    msg.info.assign("SAOJWVZIGITQAFVWYOXCLZVTRQPMOLBBRWHNNENKCKYUIPWGVUZXOLJUITBJKLGFYAFDCRKEMUHWJECXPYSKCQISMPHOTIGAQKZCOLAJPBTPMEFWXYTLMYNKQSLVNXJDULFZZDVQBVHGLWEXKNOWURJDGDQCOYBNBAN");

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
    msg.setTimeStamp(0.407373447226);
    msg.setSource(3058U);
    msg.setSourceEntity(152U);
    msg.setDestination(16523U);
    msg.setDestinationEntity(169U);
    msg.system = 21620U;
    msg.duration = 29122U;
    msg.speed = 0.694623826389;
    msg.speed_units = 31U;
    msg.x = 0.913740565529;
    msg.y = 0.234747918246;
    msg.z = 0.454827012465;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.59254767412);
    msg.setSource(37101U);
    msg.setSourceEntity(179U);
    msg.setDestination(45445U);
    msg.setDestinationEntity(114U);
    msg.system = 49904U;
    msg.duration = 28767U;
    msg.speed = 0.257850950528;
    msg.speed_units = 247U;
    msg.x = 0.63581270784;
    msg.y = 0.474792962391;
    msg.z = 0.512149585772;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.554468367234);
    msg.setSource(60986U);
    msg.setSourceEntity(161U);
    msg.setDestination(27839U);
    msg.setDestinationEntity(225U);
    msg.system = 29594U;
    msg.duration = 59934U;
    msg.speed = 0.852529343154;
    msg.speed_units = 249U;
    msg.x = 0.830918230569;
    msg.y = 0.0863034672122;
    msg.z = 0.622400985305;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.401124390704);
    msg.setSource(42100U);
    msg.setSourceEntity(226U);
    msg.setDestination(27036U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.394374483279;
    msg.lon = 0.119271106669;
    msg.speed = 0.319410405816;
    msg.speed_units = 55U;
    msg.duration = 64717U;
    msg.sys_a = 59377U;
    msg.sys_b = 18868U;
    msg.move_threshold = 0.257139785544;

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
    msg.setTimeStamp(0.404256349531);
    msg.setSource(51812U);
    msg.setSourceEntity(146U);
    msg.setDestination(40601U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.744753969203;
    msg.lon = 0.396138644432;
    msg.speed = 0.535642888586;
    msg.speed_units = 196U;
    msg.duration = 10658U;
    msg.sys_a = 4098U;
    msg.sys_b = 2746U;
    msg.move_threshold = 0.847921282974;

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
    msg.setTimeStamp(0.177764278435);
    msg.setSource(40675U);
    msg.setSourceEntity(19U);
    msg.setDestination(46947U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.334375568825;
    msg.lon = 0.421434922869;
    msg.speed = 0.445633871325;
    msg.speed_units = 168U;
    msg.duration = 43538U;
    msg.sys_a = 26355U;
    msg.sys_b = 24044U;
    msg.move_threshold = 0.508110678489;

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
    msg.setTimeStamp(0.690899569783);
    msg.setSource(283U);
    msg.setSourceEntity(246U);
    msg.setDestination(50555U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.386962253415;
    msg.lon = 0.611747575551;
    msg.z = 0.534384230785;
    msg.z_units = 36U;
    msg.speed = 0.806765214995;
    msg.speed_units = 146U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.856337813186;
    tmp_msg_0.lon = 0.318142594881;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LTYEMREXLRDHIBNMCXPSPUNFZLLPPIWBTJGSXCGZGYQIFVWPZXVVMWJBLBBFHTAQKJNWPVDVOKWYXIZUFEJADLBTOYSXUGDZYHRSOHGNG");

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
    msg.setTimeStamp(0.708221026035);
    msg.setSource(14090U);
    msg.setSourceEntity(21U);
    msg.setDestination(47174U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.421816795764;
    msg.lon = 0.928883254011;
    msg.z = 0.261409724837;
    msg.z_units = 168U;
    msg.speed = 0.139543324774;
    msg.speed_units = 213U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9019375393;
    tmp_msg_0.lon = 0.536594783276;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OBERGHSCEKNISRUYCZSVYKFIIPXMUTGFCWTLXTSAEZLQVXKQVWFQDBYUNMHXIQDHXONNECNSGEHHGCLJOLLVTBMBVYOIKEJJLCNWZYEJDJRIPVEXCIAXSKFFAKGWDUDIAUSM");

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
    msg.setTimeStamp(0.0781989642492);
    msg.setSource(4286U);
    msg.setSourceEntity(18U);
    msg.setDestination(15589U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.121797414921;
    msg.lon = 0.931370967017;
    msg.z = 0.349695577707;
    msg.z_units = 252U;
    msg.speed = 0.236652089637;
    msg.speed_units = 190U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.659119257063;
    tmp_msg_0.lon = 0.516641799604;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AVNBTLHKCXCPLCWKPDCQAEAMAIKBVWZTIVGEFFRQXBUHNQYDLNCDXFBMTSBDJZSWFOXDPZHMRGXPYDBUASDHEWGQSULTEZIHIJIGWFYWMVNRTLCEJPMRFXKRJYVHXLNRYEKJSSIKYWISZBTKKBJCHZCDBEUTDCYGPYWPUOF");

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
    msg.setTimeStamp(0.431406580044);
    msg.setSource(39705U);
    msg.setSourceEntity(76U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.0854846830724;
    msg.lon = 0.394148255071;

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
    msg.setTimeStamp(0.215004757772);
    msg.setSource(19184U);
    msg.setSourceEntity(148U);
    msg.setDestination(28360U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.141612282143;
    msg.lon = 0.328384448298;

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
    msg.setTimeStamp(0.394883410931);
    msg.setSource(6227U);
    msg.setSourceEntity(22U);
    msg.setDestination(17150U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.375961453788;
    msg.lon = 0.57832693405;

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
    msg.setTimeStamp(0.180231268561);
    msg.setSource(63289U);
    msg.setSourceEntity(141U);
    msg.setDestination(61511U);
    msg.setDestinationEntity(229U);
    msg.timeout = 46970U;
    msg.lat = 0.705993465484;
    msg.lon = 0.119388114088;
    msg.z = 0.789591630314;
    msg.z_units = 124U;
    msg.pitch = 0.662341220532;
    msg.amplitude = 0.868091852861;
    msg.duration = 22807U;
    msg.speed = 0.444999605531;
    msg.speed_units = 244U;
    msg.radius = 0.33119288162;
    msg.direction = 59U;
    msg.custom.assign("AVSIEKCIVXSRCQZVFQXQILZWJTKHGBMMBJXWTIFANGKTTFSGCWIXLHQSPXGZWMCFSESOPULYJZNXXDEMEDIWWORDAHOABODCNOLVPLMRFCTIYHYPUYDYJLVPFJMGHERNKQPUKDVCBSXTUJEKNPQESJHNLFQBTGBLCL");

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
    msg.setTimeStamp(0.300255440868);
    msg.setSource(29596U);
    msg.setSourceEntity(155U);
    msg.setDestination(50500U);
    msg.setDestinationEntity(51U);
    msg.timeout = 41169U;
    msg.lat = 0.601320102829;
    msg.lon = 0.206454280985;
    msg.z = 0.335990745504;
    msg.z_units = 147U;
    msg.pitch = 0.615761764394;
    msg.amplitude = 0.245246303834;
    msg.duration = 15024U;
    msg.speed = 0.812881244506;
    msg.speed_units = 101U;
    msg.radius = 0.752034320508;
    msg.direction = 43U;
    msg.custom.assign("LVKNLKFJPETPIYPMYTIBQIIWPNZCCMOJKTDUCCGTMZIDXFVAENNHFGEWPQLBQEGAOBEXQOZWUFWCICNSPVUMFTSHCEA");

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
    msg.setTimeStamp(0.440464626074);
    msg.setSource(56496U);
    msg.setSourceEntity(96U);
    msg.setDestination(25858U);
    msg.setDestinationEntity(138U);
    msg.timeout = 38166U;
    msg.lat = 0.66543161957;
    msg.lon = 0.0356611353569;
    msg.z = 0.365509934951;
    msg.z_units = 100U;
    msg.pitch = 0.00980126388444;
    msg.amplitude = 0.782081052172;
    msg.duration = 51041U;
    msg.speed = 0.0160429345426;
    msg.speed_units = 122U;
    msg.radius = 0.832821570863;
    msg.direction = 75U;
    msg.custom.assign("BDVNVELDFARTWPTFEJZBKYAIPZHXHPNNQAXBBVGOVXFMMXJDSNVADFPHIGUEHVHSTOXSCTJDSUKTMUMWHEDFNSWAJWAQLCBJADIDRKZQLPEYSWBHFGPXKYBZIYIZHXXETVBTY");

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
    msg.setTimeStamp(0.0780162920017);
    msg.setSource(13090U);
    msg.setSourceEntity(228U);
    msg.setDestination(39499U);
    msg.setDestinationEntity(58U);
    msg.control_src = 16651U;
    msg.control_ent = 128U;
    msg.timeout = 0.240670082689;
    msg.loiter_radius = 0.225126073281;
    msg.altitude_interval = 0.273952639313;

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
    msg.setTimeStamp(0.482397536962);
    msg.setSource(13582U);
    msg.setSourceEntity(11U);
    msg.setDestination(5034U);
    msg.setDestinationEntity(37U);
    msg.control_src = 44091U;
    msg.control_ent = 253U;
    msg.timeout = 0.340606428296;
    msg.loiter_radius = 0.710639186721;
    msg.altitude_interval = 0.478856564719;

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
    msg.setTimeStamp(0.907321751373);
    msg.setSource(16365U);
    msg.setSourceEntity(205U);
    msg.setDestination(57812U);
    msg.setDestinationEntity(241U);
    msg.control_src = 30156U;
    msg.control_ent = 144U;
    msg.timeout = 0.174305632731;
    msg.loiter_radius = 0.150160170191;
    msg.altitude_interval = 0.439641956838;

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
    msg.setTimeStamp(0.165182766594);
    msg.setSource(52148U);
    msg.setSourceEntity(3U);
    msg.setDestination(40169U);
    msg.setDestinationEntity(28U);
    msg.flags = 32U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.742854742878;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.355160880634;
    tmp_msg_1.z_units = 220U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.453246654504;
    msg.lon = 0.400338153634;

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
    msg.setTimeStamp(0.723509520218);
    msg.setSource(61009U);
    msg.setSourceEntity(251U);
    msg.setDestination(32079U);
    msg.setDestinationEntity(134U);
    msg.flags = 243U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.318641670988;
    tmp_msg_0.speed_units = 120U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.865391241651;
    tmp_msg_1.z_units = 80U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.62672093138;
    msg.lon = 0.772790418837;

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
    msg.setTimeStamp(0.262661722418);
    msg.setSource(53142U);
    msg.setSourceEntity(9U);
    msg.setDestination(18470U);
    msg.setDestinationEntity(85U);
    msg.flags = 236U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.823249986191;
    tmp_msg_0.speed_units = 71U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.281199864711;
    tmp_msg_1.z_units = 175U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.202128582756;
    msg.lon = 0.762288273086;

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
    msg.setTimeStamp(0.90282221262);
    msg.setSource(64574U);
    msg.setSourceEntity(242U);
    msg.setDestination(44137U);
    msg.setDestinationEntity(95U);
    msg.control_src = 28487U;
    msg.control_ent = 53U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 171U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.848279269616;
    tmp_tmp_msg_0_0.speed_units = 127U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0896494758583;
    tmp_tmp_msg_0_1.z_units = 106U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.909438300751;
    tmp_msg_0.lon = 0.180881333526;
    msg.reference.set(tmp_msg_0);
    msg.state = 124U;
    msg.proximity = 14U;

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
    msg.setTimeStamp(0.792009160914);
    msg.setSource(59862U);
    msg.setSourceEntity(215U);
    msg.setDestination(7319U);
    msg.setDestinationEntity(241U);
    msg.control_src = 44442U;
    msg.control_ent = 169U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 127U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.748572013664;
    tmp_tmp_msg_0_0.speed_units = 166U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.724216251485;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.930329122089;
    tmp_msg_0.lon = 0.185721224916;
    msg.reference.set(tmp_msg_0);
    msg.state = 149U;
    msg.proximity = 184U;

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
    msg.setTimeStamp(0.111648005974);
    msg.setSource(11396U);
    msg.setSourceEntity(36U);
    msg.setDestination(48450U);
    msg.setDestinationEntity(131U);
    msg.control_src = 10665U;
    msg.control_ent = 235U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 48U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.677559260621;
    tmp_tmp_msg_0_0.speed_units = 120U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.783790871507;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.013875647581;
    tmp_msg_0.lon = 0.00179228260547;
    msg.reference.set(tmp_msg_0);
    msg.state = 138U;
    msg.proximity = 154U;

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
    msg.setTimeStamp(0.160659944057);
    msg.setSource(6984U);
    msg.setSourceEntity(215U);
    msg.setDestination(2587U);
    msg.setDestinationEntity(8U);
    msg.op_mode = 206U;
    msg.error_count = 111U;
    msg.error_ents.assign("YIOQFRJAHVHEZAPLUCEANBUWKNKDLFGXJYXSKEVQJILDRFWBASJNMPRHOPQCJONRMXFUGHWJKNVLNPLDTRKWTGUOMZJVWCFBBLXCDTZPITFEXCGVMMRZOKABQYFCCDSDOHXHKGOQABTNJHZYTEJBHQSGKORMPWIFSQLERMPCGZZFLADJBQTBSTPSYPFSDOXEIUINLVXSNVXECZUVRGZDATWY");
    msg.maneuver_type = 43365U;
    msg.maneuver_stime = 0.198557620254;
    msg.maneuver_eta = 7908U;
    msg.control_loops = 527245489U;
    msg.flags = 249U;
    msg.last_error.assign("FUGGWLHMUEHAUFQZMSCXJYQBTQMKSQWSRHHGFWGSKPQCXAQYRWUDP");
    msg.last_error_time = 0.120333221968;

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
    msg.setTimeStamp(0.99650651552);
    msg.setSource(33331U);
    msg.setSourceEntity(195U);
    msg.setDestination(58067U);
    msg.setDestinationEntity(99U);
    msg.op_mode = 53U;
    msg.error_count = 176U;
    msg.error_ents.assign("LZESCMYSBVCIXCKHLVGDZLTIFXKGDBLGSFLASOQGCUWHMMMFCSZECTZBUOAOSQZEFKMAGZBTIDWJNKUAIXZZPXATIYRQDVUIIZBQFMVFIHOGVNREDMRPWNVGLNBPWSRQUVWAQNOLZMSWNHBXNBOYNMAWPCPQJYRSPHODSQQCKFYVVGGFWPLRHJYFWPDPBHEURXXUCAUDEPYHLNJMKVELQF");
    msg.maneuver_type = 32840U;
    msg.maneuver_stime = 0.83155747867;
    msg.maneuver_eta = 56933U;
    msg.control_loops = 150505801U;
    msg.flags = 184U;
    msg.last_error.assign("DMBGOSEMFIFTTDPEEEBZZKKUYYESEVFLPDPGNIDBUTFYXJFBOUVBGFHHVOULAVXWWDSHRLQLAGYDPRLUPRYKOLKJTJMCRRXVUQOSQIGTCQOZWOJBMSRHMNAXFKJVGDLCNOETNSAPZGVNXYYPMDIPGZINCJLKWWZOYTCKU");
    msg.last_error_time = 0.349946403581;

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
    msg.setTimeStamp(0.424014587398);
    msg.setSource(63683U);
    msg.setSourceEntity(16U);
    msg.setDestination(54667U);
    msg.setDestinationEntity(175U);
    msg.op_mode = 225U;
    msg.error_count = 121U;
    msg.error_ents.assign("OVXBJHXRIBNMYSXGDTYJUECLOABXLPNLUBVVFMRGSIFDQFHYSXCGLVDXTGTCRGCBNAJHSNPDXQEHLBEYOUKYBURJPK");
    msg.maneuver_type = 51732U;
    msg.maneuver_stime = 0.538839408938;
    msg.maneuver_eta = 34237U;
    msg.control_loops = 172171428U;
    msg.flags = 128U;
    msg.last_error.assign("CSAFGNZAAYXALITWDKJGTESBTVJLQXKJPOHGSIVERXSYKFMBMBAYNOICRDBYZMSZGJXRNHCCJOGNRNOIZIHQDLOCKPIUFE");
    msg.last_error_time = 0.285432717409;

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
    msg.setTimeStamp(0.503665132828);
    msg.setSource(16618U);
    msg.setSourceEntity(191U);
    msg.setDestination(62977U);
    msg.setDestinationEntity(172U);
    msg.type = 167U;
    msg.request_id = 39096U;
    msg.command = 233U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.58426584497;
    tmp_msg_0.lon = 0.752169121753;
    tmp_msg_0.z = 0.0609780324221;
    tmp_msg_0.z_units = 224U;
    tmp_msg_0.speed = 0.0769585253465;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.start_time = 0.316930884671;
    tmp_msg_0.custom.assign("KUJQVKIGPPLZGSHZUTTZUOTBFZDVEPIKFWUOMNFIRDNLLXGLOFSYBCVACWNEXFFNSMFRSDMJDYIYYJCBBVNBHNZEBIUJFQAULCAPHJTOAYKAWPGWMQAKBRUCFJORVTVTEQMDXKZOLPAJWHGOQVOLSQIHBRZZWQXMGYEIOYHSUEEWKYIMJARWWQTYMVPLBXJRGVHDNIURAIZKVLWDJXYCXDNRCGEQBPDXKSKHRNSPTXCTCOU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19656U;
    msg.info.assign("LLYPSKHHGHFDZRDUKCEXLXNNZPXGZQOWTPHFILCKKSDKRMVSRWAGQUDHUABMGNSIWVWOTNKJTLJFRXWUBQDYTSSOLAYAGPKXBGTB");

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
    msg.setTimeStamp(0.685865019743);
    msg.setSource(52310U);
    msg.setSourceEntity(175U);
    msg.setDestination(1725U);
    msg.setDestinationEntity(196U);
    msg.type = 179U;
    msg.request_id = 44966U;
    msg.command = 33U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 32436U;
    tmp_msg_0.lat = 0.827214884729;
    tmp_msg_0.lon = 0.840838160261;
    tmp_msg_0.z = 0.618374557629;
    tmp_msg_0.z_units = 226U;
    tmp_msg_0.speed = 0.746536948191;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.duration = 14029U;
    tmp_msg_0.radius = 0.324097068421;
    tmp_msg_0.flags = 248U;
    tmp_msg_0.custom.assign("YRHEYMBIHWDPQGRKIAFVQTNBEMYNTSGRKMGNXSWBGJGCQPOXRLTASKXCZKNFJLBZCUODZBLXVJGOHRUICIWXJQWPEEMPVLBBKLAVHDCRTEXKAROCMKCSPEYIJGNYEGOQPUHSMDWFWBDRFJPMMC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 152U;
    msg.info.assign("KGZFPVOJRLPOFIOBTFZYTVICVJYRAKWUFMOTENBOPHOFFSIGJYMACUMKYXGMSUFLEZCDSMNIHYCFXSUGIRLKDLDVTQDTHKCUQXJURELEBNAAJVBSCOQWKPWZWLNGXVJMSOEGEPWNBNKQLDMAOTJRHJPQHJ");

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
    msg.setTimeStamp(0.697831449702);
    msg.setSource(64985U);
    msg.setSourceEntity(75U);
    msg.setDestination(46789U);
    msg.setDestinationEntity(215U);
    msg.type = 208U;
    msg.request_id = 1723U;
    msg.command = 25U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("RLTKIJAWTBJSXCEOANNJVFJEITVVQKXEWCBCAKQMGZWGENJDBOWTLLITHZFFIDSBXDBCMZANMSQKZIUHPNMSSKBXVTYRMSMVRJMQGBQEQLEXJMDPWZYLEUKARRWDTYBLYJUGCXSIISSVQEQEGPKOHWKNPAYAWOBOHUDZDNSDMFIMPZFILNYQCI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39148U;
    msg.info.assign("YQUSMNZVRYLUHHIPCJHQYEVROCVZACSGJAQAPKWNYTSSPTWCUJJZWDSVJADFGUWXKGBRELXMDVURQGYIOJGQPEEPPRSWYQDTZYKXYQTFEXUJURSMHLPBHVLNNMESRGBCGNNFMGUULVNOFIWLQWJAVPDAFMCHVZRXOYVB");

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
    msg.setTimeStamp(0.945337315504);
    msg.setSource(61521U);
    msg.setSourceEntity(133U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(56U);
    msg.command = 92U;
    msg.entities.assign("FCTQCSOZYFADLAOJVXHQDNKSFHGLHNWVWOCPYF");

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
    msg.setTimeStamp(0.231363945994);
    msg.setSource(32151U);
    msg.setSourceEntity(120U);
    msg.setDestination(52312U);
    msg.setDestinationEntity(15U);
    msg.command = 201U;
    msg.entities.assign("XLGGUMIIDKVVTWIVAAWZXTERJOZSCDZWXTOIPJEUGHDRBQNFEYIZZSVFFTYKKCSVOAHHMHXEMXGQDHYUXRIUDXBUQSOCUPPCFGDXMBWKQTCVSBLMAQWNFNNZFRJ");

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
    msg.setTimeStamp(0.308398478998);
    msg.setSource(64453U);
    msg.setSourceEntity(91U);
    msg.setDestination(57159U);
    msg.setDestinationEntity(56U);
    msg.command = 209U;
    msg.entities.assign("SPMXHORCKJYNAENUXLYADGZAHMBSMYLRVPQMUPFJTTTNXXGQCECOEDDOFRQBREQBADWWVALSLSLTKXVKZSCJIYVMGOMUFGPMHFLCUOJYAQAIG");

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
    msg.setTimeStamp(0.0214313382381);
    msg.setSource(33030U);
    msg.setSourceEntity(37U);
    msg.setDestination(39249U);
    msg.setDestinationEntity(94U);
    msg.mcount = 35U;
    msg.mnames.assign("KBFUVZBVLYXHFQWWGLPXYAEXBMUMOVMFZPPEGLQRVTXDJBQHNYJTMRVWKMCTLMTPVCKGHGKBAYAQJBOGJEUYOQKII");
    msg.ecount = 230U;
    msg.enames.assign("SEORIVZPKSEOEAEKFBGOCQJTDZMYFCKRHGANPZTQTEGNNUBZOSHPAJNIURATWITIERMDLLCVYDHRVHHWFCZXGSULWAWTNHBORYODVNAJFHMJLKPYSWXKXKSOGEMNVVUZYLNHJGPFMFEXCEUIMCAONNDJITPZQMYUWXRABQLRWJLGHQAWIKDZFIDULBKFSBOVQXTXVDIXORPYZCCSPABTFJPPCGCBMLJDYXQQFGSSMQJGTYQXBUIWEV");
    msg.ccount = 33U;
    msg.cnames.assign("RRKFCKLKCLXWEBUDWOKWQHEOPTZYTCOLQYSSZFB");
    msg.last_error.assign("SCODEAPELWANUOTUEGKBHPOFYBXSJCGPZBKYEYZDOHJJMPZCXZADPDWYULMNKBPVWLCCVYHOJSDVERQAVMIQDHZWBARIURAGWSVGTQINCHLVYTNJPDIPTRVNMQIZELCLQUQMJSKGPHBIMFTFIWYXMJRYKAAFTQXFMBKERZTGJQUHNVFFRROOVLXGKNTMEYDFOEGIWWAUBXRHXSLSINJXDVKCTXGSWMFKFLSWNDAZKUBONIEUHXCQZHCOTQ");
    msg.last_error_time = 0.742477483648;

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
    msg.setTimeStamp(0.622362656077);
    msg.setSource(3797U);
    msg.setSourceEntity(103U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(205U);
    msg.mcount = 13U;
    msg.mnames.assign("XNAVRAEWVNWOFGCIZUKRLOGYIMQVKCFOUYLWRSHEDRKFSZKKEBVDQTXTSRXDHZCQCRSPSUOEAUCEODPHFDSBKWHPBJPSHWLJNANUNXKLNXPBVZQTEQKFATYRBUHIYTVVBVKACWDLABMLFNTTLQPXIAZLYEIWPVHGZDEXOJCIXQPRNYMOHDOKIFOHIGQMTGNAFMCGELBJJXUUYYMBTJMZVXGPLZEDYCNRJYUJMGHWDFR");
    msg.ecount = 248U;
    msg.enames.assign("ONHLEOSGDO");
    msg.ccount = 12U;
    msg.cnames.assign("MWUGECMLYNPIKMHPWMNWFPBVOZDQNIURKALTPUANIKLLMHDBXJOSRZYMOJRHVYMOWSLDYMLKCIQHQUJNKUOVZYNWPXJQVWWLFDDEHZXEUOFAUHPBRLSGVEACJTYZVTVMIOTXRJINBZOS");
    msg.last_error.assign("GXMJRJAMQNYGZONOPWUMBPCEKGTVKBRPJHLGDESWAYYORA");
    msg.last_error_time = 0.549185991618;

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
    msg.setTimeStamp(0.990789076994);
    msg.setSource(24226U);
    msg.setSourceEntity(58U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(199U);
    msg.mcount = 20U;
    msg.mnames.assign("GJHITRMCHKPCXKROXPIYPEMXPKFHNGBWQHQABMDTDYLFLTNUKMUJGQYGMIALYKGTXBJEUWAXQKOVZLTLMOFSRPJVJSLQDUTKIMFFCIYZXRBDWNAOCGWKEBZNYNHQRICSSPWXRRJBLFIJSEPEOAZUWHGBHMBWDULYZOCNXCAFVSSVNRMYZTZLKGDCODVTONBZFCWUJPIHAEOXHQQIFSLQNVUETEVQFRDHDGVNAYSBWSEXZGKZAPWRUMV");
    msg.ecount = 208U;
    msg.enames.assign("EATALGHAPZKQTBVPGUEFBJPYMCFVOMGPBIXYYHJDNFFCQKYTHSZVIEDDBHQBQTNRBKLWAUOZSSXROFXSCYJLWMVOPCXMQBJKPZKRXGUWEUYEULSBKUWUSRNI");
    msg.ccount = 198U;
    msg.cnames.assign("MIBUFNTNSXWPFDVWKPNDAXTRWXGHOUTGTLGIKTQRJZDMEZBQPOLAXMZIYSXAXEJLZNKAKCEN");
    msg.last_error.assign("NDXBEAJEMVXSLNDULJXSOKDXJQIZZFCCYCEDLWJTELYQHURCJPAROCQTMIYQNNYXKTXGQAFMVKODUFTEFEZUHSGRTLMQQVUFSAFGVDBHSZTPJICHSABMZPOYNBNUIBPDDSFKYMEMRLYRCVDOIZOTDYZWBMHYLOPQCIHJOGWHOVJYTQKWSZVW");
    msg.last_error_time = 0.587560323591;

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
    msg.setTimeStamp(0.0611328454453);
    msg.setSource(48138U);
    msg.setSourceEntity(69U);
    msg.setDestination(34786U);
    msg.setDestinationEntity(246U);
    msg.mask = 247U;
    msg.max_depth = 0.257556784514;
    msg.min_altitude = 0.330922803514;
    msg.max_altitude = 0.39617319854;
    msg.min_speed = 0.486613397332;
    msg.max_speed = 0.914465750164;
    msg.max_vrate = 0.7172853742;
    msg.lat = 0.717298837111;
    msg.lon = 0.376992656977;
    msg.orientation = 0.26794621701;
    msg.width = 0.665060407503;
    msg.length = 0.463437004471;

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
    msg.setTimeStamp(0.893681419579);
    msg.setSource(65270U);
    msg.setSourceEntity(240U);
    msg.setDestination(25390U);
    msg.setDestinationEntity(114U);
    msg.mask = 2U;
    msg.max_depth = 0.266610489859;
    msg.min_altitude = 0.634342204224;
    msg.max_altitude = 0.88375122981;
    msg.min_speed = 0.145732625666;
    msg.max_speed = 0.954759428047;
    msg.max_vrate = 0.653534921307;
    msg.lat = 0.0314270091146;
    msg.lon = 0.842409766008;
    msg.orientation = 0.0513680585698;
    msg.width = 0.295423224601;
    msg.length = 0.391879498801;

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
    msg.setTimeStamp(0.0454237888449);
    msg.setSource(3580U);
    msg.setSourceEntity(203U);
    msg.setDestination(57426U);
    msg.setDestinationEntity(109U);
    msg.mask = 53U;
    msg.max_depth = 0.776555150698;
    msg.min_altitude = 0.947341434803;
    msg.max_altitude = 0.338306356203;
    msg.min_speed = 0.830996618465;
    msg.max_speed = 0.660135298588;
    msg.max_vrate = 0.0653138814819;
    msg.lat = 0.0699818972913;
    msg.lon = 0.191307152646;
    msg.orientation = 0.557245456528;
    msg.width = 0.922082792695;
    msg.length = 0.913688219926;

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
    msg.setTimeStamp(0.383624933903);
    msg.setSource(29399U);
    msg.setSourceEntity(48U);
    msg.setDestination(45770U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.853125460063);
    msg.setSource(12111U);
    msg.setSourceEntity(114U);
    msg.setDestination(9831U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.201842506799);
    msg.setSource(32420U);
    msg.setSourceEntity(35U);
    msg.setDestination(35262U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.206666017811);
    msg.setSource(8290U);
    msg.setSourceEntity(136U);
    msg.setDestination(434U);
    msg.setDestinationEntity(158U);
    msg.duration = 6904U;

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
    msg.setTimeStamp(0.911160887257);
    msg.setSource(40157U);
    msg.setSourceEntity(105U);
    msg.setDestination(43394U);
    msg.setDestinationEntity(2U);
    msg.duration = 18515U;

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
    msg.setTimeStamp(0.669513532805);
    msg.setSource(64906U);
    msg.setSourceEntity(168U);
    msg.setDestination(21513U);
    msg.setDestinationEntity(230U);
    msg.duration = 47330U;

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
    msg.setTimeStamp(0.34410483374);
    msg.setSource(54347U);
    msg.setSourceEntity(135U);
    msg.setDestination(8405U);
    msg.setDestinationEntity(248U);
    msg.enable = 109U;
    msg.mask = 1212087179U;
    msg.scope_ref = 0.41036094719;

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
    msg.setTimeStamp(0.338240769723);
    msg.setSource(65515U);
    msg.setSourceEntity(89U);
    msg.setDestination(51128U);
    msg.setDestinationEntity(100U);
    msg.enable = 235U;
    msg.mask = 1083742728U;
    msg.scope_ref = 0.460429394356;

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
    msg.setTimeStamp(0.375179336679);
    msg.setSource(42460U);
    msg.setSourceEntity(226U);
    msg.setDestination(39908U);
    msg.setDestinationEntity(201U);
    msg.enable = 105U;
    msg.mask = 1700923061U;
    msg.scope_ref = 0.349288312974;

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
    msg.setTimeStamp(0.954567174589);
    msg.setSource(21226U);
    msg.setSourceEntity(148U);
    msg.setDestination(47188U);
    msg.setDestinationEntity(69U);
    msg.medium = 78U;

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
    msg.setTimeStamp(0.74817019286);
    msg.setSource(16895U);
    msg.setSourceEntity(49U);
    msg.setDestination(17795U);
    msg.setDestinationEntity(50U);
    msg.medium = 35U;

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
    msg.setTimeStamp(0.442371319501);
    msg.setSource(27719U);
    msg.setSourceEntity(226U);
    msg.setDestination(36666U);
    msg.setDestinationEntity(198U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.73231843643);
    msg.setSource(50902U);
    msg.setSourceEntity(211U);
    msg.setDestination(4563U);
    msg.setDestinationEntity(113U);
    msg.value = 0.31569692847;
    msg.type = 222U;

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
    msg.setTimeStamp(0.0795365576786);
    msg.setSource(50057U);
    msg.setSourceEntity(74U);
    msg.setDestination(13374U);
    msg.setDestinationEntity(156U);
    msg.value = 0.491891544135;
    msg.type = 175U;

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
    msg.setTimeStamp(0.593332628112);
    msg.setSource(10288U);
    msg.setSourceEntity(81U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(170U);
    msg.value = 0.61033941047;
    msg.type = 148U;

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
    msg.setTimeStamp(0.249638329265);
    msg.setSource(28394U);
    msg.setSourceEntity(41U);
    msg.setDestination(45053U);
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
    msg.setTimeStamp(0.708756686683);
    msg.setSource(11496U);
    msg.setSourceEntity(107U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.706080418497);
    msg.setSource(48220U);
    msg.setSourceEntity(104U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.763531217079);
    msg.setSource(43038U);
    msg.setSourceEntity(52U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(59U);
    msg.plan_id.assign("BKKZCTWYIGDZTLRXNTEZGHGSGISBQOGUDWETHOENWDYANCPMGLMCIMRWQVGNQZDHCKSXODPCBRIBZLLTIWNDDFTEWANRVJEONZUBIKYYABYRTNIPVWONJRXMUSJFFSBJVSFEPXKYMAWQKQVLQMBPIXPCUMHUZFUPAAEVJALVWBEZHFGJULFPRLAUGUMXWMXJKEJKHXOOHOIULNSHFSHJQSVDFMZRYTXDRQYYZTDPQXAVGPIAKKJCLC");
    msg.description.assign("FZCKYIQAGBZVRWFVRQEPYHPWYGKKFKWKGZTODZXBLMTSQYLHZEUUYRXSJVIJAXDUMYFOKSBBAYYHNHULEYAJEWOXFVVMCTDTPOCHMIOVUHKOGEKHNVQDRLSNDPABQKUNQADELSXXXIRCRLFHRTIGLIBJTRJGPIOUBBCNSIIWMANGXMZFWSPVTPPEWL");
    msg.vnamespace.assign("WFSAFYGJUBAODOAJQSNCPNPKXSDOXRLUKNXWQMLRTNOZCIHCNKOEDAHYQPNLLOLRTZHBCGEDWJRZIAZJRUVDITGKYFHBCSGTMBWYQVABVEYUEDNZCDZMIWIOWHMFLVUYQPVHSVEZNVFCNERVBKORBKWFCLBGPAWHSTLGSJATDLHZBXBMEYMIYPHUYJDWSVPTHSCVMUQAXF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JNZXJAHKCNJUJOHSNKONDYNZVQCSDFSLIAGZHDLYVROCXBXGWJMFOPDEQEEHTZPUURFZWZQWOGZKRDUCQXREDDPMAPNQKBIWFFWDXOAKPBRBYCNRHVLSXRXJKLGEIOMHQWIIYEWTNFLMPAGWQMGYJKCPTMENJTLLOOUBXAOHESBIIFRZMYDXCGMGVHSAFVAVCUYMKBTSHWHGUVRZTFSPTIYBTLSPQMBDVUQLXBTUCPYK");
    tmp_msg_0.value.assign("DTJMMOSYSININXATIGGXZQNIUMBEOPLOYCLOQDFFPZELDFYMMGDNCUOAFWQOHCQCYIGJHOXNQBWKRFISXKTRKMYHSVJJTJZQWBULWBTGAHCMTJDTPFNGFVAQZTLVVPHIAADIXSERCOCKYYWUMZSMTDSENXVDYEYARXUULKPNBPZHFPCQLAJZABPHUORRFULVRHMSBNZLJHCQGBDZWWHVKWRWKQUGSIKVEEOJCVBGAPLEKJWZFDXIXVGS");
    tmp_msg_0.type = 47U;
    tmp_msg_0.access = 238U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TMSQCFWIKYSYRUAPKFACRYVVPHZCZOCNUGPSWONKGKDLSTDYOALCJDCAIXQRXZFXHUNTAICSBYFURLCVWYGNDEZJTUIHVHGOWWPBORPTLAIIQKEL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QUQIIIOMXYHJMDNTCIOPUBEOBBCKZNSOGLFNTVCMRRLHQJISBJFOTXNFNKJLOQGATSPJZDIMLPUXPAFGDZKHYNOASVUXGRULDPNZXLPRNAOWDYZWRYMTSDVMLAHHJGFGVEICCQMEBKZGFXDAWUSVDTCIEZLVEQUWCUSJTQPJIYHRFHCQJBWKDCLQKERKRYHBOVWFEAWFKBMCTTIXYBWGLZSNEYUVPYQAUSKYRJFONEGDZHXAGVEWMAWPVBH");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 65521U;
    tmp_tmp_msg_1_0.custom.assign("AYVTBPMLQXYCFVURINXTDNRRAWYKOODOGSRFVLSTEXB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.302320254564);
    msg.setSource(12708U);
    msg.setSourceEntity(66U);
    msg.setDestination(15839U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("CXYKWDRZFECAGJEUZXIMRQMJCDUQGEXVZSMVXZOUFVEDOWUDKZRYSLPIUVCLBBTWAGUXMSFSDNKFAJVASVQBOTHKYORTCIYQPBVKKBWYZTEWHMFUITZGAQGCNBQEHSJLAPHGJYVYIJRZJTIOWDFJZHXMWDLNMXYICZLKUURGOGVRTTBCFLJKANYNPYOFQCKRPXOQIBMPRODXJ");
    msg.description.assign("AYGBRXBGTGTUERDCPHQGUHKQ");
    msg.vnamespace.assign("BUBPTJAYHMUILOUSYNUZLXXPNNZDIKYLBORT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EKFIQMPSQJYASTYNBAUOTTHKYQXXZBYGQVKWNIJWHYGXNQPLNCCBQBDKJBRGLMTQMTTFIRLFYV");
    tmp_msg_0.value.assign("VJBEGAWUTNELJGVPGLFNNTIXKIMLHJNXFMQPGZOUIRPZDUYOABWJEVZWKIYFALFDTGMNWQH");
    tmp_msg_0.type = 148U;
    tmp_msg_0.access = 65U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JZWBDETTOHOMWUKGMGYJMSNNQQSURIVNODDMJQYBOTJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OUCWFDUNUXOUMEYCTUKAVXKLGMCLRSWFNCLPMLSORLJXXGSRGWCMYQGIHOAYDFPZUKSHWVHYTKLJFYLBQIEOBPROBZIQWMYWKFHTSRDRLNTBSPIMFTYYGQAVTQGNJVOSFDEEGIASJZRJVNNDSTQBHPMDYZUVHAJTZZUQKRKDCZHNPFHGQQEB");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.914194091875;
    tmp_tmp_msg_1_0.lon = 0.435755294247;
    tmp_tmp_msg_1_0.z = 0.157141807102;
    tmp_tmp_msg_1_0.z_units = 241U;
    tmp_tmp_msg_1_0.speed = 0.139388940993;
    tmp_tmp_msg_1_0.speed_units = 17U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.vid = 41670U;
    tmp_tmp_tmp_msg_1_0_0.off_x = 0.0765218771096;
    tmp_tmp_tmp_msg_1_0_0.off_y = 0.842900098021;
    tmp_tmp_tmp_msg_1_0_0.off_z = 0.121630460732;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.813859245136;
    tmp_tmp_msg_1_0.custom.assign("FQNFZLPKZRDS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::TrueSpeed tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.0223145301752;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("NLUIIFHDVKOYGCDMUDXYABIGRVRXXUUHLUGBUNKASXELIHJSKVNZNWXUSQGACEOQQKWLBWPRDSG");
    tmp_msg_2.dest_man.assign("KCKTKJVZRFQQAHQNEKAAELUWUARTCSWLPRDEUWDJNJVZPVCZBMHEIGBRSOKODOHBVQJWYXTWYXLGKZTELSKRUUDLLINCTXBTBA");
    tmp_msg_2.conditions.assign("CQPMOVXOJJLKETZCIYGFFKQYTAWQDZBCDXHBHJCWDHTUECKXYSZNJTMHBDVQPUKPCLITVQORISLHILWGEULJGWLUJBGZYFEZHKISIEDSNNIAURXPBCHXWYPUSXEVUEBQOARYQDIAJIDOJFCYCAMWRYNGHVKNTNTLCADBKWEAJFOARWNBMGOZQTNOMEKVGFQSHFPLMRNONFSMRMDFAZZOTBTUPFSVUQLMPLPDR");
    msg.transitions.push_back(tmp_msg_2);
    IMC::Temperature tmp_msg_3;
    tmp_msg_3.value = 0.541582981479;
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
    msg.setTimeStamp(0.84800013747);
    msg.setSource(61666U);
    msg.setSourceEntity(212U);
    msg.setDestination(20982U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("AIVTWGJUBDBUNSVQLTQOALWSSBYTVRRWPGHSJNOJAZNEQZETISKDKRXDYNABFIDMPBYNWYUCXSVJXGJOHXFMWJXCVESWMLMFZZHZIOZRKXZQZCGXFAXLMWVTPIUDHPJCKYKIUVKWFDLPARLJSIRPULBSBZFGHBFOLICUDMZPHMTUEQTGMMQOBYAGPHKGXOYFQFNUQSETDLOYRPYY");
    msg.description.assign("PSEUPUNCYLVQRHKETOCQOSQHDFBOZZDNGUJOHLVHLRGWTVVNEQLFDTQATPCAJRZJKWSJPGIR");
    msg.vnamespace.assign("ZCPTOYZKRECWPFZLKDRBHXXOUMDHVDTPOQULLALNFUKYQQGMLACVEAVNPKJQYJJWCNBTXADHWDHBDEFNQKUWKOPHSBGBEFXNSNTAEPEJCXIVOJBXWDMPJETEAYNMUNKGGMNWZVPCBADRFEIMGD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QGENZZJYDIHULNKXAKSNMJDQUXLAGOTRTSUUKVJEPXBKIMZVAIONOAQANPWIMLNSBVDYYLLTWRPQWVDRSFFBGHYZBSTJESGUCZVJFMEDWORMEHFKRAZ");
    tmp_msg_0.value.assign("DMWFOMSZUPTBIPLATFOCYYMAPZRTMCDWBBXWRXNBTBAJPZUQKNUXOHSCLWWFFJBJQUJEAVHSPLESXGEAVWCLDVGQJYQZXVIQKXNWVILLJSLHFQQCDAEBCMEFBIMFCCKNAIAVUUFPXLHLFTPBHZSOYHJREMQDDAGXKYHMTRPSJYPBTENJHNHZKSTGYZESCQYLRKONRMCWUORGTYOWGKAUOXPKYHUZVZDNGS");
    tmp_msg_0.type = 28U;
    tmp_msg_0.access = 228U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EEHBCFKLNKWXGYFMTBGWLSVAONWHKRLFNZPXQAMAFZGWSUCVIKWEZIFRNFBKPFXXCVYGJXSUBVAOMPILBPMSRJGIPDJEZFMLWVVUPHUNGNQDTYWUYD");
    IMC::PushEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("JFZNGFASADKTOMUZTUMSBBDIMWIOJXNMYGRATDOYHAQIFJABKHFSGCUWEWXWLJEHPOUANZLWAPMIVLWMVDQBQSRIYGXWRJKVREXVSTDZKGRMQKTZBXWQCXLSGJEPAXTLCNMOIWBDRBPELLIZHFZVZSQDYCTQICKJTEYKHRNLXDVBZPYIUGUDESNAPPHOGOKROYAJFEMSUTZROHFYNIQBPGUDWNVRMXEP");
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
    msg.setTimeStamp(0.922442619229);
    msg.setSource(1776U);
    msg.setSourceEntity(170U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(218U);
    msg.maneuver_id.assign("ZYNODVRMTQFXASEDREFYZFMDXGDSCIXTWSIDMKRQKSCALYDMRSOENCTGVEIJNRAWYMCDXQMGVPZXBVNIHTORSNSNMOLB");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.645024887199;
    tmp_msg_0.lon = 0.201269769671;
    tmp_msg_0.z = 0.960593598201;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.speed = 0.941895200902;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.custom.assign("XUSBXYTPKJYJBFAQYAWEPEAEOVZPXARGHMSZZIDLUXYASFIZHSNYDTKDWCMPVUDUCLVPWHGSGJQKDJKJRLOAJWIZVRGWBQCGIIVZXKXYMNPLCSJODMNKHCLNTOCNQMPNILLGHGIXOAZZFB");
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
    msg.setTimeStamp(0.376610189552);
    msg.setSource(47039U);
    msg.setSourceEntity(191U);
    msg.setDestination(59554U);
    msg.setDestinationEntity(192U);
    msg.maneuver_id.assign("DGQHOFSXQNEGFILDWKRHGIXKFPVVVYRJZNOLDGBMNHEQPBDSSUBCLKZDMNIKVUQXILTSNVLSWPEJJAWGKNRXYVUZHTJABKQMM");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 37181U;
    tmp_msg_0.lat = 0.848204706709;
    tmp_msg_0.lon = 0.460752341838;
    tmp_msg_0.z = 0.688476615978;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.duration = 65520U;
    tmp_msg_0.speed = 0.887281902237;
    tmp_msg_0.speed_units = 50U;
    tmp_msg_0.type = 203U;
    tmp_msg_0.radius = 0.529816666491;
    tmp_msg_0.length = 0.0556940034715;
    tmp_msg_0.bearing = 0.543946115366;
    tmp_msg_0.direction = 59U;
    tmp_msg_0.custom.assign("ZVDQRQANJSJXRCCUOTLDAQKVJVMTFFVJIEWRQOHHPZUQUXPFLKHNIFTNSRYFKBIUBVWIZITGWCIOYNYRHZVDTVGZAOQLUPLUIQBXVQZOYBAXGDSPSFYZYW");
    msg.data.set(tmp_msg_0);
    IMC::AcousticRange tmp_msg_1;
    tmp_msg_1.address = 69U;
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
    msg.setTimeStamp(0.623532208179);
    msg.setSource(28426U);
    msg.setSourceEntity(25U);
    msg.setDestination(52049U);
    msg.setDestinationEntity(145U);
    msg.maneuver_id.assign("GDEZARPQUIQFCJXZBVHHKNUFQJJQVCTCSQALJOAINSKENYMONOTOPJPDHYOYLQYEWBBHHXCKRSDMRDLSZRU");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.650460363654;
    tmp_msg_0.lon = 0.931941652551;
    tmp_msg_0.z = 0.136069771131;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.speed = 0.183842687783;
    tmp_msg_0.speed_units = 188U;
    tmp_msg_0.custom.assign("CXJXXDKUEMWKLYICTBTMNXQBQHCY");
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
    msg.setTimeStamp(0.413235681656);
    msg.setSource(19154U);
    msg.setSourceEntity(253U);
    msg.setDestination(53781U);
    msg.setDestinationEntity(157U);
    msg.source_man.assign("FYTDATHKYBQBOXYIDWZOTOADTKLFTNUBWLLPUHMRMEZPPWPCKDWJWWDKARXWMPONYFZFXGUEQIGSFJRSOMQXRHHFKNMGLXQGZPECASLUANYWCIEXCVVZXUPZVNMORSLJHBVKHHKRGJHAIUTEVTDRIDBJNGSIEAQJIBLQFDIJRYOKFVMAYEXDQGZOWCQFCEQIZXBCYLGSTBLDNGPPVTZHMVJUSMYMANVTOWSUCYCGJNVPURKKRLZSX");
    msg.dest_man.assign("KHAJWFGEDRAATIIDEDZBEUQBXXJVSEXOKCMCZNHSNFVLDCINYCJKZYPTDINSJJILHHRFDPZAGBLQUFJSMXEUBVHOPRKLBZOSCNWGDUUPNACGPQQEWPRRDKXMYYAQNYGRMOPRZMVGJUFGMVHFSPGPESA");
    msg.conditions.assign("FYDQCCVWZCLSLBXKNPHFICOYJUTLRKITZGKYEWSRJVVZARXUMSRJULPSLOGNHWJLOAPTBLHNQLBGEGACHFXNEPOQYNMZQDOODUZSARWODCPUOCKCOEUITSPBKDHQFAATJNFRPAIMB");

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
    msg.setTimeStamp(0.528079106555);
    msg.setSource(33U);
    msg.setSourceEntity(132U);
    msg.setDestination(50862U);
    msg.setDestinationEntity(238U);
    msg.source_man.assign("HNLHLAGKUEUACBFGGEPMKNZICYIVPUEAIGTBQOJZFHOXNSWNEL");
    msg.dest_man.assign("YTNWGGKIKOUYBQPPNVOE");
    msg.conditions.assign("FUBHPMXOKEXMCZANLCFCNIRTHOEDTZMLRIPXNHKSXICGPKEWWZNIPRSYOGXFDUYLKJVCAWUAETLCRZXENGNMGSIVZZSBBVDIVJSHWILQIXGVKVGUQRDTWVXIIVDHJAFSOEBQYNQOTRYDGYKFHEEYTMUKKLLJJSGYQPZZJLZBSLFASDPHPJXRDUTPLHJ");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 222U;
    tmp_msg_0.snapshot.assign("FAHJSARZBTKSMYAKQKAMPUWFNLTAQGDRNBWBCWANRFZGYOSQITDJFOBTVLQUZTRMIODDOIOVJJRPDEJPFDYLILCGVRJDYGMQNJWHELVDFSBXMKBKHLGKTGIYCCXWPOZNOZVSXTNHRPKCDUSHGU");
    IMC::Brake tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 240U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0053276831863);
    msg.setSource(58391U);
    msg.setSourceEntity(253U);
    msg.setDestination(32213U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("FWMMIDXGDSODDLFXUFIMNOQQLEHKUZAAVRRLFSVQCYVAJUIANGKNMFPIOZMQLIQWSLLFOEWVHVCQBXZVSNJHYTJRRPRBAYFMTFPAAKDJLPHCAXWEBGYTNHTUHZXRWMGWNZDPISWSPOTFK");
    msg.dest_man.assign("SQUWUQOENRMYATWGSNGTOCJOZRZUNZPJUQGFSCLLLAKOYIERBIEPQQKGTOAEFFRQIWPXKRPRNZAXDPURAVULACGCCHZSME");
    msg.conditions.assign("KDRFBNDWBJIKVCXLFXRVYTDFKPEMIGTNAPVAYLOKDMPXWEMTWSMLLXLVSQYZPAMCWJWISMCJHBHYOUNFXUDKBDRQHZT");

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
    msg.setTimeStamp(0.602480901133);
    msg.setSource(25809U);
    msg.setSourceEntity(153U);
    msg.setDestination(21884U);
    msg.setDestinationEntity(187U);
    msg.command = 195U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TWDMKCQCVRBEIVFNWUAIORIFXNXDITYLPYFXWBSWHTUOUXKHNARSSRGHJCVGLJIHSXTXELCMXOUKUGQHTPYZZEQFBLGUUQOKDCXPYUZXTZALVQNJSFDYOQWWVIPESOGPFJEDVJDVSULMOJYGQ");
    tmp_msg_0.description.assign("RLTGPTJSCWZVZJCSXWMVZHJCLPTVXXKKKEIYYDIXQHRNSCTMEOMFVKJNQAETDYVCXOBXBTELFFLVGDTJBPFQZHPINLKWRKSHLSZBIZFKEVZPLNWOHUCUMNDODMQDFWQBQOKZABDKARDZLEKYNOGFMUGAROXXYBTUSVERUUZSFAHAAMCYTVYGHGINHBIHWXGPPYRLJ");
    tmp_msg_0.vnamespace.assign("KADOLUOILNNUFHRVLHJVGXAFAWTRMPDWSXIXXPRJCKPZWHGBZUMEVOAGQDOVEERZYFOAQNWFVMWFARCYHWWQXLTL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BVKKYIKKHEQTNHYVBMAIDEQBWPNISUMODRHUZWAUHHAICGTDTCZAGJUODIBLWQQSAYANSFBCAUQJLBHMZMGETBXVCNLLXLAXPFZCRDHIZCKOTPPZEJSRQOSROOKEVSYCZGYBURREFUBIQDPJOENZXXFSLWIJEMUTNXDHWGELMPNLJTFFUVIJFGEJXPMRYDQYRNJGCTPOGP");
    tmp_tmp_msg_0_0.value.assign("IQYXTLRIMXXQVSGOAKPYPFSJGKCNMWRDDVCFEXNBOD");
    tmp_tmp_msg_0_0.type = 15U;
    tmp_tmp_msg_0_0.access = 60U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IESHVKTFYMOJSTYZPQRQBPLEMIYIBDHCJCZTGVZLKBVKPELSUJWAVGMANWCSJDBJQVCMYPUDVSYIBFKFGUVDOPOPUYTUAHQLHWJOXPGHOSBWXLRAFTEVWTVYHKZINNMGXFOTGKNJXCDTFWIAZRNHFKIUKRJMONBQSMXRSLEWQOQAYIZDQZYAPETRUWZNOPMBGLWCCLDIHLNLUFDVRQXABQRUSUCKHGIHEZXP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UULBLVDSOENLVVSONEWRKXUGASNGJMQSRNQOYBRWMGDLJDDMRACKJRZWEJTUHFXEYIWWFLPDXMQQMXGDOFUELMRCDDAISWFKMOQFWNZOMZZLLYIXZNIWPZFCEVGBCIOHORBTUGBJHIBB");
    tmp_tmp_msg_0_1.dest_man.assign("UWYTQFHVMQAUJPJURVYYESJQZHDEFYTICBYNXPSRAGXJQEIZTISOBCZLTVJXFKKVWBJNLDMNLSAHIBWCETZQRJOSGBVLRFDCJTLXEIYENHASBIAUAMZGBLIWWMWJRLOHUECGDDNRGNRKMQWZUCRKPFCCJWIZRFTPCDYPPLKGTUOFNWOHBXHEANUGFCWQUFMPP");
    tmp_tmp_msg_0_1.conditions.assign("QQNHKPBPVCDFINNWYSFTXJDODYNQXNGJSRKXHMIWKTGAWAQKQCHCMBTDFUMYBISPGSNSFKAXYHZBNOZBUKPDZVTLMUJIRZVOEXMLQRDJEGVTKZEDCXBHRVVRVYLHIQOPFKLPASACBUSIPEUZJLBIUGWCZYOGWGYYUHTDAEYFLZMYAZCSXTEFBOVRJRJLTOAEECOAKPUIRTWNVBLRVRDJXCILMIWAJFPKQQZXQOFWLWTFHPDCGHSOUNNM");
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.667880290905;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.201319322722);
    msg.setSource(5489U);
    msg.setSourceEntity(161U);
    msg.setDestination(14941U);
    msg.setDestinationEntity(33U);
    msg.command = 81U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BNZBNXFCDQJREANAGMZPEBGHOSSRWUKJPZJGTMEBVMVATESUZTHDVRTKEFKQFVHVVGNCQAKLFMYIVRCHWMEY");
    tmp_msg_0.description.assign("GPNTYBXLBTKIJCZQGTRSZXQBUWBKVFGARQOKPVXJULQPMOICUXMZUZNHOAYIRBCOESGXTRVSRMI");
    tmp_msg_0.vnamespace.assign("MOZIQRSMGLWRDLBADGLYXNFWCYNEXRPOKGSZNNTAUJEQKIMSDWJOHTJWHKBVBRMDTEVOCJVINBZGIFFJQDUXLBCHQXUYQFKPAWHYGIHIPRLPVMYOAZFPCKALCPLEADRIYCDAUSLBUQVNMXDRMWRISNWPUTJBLWXQYDOBGVSYCGEZGBRZJEQBMCUKPLSVHKPZV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QIKJBONTXPTHOGAJYMKLTYGHIDGRCTBSMJDNKXWQTZGXHJAREQJLHKDLYJSUEKWCVZVZSYDONLUNFDXYFOADEMNSCHYBMMXZUPTRAIKOFGYJLAIZOWRQPBFBRUPQKWTRQVDBLXDROLFPCJEBMPZMQYVSALUFFCWFAENTZIMTLMDSINOCQZSBVXUTICURJHCQEPNVIYWSRPUSKXAEAIVYDEXRKKFHUMCHWB");
    tmp_tmp_msg_0_0.value.assign("ABGZWDKCKECEPBLEZFLTZBRKNHCZOJMDZCEPNJTYDMOORVJHUYFTNPESWRDPBMGPAHWTKTJQBIXWABXFHONLFDREINVNYXXSKCVPOHYSJNQMVUWQECPUSLQUIQMVAAKYZYVILETLGQDAKXMRZAXNUTTYWROHZADIURBGGZSOVQUJPFSSHSLMKFRGGRMQFJGRPXIDWKVPFYGVWHUXIKLZABOHCOUEIDTLQTFSASCGEXJMQHY");
    tmp_tmp_msg_0_0.type = 248U;
    tmp_tmp_msg_0_0.access = 42U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GJRLTASCCBQPDHHAMNLQGOC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("CEFLKTLRNSBCZBAIADXSHBTTFMKOAORHNHXGJCELYJZGPLQDPITTZPQPOYDWOJIQUAUFUSIIRVWDVXLHWIMXNDLSWWDQHINDQSHKWRVXUDXTZQGPBMUVGJRCEHPQPWOZRXVOKFTCYNGRZXQMFVYOLLEFUWJPEFENNVIACYHOJRKLRBSIMETZBVBYMUZCJGDQAVE");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.952186745428;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.997914488922;
    tmp_tmp_tmp_msg_0_1_0.z = 0.873806043954;
    tmp_tmp_tmp_msg_0_1_0.z_units = 204U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.976563096804;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 18U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UNRVJUQLURWDBVKLVQNLMSQDIIMDVZPTPDATCTVJEHYBFNKQKCQRZPAPJEQKNWOZGWNIWMXZTOMJOLRCFBYMIXHHSEZGUBQWFKAFNSYGBOLANXXSGYZVHKVYKHTTMBWFFKJFNRUVUWUWEGBRFXJUTBJXJXEAOWBTPEPZHSYXLHVXQYGAPPTIOZHBMCYSGSKONLHSQFNLRJMEMSOCDPGEDXIZRYCTHIFGEQDKCM");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::IndicatedSpeed tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.746236838628;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QFQZGRGLCWBHSPUCSKIJJMLSDPETHFXLLQTPYJYTDSFRUPORSWCUXFAVUJETTNODCFAHWETBNQLWHBPOGKPLHCFJPIEINAXQHMWOGNKNIGAUBEGAZAVIOSBAICFOOTVALHKJNCBWEZCUQNXZURIRVATPZRSDZHDFJHIXXGZDCUYWYKMOFDEPNLQFDVGIVQBGRJYMVXRWWBLBZYYSMCXYMQ");
    tmp_tmp_msg_0_2.dest_man.assign("XBSIHQADXKCZPXDOURNKXEPHFSLORDFGYTEDWHLSJRHCIXRBLPOWBMYWEGWQCGEYMRTCFZBKBMHSFKAIMFEDADXQUDKWYENMTBIXNUNRDPQGIRPJYMJVGGTPIJWSZJLEWGVFVOZWSOHHULOPSXUQPILKASLUOOZTBJCUE");
    tmp_tmp_msg_0_2.conditions.assign("HJVSGWRKFZXGKSCJSUMRLTMCNTOYJOLSPEUAMFWSJXJDCLLZNKMZPGTNDBCSRESFOGYXRCBBWCWIUTIAJQDVOGVEUZXOMIAFHEHSORWTBSYXIYVCPXGEVMTPPFNBAVWQBCCBKLHNQKJZGHBUKLQPDQFVXJDENOWLJOOOIXTGWHERAUEIXSRDPNMBIZHHRYKRIATQYZVMAIVTJENHV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SetThrusterActuation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 97U;
    tmp_tmp_msg_0_3.value = 0.653979934713;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.310139964434);
    msg.setSource(22232U);
    msg.setSourceEntity(154U);
    msg.setDestination(5841U);
    msg.setDestinationEntity(174U);
    msg.command = 69U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LQABSEBUPDLSIPLEPXMHIOCABOZCWDNFPLJPSBKIGDHVBUJSHXJCZTZMSDFQMMNRNCDSHTCFZAVYGYPKAKVCXHPAIVAXNQFWNIPVLHMHOCRGADUNTOBLTBOGAGQRRTMTMURHQNXIRYELFG");
    tmp_msg_0.description.assign("WMBDNMZUXQSXQKQAQGANKOWYGHHAVDPOJUKKBYTYW");
    tmp_msg_0.vnamespace.assign("FNGPNKWHYURTBRTLOPOSTMGZNZJJQNUESAZWMDXWABAYCKIGGQVRLUVIIEIQNHZMHIWKVDVZHQZOIFMGTTXEEKRJEFBCOXCXVQDACRMYOOKKCUDYMHLIBKQDJCLVKUVTN");
    tmp_msg_0.start_man_id.assign("XVMGBLRDSYEJFMNYLBVVTRPQHNLDOGISRIUGWQCJDFCEBGMWSXOAQGPHDPFEXBCVIUDUVTLNMDHPOUQKGSKJHXMCRVNCMVCVQYZLZKXXDTFAPZWDTJOZHHIYIFKREOYURHOATCYEMBOPKAKMFSSUXBIKZRSTDJSWBCAPMKJYWCLSNTYWUGJTOOLJYOAIXNGZKPAGIBJUQBZWTKAQRWVPFNAYZEE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IAZBMDIFVXVDJTFSKHTWTHCSWDZBYIOMVYOZVCAXDQNPHDLNSEJSNZCJRUCFIGZLXJWGGPWOKUSNSNB");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.708089138872;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.262383580903;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.752626641859;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 206U;
    tmp_tmp_tmp_msg_0_0_0.duration = 41925U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 31087U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 42460U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.590360971956;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SmsRx tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source.assign("GDFSISFOENPRGPCEDXWKYXUCJNKNWSZTFOZHUROTYLVLPUMMBISRWKXURTQTHWZUGRYSPIYLVJEIMGIRVYAHBMBQNQAMDGFWRBNKZOTNLFJIMJOPHGFCANGYZMVJJWVXNQUSFVVYEBMJ");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-53, -116, 95, -31, -21, -46, 102, -38, 120, 110, 93, -121, -78, -122, 63, 18, 14, 76, -103, -115, 108, 50, 78, 49, -2, -126, 52, 65, 6, -87, 59, 102, -94, 106, 17, 99, 32, -39, -25, 26, 122};
    tmp_tmp_tmp_msg_0_0_1.data.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DQTEMNFEFXSEOCJWSPMNMRKXRJWAVXUIIOEPEZ");
    tmp_tmp_msg_0_1.dest_man.assign("BPTVYHMOJQHDYBOQXLCOBGMEJRGXKVCTUZFUPSZQKOKTRLLWPTPPL");
    tmp_tmp_msg_0_1.conditions.assign("AODLJGISQKXLFGRJDIGPMJYQOVNVGMVDODUTZBOH");
    IMC::MapFeature tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id.assign("FZIAXVLWVXSBYLNQWLRRWGTGOFIKGXZQJHOCESFEFYLKPKYQBUVWAJDTQPDTNAAVJIXFQCTGUGBUNAVBUJM");
    tmp_tmp_tmp_msg_0_1_0.feature_type = 247U;
    tmp_tmp_tmp_msg_0_1_0.rgb_red = 232U;
    tmp_tmp_tmp_msg_0_1_0.rgb_green = 116U;
    tmp_tmp_tmp_msg_0_1_0.rgb_blue = 94U;
    IMC::MapPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.22823430531;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.54570009443;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.alt = 0.698558009783;
    tmp_tmp_tmp_msg_0_1_0.feature.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.27724022207);
    msg.setSource(28636U);
    msg.setSourceEntity(168U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(140U);
    msg.state = 234U;
    msg.plan_id.assign("FYNIPUUYZNMKJPJCBFPNIEFECSJUOZAAPPWXDZNAZZZFAJVVJKHYGEMFWXNQMTVOJDGKJLRQYHOLPOFCHBHXQZXSPSAXKMLEZEWCVFTBYUBEMXAOVRRNJMSPSIYDHMRKLSTARYOKBIQLTQVOFCCXN");
    msg.comm_level = 57U;

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
    msg.setTimeStamp(0.871219771506);
    msg.setSource(59081U);
    msg.setSourceEntity(165U);
    msg.setDestination(53017U);
    msg.setDestinationEntity(169U);
    msg.state = 29U;
    msg.plan_id.assign("OKHXLJUELAMHHXNOVRCPQTYVBDEUBESYDNAYRTNCSZJUSQVTSRMFUPFIBKQYARWBHJEOTHSCIVJAOZKFGQWJXJQNXTLGMJCRXVXRJLRUWQUPFGSDEGNKVIACNEMAWIHWKPMIJTTYUEGBLDFHIBUOPPRPOAXHKBGDKXYRCULPGITNKSPITZYEKRWUCQQIWGSPAQNOWCXFQDDLEOZGMSIFAGBBCBZDLFJO");
    msg.comm_level = 124U;

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
    msg.setTimeStamp(0.76200239853);
    msg.setSource(27128U);
    msg.setSourceEntity(24U);
    msg.setDestination(16570U);
    msg.setDestinationEntity(174U);
    msg.state = 151U;
    msg.plan_id.assign("EUCAOHVTDGOZNUIAXYGU");
    msg.comm_level = 91U;

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
    msg.setTimeStamp(0.0905094260123);
    msg.setSource(972U);
    msg.setSourceEntity(221U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(75U);
    msg.type = 154U;
    msg.op = 55U;
    msg.request_id = 49395U;
    msg.plan_id.assign("TLALYVHVNHPZMRNBDYHINCRJVWRSDRBPTKLLCFYZO");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.865575471563;
    tmp_msg_0.m = 0.427102598012;
    tmp_msg_0.n = 0.684407474411;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NPJZCJFLYYLWPENRIWJGOIVLBUDNJLCHCGKOTKUBKDYVSDXLWHKBNVAREMTCBTHDQIKGYQUWCRJKQKBZQZVZSIQIQXJCAPALPGCEPZAMPGLEKOTYSFFTYCESDRRZHZHWXTSPSWUIIYRTBVLJSLSRUNHWOBDVOFEDQFPEMFHCVKYUMFNVIMATZQRNGXVMUQZXGKOBAMQJHMRHFBXDOWUTNGREMOIYDXFXOVAXPJB");

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
    msg.setTimeStamp(0.912066316484);
    msg.setSource(8133U);
    msg.setSourceEntity(193U);
    msg.setDestination(62216U);
    msg.setDestinationEntity(94U);
    msg.type = 254U;
    msg.op = 66U;
    msg.request_id = 60831U;
    msg.plan_id.assign("XJNBQRCWIGMBRUIBEQBIILDVOCEPBYGPODXYXJVLPEXFLZHPLOZWKACXNYLAHTFPTNOKLPWAFQYRINOKKATYZMDJMTXDUQFHKLJQMHGTZISGLWVQBTXDOLGTAMWUFKNTJJGHQGOEPYZEVCJCHCOUHZVGSRAFEFDZZKIARJEXIFIYQZJQEEWWMOBKYDUNNSVIHCNGVSHSUVSSSWBVAUPRCTFDXPMDJOXSNURWDVU");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("QTAGQPKEQSDCHXNORBQAUDKPAXYTIDSTNAIUVZHXROPBCJNPRRGSGAQVSIMVOLVJEB");
    tmp_msg_0.value = 43U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QAGYABVZTYPIBBSLEPINBDQHLQCSBABMNZSTJDWNJYQTXWOGAODFMSZBCTFQWZHURPLSTUSCEOALJAFEWXWXEMHMUTLBXDHIRPVYQXKYMPJZZSENOSVOJRUMGHUWVLIVRGKIHETORHCNXXGSXKPNKMGPNBRNFBLKDVWRJEUQYQQRTIKEUALWWGYOUFMZDJDGFUWKSQFLOEDYZAVFTHZAN");

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
    msg.setTimeStamp(0.815781063053);
    msg.setSource(27278U);
    msg.setSourceEntity(151U);
    msg.setDestination(29239U);
    msg.setDestinationEntity(206U);
    msg.type = 253U;
    msg.op = 23U;
    msg.request_id = 33846U;
    msg.plan_id.assign("HMRRPEGTXCLLLFOMZQZSXUEYXLOFROBLUCJKTIWNNZXCKOWPUTQLQYVJBWWDVHETOSPFIEREKYMLDIJWCDOUEDUREFVIDHPTNBBHSOSGKYVNSTUUWGVLGDHLNMQYZZJMMHDQFJBWAGRHTIAICAXYNCKFHPMLIAQWQZUANKJFUXGVPSBCPEXXJAOCQONANAFGXYIEJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EOUUMXGGQLATDQFJOJBHSYLCICABVJWIATVYOE");
    tmp_msg_0.feature_type = 243U;
    tmp_msg_0.rgb_red = 61U;
    tmp_msg_0.rgb_green = 179U;
    tmp_msg_0.rgb_blue = 105U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7424775574;
    tmp_tmp_msg_0_0.lon = 0.173929225933;
    tmp_tmp_msg_0_0.alt = 0.24837806036;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DDZYQXVMWKVYCOWSAVQOAFKHQKVFFIPPLJBKNGEAEUUGNSFICQATPTJHCRZNHFTUKJYUWABJBCNORTITIXXYKCCRKPUYALGPMKESMWWHDBXMFKRONLNVYDUTHYCTCGDHQYZJFBZMRRQGNVQFTPDPBXLOJQSLVMCJLSSJQATPHFNXKLAYGIUNXSZBBOEWMWVULZEHFHBOIJRWIWNIOOAZAGEWGDDRUIPVEXMLDSEEQUJPD");

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
    msg.setTimeStamp(0.473503864402);
    msg.setSource(38708U);
    msg.setSourceEntity(2U);
    msg.setDestination(5922U);
    msg.setDestinationEntity(86U);
    msg.plan_count = 38683U;
    msg.plan_size = 4268457729U;
    msg.change_time = 0.421970696907;
    msg.change_sid = 12405U;
    msg.change_sname.assign("RJCKUHDANUEOPSUMMLPCLEMPHHFARHWYEDJUCRZAXYSOAOWUWQHWGILJNLAACCYNNBHIRQJIOIEATFKGIGGJXDSPTVXOKUYKJGIGWFMMISQPKPPBUYFWZUTLGDICZSSFYOKVQXMZRBUOQACBHETEHFHXCJWSFXXJXABMXMFVDFCQTMID");
    const char tmp_msg_0[] = {49, -4, -100, 126, -1, -43, -8, 79, -17, 4, -46, 89, -40, -61, 2, -67, 102, 53, 22, 117, 83, 111, -50, -125, -115, -112, 104, -16, -79, -37};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ISWHEUFYVURQHBPRCCVMXXRFGESLAOMQJATQITTLASKVNKENBDJLCGIUDBLQRVGAZFRLQQHJCMWKHJBFXNPKWDDMAPEHDGUOZVIVYTMNOZYCCNIXSTZBFNGDSSGKSIPNHKEDOBJZIMGFNAKJUUXRXNKWOZCCRFMFHTOUEQRSPLWBSTVPEYZSYDGTNJQGBGXHQUBLZAOYJZCLLPFYMXURVVMPIZIWWJTAUVAQTLPWYRXOWPEY");
    tmp_msg_1.plan_size = 57595U;
    tmp_msg_1.change_time = 0.84894760118;
    tmp_msg_1.change_sid = 256U;
    tmp_msg_1.change_sname.assign("UNNPIRLDWPTYMNBJUWKOUWNVXNYVMJQORTAYZLKBLRP");
    const char tmp_tmp_msg_1_0[] = {55, -86, 103, -48, -36, -101, -125, 23, 57, -125, -96, -113, 82, 88, 101, 24, -74, 15, -81, 72, 54, 81, -20, -96, 73, 115, -91, -106, -35, 122, -121, 95, -65, 13, -117, -70, -119, -123, 33, 69, 23, 3, 27, 39, 119, -102, -128, 39, -56, 33, 79, 108, 21, -13, -49, 25, 16, 1, -58, 121, 87, -111, -68, 41, -16, -79, 9, -86, 108, 75, 82, 100, 43, -111, 67, 78, -82, 11, 20, -38, -94, 63, -43, -43, 18, -123, -105, -62, 13, -64, -64, -8, -77, 5, -99, 23, 81, -20, -92, 71, 49, 3, 29, -116, -117, -57, -87, 10, -66, -44, -61, 78, 0, 76, 112, 52, 84, 35, -74, -76, 62, -79, -64, -96, 50, 7, -128, -93, 126, -126, -116, -19, 54, 29, -115, 51, 76, 82, -125, -62, 78, 68, -10, 86, -50, 53, -66, -95, -40, 46};
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
    msg.setTimeStamp(0.175592203735);
    msg.setSource(48288U);
    msg.setSourceEntity(6U);
    msg.setDestination(20577U);
    msg.setDestinationEntity(92U);
    msg.plan_count = 9462U;
    msg.plan_size = 960475248U;
    msg.change_time = 0.0508268101164;
    msg.change_sid = 17048U;
    msg.change_sname.assign("IHSTCEQDAVOJPRFNRYCMVHCVIYLLKTCBWWNKGYXFJFCIHPANWIBMPTZDTYJL");
    const char tmp_msg_0[] = {68, -113, 31, -40, 65, 111, 65, 4, -49, -8, 31, 124, -30, 56, -1, 54, 76, -122, -78, 56, 80, -120, 7, 21, -86, -38, 93, -82, -10, -11, 93, 54, 64, -104, -122, 60, 21, -118, 80, -22, 65, 51, 97, 119, 0, -78, -104, 68, 98, 110, -22, -91, 110, -99, 42, 13, 39, 116, 115, 98, -7, -68, -19, 98, -123, 91, 47, 122, 124, 26, 44, 28, 79, -46, 54, -73, -29, -100, -28, -35, 14, 58, -94, -36, 101, -84, -33, 51, -1, 117, -8, -20, 85, -26, 50, 97, -47, -119, -100, -86, -10, 55, -1, 11, -63, 55, -24, 68, 105, -27, -122, 68, -54, 91, -88, 75, -2, 39, 101, -9, 120, -102, -20, -59, 75, -68, -89, -72, 54, -100, 26, 66, 96, -33, -106, -19, 68, -123, -32, -16, 67, 73, -73, 97, 34, -120, -14, 124, 80, 106, -71, -49, -76, -101, -83, 6, -13, 40, -20, -41, -45, 74, 51, 122, 99, 53, 53, -6, 122, 57, 94, -40, 26, 31, -127, 124, -101, 31, 48, -24, -77, -113, 122, 107, -66, -53, -1, 6, -122, -74, -54, 15, -97, -88, -58, -83, -85, 60, -14, -82, 59, 104, 72, 100, 54, 32, 60, -67, 104, 22, 31, -59, -28, 42, 56, -43, -39, 50, 60, -28, -105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PNYTORAEKYTMSGUPDOUDSJVTGALHLTVYMAIMKSXAIWQPFUYHIEYPJJQOTOJNHECCX");
    tmp_msg_1.plan_size = 39474U;
    tmp_msg_1.change_time = 0.453853886814;
    tmp_msg_1.change_sid = 48865U;
    tmp_msg_1.change_sname.assign("QZIRUGMTCMRYHMLIDXSQPADRNOAALEMEOJFTTCPPEOPKEDAVGKKNLLYXZJHYUXQMIOUVXCWRDUFHSHAVFQUPWXJYIYWPLYVESPNJNSNBDGCEHBUHZTRWIXGLZFN");
    const char tmp_tmp_msg_1_0[] = {20, 83, -40, -10, 84, 4, 22, -117, 33, 35, 6, 80, -14, 80, 78, -1, 15, 72, -16, -28, -17, -104, -52, -53, -35, -21, 23, 22, 15, -104, -64, 12, 61, -51, 67, -63, 105, -73, 105, 4, 65, -128, 50, 90, -30, -96, -86, -127, -47, 59, -76, -34, 97, -57, 20, 39, 17, -44, -21, -25, 118, -125, -34, 28};
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
    msg.setTimeStamp(0.0281518248732);
    msg.setSource(45871U);
    msg.setSourceEntity(249U);
    msg.setDestination(42605U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 50684U;
    msg.plan_size = 1875567971U;
    msg.change_time = 0.491661392527;
    msg.change_sid = 46404U;
    msg.change_sname.assign("AZLKSWUNXBFZFMLCMDJBWGDNDGDJEPTUIJUOMFREEYMKNDSRRIAPWEPXILRZKROMYDVKIXSZHXFPOGFDTJKSTIOROSHLMASBZROYZVWAVQXPDCALJKNDHJCTPSTUXVIXBPTGQLIAUCYKMMWVGWHVWYGPQUFQLVBUVHPXQHKQBYYFQGDOWGRJSFF");
    const char tmp_msg_0[] = {-26, 76, 61, -92, 22, -15, 67, -98, 11, -122, 56, 41, 4, -72, -48, -122, -1, 39, -23, 4, -94, 101, -91, 13, -125, -94, 28, -127, -104, -29, 10, -69, -1, 118, -55, 104, 73, 86, -79, -64, -128, 55, 39, 105, -89, 16, 33, 103, -51, 1, 91, -105, 74, 66, -30, 18, 114, -118, 14, 66, -96, 35, 26, -81, 26, -65, 9, -34, 22, 63, -85, -64, -29, 110, -124, 105, 80, -124, -102, 124, 115, -55, 41, -15, 107, -75, 17, -64, -99};
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
    msg.setTimeStamp(0.522378480762);
    msg.setSource(16341U);
    msg.setSourceEntity(47U);
    msg.setDestination(44781U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("CGQTIYPSMFYOBEBADXHLXSFKOWVRTDUDBXMVINCGVIMPJRKQUGSTIKCJNYTZTGXFSJGEZTJDQYHQOCFURODWZWVNALOAMXENIWQTJSKLCEDVZWUS");
    msg.plan_size = 13788U;
    msg.change_time = 0.473767678631;
    msg.change_sid = 63423U;
    msg.change_sname.assign("ZKAQVNTHIWLQFZJXELUHSJMCSCMQKUUJXXMPRCREPXGWYCRMLHTEZXNPYKBFTB");
    const char tmp_msg_0[] = {-96, 67, 104, 0, -48, 118, 126, 96, 47, -99, 91, 125, 98, 1, -83, -25, -46, -54, 78, 71, -63, -56, -104, -2, 101, -14, 18, -19, -23, -78, -53, 93, -79, 73, 120, 97, -127, -46, -14, -35, 123, -64, 34, -54, -11, 105, 49, 115, 10, -31, -59, -77, -7, -10, 114, -5, -3, -16, -71, 122, -13, -8, 123, 88, 26, 108, -58, 24, 32, 100, 98, -128, 123, -7, -54, 81, 40, 85, 119, 84, -25, -99, 92, 113};
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
    msg.setTimeStamp(0.0817828439701);
    msg.setSource(1209U);
    msg.setSourceEntity(126U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("SXPTIACIEQCJUOYBBHBDBJRIVGNUHTCMVZANTPYYYYQPBFYNFGKNMMEJLYRHVSSNDYXLWDVLZVXRIIKVMLTOZUMSTXWDRLMPSJALMOGJJEVNRBSOWZEYVTPXAZFHTSFWCHURNFPBJPQGCQWHPKNLWRWKLFKWBJGJGZDUWICODFQXUDERZGUMXEMADTEKWUFZZDREHQCBOKMTSKGIAAYUPIQOANEOO");
    msg.plan_size = 23834U;
    msg.change_time = 0.167175718898;
    msg.change_sid = 49057U;
    msg.change_sname.assign("PCASQTIZERXCBRGWLBORXADIAHVJUBLRVJHIINHZUIQJFBKEJCLCEZIMFCPONNQAY");
    const char tmp_msg_0[] = {-17, 41, -62, -86, 90, -54, 31, -101, -103, -116, 101, -111, 18, 84, -14, -74, 107, 101, 29, -92, -74, 83, 113, 86, -41, 31, 106, -22, 31, -11, -89, 15, 94, -43, -114, 0, 101, -47, -114, -51, -53, 61, 39, 14, 97, -103, -89, 77, -115, 7, -15, 59, 87, 45, -8, 20, 121, 10, 100, -90, 91, -12, -17, 29, 46, 20, 15, -109, -109, -79, -119, -71, -46, -94, 116, -104, -62, 112, 21, -76, 76, -111, -76, -121, -121, -26, 94, 59, -41, -59, 79, 64, -36, -61, 80, -65, -53, 100, 121, -122, -40, -75, -101, -58, 89, 91, -57, 69, 52, 47, 16, 51, 37, -104, 35, -80, -42, 3, -96, -125, -90, 45, 54, 86, 16, 87, -33, -6, -98, -4, -107, 58, -123, 31, -55, -88, -123, -122, -123, -73, -108, -84, -57, 59, 5, 59, -48, -100, -105, -63, 120, 38, 64, -121, 36, 74, -58, 90, 87, -55, 116, 70, -64, -8, 123, 59, 122, -63, 78, 121, 8, -61, 77, 38, -127, 84, 105, -103, 111, 123, 96, 80, 52, -39, 25, 91, 30, -19, -48, -23, 111, -121, -106, -102, -14, 89, -67, -61, -126, 106, 19, 84, 62, -55, 95, 24, 10, 73, -116, -18, -62, 95, -25, -80, -96, -18, 23, -95, 47, -92, -14, 33, 64, 0, -124, -38, 30, 23, -16, -7, -35, -8, 97, -91, 94, -78, 105, -62, -3, -103, 113, 11, 60, -87, 61, -107, 83, -99, -50, -22, -97, 44, 74, 67};
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
    msg.setTimeStamp(0.101741202272);
    msg.setSource(57169U);
    msg.setSourceEntity(107U);
    msg.setDestination(39858U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("LYVQIUEOQAPAJOTJTZGLFLSECFIVXFPHJQPIOBOXQWNHZBGZFWKRHYSWVYRKASJNIARBNXEPGXMDQEQSZJUALWOKJGCYHSEPQZNHJRNOXEIQWGNRRGYYTRDOEDFDPTZUBZBFESRULPRKJWFVKLUQJYFPAIXVTQKHEDLS");
    msg.plan_size = 11511U;
    msg.change_time = 0.421353842679;
    msg.change_sid = 56461U;
    msg.change_sname.assign("ZLQUVONUBOGYOASOBWQCNTXFHBRQJXITLEIJILNTAMBJPGKCTBTVZWQYRDDSPXLKNZJWNZMCDZCQYKRXJCMCNZLCSVAFMDVLJBPQIEHIKRLHDYVAYIDMKVFDZIEEPUMGBFYGXTGAIOVPKXLKDEDWKFJSSPFUWMNBOORMXVHTQOUYJXUGKSNTPTIWAMYQSUACZXLZHVNVWUGPFALES");
    const char tmp_msg_0[] = {-114, -75, 93, -46, 74, -73, -3, 64, -40, -78, 6, -70, 1, 68, -61, 6, 64, -47, -93, -57, 93, -79, 23, -9, 4, 82, 50, -71, -19, 126, -100, -10, 95, -7, 11, -44, -97, 123, 18, 36, -22, -13, -89, 112, -4, -51, -94, -89, -71, 73, 58, -111, -41, 61, -61, -52, 13, 84, 22, -62, 61, 23, 51, -44, -72, 86, 39, 126, -41, -45, -78, 85, 126, 45, -69, -81, -124, -98, -95, -104, -78, 112, -50, 5, -84, -35, -60, 93, -84, -104, 72, 32, -12, 29, -17, 66, 18, -118, 29, -93, -52, 99, 109, -27, -71, -37, 15, 18, 55, -108, 113, -8, 88, 104, -23, -111, 113, 110, -78, -72, 91, 76, -62, -15, 8, -70, 94, 78, 117, 99, -80, 7, 76, 21, 1, -61};
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
    msg.setTimeStamp(0.699886619354);
    msg.setSource(26786U);
    msg.setSourceEntity(94U);
    msg.setDestination(57267U);
    msg.setDestinationEntity(242U);
    msg.type = 42U;
    msg.op = 244U;
    msg.request_id = 12365U;
    msg.plan_id.assign("DPTWBAAHYSGJYLJNLUYZBXOAJSOIXLHDIXCWPESPFRQLGBZGAKXBTSAZZXCDGAFSZOHOJWQQLFEETENAGDDUHOMXVVXATEFNFIERM");
    msg.flags = 22864U;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.start_lat = 0.47948697953;
    tmp_msg_0.start_lon = 0.486872889744;
    tmp_msg_0.start_z = 0.00663767015057;
    tmp_msg_0.start_z_units = 101U;
    tmp_msg_0.end_lat = 0.908780392892;
    tmp_msg_0.end_lon = 0.360908166091;
    tmp_msg_0.end_z = 0.153010127627;
    tmp_msg_0.end_z_units = 152U;
    tmp_msg_0.lradius = 0.126097866543;
    tmp_msg_0.flags = 43U;
    tmp_msg_0.x = 0.428796350001;
    tmp_msg_0.y = 0.0811923507014;
    tmp_msg_0.z = 0.500935394899;
    tmp_msg_0.vx = 0.640293697197;
    tmp_msg_0.vy = 0.989425339495;
    tmp_msg_0.vz = 0.884558117809;
    tmp_msg_0.course_error = 0.781538523897;
    tmp_msg_0.eta = 40888U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PKXRSWWXJCXYTAHIMVXZGDDTIJZQUVNOCNQGAOQLTVFSZJQSOSAYRPDWCINTIBBTFMKDKLUWFYOPFZMAPEISSRFDVIPJQGPDSYVKIPRQBBHTKHZ");

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
    msg.setTimeStamp(0.751488429798);
    msg.setSource(15549U);
    msg.setSourceEntity(125U);
    msg.setDestination(41616U);
    msg.setDestinationEntity(27U);
    msg.type = 39U;
    msg.op = 140U;
    msg.request_id = 32078U;
    msg.plan_id.assign("SPIINWMOLHUWECJQGZOAVIMWLMRNYQLIPGXTCHBIBWWYYNVMCEGWVCFUDMJLZUQFBPLVHEOGDJAIPRADZ");
    msg.flags = 23180U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.63730653942;
    tmp_msg_0.speed = 0.305947002357;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FJOTPNLEQHRWWGRNOYZPYPAFGZQQYFUMKCIXDDDSBTWRPKWZJMOXVDMIJVHDBRASIYRVZIWAUIDQFAEHVYFPTKRLOYLCECXRKBSTLQENEONNKLWMSXEPQVKQWFNNGYDUZJTQJLUUYFQQCSSOLAVGBFJKCXGULIHVP");

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
    msg.setTimeStamp(0.288414674339);
    msg.setSource(19620U);
    msg.setSourceEntity(215U);
    msg.setDestination(62854U);
    msg.setDestinationEntity(10U);
    msg.type = 29U;
    msg.op = 44U;
    msg.request_id = 51723U;
    msg.plan_id.assign("NLRZAVNSCVFYGWXGQZSTALJKCQWHJQCUAGEKEEXSVYSDFDVQDLIJVBLQEFKMLLSFNWGXEWVFKKUPYP");
    msg.flags = 5082U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.00907472527775;
    tmp_msg_0.start_lon = 0.111311384745;
    tmp_msg_0.start_z = 0.40459689135;
    tmp_msg_0.start_z_units = 123U;
    tmp_msg_0.end_lat = 0.799733820154;
    tmp_msg_0.end_lon = 0.49561763055;
    tmp_msg_0.end_z = 0.251614683151;
    tmp_msg_0.end_z_units = 117U;
    tmp_msg_0.speed = 0.550505412533;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.lradius = 0.0346214026352;
    tmp_msg_0.flags = 90U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XDLKBATMCFWVDOKNIHCJBAGKTEMWIESJJSJVVUISVGAMFCUMTFDQHGXIHABFPZIOIPKMAUWBSKGVXARTXTRXMBMWSXEJQXMRYTPNIFGFYLMZRLNASBZXYJBVNHXLUEWUGAE");

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
    msg.setTimeStamp(0.386766316827);
    msg.setSource(37498U);
    msg.setSourceEntity(192U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(133U);
    msg.state = 11U;
    msg.plan_id.assign("FQCUGWIYTBOKLQZJGWPT");
    msg.plan_eta = -1049164394;
    msg.plan_progress = 0.323535842723;
    msg.man_id.assign("MJTQXBDPYXLOYGDCOXWQCECKLDXKBYUIZBZVAYZGSMEJMWKERKZJYLEOSNUGNMGHQDTEDSHATAQHPHMSPRRAIIFGUJQLIHONOGPZFXHWEBLCHPSWURNTCVVJKTKFKQATLNUDWYFVFEJBCVRFIGTUVQDIAMINKYOXIA");
    msg.man_type = 6309U;
    msg.man_eta = 1609136406;
    msg.last_outcome = 8U;

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
    msg.setTimeStamp(0.138655721724);
    msg.setSource(6650U);
    msg.setSourceEntity(152U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(159U);
    msg.state = 181U;
    msg.plan_id.assign("KYNEICYROKUNTCVPLXWMBLAZAENNDRIRKQUWPFEHPYQQYVLFYMMSBGXYHQDJJXQLLFSIHFZWAIGWXISJWESKZJCSMZDDTFQHKFGNAXVWBDXWOYTDNGBVDPEJAJUCKCHUVPYUGNGRNOCRHBHEPLTQXJOFOWHVZUZBETUII");
    msg.plan_eta = 625710256;
    msg.plan_progress = 0.793955919937;
    msg.man_id.assign("QZTLZDYMSCZKPDZWZAGSFUVHTGYKIMCVYATXYDQGLZHTJQKYMWJBXNDLTZNKPGROVJHNNUWGWBDKHLIBOVJBXLANNAIJPDDBXWEQACKXJVKLEBWMKSRZXLVYWDSAVFIEOINOGTUFCOOHEUPORFJMIMDQWMIFAARBIAAPMHHEMWQMEECCQVUVTCLGSRYTFCRFTDQWSH");
    msg.man_type = 24388U;
    msg.man_eta = 1965447331;
    msg.last_outcome = 16U;

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
    msg.setTimeStamp(0.781152640503);
    msg.setSource(54907U);
    msg.setSourceEntity(154U);
    msg.setDestination(57316U);
    msg.setDestinationEntity(160U);
    msg.state = 95U;
    msg.plan_id.assign("VWYEUUVHNKXFDPGPTQCHOLYTPWIGMWEEDVMQENURPWLSFZEFKOHRSCWDPQVYUUFSZVAORJMCHRADZMUTKYYHIIOAIXCSXPBLT");
    msg.plan_eta = -1631085085;
    msg.plan_progress = 0.550206542882;
    msg.man_id.assign("OUMZPTENQWRXEVIHVDCIDHTCJMYMYTZPHQTTQGWLMHFCOVVF");
    msg.man_type = 27860U;
    msg.man_eta = 1960875893;
    msg.last_outcome = 77U;

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
    msg.setTimeStamp(0.295801860769);
    msg.setSource(48261U);
    msg.setSourceEntity(149U);
    msg.setDestination(26896U);
    msg.setDestinationEntity(217U);
    msg.name.assign("PGYIWDJLXMJJCQNDKFRYWRYKZNGE");
    msg.value.assign("ELAGUWZXPKCICWVZRSRCRDMBTLCDLMOXKNEUGYXUVLFJHIVWVOGAFTTDIXZWCXHFYJTFEMXSUAQSAZBYVKSTMQLBQ");
    msg.type = 204U;
    msg.access = 162U;

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
    msg.setTimeStamp(0.582402822757);
    msg.setSource(23080U);
    msg.setSourceEntity(172U);
    msg.setDestination(61677U);
    msg.setDestinationEntity(215U);
    msg.name.assign("RCYCHNFETTZSEJYHEUFXUKVSIVRHLQIDXVIFYBJORQXWKLOGMDPCBKTNMZGFLUQHXPRKAMIRUGLZOQPKNIJPVQTNIHZCCGQCOAZNYVAPOTFUSVIGELFZMINOIHPGWTPLFYMNMLYTNQDBSCKEAJOEPSMLDYJRAXMTPGDAGQZDLCXJBOWUPFYGSWVWYABHHNRDWATJBUESXABEQIRDFKYDTCRXEWAXOZRWKOUZSHXBVMSHMJJWSDVBEKLC");
    msg.value.assign("NIECKDEMHPJVXXXSQNOZGUGSMZISQXGGKYNVKQFFVIHIXNFDWELBKESJTWDQQHWRASKFWCRRPJRGEQVIPLZNNGCDZHATBKXWEWEPVDOGJAUWGDNBUTIOSOKAULEXJOURRJM");
    msg.type = 169U;
    msg.access = 36U;

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
    msg.setTimeStamp(0.973216344429);
    msg.setSource(43994U);
    msg.setSourceEntity(6U);
    msg.setDestination(48540U);
    msg.setDestinationEntity(244U);
    msg.name.assign("PETLVGCPQEOODVGUAEKPFJLRHSXWOZYAEMFGXHWNGJFRVFCIDIHJURVUMNKNEUMMVEHNXSBKMSAMXVPQDWJHOBLC");
    msg.value.assign("KYACYWRZSOVVMWYB");
    msg.type = 71U;
    msg.access = 237U;

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
    msg.setTimeStamp(0.271277988374);
    msg.setSource(56861U);
    msg.setSourceEntity(144U);
    msg.setDestination(56778U);
    msg.setDestinationEntity(177U);
    msg.cmd = 8U;
    msg.op = 120U;
    msg.plan_id.assign("ZCFHOFVZUBJOXSSAZUIIONPWTZFYWJHHLPBALBALNEQAZNZNJOUAQSULGCXVDIBPXVYWSJXSOQRLHSMHNWPMTBIPJKFVXGMAEKRQCORBPNRUPXLCVWDDZMXOKHYWECGYQYXYMVIKYMWDFGZGRWSEUJLNRCQBDCGEVFWZMDBGKEQBEMLNSIPINATLGQTTJCVKRUYDXHFUZIDTDOCFTXOTAEHKKCDUHJQUIOKFMTEIP");
    msg.params.assign("UJHJYGKGLBAHYDDAKEHAHTVPDSXFXDTILZVHZTBIWAWFNHIKBLRUUVGIWPRQKNEBYTIXDLBYXKHXCGNVAQZCUKJJVNFBGPSRJBAFTTXIOVQPFFLYCGAWOEMCRDNHYEESPOQCNIVRVSFYORWDLNRISUQZJPGDHOS");

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
    msg.setTimeStamp(0.430130066413);
    msg.setSource(37460U);
    msg.setSourceEntity(9U);
    msg.setDestination(63287U);
    msg.setDestinationEntity(123U);
    msg.cmd = 124U;
    msg.op = 32U;
    msg.plan_id.assign("MUOHDSCJQSNWWXHDMHOXRJELNMADTZMYOGYUOXQUWUISFGHDVNLBFQ");
    msg.params.assign("RGNLCOHWSZSUKHFXPHHVUSOVTDECURTSKOGDTOJBFMYOPIOBJPIMRPAHDWGEXIAEWXKCIAFLHPQDLZBDXYYVQKEYUILMCGOQSQIAPFTNQBJYZLYJDNJOFGGLSJPZNBPRTIFYWNBLXZGCUMYMWPWTOYNCVNATKJDMWKUDWJTXFZFRAUSIWMUDEKXLXMOQZKLCXVSVLVCKBUJUXEABQACDZTNGHBAGSRSYFJZRMVKCRTVBQNERHFWMEEAQHVZIN");

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
    msg.setTimeStamp(0.00681569932708);
    msg.setSource(20338U);
    msg.setSourceEntity(19U);
    msg.setDestination(33839U);
    msg.setDestinationEntity(116U);
    msg.cmd = 11U;
    msg.op = 100U;
    msg.plan_id.assign("XWQUNKBHONDRIZZYANCCLXGTJFOPDAZIUCVSLSMAHTVLOLICXMDBWSHRDGSKWJHTWRKJOQUDEMZCCAYHWRZFFHTPJIPNBPGIZPAQVDQXYETERYULCMKURMMITGPBCFSPRJLEFNDZNFGLRVWSJYOMKULJMEBWVMLAOYTOQCPEITNCXFTRPPSQGUOVAQVVIBGAZFJHYYLXDSUBQUOKJFWEUBXMGDQGXEVAIZ");
    msg.params.assign("QQEXJGXQNZYOCWHDBCKEHSKUIKEJZAYLBHNBMTTLABFZIQZBJUNZRVGDDAVICDIWVCDFJBSMNX");

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
    msg.setTimeStamp(0.179464047324);
    msg.setSource(29319U);
    msg.setSourceEntity(144U);
    msg.setDestination(894U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.173614632592;
    msg.lon = 0.645538865466;
    msg.depth = 0.326219036111;
    msg.roll = 0.0801274888071;
    msg.pitch = 0.799097911452;
    msg.yaw = 0.822430894409;
    msg.rcp_time = 0.254134391192;
    msg.sid.assign("GXLTHSTFBPWQCTTYCDPRUNNRLVPREKQYQEHJMNZCFWKVVMOAMDYJWAOSASMVBCBWSAPIDULMOADKLLWVKEEPRIZUMHSOUMMUDFOFGZPXSFORZELKGXDNHZCVSBVTFLKZQWYZJPVANTDDWTQAXQAYSQYEYXHIFJOTGBXLXVGJUHCBKBFUKMFIVGHXMOGEGIOYWIJYHBJWLNRCIBPCC");
    msg.s_type = 63U;

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
    msg.setTimeStamp(0.906275961553);
    msg.setSource(13281U);
    msg.setSourceEntity(50U);
    msg.setDestination(61296U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.599552716549;
    msg.lon = 0.277938643535;
    msg.depth = 0.0579148004344;
    msg.roll = 0.900407574703;
    msg.pitch = 0.668565562096;
    msg.yaw = 0.528865534094;
    msg.rcp_time = 0.539814322618;
    msg.sid.assign("FLCOPDMKRQIZTJLQVMBBSSBXYD");
    msg.s_type = 60U;

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
    msg.setTimeStamp(0.983210996471);
    msg.setSource(25610U);
    msg.setSourceEntity(228U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.973649179859;
    msg.lon = 0.80049210959;
    msg.depth = 0.941900036853;
    msg.roll = 0.243264969329;
    msg.pitch = 0.633983711669;
    msg.yaw = 0.0658184422358;
    msg.rcp_time = 0.736030034949;
    msg.sid.assign("XONHOQOAZVFYKFAFGOTUCMGEGILGGMDWHODWACHFLKLIAUNPPCXTSDRNKQPITBQVOOIOQWUVPAWXIIHXIHMUBORAQFFLSMYAUKP");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.353508820711);
    msg.setSource(34363U);
    msg.setSourceEntity(133U);
    msg.setDestination(3004U);
    msg.setDestinationEntity(95U);
    msg.id.assign("XKJMBOZVOWUKKBTYPLJSUXVDJFAPCHNVRSUTZNGKGSTQTMCUEEJLVFYPGWQXNPRCIZWBCFNAZNYVUMYTBPFMORWLEFQKTQXJORSWICKBETCIZKZXYMSZJH");
    msg.sensor_class.assign("FKZANFNGLIGYTVPELOSESTEGUENARQZWZXKKCFNVBCILVHUYEVIRHKAZHDWVCNGVJKERBXKTBHF");
    msg.lat = 0.643060975142;
    msg.lon = 0.726147567299;
    msg.alt = 0.653894217359;
    msg.heading = 0.306125206233;
    msg.data.assign("FBCOGSIJTRECREGEHPMZMFAPFSIJZJNNSJVUBOIQULBFYWBVVSNXUIQUGJHFBCSDYSELXMWJDTUAMQGARTVFYCDGTPWKACEOXBSJAZYTFZBRGQYDJOPQILYWMOVSOXCZGYXUPNTHPKRNVESGQMHQESNLBR");

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
    msg.setTimeStamp(0.862113344559);
    msg.setSource(37800U);
    msg.setSourceEntity(94U);
    msg.setDestination(38367U);
    msg.setDestinationEntity(160U);
    msg.id.assign("JYVOHTEKWRKCWRYOWILJYAHKZRLGGBBSIGDXDMHCUZUTMXIOPSLDOLWZJHUZFABIJBMTFTMSGFFNDQETNPNCFORAXBYJMDVBHKVSECDRYLNSPVEJGOVZRDYZAXCHXHZIPLYOUXAIUQHAPMBFDKVOJYCASFTNXQJRENMUQVCPLUZIBXKRMSKQEUIAEQXTNATCKWPWIHPNEQHCMGNOZAZBVUWWPXJMGQPV");
    msg.sensor_class.assign("HKEAESDTAKIWNRYIOKQVBRVCCPDPWHUDYTXOHCRGYJENZFTLLBJBRPGIQNUOSAIYKEZOWVCBQTCXSTFGKTWOEWMPRDQOUHIAASXVAQBCEMUVAMIMYMFJKKWAQBOWCLPGMHHDEPHSYLYDJYQVEXFWDZYNNDSGNIUGECNJRPGMFNIGCBFLAZLOUMKFZXDVSFXJFMSGEWXPZBSYJHTCLMOS");
    msg.lat = 0.358281854236;
    msg.lon = 0.705416835996;
    msg.alt = 0.779567517403;
    msg.heading = 0.776146884111;
    msg.data.assign("EBNIFETUPSZAQOIVAJYFCTMEVXCFXRMTAEUOPDRPBOUTNQVGVYTSSDDWYWJNGZZVHLKMWPNWMXLTGZHJHRFEVSHDDLOMNMLRAVGFISDCXRWWZQBGXJMSWFPUGMVKTFEBCHDHBPKQFTSTY");

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
    msg.setTimeStamp(0.921889490156);
    msg.setSource(20502U);
    msg.setSourceEntity(135U);
    msg.setDestination(60828U);
    msg.setDestinationEntity(76U);
    msg.id.assign("QUZGMIFIKRACJHBKPMNORUAEHIFNIATJPKTMWVJXOLOUZQRCZWQXOENZCGBKSTTMBSTJSCJYOKRHYIWMBSZOMVZWAGHPINDYCSLMYHELYLZUQYXYIAEPQISXKQMBSHHPOLPVRYDAWFNDUZVBSRKCVFFCAGGPVEWLVHJCSNIDFKMFQGDKDEXNMTIDTHUNQUUVBAZXJSEXOVRUJQDNR");
    msg.sensor_class.assign("XCHUZZBCPWSNKWTHFJNSNLFDSQYQXWYQGASKYGGKWDCCGKAEZADVMFNWUUEVUEQZJGXURYBRAARXQNAWRXWIBC");
    msg.lat = 0.115749781876;
    msg.lon = 0.249264294442;
    msg.alt = 0.160578462701;
    msg.heading = 0.0622232616024;
    msg.data.assign("TDWVIECFTRPWNQJFEEUIAQTLBZJQQWHPHMKJZSNUBZTHUHIXMJIEUSDCXNKPIJSLBFLEZNQIJSYKRKDCOHUONTSVUMJVPJWTWGCOMNCECHKWGKGXVOKJKSJSILADFGBENOPEESBLZX");

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
    msg.setTimeStamp(0.149433976976);
    msg.setSource(18065U);
    msg.setSourceEntity(247U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(125U);
    msg.id.assign("YCNXOZPKBPULLVGLUXFMFJHTDPMBZLQREYVW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GRIWENAHPEYETRVIQBNHPKZGJLJGLTYISSDOECSTRDOLJDYTCOYQJZWMSDQWEDVBRYYKMJVVSUHKBUARZFUJIRCMTMNPBNKFFAXWFDJCKVQWRMCIBQYLVYMONQYZCPGKJCWQQVBHPKZBKGVLDUMXBMUQEITFTZAGIOHFAXCLCETPNTGZAWNXFLOYUSWDUEAWSNVGHXELDBHSLEFKHAZOCSAQGIHSJMXPLMVIOPWOGD");
    tmp_msg_0.feature_type = 130U;
    tmp_msg_0.rgb_red = 38U;
    tmp_msg_0.rgb_green = 193U;
    tmp_msg_0.rgb_blue = 94U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.931833937282;
    tmp_tmp_msg_0_0.lon = 0.193157133769;
    tmp_tmp_msg_0_0.alt = 0.0658437080052;
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
    msg.setTimeStamp(0.7192950071);
    msg.setSource(40755U);
    msg.setSourceEntity(80U);
    msg.setDestination(59171U);
    msg.setDestinationEntity(229U);
    msg.id.assign("HEOOYHLGPVYXHVYZVJGMPPENUKTIMVSDSALOOUFTLHXGXOFCSYBVVUMORSRNKGCGHDQFYBSBWSWRFROGJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DAGKKQHRHIHGJLEPAQMTRTPFJVPWAAAGIJGSLLDHPNBFODSGLCMZEIKYSRDOPBYEFXJHEPVSNMWJZVBCGLQ");
    tmp_msg_0.feature_type = 129U;
    tmp_msg_0.rgb_red = 33U;
    tmp_msg_0.rgb_green = 154U;
    tmp_msg_0.rgb_blue = 29U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.296507282797;
    tmp_tmp_msg_0_0.lon = 0.0174168199294;
    tmp_tmp_msg_0_0.alt = 0.210456702772;
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
    msg.setTimeStamp(0.510104529303);
    msg.setSource(21792U);
    msg.setSourceEntity(48U);
    msg.setDestination(59066U);
    msg.setDestinationEntity(160U);
    msg.id.assign("UUQAWJSJRHNGVSYPFWEQYAASTCZKBZBMWKEVRWLJLKJPTKEYYGOYDFCIZXZSOTMA");

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
    msg.setTimeStamp(0.649527410591);
    msg.setSource(32386U);
    msg.setSourceEntity(70U);
    msg.setDestination(10455U);
    msg.setDestinationEntity(205U);
    msg.id.assign("TOLGARNENDGUBWXTVD");
    msg.feature_type = 210U;
    msg.rgb_red = 68U;
    msg.rgb_green = 37U;
    msg.rgb_blue = 26U;

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
    msg.setTimeStamp(0.090225804841);
    msg.setSource(18722U);
    msg.setSourceEntity(143U);
    msg.setDestination(6157U);
    msg.setDestinationEntity(32U);
    msg.id.assign("IZQPHLCQUTB");
    msg.feature_type = 236U;
    msg.rgb_red = 240U;
    msg.rgb_green = 104U;
    msg.rgb_blue = 173U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.854748493866;
    tmp_msg_0.lon = 0.712405221263;
    tmp_msg_0.alt = 0.677357557616;
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
    msg.setTimeStamp(0.536749000646);
    msg.setSource(2301U);
    msg.setSourceEntity(51U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(120U);
    msg.id.assign("YUANWCTYQFJBVYUYVNNQDQEXLUWTUSOBACFXPTRVJMQJVEUGLFKPXNOOMIACPIYMHWWPTRDCOYTSZK");
    msg.feature_type = 242U;
    msg.rgb_red = 176U;
    msg.rgb_green = 9U;
    msg.rgb_blue = 242U;

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
    msg.setTimeStamp(0.704558640665);
    msg.setSource(9905U);
    msg.setSourceEntity(203U);
    msg.setDestination(56431U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.289094784559;
    msg.lon = 0.465614155465;
    msg.alt = 0.0837226236145;

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
    msg.setTimeStamp(0.345193644682);
    msg.setSource(43777U);
    msg.setSourceEntity(117U);
    msg.setDestination(46551U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.082804882071;
    msg.lon = 0.220830900043;
    msg.alt = 0.65481886459;

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
    msg.setTimeStamp(0.247069688519);
    msg.setSource(42410U);
    msg.setSourceEntity(170U);
    msg.setDestination(40582U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.471716969967;
    msg.lon = 0.7503005206;
    msg.alt = 0.326116539914;

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
    msg.setTimeStamp(0.613068292383);
    msg.setSource(21192U);
    msg.setSourceEntity(148U);
    msg.setDestination(64055U);
    msg.setDestinationEntity(229U);
    msg.type = 54U;
    msg.id.assign("BEBWGQQJLENQFZNTNSXWVBHFLPEOMTGXXJNWAUXSRAKYEJMBYELUGWPMVLGSAWHGIMYPFRHHICUSMFKZWPLMEBAGIAPIVYUUAAGLTIALCNLFCDZOAPXGHSZKVETOTKCOHBOCZKDMZBYDTICUHNUDORSCDQXBJZZQCCNTPSGRXROODJMEIHURROHWKTPGLBQDWYFJDMQJKTQEWVVXFRIIVR");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 191U;
    tmp_msg_0.text.assign("OZMRYHGCNFGULDJHZPMTZSQOVWRIGDIAKVGOFUOLWPNACZIWVFVMIIDJVTSTQZFDOWHNENLZLGWNCHAYYXPEXBOFBPSSLG");
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
    msg.setTimeStamp(0.827397853572);
    msg.setSource(16969U);
    msg.setSourceEntity(214U);
    msg.setDestination(43407U);
    msg.setDestinationEntity(231U);
    msg.type = 235U;
    msg.id.assign("ZJOBJDYUWSMTJHGAOGFESWHXVLETU");
    IMC::AcousticMessage tmp_msg_0;
    IMC::Salinity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.582275711987;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0232294567318);
    msg.setSource(22056U);
    msg.setSourceEntity(140U);
    msg.setDestination(6473U);
    msg.setDestinationEntity(128U);
    msg.type = 46U;
    msg.id.assign("HWUHYHOAYFQSQJJISBYWWOPLDUABONKL");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("AKRZPDTCNXSRLINXLSQVURMUDLNRCHTVUPYEZXFWJSPFWUCHBKIIGLMGWTECGVRQCAXUYWXGUDBAAEGVLZWTMYEFVDOOFSFBYRONHPLLWVYRHDAPOCYBEECFSARPVEOKQULKCUIVZBXQKQZQJOXAQMGONYDZTBFTSJQNVMHDKSBGRONJALJODIXBIKPNYWWYEBGHGZFPHFHWZSIQUTTXSNMKZI");
    tmp_msg_0.timeout = 12670U;
    tmp_msg_0.contents.assign("JNEZEWXPBIHLCCSCDZHDLMNSJVFJINWQLKYAIZVAWLSFSLTWVRZGFAOJUAJFHAXJVEYTRUQGSDDTRPBELT");
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
    msg.setTimeStamp(0.439822559079);
    msg.setSource(28221U);
    msg.setSourceEntity(199U);
    msg.setDestination(65193U);
    msg.setDestinationEntity(138U);
    msg.localname.assign("NBMKIEWGCXXKAODITWDUHRPHXPZQHZDMQZWOSONCOSLIEHFWUCHBOZPULFMVQSLNIPPGORXLGDKRFNZEEUIJBVJSNBVAJBXFGCUVKLAMAIXBTLADOUOMQNSGVSOYGCTCEJBADIBZWRHPTWEUZFHLFKL");

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
    msg.setTimeStamp(0.0149330406364);
    msg.setSource(18333U);
    msg.setSourceEntity(182U);
    msg.setDestination(19104U);
    msg.setDestinationEntity(199U);
    msg.localname.assign("CFEUDKTOHGDTDXYUTHVZNATBZPAJOIGFFKAKDMWHUAFYLGWFDZPGWGGECSYCAW");

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
    msg.setTimeStamp(0.6085846556);
    msg.setSource(15507U);
    msg.setSourceEntity(49U);
    msg.setDestination(31282U);
    msg.setDestinationEntity(151U);
    msg.localname.assign("UAFYAJPHARKCJMQBHO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JPOJGVWORHIKWUVASLSQLLOXMIZGFKMPETNYGJFTVRNLKTOOBCMLOXAAYHQSMGDEQXJQKBVZPGZFQRUZTKDIYNRMRJAAJDRMLMXWHBPMNSKHCIXJCRSHHAUXNLKPECHKYFDIYVECNGSBHQGEWNIKJXOXUMQIFNRTJTBVOBTDTDVWRBUNWDYZZDRFSPALUPCYAUTVHFVNBOJTFPQSWGQSLWGEAYCSZBFEOZEQWIXWACIMBZYKHG");
    tmp_msg_0.sys_type = 100U;
    tmp_msg_0.owner = 23989U;
    tmp_msg_0.lat = 0.794804883928;
    tmp_msg_0.lon = 0.787489701682;
    tmp_msg_0.height = 0.653761201527;
    tmp_msg_0.services.assign("OTIOCFIEBKOBVYLRIBLOZKGPDXERWXZOJQEHPQWOVFN");
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
    msg.setTimeStamp(0.811310397436);
    msg.setSource(63973U);
    msg.setSourceEntity(124U);
    msg.setDestination(41306U);
    msg.setDestinationEntity(192U);
    msg.timeline.assign("BYNUEGBNGPNKKNXSSCFRYMIQOXAULBPZHERDCSPWRFGMIQEQSAMNDKQOGIITANDEVMAXUBHFEWTGGYHTKOGQJUFEVTNCDIJFGVXHIRQORLOBSYJLTERPMBTANRJCPJVALFXNYEICYOCCDJW");
    msg.predicate.assign("RUAFZMGBBAUOERXZTZRUIQHGWICITD");
    msg.attributes.assign("MLBZQPQJQDBEOYUONWOOXKCLEXVJXCZJFIIDTYYBQZKVFWPZIZIAEMAPVLWELAUARAJRCDHHFPPSFDSFDZOOYUESXXHAFQDNSRGBRFZBFBYKNVAXKYHOJVDQGGBMKVAANGKERPGGLOSKUWKUCVBTLSTTMMTTNWPDEGOCIJJYIKMIXG");

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
    msg.setTimeStamp(0.8097809368);
    msg.setSource(23631U);
    msg.setSourceEntity(238U);
    msg.setDestination(57161U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("HENLYAYAUOPIJRMAWBNPNBYWXUKFNICCMRTZENQSJLOYKJNGILIUJQIFTIUJMPQQSNEWMVXCVUVUXHCGFMPNFWZDHXIDMRGLSOXTGTBPKEEGLFAHDZCT");
    msg.predicate.assign("ZHENIPEVCMALSNBJBXGDODNKLMSYPBNHWMNSZEEGPRLDHQRZBOHFOXWTLGJVKR");
    msg.attributes.assign("OZVCAWXDRQDRTWNAFLMEJQHXYLOULXOISIVYOGFGICUKOLYCCCFBVZXHJYAEXWWNSBIYWZGWKQZTURTASODXIPXSMTTZNFPLOSKQRTFSMDVLYGDBRQKVZIAYZHPMLEIHFBTEDIZXCPNFEUDIGBRJWXKMHKGKCRQPQQTCEDZMNHUCMSNMHGIYSEFFNWQAGAPJYEGTBPUDUMKVOJTQAKUDBWZJVBUVBHMHXNSHWCRFRSEAOLJJVYROPKJAELJ");

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
    msg.setTimeStamp(0.0971052380755);
    msg.setSource(61526U);
    msg.setSourceEntity(203U);
    msg.setDestination(44232U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("ISBCMQWFNHVDZTHXYYKTFITSYUFFEBNDJOFAUQHKIMPWWGZZGUFPILTSCYNHVQVGBNZPIALOQPCTRACTUZDGWSHWGUAGJKRRTULLBWHGQOEAUWUCPPZVIMOTOXYFRNEGTURMEJIBMDVAOMPRZJVAPZKKFYEQLHCMELODVUEXJFYCMSXV");
    msg.predicate.assign("MOQIVLTLOLUZZVVQVRGEMNADWLGIBLWWWSAOUMFRFTCYWUDSWHTFYJGKOVSAFQGPAKJNCYPNTIBPUCIGHZNFBUJSEMOSBCPJUWDZYFTKVREIXOFKO");
    msg.attributes.assign("FWQMDECHAUOGRAMHXKLADUWCZIAEELTSGSSDRCSJDJUHVGXRBNOARQRGKMVBRPJUNXIZDNITPAYGFPCLLGIRTOXSZXRGNVIIHVLXVQHJVSPEFYSJWQPMAKETZSWGBUBKKNMQBTCTJOFVUKKYPMYOYUCOMPIKLKFHNRFTNGHBQ");

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
    msg.setTimeStamp(0.725127252573);
    msg.setSource(9165U);
    msg.setSourceEntity(170U);
    msg.setDestination(52303U);
    msg.setDestinationEntity(179U);
    msg.command = 113U;
    msg.goal_id.assign("CNXJIHOSFQCQDAPWICUMEFBXDQUXDFLRYSNKKXSLWDRTEJVRNPLKEOWTRQQHHIAMILUIJKZLJNBRBLUGNEEHPVGLQABBCYNCMESOKQJCPZJTUYWUXTSGBCPZXOTSJEENARGHYWWUVLSMQOFVTQVVMABGZDJFZKFCOYIZLMK");
    msg.goal_xml.assign("ELWAADGGNLVGPVXTXUVUYYHCITPSSQJBBAIRZEAHRLMCIDYFJXLHOCSBLFLWSYZVNDSSFQFEHMLKCZROJJJYFNJFZHIOZATTUDEDENGHXEWGICHVMHSRMXPFKRAUZENMRVOIEPPKUWCJPQOKPYROQNJIUBT");

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
    msg.setTimeStamp(0.00628905898976);
    msg.setSource(12669U);
    msg.setSourceEntity(136U);
    msg.setDestination(12836U);
    msg.setDestinationEntity(169U);
    msg.command = 54U;
    msg.goal_id.assign("IUFBFRGKJYVMVGTPWKQYOCVBFACOFCPRZTARQGKMUHYFXSHCOFWNYVINDJPPSCASTIXSAQQHYYFORHDLZNUSTMLISYIHEGGTZFKHIUKMCMBDKNWNOLBEJGWTNDBZQIGJNHRULWKOQZVCNMDPLIDXTRXDUXWOGANPTUXUELSIDAVMVP");
    msg.goal_xml.assign("SFVSGHYCTNNIDNASEKVNXLEHEGWPFOJHRHKPJBUAZWTRHYUKZNSZROPFBFLPLJWLDTQICXPESSRGZIVLAZYKGDGXUPPTFCBOBIFBKYZYMBOOWSMXLIFBXGIMQFWJYQSXUDMPTNKPHLHCMIDHLZNEMOEVCIUCVAEWRSZVMUEXFXVIJHTDVK");

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
    msg.setTimeStamp(0.376159251437);
    msg.setSource(6419U);
    msg.setSourceEntity(2U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(75U);
    msg.command = 243U;
    msg.goal_id.assign("SPQCLZFXMXIFETTUFYVSLIKZXMDIUYQGKPQVKEHYBPHPEOLYBXDRHBIDMUSHANBYSZRLZWJSARHRMCGHGPKTICGEJGLDTVBVRCFWXWIUTJPONQNVZAQTYOTUUXEDEPMKLFXBZ");
    msg.goal_xml.assign("ORLXUSCBFUNTPBBBBABHYGIFNTATMGQAUJHIPWTKHSVDMNZRVPQFTSVCLJEZI");

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
    msg.setTimeStamp(0.878957648481);
    msg.setSource(23340U);
    msg.setSourceEntity(22U);
    msg.setDestination(15454U);
    msg.setDestinationEntity(15U);
    msg.op = 107U;
    msg.goal_id.assign("EGZQDEWEHDG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OJMJXXIDOKGNUZENGHCMXSZXLGFDRWMPOTCJAEWAMIYDXREBKSLXLGJBQIMHEVPROYKIWSBQRUYLNCNTVIGZQWMBPUKQDKOMQPSXQDWOYWOKGTGFVBYTRHRSMAXCSSKSNBPVQMMZNREBCNBDPYZRARFIULVNYJEDAYHRPOFLFPFLATOXUCJHTKVHHDQUIATHVYK");
    tmp_msg_0.predicate.assign("UKEVGMLWYZGVNIOQDSXJRAJPIWFUYVPEMGVXTYVRIRWPBWESBIDQQFUXZHMNVKHITNTOHKMKYDXOQOHXWFCWBJPLZFOCCMRVNTTDSKGJZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.attr_type = 22U;
    tmp_tmp_msg_0_0.min.assign("ZBJDFXTUVWBYXZJXHBLYHVKRYXERVCFBHOMUEELFZQAF");
    tmp_tmp_msg_0_0.max.assign("TMFIDYGDSCTPLRNNMALVQLWOMJTEHPRVDEGPDGHKNFSUUUJHGBULTZAXKCYYSZJJCLBFCXEPSWRZBJHCWLBGAYSVKR");
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
    msg.setTimeStamp(0.765077357112);
    msg.setSource(63214U);
    msg.setSourceEntity(46U);
    msg.setDestination(29087U);
    msg.setDestinationEntity(37U);
    msg.op = 233U;
    msg.goal_id.assign("UTSJLQCWPJWXROQGOOYHXTGSXQVFVWDQQSMLKAYYEQLVWFYSRUPNEUNZBAPGQCMVMQBGFILINIGVNDJCIEVZHCHIUKXPHXSBFYVBERVSKHROKHFLLRAWSFLCSHPUAPXBMYJBSUGBOODAPBLGMXXIZTEYUKCKKQZVKWZRRUHYGDNQDCEPDRPIEESOTCJEVXNNHZAFCIKYN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZAIMXOQZCUSCKZIEJOZFTBQAYLWLYCDYSRLWUCILEWMPPFPXNGGAFYHVGGNIYRTISAZDFBJEKMBXKDPWVQQNSHHQVCIQTFXOJOHAXMKTOWFXZJMLLKPQTZBCHKUVYJYWFDBGOERSIODIRXPDIBSDVENCOUJTWNXEWTZEUWQADVECKMEHPNGGRBJKOFUJRNPKBSVHHWTPDMIUJZYR");
    tmp_msg_0.predicate.assign("OGSAGKIYWYGARJPDMYEPCSMEDO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.attr_type = 30U;
    tmp_tmp_msg_0_0.min.assign("UNBLVCORPAYEGLBODFNSMADAHUSGMFLNOWQTRMCYFHLDYCPWKBIOLSDKCKLMTQRDJJFHLXTPTRCKVVQQVXZOPBZYEQAROGXDMPZGTEWKGWKQXVBSEREXVFXRBXUEJMAFGMJFPYWORSUDHDIDGIPTFEZJKUEEVUNHWWMTZPHOTRSIBKVKQAFLNIUZBCPXHWJWEHQAKVABVBUZSWQIGQXNALCYRMTSH");
    tmp_tmp_msg_0_0.max.assign("UVKYQTSMRAARXAMWGCNBABHDAYLMIXFLPRNOQCIJMCLTSQ");
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
    msg.setTimeStamp(0.115603445772);
    msg.setSource(53683U);
    msg.setSourceEntity(231U);
    msg.setDestination(53440U);
    msg.setDestinationEntity(235U);
    msg.op = 94U;
    msg.goal_id.assign("GWIQPLHZXBVEPAUHBEMTEFZYTQRVPUNUGCXMHACUZRTDYETNLFILQAWSDJRNOTQIGHFXMQETYGLOGLVBVXCWKENBMTDIKWEJCQAHSNDGMAMBIKLOKPWRUVVAZQFTYORZXYZOVSUCSDFZANPULJZN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FAXQOHTGXDDSZDVBUCRTMETLVTQSPMZOFLNHTWZFKIBMPEYLBXLQJKLTMLVBIJAAW");
    tmp_msg_0.predicate.assign("HWMOYELMGABIIGYTJLUKAYUOXZBUFWAKZQMDZLKBVXNOYTDPXYPZJCMVQPOZYIGXQRIZUCUKBMXVCCHRMXWHSDNGRNSQPJNCXOBVQHMGBQDMCWFKBEQFHYRKAGACPWTDKPGEHXROJHALNIEUFKIZQWCIZSODLJRWMRWRGSBBLYHNUJFOZMXDLJCTEPOPNTGRESFJBVDAEUFTHKELTEDQNWSNETCHDYVO");
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
    msg.setTimeStamp(0.422677641814);
    msg.setSource(15374U);
    msg.setSourceEntity(36U);
    msg.setDestination(42367U);
    msg.setDestinationEntity(38U);
    msg.attr_type = 221U;
    msg.min.assign("HCYBNPSHAAEITQKFBMTLFOXMNQNWETYPOMWUSXLYSQKYISCPJJEJRGVYSDKRMSBAAOBMKIZUZCQECMWSSQMVEAZGXFLHPBINFBQSKRJEXWOXGDHDMGNPLXUJGWMVDQURTEIPRKQJPUIPCYSHHQLRFU");
    msg.max.assign("DJDANPCBEKUSWQRXXFAZRXHQOYVZ");

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
    msg.setTimeStamp(0.146805153303);
    msg.setSource(57718U);
    msg.setSourceEntity(253U);
    msg.setDestination(62938U);
    msg.setDestinationEntity(213U);
    msg.attr_type = 224U;
    msg.min.assign("OWECQOOLCREXPQJYHI");
    msg.max.assign("VBYKZSKONHAOQFDXIHWDYBTWOMHHNCFROYQHRWJHVAZUNIXHCSZBRLYTGMLNBNEAXQRAGWBRIQFGKFJSMUHAXIDZUPPQOAQOHPWVUMZKBMCSZEBNAXMJXYCNKNLZTDVVGHEWKRGDATMEEKRSXTWFAQCPVPOIFYPZ");

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
    msg.setTimeStamp(0.125151016738);
    msg.setSource(19235U);
    msg.setSourceEntity(77U);
    msg.setDestination(7968U);
    msg.setDestinationEntity(167U);
    msg.attr_type = 128U;
    msg.min.assign("LMMLOPUBIHAFIEEKVUDKJZMXNWHRTCAPHQNYWLGFDBMHVCWQNNYSTKWVILTHZMDENPABCTPQBPQZSAHEVXJIZZGMVYRAFOCSNBQFLJCEIOKSXQWWSLURVOBTLADXOTAFSVZGAUJQWRUHYKCPFJZICLRVOLYD");
    msg.max.assign("XSTMJATUBOQMUNFIELHDNXYDRUMGXPOUCYSWOQAULVIBHQVQSWXWXPFDGSVAULZWSMWDXPFJRQRZEJDHKEKFXHREIHEYMVCUSLHALICKBMCLNZPJGGENWHYESIORVOTARDKQRPKEGCINJCSQWPLAWTSKBKSDWYJJZITNYDKVVX");

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
    msg.setTimeStamp(0.562047497553);
    msg.setSource(1384U);
    msg.setSourceEntity(181U);
    msg.setDestination(35734U);
    msg.setDestinationEntity(62U);
    msg.timeline.assign("HBOOXBATHUQKYDLWAOKXYZTSVBMRM");
    msg.predicate.assign("DHULJXKJBAEJSSBYMNXGOYEZRNZUGDOMTASWAFYYXKHEFIKZDOSWAAVKJQPJUGVQZLCJEIIPOIMKDTKINB");

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
    msg.setTimeStamp(0.0436801670809);
    msg.setSource(43449U);
    msg.setSourceEntity(88U);
    msg.setDestination(32734U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("NFIBPMKWIQBKARTDUUNEMRSY");
    msg.predicate.assign("HTYRDMVZKIFEMUSUPKMGKEWPPMYDXZXHKTXFOLNOGZRILWZNLGCQTTWPNIIZKVMHRBAQTORCCEQQEYKORBBNJOQDFZRBCYTDNFAOJUDVVAKLCRTSCAKTGXMFYGMCSPFJEAOHYBWFYLOUDDXESJVPLBDRSRNHQRDEECBSZNITJPAHUMOGVLBPNCYQAIJX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.attr_type = 232U;
    tmp_msg_0.min.assign("YQIZYNOAXBPBRGBCJRFROHVMUELJQDWLKFJMNADEZBKKPSLDVHULKZUWAJVKMXKHGFCCPCOHPQTD");
    tmp_msg_0.max.assign("ILJCYPBNCSZPPUXIECHXVJNMJZHQGOMKQSIMSOXHJSDLYAYQKFOKDGJLGKKXUGDLTFZKTX");
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
    msg.setTimeStamp(0.40097078074);
    msg.setSource(53462U);
    msg.setSourceEntity(41U);
    msg.setDestination(27424U);
    msg.setDestinationEntity(147U);
    msg.timeline.assign("NAHTYDVXBCGTZHWCBSRQUQMHWNIESUEOLFOZNAFRMTURETSFAKXOFHHQBYVRFQPVMFVKWZGGIGYCPZFZEYUGJOJKNLRAWDZBHIXUTXSWPRKMBTNIBJXSIJSFDABXMOWIQQTKUXXOZGJTADGNLBGYBWUWDYSPHITKOHAZCNNVPJHCSJPC");
    msg.predicate.assign("ZZFGICBWITXOSOBRDZDTKLPNYEXECLVXRTYVAGJZBALJLOVIZKQYEGDKIAKESGRAKHNDFOIZBQHWUNUJDTFZHRUJKXMMSCJNAOCCJLPSFXNRTJARATPUDPGVVEQWQVIXGPSVMQSVMDLEOEAPETWRXCUEKNDWCIODBLHJBFRWYPKMYSFUUNRXEPAOCDY");

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
    msg.setTimeStamp(0.990698587312);
    msg.setSource(5341U);
    msg.setSourceEntity(35U);
    msg.setDestination(2383U);
    msg.setDestinationEntity(254U);
    msg.reactor.assign("INFUVYCGVLXEXJFKTYZNPSXRAKFVZVDSBWZUBMOPJMMAJCKLAASXYYNHDPJADUZQOLDEHWCQNGLTVLVHPXDDGMFZLBJWMMPSSGYEIBCVRURWEWMFQYACZFUNGUBEJQRSRHBDTOLQBFUXAYCPIRMOQOXKRDJJRWYCJHBQIPIQAFGGXPFHHTNVENCOBTP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CWMHRDBFDYGIIVWSIEZVHHQYJXSLEUKVBMHJAKQECVKCMLGWJWLWGIDTRRWYFTOBSTJMPJTGKZYUEQQLOPRAPPQNTPHNEQSVXQVZQOMZONFSYKRNNZKIEGETABGNIDAWDLWCAROASLXIXJBDYXVATGMSTFUPMDZZDVUKAGREBJOALGXIUOEVITZ");
    tmp_msg_0.predicate.assign("QUBEEBMJUTVHNNAKRYCYNOUZQLQPZUTHZHVGDTEISBAHYVZBCIEXKX");
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
    msg.setTimeStamp(0.770227854207);
    msg.setSource(38743U);
    msg.setSourceEntity(128U);
    msg.setDestination(49155U);
    msg.setDestinationEntity(199U);
    msg.reactor.assign("BMOBDTJMKEXZPYXILEVAVTBHDLJGDJNEAKJGTIHHBICEZMJPOJKXIJOBHADZFLJSHSFQCBWVFOLSKGKUNFTPSNOXMQRXSAUELTYBGCILSIERDXHFNGEAWJRQXCNHKVLACXRDSNQIMKGFUIBCPEYBMDWSWGZSYMKNYFEVYACVDUATQPTGTFPEAMQUOZYPOZWCDIZRFXFVPYHVKJSWCWLQWHRVXYC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BYJNTTXOEKVOTGIGMLNUQXVPXLBLUQIWHOZYDARZKAOIZRHCYTPPANKPDMTBQHINASUKMEIGYGOEBCGWMWDOJKTGZXJCGRMISFBMVEBHSMBIC");
    tmp_msg_0.predicate.assign("LGKFGQYMFUABAUZHTJHDNHJLGBMONXLYAWMXIOQUGJEGZIQWPTDONPKZJQTEVLWHIWWOYRRVYSIZARHDWELXBEQKIQUTMRJCQCXPYIXTVRBYICNUCULNHCGPJBCPKZGOKHVWKJDXFTDBQESTJTLZUVRFXSADORUSFWMLPUNFCWGABZSSYK");
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
    msg.setTimeStamp(0.0478446145569);
    msg.setSource(3324U);
    msg.setSourceEntity(122U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(90U);
    msg.reactor.assign("TRUKIZVQEGZAKSLOXDEKINOBFVYQUDEMQZIQPSSNGBFGGHBLYJUSAIIPVTBHKASAPRTWCOVTVWRHFCAFHLDWRYFXCTFIWMTXWEVXDOTZAQJEUQLGKOXDAEGEZGZYTWAJPVYQVAWRMDKNNFMUZTUOSDIDPMIJOUCYQSZJLQI");

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
    msg.setTimeStamp(0.460893293978);
    msg.setSource(782U);
    msg.setSourceEntity(104U);
    msg.setDestination(50310U);
    msg.setDestinationEntity(136U);
    msg.id = 6U;
    msg.width = 56519U;
    msg.height = 31500U;
    msg.widthstep = 8545U;
    msg.channels = 120U;
    msg.depth = 219U;
    msg.finaldata = 153U;
    const char tmp_msg_0[] = {43, -124, 0, -102, 10, 21, -92, 104, 82, 100, -39, -4, 18, 96, 53, -3, -111, -80, 2, 108, -64, -109, 19, -80, 100, -90, 61, -76, 39, -63, -97, 126, 1, -98, -16, -38, 14, -56, 88, -70, 49, 35, 37, -14, -66, 3, -90, -59, -104, -19, -59, 46, 89, -55, 107, 96, 7, -110, -90, -48, -101, -34, 40, -63, -9, -90, 57, 61, 10, -97, -127, -116, 20, 46, 117, -52, -3, 44, 97, 112, 106, 0, -75, 69, 125, 69, 104, 108, 57, 9, 4, -63, -5, -63, 43, -28, -42, -69, 98, -81, -50, 81, -82, -24, 102, -94, -71, -23, 110, 56, -25, 56, -56, -125, -106, -28, -52, 41, -53, -41, 119, 3, -110, 27, 19, 102, 119, -122, -23, -56, 109, -79, -46, -88, -102, -120, -12, -5, -101, -114, 72, 98, -38, -25, -13, 46, -107, 97, 31, -79, -28, -110, 55, 19, 7, 55, -128, 95, 18, -121, 59, 55, -86, -126, -116, 89, 25, 6, -46, -84, 112, 55, -43, -95, -9, -36, -112, 20, 16, 49, 48, 72, 0, -106, 94, -69, -72, -97, -9, 18, -87, -59, -34, -47, -80, 115, 88, -110, 56, 31, 72, -2, -53, 43, -106, 3, -84, -32, -15, 104, -122, -68, -53, 72};
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
    msg.setTimeStamp(0.71073765124);
    msg.setSource(7572U);
    msg.setSourceEntity(38U);
    msg.setDestination(55509U);
    msg.setDestinationEntity(144U);
    msg.id = 117U;
    msg.width = 62037U;
    msg.height = 65226U;
    msg.widthstep = 51769U;
    msg.channels = 114U;
    msg.depth = 5U;
    msg.finaldata = 66U;
    const char tmp_msg_0[] = {112, -126, 37, -47, 63, -62, 38, -103, 48, -25, -53, -108, 48, -28, -84, -60, 124, -60, 107, 121, 93, -65, -83, 63, 24, 84, 85, -38, -102, -34, 69, -2, 29, -52, -32, 82, 75, -39, 90, -93, 90, -48, 118, 38, 121, -12, 52, 116, 30, 110, -70, -13, 43, -44, -47, 39, -101, -14, 79, -47, 71, 86, -14, -109, 75, -102, -110, -40, -26, -86, -54, -55, 11, -54, -52, -127, -74, -95, -12, 82, 101, -57, -106, -113, 107, -28, -40, -102, -1, -27, -96, -128, 29, -58, -77, 60, 22, 120, -86, 68, -19, 122, 36, -91, -20, -46, 46, 1, -103, -52, -3, 54, -44, 58, 55, -47, -13, -33, 120, 48, -72, 115, 17, -60, -2, -81, 20, -59, -114, -75, 22, 120, -128, -115, -19, 34};
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
    msg.setTimeStamp(0.0437036040762);
    msg.setSource(49006U);
    msg.setSourceEntity(8U);
    msg.setDestination(706U);
    msg.setDestinationEntity(209U);
    msg.id = 2U;
    msg.width = 46960U;
    msg.height = 14860U;
    msg.widthstep = 64691U;
    msg.channels = 196U;
    msg.depth = 42U;
    msg.finaldata = 228U;
    const char tmp_msg_0[] = {-120, 103, -64, 40, -39, -58, -67, -119, -35, -112, 62, 93, 81, 122, -2, -26, -40, 9, 13, 62, -51, -21, 21, -80, 92, 64, -2, 80, -32, 44, -30, -14, -16, -78, -9, 41, 69, 56, -118, 27, -127, 58, 7, 88, 95, 116, 50, 31, 35, 3, 10, -67, -45, -28, 14, -18, 88, -14, 37, 12, 5, 38, 60, 82, -69, -6, -1, -48, -44, -43, 79, -38, -54, 32, 80, 110, -28, 61, 116, 28, 29, 30, 108, -77, 38, 67, -89, 102, -21, -123, -29, -45, 104, 74, 58, 115, 28, -24, -117, 97, 72, -109, -2, -39, 23, 116, -35, 110, 52, -86, 85, -27, -71, -56, -49, -118, -38, -29, -16, -38, 107, 5, 100, -76};
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
    msg.setTimeStamp(0.00651969221779);
    msg.setSource(18166U);
    msg.setSourceEntity(177U);
    msg.setDestination(35946U);
    msg.setDestinationEntity(249U);
    msg.width = 43433U;
    msg.height = 61158U;
    msg.channels = 107U;
    msg.depth = 115U;
    const char tmp_msg_0[] = {-67, -35, 32, 35, -66, -65, -91, -87, 0, -126, -32, -22, -99, 73, -55, 2, -52, 97, 86, -106, -78, 120, -90, -41, 100, -97};
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
    msg.setTimeStamp(0.0562553481596);
    msg.setSource(35519U);
    msg.setSourceEntity(80U);
    msg.setDestination(18541U);
    msg.setDestinationEntity(105U);
    msg.width = 62020U;
    msg.height = 25676U;
    msg.channels = 61U;
    msg.depth = 41U;
    const char tmp_msg_0[] = {33, 118, 64, -31, -115, 86, 125, 13, 98, -84, 50, 52, 45, 61, -127, 102, -73, 123, 77, 52, -11, 73, 98, 44, 40, 51, -53, 90, -78, -37, 39, 110, -33, 80, -53, 91, -120, -21, 44, 57, 42, -86, 97, -44, -56, 52, 120, 107, -35, 123, -45, -10, -2, 2, -103, 42, 120, 118, -49, 91, -112, -116, 38, -67, 26, 109, 59, -108, 118, -33, -72, -121, 15, -66, 61, -103, -6, -61, -88, -58, 67, -124, -63, 116, -128, -12, 6, 35, 120, 104, -7, 50, 38, 67, 50, 44, 97, 87, 20, -6, 47, 111, -77, -113, 97, 55, -37, -97, -76, 98, -67, 53, 48, -16, -118, -92, -22, 76, 90, 55, -18, 124, -80, 71, -100, -48, -64, -77, 69, 43, 102, -110, -36, 45, 3, -43, 119, -74, 6, -100, -96, 26, -83, 108, 126, 89, 95, -81, 66, -61, -53, 117, -59, 100, 63, -6, -46, 57, -17};
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
    msg.setTimeStamp(0.011293884259);
    msg.setSource(37730U);
    msg.setSourceEntity(82U);
    msg.setDestination(62632U);
    msg.setDestinationEntity(244U);
    msg.width = 7780U;
    msg.height = 44778U;
    msg.channels = 207U;
    msg.depth = 144U;
    const char tmp_msg_0[] = {90, 29, 80, -53, -6, -46, 90, -62, 16, -54, -27, 82, -44, -107, -73, -52, 88, 107, -90, -18, -88, 88, -121, 45, -12, -20, 33, -28, 32, 92, -30, -116, -61, 85, -65, -24, 11, -14, 33, 64, -67, -89, -21, 34, 64, -53, 2, -17, -1, 60, -127, -116, 86, 28, 88, -44, 65, 28, -68, 0, -26, -1, 101, 1, 36, -30, 35, -38, 6, 26, -83, -38, 31, -128, -64, -41, 28, 27, 72, -77, -17, 15, 93, 108, -46, -32, 109, 57, 2, 19, -36, -9, 99, -117, 69, -45, -54, 26, 37, -42, 66, 54, 105, -74, -88, 16, -100, 57, -106, -25, 25, -1, 7, 44, 124, 81, -35, -65, 63, 30, -112, -29, 88, 58, -106, -40, 84, 119, -31, -37, -20, -43, 9, 21, 55, -76, -122, -19, -17, 106, -118, -57, 112, 115, -38, 90, 66, -76, -21, -112, -80, 64, 98, -107, -2, -105, 107, -15, -82, -4, -20, -109, 109, 119, -105, 114, 99, 89, 105, 98, -4, 20, 36, 47, -38, 71, -17, 80, -24, 43, 62, 102, 42, -24, -84, 53, -91, 117, -17, 113, -86, -5, 28, 120, -92, -37, 96, 24, 113, -116, -26, -35};
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
    msg.setTimeStamp(0.662227102075);
    msg.setSource(32371U);
    msg.setSourceEntity(176U);
    msg.setDestination(38993U);
    msg.setDestinationEntity(194U);
    msg.frameid = 63U;
    const char tmp_msg_0[] = {25, 18, -24, -90, -118, 59, 104, 100, -18, -30, 81, 55, -10, 34, 117, 103, 32, 111, -122, 94, -79, -108, -26, -6, -59, 39, -34, -63, 5, -44, 77, -120, 119, -88, 46, 118, -113, 48, 33, -28, 38, -53, -8, -48, 69, 61, 72, 72, 18, -33, 108, -74, -94, 63, -4, 27, -87, 20, 23, -59, 39, 0, 58, -40, 36, -30, 72, 28, -50, -18, -20, 101, -34, -28, -35, -116, 35, 47, 80, -49, -123, -92, -64, 26, 109, -115, -38, -108, 52, 98, 18, 51, -63, 18, -52, -76, 35, 2, -62, -43, -38, -1, 102, 3, -17, -77, -115, 117, 8, 69, 100, 23, -80, 44, -65, -94, 9, 47, 94, 17, 126, 66, 126, 109, 125, 103, -36, -101, -90, 64, 110, 108, 72, -84, -16, -18, 25, -105, 54, 88, -122, -90, -71, -41, 45, -26, -86, -16, -103, 102, 115, 69, -50, -29, -111, -82, -110, -83, 52, 90, 49, 74, -60, -101, 52, -72, 56, -61, -80, -6, -114, 86, -73, 30, 69, -16, -46, -124, -13, -103, 31, -95, 73, 45, 101, -6, 83, -56, 125};
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
    msg.setTimeStamp(0.24891849153);
    msg.setSource(61368U);
    msg.setSourceEntity(228U);
    msg.setDestination(45749U);
    msg.setDestinationEntity(16U);
    msg.frameid = 71U;
    const char tmp_msg_0[] = {-73, -112, -34, -74, 34, 92, 30, -42, -122, -99, 53, 111, 48, -118, -79, -102, -119, 84, 51, -98, -12, 60, 57, -34, 117, 89, -114, -58, 82, -101, 69, -85, -124, -44, 72, 118, 97, -118, 56, -77, -9, 100, -44, -40, -39, -106, 89, 126, -123, 119, -108, -27, -42, 49, 16, -89, -2, -49, -50, -121, 122, -86, 17, -57, 33, -76, -97, 73, -45, -118, 53, 58, 29, 123, -17, 55, 58, 3, -68, -88, -55, 0, 50, -35, -24, 49, -66, -103, -98, 85, 16, 73, -123, 101, -62, 96, 25, -8, 18, -10, -25, 66, -15, -66, -18, -11, -29, -111, -72, -93, 77, 79, -94, 72, -93, -97, 17, -67, -3, -43, 59, -108, 8, -103, -69, -101, 119, -93, 3, -74, 99, -43, 108, 54, 113, -79, 68, 52, -115, -101, -77, 51, -16, -77, 24, 102, -103, 65, 60, 75, 60, -49, -88, -74, 66, -4, 31, -82, 112, 111, 54, 72, 81, 47, 74, 36, 23, -90};
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
    msg.setTimeStamp(0.725688076576);
    msg.setSource(12767U);
    msg.setSourceEntity(137U);
    msg.setDestination(9300U);
    msg.setDestinationEntity(153U);
    msg.frameid = 182U;
    const char tmp_msg_0[] = {-17, -84, -53, -4, -21, -127, 42, 10, -90, 86, 113, -46, 43, -118, 110, -23, 77, -99, 17, -128, 125, -90, -26, 50, -106, -7, -81, -6, -79, -59, -82, 21, 79, 9, 112, -68, -44, 61, -54, 119, 75, 54, -62, -45, 6, 5, 9, -108, 10, 106, 51, 117, 49, 47, -53, 53, 41, 54, 95, -81, -43, 16, -45, -67, -4, -77, -48, 47, 77, 59, 6, -95, -108, 78, -98, -93, -81, 69, 34, 34, 95, -126, 7, -12, -124, 84, 45, -107, -74, -48, 98, 97, 42, -101, 35, -17, 102, 17, 73, 76, 110, -83, 15, 107, 70, 93, 93, 2, 13, 105, 104, 34, 6, -25, 28, 104, 26, 39, -55, 96, 113, 89, 69, 98, -111, -122, -43, -21, 7, -9, -50, 85, 17, -117, -105, 118, -119, 53, -61, -80, 33};
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
    msg.setTimeStamp(0.637585237846);
    msg.setSource(22025U);
    msg.setSourceEntity(205U);
    msg.setDestination(23087U);
    msg.setDestinationEntity(195U);
    msg.fps = 73U;
    msg.quality = 160U;
    msg.reps = 76U;
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
    msg.setTimeStamp(0.417926023548);
    msg.setSource(10132U);
    msg.setSourceEntity(232U);
    msg.setDestination(47663U);
    msg.setDestinationEntity(168U);
    msg.fps = 235U;
    msg.quality = 168U;
    msg.reps = 72U;
    msg.tsize = 188U;

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
    msg.setTimeStamp(0.325931528433);
    msg.setSource(33406U);
    msg.setSourceEntity(101U);
    msg.setDestination(29518U);
    msg.setDestinationEntity(220U);
    msg.fps = 160U;
    msg.quality = 18U;
    msg.reps = 79U;
    msg.tsize = 3U;

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
    msg.setTimeStamp(0.698938251242);
    msg.setSource(21343U);
    msg.setSourceEntity(97U);
    msg.setDestination(51455U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.0873025334102;
    msg.lon = 0.927311887801;
    msg.depth = 194U;
    msg.speed = 0.946535084718;
    msg.psi = 0.916576585404;

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
    msg.setTimeStamp(0.915233874756);
    msg.setSource(37129U);
    msg.setSourceEntity(138U);
    msg.setDestination(4177U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.6830978228;
    msg.lon = 0.960191079944;
    msg.depth = 253U;
    msg.speed = 0.476149901863;
    msg.psi = 0.75984699486;

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
    msg.setTimeStamp(0.707849635222);
    msg.setSource(58468U);
    msg.setSourceEntity(87U);
    msg.setDestination(65259U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.686208276639;
    msg.lon = 0.22306136792;
    msg.depth = 101U;
    msg.speed = 0.915112872889;
    msg.psi = 0.871146482399;

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
    msg.setTimeStamp(0.407097072449);
    msg.setSource(3267U);
    msg.setSourceEntity(12U);
    msg.setDestination(19587U);
    msg.setDestinationEntity(248U);
    msg.label.assign("CXFPITHMKHMUTVEFGUXORINYPVAAOABBDSSBSUVOIYKHNYRVQCNBHQD");
    msg.lat = 0.808081113122;
    msg.lon = 0.282204978303;
    msg.z = 0.191907998121;
    msg.z_units = 77U;
    msg.cog = 0.904477040609;
    msg.sog = 0.757187597767;

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
    msg.setTimeStamp(0.395977625378);
    msg.setSource(16470U);
    msg.setSourceEntity(241U);
    msg.setDestination(56699U);
    msg.setDestinationEntity(222U);
    msg.label.assign("IKTEMHUZCVOGGJHDRGJJMPGMWVCWQJLKHSHACAQIZQWXPUZMAASGWSTOKCBRQRBKZXTFMTDBKZQPTPYGZARDNBKAJJDDPVCOINWLPYGSCIFBXFRTDFRTOXJFZYSXJJHPXYFVOLHNLEQMEEBEFWQFQICXLIPIEAOXMNXLUMMUHFSDKUKGWHTOLJUESOVIYHOYSDDLQOWGBPPRXUZBYWCNMWVURFVAVDBZHULNVSNGCABSURQETYTLZKYNVERYKC");
    msg.lat = 0.316572651725;
    msg.lon = 0.733814059953;
    msg.z = 0.368926495299;
    msg.z_units = 137U;
    msg.cog = 0.272081255445;
    msg.sog = 0.669418486941;

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
    msg.setTimeStamp(0.805522712407);
    msg.setSource(20074U);
    msg.setSourceEntity(133U);
    msg.setDestination(17853U);
    msg.setDestinationEntity(27U);
    msg.label.assign("OTXUSXZOVQAYFARDFUREMHJKQTUNEBZXIXLXAGLEQAIFRIDGRQLEIQJXSBWJBPNYMVNDYBQWYORFOIMJODTYCAWKSBOHMLDWMCSRXMPHTIYWJSIMCXZUDLHABEACODUPICTLOUYHWCZVECJHKTWSUGPFNPMRWIZQCWHLPYEKSNLPSKJDKSFEAKSLZYBGFVZHVHKNTVCGMVPNTGLTZF");
    msg.lat = 0.816743045289;
    msg.lon = 0.989580342057;
    msg.z = 0.26735474806;
    msg.z_units = 189U;
    msg.cog = 0.322248866403;
    msg.sog = 0.00318285953072;

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
    msg.setTimeStamp(0.428602156162);
    msg.setSource(37898U);
    msg.setSourceEntity(249U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(230U);
    msg.name.assign("KIUIXBQZZILJLMOCFHLPTMEOEJCAGHPCAJRAZDWLQGQJTOKVBRTZHYN");
    msg.value.assign("RAQCCBBETULCKASTLCQMSHWABROFMXEJZAIOGRGYFHURAFOEHMVYPSXELVYOPGVPYQQOFQLHKHDOOFGUVCSUJLJPDASDEYFIDJMHQEZTCIKGUYPNWWNVRXKYGBDTDLNZWSXVERRZABEAEZIEUWNUTPKWPGDBOZVVSDLJCAJKDYHMQFQPXVMRWJNWXIJTXDXBPLWSMZXQIAYZGHTUYR");

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
    msg.setTimeStamp(0.4564570632);
    msg.setSource(35784U);
    msg.setSourceEntity(105U);
    msg.setDestination(18223U);
    msg.setDestinationEntity(53U);
    msg.name.assign("JMWKVOWKTPIDRZCWJLDLYMSTERXEMNBHUXFFLMPMKSTSZWCJYTIQYXFUHDZKQABGGILVGXTTIFWAFCZGODOPGKP");
    msg.value.assign("BCBAQONZOSCLKLFBFXMGCKGQEVWZKDOOZEZLYSTLWZEQLRDRJWUZCMXOFUFGVAJMCIZUAMWFGUVSYJQINYYPRBUZSRTDYDSHKGJXMNISAEQTOTLAILQRHNFAKHHOBOEYPMPRZVNUJFMLOKCUEAUHTIDRIHXYDXVWTYUYVWPRWMPHSTBAIJKWHENNEECQGPDOVCJVPVGPNNSXDWCMZRNBBIXBBU");

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
    msg.setTimeStamp(0.587124803108);
    msg.setSource(26940U);
    msg.setSourceEntity(238U);
    msg.setDestination(19210U);
    msg.setDestinationEntity(211U);
    msg.name.assign("GGZQJLTWDMEKFXOAGTJSJBRPDEHVPJCTOBUXLHQDXPWTEYT");
    msg.value.assign("CLYSFQIZPGVHQQUQSNWNOMVITAWHXDHNWPYWAATCRBJHWYIXTAVEZAKFFYTKYFLCOGXJUZUXLBCKRJUWDBIOKQBZVBFLIRHPXISRZCNUJZTAXGMNWSRRLFWBIXQEMDDLTPPMCZXEOVZUJUMKGOHCNFGMKMFBRSYSBQEXODYKVTJTBQSAFJDVVHAUEBPCIJZOUNHEYIAVOQAPMLELDWSXENKMCEHRLRDNYGFPOHGDTUPDSSZGOJTJGYR");

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
    msg.setTimeStamp(0.634494556298);
    msg.setSource(8913U);
    msg.setSourceEntity(162U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(197U);
    msg.name.assign("HNLRSEVCYMAMHZRJFDCFJXYJAZPUMHDTPCRZOJWFBYOPQAYMNWUFLYTDTGFIHCLOLJRYAUHINVVKSTBSXIBG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FQYCDNCEYNAWVDGIREWUPKEFIBAKTBZUYDYIRHEUSXGXUGTYKDFBSFXDAIWYFLSMVIKJONQXHRTXIVSLQTQWFETSNJPQXMZXRJWDIVKAXRMW");
    tmp_msg_0.value.assign("UKTLHNXWYQHZHQZKFCOGAGEJZWFPQHKUXNYNBBFNGIIUMDNHQNDUTPCUJGOMKJQDSDDQTZKWCGNOAQCIOBPYSHFVHRSQTCVPI");
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
    msg.setTimeStamp(0.0537903120996);
    msg.setSource(19425U);
    msg.setSourceEntity(185U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(144U);
    msg.name.assign("GSKNAJJYZDPFKXBUBJQLTLVSVQNRBNIQJIVCQYKWPQCTXZDSHRPLCNICLLNHOZRYMFOMYRSTAUJCJISYTFJHAVRWRYSECIZBZQKMHULNDOXFNKPJDHEOBFIUJFLQHESDQWAXUQTEGVIPSRM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AXBTLUVDURLYAFTPWSGCTOCPWEHYCUSXJTNMOXIVZWDAJQUQVRRYJLHGZAXRFKBDVYPSIIRKUJOWISGBUGRJLAMSMWDDEZVOKJYHWXNBJQMPSAMCUXCYMNZTFLLBKADVHOGPZLWDEMYCELXNXKBIEUZEVIISRTCEHBHTPFWMQNCENUVFOQQKNEMPYCGZKKNDZGYTBHVRGHSKBZQADTFV");
    tmp_msg_0.value.assign("YJLUOCVZDMOMYQVBCSGNVJARWTISVXAIXNKUKPRGJWHHSKMKGHRFCEXYRVVFZYZNKUZQKQZNUOA");
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
    msg.setTimeStamp(0.312089071434);
    msg.setSource(18574U);
    msg.setSourceEntity(49U);
    msg.setDestination(46573U);
    msg.setDestinationEntity(180U);
    msg.name.assign("WXGSQLBYHETVBMZLGNYKDFPPJCXFQPKEUELMWWDOIBCSVEQWQFJUZGLTYBXZLPEZIPATGRRYDUTFHQHDYOHRJPUDTZNZAEJWFJXLYVMAMEJPXXFFUYSLPBPLRCBNMVWJJBAIDQAVSHNRTVCMKYCOUANTZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ANSDIDFMZQSITXZEKFVTNLZOFOESGORKGIFOJPMLRDRPDZJVYIRDQHAUWPFMMSVOZXQSTTICVXWTYRKHQAUFMSBVELYCHKNPZHQGLJWODXCIUBGGIRBAAULBTNGPURLSBERYCMPEBKHEIACYFHGSHICPNOJETUNKBDAYINOXZCBWWQXUSRWWFYCVVQQJMMETHRJZBFWLOGV");
    tmp_msg_0.value.assign("YHNGKOWKMRYZZSWPSCRHUNJOPTBJFMFZAOBQJVULAJSWFLKWGJCRAXSNGPP");
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
    msg.setTimeStamp(0.175873573709);
    msg.setSource(36618U);
    msg.setSourceEntity(42U);
    msg.setDestination(45822U);
    msg.setDestinationEntity(65U);
    msg.name.assign("BYSOVDUJXKHJLNEHFPTIXTJDZZNQGJUFEGKCLJJGVLHNUYLZRUPHBCGEQEVTWMKOYTNFSPKZJIAZCRKDNOWLRPLHKANFTIMSYWVVOUAGLHDEVIMZNCJNMEQZCBRKDCICZUEKBEEYMJGQSGQFGVLQMYWTFCXUOVVFXBMUDYBIHWOBAFIOKS");
    msg.visibility.assign("QTUJUFWJWCODFLGXQYLBNPVAZRWNQUULCIFHRMPBAIGGAIOISTJOCZBJWALKACWVJOGGDVCELBKUCBNI");
    msg.scope.assign("UEWFMXGWMETEWQQYRMPDMUSHLZZIIPQIMYVIPVAHWNHDNVXIAXHHVFGGAJEZDJSKTFDGBVAOFXJGISNSLBVNDGRNCXRUXOBZBE");

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
    msg.setTimeStamp(0.515046415493);
    msg.setSource(59522U);
    msg.setSourceEntity(191U);
    msg.setDestination(3129U);
    msg.setDestinationEntity(13U);
    msg.name.assign("SCMBYVCMBLAJKFKAAUHZSPXKZRZBCUKSCUANUOCUIXDGVWSWKIJVYVLFGOUUTXGQRYGPIWHKMEMTHOIOOBWHHLIJAVTLEBRVEDYZOFGSREOIZYNFKRZBQIRETBJVGWYDRQPQTPPWNIXTMXWXDMMAULZMOLXDEUFKGHVDWSNNAYLFQBCIESVDQTENJEFQLPEYWNRAHJSXOCRCTJNULHPLRMJJCHFQXWZNZ");
    msg.visibility.assign("QGTESITLWXMCHCYPBXVFXNQUEGMNFXNPVYMIUARMAWEBGFDEQLYZOAMDBQNOBDKJCWIKLVDVIITSLJUOTQLVWWZCAVPTXUQRSBLZYGRZCRORHFJPUOHVROSDZYYATPCLFKBTLRDWNCBMQMZDXFDEXFIKHSRXTHHJXDGVGXNPUUZBAZIBGHYIEWNUHOWCPDJKMKYOZVWSSBQUPKTMNLRSOJCEJYACKINEEPMJGLJ");
    msg.scope.assign("CJDKZADXSAWXTKTBXPOSQHRPBTDLSSELKMVTIPZJUQJEUGAAQAGWICUKUHQVUVBNMOXCVTNRCNVVFHJGIIHFATHFGACXYJOCHNGONGUYDUHSWPZHZRRNJSKFJJEFQLZFFEJZWYLGPICRUOEQDEWYBABMRQELNCPANBYOVZYITEHMS");

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
    msg.setTimeStamp(0.716006192198);
    msg.setSource(40202U);
    msg.setSourceEntity(185U);
    msg.setDestination(1493U);
    msg.setDestinationEntity(246U);
    msg.name.assign("FEZKKDYEWECVSDAGISXFPNDUNHOYACTEKRYTLSXUBQWUHZUSCXJZLZWHQSLSEFSUZGMMBVWYIMKIGIITQHWJSNZHNJRAUUGRVCGBCYLBYTQLODHFOYWAJISEGENOFOQMHTJRQLNTLNPAMRYEMDPEUQVZVLJYRDZIQXUCNWYBFDFWHMVVPCIOZLA");
    msg.visibility.assign("CGABEFLSBYVQPNDANHMLNRTQHKZRAIROYMXLQZGGEDEWIRMHNWYVAOTSWKDXXDBOHRCUUXDGPPIVOEOKHJUJQLTIYPIGEMUZQCZJOFFQLSWTBVXBKSCXFAHKXPAFYZFCXVEVUJLUISUVDWHRNTEHMJQJKZMYTBPHWJAGATROFAZDWYQRBCCVYTPCYJPNOKNZZPMNXTDKRLSOCEBMIWFQKKAEWYHUGRSFJFLJDEXPBVGVSCTWGI");
    msg.scope.assign("GQUNSWIOZQHANDHSGFUSXKGJOTKMNEHCTZUZNSVBPPLRYQEWJLLYDKTEXHQUGWMCYVIXTJFKBXVSLWKSUESOTDGONEIWMCJP");

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
    msg.setTimeStamp(0.205353513668);
    msg.setSource(34859U);
    msg.setSourceEntity(22U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(114U);
    msg.name.assign("LRBCFHNXWJFAZWCHHRCZGWONDRTUFTESANQCZXYDJTZWMRGEYWIJDVSIXZQKAEHJCXKCIXTATQFNGLBEGJYLLIUUMSBK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TVLSPJPBVXOZGZSDSQERQKCMKFBVEWYPXZFZABEMWDXVUHEFYMVUSRBDDJGNJHDSRGYSZJTKGMFBBYQIZXNFRLOAWCSVIQLAMD");
    tmp_msg_0.value.assign("KPSNDKNBCMLHDCBDEBYLOYFLHWFQJCIRAJTYJHQWXHNOSZARYDPCXSNBIHTZHCXANFYBYGGMBSFEJNDVOPOEEAIXRTAUHNJDKIBYXRXKFZZWSXWUFWRQLQOFGMKGMWJTSXSFJMZLHWELUWJNDCYUMEPQIVVRRWUFQHWOJKBPZGPVCJPQASMZLXSYDVQQEUYOPUXKVNPCAMRDGILZVGITGUUIKCETOVUOZRTAE");
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
    msg.setTimeStamp(0.35909328896);
    msg.setSource(34842U);
    msg.setSourceEntity(94U);
    msg.setDestination(2924U);
    msg.setDestinationEntity(201U);
    msg.name.assign("ELWUMGDCTXREUKFLCMFFNXJZJSGSLIMADSLHNWKIPOJUSETHVEVAESBRNKUWKLNOBECGIDGPXNRRAUSIPJBTUXWGLGUOIVCBVNADAMFHGKWRJPUYPTTTJZOTFHMEZZQSDGVBWHOYUYTJIDPONPSTKCH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OVHDGGCDNCWNVMICPITUFUSMLACZPJSEKMTHUBSWOEDJDJLCAAPL");
    tmp_msg_0.value.assign("QENRTKVVNNXAHVPRISGRBMXOQSHNDYLCCHPOKMBXYDZJQGNBZZXXIKVUWOLDWMFBMFMI");
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
    msg.setTimeStamp(0.621491193179);
    msg.setSource(16367U);
    msg.setSourceEntity(167U);
    msg.setDestination(37901U);
    msg.setDestinationEntity(130U);
    msg.name.assign("MQEYDESRDXSLAVLDPMXJEALGZZKZPJGGQACJUWDRWIRPZSTUNWSABVURAXZHEMZMKPHKAHWSELWPBHIOXGFWCBW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WPQAANSHWFNWGAJVLAPZQLVKYUPHBXJECDSQGOVMQRTTVBACQLRWWLSFZYHZGEERIEDMBWSKOHUSOZVDDTXTHORDIACQKRDINLYUPNPRPBJFUKUZFXGYJNOEZVQNRPICQOACWUSGQLEFKBZ");
    tmp_msg_0.value.assign("LAARDEFEBPUOLXSFPCRUVRFKYAKDWINXQMNCLVMDTZSPWINZRWEJYSJDGQLWSDFOLZBMXYFOQKWBWVQVZFEVOVJVQSKUEHRDYZIVOLARUQJBWPIZMGXSPXHFCXAJBNTSYATXDOHCCPPZBGHIRHCKRHJECQUZECIGBMTZMPHYWMQTIFMJNJGNEVBOUOPWTNPHKZCLMEYGXKQGADYUGKLSFKIYRSVJLCTWUKBBUTASFXQ");
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
    msg.setTimeStamp(0.313624562811);
    msg.setSource(34677U);
    msg.setSourceEntity(24U);
    msg.setDestination(40653U);
    msg.setDestinationEntity(128U);
    msg.name.assign("ZDZBEJXWVUWIENDDKAMKYJYYRHBEZJZEMJHGKVMOSVAULWGRSFQHAIDBFPLQTKYJYZIXTMRGNRCLNLDZLZFZTQKRUFCCFOXKWTYJOLMLCTYERBAHXUSPQBERXRMJPFPTXUWEROV");

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
    msg.setTimeStamp(0.0800610905278);
    msg.setSource(21007U);
    msg.setSourceEntity(78U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(140U);
    msg.name.assign("QENTGVMCYXJCVLUCTKFAURALJYOVNBQFHHNCMTSG");

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
    msg.setTimeStamp(0.189838031471);
    msg.setSource(34185U);
    msg.setSourceEntity(181U);
    msg.setDestination(39401U);
    msg.setDestinationEntity(191U);
    msg.name.assign("EHTTCJNKQKLVXZGSFUHVLYZRYSOYUDWJPTB");

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
    msg.setTimeStamp(0.500112851996);
    msg.setSource(46070U);
    msg.setSourceEntity(199U);
    msg.setDestination(20612U);
    msg.setDestinationEntity(136U);
    msg.timeout = 3621798316U;

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
    msg.setTimeStamp(0.667745061897);
    msg.setSource(54830U);
    msg.setSourceEntity(133U);
    msg.setDestination(57444U);
    msg.setDestinationEntity(203U);
    msg.timeout = 2398391855U;

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
    msg.setTimeStamp(0.339425795255);
    msg.setSource(42732U);
    msg.setSourceEntity(246U);
    msg.setDestination(59271U);
    msg.setDestinationEntity(53U);
    msg.timeout = 757454385U;

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
    msg.setTimeStamp(0.518058853769);
    msg.setSource(58917U);
    msg.setSourceEntity(146U);
    msg.setDestination(50383U);
    msg.setDestinationEntity(246U);
    msg.sessid = 2156897660U;

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
    msg.setTimeStamp(0.944394122767);
    msg.setSource(58801U);
    msg.setSourceEntity(13U);
    msg.setDestination(31250U);
    msg.setDestinationEntity(224U);
    msg.sessid = 2004375025U;

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
    msg.setTimeStamp(0.216876223673);
    msg.setSource(55606U);
    msg.setSourceEntity(147U);
    msg.setDestination(42630U);
    msg.setDestinationEntity(168U);
    msg.sessid = 4079356738U;

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
    msg.setTimeStamp(0.373658308371);
    msg.setSource(54871U);
    msg.setSourceEntity(210U);
    msg.setDestination(36788U);
    msg.setDestinationEntity(0U);
    msg.sessid = 809986579U;
    msg.messages.assign("GYZOYUSSIHEJPGTDASAQFNMOWFKXGGSOUTEEVIVMDPQNCOTAMUEDBRPNAXWWRPUDKBMQCFLTDZBPKYVTMEKAXRJQOFKLZELHJDRZCFZZHBAYSJRVUMNKGXFOMCBYNIVQXLPURVFIFSRCZOITUQ");

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
    msg.setTimeStamp(0.226015902524);
    msg.setSource(15520U);
    msg.setSourceEntity(92U);
    msg.setDestination(38132U);
    msg.setDestinationEntity(197U);
    msg.sessid = 1770483617U;
    msg.messages.assign("YGCFAWKTLXNLPCHGXMRLUSSTVFRYEQACZGJUNWOWBTPHFRKCBZIHQFTYHQWEWTFIQDQEBKOLLQLBNVBPSJXSIWIDGZKUACEOECBWZLDMUJVSSQYYMDNPKBGIMJYVDFYEAWIMTPDKFDNJAXXZ");

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
    msg.setTimeStamp(0.123777129941);
    msg.setSource(62686U);
    msg.setSourceEntity(185U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(65U);
    msg.sessid = 2499924956U;
    msg.messages.assign("OSDNUXVMLSNJKINDRTIERTTQRADQEQUWYPZRSAJYGIGRQGJOLVDALXMASMFPNTBVZHUTLXZOOPAZDWERYJSKILOFYNXCNYWATYWUJVHVJMZWEQENRXDKSKPRCGHRBPLIMKWJXEZKZWGCWVPCGOYJPHULBPBNFJMANZYUSWQDKTIACHEUQMFSQCVFBIVKMBZHCBXIXCUBQJEVPVYOHMBTOYHNZCMGSCHDDAUPKWSDALOTEFEUTORXFH");

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
    msg.setTimeStamp(0.629457885556);
    msg.setSource(22800U);
    msg.setSourceEntity(48U);
    msg.setDestination(25028U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1392983632U;

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
    msg.setTimeStamp(0.160842023006);
    msg.setSource(280U);
    msg.setSourceEntity(130U);
    msg.setDestination(32233U);
    msg.setDestinationEntity(250U);
    msg.sessid = 3595753121U;

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
    msg.setTimeStamp(0.656013913352);
    msg.setSource(13178U);
    msg.setSourceEntity(230U);
    msg.setDestination(21791U);
    msg.setDestinationEntity(147U);
    msg.sessid = 3637983716U;

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
    msg.setTimeStamp(0.559553969796);
    msg.setSource(63586U);
    msg.setSourceEntity(76U);
    msg.setDestination(2387U);
    msg.setDestinationEntity(210U);
    msg.sessid = 363229291U;
    msg.status = 175U;

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
    msg.setTimeStamp(0.723627593957);
    msg.setSource(18452U);
    msg.setSourceEntity(84U);
    msg.setDestination(63779U);
    msg.setDestinationEntity(18U);
    msg.sessid = 3158190618U;
    msg.status = 97U;

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
    msg.setTimeStamp(0.0984828915987);
    msg.setSource(16940U);
    msg.setSourceEntity(64U);
    msg.setDestination(58976U);
    msg.setDestinationEntity(236U);
    msg.sessid = 4286576538U;
    msg.status = 229U;

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
    msg.setTimeStamp(0.806552236607);
    msg.setSource(12932U);
    msg.setSourceEntity(254U);
    msg.setDestination(24703U);
    msg.setDestinationEntity(157U);
    msg.name.assign("YXCHZQEBNKVEZJEOXGBJPMZRWPZZPPOBNVCMDGZHKJWLVKKNDECRLRMIEURYGGLYOXSJABORYDYVEAVHQMGJGOTNUZQNMQVBCCWGOIUYUBDIQJQLUJLRCAHASTZFQOKSWFTIGTPIWPSOMTGHCKMKAEUFZQSDBCEUTIXXYKPALRIMFVQQBPKNFPWBBJOGHSWSHWHXDUYEVNYAFOLDWHXJWRJTLSMXTMDISLIVNUNKDDZFFN");

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
    msg.setTimeStamp(0.299289500058);
    msg.setSource(64366U);
    msg.setSourceEntity(58U);
    msg.setDestination(25703U);
    msg.setDestinationEntity(170U);
    msg.name.assign("UTBHFYHUHJENBRSHRFPXAQLWMWHOGNILKQFDMOXBHJLKWZNKNQAEMFLRRTAOXQIIFOLCSOSOAFDYUIRQZCDJJMZDOSUREJCEVBJZEGUOEALYXUWCYEWFMTDZNTBAVZZVGJHFUBGYLIIGIPTQLPEVHEUNXXDYKPANKJWHXKTYAKVIZWVYJOQMRIRPEASZFDKDBOMSWGFR");

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
    msg.setTimeStamp(0.0478960031651);
    msg.setSource(25781U);
    msg.setSourceEntity(217U);
    msg.setDestination(48581U);
    msg.setDestinationEntity(221U);
    msg.name.assign("QHNONZDOJFOZPSCKJGZJHQRYOLQZUXZTPEINEZBPKQBUECSKYYMLFTHMSJSVEFQWAMMWBBRGPLLBBDVPCOROJFAUBEYVXSOFZGCORAADRXRDIDEITTHYGCTJGZAMPXXLMIJQVPXSKKMJNYYGRPOSTXHVUNAQWKLVWXDFIBINHNGHJAHHLRTGHXFBIAQUKUIYRCEVWJCVYDVWDYCDNEMFTCENIBEPQDWZA");

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
    msg.setTimeStamp(0.40484305467);
    msg.setSource(17490U);
    msg.setSourceEntity(30U);
    msg.setDestination(34107U);
    msg.setDestinationEntity(26U);
    msg.name.assign("XMDEPRJSSGFJKTNOOJACDGRZXSQNCQVBFLWAMGZHGFFVHFIMOQZI");

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
    msg.setTimeStamp(0.653016228544);
    msg.setSource(64195U);
    msg.setSourceEntity(196U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(208U);
    msg.name.assign("MFWVUCUGHOXMRVZUZYDAKTLMSDIMJHGSDANYSHLPGEINFUFEHTCQKBUKAHJOOWEKJ");

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
    msg.setTimeStamp(0.862887129705);
    msg.setSource(38221U);
    msg.setSourceEntity(214U);
    msg.setDestination(27328U);
    msg.setDestinationEntity(9U);
    msg.name.assign("OSVEXSRFZOYQFGKIPSYZZXJSKAJJQUPGACAADNMYRQOHILGTNZNNPOGBDLMCMQKEYJGVCVNNGLOWTLXTHKQJZBERQBCCWSEQSNDUWVOVHCRGFSHDTEVEJMWQPLDYACXZOVHCXDRGNTYUHYEKBTBMVWSMODVXRHPUFUYFRXGUAKXIOTBSEPTANHRRKJBFKPJJCIHQMFQDBULPIFKTY");

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

  return test.getReturnValue();
}
