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
    msg.setTimeStamp(0.125390542711);
    msg.setSource(2510U);
    msg.setSourceEntity(19U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(145U);
    msg.state = 170U;
    msg.flags = 143U;
    msg.description.assign("OEPIHNTWDNVSYOOPNUDJZQQQHEWAJEYV");

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
    msg.setTimeStamp(0.680237562171);
    msg.setSource(31653U);
    msg.setSourceEntity(199U);
    msg.setDestination(34017U);
    msg.setDestinationEntity(127U);
    msg.state = 241U;
    msg.flags = 59U;
    msg.description.assign("JFZAFDDQNUZXNURHQCEPNBHENCAHFCKAOKBVGGNJZBTSVWLMBZLJHCXURKPJLODOKVLYDAKJMQATFRFRMYEWCHWSOIPBNYAFTHSEFMNDOXTLEPGVLSYZTQRSIUBMGGZLTIUNTKOVW");

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
    msg.setTimeStamp(0.931463923813);
    msg.setSource(47225U);
    msg.setSourceEntity(62U);
    msg.setDestination(22085U);
    msg.setDestinationEntity(72U);
    msg.state = 243U;
    msg.flags = 29U;
    msg.description.assign("PLWLOGACGNBNLXZWXJCGZGRINVZCBKBZXOSGEKLTQEWRAUONLFAHUEJFPYMEIXPHKBNPYQKTPDUWEKZECG");

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
    msg.setTimeStamp(0.629003158511);
    msg.setSource(8569U);
    msg.setSourceEntity(75U);
    msg.setDestination(1333U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.0323029177175);
    msg.setSource(49816U);
    msg.setSourceEntity(140U);
    msg.setDestination(35381U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.419843919917);
    msg.setSource(11427U);
    msg.setSourceEntity(248U);
    msg.setDestination(17454U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.618122529176);
    msg.setSource(42891U);
    msg.setSourceEntity(114U);
    msg.setDestination(35573U);
    msg.setDestinationEntity(183U);
    msg.id = 3U;
    msg.label.assign("ZBGTOBWGFNOLOPJGLYJDIRRWEGCDYUELEZMPNZIKDUNVZUAXKPCSXQMNEVNUEBHZSMSDMQIKSMPHBUPRZVCPYJHSYPXUFGQUCHUTOBACSSLLIGY");
    msg.component.assign("DETMUAOMILIUWLWCQWXKUOUANYKUNVOMAQMCGKJFEZHDIIZXHCAFQXZYOPVGJLIGLSINJXUUSRHFGVAXATMSDLHSDBCFSBOLXHLAIERBQHGRNGSPNTFSONRGZKLXSDQJOPVYBQZXXPDZQUVVNTBNKWRAJEBJYJDCLCQPEHVAICRWPSTPTEJNQMFTWWMKOJPMVCHZFADUGFYIKRPEWCLDMKRYHRDCEYBKWSBQVXIFBYHTZVTUOORTBZFKYEN");
    msg.act_time = 4635U;
    msg.deact_time = 62216U;

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
    msg.setTimeStamp(0.600566805196);
    msg.setSource(54281U);
    msg.setSourceEntity(14U);
    msg.setDestination(38296U);
    msg.setDestinationEntity(102U);
    msg.id = 117U;
    msg.label.assign("YKLGAHKGGEMXJGHOQUAUECYIRAPDMJWCKJRQXWSIWHBFOUSZDWLTVBNIXWUBEOJPDMIGTFOGKEZBPMUNMAFOPNNCTTRLWFBFXDGQCHDIWVFQICJQXNYYBPZUSDNCEKYUSNZTJXBDNASECPZJCKQSHRYCDASRCAQNAQLUPOLRYBGLZHLPHUKLMAVTKEKXDYTJKYTVIQWWUHMRVFOSRESMZMWHRRV");
    msg.component.assign("HXCAVTOCGKRZZYBUYRULXNLHQXTHSTJMHSTEVZUUEBDIFDUWDRMWWZTIDKXZCNVAYLEAYMQWIBTNTIFPZZRRDBCSPTEJDSVVAKIXJMSOXPJEOGXJFOESHPKMKLYLGSQXSMQNQIXYOINNZJPLCHQR");
    msg.act_time = 37366U;
    msg.deact_time = 31011U;

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
    msg.setTimeStamp(0.730461328004);
    msg.setSource(39382U);
    msg.setSourceEntity(99U);
    msg.setDestination(48602U);
    msg.setDestinationEntity(61U);
    msg.id = 234U;
    msg.label.assign("UDIOASDRNMDSELWRKVNITJAXCUYSINPCZRKLHMPESCAXQZVMMWAGICXZXFXJHQRKWTBKNTPEJGZAZEAYAPLDMGFTIVDKWGIFCKKMEENIDLJTLHREHBBHWOUPWOURJEXJPWCDUNCZYBSYMBPSTGQHVHWTSMIFRXTKBPGNQLDZQJESSNXBPFLDQYVBONRZQFMULCLUHVBYRUPCQOOFURCYVOIHKJFFJGGSNYXMTOOIYQYVGTZEZUVXLK");
    msg.component.assign("URSWMXJGBWSZKVFUMSDDOODUPADKHVYEDSAAOPJLBLFGFJFNWUAKZLUMEEGLMPLJWUHCHPPWBHCYCLOQHHHFTNIPWCNQUVSPZLKZGWEDSRIZVXCHXLZQLECTRMRTVBRMGRFRUJZJBNIPNVEINTOXQRZQEFVQJGYTQIMHVMNSAUAPXZEXTTMJSYUYJKXFAICHRTATCVBGQXVDNAYQDKFYYWCRGCIQXKKT");
    msg.act_time = 34640U;
    msg.deact_time = 61130U;

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
    msg.setTimeStamp(0.991871072496);
    msg.setSource(39519U);
    msg.setSourceEntity(180U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(199U);
    msg.id = 82U;

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
    msg.setTimeStamp(0.512412247912);
    msg.setSource(44296U);
    msg.setSourceEntity(91U);
    msg.setDestination(43297U);
    msg.setDestinationEntity(144U);
    msg.id = 28U;

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
    msg.setTimeStamp(0.368066876044);
    msg.setSource(51491U);
    msg.setSourceEntity(81U);
    msg.setDestination(59225U);
    msg.setDestinationEntity(184U);
    msg.id = 84U;

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
    msg.setTimeStamp(0.537345571644);
    msg.setSource(64127U);
    msg.setSourceEntity(29U);
    msg.setDestination(55115U);
    msg.setDestinationEntity(147U);
    msg.op = 50U;
    msg.list.assign("RPAGUCAQNBFKOMSIDJEWBHMEYQPEFEIWUWFGGYEORZGASXLZMGPMSLXPLPHQAAONVJWTQLRLVUISZUYIOEHMBWDXNQOJDCKMMKCZMXQYKTAJLORNPTSNLZQVYOKTBJBTAKHXWYNBDORVTKCWIOHRVJVGPTYXPQEICAIXHRFZBIOCZFSCUGGEGUCQILJHWXANDZHMVDZTKFRNCGUJPEDATFCVBISSRKYVJESXD");

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
    msg.setTimeStamp(0.709636229932);
    msg.setSource(38343U);
    msg.setSourceEntity(139U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(81U);
    msg.op = 246U;
    msg.list.assign("ICHVRMUXMKFQSHYLGHFLMBVIQQJCKMDPOAGXGLIIOCZUQZOXDWJUGTNNVTKEBCOTZYLKYEVDHGQFOGVCAFPXOOMOBLRVDXNXEPSTPMJBPOQRUJSXTYWTGPLNHHPEJARFRNQZUEMZIFWCEACFLUDHRKZSJKJLTALPUANQVGWIJKAAKWXADBSQMGDZYWNECXILGWEMAHBIBCYNSOJCBWYTUSZEWRD");

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
    msg.setTimeStamp(0.300451621914);
    msg.setSource(37775U);
    msg.setSourceEntity(71U);
    msg.setDestination(8337U);
    msg.setDestinationEntity(59U);
    msg.op = 148U;
    msg.list.assign("FOGQGOHOGBZKIKXTBLUDYNDUTPOTFMOHLQHBMMZUPWHYDKBCGIIIRJPBPRHMWSAXSLNJPCZWAJVLEVQKVDFCIEAVEYCJWKHUGINTZPQNYMICWOYKZCAGUNOUGETXETEFFOWNWVPRQTQXDLIOYSEVD");

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
    msg.setTimeStamp(0.732789701797);
    msg.setSource(18421U);
    msg.setSourceEntity(159U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(33U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.453990124273);
    msg.setSource(42772U);
    msg.setSourceEntity(233U);
    msg.setDestination(49735U);
    msg.setDestinationEntity(124U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.00925663064647);
    msg.setSource(19778U);
    msg.setSourceEntity(155U);
    msg.setDestination(4146U);
    msg.setDestinationEntity(28U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.911017541305);
    msg.setSource(48062U);
    msg.setSourceEntity(193U);
    msg.setDestination(27957U);
    msg.setDestinationEntity(254U);
    msg.value = 34U;

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
    msg.setTimeStamp(0.953464428223);
    msg.setSource(46986U);
    msg.setSourceEntity(153U);
    msg.setDestination(65088U);
    msg.setDestinationEntity(20U);
    msg.value = 136U;

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
    msg.setTimeStamp(0.574431521687);
    msg.setSource(58606U);
    msg.setSourceEntity(86U);
    msg.setDestination(36372U);
    msg.setDestinationEntity(134U);
    msg.value = 153U;

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
    msg.setTimeStamp(0.00395940062753);
    msg.setSource(41468U);
    msg.setSourceEntity(226U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(239U);
    msg.consumer.assign("OYHRQKGJMQSITPEVSCHNUYDGWPWOVDNFPUHPWRQOADWJFHQESVMTNAZLZODBHMGVAJKKQZYSIWQDLNHPFECSXOG");
    msg.message_id = 25620U;

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
    msg.setTimeStamp(0.789106739533);
    msg.setSource(54654U);
    msg.setSourceEntity(243U);
    msg.setDestination(60078U);
    msg.setDestinationEntity(149U);
    msg.consumer.assign("OTJXWDPPIRQJKTMVJEBMYMDGQQTASEBWPCMNMDRPYHKEAMHGDBGQVXYYUMROKCOKNWVQZNFGWCPFOKIJDCLSNUTUKQJORIHLETFPEXWZONDHSSHZPWAZXRZFBASBAXQLFWVEPOBRYFUJXVGRLOUGAIITILLCJXRLURZLSTNSXRCCCJC");
    msg.message_id = 21697U;

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
    msg.setTimeStamp(0.809789874675);
    msg.setSource(17386U);
    msg.setSourceEntity(218U);
    msg.setDestination(45958U);
    msg.setDestinationEntity(35U);
    msg.consumer.assign("IRFHBPEFMJVUTOJXBAZVYHUGDCVBCPEC");
    msg.message_id = 8925U;

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
    msg.setTimeStamp(0.569659417078);
    msg.setSource(17714U);
    msg.setSourceEntity(237U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.375239076063);
    msg.setSource(18069U);
    msg.setSourceEntity(158U);
    msg.setDestination(52499U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.6465243949);
    msg.setSource(2142U);
    msg.setSourceEntity(92U);
    msg.setDestination(23140U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.683407719125);
    msg.setSource(20295U);
    msg.setSourceEntity(166U);
    msg.setDestination(33166U);
    msg.setDestinationEntity(191U);
    msg.section.assign("JDUXVRQMFWUBJWOAXDDHFISRLBOCLXKKVOASKHGMIOYDCNXGVBPRECMUOAJWQGGCVUCQBZNQBNZFPRFMYTSBSJTDQTHLZXVTEEEGWPPZMZDVSQMOJRINDRIEYUYKADLTYKZRCBJCIWRCJWNJGWDPSTVGUNAMILULXXMHRWUTOBNOBTAKYUGIKAFCLVPYEFNNLRAXZFPYEXJOFHQBQWHDVNTGMHUEHYQPIXIFLASLHSAGOZQCEPPKSTIME");
    msg.param.assign("YNBNTSVVZQSHKUJMCEUTVFNWBEQJHVJYBOBEXFOGXCWXHHCFIGGLXJYRETVMVZUYXKIOHIKBGCLZEFUPRWVGTEMDJLPGWBRHQZFOIZRWZQSLSYYPMSTATFSQDTBLOZJGYWXFNITCSNFKAKVYSDIAOPOQKYXRCUWJRODMAQBTEILBWMPLPRZXSNNICY");
    msg.value.assign("YYPRELSUZVLIBZKVEFARSKORKIJHZAHGTQENDNSPQIHGHWKLAONOXTMSBAOQBCJBLRUAVAHHPZIOEWIZJUGJXEHSSWEUKQVPETVBNYFUNBJLPMCFXNRACGRZPFHQWMZDDOIXPYCLCQGWAKMPDUYZROSWEQYFRZW");

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
    msg.setTimeStamp(0.386890812021);
    msg.setSource(42616U);
    msg.setSourceEntity(223U);
    msg.setDestination(39063U);
    msg.setDestinationEntity(243U);
    msg.section.assign("GDGWDHTWMTBICLMUCAILCWBFZDGJHFEUMLIYTEJZDJKFRKKTVKSJBNUXSNNJLTSALWPEXHDDSNAHYNKYQVOOTFTMWEGWYVBCAJSGIPUQRCZOCJUMVIANGPFXYRNIQJQXSQYIYFZXUDBBEBVKHQRAFMQOXOLZSTZKHXJYLGXBPEXIUAYRLOXHPSEPRPWRWSTORJIVGDBWPHZRVDMDPMPAFELKQNKEVMVOCTOGEAHUVR");
    msg.param.assign("SPWIMLHRJXBHYAVUPBMTMPZUVKIAOSR");
    msg.value.assign("ZPHIXCJTGWOPXJMHGSWXVVYDWNKRZOJNNTVVUZEGGZVSKYJVHUWVYFSY");

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
    msg.setTimeStamp(0.0278037795741);
    msg.setSource(4913U);
    msg.setSourceEntity(135U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(155U);
    msg.section.assign("SWLQADUCUVIHHBYNSTTJCNIXKXMGQMSURZYZDMPMKRYOABSYGTRDRQIRDJVGMQPYWAAHCHSCLMUTBWWCUCSPOFWKTL");
    msg.param.assign("GXCIVYPDJSFOPZXUIWAQRDLSYDZXRDFLLSAONSKJATJODJGAOENWVZIVHGRBCJQUFLBFMCXPLWEOVRAI");
    msg.value.assign("OYWVWXZNCFHBKQLYURJKICINJUTHPLBESKILJQJVFVWLHDHZAOKVXRPYYAXDCEZAWJKBSZFRBAQKSCZGHNYRGTCXSMNEFQCQBDDDJYBNMWRETHUFGPVDRPIWIHQEHONBFZMCTOWSEHNPURYV");

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
    msg.setTimeStamp(0.110839696987);
    msg.setSource(14130U);
    msg.setSourceEntity(247U);
    msg.setDestination(62450U);
    msg.setDestinationEntity(158U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.128929867698);
    msg.setSource(5484U);
    msg.setSourceEntity(138U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(195U);
    msg.op = 93U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("SFCEAVULKOIMDYZOPYKRTWHETBMRNOWCLHIMNXKOOJLOKGCLAXFAJVDHBGQMRCLVSAEBQRHIHUDFKTQYTXYSUABYYZOVERKPWZDVXHCVLGNCIVVGEMZQRLVCQHDLMEMKGEJMNDQAEGRHIPXQPZFUUWSUAYXTFTJTUSTGHBWIWNYGYJBQEVJONGCPJPOSXPILFRBBPDTFIPMXD");
    tmp_msg_0.param.assign("TRVWSSNSXJUQEMBEQWASFXKOCPZLBMPCXMOFOVAVQLHIZPGKXUGAUTXNPQLENFMNAZQYKPNBINTQOBTMSOYJQDIRVFEDOAVBCBUJPHYDMQXIXWQULDARXYLFYNMDHVSTSEGPIDDKSDDSABNHXZZKFHELIWWWHTFHCLELAUGGDBRZVEJNRGNHZOUOCAXIJFWURRWKMUOUFGJMMYGRVCLTYPPSZJEICZYR");
    tmp_msg_0.value.assign("HYIITNDCJPHTOCZOECGDDEERKGSQANDMIFULHXLCDJBAGZAIYPWUJELCUTKHPZYHYXEENWSLVGJTQAQBAZFBXLZCVIYSSNRAUGWCIMSRPWAYRQKPZVQIDSMPJODVEQXOOUHPVZRSXNSWAKFMUOXBBWIWWFNGKMPOQETFJMGVR");
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
    msg.setTimeStamp(0.286060648555);
    msg.setSource(5060U);
    msg.setSourceEntity(229U);
    msg.setDestination(45485U);
    msg.setDestinationEntity(115U);
    msg.op = 238U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("KZQNXEQUZWUFAOTCMIBCCQUTAFIPTVZTEXSGDHLKXGFWHJIIXMPVFRXWGOJLYDFNKYPUCRLARJOVVDUIGYEIPNQGLWEOPLCSGNANYBPNFJZLVJQJOPCHDHSSWYM");
    tmp_msg_0.param.assign("FIZFWLROXJQKSKERZADFPRPOJULAAGAVKUSUEHEPAPQCSWLZSHFNKKBLPYRVOBMNTHUCWLKFDVTJLQFUDVRMJUBMMECBCKEMOZYQLAHGVQHSQGAUUHWJIVIBHGSQFOADCTGARZYRXBWTWRFOWXOXXCXNWZDFNXPXDSEJNKPTUCKEMTEMFTO");
    tmp_msg_0.value.assign("XOAWAPDJLXZFWPDRXSZCSUIQZHRYRFOCVYYHEMHQTUPWXGEOJJKYQGIDALGVSNLHEAYOXQJLWDSCAHDZVKXOZIBMFWCSSBBYWEBVRZBIHPTHYOLTQPQEHCGRVSBCVFGILNPXKOUJIGZTVYACDMKWJJFNYNFCJJIDYTUDSEAKNXRKTUMNXVGKQEFJAZLXMUMAHGUMFNI");
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
    msg.setTimeStamp(0.429519234643);
    msg.setSource(57645U);
    msg.setSourceEntity(37U);
    msg.setDestination(27035U);
    msg.setDestinationEntity(103U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.674930496717);
    msg.setSource(40522U);
    msg.setSourceEntity(130U);
    msg.setDestination(59938U);
    msg.setDestinationEntity(90U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.543261611859);
    msg.setSource(12788U);
    msg.setSourceEntity(18U);
    msg.setDestination(49252U);
    msg.setDestinationEntity(191U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.210543732582);
    msg.setSource(13610U);
    msg.setSourceEntity(235U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(77U);
    msg.total_steps = 30U;
    msg.step_number = 178U;
    msg.step.assign("FVEQDZPXIXXXTRNNZJISGBLGJYHDOQPXBNLCLCEDHXVHGJHUYPHSZVBOROMG");
    msg.flags = 38U;

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
    msg.setTimeStamp(0.398287523443);
    msg.setSource(50425U);
    msg.setSourceEntity(159U);
    msg.setDestination(61832U);
    msg.setDestinationEntity(238U);
    msg.total_steps = 147U;
    msg.step_number = 65U;
    msg.step.assign("ZVYKEAHDAGBFAQSJXBGKTIXKCYELJCOBNCLEKUIGBQIVRWMFGMPKMHWMJHTZEBHGYTY");
    msg.flags = 109U;

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
    msg.setTimeStamp(0.90241565871);
    msg.setSource(36113U);
    msg.setSourceEntity(7U);
    msg.setDestination(35068U);
    msg.setDestinationEntity(190U);
    msg.total_steps = 111U;
    msg.step_number = 60U;
    msg.step.assign("FOPEMCHDIPKJAUVDUCCZMESOBHACZYUJBAVYQHFLWNQTMVBDYXFYIKCJRJTBVWWCQUBKVEMGZRPMNFTCXXLHWUOQDWMGULNGPAJVRDGOWZXXJENSRDDWFPRKGDUZMRMEQOKGKLTYZNTBSLEQVEBQTGQKNAYJ");
    msg.flags = 188U;

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
    msg.setTimeStamp(0.252415713135);
    msg.setSource(27475U);
    msg.setSourceEntity(141U);
    msg.setDestination(8651U);
    msg.setDestinationEntity(34U);
    msg.state = 253U;
    msg.error.assign("PMQUACXISTJHBVBZASGKUAMIGXOEYOHGQJWKGAOWKKCLWFSBDXNVTDQGFPNGHUTMZFJQZIIVDITUWAQICEZJVWNUVSAFSZBXLBFNDWKSLFRNQXRPJDARTMMYLQOFSCNNQBPMDEIPCIRCYLHNKNCRUOTSLRXNPRSXVFCZZWJPBXJEVAMDEXPIWRYER");

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
    msg.setTimeStamp(0.827489197291);
    msg.setSource(43000U);
    msg.setSourceEntity(33U);
    msg.setDestination(21204U);
    msg.setDestinationEntity(145U);
    msg.state = 147U;
    msg.error.assign("EYLSWBXQYAXKQCHJWWTNKUUATIQGKNQOOHBZYKSITYYCQMJAFEBCQAJGBFIPNLTFICBPSZUKOPVHTPEWRVGETZRCDYDZMEXCXSWRSTGMSZBALVEGRFIFMTMSMNNDYBWXNKZLYRAYQLDJDFHBSPPUIDDULUIGXXEINUQLXNPXHCUUVMIAULTMEGZDMZMKOIYWVVCFSXJPAHKKBOLHHJDWOJCFLAKNWRQGEVGOPZFOJWSOTVJV");

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
    msg.setTimeStamp(0.17036763419);
    msg.setSource(28265U);
    msg.setSourceEntity(155U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(189U);
    msg.state = 58U;
    msg.error.assign("KIDIOBATCLEKVWP");

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
    msg.setTimeStamp(0.57839980558);
    msg.setSource(18790U);
    msg.setSourceEntity(205U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.329854327152);
    msg.setSource(65138U);
    msg.setSourceEntity(28U);
    msg.setDestination(31036U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.210823370457);
    msg.setSource(54011U);
    msg.setSourceEntity(27U);
    msg.setDestination(41864U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.744741584951);
    msg.setSource(52932U);
    msg.setSourceEntity(15U);
    msg.setDestination(12137U);
    msg.setDestinationEntity(212U);
    msg.op = 108U;
    msg.speed_min = 0.956383205378;
    msg.speed_max = 0.947043466719;
    msg.long_accel = 0.607939558767;
    msg.alt_max_msl = 0.696417054439;
    msg.dive_fraction_max = 0.0497358319281;
    msg.climb_fraction_max = 0.16165782332;
    msg.bank_max = 0.841814170552;
    msg.p_max = 0.389736501128;
    msg.pitch_min = 0.0170121685065;
    msg.pitch_max = 0.379624800318;
    msg.q_max = 0.991857141389;
    msg.g_min = 0.644582620579;
    msg.g_max = 0.822895886918;
    msg.g_lat_max = 0.412165034561;
    msg.rpm_min = 0.676863684364;
    msg.rpm_max = 0.979160884197;
    msg.rpm_rate_max = 0.211225026123;

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
    msg.setTimeStamp(0.760618191215);
    msg.setSource(12140U);
    msg.setSourceEntity(119U);
    msg.setDestination(9940U);
    msg.setDestinationEntity(173U);
    msg.op = 101U;
    msg.speed_min = 0.132841312459;
    msg.speed_max = 0.504724098087;
    msg.long_accel = 0.782330319222;
    msg.alt_max_msl = 0.664469906883;
    msg.dive_fraction_max = 0.0330363465539;
    msg.climb_fraction_max = 0.278952025386;
    msg.bank_max = 0.70808787513;
    msg.p_max = 0.231796566449;
    msg.pitch_min = 0.153093559206;
    msg.pitch_max = 0.161744410963;
    msg.q_max = 0.983740004272;
    msg.g_min = 0.988060694632;
    msg.g_max = 0.753210062853;
    msg.g_lat_max = 0.747075756547;
    msg.rpm_min = 0.29269367681;
    msg.rpm_max = 0.0766613405805;
    msg.rpm_rate_max = 0.0621014430159;

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
    msg.setTimeStamp(0.800795248658);
    msg.setSource(26850U);
    msg.setSourceEntity(90U);
    msg.setDestination(4188U);
    msg.setDestinationEntity(181U);
    msg.op = 202U;
    msg.speed_min = 0.566732484299;
    msg.speed_max = 0.660614988191;
    msg.long_accel = 0.381772162779;
    msg.alt_max_msl = 0.344479529712;
    msg.dive_fraction_max = 0.988274032641;
    msg.climb_fraction_max = 0.12082721002;
    msg.bank_max = 0.270821053301;
    msg.p_max = 0.0163186097472;
    msg.pitch_min = 0.716602166688;
    msg.pitch_max = 0.653658476006;
    msg.q_max = 0.856114929432;
    msg.g_min = 0.340629868154;
    msg.g_max = 0.85833717615;
    msg.g_lat_max = 0.3782532687;
    msg.rpm_min = 0.724393341772;
    msg.rpm_max = 0.662540525354;
    msg.rpm_rate_max = 0.241461211666;

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
    msg.setTimeStamp(0.387303728624);
    msg.setSource(13760U);
    msg.setSourceEntity(232U);
    msg.setDestination(29381U);
    msg.setDestinationEntity(225U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.154204504547;
    tmp_msg_0.lon = 0.705807297924;
    tmp_msg_0.height = 0.559378188735;
    tmp_msg_0.x = 0.464019188248;
    tmp_msg_0.y = 0.718915192394;
    tmp_msg_0.z = 0.866190814612;
    tmp_msg_0.phi = 0.502359243405;
    tmp_msg_0.theta = 0.402666958163;
    tmp_msg_0.psi = 0.150846809306;
    tmp_msg_0.u = 0.976414283247;
    tmp_msg_0.v = 0.501072172898;
    tmp_msg_0.w = 0.382897136488;
    tmp_msg_0.vx = 0.11578326353;
    tmp_msg_0.vy = 0.662121389851;
    tmp_msg_0.vz = 0.822588468136;
    tmp_msg_0.p = 0.233700819872;
    tmp_msg_0.q = 0.661547939147;
    tmp_msg_0.r = 0.722946553854;
    tmp_msg_0.depth = 0.439031807713;
    tmp_msg_0.alt = 0.384361950703;
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
    msg.setTimeStamp(0.772456081702);
    msg.setSource(45145U);
    msg.setSourceEntity(12U);
    msg.setDestination(13565U);
    msg.setDestinationEntity(117U);
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 129U;
    tmp_msg_0.max_depth = 0.0262452921664;
    tmp_msg_0.min_altitude = 0.0231438677797;
    tmp_msg_0.max_altitude = 0.118752060312;
    tmp_msg_0.min_speed = 0.949245627496;
    tmp_msg_0.max_speed = 0.356882970691;
    tmp_msg_0.max_vrate = 0.00570794147717;
    tmp_msg_0.lat = 0.688322734932;
    tmp_msg_0.lon = 0.562009226708;
    tmp_msg_0.orientation = 0.938354351948;
    tmp_msg_0.width = 0.412051312755;
    tmp_msg_0.length = 0.496989717479;
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
    msg.setTimeStamp(0.93153561906);
    msg.setSource(62586U);
    msg.setSourceEntity(150U);
    msg.setDestination(51457U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.220403216827);
    msg.setSource(27517U);
    msg.setSourceEntity(61U);
    msg.setDestination(2200U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.371725377454;
    msg.lon = 0.708915167828;
    msg.height = 0.39447940545;
    msg.x = 0.666699609147;
    msg.y = 0.983705211204;
    msg.z = 0.165113734041;
    msg.phi = 0.248095146181;
    msg.theta = 0.301904996618;
    msg.psi = 0.719739673838;
    msg.u = 0.916214572217;
    msg.v = 0.112274335365;
    msg.w = 0.213079218561;
    msg.p = 0.681480032428;
    msg.q = 0.97077586525;
    msg.r = 0.523859703498;
    msg.svx = 0.658214918843;
    msg.svy = 0.0433994429781;
    msg.svz = 0.694536402143;

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
    msg.setTimeStamp(0.844899769022);
    msg.setSource(23205U);
    msg.setSourceEntity(6U);
    msg.setDestination(5303U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.307228737935;
    msg.lon = 0.763340611725;
    msg.height = 0.97920906666;
    msg.x = 0.350749235757;
    msg.y = 0.503032677836;
    msg.z = 0.290313121863;
    msg.phi = 0.418537643689;
    msg.theta = 0.887273365411;
    msg.psi = 0.350032485672;
    msg.u = 0.606989017249;
    msg.v = 0.0550512774895;
    msg.w = 0.551075902404;
    msg.p = 0.109736931971;
    msg.q = 0.312545391106;
    msg.r = 0.487725667309;
    msg.svx = 0.0890168434563;
    msg.svy = 0.111986803132;
    msg.svz = 0.613354868297;

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
    msg.setTimeStamp(0.841080471849);
    msg.setSource(3824U);
    msg.setSourceEntity(226U);
    msg.setDestination(22836U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.230137586076;
    msg.lon = 0.450548552408;
    msg.height = 0.981791765675;
    msg.x = 0.374945044252;
    msg.y = 0.880064495562;
    msg.z = 0.968098570725;
    msg.phi = 0.183636034043;
    msg.theta = 0.109841382428;
    msg.psi = 0.668769392958;
    msg.u = 0.999057564458;
    msg.v = 0.626518908177;
    msg.w = 0.487046579225;
    msg.p = 0.551600177709;
    msg.q = 0.77327145165;
    msg.r = 0.127283198073;
    msg.svx = 0.202657744091;
    msg.svy = 0.165008417449;
    msg.svz = 0.0653991011596;

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
    msg.setTimeStamp(0.703084238639);
    msg.setSource(26859U);
    msg.setSourceEntity(179U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(175U);
    msg.op = 182U;
    msg.entities.assign("POYHDZEKEXOSGJBQFLESRVCCAIMZRGELTAUXHEQSVMGHGUELVQEVPCLNWVOAOXNUHFBUGGKSXPZRMKEZSMPQYSEKIWURHNDXXBQQJRCDBSGYMVYWZGT");

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
    msg.setTimeStamp(0.880341963882);
    msg.setSource(15023U);
    msg.setSourceEntity(19U);
    msg.setDestination(43009U);
    msg.setDestinationEntity(200U);
    msg.op = 113U;
    msg.entities.assign("BIUMJVABMYZKLZDKZLAHTOUXRLXLLTWNPGKJXEZONAKNAGCFUGZIGSRMXUHOFILFJDFNUUBEPDYYSCBZQNSPHIOKGBHPVCIXMOJPCEWTFKVFJVSVR");

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
    msg.setTimeStamp(0.697038235435);
    msg.setSource(34200U);
    msg.setSourceEntity(225U);
    msg.setDestination(24896U);
    msg.setDestinationEntity(72U);
    msg.op = 160U;
    msg.entities.assign("HRFJMIFCFBVACJT");

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
    msg.setTimeStamp(0.55488636476);
    msg.setSource(44581U);
    msg.setSourceEntity(208U);
    msg.setDestination(47055U);
    msg.setDestinationEntity(76U);
    msg.type = 122U;
    msg.speed = 9130U;
    const char tmp_msg_0[] = {34, -84, -105, 79, -76, 66, -38, -78, 63, -80, 33, 23, -125, 109, 57, -54, -19, -115, 16, -59, 76, -106, -6, -11, 120, -78, 85, 102, 30, -3, 92, 122, 98, -84, -34, 28, -54, 11, -24, -56, 64, 75, -18, 120, 93, -12, 72, -56, -36, -39, 23, -47, -108, -83, -62, 19, -94, -11, -110, 9, 8, -94, 83, -6, -20, -47, -126, 94, 116, 62, 47, -10, 23, 61, -85, 74, 69, 98, 99, 31, 69, -14, -65, -125, 62, -53, -120, -59, 28, -103, -28, 14, 122, 98, 87, -93, 27, 58, -58, 77, -35, -4, 107, 123, -15, -93, 36, -66, -14, -111, -122, -68, -111, 83, -5, -84, 102, -80, -19, -66, -122, 77, -66, -103, 114, -1, 122};
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
    msg.setTimeStamp(0.0028076676198);
    msg.setSource(36151U);
    msg.setSourceEntity(186U);
    msg.setDestination(4729U);
    msg.setDestinationEntity(11U);
    msg.type = 101U;
    msg.speed = 3524U;
    const char tmp_msg_0[] = {-16, 62, -49, -73, -11, -86, 27, -67, 73, -121, -9, 23, 70, 96, -100, 115, 3, 37, -18, -46, -5, 72, 19, 78, 122, -1, -97, 44, 112, 50, 71, 98, 109, -30, -25, -126, 3, 88, -5, -125, -93, -128, 28, 61, -113, -120, 107, 53, -121, -38, -106, -72, 85, -69, 20, 114, -16, -88, 77, 115, -86, -76, -14, 32, -118, 44, -45, -48, 109, -113, 102, -19, -84, 72, -47, 12, -44, -24, 32, -66, -50, 93, 114, 96, 63, 90, 90, 96, -81, -118, -54, -27, 11, -25, -33, -43, -1, -120, -37, 5, 10, -30, 73, 32, -74, 79, 62, -34, -59, -31};
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
    msg.setTimeStamp(0.388133758907);
    msg.setSource(23966U);
    msg.setSourceEntity(86U);
    msg.setDestination(9703U);
    msg.setDestinationEntity(46U);
    msg.type = 83U;
    msg.speed = 27349U;
    const char tmp_msg_0[] = {45, -6, -85, -71, 31, -80, 114, 63, 101, 23, -20, -57, -103, 32, -109, -116, -3, 8, -14, 99, 89, 125, 88, 39, -13, -29, 100, -108, -122, 89, -41, 39, 73, 112, -51, -75, -13, -106, -119, 99, -78, -38, 88, -102, -82, -88, -72, -110, -5, -44, -5, -99, 33, -77, 84, 20, 51, -1, -126, 101, -44, 105, -32, -63, -85, -120, -98, -126, -95, 46, 67, 45, 84, 66, 75, 19, -82, 74, 82, 28, -102, -78, 9, -125, 84, 47, 120, 66, 38, 48, 75, -50, -126, 19, -47, -1, -97, -107, -8, -13, 90, -47, -14, 33, -54, -52, -83, 8, 74, -65, -115, -61, -85, 57, 123, -44, -7, 48, 73, -56, -84, -111, -43, -49, 12, 111, -50, 23, -9, -78, 112, -85, -6, -89, 14, 13, -60, 12, 107, 62, -110, -126, 11, -118, -19, 25, -126, -112, -53, -86, -126, 103, 98, 18, 45, 40, -15, 81, 62, -91, -60, 20, -110, 4, 18, -120, -7, 54, -120, 70, 25, -72, 107, -115, -71, 76, 49, -25, 30, -31, -49, 18, 69, 122, -19, 116, 21, 49, -93, -31, 13, -6, 11, 111, -117, -62, -70, 112, 125, 120, 2, -106, -20, -75, -71, -12, 20, -102, -7, 36, -56, -67, -100, 10, 3, 101, -92, -8, -98, 58};
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
    msg.setTimeStamp(0.964412383976);
    msg.setSource(8126U);
    msg.setSourceEntity(204U);
    msg.setDestination(35994U);
    msg.setDestinationEntity(228U);
    msg.op = 154U;
    msg.tas2acc_pgain = 0.992024382531;
    msg.bank2p_pgain = 0.484309164868;

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
    msg.setTimeStamp(0.873937246528);
    msg.setSource(47359U);
    msg.setSourceEntity(5U);
    msg.setDestination(61420U);
    msg.setDestinationEntity(10U);
    msg.op = 167U;
    msg.tas2acc_pgain = 0.692523860399;
    msg.bank2p_pgain = 0.0842036033003;

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
    msg.setTimeStamp(0.946653202099);
    msg.setSource(30442U);
    msg.setSourceEntity(218U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(71U);
    msg.op = 57U;
    msg.tas2acc_pgain = 0.110173811155;
    msg.bank2p_pgain = 0.895570925081;

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
    msg.setTimeStamp(0.0134045402723);
    msg.setSource(9803U);
    msg.setSourceEntity(76U);
    msg.setDestination(15379U);
    msg.setDestinationEntity(107U);
    msg.available = 43775709U;
    msg.value = 130U;

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
    msg.setTimeStamp(0.561169194139);
    msg.setSource(20790U);
    msg.setSourceEntity(57U);
    msg.setDestination(46375U);
    msg.setDestinationEntity(25U);
    msg.available = 3852918454U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.536081411516);
    msg.setSource(18342U);
    msg.setSourceEntity(1U);
    msg.setDestination(17053U);
    msg.setDestinationEntity(152U);
    msg.available = 1586714878U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.299227537876);
    msg.setSource(17219U);
    msg.setSourceEntity(4U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(157U);
    msg.op = 210U;
    msg.snapshot.assign("SEAYJBFAGEERTPZLUCEPXIMAMCAXRCGGOYXVFCXSLRKARWWLGXXFHIWYSDMZBHGVYNJBZEJUZIEDIECHNPMSXXYQGKOJBURXQVIKIBRVTZCSHOQHYBTWMCIYOQAPPRHVGJXQODUHUEGVZCGOTNHUMTZIPUKWQFPYBEWFTZDDSHKDLTLQKJDYPNKNGRCFASJSFPQMUVMSO");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 92U;
    tmp_msg_0.mode.assign("RODJRFLSFQCWZRATINSNBSUKXPGJLZHHMJOKXHCTIYJVARBUAMVTXSESDEZHWCFLILPQSYFMYWVEWCBOWKZBYRAOFSIQLODMEGVJPGHCZDJYHFQLTUBTXWECSURFIHQEDWYOBAZFTIDKBFKPCPKKTJGYEPNVMVEOVHBHQBWMZSWPGQRPNYXETBJAKOCVFZNPJURXLPGZLUUUNENVKACDNILYCZYOIMQDXADTQG");
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
    msg.setTimeStamp(0.871114843703);
    msg.setSource(63076U);
    msg.setSourceEntity(8U);
    msg.setDestination(35207U);
    msg.setDestinationEntity(72U);
    msg.op = 107U;
    msg.snapshot.assign("GWVGPEDBTNYFVOUNHRPVRJWSSACOLYPMQIPBGRYEAFTTGODZZNFDUWLNWXCGUBPKSVJKUDJJHJICVXQDRHUAPPZCKNFFMIXEBFMDYQUNLQAHXZCQKGVRILINCMTTZNZYJXEWSJKFZWFVIYLMSD");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.129344735206;
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
    msg.setTimeStamp(0.595501451013);
    msg.setSource(56945U);
    msg.setSourceEntity(113U);
    msg.setDestination(8455U);
    msg.setDestinationEntity(193U);
    msg.op = 54U;
    msg.snapshot.assign("QRUXZDZUVADGJYAKKGFBYKXTJKJD");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 53U;
    tmp_msg_0.snapshot.assign("AZTMZDJFOHYIWTSUMUFOBKJQOGZXPNLKEKIFABJWFJKYNIOBJJDDSJSGXPEYAZQFNLEYRDTBCSRUBLCWJCETZQDUQHVPRNHXIYLEHAIECBKKLGSXYXGTNMHCYHHCVWPRICZLIPNFWMUFDLRFWHILQKEJNSEFVAGSLOMUCPZOORWGVNAKO");
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.528806678626;
    tmp_tmp_msg_0_0.y = 0.322188123068;
    tmp_tmp_msg_0_0.z = 0.0369595257795;
    tmp_tmp_msg_0_0.phi = 0.369345643479;
    tmp_tmp_msg_0_0.theta = 0.40092142025;
    tmp_tmp_msg_0_0.psi = 0.00533107237413;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.489258568531);
    msg.setSource(46581U);
    msg.setSourceEntity(203U);
    msg.setDestination(22899U);
    msg.setDestinationEntity(236U);
    msg.op = 60U;
    msg.name.assign("UBLZPESVISOHSJNMVKEDNVTLSKCOYDOUEGUMHHCHZZLCEC");

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
    msg.setTimeStamp(0.286834953701);
    msg.setSource(32383U);
    msg.setSourceEntity(61U);
    msg.setDestination(63556U);
    msg.setDestinationEntity(114U);
    msg.op = 83U;
    msg.name.assign("CEHRBUVUJWYJGJAWYUHVMPAGBLEELGKKRFRQAJDRLPSXQBSZNFZVTUJRKMNNFXOJCOPADXWOAQSGERADXUDSCKLVNTWNIBXHRZLMYEPTVPHSYMQKUXJMSGYSEGFBZVNWJZDFLFKESXGXQVGCJOPIHZFLZBEINOOHIDIHYXPMHUPSWYQTFLARPEWUCKVRCUIRAYTOAQTIDSJCZOKGBLIWVWMWMFNIB");

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
    msg.setTimeStamp(0.135646374238);
    msg.setSource(4706U);
    msg.setSourceEntity(148U);
    msg.setDestination(55917U);
    msg.setDestinationEntity(51U);
    msg.op = 60U;
    msg.name.assign("ZBRICEQKUNULBEBTSQOFNPDMGIWGPXDZFBLNBVCISRVXXMMRVHXTJRGWAPEPRLFKACVYEMANADVWHLSDKTNQNGWPIIAHFZBEQXAMLHCKQGYEUFOYCZDGPFIWQQMRWHPSZNSQKPKTXJXTOJRTZFGYOKSBCOHWFWFYEWVTTZYSRRVOXETIUXYLRUBJCJIUOJIMGZENXGLJHKFLNUSAPMCCVDGH");

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
    msg.setTimeStamp(0.476504252327);
    msg.setSource(29980U);
    msg.setSourceEntity(99U);
    msg.setDestination(28968U);
    msg.setDestinationEntity(111U);
    msg.type = 242U;
    msg.htime = 0.126158102807;
    msg.context.assign("FHQHTGPXWARSRCVWFAWKJMPELBOILSJSGRRQRHCHXTOMTKNQLEJMEIQIRINVQKJIJKALTLJZMCVOPPSWOYFUXZLTOFISGIXAUBZWFUUHJCKJGMZAXWHUNVZAYDJYIYNYOLNGUUNTBWIEBCNDOCZWHDBEDUCIFXEMOQEVSADBDVNFVSUPRAVCEMPYKECDZQBGLCNPANKWFGKQYWOXQYLKXFRSSPZDTYQTDJMAGZTRGDBMXVYHX");
    msg.text.assign("OMNIAZVQGNWSCOAPCLOAFKZMUYWLUYDFRSETFITZFVKMATRACLQMBRHSYQBDFUUUNUYNEMFPGECUEXQPZCJHIWPXBNCAKQKAEMWRJJUZFTMWRZFH");

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
    msg.setTimeStamp(0.570280704061);
    msg.setSource(26683U);
    msg.setSourceEntity(75U);
    msg.setDestination(16059U);
    msg.setDestinationEntity(44U);
    msg.type = 151U;
    msg.htime = 0.719442279168;
    msg.context.assign("MGPRPCPAHZGZPWHHJFALMZVWLBDJLSOEHNAXCIBDUZVBEEJSJQTJVCUDBXDMBGSYAQENBCGORSTNVNWNXMIXKLORXRKAKHADTNSNEQLSQJLIVPNIGQSRYVFKORWORZLMUAAUQTTOJUCOYMUYGEPPYDDUYBWWQE");
    msg.text.assign("XFXJLUDAZPAQBCKSGEWJYDHKDGZLYISUWPUDYZIWDMLPATISCVOHFJXWYGUGNKDMUMRWHIBUBBYLJVNDPZTNUAFCRZSHXMWBPJHL");

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
    msg.setTimeStamp(0.952192603752);
    msg.setSource(40880U);
    msg.setSourceEntity(13U);
    msg.setDestination(1291U);
    msg.setDestinationEntity(166U);
    msg.type = 169U;
    msg.htime = 0.161120477652;
    msg.context.assign("THKWKLKWQZKIYPUZKTVSXYNJOXGXRZRWMUIDDARZNVYTBEAAHOPBAUQHWETEQSBXYICBSDGIWXJMVBMVDBHGCUVCLNNINGDLGAQMPPDIWREQGQLHKOFEEPTQZGWOFCLSSWZLJRBHRPGUJHNDUZYTNYFXMMSJBVKYMYJFTRQFIRUBGURAEKOFCAPQAJSTLENZZOVHXMSWFOGWTENIACFJKCRVFDTHOUAPLCCN");
    msg.text.assign("SRVGIWSBYPWJQMHNZPGQIC");

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
    msg.setTimeStamp(0.520655163984);
    msg.setSource(48305U);
    msg.setSourceEntity(207U);
    msg.setDestination(27373U);
    msg.setDestinationEntity(126U);
    msg.command = 52U;
    msg.htime = 0.768687178969;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 130U;
    tmp_msg_0.htime = 0.771254106497;
    tmp_msg_0.context.assign("YQHBOGVJZBBNHQACCWBTUDROEZPUIYDEVKSIZWZKWZROTHCQBIAVUKPQURFQGDLCPFVPJNHDIKPLNTYQOLNYEEXHSARVCIFX");
    tmp_msg_0.text.assign("NBZPSRTWMIWCNHJQTYAZEWUGIBAXLSONVSOOLQGUYMLWGDIOXWCSVQUFORAQMRDPKWDNEYFZJCRTSHELVODL");
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
    msg.setTimeStamp(0.633160210651);
    msg.setSource(8834U);
    msg.setSourceEntity(105U);
    msg.setDestination(64695U);
    msg.setDestinationEntity(179U);
    msg.command = 203U;
    msg.htime = 0.0953889728697;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 213U;
    tmp_msg_0.htime = 0.436393493873;
    tmp_msg_0.context.assign("SWMHPYDGZQPMKAVQKSYKVIZRGZPMBFPVLBOERHUSEKGCTG");
    tmp_msg_0.text.assign("OSDYVCLIEUEROQZW");
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
    msg.setTimeStamp(0.592377137545);
    msg.setSource(10820U);
    msg.setSourceEntity(105U);
    msg.setDestination(5876U);
    msg.setDestinationEntity(166U);
    msg.command = 8U;
    msg.htime = 0.229972441568;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 1U;
    tmp_msg_0.htime = 0.585929456812;
    tmp_msg_0.context.assign("HLFTEFQEABRQKCBPKZQVNLRNOSRMGBLUJJHGZGEMHJNZGHIJTQQTYZRNFMDDQOXVVWIJVJSNDYRCPVAIKMUFHSACRGYPWEUZOYWCMSOVBFXCKUFXPCUDKBUXSWAOVKGQSDUWTRYTTXHLGPK");
    tmp_msg_0.text.assign("EKSKQJHAMXCNJCWPOEFZSCTEEEVVEBJFBGIFPDARYZRUKZSGYUQUQDDPLAAPUIORSUDFJDEDVLEQOUNWRJMILYNATLKUBJRSVZJHAKGXWRYQYIQCNQBEBFYDQYOTZNRXBHTCIALMKOTDHVRYSZTPPWWOIWLXXWVOEZRSVXDAOXWNWCYUJHNPIXIBCCBIBSZDNJGHUTKFGMJMTPOSGFCRA");
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
    msg.setTimeStamp(0.925006778436);
    msg.setSource(33642U);
    msg.setSourceEntity(129U);
    msg.setDestination(64987U);
    msg.setDestinationEntity(172U);
    msg.op = 164U;
    msg.file.assign("NIOYQCXXMLHXYYHIRMGWPHZKYVESDGXLTMTXTFNHUOIDSIKPGASBVBXGPRCOMSKAVYSETJWZRDHFWUOOCLABQCQANSNT");

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
    msg.setTimeStamp(0.69336822823);
    msg.setSource(42481U);
    msg.setSourceEntity(158U);
    msg.setDestination(61653U);
    msg.setDestinationEntity(118U);
    msg.op = 110U;
    msg.file.assign("DNKFEXBYCCAVZXOPFNPELWT");

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
    msg.setTimeStamp(0.491681067122);
    msg.setSource(15986U);
    msg.setSourceEntity(201U);
    msg.setDestination(18962U);
    msg.setDestinationEntity(125U);
    msg.op = 166U;
    msg.file.assign("WDCQGJAJWNMYBATIRFWUZIUCJSOWJJKKEODARJZOROJZCORUKXCWUBVYEIIQTYKALIZBUPMPXWDLTTNEMCBTRULOUSNCAHYW");

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
    msg.setTimeStamp(0.859120499782);
    msg.setSource(15537U);
    msg.setSourceEntity(141U);
    msg.setDestination(10124U);
    msg.setDestinationEntity(92U);
    msg.op = 145U;
    msg.clock = 0.843202110766;
    msg.tz = 105;

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
    msg.setTimeStamp(0.125331849708);
    msg.setSource(59656U);
    msg.setSourceEntity(56U);
    msg.setDestination(5708U);
    msg.setDestinationEntity(170U);
    msg.op = 182U;
    msg.clock = 0.740067585456;
    msg.tz = -26;

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
    msg.setTimeStamp(0.548294605868);
    msg.setSource(4694U);
    msg.setSourceEntity(199U);
    msg.setDestination(65014U);
    msg.setDestinationEntity(139U);
    msg.op = 63U;
    msg.clock = 0.28154231231;
    msg.tz = -108;

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
    msg.setTimeStamp(0.524059461973);
    msg.setSource(46231U);
    msg.setSourceEntity(234U);
    msg.setDestination(12375U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.75139907499);
    msg.setSource(38821U);
    msg.setSourceEntity(79U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.591751354608);
    msg.setSource(20957U);
    msg.setSourceEntity(131U);
    msg.setDestination(8033U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.246189515197);
    msg.setSource(20759U);
    msg.setSourceEntity(181U);
    msg.setDestination(31304U);
    msg.setDestinationEntity(1U);
    msg.sys_name.assign("LXTRMVIDQFOMBAXROIQOCIBATEJMQCGCLSVZKRLZJDISTRJITXXGSQOYHAFNTJIKLRNOPFVSCFSXZBJBBFYTJSEPAAEUPPDDPVOYCUZHPLWNRQEKEUWZLWZUPTGGFYGILYKNJQRFLJDCKJECUEMRYJGMNEWDYOSWDWHUHUUDBIUKQVGHGNWDBTPUHMYIHXVNPAQMRGQVANSCWQVWRMNTHNEBFBMSXWXGOLEA");
    msg.sys_type = 128U;
    msg.owner = 42090U;
    msg.lat = 0.850599965503;
    msg.lon = 0.383363887725;
    msg.height = 0.104001453806;
    msg.services.assign("TOVADLSEWHAJCGOVEQIPNMDUKROZMGXOHBZJXUCPFIEXITZJANOHS");

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
    msg.setTimeStamp(0.540967540519);
    msg.setSource(52170U);
    msg.setSourceEntity(62U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("YOYRASOLZNHLRPPGBRDOHDANCRIJQKTKSSKWFQJUO");
    msg.sys_type = 151U;
    msg.owner = 18739U;
    msg.lat = 0.857221862845;
    msg.lon = 0.0602273673398;
    msg.height = 0.47297942603;
    msg.services.assign("EOVCUYFLGDEKIJPCFXYSYNLFV");

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
    msg.setTimeStamp(0.79746438372);
    msg.setSource(47336U);
    msg.setSourceEntity(212U);
    msg.setDestination(31071U);
    msg.setDestinationEntity(12U);
    msg.sys_name.assign("IVJPXPNMSWCYWCNVOKJRYMJOBXFEPVAASBICUBARJXGLLMKXGMZIVLJUYIWUHOHLRFJIUQADKCTWBSNEKBTSMKSADDYNFUFHGTHDKIVWZXOWILCPPAZXXHQLSDFQRTHQXEZMZAOTZIMHZ");
    msg.sys_type = 34U;
    msg.owner = 1721U;
    msg.lat = 0.354015156073;
    msg.lon = 0.556209009213;
    msg.height = 0.62809899824;
    msg.services.assign("EFYAGTZMVGMYJCPWYEHCMEWSJDXMYLKIHNOZAPOGSIHXHSBUBWWCFAUKTCQKRDTTYXCOSVQIBGPNSYFKLUHXMYOMWUNPJCXZSAQKWUMQBCBCGVFEVGJZCIDW");

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
    msg.setTimeStamp(0.282633314012);
    msg.setSource(11102U);
    msg.setSourceEntity(66U);
    msg.setDestination(30116U);
    msg.setDestinationEntity(10U);
    msg.service.assign("VGISOMFDILYDZSFRMQZDAYOKUSURWDVULJBWUNNOSYDEZCPQCTKCRRVUIPYNCGBDQSNCSMGOAZXQZJCWYAVPMWTEEFUGDTSJKHEGJLMKOPZNCXXMLCXBDQDYASAJZYZ");
    msg.service_type = 76U;

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
    msg.setTimeStamp(0.56120012228);
    msg.setSource(25002U);
    msg.setSourceEntity(96U);
    msg.setDestination(57887U);
    msg.setDestinationEntity(61U);
    msg.service.assign("UMOAWUJANCGSYAOOEYLQLCISOZDXVKBXGYRJSUOIKGZYIAFMEFVOITUHGABHDDGMMQQUENHJSGXLXVGCWCNVJFVHOXQBLRBEPMDFCWEKLTIFRRRUZBBNGWRPMKWJYDFVKJTLHQEUBWTXMNCSMBNJTCSJKOPVUDIQ");
    msg.service_type = 178U;

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
    msg.setTimeStamp(0.372396573445);
    msg.setSource(13211U);
    msg.setSourceEntity(168U);
    msg.setDestination(44969U);
    msg.setDestinationEntity(193U);
    msg.service.assign("UAAPFVOIXKNXELTECARMZWFOQJGXSJHIDE");
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
    msg.setTimeStamp(0.154852776529);
    msg.setSource(54226U);
    msg.setSourceEntity(246U);
    msg.setDestination(15721U);
    msg.setDestinationEntity(11U);
    msg.value = 0.122486358328;

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
    msg.setTimeStamp(0.531431195799);
    msg.setSource(5174U);
    msg.setSourceEntity(185U);
    msg.setDestination(37272U);
    msg.setDestinationEntity(137U);
    msg.value = 0.138980375835;

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
    msg.setTimeStamp(0.820849725807);
    msg.setSource(4484U);
    msg.setSourceEntity(106U);
    msg.setDestination(45322U);
    msg.setDestinationEntity(5U);
    msg.value = 0.600211881804;

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
    msg.setTimeStamp(0.665075579888);
    msg.setSource(29779U);
    msg.setSourceEntity(19U);
    msg.setDestination(23090U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0283538827957;

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
    msg.setTimeStamp(0.976074471888);
    msg.setSource(30367U);
    msg.setSourceEntity(20U);
    msg.setDestination(12959U);
    msg.setDestinationEntity(199U);
    msg.value = 0.200047092508;

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
    msg.setTimeStamp(0.800549222499);
    msg.setSource(60681U);
    msg.setSourceEntity(222U);
    msg.setDestination(1681U);
    msg.setDestinationEntity(45U);
    msg.value = 0.575072150604;

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
    msg.setTimeStamp(0.277113919016);
    msg.setSource(49134U);
    msg.setSourceEntity(116U);
    msg.setDestination(21753U);
    msg.setDestinationEntity(195U);
    msg.value = 0.899108370117;

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
    msg.setTimeStamp(0.844600457817);
    msg.setSource(50378U);
    msg.setSourceEntity(80U);
    msg.setDestination(22624U);
    msg.setDestinationEntity(72U);
    msg.value = 0.91136913917;

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
    msg.setTimeStamp(0.756915155278);
    msg.setSource(53835U);
    msg.setSourceEntity(98U);
    msg.setDestination(1825U);
    msg.setDestinationEntity(124U);
    msg.value = 0.861699644637;

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
    msg.setTimeStamp(0.155653390296);
    msg.setSource(35462U);
    msg.setSourceEntity(148U);
    msg.setDestination(772U);
    msg.setDestinationEntity(1U);
    msg.number.assign("ETFJOUPLPJTYDIGDXFVCZGHXQKYKHISRZRSROVPTLYFADFEOILNVMVBHAOXNQFXOTNHWQGAGECQHWFXOEJUUYOKVUNQCUKRKSRXYMDPNSHIUGHWADSKBSFLAAEYBQEQTPMRYKWNJGQKCCNDXWSNMJEGMHYXQUCBMIRBOSVSLJZUDJEACPZWFWVRPJJTWLXVOHSTIIMLGLZWTP");
    msg.timeout = 22561U;
    msg.contents.assign("OFLHEWIJZJUUWIXMYPZDPAMPSKLRTNBHKLWXEAKZOMQMCBTWGTDVGWHXUJMGDJQRDXLJXFTWPGVTSNNMLORVZMBYKOWBOAOUIJAJCVMYYRSJXNIIQFMNXZOCEHAHQYGLFEREVZRKFBPULHAWKCCUGQOTSVUWBYLSDQNCKRECCRNLVZZLG");

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
    msg.setTimeStamp(0.370702286113);
    msg.setSource(28529U);
    msg.setSourceEntity(187U);
    msg.setDestination(52706U);
    msg.setDestinationEntity(63U);
    msg.number.assign("GQAMMRKFUVRGANTEVCKWDTQKQZXMRYYKSWFGXAESSSIQKLPGMWOVVOLRSYCZIJCMELHGPKSHLQOVUW");
    msg.timeout = 1489U;
    msg.contents.assign("RWKNDMNUCWUTDQCHQFTOKWPVACJKPIHJUFXJJHRGUZLRESHUOWLXZSZFYGOZGOGJLHXAIDFCAVEOPEHUWYYYKIXLPQMQPZZVXLLWEBTUGMWFNRFMOXXTCAIBHDMECDPHALIEVPSFDAKJVBTPWEKNFFTBGUROJANCHYONQXAQGQMYCMKSXIVOHBCNWERNCBQRDYSQSMNNYDILRTBZVSMIJKTLDMTPOZGRZYGVVFISJEBBKRUSATAKEWLZBDXGV");

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
    msg.setTimeStamp(0.715183971772);
    msg.setSource(13898U);
    msg.setSourceEntity(217U);
    msg.setDestination(2999U);
    msg.setDestinationEntity(33U);
    msg.number.assign("YSNZQISCRLPUMFWIGBYFWBMCUCWBUXORQLXXVLGYQRVIIVCCEHCGJNMNEBZTNAYJQUZLGKTTKADYXHDPQYKXPASYTSAZEODVOLHYAHPEFNOJMBSFCXJ");
    msg.timeout = 44548U;
    msg.contents.assign("VIQROECYIYNQKXHDKGNWYXESDNWLOYLMPCREGTLOOHOVITZGI");

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
    msg.setTimeStamp(0.540090816915);
    msg.setSource(20771U);
    msg.setSourceEntity(44U);
    msg.setDestination(10799U);
    msg.setDestinationEntity(64U);
    msg.seq = 955410287U;
    msg.destination.assign("OYFYDKMIVXLNDHGITUMGCWKTIZXNCPMWEWFMIXPDXUTOFQNMMLBAZZEJSRRHJJDY");
    msg.timeout = 22596U;
    const char tmp_msg_0[] = {-82, -49, -5, 31, -94, -102, -91, -116, 76, -59, 47, 12, -3, -86, 56, -2, 78, -51, -94, 72, -71, -48, -87, 34, 107, -56, 120, 81, -114, -121, -128, -113, 53, -18, 112, -80, 22, 86, 113, -80, 60, 67, 15, 122, -33, -26, -107, 89, -71, -101, 18, -65, 36, -32, -22, 53, -122, -7, -121, 59, -12, -116, -96, -18, -4, -79, 93, 86, -100, 125, -2, -4, 69, 89, -80, -80, -17, 108, 43, -46, 94, -14, -24, -12, 35, -62, 63, 90, 23, -11, -126, -58, 86, -4, -126, -120, 82, 87, -71, -66, 4, -71, 37, -64, -42, -8, -14, -90, -68, -47, 94, -118, 80, 72, 67, -100, 114, -110, 60, 85, 85, 92, -100, 62, 101, -24, -114, -98, 102, -100, -54, -95, -119, 97, 112, 89, -37, -19, 28, 74, -7, -34, -115, -55, 34, -113, -110, -33, 75, -58, 95, -87, 88, -85, -79};
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
    msg.setTimeStamp(0.876105937203);
    msg.setSource(47349U);
    msg.setSourceEntity(12U);
    msg.setDestination(16704U);
    msg.setDestinationEntity(81U);
    msg.seq = 3516453345U;
    msg.destination.assign("JIQTIQZXRVOBONEDKWKVSYCOPZDIPISNYMRNARTXBMKWVHUWLAGRDJKCZXHUABTSGFEPBLQYKLPZWTFIIDEVVYHGMHWBFAPKRUIHQTWGPFGLUNSELIVMWLYQKXCUSXMEUSSEJRDANCTTLAESUYODPBFRRZACNXOMBDJDZHGNBVOCXCJGLWFBFTNYWLPGJCJIPENQZJMOY");
    msg.timeout = 39141U;
    const char tmp_msg_0[] = {-69, -73, 28, -63, -35, 27, 78, -40, -57, 67, 56, -80, 15, -103, -122, -3, 116, 9, 99, -53, -43, -68, -79, -32, 121, 86};
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
    msg.setTimeStamp(0.662722728573);
    msg.setSource(57442U);
    msg.setSourceEntity(18U);
    msg.setDestination(64567U);
    msg.setDestinationEntity(238U);
    msg.seq = 3239666342U;
    msg.destination.assign("CVYNUJTLEQIZIQAYPRDLKONTQQDFSUROFQMZOIYHTBHFFVROZBKGRYJZSPPHVLUQANWGTHBTEPXGIYPJEEMFKDLJBSOLODWXDIWBVTVOJAXQYTRWBYQNLVIGEWKFSCAOYHRAMXZLUUCVMMCQSCREOEMTPUFJ");
    msg.timeout = 61382U;
    const char tmp_msg_0[] = {-32, -91, -112, -25, 95, 112, 39, 60, -29, -88, -17, -18, 72, -48, 90, -45, 44, 14, 59, -35, 77, -106, -93, -52, -5, 4, -128, -57, -32, -55, -25, -78, 57, 115, 50, 86, -8, -77, -36, -35, -22, -35, -3, -13, 49, -21, 63, -122, -119, -99, -85, -93, 87, 111, 52, 59, -15};
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
    msg.setTimeStamp(0.473306661573);
    msg.setSource(12531U);
    msg.setSourceEntity(67U);
    msg.setDestination(55826U);
    msg.setDestinationEntity(19U);
    msg.source.assign("TGFFQHEUZWXASDDSMPKWAHLDSNLQEPKGPPENKULWFOTYOT");
    const char tmp_msg_0[] = {71, -53, 55, 73, 11, 74, -125, -37, 67, -43, -82, -107, 53, -83, 67, 5, 126, 99, -34, 81, -17, -73, -104, 39, -31, 111, 41, -10, 91, 23, 73, -45, -105, 30, 2, -13, 110, 20, -55, 97, 15, -54, -43, -125, -38, -92, 11, -30, 31, 46, 24, 107, -91, -114, 73, -67, -21, -102, -33, -87, -46, -93, 123, -1, -51, -118, 15, 71, -36, -47, -40, -11, -105, -114, -71, 17, 25, -95, 74, 101, -72, 106, 105, 30, 118, -108, 72, 75, -40, -104, -34, 106, 21, -54, 99, 62, -91};
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
    msg.setTimeStamp(0.89656838526);
    msg.setSource(35321U);
    msg.setSourceEntity(171U);
    msg.setDestination(10923U);
    msg.setDestinationEntity(143U);
    msg.source.assign("OVAYOFZTUEOGUDFGR");
    const char tmp_msg_0[] = {31, 20, 37, -3, 3, -121, 126, 99, -44, -124, -48, 61, -89, -6, 38, 91, 125, 9, 43, 52, -66, -123, -80, -21, -10, 71, 52, 70, -124, 125, 80, 31, -125, -43, 8, -53, -103, -17, -77, -114, -1, -82, 83, -103, -33, 71, -5, 90, -27, 103, -96, -125, 124, -124, -65, 83, 93, 98, -102, -41, -45, 51, 29, 85, 122, 65, 120, -115, -67, 82, 58, -90, -88, 98, 98, -103, -12, -124, -78, 12, 80, -38, -18, -18, 121, 74, 59, 110, -16, 17, 27, -116, 57, -32, 44, 0, -23, 95, -111, 6, 115, 71, 100, 10, -81, -39, -92, 51, -93, 2, -122, -115, 33, 27, -40, 27, 44, -68, -31, -33, -38, -113};
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
    msg.setTimeStamp(0.719415178375);
    msg.setSource(20115U);
    msg.setSourceEntity(122U);
    msg.setDestination(709U);
    msg.setDestinationEntity(215U);
    msg.source.assign("CQZOUTWGJVZKUTLMVKIPKQAUIYAPKAGCFPUDXIUBTPWRPWUNPHETOJEQYXHRCTFIZCHOTLSQMCXMJKSCGBMZIZLNYRTEYTYVJFMPIDFREKFCDDHMJRGDLBIOHVESDJRLZXRHVMK");
    const char tmp_msg_0[] = {-95, 93, -17, 96, 66, 8, -43, 65, -76, -10, -21, 7, -91, -29, -79, -36, 126, 79, 108, -91, -57, -52, -125, 105, -102, -96, -53, -103, 97, -92, 48, 88, -87, -12, 56, 49, 19, 53, -65, 10, -88, 84, -30, 80, 59, -107, -101, -50, 91, -75, 40, -11, 74, 0, -7, 74, -69, 91, -47, 70, 113, -14, -114, 94, 24, -73, 2, 119, 4, -63, -104, 122, 6, 63, 12, -71, -39, -74, -43, 96, -47, -92, 89, -96, 89, 93};
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
    msg.setTimeStamp(0.498340970442);
    msg.setSource(39048U);
    msg.setSourceEntity(150U);
    msg.setDestination(34443U);
    msg.setDestinationEntity(24U);
    msg.seq = 1970696679U;
    msg.state = 102U;
    msg.error.assign("RPRAFERHCWQWKTEAVODGQGCPYEXWXJLZBIJXCQXWOVYXOEDDYOQMPAMNUOQMFITMDIMVGRCIJPNUXDYGRIJQBNRMUZFDKYHBVWFGCEURCTCAINAYSBVJUIHRUEMZNWLWDJQSHXSMVOKJSDSPPCPBJFW");

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
    msg.setTimeStamp(0.602550319267);
    msg.setSource(40426U);
    msg.setSourceEntity(92U);
    msg.setDestination(37728U);
    msg.setDestinationEntity(215U);
    msg.seq = 31199711U;
    msg.state = 234U;
    msg.error.assign("LWYCUTHJFRSOTMPCTLJJUIHVJFQLZAFZTWJFNWJLAYKIPIOXOYZCXHZNEKTHNIBUKREPVYNPXVRXRWDBDHMYTBZBRSKDTHAVGPVWTEPMZUEPDGUJHWZSLOUIXAQXGGDOESVRBJCLMCKNRIHWTQLIUIBIQKYCEEFOYGFZPKBTZMKKRXSRAOADSCLDMLOFMFBPQVPLEMFSVKXDQCWSNOEXQEHUFGXM");

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
    msg.setTimeStamp(0.301984714823);
    msg.setSource(51594U);
    msg.setSourceEntity(231U);
    msg.setDestination(58188U);
    msg.setDestinationEntity(40U);
    msg.seq = 1322324024U;
    msg.state = 81U;
    msg.error.assign("CSCYPAQOUXVRWURMWTKMEWMSIJEUMHKOEARBTWQZPVVCEULIKDHGGIHEWDXYRFHLUBQSPSAZLASXYINACNYBRUPNGXVKTQ");

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
    msg.setTimeStamp(0.479329167685);
    msg.setSource(23870U);
    msg.setSourceEntity(81U);
    msg.setDestination(7891U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("KZZFFXOILODNBIDPPGTGSLDGUGTGFNJEWHIMWBLXGWLPAACGGUVNQYBJECALTWEKSTDHYKYUFQMCUMXUOWFVDQULYLQZRKNXVJDHFNNVFTYWASPNBSSBVWGKOBRYFHJQZXDAECCMIROMMQJOMHCSITYJCEILQBDQHFPTUSERXKRYZTOAIWVABALJKSZ");
    msg.text.assign("TBQIBUZUKNULAAXEHIWCRBXACUCVTQIULMCRERMGFQNKRXALNMFXJLSGPOJOZKGBFSZVDHNKRXIHUMWPMRJGDKYSDZECGBXZCUFLMLCPANOYSNELQJVQQTEKRGCOPBOQFQJNJBOSEEZWSZTHEKGIKWHHYASTQQBXJLYPEDWJADYPWVZGUGMTNVWVRGFTPKDWHCSNAIAZJRSMDPDOXJYFLU");

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
    msg.setTimeStamp(0.294686711287);
    msg.setSource(5799U);
    msg.setSourceEntity(65U);
    msg.setDestination(4928U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("GUPFKPIPONVOJFRHSCZYXRLNGBKYBNFFRRMWKBPSAHNQXIWSHJEQLBBQHAV");
    msg.text.assign("LLCBOPMWVAFTZQUGCWLUPSQDBVJMCBVFDFVJXYYPKEYGOYGPTHCORRUOQUGWIREXVCHESWNGLRCYOZIYWDBBKTINXSILLVAXSUSKANMHLVIGIQJNLEGBV");

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
    msg.setTimeStamp(0.643776596293);
    msg.setSource(55494U);
    msg.setSourceEntity(31U);
    msg.setDestination(5154U);
    msg.setDestinationEntity(101U);
    msg.origin.assign("SMYSKBYRZJIRGZBGRDKZHFSZUAXOEDILEOIQUBMSMSDWXKYPQUNPRPLFEOOJNNBKHDTTKRGHPLVAAYCIMZXYLNBCXLHWJVFQEAIHROSTZJSLUIPBDEFTSJRCVSVAHREAVWQINUFYCAXJFFDGWEXEIZWPQCTTJWQVHW");
    msg.text.assign("NYDKAXZIDTGWKAJYIBJXJYEXHCGEYNVKOQBDAAHIUGRNOOILDIHFABMMXCFRFBGVYRZDMTCSWBWPRTOVOSBNUNEEJMTUVSYYBKHUMNJJODWVQIVKMDVK");

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
    msg.setTimeStamp(0.31001264079);
    msg.setSource(50875U);
    msg.setSourceEntity(187U);
    msg.setDestination(7311U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("XFOKEGPJDHIAITMTJFPJUAWXUKBGKTNLJM");
    msg.htime = 0.938599801021;
    msg.lat = 0.0950566112998;
    msg.lon = 0.519735659236;
    const char tmp_msg_0[] = {49, 61, -21, -116, 75, -114, -92, -89, -99, 49, 13, 79, -4, -16, -70, 95, 71, 111, 98, -25, -106, 21, -109, -33, 71, -80, -78, -11, 61, -32, 24, -9, -59, -65, -9, -45, -102, 67, 61, 103, -99, -17, -19, -36, -53, 90, -3, 30, 101, -128, -16, -13, -102, -68, -96, -81, 120, -16, -118, 74, 73, 5, -38, 88, -16, -109, -62, -82, 123, 55, -113, 40, -46, -48, -25, 40, 112, 21, 101, -80, -57, -77, -121, 82, -31, 113, 28, -76, -42, -34, 15, 4, -37, -117, -53, -127, 15, 51, 102, 22, 75, 92, 126, 7, -69, 25, -16, 28, -90, -35, -32, -72, -94, 16, 119, -37, -55, -58, -3, -36, 123, 64, -31, -56, -53, -11, -5, 2, 92, -77, -117, 96, -117, -92, 101, -81, -32, 94, -44, -28, 3, -113, 48, -41, -20, 101, 17, 79, 102, 72, 97, 75, -23, -79, 22, -73, -84, 13, -32, 107, 114, 79, 34, -107, -106, -60, -15, 4, -115, -24, -95, 85, -3, 88, -13, -76, 12};
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
    msg.setTimeStamp(0.0926123447826);
    msg.setSource(45073U);
    msg.setSourceEntity(118U);
    msg.setDestination(41771U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("RFBZWJLXGWEGLZSRPVRTPAYNZERBHS");
    msg.htime = 0.878285927664;
    msg.lat = 0.57558939294;
    msg.lon = 0.506132382472;
    const char tmp_msg_0[] = {110, -62, 75, -35, 67, 3, 126, 25, -93, -85, 23, 88, 60, 104, 95, 3, 70, -52, 61, 90, -79, -87, -52, -115, -116, -4, -120, -30, -27, -78, 20, -87, 76, -115, 100, 52, 59, 14, -54, -109, -90, 26, 119, -111, -25, 15, -5, 103, -124, -70, -38, 110, 77, -28, 85, -89, 119, -105, 82, 87, 86, -49, 72, -18, -14, 41, 3, 124, -81, -100, 102, 94, 45, -59, 101, -50, -83, -54, 73, -128, -113, -125, -48, -62, 87, -27, -119, 29, 90, -44, -104, -78, 64, -78, 40, 88, -97, -2, 35, -76, -48, 59, -74, -46, 58, 112, 26, -110, -69, 86, 66, -108, 43, 36, -16, -26, 9, 17, -63, 61, -86, -66, -108, -125, -24, 69, -88, -22, -94, -107, 19, 3, 122, 103, 27, -63, 117, -82, 15, 76, 39, 43, 115, 80, 126, 50, -26, 24, 124, -60, 35, -83, -95, 10, 82, -55, 109, -53, 91, 17, -85, -86, 28, -52, 46, 34, -71, 76, -82, -102, 48, 89, -15, 94, 6, 96, -57, -84, 39, -31, -16, 24, -8, -100, -18, 48, 56, 99, 31, 101, 37, -56, -117, -111, 4, 91, 108, -106, -72, -41, 125, -28, -112, -6, -3, -60, 102, 67, -27, -39, -121, -4, -49, -85, 110, 105, -1, 79, 45, -114, 99, -99, -71, 58, -68, 8, -89, 77};
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
    msg.setTimeStamp(0.577100712551);
    msg.setSource(10246U);
    msg.setSourceEntity(175U);
    msg.setDestination(29655U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("JAZLLYTFTJVEUNSBRBDFKJSUHDUPNZCWGNOSOCBKWYDSUNRBDADQLOMPRNEXXOYWWEBAACLXCAENQAPLRJBXWHKSBRGQQZNCUDKAHRISJBTEZJLVOTYIKFZWVIXCOEEVARPJJTTVUMONULCFPAMRFGRJLAVFZKGIXLSKPIXYGEQHUQQHIYKHQLNMMXVNRZSGJIYTHBPIWSIHQIGEUTPMYBDUGYZSOPCMOVWGOYGW");
    msg.htime = 0.906984164374;
    msg.lat = 0.436134156962;
    msg.lon = 0.224438139725;
    const char tmp_msg_0[] = {46, 58, 79, -66, -1, -45, 81, 0, -41, -34, -50, -12, 32, -85, -97, -25, -28, 102, -99, 78, -58, 103, -114, -5, 100, 45, 97, -83, -15, -28, 68, 107, -22, 59, 85, 46, -113, 109, 4, 15, 11, 114, -57, -59, 80, 83, 97, -101, -108, -14, 99, 95, -68, -73, -71, 53, -17, 69, 83, -111, -67, -117, -97, -69, 22, 18, -69, -78, 71, -101, 64, 99, 40, -101, 52, 64, 30, 98, 18, -82, 66, -86, 54, -85, 112, -31, -127, 8, -125, 106, -47, -38, 19, -65, -61, -87, 76, -43, -30, 25, -5, -11, -87, -113, -81, -76, -94, -68, 17, -106, -63, 28, -97, -85, 61, 25, -61, 14, 74, -8, -16, -68, 38, -47, 29, 62, -76, -73, 121, -13, -123, 59, 36, 21, -18, -118, 10, -84, -64, 79, -4, 56, 83, -35, 91, -100, 72, -3, 97, -15, -124, -103, 49, -52, 51, 112, 0, 23, 53, 66, -125, 112, -120, -109, 95, -7, 36, -53};
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
    msg.setTimeStamp(0.185530322964);
    msg.setSource(41678U);
    msg.setSourceEntity(19U);
    msg.setDestination(47634U);
    msg.setDestinationEntity(162U);
    msg.req_id = 57732U;
    msg.ttl = 5534U;
    msg.destination.assign("QCELMFBLXZFQCKCVXTBOZTPNHOAFUQJYCIDLEMWJHKWPYVBZWI");
    const char tmp_msg_0[] = {91, 98, -76, -127, 10, -83, -17, 58, -24, -33, -88, 88, 69, 72, -79, 17, 96, 69, 25, 57, -27, 10, 0, 100, -12, 75, -24, 1, 24, 92, 90, 86, 1, 34, 114, -50, -29, 70, -34, 9, -46, 97, -75, 19, 33, 67, -44, 76, 117, 120, 84, -116, 79, 60, 115, -20, -29, -32, -71, 11, -45, -85, -127, 41, -66, -57, -64, 97, 44, 58, -105, 18, -109, 70, 64, -74, 67, -4, -120, 122, -3, -12, -114, -100, 55, 114, -35, 72, 41, -60, 82, -19, 10, -94, -79, 101, 67, -50, 6, -59, -95, 89, -90, -119, 125, 19, -73, 65, 106, -67, -7, -12, -76, 57, 30, -41, 123, -34, -50, 124, 3, 101, -24, 69, -88, -99, 84, 98, 112, -10, -2, 19, -77, 44, -80, -106, 94, 64, 59, 51, -59, 53, 69, 12, 27, -16, 66, 4, -36, 8, -61, 88, 59, 65, -12, 54, 44, -70, 51, 109, -80, 64, -50, -41, 30, -62, 116, -17, -54, 31, 66, -50, -61, 0, -25, -60, 14, -92, -29, -101, 100, 125, -80, -49, 25, 16, -117, -84, -16, 4, 110, -43, 121, -124, -47, 41, 52, 19, -40, 114, 87, 47, -14, 52, -113, 109, -5, -104, 105, 46, -116, -126, -44, 10, 3, -25, -61, -38, 86, -110, -73, 13, -90, -46, 93, -37, 70, -69, 21, -40, 70, -86, -113, 6, 79, 30, 113, 97, -71, -44, -27, 96, -102, -54, -57, -27, -84, -85, 112, -57, 24, 113, 66, -40};
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
    msg.setTimeStamp(0.881817021256);
    msg.setSource(52375U);
    msg.setSourceEntity(159U);
    msg.setDestination(59539U);
    msg.setDestinationEntity(97U);
    msg.req_id = 45462U;
    msg.ttl = 22687U;
    msg.destination.assign("WJYZKLCTZARCHTQLZUWSAIXGATRNPKLIVFQQYGDFFUBRVBHODZZVXMEKNEEVHSDVQJRTNXNCABGUJPTOHSGOEICSYFCJJZNMBDBYYPYPMCBSWAHJAHGLFQHYWUOPKKCXPUQNUPSZNUOOZRGIFKWOPUDUTHD");
    const char tmp_msg_0[] = {105, -102, 84, 72, -21, -45, 41, -47, -73, 22, -106, -44, 39, -8, 62, -39, -44, 24, -2, -56, -17, 71, 20, -95, -63, 48, 51, 115, 24, 33, 113, 101, 123, 112, 19, -6, -121, -91, -17, -23, 77, 104, 122, -32, -124, 38, 58, 55, -31, 83, -8, 85, 15, -87, -69, 83, -60, -6, 36, -18, 94, -61, 120, 70, 40, 102, -65, 28, 15, -49, 87, 123, -3, -5, -72, 7, -72, 82, 62, 64, 21, -127, -95, 103, -124, 102, -124, -106, -101, 23, 101, -58, -70, 21, -7, 88, -75, 20, 0, -105, 84, -53, 83, 109, -35, -55, 23, -124, -21, -110, 120, -48, -78, -57, -123, 94, -59, -56, -59, -32, 58, 73, -116, -102, -9, 93, 106, 101, -58, 10, -3, -120, 99, -71, 88, -102, 43, 53, -80, 50, -59, -118, -12, 20, -8, 57, -5, 108, 121, -68, 106, -120, 6, 44, 125, 18, 58, 59, 7, -25, 118, 104, 1, -101, -124, 58, -128, -39, 61, -125, -54, -121, 12, -21};
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
    msg.setTimeStamp(0.0644130055067);
    msg.setSource(47244U);
    msg.setSourceEntity(31U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(102U);
    msg.req_id = 45865U;
    msg.ttl = 63361U;
    msg.destination.assign("BXOHRCYLOABK");
    const char tmp_msg_0[] = {-118, 36, 0, -53, -61, -93, -78, 111, -36, -123, 123, -90, -99, 11, 96, -43, 118, -121, -36, 85, 92, -3, -3, 85, -27, 78, 75, 38, -70, 40, -61, 104, 74, 85, -23, -34, -21, 94, -36, -2, -71, -69, -77, -27, -124, 67, -78, 2, -114, -55, 44, -124, -108, 16, 46, 21, 41, -81, -1, -52, -35, 43, -89, -33, 2, -52, -69, -104, -81, 57, 57, -66, 46, 31, 34, 2, -108, -128, 71, -26, -41, 92, -72, -1, -43, -4, -66, -79, -121, -36, -68, -33, -69, 8, 91, -25, -118, 85, 7, 23, -6, 42, -94, 105, -65, -17, -121, -28, -10, 2, -121, 20, -15, 102, 27, 34, -69, 59, -111, 39, -92, 74, -72, -72, -33, 77, 5, 99, -52, -46, 42, -26, 41, -9, -49, -15, 46, 124, -104, -82, -74, 72, -35, 103, -70, -95, 69, -64, 16, 115, 69, 0, 86, 87, -30, 5, -79, 61, -120, -125, 71, -27, 114, -49, -10, 29, 15, 42, -87, -125, -112, -21, 47, -77, 93, 35, 4, -18, -13, -52, 95, 5, 19, 39, 42, 58, -38, -122, -7, 119, -114, 87, -75, 87, -98, 7, -116, -68, -73, 122, -128, 70, -110, -94, 42, 50, -6, -100, -71, -70, -51, -40, -38, 23, -70, 0, -66, 7, 112, 61, 35, 106, 46, 25, 50, -52, 60, -68, 54, 29, 59, 96, -38, -113, -82, -34, 114, -60, -100, -97, -103, -77};
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
    msg.setTimeStamp(0.30370317624);
    msg.setSource(42419U);
    msg.setSourceEntity(250U);
    msg.setDestination(11752U);
    msg.setDestinationEntity(215U);
    msg.req_id = 36362U;
    msg.status = 135U;
    msg.text.assign("BMQXLEQJTHFGPVSNAINRIJVMZGZOGHCXAJGRPCKBBPNOKFNLOPVLIPFURXVGTQKRQETHNXXKFUWDYFMLUZGBHEEDPCFRY");

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
    msg.setTimeStamp(0.728088410216);
    msg.setSource(22741U);
    msg.setSourceEntity(207U);
    msg.setDestination(29612U);
    msg.setDestinationEntity(44U);
    msg.req_id = 65307U;
    msg.status = 87U;
    msg.text.assign("GMQPAUXSHRHHEMWIVKVXXGTYBFQYFLOBEJNVANIYLGINRQSCPHBSKFJRYNELUPYNGTLZBLLXVFTAQTVEWCZQQOQAKAEIGLJERREFUUVHPOPUWMWOBKDTLGMNKCXSMHTCPODIXJXZDPMJNYRHHFMYZICCNYWVWAOZKBUEOTAGSBZSDLEURQFRIJASPBJDIMOTVKISNYOKZJUXTXBCVPMS");

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
    msg.setTimeStamp(0.767137073943);
    msg.setSource(19942U);
    msg.setSourceEntity(154U);
    msg.setDestination(57238U);
    msg.setDestinationEntity(116U);
    msg.req_id = 28338U;
    msg.status = 191U;
    msg.text.assign("QVUCVHBTWKLWZKKJHLTFEYPORLUXQOIAMFHHFTSJTBDINYKEUWOPMQYVAHGFIUGISYODFKCSKLUFLSBNKUCGOYRTASXQMNSCXAGSEQZFDOBRAODIBXOWNWCRCVLVSSOXJHTCMEAUJJZDCABDAEYBVZARQHGPIDGOTVDQUPKRPKFRIPXJVECVBIZQHZUTZYYJEYMDMJGZEAXPBLLIWEBQMZHPTNRMWNLVXWPJN");

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
    msg.setTimeStamp(0.493478999863);
    msg.setSource(50909U);
    msg.setSourceEntity(10U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("GHGXIWJJYWNVNUVCUMBLTKEPIIEGJZEFZSPYDMXDKKFWKYIBQGAHBRADGNOQRKYFRFLKPDQBDOZWYGEJVUFKFRTMVPQVPMWPLSIX");
    msg.links = 93329280U;

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
    msg.setTimeStamp(0.129195733775);
    msg.setSource(22773U);
    msg.setSourceEntity(218U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("PEYJYASDMXWDNWOAOEDFUIWWDYHUAZQKEPSHSUFKTXLLMJTGPGIJLMPE");
    msg.links = 2260167676U;

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
    msg.setTimeStamp(0.851757740312);
    msg.setSource(8190U);
    msg.setSourceEntity(202U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("DOABKQTMPANLFTTQZZMUUXDWQREFYYLWUVBKOIAROZFDRGXZDJBVSIUINHRCHSQHBYBSZYBGVTPLEUHYSCOFFOALCWYMYJTNKWXJQNMRNCDAEOMEISBXNVUWKBMDULAUGTCMIZPIHKYXETVLLNFARZXAJCEFGDHEGTOAMCSPIKCZNKJNBGPDVNJSPDLUMRDWQPGSCXRVZELIOFARFLQIWHTWKXJVUGXIQGQCQKBPJXRYHKV");
    msg.links = 1624985014U;

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
    msg.setTimeStamp(0.449214890885);
    msg.setSource(36382U);
    msg.setSourceEntity(76U);
    msg.setDestination(42795U);
    msg.setDestinationEntity(165U);
    msg.groupname.assign("NWBNYUGMIFACMLYRJHSPDSM");
    msg.action = 204U;
    msg.grouplist.assign("RCHPTXULRBYURJMSIBLCQIVQCFSDHZPPSLJOLMYATNDBRHFOVYXDWWVTGONZMULMWGZBJTJCRZRNGXEZNEWSDSIKB");

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
    msg.setTimeStamp(0.147563204679);
    msg.setSource(51038U);
    msg.setSourceEntity(244U);
    msg.setDestination(16755U);
    msg.setDestinationEntity(97U);
    msg.groupname.assign("GDVGIQJFLVFZCIPZHRXGDVWXMVVASKWPRIGVAZONGQKHLLCPYNYOTKENYSWGEODNNGOUKIWYIBWSYTMQIUZFQRLMJAQXPQMTVXYULCMJXQHGTJRNLEUAPFVQIJRRWETTZSAWDBKMH");
    msg.action = 161U;
    msg.grouplist.assign("LXXMRXYEZSQLZNHSAINBOEYGGTBNCPQCOAPQVWDOUIBFDNDPIFJCSXCKGLIVZRPWGMKOLKFGQDTMOOQZAWIHUZEMWUASPHGJCE");

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
    msg.setTimeStamp(0.485281931426);
    msg.setSource(32886U);
    msg.setSourceEntity(43U);
    msg.setDestination(19840U);
    msg.setDestinationEntity(141U);
    msg.groupname.assign("ETEPOQAAHMFCLVRKXMJJATBMETSIROTJYJRULHAHPWUVAMFJRNEFQQDOIGAPVZDM");
    msg.action = 166U;
    msg.grouplist.assign("KUGYTCZRHHERVWARHLBSJPRTPZWKAVXLZRPSWSOUMMUOQLPYSRSEQSIBVZSJECPQOJFKYABYIAUEUIRXEPVKYSTJKDTHDQIGKEJAJNBMGGLT");

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
    msg.setTimeStamp(0.868667187212);
    msg.setSource(27475U);
    msg.setSourceEntity(73U);
    msg.setDestination(8458U);
    msg.setDestinationEntity(115U);
    msg.id = 47U;
    msg.range = 0.937012192096;

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
    msg.setTimeStamp(0.448601174946);
    msg.setSource(1595U);
    msg.setSourceEntity(184U);
    msg.setDestination(8681U);
    msg.setDestinationEntity(155U);
    msg.id = 168U;
    msg.range = 0.43360272995;

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
    msg.setTimeStamp(0.437877097411);
    msg.setSource(21846U);
    msg.setSourceEntity(200U);
    msg.setDestination(29700U);
    msg.setDestinationEntity(149U);
    msg.id = 229U;
    msg.range = 0.429711952916;

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
    msg.setTimeStamp(0.347407969441);
    msg.setSource(7514U);
    msg.setSourceEntity(204U);
    msg.setDestination(35454U);
    msg.setDestinationEntity(41U);
    msg.tx = 77U;
    msg.channel = 96U;
    msg.timer = 37669U;

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
    msg.setTimeStamp(0.571466691733);
    msg.setSource(1155U);
    msg.setSourceEntity(193U);
    msg.setDestination(2351U);
    msg.setDestinationEntity(187U);
    msg.tx = 67U;
    msg.channel = 17U;
    msg.timer = 13244U;

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
    msg.setTimeStamp(0.322785532755);
    msg.setSource(24518U);
    msg.setSourceEntity(193U);
    msg.setDestination(366U);
    msg.setDestinationEntity(184U);
    msg.tx = 229U;
    msg.channel = 175U;
    msg.timer = 32515U;

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
    msg.setTimeStamp(0.135396859676);
    msg.setSource(3239U);
    msg.setSourceEntity(47U);
    msg.setDestination(40753U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("ONKETEVYDMQTORPPIPMLIKGPJVNH");
    msg.lat = 0.138557788367;
    msg.lon = 0.431040283441;
    msg.depth = 0.865792452046;
    msg.query_channel = 14U;
    msg.reply_channel = 14U;
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
    msg.setTimeStamp(0.865149096855);
    msg.setSource(1783U);
    msg.setSourceEntity(6U);
    msg.setDestination(388U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("KZWISAPSWDCEPTBYLEYDINVPQEFYUUNMFSZQQYQHVXRNSGYTBLAOVOMZWBCSDCMHLGLEWVJVVWTGXUGZEKGKWQBAHRXOLZTMDRNEFPDUCUOHJGYAXUJZVPJIEJNRKCWTHKSXDWOVDSIPFW");
    msg.lat = 0.813066127713;
    msg.lon = 0.340311035584;
    msg.depth = 0.605784260484;
    msg.query_channel = 195U;
    msg.reply_channel = 207U;
    msg.transponder_delay = 158U;

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
    msg.setTimeStamp(0.281611685039);
    msg.setSource(48458U);
    msg.setSourceEntity(105U);
    msg.setDestination(54628U);
    msg.setDestinationEntity(78U);
    msg.beacon.assign("UZVZNBJVHRESFMVKEXHFCJQVSIBKDCGTWOLCWXVOUPHRPPHAEQQUWYYUHBDOHJICTQZLXTPUKTACQVLKGZWXIYETMFHYMEJOIQCNAJBTPVDIBESBJXZONPTWFMNVKDMRBOYLKAGWUSANWGDQRMTGSGNBMPLIYNGXAZXSQIKZH");
    msg.lat = 0.334084536622;
    msg.lon = 0.554599070593;
    msg.depth = 0.546137824363;
    msg.query_channel = 187U;
    msg.reply_channel = 43U;
    msg.transponder_delay = 47U;

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
    msg.setTimeStamp(0.739849131874);
    msg.setSource(56508U);
    msg.setSourceEntity(22U);
    msg.setDestination(46301U);
    msg.setDestinationEntity(213U);
    msg.op = 136U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JCEIUILZCQNFSBRGFZWYAYHXHGPBPHTYZGESLQQKHDVQKHEFNVGNTDNMFZJBWTYZCSWNULLOMAHBMRGOBNJPK");
    tmp_msg_0.lat = 0.53549243068;
    tmp_msg_0.lon = 0.506089026236;
    tmp_msg_0.depth = 0.026784182183;
    tmp_msg_0.query_channel = 220U;
    tmp_msg_0.reply_channel = 163U;
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
    msg.setTimeStamp(0.681338703792);
    msg.setSource(43093U);
    msg.setSourceEntity(166U);
    msg.setDestination(39641U);
    msg.setDestinationEntity(213U);
    msg.op = 183U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BWKAORPVFVEZSRBRDQHNRQKNGXLGOVYOALPCOXYWQYLSWH");
    tmp_msg_0.lat = 0.820061233823;
    tmp_msg_0.lon = 0.0600438087929;
    tmp_msg_0.depth = 0.640977720752;
    tmp_msg_0.query_channel = 118U;
    tmp_msg_0.reply_channel = 86U;
    tmp_msg_0.transponder_delay = 97U;
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
    msg.setTimeStamp(0.611142780358);
    msg.setSource(668U);
    msg.setSourceEntity(53U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(82U);
    msg.op = 196U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IMNVVNNCPNSYFGLGZUZWQHGJEHFSKTOUEGCNHWEPACOPXOZPMQZGMCNBELENRFOKYWBRZMQSYHFAMYRDKVGNPJHWQHLJBDKOCACVWHGXUIIUHLBJTKVSGTJQURLZYLBASZAEVXN");
    tmp_msg_0.lat = 0.253932889761;
    tmp_msg_0.lon = 0.198143911288;
    tmp_msg_0.depth = 0.507334638747;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 242U;
    tmp_msg_0.transponder_delay = 53U;
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
    msg.setTimeStamp(0.770583810618);
    msg.setSource(44535U);
    msg.setSourceEntity(238U);
    msg.setDestination(12210U);
    msg.setDestinationEntity(219U);
    msg.address = 242U;

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
    msg.setTimeStamp(0.0319810328762);
    msg.setSource(34815U);
    msg.setSourceEntity(203U);
    msg.setDestination(58891U);
    msg.setDestinationEntity(158U);
    msg.address = 161U;

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
    msg.setTimeStamp(0.983664833064);
    msg.setSource(59963U);
    msg.setSourceEntity(240U);
    msg.setDestination(33391U);
    msg.setDestinationEntity(20U);
    msg.address = 159U;

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
    msg.setTimeStamp(0.677855582204);
    msg.setSource(30036U);
    msg.setSourceEntity(71U);
    msg.setDestination(46520U);
    msg.setDestinationEntity(214U);
    msg.address = 109U;
    msg.status = 77U;
    msg.range = 0.487778430807;

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
    msg.setTimeStamp(0.316446526094);
    msg.setSource(41031U);
    msg.setSourceEntity(80U);
    msg.setDestination(13386U);
    msg.setDestinationEntity(129U);
    msg.address = 9U;
    msg.status = 117U;
    msg.range = 0.791149677621;

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
    msg.setTimeStamp(0.327810422015);
    msg.setSource(32404U);
    msg.setSourceEntity(39U);
    msg.setDestination(4747U);
    msg.setDestinationEntity(220U);
    msg.address = 147U;
    msg.status = 232U;
    msg.range = 0.0135226589901;

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
    msg.setTimeStamp(0.280954563974);
    msg.setSource(25954U);
    msg.setSourceEntity(226U);
    msg.setDestination(42358U);
    msg.setDestinationEntity(171U);
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.281596206133;
    tmp_msg_0.y = 0.814461913807;
    tmp_msg_0.z = 0.161020294175;
    tmp_msg_0.k = 0.591990588569;
    tmp_msg_0.m = 0.357956016708;
    tmp_msg_0.n = 0.175254292044;
    tmp_msg_0.flags = 165U;
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
    msg.setTimeStamp(0.747346415988);
    msg.setSource(47353U);
    msg.setSourceEntity(86U);
    msg.setDestination(32844U);
    msg.setDestinationEntity(105U);
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.dist_min = 0.612475490875;
    tmp_msg_0.ax_cmd = 0.820388053275;
    tmp_msg_0.ay_cmd = 0.0734032162832;
    tmp_msg_0.az_cmd = 0.608063737084;
    tmp_msg_0.ax_des = 0.639483237625;
    tmp_msg_0.ay_des = 0.0477415173504;
    tmp_msg_0.az_des = 0.651363139993;
    tmp_msg_0.virt_err_x = 0.727176033118;
    tmp_msg_0.virt_err_y = 0.644161776257;
    tmp_msg_0.virt_err_z = 0.683397798545;
    tmp_msg_0.surf_fdbk_x = 0.529250044828;
    tmp_msg_0.surf_fdbk_y = 0.984927720269;
    tmp_msg_0.surf_fdbk_z = 0.119974366833;
    tmp_msg_0.surf_unkn_x = 0.109885115411;
    tmp_msg_0.surf_unkn_y = 0.651156550151;
    tmp_msg_0.surf_unkn_z = 0.291791349015;
    tmp_msg_0.ss_x = 0.605799064244;
    tmp_msg_0.ss_y = 0.144619668806;
    tmp_msg_0.ss_z = 0.0158299072045;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("AZKUCIGMOHJDBICJBVBKLSLPRTJMUUUJYTJADGGGDFNIRNPNKMNQYILPIFPZHMZUKYTVOXBFSSTCJUEGPWPRGWZITFQFNZWXKUQKRDEFYEKTPQVWQPSZXZCAVXJSHUVIAWZECVHHHOYECLNOKARBXOULZMXVGMRYBOLMNNELTCQHESCBOQJIPTAHOQUWTWXJFRXDVAOYRXKGDRIDSWDCKQOFESMHLWVCNGANFETP");
    tmp_tmp_msg_0_0.dist = 0.00545204221065;
    tmp_tmp_msg_0_0.err = 0.147199568662;
    tmp_tmp_msg_0_0.ctrl_imp = 0.625133297877;
    tmp_tmp_msg_0_0.rel_dir_x = 0.485644975469;
    tmp_tmp_msg_0_0.rel_dir_y = 0.0219980299032;
    tmp_tmp_msg_0_0.rel_dir_z = 0.872599556288;
    tmp_tmp_msg_0_0.err_x = 0.624039613776;
    tmp_tmp_msg_0_0.err_y = 0.558369934718;
    tmp_tmp_msg_0_0.err_z = 0.955021840304;
    tmp_tmp_msg_0_0.rf_err_x = 0.614404408212;
    tmp_tmp_msg_0_0.rf_err_y = 0.827307935394;
    tmp_tmp_msg_0_0.rf_err_z = 0.797581274059;
    tmp_tmp_msg_0_0.rf_err_vx = 0.00634937504293;
    tmp_tmp_msg_0_0.rf_err_vy = 0.494157408669;
    tmp_tmp_msg_0_0.rf_err_vz = 0.800716179359;
    tmp_tmp_msg_0_0.ss_x = 0.655736831096;
    tmp_tmp_msg_0_0.ss_y = 0.276866741387;
    tmp_tmp_msg_0_0.ss_z = 0.465557794188;
    tmp_tmp_msg_0_0.virt_err_x = 0.603834828415;
    tmp_tmp_msg_0_0.virt_err_y = 0.315882381412;
    tmp_tmp_msg_0_0.virt_err_z = 0.427503370757;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.593939482464);
    msg.setSource(61543U);
    msg.setSourceEntity(142U);
    msg.setDestination(17139U);
    msg.setDestinationEntity(140U);
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ERDIYSYRPZDYAFCBWFXCHJMKISRGPHMLEKJRKMUUTVDJTBYYOCDLBIIZKKQWKMVUSGGZIEVWQXMVTP");
    tmp_msg_0.description.assign("EBPIGOYKFPHVLJHI");
    tmp_msg_0.vnamespace.assign("LYQDUZEKITPLPXUOEXOVMWBMKXLHSN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UPSHUILRJIVUJFQTNGKDJCSZMQBRKKINJXFJNMGUYTQAHHVYIKJOWYSWFBXXANVWKEKOULPZENDQMLLMLDSREIAMYPOSKOZTZLNCHAQGET");
    tmp_tmp_msg_0_0.value.assign("NJNZFPMNLGHYRHOOANPUNCWJCTAUIIGPZRESNKPUALMDGUIGDHSAGKCQWVMNVFNVTSDBLWLQFBZUFFQOPDQCKKFJTEFJJEYJENIMMXLRRKAPZAGEQEOYOKKECJYJWZRZXBHGOLRXXDKMIYSUEEADOFSBBHIBCUQEKRGVCMFZXMXGPWCSSOVTFWSKYQJVZHZRAWTVDXALLHNUHTMQYRXABIBCVGITPZTXTBHUJXBWMVLIDUSSTV");
    tmp_tmp_msg_0_0.type = 190U;
    tmp_tmp_msg_0_0.access = 226U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MMWNAIRTQVJZKHPNKTXUQXCSERCHKOHPYJBVEHPBMWSEMEUTYAZCNGNOKNAGSIRAYFQJFMUCVXDHBYCFTJAWFYUPBBAIJJYRRXENMFXGAOJHJDYGPMSCBGZLGYRNYTLKRSWQGEIWLLWUEPUDTODWTPVOKNWUXXKOVDSLPMTRFLESBUMCSCQHXJCIQTOQDLEVXLKIVNSKHZIWQFVIMFFDFEIDHSQGAACZRPOBZ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JXGAMLJHSYOHRSOFKDLSDKKQZGLHZKBBJHWIURWIPQGUTGVRBUNVAZYWZEUEMWCBVCSCHCEACQOFCFZQLDYWFTKZMEYTEJWYARMBOAYXHYXIWQNRWDSNCLJTKLMPUHUFCZGJHLAOZDQIDQGIABVKHPBEPXITHRYROCOMRMTGDBOSNYPKNXSAMNFVZNJOBKWTSPMTDQXGPWXAUJMFREIVXVJUNFQLUGEIZAFIKRLIXUTVQ");
    tmp_tmp_msg_0_1.dest_man.assign("PNMKUVNNBDDJTQIUHLAEJACEGJIHKLGMKWHGSPGKFCNTICWSDLXMCFLOWHZIJRPPTIUSVCXSXCZAKOYVUDBPWMWZLUHDZYFYVYVXSXQZELGEEIHFTVSBEKRLNQJOKGZRWMJEVBJTEFNQNXLSTNHIRANKPTKOYEQVXPJACPBLTI");
    tmp_tmp_msg_0_1.conditions.assign("MYEPBZYVGNYWQFCPHUKMNFRPJTEEQOTENCQRXFGIFYHOZCHKA");
    IMC::TrueSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.679435551923;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::MagneticField tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.853397348115;
    tmp_tmp_msg_0_2.x = 0.606682521251;
    tmp_tmp_msg_0_2.y = 0.77393455223;
    tmp_tmp_msg_0_2.z = 0.70494177966;
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
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.0446050439042);
    msg.setSource(3810U);
    msg.setSourceEntity(157U);
    msg.setDestination(23195U);
    msg.setDestinationEntity(61U);
    msg.enable = 253U;

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
    msg.setTimeStamp(0.261421199145);
    msg.setSource(15906U);
    msg.setSourceEntity(159U);
    msg.setDestination(27145U);
    msg.setDestinationEntity(89U);
    msg.enable = 11U;

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
    msg.setTimeStamp(0.0296091286798);
    msg.setSource(63802U);
    msg.setSourceEntity(207U);
    msg.setDestination(2749U);
    msg.setDestinationEntity(199U);
    msg.enable = 228U;

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
    msg.setTimeStamp(0.941014676949);
    msg.setSource(56665U);
    msg.setSourceEntity(74U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(176U);
    msg.summary = 38U;
    msg.level = 30U;

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
    msg.setTimeStamp(0.37866528744);
    msg.setSource(7963U);
    msg.setSourceEntity(234U);
    msg.setDestination(32394U);
    msg.setDestinationEntity(176U);
    msg.summary = 58U;
    msg.level = 58U;

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
    msg.setTimeStamp(0.2569524101);
    msg.setSource(2385U);
    msg.setSourceEntity(119U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(55U);
    msg.summary = 150U;
    msg.level = 58U;

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
    msg.setTimeStamp(0.779814426263);
    msg.setSource(54783U);
    msg.setSourceEntity(10U);
    msg.setDestination(16925U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.452863420405);
    msg.setSource(33198U);
    msg.setSourceEntity(198U);
    msg.setDestination(50058U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.718445471542);
    msg.setSource(21228U);
    msg.setSourceEntity(136U);
    msg.setDestination(41501U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.0617874862442);
    msg.setSource(21860U);
    msg.setSourceEntity(23U);
    msg.setDestination(35724U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.892919984684);
    msg.setSource(9404U);
    msg.setSourceEntity(219U);
    msg.setDestination(59270U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.884259851143);
    msg.setSource(40703U);
    msg.setSourceEntity(8U);
    msg.setDestination(58518U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.379963032268);
    msg.setSource(26406U);
    msg.setSourceEntity(170U);
    msg.setDestination(48320U);
    msg.setDestinationEntity(99U);
    msg.op = 165U;
    msg.system.assign("FHFARNYSDUKHBNWLVOOCJTLGTCVRNGMVEZVPQTBNSOMZDBREFJYSAGUMMQPKFDEOKMIYIVDJACUWWXQARUOZHXISFZXTLCJAXBMLBKZCXPURCYTVLPZPDIGHDLAIQJNHTOHSREHHQY");
    msg.range = 0.717934875045;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.288656333506);
    msg.setSource(27138U);
    msg.setSourceEntity(152U);
    msg.setDestination(26714U);
    msg.setDestinationEntity(47U);
    msg.op = 109U;
    msg.system.assign("QCDDVKMXLKTNNTOMZAFSFSQZGDJQCPDCVPLHKTTIZNFQSEZSALRJVHERFXIWNWQNV");
    msg.range = 0.51171662943;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 181U;
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
    msg.setTimeStamp(0.912996212245);
    msg.setSource(21915U);
    msg.setSourceEntity(133U);
    msg.setDestination(21731U);
    msg.setDestinationEntity(96U);
    msg.op = 4U;
    msg.system.assign("LVOXOCEAIMWDDIPNLFKVQZATARYRNQEXRHYJTWBZCJEPJIKKXUUSTVRHKSOWSMNPMDCASHOSATBKNMXOVZZOXDUHWVAEMNNQCCMWLEDUYXURKMXZQFF");
    msg.range = 0.914188010921;
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 131U;
    tmp_msg_0.op = 8U;
    tmp_msg_0.request_id = 57946U;
    tmp_msg_0.plan_id.assign("RKPCGFABAQMTBWNVRYOVKJXYFGDIRGQPCLHPKSWSMGYAIWFEK");
    tmp_msg_0.flags = 11860U;
    IMC::CpuUsage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 33U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ZBNOARVIMDRDCOWLHXWEBQBKJJERHEUTRPNYJQYVDANFSPKNZYLUQEJGBZNEJTRGMQOKSXVCGWZBYOHDPPUUWYFGRLTKAEEXUANCRZBDZDOFXOUGFLCVFQLHMGWAFDAAZ");
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
    msg.setTimeStamp(0.476168586217);
    msg.setSource(49094U);
    msg.setSourceEntity(48U);
    msg.setDestination(52491U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.899166804749);
    msg.setSource(12449U);
    msg.setSourceEntity(24U);
    msg.setDestination(36914U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.481734562931);
    msg.setSource(7521U);
    msg.setSourceEntity(177U);
    msg.setDestination(27283U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.387580660492);
    msg.setSource(41556U);
    msg.setSourceEntity(169U);
    msg.setDestination(25236U);
    msg.setDestinationEntity(41U);
    msg.list.assign("LGZTYKREHNOVRBTVBHFFDNORFYNOPVCVYCQKHWXARDDTTDBUCLDOMBPULKVVGHQXNOOSPPGCMOKFHZSEDUGNXFEWJYJSCBWSSSSIGSIY");

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
    msg.setTimeStamp(0.945774805948);
    msg.setSource(18450U);
    msg.setSourceEntity(4U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(132U);
    msg.list.assign("NCUZESEJFKJLNWERYOAPVNCCBFRCGPEDQVUXIZINHPPMXYORAJAGMHFKVSHVIYHFXBFNXTHIZQFNDIMPBRAQHNEYJELKKFZHBARTDUAEKQLMVMYLZMZAEXYWWTWFSXCTZVBQOPCBJCPANU");

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
    msg.setTimeStamp(0.0907496798198);
    msg.setSource(27500U);
    msg.setSourceEntity(139U);
    msg.setDestination(55808U);
    msg.setDestinationEntity(155U);
    msg.list.assign("UXEMWQZCNCQEHLEMYBCEUDBPAYOBZCBYBLKCZGRXQTPOXFFTUZMHKLPDMILAPXHKWHGPMCWPWDO");

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
    msg.setTimeStamp(0.137728793928);
    msg.setSource(2100U);
    msg.setSourceEntity(197U);
    msg.setDestination(4116U);
    msg.setDestinationEntity(191U);
    msg.value = -11632;

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
    msg.setTimeStamp(0.124771795141);
    msg.setSource(32797U);
    msg.setSourceEntity(158U);
    msg.setDestination(62936U);
    msg.setDestinationEntity(217U);
    msg.value = -4398;

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
    msg.setTimeStamp(0.517549207441);
    msg.setSource(26082U);
    msg.setSourceEntity(230U);
    msg.setDestination(57173U);
    msg.setDestinationEntity(191U);
    msg.value = 28381;

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
    msg.setTimeStamp(0.574195498252);
    msg.setSource(13499U);
    msg.setSourceEntity(241U);
    msg.setDestination(31613U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0584677836484;

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
    msg.setTimeStamp(0.83017686769);
    msg.setSource(5612U);
    msg.setSourceEntity(0U);
    msg.setDestination(63092U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0262430524851;

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
    msg.setTimeStamp(0.0547218727268);
    msg.setSource(2355U);
    msg.setSourceEntity(198U);
    msg.setDestination(22699U);
    msg.setDestinationEntity(179U);
    msg.value = 0.993513821417;

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
    msg.setTimeStamp(0.0531609459806);
    msg.setSource(18389U);
    msg.setSourceEntity(152U);
    msg.setDestination(27552U);
    msg.setDestinationEntity(181U);
    msg.value = 0.812390187738;

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
    msg.setTimeStamp(0.208325461791);
    msg.setSource(21702U);
    msg.setSourceEntity(211U);
    msg.setDestination(43828U);
    msg.setDestinationEntity(139U);
    msg.value = 0.640287065083;

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
    msg.setTimeStamp(0.183868321901);
    msg.setSource(504U);
    msg.setSourceEntity(77U);
    msg.setDestination(47047U);
    msg.setDestinationEntity(230U);
    msg.value = 0.758201977938;

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
    msg.setTimeStamp(0.652542376358);
    msg.setSource(63000U);
    msg.setSourceEntity(25U);
    msg.setDestination(21987U);
    msg.setDestinationEntity(213U);
    msg.validity = 56042U;
    msg.type = 159U;
    msg.utc_year = 10618U;
    msg.utc_month = 248U;
    msg.utc_day = 14U;
    msg.utc_time = 0.300175771849;
    msg.lat = 0.986713571341;
    msg.lon = 0.681561446855;
    msg.height = 0.278749802812;
    msg.satellites = 45U;
    msg.cog = 0.0360299791197;
    msg.sog = 0.749179135847;
    msg.hdop = 0.610460720853;
    msg.vdop = 0.966023839271;
    msg.hacc = 0.958703897652;
    msg.vacc = 0.952013319633;

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
    msg.setTimeStamp(0.553157022094);
    msg.setSource(51638U);
    msg.setSourceEntity(50U);
    msg.setDestination(13022U);
    msg.setDestinationEntity(3U);
    msg.validity = 54412U;
    msg.type = 205U;
    msg.utc_year = 44994U;
    msg.utc_month = 152U;
    msg.utc_day = 170U;
    msg.utc_time = 0.428647935963;
    msg.lat = 0.331211865164;
    msg.lon = 0.575105526179;
    msg.height = 0.221504321284;
    msg.satellites = 24U;
    msg.cog = 0.85396938905;
    msg.sog = 0.529634974293;
    msg.hdop = 0.773115131859;
    msg.vdop = 0.810933142745;
    msg.hacc = 0.608733103104;
    msg.vacc = 0.549844875104;

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
    msg.setTimeStamp(0.777674129573);
    msg.setSource(20193U);
    msg.setSourceEntity(92U);
    msg.setDestination(53036U);
    msg.setDestinationEntity(245U);
    msg.validity = 26283U;
    msg.type = 75U;
    msg.utc_year = 6563U;
    msg.utc_month = 81U;
    msg.utc_day = 46U;
    msg.utc_time = 0.178681467358;
    msg.lat = 0.125631582076;
    msg.lon = 0.698759767864;
    msg.height = 0.987098151242;
    msg.satellites = 220U;
    msg.cog = 0.536478750521;
    msg.sog = 0.143997999759;
    msg.hdop = 0.911771321305;
    msg.vdop = 0.609061013339;
    msg.hacc = 0.390466188412;
    msg.vacc = 0.443589986783;

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
    msg.setTimeStamp(0.869307141932);
    msg.setSource(59828U);
    msg.setSourceEntity(141U);
    msg.setDestination(21196U);
    msg.setDestinationEntity(81U);
    msg.time = 0.747072801686;
    msg.phi = 0.222829498332;
    msg.theta = 0.325290576049;
    msg.psi = 0.0172918868605;
    msg.psi_magnetic = 0.103111434479;

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
    msg.setTimeStamp(0.493095485029);
    msg.setSource(44010U);
    msg.setSourceEntity(39U);
    msg.setDestination(33571U);
    msg.setDestinationEntity(209U);
    msg.time = 0.358584520532;
    msg.phi = 0.842939649846;
    msg.theta = 0.965127496564;
    msg.psi = 0.954311214184;
    msg.psi_magnetic = 0.962184014606;

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
    msg.setTimeStamp(0.487735633937);
    msg.setSource(13856U);
    msg.setSourceEntity(165U);
    msg.setDestination(63819U);
    msg.setDestinationEntity(214U);
    msg.time = 0.758549162772;
    msg.phi = 0.432284996681;
    msg.theta = 0.763573329732;
    msg.psi = 0.319258301945;
    msg.psi_magnetic = 0.0845339885979;

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
    msg.setTimeStamp(0.530235109452);
    msg.setSource(22102U);
    msg.setSourceEntity(211U);
    msg.setDestination(59640U);
    msg.setDestinationEntity(109U);
    msg.time = 0.511615902462;
    msg.x = 0.959692092571;
    msg.y = 0.961208731647;
    msg.z = 0.825798615972;
    msg.timestep = 0.626466539161;

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
    msg.setTimeStamp(0.222202174116);
    msg.setSource(30352U);
    msg.setSourceEntity(80U);
    msg.setDestination(23616U);
    msg.setDestinationEntity(74U);
    msg.time = 0.640015603504;
    msg.x = 0.522365302508;
    msg.y = 0.506799941132;
    msg.z = 0.688787274185;
    msg.timestep = 0.499633303153;

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
    msg.setTimeStamp(0.0631591411787);
    msg.setSource(48144U);
    msg.setSourceEntity(118U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(177U);
    msg.time = 0.407263689288;
    msg.x = 0.806264911038;
    msg.y = 0.843014492118;
    msg.z = 0.448773785441;
    msg.timestep = 0.0193649231374;

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
    msg.setTimeStamp(0.0962206946715);
    msg.setSource(21229U);
    msg.setSourceEntity(128U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(3U);
    msg.time = 0.240202682933;
    msg.x = 0.449600982708;
    msg.y = 0.813458581692;
    msg.z = 0.156985760307;

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
    msg.setTimeStamp(0.596899393969);
    msg.setSource(7290U);
    msg.setSourceEntity(56U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(133U);
    msg.time = 0.35512398457;
    msg.x = 0.641034725481;
    msg.y = 0.0749794559125;
    msg.z = 0.87828610087;

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
    msg.setTimeStamp(0.846585000042);
    msg.setSource(2607U);
    msg.setSourceEntity(5U);
    msg.setDestination(33500U);
    msg.setDestinationEntity(125U);
    msg.time = 0.954249912245;
    msg.x = 0.161412927014;
    msg.y = 0.531009161729;
    msg.z = 0.34016262056;

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
    msg.setTimeStamp(0.125499846998);
    msg.setSource(48115U);
    msg.setSourceEntity(131U);
    msg.setDestination(38111U);
    msg.setDestinationEntity(54U);
    msg.time = 0.85312166711;
    msg.x = 0.291344823722;
    msg.y = 0.445272792479;
    msg.z = 0.219431790979;

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
    msg.setTimeStamp(0.290390438759);
    msg.setSource(39186U);
    msg.setSourceEntity(121U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(23U);
    msg.time = 0.430707445964;
    msg.x = 0.248925287667;
    msg.y = 0.223271400727;
    msg.z = 0.228848170789;

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
    msg.setTimeStamp(0.893436187678);
    msg.setSource(33919U);
    msg.setSourceEntity(237U);
    msg.setDestination(10359U);
    msg.setDestinationEntity(96U);
    msg.time = 0.439561084271;
    msg.x = 0.882517042998;
    msg.y = 0.936438239325;
    msg.z = 0.70251637584;

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
    msg.setTimeStamp(0.745602260169);
    msg.setSource(616U);
    msg.setSourceEntity(40U);
    msg.setDestination(50558U);
    msg.setDestinationEntity(13U);
    msg.time = 0.131530886061;
    msg.x = 0.206788842212;
    msg.y = 0.921302458509;
    msg.z = 0.592007491655;

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
    msg.setTimeStamp(0.659421819477);
    msg.setSource(22276U);
    msg.setSourceEntity(60U);
    msg.setDestination(47962U);
    msg.setDestinationEntity(187U);
    msg.time = 0.861384942741;
    msg.x = 0.619324635874;
    msg.y = 0.92098053822;
    msg.z = 0.783159138148;

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
    msg.setTimeStamp(0.74835337422);
    msg.setSource(28590U);
    msg.setSourceEntity(104U);
    msg.setDestination(1171U);
    msg.setDestinationEntity(199U);
    msg.time = 0.15520620991;
    msg.x = 0.196632024633;
    msg.y = 0.144378200072;
    msg.z = 0.275001063123;

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
    msg.setTimeStamp(0.519513499428);
    msg.setSource(55741U);
    msg.setSourceEntity(152U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(106U);
    msg.validity = 127U;
    msg.x = 0.724912726986;
    msg.y = 0.638797061071;
    msg.z = 0.948498951226;

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
    msg.setTimeStamp(0.644807382716);
    msg.setSource(59647U);
    msg.setSourceEntity(7U);
    msg.setDestination(23014U);
    msg.setDestinationEntity(52U);
    msg.validity = 96U;
    msg.x = 0.883801654319;
    msg.y = 0.931693357857;
    msg.z = 0.888094552736;

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
    msg.setTimeStamp(0.160257865032);
    msg.setSource(46792U);
    msg.setSourceEntity(185U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(120U);
    msg.validity = 213U;
    msg.x = 0.95363216583;
    msg.y = 0.728768450445;
    msg.z = 0.10955739213;

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
    msg.setTimeStamp(0.296343625276);
    msg.setSource(31284U);
    msg.setSourceEntity(233U);
    msg.setDestination(3489U);
    msg.setDestinationEntity(37U);
    msg.validity = 34U;
    msg.x = 0.189200161955;
    msg.y = 0.938710780748;
    msg.z = 0.0752534149756;

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
    msg.setTimeStamp(0.828247416418);
    msg.setSource(32125U);
    msg.setSourceEntity(83U);
    msg.setDestination(46395U);
    msg.setDestinationEntity(226U);
    msg.validity = 3U;
    msg.x = 0.483271212555;
    msg.y = 0.597550431843;
    msg.z = 0.0936185835964;

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
    msg.setTimeStamp(0.544067923562);
    msg.setSource(35173U);
    msg.setSourceEntity(16U);
    msg.setDestination(55505U);
    msg.setDestinationEntity(102U);
    msg.validity = 243U;
    msg.x = 0.384461166422;
    msg.y = 0.901629097797;
    msg.z = 0.297886607039;

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
    msg.setTimeStamp(0.212943823191);
    msg.setSource(60774U);
    msg.setSourceEntity(100U);
    msg.setDestination(59854U);
    msg.setDestinationEntity(115U);
    msg.time = 0.465452189273;
    msg.x = 0.769537924839;
    msg.y = 0.224959211757;
    msg.z = 0.680068872078;

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
    msg.setTimeStamp(0.55309450151);
    msg.setSource(27745U);
    msg.setSourceEntity(101U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(63U);
    msg.time = 0.634465868655;
    msg.x = 0.0762848931004;
    msg.y = 0.156141394633;
    msg.z = 0.262665651003;

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
    msg.setTimeStamp(0.977791024212);
    msg.setSource(21789U);
    msg.setSourceEntity(106U);
    msg.setDestination(13305U);
    msg.setDestinationEntity(76U);
    msg.time = 0.769763801933;
    msg.x = 0.796814026885;
    msg.y = 0.316318376475;
    msg.z = 0.333621869692;

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
    msg.setTimeStamp(0.778287322436);
    msg.setSource(19577U);
    msg.setSourceEntity(92U);
    msg.setDestination(27826U);
    msg.setDestinationEntity(175U);
    msg.validity = 66U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.277622142054;
    tmp_msg_0.y = 0.245725810117;
    tmp_msg_0.z = 0.0219238480394;
    tmp_msg_0.phi = 0.277703498581;
    tmp_msg_0.theta = 0.262452721252;
    tmp_msg_0.psi = 0.984235955796;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.368219489341;

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
    msg.setTimeStamp(0.466568873123);
    msg.setSource(54291U);
    msg.setSourceEntity(93U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(177U);
    msg.validity = 87U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.395791546337;
    tmp_msg_0.beam_height = 0.189668643737;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.71674750245;

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
    msg.setTimeStamp(0.376982681246);
    msg.setSource(29415U);
    msg.setSourceEntity(103U);
    msg.setDestination(53012U);
    msg.setDestinationEntity(254U);
    msg.validity = 183U;
    msg.value = 0.982962419518;

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
    msg.setTimeStamp(0.56600549022);
    msg.setSource(37061U);
    msg.setSourceEntity(94U);
    msg.setDestination(4616U);
    msg.setDestinationEntity(240U);
    msg.value = 0.38986748548;

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
    msg.setTimeStamp(0.268178962807);
    msg.setSource(21281U);
    msg.setSourceEntity(104U);
    msg.setDestination(42U);
    msg.setDestinationEntity(167U);
    msg.value = 0.449713568862;

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
    msg.setTimeStamp(0.567170640481);
    msg.setSource(31688U);
    msg.setSourceEntity(70U);
    msg.setDestination(34847U);
    msg.setDestinationEntity(53U);
    msg.value = 0.589444869265;

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
    msg.setTimeStamp(0.763665751356);
    msg.setSource(38219U);
    msg.setSourceEntity(245U);
    msg.setDestination(38060U);
    msg.setDestinationEntity(86U);
    msg.value = 0.235911593858;

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
    msg.setTimeStamp(0.47376643934);
    msg.setSource(38997U);
    msg.setSourceEntity(78U);
    msg.setDestination(55968U);
    msg.setDestinationEntity(130U);
    msg.value = 0.420493917529;

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
    msg.setTimeStamp(0.455718484542);
    msg.setSource(57497U);
    msg.setSourceEntity(228U);
    msg.setDestination(51208U);
    msg.setDestinationEntity(166U);
    msg.value = 0.851838125182;

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
    msg.setTimeStamp(0.131235675623);
    msg.setSource(63456U);
    msg.setSourceEntity(239U);
    msg.setDestination(1536U);
    msg.setDestinationEntity(240U);
    msg.value = 0.62236914615;

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
    msg.setTimeStamp(0.765320814424);
    msg.setSource(34439U);
    msg.setSourceEntity(0U);
    msg.setDestination(14079U);
    msg.setDestinationEntity(109U);
    msg.value = 0.558494977319;

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
    msg.setTimeStamp(0.547011729718);
    msg.setSource(3539U);
    msg.setSourceEntity(185U);
    msg.setDestination(2137U);
    msg.setDestinationEntity(135U);
    msg.value = 0.162357896509;

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
    msg.setTimeStamp(0.0256223802795);
    msg.setSource(33732U);
    msg.setSourceEntity(44U);
    msg.setDestination(31165U);
    msg.setDestinationEntity(246U);
    msg.value = 0.622027591225;

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
    msg.setTimeStamp(0.536215892682);
    msg.setSource(27315U);
    msg.setSourceEntity(77U);
    msg.setDestination(41500U);
    msg.setDestinationEntity(90U);
    msg.value = 0.860194335303;

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
    msg.setTimeStamp(0.555403552508);
    msg.setSource(54500U);
    msg.setSourceEntity(28U);
    msg.setDestination(21251U);
    msg.setDestinationEntity(238U);
    msg.value = 0.246240712422;

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
    msg.setTimeStamp(0.416653593914);
    msg.setSource(28792U);
    msg.setSourceEntity(233U);
    msg.setDestination(2829U);
    msg.setDestinationEntity(178U);
    msg.value = 0.095070943108;

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
    msg.setTimeStamp(0.992024762256);
    msg.setSource(24665U);
    msg.setSourceEntity(86U);
    msg.setDestination(30820U);
    msg.setDestinationEntity(187U);
    msg.value = 0.917092052351;

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
    msg.setTimeStamp(0.429645612745);
    msg.setSource(14369U);
    msg.setSourceEntity(31U);
    msg.setDestination(23935U);
    msg.setDestinationEntity(22U);
    msg.value = 0.873445004126;

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
    msg.setTimeStamp(0.489121613055);
    msg.setSource(11128U);
    msg.setSourceEntity(253U);
    msg.setDestination(21665U);
    msg.setDestinationEntity(71U);
    msg.value = 0.898455471543;

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
    msg.setTimeStamp(0.489991586451);
    msg.setSource(35859U);
    msg.setSourceEntity(71U);
    msg.setDestination(13449U);
    msg.setDestinationEntity(54U);
    msg.value = 0.620530317846;

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
    msg.setTimeStamp(0.85148057431);
    msg.setSource(26327U);
    msg.setSourceEntity(118U);
    msg.setDestination(39209U);
    msg.setDestinationEntity(237U);
    msg.value = 0.123347164381;

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
    msg.setTimeStamp(0.873048884584);
    msg.setSource(47079U);
    msg.setSourceEntity(15U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(4U);
    msg.value = 0.209656256269;

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
    msg.setTimeStamp(0.850771646039);
    msg.setSource(24998U);
    msg.setSourceEntity(96U);
    msg.setDestination(64641U);
    msg.setDestinationEntity(29U);
    msg.value = 0.997829815141;

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
    msg.setTimeStamp(0.272505237174);
    msg.setSource(22656U);
    msg.setSourceEntity(21U);
    msg.setDestination(38851U);
    msg.setDestinationEntity(161U);
    msg.value = 0.389316932558;

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
    msg.setTimeStamp(0.724503340526);
    msg.setSource(52985U);
    msg.setSourceEntity(177U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0712203571362;

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
    msg.setTimeStamp(0.534449962287);
    msg.setSource(47448U);
    msg.setSourceEntity(114U);
    msg.setDestination(45311U);
    msg.setDestinationEntity(116U);
    msg.value = 0.398160936348;

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
    msg.setTimeStamp(0.52826677694);
    msg.setSource(64244U);
    msg.setSourceEntity(119U);
    msg.setDestination(38301U);
    msg.setDestinationEntity(132U);
    msg.value = 0.780584136932;

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
    msg.setTimeStamp(0.295325662752);
    msg.setSource(26704U);
    msg.setSourceEntity(87U);
    msg.setDestination(43156U);
    msg.setDestinationEntity(147U);
    msg.direction = 0.12001514666;
    msg.speed = 0.668932791794;
    msg.turbulence = 0.0806365150963;

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
    msg.setTimeStamp(0.812615294438);
    msg.setSource(33901U);
    msg.setSourceEntity(127U);
    msg.setDestination(25109U);
    msg.setDestinationEntity(91U);
    msg.direction = 0.915063175729;
    msg.speed = 0.93266005397;
    msg.turbulence = 0.0266206879912;

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
    msg.setTimeStamp(0.0753588337671);
    msg.setSource(63993U);
    msg.setSourceEntity(5U);
    msg.setDestination(50359U);
    msg.setDestinationEntity(46U);
    msg.direction = 0.97962629823;
    msg.speed = 0.857099190602;
    msg.turbulence = 0.47397429309;

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
    msg.setTimeStamp(0.904384197817);
    msg.setSource(32531U);
    msg.setSourceEntity(20U);
    msg.setDestination(42914U);
    msg.setDestinationEntity(19U);
    msg.value = 0.743547090003;

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
    msg.setTimeStamp(0.814180534736);
    msg.setSource(8881U);
    msg.setSourceEntity(147U);
    msg.setDestination(23276U);
    msg.setDestinationEntity(232U);
    msg.value = 0.750429271214;

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
    msg.setTimeStamp(0.287898842022);
    msg.setSource(34474U);
    msg.setSourceEntity(0U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(10U);
    msg.value = 0.32326002778;

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
    msg.setTimeStamp(0.467602225705);
    msg.setSource(11024U);
    msg.setSourceEntity(183U);
    msg.setDestination(18875U);
    msg.setDestinationEntity(132U);
    msg.value.assign("REFILOGHON");

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
    msg.setTimeStamp(0.0347168259742);
    msg.setSource(22851U);
    msg.setSourceEntity(13U);
    msg.setDestination(53415U);
    msg.setDestinationEntity(20U);
    msg.value.assign("GURGOPFTUQLOQTRBAAOALRKBEGDPFISRYOZRZNKDCZAIYEVTGXSQYZXQVWSPKHYSZKBWZZQOICOQYSYNGSKGITXMJBPCMVVXCHXJOWMICUPHIEQLLUSSRLFLGZBJWKDCWXIGTNVCYHWSHEVHETSMMNWWHPRBAPJXJZAUYDTOLPGEFEIBDDHXMNFXYDF");

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
    msg.setTimeStamp(0.308407750109);
    msg.setSource(28351U);
    msg.setSourceEntity(178U);
    msg.setDestination(5342U);
    msg.setDestinationEntity(85U);
    msg.value.assign("XUSOTGXXMQXIYAMTLIOQVNLZJHUYAWZUAHEXKQMCRGFFSZCJSZODWBQWPMICCIKDOUDGECVNKMXUWGTYDJYLXJWDXUTVTQOIYMRDABHFDMPQIKFFCKLRMPIWROSCYASRTEHWMXLAGIFEWNNPVHBDYNVCVFNGVLFNNIIRJZEDPHPVAWLOBUJROLKEJTUAHHTBHQTPJCJATUZBZRBNKZWDKAFFPGVXGUBOE");

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
    msg.setTimeStamp(0.189674940697);
    msg.setSource(39414U);
    msg.setSourceEntity(85U);
    msg.setDestination(30107U);
    msg.setDestinationEntity(147U);
    const char tmp_msg_0[] = {69, -34, 3, -99, -82, 86, 99, -32, 18, -85, -73, -59, 22, -89, -47, 63, 58, -31, -53, 21, 110, -76, 104, 98, -23, -123, -50, -93, -124, 10, -40, 85, -79, 9, -103, 3, 100, -123, -103, 5, 34, 86, 55, -52, -26, 79, 47, -87, 2, 64, 46, 11, -116, -60, 113, -117, 103, -43, -12, -53, 67, 112, -27, 112, -15, -107, 111, 2, 112, 19, -40, 24, -127, -20, 92, 10, 53, -48, 112, 4, 13, -109, 3, -72, 47, 26, 87, -59, -58, -128, 106, -119, -79, 108, -24, 118, -44, -31, -14, -84, 8, 9, 86, -43, 125, -109, -51, 77, -9, -38, 43, 106, 103, -71, 15, -3, -121, -27, 43, -24, -37, 70, 102, -20, 69, 112, -118, -117, -36, 16, -16, -20, -123, -87, 99, 93, 8, -30, -85, -42, 28, -31, -40, -38, -52, -56, -113, 81, 14, -115, 52, -96, 40, 36, 77, 43, 70, 117, 102, -125, 97, 106, -113, -111, 2, -27, 118, -85, 99, -44, -21, 70, 103, -38, 42, -45, -50, 35, -120, -48, -37, 125, -20, 68, -21, -29, -106, 9, -103, 24, -109, -78, 21, -102, 126, 106, -121, -64, -91, -95, 111, 56, -80, 52, 41, 52, 107, 49, -128, 93, -121, -73, 47, -31, -115, 117, -19, -93, -44, -116, 101, 60, -45, -123, 92, -78, -97, 89, -7, -124, -112, -55, 29, 11, 40, -124, -73, 114, 115, 52, -35, -82, -122, 23};
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
    msg.setTimeStamp(0.973329563822);
    msg.setSource(33912U);
    msg.setSourceEntity(165U);
    msg.setDestination(8248U);
    msg.setDestinationEntity(222U);
    const char tmp_msg_0[] = {35, 23, -7, -23, 66, 31, -109, -84, 8, -43, -23, -29, 71, 41, 1, -32, -83, 57, 117, -91, 47, 62, 23, 47, -120, 104, -56, 74, -19, 74, 97, -115, -92, 58, 124, -15, 52, 92, -51, 98, -126, -109, 101, -2, -49, 105, 34, -41, 113, -103, -55, 115, -104, 84, 52, 18, -7, -73, -18, 109, -67, 13, 27, -119, -86, -105, -23, -38, 38, 8, 60, -3, 105, 33, -6, 104, -105, -5, 44, -123, 17, -122, -10, 102, 22, 3, -72, 58, 24, 53, 116, 115, -16, 3, -4, 16, 36, -123, -36, 119, -23, 14, -57, 91, -19, -4, 85, 1, 55, -1, -23, -36, 50, -30, 96, 39, -93, 14, -74, 81, 117, -61, 48, -85, 9, -66, 122, 69, 19, 51, -102, -31, -79, 68, 4, -97, 107, 37, -9, -109, 87};
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
    msg.setTimeStamp(0.858929816752);
    msg.setSource(9747U);
    msg.setSourceEntity(184U);
    msg.setDestination(22846U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {36, 122, -105, -128, -95, 108, -119, -10, 81, -22, -126, -103, -104, 74, -39, 124, 101, 84, -52, 9, 13, 106, 8, -3, 53, -72, -115, -13, -86, 76, 40, -53, -84, -72, 122, -5, -58, 47, 101, -59, -66, -31, -35, 37, 119, -86, 26, -121, 70, 39, 24, -125, 105, -21, -108, -127, 114, -82, -24, -70, -29, -52, -9, 45, -74, -26, 106, -46, -59, -3, -55, -74, 115, -26, -114, -1, 82, 31, 50, -95, -26, -73, -127, -116, -83, 50, -88, 71, -34, -119, 116, 105, 102, 100, 40, -5, -77, 40, 16, -26, -90, -29, 27, -81, 120, -119, -69, 10, 67, 110, 43, 112, -19, 15, -98, 83, -93, 4, 85};
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
    msg.setTimeStamp(0.918365999558);
    msg.setSource(51300U);
    msg.setSourceEntity(60U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(202U);
    msg.frequency = 4018660337U;
    msg.min_range = 58063U;
    msg.max_range = 19276U;

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
    msg.setTimeStamp(0.772573577359);
    msg.setSource(20714U);
    msg.setSourceEntity(68U);
    msg.setDestination(58736U);
    msg.setDestinationEntity(156U);
    msg.frequency = 2019374935U;
    msg.min_range = 37160U;
    msg.max_range = 7806U;

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
    msg.setTimeStamp(0.0148718797932);
    msg.setSource(5985U);
    msg.setSourceEntity(117U);
    msg.setDestination(40526U);
    msg.setDestinationEntity(39U);
    msg.frequency = 2222057007U;
    msg.min_range = 64795U;
    msg.max_range = 39733U;

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
    msg.setTimeStamp(0.67219998809);
    msg.setSource(62329U);
    msg.setSourceEntity(80U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(91U);
    msg.type = 79U;
    msg.frequency = 1503126953U;
    msg.min_range = 64173U;
    msg.max_range = 43384U;
    msg.bits_per_point = 218U;
    msg.scale_factor = 0.19240385662;
    const char tmp_msg_0[] = {76, -25, 108, 40, -73, 8, -98, -63, -51, 22, 75, 89, -106, 65, -24, 83, 5, -103, 101, -101, -9, 76, -44, 17, -112, -96, -61, -86, -24, 58, 123, 21, -111, 59, 34, 69, -96, 5, -95, -43, -109, 10, -17, -106, 102, -94, -78, -19, -119, 107, -56, 39, 17, 77, -87, -125, 46, -11, -89, -67, 125, -23, -70, -85, 121, -29, 27, -110, 67, -125, -96, -81, 9, 124, 47, -32, -11, 94, 19, 83, 10, 67, 15, -3, -72, -82, 76, 41, 91, -36, 58, -55, -42, 96, 117, -65, 9, -120, -86, 81, 94, 107, -128, -117, -23, -41, -5, 90, 36, -87, 96, 112, -123, -91, 116, -109, 53, -58, 84, 79, -6, 28, -35, -57, -40, -67, -37, -111, 96, -112, 87, 121, -28, -4, -118, 37, -99, 70, -30, 20, 69, 32, 94, 68, -114, 116, -18, 73, -59, -76, -85, -90, -18, 117};
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
    msg.setTimeStamp(0.313938611042);
    msg.setSource(52024U);
    msg.setSourceEntity(182U);
    msg.setDestination(16858U);
    msg.setDestinationEntity(69U);
    msg.type = 201U;
    msg.frequency = 1823676805U;
    msg.min_range = 61805U;
    msg.max_range = 6431U;
    msg.bits_per_point = 125U;
    msg.scale_factor = 0.939669216807;
    const char tmp_msg_0[] = {-84, -27, -25, -55, -80, -45, 108, -83, 20, 96, 80, 97, 67, -124, 99, 112, 51, -37, 92, -3, -125, 42, 15, 55, 98, -71, 65, -53, -80, -73, 105, 11, 5, 1, 117, -60, -44, 72, 71, -45, -98, -93, 107, -55, 56, 86, 77, -88, 73, 110, 57, -116, 100, -69, 13, 18, 112, 53, 115, 115, -61, -43, -115, 47, -126, 123, 108, 71, 61, -119, 32, 47, 43, -36, -62, -28, -73, 70, -117, 20, 31, 50, -68, 4, -54, -93, -114, 69, -122, 102, 28, 7, 83, 115, -75, -99, 71, 105, -91, 102, 57, -42, 119, -25, 5, -38, -61, -34, 20, -82, -3, 51, 113, 115, -45, 67, -33, -113, 11, 87, -77, -6, 126, -116, 41};
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
    msg.setTimeStamp(0.905082990371);
    msg.setSource(54516U);
    msg.setSourceEntity(37U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(234U);
    msg.type = 231U;
    msg.frequency = 1791011991U;
    msg.min_range = 58063U;
    msg.max_range = 43652U;
    msg.bits_per_point = 90U;
    msg.scale_factor = 0.27888823826;
    const char tmp_msg_0[] = {123, 117, -96, -57, 15, 83, 5, 54, 10, -86, -42, 28, -28, 97, -79, -11, -105, 66, -53, -72, -117, 48, -117, -49, 81, -33, 12, 64, -119, 39, -100, -11, 3, -90, -23, -53, 31, -62, 13, 88, -32, 106, -106, -14, 104, 79, -1, 117, -124, -43, 31, 39, -59, -114, 72, 124, -6, -80, 71, 77, -23, 102, -107, -112, 95, -53, -2, 116, 53, -44, -86, -121, 22, 54, -104, 109, 24, 76, 0, -44, 95, 44, -51, -123};
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
    msg.setTimeStamp(0.418931513807);
    msg.setSource(17301U);
    msg.setSourceEntity(188U);
    msg.setDestination(10741U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.545505796795);
    msg.setSource(37637U);
    msg.setSourceEntity(29U);
    msg.setDestination(1U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.80253151314);
    msg.setSource(33468U);
    msg.setSourceEntity(70U);
    msg.setDestination(18940U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.258839161522);
    msg.setSource(939U);
    msg.setSourceEntity(207U);
    msg.setDestination(42329U);
    msg.setDestinationEntity(145U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.49607573875);
    msg.setSource(54752U);
    msg.setSourceEntity(124U);
    msg.setDestination(40955U);
    msg.setDestinationEntity(132U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.492058742711);
    msg.setSource(26559U);
    msg.setSourceEntity(234U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(243U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.309454078188);
    msg.setSource(46713U);
    msg.setSourceEntity(145U);
    msg.setDestination(56876U);
    msg.setDestinationEntity(147U);
    msg.value = 0.242171756188;
    msg.confidence = 0.344286655109;
    msg.opmodes.assign("YPMIPSHNCVPOHHAUCYJAJQTYAWURUTJOSYLHBWWJUNXBFODFLKRTNQHEUZWVMJELLIBKFJMEEDQAPPKKCPYBCRXOZCIMLYDWGBZZEAUVMEFCLIOFFWHEQGQHXNSDIKJPRQXBZPNATWIAEZDTPGVSLDJLCCFTQKSGFJATSDQQOIWVNRHXWMRYNYHOMBFCGXTVKHOMUYBLGGSDLVXOENKINDYXVFCWVSGSQDZURJGARGOBE");

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
    msg.setTimeStamp(0.00843176307281);
    msg.setSource(22890U);
    msg.setSourceEntity(57U);
    msg.setDestination(36002U);
    msg.setDestinationEntity(64U);
    msg.value = 0.384957284629;
    msg.confidence = 0.49006902588;
    msg.opmodes.assign("TPFFUIPOGPORDCQBWHFIWIGMKRSIWFHXUSSAAIYMCDORUJKSBSQMPRYPXNIVKYODDGGCGDFPXKKHGTWYJXWNATPBJALQXGLQOWZLSPEZVZSYWMKQSHCXNANOWHACHVPNZZTEVHLKEQJXQB");

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
    msg.setTimeStamp(0.668093769346);
    msg.setSource(60712U);
    msg.setSourceEntity(98U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(102U);
    msg.value = 0.505043630136;
    msg.confidence = 0.237053499027;
    msg.opmodes.assign("PNJDYQYFJIKMAKBFOOOGNQWQCDRSVGTJBXILOSOYUGHXUGZCCQBYEBMJFNBRZEXUNMQPSMWNBOSIJHVGCKFBQIYTTTKVVAHJLHAWQTPEHPUDWFYTADAGLFLQUBQSYR");

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
    msg.setTimeStamp(0.704482937293);
    msg.setSource(12958U);
    msg.setSourceEntity(39U);
    msg.setDestination(44676U);
    msg.setDestinationEntity(190U);
    msg.itow = 2108068645U;
    msg.lat = 0.677956180393;
    msg.lon = 0.713163926331;
    msg.height_ell = 0.81000004696;
    msg.height_sea = 0.627120999817;
    msg.hacc = 0.387681787625;
    msg.vacc = 0.079730329283;
    msg.vel_n = 0.392558920965;
    msg.vel_e = 0.742260497321;
    msg.vel_d = 0.462779971738;
    msg.speed = 0.145654620076;
    msg.gspeed = 0.282835949857;
    msg.heading = 0.591368765143;
    msg.sacc = 0.0336009398005;
    msg.cacc = 0.075270156527;

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
    msg.setTimeStamp(0.152471385499);
    msg.setSource(47450U);
    msg.setSourceEntity(156U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(112U);
    msg.itow = 3805662284U;
    msg.lat = 0.985364466281;
    msg.lon = 0.0328355145698;
    msg.height_ell = 0.611354863661;
    msg.height_sea = 0.421953782601;
    msg.hacc = 0.622783308487;
    msg.vacc = 0.0991361042803;
    msg.vel_n = 0.620685627294;
    msg.vel_e = 0.0428540133108;
    msg.vel_d = 0.41642240267;
    msg.speed = 0.281908576587;
    msg.gspeed = 0.542743598286;
    msg.heading = 0.36042731591;
    msg.sacc = 0.210928860356;
    msg.cacc = 0.305249535956;

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
    msg.setTimeStamp(0.0759221085161);
    msg.setSource(49702U);
    msg.setSourceEntity(220U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(155U);
    msg.itow = 2785483716U;
    msg.lat = 0.729705761401;
    msg.lon = 0.795807235841;
    msg.height_ell = 0.657632941512;
    msg.height_sea = 0.0870932881155;
    msg.hacc = 0.504654377752;
    msg.vacc = 0.452113115009;
    msg.vel_n = 0.298081337781;
    msg.vel_e = 0.387090607077;
    msg.vel_d = 0.759433735733;
    msg.speed = 0.436865037034;
    msg.gspeed = 0.00206187499708;
    msg.heading = 0.894862089818;
    msg.sacc = 0.201659095657;
    msg.cacc = 0.258604408895;

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
    msg.setTimeStamp(0.913294870999);
    msg.setSource(33671U);
    msg.setSourceEntity(247U);
    msg.setDestination(25545U);
    msg.setDestinationEntity(166U);
    msg.id = 152U;
    msg.value = 0.22332507071;

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
    msg.setTimeStamp(0.867202442819);
    msg.setSource(21493U);
    msg.setSourceEntity(165U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(130U);
    msg.id = 181U;
    msg.value = 0.029023019147;

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
    msg.setTimeStamp(0.986935846507);
    msg.setSource(5244U);
    msg.setSourceEntity(14U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(247U);
    msg.id = 172U;
    msg.value = 0.258463255579;

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
    msg.setTimeStamp(0.129956273577);
    msg.setSource(59565U);
    msg.setSourceEntity(2U);
    msg.setDestination(7717U);
    msg.setDestinationEntity(65U);
    msg.x = 0.821049965184;
    msg.y = 0.690192348892;
    msg.z = 0.969921337041;
    msg.phi = 0.804253638141;
    msg.theta = 0.422755374534;
    msg.psi = 0.246196670916;

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
    msg.setTimeStamp(0.499648731351);
    msg.setSource(56497U);
    msg.setSourceEntity(55U);
    msg.setDestination(23168U);
    msg.setDestinationEntity(234U);
    msg.x = 0.874168218797;
    msg.y = 0.863152840484;
    msg.z = 0.294284786967;
    msg.phi = 0.559464823077;
    msg.theta = 0.347086520278;
    msg.psi = 0.960894302001;

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
    msg.setTimeStamp(0.686604068915);
    msg.setSource(52307U);
    msg.setSourceEntity(240U);
    msg.setDestination(4242U);
    msg.setDestinationEntity(238U);
    msg.x = 0.599666610436;
    msg.y = 0.885288948637;
    msg.z = 0.505294377988;
    msg.phi = 0.698098385431;
    msg.theta = 0.0280185327413;
    msg.psi = 0.701253978703;

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
    msg.setTimeStamp(0.103251676297);
    msg.setSource(56355U);
    msg.setSourceEntity(195U);
    msg.setDestination(9149U);
    msg.setDestinationEntity(121U);
    msg.beam_width = 0.87352574674;
    msg.beam_height = 0.60344963763;

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
    msg.setTimeStamp(0.65706270972);
    msg.setSource(21344U);
    msg.setSourceEntity(253U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(20U);
    msg.beam_width = 0.517448094221;
    msg.beam_height = 0.708957448579;

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
    msg.setTimeStamp(0.729428358502);
    msg.setSource(57306U);
    msg.setSourceEntity(148U);
    msg.setDestination(29876U);
    msg.setDestinationEntity(181U);
    msg.beam_width = 0.79697761358;
    msg.beam_height = 0.319182706169;

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
    msg.setTimeStamp(0.930539495312);
    msg.setSource(56803U);
    msg.setSourceEntity(116U);
    msg.setDestination(28322U);
    msg.setDestinationEntity(242U);
    msg.sane = 155U;

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
    msg.setTimeStamp(0.599076101592);
    msg.setSource(13534U);
    msg.setSourceEntity(165U);
    msg.setDestination(47024U);
    msg.setDestinationEntity(56U);
    msg.sane = 247U;

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
    msg.setTimeStamp(0.673121979306);
    msg.setSource(7747U);
    msg.setSourceEntity(105U);
    msg.setDestination(16383U);
    msg.setDestinationEntity(71U);
    msg.sane = 237U;

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
    msg.setTimeStamp(0.0256361148602);
    msg.setSource(61714U);
    msg.setSourceEntity(207U);
    msg.setDestination(37149U);
    msg.setDestinationEntity(238U);
    msg.id = 229U;
    msg.zoom = 147U;
    msg.action = 103U;

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
    msg.setTimeStamp(0.660816799286);
    msg.setSource(65162U);
    msg.setSourceEntity(21U);
    msg.setDestination(76U);
    msg.setDestinationEntity(26U);
    msg.id = 84U;
    msg.zoom = 59U;
    msg.action = 135U;

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
    msg.setTimeStamp(0.51730587912);
    msg.setSource(43615U);
    msg.setSourceEntity(226U);
    msg.setDestination(26394U);
    msg.setDestinationEntity(138U);
    msg.id = 226U;
    msg.zoom = 53U;
    msg.action = 211U;

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
    msg.setTimeStamp(0.780890543185);
    msg.setSource(44472U);
    msg.setSourceEntity(161U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(7U);
    msg.id = 250U;
    msg.value = 0.654341959774;

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
    msg.setTimeStamp(0.95072616582);
    msg.setSource(17275U);
    msg.setSourceEntity(172U);
    msg.setDestination(27518U);
    msg.setDestinationEntity(209U);
    msg.id = 128U;
    msg.value = 0.775128931055;

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
    msg.setTimeStamp(0.491468694644);
    msg.setSource(52400U);
    msg.setSourceEntity(68U);
    msg.setDestination(32409U);
    msg.setDestinationEntity(67U);
    msg.id = 49U;
    msg.value = 0.498112686335;

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
    msg.setTimeStamp(0.33984690686);
    msg.setSource(9207U);
    msg.setSourceEntity(243U);
    msg.setDestination(37338U);
    msg.setDestinationEntity(105U);
    msg.id = 125U;
    msg.value = 0.435363395043;

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
    msg.setTimeStamp(0.416780307503);
    msg.setSource(48744U);
    msg.setSourceEntity(65U);
    msg.setDestination(25255U);
    msg.setDestinationEntity(107U);
    msg.id = 250U;
    msg.value = 0.0186631232241;

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
    msg.setTimeStamp(0.921642926045);
    msg.setSource(14436U);
    msg.setSourceEntity(212U);
    msg.setDestination(47325U);
    msg.setDestinationEntity(213U);
    msg.id = 125U;
    msg.value = 0.202858384568;

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
    msg.setTimeStamp(0.0451727093163);
    msg.setSource(12634U);
    msg.setSourceEntity(221U);
    msg.setDestination(61215U);
    msg.setDestinationEntity(153U);
    msg.id = 217U;
    msg.angle = 0.810868766873;

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
    msg.setTimeStamp(0.918483448976);
    msg.setSource(12620U);
    msg.setSourceEntity(101U);
    msg.setDestination(52290U);
    msg.setDestinationEntity(29U);
    msg.id = 220U;
    msg.angle = 0.115076293333;

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
    msg.setTimeStamp(0.690091522659);
    msg.setSource(42098U);
    msg.setSourceEntity(132U);
    msg.setDestination(40336U);
    msg.setDestinationEntity(5U);
    msg.id = 76U;
    msg.angle = 0.81305139882;

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
    msg.setTimeStamp(0.464185222986);
    msg.setSource(55133U);
    msg.setSourceEntity(122U);
    msg.setDestination(28908U);
    msg.setDestinationEntity(114U);
    msg.op = 125U;
    msg.actions.assign("IYHQORXKTTOWJBQKPNFOMIQULVVGQSJRHTRYGHNUHFMHPNPZXLUFDGXQLRIVKMKCYPUDAXMCRPYEQR");

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
    msg.setTimeStamp(0.228286154916);
    msg.setSource(8100U);
    msg.setSourceEntity(238U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(43U);
    msg.op = 38U;
    msg.actions.assign("OVBIYOKPIBHLDIULERLRCOMODWQCRCJIDFAQNJVMOVGQXSXMQPIGPGRZYEKRRFYVEWJIHXMTDBSQKBNLWCUDSJANVGKBCGBPTMEFLHHXOIRUXHJGVHKJSAZKVZVQJACYWYLDDVZHMJFHRFIMZYQTGBZSUUKERUGNOYCETLPSA");

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
    msg.setTimeStamp(0.3126769079);
    msg.setSource(24743U);
    msg.setSourceEntity(11U);
    msg.setDestination(19047U);
    msg.setDestinationEntity(225U);
    msg.op = 160U;
    msg.actions.assign("VLCOHDZUMBBEYVOGXQKZKKHHRFJTVVJWPCJNUIMNGMFNMPYRIGYPCYZSWIDJHDNGAEMHEYTDIVQWLPIKEZQUSQBQULDXBSFICIEYFYTLXPPFZTFICTNAARBWDFTBCNLBNMMQSXMDZPOBGNUPSNKGFJJMTYUTXEOPRAR");

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
    msg.setTimeStamp(0.0895746197752);
    msg.setSource(8564U);
    msg.setSourceEntity(120U);
    msg.setDestination(65200U);
    msg.setDestinationEntity(140U);
    msg.actions.assign("JYERKTEUPVOOLXCWMLXFSJBFMHGPEKWMDRTWHMQMJVVAUWLUHEIEYAAXEDOLUPGVFVBLZGHVQUDXKJTKBQHXQZQZJJDGCXMHLYVUNKHPJDUDIYMDOROLXBDQRWFEZFPPNQFEYTCTBNZTYFNCKJYXAZCTJGWKRLNPADABVCASMLNSHQCEQGJRNSZYGBWRT");

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
    msg.setTimeStamp(0.0581122507717);
    msg.setSource(44574U);
    msg.setSourceEntity(128U);
    msg.setDestination(46991U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("UKVUBDADYHMTDQZKUXGEAVUWDWKYOQFKGJNDAPVGMHGSIQNRYZJLEPJ");

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
    msg.setTimeStamp(0.675734193244);
    msg.setSource(12845U);
    msg.setSourceEntity(189U);
    msg.setDestination(60560U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("XIWPQCXFSAVMQTIBBGWGKQSPOPLVBNEEVSDDHEAHRQGDHAUENTPVKI");

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
    msg.setTimeStamp(0.749073244684);
    msg.setSource(9008U);
    msg.setSourceEntity(239U);
    msg.setDestination(59783U);
    msg.setDestinationEntity(215U);
    msg.button = 238U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.319895025759);
    msg.setSource(5669U);
    msg.setSourceEntity(240U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(16U);
    msg.button = 182U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.238710804163);
    msg.setSource(24625U);
    msg.setSourceEntity(32U);
    msg.setDestination(35010U);
    msg.setDestinationEntity(212U);
    msg.button = 117U;
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
    msg.setTimeStamp(0.502419915059);
    msg.setSource(10496U);
    msg.setSourceEntity(145U);
    msg.setDestination(10606U);
    msg.setDestinationEntity(148U);
    msg.op = 131U;
    msg.text.assign("SUNKCUCBKYRARTHLEWWUTLRAQYZXMBVPIIKMVSBQWDXYSNHOWSLDDXEENEWJMULHVFERHVKEZBJPBJTFQPIKOKZAYGOYNSUZCWJXUDYQNGXXWGPOIOIAQHGJCITFJPDBNMJKUIPRGGFIYJLTVACRKNHDLXZTMQCSMOBEGLE");

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
    msg.setTimeStamp(0.394257549424);
    msg.setSource(54759U);
    msg.setSourceEntity(225U);
    msg.setDestination(46747U);
    msg.setDestinationEntity(52U);
    msg.op = 98U;
    msg.text.assign("NULVMKECQHQLYEPDTZEMRLPPABXAFWWRBSHLOUIHLPVZKXEYVQBKXHATSJWNIJZMIAPUWOYRLFYJUEDDRVSFHZIVONWPARRTYPGNXICCRPGRUMOQAUVHLFGIQJGZTPIKHCSEYBJZGFKSWVJBHOCKUOSZQQZJFRYDEXTWUFLCHOIAZOKXGBEMNZSC");

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
    msg.setTimeStamp(0.918502827063);
    msg.setSource(16061U);
    msg.setSourceEntity(107U);
    msg.setDestination(10472U);
    msg.setDestinationEntity(106U);
    msg.op = 29U;
    msg.text.assign("WNFGOVOONQMEWLEWNHDQZWOFIZAQAOYAYGUUVNIMYXIMXWJJHHJZWWBFKNXPNEKYZSRNRQQJWBRHTRHLDCMWTZBMARAJIFRMWQJEFDFKDYLHJVVUFSLTACSZIYIFUORCRVSELDXZVEVBAUDYGEDMOXITUKQGTCUPPKJBLBGKXGDTOAMYBXRSZPVOZEPPSPGNUYETVAITFKXXIBCUMPRBNJSNCQCBOSKDIAYCLFGGKLEKH");

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
    msg.setTimeStamp(0.633048960219);
    msg.setSource(64519U);
    msg.setSourceEntity(216U);
    msg.setDestination(24842U);
    msg.setDestinationEntity(36U);
    msg.op = 88U;
    msg.time_remain = 0.74416684394;
    msg.sched_time = 0.802581646175;

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
    msg.setTimeStamp(0.990520206472);
    msg.setSource(45361U);
    msg.setSourceEntity(110U);
    msg.setDestination(27262U);
    msg.setDestinationEntity(143U);
    msg.op = 154U;
    msg.time_remain = 0.743432248277;
    msg.sched_time = 0.691824366553;

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
    msg.setTimeStamp(0.724145119613);
    msg.setSource(38097U);
    msg.setSourceEntity(235U);
    msg.setDestination(38030U);
    msg.setDestinationEntity(159U);
    msg.op = 106U;
    msg.time_remain = 0.737475729795;
    msg.sched_time = 0.298741842351;

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
    msg.setTimeStamp(0.809322357592);
    msg.setSource(49754U);
    msg.setSourceEntity(6U);
    msg.setDestination(30261U);
    msg.setDestinationEntity(151U);
    msg.name.assign("OAVPELUWCDSVB");
    msg.op = 210U;
    msg.sched_time = 0.106738025048;

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
    msg.setTimeStamp(0.0179035808953);
    msg.setSource(25854U);
    msg.setSourceEntity(198U);
    msg.setDestination(26541U);
    msg.setDestinationEntity(154U);
    msg.name.assign("WJITDBBNRFNXZKMPBMNGRLZRQSSAMCBHTMJ");
    msg.op = 152U;
    msg.sched_time = 0.393394646549;

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
    msg.setTimeStamp(0.623492413507);
    msg.setSource(62814U);
    msg.setSourceEntity(160U);
    msg.setDestination(28976U);
    msg.setDestinationEntity(109U);
    msg.name.assign("RNTUIIPCUASVQNOWJEZRVIMOGFAMDPNLPZCETNVBFEOTUJOSDUEED");
    msg.op = 212U;
    msg.sched_time = 0.464197872489;

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
    msg.setTimeStamp(0.740244167855);
    msg.setSource(34948U);
    msg.setSourceEntity(154U);
    msg.setDestination(1036U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.475406862693);
    msg.setSource(10221U);
    msg.setSourceEntity(90U);
    msg.setDestination(384U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.224077106577);
    msg.setSource(11480U);
    msg.setSourceEntity(238U);
    msg.setDestination(52034U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.732760166966);
    msg.setSource(31561U);
    msg.setSourceEntity(158U);
    msg.setDestination(45364U);
    msg.setDestinationEntity(5U);
    msg.name.assign("AVQVKEGMXVXODAOKTDHMZRQYPXFRWXXANTITTZOBGIIPPDGEDCNHBLQPUHXSGRBRLWCLERSVKVFSUCSEZFBKJXTMKEYZDUFMZOPCAZOULSWNPQFSHMAXBANMLUFYJFFQQJTBYZJWWBNQQRNSVLKJBPSILVKBUNIJ");
    msg.state = 211U;

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
    msg.setTimeStamp(0.818318382152);
    msg.setSource(40873U);
    msg.setSourceEntity(33U);
    msg.setDestination(47436U);
    msg.setDestinationEntity(96U);
    msg.name.assign("MRHXGCCGUMFHLZYNYVMXITFDZQIZQUKXYGUWTFVPXSUWGXLDBDHTNSKZUEXQEYAQGKJCZPOAOCJQWTQIVJQVGCBWNCZIMKKVEKIVVIEXRERUNSWLVGLLBQJGPCHFJMBTZHMLXRJHNLTNUOMKBADTAAPWOBAPRSRYNZKXDTPDBUGDVPGXHSOCIDJSOAAYFSMLHJOWUOLSEIYOFCOJRKRBYFYMEUDAHZYEHLENSQR");
    msg.state = 76U;

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
    msg.setTimeStamp(0.443087773309);
    msg.setSource(33094U);
    msg.setSourceEntity(149U);
    msg.setDestination(29557U);
    msg.setDestinationEntity(141U);
    msg.name.assign("EWWLTDBMYEBXKLXZATQQMDCWZRGQHURMLNHBOLJYPONPDKTTDSEPCKCADCRZSGKSAVXWITXYFVNUJSBUYNTKSOAGKVBHPMUGLJUQBWEVDIHJMRVMWLEQNFYRIWRWUMBFPPPTQJOVEFIZFNLQTJAHYOEQPTYAKJPJADSRIQXZHOVIBITEGRVDODHBUPIGUVSYZHZBSYONIACFMGWZGXSRXLEUFCMHDZCGNKCSOEKRJ");
    msg.state = 190U;

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
    msg.setTimeStamp(0.0577325412861);
    msg.setSource(11728U);
    msg.setSourceEntity(86U);
    msg.setDestination(39240U);
    msg.setDestinationEntity(143U);
    msg.name.assign("MZIXLKMTKORGLNKYVOXXAKFPDFPDOCUIBNRUUDZDMQMJKVMBVTGAJEF");
    msg.value = 203U;

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
    msg.setTimeStamp(0.156138253237);
    msg.setSource(33887U);
    msg.setSourceEntity(13U);
    msg.setDestination(30578U);
    msg.setDestinationEntity(130U);
    msg.name.assign("HBJYRGRROESJECQNEMHAYDWPWKMMXSNQHEBCWUZIVLUNPJLDPZXODRTLBAPIOTMVSLPQOGOJUCFIJVYWSFWSNZCXJUBQYRDQQIGUNIDYVKOQAPRAJKGJBKUBNTICZVLSLVHGNHWVSZMLKJFFYEGLBDPKZBAKLCDHUSOUPKAXRDJYSEXTYVQWZOCC");
    msg.value = 98U;

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
    msg.setTimeStamp(0.0418419086903);
    msg.setSource(22777U);
    msg.setSourceEntity(249U);
    msg.setDestination(28526U);
    msg.setDestinationEntity(7U);
    msg.name.assign("IGBHOXNNFKWOPDKUIFISPYTPMFZLHEMDWJCPVCBTNPPAFRDFUSVAHTZRZPEIQLXAHQYFAKTUIOXGHMQGVTHIJLQOGLHDNMQXRMKLMTCUJZWHBYJVHEMEGRQU");
    msg.value = 122U;

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
    msg.setTimeStamp(0.174138915696);
    msg.setSource(11569U);
    msg.setSourceEntity(21U);
    msg.setDestination(22178U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GOSYZVADFPPFBDLMIJDGBOJGFUMVKYEBRIBRCBSQFTGEYKCETZGTHIUBUYXBUUDAENYXZTVKJTJXOWSQAJZKVPOBXLSGASYCAQUVITRFOINKNDZMPPQTZCPTSCUDXWMUAJZHHNCLDWMQZDCVSKVBHJNLMTIZMGLNXKZAAKGOCEXWFOLWNEXJEEHRNSRDMKFHAQXWHNIWRYBQWCLUROWJLXPGPPRKVFAYFOQ");

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
    msg.setTimeStamp(0.16162260248);
    msg.setSource(24885U);
    msg.setSourceEntity(207U);
    msg.setDestination(38667U);
    msg.setDestinationEntity(157U);
    msg.name.assign("DZNDXAMMPKYCCLRGLULNGQZOAZZAGTZWOYOBGFIEAMAOERSJNKMWTMCRWHYDRCNKCRBXVXTEIPJJLUXGHUAQYMUDPHHGUWRTMKY");

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
    msg.setTimeStamp(0.611102648436);
    msg.setSource(29898U);
    msg.setSourceEntity(52U);
    msg.setDestination(3532U);
    msg.setDestinationEntity(93U);
    msg.name.assign("YYRPUGHWRSPVXQZSLK");

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
    msg.setTimeStamp(0.191205493841);
    msg.setSource(4121U);
    msg.setSourceEntity(13U);
    msg.setDestination(45603U);
    msg.setDestinationEntity(29U);
    msg.name.assign("GZHWIIBZULJSTSHCETXNWKRFJPMOVNUIMLFLCWKZWVZTFGOVJGETDDAVMMKCFHRGGTOYSCVCXGVRJEUHBPALCKASNLVOFWBMBFXVHFJVIHJXGUZSKUSZKANDXGUWQODCVGECRXTBSTHSUDDCUUPEQBHWYPQPKNRUTJTIKQOYMDDHNZINBLRBICEOONLQJEYRQ");
    msg.value = 100U;

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
    msg.setTimeStamp(0.657157438735);
    msg.setSource(49436U);
    msg.setSourceEntity(65U);
    msg.setDestination(52876U);
    msg.setDestinationEntity(229U);
    msg.name.assign("CDZJOFDVXAVDRMESQFFAADPUZQTMOOPLGAKFFOXUFYQURWRKCZAUKVKMKUIPUWYGPWITTKVJQPFHIWXTZDZSMVWBXJQRYINRIRNFGMLPKFVTQJCSCCMSHBYOMBNULCTPHEHAHESNYZQIJQGSBRLRGBUGVZGTAUPXWNHVZHJITIEXLPMYGBDCOHCLMGDAENRBXZYIKOXDSPBHLEAOOSXNWEYGYQVTWWBEJDXVKKAQYBLSECHDSMWFNTON");
    msg.value = 87U;

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
    msg.setTimeStamp(0.991060907027);
    msg.setSource(30265U);
    msg.setSourceEntity(89U);
    msg.setDestination(65405U);
    msg.setDestinationEntity(63U);
    msg.name.assign("JIYZGDZFCDOIICYCLTKXURSLGHAGRESNKPTPPZHGCZYGYQLBEQVGYSOZFSCFEQPQBGZQMACVUKTKPRKBNXVDROILYUADBWXHUUSRRQRACCWPKHJFFNVBGZAFXESMRICKWQWJZUGWMLVSNLUKPQBOQOWDPOOOFMADTIUHXWBVAFMOVMYTZEIJWESGLAFKTWYXYIYXFEUVJPTXABHENJQONVHTSJJVSPHLHHJZMMATDNTNMDMCRDIWEIKXXNLNB");
    msg.value = 81U;

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
    msg.setTimeStamp(0.805388088039);
    msg.setSource(51505U);
    msg.setSourceEntity(207U);
    msg.setDestination(27668U);
    msg.setDestinationEntity(67U);
    msg.id = 247U;
    msg.period = 4015900214U;
    msg.duty_cycle = 3905297933U;

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
    msg.setTimeStamp(0.42734848722);
    msg.setSource(65234U);
    msg.setSourceEntity(118U);
    msg.setDestination(9423U);
    msg.setDestinationEntity(195U);
    msg.id = 208U;
    msg.period = 228565073U;
    msg.duty_cycle = 1147476240U;

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
    msg.setTimeStamp(0.587999349511);
    msg.setSource(14418U);
    msg.setSourceEntity(58U);
    msg.setDestination(62858U);
    msg.setDestinationEntity(1U);
    msg.id = 52U;
    msg.period = 1687691272U;
    msg.duty_cycle = 3427296824U;

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
    msg.setTimeStamp(0.287219490734);
    msg.setSource(14005U);
    msg.setSourceEntity(70U);
    msg.setDestination(30994U);
    msg.setDestinationEntity(171U);
    msg.id = 238U;
    msg.period = 1872077722U;
    msg.duty_cycle = 1262937988U;

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
    msg.setTimeStamp(0.0238742926954);
    msg.setSource(17287U);
    msg.setSourceEntity(241U);
    msg.setDestination(40559U);
    msg.setDestinationEntity(175U);
    msg.id = 110U;
    msg.period = 695787547U;
    msg.duty_cycle = 260185533U;

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
    msg.setTimeStamp(0.405046647475);
    msg.setSource(47109U);
    msg.setSourceEntity(121U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(26U);
    msg.id = 74U;
    msg.period = 3444353883U;
    msg.duty_cycle = 3328777354U;

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
    msg.setTimeStamp(0.27888361473);
    msg.setSource(50529U);
    msg.setSourceEntity(94U);
    msg.setDestination(12344U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.161981419546;
    msg.lon = 0.34484581733;
    msg.height = 0.433701114437;
    msg.x = 0.661924683979;
    msg.y = 0.138260135666;
    msg.z = 0.828948579734;
    msg.phi = 0.280075830055;
    msg.theta = 0.473558645084;
    msg.psi = 0.234278743113;
    msg.u = 0.292094672526;
    msg.v = 0.485066308758;
    msg.w = 0.816504632411;
    msg.vx = 0.230846681666;
    msg.vy = 0.939778249549;
    msg.vz = 0.010364252014;
    msg.p = 0.123866529401;
    msg.q = 0.258370902433;
    msg.r = 0.828047967439;
    msg.depth = 0.245058732256;
    msg.alt = 0.262434044422;

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
    msg.setTimeStamp(0.773300527434);
    msg.setSource(7214U);
    msg.setSourceEntity(109U);
    msg.setDestination(21130U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.206510322201;
    msg.lon = 0.135785915916;
    msg.height = 0.809083275888;
    msg.x = 0.57337706313;
    msg.y = 0.709680768862;
    msg.z = 0.285783708535;
    msg.phi = 0.434534887303;
    msg.theta = 0.341698588124;
    msg.psi = 0.640766572944;
    msg.u = 0.292592279444;
    msg.v = 0.217768105685;
    msg.w = 0.950262642822;
    msg.vx = 0.329464149632;
    msg.vy = 0.580744674075;
    msg.vz = 0.589257555971;
    msg.p = 0.539242554451;
    msg.q = 0.0389766779332;
    msg.r = 0.0724461946453;
    msg.depth = 0.189614299632;
    msg.alt = 0.93684072109;

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
    msg.setTimeStamp(0.202744371471);
    msg.setSource(9433U);
    msg.setSourceEntity(151U);
    msg.setDestination(23681U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.219656123707;
    msg.lon = 0.892957676978;
    msg.height = 0.143260370603;
    msg.x = 0.876659720746;
    msg.y = 0.21350512847;
    msg.z = 0.704076457845;
    msg.phi = 0.183316239793;
    msg.theta = 0.592272080798;
    msg.psi = 0.0749724069161;
    msg.u = 0.419565219474;
    msg.v = 0.47086657119;
    msg.w = 0.861522967114;
    msg.vx = 0.759380002695;
    msg.vy = 0.612753162018;
    msg.vz = 0.350820291269;
    msg.p = 0.926339987118;
    msg.q = 0.215610886298;
    msg.r = 0.643063252682;
    msg.depth = 0.152448271812;
    msg.alt = 0.806858311801;

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
    msg.setTimeStamp(0.193933926798);
    msg.setSource(25978U);
    msg.setSourceEntity(10U);
    msg.setDestination(43000U);
    msg.setDestinationEntity(221U);
    msg.x = 0.387630655793;
    msg.y = 0.88345634296;
    msg.z = 0.511979876491;

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
    msg.setTimeStamp(0.369196327294);
    msg.setSource(53695U);
    msg.setSourceEntity(76U);
    msg.setDestination(55603U);
    msg.setDestinationEntity(73U);
    msg.x = 0.962592873314;
    msg.y = 0.278119309818;
    msg.z = 0.79992386705;

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
    msg.setTimeStamp(0.256334379565);
    msg.setSource(43718U);
    msg.setSourceEntity(175U);
    msg.setDestination(54820U);
    msg.setDestinationEntity(121U);
    msg.x = 0.415293651966;
    msg.y = 0.467355587461;
    msg.z = 0.774291982916;

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
    msg.setTimeStamp(0.3568594519);
    msg.setSource(65529U);
    msg.setSourceEntity(118U);
    msg.setDestination(24230U);
    msg.setDestinationEntity(202U);
    msg.value = 0.735254797531;

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
    msg.setTimeStamp(0.896296832765);
    msg.setSource(13173U);
    msg.setSourceEntity(12U);
    msg.setDestination(1238U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0847475765504;

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
    msg.setTimeStamp(0.16050263392);
    msg.setSource(12338U);
    msg.setSourceEntity(20U);
    msg.setDestination(26968U);
    msg.setDestinationEntity(249U);
    msg.value = 0.930891592517;

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
    msg.setTimeStamp(0.198854910051);
    msg.setSource(24912U);
    msg.setSourceEntity(9U);
    msg.setDestination(41223U);
    msg.setDestinationEntity(181U);
    msg.value = 0.730378717838;

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
    msg.setTimeStamp(0.330314779273);
    msg.setSource(22888U);
    msg.setSourceEntity(94U);
    msg.setDestination(53200U);
    msg.setDestinationEntity(128U);
    msg.value = 0.741021151294;

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
    msg.setTimeStamp(0.862463433541);
    msg.setSource(49970U);
    msg.setSourceEntity(18U);
    msg.setDestination(63103U);
    msg.setDestinationEntity(124U);
    msg.value = 0.729861081742;

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
    msg.setTimeStamp(0.022719316004);
    msg.setSource(13416U);
    msg.setSourceEntity(226U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(130U);
    msg.x = 0.912825535028;
    msg.y = 0.034253685118;
    msg.z = 0.3479065873;
    msg.phi = 0.393708430531;
    msg.theta = 0.915842444141;
    msg.psi = 0.887773190347;
    msg.p = 0.494099259715;
    msg.q = 0.785242713616;
    msg.r = 0.797577314214;
    msg.u = 0.319016204775;
    msg.v = 0.281462226948;
    msg.w = 0.721883195207;
    msg.bias_psi = 0.194973416373;
    msg.bias_r = 0.674768182523;

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
    msg.setTimeStamp(0.975285784033);
    msg.setSource(38391U);
    msg.setSourceEntity(130U);
    msg.setDestination(12189U);
    msg.setDestinationEntity(145U);
    msg.x = 0.689806220616;
    msg.y = 0.35817656187;
    msg.z = 0.769879634641;
    msg.phi = 0.251903806733;
    msg.theta = 0.446768834496;
    msg.psi = 0.625603922184;
    msg.p = 0.35499322024;
    msg.q = 0.425603975291;
    msg.r = 0.189821242309;
    msg.u = 0.494419345334;
    msg.v = 0.230159982898;
    msg.w = 0.773486274622;
    msg.bias_psi = 0.944665211364;
    msg.bias_r = 0.739747977893;

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
    msg.setTimeStamp(0.624860773651);
    msg.setSource(54707U);
    msg.setSourceEntity(145U);
    msg.setDestination(52370U);
    msg.setDestinationEntity(153U);
    msg.x = 0.667945717106;
    msg.y = 0.288878091185;
    msg.z = 0.961122622267;
    msg.phi = 0.821029876877;
    msg.theta = 0.34391082086;
    msg.psi = 0.686164302686;
    msg.p = 0.0111719632193;
    msg.q = 0.23951577488;
    msg.r = 0.929221514094;
    msg.u = 0.486727525936;
    msg.v = 0.589414887651;
    msg.w = 0.106675124594;
    msg.bias_psi = 0.436664816699;
    msg.bias_r = 0.14857265079;

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
    msg.setTimeStamp(0.0439578292506);
    msg.setSource(15957U);
    msg.setSourceEntity(145U);
    msg.setDestination(8410U);
    msg.setDestinationEntity(45U);
    msg.bias_psi = 0.700073661345;
    msg.bias_r = 0.0574241689795;
    msg.cog = 0.686770222868;
    msg.cyaw = 0.457137154389;
    msg.lbl_rej_level = 0.903239375744;
    msg.gps_rej_level = 0.198394047793;
    msg.custom_x = 0.0346234912526;
    msg.custom_y = 0.0493753191429;
    msg.custom_z = 0.981774653031;

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
    msg.setTimeStamp(0.02380159121);
    msg.setSource(10148U);
    msg.setSourceEntity(122U);
    msg.setDestination(40867U);
    msg.setDestinationEntity(35U);
    msg.bias_psi = 0.0218529569087;
    msg.bias_r = 0.257587518026;
    msg.cog = 0.0674410052548;
    msg.cyaw = 0.634233529375;
    msg.lbl_rej_level = 0.355266725147;
    msg.gps_rej_level = 0.0788444172359;
    msg.custom_x = 0.896677970685;
    msg.custom_y = 0.926598353396;
    msg.custom_z = 0.919523017067;

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
    msg.setTimeStamp(0.563235575392);
    msg.setSource(38426U);
    msg.setSourceEntity(218U);
    msg.setDestination(33351U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.511513732018;
    msg.bias_r = 0.556935045241;
    msg.cog = 0.840187571698;
    msg.cyaw = 0.0376785804298;
    msg.lbl_rej_level = 0.141593574681;
    msg.gps_rej_level = 0.64643892128;
    msg.custom_x = 0.698141197667;
    msg.custom_y = 0.593182042451;
    msg.custom_z = 0.509410257957;

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
    msg.setTimeStamp(0.652091067142);
    msg.setSource(10030U);
    msg.setSourceEntity(230U);
    msg.setDestination(23375U);
    msg.setDestinationEntity(81U);
    msg.utc_time = 0.46644564385;
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
    msg.setTimeStamp(0.868704302191);
    msg.setSource(33198U);
    msg.setSourceEntity(251U);
    msg.setDestination(26183U);
    msg.setDestinationEntity(59U);
    msg.utc_time = 0.213920905054;
    msg.reason = 241U;

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
    msg.setTimeStamp(0.650965483891);
    msg.setSource(29433U);
    msg.setSourceEntity(90U);
    msg.setDestination(64923U);
    msg.setDestinationEntity(2U);
    msg.utc_time = 0.941121919349;
    msg.reason = 17U;

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
    msg.setTimeStamp(0.885341050078);
    msg.setSource(34070U);
    msg.setSourceEntity(206U);
    msg.setDestination(17178U);
    msg.setDestinationEntity(12U);
    msg.id = 163U;
    msg.range = 0.0484785352003;
    msg.acceptance = 164U;

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
    msg.setTimeStamp(0.634757045408);
    msg.setSource(1358U);
    msg.setSourceEntity(65U);
    msg.setDestination(64141U);
    msg.setDestinationEntity(159U);
    msg.id = 221U;
    msg.range = 0.155632276106;
    msg.acceptance = 149U;

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
    msg.setTimeStamp(0.592047569773);
    msg.setSource(7668U);
    msg.setSourceEntity(191U);
    msg.setDestination(13746U);
    msg.setDestinationEntity(206U);
    msg.id = 211U;
    msg.range = 0.579777708628;
    msg.acceptance = 108U;

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
    msg.setTimeStamp(0.121291081737);
    msg.setSource(10067U);
    msg.setSourceEntity(197U);
    msg.setDestination(18117U);
    msg.setDestinationEntity(197U);
    msg.type = 79U;
    msg.reason = 152U;
    msg.value = 0.581433612018;
    msg.timestep = 0.619310622037;

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
    msg.setTimeStamp(0.160793190084);
    msg.setSource(45803U);
    msg.setSourceEntity(45U);
    msg.setDestination(57064U);
    msg.setDestinationEntity(89U);
    msg.type = 67U;
    msg.reason = 155U;
    msg.value = 0.929436284205;
    msg.timestep = 0.711999447479;

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
    msg.setTimeStamp(0.466117190018);
    msg.setSource(64162U);
    msg.setSourceEntity(204U);
    msg.setDestination(20799U);
    msg.setDestinationEntity(76U);
    msg.type = 108U;
    msg.reason = 127U;
    msg.value = 0.633592714019;
    msg.timestep = 0.525016400279;

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
    msg.setTimeStamp(0.395309671609);
    msg.setSource(19128U);
    msg.setSourceEntity(96U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.517115382149);
    msg.setSource(48951U);
    msg.setSourceEntity(193U);
    msg.setDestination(20775U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.982389166336);
    msg.setSource(24037U);
    msg.setSourceEntity(93U);
    msg.setDestination(47380U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.591683917034);
    msg.setSource(59134U);
    msg.setSourceEntity(247U);
    msg.setDestination(52132U);
    msg.setDestinationEntity(133U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VBCZAGPKWFDVVPANTGADUJLYMJTMRMSOBHYZYKPKASVPNREHPFFYHHSYORGTTJHTEOCUMXILCHTTVSGZINQQDYEELQWTOAQCPBINDBPZOYPIZDFCNQHNPRLXGVUGGYJCXWOUKNFZWJWWRR");
    tmp_msg_0.lat = 0.653610164559;
    tmp_msg_0.lon = 0.490188876591;
    tmp_msg_0.depth = 0.315911326487;
    tmp_msg_0.query_channel = 18U;
    tmp_msg_0.reply_channel = 145U;
    tmp_msg_0.transponder_delay = 178U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.300281155999;
    msg.y = 0.112461513507;
    msg.var_x = 0.364934438997;
    msg.var_y = 0.612955997979;
    msg.distance = 0.37067837803;

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
    msg.setTimeStamp(0.56425212506);
    msg.setSource(50030U);
    msg.setSourceEntity(171U);
    msg.setDestination(24240U);
    msg.setDestinationEntity(166U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CCZWOXTYNTJZPSKDTYVUDJUFSRLBMWBDKCKLERCSVBEZTHKJNBVFQPFGQZSAVHEPKTZM");
    tmp_msg_0.lat = 0.92528228157;
    tmp_msg_0.lon = 0.534918000997;
    tmp_msg_0.depth = 0.340257578533;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 86U;
    tmp_msg_0.transponder_delay = 211U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.360094598311;
    msg.y = 0.450017479891;
    msg.var_x = 0.349137454423;
    msg.var_y = 0.11591112063;
    msg.distance = 0.304825341969;

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
    msg.setTimeStamp(0.939961036759);
    msg.setSource(32784U);
    msg.setSourceEntity(215U);
    msg.setDestination(32264U);
    msg.setDestinationEntity(99U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SQBPZROUPATHQNLRQGSHBIUVLDGYYCWCFVCUNNZZOJNPAABZTJFKSZADOCBLJLJVCZWRYPVDUIREPDBAYWLDXGVSUDXXHQELNPTWGOXMNILEETVWFMARWKLBKKSBVLMKQUWYZMDTDGCUQCVKXOMHBEFGJJKTV");
    tmp_msg_0.lat = 0.720386372531;
    tmp_msg_0.lon = 0.386459882056;
    tmp_msg_0.depth = 0.0959317192674;
    tmp_msg_0.query_channel = 253U;
    tmp_msg_0.reply_channel = 76U;
    tmp_msg_0.transponder_delay = 233U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0553890467494;
    msg.y = 0.393491729372;
    msg.var_x = 0.990895435474;
    msg.var_y = 0.444769342355;
    msg.distance = 0.365306614758;

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
    msg.setTimeStamp(0.402086327638);
    msg.setSource(3089U);
    msg.setSourceEntity(9U);
    msg.setDestination(2375U);
    msg.setDestinationEntity(74U);
    msg.state = 180U;

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
    msg.setTimeStamp(0.666694441723);
    msg.setSource(4193U);
    msg.setSourceEntity(94U);
    msg.setDestination(56692U);
    msg.setDestinationEntity(215U);
    msg.state = 247U;

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
    msg.setTimeStamp(0.509091035187);
    msg.setSource(10449U);
    msg.setSourceEntity(172U);
    msg.setDestination(27670U);
    msg.setDestinationEntity(29U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.280260907864);
    msg.setSource(7198U);
    msg.setSourceEntity(36U);
    msg.setDestination(7962U);
    msg.setDestinationEntity(163U);
    msg.x = 0.196563307421;
    msg.y = 0.847474559966;
    msg.z = 0.832941431849;

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
    msg.setTimeStamp(0.362774124439);
    msg.setSource(24301U);
    msg.setSourceEntity(216U);
    msg.setDestination(24354U);
    msg.setDestinationEntity(112U);
    msg.x = 0.928712502184;
    msg.y = 0.386812547985;
    msg.z = 0.416497514462;

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
    msg.setTimeStamp(0.0498868454457);
    msg.setSource(42053U);
    msg.setSourceEntity(54U);
    msg.setDestination(23262U);
    msg.setDestinationEntity(222U);
    msg.x = 0.452664669555;
    msg.y = 0.232334091182;
    msg.z = 0.384390092777;

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
    msg.setTimeStamp(0.42577248825);
    msg.setSource(10883U);
    msg.setSourceEntity(98U);
    msg.setDestination(5130U);
    msg.setDestinationEntity(132U);
    msg.value = 0.059355681586;

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
    msg.setTimeStamp(0.083568884814);
    msg.setSource(35160U);
    msg.setSourceEntity(148U);
    msg.setDestination(16978U);
    msg.setDestinationEntity(167U);
    msg.value = 0.958155486547;

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
    msg.setTimeStamp(0.450646096522);
    msg.setSource(4606U);
    msg.setSourceEntity(241U);
    msg.setDestination(1716U);
    msg.setDestinationEntity(200U);
    msg.value = 0.792762018773;

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
    msg.setTimeStamp(0.615772676916);
    msg.setSource(13349U);
    msg.setSourceEntity(227U);
    msg.setDestination(40683U);
    msg.setDestinationEntity(40U);
    msg.value = 0.609387709353;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.836501294647);
    msg.setSource(3838U);
    msg.setSourceEntity(55U);
    msg.setDestination(26278U);
    msg.setDestinationEntity(162U);
    msg.value = 0.142325300671;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.57361750233);
    msg.setSource(6692U);
    msg.setSourceEntity(168U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(232U);
    msg.value = 0.612119549097;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.0710803022657);
    msg.setSource(52045U);
    msg.setSourceEntity(207U);
    msg.setDestination(58129U);
    msg.setDestinationEntity(201U);
    msg.value = 0.643491558764;
    msg.speed_units = 22U;

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
    msg.setTimeStamp(0.196314782432);
    msg.setSource(15884U);
    msg.setSourceEntity(90U);
    msg.setDestination(27550U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0167965077765;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.711282743116);
    msg.setSource(30535U);
    msg.setSourceEntity(201U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(160U);
    msg.value = 0.933442396116;
    msg.speed_units = 158U;

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
    msg.setTimeStamp(0.532534114877);
    msg.setSource(54253U);
    msg.setSourceEntity(87U);
    msg.setDestination(47556U);
    msg.setDestinationEntity(249U);
    msg.value = 0.400145248969;

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
    msg.setTimeStamp(0.18049827014);
    msg.setSource(36961U);
    msg.setSourceEntity(228U);
    msg.setDestination(30008U);
    msg.setDestinationEntity(84U);
    msg.value = 0.722713945529;

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
    msg.setTimeStamp(0.827428978526);
    msg.setSource(38518U);
    msg.setSourceEntity(112U);
    msg.setDestination(688U);
    msg.setDestinationEntity(243U);
    msg.value = 0.515718625615;

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
    msg.setTimeStamp(0.388189407318);
    msg.setSource(41116U);
    msg.setSourceEntity(96U);
    msg.setDestination(63051U);
    msg.setDestinationEntity(107U);
    msg.value = 0.85120019167;

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
    msg.setTimeStamp(0.637500566912);
    msg.setSource(63463U);
    msg.setSourceEntity(224U);
    msg.setDestination(65524U);
    msg.setDestinationEntity(82U);
    msg.value = 0.70358563703;

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
    msg.setTimeStamp(0.386670169441);
    msg.setSource(19484U);
    msg.setSourceEntity(15U);
    msg.setDestination(27646U);
    msg.setDestinationEntity(16U);
    msg.value = 0.850084625995;

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
    msg.setTimeStamp(0.755110673993);
    msg.setSource(42769U);
    msg.setSourceEntity(223U);
    msg.setDestination(56073U);
    msg.setDestinationEntity(211U);
    msg.value = 0.222984516098;

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
    msg.setTimeStamp(0.542656109126);
    msg.setSource(8544U);
    msg.setSourceEntity(45U);
    msg.setDestination(54338U);
    msg.setDestinationEntity(159U);
    msg.value = 0.432127561623;

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
    msg.setTimeStamp(0.511697561492);
    msg.setSource(54978U);
    msg.setSourceEntity(47U);
    msg.setDestination(2616U);
    msg.setDestinationEntity(212U);
    msg.value = 0.527864154609;

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
    msg.setTimeStamp(0.840409122588);
    msg.setSource(2749U);
    msg.setSourceEntity(73U);
    msg.setDestination(53181U);
    msg.setDestinationEntity(43U);
    msg.start_lat = 0.921285925088;
    msg.start_lon = 0.203362106986;
    msg.start_z = 0.171877354191;
    msg.start_z_units = 132U;
    msg.end_lat = 0.142866838857;
    msg.end_lon = 0.574084639588;
    msg.end_z = 0.928946871172;
    msg.end_z_units = 170U;
    msg.speed = 0.691352426254;
    msg.speed_units = 19U;
    msg.lradius = 0.33525054139;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.684135864648);
    msg.setSource(22429U);
    msg.setSourceEntity(244U);
    msg.setDestination(29711U);
    msg.setDestinationEntity(56U);
    msg.start_lat = 0.718943266812;
    msg.start_lon = 0.518974049642;
    msg.start_z = 0.0947106597226;
    msg.start_z_units = 224U;
    msg.end_lat = 0.373283229838;
    msg.end_lon = 0.516833621969;
    msg.end_z = 0.0790634924594;
    msg.end_z_units = 223U;
    msg.speed = 0.976255701595;
    msg.speed_units = 168U;
    msg.lradius = 0.595232655269;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.408894109756);
    msg.setSource(42009U);
    msg.setSourceEntity(236U);
    msg.setDestination(841U);
    msg.setDestinationEntity(100U);
    msg.start_lat = 0.367945931269;
    msg.start_lon = 0.429114945375;
    msg.start_z = 0.905776252571;
    msg.start_z_units = 166U;
    msg.end_lat = 0.282849475531;
    msg.end_lon = 0.0383164760559;
    msg.end_z = 0.109103820673;
    msg.end_z_units = 44U;
    msg.speed = 0.856556027012;
    msg.speed_units = 86U;
    msg.lradius = 0.498321030171;
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
    msg.setTimeStamp(0.608421596589);
    msg.setSource(2484U);
    msg.setSourceEntity(86U);
    msg.setDestination(36639U);
    msg.setDestinationEntity(194U);
    msg.x = 0.477867480668;
    msg.y = 0.897523443258;
    msg.z = 0.66972422863;
    msg.k = 0.962260807776;
    msg.m = 0.172538535388;
    msg.n = 0.83918893569;
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
    msg.setTimeStamp(0.53622137156);
    msg.setSource(4363U);
    msg.setSourceEntity(245U);
    msg.setDestination(9367U);
    msg.setDestinationEntity(227U);
    msg.x = 0.877468964149;
    msg.y = 0.457219296203;
    msg.z = 0.164966340798;
    msg.k = 0.057169159688;
    msg.m = 0.430622986367;
    msg.n = 0.572391377923;
    msg.flags = 218U;

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
    msg.setTimeStamp(0.905697578584);
    msg.setSource(43168U);
    msg.setSourceEntity(229U);
    msg.setDestination(49380U);
    msg.setDestinationEntity(40U);
    msg.x = 0.888890002422;
    msg.y = 0.613777667261;
    msg.z = 0.98135009987;
    msg.k = 0.648278909961;
    msg.m = 0.980739159872;
    msg.n = 0.137987116555;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.033632010416);
    msg.setSource(4207U);
    msg.setSourceEntity(31U);
    msg.setDestination(25521U);
    msg.setDestinationEntity(229U);
    msg.value = 0.567101255362;

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
    msg.setTimeStamp(0.386832205715);
    msg.setSource(62237U);
    msg.setSourceEntity(164U);
    msg.setDestination(57136U);
    msg.setDestinationEntity(89U);
    msg.value = 0.141343370312;

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
    msg.setTimeStamp(0.738208018437);
    msg.setSource(9903U);
    msg.setSourceEntity(254U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(134U);
    msg.value = 0.86223327417;

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
    msg.setTimeStamp(0.743114405077);
    msg.setSource(36015U);
    msg.setSourceEntity(46U);
    msg.setDestination(37775U);
    msg.setDestinationEntity(81U);
    msg.u = 0.377451131107;
    msg.v = 0.87880510108;
    msg.w = 0.761489014114;
    msg.p = 0.72597667536;
    msg.q = 0.779450266156;
    msg.r = 0.684578185687;
    msg.flags = 50U;

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
    msg.setTimeStamp(0.389928953748);
    msg.setSource(38438U);
    msg.setSourceEntity(198U);
    msg.setDestination(31564U);
    msg.setDestinationEntity(110U);
    msg.u = 0.875323760505;
    msg.v = 0.820069569175;
    msg.w = 0.464114043842;
    msg.p = 0.464525908083;
    msg.q = 0.95570350849;
    msg.r = 0.723007547541;
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
    msg.setTimeStamp(0.973833420147);
    msg.setSource(63373U);
    msg.setSourceEntity(219U);
    msg.setDestination(11983U);
    msg.setDestinationEntity(179U);
    msg.u = 0.574269053329;
    msg.v = 0.79277363798;
    msg.w = 0.702270621826;
    msg.p = 0.548029899812;
    msg.q = 0.947975593635;
    msg.r = 0.145450254055;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.6422338221);
    msg.setSource(1891U);
    msg.setSourceEntity(8U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(188U);
    msg.start_lat = 0.571668594144;
    msg.start_lon = 0.768029777769;
    msg.start_z = 0.52686054669;
    msg.start_z_units = 167U;
    msg.end_lat = 0.319203264345;
    msg.end_lon = 0.550203662996;
    msg.end_z = 0.752943410016;
    msg.end_z_units = 87U;
    msg.lradius = 0.912212831316;
    msg.flags = 109U;
    msg.x = 0.995983984859;
    msg.y = 0.995453357328;
    msg.z = 0.326214257154;
    msg.vx = 0.902040448863;
    msg.vy = 0.754521780244;
    msg.vz = 0.567768967457;
    msg.course_error = 0.951467262167;
    msg.eta = 50907U;

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
    msg.setTimeStamp(0.498421695554);
    msg.setSource(53231U);
    msg.setSourceEntity(18U);
    msg.setDestination(29305U);
    msg.setDestinationEntity(87U);
    msg.start_lat = 0.787140915555;
    msg.start_lon = 0.883212001584;
    msg.start_z = 0.00827259921225;
    msg.start_z_units = 136U;
    msg.end_lat = 0.681157942794;
    msg.end_lon = 0.598450322173;
    msg.end_z = 0.666186802193;
    msg.end_z_units = 154U;
    msg.lradius = 0.618612053144;
    msg.flags = 115U;
    msg.x = 0.804583408727;
    msg.y = 0.19525430862;
    msg.z = 0.242522838148;
    msg.vx = 0.0220359954856;
    msg.vy = 0.890865234783;
    msg.vz = 0.209203998096;
    msg.course_error = 0.498732994341;
    msg.eta = 44944U;

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
    msg.setTimeStamp(0.810701800849);
    msg.setSource(4553U);
    msg.setSourceEntity(35U);
    msg.setDestination(39642U);
    msg.setDestinationEntity(88U);
    msg.start_lat = 0.3736407579;
    msg.start_lon = 0.503345590296;
    msg.start_z = 0.555046682476;
    msg.start_z_units = 73U;
    msg.end_lat = 0.805142333647;
    msg.end_lon = 0.203436108259;
    msg.end_z = 0.424709482226;
    msg.end_z_units = 123U;
    msg.lradius = 0.101191973142;
    msg.flags = 73U;
    msg.x = 0.921626507358;
    msg.y = 0.444784031036;
    msg.z = 0.901490530865;
    msg.vx = 0.971263612728;
    msg.vy = 0.0748632721921;
    msg.vz = 0.771797859099;
    msg.course_error = 0.650244339821;
    msg.eta = 48150U;

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
    msg.setTimeStamp(0.33810156203);
    msg.setSource(41213U);
    msg.setSourceEntity(36U);
    msg.setDestination(20829U);
    msg.setDestinationEntity(27U);
    msg.k = 0.380217400766;
    msg.m = 0.976839893717;
    msg.n = 0.852912903536;

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
    msg.setTimeStamp(0.374206100174);
    msg.setSource(35487U);
    msg.setSourceEntity(234U);
    msg.setDestination(38686U);
    msg.setDestinationEntity(77U);
    msg.k = 0.505567843462;
    msg.m = 0.0515368586239;
    msg.n = 0.0724715677787;

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
    msg.setTimeStamp(0.301776909111);
    msg.setSource(26220U);
    msg.setSourceEntity(84U);
    msg.setDestination(18000U);
    msg.setDestinationEntity(131U);
    msg.k = 0.846922016815;
    msg.m = 0.176075678316;
    msg.n = 0.513375913648;

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
    msg.setTimeStamp(0.683575722325);
    msg.setSource(32535U);
    msg.setSourceEntity(38U);
    msg.setDestination(47303U);
    msg.setDestinationEntity(24U);
    msg.p = 0.35610778959;
    msg.i = 0.317521721072;
    msg.d = 0.29272347645;
    msg.a = 0.0148960198074;

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
    msg.setTimeStamp(0.997420565526);
    msg.setSource(19690U);
    msg.setSourceEntity(74U);
    msg.setDestination(57532U);
    msg.setDestinationEntity(211U);
    msg.p = 0.358508404223;
    msg.i = 0.331213709213;
    msg.d = 0.356440455728;
    msg.a = 0.332376909907;

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
    msg.setTimeStamp(0.516322713529);
    msg.setSource(34684U);
    msg.setSourceEntity(65U);
    msg.setDestination(49023U);
    msg.setDestinationEntity(138U);
    msg.p = 0.0390990149938;
    msg.i = 0.620604993373;
    msg.d = 0.944145089656;
    msg.a = 0.0362728518573;

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
    msg.setTimeStamp(0.472491558106);
    msg.setSource(33297U);
    msg.setSourceEntity(206U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(127U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.584953650397);
    msg.setSource(46074U);
    msg.setSourceEntity(155U);
    msg.setDestination(23150U);
    msg.setDestinationEntity(47U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.580448825783);
    msg.setSource(42432U);
    msg.setSourceEntity(17U);
    msg.setDestination(13596U);
    msg.setDestinationEntity(28U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.0959207443887);
    msg.setSource(60671U);
    msg.setSourceEntity(231U);
    msg.setDestination(13022U);
    msg.setDestinationEntity(34U);
    msg.timeout = 43066U;
    msg.lat = 0.938108706417;
    msg.lon = 0.333005784711;
    msg.z = 0.760197804316;
    msg.z_units = 27U;
    msg.speed = 0.915060819382;
    msg.speed_units = 9U;
    msg.roll = 0.95233141715;
    msg.pitch = 0.453584224153;
    msg.yaw = 0.0643231050796;
    msg.custom.assign("TQZTZAMXPMVEKPMEUPYCOOSHABEWNXTRKNAUQFSWAWLIOIJTPCSAEUMSDKVQGFNZWHDZMXGOMBEPDSADKWIOUOBFBDUKXVK");

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
    msg.setTimeStamp(0.112725775048);
    msg.setSource(51119U);
    msg.setSourceEntity(98U);
    msg.setDestination(39930U);
    msg.setDestinationEntity(126U);
    msg.timeout = 64537U;
    msg.lat = 0.624598574135;
    msg.lon = 0.524818262111;
    msg.z = 0.320475083058;
    msg.z_units = 193U;
    msg.speed = 0.78937287358;
    msg.speed_units = 247U;
    msg.roll = 0.485830403553;
    msg.pitch = 0.366398228624;
    msg.yaw = 0.905441135676;
    msg.custom.assign("KZMAQZFLVNKGSRQHIEHGBKHCBLOGBBGBCHJDHGVNTBJXHZRWYDWFNHSFLQGEVDGAJFGTLBSEUOFBRKGYLKPEPTUCXTUKTDYQUMPVSNUOVTUQAXOCTIMFMWILUYDMHYNUXJXETSZMZ");

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
    msg.setTimeStamp(0.206608114503);
    msg.setSource(14146U);
    msg.setSourceEntity(5U);
    msg.setDestination(26359U);
    msg.setDestinationEntity(187U);
    msg.timeout = 30152U;
    msg.lat = 0.186055170358;
    msg.lon = 0.450393663856;
    msg.z = 0.14836913074;
    msg.z_units = 221U;
    msg.speed = 0.113358340535;
    msg.speed_units = 28U;
    msg.roll = 0.763091088857;
    msg.pitch = 0.600342892611;
    msg.yaw = 0.241537244101;
    msg.custom.assign("ZTRCXSCHCNDNSXNPGMZZEVIKMAMWDOFEOITNFSLRBNVDJJWAPKRJYKUWJHMMGJBZLTBXLQYXOIDATKGCRYGYSSUQABUTZIGYKFPVFHSTPPHBFQQTKQUQBMUZAOLTCAEWIADRLJCJIDJLOAECYDZORJISGPSEOSUZMGALZHORBVRDWFWOXVVURTFPQLMAPVYKHVHEIHFVRYEKPYUWSPENDLNYQMBIQQGBXEWUXNUCWICJVNZEBXKHGLFXCDTHF");

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
    msg.setTimeStamp(0.182844080826);
    msg.setSource(42963U);
    msg.setSourceEntity(251U);
    msg.setDestination(45209U);
    msg.setDestinationEntity(192U);
    msg.timeout = 29548U;
    msg.lat = 0.90220458844;
    msg.lon = 0.147442239187;
    msg.z = 0.287664809032;
    msg.z_units = 172U;
    msg.speed = 0.632105013447;
    msg.speed_units = 139U;
    msg.duration = 43792U;
    msg.radius = 0.501755069225;
    msg.flags = 121U;
    msg.custom.assign("FHATGFACHHOEFDMNQZJVUWUDNPNZTMHSQERSKXYDWTLMEBOMXVHRATDPWQKXLLNUPAJTZGEHXTHVFEDKRIJFXESVRVOOAINYZMAZQDFBSQZLTEPVDXWOWJQBVIAFQVGBCHWQKSSAKKZZWCUYTMZGGEPNUUIQYLOUSB");

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
    msg.setTimeStamp(0.344992386276);
    msg.setSource(36542U);
    msg.setSourceEntity(158U);
    msg.setDestination(46983U);
    msg.setDestinationEntity(236U);
    msg.timeout = 31035U;
    msg.lat = 0.766426553982;
    msg.lon = 0.268783840564;
    msg.z = 0.344448720874;
    msg.z_units = 118U;
    msg.speed = 0.961122875471;
    msg.speed_units = 170U;
    msg.duration = 36371U;
    msg.radius = 0.316101936257;
    msg.flags = 174U;
    msg.custom.assign("SOYSFLUNABYENBEKUINYGRIRSZHQMDQEKZCYKWDYQALTBWNLGJIKBXFDXVWODRJZZQDMHTHHPMHIBJPUELJJADBQRSOMWNWGKQPWSVJTWACRVJFUOXNOWKUYXOLSETCNCPPEGFDCJRZHYVXGAPCPTUXCDJEEFZAIZSTFYZGHRIOXKUVRXSIAQLNXVIGZQTAMBLESPLYVRSNOBKKWNOVLPZRFMVOBMYFQXPLHIUCATDKFHJGIUV");

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
    msg.setTimeStamp(0.0065995079067);
    msg.setSource(8868U);
    msg.setSourceEntity(227U);
    msg.setDestination(12480U);
    msg.setDestinationEntity(133U);
    msg.timeout = 6717U;
    msg.lat = 0.492809482801;
    msg.lon = 0.191024729714;
    msg.z = 0.254617491101;
    msg.z_units = 115U;
    msg.speed = 0.523049870915;
    msg.speed_units = 201U;
    msg.duration = 45700U;
    msg.radius = 0.697214398213;
    msg.flags = 69U;
    msg.custom.assign("JARNGPYCNVYIUOFKSDTLAVWZKEVMQVBINZLLSPKJCDXWBBZEJHWLWXOOFQORWECWDRWSRHUJGWONTAVZPFRTTJKKPSTIKGBFPCVIMOQATCYJQNAHMDAQXRLUGCBYBQUCQQDFMCWUGFPUPBEUETMKQPZFGMCMSBANMFSVGTQAOIDFJUCIBIGYHUIEARFVH");

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
    msg.setTimeStamp(0.634656431345);
    msg.setSource(10742U);
    msg.setSourceEntity(151U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(16U);
    msg.custom.assign("DJNXKHJUISOXKJWWGRPPONNLKNUUIAZYBZUMEMBVPTACLQDEUVEBXWOHHFDLZTCQGVHFYWOOXJFVRYXZCYPLSNFLQMGGVATMPSIHJMEIEFBBSIYBODKVDFFDPHILYSDNGQFQURWSXJAZCEKBWFPVPNGYBZETMWYAGEPJXWDCRCRRLHCTMVRLTNLHVXCMFVAGKSYYIATXZQBDRCKWRECANOIZTUJOUQGIIZANSGMRTKSUPKXTKQOSMDZHJQWAB");

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
    msg.setTimeStamp(0.0858019500118);
    msg.setSource(3508U);
    msg.setSourceEntity(213U);
    msg.setDestination(6326U);
    msg.setDestinationEntity(22U);
    msg.custom.assign("NPQGAWXHHYWIGOLBKMPRMTYQRTGAJEYHZOIQWHANVJZPPIVXNJMCUQZSROTXBVTSMHNPWYVCQFNWIOB");

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
    msg.setTimeStamp(0.187249484203);
    msg.setSource(31582U);
    msg.setSourceEntity(84U);
    msg.setDestination(41370U);
    msg.setDestinationEntity(98U);
    msg.custom.assign("EDQAZXLLGWXPYTUDTTSHJJPFPUDQKGGJDAHCPQPTEFKYGVOKPBXFFITZPNKGVYGSAVKOBCJAXRNHPITVBWICRMKALONNVKWFJJSNA");

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
    msg.setTimeStamp(0.204385253482);
    msg.setSource(53242U);
    msg.setSourceEntity(234U);
    msg.setDestination(25891U);
    msg.setDestinationEntity(220U);
    msg.timeout = 25669U;
    msg.lat = 0.604843260898;
    msg.lon = 0.631557597498;
    msg.z = 0.424516840712;
    msg.z_units = 119U;
    msg.duration = 2771U;
    msg.speed = 0.645281497235;
    msg.speed_units = 107U;
    msg.type = 164U;
    msg.radius = 0.77035611485;
    msg.length = 0.618549052074;
    msg.bearing = 0.697804937805;
    msg.direction = 83U;
    msg.custom.assign("SMCIQZBSJRZKFGFHEBOFHURLJIVXQJSQWESNROOLSDMCFHIWILPXDHIMPSJWGASYPGXQJOEMABLIYKIRWIPMMCZMNFDMZUCQYURDBAOXKEZOAYTQOYKNNRGTGWIUZPRLLNPYJBAAGPGLVZXFPUSBH");

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
    msg.setTimeStamp(0.593328908483);
    msg.setSource(29759U);
    msg.setSourceEntity(155U);
    msg.setDestination(44582U);
    msg.setDestinationEntity(173U);
    msg.timeout = 3777U;
    msg.lat = 0.765598750107;
    msg.lon = 0.780735884716;
    msg.z = 0.234142813716;
    msg.z_units = 178U;
    msg.duration = 39288U;
    msg.speed = 0.589649093381;
    msg.speed_units = 141U;
    msg.type = 52U;
    msg.radius = 0.694210364351;
    msg.length = 0.507337191504;
    msg.bearing = 0.562887229868;
    msg.direction = 175U;
    msg.custom.assign("MKOVWDBTZNZLYAMKPVLESWPCDVXLFDPCUZAYKGFUQFKROWEYNOXJMRBIDGLSOVZJXCVXHDPJBWRHNGBQKSSERQJOXROIEWIFBHXEUBEMAAQYFJWFXABPYIEULGIGQTFKIPESUMMBJDBWVJHTDAWYJL");

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
    msg.setTimeStamp(0.300840182954);
    msg.setSource(49674U);
    msg.setSourceEntity(239U);
    msg.setDestination(37815U);
    msg.setDestinationEntity(222U);
    msg.timeout = 35450U;
    msg.lat = 0.50393086975;
    msg.lon = 0.713061110432;
    msg.z = 0.889541088756;
    msg.z_units = 160U;
    msg.duration = 45900U;
    msg.speed = 0.988981035099;
    msg.speed_units = 14U;
    msg.type = 175U;
    msg.radius = 0.437029855971;
    msg.length = 0.0356594135411;
    msg.bearing = 0.883904911567;
    msg.direction = 156U;
    msg.custom.assign("AIEMPMBNWSMRBKLVJGYGIHBGZQDRYKOHYTJIFSNFQXGSQCOCRSDKHFEGVUJHDVYGJTBBOEA");

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
    msg.setTimeStamp(0.508226678849);
    msg.setSource(10823U);
    msg.setSourceEntity(194U);
    msg.setDestination(19653U);
    msg.setDestinationEntity(104U);
    msg.duration = 40600U;
    msg.custom.assign("YZVLJXWYNYSXHRURLOHOELUIAVNCGGAZJCMRPTRTIFWIDSIOLHACFENYKVLVHRTNNZSTOVALDDSNMCKITLJWKLFZJRUKWADTEQMDPNJXSEWTKPOAFVDLGWQNQFWTKUVRVMZOEHZWSHUIP");

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
    msg.setTimeStamp(0.189530572353);
    msg.setSource(47224U);
    msg.setSourceEntity(198U);
    msg.setDestination(8864U);
    msg.setDestinationEntity(2U);
    msg.duration = 32148U;
    msg.custom.assign("HHQKDMXIXILIGKXJWOVSTSOSNFOGGBRQWXVXWRYQKPUMDMVANCAVTBYEODOJVEMGOFIEPUTVAPXUNKFZDKWHXAKLTZHRHCPFCFQEWJGCCLJNZPNUCBAHZULSAYNUKPHFJIUDGWTBFNRZOOPZYTMICQLLQGJXWFASUMCRBHGEPANUIDOTTPMRHMSWZSXIIVFWVSBQRYFKAZDDSHBIRKVGJLNYTDEALYYECKDRQTQSEXWRUNPOMBZ");

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
    msg.setTimeStamp(0.189501110576);
    msg.setSource(34379U);
    msg.setSourceEntity(14U);
    msg.setDestination(57108U);
    msg.setDestinationEntity(120U);
    msg.duration = 26868U;
    msg.custom.assign("LJLAVXIABXTFMTVRHEXOZYPSTGTFORUJIOPJXQQRCQJXLKCYTKDMYZKGANGCWMLSSIQENIHHCSFJTCCRPEVWUHVVBZZSFHXTJSJEXKGOAQNBZRWNYBDGQY");

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
    msg.setTimeStamp(0.986797205796);
    msg.setSource(61291U);
    msg.setSourceEntity(65U);
    msg.setDestination(6633U);
    msg.setDestinationEntity(63U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0531743306563;
    tmp_msg_0.speed_units = 30U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46675U;
    msg.custom.assign("QYIFPCPOKTTPO");

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
    msg.setTimeStamp(0.991789025944);
    msg.setSource(28024U);
    msg.setSourceEntity(48U);
    msg.setDestination(24825U);
    msg.setDestinationEntity(141U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0414719276315;
    tmp_msg_0.speed_units = 134U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44089U;
    msg.custom.assign("UIWRCKUBUPTIAVTIPMQOSVMVRTSQAAPWYQYQCUMKNPGUECSKKZDGFSLCOMQDADFFHPJXHAWLNMROELYGSQFRYGGIQUIRZSATLNDBCROHXEVBMXJBISGUJLBZWIYNECYBBZFAUHOHENFZECQWITVHVIMLTUNZLPVYRWWBZKBEZMEJKNTH");

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
    msg.setTimeStamp(0.127251802316);
    msg.setSource(52511U);
    msg.setSourceEntity(150U);
    msg.setDestination(53080U);
    msg.setDestinationEntity(33U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.00637007853047;
    tmp_msg_0.z_units = 159U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22181U;
    msg.custom.assign("YIGNMVPYEBZDLILHBHKBLOOKMXXVAKRNPUXUSOAFDPLEFSWKWMWIFLACYROZPJCQFHSGWERSSRZZWFOZCODKCEUESVBNEAHCDPMXRJT");

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
    msg.setTimeStamp(0.492661612787);
    msg.setSource(358U);
    msg.setSourceEntity(19U);
    msg.setDestination(40275U);
    msg.setDestinationEntity(4U);
    msg.timeout = 6947U;
    msg.lat = 0.101022627357;
    msg.lon = 0.724784005132;
    msg.z = 0.313495707308;
    msg.z_units = 18U;
    msg.speed = 0.658389882689;
    msg.speed_units = 146U;
    msg.bearing = 0.588429797272;
    msg.cross_angle = 0.764775754729;
    msg.width = 0.196223972309;
    msg.length = 0.938260610469;
    msg.hstep = 0.412894493435;
    msg.coff = 41U;
    msg.alternation = 75U;
    msg.flags = 237U;
    msg.custom.assign("QBTKCLFZHHGACWRADSTAVCNFKTBLQZUCYJGYQBZARGLOGVNGFWMIGXQTLAMNOODVIFWFRDETGIILUSGWKPVLMUYNTNSUOOCYHHOQTKWJBDWMAPDBXIIQDBUDNIEMENZPOUYXUMCJAZOEGKYFCXWVYBRPXVFIJSAMRZQSGWOVFJJPJX");

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
    msg.setTimeStamp(0.0555068731435);
    msg.setSource(16665U);
    msg.setSourceEntity(206U);
    msg.setDestination(25187U);
    msg.setDestinationEntity(200U);
    msg.timeout = 12949U;
    msg.lat = 0.872922161343;
    msg.lon = 0.301764668499;
    msg.z = 0.551199122219;
    msg.z_units = 236U;
    msg.speed = 0.32752545798;
    msg.speed_units = 252U;
    msg.bearing = 0.429215172213;
    msg.cross_angle = 0.0272432355626;
    msg.width = 0.622226479153;
    msg.length = 0.681191471575;
    msg.hstep = 0.0121436805852;
    msg.coff = 52U;
    msg.alternation = 184U;
    msg.flags = 92U;
    msg.custom.assign("AYKLPETPYZDJSIIHJWTEXNSXRZIYQXVRJYBDJKCDRVHJXJFTTWSLLLZKDUWHMHZVKKGSYAMSHPQGCJPPITRLFISUWEVCNDUTVOGFQQPEZDXRIWOXEIXUTHZLRQNGSMBBQBENUOKNVPMJVZKYVCIMAOMCFUCHYS");

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
    msg.setTimeStamp(0.525913730004);
    msg.setSource(35380U);
    msg.setSourceEntity(68U);
    msg.setDestination(33599U);
    msg.setDestinationEntity(41U);
    msg.timeout = 25543U;
    msg.lat = 0.329566012093;
    msg.lon = 0.274130500115;
    msg.z = 0.392734324795;
    msg.z_units = 153U;
    msg.speed = 0.915194985814;
    msg.speed_units = 112U;
    msg.bearing = 0.350087633154;
    msg.cross_angle = 0.679662705615;
    msg.width = 0.281204005665;
    msg.length = 0.781888643532;
    msg.hstep = 0.374315036627;
    msg.coff = 177U;
    msg.alternation = 89U;
    msg.flags = 19U;
    msg.custom.assign("RHGWUZDGPEWUDZYAQUKGORBIZBOOTFAHVNYHTCFRDLHHIXFPXQKBSVVWIPWCVCAUMWGQHVTQXLUFCKUKAYJNMNTMETFXZZAEVJFBRQFGGSIUSJKNVCLQTIRRXTOVBSGEUGP");

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
    msg.setTimeStamp(0.957792429812);
    msg.setSource(23844U);
    msg.setSourceEntity(75U);
    msg.setDestination(14315U);
    msg.setDestinationEntity(137U);
    msg.timeout = 17588U;
    msg.lat = 0.643039329009;
    msg.lon = 0.2643725077;
    msg.z = 0.0157139322978;
    msg.z_units = 76U;
    msg.speed = 0.53406119952;
    msg.speed_units = 175U;
    msg.custom.assign("EVTXJNYHAQMCDEMOUGKQESQPUDPJAZLYCWZDUWEVRRXPCXFRAXPEJJRQOGPLAYBYPVUNQJLNNSFVLURDMWROMOXAUBXAFFGOK");

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
    msg.setTimeStamp(0.574482832263);
    msg.setSource(17560U);
    msg.setSourceEntity(1U);
    msg.setDestination(60899U);
    msg.setDestinationEntity(178U);
    msg.timeout = 15192U;
    msg.lat = 0.0316293999966;
    msg.lon = 0.399134877982;
    msg.z = 0.799307014505;
    msg.z_units = 165U;
    msg.speed = 0.163976829871;
    msg.speed_units = 241U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0611351270748;
    tmp_msg_0.y = 0.272227619107;
    tmp_msg_0.z = 0.640417728409;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BEEALEFXPSNGMFRPNCOEEKRIVV");

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
    msg.setTimeStamp(0.804911253576);
    msg.setSource(58818U);
    msg.setSourceEntity(212U);
    msg.setDestination(17633U);
    msg.setDestinationEntity(95U);
    msg.timeout = 28172U;
    msg.lat = 0.97663036306;
    msg.lon = 0.787471673815;
    msg.z = 0.92778852462;
    msg.z_units = 234U;
    msg.speed = 0.997218326783;
    msg.speed_units = 253U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.761783587193;
    tmp_msg_0.y = 0.104701752269;
    tmp_msg_0.z = 0.914925897201;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XBWRNHFVKGHCXDEEORCJHIDNEWJUDQIGPAFGPUHLJCVQRSFCCFWDOOEEEWJPIOVTTCAQZFWPLAAMZIIBAZKXWVSTGLSZKCCSYUAMRUYUGDIVRBFBJQAPJBQUZNJYTSTMLZSTPLXORRNFGGQTKHSYMTYLBMHVAGQXODJRZDEIIBPZYWMFHUYHMHLVHXOLQNYXYFVAEMZWXKGWKZBQNITOMLNKISUCMAFBPGORSDN");

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
    msg.setTimeStamp(0.536839470504);
    msg.setSource(33431U);
    msg.setSourceEntity(193U);
    msg.setDestination(25473U);
    msg.setDestinationEntity(206U);
    msg.x = 0.7621845453;
    msg.y = 0.00539458269107;
    msg.z = 0.495775645543;

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
    msg.setTimeStamp(0.483563101072);
    msg.setSource(54506U);
    msg.setSourceEntity(76U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(10U);
    msg.x = 0.955908501748;
    msg.y = 0.976106715728;
    msg.z = 0.546357521647;

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
    msg.setTimeStamp(0.0551664541344);
    msg.setSource(54068U);
    msg.setSourceEntity(37U);
    msg.setDestination(54317U);
    msg.setDestinationEntity(116U);
    msg.x = 0.610654217285;
    msg.y = 0.395991299856;
    msg.z = 0.553763155151;

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
    msg.setTimeStamp(0.630785559158);
    msg.setSource(49987U);
    msg.setSourceEntity(249U);
    msg.setDestination(23958U);
    msg.setDestinationEntity(206U);
    msg.timeout = 37362U;
    msg.lat = 0.737568492576;
    msg.lon = 0.971619296428;
    msg.z = 0.295278553555;
    msg.z_units = 183U;
    msg.amplitude = 0.938000150995;
    msg.pitch = 0.859121895318;
    msg.speed = 0.436762852189;
    msg.speed_units = 28U;
    msg.custom.assign("KJVOYKQTOLJCFFPVBNWTMFYIXFHRRKAICOQXUCJIKSRNOXSNVEEIHALMAIFWJBOBLHDYNSEJWSRDPLQMDJFMBVGIGGFXWYSONDAKRHNAQYEZYQOHQVD");

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
    msg.setTimeStamp(0.863166127696);
    msg.setSource(51127U);
    msg.setSourceEntity(87U);
    msg.setDestination(17437U);
    msg.setDestinationEntity(137U);
    msg.timeout = 21055U;
    msg.lat = 0.278954507448;
    msg.lon = 0.0818487765386;
    msg.z = 0.979663433963;
    msg.z_units = 87U;
    msg.amplitude = 0.0857272053775;
    msg.pitch = 0.707280358775;
    msg.speed = 0.0962856537062;
    msg.speed_units = 249U;
    msg.custom.assign("CWXFJFFGWRBNKIBHSNOORTONLKKZFDIHEKRVQLQSF");

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
    msg.setTimeStamp(0.142222440074);
    msg.setSource(54629U);
    msg.setSourceEntity(52U);
    msg.setDestination(45413U);
    msg.setDestinationEntity(254U);
    msg.timeout = 56839U;
    msg.lat = 0.0169900476527;
    msg.lon = 0.0689220109031;
    msg.z = 0.582221437745;
    msg.z_units = 33U;
    msg.amplitude = 0.0305280358474;
    msg.pitch = 0.0829047462768;
    msg.speed = 0.83569640951;
    msg.speed_units = 243U;
    msg.custom.assign("BCVCTJNWMLEGOOVLLSEGFXHXKCLDUEWJUSKXHEWLUVCFIYPSZW");

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
    msg.setTimeStamp(0.896433426749);
    msg.setSource(28889U);
    msg.setSourceEntity(129U);
    msg.setDestination(44521U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.227353050334);
    msg.setSource(43730U);
    msg.setSourceEntity(80U);
    msg.setDestination(25412U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.274558422846);
    msg.setSource(36184U);
    msg.setSourceEntity(31U);
    msg.setDestination(47419U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.959665797956);
    msg.setSource(3528U);
    msg.setSourceEntity(132U);
    msg.setDestination(26292U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.864104419162;
    msg.lon = 0.838017954644;
    msg.z = 0.0453458515825;
    msg.z_units = 235U;
    msg.radius = 0.0226437211489;
    msg.duration = 3276U;
    msg.speed = 0.789183987524;
    msg.speed_units = 241U;
    msg.custom.assign("WRSPIZVAEPZJAFHDXHWZROXWOMRVFLNETUFXLVYZZADRFGXYQAHPLCVJXTAMDMJNBUO");

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
    msg.setTimeStamp(0.633974619054);
    msg.setSource(10807U);
    msg.setSourceEntity(89U);
    msg.setDestination(32691U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.926784325657;
    msg.lon = 0.162393967026;
    msg.z = 0.189945455884;
    msg.z_units = 30U;
    msg.radius = 0.8126337689;
    msg.duration = 18551U;
    msg.speed = 0.5768725144;
    msg.speed_units = 145U;
    msg.custom.assign("AVMUJWPGNGEDRJVTDBELDKEFLACGKMQSVUJETXXFYSSXSIJHFVCUCDCQT");

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
    msg.setTimeStamp(0.0683357420494);
    msg.setSource(18415U);
    msg.setSourceEntity(184U);
    msg.setDestination(37906U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.52845706914;
    msg.lon = 0.336858861532;
    msg.z = 0.0879580130024;
    msg.z_units = 151U;
    msg.radius = 0.994347856545;
    msg.duration = 53410U;
    msg.speed = 0.950385790307;
    msg.speed_units = 75U;
    msg.custom.assign("VXFPYUUBDMYILDBGWJOBKSGYALXTOOOGYTGVJPNUSBIACGBZPKWCHWUECFWUUHLSKHQZQYNMKXFTDFGZAE");

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
    msg.setTimeStamp(0.534796178274);
    msg.setSource(3028U);
    msg.setSourceEntity(21U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(145U);
    msg.timeout = 24843U;
    msg.flags = 73U;
    msg.lat = 0.26356169876;
    msg.lon = 0.32389037924;
    msg.start_z = 0.961312034956;
    msg.start_z_units = 209U;
    msg.end_z = 0.934092936606;
    msg.end_z_units = 60U;
    msg.radius = 0.903990318093;
    msg.speed = 0.257723673366;
    msg.speed_units = 22U;
    msg.custom.assign("XISGUJIZBYXNVXZLJVRQFDXDQUKCBYQLEOTHIECDSGDFJNABUPKZMVEFCQGUGCBAGWKCIBQWRPCAXUDYJSLEJLZKLDNONTYTJPKTQYQTSSUAGMZXSMDSNWOLHNOGHJZHLASRZITEVYHUOERACPNBIXZPMSYMWCLDLFQXDTASKOPXOHHTKBRHMFEZWNIVBIYVDCBQGWRAJBWORAVAMTFFMFKNPXGIGOFYJPWPCKEIWEOEHNYKRJWQMU");

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
    msg.setTimeStamp(0.171858976721);
    msg.setSource(33800U);
    msg.setSourceEntity(169U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(251U);
    msg.timeout = 46671U;
    msg.flags = 147U;
    msg.lat = 0.196365519182;
    msg.lon = 0.333276216023;
    msg.start_z = 0.160650436332;
    msg.start_z_units = 95U;
    msg.end_z = 0.949991247076;
    msg.end_z_units = 166U;
    msg.radius = 0.305900427671;
    msg.speed = 0.414810744377;
    msg.speed_units = 83U;
    msg.custom.assign("UQSGDMXIRMXQAAISQNOIFPVNKHWOROJAWCLKFSFVGCQWZGEESIZDMZUPXAFTMIGLVNAZJIJXBJZRYYGJOVKKLVU");

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
    msg.setTimeStamp(0.313087815224);
    msg.setSource(44403U);
    msg.setSourceEntity(233U);
    msg.setDestination(43082U);
    msg.setDestinationEntity(37U);
    msg.timeout = 60864U;
    msg.flags = 166U;
    msg.lat = 0.783678095908;
    msg.lon = 0.884950634578;
    msg.start_z = 0.56245895262;
    msg.start_z_units = 204U;
    msg.end_z = 0.0603348488085;
    msg.end_z_units = 76U;
    msg.radius = 0.621017120726;
    msg.speed = 0.14020794633;
    msg.speed_units = 128U;
    msg.custom.assign("GSGVSPRUTCIGNWVUORBBDTDJAINZPXGICTEVXXFZOBJAFOLBKXHQUTFMNHDHTZLVYBCGKCEVLYMUASRATYQHNVNSMNWSZPBUKFLLUEYALHAZRMTUNGIPMXHFKRHDCNSQHDHJNXKGBDQFIZMWXESTPBVQDUNZJCUDSWLFXXAVYOCOKKDRIIWAF");

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
    msg.setTimeStamp(0.70834218076);
    msg.setSource(19285U);
    msg.setSourceEntity(228U);
    msg.setDestination(36359U);
    msg.setDestinationEntity(16U);
    msg.timeout = 41459U;
    msg.lat = 0.556278139538;
    msg.lon = 0.262391578869;
    msg.z = 0.5054122844;
    msg.z_units = 22U;
    msg.speed = 0.576627581298;
    msg.speed_units = 206U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.94833717939;
    tmp_msg_0.y = 0.553577888954;
    tmp_msg_0.z = 0.857019442055;
    tmp_msg_0.t = 0.791233013425;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GBMQHKZJAVZYTWNGKILJVDHMKUPBZEVAVIEOJRGHFOUKSZUQSYTVNX");

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
    msg.setTimeStamp(0.702414957677);
    msg.setSource(52048U);
    msg.setSourceEntity(224U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(113U);
    msg.timeout = 46804U;
    msg.lat = 0.60468747285;
    msg.lon = 0.994839666236;
    msg.z = 0.962986085275;
    msg.z_units = 122U;
    msg.speed = 0.355795025527;
    msg.speed_units = 64U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.569935267802;
    tmp_msg_0.y = 0.598346447563;
    tmp_msg_0.z = 0.259377077799;
    tmp_msg_0.t = 0.742430615074;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QBTNLDCIOMLOPZEGNSHJBROYHKJZMLOBLDJZLKAWAIIFXEDQOECBNRJSWAECJJIVAWQIMDSUXYIAIFOXGWZXGDZQKOFNMLHSUBQSKAAUURGGKFJSROSDGEFGNWWUMZWCYUWJHYVTNUTFYLECHSYYCFDVOQMTIRIPPNWEKVMAYQKQNSX");

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
    msg.setTimeStamp(0.327170584003);
    msg.setSource(34604U);
    msg.setSourceEntity(131U);
    msg.setDestination(12226U);
    msg.setDestinationEntity(188U);
    msg.timeout = 60967U;
    msg.lat = 0.226583984471;
    msg.lon = 0.844730273389;
    msg.z = 0.054846311333;
    msg.z_units = 115U;
    msg.speed = 0.401607537089;
    msg.speed_units = 193U;
    msg.custom.assign("IYHDBGIKGKEDYZAIZBJFAMVVYUELASJSOSLWHPPSHAFEFXLKPUQGYIWTYMTMYJEQQRNEWXVOXQVIRESFOHZNKFJYHUCZXKGDLQURAFCURLAGWATVCOOBIMQDHREKIPPOFSMDJDNZLMUWQLBPXZBTCWTNMVSJSWSDMQRLJWNREYBTYNBONIWUGUUTPFACGDOBZPGCODEZJVCNBHQPIELDPFZVQXBZXAVIC");

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
    msg.setTimeStamp(0.190517651862);
    msg.setSource(42644U);
    msg.setSourceEntity(162U);
    msg.setDestination(65087U);
    msg.setDestinationEntity(16U);
    msg.x = 0.826567613985;
    msg.y = 0.0231271157804;
    msg.z = 0.726270407191;
    msg.t = 0.625478005618;

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
    msg.setTimeStamp(0.206579549684);
    msg.setSource(56760U);
    msg.setSourceEntity(20U);
    msg.setDestination(1274U);
    msg.setDestinationEntity(74U);
    msg.x = 0.943535353142;
    msg.y = 0.38850021193;
    msg.z = 0.460028679908;
    msg.t = 0.00124179132629;

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
    msg.setTimeStamp(0.124851202335);
    msg.setSource(28254U);
    msg.setSourceEntity(253U);
    msg.setDestination(19186U);
    msg.setDestinationEntity(244U);
    msg.x = 0.555954155328;
    msg.y = 0.0522011944245;
    msg.z = 0.0483386525856;
    msg.t = 0.627857384618;

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
    msg.setTimeStamp(0.67076494373);
    msg.setSource(16346U);
    msg.setSourceEntity(118U);
    msg.setDestination(45251U);
    msg.setDestinationEntity(15U);
    msg.timeout = 16399U;
    msg.name.assign("YQASZMGEFXFMKYYEOACEIHPAGUBEPSNS");
    msg.custom.assign("NAHYNYTEKQCXNAJVFSPWWBBURSPUUGRNOZSQZOBCFTJVNCHIWQLZLNCCTLVVPSNVPMYDGKAPXDWQITHRDXKYBIOJSGZQQLTMGSSSZRKMOJCTXUOGFYJHALAHXBFUXDBYRHKRMKGWVUMDLFCPIQBENDJODEWOXLBLQZGPZEGVMOOIOXEZYBKJYUJUREEMCJTQZADFUFVXBIJXWEWFAFEGTLKPMY");

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
    msg.setTimeStamp(0.53614934399);
    msg.setSource(2892U);
    msg.setSourceEntity(139U);
    msg.setDestination(7782U);
    msg.setDestinationEntity(172U);
    msg.timeout = 661U;
    msg.name.assign("AXSTTHLBUXLZJQKTWSVCYIQORULIWJPLSJTPPHUNGOIRAPTBUJYTDKMDBOHTIJRMEAMPRINPXOYDQQWJNXBGFYMDXRMFYMKOLWUIKVRBLOTKZQFDHNUDGNHVNIYYEIFZM");
    msg.custom.assign("ZDGASVISQMUG");

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
    msg.setTimeStamp(0.0672032243847);
    msg.setSource(44398U);
    msg.setSourceEntity(59U);
    msg.setDestination(49087U);
    msg.setDestinationEntity(230U);
    msg.timeout = 54025U;
    msg.name.assign("UBSLGJCZRZYLDKVSFNTHOVUZRDQYOGFHHKMKBTRWUCDBCJXZVOVAJEEOBPYPLNZAIDRPWOJCMTQVWQIFGBHPNFFNKCBNDPAWNXIMGOSNCHYDILEYCAQK");
    msg.custom.assign("YQHWZWPSSBFJXZVFYBPUCMEMLESIRENMENSCZAYLXXHGKTIVBUOLNGAFNOYHDJZMROEXQAFTMRKJQNCUBWVTAEAMRIJLUOWJKGRFHILRIHLDYBCLNBHRCPNQDIDIAOPXXYBSPPKCMIPAIFDDWRVUKVWNJWGEXGQYVTOBIEZDCZLT");

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
    msg.setTimeStamp(0.500089837023);
    msg.setSource(10050U);
    msg.setSourceEntity(77U);
    msg.setDestination(11811U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.406695260792;
    msg.lon = 0.415410047447;
    msg.z = 0.801178897042;
    msg.z_units = 204U;
    msg.speed = 0.304049759864;
    msg.speed_units = 175U;
    msg.start_time = 0.905182405692;
    msg.custom.assign("CRDSZUHEASALFHWBCCXWZAHQPYSRVYVYCVFEQIANNLSHWEOTIUBJSNEGARDOIITBZPRHZMVGTEQFTRUTFYOKRZLPTXQQDRGVEDYMZWXCLNUMKHOQHGAMJKWNAADFPYUXOJBCHPYIVNPMQEGPL");

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
    msg.setTimeStamp(0.392896166129);
    msg.setSource(59177U);
    msg.setSourceEntity(21U);
    msg.setDestination(6398U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.477130937698;
    msg.lon = 0.51713333136;
    msg.z = 0.334799764043;
    msg.z_units = 240U;
    msg.speed = 0.44629786978;
    msg.speed_units = 130U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.985402323465;
    tmp_msg_0.y = 0.252562229161;
    tmp_msg_0.z = 0.22043763269;
    tmp_msg_0.t = 0.617340481084;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 47997U;
    tmp_msg_1.off_x = 0.777296981453;
    tmp_msg_1.off_y = 0.739361991869;
    tmp_msg_1.off_z = 0.823069688181;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.284402845545;
    msg.custom.assign("GEBHSJCAIXAVCKREFIIYXWKXS");

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
    msg.setTimeStamp(0.387887852647);
    msg.setSource(28625U);
    msg.setSourceEntity(163U);
    msg.setDestination(47919U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.905770089083;
    msg.lon = 0.38066503484;
    msg.z = 0.686328584443;
    msg.z_units = 14U;
    msg.speed = 0.0146039776237;
    msg.speed_units = 125U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.626709402828;
    tmp_msg_0.y = 0.36787459708;
    tmp_msg_0.z = 0.552770641744;
    tmp_msg_0.t = 0.645591473619;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.441345627358;
    msg.custom.assign("JSYAQELUQZOCADGGQIAUMKAOYLLXBIHHJDTMYQMRNGFKCWNZFATFVPSZOOSIXHHZGMWHLACCAJZUSXUETXTZIYOQISBUEXZWKJVWNBHICMEXPKSFVVMKDFOBZYRWUISXLADMARLQJRLEWUSFEANLBYGJBDNNYZVTUEUVJFQBLKVGRWQOKXRIYEFXCDZTEPTVV");

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
    msg.setTimeStamp(0.256964967548);
    msg.setSource(16792U);
    msg.setSourceEntity(177U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(222U);
    msg.vid = 47650U;
    msg.off_x = 0.2082294464;
    msg.off_y = 0.513370938096;
    msg.off_z = 0.658284184578;

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
    msg.setTimeStamp(0.631121958672);
    msg.setSource(40009U);
    msg.setSourceEntity(55U);
    msg.setDestination(18929U);
    msg.setDestinationEntity(52U);
    msg.vid = 53170U;
    msg.off_x = 0.970912047978;
    msg.off_y = 0.719668123234;
    msg.off_z = 0.00106183973012;

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
    msg.setTimeStamp(0.367415884439);
    msg.setSource(61223U);
    msg.setSourceEntity(120U);
    msg.setDestination(16144U);
    msg.setDestinationEntity(168U);
    msg.vid = 41748U;
    msg.off_x = 0.821924041604;
    msg.off_y = 0.548719069171;
    msg.off_z = 0.729744280529;

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
    msg.setTimeStamp(0.229852700594);
    msg.setSource(8608U);
    msg.setSourceEntity(155U);
    msg.setDestination(59101U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.571651071532);
    msg.setSource(51491U);
    msg.setSourceEntity(16U);
    msg.setDestination(1501U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.677230148023);
    msg.setSource(60051U);
    msg.setSourceEntity(84U);
    msg.setDestination(22851U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.340058145581);
    msg.setSource(14973U);
    msg.setSourceEntity(243U);
    msg.setDestination(2994U);
    msg.setDestinationEntity(139U);
    msg.mid = 51785U;

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
    msg.setTimeStamp(0.671529498128);
    msg.setSource(52468U);
    msg.setSourceEntity(163U);
    msg.setDestination(23954U);
    msg.setDestinationEntity(251U);
    msg.mid = 41672U;

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
    msg.setTimeStamp(0.39304936066);
    msg.setSource(53491U);
    msg.setSourceEntity(15U);
    msg.setDestination(15803U);
    msg.setDestinationEntity(57U);
    msg.mid = 42645U;

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
    msg.setTimeStamp(0.878319611656);
    msg.setSource(58236U);
    msg.setSourceEntity(70U);
    msg.setDestination(40456U);
    msg.setDestinationEntity(114U);
    msg.state = 89U;
    msg.eta = 39986U;
    msg.info.assign("FUFSZNKADOBILWWXESLIVVEVFLLYEUOSPIHGFMQNIMBEGINBSOUQQPKPDVZVRENPHLKCVNLPCICQGWKNGSJRMQCCCXHMXVZMMCZMTDXCSTWEXITAJDLGZGBRZJVOTYOHUYEMAOSFVPKAOUCQXXJAMLPZYFFRHAHBUJYRHGAYVGJJFYPDZQQMAOSNYEDSUT");

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
    msg.setTimeStamp(0.530646075257);
    msg.setSource(35765U);
    msg.setSourceEntity(96U);
    msg.setDestination(27541U);
    msg.setDestinationEntity(245U);
    msg.state = 93U;
    msg.eta = 33308U;
    msg.info.assign("CDPUYXILZQDHTNKVLLNTBJCMHJLPCPIBJGUNFXFULMQKSRGKTGAUKDFSDNWFYGCKXKRRQIPAITPBAUTIBAUPCHXEZGZARDDME");

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
    msg.setTimeStamp(0.262963985138);
    msg.setSource(30936U);
    msg.setSourceEntity(113U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(95U);
    msg.state = 252U;
    msg.eta = 49432U;
    msg.info.assign("KULYXRDJSUPLDDRTNGSTCEGXSEUZQJOIUIZXOBOZNNJYYQCKVRZUKHMIGAOCRFSABTZRJYABCJGSAAJSKWOKHAUONGURGUZVKPGYCDVDJZMQLZHLNXHOTPYZNIVVOKMVNDALHIFERGWMQVECHBMXWMREEJFQIP");

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
    msg.setTimeStamp(0.929019299435);
    msg.setSource(36943U);
    msg.setSourceEntity(34U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(152U);
    msg.system = 15678U;
    msg.duration = 64387U;
    msg.speed = 0.786746901545;
    msg.speed_units = 176U;
    msg.x = 0.86141625348;
    msg.y = 0.890346474935;
    msg.z = 0.994525549561;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.396874476679);
    msg.setSource(61184U);
    msg.setSourceEntity(119U);
    msg.setDestination(8098U);
    msg.setDestinationEntity(25U);
    msg.system = 27072U;
    msg.duration = 2888U;
    msg.speed = 0.150050515859;
    msg.speed_units = 237U;
    msg.x = 0.709807782237;
    msg.y = 0.650572454663;
    msg.z = 0.212498476595;
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
    msg.setTimeStamp(0.356647685382);
    msg.setSource(29273U);
    msg.setSourceEntity(147U);
    msg.setDestination(39580U);
    msg.setDestinationEntity(104U);
    msg.system = 42060U;
    msg.duration = 6581U;
    msg.speed = 0.26320318225;
    msg.speed_units = 192U;
    msg.x = 0.264281623524;
    msg.y = 0.84137537354;
    msg.z = 0.595430946441;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.296498863957);
    msg.setSource(49279U);
    msg.setSourceEntity(21U);
    msg.setDestination(55814U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.88911871801;
    msg.lon = 0.151855417446;
    msg.speed = 0.972694663266;
    msg.speed_units = 146U;
    msg.duration = 30038U;
    msg.sys_a = 51582U;
    msg.sys_b = 42829U;
    msg.move_threshold = 0.767850075643;

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
    msg.setTimeStamp(0.0586001670314);
    msg.setSource(59312U);
    msg.setSourceEntity(82U);
    msg.setDestination(64803U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.00141404226296;
    msg.lon = 0.87863173474;
    msg.speed = 0.212586359827;
    msg.speed_units = 224U;
    msg.duration = 935U;
    msg.sys_a = 21198U;
    msg.sys_b = 28740U;
    msg.move_threshold = 0.659561277931;

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
    msg.setTimeStamp(0.544934447744);
    msg.setSource(472U);
    msg.setSourceEntity(111U);
    msg.setDestination(59557U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.233489443297;
    msg.lon = 0.305650561599;
    msg.speed = 0.00597146793805;
    msg.speed_units = 209U;
    msg.duration = 31232U;
    msg.sys_a = 45538U;
    msg.sys_b = 56228U;
    msg.move_threshold = 0.903123605856;

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
    msg.setTimeStamp(0.848251988618);
    msg.setSource(8325U);
    msg.setSourceEntity(135U);
    msg.setDestination(25482U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.519616563582;
    msg.lon = 0.190861632189;
    msg.z = 0.571172556891;
    msg.z_units = 6U;
    msg.speed = 0.673013156172;
    msg.speed_units = 130U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.466841480059;
    tmp_msg_0.lon = 0.473609359878;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FYKMXCVBXVVZOJWRPACELOUJICDBFVMQWYBJQIDFMZJHPOTLYKXS");

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
    msg.setTimeStamp(0.38604924976);
    msg.setSource(6777U);
    msg.setSourceEntity(110U);
    msg.setDestination(5098U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.194136967718;
    msg.lon = 0.281898253484;
    msg.z = 0.225514471465;
    msg.z_units = 228U;
    msg.speed = 0.584177887482;
    msg.speed_units = 215U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.612889772442;
    tmp_msg_0.lon = 0.100732925673;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XVHOJLPYICVQN");

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
    msg.setTimeStamp(0.0484579072297);
    msg.setSource(7184U);
    msg.setSourceEntity(78U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.703614315325;
    msg.lon = 0.77630906973;
    msg.z = 0.470179604793;
    msg.z_units = 161U;
    msg.speed = 0.82165582877;
    msg.speed_units = 160U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.215533687577;
    tmp_msg_0.lon = 0.897082136829;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CSNWEKCYFYERKTNAJDYSIKDATHPPRILPREUXCGUZFINANDHXIKXPBQVENCRVTDFIHXZKYHOCDBHGCDAQSLOAOAJSPLLNRLAJD");

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
    msg.setTimeStamp(0.474997837542);
    msg.setSource(61475U);
    msg.setSourceEntity(110U);
    msg.setDestination(58664U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.734923315075;
    msg.lon = 0.92228533794;

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
    msg.setTimeStamp(0.546162063613);
    msg.setSource(23082U);
    msg.setSourceEntity(178U);
    msg.setDestination(23099U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.51721332098;
    msg.lon = 0.435182377127;

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
    msg.setTimeStamp(0.493615419041);
    msg.setSource(52195U);
    msg.setSourceEntity(86U);
    msg.setDestination(48784U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.726621442643;
    msg.lon = 0.104818051003;

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
    msg.setTimeStamp(0.267501831196);
    msg.setSource(59540U);
    msg.setSourceEntity(152U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(82U);
    msg.timeout = 50770U;
    msg.lat = 0.772141396826;
    msg.lon = 0.324712751068;
    msg.z = 0.803715574804;
    msg.z_units = 146U;
    msg.pitch = 0.51727186815;
    msg.amplitude = 0.942356118618;
    msg.duration = 6160U;
    msg.speed = 0.671427674175;
    msg.speed_units = 158U;
    msg.radius = 0.705317529358;
    msg.direction = 121U;
    msg.custom.assign("NLFQYNSPRLXGMABANZPGTAORMRYIOZQZJTOJCMFBCSLRPTVHKJVRSNRSDELAMY");

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
    msg.setTimeStamp(0.409717082598);
    msg.setSource(18044U);
    msg.setSourceEntity(40U);
    msg.setDestination(34807U);
    msg.setDestinationEntity(113U);
    msg.timeout = 47813U;
    msg.lat = 0.338846983268;
    msg.lon = 0.0867709177113;
    msg.z = 0.134436512965;
    msg.z_units = 167U;
    msg.pitch = 0.116169317477;
    msg.amplitude = 0.676215168435;
    msg.duration = 49171U;
    msg.speed = 0.74473686589;
    msg.speed_units = 50U;
    msg.radius = 0.951632594047;
    msg.direction = 101U;
    msg.custom.assign("BMQPXYNBPXRBSNRGRPBMANBWRJFMIXZMKETTWVMJSGLLKUBKOYWQJFTBSRSFGMZVVAOUALOCKGTXJCAKNJCKOKDH");

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
    msg.setTimeStamp(0.218234502923);
    msg.setSource(50298U);
    msg.setSourceEntity(30U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(183U);
    msg.timeout = 44877U;
    msg.lat = 0.226609037521;
    msg.lon = 0.0363910204732;
    msg.z = 0.793539173895;
    msg.z_units = 137U;
    msg.pitch = 0.800731547629;
    msg.amplitude = 0.513233880719;
    msg.duration = 2904U;
    msg.speed = 0.110998696305;
    msg.speed_units = 17U;
    msg.radius = 0.336908469186;
    msg.direction = 98U;
    msg.custom.assign("OFVQUYLMVHIDYXJEJMYVFKTSMKEKWRQGUIXTCHRDDDPBXTPCREHZLXOBWGQTSPDTIIXTVSBTKSUYHYNRIWBWMTMPHNURECFALNBQWXVZSSMAJKXQONHJUXQJGLNJFLPSEBRONKECFLCPZQLKRGJDEYYBWMKZYAZXEJITGPISOBCWWMVIMZRDNPAAIAZCTFUOVCUVPCHDCQBYVOYIPJERGXQZMAWUJNFKKHQGHAZNGBSFHLG");

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
    msg.setTimeStamp(0.997702161087);
    msg.setSource(11482U);
    msg.setSourceEntity(77U);
    msg.setDestination(47807U);
    msg.setDestinationEntity(42U);
    msg.control_src = 52021U;
    msg.control_ent = 166U;
    msg.timeout = 0.0345789356363;
    msg.loiter_radius = 0.677180199294;
    msg.altitude_interval = 0.592776032469;

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
    msg.setTimeStamp(0.124103929371);
    msg.setSource(38111U);
    msg.setSourceEntity(43U);
    msg.setDestination(34328U);
    msg.setDestinationEntity(221U);
    msg.control_src = 32869U;
    msg.control_ent = 184U;
    msg.timeout = 0.486558428425;
    msg.loiter_radius = 0.904491776868;
    msg.altitude_interval = 0.618631308395;

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
    msg.setTimeStamp(0.0732402157407);
    msg.setSource(46128U);
    msg.setSourceEntity(184U);
    msg.setDestination(30058U);
    msg.setDestinationEntity(32U);
    msg.control_src = 19834U;
    msg.control_ent = 140U;
    msg.timeout = 0.712257247158;
    msg.loiter_radius = 0.196975529558;
    msg.altitude_interval = 0.22261259082;

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
    msg.setTimeStamp(0.260858367301);
    msg.setSource(60176U);
    msg.setSourceEntity(38U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(193U);
    msg.flags = 89U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.785653480372;
    tmp_msg_0.speed_units = 243U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.723627295219;
    tmp_msg_1.z_units = 209U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.926685037464;
    msg.lon = 0.689031717162;
    msg.radius = 0.440308015697;

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
    msg.setTimeStamp(0.415524934873);
    msg.setSource(50929U);
    msg.setSourceEntity(55U);
    msg.setDestination(11447U);
    msg.setDestinationEntity(23U);
    msg.flags = 83U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.485708536954;
    tmp_msg_0.speed_units = 193U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.416719955195;
    tmp_msg_1.z_units = 26U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.547679358201;
    msg.lon = 0.776698624792;
    msg.radius = 0.13238592255;

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
    msg.setTimeStamp(0.556554493984);
    msg.setSource(60267U);
    msg.setSourceEntity(94U);
    msg.setDestination(18237U);
    msg.setDestinationEntity(200U);
    msg.flags = 88U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.814482893867;
    tmp_msg_0.speed_units = 234U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0232758952522;
    tmp_msg_1.z_units = 153U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.986268125153;
    msg.lon = 0.551188508293;
    msg.radius = 0.282143588635;

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
    msg.setTimeStamp(0.631900408276);
    msg.setSource(3170U);
    msg.setSourceEntity(92U);
    msg.setDestination(10117U);
    msg.setDestinationEntity(26U);
    msg.control_src = 2247U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 210U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.97345781967;
    tmp_tmp_msg_0_0.speed_units = 216U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.00941171122617;
    tmp_tmp_msg_0_1.z_units = 82U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0862035469737;
    tmp_msg_0.lon = 0.789407460218;
    tmp_msg_0.radius = 0.44810458389;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
    msg.proximity = 151U;

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
    msg.setTimeStamp(0.754526436484);
    msg.setSource(39875U);
    msg.setSourceEntity(41U);
    msg.setDestination(52157U);
    msg.setDestinationEntity(200U);
    msg.control_src = 30269U;
    msg.control_ent = 12U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 147U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.592794877934;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.842417129254;
    tmp_tmp_msg_0_1.z_units = 125U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.916743473022;
    tmp_msg_0.lon = 0.845342397542;
    tmp_msg_0.radius = 0.714317319963;
    msg.reference.set(tmp_msg_0);
    msg.state = 110U;
    msg.proximity = 236U;

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
    msg.setTimeStamp(0.171904741395);
    msg.setSource(41842U);
    msg.setSourceEntity(227U);
    msg.setDestination(14410U);
    msg.setDestinationEntity(218U);
    msg.control_src = 27932U;
    msg.control_ent = 156U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 83U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0120873568306;
    tmp_tmp_msg_0_0.speed_units = 202U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.212666734213;
    tmp_tmp_msg_0_1.z_units = 136U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.33130427933;
    tmp_msg_0.lon = 0.71623773531;
    tmp_msg_0.radius = 0.892287239841;
    msg.reference.set(tmp_msg_0);
    msg.state = 146U;
    msg.proximity = 220U;

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
    IMC::Formation msg;
    msg.setTimeStamp(0.552445576513);
    msg.setSource(51265U);
    msg.setSourceEntity(38U);
    msg.setDestination(65454U);
    msg.setDestinationEntity(175U);
    msg.formation_name.assign("OBWKIXQLSUXGMSTYYFOKHYHGNVIJKAQBVBMJQDFZSFATBDDLXBOTTZIRKMULQ");
    msg.type = 93U;
    msg.op = 204U;
    msg.group_name.assign("ZQFWTJCIMDHXORELEVZOKAZZOPQPBYVKHDJFAWNTTYXHODCZYBZWIHGUZCPBSORUNYESISHSQTTSFZVURUQTW");
    msg.plan_id.assign("VJPVPEZQLBLLBJCISUXPPDZXTRNFEXHZRDQHDFMHFHAKPNTLFKKUWOJAYZSAMNEUHEJQYWJAYFUESJVGGCVMLGAGYKBGUHSEGKCJUDFMDZQMBOHRNIKTEAOWJFJZOVPXDTWBBDDOLSWUGV");
    msg.description.assign("GYJMXMDRZTANBARIEKJTXWFVAETERPZNFUISPETSFWC");
    msg.reference_frame = 106U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13467U;
    tmp_msg_0.off_x = 0.658485831128;
    tmp_msg_0.off_y = 0.466179883379;
    tmp_msg_0.off_z = 0.438864599044;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.0657538136836;
    msg.leader_speed_max = 0.432446888219;
    msg.leader_bank_lim = 0.827745875943;
    msg.pos_sim_err_lim = 0.425587674015;
    msg.pos_sim_err_wrn = 0.262464340019;
    msg.pos_sim_err_timeout = 26822U;
    msg.converg_max = 0.301283376492;
    msg.converg_timeout = 22567U;
    msg.comms_timeout = 18894U;
    msg.turb_lim = 0.317968399001;
    msg.custom.assign("PFHFTMUZKSXXHAFAYYHRGEDANZJDKSXTPDSHOKQGIXAWQHLTJTMKZEUTLIYJUWSWSNCBAVUCWPRXYUADYBGYRJOMZTOCPBUN");

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
    msg.setTimeStamp(0.333398222583);
    msg.setSource(19671U);
    msg.setSourceEntity(81U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(206U);
    msg.formation_name.assign("EUNZETUXUCXDWIWZRHZRMSYDJEIGXVFLGGNRNPJEDKOVUW");
    msg.type = 183U;
    msg.op = 52U;
    msg.group_name.assign("PYWDDRMBOQBEOGBRRYXJUIHYAXEDLISTKQRPRHFYPYDGRCHPKSBNMGUTJBHLVVSIOENGWXSJEJMTJWTUXAVQUKXAJOUISKBUGKNBKOLMLRVQNVPZKFZFFIMPNLWRVEXIPCHQSDMBELLFYXEINDWMCQZCGAWEJOTFCSIFGDJQUQET");
    msg.plan_id.assign("EVSQJTIKTBFMWUQDJECNTVKGQTHAWGVLWOECEDRBJBIUXLGLXXGAEKRJGAHRNHIPNPQOMUDWOGYTHMOXOOAPNREYYYCPXELUXKILBCXDILFDZWFXLTIBMTBQRCFUEIKJAMCECKGZHUBZNSTZVTTVRVQPNLAIODJKAPZFYCKBBJNGRWDSMSSNFUQARFROXFZHLPCV");
    msg.description.assign("ZSTRZWVXZHKEGGYXINLQCHYCDIYTNTCREJKQWEXVWMNAZQAJHZXPTTLUTUUGOPFSQYZLAFULBLYAOPBKRVWDFIASMJAJZYGUITGYRDYBCNFLFCWQHQGERNHVNDWAJKDCCNNMBBMIRYKJROGFEEVKWVBVEKGBLTILOLTNVJFOXZMYUFHZOEPCMGSMZMBCXHRSADOPFBCUPXKSVWLAKFMRIRVOH");
    msg.reference_frame = 5U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34032U;
    tmp_msg_0.off_x = 0.153016701295;
    tmp_msg_0.off_y = 0.089161713353;
    tmp_msg_0.off_z = 0.450890073907;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.00129235246441;
    msg.leader_speed_max = 0.809960397685;
    msg.leader_bank_lim = 0.825183667444;
    msg.pos_sim_err_lim = 0.328610294315;
    msg.pos_sim_err_wrn = 0.0139735916664;
    msg.pos_sim_err_timeout = 48979U;
    msg.converg_max = 0.584969052444;
    msg.converg_timeout = 1291U;
    msg.comms_timeout = 54359U;
    msg.turb_lim = 0.874070257219;
    msg.custom.assign("NAGRHUAFTMGZVWDZDQFVTOPXNKD");

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
    msg.setTimeStamp(0.260606141869);
    msg.setSource(51189U);
    msg.setSourceEntity(252U);
    msg.setDestination(48579U);
    msg.setDestinationEntity(103U);
    msg.formation_name.assign("LGCCFHNXFCBFVDWCLAKBURLVBJEZPMOTTENHPDHYVYGMMHOJMFXXXYGPJRVGLBCXOITCOGSWHXRQXCSUNTMKEJITPZOIGSJUBWNHODSQSCPZBRPFMIHMFUIVJMKDZDALUJWYHLDOEHAESWWPC");
    msg.type = 192U;
    msg.op = 47U;
    msg.group_name.assign("MJEUKYIGJKUIAGFBSOKCKGOQNZBFHOQLMWGLOBZZKHCTWJMTLYJIVJUPAFSYJORYJHFXLLANXRVALNWRTCLWTHVQHXXPAISGPNOSWDDVIUBVQRFWESHVDDYMKKURPDIMIGEUUOBAVKJYRGKJDCHQFSHYDOCZXPLFUZCDWZQPMXCZKNIBXFOLPEQEVTRMARVXCQRWTFA");
    msg.plan_id.assign("WVFZILLKONICCTKOFGPGQWTZNYPEGNDDTECUXULHYWRCQSMLIWAYTZPCVPHOBWHBWYTVAOUIAIGNHDGVSLZUQEUXRRBKIXHQZQTNSJRQRGZLVDEAYPORVFJXEBFYQYFPSBESAYHHHRMTFQ");
    msg.description.assign("YBRWPSGKASXMDHCERTYDEEEWWMNXLPADGUCKJUQQXLZEVAHBET");
    msg.reference_frame = 73U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64448U;
    tmp_msg_0.off_x = 0.443964928854;
    tmp_msg_0.off_y = 0.193700472088;
    tmp_msg_0.off_z = 0.0134886552799;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.439824942923;
    msg.leader_speed_max = 0.157984477891;
    msg.leader_bank_lim = 0.354765103572;
    msg.pos_sim_err_lim = 0.633128533602;
    msg.pos_sim_err_wrn = 0.8884936174;
    msg.pos_sim_err_timeout = 64948U;
    msg.converg_max = 0.262133275624;
    msg.converg_timeout = 56670U;
    msg.comms_timeout = 14947U;
    msg.turb_lim = 0.946755687687;
    msg.custom.assign("XLQHSDQGEVFEKDPOUMWXWMULKRFWIWBPYBWEKJZJRSLSZTLKJMTBGACCCOZURVAIEYOEJMKBOPFAAQDIFZXMCRRATFAFXQWDLMGIKIMXQWHZVXWACYSWLBHSKYJDASYGER");

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
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.955577628137);
    msg.setSource(63888U);
    msg.setSourceEntity(188U);
    msg.setDestination(19341U);
    msg.setDestinationEntity(6U);
    msg.dist_min = 0.859117228272;
    msg.ax_cmd = 0.324947077829;
    msg.ay_cmd = 0.833541573664;
    msg.az_cmd = 0.92447541862;
    msg.ax_des = 0.828553112005;
    msg.ay_des = 0.505934548565;
    msg.az_des = 0.151242405559;
    msg.virt_err_x = 0.956233373547;
    msg.virt_err_y = 0.234994276038;
    msg.virt_err_z = 0.524775402215;
    msg.surf_fdbk_x = 0.102875798948;
    msg.surf_fdbk_y = 0.611572441512;
    msg.surf_fdbk_z = 0.259697733339;
    msg.surf_unkn_x = 0.775477402147;
    msg.surf_unkn_y = 0.820065259031;
    msg.surf_unkn_z = 0.978456100311;
    msg.ss_x = 0.316574689615;
    msg.ss_y = 0.645959071355;
    msg.ss_z = 0.378801389106;

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
    msg.setTimeStamp(0.546266635839);
    msg.setSource(32814U);
    msg.setSourceEntity(171U);
    msg.setDestination(50033U);
    msg.setDestinationEntity(133U);
    msg.dist_min = 0.665325815446;
    msg.ax_cmd = 0.544201807896;
    msg.ay_cmd = 0.11117823747;
    msg.az_cmd = 0.475585858986;
    msg.ax_des = 0.882681511649;
    msg.ay_des = 0.447483580652;
    msg.az_des = 0.722657420616;
    msg.virt_err_x = 0.50997578856;
    msg.virt_err_y = 0.604518797562;
    msg.virt_err_z = 0.426623758688;
    msg.surf_fdbk_x = 0.60895495303;
    msg.surf_fdbk_y = 0.500849945194;
    msg.surf_fdbk_z = 0.0991491381798;
    msg.surf_unkn_x = 0.06474935099;
    msg.surf_unkn_y = 0.0505340201082;
    msg.surf_unkn_z = 0.00649939441703;
    msg.ss_x = 0.927967210247;
    msg.ss_y = 0.403985026659;
    msg.ss_z = 0.38169135552;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BOLTNCZRYTCORFZYCGIOMSRNIFKTCLMHDRJPIKXMEVYKCHUDHQKRSGVWTQKFXDWLENJZHLKLOGUKYLNFJCJDRHXEEU");
    tmp_msg_0.dist = 0.395185849842;
    tmp_msg_0.err = 0.248189788808;
    tmp_msg_0.ctrl_imp = 0.0204005219028;
    tmp_msg_0.rel_dir_x = 0.542520853374;
    tmp_msg_0.rel_dir_y = 0.606608794875;
    tmp_msg_0.rel_dir_z = 0.557928852645;
    tmp_msg_0.err_x = 0.384000783961;
    tmp_msg_0.err_y = 0.00822792801172;
    tmp_msg_0.err_z = 0.271449895017;
    tmp_msg_0.rf_err_x = 0.287905031192;
    tmp_msg_0.rf_err_y = 0.518725339153;
    tmp_msg_0.rf_err_z = 0.398833086222;
    tmp_msg_0.rf_err_vx = 0.523678176522;
    tmp_msg_0.rf_err_vy = 0.734831273709;
    tmp_msg_0.rf_err_vz = 0.353752909645;
    tmp_msg_0.ss_x = 0.732366021457;
    tmp_msg_0.ss_y = 0.0857254088552;
    tmp_msg_0.ss_z = 0.742758500049;
    tmp_msg_0.virt_err_x = 0.930897854811;
    tmp_msg_0.virt_err_y = 0.69415443612;
    tmp_msg_0.virt_err_z = 0.865526930481;
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
    msg.setTimeStamp(0.88018782349);
    msg.setSource(26256U);
    msg.setSourceEntity(83U);
    msg.setDestination(65102U);
    msg.setDestinationEntity(193U);
    msg.dist_min = 0.664163365619;
    msg.ax_cmd = 0.597454532126;
    msg.ay_cmd = 0.63305975656;
    msg.az_cmd = 0.42774205291;
    msg.ax_des = 0.935736996345;
    msg.ay_des = 0.422033600262;
    msg.az_des = 0.817868187923;
    msg.virt_err_x = 0.274956518226;
    msg.virt_err_y = 0.632226775756;
    msg.virt_err_z = 0.870702851;
    msg.surf_fdbk_x = 0.355172986596;
    msg.surf_fdbk_y = 0.920366598693;
    msg.surf_fdbk_z = 0.736401333437;
    msg.surf_unkn_x = 0.766297323962;
    msg.surf_unkn_y = 0.360932699756;
    msg.surf_unkn_z = 0.234610476425;
    msg.ss_x = 0.00455006015784;
    msg.ss_y = 0.2184883137;
    msg.ss_z = 0.6092500804;

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
    msg.setTimeStamp(0.290168980671);
    msg.setSource(50536U);
    msg.setSourceEntity(137U);
    msg.setDestination(56647U);
    msg.setDestinationEntity(98U);
    msg.s_id.assign("PKTCBIZEJYGBYQHMVXLPCDTCVOIGCHFKBJWCBKRWTR");
    msg.dist = 0.037162898751;
    msg.err = 0.47322354067;
    msg.ctrl_imp = 0.864641289518;
    msg.rel_dir_x = 0.847955790353;
    msg.rel_dir_y = 0.353829192164;
    msg.rel_dir_z = 0.861512813938;
    msg.err_x = 0.665538332065;
    msg.err_y = 0.0821875911209;
    msg.err_z = 0.811290613398;
    msg.rf_err_x = 0.818064195121;
    msg.rf_err_y = 0.290707962505;
    msg.rf_err_z = 0.827703737572;
    msg.rf_err_vx = 0.944824396479;
    msg.rf_err_vy = 0.720277070492;
    msg.rf_err_vz = 0.467457334469;
    msg.ss_x = 0.2196123407;
    msg.ss_y = 0.587057859882;
    msg.ss_z = 0.55955206211;
    msg.virt_err_x = 0.277538816433;
    msg.virt_err_y = 0.609196672233;
    msg.virt_err_z = 0.194573327844;

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
    msg.setTimeStamp(0.388975978262);
    msg.setSource(17995U);
    msg.setSourceEntity(25U);
    msg.setDestination(40549U);
    msg.setDestinationEntity(166U);
    msg.s_id.assign("GQHGIVSSVMIAAOYTKNCOUXPONAPUCWDGAYWEBTVEDDIPORFCMGRXXPLDXKFMWROCJRCGWQGXFVHBOFRSNEWINSTBOPXSHBFOWABXHUTLRNIKABYPHKUVJZPPGDZYCZCGBBSZQQRWQIENBKJZQEEYTFADUFQSZKTFLBXVVMLQEXUDZHJHLOLPYIXRYUQWENNVVWDMJSRJJFAMLUPCH");
    msg.dist = 0.334620949965;
    msg.err = 0.697486658173;
    msg.ctrl_imp = 0.750525977359;
    msg.rel_dir_x = 0.92662303569;
    msg.rel_dir_y = 0.0567758770946;
    msg.rel_dir_z = 0.500217421092;
    msg.err_x = 0.643520820225;
    msg.err_y = 0.032748434266;
    msg.err_z = 0.762021962746;
    msg.rf_err_x = 0.191931466412;
    msg.rf_err_y = 0.940827873571;
    msg.rf_err_z = 0.531238961672;
    msg.rf_err_vx = 0.853526978416;
    msg.rf_err_vy = 0.437779752119;
    msg.rf_err_vz = 0.181057763725;
    msg.ss_x = 0.252968425695;
    msg.ss_y = 0.204003786672;
    msg.ss_z = 0.510575576116;
    msg.virt_err_x = 0.00346419003485;
    msg.virt_err_y = 0.00392860210841;
    msg.virt_err_z = 0.48848913392;

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
    msg.setTimeStamp(0.966661423766);
    msg.setSource(59277U);
    msg.setSourceEntity(238U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(221U);
    msg.s_id.assign("RKETQATHPNRQKMYOEQVDBHOVLNZVBCPVFGIWHTTKOTMSLFTVYLTUTJLCDMTARFPMPEUA");
    msg.dist = 0.266978344737;
    msg.err = 0.951585553905;
    msg.ctrl_imp = 0.876936303861;
    msg.rel_dir_x = 0.237748386793;
    msg.rel_dir_y = 0.609841325705;
    msg.rel_dir_z = 0.412551614228;
    msg.err_x = 0.348259330138;
    msg.err_y = 0.39703182088;
    msg.err_z = 0.458501735573;
    msg.rf_err_x = 0.0166004560767;
    msg.rf_err_y = 0.851819223581;
    msg.rf_err_z = 0.44896195527;
    msg.rf_err_vx = 0.759781003277;
    msg.rf_err_vy = 0.638752718279;
    msg.rf_err_vz = 0.693752604433;
    msg.ss_x = 0.285445066633;
    msg.ss_y = 0.0146511119478;
    msg.ss_z = 0.360360364815;
    msg.virt_err_x = 0.331562666525;
    msg.virt_err_y = 0.689918831208;
    msg.virt_err_z = 0.382183162443;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.212075042115);
    msg.setSource(63129U);
    msg.setSourceEntity(7U);
    msg.setDestination(9707U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 208U;
    msg.error_count = 188U;
    msg.error_ents.assign("XKGZFTUCYNACSSMWCZTPZWDOBQFGEPVXXWCKLJBXFTMIWSSHTWJCCMAKHEJUAGMWSSPOIGOYIDJBNFKNZLMNGAUAFZUZNTTEPKBHLFIVPAFJNOFDDORVVLJETBHAMXHSVAYIRSVMXRCPZGZLRUPCSTZGWQOXVLNGJRKOYRXKUEESHBIWHKY");
    msg.maneuver_type = 12959U;
    msg.maneuver_stime = 0.570257042139;
    msg.maneuver_eta = 46836U;
    msg.control_loops = 1153897398U;
    msg.flags = 95U;
    msg.last_error.assign("AXYVYWTEIVVOCJWLUPAS");
    msg.last_error_time = 0.886246223036;

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
    msg.setTimeStamp(0.381514538918);
    msg.setSource(10825U);
    msg.setSourceEntity(140U);
    msg.setDestination(28873U);
    msg.setDestinationEntity(209U);
    msg.op_mode = 15U;
    msg.error_count = 225U;
    msg.error_ents.assign("GBRORLSCMOMTYUJKIYWKFBHXSOJTXCYKWUESBPVTNQVGIOVPCQMMOOXYDLZPINLUDYLZYMNBHGKNARSHIEIEHSRZJURFBGDPWKOSNURPVQAJDGMIQKWCIULAYFQWWLWAPTXFVRAXKGCUPCCRAFSOPBYPNGZTIQMZGFHNXSQHQBJYKESEFROAAPVITDGZVCBUYGJJNT");
    msg.maneuver_type = 45303U;
    msg.maneuver_stime = 0.126487217297;
    msg.maneuver_eta = 46969U;
    msg.control_loops = 4134401955U;
    msg.flags = 194U;
    msg.last_error.assign("PBBQLQBMDTYIARIXQBDCYDAXXYQCMMAUTQGNIJHJEEBISBDPTVZNBWLHLUJLFUNDQPYVHHGGWEDNQZNTROUZCOQAVOFNWFPEMDADRGPCGXVMKSSWVMSWKACSKPMOGKUHJZUVEORUCLOYKKWWOIBNOLUAJKLJPRNPCGSFVHVFFKAEZRFMQXHSHWFOWYXSALAXFRTTUJZXGXTNVVTLEZQHNRMEMUWBFTOZRJCXI");
    msg.last_error_time = 0.186287703346;

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
    msg.setTimeStamp(0.235527661403);
    msg.setSource(11771U);
    msg.setSourceEntity(242U);
    msg.setDestination(18234U);
    msg.setDestinationEntity(142U);
    msg.op_mode = 159U;
    msg.error_count = 96U;
    msg.error_ents.assign("LJURJUKFRUILUVSTHUZKVALJMUYJHQDIWDIMMULAQSZFSSYLWWVTMDTKXGPKCJYXHQYGFKVLTNEIZFRALUHTJDHMWYTPVBCIABCBRUZKICMAEQFOPOEXRKIFSNLPOOMYOCDVFTONEEXYEWRTGPZKQDDSNCRIQPPCQZLNXRNYNGXDGBBIMAYNZGOVKBQCAISVHFPEWRDGZBNDXHXWHS");
    msg.maneuver_type = 60807U;
    msg.maneuver_stime = 0.430386818621;
    msg.maneuver_eta = 43352U;
    msg.control_loops = 3901760769U;
    msg.flags = 139U;
    msg.last_error.assign("BYMWVSHFOMKDSBXTLJ");
    msg.last_error_time = 0.553743145965;

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
    msg.setTimeStamp(0.0219887372999);
    msg.setSource(17954U);
    msg.setSourceEntity(74U);
    msg.setDestination(34110U);
    msg.setDestinationEntity(177U);
    msg.type = 135U;
    msg.request_id = 34284U;
    msg.command = 37U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("IPOFTTAATGZVUESATOXYPHFHRZNVUCWLWGCJLIHGDDHQADLGPBZKABCT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45433U;
    msg.info.assign("CHNFDDJGAXTSXKQPEUEKXLAREKWVNQBRUTYSLGUOCOBIXQTJUJVJQOGLRYJIMJKSBBUWBBIVRIEFNZHSOBCXNZLZKDKQDRBWBIWIVNHJJIPCHDFYGFLCHPLWQZETYWRYMFDAHUUMIFQKDLSGPAHXZTCHVXWVCZEMNCASANGRYETOITDPUAOFQTEFNVVWPKXKAGMNAWOMKGMZZ");

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
    msg.setTimeStamp(0.868893974494);
    msg.setSource(2038U);
    msg.setSourceEntity(229U);
    msg.setDestination(26550U);
    msg.setDestinationEntity(181U);
    msg.type = 190U;
    msg.request_id = 58844U;
    msg.command = 78U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 34367U;
    tmp_msg_0.custom.assign("GQFIFXMDCGXWVIDSYRCJPNBAPIOTIEHWCETZERZPWHBSSHYNABVWLKDMVNGKQVLHUBDQCCEPAEKXSQOTIRJINJEAIQBUALSOXEKDVZWOUYBRTQCMHNMYKGZOGPANTHWOKUSOGJQKXIJLLJMCHGIUSXFXYIFYTJCAQGUYDFUWLZOVMLOZRRFJMYJDKYCDHOTBENBMUNMNRY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27149U;
    msg.info.assign("BIKYYLBOGTYEJEDFILUEMLKDFFRTDRRKWPXAWUVIDPLJIV");

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
    msg.setTimeStamp(0.748414659452);
    msg.setSource(11938U);
    msg.setSourceEntity(253U);
    msg.setDestination(29916U);
    msg.setDestinationEntity(21U);
    msg.type = 76U;
    msg.request_id = 1495U;
    msg.command = 47U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QOQDSEWFGUDGGZJUXEWBBRLQEZUBHGQWKAMZHSLRVVDLIXDMUYYVOXNHHQAAQPSLOFXPYCKTPKVUPDFNCNCRDPGLPKMOSLARSXZYNNVVQKHGZRKBWALTHDHJVJRFIDSUMYPAAZBSMEPJTFUYXEJCBLXHORIOAUWWTJMPAJWSFCFNDTCGBMFTHLIKGTEPKBUIQZNYETMESNLYYWCIGHFNTOVQVOJEXEMCRWXUIXBODJVKWZOKQGJZMTIAR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23544U;
    msg.info.assign("PJBEYMCVPUBTHVGNCQAYODILIEFVKXPTGIAQDQXFTEZOWFDVUFEYJYNALKFCRUKPCVAAXPZSSSHMRGQXSATLOYDRHIXDNJVFWBPOKOMBKZLLUMPGKKNJDYAYELNNGTEHXRLDTJGFGXWUIQLIUTMKYOZMBLLDSQKMOFSUHCKZNIAMRWQDMNRBYURMBTQWHOCCETFJJTWGVHUHXIQZHQW");

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
    msg.setTimeStamp(0.457426929481);
    msg.setSource(7414U);
    msg.setSourceEntity(5U);
    msg.setDestination(16959U);
    msg.setDestinationEntity(43U);
    msg.command = 114U;
    msg.entities.assign("KIJMVYYTKEUUSUFJGGDBXCWGJKLRSXUNJCMDXBCPBE");

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
    msg.setTimeStamp(0.492555550278);
    msg.setSource(29602U);
    msg.setSourceEntity(87U);
    msg.setDestination(45602U);
    msg.setDestinationEntity(25U);
    msg.command = 235U;
    msg.entities.assign("NAVMDDMEWSBXDXIAGPULAEUYNOASKLGYZZXSFSTSBPIEGEHDZOLQAKQUAFCUHAOEDBNYHRHZRIXTUXVWUKMPQBFEIIHVKJRIDCLGCNBCORDRFNENHXBJZNXNQOEKTRFLMKVPVUMKSJJIHVWOPTTXJIJQTSCLYYWLKPBPLVNHMOPJCTGFXYZEKVCFALZAJYSBG");

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
    msg.setTimeStamp(0.276509483768);
    msg.setSource(46573U);
    msg.setSourceEntity(135U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(246U);
    msg.command = 84U;
    msg.entities.assign("OPAUPCJDNWDXOZKFLUSMNQWBSSXPEAQDSNORDGFGVHMLCUSMABKMJUVBCTJOENHLXEYWYWTVHIJHKXNLRTYSTRGAZZWBMIVSFTUXLWJHCDLYEBTZZAIAZERGWQNPJODQGRZMTDFKPMOXAFXYVWHJAGAJFEOKQTDZWMKXRIBUUNYBJFRIVQGGUNOFGX");

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
    msg.setTimeStamp(0.363336394159);
    msg.setSource(18492U);
    msg.setSourceEntity(129U);
    msg.setDestination(30300U);
    msg.setDestinationEntity(120U);
    msg.mcount = 143U;
    msg.mnames.assign("RVXXKVCERCHDBASULGPOMFDFBXDXUINYVLGRFGCVQEPWULTULPDBKTWOZBQIKSJYAAOIVETWQPUIJZNYUNPGNYRFUXYSHSRJNOLWCEVQMX");
    msg.ecount = 210U;
    msg.enames.assign("ZZUJBJDPCBAKDPBBXZYNSSDKBNCVFLOHJQWSKVEEAWBOQLRXXHDMPJMMDFNTKJBAANVNCHGCSOKNDSFMHVTXOJAQZXAUMCBYFLGHOASBOHUZFEKUYESNJFJIITPUMPVLGIJC");
    msg.ccount = 176U;
    msg.cnames.assign("HCKBOLPPZCINEWRRIGPDJGDUIJFZELNVXKDGNKTOOXZRRQYVOMNAVNDCNDHJKLHSCUAMBKGJSJIGFZMPRJSYOTYBBWRMJELWWKDSTQMBRPZQW");
    msg.last_error.assign("GIHZPEQSWWZVPXBRTGZALNJHFPUWVSRLUDJHYCSUBFLDUWNKHLEMEOMOMGRPPJIDWYGQDSJFAIYUIZHPMIMNKHOTNHFWBMOVTBQLGIEDXOTRBGYYPQSSKHBQXXNEALXHLWSOMAKJFIDHOKYPRKJRZQFIVATSQSKVNXZABBCEKDCAGICSYT");
    msg.last_error_time = 0.645087524483;

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
    msg.setTimeStamp(0.716534333907);
    msg.setSource(9811U);
    msg.setSourceEntity(234U);
    msg.setDestination(21698U);
    msg.setDestinationEntity(233U);
    msg.mcount = 43U;
    msg.mnames.assign("WERMFVFMHZTKUWAVQRNFULCGLAPDEOHC");
    msg.ecount = 228U;
    msg.enames.assign("FWAVCQTYUDRMGWSDVQADMBYJTSYSWKTBJSEZNEAOJVVPIPKGOKXAHZCQHPYFCXJVNWRBSUUYFTRCYJFBIUYEIKJVFQTBVWDNDKAFT");
    msg.ccount = 5U;
    msg.cnames.assign("ISAVOTZTRPGWVGWQBRJPVHOHUVSIOORUQWNNBSDZWTTTCOYQCWMQMQJMPGUGDYAJLLXHEKQIEXYFYWUZYRFIDLBOEAKNJGKIPHDPNTJFFRVEFCVEDFBNSFRQPWXSBAZUNCJXDFLHBCZLEYYMFIKYCVLAAGCXIQZDQBONXKLZJPSDJEUCQABXPHNMHMEATBKXMCEZMKOWAKEXOYPILLBIUFGLZZCSMRTJMHRVKHTSNYPUSGTDUVGX");
    msg.last_error.assign("AFVJAXEGLOTDEMNOBXLDEYACWPICDXRBROWLAGGKAYQQNHWEXRTYFAZXPTLDSIUPCBAASNSHXFKYUHFBVSVVZRPJGBOWNBPKISXGQUKNMUZWGHGJNOKYYJDSTSTSDJELWKMXTUZALOYXWOPZUKTTDSQBVFZMJIDMMMIQKNRCGU");
    msg.last_error_time = 0.825891484014;

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
    msg.setTimeStamp(0.551107668632);
    msg.setSource(40173U);
    msg.setSourceEntity(82U);
    msg.setDestination(60631U);
    msg.setDestinationEntity(142U);
    msg.mcount = 103U;
    msg.mnames.assign("KCNMUOBJLRNIEADKFDBYICKCWYTHKJFSBXSXJQHUADMCVDLTSBHYIUIJIZSFOPDVHCIZMZOCWTUAMRWIOQZLVNNEQLW");
    msg.ecount = 37U;
    msg.enames.assign("MKSNGUESSXMQSNHAUIHXEWKSKENVRANIEPB");
    msg.ccount = 198U;
    msg.cnames.assign("BYQSTJUAPHMKJGTJLUPLBNMFOMMIMSAXJABKALKIXZDISDRGZDWLFVNQBXTGFNZBWCTBBDRXVGURKYEIVEEZQZBXEYAECEY");
    msg.last_error.assign("QINPAMRUBAZBUREOFTWWQDWZXADSOAAGHDAZVCCHHQDXWGKTEUJUXPCQKIGSTEKFEWYAYKLFKYYWJZGLQBTNKNPMTNXDIAOBPMCWEEIXSMEDGNCUXSGFUCZLLNOMRZCZNIZJTOBRIMVRYFJDOEJLZAROUDYJMBJQCNLNLOYPGIKGKFIVHYWBUQEFSPDFQLTZRWNDKVKHYFQVRXVLSXXGXTSMVVMAFHSVVUQG");
    msg.last_error_time = 0.294211475486;

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
    msg.setTimeStamp(0.321583530564);
    msg.setSource(23892U);
    msg.setSourceEntity(94U);
    msg.setDestination(22964U);
    msg.setDestinationEntity(128U);
    msg.mask = 21U;
    msg.max_depth = 0.978788305497;
    msg.min_altitude = 0.908077584342;
    msg.max_altitude = 0.82669540269;
    msg.min_speed = 0.768176058268;
    msg.max_speed = 0.187433223039;
    msg.max_vrate = 0.0282352860179;
    msg.lat = 0.275335291187;
    msg.lon = 0.398182259561;
    msg.orientation = 0.0935656640027;
    msg.width = 0.845096423564;
    msg.length = 0.976710830768;

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
    msg.setTimeStamp(0.560263795952);
    msg.setSource(20549U);
    msg.setSourceEntity(128U);
    msg.setDestination(38098U);
    msg.setDestinationEntity(238U);
    msg.mask = 19U;
    msg.max_depth = 0.0898843646154;
    msg.min_altitude = 0.179270916794;
    msg.max_altitude = 0.601786979199;
    msg.min_speed = 0.328445164197;
    msg.max_speed = 0.751147210849;
    msg.max_vrate = 0.702280726419;
    msg.lat = 0.771547531311;
    msg.lon = 0.741889415128;
    msg.orientation = 0.403303977375;
    msg.width = 0.942095448811;
    msg.length = 0.0753659286768;

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
    msg.setTimeStamp(0.302322757481);
    msg.setSource(6586U);
    msg.setSourceEntity(192U);
    msg.setDestination(9872U);
    msg.setDestinationEntity(165U);
    msg.mask = 129U;
    msg.max_depth = 0.796176781707;
    msg.min_altitude = 0.230427061086;
    msg.max_altitude = 0.855158888231;
    msg.min_speed = 0.350862864349;
    msg.max_speed = 0.930382749556;
    msg.max_vrate = 0.867925068399;
    msg.lat = 0.104454252062;
    msg.lon = 0.981896012115;
    msg.orientation = 0.0211485997235;
    msg.width = 0.583384786766;
    msg.length = 0.3625910127;

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
    msg.setTimeStamp(0.0850534099146);
    msg.setSource(13317U);
    msg.setSourceEntity(130U);
    msg.setDestination(61945U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.171790441697);
    msg.setSource(14724U);
    msg.setSourceEntity(35U);
    msg.setDestination(21520U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.238330967509);
    msg.setSource(18534U);
    msg.setSourceEntity(150U);
    msg.setDestination(1443U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.332278193428);
    msg.setSource(36194U);
    msg.setSourceEntity(112U);
    msg.setDestination(27256U);
    msg.setDestinationEntity(153U);
    msg.duration = 20727U;

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
    msg.setTimeStamp(0.0795505299606);
    msg.setSource(58506U);
    msg.setSourceEntity(185U);
    msg.setDestination(38748U);
    msg.setDestinationEntity(94U);
    msg.duration = 38523U;

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
    msg.setTimeStamp(0.192857315196);
    msg.setSource(52267U);
    msg.setSourceEntity(145U);
    msg.setDestination(41966U);
    msg.setDestinationEntity(170U);
    msg.duration = 29939U;

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
    msg.setTimeStamp(0.316934622802);
    msg.setSource(25674U);
    msg.setSourceEntity(209U);
    msg.setDestination(61782U);
    msg.setDestinationEntity(204U);
    msg.enable = 159U;
    msg.mask = 1758427984U;
    msg.scope_ref = 2268619486U;

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
    msg.setTimeStamp(0.730267676221);
    msg.setSource(53992U);
    msg.setSourceEntity(38U);
    msg.setDestination(49466U);
    msg.setDestinationEntity(254U);
    msg.enable = 57U;
    msg.mask = 2382548003U;
    msg.scope_ref = 1321352628U;

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
    msg.setTimeStamp(0.907815443892);
    msg.setSource(1941U);
    msg.setSourceEntity(110U);
    msg.setDestination(43114U);
    msg.setDestinationEntity(46U);
    msg.enable = 115U;
    msg.mask = 3160464173U;
    msg.scope_ref = 2608691058U;

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
    msg.setTimeStamp(0.231834373527);
    msg.setSource(27935U);
    msg.setSourceEntity(15U);
    msg.setDestination(3342U);
    msg.setDestinationEntity(134U);
    msg.medium = 222U;

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
    msg.setTimeStamp(0.991990858908);
    msg.setSource(11185U);
    msg.setSourceEntity(9U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(32U);
    msg.medium = 76U;

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
    msg.setTimeStamp(0.120077463631);
    msg.setSource(17032U);
    msg.setSourceEntity(116U);
    msg.setDestination(35715U);
    msg.setDestinationEntity(66U);
    msg.medium = 109U;

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
    msg.setTimeStamp(0.156210989847);
    msg.setSource(36154U);
    msg.setSourceEntity(248U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(209U);
    msg.value = 0.317262377784;
    msg.type = 103U;

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
    msg.setTimeStamp(0.255249792877);
    msg.setSource(43054U);
    msg.setSourceEntity(186U);
    msg.setDestination(21615U);
    msg.setDestinationEntity(68U);
    msg.value = 0.288809004468;
    msg.type = 252U;

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
    msg.setTimeStamp(0.0308532033241);
    msg.setSource(33150U);
    msg.setSourceEntity(119U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(151U);
    msg.value = 0.620641839896;
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
    IMC::FormationState msg;
    msg.setTimeStamp(0.864840106652);
    msg.setSource(33862U);
    msg.setSourceEntity(245U);
    msg.setDestination(2371U);
    msg.setDestinationEntity(137U);
    msg.possimerr = 0.881903905943;
    msg.converg = 0.504187359156;
    msg.turbulence = 0.732143078328;
    msg.possimmon = 27U;
    msg.commmon = 227U;
    msg.convergmon = 17U;

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
    msg.setTimeStamp(0.526580699982);
    msg.setSource(22600U);
    msg.setSourceEntity(31U);
    msg.setDestination(51381U);
    msg.setDestinationEntity(76U);
    msg.possimerr = 0.075731428158;
    msg.converg = 0.176208405271;
    msg.turbulence = 0.553218843582;
    msg.possimmon = 163U;
    msg.commmon = 72U;
    msg.convergmon = 65U;

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
    msg.setTimeStamp(0.732187888219);
    msg.setSource(48128U);
    msg.setSourceEntity(3U);
    msg.setDestination(21675U);
    msg.setDestinationEntity(213U);
    msg.possimerr = 0.11055229646;
    msg.converg = 0.679359160241;
    msg.turbulence = 0.691173906944;
    msg.possimmon = 66U;
    msg.commmon = 180U;
    msg.convergmon = 195U;

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
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.715449241004);
    msg.setSource(3737U);
    msg.setSourceEntity(99U);
    msg.setDestination(60029U);
    msg.setDestinationEntity(245U);
    msg.autonomy = 81U;
    msg.mode.assign("GFTYNZPCIGDBGDCNUYJGDDDJOIHLCBWXFVPWOVYQNLVATZYRZKDUEMSTRZHFOTZOLQAJCBITWKHRWHLJNGEECXPHFKSVALZXWSEMQSPCKQDPVESOEANXKFLSMWQMTUOJNUVHOLMEZJFNORWKSSZRNPQVEIMYGRPXXYJHWPBXYCDMAVLCIMBEDIIYLHBZIQZLIOYKNXMFHO");

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
    msg.setTimeStamp(0.716341322615);
    msg.setSource(9441U);
    msg.setSourceEntity(229U);
    msg.setDestination(9688U);
    msg.setDestinationEntity(157U);
    msg.autonomy = 114U;
    msg.mode.assign("HLFNGTSVIXSBDWYSFYUUCVHJDRXITELYJWYIDKUHWGOHGFDIXQNGPTPGOPAHNEDOUUJFZQCKCWMEEYVHTZSILBBAJXEBFVJAWVEMNSLNMTDQFFPAQJACWIKUPASWOOSPUROBLOLZKAXZGIVVSHXMOCDZKHKYSIGIQXEPUMWUNTTRLQRJCBDMZMFRRZPPBTJRNRYGHOMGMQESKNHKKCBQLLRRYNKYQAJTV");

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
    msg.setTimeStamp(0.948109570891);
    msg.setSource(58428U);
    msg.setSourceEntity(50U);
    msg.setDestination(61455U);
    msg.setDestinationEntity(116U);
    msg.autonomy = 218U;
    msg.mode.assign("MQPCDUFRIVWSVIDROKDVCIIZKPQJZRVJSLUWXFDBYBFMNCLGTRJETMEHNWWBJPETONPQLPNCYGXUHBYELHNGEKNGXZOBKG");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.526184048341);
    msg.setSource(13601U);
    msg.setSourceEntity(204U);
    msg.setDestination(7480U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.978518800594);
    msg.setSource(28776U);
    msg.setSourceEntity(217U);
    msg.setDestination(19340U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.204434860599);
    msg.setSource(30194U);
    msg.setSourceEntity(225U);
    msg.setDestination(52384U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.458949908625);
    msg.setSource(22458U);
    msg.setSourceEntity(201U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(65U);
    msg.plan_id.assign("SHTPALZCLCCOXPHPVRRJHSKNFSRBFXFUVIIXCHFFIMWUIZQQTKOVWVPNFSXSKPQMJZOJBETQDZAWJTNXKNPBANYOSFEAWBFIHDEBGQYGASGVGTELZUKMPXHYGIVZRJGLEDJAREEWDWYQCAIDOCTCDCBQOOTKHYQZAYMVPGBRUMYHOQNNODMMHTJRMSLGTKYLWEPWYEUIFFKSUXQLJPAIUNXNLRLCBYUCDZIXUWERRKTLGJUVXSNDD");
    msg.description.assign("AJHOVISTOSVWNVCLWWRULJDSPVULGUSIU");
    msg.vnamespace.assign("HPWFNFBPRMXWDGDQYNUNASQTOANTHWEHKQYAGXWTMSUHBBFJSZVEBMMKYCDOXKUGIYBQEJIGPRKZXZMVULKQZWJJAXYESDOVUJYRAXGBSSNCCFEYOBZPVAWGTUVUWRTGWQQQVISXUKNOTEAEETEGIOQLZDNMIDHWCTDWKJSYRCMIJROCORJVCFX");
    msg.start_man_id.assign("WYHRTEHRJQUDOFVXKSPUONKSMQDBYA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OWJUAZYGGKXLMIZIPSAQTJRLKOANSFOMYWQTAXCPWWNVWEJYPDUPDVVLRGSXVCEPTQXZCDSSKKTKUEWDNROMROSAJZAACJNKALLGZWWHCERYFCBPQCIFNJSMBJKZCPGWFQYEHEHLEOVYKGVFDZDNYBCHKCIXQMBQPHFUEFUJVXJNUUSRYMIBYIZRLXPTROBDINRMVAHBJTBHOTIEHXSFLXOXRPBMDWB");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.930891489895;
    tmp_tmp_msg_0_0.lon = 0.289364769672;
    tmp_tmp_msg_0_0.z = 0.164525540618;
    tmp_tmp_msg_0_0.z_units = 144U;
    tmp_tmp_msg_0_0.speed = 0.985311162803;
    tmp_tmp_msg_0_0.speed_units = 185U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.589749698921;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.978316256376;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("GKGVEFEDGHGMOXJLSFSQMEHZCWQTOXZZEJBAXKITQMMIDZVHXSYQVLJACDKADUVRDFVFLCDVFLDZKNAVVUWSENXIIS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::StorageUsage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.available = 2248315674U;
    tmp_tmp_msg_0_1.value = 104U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("TJJRLXZWSGGXKHYRGXWKSLTSFGMNVOMPNVSZJTIFJMHUCHVPHUGACWRMBAVGQNEAXTNDNLCYUODXRKPBEQPSFSBZBMSCNIOGCLCPQWFKFPQPRMVVAEREPNLUROYJUNHHIWKTIYLCEYZQZOUMKLHBWELGAOBBZQQFSVBIOAVZQDGSOCZFQQGJRUYIDKARDWKIXPJVL");
    tmp_msg_1.dest_man.assign("TCVOTMPSQFOWBBDKSVFOTFQTVQIAXKNQPKUJCHCTFGYXEDDKPEAPNIODWRGSXNNLVFJLQMYJXSYZQBCIDZMXWLTRQWUXSIOPSQMFKGMPYFJFVVPKELSZAJILWAKAUGLHWUBVHMYUBGBAHWHHYBRTWJVUOXKCLRLRDFMZOPZDGJZRRUJTLTJYNHUCYWUZZNAXIHMEVIBZNCDCGCL");
    tmp_msg_1.conditions.assign("DAFKMYDSGKGXGCXGIBNTCHMVDEFCIPYYMHTPVYAVRFMVXUSTGWXYJXVQBQREUUZFOHIGIOBQJVQGSJZAISKFUUNLFIURLYPZKLHCAEMVCADLRRYQEMBSHGYEANLBSNBLGAHEMEJAAUIPENHKNKEJXCDWDDSPLPOZNU");
    msg.transitions.push_back(tmp_msg_1);
    IMC::GroupMembershipState tmp_msg_2;
    tmp_msg_2.group_name.assign("EYALMJOSURGVCTGOTDOWQIZFWRYBQQHLIXMYQXIDTGCWDNXVMJDGICXZNEUXUGMLAJEHKDNIFAHKNXPSQBVUPLKNEZPTJBZLNLATFXSNEYNJCFAYQHAWBOVRVSHCUQFQWYWKSPKGXY");
    tmp_msg_2.links = 1432881925U;
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
    msg.setTimeStamp(0.945689908366);
    msg.setSource(3607U);
    msg.setSourceEntity(51U);
    msg.setDestination(7352U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("VXDUTDWAFVSOZLCDOENZPHEYBWSOEZCRSXIGHYUOTGCAVGQLPMRMNQJRSXTALPLYSJTKBGSPTXLRYYMUFAZJUQQHFOWFTZRMATIYQTDJWKPKBFGNBCRTUVXZQVPLWLUXYMBNGHJXJVFNWMRVDODFJPZEIFIBDHIPIMSODOUKINEWACOCVSANMPQVGQGHAPCOEXERHCCZYIKXKRHHUGUWBYBMVQBJKLNSKLNFLJKJWARAWEQIDGZYNIZUS");
    msg.description.assign("AZWBEWTHIRKOBMMGWCPYYWENMWTRLYILZMYBIEFCYPQHZDVYJXT");
    msg.vnamespace.assign("BQVGRSGXDQQSUPRQCVMOEIUKBSMUYVICFKELRBGHXAHAOOPAQCHCHEAWOSCCAOHBBPGLRJUYZKJXZIWVAXNNWVETAWJYGWNFILMEWJDEURRZGNJESUCTNLPYXLVPYADHMDTEMENVBDQMIHBKTKFPKRGXZ");
    msg.start_man_id.assign("JIFGXRAWKONTSTEOFRWTBOLJJVTSEAYGIXJDDKBKDAHAMSHPEZWHEFNPGTUOUG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YWWCLXFMDYOKKQEFDAUQBQCBVPXBHXMIGGRLXUBWWCNFZPUKGVUABUCNMXVMRNWHHHTLVJGIRILXRLQLRXOOZHWZKPZTWNSTVMNCXOSEYIMUAPEQINZGTMJPHYZFEUWVDOXSBJIZRMPLEPWUASNSHJAVHCALGFEQRKUGEFXGUOKAPSTEDJJKOCDZYANZQBBBWNOSJOCITOGNHQIKBFJYIISRSMQDS");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.914901930546;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 27U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 51525U;
    tmp_tmp_msg_0_0.custom.assign("YEDMLMPRBLNAXZAHE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EmergencyControlState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 239U;
    tmp_tmp_msg_0_1.plan_id.assign("HFPAKXWJPIZJSBILCWZOLATIPIAATMDEYUMCQNGXDJCOBEPQGNPXLYJZEHJMCBSPAWYMBNAOGYVZXSBVHOFFNWQZKBNVURCNQJLRADNQUXSZFFUCMLHVXKWSIHBGSMMPLYTESCPZGHIVWQGFUZWLNROKFWXDJROREQBHTUXKDTYOVDJLMIBFTDETUT");
    tmp_tmp_msg_0_1.comm_level = 34U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::ClockControl tmp_msg_1;
    tmp_msg_1.op = 143U;
    tmp_msg_1.clock = 0.778087653257;
    tmp_msg_1.tz = 105;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevCalibrationState tmp_msg_2;
    tmp_msg_2.total_steps = 216U;
    tmp_msg_2.step_number = 9U;
    tmp_msg_2.step.assign("BHMUQVQIRYUGFTNLWTTKVQFOGHNEGSYVNBCBWEAJPUDXOLIBTJBPREIRSWCYIXPWTCZJKGQHNARKADUWMSDQROFXCQLAYHXKDSXOECBRFUAITBYGQHSODHXXMVXHCPHLNZLOVLDQTJQNNU");
    tmp_msg_2.flags = 212U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.436586118537);
    msg.setSource(11786U);
    msg.setSourceEntity(45U);
    msg.setDestination(23857U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("KMMJDXZIQGVLDWRIVNLGZPEXPFKUJNBQBRNHJOKKGSVRALRAOOAXCRXDNGYCVMGKWIHSTOCGAZSWLDEVNQSHUYQTPSGMFNXLYWXYFSCGREMAZHPFVCHTWJHNLYMPSDBDTBCEPAPTXRWPBRLANEQXVJZIBBCOEJUEDQOMUSYTXUVQMUOBLCZIBQFPYV");
    msg.description.assign("OJROPCLTHMCJSJYSIYDIBNOPRGCUYYMANUXKMYXFMBGNPLPQXOUSTQZXVWSGQQDKTLUSGMNIBXMHTZISHXDLHJWEVPAGKVRFALDHSROVVGJWZLVAJOYYETAWCBNGJOWMDQWCKTSZIPXQQPERREZYCBXWVKHWVKKJNCER");
    msg.vnamespace.assign("GPAQNIVRBOLMZOEIMFXXETYFCYVLSMMNRRVUNSYWCDETGPSBYCYVMIUZOHVYOYUBNUDUDSNTRPHDAOJTSNPBLLDWLJYBDBAWCWAXPLWLELEGZVNANBZHUBBOXXBAGOJGKXGWCKIWWITJKPOXAZEQGEUOCCJJAXRDJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QMZGKJJNRNYDLNGHZMZQWVQRCOIFAZYXVDPQXPLROSJDISPXZVXNRRLTOBMOEFWGYSUAFKCLKUNFAHLQWEUGAZPJEBBRKYQDPYVTGDPBIMHZCKBQGEBOIBENUGXMMMRAHKOOUWLLJPJEOJHZLRWCNTZDYIWQVEQINYKTFUNFBIVGAVJGYTYECVUHPPHSMMEYGOVQLHRTVSFTCHCCCMX");
    tmp_msg_0.value.assign("SIMCJWNOTFWFBCRWPKALWBHSNWTBUAHREXQEGXIVAKSWKVXCTSHXQDXLTJZCVLOBKGCRENZPYXOZWUZRDKQYSJFRNVMJAMCRHIXRFAUNYTMNBCLXIXULO");
    tmp_msg_0.type = 237U;
    tmp_msg_0.access = 127U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GHPNWQTRCIYXMLTIXFIMKYXCKASJNMLRRFRNUBPMWWVNEPUKWBACCBAZZKHVWJUPPFDVGQA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OHCLNRHYJOGAEPFAPAISJLTVAUWC");
    IMC::Formation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.formation_name.assign("FRPMHDZQJUYEKUDI");
    tmp_tmp_msg_1_0.type = 9U;
    tmp_tmp_msg_1_0.op = 246U;
    tmp_tmp_msg_1_0.group_name.assign("MRXYWZYWTKOUIWEAZJTAWQPGMYRGTAWGPVCFCDFITSNWGNVFQEOLQFKWPGZFWFCBSNKEUDGPZNMSHJRIMDGFNTVDLBNTJKOOSKMTKZQZBNBJQESWPJFUYRQHYZGREVOCVELUMVHSYKDQZJIXBXRRSTDHHXFRJBFJHHAPAYUURNATAPNIXICEJIDXJALUUMSVVBDKCXVVAXMECPXG");
    tmp_tmp_msg_1_0.plan_id.assign("JPQTEAVYYYQIMSABJZK");
    tmp_tmp_msg_1_0.description.assign("HRLBHIDAERLZEYQJKCOOBRCZBUFGWFHYWDQIGKTSKSHLJWWVVYZDUJTAETPUQLUJGTHABOVDMPJMCISSLRAGSATSEBNGEPZOTEIKQTWHFVQNMJRLFRDGFN");
    tmp_tmp_msg_1_0.reference_frame = 160U;
    tmp_tmp_msg_1_0.leader_speed_min = 0.119520963271;
    tmp_tmp_msg_1_0.leader_speed_max = 0.926151167008;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.502124645659;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.505887760619;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.74775570513;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 50417U;
    tmp_tmp_msg_1_0.converg_max = 0.275839012574;
    tmp_tmp_msg_1_0.converg_timeout = 47558U;
    tmp_tmp_msg_1_0.comms_timeout = 26798U;
    tmp_tmp_msg_1_0.turb_lim = 0.159321436112;
    tmp_tmp_msg_1_0.custom.assign("GATSMEYJPOOZHWSHHVDVOIINBWBNACCECMDKFAJMSWEJYVQRBCILLKIBGZANVXYMAXCUFSXULFYTVJZNPMURCYGEAUDECUCXQEALTXFXSNEHDOGOKXPAPWKWUHLDGTBISBGGSKZJOHQFBBZZ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TBIXSRSPHPRZHCCEREEXDXUFYADKOGLBXQTLQWXCOZNVMKEYINQNSTTVUQEAACBIPXHOFFJLSAAPFXDGQRYBWDUDYTVPRSNMSXYZVZVFTSNOMFREPSWRNIZCUPJWNFEMCZMPLTKCWJGWOLRYUGRBZCMAFYSWIMEQKHKJIGPAVHSHDPUODQDIHWGOFONEHDZLGOYLCAIJRAJUXVUDBYQHLLJJJGMUIVBBKTYCWKGKFV");
    tmp_msg_2.dest_man.assign("WPVGUQTFIOXUESAUSFGSMNHEOBRHSXXYRYQIYYDYIFSDBPWZMVVIGJHCIDRGQKLMFAVCJPUERGIXFHD");
    tmp_msg_2.conditions.assign("FBDZAEWBOEQXQOCJTAUKKZLLLPYFKQTDUDGXNMJUYBOIJQPFVLADZYOHBTOIOESWEROOUXNCHJVWNSDIMTDSRFGRBVHXKCMJGDHIZTPRANFZHFWJPHYMVRCBBGMUNKWGRRVSYGLBJCOXOEWJFZPCECHJAUQVYHLLFTAPQGSKSABUXZSYTXGCFVELKQZKDIYIJGHTDQXUQYWNPMRL");
    IMC::CcuEvent tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.type = 138U;
    tmp_tmp_msg_2_0.id.assign("AKNXZAZXLQNHDXGQRHOLTCWFWLHPFDEPAAXJMRZNIQEISLMGHBRJMXCVUMOKFBKZKAPKHSHKPLJPELRGIHEWKMWIIBPZJDFEUPNYZQERTHTVQMTWUCJULRGBSAITRYWBVSGRGDITDUSGEQCOGUOJVVHXVFAMMEMYNUEYXGPDOFATUWDPRLCHLKYKJVQYYIVOQGOBZFBFZ");
    IMC::CommsRelay tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.lat = 0.113034633781;
    tmp_tmp_tmp_msg_2_0_0.lon = 0.582843132146;
    tmp_tmp_tmp_msg_2_0_0.speed = 0.152910825403;
    tmp_tmp_tmp_msg_2_0_0.speed_units = 124U;
    tmp_tmp_tmp_msg_2_0_0.duration = 23694U;
    tmp_tmp_tmp_msg_2_0_0.sys_a = 34148U;
    tmp_tmp_tmp_msg_2_0_0.sys_b = 11510U;
    tmp_tmp_tmp_msg_2_0_0.move_threshold = 0.0107635389778;
    tmp_tmp_msg_2_0.arg.set(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.605090361067);
    msg.setSource(64328U);
    msg.setSourceEntity(248U);
    msg.setDestination(348U);
    msg.setDestinationEntity(247U);
    msg.maneuver_id.assign("ELAPEXTGWPSOKUAFOEXDHGTDNGPJREPSLVRJJSBDBOIC");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("OXPKGTALLWTECWHIIYMFSABZODKMHLKXMSXJQKCHKNWKIHAPVKTGCOLUBCHHLAAJBYIGZMJSXVKISWYCKXAYQERFJQRTWXUIHNADVVNGGTRUURWEEHJOIFOWKODGHMZWMVFCRDVZXUXYEMWLOJMEUDPDSLB");
    tmp_msg_0.type = 230U;
    tmp_msg_0.op = 126U;
    tmp_msg_0.group_name.assign("PTTBZXBFJONJJHIWMUBCYLIUPXXVIACRUOWYIMHNJQHVPPKKYMIUHVVNRCZRJOQAZHRKSGGBNVPXYZUSDGFLRBANIRUWCHZMZDIBURDCGYBTALPVQGVURKAFQFCTJMEJUZKKADNMMSOSZVZJNEGMTDXATFBSDGTYOKYXFHUAJYFGSGGAMHKBVKRXEDEILWENNFIFLNLZVX");
    tmp_msg_0.plan_id.assign("TPVVEUHIIITWMETDMQXAEUOHMLUQAKPCZVIFATQUSBPZDFJTUGXVGDFKNMMLKOREHYHNCNXBTAZSYYWYRKSQIYLXHLEKNRLEUBPSBMDYKJJUHPQBMFNRQAANSOOEKYVBLZRDYNDDIJZEGRAFWCWSAGJRWBDFRQKTLAVHFHPWSHZTQLWWIAJJBCGYJSCPTZFIXPIQEXFNG");
    tmp_msg_0.description.assign("RACIVYWKCWFELRVGIFMROBFHDPCCGYKJNWIPUFDDRREGSSUWHLROEKQORAGBIHYKTKXJOAXZHOGJSZJBORWMPSMZWIJEMQSWNNATXMPVQVPFUJEIACXFOXQDAJKRSNZMSAKMGYZYLNCPVLEXHTUJSLCGTWLEHPIDOXBKBDQYEJPNMKOMYQHSZYBUZADCEZMCDNPDTXQTVHVQVGLOS");
    tmp_msg_0.reference_frame = 151U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 4147U;
    tmp_tmp_msg_0_0.off_x = 0.471597736118;
    tmp_tmp_msg_0_0.off_y = 0.000367514459836;
    tmp_tmp_msg_0_0.off_z = 0.786068604995;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_speed_min = 0.784203777111;
    tmp_msg_0.leader_speed_max = 0.00804868601128;
    tmp_msg_0.leader_bank_lim = 0.0440270617265;
    tmp_msg_0.pos_sim_err_lim = 0.601657713093;
    tmp_msg_0.pos_sim_err_wrn = 0.710246777669;
    tmp_msg_0.pos_sim_err_timeout = 33506U;
    tmp_msg_0.converg_max = 0.596227102697;
    tmp_msg_0.converg_timeout = 36536U;
    tmp_msg_0.comms_timeout = 55095U;
    tmp_msg_0.turb_lim = 0.147138490601;
    tmp_msg_0.custom.assign("QNJLTDTRMYVKRYFRNGDIN");
    msg.data.set(tmp_msg_0);
    IMC::FollowPath tmp_msg_1;
    tmp_msg_1.timeout = 20055U;
    tmp_msg_1.lat = 0.738057104256;
    tmp_msg_1.lon = 0.308512657505;
    tmp_msg_1.z = 0.892857603216;
    tmp_msg_1.z_units = 203U;
    tmp_msg_1.speed = 0.472009156166;
    tmp_msg_1.speed_units = 2U;
    IMC::PathPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.165501028026;
    tmp_tmp_msg_1_0.y = 0.712900082188;
    tmp_tmp_msg_1_0.z = 0.622124705417;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("TBJOKLCRBPDKITNHOIGDSWVIYDGAIRHZGCJEQCODPYWDGAUNBXTXJZBVDRTXDMZQMTCUIJUYRERUGVUJEVYOLRWFMMXLSTMAXQBAFZFJPPLVNTUWFKLHDXTEHSEMPZWWYGCVVQAWOVFNWEDRUMAJKYNFSEPDIRFXXBXHJNFQHZNZTLSHVAQTUSQZYUCLQSYOYIJRPLB");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexAttribute tmp_msg_2;
    tmp_msg_2.name.assign("CWTHPJURRHAPKTMPZLLXQAKAYXNTDBOPYBXTSNUJJKIVDHCJHOBVWATWDWTFSQDGGBZZBZVIBXLWPVFQKDJUWLYBNMWUICRDRVIVORCSGBEYVNGVGJQOCEUFKEGRLEQHEIMEAHNHITIYQGUECQTJKXCCUOUEPXMGIIGRWRJHYSNCYZBNKWPAH");
    tmp_msg_2.attr_type = 181U;
    tmp_msg_2.min.assign("FZTNXXEZHPCWWKEQSRKJUJFWGNEHSTKXCJCNJVUWPFPKBHOAKMCSJDUDIIVRLHIXEOCUZKMDCLENRVWUGGWAOARDVTIWPTHOTTOIS");
    tmp_msg_2.max.assign("XFUXMAEEOPNSPHGFMNLHNMEXOLDRQHDDSIIJRVTTTLSPXKKFBOUYMALWJOWJIPDHFWGGGURXORIMIDEDRIYNMYMSMWYDUFCWAZFAZUEZXZZQPGLERBVPQWKOWVCFZAVYHAYAICSJKCNCHUCFXPLMBQSZPKMWGVJYCOPAJB");
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
    msg.setTimeStamp(0.455027504398);
    msg.setSource(20587U);
    msg.setSourceEntity(75U);
    msg.setDestination(57261U);
    msg.setDestinationEntity(134U);
    msg.maneuver_id.assign("EJUZDCBHILXQDFWGIMPPCHPSZHKQDAVBZAENQXEBKOOAZGPYIEWPRNVFOLCABXZHJTQC");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("TXUPFXGGVHKHJSSQHYTSXQFRPAYZJDEROUDPMTLSTBZGTTOIEDRWPIXFMQUTLVQJTRDWLWYOZTIWABEQQBFOIOPRFCIYZMDERYKLBDNUAZGIZACKNAQJQHDMGIHNERUUOXKWRMGFG");
    tmp_msg_0.type = 81U;
    tmp_msg_0.op = 85U;
    tmp_msg_0.group_name.assign("JGJHGDQEUVUGYFXAEIYYDSDQTPFYEKXVNVSINNBWOLBMXRHUIFOLTLOXHHXEHWCFGILYAMQPWVASHUMXHZJKKVALRPCWLSNEMYFSNUZBZCBBZMCYMYKDXVTEJEIOQTNXIFDYKFOBGRBBCSMMIHYDPIVKGJKNOJMTXHWL");
    tmp_msg_0.plan_id.assign("CEEYESAOVXOFSNDMVHHUVDECKXSEJTBNACYJMMBUPDGATJZIZBZXVQAYHKBCIQGQZXSELMIMBNFZDYMVZFX");
    tmp_msg_0.description.assign("WEMVVJIJYISNPCPNTDURAYDCMASZLOBLGCPLCNSKFVNJOXXJVSUUQOKBXOXLCCXZIUXTYQWOHIMWWUNLMGQTEYCYEIFERAVRAPKJXNRAEPDF");
    tmp_msg_0.reference_frame = 135U;
    tmp_msg_0.leader_speed_min = 0.741139975985;
    tmp_msg_0.leader_speed_max = 0.757899730669;
    tmp_msg_0.leader_bank_lim = 0.0702875341495;
    tmp_msg_0.pos_sim_err_lim = 0.382361589072;
    tmp_msg_0.pos_sim_err_wrn = 0.305314447346;
    tmp_msg_0.pos_sim_err_timeout = 34690U;
    tmp_msg_0.converg_max = 0.507695018085;
    tmp_msg_0.converg_timeout = 375U;
    tmp_msg_0.comms_timeout = 9507U;
    tmp_msg_0.turb_lim = 0.105515675354;
    tmp_msg_0.custom.assign("KOUFZTHUXTDGPGPSZOXBRFTYOFDBPSWFWBVAHULCERUDYEZTBSKMTFHKMQASPECSVARPODZUZMKTJWAQYJDEQHLRYCNMJYXPJOWJXPIIWQXPQCNNKPMTUXNGCCHBLKOAMLGQAREELODIVZVBXYFRMTVRGYQULIVQJCIVKUYVGBWCWUGHSEXMJXMJLTRCNNAP");
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
    msg.setTimeStamp(0.827671685655);
    msg.setSource(19513U);
    msg.setSourceEntity(248U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(123U);
    msg.maneuver_id.assign("CVJFJHGYHELRKBNLYPPOZUUZOOXTDSTVDKMCLWEBZZTRJPVEZNFIVKAYRDZKVTBTJSXUARWBIGNPHSOAVMBLFGQGLGWNAJQVHIFXDHWKAATKSJIQKTXQDZFWWCXBDDPUIXWKZLCUPIISUWJETNAYQRPNEIKVUUBTJGOBMAHSRNQHFXGKRJXPQYFNZGVSMXSGACDZYILHCQMIYOWORWCNEPXEQASOHMVRFOUDLLNM");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 32364U;
    tmp_msg_0.lat = 0.476827321716;
    tmp_msg_0.lon = 0.0872037979475;
    tmp_msg_0.z = 0.916824249934;
    tmp_msg_0.z_units = 92U;
    tmp_msg_0.speed = 0.681577092816;
    tmp_msg_0.speed_units = 46U;
    tmp_msg_0.roll = 0.958217557204;
    tmp_msg_0.pitch = 0.225720951462;
    tmp_msg_0.yaw = 0.120582809021;
    tmp_msg_0.custom.assign("YTBUJEWLQJSETHKBWXRAGOVOZRLNDBRMRRHPYVSLNXUTVQCYIWNKJHCUPCIHLOKAKMUAELIYZGHIHMJDHZVJIQZQYCZQPWKAMFOGRHDBTZNNXUYGPDNNCYGOCJEU");
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
    msg.setTimeStamp(0.601788731691);
    msg.setSource(36493U);
    msg.setSourceEntity(126U);
    msg.setDestination(3804U);
    msg.setDestinationEntity(128U);
    msg.source_man.assign("RCLEPNZTDBVHKSILWLRPOWDTYWMRDZMYVBQDFPPHWJXIDEHMTJWYQPUWWDQJWGURHJJBOSTFCZXIXMDXUKVKJULIVMCSAGZYFKVOOEYOXFGQGTMMCCAHNPI");
    msg.dest_man.assign("BBCPJEEWLMKJUXQWVVMIVOHLAHCNFPKRHPDGBOFKGWEIUQDCRRRGPXINHJIBFXJYIAFOCGEZQOYXUCYSJVKCRBLQZNISIXSHSNLSTLHTYYAQGMORWNDMASLXUWCHWKJKIWRNS");
    msg.conditions.assign("IYBKNWVBTPCXPMSDECIAPJCIWDEPVYHLSJWFAZRMXTXTSBDQEOOJXDQTHYRNFQIVJBBPBEXYJWVVOOGALLGDNAERXPFNKDFALUTOLTHNHLIUYRQRUZNBUPJHTLFZCSOGAFCGJZKMBGMQUGWFSFYIRXLUS");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.675202847395;
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
    msg.setTimeStamp(0.965183396899);
    msg.setSource(24852U);
    msg.setSourceEntity(119U);
    msg.setDestination(6576U);
    msg.setDestinationEntity(69U);
    msg.source_man.assign("QMCBGQFZNDENBJOVWIULCPFCXRHWIYURXQBBRIKXZIOZJYMOJPFHNAHJSTWWGYQOUODQJZNHCVTAMCAPBVMTJCSPCLRYAKKFQQTGEHI");
    msg.dest_man.assign("ONVKOAYWXHCRPYUGXDGWMDYQULHOHJZVDQHVMTKZJETNIOPRESDZSTNCCIKIWIHWWADAJBFRULFEGUKXYRPDXBQSFHHTKEQVAGPSRFZKFCGJOLXYPBNSNLEZDQESSSUEGRRUWTJFJOZVXCPMQASLXVJIBXFBJQIOJKYGUKQ");
    msg.conditions.assign("RUJPEQBVDIXFHUCSGJKSOQASROIMBFBCCLGPTCDFVRYLFUKP");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 175U;
    tmp_msg_0.clock = 0.731093967428;
    tmp_msg_0.tz = 1;
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
    msg.setTimeStamp(0.775730288208);
    msg.setSource(40899U);
    msg.setSourceEntity(148U);
    msg.setDestination(55827U);
    msg.setDestinationEntity(58U);
    msg.source_man.assign("GTSVNIYMCXUMHKWMWFATHATOWMUBJHXNWVJSQNAXJUICAPREAZMPXRCKTPCFSYKOGGDZEFSVRYOXHLXSWJCELBYYBCAQCNNQGSPYULGRUELLZVQTWDRIZJFNKYZDEFZGVHPXDOIWQAZHDOQECNDYPHWNXMVLXMQWLASKBSIIPBAPQBTLGJYJGMRJFPF");
    msg.dest_man.assign("NXAHUJDCRSNEHVONWQRHQXLODZMBXUJXNXGXWUUC");
    msg.conditions.assign("MGHVWFSGMKRPFFJOIDPGATOCTZGMAJZ");

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
    msg.setTimeStamp(0.696993619663);
    msg.setSource(51506U);
    msg.setSourceEntity(231U);
    msg.setDestination(63975U);
    msg.setDestinationEntity(19U);
    msg.command = 109U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XBFIEYOABSXLXMPGITJQUGERHQNOGPWWSBJNYUCUVOEZFXTBVAJZNSCPZVFQVJKIPEVAQBCAUKGIGVNCEOMKVLMCYRLHRTVAYGIHPUHBDKEURDDIJALICRKNKQPXJIDPWKMOZARHQIOSEOCXZGRYWWAPJMWNLEDANVHDFMBTMYUAOTRTSXQGFVUCKXZCNZWWSZHETDMQDZTYFNOPSSXWLMJSWYDFHLULGSTNJFRHBULBD");
    tmp_msg_0.description.assign("DJKQXTIAIBEIIHYZYZFQKEDPSHFRVKSUCLNFLXWQNGSZXVZSERHAFVDBYHDCIXDERTRTXTWELLHBJFYIQDHMRMQCJSMMXNTTOOJUGQXVBAUUDGABJQRMPFYBZCLCNWTPHBGHEPGJMWKKCXEOAFAPEUVLJPKZNNOGGYOKYJNFAYBVFTDGDKZPSVPQFDOOLRCNWCTEUYBAAPIRPBVKYEOMWGOHLUULZCSVANXMKUWIZSNLRRMWIS");
    tmp_msg_0.vnamespace.assign("GRLKOFRPBBKGXDNJNFZYCWJGOOTZFRLVTMCLBNBWAYLBFPZFSZYAMNWKSDDQCZVUQNPPAVGRINWEDFHRUAKMQPXUDIQQTQEEXICRHXKPZENCEHIAHYJITLRJWPLY");
    tmp_msg_0.start_man_id.assign("WMPSDQFWUIVEEVTYBCBQTMFJULZCHJRPDYVPIXPOSWINJUXEOPRXBPJXLNLLFZZPKOYSKADUEKRVYYUMQDFIZWOGYAJAFSFVYLJXOOIWZBMNECMWDVJIRIKMTTIDQOBGQGHXSCBGPXHECABUPASZMLRSXVGHAMKGAVFSDTSXHVBNOBCQUHHQZZOHTWRAYXTUJLDDNNWZELYFCMKILRFQCMGCT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QXJEKETHZXMJMPGCHFUYEVGMERKCWUFXEQCTZNQGAHFVZKERUQBIVBXPRKMGKZHDVLEQMYTXASGKCUTMKNQQHQAIAFIJRVFNEMYOCNAORZVDYHJBDVTBWDPDJLZWNCXGCPYZIMJNVYTLFRJJHPSYGIQMHKABUAKLFUDHPIXMLVWOPLODUSZAERJAFRUNTSKSIRWLOQBUBXBNROOUOEILBCFPBCSWDYGLSTZOVWAWZGLDCHPNGPISTSNT");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 43591U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("DEPBEFIVFVADQHEEBPTXMRJBGTMLZVXRCBUGQUGWKWYVFYRAKAEISMJHAMZYSFHZCRNQAMTNUVKOMUELYAWLTVWZKEMYSSJPZXEFVZBMUEIQZTJQIRNGCQCOKOQOXTOKUDKODZELCPOHNRFILHCIKYNGAYHCL");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("IRCHWVAXKSWVTZLGXPMOKBDWUKSYLWJXRJJUUZKTGUCXDAKTEMSSWSLEBTYAGZVVHIUNAAITNJZIVKKQHQYDGNTXJZEBIDCGVQQMWQONFKULWRYVEYHLMDBYYTHIZZOJH");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SessionStatus tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.sessid = 3453213360U;
    tmp_tmp_tmp_msg_0_0_1.status = 46U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WOMZJJKFAIGMCQIBJKTPIPXYDKEJEOBLCDBFRXIEHTKRPNYZNF");
    tmp_tmp_msg_0_1.dest_man.assign("HNWNRBFSONVVBZZRCLYQTMNEBPRIVUOKIOTNXLXCZFCQGTQSIKZDSKOWMVAGPHNPURUYDDZBYDRMHQXLLWHPQUIWPTKYPGQODEYFWRNPJVTPCIQDXWXHGVOYDUSCAMRLJBSEAEJJKBUZAJUYZTFNLWYVISBF");
    tmp_tmp_msg_0_1.conditions.assign("UFZNXXBSNYSUIPFHCSRTGNFIHYENPUGCQBJCZLUNQDAOPEVAJQDQRZYIKSTZEULTJIIMEWOBJOHUUNKSFWCYJZKBRHXCJWDDKGYSNXDCBAXQJLOVHWCEHFPPHGZEMRROINEPURCQEFEDZMKYDPVXBFURSQRBWDTSEXTKSPVAWVADOVJBFXIXGGGLSGHMHTMKYCATQR");
    IMC::PlanDBState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_count = 53433U;
    tmp_tmp_tmp_msg_0_1_0.plan_size = 3257140537U;
    tmp_tmp_tmp_msg_0_1_0.change_time = 0.255971630067;
    tmp_tmp_tmp_msg_0_1_0.change_sid = 24144U;
    tmp_tmp_tmp_msg_0_1_0.change_sname.assign("PQZBLCXDUTLAYFNFDIYBREDLHHDKZWJBOMYBRPURGTEFOLZGSQNATAJQLWFQDGWCVIMEYAEZETSWEGWCTCRUMXEPOGHWKPXELJISCSACHCSHHXEADUXOQCVPZYFDRXXVRHJPAFLEVIJMSTYWVGIBNKYMBGLMWMPCVGMMYFIJISNZYPNDZIBIURHFWKNQJXTMJOOQZOOIGKHYQSVSGOVLUWNULNQDSNAPBTCKPZTQBKKNXXBRUUAFAJOUKRFRD");
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {-119, -39, 109, 15, -58, -91, -108, -15, 62, -31, 12, -79, -86, 72, -77, 10, 11, -29, -122, -10, -83, -117, 9, -9, -123};
    tmp_tmp_tmp_msg_0_1_0.md5.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    IMC::PlanDBInformation tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.plan_id.assign("DEEKLMJAGFQCQAXSDLFKDBQEFBSWYNWTHKSTPEJPAFIZRXHUIVNZKAMIQXLEVIHPYWCQJPPGILHFZHZULCRVGHUVFWCQZYXYDPEDCGSSDNRMDUVMIGBNNQNTQRPJCCTBRFPOTUAONWNXCHLRMAABMMOSISXJERAEDXWTCYINVUTJYUMZKHYXJDPOHXOLYCFQIZTBWGGVGWYKOSIQA");
    tmp_tmp_tmp_tmp_msg_0_1_0_1.plan_size = 20924U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.change_time = 0.625314595062;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.change_sid = 32453U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.change_sname.assign("UIVTCNBYVNZBCCBLPLOXBZBBQDOGWPTFKHRSTAOSXBKZJWJDDDAAZHDHJCCNSKPMQEVHRRTQHRMASJEUCEQVPSMEHRDFGWFRMTUFAPOYPXEIATJPFUIHTIAJYNGFWRWMKOOUGLAVGYNDNCQJTAZGGSBCYBIVOHPXQOGZLMYVBCXMNEYIKXMYUVIYTHNEXKLGJKISQPQLSGFRMSWKXXQRTUCOLJVLELFXZPSEDAUOKYFJDZM");
    const char tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0[] = {-27, -112, 45, -71, 18, 91, 26, -58, 37, -118, -97, 90, -114, 16, 11, 61, 30, -79, -6, -102, 31, -74, 8, 112, -4, -107, -4, -26, -54, 8, -84, -118, -60, 119, 25, 119, -34, 53, -95, 86, 81, 40, 73, 99, 123, 41, -124, 109, -50, -68, 99, 19, -55, -120, 76, 35, 54, -56, 122, 120, 107, 63, 26, -53, 74, -63, -108, 110, 64, -95, 31, -84, -43, -66, -33, 107, -28, 18, 17, 62, -115, 77, 60, -44, 109, 75, -110, 99, 88, -70, -64, 25, 67, 6, 46, -81, 42, -62, 53, -3, 63, -67, -82, 107, -55, 102, 66, 68, -25, -84, 32, 25, 111, -88, 58, 82, 91, -15, -7, -47, -92, -80, -77, -54, 38, 93, -67, -66, 121, 72, 101, -53, -117, 77, 60, -92, -76, 97, -117, -69, 100, -17, -44, 68, -16, -118, 21, -5, 103, 37, -35, 100, -98, -12, 61, 12, 64, 95, -6, -26, -91, -7, 23, -69, 97, -91, 75, -46, -114, -128, -35, 69, 76, 21, 70, -40, -12, 122, 106, 21, -127, -94, -27, -33, 115, -48, 65, -123, 24, 60, 93, -94, -2, -37, -72, 16, -60, 16, 110, -91, -126, 12, 42, 40, -11, -100, -12, -93, 84, -44, 11, 31, 10, -81, -70, -125, -95, -87, -98, -55, 83, 15, -123, 92, -24, -128, -84, 65, 14, 99, -37};
    tmp_tmp_tmp_tmp_msg_0_1_0_1.md5.assign(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0, tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0));
    tmp_tmp_tmp_msg_0_1_0.plans_info.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LedBrightness tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("BNAMJCTFGZOFYJUTXMXLYSXUWBHQLSWDERONHGJCOERKDHELDUHVZKTZAJANPVAWQC");
    tmp_tmp_msg_0_2.value = 185U;
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
    msg.setTimeStamp(0.193158469105);
    msg.setSource(63392U);
    msg.setSourceEntity(215U);
    msg.setDestination(31218U);
    msg.setDestinationEntity(173U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PLJCOPARUYSPMNQLNHLDRUHDRHDGZXQBTGNUVIVACRJZAAASAVMCANLEAKYWVHOFWAFXQOIIKKOGYXPXSYSDRZUOEVEEJQEBEJIIIBJMBJKVQCTFOOXQIGNMOZKQSCBKPKNSGMWZDDSCHZYOMXHLUBEGFGTSPTWJUCGJTTLDLKVQHWEGUOYCLFLXZZMZNYUVXRPFULIWHXYFBPDIMCJWTHYPUHFNYKRW");
    tmp_msg_0.description.assign("STXBUITSCNVEQCKXROZXSHGWKESVJNZNIHKTSJDYQPZADTKIIWQIJMSCOMRFHLJXADHLWLMPVDLYGAJVHPAFCKXODQXKFUIOHTYIBNRJYWEDC");
    tmp_msg_0.vnamespace.assign("UAPZHMUHPKRVFLJMJXHQKRVNWEYPFVQGXWZRIHZICWRYXRBSUIWLZSEPKXOIIREIGPCXFESTCLATOGNKZJKMLDNUVPNMJHSQXBPQSXKFTCAUKBKCGLSOLXIDUJLSOGRDKHUFMMBTZOWZWOQWHKDBEIHSCPLMOADSTDQNBZYWYVAJTYRFZWABOMTJPHHNBNETZAYBVYFAQQWGXENVLEFVNERACJUDGXSVUQYJFCDCDMPUGGL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WIEKBUQTYABHZRSEISEHNGSJDJECZEY");
    tmp_tmp_msg_0_0.value.assign("CIDZTRUXCEIMPGIOKTLREDSEMQVHLPTBBMMVPXV");
    tmp_tmp_msg_0_0.type = 113U;
    tmp_tmp_msg_0_0.access = 54U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VRLCHGEUEXQXODPVDXJTRTIGSJNPWQCAHLSBCFXMIQRFONVLICIAMYAFLXJPILAWPMLIHNDSBATO");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GKVXQLIPFYFYBBARLEWUBOSZSOGCJMUAIGMQLOCVOSFWPWIWROHFNSCTCJASLVJUEKAGITUJNZEPRBZZTYCEIRURWJU");
    tmp_tmp_msg_0_1.dest_man.assign("UIYBSYVBFWYWZOOYZZFDMNQRCZRCTHUTGNKKPPMHMYDLTWELPIQWXEVJPTDOL");
    tmp_tmp_msg_0_1.conditions.assign("ZIZWMAKXERATICJPCGKCPZRFJYIVKUQRUZMSNCBFKBDBMUDQACRLOMPSOPECDUQLPBXNGHMHZSAQYFRBKLLHEIDNMBVPYHTCGLNGDWCTOXGRHOEKKEGKZSEFGBLV");
    IMC::CompressedImage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.frameid = 182U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {124, -115, -91, -90, -24, 70, -8, 50, -36, -95, 109, 47, -47, -1, 71, 41, -82, 116, -58, 4, -113, -56, 123, 12, 104, -31, 58, -11, 95, -79, 6, -2, -42, -66, -10, 123, 56, 63, 111, 63, 110, -60, -36, 77, 89, 104, -95, -15, -11, 6, -57, 10, 14, -55, -121, 46, -62, 31, -17, -128, -111, -22, -15, -24, 71, -98, -71, 96, -37, 1, -53, -65, 18, -61, 110, 2, 79, 106, -117, -24, -75, 55, -60, -49, -6, 54, -76, 10, 66, -41, -7, -35, -34, -51, 12, 85, -64, -49, 71, 38, -116, 2, 103, 88, -120, 90, 106, 27, 49, 112, 33, 88, 116, -69, 100, -42, -112, -62, 20, -58, -108, 86, -36, -26, -8, 14, -122, -123, 93, 122, 95, -101, -28, -89, -1, -66, -88, -46, 58, -16, 126, 88, 99, 5, -30, -82, 27, 17, 10, 106, -36, -122, 104, 10, 84, -41, 57, 87, -81, 102, 11, 61, 73, 32, 116, -74, -96, 55, 64, 38, 62, -7, -1, 31, -74, -1, 71, -123, -72, 83, 113, -85, 77, -57, 109, 88, -72, -91, -84, -25, -84, 120, -98, 7, -77, -38, 12, -87, 31, -98, -33, -62, -1, -26, -117, -90, 8, 69, -125, 6, -61, -96, -96, 88, 98, -56, -97, -72, -80, 22, 100, -82, 23, 99, -88, -114, -73, -108, -69, 33};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.0397922118846);
    msg.setSource(34277U);
    msg.setSourceEntity(254U);
    msg.setDestination(38343U);
    msg.setDestinationEntity(62U);
    msg.command = 167U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KQZUESDSJF");
    tmp_msg_0.description.assign("JXHGEWWEVDSEPWUWQNGFTVADNEJNHLPGWBTKXNNHERQOMZVCXXWMUBQRKCJGALDSABZTKQUOFTLRSBTLCYPRHDDCFJKAZUNOERHUVULJWOYEYDSOSZTWRGXZFJIDFMJYXFSRPTUPIBUWAXLYPLIKIIAFNSQCOEBXVADQFQHPSKMYOJKNWZBBGVHPYAGMFMKVZVGOHMLETMHCXRQEAFJPOVDVGZNKSZGTHQQMLICXIZDCCYKTRJM");
    tmp_msg_0.vnamespace.assign("PAKQTTXYWVWSGCCBCMLGPLULAIFPQIEZWYOKKHKSIQLYRXHZDMFUOEXSINWJRSUZBXZNSEZTLANMOWHJRJYRKXTAWLVUQBHPXJSQGGLKXMQQDGWAIUNGUFMNEYFLIFKOPCWVXRAVERJEAOVSVERFMVDNKJJMOWQAGNCBNLBDXHMUSIYHYETDUOLACITYZVWECVCPDHZRHDKOCNOJIRZVCSYBQBUJB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CMHGOXNCBQXZYTMDPSOGSOLIJTKOSTVNDFTXDOTVQBWBZQHMEJFOKCYPFZSRRYUYGHRKEUXXBHBVTDOJJRLZUNSTHLIACQUTIBGGPVDKXPXJJBSVDNRFGMVBNQIEXVPPNAFMKZAHRHAJDUJBVGLANZCWEDMPWGJUKEDWNSLMFILQTIZDBEHOXNLFVLORGLWZKEPCAAZCMKVWOAQMQGQSU");
    tmp_tmp_msg_0_0.value.assign("PWVZGKDUWCPFJAA");
    tmp_tmp_msg_0_0.type = 207U;
    tmp_tmp_msg_0_0.access = 244U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NSWHAGUVUFBHXGRBWKHURSYMKORLHOXORBYKQIJPZDSDQETPHYPPQDCLLABKDHUGULDXZUOXFNBVWIWTZOSRYHBPEQUPMMTGASYETNEMFEYZZANFCLQSJXCXAQMCMQIMLXGJDAATIVACYVJKCIOHBJBQAPNDWOFPNTRTKVGSRZNFOFEXKW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RMJPSCIKUQNDRTIUSBWJNVICSDQKYRFPVAZLXMKPOBZDIU");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.973552384816;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.561993173487;
    tmp_tmp_tmp_msg_0_1_0.z = 0.777660047175;
    tmp_tmp_tmp_msg_0_1_0.z_units = 149U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.836082090611;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 56U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LKBQYXBOASNGMKXZCSGWEBUMLFWYOLZTLPQPUCYSESBONCGXINULRAAVUVZWHIEZMVPCDYJTCZLHCXWJETHGEQDJBFERVJOCFPZMUPDXDLTRGJHPSKUETKJLCKHIGRBNXMZHKVDJHBUVFASNYVYKXOUQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AutopilotMode tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.autonomy = 59U;
    tmp_tmp_tmp_msg_0_1_1.mode.assign("REFGCNNULBTTJXCHEADWWLQJLAONYFNUKKVRIRXGPTWFESCOUSOSUZJXDTPHLXVJZKCOKUTAGXYIZWSHABJABGWXUIOXYKRROWHXCDQCVVVRMWVLFFYFMBAMPBSBSVOIRPBXIYTQZCMLCNRYEYOPAFMPTLLWQUQIHQHDRZPHNUQQWGOIBPZLITUHJFDOCZKDIIHAMAMPZJETJVYLKEEBKNEKNQNGSDMMTDMEFY");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::PopUp tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.timeout = 55933U;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.326630677928;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.106368425716;
    tmp_tmp_tmp_msg_0_1_2.z = 0.555582443264;
    tmp_tmp_tmp_msg_0_1_2.z_units = 113U;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.605763159028;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 192U;
    tmp_tmp_tmp_msg_0_1_2.duration = 62208U;
    tmp_tmp_tmp_msg_0_1_2.radius = 0.929099945169;
    tmp_tmp_tmp_msg_0_1_2.flags = 31U;
    tmp_tmp_tmp_msg_0_1_2.custom.assign("VYXANRBJYJZNALWEIBZLXEDRTCUYOVQYVPSWGQLMQEAEODMBVDEQHTDWNTBYCJZQHFRPMFHCLKBFTFLIUHHIXCSSUBREVEAUAGPQMTNTMOXTUQC");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KKSLKFYOBUIQOFAYXVTPJBRZRGXGSNHXRTDAXPTTKYTFMSZHUHGJXPQYHFECYMGMWRSVOSZGLUWWHZSWKMZLJAOMBUBYNQWBGJKJMRQCIFJNEWPDYSQNNEPNPIZEJHUUJRTNUDXZRYUWEQLPSVKALDXTZJM");
    tmp_tmp_msg_0_2.dest_man.assign("XJBTCLADFIANAPMUQSAFDOPZKSBNDAVAZWJTJPVXZBPYMCLIM");
    tmp_tmp_msg_0_2.conditions.assign("BQESJBAMJDZJERQHBWYCAFHPBLDMCTDSURZBRHXCZTHPXKRWRYTNLPKVWEFMFAFIMXPNOKROVANXS");
    IMC::UamRxRange tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.seq = 16951U;
    tmp_tmp_tmp_msg_0_2_0.sys.assign("REAHMSLSBQPLEFIPNZQNHRABHEEDHEKWJPMSDYOYFIIOJRZKZBLZVCNENESQENHLQCTTVKLWKOLVFAUMNOWGXAPVCDSFIFVOCSQHGYZUJDMIKDJXADVOBAXZKHWCALYLWGMTXAYIKUQBOWMPTVJXXBWAFCVJHYYYBUUPDKSLWTBUCITZUSGT");
    tmp_tmp_tmp_msg_0_2_0.value = 0.13294958584;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DevCalibrationState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.total_steps = 49U;
    tmp_tmp_msg_0_3.step_number = 56U;
    tmp_tmp_msg_0_3.step.assign("OFEGJNRWGNAIQZHMP");
    tmp_tmp_msg_0_3.flags = 88U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.x = 0.0451594204739;
    tmp_tmp_msg_0_4.y = 0.712562203464;
    tmp_tmp_msg_0_4.z = 0.168238393242;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.647496436985);
    msg.setSource(11166U);
    msg.setSourceEntity(70U);
    msg.setDestination(55416U);
    msg.setDestinationEntity(6U);
    msg.state = 160U;
    msg.plan_id.assign("HBILLOWMRVZOSDUTPUKBXKUSOESSXSOCOQEDTGGJBQPYUQSNDAGEZADEXFLSXNLNKOJPJIFOKIOTEWLQZGUSXCCRBWXWDVDPTLRBUGGGHPOMKFMFEYWMKYYNQVBIAXTPRHUIMRJQDHEMQCMSKWRMHVAYRFRMIKPHCHIXQFEYTARMNAWZYVAVSJRKOYVJTENTXZTLYFWBCVGKLENDDJJVFJIIVUNU");
    msg.comm_level = 102U;

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
    msg.setTimeStamp(0.89120025377);
    msg.setSource(8560U);
    msg.setSourceEntity(116U);
    msg.setDestination(65323U);
    msg.setDestinationEntity(17U);
    msg.state = 5U;
    msg.plan_id.assign("IOVJOKRGGEBNULTXUWXNXIDSHUOMEUQZPOWRBZBMYJYPUQDYODHNHTSSOLQCKNIULKHFRFSWPMGJTIXXMXUI");
    msg.comm_level = 195U;

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
    msg.setTimeStamp(0.575124773414);
    msg.setSource(55745U);
    msg.setSourceEntity(154U);
    msg.setDestination(61726U);
    msg.setDestinationEntity(193U);
    msg.state = 171U;
    msg.plan_id.assign("KUBYTGSRBSYRXTOZLBCJYEVFQFCPTXWPUJHRGKWDFUMMSGKZAWCHDSLGJSHWCDFVYBNKEHSUAYVZPGKPXACECLLAKOSVUENQWDORBVJIXYNWVTKQPBOIPVEONBAWKQAQROTDBWFIEWRBLHPUNYTXZKECNDDAOMUZTDGYRMFLZXOHWOHL");
    msg.comm_level = 197U;

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
    msg.setTimeStamp(0.608546827206);
    msg.setSource(12920U);
    msg.setSourceEntity(48U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(37U);
    msg.type = 197U;
    msg.op = 14U;
    msg.request_id = 46816U;
    msg.plan_id.assign("ZDAPPMFLAFUXTWVFQNWMPEQASZUMDODAOPGYDINUMLWFGJEYBBCDILJYGXJQMSDCLULPKRAQLHXCRRQBCBPITHKLIUTHRFEJWNGGGMPXKQHILKZKGXQQNBQSKVUZCBWXUTPEWVBSDCONJEJSZEOGJRRRCLVUPJSAAZIVTMHXXEWNJHYAVXNGFKPSBWFHMSIYHCZI");
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FQDRVLRTOAOATLJWNETQMQGSFONPIBSJXPTIQBLXUCVNUHWBTDUDKNKFAPBXQGKRIXXTEUFJSGDZMEEFGMZIZOZLHVXAVUWGCCYZYPDJCTTHBCCRYWDBDEKQBPUYRJARLGCIHFEHTLYNNQCYTDFIJLSIRELPENWLUAVSKYMNKHOJNZFGUSYVYXAWRPEDRXMKVWJAZFGWKOBKUBLQOMHIAUSRZXEPQACKZDHXIGPMVGW");
    tmp_msg_0.param.assign("WBBVMYAIXOKQTMPYKJZGHKLSFKYYZKGTZVZCDATYPNWIKGMZEEGAOHVHEKZBEYHDSJ");
    tmp_msg_0.value.assign("MCTVFBBKYOLDAGNLWQJKBXEXSQRARVBRFDHMLOYASLIRZNCZCBPVTUAMWJOFGVRMSEUTSOUDTFJIACQURHMBOIGWOQKVGHTSPKFEOJHGX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VHGPQDITRKQKCFWXLVJIQSSSLFBTWAOQWFPIRUCNLWRFNKBXWSNEOZGMOMBPZWXNYOJRDJEIUDTQZPDYXLKXPCEGZULHHRIBIEQTEEYUPJHYOWVWHRTZYMKGWMQCXRTYVNHCOXSVHADMIWZFAUAZNBFVJRGVPDAHVZOGPBSKFBQAPGGCDFQDUTJOODRIOLQYENM");

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
    msg.setTimeStamp(0.89566619859);
    msg.setSource(63230U);
    msg.setSourceEntity(185U);
    msg.setDestination(38860U);
    msg.setDestinationEntity(251U);
    msg.type = 233U;
    msg.op = 57U;
    msg.request_id = 11108U;
    msg.plan_id.assign("NSEVLOJATGHFTOEMKSPCMENZEAIILWOUDGGHBHNAQLDFUQOSKRIGZIJYJCJCDNUVWJVMSKZKLMTHCCRAOMDVNWFOWYWXLUXUWAFMPYKOEYCYXSVLXTBRANWPMZOYGGTHRMKIBZXNLWYRDJXVINBFUNJRADFZTPSDAXQVPRRKEPXRDGXHWZEYXISJAMSCBZJFHBKKTVPBJHTBFHGANICPIKWUQPFELTZQCCOFZYSOEVBEDTUIQBPLYQVSGLUQ");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 29943U;
    tmp_msg_0.plan_size = 691385861U;
    tmp_msg_0.change_time = 0.83532215865;
    tmp_msg_0.change_sid = 29416U;
    tmp_msg_0.change_sname.assign("KDJUYPDSHIQQGIZPSUNSYOZLRQBNUILWNYXDYEKURIGBKQRUQMJPOBYPFFMGRMAFBRZHRTLDLOGEFJHLNWVRWWOETHMKZXZKMKWUVJIMSAQVAVVVCGQGKPGXATCZDVSHYCJXHJPJLDABYMEKLBXLDHEECSCIJFXHIJUUTTKSFCQFOEUSTUSNAADGWSMZPDZLRHGQMAOCWZNXBJWVPTAERRBFDINLQNOBCBCYO");
    const char tmp_tmp_msg_0_0[] = {73, 68, 50, -106, 106, -81, 110, 112, -101, 67, 30, 31, 103, -72, -36, 91, 89, -36, -63, -56, 57, 105, 18, -105, -45, -63, 78, 98, 79, -41, -68, -119, -97, 27, -26, -108, 81, 77, 60, 113, -105, -108, 30, -39, 122, -50, 29, -30, -97, -53, -77, 17, -86, 51, -45, 126, -73, -15, 24, -109, -43, -95, -93, -48, -55, 125, -80, -14, 124, -67, -71, -97, 49, 112, -34, 48, 39, -27, 26, 39, -12, 91, -41, 55, 48, 74, 96, 7, -22, 63, -61, 26, -16, 81, 43, -19, 0, 104, -14, 14, 93, 109, 6, -108, 66, -50, -82, 46, -76, 97, -70, 10, 115, 75, 106, -39, 16, -128, -74, -40, 25, 58, 86, -128, -24, 42, 88, 96, 23, 84, 27, 53, 25, -49, 55, 104, -71, 64, 94, -128, -87, -92, 107, 64, -83, 4, 6, 45, 10, 43, 59, -44, -21, 17, -126, 93, 46, -72, 95, 72, -70, 41, -113, 26, -38, 76, -42, 111, -74, 76, -117, -81, -9, -121, -83, 109, 61, -90, -8, -10, 54, 66, 46, -46, -48, 111, -103, -6, 50, 6, -20, -127, 93, 12, 119, -109, -71, 68, -61, -122};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("BNCYXVSXDROEHDBFRMTSKBNQAIIMKOCINZMXFARJDPAVPNYZUXVTKHORTEROAHEOBCCYWDQGKHKRTOLVBJVAPSBMWRSGLHIEPGRTVUUEUYOWYIWPFSZDPWHNLLUGVDQUXWMSLBIHTEGXLZJKWIQNFGLAAXFRSNPDCUMLPAYYVDWCKKUIKCPQJKTY");
    tmp_tmp_msg_0_1.plan_size = 34805U;
    tmp_tmp_msg_0_1.change_time = 0.0531599590858;
    tmp_tmp_msg_0_1.change_sid = 27035U;
    tmp_tmp_msg_0_1.change_sname.assign("BTMUGAVDVLTFIACONSAMUASRU");
    const char tmp_tmp_tmp_msg_0_1_0[] = {-47, 51, -29, -89, 19, 124, -38, -22, 124, -56, -26, 122, -60, 50, 0, -96, -101, -86, -105, -85, 2, 13, -94, -70, 101, -43, 120, -99, 98, -122, 18, 19, 108, -102, 94, -123, 85, 59, -118, 50, -32, -8, 28, -127, 58, 5, -15, 81, -78, 54, -93, -87, -39, 16, 20, -64, 18, -27, 80, -40, -63, -35, 18, -75, 31, 22, -50, 102, 32, -77, -125, 104, -1, 90, 126, 7, -1, 18, -69, -45, -36, -46, -10, 90, -41, -63, -105, 118, -101, -7, -28, 4, 103, -2, 48, -1, 25, 18, 59, -62, -16, 105, -66, 36, -70, -124, 1, 3, -107, -66, 123, -10, -110, 52, -93, 123, -99, 107, 11, -86, 19, -61, 91, 116, -108, -92, -54, -71, -57, 22, 57, -62, 13, -63, -107, -118, -107, -23, -19, -102, -11, 22, -70, 17, 41, 82, 34, -80, 86, 39, 99, -24, -103, -57, -111, -84, -87, 19, 38, 25, -104, 83, 57, 20, 78, 57, 72, 47, -81};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GFGHXUTBSNBOCWVFCWXRURHQFSVIVVOEJSLEXNMDLOGVIZMPMMVRWYTKBLSXMHEDOCELRPTSJYQFRDVDTWRSRFLWQTRTKHBXYIIYKCQZVZABQAKNOJMUZCLNEMPEFVGPLHGDEJACBXUBRHLXLGARGKNNJDGPJOWIUKTEUCZBLPJKMQFJFXMIJO");

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
    msg.setTimeStamp(0.82232272087);
    msg.setSource(25864U);
    msg.setSourceEntity(238U);
    msg.setDestination(11578U);
    msg.setDestinationEntity(89U);
    msg.type = 200U;
    msg.op = 97U;
    msg.request_id = 39111U;
    msg.plan_id.assign("NKZUNHJCNMFFSPRWDCBSQZHVLSSZYMDPSFVTQYSUAESHKVGEBLYGDHHGTRXWCHOJLLVBYCQJWDGQXXVIVIUBAIATAKRQAPOTPGPFKLLUZLUYYCVETCDZPEYXYXODXQFIJGYWRAKHOUHHLOTZCNRMNMWJFFYAKGMNQK");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.480901347439;
    tmp_msg_0.lon = 0.870835903759;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EKKSHNMUZOIPCACSJJUZRTDVXLUXLBQFZDAYZRMSDRTZHSGXVYBVEYJEXVKMMUWJTYBCNDFYLAHNZPYQFOLVETWTCLQIJXZRIWOGRBKFPDMFSBRAEQESBMQCNHVHEKUVJTNFWACXCMYSIHDIWJLOTAPZYUKHGXKAIJRZWUDQLLRHHEANRQOWCUFGDXRVGPXYMKIOCKFNCPUSHOSAGMBJSDBDXOPI");

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
    msg.setTimeStamp(0.835990848678);
    msg.setSource(19069U);
    msg.setSourceEntity(176U);
    msg.setDestination(27316U);
    msg.setDestinationEntity(8U);
    msg.plan_count = 12990U;
    msg.plan_size = 2025146211U;
    msg.change_time = 0.239156310491;
    msg.change_sid = 39628U;
    msg.change_sname.assign("DLRMIEYODGCLXXYJAMPXOZBKDFDHRNXHJKUUDBGSISTECXMYOQBQFFSDGSJIEDPKNHSKCPZJF");
    const char tmp_msg_0[] = {21, -122, 19, -80, -11, -56, -41, -30, -41, 37, -73, -89, -97, 120, -96, 94, -54, -108, 84, -52, -9, -85, -40, -78, 43, 24, -106, -59, -94, 6, 50, 123, -40, -14, 73, 69, -11, -96, -105, 97, -44, 28, 74, 77, -80, -92, -4, 123, -109, 54, 49, 65, 53, -1, -122, -19, 97, -58, -61, 107, -102, 20, -121};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HZJYURJNXPOHTLKYXIYANDJMBNNHWJVPPVQGZMLOFSATWGZJSZVEQHWERBOZPIBQMCKAONYXMKFZLRVXDZUXUL");
    tmp_msg_1.plan_size = 15829U;
    tmp_msg_1.change_time = 0.848101256651;
    tmp_msg_1.change_sid = 29406U;
    tmp_msg_1.change_sname.assign("KHWXNRJCIXQWMIPGCOFVEPDCHWIFBYEHNWBULLWETKCUZLFGP");
    const char tmp_tmp_msg_1_0[] = {39, -40, 35, 51, -2, -11, 72, -63, 124, 122, 76, 71, -108, -116, -128, 33, 70, -109, 109, -32, -57, -68, -118, 103, -65, 20, 73, -20, -119, -63, -98, -19, -13, -53, 21, 110, 2, 30, -112, 20, 124, -46, 46, 118, 53, 103, 21, 122, -109, 56, -124, 36, 62, -59, -96, -101, 2, -121, -81, 92, 126, 31, -94, -28, -77, -59, -42, 11, -49, 10, 123, -125, 6, 86, 107, -25, 31, -44, 71, -78, -110, -16, -12, 22, -118, 18, -54, 2, 55, -37, 54, 76, 117, -60, -111, -57, 110, 121, -66, -66, 93, -86, -72, 98, -107, -109, 120, -16, -122, 124, 108, 49, 15, -98, 68, 48, 41, -78};
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
    msg.setTimeStamp(0.4814929297);
    msg.setSource(25183U);
    msg.setSourceEntity(49U);
    msg.setDestination(27995U);
    msg.setDestinationEntity(96U);
    msg.plan_count = 57990U;
    msg.plan_size = 8195367U;
    msg.change_time = 0.0462073060067;
    msg.change_sid = 49549U;
    msg.change_sname.assign("LMCHNPCGJXLPJAZZSWREVTWKIWHDWDNCWGMIONLURHAIBNKWMCQOXSKJIREPZWUAVQERTAZZPDVAUVCLOOBFTBEJZTGKLKPLYJCBYSBFLNEPTAZVUDMHVMPYJBSGQQXXKRBRYTQMMMMNYSNRJJVMXDYGAUPFLCINGBYSCXTOQXWXTOUWINHIJEGKVAZYKKOFSOASVWDDQEHGRUJNEDEUD");
    const char tmp_msg_0[] = {9, 72, -15, -53, -62, 80, 84, 6, -65, 117, 13, -113, -75, -123, 114, 50, 15, 81, -81, -6, -14, 103, 109, -77, 18, -38, -48, 57, 75, -60, -27, -20, -5, -114, 1, -93, 100, -93, -86, -69, -21, -7, 67, -120, -66, -60, -120, -69, 78, 90, -55, -1, 15, 1, -42, 13, -2, -68, -63, 81, -119, 111, 3, 118, -40, -91, 60, -44, -47, 89, -36, 105, 27, 52, -37, 25, 24, 121, 79, -15, -11, -103, 116, -121, 25, -100, -89, -47, 38, -89, -124, -26, -7, -2, 53, 34, 102, -7, 122, 105, -99, 51, -2, -55, -21, 12, 35, 76, 16, 81, -125, -81, -102, 91, -112, -86, 125, -6, -28, -99, -87, -125, 11, 81, -100, -8, -87, 51, -44, 9, 119, 57, 114, -33, 76, -80, -2, 1, -120, -109, -46, 30, 97, 26, -46, 106, -56, 124, 110, 116};
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
    msg.setTimeStamp(0.616900746417);
    msg.setSource(22191U);
    msg.setSourceEntity(113U);
    msg.setDestination(41248U);
    msg.setDestinationEntity(57U);
    msg.plan_count = 55232U;
    msg.plan_size = 3848485055U;
    msg.change_time = 0.10340770984;
    msg.change_sid = 46435U;
    msg.change_sname.assign("VQCGJBKOAEIENKTNAHDHNPMVQPGBMQDYUTIRUZMHWOTTKASUXNLYBVCLDKOKYRERXWXISYPVOFCHXEGPULOVPXURSQQQABKDDJWBWLPWYRODLGITEHARVRITVPMGDDZZNVIZWFHSAGTUEKNLZXUFFKZAYCQLBUT");
    const char tmp_msg_0[] = {61, -128, -50, 69, -54, -79, -89, -110, -114, -55, -124, 9, 103, -3, -71, 46, 75, -6, -36, 11, 27, 66, -16, -88, -76, -48, 106, 23, 57, -45, -51, -93, -52, 96, 18, 42, 79, 106, 106, 80, 32, 84, 125, -22, -13, -22, -51, 81, 3, -14, -29, 19, 34, 1, -2, 1, 119, -110, -60, -5, -43, -40, 6, -14, 119, -4, 123, -119, -23, -116, -42, 99, 17, 36, -46, 102, -2, 112, 87, -50, 55, -63, -47, 66, 120, 4, -52, -24, -96, -43, -121, -7, 2, 10, 98, 65, 113, 69, -58, -49, -65, -98, -57, 56, 46, 26, 82, -126, -10, -4, -105, 72, -35, -72, -77, 19, -38, 96, 34, 125, 95, -70, 10, -48, 62, 120, 126, -75, 65, -16, -26, -12, -120, -96, 102, 101, 87, 103, 50, 116, -116, 35, 104, -46, -21, -26, -97, -77, -57, -80, -75, -88, 65, 111, -24, -8, 89, 33, 33, -47, 41, -53, -51, -39, 78, -1, -68, 115, 116, 0, 62, 14, 90, 7, -88, -96, 84, -47, -58, 66, 31, -80, -87, -37, 20, -10, 19, -128, -28, -17, -3, 28, 30};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NAQZYIJOMLPQBSGKDREELLMRHGVQCTKPKTHSIUQREWBDCFDOZAGFWGYZDIVNYGMSFKLUVJGQSKTYCOCXCFUXAKJFXHFPYIUAXVHFTSMKWCAEWTSHZMCFOPAZMYAOQBUDFUJJGHLWEDWXNBQPTPHWKLINXV");
    tmp_msg_1.plan_size = 32992U;
    tmp_msg_1.change_time = 0.271235238734;
    tmp_msg_1.change_sid = 30575U;
    tmp_msg_1.change_sname.assign("TVDYVHSKIKTMIYANADYQBYLKPWDBOEMFHUMURGCTLNJYEQNHLTRSZMDCARKCZDOHGHYZHLDWGWPTCASQSCYTLJZXQKSEKWITDGCRPBIZPDWLRMQICJASGQMOLUQMRLGINZJGXPRMO");
    const char tmp_tmp_msg_1_0[] = {-128, -3, -104, -103, 111, -63, -22, 0, -6, -61, -22, 25, 20, -63, 95, 111, -10, -94, 118, -67, -12, 73, 100, -10, 85, 74, 123, 50, 7, -101, 17, -94, -52, 60, -30, -116, -6, 95, -72, 14, 101, 62, -19, 49, -120, 0, 119, 6, 123, -7, 90, -119, 6, -84, -112, 54, 3, -34, 55, 13, -43, 107, 89, -60, 34, -40, -113, 86, -43, -89, 123, -22, 33, -110, 45, 13, 12, 105, -10, -14, -65, 70, 78, -43, 37, 15, -38, -122, 118, 77, 54, 46, -106, 111, 110, -44, 49, -105, -100, 73, 35, -24, 94, 17, 8, -72, 70, -21, -2};
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
    msg.setTimeStamp(0.176686481005);
    msg.setSource(4854U);
    msg.setSourceEntity(249U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(43U);
    msg.plan_id.assign("ZGCXHTYVAZEKEFHPTKMOITQUAGJHUPIKUYMPNVSMWPCBGLRYRKXXMQJJOJDKUNKFSWUGWGASXATZQANPSVDKRMICQ");
    msg.plan_size = 6987U;
    msg.change_time = 0.397953421172;
    msg.change_sid = 23747U;
    msg.change_sname.assign("DMXXEVKVLHCVIEIAEBDNHFPDJYTSUWAKNJLNASUPOAEPDWLDBQINTAKZBNIKAHSVDRZKFGPZOSG");
    const char tmp_msg_0[] = {104, -87, 8, 57, -115, 1, -100, 88, 55, -39, -40, -113, 65, -15, -64, 109, -61, -122, -28, -74, -49, -20, -12, -61, -110, -80, -98, 88, -28, 73, -46, -35, -54, 7, 6, 96, 25, 124, 92, 89, 30, 27, -20, 25, 64, -22, -23, 116, 105, 35, 3, -79, 101, 114, 30, 115, 5, 5, -14, -73, 93, -65, -1, 95, -98, 17, -27, -59, -56, -72, 103, -53, -61, 6, 92, -101, -24, -104, -42, -126, 125, 20, -83, 104, 114, -21, 113, 61, 122, -74, -36, 74, -118, -7, -12, 55, -107, -23, -51, -12, -64, -46, -123, -50, -104, 119, -79, 35, -65, 81, 88, 59, -82, -13, -67, -58, -120, -23, 102, -27, -104, 103, 108, 109, -117, 96, -96, -13, 5, -8, 99, 63, -86, -5, -33, -10, -65, -85, 99, 0, -57, -88, 101, 72, -34, -6, 89, -81, 102, -51, 51, -88, 84, 109, 75, -94, -18, -123};
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
    msg.setTimeStamp(0.197148664619);
    msg.setSource(18313U);
    msg.setSourceEntity(212U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(16U);
    msg.plan_id.assign("EVXGPPAQAYXEUHNGMCXLCESKVX");
    msg.plan_size = 17968U;
    msg.change_time = 0.928809211326;
    msg.change_sid = 17427U;
    msg.change_sname.assign("QAMMCMRVYQMDAHSNQCUGWOJSXKTJFSTYNIWHKUUVEBXJRQQQWOJWDXCEDVPJVAIIQBMNHERETTDNLVTCDAHITVSPKSRPDHTCWHCJIMFHEFIEZHSCNNLLLLGOBXVGURQLTFSBJIYEPUGPBDHZXUBGBPUAEZOUWWCIZPLVFJDULYAJZFMVRREOQSQRYCFFVDAYNOXPLPUIWZJXCKKNOXMAGGZ");
    const char tmp_msg_0[] = {-46, -106, -98, -104, -102, -26, -16, 91, 3, 106, 71, -75, -63, 28, -15};
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
    msg.setTimeStamp(0.928146980875);
    msg.setSource(56187U);
    msg.setSourceEntity(169U);
    msg.setDestination(31017U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("ZOJOKSQBFCLXRLNESTFZBIPNTDKULFNDJVVVBDEXKTAHLUCSVYBCRRJFEEMVBGTMQGBTIHIOMXBYGREJCORANEDCSWPVJYNPJZGOTWLIAVYOLIUWOWLJGMTDIQUQVKAZXZHGMDYIANNMSWXGPHGWYGKTFDSUVYHCEZUQRUHPAZZJOFDKEMKWNQHFDCHYENULOABPARSXFIHZXCFQCQHTTWOPRJMUPQGLL");
    msg.plan_size = 22067U;
    msg.change_time = 0.678552378202;
    msg.change_sid = 20863U;
    msg.change_sname.assign("ZLKGXOJLPC");
    const char tmp_msg_0[] = {38, 66, 14, 114, 112, -90, -116, -14, 2, -2, 82, -38, 51, -87, 84, -75, -100, -85, -70, -31, 20, 23, -117, -128, 90, -78, -128, -109, 89, 54, 16, 126, 50, 88, -75, 10, 31, -53, -20, 14, 33, -93, -74, -34, 32, 54, -113, 94, 126, 87, 107};
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
    msg.setTimeStamp(0.193816637472);
    msg.setSource(43853U);
    msg.setSourceEntity(81U);
    msg.setDestination(13750U);
    msg.setDestinationEntity(153U);
    msg.type = 234U;
    msg.op = 214U;
    msg.request_id = 5873U;
    msg.plan_id.assign("WJEURGHSZCYAKKSFJKXIXUXGCDRRBPXGWYMYGWVTMIQUQWAAEBBT");
    msg.flags = 27990U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OOYMDQIFLUSLBLIGLKTZMXENWZCBUNYIJMSAFHMYKEXQLQSJOUUYCQNFEQAGNOZVJCOBKEVPQCLEVWKICSXJWOAZPSYNGZSAFFPKWHRTIRTRCFZRVEUAVVHXOUYDJJWXBEIGEUMJHXNBRDHDTZGPDRKFMMCWJFGRYHSMGZXBHSTTB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SUXDSNWWESZAIZZWBVXVFTAJPSCSVSOHZXCIIYARNDCRSGNLATOBOLJFHSBKGWXCBOMRVFPWVIXUSXSHIZGTLWOMMPBCYRZHPLLQLYBUAYQKJGGQUQRUOGWQUFKFIHMKOMQTTZBPXZIDNANTXEVRYTRYHDHKHGIDDYACVKKYAJNHOEJECCIQYFDJ");

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
    msg.setTimeStamp(0.55583589925);
    msg.setSource(20192U);
    msg.setSourceEntity(106U);
    msg.setDestination(41992U);
    msg.setDestinationEntity(82U);
    msg.type = 2U;
    msg.op = 249U;
    msg.request_id = 51292U;
    msg.plan_id.assign("MBSLNSZEJHOCAXDHNRMAAMSXJCXABSHWSAJHMEFDOGLSTTYKSYWSIZQUARVQUICIBOBZZWSUKVHEPEUPTPMLPJILHPTFYJLITGBGCWJRXDJKCODQMBNJFFONTKVYBUEDQEGCDRIIWLVUPETQNZVGWRWKGGVPRBQAFITOE");
    msg.flags = 50167U;
    IMC::NavigationReset tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XGEVPHKAEHDXONGIPUGZSLZRPOHNGNSPCGVDAEWBGDCNURYCLKHJFVUHTGXRUJUUAWVBNDIBCRZPKTJRHQNTJYSGUSKXFKHADBZC");

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
    msg.setTimeStamp(0.604184780495);
    msg.setSource(46801U);
    msg.setSourceEntity(116U);
    msg.setDestination(47219U);
    msg.setDestinationEntity(215U);
    msg.type = 3U;
    msg.op = 185U;
    msg.request_id = 9318U;
    msg.plan_id.assign("JDTGXBBJNPFKPROSIIOKSYJGYWULVTKGMAFIAAWHYQVUTEZUXMPJRVTYHMZYCNZVKSAHEDFNSXBUFHVWAGXRONWGYQMSSMMWNYUMCTZGAJMLZPXBXMFRHVCOIBPBPEBBZVDUGEPXYKRQRDFTHCSTCDKLEHFCCOBVNLKADNZQTPGJDXL");
    msg.flags = 32702U;
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RDOIJWPAMHYZXKLQSY");

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
    msg.setTimeStamp(0.339360858784);
    msg.setSource(63659U);
    msg.setSourceEntity(142U);
    msg.setDestination(5380U);
    msg.setDestinationEntity(49U);
    msg.state = 77U;
    msg.plan_id.assign("LGAGRXAKKXJFUCNFUMNTBHRUGFOYQAPVFOVXMXUNRGAPTNNVHTEGEEDDZBT");
    msg.plan_eta = 1578163298;
    msg.plan_progress = 0.705898801095;
    msg.man_id.assign("QLDLPKPQTQOMELEVNJOHUSAHVRJLAJGHOWKDISCYHLLUUXMDODLMRYRGORIIBPKMXBVJWEQFVMSEWZJYVSCBUATFMKLHXJNGZVATUNMUBFCWXAFIEDCLNBQFFCGYDTZAXNGECXBDOGUPMBHMWOGWYTPNAQJUGFSZWQAEPHQCM");
    msg.man_type = 62598U;
    msg.man_eta = 467888005;
    msg.last_outcome = 45U;

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
    msg.setTimeStamp(0.599968064672);
    msg.setSource(58609U);
    msg.setSourceEntity(203U);
    msg.setDestination(37196U);
    msg.setDestinationEntity(216U);
    msg.state = 233U;
    msg.plan_id.assign("JVTYZFGDKDQQHCHESROURNSQBLEEHDWCUPKGDOOVVSGZFEECISGJZICZNYOVJHQZLOWBCWXMBAWPTULDDOTMWVTSITPIHIMMMPCXPWTBFJJLUFIYYIXVSGYXQFRHDHKGLYQXYTRBWFAUEAXDSYQFOWDBNPAGYSMVMNZEHHDITTRNYLCCFELPRQLXZTXMKAKNGIOBABNBNGBONZKIURAXPSKUVLUSJGHRVRKAMRFJPANOXWZFVJWQJKKCUZQJL");
    msg.plan_eta = 439304092;
    msg.plan_progress = 0.344088724748;
    msg.man_id.assign("KCGRBNKWSPWRBJNNDBVZMNCTTAYQBXYXFRLTPZAWYKYPLOCJUBCRTIWTKAOLHHUJMJFOOBHULZUJHDQQVLGOKIRZEFIDOQBDLCTPIESMYUWMVNHDJDQKNPGVYRWHPSCEXBNCITIXSQAHSQMMYEGMEFMCIQSWXAFXFRJSDOCWDTZQOAIIHDAEYVBUVTRKLERFJGZOPAN");
    msg.man_type = 12443U;
    msg.man_eta = 74298833;
    msg.last_outcome = 192U;

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
    msg.setTimeStamp(0.332430823478);
    msg.setSource(4578U);
    msg.setSourceEntity(130U);
    msg.setDestination(35130U);
    msg.setDestinationEntity(157U);
    msg.state = 84U;
    msg.plan_id.assign("TSJJBSHSXXBHMYVKWUSCMKNAIWEDZLCKQXQRIFHUNILE");
    msg.plan_eta = -148418203;
    msg.plan_progress = 0.442004331299;
    msg.man_id.assign("HHNGJXFQYXKBZKGLYGAMXZJWXKWXBAVPNJQDMQZXTPQOSWRMBKVIZZRCUURSQRESSEIJFVHVFGSBMIXIJWMOYEUEOEWQURULKYVFJETJZMEMGFQRBRPNCSRDVKCNCVPCIEATLTGODIDDLWD");
    msg.man_type = 33971U;
    msg.man_eta = -1999787047;
    msg.last_outcome = 79U;

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
    msg.setTimeStamp(0.137573736406);
    msg.setSource(50217U);
    msg.setSourceEntity(190U);
    msg.setDestination(54819U);
    msg.setDestinationEntity(241U);
    msg.name.assign("UFTUPUHTAGMIFRJEQZZVHTQMKBNFIBG");
    msg.value.assign("XNTJTJUNHWTAQPVJGLSVFOSGWADDZUHDWNLUERPFFSUXBGIATVKIOJRMIONYGWGSUBUCDLZTAZCMVFPZNPDXVCAGIBPJMRQWHKZRGUNWLKDDVVOHDIMJNKEQZZFFHMATOOEMRYULNWXVAXSOEIDXFZRYSQQJCLWY");
    msg.type = 89U;
    msg.access = 195U;

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
    msg.setTimeStamp(0.338630353182);
    msg.setSource(57447U);
    msg.setSourceEntity(130U);
    msg.setDestination(12481U);
    msg.setDestinationEntity(241U);
    msg.name.assign("AWKUBYTKKBJQPSVKONSTMZPYQMQOEZUH");
    msg.value.assign("POHOKSZCQFMGWRMHNPLGEGOFGIWUUXTBSKTKIPGZBCFKZKVNWXDVXKOWJURRLXQZHHPTSBCLGMEUMVBOVPAUXPFASFTVJBNXNQNZEQUHFLODKUYQVYNHMSNAYFSSQYCXHJYYHXJJCRSJEFWBDPIDDCZDAUTUTZLIAMLZDIOEJAHJYRRARKJQEBZUODWG");
    msg.type = 235U;
    msg.access = 52U;

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
    msg.setTimeStamp(0.0771412152194);
    msg.setSource(1510U);
    msg.setSourceEntity(128U);
    msg.setDestination(5170U);
    msg.setDestinationEntity(146U);
    msg.name.assign("ESGOJLJFKFZCCOVHPYQSNIZRCXHMXWMTDURJCEXIXFZTPSMGUUNXLQQFMYEQRNJRGZUTVBGZXSAWVMAFWYRJOFIXPRKKQSNBZCIJOBDIZSILNKJKQAUBNFYVOIGWOYTLVDYKMGETDDDOGLZPTBXWFWVHHYIEHUKPSLTMRCGNQHRBOKQHAANKTDVLPWJLEVAZPGCPBHMUPWBKVAUPHCTXVXZJISDMTCREIJWLCOUBFSBAWNEYSFELQU");
    msg.value.assign("LRGISUWSVHUKELCRRZZKORJRMWSGVYUFKINVAENBUXMKPOKAWTFKJNQLLJNCIWOZGPOTMCCJTYQOALWSRFVNXDXTHMHQSAGPQEEUIWNCOZXTDZJH");
    msg.type = 139U;
    msg.access = 65U;

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
    msg.setTimeStamp(0.456948519553);
    msg.setSource(32423U);
    msg.setSourceEntity(7U);
    msg.setDestination(11631U);
    msg.setDestinationEntity(235U);
    msg.cmd = 4U;
    msg.op = 156U;
    msg.plan_id.assign("PCRACBHYDFOTAILJOQMNITSUAEYEONHZTQDXWJIBHUOCVBLBGXRXBPDSHQVCBEJRMQNEIPRYVFMXRYYKGNDDBTGCEEJDNIAIDOZYPPRLHVUJJKELVCASHXSKKKMZVDVWOGSAFSRVWQHFKPNUZZXHWHEWISXAUYOOWJZFGHQYXOFZUJCGGLMQZPCQQFRDSMFCZEWNNFUJBAWAGGLRSYVPUTPYQSFJWXOL");
    msg.params.assign("BENQKPRIGXQNPVFVOQTVEQGZBRVGUAQOZZFYAXPDNDCTLUBMJXTEHWBKIWNXRYZTSHGWSTIJHUOXTUEOXHLYGPTKJJJVFBDQYEDCQHIFFLYLCSD");

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
    msg.setTimeStamp(0.462396655093);
    msg.setSource(2906U);
    msg.setSourceEntity(76U);
    msg.setDestination(3833U);
    msg.setDestinationEntity(153U);
    msg.cmd = 86U;
    msg.op = 195U;
    msg.plan_id.assign("NXRCHVLHLZOFPUS");
    msg.params.assign("CDEVMLQXUBUMYQAFBNDKXPMRGCKFCXAOHXZCTTSWFKAJQDGQNFHEQTJNR");

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
    msg.setTimeStamp(0.908993162259);
    msg.setSource(2003U);
    msg.setSourceEntity(244U);
    msg.setDestination(35791U);
    msg.setDestinationEntity(185U);
    msg.cmd = 180U;
    msg.op = 206U;
    msg.plan_id.assign("CYIUMZDOJWSFNQGPNHWJEOWJJEB");
    msg.params.assign("TZYBDJBSNEOCEUUGEQUXCNSKXWRDHKEDSYTMRJOFKVLSCLZQYFNUDTVFEYDVRVUQEMQPRXPHPMZGLRKYQUFKGJAOKLSIBWLAVFQOXDPWGCEVBLJWKRXTNVFVZBDRWEBIUKOIASGIAZSTTIZVLOAWHGKLRHNBGSMOMBXPIUZJHCQZKLQWUHYTQJHDFAYICZMJTOYWSCPJAWENNPROHNIMBGBMNAYIC");

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
    msg.setTimeStamp(0.5814097431);
    msg.setSource(44681U);
    msg.setSourceEntity(104U);
    msg.setDestination(39225U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("ELKVEGBNXSLMFMZFJSTFHQRNUKPFELQUEVOPOV");
    msg.op = 250U;
    msg.lat = 0.444444475118;
    msg.lon = 0.210396006489;
    msg.height = 0.453668041067;
    msg.x = 0.60480861589;
    msg.y = 0.243404227376;
    msg.z = 0.0776138043166;
    msg.phi = 0.0285878136503;
    msg.theta = 0.450473719177;
    msg.psi = 0.987703224246;
    msg.vx = 0.180953776756;
    msg.vy = 0.195929827881;
    msg.vz = 0.642408514037;
    msg.p = 0.906624320005;
    msg.q = 0.999326308493;
    msg.r = 0.797927906661;
    msg.svx = 0.250652758655;
    msg.svy = 0.196193651067;
    msg.svz = 0.102579728659;

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
    msg.setTimeStamp(0.413205781824);
    msg.setSource(54605U);
    msg.setSourceEntity(205U);
    msg.setDestination(55191U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("EFUZHGZRPPJFCVGNZYEYBHLUKLNBDIPGRHYJSPEYBTJKCPXDWATHCLVAFNSBHYWKKWBFXEMIXVBIRSMAROUWSMUNIEIRKVJDMDHFQXPVTOXCKCFGNDWBLGXOMPISTDYNCOJNDWTMLQXPHOJUIEVGEHSXQRVGLTMMPXUAVALAYQWKRBEMDKLQQSQJNRIAZWOGOZKC");
    msg.op = 106U;
    msg.lat = 0.833247386522;
    msg.lon = 0.490336297136;
    msg.height = 0.0503245117409;
    msg.x = 0.904234564641;
    msg.y = 0.0739069002572;
    msg.z = 0.940075123658;
    msg.phi = 0.712042238907;
    msg.theta = 0.183678258703;
    msg.psi = 0.426518021332;
    msg.vx = 0.165463110786;
    msg.vy = 0.680041102333;
    msg.vz = 0.572077787846;
    msg.p = 0.490231604425;
    msg.q = 0.811332874308;
    msg.r = 0.523788117146;
    msg.svx = 0.0467334630961;
    msg.svy = 0.673692370487;
    msg.svz = 0.344520619918;

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
    msg.setTimeStamp(0.533215710296);
    msg.setSource(63358U);
    msg.setSourceEntity(218U);
    msg.setDestination(12028U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("YZWHXDBSBMRWLTQVPJOUBIUOFQNWIBGYBMTLNQKOTVCWCXTZDAINCUOATCREADXFPBGEBFNHJLKKSCJNLHHADLRVVEZUXQRXAJOTGPYNPMSRWEHDSCKGGUVCPJVGJSZJXQSQSWGZZYTEHMZEYFYIJODRIPEUADF");
    msg.op = 31U;
    msg.lat = 0.602078799683;
    msg.lon = 0.248319426976;
    msg.height = 0.386957575439;
    msg.x = 0.448465331764;
    msg.y = 0.588318332353;
    msg.z = 0.345171273141;
    msg.phi = 0.910378669667;
    msg.theta = 0.215526118833;
    msg.psi = 0.0361912747617;
    msg.vx = 0.660058868085;
    msg.vy = 0.772992583255;
    msg.vz = 0.666348901481;
    msg.p = 0.177076708565;
    msg.q = 0.460964328535;
    msg.r = 0.0298164229103;
    msg.svx = 0.597878405169;
    msg.svy = 0.756963296522;
    msg.svz = 0.902790287665;

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.52616658655);
    msg.setSource(26529U);
    msg.setSourceEntity(219U);
    msg.setDestination(13573U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.67763434517;
    msg.lon = 0.995919648194;
    msg.depth = 0.167077977738;
    msg.roll = 0.867296467816;
    msg.pitch = 0.912283755149;
    msg.yaw = 0.236047987034;
    msg.rcp_time = 0.0495444489404;
    msg.sid.assign("UDGMKBVYMCNAOYGASLSSHEAZJILEPNYXTEKFRFDLJVJLHGQWQSFWWQOAMZHSQACNVGSVAHQUFFZISIPOQBLXBCFZMZCXZEHGHNBFROMHYFRNTKJGSIAAMBVO");
    msg.s_type = 54U;

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
    msg.setTimeStamp(0.968531591297);
    msg.setSource(27126U);
    msg.setSourceEntity(67U);
    msg.setDestination(23188U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.0937967355812;
    msg.lon = 0.0777447956403;
    msg.depth = 0.476700254999;
    msg.roll = 0.930479335493;
    msg.pitch = 0.743058519383;
    msg.yaw = 0.263386176544;
    msg.rcp_time = 0.460126171305;
    msg.sid.assign("CVNPIQUDYXLML");
    msg.s_type = 114U;

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
    msg.setTimeStamp(0.481746338325);
    msg.setSource(2980U);
    msg.setSourceEntity(125U);
    msg.setDestination(16381U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.123895829475;
    msg.lon = 0.259644576331;
    msg.depth = 0.166506444223;
    msg.roll = 0.643136329652;
    msg.pitch = 0.334209230716;
    msg.yaw = 0.0779386182217;
    msg.rcp_time = 0.610355990102;
    msg.sid.assign("SEHQXBPEXOHUOCIUROWSNBOZGSHVGZTMBEYDCMFVULPAUICJBBPHVAOTUEATZDSWRQWRDNVCACLBEEXLIXYJPYVAZKSIOBATFWVMCOERRGTKGTGVDNMUPKTNHKNWDGCIMIOJQTLYPWEMSWSDVRNDKLXAJTTCIKAWFGZPMJEHZAHJLVLNRFDUWPILBWQRGLHXAUJZQQJOQMRFHSUQGXIZCRQXFJVMYHFDYNYXKBPLUYKNEMKYIFBOZXK");
    msg.s_type = 146U;

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
    msg.setTimeStamp(0.790493613023);
    msg.setSource(14559U);
    msg.setSourceEntity(163U);
    msg.setDestination(14956U);
    msg.setDestinationEntity(6U);
    msg.id.assign("FOMDVBYFCTHOLTQVTJWRSMXMZCHJSZGWRQYDYIJBNCNYGZDXLTUFTARTEXCEEAHLIYLGNKUVYBQCEEOD");
    msg.sensor_class.assign("XPCIAIDCWANKOGELKGMDHJZKLRONIMLUJPKKCCQBYZKRARHBJZNTMRAVWGNSWOZLJYDLXIERSIYBMYGSMGCMSRBGMNEESQTFIECBVVZBLWEOFATUQKCHWPGDFIKWUNVPPYFYEDOMHCHBPUGWDBYKDOUJDXOTFVABBJAHGEZLFSUCOHXTNCEALFHQXVQIAIXZMKQIXFWP");
    msg.lat = 0.687127839327;
    msg.lon = 0.884316037228;
    msg.alt = 0.876074485058;
    msg.heading = 0.610618645141;
    msg.data.assign("TCLZLUTGBTVXIPVBGRERMPPWEZFLMMAHKFRZJHGFIFSUTEY");

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
    msg.setTimeStamp(0.00560516035411);
    msg.setSource(17613U);
    msg.setSourceEntity(178U);
    msg.setDestination(962U);
    msg.setDestinationEntity(57U);
    msg.id.assign("JSBXWIAOQMEEE");
    msg.sensor_class.assign("DUEIAGPAQHWWEIVEFWCWENZGZTFMMEOGQDHBKRXRUZESOKQWHLVGIOWNPIJYNYTAVFTGJHNDUZFSRLVDTZUBOTDYEJUCGWCOJXSSBCVZTLJKBAYYOSKKHRMMNADSTAOHJKYKSLQRWDUIIBYPBPCFGOCXOMRVXLCHRIMKBUV");
    msg.lat = 0.760547517303;
    msg.lon = 0.68799782902;
    msg.alt = 0.362312187577;
    msg.heading = 0.563271274104;
    msg.data.assign("OADIVQTEVOONMJXLPFWIVZRQJTIFAEGNKRUYRPBSIFPYKLECCXKKMXMKUMNLUYOPJVGTWQQZUHLCOGUEFEYASZILSHKXDWDOOCJRJCLBHVGVWTVQRSKFJFPZMTFNKBFTJDNVDATZYKEWGPJSZOAUQCDRPHLRTMQRSGIIYNSWMBINMDEQXWBDUZQEYDNFBIPSZWHHAXUOVJUWRLATXGSCLYIUOZ");

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
    msg.setTimeStamp(0.770011790136);
    msg.setSource(15598U);
    msg.setSourceEntity(219U);
    msg.setDestination(9517U);
    msg.setDestinationEntity(240U);
    msg.id.assign("YRBJTXGEXERXVLBRRJKSONKDPUMDFOYMSQBWNHGGVLLQCYBQOYZWZOVOTGWMXKIZZIKBLGNCGBZHUDUQKMSGMKQUCJQBIONSLSD");
    msg.sensor_class.assign("CLKGNHPDMVOYLSMESQGNONKEAYESLWBIIQITKGCLRYNWWJJTRTOOLXDBOEHUTXLAGSLGAYIUIXVTRUJPNTXBWPWWHPVOEHFYPHMSDDSAQCXMYFMCAKMUPPEJZNCKCTWIWLTHVSNEFBMUAIFVKODVYZNGQQASFABORUDFLKGHZKQFHRRMDPCDYSRFGRVIZUFZIVJXBTPMDRW");
    msg.lat = 0.476462275914;
    msg.lon = 0.124767119645;
    msg.alt = 0.430702326107;
    msg.heading = 0.154200526418;
    msg.data.assign("LFNRTHKCXBEFTRGCHNPYDTUGACDIEMGVZFLQJXOUOIFJNQIWLQEWUJZWCNXZRAYIPXJVGYGTRCZRXBRKVBCWGT");

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
    msg.setTimeStamp(0.734095810626);
    msg.setSource(8274U);
    msg.setSourceEntity(148U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(23U);
    msg.id.assign("WTEJFADGBBCNKWVECWZQPVRXCETJNOZQZUONXOCIOFDFUMRTALYGTEGYKMHDUYGIHQGMDAXBIEVHWRPCHMRSVGQCHVNCZRTVNOFKTJWIZRJPTNLLYMKJPLBAWSBGKWYQXPQPYLWDKKTSYDOQRSADZXLMAHMOLXGOPAFBHCYLUILUKBNQUVSDCOEWAUSSZLFZWJYXBSMPEVKFESNPHHXMADNEIFQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OWBSQIXQUKATQWLCVLLZBWHRJSTENYZWMICRRAWUBSMNWHDGFPMUDLPTAUCYVWVIKNNUPIKPQJOZZNQLSFHLTCGEUOBNFVLGOGADFBJCPNODBI");
    tmp_msg_0.feature_type = 126U;
    tmp_msg_0.rgb_red = 115U;
    tmp_msg_0.rgb_green = 61U;
    tmp_msg_0.rgb_blue = 111U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.816384277201;
    tmp_tmp_msg_0_0.lon = 0.274456114665;
    tmp_tmp_msg_0_0.alt = 0.635847768187;
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
    msg.setTimeStamp(0.175773697361);
    msg.setSource(1444U);
    msg.setSourceEntity(78U);
    msg.setDestination(44791U);
    msg.setDestinationEntity(71U);
    msg.id.assign("EKICIOZANTRHOFSQRSVJAFPBOQUBXYYVEAJGTKGCHZMKLTNYDPJFBNBCJONICZBUIGFAEPREDDMBFICMXLBURDHDVSRKCJASEVXHUPZWQYNXQACXPUONSWSYNQWOMTTISXJGRETYMSWRLLRHBTKDFNYYKUCCELMEWJRRMMEVFZIHBUPLQKGEDUMVF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TGUPUJCDIDOVMEFDJHFWDNGANLTLHRERBGVIGPTPIMJCEQRRDIQVQUJSOXMKIXZMGAGQZBCSUKBUNCDOHUHUIMSSSJWWWZUKNJEMLBHXXXBOIDVXZYYBF");
    tmp_msg_0.feature_type = 209U;
    tmp_msg_0.rgb_red = 88U;
    tmp_msg_0.rgb_green = 210U;
    tmp_msg_0.rgb_blue = 49U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.585519520018;
    tmp_tmp_msg_0_0.lon = 0.833375908616;
    tmp_tmp_msg_0_0.alt = 0.341910406344;
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
    msg.setTimeStamp(0.452904205606);
    msg.setSource(46156U);
    msg.setSourceEntity(87U);
    msg.setDestination(38952U);
    msg.setDestinationEntity(191U);
    msg.id.assign("OBEPIHZMPJRLSRBHXUHAVMIAFBNJZDDSOGIZCSMOXYKSFZQJQNTT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TQGSJBJPXHAHCUMWZGMMLZFLCRKHTPBFNNEXDYIQYGWITWESJAVWDRLZCUHOIPRBKMUSQLLPTWIOCNYJNVZRAZSUBBLQDRAMOBVKWPRFPNKARQLIOTWEFYJEQERTHCTOEYKQGNVHXGFSUFSMAJWHZVGCZKYBMNGODLNUGYPCBPSXGKHBRJLUNAXSHQUCBOIXCUPTXTYWMDNOXIFMVDYEYRQVICXAAZOPJZDEDEVEIVJJZWIMSKDXFLTFSKDQGU");
    tmp_msg_0.feature_type = 127U;
    tmp_msg_0.rgb_red = 98U;
    tmp_msg_0.rgb_green = 205U;
    tmp_msg_0.rgb_blue = 20U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.262236619458;
    tmp_tmp_msg_0_0.lon = 0.649704604711;
    tmp_tmp_msg_0_0.alt = 0.925819478902;
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
    msg.setTimeStamp(0.730544407069);
    msg.setSource(9354U);
    msg.setSourceEntity(245U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(58U);
    msg.id.assign("CLZYEEYTLGROG");
    msg.feature_type = 22U;
    msg.rgb_red = 114U;
    msg.rgb_green = 44U;
    msg.rgb_blue = 136U;

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
    msg.setTimeStamp(0.779630770169);
    msg.setSource(14731U);
    msg.setSourceEntity(4U);
    msg.setDestination(21047U);
    msg.setDestinationEntity(177U);
    msg.id.assign("OJFONXITXKKRSIMMFQROVOHQLIJWXHYVATVGTEDOYNNXUHTQMWQCNEKGDZUYVCBBGEIMVVEATYFUGBPSRJMLZCTBWLZLFBPRRBAGDICMLSLHUQ");
    msg.feature_type = 46U;
    msg.rgb_red = 83U;
    msg.rgb_green = 55U;
    msg.rgb_blue = 15U;

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
    msg.setTimeStamp(0.898934042159);
    msg.setSource(49144U);
    msg.setSourceEntity(34U);
    msg.setDestination(17157U);
    msg.setDestinationEntity(181U);
    msg.id.assign("DNULUVETIDZGLWROFQYUCWSVFOEPBNHKCJTHCNFURYHZXMPDIGLTYDAGLCCNJAURGIJIUOCVDBJBEGAHEGSXKTTQRVEKJNUBLPDGYWTIRMXAIPKPYBSKIMWWFZKPUSWARHAXKFPVQNOQXLPXMUHYLOX");
    msg.feature_type = 75U;
    msg.rgb_red = 138U;
    msg.rgb_green = 76U;
    msg.rgb_blue = 54U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.244697858456;
    tmp_msg_0.lon = 0.808571442138;
    tmp_msg_0.alt = 0.927633547729;
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
    msg.setTimeStamp(0.336906036565);
    msg.setSource(26744U);
    msg.setSourceEntity(2U);
    msg.setDestination(56360U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.488508725282;
    msg.lon = 0.810849879974;
    msg.alt = 0.296877922857;

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
    msg.setTimeStamp(0.138505733033);
    msg.setSource(19863U);
    msg.setSourceEntity(142U);
    msg.setDestination(21429U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.0795059503839;
    msg.lon = 0.733585056767;
    msg.alt = 0.639668826783;

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
    msg.setTimeStamp(0.557247329109);
    msg.setSource(43954U);
    msg.setSourceEntity(10U);
    msg.setDestination(35717U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.133271665891;
    msg.lon = 0.504249900442;
    msg.alt = 0.620338116516;

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
    msg.setTimeStamp(0.0659068589845);
    msg.setSource(1225U);
    msg.setSourceEntity(145U);
    msg.setDestination(58540U);
    msg.setDestinationEntity(135U);
    msg.type = 224U;
    msg.id.assign("UAUUEHLZKNWVLWRXLIJJYQEULXUFGXYNQOYS");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 180U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("XQGCRHCZDKNLHDALOXDOOZJQNTSICZNKMEPDTNGTISXQHHTFSUMSORFOOFPXLYDRUFVOJBQPJUXVMLVQJMIXFARAMUWCKFJFWRTDQXGREVCNDYQMMGAEXHUEVHJSDPERJHNQZPPMIFWFPYHUCSKPKDYRQMIIJBTIYZTSNLWGYORAECKZVYZBV");
    tmp_tmp_msg_0_0.description.assign("OFTXMSGXMWBMMYDAJDSNHYTQLKFGJXTVUKGMONWAWLEHPZIMKNSODMWNLFQPRKUCXZSPQPDDWAFQPZVBOINCMVBADVUFLRRXHEZICVZBJKJTSLHANUUQGEEWSEAYIZBRRVJKYHHCTYABYLDLKRGZYKSQCIZQZBYCEHSXAFXTNILURXXIBADVBMVWRLOGJHJCQUHFTXZB");
    tmp_tmp_msg_0_0.vnamespace.assign("LLBWXUDMQWHBCPEQEBNINELXCWQSNQSBGVZTZMRFESTOYCDJJCPCIRGLWUUXWPUJIHEMWUGDTNUJSDBTIHATUNEPZPIJVAKPMCYATWDKVNRAVXDVFLCEKYZQFHJTMQZDOXUFZFOXQYRGGNVJRCVEGLOKOI");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("YPAYXYJTMRKTVHDJRZCUFPECXSPLQPIBHNVFDIVZLLLWPZNBEWQTNMLJUFDKQGDUCKQCTKMPZMOCRPIRHGSWVQRFFOSFWESNEXTLKOSENUPWOJFXMOZQJMDBHEVVZFZSRDTHSLYKQBINKEYNPUYRGXWATBRGLOZOAQGIGHGTMABXRHSHDKYADRJGAXMBYNIIJWAYFOICWAAJMUBJFCUNEUQXIMLLNUZTVEEDHOOWVV");
    tmp_tmp_tmp_msg_0_0_0.value.assign("NQTQEGOMGNTQFBLUCALXBBRTUXDNKLULVCIBVOAZHQBPFCKZGEOJCVWCWAKFZRTEBFWJMLAIDXYIKYURSRBTNYQHAYGJWJMZBEAFINEZXCUZUKTSFTDHITSGPORWVRRYASYEQOZHHKM");
    tmp_tmp_tmp_msg_0_0_0.type = 146U;
    tmp_tmp_tmp_msg_0_0_0.access = 149U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("JPFZQIUYZXCDUEOMXAAKZSVNDHXAFOLJTJAMVBVKLHLUTNBGLZSOCEIEKIRPLBTWMDCQLKCXVSKGOIZGNYUNIELHIJOMYEUTKKQMSBECDZPPRVVMQWS");
    IMC::RemoteActions tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.actions.assign("EBRHAHBCUTGDYTBYGFWQPQHHLEADVFKXNKIPOIRXASAWKQBQMAJTOHCWXBRXKMZTJWQINDJJDZLRGVDEFMZIXVGMGQZUHHLMDPSLAAKFENHDRVZLCNZIBSUJEIMYSVKTCUSQBOPMYALNOHEYWXOQKZOPCVITC");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.11754102298);
    msg.setSource(22815U);
    msg.setSourceEntity(106U);
    msg.setDestination(29620U);
    msg.setDestinationEntity(131U);
    msg.type = 42U;
    msg.id.assign("DJYLQJKZSDSMOVHEUUYCSQCGOVXOSWFOTNWTAGIQERJKHHCQVVQXRIIOHGMCODENHEWNLMBBPPTGBTZUOHBQAZXWBLEBNRBVLVPDKGMBGUQSHHALRLMUZMUPZXWHJDKRIYTAPAYQGFXZPNYQGLIEKUENWVOWWAEHEJISFTTKVXIMEKAGFNIFPCWJDCALSC");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.371779921167;
    tmp_msg_0.z_units = 103U;
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
    msg.setTimeStamp(0.451673546602);
    msg.setSource(40690U);
    msg.setSourceEntity(88U);
    msg.setDestination(12694U);
    msg.setDestinationEntity(100U);
    msg.type = 45U;
    msg.id.assign("DWWYHHYERDLVYEQCXGIKXNEMGRCQKNCNAPTEOQCSEFKQEOFWKCFZVDOMTLZ");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.338427982434;
    tmp_msg_0.speed_units = 12U;
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
    msg.setTimeStamp(0.32574148199);
    msg.setSource(18968U);
    msg.setSourceEntity(94U);
    msg.setDestination(41955U);
    msg.setDestinationEntity(163U);
    msg.localname.assign("HSBYSLXGXXRHPDDHALKJNEECCBREOMIUFOMYTQGHBIYSKFXZXEBVECDLAPQELEMRYCCAMTXIFILKONXPAUENMUWNVDMAQGJGKDUFGTD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MLNZIBXSNNWSBYABMWDDPMJBXZUUVJZUYRITTLPAXAWWISSDEEHYDPVZGGMXTPAREUQWEKORDMHRQCCGROCKYBTLNIQVPTDFMZFLMUOWXQJB");
    tmp_msg_0.sys_type = 128U;
    tmp_msg_0.owner = 59335U;
    tmp_msg_0.lat = 0.0883896032452;
    tmp_msg_0.lon = 0.913446742707;
    tmp_msg_0.height = 0.962092239463;
    tmp_msg_0.services.assign("ZUEWYXNEXEHEGBUKXSLFQZCPKJPINASEJCUBMLDLSJYUYCOZBFJQLAHOEXKTCOOFFKUYYEBHDDKSMAMCUIWKAJJDVZMCCRAOHTBEWTRICBZNIMHQBIDRZDHTFHVKXBAOYDFWNTCRQZNJRPNWLSPXLSVGQGZRVXGGZSWMESLIRXTCIQOAGJLBKFONTPFUDFRHQVLPXGMTIHWGYNYQYNUOMIJPAVNWBUJTDSXQVRQEKUAVOKTGZPSAPHFGVYVRW");
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
    msg.setTimeStamp(0.124925773806);
    msg.setSource(2582U);
    msg.setSourceEntity(76U);
    msg.setDestination(53859U);
    msg.setDestinationEntity(14U);
    msg.localname.assign("FNTKPFHFNRLWUDWHQQYFZPGULTDUUKNBGUDOXMQESJNARZHNJRDYBNLLCVVBHEWCEJKYJAZBJDHLXIVDAWCDYYOGCAWGNGKTZINLDWKMVUKSBCJZDFKVRJYMCPHOCYSRFRFAVLRZPGWJJTTIQOATOMMUNPEQPIPMSSHMXBRETHXQVFCVGKQAFTUGOMBXOXII");

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
    msg.setTimeStamp(0.259112028748);
    msg.setSource(53582U);
    msg.setSourceEntity(72U);
    msg.setDestination(5208U);
    msg.setDestinationEntity(110U);
    msg.localname.assign("EJTDYXAJEJIWVGBJBFVTHCPPURTYSRXDSVCKWPPWHITHBBCXSCONNVDKIOQLSBPPCWTGEWDDNKERZTUAVFMEHQKZRGCGVPBOSFUWNHSGZKRQUFILTAAELGKPMCCLVMYWRJUUZEGHFRANLBMDNWFEQYWJTZIYJAQNYLXKOOKBYRGZIWQOQLOOZUIBBYZXIGRESTSAPHJVXMEZQAPJMXUDZDHANMFKSVOGKLLXUYXTMFISQNMRCFCVIHLQJNFYAO");

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
    msg.setTimeStamp(0.672863025016);
    msg.setSource(14921U);
    msg.setSourceEntity(248U);
    msg.setDestination(30081U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("UHWFWBXICFUKXTJZBGHVJVMJGGOWWRKLKCZVGTDEAANLSIAPWXFGXRYBNQQRVCRONIZHXSSAZTKAJHFMQMDGBITZMUXWGMPEAYIPOEHFWZJFRYHXDPSZMYPTODYBVOMLSQPNLSWFZGBEUHZNQIANREJWURUDLUQXQOVCDBBKYOSKISFCSTGMCEYYPUYNRJGEFLNKKDPYVCQBAOWKDLTALKM");
    msg.predicate.assign("BIXUXJWXMNGIRSYJQSZEJDGISJWBUBHVATUJRHHTWRUIYCCIDONLHGPPKDDULHVQDZMVUGHOVXONXAICBQNKHTLJNKFKUPOPVCJOMMQQRZLJXDIZSTGPPTNUDYW");
    msg.attributes.assign("XSIQNJUPXPDKHRZRFOZNFRCJDJFWMIGPOCXGTLULKHYAPCHVVNDRVBFRVBNSXYQKPROSXXKTBAW");

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
    msg.setTimeStamp(0.398111825167);
    msg.setSource(38094U);
    msg.setSourceEntity(76U);
    msg.setDestination(57842U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("JIPBHPXBRFJBFNIDPZLKKBWCNUIYHGDTMDVQHAYOSWEYJRERCBMBPZCWZCZHIQWSPGYMJQATLNXVHTNPATGIKIWEMDTHOFZIDVOCQXXUDULWAYQVTQCGDUFNTASZYHGFFULBOPLGQJEMUCAOZOIMLFGUAXMERLPGCBKAZSSPDFMWNJOVEQDJKRZENLVVWYBTBWPRRXOMEZCNXQYODXRSGFHAXYXNEWVKKSTACRHUJKOGVKK");
    msg.predicate.assign("PTBECGCMCUQJTGIYZRSCIACKYLPPAPRUZBQFLHFKIOSPXSDTPHJZUNMPXOHRVZRQDRNELYNIWOKVKESAWGBAFEOEPOIONWMEZEVJEMFTMUZJBYBGQGKXZIFHZIJHOVVTUJYCMXDSCFXNAXKLGQIATDQRULUWCRJDKNUPMUVRAABTFGXVZORPVITTGWHNLKOKHRSVMDOQUWBCLKCHZYEYNWSFQFDHML");
    msg.attributes.assign("XRGXWNMWCWMTHBRCIQQCMXEORLUDEMTNCQUYKIVDAZGJYIKFBRBZVPWZ");

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
    msg.setTimeStamp(0.846517165568);
    msg.setSource(50541U);
    msg.setSourceEntity(165U);
    msg.setDestination(1819U);
    msg.setDestinationEntity(113U);
    msg.timeline.assign("SLVNXSLITPGBQXKHXTLWWLUONRJTKAMQQZKWJDMRVIKASVCNARTFZJIMXGOKMPLUPPUILLZWDWYHSRMLEUBPHACEDGEYGGIVLFECPFUBPHBY");
    msg.predicate.assign("JTVLWOOTZKIJENMIARIGHODMXXOIUZSIVQCUAWRWVDUMXFCMLNRUPRCNGPJXSTFESF");
    msg.attributes.assign("LXYEOWFMVTIBJEUQUEDHVEWIPJLSHGZHFCAAKCIQXMKXXEYBQRSBXIVPDZTSCZXPFBMYXYIYFEPLSFOLAYGNPZIVLCPMMCBLBWXKQFOJQAUX");

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
    msg.setTimeStamp(0.78069769383);
    msg.setSource(53611U);
    msg.setSourceEntity(53U);
    msg.setDestination(34066U);
    msg.setDestinationEntity(76U);
    msg.command = 131U;
    msg.goal_id.assign("XIXBQLYTSSIRMHQWQSLEDDSMTCJXYBZYEMHASAEIXGJBRXACKIVVHLFVGCUWHRXAYIHNUKHKZTBTBFOWBNLUTTMIUGFASREIPVZGSVFNJMEQXUNOPQFPCKELHYTYYGJIZHJMDWONWGPDDCMBKR");
    msg.goal_xml.assign("CFRMIDWYVICPLPYAIMOLENWMEUCF");

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
    msg.setTimeStamp(0.1029409231);
    msg.setSource(35663U);
    msg.setSourceEntity(203U);
    msg.setDestination(38647U);
    msg.setDestinationEntity(244U);
    msg.command = 232U;
    msg.goal_id.assign("FFMPFOGXYMFUKVJQWWWRUFBWEGRLWDNYKNLPTNBIVGLQLPWDYANDTGTFHAWQJYPORDGG");
    msg.goal_xml.assign("OKGSDSNPQBIZZQIUUKTOWCTWSHFXFBABEPKVZRRSTLLVUZVQWZECIMDLAYUQTHYECTJTHXIQJRXDECZGAAUXTBIOWGGLJSHWNTZPRGEXYPHJKLAJZXNMGCECVMQDPHMVCUBYPZHKQYGDOVPAUROOQXISLILWKKHFMUHTFEVQHLDPLAPYKBBGFIWDVFSDBJC");

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
    msg.setTimeStamp(0.95763041994);
    msg.setSource(60039U);
    msg.setSourceEntity(228U);
    msg.setDestination(30582U);
    msg.setDestinationEntity(180U);
    msg.command = 123U;
    msg.goal_id.assign("HOHJKCSQNZQORGWFXEZXXBJRYPQHOMMWXMJTDFPOATIWPXZUKRRDWHSJYWBRXHIJFPH");
    msg.goal_xml.assign("QTYQTYLHQDLHZZXBTZTYDJFVDVKSRHXYZQJRBVZKDAEDNXIEVZAJRTKECFQVWGAHDNVRZPVJW");

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
    msg.setTimeStamp(0.731432119369);
    msg.setSource(27797U);
    msg.setSourceEntity(104U);
    msg.setDestination(43757U);
    msg.setDestinationEntity(9U);
    msg.op = 191U;
    msg.goal_id.assign("QVMHJYLEWKKEWNSWBJOSFZDENBUGGQIKXSHCIFQROJVWNGMFVPWPYTCKCIKQEZWPTXTLMROPXSAUZGOZGBDIFNMXDI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QTMBKYKKQTJORCEWLPIZPYLWOHWIUGEQHCGFSRUJBNXUN");
    tmp_msg_0.predicate.assign("KDRKTUGZBINZHRLXGPVADHEACEWGMIUIMCJAWJLKBQERYLXEVOJYARNFWUHQVLADGJWXMPPFXIQCZSVBDQXFHFGNMYXQLNOEUYETXHDQIOCCOOREVVSHVOPPHICITYLRKHWJYDCDLMTGTFXPYMTTNBQUJURKNVBVKMPDZWJIZSSZCQSBFSKHBCDHFSQGKNMBAARVYYS");
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
    msg.setTimeStamp(0.395594527733);
    msg.setSource(41803U);
    msg.setSourceEntity(70U);
    msg.setDestination(36834U);
    msg.setDestinationEntity(218U);
    msg.op = 109U;
    msg.goal_id.assign("GWUVONNUCVTMDWXOAXGWSFDKJOBQUDBXHJTXIFCZMPASFJGYUIHLEDXRHQKIISIFFBHGRLDKAYKECJXLAEYVQNBVSYGDQVQLKBUPLYTLLWHOAKIYUHIRWFAZNPHHMMYAEBDYHPMAGGIMSQZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TKLXKJONCTEKNRBNKUDGGRSXRCRBFYUEFHSAIZAXEPVOQBSWHZZSXAEBBVTGMRETODTMNXDLOLRYJHVUXDKYXHQCITDQYZZLSCHEEWXYUYPNAGMNULMYPATQBLFCAQJUFNZQRIIVSYPIPPQXVKGJVRHWWFCWUOXJNVUHIYMEWSYOGTJMRSCGSVOZEUNPFSGFWJRCDKKTDCGQLPAOTZJIDFILJBLWBCMWM");
    tmp_msg_0.predicate.assign("TSSEIMUWJTMKYFFRTISXCHCOBBXBOIEQYHKFCNXBWFKOJTLKHHERLQWSVWCQQMNPMJXLAUVQHGZXFRHNXJQVFVGTJYKAUOGZNNIUFZZABAPUDEQNJEMLUZYQVDPCZOVJSWAIPWLHLVYSGLUYLASIYRUXDKETNBFTQCRFKJRBOAVTXUKHZDMARABCRGWZYVGGFGWPGBORBIILRSWWENMDCPTPYPHNODYO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("APZTGDVJLOJFEPAROSDOORUFESKDSWWPJUTLKKCXGYNDVGASMXGRPTVMBLSCZSUVEQQANFJIXHTEUBDZAUKHIUMWIQNDCWNNLLANJFRBKNHMGEMYMUGAKHCORIZIHIOGDXFZZCTRQTLMXWHEGUXSEZCCLNFABUXVKWFPCQOIOZPHQQMFQ");
    tmp_tmp_msg_0_0.attr_type = 127U;
    tmp_tmp_msg_0_0.min.assign("KIMZLSVAVGOOTRCUHZQZBAVLNGRCPAMWTHUKRXOMXHFRYVFBGQZYUJYJJVTDJZPYLUCGELNWKQJWRSOLSTWPWFNEGQHGUDLDHFWSGQSLYPQWTNRIBFLOHZXUSIVVNXGHAFMAMCCKTAPDCEPFCJFR");
    tmp_tmp_msg_0_0.max.assign("SMVEZKPOJLRMRQBWYVBASNWDIDIPXAXDFJMDEAPMHNGWTBGOMXKCFEXQXAZXSSRUCKSDJWDAAYVKFICXELERQWLEPFEWVLSENJFKOYUUNFRILKFSBVWCBO");
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
    msg.setTimeStamp(0.479678016577);
    msg.setSource(20769U);
    msg.setSourceEntity(45U);
    msg.setDestination(56130U);
    msg.setDestinationEntity(45U);
    msg.op = 55U;
    msg.goal_id.assign("CGKIJAMRBIVQYFFNK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RSLCDEABYVUCTZNTMTXPAFBARLMXDCDQWERPAESHCDZPCVCHNKKA");
    tmp_msg_0.predicate.assign("JWTGHSUFZQQJKTGZNAEYYJBFKFOZITYEXRVMUCMOAMIBKSIAJKGUXXRRJYRJRENGCWVAVMAHCODIAXAXWFXXYEPYSHHPKHGAVJNQNDCIQPNNCOCLCYLSFEEZDBSSQOARMTYPSLLCFEQGRUMPIKTSKRPOMEDLELEOLZWGNUWKNXPBDZNZBIZGKMWDGBTBDVRALXYDUTHVNQOBJJHCDIULOQDWLBRZJVTUFZIFQQWWIYXBTGVSFMOFHM");
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
    msg.setTimeStamp(0.766657951548);
    msg.setSource(15821U);
    msg.setSourceEntity(173U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(181U);
    msg.name.assign("DAOVTOEKTREOWXAQRYOKUUNDOUJRYQZWNFDOWETIMUHUDBQEMBUZQJZB");
    msg.attr_type = 185U;
    msg.min.assign("UVDJMLLZPNHZIMVHRVUTVBQNOTWQAIJQILGOUFIIEGUMCSHDKLZGIWXBHRSABLRAXJGEWPYJKJTFEHYDVNGZMOAIWNARHQNNYNPYWBETYIMTGONJZXXSXCTCVTCFZSBZQQJBRBIPXUNUXDUDWGLKSBKEGMSUMDKDCCRZFLTXOKBQKACQNYWOWEALECOMFJPGYQRDPWHFZEAXAPRSCHKSBVTXJZVLYFIF");
    msg.max.assign("OYPMFOLJYBAUMVDJOLMMEQSQPRHELZVXUGXRFXTIWZSLZJHPGIDNWLVLKCKADUHQNGDVHCCEBNISEIGKGIPZWZXYXCWUXJGAYOTBWPQJOVQHBQNTZIVLTRQFXSTGNUUMTNFQRPXCRODPRNXKCZZDHJDURYOGSYKXIAGQPIAPDDFHCBSSTBVGAWMJAYUJKOWWYOKEZLMKHOEEMALSIJFLTVUEFYCCPRABBZMSNYFIKEJSUBRCFNKVHMWDETWF");

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
    msg.setTimeStamp(0.0826906091372);
    msg.setSource(34532U);
    msg.setSourceEntity(64U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(36U);
    msg.name.assign("HUKYXKZWIZWEZOPJQCWCVBSYUGJJOTIGTOWXOEXSX");
    msg.attr_type = 1U;
    msg.min.assign("UKYABCGMBRNIHAIJKENJLTJRQSMCINTSVXDRDNHQWJOEYDPMLYAGENKRKNMFFNUUJKDGIM");
    msg.max.assign("IIWCGKLKMWXLTRBRGNMQPEDHRKHDQRMXICGYHPEPPJDUVHWUOKVOZOXYKFRBJJDFAYISIYXCNWRUUOZEZVAZJQACZQWZBEEPFTPDYVKLELJDRZUGVSFCVMXXHASBVFMNCSFMLZOPDBDEODONSBVTJBRKFUPIKOKFBQLRAVACAGGTYNMTPTLWHWSAQGLYIIJAUN");

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
    msg.setTimeStamp(0.0838305555244);
    msg.setSource(58695U);
    msg.setSourceEntity(138U);
    msg.setDestination(12706U);
    msg.setDestinationEntity(192U);
    msg.name.assign("UCASTQANMIVAYEQYHXCURSNKIDVMCIWFGM");
    msg.attr_type = 202U;
    msg.min.assign("KQPDHSWTAKROFDGYMORBNSFTDFTMCUCMZFMITCUVDGEWUUTLBJCMVTXTVSNLUSXJXGAMZGHVRKACECZAMQPFFZLBTYXDBHOXHJNLKJOGZHIIYHVJTVZREHRAQGNAOEQAZTLE");
    msg.max.assign("SPMIUSZAEQCAAAKYFVYXBBZUDHPXWVLTXURBWRQQDBEJZGOWDMGFIACTFPJRLWFSCQBHIHFYPUMSYLJ");

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
    msg.setTimeStamp(0.285740823651);
    msg.setSource(6339U);
    msg.setSourceEntity(179U);
    msg.setDestination(49185U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("AOCWMJGQWSSKNLPIXEYCALHUNDODSABQFFMATXQEVEOD");
    msg.predicate.assign("YEUTZEHPDWOGIDSRERCMVRLCBTGMZEJPCELUMEPIANQIGIBEXEHPKOUBJ");

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
    msg.setTimeStamp(0.593045907828);
    msg.setSource(65409U);
    msg.setSourceEntity(249U);
    msg.setDestination(47543U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("KEHLCWJAGHIBLYXJLVRBBQBCUUUQAYDVSAADVVQAUKICRGNDYUNOEMPFMBCIOGEIHERTZJTYESNZMAXUJWTDSBKZGFWHKJLFCNHVPOIJIQCOEZMYGRJIQZLNEJGSW");
    msg.predicate.assign("MOXKNXIVATREXDESIIGQVWXUCOGGLWEMMZAVFDFCABUCVGHTDLXCUTYTHNXKXDRYSZXPYFLDYEMCALMNAYVNSZCBMFQLOPBQCIWQESUZGPHQMERFNHDEBRUFMZVIIELCDOHGTNUDBOGJVWASSJJFHDABIUWRVKRKNBZJQTILHARWLTELQVGJYLZOONPBHFKRSPFPNQKB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FAUDRTSYLUOTLZLJCWNNYWKXZUOYZAVEMLDMOMYWRHWBKLFXDXIPCKIGPMYQGNTSRGQIUHQDFMGINPSEBJWVBXHNYBABRANESZIKCQCARLUMYSGAXDULOHHBRTCXTZOFFNYTDOQPQUAHYVZVSUPSMJCESDMIAEHORKMNPGWTBWPFRPFZNRIRSNLUJQMAWDDGBVTSCJVHHWWEKEKPDEFZXJIVGOI");
    tmp_msg_0.attr_type = 49U;
    tmp_msg_0.min.assign("ARLPJTZAYEELXXHRBSXSUSKETHIKWKTQMMSOHJWCIZALKYXNLNNUBAJGQRTPCTZXRBVENUVFTOQWYOVLMDHLGHTBMLACVRZLBUPGMOOMYNUJSDEIXHFRSKFUCTHNAPJDHFAVQJZYGSZPAFJQVWJEESIKZIWWFGBK");
    tmp_msg_0.max.assign("SMTVTZSQOPBTCNCGMZCTULHPPNJDJZNXAOQSVRALMJPXWMCCPDFBLUJEBALORKQYIGFVFTECZVCTIGWGSRK");
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
    msg.setTimeStamp(0.903950969633);
    msg.setSource(7138U);
    msg.setSourceEntity(108U);
    msg.setDestination(43795U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("MZCBYIVZWUDUEDCCDMBEHJXFYFQTIDRJXALIPHEEMSGNKNLBPQGCOXQSCTZHYOAKTIUITFRXBONVHKJJSAERPPWWMFUDKXIMLCZNMZQUGHINZMFULJDPARQRAOWYCGQPSKGNISSYECGTWHYQBONEEOTWQIIXOFNELOYPVQHBRBKYKRAVEMBDVSLTLNJLPSKUC");
    msg.predicate.assign("MNDYVUETIDZAQIVJSRWZDJOC");

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
    msg.setTimeStamp(0.982010040464);
    msg.setSource(653U);
    msg.setSourceEntity(38U);
    msg.setDestination(46588U);
    msg.setDestinationEntity(0U);
    msg.reactor.assign("ZLGOMNFOICVASRSKDZMABDMNUGEQJEWUMXUJIRFDCUNMRVHRARGGGKOKTYUEISMEQVLTVCLGFQAEWOBKVLYBICOVXZZEMMLNGFILTOCSXWOFBQYPNVIRKKBWTINMPJWLTYYKPZUJXNFDRSPPJVXPWYTWCXUFXHKCGWSHGSAILOTNDPHBFBN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ECPPBNTHEUURRVEAOAGNQYGTOBBXXCGKCEDVHKKKMXKLFKUGQLAPLLXEYAGBSVNERNHVRAPOWXFSXYXBFZGANATTRRJBDSULUZYQXAFJZFHIOPOWDMZXIBNPJCRIZ");
    tmp_msg_0.predicate.assign("ZPOPBNOUUOLLAVCASWKOHAEGRVDWYCOXCTPYYCWCUVGSPGICUDBJ");
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
    msg.setTimeStamp(0.331525138165);
    msg.setSource(56405U);
    msg.setSourceEntity(105U);
    msg.setDestination(12017U);
    msg.setDestinationEntity(218U);
    msg.reactor.assign("UEAIYVZDRBNBOCPBMSGMXHQWPUWFAKHSDNLKWEVCMEXRGBZXYMJIUQUBMGTHLYNZIOBIOZADJRZQWYMDHHKCXUFQDDQWBCTPZMHRFSTDEQ");

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
    msg.setTimeStamp(0.975987887015);
    msg.setSource(46796U);
    msg.setSourceEntity(193U);
    msg.setDestination(48062U);
    msg.setDestinationEntity(70U);
    msg.reactor.assign("WCVVFBIYAOVGWBBKSFWGKKPGEPPEDFLKQSQATPZNITMFVVEYUYQKDXZBSKZRACOXQUVNAOOMMZYWNTAERLXSGTDXJWHFCJYJTTLLXJBYBDDRCNJYCXMFJAYONAGKVNHN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XRYQHPSLYKELTLIZAESMMDHXCJEQRFZBXMVUAVWJYCSCMOJMZGLOQYRKBLKYKILAFZSGSNTNGQEQRTGVSJUPIJOFQUQBOOPSKJLHFNMZVOTDGVSRHFELECINTXHAKWXBOPRICNCXAHDPWFEGRJXQUWHZMVWWQDKPKHBQURHZYLDYDDMITMUNUAXFBWJRDHPKICADBBGMVSTEYAKTIZGYSFXUWIUWTNLJBGCZEEPVTOOVCOAI");
    tmp_msg_0.predicate.assign("MYKJZUHSMWXXSSKKBDQOACBEOWOTOIHOEJRGSAOJPQUURWSHIVBVUPHCVPRKYCTHSFACQDQQDUVEVBJRERTHEIKQDJUHXNIFLHTXJYUZBXNZESLAGCNCBTXFPMSVVJLRGAURIPDGCMTYGAYZNPXXFLWGFJNESDZKAVEYOVQO");
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
    msg.setTimeStamp(0.684073370199);
    msg.setSource(18381U);
    msg.setSourceEntity(15U);
    msg.setDestination(18595U);
    msg.setDestinationEntity(140U);
    msg.id = 142U;
    msg.width = 54972U;
    msg.height = 4545U;
    msg.widthstep = 24564U;
    msg.channels = 204U;
    msg.depth = 157U;
    msg.finaldata = 142U;
    const char tmp_msg_0[] = {-107, 83, -119, 72, -109, 13, -106, -3, 102, -101, -73, -52, -64, 12, -43, 31, 90, -97, 99, 65, -114, -113, 29, 106, 95, -81, -67, -66, -83, 32, -117, -5, 25, 123, -62, -7, -55, -72, -78, -57, 75, -79, -122, -124, 11, 13, 3, 12, -87, -50, 88, 44, -23, -47, -73, 7, 126, 27, 13, 103, 122, 8, -82, -85, 107, -87, 39, -80, 90, 18, 53, 87, 108, 20, 2, 95, 29, 5, -118, 123, 52, -57, 87, -103, -3, 44, 64, -42, -79, -123, 25, -4, -48, -79, 60, 113, -73, 99, 108, -7, 20, -20, 29, -72, 40, 117, 29, 76, -9, -35, -80, 98, 102, 29, 48, 12, -28, -96, -108, -42, -1, -10, 42, -45, -104, 93, -125, 26, 12, 47, -55, -96, 3, -63, 34, -19, 102, -84, -94, -84, 73, -11, 9, 40};
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
    msg.setTimeStamp(0.276894728525);
    msg.setSource(28034U);
    msg.setSourceEntity(44U);
    msg.setDestination(19062U);
    msg.setDestinationEntity(238U);
    msg.id = 93U;
    msg.width = 35780U;
    msg.height = 16247U;
    msg.widthstep = 48652U;
    msg.channels = 81U;
    msg.depth = 31U;
    msg.finaldata = 225U;
    const char tmp_msg_0[] = {-34, 3, -2, 118, -76, 24, -113, 29, -1, 13, 68, -42, -72, 62, -27, 47, 123, -76, -39, -9, -78, 70, -66, -110, 9, 106, -79, -42, -55, 115, -101, -103, -116, -27, 5, -100, -121, 65, 101, -123, -114, 118, -27, -59, 125, -9, -73, 22, 109, -120, 6};
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
    msg.setTimeStamp(0.719180961034);
    msg.setSource(2226U);
    msg.setSourceEntity(219U);
    msg.setDestination(26482U);
    msg.setDestinationEntity(28U);
    msg.id = 113U;
    msg.width = 25038U;
    msg.height = 51667U;
    msg.widthstep = 23262U;
    msg.channels = 7U;
    msg.depth = 153U;
    msg.finaldata = 183U;
    const char tmp_msg_0[] = {113, 118, -45, 82, 59, 45, -85, 42, 110, 12, -25, 95, -75, -15, -33, 27, 37, 88, -32, 37, -5, -14, 53, 113, -116, 29, 103, 17, -31, 12, -51, 67, 31, 104, -33, -87, -113, -54, 95, 63, 99, -15, -85, 66, 67};
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
    msg.setTimeStamp(0.528054651116);
    msg.setSource(23328U);
    msg.setSourceEntity(14U);
    msg.setDestination(24735U);
    msg.setDestinationEntity(28U);
    msg.width = 45465U;
    msg.height = 40948U;
    msg.channels = 73U;
    msg.depth = 7U;
    const char tmp_msg_0[] = {-105, -79, 102, 65, 125, -80, 93, -80, -40, 38, 52, -50, -35, -18, 117, 58, 49, 29, 91, -74, 67, -107, 77, -105, 38, -9, 43, -51, -1, -123, -95, 114, 20, -110, -87, 53, 96, -120, -113, -120, -39, -6, -69, -83, 97, 105, -126, 102, 117, 85, 12, -91, 58, 24, -73, -37, -3, -114, -108, -106, -116, -88, 61, 96, -16, 112, -55, 37, -33, -60, 55, -40, 74, -41, -34, 56, -106, -28, -23, -77, 57, -19, 5, 61, -76, 16, 38, -124, -60, 120, 34, -98, 61, 109, -59, 36, -99, -17, 70, 53, 15, 22, 65, -13, 105, 67, 5, 114, 53, 44, -109, -17, 11, 4, -73, 13, 67, -90, 80, -31, -28, 123, -30, 42, 54, -4, -119, -77, 18, 80, 79, 60, 18, 90, -76, 16, 20, -44, -101, -39, -66, -66, -41, 117, 91, 53, 115, 121, -38, -66, -114, 126, 102, 97, 75, -9, 124, 5, 13, 63, -85, -61, -26, 23, 93, -12, -55, 115, -27, 42, -92, -61, 100, -36, -23, -124, 20, 105, -126, -66};
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
    msg.setTimeStamp(0.289895208039);
    msg.setSource(22109U);
    msg.setSourceEntity(217U);
    msg.setDestination(13107U);
    msg.setDestinationEntity(227U);
    msg.width = 45444U;
    msg.height = 44092U;
    msg.channels = 202U;
    msg.depth = 74U;
    const char tmp_msg_0[] = {-24, 104, -59, -18, 62, 89, -84, -90, -60, -29, -74, -78, -108, 58, 120, -118, -125, -9, 24, 114, 91, -35, -63, 77, 122, -64, -93, -74, 76, 27, -24, -97, 86, -93, 58, 16, -99, -97, 12, -58, 70, 124, 29, 43, -125, 89, -57, 122, 88, -109};
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
    msg.setTimeStamp(0.868291211235);
    msg.setSource(45556U);
    msg.setSourceEntity(1U);
    msg.setDestination(34997U);
    msg.setDestinationEntity(11U);
    msg.width = 51020U;
    msg.height = 51135U;
    msg.channels = 166U;
    msg.depth = 155U;
    const char tmp_msg_0[] = {-11, -90, -44, 13, 87, -89, -43, -94, -127, 57, -115, -48, -53, 23, 95, -49, -27, -96, -17, 17, 57, 23, 124, 99, 125, -71, 37, -51, 125, -20, 48, -3, 5, 107, 116, -41, -5, -4, -78, 72, -22, -128, -28, -105, -85, -91, -98, 83, 33, -84, 43, -70, 62, 20, -92, -46, -99, 47, -119, -35, 78, 83, 12, 55, -100, 78, 87, 41, -82, 39, 41, 45, -75, 64, -48, 8, 115, -15, -20, -81, 34, -20, 34, -87, -81, -127, -123, -92, -17, -110, -73, 4, 31, 96, 58, 82, -105, -76, 43, 94, 1, 117, -109, -114, 102, -95, -110, 103, -77, 108, -107, -12, 106, -94, 55, 76, -24, 0, -7, 89, -83, 111, 93, -117, 83, 86, -13, -62, 23, -61, 8, 85, 8, 83, -60, 119, -90, 107, -25, 69, 13, 100, -77, -52, -65, 16, 12, -99, -79, -122, 43, -67, -74, -17, -93, 14, 82, 2, 103, -41, -19, 118, 91, -118, -30, -78, 33, -39, -92, 35, 105, 29, 28, 18, 61, 20, -110, -92, -68, 23, 19, 111, 106, 118, 85, 57, -26, 55, 114, 85, 31};
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
    msg.setTimeStamp(0.383564171404);
    msg.setSource(1863U);
    msg.setSourceEntity(147U);
    msg.setDestination(31828U);
    msg.setDestinationEntity(6U);
    msg.frameid = 214U;
    const char tmp_msg_0[] = {-111, 55, -40, -53, 106, -119, -32, 6, 117, -26, -40, 122, -40, 107, -38, -73, 121, 20, 34, -20, 71, 61, 47, -62, 73, -78, 114, 57, 122, 109, 0, -79, -116, -120, -88, -120, 111, 64, 109, 47, 52, 102, 14, -42, 82, 11, -117, -108, 0, 32, 98, 46, 49, 93, 44, -111, 88, 63, 19, -76, -100, -100, -106, -90, 33, -93, -118, -70, -13, 59, 2, 122, -42, -36, -30, -62, 108, -86, 72, 125, -11, 100, 96, 29, -117, 2, -65, 75, 25};
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
    msg.setTimeStamp(0.304769261876);
    msg.setSource(33204U);
    msg.setSourceEntity(237U);
    msg.setDestination(10950U);
    msg.setDestinationEntity(18U);
    msg.frameid = 165U;
    const char tmp_msg_0[] = {-53, 100, 36, -71, -107, 25, -104, -56, 8, 4, 123, 95, 93, -95, -37, -53, -58, 62, 28, 73, 41, -82, 15, 93, -109, 46, 83, -59, 124, -40, 94, 100, 67, -59, 9, 68, 64, -5, -45, -2, 109, -54, 58, 64, -127, -80, 78, 74, -42, 113, 81, -98, -106, 111, 33, 10, -36, 91, -59, -56, -123, -50, -62, 43, -119, 20, -119, 2, 104, 66, 125, 25, 50, 84, -51, 60, 26, 92, 91, -32, -87, 89, 86, 75, 33, 12, -62, 46, -84, -36, -46, -92, -88, -25, -79, 74, 77, -24, -96, -54, -26, -109, -48, 53, 35, -120, 118, 35, -37, -38, -57, -119, -96, 79, -62, -83, -11, -38, -101, 64, -3, -28, 32, -33, -29, -64, 101, -115, 73, -15, -14, -45, 122, 0, 121, 112, -128, -92, -26, 40, 95, -50, -27, 89, -53, -116, 23, 80, 125, 69, -102, 121, 45, -78, 6, -83, -94, -128, 118, -7, 97, -126, -65, 37, -55, -103, 31, -122, 81, -16, -111, -12, 74, -120, -6, -73, -44, -51, 38, -35, -48, 6, -82, -73, 111, -119, 28, -114, 124, 50, -16, -93, 1, -7, -76, -127, -56, -68, 120, 109, -4, 51, 126, -34, 91, 37, -123, 22, 61, -58, -126, 122, -50, -120, -11, 11, -43, 119, -114, 70, 56, -57, 103, 28, -54, -62, 73, 19, 28, -93, 83, -107, 125, 125, -50, 73, 12, 105};
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
    msg.setTimeStamp(0.327419136706);
    msg.setSource(27652U);
    msg.setSourceEntity(3U);
    msg.setDestination(4003U);
    msg.setDestinationEntity(232U);
    msg.frameid = 235U;
    const char tmp_msg_0[] = {-70, 47, 100, -13, 68, -123, -42, 28, -28, -34, 17, -88, 10, 76, 125, 70, 30, 19, -41, 55, 79, -106, -11, 112, -47, -58, -63, -43, 27, -63, 122, -104, 78, 86, -100, 88, -57, 95, 92, 60, 76, -126, 125, 52, 66, -108, 71, 124, 1, 33, -55, -38, -124, -19, -13, 74, -33, 84, 74, -13, 95, -114, 118, 106, -29, -37, 123, -4, 39, -18, 36, 109, 10, 95, 31, 74, 13, 74, -72, -10, 12, 43, -85, -11, 120, -26, 41, 92, -116, -79, 98, -88, -96, 89, -47, 7, -100, 22, 117, 81, -102, -71, 72, 29, -48, 62, 4, -2, -120, 21, -122, -112, -120, -94, 18, 77, -35, -108, -52, 102, -98, 3, -27, -111, 92, -118, -127, 56, 76, 43, -49, -40, 8, 88, 51, 80, 5, 102, 113, 20, -92, 102, 4, -101, 42, -10, 121, -2, 118, 2, 47, 75, 23, 89, 9, -40, -39, -60, -7, -67, 21, 29, -113, 36, 37, -86, -116, -86, 46, 37, 42, -70, -119, 44, 80, 114, -125, 118, 73, 5, 125, -87, -78, 88, 80, 89, 101, 0, -101, -16, -57, 35, 53, -125, 18, -60, 118, 86, 38, -12, 51, -53, 80, -124, -110, 34, 45, 77};
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
    msg.setTimeStamp(0.950822772407);
    msg.setSource(52212U);
    msg.setSourceEntity(106U);
    msg.setDestination(55908U);
    msg.setDestinationEntity(213U);
    msg.fps = 64U;
    msg.quality = 115U;
    msg.reps = 200U;
    msg.tsize = 61U;

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
    msg.setTimeStamp(0.688316097517);
    msg.setSource(6733U);
    msg.setSourceEntity(251U);
    msg.setDestination(8587U);
    msg.setDestinationEntity(74U);
    msg.fps = 153U;
    msg.quality = 111U;
    msg.reps = 232U;
    msg.tsize = 201U;

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
    msg.setTimeStamp(0.429793571432);
    msg.setSource(29013U);
    msg.setSourceEntity(190U);
    msg.setDestination(7972U);
    msg.setDestinationEntity(78U);
    msg.fps = 198U;
    msg.quality = 218U;
    msg.reps = 145U;
    msg.tsize = 146U;

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
    msg.setTimeStamp(0.323363375565);
    msg.setSource(35946U);
    msg.setSourceEntity(20U);
    msg.setDestination(15759U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.860691374783;
    msg.lon = 0.560663940442;
    msg.depth = 96U;
    msg.speed = 0.995977347619;
    msg.psi = 0.93791312853;

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
    msg.setTimeStamp(0.290421402588);
    msg.setSource(62261U);
    msg.setSourceEntity(211U);
    msg.setDestination(47994U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.14683783718;
    msg.lon = 0.819512651725;
    msg.depth = 46U;
    msg.speed = 0.516784753303;
    msg.psi = 0.580264222887;

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
    msg.setTimeStamp(0.985727555671);
    msg.setSource(42885U);
    msg.setSourceEntity(173U);
    msg.setDestination(1816U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.211487413424;
    msg.lon = 0.941596399159;
    msg.depth = 181U;
    msg.speed = 0.743540880166;
    msg.psi = 0.698108972453;

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
    msg.setTimeStamp(0.50744297742);
    msg.setSource(20866U);
    msg.setSourceEntity(52U);
    msg.setDestination(45789U);
    msg.setDestinationEntity(50U);
    msg.label.assign("FXTCAJCZJSGLLOCAJQUNCKCUGFIEQSVPBJPWTFNIZQUWANOMLVYDFAGODFHKHNRQUKIFWDOZBIHMNJWMAVXZTSLWORLZGSZSAHIYTPQBSKCVBTYKJPBRGSGYYMKXEDGVRDJFQRMUXOUKAFPQVWBANEEIXQZEMELMYXNYBIOVYQZNTTUHELHSBMCTWHLQSYWKCMUXSXPWGDRGHOPPOTDJCGEEFPBDRUENDAPUAKIFDXOHTZBHJRIRYZLKXMVVV");
    msg.lat = 0.120418464617;
    msg.lon = 0.747101905294;
    msg.z = 0.876107534689;
    msg.z_units = 114U;
    msg.cog = 0.549451825287;
    msg.sog = 0.255337615373;

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
    msg.setTimeStamp(0.055358989195);
    msg.setSource(9318U);
    msg.setSourceEntity(245U);
    msg.setDestination(16080U);
    msg.setDestinationEntity(153U);
    msg.label.assign("QGCGUWXBWSTZHCIHXMENUQJOTLJEQQFVDPMISQVHXCUKRBEOTPSRYRKVJWSDTYIAYJODJDFIOHVCKHPNJXPEWNZMCTEUEPJIYRRGJQOYSTFGHUXBRFHVNZMCROQMCKAZYXLUORZUKWBAXMODDBONAQPAYWVASNBKSHXWZKGCSLREMIIFGJLKNSMZHTNLIVEMHATVLPTA");
    msg.lat = 0.0636315846637;
    msg.lon = 0.943524872122;
    msg.z = 0.835688849493;
    msg.z_units = 193U;
    msg.cog = 0.232578859763;
    msg.sog = 0.778596759656;

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
    msg.setTimeStamp(0.747701531253);
    msg.setSource(33305U);
    msg.setSourceEntity(165U);
    msg.setDestination(18798U);
    msg.setDestinationEntity(118U);
    msg.label.assign("GVMSHCURVZSEJYFWLJTPAAQJGDEIX");
    msg.lat = 0.901429893756;
    msg.lon = 0.777500280846;
    msg.z = 0.495913333899;
    msg.z_units = 220U;
    msg.cog = 0.187345568415;
    msg.sog = 0.462298668387;

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
    msg.setTimeStamp(0.961283999838);
    msg.setSource(20751U);
    msg.setSourceEntity(123U);
    msg.setDestination(57208U);
    msg.setDestinationEntity(185U);
    msg.name.assign("SUSITHVVDNYJRTFBRPPSUEKRVYPBLIQKFCXVGQBJUWFQNKXVRZQNBSPEIOOWAJIVCTGDWKJLJXKXCISAZEIHEJPFWYFAIRLWOOUDEPGSGNZRWQFBVWZTEYPLLTYDUWMYRGODQCHZLOLGGWBNQHTOFDXUCDXMJBFKKRMJFHVFSBRDOIUBEHENHXMCZGEZLHQJHPALCUIDIGKVMSLYATTBXCPNCPGZSNAUSXYQMODUJY");
    msg.value.assign("AYNUSYAYOOCZXDQXUKTLKHJXZWGSTWMQADNPVISCWMLPRNAOLNNRAVBYKSMDOWDCEMITFBNFIXMHEYWVGKEFRTCBMJZZJEUWFLSPQOVHLZKUEQQBBFBHRHHDYGRKIGBMEQDBZPRCXLXYDAVSXELTAZWMCASMDTKZMBHNFPGXQJOTIDVHORUWQVCFBFJXCIEOIINOWDQUPNZSLZECRIGYPVHUPFIJYWAYRUJHTVGGU");

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
    msg.setTimeStamp(0.0755184699195);
    msg.setSource(56676U);
    msg.setSourceEntity(10U);
    msg.setDestination(30195U);
    msg.setDestinationEntity(73U);
    msg.name.assign("MOKQRPXBGURHGNLBSVRNSJHUOJCXBYAAIDCSGPOJCQBDHPEYQZLEGDYNBUYIGMSENZOCCHWDCIXVFPPPDTTOWMGBFCKTVBQNFKZLXZHJGOOWIJSLJDXTIIOAYEFFRJLUZSWNTUC");
    msg.value.assign("PYJKGJFHLFQZGOEOSAJHCQQLVSHWAJSAJAQYMUDVUBKQDKXZTMGYAMOZGJOTGWNCQTWILSVEBJIXWYTWZEIHLZVBPPBAVYAUKYMJXKRYXCWL");

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
    msg.setTimeStamp(0.834659101631);
    msg.setSource(37421U);
    msg.setSourceEntity(51U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(189U);
    msg.name.assign("FRIGWKFEGMHWDTOIDGUYFUARREVMTNNSIGNJWJPXSDQRWBIKQMKHYDCUYCXZCUILEBAUUELSXXBNBMDCLPGDVHPXOKOKYSAYLUICKXOFEKZUNFRLZISFWTSNTFZCCHLPZRJMSGPSXQGIBNAENTTRPJJBNRJLWQVSROPYFDHQSOUYEVJMDKTAXZDKIGVZDJPCYOVZQMBQRJYGAHJIECHVAHOBZHECWTMBAZBW");
    msg.value.assign("OIUBMTFLGCZQEDBDQXAHJCUPPPMTXBIMIRRRJRKNNNWAULFJKCKODDOVNLXBKJCVFDCBJFEQJSZAWYBIGNHZDTQWUOQMSVEHPQILKBIHTOAQVKGHOMMTGIYHFYLJVYBQFGPWDWJEMFICNCFAYAPWLYJRPEGPFSAEWHCDGUHSXUNCNOPWSZSORVAXYSLTETTUERLDBSFNSVKDWUTQUXQKXZSIVMVKZUYVPGMZCJYWGEOI");

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
    msg.setTimeStamp(0.526248136254);
    msg.setSource(49010U);
    msg.setSourceEntity(211U);
    msg.setDestination(5179U);
    msg.setDestinationEntity(166U);
    msg.name.assign("JGKVYCMXJUZCZHQHMGNLHBROOLTGEHVZONVZCTWDVFLITJQNHUDRCYXLVZWQAKVWMESTVRYRWXCMVIUWNQORWEAPHKQIJBOFZCHARJCBIDSIAMRJSLAEPHYTUWGFKJSPBFAVYUDLCTOBBWTNGZRSUFBTELOJY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZZJQRBENHTALNMIXPXQOPSDUGIWWRCCSHUFBMQTUAQNBTXRYNCWKEXUORSZJRVWHFWHFEVJW");
    tmp_msg_0.value.assign("GWYTHNRWDARVRWHVSCXMJCIWUUQWEXSRTOBJQQJLHSOJXNHPMQYYNUOFWCLNXYEPPVSBODZLZTAATFFTRYULUKRINVSEPZGBJWQRQHNYNVEGLKPBUOXZEGISXKZJTEFZSVFHHTIPTLILODPPENAADRASXLEAOUBMVCMWPDZHSTGSIHJJFDWCMZBXALDVBFKBKIQBDKXIPCOFOGARGCVMGZFMVZEANLCKMXQ");
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
    msg.setTimeStamp(0.258854028524);
    msg.setSource(22363U);
    msg.setSourceEntity(245U);
    msg.setDestination(13450U);
    msg.setDestinationEntity(85U);
    msg.name.assign("CBGMSRAYGSPXMFNIUFQNYMHKTZYMTAALJOWRPTTLWHFCMEWJFXIGTSXCGEHGIYU");

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
    msg.setTimeStamp(0.636863648541);
    msg.setSource(57191U);
    msg.setSourceEntity(158U);
    msg.setDestination(2839U);
    msg.setDestinationEntity(158U);
    msg.name.assign("JGZPBLAHWNMFQTWEESYCKKKTMSTJWCPUCYJJBETKELKXNZPLWNN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TCAXWSEHPXCBHCACLVWLWDIYHXCCLKTKGNOQUNQOSPDPCRGJGFNDGKKOXPYIISERGENUVZKIFLSWINKLPMYJVXEPUJWUHDTAPIDCAKSYSWBRUHTJQEBRMZUFZTJDAJZGBVYYJSXSHTEEEVLBNBKAWAMYVCDOUFLRGVHVGXPIQMMWVKOIIRBIXFUBMOSYRNKOF");
    tmp_msg_0.value.assign("ENEDGVMTXQXCXJPOQYNHUDZBYZBWRLBCEZUSBAIILOMBFYPAXIASKLWSWQPHHPDQRQURDGKUTIAGSAJVHNUCWVINCGWNMFKTXPZVYTFZFZMSGZHSHDBYMLRHYCTDQYJIAMVORMGAFESCNWKORDJOYEIBEHJKOELZKQJHXLRQMU");
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
    msg.setTimeStamp(0.949967076804);
    msg.setSource(15351U);
    msg.setSourceEntity(67U);
    msg.setDestination(60519U);
    msg.setDestinationEntity(10U);
    msg.name.assign("SEEMJWBOTPCLTKZEJNZWNFWFOKCXIGMGACZTOJKIRVZLHFTJOKXSURJSAIWYNGLDXMKVROHIVQICOTZCTAAFWXJDYUQXWMYJBPVLFABQHYKBOWYBALSNHKCXMCQNLTEPFDOGPUET");
    msg.visibility.assign("NBUTYAQJJOORHYMXGMYDSDITCXSRGTLHPQBZNQSAPAENFQDZF");
    msg.scope.assign("DIYHFOOCSPYFOVXDREWOLZROCPGQSQMLEDZUTSJQJLMWYGPCUTJWNXJQJVRSFHMOJYTXBYTGGRPZMVAWZMSREYKJMBDKFCGF");

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
    msg.setTimeStamp(0.287727009019);
    msg.setSource(46905U);
    msg.setSourceEntity(151U);
    msg.setDestination(47222U);
    msg.setDestinationEntity(12U);
    msg.name.assign("UULUPQCNQOHRTPETZHEBSXPXPZMLRUIVUYTYCKXGGSWHRGJAGVHSMLGUZSVTOKJFARXSVMVHKHTLFWDEGIDRPODBVVLFNYNDTKPJWZKFBCZAENXOICFWIJEFAMGJSKAYQDJCIDJHCHQYMOLKHADGDBEZWBRQSNWVTKWNCSXUZAVO");
    msg.visibility.assign("DNDBWEIQYIVLQHHWRXINMRZOBMHVWJKCSBAHRDYNCVAQYTPUJGRDCJSAKJRJYEEKHPWDBDYMZGEQOUZNDZVXMFKCCRGTXBKAXUOARDFJQTVJENSVHLLLAIEBQYLPZRXAIWFPIXOUFSQWILBITFKLCJHMBPVKTEPGEMOMMFEIIWESFONGNAT");
    msg.scope.assign("RSLIAXZNXUVMQHWMZDKQPIAEAPS");

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
    msg.setTimeStamp(0.240252927177);
    msg.setSource(46640U);
    msg.setSourceEntity(247U);
    msg.setDestination(42488U);
    msg.setDestinationEntity(82U);
    msg.name.assign("UEOQWNXXDQYINAWDBBRCWEJUVQOADSRNWIRYHDNQCIBHEWKHPCCMJJZAODPXMLSHQASJSGOHJNPVEVVLNWXEOBGMFI");
    msg.visibility.assign("WTPFWORJLNTWKQQEZHAPVPSKEWOUCYNFUJWBCSKQFOPGTMRXZAOLCKRSIIEBYGNDGZHDRGZWACTAUPBYVYHNXGATBCKCQBAKAVVOHULUFEYCSDCOZEJKKPSDDVTBKTANOZGOOWIFWJYYWHQDZSQDDBXIVLTPXHVMRIGHJTGNCHHNSLQMLYMGXDPRMEHCGJIIFPPMXLMUETNXSLRUA");
    msg.scope.assign("VPSACXNCHECLUSALBCXKYWNOKNNPXRWHLJAXJYCACNJTHIPHOSDVHGZZQIYL");

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
    msg.setTimeStamp(0.597627090949);
    msg.setSource(62498U);
    msg.setSourceEntity(53U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(241U);
    msg.name.assign("XARTJKVKBLX");

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
    msg.setTimeStamp(0.166410407583);
    msg.setSource(14384U);
    msg.setSourceEntity(43U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(89U);
    msg.name.assign("TPRHXVLMDKCTDQZEZBSRMSRMREDNSXOVPSUW");

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
    msg.setTimeStamp(0.00399022343879);
    msg.setSource(45574U);
    msg.setSourceEntity(239U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(49U);
    msg.name.assign("KHLYTSTXGPOYHKGJIWKHPEPCCDLDWQUURHBRVEOMFYJEJLOYCUAARZZRVFDQDFTJEPDIWRGZEBKJPYBFQAAMCJXFMSKIXWISWKVBRQMAVNQQTZLKRCETYPOEFGBNOBIQJCBORZFNYIODPPNUILAZAFGCJHXJWGOZSNBRAQFTXLYTWZ");

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
    msg.setTimeStamp(0.986119286668);
    msg.setSource(9611U);
    msg.setSourceEntity(135U);
    msg.setDestination(6907U);
    msg.setDestinationEntity(247U);
    msg.name.assign("HIDQBWIXGEUXGJBRCYFRKVROWODNIKIKYHMWSIGXAFCDGYBFCWLDKQHPZYHNKMAOJJOJTRRWKFNUNIBLKXGBQECUHHYWEMAKABHQFR");

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
    msg.setTimeStamp(0.354091201117);
    msg.setSource(16928U);
    msg.setSourceEntity(5U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(128U);
    msg.name.assign("ACJANZOHFGDVFITMYZVVQOPYZRMWITHJBMAJUTEEVWYFTZQFBHGWXXGECREWSAENZOKOQUCJBGBYJXKIDEMHSUNWGKPKQXWMCSFPYCTPSMJFSMOILOWLXLLKIJWDDSADPKVYPETTKQZGOHQBTIVEYDCXZLUURAXBRMQSAQOGGTAZLVCAQWZJVHBUUPSGROUKJNDCUISHDRWCVXKUXEQNHFSBHLI");

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
    msg.setTimeStamp(0.773725334589);
    msg.setSource(18588U);
    msg.setSourceEntity(111U);
    msg.setDestination(62507U);
    msg.setDestinationEntity(70U);
    msg.name.assign("NUELIANGIRYHYTVWSDHBURCDOVBXIWUZDIVWYLOUQXWKMWVDMSFCJUMOIQIBRHYTFGZQKOAOXAPMLGGBAXQEBWKIGLRSEEFFBNTGZCAJTPDNUCKZUJNHFWVQOAYZRYDKRESASBLICRHRHAJZTFYMVJKSZMLLBZTCEXJGUNXNAJKYQTTSNXBHHSMWYQPWGTU");

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
    msg.setTimeStamp(0.043049430706);
    msg.setSource(4225U);
    msg.setSourceEntity(53U);
    msg.setDestination(30834U);
    msg.setDestinationEntity(85U);
    msg.timeout = 1470628707U;

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
    msg.setTimeStamp(0.578661293393);
    msg.setSource(49898U);
    msg.setSourceEntity(215U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(187U);
    msg.timeout = 1611208817U;

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
    msg.setTimeStamp(0.279796500191);
    msg.setSource(53070U);
    msg.setSourceEntity(150U);
    msg.setDestination(29275U);
    msg.setDestinationEntity(245U);
    msg.timeout = 2694187664U;

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
    msg.setTimeStamp(0.0798548878336);
    msg.setSource(23479U);
    msg.setSourceEntity(216U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(250U);
    msg.sessid = 2691704298U;

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
    msg.setTimeStamp(0.457704427191);
    msg.setSource(18304U);
    msg.setSourceEntity(11U);
    msg.setDestination(40733U);
    msg.setDestinationEntity(197U);
    msg.sessid = 2481343873U;

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
    msg.setTimeStamp(0.821078293365);
    msg.setSource(16256U);
    msg.setSourceEntity(72U);
    msg.setDestination(37174U);
    msg.setDestinationEntity(37U);
    msg.sessid = 1025965153U;

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
    msg.setTimeStamp(0.44598090121);
    msg.setSource(17519U);
    msg.setSourceEntity(67U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(143U);
    msg.sessid = 4084045940U;
    msg.messages.assign("FTDOUPOBXTYGOPUMHCEHNIOYRLYZFCWGFMPUXLXVJRZGKIEKHARIKBZEQEUHKGBLVJSPNOFQYMUZNJUMASVIFQXTHOKNQTIPNJOBQJSGWQKBXPRPBICVCDEKDUNTQBTAAHYXGTIFZEIBKXRHLJCUHLJZYNTPORGSSWZXJV");

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
    msg.setTimeStamp(0.00764423023335);
    msg.setSource(28755U);
    msg.setSourceEntity(124U);
    msg.setDestination(45592U);
    msg.setDestinationEntity(32U);
    msg.sessid = 3498745637U;
    msg.messages.assign("ZNLEMYNEJYDFAJNPLRDWGXPLCOQNQSNXQLPFAAWKGDAKFGSONYYUHVCFWJDYBFVRAGBZMHHTHJQCKYBQNIRBQCDVPSPCNPYEGOTWMEHDLUSRSOHMLKXTTTUUXJAWIIJWGXKOTD");

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
    msg.setTimeStamp(0.399936068842);
    msg.setSource(42547U);
    msg.setSourceEntity(237U);
    msg.setDestination(51692U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1176394738U;
    msg.messages.assign("KGXSCLSYDUWKBKVXNYBZALWAHAQXWKOAVLYKCQGVWJCLXPGGBTLSDNMWPOJNHOXERRCYNQVHRGGGTUVPFZZRIXADBSXPAFGBIQODFWTDAEVPIBXUEFXNEMJHZDBIJIBYYCZTBUWMBDMFYLRVSTCKMSCOEUTHDHWUPVZLJY");

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
    msg.setTimeStamp(0.961334972804);
    msg.setSource(29745U);
    msg.setSourceEntity(166U);
    msg.setDestination(8231U);
    msg.setDestinationEntity(2U);
    msg.sessid = 1427707881U;

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
    msg.setTimeStamp(0.00629437299407);
    msg.setSource(61005U);
    msg.setSourceEntity(90U);
    msg.setDestination(32371U);
    msg.setDestinationEntity(251U);
    msg.sessid = 2269262611U;

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
    msg.setTimeStamp(0.0456297058506);
    msg.setSource(27222U);
    msg.setSourceEntity(86U);
    msg.setDestination(48343U);
    msg.setDestinationEntity(150U);
    msg.sessid = 1277243333U;

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
    msg.setTimeStamp(0.995598423015);
    msg.setSource(65255U);
    msg.setSourceEntity(148U);
    msg.setDestination(50678U);
    msg.setDestinationEntity(116U);
    msg.sessid = 868784881U;
    msg.status = 67U;

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
    msg.setTimeStamp(0.0958367212995);
    msg.setSource(32219U);
    msg.setSourceEntity(138U);
    msg.setDestination(59365U);
    msg.setDestinationEntity(111U);
    msg.sessid = 1608406290U;
    msg.status = 163U;

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
    msg.setTimeStamp(0.807242766682);
    msg.setSource(55219U);
    msg.setSourceEntity(160U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(121U);
    msg.sessid = 642524027U;
    msg.status = 49U;

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
    msg.setTimeStamp(0.311800034615);
    msg.setSource(42191U);
    msg.setSourceEntity(64U);
    msg.setDestination(33739U);
    msg.setDestinationEntity(209U);
    msg.name.assign("IORYEUBDYZOFBJTREBSXDFIEBFKWVMUSOGCNIXZZATWNPLDCIFTEISQHNGZJALXNOGCSHDLHXJBCXVCUIMRAKUVXSUFRMYW");

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
    msg.setTimeStamp(0.070730941887);
    msg.setSource(27906U);
    msg.setSourceEntity(172U);
    msg.setDestination(11510U);
    msg.setDestinationEntity(146U);
    msg.name.assign("ZAHYZSFLWQTDSPMBVGMWKHAUCUQVQYJHOHMKFDHPQKPXZKUFIROLFRZDVPFLRNNFCNEPDLYBLKPJDSSTHYEFTSCJYMLETQRIAAIXDXKG");

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
    msg.setTimeStamp(0.877867654444);
    msg.setSource(6152U);
    msg.setSourceEntity(208U);
    msg.setDestination(16085U);
    msg.setDestinationEntity(76U);
    msg.name.assign("OPTOCDBZGHPDWKYKPSLTKVMXCATLGSQEKETPDIDXOZTDUYFXXUURFYDMM");

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
    msg.setTimeStamp(0.823515767971);
    msg.setSource(20606U);
    msg.setSourceEntity(217U);
    msg.setDestination(16924U);
    msg.setDestinationEntity(178U);
    msg.name.assign("NJGFLSGJUWDEHIKEGEWJMVPMWILILGSNNHZVFFQBYLBGKYVMGBKWXEFRDLRCIXZNTJVMTPTMOBERYJIBPBXIRFAHEZSUMNTUVAKWDPMBCPVADHKLYXSKQUCOISZDAJZAVYNTOGAORPRDZZRWSCEQQGCYHDKIFRFHTMNURPAXQQCENBTAZBJKLOJSFZJXKRNJQXDYBIEE");

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
    msg.setTimeStamp(0.960754626588);
    msg.setSource(24334U);
    msg.setSourceEntity(107U);
    msg.setDestination(55145U);
    msg.setDestinationEntity(123U);
    msg.name.assign("KXVWNENULOGRSEVJAATVYRPWKAISJYBAXNHBOWEMBKKOQCKRZQMZVYYRWGWNHMVSNTRQSSGEITYEHJLULIKLKXNFEBHQRSSLOZAZXFJRBOHBYRMTRJUPBVUMIDGPXDAQXJITTDDRXJXCIGFKAZPHYUJNHUCMYWGSOTPOFXHCFGVHVWJGBICQYALXZEBQMUD");

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
    msg.setTimeStamp(0.971310299335);
    msg.setSource(50357U);
    msg.setSourceEntity(60U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(140U);
    msg.name.assign("GVUOXCONYHHMFHGYRARBLAPEXBEOSJKNDSFFWKXDOVCOLGLCBULJEPFQYNNJWJIZQFSSSGGFCHKNWIBEMLZWFXWZDSOOKMYDGUVAQDZSMRTUJMHCXGYKODVPHLIDLNFEVXTEAGXEJIMRTPSTOZATBLSJUAKYQWPZJTUCMPKHQJMTZPXBYVKDEEWADXBIVQYKPZRVFQVGKCRSDCNRGJRAHBYHNHCANXZBFAYWU");

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
    msg.setTimeStamp(0.171018791342);
    msg.setSource(23658U);
    msg.setSourceEntity(82U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(164U);
    msg.type = 105U;
    msg.error.assign("JNGVZBURKGIJRQUTHOVUPJZKJUEUAXYWYVKEUPQYFRAGXYVSLFMD");

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
    msg.setTimeStamp(0.112246698371);
    msg.setSource(39198U);
    msg.setSourceEntity(3U);
    msg.setDestination(50275U);
    msg.setDestinationEntity(24U);
    msg.type = 236U;
    msg.error.assign("FDBYHZIVSPOISLLSJNAAMRZYCTVUNPQJK");

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
    msg.setTimeStamp(0.943121000529);
    msg.setSource(42566U);
    msg.setSourceEntity(14U);
    msg.setDestination(37622U);
    msg.setDestinationEntity(211U);
    msg.type = 171U;
    msg.error.assign("ELIBXCSXQAUKUXGDNCDEQBLMRLBJTOCJPLZXQPTNISJWQRXZKBWGQZZWCDWIGTMJWXHLNKSMKTVYWMMFVRIKPUEEQGVGKYLFCGZOTHPBUPWOXUPUVRYHAYEBDVJDYNYZUODEVHPCKDDENLADGJNLSQPTHQAQBSXFVOFYBSTAYMFNCJJTCJORNYZEHMKASGZIILNRCLDMFIBFIKRWVHSAJPUZYAHVWZN");

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
    msg.setTimeStamp(0.924043895925);
    msg.setSource(3573U);
    msg.setSourceEntity(217U);
    msg.setDestination(19456U);
    msg.setDestinationEntity(252U);
    msg.seq = 30109U;
    msg.sys_dst.assign("RLGGJUSKWPLGPXQQYXHMPKJCYJDLYBGOXNKCMRBZVNDKVAVZQVVPRASOZFVQAFKGZNEWTBKMUWEJMUBLSWVCRAQRCJVSRHCVAJITQUBJLFMXFIYRDVEPSTMBNTTFYCQPQZYWIXEGKCFBRDDAIOUDIAHHGLRDPNBENSIUHPN");
    msg.flags = 84U;
    const char tmp_msg_0[] = {57, 82, -3, 55, 87, -56, -65, -55, 105, -35, -126, -55, 81, 3, 73, 41, 64, -119, 43, -126, 1, 9, 6, 114, -82, 74, 122, 57, 98, -103, 121, -126, -79, -102, 57, 116, -98, -75, -119, -126, -71, -99, 41, 51, 97, 111, 58, 47, 117, -63, 84, 10, 18, 59, 59, -103, 28, -50, 55, -49, -111, 109, -108, -51, 102, 114, 86, -70, 25, -7, 98, -102, 83, -117, 32, 32, -23, 27, -75, -66, -28, 63, 44, 47, -78, -78, -100, -36, -68, -50, -66, 91, 115, -60, -15, -103, -110, 37, -80, -61, -57, -19, 20, 118, -8, 66, -95, 126, 125, 4, -69, -49, -77, -96, 44, -65, 17, 93, 24, -73, 70, -3, -95, 69, 83, 65, -95, -16, 123, -91, -61, -39, 68, 113, 68, -106, -105, 35, 29, -85, 5, 94, 124, 73, -124, -7, 38, 105, -67, 119, -86, -18, 5, -82, 23, 15, -101, 74, -76, 102, 34, -3, 58, -122, -90, -44, 27, -2, -72, 57, -87, -124, 71, -108, 59, 69, -122, 83, 83, 17, 1, 33, 100, 14, 107, 48, 24, 35, -122, 36, -95, -124, 27, 126, 1, 79, -44, 15, -31, 92, 57, 51, -108, -19, 5, -114, 51};
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
    msg.setTimeStamp(0.139840094195);
    msg.setSource(6371U);
    msg.setSourceEntity(36U);
    msg.setDestination(44414U);
    msg.setDestinationEntity(101U);
    msg.seq = 21740U;
    msg.sys_dst.assign("APQKRBCYTDFTBNCOBOCFJHORURNWRLDKLUMEQMCHMUIVPDAAESVUPVWUWLHSAYXIYIGRPSXLKDEKGSLISFJNILOJFFIMCYFNXAGYBGDKLZQATXJNXIUGNKMHRNHMGNLWHDPOGTPOSWVJFJKHKZIQGBRYMTSGBXXKBTZMTCOYBJZVSACEAQXGWANVJSQ");
    msg.flags = 102U;
    const char tmp_msg_0[] = {-124, 11, -119, 27, 103, -127, 37, 100, 50, 50, -33, 68, -81, -50, -55, 33, -80, 53, -41, -107, 122, -63, 70, -35, 103, -28, -104, 67, 55, 88, -44, -80, 101, 0, -15, 79, -125, -113, 10, 62, -75, -28, 45, 16, -2, -5, 47, 50, 119, -18, 1, 1, 90, -122, -82, -35, -33, -21, -78, -53, -45, 80, -99, 59, 97, -107, 83, -84, -31, 124, 39, -10, -8, 85, -109, 15, 48, -11, -119, 90, 75, -96, -39, -6, -86, 97, 21, 52, 73, 48, 50, 94, -91, 19, -32, 93, 28, -86, 117, -42, 93, 6, 105, 114, -92, -83, -87, 18, -30, 38, -26, 51, 122, -121, -111, -67, 108, 31, -46, 96, 79, 19, 83, 55, -81, -97, -78, 19, 105, 75, 8, 35, -53, -113, 91, 21, -88, 93, -84, 52, -105, -17, -120, -100, -117, -114, -38, -27, 108, -87, 68, 48, -105, -88, -51, 115, -121, 24};
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
    msg.setTimeStamp(0.97668681842);
    msg.setSource(35843U);
    msg.setSourceEntity(60U);
    msg.setDestination(21109U);
    msg.setDestinationEntity(19U);
    msg.seq = 34988U;
    msg.sys_dst.assign("FXQSZUCENWFPEJLPKVLFUATRKDQVAHPZNOIXKYITHDYZUJSKGGIBWDXWGMNEKQYYTUCSRUISNOTHPRFDGWPVQIEVFEGFGNWDXAQHSLYBEIWJSZOZAGUMTEANERMRJHRQCADJPMHGMBYBBKDCZDNVHAHOAOZMXNCHOQVVDCUJUCU");
    msg.flags = 130U;
    const char tmp_msg_0[] = {86, -25, 44, -121, -16, 59, -106, -3, 20, 77, 58, 92, 122, 29, -86, 60, 102, -12, -47, -64, 36, 124, -82, 33, 23, 67, -41, -92, 41, -47, -56, 49, 104, -78, 74, 70, 27, 34, 68, -96, 94, 120, -22, -70, -27, -45, 32, 99, 22, -65, 106, -96, -30, 102, 89, 101, 94, -120, -87, -20, 118, 15, 41, 104, -99, 89, -69, 22, 122, -85, 92, -125, -64, -107, -127, 47, 45, -16, 95, -32, -51, 23, 11, 53, -76, 120, -68, -125, -50, -80, 70, 21, -117, 17, 89, 45, 28, 62, -51, 124, 122, 60, -101, 10, -101, 114, -47, -16, 77, 1, -52, 5, 75, -49, -30, 93, -22, -110, 54, 46, 117, -27, -118, 109, -92, -60, 84, 122, 18, 9, -59, -14, -37, -95, -87, -70, 118, -93, 67, -84, -17, -85, 16, -66, 119, 40, -85, 102, -106, 49, -128, 63, -1, 63, -92, 56, 98, 75, 5, -65, -32, 79, -77, -84, 120, -77, -83, -102, -107, -113, -97, 105, 66, -43, -53, -22};
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
    msg.setTimeStamp(0.195943756626);
    msg.setSource(56372U);
    msg.setSourceEntity(85U);
    msg.setDestination(25946U);
    msg.setDestinationEntity(74U);
    msg.sys_src.assign("BRZJYVHFVAYQKZMNFLIQPJCQUMYLXNIDOPAHCTXVJRRVCYWARJLAERDKVIKYWKLOWJSHIBETQYQPIGSHSXZNEZWZTCEWSVNSCBBPOUBEFPHKXIUBEADFNOOPKMQFGVDNEHLTOYHDNLODRGTVG");
    msg.sys_dst.assign("YOPMMNGKLFQTHOZMFIBQHMUQKCLLNKIQLYZOWMQSFVMPQZGIRMFPGRRHJBVNVWMPNSDYGRAEMSJECRDBLJKDQGBCFOYRYBBWOFZFIXRALLAYXSHTSRCVNHSQOUYYPOIFPSFWCNTUWTMTUWXVKXHEEDCAPNKCWKAGWITEOJHPTLTHGCRXNUKZEZJUIYJLXEJDHZKPAXWFEWXTVARNIOUJDVUGTECNXADEBGSBBH");
    msg.flags = 118U;
    const char tmp_msg_0[] = {-23, -119, 74, 10, 34, -3, -91, -123, 42, -44, -100, -4, 59, -10, -8, -118, -50, 114, 91, -104, 101, -45, 79, 70, 41, -51, 40, -105, -8, -126, 60, -31, -50, 38, 42, -108, -88, 66, -66, -26, -74, 23, -69, -1, 57, 16, 101, 72, 62, -90, 93, -97, -57, 102, -98, 28, -18, 111, -19, 63, 16, -36, 119, 41, -72, 108, 35, 105, -79, 59, 107, 61, -43, 70, -7, -2, -116, -102, -117, -83, -1, -105, -41, 9, 117, -29, -15, 91, 94, -79, -2, 58, -21, -94, -16, 113, -95, -120, -54, -70, 19, -88, 78, -104, 89, -128, 74, 0, 104, -84, -29, -29, 98, -56, 114, -124, -121, 78, -41, -54, -70, 70, 19, 76, 56, 90, -1, 52, -38, -16, -45, -14, -90, -32, 33, -48, -116, 60, 104, -25, 36, -56, 61, -116, 22, -19, 120, 79, 79, -87, -102, -41, 113, -27, -94, -38, -45, 69, 115, -101, -71, -91, 111, -46, -112, 124, 91, 87, 50, 38, 115, 52, -66, 122, 47, 32, -59, -19, -14, -59, 55, 26, -66, 19, 93, -76, 110, -121, -68, -120};
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
    msg.setTimeStamp(0.235254370327);
    msg.setSource(16688U);
    msg.setSourceEntity(135U);
    msg.setDestination(1977U);
    msg.setDestinationEntity(11U);
    msg.sys_src.assign("EYSKHOKESYBZGPBIMTFWDKRIIQCMZDXRUOLUHWVSRVCLJFCQERYXXOQOCGLWDX");
    msg.sys_dst.assign("BHCKGTGDSERCSONEVRRCEYHKFPQYKVWXEANPNGLZMTOGUOPADMYMFHAEWYODKFBUCOXBTHBRZSOWTDXVBHGBKBEJVTPDTYZZMFFEJHXTUZQCVQMWWPUANHZHJZPPQQMIIXLNZFNVQVNLKIGYJTPQIRJNIYRIYGUFWCSLAUHDBMMCOLZWYQJAUQMDCXOWPIIBSAYRKPTAFUOSKXVJWCTLLMSDFVLHSNGNALRUSJXUCZAES");
    msg.flags = 132U;
    const char tmp_msg_0[] = {8, -66, -108, -59, -40, 95, -91, -97, 49, -70, -47, -97, -32, -34, -55, 18, -122, -58, -61, 62, 93, -21, -108, 61, 57, 77, 60, 39, 119, -63, -71, -19, 69, 108, -82, -48, -125, -38, -64, 54, -64, 20, 94, 12, -118, -65, -96, 126, 83, -36, -9, 38, -88, -88, 125, -109, -68, 84, 99, 50, 4, -78, 92, -63, 86, -37, 98, 64, -116, -28, 15, 114, -8, -111, 113, 82, 40, -116, 28, -96, -99, 119, -76, 111, -102, -83, -50, 50, 4, 31, -31, -105, -16, -35, 39, 20, 20, 126, -125, 3, -32, 60, 19, 107, -41, -66, -2, -63, 45, 118, -103, -71, -92, -112, 67, 19, 52, -44, 31, -12, -94, -104, 107, -32, 58, 47, -56, 108, 88, -75, -71, -23, 58, 100, 41, 64, 85, 42, 38, -117, -117, 48, 95, -54, 16, -74, 69, 125, -33, -37, 68, 18, -18, -125, 5, 60};
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
    msg.setTimeStamp(0.262944284505);
    msg.setSource(25056U);
    msg.setSourceEntity(139U);
    msg.setDestination(20814U);
    msg.setDestinationEntity(93U);
    msg.sys_src.assign("SPMFHJAVYIWKRWJGSYXSSDJBGDAQQSZMAMWHBBCCEYUJENMSCMHBBQFBQPEOPELNYOUERITRADOXKLIYOTZQOHGHZCGVTRIKCZZNZPEGRURMJRXHMGZFKTLIUQNNYPWJLWXAWVXBTCFWFKEYGJPVTNIKSUY");
    msg.sys_dst.assign("WAWCDXDBSYBFSCEJKBTGPLBJAVUXAPAIZVNKWBLTIGPBTDIRSMYHWTRMEPTUUUGDAFEDSCVUIBCDXRKHAJHNWIQOIGNZOPLRPIODHSWBFYVFEMMXYCAFGFWEGYRTVMJPZAZAXLVDHMSBKRWKDINNVLYXKKEQHQMSELTJOTLJOQSJZOAOJ");
    msg.flags = 0U;
    const char tmp_msg_0[] = {-85, 123, 64, -89, -17, -49, -122, 28, -38, 98, 15, -40, -50, 14, 102, -104, 109, 122, -21, 76, 100, 121, 59, 108, -127, -128, -127, -74, -16, -103, 111, -13, -53, -33, -122, -16, 68, 0, 84, -30, -4, 27, 77, 113, -123, 98, -16, -50, 50, 111, 60, -81, 111, -7, -40, 20, 17, 73, -127, -29, -122, 104, 123, 75, 61, -49, 116, -48, -15, 52, -76, 93, -108, 72, 13, -100, -78, 33, -41, 113, 14, -11, -15, 97, 104, -65, 89, -40, -107, -91, -5, 8, -71, 87, 63, 44, 56, -60, -87, -114, 123, -96, -84, 99, -108, -29, -26, 23, 104, 65, -61, 27, -99, -79, -85, -1, 23, 16, 118, 76, 102, -72, -83, -108, 11, 116, -85, 81, 112, -2, 104, 67, 6, 21, -77, 68, 72, 59, -49, -68, -47, 78, -59, -71, -23, -24, -16, -8, 53, -87, -31, -13, -127, 15, -17, 27, 111, -101, -67, -113, 115, 95, 41, 8, -127, -80, -108, -104, 30, 82, 84, 12, -39, -110, -101, -95, -12, 8, -86, -92, 122, 81, 94, -48, 92, -66, -118};
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
    msg.setTimeStamp(0.69887178682);
    msg.setSource(63084U);
    msg.setSourceEntity(76U);
    msg.setDestination(63310U);
    msg.setDestinationEntity(74U);
    msg.seq = 62982U;
    msg.value = 155U;
    msg.error.assign("LXJICYJKNOOFTREASKTSMLIAKHIGRCYMRDRDOGUQPQRBPSBDPZYLGXXHUKKDZWULKQFZPAUOPZEPSUYHIYEVSTEBPJLTIERMCWQDCBIJCDVGLZQNTZPOZWAVNSFPWVXUNIBFWMNZKHQCMTYFFFELKBIDTBBNHDUVLQFMVSWJNYWOMNOTYHXCGOTXMJABFJJLGXOXIKNYEDSRADYEG");

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
    msg.setTimeStamp(0.315453331853);
    msg.setSource(52117U);
    msg.setSourceEntity(52U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(124U);
    msg.seq = 48190U;
    msg.value = 43U;
    msg.error.assign("FRTBXBOIMUWKSVXWAECYWHAQKCLKDLMVOTKGXTSORTJC");

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
    msg.setTimeStamp(0.0392506996514);
    msg.setSource(20232U);
    msg.setSourceEntity(148U);
    msg.setDestination(34599U);
    msg.setDestinationEntity(159U);
    msg.seq = 45238U;
    msg.value = 27U;
    msg.error.assign("MDZJGZVWLQYVUKHKMOXIRENIKXQFEHVPHCIHNSZHWELMQLZNLLLNDDKDTHYULELBKNIQUBUDVNPZTRJMXFQNBUTMADFSECVQMWKQTOBPALGYRBRAPTXKSTKSORCPPBOSARGJWZSVXZBNPNWYSVQPGWPIHDWDFIFCDWOVJVRFXUYAUSCZGHOXJCEMFUUGBRMTBTAHYSWA");

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
    msg.setTimeStamp(0.96067673674);
    msg.setSource(39888U);
    msg.setSourceEntity(203U);
    msg.setDestination(58102U);
    msg.setDestinationEntity(18U);
    msg.seq = 53962U;
    msg.sys.assign("SHRPLMQWWCRMLTYSMEVHRTIPBTPCVIXWNTBLOKJTXCAGCWQZPFZSQHKAKODGDOLZYVEJAUCKIIDHXUQCGQKDUZRJFDLMZNWUHBBFWJDPBGVUEVJAXYNIBCIVPAMFHKZYRNTFVZCODBWOIFOVXTLFKANQFXPDSEUJJUSKXRNOGOLMEPBQZASPXGYPT");
    msg.value = 0.27572305754;

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
    msg.setTimeStamp(0.638520617692);
    msg.setSource(41287U);
    msg.setSourceEntity(26U);
    msg.setDestination(29128U);
    msg.setDestinationEntity(22U);
    msg.seq = 56323U;
    msg.sys.assign("LAUQJCKIJHWDIUQKYVCFPTUQTCWXNVNMYJESQFZTDMZDGULOAABKXCWNINLXOGNSXISRWKBENBLHUGRRMHNCYPTADZCCPBFTKGGRKZGEMXMDIOOPUSLSBGIPNLCLYIJTAJXDZOAMSWLBCKDERAKUFVOSTRGEHQQMGBHYHCAJYAWVQZVRKADXSVJKDFOQVIYZJXPHFLXZPMVNSZYQJFR");
    msg.value = 0.870156322356;

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
    msg.setTimeStamp(0.482205147054);
    msg.setSource(11232U);
    msg.setSourceEntity(99U);
    msg.setDestination(18823U);
    msg.setDestinationEntity(108U);
    msg.seq = 35179U;
    msg.sys.assign("YCAHHCBRKLKDEHPBYEJZJHHSIILVDVOSTYADCNWWTTKLETRWKPTBJMQYHSZEWZVIVVSGSUWJGPV");
    msg.value = 0.0288269567632;

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
    msg.setTimeStamp(0.956988482462);
    msg.setSource(37350U);
    msg.setSourceEntity(178U);
    msg.setDestination(37069U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.322622188182);
    msg.setSource(7108U);
    msg.setSourceEntity(229U);
    msg.setDestination(51732U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.663378677129);
    msg.setSource(51482U);
    msg.setSourceEntity(171U);
    msg.setDestination(36414U);
    msg.setDestinationEntity(38U);

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

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.75210892694);
    msg.setSource(35327U);
    msg.setSourceEntity(111U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(148U);
    msg.action = 85U;
    msg.lon_gain = 0.812002715696;
    msg.lat_gain = 0.858024798389;
    msg.bond_thick = 0.145487078045;
    msg.lead_gain = 0.788154943662;
    msg.deconfl_gain = 0.268132274105;
    msg.accel_switch_gain = 0.397773774191;
    msg.safe_dist = 0.197374524224;
    msg.deconflict_offset = 0.227584311728;
    msg.accel_safe_margin = 0.604146031655;
    msg.accel_lim_x = 0.480943263969;

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
    msg.setTimeStamp(0.402442409386);
    msg.setSource(31502U);
    msg.setSourceEntity(165U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(103U);
    msg.action = 202U;
    msg.lon_gain = 0.0688278509332;
    msg.lat_gain = 0.0741034725832;
    msg.bond_thick = 0.249790010017;
    msg.lead_gain = 0.33972220225;
    msg.deconfl_gain = 0.0413405603005;
    msg.accel_switch_gain = 0.681404927845;
    msg.safe_dist = 0.638639890833;
    msg.deconflict_offset = 0.399600207567;
    msg.accel_safe_margin = 0.265306820431;
    msg.accel_lim_x = 0.970402357883;

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
    msg.setTimeStamp(0.180674851851);
    msg.setSource(59408U);
    msg.setSourceEntity(23U);
    msg.setDestination(13962U);
    msg.setDestinationEntity(63U);
    msg.action = 96U;
    msg.lon_gain = 0.367446877633;
    msg.lat_gain = 0.998852708568;
    msg.bond_thick = 0.580767152703;
    msg.lead_gain = 0.934101732723;
    msg.deconfl_gain = 0.0829032429063;
    msg.accel_switch_gain = 0.709712911597;
    msg.safe_dist = 0.659149695851;
    msg.deconflict_offset = 0.71973171565;
    msg.accel_safe_margin = 0.0479946405068;
    msg.accel_lim_x = 0.243381225422;

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
    msg.setTimeStamp(0.37286648777);
    msg.setSource(46653U);
    msg.setSourceEntity(130U);
    msg.setDestination(63631U);
    msg.setDestinationEntity(168U);
    msg.err_mean = 0.11491109466;
    msg.dist_min_abs = 0.58484050448;
    msg.dist_min_mean = 0.853191140004;
    msg.time = 0.366178281859;

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
    msg.setTimeStamp(0.176944146662);
    msg.setSource(65071U);
    msg.setSourceEntity(45U);
    msg.setDestination(3337U);
    msg.setDestinationEntity(87U);
    msg.err_mean = 0.946403460811;
    msg.dist_min_abs = 0.859177760821;
    msg.dist_min_mean = 0.48715509392;
    msg.time = 0.201568626439;

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
    msg.setTimeStamp(0.501335077023);
    msg.setSource(20780U);
    msg.setSourceEntity(142U);
    msg.setDestination(1725U);
    msg.setDestinationEntity(119U);
    msg.err_mean = 0.557899879522;
    msg.dist_min_abs = 0.489161774562;
    msg.dist_min_mean = 0.766969405849;
    msg.time = 0.440289353448;

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
    msg.setTimeStamp(0.794152787149);
    msg.setSource(43808U);
    msg.setSourceEntity(120U);
    msg.setDestination(43002U);
    msg.setDestinationEntity(21U);
    msg.uid = 6U;
    msg.frag_number = 53U;
    msg.num_frags = 177U;
    const char tmp_msg_0[] = {-58, 11, -126, -127, -50, -43, 17, -21, 77, -57, -38, -106, 108, 116, -64, 107, 126, -105, 49, -121, -113, 120, 1, -31, -15, -57, 20, -116, -19, 40, 14, -30, 21, -94, 122, 91, -122, 5, 37, -81, 36, -113, 5, 52};
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
    msg.setTimeStamp(0.251054391815);
    msg.setSource(40053U);
    msg.setSourceEntity(151U);
    msg.setDestination(27959U);
    msg.setDestinationEntity(80U);
    msg.uid = 74U;
    msg.frag_number = 246U;
    msg.num_frags = 239U;
    const char tmp_msg_0[] = {111, -3, -101, 97, 67, -50, 123, -3, 61, 52, 61, -44, 33, -67, 104, 123, 50, -9, 40, 74, -121, 70, 104, 50, 94, 31, -35, -47, 67, -59, 108, 96, 86, 19, -119, -90, -76, 101, -122, 95, 65, -127, -127, -29, 26, 100, 92, 28, -23, 88, 60, -100, 51, 56, 38, -87, -51, -8, 96, 108, 4, 103, -53, -52, 110, -22, 52, -73, 118, -95, -99, -84, 67, -97, -81, 31, -90, 106, 1, 14, -110, -74, -82, 45, -96, -62, -15, -53, 25, 17, 13, 53, 59, 106, -63, 90, -3, 13, 11, -36, 95, 22, -126, 113, 7, 113, 41, 71};
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
    msg.setTimeStamp(0.866088990997);
    msg.setSource(11334U);
    msg.setSourceEntity(166U);
    msg.setDestination(2196U);
    msg.setDestinationEntity(88U);
    msg.uid = 77U;
    msg.frag_number = 107U;
    msg.num_frags = 106U;
    const char tmp_msg_0[] = {-17, 49, 82, -21, -80, -80, -47, 87, 9, -81, -123, -91, 94, -28, 88, -107, 100, 47, -18, 18, 82, -117, -56, -44, -103, 36, 42, -41, 28, -88, -42, -31, -52, 7, 11, 2, -14, 37};
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
    msg.setTimeStamp(0.631514396005);
    msg.setSource(14887U);
    msg.setSourceEntity(114U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(186U);
    msg.content_type.assign("DKCRBSZSBQXDHGQSZJDDCUPZGUANITMTHKBUDXBSJWRRVEVIEZBUVDFBPBHOGPYYVFMFWMUKVOIQYXPVCWCXYHUCNLTEHNRWUINCGWFVDLENKRLRGNIOETYASFTMBEXDVYMYZHXQGKMPHMIOAOFLGGKJZSOVDTJPFOCNOAKHQSEBJPSLSC");
    const char tmp_msg_0[] = {-69, 50, -103, -14, 124, -103, -48, 103, -106, 29, 102, 30, -44, -88, -65, -23, 34, 41, -65, -45, 95, 92, -105, 123, 18, -9, -19, -59, 1, -123, 45, -39, -103, 1, -128, -26, 103, -126, 76, -108, -77, -52, 27, -77, -85, -103, 48, 5, -7, 30, -8, 65, 27, -65, 32, -40, 50, 64, -52, 45, -104, 38, 62, 91, 22, -59, -50, -33, 111, 80, -122, 119, 88, 11, -119, 17, 107, -81, 4, -23, -16, 67, -108, 9, -51};
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
    msg.setTimeStamp(0.508443064895);
    msg.setSource(33966U);
    msg.setSourceEntity(6U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(227U);
    msg.content_type.assign("BXRBSLPSLACKVEBZVSFBERXBHUMGFOJKHKATDGMLWDCTISLHHTCCCWMUNFVYVOZFYEQWLQOQRLAEVMGEXRUIYIXNTZIU");
    const char tmp_msg_0[] = {4, 35, -109, -78, 90, -121, 92, 43, -16, 27, 23, -63, -99, 61, -52, 98, 72, 88, 85, 61, 12, -61, 62, 126, -29, -86, 37, 36, -51, -100, 80, -97, -100, 13, -41, 9, -101, 52, -88, -111, -100, 38, 21, -90, 6, -94, 71, -54, 17, -67, 24, 40, -121, 39, 68, 2, 71, 66, 24, 91, 100, 2, -105, 48, 77, 38, -115, 113, -17, 82, 18, 119, 115, -5, -45, -99, -102, 22, -36, 117, -73, -71, -73, 50, 17, -93, -121, 126, 88, -101, 121, 42, 117, -94, -18, 123, -81, 120, 121, 34, -80, -124, -71, -56, 65, -85, -59, -26, -90, -33, 67, 90, -107, -85, -20, -44, 5, 35, -52, -102, 123, -11, 59, -110, 126, 13, -82, 59, -49, 93, 110, -28, 48, 107, -98, 12, 53, 125, -112, -3, -121, -13, -78, 70, 49, -115, 56, -22, -66, -43, 112, -5, 123, -119, -94, -14, 6, -105, 47, -18, -89, 106, -41, 109, 47, -101};
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
    msg.setTimeStamp(0.609553765211);
    msg.setSource(34052U);
    msg.setSourceEntity(122U);
    msg.setDestination(31281U);
    msg.setDestinationEntity(153U);
    msg.content_type.assign("QDMUDLTWTQBHJBFNSJMVSUUANKCCFMKVVWMBZGLAQCVXJPSGSMKKOMCMNDDN");
    const char tmp_msg_0[] = {15, -82, 91, 45, 108, -81, 111, -36, -17, 75, 91, -51, 120, 57, -50, -30, 100, 111, 75, -34, -93, -27, 112, -36, 16, 116, 106, 23, -117, 29, 75, -59, 71, -35, 67, 67, -119, 42, -63, 12, 115, -97, -122, -44, -55, -15, 10, -27, -119, 96, -61, 43, 50, 111, -20, -122, 68, -112, -34, -33, -32, 55, -118, -1, 23, 34, 70, 18, 7, -9, 1, 36, -111, 22, -33, -113, -128, -27, -81, -50, 2, -45, 57, 14, -14, -71, -90, -10, -123, -8, 48, 20, -2, 43, 72, -23, -8, -7, -59, 39, -112, -93, -29, 9, 46, -8, -10, 64, 126, -13, 59, -28, -35, 121, 71, -62, -1, 71, -24, -94, -84, 22, -102, 46, 36, -72, -53, -87, 96, 47, -56, -114, -24};
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
    msg.setTimeStamp(0.0369703964969);
    msg.setSource(10463U);
    msg.setSourceEntity(95U);
    msg.setDestination(5592U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(5.37528950972e-05);
    msg.setSource(10671U);
    msg.setSourceEntity(211U);
    msg.setDestination(3430U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.981370434808);
    msg.setSource(34364U);
    msg.setSourceEntity(220U);
    msg.setDestination(14933U);
    msg.setDestinationEntity(245U);

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

  return test.getReturnValue();
}
