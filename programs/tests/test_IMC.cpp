//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: c2a8b29e93b472d03b1c27abe7fc2e0c                            *
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
    msg.setTimeStamp(0.207094687716);
    msg.setSource(9579U);
    msg.setSourceEntity(179U);
    msg.setDestination(60275U);
    msg.setDestinationEntity(50U);
    msg.state = 78U;
    msg.flags = 34U;
    msg.description.assign("VINNMKNOROEEPAPHWQUDDBTNBIWYXUJGWOARRHEIZHSVLTSLVAAYTHKEBJLUPJDWOSWZZCNJCOCREUTQNBQGOMBPMZDXIFQPCBAMYOGCCITDYNPARSXIZNJQRTEHJXOWLWZQLHDIPNJSMXKBRAAHFWQGVGVHSDXZTMMRMVHQXAIESUVKUKLAXFIVYCYVFKNTDBKELYCUJWYWSUVOSDPLMGIFRXBCGYQCJZLMHKFEGLSGXJUQEGYTZF");

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
    msg.setTimeStamp(0.840981114105);
    msg.setSource(16319U);
    msg.setSourceEntity(59U);
    msg.setDestination(21788U);
    msg.setDestinationEntity(233U);
    msg.state = 107U;
    msg.flags = 220U;
    msg.description.assign("EDVNEOJTDQFHCIBFDLUFCMLWTOCJDOQZTAUETMRGFGNJSCMYIOCOBRFAGAGACEXFDGZTVSHCKQLGOZZKZEULMYYSIWZXGJHGUYMETVVBRFHIPCWUTPYBVRAIBQAQIDNXAOEMFLWDYOVCXWKPQXRUATJKABMEMIIVLNVISQMHQXUOULBQPDGXPSZDRZPJVVZOQRLBWANJKM");

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
    msg.setTimeStamp(0.391756916672);
    msg.setSource(46249U);
    msg.setSourceEntity(38U);
    msg.setDestination(34375U);
    msg.setDestinationEntity(215U);
    msg.state = 17U;
    msg.flags = 200U;
    msg.description.assign("IYEOJJJDQLIKGOLWCWSCDAQQGVNFEN");

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
    msg.setTimeStamp(0.225608901819);
    msg.setSource(7608U);
    msg.setSourceEntity(137U);
    msg.setDestination(61156U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.913706212998);
    msg.setSource(6335U);
    msg.setSourceEntity(46U);
    msg.setDestination(61601U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.597153565999);
    msg.setSource(59378U);
    msg.setSourceEntity(19U);
    msg.setDestination(27341U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.833820808156);
    msg.setSource(28275U);
    msg.setSourceEntity(180U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(6U);
    msg.id = 1U;
    msg.label.assign("DGYDMOLZPMKITDXHASAGINORUFPPHRNIACWLSPXXZVBGQMTXMZNFOAQYHKRVVHOWWCWOWBNILLPOENIQEZZKBTROEABNJYCTYSSTMUMVJYN");
    msg.component.assign("CZBOLYVBOIMMIYIBQAVGQBDQEYRNKPJLJLERZYSUCQBUNEZWHNKDRUOTJEZUVRBZNLKSGYQEFHIVSMNHIPXJZFHNCDTYQKUTJTVCIXXKRDAADWGBQANQPKXJPPKQTSLAHHEZMETKVUJGMWWMLMPFBGXMURIOCUKFOMXZCNSNDHGYSXPMORIERDIALVWOCZAWTSABKTCIUUSEHPEFJYWVFGXDXOWNWJGLLVROPACAYSPFFGVW");
    msg.act_time = 55849U;
    msg.deact_time = 65101U;

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
    msg.setTimeStamp(0.203278337707);
    msg.setSource(6640U);
    msg.setSourceEntity(99U);
    msg.setDestination(65187U);
    msg.setDestinationEntity(82U);
    msg.id = 97U;
    msg.label.assign("HAETYNCPMZAQPIVOSXWUOZZIGZDKELCUU");
    msg.component.assign("YIOLXIHPSPGFKFUMMVOXMBOCBCZJMCZVRPHINEWHDKUUXQAHRFOZEXQIDBLGJZYXMPQUCNEAFIPOALHETEOAHASGLUYPLTLJWJRUMWSQTKERBWZIDGGTSYDYLLTCPUNIVNDWKQEKUKJYJTWJGKFMVQJABNVXFQSO");
    msg.act_time = 23207U;
    msg.deact_time = 41999U;

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
    msg.setTimeStamp(0.816355032167);
    msg.setSource(46407U);
    msg.setSourceEntity(191U);
    msg.setDestination(53970U);
    msg.setDestinationEntity(113U);
    msg.id = 75U;
    msg.label.assign("PMXLKOHKBXJNXEUFFYPROAAETQQKAMSQINYJXGTZZILWYSZLPJTGNLOKWPHVTUTDFWDAOENLVWYVKBSFQEFONHNMIUSLDBSWMBUURGPEIGBGDEMKOMDTEIJGVNPRJWBZYPWOICXHAGBHCUQPPTMCFQERREEXIIHODRKQBWJVNCVLAJLHQKYVTGIVYBZDCMDMBSZGNXJKZSKTXVFZYGJCWPXFURJHZCAVNX");
    msg.component.assign("UBASAFYOXIASKKWYHMRWQOQBRXXHTHSVKLUHMEHGIGBKUTYFWMPCFCDYQUNQJZXVFVRPZYDWLMAOEBHEARJDKZWBEIHFESSYMOQNNCGZLTCQXEBNZMTPTLLDWURGRLOSNCTDJLFOKMTYCVUURJLJZAOCPVGKYHWNIGZDPQBPMGXVKYIIDLGGKVQAUGOFIOPECYXWHANKSDBRRZDUCI");
    msg.act_time = 30231U;
    msg.deact_time = 46502U;

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
    msg.setTimeStamp(0.329006995966);
    msg.setSource(28990U);
    msg.setSourceEntity(186U);
    msg.setDestination(49843U);
    msg.setDestinationEntity(214U);
    msg.id = 77U;

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
    msg.setTimeStamp(0.205849299398);
    msg.setSource(44736U);
    msg.setSourceEntity(53U);
    msg.setDestination(51142U);
    msg.setDestinationEntity(180U);
    msg.id = 218U;

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
    msg.setTimeStamp(0.665952946121);
    msg.setSource(43492U);
    msg.setSourceEntity(197U);
    msg.setDestination(57752U);
    msg.setDestinationEntity(215U);
    msg.id = 73U;

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
    msg.setTimeStamp(0.423445168098);
    msg.setSource(33276U);
    msg.setSourceEntity(90U);
    msg.setDestination(24124U);
    msg.setDestinationEntity(245U);
    msg.op = 12U;
    msg.list.assign("VWPXIUVVKYWAVTHZJBJGROCNZFSOXPQALYZUMDFFVVPIWARNYNDJBPUKMQCFWBNKHPIAELYIMUQFAQCDIBCJCQZKLULXPSONYDALGUOTTEDTUAWSHFGMHBNIRSXYYQSEYCGGZOLEPQEMWIKJTGIGRLLRHZEBFAD");

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
    msg.setTimeStamp(0.877461922598);
    msg.setSource(22544U);
    msg.setSourceEntity(218U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(188U);
    msg.op = 11U;
    msg.list.assign("YXVQHEBKEVQZCLKAJJHGASBNVAFPZMHXKDDJFXQQUOZBHZIJSOACZMPASHDQLHVDRVKPMOZCPBDKQHFFTFTDTMBWLBLLQFYJO");

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
    msg.setTimeStamp(0.915414250427);
    msg.setSource(5421U);
    msg.setSourceEntity(174U);
    msg.setDestination(17853U);
    msg.setDestinationEntity(11U);
    msg.op = 195U;
    msg.list.assign("NRYZJFMMVIDNV");

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
    msg.setTimeStamp(0.429678592697);
    msg.setSource(3211U);
    msg.setSourceEntity(201U);
    msg.setDestination(26233U);
    msg.setDestinationEntity(55U);
    msg.value = 163U;

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
    msg.setTimeStamp(0.438690798426);
    msg.setSource(5912U);
    msg.setSourceEntity(53U);
    msg.setDestination(32284U);
    msg.setDestinationEntity(118U);
    msg.value = 176U;

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
    msg.setTimeStamp(0.0531882105384);
    msg.setSource(24060U);
    msg.setSourceEntity(202U);
    msg.setDestination(7240U);
    msg.setDestinationEntity(43U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.642577221413);
    msg.setSource(12941U);
    msg.setSourceEntity(242U);
    msg.setDestination(51935U);
    msg.setDestinationEntity(222U);
    msg.consumer.assign("BSFJHEVBKEPREIZYKFDKEIWXRAKUBVMQYVEEFLUSAUZWNBVUYLQKGCHQRTFZWOEBPFXXOYLLPMOCIU");
    msg.message_id = 10370U;

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
    msg.setTimeStamp(0.0460351772663);
    msg.setSource(51545U);
    msg.setSourceEntity(156U);
    msg.setDestination(54501U);
    msg.setDestinationEntity(244U);
    msg.consumer.assign("ENRNTZYMHYRVRWOPKHKKNTXMBBFNFSFMYQJITLAJSKDBVCPMPGVDKOJOFDYRZGTCQQAAQCLYSMONHFILEFCSZUVIZXVRQBRAIVAUPAYFQHBATYUVWMCZATBWEMSUEPPXQPIRJIIUMWQEPDIGESRCOOTYWIMVXDXXEGDBZFWLJHYHEGULJLSPLKGKGUHDUBONWTCARJLPJOMODLDWTKXQBFGQEZJXVAKNLVDNHCRSGSOUWENI");
    msg.message_id = 11903U;

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
    msg.setTimeStamp(0.0617322823394);
    msg.setSource(54587U);
    msg.setSourceEntity(158U);
    msg.setDestination(22072U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("WVMEMWTFKNXUUPJLVBEXTHLEFFHASQVQRUXSZKHYCBJLCYCFSHMWUIMUCTOTOJSLQDQGZPEMRDXZKOCPNADCCAQARRNIDPTOWAOJACDLBTYKQVPNINREEMSOIGOWIUQUQYGVGLNVNIZGDBYWAIESYNWPVYHFFLBWZFACYXSGVKJATASDWRRNZIOBMSEEHMJBHHKLBFPYXKJXTONPQROHPJDTRBZKVXHGJGJX");
    msg.message_id = 16441U;

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
    msg.setTimeStamp(0.600982446677);
    msg.setSource(59175U);
    msg.setSourceEntity(41U);
    msg.setDestination(57370U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.285002762806);
    msg.setSource(43100U);
    msg.setSourceEntity(85U);
    msg.setDestination(15477U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.384938627144);
    msg.setSource(8512U);
    msg.setSourceEntity(241U);
    msg.setDestination(26736U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.468676221405);
    msg.setSource(56437U);
    msg.setSourceEntity(210U);
    msg.setDestination(53517U);
    msg.setDestinationEntity(39U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.401358862649);
    msg.setSource(10890U);
    msg.setSourceEntity(109U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(192U);
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
    msg.setTimeStamp(0.107897462804);
    msg.setSource(53294U);
    msg.setSourceEntity(227U);
    msg.setDestination(44625U);
    msg.setDestinationEntity(69U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.00685455648245);
    msg.setSource(38963U);
    msg.setSourceEntity(27U);
    msg.setDestination(5818U);
    msg.setDestinationEntity(173U);
    msg.total_steps = 156U;
    msg.step_number = 193U;
    msg.step.assign("MPZPOEIZRRHBMEJMILVWRXJBGSCOISYPTNVAHDFQSYCXCTHHDMBNQTLJLJKLFYQMTHLAW");
    msg.flags = 136U;

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
    msg.setTimeStamp(0.300258530256);
    msg.setSource(19854U);
    msg.setSourceEntity(254U);
    msg.setDestination(62460U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 225U;
    msg.step_number = 189U;
    msg.step.assign("BVQLPBSHUMVNTLDYQFVSRXFGPWEKYPHFMZCTUEHQVSFQMJZXJORYZNIXSEOFFCEEFBJPIRKQRLBSWWPUWQIGKPRQHIHXAYZJNJLIAHBKPTWURXIFNCMAVUNMCGWCDSDTWNNELZBKSVMXOJYQOBAUUOXWEVFODDYTDMVUZLXRLPIYGXGJOKIGZMMGLLFVDG");
    msg.flags = 35U;

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
    msg.setTimeStamp(0.448351989089);
    msg.setSource(45125U);
    msg.setSourceEntity(228U);
    msg.setDestination(13062U);
    msg.setDestinationEntity(187U);
    msg.total_steps = 84U;
    msg.step_number = 92U;
    msg.step.assign("DMEAENFHEIKIZZQNXRFJZEMANX");
    msg.flags = 157U;

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
    msg.setTimeStamp(0.577076740764);
    msg.setSource(27949U);
    msg.setSourceEntity(216U);
    msg.setDestination(43880U);
    msg.setDestinationEntity(36U);
    msg.state = 93U;
    msg.error.assign("KBFPOZCEREXABTBWFITOFMHTMHNPJSCTPRYNARGKOQYXFZXGZXDHDQIFHNSJWWOVBGZJPFMMXLEADRCDPXBJQLTERDWIYFQHENYEKVQLKOMPLFBASAUMSFJUMMAVBTCZIUABJPNYLNLTABJUUKNIRQHOGGDIGVYLPMWYRCTVTWUNCAIOIFXTWYDDLZBDQHXUAEDVRKQJHKJZQMGXNRWYZHZSSVOLCPSUCVHZSJVWLERCUCKSEIKG");

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
    msg.setTimeStamp(0.973363210323);
    msg.setSource(41078U);
    msg.setSourceEntity(93U);
    msg.setDestination(35149U);
    msg.setDestinationEntity(71U);
    msg.state = 34U;
    msg.error.assign("DRCBEYTCJWATVUXLSKNXKAYXHUUGIASBJBNXZDWRCBVFKKZUCVDATODAQOQGEVVMLXKKWFZGOYSCGICRCDJEPYRRYYNUVSFBECZLJEUPZFSUNLWAIZAQFEMHTPOGSHNNNOGBWXXTMRHRMLRQDERLFVPMQITUDIYTI");

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
    msg.setTimeStamp(0.543338538409);
    msg.setSource(30746U);
    msg.setSourceEntity(121U);
    msg.setDestination(38873U);
    msg.setDestinationEntity(99U);
    msg.state = 176U;
    msg.error.assign("WDUDPSYSWPGNCRQCKFJKLBVWBSLSZYJOBSVAKHCQTINXEFM");

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
    msg.setTimeStamp(0.486676608093);
    msg.setSource(4214U);
    msg.setSourceEntity(233U);
    msg.setDestination(43893U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.900840590402);
    msg.setSource(60758U);
    msg.setSourceEntity(28U);
    msg.setDestination(47056U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.309453670513);
    msg.setSource(2771U);
    msg.setSourceEntity(177U);
    msg.setDestination(41205U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.153814938487);
    msg.setSource(62038U);
    msg.setSourceEntity(163U);
    msg.setDestination(54126U);
    msg.setDestinationEntity(8U);
    msg.op = 67U;
    msg.speed_min = 0.57019620129;
    msg.speed_max = 0.326456465194;
    msg.long_accel = 0.355892145553;
    msg.alt_max_msl = 0.103904867359;
    msg.dive_fraction_max = 0.329703362407;
    msg.climb_fraction_max = 0.406173180324;
    msg.bank_max = 0.737223233088;
    msg.p_max = 0.304093956257;
    msg.pitch_min = 0.381192045483;
    msg.pitch_max = 0.207072012994;
    msg.q_max = 0.267366513508;
    msg.g_min = 0.319947031265;
    msg.g_max = 0.781823246763;
    msg.g_lat_max = 0.863671027173;
    msg.rpm_min = 0.389656410318;
    msg.rpm_max = 0.231839050452;
    msg.rpm_rate_max = 0.390861033096;

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
    msg.setTimeStamp(0.82062055453);
    msg.setSource(63144U);
    msg.setSourceEntity(37U);
    msg.setDestination(12540U);
    msg.setDestinationEntity(228U);
    msg.op = 111U;
    msg.speed_min = 0.76635615784;
    msg.speed_max = 0.494447201995;
    msg.long_accel = 0.822185079011;
    msg.alt_max_msl = 0.713986101068;
    msg.dive_fraction_max = 0.442284039767;
    msg.climb_fraction_max = 0.55851517682;
    msg.bank_max = 0.517492302992;
    msg.p_max = 0.0236847385765;
    msg.pitch_min = 0.911292888107;
    msg.pitch_max = 0.832516238654;
    msg.q_max = 0.437163699926;
    msg.g_min = 0.806123691663;
    msg.g_max = 0.122359004076;
    msg.g_lat_max = 0.0712788616252;
    msg.rpm_min = 0.832173443951;
    msg.rpm_max = 0.356202156251;
    msg.rpm_rate_max = 0.884127709676;

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
    msg.setTimeStamp(0.509717582142);
    msg.setSource(3598U);
    msg.setSourceEntity(223U);
    msg.setDestination(11541U);
    msg.setDestinationEntity(2U);
    msg.op = 171U;
    msg.speed_min = 0.604482494898;
    msg.speed_max = 0.967906355333;
    msg.long_accel = 0.00115706834697;
    msg.alt_max_msl = 0.917533600826;
    msg.dive_fraction_max = 0.921480220627;
    msg.climb_fraction_max = 0.660718349534;
    msg.bank_max = 0.515013103005;
    msg.p_max = 0.832990522549;
    msg.pitch_min = 0.651297252038;
    msg.pitch_max = 0.204437232824;
    msg.q_max = 0.154894137775;
    msg.g_min = 0.757235816728;
    msg.g_max = 0.792300827418;
    msg.g_lat_max = 0.441002237455;
    msg.rpm_min = 0.27006598772;
    msg.rpm_max = 0.714028680949;
    msg.rpm_rate_max = 0.00671566945667;

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
    msg.setTimeStamp(0.284992444643);
    msg.setSource(30920U);
    msg.setSourceEntity(227U);
    msg.setDestination(60763U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.982636286606);
    msg.setSource(23294U);
    msg.setSourceEntity(186U);
    msg.setDestination(23535U);
    msg.setDestinationEntity(193U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0627278967672;
    tmp_msg_0.lon = 0.365211728298;
    tmp_msg_0.alt = 0.775925981188;
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
    msg.setTimeStamp(0.24731234514);
    msg.setSource(60149U);
    msg.setSourceEntity(191U);
    msg.setDestination(1469U);
    msg.setDestinationEntity(155U);
    IMC::Docking tmp_msg_0;
    tmp_msg_0.target.assign("SXQTQZVMWKJRBMZGOMDMQFJOPQIYZCGXRURJIBJLMO");
    tmp_msg_0.station.assign("COBWTMQHSPCPIZESRJLWLHM");
    tmp_msg_0.speed = 0.664651128178;
    tmp_msg_0.speed_units = 80U;
    tmp_msg_0.lat = 0.632583848103;
    tmp_msg_0.lon = 0.35267112457;
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
    msg.setTimeStamp(0.0459681109375);
    msg.setSource(24033U);
    msg.setSourceEntity(31U);
    msg.setDestination(15279U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.474383959141;
    msg.lon = 0.14373988624;
    msg.height = 0.396044871416;
    msg.x = 0.155229298627;
    msg.y = 0.206959982287;
    msg.z = 0.100177951095;
    msg.phi = 0.587610191645;
    msg.theta = 0.490841144808;
    msg.psi = 0.120215057269;
    msg.u = 0.253661373081;
    msg.v = 0.160146514852;
    msg.w = 0.66454241041;
    msg.p = 0.633684415464;
    msg.q = 0.865268180728;
    msg.r = 0.822183121302;
    msg.svx = 0.127415827697;
    msg.svy = 0.625225431815;
    msg.svz = 0.145123007929;

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
    msg.setTimeStamp(0.10542577512);
    msg.setSource(43766U);
    msg.setSourceEntity(237U);
    msg.setDestination(34032U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.714664095149;
    msg.lon = 0.138730777959;
    msg.height = 0.100376394333;
    msg.x = 0.604132297718;
    msg.y = 0.827451399094;
    msg.z = 0.255428936621;
    msg.phi = 0.103974468078;
    msg.theta = 0.293691186045;
    msg.psi = 0.586743251374;
    msg.u = 0.214273631279;
    msg.v = 0.793297203964;
    msg.w = 0.379238170904;
    msg.p = 0.453045143502;
    msg.q = 0.0545865621442;
    msg.r = 0.878618172144;
    msg.svx = 0.780613911795;
    msg.svy = 0.962140130041;
    msg.svz = 0.731628466137;

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
    msg.setTimeStamp(0.112701010931);
    msg.setSource(22083U);
    msg.setSourceEntity(86U);
    msg.setDestination(43151U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.942523976968;
    msg.lon = 0.77138606211;
    msg.height = 0.690672960414;
    msg.x = 0.391523929824;
    msg.y = 0.750336837965;
    msg.z = 0.712644356933;
    msg.phi = 0.920012759229;
    msg.theta = 0.121491033443;
    msg.psi = 0.567424405204;
    msg.u = 0.103381576542;
    msg.v = 0.763115041327;
    msg.w = 0.590991460692;
    msg.p = 0.406805618224;
    msg.q = 0.246607541733;
    msg.r = 0.312777866552;
    msg.svx = 0.133629595795;
    msg.svy = 0.481654167299;
    msg.svz = 0.360737786109;

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
    msg.setTimeStamp(0.818150075294);
    msg.setSource(16951U);
    msg.setSourceEntity(37U);
    msg.setDestination(46947U);
    msg.setDestinationEntity(141U);
    msg.op = 58U;
    msg.entities.assign("WSCRIGGJSWPMRNOMYYJAXTGHOLSJWSIXDKCUDCTYMKZQEOBUTQPCUNJHIERIBXVHWLNDQOFKDXPVUDFLYMKOUZAWVDVSAVIQQJWPFMXPIHUTOEHHDSAQBIOTMIRZAYKFFUWC");

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
    msg.setTimeStamp(0.421718468138);
    msg.setSource(4113U);
    msg.setSourceEntity(108U);
    msg.setDestination(17374U);
    msg.setDestinationEntity(90U);
    msg.op = 186U;
    msg.entities.assign("LQOABRIKICUSKMFRCNYGEYNACKNVUDLJRTQILFWZRISBWGTNMVYGGPYCGXBUFHIATJWJNOXPIIXZRXZHRWNKQUOUXVSMPESOAMDMRYZTHODBLAFFEAFXLPQFZDXJIGEPJUKSXRPWQMKHZBAYSHLQABVDTOGUCUEGHEQARNLMTWBIWKOJYWDAVJQSDMPEJPHCJHCBYKMFQDYIPLKEVNTMSEUBWGQEKWVZRJNOHGSXOCCTD");

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
    msg.setTimeStamp(0.640128156579);
    msg.setSource(128U);
    msg.setSourceEntity(50U);
    msg.setDestination(28598U);
    msg.setDestinationEntity(156U);
    msg.op = 76U;
    msg.entities.assign("OIQHGMVCRRTXNAHCTSASLTVBDKGUDJOVXTPXHLDVNTQNYCKOZEMBQPXQMYFGIMIRFKBTISCATXHEJPYRUQRBJGIAQXXHJPHZJCOWLCAKYYMGBNVUZKPAVNZWQWCYLN");

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
    msg.setTimeStamp(0.106307271948);
    msg.setSource(40862U);
    msg.setSourceEntity(127U);
    msg.setDestination(19585U);
    msg.setDestinationEntity(52U);
    msg.type = 61U;
    msg.speed = 48668U;
    const char tmp_msg_0[] = {-120, 5, 48, -62, -25, 44, 113, 20, -78, -111, -17, 97, 81, -95, -29, -125, 115, 47, -74, 47, 76, 126, -29, -78, -80, -51, 103, 67, -124, -125, -16, 47, 122, 0, 15, 11, -97, -36, -110, 2, -122, 90, -66, -127, -96, 73, -17, -84, -50, 38, -75, 113, 110, -121, 80, -26, -14, -107, 54, -59, 69, 65, 82, 116, 15, -125, 22, 115, 36, 80, 124, -106, -113, -45, 113, 3, -100, 83, 123, 9, -52, 44, 48, 104, -40, 32, 106, -64, -124, 106, -120, 39, 35, -69, -80, -49, 34, 81, -74, 87, -74, 46, 34, 8, -10, 39, 87, -120, -16, -72, -34, -97, -40, 21, 19, 110, -94, -39, 65, -101, -41, -95, 69, 23, -32, -57, 20, 33, 16, 95, 22, 28, -8, -101, -106, -99, 52, -126, -67, -85, -28, -33, 116, 69, -10, -57, 53, -76, 117, -85, 74, -44, 1, -117, -62, -15, 1, -39, -33, 108, 13, -83, 123, 108, -105, -102, 80, -128, 21, -98, -57, -2, 85, -31, 38, -27};
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
    msg.setTimeStamp(0.785592030682);
    msg.setSource(21479U);
    msg.setSourceEntity(133U);
    msg.setDestination(61180U);
    msg.setDestinationEntity(132U);
    msg.type = 218U;
    msg.speed = 3225U;
    const char tmp_msg_0[] = {103, 6, 73, -24, -43, -125, 2, 14, -102, -42, 10, -52, -91, 40, -109, 83, -10, 40, -20, -122, 5, 23, 46, 84, 40, -102, 4, 29, -4, -8, -83, 43, -87, -5, -17, 71, 10, 80, -26, -50, -97, 118, 121, 114, -20, -12, 53, 29, 1, -95, 50, -108, -122, -31, 5, -25, 87, 75, 88, 75, 68, 83, -15, 94, -84, 73, -101, -45, 14, 94, 125, 75, 113, 64, 100, 23, 23, -78, -70, 81, -113, -40, 61, 101, 47, -119, -82, -11, -30, 60, -117, -105, 97, -48, 96, -84, 99, -91, 102, 58, 96, -28, -67, 34, 96, 1, -76, 91, -85, -42, -53, -80, -18, -45, 70, -98, -12, 85, 98, 83, 20, 123, -126, -81, -86, -125, -65, 49, -14, 74, -46, -91, -14, -115, -115, 3, 87, -123, 13, 85, 31, -63, -56, -60, -37, -11, -14, 76, -78, 123, -101, -75, 81, -25, -7, -65, -6, 83, 20, 29, -3, -84, -87, 57, 68, 39, -121, 59, 117, -99, -31, -121, 9, 4, 13, 13, 79, -45};
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
    msg.setTimeStamp(0.387656286339);
    msg.setSource(16111U);
    msg.setSourceEntity(106U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(16U);
    msg.type = 74U;
    msg.speed = 23036U;
    const char tmp_msg_0[] = {-18, -89, 98, 125, 123, 46, -88, -42, 52, -72, -16, -49, -81, -29, -1, -108, -67, 106, 105, 43, 21, 98, -33, -68, -113, 74, 0, 100, -31, 81, 12, 91, 12, -15, 116, -86, -8, -51, 96, 91, 112, -88, -5, -15, 28, 97, 63, -67, -108, -36, -44, 37, -121, -93, 0, 46, -81, -92, -55, 119, 89, 7, 38, -72, -94, 38, -50, -28, -23, -79, -32, 17, -123, 98, 84, -119, -20, 59, 113, 78, -2, 70, -123, -40, 97, 11, 13, -16, -76, -127, -25, 4, 107, 16, 5, 65, -37, -16, 123, -74, 10, 110, -81, 123, -18, 25, -5, -123, -121, 3, -78, 76, -116, 89, -104, -118, 37, -84, -44, 121, 98, 97, -109, 48, 99, -98, 86, -100, 102, -55, 124, 63, -111, 27, 100, -75, -22, 74, -75, -94, -29, 26, -98, -78, 6, 53, -6, 61, 29, -101, -3, -95, -22, -107, 28, 86, -77, 33, 17, -115, 24, -35};
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
    msg.setTimeStamp(0.234054253908);
    msg.setSource(55051U);
    msg.setSourceEntity(139U);
    msg.setDestination(46808U);
    msg.setDestinationEntity(115U);
    msg.op = 130U;
    msg.tas2acc_pgain = 0.145690241567;
    msg.bank2p_pgain = 0.183965555909;

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
    msg.setTimeStamp(0.894975503954);
    msg.setSource(38032U);
    msg.setSourceEntity(222U);
    msg.setDestination(42969U);
    msg.setDestinationEntity(143U);
    msg.op = 60U;
    msg.tas2acc_pgain = 0.535024688849;
    msg.bank2p_pgain = 0.115897813493;

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
    msg.setTimeStamp(0.551071629922);
    msg.setSource(2359U);
    msg.setSourceEntity(30U);
    msg.setDestination(9503U);
    msg.setDestinationEntity(37U);
    msg.op = 234U;
    msg.tas2acc_pgain = 0.277258848539;
    msg.bank2p_pgain = 0.885626966436;

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
    msg.setTimeStamp(0.734567931368);
    msg.setSource(13131U);
    msg.setSourceEntity(66U);
    msg.setDestination(63498U);
    msg.setDestinationEntity(240U);
    msg.available = 1742920913U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.719937990952);
    msg.setSource(46464U);
    msg.setSourceEntity(40U);
    msg.setDestination(63171U);
    msg.setDestinationEntity(52U);
    msg.available = 2902264215U;
    msg.value = 207U;

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
    msg.setTimeStamp(0.548023338765);
    msg.setSource(2280U);
    msg.setSourceEntity(170U);
    msg.setDestination(64998U);
    msg.setDestinationEntity(193U);
    msg.available = 3809732451U;
    msg.value = 203U;

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
    msg.setTimeStamp(0.52456548706);
    msg.setSource(31430U);
    msg.setSourceEntity(184U);
    msg.setDestination(17513U);
    msg.setDestinationEntity(164U);
    msg.op = 124U;
    msg.snapshot.assign("UUKTBVNMOLODXNVEHBOKWWOHNLLORUVXXYDQEQIGQPNRAGKSLLTFZAMHHBMOLPWJOHSHVADGWFKDDTCBEMWGMQFMSKRIJNPDJZBMFVNMSFUPXZSVVRYIHGSTHGIQMURZAXKARCBHNJAEXZDCCGVYWIIZPECITFBVTCOWTLWXYFKEYJHAURLKUUFPNXVSUTSCEOSJZFAEDIGEJLXRPQPKYGZBCPNYYJAZYDBZUXPQMWCIRC");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 203U;
    tmp_msg_0.entities.assign("EGTRKFIBBVPWPSSDI");
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
    msg.setTimeStamp(0.77641326603);
    msg.setSource(56759U);
    msg.setSourceEntity(66U);
    msg.setDestination(27526U);
    msg.setDestinationEntity(192U);
    msg.op = 21U;
    msg.snapshot.assign("CSSZEGRFNJPYLFOGZDBUHCQRDBPAVFMCPPZRZW");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 21259U;
    tmp_msg_0.type = 120U;
    tmp_msg_0.utc_year = 40494U;
    tmp_msg_0.utc_month = 79U;
    tmp_msg_0.utc_day = 210U;
    tmp_msg_0.utc_time = 0.696523382512;
    tmp_msg_0.lat = 0.728620753294;
    tmp_msg_0.lon = 0.546088513993;
    tmp_msg_0.height = 0.081663845175;
    tmp_msg_0.satellites = 222U;
    tmp_msg_0.cog = 0.466022986899;
    tmp_msg_0.sog = 0.78030748445;
    tmp_msg_0.hdop = 0.488470200367;
    tmp_msg_0.vdop = 0.852044512422;
    tmp_msg_0.hacc = 0.628507770617;
    tmp_msg_0.vacc = 0.257991222147;
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
    msg.setTimeStamp(0.546951440639);
    msg.setSource(25668U);
    msg.setSourceEntity(113U);
    msg.setDestination(24485U);
    msg.setDestinationEntity(84U);
    msg.op = 55U;
    msg.snapshot.assign("SYPOKWQVOGACPCLGTIYHMRVHLSXQRVGSKLKRIMGPTZIWLHWKMYEN");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 61173U;
    tmp_msg_0.lat = 0.403396724833;
    tmp_msg_0.lon = 0.36423582749;
    tmp_msg_0.z = 0.224582722077;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.pitch = 0.182075800338;
    tmp_msg_0.amplitude = 0.930560270985;
    tmp_msg_0.duration = 25075U;
    tmp_msg_0.speed = 0.764139892789;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.radius = 0.4876764089;
    tmp_msg_0.direction = 193U;
    tmp_msg_0.custom.assign("XRNQSEFKPNUAJNPCYMPQTQSQEVOXJUAWGHGHRGWRPQRMOKFRBAVIC");
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
    msg.setTimeStamp(0.373021757741);
    msg.setSource(42361U);
    msg.setSourceEntity(126U);
    msg.setDestination(58658U);
    msg.setDestinationEntity(76U);
    msg.op = 195U;
    msg.name.assign("JINVTRQEEZTRAOWZDSKJGRZYJCZDSWLFPQAZOPDFQYLBEMOHLVTSLGSEWEUAMYNCGPBBKBJKFXFUGIPUCWWQNAPEAQVZGWQIMTVBNARGSGHHNSYTOHERJTHILIVFGWIBRYXCFZHZKFFZMKRSIMLODKDKXQTOOKJDJOPCQHQNUGQ");

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
    msg.setTimeStamp(0.20082105907);
    msg.setSource(62013U);
    msg.setSourceEntity(167U);
    msg.setDestination(41160U);
    msg.setDestinationEntity(178U);
    msg.op = 118U;
    msg.name.assign("BNELKVIBFLQJPMAHUSLZNAVEESDWNAILPDNMHFIWGSYTGHWDYMYWZAGONFMZIQQCCTTHSZFOURUGABZXKWUHTQPMEPMAXHNVXCLOICEVWXAVXAQNMBDKKDRVUJIBVMWKQDUUSJMCSWKDPGFOVFGFTZLCRDYEQRCZHKYWPQENKOXAIOGTPNHZYOXORECLUZFXEYGBNBWJKEXZYKBJLRRRPAOSJDBOGGICIDYUTSYUTH");

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
    msg.setTimeStamp(0.296054205145);
    msg.setSource(26098U);
    msg.setSourceEntity(204U);
    msg.setDestination(21440U);
    msg.setDestinationEntity(113U);
    msg.op = 167U;
    msg.name.assign("XLPWLFFIUPGUMTHUFISTZPTOKVRJMIMNNYSQBPRASXAVEUIZDWKQCQASEJNXWOZKYXTOKPFLUVAZBHGTRDIICYDZVRYWJAHHRNCMS");

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
    msg.setTimeStamp(0.371226845268);
    msg.setSource(34327U);
    msg.setSourceEntity(75U);
    msg.setDestination(38018U);
    msg.setDestinationEntity(207U);
    msg.type = 73U;
    msg.htime = 0.367088556925;
    msg.context.assign("MPTNHDHZWASKEBXGNKJSOQEADINHCBVPXTDDCFIDAZHPQLSSZSWNEMBQKDVBXMOINXHU");
    msg.text.assign("MHJITHXWEJSNBGHWPCWKVCMAFLXIBNSPIRIXPKOCNSGOLINUNXR");

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
    msg.setTimeStamp(0.265726143554);
    msg.setSource(20931U);
    msg.setSourceEntity(63U);
    msg.setDestination(29126U);
    msg.setDestinationEntity(219U);
    msg.type = 96U;
    msg.htime = 0.893555019306;
    msg.context.assign("MPMZGLUYMJPCVHQDYSECIONWGNZJUJOZFCXISAXKYFPRUOVBXMWS");
    msg.text.assign("EDJXLDHPJSMMAKYOWHISTSFTSJCBVEJMQPQFIBSCOTWPRRQRXKLOJBPUKRVGPBGYDECWIWOMBNDCZOQLMVNQXAQKAIYFYGTEGZEKRCVWVJKDVWRBTZMXJGMWAJL");

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
    msg.setTimeStamp(0.275929942848);
    msg.setSource(39800U);
    msg.setSourceEntity(31U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(135U);
    msg.type = 8U;
    msg.htime = 0.283263299423;
    msg.context.assign("KDDFFYUYPWOLSWAVTCIZKTBQVKRWNSBUABJBSYHDRSXEUZMEMWCQEJLHRLRVRMNHSSSNQRABCMSCPLXGEKJHJTVXNNVLAJGONAPTCSHDHWOTOKPPBBIATNEMOKDDPSAVQPFXUZFMAFBFZGXJOAYCMJFJPQZUGIUXZGZWDVXBOWDMQRIWLEIXYEDQ");
    msg.text.assign("GVBQOATFIBADHQLWVYFPRXAIKSUMHMWOSZRAXVODVTSNLAWTZUPHNWUTBOHKABGXSYZYYJQWUYONIZCHCPQDPLQIJLMFLRSGDOETBUGUXQXTSZGXMWKTIRYZDGCRNB");

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
    msg.setTimeStamp(0.715062515942);
    msg.setSource(15144U);
    msg.setSourceEntity(122U);
    msg.setDestination(23579U);
    msg.setDestinationEntity(87U);
    msg.command = 99U;
    msg.htime = 0.769229437889;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 45U;
    tmp_msg_0.htime = 0.832250318313;
    tmp_msg_0.context.assign("IYXJHISGFCTVUGPSDJLLQHCQNEUQYBLAVUPXDEPDXSKAXBIVCSQWZNUBHFMVYPSTCWJRVKYLIWWLIBKMRWEQJMSHMORKMJIRRDMDLVSFHKEXQACFSW");
    tmp_msg_0.text.assign("PCRUVJIZRSYWIRAALZKJRGQRZPV");
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
    msg.setTimeStamp(0.284783515013);
    msg.setSource(7340U);
    msg.setSourceEntity(132U);
    msg.setDestination(36104U);
    msg.setDestinationEntity(225U);
    msg.command = 238U;
    msg.htime = 0.39715507447;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 131U;
    tmp_msg_0.htime = 0.822437437103;
    tmp_msg_0.context.assign("NRWOAVBDOAUXMXUDKOFGDYNLRWOZ");
    tmp_msg_0.text.assign("PZVGVLSRPEO");
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
    msg.setTimeStamp(0.665827543529);
    msg.setSource(16664U);
    msg.setSourceEntity(216U);
    msg.setDestination(58948U);
    msg.setDestinationEntity(141U);
    msg.command = 199U;
    msg.htime = 0.82846064404;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 128U;
    tmp_msg_0.htime = 0.818311796107;
    tmp_msg_0.context.assign("DQCJSYNDGTRSUHIXJCHFJYSAEEALWUVNKVTKWFQPLOSVZCTWAFUPEZOEPMONCIZSTXTIOBMXYLIRZAVIMKNAGGMCQRPWTNYVQMJDZXHKFP");
    tmp_msg_0.text.assign("CQMNYXPZWZVE");
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
    msg.setTimeStamp(0.00430566257184);
    msg.setSource(34092U);
    msg.setSourceEntity(179U);
    msg.setDestination(44014U);
    msg.setDestinationEntity(76U);
    msg.op = 250U;
    msg.file.assign("IULPUUXHCCYEMYEJHHUYEPNISOUDPEJVOKPSULWSMYUIVQPKGYGNDHSIGWRZPBSFLACRHSWXNXCTRAWGBVVQADDVMNRTLOQFKDZGXNFBWBOINEQRLQYCW");

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
    msg.setTimeStamp(0.190923676978);
    msg.setSource(36159U);
    msg.setSourceEntity(103U);
    msg.setDestination(30388U);
    msg.setDestinationEntity(223U);
    msg.op = 100U;
    msg.file.assign("XXYUZCAUQJENWPLQHODJPTLQYMZRINQTWSGKAZFBCVCOWZDCLKZNLVFOVSFXPTMGVHFLBHBNKKAEDJQMGHHWIGHFFTQAAIZIKLDRFKROFVGUVCWDJTSBTCOGAVHTJUEOVXWJXYUTWSMXYMPVMPBMUETJKQ");

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
    msg.setTimeStamp(0.828361069599);
    msg.setSource(49084U);
    msg.setSourceEntity(126U);
    msg.setDestination(18490U);
    msg.setDestinationEntity(234U);
    msg.op = 111U;
    msg.file.assign("EYEQQMNMZQYNNMOKGRDMMFJWULMOSUGHTFWMEHJRDRYDCWWCAMSABVJWYPFKSGBLUKQCTDFVIPYNJSTJCTPZEXNVHYVTOEFBIUGOJQDKANVKNECVUUBXGDDSGADCAYRVVNQLIMSLIPVH");

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
    msg.setTimeStamp(0.712299356221);
    msg.setSource(56914U);
    msg.setSourceEntity(247U);
    msg.setDestination(57893U);
    msg.setDestinationEntity(54U);
    msg.op = 240U;
    msg.clock = 0.423019388199;
    msg.tz = 5;

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
    msg.setTimeStamp(0.762766630726);
    msg.setSource(61966U);
    msg.setSourceEntity(232U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(19U);
    msg.op = 224U;
    msg.clock = 0.553925321522;
    msg.tz = -96;

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
    msg.setTimeStamp(0.0166808227579);
    msg.setSource(59247U);
    msg.setSourceEntity(133U);
    msg.setDestination(38107U);
    msg.setDestinationEntity(80U);
    msg.op = 142U;
    msg.clock = 0.750710958454;
    msg.tz = 54;

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
    msg.setTimeStamp(0.335154095431);
    msg.setSource(2971U);
    msg.setSourceEntity(186U);
    msg.setDestination(48032U);
    msg.setDestinationEntity(56U);
    msg.conductivity = 0.110791079111;
    msg.temperature = 0.848890122003;
    msg.depth = 0.299174816304;

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
    msg.setTimeStamp(0.171379466805);
    msg.setSource(40048U);
    msg.setSourceEntity(8U);
    msg.setDestination(34659U);
    msg.setDestinationEntity(247U);
    msg.conductivity = 0.684038686024;
    msg.temperature = 0.459759308959;
    msg.depth = 0.903973780939;

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
    msg.setTimeStamp(0.8291005458);
    msg.setSource(23451U);
    msg.setSourceEntity(144U);
    msg.setDestination(33818U);
    msg.setDestinationEntity(187U);
    msg.conductivity = 0.471344224071;
    msg.temperature = 0.892182269774;
    msg.depth = 0.46363239742;

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
    msg.setTimeStamp(0.258166656892);
    msg.setSource(24467U);
    msg.setSourceEntity(183U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(136U);
    msg.altitude = 0.919616852115;
    msg.roll = 11942U;
    msg.pitch = 63843U;
    msg.yaw = 49879U;
    msg.speed = -27582;

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
    msg.setTimeStamp(0.471284017254);
    msg.setSource(37234U);
    msg.setSourceEntity(188U);
    msg.setDestination(45750U);
    msg.setDestinationEntity(219U);
    msg.altitude = 0.86161844063;
    msg.roll = 703U;
    msg.pitch = 28076U;
    msg.yaw = 15122U;
    msg.speed = 24217;

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
    msg.setTimeStamp(0.658910661985);
    msg.setSource(36381U);
    msg.setSourceEntity(179U);
    msg.setDestination(37831U);
    msg.setDestinationEntity(187U);
    msg.altitude = 0.797823388823;
    msg.roll = 17299U;
    msg.pitch = 56809U;
    msg.yaw = 60291U;
    msg.speed = 26294;

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
    msg.setTimeStamp(0.0268537947252);
    msg.setSource(21348U);
    msg.setSourceEntity(145U);
    msg.setDestination(6375U);
    msg.setDestinationEntity(123U);
    msg.altitude = 0.279922213131;
    msg.width = 0.238361674756;
    msg.length = 0.538489026394;
    msg.bearing = 0.222352106844;
    msg.pxl = 30912;
    msg.encoding = 163U;
    const char tmp_msg_0[] = {20, -117, 105, -29, -11, 120, 34, 77, 95, 106, -107, -80, 102, 91, -89, -104, -116, 49, 94, 46, 104, 83, 100, 36, -41, -24, 53, -55, 114, -73, 63, -21, -17, 58, -80, -46, -7, 104, 93, 4, 110, -128, -59, 108, -64, 85, -100};
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
    msg.setTimeStamp(0.0173573437349);
    msg.setSource(5809U);
    msg.setSourceEntity(154U);
    msg.setDestination(29593U);
    msg.setDestinationEntity(86U);
    msg.altitude = 0.918324368732;
    msg.width = 0.788740174262;
    msg.length = 0.779433317855;
    msg.bearing = 0.595083558346;
    msg.pxl = -14292;
    msg.encoding = 28U;
    const char tmp_msg_0[] = {69, -95, -120, -11, -29, 17, 109, 108, 76, -21, 110, 105, -2, -103, -12, -76, -91, 117, 45, 106, -9, 105, 97, 95, 110, 105, -21, 121, 79, 45, -46, -37, 36, 29, 123, 59, 0, -38, 119, 23, -115, 119, 96, -17, -12, 63, -62, 49, 85, -40, 71, -59, -13, -100, 74, -22, -98, 43, 31, -121, 100, 79, 16, 19, 116, -63, 98};
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
    msg.setTimeStamp(0.226517495192);
    msg.setSource(27360U);
    msg.setSourceEntity(108U);
    msg.setDestination(57733U);
    msg.setDestinationEntity(65U);
    msg.altitude = 0.494814183814;
    msg.width = 0.917870270374;
    msg.length = 0.289248355482;
    msg.bearing = 0.193434346292;
    msg.pxl = 10057;
    msg.encoding = 178U;
    const char tmp_msg_0[] = {23, 22, 120, 6, 9, -126, 3, -103, 82, 30, 60, -124, 57, -65, -95, 86, 50, -113, 0, 57, 70, 2, -2, -101, -27, -30, 38, -68, 27, -55, 32, -92, 121, 120, 39, 79, 118, 65, -35, 3, 46, -91, 118, 6, 50, -73, -82, 24, 124, 10, 50, 71, 113, -109, 123, -116, 115, 86, -6, 61, 91, 48, -12, -124, 95, -125, 83, 113, 87, -128, 86, -23, 76, 123, 39, -9, 42, -89, 53, -114, 57, -37, -32, 39, 83, -127, -25, 118, 19, -55, -64, 100, -74, 74, -72, 9, 40, -24, -36, 24, -4, 111, -123, 13, 52, -108, -124, -80, -12, 20, -36};
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
    msg.setTimeStamp(0.813893893417);
    msg.setSource(48899U);
    msg.setSourceEntity(237U);
    msg.setDestination(6065U);
    msg.setDestinationEntity(178U);
    msg.text.assign("AECJFUKMOCSXCEDZVQDGIWKMUGGESPUYNKXIJVJKTXHYMHYPBSJNROXNBQQUSPWVIQDEMVQUATTRDRLCAMVFTFSFWDWAIOZPNKWTSMONMKGXSBJTIOKGRPJDCYBDQPPLRJHGEILLGDIEBFCXHFQEJAVLXWHELFCVIT");
    msg.type = 213U;

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
    msg.setTimeStamp(0.105977355793);
    msg.setSource(11781U);
    msg.setSourceEntity(14U);
    msg.setDestination(55537U);
    msg.setDestinationEntity(86U);
    msg.text.assign("VMULGOZPGRTRAFILCNRKYYOGHUQTGFPSXCWLRVAMQNUQHLPWANLUEJYETCWNIUYWQKXE");
    msg.type = 119U;

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
    msg.setTimeStamp(0.536704518073);
    msg.setSource(44914U);
    msg.setSourceEntity(135U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(131U);
    msg.text.assign("QUUKPYNCWMYBBFWLIOCIVUJAKAFZGEKVUDSFBNQGZCQOLLBHCTONCLPVOPVBDHAFUZIKGRSZVJXT");
    msg.type = 181U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.405408049338);
    msg.setSource(32126U);
    msg.setSourceEntity(90U);
    msg.setDestination(40121U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.552408185315);
    msg.setSource(34332U);
    msg.setSourceEntity(24U);
    msg.setDestination(35454U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.636753652406);
    msg.setSource(8832U);
    msg.setSourceEntity(62U);
    msg.setDestination(59209U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.887135866536);
    msg.setSource(25626U);
    msg.setSourceEntity(36U);
    msg.setDestination(34668U);
    msg.setDestinationEntity(247U);
    msg.sys_name.assign("QODTOZKLYWBAQOPVBBXHCPVNGFAIATCWHXZOULXUVLPNELHFPDNMYLRIVKZTHRWKJVCXYQXGGCMVFJSXEBMPEJWECOZAMKSRLVFWGIQEUKERXKSEBZFZSHWDMNOIJTZAURTDHUDOYLQZYWMTYWENPSJHYMKYQUMOVFEILFARNKDSJGRQSWWYBIAADNRSSHBUBJIZOGMZSJIGCERFYTDNPLAOCNIJBIQDTX");
    msg.sys_type = 127U;
    msg.owner = 47043U;
    msg.lat = 0.939981907604;
    msg.lon = 0.119242561752;
    msg.height = 0.922089433903;
    msg.services.assign("PRAVKYFMNGOHKELMHKIYLGAODUNKGNVLDSDVYJYJLODZXC");

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
    msg.setTimeStamp(0.827551671992);
    msg.setSource(14207U);
    msg.setSourceEntity(90U);
    msg.setDestination(8166U);
    msg.setDestinationEntity(149U);
    msg.sys_name.assign("UZURNSCDFXPAPBHAEPTVWBXRRIRRXIKZAWGNVEPEVMEYQDBKEWZJCPMLRUKZQFQFLHLZTMKDWGOCEOMPBIFRCLCYLKGNHLEJMJKQUYQTFGXHDNSBJQQNZXPGOBKQIYANJVYRIBNFWYMCOLSAURZCGYIADWIYSHEUVOUYAEZKF");
    msg.sys_type = 107U;
    msg.owner = 48034U;
    msg.lat = 0.962111536078;
    msg.lon = 0.90608401706;
    msg.height = 0.609953748013;
    msg.services.assign("GMMPSNOQVASYULZFIMWQVCGAMHXGIEWNLHXKZPEDDUZHLDEACFNHSQXTGXERMYUYFBICCATQTRZWGWSTNTYPIGJBBDOICUGVUEINOPICOUFELWWSFKPZONDZYPBXJKLSRNUSYPMBBZIFLMEAHLJC");

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
    msg.setTimeStamp(0.689662342512);
    msg.setSource(27219U);
    msg.setSourceEntity(133U);
    msg.setDestination(52064U);
    msg.setDestinationEntity(144U);
    msg.sys_name.assign("SXCPOUACODHYJZEYZLIPJSCXPJPVRWNDWLFSBEJDSXKFMHPGWATULULJNYPBNISYANMXLKYHVVZSGZRKHJULUVFVGEKMWVHBCCZDBWDYGREQQDVZMAKUCMQOZMYDKLNATNVZ");
    msg.sys_type = 168U;
    msg.owner = 38363U;
    msg.lat = 0.818120165274;
    msg.lon = 0.354346771022;
    msg.height = 0.582166078672;
    msg.services.assign("MOPTQMRKHJKZGEVZXYYFYJLSUEYQROIIYNXALDSRQHCHVPFXVVPUVPVDEWGBHYLCGAXJODZCRCDQWNDFYECPFILTEIOGVTBHJWXWBQPQFFFUWXKMJHCESLOKJFNURNBSHVBHBGVRXTIKNGEQATTLXWZOAJDPBARTUQRTEOSMBBXKTUZODMGKPGKVRYZZUOWTIUSI");

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
    msg.setTimeStamp(0.851608992032);
    msg.setSource(41076U);
    msg.setSourceEntity(137U);
    msg.setDestination(30082U);
    msg.setDestinationEntity(253U);
    msg.service.assign("DHWUXRGCAGCQKBPBIHLNETGPWKXKJFIJHZVMRBZGMZJQEKAWUJKYMDBLUIFXMANOYQZZMLRUFHXMXEQLMTZZLASUDRYODEPFNOFWYEBQDVSIYGQSDSKSONZTOIKQAJSWLNASPBUSBPTDFHTBNYOCJRITSKCHZLNJUBUEAAQHN");
    msg.service_type = 132U;

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
    msg.setTimeStamp(0.00827338580391);
    msg.setSource(59976U);
    msg.setSourceEntity(154U);
    msg.setDestination(57531U);
    msg.setDestinationEntity(105U);
    msg.service.assign("LLDCEJOWLAGZQZAZEHGUVRGGAQZFNNXXEULYOHTJSPDXKPHIRGWRFSDQNEPQNPBTOSREDBNFUNIMDUPLFAMCNTQELBFWYBJRJCQLQGORCOESWISMKQASOKXIZMTMEAHWBJMMJWTRBUZZRWILTXAVYXYKSLIBKDCYHOUCRYNAJAAXBPUXVICYGZPHOHTQNSNMFKOWYCTFFVFJP");
    msg.service_type = 223U;

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
    msg.setTimeStamp(0.535772860255);
    msg.setSource(12727U);
    msg.setSourceEntity(183U);
    msg.setDestination(24833U);
    msg.setDestinationEntity(236U);
    msg.service.assign("XTCUWKJWISLSZSKBPEBIIDBRGELRITYIMGSJFGYOKJQDKWCDTMUPPOLUTEMZASGVFJIGMALDFHUBZQJPMOXMCVQLBYTETIWDCCOQRUSRXVODQGBHFBZKFXENFQHHRARPYGZWKFJNZEJNGAUFYOBXQNHJHFQAJPPGCCHABTEMDDJTPSYMTTRVWGOLKXANAKCEHSQNDIVYVWUU");
    msg.service_type = 41U;

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
    msg.setTimeStamp(0.969092201144);
    msg.setSource(18337U);
    msg.setSourceEntity(248U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(56U);
    msg.value = 0.511916341788;

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
    msg.setTimeStamp(0.849078070744);
    msg.setSource(40918U);
    msg.setSourceEntity(251U);
    msg.setDestination(50780U);
    msg.setDestinationEntity(74U);
    msg.value = 0.967588306246;

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
    msg.setTimeStamp(0.891344862846);
    msg.setSource(29844U);
    msg.setSourceEntity(211U);
    msg.setDestination(37842U);
    msg.setDestinationEntity(204U);
    msg.value = 0.789963906758;

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
    msg.setTimeStamp(0.0847732546734);
    msg.setSource(41803U);
    msg.setSourceEntity(208U);
    msg.setDestination(32413U);
    msg.setDestinationEntity(214U);
    msg.value = 0.894696959196;

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
    msg.setTimeStamp(0.523753057181);
    msg.setSource(59963U);
    msg.setSourceEntity(136U);
    msg.setDestination(942U);
    msg.setDestinationEntity(232U);
    msg.value = 0.279720346525;

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
    msg.setTimeStamp(0.195982847696);
    msg.setSource(14383U);
    msg.setSourceEntity(209U);
    msg.setDestination(61084U);
    msg.setDestinationEntity(43U);
    msg.value = 0.195746154031;

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
    msg.setTimeStamp(0.441935345472);
    msg.setSource(20719U);
    msg.setSourceEntity(60U);
    msg.setDestination(54712U);
    msg.setDestinationEntity(71U);
    msg.value = 0.533749646767;

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
    msg.setTimeStamp(0.442398419142);
    msg.setSource(30478U);
    msg.setSourceEntity(231U);
    msg.setDestination(19001U);
    msg.setDestinationEntity(7U);
    msg.value = 0.558349211274;

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
    msg.setTimeStamp(0.814416219438);
    msg.setSource(29687U);
    msg.setSourceEntity(239U);
    msg.setDestination(4136U);
    msg.setDestinationEntity(184U);
    msg.value = 0.96359290928;

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
    msg.setTimeStamp(0.145460254084);
    msg.setSource(25431U);
    msg.setSourceEntity(24U);
    msg.setDestination(44823U);
    msg.setDestinationEntity(90U);
    msg.number.assign("PBCJMAIXWGRHFCAATNSCLQVHQFNNDSLPFYHJOKWWHCBFLARBUNGMZGZLXYIWRIYGTBDAMU");
    msg.timeout = 7143U;
    msg.contents.assign("SUYJNNOFLSBTXDJALHVKREFIUESOEJMFPNHANKNYSRPFTHJODVSXKUIIU");

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
    msg.setTimeStamp(0.429326081467);
    msg.setSource(17522U);
    msg.setSourceEntity(194U);
    msg.setDestination(15622U);
    msg.setDestinationEntity(13U);
    msg.number.assign("HDPVMVYUDXUQVEJGWCGOLQYDWAPBTSYKPTRXZYC");
    msg.timeout = 19815U;
    msg.contents.assign("DWZMORPVBEWCKAWEMFXRLTIDAJUUPNPFCQOZRUGINOFGJUWMCCHRZHMSCXGYX");

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
    msg.setTimeStamp(0.604352800781);
    msg.setSource(8738U);
    msg.setSourceEntity(15U);
    msg.setDestination(13776U);
    msg.setDestinationEntity(231U);
    msg.number.assign("SPBLSWIIHEODYYCQNKKNONHEVYUKJGYACJHSLDAXRAJXFXZDPMLNJBTAVDNGZIKSQIQUJLMTUAOGWVJSEKTBVXTUWOKZXBLAWOSGVGBDJWVRSCOUN");
    msg.timeout = 21956U;
    msg.contents.assign("FZYRNFWAQCJHCQTTEQJXWGBFAKDZYEJULEAKJJDVPUVASGNLPKSRONUFYOABGPOEBWZSPIOSNNCPOQXNVIBJUYZMVUDXSITTHZPUPTYMMGUJLRFOUHAFWKBCVLQLHQXIUDCCSCIIBMXHDDEBHRXRYBQGZISHVKQMTNLYRVOCZYQPDOXIKSWYHGZJHJLDRXVTVXJAGFLOZTTHC");

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
    msg.setTimeStamp(0.964935646845);
    msg.setSource(1951U);
    msg.setSourceEntity(89U);
    msg.setDestination(17818U);
    msg.setDestinationEntity(253U);
    msg.seq = 1467388320U;
    msg.destination.assign("KROOAMRMRXICAFLVPKFREDSMBZSGEJQUXUNCWHBBVAQRZKBZKQYIDGUIXWAAJODCPBMLOIFJJKGOSSDHAFAINOWNVVWJCQHTGDUAVZYZBTRUYCIIBLJXOTSTQJFJHQ");
    msg.timeout = 14305U;
    const char tmp_msg_0[] = {23, -58, -121, -61, -30, 86, -128, -53, 123, -15, 60, -2, -8, 53, -107, -95, -79, -104, -97, 34, -44, 100, -48, -85, -112, -58, 42, 11, 3, 6, -120, -57, 27, -74, 16, 54, -29, 61, 31, -59, 80, 59, -97, -100};
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
    msg.setTimeStamp(0.892275102543);
    msg.setSource(20967U);
    msg.setSourceEntity(175U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(104U);
    msg.seq = 1068880574U;
    msg.destination.assign("PZTSNDJJGLMKXNQWCELAURATIGJFFXBKOCEVVVGRLHPGDFMDCKQWMPODJDQFAQSBOBPAZOIHLKTHGHGMKYXURVIZWQOUOSUYLPXTPSWEDYZBRXEHXZJYRFCXLTLSAFSHDIYRSTEBZMEJNFRVGKQRHCCYNYEHANFKJHWMIUZGYEWXPPKRUKAGDVIXJTUNWOBSZXMBNQOTVMCKCDLBLHQVYRTSNZNVWAMUOCQJIPASOGFYEUFI");
    msg.timeout = 45483U;
    const char tmp_msg_0[] = {67, -83, 87, -94, 113, 117, 114, 37, -103, 81, -57, -35, 78, 94, -121, 43, 5, 106, 8, -121, 60, 4, -86, -119, -48, 95, 83, 40, 57, 17, -91, 1, 8, -122, -127, -112, -9, -72, 115, -121, -125, -116, -99, 121, -62, 19, 6, 96, 57, -9, -16, -57, -47, -58, -53, 75, -115, -23, -56, -76, -116, -11, -27, 90, 6, -2, -42, -28, 14, 110, 117, -5, -109, 66, 58, -19, -14, -32, -11, 83, 112, -93, 9, 101, -23, 84, -36, -73, -63, -91, -25, 24};
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
    msg.setTimeStamp(0.734824833384);
    msg.setSource(8423U);
    msg.setSourceEntity(219U);
    msg.setDestination(51541U);
    msg.setDestinationEntity(31U);
    msg.seq = 175783548U;
    msg.destination.assign("XCOPJKJQQQDNYKGWHTNDNLRYIDAONFJLTBTAVRSGQZSJPZPUMWWBPJIOIQHZEWQDMLFTAUXVNXGNKLNZVIEOCCDEFJTBIAVXHWRZYXTYGCJAFUKLAYMM");
    msg.timeout = 31991U;
    const char tmp_msg_0[] = {-78, -50, -7, -107, 17, -44, 11, -66, -44, -44, 55, -102, 123, 2, 41, 111, -83, 76, -124, 29, -96, -108, 4, 89, 82, 31, 7, -112, 45, 45, -116, -126, -30, -108, -77, -16, 34, 33, 61, 18, 3, -61, -92, 7, -127, 73, 65, 76, 104, 49, 29, 91, -78, -22, -78, 44, -13, 95, 88, -116, -105, -77, 35, 15, 106, -81, -12, -68, 44, -57, 41, -81, 28, -89, 125, 40, -91, -60, 102, 23, -77, -56, -8, -28, 67, -112, 107, -102, -57, -108, 84, 84, 115, 57, 56, 55, 43, -41, -109, 17, 104, 96, -32, -3, 37, 46, 71, -77, 72, -118, -89, -82, -102, -16, 35, 8, 58, 84, 14, 31, -21, 27, 100, 119, -112, 123, -119, -38, 101, 70, 93, -63, 89, 93, 29, 20, 96, 70, 43, -37, -51, -37, 95, -126, -26, 108, -15, 123};
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
    msg.setTimeStamp(0.913018947416);
    msg.setSource(27178U);
    msg.setSourceEntity(176U);
    msg.setDestination(25102U);
    msg.setDestinationEntity(172U);
    msg.source.assign("ULZPPQVHSXUERGJCQUQASCJELDTCYQLXXOWBTOVBBDXLOTSXISUPIPVCKWQZYMEOEJWTAJWDRAFWZORWPMTXBDEFWIAGSAWNKUMQNYQDNKJTJFDBHVSYBFMDIZVFWOJYZNGPUYHIKGHOIIHQZMADTZZXNMDNERFFDTNLZALHMRT");
    const char tmp_msg_0[] = {-123, -72, 61, -116, 105, -91, 18, 11, 87, 74, -18, -53, -8, -115, -109, 37, -58, 20, 50, 104, -106, -68, 3, 113, 25, 11, -61, 11, -64, -95, 97, -42, 88, -11, -95, 12, 31, -43, 22, -56, 74, 67, -47, -71, -22, -11, -63, -36, -13, 92, -103, -46, 110, 103, 97, 92, -49, 114, -55, 15, -128, -68, 59, -56, -98, -16, -59, -4, 4, -102, 57, 78, 107, -77, -22, -81, 19, 34, 56, 71, 49, 126, -105, 74, -9, -16, -57, -22, 41, 119, 86, -73, 31, 125, 38, 55, -3, 29, 52, -124, 48, -79, -95, 83, 68, 0, 64, -49, 125, 60, -33, 58, 58, -54, -60, -85, 35, 59, 59, -16, 68, -7, -76, 77, 92, 113, -45, 47, -74, 100, 85, 42, -58, 36, -52, 66, 79, -30, 22, 74, 55, -12, 65, 46, -30, -49, -42, -53, 105, 0, 106, 68, 117, -79, 39, 19, -115, 92, 80, -108, 22, -94, 110, -28, -47, 96, 71, -123, 96, 28, -122, 101, -31, 53, 32, -84, 35, -117, -36, 109, 61, -75, -118, 117, 24, -122, -96, -76, -80, 91, 32, 16, 100, 45, -104, -95, 38, -34, -48, -6, 20, 102, -119, -56, -105, 7, -34, 95, 69, 49, -63, 69, -101, 76, 103, 29, -116, -42, 118, 21, -41, 82, -32, 3, -58, -101, -108, -43, 15, -37};
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
    msg.setTimeStamp(0.487302673558);
    msg.setSource(28490U);
    msg.setSourceEntity(51U);
    msg.setDestination(35081U);
    msg.setDestinationEntity(130U);
    msg.source.assign("SBZHXBXVPRNRHYYDGKMWZOUMMGLFKNCNMOKTEXEEULRDAQTWPAOJIZSCWYWSKGPHFZQRBCFLQZKDIVDGTFLGFJCETXEJFAFMMIVLPCLAUXVZWRJSSBHLZTAGKNBBUMHNULKUKPWOYBRHIDHJXWRMJRNATXDVQZPEYEVIOGJSVYMAXSCTLJYIYSH");
    const char tmp_msg_0[] = {-61, -114, -34, 86, 51, -120, 97, -123, -84, -45, 55, -94, -91, 101, 6, -78, -109, -41, 32, -83, -114, -12, 59, -121, -49, -44, 54, 103, -47, 84, 117, -65, 87, 67, 0, -118, 22, -113, -105, 119, -27, 38, -64, 59, -36, 2, -45, 119, -104, -26, -11, -112, 81, -72, 47, 40, 8, 39, 102, -87, -100, -74, 63, -57, 16, -83, -86, -121, 32, -93, 95, -45, -58, -95, -29, 14, 67, 15, 27, 9, 46, -14, 77, -46, 3, 42, -16, 105, 41, 14, 58, 53, 23, -16};
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
    msg.setTimeStamp(0.524647297405);
    msg.setSource(60738U);
    msg.setSourceEntity(237U);
    msg.setDestination(5668U);
    msg.setDestinationEntity(249U);
    msg.source.assign("ZRHATLBSMNC");
    const char tmp_msg_0[] = {-10, -15, 57, -121, 74, -79, -18, -45, -125, 104, 65, 106, -72, 65, -10, 7, -107, -11, -109, -49, 76, 43, -16, -75, 13, -126, -21, 9, 61, -80, -1, -70, 63, 75, 19, -20, -88, 17, 7, 95, -29, 101, -127, -8, -58, 75, 46, 67, 75, -119, 93, -57, -8, 67, 35, -56, 25, 45, 72, -24, 88, 104, -98, 74, 73, -70, -82, 52, 26, -41, -43, 110, -122, -10, 120, 90, 32, 49, -108, -108, -47, 71, -102, 122, -17, 76, -5, 55, 125, 61, -47, 31, 101, 4, 64, -99, 108, 23, -18, 116, -40, -119, 97, -90, -17, 73, 126, 61, -56, -26, 4, 41, -41, 3, 38, 91, -21, 57, -53, -108, -126, 88, -52, 47, -18, 120, -28, 83, 85, 107, -44, -85, -98, -98, 19, 122, -47, 89, -47, -3, 104, 66, 37, 59, -125, -40, -51, -117, 108, -124, -70, -82, 9, -31, 19, -29, 75, -12, -52, 88, 46, 36, 89, -8, 101, -41, -8, -114, -115, -36, 24};
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
    msg.setTimeStamp(0.901912744792);
    msg.setSource(2052U);
    msg.setSourceEntity(105U);
    msg.setDestination(13310U);
    msg.setDestinationEntity(201U);
    msg.seq = 348112585U;
    msg.state = 127U;
    msg.error.assign("HHBUAFRXHMRYUXZTNKHIHHGYPEJLCJIECCPGXIQSPKBLNKOUFIVNSFBKOKZREXKLWHPEZSFWMSEVU");

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
    msg.setTimeStamp(0.828362159193);
    msg.setSource(10425U);
    msg.setSourceEntity(135U);
    msg.setDestination(33067U);
    msg.setDestinationEntity(174U);
    msg.seq = 1528293313U;
    msg.state = 210U;
    msg.error.assign("LRDJEETNFHRGJZUGQIVMSRGRBXMTGNDK");

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
    msg.setTimeStamp(0.568930907063);
    msg.setSource(20866U);
    msg.setSourceEntity(81U);
    msg.setDestination(38503U);
    msg.setDestinationEntity(111U);
    msg.seq = 4132972732U;
    msg.state = 159U;
    msg.error.assign("BPTTUWGNSQYNRXOZZIJVIGAQPAJDKBJUQEWCWCBHEWNTPFXLRDSRQGRSBUENZEWXLPFGBDOUNAGQRIGTDCTEKVHNXEGFQKOUVXYFKUPVZOMVSROFMMIXOCAZHRUZJWHLGTYSIVHRCNLVIYKLAECAKSSQAKNGCDBKXJNVHTLHMUWEFJIPYGPDWAMPOIZFFUWS");

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
    msg.setTimeStamp(0.61237218096);
    msg.setSource(22092U);
    msg.setSourceEntity(252U);
    msg.setDestination(16088U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("MQBCGWLUBOZNYYCZVIRCVLOSYWQBFCWWRMERBTFREDVJTRHOGNCHZALAVSGIFTDIIHCY");
    msg.text.assign("ZBNLZXZDAADXZMBBCXDCWCXGLDMFQTPWATWUKGTTYOEKJVIFRVLRKYTRZYOTBCCYJVXUSVADTGOTFVIYDPQNB");

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
    msg.setTimeStamp(0.219881273204);
    msg.setSource(12745U);
    msg.setSourceEntity(55U);
    msg.setDestination(48897U);
    msg.setDestinationEntity(58U);
    msg.origin.assign("KRFVPOLYXXNDXFHHDDQODTVTZWNRDAHVBGONALNPBBEPOYZMXOUUQBZWXCFGWEWUBARWKBUYKIFXNCMDOVTMPICTOQKFRINBLDZXIUZNOBEXCXCYUNZREGSWCDFPGHWVQISMQZURETJYYDTQCXJMKQEWQGDSJPKVRCAOGJCTNSUSIITLALISJHMKLFERWKFSLZEOAJABJLMUIPNFHPQY");
    msg.text.assign("LEXEBYTUHUBONEVOPHYNUVPFMQXCKRDECQKHQWOBNTDLXORPREVITPFOUWATBRBGSWCISZOZZDBFAYPVZMGMZGKAQVIGANLBDGXTYRLIO");

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
    msg.setTimeStamp(0.757197863136);
    msg.setSource(28306U);
    msg.setSourceEntity(1U);
    msg.setDestination(26695U);
    msg.setDestinationEntity(168U);
    msg.origin.assign("TQKXEJJTMKAJQENEZHFYAPGJJDMAKFUVULJZAHJCQIVLVYCOVDHSVHRCUEULDPWCCGIITVQGZBEPFRQLUMOPSK");
    msg.text.assign("JLPYMFNCYLQESIIQSKNRPZN");

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
    msg.setTimeStamp(0.00560938438196);
    msg.setSource(17848U);
    msg.setSourceEntity(33U);
    msg.setDestination(63044U);
    msg.setDestinationEntity(44U);
    msg.origin.assign("DDWIRQPCLRRYIGJLZABRRJKHBLKZCDIOXFAYZOOCDDGQFQSEEQENPAUMTQVOTGJZUFSLLCSGHYMJMZXRFEXWNMOYLQQIKPKVHSUWSKEEAIJQBTPPDBWCBWLAWWDHECXHYTMRBYLLSAUOYGDXXUVITRYKPHMABTVSDXOVZSFGRTPFYCIMKOANNBTVCNPDHVVMNWPSZUZQSFWINNXTVX");
    msg.htime = 0.360388441713;
    msg.lat = 0.338437030454;
    msg.lon = 0.83713670643;
    const char tmp_msg_0[] = {26, 68, 75, -45, -66, -16, -119, -58, 25, 95, 39, 53, -16, 38, 18, -86, 86, 81, -10, 45, -53, -38, -55, -101, -116, -19, -30, -13, 80, 44, 67, 101, 126, -72, -79, 85, -21, -86, -15, 110, -87, 7, 29, 20, 65, -99, -28, -64, 91, -36, -13, -60, 34, -128, 30, -124, -1, -36, 114, 91, -116, 33, 116, 1, 113, 80, 27, 111, -1, 109, 76, 54, 126, -103, 34, -2, -98, -1, 88, 68, 20, -110, 11, -24, -103, 125, 11, -106, 44, -99, -123, -11, 15, -52, 80, -28, 81, 22, -85, 97, -107, -67, 57, -106, 66, 43, 118, 4, 87, 95, -10, 108, -47, 123, 55, 4, -12, 116, 59, -97, 112, 74, 34, -116, 87, -29, -72, 37, -115, 96, -126, 28, 109, -15, 92, 40, 115, 95, 125, 28, -20, -41, 78, -44, 36, -56, -59, 52, -73, 12, 87, 120, -69, 80, 118, -105, 86, 74, -6, 96, 64, 81, -4, 5, 17, 21, 34, -87, -110, 27, 21, -95, -58, 73, -72, -29, 123, 88, 62, -47, 109, -35, 62, 96, 32, -45, -121, 54, -96, -71, 8, 63, -74, 51, 48, 83, -12, 79, -64, 115, 74, 51, -101, -43, 63, -62, 88, 75, 36, 41, 86, 77, 49, -36, 96, 68, -1, 31, 59, -114, -103, 4, -61, 118, 90, -51, 121, -55, 122, 18, 63, 37, -12, 126, 14, -44, 6, 0, 85, 94, 55, 61, 60, 65};
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
    msg.setTimeStamp(0.759976432437);
    msg.setSource(49615U);
    msg.setSourceEntity(32U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(222U);
    msg.origin.assign("OZEXOGDOQEJPOBOKBFOOLJNGCKMZIIAKEMWFDAYQFWLNMTZFLDC");
    msg.htime = 0.0767437402441;
    msg.lat = 0.651901355909;
    msg.lon = 0.773072572992;
    const char tmp_msg_0[] = {23, 73, 31, 92, 42, 79, 69, 80, -124, -60, -79, -91, 49, -114, -59, -90, 93, 51, -93, -11, -75, 98, 109, -56, 21, 36, 65, 99, 60, 22, 101, -21, -39, -100, -67, 94, -51, 87, -60, 69, 20, -110, 2, -123, -108, 109, 57, -35, -52, 122, -64, 57, -68, 61, -16, 126, -27, 123, 81, 90, -58, 108, 23, 71, 79, 71, -57, -8, 65, 18, 26, 108, 123, -101, 96, 109, 62, 92, -24, 108, -122, -75, 31, -42, 2, 18, 67, 9, 33, 31, -18, 4, -54, 25, -118, -18, -10, -18, 102, 91, 123, -31, 96, 23, -10, -11, 23, -66, 82, 76, 22, 5, 75, -32, 88, -68, 55, -22, 80, 124, 104, -127, 93, -17, 19, -31, -114, -61, 61, 3, -115, 52, -121, -59, -118, -126, 119, -113, 41, 45, -105, -96, 7, 38, -87, -101, 125, 40, -35, -125, -32, -85, 101, -42, -101, 120, -87, 43, -42, -61, 72, -3, -25, 62, -64, -25, 24, -19, -13, 103, 123, 30, -44, -123, -7, 76, -98, -31, -120, 106, -71, 35, -68, 25, -2, 95, 16, 47, 45, -64, -82, -24, 82, -70, 90, -36, -57, -123, 123, -95, 96, 117, -95, -119, -90, 126, -35, 118, -29, 30, 73, 70, -76, -81, -119, 85, 98, -65, 71, -108, 126, -48, 59, -70, 111, 42, -100, 77, -67, -105, 112, -42, -27, -101, 118, -125, 0, 118, 94, 95, -59, -40};
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
    msg.setTimeStamp(0.0170800785355);
    msg.setSource(12084U);
    msg.setSourceEntity(56U);
    msg.setDestination(18372U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("KFQEKMUBCUQAHKEDIXFFIUAAHKYDNGRFYEJOSZPHLZGJSKAJVDATPPYFQNIJTHWSXRYQAHRGCKXDGQEFVTFEJUGMVGFSZWBHBCNUSSEZQZCJLZZ");
    msg.htime = 0.582929500726;
    msg.lat = 0.914218647418;
    msg.lon = 0.131564360344;
    const char tmp_msg_0[] = {-121, -86, -50, 20, -14, -14, 125, -90, 75, -7, 78, 8, -44, -101, -43, -103, -84, -116, -33, 110, -79, 31, -60, -75, -19, -86, -119, -86, -94, -44, 37, 85, -37, 118, -6, -13, 5, -80, 37, 28, -62, -52, 28, -39, 63, 47, -85, 116, -5, -110, -48, -128, -87, 110, -94, 22, -54, 52, -76, -72, -102, -96, -61, 59, 45, 46, -113, 82, 88, 80, -112, -20, 72, -74, 111, -79, 54, -109, -66, -91, -17, -65, -123, 75, -25, -76, -87, 18, -21, -128, -112, -124, 28, 34, 96, -7, -37, 74, -114, -39, -13, -3, 126, 95, 42, -4, -69, 59, -96, -47, 118, 20, 42, -70, 92, -105, -42, -70, 6, 44, 38, 86, -45, 5, -54, 114, -85, -94, -34, 43, -48, -90, -62, -84, -48, 84, 48, -108, -39, 29, 102, -95, 108, 3, -105, -108, -95, -124, 108, -12, -81, 73, 103};
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
    msg.setTimeStamp(0.318950611159);
    msg.setSource(9166U);
    msg.setSourceEntity(35U);
    msg.setDestination(27370U);
    msg.setDestinationEntity(162U);
    msg.req_id = 53888U;
    msg.ttl = 43213U;
    msg.destination.assign("UJQVAWWFHFWRELSZBFVPIZOCAAXOZNHCPSAINDPHRAWMMBDMEZGVNPWOTGVCUQJXBRLQCYTUHBOZCQGRMBFZERNVEJTYKYXSMUPCISZCQGKFETVHLYLHOLLNRIKSRJJYBVXRUSQFIPJBGJVXZLAAAYIDDQQKDGHEDKKSEHUQTWSOQREGTKOOTDUIXYBCOOLN");
    const char tmp_msg_0[] = {96, 121, 91, 38, -81, 121, -125, -105, 19, 87, 2, -101, -62, -67, -115, -13, -126, 35, -59, -66, -63, -7, 46, -53, -64, 18, 33, 76, 102, 118, -65, -65, 74, -37, -16, 115, -49, 116, -43, -47, -110, 101, 28, -40, -16, -108, 74, -69, -9, 41, -103, -24, -7, -110, 101, -21, 63, 47, -86, 2, 45, 5, -96, -89, -110, 117, -59, 71, 71, 13, -22, -73, -104, 43, 41, -91, -47, -124, 41, -109, 73, -93, -19, -81, -13, -102, -72, -124, 63, 73, -3, 68, -113, -105, 48, -59, 103, 125, 121, -80, -114, -112, 51, 72, 4, -6, 82, -117, 30, -49, 81, 18, -17, -64, 15, 88, 35, 124, 109, 110, -69, -119, -115, 108, 17, -125, -38, 54, 21, 21, 48, 108, 120, 68, -66, -58, 16, -41, -30, -112, -89, -64, -103, -6, -89, 109, 16, -80, 76, -127, 78, -26, -62, 101, 83, -31, -72, 79, 41, 102, 4, 54, -56, 34, 99, 43, -37, -79, -115, -19, 78, -28, -33, 73, -61, -120, -84, 36, 19, 62, -46, -109, -19, -49, -14, 73, 34, -118, 106, -70, 41, 42, -37, 115};
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
    msg.setTimeStamp(0.58364537729);
    msg.setSource(19883U);
    msg.setSourceEntity(80U);
    msg.setDestination(20240U);
    msg.setDestinationEntity(126U);
    msg.req_id = 47823U;
    msg.ttl = 42202U;
    msg.destination.assign("HWDAXGARMJEGFNSZUFOQWIBFRBWAIVYCSMJTAUBDVLOTUHTZPPJYCDVRLSXOAMLHNXUDCTUKCGBNRENOQANZRFDMTWYMVPFWJGLAKBNRLSIFJCPTDJO");
    const char tmp_msg_0[] = {-85, -95, -8, -57, -1, -77, -49, 42, 63, 44, -32, -94, 98, 27, -117, -81, 126, -68, -53, 45, -67, 63, -71, 2, -98, -86, 91, -19, -111, -16, -87, -65, 116, 122, -14, -115, 86, 74, 123, 26, -101, 47, -5, 50, 64, -92, -101, 84, 117, -25, -69, -119, -31, 76, 99, -4, -52, 51, 73, 19, 65, -89, 126, 88, -79};
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
    msg.setTimeStamp(0.858105364125);
    msg.setSource(20931U);
    msg.setSourceEntity(150U);
    msg.setDestination(41866U);
    msg.setDestinationEntity(225U);
    msg.req_id = 55937U;
    msg.ttl = 4286U;
    msg.destination.assign("MGOUOOSBIBQVLPVGJTEMZNJMTFPWGSHAQKEHMALWWRWYYPMZIJWNLAYXENNIUNSSCDIVOYBGKJMHXYVGDEVMFAEZICVOZXQJSZTNGHPCER");
    const char tmp_msg_0[] = {-74, -68, -49, -112, 35, -68, -101, -66, -118, 51, 2, 99, -126, -84, -37, 53, 75, -58, -80, 16, 35, 11, 72, 18, -87, 55, -5, 81, -48, -101, -123, 91, -9, 82, 55, 112, -120, 52, 95, -67, 63, 45, -44, 104, -121, -48, -24, -13, -2, 27, 29, 55, 112, 29, 42, -58, 118, 73, 72, -48, 47, 39, -113, 40, -72, -65, -5, 14, -69, -16, 8, 81, 30, 50, 35, -107, 117, 41, 54, 29, 11, -21, 31, -21, -82, 3, -54, -31, 42, 76, -119, 25, -42, -7, 65, 43, -36, -121, 122, 84, -74, -64, 73, -61, -31, -97, 20, -53, 98, -39, 116, 88, 42, 9, 55, -14, 109, -63, -28, -78, 4, -19, -126, 99, 99, -55, -122, 57, -110, 90, -97, -10, -2, -46, -17, -98, 88, 15, -91, -57, 98, -53, -114, -123, -50, -11, -114, 69, -1, 12, -45, 42, -45, 9, 34, -120, 8, 71, 113, 90, 36, -62, -82, 21, 33, 125, 32, 104, -48, -43, 17, 48, 100, 85, 74, 92, -112, 80, -112, 84, 78, 6, -123, 84, -34, -8, -33, -96, 32, 68, 126, 115, 30, -55, -73, -94, -67, 63, 40, -5, -4, 114, -26, 118, 77, -74, 115, -82, 111, -10, 33, 79, -14, -122, 126, 38, -16, 118, 119, 8, -60, -56, 21, 101, 74, 32, -91, -34, -101};
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
    msg.setTimeStamp(0.343963458608);
    msg.setSource(4322U);
    msg.setSourceEntity(183U);
    msg.setDestination(20304U);
    msg.setDestinationEntity(192U);
    msg.req_id = 40778U;
    msg.status = 138U;
    msg.text.assign("XJASOFKTCDMKHHLGYAMLWGKDZQOWWDCOJUHMEXTYSWGBNYVBTSGPHUBMIYUCZZQA");

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
    msg.setTimeStamp(0.259583519988);
    msg.setSource(23516U);
    msg.setSourceEntity(250U);
    msg.setDestination(24316U);
    msg.setDestinationEntity(139U);
    msg.req_id = 34330U;
    msg.status = 220U;
    msg.text.assign("GKWTWXWZNSWKGJZRPOHVTDPWQSFAAFBMLKMOLOHBLDGPWXRJPPNMABHYBJZUIPSCXLSHGFZAGTTPVDFMXXCVGHDLJRQLKHIYXYYBHUNKUJTZZTYOQUOCXKCOQFFASKSGAYSDXOUFFDLCMSRNICIOFMJCSTLVDNCVZENHMBEZDMLQTYDGBWSXPQFNNEVVEQEREUUYBKWAIAAIJQRIPUKWIKHTRIJGMEPDVRXYBRUJLWQTZYRGOIA");

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
    msg.setTimeStamp(0.0575378631157);
    msg.setSource(58383U);
    msg.setSourceEntity(63U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(19U);
    msg.req_id = 2354U;
    msg.status = 220U;
    msg.text.assign("BOXUPGMVXNVSAORNMRDXLTWZUFKKGDTGZRZZWKKHGHIDWFABRINBCAOAHHFZPLADFMHAANSUMSOEMUEAJSQOPTKMQPOMRNWOEGLYNCWSKNPRSXNYWLLPGEAIJFUOIBEOUREIWJCVFTFVXYYJJYGHCXT");

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
    msg.setTimeStamp(0.2589207373);
    msg.setSource(59784U);
    msg.setSourceEntity(152U);
    msg.setDestination(47182U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("RHHLLDBGIHUFDVDUBZYZTSUDDWOJSAKVYNZWCRRJLLTKRSZKJGNEAWNXYVAIXTMQTYKMWOBDBGNPVBSAJCAFUEPTQQWNEZICHINWXLAWUHGTGMHTGQHRPNJVIFPYFQFUDQERENNUZWMFSBWFYGJBGSIVXJVTPHBQURBGVGPXOLESBICNRAMSQXIHUVIOCCWOFXDXMJLJMIOPEURXVFKAKFAMPZSKEAOZOTXCKYZKZHRYYC");
    msg.links = 572032571U;

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
    msg.setTimeStamp(0.766583572082);
    msg.setSource(33643U);
    msg.setSourceEntity(132U);
    msg.setDestination(30659U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("TFAYEJTMPOKORTIZEIPUJYMVGQWZXOXPEPOGAUHKUSIEMZPAZHTHDLSWQTUAGMKGRZBMPLLWUFWZXZLCQXBLLCVBHANDMKOMKHCFVFOZXETBOIDOV");
    msg.links = 1348866822U;

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
    msg.setTimeStamp(0.289667838069);
    msg.setSource(46409U);
    msg.setSourceEntity(157U);
    msg.setDestination(24541U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("JIWDKPBKNNRZFKBAHHWGEGLVEMAQ");
    msg.links = 3833373015U;

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
    msg.setTimeStamp(0.489493940438);
    msg.setSource(52980U);
    msg.setSourceEntity(89U);
    msg.setDestination(46633U);
    msg.setDestinationEntity(69U);
    msg.groupname.assign("RFXTEKBBBCCXQNZQMDNARJXPOXHBSFZWQRZVPZLPTVXXZDJIQQWYGONAHLVIEXGJTAJDXXSIPDTYFCWUELKNIRLYZKPCHMEWIEJAPOPVQAAVYDJRU");
    msg.action = 226U;
    msg.grouplist.assign("PQLOQTKEWBRPQWZPSDIFJNICCQMKNYKPVBSNEUXXTAKCXJUYQRIZMMADVLYSXMV");

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
    msg.setTimeStamp(0.0221739944955);
    msg.setSource(41927U);
    msg.setSourceEntity(126U);
    msg.setDestination(7943U);
    msg.setDestinationEntity(254U);
    msg.groupname.assign("FQPSDKGCPDIOADGEDPEDNXBTUWJZAJXVNMFEXGZSVOKANCHTAPPHJWKWQ");
    msg.action = 99U;
    msg.grouplist.assign("JKKNVZFTVLEKVZGUGKJGBLDSQJCKYJPAFKOSWUUSQNTDAMZGTFPCSSVFZSWZCZTGIRMFHWRIXIKTRKVYSOKBLKOECYRTTVPCRPOGODMYAXAEUYARHXJNBHXMZDASBUHUHLJPQWIHQJSDVXORPNQNEFXXLUBZBXZBAVQYNRFCWBDIMIEEVQIEGCOWTGZHX");

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
    msg.setTimeStamp(0.476176771752);
    msg.setSource(14586U);
    msg.setSourceEntity(24U);
    msg.setDestination(21991U);
    msg.setDestinationEntity(26U);
    msg.groupname.assign("QQYSMVRJFZGKAWDCUPHQAOVJBEBNAMVQVOEMCCLIHBNGDVCBKLCVEQZJUCTKBLVAPJUQYYDBDRYHVJAKGLTPHBZKFTHJTGNZETMWLQLUPAPEZRXNTDFPUSGXYOKPTPZWFGKEIQGLNFUHSUJIFXOICWCUZIHGMYWEMAJBPWWLRZHTPOXSWFILDNYOJDAQXCZWDSYXRVW");
    msg.action = 111U;
    msg.grouplist.assign("BIIZKHQLMHCQNSHATBXQOZJJQWICVKRVMVUQIFIBFPDTKHLQRHJBHOMWHFJVPDRNVLNDEQRUTADOYSSVEFIHGXPKDBSLCJYSLVAFOXPEAZYKGMYLVKZRMRAZNZKTPUTDBLCUCILNDXAAWARLPOKFDTRUTDBCREHWUOPGWGNYEZTSQGWOJUIFYCMJMYJEXWOKGSMUZNBFYESXPCZVWFTIDTGGXVJFQAMGOXGKEUJAXYOWEEIZNXMCRNU");

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
    msg.setTimeStamp(0.607075217928);
    msg.setSource(31315U);
    msg.setSourceEntity(64U);
    msg.setDestination(34809U);
    msg.setDestinationEntity(87U);
    msg.value = 0.182811224731;
    msg.sys_src = 29880U;

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
    msg.setTimeStamp(0.730994465157);
    msg.setSource(62597U);
    msg.setSourceEntity(83U);
    msg.setDestination(20933U);
    msg.setDestinationEntity(17U);
    msg.value = 0.233478830433;
    msg.sys_src = 27125U;

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
    msg.setTimeStamp(0.139886379262);
    msg.setSource(5816U);
    msg.setSourceEntity(238U);
    msg.setDestination(28347U);
    msg.setDestinationEntity(225U);
    msg.value = 0.593044401759;
    msg.sys_src = 14772U;

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
    msg.setTimeStamp(0.465385680906);
    msg.setSource(46349U);
    msg.setSourceEntity(209U);
    msg.setDestination(16377U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0785050916162;
    msg.units = 254U;

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
    msg.setTimeStamp(0.870544082847);
    msg.setSource(50006U);
    msg.setSourceEntity(49U);
    msg.setDestination(60510U);
    msg.setDestinationEntity(64U);
    msg.value = 0.318623882523;
    msg.units = 54U;

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
    msg.setTimeStamp(0.692248516025);
    msg.setSource(20134U);
    msg.setSourceEntity(89U);
    msg.setDestination(51775U);
    msg.setDestinationEntity(251U);
    msg.value = 0.496444153467;
    msg.units = 12U;

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
    msg.setTimeStamp(0.289872479158);
    msg.setSource(19049U);
    msg.setSourceEntity(189U);
    msg.setDestination(10309U);
    msg.setDestinationEntity(121U);
    msg.base_lat = 0.220669079725;
    msg.base_lon = 0.160229770664;
    msg.base_time = 0.844383409386;

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
    msg.setTimeStamp(0.626277861444);
    msg.setSource(4105U);
    msg.setSourceEntity(160U);
    msg.setDestination(58909U);
    msg.setDestinationEntity(99U);
    msg.base_lat = 0.993460170558;
    msg.base_lon = 0.554139969711;
    msg.base_time = 0.868932530604;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 14010U;
    tmp_msg_0.destination = 12961U;
    tmp_msg_0.timeout = 0.730922717877;
    IMC::Temperature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.929978016803;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.341137098365);
    msg.setSource(55555U);
    msg.setSourceEntity(8U);
    msg.setDestination(40957U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.849461733169;
    msg.base_lon = 0.876937553928;
    msg.base_time = 0.24798585807;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 14104U;
    tmp_msg_0.priority = -72;
    tmp_msg_0.x = -11133;
    tmp_msg_0.y = 9130;
    tmp_msg_0.z = -25618;
    tmp_msg_0.t = -7245;
    IMC::TeleoperationDone tmp_tmp_msg_0_0;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.245924239104);
    msg.setSource(62234U);
    msg.setSourceEntity(99U);
    msg.setDestination(61783U);
    msg.setDestinationEntity(231U);
    msg.base_lat = 0.476060963877;
    msg.base_lon = 0.684558244238;
    msg.base_time = 0.737355831246;
    const char tmp_msg_0[] = {13, -61, -40, -51, -6, 53, -58, -78, -100, -60, 70, 28, -75, -68, -115, -9, 6, -88, -89, -57, -66, 90, -50, 112, 96, -122};
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
    msg.setTimeStamp(0.921832129513);
    msg.setSource(48811U);
    msg.setSourceEntity(249U);
    msg.setDestination(40668U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.0674602521592;
    msg.base_lon = 0.823582660817;
    msg.base_time = 0.248459085493;
    const char tmp_msg_0[] = {-36, -105, 101, -41, -107, -26, -88, 82, -74, 6, 108, -92, 96, 64, -95, -27, -98, -54, 2, -86, -28, 65, -82, -51, -44, -29, 43, 115, -41, 85, -27, -88, 86, -14, 16, 108, -92, -38, 110, 6, -118, 56, 12, -111, 76, -2, 29, 63, 24, 3, 24, 26, 71, 49, 35, 93, 123, 79, 104, -123, 27, 84, -20, -86, 75, 64, -62, -110, 118, 56, 1, -87, -86, 126, -45, -90, -50, 109, -124, -101, 46, -14, 18, 88, -82, 63, -91, -7, -85, 37, -110, 55, 82, -4, 90, 35, 40, 2, 126, 49, 78, -100, 60, -44, -120, 111, -69, 47, -76, -67, 1, -45, 85, 80, -49, -93, 66, 22, 126, -28, -72, -18, -4, -42, -61, -10, -87, -89, -99, -42, -119, -107, 18, -50, 94, -76, 95, -124, -49, -113, -22, 123, 15, -108, -115, 50, -100, 24, 66, 96, 13, 4, -7, -27, -69, 19, 41, 32, 57, -54, -96, -44, -122, 29, -97, -69, -2, 14, -28, 123, -32, -100, 30, -60, 32, 61, 80, 14};
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
    msg.setTimeStamp(0.129156127267);
    msg.setSource(35281U);
    msg.setSourceEntity(160U);
    msg.setDestination(45927U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.0419784512993;
    msg.base_lon = 0.328349659531;
    msg.base_time = 0.105092367977;
    const char tmp_msg_0[] = {-46, 91, 50, -19, 68, -17, 41, -127, -102, -63, -6, 15, 18, 31, -63, -39, 121, 15, 0, 57, 90, -24, -69, 111, 75, 77, -15, 33, 14, -24, 15, -51};
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
    msg.setTimeStamp(0.662778202025);
    msg.setSource(3253U);
    msg.setSourceEntity(216U);
    msg.setDestination(52319U);
    msg.setDestinationEntity(78U);
    msg.sys_id = 48818U;
    msg.priority = -30;
    msg.x = 15687;
    msg.y = 9039;
    msg.z = -30606;
    msg.t = -29583;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 191U;
    tmp_msg_0.error.assign("HELUVWPFXWMZETVCWXRVCUMZOOWVTQRSSGHQLKRKZOATOHFDNLVNMQQWYPLSIGXFAYPRJBQUACGNPTTCRUZJSXNOWTMYARBKCCEBSVOYPUIAHFFCIJNKWXFSVGTHNJBQGEFSYLPOXHPEEFQBIVLIMBKUVO");
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
    msg.setTimeStamp(0.371758575152);
    msg.setSource(11146U);
    msg.setSourceEntity(0U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(70U);
    msg.sys_id = 41263U;
    msg.priority = -18;
    msg.x = 23591;
    msg.y = -26161;
    msg.z = 10210;
    msg.t = 27569;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 133U;
    tmp_msg_0.value = 0.696742930728;
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
    msg.setTimeStamp(0.773793485813);
    msg.setSource(9400U);
    msg.setSourceEntity(174U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(228U);
    msg.sys_id = 43048U;
    msg.priority = -1;
    msg.x = -3403;
    msg.y = 15790;
    msg.z = 7317;
    msg.t = 23277;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("UAMNZWDUZYTAZRUHHIHVLFKYTMQKIPJMMGSBKQPNZKTYSEWHGWBODGKTCAEUMXIDJZASLOJFQSJWOVJGDFHOQPRENMMOGRVNWSBCVJP");
    const char tmp_tmp_msg_0_0[] = {-82, -93, 23, -89, 76, 2, 11, 122, -22, 9, -120, 60, -27, -91, -88, 106, 1, -30, 5, -64, -83, 15, -45, 17, -52, 116, -23, -84, 58, -88, -34, 14, 73, 117, -66, -74, -94, 105, 15, 73, 36, -123, 7, 14, 114, -93, 101, 14, -108, -70, 81, -50, 9, 42, 93, -20, -126, -115, 106, 1, 4, -82, -37, 92, -27, -127, -4, -111, -71, 2, -114, -92, -93, 22, 67, 56, -63, -52, -96, 80, 18, 66, -87, -3, -22, -59, 58, -109, -80, 38, -8, 118, 54, 90, -26, 57, -35, -70, 77, 85, 71, -29, -11, -64, -84, -25, -77, 7, 120, 7, -2, 125, 72, 66, 8, 93, 28, -80, -85, 98, -79, 20, 3, 34, 57, 52, -54, 107, 0, -81, 76, 16, -103, 64, -116, 46, 9, -99};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.54270904119);
    msg.setSource(31010U);
    msg.setSourceEntity(19U);
    msg.setDestination(49471U);
    msg.setDestinationEntity(55U);
    msg.req_id = 29140U;
    msg.type = 122U;
    msg.max_size = 6457U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.346820507175;
    tmp_msg_0.base_lon = 0.337955019071;
    tmp_msg_0.base_time = 0.728496881392;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 36429U;
    tmp_tmp_msg_0_0.destination = 30538U;
    tmp_tmp_msg_0_0.timeout = 0.898374465862;
    IMC::Current tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.242748823997;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.26656399655);
    msg.setSource(51345U);
    msg.setSourceEntity(60U);
    msg.setDestination(42670U);
    msg.setDestinationEntity(13U);
    msg.req_id = 17920U;
    msg.type = 221U;
    msg.max_size = 39976U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.809420905712;
    tmp_msg_0.base_lon = 0.273866381402;
    tmp_msg_0.base_time = 0.930881978206;
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
    msg.setTimeStamp(0.187819425149);
    msg.setSource(55590U);
    msg.setSourceEntity(236U);
    msg.setDestination(19152U);
    msg.setDestinationEntity(86U);
    msg.req_id = 61379U;
    msg.type = 217U;
    msg.max_size = 33858U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.440628364925;
    tmp_msg_0.base_lon = 0.31996217924;
    tmp_msg_0.base_time = 0.516931727088;
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
    msg.setTimeStamp(0.574944542297);
    msg.setSource(18251U);
    msg.setSourceEntity(164U);
    msg.setDestination(58279U);
    msg.setDestinationEntity(58U);
    msg.original_source = 28370U;
    msg.destination = 61637U;
    msg.timeout = 0.166362313102;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HDGYZABXXMFNJKSHWSOCUDZUGBFOCMPXLNZEKFXYGRJOKOYUDVAEGJF");
    tmp_msg_0.description.assign("OWXKYHUSCBNWKGCQXHQBVBIKONRECMWDUDJXVJHPKAGWKJUUTUGRFOSNAOJPDMTRJYFVCNOMYZSSZFMOKULDAIQGYTJOIEXIDAZWMGFUZTJMVUCUIDNGZVVQRCAPEGY");
    tmp_msg_0.vnamespace.assign("FHVOTOUBDELHKHRMQXPKJFLRDYXMPZFEWBQQVQQIAVJCNGTKRUNXCSYCYDJJXZJHTYGYY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BFOEIJXLHAANAJZBMWGOQULXJCRRKDNIDINBPDUUPDOYFKTKCGJNUODPVZLVJWLYAOLIRVMENEMQVYSMAXCEKSNUHUFHIPSZFRJDYYWKGDEQEPFZOJTQACUHJCSXPPZQXUKRBFCBHPTJTWCYFLVXWXTMMJ");
    tmp_tmp_msg_0_0.value.assign("GYHAKFXJEWPWSEEJVFASUXBTSBGNNWEQCUDLLFIGDWGPPEJOHRQBKTFAMMZPNSIPRZKLRZDYSVOQRMQWDCGORPUUMYHGCLIZQVHKFHNMSWJULJYYTA");
    tmp_tmp_msg_0_0.type = 218U;
    tmp_tmp_msg_0_0.access = 94U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TOTFBGJEJPRKUGIMJQQFRIHAYJGDZW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VUJHTXIOKOWZJXDHJYQRKBQNWZBMFSVDZWZZVXDDSONFCAYCKBFWOWUXISRXDHFFQTBSZBKLXMTMPEICHENEDTCNAQCLTDRWJUZDSULAGJLRQYVPPVUYOKWKBTWTGIAYAFZNYSGLRHHVUWCEVKQUPLLUOPBMNXEHSPHCPJFDNMHUPTEBXIMSGVCJEKCNATGNJKMO");
    tmp_tmp_msg_0_1.dest_man.assign("MKRMUGAGECWXKUVSFOJPLXBMRICDAUBISCBVHFLZLEOWBRHYESDIGKPHEWGAVHVLBTYKVSRZQOEAPQKGNADOXKNTZDQKWHRBNOTXPNQDIYCYXSUAIQLQYJTHJFTSIWOVKYCPJCYYFXAFOXMPOFEIBHJMCEIXDXCPNWGLSZ");
    tmp_tmp_msg_0_1.conditions.assign("ZHOFMNRUXEPCTYNBCRVHPNQGIOHOJEAXLJMHRNVEQNOZMJVFHNQGYOZKUDXARSMBIERCZFKUISIIJJRTREGCDEZZEHUYXNCGFNSXMTPJLLSCXZVGCTMNAABXLHDQGDXPXCWTSVQDVQYIBVLYEKWRKUFKK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxFrame tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 64245U;
    tmp_tmp_msg_0_2.sys_dst.assign("UUOTIHCDLMTQSRERUYOELQQRTXFAPQKYNYGGHXAMGOPPEJKRDKQIVISGZYULHTVFEQHLZOCLFEGHNWWVLIAEPIVYKXGCWFVMSLWDBVQSKTFUZJZBHNEGZRAABMPAJWCXQWNJNESDOAY");
    tmp_tmp_msg_0_2.flags = 184U;
    const char tmp_tmp_tmp_msg_0_2_0[] = {69, -13, 78, 12, -73, 8, 37, -127, 47, -51, -114, -26, 3, 11, -49, 72, -89, 109, -110, 84, -19, -5, 58, -122, 86, -118, 93, -80, 99, -49, 33, -109, 51, 34, 63, -20, 19, -51, 96, -59, 97, -87, -75, -117, 37, 11, 70, -65, 109, 19, -23, 63, 103, 37, -10, 82, -15, -17, -105, -78, -98, 122, 8, -59, -28, 6, 65, -98, 23, 20, -106, 5, -33, -33, 9, -23, -115, -20, -41, -41, -71, 115, 105, 101, 123, -61, -49, -69, -73, 0, 58, 82, 11, 124, 17, -101, 52, -18, 30, -18, -27, -123, 31, -83, -94, 123, 13, 101, -104, -52, -119, -13, 106, 50, -114, -110, 75, 41, -98, 41};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.63719889099);
    msg.setSource(42442U);
    msg.setSourceEntity(143U);
    msg.setDestination(16718U);
    msg.setDestinationEntity(96U);
    msg.original_source = 55767U;
    msg.destination = 56832U;
    msg.timeout = 0.103472153859;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("KUXJMHCJWMZETBGEPWJFUHNCAHWOZPMGLQARWKSHOPCLXUGVKHYKJPPZJUTYSRWOTFPBCKWMORCJMRIDFCIDPFBSJVDTYKLAKAYKXFLDSGFBZXVEGOLULUF");
    tmp_msg_0.max_speed = 0.850126231023;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.lat = 0.0658410244365;
    tmp_msg_0.lon = 0.616855137357;
    tmp_msg_0.z = 0.575943122783;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.custom.assign("IKXCCYOOMQXSGDWTHGGSLJAUQDDEXVQH");
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
    msg.setTimeStamp(0.369005398695);
    msg.setSource(16139U);
    msg.setSourceEntity(112U);
    msg.setDestination(14197U);
    msg.setDestinationEntity(236U);
    msg.original_source = 56518U;
    msg.destination = 22051U;
    msg.timeout = 0.183296028223;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.909830752239;
    tmp_msg_0.lon = 0.198155421026;
    tmp_msg_0.z = 0.433436636157;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.127762828565;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.bearing = 0.481052612688;
    tmp_msg_0.cross_angle = 0.871565086957;
    tmp_msg_0.width = 0.25156978383;
    tmp_msg_0.length = 0.627937908382;
    tmp_msg_0.coff = 49U;
    tmp_msg_0.angaperture = 0.0190659232232;
    tmp_msg_0.range = 41874U;
    tmp_msg_0.overlap = 189U;
    tmp_msg_0.flags = 85U;
    tmp_msg_0.custom.assign("DBACKVKQBLJNLEOWGQOHEJKTHTDGFVBOXIDCKXNNSYGPWXDYIPAVUKHEMVSGNZGRAGILUZFPTKMRNKFYFJYXWEYUBMMHPOJPYWDUWAWFRZRTAJBUTMLCQCSXRGNLAHPVLSKPIEPHMLEOBNXIIHPSAVTKYFORJQSTGLDIVURJBXCSHZWMURAWQAZCBXZQNYQSUZIUVZZZVJSFWDYRAIEJBGYGIQWJOMDCFVLEMHETDCCBOMTSKXXFCORPQLHNUN");
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.59946203044);
    msg.setSource(24713U);
    msg.setSourceEntity(18U);
    msg.setDestination(44024U);
    msg.setDestinationEntity(115U);
    msg.id = 19U;
    msg.range = 0.150641295665;

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
    msg.setTimeStamp(0.717809192217);
    msg.setSource(13571U);
    msg.setSourceEntity(37U);
    msg.setDestination(64383U);
    msg.setDestinationEntity(180U);
    msg.id = 189U;
    msg.range = 0.566201675213;

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
    msg.setTimeStamp(0.717994741352);
    msg.setSource(1497U);
    msg.setSourceEntity(86U);
    msg.setDestination(43989U);
    msg.setDestinationEntity(200U);
    msg.id = 113U;
    msg.range = 0.533067038972;

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
    msg.setTimeStamp(0.511076064163);
    msg.setSource(15098U);
    msg.setSourceEntity(230U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("EFNPTZWGBURVWVLZUKOOQVXDSTEFZVKOWGZQLQBIUALYWCQCZQMMTCJOPFSGXRHNWHNLNYKYLEXHZJIDIZOOJCHYPVJSXSPNIIJLEENGTOFFHSDSYPQQUPUXTCUGOYXFCKUXMYBAVMXEXNPBAJHTJCG");
    msg.lat = 0.604261240645;
    msg.lon = 0.168168029523;
    msg.depth = 0.521601302494;
    msg.query_channel = 160U;
    msg.reply_channel = 105U;
    msg.transponder_delay = 227U;

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
    msg.setTimeStamp(0.822739441418);
    msg.setSource(49717U);
    msg.setSourceEntity(225U);
    msg.setDestination(48403U);
    msg.setDestinationEntity(251U);
    msg.beacon.assign("XJBQABZCEVFITJSXSNYUNOVWKQNVGKOLBSYELCUETDTNEMHBZLGLZGBSCUCXTNOXNBODPWWQUXPCWAOIJKRPMMHOZHTSWMZEBHHZZFIOPKHVHUNTRHTJGRQMTLWUEQDJQASDEEIGIYKNYSJGAGVCGSFOCOAPDHORGAFVPAVLCFKFXWQXPZCPKZKRQWAIYIWUQZFUNHRXDLMMRYSVULIADEAWKYRQVSRMYCBIPILXYJMR");
    msg.lat = 0.946594423695;
    msg.lon = 0.83414516327;
    msg.depth = 0.631247884332;
    msg.query_channel = 240U;
    msg.reply_channel = 71U;
    msg.transponder_delay = 64U;

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
    msg.setTimeStamp(0.0966668716462);
    msg.setSource(14647U);
    msg.setSourceEntity(242U);
    msg.setDestination(39974U);
    msg.setDestinationEntity(22U);
    msg.beacon.assign("WYURLZUNEKARDVMFJOCBJJWMWXBLLKXJGPPTJIDHFDSPOLMTBOZPHAWHCZASUHCNSUIUDYNOVPVCFSTXTHNZOXFNKYKVWYLKZXVMFSHQUYDQYBIHEYTPGQAIPTXPQDCCTGVZQFXRRGSORDNDIPEXBAELJEATIMEBESOKSBNMDRVJKSTFGCJZGQBNGPKRGFASJUMHNFWRAWEDVTUQEORWIZCGKYHQLUNXBLLCUWMKZQIJIRAOZ");
    msg.lat = 0.0053024385864;
    msg.lon = 0.694958085811;
    msg.depth = 0.632065470791;
    msg.query_channel = 139U;
    msg.reply_channel = 156U;
    msg.transponder_delay = 75U;

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
    msg.setTimeStamp(0.275897019709);
    msg.setSource(31461U);
    msg.setSourceEntity(123U);
    msg.setDestination(12829U);
    msg.setDestinationEntity(235U);
    msg.op = 248U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NYYIBCBEALZTK");
    tmp_msg_0.lat = 0.126347097804;
    tmp_msg_0.lon = 0.073971909039;
    tmp_msg_0.depth = 0.496934342823;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 166U;
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
    msg.setTimeStamp(0.596169309775);
    msg.setSource(54934U);
    msg.setSourceEntity(73U);
    msg.setDestination(7613U);
    msg.setDestinationEntity(31U);
    msg.op = 147U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QNBGMUBLENTEHGSZYYGLBWUSXHDBKAFCCIFNSEFSMCPYOERMOPWSUYDGJOWZFXZDCXGYKODYELZRFACPARCKEXJDQCGPLFTSYUOEZWZSDKGOJHXITJSMHQDBMWKUKJQNFICRIJVIRDMBWRIPSOUIJNAMTPYRTVRZKOLQHYMNRVVAXJBQWUQFXAVVPVVWOTPJXZVYNWMMCGDKIBGFE");
    tmp_msg_0.lat = 0.959312432382;
    tmp_msg_0.lon = 0.313286785128;
    tmp_msg_0.depth = 0.786389800307;
    tmp_msg_0.query_channel = 69U;
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
    msg.setTimeStamp(0.968259478653);
    msg.setSource(5705U);
    msg.setSourceEntity(19U);
    msg.setDestination(49887U);
    msg.setDestinationEntity(102U);
    msg.op = 233U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QGCHNLDZYWVHQFXHLSNCOYEFITGDXIZYMSQJFBMXFXGNXDQLENRXGCHTZPJBDGINOTABEEMRUICHEYRKQJAOUE");
    tmp_msg_0.lat = 0.48865861215;
    tmp_msg_0.lon = 0.891551913188;
    tmp_msg_0.depth = 0.266701625679;
    tmp_msg_0.query_channel = 192U;
    tmp_msg_0.reply_channel = 47U;
    tmp_msg_0.transponder_delay = 158U;
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
    msg.setTimeStamp(0.51426441235);
    msg.setSource(17350U);
    msg.setSourceEntity(113U);
    msg.setDestination(17891U);
    msg.setDestinationEntity(5U);
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.645919176892;
    tmp_msg_0.width = 0.944104288244;
    tmp_msg_0.length = 0.177359786999;
    tmp_msg_0.bearing = 0.594046529543;
    tmp_msg_0.pxl = -5545;
    tmp_msg_0.encoding = 228U;
    const char tmp_tmp_msg_0_0[] = {39, -43, -5, -85, 109, -21, -55, 42, 39, 3, 89, -26, 106, -30, 10, 48, 80, 41, -87, -6, 70, -5, -59, -19, -123, -3, 86, -26, 105, 11, 40, 113, -15, -17, -106, 4, 39, -83, -29, 40, 7, -41, -103, -45, -56, -114, -39, -78, 70, -96, 37, -45, 120, 38, 75, 75, 103, -69, -57, -126, -75, -85, -124, 94, -61, 117, -39, 33, 73, 97, -18, -7, -23, 92, -19, -64, -56, -19, 73, -126, -22, -9, 9, -83, -125, 92, -72, 46, 121, 74, 62, -102, 4, 102, -102, 0, -91, -99, 105, 98, 61, 28, -24, 41, 30, 35, -46, -101, 111, -48, -76, -107, -75, 18, -80, -24, -61, 41, 67, -127, -13, 65, -44, 83, -123, 60, -23, 3, 77, -118, -1, -46, 97, -61, -42, -14, 56, -12, -35, -78, -114, 106, -93, 120, -70, 77, 81, -31, -120, -20, 81, -25, -76, -19, 33, -85, -6, -90, -26, -7, 62, -94, 66, -4, 108, 124, 52, 59, 106, 14, -8, -86, 5, -128, -79, 0, -80, -93, 102, 8, 87, -50, 110, -5, 60, 49, 83, 59, 27, -38, -109, -34, -72, -74, 111, -67, 115, -79, 11, -117, -60, -111, -45, -80, 118, -46, -16, 67, -87, -58, -99, 76, 30, -117, 108, -108, -34, -13, -39, -111, -107, -56, -109, -24, 69, -105, -54, 61, 75, -60, -120, 48, 32, -113, -101, -54, 115, -9, 100, -103, 72, -58, 21, -64, 44, 52, -100, -72, -27, -68};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.0847460870659);
    msg.setSource(45576U);
    msg.setSourceEntity(213U);
    msg.setDestination(18706U);
    msg.setDestinationEntity(3U);
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.104459349706;
    tmp_tmp_msg_0_0.speed_units = 215U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.373977831392;
    tmp_tmp_msg_0_1.z_units = 7U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.100931333424;
    tmp_msg_0.lon = 0.26322567328;
    tmp_msg_0.radius = 0.210191063787;
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
    msg.setTimeStamp(0.309719230959);
    msg.setSource(25842U);
    msg.setSourceEntity(218U);
    msg.setDestination(38380U);
    msg.setDestinationEntity(214U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.301640764804;
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
    msg.setTimeStamp(0.368970436244);
    msg.setSource(20846U);
    msg.setSourceEntity(187U);
    msg.setDestination(54428U);
    msg.setDestinationEntity(30U);
    msg.op = 106U;
    msg.system.assign("PLSCVHMDGOGBEDKBITAAZCFFVGAHICPJLVKALNTQXTUVKKIBGZZHRPARXRULMHHXARJRMNJGZWEMJEUJYXVUYWFMHONBODTRQRXLWZNIDEYLHSBULTXVUDECRLOWWTJIEBBTCKFXDPIYEOGUHFEFOPQMSFQKPSCCMKWGZGVRKJVHYKEVYFIZMBPTTCNJOUMUQSZKWQAYASNSPGTXCDBLQLJOESNBHXWUINQCDNOOFVQG");
    msg.range = 0.260265939528;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("GBSZGCWHFOYRLTAXMARVEECYRGQIZPELZUOQIZIJBWIFYIALSWQUMFFNMOLHSDSDMLKLTIZYOFQZZPQDJKGODOVZDXAIJDRXVNWUJNWCTOTFHQDFNIXBVUALEPKTMLGHENDFFGUYGQXYZWRBGBWYKOZUEXQNJNPMUJUBHMJOSHRXRMTSHXAGJIVADRCMJCTACRNBPEXSKLKKYAVLYMCETEPHUVKQRPBI");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("JFPQCUJGULRVOITJZNIKJAHHRSQGQSQCFPUPUWWPQHYXNQFYNLMLCBWVEKVHACXVFRMLUGJGEKIEGMOPXDIGSDIZEWKYRRFRLYVDE");
    tmp_tmp_msg_0_0.predicate.assign("UYNCXHYNJQAKATKWTLPCVVWGSIZRJQVDJVMRHXYSEMRMDOYITJXEEQIGPVCBZZRPHSCAOBNOZWRCUVZUESRSLLHXGNSBWARQPRUQIAMPSXNAJUEFBQTNDIYZFLOTGAEFHMKSWTYAYQCUGBKDBXTWWJFKBZHOMSTJCFXDYFLEKOFPNMFORMYJUKGUPXHDOZKGTBGL");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0848339562825);
    msg.setSource(14405U);
    msg.setSourceEntity(195U);
    msg.setDestination(23033U);
    msg.setDestinationEntity(185U);
    msg.op = 199U;
    msg.system.assign("DJYLEMGYIQCMFTSSIEPFNJQTXLLPWXYCAUOZHLKHATOTDYGDJDUVCKMGXGKMLTZJBNRBAAONXKUQWIAEEFVHZGNSMIOQHTOWWTDSUPQOYVSGBFRQJUKODFWPCCZCESXBHOQXEZHRVDNPHDIBNIDSMIXZDBBVIHXFURTLUXNFNOGVJPMLAEURRWMYZNFHCRLYIAG");
    msg.range = 0.62387591495;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 10810U;
    tmp_msg_0.sys.assign("POJRLNLIAWWOTDWIYDQUBAUUALWJKGGHRAYHMXPEFQEDCDXXBPTYZCICVFLRKFBVHPZCOTXQMYVLMOSSSFTZDWCBJSGNRAWLESOAV");
    tmp_msg_0.value = 0.832201044055;
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
    msg.setTimeStamp(0.442443600042);
    msg.setSource(33779U);
    msg.setSourceEntity(182U);
    msg.setDestination(4544U);
    msg.setDestinationEntity(120U);
    msg.op = 45U;
    msg.system.assign("YVNJDEZTETANEVCRKNBMJJODSYPPHPWWFUFVLYLZTDVKJUOIXLYUNFTXBKFTSOHWYPOABMBZMVDOPXQTVCGHKJ");
    msg.range = 0.938063198278;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DUHBYJRHTONARAUUXGKJIJHGKDTKREAVSIPTSLHIQWTVFIRMVBHSTZFGYKNCNYVJHPZQOBXEBAZXUXNMFGOJIJMDC");
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
    msg.setTimeStamp(0.995311515144);
    msg.setSource(58737U);
    msg.setSourceEntity(148U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.770008031555);
    msg.setSource(40392U);
    msg.setSourceEntity(248U);
    msg.setDestination(38831U);
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
    msg.setTimeStamp(0.675819528837);
    msg.setSource(57603U);
    msg.setSourceEntity(64U);
    msg.setDestination(15251U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.706786048869);
    msg.setSource(34617U);
    msg.setSourceEntity(214U);
    msg.setDestination(58545U);
    msg.setDestinationEntity(65U);
    msg.list.assign("ZEVPUPUEGZWIKRLPLKTRPQHJKNUJWCCEBRYGWTIAXBUFSSEPFUUMNHBLSDGLSJISGRRNXWHICDAHSXHLHHDVQQSTXURUJBNTCXFPSRKSUWAMVKFNJVBFDKQEM");

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
    msg.setTimeStamp(0.195159274944);
    msg.setSource(6073U);
    msg.setSourceEntity(149U);
    msg.setDestination(62700U);
    msg.setDestinationEntity(99U);
    msg.list.assign("IZZBVEPGSWJMQURBNOOPXJWUCNDPSKDFGDJDUDHQHLKBJIIARSWFNRHIZQUAGPNRWSNGQGCKCQRELELTAYYOINKWICRKQTAMWTTUJZRLFTJICSKYYTRBHTBJBPDCCLPJYYMZADFFCQBBGDCLRQVYEAMXUPWTMNPXXJIDEMZXHTCSEISGHJEOAYRXWELMHFLZOOOVMXXVHPBZHEVHQTZGSGFUAQFOINVLVKSUFDNKOBAFYWXXKUG");

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
    msg.setTimeStamp(0.770631040679);
    msg.setSource(12512U);
    msg.setSourceEntity(150U);
    msg.setDestination(1810U);
    msg.setDestinationEntity(215U);
    msg.list.assign("OURUDSMXFOMDDTPGFBHSVYYVNHCTRIQASVVKMZTFKZQZWPIZSARYJYUXSHXRKNKTIGPHQGSEOPZFUQWNLREHXGDCQDMNOCQLAZGEWRDSX");

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
    msg.setTimeStamp(0.788311859623);
    msg.setSource(41948U);
    msg.setSourceEntity(186U);
    msg.setDestination(55921U);
    msg.setDestinationEntity(143U);
    msg.peer.assign("JYCBJJPFEWCRBDCSAIEHZZGWNOHKRITXINTMBMCAEAQQNQXRZFXRMLIKZCCXBHVOTJTQZKSYLIOYPVWRJIEDDFHXUBOLHHMFKTSIEGJLXUHFNMHOBLCFBPOYKMQVEETFTDRTVWLWNQQZJLEKPOURKDBTLKDDYENU");
    msg.rssi = 0.31829719466;
    msg.integrity = 12181U;

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
    msg.setTimeStamp(0.347933628781);
    msg.setSource(21875U);
    msg.setSourceEntity(219U);
    msg.setDestination(55975U);
    msg.setDestinationEntity(149U);
    msg.peer.assign("HKCLXMAFFQRXDYUDDTUMGPSU");
    msg.rssi = 0.0363291907267;
    msg.integrity = 19844U;

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
    msg.setTimeStamp(0.392962764358);
    msg.setSource(15226U);
    msg.setSourceEntity(216U);
    msg.setDestination(51599U);
    msg.setDestinationEntity(41U);
    msg.peer.assign("QRBWVHVIVQOZOSNNMCZYKSWPMNKLCCARSCLJTFYJWVYUDPCNTPBOXEKWDZALFIHDUPRBIOKEQQXDMHRARBVYQKWQIJIYHSTZPEHYAUTWXAQZONLUVSDIGXZDPMBLDDEYHAGOEERGGXKXWGDMQXQHLBIGLFZKXYAOLOCGVKWYRMPHULNEXZFPYTOEFISHBPURTREJBDM");
    msg.rssi = 0.763269385688;
    msg.integrity = 43601U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.815653579749);
    msg.setSource(2694U);
    msg.setSourceEntity(165U);
    msg.setDestination(34135U);
    msg.setDestinationEntity(47U);
    msg.value = 27391;

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
    msg.setTimeStamp(0.0558578939837);
    msg.setSource(8070U);
    msg.setSourceEntity(12U);
    msg.setDestination(28488U);
    msg.setDestinationEntity(185U);
    msg.value = 9226;

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
    msg.setTimeStamp(0.00621751639833);
    msg.setSource(37834U);
    msg.setSourceEntity(44U);
    msg.setDestination(28966U);
    msg.setDestinationEntity(133U);
    msg.value = 29259;

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
    msg.setTimeStamp(0.112205836644);
    msg.setSource(62444U);
    msg.setSourceEntity(56U);
    msg.setDestination(50484U);
    msg.setDestinationEntity(44U);
    msg.value = 0.166837929245;

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
    msg.setTimeStamp(0.777011938631);
    msg.setSource(12728U);
    msg.setSourceEntity(114U);
    msg.setDestination(21376U);
    msg.setDestinationEntity(204U);
    msg.value = 0.46551084208;

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
    msg.setTimeStamp(0.446774272524);
    msg.setSource(20359U);
    msg.setSourceEntity(5U);
    msg.setDestination(11518U);
    msg.setDestinationEntity(179U);
    msg.value = 0.382299567771;

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
    msg.setTimeStamp(0.316563372883);
    msg.setSource(1792U);
    msg.setSourceEntity(88U);
    msg.setDestination(35633U);
    msg.setDestinationEntity(122U);
    msg.value = 0.592730290489;

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
    msg.setTimeStamp(0.843362358524);
    msg.setSource(46792U);
    msg.setSourceEntity(153U);
    msg.setDestination(35306U);
    msg.setDestinationEntity(125U);
    msg.value = 0.376946720283;

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
    msg.setTimeStamp(0.432561948033);
    msg.setSource(13208U);
    msg.setSourceEntity(2U);
    msg.setDestination(8686U);
    msg.setDestinationEntity(92U);
    msg.value = 0.00168664107148;

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
    msg.setTimeStamp(0.427558366705);
    msg.setSource(64996U);
    msg.setSourceEntity(137U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(195U);
    msg.validity = 38814U;
    msg.type = 113U;
    msg.utc_year = 48915U;
    msg.utc_month = 127U;
    msg.utc_day = 55U;
    msg.utc_time = 0.146733266511;
    msg.lat = 0.965187461387;
    msg.lon = 0.417667749277;
    msg.height = 0.0578896589282;
    msg.satellites = 75U;
    msg.cog = 0.102460549992;
    msg.sog = 0.351470798004;
    msg.hdop = 0.713973338499;
    msg.vdop = 0.0104423247514;
    msg.hacc = 0.417175781246;
    msg.vacc = 0.740108909326;

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
    msg.setTimeStamp(0.00340865525868);
    msg.setSource(8374U);
    msg.setSourceEntity(105U);
    msg.setDestination(42708U);
    msg.setDestinationEntity(86U);
    msg.validity = 39196U;
    msg.type = 239U;
    msg.utc_year = 41438U;
    msg.utc_month = 91U;
    msg.utc_day = 190U;
    msg.utc_time = 0.882158773189;
    msg.lat = 0.477294061609;
    msg.lon = 0.242588257243;
    msg.height = 0.669431654397;
    msg.satellites = 70U;
    msg.cog = 0.420369558325;
    msg.sog = 0.129762239181;
    msg.hdop = 0.9970317815;
    msg.vdop = 0.683989554871;
    msg.hacc = 0.902078838357;
    msg.vacc = 0.421428137075;

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
    msg.setTimeStamp(0.282917741983);
    msg.setSource(33098U);
    msg.setSourceEntity(89U);
    msg.setDestination(63931U);
    msg.setDestinationEntity(85U);
    msg.validity = 50205U;
    msg.type = 94U;
    msg.utc_year = 24050U;
    msg.utc_month = 196U;
    msg.utc_day = 3U;
    msg.utc_time = 0.550325844911;
    msg.lat = 0.635098710974;
    msg.lon = 0.772739879827;
    msg.height = 0.0820845717474;
    msg.satellites = 133U;
    msg.cog = 0.0576085972648;
    msg.sog = 0.498256312235;
    msg.hdop = 0.542823003156;
    msg.vdop = 0.92089828571;
    msg.hacc = 0.117547024737;
    msg.vacc = 0.800480048434;

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
    msg.setTimeStamp(0.464858732568);
    msg.setSource(7454U);
    msg.setSourceEntity(97U);
    msg.setDestination(26867U);
    msg.setDestinationEntity(86U);
    msg.time = 0.219566914662;
    msg.phi = 0.705935579944;
    msg.theta = 0.239290492049;
    msg.psi = 0.726662722934;
    msg.psi_magnetic = 0.363039375129;

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
    msg.setTimeStamp(0.65923719341);
    msg.setSource(42646U);
    msg.setSourceEntity(236U);
    msg.setDestination(61399U);
    msg.setDestinationEntity(135U);
    msg.time = 0.055227462003;
    msg.phi = 0.898445924185;
    msg.theta = 0.359422938377;
    msg.psi = 0.986201177056;
    msg.psi_magnetic = 0.280922577859;

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
    msg.setTimeStamp(0.919599343378);
    msg.setSource(65126U);
    msg.setSourceEntity(118U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(20U);
    msg.time = 0.295032298158;
    msg.phi = 0.183006525202;
    msg.theta = 0.961110514897;
    msg.psi = 0.53215225455;
    msg.psi_magnetic = 0.433311612495;

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
    msg.setTimeStamp(0.479884945522);
    msg.setSource(26587U);
    msg.setSourceEntity(148U);
    msg.setDestination(54287U);
    msg.setDestinationEntity(28U);
    msg.time = 0.592055804688;
    msg.x = 0.659400604964;
    msg.y = 0.998843288172;
    msg.z = 0.131112626392;
    msg.timestep = 0.415730131954;

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
    msg.setTimeStamp(0.418720047191);
    msg.setSource(56652U);
    msg.setSourceEntity(16U);
    msg.setDestination(57144U);
    msg.setDestinationEntity(229U);
    msg.time = 0.150040614348;
    msg.x = 0.507540564307;
    msg.y = 0.816570867816;
    msg.z = 0.220887661622;
    msg.timestep = 0.0706297919079;

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
    msg.setTimeStamp(0.00127571427665);
    msg.setSource(9404U);
    msg.setSourceEntity(15U);
    msg.setDestination(38394U);
    msg.setDestinationEntity(43U);
    msg.time = 0.569957078317;
    msg.x = 0.177632630299;
    msg.y = 0.329891957428;
    msg.z = 0.728134815566;
    msg.timestep = 0.689944581727;

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
    msg.setTimeStamp(0.492447415408);
    msg.setSource(51761U);
    msg.setSourceEntity(168U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(57U);
    msg.time = 0.395119619747;
    msg.x = 0.562380939985;
    msg.y = 0.0267925790575;
    msg.z = 0.48313935675;

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
    msg.setTimeStamp(0.638057571138);
    msg.setSource(10810U);
    msg.setSourceEntity(20U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(25U);
    msg.time = 0.382939760275;
    msg.x = 0.660664858509;
    msg.y = 0.151493366709;
    msg.z = 0.374594558047;

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
    msg.setTimeStamp(0.0514337601971);
    msg.setSource(27206U);
    msg.setSourceEntity(160U);
    msg.setDestination(40731U);
    msg.setDestinationEntity(42U);
    msg.time = 0.419881078779;
    msg.x = 0.121507670547;
    msg.y = 0.118877691813;
    msg.z = 0.488061354408;

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
    msg.setTimeStamp(0.571959056981);
    msg.setSource(19091U);
    msg.setSourceEntity(55U);
    msg.setDestination(49731U);
    msg.setDestinationEntity(243U);
    msg.time = 0.649115493694;
    msg.x = 0.101750809625;
    msg.y = 0.988148097908;
    msg.z = 0.894935729864;

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
    msg.setTimeStamp(0.584428556732);
    msg.setSource(65071U);
    msg.setSourceEntity(40U);
    msg.setDestination(30038U);
    msg.setDestinationEntity(125U);
    msg.time = 0.994726371014;
    msg.x = 0.0691980385899;
    msg.y = 0.812879172884;
    msg.z = 0.619500481679;

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
    msg.setTimeStamp(0.105750415895);
    msg.setSource(45327U);
    msg.setSourceEntity(207U);
    msg.setDestination(32607U);
    msg.setDestinationEntity(102U);
    msg.time = 0.918430257491;
    msg.x = 0.538886970583;
    msg.y = 0.805175430706;
    msg.z = 0.770516626168;

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
    msg.setTimeStamp(0.893107364498);
    msg.setSource(14751U);
    msg.setSourceEntity(138U);
    msg.setDestination(4175U);
    msg.setDestinationEntity(106U);
    msg.time = 0.536181650595;
    msg.x = 0.0194930143947;
    msg.y = 0.746492699264;
    msg.z = 0.818626086001;

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
    msg.setTimeStamp(0.644408041363);
    msg.setSource(41940U);
    msg.setSourceEntity(201U);
    msg.setDestination(48774U);
    msg.setDestinationEntity(170U);
    msg.time = 0.322522800145;
    msg.x = 0.868073067505;
    msg.y = 0.858118582067;
    msg.z = 0.0560219998485;

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
    msg.setTimeStamp(0.43835970644);
    msg.setSource(13395U);
    msg.setSourceEntity(161U);
    msg.setDestination(31042U);
    msg.setDestinationEntity(171U);
    msg.time = 0.765773500719;
    msg.x = 0.0587405568601;
    msg.y = 0.825884987098;
    msg.z = 0.283651083766;

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
    msg.setTimeStamp(0.952431010386);
    msg.setSource(29273U);
    msg.setSourceEntity(208U);
    msg.setDestination(41113U);
    msg.setDestinationEntity(236U);
    msg.validity = 138U;
    msg.x = 0.68890181868;
    msg.y = 0.77012004178;
    msg.z = 0.0956378355187;

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
    msg.setTimeStamp(0.900722508168);
    msg.setSource(47660U);
    msg.setSourceEntity(231U);
    msg.setDestination(20795U);
    msg.setDestinationEntity(164U);
    msg.validity = 186U;
    msg.x = 0.944583563964;
    msg.y = 0.146816553568;
    msg.z = 0.0267286806491;

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
    msg.setTimeStamp(0.410546815143);
    msg.setSource(45304U);
    msg.setSourceEntity(80U);
    msg.setDestination(54635U);
    msg.setDestinationEntity(121U);
    msg.validity = 237U;
    msg.x = 0.461059873818;
    msg.y = 0.057982911769;
    msg.z = 0.21590349335;

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
    msg.setTimeStamp(0.749725732018);
    msg.setSource(47813U);
    msg.setSourceEntity(228U);
    msg.setDestination(7549U);
    msg.setDestinationEntity(186U);
    msg.validity = 146U;
    msg.x = 0.7797741156;
    msg.y = 0.551660980054;
    msg.z = 0.352046400189;

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
    msg.setTimeStamp(0.470464225953);
    msg.setSource(57028U);
    msg.setSourceEntity(36U);
    msg.setDestination(52360U);
    msg.setDestinationEntity(21U);
    msg.validity = 237U;
    msg.x = 0.658406369208;
    msg.y = 0.572616598727;
    msg.z = 0.729266691823;

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
    msg.setTimeStamp(0.175923472143);
    msg.setSource(43109U);
    msg.setSourceEntity(202U);
    msg.setDestination(44377U);
    msg.setDestinationEntity(41U);
    msg.validity = 111U;
    msg.x = 0.877655912924;
    msg.y = 0.766185650401;
    msg.z = 0.0982683864734;

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
    msg.setTimeStamp(0.919700523822);
    msg.setSource(38255U);
    msg.setSourceEntity(48U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(158U);
    msg.time = 0.180105026607;
    msg.x = 0.0776614236959;
    msg.y = 0.586140129987;
    msg.z = 0.338871559715;

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
    msg.setTimeStamp(0.632293221858);
    msg.setSource(3027U);
    msg.setSourceEntity(238U);
    msg.setDestination(30679U);
    msg.setDestinationEntity(148U);
    msg.time = 0.897244711028;
    msg.x = 0.268200985386;
    msg.y = 0.0868629494658;
    msg.z = 0.159383544154;

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
    msg.setTimeStamp(0.73612581006);
    msg.setSource(21889U);
    msg.setSourceEntity(116U);
    msg.setDestination(19679U);
    msg.setDestinationEntity(224U);
    msg.time = 0.537606590451;
    msg.x = 0.331823431285;
    msg.y = 0.407459531188;
    msg.z = 0.0421933202023;

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
    msg.setTimeStamp(0.463903996669);
    msg.setSource(40374U);
    msg.setSourceEntity(216U);
    msg.setDestination(609U);
    msg.setDestinationEntity(215U);
    msg.validity = 141U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0734627740831;
    tmp_msg_0.y = 0.333571845868;
    tmp_msg_0.z = 0.655004910817;
    tmp_msg_0.phi = 0.923139330623;
    tmp_msg_0.theta = 0.935822694905;
    tmp_msg_0.psi = 0.301188600372;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.21222041592;

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
    msg.setTimeStamp(0.663621719027);
    msg.setSource(34840U);
    msg.setSourceEntity(12U);
    msg.setDestination(12788U);
    msg.setDestinationEntity(147U);
    msg.validity = 147U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.230573115236;
    tmp_msg_0.beam_height = 0.553767398347;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0618377435432;

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
    msg.setTimeStamp(0.425398188561);
    msg.setSource(39143U);
    msg.setSourceEntity(17U);
    msg.setDestination(44540U);
    msg.setDestinationEntity(58U);
    msg.validity = 130U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.57083503401;
    tmp_msg_0.beam_height = 0.291518249238;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.964243433236;

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
    msg.setTimeStamp(0.287921856044);
    msg.setSource(6524U);
    msg.setSourceEntity(106U);
    msg.setDestination(56427U);
    msg.setDestinationEntity(38U);
    msg.value = 0.976070624343;

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
    msg.setTimeStamp(0.499173997875);
    msg.setSource(14104U);
    msg.setSourceEntity(69U);
    msg.setDestination(65181U);
    msg.setDestinationEntity(177U);
    msg.value = 0.644833409216;

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
    msg.setTimeStamp(0.84169230521);
    msg.setSource(39257U);
    msg.setSourceEntity(181U);
    msg.setDestination(22077U);
    msg.setDestinationEntity(131U);
    msg.value = 0.450870625069;

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
    msg.setTimeStamp(0.576459475137);
    msg.setSource(34761U);
    msg.setSourceEntity(241U);
    msg.setDestination(1413U);
    msg.setDestinationEntity(65U);
    msg.value = 0.933712817797;

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
    msg.setTimeStamp(0.0269952699056);
    msg.setSource(43428U);
    msg.setSourceEntity(201U);
    msg.setDestination(3116U);
    msg.setDestinationEntity(145U);
    msg.value = 0.126586770471;

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
    msg.setTimeStamp(0.597624885056);
    msg.setSource(55610U);
    msg.setSourceEntity(98U);
    msg.setDestination(19048U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0275473400856;

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
    msg.setTimeStamp(0.220821399022);
    msg.setSource(18972U);
    msg.setSourceEntity(231U);
    msg.setDestination(59331U);
    msg.setDestinationEntity(5U);
    msg.value = 0.922868765799;

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
    msg.setTimeStamp(0.106569929599);
    msg.setSource(10115U);
    msg.setSourceEntity(223U);
    msg.setDestination(45960U);
    msg.setDestinationEntity(55U);
    msg.value = 0.0531886468192;

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
    msg.setTimeStamp(0.159875531323);
    msg.setSource(17238U);
    msg.setSourceEntity(44U);
    msg.setDestination(11805U);
    msg.setDestinationEntity(86U);
    msg.value = 0.87595954941;

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
    msg.setTimeStamp(0.877130780241);
    msg.setSource(3329U);
    msg.setSourceEntity(175U);
    msg.setDestination(2044U);
    msg.setDestinationEntity(0U);
    msg.value = 0.354265702396;

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
    msg.setTimeStamp(0.259328502483);
    msg.setSource(9345U);
    msg.setSourceEntity(145U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(217U);
    msg.value = 0.739338334287;

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
    msg.setTimeStamp(0.67928133541);
    msg.setSource(51843U);
    msg.setSourceEntity(85U);
    msg.setDestination(848U);
    msg.setDestinationEntity(205U);
    msg.value = 0.961391256659;

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
    msg.setTimeStamp(0.176623669385);
    msg.setSource(44771U);
    msg.setSourceEntity(210U);
    msg.setDestination(40150U);
    msg.setDestinationEntity(27U);
    msg.value = 0.232351320314;

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
    msg.setTimeStamp(0.940493602025);
    msg.setSource(28419U);
    msg.setSourceEntity(162U);
    msg.setDestination(50189U);
    msg.setDestinationEntity(4U);
    msg.value = 0.239667564773;

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
    msg.setTimeStamp(0.837821578865);
    msg.setSource(18879U);
    msg.setSourceEntity(193U);
    msg.setDestination(20091U);
    msg.setDestinationEntity(237U);
    msg.value = 0.531590352597;

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
    msg.setTimeStamp(0.439512101448);
    msg.setSource(62044U);
    msg.setSourceEntity(180U);
    msg.setDestination(16019U);
    msg.setDestinationEntity(79U);
    msg.value = 0.474409981197;

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
    msg.setTimeStamp(0.112543072656);
    msg.setSource(9494U);
    msg.setSourceEntity(200U);
    msg.setDestination(27806U);
    msg.setDestinationEntity(105U);
    msg.value = 0.866535375623;

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
    msg.setTimeStamp(0.138280253096);
    msg.setSource(46598U);
    msg.setSourceEntity(208U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(77U);
    msg.value = 0.466487167927;

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
    msg.setTimeStamp(0.094756991353);
    msg.setSource(44396U);
    msg.setSourceEntity(163U);
    msg.setDestination(39879U);
    msg.setDestinationEntity(231U);
    msg.value = 0.594119441365;

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
    msg.setTimeStamp(0.887044968827);
    msg.setSource(50379U);
    msg.setSourceEntity(75U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(189U);
    msg.value = 0.613369822449;

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
    msg.setTimeStamp(0.0806794548437);
    msg.setSource(51222U);
    msg.setSourceEntity(73U);
    msg.setDestination(22072U);
    msg.setDestinationEntity(140U);
    msg.value = 0.744142076511;

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
    msg.setTimeStamp(0.967334388012);
    msg.setSource(56693U);
    msg.setSourceEntity(34U);
    msg.setDestination(29464U);
    msg.setDestinationEntity(23U);
    msg.value = 0.644519589822;

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
    msg.setTimeStamp(0.287998040007);
    msg.setSource(12209U);
    msg.setSourceEntity(66U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(140U);
    msg.value = 0.171816532981;

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
    msg.setTimeStamp(0.197539376176);
    msg.setSource(24839U);
    msg.setSourceEntity(168U);
    msg.setDestination(9774U);
    msg.setDestinationEntity(201U);
    msg.value = 0.739028573308;

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
    msg.setTimeStamp(0.738258294347);
    msg.setSource(35821U);
    msg.setSourceEntity(200U);
    msg.setDestination(41531U);
    msg.setDestinationEntity(181U);
    msg.direction = 0.359745195706;
    msg.speed = 0.894726921314;
    msg.turbulence = 0.255025955032;

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
    msg.setTimeStamp(0.0942743886604);
    msg.setSource(52020U);
    msg.setSourceEntity(226U);
    msg.setDestination(56042U);
    msg.setDestinationEntity(6U);
    msg.direction = 0.890919301396;
    msg.speed = 0.357323271467;
    msg.turbulence = 0.61510836135;

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
    msg.setTimeStamp(0.385692543321);
    msg.setSource(58054U);
    msg.setSourceEntity(159U);
    msg.setDestination(33502U);
    msg.setDestinationEntity(129U);
    msg.direction = 0.768923377187;
    msg.speed = 0.806494351309;
    msg.turbulence = 0.30727174745;

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
    msg.setTimeStamp(0.480597004489);
    msg.setSource(33723U);
    msg.setSourceEntity(48U);
    msg.setDestination(8192U);
    msg.setDestinationEntity(36U);
    msg.value = 0.63137647413;

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
    msg.setTimeStamp(0.475485531537);
    msg.setSource(37790U);
    msg.setSourceEntity(223U);
    msg.setDestination(24212U);
    msg.setDestinationEntity(251U);
    msg.value = 0.295499453104;

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
    msg.setTimeStamp(0.96977378546);
    msg.setSource(21926U);
    msg.setSourceEntity(94U);
    msg.setDestination(3732U);
    msg.setDestinationEntity(5U);
    msg.value = 0.259001675953;

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
    msg.setTimeStamp(0.427459280955);
    msg.setSource(60808U);
    msg.setSourceEntity(245U);
    msg.setDestination(7753U);
    msg.setDestinationEntity(57U);
    msg.value.assign("SZILVTQGDFSKEOMLHLMUCOVDHZAATXVYRDNWHKMWEZBEYDHRAPZKOXJUZQLIAYGXJEUURJJVVMVNSBLLBWQRBSMGJSLOGQIGNLMFATFEYJITYHIZOPPDPEKYNMVXCTLZUCWZWGUQVPEQOXGRBMKHCWX");

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
    msg.setTimeStamp(0.817427901975);
    msg.setSource(29395U);
    msg.setSourceEntity(177U);
    msg.setDestination(41372U);
    msg.setDestinationEntity(151U);
    msg.value.assign("YRZOCMXTSGYWLSHMFAZEQIYQRDVOFYINGWEVZMTY");

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
    msg.setTimeStamp(0.566703855476);
    msg.setSource(41159U);
    msg.setSourceEntity(82U);
    msg.setDestination(59446U);
    msg.setDestinationEntity(77U);
    msg.value.assign("KNVHJDJIOMQTLRSNFPLYCGIJWZZKBHVMERLOALOMLQVYUVGWFZCBHQNFSNXJDMOKSCODXZDLOIBFYOMVAGWNBRHJBIIUGYYVSPQFLHEVKRGICMBRASNFPHYJIWMWGUCIOZDCTZRPAPSA");

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
    msg.setTimeStamp(0.0159890257693);
    msg.setSource(19314U);
    msg.setSourceEntity(227U);
    msg.setDestination(6674U);
    msg.setDestinationEntity(36U);
    const char tmp_msg_0[] = {118, -60, 39, -67, -41, 83, -89, -46, -92, -122, 82, -79, -67, 75, -24, 7, 24, -85, -50, -20, 29, 3, 115, 79, -11, -114, -31, 91, 0, 29, -119, -40, 43, 100, 126, -117, 20, 24, -126, -38, -117, -2, 81, 123, 40, -99, 92, 111, 71, -90, -109, -82, 45, -77, -22, -61, -46, 80, -97, 126, 102, -53, 28, -98, -88, 23, 51, -128, -87, -33, 120, 14, -26, -69, 10, -85, -7, -97, -4};
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
    msg.setTimeStamp(0.28846390859);
    msg.setSource(56095U);
    msg.setSourceEntity(126U);
    msg.setDestination(5874U);
    msg.setDestinationEntity(109U);
    const char tmp_msg_0[] = {-95, 94, -42, 97, 5, -75, -89, -30, 6, -52, -30, 19, -56, 99, 13, -32, -114, -48, 61, 33, 5, -77, -98, 119, -98, -33, 102, -126, -23, 63, 32, 23, -15, -68, 71, -89, 22, 91, -61, -73, -46, 69, -60, -23, -90, -96, 27, -93, 22, 12, -15, 28, -47, -118, 3, -31, -22, -58, -122, -48, -33, -40, 7, -8, -29, -115, 10, 107, 30, 107, -113, 43, -98, -63, 6, -1, 68, 71, -109, -51, 72, 98, -3, 99, -55, -96, 103, -29, 96, -73, 63, -3, 63, 10, 84, 97, 53, -1, 23, 72, -56, 25, -57, -82, 57, -100, -35, 34, 62, 107, -95, 62, -53, 17, 75, -65, -14, -2, -39, 55, -50, -122, -113, -95, 111, -124, -52, 27, -97, -94, -80, -65, -116, -30, 126, -64, -115, 53, -108, 32, 76, 95, -101, 126, 111, 87, 46, -102, 66, -11, -27, 122, -81, -113, 84, 10, 120, 94, 82, 18, -123, -8, -128, -63, 111, 67, 33, -23, -76, -34, -121, 88, 30, -63, -76, 76, 59, -90, -33, 51, -125, 79, -59, 61, -81, -127, 54, -114, 32, -84, -106, 50, -73, 89, -100, -100, -59, 16, 32, 62, 19, -34};
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
    msg.setTimeStamp(0.871961648012);
    msg.setSource(12643U);
    msg.setSourceEntity(247U);
    msg.setDestination(61265U);
    msg.setDestinationEntity(65U);
    const char tmp_msg_0[] = {-62, 69, -43, 9, 39, 64, 115, 17, 98, -103, -80, -32, 41, 17, -117, 15, -114, -97, -92, -48, -18, 72, 99, -82, 41, 84, -28, -98, -126, 41, -22, 23, 2, 111, 66, 76, -1, -47, -6, 6, 103, -89, -110, 65, 123, -119, 81, 23, 110, -80, 25, 77, 119, 74, -90, 27, -62, -16, 126, -31, 20, -16, -81, 18, -117, -67, -101, -104, 84, -19, -114, 55, 27, -85, 117, 43, -73, 6, -33, -118, -68, -64, 87, 58, -102, 37, 110, -99, 2, 100, 106, 123, 50, -22, -1, 116, -70, 122, -58, 73, 59, -33, -87, -41, -3, -2, 112, 8, 49, -92, -40, 84, -1, -128, 17, 77, 30, 30, -90, 60, 19, 106, -64, 83, -47, 74, -98, 20, -97, 64, -100, -2, -66, 101, -86, -127, -15, -99, 13, 106, 6, 117, 75, 51, 124, -21, 1, 90, -84, 40, 56, -2, 8, 68, 60, -106, 126, 72, 4, -60, -17, -24, -77, -11, -95};
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
    msg.setTimeStamp(0.0046545214752);
    msg.setSource(19980U);
    msg.setSourceEntity(138U);
    msg.setDestination(61510U);
    msg.setDestinationEntity(35U);
    msg.type = 62U;
    msg.frequency = 2272927232U;
    msg.min_range = 14316U;
    msg.max_range = 14675U;
    msg.bits_per_point = 229U;
    msg.scale_factor = 0.940873314748;
    const char tmp_msg_0[] = {-41, -56, -20, -116, -18, 36, 77, 58, 36, 10, -5, -70, 50, -50, -113, -59, 11, 75, 52, 52, 25, 66, -98, 82, -64, 30, 29, -66, -112, -121, -48, -119, 85, 63, 83, 67, -42, -20, -40, -82, -114, 33, -6, -31, -22, -116, 2, 73, 30, -63, 125, 126, 8, 7, 90, -71, 47, -92, 68, -28, 77, -69, -126, -18, -25, -127, 75, 76, -96, -79, 12, 65, 96, -51, 79, -53, -73, -14, 15, -8, -108, -21, 63, 126, 1, -64, 24, -94, -84, 46, 14, -30, -116, 40, 46, 111, 17, -65, -57, 78, 17, 20, -40, -43, 93, -60, -37, 14, 17, -104, -70, 66, 4, 8, -22, -119};
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
    msg.setTimeStamp(0.754998171633);
    msg.setSource(28040U);
    msg.setSourceEntity(168U);
    msg.setDestination(35793U);
    msg.setDestinationEntity(132U);
    msg.type = 193U;
    msg.frequency = 3288019406U;
    msg.min_range = 22125U;
    msg.max_range = 59908U;
    msg.bits_per_point = 237U;
    msg.scale_factor = 0.392953750327;
    const char tmp_msg_0[] = {44, -108, 69, 98, 42, 85, 26, -99, -12, -71, -87, -106, 5, 121, 52, -11, 38, -78, 34, 20, -4, -121, -38, -22, 124, 25, 62, 99, 115, -63, -54, 9, -29, 111, -116, -97, 79, -10, -85, 34, 49, -118, 43, -121, 34, -41, 117, 109, 100, 7, -47, 29, -90, -108, -5, 28, 12, -105, 107, 76, -114, -122, 51, -50, 114, -44, 14, -10, -99, -45, 63};
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
    msg.setTimeStamp(0.865260522207);
    msg.setSource(2182U);
    msg.setSourceEntity(87U);
    msg.setDestination(63006U);
    msg.setDestinationEntity(45U);
    msg.type = 82U;
    msg.frequency = 4166370902U;
    msg.min_range = 12247U;
    msg.max_range = 55830U;
    msg.bits_per_point = 212U;
    msg.scale_factor = 0.0153338023617;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.607753132226;
    tmp_msg_0.beam_height = 0.531975386303;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {83, 105, 71, -56, 80, 117, -48, -75, -32, -19, 118, 31, 109, -76, 30, 87, 69, 104, -12, -105, -26, 108, 111, -46, -110, -22, -64, 110, -87, -37, 76, 74, 60, 32, -92, -118, 71, 46, -112, 91, 62, -83, -65, -12, 122, -83, -119, -16, 101, 29, -91, 23, 66, -79, -5, 45, 69, -84, 74, -104, 27, 69, 41, 110, 115, -3, -12, 20, 34, -73, -46, -116, 39, -124, 36, -54, 125, -26, 102, 54, 108, -2, -3, 1, -26, -76, -126, 40, 41, 47, 73, 29, 60, 97, 110, -43, -115, 124, 121, 91, -93, 29, 39, 116, 124, 10, 49, 77, -127, 18, 119, 0, -115, 29, 11, -91, 117, -40, -7, -91, 75, 83, 106, -71, -100, 33, 80, 104, -112, -38, -64, 70, 26, -16, -40, -96, -86, -110, -65, 4, 98, 39, 102, 123, -113, -13, -118, 95, -103, 73, -57, -21, -45, -48, -43, 44, 18, 124, 23, -63, 100, -67, -40, 103, -33, -26, 45, -47, -55, 53, -120, -43, -24, -19, -101, 31, 59, 119, -55, 5, -74, 27, 67, 65, 80, 117, 121, 25, 81, 35};
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
    msg.setTimeStamp(0.301301650677);
    msg.setSource(61926U);
    msg.setSourceEntity(3U);
    msg.setDestination(19050U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.279456095349);
    msg.setSource(31583U);
    msg.setSourceEntity(251U);
    msg.setDestination(51906U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.00583614813174);
    msg.setSource(33809U);
    msg.setSourceEntity(247U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.854776902811);
    msg.setSource(16397U);
    msg.setSourceEntity(149U);
    msg.setDestination(8903U);
    msg.setDestinationEntity(113U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.294089744794);
    msg.setSource(40861U);
    msg.setSourceEntity(162U);
    msg.setDestination(63121U);
    msg.setDestinationEntity(106U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.815638884346);
    msg.setSource(10300U);
    msg.setSourceEntity(6U);
    msg.setDestination(47811U);
    msg.setDestinationEntity(180U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.0980336443401);
    msg.setSource(56680U);
    msg.setSourceEntity(236U);
    msg.setDestination(21931U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0690996334811;
    msg.confidence = 0.24880117315;
    msg.opmodes.assign("KEKGACBJQGWPMQRKHVLNVBSIJCQPCIOYMZHHUMWTCFWBVGSGDBCZLFESMPQAFQJDDXTFSKTFOUNLYTOHFOKUGWIADHWDZIVEBOQYQQJZKYDGYXVZRGJPXKCBRISEYZOTRYQWWZPJHFETGURWXDACAAZRSAJUMXDOKGVZMIWLE");

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
    msg.setTimeStamp(0.850748196141);
    msg.setSource(53528U);
    msg.setSourceEntity(195U);
    msg.setDestination(58522U);
    msg.setDestinationEntity(73U);
    msg.value = 0.327562126912;
    msg.confidence = 0.383125453869;
    msg.opmodes.assign("ZGBFCJQNICKQJRPHEFKIIKRATIHPLPATXFEUJADDHBFNZBPYKHYEYSOOZEZRZ");

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
    msg.setTimeStamp(0.800754360952);
    msg.setSource(18567U);
    msg.setSourceEntity(228U);
    msg.setDestination(52925U);
    msg.setDestinationEntity(3U);
    msg.value = 0.823598094829;
    msg.confidence = 0.1710651579;
    msg.opmodes.assign("OJYGAZTVMFEQKDXYEAGSLHDWLMLHFVNWTLLPIVGXQGIYUPDNFCBHTQWZZGEJWKUTNDDRWGZTXLYKRVIMQBKIBYVWJKNCDPBPYRWCFUJABWXCCSMBCMTBINSHFQPUNGROSZYBKOOYOEOTLIXUSENLQSLTSAEZNSADAKZLOMPRVUPNZXITFEEMCJGONFMXQCPMRHJSYPYDIHTAUFEDZRFUQRIPVKOUDJRWKHJVHHBJXVAASBFJZGOIWMXCA");

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
    msg.setTimeStamp(0.200354326708);
    msg.setSource(4351U);
    msg.setSourceEntity(160U);
    msg.setDestination(29069U);
    msg.setDestinationEntity(211U);
    msg.itow = 1174230609U;
    msg.lat = 0.468537002253;
    msg.lon = 0.0499086755915;
    msg.height_ell = 0.66399723684;
    msg.height_sea = 0.792871080419;
    msg.hacc = 0.014185054932;
    msg.vacc = 0.373114713263;
    msg.vel_n = 0.213304462087;
    msg.vel_e = 0.688209320509;
    msg.vel_d = 0.266983813032;
    msg.speed = 0.549377687969;
    msg.gspeed = 0.157674579906;
    msg.heading = 0.635030820996;
    msg.sacc = 0.645702040855;
    msg.cacc = 0.789537980507;

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
    msg.setTimeStamp(0.528764067937);
    msg.setSource(39737U);
    msg.setSourceEntity(133U);
    msg.setDestination(9123U);
    msg.setDestinationEntity(156U);
    msg.itow = 3271280063U;
    msg.lat = 0.367893171205;
    msg.lon = 0.952393212703;
    msg.height_ell = 0.400530417395;
    msg.height_sea = 0.549945700014;
    msg.hacc = 0.537638091094;
    msg.vacc = 0.351539945309;
    msg.vel_n = 0.581875207741;
    msg.vel_e = 0.426942723248;
    msg.vel_d = 0.0341281964263;
    msg.speed = 0.78019077778;
    msg.gspeed = 0.558004560143;
    msg.heading = 0.915786189151;
    msg.sacc = 0.471832472523;
    msg.cacc = 0.834236569952;

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
    msg.setTimeStamp(0.155475301787);
    msg.setSource(25835U);
    msg.setSourceEntity(41U);
    msg.setDestination(18993U);
    msg.setDestinationEntity(182U);
    msg.itow = 2406236803U;
    msg.lat = 0.0950944258942;
    msg.lon = 0.942143079525;
    msg.height_ell = 0.639110294203;
    msg.height_sea = 0.979834847895;
    msg.hacc = 0.909458464588;
    msg.vacc = 0.980953090834;
    msg.vel_n = 0.0964897635086;
    msg.vel_e = 0.579819361433;
    msg.vel_d = 0.0756992556491;
    msg.speed = 0.00586667084224;
    msg.gspeed = 0.439511421313;
    msg.heading = 0.534269072896;
    msg.sacc = 0.089203929724;
    msg.cacc = 0.839369831503;

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
    msg.setTimeStamp(0.917259921369);
    msg.setSource(6710U);
    msg.setSourceEntity(234U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(143U);
    msg.id = 214U;
    msg.value = 0.878052829699;

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
    msg.setTimeStamp(0.320776888843);
    msg.setSource(27572U);
    msg.setSourceEntity(49U);
    msg.setDestination(44172U);
    msg.setDestinationEntity(226U);
    msg.id = 47U;
    msg.value = 0.376258323943;

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
    msg.setTimeStamp(0.3266034053);
    msg.setSource(3994U);
    msg.setSourceEntity(111U);
    msg.setDestination(38111U);
    msg.setDestinationEntity(24U);
    msg.id = 122U;
    msg.value = 0.768900431906;

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
    msg.setTimeStamp(0.746833280314);
    msg.setSource(64806U);
    msg.setSourceEntity(104U);
    msg.setDestination(36844U);
    msg.setDestinationEntity(57U);
    msg.x = 0.827166381253;
    msg.y = 0.145621886442;
    msg.z = 0.872592706632;
    msg.phi = 0.821303368681;
    msg.theta = 0.0279108830703;
    msg.psi = 0.524936442712;

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
    msg.setTimeStamp(0.725937911741);
    msg.setSource(18117U);
    msg.setSourceEntity(203U);
    msg.setDestination(28228U);
    msg.setDestinationEntity(75U);
    msg.x = 0.0714802133273;
    msg.y = 0.102797462621;
    msg.z = 0.961448197366;
    msg.phi = 0.884941614651;
    msg.theta = 0.929879550748;
    msg.psi = 0.617754782695;

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
    msg.setTimeStamp(0.38330720188);
    msg.setSource(38926U);
    msg.setSourceEntity(237U);
    msg.setDestination(14013U);
    msg.setDestinationEntity(120U);
    msg.x = 0.917329071373;
    msg.y = 0.307965928997;
    msg.z = 0.232123254395;
    msg.phi = 0.22138910214;
    msg.theta = 0.686056625466;
    msg.psi = 0.967243883312;

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
    msg.setTimeStamp(0.829055991583);
    msg.setSource(55380U);
    msg.setSourceEntity(147U);
    msg.setDestination(60056U);
    msg.setDestinationEntity(31U);
    msg.beam_width = 0.290357807231;
    msg.beam_height = 0.274140452496;

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
    msg.setTimeStamp(0.526475250655);
    msg.setSource(56358U);
    msg.setSourceEntity(100U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(13U);
    msg.beam_width = 0.820616354937;
    msg.beam_height = 0.520313438509;

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
    msg.setTimeStamp(0.0596332521644);
    msg.setSource(3783U);
    msg.setSourceEntity(42U);
    msg.setDestination(22031U);
    msg.setDestinationEntity(36U);
    msg.beam_width = 0.0631976870781;
    msg.beam_height = 0.0294636603733;

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
    msg.setTimeStamp(0.791668847045);
    msg.setSource(37808U);
    msg.setSourceEntity(160U);
    msg.setDestination(62796U);
    msg.setDestinationEntity(182U);
    msg.sane = 174U;

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
    msg.setTimeStamp(0.283040981719);
    msg.setSource(42119U);
    msg.setSourceEntity(224U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(11U);
    msg.sane = 213U;

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
    msg.setTimeStamp(0.611724109745);
    msg.setSource(18485U);
    msg.setSourceEntity(110U);
    msg.setDestination(15335U);
    msg.setDestinationEntity(136U);
    msg.sane = 252U;

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
    msg.setTimeStamp(0.712280917483);
    msg.setSource(3434U);
    msg.setSourceEntity(241U);
    msg.setDestination(28134U);
    msg.setDestinationEntity(55U);
    msg.value = 0.262741919947;

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
    msg.setTimeStamp(0.537626677143);
    msg.setSource(59785U);
    msg.setSourceEntity(252U);
    msg.setDestination(61951U);
    msg.setDestinationEntity(117U);
    msg.value = 0.861099900229;

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
    msg.setTimeStamp(0.142379387359);
    msg.setSource(63697U);
    msg.setSourceEntity(170U);
    msg.setDestination(28173U);
    msg.setDestinationEntity(200U);
    msg.value = 0.584313758866;

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
    msg.setTimeStamp(0.610944556907);
    msg.setSource(53174U);
    msg.setSourceEntity(188U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(99U);
    msg.value = 0.34547280082;

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
    msg.setTimeStamp(0.733464489894);
    msg.setSource(60337U);
    msg.setSourceEntity(9U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(253U);
    msg.value = 0.884272665743;

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
    msg.setTimeStamp(0.49641636659);
    msg.setSource(33878U);
    msg.setSourceEntity(51U);
    msg.setDestination(57808U);
    msg.setDestinationEntity(180U);
    msg.value = 0.554671781706;

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
    msg.setTimeStamp(0.956366880455);
    msg.setSource(17862U);
    msg.setSourceEntity(161U);
    msg.setDestination(49829U);
    msg.setDestinationEntity(109U);
    msg.value = 0.0986336146928;

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
    msg.setTimeStamp(0.0485923586303);
    msg.setSource(2811U);
    msg.setSourceEntity(58U);
    msg.setDestination(4866U);
    msg.setDestinationEntity(95U);
    msg.value = 0.880508186086;

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
    msg.setTimeStamp(0.765491080385);
    msg.setSource(18983U);
    msg.setSourceEntity(177U);
    msg.setDestination(62773U);
    msg.setDestinationEntity(28U);
    msg.value = 0.519615228131;

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
    msg.setTimeStamp(0.808263298031);
    msg.setSource(60395U);
    msg.setSourceEntity(94U);
    msg.setDestination(16017U);
    msg.setDestinationEntity(138U);
    msg.value = 0.96119311074;

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
    msg.setTimeStamp(0.611658498696);
    msg.setSource(48124U);
    msg.setSourceEntity(140U);
    msg.setDestination(27363U);
    msg.setDestinationEntity(10U);
    msg.value = 0.477005213659;

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
    msg.setTimeStamp(0.952573200755);
    msg.setSource(35662U);
    msg.setSourceEntity(200U);
    msg.setDestination(39849U);
    msg.setDestinationEntity(31U);
    msg.value = 0.256874811505;

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
    msg.setTimeStamp(0.534468025652);
    msg.setSource(40903U);
    msg.setSourceEntity(180U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0208112435559;

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
    msg.setTimeStamp(0.906761228078);
    msg.setSource(48861U);
    msg.setSourceEntity(178U);
    msg.setDestination(9646U);
    msg.setDestinationEntity(39U);
    msg.value = 0.594029847505;

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
    msg.setTimeStamp(0.18250638516);
    msg.setSource(8967U);
    msg.setSourceEntity(197U);
    msg.setDestination(6000U);
    msg.setDestinationEntity(247U);
    msg.value = 0.425278214146;

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
    msg.setTimeStamp(0.747028990743);
    msg.setSource(28560U);
    msg.setSourceEntity(152U);
    msg.setDestination(31650U);
    msg.setDestinationEntity(16U);
    msg.value = 0.827791754931;

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
    msg.setTimeStamp(0.125733191826);
    msg.setSource(41896U);
    msg.setSourceEntity(209U);
    msg.setDestination(61950U);
    msg.setDestinationEntity(83U);
    msg.value = 0.735563842109;

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
    msg.setTimeStamp(0.48016834378);
    msg.setSource(10866U);
    msg.setSourceEntity(221U);
    msg.setDestination(4814U);
    msg.setDestinationEntity(97U);
    msg.value = 0.30496132152;

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
    msg.setTimeStamp(0.403645088992);
    msg.setSource(61544U);
    msg.setSourceEntity(216U);
    msg.setDestination(17065U);
    msg.setDestinationEntity(56U);
    msg.value = 0.388780389281;

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
    msg.setTimeStamp(0.290054020715);
    msg.setSource(11580U);
    msg.setSourceEntity(173U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(238U);
    msg.value = 0.575314920716;

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
    msg.setTimeStamp(0.310447231617);
    msg.setSource(59452U);
    msg.setSourceEntity(56U);
    msg.setDestination(50316U);
    msg.setDestinationEntity(192U);
    msg.value = 0.438688857522;

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
    msg.setTimeStamp(0.321903933964);
    msg.setSource(64872U);
    msg.setSourceEntity(54U);
    msg.setDestination(995U);
    msg.setDestinationEntity(11U);
    msg.value = 0.45992682454;

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
    msg.setTimeStamp(0.849641562488);
    msg.setSource(2544U);
    msg.setSourceEntity(252U);
    msg.setDestination(37506U);
    msg.setDestinationEntity(231U);
    msg.value = 0.406219877805;

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
    msg.setTimeStamp(0.606087373887);
    msg.setSource(52245U);
    msg.setSourceEntity(112U);
    msg.setDestination(5811U);
    msg.setDestinationEntity(169U);
    msg.value = 0.873204200864;

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
    msg.setTimeStamp(0.924984296831);
    msg.setSource(38845U);
    msg.setSourceEntity(243U);
    msg.setDestination(40345U);
    msg.setDestinationEntity(189U);
    msg.validity = 48830U;
    msg.type = 81U;
    msg.tow = 1926857393U;
    msg.base_lat = 0.581771349678;
    msg.base_lon = 0.447445024254;
    msg.base_height = 0.155682287839;
    msg.n = 0.116867356568;
    msg.e = 0.83245941983;
    msg.d = 0.378841776574;
    msg.v_n = 0.743431707128;
    msg.v_e = 0.00440932243944;
    msg.v_d = 0.101192270191;
    msg.satellites = 138U;
    msg.iar_hyp = 23497U;
    msg.iar_ratio = 0.91837691737;

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
    msg.setTimeStamp(0.90301608607);
    msg.setSource(16564U);
    msg.setSourceEntity(98U);
    msg.setDestination(13654U);
    msg.setDestinationEntity(9U);
    msg.validity = 19940U;
    msg.type = 18U;
    msg.tow = 3574574309U;
    msg.base_lat = 0.100480677493;
    msg.base_lon = 0.46722676079;
    msg.base_height = 0.682877884017;
    msg.n = 0.283790142861;
    msg.e = 0.792759728956;
    msg.d = 0.774480563454;
    msg.v_n = 0.880280446397;
    msg.v_e = 0.41550659678;
    msg.v_d = 0.366081214327;
    msg.satellites = 33U;
    msg.iar_hyp = 47785U;
    msg.iar_ratio = 0.580546946339;

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
    msg.setTimeStamp(0.772144249173);
    msg.setSource(24498U);
    msg.setSourceEntity(222U);
    msg.setDestination(44990U);
    msg.setDestinationEntity(78U);
    msg.validity = 55548U;
    msg.type = 129U;
    msg.tow = 4008949825U;
    msg.base_lat = 0.33512938357;
    msg.base_lon = 0.497555758834;
    msg.base_height = 0.678331119552;
    msg.n = 0.117698989322;
    msg.e = 0.129133076558;
    msg.d = 0.521730495467;
    msg.v_n = 0.62557001398;
    msg.v_e = 0.209731654227;
    msg.v_d = 0.913712219803;
    msg.satellites = 225U;
    msg.iar_hyp = 37885U;
    msg.iar_ratio = 0.410969683151;

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
    msg.setTimeStamp(0.356781644727);
    msg.setSource(44864U);
    msg.setSourceEntity(35U);
    msg.setDestination(42086U);
    msg.setDestinationEntity(200U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.166615425839;
    tmp_msg_0.lon = 0.167001086908;
    tmp_msg_0.height = 0.991811898271;
    tmp_msg_0.x = 0.1506660372;
    tmp_msg_0.y = 0.872577439504;
    tmp_msg_0.z = 0.978595906667;
    tmp_msg_0.phi = 0.654017160094;
    tmp_msg_0.theta = 0.565155183079;
    tmp_msg_0.psi = 0.079993408772;
    tmp_msg_0.u = 0.0817750765449;
    tmp_msg_0.v = 0.960615872728;
    tmp_msg_0.w = 0.767733151143;
    tmp_msg_0.vx = 0.499439929515;
    tmp_msg_0.vy = 0.654877598386;
    tmp_msg_0.vz = 0.892253454139;
    tmp_msg_0.p = 0.302000219136;
    tmp_msg_0.q = 0.562180563652;
    tmp_msg_0.r = 0.969181448987;
    tmp_msg_0.depth = 0.862444574875;
    tmp_msg_0.alt = 0.149398035126;
    msg.state.set(tmp_msg_0);
    msg.type = 19U;

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
    msg.setTimeStamp(0.318469759387);
    msg.setSource(35646U);
    msg.setSourceEntity(169U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(26U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.745698853953;
    tmp_msg_0.lon = 0.239664740414;
    tmp_msg_0.height = 0.30553877565;
    tmp_msg_0.x = 0.171402327948;
    tmp_msg_0.y = 0.96570937955;
    tmp_msg_0.z = 0.405991577306;
    tmp_msg_0.phi = 0.763208652221;
    tmp_msg_0.theta = 0.356148860977;
    tmp_msg_0.psi = 0.341341399916;
    tmp_msg_0.u = 0.464623874246;
    tmp_msg_0.v = 0.704020235489;
    tmp_msg_0.w = 0.444047065395;
    tmp_msg_0.vx = 0.748814277716;
    tmp_msg_0.vy = 0.989435657461;
    tmp_msg_0.vz = 0.232485711937;
    tmp_msg_0.p = 0.143952159169;
    tmp_msg_0.q = 0.264302618063;
    tmp_msg_0.r = 0.116249908251;
    tmp_msg_0.depth = 0.216483246502;
    tmp_msg_0.alt = 0.102108626945;
    msg.state.set(tmp_msg_0);
    msg.type = 149U;

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
    msg.setTimeStamp(0.510410843966);
    msg.setSource(11297U);
    msg.setSourceEntity(109U);
    msg.setDestination(12927U);
    msg.setDestinationEntity(84U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0490119003706;
    tmp_msg_0.lon = 0.347981522547;
    tmp_msg_0.height = 0.940762459807;
    tmp_msg_0.x = 0.027841885866;
    tmp_msg_0.y = 0.474811470794;
    tmp_msg_0.z = 0.984952833061;
    tmp_msg_0.phi = 0.750145628345;
    tmp_msg_0.theta = 0.30534223217;
    tmp_msg_0.psi = 0.970000098014;
    tmp_msg_0.u = 0.929053937963;
    tmp_msg_0.v = 0.363240987412;
    tmp_msg_0.w = 0.540521217961;
    tmp_msg_0.vx = 0.403879511461;
    tmp_msg_0.vy = 0.72373169151;
    tmp_msg_0.vz = 0.0105326224419;
    tmp_msg_0.p = 0.298122615922;
    tmp_msg_0.q = 0.892460562297;
    tmp_msg_0.r = 0.794792347063;
    tmp_msg_0.depth = 0.241939783722;
    tmp_msg_0.alt = 0.75348771957;
    msg.state.set(tmp_msg_0);
    msg.type = 151U;

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
    msg.setTimeStamp(0.829931156261);
    msg.setSource(33038U);
    msg.setSourceEntity(118U);
    msg.setDestination(7640U);
    msg.setDestinationEntity(111U);
    msg.value = 0.608042659787;

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
    msg.setTimeStamp(0.560318745679);
    msg.setSource(53599U);
    msg.setSourceEntity(53U);
    msg.setDestination(55603U);
    msg.setDestinationEntity(73U);
    msg.value = 0.613416481568;

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
    msg.setTimeStamp(0.912123536481);
    msg.setSource(34205U);
    msg.setSourceEntity(235U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(99U);
    msg.value = 0.117237649657;

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
    msg.setTimeStamp(0.403100563927);
    msg.setSource(45613U);
    msg.setSourceEntity(41U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(192U);
    msg.value = 0.703025295249;

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
    msg.setTimeStamp(0.432866578242);
    msg.setSource(29710U);
    msg.setSourceEntity(148U);
    msg.setDestination(17947U);
    msg.setDestinationEntity(151U);
    msg.value = 0.756518296451;

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
    msg.setTimeStamp(0.293360815589);
    msg.setSource(64114U);
    msg.setSourceEntity(240U);
    msg.setDestination(20712U);
    msg.setDestinationEntity(128U);
    msg.value = 0.288590787223;

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
    msg.setTimeStamp(0.0774608480387);
    msg.setSource(16663U);
    msg.setSourceEntity(145U);
    msg.setDestination(7183U);
    msg.setDestinationEntity(116U);
    msg.value = 0.80058001834;

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
    msg.setTimeStamp(0.898211126185);
    msg.setSource(63347U);
    msg.setSourceEntity(192U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(7U);
    msg.value = 0.895853771655;

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
    msg.setTimeStamp(0.531474610343);
    msg.setSource(20379U);
    msg.setSourceEntity(153U);
    msg.setDestination(2164U);
    msg.setDestinationEntity(238U);
    msg.value = 0.959086551691;

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
    msg.setTimeStamp(0.63868213762);
    msg.setSource(35298U);
    msg.setSourceEntity(205U);
    msg.setDestination(8031U);
    msg.setDestinationEntity(170U);
    msg.value = 0.893298942294;

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
    msg.setTimeStamp(0.511905274814);
    msg.setSource(44243U);
    msg.setSourceEntity(12U);
    msg.setDestination(11041U);
    msg.setDestinationEntity(78U);
    msg.value = 0.867065726539;

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
    msg.setTimeStamp(0.716568429864);
    msg.setSource(10376U);
    msg.setSourceEntity(155U);
    msg.setDestination(56812U);
    msg.setDestinationEntity(10U);
    msg.value = 0.755146053833;

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
    msg.setTimeStamp(0.279258413403);
    msg.setSource(28056U);
    msg.setSourceEntity(1U);
    msg.setDestination(62748U);
    msg.setDestinationEntity(55U);
    msg.value = 0.656872454285;

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
    msg.setTimeStamp(0.426452224361);
    msg.setSource(61699U);
    msg.setSourceEntity(39U);
    msg.setDestination(51877U);
    msg.setDestinationEntity(123U);
    msg.value = 0.280932524424;

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
    msg.setTimeStamp(0.745956931911);
    msg.setSource(61611U);
    msg.setSourceEntity(193U);
    msg.setDestination(14621U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9288762617;

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
    msg.setTimeStamp(0.144305951003);
    msg.setSource(50589U);
    msg.setSourceEntity(128U);
    msg.setDestination(12782U);
    msg.setDestinationEntity(53U);
    msg.id = 226U;
    msg.zoom = 156U;
    msg.action = 68U;

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
    msg.setTimeStamp(0.418584542027);
    msg.setSource(30025U);
    msg.setSourceEntity(108U);
    msg.setDestination(37547U);
    msg.setDestinationEntity(83U);
    msg.id = 41U;
    msg.zoom = 29U;
    msg.action = 152U;

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
    msg.setTimeStamp(0.0463690113339);
    msg.setSource(62419U);
    msg.setSourceEntity(103U);
    msg.setDestination(44206U);
    msg.setDestinationEntity(38U);
    msg.id = 91U;
    msg.zoom = 157U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.212510081291);
    msg.setSource(64210U);
    msg.setSourceEntity(227U);
    msg.setDestination(12241U);
    msg.setDestinationEntity(122U);
    msg.id = 176U;
    msg.value = 0.933526343235;

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
    msg.setTimeStamp(0.559334694887);
    msg.setSource(17801U);
    msg.setSourceEntity(12U);
    msg.setDestination(53462U);
    msg.setDestinationEntity(150U);
    msg.id = 159U;
    msg.value = 0.590397186411;

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
    msg.setTimeStamp(0.621441145439);
    msg.setSource(3142U);
    msg.setSourceEntity(110U);
    msg.setDestination(28467U);
    msg.setDestinationEntity(247U);
    msg.id = 54U;
    msg.value = 0.87584535114;

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
    msg.setTimeStamp(0.795644396763);
    msg.setSource(36179U);
    msg.setSourceEntity(23U);
    msg.setDestination(15768U);
    msg.setDestinationEntity(56U);
    msg.id = 140U;
    msg.value = 0.867368123499;

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
    msg.setTimeStamp(0.923317678958);
    msg.setSource(2178U);
    msg.setSourceEntity(38U);
    msg.setDestination(20676U);
    msg.setDestinationEntity(26U);
    msg.id = 55U;
    msg.value = 0.504436368258;

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
    msg.setTimeStamp(0.693050632973);
    msg.setSource(47606U);
    msg.setSourceEntity(127U);
    msg.setDestination(4794U);
    msg.setDestinationEntity(85U);
    msg.id = 186U;
    msg.value = 0.805441821255;

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
    msg.setTimeStamp(0.0184978955679);
    msg.setSource(13125U);
    msg.setSourceEntity(97U);
    msg.setDestination(30365U);
    msg.setDestinationEntity(186U);
    msg.id = 206U;
    msg.angle = 0.955489886841;

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
    msg.setTimeStamp(0.699178993083);
    msg.setSource(49637U);
    msg.setSourceEntity(150U);
    msg.setDestination(55039U);
    msg.setDestinationEntity(93U);
    msg.id = 164U;
    msg.angle = 0.721152298632;

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
    msg.setTimeStamp(0.491865087832);
    msg.setSource(34965U);
    msg.setSourceEntity(106U);
    msg.setDestination(14914U);
    msg.setDestinationEntity(235U);
    msg.id = 3U;
    msg.angle = 0.0135814355004;

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
    msg.setTimeStamp(0.602281649561);
    msg.setSource(19135U);
    msg.setSourceEntity(44U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(184U);
    msg.op = 235U;
    msg.actions.assign("VYCARBUGQVTYLNSQFDAYXLSDIIYZPCGYZVIMGENCOJJWAXSAIHNBBPKSFGPTEZVITFCIOSNQQMYOXWERNSRFCMYCJPNDTODUUODZNOIMDBZRQBNEMJGKHXXGHEGHXTCWWAROEOXDCSARSQMJWPWGBBJAEJFQCEWPIQMUYLVHRWTHKIIQDYAXRLHDVAUPFKLLGFBFFVKZRBTVNKJVBSZUKTYUXZJZPULMKMTREGFP");

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
    msg.setTimeStamp(0.459053759935);
    msg.setSource(37879U);
    msg.setSourceEntity(196U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(209U);
    msg.op = 237U;
    msg.actions.assign("SYEFPCBQYGLOJAFMLVDEMGSAJIDMLSJAJZDKYSZGEFXDWYRXJPMLOFFJUKNAGENZUILLHWSKURKBSDVNCKXFKTRQNWEFVOVJUCJYUHRHPZMWWXQQFGQWFLXCEQODZHINYSLBKLBBAOVQRINSTPTOTGXVRAQMVWEXTIALOSTRWBUGWEZHHTMDDNRNPKQUYYAPCPAVZVIBXEKXDOTZBHUOCGO");

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
    msg.setTimeStamp(0.881531519302);
    msg.setSource(30135U);
    msg.setSourceEntity(34U);
    msg.setDestination(26926U);
    msg.setDestinationEntity(16U);
    msg.op = 191U;
    msg.actions.assign("MSJCZULODOQNYVENQZ");

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
    msg.setTimeStamp(0.279409596103);
    msg.setSource(19124U);
    msg.setSourceEntity(29U);
    msg.setDestination(62908U);
    msg.setDestinationEntity(43U);
    msg.actions.assign("YYVGWNZVVFPZZWJMVWIMWYOQLVXXCGAIHKYORNMNFPQFKXUNPLCQKCSMLMBBLILTBKAZDSHTHNGAIGPUAQQCMKOTZLZRVOBNPYOKYFJHEJAICZSBTMUEYKTOHDORBEUXDKGNKWNGGSCPEAZKGQFLPSGQVMXXUNLLTILTEEIMYPISFDZDHRYDJSRICEUXRTXOGUCXJ");

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
    msg.setTimeStamp(0.773344073162);
    msg.setSource(19869U);
    msg.setSourceEntity(16U);
    msg.setDestination(14974U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("ITEIUWSFWBOQYR");

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
    msg.setTimeStamp(0.319608809519);
    msg.setSource(44988U);
    msg.setSourceEntity(240U);
    msg.setDestination(13923U);
    msg.setDestinationEntity(38U);
    msg.actions.assign("CSWDCZOORBTXNBHUZFTJMDMEEQSZJUMZOGGKSXASUSHNXXKSRHJHHKRREVBPCPNG");

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
    msg.setTimeStamp(0.378714881661);
    msg.setSource(34885U);
    msg.setSourceEntity(146U);
    msg.setDestination(43263U);
    msg.setDestinationEntity(165U);
    msg.button = 228U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.060364703944);
    msg.setSource(30783U);
    msg.setSourceEntity(111U);
    msg.setDestination(33512U);
    msg.setDestinationEntity(203U);
    msg.button = 221U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.0749220355517);
    msg.setSource(45179U);
    msg.setSourceEntity(67U);
    msg.setDestination(6097U);
    msg.setDestinationEntity(1U);
    msg.button = 46U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.570261127662);
    msg.setSource(29990U);
    msg.setSourceEntity(163U);
    msg.setDestination(38340U);
    msg.setDestinationEntity(188U);
    msg.op = 104U;
    msg.text.assign("MDWBREXOLDXFQELURQMYDOVCYRXMVVTKWDEISTXNJUCHHMWIQHRKOCJDEZIQGATLTJGJBKDBIFCAFDVOVICFYPWFMRCASYVXTOCWOKAGRXVWBUNKJIGAIGIFBTYEIFZWODZNMMUVGSECZKLYUALXLTGHNXKHUXQUDUJYUQWDUF");

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
    msg.setTimeStamp(0.423939781316);
    msg.setSource(28020U);
    msg.setSourceEntity(239U);
    msg.setDestination(16983U);
    msg.setDestinationEntity(245U);
    msg.op = 10U;
    msg.text.assign("QQRRYNCSXEGTPIJECLFPJHSWVAYHWPCFMJIFHBYMALDGXKOODWMXOFQGJOPNAIVRHLDPQACXLGYUJVLQLHEIZBSYHHZEBBAJNNBWUBPJOKSCUVFPUMPSTOINKMBZGZDOPRHDBKEQLZSVGRLMUGJZEEQYCJRWOATZMSUENARGFVWHRTDSNZXVJDTITDNWZMCIPATCKFWYCEYRLDUQXF");

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
    msg.setTimeStamp(0.517627434639);
    msg.setSource(9833U);
    msg.setSourceEntity(128U);
    msg.setDestination(42595U);
    msg.setDestinationEntity(238U);
    msg.op = 159U;
    msg.text.assign("WLJKXEASYUCAPBEUIRHLRTLDVCSZIFGFOFJZUFBSPUKCPQJHAIHWKDBEOLSWQCGZRDCITDXJTGGXYQLPTFABOEQNYTUSBPEVCNUGMWNTZPBHQULGMSZIEXWSMMPYVRVDBBZOZBUMSBDJVAYJNDANHXWR");

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
    msg.setTimeStamp(0.0815051813317);
    msg.setSource(21106U);
    msg.setSourceEntity(24U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(28U);
    msg.op = 230U;
    msg.time_remain = 0.357239835486;
    msg.sched_time = 0.636006579724;

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
    msg.setTimeStamp(0.948278813473);
    msg.setSource(36925U);
    msg.setSourceEntity(124U);
    msg.setDestination(1767U);
    msg.setDestinationEntity(23U);
    msg.op = 7U;
    msg.time_remain = 0.684662688766;
    msg.sched_time = 0.0107477429957;

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
    msg.setTimeStamp(0.703395311329);
    msg.setSource(64408U);
    msg.setSourceEntity(192U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(189U);
    msg.op = 145U;
    msg.time_remain = 0.201840825299;
    msg.sched_time = 0.326264911784;

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
    msg.setTimeStamp(0.0335312412575);
    msg.setSource(5604U);
    msg.setSourceEntity(104U);
    msg.setDestination(46812U);
    msg.setDestinationEntity(218U);
    msg.name.assign("DKNLVWOSOBCQGFAFHXQVYRAQUOGCTZPIAVBLEGMOZERVHWIDPVBKEARWVJACIUKLKWFHCSDHMLUWEPSQXQYXBJXSTYSERTPAKMGBRFVSTNPUTKQJZDXJVUGCOBFYFQYEXGXCJSPNCLQBNUDCYYGJTICL");
    msg.op = 209U;
    msg.sched_time = 0.590185189627;

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
    msg.setTimeStamp(0.122960707254);
    msg.setSource(9887U);
    msg.setSourceEntity(163U);
    msg.setDestination(357U);
    msg.setDestinationEntity(170U);
    msg.name.assign("YWGQYGEUETLZTOKHYSWMBLSZLFJLFIPAJBQYWRQKIJTDPDYORSFVUSSVTHXEXPOJDMJPUGZQGOQXCRNNSBRGELTWPFXDUVMAVUMXZQKOKBRWTENQUMZGBHPHBQCUALMCRPNZAABITKOCKKWOTCCFPCBITWCNAYNITKBFVDLHJHLQBFSRHGEXJICHYXVJDNHIDYZUQFVWLEJPGRVMKNRSVFSXPEMOICYAUMAHOLEAYXRAGNWGZSMXKNDWEI");
    msg.op = 145U;
    msg.sched_time = 0.143307502542;

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
    msg.setTimeStamp(0.445232252416);
    msg.setSource(5139U);
    msg.setSourceEntity(152U);
    msg.setDestination(53037U);
    msg.setDestinationEntity(138U);
    msg.name.assign("GQHZYLFPQWNCQYSOKBJUVHMSWDSPCXVFFNVWEJNWKERHMGKBORCRANTFNIJKJTKLCYOWIKFITDKSXBGZTNTPPERCEXIVMIQIWMUPSYSXEABNZJGQLXBKVEQDAXXHDEYOQGUVLZEXTVBDPPDVQDEXRRGROZRUTWMNUHLSHKZILMOWNBZASEZFMHM");
    msg.op = 123U;
    msg.sched_time = 0.335267817304;

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
    msg.setTimeStamp(0.208646617416);
    msg.setSource(41432U);
    msg.setSourceEntity(235U);
    msg.setDestination(9153U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.97340164153);
    msg.setSource(678U);
    msg.setSourceEntity(152U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.34018339706);
    msg.setSource(28476U);
    msg.setSourceEntity(214U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.329124127459);
    msg.setSource(5900U);
    msg.setSourceEntity(102U);
    msg.setDestination(16363U);
    msg.setDestinationEntity(95U);
    msg.name.assign("HSSQLZVXIZWVIXLTUEOCWGJBJOBSSLSPYPUAYNOAFCXBCATUTKNPSNZHQPUFNJYSBGTTAQGVLWUKKMVHLZEHVIEUGSWPRIIIYCFRMOAJTZZYGOKMRYFQYG");
    msg.state = 9U;

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
    msg.setTimeStamp(0.726882336356);
    msg.setSource(5313U);
    msg.setSourceEntity(196U);
    msg.setDestination(64668U);
    msg.setDestinationEntity(224U);
    msg.name.assign("YMXVQKFMRRMZNDNRMJPISCBRHTADWPXGLUJBQXAKLFSTTVRFWEWCYU");
    msg.state = 150U;

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
    msg.setTimeStamp(0.72499553182);
    msg.setSource(24915U);
    msg.setSourceEntity(66U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(202U);
    msg.name.assign("BHVHYSEWHMDQMRIFPXDYIAATYBNLBELAZOFHCSJEEPTGWZHTSKIVXQNUUWFMDYDSNWO");
    msg.state = 142U;

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
    msg.setTimeStamp(0.376176348087);
    msg.setSource(32834U);
    msg.setSourceEntity(35U);
    msg.setDestination(8637U);
    msg.setDestinationEntity(246U);
    msg.name.assign("CYUJJVCBBKXSTYRNQETNMIHHGRFGDNMNXMJQNKWVTKFVFKSGQZRIMOAWYLETUPIRFNUVHRTALJZPGWXIOAHKQWDPHVOZIRKSFGMKJDPEVTLKAJPTMLEQHQJSIUYPKLFDIYFCPOVZXRDCRQUWNNHFOGLTQIDRCUPDXUAZKRCNXGBWFZSCOWBDZLHECESAETCWJLDDXZVYZHSABPBSVLOMMQEWJVGUXBMEOXBTSYIMQNCLO");
    msg.value = 89U;

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
    msg.setTimeStamp(0.000504696969823);
    msg.setSource(12472U);
    msg.setSourceEntity(62U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(140U);
    msg.name.assign("ZVSXHWZHTJGYLCQWSNQELTDFYYCCZGKPLYCRORCRJRJFGXQWFDACPLHTANUZFJVZHQRAIR");
    msg.value = 64U;

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
    msg.setTimeStamp(0.809322170275);
    msg.setSource(42830U);
    msg.setSourceEntity(212U);
    msg.setDestination(997U);
    msg.setDestinationEntity(184U);
    msg.name.assign("TMHCABLPJZWXBJIXNHVEPOFCVALYIJDUZSMHFWGITZWGWSBYSTWBZNAXXSEKVLKWELZFXBVXOWYYVRGPCNSKKNUIAAIQRZSBNXKAEJEACERBDRMQENFCYRISFKMZGDNHAWQQRJVHICTYYLEOARVUOGGOILLETN");
    msg.value = 237U;

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
    msg.setTimeStamp(0.777169009553);
    msg.setSource(24179U);
    msg.setSourceEntity(160U);
    msg.setDestination(19664U);
    msg.setDestinationEntity(38U);
    msg.name.assign("TDGMHIBUQQCAMDNFMVLUGHAZVQXWWZTMQFZEZDFAEMPJKJQZLCLNVQESFPNTYKUPPIBNMXJXGPVBBRKSRQRKAZTTAXODIRG");

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
    msg.setTimeStamp(0.939645768373);
    msg.setSource(15113U);
    msg.setSourceEntity(200U);
    msg.setDestination(48092U);
    msg.setDestinationEntity(250U);
    msg.name.assign("XTDWIZXUSYDFFPNTGCHSDOEHVYWJSALBTDGWFUJQOQAGKHDSIUIJMKXPNSENVPMXNUBCXLEYVVSONECDCGJHHMCMYRTXLKFZDKTQOUEAKGYBKBALNIWQHRQDJURMAVZIKOIPTOBYUTLMVIJUIZFCMDKPGCYFVZWMFHNLGWSJMEBLAVWHJWJMAORXJWAXQLKONEBULXFGSTNQUEZEGCARYHZEAIGVZFPSRPXZOSOPVPZICQHYBWYC");

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
    msg.setTimeStamp(0.815109202071);
    msg.setSource(32162U);
    msg.setSourceEntity(156U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(59U);
    msg.name.assign("TILJWFZHGSBUGXPLKUEONMBGKBCVQPQXIWRASEMSLHYCCFVMAMWEXKEMTSFTLJIECWRDUQHNFUBXOEBJABAJLMKJVCERFYVDAKOTHENFZRNPAXPPTIVNCGUDDDKNOSYHGHXUN");

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
    msg.setTimeStamp(0.602317060658);
    msg.setSource(8336U);
    msg.setSourceEntity(86U);
    msg.setDestination(28739U);
    msg.setDestinationEntity(107U);
    msg.name.assign("VEGRYTHPJNZYZCHONFDCLZBZRWKMIRNWLRCVNFBVBVAPOMORZXXJZICNPEQSHXKZIUXPLPHGGRASQXBMMZFOCVQUSJOYLJIDWKWSSUUVADBAUBQPOTTGVHKHBIKNFJUQQCEKCLPGRLQURWEXBVMQYWITTUZMNTYTFIGBDVGCDYQXPDDBJAKOQATHTNHFEIUODFSIYAJJWGELCREFRNXDCVMZJDJFWSGU");
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
    msg.setTimeStamp(0.781364643076);
    msg.setSource(50288U);
    msg.setSourceEntity(215U);
    msg.setDestination(37871U);
    msg.setDestinationEntity(211U);
    msg.name.assign("KPPLSBVCWXMPIKKXXDPSGBGFWYJKQXOLCHJPJWUCG");
    msg.value = 163U;

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
    msg.setTimeStamp(0.978850752206);
    msg.setSource(33316U);
    msg.setSourceEntity(114U);
    msg.setDestination(57496U);
    msg.setDestinationEntity(113U);
    msg.name.assign("TAHLIXADNVVPUDXKSPUGZFEMQUCHJYBRLCSDRQKDFJECPIUDMSUWNBRTZHLNRZPUIWEKUGXNSBKLJXQZFGYPATUSYMFARBVKFJEYWAKFNOTIWWOCBLAYDZTXYINHMOBJKMEKXIIOPJDENXDZTDWSTZKGOEBHWHWNSPKISUUTNTBRQYCOEGQYMHRFCMACSVJSGRPLEVCWQXJOPJBP");
    msg.value = 113U;

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
    msg.setTimeStamp(0.0930048161908);
    msg.setSource(18581U);
    msg.setSourceEntity(18U);
    msg.setDestination(50696U);
    msg.setDestinationEntity(98U);
    msg.id = 69U;
    msg.period = 2728830182U;
    msg.duty_cycle = 2949787047U;

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
    msg.setTimeStamp(0.602414322629);
    msg.setSource(37131U);
    msg.setSourceEntity(79U);
    msg.setDestination(62343U);
    msg.setDestinationEntity(98U);
    msg.id = 103U;
    msg.period = 84248499U;
    msg.duty_cycle = 2515041389U;

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
    msg.setTimeStamp(0.887860020678);
    msg.setSource(39608U);
    msg.setSourceEntity(115U);
    msg.setDestination(13311U);
    msg.setDestinationEntity(212U);
    msg.id = 15U;
    msg.period = 3226662663U;
    msg.duty_cycle = 3257559112U;

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
    msg.setTimeStamp(0.506927498617);
    msg.setSource(30165U);
    msg.setSourceEntity(125U);
    msg.setDestination(26939U);
    msg.setDestinationEntity(1U);
    msg.id = 64U;
    msg.period = 3024348923U;
    msg.duty_cycle = 2264326225U;

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
    msg.setTimeStamp(0.37830374212);
    msg.setSource(17066U);
    msg.setSourceEntity(25U);
    msg.setDestination(31318U);
    msg.setDestinationEntity(7U);
    msg.id = 6U;
    msg.period = 1792541494U;
    msg.duty_cycle = 2939397583U;

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
    msg.setTimeStamp(0.880354206427);
    msg.setSource(805U);
    msg.setSourceEntity(162U);
    msg.setDestination(26595U);
    msg.setDestinationEntity(141U);
    msg.id = 122U;
    msg.period = 524340849U;
    msg.duty_cycle = 1645340574U;

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
    msg.setTimeStamp(0.230419451068);
    msg.setSource(33488U);
    msg.setSourceEntity(135U);
    msg.setDestination(11119U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.266460122057;
    msg.lon = 0.653619832552;
    msg.height = 0.412145330999;
    msg.x = 0.591991493434;
    msg.y = 0.331113704336;
    msg.z = 0.934287304808;
    msg.phi = 0.125812389392;
    msg.theta = 0.306817185074;
    msg.psi = 0.259799973818;
    msg.u = 0.369188044306;
    msg.v = 0.503397736494;
    msg.w = 0.131358308021;
    msg.vx = 0.601539571694;
    msg.vy = 0.00617140140495;
    msg.vz = 0.2094332656;
    msg.p = 0.688877238575;
    msg.q = 0.278873641372;
    msg.r = 0.211250496032;
    msg.depth = 0.645016801239;
    msg.alt = 0.21200944556;

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
    msg.setTimeStamp(0.810973280551);
    msg.setSource(30207U);
    msg.setSourceEntity(240U);
    msg.setDestination(49210U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.229973573871;
    msg.lon = 0.970159287382;
    msg.height = 0.719267723914;
    msg.x = 0.88558662092;
    msg.y = 0.0613606758049;
    msg.z = 0.261267554887;
    msg.phi = 0.378119302998;
    msg.theta = 0.642114560922;
    msg.psi = 0.252707816096;
    msg.u = 0.335931573445;
    msg.v = 0.294171395405;
    msg.w = 0.577461636109;
    msg.vx = 0.271396180321;
    msg.vy = 0.485555783846;
    msg.vz = 0.324444442522;
    msg.p = 0.516298318015;
    msg.q = 0.61575663075;
    msg.r = 0.181817529664;
    msg.depth = 0.346038841571;
    msg.alt = 0.00302852837476;

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
    msg.setTimeStamp(0.306663336092);
    msg.setSource(371U);
    msg.setSourceEntity(121U);
    msg.setDestination(50708U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.103896442204;
    msg.lon = 0.840955656603;
    msg.height = 0.332550011325;
    msg.x = 0.789759433788;
    msg.y = 0.584551570262;
    msg.z = 0.939649259221;
    msg.phi = 0.786278491442;
    msg.theta = 0.712733234903;
    msg.psi = 0.124134151157;
    msg.u = 0.0659460701361;
    msg.v = 0.976410385567;
    msg.w = 0.0556404394432;
    msg.vx = 0.967507680195;
    msg.vy = 0.434212150118;
    msg.vz = 0.967803281003;
    msg.p = 0.630129626359;
    msg.q = 0.04843726262;
    msg.r = 0.590834475597;
    msg.depth = 0.0427264259479;
    msg.alt = 0.771188446384;

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
    msg.setTimeStamp(0.220024685258);
    msg.setSource(18953U);
    msg.setSourceEntity(36U);
    msg.setDestination(52290U);
    msg.setDestinationEntity(218U);
    msg.x = 0.880195497218;
    msg.y = 0.89483712298;
    msg.z = 0.442535065774;

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
    msg.setTimeStamp(0.829410483178);
    msg.setSource(41518U);
    msg.setSourceEntity(248U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(192U);
    msg.x = 0.0411776027628;
    msg.y = 0.272880280625;
    msg.z = 0.594007275794;

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
    msg.setTimeStamp(0.299061557584);
    msg.setSource(5405U);
    msg.setSourceEntity(119U);
    msg.setDestination(63438U);
    msg.setDestinationEntity(2U);
    msg.x = 0.786336506783;
    msg.y = 0.745287411734;
    msg.z = 0.0252751408073;

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
    msg.setTimeStamp(0.753373600153);
    msg.setSource(7916U);
    msg.setSourceEntity(98U);
    msg.setDestination(25479U);
    msg.setDestinationEntity(156U);
    msg.value = 0.999209146833;

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
    msg.setTimeStamp(0.862125996347);
    msg.setSource(44857U);
    msg.setSourceEntity(223U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(112U);
    msg.value = 0.211227777556;

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
    msg.setTimeStamp(0.156864423002);
    msg.setSource(56711U);
    msg.setSourceEntity(25U);
    msg.setDestination(58354U);
    msg.setDestinationEntity(60U);
    msg.value = 0.829967603267;

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
    msg.setTimeStamp(0.182479992259);
    msg.setSource(7847U);
    msg.setSourceEntity(183U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(105U);
    msg.value = 0.84066037082;

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
    msg.setTimeStamp(0.346302768421);
    msg.setSource(47922U);
    msg.setSourceEntity(23U);
    msg.setDestination(26474U);
    msg.setDestinationEntity(169U);
    msg.value = 0.95500085237;

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
    msg.setTimeStamp(0.564316655463);
    msg.setSource(22914U);
    msg.setSourceEntity(201U);
    msg.setDestination(31200U);
    msg.setDestinationEntity(85U);
    msg.value = 0.152316948869;

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
    msg.setTimeStamp(0.612623056383);
    msg.setSource(55034U);
    msg.setSourceEntity(75U);
    msg.setDestination(21496U);
    msg.setDestinationEntity(141U);
    msg.x = 0.481775940072;
    msg.y = 0.334025042184;
    msg.z = 0.377607550041;
    msg.phi = 0.331957036944;
    msg.theta = 0.232097785372;
    msg.psi = 0.213181361217;
    msg.p = 0.294595865661;
    msg.q = 0.0917469604023;
    msg.r = 0.595777183193;
    msg.u = 0.930307192353;
    msg.v = 0.357092600487;
    msg.w = 0.620632389944;
    msg.bias_psi = 0.878505452088;
    msg.bias_r = 0.496539900827;

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
    msg.setTimeStamp(0.880009697684);
    msg.setSource(35817U);
    msg.setSourceEntity(183U);
    msg.setDestination(58555U);
    msg.setDestinationEntity(197U);
    msg.x = 0.947410709775;
    msg.y = 0.976303390314;
    msg.z = 0.217989697552;
    msg.phi = 0.51513325546;
    msg.theta = 0.636666871376;
    msg.psi = 0.360931191979;
    msg.p = 0.530072558638;
    msg.q = 0.960519632616;
    msg.r = 0.014378048089;
    msg.u = 0.933225187068;
    msg.v = 0.895722120061;
    msg.w = 0.959646776291;
    msg.bias_psi = 0.252856694241;
    msg.bias_r = 0.345460646034;

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
    msg.setTimeStamp(0.346208361934);
    msg.setSource(47368U);
    msg.setSourceEntity(7U);
    msg.setDestination(463U);
    msg.setDestinationEntity(133U);
    msg.x = 0.142289742346;
    msg.y = 0.7569686069;
    msg.z = 0.16834983238;
    msg.phi = 0.694762027209;
    msg.theta = 0.929372012674;
    msg.psi = 0.901790925823;
    msg.p = 0.108330104995;
    msg.q = 0.9947392959;
    msg.r = 0.567608743671;
    msg.u = 0.193892622181;
    msg.v = 0.327143087005;
    msg.w = 0.0910144927001;
    msg.bias_psi = 0.031289598096;
    msg.bias_r = 0.202050030163;

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
    msg.setTimeStamp(0.530408714815);
    msg.setSource(37483U);
    msg.setSourceEntity(108U);
    msg.setDestination(34294U);
    msg.setDestinationEntity(95U);
    msg.bias_psi = 0.179800725689;
    msg.bias_r = 0.477194322996;
    msg.cog = 0.0630105329851;
    msg.cyaw = 0.607170593535;
    msg.lbl_rej_level = 0.700084770359;
    msg.gps_rej_level = 0.756243083857;
    msg.custom_x = 0.284476617444;
    msg.custom_y = 0.417612460988;
    msg.custom_z = 0.285894979153;

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
    msg.setTimeStamp(0.76927376077);
    msg.setSource(48559U);
    msg.setSourceEntity(167U);
    msg.setDestination(5231U);
    msg.setDestinationEntity(79U);
    msg.bias_psi = 0.240794014076;
    msg.bias_r = 0.367253730698;
    msg.cog = 0.485614672816;
    msg.cyaw = 0.859789748899;
    msg.lbl_rej_level = 0.686110881855;
    msg.gps_rej_level = 0.0293147702426;
    msg.custom_x = 0.290663541335;
    msg.custom_y = 0.0899398085595;
    msg.custom_z = 0.951611907727;

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
    msg.setTimeStamp(0.59347559357);
    msg.setSource(22744U);
    msg.setSourceEntity(16U);
    msg.setDestination(38156U);
    msg.setDestinationEntity(185U);
    msg.bias_psi = 0.982513027107;
    msg.bias_r = 0.829186475165;
    msg.cog = 0.50555142048;
    msg.cyaw = 0.66667925613;
    msg.lbl_rej_level = 0.82392957193;
    msg.gps_rej_level = 0.211599172349;
    msg.custom_x = 0.157304787807;
    msg.custom_y = 0.756341747643;
    msg.custom_z = 0.433214856359;

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
    msg.setTimeStamp(0.470680844078);
    msg.setSource(29068U);
    msg.setSourceEntity(40U);
    msg.setDestination(12590U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.708889062814;
    msg.reason = 254U;

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
    msg.setTimeStamp(0.932940378618);
    msg.setSource(49888U);
    msg.setSourceEntity(172U);
    msg.setDestination(20734U);
    msg.setDestinationEntity(86U);
    msg.utc_time = 0.931872558924;
    msg.reason = 222U;

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
    msg.setTimeStamp(0.914402160657);
    msg.setSource(10243U);
    msg.setSourceEntity(210U);
    msg.setDestination(48206U);
    msg.setDestinationEntity(92U);
    msg.utc_time = 0.699714682106;
    msg.reason = 63U;

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
    msg.setTimeStamp(0.168738324188);
    msg.setSource(9046U);
    msg.setSourceEntity(90U);
    msg.setDestination(23542U);
    msg.setDestinationEntity(79U);
    msg.id = 85U;
    msg.range = 0.310052060422;
    msg.acceptance = 238U;

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
    msg.setTimeStamp(0.432740198887);
    msg.setSource(34625U);
    msg.setSourceEntity(89U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(70U);
    msg.id = 143U;
    msg.range = 0.661497478176;
    msg.acceptance = 77U;

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
    msg.setTimeStamp(0.990168790146);
    msg.setSource(7551U);
    msg.setSourceEntity(252U);
    msg.setDestination(44021U);
    msg.setDestinationEntity(132U);
    msg.id = 6U;
    msg.range = 0.0709676352166;
    msg.acceptance = 9U;

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
    msg.setTimeStamp(0.588499637496);
    msg.setSource(34108U);
    msg.setSourceEntity(54U);
    msg.setDestination(47320U);
    msg.setDestinationEntity(154U);
    msg.type = 214U;
    msg.reason = 98U;
    msg.value = 0.39155814281;
    msg.timestep = 0.0568228184627;

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
    msg.setTimeStamp(0.464646029825);
    msg.setSource(9973U);
    msg.setSourceEntity(211U);
    msg.setDestination(13540U);
    msg.setDestinationEntity(43U);
    msg.type = 4U;
    msg.reason = 49U;
    msg.value = 0.278931509915;
    msg.timestep = 0.906312942581;

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
    msg.setTimeStamp(0.59697290142);
    msg.setSource(18169U);
    msg.setSourceEntity(190U);
    msg.setDestination(59678U);
    msg.setDestinationEntity(209U);
    msg.type = 168U;
    msg.reason = 142U;
    msg.value = 0.540989280426;
    msg.timestep = 0.971177388849;

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
    msg.setTimeStamp(0.28474390895);
    msg.setSource(36399U);
    msg.setSourceEntity(6U);
    msg.setDestination(54150U);
    msg.setDestinationEntity(131U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CDUEFZYWWOFYAYWPKORNLSABJLWENATCRVJTPOTCOQXHPRVMASPEVCRFMDNWQXCQQUWIYSROJHBFBYXHZRURKUFWICJHUNIOOSQDMKECJQDZNMBTUEXPZKZYSEHITIKBGRBLHSIDBNAQXELNLDJXGHEEGPQVFVMKSLWHMGVDNFFOHANZBZTLVIVOMBSTGAMTGVZJXSGOPVGCZSGXCDLKL");
    tmp_msg_0.lat = 0.465148961153;
    tmp_msg_0.lon = 0.266276639559;
    tmp_msg_0.depth = 0.530208542819;
    tmp_msg_0.query_channel = 202U;
    tmp_msg_0.reply_channel = 157U;
    tmp_msg_0.transponder_delay = 226U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.627826324179;
    msg.y = 0.14471564307;
    msg.var_x = 0.568970152995;
    msg.var_y = 0.161025561441;
    msg.distance = 0.434019657946;

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
    msg.setTimeStamp(0.967018040036);
    msg.setSource(7606U);
    msg.setSourceEntity(252U);
    msg.setDestination(48689U);
    msg.setDestinationEntity(62U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XOWPLFWOUHYUTDHJNSYZYMZAFJXEUXVUQEINEHJCDGI");
    tmp_msg_0.lat = 0.553260343211;
    tmp_msg_0.lon = 0.416314017756;
    tmp_msg_0.depth = 0.405524379887;
    tmp_msg_0.query_channel = 88U;
    tmp_msg_0.reply_channel = 57U;
    tmp_msg_0.transponder_delay = 208U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.835995781444;
    msg.y = 0.0138203844276;
    msg.var_x = 0.616434563876;
    msg.var_y = 0.983304572124;
    msg.distance = 0.886149490879;

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
    msg.setTimeStamp(0.578242630939);
    msg.setSource(33329U);
    msg.setSourceEntity(153U);
    msg.setDestination(41345U);
    msg.setDestinationEntity(97U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NIFXZGQIJBEVYTZLHFQQCJANBPXTBNMFWJENIGGRLMONVVXFZALDOPQBDUTDCEJAVHMBDRRXGRDTGFFGYXNAISVRHCODKXJUOTUAKLIWDYPOKPNCVAFTQMCLFUEKWLTKJZZWPI");
    tmp_msg_0.lat = 0.673954461507;
    tmp_msg_0.lon = 0.833422878224;
    tmp_msg_0.depth = 0.964786512216;
    tmp_msg_0.query_channel = 141U;
    tmp_msg_0.reply_channel = 28U;
    tmp_msg_0.transponder_delay = 199U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.689183670969;
    msg.y = 0.682798418778;
    msg.var_x = 0.76444666919;
    msg.var_y = 0.792765676438;
    msg.distance = 0.220630585524;

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
    msg.setTimeStamp(0.377744065675);
    msg.setSource(41881U);
    msg.setSourceEntity(167U);
    msg.setDestination(17300U);
    msg.setDestinationEntity(24U);
    msg.state = 34U;

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
    msg.setTimeStamp(0.450743932453);
    msg.setSource(37000U);
    msg.setSourceEntity(211U);
    msg.setDestination(48610U);
    msg.setDestinationEntity(31U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.180986262254);
    msg.setSource(35178U);
    msg.setSourceEntity(77U);
    msg.setDestination(4285U);
    msg.setDestinationEntity(137U);
    msg.state = 215U;

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
    msg.setTimeStamp(0.227433563734);
    msg.setSource(54851U);
    msg.setSourceEntity(136U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(206U);
    msg.x = 0.822920889272;
    msg.y = 0.470369613135;
    msg.z = 0.789975718764;

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
    msg.setTimeStamp(0.758469341285);
    msg.setSource(32216U);
    msg.setSourceEntity(177U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(47U);
    msg.x = 0.0125606022849;
    msg.y = 0.743044387866;
    msg.z = 0.580970997236;

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
    msg.setTimeStamp(0.344449410065);
    msg.setSource(26108U);
    msg.setSourceEntity(249U);
    msg.setDestination(64290U);
    msg.setDestinationEntity(170U);
    msg.x = 0.826651626014;
    msg.y = 0.462336140655;
    msg.z = 0.652634074035;

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
    msg.setTimeStamp(0.978208587896);
    msg.setSource(15162U);
    msg.setSourceEntity(162U);
    msg.setDestination(15528U);
    msg.setDestinationEntity(10U);
    msg.va = 0.864974892754;
    msg.aoa = 0.426021700202;
    msg.ssa = 0.192665104677;

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
    msg.setTimeStamp(0.98397517721);
    msg.setSource(55632U);
    msg.setSourceEntity(213U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(133U);
    msg.va = 0.901652779802;
    msg.aoa = 0.508254555819;
    msg.ssa = 0.803139911007;

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
    msg.setTimeStamp(0.299520941251);
    msg.setSource(1954U);
    msg.setSourceEntity(187U);
    msg.setDestination(14992U);
    msg.setDestinationEntity(216U);
    msg.va = 0.399753800334;
    msg.aoa = 0.472998199263;
    msg.ssa = 0.0128928729214;

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
    msg.setTimeStamp(0.545560939444);
    msg.setSource(34515U);
    msg.setSourceEntity(50U);
    msg.setDestination(29253U);
    msg.setDestinationEntity(225U);
    msg.value = 0.310550305366;

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
    msg.setTimeStamp(0.551788252067);
    msg.setSource(36344U);
    msg.setSourceEntity(97U);
    msg.setDestination(43929U);
    msg.setDestinationEntity(13U);
    msg.value = 0.634187403703;

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
    msg.setTimeStamp(0.911445508197);
    msg.setSource(34517U);
    msg.setSourceEntity(225U);
    msg.setDestination(6949U);
    msg.setDestinationEntity(105U);
    msg.value = 0.880956237877;

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
    msg.setTimeStamp(0.709477049753);
    msg.setSource(31788U);
    msg.setSourceEntity(120U);
    msg.setDestination(61828U);
    msg.setDestinationEntity(186U);
    msg.value = 0.291243068754;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.462173841591);
    msg.setSource(1193U);
    msg.setSourceEntity(69U);
    msg.setDestination(12128U);
    msg.setDestinationEntity(193U);
    msg.value = 0.617494427067;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.974103742011);
    msg.setSource(35148U);
    msg.setSourceEntity(58U);
    msg.setDestination(7112U);
    msg.setDestinationEntity(86U);
    msg.value = 0.940200471432;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.566772287957);
    msg.setSource(64061U);
    msg.setSourceEntity(145U);
    msg.setDestination(61439U);
    msg.setDestinationEntity(55U);
    msg.value = 0.867286097428;
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
    msg.setTimeStamp(0.580986611798);
    msg.setSource(3576U);
    msg.setSourceEntity(230U);
    msg.setDestination(4197U);
    msg.setDestinationEntity(223U);
    msg.value = 0.570147534929;
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
    msg.setTimeStamp(0.51231904275);
    msg.setSource(43310U);
    msg.setSourceEntity(90U);
    msg.setDestination(5823U);
    msg.setDestinationEntity(196U);
    msg.value = 0.997170200431;
    msg.speed_units = 241U;

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
    msg.setTimeStamp(0.592005107164);
    msg.setSource(39775U);
    msg.setSourceEntity(74U);
    msg.setDestination(10004U);
    msg.setDestinationEntity(249U);
    msg.value = 0.381567354717;

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
    msg.setTimeStamp(0.557275336051);
    msg.setSource(7976U);
    msg.setSourceEntity(62U);
    msg.setDestination(35222U);
    msg.setDestinationEntity(17U);
    msg.value = 0.446814684739;

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
    msg.setTimeStamp(0.147444265957);
    msg.setSource(14734U);
    msg.setSourceEntity(49U);
    msg.setDestination(5581U);
    msg.setDestinationEntity(78U);
    msg.value = 0.303438378324;

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
    msg.setTimeStamp(0.310096451654);
    msg.setSource(14609U);
    msg.setSourceEntity(109U);
    msg.setDestination(33698U);
    msg.setDestinationEntity(150U);
    msg.value = 0.434439464483;

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
    msg.setTimeStamp(0.519509179487);
    msg.setSource(26980U);
    msg.setSourceEntity(221U);
    msg.setDestination(61587U);
    msg.setDestinationEntity(212U);
    msg.value = 0.0525838239218;

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
    msg.setTimeStamp(0.678423301813);
    msg.setSource(10854U);
    msg.setSourceEntity(68U);
    msg.setDestination(27372U);
    msg.setDestinationEntity(41U);
    msg.value = 0.18064715603;

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
    msg.setTimeStamp(0.37552323578);
    msg.setSource(4440U);
    msg.setSourceEntity(193U);
    msg.setDestination(18122U);
    msg.setDestinationEntity(254U);
    msg.value = 0.245960527945;

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
    msg.setTimeStamp(0.998090018845);
    msg.setSource(11785U);
    msg.setSourceEntity(3U);
    msg.setDestination(39599U);
    msg.setDestinationEntity(227U);
    msg.value = 0.188405049166;

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
    msg.setTimeStamp(0.975249165492);
    msg.setSource(36598U);
    msg.setSourceEntity(192U);
    msg.setDestination(45071U);
    msg.setDestinationEntity(61U);
    msg.value = 0.341127588392;

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
    msg.setTimeStamp(0.474845265259);
    msg.setSource(36781U);
    msg.setSourceEntity(188U);
    msg.setDestination(23075U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 1117888509U;
    msg.start_lat = 0.40912282121;
    msg.start_lon = 0.0830523145891;
    msg.start_z = 0.00642863391713;
    msg.start_z_units = 189U;
    msg.end_lat = 0.789141689074;
    msg.end_lon = 0.931262822284;
    msg.end_z = 0.828033052341;
    msg.end_z_units = 96U;
    msg.speed = 0.919953372923;
    msg.speed_units = 138U;
    msg.lradius = 0.735722272255;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.145740411345);
    msg.setSource(37823U);
    msg.setSourceEntity(34U);
    msg.setDestination(48364U);
    msg.setDestinationEntity(215U);
    msg.path_ref = 282646632U;
    msg.start_lat = 0.631579986875;
    msg.start_lon = 0.63727777441;
    msg.start_z = 0.308175522403;
    msg.start_z_units = 239U;
    msg.end_lat = 0.399008187395;
    msg.end_lon = 0.840025027363;
    msg.end_z = 0.69189755696;
    msg.end_z_units = 183U;
    msg.speed = 0.14581662338;
    msg.speed_units = 246U;
    msg.lradius = 0.602792287993;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.769263578947);
    msg.setSource(53210U);
    msg.setSourceEntity(139U);
    msg.setDestination(20099U);
    msg.setDestinationEntity(177U);
    msg.path_ref = 2115235245U;
    msg.start_lat = 0.124350843952;
    msg.start_lon = 0.923215524995;
    msg.start_z = 0.347608112366;
    msg.start_z_units = 14U;
    msg.end_lat = 0.16351867231;
    msg.end_lon = 0.610024746702;
    msg.end_z = 0.971936180146;
    msg.end_z_units = 30U;
    msg.speed = 0.374700052136;
    msg.speed_units = 48U;
    msg.lradius = 0.00308297599686;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.938275032539);
    msg.setSource(40374U);
    msg.setSourceEntity(112U);
    msg.setDestination(18986U);
    msg.setDestinationEntity(176U);
    msg.x = 0.849128291533;
    msg.y = 0.936802981185;
    msg.z = 0.600295631815;
    msg.k = 0.68383467433;
    msg.m = 0.439433459564;
    msg.n = 0.586073428739;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.206016783342);
    msg.setSource(65402U);
    msg.setSourceEntity(45U);
    msg.setDestination(6970U);
    msg.setDestinationEntity(89U);
    msg.x = 0.20780573532;
    msg.y = 0.295470651989;
    msg.z = 0.934491476548;
    msg.k = 0.32525488415;
    msg.m = 0.445124023269;
    msg.n = 0.44891103126;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.0436219542885);
    msg.setSource(44156U);
    msg.setSourceEntity(155U);
    msg.setDestination(61491U);
    msg.setDestinationEntity(20U);
    msg.x = 0.306641021901;
    msg.y = 0.484070228493;
    msg.z = 0.726058800212;
    msg.k = 0.694315438389;
    msg.m = 0.634315480928;
    msg.n = 0.69157886486;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.160583186521);
    msg.setSource(58499U);
    msg.setSourceEntity(36U);
    msg.setDestination(53747U);
    msg.setDestinationEntity(54U);
    msg.value = 0.877753445258;

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
    msg.setTimeStamp(0.0686395066143);
    msg.setSource(20542U);
    msg.setSourceEntity(186U);
    msg.setDestination(61918U);
    msg.setDestinationEntity(149U);
    msg.value = 0.0517381390831;

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
    msg.setTimeStamp(0.53348306061);
    msg.setSource(43488U);
    msg.setSourceEntity(70U);
    msg.setDestination(8959U);
    msg.setDestinationEntity(4U);
    msg.value = 0.105007755349;

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
    msg.setTimeStamp(0.590033565916);
    msg.setSource(60032U);
    msg.setSourceEntity(103U);
    msg.setDestination(58808U);
    msg.setDestinationEntity(199U);
    msg.u = 0.898998770499;
    msg.v = 0.298520296815;
    msg.w = 0.831685183263;
    msg.p = 0.875685760768;
    msg.q = 0.671003618892;
    msg.r = 0.847574776216;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.0259857795652);
    msg.setSource(29191U);
    msg.setSourceEntity(43U);
    msg.setDestination(58741U);
    msg.setDestinationEntity(150U);
    msg.u = 0.329657387443;
    msg.v = 0.972924857316;
    msg.w = 0.0738329488908;
    msg.p = 0.482859216209;
    msg.q = 0.195368366486;
    msg.r = 0.202786014777;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.135613087287);
    msg.setSource(20647U);
    msg.setSourceEntity(249U);
    msg.setDestination(64553U);
    msg.setDestinationEntity(211U);
    msg.u = 0.565993689191;
    msg.v = 0.708967714204;
    msg.w = 0.639860424283;
    msg.p = 0.312267983574;
    msg.q = 0.667871579923;
    msg.r = 0.575605285184;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.430128115276);
    msg.setSource(63919U);
    msg.setSourceEntity(218U);
    msg.setDestination(42034U);
    msg.setDestinationEntity(126U);
    msg.path_ref = 3258054800U;
    msg.start_lat = 0.945110526624;
    msg.start_lon = 0.993584843416;
    msg.start_z = 0.136198504174;
    msg.start_z_units = 45U;
    msg.end_lat = 0.151151764373;
    msg.end_lon = 0.374558267476;
    msg.end_z = 0.973991412022;
    msg.end_z_units = 243U;
    msg.lradius = 0.582010451876;
    msg.flags = 130U;
    msg.x = 0.270614386217;
    msg.y = 0.205228965868;
    msg.z = 0.141260641091;
    msg.vx = 0.171815707831;
    msg.vy = 0.436496679409;
    msg.vz = 0.371613480359;
    msg.course_error = 0.900852996786;
    msg.eta = 53832U;

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
    msg.setTimeStamp(0.382352057189);
    msg.setSource(26381U);
    msg.setSourceEntity(163U);
    msg.setDestination(9215U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 3258249276U;
    msg.start_lat = 0.0518719542556;
    msg.start_lon = 0.70126098249;
    msg.start_z = 0.952676172135;
    msg.start_z_units = 96U;
    msg.end_lat = 0.851209460935;
    msg.end_lon = 0.243713727035;
    msg.end_z = 0.403784081237;
    msg.end_z_units = 47U;
    msg.lradius = 0.249966211191;
    msg.flags = 76U;
    msg.x = 0.180724492968;
    msg.y = 0.933971721242;
    msg.z = 0.882149778905;
    msg.vx = 0.63116638639;
    msg.vy = 0.303810473283;
    msg.vz = 0.0576578072509;
    msg.course_error = 0.281642907837;
    msg.eta = 1975U;

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
    msg.setTimeStamp(0.14636173545);
    msg.setSource(4854U);
    msg.setSourceEntity(25U);
    msg.setDestination(44593U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 249681983U;
    msg.start_lat = 0.661574720024;
    msg.start_lon = 0.711363418321;
    msg.start_z = 0.658777146935;
    msg.start_z_units = 184U;
    msg.end_lat = 0.962965676941;
    msg.end_lon = 0.149938038875;
    msg.end_z = 0.199092516332;
    msg.end_z_units = 1U;
    msg.lradius = 0.737040110324;
    msg.flags = 210U;
    msg.x = 0.832178507798;
    msg.y = 0.151018124764;
    msg.z = 0.923056376209;
    msg.vx = 0.834624266854;
    msg.vy = 0.0398983903389;
    msg.vz = 0.901950994682;
    msg.course_error = 0.319825604322;
    msg.eta = 22072U;

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
    msg.setTimeStamp(0.885814430309);
    msg.setSource(2866U);
    msg.setSourceEntity(17U);
    msg.setDestination(53492U);
    msg.setDestinationEntity(213U);
    msg.k = 0.701955542478;
    msg.m = 0.517209943312;
    msg.n = 0.665801343074;

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
    msg.setTimeStamp(0.860282927249);
    msg.setSource(14817U);
    msg.setSourceEntity(9U);
    msg.setDestination(7500U);
    msg.setDestinationEntity(4U);
    msg.k = 0.0603948904245;
    msg.m = 0.774929757741;
    msg.n = 0.557394399101;

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
    msg.setTimeStamp(0.648404100511);
    msg.setSource(58066U);
    msg.setSourceEntity(75U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(164U);
    msg.k = 0.398771733973;
    msg.m = 0.410965319276;
    msg.n = 0.626204448015;

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
    msg.setTimeStamp(0.481254723744);
    msg.setSource(44197U);
    msg.setSourceEntity(63U);
    msg.setDestination(53424U);
    msg.setDestinationEntity(229U);
    msg.p = 0.607180273122;
    msg.i = 0.965027066856;
    msg.d = 0.526067188387;
    msg.a = 0.905027885936;

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
    msg.setTimeStamp(0.324365955785);
    msg.setSource(21268U);
    msg.setSourceEntity(243U);
    msg.setDestination(10158U);
    msg.setDestinationEntity(90U);
    msg.p = 0.33152864229;
    msg.i = 0.205798133751;
    msg.d = 0.284534710621;
    msg.a = 0.930112295529;

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
    msg.setTimeStamp(0.613800520686);
    msg.setSource(24580U);
    msg.setSourceEntity(209U);
    msg.setDestination(55338U);
    msg.setDestinationEntity(174U);
    msg.p = 0.899168503408;
    msg.i = 0.974008115804;
    msg.d = 0.647169396187;
    msg.a = 0.968577572353;

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
    msg.setTimeStamp(0.335337768841);
    msg.setSource(34256U);
    msg.setSourceEntity(211U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(11U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.814705688295);
    msg.setSource(38965U);
    msg.setSourceEntity(90U);
    msg.setDestination(16590U);
    msg.setDestinationEntity(111U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.546932206897);
    msg.setSource(31731U);
    msg.setSourceEntity(64U);
    msg.setDestination(39975U);
    msg.setDestinationEntity(181U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.566865339845);
    msg.setSource(50996U);
    msg.setSourceEntity(158U);
    msg.setDestination(34006U);
    msg.setDestinationEntity(78U);
    msg.x = 0.620448480642;
    msg.y = 0.568363305651;
    msg.z = 0.667894025951;
    msg.vx = 0.598751193229;
    msg.vy = 0.529229069971;
    msg.vz = 0.891530786961;
    msg.ax = 0.6124568998;
    msg.ay = 0.352898747096;
    msg.az = 0.907403516575;
    msg.flags = 26440U;

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
    msg.setTimeStamp(0.183508598225);
    msg.setSource(5484U);
    msg.setSourceEntity(100U);
    msg.setDestination(56189U);
    msg.setDestinationEntity(84U);
    msg.x = 0.346020376163;
    msg.y = 0.046432707287;
    msg.z = 0.734450362841;
    msg.vx = 0.559769462773;
    msg.vy = 0.936056386335;
    msg.vz = 0.872422649436;
    msg.ax = 0.931779334691;
    msg.ay = 0.843876449199;
    msg.az = 0.399038275951;
    msg.flags = 26135U;

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
    msg.setTimeStamp(0.282776772207);
    msg.setSource(55311U);
    msg.setSourceEntity(96U);
    msg.setDestination(50577U);
    msg.setDestinationEntity(53U);
    msg.x = 0.65387106049;
    msg.y = 0.529097787723;
    msg.z = 0.723635254524;
    msg.vx = 0.141106856723;
    msg.vy = 0.81016656858;
    msg.vz = 0.179025578342;
    msg.ax = 0.231760908612;
    msg.ay = 0.0659340531434;
    msg.az = 0.0566410090178;
    msg.flags = 4728U;

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
    msg.setTimeStamp(0.950478654066);
    msg.setSource(62323U);
    msg.setSourceEntity(29U);
    msg.setDestination(1690U);
    msg.setDestinationEntity(156U);
    msg.value = 0.223705152991;

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
    msg.setTimeStamp(0.798894381219);
    msg.setSource(50983U);
    msg.setSourceEntity(200U);
    msg.setDestination(21582U);
    msg.setDestinationEntity(79U);
    msg.value = 0.108159177384;

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
    msg.setTimeStamp(0.94304003489);
    msg.setSource(60U);
    msg.setSourceEntity(36U);
    msg.setDestination(56100U);
    msg.setDestinationEntity(190U);
    msg.value = 0.927451579479;

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
    msg.setTimeStamp(0.429684172171);
    msg.setSource(21162U);
    msg.setSourceEntity(108U);
    msg.setDestination(36284U);
    msg.setDestinationEntity(1U);
    msg.timeout = 40524U;
    msg.lat = 0.530308153587;
    msg.lon = 0.503956324572;
    msg.z = 0.743199390312;
    msg.z_units = 61U;
    msg.speed = 0.311158581837;
    msg.speed_units = 128U;
    msg.roll = 0.766417700347;
    msg.pitch = 0.426451045804;
    msg.yaw = 0.767289121667;
    msg.custom.assign("YSCGUGHDROXTHAHSBUVGNBYFRTZVHGXIQMDEKDKKPFTEACMECRLYKYWIHLRPFJMBDQRJOESOHP");

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
    msg.setTimeStamp(0.645754598088);
    msg.setSource(40168U);
    msg.setSourceEntity(79U);
    msg.setDestination(26967U);
    msg.setDestinationEntity(37U);
    msg.timeout = 41239U;
    msg.lat = 0.102117110684;
    msg.lon = 0.317629636518;
    msg.z = 0.0819212389327;
    msg.z_units = 107U;
    msg.speed = 0.517333576539;
    msg.speed_units = 104U;
    msg.roll = 0.579318872536;
    msg.pitch = 0.490069134044;
    msg.yaw = 0.837143575855;
    msg.custom.assign("ZBOQGNFOLAHNZPYJDFQIXJQMWLJNXCIDQOKCOMCELXFMWLQHYQAABIEYAVHHYENAJQQJFTTNUYPLEFTEIUPVEGXTIFTHXEPVHGXJRVCA");

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
    msg.setTimeStamp(0.256253429698);
    msg.setSource(41462U);
    msg.setSourceEntity(27U);
    msg.setDestination(39487U);
    msg.setDestinationEntity(189U);
    msg.timeout = 62117U;
    msg.lat = 0.219717810476;
    msg.lon = 0.222069112578;
    msg.z = 0.467813826188;
    msg.z_units = 178U;
    msg.speed = 0.805722474009;
    msg.speed_units = 240U;
    msg.roll = 0.413581047105;
    msg.pitch = 0.681039955064;
    msg.yaw = 0.817888334896;
    msg.custom.assign("CRPHBOKLEAFLQVWSTIGAFCYDVVLUVOPOBWAAJAAJNMQUWYLDRWILNKDHMZNUSSZDWZUTQQGLHYFHQJMVDQGSQVXHXJRHJZJFACKLOREKVCYRJXXBOIUGKRTVVETGROJQSFTGEKSITXHIXWMGODNBDGPYAUZYZMPLUPBFDIUNBAPMPXP");

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
    msg.setTimeStamp(0.656559396154);
    msg.setSource(39607U);
    msg.setSourceEntity(184U);
    msg.setDestination(58876U);
    msg.setDestinationEntity(253U);
    msg.timeout = 20650U;
    msg.lat = 0.0913709637396;
    msg.lon = 0.195834860004;
    msg.z = 0.566040004488;
    msg.z_units = 25U;
    msg.speed = 0.620890086367;
    msg.speed_units = 143U;
    msg.duration = 4147U;
    msg.radius = 0.167900296512;
    msg.flags = 45U;
    msg.custom.assign("VETHOVWPSRRRUWACCXNQYQXIZXJPSIGOKNTHUMQWNTOBUZTLGZIBGBWEEFPKHIMVMQEWKFZKBZSIXSVUBWFJHQFRDDIHRWJFAVYKTGLOLWJQYOSXMNEJRXSEWALERTMRGLLPNGAF");

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
    msg.setTimeStamp(0.379574940513);
    msg.setSource(50212U);
    msg.setSourceEntity(52U);
    msg.setDestination(6311U);
    msg.setDestinationEntity(34U);
    msg.timeout = 37991U;
    msg.lat = 0.0874190033185;
    msg.lon = 0.30379788173;
    msg.z = 0.703469725298;
    msg.z_units = 200U;
    msg.speed = 0.924085145332;
    msg.speed_units = 246U;
    msg.duration = 27823U;
    msg.radius = 0.881801491486;
    msg.flags = 69U;
    msg.custom.assign("UTJJHRWUCJHKWZMPLYLCVJSMTSCSQOOBXIREVBWTYGYFBBYDKBJTAYPZVJSERGNCVPYQSYEXZFSMCKBNDROEUFLGUFZIEHVYDTMNBJAWWAUFUICVDTWYTCGQHKMGNIFEIENVPQXVDEFNTBYODLXHFMSEOKNZLKAJA");

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
    msg.setTimeStamp(0.180549775924);
    msg.setSource(6679U);
    msg.setSourceEntity(167U);
    msg.setDestination(53214U);
    msg.setDestinationEntity(123U);
    msg.timeout = 38761U;
    msg.lat = 0.0791184736129;
    msg.lon = 0.0443867896437;
    msg.z = 0.292584514982;
    msg.z_units = 231U;
    msg.speed = 0.222721038378;
    msg.speed_units = 175U;
    msg.duration = 51783U;
    msg.radius = 0.401942686926;
    msg.flags = 205U;
    msg.custom.assign("ZGUVSAPYDOAWRUTDNFVTWQZKBMCAIUKWNF");

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
    msg.setTimeStamp(0.0978269470807);
    msg.setSource(59800U);
    msg.setSourceEntity(186U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(33U);
    msg.custom.assign("PSCJMMTAVYQQGKLXSIYVPLJZIHOFWFDFLWM");

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
    msg.setTimeStamp(0.18533299522);
    msg.setSource(52672U);
    msg.setSourceEntity(233U);
    msg.setDestination(5265U);
    msg.setDestinationEntity(177U);
    msg.custom.assign("LABIJGTDMXJHJYZESQLJTIRSNVJMDNMCRLWOPRVOKTVSCNSHHJAUQHSPMZGXNEENVTOCP");

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
    msg.setTimeStamp(0.337477538005);
    msg.setSource(33298U);
    msg.setSourceEntity(247U);
    msg.setDestination(5809U);
    msg.setDestinationEntity(91U);
    msg.custom.assign("XLOXOZIULJIKJBLKHUWJSCVDNXYLLNKAZMILRBRWAIVAASRWZXCARKAOIUAWTHDCRFYRJQZTYPCDBQYVOMUFFQEBERUQQGJUGGVQKVO");

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
    msg.setTimeStamp(0.917431007714);
    msg.setSource(54766U);
    msg.setSourceEntity(239U);
    msg.setDestination(52731U);
    msg.setDestinationEntity(189U);
    msg.timeout = 63077U;
    msg.lat = 0.826260516606;
    msg.lon = 0.391311064588;
    msg.z = 0.38546505696;
    msg.z_units = 82U;
    msg.duration = 2980U;
    msg.speed = 0.231915902723;
    msg.speed_units = 225U;
    msg.type = 119U;
    msg.radius = 0.969642741916;
    msg.length = 0.800265674536;
    msg.bearing = 0.960805383252;
    msg.direction = 38U;
    msg.custom.assign("EFGMUGMDYCOCQWKQLJYUTZIOMYOBIYWBHLMTGDFWNNUEXIRZDJUFHJLSXIBPPNVTASCAZOOCGTFIWRWGCAKEYVSPJMDROCROXQYBOHEQLWPEFUBUSXAFKTTPDDTUFKVHNGASKCICLVJJQQZZDVUHEMLJAGJDBQZNIFCPKPAUYDLXWGPULRSPSRNKKIV");

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
    msg.setTimeStamp(0.591721313918);
    msg.setSource(50034U);
    msg.setSourceEntity(245U);
    msg.setDestination(45708U);
    msg.setDestinationEntity(133U);
    msg.timeout = 12192U;
    msg.lat = 0.644654000943;
    msg.lon = 0.689070854311;
    msg.z = 0.0949766209281;
    msg.z_units = 116U;
    msg.duration = 62998U;
    msg.speed = 0.780909626092;
    msg.speed_units = 240U;
    msg.type = 253U;
    msg.radius = 0.0398071806787;
    msg.length = 0.382814450342;
    msg.bearing = 0.547849982065;
    msg.direction = 78U;
    msg.custom.assign("XKVYWKORZQEQYWZYEWSIEDPMZVQMRDOPNCRAGAUUDHQJHNRNXBSMHRTRTBILKWDGIVSKFMCSCPQGBLBFIUGEENXIEFPSDHTKVAMAQTABEONZYHLJWLFYDXEHRUXLWAZMHVGIIHQXOSPGLKVFHPFJNOUYZTJZOD");

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
    msg.setTimeStamp(0.383720145515);
    msg.setSource(46871U);
    msg.setSourceEntity(139U);
    msg.setDestination(24168U);
    msg.setDestinationEntity(254U);
    msg.timeout = 17906U;
    msg.lat = 0.0152146316426;
    msg.lon = 0.207543277248;
    msg.z = 0.0488567746263;
    msg.z_units = 136U;
    msg.duration = 27015U;
    msg.speed = 0.691758105874;
    msg.speed_units = 36U;
    msg.type = 188U;
    msg.radius = 0.297102764073;
    msg.length = 0.629623162587;
    msg.bearing = 0.1153830353;
    msg.direction = 232U;
    msg.custom.assign("YLEKADZXNEVCYNNLJZLBULHUFHPBCLVUDYIJTZJVPGFGEAGLRKGXQFATPHLCJOXGLBBRZBCUYMFDZEPIYSODMAEFQQJUNSKZVEQNJQMMOAOPOFJGOWPTKXZPSLKWHHTFCNGURDESFOXPIYHWGHWFTIJAJIDYWBOZWNHRYTYMCUTBKDSWACSMVXTDFAINSKSZVXIIMRIXBCQVEPASRRIQTALQKVYMXSPXHUR");

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
    msg.setTimeStamp(0.19911782741);
    msg.setSource(40893U);
    msg.setSourceEntity(130U);
    msg.setDestination(3802U);
    msg.setDestinationEntity(82U);
    msg.duration = 14273U;
    msg.custom.assign("STWMZHXFDOKQOFKYVUVASYZAMUUPPAHHFTAMSIDURBXDEXSOVSCPZLWKDICGXBDBARBLJJFZPVYPMFMTQXZVVR");

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
    msg.setTimeStamp(0.435029660652);
    msg.setSource(41547U);
    msg.setSourceEntity(207U);
    msg.setDestination(48391U);
    msg.setDestinationEntity(209U);
    msg.duration = 35498U;
    msg.custom.assign("TGJPHBHIWCIZTBBDZHYNJTQQK");

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
    msg.setTimeStamp(0.327097441496);
    msg.setSource(31086U);
    msg.setSourceEntity(181U);
    msg.setDestination(15450U);
    msg.setDestinationEntity(48U);
    msg.duration = 39136U;
    msg.custom.assign("ZLUFRYXUNGTEACRGZQQJPUIUAJSEJAOHMSNXJEIHSRSVEFBHIWYMIRSPXKLSBBMTFMODQKAYNYVCWMDVBXARPFRPJFVVWYXYUBOCDTPHKTCYNXONWBDHDHFWTLNGVAGURMUOIYSYHDBWPGLSHINVTKR");

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
    msg.setTimeStamp(0.530327281313);
    msg.setSource(36060U);
    msg.setSourceEntity(25U);
    msg.setDestination(3354U);
    msg.setDestinationEntity(75U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0545696051852;
    tmp_msg_0.z_units = 114U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42841U;
    msg.custom.assign("INAYFCVXULIPRIMTRDKLCMLMPGYIEDKBPGABXWAIOOFXTCEXRXJILELTYWAHSSQUUVKLYFPYWKRSXJDKQHEWNGZHEANMTTJCVMEQVMJASPLMBZIMQBKWOJNNBWDINARVOKRDNYIVQSCYDSSVHFFVTCGEUYOJEGBPNPXWNHUXRZPJPWPHZQVZOXFWTUGGZHLLGFMICEQGGAOLTCNH");

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
    msg.setTimeStamp(0.497278563497);
    msg.setSource(40156U);
    msg.setSourceEntity(115U);
    msg.setDestination(12376U);
    msg.setDestinationEntity(93U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.224982199948;
    tmp_msg_0.z_units = 119U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62020U;
    msg.custom.assign("LFCLMIZDWHVLKQMXTZIAQWLIRVVSSZKBGKOMQPGVNOSPNXFUCQNETHPJDOECAYCGOEC");

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
    msg.setTimeStamp(0.435742867607);
    msg.setSource(16095U);
    msg.setSourceEntity(121U);
    msg.setDestination(50552U);
    msg.setDestinationEntity(218U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.897803633296;
    tmp_msg_0.z_units = 50U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25128U;
    msg.custom.assign("RKGAZBAHPSOJONCBCYQSSCYQGLT");

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
    msg.setTimeStamp(0.190087305411);
    msg.setSource(32515U);
    msg.setSourceEntity(161U);
    msg.setDestination(50U);
    msg.setDestinationEntity(171U);
    msg.timeout = 54210U;
    msg.lat = 0.570373200909;
    msg.lon = 0.257424604215;
    msg.z = 0.889866586941;
    msg.z_units = 62U;
    msg.speed = 0.0664192816769;
    msg.speed_units = 158U;
    msg.bearing = 0.554302106705;
    msg.cross_angle = 0.121191807323;
    msg.width = 0.32900533686;
    msg.length = 0.980248583246;
    msg.hstep = 0.673532525403;
    msg.coff = 160U;
    msg.alternation = 192U;
    msg.flags = 78U;
    msg.custom.assign("ZDURPZJTMNNTICAHGRQYAEUMIDORJNIJAFZOPHLWVBRQDNIYWBXXYMMPUNCZFQCMBCADEXKJVWKKRTMIKWZDSOQUAPXRBJCWESWQGXXIROTMSREOL");

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
    msg.setTimeStamp(0.232561499463);
    msg.setSource(54295U);
    msg.setSourceEntity(223U);
    msg.setDestination(16558U);
    msg.setDestinationEntity(138U);
    msg.timeout = 27012U;
    msg.lat = 0.453347810527;
    msg.lon = 0.69190465728;
    msg.z = 0.968458192802;
    msg.z_units = 84U;
    msg.speed = 0.33403443557;
    msg.speed_units = 110U;
    msg.bearing = 0.130764650288;
    msg.cross_angle = 0.91381096063;
    msg.width = 0.362528200559;
    msg.length = 0.869461401517;
    msg.hstep = 0.198775754667;
    msg.coff = 93U;
    msg.alternation = 139U;
    msg.flags = 146U;
    msg.custom.assign("KRLZTDHFMCXOQWEJMMACXZBWCFTMOJPIFJNIDZARPTMJBNCJKQYGYVWKGYHHSTLSLVFFMAPVLSMDNJFEMZEYRCQNTYGBOPPMDUZXEVUFBDLGLZXDQQYNFNYBXOOLLEUCKEXCDAOVAIOITIEGOQKPWAUUPYINRKZWQRGSWQVMRBGJUIRBKEGUKHGVBJWAXZXWRHETN");

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
    msg.setTimeStamp(0.386610769382);
    msg.setSource(14425U);
    msg.setSourceEntity(120U);
    msg.setDestination(61754U);
    msg.setDestinationEntity(132U);
    msg.timeout = 33640U;
    msg.lat = 0.782014806707;
    msg.lon = 0.877698215517;
    msg.z = 0.505654132062;
    msg.z_units = 187U;
    msg.speed = 0.63354079352;
    msg.speed_units = 193U;
    msg.bearing = 0.670268121681;
    msg.cross_angle = 0.49315099312;
    msg.width = 0.688290741898;
    msg.length = 0.599992549554;
    msg.hstep = 0.539418765386;
    msg.coff = 104U;
    msg.alternation = 0U;
    msg.flags = 128U;
    msg.custom.assign("TWEFXGSHEHPCMDQNADJXSVZYWFEKWRPQFBOASGYCYJAQDWTFFOVXSNSHGUYYYJDIBWREPQTGCUAZQIYHVRDHXWUWWMMVKNQCBPOHSXZUJMELJZSPLCGDEBJXPRIANEFLINYUBHOOMSLRYKQBLQMVQZEBFLBZZHNDJAROTSIUTDIUQIPPCVTPBUGBCKPNKWHCJCXLAMMNGMW");

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
    msg.setTimeStamp(0.956174256177);
    msg.setSource(60830U);
    msg.setSourceEntity(113U);
    msg.setDestination(56233U);
    msg.setDestinationEntity(178U);
    msg.timeout = 30544U;
    msg.lat = 0.155102503867;
    msg.lon = 0.52500179172;
    msg.z = 0.505321398042;
    msg.z_units = 159U;
    msg.speed = 0.737644068128;
    msg.speed_units = 70U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.408620385232;
    tmp_msg_0.y = 0.377065464524;
    tmp_msg_0.z = 0.489493813156;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SYZKIQZMOHCXDDDDTJOLXPGLYGGUIAQHPQFNEGRASEOLRRZJHLFIHNLWTWQQCXNQVSPIZQBWMKERXZSETPAIPNUMYAZOVNOOLFXMTSHRGTPBTBSODJFKCUWBNJREGKJYNFWGMMCIRCHBTJHSPWWHFYVIBWFBGJZCGEGUHEUUAXYCZVMNJIYMVU");

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
    msg.setTimeStamp(0.174612957485);
    msg.setSource(11121U);
    msg.setSourceEntity(42U);
    msg.setDestination(46675U);
    msg.setDestinationEntity(144U);
    msg.timeout = 18162U;
    msg.lat = 0.610946465817;
    msg.lon = 0.265068941025;
    msg.z = 0.417177857154;
    msg.z_units = 105U;
    msg.speed = 0.02610488392;
    msg.speed_units = 251U;
    msg.custom.assign("LLLJAJHUUTFTKHDUDJVNWPSFAXQGXPPCNYZWIYYSTKFOSIWXUXBWHZVIMEVCKNORZZYXAGEEZQSMDBVSLWLABGFCSEYPTAVUBPRQQZGQMLPQVHFFFCVCADRRGUHPSKRJMTIJDKQMCDIDBEJIQRMNOREVSPYWULXIOBKOMTXUZOEXXHTTKEJYGBUWEAAGBVROXRKMFYCNQNQLINGRBFNZHHSEMZWCSMUOJJPLODHDNYIZTNYIJKWAPOHBWKGFL");

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
    msg.setTimeStamp(0.429005648576);
    msg.setSource(2724U);
    msg.setSourceEntity(175U);
    msg.setDestination(49726U);
    msg.setDestinationEntity(194U);
    msg.timeout = 63506U;
    msg.lat = 0.328426536513;
    msg.lon = 0.887049869913;
    msg.z = 0.719562912766;
    msg.z_units = 192U;
    msg.speed = 0.924278736532;
    msg.speed_units = 212U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.951813737489;
    tmp_msg_0.y = 0.557411069574;
    tmp_msg_0.z = 0.439243093752;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TLLFEBOPMCCNGVPULFHSFAHZWZMMSWDFMGYULDCRECISNNJJYARJNXUAXDAHZPQPGFVFEDZSHCXGTPEZVVCJQSTUVSBZUQMDRVMYKYDEIHNHZVQIDSKKAWSKLNKFQGOBIGRITLWTKVZBNHTAIOOAALAUQGOTHJUBYYHRFQCIOOTQTGWKUEWPXFRMKBZXQVVWIEYMKJEYDCRDRCEMBPIPBGYNWA");

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
    msg.setTimeStamp(0.876610197062);
    msg.setSource(40891U);
    msg.setSourceEntity(169U);
    msg.setDestination(34017U);
    msg.setDestinationEntity(126U);
    msg.x = 0.133261505125;
    msg.y = 0.488194504801;
    msg.z = 0.485774891009;

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
    msg.setTimeStamp(0.240520039358);
    msg.setSource(18627U);
    msg.setSourceEntity(92U);
    msg.setDestination(14112U);
    msg.setDestinationEntity(44U);
    msg.x = 0.478072020889;
    msg.y = 0.898579036643;
    msg.z = 0.444535951909;

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
    msg.setTimeStamp(0.536644922683);
    msg.setSource(42029U);
    msg.setSourceEntity(84U);
    msg.setDestination(23674U);
    msg.setDestinationEntity(2U);
    msg.x = 0.240005026729;
    msg.y = 0.0812962175856;
    msg.z = 0.164231225179;

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
    msg.setTimeStamp(0.377393162406);
    msg.setSource(20208U);
    msg.setSourceEntity(96U);
    msg.setDestination(48725U);
    msg.setDestinationEntity(167U);
    msg.timeout = 60303U;
    msg.lat = 0.47746705107;
    msg.lon = 0.155852293708;
    msg.z = 0.219892615208;
    msg.z_units = 93U;
    msg.amplitude = 0.258306759033;
    msg.pitch = 0.524672942989;
    msg.speed = 0.233399419277;
    msg.speed_units = 246U;
    msg.custom.assign("EOERWYOOBLOZPTKAPMHQHGJLAIKZRVRYGRBPIKASLMQNPNUQXSTCDIUBZN");

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
    msg.setTimeStamp(0.198810510256);
    msg.setSource(13658U);
    msg.setSourceEntity(19U);
    msg.setDestination(41353U);
    msg.setDestinationEntity(48U);
    msg.timeout = 24274U;
    msg.lat = 0.690862754543;
    msg.lon = 0.0357613326914;
    msg.z = 0.0659158424423;
    msg.z_units = 161U;
    msg.amplitude = 0.0490617967718;
    msg.pitch = 0.84601290202;
    msg.speed = 0.290325372203;
    msg.speed_units = 228U;
    msg.custom.assign("WFRXIIOFJTVMGSMJEMTZBFCQQKDBVPCSZRHRXQXKSXAWHPJWHTVKAXRKMPKAUTQMISCPLEYYFSPEIDEPCCLKWMNTAWMXLMTLHBFVWNVONZPLJABGDUPPUIRKEZCOIDRCYZLXIYSKWJHGLKNHYVNBWCGABBYUAEHFXOTLHYUZCDGISEOOYVVAUBDGUIZQOOEMJMOYTNFGSJOAATFDEXCJREJPHQHNNLUIQFZNQDGBQJRGKZSYLVFSVTGQRN");

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
    msg.setTimeStamp(0.657233800126);
    msg.setSource(35602U);
    msg.setSourceEntity(173U);
    msg.setDestination(51418U);
    msg.setDestinationEntity(178U);
    msg.timeout = 12486U;
    msg.lat = 0.04156649524;
    msg.lon = 0.225115091972;
    msg.z = 0.312425201967;
    msg.z_units = 231U;
    msg.amplitude = 0.809568620601;
    msg.pitch = 0.362253845226;
    msg.speed = 0.25328686946;
    msg.speed_units = 88U;
    msg.custom.assign("QEOZPHRBSVVTBPHMXDMAFFTVBCDQAVSUQRXXOGPTVLCSZSVJIVCDDOZLMGWMFKGXNILWFXIITGLJJFCYYWYVABXZJFLETEMLBSPGEJQPSTLIGPWJKFEBKXVYOTOQCUIDCEKYHWVXYUQMNZRARMQDSODNHRWWDXHKGQRNWHNJJZKEYROOTAUKKNHUABISSANWXCAUMBOAEQTDESUGLQNYHJFMLMGFZRPIHNILKZODHYCPURJCCAGZKBBRUP");

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
    msg.setTimeStamp(0.448412342758);
    msg.setSource(30321U);
    msg.setSourceEntity(136U);
    msg.setDestination(38739U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.795921335782);
    msg.setSource(28461U);
    msg.setSourceEntity(59U);
    msg.setDestination(51578U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.850469089315);
    msg.setSource(32453U);
    msg.setSourceEntity(24U);
    msg.setDestination(21072U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.663456969452);
    msg.setSource(15390U);
    msg.setSourceEntity(13U);
    msg.setDestination(11419U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.876472848388;
    msg.lon = 0.56333026616;
    msg.z = 0.942986230096;
    msg.z_units = 81U;
    msg.radius = 0.54625264673;
    msg.duration = 63679U;
    msg.speed = 0.982051595467;
    msg.speed_units = 252U;
    msg.custom.assign("MXCITCFNKMPILPADAEATHSUWWRZEBXVOYEQGQHVKTVIXATRCBQNPFHAQOTPIIDRVMCOWQNZYMBZMIZNSAXDWUESXRBBUELKMMHHGNQXUSUIJYLSGLJROIXZUZJPWMRXQWKEGLBYOGMYEJJVSARVBSBJYLTDZHCUHTOPYOQLDRFNRTYAZWIOGYJ");

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
    msg.setTimeStamp(0.682985750622);
    msg.setSource(31301U);
    msg.setSourceEntity(18U);
    msg.setDestination(64232U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.443989141447;
    msg.lon = 0.905287621837;
    msg.z = 0.70250660632;
    msg.z_units = 72U;
    msg.radius = 0.430437380112;
    msg.duration = 51700U;
    msg.speed = 0.0405680927779;
    msg.speed_units = 82U;
    msg.custom.assign("NHDKVJPQKIRGULYRKOUKMUFXAZBQOJNXGMDFHDNWWKGVDNCWZZIEESWKUQIBRPIRRHTSOJOVQUOWWEFFLWFFQNOKBXXPETXFAPJSCPPDLVCYAAHZMZUOCNCEQZF");

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
    msg.setTimeStamp(0.973172878605);
    msg.setSource(61599U);
    msg.setSourceEntity(226U);
    msg.setDestination(27802U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.490377595891;
    msg.lon = 0.911334143159;
    msg.z = 0.576438330776;
    msg.z_units = 237U;
    msg.radius = 0.680738656476;
    msg.duration = 34364U;
    msg.speed = 0.270679215095;
    msg.speed_units = 89U;
    msg.custom.assign("UOMLEAVDWJUXCAXPZTUJSXPBFLQOLICZFCXVDMNUTMIGUMXWVVYFPTQXYAHSZRIQVMNNSNILSVKPRFOHZOYBWKRLMLXEPABCADFUOGBLICONYZQTZPNPBGOJYWFRDZAJIEBDHEJTSGPMVRTHGUKSSLLKEIJLTXOKNCZMEDOMXOIQVIBYBGTKSDGGURUKPSDYNJRZRYAARTCJBREQSQDJVKCGEWPKAJWYUFVNFNQWWWZEMDHQC");

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
    msg.setTimeStamp(0.937592337249);
    msg.setSource(55078U);
    msg.setSourceEntity(169U);
    msg.setDestination(39409U);
    msg.setDestinationEntity(196U);
    msg.timeout = 10889U;
    msg.flags = 68U;
    msg.lat = 0.63259975635;
    msg.lon = 0.315302949042;
    msg.start_z = 0.538880884739;
    msg.start_z_units = 244U;
    msg.end_z = 0.972471449627;
    msg.end_z_units = 123U;
    msg.radius = 0.517100134783;
    msg.speed = 0.399922256451;
    msg.speed_units = 153U;
    msg.custom.assign("ZUUCXSTWPOYXAKQNXOQRWQTINAKAZXMYFRMVBEVVOKPAXFPOQJCCFWTYRNUUKGCYVWLSLIJSSNJRBQHEBBNIQTGGMQVANKSGTUPUWZAECVDVDYDRCGCXHEATFUOOHTECMPIFOGMIOSJZQZXJIJ");

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
    msg.setTimeStamp(0.590687539519);
    msg.setSource(11066U);
    msg.setSourceEntity(40U);
    msg.setDestination(54909U);
    msg.setDestinationEntity(158U);
    msg.timeout = 5306U;
    msg.flags = 236U;
    msg.lat = 0.800369836658;
    msg.lon = 0.0584346216663;
    msg.start_z = 0.612315929369;
    msg.start_z_units = 249U;
    msg.end_z = 0.124910808496;
    msg.end_z_units = 23U;
    msg.radius = 0.211117808586;
    msg.speed = 0.743790383404;
    msg.speed_units = 134U;
    msg.custom.assign("VSVMOBXZLXKYKUTDDZWFYXEKCMRUISYTQJSMDSBICKNJIVYUTFLONJFDZCGDKAGKPPBUOSDSLRQWPLEJJBGGEHCSLGQMXTPNMEISOWAHFTNVKFCRHFDROWAGOWIDPQPQAEOHJCCPGGYFHUSGYVNCQZAKQAJBQALIYXQKFIXIVEBRBVBVSWXTPZMZEVMWUYDKFLYLBOUHA");

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
    msg.setTimeStamp(0.0444877627858);
    msg.setSource(29495U);
    msg.setSourceEntity(3U);
    msg.setDestination(12490U);
    msg.setDestinationEntity(156U);
    msg.timeout = 44411U;
    msg.flags = 122U;
    msg.lat = 0.516328113041;
    msg.lon = 0.647003513991;
    msg.start_z = 0.92979382222;
    msg.start_z_units = 106U;
    msg.end_z = 0.66395426466;
    msg.end_z_units = 114U;
    msg.radius = 0.0632572556423;
    msg.speed = 0.70840654694;
    msg.speed_units = 22U;
    msg.custom.assign("VGPRJMHMYXMXYQBCZJGOKFGROHOOFABKSMGCMDCPBVRRPLBPZJVCMSQLTDDLUAHXIESLJKGIPZCWIOWYYLVZPUFEKQSBJOBDTJTGPISRCNPKUABZKJJTTCXTETEONQYGWNYNZPVWWWBWIQTXUVDZIAQIFMFUPGDLNFUUTLVRUGJIHBQMCYEUKYAOSEEZNYHBXUVAZNOFQAAXSMJAOXGIAIHLFSSSHLDFNLVZDRFEERNWWC");

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
    msg.setTimeStamp(0.0751324385187);
    msg.setSource(10100U);
    msg.setSourceEntity(105U);
    msg.setDestination(4350U);
    msg.setDestinationEntity(190U);
    msg.timeout = 19118U;
    msg.lat = 0.96985919659;
    msg.lon = 0.912596833584;
    msg.z = 0.377244926078;
    msg.z_units = 86U;
    msg.speed = 0.999613362062;
    msg.speed_units = 234U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.252861565602;
    tmp_msg_0.y = 0.432454983213;
    tmp_msg_0.z = 0.547195195036;
    tmp_msg_0.t = 0.0691082450121;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GYGPWKTREWPYQURNJGNVBSRJJWDEGPATANMERTSGWIWCXIMFZLDRKZBVVMSLQWBZP");

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
    msg.setTimeStamp(0.970318396967);
    msg.setSource(17000U);
    msg.setSourceEntity(234U);
    msg.setDestination(41449U);
    msg.setDestinationEntity(64U);
    msg.timeout = 1330U;
    msg.lat = 0.716965930743;
    msg.lon = 0.663473825389;
    msg.z = 0.759039364932;
    msg.z_units = 105U;
    msg.speed = 0.569517068331;
    msg.speed_units = 146U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.750340287747;
    tmp_msg_0.y = 0.385789534926;
    tmp_msg_0.z = 0.0915927947318;
    tmp_msg_0.t = 0.00816054674067;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SLSYHAXXFPSNJQVQEVOWVDBRSHKTXNVYGTNZOIOUMUJQEYKXJIMONLFVRMFJPMBFNWAVGZUYOIATQPXHUFDEVUYNADGBLRZHHTWJESYBYPGWPAUJMDZOIRQDMERNSTAMJLJYBQSLPWCUPJBQRUHWFADMPDIOHZFWFG");

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
    msg.setTimeStamp(0.0367080691055);
    msg.setSource(40284U);
    msg.setSourceEntity(237U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(92U);
    msg.timeout = 60723U;
    msg.lat = 0.534574500924;
    msg.lon = 0.804724002196;
    msg.z = 0.14541713235;
    msg.z_units = 166U;
    msg.speed = 0.795763227565;
    msg.speed_units = 184U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.327833600692;
    tmp_msg_0.y = 0.0277061560563;
    tmp_msg_0.z = 0.200928792145;
    tmp_msg_0.t = 0.571697587518;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AJXJIUMCHQLEJVJKFSPODNRUCPEFBSANMNQMAZFGZYZRZNBPSNBYRSKKOEQEYB");

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
    msg.setTimeStamp(0.556288196976);
    msg.setSource(3058U);
    msg.setSourceEntity(190U);
    msg.setDestination(19214U);
    msg.setDestinationEntity(191U);
    msg.x = 0.641173715027;
    msg.y = 0.167642909203;
    msg.z = 0.0852233809921;
    msg.t = 0.801247067561;

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
    msg.setTimeStamp(0.685883882561);
    msg.setSource(42085U);
    msg.setSourceEntity(98U);
    msg.setDestination(47424U);
    msg.setDestinationEntity(100U);
    msg.x = 0.512802076357;
    msg.y = 0.296645982421;
    msg.z = 0.00851643437023;
    msg.t = 0.683803591086;

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
    msg.setTimeStamp(0.325137056442);
    msg.setSource(34251U);
    msg.setSourceEntity(225U);
    msg.setDestination(53091U);
    msg.setDestinationEntity(2U);
    msg.x = 0.714241783452;
    msg.y = 0.786477346118;
    msg.z = 0.275446248646;
    msg.t = 0.225509487316;

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
    msg.setTimeStamp(0.888849996168);
    msg.setSource(32305U);
    msg.setSourceEntity(108U);
    msg.setDestination(8922U);
    msg.setDestinationEntity(29U);
    msg.timeout = 16474U;
    msg.name.assign("WWHFVDWMXTMHODZROMNVNZNAKFHFXQQDUEIZVIVXEMHLUWAJY");
    msg.custom.assign("JVPMOPWDZRXNUHZQWFEJRRTWPNREEAABKXXYWMEPZDPUMQOQXLRHMNNUKITCLIYRYYIBNOEOHJIQHMKSBJUAZGVRLLTQFPHEEOKQEALBXSURDHKGZNSUWQWLOZBCICYRCKZVYKDCJVFAFKBCOIICDOZHIJNFHQMMVYQDBUBMWWGRVFXSDHHWJPLGIAPXFZXVTXCCEGSKTTGUFOKNABUV");

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
    msg.setTimeStamp(0.84817532033);
    msg.setSource(53394U);
    msg.setSourceEntity(74U);
    msg.setDestination(40509U);
    msg.setDestinationEntity(191U);
    msg.timeout = 61279U;
    msg.name.assign("VFKXPZVFJXDGTPZUAMMJOUOVEDEIVCTXFWQHIQUBMFNRLEWPSPRSAYBHDPUO");
    msg.custom.assign("XDBLYJLTJOPECFHMDPWZLUEVLYZKFLNTKKMQUDPRWLVAAGDMDPUXTTHSJAYYATKMYJIOGRUDCBRQEGWPMJXSQNEVFHHSHXYKXHDCZVPYZTORHNVIJBNWRXSCIOPGGDKDFIWAL");

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
    msg.setTimeStamp(0.690097742893);
    msg.setSource(64724U);
    msg.setSourceEntity(36U);
    msg.setDestination(37133U);
    msg.setDestinationEntity(63U);
    msg.timeout = 779U;
    msg.name.assign("NYTNZSRVYGDTU");
    msg.custom.assign("TCLPNJHBEYRFNHSGWIFMYWXGDQAZSPAHQPQIJLTKDILNZZTMKUCFEYMKBGTYXLAOVSKCPJSUOLLQHGRBAVLONNXVYGRWGHGWZUTCBIFPUSDEPVVPFSZDJMBGHAZFXVGXQMYTKIXWLTFIRDBFICXCWIZRJRSAANWIUPSSIVHBXEAOEMZJPGEVNKJVDYOQTXASUYTZCJYLJRCEQEHDXCURWAKQFDOZMQRNVWUMUHUKRETP");

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
    msg.setTimeStamp(0.613625863692);
    msg.setSource(5641U);
    msg.setSourceEntity(157U);
    msg.setDestination(19465U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.602270940718;
    msg.lon = 0.764082538588;
    msg.z = 0.324247530535;
    msg.z_units = 93U;
    msg.speed = 0.456047542628;
    msg.speed_units = 39U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.557794175384;
    tmp_msg_0.y = 0.327033367903;
    tmp_msg_0.z = 0.156485913414;
    tmp_msg_0.t = 0.928802001515;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 40444U;
    tmp_msg_1.off_x = 0.0504609272132;
    tmp_msg_1.off_y = 0.391684017044;
    tmp_msg_1.off_z = 0.118015098856;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.780035896312;
    msg.custom.assign("EQJHTHYWYZSAQYAKFSMONXNYJBXADVGMLVDRRRSTSLHPBNXZKRPBCHKROUPCUJW");

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
    msg.setTimeStamp(0.896781808768);
    msg.setSource(22080U);
    msg.setSourceEntity(189U);
    msg.setDestination(53786U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.0491970922775;
    msg.lon = 0.933957752713;
    msg.z = 0.373896609678;
    msg.z_units = 198U;
    msg.speed = 0.290030048686;
    msg.speed_units = 219U;
    msg.start_time = 0.450105795682;
    msg.custom.assign("OVWXWHNWDOBIXZLKQIBXGPKQUDFWDMSVEWNTIFBMQGHHXSUIXCKBUUIJFDJTHCJBQCCORDHMTSZWZEJGSVQNLFHWREJGXIVBPJSZLFMFUDJSWBLKYHAPMLVFUQGYMUANNNQZDWQZLRFPJCT");

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
    msg.setTimeStamp(0.0136522916121);
    msg.setSource(62409U);
    msg.setSourceEntity(139U);
    msg.setDestination(29116U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.660775195603;
    msg.lon = 0.592949833423;
    msg.z = 0.897465945455;
    msg.z_units = 139U;
    msg.speed = 0.451024745864;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.537905986994;
    tmp_msg_0.y = 0.773571317879;
    tmp_msg_0.z = 0.929495014201;
    tmp_msg_0.t = 0.671719671041;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 43481U;
    tmp_msg_1.off_x = 0.943964105886;
    tmp_msg_1.off_y = 0.866948896437;
    tmp_msg_1.off_z = 0.119096984603;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.448653124046;
    msg.custom.assign("ESYWLADUFRWNUTIUNOHQVOFYXHCPTXKUBXISFVGLREPJSJMEBLBKVEHMZEKYSZHGZVSNTLWRHCKRMCIQRCOSVBWPLPSOJMWUCGUZAPBEWIXSHP");

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
    msg.setTimeStamp(0.933534192006);
    msg.setSource(38513U);
    msg.setSourceEntity(186U);
    msg.setDestination(31363U);
    msg.setDestinationEntity(92U);
    msg.vid = 15599U;
    msg.off_x = 0.33766795772;
    msg.off_y = 0.08880053271;
    msg.off_z = 0.107636180863;

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
    msg.setTimeStamp(0.105163319959);
    msg.setSource(26010U);
    msg.setSourceEntity(229U);
    msg.setDestination(37396U);
    msg.setDestinationEntity(38U);
    msg.vid = 52467U;
    msg.off_x = 0.837166993373;
    msg.off_y = 0.480835347166;
    msg.off_z = 0.940212703365;

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
    msg.setTimeStamp(0.376829633676);
    msg.setSource(62802U);
    msg.setSourceEntity(207U);
    msg.setDestination(28307U);
    msg.setDestinationEntity(235U);
    msg.vid = 34796U;
    msg.off_x = 0.252636537055;
    msg.off_y = 0.80186368238;
    msg.off_z = 0.444306608719;

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
    msg.setTimeStamp(0.318259966962);
    msg.setSource(61114U);
    msg.setSourceEntity(129U);
    msg.setDestination(8618U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.747808522456);
    msg.setSource(29634U);
    msg.setSourceEntity(226U);
    msg.setDestination(65045U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.106398027502);
    msg.setSource(21865U);
    msg.setSourceEntity(237U);
    msg.setDestination(11209U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.986886556884);
    msg.setSource(41550U);
    msg.setSourceEntity(187U);
    msg.setDestination(55167U);
    msg.setDestinationEntity(27U);
    msg.mid = 8070U;

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
    msg.setTimeStamp(0.428169494286);
    msg.setSource(12637U);
    msg.setSourceEntity(144U);
    msg.setDestination(14171U);
    msg.setDestinationEntity(199U);
    msg.mid = 527U;

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
    msg.setTimeStamp(0.904564387603);
    msg.setSource(6016U);
    msg.setSourceEntity(229U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(5U);
    msg.mid = 47645U;

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
    msg.setTimeStamp(0.410335791349);
    msg.setSource(41726U);
    msg.setSourceEntity(142U);
    msg.setDestination(11761U);
    msg.setDestinationEntity(103U);
    msg.state = 62U;
    msg.eta = 39469U;
    msg.info.assign("DJFSDKQFHCLGXLURSBMTYERYYKSLTOVXWESKYMYNUPZIOTTUYDPIJNJSKCTMDBAEHOLPQSGCFXGAPGYUJHPCFTWIVMFJIOWGCUAOSBWHKVEZQFPHGJRAZXVVXRFVKBPAHZVAEZGHIZWNHIMDKLVPQEBXRAKMRMCNNFJAUAAOGKUTUIWMZZLFQNFVYRZDJRQEZYWIXL");

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
    msg.setTimeStamp(0.739622577461);
    msg.setSource(52090U);
    msg.setSourceEntity(245U);
    msg.setDestination(41763U);
    msg.setDestinationEntity(75U);
    msg.state = 57U;
    msg.eta = 25477U;
    msg.info.assign("QNMKVJJCABHQCXOBEPVZQEBDIMOIGLFWSBXHQCBJRMWTRHRMQGDBBLEGCIOMJDHWIRTEPCSAZGFDFZAVGWTNIFXWGPDANRJMEVBTALYFNCAOFXQFCHYXRYISNUXGVVAHNHSVQJOSYSVLXZEPULQHIUUPTJKXWRHZDHINENIGKKMFKTDWTZUTULKMCNSKKYSODQOIFZWLOLZKWDXETNAYRZYYCESPBURFVQPGMAJPWP");

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
    msg.setTimeStamp(0.885322297652);
    msg.setSource(4733U);
    msg.setSourceEntity(247U);
    msg.setDestination(10612U);
    msg.setDestinationEntity(183U);
    msg.state = 117U;
    msg.eta = 19515U;
    msg.info.assign("SUAWWFHFKAUHPGYJXISMOUNPIVYKBXEKFFAZNKFAMOHZJLXXDUEWNSJWYMUDTDRIHRFLYXYVSNRIQQXRPLWLCBONUFQSIBDSFIACGOUZIWIJQCNVWJVPRYPKFTUBHRQZMMZTEXZGQEGQCLZMPNWMLKEANDZRIGRFVEBTSOJTCOGBCHOCQABSPAHDGWYIJPURGOECEPLNSZJVGYOTMEUCJTPDYKASOQLLVDK");

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
    msg.setTimeStamp(0.347008321264);
    msg.setSource(60869U);
    msg.setSourceEntity(233U);
    msg.setDestination(51554U);
    msg.setDestinationEntity(243U);
    msg.system = 45172U;
    msg.duration = 63476U;
    msg.speed = 0.277800375116;
    msg.speed_units = 212U;
    msg.x = 0.659895882185;
    msg.y = 0.297501335265;
    msg.z = 0.726646411745;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.399111986081);
    msg.setSource(52652U);
    msg.setSourceEntity(159U);
    msg.setDestination(17059U);
    msg.setDestinationEntity(236U);
    msg.system = 22645U;
    msg.duration = 35263U;
    msg.speed = 0.577667590325;
    msg.speed_units = 39U;
    msg.x = 0.622347162065;
    msg.y = 0.302938169669;
    msg.z = 0.134278833888;
    msg.z_units = 154U;

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
    msg.setTimeStamp(0.46092489417);
    msg.setSource(36418U);
    msg.setSourceEntity(247U);
    msg.setDestination(51536U);
    msg.setDestinationEntity(66U);
    msg.system = 28246U;
    msg.duration = 32964U;
    msg.speed = 0.424889672298;
    msg.speed_units = 206U;
    msg.x = 0.592682190396;
    msg.y = 0.729576365658;
    msg.z = 0.0828787884407;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.00882049398673);
    msg.setSource(7138U);
    msg.setSourceEntity(14U);
    msg.setDestination(753U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.410605318139;
    msg.lon = 0.300520545986;
    msg.speed = 0.510410440743;
    msg.speed_units = 84U;
    msg.duration = 57769U;
    msg.sys_a = 28497U;
    msg.sys_b = 2690U;
    msg.move_threshold = 0.85683865145;

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
    msg.setTimeStamp(0.0685838318285);
    msg.setSource(55020U);
    msg.setSourceEntity(28U);
    msg.setDestination(59734U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.911472387053;
    msg.lon = 0.644383631639;
    msg.speed = 0.12974372658;
    msg.speed_units = 79U;
    msg.duration = 24455U;
    msg.sys_a = 11336U;
    msg.sys_b = 17658U;
    msg.move_threshold = 0.517816767875;

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
    msg.setTimeStamp(0.876015788976);
    msg.setSource(40093U);
    msg.setSourceEntity(118U);
    msg.setDestination(23811U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.701689427887;
    msg.lon = 0.32107799854;
    msg.speed = 0.348966383515;
    msg.speed_units = 175U;
    msg.duration = 19626U;
    msg.sys_a = 3308U;
    msg.sys_b = 41451U;
    msg.move_threshold = 0.138859708132;

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
    msg.setTimeStamp(0.17129001489);
    msg.setSource(41561U);
    msg.setSourceEntity(11U);
    msg.setDestination(62469U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.816279291458;
    msg.lon = 0.822767015498;
    msg.z = 0.159856236187;
    msg.z_units = 199U;
    msg.speed = 0.942353227221;
    msg.speed_units = 98U;
    msg.custom.assign("CXVEILIHMBKFXNPKTYRQOLWUUVNQCAQHODBQZPTBNQDKTGPZXQLHQMVCJEDCDNSYTECYFKDXAVMRXRWMYNLYHKLWRGZJAUFZHHCSBPMIOUPQRCJOKYSEBVYFESBJRDEDSOZMTIFAOVRQAZDGGNPGGXFZXSKBMXFUPVNVAZFIWGZLWOZSFNWNHUTLRXJWIJILTEADSLPMDJJBBKAITIMCNKGUCWHWBURSXFSOWGCURJLOHEV");

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
    msg.setTimeStamp(0.935728776031);
    msg.setSource(1457U);
    msg.setSourceEntity(240U);
    msg.setDestination(24672U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.156397492707;
    msg.lon = 0.83601500351;
    msg.z = 0.878541253741;
    msg.z_units = 172U;
    msg.speed = 0.968401004538;
    msg.speed_units = 198U;
    msg.custom.assign("QISXLRNACCEOBMFJVWDHYZIGGSEPULIBGBPXFSDBTHNETZMFNGRCZNCOAJZMHAPJBDGYVFXIFQOWQYWWYRGEHESSGKLYQUUWCHRNIHUJUJNIFLDWAOPIUEDKHZRVXPMSUAYZYXGGIZJHSWRTSBFBYT");

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
    msg.setTimeStamp(0.43155907207);
    msg.setSource(37233U);
    msg.setSourceEntity(73U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.26126663959;
    msg.lon = 0.910085264795;
    msg.z = 0.537675371741;
    msg.z_units = 114U;
    msg.speed = 0.348180288655;
    msg.speed_units = 162U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.774783041216;
    tmp_msg_0.lon = 0.473246371519;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ERTHKGUVFQDADWIVWBYDKGYXJPNZVEZBYOQFBZIDLCWHDIKLSUUOWFHEFCEPJSOWIBHRPTHELCJARAMPPSGZKAXMBSXBDBQAVBHGTZTQVSKJZFKVRINSFUTGKIBDCNLKLCWQEXMPRNQYUOMGAYUUXWZYMTSNNXDLGXCJRGJWUPIOLLZUEKQZJQRMTOMSXFNOGKCLYAVNVMSNJXFQQHFGYE");

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
    msg.setTimeStamp(0.198397022743);
    msg.setSource(38146U);
    msg.setSourceEntity(111U);
    msg.setDestination(50575U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.259342584434;
    msg.lon = 0.327474394141;

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
    msg.setTimeStamp(0.241614912865);
    msg.setSource(16647U);
    msg.setSourceEntity(184U);
    msg.setDestination(7849U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.9371352468;
    msg.lon = 0.614952456324;

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
    msg.setTimeStamp(0.164163209481);
    msg.setSource(23151U);
    msg.setSourceEntity(230U);
    msg.setDestination(35948U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.615375483568;
    msg.lon = 0.448870087541;

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
    msg.setTimeStamp(0.77585545627);
    msg.setSource(35357U);
    msg.setSourceEntity(26U);
    msg.setDestination(47002U);
    msg.setDestinationEntity(142U);
    msg.timeout = 44633U;
    msg.lat = 0.283638029916;
    msg.lon = 0.560822666601;
    msg.z = 0.463484143796;
    msg.z_units = 200U;
    msg.pitch = 0.930689642344;
    msg.amplitude = 0.786999395096;
    msg.duration = 19194U;
    msg.speed = 0.530430741253;
    msg.speed_units = 214U;
    msg.radius = 0.95104598973;
    msg.direction = 46U;
    msg.custom.assign("IDKSWSYEPJHUTTXNMOAOYLGQWBRCXPYFXRVJEGZZLZLKKEFTVNCKPJRWVDIIRJYTNQCRMNOHWROMHWCLYVPNBQKUVAKEOXEZXIPVHWAZNZAJRP");

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
    msg.setTimeStamp(0.538710261744);
    msg.setSource(33448U);
    msg.setSourceEntity(170U);
    msg.setDestination(52278U);
    msg.setDestinationEntity(22U);
    msg.timeout = 11086U;
    msg.lat = 0.378917228196;
    msg.lon = 0.419287454666;
    msg.z = 0.373472184774;
    msg.z_units = 58U;
    msg.pitch = 0.585971159263;
    msg.amplitude = 0.996921392558;
    msg.duration = 32702U;
    msg.speed = 0.0189342624301;
    msg.speed_units = 136U;
    msg.radius = 0.965438346905;
    msg.direction = 93U;
    msg.custom.assign("FNMDVVWEYIRAAZMVPIDEWLNSOLKILPCDYXPWIOVRIIWGPLXTOAPSNSWHNZIKNBUJXPABHDOKZHYHSTUAEOJVTICAXBQHSJ");

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
    msg.setTimeStamp(0.143299782384);
    msg.setSource(53978U);
    msg.setSourceEntity(5U);
    msg.setDestination(40026U);
    msg.setDestinationEntity(26U);
    msg.timeout = 22996U;
    msg.lat = 0.276729240561;
    msg.lon = 0.743585955375;
    msg.z = 0.47933877653;
    msg.z_units = 254U;
    msg.pitch = 0.796611086528;
    msg.amplitude = 0.992717326234;
    msg.duration = 14592U;
    msg.speed = 0.280591092285;
    msg.speed_units = 147U;
    msg.radius = 0.552269026989;
    msg.direction = 20U;
    msg.custom.assign("TTEPPGTZWLILJAXINPB");

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
    msg.setTimeStamp(0.804217309889);
    msg.setSource(51031U);
    msg.setSourceEntity(170U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("IEEYCYOASTBXGWAKRVHUWQQRUMUBKTXQDKYNSOJKWMCYBUOGYXUCNLNQNVJAWLPOJAMARKKRWDOZGYHCOCJJBXE");
    msg.reference_frame = 80U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26207U;
    tmp_msg_0.off_x = 0.507896770169;
    tmp_msg_0.off_y = 0.473352543991;
    tmp_msg_0.off_z = 0.821099072998;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OCKOPFIJUVMCUMZDOKTAOWVUVKUECWLMECUQOPSAILAAGJIPEDRBPMKGGBWLZTWJMSAZHHBRRDQSCNCWBVBSEFBFYJOXXNICLRFYZTTVGLXFBZUIEYSH");

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
    msg.setTimeStamp(0.188038565957);
    msg.setSource(34092U);
    msg.setSourceEntity(36U);
    msg.setDestination(5192U);
    msg.setDestinationEntity(21U);
    msg.formation_name.assign("INPBGLLMRNMHYWBDXTUAYUZPOGSHJKZOFNEAHUWFTJYGDTIPJZJVESZDFLRTSPYGXHQIYOAAIFPTHWTZYVRKSTQXIWTSQVZAQXUKENXMFHJOAGCPMDARFCRLWWEKRCLWSHKCKXIUSXNUXJYCIYLYVBNJRUEGJBKSBMPZNRPEVCZDFQUMVEOSK");
    msg.reference_frame = 28U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23297U;
    tmp_msg_0.off_x = 0.841813212864;
    tmp_msg_0.off_y = 0.906971605957;
    tmp_msg_0.off_z = 0.116843623629;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VPDPTZCUBYJQBWPCAYZQXHESPXIYEFSGLGRSUVXRNASJTAZRKIEVUDALOHKGDIIYWDCMLBTBSECWCLJEFZSATSDRWCNEQFDZVVEWQCTQKLGFPLMDKMRAZVHSOUZXJDIYMUXIJLGNBWIBQYLOMHEJKHQKIIYZRMOXMHOTKMRLOGUQUEHZJWOXCHTFSCWLBYPJANJYAXWNPZFBNCFYNDFTPGRHFWBDRNQITM");

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
    msg.setTimeStamp(0.240667581773);
    msg.setSource(19209U);
    msg.setSourceEntity(87U);
    msg.setDestination(19590U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("QGIOYTAYOQWPIHDBTAMCJHQNMOBMCVPKDLTWVNWCMTPTWWLCZRRXJZGFXPTZWDSRBUOTZQHGMJHECSXTOKRSAEABYPAZLJVGCEFOVYYRYIIUSJKQSLPHGDUMZTPNYEGIFHSFISPEFDNRBDZVVFHENBNLUFBQSNOKBABYHZWFMELOWMGIUWGDKICNK");
    msg.reference_frame = 80U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1673U;
    tmp_msg_0.off_x = 0.648504123358;
    tmp_msg_0.off_y = 0.0674050008747;
    tmp_msg_0.off_z = 0.826241816034;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IFLOXWBGXUTIDFJJHPWXZCWASGOVEHGJWNOJMQGLOYBUZWMUCILWVGEZCWGHHKMVIGNKPJUFTCKTPGQVWNVRIXIGRZQYBSDIUMRLMSHDXWDRIQJFMZELKADQKQVXEMVRTLBQOXQKZLAUZUFZVRDDAXCDEAECCRYLKSK");

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
    msg.setTimeStamp(0.804796941192);
    msg.setSource(53017U);
    msg.setSourceEntity(201U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(210U);
    msg.group_name.assign("HAGNWEVNXLXQCBRKRZVYFGRSHDNVICITCOZTPORDWLGYPCQFGGUJXATHVPUAGNJWKBFBGIBBMFHHETHPOBKUIAWAJBFCSAZXONXTGSSHKYUDYTMKJJWJEPVNYORLFSZPUEAEMHAHYTPQC");
    msg.formation_name.assign("VFUXPHENCYIYOQFBUFSUGQPWKVFZLQNSHGRRAUESTEQR");
    msg.plan_id.assign("KTEYGVNQVCRAHCLJSWUNKCWSTZGIOZNNOLESAZGRLQCMTCFNZTOMVWZHJMKXWKTUCZEHRZQZOQJFUTLYXARIJHIMMRZGAYIPXGQXODWSBXTSUUEZLOLHDHPWHIUUXIMIVLESFIEPXAERSFREEDWVXGPYSOGDJA");
    msg.description.assign("LVQCMGAPCNVCPEZGEIJCXFPQHIDWAQ");
    msg.leader_speed = 0.0897483610135;
    msg.leader_bank_lim = 0.246643555731;
    msg.pos_sim_err_lim = 0.980088474071;
    msg.pos_sim_err_wrn = 0.417558498022;
    msg.pos_sim_err_timeout = 28135U;
    msg.converg_max = 0.208489530155;
    msg.converg_timeout = 30133U;
    msg.comms_timeout = 7909U;
    msg.turb_lim = 0.880478202446;
    msg.custom.assign("QIZYDTJLHGTDSNKPECJQHPTWJGSQIDNTHXGZHWBCBELUFWYWRMJNXRBVSSSVCBYANADVXLGRJMIPBVCJFUXFLMONXFZUUFEGLSJRLHNDRHIAYVOTPEMRILAAFWLQZESAPABYQRGKCUOMGACTKQOJJPYFVRQXKAMIOPUDEQHDSKCMUUZGTUYEPEB");

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
    msg.setTimeStamp(0.9705017491);
    msg.setSource(2066U);
    msg.setSourceEntity(229U);
    msg.setDestination(18342U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("AKSYXWFSYWHBVJYAYKSHCMUTXENHHIBRBGYJOGYMQDAEIHVLWBTRLBVMBTTCRSOUCNOMPNHCLCFEZIZZDLCMKZCIEKWGPNXQHEFLJNLSCRWIDVDXDIZMVJUNLVWNYWRINPXZHSPGTBBLKPWRYXKCTDHRIOBJHZJVNJJYQSZEVUCQDJRAZAFAWAWPSXUTRIOQJAKGBGSAUONFUOEDMZUQKFITAUKUSOMXXEFLPPFDVQPQGMFTDVQPGYOEEFLGQG");
    msg.formation_name.assign("WKGSIXMKJUYPBNWBSUNVLPDTJMBWWSSQNKZLYMWOIFUUKHSQXCELKAHXVVJQYQGWJLOUKZSDYXKUIVXNIBNOFPGLHDMQCZKMLLFUCCDNNSUGDLAJZBLLGIEIPNROVCXDQOPGWAZMCEFMBPTUAKYATOBNGOTDWYZFHRIDDHXROERPRWGEQZJCWYTEZIBOTQFBNFAVF");
    msg.plan_id.assign("VDUJRGRPUTHYNTIOWGCUIWROJDOKQVQCUISFBZHTYOOKHJVMHKBHGFIQSVPQLEDPYAWXPSTQVOOSZCJFZSWHHJKELIBISYYTAPZOCUDNQGJEMPXACJXJYRACXINFWBPZBNIGUUFAVREKUJMJKHDFDLATMLLACDSRVXVBZYOZNEAQXRKXBRLG");
    msg.description.assign("KMCANQQZRLRSIXQCEKVWXGESTAFJJSOYBIFNIKNHMHZVOBTXWSUYBUCBEDULTN");
    msg.leader_speed = 0.656710008593;
    msg.leader_bank_lim = 0.254386728582;
    msg.pos_sim_err_lim = 0.470497497951;
    msg.pos_sim_err_wrn = 0.286170323099;
    msg.pos_sim_err_timeout = 6960U;
    msg.converg_max = 0.305774036808;
    msg.converg_timeout = 23537U;
    msg.comms_timeout = 24113U;
    msg.turb_lim = 0.363198986859;
    msg.custom.assign("TFGPSHUTINMUFJZWJPLCLHKLOIYQBHMXUOEVHAVFGWOKEHFHMEDXYWTNINEPBLEKJRIWDGGLWSSZFRCMNLDANNRXERZQGAOQXSDPCCCSIDOOOTGZDHAYYGWJPMKSZRAMGTRRAKYQEYVABNVLBDLAZVZBQFZCXJVYLOBBDTYJNDAGUBWTNDWSMQVPUSXQUHUJ");

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
    msg.setTimeStamp(0.626155599755);
    msg.setSource(60647U);
    msg.setSourceEntity(146U);
    msg.setDestination(43581U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("OZHTYDRTKDQYKSEZCEKUAWKZABHFRECSQMDYRRGBXZCCHDJIFPZPBAFJTJWFUIXHKKSQNVGMPIRVOUSTWEPQGVYLZXQBUALLINTSWVBMVHPNXEMPGLFMFWQSLCUBTOGXYQDPZBOQWUBMHWIOCEUSL");
    msg.formation_name.assign("ONDDGZRBGAIDNYTQKDFOEGQXNUJXKNEVZCVASTWSOUWJRMVWSNPSLOEKTVEULRBEZHYJULQWOTVASYOHRAQEYUYZMQFIBWLHARHBQRSUOFPIGFCFQFPYGLJMBPVZYMOTTRULYKVCSDSVFCJKLNZLOBGTWDWAISXAYJMZDNGVEBCCEMPPBZHVNTOEFZTC");
    msg.plan_id.assign("HACNLSHAZSKBN");
    msg.description.assign("JHBFLDLENJRPTVSFQMFULRCQSEDMJYXGIMXNZONOARFZPYRPMWWPTQUDEOKDPSAHUSTCEGUFPJXDTHEJAWUQYPWLGEGNLAKIPFXVKGPHWALVYWWQRRQOICOMBAZEUMWQSNIMHIMVAOBTYSSQCXQGEBRBWZVFYXI");
    msg.leader_speed = 0.6281959904;
    msg.leader_bank_lim = 0.194009704905;
    msg.pos_sim_err_lim = 0.724912001649;
    msg.pos_sim_err_wrn = 0.745066059761;
    msg.pos_sim_err_timeout = 15929U;
    msg.converg_max = 0.919363500573;
    msg.converg_timeout = 52031U;
    msg.comms_timeout = 53812U;
    msg.turb_lim = 0.43925658921;
    msg.custom.assign("ZKGEBZUNLFVAGVYYIBJIEZJACEMPIHVFYTRZMBOTVDDNWBQLEAOGKRLGFLCKPCTTFUDZRXUMZQCGSVWDWQYVQDNITYITHAUNCKTAYVRXRXUQAULXQQKYCWCPTWMFJFWFYMBMPIJPINHGBANOVMQFKBOJHBPNPATCIZIZKWHGNWFHPEXDXKOSEAZHQNUJ");

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
    msg.setTimeStamp(0.30996490197);
    msg.setSource(63950U);
    msg.setSourceEntity(252U);
    msg.setDestination(57594U);
    msg.setDestinationEntity(32U);
    msg.control_src = 45261U;
    msg.control_ent = 221U;
    msg.timeout = 0.637816019113;
    msg.loiter_radius = 0.0761223311564;
    msg.altitude_interval = 0.14082967512;

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
    msg.setTimeStamp(0.60221256513);
    msg.setSource(48542U);
    msg.setSourceEntity(136U);
    msg.setDestination(57374U);
    msg.setDestinationEntity(115U);
    msg.control_src = 32194U;
    msg.control_ent = 32U;
    msg.timeout = 0.015148360184;
    msg.loiter_radius = 0.38821735175;
    msg.altitude_interval = 0.131309173517;

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
    msg.setTimeStamp(0.820129831684);
    msg.setSource(35434U);
    msg.setSourceEntity(84U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(57U);
    msg.control_src = 32584U;
    msg.control_ent = 102U;
    msg.timeout = 0.978049307901;
    msg.loiter_radius = 0.439376299712;
    msg.altitude_interval = 0.877256395549;

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
    msg.setTimeStamp(0.570562406931);
    msg.setSource(27993U);
    msg.setSourceEntity(114U);
    msg.setDestination(11300U);
    msg.setDestinationEntity(139U);
    msg.flags = 123U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.911768881973;
    tmp_msg_0.speed_units = 111U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.646171321455;
    tmp_msg_1.z_units = 85U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.406638909196;
    msg.lon = 0.289436081529;
    msg.radius = 0.815895948679;

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
    msg.setTimeStamp(0.821313051403);
    msg.setSource(20209U);
    msg.setSourceEntity(182U);
    msg.setDestination(10925U);
    msg.setDestinationEntity(146U);
    msg.flags = 40U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.64901444419;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.477269640233;
    tmp_msg_1.z_units = 192U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.968820743617;
    msg.lon = 0.118566116896;
    msg.radius = 0.589911768019;

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
    msg.setTimeStamp(0.488253556014);
    msg.setSource(19828U);
    msg.setSourceEntity(239U);
    msg.setDestination(46911U);
    msg.setDestinationEntity(164U);
    msg.flags = 208U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.571338584547;
    tmp_msg_0.speed_units = 253U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.27265597632;
    tmp_msg_1.z_units = 7U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0604678557926;
    msg.lon = 0.230127852145;
    msg.radius = 0.655344319236;

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
    msg.setTimeStamp(0.987156624893);
    msg.setSource(179U);
    msg.setSourceEntity(99U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(196U);
    msg.control_src = 55523U;
    msg.control_ent = 204U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 252U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.666160634403;
    tmp_tmp_msg_0_0.speed_units = 204U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.453983275254;
    tmp_tmp_msg_0_1.z_units = 60U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0820935330705;
    tmp_msg_0.lon = 0.433675203035;
    tmp_msg_0.radius = 0.0110810050716;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 87U;

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
    msg.setTimeStamp(0.090321666132);
    msg.setSource(17238U);
    msg.setSourceEntity(174U);
    msg.setDestination(12431U);
    msg.setDestinationEntity(248U);
    msg.control_src = 49987U;
    msg.control_ent = 127U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 24U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.673976838889;
    tmp_tmp_msg_0_0.speed_units = 126U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.250256559473;
    tmp_tmp_msg_0_1.z_units = 196U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.348185046303;
    tmp_msg_0.lon = 0.0592603241049;
    tmp_msg_0.radius = 0.80221097725;
    msg.reference.set(tmp_msg_0);
    msg.state = 216U;
    msg.proximity = 30U;

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
    msg.setTimeStamp(0.92519744916);
    msg.setSource(15182U);
    msg.setSourceEntity(6U);
    msg.setDestination(13292U);
    msg.setDestinationEntity(59U);
    msg.control_src = 7789U;
    msg.control_ent = 119U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 88U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.912173355566;
    tmp_tmp_msg_0_0.speed_units = 94U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.330571612929;
    tmp_tmp_msg_0_1.z_units = 54U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.297469364635;
    tmp_msg_0.lon = 0.617286114418;
    tmp_msg_0.radius = 0.984361691159;
    msg.reference.set(tmp_msg_0);
    msg.state = 167U;
    msg.proximity = 186U;

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
    msg.setTimeStamp(0.520807418803);
    msg.setSource(7146U);
    msg.setSourceEntity(82U);
    msg.setDestination(63716U);
    msg.setDestinationEntity(132U);
    msg.ax_cmd = 0.244171403976;
    msg.ay_cmd = 0.121953467188;
    msg.az_cmd = 0.761407759362;
    msg.ax_des = 0.7974751066;
    msg.ay_des = 0.0701388028747;
    msg.az_des = 0.837363616957;
    msg.virt_err_x = 0.492335050034;
    msg.virt_err_y = 0.832941652813;
    msg.virt_err_z = 0.726449781728;
    msg.surf_fdbk_x = 0.530767770381;
    msg.surf_fdbk_y = 0.885324926493;
    msg.surf_fdbk_z = 0.632669474595;
    msg.surf_unkn_x = 0.202106815764;
    msg.surf_unkn_y = 0.160669108018;
    msg.surf_unkn_z = 0.816778359676;
    msg.ss_x = 0.768188313373;
    msg.ss_y = 0.294820389326;
    msg.ss_z = 0.271220059854;

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
    msg.setTimeStamp(0.108843280055);
    msg.setSource(25667U);
    msg.setSourceEntity(19U);
    msg.setDestination(61597U);
    msg.setDestinationEntity(6U);
    msg.ax_cmd = 0.716471730235;
    msg.ay_cmd = 0.024328788703;
    msg.az_cmd = 0.267077207542;
    msg.ax_des = 0.296442418215;
    msg.ay_des = 0.491148475808;
    msg.az_des = 0.708959346594;
    msg.virt_err_x = 0.0263513982517;
    msg.virt_err_y = 0.0176478878715;
    msg.virt_err_z = 0.299355422997;
    msg.surf_fdbk_x = 0.411807361287;
    msg.surf_fdbk_y = 0.323209930431;
    msg.surf_fdbk_z = 0.45526261905;
    msg.surf_unkn_x = 0.972220505046;
    msg.surf_unkn_y = 0.896289629428;
    msg.surf_unkn_z = 0.740936784466;
    msg.ss_x = 0.947684962047;
    msg.ss_y = 0.396267492995;
    msg.ss_z = 0.532969780798;

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
    msg.setTimeStamp(0.0630591118374);
    msg.setSource(37626U);
    msg.setSourceEntity(233U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(187U);
    msg.ax_cmd = 0.69743667551;
    msg.ay_cmd = 0.550244430926;
    msg.az_cmd = 0.598415561929;
    msg.ax_des = 0.758775189289;
    msg.ay_des = 0.103091988433;
    msg.az_des = 0.308253232345;
    msg.virt_err_x = 0.439724996092;
    msg.virt_err_y = 0.58844060496;
    msg.virt_err_z = 0.611685765816;
    msg.surf_fdbk_x = 0.553519880146;
    msg.surf_fdbk_y = 0.551421681101;
    msg.surf_fdbk_z = 0.870137202653;
    msg.surf_unkn_x = 0.351529099395;
    msg.surf_unkn_y = 0.107836161839;
    msg.surf_unkn_z = 0.302990607653;
    msg.ss_x = 0.887379694351;
    msg.ss_y = 0.475620013969;
    msg.ss_z = 0.199047228717;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MBAHIJJSZXNOINNSSDFATMVAUSPVZFNPACPYXJGGLYORGAKCRVWUQBKDXOOFGYHHRRUJKQRVZILKPEHIBMTLIBVKUWHBDXAPIHGMEULPAQCJNKQQSFJVYWP");
    tmp_msg_0.dist = 0.860539343833;
    tmp_msg_0.err = 0.474677854785;
    tmp_msg_0.ctrl_imp = 0.371987842885;
    tmp_msg_0.rel_dir_x = 0.095409576786;
    tmp_msg_0.rel_dir_y = 0.218926944353;
    tmp_msg_0.rel_dir_z = 0.682689875053;
    tmp_msg_0.err_x = 0.0982726860152;
    tmp_msg_0.err_y = 0.833083663174;
    tmp_msg_0.err_z = 0.398425430119;
    tmp_msg_0.rf_err_x = 0.844036166183;
    tmp_msg_0.rf_err_y = 0.335355968091;
    tmp_msg_0.rf_err_z = 0.407629358463;
    tmp_msg_0.rf_err_vx = 0.258718736489;
    tmp_msg_0.rf_err_vy = 0.765191359579;
    tmp_msg_0.rf_err_vz = 0.77514701193;
    tmp_msg_0.ss_x = 0.315395867163;
    tmp_msg_0.ss_y = 0.360664685907;
    tmp_msg_0.ss_z = 0.201010230037;
    tmp_msg_0.virt_err_x = 0.942713337451;
    tmp_msg_0.virt_err_y = 0.879772678491;
    tmp_msg_0.virt_err_z = 0.306147218944;
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
    msg.setTimeStamp(0.780929394447);
    msg.setSource(16221U);
    msg.setSourceEntity(24U);
    msg.setDestination(25301U);
    msg.setDestinationEntity(197U);
    msg.s_id.assign("DTYPHLBUQKPCRLSTBNGUCIEKPOPEBHBSQAJFAVNQIRGTSUMZNXJXKWIZTJWYSHYGISJHHFSXTGBTHOFWVOLAWJNFLPNEVHJLEPBMQGQZTQYXDVKYOBHDSFEMRIIRFFMFZPROCTMVVVXKYIYNBYAZ");
    msg.dist = 0.00975481446332;
    msg.err = 0.488472948433;
    msg.ctrl_imp = 0.0729223267604;
    msg.rel_dir_x = 0.829318653463;
    msg.rel_dir_y = 0.32435615445;
    msg.rel_dir_z = 0.24022690171;
    msg.err_x = 0.658643519702;
    msg.err_y = 0.079656878834;
    msg.err_z = 0.99747877762;
    msg.rf_err_x = 0.530004698051;
    msg.rf_err_y = 0.46830580142;
    msg.rf_err_z = 0.536014197254;
    msg.rf_err_vx = 0.761762976235;
    msg.rf_err_vy = 0.28094258464;
    msg.rf_err_vz = 0.49816387971;
    msg.ss_x = 0.249353667499;
    msg.ss_y = 0.999615582237;
    msg.ss_z = 0.68737612586;
    msg.virt_err_x = 0.775701531505;
    msg.virt_err_y = 0.569723593738;
    msg.virt_err_z = 0.855377495192;

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
    msg.setTimeStamp(0.449378501866);
    msg.setSource(16206U);
    msg.setSourceEntity(218U);
    msg.setDestination(34209U);
    msg.setDestinationEntity(193U);
    msg.s_id.assign("JRABFSBJLGWKNKCMGYAPDNMCBFP");
    msg.dist = 0.347369471164;
    msg.err = 0.269224503191;
    msg.ctrl_imp = 0.9899395895;
    msg.rel_dir_x = 0.317683709584;
    msg.rel_dir_y = 0.0665719243733;
    msg.rel_dir_z = 0.033394587029;
    msg.err_x = 0.92817483835;
    msg.err_y = 0.147481936968;
    msg.err_z = 0.3056936743;
    msg.rf_err_x = 0.89902274906;
    msg.rf_err_y = 0.958958870486;
    msg.rf_err_z = 0.899583968468;
    msg.rf_err_vx = 0.532209231561;
    msg.rf_err_vy = 0.0810268826827;
    msg.rf_err_vz = 0.100753688041;
    msg.ss_x = 0.744307920385;
    msg.ss_y = 0.385280744462;
    msg.ss_z = 0.183256533162;
    msg.virt_err_x = 0.940881518041;
    msg.virt_err_y = 0.536396451566;
    msg.virt_err_z = 0.952795505459;

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
    msg.setTimeStamp(0.658052760214);
    msg.setSource(2425U);
    msg.setSourceEntity(246U);
    msg.setDestination(27289U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("XHJYHIDUXNFOOBOOFDKHTFLEGZGQIAAPLQBJZSTEVWFQCHFEJVBWTTWKGFFNKGOZXNHGIH");
    msg.dist = 0.816900427165;
    msg.err = 0.149483217341;
    msg.ctrl_imp = 0.589422390129;
    msg.rel_dir_x = 0.901281031304;
    msg.rel_dir_y = 0.577223504226;
    msg.rel_dir_z = 0.275815310076;
    msg.err_x = 0.416101680939;
    msg.err_y = 0.399967776364;
    msg.err_z = 0.0706982277815;
    msg.rf_err_x = 0.703618703126;
    msg.rf_err_y = 0.714174001975;
    msg.rf_err_z = 0.828050236379;
    msg.rf_err_vx = 0.894867067947;
    msg.rf_err_vy = 0.331176293031;
    msg.rf_err_vz = 0.462121595938;
    msg.ss_x = 0.672455188095;
    msg.ss_y = 0.30343399207;
    msg.ss_z = 0.0652767338351;
    msg.virt_err_x = 0.151724985814;
    msg.virt_err_y = 0.836555324261;
    msg.virt_err_z = 0.0262038024952;

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
    msg.setTimeStamp(0.321097613479);
    msg.setSource(47704U);
    msg.setSourceEntity(243U);
    msg.setDestination(29671U);
    msg.setDestinationEntity(212U);
    msg.timeout = 56732U;
    msg.rpm = 0.748809081052;
    msg.direction = 156U;
    msg.custom.assign("AZUINGOOUMGSFMKLMHCUPBS");

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
    msg.setTimeStamp(0.910297654117);
    msg.setSource(21573U);
    msg.setSourceEntity(69U);
    msg.setDestination(58415U);
    msg.setDestinationEntity(138U);
    msg.timeout = 39966U;
    msg.rpm = 0.330539453249;
    msg.direction = 152U;
    msg.custom.assign("JRSECGESULMNYORWVUJIDRYLIDUFJFPTNQTGEXZCAZWAEZGNQZRAXYYPKUYERVGIOGBZZPFRPSQHBQFIKSGMKKLXIBCXYOXLVXXYCET");

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
    msg.setTimeStamp(0.252650976361);
    msg.setSource(24527U);
    msg.setSourceEntity(180U);
    msg.setDestination(19455U);
    msg.setDestinationEntity(101U);
    msg.timeout = 34473U;
    msg.rpm = 0.502425196835;
    msg.direction = 179U;
    msg.custom.assign("VSKKVMNESECBDLJXAAMKIDJTSSJCKRNFQCQBYRCYGHOBELUIYMAHHWYXWHWTQGNAKYGXKPVVTHZEERSGECIVQXVQVVFDUXEUMMRUJCQNNFZPEDQMFGBOTGJIDYXFFLLGOWWMIXLMLOCORLIWZDJ");

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
    msg.setTimeStamp(0.660362130337);
    msg.setSource(31139U);
    msg.setSourceEntity(136U);
    msg.setDestination(34583U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("TEPGFEGOWFCJCRFPTABWBJVZHJBVIHADPMUXVLQTUNNJHICTSBMPEKYHZLNAJMOZQNVTAVHIYWVAYZDKEOUZDYPIXQLTHBIULBLSIGDLHPZRDSUUHSOGTPUMMRANHEVJLWGROBFXBNMRQJUOEJWLAMCKFPKOSDELKAXDQTPOYWNCCOEJZVQTKEQYFSVK");
    msg.type = 143U;
    msg.op = 96U;
    msg.group_name.assign("BOURCLOCJGLSRPCHVZOBQEUIJHPXJSNHZMMWMAKKNJOEWPSDQPFAQKFOYKECRPKUZBOVTRFIEFFBXNJXNZHBCORFDLXULBYNGIEUVSRKGSRLOTZICJWRILEATMMXSFMYQ");
    msg.plan_id.assign("EHPACWIASBVPIIDHEVTFAMGDJHRCOMNQJBNAQXOOWVXKORFSJJQNCCLUXTQGPDL");
    msg.description.assign("RXSYQMQPZAVSCBAQGNYFVJRCJSEBVFGWJOAVCWTNRJFWLCIFNKATGQDPHTSEAIJFFQMHMIZZLNKFMYURCNPLIXXYVJZBHQOKSOOUVOAMZEURAKNFEJNPDIQOLBDBHTGTWFZAPSIGXYGEYUKMULHYDWDYBXZDGLCERJBSPCXSOTKDRNBNKZVULXZPWWIGSGOPJCYUVTABUXKK");
    msg.reference_frame = 170U;
    msg.leader_bank_lim = 0.0824450481823;
    msg.leader_speed_min = 0.872473327152;
    msg.leader_speed_max = 0.235345897591;
    msg.leader_alt_min = 0.529848644091;
    msg.leader_alt_max = 0.687620760201;
    msg.pos_sim_err_lim = 0.423233060399;
    msg.pos_sim_err_wrn = 0.498286105653;
    msg.pos_sim_err_timeout = 52669U;
    msg.converg_max = 0.1421392239;
    msg.converg_timeout = 32515U;
    msg.comms_timeout = 29640U;
    msg.turb_lim = 0.237300699971;
    msg.custom.assign("ROBUQBNDIZUPPTWMKUYZTFBINWPXEMAVELBRBNYJQXIWGWGLYNFKDVAODIIJCLWZTEVHQQUTHWYCBYXZEKRYBHCXYCHFOTMUPKQFRVXJDSOFOVLYSIFHJGMSYZTHXNXLAEXMLJIHURRRRYEFJQSDRJUOBLE");

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
    msg.setTimeStamp(0.95218572713);
    msg.setSource(56285U);
    msg.setSourceEntity(24U);
    msg.setDestination(31343U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("BFKHNKBUBQWPDVMMKLNFYHMEREMAVGWRGTYREWCSXPZLIQBRYXQGSTAJCPAFWCEZHTOTMELLCBIKVSHJNRZCFAZXFPTVNSUGWVYS");
    msg.type = 221U;
    msg.op = 15U;
    msg.group_name.assign("VWKESHNPCQKDJCHJWOEKIAGUVZHNQPGISYSXABTOQVTNZJLLASCPLZTEFSRGZDWWLNNUGFJTKCAEKPDLYMTMGRUDHFBDXUXIVEEGCAVFOSZBDEBJCYLXPIIYODWMYPBNRRDYEWQSHITBHYHVVLTJDXZYXFGVGUQQIWMCNCSVLAMRKUQ");
    msg.plan_id.assign("PFUXRMVYOMLZQSDQTCXLGYYPSAHNPTQIXFJEQVEFRAKCEKZDEUPFWKDTAAYOKBGPUQUMBAJRZ");
    msg.description.assign("BDWURJLIVDKIMNSLOJSUMMINHTZNYPRWBMPZKGYXKIATUGVPZVXFEJRZBYZEGPDQFTESKFSQNQQULLOVKWXUJPNWMAQCHQNGDLEJEZQMFBJNWHOLENXVBKYFRORHTKAHBTSBJREZYCCIKSGYADMLEBCW");
    msg.reference_frame = 150U;
    msg.leader_bank_lim = 0.958894622442;
    msg.leader_speed_min = 0.471199073809;
    msg.leader_speed_max = 0.585943291576;
    msg.leader_alt_min = 0.899696173694;
    msg.leader_alt_max = 0.281325954959;
    msg.pos_sim_err_lim = 0.5483807033;
    msg.pos_sim_err_wrn = 0.649240835175;
    msg.pos_sim_err_timeout = 16085U;
    msg.converg_max = 0.734731510353;
    msg.converg_timeout = 60033U;
    msg.comms_timeout = 43636U;
    msg.turb_lim = 0.429084063938;
    msg.custom.assign("NLRPNEURWGQLGGNEVZZPTFWVVIPOXZKKHMSRXUUAZCOMITURFBVYZCKSWBSBPECDJTAQRIQCPXRLBSMXSPAWEOPGLVJJWLLJXNWNUYTQZTPMMX");

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
    msg.setTimeStamp(0.756506184167);
    msg.setSource(43131U);
    msg.setSourceEntity(11U);
    msg.setDestination(51507U);
    msg.setDestinationEntity(211U);
    msg.formation_name.assign("ZMUFYEYQMBMLNNUXTXTHNFKVBTFALIHOWOKVOSUKHAGWBJKBPZFJCPDBRFVG");
    msg.type = 173U;
    msg.op = 123U;
    msg.group_name.assign("RJLQAKHANWJLBXTLVZCNIDMHPOULNFNXOMEQRELUPSQOKOPGKTTZWIRWIFBVDNYVDECETBCRULUGFYHTQKNJVNFRAIBRJSFYYPXMCZRFSJBFXLBCIGDSCSDNAPUBDIJ");
    msg.plan_id.assign("FNRNOIXJCMSBAELPBGRBGXQWKMKVEHERFNKXWMOCSZOPQADDJQWLPMYGQYFMI");
    msg.description.assign("MTWCGBNWUOEHHTJIVKTAZFPRWSOPZKYOEDTYHXLBOESBPVFPGDINNHWVXJTUWDEYGCTYRAIKZSGJMUKQ");
    msg.reference_frame = 37U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22149U;
    tmp_msg_0.off_x = 0.846465324118;
    tmp_msg_0.off_y = 0.843564967041;
    tmp_msg_0.off_z = 0.00567050612228;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.529240168676;
    msg.leader_speed_min = 0.691343591292;
    msg.leader_speed_max = 0.874774359046;
    msg.leader_alt_min = 0.767204835112;
    msg.leader_alt_max = 0.2078528031;
    msg.pos_sim_err_lim = 0.825163230541;
    msg.pos_sim_err_wrn = 0.299804005556;
    msg.pos_sim_err_timeout = 21404U;
    msg.converg_max = 0.883592244262;
    msg.converg_timeout = 31423U;
    msg.comms_timeout = 59633U;
    msg.turb_lim = 0.977890215134;
    msg.custom.assign("XIYMJMRFXHMWWRSVDAYELWZXNZGEDNQXHOELBGA");

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
    msg.setTimeStamp(0.675690011684);
    msg.setSource(9168U);
    msg.setSourceEntity(4U);
    msg.setDestination(20960U);
    msg.setDestinationEntity(135U);
    msg.timeout = 24546U;
    msg.lat = 0.978133990061;
    msg.lon = 0.707721625895;
    msg.z = 0.753520310704;
    msg.z_units = 207U;
    msg.speed = 0.136003190556;
    msg.speed_units = 145U;
    msg.custom.assign("WOLJEUYRTXPZSESYAWBVBRKVINLDZQPMIMQUXTLBF");

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
    msg.setTimeStamp(0.574426421233);
    msg.setSource(50378U);
    msg.setSourceEntity(7U);
    msg.setDestination(42835U);
    msg.setDestinationEntity(87U);
    msg.timeout = 2342U;
    msg.lat = 0.206178274092;
    msg.lon = 0.755893447516;
    msg.z = 0.449510114219;
    msg.z_units = 171U;
    msg.speed = 0.0332135653361;
    msg.speed_units = 187U;
    msg.custom.assign("ZKEOUKHZZYMARIAVFYTWGYXDHBAVSSRLLARTEAJEWHPBOGYDFBDOTSYDWKPIAAYSMIINZZEFRZGPDMSJHBBVOQQFGUFYNVCRFICJLZRDGUTCRCZKDEHCMONGCGUTGLDKJANTZNIXXTRVZUOVLMQJNWRWMHPSFLFXMPOBHOTBHEKKVJWIXQDQBVSSNMKBOLXWNQPMLWEITYJFUKYCGPJALSMEWAHYSQOICKUWXXUTPLVDHPXGFCQ");

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
    msg.setTimeStamp(0.525971746874);
    msg.setSource(59087U);
    msg.setSourceEntity(144U);
    msg.setDestination(55474U);
    msg.setDestinationEntity(167U);
    msg.timeout = 22747U;
    msg.lat = 0.15986358496;
    msg.lon = 0.950817210045;
    msg.z = 0.608313636473;
    msg.z_units = 198U;
    msg.speed = 0.0106284330391;
    msg.speed_units = 226U;
    msg.custom.assign("VKQUAYWNYZCGGTQBHQTXIYCBSIZVQGZBXUXXSLTPHMPYVXKEVOJHQURUPSMSNEOZOJCHTYNBCZSFGAMAZRJEIGJUWMRNWLMFKIDORDAARRTYNMPDAQIIEQNWFEVUOEHUPPXRLQVZOSITPKVKIYHEJCDWSJGXBKSKKFNLBOLKBHRLMLTMGGFPIYCHUJVCKLTMFEJWLXZFBGRWGFZNJOBNSPTQDDDDWXIDHQUHPCTZFCWW");

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
    msg.setTimeStamp(0.624913111389);
    msg.setSource(36168U);
    msg.setSourceEntity(44U);
    msg.setDestination(38589U);
    msg.setDestinationEntity(114U);
    msg.timeout = 32596U;
    msg.lat = 0.817174566872;
    msg.lon = 0.0402721803497;
    msg.z = 0.87767444543;
    msg.z_units = 94U;
    msg.speed = 0.0307137786043;
    msg.speed_units = 39U;
    msg.custom.assign("YBVBHHULKFUWXVGKGEALTTNRAYPSWYLNBIKJCUWTGSJLECOPMHATVTKZTAEDCMMGEZIWJBHNQQAORACRFNIFUJKSIFMBIQBVOCOLPZHZSVPUCRFXWSZRIGCBXCQTQWHJITMPOIQYXFPDFRXJYRQZSLZMYPBCOKDAGQJVEHMDPDRUELVGYUWDFAHMNIJKCSMEVDXDVFPLWFKTVHZNULXDHPZ");

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
    msg.setTimeStamp(0.648723636501);
    msg.setSource(51338U);
    msg.setSourceEntity(238U);
    msg.setDestination(60638U);
    msg.setDestinationEntity(253U);
    msg.timeout = 58058U;
    msg.lat = 0.645063237649;
    msg.lon = 0.198970000913;
    msg.z = 0.972044124715;
    msg.z_units = 21U;
    msg.speed = 0.962056680223;
    msg.speed_units = 124U;
    msg.custom.assign("CKKLOIWJHDKVIWVDLEIBMJAGVJZVZPQXITOOCIGCDPVVHRYMNNFDDDJUPKJHKBMOKNOUSETNRRGJMWTUWOKLVEBTXPBEWSKZSNIIQCHYRZXFNOYYHGATUBQIPPLXHRFMAAHLCQZEPMAUSHYSZNYLCAGFBASXFYXUJEEHZITSIRNLQXXPUWQARZRP");

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
    msg.setTimeStamp(0.865142355821);
    msg.setSource(52420U);
    msg.setSourceEntity(184U);
    msg.setDestination(27287U);
    msg.setDestinationEntity(216U);
    msg.timeout = 37726U;
    msg.lat = 0.708670009844;
    msg.lon = 0.770317715;
    msg.z = 0.880476831775;
    msg.z_units = 208U;
    msg.speed = 0.735361833775;
    msg.speed_units = 250U;
    msg.custom.assign("CIDRNTPPLHASISECNFPPMFDXPJWOQTCMXRHMZDNSQUJGTHYYUKCJYHKSWUTMWIOYZKXCIPKYUATJBYKIAURORGOTLQIZQMALLLBWAULOCCSDDZTZEQXPBIHBGFWYORSL");

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
    msg.setTimeStamp(0.688796016059);
    msg.setSource(24261U);
    msg.setSourceEntity(167U);
    msg.setDestination(47678U);
    msg.setDestinationEntity(207U);
    msg.arrival_time = 0.243821487925;
    msg.lat = 0.614259852373;
    msg.lon = 0.190479144286;
    msg.z = 0.168497530037;
    msg.z_units = 213U;
    msg.travel_z = 0.407576603178;
    msg.travel_z_units = 52U;
    msg.delayed = 127U;

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
    msg.setTimeStamp(0.43772343434);
    msg.setSource(42573U);
    msg.setSourceEntity(205U);
    msg.setDestination(27538U);
    msg.setDestinationEntity(242U);
    msg.arrival_time = 0.917440852015;
    msg.lat = 0.413638853215;
    msg.lon = 0.888746674976;
    msg.z = 0.846146262771;
    msg.z_units = 193U;
    msg.travel_z = 0.607739681417;
    msg.travel_z_units = 25U;
    msg.delayed = 236U;

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
    msg.setTimeStamp(0.267251682244);
    msg.setSource(60740U);
    msg.setSourceEntity(145U);
    msg.setDestination(15710U);
    msg.setDestinationEntity(158U);
    msg.arrival_time = 0.335507774372;
    msg.lat = 0.322552914776;
    msg.lon = 0.482702929748;
    msg.z = 0.595367944573;
    msg.z_units = 203U;
    msg.travel_z = 0.603751675951;
    msg.travel_z_units = 199U;
    msg.delayed = 57U;

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
    msg.setTimeStamp(0.480732374356);
    msg.setSource(31481U);
    msg.setSourceEntity(34U);
    msg.setDestination(56588U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.959205383811;
    msg.lon = 0.431798706449;
    msg.z = 0.969614633668;
    msg.z_units = 161U;
    msg.speed = 0.263573245975;
    msg.speed_units = 237U;
    msg.bearing = 0.544336854348;
    msg.cross_angle = 0.84858974571;
    msg.width = 0.752974081592;
    msg.length = 0.804185234328;
    msg.coff = 185U;
    msg.angaperture = 0.891625117315;
    msg.range = 25448U;
    msg.overlap = 248U;
    msg.flags = 17U;
    msg.custom.assign("LYSVDWZJFDKBBJMLGOVHFXFYGXPTBWXPCXNSLNJVDXNADORIGLZPETRCKFQOUIHAJFWNTQTZXZHKRZAWEGPOJSUMYVEHGBBBBCYRVRUWSUADWSNCRTSAHPIRQQHMJDVPSATBEKBVYLSIFNQVIEFMWFESDTVWIQEAQZINZKPLXHQQJCYRPCGCVLMTAKRXJBGUUMNOAIOYZTFMGO");

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
    msg.setTimeStamp(0.176864464208);
    msg.setSource(19061U);
    msg.setSourceEntity(142U);
    msg.setDestination(39436U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.124711266139;
    msg.lon = 0.963364909778;
    msg.z = 0.878869687759;
    msg.z_units = 197U;
    msg.speed = 0.778990130949;
    msg.speed_units = 105U;
    msg.bearing = 0.792389509622;
    msg.cross_angle = 0.568639129158;
    msg.width = 0.650249026788;
    msg.length = 0.113316171691;
    msg.coff = 158U;
    msg.angaperture = 0.113987388673;
    msg.range = 35670U;
    msg.overlap = 148U;
    msg.flags = 185U;
    msg.custom.assign("FKBMJUULBSOKJMYRAVWAYMQTKGJCDSIJWZAPPRIDBEJQBTSCCDGSLCGOSYXRIUNPZEBALVEITBHTQXGVGWEVOAOFYBGECCGJXPBUHGNRJYZNXYLEUZHDYAVOYUTODYLFAPWRPRLCQMWKOXNJAQBNTOULMG");

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
    msg.setTimeStamp(0.0980603680203);
    msg.setSource(56549U);
    msg.setSourceEntity(103U);
    msg.setDestination(35433U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.93964931113;
    msg.lon = 0.570088677563;
    msg.z = 0.0145334048947;
    msg.z_units = 21U;
    msg.speed = 0.871153033976;
    msg.speed_units = 202U;
    msg.bearing = 0.249660866971;
    msg.cross_angle = 0.827746451104;
    msg.width = 0.914483379654;
    msg.length = 0.18523325918;
    msg.coff = 132U;
    msg.angaperture = 0.917784073613;
    msg.range = 45515U;
    msg.overlap = 206U;
    msg.flags = 125U;
    msg.custom.assign("WWHXHPYHZRRWMYXAJNNBKTMZLDOQCHMZPJEJRZWTJLZHQCLCLTJXYHVKQYIGRRAAABLMLIGEIOVNBYXAUVNFUGONAETOYGCPYKPARAGOLDPPMQVBKAXSZBQKSXOPVDZXCQOKSQTKIELUZMWQWCVPFRTJSLNUXDFFSCEZKXCOTEFBIOBNVSXSOSIQMIJDZBEDT");

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
    msg.setTimeStamp(0.537005153383);
    msg.setSource(2497U);
    msg.setSourceEntity(137U);
    msg.setDestination(949U);
    msg.setDestinationEntity(99U);
    msg.timeout = 15487U;
    msg.lat = 0.35806957475;
    msg.lon = 0.645035469654;
    msg.z = 0.227314621958;
    msg.z_units = 96U;
    msg.speed = 0.91547199789;
    msg.speed_units = 194U;
    msg.syringe0 = 197U;
    msg.syringe1 = 107U;
    msg.syringe2 = 48U;
    msg.custom.assign("UODKOGVXGRTKEINTJMEAURCQPTFJFDBWINLGHXQVYOJYMZWWBBMOHARLXLEUHUTJBKKLIAIEVTGGSQCZYLDCWJAXBHRPJDOLSDMOYILNZMHSFLAXYUPMNJHQICNFPYUWAWNYPJVKORDBTQXAVUUZNACSWIHKWEDRTZV");

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
    msg.setTimeStamp(0.964387923743);
    msg.setSource(43838U);
    msg.setSourceEntity(103U);
    msg.setDestination(64459U);
    msg.setDestinationEntity(5U);
    msg.timeout = 38917U;
    msg.lat = 0.71469477679;
    msg.lon = 0.890265765203;
    msg.z = 0.926877092946;
    msg.z_units = 36U;
    msg.speed = 0.0965443638634;
    msg.speed_units = 59U;
    msg.syringe0 = 215U;
    msg.syringe1 = 157U;
    msg.syringe2 = 252U;
    msg.custom.assign("DDIHKLSLHCHZROMEWEEGGXMBVIQZLEZSQRODUSKYGUEFBUKIQAMLUHVLDKNXRVZFUTEXUJPREIJLYUWIFAIXIWCPIEOFNSXHHZWMTWINZOSNCKYCDZJSFLDVMAENJZDGCLCHYMMUAOMXPGNFTYACRNANIMPFBYYAVSXRAXYVBTGRCCYJWQPKSS");

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
    msg.setTimeStamp(0.433261960303);
    msg.setSource(49815U);
    msg.setSourceEntity(171U);
    msg.setDestination(46529U);
    msg.setDestinationEntity(224U);
    msg.timeout = 45333U;
    msg.lat = 0.468426534417;
    msg.lon = 0.547766305295;
    msg.z = 0.339822521286;
    msg.z_units = 218U;
    msg.speed = 0.0445871726941;
    msg.speed_units = 216U;
    msg.syringe0 = 52U;
    msg.syringe1 = 183U;
    msg.syringe2 = 163U;
    msg.custom.assign("QXGDVEMGOOLYRZPAIXHDHZMJXJUIHIBAHA");

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
    msg.setTimeStamp(0.284942751056);
    msg.setSource(12362U);
    msg.setSourceEntity(111U);
    msg.setDestination(50477U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.58077758505);
    msg.setSource(34190U);
    msg.setSourceEntity(34U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.899412675577);
    msg.setSource(27052U);
    msg.setSourceEntity(16U);
    msg.setDestination(52313U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.187800696593);
    msg.setSource(53833U);
    msg.setSourceEntity(178U);
    msg.setDestination(44110U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.622616508811;
    msg.lon = 0.627975736129;
    msg.z = 0.206827741882;
    msg.z_units = 163U;
    msg.speed = 0.551627555893;
    msg.speed_units = 136U;
    msg.takeoff_pitch = 0.546713785038;
    msg.custom.assign("PTCSFMZNLSWBCHVDIXVAOPSRPJYPILDSGKJXSVDOSJEIABSQYXURYGBQBPWJRBAALQKTGRTUUFRCKJEOOZQFVYSHNVZNQLVTAELQUHKIHECTMBTWPXVOBM");

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
    msg.setTimeStamp(0.736243885711);
    msg.setSource(18275U);
    msg.setSourceEntity(61U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.429740398961;
    msg.lon = 0.913257408733;
    msg.z = 0.0955679314429;
    msg.z_units = 191U;
    msg.speed = 0.286624754825;
    msg.speed_units = 39U;
    msg.takeoff_pitch = 0.846632395967;
    msg.custom.assign("YGFPTUIENELTTCHFFLXSALKBWVDHPHEFKMDINPXVQVMGWBUBSVLOIIPAGCMVIYYTZUOAYCKPIENDJDKDCNLZGHWDYGNORIOCJONSVTRBVBGHLJXTDABWPHBNQHEECRGCJFSPXUPCMFSZQUMSMUCLQXIZZKVAYOXRJVZQUTFDWAOBJKNGWQGQBNZPDAPIFNCOYYERWOMTJHFRQTLKLLYUIBEJOAKRVXXHSSRKEXHJMEKAWMJUGSTSMZWZZQWX");

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
    msg.setTimeStamp(0.356627507722);
    msg.setSource(13413U);
    msg.setSourceEntity(254U);
    msg.setDestination(62133U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.761479397412;
    msg.lon = 0.239247260062;
    msg.z = 0.675522301135;
    msg.z_units = 115U;
    msg.speed = 0.167131159017;
    msg.speed_units = 200U;
    msg.takeoff_pitch = 0.395344169456;
    msg.custom.assign("DNDOHPKEUGGUQVNVNLUIFYPNVYEMMWHZQMAIJCKCSUOJXLUJFMRWQBRKSEDAQMBORZHSVMZPXZDYTOTKKBSIYEXOXWJMLIYUTWBITGQUESMCUQXVJNLYXHEJXDFHBCKFBRLJFAIVNB");

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
    msg.setTimeStamp(0.333418845801);
    msg.setSource(21568U);
    msg.setSourceEntity(33U);
    msg.setDestination(60489U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.54244737964;
    msg.lon = 0.303460251625;
    msg.z = 0.295524456855;
    msg.z_units = 34U;
    msg.speed = 0.314876564041;
    msg.speed_units = 77U;
    msg.abort_z = 0.0375127809186;
    msg.bearing = 0.346654476609;
    msg.glide_slope = 174U;
    msg.glide_slope_alt = 0.0892543983019;
    msg.custom.assign("VIDWWYOQNJBPIOQMYDXZVHXYVNBUYDICAAFPVVSGTLPJATJPFDSMKNCCJROHNUVYWNRHQCWOEWIFZQQWSKGHZDPSFSTDOJDGHVXATFAIWGBOGBPSBXPGCSJWKTEHTMNMYKWAHCEQKVTTCHWTZIBYAXRNSMM");

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
    msg.setTimeStamp(0.0728213495817);
    msg.setSource(5246U);
    msg.setSourceEntity(115U);
    msg.setDestination(18822U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.681269421799;
    msg.lon = 0.0471722632672;
    msg.z = 0.838929661483;
    msg.z_units = 148U;
    msg.speed = 0.0143307319185;
    msg.speed_units = 127U;
    msg.abort_z = 0.239716489277;
    msg.bearing = 0.507134058717;
    msg.glide_slope = 226U;
    msg.glide_slope_alt = 0.137977066813;
    msg.custom.assign("IHFTXXOLTTUIFSYRMWRHWDEUTAYIPVJAAWZPZQAAGFAHLNITZMEJNUYDHCVRINZOMGGVDBHFVDACE");

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
    msg.setTimeStamp(0.0179501723698);
    msg.setSource(30008U);
    msg.setSourceEntity(46U);
    msg.setDestination(13889U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.47720556285;
    msg.lon = 0.736360664995;
    msg.z = 0.980890204598;
    msg.z_units = 52U;
    msg.speed = 0.801976297223;
    msg.speed_units = 73U;
    msg.abort_z = 0.957671362479;
    msg.bearing = 0.610251330579;
    msg.glide_slope = 188U;
    msg.glide_slope_alt = 0.493408121664;
    msg.custom.assign("LJALSDPYUBBSAHTZRHKOQECE");

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
    msg.setTimeStamp(0.831029218775);
    msg.setSource(39520U);
    msg.setSourceEntity(201U);
    msg.setDestination(56509U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.485498973074;
    msg.lon = 0.711757755271;
    msg.speed = 0.382737054783;
    msg.speed_units = 176U;
    msg.limits = 156U;
    msg.max_depth = 0.739801736405;
    msg.min_alt = 0.621077028081;
    msg.time_limit = 0.645783935102;
    msg.controller.assign("AQJVDFRZOBABMKMDRLGOPAKKXZUBGSMKCYEMFNLJAUKUYREIRUQZZHDCGSEPEMDDORIBMWSANUNDOQDWVGWGUNLFWQMQDKPYKXLWHAGGFHFQOOAQFMWHEXLRLPXIAXXVEVBBHRJOCNRYJEVOZCPNHH");
    msg.custom.assign("VNHIPBFUWRHEDOSNTMUAAUOGXWUHIJOPMHIGSMXEMXLWOVNNHGLRSAILFLRBPOMVOSJXDQJCAIGCKGZZAWWYJZPRHQEJFWKBUQFMBCXPBQOPFNQMYOWLUFWIVVKKDZOCSATTAUKLSFSIPVCEITPKBNQDNLLKYMNHHXCDKREPBZRZLAHI");

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
    msg.setTimeStamp(0.621768260785);
    msg.setSource(599U);
    msg.setSourceEntity(248U);
    msg.setDestination(43149U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.438644044017;
    msg.lon = 0.958190626527;
    msg.speed = 0.434623490933;
    msg.speed_units = 107U;
    msg.limits = 148U;
    msg.max_depth = 0.265530297489;
    msg.min_alt = 0.325462072273;
    msg.time_limit = 0.137397366827;
    msg.controller.assign("GKPFRPWCWDZNVIHGYEIEDGQDTBJIAEBMYAOHRIRUGXROAWFVZXSNLRHYZFHUDKFEFSMUMDELMHVCHPYKBQJKUYPGCWIRDONLVJGXIYTWACIXBTOMZGGDJKBUCVNUQEZPCFPJYSJCRXSBFBZIUGQN");
    msg.custom.assign("YXLXVAOSBJNAZBTKAIRJCZRLRQPXOHXHHWUBAKWOMLSCEGEYETPFJVEYUKSARHZQYTAGXVDLHBMQIYBZCUHGWZWXQNRZFVOXQPPLKOKQKDYMMFENKDBESPYFXWGCMGNAFVMYYHTRUDMINWNJVTOEHWJUGGUCETENZCHUZTVTLOVDFQDOARQNDNXUDIJFQXRFSDMZPKCLPBRTSCVGABHOVJCIMAUILSIOJISIZBKGLRWKEF");

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
    msg.setTimeStamp(0.826280908311);
    msg.setSource(61172U);
    msg.setSourceEntity(45U);
    msg.setDestination(54919U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.185650693968;
    msg.lon = 0.653813800443;
    msg.speed = 0.247357641708;
    msg.speed_units = 187U;
    msg.limits = 237U;
    msg.max_depth = 0.337820834277;
    msg.min_alt = 0.835745454813;
    msg.time_limit = 0.329664892772;
    msg.controller.assign("VBWBIFQHCNWAJVCQCSWFVMNNDHRLGCDJCLKTUMZSLFLWKRDEIPQBEHVMTOJFKZDAZCZYUAOHPBKGKGLYSVRJNUVHNIFHPYLIEZDZVWQVZAXAESUMPNYAKLZRXFQILWDGNTGQSIQRYFHEVQRDOWXAXJDQTUBRMBERISGXYCUAZPHCBDHITMOWWYTEJUGSPQFTKEBKFPCONLXOCPUB");
    msg.custom.assign("GLVTKDIGNOUUEVJJIDHYZLEIKQVWAGZSPCXIFRKSPSMOZYEZNGKUIHSTNHMPAMYMDMXGPBJMJRFMACF");

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
    msg.setTimeStamp(0.968844223164);
    msg.setSource(51891U);
    msg.setSourceEntity(120U);
    msg.setDestination(48U);
    msg.setDestinationEntity(60U);
    msg.target.assign("NLTTCXGKGFOPWOWNBQCIIMKEAYELDMOBCHKTXBTUASQAUIEEJUYFSNMBWUROVALPVWZXAKYVYGSWJTQQCAIYNNIPUMQJPSVTZQSXVDQTYIKOVDTVGZBDHRBJPHJOJT");
    msg.max_speed = 0.475904258725;
    msg.speed_units = 27U;
    msg.lat = 0.79595795981;
    msg.lon = 0.856338716294;
    msg.z = 0.912301445092;
    msg.z_units = 91U;
    msg.custom.assign("MGGMDSPGMRJGMLCYUCZWAXCTPPGTHOIALQFSPRBNCHEBRRNZHXHTWCUBEVJETESUZECKZWZGWSSRKZWBLNVFUFPOXOBAULQVIDVXDEUHGRJXKFJIUMOYKJYBOYYPVDAIXCUWOANDCPAFHIQTVVFRTLJIYEJPAQZTRIWEYRS");

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
    msg.setTimeStamp(0.194007504565);
    msg.setSource(25688U);
    msg.setSourceEntity(89U);
    msg.setDestination(14801U);
    msg.setDestinationEntity(251U);
    msg.target.assign("ZFELYUYLOAUUVAIPCPIZDNRNDYVZWLMCUWVMJIRVVUUUYZBDHRWMHYROMOZHDQRIOLTJZDPPPCJNDMXFVFSTMTNPTOFHQJDNEENKIAKKXGBKSWQLLUGQKZTHBJQMRYNKXAEIBYIAKSPZXAMFRXAFYCL");
    msg.max_speed = 0.23149633796;
    msg.speed_units = 175U;
    msg.lat = 0.750282529492;
    msg.lon = 0.548065433507;
    msg.z = 0.24562707613;
    msg.z_units = 118U;
    msg.custom.assign("TZDUEOPAKVMWEMEUQGYYXGAZGNRPCPGGWGKUWPLHCAVCTQQDLKHAULWBYFDBRTNBIKGUOIQLSQHLTQOYZSTMYQHLBWTFRDMNAEKIWNQOALVMBGEUJJDUFOLYOOVVDOWSZRIAFSLCYIXXBLXVJYDEUJDURNPOHSKJPZNVEZATNGVRRHVJKWDIZXRVBJTJKPBEJKZFSAIZHONINNFFDSHQQCSRMAIXMHMMFKCCXPTXIXECPYBGCFWUECMTHYBZ");

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
    msg.setTimeStamp(0.0246119428023);
    msg.setSource(29411U);
    msg.setSourceEntity(158U);
    msg.setDestination(35628U);
    msg.setDestinationEntity(117U);
    msg.target.assign("IVGGGOPLKQQRDVAFPYJFQIETTGCHRLYFMEJMDUTRWCILBIYDDRLYXVOFADZJXCSGDWGYZVKIMBEHQAFMXOENMCHTRCPYBNKXCQRZAPAXLUYUIHYDSFTECBIWAIZSWWZOLVKXPOYUGOXEWJLHJJHBECSOZWMXTVLSNACMUNCSVBPPJMURBPNPQVVUJK");
    msg.max_speed = 0.223407818544;
    msg.speed_units = 153U;
    msg.lat = 0.217882880124;
    msg.lon = 0.00919631147882;
    msg.z = 0.464437071179;
    msg.z_units = 63U;
    msg.custom.assign("UFLNKOCVOAIIYBHPJLYSFQRGUJDXJLUGINGHERZJXKCDWBIVQDOUJMYVDMWGXJYSATL");

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
    IMC::Docking msg;
    msg.setTimeStamp(0.896416024492);
    msg.setSource(27053U);
    msg.setSourceEntity(124U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(34U);
    msg.target.assign("PRRATWYEAANFHZQCIZYEQAJPLEOYKXQXCCXQ");
    msg.station.assign("CQAIRKAKEXZBOKVOBJFYSIIUBOLMMQZIRVTMPWHCUBQDYNYSTGHZOWGEBKQFGVNUZVYODHAZLRWCVXUJYPFXHZSGYMCALBWRGSDMXRYTXIKDFUDYHTYMNQKQGUCP");
    msg.speed = 0.917589451944;
    msg.speed_units = 239U;
    msg.lat = 0.228532411842;
    msg.lon = 0.111431680607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.220104026207);
    msg.setSource(24086U);
    msg.setSourceEntity(54U);
    msg.setDestination(20837U);
    msg.setDestinationEntity(74U);
    msg.target.assign("ILSNFWWOMVKPMHM");
    msg.station.assign("XGZORNSGSKCIHTHSYFTWDSEWTNYXAZCKAYFZDHIQBMGYLOVMLOL");
    msg.speed = 0.339263651463;
    msg.speed_units = 117U;
    msg.lat = 0.408000595328;
    msg.lon = 0.386835771944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.938188222155);
    msg.setSource(4209U);
    msg.setSourceEntity(133U);
    msg.setDestination(39529U);
    msg.setDestinationEntity(127U);
    msg.target.assign("RUQJJHPZNGSBYRUYLDUKABSFYCHKIEFNNGDTTARIDMGNUWUMPUCQIOINZZYXHCWFJKEVIKQNWMGGXYWQILVOZCDORKLEEIPSVGCYAJKHZJBZMMLJCVWFEGYSBLDHYJRWZBVSZOTLPXCGBJCHAFWCIHETPOYFLJLMBUTQEIXLAEPDMKNSBZAOUAHMXCRXTFKQERQZQVXSRIYVMQDGTNKBDGSXOWALVVPFUQVPMWHFSPESOOTRO");
    msg.station.assign("IZCGJEVHXWULLYAGTVPRJRGWOJEFTABZMQLHVNXFFGJIBPMETVTQSGTGXXIBROIRSMIFULNMCNDINKDYPFEHEEQTBLDIDAYBFQKRYKSFKHMZRVYVPQWEUDWUDLQZPTZOQNPMYXSAOASCHECJGPGNANMSDCBCOZPKUFVRKAXURWLWQUIUTSKZMJECNKMOYYRWVNHPBW");
    msg.speed = 0.147808248883;
    msg.speed_units = 29U;
    msg.lat = 0.644250685389;
    msg.lon = 0.418180717858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #2", msg == *msg_d);
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
    msg.setTimeStamp(0.163326056567);
    msg.setSource(37618U);
    msg.setSourceEntity(17U);
    msg.setDestination(42990U);
    msg.setDestinationEntity(222U);
    msg.op_mode = 244U;
    msg.error_count = 249U;
    msg.error_ents.assign("ADJFCLTTPSXPFUXDDXOYOLIGLZMJOEJTLUZHSRMBSUBSFVODCGGUMHOGUYEBCPOAUUNAIPWHKISCTDNQXYZXQLWVRZQPSYBFHSDXHRQKOXFIVBCIEOYFMYWRJWABRAMPECDJOLQMRBAFYZPECIYRSTDZRJZLNQHKJPFJBNGCHNWEPWVAVTMI");
    msg.maneuver_type = 45045U;
    msg.maneuver_stime = 0.12893921891;
    msg.maneuver_eta = 45222U;
    msg.control_loops = 3495079400U;
    msg.flags = 126U;
    msg.last_error.assign("HVQJZYSGEDLWXENYNRDNTGSTVKFAHMUXWETVEZGTWKMXEMOYKYLVVIRJARWLAQFNSAPHQIXWSPQULJONQZOBOWVUCNKLKCDVURUZTZOWMVSRFDPGMUOZMQUKZIJSTJXRPPEDTXGJPEBGGRGFIZNSIIGMSXXPFVRLJAJDMAUHPHHDJOCAMANUFPWCBFBCZCXSTYQOLGNECXWBCDDYFAI");
    msg.last_error_time = 0.949893687176;

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
    msg.setTimeStamp(0.459989819227);
    msg.setSource(50383U);
    msg.setSourceEntity(26U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(199U);
    msg.op_mode = 231U;
    msg.error_count = 102U;
    msg.error_ents.assign("QGUVVEHHMDOLMFNKOAWGPHOIGABLFJGQZOCBFMFDGWDTAXCVXJURKTHVHPDWEKYXZGUAQGUCBUFHFRNQFQFFOYDIHRSWTVEUAATZVZYUKOPDWQIIPXYAXAOMBMWYRJVZLTGWCUVNUNYNZJKSIEDWOQK");
    msg.maneuver_type = 50619U;
    msg.maneuver_stime = 0.297734282368;
    msg.maneuver_eta = 22307U;
    msg.control_loops = 968238733U;
    msg.flags = 156U;
    msg.last_error.assign("PUFOYBSSIXDVIIVTYBZKJVBBJCOUMPLKWFYUHEGIZTSVRDGUUDDESWMZTUAHUHPIWQKQDNCOIDLOLXCFFQPPMLMIFORHLTAPEFTNQEVWBWRDIY");
    msg.last_error_time = 0.553207927169;

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
    msg.setTimeStamp(0.713869283705);
    msg.setSource(56822U);
    msg.setSourceEntity(199U);
    msg.setDestination(42801U);
    msg.setDestinationEntity(227U);
    msg.op_mode = 210U;
    msg.error_count = 187U;
    msg.error_ents.assign("IYTUULQGULSNVWJWYODCDZIWUVDXJBQJWRNMCLFPOLJPKDMRMVZMUYIYASPHEGVJHXTGEZLHGDAIZPANQINWEPWGQMIRYJCROXTXVJROQEZFXGCKHOFFJYWPBLKXHFDMSQXCLHOLGPKASZUSTJSBBORNCRQVHEASXHQDENILKKDTFPPHLFZBBKWAKATYZIT");
    msg.maneuver_type = 3779U;
    msg.maneuver_stime = 0.497318935554;
    msg.maneuver_eta = 14773U;
    msg.control_loops = 2233946816U;
    msg.flags = 5U;
    msg.last_error.assign("HBIFGGSPPBBJNEAEFONCUAMKITYXGMMNCZQKVNWAMLKWRLKQJXMRNPAOPUUFKUHODRVPPJS");
    msg.last_error_time = 0.363308933826;

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
    msg.setTimeStamp(0.0413065993356);
    msg.setSource(61936U);
    msg.setSourceEntity(76U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(163U);
    msg.type = 164U;
    msg.request_id = 55459U;
    msg.command = 231U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 49019U;
    tmp_msg_0.lat = 0.119109590655;
    tmp_msg_0.lon = 0.126382935435;
    tmp_msg_0.z = 0.548536241442;
    tmp_msg_0.z_units = 65U;
    tmp_msg_0.speed = 0.893649322693;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.bearing = 0.900797612186;
    tmp_msg_0.cross_angle = 0.077104915522;
    tmp_msg_0.width = 0.994611296215;
    tmp_msg_0.length = 0.60037607543;
    tmp_msg_0.hstep = 0.340748212899;
    tmp_msg_0.coff = 240U;
    tmp_msg_0.alternation = 87U;
    tmp_msg_0.flags = 91U;
    tmp_msg_0.custom.assign("JTWXCUNQUKGQMJHJGWGIOAXOVQVAUZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7266U;
    msg.info.assign("NYIJDUBRZKPKPGSVXCSWKKWWRHTSBTGOQHYHTIG");

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
    msg.setTimeStamp(0.19818255006);
    msg.setSource(32983U);
    msg.setSourceEntity(37U);
    msg.setDestination(14339U);
    msg.setDestinationEntity(23U);
    msg.type = 12U;
    msg.request_id = 18127U;
    msg.command = 107U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 23406U;
    tmp_msg_0.control_ent = 53U;
    tmp_msg_0.timeout = 0.435510674367;
    tmp_msg_0.loiter_radius = 0.520175484561;
    tmp_msg_0.altitude_interval = 0.716025505087;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60996U;
    msg.info.assign("WTTXBUTIKPSNSMVDKHJYLIBBUYFNGXMBZYSAYBNGIDMQAFXINLIXAYEVCDMORQELZPJYSQOUBVHLXCUOQAVUKCCRMELAFEEHWHFPLCOQKRTWZZNCQDGRNTLCKWKWBJHKEZXTOYGAXVSNNVLKVPOOMEMXDOMRBDITORDPHPJZSYDPZ");

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
    msg.setTimeStamp(0.118649397275);
    msg.setSource(19035U);
    msg.setSourceEntity(235U);
    msg.setDestination(26109U);
    msg.setDestinationEntity(151U);
    msg.type = 182U;
    msg.request_id = 41104U;
    msg.command = 40U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52398U;
    msg.info.assign("MKGIIYJJYQVVHTNQFZPCUUFBITDJKEWAATMIVXLAZJUQKPFQYDMIGTBQKAZRCNTRQCWOIGKFESKVUEXYPPTSHFSXDZRGOBNIPZHVXYPWSRRCAXNLENWXJFPBRWRGROZUYZNLSLVSVBRYKODUJCFXPVHMDWLYCGUNWJQJCHXXELICOIIMATGJDLHPZGMLHVOKOMAGNPRHVACNFSULOFJQDKBEOXHSZSTDWESQG");

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
    msg.setTimeStamp(0.0128666817625);
    msg.setSource(39728U);
    msg.setSourceEntity(171U);
    msg.setDestination(53191U);
    msg.setDestinationEntity(165U);
    msg.command = 5U;
    msg.entities.assign("PYNHDGTHTAIOZBHUAXBMSXRJDKOAIWHQCJZKAANGEWOBRYVLIKHWLRUHUGGSNCEMRSEYTICCIJPKAVRDYAMCFDDPBNWDMHYJFJVXSTVJBPKBFXTULKIXHLWWMLMKDOORKCXIFSVLAAWGYTRMUGFYYQLQXIUJUSMOEOZSZFXTEYSEZQZGHGEPRNAZEPVUOKDVJL");

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
    msg.setTimeStamp(0.970913681439);
    msg.setSource(14900U);
    msg.setSourceEntity(193U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(213U);
    msg.command = 220U;
    msg.entities.assign("CTMMXXKGTJHDGLUIDQJESUBGZJABHZBPOXYNRPKRPZESTRTWPQCXVABYLNNEMBNIWLYYYTMSHTQRYAIAPUDOCGRLDIEQODURNFRUHCSLNMVWJSPFBRFKYWVJQGIJOSUDSXXWDMNSASMYWVDOZHLGPZQLXUAGFAKAOMJCDBNEKTACGXPFPVQLVKHQGTJFLQIEEYHHHUCC");

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
    msg.setTimeStamp(0.237062931758);
    msg.setSource(34679U);
    msg.setSourceEntity(237U);
    msg.setDestination(39673U);
    msg.setDestinationEntity(239U);
    msg.command = 93U;
    msg.entities.assign("OUVSVLPTKHSZLYTTFRPXFUDDJZZBWEIFBVEVRDMHAEJSNEGTAWQQGBGTEBJJJWIAIGYENBKOCMDDZDKGLBPRFBEXGKUWZSRWPYYMYOQT");

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
    msg.setTimeStamp(0.781640173059);
    msg.setSource(37339U);
    msg.setSourceEntity(240U);
    msg.setDestination(31769U);
    msg.setDestinationEntity(217U);
    msg.mcount = 160U;
    msg.mnames.assign("OLXXTUIJHGZBRROYTKFJCHHVLFKQCETKRZUARBCHLGGLUVAEAOBGZKVSBMPXOGPSQUFBF");
    msg.ecount = 144U;
    msg.enames.assign("PGZGIKBEAFPYPOEJPVZHHWRQUAJIDYFKMACTYURGBTLAKNDYOEOIWDIPFOLLNVYCA");
    msg.ccount = 49U;
    msg.cnames.assign("OAMRCDSMPAHEONVQQEDIBWPXWHNRMRACFUBEBCGYWGYVIVWGUTQPINIQMXKFCGOZURALZQOTXOTMONIFGFUECKCPVQLZERFNBANBIUMDBWBDIYYDBPQJYWETMNLBSRJPLVKNDGUIR");
    msg.last_error.assign("LRVPXCIIHJRNXCSXGLAUENQMPEGZCSNCOFAGGOZXAJHTYZZKOXVGIVIHVDORMXTGDVRFYTEYQXJINNWZHQQCEKTRDBACRQJYWFLBJNZVJUJSAFDODPHXQQJKOEUMHUULFDALRWHTLOHZQITWMYYYUMWKTDUGPYSYFCCDRMSZATOLXEBCODBBGHWPSQMFFNAGTAHEWCWABVKQBBPISGBRSNLKUZMWFKSVIPYIJXPSPMNKDELEV");
    msg.last_error_time = 0.839283768532;

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
    msg.setTimeStamp(0.201897104547);
    msg.setSource(9674U);
    msg.setSourceEntity(97U);
    msg.setDestination(60676U);
    msg.setDestinationEntity(157U);
    msg.mcount = 130U;
    msg.mnames.assign("QWJHJIYMMKCZBACURGSIAJEAGHAZZVVNLUIDAZOERBMMJGXWTPITHZGFYJRBDCDHBZXIWKQYEMTJJWYBFHFGOCYUMXFDHWDEMEUDWLBQVLQXMRXWDYS");
    msg.ecount = 193U;
    msg.enames.assign("THSCUFPCMMRHPKLERYQGDSCRCCXSUKERHKJWOCVLILEMIOBSQZYAPLJNZHAEGGAVFALZMZMHQOQJWQPVYXUCALTDR");
    msg.ccount = 49U;
    msg.cnames.assign("VFYBHQYVCIRPGDMCCJVOINKHEAPIEYRLTDYDVWFXFHGKHINSDTEQKPTJLGMVAUTBQTEAHZCJSDXUXERQZPXWPSALWCUR");
    msg.last_error.assign("FIQLYESFTLKXTAVWWNSSYYOZKBIFUHUGCQJBCZFUGOBHNIAEGFAVPFGQQDHUYXZIBJRBLCNRZOTJA");
    msg.last_error_time = 0.966465707424;

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
    msg.setTimeStamp(0.486881433856);
    msg.setSource(63537U);
    msg.setSourceEntity(58U);
    msg.setDestination(39496U);
    msg.setDestinationEntity(183U);
    msg.mcount = 225U;
    msg.mnames.assign("DZKAMROFYROSKKITPFAGURHMRBBAFFOTEGSJXWCDCIZJVMUIXOHMAOA");
    msg.ecount = 133U;
    msg.enames.assign("KWPQIQQYOKWVGOBFMSULAZZLCIHLADYNOPUWFSJHDCHLPZMDEYQCGPTKAOFIWGWIBCJDCGMLXCBRIOYFZRASHCNDWMXNRMCHEYQNJRFHFFHVVSNYTQEKJWOBYFRKXTBKOGAVAUUGKJKBHEEQJSPILCDNYVVIITXDRIDLXS");
    msg.ccount = 47U;
    msg.cnames.assign("JRADEHNUEBWIIRCOMKSEPPSMKFBVRBLTREVJJGBFUYVQXXSCMAIYHZKKIRGNVKGLJCZOWAFAUAYFFMJTLUVSDJWCYNQTOHLFBPMNLZYWUJIFJXZUFRUOPPALWZEKITGESYHGATGNAAJEHIHEQANKNVXDXTNSLQCPCXEBODTCQWVGVBFDJBPHUWBDGOQCNIRZQMOSGDKULWLZHMVRYRQNZGUXQYHYYDKTKPOSLEXIXMDVCZIBWMZWFPSCROOQTT");
    msg.last_error.assign("CLIYSYOYKKXXJXMIEUUPIPZBMFMCBYORRRKWTVPRJWWLBOPUTGXZZAMHGYQEINMLFHVRNX");
    msg.last_error_time = 0.0216557475233;

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
    msg.setTimeStamp(0.303097939956);
    msg.setSource(21350U);
    msg.setSourceEntity(21U);
    msg.setDestination(42214U);
    msg.setDestinationEntity(205U);
    msg.mask = 105U;
    msg.max_depth = 0.407614173982;
    msg.min_altitude = 0.670473924245;
    msg.max_altitude = 0.0972842079505;
    msg.min_speed = 0.417783106941;
    msg.max_speed = 0.434042441084;
    msg.max_vrate = 0.688454466475;
    msg.lat = 0.221661379758;
    msg.lon = 0.42753254964;
    msg.orientation = 0.774928360952;
    msg.width = 0.163591374241;
    msg.length = 0.806985359558;

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
    msg.setTimeStamp(0.911880528644);
    msg.setSource(18147U);
    msg.setSourceEntity(217U);
    msg.setDestination(10538U);
    msg.setDestinationEntity(37U);
    msg.mask = 1U;
    msg.max_depth = 0.0261202726776;
    msg.min_altitude = 0.190084694495;
    msg.max_altitude = 0.973897397307;
    msg.min_speed = 0.920839258608;
    msg.max_speed = 0.794888858636;
    msg.max_vrate = 0.716258935413;
    msg.lat = 0.689461729843;
    msg.lon = 0.411911338784;
    msg.orientation = 0.945205047822;
    msg.width = 0.176192353531;
    msg.length = 0.811627483749;

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
    msg.setTimeStamp(0.0468726719093);
    msg.setSource(35929U);
    msg.setSourceEntity(108U);
    msg.setDestination(27138U);
    msg.setDestinationEntity(13U);
    msg.mask = 200U;
    msg.max_depth = 0.926855039573;
    msg.min_altitude = 0.445372864237;
    msg.max_altitude = 0.574980318529;
    msg.min_speed = 0.447414326784;
    msg.max_speed = 0.637984420452;
    msg.max_vrate = 0.649388088031;
    msg.lat = 0.680488219227;
    msg.lon = 0.732675163945;
    msg.orientation = 0.746619860234;
    msg.width = 0.410114292255;
    msg.length = 0.55675447068;

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
    msg.setTimeStamp(0.133250786367);
    msg.setSource(29628U);
    msg.setSourceEntity(202U);
    msg.setDestination(10308U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.833193847342);
    msg.setSource(24105U);
    msg.setSourceEntity(243U);
    msg.setDestination(26595U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.403349041955);
    msg.setSource(29007U);
    msg.setSourceEntity(210U);
    msg.setDestination(4484U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.0162847356477);
    msg.setSource(5269U);
    msg.setSourceEntity(118U);
    msg.setDestination(47417U);
    msg.setDestinationEntity(113U);
    msg.duration = 5225U;

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
    msg.setTimeStamp(0.198943325778);
    msg.setSource(47065U);
    msg.setSourceEntity(85U);
    msg.setDestination(25216U);
    msg.setDestinationEntity(160U);
    msg.duration = 34103U;

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
    msg.setTimeStamp(0.349022252605);
    msg.setSource(26739U);
    msg.setSourceEntity(106U);
    msg.setDestination(28459U);
    msg.setDestinationEntity(121U);
    msg.duration = 55284U;

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
    msg.setTimeStamp(0.925951652833);
    msg.setSource(29596U);
    msg.setSourceEntity(234U);
    msg.setDestination(38328U);
    msg.setDestinationEntity(130U);
    msg.enable = 0U;
    msg.mask = 1586239202U;
    msg.scope_ref = 854129700U;

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
    msg.setTimeStamp(0.753309738915);
    msg.setSource(51607U);
    msg.setSourceEntity(240U);
    msg.setDestination(64003U);
    msg.setDestinationEntity(25U);
    msg.enable = 167U;
    msg.mask = 2331541631U;
    msg.scope_ref = 2253416743U;

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
    msg.setTimeStamp(0.578375650006);
    msg.setSource(64051U);
    msg.setSourceEntity(10U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(153U);
    msg.enable = 195U;
    msg.mask = 128152325U;
    msg.scope_ref = 2191992070U;

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
    msg.setTimeStamp(0.215901373452);
    msg.setSource(32187U);
    msg.setSourceEntity(173U);
    msg.setDestination(63723U);
    msg.setDestinationEntity(56U);
    msg.medium = 20U;

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
    msg.setTimeStamp(0.778375174519);
    msg.setSource(50483U);
    msg.setSourceEntity(45U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(208U);
    msg.medium = 203U;

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
    msg.setTimeStamp(0.0619494008813);
    msg.setSource(62128U);
    msg.setSourceEntity(61U);
    msg.setDestination(45243U);
    msg.setDestinationEntity(96U);
    msg.medium = 135U;

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
    msg.setTimeStamp(0.372506311216);
    msg.setSource(14844U);
    msg.setSourceEntity(33U);
    msg.setDestination(9245U);
    msg.setDestinationEntity(232U);
    msg.value = 0.0755501388528;
    msg.type = 193U;

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
    msg.setTimeStamp(0.700385849056);
    msg.setSource(44428U);
    msg.setSourceEntity(66U);
    msg.setDestination(28271U);
    msg.setDestinationEntity(0U);
    msg.value = 0.195278662996;
    msg.type = 13U;

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
    msg.setTimeStamp(0.42650124105);
    msg.setSource(38488U);
    msg.setSourceEntity(233U);
    msg.setDestination(2493U);
    msg.setDestinationEntity(140U);
    msg.value = 0.887653225686;
    msg.type = 106U;

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
    msg.setTimeStamp(0.599227100535);
    msg.setSource(21626U);
    msg.setSourceEntity(183U);
    msg.setDestination(7114U);
    msg.setDestinationEntity(80U);
    msg.possimerr = 0.503096910952;
    msg.converg = 0.30371480891;
    msg.turbulence = 0.832018302088;
    msg.possimmon = 244U;
    msg.commmon = 127U;
    msg.convergmon = 147U;

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
    msg.setTimeStamp(0.01339331889);
    msg.setSource(28634U);
    msg.setSourceEntity(38U);
    msg.setDestination(37699U);
    msg.setDestinationEntity(11U);
    msg.possimerr = 0.885709333744;
    msg.converg = 0.35675151476;
    msg.turbulence = 0.522390161336;
    msg.possimmon = 14U;
    msg.commmon = 245U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.634189304625);
    msg.setSource(43783U);
    msg.setSourceEntity(188U);
    msg.setDestination(49889U);
    msg.setDestinationEntity(93U);
    msg.possimerr = 0.383079210416;
    msg.converg = 0.0706645138902;
    msg.turbulence = 0.0630084119367;
    msg.possimmon = 10U;
    msg.commmon = 155U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.468344394571);
    msg.setSource(63882U);
    msg.setSourceEntity(130U);
    msg.setDestination(58957U);
    msg.setDestinationEntity(200U);
    msg.autonomy = 176U;
    msg.mode.assign("ILXBICYAKLXWUNPYTJXOFZDSEEPUNGVBAGGSOWEFZSWLNOQLINZHNUWVRVGAUKUQINANRLPFAZQBVLGHCOPF");

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
    msg.setTimeStamp(0.368095208337);
    msg.setSource(52090U);
    msg.setSourceEntity(10U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(199U);
    msg.autonomy = 104U;
    msg.mode.assign("LQCEWIESYUZVIDKSK");

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
    msg.setTimeStamp(0.630567005858);
    msg.setSource(48997U);
    msg.setSourceEntity(48U);
    msg.setDestination(50699U);
    msg.setDestinationEntity(250U);
    msg.autonomy = 77U;
    msg.mode.assign("UWUWMPKVAGVKIAPZSLWOPNLGDYYCJTYTPUMXVDALNWOHUEXCNILJKECSHIIGBVZRFTPVNQCRYMXKXZJOMQZWQDFSRORCHEKHSAMIGLZRTPRJZFHCNHEGFJVXGMRSJRUDYDCQOKFEQCHQEQZWPBZGRHJBUSCZIKMLBBJTNKUKAYWPEXLGAVOMWGYDOSXTFHFVCFNXLBSAWVKONHQXSNU");

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
    msg.setTimeStamp(0.190456867916);
    msg.setSource(64158U);
    msg.setSourceEntity(110U);
    msg.setDestination(54419U);
    msg.setDestinationEntity(88U);
    msg.type = 159U;
    msg.op = 84U;
    msg.possimerr = 0.254304986736;
    msg.converg = 0.145831053232;
    msg.turbulence = 0.314528227944;
    msg.possimmon = 224U;
    msg.commmon = 184U;
    msg.convergmon = 41U;

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
    msg.setTimeStamp(0.810502778907);
    msg.setSource(8628U);
    msg.setSourceEntity(82U);
    msg.setDestination(37737U);
    msg.setDestinationEntity(22U);
    msg.type = 147U;
    msg.op = 215U;
    msg.possimerr = 0.559534354202;
    msg.converg = 0.863283110405;
    msg.turbulence = 0.654079172769;
    msg.possimmon = 187U;
    msg.commmon = 11U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.212202375827);
    msg.setSource(31855U);
    msg.setSourceEntity(225U);
    msg.setDestination(62179U);
    msg.setDestinationEntity(119U);
    msg.type = 72U;
    msg.op = 31U;
    msg.possimerr = 0.349242244433;
    msg.converg = 0.482709563628;
    msg.turbulence = 0.901390234923;
    msg.possimmon = 82U;
    msg.commmon = 17U;
    msg.convergmon = 137U;

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
    msg.setTimeStamp(0.699490708882);
    msg.setSource(3219U);
    msg.setSourceEntity(195U);
    msg.setDestination(7180U);
    msg.setDestinationEntity(154U);
    msg.op = 182U;
    msg.comm_interface = 21U;
    msg.period = 18513U;
    msg.sys_dst.assign("TQODKMCOOVBLPZQNGSNCDNJHYTGAAOFQIRUQYVPQQHHSBIVXAUIKASKJZGVKBDXCWOESDIFCGYCNPTLTNCXBRQ");

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
    msg.setTimeStamp(0.809266846164);
    msg.setSource(2783U);
    msg.setSourceEntity(164U);
    msg.setDestination(48378U);
    msg.setDestinationEntity(115U);
    msg.op = 165U;
    msg.comm_interface = 123U;
    msg.period = 9085U;
    msg.sys_dst.assign("WWNNGZTCRVRTNVUZTFLNNPKDXQTEDBXSNQGVUJAIBSZJHRIZOSZBUBPYFYKMRBGLORZGJRETCCTGGAJBLFONJUHRAGWDVFXPKUJOYZLRECQWUQHSMKSDKLMLQVHMIUYIIPJNUVNDFOFZRMEPFCAWKQXZMDOHK");

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
    msg.setTimeStamp(0.198902885164);
    msg.setSource(54148U);
    msg.setSourceEntity(178U);
    msg.setDestination(56643U);
    msg.setDestinationEntity(234U);
    msg.op = 124U;
    msg.comm_interface = 85U;
    msg.period = 61698U;
    msg.sys_dst.assign("MVXDFXCWIHOJHBLFSIOXMTCLAXPREUUNSEGTZZRKLYLVJCBHGJOPCLJQWQRSGKWNPPLDOIWRYATFRFQ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.820341947431);
    msg.setSource(39162U);
    msg.setSourceEntity(155U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.0369304699926);
    msg.setSource(53308U);
    msg.setSourceEntity(206U);
    msg.setDestination(37386U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.7031573089);
    msg.setSource(41470U);
    msg.setSourceEntity(47U);
    msg.setDestination(3963U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.321103193388);
    msg.setSource(41080U);
    msg.setSourceEntity(27U);
    msg.setDestination(11235U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("AJHNJVFWLMMYUGTZYIWAOLRLBVQNUCJMW");
    msg.description.assign("LSMSIWHOUOAQQLXCKNYVTLZESMIBABBVWGRKYWYRALJMXXSWUOYVDRETYZFIPVWSLMAHQUJEBTXTVBRDYRUMPELESTTGIHANBSSCEENIUEDIYQJIMJBDMIHDKFNYGCO");
    msg.vnamespace.assign("PHNNOMCGYHVZIERJTRRYQQCJORHQWKIYYJLTIDISEWRSDSOUOBLSSQSAZQENANOGCLPRALCBJFTWBCGDKHW");
    msg.start_man_id.assign("VLKXCLUDAOXHXFIDZYZAOUURMNAEHBXZBQDPAFWJKQRCTPDSPBQKHVAFLJQAJWYYXIQGXQVCISFZHPSBKTLRLJABEXPUTOGIWJ");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("EGAUMTJASHCHKABJKHIYNOVZXJSJRRLXBBDFZWNMBDOHCZFDLNATTXSTMXDWANCRTQBHFXZPJYEPOUVRSFNIXQFRFVZYQLXXKKRJRXVOOQKYGKIAQWITVBGIKSSEVUMDWLNNOAAFQTETAHMFUCDSMKJZQGLYBZPOEOLDGLPFWSPPCUBYJITHUZKP");
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
    msg.setTimeStamp(0.597186113371);
    msg.setSource(3726U);
    msg.setSourceEntity(46U);
    msg.setDestination(30161U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("MBUCUAOPAYEQLDARTLLVZDXWZWOELA");
    msg.description.assign("ZISWGBFPWUXBKYRNGBRTLFUEIBJTMVPJPDKGGJOQHILYATKYLSGMVHTWMWXZGEWOAPEPLHQUMUCFATEJXCXDMRIOOLCLVDXQG");
    msg.vnamespace.assign("HSBBXJOJWFAASLPZOHZERYYVPCZUWXETGRINFHILUQXWXXPSLDCPYHZDPWRPFRJICHDEEUIFLGKDMTSQOLIHRGGIPEYNGTXIUNDKAZGQXBEQIQOGCCHBNSOVZPFQKANQOFTEECWTVKESACVPMFRVJSODZUSBYYNTDGCMXRUOWIZKDKUBNH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OCCDZNMPRQIECHMQCHAWLIRPDMLAPQVGSMJOIRTDUFBVRETUNCAVJDFEHSPZGOIZIRLSYTRQDMTNKKTINQFPYMQIVSEUGYZVSJHHXSNVPGAEIJXBBLPLDQRJEIWQOVJQ");
    tmp_msg_0.value.assign("AELQDJJZGCPQMWTMWBZGRBRZVSTAYUMSMGROLQBTEYRDBJCZVRCOYEQRMKYWFQYFISJKRHNLPBONELWDWFZTLWXASWUGJLCJH");
    tmp_msg_0.type = 175U;
    tmp_msg_0.access = 49U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DHNFNHUDTGMMJFZLXIBMKAWIGVHCQTZDBYJEILBKOPIZLLQHPX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BLSTOVFWGLURIPHD");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 39476U;
    tmp_tmp_msg_1_0.lat = 0.501071255733;
    tmp_tmp_msg_1_0.lon = 0.608141702846;
    tmp_tmp_msg_1_0.z = 0.328300973005;
    tmp_tmp_msg_1_0.z_units = 17U;
    tmp_tmp_msg_1_0.speed = 0.748927401251;
    tmp_tmp_msg_1_0.speed_units = 212U;
    tmp_tmp_msg_1_0.bearing = 0.166732170738;
    tmp_tmp_msg_1_0.cross_angle = 0.928930174108;
    tmp_tmp_msg_1_0.width = 0.295944507234;
    tmp_tmp_msg_1_0.length = 0.202462177027;
    tmp_tmp_msg_1_0.hstep = 0.452149877946;
    tmp_tmp_msg_1_0.coff = 102U;
    tmp_tmp_msg_1_0.alternation = 136U;
    tmp_tmp_msg_1_0.flags = 180U;
    tmp_tmp_msg_1_0.custom.assign("FWAEWAGUBJLDCKZGKJHMOKJTRAJQTUDTQRPQNPWJNXBYIPK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::UsblPositionExtended tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.target.assign("CVNXQQLCCQJNATULGOYGDKMMZEYLRFEMVZYUVTVFMGFRAVACGPIIBBRRTCJWEHOKXRFUXSEHSVXOKDKAWTCQBMHCUYLGBBOBQNTTMXWHMTNZQUWARFNEDESDXYCPOJZJSNDJNGWAJDSQHKVTDLQYLHKPWIIQSBPKLWNSUVZJHYDZRJVNEGPILE");
    tmp_tmp_msg_1_1.x = 0.388318808735;
    tmp_tmp_msg_1_1.y = 0.782540092454;
    tmp_tmp_msg_1_1.z = 0.67278125039;
    tmp_tmp_msg_1_1.n = 0.248358714643;
    tmp_tmp_msg_1_1.e = 0.444160775782;
    tmp_tmp_msg_1_1.d = 0.0500907049604;
    tmp_tmp_msg_1_1.phi = 0.959662065113;
    tmp_tmp_msg_1_1.theta = 0.294368049595;
    tmp_tmp_msg_1_1.psi = 0.942753480215;
    tmp_tmp_msg_1_1.accuracy = 0.162674431353;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::TrueSpeed tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.194096393384;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MRZFNPUVZWAOUGWETSUCJJYXPAWNPAMUECRZRUUXVCLAXPDOLJNNSDGBDYYEHNHCBXBMRCEEFADJDDISBDFMTIKLNYIYVULLYJYCFOSJKQHJHSQCSDEXXGWQMBTIFAHJQFTQHGIVXJEOSGTQLBGVVMOGLPIWFZZNPAK");
    tmp_msg_2.dest_man.assign("GHNLYTZAEOFQUSIVFKLVBCBOYHJSYNHCMXWMQGIGFQAKJMKZVHUHXMMNPPWEBQJYVAMXMWZXNLGNAYCGFNDAGEMQODDHUJVDUFJPKTCPLWIAOSQHWBBBWJXOFLHSISXARTSUZBUYRTYCOKKPKGIJOOCZCKFRXDPSVYWVNJT");
    tmp_msg_2.conditions.assign("AGQTZHDHMZSDYHXPTBLDJFLULGUQPCHIOWDOLKHXJXNOXOBIGEVFSUMYYMSVCDMVDXFNRTMCTNIUHQWKRJOCEKRZLSTOLPJAARSCZWIXSAKSJUOIAUUYWPVBUTCAVNWFWGYGENKCUEFBHKXPHEXILNRFCYGRWTTWKOKAWVYGDNLXGBREZXVEJGTPQEQLUSNDPFMP");
    IMC::CrudeOil tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.200320134278;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::Brake tmp_msg_3;
    tmp_msg_3.op = 81U;
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
    msg.setTimeStamp(0.834196453643);
    msg.setSource(57789U);
    msg.setSourceEntity(142U);
    msg.setDestination(28048U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("SVTIVTNRGQFRMYAKHTSEHZFXPNNSCEEGZFOIJUYUTVVYQZDCGMJBTJYZZWJLLXOADPMFPTLZBYODDCMAEJBOIHRSCGQIKULDAFUVDZNNELTYGHFMBLKJZSBMXKMIADUNDQZCCKSHHIZXCIKEBXIVKPOKEXRUUMROOWPWXYPHVOLHRBPFPSQGTQFEACEWQWVRNBGAFIXCLXSWNMRWQVHJRCOUBG");
    msg.description.assign("PVDDSSAYXUCAFXGPPCPIXXODNCUQHJJCCRTEWWVJZBLIAHECYSERNCIJBRFVZBEIBXTFZFRDCRVKMBMWLJEWWFMMLYNSALHYWVGYQIHGRTXLVPHQZKBXVVUMFJFFCIX");
    msg.vnamespace.assign("AYWKAETTPMQHUVFFJIMAPDQVIOQBWYLHFDXYLJBNQFEBRMASKUTEAXEQDRUCXZJJTPIWWRBSSPUPFGMQKAKMPGFHXOLNBRCFHECZIEIHFDNZUNYOOBJJXEDJOZAIOVWNIHWUEZTYBFLJZCRNZDSUMRRHGGCXKTWKOOYW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XZQOHEDQCWMLCFYAKCYKYNBDKITMBYSSAODOVGSOTNUZKFAXOOPDEDGSQJJOZAPMQBFGRWNIBMDQZATTLGVLAPLPIZUZGTFAVLAXJXVPFAUBCVZLHBFRERFSZXJHDTBSXPHNKNCWVNQCCKHIGHYFTIUGNPJTQYLXQSTJHPVUKJISGWEGOVMPGINWOLM");
    tmp_msg_0.value.assign("FOXCPIBVYMZMVNGIPHFQFXDMKCRURAAWNOCNHHEKGOWUVIQLKXGBRSR");
    tmp_msg_0.type = 137U;
    tmp_msg_0.access = 214U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CQBSACRAURINANJWIM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZUEQSXWPWLGYDHOBLBVSNFVCBUZE");
    IMC::CompassCalibration tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 35907U;
    tmp_tmp_msg_1_0.lat = 0.345623794048;
    tmp_tmp_msg_1_0.lon = 0.602080930747;
    tmp_tmp_msg_1_0.z = 0.854796688677;
    tmp_tmp_msg_1_0.z_units = 175U;
    tmp_tmp_msg_1_0.pitch = 0.818484747192;
    tmp_tmp_msg_1_0.amplitude = 0.807781308766;
    tmp_tmp_msg_1_0.duration = 42573U;
    tmp_tmp_msg_1_0.speed = 0.795535612438;
    tmp_tmp_msg_1_0.speed_units = 188U;
    tmp_tmp_msg_1_0.radius = 0.00998336467739;
    tmp_tmp_msg_1_0.direction = 29U;
    tmp_tmp_msg_1_0.custom.assign("BOTGNJUGSKCLVKCLXHB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::HistoricSample tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.sys_id = 6603U;
    tmp_tmp_msg_1_1.priority = 60;
    tmp_tmp_msg_1_1.x = 4917;
    tmp_tmp_msg_1_1.y = -28332;
    tmp_tmp_msg_1_1.z = -31056;
    tmp_tmp_msg_1_1.t = 5600;
    IMC::DesiredLinearState tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.x = 0.951837994423;
    tmp_tmp_tmp_msg_1_1_0.y = 0.54333740062;
    tmp_tmp_tmp_msg_1_1_0.z = 0.015055996457;
    tmp_tmp_tmp_msg_1_1_0.vx = 0.137238078624;
    tmp_tmp_tmp_msg_1_1_0.vy = 0.866059405478;
    tmp_tmp_tmp_msg_1_1_0.vz = 0.683837685756;
    tmp_tmp_tmp_msg_1_1_0.ax = 0.21214277948;
    tmp_tmp_tmp_msg_1_1_0.ay = 0.207100065064;
    tmp_tmp_tmp_msg_1_1_0.az = 0.380513986271;
    tmp_tmp_tmp_msg_1_1_0.flags = 59259U;
    tmp_tmp_msg_1_1.sample.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::EntityMonitoringState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.mcount = 113U;
    tmp_tmp_msg_1_2.mnames.assign("AXCIKVMUBUQYLWOUXINSYFPZQOQHIVXXJAJLGARCLYWGVDFZHQRICTCKHMBWYPOJBXXZTWZCAMFODUMQAUDEPSKQRYLBDLXEPNNAMTIBPOSKEFQKLZRYSFRBVHUJVIOVFLZZNLFBOST");
    tmp_tmp_msg_1_2.ecount = 170U;
    tmp_tmp_msg_1_2.enames.assign("WFTIXLFXBRKGMILCMWFUKKHOLYJYTPUQNHAICVGVLDELIFBUPARRTHNBIKGRBADADMRZTDATSMVEUFTJSOMJOPHXQJMZP");
    tmp_tmp_msg_1_2.ccount = 180U;
    tmp_tmp_msg_1_2.cnames.assign("TXYEPICUTVSAJJUAFZIYSAJPXSXYUZELZKUBLROEFNMLMQUEWGZAAVXKWYSHODZNCBRZSHVTBFRNVTVZUDGUSKQPHNOJMQDDGLKCDBIKMXWDOCVUONRNCQYAFMHSNAIKXHMZCHABFZOWPTWLFEVQXZRFDQRNQACJSIVEXJIBPJIPQWHGJLDPUMGSEGTHUVINLDMHQPRYYPBODVCGOANGKSBLM");
    tmp_tmp_msg_1_2.last_error.assign("LDZCDBEIODJXUQZMUZJWFUWMRPBHAPOHMHCPWUWHOGHDVRNNZQYWXDYSTLQYGQGEOTBVBBXOGQIBPXVRAPGCJVKHSARYOFOEHKNLGIVEYRKZLASL");
    tmp_tmp_msg_1_2.last_error_time = 0.078669257379;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("WOQKMYNTUHBYTIJHVKRMNSJGKGEXJZVVRPHQJFAWIVZRHETNHLGDEMIMBSCUDYEWYATJAHYXXFNQBWKIGFRVGMSBOBVPTVZXQFK");
    tmp_msg_2.dest_man.assign("WPSBDPGKPQESKMUGFBDZYQYQXQRCJMLRGTOAKPOOXONVYNEUILHKTZMNPNZHKQMOETGBGNZHXWBFNVVNTHXWAWIMHOVTNRIESVWGSFYZAKCLDPGDGXLORCURDIAKKLZHADBIUVACCJFMQRAIIDTJBYAZIJTKVLBSBVSMTVHPIJPHNOZQTQJUMCEBDWFLCXOYJXUPSQWWLWREXJFYSJQSYRPCSFYUXJECZCFRMDW");
    tmp_msg_2.conditions.assign("QKTRLSWSQXXGRDEFEZNQZFNADUGHAMWLZNKYHZJMIDWQTQJIJVSWLGVLOVOBEUUV");
    msg.transitions.push_back(tmp_msg_2);
    IMC::UamRxRange tmp_msg_3;
    tmp_msg_3.seq = 47485U;
    tmp_msg_3.sys.assign("NLIBFUBXBWNJVYCVINERKVDKYQSGLGWHIOHUCZSXSQIAPXWQKMBXXYSEABQYKCPUOJSLTKNHOHEBILUJZYOIGTCEBMSQIWVDLMJUYAOAGFXNTQKWTV");
    tmp_msg_3.value = 0.705742713565;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.0293930902376);
    msg.setSource(7706U);
    msg.setSourceEntity(135U);
    msg.setDestination(58806U);
    msg.setDestinationEntity(107U);
    msg.maneuver_id.assign("HCVKPBHOPRCZDTRNWKDHGUNTXHQWEUIJNYJJFFSQPTCKCIGZPLXGAVPEBHWZRUJPLULYBUZDAZGGYKPXZFMGUMVFQYAYEBBAYYIAQAJODHNVOUCIDNQEQUMCNYEOLFTEQ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 44940U;
    tmp_msg_0.lat = 0.492902158676;
    tmp_msg_0.lon = 0.272992646125;
    tmp_msg_0.z = 0.537025366936;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.66029736928;
    tmp_msg_0.speed_units = 137U;
    tmp_msg_0.custom.assign("NLCGPRAIGLZUUJAHFKJCUVMIXFGWCJNNWPCJXMNZRYXXOAINAPGPLRDQTIHLXFRODAZPMFCTQULNRHKQIOATFVDREPFFJCSKWEWBJYBDVFXZLRVEWFMCRWBOWUVILRUAYNOTDLSOZKVEMEJQNHDXVIWIAHVDLHEIHKUPESQSKWTMXES");
    msg.data.set(tmp_msg_0);
    IMC::Rpm tmp_msg_1;
    tmp_msg_1.value = 25922;
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
    msg.setTimeStamp(0.389605528299);
    msg.setSource(16693U);
    msg.setSourceEntity(6U);
    msg.setDestination(27844U);
    msg.setDestinationEntity(191U);
    msg.maneuver_id.assign("WZYLUYJJIXOWDKEVFQVFGNAKMXCITIZCFKPTJXDLPYEYUHXJYWVZCHBHTCQPIWEAOGWOKRHSZJCNTNETVDQCHFFFYWTAYOSQKDNNGGZIJMTRKMQCGPHLOCQZSISVRFALXBWBINXRURELBSNMQUMJLRLNIZFKUQPYRUYEDBADDHUQNBABSJGEPLYEPSOKORHIU");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 29741U;
    tmp_msg_0.lat = 0.592175129601;
    tmp_msg_0.lon = 0.374537107813;
    tmp_msg_0.z = 0.455312418137;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.speed = 0.882895539053;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.custom.assign("TPRTXOZHHPMSTEVDIFGIZOXRRCMPWJLYIENFNEGSOXPAZETLNXOHTHOJRNIWGDSHACVEVSMP");
    msg.data.set(tmp_msg_0);
    IMC::LblEstimate tmp_msg_1;
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("RYMLYVJGYWTHORHZMTVFBCHZRKNOJQMFIUGCMFGSIQJPNJPRVSHQDBBGSOPMVLKTIAEZNVRHINEGPUXWPBQVUFUEJEVSJFLINIGFGPSLFFWDTAYRLFCMCSDXOCEKGZCTYAIWHAHDBLDHYQUAKPONGZP");
    tmp_tmp_msg_1_0.lat = 0.196000598275;
    tmp_tmp_msg_1_0.lon = 0.218163512381;
    tmp_tmp_msg_1_0.depth = 0.692480454274;
    tmp_tmp_msg_1_0.query_channel = 85U;
    tmp_tmp_msg_1_0.reply_channel = 86U;
    tmp_tmp_msg_1_0.transponder_delay = 175U;
    tmp_msg_1.beacon.set(tmp_tmp_msg_1_0);
    tmp_msg_1.x = 0.818966585327;
    tmp_msg_1.y = 0.557618088739;
    tmp_msg_1.var_x = 0.768928575367;
    tmp_msg_1.var_y = 0.148193618446;
    tmp_msg_1.distance = 0.822781199074;
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
    msg.setTimeStamp(0.649509365701);
    msg.setSource(36606U);
    msg.setSourceEntity(7U);
    msg.setDestination(60065U);
    msg.setDestinationEntity(141U);
    msg.maneuver_id.assign("ARPZXACANDWFKFBUMGVCLITFCKARIRVVO");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MEPBNIOAPUYERPMI");
    msg.data.set(tmp_msg_0);
    IMC::DissolvedOxygen tmp_msg_1;
    tmp_msg_1.value = 0.715997515534;
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
    msg.setTimeStamp(0.932378351109);
    msg.setSource(47586U);
    msg.setSourceEntity(56U);
    msg.setDestination(26355U);
    msg.setDestinationEntity(154U);
    msg.source_man.assign("QOGNCTWODPAAFTVSKXPDYEJKQBAJFOMXKXEZGAVSSFQAOPNBWELRLYUY");
    msg.dest_man.assign("KOQBRNHVRMIT");
    msg.conditions.assign("RYCTANVNLXQSMGIXVHBWIPFYNATQSLVFKYKRXLXUGUIROAFETVMCFGCLMXSWW");

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
    msg.setTimeStamp(0.641665199775);
    msg.setSource(32397U);
    msg.setSourceEntity(161U);
    msg.setDestination(44626U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("ZHEKCBSUYMOUSBNDUHERCOSTLOFGTEAFPPORCMQXHVKSNZAQELBWYCSPANKNIUJGYGIZNYMFWMWQZRQYU");
    msg.dest_man.assign("MOFGFJYLANYQDUSLYPAJBTKVJMCUJDPOITMEHZXMNKY");
    msg.conditions.assign("FCKSWRYDLYNETSDUSDHMAVTUOFBPENHBGVNXVOTFACCCCPHWQXONZVFFYBPORAZQFUYDNRCXQMIWOIAZSLRETYLBTYOCGNLGWABZWXVLJMZMMEKERHVBNKPMGQEYJBQHGAWQDNWYXXSIEKJSUZYTONIINRXJLLCPJRZDLJHEPGXCFTSPXBLUDJFIRARIJVBZDOZKWIHAXRWVOFGKUKFTWJSQUHQTOPSKHPUQCLHGEVP");

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
    msg.setTimeStamp(0.343611232887);
    msg.setSource(51241U);
    msg.setSourceEntity(230U);
    msg.setDestination(40316U);
    msg.setDestinationEntity(213U);
    msg.source_man.assign("ECYGZXGLJPWGRXXBFLVEQYUEXUV");
    msg.dest_man.assign("HIVEAVOTSIVDGMOANRWXHFLCGCCANBTXNKPXKHBXATUJSFXKDNNUFHESJYWRBFJLTYSIGPBKBUMRSJSB");
    msg.conditions.assign("GZDNCJBNPKWSZVHCGLUANDPXXOZFBCEPUYOATFGPSXYZCMEYHRCYIMXEYWIVWXWBOJLBIRSJRZLQULLVNU");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("VWMFJALOKSKPJSCYQPBTVCCHWGOGMLPSIKDEAZNGWXWAMOQIIHPGYVZEXZORIUTCYMIMSEVCTMDVQAUUQYNQBEDLFIXAULEWGYMEUMJWPFGDXBLCRCRPMUBSJWPYNFRAJIKOPKBPUQEBEHASTBNWAJNIHSZLSGQTGXTZJKJAOFYTKYDFREUEZBSNOVDBRDT");
    tmp_msg_0.max_speed = 0.898296615819;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.lat = 0.99869726613;
    tmp_msg_0.lon = 0.282718597956;
    tmp_msg_0.z = 0.421641873589;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.custom.assign("KGDTCYWTZBXJMRBNXBUFRPHWQAFGDPPPRSUMEGKYZAOCBYMNZYUUYMQOFWSHYLVVZZVVZIBIHCXSOIXEAPCLUVOESLUCOMKRYTWWKITIEUVCCNIOLLUARQBRRPNTADQBHKQLQGTKDOPFLASZQCDROVMDXBDTSYFENHGWNWKXALJGEGIMFJALXEYZNQJCPJHMXWIT");
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
    msg.setTimeStamp(0.0394939956062);
    msg.setSource(16134U);
    msg.setSourceEntity(116U);
    msg.setDestination(7630U);
    msg.setDestinationEntity(60U);
    msg.command = 57U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KVUQMOPIMVSXRHNOWFMIGHYMOBWETKMLQVSAMOQEPGFUIDEXBKLZZXTXQCYKSIPTA");
    tmp_msg_0.description.assign("QJPPBLQXFVJTVNRJPIHTUILJKWTLZNITHCWBURLRCUVLENTFLZFJKEFPBVJDNALUANGPKSEIZKNZYPIACQOXVXXCJKUOQGZGFAAGVMBYYBFDEEXQCXCFXSTDTSQJISMWRZEOONKWZYTUPDLCFZQRAQYWEUOZMKBUSNWVFBTQARACNMIYWMMDJWGYGMFDGLGWDESIMEAAYIHCPSUVOIPXVHEDTGSBMRHMOGRHHQHOXHBLODCVUX");
    tmp_msg_0.vnamespace.assign("AQUHYXTWDKPTEZPEUOTQLGTDVYUVKTIZKBVBBGGAQTYZOKOYJEJOBRANSRJCOAWUHCHNCENSYVMXZMRMFFJVZPRXIABELGDTWUXZHJNDZZKOBQJWJF");
    tmp_msg_0.start_man_id.assign("JFOQFHIRRQTLMMIUAWKHHNZMZJLZDPSXKOPPYPACWMKGPCTLUTRESQEGUUAYKVJQEVAXPYJZFPTXSZHALOIXGWATVWOUGNUZXDYBCLGDTUFDCYEDLHARURBNQHJOMWWBSCZXQGEEYKMANVFCIMDRBCSSLPHXWWFXYOGDNVWXAHEDBILVFSCQTQF");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("KFHQOUAULHLXAIKWVRGXGXWPKZQHKEADPGPSJEMSEFIEJPKNIQEYZBBNYRSUFJHVBFFJDVZTGHEHAWHSYAAZNTTRHSKEPFKKQECIGTBCF");
    tmp_tmp_msg_0_0.dest_man.assign("AFOAIRAIBYKNOVDCQNCOVGURKXZOGHECWAXNWVCRZXZMAAPDBGCGZATJURYLPDZSVQNDWNSDHOHMQEYVOQSJMLRGMFRC");
    tmp_tmp_msg_0_0.conditions.assign("TVOFNHMEHGNHXAIURIWAAAUZEVDDTAPCOBYVQFKTGPFQSMYGWQKUWGJKCQEJEIWORYZMRQYWNLRFIRLBKCZEDYGHMCPXLUYJOZABWXBSVEQQESJXXHGSNZIOOJPNPVCSVOEMMFDUHCHPHKADDTYTUBGFBKASIZGBOSFEHPLTOWLNETYDQKXTZLURPNLYXVJVZB");
    IMC::Chlorophyll tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.697026432075;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DevCalibrationState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.total_steps = 109U;
    tmp_tmp_msg_0_1.step_number = 130U;
    tmp_tmp_msg_0_1.step.assign("IBCFAUUJKKHHEPRJZDIAHJWWIYYSXPHTDUYWMYFFPMLJMEGTXPRSFCNDBNXPHGCGGUVZTNRSIQLKMVPHQONVSYROKRPHLZAYTKBUEVZOMHCTYZDVNWONGYZFSNBGQBKXHOIPOERTRXSDIZQWZKEFNLXUCJCNMBRIDJFCX");
    tmp_tmp_msg_0_1.flags = 72U;
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
    msg.setTimeStamp(0.534915293302);
    msg.setSource(55098U);
    msg.setSourceEntity(69U);
    msg.setDestination(21869U);
    msg.setDestinationEntity(69U);
    msg.command = 62U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XEZLQNGTNTPYHQURQHMRIGNVVTRJCWTEUNVYWBFVESHYRFLVDBYAHJTXWQDWBDGJMWILJDSGLFHASYSJHFRFZWGKIAEIFBKFOPLIBHIHROAXJCUNEICBXWGVZCGPFXHZPKCNYUMCMCACEDUSSCAADNQZKYTVAQVMTWZWQRBSEPBLOFGQPSZTOCAOTEOORDQTULXDKMPXDWUPRKKIZNZJYMGNELZHDVUY");
    tmp_msg_0.description.assign("MMRUDXEDNXWEUAGMBFURLOOSWUWXDBSAFKOSSOMZYSFGZVRLHDCWTUWQHHNWAHNPUXYJZRWPMXAYVYERLVQAYXCJGKZBHYNCVTNSATRIWHBTVLRJNXHZIUBBKIDPKUOKNKJFDGAGIOBVYJKCXZPQEGIZPHGTIJEHDGLCZNQEPTZJGDZMSWMRRV");
    tmp_msg_0.vnamespace.assign("NGAITYPCOPDGF");
    tmp_msg_0.start_man_id.assign("VKUFPMJAVZFQECGAJGWAEYUSRIVEMEEVRYHISFISXOCKSCRBXQCQPURKPIZGHPMKGRDDNJSSTHOECLBSNTYYEGURWZJZKNPQBUYRAWDLGKYOVBHKABODFFOQBUGXEXVNQWIWRBHZZQXDJQIMKFOHVBHFHEJZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GDYRADETEQTSURRRZCPTJFBNFKGZVVEHHASEVLYCXMZEFWQWQIJC");
    IMC::Docking tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("VDUFXIHCMXXWPAURQIYZPOZOIAKNCQBYEXABYQTUNMJUVGGCHQBTSXSEBXZVZKHEUORRGUZTIK");
    tmp_tmp_tmp_msg_0_0_0.station.assign("DIZEIGLHJIUVSVMZHVMYRJFGVEEUTTPHTLALCQNBNKLDMLHAMPMUIKDNEQUSOXWEOFSLYFAVEOIMPFIOFPPJJSHHAGUKSNFSKNGXIWYFXCGLGYVZRRNCCFUAXKYREAXDCZRQRDTOWPWTTJNUD");
    tmp_tmp_tmp_msg_0_0_0.speed = 0.842103779267;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 136U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.841872050268;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0246967136171;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LcdControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 8U;
    tmp_tmp_tmp_msg_0_0_1.text.assign("VKVLFMDPYFIJYEDCBPGWWRNHPZYCHKQITSUBRNCXWHASODBAEVJVRUCILCXOOBFGUQQAOWOKPBTCTBKLQTJMILPMKYTBDCGGJZMAXFNIYQQVHMSXANRMYJHRQUEEUZFESLNWXKKJDXEAOWOGCZNISVO");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Pressure tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.872233028164;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.814929918881);
    msg.setSource(14660U);
    msg.setSourceEntity(58U);
    msg.setDestination(32604U);
    msg.setDestinationEntity(190U);
    msg.command = 25U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LJBZURQWYWHFILAVZDGRDYCJYMXCOHLBUIPPLGMGADFZTNZSVCBLQEOGQXASLLFTAHTTHKEZHNQEDSTYNKUXWFWJSHOUINLWVTOMFZIUGMRLOPEEZBREBGYBGSTBQKXCAXCAVRJSMYQIFZIFIURORNJVWEHJRMGBPOKMOCXJMTAYBDJFHAYVRYVSHKXNGNPUMTQDQIICJPAPXWZOTNWCELZPSIKDE");
    tmp_msg_0.description.assign("RYNDRFPQXSZSFWSPYQFRRBFVZQZMHNJZQVXIIKICNSZXTHATNBQFLFKMVBNDCCOMFLGKEYVIDUHUJBAMKISJMUCWDOYPIBESJAOKGLJTNMGKVIDWTAKRAXVPDCLMXLOSAMWPTYCMGDYYTDWJRERXNQUHZBRJOJCTUSEWHBTSPLECSGGQHRFVOUFDIOVZGZWWYQBKHXNPAFQEOTZNYUUXOLRHIMB");
    tmp_msg_0.vnamespace.assign("DZYIRFEHEQPHAZREOXEQEZIHDGUAMDWALKKCIQSRVAOGHFDQTUSVUERTWCBZSJCMRJBPZLVWNLMINOXAPDGCOMSWZFJSTUPHKOMIGJWUUXTZRMVPVKKWAELNDBCSUPKWKMDWQCUELHDSRYOYSVSULLBGCMHWBFWZFIUYNZXHNPBBIALTJOPFBAFOXYFJYTHQONQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NRIXXXAQZLTEWWLTFOVUTOJMVDMVVJUUGWBSYYCOELLATRMONRJDVZDMEKCXQJFPLORIBWSXPOFMGTTZVJJPYREJBAKNQHTDNICYHMUNVJUMRZQPIQSQDWAZCOQXLGRDNWNGHPBBXWATCHHBAKEFEWAERZMYSGTHNPDXGZOQASVWLVZKZZLBCPDYCIHBMXURIGDTYAY");
    tmp_tmp_msg_0_0.value.assign("FGGDFEGQVNZDNISGNQNAACHCPNWYTWOSFKATOEKOJKIHUBJISHTKMPWRQTENWOYZAKWDYDSTGXFTPWWPZSPRSJUKVGJYXNQOMIUEQXSHHUJFTCFQZCXYLSAMYWNRIBYUIMLLVZLBJVEVDBDRIE");
    tmp_tmp_msg_0_0.type = 202U;
    tmp_tmp_msg_0_0.access = 48U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SOZBMRLOSJXQDWQUTQADDDVFVKPUNHBJTBWPQOOOBIWLVFYSMGOSCALNQFKPKCHLLNTPYRFSDQXEYJJTOWXJXAH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OAZERIZQFNBTRQYEOGPNGWIHCJRWKQTPYPKWVTUCSXRTNVLUKDFVOPXFBGOXUVCRLCNKVSDHHEGDHETUKZEIMBTWELWUGRQEXMNIGZADKUJHBXPYSMIQNGNWCJVFLUAKXSBPHMYASGTQVYWYNVXCKJMVALLTJYMTNFILPSRMYKHMJMIJUCZZAJELRHVOYILCJYXOUWIOCFIDQQSOBBRFGFLHDZDFSSB");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.727970819014;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.243135483736;
    tmp_tmp_tmp_msg_0_1_0.z = 0.509102035576;
    tmp_tmp_tmp_msg_0_1_0.z_units = 117U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.530687788456;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 61U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.525252740927;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.464886889991;
    tmp_tmp_tmp_msg_0_1_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ADQNRUGXLQZKFYOXKWIVFYCQSGGUJLQFVUEKHCKSLAUGGGDWBNATPYWZHYEIXRWBPTQNJSYNQECOLBTYJZSDOOAYSPAVLHMQEENXKNCYALZBUMCPPXSJDKAMHUEDITCRKVGAJZSNXEJLDHFTMBRPPXPVOGR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DataSanity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.sane = 44U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::HistoricSample tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sys_id = 29299U;
    tmp_tmp_msg_0_2.priority = 31;
    tmp_tmp_msg_0_2.x = -9319;
    tmp_tmp_msg_0_2.y = -3574;
    tmp_tmp_msg_0_2.z = 27160;
    tmp_tmp_msg_0_2.t = -11620;
    IMC::Throttle tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.163105365701;
    tmp_tmp_msg_0_2.sample.set(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.214981258737);
    msg.setSource(6409U);
    msg.setSourceEntity(9U);
    msg.setDestination(35843U);
    msg.setDestinationEntity(221U);
    msg.state = 78U;
    msg.plan_id.assign("OFVZQFVOFGJOM");
    msg.comm_level = 70U;

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
    msg.setTimeStamp(0.135517431496);
    msg.setSource(29816U);
    msg.setSourceEntity(97U);
    msg.setDestination(20019U);
    msg.setDestinationEntity(215U);
    msg.state = 245U;
    msg.plan_id.assign("RUMSCMXTCHZSFXIJTPUDAQHPPRLAHDDUPZHQXPFSZWRFDCBCVTBKWBPREVMLLTQKJZL");
    msg.comm_level = 24U;

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
    msg.setTimeStamp(0.642737670865);
    msg.setSource(24698U);
    msg.setSourceEntity(63U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(42U);
    msg.state = 150U;
    msg.plan_id.assign("OVTQYOHOPHRJCIQKRWYDYZOPIWGFIGPUCUVHCGTSSSLDWOKQOLIULEVHOOMKBVIRHFDRYVJRZFFLAHMCAXYQDUIPDXJNRFMXQGLJXCRASEWHOHZWEYUAQEZJLNIFDAESKBZJXMKWZPCAKKINBKPBZRCEYETNKVQBTUBWTJGLMNLTFDXAWTJZLVUSHSAGEKHDJURGTQYMSAMDTMDBCNPIXVSNIYQBLFPSVM");
    msg.comm_level = 104U;

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
    msg.setTimeStamp(0.164839026107);
    msg.setSource(37165U);
    msg.setSourceEntity(111U);
    msg.setDestination(18528U);
    msg.setDestinationEntity(245U);
    msg.type = 201U;
    msg.op = 166U;
    msg.request_id = 42023U;
    msg.plan_id.assign("AXPQGNIKLXXOESERTHJOWNPTKAXFIMZEQEPVLVLUFBBTSVKCLZHMKVKYCQGOPGSGHBUHKZIZDFSCZJQXRMUFWQCSITEVFMGESIDOSAXYUQBANXCAUUNVHMNYIJMHNWFZWHQLDEBPYMIPYGGXZOSCY");
    IMC::Docking tmp_msg_0;
    tmp_msg_0.target.assign("WNTTSGJKXFAZCFDECISBFAPAVPMONHTUGQRXQDEJEPKBWQZTZVSJSWTPLZDBBJMYWPONQUANTUSWRLRGVEPFIAJMMNKESCMXIGHSNIXXUGLZPYMMIJDCEJKLPQRHCUQYBORRYLQOCKTVMHSWISZUPPD");
    tmp_msg_0.station.assign("MWZVNMVALTDELWJUXJMMYPDZNHKOUTMDSBRNFASKXIYGBZIGHTFOQEZWYVZUHCCTEAJBEDRANPNWXGZCJAEILMFAVHHQWQNEQGXKCKNHICSRYCQJTLCXFFUQCJWTYDOPXXE");
    tmp_msg_0.speed = 0.0895361619462;
    tmp_msg_0.speed_units = 225U;
    tmp_msg_0.lat = 0.0969279315992;
    tmp_msg_0.lon = 0.137395591023;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LENJDUCYVRJMROED");

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
    msg.setTimeStamp(0.628935643167);
    msg.setSource(58934U);
    msg.setSourceEntity(43U);
    msg.setDestination(40181U);
    msg.setDestinationEntity(184U);
    msg.type = 174U;
    msg.op = 169U;
    msg.request_id = 51510U;
    msg.plan_id.assign("MANCQDWVGMGUTVZDQAQIPGWCVZUCJYDIJNPADHQXXVBCDNEQLBAAQYTGYQJLDCSJVWADZFJLBKSKUOTBKHSYZPHMURKTSVWHZORR");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 828557115U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OODJHUXFEECW");

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
    msg.setTimeStamp(0.885194199486);
    msg.setSource(46946U);
    msg.setSourceEntity(232U);
    msg.setDestination(44265U);
    msg.setDestinationEntity(253U);
    msg.type = 208U;
    msg.op = 225U;
    msg.request_id = 12115U;
    msg.plan_id.assign("KIGAPLDNHUHBIWXFVVGLLHFSWQSHAOIYGAWGZPHZJUKHQQFUFVWFPNWIMKJIRTBOPEYKQZLDYYCUSPOAVPDYWZACRGMQFYTBELALZXPVCVNADMD");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 773584506U;
    tmp_msg_0.start_lat = 0.716099518088;
    tmp_msg_0.start_lon = 0.195489837965;
    tmp_msg_0.start_z = 0.554791807555;
    tmp_msg_0.start_z_units = 177U;
    tmp_msg_0.end_lat = 0.666109068059;
    tmp_msg_0.end_lon = 0.642613177351;
    tmp_msg_0.end_z = 0.884817540721;
    tmp_msg_0.end_z_units = 140U;
    tmp_msg_0.speed = 0.326755448517;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.lradius = 0.338648663898;
    tmp_msg_0.flags = 66U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MFYFIUQYEEHJMSNDE");

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
    msg.setTimeStamp(0.437218854836);
    msg.setSource(24956U);
    msg.setSourceEntity(61U);
    msg.setDestination(40188U);
    msg.setDestinationEntity(93U);
    msg.plan_count = 65426U;
    msg.plan_size = 2164605904U;
    msg.change_time = 0.924526424479;
    msg.change_sid = 60763U;
    msg.change_sname.assign("QJSCVWTNKDGFPEUVZFCGBXMUMCQYLNKNGTXOGCQJLYAQZZSYVIYRRWOIPJLFVXLVAPWLCKAWFPYXHYGVXPDQDRZHEENFK");
    const char tmp_msg_0[] = {-21, -100, -82, -2, 116, 69, -79, 69, 123, -12, -92, 76, -128, -85, 0, -94, 64, 108, -77, -9, -14, 23, -84, 122, -63, -97, 58, -32, 117, 108, -30, 13, -37, 61, -8, -23, -4, 126, 81, -60, -30, -71, 52, 83, 71, -20, 118, -112, 44, -93, -22, -103, 5, -55, 35, -11, -18, -110, -66, -88, 36, -84, -121, 67, -79, 109, 88, -41, -41, -128, 0, -84, 3, 39, -90, -87, 79, 66, 2, -51, 33, 36, -24, 88, 95, 117, -11, 89, -20, 77, 60, 33, 20, 101, 110, -1, 105, 5, -11, -39, 55, 103, 57, -104, -118, -53, -97, -40, -47, -105, 111, 120, 72, -117, 100, -53, 10, 1, -40, 105, -114, -68, -124, -45, -6, -15, -53, 115, -119, 0, 119, -118, 50, 85, 36, 16, -67, -119, -62};
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
    msg.setTimeStamp(0.275473799293);
    msg.setSource(11575U);
    msg.setSourceEntity(158U);
    msg.setDestination(51699U);
    msg.setDestinationEntity(194U);
    msg.plan_count = 28049U;
    msg.plan_size = 1069532792U;
    msg.change_time = 0.742211658842;
    msg.change_sid = 60303U;
    msg.change_sname.assign("YMNVTVIRMHTJUGAVSYUZXSZLPZJUXFRBKQEGEUYWMOG");
    const char tmp_msg_0[] = {-25, -15, 104, 28, -7, 42, -25, 73, -79, 7, 117, -10, -72, -99, 49, 77, 48, 71, -118, -111, 22, 58, -51, -87, 22, 56, 36, 54, 73, 99, -49, -47, 114, 107, 92, 66, 44, 100, -3, 93, 87, 52, -114, -26, -33, 99, 3, -100, 93, -119, -10, 112, -21, 87, -90, -22, 36, 98, 17, 108, -109, -20, -18, 67, -86, 11, 110, 45, -30, -10, 29, -57, 29, -46, 96, -62, 50, 94, 123, 93, -94, 78, 9, 63, -73, -80, 63, -66, -64, -78, -26, 76, 83, 28, 70, 11, 67, 25, -128, 51};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CVKBGZBUUCAMAGCSBDCIEXXXEFVVTZTYLSDJSKCRTIVERACMFSBZGZUKEWJHWKOAZGEBQQQEXIFVOLANPQKWYPJVNGTWMJTWYDIYPENALJHOXELMXODFUHUPTGCVOPNSIQZABCROHXKAZDTDZYQMGCFLODIWHGJDSFRLICISPNZPRHYUJWASOWIMXZPBSKOLYVLKNFRHJUNMMVKEBBNKMGBYQUQXHL");
    tmp_msg_1.plan_size = 47977U;
    tmp_msg_1.change_time = 0.686852287789;
    tmp_msg_1.change_sid = 33162U;
    tmp_msg_1.change_sname.assign("FNXASGUKMLWXERLNHFVFAFYIAXAUIPRJWRSJETEHCLMNBYPBWCYVBFKFQWXCOIQONJNPKZTKCHGFGNCSIWVJK");
    const char tmp_tmp_msg_1_0[] = {-65, 112, -54, -24, 114, 10, 12, 68, -60, -13, 67, -65, 46, 64, -56, 101, -70, -74, -44, 53, 64, -105, 81, 94, 115, -104, -89, 89, -94, 110, 74, 22, -77, -95, 116, 58, 1, -100, 124, 105, 105, 110, 50, 44, -82, -85, 104, 104, -6, 118, 94, 53, 58, 69, 105, 56, -30, 54, 2, -54, 13, 93, -4, -18, -9, -30, 109, 5, 101, -87, 110, -75, -6, -119, 3, 33, -78, -117, -119, 122, -114, 117, -69, -19, 118, 67, 64, -6, -41, 29, -59, 76, 38, 61, -10, 69, 84, -109, 42, -107, 89, -107, -14, -84, 86, -71, 62, 63, -71, 120, 67, -19, 52, 10, -66, 40, -91, -96, 18, 36, 82, -83, -104, -111, -51, -14, -12, 6, -102, -82, -79, 80, -26, 28, -82, -102, -94, -111, 113, 92, 55, 32, 1, 26, -29, -82, 25, -45, 16, -118, -26, -33, -25, 19, 109, 40, 18, 122, 65, 6, -18, 5, 68, -33, 51, -1, 119, 58, -87, -6, 91, -68, 19, 36, 114, 50, 53, 124, 38, 23, -65, 110, 49, -15, 79, -8, 94, 15, -24, -88, -13, -64, 108, 72, -81, 115, 104, -112, 33, -56, -54, -92, -74, -26, 56, -24, 16, 2};
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
    msg.setTimeStamp(0.28628808358);
    msg.setSource(10950U);
    msg.setSourceEntity(19U);
    msg.setDestination(12455U);
    msg.setDestinationEntity(188U);
    msg.plan_count = 32734U;
    msg.plan_size = 4002861388U;
    msg.change_time = 0.171715176282;
    msg.change_sid = 1843U;
    msg.change_sname.assign("NRREQASNCEUJPFVWIWGLTHTQARBAYZIVCRCZEALSVVSJBHWHCFCLXJFRGFPIGEKIFQLRUMEOASSDROOSBVGNNUXEKMOZWXUCAVPBNQVUONANCYM");
    const char tmp_msg_0[] = {112, 24, -84, 91, 48, -75, 86, -51, 8, -7, -40, -115, -51, -58, 15, 13, -21, 34, 5, 107, -5, -46, -12, 36, 32, 118, -11, 33, 13, -61, 51, -1, 85, -62, 9, 11, 46, 0, 98, -74, -40, 25, 36, -42, 47, -56, -33, 11, -47, -125, -67, 83, 50, -20, -107, -90, 100, 48, 111, 118, 72, -105, -22, 106, -14, -71, 33, 97, -76, 1, -92, 84, -75, 84, -91, 118, -112, 68, 38, 119, -1, 97, -19, -48, -31, -115, 103, 26, -53, -94, 12, -79, 21, 114, 30, 0, -47, -87, 126, -40, 7, 18, 98, 2, 26, 100, -16, -3, 41, 113, 21, 35, -103, 19, -57, -104, -39, -92, -12, -72, -115, 19, 24, -88, 36, 43, 75, 65, -96, -67, 124, 35, -120, -85, 43, 72, -18, 33, 81, -18, -60, -94, -10, 52, 126, -35, -15, 100, -92, -40, -2, 85, -50, 23, 36, -15, 5, -41, 80, 41, -82, -89, 34, -74, 51, 117, 94, 102, -101, 4, -41, 36, 1, 35, 120, 40, -42, 86, 98, 6, 87, -24, -116, 88, 105, 20, -3, -122, 37, -103, -53, 115};
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
    msg.setTimeStamp(0.43480262566);
    msg.setSource(33481U);
    msg.setSourceEntity(1U);
    msg.setDestination(3720U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("WZTHLGOTVBLWKUSMJCFIMGEZJMRTYNLKBNYRIDLOUPQLIKKFQSXBVKNTGJNGFWONEUSRPFEYFIAJEYHYBZBIRVHURLWWDDKRCKPUVWDXODTEDONMDCZXUAGMZIRLJQGXPCKSWFXSCP");
    msg.plan_size = 62292U;
    msg.change_time = 0.464106458811;
    msg.change_sid = 43161U;
    msg.change_sname.assign("PCPYHYNFLDSAGSHBECHEMLCUVIUQJURICRXWLXTKAUDJZPRFQMULBHTODIXJVWPBXSIMYOKVXGJZWNBNDLXJBLHCDUTGORBNCHEEZIGOGHGDKBVE");
    const char tmp_msg_0[] = {64, -83, -77, 50, 88, 110, -46, 122, 41, 92, -53, 37, 65, 64, 15, 104, 67, -90, -114, 1, 63, 102, -80, -70, -37, 76, -34, -8, 56, -93, -47, -63, -95, 92, 30, -125, -33, -8, -19, -33, -95, -59, 0, 93, -96, 115, 5, -107, -69, -117, 44, -124, -25, 61, 108, -62, 41, -30, 39, 0, -128, -28, 27, 27, -113, -24, 126, 45, -96, 41, -126, -33, 120, -24, -59, 80, -38, -49, 114, -35, 53, 123, 39, -21, 62, -51, -62, -19, 11, 25, -20, 77, -77, 50, -9, 88, -28, 2, 9, 54, -27, -5, 44, 113, 88, -55, -32, 70, -104, 112, -20, -84, -84, -63, -85, -41, 80, 59, 85, -121, -36, 31, 121, -9, -98, -35, 81, 12, -83, -46, -54, 76, 75, -71, 57, -97, -126, -20, 116, 50, -58, -25, -119, 68, -33, 46, 90, 14, -113, -92, 108, -47, 89, 90, -48, -120, -73, -106, 37, 37, -92, 69, 0, -114, -80, 106, 18, -73, -49, -91, -92, -97, -103, -61, 34, -88, 120, -44, -111, 31, -110, 36, -56, 13, -75, 40, 35, -104, 64, 36, 29, -31, 79, -44, -109, -59, -72, 94, -77, -53, 4, 114, -66, 80, 4, -24, 7, 47, 58, -61, -9, 4, 63, 119, -10, 3, 115, 100, 52, -118};
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
    msg.setTimeStamp(0.0176548649651);
    msg.setSource(22008U);
    msg.setSourceEntity(175U);
    msg.setDestination(15570U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("ZXTNWSWPGAQDDZEWICNDLXPQDHTMLAHCGEEUZLKQBMWGFYTGSMIDODIUEHEWJVWBXJEOJOWAURHCHGSBKWJVFPYANAPOLFINEXKVICMRRMFPKBUVDIMNXSRZPTBJAJZFZGDFLHTBTRKWDYZJ");
    msg.plan_size = 18905U;
    msg.change_time = 0.898341037201;
    msg.change_sid = 9359U;
    msg.change_sname.assign("ANWRXSFHZTRGBG");
    const char tmp_msg_0[] = {107, 49, -83, 48, -107, -1, -100, 4, -120, 36, -24, -35, -61, -65, 118, 120, -125, 24, 88, 82, 79, 10, 96, -69, 43, 70, 83, -69, 31, 20, 64, 5, 123, -95, 104, 51, -110, -89, 16, -111, 76, -8, -108, -15, 63, -76, -94, 87, 73, 18, 76, -112, -125, 30, -90, 51, -26, -35, -66, -65, -49, -63, 64, -122, 15, -26, 114, -38, -18, -3, 80, 13, 28, 0, 33, -56, -41, 61, 19, -9, -77, 106, -34, -39, -53, -6, 125, 70, -31, -102, -2, -94, -33, 61, 53, -28, -86, -58, -12, -114, 103, 70, -8, 62, -18, -75, 114, -124, -42, 107, -100, -34, -99, -113, 94, 73, -109, -82, -32, -50, -58, -91, -68, 27, -30, -74, 123, -45, 6, -18, 112, 99, -41, -38, 107, 85, -85, 50, -127, 27, -3, 106, 14, -68, -99, -48, -25, -73, 8, 32, 52, 81, -89, 121, -65, 62, 24, -116, 122, -86, 8, 84, 29, 90, 62, 70, -46, -19, -65, -4, -112, -67, -46, 94, -64, -11, 68, -98, 115, 13, 37, 55, -2, -50, -79, 114, 89, 55, -8, 66, 73, 22, -72, 91, 31, -119, -109, -114, -76, -46, -12, 0, -9, -62, 119, -26, 90, -109, -119, -61, -65, 75, 1, -100, 34, 121, 36, 77, -65, 36, -9};
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
    msg.setTimeStamp(0.156305076339);
    msg.setSource(22084U);
    msg.setSourceEntity(80U);
    msg.setDestination(777U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("CZKPQUXDQWWKBFTMRVVEWDZNAVPAYJXYGCIKXUQJJJPFDZTZSHAUZNPSTZXDRKUOOKVLOVWDULFLJBRSTAYCHSXBIRNEFFZVLIXKTZWHGXDSEELAWKURMSESTCGPBOWXCFCMPNVK");
    msg.plan_size = 43870U;
    msg.change_time = 0.922372077971;
    msg.change_sid = 33898U;
    msg.change_sname.assign("BHZLGFPYCVAHHMHETOWJKFHUUJREMJWWJSQDBATHMBUSRDBDCWQKDDSGNODOIYQGMOEFUOWXOKMBTJOSJBDLIIPFKZRHYQLFSAJNWRJWLVADLGULMMWEIOVLHQZCPYITP");
    const char tmp_msg_0[] = {-98, 66, -35, 37, 43, -122, 21, -104, -123, 105, -1, 25, 74, -23, -5, -11, -32, -119, 38, 36, 20, -68, 2, 119, 70, -106, -80, -17, 73, 85, -68, -98, 82, -16, 59, -18, 24, -86, 87, 89, 25, 66, -54, -79, 63, 102, 64, -126, -49, -34, 112, -38, -55, 19, 110, -126, 41, 54, 114, -53, -98, -13, 101, -47, -127, -64, 67, 74, -47, -85, -45, -6, 17, -13, 26, 18, 104, -94, -18, 40, -39, -106, -62, 19, 59, -89, -101, 82, 70, -3, -115, 7, -37, 28, -62, 13, -116, 72, 98, -53, -30, 110, 23, 84, -108, -15, -77, -44, 70, 29, -110, 52, 1, -40, 104, 33, 1, 5, 10, -10, 65, 28, 69, 101, -65, -128, -125, 112, -34, 53, 49, -84, -46, -77, 30, -70, 93, 90, -32, -89, 7, 62, -110, -88, -30, 112, -83, 80, 121, 105, -106, -13, 23, 89, -102, 49, 27, 58, -94, 42, -22, -73, 7, 64, 55, 45, -77, -121, -103, -48, -37, -1, 90, -3, 102, -92};
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
    msg.setTimeStamp(0.436992683795);
    msg.setSource(47805U);
    msg.setSourceEntity(31U);
    msg.setDestination(10929U);
    msg.setDestinationEntity(94U);
    msg.type = 123U;
    msg.op = 230U;
    msg.request_id = 5735U;
    msg.plan_id.assign("AKUIZOUVSOGPXNVDRANGARJJHRBNZCDWBVEJYACPLTQLAPIHLMJRISRKUFQLRRKNMJDOHAMZZMTDKVQGOCOXZMDRXCUGKTTDW");
    msg.flags = 48110U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 108U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("NRCRZLRTOEIHIYWFWNYGOIXQBPMOIIEUHAAHKCHUSCPMMUCWCFULLWDDRJRSVNRIWYVDFWCPVYGFRBUMUQSNOVYTPMRHEBKUDLAXMNKZFTCHBDHWSOWNQONQGFLKJTXBMJQBXOAYVJNESZGLFNQEZKWEUITXMCKAHKPXYIJDFCBQGPEYPG");
    tmp_tmp_msg_0_0.lat = 0.355020485047;
    tmp_tmp_msg_0_0.lon = 0.425388730637;
    tmp_tmp_msg_0_0.depth = 0.815879617721;
    tmp_tmp_msg_0_0.query_channel = 47U;
    tmp_tmp_msg_0_0.reply_channel = 162U;
    tmp_tmp_msg_0_0.transponder_delay = 44U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TIOEOPCPHIKIUBMVKMKZGVVBFLYBLPZBHDVJYJUXWAHESZRYHTMGERHWTHMQCLLPPXTXAPDTKFLWXMJIEIUXNBZFJLQRABEMMQKWQCSBROIRYEIQTSROSGFGRIAOVDKGKWZUQYEVOSKHVJWJZRULUPDSXTXMOSIOKPSYXNDRJJNEPDCANBLYEFCBFLWYNXCAEGSWKFNVNDTAQCUJCDUF");

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
    msg.setTimeStamp(0.430473117121);
    msg.setSource(39967U);
    msg.setSourceEntity(227U);
    msg.setDestination(49992U);
    msg.setDestinationEntity(117U);
    msg.type = 81U;
    msg.op = 144U;
    msg.request_id = 62203U;
    msg.plan_id.assign("SYMZKCTTIRUFTZMOYLAKYFTWUFBEBWSGSPHFMILGCLCWAXLBVWJBDGKCNKPNPHWHZKHFZVISNTAXTGMDYJXQLIWHXMZNAPAUTJIXDYGZDMXHEQSKLRCGQOEJQQYYNYPJWQKRVPONCWLNMRI");
    msg.flags = 57471U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.799506218714;
    tmp_msg_0.beam_height = 0.890827372915;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("REZWDKNAIGWHWRWYJFKYPUZURJSEMZYPPBBYLTVSOYGGXBCLMPQJKRDLHYOYCNVACPDWLACXHFLIBTHYEBHSCLQKOWFPEDFZUVFEJFGXQUAQBGKIJSUXKZXGSVSIFAAZQGHDVXATTFMNMGLB");

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
    msg.setTimeStamp(0.0497434619415);
    msg.setSource(6494U);
    msg.setSourceEntity(218U);
    msg.setDestination(42248U);
    msg.setDestinationEntity(13U);
    msg.type = 244U;
    msg.op = 121U;
    msg.request_id = 22854U;
    msg.plan_id.assign("CGKGRHHJCZPYYELMTRUKQDKFKUSLXIBCDWTGDPO");
    msg.flags = 3215U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 186U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YOUAXTYRSHEFPUDRQCDACGLUGGBYWQJLSQJKYBSKFMUOPIHKRJEUZRLRGKLZKMFNLINWAIGCHWXYVLJRUNQOCZUTWCKJGYTPEEJXQZHFRXUTAORBNIKAIPZMORCXCMWGHT");

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
    msg.setTimeStamp(0.0354598468479);
    msg.setSource(62467U);
    msg.setSourceEntity(230U);
    msg.setDestination(27497U);
    msg.setDestinationEntity(125U);
    msg.state = 218U;
    msg.plan_id.assign("BXAEEBETCBGIHVNWGPYHKXZDAZWEOCCSBWGQZJTECUSAUTXQCHKSPQNJODWXJJSRUOGMMPJHLHRQDDPOEOAUGCYBPAMUIHMYWKZFXXYZETVXQVDEYGLBLPTEMSZJOWALICFBFTWRKRHJVTARRXQUITQYYPXNAHQAKFCTJNLFJJLELICZFIKSWDLUMIBFUGPQMNCXIV");
    msg.plan_eta = -2062802281;
    msg.plan_progress = 0.0404276408552;
    msg.man_id.assign("ZMZQZRRUTGZAWOKLQSFUXYPCQKIQRBMXBWIQKZVEUVPHZPCAUBYWGFGABDSBIZHHGFKERNMGKUAINZSJJEIDFYODEMMWNAZGLNVDAASHAEXEGZDJCJJDBTBISKFXTYYFURDXXQUOHXVHLNJHFTOVMCQCCVDRSKHJSUSNQMNECUFHSOEBBYGKPNPLKMNLJGPVPTKFQAYOUTPXTYPTWVXRQLWPENSWFVLOBRTHXJLYCMJOE");
    msg.man_type = 881U;
    msg.man_eta = -185760115;
    msg.last_outcome = 156U;

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
    msg.setTimeStamp(0.160791011407);
    msg.setSource(55698U);
    msg.setSourceEntity(93U);
    msg.setDestination(13469U);
    msg.setDestinationEntity(57U);
    msg.state = 22U;
    msg.plan_id.assign("KFWHRQOTZIAZNESCVABWRGIYJNQNFZHQBZNDEYSWIZDLCMPDVJROQPMGJFQYUTAOWIVBJLCKXKDWAEQVLXBVBEZATBGKXGKCVRGWYHDNVCKEHSMNZAFMYRXGSSUMHRRHFFCOMIWSSQDHTZLNDKR");
    msg.plan_eta = -1698784391;
    msg.plan_progress = 0.65064756968;
    msg.man_id.assign("NYZHOTIIMUKKWRZBJTUECLOJDVFSVRMGVEXOKSCSQJYVVJPSJPBEIEDUHWWFQUGVMKHUAMRQFLQARCWUXFGVZIKBDMDXHPZWJIQKDDQBYETPEOXKXEMVWUZAGOPCPJCNHTDZRANFLYDMQQSAYFISUXEAHNRVCPPYLIZOSJGVTKNBJKSNAGBZGFXCTQULENWGBYUMILEHHYYN");
    msg.man_type = 32973U;
    msg.man_eta = -1818589799;
    msg.last_outcome = 150U;

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
    msg.setTimeStamp(0.271117938146);
    msg.setSource(14374U);
    msg.setSourceEntity(156U);
    msg.setDestination(18527U);
    msg.setDestinationEntity(30U);
    msg.state = 175U;
    msg.plan_id.assign("PZBBZSMFFJPCYFSNRLCWTXJWMUH");
    msg.plan_eta = -1142328617;
    msg.plan_progress = 0.148700666524;
    msg.man_id.assign("LPYBMPVAAKIKKEBQJSCEKGSQMYZNTJSMDDSAVQCNXEOXZCRBLPKAUZLIPLHYRDLQMJZFDDGJICNJ");
    msg.man_type = 47374U;
    msg.man_eta = 14887310;
    msg.last_outcome = 188U;

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
    msg.setTimeStamp(0.745437550744);
    msg.setSource(46727U);
    msg.setSourceEntity(124U);
    msg.setDestination(5256U);
    msg.setDestinationEntity(249U);
    msg.name.assign("ULUFFQBXVHXDKBMVIJYOJTCONWDEQFGGFRPCMOCVARYAFJVIY");
    msg.value.assign("OEDSVBIYKZYTINZMUDDBRAZKWGPVBZJNEBBUVMKFBTGMZWYUXFIOMKLPKLPJXUPQBXB");
    msg.type = 188U;
    msg.access = 54U;

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
    msg.setTimeStamp(0.526134310516);
    msg.setSource(56740U);
    msg.setSourceEntity(19U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(195U);
    msg.name.assign("APZPMVGWRMPXNKPIBWEMKCLASXAPPEVLQ");
    msg.value.assign("ENWAPEDPLVSSKDNATHYAOUCHQZSQUOSJNQBADZOWIBLGGCGOPIVPXJRXKUWSCKBGWKQBLTODYTTNQGLYOYHNWHPKFJHSKTWALFXEZPILNVCJPDHBFLEHXYVJCNRBSTDMMQTXKIABWYJDRQWHZHPXERXGDVEEAUP");
    msg.type = 58U;
    msg.access = 31U;

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
    msg.setTimeStamp(0.730822026185);
    msg.setSource(47108U);
    msg.setSourceEntity(133U);
    msg.setDestination(19273U);
    msg.setDestinationEntity(191U);
    msg.name.assign("VRRQVYLPDLVNUXETFSBCPZQDKGCSOQWHTCNZTTEQDBLIAEFTIVCLZHAIGTVZRADAFSBMGGUOXGYERFAXZIJWSSNOAPHFHBLSGGPUOUKAMWNRYTKNPVBIFPDMHARTJXQPJREOBMMFLJFHGWJIYZDXWEXJODUBTMPZHQTSKCYLLAZXWDRRNOKXYCYQWFFGKUSHNPQWGAVJUIZ");
    msg.value.assign("SEUDYDICRXNFIHAXVSVNNWCVQZCYLZNBNSEEOGAIJFDGKVXZWPRRQBMQURNFNLMLOTPTJZCFXCWRSIETMBUYRHWJYEOFAKXDVXPXAQJZKVIMZSCTWTWMMEHHZDMTELHKDHPAPPKGDHCQLRWZBXV");
    msg.type = 170U;
    msg.access = 86U;

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
    msg.setTimeStamp(0.696342372346);
    msg.setSource(16202U);
    msg.setSourceEntity(243U);
    msg.setDestination(25125U);
    msg.setDestinationEntity(12U);
    msg.cmd = 151U;
    msg.op = 135U;
    msg.plan_id.assign("GRNLOQDEFRFOYMHWCFKFYYOXRZAUCUCJBUJZXPZSESQGRIDHJBTABKGSNWJUHOVJBPLMSCPTJCKEABEHLVDROQDGFAYYIXQMQCPEXKJHVTGMNZQXMZZZMRRONCZTFBGEUWLNWGSQUYVJVUHABPHFOSFPNXWWVWXDAVGPSLDMBKFNLSUBWRH");
    msg.params.assign("BWIEJUQFVXNAECCUDMMMLHTFDOOMGRLOVNZLDPBTCSSJVLFMKHVEYEIKSAACNAPTWAUSYHINQWSKWUDCVMDWQEOCXBKCPZGHUVEXHABKFSFWNLNZTIRDPOBGOKDOJRYLXVNYZFZOLRIXWUUSJKZJRPFGXYFYQBBWQTRHKTDCIHHRHYMUGVAAOCEFZYLUMZIUIWIHNGJDQSPXFDPJSQQZXBIKPMETJLXGTJBVRGGERTQBSLPARMNZEGKOJYCY");

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
    msg.setTimeStamp(0.672855708407);
    msg.setSource(7337U);
    msg.setSourceEntity(181U);
    msg.setDestination(1262U);
    msg.setDestinationEntity(114U);
    msg.cmd = 14U;
    msg.op = 105U;
    msg.plan_id.assign("SRWGGETWOSAXSINLROKLODPRVCFUHTFILNCCDLZZXKGCJRKVNQYCFNDCZLCDQTIKNYJVWBMQMFRSMEOIXGJPRKLNMBDGRYOIVAUAXFIJHQJIKJGWMGDTYLPXMUNWPZPOHKHSXBAASDUNVBEEEAFLKUXCUALBBYZKEPRAEMYHPLFSQXCTPQOYVDHPVMRZBTMJUMKYYHDGUTZEX");
    msg.params.assign("FOKCRTNFFPIWILPFBRVQLGSTPMXSIYWRUVNH");

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
    msg.setTimeStamp(0.38810430433);
    msg.setSource(49207U);
    msg.setSourceEntity(202U);
    msg.setDestination(7880U);
    msg.setDestinationEntity(90U);
    msg.cmd = 87U;
    msg.op = 217U;
    msg.plan_id.assign("AHVPRNYMWYVMKAJOFGTKRDQRNJUCILXWPXOZPIYPSDOPZHMZNBAZJNQQNGZESVSALCCBKKBCPGHJYLITQQVWAODJPCUNEBOQLKOGSXOMKXARBEYUZMGIABQHIVUDPJKECDBXLMFAIWFTUGFSRQYVGERPSUWSQNRIJSBFXFDYHDHXVLDUIHLITTYGVETSOLYJZEZXLCEKOTHEMR");
    msg.params.assign("ODBLQMGGCPUOETTQFSHCBKXNYFTQZUOIPGOPPBNPZSKICIGDLVXMUUNGYGFTVWXZPIQJPHDAFMZAHQLXDVWNXOBSEJP");

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
    msg.setTimeStamp(0.798821746459);
    msg.setSource(37754U);
    msg.setSourceEntity(22U);
    msg.setDestination(36209U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("ZABSPSATOUGNXKLFPROERRZYVSCXZSTRMUJEJTRHUHAQMWGOYOFQGFZHDKRIUOWESMOVDTLABDNHNLKKJLPIQEXIZDKCKMSKNQFPINPIEMWXAAYYGHDDABFGJMGSUTTHVBKXIQINPOOWFZLBONWJCVHGRBMECRQKXRAUTCPYHUHXJVMVEBHNOPWZLDGJCXYDVTUYVFZFYIAWXBIWCUYWTFFDQPNQJMUBRT");
    msg.op = 6U;
    msg.lat = 0.92762836142;
    msg.lon = 0.999284156029;
    msg.height = 0.0833809904451;
    msg.x = 0.247258004396;
    msg.y = 0.275845185151;
    msg.z = 0.438331986905;
    msg.phi = 0.709368379804;
    msg.theta = 0.0602955356015;
    msg.psi = 0.947160499443;
    msg.vx = 0.526577671659;
    msg.vy = 0.386695046538;
    msg.vz = 0.0727688642525;
    msg.p = 0.00229721414551;
    msg.q = 0.791842054395;
    msg.r = 0.00231709040334;
    msg.svx = 0.471180589787;
    msg.svy = 0.136947972485;
    msg.svz = 0.725516179529;

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
    msg.setTimeStamp(0.12018024643);
    msg.setSource(19281U);
    msg.setSourceEntity(60U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("FZACFJGDPWACAICSRQKCGPPOJTWIRMLPUNDDSUCJIAVHUWPZMLTUAHSMYXGIGXYFWOGYMEHNTUXIJPBKDQFGCFEHUYBRWELEKEHAQKEDLFBNFAIVYANXWRRBAWRRKXGZMGMVFBBMDPNCOGJUOEXZYZSETOHTYFHCVWDOBPDLZQIENXQVFSMJYNJIKXLRKKTPEQLWTWCVHGYRUXOBHQTVKSZSK");
    msg.op = 111U;
    msg.lat = 0.0781819476423;
    msg.lon = 0.615379204442;
    msg.height = 0.447353332997;
    msg.x = 0.165292942644;
    msg.y = 0.757670846662;
    msg.z = 0.521056136245;
    msg.phi = 0.802186772324;
    msg.theta = 0.00363302111222;
    msg.psi = 0.520314469108;
    msg.vx = 0.259544398332;
    msg.vy = 0.721215442337;
    msg.vz = 0.658419461646;
    msg.p = 0.24221096306;
    msg.q = 0.815489936004;
    msg.r = 0.635540438591;
    msg.svx = 0.204383426456;
    msg.svy = 0.466034779828;
    msg.svz = 0.740957457542;

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
    msg.setTimeStamp(0.908335784042);
    msg.setSource(11954U);
    msg.setSourceEntity(253U);
    msg.setDestination(29650U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("OWOTTBZKQDRKPKKHQWBLXXDTWFTTEQQAMTWMGWXLFSHQELIYBXOGS");
    msg.op = 8U;
    msg.lat = 0.73291279525;
    msg.lon = 0.148944516155;
    msg.height = 0.256850479161;
    msg.x = 0.865417872231;
    msg.y = 0.500812961085;
    msg.z = 0.283992929144;
    msg.phi = 0.525535418854;
    msg.theta = 0.828665039044;
    msg.psi = 0.586749160828;
    msg.vx = 0.693143823684;
    msg.vy = 0.273891965221;
    msg.vz = 0.850917648229;
    msg.p = 0.105440849598;
    msg.q = 0.0666650513013;
    msg.r = 0.108689710056;
    msg.svx = 0.366773131626;
    msg.svy = 0.90916542952;
    msg.svz = 0.719589284924;

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
    msg.setTimeStamp(0.767493538064);
    msg.setSource(47792U);
    msg.setSourceEntity(230U);
    msg.setDestination(4141U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("FJDKRJRSGHDSCYVFQWCGPZLIYXTGQAOMFHEZYTTKVMDIXBSUWCOGCSUFZZZNKSGVLUJTNKIBUNBHEBNXUIUKVIGHWEDGFJRZVTECIDEJELYDOOAPYYAMDPPWNVAMEZRYSMQLRRUP");
    msg.type = 152U;
    msg.properties = 229U;
    msg.durations.assign("ITXYONVXVEFPXTDSZCTTMMHIJAZSNQVXOFDCPEBKPFNHIZGBHKPZMJLRSXYWVFWMRGAAZZFIUHWGZFKIKRABCFUPSCCJUQVGFLJQEHHKOUUAODCKLIPODQNCDGASQQNOCNDWYEAPLJTYIERTOZQZSNIOLCUEJG");
    msg.distances.assign("FRBSOGMQCEDUPQIQVOONLHBADXNYCKWCAJPTJYEMUDPCMRRLJIUBENZXFUPDALZKIUVTEHYFKDMAQUBPZGXJBSAQFKTCTMORRXMRODALVRVHVKDLIWHSUTAFUGMMFPFYWYEIGGSYVQJCRIFKUTBAZKIDEENJOEJTQLMHUMGNHNPHIOSOZWJWVISLNQZSXJNWDGFERGVLXLGY");
    msg.actions.assign("PAPNZNTLFSGKDWKTMUNHRFQTMGKQLXUXOTUEPCUJJSAYHOHDBPZVYYBDQQSWPMCJLJAEHWIZWNYDUOGVZTKMZYWYCVNLKYPLVLGAIJITGBLBSFCFEFGBZBNAWGMXURWQRXKOOSDVUFBFSQECLNJQXXXSABMMIJIYJEDBEVGUICJCRVRKFGQXGVMYK");
    msg.fuel.assign("IOONNTCLYKJRMIQKIRZCSFVEUYOVDXRUXBWHYVWINPWHIONYZMGPZVUVCCTVULNQTBJSWGHSAWAJBGENHYNWGZ");

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
    msg.setTimeStamp(0.277477428712);
    msg.setSource(1505U);
    msg.setSourceEntity(55U);
    msg.setDestination(58867U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("JKWRHZGQQAUJLRPDCMCGSIOONFVBNXPKCRUPZSDROAJJMOURNSXNKVOGMYZHVYMJETZAAXICPKSRUSLCXMJUKPDEHLGWVRMDNEVVYUFZABDBUOJKSTQONWPECFBHQZXHZWGYTIFBOIHEWFYFCGFFWTPPBJXTQKOBRXUCMPDSCEQJLAGZTQIKKRCXAEEHQZQNQGFFUDESYKXDLDJETGYLLOWVNMB");
    msg.type = 184U;
    msg.properties = 105U;
    msg.durations.assign("IYLYEGNLIQRVIUPCYLAPUPBWBHEHLLDIGJHOBCNKQJWSAUSHXPVAUZFFYHMBAOAKZGRWVUNMPTJTRMEFQZKHJUOS");
    msg.distances.assign("RJSMVCBNIAUBMVFUPQFQACND");
    msg.actions.assign("WQJVKWXJQJIKRNFPELCTQXQSNUBPWKMETZVRIRZYALARMMSIOBSBKBEZFHFMBUESDPOGAFLCESMIMZVOLHXJMXDRSSXNHGIRNYDVVAEYIGMQAUQHGL");
    msg.fuel.assign("YLVTOWJQRHNUIFUQTHARLGNWLLXCZUEYRNVSQBCIMFWM");

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
    msg.setTimeStamp(0.316479324402);
    msg.setSource(34356U);
    msg.setSourceEntity(219U);
    msg.setDestination(59594U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("ZXOGMTZVSXDGJPJWYRAWMVDVWNBPNKMUHUISOOWTROBHVNVEEURUEPKXHTMCPGVCYZQWNNTNZWEDODKYTLFNJRHKIJQBIYXIMPCAYZKASKAAFFKOZHANGLKDGSMZNRUYPOFQVDFTUSQALEFXSBSYZLAFXTYQVRKYLGQPLZJCHZRMJBXGWLCLAPFJJDNLIEBPOSPXGYOQWJBSI");
    msg.type = 159U;
    msg.properties = 88U;
    msg.durations.assign("SJRQGYEMAIEDTXZHUQ");
    msg.distances.assign("HNSBVVCDTAXJXAEFILWFASRJEWDOABMJKBAINNOWXWLRAAFVVPVYEYHOSTZLDSLTPJ");
    msg.actions.assign("EOVSDEQAYPHKEHMGWOCYLETURNTVDKNKXTRLMFWQSFCRKWHOYDIGRQPXJRQUIMYPDRAZGGJUHUXSYJBSGEFDZPRVWUFPKKOCLEICMJOHXSBAWHIEMANAFNBWXAVJWCCVVDBMLHNRSFGQQDEUPJVSUXOXEVIEZMFSLINIQXZWDQZYOKTVKRLPKT");
    msg.fuel.assign("VAGJCZDXQWNWTVWDOPTABHLPTNFLGCXRMOHZLMISNGXQUNMPHIPYRSYZCNWARVHCXPRPVRLISKLOVVOJQXGTFZKFUQXJMAAIDKMTNEFORUODSXIGDWDSKUCIWQEZHRBMFYAHLMZXFUBVVZKUGKXYHWNTIIRABQMEJOGFJLCNUCQNW");

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
    msg.setTimeStamp(0.599114232816);
    msg.setSource(39305U);
    msg.setSourceEntity(1U);
    msg.setDestination(16560U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.421771632972;
    msg.lon = 0.603076790742;
    msg.depth = 0.578447143509;
    msg.roll = 0.175480528007;
    msg.pitch = 0.0243804213379;
    msg.yaw = 0.555882984036;
    msg.rcp_time = 0.0857012121725;
    msg.sid.assign("GDCOONLWRRJXFAYXTBNZULBPQSMIWJQTDCKQSFVTETQUIIHNVZEGJMZETMPYMEUMDRUCSXH");
    msg.s_type = 15U;

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
    msg.setTimeStamp(0.134207949325);
    msg.setSource(62485U);
    msg.setSourceEntity(111U);
    msg.setDestination(38509U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.562134395643;
    msg.lon = 0.487849209937;
    msg.depth = 0.403975206023;
    msg.roll = 0.404873382586;
    msg.pitch = 0.198706426737;
    msg.yaw = 0.0661788142642;
    msg.rcp_time = 0.353064366883;
    msg.sid.assign("MNUDJEYXQLECJBOCAICKXGTQEEWXRSHVPHZHHUOVMRKJWPILOKFZEOGXRIPWJBTLENSHNZGJUZQITVDRUQFVUATLYEAQCFRBOQVXNXUSFIHIBRFZYPYRUXVM");
    msg.s_type = 244U;

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
    msg.setTimeStamp(0.889885592885);
    msg.setSource(29371U);
    msg.setSourceEntity(37U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.0930184154977;
    msg.lon = 0.0658776250114;
    msg.depth = 0.076212723591;
    msg.roll = 0.544716543698;
    msg.pitch = 0.694306207066;
    msg.yaw = 0.867688486707;
    msg.rcp_time = 0.502759987873;
    msg.sid.assign("CTOFCWCFGNITZUXLAFYHGSEFRKTMBVJLGNDIIDQIOZUPXWKKZTCAHHSJQEWTASKJKRNPFSNSRCSTMOXYYWGAVZLMQOCPZFLHCLPORNUQXKNVZW");
    msg.s_type = 2U;

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
    msg.setTimeStamp(0.860517988404);
    msg.setSource(6666U);
    msg.setSourceEntity(103U);
    msg.setDestination(7612U);
    msg.setDestinationEntity(98U);
    msg.id.assign("JTPPOPCXLXRMFBALZXPYMICRCPEVDUMNFUBLKWBEYKVPDDFJTGTQZMFCVNTVCDJHSFJMNCMFJQBJIBIVYBXLYRMKFZCSSDADOOYZRHHDYZVHRESYZGQMADZJFSTQIRTIAHNLIMSWHKNAUTBAHEPUEMEWXPWGNCLCREJXUBPKSXLRVOANEDOKLGAGQYVLEOWSU");
    msg.sensor_class.assign("EYASYHLGTKWQIZYTNCHIXNYVSHBPBLCBOZFCFZDEEDXBAZULZNAGCYWDLJKOAAGLSXKKXYERMHKRKQTPKMRMDGJIMBVLCUNKFJECQVZTEWBWLDHDDGEMPJAMVLLRUOMHHBMQSMWFYUOEQXAOJVUTUSTPIP");
    msg.lat = 0.200226642523;
    msg.lon = 0.158245872546;
    msg.alt = 0.0685536108782;
    msg.heading = 0.182325793788;
    msg.data.assign("FGVGBCHWFAFTKBRRCTJGZNRKLHTCBBFBMNMLUEDULMQWXKWRNVUVERCCXPYLHXJZWPYSKZGJWXPNQHGDOVMAXLKIQMYGRXEZALWERMQYTEKFKPAAILYJTQAECOMOKWXDTFHIMMPWQNASYNHXQWKODIIEYSMEYJZJFQHAOHRJZUPVEOXBDHBZIGVUFSTOW");

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
    msg.setTimeStamp(0.36330970097);
    msg.setSource(26350U);
    msg.setSourceEntity(90U);
    msg.setDestination(38929U);
    msg.setDestinationEntity(154U);
    msg.id.assign("OZIDBWNNUIMLQIKKAZRPQMBRCFTNGKWUMIOZLQLMRCMXAIEUJSPCQDPZVPAKXVAUXVOEWVYQBRQZTGLPFQKFPLQSPSSBHKYWEFEBZSTCEPYLGKTGEZEWMRNUETFEZACJVA");
    msg.sensor_class.assign("NZNUFRPZNNPBTUIFVCLQQYNSJPJYWHEUBKLSTYWZHZFDXDHDJNWHUEPAUDVFNOYJHYT");
    msg.lat = 0.72601089629;
    msg.lon = 0.755061718884;
    msg.alt = 0.6126730454;
    msg.heading = 0.338817655616;
    msg.data.assign("SSPODSDFSZJUEXENEZJEVUHLIYGYSJQKORAMTIQEKHWKASKDZAPXQPLMDCGMWADHEOMTLABTAYVSWKUPPTEOTLSJLHBJKFRNXGDLHVDMNZLDONLZUENZAYUSFPICBILIKCDWOPMXQMPNZCHFLFQTJHGNRVVCQJUIYGTRCPHHDEICBVVKGWTGMJCQYGBBMWYYQUYPVQIXKYFRJBWOVBRGXOWRBFCRUZBAEFKTWRJSXNZM");

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
    msg.setTimeStamp(0.491021758586);
    msg.setSource(50828U);
    msg.setSourceEntity(71U);
    msg.setDestination(14811U);
    msg.setDestinationEntity(98U);
    msg.id.assign("CSDHSWRGZUTEHBAYPZYHHUNNJMYKHOZXRKTXAABQEUYQFBIJYSQPWFRIDWBLOUVAFVXGARLOYVZKVUJMARLXWOBXLDKZRMNTPGXFIACNILATOYEUGQVOCINMSNILDCFWGNFCMHJGMDAJWUGETJFKCQIBDBETBZJPFIMGOSJSZVPDBXTIZHCDR");
    msg.sensor_class.assign("CDQORWXJLVPMRRQQGGASSMXLIFGQOTVEPMHAPHZQQDFPDTNHZBCIFLORJGUBTSVZPAWCZWQMJKNKCBPVTDEANXOSHNJXADXIVFDHOITAOKXRYYMLCIXBUMCFGEBHKFUWIJAIDHWSWKJUTTNZJLLXENEEWLHEZTPDNOVCNFUKAGDLKTLWPQYJDSSMZGVOMBLHOTJ");
    msg.lat = 0.862754328839;
    msg.lon = 0.198661645815;
    msg.alt = 0.449053694198;
    msg.heading = 0.0228167933513;
    msg.data.assign("FPSGFBVITNGDQKWIGIHQRGSUCDVL");

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
    msg.setTimeStamp(0.388302082775);
    msg.setSource(14833U);
    msg.setSourceEntity(88U);
    msg.setDestination(10160U);
    msg.setDestinationEntity(181U);
    msg.id.assign("QPRZMUSZSDXEGKRSYDESDRLVNFWICQOQBOXUVQVHROIVUJVPCMKMRJAMSLXGWBUARCYTNIWTKDQGOLIABZSSFONQKMXGMLBYEWGXIFEUUEAHMWDCLPSEBPWIQGEBYVNFYFTCDOVJXHRHVTWNZJMRGHPWLATUGOTIPCSJFBEJCH");

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
    msg.setTimeStamp(0.361110262418);
    msg.setSource(42285U);
    msg.setSourceEntity(58U);
    msg.setDestination(64026U);
    msg.setDestinationEntity(127U);
    msg.id.assign("TYTOIFPLYUAJURTCDXUOVWCOKVKYINSTDYQPKCQNSMUCOLWXIROBCOAXNYVLOMLGFKTRDQMXLBLLEZRPRFELBOQGHUNDHHPACBIMQWZHENCHKUHZZCEKRUXAVZJPZXUQWKWFVNYSQFGEDTHLBKPJJRQFWXVZSPZPHBMTRIEVHAFEAGTTBJYSMFOWPDUVYRLJDHMXDXPGBQGGAM");

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
    msg.setTimeStamp(0.363601751549);
    msg.setSource(9071U);
    msg.setSourceEntity(213U);
    msg.setDestination(12175U);
    msg.setDestinationEntity(230U);
    msg.id.assign("BESHYSQKATTCRFJKPKIVEZGREJFPXMZKDBGDBCDANUQMZALDEVZNLIOSIWGDFKNKDNPSOMLORPSWZWIDQYMCKMYAOANJRUJRUAHEHPNTPRSFPGWQOXJOFBBVQFJLWJGXHBQZFVUAKTGLSKBBYOIAUO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TWGLVREHNFYZAWNXXUVOURIDJEVZQGJFLXCNCH");
    tmp_msg_0.feature_type = 241U;
    tmp_msg_0.rgb_red = 248U;
    tmp_msg_0.rgb_green = 80U;
    tmp_msg_0.rgb_blue = 131U;
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
    msg.setTimeStamp(0.808915781953);
    msg.setSource(35426U);
    msg.setSourceEntity(212U);
    msg.setDestination(14462U);
    msg.setDestinationEntity(195U);
    msg.id.assign("JRGOOSJWHZYOKSLZQNADLXFUXBVTIMETBMOCYEGHIABWNPAATOKTXYCJDQPMKSWQZGLHAHOTRIUYTOBQMOCZEYSCEXRR");
    msg.feature_type = 89U;
    msg.rgb_red = 176U;
    msg.rgb_green = 171U;
    msg.rgb_blue = 248U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0950086318344;
    tmp_msg_0.lon = 0.872936047928;
    tmp_msg_0.alt = 0.234232003004;
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
    msg.setTimeStamp(0.966197892367);
    msg.setSource(10280U);
    msg.setSourceEntity(30U);
    msg.setDestination(4088U);
    msg.setDestinationEntity(114U);
    msg.id.assign("DRXYVOSJVDFYWEQRGWVCDXFABJCPRRKWWLVSDCSZQSLUSXNBMGALKEDIOGHQYVZIAMGJPGYYCFFTDCZLMDPTZWUJAAVUHSHFKXKOIWIBHDUFPYMYCAGCQORBQRZXMEWEPKQHJNGERMZIQTOSVJCUOBFHPUTNYOBWZGIBNWMILZHASTETNPHBXJDVEC");
    msg.feature_type = 141U;
    msg.rgb_red = 4U;
    msg.rgb_green = 11U;
    msg.rgb_blue = 103U;

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
    msg.setTimeStamp(0.216491416353);
    msg.setSource(5111U);
    msg.setSourceEntity(76U);
    msg.setDestination(58314U);
    msg.setDestinationEntity(215U);
    msg.id.assign("PYJJHXELUSGLSKKWIECPHAKULNBPSRYMDGHVZHVTAVHUVCYBHDTCILBLJSOIZRHXKFFFNLRCUUTDXBOPNTXRHCJEYQXDTNFPFLZCMQFWMSNZIJMVPKQDDXMODSJNCZCPRTKLNAKBG");
    msg.feature_type = 53U;
    msg.rgb_red = 222U;
    msg.rgb_green = 182U;
    msg.rgb_blue = 237U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.714029159728;
    tmp_msg_0.lon = 0.863372497569;
    tmp_msg_0.alt = 0.74926016622;
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
    msg.setTimeStamp(0.0660733396465);
    msg.setSource(19552U);
    msg.setSourceEntity(188U);
    msg.setDestination(49422U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.301933842944;
    msg.lon = 0.455761636172;
    msg.alt = 0.778485869249;

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
    msg.setTimeStamp(0.0233176060893);
    msg.setSource(22032U);
    msg.setSourceEntity(151U);
    msg.setDestination(33079U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.998818580971;
    msg.lon = 0.0709013028899;
    msg.alt = 0.886836245426;

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
    msg.setTimeStamp(0.279092105357);
    msg.setSource(60473U);
    msg.setSourceEntity(195U);
    msg.setDestination(31175U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.125944476023;
    msg.lon = 0.581129030567;
    msg.alt = 0.679253380918;

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
    msg.setTimeStamp(0.71724174009);
    msg.setSource(55327U);
    msg.setSourceEntity(39U);
    msg.setDestination(65371U);
    msg.setDestinationEntity(202U);
    msg.type = 141U;
    msg.id.assign("HFSUKWPJBJLXTYGDWEAKEFLHIDGFMMHLVUIFYICSKRVMNHVNXPRNCCDXVNOQYOWZHTOZHCSTZVGJDOUSEYUOJYQJLDJYJKAOFGIFFAQVWSTFHPQLRNZWAYUXEYLGMHRBNCDQEXEGSURAEOGSQAKACWTUETIMBTSPIIGDGJZJRFSQDKZUOVBAWZVOOPRLRPRAKBZAKBSNITCNWDTBCYGQKXXXEZMPCQERLPVLBNIXKNPQMBVMTJW");
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HVPZJAWOFBQDZQCWTVRMNSVKMJKUGFKOVNSTHQIFMZRKWFYCCYBRWZNODYHQXKXBXPQSYJXRIIPJKERTJTVRELPXBLEABKCUMSED");
    tmp_msg_0.lat = 0.782609278389;
    tmp_msg_0.lon = 0.729201816211;
    tmp_msg_0.z = 0.91497039616;
    tmp_msg_0.z_units = 113U;
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
    msg.setTimeStamp(0.674163528305);
    msg.setSource(31758U);
    msg.setSourceEntity(141U);
    msg.setDestination(14506U);
    msg.setDestinationEntity(40U);
    msg.type = 59U;
    msg.id.assign("XUBGOLLDBCCJYSQAYAIUCZRZBMFVLJUNKQVYEQRNQHBFKSTEZUVYXQILFHCEZWIHAKLFKRCDREBLSHADXMTPKITESJRDJTCYOACXJGNQXHHLBCOQPTJBYYVBDKYZVHSAEMPXPJJWAROILMCSNRWPRDWXXTDKEMIGVFLYBQOVSPNAOAWZULVHMGZFJBFGHGRMDMGSXKGNSYWTMNNURVFZWQJNTZTIPVKDTPWWSGXFMUEUOIUUOIQZPPHK");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JKWDTKINRPYZUOWOXEEVLWRUBMDHNGXPYTNDCHEBCJBCPFPGQLJALFUADLMJOGGIWFOHYPMWOZDLBTFCZJEXKMFJNECTOFDXGPECSLAPBSCFHYQVEQLGIBEYAPURUVVVOVENWFJYYSNZANVWQDYYTZDUTHIIRMIQGRMNMHBVQGATBIZKJNQXMRMNAWZLGPRZTLSOJUXPKDIUEKXXYCAITKSWAWTKJ");
    tmp_msg_0.lat = 0.97733971105;
    tmp_msg_0.lon = 0.430789084771;
    tmp_msg_0.depth = 0.782242919704;
    tmp_msg_0.query_channel = 51U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 171U;
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
    msg.setTimeStamp(0.516475435088);
    msg.setSource(7860U);
    msg.setSourceEntity(184U);
    msg.setDestination(61700U);
    msg.setDestinationEntity(147U);
    msg.type = 197U;
    msg.id.assign("IVXMRZOHSEGUECKJTNXDTIEXXERPKWAFJHGEYBGAGZCOMHCVTSDZKYUNNGPEHDAZOGLIPBJSKPQQMFE");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.650188966919;
    tmp_msg_0.lon = 0.154542826787;
    tmp_msg_0.z = 0.466560062886;
    tmp_msg_0.z_units = 128U;
    tmp_msg_0.speed = 0.339109308683;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.takeoff_pitch = 0.447219382561;
    tmp_msg_0.custom.assign("KFXUAYATFXGTCVULQNTMHXLUZZRAFGNWQXDTNNXJZVOTYCUGTCVFBHCSRBBRSKGIOLIHDIYRTGQHPTJPVKWZOZLLMNOGBEQESUEMLIWFKPJQDUIPLUSDSQMLBNDPBRQBJVDBOUDVWLAHDOHDAWZXNYSNCHFMYWHVBYSGOPIJHQOYBPKVJLAZEAIZTZKMEKKIDPRMMCXW");
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
    msg.setTimeStamp(0.770029959208);
    msg.setSource(56985U);
    msg.setSourceEntity(198U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("LHRADWWUQIOSBVSMXMSXMNHJFWJZVRBBOEKBSYCJNNLPJYDXRMNMZUCBNPZQWUUJZEPDFKLAFHQWRKGZPUOGRKQNXDLVNRMSTBKUIKXWZBRTOGWHKAMVSICAVLAQDZZOVAYHZOJEEEFUXVGTCHYKNKTIHJDIVALFFPCQBLARTCTTWJUCXLQESQUXSHHXUTTXKBJYFRVSVEYPFGYOSC");

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
    msg.setTimeStamp(0.968912432729);
    msg.setSource(35953U);
    msg.setSourceEntity(77U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("CUIZHUEFBFBMSTPPSGSPHYXFLVBBQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VXJTUTFQGOVDKLNEIRCVGOFROWUOLXSHNQDGMZHBLBCPLSHYQKZQDFCGJKSXLPZNHMZEAYIRJSGEOYZHWWHUDPMEIFQBCTOWKVLHXIFBGRKANUPEQWSGTWKNTLSVMVQIA");
    tmp_msg_0.sys_type = 73U;
    tmp_msg_0.owner = 63168U;
    tmp_msg_0.lat = 0.485644055212;
    tmp_msg_0.lon = 0.0807724693447;
    tmp_msg_0.height = 0.734309927832;
    tmp_msg_0.services.assign("AGOHSIQRQWMGIUJKUYVUZODUKHZMVBQSZYULWOSRRPXYBWHJEOKMOIDRNGIAQAHFGJNPZXKJSRSRABGOSCCLVGSRBFATXXEOVVKOBMYRPUWKZMJNDYAHAABDEVTIGFFNNXTVITDZDPFQELHNVBHQTJJRHLCKYDPJJMBGCXRNZEFW");
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
    msg.setTimeStamp(0.745960684994);
    msg.setSource(35249U);
    msg.setSourceEntity(169U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(121U);
    msg.localname.assign("YGOPRFZEEMDPCQXLXEOYDWAWLIHSTGPCWGBTIFMNRKPLNXUZRZOPMPSOFVTZJNPZLRDZ");

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
    msg.setTimeStamp(0.556750647101);
    msg.setSource(58870U);
    msg.setSourceEntity(224U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("QPABTDAGABNRHQTJYVJDPPOVAFISARDKEFYMBTPQTCKURFEDLOQQHKFWSEWOZGJVCPTJRUYHDXJQADCOUXAFSHJQJXOQKUWXHXWGUNZOMCSUTAMFLKJYGKKYVA");
    msg.predicate.assign("THBEROEZBJAMSPQOWLQZUFTRLIQQYZORLIVMQKFBKIVHQWCVBRGWKQGIBPCAYKJILPZENRFHJGNUOORKWAUIXEBNHEPXENOBEJKOSZJYQMYCHPCAEBDAFFKLNJGNMMTHHTWWDMUOAZSSVDTPKFNPLTRSFDNTECHWXASHDXVWFTJUPRGCM");
    msg.attributes.assign("MIMUQSMKEPKFCJJVQNQKDCNVUZECRFPKLRUPRPGVMXZRLDXHWLJXEBNPULCQUSLGMRVFIXBDDTPECOWLTYKLLUUZWCIGWFMSMASDWTVYJWREHHNBPXJKYZIZNVDAQUUJCGFTQHNGYQGJETFNLNTWZXWJAYGCRTADCQHKIOSTBNSEKADZVMJTHGBROYSXZIBQYOAEESIMAOOVBONYHGB");

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
    msg.setTimeStamp(0.617524445449);
    msg.setSource(46406U);
    msg.setSourceEntity(123U);
    msg.setDestination(54842U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("NWVNTMYDMPEURERGBBWFKXOQPTEZKMZCXGOYVGWKJRGWESQPHKMQYENOODWLPIROXAHBZUCCJTCPDFODRLYAKUCZLNHFZVKJVFXCRQFJDISKNSPFRCBWUHAEIGGZA");
    msg.predicate.assign("RFQZJRVZBCEADMYLMTSXLMPXGQNUMWUPCIBVDOFOPEHVAKYUEIZZWGEXGYOMMQHTSRIYBNGWAAHKOJBFATIZELVTJODLHBPUBWTNYBIXVDRVDKEXFOHKGNBEHSNCWWHYJHFVQQRLUERPJKSGUWOASDKGXSSKNVSJMUACPHUFILNYULFSJPCQRUIJDZAMCIKKXDMYTZFVTXEWRWJZDTQETLFORCCIS");
    msg.attributes.assign("DMCDYMYKRNOMHHQBYMTIXPLNGOXRPCCVVJPFPFSLSGODRUORKGEVOWMBAXAXVXGHZHZIBYIQCWALAJPOGIVQINTTMBSKZUGUZIFLMBOMSTZCWLVKWTSAGYFEQ");

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
    msg.setTimeStamp(0.554695394176);
    msg.setSource(13127U);
    msg.setSourceEntity(166U);
    msg.setDestination(63644U);
    msg.setDestinationEntity(123U);
    msg.timeline.assign("MJDMBOKYUWVPFKGMVJICSKXIHTHEQYMHKBPFHFNBMTYMUUVUTXXHYTWLPDGEGRRPEIWVLZVFQZIDJHFBJQKFRSOOOCCHQNJHEAVGRSVNGPTBBLPIXUTOUAFSLKSDWAPTGLEMZRGVAOOMTLWRGSDSVYXSRXYZLFBLTQJNDAWJIQKDASZOBBIEUPJNAWKCYYRWUFDCNPEEIWYIMZFQMYNZQTCEN");
    msg.predicate.assign("KEJTMHJVTUNHZDRXNGKQTPAWNLAUBTSDSLKIAAFXOMTCTXHMNSQGJSELNPCCZVUGTXMBSQHDOGPDVICVVIQBRKPLONNCEUYXPYILZBBHNAOEMQCPTGZFLILFUYFFAIXAVKWIDUHZZEDKXMACVIDMOWTZVQSOFMUVBWRKEGJHEBSLEEDXIOPJYGYGKWWKYUNCLAQRWJLYRFZEYUQJMZRIRBWOQOSFKSVPGHXPYBDSQNBWXZJDH");
    msg.attributes.assign("VHEAQVZNMSYFPXFTSCXITDXEYQLPFAUGBDXTRPYYFWYKSIFQZACPYMQWMVLSGJTWRCPNTLEKLTLVAHAVZYXJRBKVDTUJEZATHFFMOZKQMKMKKZXMCVJANBSPBXMDWMWJJCBLDMTOXDCWPJGOGQOEDUHEZRWKANIRFUPDHRHFLRIWAKSYFNGHEYVWHGBEOPUSAIIRRJOSBLDBOGHJQSBHXIVUTRZCKZLYWJIN");

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
    msg.setTimeStamp(0.719960598183);
    msg.setSource(62142U);
    msg.setSourceEntity(43U);
    msg.setDestination(64520U);
    msg.setDestinationEntity(225U);
    msg.command = 43U;
    msg.goal_id.assign("XAGASGCLMLTDKDRDCBUATXECIIZGJKPVRMSBINFODVFBKRDRJENDJTZOVQQCMMUEXEBOVUYAGZMDTWUWCJIUWQHZLSXNJUAGQEKSKNHNAOGPNQQZOWMEVQVSRZBKKXUFHPLIPTETTVQSXAFCSJBXWRGFWWBHRYYISYFJSZPOMCORLDEHSYJZGCXQVFUVBTZJLTMNKHXKIPLNCLYWLUNIWHMDTUQRBHWPYIGLAZPVHIOYJYOFFDCOHARAY");
    msg.goal_xml.assign("GNMNRSHDAPVYDOCYEMBHBOEQFMBENDAFVCGTQXEXWKKIHTVCNVLNJYDKESJCGBAUWLUEQPIWQCDVWNWKRLKNOBPYMLHIGVVLJZEODSMJYIEHURQMNGAGWMAHMPLLFXVUGOTGARIZOZYKZCDUGUWDQBWOFBDTCTYTSLAHP");

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
    msg.setTimeStamp(0.153649085529);
    msg.setSource(55882U);
    msg.setSourceEntity(51U);
    msg.setDestination(4270U);
    msg.setDestinationEntity(139U);
    msg.command = 74U;
    msg.goal_id.assign("TRFKUSLKHKMEVJWWWOBHYZIUDPETCVJAAEULGCDIPITOKTEYQPNGYCPORNOPLSFASGGFHVROGNWIKQKEUDNIOFZNOXCALPSOWBCMBCHSIMNQMMRTHLZWLXLYFGPLLQPZVTQDYBJQSCROMPYNQYVXFBESNCEHJHBYRJITUWFGVVEAZTVAZREGCWWKZBZQCZKMTNXE");
    msg.goal_xml.assign("SUAXBCDSSFIHNUUWERQDMIAVSBFUEKGIXWWKMGDATCXQXMJETIBWHIFCRPYPCQTYNRZPMNJTRHEGTOZXMYDSHWPLWUJKHMVLRLJJUASHAAOWAUTRSMJHTIOXLCPTSZAFJFIMYFI");

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
    msg.setTimeStamp(0.703095799979);
    msg.setSource(9655U);
    msg.setSourceEntity(179U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(112U);
    msg.command = 42U;
    msg.goal_id.assign("QNQWOZDKJLUVTPUQSZDQNRVQJZMDGXCDDEARAGPRRZTVREMTCKHQNCFESHXBPSFKPAVUHARZZOXDVLNBSNYTYEJJFYIAMAHZRVNXCCHTSNVBFBOUHCYJGWXUTDRFOKDMMLPYGLCOMHQOGWCJNUTXHHXZPIBSQIDEMIMVFLBMAAODENJKBKLGKFMXNEWIPWBWXHGFWIOVLOUTCQGYEBOUSTCPWYYLSRUSUGPRTKFVPJFJJIXK");
    msg.goal_xml.assign("DNSWDARXPMRQXSYFMWBBGKCOCKWILQDMZLCYDOJSGWGYKHMJVLZKMZEPXFRYA");

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
    msg.setTimeStamp(0.394141972332);
    msg.setSource(16246U);
    msg.setSourceEntity(233U);
    msg.setDestination(58053U);
    msg.setDestinationEntity(156U);
    msg.op = 194U;
    msg.goal_id.assign("QAIKNALISHWMHZUKGGGNJFMJVMBXGKSYDRZFSHYGKPPDHWWLPULDVUTAVVLLRNRCKTTJGFQMBICOHXCJWQPVEAVNRDPWBPQDEHFSQZSHSJEQYN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AJBDGKPYQTKNVSVDZOCMZHKJYISILAOKRRMPWXYHUYXTICLLQHBFKBZDZHDHBXWEIJQUXOKNELIVCJRYFGVUTLWTSAVLEVBJMZCBTXEGLKTFQOQGCKWVM");
    tmp_msg_0.predicate.assign("VKEPJBZCDIQPDYJYKPWBOISKZDWUHMUXPOBUVOKNCVEDNCAAPHHVFGFIRQAFWWYMYHHCRQPNLQUQCOLFLKOGMTHTTUMFGHEYXVPIURJXHSENJWGNMFSVEJXOJLLGKTVLOFWDMXAARIIQBADQZCXIKVUNEJIGQVGMDXZRTGSBMSFJZTRRJUYDAODGHYCSZABLVNYWKUADTF");
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
    msg.setTimeStamp(0.735387166368);
    msg.setSource(56929U);
    msg.setSourceEntity(125U);
    msg.setDestination(52755U);
    msg.setDestinationEntity(227U);
    msg.op = 138U;
    msg.goal_id.assign("DXPHMPFDBQDWXUWTYUGPZMWHRVIOATBZTSDIXDZCHRYITBKIYXYIUUXLSNVMJGVMVPWSZETQOZHASXXRLCGTXVCREIQTMCRRNLSAZHVZLEFWEUKONDUVMAKEOLEOWLVLFTYCYUYOJXNSARYGAEFAGSGIBNNYJZHKUPJBNYOWLFKHPBMDJQBEHLDKBWXJLQGTORRJCFMFT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JYCSFKTZARLNCGHLBTCVMOJNPMUMNVQOYLYUPDWURABYWUJWZIJQNFCBXNLCMVLAMEPFZYCWGJAIYGQYXKPGLEHRKNNWHDOEIAZFRMMGBSSRQKEJXDBTVZEXXRPHUVKUOAOKDPQJQITRIAXZGWIZPIBFWQRRLEODIFWAFOUGCWFVHESQXEBPTLTNBVTPMJKWOYCVI");
    tmp_msg_0.predicate.assign("NECHAFZRTQMPQGBDJQLYEWSDONBXKMXXYODJCYLWXLZD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TWSYXQEYPQYPFRZWXNSOUOUEMPAAWJWTW");
    tmp_tmp_msg_0_0.attr_type = 29U;
    tmp_tmp_msg_0_0.min.assign("CGONIHXBFUISULGSPHCNGUUVCJTYXJOSUROXVYWIMWYYFKIFLYZDZDNHFTKJAQGPRCPAUNREISODYCMLHXKNTPZELSBETGDTDILAXZWJQEHFCKSAFBAIHMWPBCPESVXLHIQNIJIWPLDHAVPMAWJDJFBVCOECQJRFOKZSMWDEVHJGOGGAYPZEQLVTYSMQUAWMYVKWKKTJGRZDYQVKKOXNLXERDRABBSNCOTQWTQUBERMFROZPZBUVHXMTZUM");
    tmp_tmp_msg_0_0.max.assign("CFZDNPTGFLVBXNMYLYVCJOOHROJNKCFMXTEBKISPMDFXFBXHKKSGWWUHOBQLBSMGHRUAQDVUHAOKCYBQLXGTWAZMIKNYJECRNYJWNSDDVXIVGET");
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
    msg.setTimeStamp(0.699760005221);
    msg.setSource(35U);
    msg.setSourceEntity(103U);
    msg.setDestination(62947U);
    msg.setDestinationEntity(14U);
    msg.op = 138U;
    msg.goal_id.assign("MYHIWANSFUVSPIWGMNSFKMPPZEULRUGK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VUGJOLEMOEKYCCTCBLRJZVTAJFHSEYHUTIBQKTHNYMINLSVPDXOTGFCZBGHGSNTERLWGUCKUKXBABUERQAKGBWGWXHDNWXTRHEPYSXWZOWUNEDJNCAKPSPQYZJYDPUUPDZFPIVGEZPRAVLSIOHMXCMANWMPIFKC");
    tmp_msg_0.predicate.assign("MTGEBDWAZPSHTPVFJKCPFEWPMVFOLOZMRRLAEUGDGXFCBKSTOHUSDPDZUGGNMBTXQTMRGVADXOTPAHAQREOCHMZSPBKIBHIOZSHDJLYCKZVFLORVHXVEGLWDV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PGSUOKZUEYKFIZLDFPPQFZDTPMQECLKLZQYDVXCXABUOBTXXQGBVIHGNMXWJPYGKHNJSGCRLHWWYRCZVQPTCYODIJLBTIWESLLELFEIRILXIVJMKTIRSYZ");
    tmp_tmp_msg_0_0.attr_type = 99U;
    tmp_tmp_msg_0_0.min.assign("HCRXRFNBXNUHGJGAQOEECFQJXKKNDOGFUKECYXHIBCBOHLIZLYX");
    tmp_tmp_msg_0_0.max.assign("QTEKBJWJZKKSESTEAHCFKAQLVNMXKEBFIRKNLCVUVVJFIFTBTJWXIYSZCNAUPMHZPQTWCOHKFWTVMXPIUBVNVGAMDWOCQGSFMPAEMOFDPQYQEFPJGSVAROPGMUQDXGEULZHMERXCCUEYBXKDGXYOMSZYCFIGVYQHUQITZOITHWYWXNOBSRILUGZZSHGSCNDLINLGSERCJUOBANXPXJYF");
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
    msg.setTimeStamp(0.0570700946959);
    msg.setSource(44677U);
    msg.setSourceEntity(10U);
    msg.setDestination(34129U);
    msg.setDestinationEntity(115U);
    msg.name.assign("YYUZZZORKNWHHECSWABJHAYKXRPTHZBMLFJTGTWIGYWIGECUEQYSFSZBQVXAKMBKXTPVYAPIEVLBIDNJGJURQQOFCUMGFVADMHTBQBSIAIQMTVZKZELROLXOXEGUWHQORRQWGLFXIA");
    msg.attr_type = 79U;
    msg.min.assign("JNFEWNNVBTSPMQUOGVBGTYHHSCDWZUFAMEBPJTUZROZHMWUGZRKAMPCNIKYVAKXQQPLJBGXGBTTHKIJIXUKHCLSXUIJZWXOFGPCBIAFXFASYGWBLNDFZOXZPVDRDAQJVAMNZSALTQEESFMUNZNTPBOFLKEYYQYIVHFBCHJGROIXPKYIEKUQAIYMWALOQJDVRXRQUDRLTZSRMPTEYHCSDREVHMFJKEDXCGUHN");
    msg.max.assign("PAVUIDRCQNHZZLXCJEPRCYMGQSAUIWPATJKCZBGLPIYPNXKWGMCBFCAYJAWLFTXYSDBSSWXNYGESQOSVMCUDZDQSHPBWFEJXRKMUCFRNDGIXFGVZATQBKKHWGULNXUHEWILQ");

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
    msg.setTimeStamp(0.35237180116);
    msg.setSource(7630U);
    msg.setSourceEntity(66U);
    msg.setDestination(57070U);
    msg.setDestinationEntity(176U);
    msg.name.assign("ZOEGQMEWCROZKPAFZLFWYQOSPYHSAKDDBMKYYCRHJWVYJMTBEFJGCMNIZHVDRHDZXUVTBXPDGKYSKXASUOMKTDPUCAIGLPOIQAMLUOBNUAXSSFJKEYMSAEMUHFGTLWBJNGOQTPSJNLCPFMOZL");
    msg.attr_type = 53U;
    msg.min.assign("THKUAEIGAVZXBQIEZCDUSXSUPWXYNZKGBRGGRZER");
    msg.max.assign("OSXFCQOKOXWEOVDVOQEITZYZMEMCJKWXBEUAQJNHDYHK");

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
    msg.setTimeStamp(0.178595885728);
    msg.setSource(62503U);
    msg.setSourceEntity(48U);
    msg.setDestination(60743U);
    msg.setDestinationEntity(251U);
    msg.name.assign("PWVBVLUKFWAKZUKGFZJKHRPONQRCMILQSXMIHVMHTVZAGFKAXDPSTOIPWDOUQCCMMOZTDVDBXLUGIAZJBLBFQOVLSOJHEIGIMKQYIEMJROYEPNCQ");
    msg.attr_type = 209U;
    msg.min.assign("LGQZACVGXIKGIQVPWHVAGSCHMRBGEDRWZFOEEAOVDTPUPBMPYWLYQNHXTENWOCJCZTMTWZVQIEFFMMKFCWUGJOPSNVMXLOYJRIBBHXZOCSZLXDVAIEYWYHOYNXUGHJCGQBKQPBSCZLXNKKTBVJEYBNMTMGIQJZIAAKNRNDKHNSWBEQTWFLCDZSDYDIHFGOAFSNXFPHREDQLOJFR");
    msg.max.assign("KVNRJCKUWWXVMCSXKZASNARWWWKZFCKOYJLDXUJREAULJWLLZPRUFTBSWEXVKCPGEGMHRYEQPETGFHNQSRAXIHXPYFPOQDHCNOILTUIBNFYLGVYWDULHOPZKWFMASJMPXZHQUWHKSIQOCVEBVXMEVMYMPOJLIITDFFIBARZY");

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
    msg.setTimeStamp(0.119669578776);
    msg.setSource(220U);
    msg.setSourceEntity(10U);
    msg.setDestination(38390U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("KLUURKCBWPEBNSKICOPRFAFNNVJJFVNEIKPQOQTEQLPCNKKHHVUTMWZZITZUPLDOOXZDQRUAWHFLQTGISEDJDFXTHBWGLOYMEOTCWSXXQCRINEABXFKTMTUMYRQPODDMBMGFAMDICJJLIIXNABZ");
    msg.predicate.assign("ENSPFQGCSGXZQRSDMHETMTKIIIFJAJDVTATHGGETIOHCHXGZMDUANVYOSRJDDYPLSSBXPAGRPFGYLRKGXIWCUIBRDZWFISPBFQVGXUXHNKWNTZWUAMVQYJCBFKEOVPDNYZLTKMBQRHAZMUZUMELZPDAQEOXKSCYLWCFECAWKODYJIHHLOPUIJKFNBUMNLXBJOBMRVAVRJQGTLVQRE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JXHROCVMDBFTJAKG");
    tmp_msg_0.attr_type = 210U;
    tmp_msg_0.min.assign("LLNSIKHMUZITJGAWKGHDYJWOJFAURGGSQWTQBVAAZCNFINWGOPOZUYWIYBCLOCOMUMGWKPXCYQEQHPBFUHTWBENTNQSVAJSXFSIT");
    tmp_msg_0.max.assign("LFHUMWCADIKXXM");
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
    msg.setTimeStamp(0.63069436019);
    msg.setSource(35726U);
    msg.setSourceEntity(171U);
    msg.setDestination(32176U);
    msg.setDestinationEntity(111U);
    msg.timeline.assign("JDJJQJZYUESOWQGYXLECXZOVVUEDUBWFANTNXCTYIGCJUKVVMCZDAWMNBWSMDIVDEUOITOLEJKSXDIAAFGRVPKPXPTNGNSJVQSMIJCBKUQRYFYIXHKOOISMNWGKRRHCNHHYFEIATQEZPFBWHGYSWRURNKNEAHLFM");
    msg.predicate.assign("PEOWKIILTBMSMDRSRRSXQHPZLAZOYSKKZNKVXQOYHEQGRVETDSFYSHNEMJUMHIQMJHJDPBBUOUGDWMCFWFAIZYPXDMAVNGJECNXTCWYKEGOIAJRZXJNVSWEBVGIHTRXQKJAZTPRIUPMFVJIOWDCFCVUQOSGBIQBBQRGZCDTFXSLLDDTOAXBBKTTYPWAOFCBURSOZWDXUHEWGYVCFEVXLYTNHKU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DIIURZAQCPGGSHSVHBTOAWWUDMLJQQIWUNEJHZMQOKGNA");
    tmp_msg_0.attr_type = 104U;
    tmp_msg_0.min.assign("TANCMGUHIJGPCYWVHGBVXGYBDSENCHBFIIJBSWPKJTUZSFRKBVTWWPHULDKDBVEVDWIHSMSBUWIZILGQLCAPUEOOFFQAHWAYWXGQPBKQGASFMZPCKZLSDYKDXUEPRXZYARTWFXZXCBTMCIOSXKKJLOLZAEFMFUKMNOQQGAJHRZONNLTEJXVXYOPCFYVHFVZYCEHZ");
    tmp_msg_0.max.assign("BXVTIENONWVXHAFGLDAUQPCTJLYWPFPP");
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
    msg.setTimeStamp(0.388905763159);
    msg.setSource(64640U);
    msg.setSourceEntity(226U);
    msg.setDestination(44256U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("CSMRNKLENZPFBXITSIJTMTTLZTCSZHOWHYSNCRUIWROUCJMRTVNDZNPSAHQMXSGVIUDHFRCATFPZSHOHZVJKKLYHGJKPJFKMRYDXLFIOPVRKQJKDUAGZQEKEMYWGXSASEHFMQNNPAPCPBTEMDFDNBURRQCBEXQYAKGGMXCUAEZVSUZGBIXVWERWZVDJGWOULOFWBCGQTNNYQGEKFLLXLPHBTXYJAXEWOOVYLI");
    msg.predicate.assign("KONEUFJGZTNQDVTLCYLQEXXJBYWRITJQZPHIHGROUSHLNUICEESPOVPKKUFXSDQJAMQJSFNWVGFPLWWSGMRNIMZMZOKXCYUGWJCAFHOROBGHSPBWHQSXYAIOLHDREVDYBYEZDKWDGHJPAMAEHXUZSQRUJNVAUQMYFOKC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QRUMSGARTPIWGBYDNELEDISOTFLOTGBKDZEIOZ");
    tmp_msg_0.attr_type = 120U;
    tmp_msg_0.min.assign("ZXUXXWPMGTQRSRXKQXZLOUSFKJYYMPEYKNTXLAWHMFMVKQHHTKPQLCPTIHVEGBBOCNGKGYERXYZAGJRDHZPMUHTELMHFIYDGQBQJOAPMWXLDUCECRIUSZJTBAGNOOIDKFWJJTLMSJXIMNFDVSZBHWOVIJVOCTSZQVLCUHYLRVEPDUPETDFEQGRBCADAEKNDBQWSCWFWZASE");
    tmp_msg_0.max.assign("SRBNGYORVEYEDFKSCMRFKUYNTVBQLAOJBEVWWBYNCKZPTJZOOZGYYNGWXWNOKJLRXYAWTPGCUWVOORJD");
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
    msg.setTimeStamp(0.732807251493);
    msg.setSource(10686U);
    msg.setSourceEntity(108U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(124U);
    msg.reactor.assign("UIKOTUEVKZAVTFGQLAXGUXWBLREVWYPDSKMMXVJTCNWXVXGMGTOAHHCUULOQXQWGEZBDLOJJVHNUENQBNFJM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DZMVQWZYMDASCPPPVQAFBTRMTZAPYKUSEVINTXMBCVHXGJJYILIUWBLKPRUQJHSSWQNNIKDKSFTIWEZEOKDXBLZTEVGSLXYNWCUJHNTBMSHCLWFCDBEADLOROCGLASBOEENMZZQPDUGIKLVDTHHKQMUDSJCNYVRFWXNNAVIAFRWOFYLJYWXBZRPYBMPZTTHRVSFEAKAMFAHRIUKVJXUHJXGFOQQTBOFYGGZCIXQGUNCMRPOEJIWQUCXKPGRO");
    tmp_msg_0.predicate.assign("ZNPQXZPCXZETHEDVEESJVFUKDLRXLBZOANKKAXYDTBPXISNFDCJNZOCFTRHTIJZYQVGEMWSKHOGORXSLGOHQZBSPQGIIKACLASDPNFJZRYTRWBKSVURGXSAHAFLLUCXTIMDMGUEWMGSUJVYNHIMVMFKLFQKZYVPCRJYVKDYOPGBFWJEQDCBBNYXZXFLILHWDGBWLWQKUQCHCAJQPWUQGJHITEVYWAOMMTAUNRPABNUOOCMNPWRDBTFJMUERO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KMMUGJWSYPVSRGXUULKZMEOZSOALHYMTBGHFGUDYZWOFBGRBZNTWGUCNIDFDYCCYJTUQQWTQBSTRMPAKCLMSSDPEXRKFGXWIVCSYQZASMXEZHOLLKKQFWLSJAVZYRDFUETOYVDXLNTHNCVGDOPKFUOATJEINAQKEZOCGBSPTTGJNHQPQXMXYMFHICBFVOEDBER");
    tmp_tmp_msg_0_0.attr_type = 55U;
    tmp_tmp_msg_0_0.min.assign("BQOPIMPRUVEBDZWEAYEMJTGMXVXMTLCRFHWOZAUPWMCUDVYVQFLRSAIEIQMITNYPFISESDDYWZPZTLDIYMPLEOLQOFDZGWCKUXDRAKHLHNIXVNXKJKONAJIBOUJLUNQHTCIHRRCJPHJXATGUYENXTYWYVUGOHMPSETKBJSGNSLTTPXZEVHSBIKXCYCQZFDAWGBZOBNHWVRAGAFJFF");
    tmp_tmp_msg_0_0.max.assign("NGPOGYEXOYBKLZNSFASDYFRHUMQZGPCPNIUOJGBPEIMDLJYWWCLNYWMRETAOK");
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
    msg.setTimeStamp(0.823865865192);
    msg.setSource(48258U);
    msg.setSourceEntity(183U);
    msg.setDestination(43000U);
    msg.setDestinationEntity(200U);
    msg.reactor.assign("GUTOLBTWHTIITBVGJUXCDMRKTMIDAJVPTYPWSFUXYKMUPHWBODXCIYIRJYKLTCKIUXCBP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RQSBYGCWHSOLBKYWEOOUFQYQFCWUOMAUSDRDFZQCJEXSMBJXENBPQGOGKBRXVVPITRAWIBQLAAUXWLENZVDJUSGNZBGHVYZGUIFEOTTPIVQAPRDIPXLDLLVXEJTBJLQBPWCRPTJAIHLMSKRDNKYOFKSBEYZGTWOSGFXMYHEHVRW");
    tmp_msg_0.predicate.assign("KUNCWLDPWSTWFCHJYVMUIDCTMGRYZKVMLJEYQNXLMWYDGQQMRAEYOHNPUZKQNWLCMZTOMTALSPBSFCYAZZZOZCHEJIWRQBISDKFBXNHRSBBRIZSWHQBSSLLKDRQYXCQPIJTXXICFVLUESCGTVZHHYPGSHXJAGAKTJWDTJPKFOFGVXQJRVDPFBXNPUNOTAKNGDIMRYGPTXVPIABVKNREKGBCDFQEOJOIIDUGVLLYO");
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
    msg.setTimeStamp(0.951023878883);
    msg.setSource(43730U);
    msg.setSourceEntity(116U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(45U);
    msg.reactor.assign("ZPUQZADZRVBUUOHMSTWDCUVEAOCNIOQOIAOCZOQLWHESWOZALMJWFYIGSXSZMIVWGVRWSNATIYCIGCRRYLUFEHLQGMMBDFHSKLQPKCUINYNPPTRXPCYLUWVZDXYSDFXPEEJTPTQGALFELFCBDVXWBXVATNDYTDNPK");

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
    msg.setTimeStamp(0.370253380668);
    msg.setSource(56218U);
    msg.setSourceEntity(123U);
    msg.setDestination(12331U);
    msg.setDestinationEntity(248U);
    msg.topic.assign("HJBEMLFIWYWEWATTUAKKKGHDSIRODJMNNICJJVWUUZRVSWIVCXXSKUANNRXWRROMUFQMXYOFJZKOYLXSNUMWIZAEDQDHZYGBPHABKDDQNILYBPJHWFRBCLQDUPETCZATUMY");
    msg.data.assign("BWIENBUICZQPKSONHCURDXPWYITHSCPQMCLALIAXXLNNUGBMZRXWSZQQAOBEZFDUHKNWLIVHLDGKUKGLTBTEVDHWGAZFTGPDYFOEJXTCLYMSSH");

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
    msg.setTimeStamp(0.805758300509);
    msg.setSource(56787U);
    msg.setSourceEntity(44U);
    msg.setDestination(44286U);
    msg.setDestinationEntity(229U);
    msg.topic.assign("KISIXOCGLCHOWLBFQZUAJZGLUDTGLKJCERUPMQHIFSPPBNHOAUAUDRIWILVNFLQVMTHBFXTOUDCCSKPJTALRQWGXYZJFUQEWNWFRSTKVNYMROOTEYYICCFYYWRGJGODUNGGZYAZXNZYQMBRPQIFJKVERAAHIXZSJANUJRDWHXBL");
    msg.data.assign("UUDBCWUQDGWIZYURIRAQBVODUXHVIXBESPNJBNRUTSQLMCQHSKSXSCZLOORMNYRFUGKBTRIPMAPTMQQKIXJELBKKHVLULLWLRYTZTYHENJFXCABFCTIEFVGBPEYIXFOWDDWMQYSMGSNRFNFAVQKCGHSFWWZPODEPBQHCHNAKIHGZGNTXBSEXHZOGZYXWJDSKMEZJEMWAYLYOQAJUCHMFCJO");

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
    msg.setTimeStamp(0.503490731049);
    msg.setSource(1754U);
    msg.setSourceEntity(51U);
    msg.setDestination(16854U);
    msg.setDestinationEntity(80U);
    msg.topic.assign("LTULOQOOBEXX");
    msg.data.assign("VLVCGLNFUDYHKTFVQTSPKDDYRCMUHFBJKONUIAZRCEFRYFAOVZMJGEHSFJMJUZIGGLLWJWYQBWRZXSLNGF");

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
    msg.setTimeStamp(0.228821694315);
    msg.setSource(8425U);
    msg.setSourceEntity(194U);
    msg.setDestination(51044U);
    msg.setDestinationEntity(123U);
    msg.frameid = 183U;
    const char tmp_msg_0[] = {-127, -49, -54, 82, 0, -16, -31, -11, -90, -63, -3, 13, 116, -87, -49, 26, 36, -71, 106, -45, 30, -61, 109, 107, 31, 88, 103, -51, 111, -6, -68, 97, -126, 29, -18, -41, 45, 47, 108, 46, -25, -71, -9, -105, -84, -122, 78, 109, -33, 41, 65, -40, -117, -103, -113, -7, 90, 9, -68, -115, -92, 116, 38, 124, 32, -112, 84, -128, -42, 119, -118, -85, 16, 18, -125, -44, 121, -71, -30, -32, -53, -52, 54, 11, 78, 55, -68, 82, 41, 50, 70, 33, 36, -9, 71, -43, 5, -90, -53, 49, -49, -114, 64, 30, -48, 99, -16, 51, -82, 29, -70, 94, 84, -95, -1, 83, 99, 63, -65, 113, 54, -15, 76, -114, 121, 65, -127, 21, -86, 94, 36, -17, -127, 70, -72, -104, 10, -27, 12, 5, -65, 13, -114, 73, 57, -79, 28, 98, 43, -31, 27, 56, -99, -126, 35, 71, -4, 68, 57, -97, 46};
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
    msg.setTimeStamp(0.869705507793);
    msg.setSource(62788U);
    msg.setSourceEntity(106U);
    msg.setDestination(55852U);
    msg.setDestinationEntity(199U);
    msg.frameid = 14U;
    const char tmp_msg_0[] = {-36, -74, -93, 103, -61, 27, -93, 58, -42, 58, 104, 64, 37, -77, 116, 99, 16, -46, -108, 122, -28, 20, 9, 80, -22, -117, 58, -14, 41, -35, 57, -27, -5, 80, 97, 60, 99, 113, -43, -117, 91, -23, 107, -72, 51, -84, 24, 27, -63, -53, 67, 28, 12, 94, 126, -119, -84, 107, -83, 71, 24, 19, -57, -52, -5, 28, -117, -15, 61, 116, -91, -38, -121, -115, 16, -10, 87, -62, -85, -4, 100, 58, 36, -92, 70, -85, -45, 110, 21, -91, -96, 51, 43, 118, -49, -54, -115, -82, -75, 6, 6, -114, 105, -95, 4};
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
    msg.setTimeStamp(0.166610641615);
    msg.setSource(38437U);
    msg.setSourceEntity(131U);
    msg.setDestination(7968U);
    msg.setDestinationEntity(176U);
    msg.frameid = 235U;
    const char tmp_msg_0[] = {-10, 47, -117, 9, 56, 22, 59, 114, -47, -5, 66, 120, 29, 11, -106, 95, 106, 74, 75, 82, -105, -62, 24, -28, 2, 1, -105, -89, 45, 15, -49, 31, -65, -29, -106, -79, -78, 56, 46, -4, -86, 57, -111, 117, -99, -23, -101, -57, 120, 33, 11, 97, -94, -15, -7, 93, -67, -71, -87, -74, -104, -45, -29, 67, 23, 92, -89, -15, -114, -67, -35, -126, 79, -113};
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
    msg.setTimeStamp(0.711507675013);
    msg.setSource(43813U);
    msg.setSourceEntity(92U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(103U);
    msg.fps = 158U;
    msg.quality = 212U;
    msg.reps = 9U;
    msg.tsize = 151U;

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
    msg.setTimeStamp(0.00810640239252);
    msg.setSource(51044U);
    msg.setSourceEntity(126U);
    msg.setDestination(60914U);
    msg.setDestinationEntity(224U);
    msg.fps = 158U;
    msg.quality = 62U;
    msg.reps = 158U;
    msg.tsize = 122U;

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
    msg.setTimeStamp(0.327134419372);
    msg.setSource(21392U);
    msg.setSourceEntity(155U);
    msg.setDestination(17113U);
    msg.setDestinationEntity(1U);
    msg.fps = 99U;
    msg.quality = 46U;
    msg.reps = 85U;
    msg.tsize = 169U;

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
    msg.setTimeStamp(0.881404756403);
    msg.setSource(55209U);
    msg.setSourceEntity(253U);
    msg.setDestination(60656U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.631896378377;
    msg.lon = 0.630306220798;
    msg.depth = 130U;
    msg.speed = 0.728750362905;
    msg.psi = 0.746872913888;

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
    msg.setTimeStamp(0.108375723015);
    msg.setSource(8545U);
    msg.setSourceEntity(160U);
    msg.setDestination(3240U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.39774013412;
    msg.lon = 0.80958507285;
    msg.depth = 24U;
    msg.speed = 0.204613704595;
    msg.psi = 0.910612756771;

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
    msg.setTimeStamp(0.404999231913);
    msg.setSource(18705U);
    msg.setSourceEntity(247U);
    msg.setDestination(9271U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.83721407443;
    msg.lon = 0.227455733581;
    msg.depth = 164U;
    msg.speed = 0.701132102275;
    msg.psi = 0.44819314534;

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
    msg.setTimeStamp(0.721873605268);
    msg.setSource(61842U);
    msg.setSourceEntity(235U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(26U);
    msg.label.assign("OZECBRFLFNAIKGIKMSIWEDOSXXLWHVUBSKHQUGLOHCYIWBAMAIYPDQNDQLUYZBJXLSBXIVRPSJAPBDZGTGQKLNVABTJXTDUZGAPOYMMJHGXMNZAWHVMOZJLYTACNSELKYHZPVECXNVFVAVEJYWQWBKJYPOEOWVEQIMJNILYQKXRNDCRDTZUQCNUGJWLKCFDXR");
    msg.lat = 0.553831113018;
    msg.lon = 0.990182459747;
    msg.z = 0.775376595643;
    msg.z_units = 220U;
    msg.cog = 0.0918507191363;
    msg.sog = 0.42710229268;

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
    msg.setTimeStamp(0.137708635882);
    msg.setSource(24863U);
    msg.setSourceEntity(190U);
    msg.setDestination(12050U);
    msg.setDestinationEntity(21U);
    msg.label.assign("PMVLLWKBYAXZYNUUODCDKQLJNDODQBMGVCRXTIWTGIOEESSVLRJGYPAKAXEZFTAPLJTELDVDQVINNQNSEPJFRKDQTRAJOMRPHRWRHFFOXYCOBQWUKCRMCSYCYPQWNFOVEMRIQJSSBDFWNZBBCGEKG");
    msg.lat = 0.660566454212;
    msg.lon = 0.482108721337;
    msg.z = 0.795732476436;
    msg.z_units = 236U;
    msg.cog = 0.00758611350295;
    msg.sog = 0.465878881056;

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
    msg.setTimeStamp(0.560730453299);
    msg.setSource(24391U);
    msg.setSourceEntity(65U);
    msg.setDestination(11610U);
    msg.setDestinationEntity(46U);
    msg.label.assign("UHTREKDLFNOOYHMLTMDNZCHTMSGQXQQLVUPKPXXGZXEYYPBWOVBGMHUEHSYCLITVGRVWKGZJNPJGIBBGNXMIJKAZKTTNRLVAAEJHIGQQFFCDU");
    msg.lat = 0.704919518708;
    msg.lon = 0.262647642594;
    msg.z = 0.222004292779;
    msg.z_units = 39U;
    msg.cog = 0.951484449147;
    msg.sog = 0.0288528361128;

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
    msg.setTimeStamp(0.666054373269);
    msg.setSource(31098U);
    msg.setSourceEntity(84U);
    msg.setDestination(38042U);
    msg.setDestinationEntity(140U);
    msg.name.assign("HRDQYBAJXHBFAGQTQUCPJPERWVIXXBKYJXNKGVGQEPEMFHGPSYZUOLANINGSMIAFPIQUNORBGVZOBIRUJTEJQSYFGVMSOQRNHSMLZRKFMBTUWMXUFWKLDTCYXTVXY");
    msg.value.assign("JQOFLZNJJKJIJCA");

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
    msg.setTimeStamp(0.860059114199);
    msg.setSource(37619U);
    msg.setSourceEntity(135U);
    msg.setDestination(35289U);
    msg.setDestinationEntity(128U);
    msg.name.assign("QPTJJLXGZPSAXCKPPGNUEQGRQO");
    msg.value.assign("VPAZIRAAGQWQATTOWWFVHWLJVCVMDUQHXIOVDRFGYSBOGVZCDBTARLOEVJCQQRXSDJNYETQOWEJSWZKBJZGNXWQSXYMQZXAVSSIPPKUHMGBHTCGKMLFMURNICHCIBUFSLGDZDTUFYEXHDPFSWYDBXRCKTITJERLBYAPLJROHUZCNVYCSNBTFPMPMUYRKOZNCXPJUFUMADNEPGNLWEXNOTRIOKMLOIPHYJQDWIAAEXGNLHBQGSZYKFEFIZVLKUH");

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
    msg.setTimeStamp(0.933430249931);
    msg.setSource(60698U);
    msg.setSourceEntity(132U);
    msg.setDestination(63552U);
    msg.setDestinationEntity(212U);
    msg.name.assign("LRDLOXLFRQFBMJFSCCRKGESMKDVIWIVEDVLQTSAHZUQGXQZXZCBYZCYEXFMOHXHNQYAAWSHAJPUCAFFP");
    msg.value.assign("SNWULWMIBEGZXLSDLHLLSBIJHEOPNYWXVMZJKQQMQHNXMFTTWXETJCDQUOYPYCVIOEBZEUAITAEUADVHRVCTDDAUDYPDTPIHYHGSMLOHE");

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
    msg.setTimeStamp(0.890718757082);
    msg.setSource(62616U);
    msg.setSourceEntity(241U);
    msg.setDestination(42521U);
    msg.setDestinationEntity(177U);
    msg.name.assign("XGRYHAVRVNMDQICUTGTIHFSUPMLLVROZXWBAFWNKCZIOOOXNSQTSZIUBBAWQHRJMXBPWZYESEPMDSEJYSIWWCZQFLIZXQMAGNUXLNJUGUJPIRAEOYUFBAPHTDQDZDYQLHLWRKFNZBAYMRTWMARFBQEJPTVKCCNKEKGXJOCTNGPKHTKJJKC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AISNFXKAFVITPWEFJQPSEREDZSUOSUPERWTRMBOITAKJDQVLFLFMSXHSOKRKLJAGJAOGKZDCUQRRGKPGRYDEFNOXLVWTJSBNXMVMXJUYHJOBMEADEWINPIYZGNNAYDCYPZBBIHEPYIOOUWFKYJPMUFXCILQMVUFEEXDLHSDKXVYVZVWLBMAUWCIGCUUTXVMMSCPQHYODLTLJBCNGTFWCKHRCJCGGATQKXLRQTOZBPZQZQRZB");
    tmp_msg_0.value.assign("LLEDULUVLIE");
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
    msg.setTimeStamp(0.154085770343);
    msg.setSource(65286U);
    msg.setSourceEntity(179U);
    msg.setDestination(36996U);
    msg.setDestinationEntity(77U);
    msg.name.assign("LSMRLBFQMWCXSTFEMATNHKVQZJLVLZMWYROCJSWVMJZDPLUURWJGADVELKTTITLOTKFUYKTIRHGLUGKAQXWVHXFHXOMHHTCYKRZDOOEYUJIUNBYKGWHRJFJGHGRGDVHZXQNAJZDJCARKIPBQNNTZXEBZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OPNTDTPUUZDYJCAWYGWLLIRCUHLYCMBKTFYNOPILBJNJXMQZYBDSHNEIYOOQQFRQXLFGBRJTRXGWIHDKAPOBVYXPYQOWJBKMKCWZVIDUHMMLNUYZZRBREHKPFMASVKOUZT");
    tmp_msg_0.value.assign("JJVHLCOENJBKWUBOINSLTWTRUOXIAKGCPFMYOFGYEPHHSBAPVORFWSRWGVIYYQMOIGVLSXQNFT");
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
    msg.setTimeStamp(0.45386288896);
    msg.setSource(59819U);
    msg.setSourceEntity(20U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(19U);
    msg.name.assign("HUYUGYUECHXGSIDMCDNVYDPXTKPTKDLGOQASEJKBFRUIIJHKDTZWVXKUX");

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
    msg.setTimeStamp(0.0351610787837);
    msg.setSource(409U);
    msg.setSourceEntity(240U);
    msg.setDestination(14650U);
    msg.setDestinationEntity(113U);
    msg.name.assign("VQWPMLPTUGEUMRTAICKAVCQBHJZNQDOUSXEYXJPDZYFOCMSDFRWMMQGSTJWGATVOINDSSBVJEEOYKNJFCBOBURLWBPNJHQFQHJLGZNZDXALRKNPNYCDUIWTGCROMKILUOOFBVICKBYIGXYAEPRUJPZEOTLGESZVIXTDBCHXA");
    msg.visibility.assign("HWHDPWRENMITCARUMPLRXPPVBQTHXNJEMZIANHYWNZTOTLVATHOJKMBDVJWGEEGQJZRNCNCUNYOBQUSE");
    msg.scope.assign("XUTQTOUHGAAQBADNVFSBZCHNJFBUPNGMICXQMYJOWKDKJTQERYJSFDAUKLHWKICISHOLQBVDRJPROCSIXNRTQMBFWIVJSRXRNPJDVZFBZZDHCZKGOOTCEWAZBAEAGCHVIFKEGNIGKIZGCMGLUMLYBPHSRVTAQXUVDLGVPMREMEIJMDZFYTLYGSPXXCYRNQBOKNSWHEWWZSOZQNVCAT");

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
    msg.setTimeStamp(0.512145223282);
    msg.setSource(45828U);
    msg.setSourceEntity(201U);
    msg.setDestination(8139U);
    msg.setDestinationEntity(189U);
    msg.name.assign("NPMQGGHVCCMTTQRHCMRJSJQOLRUAWSEYIUUVLQEAPFLITWROWTCBAEHKNAKPQVCVEPBQDMMOHDBPZUXOIFBZEHBFKTEWAGGUXQWXSLTOWRFAZBUDUGSMUIKWHIYRRDCCZXDOMVDMJFJVWNCHZYFJKGMNXDKUXYOHAXKZSFYINPXTAKKHCNVEFLRVDPNVPEN");
    msg.visibility.assign("DZMBXWRIXSLJKROSVSJHNSQLKTVBSQUOVKCKWDFAJEMCTWQUMBJWGNGDMPUANNHATGOBNJMSZFFDGOJCXGDDYY");
    msg.scope.assign("HOMBPGQTHTTMAEGQENBWAYFBTTDEOWBQKOABROOXIBFKHNIQCCGOQHGLERVWJHPNSHVCVFRFBZMFAVUMKQAFRJYPRCDBZUDAQKUZZPHRGVOVLQIGMEKXPRICYX");

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
    msg.setTimeStamp(0.763112061459);
    msg.setSource(3924U);
    msg.setSourceEntity(96U);
    msg.setDestination(29376U);
    msg.setDestinationEntity(181U);
    msg.name.assign("QDMWYMOHTYXACWNOEIDJGWKKZACRSSEJXHMUEOHUB");
    msg.visibility.assign("QTGDBFGLPYNSCCVUNYVSHPKWAVCPWEOIOEQGFTRKQBCZBKANRXFRTICQFWODAZEJXQRSTOHRMESMONNWRJEXPEHGUWXRBTMDB");
    msg.scope.assign("MUNKMVBXFCAZBBYMWOTCBKGXVWGUYODQACITMHLLFIEKXXWXLJDKJSCELISDENMSWRCQDSBXMAIUPIPABPNYCPZDKEVENDGJXDCYACRFQHNMGOQHQLFVTYSRGHPXXZRYSUANJUREFIFVEO");

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
    msg.setTimeStamp(0.36707280579);
    msg.setSource(19919U);
    msg.setSourceEntity(251U);
    msg.setDestination(56006U);
    msg.setDestinationEntity(6U);
    msg.name.assign("ERVSJPDDMDYTNDGSOOEGDPDRTSHQWXKDKULEYOYQNKINGBBOIJFMBNCOSPXZMUXHXFBBAPRNBHQDVEGLLLYGADXUYWPUZKQDKVIOVUJOAFZIMHLEYEULXPFYNNCQECUCWVTNTFNYBIBWEAXWGNFZMJOMFOGTSHJKVILUZPHGHQVSWTZXCQPIJMLQVMAZAHIQCMRYRBSFKXMKZAACGXSWCKETVRTTAFVSWHLYGCJIJZRUWKIEJJLFTSWORAPQPH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MFOGEGBIPXEYVSTWSVLNNRRPQXKNHLNVHEYBZUPZEPSJYZWUEXMNCVWFWHJGFHRPZYXTLPXWXZJATGNCSXOINALJADACNVWOTJZRZJQQFUBGNBSFWNDQBKLOQRDSAKYJXIIICIOHLCQQKUZUIEGODTVK");
    tmp_msg_0.value.assign("LCNRMBMSYCLPPPYMOLBSTVWYTNAFPAZVJZQFUFRURNMGQJIIGTRBIJVWTXSOTNSRZOCQNM");
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
    msg.setTimeStamp(0.371014154125);
    msg.setSource(40579U);
    msg.setSourceEntity(11U);
    msg.setDestination(32564U);
    msg.setDestinationEntity(203U);
    msg.name.assign("VOXWFSKPKMOYAKHZZQBEXSAWSFSZHJPLRYGXCIDCLFUKQNCEJKXERWXOQXCHCRBJGDRDUGWECNHXRFFYUVNWUURCDITKMXFTYQEINMWACZVBZISRKPWWKUDLIDKLTPCSAIMIGMEGVWBTAP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XBZCCOMJGKZDHAALSFZQKFDEJKWHEFRVWWKQBWJOHYODHBTYDWIWQNVNYTMYTLFVQUKMYQJFFMTEJZNBSFTOYIELOWCPXLLWHUOUMRTGVSHKHBPBXAPRSOVIBL");
    tmp_msg_0.value.assign("KEAAESGQAWJSUVZNQONCZKOOKYUPWLICOCFBBUJFBMYQSHGVYQIVCTS");
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
    msg.setTimeStamp(0.0386768437549);
    msg.setSource(55604U);
    msg.setSourceEntity(46U);
    msg.setDestination(57931U);
    msg.setDestinationEntity(168U);
    msg.name.assign("QOEDTKPXABSORWLGAZQAIQWOTFPQURVGLUUOWRLJEILDAIUCPSGQTJOLENWKEFCZCTZHWNXZPOIRIPAQDDQZCNAFXKCGUMCJYMLFMBMJRYSWIXVPDTNVAPVRMEUCEUEDQKUYSGKIXJXLWYHTCUBDADNTEZCZRSMHXGTXQBVGFOXFRNSKRHBYUTYFZZNFEIBSHVWFAIKXGEQPWMHB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GJSNWBRATVUOCSUJCRQZAQXRIRYJJBKCLHVIJFOPGDDVEZBWNTFIOCHHWTLASGFOFXXRYMZGSHPZULXZQTHLRQMBVWUZPWYBSLAQDAMSVARLKBCOJHFECSWSKFHUEGUUDXLIDZQPADUBICSXHTIGPMHEMEVCWFYQQHXKCMRVKEXQDOAISEDQ");
    tmp_msg_0.value.assign("KIBPCOMZOKGQZXFLZHFACKGHWPNCMMRRZACZTRYYSXESDMKQHFLFTAVJYIQWQMATVPGOKYEIBBGILPLXRQYLYWU");
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
    msg.setTimeStamp(0.322294846213);
    msg.setSource(5302U);
    msg.setSourceEntity(102U);
    msg.setDestination(1682U);
    msg.setDestinationEntity(127U);
    msg.name.assign("XMYBCRQVVXIMFBTCCUSBITQNJMPUEVPVNYMIDEBFUZKHZAWMBSDESELDMZUTAPWGCFOBMUNLUOAHKJSTKYIYQXSVFWADXDZDJKTTRJBHPZCRSJTJJBCSOEFLWFLJZXSNQQQEVRAGFWP");

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
    msg.setTimeStamp(0.117111947982);
    msg.setSource(39727U);
    msg.setSourceEntity(123U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(65U);
    msg.name.assign("YRTMPQGOHGSJMTETYATHRUUXZCPJEPUSMBWFNANNXMAULIMVAMKEATRFEOWRTJYYQNGXYZKXNRCOHKXGAJCUPDMISVYIHBCRRAFAPKDNQMIVLFWXSPKWHCLFIGBVOCSVUZCSWQZRHBKGWTSLKEUKWIOVNOIXORGJXAZLVQUVDMGPJODLHSTZCCPUTBIJQHKKEZDYQYPEHFXFALQGFFULVWDJBFILLWRTZCQBXOQNEBONWYIHE");

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
    msg.setTimeStamp(0.844159457632);
    msg.setSource(23930U);
    msg.setSourceEntity(224U);
    msg.setDestination(5278U);
    msg.setDestinationEntity(229U);
    msg.name.assign("PGVUPSRLNRHQHMBHXNESNDBKHVYQTDABCTSEQUISUFNYFLFNTQSJOXHUMXOWKXQCAPTQIUJJXBLYBKGKQWLRGILIAEPZHQCOXRBWJGWUJWSOZCCMAABPPGUCFIDGCR");

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
    msg.setTimeStamp(0.714517909337);
    msg.setSource(18519U);
    msg.setSourceEntity(80U);
    msg.setDestination(37409U);
    msg.setDestinationEntity(112U);
    msg.timeout = 4086029039U;

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
    msg.setTimeStamp(0.951308910448);
    msg.setSource(24085U);
    msg.setSourceEntity(150U);
    msg.setDestination(49484U);
    msg.setDestinationEntity(23U);
    msg.timeout = 3026280543U;

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
    msg.setTimeStamp(0.380858581683);
    msg.setSource(25675U);
    msg.setSourceEntity(155U);
    msg.setDestination(43545U);
    msg.setDestinationEntity(174U);
    msg.timeout = 1399699995U;

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
    msg.setTimeStamp(0.121317332659);
    msg.setSource(15297U);
    msg.setSourceEntity(60U);
    msg.setDestination(32492U);
    msg.setDestinationEntity(230U);
    msg.sessid = 3107366653U;

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
    msg.setTimeStamp(0.409403977013);
    msg.setSource(63621U);
    msg.setSourceEntity(133U);
    msg.setDestination(38879U);
    msg.setDestinationEntity(175U);
    msg.sessid = 4042282508U;

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
    msg.setTimeStamp(0.934560361319);
    msg.setSource(17424U);
    msg.setSourceEntity(152U);
    msg.setDestination(35223U);
    msg.setDestinationEntity(118U);
    msg.sessid = 853320397U;

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
    msg.setTimeStamp(0.996860872645);
    msg.setSource(61070U);
    msg.setSourceEntity(0U);
    msg.setDestination(65414U);
    msg.setDestinationEntity(117U);
    msg.sessid = 1979467334U;
    msg.messages.assign("PMQDMJDNJMALDVAKEZZAZKLOJTWJGTQGKBSJBFLHVWVIOWDRYZIUVGCZWLAEDFICDZCKNUOSJDEWVFGTUMJIOIRHMIQSHTFARXEFABPTMXOVQSQQBONHDPYYRPVZKHNKWRJAVIHGCBYUSGHWZVNHXDSGORCEYLCUXCKNUIYQRDAPNRBYLWWTXLBPXZUINCLJEOORYGEKGTXKQSEMCBLYH");

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
    msg.setTimeStamp(0.929263797589);
    msg.setSource(35935U);
    msg.setSourceEntity(142U);
    msg.setDestination(62216U);
    msg.setDestinationEntity(220U);
    msg.sessid = 913954273U;
    msg.messages.assign("VFDJSLHVOLMFTUYUBMRIWKBNTOVPFCRHNGHRDYPPCCXAKPRIZOVKRXXHAZTEKSKWYVOZINUGXLWOMEOVZTDADCAILXVTJOBIUKSRUCUTMJCAALBQCEFWSJIRJQRHBNKNPHRGEZHUFSZAWCFAZNHHUNENIMOGBSFRQYTFLYOPNXIKPQYPSBTPGJECLLBQJHYEDDKXQY");

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
    msg.setTimeStamp(0.111383284525);
    msg.setSource(2218U);
    msg.setSourceEntity(0U);
    msg.setDestination(31745U);
    msg.setDestinationEntity(198U);
    msg.sessid = 3986127647U;
    msg.messages.assign("CINKWDGTODJPJJFLVTPJTQPYYUFJARKHFIIVLZPHTROZXBSEBHJWCTOMBOUWTXMCQVCDYIIGIFIKVWBASBZEVLRCEDOAMOQWXXSNADWFGKPORQXRUYTGAFEXSJJBSVABMKRSZTPGFLHKHOEDSAYSXKSEMUHZCQUNQVZKUVCJBYQMKGLNYDBIHRLHVUGOJEWRLWDNNNXMWUCOEGRMZKIZTQAPYLDGULZMPDMUTCYSIPXHE");

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
    msg.setTimeStamp(0.691332365956);
    msg.setSource(38162U);
    msg.setSourceEntity(49U);
    msg.setDestination(52066U);
    msg.setDestinationEntity(165U);
    msg.sessid = 1031429716U;

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
    msg.setTimeStamp(0.581019491136);
    msg.setSource(18344U);
    msg.setSourceEntity(165U);
    msg.setDestination(29866U);
    msg.setDestinationEntity(228U);
    msg.sessid = 1499389705U;

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
    msg.setTimeStamp(0.0899047403711);
    msg.setSource(26180U);
    msg.setSourceEntity(32U);
    msg.setDestination(34127U);
    msg.setDestinationEntity(109U);
    msg.sessid = 3781977467U;

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
    msg.setTimeStamp(0.473922048849);
    msg.setSource(25792U);
    msg.setSourceEntity(202U);
    msg.setDestination(16755U);
    msg.setDestinationEntity(126U);
    msg.sessid = 2853248076U;
    msg.status = 204U;

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
    msg.setTimeStamp(0.686914501033);
    msg.setSource(6159U);
    msg.setSourceEntity(64U);
    msg.setDestination(21597U);
    msg.setDestinationEntity(170U);
    msg.sessid = 2656915758U;
    msg.status = 43U;

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
    msg.setTimeStamp(0.585673052232);
    msg.setSource(10294U);
    msg.setSourceEntity(193U);
    msg.setDestination(64210U);
    msg.setDestinationEntity(11U);
    msg.sessid = 126786172U;
    msg.status = 2U;

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
    msg.setTimeStamp(0.116838653404);
    msg.setSource(42404U);
    msg.setSourceEntity(203U);
    msg.setDestination(48212U);
    msg.setDestinationEntity(219U);
    msg.name.assign("FTOYXRIFZEZFPXJMVLBSWIFVGBHYMKKUSPJZVZIBNUDEFUOIXKTPVQHNIYJIPWDCBKPJTMHFWVGRARKPCEYMMKRBKWVQJCYJACNMWQUEDGTBZRWNFNSLSBENFVROJAQCTKTHGHGQNLLXFPTYWDEIQCZVSDPHRAMXQQGUZBHHLJSIXLGPYOTXAYZVU");

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
    msg.setTimeStamp(0.360499956283);
    msg.setSource(56408U);
    msg.setSourceEntity(54U);
    msg.setDestination(39690U);
    msg.setDestinationEntity(146U);
    msg.name.assign("IIZSWTMQVCELKSBBGSKOPUQMRTSHZOJINSGNKUDLZXOGFFGRYAQUMWOMYQEGLCRVKHQPVHLNWIMQAUMCCEIBESWURBEFDPFGTRXDYDAONYIJFXWJHMYLZJZIXCMPXNRTLHLRGEFEKYNARGFUQIMUZNEWSYJZ");

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
    msg.setTimeStamp(0.809978023913);
    msg.setSource(42647U);
    msg.setSourceEntity(109U);
    msg.setDestination(26064U);
    msg.setDestinationEntity(80U);
    msg.name.assign("DWYRLOOPAGMHANTJFLWSLOSKRWKSDSMDHBPHBBYZGQULDTFEXQJRBQZVWMISKHRNZUBYFCTGSIFUEQNENOKJXPZEFCCSVFLDHJUKAKSQRHZOIJEAWWUEIVUWRXILTOTCBACCGVETZXYWVOTJPMMNIVCGUPCBMMVGIXLNDDQVNYNUKZMAIAPONVWGJTTZRAFJBRVKHWEGELDOFSPMO");

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
    msg.setTimeStamp(0.401061748346);
    msg.setSource(32569U);
    msg.setSourceEntity(121U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(173U);
    msg.name.assign("FQEVFUVZLVIIMQUWODZMRELRELTXKMXICDLPAJQTICAJXOKBKEPPZDYGMOOWBXUGTLYOSNJWWMXGPDQHLFPQSHOQSMIVODEFSYAIUFPTZBMWAIKEQYICFGKSUNSHCGQPRLRBJNZNVFSWYFYDOTKPDOCJZXRJNSTFKQLJJTGQEBY");

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
    msg.setTimeStamp(0.902434866314);
    msg.setSource(49315U);
    msg.setSourceEntity(200U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(130U);
    msg.name.assign("IXWREKOHGAYBSBOSNLWCDCDNQFYQPMZGTBZJBWEQYMFFEPVMXAUTUGBDBRRZYGUVENCDXGBVARKYBAOISGOWPWHGADOGJMKMAGMUZKJQLRQYOCLTNVICRPQOAIDHVSHSPLDFJWUSQXXEKQRUFZIJRMODJRXLMVKTYJWLRCKUQNSHFFFKOEIELHZHAEZUCMQJXIHYTTCFPJVVPUZCAXIUBHPTLNTCVMYSXKENTXGLKYLZAFOIDHWDE");

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
    msg.setTimeStamp(0.664528741679);
    msg.setSource(28053U);
    msg.setSourceEntity(27U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(8U);
    msg.name.assign("ODCAFRQQRHUDWFMVDWLXFUZNABMXSAQ");

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
    msg.setTimeStamp(0.244294228438);
    msg.setSource(1391U);
    msg.setSourceEntity(195U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(45U);
    msg.type = 213U;
    msg.error.assign("JGZXJBRGTCSUWHDLMVPCHYZFRQPMOQWFOLQJIMVXZFSCHRGOVGSYIOHDRLYQDLPQISYDJIMXAAEBSTDPCFDURAOGTZUTRFLNKHINTDHLQVZJNOZTESXNEKBIJCWYKWUGQIMZVXRBIEWMGXJNYENMDPBBYXJXUKAKAUZCOUUPPGQEAIAHMARPNWIHZCSVFUBLKB");

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
    msg.setTimeStamp(0.776378496632);
    msg.setSource(19007U);
    msg.setSourceEntity(210U);
    msg.setDestination(8941U);
    msg.setDestinationEntity(218U);
    msg.type = 59U;
    msg.error.assign("TGTMHSEQVHTJJXLHJJLNYAGIAYZDNLZCCKJKMUFKPQIFMFDGUOYWKVPPCFHOWTWKXGVSULNWDDWPPGNNMZBXZBATUZZSECYWRPBUTYMJLVWOORXVOZQIWXRXDZJISBMH");

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
    msg.setTimeStamp(0.298660414576);
    msg.setSource(35218U);
    msg.setSourceEntity(232U);
    msg.setDestination(11385U);
    msg.setDestinationEntity(111U);
    msg.type = 223U;
    msg.error.assign("KIQYJAOFSQFHUDKPINGUBAJHFYWYPATEARQWRAZHCZIHZSULTBVGFSOQBXACLGRJIVNLFFLHVOXKCNXXBQXOOJMXZKBMPOOIUDHHWMRASDZDBZWEASIQSHCCGXRLNNBKJMRHCJZEEVTATRIKDCTQTFTUEMYTJSGVHZEEZFQROGW");

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
    msg.setTimeStamp(0.203788483342);
    msg.setSource(28008U);
    msg.setSourceEntity(175U);
    msg.setDestination(7390U);
    msg.setDestinationEntity(230U);
    msg.seq = 38680U;
    msg.sys_dst.assign("EPJEWDUPFNROXYFSBAJMPZBQRQFMDJNNXPOWAETMTIPBKSSDIKXZJTLGLAKUZCIRWIOLYQLRKEBJAFOYVGLOLFCCXDZAUXSHBSVBOKETGWRTNHVNTHVLSCGWCAQQLKSFCXUCNBEHIHGRWWPMNXQHHBHRDKOVSDTCDJPVAWZNBZIYDLRFKQEUMCJEILZYMTWJHVAAMOKZRYAJIFUOGGMVTVRPUIDN");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-45, 11, -111, 83, 39, 10, 27, 57, -99, 65, -32, -5, -96, -7, -30, 118, -45, 83, -122, 44, -77, 108, -72, 120, -31, 40, 91, -38, -61, 20, 27, -25, -98, -10, 66, -55, 115, 124, -91, 51, -1, 88, -8, 116, -1, 4, 103, 0, 55, 69, -117, 18, 120, -120, -44, -63, 81, 81, 9, 29, 96, -95, -19, 50, 37, -30, 81, -32, 61, -113, 11, 97, -101, 1, 98, -46, 111, 1, 80, 63, 12, 99, -21, -106, 49, 104, 27, 7, 51, -58, 37, -87, -59, -49, -15, 52, 34, 22, 41, -15, -65, -44, -80, 11, -108, -95, 96, -1, -102, 58, -57, -55, -56, -119, 122, 118, -26, -128, -57, 124, -20, -36, 71, 73, -126, -38, 58, -26, 11, -105, 54, 123, -5, 87, 20, -79, 60, 97, -27, 50, 100, 57, -21, 36, 18, 119, -70, -70, -25, -52, -25, 44, 50, -106, 108, 111, -72, 41, -92, -101, -12, -121, 86, 29, -96, 87, 25, -87, -88, -35, -106, 57, 117, -16, -11, 82, 56, 113, 37, -42, 13, 40, 87, -34, 117, -2, 82, 33, 24, 54, 90, -77};
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
    msg.setTimeStamp(0.255825397203);
    msg.setSource(38257U);
    msg.setSourceEntity(50U);
    msg.setDestination(8466U);
    msg.setDestinationEntity(70U);
    msg.seq = 39594U;
    msg.sys_dst.assign("GEKSIXAHOXLYWMHFXSNGCJUTLGSQPORQXBXVLCLJBOAWURMUZHYXTVMRKQZLENFMPWDVDRBKCUBVZLQZEVFTFPPQWGREDIJWJVBVUTNYTUHFWONIRKJNTNDCJYHOTPGSKHGKSYWRVQAICKEQLHMEHIDSQFYFGWTZFMIBOYELSD");
    msg.flags = 65U;
    const char tmp_msg_0[] = {120, -8, -5, 19, -26, 3, -88, 93, -3, -108, 115, 84, 59, -55, 8, -10, 72, 43, 56, -107, 12, -70, 21, -7, -100, -60, 30, 93, 113, -125, -58, -66, 59, 52, 31, 35, -3, 98, -7, -88, -37, -121, 34, 100, 101, 38, -106, 25, 94, 85, -75, -40, -3, 76, 40, -31, 34, 73, 9, -60, -86, -87, -84, 41, -83, -27, -93, 38, 57, 17, 43, 101, 13, 8, -2, 40, -29, 100, -70, 64, -36, -59, 10, 62, 24, -10, 63, -96, -8, -29, -88, -128, -49, 47, -7, -4, -88, 70, -116, -44, -9, -80, -20, 38, 58, 76, 126, 106, -45, 93, 82, 108, -44, -16, 75, 1, -42, 37, 94, 25, -91, 80, -116, -29, 32, -104, -101, -87, -21, -10, 83, 77, 37, -36, 36, 20, 10, 29, 77, 58, -80, 99, 3, -1, -36, -59, -37, 13, -31, -117, 71, -128, -113, -86, -13, 11, 78, 1, -35, 108, 97, 84, -85, -61, 91, 93, 115, 54, 107, -5, -28, -35, -84, -11, -63, 60, 61, -75, 71, -116, 97, -7, 120, 10, -124, 80, -25, 33, -106, 77, 17, 22, 33, -30, -53, -114, -115, -20, 4, 34, 47, -4, 29, 85, -59, 126, 75, 17, 67, 121, 117, -39, -115, -93, 91, 58, -86, -16, 3, -7, 113, 9, 113, 33, 37, 53, -48, 55};
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
    msg.setTimeStamp(0.577361573185);
    msg.setSource(10332U);
    msg.setSourceEntity(204U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(63U);
    msg.seq = 25909U;
    msg.sys_dst.assign("EGXNGADXZKVASUQLAOECZTIIVHRYMNSJIMJKSJQLJLHTJCFXXMGZ");
    msg.flags = 225U;
    const char tmp_msg_0[] = {54, 83, -120, 27, -77, -89, 116, -127, -3, 20, -102, 49, -114, -70, -23, 14, 51, -88, -27, -72, -62, 106, -10, -112, -36, 27, -83, 113, -35, -106, 45, -110, 76, -48, -8, -17, -86, -126, -27, -100, 14, -116, 16, 19, -33, -40, -7, -76, 6, -7, -80, -125, -107, -64, -22, -18, -111, 30, 33, 69, -13, -51, -43, 78, -109, 61, 9, -44, -56, -101, -87, 79, 85, 7, 50, -30, 7, 3, -54, -99, -14, 64, -7, 81, 114, -115, -29, 4, -28, -35, -23, -82, -53, -13, 69, 18, -22, 35, 19, 121, -70, 55, 88, -5, 73, -7, 95, 33, 44, 113, 60, 26, 114, -48, -32, -45, -3, -68, -114, -28, 82, -65, 101, -90, -72, -45, 110, 69, -59, -113, 15, 60, 64, 96, 77, 112, -13, -34, -6, -71, -26, 46, 88, 122, -5, 73, 99, -6, 13, 2, -86, -18, 7, -21};
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
    msg.setTimeStamp(0.675268950767);
    msg.setSource(55553U);
    msg.setSourceEntity(248U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(251U);
    msg.sys_src.assign("REJLURICJCFEGVFVTCAHDUYGYLPMCEHMIQNUMGUIULPFERJUFCFZAHKLWPDPHUFYREBBNKZITQSXKNTTPHZYDYCDXTOIQGWSQHPALOFGCASRDRDEOTMLSAIBYMOFQTEQKJ");
    msg.sys_dst.assign("DXOCYVDALSIWXDOKNOJRYLVRFYIHPAQPVHEVCKQJTMUEPSKUMVHYTQZ");
    msg.flags = 205U;
    const char tmp_msg_0[] = {12, -96, 1, 53, 126, 96, -43, -45, -58, -122, 97, 6, -62, 51, 22};
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
    msg.setTimeStamp(0.693139273438);
    msg.setSource(29528U);
    msg.setSourceEntity(138U);
    msg.setDestination(39695U);
    msg.setDestinationEntity(59U);
    msg.sys_src.assign("ETKXORSFLBGLTQHAQFPXXOOJVX");
    msg.sys_dst.assign("QIJNCWVNVKWSNJDYSHDGHYGXAFBVDCNRMFUMKASWLEBKRIXEWPROOKFAYCNJEBIUSXBGSOIXBHSRFOGLEWPWCAGMRPXCVWYDCHUTOUOYRKVLUXBRYIFVXYMXSMTQGULNHMDTPQKPRKZXVFTDYETTEZIZUSWDCGZFMOOJFVDAJLHICOAJPCWXRLFIZTPBKHBSMLGUTTZNFOJNAZKP");
    msg.flags = 234U;
    const char tmp_msg_0[] = {37, -61, -10, 0, -108, 3, -92, -41, 9, -117, 13, 33, -109, -68, 14, -104, -5, 56, 79, 0, 103, -14, -1, -122, 88, 51, 70, 109, -35, -113, -82, -89, 88, -32, -106, -89, -85, 93, -28, -87, -102, 61, 124, -80, -22, 114, -88, -72, 8, 111, 126, -48, -126, 34, -82, -68, 46, 124, -107, -60, 120, 95, -88, 33, 109, 72, 22, -35, -44, 44, 118, -92, 4, 109, 60, -68, 111, -49, 37, 4, 57, 86, 45, -54, -120, 18, 121, -77, 7, 112, -116, -72, 39, -126, 24, 24, 31, -80, 9, 17, 20, 98, 83, 110, 15, 18, 16, 27, -56, 34, -47, -99, 94, -26, 15, 81, -8, -99, -111, -27, 2, -80, -120, -93, 41, 15, 112, -38, -44, 29, -89, 79, 71, -26, -24, -126, -36, 47, 96, 22, 113, -114, 126, -105, 114, -21, -34, -52, -62, -100, -40, -126, 46, 20, 119, -15, 68, 93, -77, -83, -115, 80, -75, 40, -38, -105, 77, 52, 19, -103, 65, -65, 29, -118, 87, -110, 72, 29};
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
    msg.setTimeStamp(0.00905985473173);
    msg.setSource(41290U);
    msg.setSourceEntity(228U);
    msg.setDestination(63264U);
    msg.setDestinationEntity(22U);
    msg.sys_src.assign("VBNUKOJRMOWLJLSARVTWDGTEDMWTCYMOEYJVGOBOLOUPKC");
    msg.sys_dst.assign("NKOGUBZCSJVXDV");
    msg.flags = 27U;
    const char tmp_msg_0[] = {-38, 126, 83, 110, -1, -55, 44, 18, -58, -78, 72, -112, 119, 1, -24, 15, 23, 86, 24, -23, -89, -59, 62, 31, -74, 33, -101, -19, -3, -121, 23, -101, 7, -30, 2, 70, 71, 16, 111, 19, 87, 45, -126, -34, -44, 93, -6, 118, 92, 13, 54, -24, 94, -78, -17, 52, 49, -25, -25, -128, -14, 23, -116, 100, 20, -40, -104, 119, 84, 110, -106, -6, -38, -119, -97, -6, 67, 104, 101, -92, 10, -54, 44, 23, -120, -89, -79, 73, 1, 70, 68, 55, 115, -54, -111, 20, -37, -50, 32, -85, -10, -94, 64, -28, 125, -115, 38, -41, 19, -77, 29, -125, 38, 108, 95, -111, -96, -94, -86, 7, 92, 15, 33, 84, 21, -68, 95, 118, -84, -17};
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
    msg.setTimeStamp(0.743437053219);
    msg.setSource(63921U);
    msg.setSourceEntity(243U);
    msg.setDestination(52708U);
    msg.setDestinationEntity(203U);
    msg.seq = 28129U;
    msg.value = 167U;
    msg.error.assign("WAYKPCPIWLLRNKGSOZUATEWHRYDQDKWAISADNGFXJHHUFOHNUCGDYVBWAEFYDGOZNVZZELBGMIFTXGZSOMVBDRHTHKRIJPJHPMPTNOEMRIQGRAK");

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
    msg.setTimeStamp(0.0285781696547);
    msg.setSource(50889U);
    msg.setSourceEntity(26U);
    msg.setDestination(60437U);
    msg.setDestinationEntity(154U);
    msg.seq = 32173U;
    msg.value = 10U;
    msg.error.assign("RSTZUZSLGNTWUBFPZFWQEYHJOUQQMCSCECYIVKCNBHJAXJGVTVUYOEGOHMXHPLWYFLIQEOZJAIOLAUQTAXCXLZCFQERYTUPMFWAEQCPDDJFINMCVAHYGGDKT");

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
    msg.setTimeStamp(0.297664551666);
    msg.setSource(2937U);
    msg.setSourceEntity(56U);
    msg.setDestination(48797U);
    msg.setDestinationEntity(175U);
    msg.seq = 45924U;
    msg.value = 86U;
    msg.error.assign("BVRLYLYYCCITNWIHEQOLHBJJKJAXJPHZFZHTZQEFDMQFZPVIROYVHNBELUVBGWKWBYBVWNZXRTDWGZXCQPASWCNXJMHVPAIAMGQYZDTKIDSXZQOZIEGNJSXKWBAUVGPHUSLFYNPPNACXRKJQCMXRTWDNVFSDUDTFLHOVIMTNYYUPKIUOLKCEXWKDSIQTBUEGBLTDJERLFOGUJSAXMERTMBQMOASUNVPILRQDFMA");

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
    msg.setTimeStamp(0.606299662428);
    msg.setSource(30674U);
    msg.setSourceEntity(150U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(91U);
    msg.seq = 10803U;
    msg.sys.assign("GZIGKAPTTICYFCHKJFEUBBQWSDZVCHPOOMOJSXSLNETEQOXJTRJPCQWRSHZYVNNFVBWWCBDKDSPCTYEZYELDSNEKQAWSQVIGCUOLUTGRHPKQZMIQKFSTFXJDYGYMJMYMTPMOVKFGLWHNBCMBDKAZYRDSCXKSUIAKOIXULVJRUNIF");
    msg.value = 0.314645018288;

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
    msg.setTimeStamp(0.652619257553);
    msg.setSource(8618U);
    msg.setSourceEntity(192U);
    msg.setDestination(48699U);
    msg.setDestinationEntity(247U);
    msg.seq = 22192U;
    msg.sys.assign("UYCEVHTOPDNJDVNKUCARYCCDEBYHRWFAJBCFTGSNCSYRWMSSYHOGJPGBZVUJMJWRHHGATIMWIIDOCNXNBSZGJYVMRKCIDZQWBLUBPIYESVITASKEGDUALLKDYELESPPJMQQDDTQHFAXRGCMWFXWJULAOTEMTIKZJPDBTZJLLZRAWKEIKZYWHOQUAXQMOLQREXVB");
    msg.value = 0.359817899536;

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
    msg.setTimeStamp(0.737090163282);
    msg.setSource(554U);
    msg.setSourceEntity(196U);
    msg.setDestination(48948U);
    msg.setDestinationEntity(76U);
    msg.seq = 6383U;
    msg.sys.assign("NQSEXOKJNUYJFVWVKEVWNMYAKU");
    msg.value = 0.759317334556;

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
    msg.setTimeStamp(0.357166380745);
    msg.setSource(45553U);
    msg.setSourceEntity(175U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(36U);
    msg.action = 7U;
    msg.longain = 0.0585028839109;
    msg.latgain = 0.389833058488;
    msg.bondthick = 390729928U;
    msg.leadgain = 0.498447208943;
    msg.deconflgain = 0.0776359557124;

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
    msg.setTimeStamp(0.658680646658);
    msg.setSource(23940U);
    msg.setSourceEntity(35U);
    msg.setDestination(23741U);
    msg.setDestinationEntity(108U);
    msg.action = 173U;
    msg.longain = 0.558128722517;
    msg.latgain = 0.592896256375;
    msg.bondthick = 3057313669U;
    msg.leadgain = 0.531956202478;
    msg.deconflgain = 0.616920230068;

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
    msg.setTimeStamp(0.974664892241);
    msg.setSource(23184U);
    msg.setSourceEntity(227U);
    msg.setDestination(52367U);
    msg.setDestinationEntity(112U);
    msg.action = 162U;
    msg.longain = 0.937932328424;
    msg.latgain = 0.146763374395;
    msg.bondthick = 3232297435U;
    msg.leadgain = 0.101952382616;
    msg.deconflgain = 0.424607215455;

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
    msg.setTimeStamp(0.446183043651);
    msg.setSource(21020U);
    msg.setSourceEntity(89U);
    msg.setDestination(23822U);
    msg.setDestinationEntity(106U);
    msg.err_mean = 0.180529326305;
    msg.dist_min_abs = 0.611786188713;
    msg.dist_min_mean = 0.990535934338;

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
    msg.setTimeStamp(0.651971659199);
    msg.setSource(805U);
    msg.setSourceEntity(253U);
    msg.setDestination(51079U);
    msg.setDestinationEntity(23U);
    msg.err_mean = 0.875021737941;
    msg.dist_min_abs = 0.577327292793;
    msg.dist_min_mean = 0.680592345368;

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
    msg.setTimeStamp(0.497702730228);
    msg.setSource(62225U);
    msg.setSourceEntity(185U);
    msg.setDestination(61788U);
    msg.setDestinationEntity(187U);
    msg.err_mean = 0.421682094694;
    msg.dist_min_abs = 0.604672712773;
    msg.dist_min_mean = 0.551467772431;

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
    msg.setTimeStamp(0.250470054204);
    msg.setSource(8526U);
    msg.setSourceEntity(176U);
    msg.setDestination(31175U);
    msg.setDestinationEntity(179U);
    msg.action = 151U;
    msg.lon_gain = 0.512164805742;
    msg.lat_gain = 0.22921583971;
    msg.bond_thick = 0.331363383692;
    msg.lead_gain = 0.0076118643628;
    msg.deconfl_gain = 0.581038311864;
    msg.accel_switch_gain = 0.618262814489;
    msg.safe_dist = 0.273770005857;
    msg.deconflict_offset = 0.671062427426;
    msg.accel_safe_margin = 0.167857827928;
    msg.accel_lim_x = 0.672482030405;

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
    msg.setTimeStamp(0.546209163089);
    msg.setSource(38831U);
    msg.setSourceEntity(225U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(113U);
    msg.action = 49U;
    msg.lon_gain = 0.852044839254;
    msg.lat_gain = 0.679467536111;
    msg.bond_thick = 0.0537336454111;
    msg.lead_gain = 0.422938634572;
    msg.deconfl_gain = 0.0161948804804;
    msg.accel_switch_gain = 0.208937277828;
    msg.safe_dist = 0.92738515877;
    msg.deconflict_offset = 0.241444055173;
    msg.accel_safe_margin = 0.887207891186;
    msg.accel_lim_x = 0.610345271141;

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
    msg.setTimeStamp(0.421433303472);
    msg.setSource(18725U);
    msg.setSourceEntity(54U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(92U);
    msg.action = 120U;
    msg.lon_gain = 0.196186221721;
    msg.lat_gain = 0.890304677301;
    msg.bond_thick = 0.356604135836;
    msg.lead_gain = 0.122977279874;
    msg.deconfl_gain = 0.830946622963;
    msg.accel_switch_gain = 0.0904826854376;
    msg.safe_dist = 0.891426929753;
    msg.deconflict_offset = 0.781636513092;
    msg.accel_safe_margin = 0.584868317013;
    msg.accel_lim_x = 0.0498347879324;

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
    msg.setTimeStamp(0.787782278265);
    msg.setSource(38768U);
    msg.setSourceEntity(191U);
    msg.setDestination(8446U);
    msg.setDestinationEntity(208U);
    msg.type = 243U;
    msg.op = 91U;
    msg.err_mean = 0.0782767295842;
    msg.dist_min_abs = 0.957857013972;
    msg.dist_min_mean = 0.772636421286;
    msg.roll_rate_mean = 0.0659239213501;
    msg.time = 0.0116381129002;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 226U;
    tmp_msg_0.lon_gain = 0.957730023613;
    tmp_msg_0.lat_gain = 0.823458086863;
    tmp_msg_0.bond_thick = 0.775315015926;
    tmp_msg_0.lead_gain = 0.328916070227;
    tmp_msg_0.deconfl_gain = 0.886911569201;
    tmp_msg_0.accel_switch_gain = 0.397255858438;
    tmp_msg_0.safe_dist = 0.784117041693;
    tmp_msg_0.deconflict_offset = 0.884686428182;
    tmp_msg_0.accel_safe_margin = 0.224985409513;
    tmp_msg_0.accel_lim_x = 0.331227104586;
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
    msg.setTimeStamp(0.218478679167);
    msg.setSource(45667U);
    msg.setSourceEntity(249U);
    msg.setDestination(42420U);
    msg.setDestinationEntity(66U);
    msg.type = 137U;
    msg.op = 245U;
    msg.err_mean = 0.443091651128;
    msg.dist_min_abs = 0.0354594746918;
    msg.dist_min_mean = 0.837397788638;
    msg.roll_rate_mean = 0.27234933079;
    msg.time = 0.0912006257615;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 231U;
    tmp_msg_0.lon_gain = 0.429553933057;
    tmp_msg_0.lat_gain = 0.636994278503;
    tmp_msg_0.bond_thick = 0.522265539999;
    tmp_msg_0.lead_gain = 0.553905157184;
    tmp_msg_0.deconfl_gain = 0.334436672219;
    tmp_msg_0.accel_switch_gain = 0.561574632479;
    tmp_msg_0.safe_dist = 0.906938711317;
    tmp_msg_0.deconflict_offset = 0.758039361268;
    tmp_msg_0.accel_safe_margin = 0.12103161921;
    tmp_msg_0.accel_lim_x = 0.0160725719414;
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
    msg.setTimeStamp(0.42884902043);
    msg.setSource(42562U);
    msg.setSourceEntity(70U);
    msg.setDestination(54489U);
    msg.setDestinationEntity(31U);
    msg.type = 221U;
    msg.op = 38U;
    msg.err_mean = 0.856187874913;
    msg.dist_min_abs = 0.451777851663;
    msg.dist_min_mean = 0.00733348017852;
    msg.roll_rate_mean = 0.741134871551;
    msg.time = 0.211942583934;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 254U;
    tmp_msg_0.lon_gain = 0.949000313943;
    tmp_msg_0.lat_gain = 0.515997728377;
    tmp_msg_0.bond_thick = 0.729596380094;
    tmp_msg_0.lead_gain = 0.396859045619;
    tmp_msg_0.deconfl_gain = 0.348214813944;
    tmp_msg_0.accel_switch_gain = 0.717716099483;
    tmp_msg_0.safe_dist = 0.586207417325;
    tmp_msg_0.deconflict_offset = 0.780630738866;
    tmp_msg_0.accel_safe_margin = 0.583289098229;
    tmp_msg_0.accel_lim_x = 0.0198881732129;
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
    msg.setTimeStamp(0.83070242371);
    msg.setSource(55534U);
    msg.setSourceEntity(232U);
    msg.setDestination(23290U);
    msg.setDestinationEntity(211U);
    msg.uid = 142U;
    msg.frag_number = 38U;
    msg.num_frags = 164U;
    const char tmp_msg_0[] = {9, 78, 41, 51, 63, -18, 50, -46, 76, 56, 99, 100, 51, -40, -43, 108, 8, 66, -26, -10, -84, 109, 18, -5, 108, -10, -87, 35, -19, 51, 6, 66, 72, -38, 115, 105, -30};
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
    msg.setTimeStamp(0.664985685885);
    msg.setSource(42084U);
    msg.setSourceEntity(115U);
    msg.setDestination(25844U);
    msg.setDestinationEntity(151U);
    msg.uid = 51U;
    msg.frag_number = 108U;
    msg.num_frags = 64U;
    const char tmp_msg_0[] = {99, 120, 117, -72, -15, 75, -106, 52, -77, 31, 40, 55, -98, -83, -71, 120, 80, -88, -121, -45, 84, -30, 31, 22, -52, -98, -64, 121, -68, -109, -119, 90, 75, 44, -128, 16, 66, -85, 4, 71, -44, 65, 37, -5, 112, 119, -52, 99, -47, -92, 4, -113, 98, 16, 118, -76, 3, 8, 55, 113, 36, -121, 99, 55, 37, 24, -53, -92, -112, 70, -70, -93, -46, 66, -31, 22, 19, 32, 125, -92, 42, 60, 69, 18, -81, 109, 105, 19, 75, -107, 11, -113, -114, 25, -67, 41, 57, 109, 29, -87, -25, -41, 21, -124, -77, 108, 16, -127, -9, -12, 1, 25, 90, -54, 6, -31, -117, 46, -58, 83, -12, 37, -32, -17, 11, 36, -63, -119, 37, -83, 120, 64, 107, 114, -43};
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
    msg.setTimeStamp(0.213189364211);
    msg.setSource(55051U);
    msg.setSourceEntity(205U);
    msg.setDestination(31801U);
    msg.setDestinationEntity(52U);
    msg.uid = 116U;
    msg.frag_number = 210U;
    msg.num_frags = 21U;
    const char tmp_msg_0[] = {-108, 124, 32, -65, 88, -20, -77, -121, 43, 26, -49, -106, -47, 32, 109, -50, 6, 105, -111, 27, -86, 58, -46, -69, -8, 19, 13, -115, 51, 43, 31, 3, -51, 96, 113, 123, 120, 87, -71, 59, 35, -107, -47, -86, 47, 120, -46, 93, -112, -121, 28, -59, 34, -45, 17, 66, -43, 88, -49, 12, 112, 89, -105, -38, -54, 78, 101, -92, -91, 54, 27, -43, -87, 45, -77, -68, -44, -42, 98, -114, 55, -96, 85, -111, -60, 52, -121, 4, -63, -17, 38, 82, -40, 36, 86, 81, 125, -30, 25, -125, -112, -24, 18, -82, -62, -46, 65, 52, -45, 21, 108, -97, 93, -81, -55, 6, 40, -45, -28, -83, -65, 58, -43, -107, -64, -64, -94, -76, -128, 46, 42, -28, -125, -31, 124, -88, 3, -11, -34, -17, -22, -34, 126, 119, 37, 47, -43, -85, -11, -80, -12, -107, 52, 116, -90, 31, -51, 69, -21, 82, -108, 68, -34, -79, 62, 100, -116, -84, 32, -29, 111, 42, -86, -95, -48, 38, -65, -21, 20, 111, -26, -57, 115, 67, 84, -73, 36, 98, -123, 119, -26, -126, 123, -49, 11, 46, -4};
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
    msg.setTimeStamp(0.988632567328);
    msg.setSource(19127U);
    msg.setSourceEntity(106U);
    msg.setDestination(35477U);
    msg.setDestinationEntity(45U);
    msg.content_type.assign("OQLPFHBHOQIRTADXOCOPGVGANSUFZWXHKLBNSEWVJ");
    const char tmp_msg_0[] = {105, 108, -101, 54, -63, -31, 41, -98, -13, 15, -118, 28, -56, -54, -35, 33, 111, 56, 73, 10, -76, -67, 101, -57, -95, 89, 43, -41, -43, -7, -65, -39, -85, -53, 40, 109, 70, -14, -11, 5, -3, -125, 11, -11, 124, -43, 70, 8, 71, -45, 7, 61, -74, 81, -22, 65, 97, -19, 42, -53, 91, -49, 45, -96, -93, 24, -3, -128, -22, -62, 70, -72, 59, 110, -46, -60, -107, 78, -79, 66, 93, 13, -126, -114, 118, -112, -25, 121, -43, 0, -117, -66, 52, -1, 81, 104, -31, 18, 33, -52, -75, 92, -16, 96, 54, -37, 42, 103, -93, 49, 83, 120, 53, 13, -1, -22, 15, -42, -42, 28, 93, 92, 110, -45, 21, 17, 88, 103, 16, -16, 96, 125, 46, -84, -97, 64, 19, 102, 37, 99, 60, -120, -103, -16, -116, -17, -81, 126, -83, -76, 16, 109, -40, -62, 114, 90, -101, 70, 26, 33, 9, 13, 73, -21, 19, -76, 20, -84, 119};
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
    msg.setTimeStamp(0.825124080526);
    msg.setSource(6340U);
    msg.setSourceEntity(231U);
    msg.setDestination(19123U);
    msg.setDestinationEntity(138U);
    msg.content_type.assign("IPFGQTMJKCPBNBCUQRYYYOXJGKVOJJEEXVMGZUUIEQAHSHICEHHVGCXMFSOKLNWTTEHUTFYLLMOZKMKYDPWWVDSTXBFOVBLEQKRBUCLTKFUZWWEQBPSOIUSZRYLRINTZTMGIWNRIXTXXSUZNVLMQCKYOIAGZOHGBYPT");
    const char tmp_msg_0[] = {44, -69, -72, 15, 98, 59, 99, 107, 33, 46, 102, 99, 21, 0, -64, 99, 23, -53, -74, -104, -36, 13, 74, -108, -46, 3, 75, -64, -80, 34, 18, -44, -21, 9, -42, 87, 49, 30, 50, 49, 124, 69, 53, 34, 2, -125, 23, 42, 100, -106, 85, 33, 112, 79, 36, 93, 106, -9, 78, 121, -102, 63, -62, -98, 26, 125, -103, 102, -34, 59, -89, -21, -90, 98, -12, 55, 42, 14, -104, -34, 102, -61, 123, -58, 24, -45, -7, -77, 17, -67, -109, 36, -109, -122, -7, -120, -103, 75, 105, 31, 102, -1, 13, 31, 30, 93, -61, -84, -105, 13, 111, 46, -59, -77, 56, -118, -87, -52, -99, -25, 98, 81, 114, -116, -122, -100, 123, 38, -20, -92, -123, 58, 8, -89, -99, -99, 113, 38, -104, -33, 113, -36, 38, -120, -85, 84, 76, -63, -73, 87, -25, 117, 86, 109, 13, 112, -87, -21, -70, 81, 117, -23, -4, 40, -78, -127, -56, 84, -56, 125, -54, -95, -57, 22, 52, 104, 9, 115, 110, 46, -95, -123, 98, -27, -88, 30};
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
    msg.setTimeStamp(0.810313771422);
    msg.setSource(6166U);
    msg.setSourceEntity(253U);
    msg.setDestination(56066U);
    msg.setDestinationEntity(36U);
    msg.content_type.assign("FVVYVTSGIDUAOQKQUVIXPUBZZAWTRDLAIIZPNONCGYRGPXNQPJUVOTPYGWJHHFCRKZRKQKVSVHBUWRQ");
    const char tmp_msg_0[] = {-77, -21, -104, 64, -107, -48, -75, 123, 75, -8, -38, -121, -61, -102, -86, -28, 102, 124, 48, 54, 77, -113, -40, 57, -76, -48, 109, -98, 31, 69, -18, 118, 11, -101, 24, 96, 8, 114, -99, 18, -84, -78, 120};
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
    msg.setTimeStamp(0.176055888861);
    msg.setSource(12140U);
    msg.setSourceEntity(167U);
    msg.setDestination(22514U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.0498877197575);
    msg.setSource(19439U);
    msg.setSourceEntity(49U);
    msg.setDestination(29613U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.389690745953);
    msg.setSource(37678U);
    msg.setSourceEntity(161U);
    msg.setDestination(27704U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.0527678300265);
    msg.setSource(21456U);
    msg.setSourceEntity(151U);
    msg.setDestination(9379U);
    msg.setDestinationEntity(188U);
    msg.target = 36978U;
    msg.bearing = 0.189100575879;
    msg.elevation = 0.939738448074;

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
    msg.setTimeStamp(0.39108781639);
    msg.setSource(18200U);
    msg.setSourceEntity(251U);
    msg.setDestination(37777U);
    msg.setDestinationEntity(230U);
    msg.target = 19372U;
    msg.bearing = 0.0266072752779;
    msg.elevation = 0.863404350365;

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
    msg.setTimeStamp(0.428787323286);
    msg.setSource(8791U);
    msg.setSourceEntity(160U);
    msg.setDestination(2627U);
    msg.setDestinationEntity(56U);
    msg.target = 1774U;
    msg.bearing = 0.601203235683;
    msg.elevation = 0.56917626364;

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
    msg.setTimeStamp(0.525280354413);
    msg.setSource(14648U);
    msg.setSourceEntity(113U);
    msg.setDestination(60001U);
    msg.setDestinationEntity(73U);
    msg.target = 33409U;
    msg.x = 0.126786784226;
    msg.y = 0.191923460571;
    msg.z = 0.567873096427;

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
    msg.setTimeStamp(0.0647758825806);
    msg.setSource(40537U);
    msg.setSourceEntity(38U);
    msg.setDestination(60092U);
    msg.setDestinationEntity(150U);
    msg.target = 58723U;
    msg.x = 0.139878709558;
    msg.y = 0.436987113232;
    msg.z = 0.702447758975;

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
    msg.setTimeStamp(0.911402288762);
    msg.setSource(23208U);
    msg.setSourceEntity(175U);
    msg.setDestination(17318U);
    msg.setDestinationEntity(203U);
    msg.target = 12958U;
    msg.x = 0.800563557986;
    msg.y = 0.823375880421;
    msg.z = 0.846236018342;

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
    msg.setTimeStamp(0.374157862249);
    msg.setSource(63065U);
    msg.setSourceEntity(253U);
    msg.setDestination(42231U);
    msg.setDestinationEntity(57U);
    msg.target = 63215U;
    msg.lat = 0.884332132536;
    msg.lon = 0.412733999008;
    msg.z_units = 252U;
    msg.z = 0.0310324970505;

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
    msg.setTimeStamp(0.886476790959);
    msg.setSource(47447U);
    msg.setSourceEntity(145U);
    msg.setDestination(64864U);
    msg.setDestinationEntity(90U);
    msg.target = 42020U;
    msg.lat = 0.861602648074;
    msg.lon = 0.169243600383;
    msg.z_units = 232U;
    msg.z = 0.068715378814;

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
    msg.setTimeStamp(0.151475173436);
    msg.setSource(31617U);
    msg.setSourceEntity(125U);
    msg.setDestination(52631U);
    msg.setDestinationEntity(40U);
    msg.target = 16480U;
    msg.lat = 0.0207766497755;
    msg.lon = 0.848830697704;
    msg.z_units = 173U;
    msg.z = 0.0297982798187;

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
    msg.setTimeStamp(0.940290352661);
    msg.setSource(64564U);
    msg.setSourceEntity(84U);
    msg.setDestination(20256U);
    msg.setDestinationEntity(28U);
    msg.locale.assign("BJAARVVXLQBMQUGPHGIFDUJNWVUSXWZORZBXYWU");
    const char tmp_msg_0[] = {1, 110, 68, -16, -123, 31, 97, -115, -72, 24, -52, -69, -113, -19, 117, -124, 0, 112, -115, 66, 98, -36, -90, -111, 4, 81, -96, 90, -63, -72, -27, 6, 51, -95, 68, 5, 78, -87, -97, 117, -91, -31, -34, -16, 85, 23, -30, 113, -115, 14, -40, 3, 40, 80, -89, -56, 26, -34, -29, -74, -72, 37, 40, -100, -29, 75, 45, 124, 7, 2, -27, 119, 111, -60, -76, 40, 55, -1, 109, -69, -119, 16, 56, 15, -18, 100, 26, -115, 91, 74, 27, 49, 123, 40, -64, 99, -10, -62, -104, -41, -75, 47, 103, 21, 106, -115, 92, -109, -96, 4, -18, -121, 22, 106, -106, 0, -33, -96, 80, -89, -100, -44, 49, -87, -50, 30, -24};
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
    msg.setTimeStamp(0.304197130265);
    msg.setSource(34265U);
    msg.setSourceEntity(17U);
    msg.setDestination(15044U);
    msg.setDestinationEntity(163U);
    msg.locale.assign("JRLPVYTEKOWZAVDOSFQVIHRFRCABITOMTXRUYDVLAIVZUGGTALIGMFINXUPZXZMWQOKYSVYXRJOQZSIMJZULANNWZBFCBHVWCJCSIHGDCDDIFBQTOPJEISECDKOFYWUHZPXXBXFYERQKUAZJABGMRF");
    const char tmp_msg_0[] = {-48, -74, 89, 8, -124, 61, -121, 58, -120, -4, -12, 18, -110, -52, 96, 36, 79, 78, 71, 94, -43, 87, 114, -89, 45, 91, -122, -87, -67, -50, 87, 72, -58, 119, -110, 21, -117, 25, -31, 30, 51, 17, 1, -108, -45, 21, 2, 109, -42, -40, 119, -24, -4, 46, 10, 23, -51, 7, -8, 7, 93, -14, -22, 105, -104, 5, -17};
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
    msg.setTimeStamp(0.379942724935);
    msg.setSource(57047U);
    msg.setSourceEntity(214U);
    msg.setDestination(56321U);
    msg.setDestinationEntity(150U);
    msg.locale.assign("SXUQGTJHPBUGUAVGRAZPHSUFSLHOIYIEEAQPMGXXZNOIPDEVJJCNVMGMABFVKXRYZLGVVHMFVRREOLAJOSFJBYNSLAEQXSZDILHDOSOWCBFNBDUOYERPNWAVZYUCPNFCQCUWTUXHJTKNTPZQBPNEXQKDYFEBTCRINWXKBEFAAFKTWMXOWWZKTURWIZHUPGB");
    const char tmp_msg_0[] = {-34, -55, -40, 39, -62, 126, 95, -47, 57, -95, -47, -46, 17, -92, -65, -45, -44, -4, 1, 67, 93, -116, 113, -54, -32, 23, 41, 38, 78, -39, 24, -77, -128, 92, 46, -110, 86, -55, -108, -82, -100, -110, -21, -108, -71, -29, 30, 52, -102, -76, 37, 112, 23, -80, 14, 76, -21, -127, -53, -125, 12, 33, -46, -49, 6, 71, -8, 125, 55, -57, 52, -97, 11, -26, 122, 15, -41, 106, -113, -101, 12, 81, 47, -77, -11, 46, -114, 79, 10, -18, -114, 52, 61, -4, 64, -13, 29, 7, -96, -47, 24, -16, -42, 95, 112, 59, 120, -65, 108, 63, -121, 108, -36, 123, -88, -76, 107, -41, -56, 21, -61, -54, 103, -61, 22, 104, 7, -14, 23, -56, -70, 72, 5, -79, 75, 90, 28, 31, -101, 20, -123, -102, -121, 22, 25, -110, -10, 26, -90, 112, -103, 83, 11, 102, 46, -69, -102, -104, 22, 50, -20, 83, -55, 113, -1, 46, 72, 3, -121, -20, 75, -48, 45, 72, 37, 0, -71, -94, 97, 26, 89, 17, -54, 19, 66, -46, -80, -124, 8, -30, 21, 8, 16, -45, 107, -109, 28, -119, 41, -121, 26, 94, -43, -127, 88, 93, 107, -7, 86, -48, 29, -123, 84, 76, 86, -76, 104, 44, 46, -14, -119, -101, -87, 66, -31, -102, -124, 36, -19, 11, -9, 21, 78, 92, -51, 37, -70};
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
    msg.setTimeStamp(0.51677405952);
    msg.setSource(38310U);
    msg.setSourceEntity(161U);
    msg.setDestination(962U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.442739326291);
    msg.setSource(48393U);
    msg.setSourceEntity(247U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.253741215346);
    msg.setSource(23136U);
    msg.setSourceEntity(42U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.923565084758);
    msg.setSource(46673U);
    msg.setSourceEntity(11U);
    msg.setDestination(59587U);
    msg.setDestinationEntity(147U);
    msg.camid = 135U;
    msg.x = 57414U;
    msg.y = 53943U;

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
    msg.setTimeStamp(0.0418113034769);
    msg.setSource(9627U);
    msg.setSourceEntity(81U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(125U);
    msg.camid = 222U;
    msg.x = 64745U;
    msg.y = 49033U;

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
    msg.setTimeStamp(0.0163547162586);
    msg.setSource(31736U);
    msg.setSourceEntity(251U);
    msg.setDestination(41992U);
    msg.setDestinationEntity(29U);
    msg.camid = 19U;
    msg.x = 64989U;
    msg.y = 19879U;

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
    msg.setTimeStamp(0.333485448931);
    msg.setSource(53095U);
    msg.setSourceEntity(200U);
    msg.setDestination(64889U);
    msg.setDestinationEntity(218U);
    msg.camid = 99U;
    msg.x = 56836U;
    msg.y = 32617U;

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
    msg.setTimeStamp(0.392946207209);
    msg.setSource(35470U);
    msg.setSourceEntity(148U);
    msg.setDestination(36542U);
    msg.setDestinationEntity(144U);
    msg.camid = 78U;
    msg.x = 33173U;
    msg.y = 57018U;

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
    msg.setTimeStamp(0.710643677007);
    msg.setSource(49032U);
    msg.setSourceEntity(32U);
    msg.setDestination(13861U);
    msg.setDestinationEntity(98U);
    msg.camid = 233U;
    msg.x = 29303U;
    msg.y = 62637U;

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
    msg.setTimeStamp(0.656121435445);
    msg.setSource(19259U);
    msg.setSourceEntity(190U);
    msg.setDestination(36500U);
    msg.setDestinationEntity(104U);
    msg.tracking = 69U;
    msg.lat = 0.404014538242;
    msg.lon = 0.281729934834;
    msg.x = 0.0278305242515;
    msg.y = 0.955447935537;
    msg.z = 0.0956456150137;

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
    msg.setTimeStamp(0.21753568131);
    msg.setSource(233U);
    msg.setSourceEntity(240U);
    msg.setDestination(55841U);
    msg.setDestinationEntity(2U);
    msg.tracking = 249U;
    msg.lat = 0.993770619284;
    msg.lon = 0.724205049963;
    msg.x = 0.809333263034;
    msg.y = 0.901784455402;
    msg.z = 0.104250922711;

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
    msg.setTimeStamp(0.0370213865336);
    msg.setSource(62250U);
    msg.setSourceEntity(1U);
    msg.setDestination(18106U);
    msg.setDestinationEntity(125U);
    msg.tracking = 144U;
    msg.lat = 0.316391383721;
    msg.lon = 0.635120624328;
    msg.x = 0.669847386804;
    msg.y = 0.0397070170664;
    msg.z = 0.26934099027;

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
    msg.setTimeStamp(0.55491875589);
    msg.setSource(42387U);
    msg.setSourceEntity(242U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(53U);
    msg.target.assign("STXXRKFMTDBBJBAYPOHDRADAZNREYUVLDQFJSYGNNBLMZTFXAPQLTIGXMNOEUATGLUGDYIHZGWUEWWJXLDFNQXZSHGSQOGRPWPTULUPVOFITFWSJRRXNLYGBKUKCZXTSZNBAMIVBHMBWCEUMJFKPMCCJVECYLRIKWVFKWWNHILBPYPMQCCAMFSACSOPKSWNYDOJJVKYIEXBGIDFHOESCDHQCZN");
    msg.lbearing = 0.0257441121566;
    msg.lelevation = 0.0170415454898;
    msg.bearing = 0.621112851023;
    msg.elevation = 0.987300573002;
    msg.phi = 0.356419023643;
    msg.theta = 0.525485688322;
    msg.psi = 0.742296635914;
    msg.accuracy = 0.821478789902;

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
    msg.setTimeStamp(0.317388516078);
    msg.setSource(11988U);
    msg.setSourceEntity(196U);
    msg.setDestination(7793U);
    msg.setDestinationEntity(111U);
    msg.target.assign("VMJFKKFRKGRHCWTHGAERAQYQJXDHHCCBLTJDLEXKIHVZSTJTDGUZNLKZAWUAACEZSEHSTMMFSEIQGLQLV");
    msg.lbearing = 0.245046892723;
    msg.lelevation = 0.769252457975;
    msg.bearing = 0.0761525430236;
    msg.elevation = 0.356262210124;
    msg.phi = 0.560160979412;
    msg.theta = 0.585423418291;
    msg.psi = 0.744064243623;
    msg.accuracy = 0.53908058784;

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
    msg.setTimeStamp(0.841953446641);
    msg.setSource(51134U);
    msg.setSourceEntity(101U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(190U);
    msg.target.assign("XEKTVRXFTEZJHISRBVMVBVCDXHNEKUGTBMKHGBWRHOGQYFKUSYLKUUNYLRIHRUTHQFVBNWTNONAWJLZJFMRICSMCWMEWOPAZPFILLTOGDAXQYXDAKEVHMSQFZHLVDLOHYIFTJAYDWPNWDJOINMEIJABUXCUGKQJCXRPYWUNNRTCJAPPXLMJWBUCXYAOWGTZLAMEQIFSSXQBIGVGQZBCPSUYOSZFDZFZSSEGICKE");
    msg.lbearing = 0.176129917903;
    msg.lelevation = 0.732839695509;
    msg.bearing = 0.157650146661;
    msg.elevation = 0.268333485424;
    msg.phi = 0.130570774189;
    msg.theta = 0.448521024642;
    msg.psi = 0.827624558127;
    msg.accuracy = 0.568765077314;

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
    msg.setTimeStamp(0.803014538794);
    msg.setSource(1541U);
    msg.setSourceEntity(122U);
    msg.setDestination(30018U);
    msg.setDestinationEntity(190U);
    msg.target.assign("YXPFFUPQAKDBXLWVKYJXRWSWYHJTCPDTJEXVARSWQYVIOZHZUDJFTARJVNVTGKDVBITLPYAAPZQJFMFVGUHOGXCNNCOOWQXVNOKEARSMJVUCFGUTQFTTDUNBE");
    msg.x = 0.717920662863;
    msg.y = 0.972986577545;
    msg.z = 0.986102007146;
    msg.n = 0.638941506928;
    msg.e = 0.875196679982;
    msg.d = 0.915257294107;
    msg.phi = 0.232538093534;
    msg.theta = 0.392714637905;
    msg.psi = 0.0303214313363;
    msg.accuracy = 0.49047019674;

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
    msg.setTimeStamp(0.0257508556955);
    msg.setSource(26974U);
    msg.setSourceEntity(146U);
    msg.setDestination(58365U);
    msg.setDestinationEntity(253U);
    msg.target.assign("HZBAVIFPSQCLGLFEYPIMYHEVSLPDOXIBSJBWJEBMAWHFTKAHPJNPZXVTFRKURHVYGXCWSDSACWTKCGNSDEPVSKJHXRWLCBHLAZRFTVFMAXOMYYCVOHEJAJEGGIZUANOPRHDDXBNTOOQWOVJQWMUKZDANRYLXOTUBQUYYTZZMGVQKIDGROLCEOBUSNBEPMXTBUCZHIKIIRYLSVDNDUQJMJCTZXWNPQKIZFLGMWXUSFGEI");
    msg.x = 0.55574315824;
    msg.y = 0.84300317134;
    msg.z = 0.11295620037;
    msg.n = 0.469022570427;
    msg.e = 0.806022042684;
    msg.d = 0.596473709333;
    msg.phi = 0.133934765598;
    msg.theta = 0.694218611575;
    msg.psi = 0.306367623839;
    msg.accuracy = 0.497454592295;

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
    msg.setTimeStamp(0.891012048683);
    msg.setSource(10650U);
    msg.setSourceEntity(63U);
    msg.setDestination(33739U);
    msg.setDestinationEntity(67U);
    msg.target.assign("FJYAKGLYOUGKJDMNCPQFVLNTMSOHIJUQMZMZNJMBUARBAQVUKQYIHENQZKHEALKYEGOTDDEWQPSZDVWCNXWRLCIPEXYNSUOGAPQJRXJUKUHPSBFMSCHVRFYNSJIWHTCOZSRTMCKTE");
    msg.x = 0.761548779915;
    msg.y = 0.554852276915;
    msg.z = 0.447088746499;
    msg.n = 0.0737609722223;
    msg.e = 0.105554923372;
    msg.d = 0.197359601752;
    msg.phi = 0.302621637135;
    msg.theta = 0.433949167084;
    msg.psi = 0.52836201649;
    msg.accuracy = 0.138677889202;

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
    msg.setTimeStamp(0.100895096924);
    msg.setSource(8466U);
    msg.setSourceEntity(191U);
    msg.setDestination(40056U);
    msg.setDestinationEntity(3U);
    msg.target.assign("XEUQKAENTCGIQSTYPHKILGHAXRNJPSZCWQMAYCSPBEHQYTKMZJNZFLMOREBFVTGIGDZYCEJIVQUDZVAFEMVQBGLEXDKUOHHHDPRXNYRWINOXCPUSMNBQBLRWBFDAZXVHJNTRZWPQSGLXWBASFXVQUNWCOPWNOLSEROLJZRNIPVXHUHPJWGDVSCMIYDTTMOCKYZKUSGKMRGMFIFPJYAKUWADDFOBEYITLOEUMABJ");
    msg.lat = 0.64706805182;
    msg.lon = 0.197759837754;
    msg.z_units = 240U;
    msg.z = 0.346911680785;
    msg.accuracy = 0.0771012190926;

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
    msg.setTimeStamp(0.435154948951);
    msg.setSource(46098U);
    msg.setSourceEntity(189U);
    msg.setDestination(36268U);
    msg.setDestinationEntity(4U);
    msg.target.assign("SZOPUBHQJOMBJEBZFBINVJALURPASQIOBVRSLWOHPMGHKUKOJZNTQYTMNBDMZECYVOANSIUMQTONRZKCPHYZGLEROXRHAASHFDTDTDZREINYKWKACPICIVTUVNTBERYVLWWPLXBUYQOHCINIIVFEGGKLFUDWFMUHJTYQVCPSLBGOXDCCZXXJQCMDVKJPLMRGWSFSIGYKSGMFYNSGAHXXKWLRWQLAENBUFXJPWKDECMXFVJEWXQYRAZT");
    msg.lat = 0.0539982276428;
    msg.lon = 0.566201119889;
    msg.z_units = 136U;
    msg.z = 0.146600802998;
    msg.accuracy = 0.142843714749;

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
    msg.setTimeStamp(0.300952299623);
    msg.setSource(13687U);
    msg.setSourceEntity(161U);
    msg.setDestination(42135U);
    msg.setDestinationEntity(218U);
    msg.target.assign("ZWYHNCZSLMZ");
    msg.lat = 0.655677786894;
    msg.lon = 0.527749418935;
    msg.z_units = 168U;
    msg.z = 0.933714289798;
    msg.accuracy = 0.439312186432;

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
    msg.setTimeStamp(0.130951530623);
    msg.setSource(48188U);
    msg.setSourceEntity(120U);
    msg.setDestination(14070U);
    msg.setDestinationEntity(23U);
    msg.name.assign("XKBSAOUHILMEGWQUIRAMIXKJWPSDUHERAILEGJPFFCNJAUORYCHJXFAEVSRUZSPFYAXLMDBIVONCKXMYSBOP");
    msg.lat = 0.339538181611;
    msg.lon = 0.333103484363;
    msg.z = 0.310628184695;
    msg.z_units = 34U;

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
    msg.setTimeStamp(0.379038324188);
    msg.setSource(50061U);
    msg.setSourceEntity(214U);
    msg.setDestination(43473U);
    msg.setDestinationEntity(205U);
    msg.name.assign("TUBRPJMZOCGFKJVUCQHJUMJWKPYLEVWPEDADOYGKMCHTJFCPZLNUSSQNAFUGBLXCUGIKUYDNHDXGSLVTIURIDMHHBTIVEFPEJRMEORFLHOXIVMZNGLIJECBFCGSWPCASCURAKJRTYADDKCSLHQ");
    msg.lat = 0.589347051901;
    msg.lon = 0.0268139223055;
    msg.z = 0.646812997936;
    msg.z_units = 216U;

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
    msg.setTimeStamp(0.688475302289);
    msg.setSource(48180U);
    msg.setSourceEntity(178U);
    msg.setDestination(52358U);
    msg.setDestinationEntity(219U);
    msg.name.assign("VYAFDEGKXYCBFLNNQGVIQHGJYKDNOJYCAZLFDURLWMVGVPAWIWRECJKXESJFHHDIJQNHPITXJZXKGIJEZDBTGDIZNMPAPFEHMHVZYORSQBUXZLEYSFGJRUBYLIMMYPAXPRSETTJKCCOWA");
    msg.lat = 0.393621166693;
    msg.lon = 0.966325256183;
    msg.z = 0.175923036946;
    msg.z_units = 199U;

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
    msg.setTimeStamp(0.0756359299386);
    msg.setSource(64876U);
    msg.setSourceEntity(205U);
    msg.setDestination(40791U);
    msg.setDestinationEntity(87U);
    msg.op = 109U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("AMTWSANUHYPOZAYQEWWDIDXNICKMGIQBQSTFGFDULBSNXEFXCGJKBQFPPEUZYPCUEUVTFLGADHDTUZZXCPRTXIKLPEABLECQWFFWHJNAULBJUJLDPXBHYSKLQXAFXROVHTMWWJIDEMZVSGTOETZWJQYZNKMMWXPMMLKMNCTYHZHQ");
    tmp_msg_0.lat = 0.752977255198;
    tmp_msg_0.lon = 0.775779522585;
    tmp_msg_0.z = 0.233554803492;
    tmp_msg_0.z_units = 209U;
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
    msg.setTimeStamp(0.215494589018);
    msg.setSource(47292U);
    msg.setSourceEntity(57U);
    msg.setDestination(35139U);
    msg.setDestinationEntity(187U);
    msg.op = 146U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CWMVYGXTSYIHUCQAEDTUDTAAKDOMMYQFZZXLCEZQHUBIVZROODTRVYHTLUPPJZCSXWVRAMZCIOSGMNQJEFWLXLKVOSXPTKDCOOPNNHQEJLLFVWHKBXPTNRULIWEZIGAYUCWPTGOBBSNANUJOTHAYAYNYDYZWRKDRQJEHSL");
    tmp_msg_0.lat = 0.195945616127;
    tmp_msg_0.lon = 0.265824639141;
    tmp_msg_0.z = 0.858749038101;
    tmp_msg_0.z_units = 4U;
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
    msg.setTimeStamp(0.0299491388364);
    msg.setSource(21086U);
    msg.setSourceEntity(8U);
    msg.setDestination(32084U);
    msg.setDestinationEntity(216U);
    msg.op = 176U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KXOWWUCQXHZUEXRSKKVEARVNFBJOBXONCQLRCVUYDLOBGACRYTKOQTRJOUSEKCTGWKBPMQDFKFHPWAAJUQILBNBGTPHIESRPGXCZWMRKENMUIKYSFBQQFMHHEFSIPDQNSCVTIBWYJTIFJGNLCVCSAECZDGSNEEUJVJQSOVLFIJHZRGTXYPIRTMHPVWEZYZDIAVLAJLWDGDBVDTTQZUWHPOODULO");
    tmp_msg_0.lat = 0.215400306798;
    tmp_msg_0.lon = 0.83422718147;
    tmp_msg_0.z = 0.902043701652;
    tmp_msg_0.z_units = 127U;
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
    msg.setTimeStamp(0.952418932621);
    msg.setSource(41862U);
    msg.setSourceEntity(115U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(115U);
    msg.value = 0.978637451207;
    msg.type = 20U;

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
    msg.setTimeStamp(0.114621825945);
    msg.setSource(16061U);
    msg.setSourceEntity(73U);
    msg.setDestination(54606U);
    msg.setDestinationEntity(236U);
    msg.value = 0.408916936397;
    msg.type = 119U;

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
    msg.setTimeStamp(0.864514055572);
    msg.setSource(31847U);
    msg.setSourceEntity(90U);
    msg.setDestination(65248U);
    msg.setDestinationEntity(53U);
    msg.value = 0.887557724055;
    msg.type = 60U;

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
    msg.setTimeStamp(0.262271036755);
    msg.setSource(55808U);
    msg.setSourceEntity(126U);
    msg.setDestination(13939U);
    msg.setDestinationEntity(162U);
    msg.value = 0.406600661898;

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
    msg.setTimeStamp(0.673445809916);
    msg.setSource(32376U);
    msg.setSourceEntity(128U);
    msg.setDestination(40477U);
    msg.setDestinationEntity(68U);
    msg.value = 0.236821364565;

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
    msg.setTimeStamp(0.473687822013);
    msg.setSource(20151U);
    msg.setSourceEntity(35U);
    msg.setDestination(9963U);
    msg.setDestinationEntity(63U);
    msg.value = 0.94524838547;

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
    msg.setTimeStamp(0.644796861265);
    msg.setSource(38706U);
    msg.setSourceEntity(92U);
    msg.setDestination(22889U);
    msg.setDestinationEntity(189U);
    msg.timestamp_last_service = 0.767931905064;
    msg.time_next_service = 0.400698630435;
    msg.time_motor_next_service = 0.0874176885167;
    msg.time_idle_ground = 0.260229683623;
    msg.time_idle_air = 0.907026133851;
    msg.time_idle_water = 0.0122554085253;
    msg.time_idle_underwater = 0.825639464737;
    msg.time_idle_unknown = 0.993862741585;
    msg.time_motor_ground = 0.134799957774;
    msg.time_motor_air = 0.587406451843;
    msg.time_motor_water = 0.692667127397;
    msg.time_motor_underwater = 0.767586425438;
    msg.time_motor_unknown = 0.136649559883;
    msg.rpm_min = -14076;
    msg.rpm_max = -17184;
    msg.depth_max = 0.896096443894;

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
    msg.setTimeStamp(0.0556860697318);
    msg.setSource(12529U);
    msg.setSourceEntity(79U);
    msg.setDestination(10021U);
    msg.setDestinationEntity(37U);
    msg.timestamp_last_service = 0.270002796405;
    msg.time_next_service = 0.503702142657;
    msg.time_motor_next_service = 0.174145755152;
    msg.time_idle_ground = 0.997849168496;
    msg.time_idle_air = 0.114227677893;
    msg.time_idle_water = 0.953337120931;
    msg.time_idle_underwater = 0.648644657282;
    msg.time_idle_unknown = 0.24477876969;
    msg.time_motor_ground = 0.0366909192242;
    msg.time_motor_air = 0.714794221244;
    msg.time_motor_water = 0.764436935479;
    msg.time_motor_underwater = 0.499881985523;
    msg.time_motor_unknown = 0.372424761308;
    msg.rpm_min = -24473;
    msg.rpm_max = 20436;
    msg.depth_max = 0.597647408004;

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
    msg.setTimeStamp(0.694377342159);
    msg.setSource(4666U);
    msg.setSourceEntity(160U);
    msg.setDestination(9776U);
    msg.setDestinationEntity(114U);
    msg.timestamp_last_service = 0.483792816104;
    msg.time_next_service = 0.329470790573;
    msg.time_motor_next_service = 0.821323444193;
    msg.time_idle_ground = 0.48401260188;
    msg.time_idle_air = 0.0765177765198;
    msg.time_idle_water = 0.20992608993;
    msg.time_idle_underwater = 0.718901217161;
    msg.time_idle_unknown = 0.1608552993;
    msg.time_motor_ground = 0.350948059134;
    msg.time_motor_air = 0.171751716084;
    msg.time_motor_water = 0.534007842754;
    msg.time_motor_underwater = 0.862787760232;
    msg.time_motor_unknown = 0.694439731961;
    msg.rpm_min = 8618;
    msg.rpm_max = -6753;
    msg.depth_max = 0.958574197424;

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
    msg.setTimeStamp(0.164872112611);
    msg.setSource(45332U);
    msg.setSourceEntity(238U);
    msg.setDestination(24373U);
    msg.setDestinationEntity(227U);
    msg.severity = 36U;
    msg.text.assign("CVSOAGMMRCDUDZQYJORGDIMTMETISUALUPSUTNWSYIHDJCRWFCSHQKHXVCLRVFZHPXMODLUBSTWRHCXJBUAWWJVVYTJORZXJMFKDCAOTVXGPGQZNNDRETLEBSUGWSAZKWVSZOAIZJGPYQNOEXBIHNBABRPFLPFEXBYEKZVOOQILEZNLDQIIJH");

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
    msg.setTimeStamp(0.20486888874);
    msg.setSource(31124U);
    msg.setSourceEntity(246U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(141U);
    msg.severity = 30U;
    msg.text.assign("STXBGYAJKQPYRJIHPBRGTYLYSJDKINJVAANZWZRCFSWP");

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
    msg.setTimeStamp(0.924435507977);
    msg.setSource(9764U);
    msg.setSourceEntity(114U);
    msg.setDestination(587U);
    msg.setDestinationEntity(166U);
    msg.severity = 121U;
    msg.text.assign("TJFHVXQYJJLNNLHQADGICLWYAJCJSYEZBEWBMABKNUXMFBHTKTECPATOGKJQBZIKRNWNYIMGDMGPPZSUSCYQBODTSMQEYLESDROVBVIPJBCUIIBG");

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

  return test.getReturnValue();
}
