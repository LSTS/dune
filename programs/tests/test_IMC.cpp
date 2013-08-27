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
    msg.setTimeStamp(0.15044657991444843);
    msg.setSource(51411U);
    msg.setSourceEntity(28U);
    msg.setDestination(18544U);
    msg.setDestinationEntity(21U);
    msg.state = 208U;
    msg.flags = 23U;
    msg.description.assign("NQATSKYCDOMVMUJRTTSPJDKIMDAABNTKNBYVODFAZFXSZQNWIWQSKFWCPEQQAEAGYXCKRLQVDRGZGHEKEPCYINVKPOJBDDMHRNIMSUSLWLBXPWBXGHXMTSMCZIPEFHEVPQLHCXMXHEJZKZUEWRRGHWJQEIUP");

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
    msg.setTimeStamp(0.9281576210887169);
    msg.setSource(23997U);
    msg.setSourceEntity(199U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(168U);
    msg.state = 213U;
    msg.flags = 34U;
    msg.description.assign("DFOAWEPEPODSVUTBMKBQWYFMIHZRSUNCPYWMJLRXEDMSTFCPVEQGQXIDNCLHZFBELFIUZWVINGNZAUCNFESVGKJOWGVHHWIZEKKPJCAGYBQKXUKJAXLBCTQMJMYIOLNXDHHMENKJCFNTOVLSQKTJPDR");

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
    msg.setTimeStamp(0.258011612350887);
    msg.setSource(14122U);
    msg.setSourceEntity(111U);
    msg.setDestination(28106U);
    msg.setDestinationEntity(116U);
    msg.state = 87U;
    msg.flags = 48U;
    msg.description.assign("RYYKWLSXXFMKHJCVJPOIANGCGYWBCDLGJJPOVHLTQQPXUNHEAKSOKNOEZBVUNAKQISYZATZEMCOETYRLUMRGMDSIWLXYRTJMLNRTDILVBPYIUUQQLHZWKGMMAHEXJAYKXWYDKKGFWTJSHPIDZADPIRBAVHCCQRZJBOGGXNPEXIFWDQFDZVPVSCSVERC");

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
    msg.setTimeStamp(0.7320263888438667);
    msg.setSource(26214U);
    msg.setSourceEntity(96U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.29277737943598814);
    msg.setSource(44964U);
    msg.setSourceEntity(17U);
    msg.setDestination(18673U);
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
    msg.setTimeStamp(0.2126366701786533);
    msg.setSource(10081U);
    msg.setSourceEntity(45U);
    msg.setDestination(24866U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.6497120280479188);
    msg.setSource(32123U);
    msg.setSourceEntity(64U);
    msg.setDestination(25924U);
    msg.setDestinationEntity(45U);
    msg.id = 19U;
    msg.label.assign("YAHQFDHOTKPOXIRBLWCJIZDUBLESHNGFWSXARVPFNJPIQVWJZSOONLGAMHPNMQVBRDKKSIDAUVLJBPGKUZXQOCDQICENKADFOBJFGURZIDHRTTXFYCXVPFWHAKDRMBMRVNEWODQUSMWMLJXYOEZQWS");
    msg.component.assign("ZBSVPDGWATRFOQLKNCATZEHOMXQNNSVKQRZVWPOIZZMSFCGAAJHLISNBOPDVDKBNPNDVAFBISMYUKBFBLQKVOEJOFCYSQRWESKTXYUUULPZMTLRHDSIXBZMTXIQCJDNJMKWLKYJUHKGHXARIQCSBKTYVPJCWETHVYHAPOVGHOCIBXXGXJDTERFOIEIGHJMMPAWXLJDNW");
    msg.act_time = 50137U;
    msg.deact_time = 38914U;

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
    msg.setTimeStamp(0.41850406720832845);
    msg.setSource(30553U);
    msg.setSourceEntity(100U);
    msg.setDestination(32870U);
    msg.setDestinationEntity(204U);
    msg.id = 227U;
    msg.label.assign("UTNAUZULPHYTOVWPRVCFBZNHWLRFTJOPKHGEMMPQWBVEGRGBQNADXVGXFKRBSYGFBJZNMFWMZVTHMWXQJOPYXUOPJSEJLZAUTYNKFEYQLCIYCGGBAGFNA");
    msg.component.assign("JHIOUIREPZKYFYEOFSFZDEHMSKNSKCIBYHJNQMRBGHGDWLKLQVAIBCC");
    msg.act_time = 42156U;
    msg.deact_time = 48303U;

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
    msg.setTimeStamp(0.9666240593941378);
    msg.setSource(58492U);
    msg.setSourceEntity(79U);
    msg.setDestination(63562U);
    msg.setDestinationEntity(146U);
    msg.id = 183U;
    msg.label.assign("VXQLREMWYVTBPGITUDCMYOIEZFJQZZPXVZIXZHAWGXGZLEEHGXOJUYSVDIYCLSPMBXNNEGNVJLVVKOWQDJEMZFNACHQTTGIARXOPFQWBORPCWQMLWNLWJQUKSUFTKZMVFDHTPTVDQRGXBKEBAGULAMWYIOCHOF");
    msg.component.assign("SJLZFCUCMHSREEZOCUMWGVVZRECQDROUBAHXHWHKHIBPIDSXNTHETKXZKOYQEGPIMEYORSDQKDLRBGAMUKQWPKILBGEKIWSBTXKGCOJXCTQIFDVMHWLWWXXPZYZTONNZUSFYFLBPSJJBRVSAVMTBLCWFNGHVYZOAPYRZMRLWEQAYBFYVVTPWVECDHAGJGJOZXXJIEGJOQMDFTTFTDKBNDSN");
    msg.act_time = 44152U;
    msg.deact_time = 58327U;

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
    msg.setTimeStamp(0.0737676526510469);
    msg.setSource(36300U);
    msg.setSourceEntity(193U);
    msg.setDestination(9644U);
    msg.setDestinationEntity(191U);
    msg.id = 72U;

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
    msg.setTimeStamp(0.613754388506492);
    msg.setSource(60444U);
    msg.setSourceEntity(168U);
    msg.setDestination(25704U);
    msg.setDestinationEntity(203U);
    msg.id = 113U;

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
    msg.setTimeStamp(0.7152949807449728);
    msg.setSource(60539U);
    msg.setSourceEntity(7U);
    msg.setDestination(2845U);
    msg.setDestinationEntity(169U);
    msg.id = 144U;

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
    msg.setTimeStamp(0.42211355194747135);
    msg.setSource(36481U);
    msg.setSourceEntity(141U);
    msg.setDestination(42165U);
    msg.setDestinationEntity(112U);
    msg.op = 254U;
    msg.list.assign("NQJBXYFMRYMCPTBWTQRLJBZPRRHFGHYIHAPQSSCZONVQWIWHVBHRWFDSCZSKEJMAYQSIQJUIPOKRAKGQFIKLTENPBYCZLTDYCHFVBTOVKNNDHVWLTUXJGLTUUZEQILODCVUGCOWFOFDXMAQISFBVYCVDSAGNHHPOIGLMEDBYLRISWYJUJWPMDNRCEGAXNXUHE");

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
    msg.setTimeStamp(0.8660995025609273);
    msg.setSource(27729U);
    msg.setSourceEntity(44U);
    msg.setDestination(12058U);
    msg.setDestinationEntity(157U);
    msg.op = 79U;
    msg.list.assign("XUPNJNCOAJKFYCOKPIDTMRTXTVHMFZHLMQOAVYQOLVY");

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
    msg.setTimeStamp(0.6443667934314677);
    msg.setSource(23975U);
    msg.setSourceEntity(182U);
    msg.setDestination(5073U);
    msg.setDestinationEntity(196U);
    msg.op = 93U;
    msg.list.assign("KWDQIQXIJKHLPNNEGHEETZRMTREDWCOETYAABHUCHHQGXUERFNYQKHWLPKICCHBPNVBOAUMLJZVOCFZCDAKWAFLISBTWKXRKO");

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
    msg.setTimeStamp(0.13670024901610378);
    msg.setSource(32388U);
    msg.setSourceEntity(70U);
    msg.setDestination(45119U);
    msg.setDestinationEntity(106U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.28532895246922485);
    msg.setSource(52364U);
    msg.setSourceEntity(140U);
    msg.setDestination(39001U);
    msg.setDestinationEntity(234U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.7432644575209164);
    msg.setSource(43552U);
    msg.setSourceEntity(240U);
    msg.setDestination(47923U);
    msg.setDestinationEntity(54U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.5517308389021294);
    msg.setSource(33552U);
    msg.setSourceEntity(100U);
    msg.setDestination(31884U);
    msg.setDestinationEntity(132U);
    msg.value = 241U;

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
    msg.setTimeStamp(0.5394925635538773);
    msg.setSource(56961U);
    msg.setSourceEntity(205U);
    msg.setDestination(18210U);
    msg.setDestinationEntity(166U);
    msg.value = 87U;

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
    msg.setTimeStamp(0.30424699434731883);
    msg.setSource(17327U);
    msg.setSourceEntity(60U);
    msg.setDestination(62821U);
    msg.setDestinationEntity(175U);
    msg.value = 174U;

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
    msg.setTimeStamp(0.579594861708683);
    msg.setSource(57545U);
    msg.setSourceEntity(181U);
    msg.setDestination(9299U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("KSXCQVPVOCYPLQGUZZLQQKEDFRCPBCKWFKNFYFXEDEZTZYOACZAYW");
    msg.message_id = 42461U;

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
    msg.setTimeStamp(0.7096505060272271);
    msg.setSource(35219U);
    msg.setSourceEntity(246U);
    msg.setDestination(43237U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("NYMGQEKBAJVXSRMEWHUVVCQCCCSBZYMCLYMYYDDBBXEELGUGLSWDXXJOMDKCTLFMTFSIXULDQJIIZAFWEKUZGDONGQOJRHTATOVNJZYLIOQTFAERVDNVPMISWNDFWBYYFHJHBZWBZAOXWPTWKGUPCZLBT");
    msg.message_id = 53994U;

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
    msg.setTimeStamp(0.480883248448562);
    msg.setSource(64898U);
    msg.setSourceEntity(136U);
    msg.setDestination(53489U);
    msg.setDestinationEntity(171U);
    msg.consumer.assign("SWGXKXKPKAQRFWGTGPYGRTTRGTXJXZGQXUKKLELVIHZELRNOBIZLLYSUPUCYVHJJLAOCERKSDFEJEENIDOJJHJMOGNMORGETCEZMLFDPYNTMBCICXOBPIAIQRKWINHETSCJALMSNGQAWAVPPZUSQNIHSRMZYPXAXTFCIZ");
    msg.message_id = 53138U;

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
    msg.setTimeStamp(0.632026056396297);
    msg.setSource(33800U);
    msg.setSourceEntity(2U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.3147036621802579);
    msg.setSource(64013U);
    msg.setSourceEntity(151U);
    msg.setDestination(1446U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.9010481597774771);
    msg.setSource(55226U);
    msg.setSourceEntity(208U);
    msg.setDestination(17383U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.13592499432061234);
    msg.setSource(4128U);
    msg.setSourceEntity(138U);
    msg.setDestination(45509U);
    msg.setDestinationEntity(79U);
    msg.section.assign("ARMWIYVWNFOIYADYTKVUPBZNFDCODWLYQVQLIVJZMBPRQLUSJRWFCTNSOEDYKAOCBSTOJXEUEDOCTBLOERKKAYQZXVZLRTINHE");
    msg.param.assign("IKKBQDOAGAYLHTGJKQAPLSMCLYHZPRYYDQIELPMSLRABCBGZUCBAZPKONIVIPJLCQIUAJXMSVIXHREHWNFMSJPYWGHYVDCUVZDSKHSVROIJYGNSDZWZXTHTOGJDEBUFKCFJWDFQYRMJVCZPMUSEDCOTSBUBKOKNOQRKZMXUXPAZMRVI");
    msg.value.assign("RYGTQZKIRQNCPEFTRSJXCCMLODFOHWZVDMAQXHKAMYVPABNIBDVETMDOTVCCGJBKAIIWJANZQOFUFWEMUMBMHTVYWRSELNHOYYWWNLCRXPRZEBCTMXZFJRRKUGIJVOJHSGXZJNLHOHPNJXWPUUFGLRZVEJRUKIWXTTCQEWAIUFBXYKTQAHDUPTSDQZSPSYGZDLQGLHFVYYFVUIILEGYZKLBKDGOSNPAEMKSGNQFO");

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
    msg.setTimeStamp(0.8676827700485624);
    msg.setSource(56532U);
    msg.setSourceEntity(109U);
    msg.setDestination(51090U);
    msg.setDestinationEntity(160U);
    msg.section.assign("NAKETOJRYMJBFTSCOHYUFKIVYQLGPYHCRKLSXMAZBEVGXHIRCNUSBUPCRYAURNMUJGJPAGZQTGIEFLAOLDVNGKNWPQIYGBVPFSDHDDYPGOWHAMXFQUZWRQSUTEBXITRBXTHDZGQKZOXJL");
    msg.param.assign("MTSTDHAJHINJDKIDOOVYGZMJPJVXXKDVQVYZLQHQPFMEJKQEEGOGXFNOAAIXEXSDIEHGCDBVNQLHIKSBCL");
    msg.value.assign("SJYFPLXCLOODB");

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
    msg.setTimeStamp(0.02478747101705725);
    msg.setSource(10011U);
    msg.setSourceEntity(184U);
    msg.setDestination(6111U);
    msg.setDestinationEntity(153U);
    msg.section.assign("AEAXQIJBUUPCTCLCFWAJBBRSBQDVGIHSJMUHXJUVZJCEDPSLYRMSHGMYOVNLONEQMHEEGAYPPDGLBSGZIUQPWXKDKIVGZHRHTJVKNGENQZKIFMWZRNVWXHFDAYOGMFNYEKUBMRUTFYAMGTZDMZVOWCR");
    msg.param.assign("NZXJBAVBESBQZZGKLFGIOYNDVAJFZYANYRWA");
    msg.value.assign("CFJQJVKOTLXMVPYWFYPOTCBBJNKZGIQARUIUEXSLAFYSSMDMCGPLSCPCANVTTKREFUNUZNPNQZOQRRYOQVXDYLGMFESLCKFEVOKNEHWWQOLOWFHXSSQPNYCQTDHBGURFICDLZDBERBCHHQGRMXAFTWKSKOWYYMVZDTXTBRJUVJJHMXILLKDRDKEANZAJZAGW");

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
    msg.setTimeStamp(0.5428562824736297);
    msg.setSource(12551U);
    msg.setSourceEntity(181U);
    msg.setDestination(42610U);
    msg.setDestinationEntity(183U);
    msg.op = 77U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("JPLSSYXWNQLULSOLVDTKDWXPALWCBUJWAVMBURPTPBUGGLSIWYQYBSETAYZOZJWFDJAEAXBXIZFJESIPCARXNZDXTVVSGZNZIQOTFYPYKLAS");
    tmp_msg_0.param.assign("GTQTQJEBXFRSRYOFXULCTOILDYGCWCIEGQVOIWUUSCFHHYVQGPQLNLBZXKJDXUSLTLIOMSRLOKDJEKYNRHNDGZVURNWHJXQ");
    tmp_msg_0.value.assign("BFMERSKZFFGBDVTQPMZISSHAGRHNIWDYAPOKSGAGEXXDAEOBOHIAIJZEAUIJWTXQBGRTQOEFVMBJMYROXWXMPAQPZDSNOZKIXLUKBPERSIUBXSGKBFLJTY");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6392641590855885);
    msg.setSource(12263U);
    msg.setSourceEntity(124U);
    msg.setDestination(60971U);
    msg.setDestinationEntity(199U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.30408501011010114);
    msg.setSource(3186U);
    msg.setSourceEntity(190U);
    msg.setDestination(6100U);
    msg.setDestinationEntity(231U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.5448469238330584);
    msg.setSource(34933U);
    msg.setSourceEntity(209U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(11U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.5288080043176552);
    msg.setSource(23638U);
    msg.setSourceEntity(114U);
    msg.setDestination(3364U);
    msg.setDestinationEntity(221U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.9493984372755981);
    msg.setSource(51821U);
    msg.setSourceEntity(110U);
    msg.setDestination(3247U);
    msg.setDestinationEntity(117U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.20268707374862527);
    msg.setSource(61627U);
    msg.setSourceEntity(61U);
    msg.setDestination(48084U);
    msg.setDestinationEntity(236U);
    msg.total_steps = 77U;
    msg.step_number = 247U;
    msg.step.assign("MEJEHTTMXLYGAHXISDTBDLANZFPIPDPWJGQJOJKGKXSPKDEFYDCZGGHSBQOOUKWURHKXVVYNVTNNXOJATADEIHNQYWUILAWWPKKYMMPXVZSMAWDIUBRSAPSDQBOKXCHMUELI");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.49313653358076326);
    msg.setSource(29315U);
    msg.setSourceEntity(26U);
    msg.setDestination(17168U);
    msg.setDestinationEntity(216U);
    msg.total_steps = 63U;
    msg.step_number = 128U;
    msg.step.assign("WEINDWPBIBXFYEVVKPGQCEZYBSXNCSRZLEDOHWBYMZAIAMWTQITJRWTFKUHNOFFUJIMPDXYAOMGKTOZLUOYBCSVZCSGHKUMCRNULSFKEOXQEMVAGUTEKJPIRRDIUCCVXGBFKMNPZQDKABDVSKUQJMUCQIQGJCLGI");
    msg.flags = 110U;

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
    msg.setTimeStamp(0.7518070562358695);
    msg.setSource(29882U);
    msg.setSourceEntity(180U);
    msg.setDestination(51444U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 39U;
    msg.step_number = 146U;
    msg.step.assign("QKOLXSPGDNQCNRJLBXQMDUFYXLALSGZNYKMVLIX");
    msg.flags = 12U;

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
    msg.setTimeStamp(0.7124720169806619);
    msg.setSource(21083U);
    msg.setSourceEntity(182U);
    msg.setDestination(17896U);
    msg.setDestinationEntity(226U);
    msg.state = 149U;
    msg.error.assign("OADXKTZTHLNSIKHXSNCRTYXUIJAFSBGPFBJRT");

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
    msg.setTimeStamp(0.7289496687152808);
    msg.setSource(21577U);
    msg.setSourceEntity(232U);
    msg.setDestination(17675U);
    msg.setDestinationEntity(216U);
    msg.state = 200U;
    msg.error.assign("JEBLBQGHVQXSTMQWPYE");

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
    msg.setTimeStamp(0.44741716466800885);
    msg.setSource(21064U);
    msg.setSourceEntity(28U);
    msg.setDestination(56137U);
    msg.setDestinationEntity(182U);
    msg.state = 249U;
    msg.error.assign("RLHWWQZZUDFLLJQACAVDLSYBJOQAOSOSIMCLDFETMXNNBYKPSMCNGMWKHRPSTTAUKBPRYLZFYNSKEXQOEGCEUMTUOFAYBFHRFXNEAJRFBVZNSDYYOYEVGIQIITURIMQBWOPWGI");

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
    msg.setTimeStamp(0.7777259490276116);
    msg.setSource(60967U);
    msg.setSourceEntity(51U);
    msg.setDestination(12292U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.5255763605148959);
    msg.setSource(9322U);
    msg.setSourceEntity(77U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.0795072912317123);
    msg.setSource(54091U);
    msg.setSourceEntity(51U);
    msg.setDestination(29883U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.7219827057398839);
    msg.setSource(32267U);
    msg.setSourceEntity(83U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.4457894204880346;
    msg.lon = 0.8441136647187092;
    msg.height = 0.6047074394408202;
    msg.x = 0.6872875535266476;
    msg.y = 0.000320748346762767;
    msg.z = 0.13972200043663907;
    msg.phi = 0.30289162218951493;
    msg.theta = 0.04902660494726763;
    msg.psi = 0.16591730363684776;
    msg.u = 0.703898245252884;
    msg.v = 0.9686073926460119;
    msg.w = 0.0018363123040558982;
    msg.p = 0.34586639845051736;
    msg.q = 0.6543223457458933;
    msg.r = 0.8778545368959384;
    msg.svx = 0.26243593083524075;
    msg.svy = 0.8407099429356082;
    msg.svz = 0.7682539708424463;

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
    msg.setTimeStamp(0.1954709965871626);
    msg.setSource(25810U);
    msg.setSourceEntity(199U);
    msg.setDestination(43608U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.7316689420146355;
    msg.lon = 0.638083955743704;
    msg.height = 0.2831895900947333;
    msg.x = 0.352463613149143;
    msg.y = 0.506705177424961;
    msg.z = 0.3175653556507749;
    msg.phi = 0.41125742119144804;
    msg.theta = 0.42415728183674695;
    msg.psi = 0.5876686377322029;
    msg.u = 0.8910317070416973;
    msg.v = 0.86387383620166;
    msg.w = 0.7638017824177106;
    msg.p = 0.671835944857617;
    msg.q = 0.34333972075543273;
    msg.r = 0.9889362440400962;
    msg.svx = 0.030329250083724446;
    msg.svy = 0.5097573619173917;
    msg.svz = 0.8367188979198313;

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
    msg.setTimeStamp(0.9154658342358601);
    msg.setSource(8067U);
    msg.setSourceEntity(59U);
    msg.setDestination(6881U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.4012347790646362;
    msg.lon = 0.9868296982281046;
    msg.height = 0.9942806015191589;
    msg.x = 0.9672237536253759;
    msg.y = 0.4980097781395003;
    msg.z = 0.6609588534964517;
    msg.phi = 0.4713274755668574;
    msg.theta = 0.8661183791441409;
    msg.psi = 0.9769174122392497;
    msg.u = 0.36447998169911655;
    msg.v = 0.5401234651688303;
    msg.w = 0.196642197344303;
    msg.p = 0.8720360385159338;
    msg.q = 0.06677182141485383;
    msg.r = 0.31886141348740593;
    msg.svx = 0.17447005040675867;
    msg.svy = 0.2250079185691911;
    msg.svz = 0.9748688958481107;

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
    msg.setTimeStamp(0.9834271417212153);
    msg.setSource(64115U);
    msg.setSourceEntity(223U);
    msg.setDestination(8606U);
    msg.setDestinationEntity(164U);
    msg.op = 64U;
    msg.entities.assign("XONRSDRDGAQYOAIZEBAFNJVBEQBLHDZLOLIXWBABRULSDNXB");

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
    msg.setTimeStamp(0.5680316096231144);
    msg.setSource(36108U);
    msg.setSourceEntity(144U);
    msg.setDestination(41318U);
    msg.setDestinationEntity(81U);
    msg.op = 13U;
    msg.entities.assign("EQLTZOXFYZIDXOKRGBNAFFDYUJEMSZAJWFSWZSZPJNJCJHCCKPTPOEMQVLQMKLUDRFTAMLIAUAHVCBJRNUXOYWFMHOAEAKWVWSEBSABSMFJBPCHNSXCYTHKCXRXQGWJBCHABHDUZBRXBQIEKOITNTNTUGLIKPOQGLRORNQQDWYPVRDEHNEVHZTZVPRYKLPPQDLUL");

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
    msg.setTimeStamp(0.9956944255637983);
    msg.setSource(50255U);
    msg.setSourceEntity(217U);
    msg.setDestination(21255U);
    msg.setDestinationEntity(170U);
    msg.op = 140U;
    msg.entities.assign("CUTTIUKJLXDAEXAMRDNEGKYMCOKNLUAZOPRZOXVVJCZPWPYUMUIJZRWTVUOFOGHXEIASZPFGTSYNHCJOWTHNEBZEFVYLYCSLGLHWQYQXFMXTBFDCAINRTPENJGDJQEIABBJQ");

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
    msg.setTimeStamp(0.2456188979127656);
    msg.setSource(11435U);
    msg.setSourceEntity(174U);
    msg.setDestination(56200U);
    msg.setDestinationEntity(189U);
    msg.type = 241U;
    msg.speed = 61589U;
    const char tmp_msg_0[] = {-116, -86, 13, -13, -98, 71, -64, 125, 71, -50, 44, -112, -4, 118, 106, 126, -117, -88, -63, 117, 49, 23, -50, -107, -114, -117, 46, -95, -29, -45, -7, -122, -68, -21, -113, 35, 1, -6, -50, -102, 121, -119, -109, 29, 108, -18, -106, 2, -120, 58, 51, 56, 92, -7, -64, 125, -85, 29, 79, 32, -38, 86, 18, 72, 16, 106, -1, -44, 102};
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
    msg.setTimeStamp(0.16952999729704687);
    msg.setSource(50016U);
    msg.setSourceEntity(116U);
    msg.setDestination(55147U);
    msg.setDestinationEntity(128U);
    msg.type = 13U;
    msg.speed = 1807U;
    const char tmp_msg_0[] = {-24, 45, 115, 104, 103, 93, -72, -28, 45, 51, 27, -122, 13, 42, 58, -85, 73, -50, -33, -96, -73, 50, 39, 50, -36, -77, -97, 84, -105, 60, 111, -49, -73, -114, 100, -46, 85, -127, -66, 97, 112, 41, 8, 16, 67, 113, -40, 82, -113, 85, 97, -9, 121, -70, 122, 4, 34, -3, -19, -43, 26, -53, -59, -67, 115, 80, -81, -123, -25, 15, 117, -60, -4, 9, 119, 68, 120, 38, -97, 8, -98, -79, 63, -10, 2, -120, -67, 5, 109, -51, 81, -103, -77, 21, -57, -35, 74, -117, -17, 0, -47, 71, 85, -97, 39, -54, -65, -74, -89, 7, -38, -3, -42, 63, -58, -104, -100, 7, -45, 87, 103, 2, -91, -31, -77, 14, 27, 34, 47, -113, -74, 6, -23, 84, -110, 60, -65, -115, 122, 123, 39, -69, 68, -92, 80, 61, 105, -42, 120, -85, -44, -26, 86, -123, -21, 21, -32, -88, 46, -102, -7, -107, -20, -87, 13, -113, -72, -73, -114, 30, -46, -4, 67, 41, -31, 27, -65, 126, -95, 20, 14, 67, -7, 112, 86, -43, 29, -118, -53, -100, 51, 19, 104, -96};
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
    msg.setTimeStamp(0.14373027833522423);
    msg.setSource(10646U);
    msg.setSourceEntity(113U);
    msg.setDestination(32164U);
    msg.setDestinationEntity(142U);
    msg.type = 119U;
    msg.speed = 56170U;
    const char tmp_msg_0[] = {13, -56, -19, -128, 47, -11, 46, -1, -85, 20, 56, -48, 40, -88, -36, -64, 54, 104, -14, -105, -115, -76, -39, -78, -122, -2, 56, -45, 18, -40, 93, -73, -84, -40, -113, 23, -104, -128, 2, -2, 49, -25, -2, 75, 6, 72, 75, 125, -58, -55, -59, 95, -1, 92, 115, 107, 80, 38, -85, -49, -44, -74, 124, 5, 98, 18, -117, 12, 39, 25, -26, 33, 2, -22, 99, -125, -3, -92, -76, -39, -82, -27, 80, 52, -94, 95, 10, 26, -49, 39, 124, 55, -4, 3, 121, 20, 32, 46, 87, -59, 63, 54, -66, 89, 75, 105, -99, -9, 76, 53, 19, -87, -20, -86, 82, -72, 0, 73, -114, -66, -39, 29, 82, -58, -65, -23, 4, 96, 98, 68, -93, 32, -56, 108, -74, 87, 125, -63, 41, 112, 113, 83, -33, -73, -20, -124, -27, 60, -119, -111, -72, -12, -117, 109, -114, 74, 90, 113, 19, -95, -83, -46, -68, -36, 40, -118, -124, -60, 110, -39, -114, -73, -68, -99};
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
    msg.setTimeStamp(0.19358780954292476);
    msg.setSource(63928U);
    msg.setSourceEntity(31U);
    msg.setDestination(3658U);
    msg.setDestinationEntity(13U);
    msg.available = 3949230444U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.9828435781051359);
    msg.setSource(8370U);
    msg.setSourceEntity(133U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(95U);
    msg.available = 127817191U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.924278923726102);
    msg.setSource(55924U);
    msg.setSourceEntity(162U);
    msg.setDestination(40287U);
    msg.setDestinationEntity(38U);
    msg.available = 2212405377U;
    msg.value = 104U;

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
    msg.setTimeStamp(0.8901626361431796);
    msg.setSource(26819U);
    msg.setSourceEntity(181U);
    msg.setDestination(4723U);
    msg.setDestinationEntity(156U);
    msg.op = 246U;
    msg.snapshot.assign("QKCVOPHBGCUIVCZIKMEYRDDXCTHCXDCLMGPDLAGFAHCLXEUYQORJOAHFTFGLHXHXNOTPVZYJFYTOWEYJTARBMFZIQPJYIMBAWUBQWCNQUWSEUIKZJLFOPHRBBLNWZCDRBSQGXSFVELZQOIZYNJHVKNRTGREQGWAVRAZYWMJUHNXLWRIKMUSABLOSPUAUVTNVKEHDOGBS");
    IMC::RawImage tmp_msg_0;
    tmp_msg_0.width = 58199U;
    tmp_msg_0.height = 44663U;
    tmp_msg_0.channels = 57U;
    tmp_msg_0.depth = 94U;
    const char tmp_tmp_msg_0_0[] = {39, -61, 103, 81, -87, 97, 19, -12, 100, -30, 23, -49, -44, 13, 15, 9, -43, -32, 99, -93, -86, 119, -64, -37, 96, 84, 21, -111, -69, 19, -7, -39, 0, 95, -128, 28, -124, 78, 58, -88, -120, 118, -26, 45, 43, 72, -68, 64, 120, -87, -28, 94, -102, -125, -41, 109, -105, -93, -78, 23, -35, 37, 10, 118, 96, 37, 110, -10, 92, -123, 125, -72, -103, -79, 51, 56, -1, 30, -94, -117, 90, -72, -124, -93, 18, 63, 59, 4, -46, -54, 101, 96, 87, 95, 35, -37, -116, 80, -42, -84, -31, -115, 114, 95, -103, 46, -90, -78, 52, -60, -42, 24, -98, -46, 54, -31, -64, 78, 115, 94, -52, -124, -50, 6, -116, 38, -9, -95, -72, -21, 51, 66, -12, 98, -75, 126, 88, 117, -28, -68, -79, -40, -58, -89, 25, 12, 53, 92, 51, 26, -84, -15, -128, 38, 63, -57, 88, -128, -64, -52, -30, 44, -17, 46, -113, -33, -66, 9, 80, 47, -64, 27, -55, -52, -36, -30, -125, 55, 107, 19, 29, -121, -76, -60, 53};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7588126564849753);
    msg.setSource(13251U);
    msg.setSourceEntity(133U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(251U);
    msg.op = 202U;
    msg.snapshot.assign("NYZGJSZXPDFJDJJOESPHPVEFBQVNSZNSJSFRIEIRGYLTMBEWUQGHBSDXHGIYDFNWDTUXCJHWFHPFTVATOAZNCWQYBEBRKVY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JKUXHGAETGAIVSENBBTOBHJRNNCTRFEFKNCOV");
    tmp_msg_0.attr_type = 50U;
    tmp_msg_0.min.assign("LNMLBASRTBWRTNMUEENJCPYPPOILNAGLKGSPAFWIIFAUDBLIFXKUZUPYGJFQBBQDSBHGZNXFNDAQ");
    tmp_msg_0.max.assign("HSITPEMFTYSTJIGFFFLZJTVXKKBKBPQXGITZRSCNMAVLRANJXACXEMYESAAWBHOOWKNEPTMUMCQQHPZYGDGBOUGDOQQWMRFINYBZHSEQCUELKBWVVLJKWCWSAUDNQDNDYPZXMCSHKOLHFFQKABHUMUIRFTRHDJEICXJOCLYWWEDYGRAFDXVGWDVUIMSTRRBLBOHUNPTIHAUIVLYJPJZPEJXRSYENGGUYGRKBOXPTPNVCZOKZWVAQZQVLOJNC");
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
    msg.setTimeStamp(0.741793998846109);
    msg.setSource(41050U);
    msg.setSourceEntity(70U);
    msg.setDestination(12546U);
    msg.setDestinationEntity(180U);
    msg.op = 156U;
    msg.snapshot.assign("WVJRHEOYECOGIAPPNHHYKILZQPVIGXHNUYPRWWBKGTCHDQTYDBPAUSLZXCGTOVZMKXHDMKJHUBZGDWZBRSPXUPQURWFFCXAJEZISBWZFIXTSWCLRYTAWLPWOHTCAKYMCIOYVDFUOEDBOUCEVCMPQJBXMZQNH");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.12921309086803345;
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
    msg.setTimeStamp(0.439906871000756);
    msg.setSource(63087U);
    msg.setSourceEntity(190U);
    msg.setDestination(1449U);
    msg.setDestinationEntity(65U);
    msg.op = 200U;
    msg.name.assign("BFWSTAPINJTDJFFMCOWQNCBRDRUCUZXHMCMWETWFNUJXLRFBKIPCONJFCBWTIMDHMLBSRYOMYNWAUAIHSVNJQYGXZSLARVORXYMKOGKMULRMFDSMELGISADEXICGGAZYYSHAXQKWJQTEUQDGHFWGEEJPAOYIFZIVHKHERXQPLPEKPSGHTWBNPKSXIDVGUUKRPDZNLSVLJTXVZXTUOZT");

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
    msg.setTimeStamp(0.7320869672500693);
    msg.setSource(57190U);
    msg.setSourceEntity(123U);
    msg.setDestination(18090U);
    msg.setDestinationEntity(116U);
    msg.op = 43U;
    msg.name.assign("YXFKTZQDGJMRAENCNSYLXHBJDHGPTVYESPEDJHMRXEECCRUAHTIAIKJYTAHQMGDVKIMDORHLAYFPZCPLBROSZEFRUIVUMOMXDBWQFULIWGQLWVWWAXHMWRGUBVUMKFFPOABJWPSTLPDPLGRPUDZBVYRZRWZUIZOVIWOAFNKXOTQCYYALEJGIQOEIOSTKJUYMDCZZXEJJCQBSVTKCQPXVQNKMNOWBYSKGHNVANBHITCFNXCSSBEQ");

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
    msg.setTimeStamp(0.27608989785852867);
    msg.setSource(46698U);
    msg.setSourceEntity(85U);
    msg.setDestination(1252U);
    msg.setDestinationEntity(13U);
    msg.op = 14U;
    msg.name.assign("JROAVLOJJPWMGWKFRYXPISDECYMUHOQAUEDPTNBKZTQZJJSTGCEUPHJWZRANOWXEUVQMWIZOD");

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
    msg.setTimeStamp(0.3193376715506364);
    msg.setSource(54025U);
    msg.setSourceEntity(9U);
    msg.setDestination(39446U);
    msg.setDestinationEntity(238U);
    msg.type = 31U;
    msg.htime = 0.34647479431253125;
    msg.context.assign("CRMRQDZDKRZIVIYHECYTGTUXJMQZJIXHWDFEWLLQLAXN");
    msg.text.assign("TKJEKHNPBIYLQJCR");

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
    msg.setTimeStamp(0.02139875952634318);
    msg.setSource(54484U);
    msg.setSourceEntity(246U);
    msg.setDestination(55295U);
    msg.setDestinationEntity(226U);
    msg.type = 88U;
    msg.htime = 0.47032551282686597;
    msg.context.assign("QMJRJPRTHUKKFSERKFYWUWLSGYZMGBNMOFBFDLWZEMPCZOAWQZIUHRUKIKOJVVEIOCPUMBIMXYLXNXQXNBWSQZSLPTBERLYPGZGENYKLAFJ");
    msg.text.assign("CFMBXLPZPOWNHKGPXKCJSVBUVCVJFZVVUNOO");

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
    msg.setTimeStamp(0.5027563321952122);
    msg.setSource(62328U);
    msg.setSourceEntity(135U);
    msg.setDestination(59256U);
    msg.setDestinationEntity(33U);
    msg.type = 171U;
    msg.htime = 0.2769287745795965;
    msg.context.assign("CSXGEITZOSXEZUVLDWONSXKQTAHGHMRLWHXEPBWVMCFDPHMTNFNZHAIIRSVVMJUGAJLDQ");
    msg.text.assign("BXHNAHSYXGIUFFGZURAGGBIUEUNEWTXJCXYFRULKILVMGPZDDXGSEPNWWNVBFSERSIGLVSCODEHJZRAJOKEAQDYPRYDPSZDQNLYBOKMAWNIBOMAHPWOTMBJROHCZEWBMTVRCKJLFWPKKOQILWCSZAHITCTXJTENRYFCZIBSVEFNBPLUUYDPPVTVYAGZXLUUEAJVMKOXMQZIJQSQPOVWCRFNFHJHFQKUXSTMTYQKN");

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
    msg.setTimeStamp(0.2573515894346634);
    msg.setSource(63173U);
    msg.setSourceEntity(9U);
    msg.setDestination(29192U);
    msg.setDestinationEntity(25U);
    msg.command = 218U;
    msg.htime = 0.5361781938522279;

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
    msg.setTimeStamp(0.7640091398781842);
    msg.setSource(4777U);
    msg.setSourceEntity(64U);
    msg.setDestination(2519U);
    msg.setDestinationEntity(94U);
    msg.command = 15U;
    msg.htime = 0.14366038802937187;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 21U;
    tmp_msg_0.htime = 0.5447840682361199;
    tmp_msg_0.context.assign("LEVQUTTQZSWKPFASZJCITLHYNCAJBHTRDQPAQJCKGBYNSMHXMVOICOFKUSPTGGRIAUBCMDULGLXRDWBFJOEAPLUGQTALHPWKFZQTCVQYOMUPFWAVOMXWRJDCSYODMDEHXPQVRYIYRBVLEIZYHKJDZEYUTNEFDNJUOXDVJHVZXNRQXLVMUSKEXMGPWFHRKSTGWFSMAANJNIHYKSLKNCBTCBHBYWICZGSQWNZX");
    tmp_msg_0.text.assign("JHKEDTFSNPICERYWPUVVICZNUWQYVFFXUXKRMFNLMSIKMJWMHLXLRDFXKIKAQYGFOTQXGQSMQFTKBGBLBXNMJTPNAAGZPSPHPBCBTIPRZSSHORAI");
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
    msg.setTimeStamp(0.9467767571444442);
    msg.setSource(36350U);
    msg.setSourceEntity(97U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(43U);
    msg.command = 94U;
    msg.htime = 0.3654936909967197;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 245U;
    tmp_msg_0.htime = 0.5252800025082254;
    tmp_msg_0.context.assign("NWWVUCKKEYTFDQMCYUNBCWBFKGYAOLVDQGYVFYEDGRJHPDZXNRBUGIKTQUSXBRECBILFSJCIDHVZEYYMKMQDGBWDOLZXELJMDAZQSJPRTVKWGIINLNOPVNOTRIZAVSRFSXGFMULTGMXNFVHUIYHVBIPLPWUXHQHOBFTTSEJZTYCSJDMTBNUCABLRC");
    tmp_msg_0.text.assign("LGHURQNBCKYXFNMOLBEACKIRIIVYWWBAEMJCNAMJZHSZZITPHEEMWZLQMXEXDGKRKKGYTNTTVOHJXOQXUYVIACJULPUOITBFPNFWDKCARQUQLGBQJOYFBMSPXHJUVSLGNFAPSYWGNVTSUGXDKSCEOLCZDDSIXEREMYFZBWFTJBLWDXYRMVFONRHYJTVPBWVVP");
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
    msg.setTimeStamp(0.49712416106903023);
    msg.setSource(15213U);
    msg.setSourceEntity(253U);
    msg.setDestination(29985U);
    msg.setDestinationEntity(113U);
    msg.op = 232U;
    msg.file.assign("TYEPFDBWGXFPAPHUFYXQYNVJSUYLZMHPLHUH");

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
    msg.setTimeStamp(0.6415328461972799);
    msg.setSource(19958U);
    msg.setSourceEntity(231U);
    msg.setDestination(36021U);
    msg.setDestinationEntity(162U);
    msg.op = 196U;
    msg.file.assign("YBKWNJMTPFNGMXAPJDBEKPJGGNBIMOKWWAQVPORMGSISFOOQQNCFUZTUIISECQKDVDPBEYTAZRWGCRUZCHMBAYQNLRZIKBCKZQCOIRSAUSQNFTYPDVRHUVOALNVTEZFFSCYUVFHPOIKHHUFYJXXGGEEDLHXURJXAXBSBXPBFLPNNVOWXHQGWEAOEEJJJRDZYCJMTJUZLMD");

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
    msg.setTimeStamp(0.45842470655325884);
    msg.setSource(20053U);
    msg.setSourceEntity(80U);
    msg.setDestination(35019U);
    msg.setDestinationEntity(212U);
    msg.op = 254U;
    msg.file.assign("JQTFNZFACHRUJHNESTSQSBXACSGLOYAUCIMANAQACDIMYVVBQKCDRGVYJDMJGZFPINBUOEPOQPBKLSROLIDECIOPLUHMEWQHTIQJBGBXNVABXRXOUWSYYNYLPRTWTVXTJCUJAMKFLJICEJQSTZELPCXJWFHGZTQZRMQUUHHNRWZZUDRXNFEGDWMUONSYLYHKYWFPZX");

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
    msg.setTimeStamp(0.10454303557000322);
    msg.setSource(23138U);
    msg.setSourceEntity(212U);
    msg.setDestination(32632U);
    msg.setDestinationEntity(130U);
    msg.op = 118U;
    msg.clock = 0.6875497333850998;
    msg.tz = 3;

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
    msg.setTimeStamp(0.09829690030964855);
    msg.setSource(17394U);
    msg.setSourceEntity(123U);
    msg.setDestination(13513U);
    msg.setDestinationEntity(151U);
    msg.op = 237U;
    msg.clock = 0.007026665902909901;
    msg.tz = -72;

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
    msg.setTimeStamp(0.8995726938996819);
    msg.setSource(58191U);
    msg.setSourceEntity(253U);
    msg.setDestination(23917U);
    msg.setDestinationEntity(220U);
    msg.op = 104U;
    msg.clock = 0.4589055316350975;
    msg.tz = -65;

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
    msg.setTimeStamp(0.6746248216352649);
    msg.setSource(36371U);
    msg.setSourceEntity(224U);
    msg.setDestination(56941U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.7589906854670517);
    msg.setSource(13294U);
    msg.setSourceEntity(196U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.5085054306771516);
    msg.setSource(42328U);
    msg.setSourceEntity(122U);
    msg.setDestination(3872U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.14820431725498084);
    msg.setSource(55485U);
    msg.setSourceEntity(18U);
    msg.setDestination(37749U);
    msg.setDestinationEntity(125U);
    msg.sys_name.assign("RXLUCVMEXDHWACMZGEQQLQPZICUYKYLSXIBTBDPDKROZYUCQUOHBRIZLCHREKYTPQJECXDDCFWDSJNDKZFMJGWJRANMDOOVWAIVYKABUZMIKVFINBSVFEAZKYRAVNW");
    msg.sys_type = 15U;
    msg.owner = 61123U;
    msg.lat = 0.840562984036867;
    msg.lon = 0.24341016036691776;
    msg.height = 0.9344053242113851;
    msg.services.assign("KNIXKXVCRMLVVFSYMICJYQUBVOEEVWRXWMNJLTRAVOMZOEFCNCYEXJKWQJESQILRGAZGFGPCEWHGHMJZHRDVFIT");

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
    msg.setTimeStamp(0.16387909911287324);
    msg.setSource(22463U);
    msg.setSourceEntity(202U);
    msg.setDestination(23350U);
    msg.setDestinationEntity(211U);
    msg.sys_name.assign("FSVOSHBUTBWFVVMGRJDBGJNAMYMGEEYCEVUWDPZHTIRWTCFKKSLICFNBOTCYYRVLABAXLBKEQSHKQKPDIISUYWDHDGAKUAZDCXSLMXNPGRCNZJQWUTVOOZNXHDNFDLATEMOXLQMIUPORPMJRBHCZFEJXJTECMMPVSSXVQGXWEZQOIILZH");
    msg.sys_type = 108U;
    msg.owner = 31477U;
    msg.lat = 0.6222328082178702;
    msg.lon = 0.5112471017350122;
    msg.height = 0.0670121553170242;
    msg.services.assign("CRTNUPLQTOOSFZSXAKBFZRTUCMRORSNHNVIZNHLNPWUJBTSGRZQQGGVKQAIICWKIEVLNBOWXDFDXQBBRJFYEEJSMDATNKQHAFHQPBXHRPGYTFPGIFEAERVCWARRMPUKSHIQSOUTCPYIXYWHNVATFWEZOUZSDVWJOKCGMEATVYGVUFNDYZLMYVGHQYHCK");

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
    msg.setTimeStamp(0.2984946796830781);
    msg.setSource(6433U);
    msg.setSourceEntity(206U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(66U);
    msg.sys_name.assign("CSMKEHGAMEAVBPECTHXVGJMGAAZMYNFUXDRWKWPFRSFXPYXGPRXQKDIZMXVJRWANYAOMDYQGUCNTUHTBJPES");
    msg.sys_type = 146U;
    msg.owner = 12104U;
    msg.lat = 0.21262433036840356;
    msg.lon = 0.4513464328217973;
    msg.height = 0.7763353258463762;
    msg.services.assign("TDRNVJBVVAOZOAELPCQIGOQPNWHTSBFDLJFUPVGJYSLWIIAKFCXYZETPLPUXLEFGZROOAUXRHZCYPSZFDYTERWURHKCNQWQBLMXKEQODGVATOUOKUZCIZRQWXHYKMLSJXHTFSGCCEUNYMDQOKGVFSMNDYKWEBNARLJJWIPWAZHWRBMZUAGRDBVBUBZTIDFPPKLIYNTWJBVDKLYKICHVVNSMNJCDI");

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
    msg.setTimeStamp(0.4620301210687575);
    msg.setSource(65298U);
    msg.setSourceEntity(11U);
    msg.setDestination(47902U);
    msg.setDestinationEntity(243U);
    msg.service.assign("DLEBXKDMPSUWCRLUFZAJOXWGZTGGTQMCTKUBALVKIQREHFEWMQHXRWZTDPHOULZBPKVCLLOVSMZONEIXPGZLBJUZUSENOVKDFP");
    msg.service_type = 212U;

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
    msg.setTimeStamp(0.9301440550463571);
    msg.setSource(43146U);
    msg.setSourceEntity(121U);
    msg.setDestination(53836U);
    msg.setDestinationEntity(182U);
    msg.service.assign("VGYVREAKWTTSUVICFMYAPWNJIEXXBYNIDKUAOR");
    msg.service_type = 98U;

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
    msg.setTimeStamp(0.5558964307268156);
    msg.setSource(58615U);
    msg.setSourceEntity(174U);
    msg.setDestination(57411U);
    msg.setDestinationEntity(129U);
    msg.service.assign("NNLNVXEMOIRYKIQUPFKVNOUZOOQWDAMBVTCOJSJYQTNAXBBBVGWSTJUQELLPIMMGQPDGDCHFGFZDZEYCFVKUSSHISYKGWHUIPGTLIULKZMDFOJUQYGQKHGXSTBUCCGRKWIXVQLPIYIPWAHEE");
    msg.service_type = 107U;

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
    msg.setTimeStamp(0.005974863160747801);
    msg.setSource(18695U);
    msg.setSourceEntity(242U);
    msg.setDestination(47187U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0008064633260674858;

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
    msg.setTimeStamp(0.20573287007459318);
    msg.setSource(9291U);
    msg.setSourceEntity(38U);
    msg.setDestination(50387U);
    msg.setDestinationEntity(190U);
    msg.value = 0.10292702187325564;

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
    msg.setTimeStamp(0.7276609345251992);
    msg.setSource(44353U);
    msg.setSourceEntity(97U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(99U);
    msg.value = 0.789783732364916;

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
    msg.setTimeStamp(0.3756882686374695);
    msg.setSource(42835U);
    msg.setSourceEntity(49U);
    msg.setDestination(21181U);
    msg.setDestinationEntity(71U);
    msg.value = 0.73483715922783;

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
    msg.setTimeStamp(0.18738322429725662);
    msg.setSource(24206U);
    msg.setSourceEntity(61U);
    msg.setDestination(21204U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9363804108845774;

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
    msg.setTimeStamp(0.4064611529586407);
    msg.setSource(41262U);
    msg.setSourceEntity(32U);
    msg.setDestination(21680U);
    msg.setDestinationEntity(1U);
    msg.value = 0.7941219014468998;

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
    msg.setTimeStamp(0.8465832668712824);
    msg.setSource(14941U);
    msg.setSourceEntity(163U);
    msg.setDestination(15539U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4630132539549605;

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
    msg.setTimeStamp(0.4127576614271876);
    msg.setSource(46872U);
    msg.setSourceEntity(11U);
    msg.setDestination(19462U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7476187526296769;

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
    msg.setTimeStamp(0.11048283818873705);
    msg.setSource(41351U);
    msg.setSourceEntity(181U);
    msg.setDestination(38284U);
    msg.setDestinationEntity(9U);
    msg.value = 0.2490227862383141;

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
    msg.setTimeStamp(0.002036870070059149);
    msg.setSource(15220U);
    msg.setSourceEntity(101U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(113U);
    msg.number.assign("VUVXYEFHGB");
    msg.timeout = 59148U;
    msg.contents.assign("ZSSLZJGPDIFECJVKRGKRXBHZJRABAEYQIUMGKCSWSFHTXIOVHQSNVIHJULUCRGLHBEPWVPDHVDJERNMZLIWUSCOOYODPKUWNNPORYTAKEQPSDOIOMPLOAGLKUCNVDAQKRFCSYTYOHYTPWXRFLBABGCYEJXJR");

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
    msg.setTimeStamp(0.38617771316732175);
    msg.setSource(34865U);
    msg.setSourceEntity(185U);
    msg.setDestination(61918U);
    msg.setDestinationEntity(252U);
    msg.number.assign("YHVKXBUPJMEPSTKFYFUAJEHVYXBTCSRNNFKHLZAKQITDCCPKSLXETBCYOUHGDLXNBHSWAOQPVWMRHBHPCKBMKUVXRVJAAXOURNNGZIHYXBBDHBISPSASDOVNGEITUYRUVDVERQTWASTFMUGGRQECKFNLJWMORCMXVIMXYITJEAFUQTWHWGJFFDLQCTELGQFGCAYAZDIZQYKVUXWQSLIOZKMLOEIDNMPWDFOOGDYMBNZPPJW");
    msg.timeout = 37943U;
    msg.contents.assign("PJLRCQXEVNBYZBDUFOGHGKGEIBANXCJLBACJLVOBAWEJMHELMXMZNFPMIYYPPLJQNAZAJSUDWNHLDJOPTQRQVLQYRSCAFBFHYTFEODUJIIBQVSTLKHOQUJPDSRIZDTXRAFZMSQOXBNCRPCROKSEEWFAQZWTRXTKVIENWZOESCJGMPBAVRLUGSOTGLKGUCVKGYENTWTQMCZKPTMKVZYWUSDOVZ");

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
    msg.setTimeStamp(0.6097173541008035);
    msg.setSource(51111U);
    msg.setSourceEntity(151U);
    msg.setDestination(20330U);
    msg.setDestinationEntity(63U);
    msg.number.assign("LNGAGTNTATUANYVMQSUOUNLKTHJVVIWJWOQTHDFXUECKHWBGRRSAPUHYCYZCAIVOTOXNBFSAJDFONDBRITHHGVOMZAYMBUPRPZQZCLSMLPBUIVIQKKNUFTQLHOECFCLGPXSSRJQPDLHILDYMXZDJBRCQJYPIWXAWDARMKCZIEHFGESOEJXFGIEUTCWNZRZMYFWBQOSMMXFGNRPXLDKKJTVKPXEDMGADFYVZBJPVNYSEGUQJEOVESQCKXIWZYB");
    msg.timeout = 1988U;
    msg.contents.assign("YLDWLAJWYNKGWLESJBIGYNQMCLPBMDFUZAFRKEIHQPJBWXXQIDFENPGHRTWNUAOPQADVTSJBDCUKYRHICQHBCGKUCFJJLKUKRYBNZHVFKEFVNVFQVSLCHIBSVCXSZRJLOUHZMYIEBPMDXMONWMTYGCO");

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
    msg.setTimeStamp(0.5626126146702434);
    msg.setSource(47665U);
    msg.setSourceEntity(157U);
    msg.setDestination(33403U);
    msg.setDestinationEntity(124U);
    msg.seq = 3847355052U;
    msg.destination.assign("FHXNQZDRGIRLMHTHIADDTXAZCCGKVHSOLRVKBAVOGWHOTXJNKOKCGVPKVEWWSEJURBXPXPGDMUFJCJSBWWUISVLKQCKFHOTEAXMHWBLLQZNICISTZOEMWDNBLYLLBQYEJGNEZJRHP");
    msg.timeout = 30489U;
    const char tmp_msg_0[] = {-122, 93, 111, -62, -101, -19, -108, -46, -55, 9, 76, 72, -93, -66, -71, -84, 76, -119, -4, 0, -75, -84, -48, -9, 47, -97, 37, -22, -31, -91, -63, 100, -16, 126, -93, -21, 3, 54, -41, -91, -102, 54, 0, 96, -113, 6, 84, 83, -55, -27, -44, 75, 113, 68, 79, -96, 9, 90, 85, -58, 64, 1, -53, -90, 95, 92, 114, 100, 57, -84, 120, 65, 89, 69, 77, 9, -105, 17, 65, 116, 46, 56, 96, 46, 18, 47, -65, 104, 51, 64, -71, 118, -110, -25, 53, -24, 66, -108, 31, 59, 113, 11, 50, 66, 49, 92, -91, 22, -99, 54, -63, 81, -69, -85, -40, -90, 39, 17, 63, 51};
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
    msg.setTimeStamp(0.6824799242839255);
    msg.setSource(39307U);
    msg.setSourceEntity(251U);
    msg.setDestination(65197U);
    msg.setDestinationEntity(224U);
    msg.seq = 2505268345U;
    msg.destination.assign("VNFZJKLTPMYJRDTHMNSLCDDDWQENJIXIUSPEOQAUYEMJSG");
    msg.timeout = 33833U;
    const char tmp_msg_0[] = {-4, 81, 39, -108, -70, -67, -50, -49, 100, -51, 59, 45, -19, 26, -113, 46, -108, 72, 92, 22, 57, -44, -85, -5, -8, 115, 102, 87, -9, 57, 40, -94, 7, -110, 126, -21, 23, -77, -88, -41, -88, 71, 61, 38, -36, 116, -10, -113, 17, -118, -107, -15, -84, -104, -17, 89, 126, 5, -113, 120, -90, 60, -108, -59, -120, 85, 90, -64, -25, 122, -17, 1, 15, 125, 42, 114, 55, 21, -17, 48, -91, 9, 95, 56, -125, -102, 3, -21, -25, -81, 53, 69, 9, 84, 26, -8, -32, -111, -61, 50, -104, -24, -33, 56, 103, -102, 29, -100, -27, 34, -96, -101, -59, -68, 36, 10, -18};
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
    msg.setTimeStamp(0.8923552857400112);
    msg.setSource(7160U);
    msg.setSourceEntity(247U);
    msg.setDestination(62154U);
    msg.setDestinationEntity(248U);
    msg.seq = 4010458134U;
    msg.destination.assign("LNRUJTSHQRNVTNXTZDGOPTLRZHFFIQFWSYIJLQPYODXMAWYFKGPGWYPJNAOYPHCAIJGRHBSZFJEYMLCHAWSTIZWKXGHENBB");
    msg.timeout = 53130U;
    const char tmp_msg_0[] = {60, -3, -79, -77, 123, -122, -68, -121, 121, -47, 15, -105, 121, 7, 101, 108, 45, 61, -78, -48, 114, 71, -70, 126, 109, 62, 63, 44, 122, 112, -105, 118, 2, -13, 83, 19, -11, -127, -44, -98, -37, 20, 28, -1, -45, 27, 45, 105, 51, 41, 41, 9, 14, 25, -13, -111, -121, 61, 77, -16, -60, -6, -57, 16, -16, 37, 80, -61, 75, -49, 69, 78, -47, -5, -126, -93, 84, 11, -54, 9, 84, 38, -26, -113, -8, -111, 75, -110, 7, 104, -109, 82, -2, -62, -19, -124, 125, 77, 96, -47, -108, -36, -74, 93, -105, -101, 23, -20, -48, 87, -57, 121, 43, -80, 82, -54, 56, -31, 41, 46, 106, -62, 100, 8, 66, 35, 55, -27, 72, -98, 85, -71, -75, -70, 70, 122, 26, 19, -124, 8, -58, -61, 16, -68, -112, 37, 65, 61, -91, -28, 84, 61, -13, -43, -83, 34, 61, 42, -32, -33, -126, -76, 58, 93, 61, -99, -73};
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
    msg.setTimeStamp(0.4222867436870704);
    msg.setSource(12934U);
    msg.setSourceEntity(102U);
    msg.setDestination(52391U);
    msg.setDestinationEntity(238U);
    msg.source.assign("EBMRBGUYKMDKRXFIARQQCL");
    const char tmp_msg_0[] = {-89, -24, -94, -76, 32, 95, 115, -23, -80, -97, 93, -69, 36, 81, -128, 59, -69, -73, -38, 83, -13, -13, 31, -36, -10, -47, -63, 22, 101, -21, 10, 31, 94, -24, 61, -34, 109, -33, -39, -64, 87, 40, 110, -80, -45, 63, 59, 64, -12, 103, -117, 115, 15, -51, -35, -106, 120, -70, -50, -89, 46, -1, 73, 105, -45, -13, 57, 37, -122, -40, -41, -81, -83, -127, 21, -93, 43, -122, -33, 112, 78, -62, -35, -121, 96, -128, -50, -14, -77, 28, 111};
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
    msg.setTimeStamp(0.1268106951224609);
    msg.setSource(38080U);
    msg.setSourceEntity(176U);
    msg.setDestination(32594U);
    msg.setDestinationEntity(187U);
    msg.source.assign("BFSKADCZRSWVMVXNZIEWXXAGJUDTACBZFEHBYOXZHQSSLQGFWUZUIUCMBPJLDWTKHDBIIYWNRCXKYGPEJDMTSHYVCMIFGAVHJHXDAUOIFLS");
    const char tmp_msg_0[] = {57, 49, 81, 37, -15, -99, 47, 113, -4, 122, -90, 105, 44, -57, -40, -64};
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
    msg.setTimeStamp(0.8129511260483765);
    msg.setSource(60272U);
    msg.setSourceEntity(151U);
    msg.setDestination(60755U);
    msg.setDestinationEntity(235U);
    msg.source.assign("LSMMFXEOGIZYWRUHDOXKNIUQXQAJCEQAOVBTXWCRXBWDKGAGUKGYUYYQMFMQRFRUMSIDFUDLRHPARHQQDZBNRIPYVVLSZMKBDLHMBXIZGFLMABJVWHNAASEQBXSESCINLZPPLDJYNIFKZCHUTENDJVEVUJSARYTWTKYMTRCPGWOWFZWPGNZGDKEYIJCZCGCJOSFHNDPWEOKLNFPRPOCIHOTCOPSBJAYQGJ");
    const char tmp_msg_0[] = {42, 54, 53, 103, -127, -37, 115, -85, 118, 21, -38, -89, 117, -49, -123, 114, 70, 36, 13, 46, 111, 67, 56, 77, 40, -27, -44, -108};
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
    msg.setTimeStamp(0.875732920110507);
    msg.setSource(58744U);
    msg.setSourceEntity(97U);
    msg.setDestination(45362U);
    msg.setDestinationEntity(169U);
    msg.seq = 3196331611U;
    msg.state = 174U;
    msg.error.assign("DLWYZHCEDLVKOBCHJQJLRBSTCIAWQJPSJJ");

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
    msg.setTimeStamp(0.43084219889276487);
    msg.setSource(50353U);
    msg.setSourceEntity(243U);
    msg.setDestination(30264U);
    msg.setDestinationEntity(215U);
    msg.seq = 223764220U;
    msg.state = 110U;
    msg.error.assign("BXQQPKEHDHXOPXZTIXLGLYIUMSAEHNRCDNGQKIOXTATYHCYFEDKLVSMFURVKKZQLZUJXWZAQLFFKZCVSNWCYMQGSOKRSZTMSSBJZTECKUAWGMFVUZAFMAVJFNZMTFOHDJRBDIVNYOQXDPBJGQRTYPBEZDBVMUXNNKUJFIQIPDMUKPGOLHELAWRRQAXHWGSGOTJPDWBCBCENC");

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
    msg.setTimeStamp(0.5604892391002223);
    msg.setSource(10038U);
    msg.setSourceEntity(195U);
    msg.setDestination(58580U);
    msg.setDestinationEntity(3U);
    msg.seq = 815146281U;
    msg.state = 169U;
    msg.error.assign("HVJKCNMMQLZSVKCWXUJNJCRXLOXZUZYOKGANTGXBUPZCDUVVMWLBHTVUCDVEBFQDMOANOMMBNFNHF");

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
    msg.setTimeStamp(0.10618006693380078);
    msg.setSource(27726U);
    msg.setSourceEntity(236U);
    msg.setDestination(14251U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("MFBOVSJLFHXKZFYYTCRMQKRZICREXRQYWNTMLQNFEISWGGDWJTPPHHHCHFXYKGLJYIAGADNCZYCMXGLJJVPGPVOZBDSRSQMALQSNFOERZIKTJIGTXOQMVBMKXOXWWIIZYUDHBLAEGMARAEEUTWBNVETYPJEAZBV");
    msg.text.assign("AFQLWJYMCVKBCKNVFIOYJ");

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
    msg.setTimeStamp(0.14341038717398147);
    msg.setSource(48739U);
    msg.setSourceEntity(230U);
    msg.setDestination(4887U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("YOMOUQCXDELZYRZOKRXYZVFILQIKJJGAICSIBDTHGPBSRHEWOHVFBPCAHKSKWJZSCJEITNAYZGHVPBBMAZKZRWVLLAVOXLRKQEUOVFQGUMTYSHMZJBKXYSRJNWUMHDUKTIBYDDJWCNAJMJTXAOJEQSXHNVETPPGLFUWVOUXYNWMFFNTCNGNQEALDHIALTVEQCCSCSGOMWHNXMPOXLAYMXEPYFRBIDKRBLWUFPQCPUUGSZEQINRF");
    msg.text.assign("RMQDAECMSBURNMQARMRDPTFZPJTFTLZOFTJRGNWWFEMNVBYFCTLNQKAFVMUJVXLGLRPCCHDLGTSBYVQSOHMYYLUNAYGXVOUWIJMKZHKWXOCEESBFTYOPZCAXAIXSDQIDQFWYCAYGVBXUQEIHZGXALEKJHXGRYIUSFHTMGMCKCHEHNHWZWANJJPILDWEVNUUQSQQZIRJOYSLFGPPVWOSOIXONKGNWPZI");

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
    msg.setTimeStamp(0.30025844492950726);
    msg.setSource(28527U);
    msg.setSourceEntity(15U);
    msg.setDestination(33761U);
    msg.setDestinationEntity(88U);
    msg.origin.assign("OAZGGRPNOGIWTNWUUHUFBDHEXLPGCBXFDTTORICZNCNPZRMZIKRYYSZDBVLPXVJZ");
    msg.text.assign("USJHMBYGKG");

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
    msg.setTimeStamp(0.5725169889260053);
    msg.setSource(41025U);
    msg.setSourceEntity(210U);
    msg.setDestination(29644U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("PKMAUGJGXQIYLJTCUYYLNCOCQWZDAFXNFCQKSZVUCKHFPQVTOBPIALOURCSDLRESMTIZXXHPLYMAVXB");
    msg.htime = 0.28402224301649315;
    msg.lat = 0.048235887286797285;
    msg.lon = 0.73955435824765;
    const char tmp_msg_0[] = {14, -51, 8, 60, -2, 53, 5, 66, -40, -76, -26, -56, 44, 78, 98, 97, -98, -120, 17, -113, -67, 50, -60, 103, 52, -60, 18, -101, 80, 59, 82, 111, -14, 75, -68, 67, -53, -89, 28, -58, -82, -112, 23, -45, 34, -109, 15, 121, 69, -119, -108, -107, -54, 66, 36, -96, -90, 11, 70, 58, 121, -57, -33, -10, -46, 28, -34, -104, 16, -10, -20, -105, -10, 43, 98, -54, -96, 41, -2};
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
    msg.setTimeStamp(0.014876925259954876);
    msg.setSource(3019U);
    msg.setSourceEntity(23U);
    msg.setDestination(60981U);
    msg.setDestinationEntity(186U);
    msg.origin.assign("LHBUGIJXDXSWVRYELZBKNHRJWABRGZCCOHPKGOFAEPNCWDTOHPKQJGZMMJMZOTEICFMVOFATKCLUHTKFUPDGOSJBWIWSWTICYHKETMIYVMQSNWHXRXSVIRSFAGQBQIRBVBLUPU");
    msg.htime = 0.641698843177798;
    msg.lat = 0.37758465257049867;
    msg.lon = 0.45410830348441544;
    const char tmp_msg_0[] = {-108, 28, -114, -99, 56, -65, 124, -25, -117, -13, 3, -80, -32, 72, 44, -44, 53, 48, 44, -36, 90, -98, 94, 11, 57, -94, -41, 47, -95, 46, 13, 8, 125, -50, -66, -113, -25, 5, -117, 13, -80, -54, -109, -57, 121, -108, -77, 49};
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
    msg.setTimeStamp(0.979077493617894);
    msg.setSource(13107U);
    msg.setSourceEntity(118U);
    msg.setDestination(1750U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("FKXNDCNKVLQTIXZUOJDDNMWGWYUIVALBZYITMFQESYUSFCIGTKRYPOEPOEZJVJVMXACO");
    msg.htime = 0.37212812065029877;
    msg.lat = 0.7535286606915995;
    msg.lon = 0.11303562493292252;
    const char tmp_msg_0[] = {47, -47, 20, 75, -46, 34, -38, -121, -57, -77, 74, -85, -81, -91, 61, -105, -55, 95, 63, 25, 15, 101, 34, 36, 64, -45, -24, -107, -104, -77, -91, 88, 69, -81, -27, -63, 49, 112, -17, -27, 25, -82, -122, 12, -119, 72, -96, 95, -57, 67, 54, 119, -13, 117, -86, -66, -75, 62, -5, 65, 109, 100, 64, -101, 109, -8, -4, -60, -96, 22, -55, 13, -70, -30, -42, -18, -88, -19, 51, 54, 107, -5, 20, -51, 16, 119, 51, 8, -52, -105, 65, -48, -123, -100, 90, 6, 4, 54, -7, 18, 76, -95, -12, -25, -46, 14, 112, 117, -89, 3, -19, -16, 9, -90, -109, -111, -61, -52, -125, 91, 47, -109, 57, -17, 79, -27, 118, -96, -32, -18, 43, -123, -18, -112, 5, -108, 72, -109, 72, 78, -35, 53, 62, -117, -37, 43, 102, 28, -116, 55, -52, 83, 109, -97, 46, 100, -80, 11, 47, -37, -79, -121, -63, 111, -14, 42, 56, 18, -68, -82, 44, -78, -72, -76, 118, 45, -120, 48, -1, 88, -34, 113, -102, -32, 20, 126, -71, -68, 86, 113, -36, 110, 35, 89, -11, -54};
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
    msg.setTimeStamp(0.8608650280638144);
    msg.setSource(32123U);
    msg.setSourceEntity(170U);
    msg.setDestination(62983U);
    msg.setDestinationEntity(190U);
    msg.req_id = 15734U;
    msg.ttl = 64304U;
    msg.destination.assign("KWAAFLJPQUVFEWSDFPPYKRCQBAZPJQMCNVHEJXTKFTETABWCDOCBMUIUYQAGL");
    const char tmp_msg_0[] = {113, 13, -64, -90, -21, -72, 9, -36, -84, -4, -72, 5, 25, 46, -79, 19, 37, 75, -121, -51, 85, 12, 95, -8, 16, -92, -63, 7, 122, -82, -23, -106, -108, 30, 88, 43, -52, -81, -90, 111, -5, 120, -92, 71, 10, -53, -114, -22, 16, 86, 65, -4, 70, 82, -82, -88, -69, -103, -58, -116, 56, -21, 11, -11, 98, -58, 15};
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
    msg.setTimeStamp(0.7582243776662734);
    msg.setSource(47160U);
    msg.setSourceEntity(112U);
    msg.setDestination(39764U);
    msg.setDestinationEntity(83U);
    msg.req_id = 18701U;
    msg.ttl = 40122U;
    msg.destination.assign("BOIAYUQFHKZMZFOCDEJTFKRUUSJTZFQSNPOVIAYKHXIPYXXRFJLSONVMQSDMTUEQCZSTITRCGNWRECZQACQADWRHRDYABYSLMRRDZMZSJIPLUPJDXKLEPWWBGLFXURZNGPHQTHTKIHUYLJSIODOVNEPLCGEZVFWWTBBHHACNWQEUDFHKWMBYAJYUHMGDLCOMIEEFEDGXUJLYZXVNMXBOPKJVSKGGTVCQFBAXPNQOPWA");
    const char tmp_msg_0[] = {15, 56, -48, -96, -128, -26, 117, 13, 89, -111, 123, -39, -118, -90, -41, -100, -115, -54, 12, -14, 101, 75, 71, 81, -68, 86, 79, -54, 125, -55, -74, 36, -74, 40, 102, 18, -65, 74, 117, -14, 92, -21, 121, -99, 119, -2, 97, 36, 76, -88, -99, 94, 10, -52, 76, -42, -107, 51, 51, -28, -1, -44, 102, -12, -22, -50, 100, 13, -38, -39, 91, 60, 27, -111, 83, -13, -64, -95, -23, 114, -16, 73, 66, -88, 84, 27, -28, -124, 52, 7, -117, 27, -88, 117, 11, 16, -117, -26, 18, 19, -15, 77, 88, 49, -104, 111, -45, 48, -63, 78, 19, -105, 125, 122, -26, -49, -113, -82, -124, -32, 52, 123, -54, -70, 40, -118, 47, 98, 4, 123, 51, 38, 63, -89, -10, 39, -116, 80, 27, -89, 47, 115, 25, -12, -32, 115, 21};
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
    msg.setTimeStamp(0.7872330881013561);
    msg.setSource(60036U);
    msg.setSourceEntity(92U);
    msg.setDestination(27340U);
    msg.setDestinationEntity(135U);
    msg.req_id = 4807U;
    msg.ttl = 46101U;
    msg.destination.assign("NCXOYXSOBJKSBFJVTBZLVQADZMFLASHWULDPXESIPVOE");
    const char tmp_msg_0[] = {54, 2, -29, 67, 86, 27, 43, 6, 126, 68, -71, -128, 51, -87, -64, 28, 55, 12, 67, -61, -78, -99, -99, 46, 117, 37, 45, 91, 52, -69, 107, -99, 86, -24, -24, -41, -94, -73, -38, -85, 73, -86, -48, 20, 43, 88, -36, 47, -72, -55, 96, -17, -85, 100, -31, -86, 121, 74, -74, -58, -47, -81, -64, 93, 122, 82, -14, 116, 100, -72, 114, -95, 39, 67, 28, -52, -76, -112, 96, -51, 52, -83, 95, -49, 9, -45, -3, 38, -17, -48, -114, -62, -91, 57, 104, -110, 101, -82, 119, 125, 8, 95, -3, -55, -24, 46, 30, 37, 0, -120, 31, -122, 17, -55, -108, 64, -45, 94, 85, -82, -103, -125, -16, -101, -24, -128, 66, -104, -6, 23, -34, -86, 33, -120, 25, -96, 84, -24, 118, 50, -27, 38, -39, -8, 64, -89, 37, -47, 91, -69, -122, 116, 20, 52, 113, -12, -93, -47, -95, -5, 1, 14, 4, 24, -1, 67, -6, -55, 0, 84, -118, 79, 26, 12, -119, -121, 66, -100, -54, 64, -62, -38, 118, -53, -89, -82, 64, 98, -107, 30, -104, 17, 44, -79, -74, 28, -78, 119, 12, -27, -76, -1, -24, -113, 125, 16, -80, 118, 26, -79, 94, 13, 120, 124, 26, -86, 78, -48};
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
    msg.setTimeStamp(0.8526743019090735);
    msg.setSource(10174U);
    msg.setSourceEntity(22U);
    msg.setDestination(42866U);
    msg.setDestinationEntity(218U);
    msg.req_id = 3219U;
    msg.status = 23U;
    msg.text.assign("BXBRNHICWSQDMGEOFZQUFPEIBURASUVMOMLPPGVIXJVKESUOVNMFMALYTOQJXLFKBZGDCUAVHSTZJIZNZSOEPPEHBRQGONWCFTQNWRCSAGNQVFVHZLONDKLIBKJDWXJXTADHIMQWHWXHOXCITMBRGZQUPXBOOHGPRIYGXKXEATKN");

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
    msg.setTimeStamp(0.8636403474429616);
    msg.setSource(63934U);
    msg.setSourceEntity(235U);
    msg.setDestination(34954U);
    msg.setDestinationEntity(202U);
    msg.req_id = 57487U;
    msg.status = 200U;
    msg.text.assign("PCVXGNAFZDMINKFDNVAUVJWPRFDJSPFCSPYQEHOWUQMODADTOGQFEDTHIAJJFIPNCYBEBIKLAXGVRAAZUIHWILSPBGUPIOVSBMLFOWHRIHVWLZQMWXZJERYXLKZICUHDRMYRMXXOUVBGTGQMNYKNHKPXKAUJMJVZBTQK");

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
    msg.setTimeStamp(0.948460548643445);
    msg.setSource(50184U);
    msg.setSourceEntity(231U);
    msg.setDestination(31863U);
    msg.setDestinationEntity(155U);
    msg.req_id = 28741U;
    msg.status = 70U;
    msg.text.assign("BGHJYTWPSALDOPGZZBXSSJYKHVYKODQIUQKWMWGPRGQIEPIJGSAWQGVJEFRFUWSMYLUZRHTYXYGDFLNPBC");

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
    msg.setTimeStamp(0.12347942769881626);
    msg.setSource(14929U);
    msg.setSourceEntity(216U);
    msg.setDestination(48404U);
    msg.setDestinationEntity(72U);
    msg.id = 118U;
    msg.range = 0.23066341229267806;

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
    msg.setTimeStamp(0.3923654197142069);
    msg.setSource(61194U);
    msg.setSourceEntity(211U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(11U);
    msg.id = 118U;
    msg.range = 0.2883647377199037;

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
    msg.setTimeStamp(0.5477827703469336);
    msg.setSource(20905U);
    msg.setSourceEntity(164U);
    msg.setDestination(9359U);
    msg.setDestinationEntity(156U);
    msg.id = 2U;
    msg.range = 0.7368892686641816;

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
    msg.setTimeStamp(0.890102135220075);
    msg.setSource(9788U);
    msg.setSourceEntity(129U);
    msg.setDestination(37792U);
    msg.setDestinationEntity(26U);
    msg.tx = 143U;
    msg.channel = 2U;
    msg.timer = 10127U;

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
    msg.setTimeStamp(0.4593790465524247);
    msg.setSource(26485U);
    msg.setSourceEntity(196U);
    msg.setDestination(25738U);
    msg.setDestinationEntity(95U);
    msg.tx = 46U;
    msg.channel = 29U;
    msg.timer = 24100U;

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
    msg.setTimeStamp(0.18074341756313472);
    msg.setSource(13383U);
    msg.setSourceEntity(212U);
    msg.setDestination(52393U);
    msg.setDestinationEntity(97U);
    msg.tx = 138U;
    msg.channel = 55U;
    msg.timer = 27845U;

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
    msg.setTimeStamp(0.6898794276816939);
    msg.setSource(59651U);
    msg.setSourceEntity(141U);
    msg.setDestination(62060U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("VYVEQEOPCUUTWCYXTIRNGXGZKHSVOQQLSOUFAXOZRVJSVYELPGGFLRMDHTWDAGBSPUQKLAOEYRWKZCBRFIHMBYWPRUAZHTNPSSZDYHSMGJHRKTYZAOVKIJCBIOEJIIRKJKTWAQIUSDGMLPTJFPBMFPUIXHNXZBNHOZDYREOBXEZVWOACSPFFJXNSNCXJIUAHRQHMELTPYMFQBMYCWKEADCWNFCUDAGNJ");
    msg.lat = 0.2915289689474695;
    msg.lon = 0.2087031253623124;
    msg.depth = 0.5002575530642025;
    msg.query_channel = 61U;
    msg.reply_channel = 224U;
    msg.transponder_delay = 74U;

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
    msg.setTimeStamp(0.932322533466005);
    msg.setSource(65070U);
    msg.setSourceEntity(93U);
    msg.setDestination(33708U);
    msg.setDestinationEntity(186U);
    msg.beacon.assign("POIKHOAHWDTVJYCPBVNXSXZNDJDBNNUFMPEQYGKMQRQVOPJWDBHCXGIZFNQGKHDCZCBYAKEKZZBQMXZQSMJCTKMNTMGQASYEBAXCOGFIEUDIPULIDEZLWMCWPRLSXWJYXXLKUUTKSXGASUYDLURHHGFZCTVNFFWEAUPBPFTOZOIIYGKWDCPRJTNVLJRHXLRVAVRRLUWEOATKBVYGAYFYZELIWUFNMBJHP");
    msg.lat = 0.47441679769407086;
    msg.lon = 0.39652245957496424;
    msg.depth = 0.671510606175515;
    msg.query_channel = 41U;
    msg.reply_channel = 87U;
    msg.transponder_delay = 244U;

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
    msg.setTimeStamp(0.0708194895831189);
    msg.setSource(14195U);
    msg.setSourceEntity(56U);
    msg.setDestination(60992U);
    msg.setDestinationEntity(162U);
    msg.beacon.assign("IOPZYBJEQRBNWHOVAIFUKLOKTMSBTWPHGZMFIXCTCFVZWLKTYYBHWZWOZZADIQTHNXUMMURPOTDVVIEJQODYFRIZKZJKVNSJJMF");
    msg.lat = 0.4976325945503617;
    msg.lon = 0.20828958160851696;
    msg.depth = 0.4276724354914735;
    msg.query_channel = 42U;
    msg.reply_channel = 39U;
    msg.transponder_delay = 170U;

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
    msg.setTimeStamp(0.3896025669800016);
    msg.setSource(25052U);
    msg.setSourceEntity(151U);
    msg.setDestination(36077U);
    msg.setDestinationEntity(52U);
    msg.op = 254U;

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
    msg.setTimeStamp(0.23470537558167004);
    msg.setSource(41288U);
    msg.setSourceEntity(71U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(201U);
    msg.op = 73U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HDZOPLHQDYXMWUENBWRTMXNYAUVYPOFAZTEBNOAPRTTWNKJPXHDSQDCXFLRHLOVVAUUXJUAKCCURZWNVCZHVIZSFIPXLQAEBFCNICDTCXLVAICWUSEVWYJRWQSBOIMHEIYUTPKPJHQLQQFSRYGDQKEXYIWJJGOGZWVBGOTYZEANMRIOJKCUWTRVLLGIKBGBMLMRBMNQICKHSDZYVXSPGPFHDES");
    tmp_msg_0.lat = 0.5698166221795642;
    tmp_msg_0.lon = 0.8811955844055566;
    tmp_msg_0.depth = 0.4689688490343066;
    tmp_msg_0.query_channel = 218U;
    tmp_msg_0.reply_channel = 19U;
    tmp_msg_0.transponder_delay = 155U;
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
    msg.setTimeStamp(0.34885162463346964);
    msg.setSource(27938U);
    msg.setSourceEntity(242U);
    msg.setDestination(51221U);
    msg.setDestinationEntity(240U);
    msg.op = 103U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WUMKZIRTURGDNABBCPPDGCNOPERZDOIWVAQBOIBKXYSWAFSDCRNXPXLWHPVJAOHPMZDVEOTVYQCUEGZNABTWCFVQFIZIDMTKHAXYEFQLJEOYQBSRHDEXWLVTVKYMJQFGLYFJZLHNLIWUJMNPKYHFWQUETWIKHGDJHXCRQVILHMQKYEGGTTKDIAJHSNGCCKUSOTMXUPXZUXSOAN");
    tmp_msg_0.lat = 0.933398999301777;
    tmp_msg_0.lon = 0.27252478186690443;
    tmp_msg_0.depth = 0.7351377689685676;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 139U;
    tmp_msg_0.transponder_delay = 213U;
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
    msg.setTimeStamp(0.8937498935919214);
    msg.setSource(56927U);
    msg.setSourceEntity(190U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(17U);
    msg.address = 226U;

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
    msg.setTimeStamp(0.6353978507511894);
    msg.setSource(4621U);
    msg.setSourceEntity(213U);
    msg.setDestination(58640U);
    msg.setDestinationEntity(215U);
    msg.address = 26U;

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
    msg.setTimeStamp(0.20799408295728516);
    msg.setSource(28339U);
    msg.setSourceEntity(160U);
    msg.setDestination(61912U);
    msg.setDestinationEntity(157U);
    msg.address = 125U;

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
    msg.setTimeStamp(0.14580631948042366);
    msg.setSource(6489U);
    msg.setSourceEntity(162U);
    msg.setDestination(1340U);
    msg.setDestinationEntity(237U);
    msg.address = 80U;
    msg.status = 61U;
    msg.range = 0.44523168635408616;

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
    msg.setTimeStamp(0.5201334914487535);
    msg.setSource(43151U);
    msg.setSourceEntity(192U);
    msg.setDestination(31676U);
    msg.setDestinationEntity(80U);
    msg.address = 96U;
    msg.status = 191U;
    msg.range = 0.5961933296455915;

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
    msg.setTimeStamp(0.8535747620461521);
    msg.setSource(23102U);
    msg.setSourceEntity(141U);
    msg.setDestination(31783U);
    msg.setDestinationEntity(43U);
    msg.address = 5U;
    msg.status = 64U;
    msg.range = 0.3885281131016606;

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
    msg.setTimeStamp(0.20298003536701614);
    msg.setSource(10775U);
    msg.setSourceEntity(132U);
    msg.setDestination(15175U);
    msg.setDestinationEntity(160U);
    IMC::NavigationReset tmp_msg_0;
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
    msg.setTimeStamp(0.3196213296158722);
    msg.setSource(47595U);
    msg.setSourceEntity(61U);
    msg.setDestination(65333U);
    msg.setDestinationEntity(157U);
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.3337209120661214;
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
    msg.setTimeStamp(0.33594158856913947);
    msg.setSource(36810U);
    msg.setSourceEntity(115U);
    msg.setDestination(38216U);
    msg.setDestinationEntity(145U);
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("ZEDLURETLNMNXHOTIAMCJWASLQWHZKJQPQWHMBNORTFUWYJSNCGDVJONIFRSKXYTLE");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("ZWFSFNNPXLITESCOOOVYVVDLAZEIVHOQIJINEVRRKUDEHYHHTHKZLJFAUMBXSYGGURDKXJZYPPQURKGSUNNSMXSXAMKO");
    tmp_tmp_msg_0_0.feature_type = 88U;
    tmp_tmp_msg_0_0.rgb_red = 254U;
    tmp_tmp_msg_0_0.rgb_green = 251U;
    tmp_tmp_msg_0_0.rgb_blue = 123U;
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7621855992241842);
    msg.setSource(58688U);
    msg.setSourceEntity(64U);
    msg.setDestination(38628U);
    msg.setDestinationEntity(126U);
    msg.enable = 17U;

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
    msg.setTimeStamp(0.9549702258771632);
    msg.setSource(38862U);
    msg.setSourceEntity(149U);
    msg.setDestination(49248U);
    msg.setDestinationEntity(121U);
    msg.enable = 142U;

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
    msg.setTimeStamp(0.06670846900416527);
    msg.setSource(20509U);
    msg.setSourceEntity(8U);
    msg.setDestination(10445U);
    msg.setDestinationEntity(209U);
    msg.enable = 66U;

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
    msg.setTimeStamp(0.608780918267692);
    msg.setSource(7894U);
    msg.setSourceEntity(108U);
    msg.setDestination(60483U);
    msg.setDestinationEntity(4U);
    msg.summary = 65U;
    msg.level = 143U;

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
    msg.setTimeStamp(0.006174775211648331);
    msg.setSource(12691U);
    msg.setSourceEntity(193U);
    msg.setDestination(26400U);
    msg.setDestinationEntity(109U);
    msg.summary = 72U;
    msg.level = 42U;

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
    msg.setTimeStamp(0.8155396022357061);
    msg.setSource(2152U);
    msg.setSourceEntity(177U);
    msg.setDestination(21521U);
    msg.setDestinationEntity(103U);
    msg.summary = 24U;
    msg.level = 70U;

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
    msg.setTimeStamp(0.4423005202030843);
    msg.setSource(30016U);
    msg.setSourceEntity(218U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.0009310879376417391);
    msg.setSource(1795U);
    msg.setSourceEntity(167U);
    msg.setDestination(12972U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.3312743354077826);
    msg.setSource(3547U);
    msg.setSourceEntity(85U);
    msg.setDestination(40223U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.8471645264894313);
    msg.setSource(14779U);
    msg.setSourceEntity(163U);
    msg.setDestination(45925U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.9491406787704031);
    msg.setSource(43599U);
    msg.setSourceEntity(227U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.46009579710121906);
    msg.setSource(40235U);
    msg.setSourceEntity(234U);
    msg.setDestination(9067U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.36960150087557986);
    msg.setSource(29797U);
    msg.setSourceEntity(79U);
    msg.setDestination(14717U);
    msg.setDestinationEntity(84U);
    msg.op = 89U;
    msg.system.assign("OLVXXNTUZJXHGZGGCXXWSIZCFIWHDICSOMRRXDCTBABAIQBIQCYQLDOCAYGJWVFLWETJVXTBKYNANEFSAMTJSVERHXZYKOPJKMUSCDHADRSUGRDSGZAQOBZAKVGZEWFSUDEPCTYWLJQBWINALUFCVSGHWJIPEKKHFMLUEUKYBNTFWJHRZGTAPDNIFBMNOQOYUERHYS");
    msg.range = 0.8268802051588026;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12601981131728168;
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
    msg.setTimeStamp(0.3148964436961028);
    msg.setSource(5045U);
    msg.setSourceEntity(114U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(171U);
    msg.op = 52U;
    msg.system.assign("BGPLWNSPWTOYBVBHKIXTEQJOUIWYEZWASQIQAQSXSKGMFPWWGFBLALDMPTWDEQCCUKDJFAYDPQSKCHUHBFNZHEKVDUQMTJCLLSVTKRRGCMOBYJCHIDWLTCUBQHIXNZGDGECROASIKKRMVEY");
    msg.range = 0.5855791902849496;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.21307713053132438;
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
    msg.setTimeStamp(0.23092699251972715);
    msg.setSource(42749U);
    msg.setSourceEntity(131U);
    msg.setDestination(21585U);
    msg.setDestinationEntity(151U);
    msg.op = 215U;
    msg.system.assign("AKVYPXDBFDPVQNPYJIHATGMVKWMDYMULZNWVTZEJLUHRRQPEPQRWVENZAMWICOHTNJILTRGPLDEDDWPYPXZSFGFOCDWJPJBETZEWDIGJAQSYCQZUCCHBMAXVYNIHNBPKFEUKBAOGIYZURMNWKVQOHBDMMKSKGUEZZJDMTRFCSAXRSJRLTNCLVFFFCKXOSILGHZXQFYYAVRTSAXOETLRCOKQXIIWUUSOJUANCOEGLBWQBUBTQ");
    msg.range = 0.13776525637605153;
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 164U;
    tmp_msg_0.file.assign("ZIOXSDSEIIRMKRLNGLWCAAYWPLYXXHFDFZBBATNOHXWYQFGXWPRPEFMBEIJLJVMEOZ");
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
    msg.setTimeStamp(0.05104154366638469);
    msg.setSource(51582U);
    msg.setSourceEntity(56U);
    msg.setDestination(60117U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.9696220201522797);
    msg.setSource(63127U);
    msg.setSourceEntity(165U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.3508400312138179);
    msg.setSource(32857U);
    msg.setSourceEntity(207U);
    msg.setDestination(45113U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.7981003687434397);
    msg.setSource(22108U);
    msg.setSourceEntity(232U);
    msg.setDestination(22144U);
    msg.setDestinationEntity(229U);
    msg.list.assign("ZDLPEBCBWSVUIPFKUXXAVCKANGWFRTGMGWMRZGDACTKAOFQBEUZBPYOHNYSRFOTDPEJTZTUPRTCWKJUSRRLAXHXOPQUOOKNDIJIHLKMESRJOBAPNHRGAYJEJLVPCDXHCZSAEZQMFYWPLNVNBCTVUYBZIKZVBHXUYFHDWIYJTQLARUVESMVGCCMMDQQJYXKIJELLWFVURSZMXSDKSONEFXBQECOFYMMIDOHN");

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
    msg.setTimeStamp(0.5615644099569519);
    msg.setSource(40430U);
    msg.setSourceEntity(129U);
    msg.setDestination(30949U);
    msg.setDestinationEntity(92U);
    msg.list.assign("DMJMIYFKRJRJINZTOQOPQSTDELBZCXEZCIFQPVSPNTTBVPWI");

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
    msg.setTimeStamp(0.5682537737050648);
    msg.setSource(35071U);
    msg.setSourceEntity(59U);
    msg.setDestination(11660U);
    msg.setDestinationEntity(239U);
    msg.list.assign("VJVATQNCFOWXTERAIKHEZMCJMSGAKDSIDHFYHSIQCZPYQBUADTIEHRFLUCAKURMJAFGDVNWTEBSXGRGGJUNSITXBCVUNYBHOJBQFCHKKZHWYFBSRGCNOUVZ");

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
    msg.setTimeStamp(0.14548478306205548);
    msg.setSource(58857U);
    msg.setSourceEntity(79U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(151U);
    msg.value = -16596;

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
    msg.setTimeStamp(0.8280800148143003);
    msg.setSource(4460U);
    msg.setSourceEntity(122U);
    msg.setDestination(49606U);
    msg.setDestinationEntity(60U);
    msg.value = -17163;

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
    msg.setTimeStamp(0.9786125632209517);
    msg.setSource(26454U);
    msg.setSourceEntity(119U);
    msg.setDestination(55731U);
    msg.setDestinationEntity(6U);
    msg.value = -23459;

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
    msg.setTimeStamp(0.6927263111252927);
    msg.setSource(18478U);
    msg.setSourceEntity(208U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7695400948970441;

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
    msg.setTimeStamp(0.49356017945083164);
    msg.setSource(38192U);
    msg.setSourceEntity(19U);
    msg.setDestination(18478U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6976398148763492;

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
    msg.setTimeStamp(0.5954554306854337);
    msg.setSource(9082U);
    msg.setSourceEntity(108U);
    msg.setDestination(21273U);
    msg.setDestinationEntity(177U);
    msg.value = 0.052874580178374986;

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
    msg.setTimeStamp(0.8947804838860832);
    msg.setSource(64515U);
    msg.setSourceEntity(117U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(249U);
    msg.value = 0.10719807564650341;

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
    msg.setTimeStamp(0.43540260459051716);
    msg.setSource(29358U);
    msg.setSourceEntity(104U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5831121832355929;

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
    msg.setTimeStamp(0.1040252280421271);
    msg.setSource(60637U);
    msg.setSourceEntity(36U);
    msg.setDestination(39209U);
    msg.setDestinationEntity(107U);
    msg.value = 0.34015982798790445;

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
    msg.setTimeStamp(0.014255557095042115);
    msg.setSource(53757U);
    msg.setSourceEntity(42U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(139U);
    msg.validity = 57436U;
    msg.type = 200U;
    msg.utc_year = 2287U;
    msg.utc_month = 239U;
    msg.utc_day = 174U;
    msg.utc_time = 0.4913977878352058;
    msg.lat = 0.254333893942423;
    msg.lon = 0.04933363878366115;
    msg.height = 0.09271076433872183;
    msg.satellites = 219U;
    msg.cog = 0.13843248760204552;
    msg.sog = 0.29163242429600256;
    msg.hdop = 0.5046947833780073;
    msg.vdop = 0.7378746648648908;
    msg.hacc = 0.5329796117408943;
    msg.vacc = 0.548262603612242;

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
    msg.setTimeStamp(0.314169557398974);
    msg.setSource(5951U);
    msg.setSourceEntity(220U);
    msg.setDestination(6002U);
    msg.setDestinationEntity(68U);
    msg.validity = 28112U;
    msg.type = 139U;
    msg.utc_year = 40661U;
    msg.utc_month = 92U;
    msg.utc_day = 222U;
    msg.utc_time = 0.7344320526018094;
    msg.lat = 0.9027611176491049;
    msg.lon = 0.4410416821784181;
    msg.height = 0.2391482136106008;
    msg.satellites = 230U;
    msg.cog = 0.24910804116670904;
    msg.sog = 0.9418013474182819;
    msg.hdop = 0.24695225675379495;
    msg.vdop = 0.15792409259527562;
    msg.hacc = 0.6130241733423286;
    msg.vacc = 0.649467306849653;

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
    msg.setTimeStamp(0.4358045246725957);
    msg.setSource(16287U);
    msg.setSourceEntity(158U);
    msg.setDestination(28289U);
    msg.setDestinationEntity(198U);
    msg.validity = 46939U;
    msg.type = 116U;
    msg.utc_year = 21394U;
    msg.utc_month = 120U;
    msg.utc_day = 40U;
    msg.utc_time = 0.479702180742159;
    msg.lat = 0.14703928863484084;
    msg.lon = 0.13396472789977565;
    msg.height = 0.40341619381648075;
    msg.satellites = 137U;
    msg.cog = 0.28364814480408973;
    msg.sog = 0.15102436771433936;
    msg.hdop = 0.42106859759615056;
    msg.vdop = 0.7267912455374046;
    msg.hacc = 0.23090661842660343;
    msg.vacc = 0.35621743570929376;

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
    msg.setTimeStamp(0.6318158398209531);
    msg.setSource(31721U);
    msg.setSourceEntity(151U);
    msg.setDestination(13299U);
    msg.setDestinationEntity(191U);
    msg.time = 0.5830685803542209;
    msg.phi = 0.9193149352714942;
    msg.theta = 0.37165387433249986;
    msg.psi = 0.4508482874453732;
    msg.psi_magnetic = 0.7653085667825669;

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
    msg.setTimeStamp(0.2862250658790668);
    msg.setSource(30747U);
    msg.setSourceEntity(172U);
    msg.setDestination(1546U);
    msg.setDestinationEntity(82U);
    msg.time = 0.24104167081600236;
    msg.phi = 0.8400390251348502;
    msg.theta = 0.453379174101775;
    msg.psi = 0.8727911182773278;
    msg.psi_magnetic = 0.8430766474007226;

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
    msg.setTimeStamp(0.26354930858382564);
    msg.setSource(8521U);
    msg.setSourceEntity(169U);
    msg.setDestination(24108U);
    msg.setDestinationEntity(212U);
    msg.time = 0.24021197366095504;
    msg.phi = 0.011294004861126417;
    msg.theta = 0.24161775757493753;
    msg.psi = 0.3404093710748466;
    msg.psi_magnetic = 0.616587836298008;

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
    msg.setTimeStamp(0.8179303337143645);
    msg.setSource(24117U);
    msg.setSourceEntity(54U);
    msg.setDestination(30357U);
    msg.setDestinationEntity(58U);
    msg.time = 0.4421855588236526;
    msg.x = 0.029607668608059967;
    msg.y = 0.6953291421469238;
    msg.z = 0.6965762688744175;
    msg.timestep = 0.9613697969352529;

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
    msg.setTimeStamp(0.7291262948036297);
    msg.setSource(34466U);
    msg.setSourceEntity(233U);
    msg.setDestination(35512U);
    msg.setDestinationEntity(180U);
    msg.time = 0.042325049059314335;
    msg.x = 0.01647676066874848;
    msg.y = 0.49800366362052584;
    msg.z = 0.33025842198697786;
    msg.timestep = 0.4623413199398352;

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
    msg.setTimeStamp(0.9043075502677089);
    msg.setSource(19034U);
    msg.setSourceEntity(197U);
    msg.setDestination(50067U);
    msg.setDestinationEntity(178U);
    msg.time = 0.8197099622223415;
    msg.x = 0.41447050873870883;
    msg.y = 0.40415418868799746;
    msg.z = 0.502650940123497;
    msg.timestep = 0.40719581481682754;

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
    msg.setTimeStamp(0.3449935142052032);
    msg.setSource(58866U);
    msg.setSourceEntity(63U);
    msg.setDestination(32517U);
    msg.setDestinationEntity(185U);
    msg.time = 0.4452550948854259;
    msg.x = 0.1412143243218329;
    msg.y = 0.004528729262996634;
    msg.z = 0.0017929151778814933;

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
    msg.setTimeStamp(0.1345259997682543);
    msg.setSource(61786U);
    msg.setSourceEntity(26U);
    msg.setDestination(47000U);
    msg.setDestinationEntity(181U);
    msg.time = 0.052743620645379075;
    msg.x = 0.30246418288796884;
    msg.y = 0.7779402692616744;
    msg.z = 0.23112395113633222;

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
    msg.setTimeStamp(0.6762446902107804);
    msg.setSource(39494U);
    msg.setSourceEntity(81U);
    msg.setDestination(43577U);
    msg.setDestinationEntity(140U);
    msg.time = 0.22344366901339463;
    msg.x = 0.39388628442192164;
    msg.y = 0.9508409125445798;
    msg.z = 0.5440581824339036;

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
    msg.setTimeStamp(0.6741177840634507);
    msg.setSource(49425U);
    msg.setSourceEntity(145U);
    msg.setDestination(41114U);
    msg.setDestinationEntity(139U);
    msg.time = 0.816727628451381;
    msg.x = 0.09487663018412129;
    msg.y = 0.22397169033967357;
    msg.z = 0.9442558424167276;

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
    msg.setTimeStamp(0.7349721195946354);
    msg.setSource(41469U);
    msg.setSourceEntity(134U);
    msg.setDestination(9682U);
    msg.setDestinationEntity(187U);
    msg.time = 0.07468588915818208;
    msg.x = 0.9629493659462317;
    msg.y = 0.42400675091443374;
    msg.z = 0.32436732535846;

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
    msg.setTimeStamp(0.09398135683344788);
    msg.setSource(23664U);
    msg.setSourceEntity(175U);
    msg.setDestination(58789U);
    msg.setDestinationEntity(236U);
    msg.time = 0.6316434907721317;
    msg.x = 0.14649377961137355;
    msg.y = 0.16627789467879628;
    msg.z = 0.2759704196326579;

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
    msg.setTimeStamp(0.5754636355918167);
    msg.setSource(1539U);
    msg.setSourceEntity(98U);
    msg.setDestination(34912U);
    msg.setDestinationEntity(67U);
    msg.time = 0.4551609763287052;
    msg.x = 0.2947403407880249;
    msg.y = 0.9858959697100158;
    msg.z = 0.09550800317031094;

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
    msg.setTimeStamp(0.8966970394292848);
    msg.setSource(4751U);
    msg.setSourceEntity(179U);
    msg.setDestination(36041U);
    msg.setDestinationEntity(207U);
    msg.time = 0.2128576038316934;
    msg.x = 0.8137714181097552;
    msg.y = 0.14028886220990433;
    msg.z = 0.643643501573771;

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
    msg.setTimeStamp(0.3026767222862391);
    msg.setSource(5703U);
    msg.setSourceEntity(237U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(135U);
    msg.time = 0.9107345501019383;
    msg.x = 0.12739977113485712;
    msg.y = 0.5625103700897401;
    msg.z = 0.05235378024882331;

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
    msg.setTimeStamp(0.6378384719923096);
    msg.setSource(57017U);
    msg.setSourceEntity(81U);
    msg.setDestination(45695U);
    msg.setDestinationEntity(89U);
    msg.validity = 100U;
    msg.x = 0.7261869119465827;
    msg.y = 0.3111176288601465;
    msg.z = 0.8917149772702884;

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
    msg.setTimeStamp(0.6816290816022166);
    msg.setSource(44955U);
    msg.setSourceEntity(205U);
    msg.setDestination(27261U);
    msg.setDestinationEntity(170U);
    msg.validity = 243U;
    msg.x = 0.9973868926316996;
    msg.y = 0.35850331352730136;
    msg.z = 0.37427455020288247;

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
    msg.setTimeStamp(0.07297237790137845);
    msg.setSource(61700U);
    msg.setSourceEntity(126U);
    msg.setDestination(40583U);
    msg.setDestinationEntity(124U);
    msg.validity = 54U;
    msg.x = 0.9228461490427518;
    msg.y = 0.7195625734710175;
    msg.z = 0.4486548000204955;

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
    msg.setTimeStamp(0.5393975524038642);
    msg.setSource(40930U);
    msg.setSourceEntity(208U);
    msg.setDestination(62957U);
    msg.setDestinationEntity(100U);
    msg.validity = 33U;
    msg.x = 0.6933519819499158;
    msg.y = 0.5944272529563067;
    msg.z = 0.8782468786833458;

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
    msg.setTimeStamp(0.12062522388318675);
    msg.setSource(1935U);
    msg.setSourceEntity(46U);
    msg.setDestination(64053U);
    msg.setDestinationEntity(107U);
    msg.validity = 49U;
    msg.x = 0.3673474693228773;
    msg.y = 0.3438072678435813;
    msg.z = 0.7755951671226465;

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
    msg.setTimeStamp(0.4419244760311657);
    msg.setSource(57277U);
    msg.setSourceEntity(11U);
    msg.setDestination(11825U);
    msg.setDestinationEntity(164U);
    msg.validity = 213U;
    msg.x = 0.12410077206300674;
    msg.y = 0.2743082383836716;
    msg.z = 0.5388455373141141;

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
    msg.setTimeStamp(0.0661647842513694);
    msg.setSource(42234U);
    msg.setSourceEntity(254U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(214U);
    msg.time = 0.7037739387828289;
    msg.x = 0.6154314128704966;
    msg.y = 0.3937317899112517;
    msg.z = 0.9329057718073385;

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
    msg.setTimeStamp(0.06468970103878868);
    msg.setSource(13110U);
    msg.setSourceEntity(126U);
    msg.setDestination(40168U);
    msg.setDestinationEntity(179U);
    msg.time = 0.475015520322561;
    msg.x = 0.7234733921951284;
    msg.y = 0.13720081390549965;
    msg.z = 0.5737116979548282;

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
    msg.setTimeStamp(0.8379799665768107);
    msg.setSource(64240U);
    msg.setSourceEntity(2U);
    msg.setDestination(43735U);
    msg.setDestinationEntity(149U);
    msg.time = 0.6263133768162954;
    msg.x = 0.6676535082236253;
    msg.y = 0.2422582455574358;
    msg.z = 0.02734662196056825;

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
    msg.setTimeStamp(0.2644753705442283);
    msg.setSource(9439U);
    msg.setSourceEntity(66U);
    msg.setDestination(2685U);
    msg.setDestinationEntity(105U);
    msg.validity = 144U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9108070800076598;
    tmp_msg_0.beam_height = 0.48916490611000085;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8003766979841257;

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
    msg.setTimeStamp(0.8586319000582784);
    msg.setSource(17745U);
    msg.setSourceEntity(117U);
    msg.setDestination(57919U);
    msg.setDestinationEntity(97U);
    msg.validity = 93U;
    msg.value = 0.6923807780860037;

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
    msg.setTimeStamp(0.6734649432500358);
    msg.setSource(48865U);
    msg.setSourceEntity(150U);
    msg.setDestination(14214U);
    msg.setDestinationEntity(127U);
    msg.validity = 48U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.484240577028513;
    tmp_msg_0.beam_height = 0.07892742845917233;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.56895956084823;

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
    msg.setTimeStamp(0.48547331436030783);
    msg.setSource(59921U);
    msg.setSourceEntity(186U);
    msg.setDestination(25481U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9719133208433227;

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
    msg.setTimeStamp(0.9113208103819139);
    msg.setSource(56046U);
    msg.setSourceEntity(45U);
    msg.setDestination(53959U);
    msg.setDestinationEntity(243U);
    msg.value = 0.4970741312740564;

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
    msg.setTimeStamp(0.8982052175257101);
    msg.setSource(51028U);
    msg.setSourceEntity(63U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(1U);
    msg.value = 0.012418852906550648;

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
    msg.setTimeStamp(0.5068861577100539);
    msg.setSource(52930U);
    msg.setSourceEntity(8U);
    msg.setDestination(50006U);
    msg.setDestinationEntity(60U);
    msg.value = 0.08500575098701935;

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
    msg.setTimeStamp(0.537578051616175);
    msg.setSource(10811U);
    msg.setSourceEntity(201U);
    msg.setDestination(54849U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9934873068458299;

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
    msg.setTimeStamp(0.033305003653328225);
    msg.setSource(247U);
    msg.setSourceEntity(52U);
    msg.setDestination(64733U);
    msg.setDestinationEntity(118U);
    msg.value = 0.7492385077673748;

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
    msg.setTimeStamp(0.9973269219015573);
    msg.setSource(38923U);
    msg.setSourceEntity(192U);
    msg.setDestination(59749U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7325924229397415;

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
    msg.setTimeStamp(0.9626788484036276);
    msg.setSource(58243U);
    msg.setSourceEntity(140U);
    msg.setDestination(41687U);
    msg.setDestinationEntity(81U);
    msg.value = 0.03858560615534923;

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
    msg.setTimeStamp(0.9463970634576345);
    msg.setSource(19288U);
    msg.setSourceEntity(162U);
    msg.setDestination(42753U);
    msg.setDestinationEntity(141U);
    msg.value = 0.7087223538985116;

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
    msg.setTimeStamp(0.2195348668418844);
    msg.setSource(13999U);
    msg.setSourceEntity(56U);
    msg.setDestination(15964U);
    msg.setDestinationEntity(7U);
    msg.value = 0.33166258126319936;

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
    msg.setTimeStamp(0.0001553506853911868);
    msg.setSource(5532U);
    msg.setSourceEntity(253U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6385284754124021;

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
    msg.setTimeStamp(0.9979769001881987);
    msg.setSource(51259U);
    msg.setSourceEntity(216U);
    msg.setDestination(56083U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5295754294152278;

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
    msg.setTimeStamp(0.3857474806204152);
    msg.setSource(8988U);
    msg.setSourceEntity(72U);
    msg.setDestination(16044U);
    msg.setDestinationEntity(166U);
    msg.value = 0.3008604834306903;

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
    msg.setTimeStamp(0.2607870494839891);
    msg.setSource(29025U);
    msg.setSourceEntity(50U);
    msg.setDestination(27468U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7280431164197307;

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
    msg.setTimeStamp(0.45307654083104876);
    msg.setSource(17284U);
    msg.setSourceEntity(194U);
    msg.setDestination(36819U);
    msg.setDestinationEntity(75U);
    msg.value = 0.3157214777636086;

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
    msg.setTimeStamp(0.4974855615893451);
    msg.setSource(16718U);
    msg.setSourceEntity(175U);
    msg.setDestination(28608U);
    msg.setDestinationEntity(22U);
    msg.value = 0.17024174252329294;

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
    msg.setTimeStamp(0.35743056473185486);
    msg.setSource(3347U);
    msg.setSourceEntity(223U);
    msg.setDestination(35578U);
    msg.setDestinationEntity(83U);
    msg.value = 0.05480063958079606;

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
    msg.setTimeStamp(0.4846663682251723);
    msg.setSource(655U);
    msg.setSourceEntity(3U);
    msg.setDestination(62680U);
    msg.setDestinationEntity(34U);
    msg.value = 0.9230122201585967;

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
    msg.setTimeStamp(0.2874973221662366);
    msg.setSource(64311U);
    msg.setSourceEntity(56U);
    msg.setDestination(55866U);
    msg.setDestinationEntity(6U);
    msg.value = 0.239005759990626;

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
    msg.setTimeStamp(0.27396833848873015);
    msg.setSource(28612U);
    msg.setSourceEntity(90U);
    msg.setDestination(47351U);
    msg.setDestinationEntity(167U);
    msg.value = 0.8009641865998357;

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
    msg.setTimeStamp(0.3550148284448261);
    msg.setSource(24117U);
    msg.setSourceEntity(52U);
    msg.setDestination(57620U);
    msg.setDestinationEntity(185U);
    msg.value = 0.15925759220604319;

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
    msg.setTimeStamp(0.15005093571319872);
    msg.setSource(16742U);
    msg.setSourceEntity(174U);
    msg.setDestination(61391U);
    msg.setDestinationEntity(149U);
    msg.value = 0.18673513655086016;

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
    msg.setTimeStamp(0.0975260743919325);
    msg.setSource(16797U);
    msg.setSourceEntity(119U);
    msg.setDestination(34068U);
    msg.setDestinationEntity(35U);
    msg.value = 0.5547823395944798;

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
    msg.setTimeStamp(0.8079766124028869);
    msg.setSource(58232U);
    msg.setSourceEntity(92U);
    msg.setDestination(29402U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8119128479715714;

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
    msg.setTimeStamp(0.3708965939708405);
    msg.setSource(17952U);
    msg.setSourceEntity(44U);
    msg.setDestination(56680U);
    msg.setDestinationEntity(152U);
    msg.direction = 0.519928503255026;
    msg.speed = 0.3767714667371339;

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
    msg.setTimeStamp(0.9556078333395136);
    msg.setSource(15654U);
    msg.setSourceEntity(111U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(91U);
    msg.direction = 0.4766428502702089;
    msg.speed = 0.299491146511062;

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
    msg.setTimeStamp(0.7893166444151741);
    msg.setSource(35190U);
    msg.setSourceEntity(79U);
    msg.setDestination(22965U);
    msg.setDestinationEntity(62U);
    msg.direction = 0.6800593632702442;
    msg.speed = 0.026581982754567024;

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
    msg.setTimeStamp(0.8619171936187511);
    msg.setSource(21822U);
    msg.setSourceEntity(73U);
    msg.setDestination(928U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7296810872964076;

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
    msg.setTimeStamp(0.30028972449801417);
    msg.setSource(16880U);
    msg.setSourceEntity(121U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(224U);
    msg.value = 0.7365752129699802;

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
    msg.setTimeStamp(0.5993969350923464);
    msg.setSource(19426U);
    msg.setSourceEntity(172U);
    msg.setDestination(58564U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8435201136724115;

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
    msg.setTimeStamp(0.423539882689173);
    msg.setSource(36961U);
    msg.setSourceEntity(160U);
    msg.setDestination(11486U);
    msg.setDestinationEntity(194U);
    msg.value.assign("SGJFRLJVCHHOPEHLGCCFXPUICWWXKXENBCJGEQNUPLIYDYTSAIQUVNVBWUBAKDIKUVRVVWI");

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
    msg.setTimeStamp(0.47455839289586);
    msg.setSource(23359U);
    msg.setSourceEntity(180U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(171U);
    msg.value.assign("SXNJMEIEWXRKLDBOPOIHXGYXEBCGHFIXPYSAPBTTZMXRISAIZQCPVSOGABYFVKZILOHUKLVCKJKODWMQOTPUAYOQSDESHWFIHFKNZQOLZLNETVADRHNWOBDYNWKDTLDWFCVEDTKRVCCUFNUPJFEQFSJAUYAYWHTJMGIDACJNVQVJGLNLUDEHYQUQCHMMZCSMJKSFWXFERZ");

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
    msg.setTimeStamp(0.6707811397272062);
    msg.setSource(28910U);
    msg.setSourceEntity(168U);
    msg.setDestination(45441U);
    msg.setDestinationEntity(104U);
    msg.value.assign("CALHWTSGAVENGQIDWFVNKJQESVNYDOUFXIDGUZQBOWVWHDSTCKPIHBLUZXRSMHQMVSXKKZXIFUBNZIZGOREERFCTHZXZPOSDDITMYLKURKMOUIVCNZFYYEGHPVNJYOBJKCKKWJLPCJXGRWLBUNIMQBYNPXERWSPMVQRAFUMDBTITYOCNLLPBDHFYEHPBLOTSFAHCYTLO");

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
    msg.setTimeStamp(0.04284956240463522);
    msg.setSource(28772U);
    msg.setSourceEntity(208U);
    msg.setDestination(53832U);
    msg.setDestinationEntity(145U);
    const char tmp_msg_0[] = {-100, -3, -109, -126, -27, -44, -79, 115, 45, 107, 39, -3, 2, 61, 27, 9, -40, 37, -37, 80, -102, -21, -108, 101, -86, -95, 11, -28, 123, 59, 28, 15, -117, -8, 94, -100, 33, -3, -126, -65, 62, 53, 91, -61, -60, -78, -55, -99, 8, -99, 26, -102, 20, -110, -35, 95, 104, -84, -46, -15, 87, -103, -28, -68, 22, 19, -30, 28, -103, -37, -71, -74, 33, -101, 82, -89, 102, 109, -13, 62, 94, -42, 42, -24, -22, -61, 44, 105, -118, -1, 126, -81, -34, -12, 36, 124, -109, -31, -73, 15, -108, -99, -24, 37, -94, -26, -49, -97, 10, 69, 38, -122, -50, 122, 99, -70, 119, -122, -123, 29, 75, -83, -70, 119, -126, -62, -92, 92, -59, -26, -59, -1, 116, -45, -68, 25, 80, -1, 113, 111, -85, 51, -25, -9, 22, 108, -99, -89, -51, 24, 59, -66, -74, -127, 120, -68, -27, -88, 82, 111, 42, -26, 25, -96, -60, 44, 126, 78, 83, -8, 117, -110, -45, 46, -122, -109, -91, 82, 58, 126, -1, -9, 76, -12, 62, 87, -47, -41, -68, -73, 60, 122, 112, 30, -100, 64, -76, -20, 107, -27, -92, -33, 23, -55, -9, -27, 104, 66, 38, -113, 13, -46, -1, 77, 65, 61, 47, 33, -42, -72, 63, -42, 100, -50, -41, 81, -6, 77, 115, 38, -116, -70, 84, 106, -19, 19};
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
    msg.setTimeStamp(0.5107603826346359);
    msg.setSource(60704U);
    msg.setSourceEntity(59U);
    msg.setDestination(5049U);
    msg.setDestinationEntity(254U);
    const char tmp_msg_0[] = {30, -82, 116, 119, 42, -116, -99, 117, 50, -91, -125, -19, -27, -113, 31, 9, 38, -69, -65, 114, -1, -93, -93, -29, 100, -126, 124, 77, -109, -92, -6, 124, 116, -51, -87, 41, -27, 111, -42, 18, -67, 72, 101, -7, 9, 121, 62, 64, -77, 51, 68, -117, -117, 5, 121, -59, -89, -67, -79, 119, -25, 19, -104, 126, -104, -115, 48, -55, -11, -93, -56, -7, -77, 23, -68, 37, 65, -123, 96, 70, 110, -54, 108};
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
    msg.setTimeStamp(0.0804762799800317);
    msg.setSource(25371U);
    msg.setSourceEntity(189U);
    msg.setDestination(56353U);
    msg.setDestinationEntity(219U);
    const char tmp_msg_0[] = {41, 48, 109, 118, -89, 18, 112, 118, 63, -105, -116, 86, -14, 45, 99, 114, -96, 94, 28, 94, -79, -66, 59, 82, 52, -57, -17, -47, 113, 89, -36, 90, -115, -56, 48, -54, -57, -107, 29, 114, -118, -58, 57, 94, -59, -104, -44, 54, 88, -11, 96, 1, 122, 106, -21, -8, 82, -102, -3, -18, -20, 73, -81, -20, -99, -14, 119, 101, -40, -37, -64, 90, -25, -52, -59, -22, 64, -109, 4, 9, 18, 96, 72, -47, -77, 22, 105, -72, 75, 113, 52, -116, 85, -93, 40, 119, 5, 2, 5, -43, 41, 65, -81, 68, 90, 126, 9, 96, 81, -3, 16, -20, -52, 55, 112, -50, 123, -93, -101, 111};
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
    msg.setTimeStamp(0.8708392946624869);
    msg.setSource(9541U);
    msg.setSourceEntity(226U);
    msg.setDestination(26896U);
    msg.setDestinationEntity(2U);
    msg.frequency = 2169291884U;
    msg.min_range = 44703U;
    msg.max_range = 58501U;

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
    msg.setTimeStamp(0.6487887646272136);
    msg.setSource(43388U);
    msg.setSourceEntity(67U);
    msg.setDestination(21155U);
    msg.setDestinationEntity(183U);
    msg.frequency = 98019746U;
    msg.min_range = 28738U;
    msg.max_range = 5590U;

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
    msg.setTimeStamp(0.8518971911903197);
    msg.setSource(3729U);
    msg.setSourceEntity(84U);
    msg.setDestination(47196U);
    msg.setDestinationEntity(203U);
    msg.frequency = 3879743966U;
    msg.min_range = 24085U;
    msg.max_range = 12891U;

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
    msg.setTimeStamp(0.2509119800628693);
    msg.setSource(19823U);
    msg.setSourceEntity(253U);
    msg.setDestination(36563U);
    msg.setDestinationEntity(174U);
    msg.type = 227U;
    msg.frequency = 2365093646U;
    msg.min_range = 47631U;
    msg.max_range = 42469U;
    msg.bits_per_point = 244U;
    msg.scale_factor = 0.8211880304253459;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.09514085750813606;
    tmp_msg_0.beam_height = 0.9711416666703511;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {74, 33, -7, -49, -21, -30, -81, 17, 9, 24, -18, -27, 118, -26, 88, -71, 38, 22, 8, -3, 35, 20, 28, -6, -112, -86, 111, 56, 79, -31, -86, 89, -11, 70, 52, 73, -17, 61, -115, -44, -51, -98, 92, 17, 1, -86, -87, -125, 63, 114, -37, -128, -119, 54, 12, 8, -55, -114, 58, 87, 109, -47};
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
    msg.setTimeStamp(0.7809643968070488);
    msg.setSource(9313U);
    msg.setSourceEntity(253U);
    msg.setDestination(34736U);
    msg.setDestinationEntity(115U);
    msg.type = 111U;
    msg.frequency = 3927910123U;
    msg.min_range = 42869U;
    msg.max_range = 37156U;
    msg.bits_per_point = 94U;
    msg.scale_factor = 0.27416785398355215;
    const char tmp_msg_0[] = {7, -41, 69, -72, 83, 29, -124, -15, -60, -112, 88, 56, -91, -12, 51, -121, -28, 110, -35, 95, 102, 21, 80, 63, -74, 57, 98, 97, -14, 100, -10, -125, 125, -101, 65, -14, 51, -91, 41, 41, -96, -78, 63, -89, 66, -26, -32, -99, -45, -25, 69, -68, -118, 16, 61, 107, 83, -23, -89, -44, 11, 36, -17, -34, -58, -121, -87, 6, 12, 15, 96, 38, -57, -89, 122, -14, -108, 3, 11, 17, 46, 32, -128, 119, -17, -38, 0, -11, -49, -51, 109, 58, 15, 0, 12, -107, -6, 47, -70, -76, -43, 115, 102, -23, -71, -64, -13, -92, -98, -65, -43, -87, -73, 53, -83, -86, -4, 36, -73, 16, 117, -50, 122, -127, -74, 37, 123, -65, 59, -72, -128, -9};
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
    msg.setTimeStamp(0.42942017938587873);
    msg.setSource(17262U);
    msg.setSourceEntity(25U);
    msg.setDestination(9652U);
    msg.setDestinationEntity(12U);
    msg.type = 66U;
    msg.frequency = 2532666574U;
    msg.min_range = 35191U;
    msg.max_range = 20801U;
    msg.bits_per_point = 40U;
    msg.scale_factor = 0.44068375446871433;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.19730116176500512;
    tmp_msg_0.beam_height = 0.3914637223918296;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-127, -88, -8, -6, 62, 120, 0, 38, 72, -17, 118, -114, 42, -15, 1, 77, 56, 5, -42, -110, 5, -112, -123, 122, 25, 34, 32, -3, 34, 15, -95, 87, -40, -90, 87, -5, 49, -70, -103, -80, -99, -13, 7, -97, 111, -116, 110, -64, 77, 7, -87, 32, 60, -35, 40, -55, -16, -66, 13, 67, 56, -98, 110, 61, -67, -15, -39, 79, 70, 95, -107, 8, 22, 85, 11, -22, -39, -23, -14, 6, -66, 93, 15, 104, 58, 43, -102, -125, 4, 80, 23, -127, -115, -58, -125, -90, -21};
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
    msg.setTimeStamp(0.48936838040866026);
    msg.setSource(23120U);
    msg.setSourceEntity(96U);
    msg.setDestination(34437U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.3399889718917398);
    msg.setSource(22098U);
    msg.setSourceEntity(66U);
    msg.setDestination(7862U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.17231327834551813);
    msg.setSource(4856U);
    msg.setSourceEntity(106U);
    msg.setDestination(37211U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.3050406011120831);
    msg.setSource(58914U);
    msg.setSourceEntity(96U);
    msg.setDestination(24062U);
    msg.setDestinationEntity(158U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.5936679660112548);
    msg.setSource(23928U);
    msg.setSourceEntity(159U);
    msg.setDestination(46431U);
    msg.setDestinationEntity(157U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.9965691489574771);
    msg.setSource(45177U);
    msg.setSourceEntity(235U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(129U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.7741370869861247);
    msg.setSource(51216U);
    msg.setSourceEntity(241U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(174U);
    msg.value = 0.719917093893159;
    msg.confidence = 0.7896255915627062;
    msg.opmodes.assign("VXMBAVCHISBSRMBPCFZRHZQBTVTJTPGCBBAODXKUPVFKSFEGNQJMHJVJGYPIOQGTQXUMWUCFNCITQMJANIGVUNMUASDZOOKELRPSAWWVLROIDXRVZRYJZAWWCYILZWIPYSAZPWQUIXDYJCBOEMHKN");

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
    msg.setTimeStamp(0.8878548373990416);
    msg.setSource(55310U);
    msg.setSourceEntity(0U);
    msg.setDestination(1990U);
    msg.setDestinationEntity(98U);
    msg.value = 0.4014321133844929;
    msg.confidence = 0.4769277614030387;
    msg.opmodes.assign("HCJGUMKSGUMNPCJMRFEUMTCSOFXQKXDSNFVJSLVZZURGGKPLOODRPO");

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
    msg.setTimeStamp(0.5616179301726149);
    msg.setSource(60503U);
    msg.setSourceEntity(124U);
    msg.setDestination(20805U);
    msg.setDestinationEntity(90U);
    msg.value = 0.8828186760042376;
    msg.confidence = 0.5550059241850226;
    msg.opmodes.assign("WLENAFGATXUPBAYRQZHRHQZWICNCNKSDHIJOLFSDRFRQLYLDVQNPQINOSDXITDZXPPAKBSOYBAFTEGYESCRNKNGIBXUBUEVXSRHOSCYIQYOMHIZEKEAALVAZTGJUFIDOTFX");

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
    msg.setTimeStamp(0.23438143118688937);
    msg.setSource(47144U);
    msg.setSourceEntity(80U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(127U);
    msg.itow = 2837928030U;
    msg.lat = 0.8800178507344252;
    msg.lon = 0.11621463921657915;
    msg.height_ell = 0.5844455880169668;
    msg.height_sea = 0.9924666703799115;
    msg.hacc = 0.11080030412976793;
    msg.vacc = 0.4090966268258396;
    msg.vel_n = 0.9782759217168716;
    msg.vel_e = 0.6701451923015822;
    msg.vel_d = 0.5316982262823097;
    msg.speed = 0.1471923817454418;
    msg.gspeed = 0.7826327064767964;
    msg.heading = 0.4584938048236713;
    msg.sacc = 0.27223877084147996;
    msg.cacc = 0.5804180793081587;

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
    msg.setTimeStamp(0.5808365228889222);
    msg.setSource(28491U);
    msg.setSourceEntity(250U);
    msg.setDestination(63160U);
    msg.setDestinationEntity(3U);
    msg.itow = 3897874411U;
    msg.lat = 0.511351564159699;
    msg.lon = 0.5631209712139225;
    msg.height_ell = 0.48664098215913976;
    msg.height_sea = 0.19710983844477747;
    msg.hacc = 0.5652033509199126;
    msg.vacc = 0.4898748663236189;
    msg.vel_n = 0.3494737182927359;
    msg.vel_e = 0.5618597066983517;
    msg.vel_d = 0.4939311541667233;
    msg.speed = 0.8016833579456979;
    msg.gspeed = 0.32995818724927095;
    msg.heading = 0.15265946841338107;
    msg.sacc = 0.9537934178622595;
    msg.cacc = 0.5295497579582537;

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
    msg.setTimeStamp(0.11722860210030084);
    msg.setSource(39746U);
    msg.setSourceEntity(164U);
    msg.setDestination(29718U);
    msg.setDestinationEntity(183U);
    msg.itow = 3851982966U;
    msg.lat = 0.8499299789733438;
    msg.lon = 0.9334401247498402;
    msg.height_ell = 0.3369964427471491;
    msg.height_sea = 0.4194995944971921;
    msg.hacc = 0.15629612497745227;
    msg.vacc = 0.18031587016126893;
    msg.vel_n = 0.17833365265717394;
    msg.vel_e = 0.884162740723379;
    msg.vel_d = 0.4191288834174155;
    msg.speed = 0.25706408924417457;
    msg.gspeed = 0.04002067983134405;
    msg.heading = 0.8519626025571209;
    msg.sacc = 0.8334988980592709;
    msg.cacc = 0.8059577224482155;

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
    msg.setTimeStamp(0.9248282301821527);
    msg.setSource(453U);
    msg.setSourceEntity(222U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(104U);
    msg.id = 209U;
    msg.value = 0.004356910537900882;

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
    msg.setTimeStamp(0.6217676460425934);
    msg.setSource(28869U);
    msg.setSourceEntity(204U);
    msg.setDestination(5870U);
    msg.setDestinationEntity(4U);
    msg.id = 92U;
    msg.value = 0.002611167913315837;

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
    msg.setTimeStamp(0.37647220526014735);
    msg.setSource(30612U);
    msg.setSourceEntity(1U);
    msg.setDestination(13691U);
    msg.setDestinationEntity(213U);
    msg.id = 114U;
    msg.value = 0.6780962217622228;

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
    msg.setTimeStamp(0.24172922560254917);
    msg.setSource(49574U);
    msg.setSourceEntity(69U);
    msg.setDestination(4295U);
    msg.setDestinationEntity(127U);
    msg.x = 0.5364353767946335;
    msg.y = 0.5528300550829293;
    msg.z = 0.5225952586032628;
    msg.phi = 0.021182230199074392;
    msg.theta = 0.8915291979980474;
    msg.psi = 0.392632440761552;

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
    msg.setTimeStamp(0.5266108678930898);
    msg.setSource(50119U);
    msg.setSourceEntity(24U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(82U);
    msg.x = 0.5289668649948637;
    msg.y = 0.05031168537776276;
    msg.z = 0.7649711821034928;
    msg.phi = 0.5560973121856068;
    msg.theta = 0.011022349174650836;
    msg.psi = 0.33274809062163957;

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
    msg.setTimeStamp(0.6737605216340867);
    msg.setSource(47645U);
    msg.setSourceEntity(120U);
    msg.setDestination(5071U);
    msg.setDestinationEntity(183U);
    msg.x = 0.3109300393851273;
    msg.y = 0.38031186777698844;
    msg.z = 0.0425194536396265;
    msg.phi = 0.23906980162629643;
    msg.theta = 0.2645757656786847;
    msg.psi = 0.20924538084645616;

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
    msg.setTimeStamp(0.17867138668740679);
    msg.setSource(57727U);
    msg.setSourceEntity(115U);
    msg.setDestination(14110U);
    msg.setDestinationEntity(196U);
    msg.beam_width = 0.652896136015115;
    msg.beam_height = 0.8465258157597988;

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
    msg.setTimeStamp(0.3537855342580678);
    msg.setSource(57877U);
    msg.setSourceEntity(30U);
    msg.setDestination(57153U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.8959117594636119;
    msg.beam_height = 0.094673109344801;

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
    msg.setTimeStamp(0.0394549099482413);
    msg.setSource(23972U);
    msg.setSourceEntity(8U);
    msg.setDestination(33187U);
    msg.setDestinationEntity(205U);
    msg.beam_width = 0.884479933780564;
    msg.beam_height = 0.8144222648571756;

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
    msg.setTimeStamp(0.4137989289620273);
    msg.setSource(39532U);
    msg.setSourceEntity(172U);
    msg.setDestination(49693U);
    msg.setDestinationEntity(2U);
    msg.sane = 24U;

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
    msg.setTimeStamp(0.5293970278266589);
    msg.setSource(32404U);
    msg.setSourceEntity(67U);
    msg.setDestination(31310U);
    msg.setDestinationEntity(146U);
    msg.sane = 152U;

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
    msg.setTimeStamp(0.6052316697103345);
    msg.setSource(16297U);
    msg.setSourceEntity(250U);
    msg.setDestination(13071U);
    msg.setDestinationEntity(65U);
    msg.sane = 184U;

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
    msg.setTimeStamp(0.4903901432829533);
    msg.setSource(3000U);
    msg.setSourceEntity(74U);
    msg.setDestination(2250U);
    msg.setDestinationEntity(70U);
    msg.id = 220U;
    msg.zoom = 115U;
    msg.action = 181U;

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
    msg.setTimeStamp(0.9433201958954879);
    msg.setSource(42053U);
    msg.setSourceEntity(9U);
    msg.setDestination(49358U);
    msg.setDestinationEntity(135U);
    msg.id = 91U;
    msg.zoom = 211U;
    msg.action = 64U;

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
    msg.setTimeStamp(0.8542360543438963);
    msg.setSource(22442U);
    msg.setSourceEntity(30U);
    msg.setDestination(28292U);
    msg.setDestinationEntity(71U);
    msg.id = 36U;
    msg.zoom = 28U;
    msg.action = 223U;

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
    msg.setTimeStamp(0.9000552425478506);
    msg.setSource(3438U);
    msg.setSourceEntity(235U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(140U);
    msg.id = 90U;
    msg.value = 0.6665816580292766;

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
    msg.setTimeStamp(0.5875217293355015);
    msg.setSource(56267U);
    msg.setSourceEntity(82U);
    msg.setDestination(57068U);
    msg.setDestinationEntity(61U);
    msg.id = 216U;
    msg.value = 0.058762263550184435;

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
    msg.setTimeStamp(0.9962594103559091);
    msg.setSource(64389U);
    msg.setSourceEntity(124U);
    msg.setDestination(22284U);
    msg.setDestinationEntity(138U);
    msg.id = 177U;
    msg.value = 0.8357557013750713;

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
    msg.setTimeStamp(0.0933458660379951);
    msg.setSource(19351U);
    msg.setSourceEntity(138U);
    msg.setDestination(138U);
    msg.setDestinationEntity(0U);
    msg.id = 216U;
    msg.value = 0.42499461179210785;

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
    msg.setTimeStamp(0.7300270452985659);
    msg.setSource(45566U);
    msg.setSourceEntity(116U);
    msg.setDestination(6281U);
    msg.setDestinationEntity(156U);
    msg.id = 36U;
    msg.value = 0.37307804219949914;

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
    msg.setTimeStamp(0.7567319239867861);
    msg.setSource(54812U);
    msg.setSourceEntity(224U);
    msg.setDestination(19975U);
    msg.setDestinationEntity(63U);
    msg.id = 114U;
    msg.value = 0.007307246998534578;

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
    msg.setTimeStamp(0.5929892954903895);
    msg.setSource(9327U);
    msg.setSourceEntity(93U);
    msg.setDestination(4706U);
    msg.setDestinationEntity(162U);
    msg.id = 28U;
    msg.angle = 0.4761888061150936;

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
    msg.setTimeStamp(0.37895682459179947);
    msg.setSource(40369U);
    msg.setSourceEntity(25U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(144U);
    msg.id = 112U;
    msg.angle = 0.732715959169831;

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
    msg.setTimeStamp(0.09145722673266721);
    msg.setSource(36482U);
    msg.setSourceEntity(0U);
    msg.setDestination(49676U);
    msg.setDestinationEntity(99U);
    msg.id = 207U;
    msg.angle = 0.16225047885708832;

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
    msg.setTimeStamp(0.18469787612830246);
    msg.setSource(33395U);
    msg.setSourceEntity(119U);
    msg.setDestination(53146U);
    msg.setDestinationEntity(226U);
    msg.op = 210U;
    msg.actions.assign("UNIVHWZHOSCKLNRFPYRWITAPZFSKCNXKCWXJBLOBXSVBBOIHKZEQQFAZRZLKXURFXZCIXBIDCAUFVXYQDEVNULMFMWGSBLAQIRKIROJUHEETMMYTLOYMJRPAODGVEJCENVDPJMSHLQCMASAIWYOWGQATTXYMQGFDPVCKQDQMXKWDTNDYTGA");

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
    msg.setTimeStamp(0.26951459657449217);
    msg.setSource(28208U);
    msg.setSourceEntity(221U);
    msg.setDestination(51840U);
    msg.setDestinationEntity(224U);
    msg.op = 55U;
    msg.actions.assign("CLHQAARSRNILPLZWMISJKTXADJRKTNSBWXBIVPXDWNFKJRWU");

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
    msg.setTimeStamp(0.06073678159149676);
    msg.setSource(50084U);
    msg.setSourceEntity(135U);
    msg.setDestination(39436U);
    msg.setDestinationEntity(216U);
    msg.op = 69U;
    msg.actions.assign("NNFZMTFLHKVWRKGGHHNUPYMXCOYAGXRXQDJEPDBTUALLRTDJETTLJVWJDNHWFZOYURXYZYUUISNGHKNISSZSYFYKDQOQMPEHCKCYBFFOLNJBFEPCOJCBUSVLWPESXOVJIQXARIOZAMQRWBQJAUAVPMTGRQJNRIXAKVKHVNDDWULCSCFTPHZTFKAPBQDXIRDHYWLGSAMWWJDV");

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
    msg.setTimeStamp(0.6540402347834764);
    msg.setSource(32982U);
    msg.setSourceEntity(69U);
    msg.setDestination(18297U);
    msg.setDestinationEntity(147U);
    msg.actions.assign("RNWQLFUVNBNGQVMBRSYGIHIDOXFXJCWGWUFUEPBTTOONVKGHHMTOMOGZAAUUSINKYAXBZOEPKJVTNIZTMWBIDPXEKHPJGMGZOARPCHCWLLPKFQFELPTVJQGJAEWUCDKNACVALDJZDWUZBMBRFDLNIDSKVLESQBY");

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
    msg.setTimeStamp(0.8852074413036047);
    msg.setSource(9075U);
    msg.setSourceEntity(81U);
    msg.setDestination(18414U);
    msg.setDestinationEntity(149U);
    msg.actions.assign("DZLKNXZALUVXQ");

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
    msg.setTimeStamp(0.8638096441559827);
    msg.setSource(61437U);
    msg.setSourceEntity(243U);
    msg.setDestination(9764U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("PFUEUZNCLVIPBGMRQLJAMKYSOEDAENGFEGTJKVTMGVGBMNFPHOFHYLZFBUCPYYKXPBAMABXUAZCAQUXSRGCKTDRWWDSQKERDSJCNRNWJFAYJNGFLQRYZALMLARXHJITJOZDUSDOVCQVAKKOSBJEBCQYTEMKODKORINOQXFSILIUPDEQGVTHUTHWZHFYZVIGHTZRXXULTIMVNLQIZUNQVSPXWNJBOCOWDFDMEHIPRCBGPYXYWWETCLSKVWXBPS");

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
    msg.setTimeStamp(0.2789499181846421);
    msg.setSource(46855U);
    msg.setSourceEntity(38U);
    msg.setDestination(10119U);
    msg.setDestinationEntity(82U);
    msg.button = 223U;
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
    msg.setTimeStamp(0.9647891130735222);
    msg.setSource(57005U);
    msg.setSourceEntity(81U);
    msg.setDestination(52991U);
    msg.setDestinationEntity(191U);
    msg.button = 188U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.004156314581091114);
    msg.setSource(19147U);
    msg.setSourceEntity(20U);
    msg.setDestination(38517U);
    msg.setDestinationEntity(244U);
    msg.button = 50U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.991968265055823);
    msg.setSource(1902U);
    msg.setSourceEntity(143U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(194U);
    msg.op = 212U;
    msg.text.assign("WOTWEUEFQBRSUGFUBXZISQEWMFOGATLLNFFZTQZQNULRWVECZFXOGOGHSKFFCYCOEBOGWEHKQKJAWQYIHLXUKMPSIRCTJPBIGCXCEWOPDWSZCYXMHBVITVAVVHTHUNJLAVQBRFPYTVRZHHYJDNDAWMCIIVLBDKOJBDXFZSRRZDDMMDLPBPYAYUAPHOUKURTJXQNLIMNBKNIMTAILCHZGQYXJOCTKUVJGEQXPKSDWGXS");

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
    msg.setTimeStamp(0.498254053433554);
    msg.setSource(36404U);
    msg.setSourceEntity(159U);
    msg.setDestination(17726U);
    msg.setDestinationEntity(44U);
    msg.op = 42U;
    msg.text.assign("MGAQSJKURWWAYFJKQORDZCKYKNCARREUWVHTBGVLCBIIQTCGLDTKWOBFXIGOCACOJQTFHNFGZIRSBZUSNPMCWCEINYESZDLOIBTAEWJEQRGXIPDEUQXLMZFUNBEHLDHDPSFDLHWVQVYLXAMJXWFKU");

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
    msg.setTimeStamp(0.9723927166627937);
    msg.setSource(19327U);
    msg.setSourceEntity(146U);
    msg.setDestination(62170U);
    msg.setDestinationEntity(31U);
    msg.op = 189U;
    msg.text.assign("PBALEGPTUVGIEQ");

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
    msg.setTimeStamp(0.32611977030125483);
    msg.setSource(19757U);
    msg.setSourceEntity(240U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(69U);
    msg.op = 189U;
    msg.time_remain = 0.9421664204309075;
    msg.sched_time = 0.6360847258865112;

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
    msg.setTimeStamp(0.5042435360439367);
    msg.setSource(59016U);
    msg.setSourceEntity(132U);
    msg.setDestination(18640U);
    msg.setDestinationEntity(147U);
    msg.op = 200U;
    msg.time_remain = 0.9703891145865756;
    msg.sched_time = 0.4108757189436204;

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
    msg.setTimeStamp(0.974811135266655);
    msg.setSource(25261U);
    msg.setSourceEntity(174U);
    msg.setDestination(54458U);
    msg.setDestinationEntity(100U);
    msg.op = 178U;
    msg.time_remain = 0.901344519230587;
    msg.sched_time = 0.7151187116950444;

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
    msg.setTimeStamp(0.4757868818496339);
    msg.setSource(51614U);
    msg.setSourceEntity(197U);
    msg.setDestination(40624U);
    msg.setDestinationEntity(87U);
    msg.name.assign("TZNQXLVUVWMJMVICEXXSTNWHMOVBWFFFBCFDYMFZXRONPIYYDPIZASOKYDUFGZDHIETNHINJJLVSRQJDKBHISAKGCCODKWWCASHLOQGMYYLBJERLZTPIZSCIUJHZKTDTDGHQXRPUJXETOTECGBRGAGORFLJDWIEBEKSKSMLCZTNMPB");
    msg.op = 64U;
    msg.sched_time = 0.569611974237024;

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
    msg.setTimeStamp(0.8943117666664877);
    msg.setSource(1538U);
    msg.setSourceEntity(8U);
    msg.setDestination(34857U);
    msg.setDestinationEntity(107U);
    msg.name.assign("FCARVBABNKTOITAYPPLDPERIHXBJYPYGWVSPEILLLLNYQGRJIQZTTIDZJYEWQKYWJHCKYSFQPKNXGSZQCCSSGBXAYCXTOPHELTLKMURWSCOMOFBOHZIHJMOZHMRFFYCEEHFNZXABVTDXWGMRSRBQBLTUFJWAVWRKQNVIBLNMDQKMOZOEIZEOKRUDBTXFGCWDKHUGVSDLDUSAUICPHPVQGX");
    msg.op = 123U;
    msg.sched_time = 0.4601209712082225;

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
    msg.setTimeStamp(0.6452437405383499);
    msg.setSource(32021U);
    msg.setSourceEntity(53U);
    msg.setDestination(38936U);
    msg.setDestinationEntity(36U);
    msg.name.assign("RAKUQOSKBUWFUZIJMBWETQLQIWERCWHVQGRGJYMVUTKHTXYEJVVQQNDHFZBXDGUPNOHORLEYTYEBBEIZVKCOAGJUIWMSOGZHHPZNYTPHGXIOIQSYQXVDYAPIWSKMHABPXELTMFCTGDNOKYBF");
    msg.op = 18U;
    msg.sched_time = 0.29799079065668055;

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
    msg.setTimeStamp(0.9268458727169352);
    msg.setSource(4623U);
    msg.setSourceEntity(79U);
    msg.setDestination(42313U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.5167013356412773);
    msg.setSource(10988U);
    msg.setSourceEntity(29U);
    msg.setDestination(29236U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.7689767498943102);
    msg.setSource(14828U);
    msg.setSourceEntity(79U);
    msg.setDestination(49329U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.07086278170472304);
    msg.setSource(54175U);
    msg.setSourceEntity(176U);
    msg.setDestination(31745U);
    msg.setDestinationEntity(108U);
    msg.name.assign("IGQFEHQAJPYMYGLORYKENPFUUYEWHQSVFIPWWATOKUTFZBIHEDPGZYIFHWMACGYKCWQXFPLLDVRMPYCUDNIZWSALREBSHWIJXFMENXWUSVQJBKDDJZNOVROXE");
    msg.state = 199U;

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
    msg.setTimeStamp(0.6793707199278124);
    msg.setSource(6420U);
    msg.setSourceEntity(43U);
    msg.setDestination(26487U);
    msg.setDestinationEntity(194U);
    msg.name.assign("WLPFAGKPHCQGUUWSPWYJNHHIFOXERIVZIRDIQEENEBSCDUJBMCJRZVGEOTSYMCCGVGMKAJATMJHSLARCFKPORYDIBMVZPOHXNMMJJFEXXCVBCJZYSYNTPYIZOADNRXTADTDGMRQNW");
    msg.state = 191U;

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
    msg.setTimeStamp(0.46134258743964596);
    msg.setSource(17645U);
    msg.setSourceEntity(61U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(175U);
    msg.name.assign("MKOGSIBQSAZOCDVBFJXQAQEVVFDXWWHYKRVCNWOMKISTTMXGXL");
    msg.state = 170U;

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
    msg.setTimeStamp(0.7249097485040567);
    msg.setSource(56135U);
    msg.setSourceEntity(166U);
    msg.setDestination(51024U);
    msg.setDestinationEntity(252U);
    msg.name.assign("PARJODWDRVDDKXMKLJSBKJBPRWHDZUGPCLSMIRMQZTYMPMAGUGLMSPHQXQTXVKQCFYFNPLOQJWVJVGYYZUCWEDZQXIRFEXWJOJOTWQDWSOSUJTKT");
    msg.value = 231U;

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
    msg.setTimeStamp(0.32257299965700925);
    msg.setSource(64770U);
    msg.setSourceEntity(93U);
    msg.setDestination(43665U);
    msg.setDestinationEntity(213U);
    msg.name.assign("DCSBGEYZWUKUXUYSZTDLVJORAHSTJIENDQKVOCTFVLVOSKKIDHDNSKMQXYIDZVXWFYMFMGRZAGTQLUWDRF");
    msg.value = 141U;

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
    msg.setTimeStamp(0.060349626205870366);
    msg.setSource(34011U);
    msg.setSourceEntity(17U);
    msg.setDestination(39565U);
    msg.setDestinationEntity(82U);
    msg.name.assign("VPQNQUPFUJUOL");
    msg.value = 186U;

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
    msg.setTimeStamp(0.10587504190716157);
    msg.setSource(11541U);
    msg.setSourceEntity(202U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(203U);
    msg.name.assign("QMVUBOKHSZNKARZXYBOZTYDSLJNKDKZMYXWHYCXFQUEGBBRFNCOHRBQJALIVPYIYOABZAZVMNJLTEUMYQNJGCDXKSIWEVRSHGZDRDDDQTFKLLPEFEAKWTMSXYSOABXBIMCVGGGMSPHHQOUHEQWIFBMXAIYCKUPRPTUYLJGPXIWVDCSWHCLFKQFWVUQQMIF");

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
    msg.setTimeStamp(0.43598326110450214);
    msg.setSource(11203U);
    msg.setSourceEntity(18U);
    msg.setDestination(25205U);
    msg.setDestinationEntity(171U);
    msg.name.assign("BHVHWEKYYQEOTBXZCUVC");

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
    msg.setTimeStamp(0.19800889519589526);
    msg.setSource(16130U);
    msg.setSourceEntity(77U);
    msg.setDestination(12579U);
    msg.setDestinationEntity(39U);
    msg.name.assign("QYMLYCEUGKDZYPMCUGHLAEOUDKHTDAORYPRXPPHRTGQCCAYFGDGYFZFCUPWOSJKYDBNDPOIATIE");

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
    msg.setTimeStamp(0.18479279669505988);
    msg.setSource(61321U);
    msg.setSourceEntity(220U);
    msg.setDestination(24119U);
    msg.setDestinationEntity(98U);
    msg.name.assign("AXYDHWRMLKVMGWGJPOMKNUHNOVHILRJDCSSCESCIEWSBLTHFAFQXZRQOZUJHDDKFCCKLHXFCXMMZBNTTDTSAKCSRIYOOQLCFJTYXVBWPJGGMPPUGKYPALPDQSNIMKKMPEGXMEITYUFSHJEFEVEUSNBPUONQIJKNZWYIRLNUBPQCPEGQRQHUTSXZCVIGOAOBDDXQVUFRWOJWJMWXGAY");
    msg.value = 80U;

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
    msg.setTimeStamp(0.6519286291347178);
    msg.setSource(6006U);
    msg.setSourceEntity(228U);
    msg.setDestination(35564U);
    msg.setDestinationEntity(12U);
    msg.name.assign("ICXZSTUGYYFOQVUIWIZFMGVBKRBHCSBZMQHBUJYEIJXPUVQMRASGLXANGDSXKAEJMXVRDRMKTOQQAEPTHIQUVTUWUZXVMKDAICFUZOAMHRKXPNECFJZYFUYDXHELSEHKOLYYEWAPFXJBDWDVOOANOSZNJGBHNCZDLQAPXLWGIJT");
    msg.value = 29U;

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
    msg.setTimeStamp(0.7275692287275044);
    msg.setSource(55260U);
    msg.setSourceEntity(140U);
    msg.setDestination(37478U);
    msg.setDestinationEntity(78U);
    msg.name.assign("AGYLNTZSKJCFSGKCZLAQATDKIWEGPUZSSYTNMLPTAJXFSTTDXOSJMFGWDUAKYRXTWFHLMEPYPZWVCURPQSSVDGBSMQDKIRJKRJVCPOGYNQJXTMAXAXZNHUBOZBDJDTUBKAIMUGPZJVMCCYGMGZHQUBTYEXDIFEBKVIOHRPOUSNIHQLCBNOFKAGCOLYVWKOIVCFWMRHXVBLDERRUE");
    msg.value = 227U;

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
    msg.setTimeStamp(0.29511747392550447);
    msg.setSource(26988U);
    msg.setSourceEntity(64U);
    msg.setDestination(64659U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.8934327132167419;
    msg.lon = 0.7730816904410702;
    msg.height = 0.4589619832699783;
    msg.x = 0.20415834301305769;
    msg.y = 0.003680355214769948;
    msg.z = 0.3462035329468196;
    msg.phi = 0.9128478401375127;
    msg.theta = 0.185194598217435;
    msg.psi = 0.4365277800423446;
    msg.u = 0.18879515630606547;
    msg.v = 0.332013155326226;
    msg.w = 0.5490673802084729;
    msg.vx = 0.5249806811691275;
    msg.vy = 0.7021113615972001;
    msg.vz = 0.9017299576803826;
    msg.p = 0.5681276061495759;
    msg.q = 0.8204496355589704;
    msg.r = 0.6920215664046548;
    msg.depth = 0.2777031017270367;
    msg.alt = 0.3022530920576926;

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
    msg.setTimeStamp(0.355745162662952);
    msg.setSource(24870U);
    msg.setSourceEntity(222U);
    msg.setDestination(59855U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.3251881772980397;
    msg.lon = 0.18082365885414475;
    msg.height = 0.20922187588664154;
    msg.x = 0.8166020786042062;
    msg.y = 0.3905612143124212;
    msg.z = 0.13603262354895795;
    msg.phi = 0.8445824663308819;
    msg.theta = 0.9339803046798125;
    msg.psi = 0.5331376934916323;
    msg.u = 0.9447494363305347;
    msg.v = 0.034001452280019606;
    msg.w = 0.8610452367996182;
    msg.vx = 0.15206987111418468;
    msg.vy = 0.5417025580184487;
    msg.vz = 0.6205249200031048;
    msg.p = 0.6416205015571779;
    msg.q = 0.526288791386476;
    msg.r = 0.6937220621632051;
    msg.depth = 0.556584823491121;
    msg.alt = 0.2428106697587743;

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
    msg.setTimeStamp(0.07178661075560655);
    msg.setSource(650U);
    msg.setSourceEntity(77U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.5854758463572812;
    msg.lon = 0.7652186534379327;
    msg.height = 0.9051865442279545;
    msg.x = 0.8328625713021306;
    msg.y = 0.41659482865953645;
    msg.z = 0.044349337707442316;
    msg.phi = 0.7694308428015504;
    msg.theta = 0.35700193351259013;
    msg.psi = 0.9521526555394066;
    msg.u = 0.1921064630009356;
    msg.v = 0.22082241690025783;
    msg.w = 0.44586157966458473;
    msg.vx = 0.06945738198100593;
    msg.vy = 0.3736468999630729;
    msg.vz = 0.9579915533690623;
    msg.p = 0.2724168032462343;
    msg.q = 0.23216339834927668;
    msg.r = 0.4644579033470446;
    msg.depth = 0.6301166671530997;
    msg.alt = 0.7542782113085169;

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
    msg.setTimeStamp(0.7871860257773027);
    msg.setSource(1756U);
    msg.setSourceEntity(94U);
    msg.setDestination(26011U);
    msg.setDestinationEntity(46U);
    msg.x = 0.6307268180292026;
    msg.y = 0.9114226461671165;
    msg.z = 0.755882946720885;

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
    msg.setTimeStamp(0.3945469521735828);
    msg.setSource(25399U);
    msg.setSourceEntity(174U);
    msg.setDestination(509U);
    msg.setDestinationEntity(178U);
    msg.x = 0.13746137012964854;
    msg.y = 0.9364990115210312;
    msg.z = 0.8544824271485179;

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
    msg.setTimeStamp(0.4845041055036644);
    msg.setSource(40196U);
    msg.setSourceEntity(250U);
    msg.setDestination(42427U);
    msg.setDestinationEntity(2U);
    msg.x = 0.9231050263013603;
    msg.y = 0.5293437032358175;
    msg.z = 0.8879760077608022;

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
    msg.setTimeStamp(0.020832621391722594);
    msg.setSource(56424U);
    msg.setSourceEntity(133U);
    msg.setDestination(8677U);
    msg.setDestinationEntity(97U);
    msg.value = 0.4033106414125909;

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
    msg.setTimeStamp(0.26575703116470306);
    msg.setSource(50221U);
    msg.setSourceEntity(166U);
    msg.setDestination(56610U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9019568119026711;

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
    msg.setTimeStamp(0.5925812967251434);
    msg.setSource(60028U);
    msg.setSourceEntity(178U);
    msg.setDestination(7157U);
    msg.setDestinationEntity(254U);
    msg.value = 0.10026315209127457;

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
    msg.setTimeStamp(0.4545726005876658);
    msg.setSource(55731U);
    msg.setSourceEntity(75U);
    msg.setDestination(40327U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5139024959838999;

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
    msg.setTimeStamp(0.2812965355825555);
    msg.setSource(13623U);
    msg.setSourceEntity(45U);
    msg.setDestination(25300U);
    msg.setDestinationEntity(60U);
    msg.value = 0.04561940809016751;

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
    msg.setTimeStamp(0.9205528395250218);
    msg.setSource(47198U);
    msg.setSourceEntity(244U);
    msg.setDestination(41713U);
    msg.setDestinationEntity(238U);
    msg.value = 0.12439523627229032;

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
    msg.setTimeStamp(0.35771854311708073);
    msg.setSource(36757U);
    msg.setSourceEntity(119U);
    msg.setDestination(46843U);
    msg.setDestinationEntity(157U);
    msg.x = 0.6751204589235961;
    msg.y = 0.21848357231104265;
    msg.z = 0.7317849828606147;
    msg.phi = 0.11589602187465142;
    msg.theta = 0.8230692899877682;
    msg.psi = 0.6450136495993607;
    msg.p = 0.2635977305371239;
    msg.q = 0.9970404889613617;
    msg.r = 0.2688833408546437;
    msg.u = 0.06190292311870638;
    msg.v = 0.1144768214362174;
    msg.w = 0.8833120807026361;
    msg.bias_psi = 0.6072388224930527;
    msg.bias_r = 0.6864777561377048;

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
    msg.setTimeStamp(0.14518681193582117);
    msg.setSource(36289U);
    msg.setSourceEntity(49U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(248U);
    msg.x = 0.18548072219741196;
    msg.y = 0.8139811815297519;
    msg.z = 0.12730310880940632;
    msg.phi = 0.3566750601391563;
    msg.theta = 0.8637927133999143;
    msg.psi = 0.47213546963996256;
    msg.p = 0.03635867564980422;
    msg.q = 0.5374853639836783;
    msg.r = 0.7634151442414918;
    msg.u = 0.508951108262589;
    msg.v = 0.1240759614810717;
    msg.w = 0.3071997718033608;
    msg.bias_psi = 0.624878622618813;
    msg.bias_r = 0.42169966430464356;

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
    msg.setTimeStamp(0.2555096420815146);
    msg.setSource(4923U);
    msg.setSourceEntity(157U);
    msg.setDestination(34700U);
    msg.setDestinationEntity(161U);
    msg.x = 0.11072937999630228;
    msg.y = 0.015121852718793072;
    msg.z = 0.8230886130795141;
    msg.phi = 0.8955566994023111;
    msg.theta = 0.5997933897431781;
    msg.psi = 0.3957088965722797;
    msg.p = 0.8694780966475308;
    msg.q = 0.04717946899206371;
    msg.r = 0.29167697850555563;
    msg.u = 0.6308126700548299;
    msg.v = 0.17962262673953744;
    msg.w = 0.19400474463521067;
    msg.bias_psi = 0.5977460594503542;
    msg.bias_r = 0.21148848095143846;

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
    msg.setTimeStamp(0.7279656330712825);
    msg.setSource(2946U);
    msg.setSourceEntity(80U);
    msg.setDestination(41363U);
    msg.setDestinationEntity(13U);
    msg.bias_psi = 0.7980350776129636;
    msg.bias_r = 0.12977791371637915;
    msg.cog = 0.6940020366270162;
    msg.cyaw = 0.34081586114278306;
    msg.lbl_rej_level = 0.23876482622507278;
    msg.gps_rej_level = 0.610825216950558;
    msg.custom_x = 0.915774188364155;
    msg.custom_y = 0.9717516829824179;
    msg.custom_z = 0.37290369705891546;

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
    msg.setTimeStamp(0.31662966380627056);
    msg.setSource(59963U);
    msg.setSourceEntity(237U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(139U);
    msg.bias_psi = 0.35907397390517426;
    msg.bias_r = 0.40470317703586056;
    msg.cog = 0.4440615869664659;
    msg.cyaw = 0.08958734798495538;
    msg.lbl_rej_level = 0.30734201152259066;
    msg.gps_rej_level = 0.6695902420802182;
    msg.custom_x = 0.011223140402151666;
    msg.custom_y = 0.44731411971761736;
    msg.custom_z = 0.8934975913890488;

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
    msg.setTimeStamp(0.41771688692648057);
    msg.setSource(21563U);
    msg.setSourceEntity(65U);
    msg.setDestination(11997U);
    msg.setDestinationEntity(62U);
    msg.bias_psi = 0.7340920745443583;
    msg.bias_r = 0.5196279162003269;
    msg.cog = 0.30197660859140096;
    msg.cyaw = 0.8154936148129005;
    msg.lbl_rej_level = 0.6512361952073439;
    msg.gps_rej_level = 0.017447706171143884;
    msg.custom_x = 0.12515015066640078;
    msg.custom_y = 0.8241395720139968;
    msg.custom_z = 0.45714550085912586;

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
    msg.setTimeStamp(0.39170226154761456);
    msg.setSource(10596U);
    msg.setSourceEntity(41U);
    msg.setDestination(21467U);
    msg.setDestinationEntity(146U);
    msg.utc_time = 0.7896867761544764;
    msg.reason = 199U;

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
    msg.setTimeStamp(0.5201312874295188);
    msg.setSource(482U);
    msg.setSourceEntity(251U);
    msg.setDestination(4754U);
    msg.setDestinationEntity(226U);
    msg.utc_time = 0.33911262330263847;
    msg.reason = 171U;

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
    msg.setTimeStamp(0.09392420795095313);
    msg.setSource(10876U);
    msg.setSourceEntity(227U);
    msg.setDestination(37181U);
    msg.setDestinationEntity(64U);
    msg.utc_time = 0.6341233775407992;
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
    msg.setTimeStamp(0.4631489098645103);
    msg.setSource(15273U);
    msg.setSourceEntity(162U);
    msg.setDestination(36506U);
    msg.setDestinationEntity(16U);
    msg.id = 88U;
    msg.range = 0.08387798979288719;
    msg.acceptance = 42U;

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
    msg.setTimeStamp(0.18004614371207384);
    msg.setSource(63197U);
    msg.setSourceEntity(6U);
    msg.setDestination(38344U);
    msg.setDestinationEntity(84U);
    msg.id = 125U;
    msg.range = 0.7173548985185869;
    msg.acceptance = 82U;

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
    msg.setTimeStamp(0.17891619814637405);
    msg.setSource(10067U);
    msg.setSourceEntity(185U);
    msg.setDestination(39627U);
    msg.setDestinationEntity(215U);
    msg.id = 107U;
    msg.range = 0.08283673435887307;
    msg.acceptance = 170U;

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
    msg.setTimeStamp(0.946658141807887);
    msg.setSource(64589U);
    msg.setSourceEntity(243U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(32U);
    msg.type = 38U;
    msg.reason = 245U;
    msg.value = 0.22217366362040747;
    msg.timestep = 0.18848215054348783;

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
    msg.setTimeStamp(0.34285123847726673);
    msg.setSource(54023U);
    msg.setSourceEntity(142U);
    msg.setDestination(28140U);
    msg.setDestinationEntity(147U);
    msg.type = 137U;
    msg.reason = 194U;
    msg.value = 0.057395701560340795;
    msg.timestep = 0.6506731424482259;

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
    msg.setTimeStamp(0.4210825964887641);
    msg.setSource(2627U);
    msg.setSourceEntity(21U);
    msg.setDestination(24714U);
    msg.setDestinationEntity(107U);
    msg.type = 159U;
    msg.reason = 180U;
    msg.value = 0.4206025795007916;
    msg.timestep = 0.048892565062630955;

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
    msg.setTimeStamp(0.9387349054232044);
    msg.setSource(10208U);
    msg.setSourceEntity(160U);
    msg.setDestination(47287U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.7083976580658057);
    msg.setSource(60113U);
    msg.setSourceEntity(83U);
    msg.setDestination(22306U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.6644283839427828);
    msg.setSource(33748U);
    msg.setSourceEntity(95U);
    msg.setDestination(45359U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.2566242126573849);
    msg.setSource(42488U);
    msg.setSourceEntity(147U);
    msg.setDestination(64828U);
    msg.setDestinationEntity(5U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZVGTEHJMMRSUQKAIUODFXQZZVGDACCAKRWDMIDXTDVGKAMKVTYJCHUIBAXPZIYKRPENJONESVEBBFJSOFAVZNNTGVSJCPWGIWUE");
    tmp_msg_0.lat = 0.18328294861196404;
    tmp_msg_0.lon = 0.09336788566022458;
    tmp_msg_0.depth = 0.9773865168173498;
    tmp_msg_0.query_channel = 159U;
    tmp_msg_0.reply_channel = 139U;
    tmp_msg_0.transponder_delay = 56U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5160284182919751;
    msg.y = 0.40422687560957304;
    msg.var_x = 0.5838757814981479;
    msg.var_y = 0.23512434724440845;
    msg.distance = 0.3679916168090911;

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
    msg.setTimeStamp(0.7184475599469884);
    msg.setSource(58397U);
    msg.setSourceEntity(186U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(155U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VLXPQPTFNDDWGQZDOWBCBOJSBEIXMVMJCYFZQFQELMYIAGSTYUDUDKXYZYMNGUDTLZBWJXRXPWXMJIPDJGZEISZOINBRUBLCUZGBXLRRAAK");
    tmp_msg_0.lat = 0.7061743200255367;
    tmp_msg_0.lon = 0.571874033850959;
    tmp_msg_0.depth = 0.4315450662925251;
    tmp_msg_0.query_channel = 160U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 26U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5793285406656481;
    msg.y = 0.9489383948565032;
    msg.var_x = 0.6769534574064163;
    msg.var_y = 0.5032758791538081;
    msg.distance = 0.3369780002824636;

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
    msg.setTimeStamp(0.15273336491004708);
    msg.setSource(65431U);
    msg.setSourceEntity(128U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(25U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZIHJHEMFOFLFNCFLYOWCJPLBICIZBKWKDCGUXRQDVESSQWU");
    tmp_msg_0.lat = 0.14544453629718856;
    tmp_msg_0.lon = 0.44371074750875994;
    tmp_msg_0.depth = 0.7566392743802101;
    tmp_msg_0.query_channel = 208U;
    tmp_msg_0.reply_channel = 250U;
    tmp_msg_0.transponder_delay = 67U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.36370646692840314;
    msg.y = 0.21365233987978494;
    msg.var_x = 0.6673816055390233;
    msg.var_y = 0.7632664619090913;
    msg.distance = 0.11432098858918271;

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
    msg.setTimeStamp(0.3093350337163039);
    msg.setSource(11921U);
    msg.setSourceEntity(101U);
    msg.setDestination(4764U);
    msg.setDestinationEntity(53U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.3646022366215501);
    msg.setSource(20840U);
    msg.setSourceEntity(151U);
    msg.setDestination(23586U);
    msg.setDestinationEntity(149U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.09095026308895082);
    msg.setSource(30598U);
    msg.setSourceEntity(198U);
    msg.setDestination(7812U);
    msg.setDestinationEntity(90U);
    msg.state = 118U;

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
    msg.setTimeStamp(0.8329683087321278);
    msg.setSource(46382U);
    msg.setSourceEntity(152U);
    msg.setDestination(48454U);
    msg.setDestinationEntity(208U);
    msg.value = 0.156438190166736;

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
    msg.setTimeStamp(0.13650797471441256);
    msg.setSource(34094U);
    msg.setSourceEntity(40U);
    msg.setDestination(60135U);
    msg.setDestinationEntity(130U);
    msg.value = 0.10503819447093399;

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
    msg.setTimeStamp(0.5614419586279397);
    msg.setSource(51206U);
    msg.setSourceEntity(4U);
    msg.setDestination(25053U);
    msg.setDestinationEntity(170U);
    msg.value = 0.49637693679448336;

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
    msg.setTimeStamp(0.19645331944950517);
    msg.setSource(12410U);
    msg.setSourceEntity(102U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(181U);
    msg.value = 0.551462704939673;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.07428548242335786);
    msg.setSource(54570U);
    msg.setSourceEntity(64U);
    msg.setDestination(2421U);
    msg.setDestinationEntity(172U);
    msg.value = 0.5092871661687508;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.22320006338555587);
    msg.setSource(2944U);
    msg.setSourceEntity(141U);
    msg.setDestination(324U);
    msg.setDestinationEntity(122U);
    msg.value = 0.2753997119764653;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.9859057308620811);
    msg.setSource(27493U);
    msg.setSourceEntity(120U);
    msg.setDestination(56854U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6580475530333524;
    msg.speed_units = 244U;

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
    msg.setTimeStamp(0.6617037557603367);
    msg.setSource(19015U);
    msg.setSourceEntity(176U);
    msg.setDestination(51090U);
    msg.setDestinationEntity(141U);
    msg.value = 0.2308377629968279;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.9186117462966044);
    msg.setSource(12537U);
    msg.setSourceEntity(217U);
    msg.setDestination(60060U);
    msg.setDestinationEntity(48U);
    msg.value = 0.5205661016758162;
    msg.speed_units = 43U;

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
    msg.setTimeStamp(0.17534074037136338);
    msg.setSource(4352U);
    msg.setSourceEntity(155U);
    msg.setDestination(43458U);
    msg.setDestinationEntity(64U);
    msg.value = 0.0017889669018672505;

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
    msg.setTimeStamp(0.5360743010577417);
    msg.setSource(59142U);
    msg.setSourceEntity(228U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8286226321418791;

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
    msg.setTimeStamp(0.25198761968387595);
    msg.setSource(9686U);
    msg.setSourceEntity(69U);
    msg.setDestination(55254U);
    msg.setDestinationEntity(155U);
    msg.value = 0.38044462018826375;

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
    msg.setTimeStamp(0.6517353989806067);
    msg.setSource(4996U);
    msg.setSourceEntity(18U);
    msg.setDestination(62105U);
    msg.setDestinationEntity(21U);
    msg.value = 0.5835248634742528;

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
    msg.setTimeStamp(0.3137492464119146);
    msg.setSource(12130U);
    msg.setSourceEntity(76U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(94U);
    msg.value = 0.5799827165912623;

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
    msg.setTimeStamp(0.2297854408906519);
    msg.setSource(56825U);
    msg.setSourceEntity(195U);
    msg.setDestination(16987U);
    msg.setDestinationEntity(58U);
    msg.value = 0.6767565080246561;

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
    msg.setTimeStamp(0.6827507901236997);
    msg.setSource(55487U);
    msg.setSourceEntity(241U);
    msg.setDestination(47557U);
    msg.setDestinationEntity(167U);
    msg.value = 0.15659060078185238;

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
    msg.setTimeStamp(0.23670408680369615);
    msg.setSource(23086U);
    msg.setSourceEntity(111U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(144U);
    msg.value = 0.1370803514615322;

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
    msg.setTimeStamp(0.18784206748276033);
    msg.setSource(3843U);
    msg.setSourceEntity(59U);
    msg.setDestination(21320U);
    msg.setDestinationEntity(90U);
    msg.value = 0.4731622729825359;

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
    msg.setTimeStamp(0.47061807617376583);
    msg.setSource(45175U);
    msg.setSourceEntity(167U);
    msg.setDestination(19887U);
    msg.setDestinationEntity(191U);
    msg.start_lat = 0.31020867245193584;
    msg.start_lon = 0.8305730953466791;
    msg.start_z = 0.20614677450501606;
    msg.start_z_units = 104U;
    msg.end_lat = 0.8599332660525589;
    msg.end_lon = 0.1422493897994732;
    msg.end_z = 0.28191305688789237;
    msg.end_z_units = 37U;
    msg.speed = 0.13548713565080273;
    msg.speed_units = 121U;
    msg.lradius = 0.4897247440848377;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.014455462724462187);
    msg.setSource(56359U);
    msg.setSourceEntity(185U);
    msg.setDestination(8866U);
    msg.setDestinationEntity(0U);
    msg.start_lat = 0.9348668236409653;
    msg.start_lon = 0.4398416913255907;
    msg.start_z = 0.9630905179512088;
    msg.start_z_units = 177U;
    msg.end_lat = 0.2943733028761204;
    msg.end_lon = 0.6572628525757417;
    msg.end_z = 0.5682778686124629;
    msg.end_z_units = 73U;
    msg.speed = 0.020708978931268773;
    msg.speed_units = 199U;
    msg.lradius = 0.1590380607814078;
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
    msg.setTimeStamp(0.8675299795749566);
    msg.setSource(45016U);
    msg.setSourceEntity(227U);
    msg.setDestination(44987U);
    msg.setDestinationEntity(151U);
    msg.start_lat = 0.9796629532682412;
    msg.start_lon = 0.9541304999095009;
    msg.start_z = 0.07265900305148665;
    msg.start_z_units = 8U;
    msg.end_lat = 0.7162297967562261;
    msg.end_lon = 0.6779197364874862;
    msg.end_z = 0.763690332027536;
    msg.end_z_units = 131U;
    msg.speed = 0.29276180867215673;
    msg.speed_units = 49U;
    msg.lradius = 0.33478720463382605;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.15087633654299526);
    msg.setSource(49279U);
    msg.setSourceEntity(150U);
    msg.setDestination(18321U);
    msg.setDestinationEntity(5U);
    msg.x = 0.14908380403944632;
    msg.y = 0.25662042290537523;
    msg.z = 0.34497830691688847;
    msg.k = 0.8451860116559622;
    msg.m = 0.22325258159891326;
    msg.n = 0.8583232440019395;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.20219202861533214);
    msg.setSource(27325U);
    msg.setSourceEntity(71U);
    msg.setDestination(44511U);
    msg.setDestinationEntity(243U);
    msg.x = 0.4349649884966239;
    msg.y = 0.5575828845200803;
    msg.z = 0.8873596802115652;
    msg.k = 0.17015136224671223;
    msg.m = 0.38172561368952096;
    msg.n = 0.813463847552239;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.20189849132281612);
    msg.setSource(16731U);
    msg.setSourceEntity(112U);
    msg.setDestination(48945U);
    msg.setDestinationEntity(249U);
    msg.x = 0.8125054914465012;
    msg.y = 0.32006892660390485;
    msg.z = 0.6669881136346034;
    msg.k = 0.7009051958958648;
    msg.m = 0.879397586743125;
    msg.n = 0.6310277185015788;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.4015736948960319);
    msg.setSource(35893U);
    msg.setSourceEntity(54U);
    msg.setDestination(58673U);
    msg.setDestinationEntity(170U);
    msg.value = 0.5787303579789475;

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
    msg.setTimeStamp(0.8945392995495083);
    msg.setSource(29459U);
    msg.setSourceEntity(229U);
    msg.setDestination(50909U);
    msg.setDestinationEntity(100U);
    msg.value = 0.8832458121740578;

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
    msg.setTimeStamp(0.17322756584002097);
    msg.setSource(21745U);
    msg.setSourceEntity(243U);
    msg.setDestination(13998U);
    msg.setDestinationEntity(252U);
    msg.value = 0.9115791622010259;

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
    msg.setTimeStamp(0.8953441143472682);
    msg.setSource(60945U);
    msg.setSourceEntity(149U);
    msg.setDestination(27785U);
    msg.setDestinationEntity(123U);
    msg.u = 0.30356443756536045;
    msg.v = 0.9251237785017159;
    msg.w = 0.528876258802423;
    msg.p = 0.6990000429033;
    msg.q = 0.8926776493815345;
    msg.r = 0.3644377490585342;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.6657524090951812);
    msg.setSource(51398U);
    msg.setSourceEntity(109U);
    msg.setDestination(2841U);
    msg.setDestinationEntity(217U);
    msg.u = 0.5843849617724753;
    msg.v = 0.492463929248671;
    msg.w = 0.5853979820499972;
    msg.p = 0.4949092824699264;
    msg.q = 0.08482823884192559;
    msg.r = 0.44380142653020427;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.07232573527938713);
    msg.setSource(16947U);
    msg.setSourceEntity(224U);
    msg.setDestination(25262U);
    msg.setDestinationEntity(169U);
    msg.u = 0.6164725563223823;
    msg.v = 0.3850554636019531;
    msg.w = 0.594574572970481;
    msg.p = 0.6648005338864402;
    msg.q = 0.020484580536614505;
    msg.r = 0.4343643210424629;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.7764472802288732);
    msg.setSource(48108U);
    msg.setSourceEntity(56U);
    msg.setDestination(17549U);
    msg.setDestinationEntity(149U);
    msg.start_lat = 0.3097809257587155;
    msg.start_lon = 0.49090727251829047;
    msg.start_z = 0.15061934619178818;
    msg.start_z_units = 156U;
    msg.end_lat = 0.5282750598203426;
    msg.end_lon = 0.6159653301223692;
    msg.end_z = 0.14002457294006276;
    msg.end_z_units = 215U;
    msg.lradius = 0.1279438796214899;
    msg.flags = 20U;
    msg.x = 0.4920984293899875;
    msg.y = 0.005353200035081107;
    msg.z = 0.4527218495984572;
    msg.vx = 0.5118209854401927;
    msg.vy = 0.40983818816302253;
    msg.vz = 0.2999726920234209;
    msg.course_error = 0.9968786588379267;
    msg.eta = 23025U;

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
    msg.setTimeStamp(0.6586450003721145);
    msg.setSource(51432U);
    msg.setSourceEntity(169U);
    msg.setDestination(62884U);
    msg.setDestinationEntity(24U);
    msg.start_lat = 0.162451874738342;
    msg.start_lon = 0.8061740537520912;
    msg.start_z = 0.2812800205000191;
    msg.start_z_units = 101U;
    msg.end_lat = 0.013496225157519803;
    msg.end_lon = 0.05408428901895368;
    msg.end_z = 0.4926071159968747;
    msg.end_z_units = 12U;
    msg.lradius = 0.5359025980394626;
    msg.flags = 143U;
    msg.x = 0.169798041411776;
    msg.y = 0.5969755972218623;
    msg.z = 0.4157806020024368;
    msg.vx = 0.30208622864068324;
    msg.vy = 0.47652266850821456;
    msg.vz = 0.20574513837189756;
    msg.course_error = 0.3770997683294992;
    msg.eta = 36736U;

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
    msg.setTimeStamp(0.24812219524098678);
    msg.setSource(43572U);
    msg.setSourceEntity(148U);
    msg.setDestination(22120U);
    msg.setDestinationEntity(110U);
    msg.start_lat = 0.09932131884209039;
    msg.start_lon = 0.5580209166601041;
    msg.start_z = 0.4335177281009067;
    msg.start_z_units = 76U;
    msg.end_lat = 0.41481482937877345;
    msg.end_lon = 0.6234521870217528;
    msg.end_z = 0.6746582418630855;
    msg.end_z_units = 97U;
    msg.lradius = 0.18657083508999328;
    msg.flags = 189U;
    msg.x = 0.5053977875298364;
    msg.y = 0.6592742713109573;
    msg.z = 0.36875602754594117;
    msg.vx = 0.3644918014653866;
    msg.vy = 0.8780368861272506;
    msg.vz = 0.07846746622027367;
    msg.course_error = 0.01470969347296125;
    msg.eta = 31578U;

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
    msg.setTimeStamp(0.25347114975148155);
    msg.setSource(22347U);
    msg.setSourceEntity(63U);
    msg.setDestination(44153U);
    msg.setDestinationEntity(248U);
    msg.k = 0.7457366415274259;
    msg.m = 0.6066799956696998;
    msg.n = 0.919139156406112;

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
    msg.setTimeStamp(0.5302081610071194);
    msg.setSource(58533U);
    msg.setSourceEntity(145U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(161U);
    msg.k = 0.9770796962167762;
    msg.m = 0.8133073353101313;
    msg.n = 0.3855929241114656;

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
    msg.setTimeStamp(0.7864149197783783);
    msg.setSource(1775U);
    msg.setSourceEntity(199U);
    msg.setDestination(30159U);
    msg.setDestinationEntity(208U);
    msg.k = 0.7047805336512258;
    msg.m = 0.4620764708325863;
    msg.n = 0.6074994198114165;

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
    msg.setTimeStamp(0.024604592467592945);
    msg.setSource(1260U);
    msg.setSourceEntity(216U);
    msg.setDestination(16482U);
    msg.setDestinationEntity(133U);
    msg.p = 0.24923984829385637;
    msg.i = 0.8849958456067537;
    msg.d = 0.5014133978435992;
    msg.a = 0.7976035426533982;

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
    msg.setTimeStamp(0.45509794353807087);
    msg.setSource(23992U);
    msg.setSourceEntity(59U);
    msg.setDestination(11590U);
    msg.setDestinationEntity(155U);
    msg.p = 0.4623415935089146;
    msg.i = 0.4984664810716559;
    msg.d = 0.6341393289341886;
    msg.a = 0.07084610240018574;

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
    msg.setTimeStamp(0.15999691873022837);
    msg.setSource(28805U);
    msg.setSourceEntity(77U);
    msg.setDestination(31745U);
    msg.setDestinationEntity(162U);
    msg.p = 0.40641085339985805;
    msg.i = 0.5551648474170717;
    msg.d = 0.8765510676820133;
    msg.a = 0.6284093207917053;

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
    msg.setTimeStamp(0.6082430762490603);
    msg.setSource(53197U);
    msg.setSourceEntity(136U);
    msg.setDestination(52187U);
    msg.setDestinationEntity(21U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.3585733163060171);
    msg.setSource(51049U);
    msg.setSourceEntity(223U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(137U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.9123505658163967);
    msg.setSource(30415U);
    msg.setSourceEntity(67U);
    msg.setDestination(23981U);
    msg.setDestinationEntity(237U);
    msg.op = 104U;

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
    msg.setTimeStamp(0.7153652839090555);
    msg.setSource(27674U);
    msg.setSourceEntity(184U);
    msg.setDestination(56745U);
    msg.setDestinationEntity(114U);
    msg.timeout = 60080U;
    msg.lat = 0.11356902229480204;
    msg.lon = 0.5327793987424505;
    msg.z = 0.1740351476084453;
    msg.z_units = 25U;
    msg.speed = 0.3701323925797023;
    msg.speed_units = 118U;
    msg.roll = 0.3047205548722146;
    msg.pitch = 0.3939212154895998;
    msg.yaw = 0.08127780404448481;
    msg.custom.assign("RESDVXWQAWGNMQTKZCTVXRYFTZJLVYYFRTKTNIGXNABIWPLZEULCHPCZZQMYYFOALFTJCDSBNUEMRBXZMEKKISCNNWEEZKIAGXPKIJ");

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
    msg.setTimeStamp(0.5185100927827477);
    msg.setSource(47480U);
    msg.setSourceEntity(148U);
    msg.setDestination(58157U);
    msg.setDestinationEntity(90U);
    msg.timeout = 31655U;
    msg.lat = 0.8071139759995861;
    msg.lon = 0.3995880989529106;
    msg.z = 0.30381587708761515;
    msg.z_units = 192U;
    msg.speed = 0.017809900319439298;
    msg.speed_units = 112U;
    msg.roll = 0.5629469808462115;
    msg.pitch = 0.015937932544914934;
    msg.yaw = 0.3894864139730362;
    msg.custom.assign("IPYVPHWGBNFCAKEJMOAOIMPHXYKNVNIPMPDEHESVATUEPBOBXCSFYXTYROXKOFPSDTJCKQTHHZYTFWRJLRCRAZOILTDKZKCFDBINXGLSVLTPHDSMBLWDYYQHFTLTSUBWGBYWKQZPREXGWKIUCUGZWZHVCPNGWSGNHA");

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
    msg.setTimeStamp(0.5683955877424918);
    msg.setSource(7756U);
    msg.setSourceEntity(138U);
    msg.setDestination(13420U);
    msg.setDestinationEntity(21U);
    msg.timeout = 34702U;
    msg.lat = 0.0440221732007956;
    msg.lon = 0.619414015892679;
    msg.z = 0.1332586209198765;
    msg.z_units = 135U;
    msg.speed = 0.20377396481936028;
    msg.speed_units = 164U;
    msg.roll = 0.7692686971323692;
    msg.pitch = 0.08331205825789256;
    msg.yaw = 0.009712406025056963;
    msg.custom.assign("AIGQCGPHTHUSVDMZDOIZEKRNGMINADMMUQRKERBIVYGRCFKWUPQXFQDWVSVTXDLJEJOYZAQPGLFOGMICAAJKCOHVNLEGHJMD");

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
    msg.setTimeStamp(0.6133318542754405);
    msg.setSource(18268U);
    msg.setSourceEntity(232U);
    msg.setDestination(47286U);
    msg.setDestinationEntity(184U);
    msg.timeout = 34054U;
    msg.lat = 0.5508877835019256;
    msg.lon = 0.6429661370218757;
    msg.z = 0.5019676758767615;
    msg.z_units = 144U;
    msg.speed = 0.8031781671579884;
    msg.speed_units = 4U;
    msg.duration = 21887U;
    msg.radius = 0.4971022986265502;
    msg.flags = 9U;
    msg.custom.assign("GXAVTXSWNRFVFPNHENBEHBCAHOCSFONIIPBDZLBASUHWVQMTIDJUFNCPSZ");

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
    msg.setTimeStamp(0.13430259898705865);
    msg.setSource(21264U);
    msg.setSourceEntity(230U);
    msg.setDestination(45408U);
    msg.setDestinationEntity(138U);
    msg.timeout = 63490U;
    msg.lat = 0.1298009964793534;
    msg.lon = 0.9785355399827936;
    msg.z = 0.8211839664327555;
    msg.z_units = 199U;
    msg.speed = 0.09397795357612027;
    msg.speed_units = 29U;
    msg.duration = 8497U;
    msg.radius = 0.5749471887042878;
    msg.flags = 185U;
    msg.custom.assign("JBBSVKAMDVRUWXZCVYBRYZDAMGEKCPXUSLJDOOAJQGQXQKCDLGG");

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
    msg.setTimeStamp(0.9130578663993922);
    msg.setSource(55173U);
    msg.setSourceEntity(2U);
    msg.setDestination(50449U);
    msg.setDestinationEntity(109U);
    msg.timeout = 6208U;
    msg.lat = 0.5346982826051445;
    msg.lon = 0.5845030969930065;
    msg.z = 0.2010049100838428;
    msg.z_units = 213U;
    msg.speed = 0.7137991983417702;
    msg.speed_units = 68U;
    msg.duration = 19887U;
    msg.radius = 0.1842424110786105;
    msg.flags = 33U;
    msg.custom.assign("JVWHEUEOTLPHWXCGXWMBTRGZGHLSTZOANZXRMNIHHSMETNMBMMANPVAOFCZIHIKBFXKAHZNXIUEFWZSUQTKTQDOSOPGGMCCYXKRVCDHNFOUWAHMYDSEZWFFBRAKSUQJNKIYNVBLEYISPILDAIBCWNYCZCVPBSYFAHRYEYTVLOLJKGPVDTRU");

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
    msg.setTimeStamp(0.3946786088139279);
    msg.setSource(2294U);
    msg.setSourceEntity(0U);
    msg.setDestination(52490U);
    msg.setDestinationEntity(198U);
    msg.custom.assign("RQOGCQUMIOUFKRIHHLEHFWCBYZKDXGCGNUNYOWQUCVECJEEJLPTFMWWVNJBHOTPKMPGVFCZQIUYQSNAIWAELFSMBCTQVJGGVTVKGAWPEXSMZOTNXJQEDLIYT");

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
    msg.setTimeStamp(0.3191089028227081);
    msg.setSource(39686U);
    msg.setSourceEntity(80U);
    msg.setDestination(6939U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("CKQHHAUKWIZJMGOCMDXVTMMEXAHRPAIESZKDQNLDORELEEMKJELQNRWHQMVUWPCBOLDOFTGXIDWDIYGSBRRJYSYNPWFBEMPEBTAPUBIDYOBLBCXSWGLJTZNWXUMZJFPILZQVYXSUTNTSXFQBFEZSSTIOJYYACRNLSGPHGCNHUUKKCAJPLHRJYRUCJOSVYFTMQV");

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
    msg.setTimeStamp(0.7768579597591394);
    msg.setSource(37121U);
    msg.setSourceEntity(205U);
    msg.setDestination(28501U);
    msg.setDestinationEntity(0U);
    msg.custom.assign("DSLFFKCOHQPXADQMFUCXDUDJFBTVKFIITIQIDGCDHEFZA");

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
    msg.setTimeStamp(0.2419476211506385);
    msg.setSource(58798U);
    msg.setSourceEntity(22U);
    msg.setDestination(9369U);
    msg.setDestinationEntity(25U);
    msg.timeout = 323U;
    msg.lat = 0.5056360880622369;
    msg.lon = 0.9332098888126954;
    msg.z = 0.5745919761503503;
    msg.z_units = 245U;
    msg.duration = 2562U;
    msg.speed = 0.6536645755734568;
    msg.speed_units = 0U;
    msg.type = 219U;
    msg.radius = 0.2639616938221201;
    msg.length = 0.03987132286839201;
    msg.bearing = 0.05098187751371108;
    msg.direction = 36U;
    msg.custom.assign("GGSWCPGTZWYKNEYMPYHWDFOCHMHDKNVJYEKUHHMUWJFOBNMXTVESMMXGQHAUILYKFHXTWDYKVYGXWPQEKJHQPLRZKOQDAQRTLSIIBERVEZJJSNCFJEBQDJAUUZASOGFDUQEAAMPSZSLOCHUZPGFUNRNVQGSSYNINZNMXIVSHCPCPTTALRLFDRXTCKRMJBCOORBIBZAFLRVZYTDWIBAUBAKTDFWIZXPLVOCXRWO");

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
    msg.setTimeStamp(0.2406717359992686);
    msg.setSource(44070U);
    msg.setSourceEntity(185U);
    msg.setDestination(14758U);
    msg.setDestinationEntity(231U);
    msg.timeout = 58816U;
    msg.lat = 0.42085523074466136;
    msg.lon = 0.21432911753603312;
    msg.z = 0.8758080850553903;
    msg.z_units = 31U;
    msg.duration = 50531U;
    msg.speed = 0.29090372544757603;
    msg.speed_units = 177U;
    msg.type = 112U;
    msg.radius = 0.8373768030454056;
    msg.length = 0.664927820382171;
    msg.bearing = 0.5354480130093713;
    msg.direction = 15U;
    msg.custom.assign("AZSNPQQTFVONYWOWMHJKHNEGSODZSUZXBQGIRMANFJZQGBTTVHLLMRWTNGHOWJVWMMTKKBUCQQSFMOFTOJRKRILEUYKUPZYSLUXVCMKECTNPUBRPE");

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
    msg.setTimeStamp(0.021884267763776832);
    msg.setSource(32301U);
    msg.setSourceEntity(212U);
    msg.setDestination(17613U);
    msg.setDestinationEntity(104U);
    msg.timeout = 46446U;
    msg.lat = 0.5809225372878843;
    msg.lon = 0.9956224081236066;
    msg.z = 0.899156678676577;
    msg.z_units = 114U;
    msg.duration = 28708U;
    msg.speed = 0.1570114393609423;
    msg.speed_units = 51U;
    msg.type = 192U;
    msg.radius = 0.3299114841899278;
    msg.length = 0.6060872128073252;
    msg.bearing = 0.13684959882908454;
    msg.direction = 207U;
    msg.custom.assign("IAQOMBWLEXGERCVFZJXLCYBDHRRKUOWHSWVZNZTIZMPCTJPFDVKXUXHFNMPLHGL");

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
    msg.setTimeStamp(0.43286958298511213);
    msg.setSource(48524U);
    msg.setSourceEntity(194U);
    msg.setDestination(23147U);
    msg.setDestinationEntity(30U);
    msg.duration = 12889U;
    msg.custom.assign("GCKRMNHPYTPLVLWDDOHSTADRKJJDFIIGPNXASGDNRUXZJSGNMPPTGVPQAIWMJIKSBWFXXRZBAYWHELGSUFIEAAQWQEXKUQULCVRKHFKNDKOVWBNUZYVEJVSMLMCPYCPZBSBFOBITI");

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
    msg.setTimeStamp(0.4530373068309772);
    msg.setSource(41308U);
    msg.setSourceEntity(193U);
    msg.setDestination(27961U);
    msg.setDestinationEntity(246U);
    msg.duration = 35328U;
    msg.custom.assign("ICWUAEOXLRZVOSCCLRHWIQYYJTLABSWAIKXEBYVRKFWPKDMCLRUL");

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
    msg.setTimeStamp(0.6659874809060489);
    msg.setSource(51105U);
    msg.setSourceEntity(183U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(31U);
    msg.duration = 55557U;
    msg.custom.assign("YMXQZSRFHOBXFNIGCIUZTBIQPSHASZQVEAWKERBYEELPAVLMKAAKBXGCVBPDFCFTSNCKOYHJCBYLRJWZQWTZDRGPMPDXZFMJWRKGXDVKNJZDJGSCILSGLSYJEJIGJUYCYYLKBFQJBHOOUXSUHBORLDVIOWKAIQJERHTBVNRCOQMHIZLFACHN");

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
    msg.setTimeStamp(0.3351084479619728);
    msg.setSource(22461U);
    msg.setSourceEntity(108U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(50U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.022503415721030318;
    msg.control.set(tmp_msg_0);
    msg.duration = 6275U;
    msg.custom.assign("PMIDEUAXDCZXLPWDRBOBQMWBZVXBIJYLIMRHPNEHTUYDTENGI");

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
    msg.setTimeStamp(0.1091689139847748);
    msg.setSource(63278U);
    msg.setSourceEntity(97U);
    msg.setDestination(55454U);
    msg.setDestinationEntity(162U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.4756731291532086;
    msg.control.set(tmp_msg_0);
    msg.duration = 56865U;
    msg.custom.assign("KOMTKGIGADBJQZQPFUGJJPKHYUXZAEGEMOXDKEPQEDGAKYVQOPSMAJCQTCVHMBXYHSFISLDBFSHXUIVJWALIIHUNOCCQ");

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
    msg.setTimeStamp(0.5181015007575483);
    msg.setSource(23736U);
    msg.setSourceEntity(173U);
    msg.setDestination(47870U);
    msg.setDestinationEntity(225U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.9919733387517758;
    tmp_msg_0.start_lon = 0.5419462314056781;
    tmp_msg_0.start_z = 0.6165214668096672;
    tmp_msg_0.start_z_units = 17U;
    tmp_msg_0.end_lat = 0.6061143651595807;
    tmp_msg_0.end_lon = 0.7342419033771748;
    tmp_msg_0.end_z = 0.6429543631994346;
    tmp_msg_0.end_z_units = 180U;
    tmp_msg_0.speed = 0.4662908867707046;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.lradius = 0.2585270633762723;
    tmp_msg_0.flags = 221U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12694U;
    msg.custom.assign("RXOSUFBKAPPTFNLOMJGUQVISVUZNIDKWCIIRERYCG");

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
    msg.setTimeStamp(0.2966328808676437);
    msg.setSource(47507U);
    msg.setSourceEntity(180U);
    msg.setDestination(7887U);
    msg.setDestinationEntity(96U);
    msg.timeout = 54583U;
    msg.lat = 0.7028991664819152;
    msg.lon = 0.2275100447693732;
    msg.z = 0.9071656738663921;
    msg.z_units = 100U;
    msg.speed = 0.47836870146906807;
    msg.speed_units = 172U;
    msg.bearing = 0.6118006349472266;
    msg.cross_angle = 0.28615192126159283;
    msg.width = 0.060683711597136036;
    msg.length = 0.22151384405860974;
    msg.hstep = 0.6362587102970593;
    msg.coff = 164U;
    msg.alternation = 195U;
    msg.flags = 122U;
    msg.custom.assign("YHNBKEXYHDSCNDSSNAXTMVIJSGGGIRDKPCMVDLHBKQOKKTSDVXQV");

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
    msg.setTimeStamp(0.17446568024551257);
    msg.setSource(60921U);
    msg.setSourceEntity(143U);
    msg.setDestination(33777U);
    msg.setDestinationEntity(142U);
    msg.timeout = 28290U;
    msg.lat = 0.8497887349202649;
    msg.lon = 0.1700396217522505;
    msg.z = 0.6858642844110788;
    msg.z_units = 13U;
    msg.speed = 0.6839227377131554;
    msg.speed_units = 202U;
    msg.bearing = 0.5087207879183786;
    msg.cross_angle = 0.11175091864597952;
    msg.width = 0.10844956382342519;
    msg.length = 0.8042263080144231;
    msg.hstep = 0.13327364912907236;
    msg.coff = 150U;
    msg.alternation = 218U;
    msg.flags = 14U;
    msg.custom.assign("EXSXIIPFXVCCJWLKSPGVLGPBESVSNVJJOQXDIHTMRFBGBLHTCTWESFOFIVPXTKGHNRAUANUUCMEKNGVAKBFKQZMDWKSCDWUTJINGIXMMVFXYCHBLBQYMUIBICJNRAJQPTGNBOHOOTNJYTDQODPPREJMYMXHFXWXYKWBZOWRSYOZZKPDQRSWGKLYMLLTGFILAFEYZNADNPAUWVKIDZRALCSYUE");

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
    msg.setTimeStamp(0.7248913561107474);
    msg.setSource(6790U);
    msg.setSourceEntity(72U);
    msg.setDestination(32538U);
    msg.setDestinationEntity(31U);
    msg.timeout = 63075U;
    msg.lat = 0.12263272570968975;
    msg.lon = 0.2618053453420579;
    msg.z = 0.2882799791151087;
    msg.z_units = 198U;
    msg.speed = 0.304872969171996;
    msg.speed_units = 240U;
    msg.bearing = 0.24241105621287096;
    msg.cross_angle = 0.40970498120795384;
    msg.width = 0.23414850540593168;
    msg.length = 0.8746461623377277;
    msg.hstep = 0.7137654900578082;
    msg.coff = 25U;
    msg.alternation = 60U;
    msg.flags = 30U;
    msg.custom.assign("JWJDGOYMLTUUTMPKENCCJEXPWGBILIWBRHKAARWTQZRYOTIYYKBPPXITBIWXFKGDCTCIBNOKIANZZVEHPCWARXTUXHKEKUSYHLYYQRJSCNOLUVQNFGMHPDBZISICXLGLGFJTLJEHPDDGBMOTQZBPOBWJMDVGSQQNPQRFYQKSCEFFVLZAGVFOVCYSZWAMLXKUZIRDHQXDRNVOMR");

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
    msg.setTimeStamp(0.609665024895877);
    msg.setSource(54342U);
    msg.setSourceEntity(94U);
    msg.setDestination(44695U);
    msg.setDestinationEntity(129U);
    msg.timeout = 22043U;
    msg.lat = 0.522836278264384;
    msg.lon = 0.35933726017693535;
    msg.z = 0.2541114583839006;
    msg.z_units = 92U;
    msg.speed = 0.37174441964844707;
    msg.speed_units = 182U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7421426505722264;
    tmp_msg_0.y = 0.9715940460248761;
    tmp_msg_0.z = 0.8614746179444694;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DKLIAMYYMVFDAPOEJCBUZHRHRLTPLFRWLLEMRAHDHQJWAHJEHF");

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
    msg.setTimeStamp(0.8142543959621097);
    msg.setSource(50418U);
    msg.setSourceEntity(142U);
    msg.setDestination(64654U);
    msg.setDestinationEntity(92U);
    msg.timeout = 36717U;
    msg.lat = 0.9653889212921828;
    msg.lon = 0.0006891579794549019;
    msg.z = 0.18077614289479182;
    msg.z_units = 153U;
    msg.speed = 0.023426692743000355;
    msg.speed_units = 207U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7241021822917968;
    tmp_msg_0.y = 0.3346882578622019;
    tmp_msg_0.z = 0.3472636722580854;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UUBPMORWDLDTOTZDQGVJHAEYRPLNRMXZBBDSNAQKWOPHJDOFAUPGSQCQYWQQIXSFCWMJVBJMKGMYSIULXVZKGYNPVJECWUGCRGANBCKKIUGPYVEGRBBSHZDUOTWWWTUDIZRNQSVXPX");

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
    msg.setTimeStamp(0.34194396326768706);
    msg.setSource(64409U);
    msg.setSourceEntity(58U);
    msg.setDestination(37749U);
    msg.setDestinationEntity(173U);
    msg.timeout = 504U;
    msg.lat = 0.4511136363863404;
    msg.lon = 0.7438652028783596;
    msg.z = 0.30705982562094636;
    msg.z_units = 42U;
    msg.speed = 0.4860673989415909;
    msg.speed_units = 164U;
    msg.custom.assign("YWHFAQNBTCEGPUD");

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
    msg.setTimeStamp(0.17470767141862298);
    msg.setSource(31584U);
    msg.setSourceEntity(241U);
    msg.setDestination(59541U);
    msg.setDestinationEntity(20U);
    msg.x = 0.19974453418579907;
    msg.y = 0.8712442826811357;
    msg.z = 0.24971859516326866;

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
    msg.setTimeStamp(0.47164943604811316);
    msg.setSource(24348U);
    msg.setSourceEntity(36U);
    msg.setDestination(41745U);
    msg.setDestinationEntity(184U);
    msg.x = 0.9697383832236268;
    msg.y = 0.9399231816737504;
    msg.z = 0.8789256735287626;

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
    msg.setTimeStamp(0.2708692991720626);
    msg.setSource(25482U);
    msg.setSourceEntity(45U);
    msg.setDestination(53617U);
    msg.setDestinationEntity(116U);
    msg.x = 0.6448848502056741;
    msg.y = 0.8922103732963329;
    msg.z = 0.6980742480927142;

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
    msg.setTimeStamp(0.49268646495588286);
    msg.setSource(51070U);
    msg.setSourceEntity(113U);
    msg.setDestination(26701U);
    msg.setDestinationEntity(109U);
    msg.timeout = 64184U;
    msg.lat = 0.1323075591249523;
    msg.lon = 0.8675903468399335;
    msg.z = 0.015105446931180766;
    msg.z_units = 25U;
    msg.amplitude = 0.7518233801644034;
    msg.pitch = 0.4764321119961128;
    msg.speed = 0.9578319778092437;
    msg.speed_units = 76U;
    msg.custom.assign("SQDTZXPAJJUOLKXWNPFQBZIDCZA");

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
    msg.setTimeStamp(0.9504535070978911);
    msg.setSource(26210U);
    msg.setSourceEntity(219U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(190U);
    msg.timeout = 49436U;
    msg.lat = 0.533184252274963;
    msg.lon = 0.20150695890151382;
    msg.z = 0.8500870470167737;
    msg.z_units = 202U;
    msg.amplitude = 0.22704406957457557;
    msg.pitch = 0.9365200610002308;
    msg.speed = 0.7054764739953344;
    msg.speed_units = 196U;
    msg.custom.assign("LHSIJVWFMXZUVNBUWRWHPXDGPJQQRZTMADXQZYMBYOKSTIQJWPKZABNOPEFDBTGNUSMLWOQXEYMUUBKCCOQZCYPCIJLGRHWZGFOTOZZATILVJYSJKWKFKTCGLSWBTVYUHIGOSGPBTKWYMAEXEUNACSFFKBHRKXEEAFQEEICARPVWVLRDIDOALEEMQLRCNNUHTNMHVISBZXMCDPYAUVGLTDHDQSRGY");

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
    msg.setTimeStamp(0.7813666646353113);
    msg.setSource(59979U);
    msg.setSourceEntity(153U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(251U);
    msg.timeout = 2582U;
    msg.lat = 0.6856255854457644;
    msg.lon = 0.1281216899015789;
    msg.z = 0.5828613300698327;
    msg.z_units = 216U;
    msg.amplitude = 0.2600173418959707;
    msg.pitch = 0.580671998688157;
    msg.speed = 0.69010364471009;
    msg.speed_units = 214U;
    msg.custom.assign("URXUEMEYPULWYHIUDUMLBFWDHYFTGWXRDIVXETVYZWBDFKJOUQNNNGZZCMEDCMHLGBIACSELPAOMROMAGTZFPKAEOIB");

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
    msg.setTimeStamp(0.671839776422163);
    msg.setSource(48133U);
    msg.setSourceEntity(73U);
    msg.setDestination(43841U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.9577015675556181);
    msg.setSource(36780U);
    msg.setSourceEntity(54U);
    msg.setDestination(28229U);
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
    msg.setTimeStamp(0.247194120687383);
    msg.setSource(59635U);
    msg.setSourceEntity(49U);
    msg.setDestination(37775U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.4157470285115753);
    msg.setSource(30541U);
    msg.setSourceEntity(244U);
    msg.setDestination(50698U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.3582972536771034;
    msg.lon = 0.08467760880548114;
    msg.z = 0.9507549406096302;
    msg.z_units = 70U;
    msg.radius = 0.9029172339805621;
    msg.duration = 4295U;
    msg.speed = 0.2179034527281044;
    msg.speed_units = 88U;
    msg.custom.assign("NOWTTQGCZXHODYFQWQNPPZAJYDTQJSBEPMYGSDPCTUHHVCBKRJNEOIOLAABRQYEGMFAHAKGYNMFATIMSWSQBURKILUSAHJTEMFLBLZLHXHIDNIXGCSQQRVUKCO");

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
    msg.setTimeStamp(0.10731593895264546);
    msg.setSource(63065U);
    msg.setSourceEntity(203U);
    msg.setDestination(21767U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.8770702165832659;
    msg.lon = 0.41196922296156113;
    msg.z = 0.526767812450071;
    msg.z_units = 13U;
    msg.radius = 0.19217871851404122;
    msg.duration = 421U;
    msg.speed = 0.11324873164269589;
    msg.speed_units = 37U;
    msg.custom.assign("CPNRBVBCXXOHPGWNKJIKNMTUEEINCWRTELXGETEAV");

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
    msg.setTimeStamp(0.8637586914127809);
    msg.setSource(39638U);
    msg.setSourceEntity(190U);
    msg.setDestination(33729U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.5071840120741763;
    msg.lon = 0.9055299592592843;
    msg.z = 0.7956310742072862;
    msg.z_units = 175U;
    msg.radius = 0.7265451235527616;
    msg.duration = 31868U;
    msg.speed = 0.9819758789721428;
    msg.speed_units = 248U;
    msg.custom.assign("DDQSOXBVJJPYTNUZNVJIMKEONSSECOKRTEXZJIWMBAUPAGYTHZAWHUPVSYFHLXWCXIVYQULKJLQDZOYDMNLRDBOUNNTQYGVRVNINEWCTAEGLOGEGFRPSDANOLFZFBMQYBDEGPWJHFDCMIJSZOZGOUWDSRRCBPAZILPJIMWTVBRCZSFFCMYATFRFNURMHAVIBTXLAPXVS");

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
    msg.setTimeStamp(0.3230247744030157);
    msg.setSource(5030U);
    msg.setSourceEntity(231U);
    msg.setDestination(22613U);
    msg.setDestinationEntity(156U);
    msg.timeout = 16989U;
    msg.flags = 195U;
    msg.lat = 0.17974343795924752;
    msg.lon = 0.4419751407602108;
    msg.start_z = 0.7686949567944236;
    msg.start_z_units = 139U;
    msg.end_z = 0.7343103867431432;
    msg.end_z_units = 130U;
    msg.radius = 0.7981407882370435;
    msg.speed = 0.44961007937206765;
    msg.speed_units = 186U;
    msg.custom.assign("QCLKNVEKOGVEBQTYNRGPAECJEWBWUZOTMKEWPACOLJFNMJNTZBPKMYNYTCNDFRCLASFGRJORRMXIMSLHXITUTOFUCUHZYDZPBMBXVKMOVGLEJZGHAMSUZHDDTHFPFCJXERHGKRARQUSMQBVQQE");

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
    msg.setTimeStamp(0.49114011451574946);
    msg.setSource(9962U);
    msg.setSourceEntity(103U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(34U);
    msg.timeout = 666U;
    msg.flags = 225U;
    msg.lat = 0.25758938457441694;
    msg.lon = 0.3232834646373349;
    msg.start_z = 0.14777554865909925;
    msg.start_z_units = 124U;
    msg.end_z = 0.8188341552837114;
    msg.end_z_units = 27U;
    msg.radius = 0.15939516191711223;
    msg.speed = 0.07343426223414529;
    msg.speed_units = 68U;
    msg.custom.assign("RGLVDXPREQEAOEKPPTXJHAQPRCSAEHUDRGYZCBTDUMVSABWPUHXNZEXJUMMOTVVMCLPRCEHWXRBZVSIXIGTFFEFYXMCQSMAJYFTNOKOEMAQCGRYTLFDQFLKFAPSEWNSVXFJGJTCWARYZOBYNUVINFBGOKHXKBCGKLELBWDJKFQN");

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
    msg.setTimeStamp(0.031178617113226892);
    msg.setSource(46953U);
    msg.setSourceEntity(102U);
    msg.setDestination(34718U);
    msg.setDestinationEntity(166U);
    msg.timeout = 18401U;
    msg.flags = 149U;
    msg.lat = 0.2549334359591121;
    msg.lon = 0.6156545334526055;
    msg.start_z = 0.8986323616859621;
    msg.start_z_units = 245U;
    msg.end_z = 0.9121078897194597;
    msg.end_z_units = 63U;
    msg.radius = 0.01579274375689066;
    msg.speed = 0.986593148686327;
    msg.speed_units = 36U;
    msg.custom.assign("WLVIMHIPSCMGFUYNXGVVAWVYGPZXIQZKQVZKIOYBIQMSEWOZAAEPAJLQJILAQQMKRRPTYXOGHYNTNEDUDOCKWADTINZKOYJDFM");

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
    msg.setTimeStamp(0.761819151261629);
    msg.setSource(5029U);
    msg.setSourceEntity(115U);
    msg.setDestination(18113U);
    msg.setDestinationEntity(237U);
    msg.timeout = 19647U;
    msg.lat = 0.310618908542004;
    msg.lon = 0.5337985639531493;
    msg.z = 0.305505563702978;
    msg.z_units = 61U;
    msg.speed = 0.12381543860403332;
    msg.speed_units = 149U;
    msg.custom.assign("PONFFCLVNITBDVWTCAWVZXFESTHYKKIIEFWUOSEOOZCXFKMIAGSNUQBDVOXHIYPHYOYEWLLNQCKRZJSQRAEHUNEBIDNVQBDSAXFJQLTWDLFIGYJT");

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
    msg.setTimeStamp(0.32764836008857456);
    msg.setSource(11454U);
    msg.setSourceEntity(24U);
    msg.setDestination(49585U);
    msg.setDestinationEntity(195U);
    msg.timeout = 64653U;
    msg.lat = 0.19184973233744973;
    msg.lon = 0.2003340800197042;
    msg.z = 0.1583638654104772;
    msg.z_units = 198U;
    msg.speed = 0.45722038999185177;
    msg.speed_units = 33U;
    msg.custom.assign("XRDSNGEUCGZESTIKJQZDLRMLEGMKOITGXYWBNJPDHNWKLXXVWZERYXFZHUTVGXSZTJROWOGYYEEO");

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
    msg.setTimeStamp(0.2458527769439275);
    msg.setSource(23060U);
    msg.setSourceEntity(135U);
    msg.setDestination(14170U);
    msg.setDestinationEntity(14U);
    msg.timeout = 48977U;
    msg.lat = 0.062224824155940106;
    msg.lon = 0.2867886471986304;
    msg.z = 0.6739697485849743;
    msg.z_units = 173U;
    msg.speed = 0.7521373576134566;
    msg.speed_units = 131U;
    msg.custom.assign("BARIFJRANBLFXCGESXKRGJINLGAVLFKHCOHMPVMROWXDTCQI");

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
    msg.setTimeStamp(0.2080492084618868);
    msg.setSource(32974U);
    msg.setSourceEntity(204U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(117U);
    msg.x = 0.39724812397669595;
    msg.y = 0.5763237522207306;
    msg.z = 0.6845896564343131;
    msg.t = 0.8343946706631068;

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
    msg.setTimeStamp(0.39553964345692916);
    msg.setSource(5213U);
    msg.setSourceEntity(81U);
    msg.setDestination(25213U);
    msg.setDestinationEntity(199U);
    msg.x = 0.7618922014898866;
    msg.y = 0.73929831999935;
    msg.z = 0.961873081696399;
    msg.t = 0.18637161112032008;

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
    msg.setTimeStamp(0.3729782317218382);
    msg.setSource(12277U);
    msg.setSourceEntity(220U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(15U);
    msg.x = 0.12461703771249;
    msg.y = 0.658475408513695;
    msg.z = 0.6868988122850018;
    msg.t = 0.08956121192789568;

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
    msg.setTimeStamp(0.616838676969141);
    msg.setSource(16204U);
    msg.setSourceEntity(186U);
    msg.setDestination(57111U);
    msg.setDestinationEntity(67U);
    msg.timeout = 47542U;
    msg.name.assign("LMMIKUCFHNVDOPHWADSXEKUHDQMCMSYAMWVRTYKVGIBSRQNEJUOQGGQAFOCYVDFJNJKZLTIOPHSIOUSBDFAHPXJIEXOEYCAHWBMYFQVRTGPHXRDHTLUCISEZFWJYGENMBRSPAOVCJAVRWNTDGMODPXVZSBXQKVIWJZLMNLBYOZBBYXIUCBGJIXXAYTBQZNHFPQKTRKTJLZLEEUHSAFKNZSLFZRCKDPVGZOIQ");
    msg.custom.assign("BZVCGVUVHRUSYZTLTBKMPJSSLKKIQAANWIBRLOPFUWZJUHPGXADFGZQEQUZRNXXJUKEHTQLDWMEOWRILSCPGWNALHILGKUFDNBMTVMYJXIWCXPVFPKOOVICTSROOPFHCRCBXBRPHHCBEYWJEDAZUZKJJMMQZADXNRYTKGFKMLQDOLAJJAOVHPVSEHNIFQBIYGCSJVPXYAHNXOGKYENBQZVISYFNYTWDTNYIFRDFT");

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
    msg.setTimeStamp(0.5275063284600799);
    msg.setSource(59258U);
    msg.setSourceEntity(28U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(77U);
    msg.timeout = 32018U;
    msg.name.assign("VALBDPBEKMKJWIGZEELRDZYCEBWNSHGQPWTMFJWYLIDTVXWIGJDSXHSUYPBZJUYONFLTPICCBLJFFQYAOPBOLGIBXRUESM");
    msg.custom.assign("QLCWANGFARMFMFMWGJFCUENZPUPAQLXZGUCWEIZTALGOYBORWMHHIEYOIZHZQDFVEOWWG");

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
    msg.setTimeStamp(0.40191397920556293);
    msg.setSource(64700U);
    msg.setSourceEntity(208U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(84U);
    msg.timeout = 44441U;
    msg.name.assign("URVIGLYFKAMBZVPLTWMXFWUPWIMUYXNDZEYCXEJCTGFSMZJEQZPAHRUPEFYKYGWHHRVBWCQNXTALARYQEBRBDOGPWKEMQCDHJXDDWQWWKUJOFNRZOJZMILHTSISHTDMFV");
    msg.custom.assign("DOWMDNKPOJHIAZYBQPZHCIAEEGCNMSKPCLQRXVYIGLACYSZAXUKMYOUCEOPRFNVNKWTRDADEXXFRTAVPZDMRFYSUOSVSKBLRHNGEBQIVAJULPGYTIWRIFBFFJUBULBANWGT");

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
    msg.setTimeStamp(0.1614697101589233);
    msg.setSource(31849U);
    msg.setSourceEntity(222U);
    msg.setDestination(60920U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.8753723296623341;
    msg.lon = 0.04913875310293325;
    msg.z = 0.9923791287847246;
    msg.z_units = 26U;
    msg.speed = 0.2722370014090124;
    msg.speed_units = 70U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45274U;
    tmp_msg_0.off_x = 0.06436444493743532;
    tmp_msg_0.off_y = 0.39852388422119156;
    tmp_msg_0.off_z = 0.8856411073524996;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.21421020011387548;
    msg.custom.assign("CUOKPCJACATKMEHQUWRVHWMYTPCNCQHGXRFYZIHGVXUBGVPSKDRXVCSSNRBRQZNKYXTOLDBEOOSWRXNAKHVRJMSKFYOCJAURNPTAQSESZAODIFDZXSBJAXDKNZYJHLNZHPWQMFEJVT");

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
    msg.setTimeStamp(0.5119008715296423);
    msg.setSource(15330U);
    msg.setSourceEntity(225U);
    msg.setDestination(55262U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.5248036299425256;
    msg.lon = 0.7962190052859844;
    msg.z = 0.28592977701551414;
    msg.z_units = 41U;
    msg.speed = 0.1713339463891963;
    msg.speed_units = 194U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7027729037558424;
    tmp_msg_0.y = 0.3145208827298588;
    tmp_msg_0.z = 0.8800720517938342;
    tmp_msg_0.t = 0.039279278581487276;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7387837038273196;
    msg.custom.assign("PRZXSJXEMAOCQKNFEAOQVJHYDNKRHSGDO");

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
    msg.setTimeStamp(0.6347823598365545);
    msg.setSource(55211U);
    msg.setSourceEntity(219U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.6960039465938631;
    msg.lon = 0.08245572691299896;
    msg.z = 0.015254292909767653;
    msg.z_units = 41U;
    msg.speed = 0.4818000379843943;
    msg.speed_units = 61U;
    msg.start_time = 0.772454553582278;
    msg.custom.assign("KJNZDBITYLOHMZTUFZYSFNKKVBSIQNPQCLFKQOEIVDBKTUJOSSQAGTWWZEHBLDEAHUCFMIPNGXRPVODZWNLAFJBBJTSIYURZMBJNOLPSFJLQXBXKYDDGHVGRITUGQLCZDVN");

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
    msg.setTimeStamp(0.2910888868212953);
    msg.setSource(43356U);
    msg.setSourceEntity(195U);
    msg.setDestination(1943U);
    msg.setDestinationEntity(188U);
    msg.vid = 12445U;
    msg.off_x = 0.09298235656408549;
    msg.off_y = 0.3683280017171672;
    msg.off_z = 0.30382825734744057;

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
    msg.setTimeStamp(0.11059562510526133);
    msg.setSource(64595U);
    msg.setSourceEntity(246U);
    msg.setDestination(39033U);
    msg.setDestinationEntity(77U);
    msg.vid = 43272U;
    msg.off_x = 0.02120309520073904;
    msg.off_y = 0.810519649659608;
    msg.off_z = 0.3690055154836991;

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
    msg.setTimeStamp(0.365558384749912);
    msg.setSource(37315U);
    msg.setSourceEntity(247U);
    msg.setDestination(34979U);
    msg.setDestinationEntity(117U);
    msg.vid = 54684U;
    msg.off_x = 0.03793870503612484;
    msg.off_y = 0.844901483896372;
    msg.off_z = 0.4375627642157015;

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
    msg.setTimeStamp(0.753598414822331);
    msg.setSource(47140U);
    msg.setSourceEntity(35U);
    msg.setDestination(9027U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.5108119284281374);
    msg.setSource(31094U);
    msg.setSourceEntity(168U);
    msg.setDestination(60095U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.08659777034217764);
    msg.setSource(51151U);
    msg.setSourceEntity(65U);
    msg.setDestination(28417U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.13594005225823436);
    msg.setSource(19296U);
    msg.setSourceEntity(137U);
    msg.setDestination(4594U);
    msg.setDestinationEntity(19U);
    msg.mid = 44320U;

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
    msg.setTimeStamp(0.2593251016931388);
    msg.setSource(14125U);
    msg.setSourceEntity(38U);
    msg.setDestination(28555U);
    msg.setDestinationEntity(223U);
    msg.mid = 54390U;

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
    msg.setTimeStamp(0.7292358625592328);
    msg.setSource(8972U);
    msg.setSourceEntity(107U);
    msg.setDestination(58956U);
    msg.setDestinationEntity(62U);
    msg.mid = 8802U;

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
    msg.setTimeStamp(0.09159544241285289);
    msg.setSource(54719U);
    msg.setSourceEntity(177U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(97U);
    msg.state = 165U;
    msg.eta = 27318U;
    msg.info.assign("YDWMBLGPEVHTVJYCBIAGPFSYRDLAMQZ");

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
    msg.setTimeStamp(0.9462630939064236);
    msg.setSource(47126U);
    msg.setSourceEntity(138U);
    msg.setDestination(53925U);
    msg.setDestinationEntity(164U);
    msg.state = 185U;
    msg.eta = 60055U;
    msg.info.assign("NREOAPDOFQACYUGNBKKKRWWJAKIBYMHYFEAMWBRISOAQTCJGZCZNXBPKLYXDFNWXESNIQFDZURASHBIHKOJVEAQIVQEFRHSHVWVVDJMDEWOXRYTQATEZCPLOSRFHTPMMCHUWGNNRZKJYXOJMMDZILDTAJXPUALBTJBUKOEHHPZCSHILGGQTUBMYUSEGSKRNFXLBICVDXQBFFGCMG");

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
    msg.setTimeStamp(0.5503804975615566);
    msg.setSource(18398U);
    msg.setSourceEntity(114U);
    msg.setDestination(23985U);
    msg.setDestinationEntity(188U);
    msg.state = 185U;
    msg.eta = 56122U;
    msg.info.assign("UZRMORCGSCEWLVSAZQARMDJWXSYHBDXJYUWLCIPTWXDLPUJFPAEEJFHOMNLMSIGETASDBNLZDOIXVKTBVAYBZARNEBUZJJGCQNFCCOFVEFPFBKHEOWKAVGBPICSTUMQYDQKPMVZNKDMRQUFURVSXHXVNQGHHSHRSUHKLNHGGWFLWKZ");

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
    msg.setTimeStamp(0.4649836993000531);
    msg.setSource(3665U);
    msg.setSourceEntity(140U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(111U);
    msg.system = 61752U;
    msg.duration = 38451U;
    msg.speed = 0.7399399741679981;
    msg.speed_units = 171U;
    msg.x = 0.007974707705279527;
    msg.y = 0.7423315796551359;
    msg.z = 0.4594874749147818;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.5005141325353551);
    msg.setSource(3795U);
    msg.setSourceEntity(31U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(22U);
    msg.system = 3009U;
    msg.duration = 15655U;
    msg.speed = 0.07644723778337414;
    msg.speed_units = 192U;
    msg.x = 0.07814788831108821;
    msg.y = 0.6465408434251899;
    msg.z = 0.4807009761731965;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.430071945572987);
    msg.setSource(26372U);
    msg.setSourceEntity(124U);
    msg.setDestination(32096U);
    msg.setDestinationEntity(48U);
    msg.system = 29983U;
    msg.duration = 17969U;
    msg.speed = 0.8299911763432642;
    msg.speed_units = 64U;
    msg.x = 0.21978512177578502;
    msg.y = 0.9796420458619374;
    msg.z = 0.8147832766798728;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.1854050426537368);
    msg.setSource(58118U);
    msg.setSourceEntity(84U);
    msg.setDestination(16606U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.9771194069330656;
    msg.lon = 0.27357859246076244;
    msg.speed = 0.9834598772992212;
    msg.speed_units = 205U;
    msg.duration = 58654U;
    msg.sys_a = 19698U;
    msg.sys_b = 31923U;
    msg.move_threshold = 0.6617710809826989;

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
    msg.setTimeStamp(0.9345014103909973);
    msg.setSource(1979U);
    msg.setSourceEntity(131U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.36642556579222807;
    msg.lon = 0.4684200638726933;
    msg.speed = 0.13686093678222944;
    msg.speed_units = 27U;
    msg.duration = 16724U;
    msg.sys_a = 43745U;
    msg.sys_b = 7290U;
    msg.move_threshold = 0.9842567465515611;

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
    msg.setTimeStamp(0.10326594351426444);
    msg.setSource(13714U);
    msg.setSourceEntity(168U);
    msg.setDestination(47174U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.9743479898556094;
    msg.lon = 0.5997234746538962;
    msg.speed = 0.34488941904420745;
    msg.speed_units = 81U;
    msg.duration = 34344U;
    msg.sys_a = 23836U;
    msg.sys_b = 8985U;
    msg.move_threshold = 0.7997643916237531;

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
    msg.setTimeStamp(0.06233180987483289);
    msg.setSource(33819U);
    msg.setSourceEntity(31U);
    msg.setDestination(47133U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.8687213382484296;
    msg.lon = 0.7138205271231539;
    msg.z = 0.3243909989937228;
    msg.z_units = 12U;
    msg.speed = 0.8197098224898818;
    msg.speed_units = 123U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.652606976770645;
    tmp_msg_0.lon = 0.9331695340113435;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TDECFKEBTZAKSSEWHYNUQFADZNAUNTUCAPVPOLGEWXFFILRITOLQMWLJIFIFJTAJRRIDFHKQACWNZESFBUSNQVTWZFPNQKRQILNVORMJWORWQRYOJPVBDHRGTEBZMBMTUPXSACOKZXGPYUNJEDJEVRNPMMCTPHZWGSXKJDYYXPHZFVGQGDZDOGUSSWMCYCYUPUETOVLVXMBCXRLOBAZBGGLQSYEJBAQHHHJVXIDKXYWKI");

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
    msg.setTimeStamp(0.30792222636008526);
    msg.setSource(19582U);
    msg.setSourceEntity(1U);
    msg.setDestination(50853U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.1691226149421392;
    msg.lon = 0.6600436593694166;
    msg.z = 0.8781715162085675;
    msg.z_units = 235U;
    msg.speed = 0.1253867002613217;
    msg.speed_units = 20U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38645107323955774;
    tmp_msg_0.lon = 0.2614002141940909;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UBBUPTSYOTLLVOKCUTHXYVQGDKOOJANHZRLR");

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
    msg.setTimeStamp(0.5713649858111957);
    msg.setSource(6694U);
    msg.setSourceEntity(36U);
    msg.setDestination(1813U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.08862791233154932;
    msg.lon = 0.5664214080114839;
    msg.z = 0.5520016223953299;
    msg.z_units = 113U;
    msg.speed = 0.765990158004203;
    msg.speed_units = 114U;
    msg.custom.assign("DIYPNCVNXKDZIXUQCZZMZFTBCRGTMVILMZWXHHNPWXGRNGGGJUFNJKCVWIXTBSJSLSYVJNYIDJVAUQYBYEAAWSUOLTKLUSZNEDECRZXPRBQFMWTHPQVGPAODNBZOBEVDVEESAEIIUQWHNYPPLCMOTAYBXFMSQXGEOFLRGFHWHZWUDHUROKUBTJIXOKBJMQKCHGVIAPPFHJKTTEYSLSTMQSOXLP");

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
    msg.setTimeStamp(0.5889199389473966);
    msg.setSource(8970U);
    msg.setSourceEntity(246U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.5839604379160735;
    msg.lon = 0.5690518926328589;

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
    msg.setTimeStamp(0.5739961229047712);
    msg.setSource(2861U);
    msg.setSourceEntity(209U);
    msg.setDestination(13872U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.47118816723745405;
    msg.lon = 0.047957677173417146;

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
    msg.setTimeStamp(0.05962228085589705);
    msg.setSource(29331U);
    msg.setSourceEntity(236U);
    msg.setDestination(61280U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.7410914438206831;
    msg.lon = 0.7749793128724437;

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
    msg.setTimeStamp(0.691922018631018);
    msg.setSource(43982U);
    msg.setSourceEntity(230U);
    msg.setDestination(13465U);
    msg.setDestinationEntity(162U);
    msg.timeout = 32107U;
    msg.lat = 0.5063644207292547;
    msg.lon = 0.5291529685573827;
    msg.z = 0.5320972653470283;
    msg.z_units = 188U;
    msg.pitch = 0.5908437743988794;
    msg.amplitude = 0.5861156939872535;
    msg.duration = 30771U;
    msg.speed = 0.41233557443446556;
    msg.speed_units = 216U;
    msg.radius = 0.950147324110515;
    msg.direction = 82U;
    msg.custom.assign("EGFUFMENXRZKUWNFSYIRTGHORFLWVNGTJEWWTFJGEHMCCMVGGOVSDZZCQGJVUKRUEOYMZDSDMGYZRBAXINOHFYRCERKHTYZMPJUYXSZAHOPDVQPKLBHHKNUAENSALB");

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
    msg.setTimeStamp(0.29537907376305605);
    msg.setSource(27169U);
    msg.setSourceEntity(180U);
    msg.setDestination(42025U);
    msg.setDestinationEntity(238U);
    msg.timeout = 1043U;
    msg.lat = 0.35349155333779614;
    msg.lon = 0.577870491589206;
    msg.z = 0.1768347418532742;
    msg.z_units = 231U;
    msg.pitch = 0.06179409175601225;
    msg.amplitude = 0.6137968556175829;
    msg.duration = 37545U;
    msg.speed = 0.9617974702485239;
    msg.speed_units = 162U;
    msg.radius = 0.4242357546592329;
    msg.direction = 117U;
    msg.custom.assign("NBBKAZUSXSBHVHDYXYCRTAUIDIFDVWGMIJJZVSDLXKDGPRUQWWCCSESAQGPMDWEKNNSOXCEGUNLUMQVVHRANAGIBFKOKNQJKFGYREBAEYBYDFCPJVPELRDGXDGNQOOIHYLVTIOUZLAPOJZNJORLLTPMETRWWQFHOWCHGFNZJZZYTRFHFZQKMXSZYLTYXIQVKUYQTMSEKFHRP");

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
    msg.setTimeStamp(0.9064338800209241);
    msg.setSource(42115U);
    msg.setSourceEntity(118U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(181U);
    msg.timeout = 44295U;
    msg.lat = 0.15868638426247672;
    msg.lon = 0.12692379033933288;
    msg.z = 0.6677021612698613;
    msg.z_units = 180U;
    msg.pitch = 0.5556013103427228;
    msg.amplitude = 0.24155284140464472;
    msg.duration = 62027U;
    msg.speed = 0.4081120839622413;
    msg.speed_units = 8U;
    msg.radius = 0.8248967231825584;
    msg.direction = 61U;
    msg.custom.assign("ZUQGPFZZRLKNIZCWIXQVUSVMPMJMSFOAPXTQWZPLNHEKZDUMVGEJCAUJDKFKYJHRWFZXOOPEJYEPSUNCAXPDYNSHIBJLFSGLNBGTCEDOVNAKOQNLMKHLMTXNPRMWOFSEARDRADKUVVGQTEHZJGQUXYIPKUBEYRCACTWWOJHDKRCLAQIOGHTJAKLHWWFD");

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
    msg.setTimeStamp(0.07798123348909414);
    msg.setSource(43722U);
    msg.setSourceEntity(156U);
    msg.setDestination(37524U);
    msg.setDestinationEntity(21U);
    msg.control_src = 64853U;
    msg.control_ent = 173U;
    msg.timeout = 0.0750933930415929;
    msg.loiter_radius = 0.78099372725306;
    msg.altitude_interval = 0.24940145359184063;

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
    msg.setTimeStamp(0.381595723777193);
    msg.setSource(19735U);
    msg.setSourceEntity(217U);
    msg.setDestination(28783U);
    msg.setDestinationEntity(19U);
    msg.control_src = 16882U;
    msg.control_ent = 226U;
    msg.timeout = 0.9105275324036082;
    msg.loiter_radius = 0.5963581779674596;
    msg.altitude_interval = 0.2167072870587905;

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
    msg.setTimeStamp(0.1764077723242502);
    msg.setSource(15424U);
    msg.setSourceEntity(166U);
    msg.setDestination(905U);
    msg.setDestinationEntity(76U);
    msg.control_src = 31763U;
    msg.control_ent = 187U;
    msg.timeout = 0.4169690767772479;
    msg.loiter_radius = 0.6960209746471103;
    msg.altitude_interval = 0.0023796964945518306;

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
    msg.setTimeStamp(0.2471635532977281);
    msg.setSource(21019U);
    msg.setSourceEntity(178U);
    msg.setDestination(37185U);
    msg.setDestinationEntity(108U);
    msg.flags = 6U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7464530753783217;
    tmp_msg_0.speed_units = 130U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6301728012096958;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.21918762503627798;
    msg.lon = 0.21114127394881854;
    msg.radius = 0.5006604677974661;

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
    msg.setTimeStamp(0.6467296616660786);
    msg.setSource(24677U);
    msg.setSourceEntity(113U);
    msg.setDestination(41629U);
    msg.setDestinationEntity(234U);
    msg.flags = 155U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9393470566920686;
    tmp_msg_0.speed_units = 207U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7633161870343029;
    tmp_msg_1.z_units = 253U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9529223006183654;
    msg.lon = 0.8445099136964945;
    msg.radius = 0.46865926854713846;

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
    msg.setTimeStamp(0.6890033959107585);
    msg.setSource(47458U);
    msg.setSourceEntity(175U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(150U);
    msg.flags = 13U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9827961281695867;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.30209518106452793;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.10116088340282514;
    msg.lon = 0.9834716992232045;
    msg.radius = 0.2843456915352297;

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
    msg.setTimeStamp(0.11553924178166364);
    msg.setSource(30637U);
    msg.setSourceEntity(84U);
    msg.setDestination(5902U);
    msg.setDestinationEntity(141U);
    msg.control_src = 60807U;
    msg.control_ent = 30U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 17U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6576439931359592;
    tmp_tmp_msg_0_0.speed_units = 134U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.644720168234397;
    tmp_tmp_msg_0_1.z_units = 156U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4623062305847232;
    tmp_msg_0.lon = 0.6182381205108881;
    tmp_msg_0.radius = 0.2726728778048231;
    msg.reference.set(tmp_msg_0);
    msg.state = 142U;
    msg.proximity = 114U;

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
    msg.setTimeStamp(0.9193570011157396);
    msg.setSource(16405U);
    msg.setSourceEntity(41U);
    msg.setDestination(59531U);
    msg.setDestinationEntity(74U);
    msg.control_src = 52331U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 97U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7087567217274489;
    tmp_tmp_msg_0_0.speed_units = 170U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.11421975365908221;
    tmp_tmp_msg_0_1.z_units = 193U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.39205128545784695;
    tmp_msg_0.lon = 0.6674341429855678;
    tmp_msg_0.radius = 0.12169479100520197;
    msg.reference.set(tmp_msg_0);
    msg.state = 156U;
    msg.proximity = 107U;

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
    msg.setTimeStamp(0.8313392579408037);
    msg.setSource(46326U);
    msg.setSourceEntity(170U);
    msg.setDestination(53839U);
    msg.setDestinationEntity(76U);
    msg.control_src = 12386U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 67U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7278516139243435;
    tmp_tmp_msg_0_0.speed_units = 55U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4606302802731501;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10005761074236119;
    tmp_msg_0.lon = 0.2844064062093231;
    tmp_msg_0.radius = 0.4435481059242339;
    msg.reference.set(tmp_msg_0);
    msg.state = 243U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.520725477589421);
    msg.setSource(16812U);
    msg.setSourceEntity(23U);
    msg.setDestination(37098U);
    msg.setDestinationEntity(234U);
    msg.op_mode = 212U;
    msg.error_count = 95U;
    msg.error_ents.assign("ZQYEXSBVVAWIHSVDGZCOJAOTJUOOWAYOXITAMJEQSWORLTDYBLSVPIWGFNHMHMGNCOPUWFOYSHAPQXKGKFJNIRXYRSZMRKXUZOBUQUEPDWHDRYQEHMNZFMELUQ");
    msg.maneuver_type = 64128U;
    msg.maneuver_stime = 0.9749267817334153;
    msg.maneuver_eta = 9492U;
    msg.control_loops = 3113167327U;
    msg.flags = 203U;
    msg.last_error.assign("HLXMSQYSXZRJHBYWSOVEQCVWNPEIWNRQUKAGMPNFFRWMMZAIQZKITKPIHDE");
    msg.last_error_time = 0.01840206080316431;

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
    msg.setTimeStamp(0.2690344487648555);
    msg.setSource(37834U);
    msg.setSourceEntity(143U);
    msg.setDestination(62066U);
    msg.setDestinationEntity(193U);
    msg.op_mode = 180U;
    msg.error_count = 216U;
    msg.error_ents.assign("BROYPMRLZNKEODMIEWGCPPCLQBDTQBEOESFLKCAZJMUONVOPUPMZQYPGGCVGNYFHZTUBHAIJFIIXEAXQSNSJEIPUMGXIKFBHDQWBYYJLUOJSITEOKJKRNRVNFQPWKTDHBPYMJWUSITZAQQFNUKVCUVSHBVRRGILEHSZXWMYXVLOXASKPAAFABYEACHSUMGOL");
    msg.maneuver_type = 43672U;
    msg.maneuver_stime = 0.22660077191288008;
    msg.maneuver_eta = 42935U;
    msg.control_loops = 3287980975U;
    msg.flags = 214U;
    msg.last_error.assign("MJMOOZRRWAKXKZHPLMTUTPCUTNBVBJKTNRYZJPNNULZAFGOOSLFSVDOXPNYHVREUDXPAMXHXFCFNQKSEIERQRDQKVWBTWOLMNCUXDMUZEIOTKWTYNGBPCGLBZZCLVHJSBCLMOJFBSDAYFFWIIRTYSGPXYYIVZCIYHAOGWUAKCOYQKJWRMCEDFZLHKQGKEAVJGVFQLSETDGXEQHHGUQMHTZEIJDRCLIP");
    msg.last_error_time = 0.6339243234987867;

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
    msg.setTimeStamp(0.7188774820463895);
    msg.setSource(16635U);
    msg.setSourceEntity(226U);
    msg.setDestination(41973U);
    msg.setDestinationEntity(21U);
    msg.op_mode = 135U;
    msg.error_count = 227U;
    msg.error_ents.assign("SSBVLBEAIMXVXIAOQLNNRZNYYXOCFCXDKDISUCUDZUESQ");
    msg.maneuver_type = 39000U;
    msg.maneuver_stime = 0.5418168790856254;
    msg.maneuver_eta = 3015U;
    msg.control_loops = 2564597746U;
    msg.flags = 114U;
    msg.last_error.assign("XBQEBVCVLNFIMHWXJFJVEQZMELJTSKREWTMAMRZFDXGRUO");
    msg.last_error_time = 0.5343354836840734;

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
    msg.setTimeStamp(0.2806566680741188);
    msg.setSource(25411U);
    msg.setSourceEntity(62U);
    msg.setDestination(63328U);
    msg.setDestinationEntity(140U);
    msg.type = 47U;
    msg.request_id = 47437U;
    msg.command = 210U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 44497U;
    tmp_msg_0.custom.assign("NXRXYFJPBUFJIZBQOVAPONWFMTFLEJIATRMOLGQDVFAWIAAKOYZQDMRTEYKZMHNKNDZVDORJLSKYXRPQITSESHYBYNCHUWGZHVXUPSTDCLNCBEILTSZBJSGDAFTCRZEEIHULQAHWGIDVKCEZGSQKJGRPVPEOMICFLIBYJCRQREAJKUGZUGOQSZKHIDYSWPWFXXVGNULGNVXBOVWCAAMMDCNWMMHUBBXSJHQLMCPTLTHEDTNOXRWWUX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43226U;
    msg.info.assign("XFEISSEJMSTRSDCHWPXQLNEFXXOKQCRHJCVMKKLNPQGACAZRBMZPMTIHNRVQDTYLJTEKIDIOZFVKNUGXONMQBBRODDAPY");

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
    msg.setTimeStamp(0.8983540699657794);
    msg.setSource(23513U);
    msg.setSourceEntity(24U);
    msg.setDestination(38970U);
    msg.setDestinationEntity(140U);
    msg.type = 110U;
    msg.request_id = 11064U;
    msg.command = 159U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 39447U;
    tmp_msg_0.control_ent = 213U;
    tmp_msg_0.timeout = 0.6502304015984064;
    tmp_msg_0.loiter_radius = 0.7934795919188534;
    tmp_msg_0.altitude_interval = 0.9425622815225841;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52329U;
    msg.info.assign("NZDKIFFWDKMMHTAGOOHBBTUVUZESHLZIIEVRYSBOGTCMOBLHXZAHGWKACRAMJNNMQCDWEXWEITADCWDUKSPPULTRMBTGILLNVGADZUYYSYTCKWOQNJRIEIQXKMPFQRQIDPVXLJ");

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
    msg.setTimeStamp(0.0032246204330838024);
    msg.setSource(42012U);
    msg.setSourceEntity(29U);
    msg.setDestination(44598U);
    msg.setDestinationEntity(160U);
    msg.type = 185U;
    msg.request_id = 22340U;
    msg.command = 226U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 59638U;
    tmp_msg_0.lat = 0.04788253505386597;
    tmp_msg_0.lon = 0.6981905110139538;
    tmp_msg_0.z = 0.3883721549908258;
    tmp_msg_0.z_units = 62U;
    tmp_msg_0.amplitude = 0.9687184620931046;
    tmp_msg_0.pitch = 0.08244436466801952;
    tmp_msg_0.speed = 0.9246013367258937;
    tmp_msg_0.speed_units = 134U;
    tmp_msg_0.custom.assign("YDYGFCPAPOWKEPDKVOBWNLJJPKLQBPBLHWFIZETBQJLXCFTREYVFAZWJHSHSZUDFSAHZHIFUZVNRQLIXRKOWTVCXQYBCOXAFGB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41273U;
    msg.info.assign("LCSLLIRZXOEINALSLWLJRGBWQIDPNUPQF");

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
    msg.setTimeStamp(0.21157522921977612);
    msg.setSource(4332U);
    msg.setSourceEntity(164U);
    msg.setDestination(33855U);
    msg.setDestinationEntity(113U);
    msg.command = 224U;
    msg.entities.assign("JINPPCVDUOWCASITXSXODULNJEZPRCNMPQWHXZEYCLWFSCBZRXCPLRUIRJVWYLNRKHXYHMAHBVOWIJTJQQGIBPIZJYMQUHTELMZGNBTPHFAQYAKVVQMKKKZPISYFSLDBEZYTJTVJHAQYYVOWHXOEULDREPBCGCUBDBWGMOQZPSQV");

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
    msg.setTimeStamp(0.36860063197319126);
    msg.setSource(65483U);
    msg.setSourceEntity(227U);
    msg.setDestination(28182U);
    msg.setDestinationEntity(87U);
    msg.command = 118U;
    msg.entities.assign("XKBAHINEEZCVRMBEIMZOPATRBCAKPKAGLPFKKUXHKSNFTIYWHASJXPDACGCPCMEHCJARJSDTZQSLJLTLHKNLSWDXHPIMKQMIXOURBOCMMQFYUXSORFJMCJENCUEDZZMNFIXZQKBVBWLRZJGWFZFCYWEUGHVSXVBDIPAUUWOGZSRIQVVPBYOTLVBTYVZQLWNJSNKTAGDUYWGGRUDFEQUVTBHYTLQPEFRGQOJLWNIENYYM");

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
    msg.setTimeStamp(0.8177074891192084);
    msg.setSource(61484U);
    msg.setSourceEntity(181U);
    msg.setDestination(27601U);
    msg.setDestinationEntity(193U);
    msg.command = 33U;
    msg.entities.assign("IRNMURKLFNOBXQZRKKEGSGDJZVXZECLRTSQQPJFSALGYTGHIRYAMCQQZSFYPEYLBQUXXWOWWVDDVZCQBIMLVOETKN");

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
    msg.setTimeStamp(0.447516902211633);
    msg.setSource(8046U);
    msg.setSourceEntity(38U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(25U);
    msg.mcount = 39U;
    msg.mnames.assign("ZXTUWPFRUZBTQDYKEJYWRSDKJYWWBAJKRKXNBUARIXKEVYWZTPYGPQHAOZJBNEOTUYZKOVFQFANMAEBZADXPLSVPVIDIOHLIGNJNMSXERMOGSHFNDCHZQKNTSGBGVJEBQQFQDLTPVTBSNROXVACVQCUWFMFIJOHCRPSIEWGLSWVYZHPXSTUTGFUYHQMLIZCHCF");
    msg.ecount = 11U;
    msg.enames.assign("LSVDTTSFVZOIRKZEJAWJAIKBJCXVRNLHFLNLZPVCFCGTCBPCRVQYUYFYIFIWJQSSFOZWEHKQQEXFNRAFPVUHBXDBBMNLNQRUGSGDMEHACGBYPU");
    msg.ccount = 18U;
    msg.cnames.assign("FWYXNOOIDURJHQUWLTFKVQGZTBRGGKROWKLEJANQQWTQMRVXIHOKDSAIASDKILOVJFZUTTISPEDNG");
    msg.last_error.assign("RSPPVQBQWMAOKJYNBDEGQKZFEXUKEGYPOOFSQONAWMXENGSGFUASKAFZHEPJRHP");
    msg.last_error_time = 0.2704554363421968;

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
    msg.setTimeStamp(0.6576219901635534);
    msg.setSource(40895U);
    msg.setSourceEntity(113U);
    msg.setDestination(721U);
    msg.setDestinationEntity(141U);
    msg.mcount = 98U;
    msg.mnames.assign("YYXRHHURIQPCHOVKYFINBCGZJNIWJTPVFECPEIIGFYTYPENFYRSSUGRBFIXOGDMWWZYODZODCSELTQFHSJKAHBOBVVLWNCOAUTXMOXAUPBEDJZSULZXDWDDVTLBVIAJBRAASVLSACJKUJNRBTKOZJPPFNMLORLPZTMNBCWQUUGXEDXIRWMYMSXSGBEAGVWEZPTXKZCJHKXQALKWUTLPNRGDNWGYFQKMMGUKEQIQHCEFZQOTCSVMHQHM");
    msg.ecount = 23U;
    msg.enames.assign("RVZDLMHQZUOQWKNAWQBSIURIAAGPBITEGNXPNWCCFVKPFTXORQBHCRWQAVXFFDILLPJAZCJYUMJMKQVEOUQBVCLMAWKNGTKDICXTXHZFUFMLTCFEESUGHAWRBYYSVNLUELYNDKZSJFDYTO");
    msg.ccount = 61U;
    msg.cnames.assign("ZLMQEMISHQSXZLZHUNMUQR");
    msg.last_error.assign("FRHGADFEYFEDMEYJLNFBTFXQPAYSVCCTUOGKOMEKPOMFXKJJIECBEBXMXELKAUCHMVHWWMAGBNNBPLYIVLOTSAHBCGPLGUZYVLYXWNSCZLDIPFUIZAO");
    msg.last_error_time = 0.23650968130647998;

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
    msg.setTimeStamp(0.4872282271075351);
    msg.setSource(32906U);
    msg.setSourceEntity(205U);
    msg.setDestination(50754U);
    msg.setDestinationEntity(48U);
    msg.mcount = 85U;
    msg.mnames.assign("LSYRFKXSRSEHGDJKGCWTMWNSOAWTNOJXXZPHAOKJDYPZGQOBDNDBZFZLXVPFAOXEINGRPKSVPCNBZVZIOBSLIKSETFFXUAEAFOGKEH");
    msg.ecount = 70U;
    msg.enames.assign("JXKHKAUVXZBEDRNHTEMUBUNMDIOMQQSUAGIRCBEFEPGGQUAESFCBCWLEZOEOAKBHBTOONXOBGQSQTRVYMJLKQKPBILHSLWYZCODAWRTEIEUUTSILSVDKTTRJNLMFAMAJQWGVVZCVZRZQJFWOVCUBFAPCZLHABWIXMWIRPXDXIQNSLYPJYRYWYHDKQMGDGSOYNIYPJZXSF");
    msg.ccount = 186U;
    msg.cnames.assign("PMHVALSLAXHIXFDXLFMEKSDQTVMOJALNYBWCTMKHYCZPTZIKAWNSGVKPNHUGLTXBWWFCSUEYZRGDEPWIEYQQVAPXONNWQLAKWCRVZZABTMAQUPYOIYTLLSQOOJKJNPUFZKRMWXCGGDPJGJURPXEZNIEKWOORHQDNXNXSDCRRSGRWETTXHGQJDDG");
    msg.last_error.assign("PNYUOUDUWNVPEXZAGJECNLAPFLQPMDVGYDTOVYBKQDHHCOWVZOJAVSWCLFHVATPRNQIWBXYLLQGVFGQCUCBIFEIXFNIWMXSALBZIGRMMKJFGSUNQMRIYNHREJKPRUFTABLKLOOHPDGEMZFOKJNSGTRKRDVZUNZKXTZXCREDPHOYMZTEMXIUSDZKYQEJXTXBWMSJSCYOSWEXCAVHBWEHWGHSFTJICICUQLQIQPPF");
    msg.last_error_time = 0.5366946391145958;

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
    msg.setTimeStamp(0.7735715212064006);
    msg.setSource(65455U);
    msg.setSourceEntity(46U);
    msg.setDestination(62170U);
    msg.setDestinationEntity(46U);
    msg.mask = 145U;
    msg.max_depth = 0.36803971905874355;
    msg.min_altitude = 0.3661589622525496;
    msg.max_altitude = 0.4950283777869958;
    msg.min_speed = 0.2274007461770341;
    msg.max_speed = 0.8071863339237826;
    msg.max_vrate = 0.6033999894284101;
    msg.lat = 0.453406621143576;
    msg.lon = 0.70003920607816;
    msg.orientation = 0.9157825130982886;
    msg.width = 0.6790790474625217;
    msg.length = 0.45223880726330334;

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
    msg.setTimeStamp(0.045485543691591634);
    msg.setSource(37239U);
    msg.setSourceEntity(254U);
    msg.setDestination(52830U);
    msg.setDestinationEntity(106U);
    msg.mask = 146U;
    msg.max_depth = 0.8560914779201385;
    msg.min_altitude = 0.21487693497453586;
    msg.max_altitude = 0.7467655509858601;
    msg.min_speed = 0.1480217773349759;
    msg.max_speed = 0.16840622022627472;
    msg.max_vrate = 0.18059618294098811;
    msg.lat = 0.5725830864435375;
    msg.lon = 0.29385354492507654;
    msg.orientation = 0.872788783619119;
    msg.width = 0.022418976594432816;
    msg.length = 0.31303340988153827;

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
    msg.setTimeStamp(0.048549032985418905);
    msg.setSource(46792U);
    msg.setSourceEntity(66U);
    msg.setDestination(40251U);
    msg.setDestinationEntity(169U);
    msg.mask = 177U;
    msg.max_depth = 0.27881983270339183;
    msg.min_altitude = 0.6584389141648532;
    msg.max_altitude = 0.5361229557932352;
    msg.min_speed = 0.28026939820715147;
    msg.max_speed = 0.41224309755930166;
    msg.max_vrate = 0.04855590774585039;
    msg.lat = 0.514624283234952;
    msg.lon = 0.1270691080248293;
    msg.orientation = 0.9962390697685882;
    msg.width = 0.5072168227289228;
    msg.length = 0.2876753582653605;

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
    msg.setTimeStamp(0.09042793072402666);
    msg.setSource(37650U);
    msg.setSourceEntity(112U);
    msg.setDestination(55603U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.06683196968929261);
    msg.setSource(11978U);
    msg.setSourceEntity(62U);
    msg.setDestination(64950U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.9839956932081951);
    msg.setSource(23762U);
    msg.setSourceEntity(171U);
    msg.setDestination(32338U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.608740466555827);
    msg.setSource(53138U);
    msg.setSourceEntity(98U);
    msg.setDestination(606U);
    msg.setDestinationEntity(93U);
    msg.duration = 38552U;

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
    msg.setTimeStamp(0.5590816930834254);
    msg.setSource(3229U);
    msg.setSourceEntity(185U);
    msg.setDestination(37318U);
    msg.setDestinationEntity(252U);
    msg.duration = 38854U;

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
    msg.setTimeStamp(0.8493170734989326);
    msg.setSource(20077U);
    msg.setSourceEntity(115U);
    msg.setDestination(34076U);
    msg.setDestinationEntity(82U);
    msg.duration = 59887U;

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
    msg.setTimeStamp(0.8106821511200977);
    msg.setSource(28772U);
    msg.setSourceEntity(121U);
    msg.setDestination(37665U);
    msg.setDestinationEntity(19U);
    msg.enable = 31U;
    msg.mask = 2929557855U;
    msg.scope_ref = 0.1554249837602678;

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
    msg.setTimeStamp(0.806022762419205);
    msg.setSource(31640U);
    msg.setSourceEntity(10U);
    msg.setDestination(21888U);
    msg.setDestinationEntity(63U);
    msg.enable = 237U;
    msg.mask = 1194895367U;
    msg.scope_ref = 0.536887986302479;

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
    msg.setTimeStamp(0.3838084496493207);
    msg.setSource(54032U);
    msg.setSourceEntity(23U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(233U);
    msg.enable = 66U;
    msg.mask = 1915852953U;
    msg.scope_ref = 0.567220587083088;

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
    msg.setTimeStamp(0.07511524079551013);
    msg.setSource(19583U);
    msg.setSourceEntity(50U);
    msg.setDestination(17276U);
    msg.setDestinationEntity(237U);
    msg.medium = 240U;

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
    msg.setTimeStamp(0.40148339405958655);
    msg.setSource(6256U);
    msg.setSourceEntity(88U);
    msg.setDestination(55788U);
    msg.setDestinationEntity(56U);
    msg.medium = 161U;

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
    msg.setTimeStamp(0.38377294348459823);
    msg.setSource(41954U);
    msg.setSourceEntity(199U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(195U);
    msg.medium = 67U;

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
    msg.setTimeStamp(0.9581119415827912);
    msg.setSource(56553U);
    msg.setSourceEntity(73U);
    msg.setDestination(52105U);
    msg.setDestinationEntity(117U);
    msg.value = 0.5891073735500161;
    msg.type = 148U;

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
    msg.setTimeStamp(0.5412969602330893);
    msg.setSource(42447U);
    msg.setSourceEntity(133U);
    msg.setDestination(10567U);
    msg.setDestinationEntity(13U);
    msg.value = 0.2526337476896865;
    msg.type = 95U;

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
    msg.setTimeStamp(0.11892630797491988);
    msg.setSource(60362U);
    msg.setSourceEntity(72U);
    msg.setDestination(22296U);
    msg.setDestinationEntity(109U);
    msg.value = 0.610103404087061;
    msg.type = 100U;

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
    msg.setTimeStamp(0.5485990017018608);
    msg.setSource(43706U);
    msg.setSourceEntity(233U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.27861097819165126);
    msg.setSource(9153U);
    msg.setSourceEntity(187U);
    msg.setDestination(38696U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.32684868942046563);
    msg.setSource(53415U);
    msg.setSourceEntity(79U);
    msg.setDestination(30019U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.17725287358887065);
    msg.setSource(63923U);
    msg.setSourceEntity(40U);
    msg.setDestination(43792U);
    msg.setDestinationEntity(96U);
    msg.plan_id.assign("EEWDNLFZWKTTGNSWMABIYLQKENSBQSUWOJGYNENRGIUUWMVINNZWVZDLLXUNJHSQOPTIVGCOWZVQGRLXBOCNTEUFDDGRPLCJCVKPXBJKMGQAKGXZDIXPAKJLFHBPDSCASRJQTVMRCYSZCMELKYPOSXIXOUGVQARAFHDZZIIHTUOLORXFHTVQPMBPCYYUUZABGJQVOQFBDLRAH");
    msg.description.assign("QZLGMFJXMXMLRXRTYSWAAYNWUMEYYYZTVOWGFBVGWTXEVCIXDHDDTUHPPEQLOSZSINMBASWRAIAEGPUCRKJJEFOFNVNGLXBKQIVVFCRZUUNJQITYDCHUOHKJDRYUTODIIHOZMDZEYJBXSFOWEJMVC");
    msg.vnamespace.assign("VZNSZLHACNZRMHBFDPXSBPSVILVKBXVHTQEENTEDXUQMCYLSTWYQJHWJTQYIVIODEFUKLLZENAISDHGUFKKINWWCNKUBITFROEJYFGGANZKRKIIQGBHRTRNTMANBPBVFRZCAYXOLQWXZPLLXGMVJYFQMVJKCXHOJUQCWSTDTPTKOHE");
    msg.start_man_id.assign("HMVNIGGFUCUVNOBWKOXFYEUOZXCMRAPKJNCYWHIZIQNTPDHVRNQLECQVNDAKIBJBBZOPHXSNHVZMQSCVIEXSFBDZDEZUPLUVLYAOAWPXTQAPORZRGIGJTIWPTJWIJQFKHEZYEVQYCCCXKFAMTGFOHJVGYWFEHODQRS");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.2569556646131247;
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
    msg.setTimeStamp(0.4267207959829892);
    msg.setSource(2818U);
    msg.setSourceEntity(33U);
    msg.setDestination(44248U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("LBLIVLXYWNRHJOOSKDPRBOEMXHILKEFUSSLZWVNXCVNFNDQZIAFMTOTEAADVEZ");
    msg.description.assign("AHPBMJVYMNANBNLQFAOTUHZDLQTRKABDHLNIXCRPXMELYTIOVYITWEJUYIYKXKPFAWHUKWJICIOXTTHZBUTEOGGFNQSFHDSZVUOCEQSNZGMLKWLVVZPYLMJJCVMYUROQWHYGVFZQDKMPNEKREFB");
    msg.vnamespace.assign("SBFXYZMLUVAZEHRPEWGZICJVWFDPQAUFTGKZHKPUHZMTCPDBGJPOONMFSZRCOIMUBNYSAJPEESNQWHORFWXOKKRHNBWPJLBVHRVWTCWUAJJKAAXKZLQTCPHVUGSSRXTLYXDVSLMDHOXNAWJDSOTRQEMZIBMFLEFXIAIDGDFKZQOYCMEEBTGIUYKTNIBJNURDOCNYWVPENDUXVYIUVCOLQKMXQJYXBH");
    msg.start_man_id.assign("WFPBIYCUHYCUMAMUUCYDMPZGDJCSFYVOMMZEG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("IGAUJBYFAHOARRLQWTLYEJUKFPKRISCMANHVGUFBTPEGHGMFRRXPYZX");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 38436U;
    tmp_tmp_msg_0_0.lat = 0.48335501132917413;
    tmp_tmp_msg_0_0.lon = 0.8180287508017158;
    tmp_tmp_msg_0_0.z = 0.6934938674339824;
    tmp_tmp_msg_0_0.z_units = 89U;
    tmp_tmp_msg_0_0.speed = 0.34094985994922244;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_tmp_msg_0_0.custom.assign("CKGVEPCMZQSWTEYQJBJEZIIHMGGBPLJIFFFALMVXWWAOTWJBQDTOYRTZLNZXCDWUHATYQSJXFSBABGVODGGUX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.03201684464217913;
    tmp_tmp_msg_0_1.y = 0.8985188689402597;
    tmp_tmp_msg_0_1.z = 0.10686374564204049;
    tmp_tmp_msg_0_1.k = 0.2848413611446877;
    tmp_tmp_msg_0_1.m = 0.7654005628876012;
    tmp_tmp_msg_0_1.n = 0.6488887207137246;
    tmp_tmp_msg_0_1.flags = 218U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("HFJUREKWGVEIKHVSJKMACTZRSLEJPMQUPBNLIHYOVXBTFBCHRPP");
    tmp_msg_1.dest_man.assign("ULNNRBYMLTSAJSIYFHBDNXMZAPKZBCRXHKOEULYJLVPPRDYKAHQTXGMWUAYVVSLDGEDXZNRUQOMWPZAIWBKSNQWKIFVPHLFMITZRLJBWNGUJWQCBWDZEPOPTECJVCOZADRIHRGSFRZASCWDQBKDUSGTBXZU");
    tmp_msg_1.conditions.assign("BPPNOQFYKFPTXRTHUCPTIDISFZYFFMGDOQLZQBTLOHBUJJVTLYXINGHEHJKXNJRMWINHPRIDTZYQJKERCIWKEFVPWZGVMKSOVCLWEMQDPWESNWXXKATCCYJCCOUUGOGHWIEZONHUBQBCDFDZALYHBVWKXEUOVPGSEKLKDADWPTQLXJMRRANMYNLTJUDXQNLWJFSAGUXKFVZPBJMANGZGYMBVCOHUUYAYCZOHEVMEMDATSQRFABSRQRVZISSSBG");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Acceleration tmp_msg_2;
    tmp_msg_2.time = 0.7478097187398138;
    tmp_msg_2.x = 0.5776112906586434;
    tmp_msg_2.y = 0.8792308652569638;
    tmp_msg_2.z = 0.4786661538765692;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PlanGeneration tmp_msg_3;
    tmp_msg_3.cmd = 13U;
    tmp_msg_3.op = 165U;
    tmp_msg_3.plan_id.assign("JFHXQFAMJMORCQVMBRCOPUKBETSRPCJLPOYSZEMJZSOJVXYISDZCIEVKREIMNFJEAGUXFXAHQSDTGDAGCKWKAHCDQ");
    tmp_msg_3.params.assign("VDWXXHJBVSRPSYFWENQZGDOZFJMEDPJBOUCAXRYFKEYWIWRUGHTKCYEGVXMUGTDFAXQZJSENDVRPGPCNHYQFNZOFMVDDUGZOTYR");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.9301168392929302);
    msg.setSource(21272U);
    msg.setSourceEntity(172U);
    msg.setDestination(32139U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("HVFIINMJQLGBVRZBPDGJLDDITBGFRMJEICUTQCLZEENTUVUVFXURNZFSFSXXYWOYVWWDDGJYFXWYAOAAKSJNQDHPHLCECWONMFVZMQJWDETJBUKTWJGHOCPMNGBPODOLTOUCNEEFXTCPUYAFUKANPQVOARUBQQRLKDVZRKZVAXVOMBSYDASMZSHYWZKUKCHMIKG");
    msg.description.assign("LFGQXRVSZQBKUYOHALNTDEYKSJJWUSODLNTOKKOQGKRIZHGOXNSAEWYBAGOSESCSCFEYOCRFVVGZNFGGBWCOKBJWYPYHCDLTMLJKATIBZHVJQLCUSEHBDUQVABGZSPFMWHRMHDPXXWBKVCUOTQIFWXZNEHJFEIQQTNFRRZDAMPPENDIRLVIHPMUXPDTZKYAPRYAJSVJYWYLXBCJRNEFJHUCRVXPTCNZGIAIDMUDQWELUMMFBIAX");
    msg.vnamespace.assign("TXVCHUSQCVETCTFGPFHHIIBOHBVTUXNBMNIFDMAHXNAQPORDAURNXPMLWMVXFZWZPZGDCXTRFKWDJGTSMBPEHLPQNJOFKSLVCQAVBYGZHBSODOAEXC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EWRCOHTSGXCXORZXGLHNVOYWDSNYPGKCNYLJNIHXFJNZBFYWTRLZSAFYGXDZTSICVEKLJBPYMGYBLICRKDZTXYTIBADODVUQDPSYUHGMWFNXLDEIRWFPMZXMOZOJLQQCFHMWTEGSUWWEEA");
    tmp_msg_0.value.assign("DMLQWPATIHUUZFIFJHWTNNKNULKSBTIPAPVOFMJEFFPEWQVUATMXMLOBXPURCJCJPPJFWZHWSTBJHLIRJXSAVPXMDGDBIUQRVSKCDYNDBGYSMFKDHXLBIUTWNPVNZESYSN");
    tmp_msg_0.type = 234U;
    tmp_msg_0.access = 239U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DUTXFSSQCDXYEVLBGGLWINZBVTDISLCKXHFCNAQHXBIHBIQFLAXEOPNJYWORODHTKDZJKGMZDNATSKDLJBQGSLSVRRFXJESOALNWXOQUZKZCMJPDJRMOOJRCJGUVVUYOGEBFIAGQLNZVSSFAWUGHKFMUIY");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RYSADZJRJTQHATPTIRPAOIHLBGFDWSIDMGZVQPOXAUOCMMYDBMWKVPURIJPWBNZGPSDLHWORGYCAWHUSWNBTKXGFZEATYGNQEJYDHALKXDNTEYQEFRMFVCIVMTJESKQMZOUPGKHZKHECJGJPOLAOKERSBOBOEHMWUNVUXCLLPSUJBNXYBIUZYKJCILEXLBNFVXIZXTLWIA");
    tmp_msg_1.dest_man.assign("QXNRWUWWUYLGQGEFNJURHBSMSOSSVGPWGZMZJFNEIHAJFDJBNKOROAZXVUFKRIOKHLDLFKNSYVMLMJCWQTXMXXPKNITAOVETYMFLIPSTCTQDPCMJJWRHUOIYBYJXZ");
    tmp_msg_1.conditions.assign("LDOYWEDZIRWMCQMDMWJPEROFFJJTWLWBNAYWVIUROIEANPWNTTDTVFQISBOZPPSKHLZELHEMHJHSCABFBWQROVQGKUAFJCXQANNX");
    IMC::AcousticDiagnostic tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.enable = 99U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DevDataBinary tmp_msg_2;
    const char tmp_tmp_msg_2_0[] = {-13, 57, 6, -98, 88, 123, -4, 67, 32, -75, 23, 3, -42, 10, -95, -6, -102, -59, 31, -30, 94, -4, -5, 77, 95, -31, 123, -53, -71, -106, 21, -26, 38, 121, -10, -60, 107, -104, -7, -117, -2, 60};
    tmp_msg_2.value.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PopUp tmp_msg_3;
    tmp_msg_3.timeout = 40970U;
    tmp_msg_3.lat = 0.6709689355688219;
    tmp_msg_3.lon = 0.2002330704242492;
    tmp_msg_3.z = 0.8720632745146052;
    tmp_msg_3.z_units = 33U;
    tmp_msg_3.speed = 0.903279633863458;
    tmp_msg_3.speed_units = 22U;
    tmp_msg_3.duration = 7902U;
    tmp_msg_3.radius = 0.7337704856817999;
    tmp_msg_3.flags = 73U;
    tmp_msg_3.custom.assign("SQYMTAHWRUDWISIVYGUHIZCDTIKRXYOJGWQLLCRCNOPKAETFWCSFMLKNJNGM");
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
    msg.setTimeStamp(0.3517615358132301);
    msg.setSource(40524U);
    msg.setSourceEntity(136U);
    msg.setDestination(41770U);
    msg.setDestinationEntity(99U);
    msg.maneuver_id.assign("QYVWAUGZTGOTVQHVBSLFPNTCDCRZYTWVDFQHJOMOYMVNAKAPXGLWXHKGAPRBBMRKYSVKEMODCNRPZFYOEAJVMHMYJQKENETJWCMUQGDRIIFVZZZOIXQFQPOYKTMPPJCPVPYKDHCFATFUJXLUMHAFJNWIWKAEONYZRNWXEUKDGDEHPIBFDBXXQLQNTUIHTTAXQXJRULASWBBJIJ");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.9626584896591153;
    tmp_msg_0.lon = 0.36204547344658145;
    tmp_msg_0.speed = 0.7292730245704484;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.duration = 15943U;
    tmp_msg_0.sys_a = 29994U;
    tmp_msg_0.sys_b = 22606U;
    tmp_msg_0.move_threshold = 0.051978753841863234;
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("XOBEAKIMGVPIXXZYTNXILIJPCOROSGVSHVFYXCLJWKDFUKXFHMSHEXHRGWRJARHQRQFBEZAJJIPSPNCFFULOQZKDDSOIUOWZJDMMQYWUNNTEEQVTKCCBYLPVLJLVXWPLGODEKYURZJFDFADOZWACPQATNBWBMNXRZRCYTLR");
    tmp_msg_1.visibility.assign("VXDTZYTOWULMDROIJTYBMGXKJBCLPRBNLHRKQABJLWZGPIQBGKCNZRDAEITYMMJFNTQGXAMASOJXHDHVDLKOCWTRRBQTSANQMHSZQIGUOOPEWPLFVIWSVUGUFKNLCYGZGDGHTUEFSDSEAPFHXIVKCSPFDXVCZPEANDRZOZNQUHOFJRPCMIVXVQZAHKDQLXXFUWYRJJTHIFYRYWSPLAYZWEKWUUIEESCBUJGNWPLVQYCEKMBMCFXTHIEAJVYKNN");
    tmp_msg_1.scope.assign("ZAZIUHDSXASZIDWKCWYKOMEHDZGBMNWOHAYHNHCDVTJMXBGGNCZCFWQJFJQBQNORSBQTDFKLMKPPRIJBQHEKNYIARGMRQECYJRVPNTWLVIFKFNJMZISCCDFBWLEEMTGVMUNPACYXTX");
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
    msg.setTimeStamp(0.9099391147132124);
    msg.setSource(57829U);
    msg.setSourceEntity(35U);
    msg.setDestination(62312U);
    msg.setDestinationEntity(157U);
    msg.maneuver_id.assign("NEDVKLTYGNUYITLGMVREUBSDVIHEETQCVXUWFUWMPSFHEPDSLGNAJHYTDXZDXNOXFOXZQVSYZDQVNZXPGJCEQRUUJLCEMJYPYJXTZZ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 7222U;
    tmp_msg_0.lat = 0.5252920471603088;
    tmp_msg_0.lon = 0.9416170110618924;
    tmp_msg_0.z = 0.8834552327028151;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.speed = 0.3768904550911377;
    tmp_msg_0.speed_units = 182U;
    tmp_msg_0.roll = 0.6080999623942868;
    tmp_msg_0.pitch = 0.5653323896538935;
    tmp_msg_0.yaw = 0.6462982102117453;
    tmp_msg_0.custom.assign("MMHWXSZFSZAUGQJFPEKLJYFNBPPBZLYFSNJNXFZDWHOIEARDGSMVRFZKNIXYTOSVSSDKGMPKOQGMCNLVXK");
    msg.data.set(tmp_msg_0);
    IMC::StopManeuver tmp_msg_1;
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
    msg.setTimeStamp(0.5705144794109298);
    msg.setSource(33410U);
    msg.setSourceEntity(72U);
    msg.setDestination(35301U);
    msg.setDestinationEntity(110U);
    msg.maneuver_id.assign("QELDKZRWBITRWGJHKUDIMYJHRA");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 38356U;
    tmp_msg_0.flags = 102U;
    tmp_msg_0.lat = 0.931869493050129;
    tmp_msg_0.lon = 0.9779466392322597;
    tmp_msg_0.start_z = 0.7997643927687511;
    tmp_msg_0.start_z_units = 212U;
    tmp_msg_0.end_z = 0.5887165092464713;
    tmp_msg_0.end_z_units = 16U;
    tmp_msg_0.radius = 0.700047224483258;
    tmp_msg_0.speed = 0.08463079714409216;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.custom.assign("LMYEQQTXOWKAYJNERMLZFM");
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
    msg.setTimeStamp(0.723693907914905);
    msg.setSource(37844U);
    msg.setSourceEntity(171U);
    msg.setDestination(29099U);
    msg.setDestinationEntity(134U);
    msg.source_man.assign("VPRNCUVAKURIXDAFNTFZOPHGMGCUOUFQQWEEBQEGMNIMWKKWVZOLINEBROZSUHUIXPRUQAJLXYWSMWXTARYDCRZDMELSDHCRYAVDXSFELJDBQFHGKODPPOMSGRGQCAXJODTXGTSWHZPWHMDLEJMHOCM");
    msg.dest_man.assign("LCBSVCMPNFLGDZCIJKFQVPGZZQNBVQAFFQEADPMTMDZMRMDUCUWOAOKJQIYNEWAAZPSHQKL");
    msg.conditions.assign("ZNUCZMRNKDMJRPHSSXGWFIEHEMVTPJWUTVFIUCWOMDVCKLLNLGKVKMYGGSUPXFLDCFWKZJDICSMYYRNILCCXRQHDFXSNBKALMODTSMVKIONJSAQUAQFWBRPAXRWF");

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
    msg.setTimeStamp(0.031222650022493692);
    msg.setSource(29410U);
    msg.setSourceEntity(136U);
    msg.setDestination(40041U);
    msg.setDestinationEntity(168U);
    msg.source_man.assign("VVJSZFHPFZSOVANPKGFWWEMSBLOGYSGXUHKXBGVYBARBRMDTQNNHXFKAFSLEBXJHYMEKNJYRCIJWGCIOWZQCZCEQVNCMSQVRDZPUTNTHOQKSRJDKRRENMKZTZGBBEXILJHRUUGDCFHOLUYATXASGPAIQWTSTEWWIQJOIVRMAFUXDLTGOKGLHOYLOINFXCDUMIYYCXDAJHUHUWNCPZPIPQYDMZLDTTRXVQBQSCDZJIPNEWOKWL");
    msg.dest_man.assign("LAZVKHEUIBUAVKNXQQKKYIUMFVSKUWROEWFLEXWKPMBYBDGFJSVPFCMDQWYBESLDESNVERDMJTLZJNMHGFBUYDVRQTZNBSNFIJORVKXEYNNHMQGOCFSQYHNGWPBQHOSMAPVWZLBDCHVTKUCGAITJCNARXHTNEJRZFTTMDYOEQGOJDPHCYFGOOOFEOWUAVGZSPLIRXAPCXQRLXICPIXU");
    msg.conditions.assign("WKBWYXMAPZUCTCROQQEIGIDQLOIVXFSXTGTPPDNCBSJZVAEWJCZNYVHOXBJAZCKMXFBEUENDFJGQFDRGLIJZPQNEBOMGRNCWEUVVGTSJVPMMAYELCVWFZVZIJRFLJIRUYFSKEJCTYPDKPHNUNKHQSVYDBURQOGOYSTKYXARWPFAXSTOVBQTXOUHHJUIMAQPQLUPLAK");

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
    msg.setTimeStamp(0.21692348435058184);
    msg.setSource(46856U);
    msg.setSourceEntity(22U);
    msg.setDestination(8021U);
    msg.setDestinationEntity(250U);
    msg.source_man.assign("BXNIXIKYLPCVHDOJZDHWCFULYBGIDSSIJWFPNCENXMQMNKZRDHTPJFWETYRBOHMFZYTZEYAROIGRUQXXGPLNDMPMOPZBBSEJWDXXSQJMERBPUXWFUWRMCBWYKULQNMGGYXUXIBAWDAAIKDRNMSSFUTLUCYOEIOVSTKQGSVLALOOCGOHKJZDJBYWY");
    msg.dest_man.assign("AONUUBFQUFWPARBHZSDXJIUKEWRAJHJDUSHVSZUFEBYQSJSSQGGWXDSPDLJCVAVEVNWUXJCTWMIHZIBPEDMDKCMMFTIZJRYXCQTMAVVKMKGQBHGGDJTWCOQXCFMNZIEKILRGCRDFWIOTOAWXPJZOFEHTIYCNOTQKENXMZLYXYPLFILGMOBLEHLRKNASQLTVUBCICXZGBTWPZNAVHXKJDDKVRABRUNKESLNHFHUWZYOPRMGBYOYV");
    msg.conditions.assign("TABLHJDJBOJUZODOXZXWHIULXHMSVLVJBHIBPWWFQZIYBGIJXMYUERYXMGGAKBNEELQAIAELZVIOXUHEPPOCZVKRSUUVPUNABJSOKGSQSCMHCTQPRVDMKAWCKSJHNFCXUCHIYPRAFYZMLBFTZVFTEFGQGYAMLBYWSOSJPNQQURMTTAFKTDGNDHGYPZLFGJEBKQQNAKWWWTXOL");

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
    msg.setTimeStamp(0.1030232702522047);
    msg.setSource(56001U);
    msg.setSourceEntity(93U);
    msg.setDestination(6525U);
    msg.setDestinationEntity(111U);
    msg.command = 184U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MVYXHPMVEIYNLKXBKTTECWAJNXIVWHDV");
    tmp_msg_0.description.assign("QXGDAZZUGP");
    tmp_msg_0.vnamespace.assign("ZDOFPGUBXYQBSRMNIQHNZLKCUICGVGESOGKHIREWHWYPTZQAVANOISCJRUTNLQEXPUWUJDJVAZJZHWGPKKYHADHIJMWVHQTGAAXLPNXLIADXOKYSDVWSCNFHBFIWBMOAFTMNUVVEBMNDRXPVSTOCPCVLDXCZTMMCEFLZLWYYMBNYEEUFQMAHUCJKHLKTNAFOTPYIZUERGUSGTPGBEKRQVCTROLXQLWXRORJI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VWTCXSQRPJDUULEJVDWYPLQTVKALGPSBRIXJMSDUBWTAWVPDNTOWOEDFCMQKCIWZTKYZMEUZDJXDNPNDRVEGCVFYF");
    tmp_tmp_msg_0_0.value.assign("GWFJXCMXKJMJZEPWJEOK");
    tmp_tmp_msg_0_0.type = 226U;
    tmp_tmp_msg_0_0.access = 187U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WYEGJHMEACYFAZTZXWLGKORAMMFTYWXCTLQVPWHNQJKMLZGCZCANQJIHJFKDDLYOQBVBHTAGOJKPWSXB");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YRSKIIUXMMWWCWULOLFYJNBXLNIAMWSHEUPCACRGKTSCDPHGQCFCFKZAVQRGCLRJHFDDFCOXQELOOBFMD");
    tmp_tmp_msg_0_1.dest_man.assign("JYNJOOFYSDBRMYUCINCNDGB");
    tmp_tmp_msg_0_1.conditions.assign("CVMENEBASMHCQTFAFYMTUHDXQGNBLVCFQWLVWQZRFDCIGFCRY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityMonitoringState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.mcount = 191U;
    tmp_tmp_msg_0_2.mnames.assign("WCLGDVPHGAPLWJWJEXSKCXVUZCMWHECQDXHTGGFQYVAHXNKAPMSBVIUDKRESWBDDNVNJRTWGIXHETLOIROMJSIZNANFFBSJCOZUKZBKDUNUTPIFGTFGZVPXMFCUIZEIDBHBYNYZDS");
    tmp_tmp_msg_0_2.ecount = 83U;
    tmp_tmp_msg_0_2.enames.assign("VAZDPSHXZSUSWRRWRASBQIZB");
    tmp_tmp_msg_0_2.ccount = 178U;
    tmp_tmp_msg_0_2.cnames.assign("VJGZYEFGLTKAAJAXCJGSSCBISKQFFTEMDMIYSNCVHBGEAYBHTZEGWWZVIDWJLTNNVEOVTMJXRQHQCIFEOIRHWIJWUTOYXLNURRCYBRMRHJMHBIDAFFDEBUBCBAKPORIXWMECASGPKUHHXBQKMZNQJZDKASKVLYGMQOLPUPNDOPDGSRCOTUROPWSQKZXYQVCZPZVOUWIPVLMYFEGMFEPJSQGOUHNNYFHKBZ");
    tmp_tmp_msg_0_2.last_error.assign("YTWZNOAXKENVTMECRMHWLKPGBLAARNNOXXMOCDXHTHBZJITCCLYROPXVNAUMKIGYDDQPAOUEJDPBSVYKUUDTBFJVIHICBJQFMEFSRNDTGTAGYRIHJUWRSUJTYFLZVWSLWYHLZMOJWZZFV");
    tmp_tmp_msg_0_2.last_error_time = 0.5582442784003351;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::LinkLevel tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.5607140858258313;
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
    msg.setTimeStamp(0.9624217266678006);
    msg.setSource(35536U);
    msg.setSourceEntity(152U);
    msg.setDestination(1221U);
    msg.setDestinationEntity(52U);
    msg.command = 184U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XFBKZCSPLSOZMKPSYJCAVJZGLHTRKIFXWRQZJJSOBEFMNUTCTYEFGYWABOANHGCJOGORRVYUILDKDEVRFVAJUXGWMXXJHOTOMSUWGCALQHYLTAHEFJIRBZGPKCSCXJPDUZOQXVWHHDFZIDFKXVBEPOMPHRLDGEIPMFRZEGYQFPLNMKIMOUTINRWHAUB");
    tmp_msg_0.description.assign("XQSJTJQZFLKTQEBBXMTCEAXPZUCDBBHLUKDHEAWREKFKYATSYZNPLNGVORIHHGYDQBQZAILEODNSTAOALXVNQJIGZFBXLTMLHNMKGDJRMCGKJN");
    tmp_msg_0.vnamespace.assign("NHXEMUKAECWSNSCYMZVIEWCOOEGRQDRWAFCTFMGGIAJWICIAPDCHRXJPBHHYNVQQBJFZUAIIORKTXDGABDFKZSKGALSBSIVHDIUBJYNSWXRHMFCVGKQHUJUWFEOXVRPBXQFGMSDUCJKXMOUZPLDBITZZTGVQLWWRJPPO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AHOKJDNVDHKXKPZUFRMASXBMSFQCYMOOOFQEPPJWWIACNZLOAFNTHMUTJPDWYVIZVBHPEGJUWCIEIGTXLLWSCTRBIBZTFHFOONPPMWRFQZNTZQRXEKVXSECYTNXVCGIYYADKZKCTTHHPGUFKXMCJRADMUSPBGAXESLELELCBLYHHBKZNGARKYVJUVQDWINAWJQMVLDBURNIZXGUYXBBIUDVOSCSJYLSSFFE");
    tmp_tmp_msg_0_0.value.assign("OSOKIWCYJGOTDPTCURRAWEZAHIILMHNFZZHCXRUFUIGYXQMSUTDBZHELMIFLNXGXSE");
    tmp_tmp_msg_0_0.type = 59U;
    tmp_tmp_msg_0_0.access = 86U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MICHDACPOOZQFGHLRBIYGCHKRAKVREETJEMJNTWUXVHTUGDAJYSSPQNVETALPCFXFJVXDKBVNXEYYWKMRXCKHTLICPTGZHGGYOYNQVWNCZJIEULVAURWHIULDUZTOKNOYYWVDICBHBSGQIQATXWZFZHMIOWDJBLRORMWQPBMAZQFIBKSLWSKTMBOEUUFCUNZQSJXCRPYLFBOFQJADDZXXHWGZLFPPJQP");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NZMXECOJMPXKP");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 60036U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 135U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.7169377754343518;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.7343772439824077;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.6222656420718925;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Acceleration tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.time = 0.5413554115186399;
    tmp_tmp_tmp_msg_0_1_1.x = 0.35818044404572713;
    tmp_tmp_tmp_msg_0_1_1.y = 0.8572109540033449;
    tmp_tmp_tmp_msg_0_1_1.z = 0.44436421031271023;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XCEWJOIGMOLPSTFQAIHAOVUGVLZWGWLLWJXBBOQCALTTBBSSHMMCPZEHVSPYBKZQZXKJJOFVUWEYWFSMTKRGEWMBIVTRJUDCHPYPBXFVZQNDVELGZNKWCTYONTJAMALNCYFIRNLMXURZXQQRFCNHRBBKIDQRTTDGKDLXJKTYZSGRHDODJGLOMKVZHNUUUQASUIPPENFQJNCFEC");
    tmp_tmp_msg_0_2.dest_man.assign("FISUBLAUBOVQYCFCMKGDTJKFUMOLJG");
    tmp_tmp_msg_0_2.conditions.assign("EAOJDJSCPDRZZUYYBKTBVQNISFHNUSRPHRVGVVHZVQGXUCWPOMSYYLXQTYUWXJVKAAPARWIEOGLNETGYNSGCDHPMHUDXDOYVJPUQRNUZQUHKDMBNMYCCCJIZDLOLCCBDDMNTFGVMICRQHKSGWET");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::QueryLedBrightness tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("ZLZXKTQQYHNSXSZTUFATNVSEKLQOGRQKOEYDCWENZKCOFBTDYRONISAQKKKAJLBYWTFMWXI");
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
    msg.setTimeStamp(0.925056071395892);
    msg.setSource(14486U);
    msg.setSourceEntity(227U);
    msg.setDestination(18229U);
    msg.setDestinationEntity(139U);
    msg.command = 49U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FUQJPRWQCZOUVGSVQQESRCYLOJKBEHDAUFSXXDTMGFBXCSIVMMKCQNLUIPDOPGQOBEYMUDRPTAJWVIPAUEJWKZRDSHGYCGUOBZVECPRZNKWTFWIWOPNXPLKOJGIKBHASETTUNDGRPIXY");
    tmp_msg_0.description.assign("RGETHGWIFGFAZAHVEEVPDXLWEVKGMMJWLRHJDKXSKHFRJCVJKTIOYDSZBAQDXZSNPBDXU");
    tmp_msg_0.vnamespace.assign("QOSCREQOYFHLZIOUSGUKKJYTXCAKIRVOTGBO");
    tmp_msg_0.start_man_id.assign("WKZJWEBVIMTMYACHFJUXULKNGKTBHFZHABGCFTHMTVARELFOQSLSIBWYWHXGBRALMTGJJQMIPUSDFHWBELKGAMDEQKOPTXZWLVCBLRSTYKSRXGPRVIPDILAJCU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GKNORIDQUMXHGFKZBQSNSMNNPFLYTGAHMCWLCDMIBHALKUNOXIRNHBPCEZNGLGMAZJTOPXHEIMPSBXEFEQZHUYQYLAPOQEYTDYLOAWZAGIAKWCMTLCGQCYMZBXOHVVCWVIXSEURWCDRUGVNFJXZHKWFRJCWDWJIPRADGYRKNONTTIWPZZSBRQUFFBGBRAJKDQUVXUFTOFJQVVRPBESBSUZWMQD");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 16783U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7535520121566739;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2796470672295016;
    tmp_tmp_tmp_msg_0_0_0.z = 0.29494507784953905;
    tmp_tmp_tmp_msg_0_0_0.z_units = 96U;
    tmp_tmp_tmp_msg_0_0_0.duration = 22128U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8018976739345529;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 56U;
    tmp_tmp_tmp_msg_0_0_0.type = 36U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.9523145185365612;
    tmp_tmp_tmp_msg_0_0_0.length = 0.7376774204060853;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.749377695037998;
    tmp_tmp_tmp_msg_0_0_0.direction = 217U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("PULCLFXNSBAUYTDPPOEHRZOMLLLCJAEGXTTRUYUJHQXJFAINVSILLJBCBGVZGRNDVMMHYAISTCTYSHGAXROFNDQIRWJQUKFWYEEVKEIPRQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PRIVTYHTTSOEBLXUWXFOWLZRNKCMQFUJCVEPNTPPVYKKTMDOAOLMXNJCZDHCNLGZINTBQJJAPSUUZWCLKVJEFDITEJUXFIVSVEADAUGDWFAVDJXWRSYPHGHKSLQQAVXPFDAWHSBAYHENIGFZVCMGPUYOMXDSLGTBMQLRJMGWCZKZZWOCORFOXYQFSDRBOLYNQIIIZNINBPVHBOQUGXMAHQHCT");
    tmp_tmp_msg_0_1.dest_man.assign("EKCVIYJOUZSHKFEUZU");
    tmp_tmp_msg_0_1.conditions.assign("KUZTQAAPWMYUUODUVHGJYDSTFBWXBEVNOZXFKFOMHWURKIOXYWQMZKYCVWGTRUOSTZJLEKYAFXLLCUHWNSJQHHGBMTRULGLIYSQHDQIICMEAPHOJUKVEBZLFRRQNRJTVVXFGXGVXVBCXBOKMOBNWYATTNABECGDNSDDZQXREGDPIRU");
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
    msg.setTimeStamp(0.820018704621834);
    msg.setSource(15148U);
    msg.setSourceEntity(172U);
    msg.setDestination(32712U);
    msg.setDestinationEntity(221U);
    msg.state = 178U;
    msg.plan_id.assign("CLZEMRBORANVJIYSXFBETPOIKMDKRMQSEUHVRAZSERQZADDWHWFOTBVOANYPTVBGFIAGHVRULIAAJHFXUTYZLXSMQAGWWHSWOTOKHXFXVGQGHDTYFXRXAZGEWSIXYZMIDJCNEPOOGNYWYJDKTSKRLTCSMULHPYKFHNQFCCCBGZNGPCFEJCTEQKZELJUPJPJVWMDBMKNUKVXJQLIUILYJVQDVMRCASWUDPUINUGQKZLQDMISCBPBLETOZYBX");
    msg.comm_level = 191U;

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
    msg.setTimeStamp(0.3716083631244821);
    msg.setSource(45388U);
    msg.setSourceEntity(81U);
    msg.setDestination(48029U);
    msg.setDestinationEntity(144U);
    msg.state = 23U;
    msg.plan_id.assign("OBVIWUHPTKFDFMCQWIDKAVVDKMIQXC");
    msg.comm_level = 142U;

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
    msg.setTimeStamp(0.5743211844660898);
    msg.setSource(56953U);
    msg.setSourceEntity(214U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(59U);
    msg.state = 67U;
    msg.plan_id.assign("JRNNHPTGTYHVENCMNHRFL");
    msg.comm_level = 101U;

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
    msg.setTimeStamp(0.007253648278260139);
    msg.setSource(37572U);
    msg.setSourceEntity(226U);
    msg.setDestination(54787U);
    msg.setDestinationEntity(46U);
    msg.type = 136U;
    msg.op = 9U;
    msg.request_id = 41892U;
    msg.plan_id.assign("VLKXEOPYPSWONHBSGQHFTKZRJU");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 63209U;
    tmp_msg_0.lat = 0.5125125525687165;
    tmp_msg_0.lon = 0.4649522273566604;
    tmp_msg_0.z = 0.007266094087998054;
    tmp_msg_0.z_units = 241U;
    tmp_msg_0.speed = 0.32219935725259163;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.bearing = 0.010571688078527486;
    tmp_msg_0.cross_angle = 0.8103840952848487;
    tmp_msg_0.width = 0.09463473774366193;
    tmp_msg_0.length = 0.37014917674515746;
    tmp_msg_0.hstep = 0.5533636612729418;
    tmp_msg_0.coff = 147U;
    tmp_msg_0.alternation = 167U;
    tmp_msg_0.flags = 95U;
    tmp_msg_0.custom.assign("FOGQETKDRFEHSEZRUZIMWOPPAEHIHUZVGIDFPLHRCRSTLXRTBWAYSLNVLMAGJBOYRVSUHCPOFQJSBIOZDQCIOAWHJFXNANGNYFLCPNGWUNJEHLCUGYZBQRAYTCPFEXLEXPLXNVTUFHSIQKDMGXGRMZTWIEJXSMYMOZBWVIFAIVYABUCQDHQZY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YDXTGGYJBIIMSEDJBVQDLWHETMEFCFLZKYTTXWNJZHBPQIEBRPERQGSXSUNLTIDOZMQCIYNAMEHMLYERMKCPUOFFAOYLHRJSLCZKLYGWUBAMFUAPJSSNVZUHVRHXPDAOVIDGYFCHOFCNBWQQNJXKFQGDXKSKRQSFIQPAJINDEPINOUAHJGBWCTXMYEPAZOSVZNVTUWVLGXQDZJRIKLFLHYCEZUWMPBKMNW");

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
    msg.setTimeStamp(0.200664804463068);
    msg.setSource(7805U);
    msg.setSourceEntity(62U);
    msg.setDestination(17536U);
    msg.setDestinationEntity(85U);
    msg.type = 49U;
    msg.op = 100U;
    msg.request_id = 53823U;
    msg.plan_id.assign("PIGJEDSINHXAMBXYHUTRRPUZIYLKRAUVANQZYGCTVZOEXEQBRXWLUKVXCRVQGQJYSVCJLOEJOOUKMLGHKZTMPQFMFHABISRAHZRIOIAGZJ");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 94U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("ZEZJWSGMQFPLLSVXOC");
    tmp_tmp_msg_0_0.description.assign("TFRRHSHVMRVQBQPODLTTJUTSJEHKOQISNYCKGRKKXLBUAXJDEMYYPXSNCEQTVIRANKKHFRHZOXMFFNIKMOEDXVTJGPOGZNFLVWLUBACELJZTRMDCDXRGTPXDIPHMEAJENCOQHPAWZDIVLMBWSCKCYJQHZAPRAFHBJGZEDABBCXASQFFIGSIVJWYMWWWVRSOPUZBCSZSKTLUBCWNEDGLYOMVPITHWIGDENQUGPFWUNYXQZAXUYYJG");
    tmp_tmp_msg_0_0.vnamespace.assign("UERFCZJUSKDTPIQOFQELLVSXSMPHMNDCEQXKDYZTQDSMTNLGBZTURPXCJTTTBLFR");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("VPHWTRZYRVKNXMMODSCHTLQBKZRIBCJRUXWOAVYCVNJLVQKDWEMXIKEMAAFOBTZZEMMISOAJVIPJYADWCNCEEFIAGQOFKHGDCLPUHBBYQFXOWSXWYIYPIEEFENDIDDKSBYRSHUCOHSAPWFKBTJLGVWFTQKHQZYWNZKXGMLUPPQRGBTMNIWUPX");
    tmp_tmp_tmp_msg_0_0_0.value.assign("XBKXZRSNIGRLSXLLJXWDPSKN");
    tmp_tmp_tmp_msg_0_0_0.type = 24U;
    tmp_tmp_tmp_msg_0_0_0.access = 149U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("ILGQRCJSGNTSPODZYBTDXWMFNLYVDMUAQMGYCRFRFUZLJDNLAGSXKKELHMXBVZJZJKQYDIERSIOXBAFGZOIYDCXEOQHLDVAMXIRRDWULXCNFDJXSIGAJENHVETLYDVWEKTVPVHCQSPSWPBJXGQJLIYIXQWQPMAJQOAKWORYHWZONSBKURSWENHOBVPRKEBWFOAITYTHGZVJGWTLUSCNQNNMMCFGKPFUMKOZFHPMKBUEPHC");
    IMC::AcousticMessage tmp_tmp_tmp_msg_0_0_1;
    IMC::AngularVelocity tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.time = 0.5426820416495404;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.x = 0.3158555733570759;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.y = 0.9095153786324054;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.8320359137763325;
    tmp_tmp_tmp_msg_0_0_1.message.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NKLLCJKMWTQGSJKAYBHXBIDNUUZOUZBMRIFUKSKQKBMYJGZUGXRHNLZPUGHVRPYLIJJTNWALYLP");

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
    msg.setTimeStamp(0.6249095295179193);
    msg.setSource(46403U);
    msg.setSourceEntity(90U);
    msg.setDestination(51339U);
    msg.setDestinationEntity(3U);
    msg.type = 242U;
    msg.op = 66U;
    msg.request_id = 7281U;
    msg.plan_id.assign("OQZFQYRXNRGDGLIAYFLXXDRHVWYPYANALFLEUAZOMTCQZVUGQNKDPPRHXNRCHUUFYCAFKVVEWEMYMKIJOMWTBHCCFVTJIZHNWXQMIZMPGALWJQSTFPMQUYJJRBLGZBWVIUKSXEGTYTWDIJFDVDVJGCEOZNYODZSLAJQBEXUNCTLAJVSBMJWOEKWDMARQSKSPTXZGRIIGIOOCMOS");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BGSOPFYEWQQXNGYIWHMAHDITYZSBZYQHAJGVVAMYRGVZSPFICYPXWCNSNEEWYFAUMVFS");
    tmp_msg_0.lat = 0.47656190640947216;
    tmp_msg_0.lon = 0.11618529577272452;
    tmp_msg_0.depth = 0.7867756671076834;
    tmp_msg_0.query_channel = 151U;
    tmp_msg_0.reply_channel = 205U;
    tmp_msg_0.transponder_delay = 245U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DWUAIMNDHTHFPJFNMKVEYFYGBZRBZLZVLOSMTRNOXDSVHQSJSSJLVEZOASLAJAZCNJDSVYKPXUCHPEVPGLWWGGOKNVZYFFMIGMFBXIWZHCNDEVKUWXJUXRKPBAYABTISTBGATIQZCCEJRRXJEQHEWOAKWIDGMBLRYVCFWIUUPEXCKXNFRPOUETPYKYHMDFSUXLLDPQOCRNSYQQRMEHTQNJMZHTW");

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
    msg.setTimeStamp(0.6367141609937584);
    msg.setSource(62870U);
    msg.setSourceEntity(75U);
    msg.setDestination(16090U);
    msg.setDestinationEntity(49U);
    msg.plan_count = 5377U;
    msg.plan_size = 2024117202U;
    msg.change_time = 0.38067170158293884;
    msg.change_sid = 49840U;
    msg.change_sname.assign("NNTGTSEUABYQALFBUVQSKJMVZRNEPYHPDNCRGYJCAIDSLFCPYTUXTNRMPISQGPTWVJJAJXZZWYARILKCQTXEHYELEXWHEVWFIZXHONLPVRFQOIBRPTSUUAKBXYSGNYECBXYVOTVKIOUDOMCRNFSLGOZKQHMBPUTIAKF");
    const char tmp_msg_0[] = {-66, 64, 34, 66, -44, -64, 56, -21, 88, -61, 57, -86, -114, -106, 41, 84, -27, 76, 31, 104, 34, -10, 100, -52, -43, 74, 52, -64, -76, -99, 106, -127, -18, -18, 116, 104, -30, -114, -111, 114, -41, -48, -6, -59, -70, 10, 57, 2, -45, -64, 89, 47, 42, -48, 5, -38, -25, 1, 67, 21, -51, -41, 94, -71, 46, 26, -36, -112, -117, 55, -80, -96, 96, 115, 16, 40, -21, -47, -110, 16, -3, -19, -65, -37, 99, 114, 79, 91, -123, 0, 46, -32, -70, 30};
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
    msg.setTimeStamp(0.044109520794199386);
    msg.setSource(34736U);
    msg.setSourceEntity(92U);
    msg.setDestination(8363U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 62233U;
    msg.plan_size = 2225770677U;
    msg.change_time = 0.699200645650725;
    msg.change_sid = 28224U;
    msg.change_sname.assign("TFWSFJXLDKPRCXRKATMSXLNMKMYYEPWUXHCMBMSNOPQFOZZRZHYAYGRGXJQBAAYGGSKWXSGGHOGKBDRLUCCEIOYCGBFPSXVCIUQ");
    const char tmp_msg_0[] = {11, -105, -65, 45, -50, -38, 13, -55, -119, -120, -97, 29, -67, -54, -84, 109, 19, 93, 38, 58, -29, 101, 107, 2, -80, -97, -46, 50, 87, 67, -97, -94, 48, 43, -49, 56, -68, -25, 30, 71, 89, -29, 4, -103, -78, 72, 50, 15, -46, 120, -92, 4, 19, 38, -106, 0, 61, 31, -46, 68, 75, -40, -45, -114, -74, 86, 46, -100, -86, -65, -47, -16, -81, -59, 120, -49, 46, -81, 117, -96, -42, 36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XPGITTEHBEWVFJRHBEKKQYTCDWPINMUAAHVWZYNMALVNGMGNYOHSHVJOFAQQSOVXCAFYQBBMXRPLDWSKOAUUWKCCIWUFYSNRUHCKVMFJMQUTZQFICSEOPXUVGFXZABJOENSSZZUBTZIJTGSYMQEILVHECKPNHAILDNBGPGZMHRJJDXJRKKNR");
    tmp_msg_1.plan_size = 20531U;
    tmp_msg_1.change_time = 0.386136469216921;
    tmp_msg_1.change_sid = 7367U;
    tmp_msg_1.change_sname.assign("LGMFRLYFNZAHGKNONZNSYQNPUSPMAVFSXMG");
    const char tmp_tmp_msg_1_0[] = {39, 73, 37, 106, -102, -106, -86, -25, 96, 93, -33, -35, 20, 99};
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
    msg.setTimeStamp(0.03684932195748747);
    msg.setSource(18439U);
    msg.setSourceEntity(20U);
    msg.setDestination(7534U);
    msg.setDestinationEntity(98U);
    msg.plan_count = 28886U;
    msg.plan_size = 2170878084U;
    msg.change_time = 0.4815843780540636;
    msg.change_sid = 59293U;
    msg.change_sname.assign("DKJMXEHWDWBAQILOGBUPTVYGUNGOYBVRSFTLIKKPGETRCQXROVXFKDIWDNUHLPCPTRQHRQJFGCEQH");
    const char tmp_msg_0[] = {83, 39, 67, -101, -11, -30, -59, -123, -70, -118, -25, 122, 41, 19, -9, 26, -115, -61, 12, 22, 51, 42, -95, 119, 44, 79, -74, -82, 122, -45, -107, 106, 89, 89, 53, -46, 70, -28, 103, -20, 54, 28, 119, 12, -116};
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
    msg.setTimeStamp(0.013580654769269285);
    msg.setSource(8222U);
    msg.setSourceEntity(74U);
    msg.setDestination(15470U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("YYARDHUIFNUINIVBDEWGXINJSBZMIMFPDXNDDTFSJHFQCNDHOIUEYCBLZZFLPJHOPHGDSMKZMJQAUOXEHQJPEVTOWNRGTO");
    msg.plan_size = 2250U;
    msg.change_time = 0.3140960074478807;
    msg.change_sid = 28139U;
    msg.change_sname.assign("VRZZBSBGKOUCYHNGAEVWIMEPJDITRZPQNHBRGLKUKAMJDIXPEWRQTPHXTDPPBLAGTPDOCGJAYNVBKXNJUTFKCBNRLUKDVXTBQIVSWLSTGKZYMXDWYEOWG");
    const char tmp_msg_0[] = {77, -23, 99, -57, 23, 94, 46, -73, -47, -110, 53, 56, -41, 88, -52, 58, -74, 112, -82, 72, 13, -12, 61, 45, -23, 28, 9, -85, 85, 124, -8, 24, 46, 95, -65, -126, -118, -91, 28, 89};
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
    msg.setTimeStamp(0.4335105207571115);
    msg.setSource(53449U);
    msg.setSourceEntity(27U);
    msg.setDestination(28910U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("YTVXSKSIRCFBONEXDZKLXHLVKVDBWDJCVXMJLRJQHIYIPLLBULQGBQYAFKGYAVZUMPBHUDHQAJZKGCJVWGOFCMIMGYROIROAYGMEQXDRHEOEPHEXOQHRQLJNTSBBNWNWJGYZAJDBVIFBCZKTTPCSGSURTQDEKIMIUZYWXWMEDDTAVPCXLXHFZCJZIONOSVSOZXGGQARTKUKHNPBEKSSTMOLNVN");
    msg.plan_size = 14166U;
    msg.change_time = 0.9496048785018936;
    msg.change_sid = 42310U;
    msg.change_sname.assign("QBSTNWAMTEEMVSIJFMOESPKUDHINVCYOKHPZUJYQAXWUMMWWUMJDHWMBOLSGLANQGQWRWUJSYLHBRHPTZDGIRXCYHYZXPFSFJNAEVANDEUJYRCTFGRCZMJZEAUKKZCVN");
    const char tmp_msg_0[] = {29, -16, -96, -110, 15, 117, -12, 36, -98, 85, 75, 52, -63, 57, 85, -128, 50, -127, 15, 35, -52, -113, -68, -16, 72, 20, -1, 126, -66, 67, 39, -47, 38, 72, 57, -54, -114, -44, 14, 78, 112, 28, -9, -119, 6, -52, -86, 23, 14, 66, -107, 86, 43, -51, -44, -70, -10, 53, -120, 89, 105, 5, 8, 112, -83, -60, 25, 109, -74, 115, -127, -83, -90, -70, -66, 78, 4, 103, 124, 68, -74, 30, 36, 119, 46, 36, 17, 7, -108, -66, -123, 74, 116, 57, -43, -3, -99, -28, 30, -45, -8, 108, 89, -50, 125, 0, 1, 24, 78, 103, -92, -90, 22, 37, 112, -71, 111, -77, 41, -49, 82, 113, 13, -50, -18, 21, -29, 76, -11, -112, 10, -73, 48, 123, -52, 42, -6, 90, 81, -34, -12, -12, 48, -100, -127, 72, 63, 16, -50, 39, -111, 14, -47, -104, 27, -67, -53, -122, -114, -28, 14, -105, -42, 39, 88, -103, 90, 13, -58, 15, 82, -38, -51, -123, -17, -73, 91, 14, 95, -82, 61, -15, 107, -21, -104, 117, -69, -53, -21, -107, 81, -85, 120, 55, 81, 80, -24, -77, 82, 55, -63, -83, 124, -35, 23, 124};
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
    msg.setTimeStamp(0.31296076519586025);
    msg.setSource(43956U);
    msg.setSourceEntity(76U);
    msg.setDestination(51737U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("PPVWFNWIAVHASVTJFXVWWTLYPTGRMW");
    msg.plan_size = 8564U;
    msg.change_time = 0.9274172888067165;
    msg.change_sid = 28862U;
    msg.change_sname.assign("PFWHZXHWVISAMNEYWKDJBQGZNKICXEPRXZVWJMAGNDHCFRUKXZKWOFNLLUGOBOHQFNBVQJSHGOMHOECUIBULMPKVEGYAFNGKTKPPMKOKCUYGQTESDBPSHAAVDUMJDOMDIQJLRPHYZTZTMNCDSBGTFXTHUVRVDMUQAJC");
    const char tmp_msg_0[] = {28, -90, 83, -119, 115, -55, 52, 30, 91, -42, -15, -58, 24, -1, 82, 97, 97, 25, 58, -102, 38, 20, -62, 92, -107, -27, 73, -9, 40, 65, -29, 74, -82, -50, 94, 37, -78, 126, -22, 31, -100, -50, -46, -123, -91, 23, 65, 99, -104, 85, 113, 16, 50, -92, 76, -90, -45, -4, -56, -78, -59, -8, 89, 50, -45, -15, 58, 58, 80, -65, 81, -46, -22, 119, -91, 39, -65, -110, 126, 120, -18, 126, -98, -51, -105, 51, 56, -120, -14, 6, -119, -42, -73, 102, 43, -81, -34, 116, -96, 119, -120, -123, 58, -65, -5, -26, -119, -107, 63, -106, 13, 24, -62, -88, 88, -83, -28, -71, 75, -123, 125, -126, 89, 77, -57, -115, 125, -5, -74, -110, 100, 70, -98, 94, -33, 117, -114, 27, 17, -48, -94, 107, 74, 102, -120, 55, 123, 41, -4, 47, 46, 1, 110, -119, 37, -2, 85, -82, 105, -122, -75, -101, 28, -62, -18, -122, -68, -126, -20, 89, 46, -126, -17, -115, -48, 87, -107, 8, 123, 44, -104, -35, -126, 43, 85, 94, 117, -84, 14, -49, 51, 79, -96, -110, -124, 105, 53, -91, -95, 37, 59, 124, 28, -49, -116, -39, -126, 16, -58, -69, 16, -66, 40, 108, 111};
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
    msg.setTimeStamp(0.44874208455643105);
    msg.setSource(14889U);
    msg.setSourceEntity(152U);
    msg.setDestination(16626U);
    msg.setDestinationEntity(181U);
    msg.type = 98U;
    msg.op = 10U;
    msg.request_id = 38641U;
    msg.plan_id.assign("MDPABYSZTDZTAHKTSBLVTNFHNWPPTLYPGOIHOAWCJSDCJLGOEWNOIUBZTSJKVAYLWQCBIJFNHVYMUNQAISTXCKAJLUFGQFSCSULFOPKIWISECVEJNHRVUJDATYBRHFXGRIDZMEEXZAZOOUMQWDELTKKZDBNLMOZERNWHQDBUGRSDIYYMLALQHFPJGWCUPGEHKWWMGXPQOOQRKMVGJRBBYJXKNZYRIXAUUVVKVSPDMFEZIYCEXMTFQR");
    msg.flags = 9773U;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZFDEQYIXTWUWRJVUDSQHKPZHGKSROYEOQUWZWQROUVVSCLNOVUJJDOXNLXTMEGJCDORLFWEYGZRUMJYQMYCT");
    tmp_msg_0.visibility.assign("VIAREYYMVNHZWNYPCMZNWXDTBXQNNBCHBAJXDTKXLUTIYULVPLLKMBWMOQPRYMWF");
    tmp_msg_0.scope.assign("NRXHCGLZVUKZXXZIBTTQFMNOEVZVJXTDKJGWGFQUBDSWUSFRCSLKJC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XQDZUYGYFBHRHJDZERFFZYIOXODNKLJCKEMARVNAWMNNILBISGHSUXZDUWWCDVKPDJPVYZTBTWFVRIGIPEZFAHPNVSWNBJZRPANLHFTTTXRQYSLBGDEQHWHJGMOLAMQGICUIKUUIFQQRYJATRVCVSFSLAQURFMZOESTONIGKYNPZXMACFXJKTWOOHBKPBQSRUVCYDQCXOIPJPWDKKYVECBXTBATYCKHGLDUSELVQMXNZSMM");

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
    msg.setTimeStamp(0.3050626593331589);
    msg.setSource(45672U);
    msg.setSourceEntity(81U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(149U);
    msg.type = 133U;
    msg.op = 173U;
    msg.request_id = 26690U;
    msg.plan_id.assign("IDEBKALYNGYOSALYLCXJGLXTZTPIJBKDKJGAMWDFAODMQLNTRQOAFVZSMFOKXACEXSNMLVUCRIJKGEHFRCOWRZUEFVAJTGNUQSBHWWIWUXFJLTSRTZBYKZGNBBHQNGZAZHUWBTZPHHUUPFIGQRDRQEHWGKEM");
    msg.flags = 62784U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 9U;
    tmp_msg_0.op = 216U;
    tmp_msg_0.plan_id.assign("YXGSLBHTZNQNIVJOSDGOASWJDNUSUVQQLHTIGSLXYIGWZOHMAANMDPBDVTZNGERYAEBWTLITWBFKTHFEZICAJKADNMJEILRFHKYPPBFROKXPVZQDECTBRWOFVKFUYXRSCPIQURCLUPFLIAYGYPCOKBEGSJVAPBWMBDZPETVMRJGBQFHQOVGXKFXMJIZGMUXXSQPHICYLCMODNRDCQYHCKNHMJHUQRLEJVOSWTXNNL");
    tmp_msg_0.params.assign("WMNXCVLAQBGKNVDDKOOLNMSOQATUTPRXXVDGYZFJMQMTVXRGACLSMYOTCJKFQHSCBEOFBEYEUNDUWADEDKBHTIPRROBVAKQEPKGDDYGIYBPXYLWSZGZICPXYMBUBZERHTTVFVCLWKKFYPFGFOTHLFXXAOWEZHIOLRSLSJIZUAIEDMSBUAXIEFJIINNWNVUGJDZPAUNHJZJMXAWI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HPGQYSTNCZSWFMFOIAMZIUXUMUTDJFDNZOXVLIIFSBGEMOUQLZLKSAETGKHWYFBRVZYUDVXRZPINAOWEUXHDUTSJTGKMKVRKCHCQYFIUJBCLRFZEEBOLUCRVNGFGALFKQBDPILYRQPDQMLOTDKEHEQUCIOIBPMHTSXSMDBAJGTOVBTYXAWENTHWDSJWZOPZWWRVRAHGVHQMXPCQXAYBWLXRNSCYJHJPRJGJNICLONJXPWBEZMGV");

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
    msg.setTimeStamp(0.4926661053507566);
    msg.setSource(22603U);
    msg.setSourceEntity(66U);
    msg.setDestination(36285U);
    msg.setDestinationEntity(151U);
    msg.type = 103U;
    msg.op = 128U;
    msg.request_id = 64365U;
    msg.plan_id.assign("EDSRNHTKXHMXGUXFZVNYIHYCCJJBUIQWDWBUZECWWWVIYNZMQHKUWGTSENMTOKCCNCTBOEFOIKXSMQPXTQHSUEKUVVAJHCRPMQJIQGIVLBVRELFPWXBXFAGDZODGGOOERZLJNBRXDLHCXYFAMWTSPFQYDJP");
    msg.flags = 40030U;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.9806623613286234;
    tmp_msg_0.confidence = 0.29956833269675376;
    tmp_msg_0.opmodes.assign("BIDQLZZIXTINAHPIZMTEGQJPDAXVNLWJUMINHCNNDDTSXRHAOYJDCYJKRZSCSGHXGHTBXBJTKWEOWCRIKVL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XNIFJZGHSFSYGHPEMPBQJAKRWELHXRLRPWIEGBZGMEHGWHSEURWRMXAHCYPQXTOSQCOIYQVTJJGSKXWXTILMUDABVCRFLHJNXPYDSZZPMWIOALCWOUZYRZVDKKQPUETICYEPVNUKBURWCDKWQJIVGDXVPVHYNLNGUTFDYSKKSOMOQTFYK");

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
    msg.setTimeStamp(0.12980137909304035);
    msg.setSource(53482U);
    msg.setSourceEntity(132U);
    msg.setDestination(16204U);
    msg.setDestinationEntity(94U);
    msg.state = 204U;
    msg.plan_id.assign("WOLUKYRBLJFQMJMLHVRWQPRQEUQRGFENSSHSUHDKXZDDACPSKVNVAFONDQEIMSJLXWZGXJUVZBWVPOERYNDGXUSRKBOSTGHKTYTNXEIAJQDUMXIILGCZDJLBFKZKBFYMNDOTPFCMTICJHYQWSECJICBEPIKMIPJHMPUXWHIOKSLCMG");
    msg.plan_eta = 1849761975;
    msg.plan_progress = 0.5692195525858427;
    msg.man_id.assign("IZFOJUZMQVEXRCBPBDRZWCEBEHWYSFPWOAPKMQFCTCVXNJRGPYIKWAXGYWYLHSUYQJNIUNASKOREBZMGJUHBEIQQQILBBSCDDSAAB");
    msg.man_type = 31571U;
    msg.man_eta = -162583158;
    msg.last_outcome = 65U;

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
    msg.setTimeStamp(0.2803092119048992);
    msg.setSource(46472U);
    msg.setSourceEntity(64U);
    msg.setDestination(1739U);
    msg.setDestinationEntity(7U);
    msg.state = 135U;
    msg.plan_id.assign("BIAGPWCVMFYZOGKKOYZAITBDQCGZSHDZBXWSTPZNLJJPHPADNTHHXRDGNLGHRQLUZLOLOKPYTIKFUQUZCJABMLCWPVHFYIDUJWGAAMGRQVQLOISDNRIXELTJXQCCBVBTQXWEUQVFSXRDLVBFMDAUOREJAZKPHSETYKHXUOMZGHJUQCGRTTPIFQEESSNWWJWNXVEDXUJNCYFENKMBKYMJILTEDMNBPPBHMYWRESSFRFURCVCIYSWYMOKGA");
    msg.plan_eta = -1943526754;
    msg.plan_progress = 0.5156192666377594;
    msg.man_id.assign("EKVIFPSBTSQBDOKEHDKFZVNTAYTCZZRLTMFYALVOTJIUSYTKOXHINWS");
    msg.man_type = 31660U;
    msg.man_eta = 1817418316;
    msg.last_outcome = 203U;

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
    msg.setTimeStamp(0.11394148918819569);
    msg.setSource(63153U);
    msg.setSourceEntity(147U);
    msg.setDestination(34248U);
    msg.setDestinationEntity(144U);
    msg.state = 121U;
    msg.plan_id.assign("BQFGOFRZLKEAVBHPEATXFRCSCTPVVLOGMRHBDJKKMGSQZWCPGHWSSPXZULMQAQJTGQXBWYJNNIGYTNOZDHINMEREJNHLLMYBTDQRNQVPFUEXFGPLGEIIYNEFARTOCILTLVGNTZUCVNSBWIJRQKXVRYWLSYFYMAEVTWRXPZWSEFOJDOVRQKDOHYHOXUOOJAHKQFUBMZKGPXUKPIKJDYBJDSIUWCCWIDXNLVM");
    msg.plan_eta = -1287702798;
    msg.plan_progress = 0.17353901960813045;
    msg.man_id.assign("YXEODBXUZDGVJTEPUXZUAMOGUXGQKDNSZLGKLOCEVYBQHQZRJLKESPRBPASUWVNJQZZXIRKJGKYTIQCHLYRPUSZBCEGFRYAIAAHJLFFNNHEXFIZMGHEDWODEAHVTJGFGWBZBOMCOIIKTCYITVSHXIVALELSYNWHQYNBDOPNWKVTTBKDULNWFQBRRJSBJWIYQIMWACALKPJCRSFODDSZJFMYWAELTOPNTDXQVRXCMMPVMFOUGWCRHXKCPVTHQF");
    msg.man_type = 47936U;
    msg.man_eta = -1813831545;
    msg.last_outcome = 170U;

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
    msg.setTimeStamp(0.7408738443677729);
    msg.setSource(25456U);
    msg.setSourceEntity(122U);
    msg.setDestination(35313U);
    msg.setDestinationEntity(193U);
    msg.name.assign("KKAKCYFBNWFONZMXWIMGXSQUNJPFYPAOXDURHPISVTIGIWKSEBDEHARQTJRMOFQZRFHOJKZNMLJGHLEZNELTVGKYFYCOTIXETUSGXZXPZYBIYAHULROERGSWTUWYDPMMIKAXVCPHJOWQECLCIDKMXGKTVSLCAPJRFYBIZVMVBTFZZLRBHHGMLVVSESAPPXOLNTSNHCJOUNYQQODBEUQABIDCBU");
    msg.value.assign("QSNIVVEFUFFIQMTJGRCZMBESKMBRHAHGYLIEKZPRDENZQECSJAIBNFMTHUWAPBFVRKAZTTQWEVCYEOGFRTGCRDXOXHJGTXIODDHHQSUZCOLACLFMLPVPOCKYSWUHRJHDRSKLFQIIHDFPYPVPUXVTNCZNQXWGXYNSZBELSWAOGJTBFNBPUJOIVRUUHWXQLYBAKAUJBSDXBQWSZMYYYTNGIJEXGK");
    msg.type = 151U;
    msg.access = 106U;

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
    msg.setTimeStamp(0.2468591924479726);
    msg.setSource(59218U);
    msg.setSourceEntity(25U);
    msg.setDestination(50409U);
    msg.setDestinationEntity(10U);
    msg.name.assign("LXRYNHMXUTUFXUVAIHQZGJBUJNYTSMRHXVTAHLEPAQXPFRZGBRBJACRALEIWDJEEQGDISSYDJIQIPKVJMGPHUXGMTJBHLNHTXLOCCLZDJKUYZAIKQTFEKKCSSNZIYNMHCSDCWNTKYSTLEOMOOBWWEKNGDDLOEQGZIUPRVCRAVPZQKWXVCLOQMBRSFMHVDRAOPXSW");
    msg.value.assign("FIKXFTCCCPNZLJOAQXPJSCPRTDNMEGFLGWCQUWJPGHHRKLAYOGULAFWLVIFSGLLUWILFZNPXDXSBJHGYBOJEFAOBXTWFAMSHCHQXVUBHQOXRIVYKFYBJHDVQDNQKKAUSSRQVHDZRZZZCLJMTCGIRWIORVBIYXTMVZSSTOMDQNYOJESPEMZHKGPZNDEVCPUNEUAWZCBITYRXNNLJPEYGFDIQUWRKYAMGBANDSYOMKIUHJMTRWWEVBBPEOTET");
    msg.type = 108U;
    msg.access = 234U;

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
    msg.setTimeStamp(0.8535975183318951);
    msg.setSource(59547U);
    msg.setSourceEntity(63U);
    msg.setDestination(31691U);
    msg.setDestinationEntity(2U);
    msg.name.assign("RXMLCKHMYSOBFHWTOOEZCUZUXOQFUDNAIIKMVPNPBGJNMTQEJVQLWNWSILZFLOUYUMBRQLVZBWGTFMUTJCGYIGNZPDZURBCYSJULDKRKPHCFBCIKNJVWIYXZKRSVJNNFJPJSRDIGDAHAXPHOQQJBQLHAAVUHGVWCREHYUKXLSFLSDOHRXRSMSYBCMT");
    msg.value.assign("MPKRWIDRFZLUYNNNTSRAXKMUUXYAAXWWINZRKMJGSNGGQTTSIOXUNXAEEOHYWEYWIBFPWYBROXHGTSPRFLNEEBAUDYBRCEFKCPQBQKMTSYEEHOUBGRIGKPMPVMJCKXSZQJHJWDQAVQPDGUOMRNQLCLXOCOIBLDLHHYVLYSJVTIFBAHIMYAAZ");
    msg.type = 225U;
    msg.access = 42U;

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
    msg.setTimeStamp(0.15868012107246576);
    msg.setSource(30121U);
    msg.setSourceEntity(61U);
    msg.setDestination(15413U);
    msg.setDestinationEntity(60U);
    msg.cmd = 254U;
    msg.op = 246U;
    msg.plan_id.assign("FYBTWICUZMPSIMKPIRZKUKFONSCZLGGYHZRNMWJPSLMVLUUEMJNOJYSFBXAFDNLBERL");
    msg.params.assign("LYRHOWHDBQSLAMJEDOEJTDBFEJKDCWNYNRTPZVPNAEQSMYJMRHZMISZFNHFHWDLYOSZZQBRMJSQTKOICNRVICHGCNISAYZUNWMFAPGLUDVWKFSKEJKGGWQMBIGTJTKUEXKAXXDTDXXKCUPTPMFAEHFUFPOPMTIGBLCVHPQOULWVCBYRPSQNJLRYUIPMXARCYBQKBERJFAZDHXIAYWCTCVGG");

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
    msg.setTimeStamp(0.9081921462808967);
    msg.setSource(60923U);
    msg.setSourceEntity(8U);
    msg.setDestination(55583U);
    msg.setDestinationEntity(97U);
    msg.cmd = 226U;
    msg.op = 236U;
    msg.plan_id.assign("XIDRPWDGYIFOIDCNMSIQEXZAWGXMZCDXVFEQLLRQUJCRSRLGGSTGQRLXEOCWZMMHUJJYAQBFOLAEHJDZEBVWARZHAKGLVPGFTSKQMXFCVBFYVYBPLSJKSEEFPEDVGSODCOXVIZBMAIBUEMOKTXUKJTCQWUJPUTNRYCQNKGLJKFEDRWXOFPMCZHAKLVBVNZPUYSIJCHKWUNUNGXLAPNBBDVQYSDHPTITHHMRZBM");
    msg.params.assign("WYIYBMNANNEUPPRJVQNQXMRZTUOPVOATDKBUSJGOZBDDVFLBRXIBQQAVKXDZIJSZLFUWSGIAUQJLMLCURIPQSDAZRIPT");

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
    msg.setTimeStamp(0.19144317035785274);
    msg.setSource(15269U);
    msg.setSourceEntity(128U);
    msg.setDestination(53846U);
    msg.setDestinationEntity(218U);
    msg.cmd = 163U;
    msg.op = 94U;
    msg.plan_id.assign("LCFBDGBARTDNWPZMSMRTMONVEOLVKGLUZNNBNWMCBCTCZHSNIFYFJDGVRGFERNGGSBHOKTUNUFOYZKTYTSANMJPTUDDGXCOHEGBFEOZUIQRQWJLOYYXQDKTIKPYSAJPFQQPVSBURRWZIWXWWKWHUVYKIBLMQMCRLEDRXIFZABGEIAJMHTPIAVNOIEWXZKJHVHERB");
    msg.params.assign("ESWTJEZHDVTVUIOGRTLJAAQOTCCCNWIHJFBPXWTROUVRSVYAPTYNMEQQLKUKEKYOBWRUZWDXFCQRLROMSKMXLCJXNOSDJKOHMZUPAQSEMIDNWPKYEGPEXAEGGSLTJWGBHKSFRYEMDPNSBXSGXHPADGIWVLDHHJGKAJUDLBWVLUORRADMFXNLMFT");

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
    msg.setTimeStamp(0.6615107230054);
    msg.setSource(5006U);
    msg.setSourceEntity(156U);
    msg.setDestination(21440U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.07356815720628163;
    msg.lon = 0.18571863543154332;
    msg.depth = 0.05037784382102606;
    msg.roll = 0.5424977383266765;
    msg.pitch = 0.2206324395018936;
    msg.yaw = 0.1996571226405246;
    msg.rcp_time = 0.9511492470596054;
    msg.sid.assign("OJFDPSZQGAIUTIPGKYNEAZMRZYUAHSWQMTPCYKWCAQYYXCADUOCDVNDQWSTJBLEYPBJEOQIPFKDNOYENZRUJLQFSGXQRTFRVWODIIKGUYGIRGUHLHIVCBHCDAVUZLSMBLLOZLXSSACGVURWAIHXHEVZZOGRFEUUCSBXJEDZWNPLRMCLRBXOPRPVJMFNZWNBEQNIJVAKFXEHVEJMFWOTKXPKJHXNTHBBKMWNVBQTW");
    msg.s_type = 88U;

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
    msg.setTimeStamp(0.9302088428723183);
    msg.setSource(50175U);
    msg.setSourceEntity(226U);
    msg.setDestination(6288U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.9934965838087786;
    msg.lon = 0.17836900245430987;
    msg.depth = 0.5456802076369999;
    msg.roll = 0.422205423301647;
    msg.pitch = 0.8291053018238235;
    msg.yaw = 0.015974590321434667;
    msg.rcp_time = 0.819743527953316;
    msg.sid.assign("VAXOIJSWPIPMLWGAKDYHENIDFTSNWGUCLAMWLPVAIHEXOKCZVGLRNJDEBYCRDUYPQEHBKTRDOVHRPFLOHXSRACQZNYZWRSJFFZWRNIOMIFLIKYCEXORSZLYZTYJYJOFGTUOILKJQZNFLONGRKVJGWUGTV");
    msg.s_type = 77U;

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
    msg.setTimeStamp(0.31219111416517065);
    msg.setSource(31950U);
    msg.setSourceEntity(218U);
    msg.setDestination(53744U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.9299763077120223;
    msg.lon = 0.22754441100176392;
    msg.depth = 0.30128981801048094;
    msg.roll = 0.9459365145066573;
    msg.pitch = 0.41230253720546606;
    msg.yaw = 0.26781542708759776;
    msg.rcp_time = 0.31388306044532965;
    msg.sid.assign("IZPMXDJLORYBRAFZBQDDHAXUEEOFKPUOBNWFIUANIAHVBCSWHCWHJUSILXJHHQONIJNRYTPUIGRHFQEKRZLKKSMOGEMBWAFNLUMWZKCFEPCZLYRTMPNXIEBHFXQAJSSVUYQVSETTPDQMBYEDGNUHLMFYVJCVWOTKMHQUJLOOXYYUXLTOZPKSICPAGTRDKMWIKXAGSWGTCQGDVCMZDYFVYLNACSVIJ");
    msg.s_type = 1U;

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
    msg.setTimeStamp(0.38523644880756713);
    msg.setSource(22169U);
    msg.setSourceEntity(145U);
    msg.setDestination(62521U);
    msg.setDestinationEntity(39U);
    msg.id.assign("SKZDUBPWATXEMEOQCHYMECWXXXPXZXBFWIQRLIOULPUVFKUPCSZEEKDAFCUKGTGNMYHFQALHQRBEOKFFSSQJVKQBWXKNMSWBJCDSRYKWYXVWJVKGQAJONPACVYUCTEQWMIJXUCAIMQZPRTZTBMHVMESYBNRHONBLVLLGLTFXGSOZPHLADIOZJEFPGDNAPYIIIFWSQGNGORL");
    msg.sensor_class.assign("WCKDZSCHVQLXWHRXUTZWYBQBILRPNHTOECEOMEOMOKKOOVJJSUGCOCASHVXLPYLQJTJFBLQSRAEBDSTZWRIWQJMPDYTUOFZPFXTELEEYLHHSUBRDDKGMYQZQBMAIWZSAARNIKCXJFDYCSUTRPROINMWKQN");
    msg.lat = 0.1286150459854033;
    msg.lon = 0.5182330822519964;
    msg.alt = 0.1654195986937601;
    msg.heading = 0.21378536600577203;
    msg.data.assign("NCXLVTKUJSALVMJLULQGQRVSFTCK");

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
    msg.setTimeStamp(0.791888036500429);
    msg.setSource(16248U);
    msg.setSourceEntity(225U);
    msg.setDestination(22682U);
    msg.setDestinationEntity(250U);
    msg.id.assign("YPONUJGBEAOSKDPAVSDSHJLNTGCIRPXTYCVVDHFPMBIPPBKYEIADEGWVIXVJWXFEZUALRZDLITXQYMAGJFIVMNEQJQZMCFOCJZDASDMTRQWONLOKNTSDRIWEJBLPWWBTCTISFOQZLS");
    msg.sensor_class.assign("ROAXSDHUHBRLKPINWQCPNISABDHIGCKWHGNUNDPQWHQBEHLAJDONCYYSCIKZFTBMBSMJCTXNABTEDWJGJOVZGRCDLWXMRPLDRIQRBVHWZKUMVPYAJPMXOUUSOLCGCVLGKUXMSUPPXETTKBKNRJZQYFKOEHOO");
    msg.lat = 0.9279882744081163;
    msg.lon = 0.8768275934899783;
    msg.alt = 0.14623115803199582;
    msg.heading = 0.38037114623754875;
    msg.data.assign("UQLQASPIHKOJMUJOXNQLKSHYMBILBORYNESMSBCEEVQESPKGQKMVDBJAXMCMJVWXVHWXJWMGPERLZZHWJFRZAFTPBHQPYZGSCBPGNZGOLKBOKNVAKMLFCVZOWABNEXYTPVIGTWPDLNYTNOQDOSFCIHBOFLDYXGKXDVESYUCMHZLUFFURWEZ");

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
    msg.setTimeStamp(0.6382377765687419);
    msg.setSource(15020U);
    msg.setSourceEntity(173U);
    msg.setDestination(51973U);
    msg.setDestinationEntity(228U);
    msg.id.assign("ADLGPESLIVKPLZJPEAGDHQUSGTSRJFCDACFDDETWXQDHYSINJKDETCZSQYLHRMVFNXZGORSHVIHZRVGEPIEGOYACDHEOWSFUBNFTBXKOZXQXWZLBPRUSIITHQIYOXFUKMQMKZBVBDJCWMAPFVMYQGJYJHRBFYKWGNUAUOYNOSGXSNKJMWUCIIPAVKQDR");
    msg.sensor_class.assign("FWAGMAQLIEDGOHHRAMIZQXNVLDCDTARKZTUITDJQJPOOTVJJMZDWDRNYBXWJFACGBOUQZEBRYNIHUNCHIIQCOVXMR");
    msg.lat = 0.0559453523090051;
    msg.lon = 0.9392460788868249;
    msg.alt = 0.2760796085544197;
    msg.heading = 0.20160583085168715;
    msg.data.assign("LAIODPPBWKWVUTTGHAGFVDDIMXEEANFUJXJPOYIRKSTQLCMRLXYPYRTQDHHQDRCXBHOVHJOQLTZLLKXIYSCNTNGXTSCOSGWWWZRPPSJFQDMNJJGREECDQJZYEZBUKNONEBMJVNMBLYEPFWROBHKYWFAGXLPRMIYOCDFEGTEHAMKCVVZIXHWAFLAGIZBNKFIUHSPZAXGZZKCBWVYUMRUSTCLJONIQRKVPHMTUCWGQVJUKASBDUQBSNFQVZU");

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
    msg.setTimeStamp(0.8725162156634424);
    msg.setSource(14383U);
    msg.setSourceEntity(154U);
    msg.setDestination(59480U);
    msg.setDestinationEntity(109U);
    msg.id.assign("OUZOLIEHFTIGKMILCHRTYSIVQTKQFVNYERYXJIQKATXEMQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GXIUZCHMUGXJBMRBGCGRIBWNGTXLCRTEEATXASFLJBUACACYYNXPOXHUJCGRELOMAXSNLYDPHHICVQYJVYGHFJFWEWZVDESFTQSTHJXPSRNVYVQHYCBTIWAERPSOOHNMKADJGHYLOZNZLQZLICYUOLJVUDKBPDHAGXWXWVKTBIUBKPQUQFKFVNZAEPTVPDEIWZEOZIPOJTEZOZDWPINGFKFKBQFQKMU");
    tmp_msg_0.feature_type = 251U;
    tmp_msg_0.rgb_red = 251U;
    tmp_msg_0.rgb_green = 168U;
    tmp_msg_0.rgb_blue = 216U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8162868429173324;
    tmp_tmp_msg_0_0.lon = 0.4335781578576201;
    tmp_tmp_msg_0_0.alt = 0.9875080248000043;
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
    msg.setTimeStamp(0.5518309762597835);
    msg.setSource(20121U);
    msg.setSourceEntity(114U);
    msg.setDestination(21996U);
    msg.setDestinationEntity(8U);
    msg.id.assign("KNATHRLYQNJVDM");

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
    msg.setTimeStamp(0.8073417917613055);
    msg.setSource(41673U);
    msg.setSourceEntity(183U);
    msg.setDestination(50326U);
    msg.setDestinationEntity(168U);
    msg.id.assign("AJHQTHZUTEJWMJUVXIDCXPNTRBWPJWRIVQURFLANDLCWOINBGXGGEEAGABYEPTNMPKQIALQKQPUFAWWKSEGCSOBFPXYVZIVOWAQKLUAQKAFFYYHWCLRTHDWSPHHCFFTSHOQIODZBDRMMTROXEZRTYVBIOXVTLKJKWCZUSD");

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
    msg.setTimeStamp(0.8680091742584689);
    msg.setSource(35336U);
    msg.setSourceEntity(169U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(195U);
    msg.id.assign("CVAIXELYQCJVCHQIVNLZDDHWUXXWESVJYUSXPPDRRSTVOFERCXQBDEMQCJLOEAJETMOJPOUKGNKOZUBZOKSPYUQJLWUGBFBDMTUQWTJYFZXXLRORHNAIHKWEHURNSPQZYYJFTTGUBPTGVYYBMVZHDGDMHPLTBNNZLOZLOGGICRKSRCJSMIQIG");
    msg.feature_type = 143U;
    msg.rgb_red = 146U;
    msg.rgb_green = 169U;
    msg.rgb_blue = 19U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7495087728004141;
    tmp_msg_0.lon = 0.5721614261140808;
    tmp_msg_0.alt = 0.9586332190889478;
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
    msg.setTimeStamp(0.9260891214676946);
    msg.setSource(63436U);
    msg.setSourceEntity(195U);
    msg.setDestination(37441U);
    msg.setDestinationEntity(210U);
    msg.id.assign("FOLDAJFHZQWCXBJSOXQGMLKSYSBVGAFRABAFXNCSJDVYVMZJYIIIIDDQWLDVQHMGRZCRHUUZRXTNRJTQHFYLFA");
    msg.feature_type = 101U;
    msg.rgb_red = 20U;
    msg.rgb_green = 95U;
    msg.rgb_blue = 57U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.15076915357323595;
    tmp_msg_0.lon = 0.02366721066054367;
    tmp_msg_0.alt = 0.7986943050834086;
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
    msg.setTimeStamp(0.0708260097895892);
    msg.setSource(34254U);
    msg.setSourceEntity(112U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(68U);
    msg.id.assign("TTZCDNRCIPSEQMCKOZQBSNXFZUDTVONMQTHYFAPSFWFMUCPHTONBACJAEZJQXAVBEDJLLSBXNCSAGRLTGGTJGGNKAEIHP");
    msg.feature_type = 117U;
    msg.rgb_red = 55U;
    msg.rgb_green = 65U;
    msg.rgb_blue = 124U;

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
    msg.setTimeStamp(0.26888324631962957);
    msg.setSource(62844U);
    msg.setSourceEntity(85U);
    msg.setDestination(31806U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.8897258835664273;
    msg.lon = 0.42290388448597604;
    msg.alt = 0.7961684300142337;

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
    msg.setTimeStamp(0.6188302295491892);
    msg.setSource(58950U);
    msg.setSourceEntity(9U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.40018996127512785;
    msg.lon = 0.8838426212866962;
    msg.alt = 0.715264587447331;

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
    msg.setTimeStamp(0.5361579066609263);
    msg.setSource(20048U);
    msg.setSourceEntity(121U);
    msg.setDestination(32606U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.6950018029108916;
    msg.lon = 0.9507781809464808;
    msg.alt = 0.4350308125039931;

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
    msg.setTimeStamp(0.021957665603059673);
    msg.setSource(9114U);
    msg.setSourceEntity(250U);
    msg.setDestination(63243U);
    msg.setDestinationEntity(129U);
    msg.type = 19U;
    msg.id.assign("AGNMIQIUSAJJVYYDOBIJILDJBHDXPSYBQBJPERIRWPIZNYJDKDAKXIXYFWRZMFWMKVECCZZXFLYQTUZUXPOZQJVAXNGDHWVEEAYWWIOTX");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 18U;
    tmp_msg_0.id.assign("ZWKUVBUDIMQQZBPSJDMEIHFKMWADZDPJSXJCYKXAPULT");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("DPLEVQNWBHMUABZDFNDGOWEDMJNOWPGNDEVRLETBUWGUVPTGIJYIGNTSFIGWCCKYHRHMEBYSSVFNTXMJRFGMSJLYOIIRU");
    tmp_tmp_msg_0_0.feature_type = 180U;
    tmp_tmp_msg_0_0.rgb_red = 235U;
    tmp_tmp_msg_0_0.rgb_green = 176U;
    tmp_tmp_msg_0_0.rgb_blue = 186U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2558354976660199);
    msg.setSource(8369U);
    msg.setSourceEntity(178U);
    msg.setDestination(64984U);
    msg.setDestinationEntity(26U);
    msg.type = 222U;
    msg.id.assign("QLHSNMHEELVWOOQKUPBXCAESDCAWCDHWEGVXQNKIUSQLUZRECGVWCGBFFWGTPTZSPKGKFHPIXHXUIAFZOVKFOFFNPLHXSXNOZKZOYTWDIMJGBUOKYCLVKPZSRMLHAQFRNDIOIDSETJLPJZM");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.8160326737000462;
    tmp_msg_0.z_units = 65U;
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
    msg.setTimeStamp(0.5053598103408354);
    msg.setSource(34776U);
    msg.setSourceEntity(120U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(208U);
    msg.type = 230U;
    msg.id.assign("QZCQUPQTHUBYEHKPNDKZHUCLBXNQQAUJMHSDAFIZYBFHJJBDPYJWMMNOXUEGUMRSDTYOFMIRODOWFTAVTKIVCGPPXWTGEESSBLSRMLTFGKUGVVHEOQUEQXG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ALJARXKJIIDYZFKBANIGIEZNJWHUNYAWMZZMCISEZRDVGATKNQPZGVIEWOPCPRFJHPCJYZBUWVLOHSLPBZMWRDMYHCFGLEAHPNDMSCTFBGDFSGDSQKJOCTHEKXYNQOOWATXUIFWFLDVYEOSMHLSKRRJRBUQYLJPIJTWCGCGMHEQUENUBQABQLUOPOYMOFNJHIRDZMBNUECXYITWBKDAXGXVETDTZSXXVPU");
    tmp_msg_0.value.assign("VSFUVJYJQCCUIWAYGTIXCSJZICRSQWTWVNUQRJFXIYZQGKVAGNWSXZBAEQLLHRNUEHBBEHQXLFAAODMNFOIZRFOBEYTQXYOOPPAGDSUBDFZIJLPMTYHWKMDUORIPMTFOZTNGKSFTAZVVSKLAXZKEORRMWPNXHJLXBLGPDEHZJIVANPMZ");
    tmp_msg_0.type = 159U;
    tmp_msg_0.access = 14U;
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
    msg.setTimeStamp(0.7733566187546153);
    msg.setSource(33030U);
    msg.setSourceEntity(122U);
    msg.setDestination(25347U);
    msg.setDestinationEntity(245U);
    msg.localname.assign("CJMWCTVIBUHNSQAABBMQZVOXWTXSMTOTISDFJKVVPZBLENRKGYFCAPVUAJGCGBCWQQYMOMWPO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SAAGUCGGSPNROPELVLKNAUOFTZPJCQCWHTCJNVGERZDGYOXEBAKACRTZHTFVYMTFXONMXOVVMJMLDJVSIYMIHXHQALFGIREWFUQYNUEPFBSBL");
    tmp_msg_0.sys_type = 33U;
    tmp_msg_0.owner = 12390U;
    tmp_msg_0.lat = 0.42370623078809944;
    tmp_msg_0.lon = 0.4267233582859209;
    tmp_msg_0.height = 0.999630461528158;
    tmp_msg_0.services.assign("XWZNUUWTDQVANGPIDOPMFQVDEJDMDAHBZSYZQKMUYGLQXPSSNJPOCQCEUOTHFGF");
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
    msg.setTimeStamp(0.5114841444157334);
    msg.setSource(52598U);
    msg.setSourceEntity(180U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(52U);
    msg.localname.assign("ZJZSBOPWPKFCHLVDLQVHIAJOUKYTEWMKAFDWMOXFMBPLVDEVRGCKEIHIZQZKUYSEGLYURRRQEZQJAPNZCDXWMFWFFLSSSHCFRYNGTFDGOBXWVJOKNUYELSKKOWGUMRGPAAUXWXQQVJQRTETUALQMLFZNIYJSOMCGYNHZJWYHEIAXFNAUBV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XUEXZKWPEWJVLMCKWWMKXYIABQUGNVERFADXTXGXBVAIZQGOSHXBWXZACKG");
    tmp_msg_0.sys_type = 60U;
    tmp_msg_0.owner = 21239U;
    tmp_msg_0.lat = 0.21527584727534288;
    tmp_msg_0.lon = 0.14785710272912367;
    tmp_msg_0.height = 0.6150669305453272;
    tmp_msg_0.services.assign("RGEFZSQGFLEAMNKDATPUACLTKKVZVQSDIGERFRFYCRIERTNHXZBLXVRPGLSWRPVCFXJDUYUOPUYSIPNZTOIYBJGQLDKVHLNQOMJHDKGUUAIKQFBGHUTYEIJDMWGBSXQCLXJDFCJPIYUTHVEXVN");
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
    msg.setTimeStamp(0.4089985517798215);
    msg.setSource(30335U);
    msg.setSourceEntity(12U);
    msg.setDestination(10120U);
    msg.setDestinationEntity(3U);
    msg.localname.assign("SZZLZRDNIXHAOFFMPCPFIXPBCLTNYAZXQDEKEHIPKNLCLAFTZUMUGWLLKMVJYEPEGTLUVMEOBUGKFMVCBJOORLWSVAQBYSTCIAGEDJYNTVRZIJMHJJUGAOUZQQDLIMQKHWKSONPCBHDZOGWXVFJKWSQTUPAXIYCUYQXEHRCMXOSGNDHSTDCWXVQGDWF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SJOPUHRXWERZUWDDHQZMBECJFLKSOCLQNYBGMAQPHPHCNKRQKAMTPMIBQNXNFYAFHESCKVFTFKVUSGJGTCXLASRJNGMMKVJSSCLRIVRUFBLYRDOMANTPZIKRTBTWBQUEBIFPDCKGDDGIIIOKAJYNBEQPIZSXWHLNHCYBWJPZQZWTWJVLMAVHXHQEVGYDLEYKJUYZUFIOOYOETUPUDMSPZDEXXXVGCNQRIOCJAYBGXAWOEHGWMFWLOTVVS");
    tmp_msg_0.sys_type = 185U;
    tmp_msg_0.owner = 9955U;
    tmp_msg_0.lat = 0.6589658393544505;
    tmp_msg_0.lon = 0.3003567140840939;
    tmp_msg_0.height = 0.11596714671084252;
    tmp_msg_0.services.assign("FZEJZALUAVDACYZPJGSFOOXJKGIEJGUMRRNDBTFPAGHMQCLEBMIBWKVOUISXHISXZZIIJDFTDHKXYYWENQCVTMESVFJJIUPUTOPKRHPNZELEWHYYDFCDRVUJFGAQYQMYSGLZWLLSKVOAJTNCZPXTGSWACUIYEFHRDXHKUNPXOQXWMMONP");
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
    msg.setTimeStamp(0.4979604416204143);
    msg.setSource(45389U);
    msg.setSourceEntity(57U);
    msg.setDestination(16732U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("TCJKZAGPORTKMQMJWRAYTQMYCUDGSVAYNMZEGKBHTIXVFDWMFWVLJVOOKUFUFMCASLLZGJTHWAGCEINMOKFVJRJFEYULDNHDZUXQWCNZKSERUGHUDLBGYTIKAYVPTNSKEHUQDXIXFRQEXVXPRRGNVTAYZEHNORTOJTSXYSNYUQCKVYWCZSSWQPPPJHDHPIIIPVZWCIB");
    msg.predicate.assign("QVHVKVSSILKDDGILLVSXCLQRFDOUZMDWJRDLXXTUJNHOOJFSFOTVEMFTESYOVLGCVUPHWYXSXABUZGCEXOOOGPWINQUEAEEHSEQVTXYIYNFKENBGDCBNEAVACMCCFWCGKZIJJPAVYWKPBLNTRIWSMYUEFOCMYHQWRZRJQWKRGMYNRJGLYHAZTZLKZUBSMBPKDANIKQZBJRHAWJUDRIUFPMQQNI");
    msg.attributes.assign("KDKGGVRDGJLIJOAKQESGFWKRMBPZASOZMXYWICLOVRZTWMTOHWDTAPUWLDQGMJJLIAWVSNONBIIVTPSBPHACLHYYUWLXXZNQD");

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
    msg.setTimeStamp(0.4356487411883071);
    msg.setSource(52033U);
    msg.setSourceEntity(179U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("FPOYHMCWBIZKGNGUSDZPLVFAVGBKCMCGFWSOYUFJSXZZERPCVKMKMQEZSBJDHXTRUFOTMUEHQUTDKJAONTZBHONIUCQUYZEROPTXMWNURBKYQDYLVVAAYKDVWGJNHQPLINXKIRKHOOQXIETCXSMPVNJELHRFDGTWALUFPUIDIQGYJNAWXEXTEQJWSENSLZVXIWTLLBBKCRYGCHZEMADBWWODCJRFPMBQAAXLFJMVY");
    msg.predicate.assign("QMWVLKGEMYWKIEPUAFIMWXGRMKIQJUTROUQLAFTDJAIVQTOVAODINCGNPBWSMGLCGBELSXSNWZLDXMGRLAZPTZQMOHEYHHXJVDRYGTXJEMSAKZEHIDCNECPXTBB");
    msg.attributes.assign("KWYROBYNUNZHYBVODUCLDGTAXSJLPQQKCJYATAQBDDEIGPOIZOKCUEXPBBPAGGEPJSFANEWTJVYCQJXUTQIVTPSSMKHWNMWMWOAXZANINZWRBHLVORMHCKXVZNMITGMENODVHWGOCFZDIZPCHAFVHRBDTRYIYKP");

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
    msg.setTimeStamp(0.46290231689802774);
    msg.setSource(48518U);
    msg.setSourceEntity(63U);
    msg.setDestination(64330U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("KVMBQJTJTPBHCOBODOAJHDLRIIOLXUKFBUAMYHWKXHZOWTHMJEFBWMFGJNHZHLPJREQDBUYKAGWFEJJWROWFGPLMSDANCKOFRFUDWJPRFYBVNKTTQLRQ");
    msg.predicate.assign("QYMMBOEWMYDOGYFHIHQWSHGPCKEOUQGTJGVYDKXZPOZZMQTSNGEPSDBORDHDICPIUHRPHW");
    msg.attributes.assign("CHSROTVTHZP");

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
    msg.setTimeStamp(0.8682804182109662);
    msg.setSource(62510U);
    msg.setSourceEntity(200U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(16U);
    msg.command = 9U;
    msg.goal_id.assign("TCIXBZFEFRYVNIWFYHATHZREUCBYRUSJXJJZFKGCPMPPHUVWLTRQVLLWDZTIREXDDFEBIALLJMBMKWAYGWMCNCXKWWCUSHAFPHRTGURQFOYKPPULJJPMLJVTYNUQYEZOJYHQ");
    msg.goal_xml.assign("CUFEIOTRQWBTOPWKRYUCSWNMAOMEKG");

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
    msg.setTimeStamp(0.811935396382349);
    msg.setSource(54672U);
    msg.setSourceEntity(43U);
    msg.setDestination(54890U);
    msg.setDestinationEntity(127U);
    msg.command = 248U;
    msg.goal_id.assign("WHQUSZDFHVLIAVTTBIVUISKZFQNEPSYAXQAIERTGURHTDWJCUHPHCMOHXFCVOAZWMWPBSGBZTLXTUKMTZZYLLKFPBRFHRSXFOUYAKWCOCTEXAJVCXPUYWSQLNRIFNHICJLMDCIPXFHNTENVKWUQMJNQEBZKGSMXRKONMNMGPSUGAKFYVYDRPGYBUQKDYEEPNMQEYCKTOL");
    msg.goal_xml.assign("SOVAAZANXYTYKBQEFAELCUVYQNMFOYLDMWSQUJBDDOMQTKCPBUYAENHPKHJULVWBTDYJBNMSLVRNGBLFEGGJJWIIXMBJZOZFJWAKIOUAXTMFGXZOCXFWRDNCTMXNSCCCDDUQLUYSJELXFCPZJHHZZFZGPUQGEEIHGVRWSVVSQAGWLMBAIKTPHOKYYEKCWDCLRWDUYR");

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
    msg.setTimeStamp(0.9996186690917357);
    msg.setSource(53938U);
    msg.setSourceEntity(207U);
    msg.setDestination(64701U);
    msg.setDestinationEntity(20U);
    msg.command = 90U;
    msg.goal_id.assign("EAMQZSRGABVONJFVQTESHOELFSXZTJMIRWDBASZQPKDULHJNQAZYAJEWGPITTAPIOKSVEDLTUBBVNDJVQNUPUWTFKLVJLMJFEPMOKEZBXIYYNMUQHFCKADVJZNCHGRCZSCXYWERWDFGUWNCIXQTZOBCGUSXTCEBURPMDRITKXIAJMFQNRBVADHOQFCKDXOVMGOFKHYWGOJMXRZWMXWIPRUZNVYSPDIWCLHOSAGC");
    msg.goal_xml.assign("HVYYLFBQOUDONCXIOSJLQNLLCVMQUCTBRJDFBKXTVDFXBCAWGAWQNGYLKZGJB");

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
    msg.setTimeStamp(0.2687217099503274);
    msg.setSource(19063U);
    msg.setSourceEntity(233U);
    msg.setDestination(62108U);
    msg.setDestinationEntity(206U);
    msg.op = 42U;
    msg.goal_id.assign("IFOVHZZJINHRLYQNRXPXVQRDACBWDWCXABYHKCXNVAEPEOBAQGMLKYXIGAYFOQQTLIMXQLLWGUJTCXJTBWEMOUTSYGFJHPPRKIKMSSNMSHRHRFIHKUFDFVRDCHBKEELDTMHJZUOZPHQUUAAEZVGETYTEOMVASTLSFYPBNIJVWNDZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CRSMQRYYTKAHHKFWUNINCVMVXY");
    tmp_msg_0.predicate.assign("YHESVXWOFTHVZPAGGKFWRUFNNOLTJZHUYQBQKWEBMBIAOUOAISCIIRJGSOCOMTZGETKKNCWICCZZEPLOBMEMDBJEXMO");
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
    msg.setTimeStamp(0.5950563591529404);
    msg.setSource(30183U);
    msg.setSourceEntity(93U);
    msg.setDestination(35638U);
    msg.setDestinationEntity(168U);
    msg.op = 149U;
    msg.goal_id.assign("RINETFKOXLLHNTYCATFKOKLKHJTAMUUXFDPHYOEWMIXYIRVVEQBZBEJZZKRELJSDPBSLHWYLMOCUPHSMRZWYXAUJXFGQJRCZXZUJKZKCMIFCYOGJMLHSQIGBRNPYCANALEPBVBVYXXNOIFTUTBSSEVWSPVZQEUDEMGQCDVGMPHMNSRRTDSUCNEKXFDTBGLWIP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZWTYQBWKLYBIORGUIDDISVETAZEICCSHUEBHKJUGOJFEISKNXARHOZGCABWYOSQOZSFJXQTQKECPQVSXMLPTNDISLCQDAJLNERCMIVQAGFKLUDHLZRYCGHWAWQXJLHPKEYUMZAATFNUOWQXNUMVNOBXBUCMVWVGYFPDRPJXLXCDSFFKKV");
    tmp_msg_0.predicate.assign("ZOCHTNPXTAHOFAENNEYWWKLGXLRKBOPAWVXVCOZFGHYNSXIKLVMQLTUYGQQQGDMFQBNXMEUXLINCGTPUXIZEDEMVTBNFCBBJUEIEVIDJHRHTTFNMPIMCVXQBWBLQSYDNOTLFSNUSTMCYWCCXUDGSRSLPJPDUEWPZAQZEFULYKHYGPAJORZAYSQHACFLWWOSJRAMRGCPZBYBZXKFJUIHKRRIODGJEKZJMJR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VQFWWCSWOGHAEEOVFGCRKEVFIMJUKIPTJEMSAQNNAKPRNWZDIQICHXUUQSKPVLBNSORHYFGVMKDLJJKIJONKXMTFDAJOGYXXEZRWGBUCSWVOCKPLOIYFZBBGUXMXLZATVHNRRTHZHOCFZCJIBCPDWBSEXWYEDZTRL");
    tmp_tmp_msg_0_0.attr_type = 173U;
    tmp_tmp_msg_0_0.min.assign("PAYHFBSTVZQOKYNGDXXLSNYWCDWKXCDMGORLBNKUPOYRCYOTWBTYBGFICBWNOJMPPCHFGZNJLVEQOKVS");
    tmp_tmp_msg_0_0.max.assign("ONLJBGTQDTCGQGTLOIHSIWEQUYLVDCAQLHNNLGUWJBQOHVIQTAUPSNLQRZXPIFXQVXBXHKAHPRFOGWZJPKSTMGRHXKPZACKYZDSYTBGYSHTJBPLOAEBOFUMCAEUNEBUJKQDZTUFBPMYWIFZMCSXLCVKCLIHBDKNURRGNAVZZPEHM");
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
    msg.setTimeStamp(0.3077992490301913);
    msg.setSource(55828U);
    msg.setSourceEntity(117U);
    msg.setDestination(55124U);
    msg.setDestinationEntity(6U);
    msg.op = 118U;
    msg.goal_id.assign("HMLUPIQPKBPHJFTUSJLCLDLFYMDWKXIXZGGXDACACA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YPDUFGAUSNGHFIRLWHWCTOXKMDRERDBSPGZNZWDBAHEQGJROSTXXWQRNTLARRSOPYMCUUTXQULHQFTNLOJUXIHYCATQQAMAVWIFOVUYDBDBLYUZTIFKCGKFRVWHCWNGNTWGCYWQ");
    tmp_msg_0.predicate.assign("PBLQIUITZCASK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RAOMHXOYAVJLCJNRXTMXQXHJGIWBRCHXSHLUWLMITFFDILZZEZJYAIKBWKGBHZSLRHDXVLTIKSMNSSZBODWOPKYJOUVBWNOPJONUEQCRGSDOMCVEUVNKGIPVTTXEQWQZKBMFLSWFDIETQEFHDJRLMMAMAAWVYCUPPQICJLVQFPKNYBMW");
    tmp_tmp_msg_0_0.attr_type = 71U;
    tmp_tmp_msg_0_0.min.assign("VMVZTUXKUGWQCYIZGRIMUKFTTJAIZXPXZRKQWGQNMAFCNYXUAQOJARWBLHEBEEUFKRCPGVFBEHZJQXXRYBDJVKWFHSARWNNJPSRISTNYFSCWCCVKPOQADWEIAJUTLMERKBLITUGLEOEOHFMSFURJSJLFNQWJHVPLZSHPMBXBQKUAVVLTEQYHGGCI");
    tmp_tmp_msg_0_0.max.assign("ZDCIBFQPELPOQOAFSIKAKUHJVUXHQAVXHYOGWYTNDRDNWJLBYHWBJTWQNRWOSUIZVSHQKFVNNUAVL");
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
    msg.setTimeStamp(0.17243427406404577);
    msg.setSource(42016U);
    msg.setSourceEntity(149U);
    msg.setDestination(7022U);
    msg.setDestinationEntity(56U);
    msg.name.assign("BYUOWQDZVQWFMIDEBTQHFHMZVWFEBLAIHUZEYFVGDPOGQRSLNCGKHMNEVAPOCPZEWVUCVUSVQMMEFUIWHFMTRCSNCJSLJKLBNRUPAIHUOSBSAMUKCADNJEQKNO");
    msg.attr_type = 88U;
    msg.min.assign("QRBKEFWLSD");
    msg.max.assign("LLZEGSUULVGAPQIXNZOJFBSDUWCUMESFOZFXB");

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
    msg.setTimeStamp(0.726940931167448);
    msg.setSource(62883U);
    msg.setSourceEntity(211U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(71U);
    msg.name.assign("WLZYDKJDWBBQTGKPNAKHITKZEHUEXKRMPSKNOAIMEIPHSVPDXWOZOXEEGHWASMFKPNBFZXCLODBVZJHJNBDURVAXAYMCMQTYJUEHXVORXKDFTGZTZNRSHZLWJCBDYNBGFBDQCFENHMRSWHCQLAGGAVWDIMUTFXEGMSVSZLFUOQOVWPSBUUIIJCOFTNEKQTTUOVUOJA");
    msg.attr_type = 225U;
    msg.min.assign("FQYHMGPUWZKMYHHQRUXWJHZLAQVRRFRRCQCPBJFSSBOGYRGIATTUFXGASGFLYZDLPZANPKCIUDNXKXIOFXONQMLBOTPMUIKEOGBKCPDDEMMCBEKIEHQYVOGNZYRMZTXUIRAXVOIAYCEJBRNLHDTZAPNBGEYVQCMXKWTBVIJFLFAPLWCZARJDZWHDYVBNWUDFVTVNMEEHHVQ");
    msg.max.assign("EEJBDDLLKSVIFUMFNGEBPLMNQTSXNENLIUEWUYFUCSJBVWFRUBAVKNYATZJAVOCZIEDMPWGOHHXTHHDOKRJLTZQMUMEUHZJTQQGQSRAARUPQXUPDIERCAGVGBPTQJBZTWISBJXZNRBUPVOOVYEDZDWDLMJGOGHDSNPVZNFFSJHCOJYVCBLSZKLYWDHIFWTOR");

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
    msg.setTimeStamp(0.28172471917886044);
    msg.setSource(24496U);
    msg.setSourceEntity(68U);
    msg.setDestination(7983U);
    msg.setDestinationEntity(67U);
    msg.name.assign("PZFDOYZZDPVJJLLWBGFEWNHIA");
    msg.attr_type = 158U;
    msg.min.assign("BRKZMDLFFHJJNTIHUPTALFNPTTMYFCGYOAUJAOGDCWRNUMUCLEEN");
    msg.max.assign("AIKRDLSBAAEMFYMBBN");

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
    msg.setTimeStamp(0.38259158068268084);
    msg.setSource(7181U);
    msg.setSourceEntity(106U);
    msg.setDestination(20566U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("VEYFKHXUWDMCGFESNILXVKBMMJP");
    msg.predicate.assign("OEFBAZPCQROLIEFDBXPMQUWNCQIQONSJPSSSJLZISPIYUKTMVVJFDZKWIEGMAZJTXXHHEKIBLHTCLMGDUKEWKLNKYFDYEUGGNNHRTCRDUJBCWDQTMGCAQNUUAOXRYIGWDRDGBMVCYESPXAAMYAJNRQRWFWPVFBCORAVLKFSHLNP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OBCATBPRZDNSLPJEQGFKDIPERSULXCMSYSVMFYBVRCIDTGFQHIXRAJJNWVPJDLDWHBHCZGRJULLKEHTCYBKFXZXCAEURHGPYSPGAWRVAOXLXKTLXPUIWZAWJPOQDQTRBHQIJOIBOAIGYMUCKRZRTMUJGUQWTVSFSKNHVCWFGGQBQVGLUVQEBOKKPCOJYWFZNODMJFKVNUZYEMADNHYTXBCKXYNMOEENIITXIWFTPALVNOLSDFS");
    tmp_msg_0.attr_type = 105U;
    tmp_msg_0.min.assign("GGBPHPLFJWXYDIELEVMRIOXDUOUNCCNXMSDSIOQJIOIVPHCIUAGAYLLKEPSATWWTMMITFEFHYTBHNJZDGSCPTPLTFRWWLVRXVURXBFTSHEQOUNOHSQSEENFLMEYWJWXKVPFBKMYDIBUOYDGENJLDLDSVAXHZQRKRUXMWZBCGZRUTRWCPYDINVYPKIWKKJHGXNZAKJVKJAJHBQGZVUCSQGCPNLORUZTNZD");
    tmp_msg_0.max.assign("KHYOERHJOHLHCGPUET");
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
    msg.setTimeStamp(0.38963877832106786);
    msg.setSource(23445U);
    msg.setSourceEntity(134U);
    msg.setDestination(2693U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("MUAGFHBERQWRFUFAGSRZTPJLDBGBHBCWQRXECTEDGJEIIKYKDZYVJHZIPKKXVKMDHGGIZCCMCZBQIQYJUOLXSIISPNIBYKRLFFSNGNNZOPJMJHNJLMBQVNVDTNMVFYXNOYSRUBYSSYMZSVYHVCNNLMFVCTBUDGUGVEAQOLOETIRZPEUEIKDWCERAJYTOMKZC");
    msg.predicate.assign("GGXMMPTGXCOCOUITZFREYHBLHA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IHDXTYZLPITDEKCRJJLSMZRTNNGWOPYBKILGAGGAVQRFGISXVLJNPWEEFRNBUFAMJLKCG");
    tmp_msg_0.attr_type = 65U;
    tmp_msg_0.min.assign("CIZIKJFNJLPSLEOUDLBPBXLKJHYHO");
    tmp_msg_0.max.assign("PQOYDPYNBSFEUBQNDORLBHXVQSUCNMDODPFIQQJGYOGJHBWHXFCPLIDVVQALAYFGNSTEHLCHGOVL");
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
    msg.setTimeStamp(0.045768908169740996);
    msg.setSource(62328U);
    msg.setSourceEntity(55U);
    msg.setDestination(21589U);
    msg.setDestinationEntity(136U);
    msg.timeline.assign("OKUTYFJAMXPUFAEGRAKCUOFZLQXWCSIBLAQZDCNBGDZYUQKWFSWPHBFEZXRMBIBVCSVMOSYJFIXYKJZMCZOUHK");
    msg.predicate.assign("CLRXVJJGUKWUCFWXBDMIKPYDLNUBMXLVOSZSGQAAJBOCYHBDAPUCSWRLXLXEMTEEMQURNNHFINYCQZKTYLEOHXJYEWKPFDVVFEDSIZKQTHCAUVKWQWIJXMVRFGFFBGZEQKASQVIZNEOMPPZXTHKMMWYPOHALYAOIVQTSNPZNIPYZ");

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
    msg.setTimeStamp(0.9507503828614398);
    msg.setSource(59156U);
    msg.setSourceEntity(242U);
    msg.setDestination(24315U);
    msg.setDestinationEntity(125U);
    msg.reactor.assign("REFGTXQNGQKMKXCAQPKFZQNLIVKUEWPFBTHVJXDFPDUCTINTSBNPONEAOOQOJNQORZLVBEAUUSEDNHLMJHYOXUXTKLHYJCSVDR");

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
    msg.setTimeStamp(0.8730306616046466);
    msg.setSource(20297U);
    msg.setSourceEntity(235U);
    msg.setDestination(38314U);
    msg.setDestinationEntity(241U);
    msg.reactor.assign("WQGRPZCFVOIFZDECBVDXRBRLGRTZYUAJNOSURZHPQGCUIMIMKSZUJSITFQHETSGUCLSSLICQWOOJPYKLAWOYNIHGSDYKXPDNJXWFVBWRDMIEMXTONCOPXHCBYRVGBWVPKUQEVRYAFGAYKBGJQBWLAHUKZPRFMHTTYCNHYTKJWKVHM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WQYWINELVFQSDDBIYETVP");
    tmp_msg_0.predicate.assign("IDYGXOXYVQNQKHWJSBKFYJUNJUCRTFNLACVRUMPMHQXZVUUSRLFOCFBEAMWOUJRPKBIITWBGSWFJWLXJZDJMMQXS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YGPRQCVWDLDSDOOXQCACGMQRAMUCBMITXZHNIMLLLREEGBRLQKTKHOKRSZHMKWBNRGHUJPCJHYKNFKOVKOCDYJHUFLMZUTAAZPTYQYFENEUGCZIYPRVQDZMWIXTUOAMGGOVRBKEWIQJXEVZNIOBWSXJESWGTAYPSLWJVFKDEMJZCVFEFPJC");
    tmp_tmp_msg_0_0.attr_type = 82U;
    tmp_tmp_msg_0_0.min.assign("FWLIOJXPCXSVOBCNTJAGCZDKGGEPEHHCOYTTSXXSRUXPJRMTDNHOXQUFNZZDFWRFQOQZEOADVQNNZUAASZYVLDFCKLWTTYGKMGBJFMKXNTYKKSGJIYAIRINZDHTPAIEZGPCQMBJIWBYZAVVLBUWETFXQDYIGOSBHISQMUPLWREBDKEQGLESRVXLMMYSOHCQOBOKRDYNSJRGCAAFHJBLPLX");
    tmp_tmp_msg_0_0.max.assign("SWKNLEBPUYSMRFQJYXAAVOJFZHFRIAQRCHFKXZLMNYZCLVDGEUVYNBILDDAPKPYSVLIYRTKYWQHXPKBXUEUCFRDHMTBPXOEKNHREWVVRUUSIXWYEBJFWKLTQRENZARNICZQPCXZHOMOTBKUGSLDHZINJTYDFXZCLDAMSUAFOJEQQWAGGOJ");
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
    msg.setTimeStamp(0.7248619281772299);
    msg.setSource(13997U);
    msg.setSourceEntity(239U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(178U);
    msg.reactor.assign("IPTDYAVTXHKOUGSETDHNJNEYOLEMCFUWJMONUNXLKMQPQZFIEXENMRPVOBTYCBGCTEXAZHSAUAQABBDDGIZWMPFFKLVFQGKSPQZZYIKWWJUNI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WJETOEIIGCCZRPMBBYYVEPJOJXNZMPQAVOKYROQHSULNVAKUNEROKWPCRTSPGHBYCEU");
    tmp_msg_0.predicate.assign("LHYAJGHQBWQCMRLTFSXTVIAZBWUIRBANRAUROOLHDJDYCQTYXSDZCHPFNKBNXPCIHHMJNWXCHTMPY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OQQQBVJSRLQLWLLCTIHFQPTG");
    tmp_tmp_msg_0_0.attr_type = 149U;
    tmp_tmp_msg_0_0.min.assign("BTNCCEPIJDKUQYKGAXCCFZEVLOAZSLQTAMPPWSHQXIKVQSMERAZBLZRJCQKCOWGNOBDFIMRJQLUJGBYHRCEJVUPDEHXEIDGIAKXEXWTWYTTDFGOLYWFPGSBUAOYRUOONRWNZGSBTSULEBNFPSNOAIOPOMITYHWLUJKVSMAPDCUEMSCKPU");
    tmp_tmp_msg_0_0.max.assign("LZBHQAYJFZNZKZRDRRWVWMIMUTLJYFPOPVSCYJXUXIZUQTIPTOGNGSJDGVEAIEZTCLNLGOBWCFLYBREGUFRKCRBDQQJVLFTNHFCXWMVBYSBMZQDSOKMDYHQFTQBDOGBWPWEYNMCYAEFKPJJIT");
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
    msg.setTimeStamp(0.7714365124082317);
    msg.setSource(13131U);
    msg.setSourceEntity(34U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(175U);
    msg.id = 187U;
    msg.width = 19837U;
    msg.height = 18104U;
    msg.widthstep = 45232U;
    msg.channels = 109U;
    msg.depth = 188U;
    msg.finaldata = 47U;
    const char tmp_msg_0[] = {34, 98, 16, -72, 112, -86, 77, -13, 120, -125, -29, 57, -27, 22, 14, -78, 101, 66, -14, -48, -28, 107, -50, -57, 83, 51, -25, 87, 7, 98, -11, -65, -41, 35, 100, -111, 26, 114, -70, 85, -81, -125, 107, -36, -58, 57, 12, -54, -11, -113, -117, -44, -127, -60, -109, 116, 62, 99, 7, -57, 11};
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
    msg.setTimeStamp(0.16291754567262517);
    msg.setSource(41753U);
    msg.setSourceEntity(81U);
    msg.setDestination(60165U);
    msg.setDestinationEntity(73U);
    msg.id = 142U;
    msg.width = 17342U;
    msg.height = 44291U;
    msg.widthstep = 61876U;
    msg.channels = 137U;
    msg.depth = 100U;
    msg.finaldata = 233U;
    const char tmp_msg_0[] = {65, -8, -92, 15, -101, 44, -81, -105, -26, 18, 126, -109, 99, 40, -92, 10, -11, 46, 113, 81, 60, 94, -74, -72, 116, -126, 115, 55, -50, 26, -83, -110, 96, 103, 36, -97, 110, 3, 58, -58, -83, -113, -44, 87, 106, -76, -22, -93, -86, -21, -5, 71, 90, 86, 110, -20, -104, 52, -19, 49, -120, 78, -84, -20, -76, 95, 1, -65, -48, 63, -29, 74, -8, 80, -52, -126, -58, 104};
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
    msg.setTimeStamp(0.2653478030650688);
    msg.setSource(28596U);
    msg.setSourceEntity(57U);
    msg.setDestination(5847U);
    msg.setDestinationEntity(244U);
    msg.id = 182U;
    msg.width = 7988U;
    msg.height = 27027U;
    msg.widthstep = 42544U;
    msg.channels = 249U;
    msg.depth = 193U;
    msg.finaldata = 78U;
    const char tmp_msg_0[] = {90, -10, 6, -6, 4, -71, 82, 86, 3, -25, 77, -90, 5, -80, 68, -11, -50, 67, -100, 87, -84, -123, 50, -10, 34, -23, -7, 82, 71, 119, -68, -92, 36, 66, 91, 82, -21, -125, 12, 63, -37, -81, -125, -59, 118, -55, 60, -74, -101, -65, 74, -48, -95, 94, -115, 26, -33, 81, -83, -93, -56, 52, -74, 83, -34, 28, -75, -66, -56, -19, -73, 46, 118, -34, -51, -31, -82, -102, -102, 43, 40, -22, 6, -112, 124, -57, -17, -81, 45, 44, 49, 107, -5, -21, -66, -19, -4, 89, -11, -23, -67, 76, -9, 113, 7, 65, 107, 79, -13, -60, 92, 100, 99, -10, -48, -96, -8, -68, -66, 53, -116, 123, -61, -15, 89, 46, -92, -44, -26, 43, -32, -80, -38, 85, 10, 85, -77, 79, 47, 105, 117, -4, -53, 36, -17, 63, 13, -114, 82, -104, 112, 12, -125, -85, 21, -108, 44, 36, -124};
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
    msg.setTimeStamp(0.7543162792140677);
    msg.setSource(745U);
    msg.setSourceEntity(235U);
    msg.setDestination(39482U);
    msg.setDestinationEntity(186U);
    msg.width = 34473U;
    msg.height = 40974U;
    msg.channels = 182U;
    msg.depth = 67U;
    const char tmp_msg_0[] = {38, 39, 52, -71, 58, 0, 13, -110, 104, -120, -121, 83, -79, 106, -110, -75, -86, 58, 44, -40, 88, 36, -7, -105, 121, -85, 8, -1, 102, 81, 55, -7, 35, -53, 101, -77, 113, -102, -98, -64, 22, -21, 93, -121, 95, -87, -98, -119, 21, 85, 60, 103, -28, 70, 103};
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
    msg.setTimeStamp(0.11044272327590032);
    msg.setSource(15926U);
    msg.setSourceEntity(116U);
    msg.setDestination(7451U);
    msg.setDestinationEntity(48U);
    msg.width = 41012U;
    msg.height = 13414U;
    msg.channels = 39U;
    msg.depth = 90U;
    const char tmp_msg_0[] = {86, -52, -88, 107, 103, -47, 120, -121, 8, 47, -102, -29, 25, 1, 21, -82, 87, -61, -7, -92, 76, -74, 113, -65, 110, 97, -78, 0, -63, 3, -25, 118, 123, 86, 6, 107, -38, 111, 94, -68, -62, 94, 118, -36, -102, -14, 105, -83, -103, 112, 84, 102, 48, 98, 8, 102, 103, -26, 6, -11, 66, -108, -103, -35, 91, -108, -116, 47, 112, 57, -47, -93, 82, 43, 124, -97, -106, 123, 2, -54, 31, 20, 119, -114, 94, -22, 14, 21, 39, 50, -87, -57, 63, 119, -25, -101, 57, 35, 101, 106, -122, 0, -3, -89, -66, -53, 40, -4, -68, -81, 112, 17, -54, -23, -90, -15, -6, -98, 106, -64, -25, -56, -92, -94};
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
    msg.setTimeStamp(0.6252508594422146);
    msg.setSource(17376U);
    msg.setSourceEntity(20U);
    msg.setDestination(59971U);
    msg.setDestinationEntity(177U);
    msg.width = 52993U;
    msg.height = 15969U;
    msg.channels = 112U;
    msg.depth = 163U;
    const char tmp_msg_0[] = {-127, 34, -96, 9, 39, -8, 80, -107, 16, -81, 35, 109, -64, 67, -52, -12, -43, 28, -74, 114, 122, 9, -93, 42, 97, 121, 75, -102, 45, -48, 8, 27, 99, -46, -27, -69, -99, 59, -28, 69, -81, 66, -16, 31, 36, -35, 11, 59, -58, -71, -67, -76, 119, 6, 105, 44, 20, 81, -114, 47, -17, 13, -86, -14, -66, -65, 69, -92, 98, -126, 97, -107, 57, 42, 81, -93, -80, -14, 56, -57, 18, -69, -111, 124, 17, 44, 126, 80, -115, -6, -13, 62, -58, -34, -94, 2, 121, 75, 117, -84, 54, -68, 22, -1, 22, 13, -7, 25, 4, -28, -17, 72, 123, -116, -91, -75, -91, -8, 63, 39, -58, 73, -111, -89, 111, 101, 122, -72, 115, 113, -73, -45, 30, -100, -118, -71, -9, 53, 105, 62, -2, -80, -84, -24, 11, -84, 24, -60, -73, -15, -89, -76, 46};
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
    msg.setTimeStamp(0.14838468658152948);
    msg.setSource(63550U);
    msg.setSourceEntity(158U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(109U);
    msg.frameid = 54U;
    const char tmp_msg_0[] = {67, 92, -48, -26, -58, -52, -93, 114, -51, 35, -51, 63, 116, -114, 104, -59, 101, -32, 19, 72, 45, -87, 80, -33, -5, -123, -16, 28, 89, -22, 109, 53, -97, 3, 107, 105, 28, -43, -10, -43, -82, -71, -69, 33, 57, -87, -20, -13, -59, -85, -116, 74, -41, 42, -102, -101, -37, 31, -70, -28, 25, 92, -112, -42, -32, -87, 80, 23, 58, -2, 63, -23, -6, -17, -53, 126, -21, 22, -77, 83, 33, -3, -2, 27, -33, -48, -35, 96, -22, 32, -50, 63, 90, 97, -23, -30, 58, 63, -82, 121, -99, -79, -87, 39, 10, -108, 51, -81, 111, -116, 76, -105, 3, 23, 24, -105, -97, 13, -64, 85, -116, 19, 11, 90, -9, -5, -14, 100, -45, 96, -112, 116, -21, -14, 102, -93, -125, -114, -29, -32, -22, -62, -122, 15, -96, -6, -1, -110, 74, -34, 121, 119, -27, -29, 98, -6, 64, 5, 10, 46, -84, 33, -124, -29, 41, -105, -59, -42, 101, -11, 121, -64, 110, 0, 49, 97, -120, -96, 80, 2, -111, -65, -32, 29, -121, 43, 97, 8, 56, -70, 90, 72, 101, 53, 43, -80, -75, 77, -6, 110, -54, -103, 70, 55, 39, 31, -100, -87, -3, -12, -73, -105, -111, 50, -101, -90};
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
    msg.setTimeStamp(0.2748876296903615);
    msg.setSource(61537U);
    msg.setSourceEntity(79U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(190U);
    msg.frameid = 177U;
    const char tmp_msg_0[] = {-49, 122, 38, -91, -119, 21, 40, -108, 53, -26, -82, -84, -114, 70, 77, 109, -36, 11, -33, 11, -99, -8, 21, 13, 73, 68, 52, 107, -58, -46, 9, 24, -24, -15, 1, -71, 54, -120, -8, -60, 4, 95, -3, -36, -16, 101, -23, 109, 49, 101, 123, -27, -41};
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
    msg.setTimeStamp(0.6300915318835119);
    msg.setSource(57638U);
    msg.setSourceEntity(19U);
    msg.setDestination(24780U);
    msg.setDestinationEntity(151U);
    msg.frameid = 245U;
    const char tmp_msg_0[] = {-31, -51, -12, 44, -72, 96, 15, -98, 123, -42, -98, 115, 77, -43, -28, -78, 23, -48, 30, 8, -6, -14, 4, -42, 45, -58, 83, -126, -62, -58, -1, 22, 53, -50, -45, 64, 0, 81, -86, 123, -60, 41, -52, 94, -100, -27, -41, 53, 101, -110, -58, 2, -67, 8, -77, -119, 42, -85, -33, -81, 103, -91, 93, 98, -19, 56, -50, 110, -27, 116, 69, 83, 64, 123, -3, 44, 99, -40, -67, 8, 74, 70};
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
    msg.setTimeStamp(0.6713801554998544);
    msg.setSource(60493U);
    msg.setSourceEntity(203U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(248U);
    msg.fps = 17U;
    msg.quality = 202U;
    msg.reps = 29U;
    msg.tsize = 99U;

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
    msg.setTimeStamp(0.5075140874356118);
    msg.setSource(41109U);
    msg.setSourceEntity(26U);
    msg.setDestination(477U);
    msg.setDestinationEntity(95U);
    msg.fps = 55U;
    msg.quality = 221U;
    msg.reps = 184U;
    msg.tsize = 197U;

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
    msg.setTimeStamp(0.6808412557366805);
    msg.setSource(6292U);
    msg.setSourceEntity(201U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(10U);
    msg.fps = 111U;
    msg.quality = 90U;
    msg.reps = 177U;
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
    msg.setTimeStamp(0.4009041916934588);
    msg.setSource(38221U);
    msg.setSourceEntity(159U);
    msg.setDestination(23663U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.6629071178840702;
    msg.lon = 0.8442887523598167;
    msg.depth = 144U;
    msg.speed = 0.10005595397363909;
    msg.psi = 0.5729265590104575;

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
    msg.setTimeStamp(0.4617464935439842);
    msg.setSource(63777U);
    msg.setSourceEntity(157U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.8944692686282273;
    msg.lon = 0.24610627636045412;
    msg.depth = 165U;
    msg.speed = 0.9992242957465968;
    msg.psi = 0.37079424474742684;

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
    msg.setTimeStamp(0.13786156103709368);
    msg.setSource(47323U);
    msg.setSourceEntity(250U);
    msg.setDestination(34131U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.2710946745702918;
    msg.lon = 0.9291683782022091;
    msg.depth = 210U;
    msg.speed = 0.3855478454116167;
    msg.psi = 0.4213096755149156;

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
    msg.setTimeStamp(0.5382160112492266);
    msg.setSource(11639U);
    msg.setSourceEntity(132U);
    msg.setDestination(44469U);
    msg.setDestinationEntity(16U);
    msg.label.assign("SLBAHUWNRVNSXWZHDBPHZWDHKKKABIRTVFJWUBXWNVAUCGUFJYZMKYOQCCTEOIGQULGVKWMGTFPROFSVIUQUFMZTFGCVFYBPLZNMRUCKATEPDLHYPOYXHIRZLVLOYNRJSSTAIGHXMEDPDKLOAEETHBMASOBXLTTQFWZVKWPDJDWIRNEAZIONGXI");
    msg.lat = 0.20809913906623811;
    msg.lon = 0.8488437510959667;
    msg.z = 0.8453498723285755;
    msg.z_units = 65U;
    msg.cog = 0.6023278276946836;
    msg.sog = 0.08304330990452646;

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
    msg.setTimeStamp(0.7554161787100395);
    msg.setSource(30712U);
    msg.setSourceEntity(56U);
    msg.setDestination(62789U);
    msg.setDestinationEntity(14U);
    msg.label.assign("VLBMJBHDTYAVUFCMJCVSQBVXBKFZTGVISKCWSHOPAEMYWXQLWGIDVJRZVJEXPHONWNQTWRALPXYSUFTNRCDIDKKMCXLLDNEQXPIZGALKZFZMXUUAHCQZMTHCQNPPTDRNAPQGSFZNBUDFOBWTUAIXNGGKWTECHPIOAYZRIXJRKEVSXGHUYRZHMFOWAFJEJOONDJOQRYEFJCKGUNMYBPCZMEYTVUAIDWJQIQOKFYDTKRMLSRELLSVYU");
    msg.lat = 0.7565921072745483;
    msg.lon = 0.3053533852707627;
    msg.z = 0.1251162371471014;
    msg.z_units = 123U;
    msg.cog = 0.5638907011779151;
    msg.sog = 0.39412013969124804;

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
    msg.setTimeStamp(0.09653998736587377);
    msg.setSource(18585U);
    msg.setSourceEntity(3U);
    msg.setDestination(64628U);
    msg.setDestinationEntity(120U);
    msg.label.assign("JYQSCRUGWGJTSJRQGVZEWEIBACJRDDZYMDEKFUSVDYFOLNBCTUYCGCDNDPHHPXDHJVTYHUVEDNOCGGRMRWKQEFGMUGFNUFUXQFVEMARNFWPAVTHDPQRVQJTWVGFLJTOYPSXBPKIP");
    msg.lat = 0.2799956783501829;
    msg.lon = 0.2532779948038768;
    msg.z = 0.16586388544837416;
    msg.z_units = 135U;
    msg.cog = 0.4589851785529435;
    msg.sog = 0.8385146106125179;

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
    msg.setTimeStamp(0.985869891566027);
    msg.setSource(36173U);
    msg.setSourceEntity(151U);
    msg.setDestination(21708U);
    msg.setDestinationEntity(56U);
    msg.name.assign("RHUMOQQBZVEKXQKJFQUEKPSHNENNYPRHYCXIWUUKRDRVBJMMFVGUAHSGXBNEOWQETIOEMSFONSFMTMRMMTBEPVXWQFAZKRQXBYMDDBJIRSBPXCGFXNOBJPZIBAIIWYVBKFSGYOCDGRGSKLRJYIWEPCIATKHX");
    msg.value.assign("HBYNIAYEWRYMEVSYKOOCILMYF");

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
    msg.setTimeStamp(0.4678401663250771);
    msg.setSource(4587U);
    msg.setSourceEntity(101U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(248U);
    msg.name.assign("DSXQBZAEZNZPVFTSCRYJARIJZEDTXGGREWYBUZDXKQAFWNYBGMVDFSKIQIQSBEUOKGUCQHHJJORDIZVYYFFOKJEFXRYAIKDWZYASKGANOUPXWZLJROSTEHSIWUGNNNZVTBQXUONHCDXRQNYYVDOIBEPWTAQPWRRBLUJDMLVLCGBMWKHHPIHWOMCVJBMHLCW");
    msg.value.assign("HRPQDXTXRUOFVYZDS");

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
    msg.setTimeStamp(0.6070884861041161);
    msg.setSource(6948U);
    msg.setSourceEntity(160U);
    msg.setDestination(27781U);
    msg.setDestinationEntity(64U);
    msg.name.assign("ZLDLUTPYDIOZULCSQZPVWXYKDJQRTSDRCJCOUNSEYYZEDQQFSPKIQOCBVGWDATLXGJRRHYSHIHUXZVANFVLTFZWITMMFLCRKBRWGBIQWGKSLBBETHRGEAFKVFJGGTBAWHLOFKAAEIRNQYFDOYUKWWMONBCMTINDHTPHSKUWJAXYAQEHUACJMPCJLHGVNIZYVPCAJKODBMBBFPXZNEOKQTSFXMMPZPYXMGIGCSNL");
    msg.value.assign("CMPODREDZJAALCJUGJIZJVUAVEPLIHMMKHIQVEBWECYLMRVTAWHXAEFXAYUDCHCKLIQPNIUXGKSXWEICQTLWMMEBXQWEDBQGBGVSOJCBJV");

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
    msg.setTimeStamp(0.43394619343345175);
    msg.setSource(65495U);
    msg.setSourceEntity(180U);
    msg.setDestination(4568U);
    msg.setDestinationEntity(81U);
    msg.name.assign("JZMZBNFLXHTYKFHVTALNSHNFICQLSOJSYPWDINEKVSDDIVNPZAXEOGUSZJOUGIRSADFUDFTWMJGQXKQLSYUWZHFQFGLVVALBIBALMKUMEUNZOPCDOTRBYJJIPMHNLPLDBDAXTRMDPTOHKREEKXEYNLMGYHRAHNRFATDZWTCBZGZYKHCVXUNEXUGWCAQOAGCBTOTPGVCEESIUWWOKQIWXPSQFRYHUPREQVCGKXY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TWMNJHXAFLKJQZUDPAYIQGKTKDHGJSBIJIWYMWRKCWMMEIOSKSBCCPISWOUYNRLXDJGZTEDOUFUZHIHY");
    tmp_msg_0.value.assign("YMWOTDZBIEHELEOARTAPNUZLRRHNIQCKCSULELKSIISXGXSTTOE");
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
    msg.setTimeStamp(0.4822632164062124);
    msg.setSource(26932U);
    msg.setSourceEntity(85U);
    msg.setDestination(35617U);
    msg.setDestinationEntity(90U);
    msg.name.assign("ZTPXDBNSGOXCFHMZRCGVWLPASWWMBYQFLYFGIOYRWHRIXEXFCVBJYYDJW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SAHZETLSIYAXTTVCZJYRTQLONBBSPWLNQVQLHGVJYNHZGZXUXOCBMLFRSIKDEBPEXAGVRQDBFUOJPQTMUPMODFZMVGBPKSAFJCJZAEFWDJORXBWSLNKYIFMKCKKULTVFIIYEUWTXF");
    tmp_msg_0.value.assign("YNQTGMSFIBEPQUNFZCKIGRUHLJKAJZABUDIXMVJBJALTXKGAJXCXYOOXPJSDRFAIFCYKVZALPPYSLZZ");
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
    msg.setTimeStamp(0.45140313723652126);
    msg.setSource(12400U);
    msg.setSourceEntity(250U);
    msg.setDestination(47429U);
    msg.setDestinationEntity(114U);
    msg.name.assign("HOIALOUVYYAVDEFQFFPDSLHSWMQUWZJGMYYXPLHGVACEABZKLBXXUBWRLNMNYFVCQCDINPYGSHQEQWSOJNKPGTZGHGJBEJKIICRFDZHIZJYPECGSMJXPBOWNDDMTYMUXADJHRMRSPXEXVNKVZUHOTVOWOUWICFSPLZQGXOUYXLNEGRAHHKTSEBCEZKINWOWDMLTACVIUETZTRFSAP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PNVDNMSDLSQVJWGKILUUGIYGDTMFCBJCMC");
    tmp_msg_0.value.assign("DQVNDKRUTVERPVPTRJLZRBZBHZCNRPBUAVTLJJXJDACZXJFNINLWOBUQGKZYNCXKKAYSFGAOUPEFHSPFTYIMLTSPERXAGOWKUJFEFNYIMVLDZNBRIMZXGWRACUYEVWHYEWQBTCGUGIGYEVHOOSQKFIQSISOQVBQEAAIOMDFBTILLDHWWMKGMJLUEBPYUFVCRPRXCJPIWCPLD");
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
    msg.setTimeStamp(0.24394374039456435);
    msg.setSource(37365U);
    msg.setSourceEntity(231U);
    msg.setDestination(17506U);
    msg.setDestinationEntity(148U);
    msg.name.assign("LWEHLYSKZUVSGOWVANXCTKUAITPNRELWKRHPGWOYOFBN");
    msg.visibility.assign("TLIGYOZCVGXKAXHYMXPDAYIRVWOIXQRDJILUHWEUNQLRNWOVWRSPUKZPYMNTAOCFYWJCHGPABQNBONWZOVOFRJBHIQQLXFFHMKMLKTESIEKJGVUACHBPCPISTVWFIOJKJZGFCKBBNMIXKCVDYEUPSZABJTFAVGTRFDDREGQXEPDYNMVDWLJKAGQSWVSMFHPDJULYTWTSUHQ");
    msg.scope.assign("DCDGIUGRKYVNZOVZWKMYMGJVWWAKFUIUPXTFCGHSAHMMBUXEPKBBQLJOPUIPIXEZFXTRLVLWDOGDN");

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
    msg.setTimeStamp(0.9217612839766085);
    msg.setSource(59302U);
    msg.setSourceEntity(22U);
    msg.setDestination(41120U);
    msg.setDestinationEntity(62U);
    msg.name.assign("XZTPVQVWCYVNGMLMBMPMATYZXHWHDRXGZVIEGIFRJJHQXAPKSBFNZRNUAJACUWPSJDNIKQFJLBBDVEGCUNNTORSCQAIWVLHQEYTYHEUOODPNCJBACNKTZCWYWNSMC");
    msg.visibility.assign("TGUVBWTQOHYCKGVHFAGFLXKPJNWTKMCXPEHXIPVWMZDVBLVZIGWSOOBBOLRXQKAGXNCMJHRUWERCZXELJIIOHGIKRSWYNKMEJSUHBIXEPMTPQPNFHSD");
    msg.scope.assign("ZOXCXLQCPHDBYDFSJTHVFNETBAQEVBXUJLSJVTPSYNMMMARHKZYYN");

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
    msg.setTimeStamp(0.15754153537058557);
    msg.setSource(28540U);
    msg.setSourceEntity(149U);
    msg.setDestination(17317U);
    msg.setDestinationEntity(21U);
    msg.name.assign("VAJBXVOONWKUGNRYWOEEJKPZWSZLPRQVUVECFU");
    msg.visibility.assign("EUGVFTYPAITAYOASVZHYMGDJBBLESXBRKEFQLSPCXAHGSSZJSETOMGDIHNVBPNOXNZHPYYEKPURWXHFQVMWDKCMYFMANKGOGDZELYJIMVWKPLZBAQRNNWIKWQGADTVVLJSMOTXDQDZWPKBTTUCLWBHZIINRJNEQKUIZCBJU");
    msg.scope.assign("TIDIVXLMQKBVJNSBCEJPIDODIJD");

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
    msg.setTimeStamp(0.23531564228159618);
    msg.setSource(49017U);
    msg.setSourceEntity(129U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(147U);
    msg.name.assign("WICQOIVGGXNSEPFLFABD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JWSYHIBNZVQCTDCMVGTUTQZPCETABFWLVMADYOJVXSPKOAGUPEPBTYGSBMWVSXDKABPAAZCLYJXURIBKKSROFFOFZHLELXRKFJDHTRHWDOJXDMYWGPIZMZJLMIQNOTVRWKSMLGDYMZANMGVXICOAUKRUBHSQQUFQNVETAZECXHBSDZJNXCYWBBEGIELVHLSKKGRQZNNVGHUOREFSNUAX");
    tmp_msg_0.value.assign("YONMPYXJLQRDENRUPWFIBZXYVQSKWPHHDJJWAHALGTF");
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
    msg.setTimeStamp(0.5171045204368108);
    msg.setSource(50950U);
    msg.setSourceEntity(118U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(99U);
    msg.name.assign("NIJBLZJGVDEWPCSXJFJEAEKSABCKTLVONJDUMWCGVCOWHISKYIMMBSNEOHMLPBOXPQEBOJZTGXFRBLVTHMFAZJDWMVXEIJCSOFPDXQUSKIHAPKSEFRSIZLODDNGXTFJSCCQNYCYGWURHZYYITYWRUMDHHAMHGFCTUYTRKJNQGPHYFWCTAIADQZRXMNGYUPIKGGBWQPUVOAUHSVZONDMREKOAQZRXTLYDRNLPVZEXBQNK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OITZEVZDTSMXLUGMDHASHERNRFVMYCBKJZWDKLIYSEVATLRWEULCNAGEORGWTXTSGVJGQOSUPVKPODBXYRA");
    tmp_msg_0.value.assign("SUFVCQMDGAATQLRXUZTHUOWXNYKGZKDWBSZAZRRSHSZPIPZRZDAEIDRNOXKHTYGCWGGAYBCOMFFMFTVKPCHNTJGECZKSWUUWXQNRKYLGNYPEJHCEAXKVMXLJBMIIPSTIDYOCTBIQKWLVJGUWUANQEPFVVEJVCQVNWRXHXPBFJEBOATSEJFNRUNIIHVBFBOICUPWFAJMJXSDBGSWKNEHLQEKMHLTGZOUOMROZJ");
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
    msg.setTimeStamp(0.4002651099068335);
    msg.setSource(923U);
    msg.setSourceEntity(145U);
    msg.setDestination(45607U);
    msg.setDestinationEntity(120U);
    msg.name.assign("LBBAIUWQTQUQKAOETBNJS");

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
    msg.setTimeStamp(0.9179091201502301);
    msg.setSource(28262U);
    msg.setSourceEntity(13U);
    msg.setDestination(18442U);
    msg.setDestinationEntity(110U);
    msg.name.assign("LUGQZNJCIOWMEQOMPZWNZXMJODFXJDJLAFVRPZOICDXRHUBLIVBCCSNRFPKAVJBTKLUQUROEIWDISQBPXNHOGJFHSEMLVZKIYAWMZNKESLGUTVJAETRHTLGJGCDRXVYSWZLGEZRIVXZKOVYKUQZTKUPJATHHGLMAKTECACBNEMFFRWTMAINDDIMOHXFQRBJXDTQBGGDPPMYSATNHYUYUSWRQFCPS");

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
    msg.setTimeStamp(0.7480789250556188);
    msg.setSource(46040U);
    msg.setSourceEntity(236U);
    msg.setDestination(15673U);
    msg.setDestinationEntity(56U);
    msg.name.assign("CRCBSFFSHWDUPQKTAGHBWBRUTTNGCLJHUENNDNOIPSVVAUXRTWAAPQHYMMYFMVOQAYZESMPBBQPYZHTBXEXNRPUJXHVJGYXKEOVSMFAJRJPPALEWKKKJCKNOBUUNZTYPDWHXCIIRIVXMZUWTVRWKYARJQODEGSZHJKDOIIDDQFEIZTONQVYHCMOSUDQJDIRKBLOFZLSGGATGVWYXAMUJZCIBLNECYCFFMZLLSLOBPIXEZVWLRWE");

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
    msg.setTimeStamp(0.0002624861870796913);
    msg.setSource(40101U);
    msg.setSourceEntity(82U);
    msg.setDestination(18708U);
    msg.setDestinationEntity(223U);
    msg.name.assign("EWFTKFZMSJICUCFFDYUHXDBHPVDEGDKXKVLOCLRGKMYPNBDGGJXHTJIWZQSLXNNHMOCMQRROSYYWQYALUVMOSQSOEHNWGLLNFDNXWQAUQIJBPIPPEXEAHEPZFPXGEINSAVXQOWYBRGNMXDBZVVSYHIJATGVIROVUJRCYVAWLWIBRXFRLJPSQWZAZDIOBMJTJTVZCSUQLZTCTFKHFYMZOMSUNKHFDTEPTKNJMRRBEZYWDEGABTKPUGU");

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
    msg.setTimeStamp(0.6522930148958102);
    msg.setSource(61017U);
    msg.setSourceEntity(198U);
    msg.setDestination(54146U);
    msg.setDestinationEntity(221U);
    msg.timeout = 2489403595U;

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
    msg.setTimeStamp(0.9330707065920868);
    msg.setSource(59186U);
    msg.setSourceEntity(237U);
    msg.setDestination(25817U);
    msg.setDestinationEntity(174U);
    msg.timeout = 44666772U;

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
    msg.setTimeStamp(0.9544810018372895);
    msg.setSource(755U);
    msg.setSourceEntity(137U);
    msg.setDestination(16734U);
    msg.setDestinationEntity(88U);
    msg.timeout = 2173202603U;

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
    msg.setTimeStamp(0.7364655151463279);
    msg.setSource(12758U);
    msg.setSourceEntity(220U);
    msg.setDestination(30205U);
    msg.setDestinationEntity(145U);
    msg.sessid = 3348510542U;

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
    msg.setTimeStamp(0.3699015327714855);
    msg.setSource(41281U);
    msg.setSourceEntity(82U);
    msg.setDestination(57045U);
    msg.setDestinationEntity(147U);
    msg.sessid = 1816682294U;

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
    msg.setTimeStamp(0.12402692703367335);
    msg.setSource(61814U);
    msg.setSourceEntity(204U);
    msg.setDestination(61028U);
    msg.setDestinationEntity(181U);
    msg.sessid = 4048013604U;

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
    msg.setTimeStamp(0.4921701502103316);
    msg.setSource(16438U);
    msg.setSourceEntity(251U);
    msg.setDestination(50490U);
    msg.setDestinationEntity(193U);
    msg.sessid = 599378465U;
    msg.messages.assign("HSGUHQLCHAITHUOXJPMAKIZVTHMKCTFALLDSMRZIUAVZTPVPPGDESQOLJQFDICYUSYMAYOGPWNVWMKKQFYKROUZRWJQGPSEEXQAHEGUIFZJSNOKMOABHYDTUFXMRNTXQIBNNEHLVGXDDO");

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
    msg.setTimeStamp(0.631340400442537);
    msg.setSource(26387U);
    msg.setSourceEntity(227U);
    msg.setDestination(52898U);
    msg.setDestinationEntity(9U);
    msg.sessid = 1131417109U;
    msg.messages.assign("JBJRTQOMZTLQFUWETYJVCAUEJEWINHFTLIRAAVQOJBEFDHIPZ");

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
    msg.setTimeStamp(0.790170220719296);
    msg.setSource(5982U);
    msg.setSourceEntity(222U);
    msg.setDestination(61892U);
    msg.setDestinationEntity(24U);
    msg.sessid = 747504045U;
    msg.messages.assign("DJEKJJCOMENZVNWUNYLYHHNDBLDGTQIFRKPZPLRSUAGMTZWQASGVSNYZXSRDPSMHLQMVUARPIBFEYPPMXFO");

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
    msg.setTimeStamp(0.9781355426234495);
    msg.setSource(49503U);
    msg.setSourceEntity(81U);
    msg.setDestination(24388U);
    msg.setDestinationEntity(186U);
    msg.sessid = 2067405131U;

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
    msg.setTimeStamp(0.524434624310523);
    msg.setSource(45413U);
    msg.setSourceEntity(206U);
    msg.setDestination(16833U);
    msg.setDestinationEntity(101U);
    msg.sessid = 2612588818U;

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
    msg.setTimeStamp(0.8886017833774588);
    msg.setSource(41106U);
    msg.setSourceEntity(37U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(134U);
    msg.sessid = 3915279934U;

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
    msg.setTimeStamp(0.0604891286598368);
    msg.setSource(57511U);
    msg.setSourceEntity(57U);
    msg.setDestination(48562U);
    msg.setDestinationEntity(99U);
    msg.sessid = 297834691U;
    msg.status = 187U;

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
    msg.setTimeStamp(0.3767429637369525);
    msg.setSource(1158U);
    msg.setSourceEntity(142U);
    msg.setDestination(62925U);
    msg.setDestinationEntity(216U);
    msg.sessid = 934228151U;
    msg.status = 94U;

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
    msg.setTimeStamp(0.04290959145364359);
    msg.setSource(26667U);
    msg.setSourceEntity(136U);
    msg.setDestination(47498U);
    msg.setDestinationEntity(121U);
    msg.sessid = 2789436919U;
    msg.status = 161U;

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
    msg.setTimeStamp(0.39611191451880423);
    msg.setSource(7995U);
    msg.setSourceEntity(55U);
    msg.setDestination(11269U);
    msg.setDestinationEntity(38U);
    msg.name.assign("PKADTKEMFIYHYFRRHMQZPOCVPRNGCSYBQRQGVMOCRZEECWCPNXMKEVFVQAIWLTOZWHAISHDQTTAR");

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
    msg.setTimeStamp(0.7689100145185473);
    msg.setSource(14207U);
    msg.setSourceEntity(24U);
    msg.setDestination(45222U);
    msg.setDestinationEntity(166U);
    msg.name.assign("NHNGPVAMGKRDHWONFZIWRDFZFOTHUCKIQBRPVBHQWAEAIJHEOSYLZPQRXWWERASEIOBNBQUJKGVXGNAQFKSBELXUUCXLKKDMPDBTCQBOZOIDIGXEVDIQFGGPNGLMXOSUGJTTYVDBKEPWTCHHFSECXOXHTZSLUA");

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
    msg.setTimeStamp(0.255312829729894);
    msg.setSource(63848U);
    msg.setSourceEntity(111U);
    msg.setDestination(15594U);
    msg.setDestinationEntity(64U);
    msg.name.assign("LDNLRYCZLRIECLZPXYKWHBWPBKNRXELNCKMHAJJLZVGFGUUDSRRFPDZDAWKPEXQBJSJWXSEPFJMOYNYFXSBIQZGHDOZGMJONSTAFIJWYEXBYVYDRBMHTVKAGKZIODGZYVGEHTQSMXMCQYIBIOIHQVEEOFTINPTSVPPUUHLGUVBNDR");

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
    msg.setTimeStamp(0.24127261730618654);
    msg.setSource(63903U);
    msg.setSourceEntity(89U);
    msg.setDestination(44791U);
    msg.setDestinationEntity(139U);
    msg.name.assign("LWESHBAWEIKLSOUESZKJNRGYXRNFMLGQYZVIABQVTUYZRULIFBPJTZPFQOJVJTDLGPHCKMJDFTTYKDAVEKRKEZXEEJGDAPLOXXSGZNPVUOOREHENHCTQIUFTDHSQSCPXOVMMXDOZYNIPLQCRTWOBHKDCWIUKUVKAFQJNC");

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
    msg.setTimeStamp(0.6992144258241861);
    msg.setSource(26857U);
    msg.setSourceEntity(61U);
    msg.setDestination(10395U);
    msg.setDestinationEntity(16U);
    msg.name.assign("OFUNDQFRDPHSRQYLQGOCUJEKPVHNZUOWYFMWCOYHCKTGVJWFSWKRXYCKIJPMQVDCDZUSGWLXIYZIANPYFIWEBARNIJKUILFBOPSCRSNBCWRTXERMGUAVKDUMAGQJPXUOYEIHOGWFHAVFFVJGVDSSVFEBCBHGWRKSSXBAQEXAMOAXTMEQHMDEBPENLTEZIKBMXJJCLPTNDMDXMIZTXAWURHNLIT");

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
    msg.setTimeStamp(0.43110507884948035);
    msg.setSource(2391U);
    msg.setSourceEntity(18U);
    msg.setDestination(22581U);
    msg.setDestinationEntity(177U);
    msg.name.assign("IHPYWNMAMWEUQULKGCNRIHMKPKPZQSJHBZDXHSZQCKYTXTDBLFMSGNKBSVBQXJLNOUMWJZTBKNXUFQLUIORXZOQBPVLYGTQAAMCHFPWVISOLWDFTKEAHNIDQCKRUVMPEVGIZIXSFSRUWDABXEYLRVGENLWVKJIUIGZEMUOBZMADWCJMRDXJZYEYZRP");

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
    msg.setTimeStamp(0.7650101507452385);
    msg.setSource(61590U);
    msg.setSourceEntity(88U);
    msg.setDestination(33717U);
    msg.setDestinationEntity(240U);
    msg.type = 235U;
    msg.error.assign("XREGHLALRSQHATWDXZKOSUJMCTFDVKTUOCJBWLOZOVNMUEHDIISQHIQUMFJZQWXWZUGNYEINYMYEHGETRPLZWSAXKAXFJPEBTMRQGLKHMLQYCBBIWKTSPIRVF");

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
    msg.setTimeStamp(0.7877696467680353);
    msg.setSource(10673U);
    msg.setSourceEntity(27U);
    msg.setDestination(13930U);
    msg.setDestinationEntity(186U);
    msg.type = 137U;
    msg.error.assign("LJLSRDHNVMBKSKMKQVXRGUPNUEYTBKHUWCYAFPLWBVHTFOIWBYBLTIPSEDDYDCAIVOFJNLLHHG");

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
    msg.setTimeStamp(0.6237548979310575);
    msg.setSource(9693U);
    msg.setSourceEntity(19U);
    msg.setDestination(35708U);
    msg.setDestinationEntity(26U);
    msg.type = 110U;
    msg.error.assign("DFYXMIJKQQMOEZLWRJGGLICYOLRDSGCAEKMNBTJLDOV");

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
