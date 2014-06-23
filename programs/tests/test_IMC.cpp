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
    msg.setTimeStamp(0.744335199394);
    msg.setSource(16411U);
    msg.setSourceEntity(90U);
    msg.setDestination(53276U);
    msg.setDestinationEntity(139U);
    msg.state = 42U;
    msg.flags = 169U;
    msg.description.assign("SJWMFCLXOVPVNPEHQRAJAS");

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
    msg.setTimeStamp(0.159424510776);
    msg.setSource(39229U);
    msg.setSourceEntity(20U);
    msg.setDestination(35421U);
    msg.setDestinationEntity(56U);
    msg.state = 212U;
    msg.flags = 244U;
    msg.description.assign("TFVMCQSRDZXDPCKIFPSQNAKSTGEPRHTFXMBUNVJNNHGLOZEDJHRUQNHTOUVIWDVWPYXJFSPVHJMNCMHZFIAGKYPIYRUQDCIBEQIGOCBMAKDDRUTZBHTTELLBJCIEOYGOIKJZLQLSYYOSWOLVWFBUIYZAATVOQUHMBU");

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
    msg.setTimeStamp(0.720416830735);
    msg.setSource(6916U);
    msg.setSourceEntity(30U);
    msg.setDestination(12969U);
    msg.setDestinationEntity(59U);
    msg.state = 26U;
    msg.flags = 222U;
    msg.description.assign("UAQGLPXEGOKPXZQHQKKJPNHAXTYFKPMDZLPBWNWIIIMXRDBEJTVRJJDZOZNYQKSGOYCFRRLEFXDPLUEGY");

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
    msg.setTimeStamp(0.845512030438);
    msg.setSource(36268U);
    msg.setSourceEntity(49U);
    msg.setDestination(23396U);
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
    msg.setTimeStamp(0.974571506179);
    msg.setSource(65013U);
    msg.setSourceEntity(115U);
    msg.setDestination(59398U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.920891790268);
    msg.setSource(55090U);
    msg.setSourceEntity(190U);
    msg.setDestination(43154U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.677883558781);
    msg.setSource(39168U);
    msg.setSourceEntity(108U);
    msg.setDestination(33243U);
    msg.setDestinationEntity(162U);
    msg.id = 252U;
    msg.label.assign("FQBTWNIOBUPVSIXRFACWBCQLIYUDNBBOYQJNZWKMFOJREQYOIGVNYLWUGNATETMJJNKHXTSUGFBGJHWYGMGUKAWADORVNGVURWQLGSIJJLXMTRWQUVHPQOSFIEOXJCOQYDPDNAST");
    msg.component.assign("IGZTGALUDURCPFMZSOKLHTNSVORUEHPOWADZECCCCSPHANUWODIRJTBZVNPPZXCYZLQNIANYAFGMUWUKTUQJKNYSPTXXFVKVKVFLNQTGIBIXGYCTKMNQIFISNWCDOXDTOVCHRHXARWRMLZMZVJHMYNWBFJEIOAARDYFXMRJQLGXLZEVYLWWQIQXWTVYDLXAJGFOJGOBBJRMEUDFHYPRGKE");
    msg.act_time = 42977U;
    msg.deact_time = 21686U;

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
    msg.setTimeStamp(0.598169012654);
    msg.setSource(6010U);
    msg.setSourceEntity(138U);
    msg.setDestination(47334U);
    msg.setDestinationEntity(147U);
    msg.id = 168U;
    msg.label.assign("GPXWLRWXWQIMAFGDSWIEXLOAYEOESRINMFTMBENJXSVDSPOLRNUJWTCZKHTLIEVBKHWZVMCUCAKBPCDUIURDMCBYVSEGDWDJPREPZMCLKKOINKJTKQSVJGZAVQFEOZMPPHTXUPWZFJCLUJYNEBXBFIVUBNIRSHHQHBDOUR");
    msg.component.assign("KDELKRZUQXOFBQMGFELVXWAEOKGCDIPZBDHJOOGKTAYKUWDURQPQCVOHUSNQIEMSQNPZJRHHM");
    msg.act_time = 48627U;
    msg.deact_time = 38814U;

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
    msg.setTimeStamp(0.582947070485);
    msg.setSource(28739U);
    msg.setSourceEntity(66U);
    msg.setDestination(41399U);
    msg.setDestinationEntity(209U);
    msg.id = 74U;
    msg.label.assign("IBSRPYULIDIIWAEETCFZGLMFRQXVMOIVAYKYYJXQHDMZQPQ");
    msg.component.assign("XNFYWLTDLUMUCSHDJNOSRCVFUJLMVKZSYWLYQRRTEQVQOENDXLVBWPWSVHECQJWGPEJEDECAGBVOOVRCFFHKRERQPGNKXXGDFGZZKIBUUTYIORLUGALWZJQADKKKYWNKECCLCXJTDTFJVPFVHWTZSUYQHGLMMZJXZJQSORITHPMASDYKIUOTMOWRKSQBOAXMBPICDXBFTPTB");
    msg.act_time = 25737U;
    msg.deact_time = 18943U;

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
    msg.setTimeStamp(0.750218196296);
    msg.setSource(13549U);
    msg.setSourceEntity(242U);
    msg.setDestination(30227U);
    msg.setDestinationEntity(34U);
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
    msg.setTimeStamp(0.477532744078);
    msg.setSource(12307U);
    msg.setSourceEntity(175U);
    msg.setDestination(16388U);
    msg.setDestinationEntity(56U);
    msg.id = 207U;

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
    msg.setTimeStamp(0.211491439798);
    msg.setSource(45774U);
    msg.setSourceEntity(66U);
    msg.setDestination(22600U);
    msg.setDestinationEntity(25U);
    msg.id = 131U;

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
    msg.setTimeStamp(0.972174402525);
    msg.setSource(45684U);
    msg.setSourceEntity(151U);
    msg.setDestination(52510U);
    msg.setDestinationEntity(107U);
    msg.op = 187U;
    msg.list.assign("ATPYAXNDEAQTDNLOEVARZJYRJTUPQGLDDOSOWUWRAYWRZYWYEFJWLHLQIWKZMOOZPZDLRXWBNDBUJSLTCRSRUMSZCKFXXTMQZBLCXQ");

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
    msg.setTimeStamp(0.42909352041);
    msg.setSource(32102U);
    msg.setSourceEntity(249U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(26U);
    msg.op = 38U;
    msg.list.assign("HUMRGOHCPRRVAAVMMZBJLLSAUSPJCVTTIENGDCDKGDDZSFLKTAXMQODAIJWGXBCMJEMREWTHBXBRKUKSURDFIYPKSXFJFWHGFWTHZQOMBTGISOHNRWGQFPYLUITBTBGDNHEKUCHIVXE");

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
    msg.setTimeStamp(0.985863470606);
    msg.setSource(48102U);
    msg.setSourceEntity(200U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(189U);
    msg.op = 94U;
    msg.list.assign("WKLZLLZDOXXSOUQRBMFENPVGUUMOXTGMRZRMBIENEITBNJFNOCHDRIWIZSKTEVCUKNXXBUBNZBPHLFKVDQOJQCQTHYKBTVKGMAEZTKXGRORHPONQZDFPLUHSDPJQFPSAWPXAHAONHCSIOKVCJJDCFUTDAHPGEMEVAISXWYBKAPJIYUWCWYGDBWDZYYCMSSYGY");

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
    msg.setTimeStamp(0.669542849557);
    msg.setSource(62791U);
    msg.setSourceEntity(71U);
    msg.setDestination(49270U);
    msg.setDestinationEntity(134U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.536122611208);
    msg.setSource(7981U);
    msg.setSourceEntity(9U);
    msg.setDestination(6409U);
    msg.setDestinationEntity(198U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.672958556494);
    msg.setSource(36477U);
    msg.setSourceEntity(33U);
    msg.setDestination(49774U);
    msg.setDestinationEntity(211U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.48658819303);
    msg.setSource(21612U);
    msg.setSourceEntity(31U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(29U);
    msg.value = 132U;

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
    msg.setTimeStamp(0.17159013366);
    msg.setSource(39728U);
    msg.setSourceEntity(94U);
    msg.setDestination(18533U);
    msg.setDestinationEntity(164U);
    msg.value = 226U;

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
    msg.setTimeStamp(0.794004193561);
    msg.setSource(14689U);
    msg.setSourceEntity(185U);
    msg.setDestination(2397U);
    msg.setDestinationEntity(132U);
    msg.value = 121U;

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
    msg.setTimeStamp(0.512054676202);
    msg.setSource(59645U);
    msg.setSourceEntity(51U);
    msg.setDestination(41589U);
    msg.setDestinationEntity(29U);
    msg.consumer.assign("BOHQOKFDHZUTLWGJDEIGSHWMIYPYBQTLDVBNZAJSGBQVIRAOYTABCFGRDARMTKXZEKUCFCJKLRFUVSRYCPCJGTWEJSOAKCIXNVYUQBQDHYMWIPTUDOWZAGCYKVO");
    msg.message_id = 14884U;

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
    msg.setTimeStamp(0.330294289147);
    msg.setSource(61358U);
    msg.setSourceEntity(148U);
    msg.setDestination(27213U);
    msg.setDestinationEntity(145U);
    msg.consumer.assign("AQXJCPDNKFOCYQCRHAMYGEZRFAMRHHPIHMWBWQSUGEQBETXNDVHOPERHCWVQVVALZUMRBLXBNXTESXLUZGVOFGQWYTLLUNOKDEQBFLRCOGPVASODYJNWKBYUSHTXTZQNRPWWGCTKGFAZCYMCOGHYA");
    msg.message_id = 35256U;

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
    msg.setTimeStamp(0.482853472667);
    msg.setSource(64136U);
    msg.setSourceEntity(126U);
    msg.setDestination(10048U);
    msg.setDestinationEntity(29U);
    msg.consumer.assign("VNVZLEFHKYOBZVRQGXBRMWAOOWWXAETRFLVWXQBRDSJZMCFNFXDFUNTTISAVL");
    msg.message_id = 27222U;

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
    msg.setTimeStamp(0.310972048084);
    msg.setSource(36839U);
    msg.setSourceEntity(210U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.312262651271);
    msg.setSource(34282U);
    msg.setSourceEntity(74U);
    msg.setDestination(54382U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.859063017084);
    msg.setSource(41589U);
    msg.setSourceEntity(210U);
    msg.setDestination(13911U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.762996976289);
    msg.setSource(8462U);
    msg.setSourceEntity(43U);
    msg.setDestination(62942U);
    msg.setDestinationEntity(14U);
    msg.section.assign("SGPBGPHCMHNYIPQCDTCALYDWPZEZLALVUNBKNTQATWZCQQVLFXIOFZLDXNBFMYOHPUJPWTLHEHEMXD");
    msg.param.assign("XVVOQZJRLUUDYVOREKBSDWDSIREIGCPGEDJMRQFDLDBHHFTGILXZNVVIKXBWJNCXKVCPDGEFZWTXMCBQSUHKGZRFVGODPNXQJXHWMJEGNWYWBYAOMTQPOAPNQCTOJUZAUIAPAZXQZYYNIVJSUCE");
    msg.value.assign("FSFTBIUWBLFHZYCGHZKXWBHOVOTZEHVSMJNRIVGGNJBLRCDDTILWXDYLVWVILACHGFZAJMUNPIIQZEGPQFRXFRAYPPEYDHMSJHPEYYOXDWWDRXVJUQBMSNRAIFAFFEITGRAKKUTBPQEPMBYJIRZUSOZAGENKOCXPEZ");

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
    msg.setTimeStamp(0.803394086959);
    msg.setSource(10844U);
    msg.setSourceEntity(202U);
    msg.setDestination(45867U);
    msg.setDestinationEntity(54U);
    msg.section.assign("PXBDUKSGDONJHLYEQBACSMHWIATJXNXNDJBMACAOYSCUMEVIWUN");
    msg.param.assign("TGEAVFQFPMDTETIVMPRNMHWDKWJNFHVKXHNKYOEYURPYVJQLZLAOGFGAAPEDFCNGREUSTYSLCZNHANAQCDTQZSABPXUVGDBAPRHEOFDRCFXCRKQIBMIYPZCAFOKVMVJSZCVGKCHNJMTAESQTSTOJTJIUNREGOXLXXJOWGLEPSBYONMJOKLWIKDBZIQUZRXQMUYLXWNWQIPMLSCULQXKHIWUHB");
    msg.value.assign("FIWDVFXLVCUBONSLVRQEXHEQMGKJBJKGHCSIPQEDMRIDZYYUFNMQBFIOCXPLWIJJEZHOOKEWMDCFUGRGMXTOYEADQNJZUQCJWREHCGYXQWQNDJGZRDZOCMEXAPNRVPZPATMKNCQSHTJZBUFZYBEVRIYBXRS");

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
    msg.setTimeStamp(0.102283619691);
    msg.setSource(30387U);
    msg.setSourceEntity(15U);
    msg.setDestination(14109U);
    msg.setDestinationEntity(82U);
    msg.section.assign("YUOCXIFBTMBOCCLXNUFC");
    msg.param.assign("BGKJPQTECQSAIQKLQJTDEZSYWPTCULBJDCMRKSPBDSVCMPMKRKLRNKDPFYGCGIRVHHRXXWQLNFTAOFIZZBNHGMESTIZBCAPJKPUYWGSFLUQHNSDXVTJPATOMXHRHLKEQWYPYLOVG");
    msg.value.assign("FPQWTYXRUJLKMRMXNICYIQZBUDLPFWYLIBAUHXANFDYMMCVJQLFCRRTIXINAZVTTPDGKRSAXJZKVIYOVPYBHGHJNMHZVQEZPJXMBCEYOXASAEUEHTYMUXEHGWCNQFMILOHWGGUHNCETFDRZSIXTVZBLWPSKBOQDGLCQWKILSOFQDRDADAGKREOSBUEFKEVGMJDRZZTBPFOUNQSJKSCPYBKH");

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
    msg.setTimeStamp(0.588121057678);
    msg.setSource(25283U);
    msg.setSourceEntity(193U);
    msg.setDestination(10097U);
    msg.setDestinationEntity(241U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.85009980329);
    msg.setSource(7294U);
    msg.setSourceEntity(160U);
    msg.setDestination(27721U);
    msg.setDestinationEntity(200U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.0147689125619);
    msg.setSource(27444U);
    msg.setSourceEntity(49U);
    msg.setDestination(5755U);
    msg.setDestinationEntity(35U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.728665443663);
    msg.setSource(6105U);
    msg.setSourceEntity(182U);
    msg.setDestination(58808U);
    msg.setDestinationEntity(143U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.464545698642);
    msg.setSource(57071U);
    msg.setSourceEntity(140U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(9U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.0531304207431);
    msg.setSource(64656U);
    msg.setSourceEntity(148U);
    msg.setDestination(7013U);
    msg.setDestinationEntity(53U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.41935932991);
    msg.setSource(59731U);
    msg.setSourceEntity(191U);
    msg.setDestination(54137U);
    msg.setDestinationEntity(113U);
    msg.total_steps = 13U;
    msg.step_number = 99U;
    msg.step.assign("DPWVYYSUJPSJMGMGUGRTDNWLARUEMFFKOYVXRREQSNAKIEKAHCLZEFRHCYZPCWTQYPQLIIWTKUDYLEKMIOBFIZZNMOAVYZIJMRLGTPNXDNEYAHSSCNNEFVAUOJHRWXIOBILXGXCGFRBAJXDWQQPBOJABTIOOFSKQXSHNWVXAGJRPBK");
    msg.flags = 66U;

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
    msg.setTimeStamp(0.339583889332);
    msg.setSource(7649U);
    msg.setSourceEntity(213U);
    msg.setDestination(6101U);
    msg.setDestinationEntity(54U);
    msg.total_steps = 39U;
    msg.step_number = 48U;
    msg.step.assign("QBLUGBPJYVTEVFKJNZDHPNYUMIDBWMDDDSFVVCEEYMXZWKMLNSIJXICBTXLVXEVAFMOYVPYBUOSJZROBQSTMKETHTPGGEWHOSMRIASUWBAOJLEGALHZNVEKTQQJAJIFXJGAXCMOIPNAKNDLUBYRPDBTRUDWGWNFOTYXHWKMIVMEQOGFOKRXQAIFYGNCZUSZDFCRROJLZNXHIRFCKHLBSIULWPPZCSADTPHWLQUQYKUQ");
    msg.flags = 112U;

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
    msg.setTimeStamp(0.46726902918);
    msg.setSource(49907U);
    msg.setSourceEntity(40U);
    msg.setDestination(18753U);
    msg.setDestinationEntity(65U);
    msg.total_steps = 102U;
    msg.step_number = 254U;
    msg.step.assign("QTSLJBIDKTPHQKUCRCVQHWPJMYHXTBDWAMQKUMDYBIRNOYACCCYWODPWYXVSJENYGHY");
    msg.flags = 150U;

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
    msg.setTimeStamp(0.140413566481);
    msg.setSource(56262U);
    msg.setSourceEntity(251U);
    msg.setDestination(50334U);
    msg.setDestinationEntity(18U);
    msg.state = 139U;
    msg.error.assign("RVLHVOXFZVEONNSOBLCDOZIBGRPWGWLWGMFYATYGIFEAKKFRQDMHPZUXKZSNAQMCPRQXYGQIICCSDWZTEJRLHBPZTOUZLAEJJRQCZKWKDBURXTJGSEFOYPIJNJYCVIMWA");

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
    msg.setTimeStamp(0.28876939688);
    msg.setSource(13775U);
    msg.setSourceEntity(11U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(23U);
    msg.state = 128U;
    msg.error.assign("TCVKZYZJZYMVZDGWWWEADUGEWDBXGROZWXFYWXCVSUEHVIFJLXTFNKSYXXBGDHFQMINWK");

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
    msg.setTimeStamp(0.181773051935);
    msg.setSource(37401U);
    msg.setSourceEntity(81U);
    msg.setDestination(37040U);
    msg.setDestinationEntity(25U);
    msg.state = 213U;
    msg.error.assign("NRJCOYMRMJTSPWLIXAEFNXHUZTUDMWXFXCXBCCIKALYYWZREYSITWQAQRZJUFZZPLMTPLREIADHVVZUGKVQPDFKVVEGAPSUCNWSMVHJLNPYNHTGMABAFILXDGPLQHKKUBRHCLSKOCYRWBSPIDGRBMZL");

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
    msg.setTimeStamp(0.650181444947);
    msg.setSource(18349U);
    msg.setSourceEntity(253U);
    msg.setDestination(24076U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.706318040297);
    msg.setSource(57537U);
    msg.setSourceEntity(248U);
    msg.setDestination(34336U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.116003918903);
    msg.setSource(44220U);
    msg.setSourceEntity(27U);
    msg.setDestination(55134U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.487482200457);
    msg.setSource(46513U);
    msg.setSourceEntity(162U);
    msg.setDestination(2606U);
    msg.setDestinationEntity(51U);
    msg.op = 64U;
    msg.speed_min = 0.569489373975;
    msg.speed_max = 0.160428026662;
    msg.long_accel = 0.262213264245;
    msg.alt_max_msl = 0.585425947199;
    msg.dive_fraction_max = 0.662012028003;
    msg.climb_fraction_max = 0.281391168836;
    msg.bank_max = 0.543981564443;
    msg.p_max = 0.361380584015;
    msg.pitch_min = 0.661713353387;
    msg.pitch_max = 0.924530925337;
    msg.q_max = 0.995317326512;
    msg.g_min = 0.900674506678;
    msg.g_max = 0.356750217263;
    msg.g_lat_max = 0.390140978295;
    msg.rpm_min = 0.242802730907;
    msg.rpm_max = 0.917776218216;
    msg.rpm_rate_max = 0.557974010124;

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
    msg.setTimeStamp(0.491129139449);
    msg.setSource(57232U);
    msg.setSourceEntity(251U);
    msg.setDestination(55394U);
    msg.setDestinationEntity(213U);
    msg.op = 137U;
    msg.speed_min = 0.40219124847;
    msg.speed_max = 0.912988656629;
    msg.long_accel = 0.667727403196;
    msg.alt_max_msl = 0.118793425758;
    msg.dive_fraction_max = 0.148880787401;
    msg.climb_fraction_max = 0.794143676695;
    msg.bank_max = 0.0934492011434;
    msg.p_max = 0.924552679836;
    msg.pitch_min = 0.828996482656;
    msg.pitch_max = 0.211168088536;
    msg.q_max = 0.353402411505;
    msg.g_min = 0.146443806501;
    msg.g_max = 0.148216038261;
    msg.g_lat_max = 0.235755564836;
    msg.rpm_min = 0.978224043773;
    msg.rpm_max = 0.295985732745;
    msg.rpm_rate_max = 0.254674272728;

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
    msg.setTimeStamp(0.136131116476);
    msg.setSource(27040U);
    msg.setSourceEntity(209U);
    msg.setDestination(38020U);
    msg.setDestinationEntity(204U);
    msg.op = 195U;
    msg.speed_min = 0.122500478617;
    msg.speed_max = 0.694833248099;
    msg.long_accel = 0.698925970763;
    msg.alt_max_msl = 0.404995618418;
    msg.dive_fraction_max = 0.798460995869;
    msg.climb_fraction_max = 0.735597021942;
    msg.bank_max = 0.0427020389607;
    msg.p_max = 0.483257710294;
    msg.pitch_min = 0.576969986935;
    msg.pitch_max = 0.346930939555;
    msg.q_max = 0.478035843507;
    msg.g_min = 0.487787343038;
    msg.g_max = 0.885657068353;
    msg.g_lat_max = 0.0326720965984;
    msg.rpm_min = 0.148633959059;
    msg.rpm_max = 0.540862216782;
    msg.rpm_rate_max = 0.655683702926;

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
    msg.setTimeStamp(0.828544688618);
    msg.setSource(18762U);
    msg.setSourceEntity(240U);
    msg.setDestination(39571U);
    msg.setDestinationEntity(92U);
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 194U;
    tmp_msg_0.plan_id.assign("JVFSXYCNXFAYEWBYCUGRKWVHKIWBSBAAMMJUWRSOPJXQSEBEMRFPENPVXMHOGATAPXTJUPMIHPIOFCDLXEQITMZQA");
    tmp_msg_0.plan_eta = -1214844044;
    tmp_msg_0.plan_progress = 0.156834710642;
    tmp_msg_0.man_id.assign("IJYJEWWKMDIGIZXMVPVGPZEIKBCQSPLJTXAMQDYELYHKDCGKLPTQSFJPBJGYEXYDGQFLHRFTWBOAPNXZHMNYXVUHEHRNFTEGHMVYCMJXXSFDNYBRAXOKSIPWAWOUMZSNPFBZULEOZUCOGSJKCZIFNPZOILPUAD");
    tmp_msg_0.man_type = 10201U;
    tmp_msg_0.man_eta = 1936257198;
    tmp_msg_0.last_outcome = 103U;
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
    msg.setTimeStamp(0.683730171492);
    msg.setSource(17494U);
    msg.setSourceEntity(28U);
    msg.setDestination(28696U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.488976176681);
    msg.setSource(57517U);
    msg.setSourceEntity(203U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.153678820636);
    msg.setSource(43179U);
    msg.setSourceEntity(48U);
    msg.setDestination(4673U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.615090733281;
    msg.lon = 0.778282729921;
    msg.height = 0.75195053003;
    msg.x = 0.0598374534672;
    msg.y = 0.697782474881;
    msg.z = 0.00588244968555;
    msg.phi = 0.737463598608;
    msg.theta = 0.630486477261;
    msg.psi = 0.0282477131565;
    msg.u = 0.509108818246;
    msg.v = 0.515615851157;
    msg.w = 0.781800110397;
    msg.p = 0.80139755205;
    msg.q = 0.249663452777;
    msg.r = 0.771316666285;
    msg.svx = 0.784405033527;
    msg.svy = 0.762790709661;
    msg.svz = 0.369894402164;

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
    msg.setTimeStamp(0.855195971244);
    msg.setSource(39189U);
    msg.setSourceEntity(238U);
    msg.setDestination(49502U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.185215672465;
    msg.lon = 0.701138942249;
    msg.height = 0.399958271096;
    msg.x = 0.236373730631;
    msg.y = 0.366207867481;
    msg.z = 0.338123732661;
    msg.phi = 0.757585263002;
    msg.theta = 0.570022416918;
    msg.psi = 0.0275989843876;
    msg.u = 0.998346322865;
    msg.v = 0.634294155124;
    msg.w = 0.569132168209;
    msg.p = 0.0146886335341;
    msg.q = 0.388851731104;
    msg.r = 0.577700363225;
    msg.svx = 0.45575049001;
    msg.svy = 0.332843609032;
    msg.svz = 0.201764191662;

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
    msg.setTimeStamp(0.638942743316);
    msg.setSource(21733U);
    msg.setSourceEntity(82U);
    msg.setDestination(2710U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.883899379387;
    msg.lon = 0.332318771426;
    msg.height = 0.916434119727;
    msg.x = 0.249471472045;
    msg.y = 0.479532825654;
    msg.z = 0.336717715924;
    msg.phi = 0.348077651138;
    msg.theta = 0.0738228123872;
    msg.psi = 0.923325774221;
    msg.u = 0.72036813121;
    msg.v = 0.487830881267;
    msg.w = 0.644636898312;
    msg.p = 0.827770083399;
    msg.q = 0.297915428858;
    msg.r = 0.774630926445;
    msg.svx = 0.863716354676;
    msg.svy = 0.127788041192;
    msg.svz = 0.736488417849;

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
    msg.setTimeStamp(0.650184468114);
    msg.setSource(47043U);
    msg.setSourceEntity(237U);
    msg.setDestination(27371U);
    msg.setDestinationEntity(199U);
    msg.op = 10U;
    msg.entities.assign("JYPSLDBXPCULGSCPAHWQHNYMPDQYVTURWEBTXJOBAOYTBGYOSWQEBISETIMZCSEFMLGKKAPZVKCQSTZIWZQIFQFLGCXKNCWJRHFJROMUMXNJFLXANGOGAPLTLOVSGKRXEUTRJQXEQFRTFCYCYDWIUPAODUEYRNSWIYQZPHXNENMLNVIIQCGHKODMLPVDUZUDGBKKJUDHFMHWRGMBWRHXFYODEVARATFJAITSWINZKAJSBZXOUZBKV");

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
    msg.setTimeStamp(0.0588197696123);
    msg.setSource(37242U);
    msg.setSourceEntity(67U);
    msg.setDestination(21566U);
    msg.setDestinationEntity(69U);
    msg.op = 37U;
    msg.entities.assign("CFCWYFMWGWDMQHBTGJTILMAMSSZILMMPWPHBQJZBKATTDNPSMYQVADCFKUYVECVEFBNZNZEZFUOFJUBWOOXUZLJYSIWQYELVSJXRQHUZRXLGOHTRPQKUHRIZHPBFEMXQBHKWLTAJKCNLEVUXIOAIOJSONKBROQRGDMXXAVLOPUVSKADTIQYPRZVCUZHVFVPYFNOCIATSCXCDR");

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
    msg.setTimeStamp(0.938257507946);
    msg.setSource(51686U);
    msg.setSourceEntity(23U);
    msg.setDestination(58962U);
    msg.setDestinationEntity(61U);
    msg.op = 214U;
    msg.entities.assign("BHZMSPKGZNJIQPQIIWOPXPZLDCZELSOTSDRYCAZEGPWBRDTFLUGFGNOALVZVHNZFFKZOTKIBJBCBXKMXQMMKNLYIWQEBXADLUITKHRSMLPYWBRGXGSIAEOVDAHHSQEXUTYJXJQSSFAHHJTUURMEHZDJCWAGSDIMVPVRNIYOYJXG");

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
    msg.setTimeStamp(0.132884342417);
    msg.setSource(40807U);
    msg.setSourceEntity(93U);
    msg.setDestination(45649U);
    msg.setDestinationEntity(38U);
    msg.type = 240U;
    msg.speed = 38824U;
    const char tmp_msg_0[] = {85, 103, 103, 30, -7, -93, -121, 56, -69, 98, -30, -11, 37, -16, 34, 78, -40, -50, -100, -101, -38, -118, -11, -68, -13, 23, 80, 106, 53, -120, -28, -97, 80, -102, -24, 113, -62, -71, -2, -108, 87, -37, 110, -104, 29, -18, -51, -46, 122, 70, -52, 46, -105, 18, 120, 56, 9, -29};
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
    msg.setTimeStamp(0.53768995644);
    msg.setSource(59785U);
    msg.setSourceEntity(205U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(96U);
    msg.type = 101U;
    msg.speed = 14670U;
    const char tmp_msg_0[] = {-40, 38, 60, -98, 110, -29, 40, -108, -74, 49, 60, -63, 95, -86, 109, 124, 99, -102, 83, 47, 77, -18, 94, 19, -31, 60, 6, 25, 115, -102, 126, -120, 107, -89, 17, 49, -30, -39, 50, -93, 124, 93, -93, 110, 57, -83, 82, -69, -51, -113, -53, 52, -37, 17, 67, -103, -107, -30, -87, -45, 2, 15, 4, -118, -70, 119, 108, 92, 30, 72, -87, -29, -44, 15, -117, -75, -113, 42, 3, -43, -67, 19, -90, -61, -70, -52, -5, 11, 86, -92, -25, 40, -29, 117, 1, 2, -90, 73, -43, -74, 33, -88, 96, 55, 51, 85, 29, -8, -117, 67, 36, -42, -124, 104, 33, 99, 126, 98, -116, -97, -112, 29, 61, -23, -9, 12, 93, -84, -77, -36, -21, 54, 22, -105, -70, -40, 20, 21, -128, -37, 2, -79, 38, 13, -25, 43, -116, 123, 67, 100, 90, 89, 90, -7, 76, 103, 92, 63, -15, 121, -124, -27, 66, -4, -115, -89, -5, 90, -97, 79, 104, 122, 47, -85, 25, 0, -100, -94, 81};
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
    msg.setTimeStamp(0.551577737592);
    msg.setSource(50038U);
    msg.setSourceEntity(46U);
    msg.setDestination(33874U);
    msg.setDestinationEntity(21U);
    msg.type = 63U;
    msg.speed = 4846U;
    const char tmp_msg_0[] = {-56, -81, -70, 60, 108, 66, -58, -89, 96, 76, -101, -93, -113, -65, -92, 41, -69, 41, -111, 122, -113, 24, 3, 21, 106, 3, 16, 120, -29, 53, 115, 72, -30, -119, -103, 51, -115, -119, 3, 31, -106, 62, 107, -85, -67, -104, -103, 55, 48, 70, 67, 109, 67, -80, 6, 62, -76, -63, -100, -106, 99, -32, -19, 7, 66, -45, 29, 42, 31, -92, 120, 82, -60, -19, -1, -52, 119, -4, 35, 66, -49, 48, 112, 79, -38, 122, 50, 109, -107, 31, 88, -52, 84, 21, 50, 113, 27, -64, 114, 87, 52, -125, -21, 96, -125, 86, -53, 90, 103, -74, -41, -33, -42, 107, -6, -63, -106, -45, 85, -84, -123, 104, -126, -51, 36, 63, 9, -56, 58, -123, 98, -9, 41, 71, 110, -34, -91, -18, -67, -64, -43, -15, -73, 108, 35, 42, 119, 11, -25, -16, 69, 0, 101, -4, -36, 85, 106, 18, 107, -45, 80, -33, 71, 90, -81, 106, 20, 14, -27, -29};
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
    msg.setTimeStamp(0.450129749719);
    msg.setSource(56513U);
    msg.setSourceEntity(215U);
    msg.setDestination(19904U);
    msg.setDestinationEntity(191U);
    msg.op = 116U;
    msg.tas2acc_pgain = 0.0522203292791;
    msg.bank2p_pgain = 0.379636639135;

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
    msg.setTimeStamp(0.840734208842);
    msg.setSource(49043U);
    msg.setSourceEntity(34U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(152U);
    msg.op = 230U;
    msg.tas2acc_pgain = 0.166931705296;
    msg.bank2p_pgain = 0.340039617604;

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
    msg.setTimeStamp(0.81324712146);
    msg.setSource(28340U);
    msg.setSourceEntity(221U);
    msg.setDestination(52687U);
    msg.setDestinationEntity(140U);
    msg.op = 12U;
    msg.tas2acc_pgain = 0.490336662058;
    msg.bank2p_pgain = 0.377659094064;

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
    msg.setTimeStamp(0.0838869213772);
    msg.setSource(59064U);
    msg.setSourceEntity(64U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(75U);
    msg.available = 2832808608U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.142785166716);
    msg.setSource(14737U);
    msg.setSourceEntity(19U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(52U);
    msg.available = 1213906882U;
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
    msg.setTimeStamp(0.434557130697);
    msg.setSource(15624U);
    msg.setSourceEntity(215U);
    msg.setDestination(16252U);
    msg.setDestinationEntity(216U);
    msg.available = 907993385U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.780994846292);
    msg.setSource(52577U);
    msg.setSourceEntity(49U);
    msg.setDestination(11046U);
    msg.setDestinationEntity(243U);
    msg.op = 164U;
    msg.snapshot.assign("HJVSOMALBOZSJOAGGCIORAWBQWKGRQTYORYKHJCDACFXWTFXMRNZHEQOLWASBYPCYUUFRTMRBUGTYAGDGOXJTNQFNEVGZWWRIUIKBPMQUZJMXJSVJRIKTQJMFQTSBDYBQDFCOBDIUXTMSBVMVZRWZPLDYJHH");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("INRCNVZBBDTZUPROZAWDMRVXEBXEXSPOUJVGUXIYXUBTIUKDAOBAAYALDVZFKXGUCNJQRIWSJHYRSPJJHDOOWZUICECYTWKYPSMMPZEKEQZQWZHWGKQHAXLRMOQIFVGONUCQEUMLZAGFVNTPHTKHESRACNWBPIVFHOPUDXQQKZGNTEKMQVLIGNCRITRLJHHOOWWM");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NEHUFWMECOHVPFXFZIYXLBOJRQGCHTGFNWRXHOEKPQXIFAIXEXGEAVSFQELGQLAJADENPMTKTECXBPUMIXASEUUITLPMGUBBBOSTVSJZOVLWRKONDZZQUMRTIQOUVJVYYWSUHVQVNPQJMPAJDYNJHCGWAOCYRSCGSYYCRRMIN");
    tmp_tmp_msg_0_0.value.assign("JRHCBGVRDOZMBPPZAECPQFQNPQOBFTVKMLQQBDQUHLMZLEBRCMDTEIWRDYGJBNFSBSCIMSUFHTEYYKQAEHPXMCFRAPNIUWO");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.184872572628);
    msg.setSource(25006U);
    msg.setSourceEntity(92U);
    msg.setDestination(33044U);
    msg.setDestinationEntity(247U);
    msg.op = 90U;
    msg.snapshot.assign("BXRFZPXHWCBLIKDDVQEMISUAVEGGFYEFJCNNGGAEFWITRFPLKOEGUEKUQOLAJROSMMPWKDEYXSLEJIXNILJIHWKVUUFNCMSRPSZQHYJZAW");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.575265364844;
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
    msg.setTimeStamp(0.927503417501);
    msg.setSource(34254U);
    msg.setSourceEntity(154U);
    msg.setDestination(13377U);
    msg.setDestinationEntity(150U);
    msg.op = 2U;
    msg.snapshot.assign("YZVOGFMARBLRFVTHKPGAYUFUFUEAVPVJCSMNYAIBBTBDDXJPPZBJAVQOINBGIUFOMVTHXFEYYEDNLWJBKWARKRTCKOMYXKZIEUQRNQROXGIDJZRHNWXSSQDSWKNZTGYWNUHWAMZYOFKSWZ");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 252U;
    tmp_msg_0.time_remain = 0.493271626758;
    tmp_msg_0.sched_time = 0.673146636976;
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
    msg.setTimeStamp(0.595699793329);
    msg.setSource(14588U);
    msg.setSourceEntity(225U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(108U);
    msg.op = 164U;
    msg.name.assign("CUNISSCFBEAZAKEHQZFOUPBPVHKCDDVBYTFMUSRASLMOJEQFXZYKCAWBFRTFJPVIXESMYUOSMZTWTSGPXGLKIXVHTGGCFYGDKPUJFWASNRTEQQPRINDNUJSNHNIZJMQUQOJAKZYGVTVDDGNMCVBPTIWXTMOGLIFVXRYTOBIEXKYDKHGVXZLROYJZBCXQKDUZRLMLCWAIUHKVCOLXBAWFDJCHLDHJPELYPAH");

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
    msg.setTimeStamp(0.783556911858);
    msg.setSource(30020U);
    msg.setSourceEntity(144U);
    msg.setDestination(9113U);
    msg.setDestinationEntity(175U);
    msg.op = 118U;
    msg.name.assign("GOSWXFNDSIDUUAKTBYZCDGGINOLLGCMMCVBALBQQMEIUXOSOFDAVMOOWONFGURHTSPDQAYRRERSQDCKHJXTIKHUPINVXTMWJTNYRGJFNFBKFYTYEXVBVNGDASVHCWHTMNBWQZIPEAJWANKCFVHZEPYKZXTYZTWLBQVFJRWXRXIRUFFGEDSPPWUIBEIXOBRVUGCJLCGDZOMKZPSYHSLYCQJLHPXKZ");

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
    msg.setTimeStamp(0.791778163456);
    msg.setSource(48279U);
    msg.setSourceEntity(160U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(87U);
    msg.op = 238U;
    msg.name.assign("QNDWXQXGDTHVSCRSOGDQAAVVSTQUJTTPZYLGWPEWKBVUWIAEGTFURDDNUSCDBKBCVKCERZZBYXHDIJLYPXUSYZPNRE");

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
    msg.setTimeStamp(0.699285154852);
    msg.setSource(41506U);
    msg.setSourceEntity(127U);
    msg.setDestination(27133U);
    msg.setDestinationEntity(155U);
    msg.type = 153U;
    msg.htime = 0.337105858433;
    msg.context.assign("BZBOFUWXSINIENTJAWHWP");
    msg.text.assign("EXKSFQVWMCHVHUAZHOPCYEPZLWSJSTCQYYXXTFWBXKXDDZEBMNIHKCYCDWQRZGIAPOUEJPOZDJOEJDTTDNKXXBWPYFKCJAMYW");

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
    msg.setTimeStamp(0.93513457287);
    msg.setSource(11649U);
    msg.setSourceEntity(107U);
    msg.setDestination(44125U);
    msg.setDestinationEntity(206U);
    msg.type = 162U;
    msg.htime = 0.568865073532;
    msg.context.assign("JKASTTOTYEKUMKJNIKNQELWFEEGMYMHTEIQWBDGWSLUXVMIGZVFABCLWKAFXWUFVBP");
    msg.text.assign("WCVJGQBRLMHRTAQOAPPTPFDELZDGDYHXUMIOZGGVHKWDZAYHABUZNGAOYNIOQASPHDNWFYJEISEHBBKUTNWCIAUWLYUEEWNFEIOKJVOJKZRVSDUXLLZKUADJRMRYMFROJCSCWPLBMROEJPBVUIQNURHNTRSIDCSFVKSBFZBXICLDAPCIRVTFCPQSKMYVBJETXUG");

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
    msg.setTimeStamp(0.443027058902);
    msg.setSource(21651U);
    msg.setSourceEntity(102U);
    msg.setDestination(21590U);
    msg.setDestinationEntity(6U);
    msg.type = 211U;
    msg.htime = 0.300568679649;
    msg.context.assign("RVVBDPEECNJZEXTMGPQMCRPNJZRMSQXADMTYJKEWALWIVUKWOYQTH");
    msg.text.assign("HDMIAGUPSBTUGNABFXVVHMTIEYSOXBHZZVDDNKKYGVBNLEC");

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
    msg.setTimeStamp(0.413952258457);
    msg.setSource(52688U);
    msg.setSourceEntity(161U);
    msg.setDestination(4702U);
    msg.setDestinationEntity(27U);
    msg.command = 59U;
    msg.htime = 0.230588191864;

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
    msg.setTimeStamp(0.171674698864);
    msg.setSource(43060U);
    msg.setSourceEntity(47U);
    msg.setDestination(47329U);
    msg.setDestinationEntity(123U);
    msg.command = 135U;
    msg.htime = 0.54595912217;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 236U;
    tmp_msg_0.htime = 0.688428263411;
    tmp_msg_0.context.assign("RHDSTGQUOELKHWZAAHIZOPUXQTDDFZQAWUWVDRWJIOXJNOSQDHGNYUYNEKTSLJFCSCHVFYCXLODPMBFNIZKEFHAPNQOMFTJAMJVERWTILOUYPTXBFRWURLVZPEEBNLOLVSWZGEKOMTPPSAZGBKMNLFASZXJBKY");
    tmp_msg_0.text.assign("FZGIVFKDVFHTPLSAIYVPWQSEDNQXLWFTEPRQIAHNBTQBMKLYBDQKBCISPDSLUJIYURNZOSGFNFMSJWVGOXXKARTMJRDUALZWGUMPMLZGRXTLKCQ");
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
    msg.setTimeStamp(0.305928448835);
    msg.setSource(6365U);
    msg.setSourceEntity(152U);
    msg.setDestination(48995U);
    msg.setDestinationEntity(88U);
    msg.command = 189U;
    msg.htime = 0.0295924297037;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 183U;
    tmp_msg_0.htime = 0.547271660235;
    tmp_msg_0.context.assign("FVNDHUZRCRVQRZNNYEAOTRWSDBPJKJCBIMOGWBZCJZAQXPREMSTAECNDHFAQEHPUXTBFWHRYKPVZWLVSRXZPLJQGEKNTVTOYQLFPCXVPKYAJCIZCGHLWZUOSHSNLJAFQMFWDSLSTEKCBOPQRXBUOBKKHLYWAIIX");
    tmp_msg_0.text.assign("AXOJEBQJUMNAFQEDHPZCCUDEZPEQHDTIYQUYDOWRZZRBS");
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
    msg.setTimeStamp(0.0763593587329);
    msg.setSource(2725U);
    msg.setSourceEntity(22U);
    msg.setDestination(53990U);
    msg.setDestinationEntity(165U);
    msg.op = 25U;
    msg.file.assign("RMHLQDHXXLVRESFCBYSPYGVLSMPOBXSJAKUZOFWXCVGGJLDPJZUKZLHISVTHPVBVENQRMFFZTYUCDYYRUGZKCNTJEALCDJDZGHORDDRAQKUEGWNYYMQHPVNIVCEXAQGIOLBTNDUSMTWUQEXFPYQTWVEJKCBTLZQG");

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
    msg.setTimeStamp(0.810369937501);
    msg.setSource(22975U);
    msg.setSourceEntity(53U);
    msg.setDestination(65383U);
    msg.setDestinationEntity(142U);
    msg.op = 219U;
    msg.file.assign("CUSLQQLKSIGNTERPTWAABWUKEXLAUHGRNMXSZBFUEDPKRRXEMHAXMFCLOLWISBCWYGTCNWYHGWVSLKJOQUZNEJTHDDKUVZJQSJLIRHSAANTHRKGBCMDYMXOLWQFEWQGMDTXYPPJIVOTXJIXZFIWAQONVNSKFRUYHEYNTHZGZPBQTRWFCSZRELFFAJPNHMCDOCDBHPYPBJNYUDVYYAVBDZXOZVIIGIPEBPOISOFVBJC");

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
    msg.setTimeStamp(0.197090743184);
    msg.setSource(38191U);
    msg.setSourceEntity(140U);
    msg.setDestination(60983U);
    msg.setDestinationEntity(89U);
    msg.op = 131U;
    msg.file.assign("TLCIIQBSEBOYIZSAXCITLZWAMKSEFJIYHMCMKWBPDLGVWNFJWGLAMROERUPDOREPQIXUEWZRHRLXNSXNURDQMKPWVQQIUJVXODHOVJGPCEKOHECKYZDBTGGLQQK");

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
    msg.setTimeStamp(0.568078031928);
    msg.setSource(40898U);
    msg.setSourceEntity(198U);
    msg.setDestination(27875U);
    msg.setDestinationEntity(29U);
    msg.op = 65U;
    msg.clock = 0.364095881866;
    msg.tz = 9;

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
    msg.setTimeStamp(0.185414841447);
    msg.setSource(27138U);
    msg.setSourceEntity(9U);
    msg.setDestination(61539U);
    msg.setDestinationEntity(72U);
    msg.op = 240U;
    msg.clock = 0.736748978577;
    msg.tz = -40;

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
    msg.setTimeStamp(0.874362859344);
    msg.setSource(38427U);
    msg.setSourceEntity(9U);
    msg.setDestination(48443U);
    msg.setDestinationEntity(158U);
    msg.op = 211U;
    msg.clock = 0.928955332711;
    msg.tz = 11;

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
    msg.setTimeStamp(0.670564987871);
    msg.setSource(28860U);
    msg.setSourceEntity(46U);
    msg.setDestination(11892U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.969135714277);
    msg.setSource(40953U);
    msg.setSourceEntity(78U);
    msg.setDestination(35115U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.145743848617);
    msg.setSource(19991U);
    msg.setSourceEntity(103U);
    msg.setDestination(40564U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.568422392118);
    msg.setSource(29603U);
    msg.setSourceEntity(7U);
    msg.setDestination(52580U);
    msg.setDestinationEntity(69U);
    msg.sys_name.assign("VHLMBGTNRIMLRWYRGPGUFMMFZZJSADSXNLINVUSLNB");
    msg.sys_type = 104U;
    msg.owner = 25824U;
    msg.lat = 0.187956154352;
    msg.lon = 0.842069245242;
    msg.height = 0.907006627258;
    msg.services.assign("VABHVTEVULBJMDQXCKYJSKIXHXFRFQGFMNYNXSVTMWJBGXMLKWBXHOPOKGYPVAGLFORZQVTIAEUNZSWQTRDJJSKDNISMMUEAZWEDOEFSUXZDOVGQWCTIQZCYNPLTIWLAHEWQIUGYAVJREOJTNNRLBUMSPCYITUPJNDFAEPQZKLAPFWVQVDDUAXNRFKISJJFRGOULL");

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
    msg.setTimeStamp(0.666041852178);
    msg.setSource(36773U);
    msg.setSourceEntity(61U);
    msg.setDestination(39685U);
    msg.setDestinationEntity(218U);
    msg.sys_name.assign("OOBKVWMFSHZABNUQJADPESMCREKMMEEAGFWBFTWXJVFUARHHKPIKFZITAQJULYCVYJTDNBVOD");
    msg.sys_type = 34U;
    msg.owner = 13038U;
    msg.lat = 0.646846632875;
    msg.lon = 0.64335431186;
    msg.height = 0.741523637489;
    msg.services.assign("HKMREKLGYGZOVVDAPUVJNSEXPCUBMZXPJJPINKYVDVCQRHGZLFNOBKNBZGANIWQCHVLWTEFRD");

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
    msg.setTimeStamp(0.294133023362);
    msg.setSource(56080U);
    msg.setSourceEntity(74U);
    msg.setDestination(59066U);
    msg.setDestinationEntity(253U);
    msg.sys_name.assign("NEBCCXURVVNOIWGTDSEXIBLUBODHVHLTAKMZIUHZMXXGACFONENPQYGMSZEDRUPILFXJATPORKQFHRDNQYTYDCXTRQAGRSCQIEJKBRPAQYVWVKYBILEESLJBZRPUFPYAKSNLQVTGFWJFHQGGWIOCTNPVVOSJGILMSEXZKJYPEYWDOAONNUMYHIOFKPBCSIFXGDTQLUMWCDZWSDHAMNGJJWAKBWXECZMXZJVZKOURLCBHQUFMTRDJ");
    msg.sys_type = 88U;
    msg.owner = 41408U;
    msg.lat = 0.747705287192;
    msg.lon = 0.53587233681;
    msg.height = 0.64379357696;
    msg.services.assign("APGNEYJODLYCCJHDMBOCBTMGSUBXHETEMAPLCSSQYYVNFNKSVEZNILVWNKUBKTQNZWQBMVRHSZDOYDZNPWJTVEBGFEZIZRYJAMPRIDKHFWRTYMQTXLMTAJCOZDJUOZTSCAUKGKWBGRTGGYNISECOASAQVFLXXLHPJQJQCOWUEFPUAVCHIRQPZYEUGQXAVRKEDHHRASRKLKFYWKXHMPUQBHLBIUFFMIXWDL");

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
    msg.setTimeStamp(0.365572317522);
    msg.setSource(36297U);
    msg.setSourceEntity(201U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(23U);
    msg.service.assign("MJTTCMKRXDQTXWMRTQPPVQBUVQQDSLVVNFJGAAXXBWEQKTASDLDCKGZSHGFEOTLEOWBFYYXVZZQMMSGZYSMLDYOYRRJZCVPVSIJHEDHAJNZLINWSWPMLRONWIUQELXTBPBBYRJOETOSCXARIHNRPCADNHBKOASIXHDYFYUOVFQEUGBAEZGPFCBMRWWMPDNNTTLY");
    msg.service_type = 133U;

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
    msg.setTimeStamp(0.0692693673514);
    msg.setSource(46447U);
    msg.setSourceEntity(125U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(106U);
    msg.service.assign("HKDJMBPTWYYAOESVQWXEIYMORPNXJXLCLL");
    msg.service_type = 84U;

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
    msg.setTimeStamp(0.442156287941);
    msg.setSource(20514U);
    msg.setSourceEntity(13U);
    msg.setDestination(475U);
    msg.setDestinationEntity(201U);
    msg.service.assign("RDJSJYGZQHYVTBXRMALBUZUGKDVGR");
    msg.service_type = 206U;

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
    msg.setTimeStamp(0.752291601967);
    msg.setSource(63518U);
    msg.setSourceEntity(95U);
    msg.setDestination(15914U);
    msg.setDestinationEntity(89U);
    msg.value = 0.219941251803;

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
    msg.setTimeStamp(0.941500421137);
    msg.setSource(24369U);
    msg.setSourceEntity(58U);
    msg.setDestination(1330U);
    msg.setDestinationEntity(198U);
    msg.value = 0.222707058361;

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
    msg.setTimeStamp(0.909243628782);
    msg.setSource(56122U);
    msg.setSourceEntity(25U);
    msg.setDestination(49455U);
    msg.setDestinationEntity(121U);
    msg.value = 0.134518649519;

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
    msg.setTimeStamp(0.419752274543);
    msg.setSource(62093U);
    msg.setSourceEntity(179U);
    msg.setDestination(49486U);
    msg.setDestinationEntity(209U);
    msg.value = 0.569315465436;

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
    msg.setTimeStamp(0.261291990956);
    msg.setSource(36480U);
    msg.setSourceEntity(71U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(125U);
    msg.value = 0.46317878259;

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
    msg.setTimeStamp(0.30216051363);
    msg.setSource(56500U);
    msg.setSourceEntity(220U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(16U);
    msg.value = 0.419641156045;

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
    msg.setTimeStamp(0.245280380241);
    msg.setSource(60052U);
    msg.setSourceEntity(120U);
    msg.setDestination(17419U);
    msg.setDestinationEntity(157U);
    msg.value = 0.647729107896;

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
    msg.setTimeStamp(0.474462920737);
    msg.setSource(28543U);
    msg.setSourceEntity(12U);
    msg.setDestination(55368U);
    msg.setDestinationEntity(103U);
    msg.value = 0.339946207758;

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
    msg.setTimeStamp(0.168936342856);
    msg.setSource(34517U);
    msg.setSourceEntity(157U);
    msg.setDestination(13164U);
    msg.setDestinationEntity(233U);
    msg.value = 0.747672023276;

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
    msg.setTimeStamp(0.964140617573);
    msg.setSource(19735U);
    msg.setSourceEntity(45U);
    msg.setDestination(23563U);
    msg.setDestinationEntity(198U);
    msg.number.assign("BQTHQMNXULMVMYIISVIUNSSLRRVABKHOAGYUOURWGZEIUCJFHLHLKLWUVAJPUDNEKBMFQXHVPHVQOKBORGTCOYPHAKWCDMCLCXMXZTAQISESMAUEPIZYSNFZROYCPRSIOIRJKPZYJLOGDPDMRGXHEEWDXUZYNDGJBHDKATGCZBEGFXTJXYVYRVKFWPSQZNLHFPWSNZNLAKWCQDALVCGDBITDOJWMWTJZJKOTBFI");
    msg.timeout = 17093U;
    msg.contents.assign("DHOBAYBDDVHWHWQUCWENRAINFGKKOPDLQCLRFNEYTFFSJCDXODHS");

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
    msg.setTimeStamp(0.084410676178);
    msg.setSource(46915U);
    msg.setSourceEntity(80U);
    msg.setDestination(51491U);
    msg.setDestinationEntity(115U);
    msg.number.assign("XWPTBXNJEYDWOGDWZEXLHGSCZSLDBAHKAJKHCRTOWXOXRXGYVAKITWSUGPOMHGTZSJIYOMNRTQQSDSUEMMXVWAEOCFMPPTJINYLUZFPQGRVLIRMLVHMZADRBHBJNXVHFINPBPOFLRCSRFBELBDEKQQYZYAQKSBJEU");
    msg.timeout = 38795U;
    msg.contents.assign("TYFXZDLKICOHAFCIFONHAMMEISBFGAXTFLEROZMINPATKKOHQUIMTVFWBPHEJZUXQJKFOSVGGHJQCDZMNQSKVXJWBCPAZJJGCEUPVLMV");

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
    msg.setTimeStamp(0.85568735694);
    msg.setSource(18923U);
    msg.setSourceEntity(246U);
    msg.setDestination(59966U);
    msg.setDestinationEntity(51U);
    msg.number.assign("VAIBMMGUQQTCJSZNCRTVXFSSWMYAZHECCNKLUVBZTSCWDEGBYLZNGLTVNWJMBODVYOOMWLRZJCKWLRPFMRPDNBPDXHUKIIECLEHXLGXADP");
    msg.timeout = 63915U;
    msg.contents.assign("SXQGQGOSCIGPCAMTLQRNNIRKUPPFSGJHAJNHALMUXDEPONJLYYSATLDUAWKOIOBORKNKHQCCVVBLSQFWSVMENOZSDYCWZGYWRKEYXJKLZNDPVCZBMVKGEUFAHRZFVXTPBGAIGDENIXQFLOBXUIHTKQFUMWRTWYBJMCWLPMPKHUYOWSDCWQWHTINGFBVZJUKUJYVEAXQHUTGMHEXZS");

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
    msg.setTimeStamp(0.725746794528);
    msg.setSource(39783U);
    msg.setSourceEntity(73U);
    msg.setDestination(49491U);
    msg.setDestinationEntity(186U);
    msg.seq = 2267172275U;
    msg.destination.assign("CPFNXDXYTOXEIDAXFBWBB");
    msg.timeout = 28190U;
    const char tmp_msg_0[] = {99, 34, 113, -77, -66, 14, 26, 123, 11, 89, 46, -83, -114, 21, -12, -117, 40, 71, -28, 119, 19, -23, -111, -127, -19, -70, -40, -26, -29, 33, -93, 81, -84, 61, 92, 38, 62, -69, 65, -12, -84, -17, 7, 81, 86, 123, 91, -52, -24, 76, 56, 94, 17, -81, 31, -115, -89, 28, 96, -64};
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
    msg.setTimeStamp(0.921245798859);
    msg.setSource(56776U);
    msg.setSourceEntity(34U);
    msg.setDestination(65138U);
    msg.setDestinationEntity(167U);
    msg.seq = 3936710369U;
    msg.destination.assign("USVKLBAZUHEPAXWCJCOBIUWOCSJKIPWQKLXNYZDNTUQOEEEGJJFABOXWRJBMYAPVTREYZHKIBQAYSUDAQIXHKOYKVHDVKMMILNQNSDRLXFVNQKORPKRUVFZZUEUFLYQBIAELHIISFQ");
    msg.timeout = 10636U;
    const char tmp_msg_0[] = {-40, 20, -119, -113, -93, -20, -19, 57, 57, -33, -113, -2, 58, -120, 88, 37, 111, 105, -10, -110, -60, -43, -9, -28, 41, -44, 82, 1, 115, -88, 38, -7, -107, -7, 1, -9, 58, 126, 7, -98, -101, 75, 10, -123, -82, -90, 28, 34, -50, 50, -51, 57, 57, 70, -42, -124, 33, 70, 123, 34, 21, -14, 2, -50, -81, -116, 25, 18, 92, 27, -79, 29, -71, 108, -116, -18, 59, 116, 25, 17, -86, 30, -120, 75, 76, -50, 95, -48, 112, 60, 71, 18, -84, -23, 69, -92, -126, 49, 102, 78, 110, -126, 69, -79, 80};
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
    msg.setTimeStamp(0.940218818637);
    msg.setSource(1851U);
    msg.setSourceEntity(120U);
    msg.setDestination(1724U);
    msg.setDestinationEntity(174U);
    msg.seq = 73063829U;
    msg.destination.assign("GTIJUNZEBHZZFQIEYNM");
    msg.timeout = 28543U;
    const char tmp_msg_0[] = {94, -121, 118, -74, -29, -53, 96, -114, 22, -18, 38, -2, -33, -87, 21, -94, 16, 56, 103, -40, -3, 97, -69, -111, -115, -33, -4, 123, -27, 3, 88, 49, -16, -27, 45, 47, 88, -18, 74, -45, -104, 62, -96, -27, 30, -84, 40, -38, -61};
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
    msg.setTimeStamp(0.886881722141);
    msg.setSource(46164U);
    msg.setSourceEntity(173U);
    msg.setDestination(5962U);
    msg.setDestinationEntity(197U);
    msg.source.assign("QKVBEWPXRWPUXSBHDUWEACCXJAMNWOJEEJBXFYWKTHOSNYLQVOFYCZLISNDOSYGEVNZZFDNPBTEHISQQJMPLBJITTNTLEVUBOOYJWMOPDXGXHZIQCMTDFDDCZTRWGWZFZ");
    const char tmp_msg_0[] = {30, 115, -12, 115, -111, -112, 29, -63, 109, -19, 25, 41, 77, -121, 75, 92, 110, -115, 13, 20, -85, -87, 93, -81, -76, 62, -17, -125, 83, 100, 9, 73, 70, 73, -49, 28, -25, -120, -122, -106, 123, 58, 67, 34, 87, -100, -21, -100, 74, -123, -124, 96, -22, 20, 112, -43, 87, 21, -17, -128, 11, -97};
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
    msg.setTimeStamp(0.829817038483);
    msg.setSource(23639U);
    msg.setSourceEntity(178U);
    msg.setDestination(17029U);
    msg.setDestinationEntity(175U);
    msg.source.assign("RSRRXAUVMGFYUNJPJXWTTVJKXHGMKIAHRIREFWHSLPFPZLEMKNIQABQVIFMXLVWQGNTYCPWDMJCAYBFYXDVZRYDBTDNSNAKXFLKODHDCAPHYJNHCUXTJPCVG");
    const char tmp_msg_0[] = {2, -16, -120, -59, -87, -2, -5, -70, 111, -61, -70, -55, -122, -107, -82, -4, 20, 6, -3, -74, 48, 101, -62, 14, 13, -107, -44, -22, -38, 99, 47, -30, 66, -111, -90, 54, -112, -64, 61, -77, -42, 107, -125, 100, 82, -80, 116, -121, -34, -26, 114, -5, 2, -12, -32, 38, -57, -6, 93, -97, -10, 88, 92, -73, 30, 28, 125, -81, 45, 19, -15, 84, -56, -28, -124, 114, -41, 98, -95, -77, 51, 118, 16, 87, -25, 0, 8, -44, 30, -47, 76, -17, -72, 109, 69, 100, -45, 41, -125, 122, -5, -74, -24, 57, -13, -17, -102, -94, 105, 40, 57, 41, -37, 64, 35, -49, 117, 66, -1, 21, 97, -121, 26, 113, -66, -100, 100, -63, 122, -77, 28, -33, -69, -91, -6, -31, 31, -85, -43, -121, -28, 88, -70, -23, -101, -4, 73, -47, 35, -44, 37, -25, 14, 66, 69, 77, 93, -120, 46, -82, -88, -84, 22, 65, 22, -71, 124, -77, -25, 58, -38, -56, -34, -47, -42, -66, 104, -64, -51, -79, 71, -19, 118, -50, -61, -53, -26, -120, -15, 55, -43, 104, -32, -41, -50, -28, 51, -69, 90, 87, 53, 30, 8, -67, -81, -15, 100, 50, 38, -26, 100, 14, 84, -1, -9, -89, 12, -79, -22, 30, 81, 59, -22, -124, -12, -98, -44, 89, -64, -72};
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
    msg.setTimeStamp(0.917848112174);
    msg.setSource(5847U);
    msg.setSourceEntity(170U);
    msg.setDestination(32308U);
    msg.setDestinationEntity(169U);
    msg.source.assign("QKRBIFGPCTTCXLDNMDVLMQBPHGWVSFWEETFSHAIMYVFBVMMMKQLLQWWEYTFPDKKTVAEIFHHHPFYRXCHLTAQGAWOIBTZLZOHFSAUYYNZPDADAJNZOSFRTJQQUZORXWVDRVZEYUOJXLNVNOZWUAIWSLJWOEXKPWPUVEZIYPVZCNYALGESHCZMHBXROUSNMX");
    const char tmp_msg_0[] = {102, 105, 15, -6, 104, 95, 105, -27, -124, -5, -88, -67, -101, -22, 15, -86, 28, -53, 66, 35, -72, 37, -111, 97, -122, -69, -18};
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
    msg.setTimeStamp(0.545409490707);
    msg.setSource(32311U);
    msg.setSourceEntity(215U);
    msg.setDestination(24567U);
    msg.setDestinationEntity(101U);
    msg.seq = 3382579015U;
    msg.state = 48U;
    msg.error.assign("PQSVAFBVHQGTVEMJITUPMOVVJOLZYLSECNNWNKUOSQHXZYGOIGSMEELPXBFPGWMPKYJNVNGGBWTHFWWJFCJHCTRZSVILWOUTTKOYVNLOWRAIMMCXMONCHKKPUSMRQQIUUCYZEVDBLDSAEVJTYBKKIBFRZAYMEBBARUBAIFIAHPRNLKDSDFQCFSJXYOCCXWKXANHDXTGUUTXLQZJRHDBDPRLHGAEUZZIAQGNXC");

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
    msg.setTimeStamp(0.0452837278827);
    msg.setSource(60523U);
    msg.setSourceEntity(204U);
    msg.setDestination(10526U);
    msg.setDestinationEntity(155U);
    msg.seq = 64932498U;
    msg.state = 93U;
    msg.error.assign("MQBQLPEDEBPLVEEUDIALHTXVKQYOWCNSQXQCFTIJRJENIWIBSVWLMIVUVSCMBGPZGFSORQNPTTHOKFOZPPNLFYWXRAKXUAI");

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
    msg.setTimeStamp(0.728292562189);
    msg.setSource(22528U);
    msg.setSourceEntity(50U);
    msg.setDestination(654U);
    msg.setDestinationEntity(52U);
    msg.seq = 2742604617U;
    msg.state = 194U;
    msg.error.assign("AICUEYAFBSKJXXAMGEFNRJWJYLJBKXJQRFNHZPHSENJLLQGWYJSZOXGTUISMDOWLDVHTVNNIXBHETMZPPV");

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
    msg.setTimeStamp(0.970657912312);
    msg.setSource(40915U);
    msg.setSourceEntity(31U);
    msg.setDestination(7086U);
    msg.setDestinationEntity(116U);
    msg.origin.assign("RWJGLCJETESFFMOEWIOBSGKAPDCVAEIMKRZRFQHFIOCYVHPPOWUNXDWCANAKJQSTRBXIMPNVPCFJUMNEEATKQVCMAHRWBWPXGMFGRDJNMUTAIQQPDPGGXNSZKLFWSTMVXLZVOXDYWPHKOLKBRYOHKCGOGHZPYTYXEYDAJUFAZSXRBSUV");
    msg.text.assign("PWUBNHYMVDZXDMVSQLKDFMZVVAOTIISYURWOTNGKHMLWWSBIBCCRBKXMCPRHSYDCWQOSPPNXIJRXXIHRZANEIUFGWRJCBBMKCHUHCVQXKKGZURITGJJDOOPUMYDSGBVLCODXMZSUTVYSEEXJELTIEABTLVLSVFLYMNPVEWGOQAHFANKHZUFQGJQWOYOAYTDRGNABFTXMNYJZEQUDNDAXKKLGPBSPEUIRKLJHRI");

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
    msg.setTimeStamp(0.212994167948);
    msg.setSource(53921U);
    msg.setSourceEntity(193U);
    msg.setDestination(49758U);
    msg.setDestinationEntity(5U);
    msg.origin.assign("DSVUTEQEKOMTDWNPSWYPJECIUKIIMNXHNZQXFAHKCHMUGCRRFLYEUNBPCIUAADEOKVOFMFZWZSSJFLOTUIXFATGJLQAMOJPZOZCCVTGXRGBSPKYGDXIRJBXLOHZUYYGAJLIZSKHEHTZJRCAVVUOCSNATJDMGPHPFPPYUSJARNVWNHWMHXJLDBOKVYVERSITGHBOQCBRUTSWGRLFQXLEQEZDLNWIYYEVYRQBBNCIQ");
    msg.text.assign("QWZVYRQCGBUKUHVDHZOBCSZJWLCWEZBXXLSEYVFVNHPOLYSXVXBPFDJRMTJHALHCDNRAYBKIJVHQDWI");

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
    msg.setTimeStamp(0.0570284908847);
    msg.setSource(19012U);
    msg.setSourceEntity(71U);
    msg.setDestination(46533U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("VRJNILEGZKKYNEWTMFWKFJXIRBTPFUHUWWSHMQOUBQQPACPYADTHIDYZRZNAPOBQDJVZHTIXVPWCMOSJBKTFOJFQEYQGLSXCBZTUHSBXGIUNIMGLTJIOMOVISJXEIPMRWTBOEDYXMLDSWRXGQHZCQUAPVATKVEAVGPDVELJJMDZCILBWLHBYFNQKNNANQZFRRKLFTXKOUFXGGKAEZCS");
    msg.text.assign("SYUARTPFPKWWNGZUBPLBLWGESOYEQVVADNJZTVZQINNDQUGPGITXKJUQLMIADUGVDSAEKPHHCDYMKOCTBREPMQDXTFPJONWFJIKHCERYQBVXUFWYLVZIFSATBSJBGOSZVFXCUYMCSEDKZHLMHMTZ");

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
    msg.setTimeStamp(0.434308124718);
    msg.setSource(35094U);
    msg.setSourceEntity(56U);
    msg.setDestination(17535U);
    msg.setDestinationEntity(0U);
    msg.origin.assign("VRMHYVPHEZZKLABRFFHDZTOZMLQQNLSWPIMLMAUOIAQFSGUCMHJKAZEXNUQCEXEFUCITQOBNBUZIQC");
    msg.htime = 0.286959245063;
    msg.lat = 0.916437681089;
    msg.lon = 0.880011187723;
    const char tmp_msg_0[] = {124, -5, -35, 67, 32, 113, -61, -96, -44, -83, -66, -102, -32, 80, -24, 28, -25, 83, 87, -108, 29, 9, 45, -107, -46, 53, -82, 25, 122, 81, -89, 56, 23, 19, -78, 91, 102, -42, -89, 9, -19, -38, 72, 52, 68, -36, 112, -38, -51, -117, -5, -113, -47, -126, -19, 25, -68, -31, 91, -32, 19, 9, -105, -101, 102, 17, -7, 74, 18, -119, -98, 7, -50, -4, -115, -74, -112, -65, -97, -82, 61, 113, 82, -107, -78, 92, -118, -86, -13, -44, 101, 21, 34, 106, 41, -118, 104, 102, -126, -25, -69, -24, -25, 5, -122, 66, 77, -47, -115, 76, -37, -127, -4, 114, -1, 121, 2, -57, 107, -81, -109, -82, -37, -94, 82, 30, 28, -118, 112, 121, -8, -98, -123, 10, 67, 22, 83, -122, 76, 20, -45, 15, -88, 117};
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
    msg.setTimeStamp(0.638978701051);
    msg.setSource(45886U);
    msg.setSourceEntity(217U);
    msg.setDestination(53191U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("GWFXZKSJBTZKINNOTURYJOZGTYOIPFOBMTVAWN");
    msg.htime = 0.0267323149289;
    msg.lat = 0.366783116329;
    msg.lon = 0.211354476131;
    const char tmp_msg_0[] = {1, -82, 105, 47, 115, 41, 89, -61, -56, 126, -25, -34, 24, -74, 69, -60, 92, 107, 102, 113, -51, -33, 121, 95, 102, 98, -119, -36, -102, 60, -84, 62, 86, 0, 2, 27, 97, 90, 95, 58, -45, -22, 8, 83, -16, -71, -22, -34, -94, -6, -109, 86, -68, 52, -39, -109, 23, -81, -5, -69, -44, -5, 72, 113, -77, 46, -117, 25, 105, -30, -22, 34, 64, -18, -58, 16, -23, 3, 5, -87, -110, 17, -39, 28, -81, -88, -39, -41, -84, -37, -66, -14, 86, -54, 47, 27, -67, 86, -33, 61, -39, -49, 82, -126, -46, -102, -21, 39, 1, 124, -59, -114, 60, 83, 119, -106};
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
    msg.setTimeStamp(0.684437075874);
    msg.setSource(34067U);
    msg.setSourceEntity(84U);
    msg.setDestination(43831U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("EFCAGBNFNSOMVSFIIEXZCSPJSRYGSGYCKMFHVZRPHIOFUEEPNTTCLZJZLBDHWHWSOAWXBIEOLKZWDNXDQATVMYQDPCDVNAEBHYCJULMVSRGPFJTAUGURBIFKFSAILRAUHRKKVORPAZQJSMMGNLKJYKCXVUS");
    msg.htime = 0.880878686251;
    msg.lat = 0.621946458199;
    msg.lon = 0.0101437309271;
    const char tmp_msg_0[] = {45, -83, 28, -22, 12, -27, -11, 51, 32, -127, 73, -75, -115, 117, 110, 70, -75, -38, 2, 10, 83, 103, 8, -50, -53, -9, 38, 46, 11, -47, -69, 98, 12, -14, -81, -66, 97, 52, 90, 125, 25, 68, -95, 36, 85, 114, 87, -15, -114, -12, -96, 122, 40, -41, -56, -109, -2, -42, 91};
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
    msg.setTimeStamp(0.109824599722);
    msg.setSource(31162U);
    msg.setSourceEntity(200U);
    msg.setDestination(46832U);
    msg.setDestinationEntity(181U);
    msg.req_id = 43657U;
    msg.ttl = 28676U;
    msg.destination.assign("ITBQIRWTZDXJAWJWANQLFGJGOPUNGFXSIVKBHZDMJUT");
    const char tmp_msg_0[] = {-28, -56, -118, -58, -95, -104, -93, 74, -52, -81, 29, -63, 55, -116, 112, 78, -123, -106, 50, 116, -86, -11, -63, 5, -49, -24, -49, 87, 79, 125, 8, 123, 8, -45, 117, 27, 84, 35, -32, 76, -65, -21, 30, 88, 3, 1, -83, 5, -101, 73, -74, -9, 122, 81, 69, -81, -50, 96, -63, -40, 93, 96, -21, -79, 112, -4, -80, -26, -117, -80, 20, -50, -11, -55, 68, 30, 16, -110, -100, 106, 113, -121, 8, 99, -107, -23, -78, -114, 109, -104, -102, -91, 9, -40, 119, 51, 65, -51, -71, -115, -51, 42, -86, 76, -77, -17, -76, -49, 55, 89, -76, -12, 117, 93, -27, 118, -72, 27, -55, 78, 41, -44, 32, -124, 33, 106, -116, -87, -14, 33, 106, 4, -68, -125, -126, 122, -88, 60, 96, 71, -61, -51, -36, -83, -79, -25, 126, -106, -110, 7};
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
    msg.setTimeStamp(0.325929962772);
    msg.setSource(61455U);
    msg.setSourceEntity(98U);
    msg.setDestination(38622U);
    msg.setDestinationEntity(223U);
    msg.req_id = 24534U;
    msg.ttl = 7143U;
    msg.destination.assign("BRGYLTTQQIIGPNCXVOJBUZWYRFFQCBWGHCSEYEJSDXZLUWNLHOIPKFLACSPKXHEIHUTUOZLPWQDOYXWURFZEVGRTHMQKBJWYQSCDVNQAMMLAHHGASUSAMFMPKRZFRWSBVPKJROAQMFMCAXIZESWNCIBINPOGZOYLLGTBXVAVMIVLGTCQGYBRBAHNPHMDYKCDNREXDZCJDTKMNYWKDJTVQFUDAZHEUXJOUVRPTGKFDLEIBZJETSSXXOVJU");
    const char tmp_msg_0[] = {0, -106, 27, -83, -75, -26, 117, -58, 74, 122, 69, 3, 125, 25, 22, 37, 13, -8, -27, 58, 8, 108, -112, -98, 79, 96, -123, -50, -110, 50, 111, 88, -122, -67, -108, 28, -19, -77, 20, -56, 56, -125, 13, -13, 111, -30, -11, 125};
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
    msg.setTimeStamp(0.668647947773);
    msg.setSource(7607U);
    msg.setSourceEntity(222U);
    msg.setDestination(11971U);
    msg.setDestinationEntity(9U);
    msg.req_id = 16148U;
    msg.ttl = 41016U;
    msg.destination.assign("XVUTYUJNSQPTADIMWNTIQEUZDPTXERJOSIXOVAFXH");
    const char tmp_msg_0[] = {85, 104, 105, -30, -24, 22, -57, 14, -34, -98, -30, -4, 37, 38, 65, 122, -22, -75, 28, -85, -55, 53, 119, 49, 55, -109, 47, 62, 85, -83, 90, 16, 22, -3, 57, 32, -36, 28, -46, 84, 72, 40, -52, -98, 120, 114, -69, 36, 112, 73, 117, 109, -25, 13, 114, 1, -75, -19, -61, -123, 64, -15, 12, -52, 84, -41, -31, 15, -17, 38, -111, -118, -38, -62, 76, -110, 91, -51, -96, -23, 119, -120, -40, 113, -24, 25, -96, -53, -120, -83, 41, -32, -76, 4, 68, -26, 14, 33, 82, -69, 108, 8, -115, -45, -52, -34, 31, 90, -120, 58, -55, -105, 100, -111, 68, 39, -121, 99, 22, -118, -89, -30, -14, 72, -106, -96, -125, 87, -61, 16, 40, 87, -96, -91, 66, -44, 21, 111, -12, -124, -95, 34, 92, 81, -54, 32, -21, -108, 11, -105, 121, 41, -40, -87, -87, 84, -40, -8, -47, 24, -16, -13, -128, -10, -41, 22, 18, -68, 8, 105, 41, -81, 106, -124, 67, 22, -89, 80, 96, -31, -77, -54, -60, 14, -56, -125, -126, -67, -106, 49, 37, -67, 5, -117, 85, 97, -61, 107, -34, -93, -59, -25, 97, -89, 99, 48, 15, 7, -115, 45, 94, -103};
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
    msg.setTimeStamp(0.70615594611);
    msg.setSource(1529U);
    msg.setSourceEntity(51U);
    msg.setDestination(51025U);
    msg.setDestinationEntity(38U);
    msg.req_id = 64126U;
    msg.status = 120U;
    msg.text.assign("OBOHEIYQZKZQHZJUDGMABJXGZTNMAFTADFXDWWICDLINLZJRKGYOSUPKCJLJLFPCJIHWWYPBNNRQXEXUFMTVHDYRTDJYOKIVXQUSYJABVXVWLSHSPLMUMG");

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
    msg.setTimeStamp(0.683673692224);
    msg.setSource(8130U);
    msg.setSourceEntity(197U);
    msg.setDestination(8113U);
    msg.setDestinationEntity(118U);
    msg.req_id = 42192U;
    msg.status = 235U;
    msg.text.assign("XYRRBHKRIZWFVIUXFWRSJFBUPXCVQGYTIFGISZWHELHHSBVIXOKCFJVCAXEBQZDQZYJLNQTDNWZVFXQPXPQKEMMRYDDMAHASBESEYGSPKLJFATRKKTCAJFECZWKYHVVNKXWUAYOTUOQCDMPGSMIMLZHOONCEPROBHTMKONSUYW");

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
    msg.setTimeStamp(0.204026795044);
    msg.setSource(7557U);
    msg.setSourceEntity(197U);
    msg.setDestination(45729U);
    msg.setDestinationEntity(181U);
    msg.req_id = 49070U;
    msg.status = 205U;
    msg.text.assign("ZWFTUDMTPDYJVGYMSNOIOPBCNGGRHMRPJCCPBFLPANJVAWNJGIRIXZRQOCUUTSTKUESVSXYLVQIIOBWBFHZKDRONORCRVCPTLBMYZD");

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
    msg.setTimeStamp(0.877807984719);
    msg.setSource(26347U);
    msg.setSourceEntity(251U);
    msg.setDestination(5610U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("VWNGLBNAOTHTMZZWKRETJDKIACBWDVGMZMDTFERIOCMXKBEYQAWSSTMBONDUEOYWQQMPJBWDHGXJDGLALEMHKHAUBUAEVPASQPEAEWGMONJLTXKSXUINBLBPYUSJQIXOIMWKYSPXYUDEFHNGLYFGZHIBRXBDZFYHJJOTLCMWRCPRVGDLVLZXCNFFVDRFHJJPCNRYGVTUZKTSQIZUTIOSPNAQURFVS");
    msg.links = 1641357944U;

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
    msg.setTimeStamp(0.470537353719);
    msg.setSource(30490U);
    msg.setSourceEntity(88U);
    msg.setDestination(64749U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("RJPNUZHYDNFHSZSKELQMBHIWLSWCVTIOGAMXBPHPYURRWAKPEFMQIVITRGFERJTDCSEUUABYOETTCKTFZTJOPCMRJRWGGZDYFYQULXTTFLVDMAPOSLWTNZSOUGJHOPSWHHVYCKEXLLXNVPUKXOCVLNISCNZHGOLQDEAJQNIDBSFAF");
    msg.links = 3157044657U;

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
    msg.setTimeStamp(0.573643878298);
    msg.setSource(13413U);
    msg.setSourceEntity(90U);
    msg.setDestination(52716U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("OCPPFTHZSWJYZWIPPMBDSHVARJLVHCSGTLNTJPOZADWHSZLKYMUEKVZQNKMMMLBHWILJNIGEAKOYHSUSYGVQLQDAHGTYIQXOIWLJVDWEHBCYSJJGLMZMPIQCGZYRZJW");
    msg.links = 1112647935U;

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
    msg.setTimeStamp(0.151635616197);
    msg.setSource(24932U);
    msg.setSourceEntity(110U);
    msg.setDestination(15765U);
    msg.setDestinationEntity(22U);
    msg.groupname.assign("CSZEEFPIKSOJPBLWOUFBSVACTJVNVDUYAINZGCDYOQCOPEYHZLWJVNYTJKFIMQHDEUXK");
    msg.action = 217U;
    msg.grouplist.assign("RPYHGYSLKPDCMVNDRHGOYKMVJUFZLLBUKEC");

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
    msg.setTimeStamp(0.917671721);
    msg.setSource(24771U);
    msg.setSourceEntity(243U);
    msg.setDestination(48279U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("JOMCLZYONVXQHADUIFVCAWOQMCCKURFESCJQPFVIABGXLAY");
    msg.action = 12U;
    msg.grouplist.assign("LINENGIQPBSVLDTOXJTQSVICZLLSAEYXTRPEVPEDGWNQNRKPIBKUPLBLOQONHXTCGUSAFYHDZEBJAXMRKDJGUMZKDMRXZNRAJWYOIAVDAVCJQRPTUUHVAZHBLZHHGMWYYVJQDJGXWOCHHLCMBMCMNNJTPUHVQGTBWCSISUB");

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
    msg.setTimeStamp(0.0845929870459);
    msg.setSource(17371U);
    msg.setSourceEntity(226U);
    msg.setDestination(2271U);
    msg.setDestinationEntity(1U);
    msg.groupname.assign("BZOWNNSNMSNGREUNZVQEXWNCTPOKAAHRXUJZWVSPPLWGHDIGBVDAEMTEVRODWZVLSDRVUOFKFYLTGLODSY");
    msg.action = 111U;
    msg.grouplist.assign("RRHBTLNRBCNBARDJDMNFVSZYSIHDWOHJPJCEEALMEBPGYCFQLCPMVITCCWSOGSIDAXSDMQSUBKCHKGNTGWMFYQPSYBRIZJTDVRVD");

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
    msg.setTimeStamp(0.774424888785);
    msg.setSource(61571U);
    msg.setSourceEntity(48U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(66U);
    msg.id = 93U;
    msg.range = 0.910541708213;

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
    msg.setTimeStamp(0.788010755752);
    msg.setSource(10969U);
    msg.setSourceEntity(29U);
    msg.setDestination(31200U);
    msg.setDestinationEntity(112U);
    msg.id = 112U;
    msg.range = 0.803354538265;

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
    msg.setTimeStamp(0.00700243502669);
    msg.setSource(5660U);
    msg.setSourceEntity(70U);
    msg.setDestination(2529U);
    msg.setDestinationEntity(53U);
    msg.id = 83U;
    msg.range = 0.552073783508;

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
    msg.setTimeStamp(0.0359953978095);
    msg.setSource(51142U);
    msg.setSourceEntity(55U);
    msg.setDestination(42192U);
    msg.setDestinationEntity(65U);
    msg.tx = 150U;
    msg.channel = 246U;
    msg.timer = 13003U;

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
    msg.setTimeStamp(0.0160102496897);
    msg.setSource(41526U);
    msg.setSourceEntity(225U);
    msg.setDestination(15814U);
    msg.setDestinationEntity(45U);
    msg.tx = 240U;
    msg.channel = 97U;
    msg.timer = 12589U;

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
    msg.setTimeStamp(0.996868389073);
    msg.setSource(52289U);
    msg.setSourceEntity(241U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(126U);
    msg.tx = 188U;
    msg.channel = 19U;
    msg.timer = 38413U;

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
    msg.setTimeStamp(0.649430224354);
    msg.setSource(61889U);
    msg.setSourceEntity(118U);
    msg.setDestination(9267U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("EGXFRQVXUANODMHCKPWGLUBPJUQBIAWSXNEPLDPGVDTTUYRCJWKSSYUXZHKLJVBTCFKJIETVAIFEITFHEZZULIIBWHWIOJKXYHEGRSXERQLBARSYQKRCSAMIZWQSODLMNMOWUUYSCTAXORPGOVQMCVWPCLNDWYQYJHZMFMBJEXDZLHFPGPOFRAYBKJGGSITYDCNHRCJHVNQYANBVZIZBODAMLJTKT");
    msg.lat = 0.651457473742;
    msg.lon = 0.207162928744;
    msg.depth = 0.510463818188;
    msg.query_channel = 226U;
    msg.reply_channel = 198U;
    msg.transponder_delay = 134U;

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
    msg.setTimeStamp(0.108596342262);
    msg.setSource(26111U);
    msg.setSourceEntity(201U);
    msg.setDestination(1233U);
    msg.setDestinationEntity(212U);
    msg.beacon.assign("ORYMUMPJAQQORWNBSUAXGGCVLATRVWWQNGBTWFWLJFYYVXUZHQIHSKQASWTCDVPCJLNBKIZCXSFZJOIOJIZIIFUZDLZACHMOJLAKJXKXTAHDXRKDIBUXYBZSUWMCPLMOMHMHFBFVNKDRYTVAJKEGSEZNZHEINEUCVPSHVGGERSOMNPRXOINJYCTFMASDGWGLDNEQPREEBCFWQELTXBSHPG");
    msg.lat = 0.108751238238;
    msg.lon = 0.17185580198;
    msg.depth = 0.902021860366;
    msg.query_channel = 51U;
    msg.reply_channel = 97U;
    msg.transponder_delay = 116U;

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
    msg.setTimeStamp(0.690001135956);
    msg.setSource(58680U);
    msg.setSourceEntity(211U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(123U);
    msg.beacon.assign("UXOEMHYJMAKNHFWZXYGSFZLTYCNXJXBYYRPUGVVOLWTVUFAYDRFQZLUWWJIBATRCXDRBOAMVLFWHIQYWAQUBDBQWAKMZIIJSPGQPJOUHVKSFNNJJOPLVHSNFMSKHSVVDFCSXPPNCHZGPWJBEOFATZEZHBSGRQOCRNZVITQCNLAKTZKDDLITMDEKXQOEPQNIRRGPBEHAKGOCTMLKZDJCUCGEUTSGIMDECARRMTNFLLXPGHXYBWSEEYYMJQW");
    msg.lat = 0.40966415306;
    msg.lon = 0.189022363328;
    msg.depth = 0.0695867001898;
    msg.query_channel = 244U;
    msg.reply_channel = 224U;
    msg.transponder_delay = 164U;

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
    msg.setTimeStamp(0.965419892307);
    msg.setSource(38387U);
    msg.setSourceEntity(138U);
    msg.setDestination(30193U);
    msg.setDestinationEntity(152U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.881125799033);
    msg.setSource(14383U);
    msg.setSourceEntity(206U);
    msg.setDestination(8465U);
    msg.setDestinationEntity(202U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.3262323172);
    msg.setSource(56554U);
    msg.setSourceEntity(175U);
    msg.setDestination(41970U);
    msg.setDestinationEntity(254U);
    msg.op = 245U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HGPGQJEYEEDLTRRFAKPPBDXWGMDLNJOYOP");
    tmp_msg_0.lat = 0.7401114851;
    tmp_msg_0.lon = 0.370476453455;
    tmp_msg_0.depth = 0.885754532779;
    tmp_msg_0.query_channel = 161U;
    tmp_msg_0.reply_channel = 38U;
    tmp_msg_0.transponder_delay = 47U;
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
    msg.setTimeStamp(0.166856391917);
    msg.setSource(5503U);
    msg.setSourceEntity(62U);
    msg.setDestination(42257U);
    msg.setDestinationEntity(3U);
    msg.address = 62U;

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
    msg.setTimeStamp(0.239203766715);
    msg.setSource(48664U);
    msg.setSourceEntity(2U);
    msg.setDestination(7811U);
    msg.setDestinationEntity(138U);
    msg.address = 114U;

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
    msg.setTimeStamp(0.642689364377);
    msg.setSource(4957U);
    msg.setSourceEntity(183U);
    msg.setDestination(6620U);
    msg.setDestinationEntity(34U);
    msg.address = 241U;

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
    msg.setTimeStamp(0.816682957769);
    msg.setSource(13018U);
    msg.setSourceEntity(200U);
    msg.setDestination(65347U);
    msg.setDestinationEntity(54U);
    msg.address = 33U;
    msg.status = 106U;
    msg.range = 0.253778564058;

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
    msg.setTimeStamp(0.609779167139);
    msg.setSource(20926U);
    msg.setSourceEntity(145U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(81U);
    msg.address = 224U;
    msg.status = 6U;
    msg.range = 0.688061226647;

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
    msg.setTimeStamp(0.0371409384128);
    msg.setSource(1944U);
    msg.setSourceEntity(93U);
    msg.setDestination(31281U);
    msg.setDestinationEntity(167U);
    msg.address = 242U;
    msg.status = 42U;
    msg.range = 0.283429000799;

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
    msg.setTimeStamp(0.933124848359);
    msg.setSource(40581U);
    msg.setSourceEntity(52U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(30U);
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 212U;
    tmp_msg_0.value = 32U;
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
    msg.setTimeStamp(0.00344534383861);
    msg.setSource(847U);
    msg.setSourceEntity(8U);
    msg.setDestination(3832U);
    msg.setDestinationEntity(239U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BCIQAPYEKDBHCSWISVERXLCVEAKJQWVHYXDZNGUXPMHTJMMNBKTPOUSINTBADMRSNQRGCEKKKTYGHQPOSYBOEYQSXOQKQZMGLEYZGNYQFRHAIUMDLAVTXZENUIMWOMDDNJCPXUWLCHMGFKHAFVRFJSTEPUZLPGLZFWBLDNBAQZPJSJF");
    tmp_msg_0.lat = 0.586180913424;
    tmp_msg_0.lon = 0.624044560292;
    tmp_msg_0.depth = 0.200521746882;
    tmp_msg_0.query_channel = 42U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 174U;
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
    msg.setTimeStamp(0.546510657652);
    msg.setSource(14531U);
    msg.setSourceEntity(80U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(198U);
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("BCSUXWNDNFVSMAGHJIYROCEHRLUZDCNTKTXFKQRTWNYJNHRDYKWUZVMRHMZRXWSWCHIBYOGPGKPABLUFGIFXOZSPQEJHIIFYQRLSPTUPSAQBKITWWDJEBVANTORDZVLOENDKMJOZUQVPUJEOJPBLUOBCUPYOMKEHYAVNQQWZWDONTFXSHMKBYCYXEVMEEZGWIPLGMLZCIFHDNVJXXGLCAYDTFTIRQXLTFMJ");
    tmp_msg_0.sensor_class.assign("RUUEPYIXASIJBFWYXTCBYZKVADCVJGGERWCBCMDOBIWCERWZVXGLJYAUEIDPKASENRZTHWOGPIFHNSPLEYSPNWTGBQUTXDCYIQRRTNYX");
    tmp_msg_0.lat = 0.790616943257;
    tmp_msg_0.lon = 0.527465226094;
    tmp_msg_0.alt = 0.925155450977;
    tmp_msg_0.heading = 0.126541253151;
    tmp_msg_0.data.assign("QHSUBHYTOTUAHJSWXFZDSUJDRCOGQEXZBBEFSCYLSIOCOURINCAVWAOHMXZ");
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
    msg.setTimeStamp(0.745395924297);
    msg.setSource(48159U);
    msg.setSourceEntity(170U);
    msg.setDestination(43909U);
    msg.setDestinationEntity(140U);
    msg.enable = 63U;

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
    msg.setTimeStamp(0.37475671709);
    msg.setSource(53924U);
    msg.setSourceEntity(46U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(32U);
    msg.enable = 89U;

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
    msg.setTimeStamp(0.448906165879);
    msg.setSource(22870U);
    msg.setSourceEntity(98U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(128U);
    msg.enable = 103U;

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
    msg.setTimeStamp(0.0133979780654);
    msg.setSource(60909U);
    msg.setSourceEntity(192U);
    msg.setDestination(26304U);
    msg.setDestinationEntity(101U);
    msg.summary = 72U;
    msg.level = 187U;

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
    msg.setTimeStamp(0.167450736156);
    msg.setSource(52521U);
    msg.setSourceEntity(93U);
    msg.setDestination(17764U);
    msg.setDestinationEntity(130U);
    msg.summary = 210U;
    msg.level = 225U;

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
    msg.setTimeStamp(0.338714330546);
    msg.setSource(40819U);
    msg.setSourceEntity(168U);
    msg.setDestination(32683U);
    msg.setDestinationEntity(55U);
    msg.summary = 24U;
    msg.level = 172U;

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
    msg.setTimeStamp(0.113311732598);
    msg.setSource(43779U);
    msg.setSourceEntity(66U);
    msg.setDestination(1114U);
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
    msg.setTimeStamp(0.752559674568);
    msg.setSource(43900U);
    msg.setSourceEntity(134U);
    msg.setDestination(18472U);
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
    msg.setTimeStamp(0.0353206739806);
    msg.setSource(13091U);
    msg.setSourceEntity(33U);
    msg.setDestination(64753U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.519541051636);
    msg.setSource(36085U);
    msg.setSourceEntity(57U);
    msg.setDestination(17911U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.63331062802);
    msg.setSource(27321U);
    msg.setSourceEntity(84U);
    msg.setDestination(20434U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.655328866392);
    msg.setSource(50735U);
    msg.setSourceEntity(164U);
    msg.setDestination(5260U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.137791332671);
    msg.setSource(16202U);
    msg.setSourceEntity(205U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(1U);
    msg.op = 28U;
    msg.system.assign("GLFHYGRXVLUBQTIUFBPQVQCJBRXNISFOYOBUKIVFOTELAQOVMUHJFMJVCSDSUHCKLHQJIKPALRYOHBZMYBAAQGOJDZKJKIQKLYTYFZGSNESVQEGRXZGRPOEDCHMPFEJDTWXKSUXZVCTHRAWWELPVUJULGWEWMTNKNQANHPEXAWZXPPWAGZMCYSLOOBWLCEAXMXCFUIYFTFOIKMVNEKZRZIDPDHRCNJYNVHQTSYBUGDMDMGT");
    msg.range = 0.463220517931;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 188U;
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
    msg.setTimeStamp(0.00522440450695);
    msg.setSource(9778U);
    msg.setSourceEntity(144U);
    msg.setDestination(43471U);
    msg.setDestinationEntity(10U);
    msg.op = 46U;
    msg.system.assign("KOYDFRVDHZXIWX");
    msg.range = 0.631905852641;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("KFIFETDOJSAQHUZYPOUREVYPNTLDBPIVAQDIRKPRBSQYUGYIAXXJGFLQXWCDNONAZUHSDXTHSQYHYWCERBOMUNLTPJRXKKZGXZCZRMZNTIMLNUUSJIGVRRMEEUFYIGTBEEHWNBJGHUAZNHZVODMEFRYOTJLFLDSCXFMVBHQAGSCQVOPJQCWBOVMPKSKHPF");
    tmp_msg_0.links = 2689778353U;
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
    msg.setTimeStamp(0.855586407764);
    msg.setSource(2616U);
    msg.setSourceEntity(234U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(59U);
    msg.op = 203U;
    msg.system.assign("VBTCNALINEGWOLBISNFWPTIRSEAGQOEVILCXXPBZPRPABCCPCVSNTUJQYOTRXCXMHKJWJHXUVFUDWDQQRVNZKQRDUBPOJNSOOI");
    msg.range = 0.479314030965;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.356296452299);
    msg.setSource(18075U);
    msg.setSourceEntity(61U);
    msg.setDestination(32859U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.995198747333);
    msg.setSource(25118U);
    msg.setSourceEntity(145U);
    msg.setDestination(19097U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.764868783899);
    msg.setSource(42889U);
    msg.setSourceEntity(130U);
    msg.setDestination(24739U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.551850362158);
    msg.setSource(35147U);
    msg.setSourceEntity(158U);
    msg.setDestination(14480U);
    msg.setDestinationEntity(190U);
    msg.list.assign("LITWQYACHUHXOTNKZJHQCRCKFZKAUJMWSIPSVDDLZFPLADRRDPTBHMPCBPUKQUGTYTCHMSECFKM");

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
    msg.setTimeStamp(0.695276283656);
    msg.setSource(19169U);
    msg.setSourceEntity(196U);
    msg.setDestination(51734U);
    msg.setDestinationEntity(153U);
    msg.list.assign("MQCYHOLNZBDCXNMZTJVYYDRVZVOSNZFITDFVAMFPZTJXJDPTWKYUIONGSWBVDRQVIEYPCCQIYTXOCROXBUGHNEKRMBBPLLPBLSRWVNLFLOXDICAYJHRSMG");

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
    msg.setTimeStamp(0.387985048303);
    msg.setSource(13388U);
    msg.setSourceEntity(95U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(212U);
    msg.list.assign("VKQDFKTNQLRYJBFJLPWVJBAMNKZPEGNREWVMEQJYUQDSXCKQDPMFSXHVGDYQYOOCPKQUURXNIXSEIXTUXWCDBEGODWOVBAHFYFHITMRAAAIUILPGYZZERLFUIIXKGWYTPMQHOVTCPVWSNQXRYOISCAMC");

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
    msg.setTimeStamp(0.951894511181);
    msg.setSource(35088U);
    msg.setSourceEntity(185U);
    msg.setDestination(59170U);
    msg.setDestinationEntity(209U);
    msg.value = -14610;

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
    msg.setTimeStamp(0.855851876233);
    msg.setSource(54513U);
    msg.setSourceEntity(124U);
    msg.setDestination(10548U);
    msg.setDestinationEntity(149U);
    msg.value = -23042;

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
    msg.setTimeStamp(0.264900287996);
    msg.setSource(58282U);
    msg.setSourceEntity(168U);
    msg.setDestination(35259U);
    msg.setDestinationEntity(120U);
    msg.value = -20354;

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
    msg.setTimeStamp(0.120808214028);
    msg.setSource(60434U);
    msg.setSourceEntity(231U);
    msg.setDestination(56456U);
    msg.setDestinationEntity(206U);
    msg.value = 0.201936004758;

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
    msg.setTimeStamp(0.822296216037);
    msg.setSource(40475U);
    msg.setSourceEntity(36U);
    msg.setDestination(33430U);
    msg.setDestinationEntity(3U);
    msg.value = 0.843002376593;

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
    msg.setTimeStamp(0.786053655535);
    msg.setSource(1004U);
    msg.setSourceEntity(178U);
    msg.setDestination(6505U);
    msg.setDestinationEntity(227U);
    msg.value = 0.222861666716;

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
    msg.setTimeStamp(0.632118044681);
    msg.setSource(11641U);
    msg.setSourceEntity(250U);
    msg.setDestination(9240U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0809185906272;

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
    msg.setTimeStamp(0.615098514329);
    msg.setSource(17876U);
    msg.setSourceEntity(142U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(251U);
    msg.value = 0.361549051368;

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
    msg.setTimeStamp(0.600647099714);
    msg.setSource(8630U);
    msg.setSourceEntity(16U);
    msg.setDestination(44142U);
    msg.setDestinationEntity(146U);
    msg.value = 0.635466519207;

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
    msg.setTimeStamp(0.334168289316);
    msg.setSource(4574U);
    msg.setSourceEntity(195U);
    msg.setDestination(47044U);
    msg.setDestinationEntity(221U);
    msg.validity = 45649U;
    msg.type = 93U;
    msg.utc_year = 41203U;
    msg.utc_month = 86U;
    msg.utc_day = 43U;
    msg.utc_time = 0.603795763851;
    msg.lat = 0.594467271838;
    msg.lon = 0.773248779487;
    msg.height = 0.726939329493;
    msg.satellites = 52U;
    msg.cog = 0.666405834138;
    msg.sog = 0.0942352890856;
    msg.hdop = 0.394701802161;
    msg.vdop = 0.391903541782;
    msg.hacc = 0.905252585429;
    msg.vacc = 0.179639866745;

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
    msg.setTimeStamp(0.274972103243);
    msg.setSource(22094U);
    msg.setSourceEntity(37U);
    msg.setDestination(42994U);
    msg.setDestinationEntity(133U);
    msg.validity = 57828U;
    msg.type = 155U;
    msg.utc_year = 46804U;
    msg.utc_month = 205U;
    msg.utc_day = 39U;
    msg.utc_time = 0.145694663054;
    msg.lat = 0.412302040037;
    msg.lon = 0.500919715346;
    msg.height = 0.893816080357;
    msg.satellites = 187U;
    msg.cog = 0.960113782847;
    msg.sog = 0.553132149992;
    msg.hdop = 0.485012171507;
    msg.vdop = 0.429550802047;
    msg.hacc = 0.489283444641;
    msg.vacc = 0.747752124781;

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
    msg.setTimeStamp(0.888194383743);
    msg.setSource(44014U);
    msg.setSourceEntity(253U);
    msg.setDestination(6231U);
    msg.setDestinationEntity(177U);
    msg.validity = 65039U;
    msg.type = 132U;
    msg.utc_year = 43662U;
    msg.utc_month = 101U;
    msg.utc_day = 80U;
    msg.utc_time = 0.406337878254;
    msg.lat = 0.919482450032;
    msg.lon = 0.305082796116;
    msg.height = 0.413881736243;
    msg.satellites = 55U;
    msg.cog = 0.698682904852;
    msg.sog = 0.285481358998;
    msg.hdop = 0.59907406001;
    msg.vdop = 0.703717159772;
    msg.hacc = 0.103714398666;
    msg.vacc = 0.539727209826;

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
    msg.setTimeStamp(0.315145063912);
    msg.setSource(3374U);
    msg.setSourceEntity(175U);
    msg.setDestination(16282U);
    msg.setDestinationEntity(183U);
    msg.time = 0.533115626554;
    msg.phi = 0.236606788905;
    msg.theta = 0.923763505625;
    msg.psi = 0.591012908296;
    msg.psi_magnetic = 0.937924426831;

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
    msg.setTimeStamp(0.769543149661);
    msg.setSource(7358U);
    msg.setSourceEntity(115U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(10U);
    msg.time = 0.8611481965;
    msg.phi = 0.255146009703;
    msg.theta = 0.557518216476;
    msg.psi = 0.796806670664;
    msg.psi_magnetic = 0.236063323399;

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
    msg.setTimeStamp(0.249056247664);
    msg.setSource(31008U);
    msg.setSourceEntity(214U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(199U);
    msg.time = 0.710035829046;
    msg.phi = 0.994100966478;
    msg.theta = 0.505208111275;
    msg.psi = 0.645586820681;
    msg.psi_magnetic = 0.470438310652;

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
    msg.setTimeStamp(0.376544619081);
    msg.setSource(31945U);
    msg.setSourceEntity(190U);
    msg.setDestination(37017U);
    msg.setDestinationEntity(180U);
    msg.time = 0.936673303832;
    msg.x = 0.6950885365;
    msg.y = 0.0961775082802;
    msg.z = 0.969713390226;
    msg.timestep = 0.413282062331;

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
    msg.setTimeStamp(0.305624766619);
    msg.setSource(3054U);
    msg.setSourceEntity(123U);
    msg.setDestination(17856U);
    msg.setDestinationEntity(184U);
    msg.time = 0.943475210626;
    msg.x = 0.528160031778;
    msg.y = 0.600470829367;
    msg.z = 0.591188539237;
    msg.timestep = 0.823022161356;

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
    msg.setTimeStamp(0.01936996882);
    msg.setSource(35755U);
    msg.setSourceEntity(110U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(80U);
    msg.time = 0.427550998596;
    msg.x = 0.0900394747322;
    msg.y = 0.668286206636;
    msg.z = 0.256819141576;
    msg.timestep = 0.262089170117;

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
    msg.setTimeStamp(0.401518846382);
    msg.setSource(63571U);
    msg.setSourceEntity(142U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(65U);
    msg.time = 0.432784389108;
    msg.x = 0.652674960831;
    msg.y = 0.154930064191;
    msg.z = 0.219138326917;

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
    msg.setTimeStamp(0.127507201954);
    msg.setSource(35110U);
    msg.setSourceEntity(67U);
    msg.setDestination(32593U);
    msg.setDestinationEntity(35U);
    msg.time = 0.902846739093;
    msg.x = 0.669292582767;
    msg.y = 0.671538858281;
    msg.z = 0.160956404794;

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
    msg.setTimeStamp(0.649430983279);
    msg.setSource(8989U);
    msg.setSourceEntity(65U);
    msg.setDestination(21013U);
    msg.setDestinationEntity(50U);
    msg.time = 0.306665300397;
    msg.x = 0.681356897147;
    msg.y = 0.876949764475;
    msg.z = 0.518879285119;

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
    msg.setTimeStamp(0.924080096297);
    msg.setSource(41983U);
    msg.setSourceEntity(32U);
    msg.setDestination(13093U);
    msg.setDestinationEntity(159U);
    msg.time = 0.15649893528;
    msg.x = 0.189496830146;
    msg.y = 0.591154960962;
    msg.z = 0.785942803891;

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
    msg.setTimeStamp(0.83378563914);
    msg.setSource(38218U);
    msg.setSourceEntity(89U);
    msg.setDestination(15124U);
    msg.setDestinationEntity(173U);
    msg.time = 0.873929943854;
    msg.x = 0.169200257531;
    msg.y = 0.337659055992;
    msg.z = 0.115590014892;

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
    msg.setTimeStamp(0.0923389540786);
    msg.setSource(24137U);
    msg.setSourceEntity(155U);
    msg.setDestination(41826U);
    msg.setDestinationEntity(110U);
    msg.time = 0.420535359201;
    msg.x = 0.269411946779;
    msg.y = 0.715119458348;
    msg.z = 0.586380907532;

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
    msg.setTimeStamp(0.891178977831);
    msg.setSource(23056U);
    msg.setSourceEntity(121U);
    msg.setDestination(25290U);
    msg.setDestinationEntity(112U);
    msg.time = 0.966705018527;
    msg.x = 0.541678165704;
    msg.y = 0.639684208588;
    msg.z = 0.32814241042;

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
    msg.setTimeStamp(0.232875481201);
    msg.setSource(37786U);
    msg.setSourceEntity(57U);
    msg.setDestination(53797U);
    msg.setDestinationEntity(92U);
    msg.time = 0.582484176108;
    msg.x = 0.705158659453;
    msg.y = 0.264834901755;
    msg.z = 0.856114687185;

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
    msg.setTimeStamp(0.691962246802);
    msg.setSource(35090U);
    msg.setSourceEntity(6U);
    msg.setDestination(61453U);
    msg.setDestinationEntity(98U);
    msg.time = 0.745390142741;
    msg.x = 0.414498555407;
    msg.y = 0.105978776122;
    msg.z = 0.132016230096;

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
    msg.setTimeStamp(0.363504671232);
    msg.setSource(9972U);
    msg.setSourceEntity(233U);
    msg.setDestination(22322U);
    msg.setDestinationEntity(28U);
    msg.validity = 132U;
    msg.x = 0.478039289152;
    msg.y = 0.555734311383;
    msg.z = 0.866505528633;

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
    msg.setTimeStamp(0.934665924943);
    msg.setSource(11867U);
    msg.setSourceEntity(13U);
    msg.setDestination(9059U);
    msg.setDestinationEntity(228U);
    msg.validity = 145U;
    msg.x = 0.364444205236;
    msg.y = 0.507680544536;
    msg.z = 0.498611820274;

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
    msg.setTimeStamp(0.526558026132);
    msg.setSource(26255U);
    msg.setSourceEntity(174U);
    msg.setDestination(45237U);
    msg.setDestinationEntity(73U);
    msg.validity = 49U;
    msg.x = 0.51773412563;
    msg.y = 0.0849660137803;
    msg.z = 0.502408903339;

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
    msg.setTimeStamp(0.594998840991);
    msg.setSource(24324U);
    msg.setSourceEntity(180U);
    msg.setDestination(64430U);
    msg.setDestinationEntity(217U);
    msg.validity = 32U;
    msg.x = 0.251677079228;
    msg.y = 0.274328279792;
    msg.z = 0.801821373346;

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
    msg.setTimeStamp(0.408870698525);
    msg.setSource(17586U);
    msg.setSourceEntity(9U);
    msg.setDestination(59930U);
    msg.setDestinationEntity(137U);
    msg.validity = 98U;
    msg.x = 0.786724781237;
    msg.y = 0.534928006912;
    msg.z = 0.872265385062;

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
    msg.setTimeStamp(0.653412307032);
    msg.setSource(47705U);
    msg.setSourceEntity(226U);
    msg.setDestination(50288U);
    msg.setDestinationEntity(201U);
    msg.validity = 25U;
    msg.x = 0.560639430113;
    msg.y = 0.749705731298;
    msg.z = 0.181246701099;

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
    msg.setTimeStamp(0.447385533213);
    msg.setSource(45293U);
    msg.setSourceEntity(45U);
    msg.setDestination(47506U);
    msg.setDestinationEntity(224U);
    msg.time = 0.162327780061;
    msg.x = 0.635079253564;
    msg.y = 0.206308591177;
    msg.z = 0.260843192335;

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
    msg.setTimeStamp(0.729915407954);
    msg.setSource(32453U);
    msg.setSourceEntity(245U);
    msg.setDestination(6372U);
    msg.setDestinationEntity(140U);
    msg.time = 0.00239857328948;
    msg.x = 0.754660969233;
    msg.y = 0.312118690444;
    msg.z = 0.219603690819;

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
    msg.setTimeStamp(0.997826532529);
    msg.setSource(33452U);
    msg.setSourceEntity(247U);
    msg.setDestination(2625U);
    msg.setDestinationEntity(232U);
    msg.time = 0.772501801942;
    msg.x = 0.0470553432993;
    msg.y = 0.912371962845;
    msg.z = 0.715327394395;

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
    msg.setTimeStamp(0.437777144116);
    msg.setSource(40079U);
    msg.setSourceEntity(167U);
    msg.setDestination(17847U);
    msg.setDestinationEntity(67U);
    msg.validity = 23U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0140401303227;
    tmp_msg_0.y = 0.585224375372;
    tmp_msg_0.z = 0.000706689668412;
    tmp_msg_0.phi = 0.532749093027;
    tmp_msg_0.theta = 0.00180860239752;
    tmp_msg_0.psi = 0.853000893598;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.693625759357;
    tmp_msg_1.beam_height = 0.788099014963;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.845562672218;

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
    msg.setTimeStamp(0.00758848459272);
    msg.setSource(8270U);
    msg.setSourceEntity(246U);
    msg.setDestination(28247U);
    msg.setDestinationEntity(173U);
    msg.validity = 166U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.262115297257;
    tmp_msg_0.y = 0.811561131174;
    tmp_msg_0.z = 0.75826866538;
    tmp_msg_0.phi = 0.517230724937;
    tmp_msg_0.theta = 0.573761314253;
    tmp_msg_0.psi = 0.250192912789;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.749976327098;
    tmp_msg_1.beam_height = 0.775187511838;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.560141809462;

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
    msg.setTimeStamp(0.233276887659);
    msg.setSource(2395U);
    msg.setSourceEntity(105U);
    msg.setDestination(62645U);
    msg.setDestinationEntity(1U);
    msg.validity = 16U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.367165018526;
    tmp_msg_0.beam_height = 0.613847799465;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.640199797485;

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
    msg.setTimeStamp(0.469523489087);
    msg.setSource(1443U);
    msg.setSourceEntity(230U);
    msg.setDestination(35371U);
    msg.setDestinationEntity(161U);
    msg.value = 0.516858228801;

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
    msg.setTimeStamp(0.582685603687);
    msg.setSource(203U);
    msg.setSourceEntity(225U);
    msg.setDestination(64529U);
    msg.setDestinationEntity(27U);
    msg.value = 0.266087669147;

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
    msg.setTimeStamp(0.729212399384);
    msg.setSource(32597U);
    msg.setSourceEntity(154U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(101U);
    msg.value = 0.518874249364;

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
    msg.setTimeStamp(0.788520067671);
    msg.setSource(55730U);
    msg.setSourceEntity(221U);
    msg.setDestination(61513U);
    msg.setDestinationEntity(229U);
    msg.value = 0.641082603969;

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
    msg.setTimeStamp(0.515348469053);
    msg.setSource(48252U);
    msg.setSourceEntity(254U);
    msg.setDestination(60468U);
    msg.setDestinationEntity(245U);
    msg.value = 0.630993167573;

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
    msg.setTimeStamp(0.659616539678);
    msg.setSource(57122U);
    msg.setSourceEntity(202U);
    msg.setDestination(21279U);
    msg.setDestinationEntity(248U);
    msg.value = 0.0227899834595;

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
    msg.setTimeStamp(0.530326089298);
    msg.setSource(42148U);
    msg.setSourceEntity(34U);
    msg.setDestination(39024U);
    msg.setDestinationEntity(251U);
    msg.value = 0.974045999963;

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
    msg.setTimeStamp(0.911369952691);
    msg.setSource(56210U);
    msg.setSourceEntity(25U);
    msg.setDestination(64382U);
    msg.setDestinationEntity(157U);
    msg.value = 0.771621597816;

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
    msg.setTimeStamp(0.974580690756);
    msg.setSource(973U);
    msg.setSourceEntity(216U);
    msg.setDestination(17532U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0612847535152;

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
    msg.setTimeStamp(0.628083708175);
    msg.setSource(60839U);
    msg.setSourceEntity(135U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(72U);
    msg.value = 0.213008992019;

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
    msg.setTimeStamp(0.265008070057);
    msg.setSource(22262U);
    msg.setSourceEntity(35U);
    msg.setDestination(19155U);
    msg.setDestinationEntity(124U);
    msg.value = 0.553054580837;

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
    msg.setTimeStamp(0.655691468636);
    msg.setSource(55772U);
    msg.setSourceEntity(158U);
    msg.setDestination(62854U);
    msg.setDestinationEntity(181U);
    msg.value = 0.411333445324;

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
    msg.setTimeStamp(0.416840793741);
    msg.setSource(50816U);
    msg.setSourceEntity(150U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(36U);
    msg.value = 0.636597015024;

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
    msg.setTimeStamp(0.713431778176);
    msg.setSource(51117U);
    msg.setSourceEntity(84U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(31U);
    msg.value = 0.939040769175;

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
    msg.setTimeStamp(0.586128177884);
    msg.setSource(38811U);
    msg.setSourceEntity(35U);
    msg.setDestination(13823U);
    msg.setDestinationEntity(53U);
    msg.value = 0.112287985877;

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
    msg.setTimeStamp(0.514458990919);
    msg.setSource(20441U);
    msg.setSourceEntity(244U);
    msg.setDestination(16609U);
    msg.setDestinationEntity(55U);
    msg.value = 0.534826271722;

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
    msg.setTimeStamp(0.735778738123);
    msg.setSource(19931U);
    msg.setSourceEntity(175U);
    msg.setDestination(60769U);
    msg.setDestinationEntity(136U);
    msg.value = 0.44256328096;

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
    msg.setTimeStamp(0.26146272939);
    msg.setSource(62884U);
    msg.setSourceEntity(241U);
    msg.setDestination(6627U);
    msg.setDestinationEntity(180U);
    msg.value = 0.781221810363;

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
    msg.setTimeStamp(0.382717462875);
    msg.setSource(30859U);
    msg.setSourceEntity(36U);
    msg.setDestination(53483U);
    msg.setDestinationEntity(158U);
    msg.value = 0.539157017877;

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
    msg.setTimeStamp(0.902518350437);
    msg.setSource(62867U);
    msg.setSourceEntity(3U);
    msg.setDestination(22097U);
    msg.setDestinationEntity(215U);
    msg.value = 0.223523253332;

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
    msg.setTimeStamp(0.183557572127);
    msg.setSource(49680U);
    msg.setSourceEntity(200U);
    msg.setDestination(19621U);
    msg.setDestinationEntity(41U);
    msg.value = 0.380361125554;

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
    msg.setTimeStamp(0.581543738471);
    msg.setSource(28915U);
    msg.setSourceEntity(193U);
    msg.setDestination(3462U);
    msg.setDestinationEntity(119U);
    msg.value = 0.428218681419;

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
    msg.setTimeStamp(0.731351133575);
    msg.setSource(27254U);
    msg.setSourceEntity(39U);
    msg.setDestination(62945U);
    msg.setDestinationEntity(183U);
    msg.value = 0.173922666901;

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
    msg.setTimeStamp(0.180567531015);
    msg.setSource(26361U);
    msg.setSourceEntity(107U);
    msg.setDestination(33889U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0771599855278;

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
    msg.setTimeStamp(0.677093526147);
    msg.setSource(20152U);
    msg.setSourceEntity(104U);
    msg.setDestination(31781U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.27367698183;
    msg.speed = 0.122655303759;
    msg.turbulence = 0.183086833199;

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
    msg.setTimeStamp(0.914925990351);
    msg.setSource(13698U);
    msg.setSourceEntity(85U);
    msg.setDestination(6482U);
    msg.setDestinationEntity(198U);
    msg.direction = 0.607645543377;
    msg.speed = 0.295380578425;
    msg.turbulence = 0.833101217177;

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
    msg.setTimeStamp(0.0966860818824);
    msg.setSource(62737U);
    msg.setSourceEntity(137U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(179U);
    msg.direction = 0.63246520623;
    msg.speed = 0.940668001111;
    msg.turbulence = 0.908255917038;

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
    msg.setTimeStamp(0.057401064162);
    msg.setSource(37056U);
    msg.setSourceEntity(81U);
    msg.setDestination(16666U);
    msg.setDestinationEntity(31U);
    msg.value = 0.78705197655;

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
    msg.setTimeStamp(0.808223511714);
    msg.setSource(32321U);
    msg.setSourceEntity(37U);
    msg.setDestination(25354U);
    msg.setDestinationEntity(187U);
    msg.value = 0.974717305018;

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
    msg.setTimeStamp(0.3715893896);
    msg.setSource(4736U);
    msg.setSourceEntity(94U);
    msg.setDestination(65355U);
    msg.setDestinationEntity(21U);
    msg.value = 0.751383201442;

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
    msg.setTimeStamp(0.852761748413);
    msg.setSource(42096U);
    msg.setSourceEntity(118U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(181U);
    msg.value.assign("ZGYFXLPIVWCPBVBDDPNUWJTMMMLXZHAZUAZTZLECJBANMIDGGBIOKECOEGSNRENZIRGPKAKRSY");

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
    msg.setTimeStamp(0.455870112003);
    msg.setSource(59932U);
    msg.setSourceEntity(58U);
    msg.setDestination(41933U);
    msg.setDestinationEntity(69U);
    msg.value.assign("IFDDBSKVSBXGZLZAWMTQDLDJFIEHGAIZUAOWVUHWPTGLRIWRAOK");

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
    msg.setTimeStamp(0.465732706387);
    msg.setSource(25567U);
    msg.setSourceEntity(23U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(207U);
    msg.value.assign("VKLFTRGXAVDJJSYCWDFNTIGLSAGIMNAJUPHRYHRXXWFZGNLNYEFVJKROJZRBYBEPRDJN");

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
    msg.setTimeStamp(0.724950611426);
    msg.setSource(18137U);
    msg.setSourceEntity(138U);
    msg.setDestination(58402U);
    msg.setDestinationEntity(164U);
    const char tmp_msg_0[] = {-119, 101, -88, -4, 74, -7, -78, 19, 124, -21, -106, 86, -75, 91, -127, -109, -122, 126, 115, -81, 70, -35, -31, 79, -70, 123, 24, -10, 116, 5, 15, 60, 24, 49, 20, 28, -22, 73, 31, -68, -43, 42, 101, -84, 5, 41, -60, -3, 126, -41, -55, -75, 110, 29, -95, 20, 120, 33, 54, -44, -38, -44, 105, -87, -6, 119, 115, 28, -37, -81, 95, -84, -15, 93, 90, -81, -56, 47, -53, -61, -124, -49, -15, 112, 16, -105, -99, 61, 20, -51, -103, -26, -109, 42, -84, -28, -50, 61, 2, 71, -92, -28, 68, 105, -1, 30, -31, -108, -71, 88, -30, -109, -76, 30, 9, 98, 41, -13, 112, -52, -37, 39, -52, -115, -35, 123, -2, -60, 113, -50, -13, 58, -112, -49, -113, 66, -28, 7, 103, 92, -106, -14, 125, 30, 77, 9, 92, -88, 3, -83, 100, -119, 109, -1, -123, 121, -100, 64, 33, 39, 64, -119, -118, 53, 50, -77, -96, 53, -74, 47, -17, 23, -14, -92, -123, -128, -24, -111, -91, -103, 61, 11, 112, -28, -77, -37, 47, -54, -53, -114, -35, -2, 35, -114, -80, -46, -32, -29, -20, -80, 53, 86, -117, -19, 4, 122, 63, 9, -83, -104, 64};
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
    msg.setTimeStamp(0.631705834347);
    msg.setSource(2532U);
    msg.setSourceEntity(95U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(162U);
    const char tmp_msg_0[] = {-96, 83, -22, 6, 114, 66, 38, 84, 80, -51, 80, 125, 42, -101, -52, -9, 105, 110, -56, 29, 23, 14, 66, -38, -5, -12, 57, 45, -85, -58, -124, 113, -98, 33, 122, -103, -127, -9, 112, -106, -65, -56, 54, -98, -92, 117, -84, 81, 118, 31, -24, 39, -40, 126, 99, 99, -48, 15, -128, 64, -10, 67, -57, -85, 110, 60, -51, 48, 1, 16, 107, 78, 103, -87, -24, -59, 110, 106, -108, 119, 6, 93, 63, -87, 80, 97, 84, 91, 13, 0, -112, -42, -90, 124, 115, -31, 56, -110, 54, -34, 57, -125, -31, 86, 17, 8, -68, 84, 49, 33, -36, -51, -79, 45, -97, 66, -119, -123, 54, -17, 57, 64, 16, -116, 78, -49, 43, -89, 80, -45, 12, -62, -74, 4, 70, -16, 122, 25, 41, -52, -60, -39, 19, -61, 99, 18, 88, -20, 86, 92, 114, 21, 33, 125, 27, 28, -89, -24, -70, 63, -93, 60, 50, 16, 75, -12, -18, 29, 0, -116, -24, 106, -65, 39, 21, 58, 75, -79, -58, 120, 49, 77, -107, 94, 121, 38, 37, 43, -75, -95, -93, 51, -85, 38, 82, 78, -119, -46, 58, -78, 117, -108, -4, -34, 42, 41, -59, -48, 67, 43, 95, -6, 33, 56, -85, 56, 93, 70, 6, 7, 90, -49, -25};
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
    msg.setTimeStamp(0.195314227208);
    msg.setSource(45513U);
    msg.setSourceEntity(106U);
    msg.setDestination(33536U);
    msg.setDestinationEntity(187U);
    const char tmp_msg_0[] = {108, 64, -49, -86, 75, 71, -112, 86, 7, 9, 8, -43, -48, -128, -39, -6, 75, 23, 94, 97, 113, 60, 110, -22, -103, -2, 73, 17, -87, -61, 83, 31, -26, -107, -66, 108, -26, -3, -128, 61, 113, -42, 68, -103, 55, -50, 26, 39, 72, 92, -122, 71, -53, 3, -117, -90, 15, -99, 39, 112, 54, -49, 22, -87, 76, -117, 54, -115, 101, -61, -71, 41, -20, 53, 68, -94, -4, 6, 60, -40, 11};
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
    msg.setTimeStamp(0.226733290418);
    msg.setSource(57116U);
    msg.setSourceEntity(63U);
    msg.setDestination(35380U);
    msg.setDestinationEntity(180U);
    msg.frequency = 734508537U;
    msg.min_range = 57898U;
    msg.max_range = 14185U;

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
    msg.setTimeStamp(0.925178539644);
    msg.setSource(17341U);
    msg.setSourceEntity(70U);
    msg.setDestination(39428U);
    msg.setDestinationEntity(13U);
    msg.frequency = 3219121765U;
    msg.min_range = 63706U;
    msg.max_range = 44685U;

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
    msg.setTimeStamp(0.0251027390768);
    msg.setSource(4818U);
    msg.setSourceEntity(129U);
    msg.setDestination(13679U);
    msg.setDestinationEntity(169U);
    msg.frequency = 3822502667U;
    msg.min_range = 18478U;
    msg.max_range = 10598U;

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
    msg.setTimeStamp(0.935067926768);
    msg.setSource(36562U);
    msg.setSourceEntity(156U);
    msg.setDestination(21799U);
    msg.setDestinationEntity(54U);
    msg.type = 236U;
    msg.frequency = 1900754118U;
    msg.min_range = 10542U;
    msg.max_range = 25399U;
    msg.bits_per_point = 158U;
    msg.scale_factor = 0.977247223608;
    const char tmp_msg_0[] = {-12, 6, -60, -11, -124, -90, 45, -25, -7, 64, 103, 6, -36, 83, 100, 117, 1, -128, 64, 1, -46, -9, 11, 40, -123, 21, 60, -83, -123, -52, 65, 65, 0, 28, -122, -23, -64, 62, 108, -48, -114, 121, 63, 38, -53, -117, -13, -20, -71, 105, 17, 40, 79, -103, -96, -44, -107, 43, 111, -28, -98, 111, 36, -70, -124, -123, -71, 30, -99, -48, 23, -21, -63, 103, 37, -66, 40, -59, -108, 100, -102, 66, -64, -44, -28, -79, -17, -124, -104, 93, -124, -92, 74, 22, 100, -89, -122, -90, -62, -61, -26, 91, -111, 90, -110, 116, 48, -110, 60, 41, -67, -6, 112, -55, -14, 86, -60, -70, -114, -28, 110, -4, 64, -64, -44, -53, 26, 62, -112, -104, 75, -42, 52, -114, 96, 97, 122, 85, -125, 118, 109, -62, -32, 89, 125, 99, -66, -85, 88, -118, -48, 38, -22, 26, 46, -78, 72, -84, 53, -122, 72, 20, 66, 54, 30, 108, 38, -89, -127, -93, -98, 84, 66, 124, 50, -30, -79, 109, -48, 85, -76, 75, -24, 0, -90, 8, 48, -92, 52, -57, -66, 93, -103, -116, -110, -118, -20, -86, 18, -17, -99};
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
    msg.setTimeStamp(0.788359395338);
    msg.setSource(60770U);
    msg.setSourceEntity(84U);
    msg.setDestination(55759U);
    msg.setDestinationEntity(4U);
    msg.type = 173U;
    msg.frequency = 2913162957U;
    msg.min_range = 61317U;
    msg.max_range = 23947U;
    msg.bits_per_point = 176U;
    msg.scale_factor = 0.0432631219478;
    const char tmp_msg_0[] = {-126, 64, -21, 62, -26, -117, 111, 111, 62, -70, 36, -83, 47, 56, 27, 30, -5, -104, -76, 103, -55, -14, -40, 43, -72, -94, -64, -116, -56, -6, -112, 90, 45, -23, -2, 81, -26, 98, 118, -80, 58, -26, -94, -82, 28, -46, -80, 103, -45, 80, -60, -4, -88, -4, 117, 73, 40, -8, 28, 77, -79, -5, -41};
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
    msg.setTimeStamp(0.684295711099);
    msg.setSource(58261U);
    msg.setSourceEntity(176U);
    msg.setDestination(17130U);
    msg.setDestinationEntity(63U);
    msg.type = 235U;
    msg.frequency = 2056842529U;
    msg.min_range = 43294U;
    msg.max_range = 57926U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.134822915476;
    const char tmp_msg_0[] = {75, 63, 34, -102, 60, 11, 6, 32, 115, -79, -111, 38, -41, -56, 110, -88, 12, -127, -68, -25, 25, 83, -4, -33, -56, 53, 53, -70, 64, -64, -55, 64, 41, -119, 94, 16, -39, -97, 85, -9};
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
    msg.setTimeStamp(0.424536618488);
    msg.setSource(22749U);
    msg.setSourceEntity(239U);
    msg.setDestination(53624U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.840036960589);
    msg.setSource(4950U);
    msg.setSourceEntity(136U);
    msg.setDestination(65070U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.778216122656);
    msg.setSource(45034U);
    msg.setSourceEntity(182U);
    msg.setDestination(7965U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.979364373114);
    msg.setSource(2088U);
    msg.setSourceEntity(252U);
    msg.setDestination(32126U);
    msg.setDestinationEntity(37U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.0706573858696);
    msg.setSource(64297U);
    msg.setSourceEntity(45U);
    msg.setDestination(43032U);
    msg.setDestinationEntity(220U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.772739015064);
    msg.setSource(43407U);
    msg.setSourceEntity(143U);
    msg.setDestination(15678U);
    msg.setDestinationEntity(139U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.551117606721);
    msg.setSource(61481U);
    msg.setSourceEntity(3U);
    msg.setDestination(4701U);
    msg.setDestinationEntity(234U);
    msg.value = 0.509628890922;
    msg.confidence = 0.286195060711;
    msg.opmodes.assign("ALWQHTMKMJAHVNKTEESQNWFZURNZOVMREQCVXTFKBFRRIBWCAFZLAZXSPFXUHZBMRNJGPHBEXXMUDCLYHCDNJMPVJNNKBOXIXLGWVBQYDQGAPUPQBROYWYRGDWGYWIMCGAYFXKTCLONCSEKZETSHTGJSLKFPRSDDILYFHZUMYDABDNGKBPLIDEQUTVZSVVACEMP");

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
    msg.setTimeStamp(0.522225366475);
    msg.setSource(20099U);
    msg.setSourceEntity(210U);
    msg.setDestination(61017U);
    msg.setDestinationEntity(187U);
    msg.value = 0.464512961565;
    msg.confidence = 0.688987162413;
    msg.opmodes.assign("GRFXDKZZONXBLCKKKVTGAVAZOMMBNPMNEQPCPLCESFNYVRVZAREIRQMCOXTPVBLNGRPUACPZANTFKEW");

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
    msg.setTimeStamp(0.895243713676);
    msg.setSource(48943U);
    msg.setSourceEntity(107U);
    msg.setDestination(51796U);
    msg.setDestinationEntity(250U);
    msg.value = 0.111945976605;
    msg.confidence = 0.374323297232;
    msg.opmodes.assign("FSXHKZCQERCGEMWVMVJLCFUWFIOHDUISVPKDEETVOJTYFHWUZGIKSAQMZCAGAHSGKGYBRLARBSWFMONNMPCKRMQTOQFPIIQLLMABDDJXBINCCMBLQOVZPXNZHVKXYULBFSBUPQUVXPHBGKHSZXYYZVNZRE");

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
    msg.setTimeStamp(0.126844977535);
    msg.setSource(29735U);
    msg.setSourceEntity(31U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(188U);
    msg.itow = 3258674982U;
    msg.lat = 0.753438068855;
    msg.lon = 0.267318818469;
    msg.height_ell = 0.385014017679;
    msg.height_sea = 0.154219784707;
    msg.hacc = 0.295756564391;
    msg.vacc = 0.505455847867;
    msg.vel_n = 0.735953336751;
    msg.vel_e = 0.560416448945;
    msg.vel_d = 0.583680147482;
    msg.speed = 0.303867964;
    msg.gspeed = 0.423348631939;
    msg.heading = 0.242767108193;
    msg.sacc = 0.320949508921;
    msg.cacc = 0.598668773888;

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
    msg.setTimeStamp(0.835616329843);
    msg.setSource(17072U);
    msg.setSourceEntity(81U);
    msg.setDestination(50156U);
    msg.setDestinationEntity(125U);
    msg.itow = 880518607U;
    msg.lat = 0.34128064776;
    msg.lon = 0.783835290911;
    msg.height_ell = 0.695005081046;
    msg.height_sea = 0.778323470684;
    msg.hacc = 0.242992512617;
    msg.vacc = 0.28063259227;
    msg.vel_n = 0.612650887354;
    msg.vel_e = 0.248398871629;
    msg.vel_d = 0.759351879309;
    msg.speed = 0.783599016703;
    msg.gspeed = 0.778443051199;
    msg.heading = 0.172665237592;
    msg.sacc = 0.901332759398;
    msg.cacc = 0.989127591155;

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
    msg.setTimeStamp(0.0925081769758);
    msg.setSource(45381U);
    msg.setSourceEntity(182U);
    msg.setDestination(45246U);
    msg.setDestinationEntity(192U);
    msg.itow = 3243561008U;
    msg.lat = 0.869051969329;
    msg.lon = 0.995585920368;
    msg.height_ell = 0.307656835744;
    msg.height_sea = 0.319517426131;
    msg.hacc = 0.0980616916127;
    msg.vacc = 0.0829392591011;
    msg.vel_n = 0.911108183586;
    msg.vel_e = 0.401168932281;
    msg.vel_d = 0.131201531544;
    msg.speed = 0.464262422897;
    msg.gspeed = 0.769091556207;
    msg.heading = 0.0605149351067;
    msg.sacc = 0.186463004974;
    msg.cacc = 0.376203499094;

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
    msg.setTimeStamp(0.817018547443);
    msg.setSource(42978U);
    msg.setSourceEntity(143U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(215U);
    msg.id = 174U;
    msg.value = 0.617537496879;

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
    msg.setTimeStamp(0.0464063728127);
    msg.setSource(39341U);
    msg.setSourceEntity(122U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(147U);
    msg.id = 237U;
    msg.value = 0.623297257955;

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
    msg.setTimeStamp(0.00344479308028);
    msg.setSource(46262U);
    msg.setSourceEntity(54U);
    msg.setDestination(1044U);
    msg.setDestinationEntity(159U);
    msg.id = 213U;
    msg.value = 0.151706945848;

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
    msg.setTimeStamp(0.731916910322);
    msg.setSource(217U);
    msg.setSourceEntity(12U);
    msg.setDestination(26700U);
    msg.setDestinationEntity(42U);
    msg.x = 0.556842762394;
    msg.y = 0.3368801315;
    msg.z = 0.399305272171;
    msg.phi = 0.776521660422;
    msg.theta = 0.544684064025;
    msg.psi = 0.981512030189;

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
    msg.setTimeStamp(0.215511151705);
    msg.setSource(43143U);
    msg.setSourceEntity(71U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(204U);
    msg.x = 0.0240264793409;
    msg.y = 0.884021212794;
    msg.z = 0.882688979707;
    msg.phi = 0.225503468538;
    msg.theta = 0.624810314668;
    msg.psi = 0.859755021033;

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
    msg.setTimeStamp(0.736426855888);
    msg.setSource(48992U);
    msg.setSourceEntity(69U);
    msg.setDestination(58429U);
    msg.setDestinationEntity(126U);
    msg.x = 0.341106336199;
    msg.y = 0.154563422359;
    msg.z = 0.354675450443;
    msg.phi = 0.905045743318;
    msg.theta = 0.0998843060169;
    msg.psi = 0.0472743092587;

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
    msg.setTimeStamp(0.556091603695);
    msg.setSource(4785U);
    msg.setSourceEntity(123U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(196U);
    msg.beam_width = 0.17945225783;
    msg.beam_height = 0.668480258065;

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
    msg.setTimeStamp(0.784003606439);
    msg.setSource(12645U);
    msg.setSourceEntity(25U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(194U);
    msg.beam_width = 0.078142374739;
    msg.beam_height = 0.884172949428;

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
    msg.setTimeStamp(0.724807809691);
    msg.setSource(61384U);
    msg.setSourceEntity(102U);
    msg.setDestination(37689U);
    msg.setDestinationEntity(130U);
    msg.beam_width = 0.0107208452964;
    msg.beam_height = 0.477175240193;

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
    msg.setTimeStamp(0.15248963873);
    msg.setSource(52413U);
    msg.setSourceEntity(234U);
    msg.setDestination(64697U);
    msg.setDestinationEntity(108U);
    msg.sane = 38U;

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
    msg.setTimeStamp(0.0143376158423);
    msg.setSource(55974U);
    msg.setSourceEntity(148U);
    msg.setDestination(15363U);
    msg.setDestinationEntity(0U);
    msg.sane = 227U;

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
    msg.setTimeStamp(0.902755973527);
    msg.setSource(64852U);
    msg.setSourceEntity(133U);
    msg.setDestination(46011U);
    msg.setDestinationEntity(187U);
    msg.sane = 150U;

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
    msg.setTimeStamp(0.974644418208);
    msg.setSource(20081U);
    msg.setSourceEntity(80U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(3U);
    msg.id = 111U;
    msg.zoom = 143U;
    msg.action = 46U;

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
    msg.setTimeStamp(0.465989179016);
    msg.setSource(32213U);
    msg.setSourceEntity(244U);
    msg.setDestination(9827U);
    msg.setDestinationEntity(22U);
    msg.id = 38U;
    msg.zoom = 131U;
    msg.action = 214U;

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
    msg.setTimeStamp(0.592441856318);
    msg.setSource(40887U);
    msg.setSourceEntity(96U);
    msg.setDestination(13134U);
    msg.setDestinationEntity(186U);
    msg.id = 228U;
    msg.zoom = 163U;
    msg.action = 216U;

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
    msg.setTimeStamp(0.691628202341);
    msg.setSource(12145U);
    msg.setSourceEntity(24U);
    msg.setDestination(27179U);
    msg.setDestinationEntity(246U);
    msg.id = 211U;
    msg.value = 0.287153413274;

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
    msg.setTimeStamp(0.685198235666);
    msg.setSource(51834U);
    msg.setSourceEntity(29U);
    msg.setDestination(62261U);
    msg.setDestinationEntity(208U);
    msg.id = 41U;
    msg.value = 0.821543075501;

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
    msg.setTimeStamp(0.767310636454);
    msg.setSource(5034U);
    msg.setSourceEntity(172U);
    msg.setDestination(64211U);
    msg.setDestinationEntity(142U);
    msg.id = 44U;
    msg.value = 0.47890494904;

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
    msg.setTimeStamp(0.304056059271);
    msg.setSource(28242U);
    msg.setSourceEntity(166U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(82U);
    msg.id = 62U;
    msg.value = 0.269988589088;

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
    msg.setTimeStamp(0.0832322107721);
    msg.setSource(55110U);
    msg.setSourceEntity(61U);
    msg.setDestination(32088U);
    msg.setDestinationEntity(139U);
    msg.id = 64U;
    msg.value = 0.434530489629;

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
    msg.setTimeStamp(0.894925389497);
    msg.setSource(44453U);
    msg.setSourceEntity(143U);
    msg.setDestination(38264U);
    msg.setDestinationEntity(159U);
    msg.id = 206U;
    msg.value = 0.672972547444;

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
    msg.setTimeStamp(0.947381558129);
    msg.setSource(50615U);
    msg.setSourceEntity(131U);
    msg.setDestination(41783U);
    msg.setDestinationEntity(151U);
    msg.id = 171U;
    msg.angle = 0.451654885401;

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
    msg.setTimeStamp(0.166862117311);
    msg.setSource(45768U);
    msg.setSourceEntity(68U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(158U);
    msg.id = 55U;
    msg.angle = 0.309312577008;

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
    msg.setTimeStamp(0.287455287676);
    msg.setSource(61302U);
    msg.setSourceEntity(144U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(97U);
    msg.id = 216U;
    msg.angle = 0.442430288495;

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
    msg.setTimeStamp(0.171110754764);
    msg.setSource(52611U);
    msg.setSourceEntity(42U);
    msg.setDestination(43576U);
    msg.setDestinationEntity(223U);
    msg.op = 105U;
    msg.actions.assign("DVSIZWGSYAJRGZQKVMULZRZAERQLCGCDXHL");

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
    msg.setTimeStamp(0.165365071544);
    msg.setSource(3730U);
    msg.setSourceEntity(131U);
    msg.setDestination(52681U);
    msg.setDestinationEntity(21U);
    msg.op = 212U;
    msg.actions.assign("GQSHVEADHOWWYTNGZSMUXCVJAAAIUZDPLBBGQBIWEJIUBEWHIWCSIOZPMOKTYEYXRKCGUFH");

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
    msg.setTimeStamp(0.0750475415109);
    msg.setSource(61948U);
    msg.setSourceEntity(56U);
    msg.setDestination(61452U);
    msg.setDestinationEntity(214U);
    msg.op = 58U;
    msg.actions.assign("FQVGKQJIPVSUFWBJXLPZNPAYINWCILXCTCAOGCDXSWAULPJSGBKKTTOGDEHMYQKUTIWNZIMABMDWEDTCYUVYFVYRGNMVPBKLLKTHRESZOIDCOHKIPXUZKEMXCGZSAWHXBBEFJVYFJOQXYDEAGMNDOYHOPEKFUNSLFFNGSRAUYWFBNPJBFZEEQHTMQHDXJKCZRSIJVQOT");

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
    msg.setTimeStamp(0.873602732936);
    msg.setSource(59932U);
    msg.setSourceEntity(199U);
    msg.setDestination(53845U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("BTBQTLPTVDKBSZZIXCIRJHIEVPFXXYIQWOZNZNXBHPXFUYVEZBAVKEJGSOQWKLONMJQHBAGESQVMSFWYUHAVJCGKBEVMOXYXHAFDRHPSHXEAANQNBQLGDNFDFPRTCQBJCTEYFFUSWONJOSCTERDZZQYAUYC");

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
    msg.setTimeStamp(0.29207857164);
    msg.setSource(17750U);
    msg.setSourceEntity(31U);
    msg.setDestination(13488U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("CTLPFURAZSWEGLXWVPJAMRGNSRCQFYZAHSXOXRVBDOEICVX");

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
    msg.setTimeStamp(0.748287913303);
    msg.setSource(2298U);
    msg.setSourceEntity(157U);
    msg.setDestination(23623U);
    msg.setDestinationEntity(63U);
    msg.actions.assign("VONHTPUYHYNXWJNDKNAWFIITWZZDKCIHODTIIIMGNYLTFJFMVNGQXLHQJZWJLCHLUOBENHUAFJWZXISBZRDPDSVRAPIMGXWLUEPMCKRZEERQVFOGPRYUXCSORMAAHUEVGBOANCEIBHRYJYLSORWXLGPBKXTXTJQSBKFEZMOSRAKSFPQGJJUABTUJNEZDETKWBMQDCVMCLVSKZTZSPXOFWIHLUBYKCDETAQGHVAVFSCYGXGUMQOKVQPMDQ");

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
    msg.setTimeStamp(0.537697835041);
    msg.setSource(21777U);
    msg.setSourceEntity(9U);
    msg.setDestination(62396U);
    msg.setDestinationEntity(155U);
    msg.button = 160U;
    msg.value = 58U;

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
    msg.setTimeStamp(0.874548017002);
    msg.setSource(41893U);
    msg.setSourceEntity(50U);
    msg.setDestination(38954U);
    msg.setDestinationEntity(105U);
    msg.button = 100U;
    msg.value = 129U;

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
    msg.setTimeStamp(0.0208413306931);
    msg.setSource(32874U);
    msg.setSourceEntity(250U);
    msg.setDestination(32589U);
    msg.setDestinationEntity(222U);
    msg.button = 58U;
    msg.value = 89U;

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
    msg.setTimeStamp(0.923566049113);
    msg.setSource(5742U);
    msg.setSourceEntity(74U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(218U);
    msg.op = 200U;
    msg.text.assign("VODZLBARQIJSSSPPXQQLLNCMEAPZXJDNIKTNCXAVQSXMPZOFRVHWBVQKYVZKMQNYEUFHEQSICXXJPOBEPEGZNTGSFFCENWOPDECATBIVXUYHGKAHF");

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
    msg.setTimeStamp(0.872014968569);
    msg.setSource(49411U);
    msg.setSourceEntity(193U);
    msg.setDestination(52185U);
    msg.setDestinationEntity(11U);
    msg.op = 2U;
    msg.text.assign("PUNBECZOOPSGEOOFREMUZUIKLWZJXKFPGYEKJCNXZXVXTAVJTHPEEDGBZNZVRADLIFUOAWXMOAVCPDCHMFNJOWTQVRFQLTFYXZVDMHFWCVKASSKQQSNMNDNBESTDAWYLRGSIUYYMQBJCTHXQHGCZSABSGFWHDVCNSRGRVBJIEJ");

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
    msg.setTimeStamp(0.742386866224);
    msg.setSource(2824U);
    msg.setSourceEntity(194U);
    msg.setDestination(10823U);
    msg.setDestinationEntity(143U);
    msg.op = 114U;
    msg.text.assign("PSJGSQILVQKDHLLMGHPL");

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
    msg.setTimeStamp(0.365445085574);
    msg.setSource(65338U);
    msg.setSourceEntity(77U);
    msg.setDestination(23750U);
    msg.setDestinationEntity(157U);
    msg.op = 100U;
    msg.time_remain = 0.819405683582;
    msg.sched_time = 0.42009495712;

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
    msg.setTimeStamp(0.500261629254);
    msg.setSource(3690U);
    msg.setSourceEntity(236U);
    msg.setDestination(24610U);
    msg.setDestinationEntity(233U);
    msg.op = 139U;
    msg.time_remain = 0.854683739425;
    msg.sched_time = 0.412779360602;

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
    msg.setTimeStamp(0.351239243841);
    msg.setSource(48755U);
    msg.setSourceEntity(83U);
    msg.setDestination(61962U);
    msg.setDestinationEntity(82U);
    msg.op = 148U;
    msg.time_remain = 0.433130160815;
    msg.sched_time = 0.962995571919;

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
    msg.setTimeStamp(0.376680950497);
    msg.setSource(52920U);
    msg.setSourceEntity(104U);
    msg.setDestination(64713U);
    msg.setDestinationEntity(159U);
    msg.name.assign("VLYYKBZRTMQNOKUOMWCPXXYMOBXZTMHAQIXZHXDTAVVCVUZSJXMIMHRPLCUDLWYBJFPJIDASOJCSBAWCFWHDHSWENZFXSFELTBRXWPHOGIJYLMRZKGYJJHPSDTZKNCQPRQAGEINGKBGTWOYBHIUVDQTQZMBFFIZOCTKFOJROHNZYVJVYKDNPKTSMELNWLLXORRELQCPKSADAPGUSUQNGUIJRIVVBEEYAIUNLUUQ");
    msg.op = 51U;
    msg.sched_time = 0.786757156197;

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
    msg.setTimeStamp(0.820645640319);
    msg.setSource(57735U);
    msg.setSourceEntity(65U);
    msg.setDestination(64474U);
    msg.setDestinationEntity(200U);
    msg.name.assign("LHFKRFEDTKHOZEMIQILNMJCQCBTIZYNKRIDUITDZDOLDBEWJAUVVPBOAMXLUVBAJAEWXXYAJNEIAZFMGJLOGEELBIKQBDRKYGPRPEHSRQGLNWLCRZZHQMCWSPGPAPQNSIPDIYJDMWXTMJKFCBAMYPZCRXQVCUKVUHENYGFQQFJJRWYRF");
    msg.op = 94U;
    msg.sched_time = 0.618262845687;

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
    msg.setTimeStamp(0.686036572077);
    msg.setSource(17124U);
    msg.setSourceEntity(69U);
    msg.setDestination(64923U);
    msg.setDestinationEntity(95U);
    msg.name.assign("ERZLBYJOZIRAIZSFMTFHMCXJYRITMIFHJDSQTDLSDYSEQNHEBWWZBMRRQEDHAMCUBHQEMROZULMGNC");
    msg.op = 208U;
    msg.sched_time = 0.817065090802;

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
    msg.setTimeStamp(0.0684828188162);
    msg.setSource(7157U);
    msg.setSourceEntity(7U);
    msg.setDestination(27858U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.57146692856);
    msg.setSource(49399U);
    msg.setSourceEntity(112U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.649729724797);
    msg.setSource(62198U);
    msg.setSourceEntity(250U);
    msg.setDestination(52955U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.922595236687);
    msg.setSource(10266U);
    msg.setSourceEntity(254U);
    msg.setDestination(30168U);
    msg.setDestinationEntity(187U);
    msg.name.assign("YELYFEPISRUGUZKLSYKWQEMTXHGOUQTRYZMJSVZQQTOYTJDJKFARSNVOQZWFOUDCGXDRSJOMEUIDPBQFMVWXYQNHKXLXJYCXTNUJDOAHPZGADKINIJVFTKOXVMT");
    msg.state = 4U;

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
    msg.setTimeStamp(0.981989481431);
    msg.setSource(12152U);
    msg.setSourceEntity(53U);
    msg.setDestination(15482U);
    msg.setDestinationEntity(222U);
    msg.name.assign("AOCPUTNYJTTWQQPULRMIFNCJGXDCFLJURGDISSYHRPHHRVKCFJCZKKNXQLQFIFJEYPVBNDPGUWQWAPDBBDQQELAXVVIELOZJZKCTIEVOSBNSJQEYTHZOAWVRZKHEMIZHXYVJGSCTSVKXCODWUBOAMKBONFHIGOEHMAXFPQMAXGZFIYJLTLPWHUCMFZBYKLAXDGWZZEYWXKDNRSNAYWOGBXUUCSLGMNDJ");
    msg.state = 156U;

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
    msg.setTimeStamp(0.130889985183);
    msg.setSource(19393U);
    msg.setSourceEntity(165U);
    msg.setDestination(64160U);
    msg.setDestinationEntity(70U);
    msg.name.assign("BAKFBWWVGQEWSKRKUSISXBXVGETUKAYFYTITBZBKUCNGSLTAFPOIDHOUJPJZDPQXDAUVNNHVSGPROYMKNRAKNGYMMIXHZEJCLSECOFZQMJFJAPWCAOZAWBMDMRSOOXULQQODEGHWFVLYNILQMOUDHQJMRFXTYRFBCTMLSHSIXQRDTTFGCCQZHXIXIWNWGVPLVZCZHUELTUMXWJGLRYNQEZVRCEVPAPJSKKEAHVRWYPTZPIEJDOBD");
    msg.state = 35U;

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
    msg.setTimeStamp(0.0192777887965);
    msg.setSource(26725U);
    msg.setSourceEntity(170U);
    msg.setDestination(29134U);
    msg.setDestinationEntity(77U);
    msg.name.assign("RCPZWPWTKMLVQXFPVODUEUAEITUVUFQARANCWAWFHYWFISBVCBPAQDEMJXNSJBQNXNYOHDGNFVUWGTQMJFNLRDPVZHRWGPQ");
    msg.value = 30U;

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
    msg.setTimeStamp(0.519880474678);
    msg.setSource(14283U);
    msg.setSourceEntity(22U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(86U);
    msg.name.assign("ZPVRDLEQYPTGIVWGNWZTPHLJKSEXOBVEOBPXYHIOGYHDSCGAJZFKSXMJRCBPNMIANZMOYLMBLRHEKSJAOUFKVCAZCARTIWIMQVVPDHURTBMXBBUZPACGRUPTDQICXHMEHWHAOYBHYQZIXQADFLQQDCTKGRDTPSDXXQYSIPYNUOVKXYMNZLJATFOCFKJEWFEQRUTNVJSWRULLIFQGEFBKN");
    msg.value = 49U;

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
    msg.setTimeStamp(0.230851719957);
    msg.setSource(40290U);
    msg.setSourceEntity(190U);
    msg.setDestination(64587U);
    msg.setDestinationEntity(123U);
    msg.name.assign("KMCJVIQIRHLTCLRDLGJMHXQSRCPGIAYZWOFJSLTVOPLKQOMIQUDSUOWFONGNYLTMRRJEHBEFAISHDXIKRCYBXXHKMCEHJGHKUEMWOOJJLNJRVVTCLCEDRPFBMZJOKXPEQAYCDCQFAYVSZTUIPKFWGPGEPOTGXABUTXSDBINZBXNAAVABQQWBBIZTYRSD");
    msg.value = 56U;

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
    msg.setTimeStamp(0.403380812458);
    msg.setSource(61066U);
    msg.setSourceEntity(28U);
    msg.setDestination(60795U);
    msg.setDestinationEntity(40U);
    msg.name.assign("BXDVDDAHFIYJUVKYUUTWEALERAXQDQAXUXJSLWEXICFOWAGVOBIGKCBRDTYMCPNJX");

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
    msg.setTimeStamp(0.44828669655);
    msg.setSource(32859U);
    msg.setSourceEntity(128U);
    msg.setDestination(11981U);
    msg.setDestinationEntity(3U);
    msg.name.assign("KKNMGXWFTCDINABRNKQETGUQLYGZHEJDPUMYUKBNIXIVXAKUILCOPZMPJPGDGRFYKYQVRHAOFTXMZHUAVEORWRJTAFFUZXIHQPSYNJ");

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
    msg.setTimeStamp(0.878855576691);
    msg.setSource(54613U);
    msg.setSourceEntity(191U);
    msg.setDestination(22745U);
    msg.setDestinationEntity(21U);
    msg.name.assign("PGXXGJYVZNLUFLRMHEHVMIBNIIDJAUMLRPJVAPBGFNCEQVXUIUFCPAILRJZZLNDLYDKWZXONRCYSHHQVOVROJKGEZJFOGGWNMCIL");

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
    msg.setTimeStamp(0.185735085547);
    msg.setSource(9116U);
    msg.setSourceEntity(116U);
    msg.setDestination(51325U);
    msg.setDestinationEntity(231U);
    msg.name.assign("XDRUWJPEIGCOGLJGUREIOYRLBQZIAAOPMDRPNOKKLQHAJITUOVDOXBFDSOSHFGXPFWVLCAQWGBXJPTOHBHBENMNHLADPTPFDEKINPYZNNYWFKSELKCDMUFPRYSYCWNMEQTEIGJFLWVMZUUMRVQTAWSXBZMVAZWQBWCXJKUTW");
    msg.value = 66U;

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
    msg.setTimeStamp(0.848778078304);
    msg.setSource(58948U);
    msg.setSourceEntity(84U);
    msg.setDestination(18002U);
    msg.setDestinationEntity(129U);
    msg.name.assign("CXAKJYGYPWOSUQZROKTVWZBKYKWSMIPDZTOIIKWYPIFRNUYBFDFEDG");
    msg.value = 54U;

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
    msg.setTimeStamp(0.840396177819);
    msg.setSource(43619U);
    msg.setSourceEntity(202U);
    msg.setDestination(3968U);
    msg.setDestinationEntity(99U);
    msg.name.assign("HYYLEFFZAPBIDRDOHATMOVHIDRHQOKVJNHPKUWTJQUWCXLLVURIMRBKPMVNVYZIVTEOIXFQGATRUWQJWNZHDPZLGNLEFMPGFSKFREVZLNSBCLWEKHCRBTHSPOYURJLBUSVNMOSSPGGYJGUCOFMNRJSKQLBIWTNIZYYOXEJMZXKWPYDDGNNJSMOKMWTCSCQCMPTAEXAXFQCYEDJZKIXBRGOKUJBZA");
    msg.value = 195U;

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
    msg.setTimeStamp(0.649265985725);
    msg.setSource(44502U);
    msg.setSourceEntity(89U);
    msg.setDestination(44493U);
    msg.setDestinationEntity(204U);
    msg.id = 137U;
    msg.period = 2555055395U;
    msg.duty_cycle = 3290266380U;

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
    msg.setTimeStamp(0.847605757322);
    msg.setSource(60926U);
    msg.setSourceEntity(21U);
    msg.setDestination(38981U);
    msg.setDestinationEntity(80U);
    msg.id = 186U;
    msg.period = 1431187054U;
    msg.duty_cycle = 560603573U;

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
    msg.setTimeStamp(0.486018349952);
    msg.setSource(60455U);
    msg.setSourceEntity(33U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(214U);
    msg.id = 130U;
    msg.period = 3198389644U;
    msg.duty_cycle = 1467829894U;

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
    msg.setTimeStamp(0.897728912458);
    msg.setSource(18740U);
    msg.setSourceEntity(231U);
    msg.setDestination(1580U);
    msg.setDestinationEntity(95U);
    msg.id = 151U;
    msg.period = 2613231297U;
    msg.duty_cycle = 4293647436U;

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
    msg.setTimeStamp(0.85729892808);
    msg.setSource(55681U);
    msg.setSourceEntity(38U);
    msg.setDestination(57320U);
    msg.setDestinationEntity(186U);
    msg.id = 16U;
    msg.period = 489493823U;
    msg.duty_cycle = 2209695099U;

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
    msg.setTimeStamp(0.133347793575);
    msg.setSource(19207U);
    msg.setSourceEntity(230U);
    msg.setDestination(38547U);
    msg.setDestinationEntity(104U);
    msg.id = 24U;
    msg.period = 735208876U;
    msg.duty_cycle = 3607830293U;

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
    msg.setTimeStamp(0.736890910649);
    msg.setSource(8523U);
    msg.setSourceEntity(19U);
    msg.setDestination(61740U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.368628705905;
    msg.lon = 0.222911527089;
    msg.height = 0.760925401185;
    msg.x = 0.643146668929;
    msg.y = 0.326481844631;
    msg.z = 0.223233465568;
    msg.phi = 0.298857073484;
    msg.theta = 0.123801359798;
    msg.psi = 0.114726500122;
    msg.u = 0.81176398197;
    msg.v = 0.359806833573;
    msg.w = 0.440659003201;
    msg.vx = 0.517970988325;
    msg.vy = 0.0686950542768;
    msg.vz = 0.491125591729;
    msg.p = 0.495347411478;
    msg.q = 0.357028996614;
    msg.r = 0.0849143800818;
    msg.depth = 0.594103044737;
    msg.alt = 0.309360099532;

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
    msg.setTimeStamp(0.575823759083);
    msg.setSource(34052U);
    msg.setSourceEntity(225U);
    msg.setDestination(56852U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.0192942641649;
    msg.lon = 0.324424416934;
    msg.height = 0.794720672038;
    msg.x = 0.750232073549;
    msg.y = 0.279464533469;
    msg.z = 0.143738396377;
    msg.phi = 0.100629534022;
    msg.theta = 0.580749142728;
    msg.psi = 0.655516233942;
    msg.u = 0.597749317344;
    msg.v = 0.70476361192;
    msg.w = 0.719214894196;
    msg.vx = 0.847101604034;
    msg.vy = 0.334427633084;
    msg.vz = 0.65223079231;
    msg.p = 0.137174392635;
    msg.q = 0.131081852668;
    msg.r = 0.836353349034;
    msg.depth = 0.392468350912;
    msg.alt = 0.579311878966;

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
    msg.setTimeStamp(0.866800698693);
    msg.setSource(28681U);
    msg.setSourceEntity(125U);
    msg.setDestination(23101U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.728379017592;
    msg.lon = 0.328945631506;
    msg.height = 0.167845272883;
    msg.x = 0.311926507818;
    msg.y = 0.739533174455;
    msg.z = 0.0752704839888;
    msg.phi = 0.0353701132774;
    msg.theta = 0.764735952424;
    msg.psi = 0.981199834797;
    msg.u = 0.446428748383;
    msg.v = 0.862117103177;
    msg.w = 0.154710531757;
    msg.vx = 0.170978914272;
    msg.vy = 0.595550899474;
    msg.vz = 0.534979611445;
    msg.p = 0.439402779091;
    msg.q = 0.378145207948;
    msg.r = 0.0665869151236;
    msg.depth = 0.867762680099;
    msg.alt = 0.713210756503;

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
    msg.setTimeStamp(0.99566153285);
    msg.setSource(30914U);
    msg.setSourceEntity(53U);
    msg.setDestination(62004U);
    msg.setDestinationEntity(184U);
    msg.x = 0.484856450342;
    msg.y = 0.2714383959;
    msg.z = 0.0159363818423;

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
    msg.setTimeStamp(0.977857362337);
    msg.setSource(44244U);
    msg.setSourceEntity(248U);
    msg.setDestination(62939U);
    msg.setDestinationEntity(62U);
    msg.x = 0.180595919729;
    msg.y = 0.994948919964;
    msg.z = 0.391922271738;

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
    msg.setTimeStamp(0.70015966828);
    msg.setSource(40306U);
    msg.setSourceEntity(226U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(212U);
    msg.x = 0.653930650181;
    msg.y = 0.290107033284;
    msg.z = 0.288028866739;

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
    msg.setTimeStamp(0.688396947839);
    msg.setSource(62931U);
    msg.setSourceEntity(208U);
    msg.setDestination(15930U);
    msg.setDestinationEntity(154U);
    msg.value = 0.574179446516;

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
    msg.setTimeStamp(0.32067834115);
    msg.setSource(12897U);
    msg.setSourceEntity(56U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(23U);
    msg.value = 0.517034108487;

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
    msg.setTimeStamp(0.420316115744);
    msg.setSource(59986U);
    msg.setSourceEntity(46U);
    msg.setDestination(61512U);
    msg.setDestinationEntity(34U);
    msg.value = 0.3941370597;

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
    msg.setTimeStamp(0.772483478846);
    msg.setSource(53143U);
    msg.setSourceEntity(64U);
    msg.setDestination(14912U);
    msg.setDestinationEntity(102U);
    msg.value = 0.68507577179;

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
    msg.setTimeStamp(0.394442254773);
    msg.setSource(3354U);
    msg.setSourceEntity(122U);
    msg.setDestination(9267U);
    msg.setDestinationEntity(254U);
    msg.value = 0.973359298362;

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
    msg.setTimeStamp(0.499268719689);
    msg.setSource(52738U);
    msg.setSourceEntity(95U);
    msg.setDestination(37862U);
    msg.setDestinationEntity(208U);
    msg.value = 0.696971484912;

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
    msg.setTimeStamp(0.970857028951);
    msg.setSource(65218U);
    msg.setSourceEntity(249U);
    msg.setDestination(10611U);
    msg.setDestinationEntity(22U);
    msg.x = 0.114553879784;
    msg.y = 0.455408301571;
    msg.z = 0.413529577871;
    msg.phi = 0.660778823106;
    msg.theta = 0.897764747111;
    msg.psi = 0.0210712488093;
    msg.p = 0.615015387397;
    msg.q = 0.980743750359;
    msg.r = 0.786740803501;
    msg.u = 0.459840058879;
    msg.v = 0.165216110486;
    msg.w = 0.313795255484;
    msg.bias_psi = 0.514684376575;
    msg.bias_r = 0.910551241554;

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
    msg.setTimeStamp(0.693666999531);
    msg.setSource(15242U);
    msg.setSourceEntity(236U);
    msg.setDestination(7412U);
    msg.setDestinationEntity(253U);
    msg.x = 0.707900805671;
    msg.y = 0.436421446497;
    msg.z = 0.629548481016;
    msg.phi = 0.722502806299;
    msg.theta = 0.655090235996;
    msg.psi = 0.567251316597;
    msg.p = 0.603473701689;
    msg.q = 0.96742972271;
    msg.r = 0.364866171852;
    msg.u = 0.45285247159;
    msg.v = 0.700840441154;
    msg.w = 0.674708572209;
    msg.bias_psi = 0.251521518359;
    msg.bias_r = 0.139738794403;

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
    msg.setTimeStamp(0.967319985852);
    msg.setSource(24805U);
    msg.setSourceEntity(45U);
    msg.setDestination(35946U);
    msg.setDestinationEntity(72U);
    msg.x = 0.578132586732;
    msg.y = 0.680228771251;
    msg.z = 0.117572284918;
    msg.phi = 0.81621997727;
    msg.theta = 0.970358944197;
    msg.psi = 0.394228036696;
    msg.p = 0.898185195616;
    msg.q = 0.426488175403;
    msg.r = 0.841377848237;
    msg.u = 0.264205857243;
    msg.v = 0.959625288412;
    msg.w = 0.594190156874;
    msg.bias_psi = 0.703698174999;
    msg.bias_r = 0.392370901459;

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
    msg.setTimeStamp(0.168733275538);
    msg.setSource(12062U);
    msg.setSourceEntity(141U);
    msg.setDestination(45135U);
    msg.setDestinationEntity(39U);
    msg.bias_psi = 0.346275154046;
    msg.bias_r = 0.667200497835;
    msg.cog = 0.630683458078;
    msg.cyaw = 0.550880048108;
    msg.lbl_rej_level = 0.511947064128;
    msg.gps_rej_level = 0.908694644397;
    msg.custom_x = 0.096387277434;
    msg.custom_y = 0.453514849872;
    msg.custom_z = 0.0432182187918;

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
    msg.setTimeStamp(0.48661936939);
    msg.setSource(6978U);
    msg.setSourceEntity(74U);
    msg.setDestination(27539U);
    msg.setDestinationEntity(253U);
    msg.bias_psi = 0.0547639211262;
    msg.bias_r = 0.129521806165;
    msg.cog = 0.106540627013;
    msg.cyaw = 0.646336636905;
    msg.lbl_rej_level = 0.664918560949;
    msg.gps_rej_level = 0.648916389722;
    msg.custom_x = 0.630906091346;
    msg.custom_y = 0.906050753276;
    msg.custom_z = 0.654388708817;

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
    msg.setTimeStamp(0.0742841411991);
    msg.setSource(35573U);
    msg.setSourceEntity(254U);
    msg.setDestination(31699U);
    msg.setDestinationEntity(215U);
    msg.bias_psi = 0.225309738965;
    msg.bias_r = 0.17402597798;
    msg.cog = 0.0435979688283;
    msg.cyaw = 0.0459402303067;
    msg.lbl_rej_level = 0.99997799785;
    msg.gps_rej_level = 0.882417794485;
    msg.custom_x = 0.944278882564;
    msg.custom_y = 0.386058711066;
    msg.custom_z = 0.611181302889;

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
    msg.setTimeStamp(0.413432676931);
    msg.setSource(4238U);
    msg.setSourceEntity(203U);
    msg.setDestination(18600U);
    msg.setDestinationEntity(166U);
    msg.utc_time = 0.0135708164552;
    msg.reason = 82U;

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
    msg.setTimeStamp(0.368850120026);
    msg.setSource(8646U);
    msg.setSourceEntity(137U);
    msg.setDestination(64450U);
    msg.setDestinationEntity(161U);
    msg.utc_time = 0.654142484442;
    msg.reason = 24U;

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
    msg.setTimeStamp(0.0104831367777);
    msg.setSource(16260U);
    msg.setSourceEntity(44U);
    msg.setDestination(29547U);
    msg.setDestinationEntity(209U);
    msg.utc_time = 0.147809243652;
    msg.reason = 157U;

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
    msg.setTimeStamp(0.0978949879151);
    msg.setSource(49965U);
    msg.setSourceEntity(39U);
    msg.setDestination(13960U);
    msg.setDestinationEntity(115U);
    msg.id = 171U;
    msg.range = 0.930671246234;
    msg.acceptance = 108U;

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
    msg.setTimeStamp(0.608980082791);
    msg.setSource(34651U);
    msg.setSourceEntity(10U);
    msg.setDestination(18366U);
    msg.setDestinationEntity(168U);
    msg.id = 189U;
    msg.range = 0.117795803678;
    msg.acceptance = 100U;

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
    msg.setTimeStamp(0.637758589526);
    msg.setSource(1324U);
    msg.setSourceEntity(214U);
    msg.setDestination(56599U);
    msg.setDestinationEntity(165U);
    msg.id = 168U;
    msg.range = 0.835873156693;
    msg.acceptance = 42U;

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
    msg.setTimeStamp(0.753865507703);
    msg.setSource(25108U);
    msg.setSourceEntity(97U);
    msg.setDestination(26536U);
    msg.setDestinationEntity(31U);
    msg.type = 158U;
    msg.reason = 130U;
    msg.value = 0.592463581263;
    msg.timestep = 0.836524908317;

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
    msg.setTimeStamp(0.285090700522);
    msg.setSource(56283U);
    msg.setSourceEntity(51U);
    msg.setDestination(5004U);
    msg.setDestinationEntity(115U);
    msg.type = 107U;
    msg.reason = 224U;
    msg.value = 0.607734628861;
    msg.timestep = 0.920746091834;

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
    msg.setTimeStamp(0.0620090997872);
    msg.setSource(36920U);
    msg.setSourceEntity(14U);
    msg.setDestination(60136U);
    msg.setDestinationEntity(96U);
    msg.type = 198U;
    msg.reason = 192U;
    msg.value = 0.20900408613;
    msg.timestep = 0.461730228607;

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
    msg.setTimeStamp(0.713468618238);
    msg.setSource(37898U);
    msg.setSourceEntity(86U);
    msg.setDestination(44799U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.305471839292);
    msg.setSource(1451U);
    msg.setSourceEntity(26U);
    msg.setDestination(36848U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.71450032594);
    msg.setSource(47392U);
    msg.setSourceEntity(92U);
    msg.setDestination(61838U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.927195856791);
    msg.setSource(6250U);
    msg.setSourceEntity(71U);
    msg.setDestination(16596U);
    msg.setDestinationEntity(113U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BYRKJNHOKWHXUDTGHMNFOUDITVXQAJJGOIAGMBAKQEBVCVNXCPBOCBYEKHZPZUIRRJVHBXPGWPYHNVLQOKIZMZIZNNKSTJRDSAIZTGMLCETSOSTPNMLLBLULMJGGSDFLQFSZVEXXDUSIUYWEWRLKYVCNUYYWQDGYUKHZCVBJFAAJIAMDPFQIJKYEXWRTHOTEFQHORDVMMOUMDTCDIWFUPOFFAXSCELQHCWKWSCYQZRLBPGNVRZXEJEP");
    tmp_msg_0.lat = 0.997466788877;
    tmp_msg_0.lon = 0.954568640985;
    tmp_msg_0.depth = 0.199976993318;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 238U;
    tmp_msg_0.transponder_delay = 29U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.65205855174;
    msg.y = 0.304622739373;
    msg.var_x = 0.652450610051;
    msg.var_y = 0.915071128633;
    msg.distance = 0.37612705222;

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
    msg.setTimeStamp(0.628637329361);
    msg.setSource(64187U);
    msg.setSourceEntity(195U);
    msg.setDestination(8658U);
    msg.setDestinationEntity(90U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FMNPGOMXOBBNNNZXWTYGDEEMHUILIIGGARZWSMYBKCDHOPETOVWDKIWMDSLBVZIQKVBLAAIDFJXQQPRURTHDDJHRAAXQDSRHOUQOUXJMNYOBWCQGBSJAXGLVZTBVTZFTWVLREQZJEMJNSYTAZCYDEFYTEUSMCEFGIYFFKNPSQOVPKMJGZVKVWYCIHDERPAJEONRJUHAAFSWQRLKXFUFZVTSKXOCLLLWGHUISNRGXQHYPPUTIULWHBNBKMPCC");
    tmp_msg_0.lat = 0.392594124099;
    tmp_msg_0.lon = 0.399388849899;
    tmp_msg_0.depth = 0.23523179863;
    tmp_msg_0.query_channel = 202U;
    tmp_msg_0.reply_channel = 248U;
    tmp_msg_0.transponder_delay = 169U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.487258974944;
    msg.y = 0.914787643065;
    msg.var_x = 0.387366074125;
    msg.var_y = 0.40980477709;
    msg.distance = 0.0448383135443;

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
    msg.setTimeStamp(0.225206585965);
    msg.setSource(8015U);
    msg.setSourceEntity(12U);
    msg.setDestination(57575U);
    msg.setDestinationEntity(170U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZLQZABVNMORMXIIRAAVCIPVDAVRPFXHIUPADMNXSLYLTZWCXCEHKXZTRRLJIWOZQVBTGJINJCXWZKOYFJCGRUONWWPGRCUOREGFNCQDVYTPFHFGSWIQSLARXGK");
    tmp_msg_0.lat = 0.0350454094413;
    tmp_msg_0.lon = 0.495013022118;
    tmp_msg_0.depth = 0.131761006663;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 167U;
    tmp_msg_0.transponder_delay = 212U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0543814929995;
    msg.y = 0.540290528981;
    msg.var_x = 0.938679023736;
    msg.var_y = 0.354458988315;
    msg.distance = 0.539258518917;

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
    msg.setTimeStamp(0.860817290127);
    msg.setSource(43337U);
    msg.setSourceEntity(11U);
    msg.setDestination(28909U);
    msg.setDestinationEntity(90U);
    msg.state = 184U;

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
    msg.setTimeStamp(0.165563620045);
    msg.setSource(63327U);
    msg.setSourceEntity(51U);
    msg.setDestination(7417U);
    msg.setDestinationEntity(97U);
    msg.state = 152U;

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
    msg.setTimeStamp(0.968885423845);
    msg.setSource(58549U);
    msg.setSourceEntity(16U);
    msg.setDestination(14966U);
    msg.setDestinationEntity(84U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.553721145151);
    msg.setSource(14943U);
    msg.setSourceEntity(202U);
    msg.setDestination(42420U);
    msg.setDestinationEntity(176U);
    msg.x = 0.888740321831;
    msg.y = 0.137358972258;
    msg.z = 0.638730301774;

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
    msg.setTimeStamp(0.355325011752);
    msg.setSource(26501U);
    msg.setSourceEntity(70U);
    msg.setDestination(2685U);
    msg.setDestinationEntity(50U);
    msg.x = 0.00582070440084;
    msg.y = 0.119205348237;
    msg.z = 0.478567540096;

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
    msg.setTimeStamp(0.561371078631);
    msg.setSource(45407U);
    msg.setSourceEntity(27U);
    msg.setDestination(41236U);
    msg.setDestinationEntity(252U);
    msg.x = 0.748921253243;
    msg.y = 0.805618659784;
    msg.z = 0.486640311587;

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
    msg.setTimeStamp(0.408187110002);
    msg.setSource(53989U);
    msg.setSourceEntity(100U);
    msg.setDestination(18948U);
    msg.setDestinationEntity(187U);
    msg.value = 0.508166271488;

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
    msg.setTimeStamp(0.509869917193);
    msg.setSource(19095U);
    msg.setSourceEntity(35U);
    msg.setDestination(26285U);
    msg.setDestinationEntity(29U);
    msg.value = 0.664991857741;

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
    msg.setTimeStamp(0.181814042566);
    msg.setSource(14339U);
    msg.setSourceEntity(148U);
    msg.setDestination(46969U);
    msg.setDestinationEntity(67U);
    msg.value = 0.527026399511;

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
    msg.setTimeStamp(0.195622417655);
    msg.setSource(5650U);
    msg.setSourceEntity(241U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(144U);
    msg.value = 0.764541583962;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.501432544404);
    msg.setSource(24922U);
    msg.setSourceEntity(217U);
    msg.setDestination(57198U);
    msg.setDestinationEntity(200U);
    msg.value = 0.600676682391;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.445974197144);
    msg.setSource(58638U);
    msg.setSourceEntity(224U);
    msg.setDestination(56372U);
    msg.setDestinationEntity(48U);
    msg.value = 0.372434861384;
    msg.z_units = 5U;

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
    msg.setTimeStamp(0.402030744307);
    msg.setSource(39971U);
    msg.setSourceEntity(19U);
    msg.setDestination(54737U);
    msg.setDestinationEntity(203U);
    msg.value = 0.58377210144;
    msg.speed_units = 216U;

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
    msg.setTimeStamp(0.187078343438);
    msg.setSource(25453U);
    msg.setSourceEntity(133U);
    msg.setDestination(4917U);
    msg.setDestinationEntity(92U);
    msg.value = 0.485047658243;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.905920524061);
    msg.setSource(45231U);
    msg.setSourceEntity(1U);
    msg.setDestination(19350U);
    msg.setDestinationEntity(21U);
    msg.value = 0.973901293881;
    msg.speed_units = 147U;

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
    msg.setTimeStamp(0.259029854914);
    msg.setSource(14193U);
    msg.setSourceEntity(250U);
    msg.setDestination(1992U);
    msg.setDestinationEntity(158U);
    msg.value = 0.602251484504;

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
    msg.setTimeStamp(0.448444956191);
    msg.setSource(51839U);
    msg.setSourceEntity(238U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(216U);
    msg.value = 0.0862851323608;

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
    msg.setTimeStamp(0.422214991263);
    msg.setSource(45964U);
    msg.setSourceEntity(194U);
    msg.setDestination(42570U);
    msg.setDestinationEntity(238U);
    msg.value = 0.106876659425;

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
    msg.setTimeStamp(0.131171681298);
    msg.setSource(23054U);
    msg.setSourceEntity(19U);
    msg.setDestination(15049U);
    msg.setDestinationEntity(227U);
    msg.value = 0.98411140096;

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
    msg.setTimeStamp(0.449153024317);
    msg.setSource(60572U);
    msg.setSourceEntity(223U);
    msg.setDestination(16608U);
    msg.setDestinationEntity(87U);
    msg.value = 0.800067822921;

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
    msg.setTimeStamp(0.0532058867847);
    msg.setSource(46325U);
    msg.setSourceEntity(78U);
    msg.setDestination(44435U);
    msg.setDestinationEntity(226U);
    msg.value = 0.403518621066;

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
    msg.setTimeStamp(0.517533802955);
    msg.setSource(18710U);
    msg.setSourceEntity(39U);
    msg.setDestination(35698U);
    msg.setDestinationEntity(70U);
    msg.value = 0.279422710478;

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
    msg.setTimeStamp(0.507965305854);
    msg.setSource(16667U);
    msg.setSourceEntity(17U);
    msg.setDestination(16368U);
    msg.setDestinationEntity(149U);
    msg.value = 0.0318820319915;

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
    msg.setTimeStamp(0.344257227536);
    msg.setSource(57250U);
    msg.setSourceEntity(99U);
    msg.setDestination(11183U);
    msg.setDestinationEntity(107U);
    msg.value = 0.660437335358;

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
    msg.setTimeStamp(0.167859571973);
    msg.setSource(65365U);
    msg.setSourceEntity(43U);
    msg.setDestination(38656U);
    msg.setDestinationEntity(233U);
    msg.start_lat = 0.279411172871;
    msg.start_lon = 0.753548437176;
    msg.start_z = 0.148840453833;
    msg.start_z_units = 219U;
    msg.end_lat = 0.45108788365;
    msg.end_lon = 0.320323697575;
    msg.end_z = 0.48777262685;
    msg.end_z_units = 187U;
    msg.speed = 0.599851628974;
    msg.speed_units = 156U;
    msg.lradius = 0.820912240554;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.180973434469);
    msg.setSource(18424U);
    msg.setSourceEntity(1U);
    msg.setDestination(30839U);
    msg.setDestinationEntity(110U);
    msg.start_lat = 0.950397630958;
    msg.start_lon = 0.942649425039;
    msg.start_z = 0.244204119792;
    msg.start_z_units = 147U;
    msg.end_lat = 0.0888326960936;
    msg.end_lon = 0.0723210718062;
    msg.end_z = 0.463910885191;
    msg.end_z_units = 38U;
    msg.speed = 0.576524597761;
    msg.speed_units = 186U;
    msg.lradius = 0.515822035181;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.662445960149);
    msg.setSource(47300U);
    msg.setSourceEntity(120U);
    msg.setDestination(51785U);
    msg.setDestinationEntity(238U);
    msg.start_lat = 0.808333454607;
    msg.start_lon = 0.298674995916;
    msg.start_z = 0.106359085842;
    msg.start_z_units = 138U;
    msg.end_lat = 0.220232310305;
    msg.end_lon = 0.156296076678;
    msg.end_z = 0.86901939405;
    msg.end_z_units = 96U;
    msg.speed = 0.458819960697;
    msg.speed_units = 100U;
    msg.lradius = 0.669934807137;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.578563839073);
    msg.setSource(25876U);
    msg.setSourceEntity(194U);
    msg.setDestination(64340U);
    msg.setDestinationEntity(45U);
    msg.x = 0.922786884909;
    msg.y = 0.757823687289;
    msg.z = 0.445379384158;
    msg.k = 0.11405365344;
    msg.m = 0.977125860412;
    msg.n = 0.504554582414;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.490212851526);
    msg.setSource(12316U);
    msg.setSourceEntity(97U);
    msg.setDestination(16445U);
    msg.setDestinationEntity(143U);
    msg.x = 0.329302756383;
    msg.y = 0.802023600549;
    msg.z = 0.37434808758;
    msg.k = 0.694047730865;
    msg.m = 0.998045725096;
    msg.n = 0.116476248036;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.290738219232);
    msg.setSource(43227U);
    msg.setSourceEntity(22U);
    msg.setDestination(22812U);
    msg.setDestinationEntity(142U);
    msg.x = 0.123746214293;
    msg.y = 0.879869100596;
    msg.z = 0.17129705299;
    msg.k = 0.169423053988;
    msg.m = 0.918942638467;
    msg.n = 0.491076210613;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.806668915506);
    msg.setSource(38653U);
    msg.setSourceEntity(164U);
    msg.setDestination(56055U);
    msg.setDestinationEntity(136U);
    msg.value = 0.920323198206;

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
    msg.setTimeStamp(0.693271798056);
    msg.setSource(41650U);
    msg.setSourceEntity(181U);
    msg.setDestination(6947U);
    msg.setDestinationEntity(231U);
    msg.value = 0.776361786747;

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
    msg.setTimeStamp(0.821299172306);
    msg.setSource(10175U);
    msg.setSourceEntity(212U);
    msg.setDestination(18687U);
    msg.setDestinationEntity(35U);
    msg.value = 0.389648798639;

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
    msg.setTimeStamp(0.0650831613751);
    msg.setSource(36282U);
    msg.setSourceEntity(116U);
    msg.setDestination(10492U);
    msg.setDestinationEntity(198U);
    msg.u = 0.12292456436;
    msg.v = 0.759672775602;
    msg.w = 0.943204441964;
    msg.p = 0.148513662683;
    msg.q = 0.698273728155;
    msg.r = 0.189769351155;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.326316624217);
    msg.setSource(54179U);
    msg.setSourceEntity(76U);
    msg.setDestination(13504U);
    msg.setDestinationEntity(254U);
    msg.u = 0.333489020707;
    msg.v = 0.208777335623;
    msg.w = 0.859736257758;
    msg.p = 0.107220181621;
    msg.q = 0.712034050212;
    msg.r = 0.104979828153;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.435316710736);
    msg.setSource(41959U);
    msg.setSourceEntity(208U);
    msg.setDestination(55902U);
    msg.setDestinationEntity(216U);
    msg.u = 0.296389546879;
    msg.v = 0.659160187316;
    msg.w = 0.988962153181;
    msg.p = 0.641788197656;
    msg.q = 0.372472192665;
    msg.r = 0.575551899247;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.763348607884);
    msg.setSource(42013U);
    msg.setSourceEntity(14U);
    msg.setDestination(28980U);
    msg.setDestinationEntity(88U);
    msg.start_lat = 0.474197935279;
    msg.start_lon = 0.909996265917;
    msg.start_z = 0.538605497143;
    msg.start_z_units = 199U;
    msg.end_lat = 0.260672119114;
    msg.end_lon = 0.327285804982;
    msg.end_z = 0.320660573087;
    msg.end_z_units = 220U;
    msg.lradius = 0.0517094171835;
    msg.flags = 156U;
    msg.x = 0.289073683007;
    msg.y = 0.227989484789;
    msg.z = 0.544975092857;
    msg.vx = 0.682882212755;
    msg.vy = 0.963734438996;
    msg.vz = 0.339877353902;
    msg.course_error = 0.978685999544;
    msg.eta = 29148U;

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
    msg.setTimeStamp(0.633065133803);
    msg.setSource(9984U);
    msg.setSourceEntity(149U);
    msg.setDestination(115U);
    msg.setDestinationEntity(246U);
    msg.start_lat = 0.173076421379;
    msg.start_lon = 0.550759420653;
    msg.start_z = 0.243692866746;
    msg.start_z_units = 242U;
    msg.end_lat = 0.721689108255;
    msg.end_lon = 0.543649730899;
    msg.end_z = 0.813158701999;
    msg.end_z_units = 47U;
    msg.lradius = 0.358935268892;
    msg.flags = 82U;
    msg.x = 0.463094701581;
    msg.y = 0.0960086741154;
    msg.z = 0.270272843778;
    msg.vx = 0.864533681986;
    msg.vy = 0.762835274309;
    msg.vz = 0.830236811156;
    msg.course_error = 0.687271557196;
    msg.eta = 27511U;

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
    msg.setTimeStamp(0.968609177494);
    msg.setSource(22699U);
    msg.setSourceEntity(112U);
    msg.setDestination(60893U);
    msg.setDestinationEntity(199U);
    msg.start_lat = 0.83980856901;
    msg.start_lon = 0.514819319854;
    msg.start_z = 0.952329182466;
    msg.start_z_units = 121U;
    msg.end_lat = 0.685427754265;
    msg.end_lon = 0.889344882037;
    msg.end_z = 0.646912098658;
    msg.end_z_units = 196U;
    msg.lradius = 0.1224838717;
    msg.flags = 116U;
    msg.x = 0.89187329341;
    msg.y = 0.984665174867;
    msg.z = 0.211938710086;
    msg.vx = 0.668040232363;
    msg.vy = 0.219416235435;
    msg.vz = 0.972803587373;
    msg.course_error = 0.107243384011;
    msg.eta = 61171U;

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
    msg.setTimeStamp(0.636495158882);
    msg.setSource(1767U);
    msg.setSourceEntity(36U);
    msg.setDestination(43705U);
    msg.setDestinationEntity(211U);
    msg.k = 0.947798068581;
    msg.m = 0.663130427369;
    msg.n = 0.509016541268;

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
    msg.setTimeStamp(0.458961307832);
    msg.setSource(46911U);
    msg.setSourceEntity(33U);
    msg.setDestination(14819U);
    msg.setDestinationEntity(136U);
    msg.k = 0.920204368203;
    msg.m = 0.378541820724;
    msg.n = 0.266818049919;

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
    msg.setTimeStamp(0.0592082954913);
    msg.setSource(37396U);
    msg.setSourceEntity(31U);
    msg.setDestination(30154U);
    msg.setDestinationEntity(229U);
    msg.k = 0.488898406888;
    msg.m = 0.912344418927;
    msg.n = 0.217479925573;

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
    msg.setTimeStamp(0.346295771298);
    msg.setSource(44489U);
    msg.setSourceEntity(191U);
    msg.setDestination(51362U);
    msg.setDestinationEntity(29U);
    msg.p = 0.723218480594;
    msg.i = 0.86025211466;
    msg.d = 0.0909752149969;
    msg.a = 0.864173159216;

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
    msg.setTimeStamp(0.630495376596);
    msg.setSource(4029U);
    msg.setSourceEntity(187U);
    msg.setDestination(45710U);
    msg.setDestinationEntity(16U);
    msg.p = 0.453408136105;
    msg.i = 0.199034629199;
    msg.d = 0.494253345674;
    msg.a = 0.961121620978;

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
    msg.setTimeStamp(0.513390935715);
    msg.setSource(52147U);
    msg.setSourceEntity(38U);
    msg.setDestination(11016U);
    msg.setDestinationEntity(199U);
    msg.p = 0.06712938674;
    msg.i = 0.366309127994;
    msg.d = 0.544048939426;
    msg.a = 0.319847183578;

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
    msg.setTimeStamp(0.34549038577);
    msg.setSource(40870U);
    msg.setSourceEntity(230U);
    msg.setDestination(33600U);
    msg.setDestinationEntity(127U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.254470242349);
    msg.setSource(65051U);
    msg.setSourceEntity(148U);
    msg.setDestination(9183U);
    msg.setDestinationEntity(169U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.0650992298487);
    msg.setSource(2956U);
    msg.setSourceEntity(6U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(68U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.558611177412);
    msg.setSource(43660U);
    msg.setSourceEntity(179U);
    msg.setDestination(55508U);
    msg.setDestinationEntity(55U);
    msg.timeout = 12129U;
    msg.lat = 0.266223290575;
    msg.lon = 0.0142889840289;
    msg.z = 0.717189721158;
    msg.z_units = 112U;
    msg.speed = 0.676417580125;
    msg.speed_units = 159U;
    msg.roll = 0.0283101606192;
    msg.pitch = 0.964574290975;
    msg.yaw = 0.493412932975;
    msg.custom.assign("APUWZTAJMSQLIYYNHGVNHCLNBILU");

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
    msg.setTimeStamp(0.504887591812);
    msg.setSource(30907U);
    msg.setSourceEntity(254U);
    msg.setDestination(7614U);
    msg.setDestinationEntity(65U);
    msg.timeout = 15728U;
    msg.lat = 0.723973746702;
    msg.lon = 0.606296571674;
    msg.z = 0.216678888721;
    msg.z_units = 84U;
    msg.speed = 0.216260925118;
    msg.speed_units = 92U;
    msg.roll = 0.689014051308;
    msg.pitch = 0.621249734213;
    msg.yaw = 0.645060296917;
    msg.custom.assign("YDUTONFVAGQMHWTIWUAHFHLSORGHZBJKVXSNNNQVTYSDYWOJUOGGBQKWEENOBZRRMFZCHAPEIZNPFKYIQBWEAICFUMLDVMIKIYKIVCIBYXPXDVXNBAJUMXEDW");

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
    msg.setTimeStamp(0.436638714691);
    msg.setSource(57844U);
    msg.setSourceEntity(137U);
    msg.setDestination(44370U);
    msg.setDestinationEntity(51U);
    msg.timeout = 20569U;
    msg.lat = 0.192654167174;
    msg.lon = 0.883973552523;
    msg.z = 0.26020761597;
    msg.z_units = 156U;
    msg.speed = 0.579411569531;
    msg.speed_units = 19U;
    msg.roll = 0.623393407494;
    msg.pitch = 0.456417646578;
    msg.yaw = 0.513563221344;
    msg.custom.assign("ULHKSYZGTTYHCBUHIXYHVXQDWYDMODUZXWPQUEGIEJNCTDFEGLFQYVRPBOCECQAYTGFWMOUJVMBVKSJPJKNMRFXHDUKNSUJYAJQLVDAJCUBDXZXRSQIJWMKQBMWMEQCPFEKJTPLZHSMGJINUWVVBNLKFVXACYAKHONUFRPMTGIWWZMNPY");

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
    msg.setTimeStamp(0.406120987343);
    msg.setSource(27031U);
    msg.setSourceEntity(102U);
    msg.setDestination(10845U);
    msg.setDestinationEntity(70U);
    msg.timeout = 48310U;
    msg.lat = 0.474542730585;
    msg.lon = 0.648050016372;
    msg.z = 0.186909137433;
    msg.z_units = 149U;
    msg.speed = 0.0321004161521;
    msg.speed_units = 250U;
    msg.duration = 4723U;
    msg.radius = 0.684967542729;
    msg.flags = 38U;
    msg.custom.assign("WFZFJVWKAPKNLPSLCYMPKOIDWPINVLMSHXQNZXGYDJOROEACXPYYJICMVUEGAOCRGUUFHSRFNQFTHWDHTHECBMUJBMFGAUWVNOKEPUPYKQBRQCOZUDNSGXVHANLRNSJRAR");

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
    msg.setTimeStamp(0.231563716656);
    msg.setSource(20513U);
    msg.setSourceEntity(190U);
    msg.setDestination(55786U);
    msg.setDestinationEntity(97U);
    msg.timeout = 20546U;
    msg.lat = 0.671711638642;
    msg.lon = 0.918134289884;
    msg.z = 0.18990177713;
    msg.z_units = 207U;
    msg.speed = 0.878577516017;
    msg.speed_units = 206U;
    msg.duration = 28405U;
    msg.radius = 0.0336691801962;
    msg.flags = 42U;
    msg.custom.assign("XQSYWYQELUBVZXFAJIRKMGKFPAEFSNWDFCAGPUOZOCMISNTAETPJETHCQBHLWYDXTYWLSHUNTXAZHIHRIZWKYNVUENHTMSQRIZKPPRWJVOVOPLXXJFLUPWDAGYICTDQTYUYOHIMBZXQQFMUWUWDJKCMGKLQMNLBJRQRD");

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
    msg.setTimeStamp(0.76847031774);
    msg.setSource(61678U);
    msg.setSourceEntity(109U);
    msg.setDestination(53194U);
    msg.setDestinationEntity(64U);
    msg.timeout = 32152U;
    msg.lat = 0.247455930556;
    msg.lon = 0.353174260239;
    msg.z = 0.226414250184;
    msg.z_units = 187U;
    msg.speed = 0.851074236476;
    msg.speed_units = 26U;
    msg.duration = 26556U;
    msg.radius = 0.94466575307;
    msg.flags = 52U;
    msg.custom.assign("TRAIJRQHEJVVDXRNIBTULFNOVIIHZQUBLWXLSECFTFRWBWHARQYPCOAPTEGTXSOBYCPZOSPZQNDJQPTJCSLDAIVELXKWKAKOHJRGMRAGIDCRYKXVVVUSZQJHFIUABBONMUDJXBOJNIBYHVTGJKOYQICEUZYNLEMFUKWHDSMKWPRCKPMLGGGVQMMYWMHBEDEN");

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
    msg.setTimeStamp(0.260612414535);
    msg.setSource(56928U);
    msg.setSourceEntity(116U);
    msg.setDestination(63076U);
    msg.setDestinationEntity(12U);
    msg.custom.assign("NTBZMHJEWLXJCWLJSVDEFBRZFYHENIJWOIPOZOONJUJXCWQOHCGMNTXLLBSBIQREUCLAXQKRSHRFTYVUOVMPZDINNIUWHPVWNITOBEAYKMQVUZYIVEGKGCRDWMXDAQSNLFCBAKJJSZPFBK");

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
    msg.setTimeStamp(0.24323945115);
    msg.setSource(29589U);
    msg.setSourceEntity(42U);
    msg.setDestination(50357U);
    msg.setDestinationEntity(200U);
    msg.custom.assign("PXDTBJWOIFTNZXBOLVLZEQCEIHEJFDPOE");

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
    msg.setTimeStamp(0.806698975659);
    msg.setSource(10694U);
    msg.setSourceEntity(86U);
    msg.setDestination(64300U);
    msg.setDestinationEntity(59U);
    msg.custom.assign("VEWHIVNUULABYX");

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
    msg.setTimeStamp(0.916268263198);
    msg.setSource(50102U);
    msg.setSourceEntity(119U);
    msg.setDestination(35574U);
    msg.setDestinationEntity(25U);
    msg.timeout = 36001U;
    msg.lat = 0.710971746762;
    msg.lon = 0.0671685968466;
    msg.z = 0.778696739511;
    msg.z_units = 188U;
    msg.duration = 47629U;
    msg.speed = 0.241522241379;
    msg.speed_units = 83U;
    msg.type = 7U;
    msg.radius = 0.417804452146;
    msg.length = 0.391939682412;
    msg.bearing = 0.122829514754;
    msg.direction = 254U;
    msg.custom.assign("UENYEZXSAJKJFLHHGTPZHRGVNVWCODMBWFUFBNXKREOL");

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
    msg.setTimeStamp(0.480622714867);
    msg.setSource(55660U);
    msg.setSourceEntity(203U);
    msg.setDestination(49946U);
    msg.setDestinationEntity(217U);
    msg.timeout = 5528U;
    msg.lat = 0.494638390955;
    msg.lon = 0.31547067873;
    msg.z = 0.709351146493;
    msg.z_units = 157U;
    msg.duration = 35067U;
    msg.speed = 0.00969866006619;
    msg.speed_units = 109U;
    msg.type = 24U;
    msg.radius = 0.0621532639974;
    msg.length = 0.907227449507;
    msg.bearing = 0.417974400374;
    msg.direction = 107U;
    msg.custom.assign("TSXSVDVZXNDFMDZBMKAUGIHTHGGZNDYNZRHSPYREDTRHOJGMACLTTQNJCKFPBMULHVFPUGUO");

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
    msg.setTimeStamp(0.348544345196);
    msg.setSource(14713U);
    msg.setSourceEntity(22U);
    msg.setDestination(47007U);
    msg.setDestinationEntity(176U);
    msg.timeout = 33194U;
    msg.lat = 0.28433677004;
    msg.lon = 0.182321428579;
    msg.z = 0.28593926125;
    msg.z_units = 155U;
    msg.duration = 41655U;
    msg.speed = 0.727404354222;
    msg.speed_units = 222U;
    msg.type = 199U;
    msg.radius = 0.165982139824;
    msg.length = 0.514402861969;
    msg.bearing = 0.767251980081;
    msg.direction = 232U;
    msg.custom.assign("YSNBOKEIEKQUGNTRTIVRJRHPPBVCSPYCZAAQRLPKJHKFTMFCPSWDNGZYGVYKHDMHEXBZMURZKTLAIJPELPCLHGUDPKOAXIXRSSPMOVZXJTNYFMRTCVSIQLIRDSNEDCTMHALJEFFVOTQDVTHZHHOAIKXNUPILMWRUUJQCGCBXDYDZQKVLEOAFXQGAB");

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
    msg.setTimeStamp(0.0225795649419);
    msg.setSource(14897U);
    msg.setSourceEntity(71U);
    msg.setDestination(184U);
    msg.setDestinationEntity(123U);
    msg.duration = 801U;
    msg.custom.assign("HDHHPEFTZBJVJBYMKJEVUCJMKYRPZYSOWUAQFDDNXCNIIOENVDDLMMBXETQMCAHNWVDKPEUVRBTJESHZTTNTMMZOWBDTJWYDGFHXGFXTLWWOQURJKARDNAQWJYSHOPQHCGEPNYVSQVXSINLIQAICKGYROIAQKFUZQRILXOZULPPHUWG");

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
    msg.setTimeStamp(0.154541133545);
    msg.setSource(13897U);
    msg.setSourceEntity(200U);
    msg.setDestination(34150U);
    msg.setDestinationEntity(13U);
    msg.duration = 46850U;
    msg.custom.assign("WIYRICCDBJMEMXAUQHLBFHXJQHWKJUJCFEVOOTDZPNCCXQDYZBU");

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
    msg.setTimeStamp(0.746054319848);
    msg.setSource(6941U);
    msg.setSourceEntity(169U);
    msg.setDestination(52926U);
    msg.setDestinationEntity(101U);
    msg.duration = 41407U;
    msg.custom.assign("BSYWODYRHDBNYZZEAUAEVKCVKDBRYIEFKVKKCGXWL");

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
    msg.setTimeStamp(0.5763188075);
    msg.setSource(15003U);
    msg.setSourceEntity(93U);
    msg.setDestination(22224U);
    msg.setDestinationEntity(1U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.245813520368;
    msg.control.set(tmp_msg_0);
    msg.duration = 13681U;
    msg.custom.assign("REVICAGULMHWORQKJDNTBXSDDLKYPDVDRRFTCZGVZOSABZCIOHTXMITZJRGGFKLSZOBKKVEIYAMLPHXMYXGTVDHXNYUVXXPNDIREMGQPQOYSMJBNBYOYWDTLPBJCZGJZKABCTKZHQNLHJYAFFBWHNHFGTCAZAFPVUZWMIXPUESVWOVFIISJUWNBGAWCRQXQRUEPJSDDYQPMRKSMQNOUWOCLLOQBUCI");

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
    msg.setTimeStamp(0.04396385979);
    msg.setSource(52716U);
    msg.setSourceEntity(227U);
    msg.setDestination(31360U);
    msg.setDestinationEntity(166U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.653779250647;
    tmp_msg_0.start_lon = 0.293996867303;
    tmp_msg_0.start_z = 0.561448677183;
    tmp_msg_0.start_z_units = 82U;
    tmp_msg_0.end_lat = 0.347796845089;
    tmp_msg_0.end_lon = 0.057052495515;
    tmp_msg_0.end_z = 0.479630351305;
    tmp_msg_0.end_z_units = 122U;
    tmp_msg_0.speed = 0.52162336228;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.lradius = 0.468492045478;
    tmp_msg_0.flags = 24U;
    msg.control.set(tmp_msg_0);
    msg.duration = 24399U;
    msg.custom.assign("NFWTNGATUDVMMCQNIFUDCYMONAUESJBWBKEIHCDYRSABVKKSGGYJZKULTCHBQPIWVEANJUOYIBYZEZLNXMLRZZHJVHDQMPXAUARFEEW");

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
    msg.setTimeStamp(0.457287725482);
    msg.setSource(13815U);
    msg.setSourceEntity(42U);
    msg.setDestination(14778U);
    msg.setDestinationEntity(79U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.829814783781;
    tmp_msg_0.speed_units = 169U;
    msg.control.set(tmp_msg_0);
    msg.duration = 29361U;
    msg.custom.assign("HAGEJVLCUCKLHELVSATACIGHCCPQEKSOWDPKQBEHMFDCHPXORWQDRRSRCLCEKJJFOLUHLMDMZIKZGRJTRJBKUFZPXHMPFFIONELVBJDYBZFEUORJUYRPIGNQPSTOJMWWZSQMIAATSZSVZVGYYDNAKPCBBZNNFFCZDSGVXHRDINKVEWWYLWYIBPUYDZT");

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
    msg.setTimeStamp(0.528170486854);
    msg.setSource(28622U);
    msg.setSourceEntity(252U);
    msg.setDestination(50063U);
    msg.setDestinationEntity(227U);
    msg.timeout = 6242U;
    msg.lat = 0.319710974087;
    msg.lon = 0.210739276896;
    msg.z = 0.186596889129;
    msg.z_units = 130U;
    msg.speed = 0.298381246855;
    msg.speed_units = 207U;
    msg.bearing = 0.450386182029;
    msg.cross_angle = 0.375093617947;
    msg.width = 0.0879858186131;
    msg.length = 0.883171488247;
    msg.hstep = 0.36144217607;
    msg.coff = 216U;
    msg.alternation = 91U;
    msg.flags = 11U;
    msg.custom.assign("JFZZXIZCQVFGYHQOUDYFLRJQKWEDPMEOQQXLZAUCJFEULRXJSPTDVSHVIQQBBTUNBVAXQUVBGCXFXZVGYXPGCTZLMNKYTRDSMKOHHWIRMYJNJWHA");

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
    msg.setTimeStamp(0.0608187815787);
    msg.setSource(38646U);
    msg.setSourceEntity(211U);
    msg.setDestination(65209U);
    msg.setDestinationEntity(100U);
    msg.timeout = 14764U;
    msg.lat = 0.671543311867;
    msg.lon = 0.176703230105;
    msg.z = 0.953605534641;
    msg.z_units = 242U;
    msg.speed = 0.607389152244;
    msg.speed_units = 23U;
    msg.bearing = 0.368311524786;
    msg.cross_angle = 0.377794930165;
    msg.width = 0.705933062887;
    msg.length = 0.212221270417;
    msg.hstep = 0.2988006665;
    msg.coff = 100U;
    msg.alternation = 183U;
    msg.flags = 211U;
    msg.custom.assign("SFORPBIQKSJQLTZHJLXWBFJYCFUAVCWMTHDXHXNRALNZNMCRDEGKKURVPNZCJNKGYVMAWKGLOWIKJKICRSTGWQRXDNOIZQXATCTJPSJZNDMLVIHDIIUDYDSVDCUUJGXSFUZACBVYPINMWWUDXHFQLYGHMGTBTOYQVOSPIMJZSXADMFOWKTRZSBIVKPPKOWMORFGYRZUXYBHGLYAEEOHWCU");

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
    msg.setTimeStamp(0.475159032642);
    msg.setSource(7954U);
    msg.setSourceEntity(99U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(197U);
    msg.timeout = 54582U;
    msg.lat = 0.500637341217;
    msg.lon = 0.659835482273;
    msg.z = 0.222618573105;
    msg.z_units = 32U;
    msg.speed = 0.763608050947;
    msg.speed_units = 191U;
    msg.bearing = 0.189179933717;
    msg.cross_angle = 0.969458991288;
    msg.width = 0.996931633432;
    msg.length = 0.410571276736;
    msg.hstep = 0.396910731337;
    msg.coff = 227U;
    msg.alternation = 131U;
    msg.flags = 79U;
    msg.custom.assign("CLHBQRDPINXTHZSLEKCYHPKGWXHGGPFRCGDAKOIDENJVDOIBQZDVNKTFKUNGSNAWEPPHRYTDOQHECITPCNAXMOMZRYZGTSWKUYOXWEUYMKRGQGGXJAANTZMVYONIVHLDZKFLAJSMFCIAJRUXBAJLVDRFSCGYIIYMNOOUEDLUQWPVFBQWTYQUFJJESHOZCFZRKCRPIMXYBEPLLJMJSVSOWBWCZFQVMEBBFXHTDLUBJNKIWWXEU");

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
    msg.setTimeStamp(0.415735674512);
    msg.setSource(53268U);
    msg.setSourceEntity(226U);
    msg.setDestination(41855U);
    msg.setDestinationEntity(90U);
    msg.timeout = 51509U;
    msg.lat = 0.345578064217;
    msg.lon = 0.50679687688;
    msg.z = 3.08966033262e-05;
    msg.z_units = 64U;
    msg.speed = 0.464276008913;
    msg.speed_units = 235U;
    msg.custom.assign("HLULQYGHTZKIZGITYMBLYLCUK");

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
    msg.setTimeStamp(0.95807392496);
    msg.setSource(15863U);
    msg.setSourceEntity(215U);
    msg.setDestination(25335U);
    msg.setDestinationEntity(208U);
    msg.timeout = 43261U;
    msg.lat = 0.645642004227;
    msg.lon = 0.262477862682;
    msg.z = 0.288596556225;
    msg.z_units = 51U;
    msg.speed = 0.408459373196;
    msg.speed_units = 145U;
    msg.custom.assign("UKHNIJWWJYTUORVOBXFBGHWSPJAYTPBTVTJQRGEEDQUXLSQPGAFEOEYOWACNNEGYBLXHKNDCYBZVPIWILXHZLPOV");

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
    msg.setTimeStamp(0.727487432671);
    msg.setSource(51211U);
    msg.setSourceEntity(68U);
    msg.setDestination(21294U);
    msg.setDestinationEntity(167U);
    msg.timeout = 43467U;
    msg.lat = 0.193635949148;
    msg.lon = 0.410310274679;
    msg.z = 0.102518270879;
    msg.z_units = 215U;
    msg.speed = 0.349281090756;
    msg.speed_units = 3U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.892804233887;
    tmp_msg_0.y = 0.117415008943;
    tmp_msg_0.z = 0.51599240156;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GHSVYMJPJXTKZZIWZXLDQVNBCQEWJQVRGIHANRDORPLLPVLQOKLEFAURNHNAYSSAJOCFBDDEBLUVARXIITCSEXUPIOPZKBKYMGGPAFYYMTCZCJHKUGQJMJJLECLDHSWNKMQNFFOQMHXLCJIKUSWZJNCFBXTUYKXTGFHAFAMSXWQLYPTIWZQSFIEICWDPYSWVMOWVQZOTMSBOUDRORVIETDUAGGMNBPBZBRDXGKOWTHCARXHTVPY");

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
    msg.setTimeStamp(0.650492445559);
    msg.setSource(46638U);
    msg.setSourceEntity(248U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(205U);
    msg.x = 0.777119225227;
    msg.y = 0.746947712612;
    msg.z = 0.960659672533;

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
    msg.setTimeStamp(0.913819520969);
    msg.setSource(18348U);
    msg.setSourceEntity(18U);
    msg.setDestination(30445U);
    msg.setDestinationEntity(179U);
    msg.x = 0.965128074914;
    msg.y = 0.279792219794;
    msg.z = 0.548092372623;

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
    msg.setTimeStamp(0.102697746836);
    msg.setSource(3913U);
    msg.setSourceEntity(94U);
    msg.setDestination(7901U);
    msg.setDestinationEntity(213U);
    msg.x = 0.0529199130704;
    msg.y = 0.481547453776;
    msg.z = 0.903574792712;

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
    msg.setTimeStamp(0.654310255362);
    msg.setSource(52707U);
    msg.setSourceEntity(68U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(11U);
    msg.timeout = 20632U;
    msg.lat = 0.756043224052;
    msg.lon = 0.199675539818;
    msg.z = 0.896805616263;
    msg.z_units = 88U;
    msg.amplitude = 0.95661785849;
    msg.pitch = 0.91428779819;
    msg.speed = 0.679008194167;
    msg.speed_units = 54U;
    msg.custom.assign("MVAAVQSFNEAVYWJHRFLBPVZTDBGRMNUKTANYDNECHWMWSRLIOQPUZHZDYVNWYWDNVULODSAAUWKFRRHYKQJZIFEQXPSWKSCQBTJFLIDDGYYFUPMGYWCEDUG");

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
    msg.setTimeStamp(0.499101571904);
    msg.setSource(61531U);
    msg.setSourceEntity(142U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(225U);
    msg.timeout = 36821U;
    msg.lat = 0.586576736829;
    msg.lon = 0.0896352271935;
    msg.z = 0.00554687385928;
    msg.z_units = 246U;
    msg.amplitude = 0.207683449974;
    msg.pitch = 0.433511978616;
    msg.speed = 0.392941414091;
    msg.speed_units = 60U;
    msg.custom.assign("PNZQEEZSLEKTVQMEZORAGLGTJZVLWDNC");

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
    msg.setTimeStamp(0.231195445665);
    msg.setSource(42276U);
    msg.setSourceEntity(53U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(55U);
    msg.timeout = 38761U;
    msg.lat = 0.101008008702;
    msg.lon = 0.281305984094;
    msg.z = 0.813859795718;
    msg.z_units = 217U;
    msg.amplitude = 0.168602369786;
    msg.pitch = 0.320027685899;
    msg.speed = 0.905395621959;
    msg.speed_units = 82U;
    msg.custom.assign("NETWZNGHXSJXPRDRJUCKLVIDJKXBNNIYFZUNZTVUXWWNMVDOGBNSWHLQYNZDIETAARPYFRQQHKEDBVEVUCBCEWYRUTBCPNGFRHSOPFFXEGZORJQJRLHHSPKJXBOFEQIZEGOZKYGBTAUYTQIYZFHLFAUZJRVMMBSDOOTDMVLCPGJT");

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
    msg.setTimeStamp(0.280621926162);
    msg.setSource(29457U);
    msg.setSourceEntity(71U);
    msg.setDestination(2135U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.434960182719);
    msg.setSource(57848U);
    msg.setSourceEntity(118U);
    msg.setDestination(4176U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.619652748657);
    msg.setSource(9413U);
    msg.setSourceEntity(158U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.050432486161);
    msg.setSource(32024U);
    msg.setSourceEntity(10U);
    msg.setDestination(17840U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.752052181674;
    msg.lon = 0.398621877339;
    msg.z = 0.113166830872;
    msg.z_units = 96U;
    msg.radius = 0.797403598647;
    msg.duration = 24774U;
    msg.speed = 0.806017553024;
    msg.speed_units = 30U;
    msg.custom.assign("EXXTORMRCJAXFUTNRUEXKMHIZPSJZXLZQJSYFIVGSPFHBHKBZJTYVNVKWDKEKIPAKYCUKSKPCKTMMBOELOCBPHHPNOIOIFMTXB");

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
    msg.setTimeStamp(0.817464047802);
    msg.setSource(36081U);
    msg.setSourceEntity(175U);
    msg.setDestination(28244U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.138873337823;
    msg.lon = 0.934759035926;
    msg.z = 0.717318381103;
    msg.z_units = 103U;
    msg.radius = 0.40018175772;
    msg.duration = 24282U;
    msg.speed = 0.434652595709;
    msg.speed_units = 140U;
    msg.custom.assign("THPPBFSPYBISRHDQEJWZDALFDFMWNRDUAOGNBTUGKNCUYINKPNVFEUVAZWCXPNPXQHYDXVRVWFVLRIUEGLTHSTXODXICGBGKKAMCFIDWZGNRXVUPIXBVIGLPEECQHACQMWUH");

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
    msg.setTimeStamp(0.927368970945);
    msg.setSource(55898U);
    msg.setSourceEntity(195U);
    msg.setDestination(18111U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.0535944059139;
    msg.lon = 0.915475955458;
    msg.z = 0.839083048672;
    msg.z_units = 189U;
    msg.radius = 0.723797330998;
    msg.duration = 36813U;
    msg.speed = 0.49462780375;
    msg.speed_units = 56U;
    msg.custom.assign("ZVXOETLQXQWTKHMDMWAKCDMNYQCAQMORSLVIRDZJJGBHSDXBIQWZPPEKRIEKQFAQKVZWWIXJUELBFJWKJGTTUVKMPMWXFOFYBUNZONHSHUDKTRHUITCSZHFOXMTBLWRBFSGJLKGJGWYORNAHFSJNYVPFYLYRXLUYBPNSSGERYZNODDTVVCXAFTGKAJEXUEGBOYNYNMDEPTALZZCVWDLCHCPRVIFLNBMIAEUCUMHZOPGPAUIJOP");

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
    msg.setTimeStamp(0.266453457807);
    msg.setSource(49631U);
    msg.setSourceEntity(3U);
    msg.setDestination(43790U);
    msg.setDestinationEntity(81U);
    msg.timeout = 10568U;
    msg.flags = 33U;
    msg.lat = 0.387551561937;
    msg.lon = 0.0887335717883;
    msg.start_z = 0.815885921495;
    msg.start_z_units = 108U;
    msg.end_z = 0.877459946739;
    msg.end_z_units = 106U;
    msg.radius = 0.719537224111;
    msg.speed = 0.0528779410911;
    msg.speed_units = 100U;
    msg.custom.assign("KVUKUWKFPJDQWBTALREXDY");

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
    msg.setTimeStamp(0.406140386603);
    msg.setSource(43529U);
    msg.setSourceEntity(108U);
    msg.setDestination(31704U);
    msg.setDestinationEntity(178U);
    msg.timeout = 4671U;
    msg.flags = 239U;
    msg.lat = 0.0638476095531;
    msg.lon = 0.813865373835;
    msg.start_z = 0.338168834551;
    msg.start_z_units = 64U;
    msg.end_z = 0.801390758697;
    msg.end_z_units = 18U;
    msg.radius = 0.108467643796;
    msg.speed = 0.100426371001;
    msg.speed_units = 203U;
    msg.custom.assign("YKUFCISPWEFTWPSCHRVZLKBTAHWUJTWZHFXAWQWCPMNKHAOPQONRSOUFOBNUIYIUCNMVTACLPXSHIGGJFMSPZAJYELBGCY");

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
    msg.setTimeStamp(0.21482698257);
    msg.setSource(1326U);
    msg.setSourceEntity(68U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(119U);
    msg.timeout = 22090U;
    msg.flags = 100U;
    msg.lat = 0.0963497071815;
    msg.lon = 0.633182206331;
    msg.start_z = 0.279475044841;
    msg.start_z_units = 127U;
    msg.end_z = 0.768625506038;
    msg.end_z_units = 243U;
    msg.radius = 0.842830897605;
    msg.speed = 0.186350126019;
    msg.speed_units = 23U;
    msg.custom.assign("HSSMWWHQYTUZBEMQFUASJWDZRYNBQSXLKWHYWFEOSMLAIGCELZUQXCCIBIETNFNJRRPFHQPJPJXXPXXLCJGCYOITYIMSAIFRIPSZQLVQNFNZZY");

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
    msg.setTimeStamp(0.328391985909);
    msg.setSource(32010U);
    msg.setSourceEntity(1U);
    msg.setDestination(63619U);
    msg.setDestinationEntity(67U);
    msg.timeout = 11814U;
    msg.lat = 0.178053861146;
    msg.lon = 0.0760199961133;
    msg.z = 0.0601172350026;
    msg.z_units = 32U;
    msg.speed = 0.811569319962;
    msg.speed_units = 159U;
    msg.custom.assign("STAGDWYMJJZMMKOXYOXPXMCUMTBQXONSMNIQYSKHDPBJTAJAFNFJHUCEJFCXLRVQIY");

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
    msg.setTimeStamp(0.423080080477);
    msg.setSource(4705U);
    msg.setSourceEntity(54U);
    msg.setDestination(34062U);
    msg.setDestinationEntity(133U);
    msg.timeout = 63834U;
    msg.lat = 0.88892047359;
    msg.lon = 0.153917977023;
    msg.z = 0.423022685058;
    msg.z_units = 201U;
    msg.speed = 0.908897387437;
    msg.speed_units = 36U;
    msg.custom.assign("JCXAIAVPLMFHMUCSUOABLJPDRFUZJGRTTRKNXYGCCKVLASJJYOKZTKLDVKNCFQPNNZTFESIMZRZIUOMEPJOJQDDKUXWENOFAYYNCVEMFMLORVJGNSPPSGLREXYSMTXQMDKHXPVSBNFWSWCYHRHDNGWQOLUIQWWZCZHRZR");

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
    msg.setTimeStamp(0.377816626369);
    msg.setSource(23394U);
    msg.setSourceEntity(106U);
    msg.setDestination(13401U);
    msg.setDestinationEntity(238U);
    msg.timeout = 41958U;
    msg.lat = 0.784402915784;
    msg.lon = 0.149763876396;
    msg.z = 0.0811258138913;
    msg.z_units = 23U;
    msg.speed = 0.735159252594;
    msg.speed_units = 80U;
    msg.custom.assign("ZQQUSTQGDFKHCZDPBRNBGZNRVISOIENFTBAKJJQCEJKUDGQGYOCTWMQDEYXPKOAVCSTOJFWRSLBUDUCOCXWAAVYLPSJXAERNNUQVSQXUVRVKWUCTJIPAOIWHMSNM");

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
    msg.setTimeStamp(0.948929160441);
    msg.setSource(22074U);
    msg.setSourceEntity(13U);
    msg.setDestination(1513U);
    msg.setDestinationEntity(47U);
    msg.x = 0.144289675393;
    msg.y = 0.525364089506;
    msg.z = 0.361545760339;
    msg.t = 0.887226692623;

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
    msg.setTimeStamp(0.12526527238);
    msg.setSource(39134U);
    msg.setSourceEntity(80U);
    msg.setDestination(38873U);
    msg.setDestinationEntity(23U);
    msg.x = 0.803852215993;
    msg.y = 0.0888645281491;
    msg.z = 0.543960644735;
    msg.t = 0.342776347696;

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
    msg.setTimeStamp(0.59273811615);
    msg.setSource(53041U);
    msg.setSourceEntity(141U);
    msg.setDestination(23312U);
    msg.setDestinationEntity(214U);
    msg.x = 0.971291688814;
    msg.y = 0.45295208749;
    msg.z = 0.527458856138;
    msg.t = 0.768719729289;

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
    msg.setTimeStamp(0.0140265979156);
    msg.setSource(15474U);
    msg.setSourceEntity(106U);
    msg.setDestination(60438U);
    msg.setDestinationEntity(28U);
    msg.timeout = 61495U;
    msg.name.assign("WUKSMLBFPFEPJLTQAGHJXBXDFOEVHXASRUILQSYHWXPDEWEUCUGBMOLHVFGRESSFPHBICVFPQAUTGIUWNDATNOMYDNULEODNJCKOMVPTPVRSERRCGXILTOCMKJZYEVMHQAFRFJHQWJCIWQUZLDRPYFDXTHWMGBUFVYW");
    msg.custom.assign("EQFXNWALPNPPZKVMMBAOGDPGLBKMCBFUKEHTYKXIUJSZZWMRQQZYITGKTUQLKOJURCAENCHGJLJLCVECJIATFRQIBCRVUYOCHNDXXVJKRVIWSTQYDZFAYWAYWLNMBMKIHWTHKUBSPHQFAZHGEXZASSMWYBSXSTLFNNDREDWDIMYOROCMTZZXGLODALNLCJIQSUXFIDG");

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
    msg.setTimeStamp(0.428438587488);
    msg.setSource(12187U);
    msg.setSourceEntity(131U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(57U);
    msg.timeout = 40624U;
    msg.name.assign("LVFJLWKCMWVDQVAFGTKJYNRHFSMWWUACOPBHEZWJTFUKJWZTAUOVJYRHTXYNPSFDACZDLMRXYTCZMICEUMWXCGREIVTLRKDINITUHMVYFJNZOJKFNQHBCXZYHVLPIISKDECNKALPFKIQXYFUMPEEPLIUZXBXSUBBXVGLOOMISABWAT");
    msg.custom.assign("EDWVNUUQYAQDLFHHHYURYJNETDHSIAYLPAIUOQWUFTKWKTBJLSAKSVHZXHU");

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
    msg.setTimeStamp(0.589927830497);
    msg.setSource(59014U);
    msg.setSourceEntity(103U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(62U);
    msg.timeout = 47744U;
    msg.name.assign("HQUEGRACDRHIFMFNKHTIAEOAMNKBTYKELRXSJQBRICLDIHQHMMZMJDYVGBCSVWOXPVLLZDAVNIAGXYOGTSJZOPFYSSVEUQNUOAILXOMMPVHIHAOXZBWJGEWBSHBGXZQDZMKRVOM");
    msg.custom.assign("OEMHDODIXZEGIEMKUEKWAVNJIPYAEZJSYUCSVLFYSZYTAPRDRYAARPQSCKJJOOUDRPKUPZVBMHQLCDQQNBNRCPVXNPMHIYIXQXKXWQBCCRJGDBPTBNZX");

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
    msg.setTimeStamp(0.798620871951);
    msg.setSource(56336U);
    msg.setSourceEntity(217U);
    msg.setDestination(38770U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.495965248643;
    msg.lon = 0.204563025178;
    msg.z = 0.257757141358;
    msg.z_units = 137U;
    msg.speed = 0.932704375926;
    msg.speed_units = 36U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.388873812511;
    tmp_msg_0.y = 0.481309629225;
    tmp_msg_0.z = 0.476644582787;
    tmp_msg_0.t = 0.991511234683;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 22457U;
    tmp_msg_1.off_x = 0.449262518875;
    tmp_msg_1.off_y = 0.91147708196;
    tmp_msg_1.off_z = 0.821082643947;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.00343485534561;
    msg.custom.assign("HEETTAOHWPQVIKUMJUFGPLWIKZCZAACNVWLZFMNAYEJBBRQOXHTNYFWVINQHZWMCXBKXDPOIPFQYUHQXUHTZEGQFAMONIIMFYSJAMCKSVZUSEYURWHTPJGPDASIXTYWORIXYJGLITMGSJBPRRXDBDGJSVSENDRKQOEKULJUYOZSJGZYPDRSTFVVAMQTCCDLELXVWCKAVNEDHBSGPDOLNNAFMGBXWCTLILKHNUWRJORBBKYPMC");

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
    msg.setTimeStamp(0.652753370071);
    msg.setSource(27070U);
    msg.setSourceEntity(183U);
    msg.setDestination(31752U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.390961977852;
    msg.lon = 0.44851414552;
    msg.z = 0.232534265946;
    msg.z_units = 181U;
    msg.speed = 0.582283872818;
    msg.speed_units = 229U;
    msg.start_time = 0.192179178036;
    msg.custom.assign("UOAGXRAHBLJOTHVVQPHJYFUHQCHXPTYDJOXDMIIEKKIAGIKRFEJCGHGFDHYOO");

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
    msg.setTimeStamp(0.462881966696);
    msg.setSource(34455U);
    msg.setSourceEntity(116U);
    msg.setDestination(33261U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.772213110844;
    msg.lon = 0.260532779114;
    msg.z = 0.884445124013;
    msg.z_units = 248U;
    msg.speed = 0.0667594250843;
    msg.speed_units = 67U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58379U;
    tmp_msg_0.off_x = 0.28028010175;
    tmp_msg_0.off_y = 0.153388664576;
    tmp_msg_0.off_z = 0.653946766882;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.610698757377;
    msg.custom.assign("IVZNFKFDEYNEYZBTXCSL");

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
    msg.setTimeStamp(0.993975216936);
    msg.setSource(32999U);
    msg.setSourceEntity(129U);
    msg.setDestination(47673U);
    msg.setDestinationEntity(98U);
    msg.vid = 56850U;
    msg.off_x = 0.949081315713;
    msg.off_y = 0.977612162221;
    msg.off_z = 0.157596162976;

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
    msg.setTimeStamp(0.0762198217866);
    msg.setSource(61125U);
    msg.setSourceEntity(161U);
    msg.setDestination(57960U);
    msg.setDestinationEntity(13U);
    msg.vid = 48835U;
    msg.off_x = 0.0584836333361;
    msg.off_y = 0.711210568932;
    msg.off_z = 0.0861377035629;

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
    msg.setTimeStamp(0.0861759678);
    msg.setSource(20202U);
    msg.setSourceEntity(249U);
    msg.setDestination(40109U);
    msg.setDestinationEntity(134U);
    msg.vid = 19128U;
    msg.off_x = 0.739336838344;
    msg.off_y = 0.670166320074;
    msg.off_z = 0.892210233308;

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
    msg.setTimeStamp(0.731165699996);
    msg.setSource(7892U);
    msg.setSourceEntity(142U);
    msg.setDestination(46339U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.950266666656);
    msg.setSource(3565U);
    msg.setSourceEntity(176U);
    msg.setDestination(2234U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.544454627561);
    msg.setSource(9869U);
    msg.setSourceEntity(245U);
    msg.setDestination(31554U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.921496015661);
    msg.setSource(24671U);
    msg.setSourceEntity(11U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(206U);
    msg.mid = 64731U;

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
    msg.setTimeStamp(0.167714631245);
    msg.setSource(64422U);
    msg.setSourceEntity(0U);
    msg.setDestination(60534U);
    msg.setDestinationEntity(90U);
    msg.mid = 62836U;

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
    msg.setTimeStamp(0.595782212708);
    msg.setSource(5826U);
    msg.setSourceEntity(89U);
    msg.setDestination(60184U);
    msg.setDestinationEntity(145U);
    msg.mid = 38927U;

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
    msg.setTimeStamp(0.0524638775111);
    msg.setSource(55976U);
    msg.setSourceEntity(166U);
    msg.setDestination(54007U);
    msg.setDestinationEntity(236U);
    msg.state = 254U;
    msg.eta = 23042U;
    msg.info.assign("EYJFPFNVTAMSZPCXISUQRWIDZXQPKEYWHJVOHSMKLCIFKDFALJUSFNDQXZGHGECTTGPPVCUEGEXBRZYGQKCSYIFUWICBCPFNOBNNMTAUHAUGQCJLMZJMQ");

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
    msg.setTimeStamp(0.154168392049);
    msg.setSource(30801U);
    msg.setSourceEntity(50U);
    msg.setDestination(31251U);
    msg.setDestinationEntity(100U);
    msg.state = 140U;
    msg.eta = 52759U;
    msg.info.assign("AERJPYZHGJRAYGMNLNZMUQZIUVZLLUVNAVBKFKBOREDERUYWLUKFRFDBXWSCXJFPSCJFZTHGQDFGPLOOTECCDC");

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
    msg.setTimeStamp(0.531047721503);
    msg.setSource(24073U);
    msg.setSourceEntity(76U);
    msg.setDestination(60217U);
    msg.setDestinationEntity(76U);
    msg.state = 179U;
    msg.eta = 20866U;
    msg.info.assign("MSGGAEKLHMGWHAPXULXBBDUBPEPXWAJ");

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
    msg.setTimeStamp(0.548013723313);
    msg.setSource(47790U);
    msg.setSourceEntity(113U);
    msg.setDestination(61740U);
    msg.setDestinationEntity(15U);
    msg.system = 7685U;
    msg.duration = 53903U;
    msg.speed = 0.429476309871;
    msg.speed_units = 58U;
    msg.x = 0.77202171821;
    msg.y = 0.735445864214;
    msg.z = 0.496150977827;
    msg.z_units = 6U;

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
    msg.setTimeStamp(0.876478156541);
    msg.setSource(50763U);
    msg.setSourceEntity(117U);
    msg.setDestination(24388U);
    msg.setDestinationEntity(167U);
    msg.system = 19540U;
    msg.duration = 45591U;
    msg.speed = 0.584177277892;
    msg.speed_units = 46U;
    msg.x = 0.278060634875;
    msg.y = 0.29368793025;
    msg.z = 0.283162054543;
    msg.z_units = 54U;

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
    msg.setTimeStamp(0.230605184868);
    msg.setSource(11746U);
    msg.setSourceEntity(246U);
    msg.setDestination(39815U);
    msg.setDestinationEntity(199U);
    msg.system = 62213U;
    msg.duration = 19399U;
    msg.speed = 0.364966764854;
    msg.speed_units = 228U;
    msg.x = 0.710468078228;
    msg.y = 0.444080300583;
    msg.z = 0.139395073996;
    msg.z_units = 166U;

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
    msg.setTimeStamp(0.859182715955);
    msg.setSource(27651U);
    msg.setSourceEntity(232U);
    msg.setDestination(38494U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.945697395351;
    msg.lon = 0.671801687506;
    msg.speed = 0.452184318533;
    msg.speed_units = 98U;
    msg.duration = 50561U;
    msg.sys_a = 15938U;
    msg.sys_b = 62998U;
    msg.move_threshold = 0.245085935554;

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
    msg.setTimeStamp(0.567002876828);
    msg.setSource(53505U);
    msg.setSourceEntity(5U);
    msg.setDestination(60622U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.141156408356;
    msg.lon = 0.286946709094;
    msg.speed = 0.782107162387;
    msg.speed_units = 213U;
    msg.duration = 37449U;
    msg.sys_a = 41621U;
    msg.sys_b = 4685U;
    msg.move_threshold = 0.941981322213;

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
    msg.setTimeStamp(0.312815944906);
    msg.setSource(10997U);
    msg.setSourceEntity(180U);
    msg.setDestination(45186U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.962101217611;
    msg.lon = 0.726048998153;
    msg.speed = 0.145462388106;
    msg.speed_units = 223U;
    msg.duration = 42423U;
    msg.sys_a = 27723U;
    msg.sys_b = 5549U;
    msg.move_threshold = 0.0244445520967;

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
    msg.setTimeStamp(0.31186092334);
    msg.setSource(20540U);
    msg.setSourceEntity(46U);
    msg.setDestination(64167U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.858716355224;
    msg.lon = 0.296728436352;
    msg.z = 0.285593761646;
    msg.z_units = 106U;
    msg.speed = 0.166532805016;
    msg.speed_units = 53U;
    msg.custom.assign("VJAXYWKXXYMBESRPGALPQPJUZVQKFHHMNMCIIQLAEXAOUJOGRQFCDMUJTDYDXVWIMZQLAQRNBEOXRXTLKHISOKSEWZTUNQCZQUVIUGSCKZYJCEVNEPZWQXAUBSBDTFWJZOTGBODMCBMRKPDENSNYLGWQUVTXHMYICFKFDTTILGDHJP");

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
    msg.setTimeStamp(0.658198907828);
    msg.setSource(51871U);
    msg.setSourceEntity(166U);
    msg.setDestination(3750U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.906413621914;
    msg.lon = 0.158179451801;
    msg.z = 0.75612881604;
    msg.z_units = 101U;
    msg.speed = 0.555435154354;
    msg.speed_units = 84U;
    msg.custom.assign("NJTYOJNTCSCEGJZDJKPKKDHQ");

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
    msg.setTimeStamp(0.0405350628257);
    msg.setSource(36813U);
    msg.setSourceEntity(98U);
    msg.setDestination(60363U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.0763460820977;
    msg.lon = 0.0535580356276;
    msg.z = 0.122931887563;
    msg.z_units = 33U;
    msg.speed = 0.0421535187313;
    msg.speed_units = 93U;
    msg.custom.assign("GSTQNVRHUWBTQNLLXXYCIDGXHMRPENUEZEBMSIGCDVLDJEEKKUXNJONDYIUZYZIWGKTZSHUAGRFUMSFOETAHXZQBIKPMDOWGZIVGVYIHVQPWMFQXSFJHAUSLTFSCBSPWXMJOWYAUDFCQDEXSNXXYFAYPRAH");

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
    msg.setTimeStamp(0.76542708529);
    msg.setSource(20400U);
    msg.setSourceEntity(166U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.727520922002;
    msg.lon = 0.872642759365;

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
    msg.setTimeStamp(0.355051702978);
    msg.setSource(31963U);
    msg.setSourceEntity(202U);
    msg.setDestination(40202U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.456896492718;
    msg.lon = 0.884828081352;

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
    msg.setTimeStamp(0.381026036662);
    msg.setSource(17375U);
    msg.setSourceEntity(61U);
    msg.setDestination(41727U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.011644202459;
    msg.lon = 0.741421000551;

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
    msg.setTimeStamp(0.21959527034);
    msg.setSource(49919U);
    msg.setSourceEntity(14U);
    msg.setDestination(47763U);
    msg.setDestinationEntity(60U);
    msg.timeout = 32850U;
    msg.lat = 0.46871705288;
    msg.lon = 0.744096720629;
    msg.z = 0.978053298905;
    msg.z_units = 178U;
    msg.pitch = 0.150346593642;
    msg.amplitude = 0.905751658674;
    msg.duration = 58108U;
    msg.speed = 0.00405955294531;
    msg.speed_units = 181U;
    msg.radius = 0.5034576762;
    msg.direction = 13U;
    msg.custom.assign("TGSHAYMRHBEJREBXSQRXRTOYBVFWTCLRGLAVPQFSIJZNWSSEOTZMPXWCQLCKXPONXODYBEFUOAEWFWLRHNXJKTUIUEFTFAEQVPVIMPGDCNTARJXSDYZAYBVWL");

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
    msg.setTimeStamp(0.582729472989);
    msg.setSource(29915U);
    msg.setSourceEntity(138U);
    msg.setDestination(17858U);
    msg.setDestinationEntity(4U);
    msg.timeout = 4596U;
    msg.lat = 0.326299637815;
    msg.lon = 0.0997339708399;
    msg.z = 0.601510942692;
    msg.z_units = 149U;
    msg.pitch = 0.224954734083;
    msg.amplitude = 0.366493855582;
    msg.duration = 46564U;
    msg.speed = 0.430408037275;
    msg.speed_units = 111U;
    msg.radius = 0.0322730590765;
    msg.direction = 122U;
    msg.custom.assign("FIIVRNYNNPWUETMTFTBOIXOSCUPETBGAMKDFUVXJYHFMTJDBJHFD");

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
    msg.setTimeStamp(0.0656276399052);
    msg.setSource(18682U);
    msg.setSourceEntity(157U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(17U);
    msg.timeout = 39678U;
    msg.lat = 0.259314955099;
    msg.lon = 0.429377972443;
    msg.z = 0.172640764363;
    msg.z_units = 108U;
    msg.pitch = 0.196252212507;
    msg.amplitude = 0.371261039262;
    msg.duration = 4762U;
    msg.speed = 0.191090198723;
    msg.speed_units = 156U;
    msg.radius = 0.218786184816;
    msg.direction = 101U;
    msg.custom.assign("HDIXCKCOCOCRHTMLAOVDESRDWZVXBJEBZNDRWUKJFCLKTJRJGZIFBCI");

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
    msg.setTimeStamp(0.20377932303);
    msg.setSource(20974U);
    msg.setSourceEntity(89U);
    msg.setDestination(57240U);
    msg.setDestinationEntity(220U);
    msg.formation_name.assign("SLGARSIQPWUCSQAETQIKSGLETIMLMFYMNVHNWVXKVFCRWRYKUFYPOVWFCQUMDJMSLSGHVEDVDWGXLROBJFVPRBPJNTFBTYFAMQCHATAQZXGGWEIZJPHUPEZBORRJIHSBXYNWJASYLOGOTNMCWQAIULRJHXDZLTUXGDUANTZBDQYNAZMYYXH");
    msg.reference_frame = 126U;
    msg.custom.assign("TBCXROZPUHSEACFZTNAYWMRZIVEJYFTQXIPOIVBATJRFVOZGNMOMPIGGVXDIOVKCDTCEQHIFEYGYQNYDLUQSXKBQZOBCTBFPUYOXTMHIHUEMJLXGHWONJLRAAFJEDVRZGUPBXYZMFSMYMRESBKBZPXTKIGDWISTHALPUBVHOEILFRKJVOSPDARULWNHPXKWGKPNZKSRCDCUSDUAKJEWZBFWLUAWJWDHWVSCSGMJQFQYCTMKVLHNL");

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
    msg.setTimeStamp(0.171520857035);
    msg.setSource(40504U);
    msg.setSourceEntity(108U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(47U);
    msg.formation_name.assign("IKGRNMROSKLGQYEMAHNCTGFJHYGZOZWSPYZXRZDUZODHDJQFTFUCOIUTMYFDXDYQQWPEIZDUXPEPAVXGVQJBPMSGVCGFUUDEBSASYHZLRAFRIZZABWBYYNGBVLAAVSIBVWMABCSNXCPRYROUQTMMCXSLHKAVELWHKFLGSCTXQEQJEPLXOWKNIVJUWMBTOBVKNIPJJKWIDKHHJCKWLEGASFORRLN");
    msg.reference_frame = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52623U;
    tmp_msg_0.off_x = 0.643410537073;
    tmp_msg_0.off_y = 0.836358890845;
    tmp_msg_0.off_z = 0.232913599151;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NXILMCMIRPAENJURVCWAYFWDHJZHDNBOWTLQGTKLKOASPTEFDPLEGONACJEHIJPGIWZXT");

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
    msg.setTimeStamp(0.514290489319);
    msg.setSource(62837U);
    msg.setSourceEntity(68U);
    msg.setDestination(12885U);
    msg.setDestinationEntity(219U);
    msg.formation_name.assign("DHHRQKDXHEADQUWSXWETKZPADWIVTNLFHBZVSROHESDUTFPWVSUMKXLIJJTWCMAVYRQZPCUGFNBIRCEABSQIJDJBXAPCGYQSNMJXMEOWMAOXQYUJLKKHYIOHSESGFUEAXAXDZMFVVBGBLOQJIOJFRINRVZULPFJESSRLTRAGANEQ");
    msg.reference_frame = 236U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56926U;
    tmp_msg_0.off_x = 0.352080625239;
    tmp_msg_0.off_y = 0.629000690684;
    tmp_msg_0.off_z = 0.477636748825;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NTVMZMARKRSIOQYARUVHVWP");

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
    msg.setTimeStamp(0.210802907282);
    msg.setSource(60088U);
    msg.setSourceEntity(97U);
    msg.setDestination(15225U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("AIZYCYSIQQKEQGHLQYPJNTKEXZGGHCLYDFIPRTINCUIOTLDCLEDGZBQWVMWYHOAESYTLPBEHDATFFWZBKJPGHYJFXEWSRFESWPXBFO");
    msg.formation_name.assign("BTVLUNMORWAEBPVUCKSNTEHXMFGWEWDAZ");
    msg.plan_id.assign("FUHMUPEWEFXJCGLSBWSLWZTJELGLGRYZJKNSXYNKQHPQKOVKPYVHBCXCDBQKJTUDETDZJQBOMVW");
    msg.description.assign("PDFXVARQKPIUZEYDTZPVVOBSCFZCPPJNLUWNDVSXAAYDJNYEQKCGBUIFNQGHKJHBPGPIWXH");
    msg.leader_speed = 0.585845475853;
    msg.leader_bank_lim = 0.161816680107;
    msg.pos_sim_err_lim = 0.883296268143;
    msg.pos_sim_err_wrn = 0.226827365696;
    msg.pos_sim_err_timeout = 36883U;
    msg.converg_max = 0.328996612175;
    msg.converg_timeout = 18538U;
    msg.comms_timeout = 9058U;
    msg.turb_lim = 0.253587712464;
    msg.custom.assign("BRLUANFNKAGQWXGMEVJGRHPMGLBBMZZFNBCZIYSPUUMDRLDWZHSQPNJWETICQKIKRESQRMBYWNROIFRQECBXPSAQXUOOJSQPXMJPGUVPEFAIWIVADMCDSGEDDYEKRFMOHNTYJMPUHQYSUUEKVIGTLZOCZGTTLZGLKWUDNYJVSJRHFONBTQYBFXXRWOTFBX");

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
    msg.setTimeStamp(0.868602616116);
    msg.setSource(51112U);
    msg.setSourceEntity(247U);
    msg.setDestination(60659U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("QYRLFDFQYGFQYNHMVZOZWKKPPEHTWBGBWCVJDRZUEFSEXAEXAYLVTPIBDOEXJVGFBKUMWUDPTBRCYGA");
    msg.formation_name.assign("YZMLFLSHWXEFQLNNXRENNJWLUGLXGIAVUSIZHDFATSDJYSBPLBWWVAWMGSRDZETLSXIAPBHKPDBGMFSMKZOELGXSOCHXZVFOOJORAWGKUTRWMRBJNVTYCUFJSCCXBPTFHPIOWTLMGVPEECEZZHWKCBUIIUDXZP");
    msg.plan_id.assign("QRKJGXWFJKHGZLLDYXLESPQQYZQHCNNMBWTEMEJCMITMRIPYXZWDDYXBUARIKFUXGAUNOJJIXSCJCEQBOTNBYMPCDOBPUKDGXYXWOQWVEIAXCRGCFSWHKIVFOV");
    msg.description.assign("JZTHXDIOSTQIKGEMVIPPCAYERZRXRWUJVDZDPZGSBDVBJRFZLXZOCNBDAGNLWAUDUBUOHMEGTFAXHIMYJLMYXKBYXBPHZHQPFFPUKQCSKWHDBSMDMVGEHLTFEVYCWTKFGIAQXIFQFEVCPQTJZVCOLNROVPRRYTJNSQVBPWNREKIINMNFSJUUGSCWQGSBLHKKWOHYUMCIKAERNMJQPMOUOTZXWFLOLLTAHDWVXBRZDCGUEKYW");
    msg.leader_speed = 0.16749413083;
    msg.leader_bank_lim = 0.55891857359;
    msg.pos_sim_err_lim = 0.172019026593;
    msg.pos_sim_err_wrn = 0.834984307605;
    msg.pos_sim_err_timeout = 17482U;
    msg.converg_max = 0.00794962018464;
    msg.converg_timeout = 4630U;
    msg.comms_timeout = 51455U;
    msg.turb_lim = 0.434072946649;
    msg.custom.assign("CVYAGNSBGCIKFQCYFDARKLDNOTNUUZAKRMQMWVVXWAIFLPUDCZXYLVTXIBZMO");

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
    msg.setTimeStamp(0.227790028531);
    msg.setSource(23790U);
    msg.setSourceEntity(173U);
    msg.setDestination(24891U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("RJIYYHTUDBSXIYGNNCAFWJYENVUTYDEZEZOLILAGHIJCQWGKZHJOFNMDKKKFOSABIVBPLQWMPSYUGIDNIEVBP");
    msg.formation_name.assign("PYDVKJYOWRCKLUYMRFXUHWELNBAMALGSYQOJLOYXMFHKPFKLXAHRIBSBTMJYFVGDYTSZJQSQZOALOCNHAXUWXFARJEPCQEFBGROATXSNIVRMKLDIJQGXKCYPS");
    msg.plan_id.assign("VTLBUDMVDEBBGUKYUQNPKHHAFNYZOPWFLAPIPNRQMXHPSUOOHOZXRWWQMOIHFKEISMNMDXGDBCQRBNURPDJKRZSXRACQEXAZCGVDRXBGVNKQBRNPUMKZMMESTLNZFFDVOUEWZOSQWVGHULXKLWECWFTIIRZDXYGVWYSCJYTVYCYJEAEL");
    msg.description.assign("AFRXLZHKISKCVYHLYHVIPUNZEAHTCNZWNY");
    msg.leader_speed = 0.765964373542;
    msg.leader_bank_lim = 0.910309462693;
    msg.pos_sim_err_lim = 0.344763873976;
    msg.pos_sim_err_wrn = 0.241919729985;
    msg.pos_sim_err_timeout = 51676U;
    msg.converg_max = 0.420975444248;
    msg.converg_timeout = 7595U;
    msg.comms_timeout = 34471U;
    msg.turb_lim = 0.707117995527;
    msg.custom.assign("VMEQRTYDGXGMJAXJMQLKECPDOKOBGWSZHQACVIFXDAKUEOCUISOBBMOCZNPWHJAQPVADEVRNOXJGKTDASFNIZZIQYVYSCKWBQZHTMHRSGVUVEDJPTNWXYRFCPOORESQZIIHGBXMLXSFKAVHJNKPKKGLUDTBZNWBRTIUYHOBIWXCAFCYUPLXMKW");

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
    msg.setTimeStamp(0.966369866861);
    msg.setSource(18988U);
    msg.setSourceEntity(56U);
    msg.setDestination(56340U);
    msg.setDestinationEntity(104U);
    msg.control_src = 1917U;
    msg.control_ent = 29U;
    msg.timeout = 0.964164286799;
    msg.loiter_radius = 0.945177231501;
    msg.altitude_interval = 0.244072339678;

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
    msg.setTimeStamp(0.27874776534);
    msg.setSource(19665U);
    msg.setSourceEntity(157U);
    msg.setDestination(41067U);
    msg.setDestinationEntity(151U);
    msg.control_src = 49391U;
    msg.control_ent = 69U;
    msg.timeout = 0.828013778289;
    msg.loiter_radius = 0.804541087998;
    msg.altitude_interval = 0.13868504704;

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
    msg.setTimeStamp(0.911436185266);
    msg.setSource(56773U);
    msg.setSourceEntity(152U);
    msg.setDestination(5148U);
    msg.setDestinationEntity(4U);
    msg.control_src = 19011U;
    msg.control_ent = 77U;
    msg.timeout = 0.801932119634;
    msg.loiter_radius = 0.155078002958;
    msg.altitude_interval = 0.620395702736;

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
    msg.setTimeStamp(0.0218871437348);
    msg.setSource(11954U);
    msg.setSourceEntity(235U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(249U);
    msg.flags = 2U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.741627445112;
    tmp_msg_0.speed_units = 61U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.878764939585;
    tmp_msg_1.z_units = 119U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.126134152616;
    msg.lon = 0.0184125425118;
    msg.radius = 0.804363416299;

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
    msg.setTimeStamp(0.382153341714);
    msg.setSource(15644U);
    msg.setSourceEntity(100U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(112U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.965019935779;
    tmp_msg_0.speed_units = 58U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0674286906421;
    tmp_msg_1.z_units = 99U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.766635538328;
    msg.lon = 0.102694708069;
    msg.radius = 0.509366309933;

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
    msg.setTimeStamp(0.368947067039);
    msg.setSource(2070U);
    msg.setSourceEntity(198U);
    msg.setDestination(9127U);
    msg.setDestinationEntity(57U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.298469642272;
    tmp_msg_0.speed_units = 50U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.264500216762;
    tmp_msg_1.z_units = 204U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.944627615228;
    msg.lon = 0.991026519101;
    msg.radius = 0.744878644493;

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
    msg.setTimeStamp(0.773103541629);
    msg.setSource(16604U);
    msg.setSourceEntity(137U);
    msg.setDestination(62000U);
    msg.setDestinationEntity(118U);
    msg.control_src = 42301U;
    msg.control_ent = 26U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 176U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.297698611739;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.905532249088;
    tmp_tmp_msg_0_1.z_units = 228U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0158256062432;
    tmp_msg_0.lon = 0.455916877804;
    tmp_msg_0.radius = 0.559756804276;
    msg.reference.set(tmp_msg_0);
    msg.state = 4U;
    msg.proximity = 213U;

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
    msg.setTimeStamp(0.679417549804);
    msg.setSource(31321U);
    msg.setSourceEntity(226U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(23U);
    msg.control_src = 1895U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 98U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.818309275617;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.593341759712;
    tmp_tmp_msg_0_1.z_units = 146U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.33553240979;
    tmp_msg_0.lon = 0.444363377373;
    tmp_msg_0.radius = 0.944256087527;
    msg.reference.set(tmp_msg_0);
    msg.state = 73U;
    msg.proximity = 6U;

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
    msg.setTimeStamp(0.355860910347);
    msg.setSource(38791U);
    msg.setSourceEntity(11U);
    msg.setDestination(22914U);
    msg.setDestinationEntity(52U);
    msg.control_src = 27671U;
    msg.control_ent = 6U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.064094340697;
    tmp_tmp_msg_0_0.speed_units = 192U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.408844675108;
    tmp_tmp_msg_0_1.z_units = 75U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.813050877704;
    tmp_msg_0.lon = 0.934302694469;
    tmp_msg_0.radius = 0.546420170271;
    msg.reference.set(tmp_msg_0);
    msg.state = 52U;
    msg.proximity = 43U;

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
    msg.setTimeStamp(0.750763758769);
    msg.setSource(47312U);
    msg.setSourceEntity(122U);
    msg.setDestination(7241U);
    msg.setDestinationEntity(153U);
    msg.op_mode = 179U;
    msg.error_count = 160U;
    msg.error_ents.assign("YIOEDSWVTHQXASMIJVMJFGFZGKGFZQEOUMICUDVGSNAATESYQPVRLEYIODFVZUBMOQFJLYXUUDJSVKYCNWKTQKEBNCXRXRWNFPPXPNDYJRNCLUBQHACHDXGCAZXQWBCRPTQTACPHLZWKROGAHFHJPUWGCWOLGHVHYCJUJMSLMYIKZELNDVZKBTKXAWFFWRMSYHBMQAIB");
    msg.maneuver_type = 17461U;
    msg.maneuver_stime = 0.182137530738;
    msg.maneuver_eta = 53273U;
    msg.control_loops = 3645952003U;
    msg.flags = 36U;
    msg.last_error.assign("DPBDFGKPSUKFDIRPWEVYCYBNRBZKGOFZDYFMTYXKEGEXVRINASWMVUTWJPMUOLCWHWOTVZSOXHQUIEVZDGSUFVJNCMTXPHTBSGGURNRNCDUGOUZMELKHYOCJTDIOLFJCEXOZSPWMIMAMQQLSYEQYI");
    msg.last_error_time = 0.255015443944;

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
    msg.setTimeStamp(0.68032979247);
    msg.setSource(56972U);
    msg.setSourceEntity(146U);
    msg.setDestination(29027U);
    msg.setDestinationEntity(73U);
    msg.op_mode = 194U;
    msg.error_count = 41U;
    msg.error_ents.assign("IEUFWCCSWEWTHHDEFDFWDNRIXDODJPPYPBYQOKUOCIRDVQSCHMGAGNXQAYEKERLWZXBHMDBAZJZTZNVLKFSKHTFGROJYBWFHKINMVFGPLSNJMPIEUPJTQOSZOFHKEUKVRNLBPGVTIESAXVOQIRHQJQZPSOUZJAKYNULCISWGXTVJKTDRCCWAYLAYUCZXUPXRMMYLAGEMWMJIXYFBMSURBVNANQQAQJCRLBOBHSXODTVMLDCGGIKU");
    msg.maneuver_type = 37968U;
    msg.maneuver_stime = 0.519039012309;
    msg.maneuver_eta = 38825U;
    msg.control_loops = 1112593388U;
    msg.flags = 76U;
    msg.last_error.assign("GGUBSOERNBXICXVMIYJMLIOERTVYINQGRBZSHTQMJDTY");
    msg.last_error_time = 0.17325932024;

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
    msg.setTimeStamp(0.55056983628);
    msg.setSource(14046U);
    msg.setSourceEntity(177U);
    msg.setDestination(12955U);
    msg.setDestinationEntity(179U);
    msg.op_mode = 78U;
    msg.error_count = 243U;
    msg.error_ents.assign("VFWKMXMLWFKHLPZGTCATLJJTQNGPETGBRSNPXIKKISCBHAEJIFRCPYLOBKMZYUGTZNADTBDXOMVGHUTWUSBDZMJSCIINZUMHAPBZXRFCVRNGEHZHHOWCFRDFROLXMGXUNYLMFSZARDEJVIQYYAQCVUJLAQXQBDJLHOMAWQZENOVSKOUPYYYJUKODUBIVRWXOLRJSFVIQ");
    msg.maneuver_type = 49415U;
    msg.maneuver_stime = 0.827976747348;
    msg.maneuver_eta = 22164U;
    msg.control_loops = 2670926891U;
    msg.flags = 98U;
    msg.last_error.assign("YOOXMMWBIGEJQANSGWMQJHLRJMYHDKXBTELVIKZWEXTVZPTDIVYFPUCPJOWRVKMJKKVOBUSRRTGZNOMCEHFBLAHSUBHUODCGX");
    msg.last_error_time = 0.125074202771;

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
    msg.setTimeStamp(0.596255956407);
    msg.setSource(13332U);
    msg.setSourceEntity(115U);
    msg.setDestination(17980U);
    msg.setDestinationEntity(12U);
    msg.type = 231U;
    msg.request_id = 51474U;
    msg.command = 36U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.916208799266;
    tmp_msg_0.lon = 0.980077938007;
    tmp_msg_0.z = 0.571991253804;
    tmp_msg_0.z_units = 11U;
    tmp_msg_0.speed = 0.0664370532734;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.custom.assign("BZQGZQWKVCJOJLSOKGYNBIFYAHHNURTSLGEQUXYXGFGKRXHECHSVDCPWABPVTMFUNMYDDYDEMPZWMBSUIXAEWKQTGPTFJHFZIVJFIDNFCSRZCIBGQGXMJCAQRSGISENPBXXYONELKFBWDETAZGRZCLYFTRZDPHNARJDAHSOWIHJRORBAYLPVUZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 753U;
    msg.info.assign("VMPMEMIKRKBHEGOKOXVBITXQOHFHJPQRIOYUKNSGFKTARSPGWNTMMQDGJRABUMDXISCWTTCELHDLZYZFYGZQVNXVAPAYJSULNLPQKIZYVCRBMGSEZDKHJFSFAGRCFIXBSXDHCLUAIDDXNIUAJFUBYBAVUSCZGNYSWWLTVNYFPNRYYLQDOEPOCJPEFWBXLVQWONMAIHEAGKMPOHLXH");

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
    msg.setTimeStamp(0.435204718759);
    msg.setSource(59826U);
    msg.setSourceEntity(90U);
    msg.setDestination(55544U);
    msg.setDestinationEntity(49U);
    msg.type = 170U;
    msg.request_id = 59699U;
    msg.command = 25U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("IDWMFHWJPJLOBQETUFFRNCURUCSWNEGSTIVVAGWYIAPONVSQWUIGNPYKNKHGJGMELXYCJVKNAXZRBSSAPNQOSFBMPGYBNUDLQSCDAKMKVERRDCREZVLKIBMFVYHKZEUQDJGABTYFOAFAGVLBHZYTGV");
    tmp_msg_0.reference_frame = 74U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 16244U;
    tmp_tmp_msg_0_0.off_x = 0.497379606013;
    tmp_tmp_msg_0_0.off_y = 0.874305461752;
    tmp_tmp_msg_0_0.off_z = 0.235640084166;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KQGTQDYEJHASMCKFIKSZLPXIFCVNZROZKHXZBJNXILNYZYACJBCOKYYXWUTROXFBHDR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54410U;
    msg.info.assign("HSHGNDUXGAYKNCAQBRHRMWQI");

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
    msg.setTimeStamp(0.693608018075);
    msg.setSource(13968U);
    msg.setSourceEntity(9U);
    msg.setDestination(7913U);
    msg.setDestinationEntity(50U);
    msg.type = 121U;
    msg.request_id = 64447U;
    msg.command = 176U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.239501802261;
    tmp_msg_0.lon = 0.572842858285;
    tmp_msg_0.z = 0.30486686844;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.radius = 0.92831733165;
    tmp_msg_0.duration = 42331U;
    tmp_msg_0.speed = 0.841374864256;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.custom.assign("TPZCDDRFUDJHAYQBYKMHKNTJCOXETPKYUHUMSNKPSVIBIKBJENLSYYELWSATWBYNMVZFJGRTUBGNHOCEBQWOQANAGLOAZIPBQMXLMELCPWRBQIZWISVVVKJOODDNTUJGRUIHBJOKXZZXDHECCQVTUJXJFLHOFQKMRGDMXVNPHBSTDYOWSWYSAGPSDCUZFVCFDRIZXRPZQLZREEYCISFWHCGLRKEWARIANLXTQFMFVMETYAVJGWGNQGXLUFHM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36065U;
    msg.info.assign("DHAGWFYNNBBGBGLDJJQNSPZWXOAZGELRXDBZPOEBNHSUDKIQSXKUKUDHVOFSXTAXUNTJRRADZCBVYQLOALIDUHARYTEJSCTTWITKCKSNCBFOPMMLEBAJIZEPWPVRJKYDIGEJGLLUQLCXSFXMGAEFUPGYTMPZFCNIJVRFRDXKTKWLVOLMSWHCQCBZKMMVMJYHWIOHUINWQFQMIPYPIDURHSV");

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
    msg.setTimeStamp(0.870019951583);
    msg.setSource(36029U);
    msg.setSourceEntity(37U);
    msg.setDestination(64916U);
    msg.setDestinationEntity(214U);
    msg.command = 243U;
    msg.entities.assign("VXHOQAYJKXIJJPBCCLWGHZRKITFZCALHDVALSKTSIMQOYGCBWBOMRUYEZZZTQZFUONWXAVPRDCMNEWMMFDKAYGQLCBY");

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
    msg.setTimeStamp(0.245694661067);
    msg.setSource(26904U);
    msg.setSourceEntity(200U);
    msg.setDestination(51666U);
    msg.setDestinationEntity(186U);
    msg.command = 186U;
    msg.entities.assign("XUYVGLIETIBWUVLOJUUKDNHHTRJICYIESMSTJXDOQTAAWCHBGJFKCZMUUFZPQPQKMXKSYGACKYPMAZHMLILELFWSETTFOFZIYDGVINRJRYLHDAAXZOJMYWEXSPGGYLQZBBYVPFQMBCOR");

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
    msg.setTimeStamp(0.174456841652);
    msg.setSource(15266U);
    msg.setSourceEntity(242U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(127U);
    msg.command = 67U;
    msg.entities.assign("UYFJNDNGXDHTYUSENUROGYOLLTJWJUOHATNTSJCWIVSFRIVZHLIHDKVNJAQVDPXDAEGP");

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
    msg.setTimeStamp(0.18920104933);
    msg.setSource(54580U);
    msg.setSourceEntity(237U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(68U);
    msg.mcount = 92U;
    msg.mnames.assign("KCHNQEAKAWWKLIZRUCIJVQGBESELVDUZGEJPNUVEZHIOBIFNRMCKOJALBPAIFOKLHCJYQVUPORLWEAUSMHQTANJLGGADXAYLJTFH");
    msg.ecount = 224U;
    msg.enames.assign("CCRUYEVWWVOAZLAFUUKNIZACTESBSNGVDDFOJFYSXMXZOZVQPWVLUFQFJQQHPNJGQECMGQJQTNMKSBGPHTNYIDBOSZDZHEWONZBNSEXFLRDRTFDNAVGXJKUUJABYXMZPKCDOWVLHTLBQDCKPJKRLSNOBGWBMMRUROITRLLTZH");
    msg.ccount = 246U;
    msg.cnames.assign("PFZCZSUZTFBYMPUGMTIOBYVNNJSVNCTWRQMTVNNVLDZJAIHXEFLB");
    msg.last_error.assign("WBBKHXFMFCWJVEZEBBOJDCCIJSUONGIPNJWJLKONODAULEOFYJLIWKTMPUFGQPWKTZRFPPHYSOEWOKADNZLTSHNAZBRJFXCXIMEJIIBEYHESVZPVYSRNXYVHRUQQSXVUGRKVKAUGSMZRQVCGBAIUHAGZADJUQZWAXXILRHRIOPXVLHFYYCYANTTFPQCJQLDDACLPMMZVFEGNYN");
    msg.last_error_time = 0.571223430662;

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
    msg.setTimeStamp(0.372576047003);
    msg.setSource(57264U);
    msg.setSourceEntity(134U);
    msg.setDestination(49348U);
    msg.setDestinationEntity(97U);
    msg.mcount = 173U;
    msg.mnames.assign("LQTXFSGYWFLQHAOWJSQNUINRIIGMUKZOVTBTMYEAPRTDOTKNSSCOKFWHDHRPPZGGRVLUAQOMF");
    msg.ecount = 22U;
    msg.enames.assign("ZCBAICQLTURUJXXMGIEJZTIERWBQKZFJBAGIXSNROEESUICRVICO");
    msg.ccount = 123U;
    msg.cnames.assign("VYPYBJWAIVZROZNMBAIMEHJFOJLHIECCFPEYYQZPABKXDXGXDVOWGSWQPRIFOXLUNTMPOYBSQJNWNUFCILPQLNOZSXZTHAUELUFVTQSURSGLIZUYXTVHDOECMFD");
    msg.last_error.assign("HWLAVDZPRPTGEPVJNQYNWMVBCQQUFHKGYXFTXZZCWTCXOECIDINKIEIDMVEABBDKSBIKOCUFHGISJFPIFJVEXMVZWFOMGTJAXLKAGN");
    msg.last_error_time = 0.995925379203;

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
    msg.setTimeStamp(0.210523356636);
    msg.setSource(7285U);
    msg.setSourceEntity(226U);
    msg.setDestination(55024U);
    msg.setDestinationEntity(114U);
    msg.mcount = 250U;
    msg.mnames.assign("NEUJRQQIZLMIURNIDIPLOAXRRFLLHEYGYNEXNDXANMFDZJIPPGBUGWPVCJVJBPDTBHWOMRFGEZVPZMAGIJMQDYYDVGBTVOHIFAYWCJNHTMFOUNDFEKVOBSXSBKCBSRQXEWCD");
    msg.ecount = 215U;
    msg.enames.assign("WDAULYFZTZXBXEOL");
    msg.ccount = 209U;
    msg.cnames.assign("VHWNCGRHPHAALLKZZAIBBUFOLIONPGIBVZOSXULFNYMEERXTOSYQKWRYVDVZYBGJFMBQJCTTSODWMKWUKGXZGFSWIMIXSJPFNLLQYAVBAPMSHMEIOMEKOATWGDHAVOFJRUEAQVTPKDLKSXJUNYSOIFRQBIJNPKSODMDQDPWDNXCQURCJUQMLVWXETLUKCZCPRGGWVTJEEJDRTBWICPKQNFHYHLB");
    msg.last_error.assign("PFEHTJZBMRBBEAFSYXFAQWFVMVDJCGSSGMCHRCLXFCIXWDJDRPQEXCZNOPG");
    msg.last_error_time = 0.993514711116;

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
    msg.setTimeStamp(0.714130000386);
    msg.setSource(6648U);
    msg.setSourceEntity(109U);
    msg.setDestination(59518U);
    msg.setDestinationEntity(51U);
    msg.mask = 188U;
    msg.max_depth = 0.447593059651;
    msg.min_altitude = 0.858975175781;
    msg.max_altitude = 0.464685510948;
    msg.min_speed = 0.450339922766;
    msg.max_speed = 0.926761589083;
    msg.max_vrate = 0.973267977315;
    msg.lat = 0.333709792766;
    msg.lon = 0.42455524435;
    msg.orientation = 0.939844914621;
    msg.width = 0.366760035611;
    msg.length = 0.328659327343;

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
    msg.setTimeStamp(0.257602066571);
    msg.setSource(12188U);
    msg.setSourceEntity(225U);
    msg.setDestination(44391U);
    msg.setDestinationEntity(234U);
    msg.mask = 200U;
    msg.max_depth = 0.286097700853;
    msg.min_altitude = 0.373810981694;
    msg.max_altitude = 0.642348271188;
    msg.min_speed = 0.591003198273;
    msg.max_speed = 0.331164667727;
    msg.max_vrate = 0.381087250628;
    msg.lat = 0.794788612729;
    msg.lon = 0.871341509308;
    msg.orientation = 0.488495591825;
    msg.width = 0.633625900942;
    msg.length = 0.606273574656;

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
    msg.setTimeStamp(0.99474687658);
    msg.setSource(58492U);
    msg.setSourceEntity(70U);
    msg.setDestination(60913U);
    msg.setDestinationEntity(196U);
    msg.mask = 208U;
    msg.max_depth = 0.904664586958;
    msg.min_altitude = 0.236278045814;
    msg.max_altitude = 0.915055966929;
    msg.min_speed = 0.953567114789;
    msg.max_speed = 0.402939915231;
    msg.max_vrate = 0.0400194437595;
    msg.lat = 0.115320853049;
    msg.lon = 0.111147700555;
    msg.orientation = 0.402525303795;
    msg.width = 0.433960392404;
    msg.length = 0.142123221534;

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
    msg.setTimeStamp(0.616633931463);
    msg.setSource(59784U);
    msg.setSourceEntity(253U);
    msg.setDestination(65155U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.299771737271);
    msg.setSource(29831U);
    msg.setSourceEntity(17U);
    msg.setDestination(53726U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.302944414145);
    msg.setSource(9461U);
    msg.setSourceEntity(188U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.181893642096);
    msg.setSource(57333U);
    msg.setSourceEntity(94U);
    msg.setDestination(5800U);
    msg.setDestinationEntity(215U);
    msg.duration = 58307U;

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
    msg.setTimeStamp(0.377801156785);
    msg.setSource(59750U);
    msg.setSourceEntity(226U);
    msg.setDestination(53606U);
    msg.setDestinationEntity(51U);
    msg.duration = 30152U;

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
    msg.setTimeStamp(0.279418108382);
    msg.setSource(39974U);
    msg.setSourceEntity(249U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(79U);
    msg.duration = 60546U;

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
    msg.setTimeStamp(0.157646836688);
    msg.setSource(10445U);
    msg.setSourceEntity(27U);
    msg.setDestination(22693U);
    msg.setDestinationEntity(2U);
    msg.enable = 254U;
    msg.mask = 3907889415U;
    msg.scope_ref = 1600238805U;

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
    msg.setTimeStamp(0.512024813851);
    msg.setSource(45981U);
    msg.setSourceEntity(53U);
    msg.setDestination(49316U);
    msg.setDestinationEntity(203U);
    msg.enable = 74U;
    msg.mask = 3273068152U;
    msg.scope_ref = 4088621350U;

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
    msg.setTimeStamp(0.780893103719);
    msg.setSource(8459U);
    msg.setSourceEntity(11U);
    msg.setDestination(53226U);
    msg.setDestinationEntity(13U);
    msg.enable = 248U;
    msg.mask = 2924231509U;
    msg.scope_ref = 1833295645U;

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
    msg.setTimeStamp(0.416478372658);
    msg.setSource(57250U);
    msg.setSourceEntity(42U);
    msg.setDestination(20149U);
    msg.setDestinationEntity(97U);
    msg.medium = 3U;

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
    msg.setTimeStamp(0.426540221596);
    msg.setSource(1642U);
    msg.setSourceEntity(167U);
    msg.setDestination(13134U);
    msg.setDestinationEntity(114U);
    msg.medium = 225U;

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
    msg.setTimeStamp(0.821457675448);
    msg.setSource(15521U);
    msg.setSourceEntity(225U);
    msg.setDestination(4068U);
    msg.setDestinationEntity(254U);
    msg.medium = 26U;

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
    msg.setTimeStamp(0.330674230658);
    msg.setSource(44400U);
    msg.setSourceEntity(95U);
    msg.setDestination(58913U);
    msg.setDestinationEntity(216U);
    msg.value = 0.978152045078;
    msg.type = 126U;

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
    msg.setTimeStamp(0.0359072114506);
    msg.setSource(24480U);
    msg.setSourceEntity(212U);
    msg.setDestination(34233U);
    msg.setDestinationEntity(91U);
    msg.value = 0.928224024452;
    msg.type = 71U;

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
    msg.setTimeStamp(0.0423658007194);
    msg.setSource(29950U);
    msg.setSourceEntity(88U);
    msg.setDestination(25527U);
    msg.setDestinationEntity(119U);
    msg.value = 0.807735384598;
    msg.type = 53U;

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
    msg.setTimeStamp(0.0740141662441);
    msg.setSource(32068U);
    msg.setSourceEntity(216U);
    msg.setDestination(41522U);
    msg.setDestinationEntity(103U);
    msg.possimerr = 0.119042179964;
    msg.converg = 0.981768956059;
    msg.turbulence = 0.445697544488;
    msg.possimmon = 252U;
    msg.commmon = 225U;
    msg.convergmon = 181U;

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
    msg.setTimeStamp(0.211984515872);
    msg.setSource(5438U);
    msg.setSourceEntity(234U);
    msg.setDestination(21765U);
    msg.setDestinationEntity(209U);
    msg.possimerr = 0.257392001165;
    msg.converg = 0.0374921211794;
    msg.turbulence = 0.0410632835875;
    msg.possimmon = 76U;
    msg.commmon = 171U;
    msg.convergmon = 176U;

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
    msg.setTimeStamp(0.959569680991);
    msg.setSource(4600U);
    msg.setSourceEntity(24U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(202U);
    msg.possimerr = 0.261196908491;
    msg.converg = 0.130013998607;
    msg.turbulence = 0.481087085921;
    msg.possimmon = 100U;
    msg.commmon = 104U;
    msg.convergmon = 80U;

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
    msg.setTimeStamp(0.851022688753);
    msg.setSource(10106U);
    msg.setSourceEntity(134U);
    msg.setDestination(8239U);
    msg.setDestinationEntity(147U);
    msg.autonomy = 65U;
    msg.mode.assign("SDIGNZJNGJXBVBUISILKPEUELIYFVRYQPLDAGGIECYQPTIHFOXNBDUTIWFJEMLDCYDOLUURXNRQNXWGKLTXUCBRFKQLSRBALEELPYIEIGSBOXPJIYHBNXHKDBPKPOFUZXDBSDTUWCHYOMCFLCJSTAQZAROTECVVWWZTPCP");

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
    msg.setTimeStamp(0.665460216307);
    msg.setSource(47950U);
    msg.setSourceEntity(244U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(204U);
    msg.autonomy = 132U;
    msg.mode.assign("CGBKBVINYLQLSQYDRDZBCXNKAZGSECAIKYONTZJVBHVPWJKUGKRPZUUALKETJUQINBRAPESNKHCIOAZCGLHTHMPESPKLSJGSEMVOAGUHQTAXORYQJOHIFSBMIPLUJWDCGLFIVECMFAWYGNDJYTZYWOBNPYPRIEWXJXBXQTUYFVRXXXAKBRIDECVMJQSDEQHSPNROQCZGZTLDTXFUVLCVQNRWAHFBOPMYTTMIK");

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
    msg.setTimeStamp(0.465930824343);
    msg.setSource(43693U);
    msg.setSourceEntity(101U);
    msg.setDestination(14232U);
    msg.setDestinationEntity(154U);
    msg.autonomy = 168U;
    msg.mode.assign("HSQPSRNRLSOCXQVQSQEZBXIXHGOYJGFYWGQOGJHNNZIULQYBFXMSBZDUJWYGUJPPAPRDIXHZVQOMSUTVGVIEMECYCMXKELXHPRUWRLBWIAADTTZKCWYOBTSFAKONVVSCHKFACDTZHWVADFJFCIFTPRYTAGMDXWDD");

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
    msg.setTimeStamp(0.807626596983);
    msg.setSource(59181U);
    msg.setSourceEntity(106U);
    msg.setDestination(1529U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.976795105899);
    msg.setSource(16927U);
    msg.setSourceEntity(220U);
    msg.setDestination(48330U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.0446534790731);
    msg.setSource(40165U);
    msg.setSourceEntity(83U);
    msg.setDestination(56389U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.970559004322);
    msg.setSource(29696U);
    msg.setSourceEntity(121U);
    msg.setDestination(18934U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("JBEJCHUJIABQUXEXQWAVEGJILCYMBZRHEGYXAXCCATEXODLELIZQVTPXEWDVGDIUZFJYYOPGEMMRNNMUJFWHCRSOJFSUGJEOGKZTOVQNFNPBSLDFCSQUARFQTLCTLOJHLTNNHLZDSQYCFHPXNIKPG");
    msg.description.assign("AKKXXJWHMVSSUYCKAJMXXRNRPNGMLFLWWWWQVTNQFDSJEPQEMYOUAXZVJWXRODGMUILKGJHGGQXQUYVRYBDQECZNURYZLHAIVVJONABOLFVCGYDKCFWGUCDJBBPCCUZEMZCGOFUWTATBSHFBUEVHTOYGSVZNFEJMCWAIAQSDZYOLIZ");
    msg.vnamespace.assign("TKQTCDTZMUXHQOGXKZMQVBJNLAWPYFOLUSDPPBNRTFRUGHOYNYNIQVWXKTOVBWCREHNAKSLRZGJFCOVYEVBCZSQUXHNWWJIBEZENZJKBWLFEPPXQBKJSIRMSFLQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PRRYSZXGMTCWNECEXAOZLNMCFCKSZWCBBNEZCJMBLYJPRZITGQUGHAIZWRIMGVIAVSDJBQPODALFKXZMOKCLYP");
    tmp_msg_0.value.assign("GRVUAMDMMGFABXIWBZYYGGEWZQLWFNLVPWHNFZJTQITQFVVOEONNFJQSDCIPPKDUDHMPXRNOYEQWBJVSRBQDHXZTPICKJFMKZZYBZOBNJURESUJFTLXXHKO");
    tmp_msg_0.type = 61U;
    tmp_msg_0.access = 173U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EYRDZHHJEOISYSQMXKBNXKRYGIJAVMFVNJFTRQBWEGNSIUUBFFLVBWVFRZFWBREOSJYHPGCIUADFAJCGQPXGYPMAPDMUTNAEJOXXTARRFZOSKKYHWOXZTIPECDKBOPCIBWQWFMCYLHCHJGKUDNNRIVUMQQXOZJEFDLTDZLPWVKMDNCLYKHPNCATUERH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MLZQRGYAIDQTCAHQVLPHUOHXOWGGITKKKNRSOWVYTXTVFFVMFKRGETMQZQVEWHCAFXRGXYXBATVPINYJKDUOPSPUOBIMAANUDOSHZZHLHGUMAONEZULEHUSTLIFDURWHICPWDC");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 62186U;
    tmp_tmp_msg_1_0.lat = 0.369869567549;
    tmp_tmp_msg_1_0.lon = 0.654292481582;
    tmp_tmp_msg_1_0.z = 0.945406375932;
    tmp_tmp_msg_1_0.z_units = 246U;
    tmp_tmp_msg_1_0.speed = 0.805539100707;
    tmp_tmp_msg_1_0.speed_units = 216U;
    tmp_tmp_msg_1_0.bearing = 0.718047996576;
    tmp_tmp_msg_1_0.cross_angle = 0.582789838952;
    tmp_tmp_msg_1_0.width = 0.159070168619;
    tmp_tmp_msg_1_0.length = 0.256953218922;
    tmp_tmp_msg_1_0.hstep = 0.962630190225;
    tmp_tmp_msg_1_0.coff = 24U;
    tmp_tmp_msg_1_0.alternation = 179U;
    tmp_tmp_msg_1_0.flags = 131U;
    tmp_tmp_msg_1_0.custom.assign("QVRZQYWTWEWYLWKBGQBHWJDOGNAOOLMOUKGZYTKOVQZAPKVGTFVAPJBXCJHOTXKATBTEYAQAYFUPCWDAXFSEJZKQVPXRPMMRFFWISFSBMAIJZQPCWXRASSURNGHPCYDOGBJMMYXQVCAHUXNHULZXDSIHZRNLETYHLZMSFTSRIFJUCHIINURUVSHICZEJWPXDOELJLMBOHEBKUFD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::TrexAttribute tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("RVURCBIUAXAQUTFZYHQKUZFUCEWIJKEQFGHBDKILQO");
    tmp_tmp_msg_1_1.attr_type = 51U;
    tmp_tmp_msg_1_1.min.assign("WQXWIKCKIEPEEIXOAICJODORBDPUGJNMPDXZYFLAVGBNMGMZQBIEJOVDHFTPOBGQZUKRZTDRDXSCIYSWQJZFRDAVNVZSTSPG");
    tmp_tmp_msg_1_1.max.assign("QRSUOSOQCGUHZJAZTRKURZTDMYGEFIGLURLDEVQPJPIJVNUNGNRYZNEEQSOF");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DYWAPMGBBUPQRCHFRPSWEUWTZYTBIPAXKQRLMTENDBUIHJXFWBPJHZNFJBTKFTJUFHSKIBJEHRMIVKJVGABNPGRUWSOXZMZVLBRCRDKNZDXNWPYZYVKFQICUSYKXSQLBXSAHKANAEACWQCGGWOSIJYITPGZHVO");
    tmp_msg_2.dest_man.assign("MEQVVKCEFKFQHUAHAQHHKFTUHSYRZOXEPZBNWIEPDJERQNDXOYTSDNTZYIVPGRTWLUUPPNVXZBPQZGSADQLWLEAOJNIXMHALMBUWWRGVNTFZNGOMKUGCYLYDYTMZWDFP");
    tmp_msg_2.conditions.assign("MZOUMMSMRGWGOPQCOLRTUPZZHJJYJIJSUBHZBNNGKHEZEXAWCOZNVWOJCZJAZFRTIBSEZTVEVYVDXWRCESWBXRGTMXTOAGJWESNIKPIHEMGDALSTULHKLUQLAYRURP");
    IMC::DevCalibrationControl tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.op = 244U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::EntityInfo tmp_msg_3;
    tmp_msg_3.id = 19U;
    tmp_msg_3.label.assign("GUIBGCMXSOIRNQRRQXWNTCAHQZUAFUFFFERCKAGLVGLDFMQYJFPPEDPLBZSSGCJXNBWCDTTNIVLETAYQQHVECYJSOOWKRRBKPGHBUVOSXWOPELOCLNRPYTMZAMDZCVOYZZWHZADXNHTUKEYVJBCLOXSGHFKBVYSPNIKFXOTLFQVCMESTLGATWA");
    tmp_msg_3.component.assign("IGAVFKPAUVEWLPSIODHONIEGBYJNDHIVRNCKYBRKLCZKJDGZVZLVUXTEFAOLDIMEHZQBRBPTPGAMHUBOEWTXCCIPGSNBSQHJMDAEPUBOAQKKAQSDCTFOXDRLKXSGWWMSYDVTIFGJAYEZNXWQNJJZPNWIJVGOBJ");
    tmp_msg_3.act_time = 31278U;
    tmp_msg_3.deact_time = 64285U;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.255447882495);
    msg.setSource(46136U);
    msg.setSourceEntity(78U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("BYZJWFVDCAMYPCKLAKSHUQHRTPIMUZOGPRJMCPKXEHPYBVZMYUTJEIWDFBAIDQTTNAZLRXRCGYVJCPEMXLKBIVZFNBLKSOEOKASKQLEBCIJSGTHOREFDUOLVZZAHFFVDQSMSQFQGFXJBIZXTCWNHYGRVIAYTVTGX");
    msg.description.assign("NDZAGACRYHZTKYAETOVSPIKPVQQOZGXOANZUXYCLVMMUHLNBMRJQHROSCPK");
    msg.vnamespace.assign("CTYXGIBDOPHERMZXYVMMCSQPSSJRKKNZMQCFHEWHQAYZQKONFWXWLTXENNHNBBLTMKHIXPZJVDIDGKFJSLYFROFUGTKTEDYSNTWSVWADAPMYKIHLDIFUJD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HQKFGIZMUHPDDXTHDTALMKCXKOCGCNYBWDQMCAIATUGIEZMMBDNLLLLBSSZWDJOGVULQTNFKVGQJNPOKVZYFFUDHVOPPGUJTROOITPSYTRYKZBXRJSOPTMLSIHZPXANRCGQDQNVPRSWHXFJWROZWMTEEYIWASVHXQXKJVGXBCZAFLDAIKFRIMEBGNSIRFNEUUFAQWNDUCMHYKCZJS");
    tmp_msg_0.value.assign("GWDOBVHFBBXJZPPUOUNVGY");
    tmp_msg_0.type = 153U;
    tmp_msg_0.access = 66U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UHKUSBMCDRWGLITNPKXPKYUFJKBVZMZLZAVMYKUXROKITIGDMSQAWKQVFVCSRBPGIEQBWXSDOQPOEZUUFNDJRQQCHLTINVFQSGBBWDVWOFZCGYHXGLIVLYTPCLHIIBQJHRYGNSAWWZNWLNKJZUFTMEORKGLHNARCOXJTFYSEEBWTINMEXWRBAXZJEKQLMYAMAXDDOURPVHSCJJQEPDLFHZVVXMFCANFIGHTHOPDE");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PCQSNPEIHIMYMWRVPKOUBIKDZEJMQNJNBCVVJMTZADNQHAKVCQQJSDSSCKTZLBAHUXJUHQIFDZYVEFKPKBFBNALXGBUKMOGZKXYQAEDUADPXYLROWFJCZEMGLCTHLFMY");
    tmp_msg_1.dest_man.assign("VNEHUJZXDRTYEHCDTOZKRHBAKDB");
    tmp_msg_1.conditions.assign("AMGAVQRANDEYJQUGDOCIOBJFBIIITOPLCZPUQGJWGJVYS");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.909657134649);
    msg.setSource(13506U);
    msg.setSourceEntity(43U);
    msg.setDestination(22916U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("VJLVTLOPJRBWUHRYUFAOJBKGDNNCOKJMILVHTPGRFCPKGFXLPXZCMTFCHHJZHEMMLHDKPKATGOBWIIHIVQNMWYRWVY");
    msg.description.assign("SXRUXEZMNGACVCSRBDEFMACUGOHCPAPPODWXG");
    msg.vnamespace.assign("EKDHFQEKJZYIRGQEAXLHWPRUKLOILRSCUMFNKPXFBZEPYZTNYJDCLRMFVGLUWOCTJGZYVYPOJEQNVTKPHWBLJUUKUZOOFNUEEAKVPAWTSCSORAUXTNMHFIQMBCGRPAOJMWGCYXGIHWQSIIQY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KFXHGITPWJQDLQGFOPOPCLUMHJADHDJXAAZVNBPXTANFGQTLKGWXUUKPSZFLSSPYCEERFMINJCLAUGZXHCFSCTZJFUKESGRQDHZTFXUEHYZCSNMUPIXKKGEWWNBMBOAAYQIKZLWKHDRTBOHVVNWKRLDUJMPOZDSGPIJMQRLYRBLKQQXVRYMOSXMUVWDVONCHQHZV");
    tmp_msg_0.value.assign("BTDWZBAJLZSYWEVMVFHPSFCMBYALKFBDHCPFRZGUFTGWANAJNOCJLTBHSYKHPYTXJLSAMAJCUKKZDUFUYXRDDTRIBRMONSEFRZJXPDTOXYAVUVSEVGWYYQZNIGNKMYGMEQIADNHOCBXNIDCEZPTLXUULOSTLQJREZCO");
    tmp_msg_0.type = 40U;
    tmp_msg_0.access = 61U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CTTOMFQKZUIQQWMEPQMAUEXESOOGMHKGDHDNVRYKCGRZABZUXZNHFYUACF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BREHXAKUXYIWYQPTKTJHZOTYAGNPASIIMLMTDBQHYUJJAOLSXMTFGDECJIBMPMQTQSYAZOFXKKCVUEVYLBZZPWFNSEREXIGMKDPBLQNWQWEJDRVLSLHHRHUOVYGLXYKEJSIDHHKOVCBTJFDZBDOIFWNTNFVWJDFGUFUSNPYCKYXXEZMZNTQSGOHPLDGNASEUVGKXSOMWAQOVDWLTCQPCKUAIGZZNFJGORUPXWCULZRRVIVMC");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0122236455866;
    tmp_tmp_msg_1_0.lon = 0.284798688823;
    tmp_tmp_msg_1_0.z = 0.729254864739;
    tmp_tmp_msg_1_0.z_units = 223U;
    tmp_tmp_msg_1_0.speed = 0.431821519895;
    tmp_tmp_msg_1_0.speed_units = 177U;
    tmp_tmp_msg_1_0.custom.assign("FIOSQAGQQZHLKAPSLGIPRERPHONJYDZJRGBINNEUHPCUWJNYRCZLSPAKLUOWMJCJQSPCDCDGIWMITYMGFUMXRYHAFDTCHWXZLUUYKTUEIVHXHYSZYCNCDLSNDZTZKZKZFMIPPYVNASMFJKGOFVIWBVZSEOFWLGXWPHODTJGVXTFUPEHQBQTVAQGMLMRUNAHKB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PopEntityParameters tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("ZAXSOEYADTXRZRQDWFAOTGTQXDBEJMJPNWCQYGJYICCIPBDAKBCPJDSQVTHAKBBVIXPYGTZUDYVMMSELLIIMZRWKOQCZREFQSSYHOMUZRTJDWG");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::TrexCommand tmp_msg_2;
    tmp_msg_2.command = 56U;
    tmp_msg_2.goal_id.assign("SCQLBIHTNYLFJZEFSSOADLSXCIECKTGAQDTARPICGDVWXIPIMHZELRJMJWHXCNBNCPXUMQKUKBZDGENHPJYMDPYPCNGZQBTQAKXCOPJQVCTKZAZOHCOFERUXVULTMFXWEFTBRADROANUDMWKVNGXMIATTNLLIUFVEDHWFRUBGLBWDARYNKVQOZOFZHSXSTVRJKRKUSVZXQIQIWVPGIPKGDMBYPJEFYJWYLBRNUOLEBEMSH");
    tmp_msg_2.goal_xml.assign("NTOKXNITEUFCCLFXGDBAXWDXJJQMTJRRLPDTTOECRZKJBNTYZZMEQXGRIQRIMNFZGHHGSWINVWPHTYYNPXNVSRHCNYESSDXMLMGPLAOCOFIQWUBBKKZXCPQUAIGUHEBPKDLORTOJVRBMVUCSEVDMZQIJMJMFWWXSHSIJSJGBBPCVZCLYULUKKKYASVRBG");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CacheControl tmp_msg_3;
    tmp_msg_3.op = 146U;
    tmp_msg_3.snapshot.assign("VYTAZUUPMWRWXCKRQVSVVBLQBFTHMPAGMWMCOYNEICYWEAWSVSRSQRYWXIFQYELVNKBUMXATGADYSIBLSGFXPDJBEGIPPFCUUODONDHVRUHVQCJPHLWAROMLLKXHGTZVIZXJEZSOJCERNOQSMZHDQAOLKCFUJRYDZBYRAGXZYWHPQEVTCLNKNBIZOSCNQXZFKFITEKXNKENZGIMTLURUKBEWTDGDHICF");
    IMC::OperationalLimits tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.mask = 57U;
    tmp_tmp_msg_3_0.max_depth = 0.0586886498064;
    tmp_tmp_msg_3_0.min_altitude = 0.556035015555;
    tmp_tmp_msg_3_0.max_altitude = 0.852183691584;
    tmp_tmp_msg_3_0.min_speed = 0.582371813476;
    tmp_tmp_msg_3_0.max_speed = 0.816893041855;
    tmp_tmp_msg_3_0.max_vrate = 0.362449928818;
    tmp_tmp_msg_3_0.lat = 0.645882184013;
    tmp_tmp_msg_3_0.lon = 0.256614319961;
    tmp_tmp_msg_3_0.orientation = 0.661533046128;
    tmp_tmp_msg_3_0.width = 0.135596522764;
    tmp_tmp_msg_3_0.length = 0.742987161012;
    tmp_msg_3.message.set(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.107433152762);
    msg.setSource(60397U);
    msg.setSourceEntity(213U);
    msg.setDestination(14832U);
    msg.setDestinationEntity(208U);
    msg.maneuver_id.assign("QPDBLZZZQVJYVXNAHVNWMYGOAKUHVMSYQUBMPWGIHFIHNUSHEXOKOEJNNILGLRFHGG");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 18362U;
    tmp_msg_0.control_ent = 184U;
    tmp_msg_0.timeout = 0.931917311672;
    tmp_msg_0.loiter_radius = 0.927988332293;
    tmp_msg_0.altitude_interval = 0.0505950152681;
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystems tmp_msg_1;
    tmp_msg_1.list.assign("FCRXQLERMELUJJWZLDGDDPZLICCXOUWCQPABUVCMRYTNFQAAOBA");
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
    msg.setTimeStamp(0.666271869096);
    msg.setSource(5560U);
    msg.setSourceEntity(102U);
    msg.setDestination(7487U);
    msg.setDestinationEntity(93U);
    msg.maneuver_id.assign("FTLZWKBVVPTNTFJRBNSESWROBHTKAUGZMGVPOUKXEMLRCKLTPYGSBSJTZFIDXHXUWDQIMWDGXEQZNSJUCUVLSCMEQJMQVZUOTMDOFIAJBEHIOKPQWHCICUNAJNQIANWDKVWLHCDYBOZLRMVWPSWGVJRXLMEAQPTICINXBDRGZFHFYAOGDPENZQFPHYHJFVBDJZXAKYURHGTNZQRJPGMLOKAYVYGLSHPDICUEBTCFOXKYNABMUIREXYELKOWSFS");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 37758U;
    tmp_msg_0.flags = 64U;
    tmp_msg_0.lat = 0.293352620065;
    tmp_msg_0.lon = 0.428017772432;
    tmp_msg_0.start_z = 0.317875959649;
    tmp_msg_0.start_z_units = 249U;
    tmp_msg_0.end_z = 0.7923024916;
    tmp_msg_0.end_z_units = 137U;
    tmp_msg_0.radius = 0.937721829909;
    tmp_msg_0.speed = 0.345658574652;
    tmp_msg_0.speed_units = 231U;
    tmp_msg_0.custom.assign("UAMVDJOITXEAXGCJI");
    msg.data.set(tmp_msg_0);
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 226U;
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
    msg.setTimeStamp(0.884382576455);
    msg.setSource(11982U);
    msg.setSourceEntity(214U);
    msg.setDestination(18613U);
    msg.setDestinationEntity(239U);
    msg.maneuver_id.assign("GJEFVLDJGNQYZAQSVFQEPVNPJQOFZWSFXDTROYHFKREZYWYLTVBMYIGGWNYNPDMSIULCOPCRKTZSXVSRWJUCWBUKKHTNGTIJYVOV");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 49449U;
    tmp_msg_0.lat = 0.509838958348;
    tmp_msg_0.lon = 0.0951995328676;
    tmp_msg_0.z = 0.597252703606;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.duration = 4103U;
    tmp_msg_0.speed = 0.327767101746;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.type = 105U;
    tmp_msg_0.radius = 0.957210940358;
    tmp_msg_0.length = 0.487931236495;
    tmp_msg_0.bearing = 0.0993990262868;
    tmp_msg_0.direction = 27U;
    tmp_msg_0.custom.assign("GNWGMEGGPVXQQZCLAVCVRPDFBFADMYQTBBJENPUVJAGDSCSHACRHIVSZMHZITFRLTTROQOUSKJBYHLOPEVIURPTNIBASSYRHORMKGOPTHGJQWRKUACEEWWBXHYRDEWXOUIGHLUGEIWEDXKSULXADZYNJPSKUQEXKIQWPPSNXCVLCWQWFOJMVNNBFUAFAZZKBACFZTYZFDYQYJDMCKIXNTXYVWJJZQH");
    msg.data.set(tmp_msg_0);
    IMC::AcousticOperation tmp_msg_1;
    tmp_msg_1.op = 140U;
    tmp_msg_1.system.assign("ADHHGMTGJGMEHXRTBWKVAFTBLKIAACGRTWFQZYUZIRKBFSLSYRPQCLPFKXN");
    tmp_msg_1.range = 0.813565390872;
    IMC::RSSI tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.903260675442;
    tmp_msg_1.msg.set(tmp_tmp_msg_1_0);
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.022511696064);
    msg.setSource(2094U);
    msg.setSourceEntity(95U);
    msg.setDestination(61497U);
    msg.setDestinationEntity(145U);
    msg.source_man.assign("MMXHMYLSUJHAWXUALPFYDV");
    msg.dest_man.assign("XUKLTRAVAEGMRBVARQHDVRHMSUIRFDYZNHIWWZGFURBBANFOTOBCGEPSSKEZJCSUYPONPYRIMYBRTQDPEUASGTVOHNVKVFPDTLUUDKQCITXPEYMKQETQPYKZFEVGZJJTVFYMRIFCGLVJINCZXLXMQQNMWMILLXHUYTCPLJNUDWOKELGDHXNEBSZRBIVHCBLWXQJHGLBAKOAIAXMAWDQMCSDWNUSGPWBGOCDZJYTJJQKXSOFNPKW");
    msg.conditions.assign("EMSHVRYCFQKOQNJPNWEIZVKHKZVLAGTAAEEUAUJMVKCLWOMEQVIXIDVJGKFNTRBBLVJXYUDGFGSPSJYFORRPAHFWMOIKZJCQXDYWZTMHMKYKWUUGRRQJVZLMWSNRHOYVZXDZ");
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.197987961988);
    msg.setSource(50432U);
    msg.setSourceEntity(253U);
    msg.setDestination(50808U);
    msg.setDestinationEntity(167U);
    msg.source_man.assign("CYFKAWRZUWOKUWLQKHLITVILDQTQHRYEBAHPFKBRNIJOFAGZC");
    msg.dest_man.assign("FTZZHKUPTRPKBYGBJRQYEQFUWNDKJIHAVCPGTKPOYNUGMXQHLRLGZJKNCQHCSJZNFPDXNWAMJOETLCDHNYSDLOTBPPEAIKVFSHTVXOXJEMWZIJCZHDDVWJBTWVDDMRKKAIMLUCAVKBJPQYNWYHZAWECRSQXYIOXHEWRSYZZKBRSZSNEOQUAIGFULOGNAMEOYGJLFRVGDESWXBQWRMTAIQPTSMUXDVCCFUPVXAFEBGLQXIIU");
    msg.conditions.assign("XZPRNVIQAEUWSAZNLLKVGDRCTFJIFYRERCWTMQDSMORJNUPJJUNNEYXVGBTCWUHCVBHXXKEMWOUWAGZHYYSHTTMSAPYQDJIFICOCYCBQLINXUILLHCAFDODUBPKYAPIAVTCHDVMMGOVSXZHXDMQADBERHTGGKNEILBWTBFQOOMRWJFTINAJ");

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
    msg.setTimeStamp(0.796818294913);
    msg.setSource(20410U);
    msg.setSourceEntity(222U);
    msg.setDestination(42006U);
    msg.setDestinationEntity(179U);
    msg.source_man.assign("NASGEGBFKQYCDIOVEHALXAZKLIDEPORWBUZINYJPNTROHWEDPGPJZFLLXHWBQLYDTQTUAAFQMONSJVKECAYCJXOLFMSQKETSWVRFMAEQTOPQXBBHJPMIWEQAW");
    msg.dest_man.assign("JRNBFMIFYVUHGDDZJLTUKYCHZMONPBBKSMTGFZJVSIADBIAYARORQQXHVFSAWKUKQLEXZUNHARWTRVCESXCSKLBJTJQWFXYHXQCQRXKCHEDVJCLTTFEWNVWHYHZTTNLDJZANNPLQLWOCVQMPYVEFGCXPKPNAPEOHVIODBUSBFIPXVZLORLRSOUGGWPWWMMEBUBROSBYFYYHGZUMPCUIZAKZGLGSQXOKKMDPJWCD");
    msg.conditions.assign("SHANSPJIDXFJBIZJKYOAYCBFOEUYKCIAGJFOZWZUEXRNRAPBRUPCEUHFZCQZNZQPXIPUVLXWAKUHIMLNCBRLCBRCSTTETYPEADTDOPNWRQGRDSJGFMBAYJKQWOITMIGIHWHJRVZXTVVGMWXKIC");

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
    msg.setTimeStamp(0.6386874932);
    msg.setSource(48152U);
    msg.setSourceEntity(39U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(232U);
    msg.command = 132U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("URMHOWLJZAUNKESJSUAARWWZDVIDCBPIGGFECZOOEXZWQHFNYZHUYSKAJYZRPPCEOVIHBTQPXZNLFEJNVKKTWUEIELGQVMKXWVCOAFLNRGIROPCFIFQGLJEWNBVXUTJCJXFTDRLPZHIAJBOVFCLTTP");
    tmp_msg_0.description.assign("YMLWHDCZJEYPGBSDDWHTHKKJXYAPWBWICRFSSTXCFABGJXQYRDAKQLFHAROIHVXDWQGSFRGRQBJNJDZGMHANZEDPTEFWQVAXRRPEMHVEOZUNCEORUEVTXSMNBHBDWTVTQLPZNTYQHUXWLUCMLDLEWUPMVIKLPBMYTYUCUYHZRORSIPNZVLMUXXZWCBLJGFLIPPGSAKKOICSTUZQBKEJOKAMTIFNBDICJJAIQKOYSA");
    tmp_msg_0.vnamespace.assign("YSGJHTWARYZXLUXLDUIDZWWYRORFMXPPRNWSHTYQQBGGKFUNBSAXHEWFYTBCWEKLOMIVKXWKUBCIYCXRJSYJEIKNBYUVEZTDQNEKCKBGCXDQANREFAFHVZYM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JKRESGXVUOZUFSPYGWJHCRIGGVQFKFHHBRGVADLUULWYNMQVRMOVAHXCATOQZZZHFEMIGNPPXCJNGVDXRFCTQSTTIOPJMSQDIPZMYJTXKGNTXITWRDMECICQTMNPJLOINWNCLSSAXOPSWEAVIHKWIKGWEOSJOTJWDDJQFCYCUAMYULXEPKZAHSFMUHBUGYUEQBLL");
    tmp_tmp_msg_0_0.value.assign("OZOMWHPRERVONINAFLDXHPIGLWSBGRDYJTNKVQQFQFGEJHPZVFEOQHFOPWEXWBFZABGNVIPVGAN");
    tmp_tmp_msg_0_0.type = 99U;
    tmp_tmp_msg_0_0.access = 48U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DRZGQORZIGBWPYAFAQFLMXLGWNPYTYRCHUYZAYDUMSQAMIMQHEXEVZYFXWDGYCTHWETLQCXNUOPUDNFADQJHPWKHLWRVBPGOSZKVRBICJAJDEFWTPDZVRKJRMROLAICTNJSDNSTUNJYBMCAMGYUPRXZOOCEJNTDSNFUSGL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NGBIVZGIFXEZARMUNTAGKRYMICDLXCCJDSOCAKXVMNOQTZZIUBBKCCYWRPFCWQGMZKGKUZFNHKYQASDYCZXKDVQOMHTPXGVDDHTWESJNLOUG");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.890419771158;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.0985994519599;
    tmp_tmp_tmp_msg_0_1_0.z = 0.582343903489;
    tmp_tmp_tmp_msg_0_1_0.z_units = 22U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.846568110438;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 223U;
    tmp_tmp_tmp_msg_0_1_0.start_time = 0.689976408287;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UHWBGIZIWDRXCWZTWXIUYEKVJBJXQBDEBTUJZJRXMASTNUIYYLFQEILXEEPCIZCGNKOWGCOJTMZRMQRDHYJVSFMSJQZWZAYEUPCBGVMZRXUOPDGQAQLXBVCDYVUVLHHLGSSOTWBWTXMONSKOGBHNILWEYOQKBCRASLFFRTYPJHCPVPHOADJAMXEDYLKFQUDNTRFFTTGNMGNW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::NavigationReset tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::TrexPlan tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.reactor.assign("VYJMBQCHNQHEAWZJIWGKSOHBACBRVIIBGGNZYWFIKTYXTFRKMBVJKDLUZAUCXKPDWVQNGGUASZPUICAORTGDRSJEVHKTWVPFCSRNTLGZCOMTUYBEHMESZCQQVYXNJYSZURESYXSEM");
    IMC::TrexToken tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.timeline.assign("EOSVXCGGNBJQBEILQFRWJIDCEAYBXYBHTYHPRWLHZTXYWRASAVTRUVGLJBFWFAFMOLRWRVHEHKRC");
    tmp_tmp_tmp_tmp_msg_0_1_2_0.predicate.assign("PQJEJFAGNRWONZMFGPDDHHIZZVEQOZZOQPDVYKBNDLVXMWQFXAKBJDUMQKNCHTUDVXPSMAEEENJBPYIIJICWRVTIPAYSETDJULVYQWQFCZIAUCGSZMYQQUZBMLYFVKUJTUFCSXBSFRXJTCBXRUSTF");
    tmp_tmp_tmp_msg_0_1_2.tokens.push_back(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.882577940933);
    msg.setSource(10313U);
    msg.setSourceEntity(29U);
    msg.setDestination(28335U);
    msg.setDestinationEntity(1U);
    msg.command = 201U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QMLMPJAYUDPUXUOAZMUJLNPFTHTOVJQMYGDNLGYHZDGONRKVHZWJZAQCGMJBPXXVMEVKSQMNRSKEWSQXAJDBTUDITGKADXFFKQTFFOIARGZJBLCEBIHCBCZIUWSQOOWOXORAFKWTRYEPPTWCXCOYBMIYZVHEXB");
    tmp_msg_0.description.assign("VWZUYZGDFVNXWHZEEDLUBGQCDVFOOZSJOAPYONKIAPNODUVLMWOLEWEZKTNWMWFVVAICKYIBSQUYEWBZBUCMBHLMTJAZKKMQDCAVZYPOHOBGSXDTBJCVRNMUKLEFDFMXFGMPRUARRJGIVWCSWTZZQWHUXHFPRT");
    tmp_msg_0.vnamespace.assign("LURLEPAGQEFIYPCTYIRIZJONODWHIOAQRQHTZBRYEFNNSVSXRSZMLJXSNSBSGTKHPNJXGRUOBBOTEAOGCKBCHXJEISBABLUHETRHDGKXLGTEYZWKNCQWYVICZOAOM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MDKLYBVCJJAELALIMYLCHNVSZWVXESEHPRRRPQJNADQJFKRZINVHTUDHXAEQABMTYANUBVQPWMAMPYSRPOGDZWTMWGXVNRJHTZQYCOAIXQHJDBLKSTUKUYIEUATXLDPUVQAKMIWUGDMONFFLVTNEJKEKSBYRXXBJOFWKOPCQCZLPDZKQUBPJZUP");
    tmp_tmp_msg_0_0.value.assign("THNKUCBJGWONRAEYMHCEZVLCGJSZJSAGBMOMVFXAJPCPACQTWVMRAPNKXTOBVYSTRRZGCMQPOWFIJJXYBUIZSQMQCMRQYHPGKNUKGPOUFYLVZWVRMPEXLSNIKBSDHFWTNXDOTUNJFAPVFDTWFOFZJIEVEONPYWEDLYZMDHWEKYQZHUKPKZJXLTKELIORXIGBLTZTSRVGHFJ");
    tmp_tmp_msg_0_0.type = 12U;
    tmp_tmp_msg_0_0.access = 83U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YBYQMTWDNPZWJEKHRZEVFSCABUCQNZWPGRHQMZAGNPEJQIQDAYATLRGRDNSVLDJYBILAVXWOXGWMXKNORAMEIPMRBTODURDYUEGYILPFKFOUIUYEONTVIMSJAJJESRRIOBXNYZTZSHTKHISFPCUCJBUUKGWAKSMSMDHQUZDO");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RFALPOUUUXKUGENDVRNTOIDONVSJBSATXYZQ");
    tmp_tmp_msg_0_1.dest_man.assign("JBZNGFQKPRTONUSONDBKVVDWAHUWSULRZNPSMCMYLYIUZUXBOSIMTOWMORRXFNCVCRHDYAFNUEAFSNDZHIPKFVJZQATEEUJUJKOATGYBJTWMAVICAWZRWGYAWZCHRTESIPLXNDBDSFAISQRNKTXMDLFEYEEXQIFBZMYCYKQHXGDZD");
    tmp_tmp_msg_0_1.conditions.assign("DLDGZWOEVKORQAFQCYHICMLZKAJCSUEBRLNCGQJNPUSHYSIHCNDNDKXEFFSORGHXTYCIQJVFZPHMXGFSBKAALMUPIOUFKBOVRJISPQXZMUQCLJUQPEJVVNRWOSAWGSBHVZWE");
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
    msg.setTimeStamp(0.493509319891);
    msg.setSource(58886U);
    msg.setSourceEntity(94U);
    msg.setDestination(21091U);
    msg.setDestinationEntity(153U);
    msg.command = 86U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PSGLPCCFYBZTTVNHZUYZXKCJFGGUTUGCQBILTKYERHJICROZXQSAALSMRZQZAAUVSZMRJXHECURXCMEOBJOIUDKAFVGVFQDDOWZWFHVIRAVHPVMENPPRJDENWWFILSONYAGGKVWN");
    tmp_msg_0.description.assign("CUXSFCQIKMJSPYSQEYVZXVVORAQBGORWXQGLBEQEVOHPTTZPMNZKHURDD");
    tmp_msg_0.vnamespace.assign("JAMAGMBQBESYGFLKTIYFHSWWXNXXRKEHDFHRDBBJCDRARFGWKPVXDNTBOBOEVVFBZJORNEEMSQYBDMZARUTUJPPWTHQNGQHSTIZZSE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BCPSBKBKVYNXNLRQFYJSSJNTOSZPEAERDAUGRQDWCOCIIDMEGVXMHUFYPYYUYWEUFQHFIJDJZLCHHUVCHJOQSBZIMWKLKCEZUVTRGCRACLKKUXJVJISJMYF");
    tmp_tmp_msg_0_0.value.assign("ACZBVEDFPNHMHPKNGJGYCORQYWUQFXOVCEFSZPKZWNJBTLNMBBGCRRYUOIPOMAWEZGAUHQMIXQXEWQHWJVITHQEICYAHNJKZNUCUGMBCXINBWHCDIEGBAJLPUXLHJTBMQDGOMSIOXRUKESHONAPTKGAJZFLNILRRY");
    tmp_tmp_msg_0_0.type = 126U;
    tmp_tmp_msg_0_0.access = 175U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SUBOENHOYJAOOQMZZFXALNHWGEOKFBFTBHGVZEMKTJKIKBGVBBKBGNDPCFADEUYCZQSAEWXPZXMCWLCFHAWBJHXURWFSCQDJANYXVDYVUNXRMIZBJCDILKZPTTTPGYDWGAZIOVOMQTXRTQWKUCAOETGUCGNOHJSQDUFPRICIQLWVBZRWPNEQWNLIJPXUDLSDCRXLMRTXPFLIVANYSHMHEPEUFEHPJYYOAGNRKU");
    IMC::GroupStreamVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.116134500103;
    tmp_tmp_msg_0_1.y = 0.801731473274;
    tmp_tmp_msg_0_1.z = 0.0509467182858;
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
    msg.setTimeStamp(0.0571975799663);
    msg.setSource(17922U);
    msg.setSourceEntity(12U);
    msg.setDestination(4349U);
    msg.setDestinationEntity(225U);
    msg.state = 79U;
    msg.plan_id.assign("YDEWFTUHXLGBTIPPNYDMDSEHWRFESXGRJCWTEWKCWASOZXCMQQXSDUGUIMCYZOYESLBDTMYOXYKAELBZZPOCASUWHIBQLYAHWQKVUHNVSEIGJJGMDWQBNUXXOLOBIQZTRVANQTQJFLKPADIWKJAKBWFNRHOGVNJNCHTEKPFGRESOZFIKGNVNDUZAFXBRCLOJPZPJIIBUIZRKJ");
    msg.comm_level = 141U;

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
    msg.setTimeStamp(0.863257850689);
    msg.setSource(21620U);
    msg.setSourceEntity(103U);
    msg.setDestination(45272U);
    msg.setDestinationEntity(254U);
    msg.state = 129U;
    msg.plan_id.assign("PRWPVPBNHHERGLSHTYEOIUEHLZHABEVAUXJNOCKXFOXLQZLJUTFHZYYKTJTRCMTMVRZWNDULCWQQXFMNSPHOSPUDPOVGNWKFOXIBLBPQTRYBZCLUZRGBZBFASBXKUHVDMKSMSEYZXGQCDVJESGKJBQWZNACMRGMRWKHIDOQDOYPMCIVGMPVGAIFIUPTIVDFQINE");
    msg.comm_level = 208U;

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
    msg.setTimeStamp(0.544641063047);
    msg.setSource(11165U);
    msg.setSourceEntity(1U);
    msg.setDestination(57854U);
    msg.setDestinationEntity(8U);
    msg.state = 141U;
    msg.plan_id.assign("NUSKFRVUAWHLHQFAKHXGPIDQLNSWTEOCHKYLMSNLZBFVYSHMELDNGOWNCOEGDMPMFJKEOBWGGJCLZYICREXJFPXUBMXXTTWI");
    msg.comm_level = 83U;

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
    msg.setTimeStamp(0.326367038751);
    msg.setSource(34258U);
    msg.setSourceEntity(178U);
    msg.setDestination(47690U);
    msg.setDestinationEntity(14U);
    msg.type = 208U;
    msg.op = 131U;
    msg.request_id = 36381U;
    msg.plan_id.assign("APMQWLKAUVWZCRLBYPMGFEBXELNXJMSEQYHZACWHMOTZVQBCUYTBOFKTAZHCMIVBDFA");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.132963698468;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CMJWBDBHLTTPKMB");

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
    msg.setTimeStamp(0.770289273139);
    msg.setSource(57218U);
    msg.setSourceEntity(196U);
    msg.setDestination(33692U);
    msg.setDestinationEntity(3U);
    msg.type = 83U;
    msg.op = 9U;
    msg.request_id = 15974U;
    msg.plan_id.assign("CVCEBGNQGHJDLGMUMHMZIEZMLNJOYZKGIHGBKACROFUFEUIIPLVPBVOUZEJJVNTPPTFGSEQBPLDLTQCADXZIMEKUMGWFYVVXTQRRHYKATRLVAELQJXERPLCKIKYWIQKMSUHJKMJIDUHAZAAYHGWDCJAY");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2097491651U;
    tmp_msg_0.value = 44U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OCSZNHZPVYKTVSCULBOBQKGUWPIJRCTVJQDBVHOBNFSUYGZOJSNCEWGSNFLLFDAUHPFLSWRRXAHJENESXGRGII");

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
    msg.setTimeStamp(0.36109719768);
    msg.setSource(5612U);
    msg.setSourceEntity(153U);
    msg.setDestination(34475U);
    msg.setDestinationEntity(245U);
    msg.type = 52U;
    msg.op = 133U;
    msg.request_id = 20580U;
    msg.plan_id.assign("AXREXXWUCSPLPWUMOIQSAQAQFFOTKCWBZKBHVQHZRIEEJRXISNJOHRDVAIMSYLCUMVMUYQMFWGBBLMGYDRWFYSYTTIUVLQOCJQSDNMPWDTNVAFJNDPPWCNGYIIN");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("XCCMFTKHUCGXVBRIOZDZHAFRFQODYIKWQAJTHGMXJJRDQICTAJKGHUQMTELXYSPLFIBLOJVLBUBMPPSJFSWCEXECWNJNIEKOQCNLM");
    tmp_msg_0.htime = 0.934871260686;
    tmp_msg_0.lat = 0.151427027277;
    tmp_msg_0.lon = 0.644886888594;
    const char tmp_tmp_msg_0_0[] = {-55, 80, 92, 8, -90, 109, 89, 34, 86, -88, 31, 52, -44};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XDTNTZQHNIILENQTKMCOKPUFGIWJBVSRFBFFZVDKBQNDTFSBUNJGOBKAFOJFPESJNZEJMSOOATNMTVAREYPKEUHXC");

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
    msg.setTimeStamp(0.0691057966617);
    msg.setSource(36614U);
    msg.setSourceEntity(6U);
    msg.setDestination(42074U);
    msg.setDestinationEntity(60U);
    msg.plan_count = 34671U;
    msg.plan_size = 3875664117U;
    msg.change_time = 0.7577627141;
    msg.change_sid = 58675U;
    msg.change_sname.assign("AQWFZXOYKZGVPNGEKTAKRJUJFLULQIDDGIQWOSGBMMJURBOBXOQVFKPTKEDVKOYAIGLZJYNSNIKDXQZSCZUSJRFGLOZUZTEUYBHAMSAADELVCLUOXAOFONNIIYSARINXTQJEIZHAMHGDVYPHVMJSHETFSQYMRBWYMCXWDSESPECTXRJUFBQLBJ");
    const char tmp_msg_0[] = {-79, -18, 115, 87, -120, -74, -5, 98, -86, 115, 112, 27, -11, -88, 4, 16, -41, 84, 45, 19, -8, 58, -65, 44, 6, 17, 125, -53, 86, -22, 50, -17, 19, 54, -22, -28, 118, -100, -15, 63, 3, -124, 46, 90, -116, 95, 62, -18, -46, 92, -25, -86, -38, -88, -114, -72, -114, -29, -80, 30, 33, 120, 28, 86, 105, -84, -51, 7, 70, -59, -67, 64, 56, 72, -28, 86, -74, -17, -64, -36, 56, 98, -90, -4, 120, -27, 16, 36, 16, 33, 109, -10, -1, -87, 83, 50, 57, 101, -112, -110, 79, 51, -41, 122, 104, -100, -13, 116, 47, 20, -6, 36, -33, 114, 47, -126, -39, -95, -51, -19, -119, -12, -107, -2, -87, 68, -122, -65, -77, -14, 6, 104, 57, 21, 97, 59, -77, -114, 10, 17, 10, 116, 48, 93, 120, -27, -103, 51, -21, 33, 46, 118, 69, 13, 107, 46, 103, -17, -98, -77, 99, -5, 59, -61, 4, -59, 13, -111, 118, -28, 96, -10, -89, -93, -73, -35, -83, -40, 119, -57, 95, -124, 12, -104, -8, -80, -80, -117, -80, -63, -64, 78, 116, -9, 69, -57, -93, -96, 64, -54, -112, -42, 62, -3, -32, -102, -46, -57, 33, 93, -84, 6, 118, 42, 89, -128, 95, 45, 1, -60, 67, 26, -95, -19, 15, 89, 100, -124, 85, 118, -39, 120, 109, 52, 24};
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
    msg.setTimeStamp(0.313411242847);
    msg.setSource(39747U);
    msg.setSourceEntity(147U);
    msg.setDestination(28502U);
    msg.setDestinationEntity(136U);
    msg.plan_count = 17001U;
    msg.plan_size = 2110908045U;
    msg.change_time = 0.639163293514;
    msg.change_sid = 25729U;
    msg.change_sname.assign("HJCTMDKDJYAUBTSLKQUZSWHWCLEECTS");
    const char tmp_msg_0[] = {96, 76, -14, 115, -4, 84, 102, 31, 62, 114, -56, 69, -124, -28, 40, 94, -87, -66, 123, -90, 39, -81, 126, -45, 75, 29, -26, -127, 110, -99, -125, -45, -46, 69, -91, -26, -22, 117, -19, 59, 116, 110, -1, 29, 12, 22, 90, 37, 119, 53, 22, 8, -67, -1, 97, -7, 35, 57, -111, -76, -77, -75, -80, -86, -108, 30, -35, 57, -123, -26, 84, 113, 119, 91, 108, 96, 86, 72, 42, -90, 35, -35, 76, 73, -112, -56, 101, 45, -67, 116, -25, 14, 51, 92, 102, -50, -61, 10, 42, -1, -54, -29, 42, 100, -22, 55, -63, 114, 1, 57, -23, 126, 36, -92, -51, 76, -24, -54, 71, -72, 8, -35, 24, 117, 111, 21, 42, 68, 118, -7, -73, -80, 19, 12, -91, -82, 50, -104, 101, -58, -120, -33, 107, -123, -28, -24, 25, -99, -103, -70, -92, -55, -108, 92, 9, 42, 74, 76, 56, -95, -15, 86, -33, -82, 93, -118, -24, 13, -114, -16, -1, -8, -103, 82, 88, 44, 119, 50, -71, -108, 16, 41, -93, 30, 21, 77, 45, 11, 80, 89, 41, 100, 43, -12, -9, 66, -23, -44, -95, -66, 21, -80, 120, -30, 58, -116, 96, 71, -36, -15, 99, -100, -6, -77, -103, 40, -63, 88, 70, 102, -99, 89, 100, 77};
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
    msg.setTimeStamp(0.787985954628);
    msg.setSource(3821U);
    msg.setSourceEntity(219U);
    msg.setDestination(29825U);
    msg.setDestinationEntity(209U);
    msg.plan_count = 16948U;
    msg.plan_size = 2285630559U;
    msg.change_time = 0.524611560591;
    msg.change_sid = 25879U;
    msg.change_sname.assign("MYLIZZVKPEINDRUGTSZXYXZFZBOUTFAVPCCGJHMHGREGCLTBTPKPNWSFBDTGSWRXYOAOMQPXBQAKVVBLUOLECGAFDPVYCJHVGQQOSKZGUYUWRXPAKKTMMHIRGHEDIMHIWGLWPWVHXAWVQVYFLHMJNHAOQWAAWRKQCBPEFVOIRDBQCNJSTCCOKSUJRFJBZWSDXBEJEELMDINJLYCHRTAEDNUXIBOZZUPELKXDIZRTNQLFFYUSNUTSXQNMYI");
    const char tmp_msg_0[] = {-78, -51, -12, -11, -24, 19, 83, -42, -5, 20, -20, -128, -76, 105, 99, -30, -128, 66, 70, 116, -22, 107, -62, -38, -98, -43, -76, 114, 40, 72, -95, -62, -21, -5, 81, 7, -110, 76, 38, -64, 108, 93, -125, 92, 29, -107, 16, 82, -76, -29, 31, 112, 27, -92, -116, -90, 110, 111, 85, -15, 72, 48, -86, 40, 71, -77, -57, 14, -127, -2, 46, -22, -45, 93, 32, 40, -32, 113, -60, -93, -108, 25, 73, 50, -60, 43, 9, 76, -116, -105, -49, 47, 110, -53, 9, 92, -67, 64, 76, 2, -63, -98, 58, 65, -70, 76, 21, -109, 45, -118, 118, -59, 53, -122, -113, 57, -114, 102, 4, -58, -24, 8, 103, -45, -33, 27, -96, -87, 93, -111, -126, 33, 34, -109, -39, 64, 29, 48, -98, 33, -43, 19, 48, -86, -70, -82, -20, -22, -44, 112, -30, -79, 71, 62, -70, 114, 4, 84, -4, 5, -117, 94, 67, 56, 39, 113, -12, -23, -66, 109, 120, -53, 123, -90, -123, -68, -31, 77, 124, -72, 26, -66, 38, -10, -58, 113, -21, 49, 105, 124, 108, 77, -95, 6, -60, 40, 117, 97, 28, -40, -79, -106, -30, 1, 7, -52};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AABMBZQYLMGJFATMXFPCCAUFKLSMPEVYWUNLNQCUOZDLARGSXVKZWQRGZRTOHPWPMVAJFTNHUTEWJOQQCWYSWHJBGDNAOMUYJCDVWWEDZONPTPVYITSPJGPERETMSQYUXBKGIFILJVLDGQABFRIEXZQKINETPSVAKLZMDSUDHYQKEHRBCXRRXJILOGWDYZXKHCNBVLOCZFHFOGOUMSIDHGS");
    tmp_msg_1.plan_size = 11741U;
    tmp_msg_1.change_time = 0.631211504344;
    tmp_msg_1.change_sid = 14391U;
    tmp_msg_1.change_sname.assign("VMVFTMPQMGMYUJYZYHGLGNEVVBUZXNQBGHFEBXKWXPHJMCPRIAJNRTBWNWUVJOUGTDBJAMKLWJWWFNVRXEYHZEZEDSTYFTZMWFEASOTKKQEWQGDXZBODLVEICFVVRGSLRIGSIEAHTIOPUQJJDAXPRSQPKOK");
    const char tmp_tmp_msg_1_0[] = {-101, -110, -30, -70, -124, 23, 85, 126, 123, -124, 73, -10, 14, 37, 18, 95, -8, -84, -92, 64, -127, -24, -118, -65, -99, -90, -101, 78, -106, 27, 48, 38, 107, -51, 117, -66, 125, -100, -43, -20, -79, -37, 123, 123, -60, 28, 13, 43, 20, -42, 54, 28, 116, -30, -100, -101, -89, -61, 69, 83, -80, 66, -9, -14, 95, -54, 80, 34, 56, -5, -127, -84, 81, 40, 27, -119, -27, 125, -88, 78, 4, -21, -83, -98, -63, 51, -19, -77, 13, -104, 11, -78, 45, -128, -75, -65, -96, 58, 7, 82, 3, -97, 119, 100, 70, -69, 116, 58, -62, -68, -58, 124, -80, -126, -98, 84, -106, 0, 102, -120, -76, 91, -93, -25, 6, 38, -69, 8, 60, 46, -14, 15, 28, -55, -8, 114, 19, -47, -14, -11, -61, -100, -121, -126, -6, -73, 80, 107, -13, -97, -69, -91, -58, -27, 19, 108, -63, 77, 121, 3, -128, 98, 106, 112, 85, -42, -1, 58, -88, -34, 35};
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
    msg.setTimeStamp(0.272576161056);
    msg.setSource(4014U);
    msg.setSourceEntity(76U);
    msg.setDestination(228U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("UDHWPXDTENXUNTGHKENUVTFDXODASQRKLVBLSGUPSVXLPKDZGSQVPAEUEJBTRWKQZDZEYICOTZMMWLBZIXAJILHIPOVPGAMZJYFMXTRWABKDHMIICCRAOCESFWHFLEQCSACTNUKTVXBGFORXRIYYSACNUYNNJBIDQYPMCDWFAEGRZLJOPZGWRLXMXPCNVDVHFZJUQOCGLSWYHWKPONFLENRAMFBBGHUVOQZQRGTJVW");
    msg.plan_size = 22278U;
    msg.change_time = 0.855950669368;
    msg.change_sid = 57709U;
    msg.change_sname.assign("VYPDBOPXPHBTQTQGVVJYBALDGZMWNKEYAGNOLTEJUIUZFCFVHWBYHHJOZPBHXFESUGAUOBMHHPCZOVFMPRAAXDMAPUJNTDXXTHCOTEVQCKSLJZIRYUIKGWAVOTFYLLRDNGRLHQNMFKNEZGIMLWYCNCWNGMBVDZMXPKNKRIFSNREWJQDAOKXXDUXRUKIIKRKGVTBAWJRSGEFWSSCYWRPSSZYQIIFCJSDWMLCEHATXSVQTMU");
    const char tmp_msg_0[] = {-23, 13, 10, -110, -10, 3, -30, -79, -86, -89, -108, -109, -124, -77, 97, -76, -55, -108, 24, -128, -34, -12, -117, -108, -81, 101, 45, 9, -61, 81, -106, -55, 18, -115, 55, 0, -96, -88, -13, -94, -57, 17, -63, -110, 117, 50, -16, 10, -114, 115, 47, -63, -43, -125, -88, 109, 97, -46, 13, -83, -52, 23, 98, -40, -83, 17, -16, -22, -109, -114, 97, -88, -95, -7, -20, -45, 88, -4, -5, 117, 15, 70, -18, 68, 109, 69, -75, 39, 105, -115, 126, 22, -31, 113, -116, -111, -116, -108, 64, 120, 37, -8, -52, 84, 51, -22, -50, 66, -39, -39, -108, -54, -107, 78, 52, -41, 85, 50, 67, 33, -61, -114, -39, 75, 63, -13, -78, -74, -29, 122, -64, 104, -108, 75, -70, 92, -20, 8, 111, 74, 0, 33, -29, -27, -10, 1, -68, 44};
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
    msg.setTimeStamp(0.577445387249);
    msg.setSource(3146U);
    msg.setSourceEntity(62U);
    msg.setDestination(26294U);
    msg.setDestinationEntity(210U);
    msg.plan_id.assign("DUTCVPGRBWFJPYMJACUOGBAIUWQHEPLMQUXFTQBSCJOZAVQQRLWHKNFLNZXWDUDXVOSCZLSZIRZVLTQMOACJUMPPDNDUEIHIVHOPG");
    msg.plan_size = 36296U;
    msg.change_time = 0.0559214595578;
    msg.change_sid = 22757U;
    msg.change_sname.assign("JRBPFCVOZPLKGIHOCBSRVYGKSEKEGZEVTEUJMOCNSOIHCQPLTLFEVMDTRGSBESKXMWQHSAIRDYNPATPGNQORWHEAJXCYMVKDX");
    const char tmp_msg_0[] = {-5, -88, -61, 96, -69, 26, 81, 70, 4, 24, -58, -23, -4, -77, -57, -95, 118, 91, 34, -8, 64, 39, -113, -124, -29, -84, -74, -47, -48, -102, -84, -60, -28, 67, 8, 62, -12, 112, -87, -5, -82, -3, -93};
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
    msg.setTimeStamp(0.291138211789);
    msg.setSource(43477U);
    msg.setSourceEntity(109U);
    msg.setDestination(54444U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("QOUAFZTVWQZTWDHOVHNROTNTAXOZNDUAVFYNAMHMQPDWNIACEZVCQDPPDEFJOIUQUWHJHYXMPEMIQSBHHMBSWSPKSIFNPMKWCJGEGGXCJUTWFGOYEELQNFGXKLAPLMYSCJGSEHYCYRLPDVXHFLBAYKFRSWUUMJLRDOVTKENVPQCJFSBLGIIJUIGKXXLDCAZZNMBOYGOZTXBK");
    msg.plan_size = 29045U;
    msg.change_time = 0.865111836949;
    msg.change_sid = 40524U;
    msg.change_sname.assign("ZGHSRMZIAPAJFYGPVIWEPATUHXNYCZTTQTDXLMUKSNIAYTJWDIQCWKSHBLLSTSOYPDCJQZVERTWHQEUKQSTNFVZWBHRCVHAEPEXYOORJDYWFRUUFGVSVVLUKMMQJKBQMRXKBDBHMJOOINFCPGJGMFEALWTBTIJZKZVBMDAOCUXXRQFFEVODNPQAHREDOZRCUXWYPCPOAJLRUIEIUOJWSVHNXGMKZLCKNINHSNBPDLQWNYELGSXFGIXFBAZDMG");
    const char tmp_msg_0[] = {53, -128, 51, -70, -86, 46, -48, 106, -75, -95, -2, 52, 76, 7, -39, -10, 69, -79, 45, -2, -30, 100, -39, -18, 72, -31, 62, 108, 68, -97, 9, 96, -45, 21, 126, -57, -19, -27, -63, -12, 111, -125, 61, -87, -81, 101, -6, -3, -25, 63, -18, -124, -17, 102, -13, 43, 37, 90, 98, 89, 12, -17, -81, 121, 58, -77, 77, -14, 120, -70, -87, -68, -116, -23, 19, -14, -36, -109, 19, 82, 2, -95, -27, -52, 27, 28, 47, 110, -52, 91, -98, -12, -58, -43, 59, 97, -32, 1, 10, -91, -45, -84, -84, 51, 68, 124, -99, 83, 27, 85, 112, 75, -100, -40, 28, 119, -75, -84, 67, -13, 9, 90, -128, -121, 89, 59, -23, 109, 126, 27, -19, 75, -37, 61, -20, 115, 17, -21, -59, -91, 46, 79, 101, 15};
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
    msg.setTimeStamp(0.677821879909);
    msg.setSource(44664U);
    msg.setSourceEntity(246U);
    msg.setDestination(14227U);
    msg.setDestinationEntity(142U);
    msg.type = 194U;
    msg.op = 106U;
    msg.request_id = 45898U;
    msg.plan_id.assign("PTLVUACNOPZYOMXCXUUPZHSFCRMHBNKXFOJIAAVNRLVZAFDGFUPBFJWMCUTWETVENYSHQGIPJMSOKUGQWLMSTEYCFUADYXWQLJWYSKKRRZSPPGMBQOGRBTOF");
    msg.flags = 14066U;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 175U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MPTWKNTGQQWRJKVSWNOVYVZOLOHMWCFYJAGZFQDLCUVLIFPYBSWBCYZNHRFJDMCQOXSQTUZJWUSKNTRYCODPSMELWEAKMBOINAIWLQPUXCIZYQEADUVUUSNJICVSLDYKZDGVOVXCMTWJFAUVFAMPJ");

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
    msg.setTimeStamp(0.424812228956);
    msg.setSource(26196U);
    msg.setSourceEntity(217U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(121U);
    msg.type = 185U;
    msg.op = 25U;
    msg.request_id = 64634U;
    msg.plan_id.assign("ATUHCUPPWIVSRGQCLFKRMQGLWAKLVLYJIZNKHFUKIWGZUMXHDNEUQRFCYX");
    msg.flags = 47008U;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 217U;
    tmp_msg_0.entities.assign("DBTERGNTTBGJEHFUXMPJOTABAXJWCUAKSJSLVWAYJDTVGOLSYYEFPWZWDIUZCPMDYIRQIPSIQGTAM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LWRAVPCRUTIJQRMZFJGXSDGWWVSOHFFQQCBVEXKOPONQHHVUSMJSNGHDBPZRMEOYLVAPYMYORKF");

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
    msg.setTimeStamp(0.5703501993);
    msg.setSource(48616U);
    msg.setSourceEntity(66U);
    msg.setDestination(32066U);
    msg.setDestinationEntity(231U);
    msg.type = 4U;
    msg.op = 184U;
    msg.request_id = 32820U;
    msg.plan_id.assign("VJMRUTXWLZYUEIPTBXNBZYBNRPXJQKANZSUELYZXYMFKICJLRBHGWISHWKFPOLQVGZCVTLEWAACVMDDAPKSNJJCLRLXAVFFJMZIACVEWJRKBKQSM");
    msg.flags = 44537U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 86U;
    tmp_msg_0.plan_id.assign("YRPHWTEQECYMLZYSWMXWDUGXPVUQNGFPALZXIAJPSTCOUCSNWEXHIJMDKZFFCOCSZPJMXNVCODWQCZSOZGUBAJAUNTVLTGOSJBRFGRNHBCHQKTMMFBPBMPBQERCXOVYPVQOE");
    tmp_msg_0.comm_level = 49U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NVOYYNHQHTYSHAFRPOXSKTJNRIYIMFDDUURILTOKOEXFEKVMOBMJEHBVETGMARBEZEKQBGBNLMAHCSGBMBUEPFYVBTLJGZZFDZHRZKAANPWPAPQTNCHXUWSCZIAPDPTKWLXEJNSCDTWXFUJWKLYRDQYDWJ");

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
    msg.setTimeStamp(0.0900844691767);
    msg.setSource(40355U);
    msg.setSourceEntity(11U);
    msg.setDestination(16686U);
    msg.setDestinationEntity(249U);
    msg.state = 32U;
    msg.plan_id.assign("VHNKFSBODBAHUKQOXZLMGRINUEDLUDUQRZJNQAFQWYDCSPOWBLMRZAHEXJECWZFITVBIJJYINKZHPKCCVRNJIKXVJRGYMPEYFDYHZRDPEHTPTJPXASRUTLPITWGIFOSLWHUONFBGWGFMGZQXSJLAQBNRHGCEYLHMDESTIU");
    msg.plan_eta = 33308821;
    msg.plan_progress = 0.690551151483;
    msg.man_id.assign("BOQSCZZGDLPMFTIUPWJWQOLCKXFQVHSBPMNPFNWGTWELHEEOELRXNHMWLOBUEDHWFUNGMBOFAFFYOIUFDLDOSMBHRVUPNSMXUIZCJCWEWZQITQYRVBPJSNDTRRXKYJZYZBZKIATVNHCGXKQGCAMRHUVQWRXKZAGAYUKGYX");
    msg.man_type = 20986U;
    msg.man_eta = -1305801919;
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
    msg.setTimeStamp(0.175498698712);
    msg.setSource(9920U);
    msg.setSourceEntity(253U);
    msg.setDestination(31580U);
    msg.setDestinationEntity(53U);
    msg.state = 17U;
    msg.plan_id.assign("GWJFLUYIHGNOKSIJDNZBISPFJCYVOPUMIBEXRDILBQADSFPVBWHFWXPBKSZYXQFIROY");
    msg.plan_eta = -717917362;
    msg.plan_progress = 0.349676104171;
    msg.man_id.assign("LXZXKDZPCEAWGLTJPIFYVUQROANBSMESREDIWMGZRYWCITKMYVMKYRALGSBJREWJESJMOUJOQZDDHAXGTUSXURFDGOZRBFZPLNHKHUNPVI");
    msg.man_type = 40342U;
    msg.man_eta = -1928606945;
    msg.last_outcome = 184U;

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
    msg.setTimeStamp(0.167832554132);
    msg.setSource(17988U);
    msg.setSourceEntity(70U);
    msg.setDestination(46835U);
    msg.setDestinationEntity(115U);
    msg.state = 15U;
    msg.plan_id.assign("VCZDMLTIFOYHVTIKQDTLNWZNCAXINPBKYRJPHOOQJIJCFPZDPQRLEGAVHRIMOYSRGOZIDZWBAJVNCKMCSLNFOYGWOJDKCAASPYVLYGISSWFZTVBANEGBWLXBWUMBPOLCWXGFEUILAEMWABRHCNQBGHMYXNUHVOPDGTEVRBSBUEOWFAVTUDPUSKFZXXSW");
    msg.plan_eta = -1692427205;
    msg.plan_progress = 0.910279889142;
    msg.man_id.assign("GUOYNYZHKILQCXLFMFLIKGMZUKTBWHEASBXNFKNEZNLHYSXLPBRODEKPYTWBYBMMPHAQFITTRLJNOOXJPHYSXSCAUBZZLPLOIFWVUVPJOACAAIXBUMYDKVINTQDEWGQMQWIRRSFWWTIEZVQF");
    msg.man_type = 41156U;
    msg.man_eta = 1409253889;
    msg.last_outcome = 164U;

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
    msg.setTimeStamp(0.515411364947);
    msg.setSource(42828U);
    msg.setSourceEntity(46U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FZZXFFVOBCGWMQNEZUQHIJCFORHSBDYTNQBIGTQABHYJRKWGEJIPTLWNDHRBOPFQUCDVWDCCRTLYPTKGWEGAVDNBQBLHLBKQGVXUJHFUIJMKMNQSKJYKWYUXEDGUSXGZSEPOWZFLHZDCPINTCBFNFKADUXGMXVRORSAMSLFNJAECZWSRUTLASRESZIEVVRWAXVKPOTMUKMOMXRDUBHIZHDYOIIVAOOYZKXLLAQTGIJJHNMEJLPQMYPWVSXPP");
    msg.value.assign("YNXPZBOWGDYOYHLIHAIDBPMVYQAKEBGFVE");
    msg.type = 189U;
    msg.access = 119U;

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
    msg.setTimeStamp(0.614751548747);
    msg.setSource(11678U);
    msg.setSourceEntity(213U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(72U);
    msg.name.assign("FSGVYRBHWWLAOPY");
    msg.value.assign("YMEOZGNLSVTCTZJXIDQZHHERPNIRBGDSUAZJFSOVNAFGKDQXFZYCTHCZMWRJXBJKKZFRFHQCNUYQSLJIBVKMWHGTNUTCFLDIMWJYILBXEURKYATCHIDOMVWOWYUPBNPXQLPKXGUV");
    msg.type = 216U;
    msg.access = 102U;

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
    msg.setTimeStamp(0.918700851737);
    msg.setSource(25053U);
    msg.setSourceEntity(135U);
    msg.setDestination(38981U);
    msg.setDestinationEntity(250U);
    msg.name.assign("BMUJLFHLJJAMPIMPNGQKAWPBCMPKZJEDCCZOJSMNCRNZCEOXXNSVDHNNGRWTKLQXWWUCPQVTIGUKBFIKGHIOAASSZOWGOYNFSEICAPOAHAJQOZTGGGJTUHWOQSTFPSXDETMVIAVKWOL");
    msg.value.assign("QAWEDLDUDGVGMDOTOYBXRLSDTRAGERTLCHOADZXYHONRINZSCCBINDNCEFJTXGVIEKNRHQGTSFLNSXVFHUBSHMCKGCIPVUZVNZQYYSJVWAJZPAPZLPOQWKKUTYMBXRGUERUDEQIUPOQKHYWARMSXE");
    msg.type = 109U;
    msg.access = 109U;

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
    msg.setTimeStamp(0.0881658683933);
    msg.setSource(31782U);
    msg.setSourceEntity(89U);
    msg.setDestination(51845U);
    msg.setDestinationEntity(234U);
    msg.cmd = 220U;
    msg.op = 2U;
    msg.plan_id.assign("BDLYCSZPQOZTGPMAHMNDGCZUATHGMRRCPYEDEOHWVJPBNAMLBAFZQBSUWBFYQKURLRLXEUEFHKFFGZHSDZGCWWHFSGAVCCPIXDZNTAWXQTWWQGQHJEAVZLUYAEPNWIXNCP");
    msg.params.assign("BBUAAQKTQGFDAJIWYLRGIPPKUAYVHOFAGRPXTLLKBSWXOGJRFFJIRNVSODHDHRWNYLOEOCTCMMXVODVMCQZHENMQBMUHKRLKIIEWNMAUDKMEQCQYRWPDANLBQDBXSXIPZZOCSKCUCAFMLPUBOKZNJLYVAHCEIFFWDGAKWJUEJPWVIJFFGTGNVYEHENTZRZCSQDJI");

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
    msg.setTimeStamp(0.981544295121);
    msg.setSource(54669U);
    msg.setSourceEntity(133U);
    msg.setDestination(63457U);
    msg.setDestinationEntity(26U);
    msg.cmd = 244U;
    msg.op = 140U;
    msg.plan_id.assign("QHSFOMFXQMWSNIGRQGBRRFBWTTMZKXAFPZWSKBHZPBAYSRPVQWVWMEKZHFTGUVMLCIJGLYOVTAFTBOCWZJMQNUOMXKQVIYZCLNYPJBOCCTXWNXLLYFNPGHWIQDDBMMEAGONLZFUPWAJGEOQBCCGFIJDIEKEAKHSKJLUNGRSYUUHYNXARPZBIERDLXZDHP");
    msg.params.assign("ZSWJMKWDQXNOWXTBCPMJZBVSTXOCYKUDHHXRUVGXEOYSWDXBHVQMLHNLXRFCWJROOJAPUYYJUUBLFFZVNKSCLJREGTHEXIIXSRSEUFYAIM");

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
    msg.setTimeStamp(0.23598281588);
    msg.setSource(43073U);
    msg.setSourceEntity(247U);
    msg.setDestination(53216U);
    msg.setDestinationEntity(62U);
    msg.cmd = 152U;
    msg.op = 77U;
    msg.plan_id.assign("BAGIFBHKCKHDTFOTCORRCINUHUYZXACYUVWVSKSQBCHPPWLYPFGJDTNLSYJRCOGXWQZCKBJPKXESAHTTPNLMDHKGDEFJNCOSBNCRDMXAIBJFEZXJLQQVLWZSIZBBVMMNEIMYGRGQQIWWTRSXMEKXJBOGTOSYVFZGYOQEQJNELRWGVHFNXPIV");
    msg.params.assign("KEJJIAXPVSUUMMBDWJXOSKTPJKXQGOMEVKXOYORZEVWQXDZUNXRRALWFYQHHBHSDPQUOASONZMNAMUNTHEPIQBPBZSGNHUNVKICUEJPVZTSGSDHPCSFRNLFMJRWVAEFBBYZDXEBVUGDONQHCWFGYXCWORYLMUJJFCLVZLQLYTKDZFBIEEIQSZAFWIKHY");

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
    msg.setTimeStamp(0.842952052716);
    msg.setSource(51108U);
    msg.setSourceEntity(237U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("CNLGFALEICUJEFDABRW");
    msg.op = 159U;
    msg.lat = 0.398033088011;
    msg.lon = 0.796159876165;
    msg.height = 0.582428877998;
    msg.x = 0.838940294231;
    msg.y = 0.147499913947;
    msg.z = 0.754934260485;
    msg.phi = 0.758437011863;
    msg.theta = 0.190091772738;
    msg.psi = 0.924695729483;
    msg.vx = 0.490059937971;
    msg.vy = 0.275241116761;
    msg.vz = 0.961680369814;
    msg.p = 0.875720008357;
    msg.q = 0.450101919771;
    msg.r = 0.943187118374;
    msg.svx = 0.519764369117;
    msg.svy = 0.17417873827;
    msg.svz = 0.712561636965;

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
    msg.setTimeStamp(0.742045921531);
    msg.setSource(57102U);
    msg.setSourceEntity(127U);
    msg.setDestination(52311U);
    msg.setDestinationEntity(21U);
    msg.group_name.assign("AEHMEXKQGOGGOHNTEI");
    msg.op = 203U;
    msg.lat = 0.0917896953525;
    msg.lon = 0.802563037757;
    msg.height = 0.47113127429;
    msg.x = 0.697447347762;
    msg.y = 0.461469699168;
    msg.z = 0.256025618582;
    msg.phi = 0.736945063512;
    msg.theta = 0.0679108526144;
    msg.psi = 0.417513180032;
    msg.vx = 0.97565803857;
    msg.vy = 0.928003899247;
    msg.vz = 0.718246881677;
    msg.p = 0.732229847599;
    msg.q = 0.597026972584;
    msg.r = 0.135910676329;
    msg.svx = 0.140411598671;
    msg.svy = 0.0278535479988;
    msg.svz = 0.956613993317;

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
    msg.setTimeStamp(0.0724239211542);
    msg.setSource(20827U);
    msg.setSourceEntity(14U);
    msg.setDestination(34436U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("ECBRQEFMSFOFKNJTSXGDZMPCVEANXPUXVSCBRMAFCAHBVRJWJHOUJKPSAZVKWHTCQNHUQRGCDSOWKZUTHAXNBJIQUPZBEYMBNLLBLDZMSQYZPEWXYOWHXZBUCJVKRQASNCAKLTUTHEJYPFRXZDOSFLRFPKQJDLPIOWVHIAKRYGJWUVDLXBHYSCDWNMLQVSVQGINZILGVXMEUG");
    msg.op = 218U;
    msg.lat = 0.896073815996;
    msg.lon = 0.106136370336;
    msg.height = 0.82932650427;
    msg.x = 0.212984199869;
    msg.y = 0.166425484162;
    msg.z = 0.0927833238806;
    msg.phi = 0.0132022551941;
    msg.theta = 0.371213276609;
    msg.psi = 0.595556899571;
    msg.vx = 0.840208871332;
    msg.vy = 0.646358784922;
    msg.vz = 0.665527187891;
    msg.p = 0.692881937138;
    msg.q = 0.270864605388;
    msg.r = 0.836736966511;
    msg.svx = 0.224945448981;
    msg.svy = 0.815083333869;
    msg.svz = 0.503722731803;

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
    msg.setTimeStamp(0.683906438017);
    msg.setSource(63456U);
    msg.setSourceEntity(116U);
    msg.setDestination(28552U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.813746884743;
    msg.lon = 0.263233891267;
    msg.depth = 0.787128205329;
    msg.roll = 0.821900048731;
    msg.pitch = 0.967846749268;
    msg.yaw = 0.652191526842;
    msg.rcp_time = 0.644491451995;
    msg.sid.assign("RXCEIGITJTHXSKSPFZADRKIVQDRNSJWEZAQPHMZIJTGQZIWAPYEQYBNDKDCPKOSJSRXTUNBTWOFUSDBPUKEGBWVDUDTOTFMEICNBLLMXXBXWWHNAYYGEFVHQTVRVEKJELJFZIONLENLPUFMKCACYIXZMHSJSJRRFAMVLBPYNONGKLLLLUZXYKISWJUDGZHNRTQGFYUMPCVFAQYPQZOQOXHYAHIGSMOQUDRZ");
    msg.s_type = 224U;

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
    msg.setTimeStamp(0.742392720655);
    msg.setSource(14845U);
    msg.setSourceEntity(71U);
    msg.setDestination(22175U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.019133004817;
    msg.lon = 0.0737244169518;
    msg.depth = 0.514335723378;
    msg.roll = 0.688267798123;
    msg.pitch = 0.693030028204;
    msg.yaw = 0.976610658813;
    msg.rcp_time = 0.906995776297;
    msg.sid.assign("AYPFVQLACLZVQFHDAVCDYLTSXGADTCDUOMVFYBGJWCWGINTHIIFFADFRCVGTJDVBZTRJZKZPRGSOKGCYSCBMMBPTJUENHSHBUQZIELMRPIIDFRLSQXXKJKEANBNQYQHHIEDKKHZRPRBXXFOEWNAQISOUOMPHYKOUEBWOSWLCMGAEUXUNWKALUIROLNETMVSWQOTMTFYYGZOGJKNLESARQEHJWXDJYIWNZGZHJRXPXJPYCXWVQUZUDMNLVPSPBC");
    msg.s_type = 180U;

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
    msg.setTimeStamp(0.624028825106);
    msg.setSource(48739U);
    msg.setSourceEntity(212U);
    msg.setDestination(20234U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.82861502253;
    msg.lon = 0.0488605693909;
    msg.depth = 0.567167113859;
    msg.roll = 0.661041444415;
    msg.pitch = 0.86965139921;
    msg.yaw = 0.860615321988;
    msg.rcp_time = 0.138929382267;
    msg.sid.assign("WWYSEJHLHAVGZRPOIXGIE");
    msg.s_type = 245U;

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
    msg.setTimeStamp(0.0158819059928);
    msg.setSource(36238U);
    msg.setSourceEntity(209U);
    msg.setDestination(52808U);
    msg.setDestinationEntity(242U);
    msg.id.assign("EVDBQYZHMMIYUTYUZBMUANJFVRAQZKFUYQBTAGLNHMOIYAFDVXFDKKVQSPTCTDWREHOSVRJGSOHNMUVDGJDQSGSGAXHFCCDBJRYLOQPZXWPOKKJCSCWXUNBFSIXHPTDEVOIPVCTSULCONXRWIZNRYHPJNFVAMZVAN");
    msg.sensor_class.assign("PNJBXXHNPVPJYKSSXLQFRHCMZXBPBRCCM");
    msg.lat = 0.558311891027;
    msg.lon = 0.540303562974;
    msg.alt = 0.0352491543521;
    msg.heading = 0.583911283913;
    msg.data.assign("XUZPVTQHEUBGZDCXDOTDBNCWGKJNUQXYVLOWJBKKVERMWPIWVHAHBHZYYECRMSACMRDEBLTBUAMXNAQ");

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
    msg.setTimeStamp(0.406891022941);
    msg.setSource(63430U);
    msg.setSourceEntity(151U);
    msg.setDestination(62272U);
    msg.setDestinationEntity(34U);
    msg.id.assign("MVSMGNGCBRZVBFGAEWNBPCVDBRUJYJGFXSFWKSDIWHWDMLGIENIKXKPLOENRZGLLSZVXBWMHXIVXUYOOTLIIXREWRGJFFFVLMQBPAWYVYGKPZZAUZHEVAJYTNROCMSQTMBUFE");
    msg.sensor_class.assign("BORXIZGYOYWSNWXNCPLHYZHRXMFBMRCNNSZIPGOJCSTLEHCEJXUFSQUZXEYWLBFHNAGPXPQDLJWHSKAUJHTIYBLADKVQATCGFECPANRGWPSZGQNENLFZEVYJIIEWDFFGIKPGOHTQW");
    msg.lat = 0.656303926251;
    msg.lon = 0.449122080191;
    msg.alt = 0.150306198268;
    msg.heading = 0.791356737258;
    msg.data.assign("IUHXXMKRLNASLIYNXKQNEAOBLKVNMGORQZPRBAXZWAZBYCPCTUCCVHTLMIKCEERDTVRJTHEGGLKTTESYJYUEXUGBDMSHONJRX");

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
    msg.setTimeStamp(0.031607943854);
    msg.setSource(40765U);
    msg.setSourceEntity(234U);
    msg.setDestination(32410U);
    msg.setDestinationEntity(110U);
    msg.id.assign("SXRPRTQSWDBXAQGMBWVQFWVJUFSQNRYNBTAUWDOBNDTRAOZUPCMTOEAZANUVVMDFCDVALWXPVESEIMFBYFZMGWKQZPNRQFXRIOJKSCSBOWCAEDVTODSLFAJFHPPZWWKUGTHTGCMIUGBLLIPYKIIOGBXMXEGLYRDVOIFKAQJCYIKECY");
    msg.sensor_class.assign("SLDZQLVOOMRCRJ");
    msg.lat = 0.876323614607;
    msg.lon = 0.365609981025;
    msg.alt = 0.791725621853;
    msg.heading = 0.706855925961;
    msg.data.assign("VJQPFSGLGWUQRNEYOMHQOWSTHIWPNEPBWVDOKHAV");

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
    msg.setTimeStamp(0.653143053634);
    msg.setSource(43894U);
    msg.setSourceEntity(151U);
    msg.setDestination(31568U);
    msg.setDestinationEntity(46U);
    msg.id.assign("NOBIEQQLEYGEWONKAKMBCSXTPOJEMAURJJQWIQMPJKFAJHYAIKZCTFHUARWFIVMXVMGBTCGTFCQSWWPBEZFADONFPDZYADBDLYLRBTXDDCJWEHGZRAEYNLHNZVHZONPQIMSRQXKXHHTSNKOVPBCPSVCGUOKMLMTILOJEPXSKYCWFSVJEXJGXVUANWNSBGSVCBX");

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
    msg.setTimeStamp(0.630473362889);
    msg.setSource(52977U);
    msg.setSourceEntity(247U);
    msg.setDestination(52870U);
    msg.setDestinationEntity(217U);
    msg.id.assign("OQEDVGDGJEPORKVHLEQQXOUWAPCLZLSXHBYAXNEZPGBZTFTSPAXKLJMFRIIOCHGEGAONYOWYWCMSMZLZZRQPJ");

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
    msg.setTimeStamp(0.445603140842);
    msg.setSource(37827U);
    msg.setSourceEntity(194U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(215U);
    msg.id.assign("FKXWZHEOAGQUUQGDVVGRLXBPFIEECJBCOWUSYMZOGFAKEMEWDRYPAFNKUSYOHVKVIXNFBTFTBRDQUKBYOOMNQJHAYMQLC");

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
    msg.setTimeStamp(0.587304374272);
    msg.setSource(18974U);
    msg.setSourceEntity(218U);
    msg.setDestination(24631U);
    msg.setDestinationEntity(199U);
    msg.id.assign("ALVFHROGCPGGMPZUBTBXZHEVNTVQRWKFJYDPJEOQDNQRUDHNIEGBQKQNHDRWNRSUTLPFADMACYDJHUFYRLQRPSKLFYSSAGBTMYEDEWBCLBLWKXXYSZEZIHOOAJXVKFOJPODAQCAZJKYFJVORXDBSZSHQGYFX");
    msg.feature_type = 153U;
    msg.rgb_red = 54U;
    msg.rgb_green = 237U;
    msg.rgb_blue = 185U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.305384958933;
    tmp_msg_0.lon = 0.879546932061;
    tmp_msg_0.alt = 0.682259767215;
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
    msg.setTimeStamp(0.752045541126);
    msg.setSource(12443U);
    msg.setSourceEntity(99U);
    msg.setDestination(59849U);
    msg.setDestinationEntity(253U);
    msg.id.assign("DXRMCHISHUAPJDNBYIJCWTBPWZCBEAINIFPMZUUPQMEKSBLWISIXJSEACJAOZNJQLPSDXCJOWOJLSDTCXSBKKOKTTSIGGQAHPEVHVUMYGUVMUBDYENOGEOFBSMZCGTZKZXGYIDYEHFHQDRNXDYZTOTRTNZAFURPGYWVEWBZGRYLKMJFWHVRVRFFVWPNPJKLXWLHDGROMTFURVAFKXXBNOZELQAQVDIGCXKNPOLQCUACEHYMRWKQFSLI");
    msg.feature_type = 0U;
    msg.rgb_red = 182U;
    msg.rgb_green = 235U;
    msg.rgb_blue = 51U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.424907436461;
    tmp_msg_0.lon = 0.852911156221;
    tmp_msg_0.alt = 0.803790496314;
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
    msg.setTimeStamp(0.203194272415);
    msg.setSource(45697U);
    msg.setSourceEntity(94U);
    msg.setDestination(30423U);
    msg.setDestinationEntity(63U);
    msg.id.assign("KCRWYMNBHUJLBWRQSJEAYLXCWUCPDXNLVCOQXTNRAMGJFACXVVSCDYOEDFUDJAPYPMUNQVNQVXEKYGEYUIBEROIEQHTAQZTOLYSPHJXKXLSPGRDBPBQIHJQOTMNFBVREGKMEEHOIIIWZKIRTFOCIHZJGTMJGCUMJDTQBLSGWCLIOWGNNSBOKVHWFHFZFKMNGAOUNKHRYUTXTSMVPUMZSZDTSAEHWRWAZVDLDPBFZGIQLXPJFU");
    msg.feature_type = 173U;
    msg.rgb_red = 238U;
    msg.rgb_green = 109U;
    msg.rgb_blue = 124U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.259993953582;
    tmp_msg_0.lon = 0.918542275438;
    tmp_msg_0.alt = 0.234009180547;
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
    msg.setTimeStamp(0.106550729693);
    msg.setSource(58146U);
    msg.setSourceEntity(85U);
    msg.setDestination(8410U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.300521982825;
    msg.lon = 0.668609176655;
    msg.alt = 0.198092190029;

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
    msg.setTimeStamp(0.516132111609);
    msg.setSource(12224U);
    msg.setSourceEntity(240U);
    msg.setDestination(38313U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.280922165339;
    msg.lon = 0.865987503569;
    msg.alt = 0.511027982946;

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
    msg.setTimeStamp(0.631150025332);
    msg.setSource(47428U);
    msg.setSourceEntity(91U);
    msg.setDestination(27376U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.701218232394;
    msg.lon = 0.338492982105;
    msg.alt = 0.990160376394;

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
    msg.setTimeStamp(0.316620203213);
    msg.setSource(52902U);
    msg.setSourceEntity(124U);
    msg.setDestination(58133U);
    msg.setDestinationEntity(154U);
    msg.type = 91U;
    msg.id.assign("ZLMAMJCSZCHMRMNWGPRIXABFECKVDEBDMVWYRQNZTUNLFAHXMRSAOWYVHBBQGGOSELZFDYAMXIJKIXNWPAJEJFBIWQIVIUNJQLWSLOFXABRDOVKJSPEDJPIHGURICLWFCHPUZDZA");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3816690125U;
    tmp_msg_0.value = 249U;
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
    msg.setTimeStamp(0.585754912805);
    msg.setSource(2535U);
    msg.setSourceEntity(160U);
    msg.setDestination(7358U);
    msg.setDestinationEntity(57U);
    msg.type = 195U;
    msg.id.assign("VTSXKIAHOTAIJKYYXMFGTTLFUSYFBBOYZLOQPUMHMELPMXBCYWZMRLCRVUYWNGCABCOBEEC");
    IMC::EntityControl tmp_msg_0;
    tmp_msg_0.op = 14U;
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
    msg.setTimeStamp(0.616947836603);
    msg.setSource(7606U);
    msg.setSourceEntity(158U);
    msg.setDestination(19847U);
    msg.setDestinationEntity(230U);
    msg.type = 85U;
    msg.id.assign("XKQOQBYROEHHDEJUHTYWALFIUXVNCXOGQJDKZMIFESRPKKXARTNMGOPXVTLZPMWZDUBCJJSKVBRWSDPBEVKREEVCLCOUXZXWGZNCVSSZKNWIWNMRAGYUAMTKCAFTOQHYNUZDDQHLFCBJIFLWOAXGOSITRLINYEWSJHSPLIQQOVADTIVBWTJMUVWGDNRUGXMZCMLFQYBPAJRHIFXYRJPMCSFUPELYVLPGEYCOBGBEAKQZNMFJFHHYZB");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.401345875729;
    tmp_msg_0.speed_units = 122U;
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
    msg.setTimeStamp(0.633346368632);
    msg.setSource(55921U);
    msg.setSourceEntity(227U);
    msg.setDestination(57108U);
    msg.setDestinationEntity(83U);
    msg.localname.assign("FEOSQWXBXWVBXNLWJHMTCYNPOLZUOVEIVTHLNGYYQDZRJUPXZNCIOJCLYIKYQRJXAZFSPQIMGRSUCWUOTFKTGAHSTOPTQQTXPNZPKFPWMSOZCIXEZRNIUKSUYRHVWIUCUUCVDEQWOBNVOEJAVMPWPHYUFOAMDDVHDFXBBCSCTMATKHRFSDGXFRJMALBPIEGHSELGNKNKKCFGJLEMVLYR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VBSWCPBNQVFURFGVKGXHJFKMHYTINGLPUQMEWMAXOUKAXJAUGNPELVIQDUDHDPJTRWVSMCCTNRJZIJWZFXXTFYNYAMMONIODXGEBDZERQOESMZCKVAGCAPOLWVGQSYHMZRZAKEUBNPVASROIRHTD");
    tmp_msg_0.sys_type = 210U;
    tmp_msg_0.owner = 37820U;
    tmp_msg_0.lat = 0.437689629995;
    tmp_msg_0.lon = 0.340742849065;
    tmp_msg_0.height = 0.470652884972;
    tmp_msg_0.services.assign("KUAMORGPQCQPIFZFMEBDOIDAAEKYEFMJQZDKIVGTXHWQFREWWEQYRRNMNXENHNRYXQJGYJVRPZKWSLXFVMHLDWRRSNPEHQASTTTSACHEHXKKNSUTBKIJWUVEWKZQJTARZJCMMPOLMXNYUPKGLCSAXXOCCCYGBYISBIOMTGVSPFUWVJBNJVEACJKYLVZQFJFZTOIQBHO");
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
    msg.setTimeStamp(0.287767531087);
    msg.setSource(62443U);
    msg.setSourceEntity(104U);
    msg.setDestination(38550U);
    msg.setDestinationEntity(57U);
    msg.localname.assign("NCGZHASOTETOFVOMCYJGXXLHACYGFQHCFTXRHHYUCQBPJHITAXEJFWMLQDQAZBEELFWWCLZQ");

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
    msg.setTimeStamp(0.958774218017);
    msg.setSource(20453U);
    msg.setSourceEntity(134U);
    msg.setDestination(15673U);
    msg.setDestinationEntity(71U);
    msg.localname.assign("AOKADJNWXPUJZGMZHOBIPNWXYZERVCTZCFVNUXPCDBKIQYGNCBKTDSOTXKMYBHWAULJBHLLINPWRNTWGSFCEPUYPRRDXURAPBHMQEFQQEJMPUCDWCZTIJOZRMSHDAWNZXOORFCVJMESQBLQSAWYHFKYQBYHVTOGTVOHNYGQKSZMXKSEQLXUIJK");

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
    msg.setTimeStamp(0.451623930859);
    msg.setSource(11754U);
    msg.setSourceEntity(200U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("TFNSNXKHXJWVIZPMGDONXXARHBEVTDJMUIBZSKQNRPOQWHAUKRZFRADOTFPJCKLGZOVKQAEIAPTCNQMWRQBKSCPSCGZYWH");
    msg.predicate.assign("VIPZYIOUWYDGEDIGE");
    msg.attributes.assign("FPNVGDDZYZHRTW");

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
    msg.setTimeStamp(0.909009462913);
    msg.setSource(26085U);
    msg.setSourceEntity(23U);
    msg.setDestination(28210U);
    msg.setDestinationEntity(94U);
    msg.timeline.assign("XSONFWZOVECSVGMHATGSRDHDHTIKFVBRLRMVQWTCGUWFPYJUTZZCHPLERTJOPYEMKZQQNIYYQJBITSRLZRBNWQUMGQPCXWBAQWJSUOJIRZXANXUZPUESXMYSIODCKZZLWOHCPBTHNBXEG");
    msg.predicate.assign("QMRPWDBSPDWOTTKKBBXTANPTXIVHXDRAYGQDGWPJAKCSTKFRNQUVNLSATJTAIXKJZEFNDFHRUURTXRZLUQVTJLKIOCAZEKWXHLDZBVBXFIDVGYYDUYMKYUZGMPOSEEYSPGNKIHHNBWKJQXFDOSWMZHLIFATGFCOHSLOIQJBFVSIMVMJSECZNLJYPWPRFCCCZAWEFJPLHQMGUXQOMAUCENNCDXZMYVQOWGBZHPVCBLYEUAMEULHV");
    msg.attributes.assign("YYZLEJXHAARFCZJ");

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
    msg.setTimeStamp(0.77408324799);
    msg.setSource(40970U);
    msg.setSourceEntity(107U);
    msg.setDestination(39688U);
    msg.setDestinationEntity(23U);
    msg.timeline.assign("IRSQXFRAGUTSSKIBCZIQIMYPZFIPCARBDHLHPLNBPQURAVXBOVBLKTMSGKZWSDJBEWTLXNOFGVTJIVEGIIOFMMRXKMWBNVCDOYXCKEGZYZVQOPHWUWEEFKWKJQXRBDSMVJZEADDRMJPNFNNOTABEPNEUXLMHQZYAZEDDCLTIATYPFGUGTPRQCQLHJAHQSCUSSOWUHCAYW");
    msg.predicate.assign("HBGIEKBJDPUVOTNLWTTPOLOBUGJVVRCKQJLABAGEHTCSRGIIGYSKQGNUXLBXKRYB");
    msg.attributes.assign("SBCIGQVXTXADPSDLALACIOFZXQNTHTUPX");

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
    msg.setTimeStamp(0.873519366702);
    msg.setSource(54026U);
    msg.setSourceEntity(114U);
    msg.setDestination(58918U);
    msg.setDestinationEntity(62U);
    msg.command = 138U;
    msg.goal_id.assign("IHRTBJLUTAPHBANJJSIQJWPUVQQFTTAFVPYY");
    msg.goal_xml.assign("BVJQRPWKKEXLBYGZDWNZXNDXIXIABAVAQUWXTSHWBQFBTSYLCDAKESZWWUYEEB");

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
    msg.setTimeStamp(0.206662834623);
    msg.setSource(24288U);
    msg.setSourceEntity(30U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(130U);
    msg.command = 130U;
    msg.goal_id.assign("SEPGZXCWNPQCBQBGBDRRAPJHEQFJELTNHKUMVOKMWMFZYURXKUJPZWFRIZOOVFPMBLNMEBSNWZMAMRJKAVXNRTHOYXDKZAFGJRUESWZHUAGDXQKVLBCDLTAQVTIFXPSJFYAHXPZBSIGQJEVETUZRBQLQNTBVFDST");
    msg.goal_xml.assign("TZCSKKDYGLULRLBTBTJDMSIIDCPNUEAXDIKVJZQP");

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
    msg.setTimeStamp(0.536501138745);
    msg.setSource(47484U);
    msg.setSourceEntity(37U);
    msg.setDestination(4235U);
    msg.setDestinationEntity(6U);
    msg.command = 110U;
    msg.goal_id.assign("UPUYQWROGSCIGDHELXDTJDSONGHUSNIAABLPHZPLHGSPALCUZKEGVFKKNVBZBCMVCPMJOVHCBKRYHMRMVXJWWOBYTHKNQJDTDSLWJXIRATIERNSFULXNQYTQJRLRWHEUOQVKJBBWPAXTSLOMXMJXGKDZTSRLFOQXMLXEYZKGZVZANPTOIPEJEDNWITACIXMFFFIAADBQUGQ");
    msg.goal_xml.assign("MZKSTZXQZXWLYTWJPNTCDFPYKFSECRAERXBIEYITZHFVMVREQIZGDNNDQDKV");

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
    msg.setTimeStamp(0.822928814439);
    msg.setSource(15567U);
    msg.setSourceEntity(15U);
    msg.setDestination(24554U);
    msg.setDestinationEntity(129U);
    msg.op = 125U;
    msg.goal_id.assign("RPQFGQIGROOAZZOLAZVHKFLHMIQXBMMTNEPRFQOKYEGELXMSXAFTBDOCQJBJWKNFIWRIUPHDHHRLAJJWVBULFEPNXBPKGMZTLIEQARBWXLRCPNHBQRXYOOVOUDINZGYTDLXFASHKBFZCNVVEDPKAUYUEWXWAZPCEUGSFRKNSSEMDTSJUCLUGITLMWZZJDYIYMXTKCHIWNPQSGSDSWVWJSRQTA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PPNWKOBPPIUNTJWCNSOCDBLZQBIDMEZSKSKFVNJXCWGTXEDWSQQEHLYFDTDTRIXUUXLPHYIDBZLMVSMZRBYPAGHBGGKQNEUWENQPCSFQVWZF");
    tmp_msg_0.predicate.assign("XFOXHBUXPVOYKWBUTOXKKWJYNCOWSTQQQAANNCZTQZRSMFNMUGPVDMOKIBPJFPCHJXIKRZPBLTLTDQRLA");
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
    msg.setTimeStamp(0.727622607763);
    msg.setSource(16609U);
    msg.setSourceEntity(201U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(107U);
    msg.op = 6U;
    msg.goal_id.assign("LPTINJENAEUANQBRIDOXGRHBPGGJVWSRKYXDCLMMO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PBTMQJKZXFXHXXPCTHCOEHCDNIPX");
    tmp_msg_0.predicate.assign("BPOXEOCYHXCWTGAKLEEMEYDLSDOUNHAGUZVUBIHUXDWVZJRLNNRBGNIQCPTQNUMOFMDYAJBBWZALUWQDPTQAIYGQPCHMIWBPZNICSXRS");
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
    msg.setTimeStamp(0.541693336087);
    msg.setSource(35941U);
    msg.setSourceEntity(238U);
    msg.setDestination(34900U);
    msg.setDestinationEntity(130U);
    msg.op = 60U;
    msg.goal_id.assign("RBJLTQRAUSDPIKKIYIEOWTBYWBBRNHJWXZQUSTNUMGYKGKIKXHUOYIYYPTPDAMKAOXWASHDEWNLGEFSNJTOFTZNHGLYHHIRJDEAVLSOZTVNCFAYDFVEUFJEJWQCUESFZXCIEWMPTFFGMVCMRKNAQPVAVXYUONRIKZZDUPRQXCXXBZODBDHAORKGMBLHSIVMUQWVPYQAUJSCSPG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MAPBWLUROGHCPZCOWQVTXPYPRKGZOXHKICXQFZGTQCMMINVSGFGJMDMIPKUXAUGXXECIHDKLQLQOTTHYTQMINFELRQTAJYAZMNRXUAAK");
    tmp_msg_0.predicate.assign("AMOSPMUASMKQPFNJXDHHAKILBPYIMARZZYUWFBOCQDXVKNDGMRZTIVQYCDHBTFBLERNBMIPWTGLOHEHZPNIBCGHGXOSEWYSNIWOSGFXZKMPNAVEQDAQBEIFDJYOCXCWRTQZZTTOJWJLWWSFAKYLHNKGSRDEQXRIVNHOXXBQMUNEGQGHVSVMDIRBODZGVEJYJNYZPLXATLWPUVFXZCULDIKRYMCER");
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
    msg.setTimeStamp(0.750102126278);
    msg.setSource(3296U);
    msg.setSourceEntity(39U);
    msg.setDestination(33894U);
    msg.setDestinationEntity(141U);
    msg.name.assign("YICXHHXYNRWUBODUTXRWIUCYKFLIPEMNBPHX");
    msg.attr_type = 14U;
    msg.min.assign("BRKPYVMRKRGNNFQRZVQFPPCVQLTVBUVUIRHKPFGSPXCYHVBJFXMJWJZMUZLNGZBIWXYSXNYZQEZOOAKVAEUBWSJLPKDYGOLIFYTRHFAJEMRTTAHWRJZLGYMXWEEXWNMRJDHFDGUSTUMNBDIQGVEXAMXQGYNGXIULFYAGUFOKSQTHVZWMJLIPKRZWKEBESEQPOIDAEXABWLIQVJCSCYTQOLWDNTDAIN");
    msg.max.assign("ZDCOMRZXNFYXACJRXUTDLPJNKHOYTLDZNMXKLFKBJBUEUNYTBJEYJPKMENJASWBISOZUTBSRCPVQGSARGYHRAFRVXVOWPYHUXAAEDKTDJEFCHHUAYIVZDJSNXWGKIHNDISPPWLRZZKQFQLVHXWTYGRCBANTCZEPT");

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
    msg.setTimeStamp(0.764732314062);
    msg.setSource(15587U);
    msg.setSourceEntity(38U);
    msg.setDestination(55690U);
    msg.setDestinationEntity(13U);
    msg.name.assign("CYJCUNWABHHTELFZUBJFCTVSQMUOLNOPWQFBDOVYJPGUREJWMZOEJKOVUWFXXZZLBTLLBMHBEPXBINNAFOYWDOMVABNYLPDPJQKKAWTUPGVSGZWKFIJOCRFMLIMHVINWZPEFAHTZTUHGVHKGREKFGDQTQHDCSQDYIXIYLPYCXMQATARHEXVKRPVASGQRMYDIKCGSNPKAODUBSSLCWASNSCKSRRLWZEUHIMJXECYMRIVTXXXZTNBGIFQ");
    msg.attr_type = 149U;
    msg.min.assign("IYMGWCERZYUSFHGYREPPIBYEBHPPAFBKOZDXHRCUXUVKFLMXTWMFUMEAGRNWSDBLKVRGFSVYNGCXQDYOPBUSVRXQVDELIRVQLJVWOTKAGOERLJOZIEXTCWUAKUIJPDRJKEKAXUENQGUFWCZBWQNANQWAYFTHMLSZDAPLDWYXK");
    msg.max.assign("XBYHRLSAMAYULFAOQMGYNAWWZSSVXFDNJKLWDVBKIOXEMBYGGERVCGKNKHTXLHJQCUMBICIKAAVEZDZWTEOXFDMNHZUEZMORPWTTQIUOOERZKPGGRBQJMODNLMHCSEXIXWYHJPJYYQPCEJFTZGOIDAFZRLDUVB");

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
    msg.setTimeStamp(0.608478015797);
    msg.setSource(20057U);
    msg.setSourceEntity(184U);
    msg.setDestination(54190U);
    msg.setDestinationEntity(12U);
    msg.name.assign("FURLKAXJFHNBKEIEEFPXPMAPAJVEXTOHCYRDFAKRAEYGQDBZPJXRNLWIYUBZLCMTEWMHUIACLGHPRDVJCMQVNEIWXOCKPMQUKUFRWZEFJNPN");
    msg.attr_type = 56U;
    msg.min.assign("QKMGJXMJIAXFQKAYEWSAIYKDOLSWHUPVULMDIHBRDMIJHUFSGDNNLPVODBFBKJJMRTODXQYVCMUHYSDZTVIIBUSVHXRHCDCOGTHANHLVHYCNSPPBZEBQJGZSCCPWTUPNUCLZATBDWOVFJQPZFQUGLIPKNGYOPCMBIYNGAYXXWTLRSGAZWVQNNETXKEBYABLREQFGFRZMKTEGJIRIRLA");
    msg.max.assign("TIZHFQWOQBTNUWHXXKKPNTSVGGPZTCMRCNCIHVSAOYLNAJWUKUNMIRRGPENIAYCVEXTSWAZCRCKZVFIFOIQLKITDAGUFIKKHWFJVTIWOBPEEJFLHXDTJJHRZXBAYYWZYOAGRUCHUZTDELJBFNNFGELDHOEPSWRNKLYLQRMGHMGBPXJQV");

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
    msg.setTimeStamp(0.869464050212);
    msg.setSource(61662U);
    msg.setSourceEntity(190U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(170U);
    msg.timeline.assign("XOQTIOUPGRYBAHMCBRMZOTGYILHMXQSUFFWVLLJVWYWDJOOTNQXJVDZIUCUXKCQXDJLIAXMZMVXXATNFHOIYWSCUECDNBPPKIEJLQGEFBBFUVYWGFMLZYQNRQTGKMBYTDTVWTPNLZTTGWFHMNOSJGSHRO");
    msg.predicate.assign("XXPHHSCMGYSWUOLKWOEGEABFZQVIPFJYTXLCQNJALZRWQBFEKJWENMXKMPCFTISAPLHVFCUYJSAYZDZBECGEOVBTFBRMCIZQDIIRKTDUVPWVLKGJBVTIBQDANDOSMGOFLZDNWXXZOPLRXQNOQNOXKIUNGRYSDRERTVIAJKAHQWERTMLBWSVTAPFFCCHGUZBDOCVZTYMKY");

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
    msg.setTimeStamp(0.621387841252);
    msg.setSource(17542U);
    msg.setSourceEntity(234U);
    msg.setDestination(41941U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("WBYWQFALGAEMPPGHVYYVEHXJSSKOHCJRJSKFLSSNIOPIIXLZVTYSFCHYHWCRGCMTQLTDXNJCFKZTHZWUDQAVTFGTUHPXNZGAJQDDYKGUKGRBBBELIXOXCRROJFEOVEZDETXHZWNFUARGXMZCQDQIGNACWLPLNKSBEMGUMVUUIFWR");
    msg.predicate.assign("TTRZQYXWWNHFKPDPIWISQEUNJRFOSCHCOAHANLESZYKCKMYURGWEOLFFMTNGMCHSTVGLXZJNANAEQGRYKIJSRNEPAUAPIDMBPFZVYQUS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ORYFCEFSCXJAUPYUAIFIGKZPGXCARSX");
    tmp_msg_0.attr_type = 15U;
    tmp_msg_0.min.assign("MSRPXPKNECBZWUWIJISWJXADWIXEOAPVJIYUYFECKZUNNZUGSRQXQLQT");
    tmp_msg_0.max.assign("TBAWGRVTAZQEHWQAZGWJXYCGSDJLLTZTJQGEWMKNPBOKMUBORRKFHFRSCQYAJYBIYBOZQCMHXYMRVUFPTFJGKDCIRZJNLNUJACWGTZVLSDNXDQBKWSANDUUFFSYHYXPGUDAQUSICLSIVEXWSRUDPMISZZGNFLSBXTRINIHVGGYNCNOPHFDYIWEOOETX");
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
    msg.setTimeStamp(0.184937764402);
    msg.setSource(26958U);
    msg.setSourceEntity(107U);
    msg.setDestination(22119U);
    msg.setDestinationEntity(112U);
    msg.timeline.assign("BQCLKJXWQHWEIPCYWGWVEHFJLKGBGYTIRZFPCDCZNOSDGYPAZZLTUGUECLNNWWAUQNGETAOOJOOFENSRHOCQTGKSRRUAELKNDBPHVDMIQJHJJYVZUH");
    msg.predicate.assign("FHVSSQYDFPVSUCLVCIUPSGDNWIEFIGCBLPQMMTUDBKMYXYTBI");

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
    msg.setTimeStamp(0.204856755368);
    msg.setSource(4774U);
    msg.setSourceEntity(65U);
    msg.setDestination(54070U);
    msg.setDestinationEntity(225U);
    msg.reactor.assign("UFHRLFCPCAJMXETXBILRDJKLQZTDIGVAZQMVTQWOPEGQVHAHPFOCHLAHJDXRUENNZKCYBKYXBDFVHCVVGRIONUNQEDYLIIFEUVQSXPAUGZGLMJAFKDTBGIZWECSMYQF");

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
    msg.setTimeStamp(0.81415491326);
    msg.setSource(36940U);
    msg.setSourceEntity(56U);
    msg.setDestination(63586U);
    msg.setDestinationEntity(191U);
    msg.reactor.assign("IOJZKLKFLXPYYPHQURRLXPTLCBJZNOCNFXIAEDZCLDJIXNXKWHURZBZWZMFWYBIQYGWRWHNVMSYQETSDEHQQQWGMMLVNODDNJUPDMXRSLJYKITYGENLGCXGATFDEABOEMRANTHBIJSEZLQAFIACFNFVAHUVJUPWIBNUGKHPQJCKUXMUGYVSPBUIKJTGVZRZCBMYCKPDGOTWWTW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UWZTXMYGAPCPIFWNETQLWTCJUDIVMVJGCELRFMYIRJTOVOHGYNHGRLTPPSSESUWXISKJK");
    tmp_msg_0.predicate.assign("DERAENQQOKRAFPQOVNXGFJQOJLWRYIJCLKEJGBZEKAWKWBDKSLKVHMFXAHSYFFTTDHAYGBNMBMFAITVNZCWLKYOWFHQZTKLIRFHSGZIPXMYWNUNQDDPNTGJBORTREUQBHVSQEUIUAHFMLEBSDZMCCJODFHDIPOAJUAXSWLUOZDCIPSNGGZTCGTVTXEYGALEVZYR");
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
    msg.setTimeStamp(0.837030079798);
    msg.setSource(15034U);
    msg.setSourceEntity(181U);
    msg.setDestination(4885U);
    msg.setDestinationEntity(17U);
    msg.reactor.assign("DXPFTPBVUZSTMDFYQRUAQIXHTYLBRHUKPXKOBDZAIIOSHKDMIASLIJKQZOHBJICMPEOT");

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
    msg.setTimeStamp(0.548020151998);
    msg.setSource(3799U);
    msg.setSourceEntity(54U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(168U);
    msg.id = 156U;
    msg.width = 25115U;
    msg.height = 17774U;
    msg.widthstep = 35650U;
    msg.channels = 159U;
    msg.depth = 150U;
    msg.finaldata = 254U;
    const char tmp_msg_0[] = {5, 99, 27, 56, -103, 123, -57, -127, 38, 104, -113, -99, -107, -113, 119, -36, 60, 55, -31, -107, 79, 106, 83, 123, 73, 29, -40, -52, 71, 51, 95, 5, -87, -54, 66, 123, 82, 118, 116, -88, -119, -13, 58, 55, -38, 61, -101, -33, -23, -70, 76, -45, -12, 114, -11, -119, 40, -8, 106, -41, 99, 119, -91, 23, 8, -45, 11, -4, -33, 58, 84, -36, 56, -67, -107, -60, 110, 54, 26, 87, 52, 41, 79, 35, 40, 121, 14, 110, -46, 107, 6, 90, 63, 88, 108, -10, -89, -116, -73, 15, -14, -96, -84, 64, -110, 125, -122, -56, -43, -40, 40, 115, -5, 83, -44, 36, -7, 118, 123, 46, 34, -43, -28, -72, -9, 85, -111, 37, -5, -78, 87, 18, 109, -43, 87, -13, 41, -19, -79, 23, 19, -17, 84, 70, 0, 19, -25, 57, 87, -116, -62, 76, -34, -42, 45};
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
    msg.setTimeStamp(0.399915406346);
    msg.setSource(35354U);
    msg.setSourceEntity(87U);
    msg.setDestination(37941U);
    msg.setDestinationEntity(236U);
    msg.id = 215U;
    msg.width = 19576U;
    msg.height = 51158U;
    msg.widthstep = 61244U;
    msg.channels = 1U;
    msg.depth = 254U;
    msg.finaldata = 145U;
    const char tmp_msg_0[] = {82, 104, -47, 120, -127, -15, 81, 62, 11, -71, -42, 18, -77, -127, -17, 47, 117, -85, 39, -7, 53, 50, -22, -110, 106, -88, 124, -117, -12, 91, -7, 104, -34, -69, 53, -126, 83, -128, -119, -70, -43, 21, -62, 21, -112, 111, -38, 80, -63, 33, -116, 107, 92, 12, 75, -125, -78, -119, 98, -82, -80, -111, 60, 78, 100, 121, -27, -58, -111, 54, 53, -79, 12, 49, 10, -50, -23, -101, 45, 10, 123, 61, 36, 108, -13, 115, -18, -110, 110, 82, 34, -94, 3, -114, 49, -116, -66, -1, 6, -16, 95, 52, 76, -93, 6, -87, -113, 117, 117, -93, -126, -12, -60, -35, -74, 84, -93, -123, 88, -128, -13, -8, 13, -15, -64, -32, 10, 86, 36, 29, 13, -101, -128, -61, 24, 54, -93, -62, -109, 2, 85, -48, -45, -64, -110, -45, 97, -102, 15, 105, 8, 60, 81, -71, -17, 89, 37, -111, 2, -19, -116, -100, -1, -41, 86, 98, 102, 117};
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
    msg.setTimeStamp(0.912807491512);
    msg.setSource(54799U);
    msg.setSourceEntity(135U);
    msg.setDestination(10806U);
    msg.setDestinationEntity(80U);
    msg.id = 96U;
    msg.width = 3470U;
    msg.height = 63498U;
    msg.widthstep = 27893U;
    msg.channels = 134U;
    msg.depth = 221U;
    msg.finaldata = 69U;
    const char tmp_msg_0[] = {56, 109, 123, 63, 53, 84, 38, -51, 120, 126, 76, -68, -67, 94, 120, -52, 80, 33, 28, 60, -115, 111, -49, 120};
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
    msg.setTimeStamp(0.90803740206);
    msg.setSource(32071U);
    msg.setSourceEntity(132U);
    msg.setDestination(60316U);
    msg.setDestinationEntity(225U);
    msg.width = 16962U;
    msg.height = 20995U;
    msg.channels = 218U;
    msg.depth = 29U;
    const char tmp_msg_0[] = {-46, 45, -14, -84, -65, 101, 28, -68, 77, 85, 101, -23, -96, 32, -97, 39, 44, 109, -40, 0, -42, -35, -8, -15, 125, 78, -14, 83, -51, -118, 78, 47, -37, 94, 87, 121, 47, 39, -88, -57, -46, -73, -115, 5, 13, -76, -34, 52, 6, 97, -125, 18, -5, -32, 17, -21, -124, 33, -13, -76, 13, -59, -99, 49, -89, -106, 3, 96, -36, -124, -13, -121, 0, 42, -103, -56, 60, -122, 103, -95, 54, 49, 82, 31, 96, -85, 21, -105, -25, -65, -93, -8, 125, -33, -113, -4, 87, 106, 45, -34, 82, -56, 0, 55, 3, -106, -72, 118, 50, 42, -88, -102, -103, -101, 7, -73, -88, 58, 46, 11, 41, -7, 42, 80, -46, 118, 14, -40, -111, 55, 21, 91, -9, 98, -30, -69, -96, 109, -115, 15, -97, -18, -116, 37, 66, -14, 67, 76, 109, 68, -49, -15, 37, 12, -31, -107, -45, -68, -85, -87, -86, 31, 86, 99, -116, -50, 112, -33, 21, -8, -4, -118, -2, 11, -86, 59, 103, 13, 58};
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
    msg.setTimeStamp(0.495184850409);
    msg.setSource(20242U);
    msg.setSourceEntity(252U);
    msg.setDestination(8970U);
    msg.setDestinationEntity(5U);
    msg.width = 34072U;
    msg.height = 7537U;
    msg.channels = 148U;
    msg.depth = 85U;
    const char tmp_msg_0[] = {69, 48, 36, -6, 81, 104, -9, 89, -104, -20, -29, 51, 90, 111, 28, 85, 7, -74, 108, -110, 29, -40, -10, 86, -10, 53, 68, -70, 42, -126, 71, 54, -38, 34, -53, 37, -122, 57, 7, 16, -102, -94, 72, 66, 27, -36, -121, -65, -45, 94, 15, -28, 86, 60, 106, -94, 95, 61, 72, -19, -104, -17, -20, 49, 64, -99, 111, 21, -19, -50, 78, -65, 81, -89, 5, 33, -68, -93, -125, 90, 49, -47, -9, 42, -124, -63, 82, -15, -97, 118, 80, 2, -12, -8, -117, 52, 117, 34, -90, 17, -50, -48, -33, -40, 126, 82, 52, 119, 71, 57, -63, -39, 77, -127, -32, -107, 90, 94, 23, 85, -75, -19, -1, 93, 113, -86, -77, -73, 73, -50, 60, 73, 111, 71, -40, -82, -32, -104, 71, -17, -74, 62, 95, 53, -125, 30, -50, 79, -60, 48, 114, -14, -72, 27, -94, 99, -39, -38, 99, 121, 37, 75, -101, -9, 94, -18, -65, 69, -16, -85, 30, -61, 104, -46, 12, -78, 54, -107, 59, 36, 86, 20, -97, -38, -3, 16, -52, -26, 81, 1, -114, -14, 11, -38, -127, -67, -91, 83, 0, -26, 73, 100, 105, 120, 40, 77, 88, -28, 20, 25, 114, -84};
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
    msg.setTimeStamp(0.132381662718);
    msg.setSource(48217U);
    msg.setSourceEntity(63U);
    msg.setDestination(12464U);
    msg.setDestinationEntity(237U);
    msg.width = 38384U;
    msg.height = 57785U;
    msg.channels = 238U;
    msg.depth = 14U;
    const char tmp_msg_0[] = {-117, -39, -98, 24, 0, 3, -52, -44, -4, 64, 26, -3, -70, 17, 120, 59, -127, -118, 0, -106, -24, 90, 103, -64, 6, 70, 45, 54, 12, -50, -60, 12, 19, -17, 104, -37, -46, 31, 41, -57, 53, -86, 31, -14, -61, 83, -58, 60, -41, -23, -9, -65, -51, 119, 8, 36, -49, 6, 124, 99, 12, 1, 17, 124, 102, -102, 113, 34, 79, -67, 68, 51, 61, -53, -119, -87, 60, -57, -22, 23, -118, 40, -29, -84, 52, 57, -33, -10, 22, 97, 9, 69};
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
    msg.setTimeStamp(0.190874276083);
    msg.setSource(42913U);
    msg.setSourceEntity(201U);
    msg.setDestination(40579U);
    msg.setDestinationEntity(75U);
    msg.frameid = 134U;
    const char tmp_msg_0[] = {-87, -87, 117, 28, 83, 69, -5, 19, 85, 73, 64, 55, 87, -64, 8, 116, 22, 72, -8, -61, 52, 6, -76, -17, -18, -90, 29, 42, -49, -71, -79, -77, 75, 74, -62, 112, 6, 13, -106, 70, -58, 32, 50, 120, 0, -86, -111, -101, -78, 88, -44, 23, -56, 62, -70, -79, -108, 34, -36, -107, 28, 125, -128, 20, 40, -90, -95, -71, -67, -125, -19, -31, 2, 12, -24, 74, 118, 74, -48, 40, -68, 110, 118, 26, 121, 70, -30, -33, -60, 40, -27, 54, -37, 115, -34, -114, -94, 53, -109, -20, -21, -73, 101, 121, 28, 14, -33, 68, 37, -126, 30, 105, 5, -113, 59, -44, -35, -26, -36, 125, 38, -76, -79, -32, 121, -109, -22, -104, -32, 29, -32, -26, 56, 100, -50, 75, -127, 38, 59, -56, 23, -88, 38, -31, 101, 88, 56, -100, -62, 19, -75, -1, 78, -6, 35, -38, -51, 27, -124, 116, 120, -61, -21, -128, -56, 95, -11, -12, -77, 13, -87, 17, -119, -127, -112, -114, 111, 28, -30, -46, 118, 18, 82, -50, -30, 7, -69, 74, -25, -118, -59, 28, 51, 108, 94, 28, -6, -113, 67, 45, 81, 31, 105, -108, -76, -97, -59, -93, -122, 53, 123, -30, -104, -5, -102, -66, -82, 99, 36, 2, 97, 126, -74, 55, 16, -86, 19, -83, -1, -83, -48, 6, 59, 91, 63, -122, 117, 98, 26, -95, -13, 101, -38, 6, -13, 57};
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
    msg.setTimeStamp(0.814629385881);
    msg.setSource(17244U);
    msg.setSourceEntity(48U);
    msg.setDestination(43237U);
    msg.setDestinationEntity(175U);
    msg.frameid = 180U;
    const char tmp_msg_0[] = {93, -70, 1, -106, 70, -10, -17, 61, -29, 65, -84, 70, -100, -85, 12, -76, 94, -77, 105, -53, 88, -7, -92, 81, -121, 30, -127, -117, 71, -70, -14, 66, 80, -85, 95, -8, 89, -95, -18};
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
    msg.setTimeStamp(0.29833341148);
    msg.setSource(26513U);
    msg.setSourceEntity(254U);
    msg.setDestination(37966U);
    msg.setDestinationEntity(246U);
    msg.frameid = 231U;
    const char tmp_msg_0[] = {88, 11, 96, 82, 79, 88, -69, 84, 53, 43, 108, 34, -48, 85, 88, 69, -49, -119, -84, -57, 37, -41, 4, -97, -76, 30, -93, -92, -68, 92, 64, -87, 71, 107, 102, -41, 8, 31, 112, -66, 77, 39, -34, 88, 22, 101, 86, -14, -65, -77, 125, -16, 61, -81, -46, 4, 93, -121, -23, 4, 34, 59, -127, 93, 22, -10, 25, -63, 58, 71, -127, 23, -111, 63, -113, 2, -108, 126, -3, 8, -87, -15, 119, 113, 106, 7, -92, -40, -110, -1, -88, -75, 52, -58, -109, -104, 8, 84, 117, 82, -90, -86, 71, -29, 25, -27, 62, -73, 46, -51, 119, -101, -120, -124, -115, 50, -81, -17, 103, 57, -31, -74, -56, 116, 49, 83, 30, 34, 75, 48, -33, -62, -128, 86, -98, -68, 91, 71, -54, 104, 119, 64, -113, -97, -62, -56, 107, 84, 17, 80, -115, 117, -111, 117, -54, 115, -110, -118, 17, 125, 78, -89, -52};
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
    msg.setTimeStamp(0.635904851373);
    msg.setSource(56303U);
    msg.setSourceEntity(48U);
    msg.setDestination(58770U);
    msg.setDestinationEntity(55U);
    msg.fps = 23U;
    msg.quality = 139U;
    msg.reps = 82U;
    msg.tsize = 243U;

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
    msg.setTimeStamp(0.583102148637);
    msg.setSource(17500U);
    msg.setSourceEntity(19U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(201U);
    msg.fps = 118U;
    msg.quality = 191U;
    msg.reps = 58U;
    msg.tsize = 26U;

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
    msg.setTimeStamp(0.720690999119);
    msg.setSource(54672U);
    msg.setSourceEntity(172U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(52U);
    msg.fps = 86U;
    msg.quality = 224U;
    msg.reps = 31U;
    msg.tsize = 220U;

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
    msg.setTimeStamp(0.619049310977);
    msg.setSource(32508U);
    msg.setSourceEntity(67U);
    msg.setDestination(48705U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.249260795975;
    msg.lon = 0.664933194021;
    msg.depth = 202U;
    msg.speed = 0.0766286049172;
    msg.psi = 0.457043126188;

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
    msg.setTimeStamp(0.108958905755);
    msg.setSource(65237U);
    msg.setSourceEntity(205U);
    msg.setDestination(22553U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.244637219666;
    msg.lon = 0.802508135238;
    msg.depth = 33U;
    msg.speed = 0.784744036992;
    msg.psi = 0.0353952967485;

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
    msg.setTimeStamp(0.219821370952);
    msg.setSource(10601U);
    msg.setSourceEntity(114U);
    msg.setDestination(29658U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.153407901644;
    msg.lon = 0.103709416917;
    msg.depth = 234U;
    msg.speed = 0.829032110969;
    msg.psi = 0.823514246607;

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
    msg.setTimeStamp(0.23777359758);
    msg.setSource(40218U);
    msg.setSourceEntity(202U);
    msg.setDestination(9026U);
    msg.setDestinationEntity(244U);
    msg.label.assign("DYZKUFLANVUGTSOJGCJBPDIYFIMIKYAFRMXVVTWIAEWP");
    msg.lat = 0.802959587826;
    msg.lon = 0.831152845592;
    msg.z = 0.879457284639;
    msg.z_units = 193U;
    msg.cog = 0.72227794626;
    msg.sog = 0.641865524048;

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
    msg.setTimeStamp(0.358758293495);
    msg.setSource(8493U);
    msg.setSourceEntity(152U);
    msg.setDestination(62275U);
    msg.setDestinationEntity(28U);
    msg.label.assign("HRQKYPEOYNCMDVGFTLLKUCUGBIMXIQLKJHIZMUOMNJACEWLFKOCPHKFYIWMRFOOTSHNGCNMPNAGIBRKBQWVQQUHBLNJEHAWFGUJSDCPFJCVQHPDDUPTXAMJIHSQSIBTRASEESMDTDLCIOYSUYWILFQNEZJXWCYXVZEPSRALBVPVOVGSUFXTY");
    msg.lat = 0.695366340262;
    msg.lon = 0.107786689869;
    msg.z = 0.148726684814;
    msg.z_units = 214U;
    msg.cog = 0.394201729852;
    msg.sog = 0.859136167689;

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
    msg.setTimeStamp(0.30670845224);
    msg.setSource(30777U);
    msg.setSourceEntity(138U);
    msg.setDestination(42721U);
    msg.setDestinationEntity(167U);
    msg.label.assign("GSSKSWAUSXDPEFEMOLUGRECOOYVLGXKTBPVVRWPSQCQDXIXJUTUTBZDZMYTDOTJZWQIKRBKGJFSNHWMZCQOPNXNWSSJEYOAMYUNCVRYROWNDUECDPPEMYWIOQGJWDFVZQQBEMVLGJIBHRFUPBPKSIAOBXXZZRBZULLMARCTIFNAWMCTBUTER");
    msg.lat = 0.487981230773;
    msg.lon = 0.0500954050158;
    msg.z = 0.266316703837;
    msg.z_units = 139U;
    msg.cog = 0.125806890408;
    msg.sog = 0.311394345612;

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
    msg.setTimeStamp(0.969121572724);
    msg.setSource(403U);
    msg.setSourceEntity(99U);
    msg.setDestination(24293U);
    msg.setDestinationEntity(160U);
    msg.name.assign("OWABMTKKNUVDLZPWEDWJVHJWHBEYQYEGMJCQONICLTIXFTLZNWZIZTVHKGNFILOYTDYFWXUGLMBDF");
    msg.value.assign("KDNNQEWTPYVDVZSFAMANGJKVEQLNCAKMZRUTWSMLRYJQUEGQKXNIQIJKHZCKGLIVICYVCOAEPYGSGHXSQVSRAEDHHLETOBGFCIOMXFDQNXJZFUHYCWYF");

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
    msg.setTimeStamp(0.317420442771);
    msg.setSource(45740U);
    msg.setSourceEntity(245U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(40U);
    msg.name.assign("TJYHTVNBHMADQQFXCNYLMXZIIPWWUIKWLHUOLNDDHGKGSPKHNEQWENGTHSISSMYIUFPKKBEVAWVQQG");
    msg.value.assign("QOKBNTNOXXSZBFHSYQBGTVTLYKNNYLYHSCZCQMOWCHFQEJXFRVILDVJCZNZJEFYGGPOKBKAMUBEQCUWHGEJMBPEMAXHPDLVQDTRBVWPTYDUFAXODIWZSIXTJLZSRGSCHQWRNJAGFJLZVAWJNWCAVHRDSYVUIFGULEPQWNLUEZTVBTAGRYRWZBMIOTUPMUTQMZKJFRSXPKFPGDXUSE");

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
    msg.setTimeStamp(0.358506138643);
    msg.setSource(27837U);
    msg.setSourceEntity(136U);
    msg.setDestination(48304U);
    msg.setDestinationEntity(26U);
    msg.name.assign("PUWVAIITULPPUMXPTVBBIUJXTRDMRCOZGLHOXVOKUZBPFPSNHDEANWYUEHBYRDJQVXOCQGNZNKICQTVARFEMBMH");
    msg.value.assign("CIVZCBOVBCQPHFHQRQGXKJWSXEJTKMSORUCNZPRJIRIIMASYZ");

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
    msg.setTimeStamp(0.197287697766);
    msg.setSource(63102U);
    msg.setSourceEntity(170U);
    msg.setDestination(25437U);
    msg.setDestinationEntity(123U);
    msg.name.assign("EJGJXNUKOSLVTRCGJUXRNDIAACVWJGCREQQUSKYHKLRGMABIKZOQBZNNWWILGMEDYWLEMADHZMOAWEZDPLJMUXHYFWPIALIMXEWEFJONNVPZGYPQHNHRPSZJI");

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
    msg.setTimeStamp(0.852071393283);
    msg.setSource(38927U);
    msg.setSourceEntity(151U);
    msg.setDestination(29212U);
    msg.setDestinationEntity(212U);
    msg.name.assign("JOPBIGZBYNLAONTNDFZAXFJKPICGDROFTPPIBGHBLDTBJFRTXQUGUEAESIYDJDMHTRHCFTSNUPAKICDPZINHXCLSEMDKOJSCYLXDEMYJWKNJIBXZXZARWPFOTUCTWRIV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZPIXQKLCOMOISPMJYBWDKGSR");
    tmp_msg_0.value.assign("UYVECTTNJRYRSMCKTUXKILHRZAJEFZUVAHBXLZBYJYFMYOGEJHLGBPRNQPWUCANSZMECIQKGPSWINVHQLIJRAGORKNPZBWBMHDKBEWUOZBSTGYEVVVLDXFJVWWGQCKQCQTNAXGOVLZIMDCZWXFOXEHIOKIDSUPUILXWJMOPWAAMQYJNDDLOX");
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
    msg.setTimeStamp(0.259917525324);
    msg.setSource(42880U);
    msg.setSourceEntity(48U);
    msg.setDestination(1371U);
    msg.setDestinationEntity(226U);
    msg.name.assign("KXWMRMPHQMEBUIDNUWYOTZVNDDRBAVQEWIPUAFZNJRJITGWHFBCNKMMPRHCOYDGJIYRRJWSNHCNEEPYZXLF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XTJHOKZRUVVUOHJVZWECNURSUHQYRWMQG");
    tmp_msg_0.value.assign("QVNXGZBJAUSTTMLQLIUNTDHBCMMMCXNQVPGNPGBKTVJETTBXQQHORBSAKRELIGUIVPBESJRARYQFFRDLVHDWWOWGQPXEDZHKEUILXFBBPZJJOGWTXBAQWEUGGQDMMWCEFKCKVUXVVUPFNESNQSFYHFTAZDDPXJROIISMICYPOYELHONAJIIHFTZDIWOCWFRALCGAMZWDPKGCJKSXHFMHYDVYJMRHKKUTWEOZYNRZJCNLVSN");
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
    msg.setTimeStamp(0.0825213446396);
    msg.setSource(1394U);
    msg.setSourceEntity(1U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(68U);
    msg.name.assign("HULQSHBGYFGWFWFPBWZTERDMSIECEJJWPNNCYHGZGNBUMPMYXTWZRCDFDKNTVYSTOLAFEKVRCLBPAUPUOCXKIAWZTRSDKAPQVFJQZJREQRMBMXWSXUMAJQJFBMFDDTTWLMVAUHREAZBISPKFNIOKHOZYCEUOHIMAZITFVJQJXIPLHNKDNGPBOHQXRUBLIYSKBOGYLAZAGNRCXXOZOLLUKICQSVYDVJXV");
    msg.visibility.assign("PHTBPBRHQUDWLFNJWBHIJLZXSGYJKRNZTMPMWOQVZAKTYYVEIGHOWXSFGGRX");
    msg.scope.assign("LMEREPAGUVPJFMZKZVIXTDSJBUQHYDIWEWSOERP");

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
    msg.setTimeStamp(0.418630521954);
    msg.setSource(30531U);
    msg.setSourceEntity(254U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(18U);
    msg.name.assign("HUONSZPDCJKZBFAQFBXYMFDQEOGXITKYDHZOYEWZBJBLCDCRWCXSTEVXWPDOMLSM");
    msg.visibility.assign("FQOPJYWSDUEOBDCLGSRSZJEGFLHIWIXZIEXUDGZDNRYFBWKLZGHSYATRQXDPYJACBJHTXMWNTQOSUVACSIIBCLQHKQNJYVMCUMGWPKNZAMOUDMZCSFUNTOJXBSPBDQQLGBVXZHPEEOYIOUVNJXPNK");
    msg.scope.assign("QMNKIIEIMBWUMXGLQUWTUCDUHLJNJFUDHRHXFBUGMOZASQRFMACGNJMHPBXHSOHEJSAPOVVGACXAXKTHLMPICLVTPJNQNFWCFCQBYKSWCBVGTWPFQCZNXHTKOZTDCIEKSESVZDYQNLRVELERPGJSDOZRRWEWKODFMTALXAPJIXJSBBMDXPOUVRMTUIZOWJUDHIQCLKTEKYAQWBGWDIYRSERLNHYZBZUFZ");

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
    msg.setTimeStamp(0.207507945996);
    msg.setSource(44589U);
    msg.setSourceEntity(141U);
    msg.setDestination(37800U);
    msg.setDestinationEntity(218U);
    msg.name.assign("UYOBWUENSLBRLSPPGUQOCFUA");
    msg.visibility.assign("EDNVORUXMTIKUCNLKOHMNUEIGHFFIOHNGEOCGVRVSBZGWIZUTGULUVIXLQQYLJKDWSQPECAASXUJXZSWTKJMDSMLWQHOOHPSBPUXEPSQPVYYUOTOZMYESACGCZPBZCJFFAVTDIWYDVTILHQJXTFBKGJCBAFLAPBTZKNYMNCXKTAOOFFXWHJZNSNQGAQYKBDRMRJBMHVNUIYZGEWISRFRNFKZPRMPEVGWEMJDWRLXRAEYHCRKACYLBJPWLXBV");
    msg.scope.assign("TXGZIJWZPPXRTMOTTMJDHEKNIOBWUGNLBQTKOAPHRECPDXFVHL");

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
    msg.setTimeStamp(0.912340264266);
    msg.setSource(56344U);
    msg.setSourceEntity(70U);
    msg.setDestination(32851U);
    msg.setDestinationEntity(243U);
    msg.name.assign("SJCZMPAYBDEOTKIXACSEBOUNTEXVPPTJJBSGKGWAQTPMNHKNOJRUHEAODKXEUMQXQXPXWRUQMPGD");

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
    msg.setTimeStamp(0.353729739594);
    msg.setSource(51308U);
    msg.setSourceEntity(96U);
    msg.setDestination(56999U);
    msg.setDestinationEntity(42U);
    msg.name.assign("USARUZGYBTOQEQVPINDSMYNDBHCRVLUWSNVTVTFBOFQKQEPIMZWPYYPNWCIYVEYMKOLCAPBGZRXXCUGHZRRFSQLSNFUGOKYCFBFTNKT");

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
    msg.setTimeStamp(0.522840333171);
    msg.setSource(23342U);
    msg.setSourceEntity(118U);
    msg.setDestination(26729U);
    msg.setDestinationEntity(53U);
    msg.name.assign("IHNNXJFKFTQRJJPLAOMJMHBKTGFPROIYQIXBPWSNTLIKHJAETXHB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EBDMVJRSJCQKATOLTPXHBFSOGYNQYDJVYNFDLDGIMIWWXISRDRZPUZQFQJJEUKMEZAZYSXTAJIWHDUXSHHMVPMXZAIPYEQUFTTOLXLNHBNFCSRAZYVQRCSERSGCGYNXWBEFULBGQNIZJVCOKCPLGOTBBLGHMGXHJYPIDMUOJEEUCZRVPNQDDVCNIIXQTEFC");
    tmp_msg_0.value.assign("BDZIEJQFYXKKDNLSDDQDJIFYOAZOPMMSCRZOJKFWELLFMZHPNKQLTCFRPRMMBNPVMRGNIJZVHQTIPCICYUMNWXASOITXWYNHQSECWQXYKXYLFSRZTEMKSVPJIJGIULLVBRRACTBYZUAQCUNNFZPPBCQSTBWDFZTKOHXIAYDLATHULZYNUOVXQWABOEXCHV");
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
    msg.setTimeStamp(0.180063833449);
    msg.setSource(50984U);
    msg.setSourceEntity(231U);
    msg.setDestination(35459U);
    msg.setDestinationEntity(68U);
    msg.name.assign("YFDBUJTLCSKAYGNDSOGCBYNWTGDXNBDOHZEBMCLSSUPRWOWSEUYZGIAYKJZBLZQYTAGUCUTUHSZHQMRADBHTRZQOCUJLASHKQFVSXBEUQXALJVYNVCTYEEWCAPNIWXPWVPWCDKRBEGI");

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
    msg.setTimeStamp(0.746864124722);
    msg.setSource(12133U);
    msg.setSourceEntity(89U);
    msg.setDestination(38437U);
    msg.setDestinationEntity(84U);
    msg.name.assign("GSPWBUQDONYAOSVERGYOUXZATTJEHIBDYGYVFBFXKRFMLPLCRRTUTHJXCVWZIKJNFHXDUAYPLNAZVKSBHLLDIFJZFIHMKHOZXVBRQQPBSKEGNPVNSTWCGTVHCUREL");

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
    msg.setTimeStamp(0.961930892663);
    msg.setSource(28121U);
    msg.setSourceEntity(57U);
    msg.setDestination(29433U);
    msg.setDestinationEntity(154U);
    msg.name.assign("OJCOMJMDBXRBEDFYCIZGBTDLIICQTJHSJPSSPXSUIC");

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
    msg.setTimeStamp(0.384979757225);
    msg.setSource(7991U);
    msg.setSourceEntity(220U);
    msg.setDestination(20115U);
    msg.setDestinationEntity(133U);
    msg.timeout = 2574115117U;

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
    msg.setTimeStamp(0.80920804996);
    msg.setSource(42004U);
    msg.setSourceEntity(165U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(34U);
    msg.timeout = 2127720318U;

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
    msg.setTimeStamp(0.294895077504);
    msg.setSource(48084U);
    msg.setSourceEntity(27U);
    msg.setDestination(38172U);
    msg.setDestinationEntity(173U);
    msg.timeout = 680515583U;

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
    msg.setTimeStamp(0.635852033179);
    msg.setSource(48474U);
    msg.setSourceEntity(106U);
    msg.setDestination(640U);
    msg.setDestinationEntity(131U);
    msg.sessid = 822470961U;

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
    msg.setTimeStamp(0.501038511089);
    msg.setSource(50159U);
    msg.setSourceEntity(163U);
    msg.setDestination(53318U);
    msg.setDestinationEntity(18U);
    msg.sessid = 922004933U;

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
    msg.setTimeStamp(0.230116975496);
    msg.setSource(42634U);
    msg.setSourceEntity(139U);
    msg.setDestination(47997U);
    msg.setDestinationEntity(178U);
    msg.sessid = 3609567201U;

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
    msg.setTimeStamp(0.0902022333156);
    msg.setSource(40095U);
    msg.setSourceEntity(129U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(189U);
    msg.sessid = 1387413933U;
    msg.messages.assign("CCQTGDNLEYLNBIJMOTQPOCSLWVESTDAWPUWQDZXJGDBPBNKVZVHFGHXLJPXAEEYBBNCIFHOYFHDXFVTNDKHUOKUDRTALIGOVNOUUSEWCJAWDSXCEETLPX");

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
    msg.setTimeStamp(0.27429493926);
    msg.setSource(7598U);
    msg.setSourceEntity(55U);
    msg.setDestination(41954U);
    msg.setDestinationEntity(72U);
    msg.sessid = 4291648810U;
    msg.messages.assign("SZRYMBIFFYYNXPMNVOZEPGJVBIWNLPAROUXDVYBJWXRCUHLLXMREIQVAATFJBULXLVLGKMRPVILIUITEPPGVERFTPDHCQTKOYEWQJVJOFHOEQK");

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
    msg.setTimeStamp(0.0871002142259);
    msg.setSource(17554U);
    msg.setSourceEntity(158U);
    msg.setDestination(18615U);
    msg.setDestinationEntity(34U);
    msg.sessid = 2351148775U;
    msg.messages.assign("XZILAWXTKPJMZGGBNZCMJOVXDKSTIIVYJLIGFMYSMERHLESJFXYGQAASLKRVKMERWNHNIYPTNACOWTXCAVSQEOIJRPTJGACSNUWFLQWKGDJQUAMGLUDWQCMDIZZMIVPHURRZOBHZTPHBYKLVPYFVSNPVTZHHSOLBQYPPSMBCHWGIAURUQMCBBKVDYOBKQPZJKGFOHFAYUUZFEVTXKTXFENFNOETLOUBWWDQCNLB");

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
    msg.setTimeStamp(0.807450122945);
    msg.setSource(33384U);
    msg.setSourceEntity(0U);
    msg.setDestination(45212U);
    msg.setDestinationEntity(103U);
    msg.sessid = 2679214784U;

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
    msg.setTimeStamp(0.469359041953);
    msg.setSource(9733U);
    msg.setSourceEntity(159U);
    msg.setDestination(13999U);
    msg.setDestinationEntity(157U);
    msg.sessid = 826404950U;

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
    msg.setTimeStamp(0.985940888574);
    msg.setSource(23322U);
    msg.setSourceEntity(89U);
    msg.setDestination(44375U);
    msg.setDestinationEntity(77U);
    msg.sessid = 1706931718U;

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
    msg.setTimeStamp(0.632447704664);
    msg.setSource(9255U);
    msg.setSourceEntity(125U);
    msg.setDestination(65446U);
    msg.setDestinationEntity(134U);
    msg.sessid = 3072873367U;
    msg.status = 53U;

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
    msg.setTimeStamp(0.229519911888);
    msg.setSource(59934U);
    msg.setSourceEntity(138U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(11U);
    msg.sessid = 1448111912U;
    msg.status = 104U;

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
    msg.setTimeStamp(0.0433928793927);
    msg.setSource(19930U);
    msg.setSourceEntity(46U);
    msg.setDestination(61629U);
    msg.setDestinationEntity(128U);
    msg.sessid = 3941493072U;
    msg.status = 52U;

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
    msg.setTimeStamp(0.00407027740507);
    msg.setSource(10641U);
    msg.setSourceEntity(218U);
    msg.setDestination(23648U);
    msg.setDestinationEntity(125U);
    msg.name.assign("NZWWXJCZREATNNEMLTANQBBPNSKXUYLMKLJRBFOGPMTHCSSKCPANDOYIWGUMFFOBZCAEREYGUODCYNPPQWXRVDCBTBQVISKKZGIYMWOLTJVBMUUZPRQUIJNVFZLSVQHJNEKXQUUYRFHPJRSSEZMYGXALWDWMMDPJREQUXTFBJEOSQHKTKAFIGSDGBYIZLUAWQCAHOXBPPCEJHAVTOIGDIDQCONKTDOEHIXFIDVFAVLCZ");

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
    msg.setTimeStamp(0.343390612333);
    msg.setSource(19971U);
    msg.setSourceEntity(102U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(129U);
    msg.name.assign("SVJGFWLXATRTRZRMGRYQTEDTMSHXLOPSTNPOTPFLC");

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
    msg.setTimeStamp(0.317045671659);
    msg.setSource(8774U);
    msg.setSourceEntity(206U);
    msg.setDestination(9262U);
    msg.setDestinationEntity(97U);
    msg.name.assign("YLIMRBPNMPIBQXBKCMZEMPMFDKCOSWUMHJEMKQXBXXIQYEIYQAZOUEPLYLIWUPSPDHFWEJUXPGWGWXETUNTNBDSARXOOZZESDCCBRDDLVTTQGAHNFWZE");

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
    msg.setTimeStamp(0.587510828122);
    msg.setSource(19540U);
    msg.setSourceEntity(201U);
    msg.setDestination(21164U);
    msg.setDestinationEntity(207U);
    msg.name.assign("UUYWCMACHXTFOUKTEGYSCNGEEVZDDOPVQYOAYAMLNUHKBHKUBYEWDINPAXFGJHKXSWTFVXRTQXDSZTWTVQEMWIDMKJNIQJEUSLVYPABJMVCNZZOZRPXRAHLGEVIAKWJPSAOCRGMJDKLFXHMAZLFUMSBWGYGKIVLFDRGLXEKIQNKQYHVRCPLRWUZOUQJOMCNTQPTZDGSNYRMBSNZCTWQHJYRVQFHCDPIBINLWZJBCOJXTF");

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
    msg.setTimeStamp(0.721835140717);
    msg.setSource(30603U);
    msg.setSourceEntity(19U);
    msg.setDestination(759U);
    msg.setDestinationEntity(112U);
    msg.name.assign("RNQMFZBLUZYUSBAYIBMOCRLTKXUVGYAQDAQCZQQLGNOKOEHHWVKRWHQMABZVGUDNYJVISJDTBPVJWZXOLLAZYSXTGQGECISGXSYQTPKZYKWEBRVRUNLCNOIMDUTTUFXEDPBGJCPWCMPGIOGTFFRMCJCOPRQRTKOFESKHEZHMLOALWSPVULJCNHXHRPIEZITWSPMLHYAKNFNDWBF");

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
    msg.setTimeStamp(0.315861011664);
    msg.setSource(14542U);
    msg.setSourceEntity(155U);
    msg.setDestination(6639U);
    msg.setDestinationEntity(59U);
    msg.name.assign("IQUQMSZHAGTEVWJVDPVOGKISTYMHUWKJDJFNGYCZMLXDIFKTMKOYKXVEDVNKZQJBLXGOEBCFDMQTAIEXASLDATMBYSBJRZPPWCCKGBLKGBEAMLZXLTQCPBWLQCCCINSRTOALFZKCJIGRRIOTYLFPJQNAHESN");

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
    msg.setTimeStamp(0.709572044088);
    msg.setSource(50105U);
    msg.setSourceEntity(103U);
    msg.setDestination(22885U);
    msg.setDestinationEntity(240U);
    msg.type = 87U;
    msg.error.assign("DSAJMGFMBPIOELMGVXEKDGRVRMIHSOYLLVVYDZPJUWXVBWEAEONBXYHQDRBFLFWCLPQGZBOETCKAPAHQWPRUPLQKYTMSHSCKIGUBWCZVZFHUJBTKNXIKLVIAUQOXRWQDABOLHXPUTHATZYZJDRQNRYERQROELVCZSBNGQXJTVAUZFSOIFHMRJKPIFJHBNKNMAGZTLEDDFHDXSEMUSQNIGCTWXGYFIPEYSYMFCJCIWTJSTO");

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
    msg.setTimeStamp(0.473977218291);
    msg.setSource(59341U);
    msg.setSourceEntity(211U);
    msg.setDestination(11985U);
    msg.setDestinationEntity(36U);
    msg.type = 216U;
    msg.error.assign("OXOWAWFEXRZSSYLLQTUVUJXMFZGXOMZSTPQYOIZOSOHVBXBJLVYINIRLCELBPAMOYTKKVYZMDKSVQYQDCHZIGIYUKDBFBKURZMTCEASNQFBVXPIVSANNJRPGKFCCIGUEQGOEUWMQPDRCPNJZDRNHIWYPJDVJXAHMPQYAWLHNBETOLCWITHTCUVZREDRFMAECUPJTUNHGAO");

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
    msg.setTimeStamp(0.0322428129588);
    msg.setSource(9418U);
    msg.setSourceEntity(106U);
    msg.setDestination(49351U);
    msg.setDestinationEntity(56U);
    msg.type = 214U;
    msg.error.assign("DSYIPKFRIMUCGQNPRLKNHVAJCZTXQSHBECGQSIKGLRIOUZWWFVYHUVPSBEPJZAHLDACLNC");

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
    msg.setTimeStamp(0.954826034764);
    msg.setSource(17089U);
    msg.setSourceEntity(183U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(84U);
    msg.seq = 40025U;
    msg.sys_dst.assign("JDLQRSPZQGFKUWQSPNRTRRHMBVGLZJHALVTWVKWIIAFCFKYDCWCGLNRVNXEMVKOFUUGMZKYOQCPYRUNIXBJJIGBWYHONCALDD");
    msg.flags = 33U;
    const char tmp_msg_0[] = {-66, -85, -15, 93, -100, -53, -103, -47, -92, -127, 30, -68, 19, -121, -122, -30, -17, 47, 124, 99, 18, 21, 65, -10, -53, -107, -105, -45, -20, -5, -101, 72, 77, -4, -80, 112, 2, 46, -83, -38, -67, -45, -29, 72, -100, 108, -6, 77, 64, 103, 69, -112, 109, -71, -48, 10, -32, -109, 51, -43, 17, -21, 33, -92, 28, 78, 121, -32, 48, 123, -102, 126, 89, -11, -77, 56, 2, -37, -29, 110, 0, -13, 43, 36, 71, 5, 26, 100, 44, -22, -46, -28, -65, 103, 60, -110, 69, 95, 47, 0, -29, 49, 107, -29, 40, -82, 15, 17, -39, -113, 110, 35, -74, -84, 69, 4, 92, 125, 116, 16, -11, 20, -34, 20, 25, -84, -55, -25, -97, -110, 61, 125, -19, 2, -32, -84, -110, 70, -18, -107, -61, -112, 123, -106, -109, -51, -30, 73, -38, -54, 64, 59, 94, 111, -15, -5, -97, 67, 27, 61, 74, -42, -90, 16, -47, -91, 80, 124, -93, -103, -121, -26, -88, -108, -66, 53, -65, -6, -89, -19, -101, 83, -23, 106, -64, 14, -93, 113, -56, -40, -24, -128, -119, -101, 106, -126, -82, -69, -45, 16, 49, 68, -83, -50, -76, 89, 106, 95, -52, 60, 30, -62, -95, -37, 82, 48, -56, 69, 79, 114, 72, 73, -109, 81, -78, 60, -40, 103, -122, 58, 89, 2, -82, -36, -41, -52, 27, 115};
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
    msg.setTimeStamp(0.228004667105);
    msg.setSource(35679U);
    msg.setSourceEntity(44U);
    msg.setDestination(40791U);
    msg.setDestinationEntity(237U);
    msg.seq = 33949U;
    msg.sys_dst.assign("YOIWKNPHQSKPMFCXUOJSWPQVRUAIGYCMSQFSW");
    msg.flags = 179U;
    const char tmp_msg_0[] = {103, -42, 34, 45, -33, -43, -18, -13, 121, 17, 120, 16, -19, 94, -62, 39, -123, 58, -10, 36, -22, -116, 123, 46, 123, 77, -87, -105, 4, -72, 121, -31, -71, -16, 100, -110, -98, 60, -128, 46, 105, -44, 58, -20, 25, -67, -113, 7, -68, -30, -109, 20, -9, -24, -104, -2, 86, 70, 101, -63, -85, -100, -38, -7, -14, 67, 53, 96, -30, -60, -57, -127, 24, -40, -34, 35, 80, 126, 57, -128, 12, -114, 10, 126, -21, -48, -48, 117, -55, -99, -94, 119, 10, -2, -20, 25, 12, 3, 89, 116, -35, 103, 101, 124, 103, -117, -101, 99, 15, -103, -91, 122, -103, -95, -47, 89, 97, 65, 46, -110, 48, -89, -21, 50, -90, 121, -26, 78, 126, 56, -116, 84, -38, 121, -36, -9, 111, -31, -57, -117, -64, 105, 117, 96, -77, 125, 18, -101, -12, -104, -57, -54, 88, 126, -118, 52, -32, 68, -92, -25, 12, 61, -51, -39, -17, -72, -44, -86, 105, 6, -115, -21, 67, -93, -103, -78, -70, -4, 75, -19, 26, -46, 43, 110};
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
    msg.setTimeStamp(0.998843410061);
    msg.setSource(39852U);
    msg.setSourceEntity(71U);
    msg.setDestination(44343U);
    msg.setDestinationEntity(191U);
    msg.seq = 7514U;
    msg.sys_dst.assign("FSQGIUBRVOCKNAUPQFTVWPTCGIIBSVZRLAWGWRYYWQIWGQHODSSYGGDWEZVNMLZTKPGOEYTVTJCEXKWQXMWXRVFAPCUFYIRDLZBAGBEDIQEONXSDENQCMNUEMKZYKTYZDVPWEOZDBHNEBRNMMNPJPSUJCVKGPPSNRSEMBQKCPXIZOYJSCFHHLXOXTUIAJFLJGUCQHMFJUFARZUVLNVTKIWA");
    msg.flags = 11U;
    const char tmp_msg_0[] = {58, 77, 92, 83, -36, 85, 111, 74, 117, 35, 104, -63, -61, 120, -40, 48, 68, -124, -119, 24, -48, -122, 4, -1, -125, 3, 11, -98, 21, -33, 27, -32, 108, -25, -100, 44, 107, -121, 125, -50, 20, 121, 87, -78, 74, -110, -71, -112, -83, 79, -72, -118, -99, 50, 18, 41, -55, 123, -13, 30, 70, 67, -51, 59, 74, 14, 87, -110, -85, 23, 47, -125, -17, 41, -23, -35, -114, 77, -100, -120};
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
    msg.setTimeStamp(0.96113257149);
    msg.setSource(63045U);
    msg.setSourceEntity(240U);
    msg.setDestination(16080U);
    msg.setDestinationEntity(146U);
    msg.sys_src.assign("TCMMUXEXBGAHHTYPWIGZSODXJXRSUTGWSTOOOEAYJRHYHUACPRSBTAXHQDJLPMXGVQOLXSCDIVFFODDQSMBCXKXBAWPKCYUCZTNKWFGNLPDFQKPSDBIWVPCJUVUEFLBAYZMTAQMNULRSLANFEGYZJAHYWPCZMYZTUZHWLCOLLIREVIMVJLIGSVBZAPTKNRZFHKYJKMEPDIFTBQRHBENWDRYIKFEEHOQJWEIIOVNUXJUKGFSQGDONGCQVVQZBM");
    msg.sys_dst.assign("ZVKNEQZSDLBMAKPVHXVSZVYFNQFFYODLXRXWPOQINYPIWRXRGDVCZMCQUSEGJXNJGGWXKNDHBVLEYBOASCMEMWP");
    msg.flags = 9U;
    const char tmp_msg_0[] = {-72, 60, -100, 96, -102, -21, 121, 10, -36, -99, 30, -100, 54, -35, 97, 9, 49, -44, -21, -89, -75, -67, 44, -86, -86, 48, -113, 31, 91, 8, 9, -33, 1, -54, 59, 49, 83, 2, 109, -34, -24, -79, 51, -19, -40, 103, 23, 98, -116, -32, 41, -86, -103, -96, -32, -21, 58, -116, -82, -93, -41, -121, -41, -69, -15, -18, 84, -77, 18, 109, 101, -14, 5, -59, 33, 88, 117, 55, -128, -124, -31, -61, 66, 97, -86, 69, 99, -105, 42, -15, 53, -51, -108, -94, -38, 96, -127, -102, 103, -9, -55, 16, 116, 107, -42, -30, 111, -63, -114, 69, 42, -107, 34, 49, -112, 65, -118, -1, -59, 51, -108, -72, 111, -47, 29, -23, 5, 12, 105, -40, -121, 76, 109, 54, 117, 2, -110, -94, -60, 96, 78, -120, 22, -87, -35, 67, -95, 19, -50, 125, 32, -52, -116, -68, 41, -11, 26, 19, -8, -52, 53, 3, 45, -5, -65, 26, 14, 84, -12, -119, -74, -113, -70, -24, 90, 10, -75, 99, 9, 112, -63, -55, 111, 113, -22, 52, -82, -14, 101, 73, -90, 95, -128, -11, 76, 40, -58, -40, 13, -2, -64, 81, -6, 36, 92, -115, -18, -122, 109, 0, -41, -40, 49, 28, 83, 78, 34, 31, -125, -62, 60, -64, 96, -115, -112, -47, -104, 100, -12, -45, -24, -1, 37, 38, -73, 75, 28, 87, 19, 33, 2, 66, -43, -66, -31};
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
    msg.setTimeStamp(0.808220265474);
    msg.setSource(17146U);
    msg.setSourceEntity(146U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(194U);
    msg.sys_src.assign("NZYOPYZWODOATILMUROWIUNOWLVEQFCCWDSJFEOENFTPCNQHHZNREFQBIBYTQKXKUKQBVTHEGMTYTHVZNCOJWXXZNPYWDLUFMPWWILDPVZSJMSRKHJHIOEGPYRPRAQSINXDDYJJGHSWOAHVEYMYVXUG");
    msg.sys_dst.assign("KGZMOVAFNGADFBMJQQETYKFOSIRNCEXRTTAPOYHRSYCISIWLNIYIQGEUKSTUGTEBJPZXQUDTHYUMADFVLMSPZACNPAGBQGKIOEWOOHWCBBGWMDXVFHNSCBHWVCLXKLREAVUGNUKZHDDANVMJFOFJZBBTRRNOYLHRULXPWXYCIHYVXBJRWLKJTTEXMQMZLPFUOZQVK");
    msg.flags = 10U;
    const char tmp_msg_0[] = {-108, -98, -38, -84, -92, 120, -5, 122, -124, 32, 3, 21, -106, 124, -71, 90, 113, 115, 98, 22, 89, 63, 112, 85, 70, -46, -93, -15, 104, 5, 120, 46, -44, -60, 96, -57, -128, -116, 105, -58, -49, -4, 10, 32, -51, -56, 67, 74, 59, -7, -71, 124, 31, -20, -88, 110, -79, 83, 91, -93, -32, 93, 41, -95, -75, -23, 14, 13, 57, -55, -7, -9, -92, 76, -83, 13, 112, 26, -102, 103, -121, 120, -32, 15, 107, -40, -21, 69, 120, 112, -18, -64, 31, -122, 8, 34, -115, 72, 35, 88, 1, 31, -41, -92, 19, 31, -58, -109, -72, 11, -90, -8, -44, -79, 91, 21, -21, 96, 3, -40, 100, 29, -31, -122, 30, 55, -106, 111, 87, 14, 24, 94, -79};
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
    msg.setTimeStamp(0.351865541575);
    msg.setSource(63325U);
    msg.setSourceEntity(29U);
    msg.setDestination(30128U);
    msg.setDestinationEntity(5U);
    msg.sys_src.assign("RLPVBCWCLAVGOGYZRBYUDRITWIKVJEYYRGQZHFWUESHDMDRLSGEEDOXSCDLVJVWOYUBHNTHTIITXAIZWKKGYHYJBQJWCZOFHNZJQRIONCNZCWOUXSAPWZFTWJCDXOJPMNGXEMUEWJIAERJFHNRTQASKMTP");
    msg.sys_dst.assign("IZYEAFDERDRUDCTNTXOHPEMNZYUVVEHYFYWBELQYHGIZLCEHKUEOHCGFNBBIXBPOCXWWIIRUPALPPSYRDFIXFXKAH");
    msg.flags = 224U;
    const char tmp_msg_0[] = {-40, -90, -28, 59, 16, 91, -16, -71, -40, 40, -79, 75, 3, 57, 30, -32, 0, 83, 35, 72, -67, -80, -19, 98, 99, -40, 105, 93, 101, -74, 32, -42, 47, -43, -119, 14, -67, -67, 113, -3, 42, 25, 73, -2, 22, -120, -60, -125, 76, -50, 34, -29, 86, 3, -96, -118, 57, -91, 80, 31, -126, -99, 122, 62, 90, 123, -43, 5, -102, -24, 38, 9, 59, 118, 111, -33, -46, -85, -43, -83, 26, -66, 119, 7, -106, 124, -109, -42, 44, 87, -118, -53, -49, 70, 35, -90, -100, -30, 39, -124, -91, -65, -13, -61, 1, 90, -109, 53, -96, -105, -55, 113, -74, 29, 81, 74, -99, -14, -14, -49, 87, -50, -108, 26, 80, -111, 32, 91, -103, 70, 21, -54, 40, -51, 66, -92, 60, 71, 27, -45, -115, -87, -14, 96, 79, 4, -29, 34, -42, -49, 46, -77, -42, -80, -38, -98, -10, -9, 77, -71, -33, -32, -60, 10, -111, 107, 59, -112, 72, -51, 113, -49, 70, -126, 42, -62, -32, 69, -35, -24};
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
    msg.setTimeStamp(0.647872987541);
    msg.setSource(146U);
    msg.setSourceEntity(42U);
    msg.setDestination(55136U);
    msg.setDestinationEntity(142U);
    msg.seq = 17967U;
    msg.value = 136U;
    msg.error.assign("WQOCWYRSCTLFKLSNDZTGLTYDFHZJOVDANYMBZTTSCRHUGPOIKJKEWZBCPJOTZOLSVWWSDSIRDNMCQVYVVARLFSCBJKBXVAMQCAGVOHUEJAEQSMPWKIQVXEYJHQFI");

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
    msg.setTimeStamp(0.694378174353);
    msg.setSource(21359U);
    msg.setSourceEntity(120U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(210U);
    msg.seq = 13888U;
    msg.value = 19U;
    msg.error.assign("HFAWUKGWNRPEOAVWYWZTDEZAYZIILLBCBEAVVPWXSNXUQRCUHFSYIEBZCFLQKCRQYPCKUWRVBYLWHOPZAMOJXEOCPQZLEPYYSVJENTQSDFATOJBZSIUYIKDGMRGYCGGNIIKOFMIXVXUNHKQZJFOLWDCFGUKMNOHXZFDSSWZKMJBJIFLHXGEMDTPTJDANJQTMLONBQNTVCSJHYFABBXRLGTDXNHMPUT");

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
    msg.setTimeStamp(0.6692835873);
    msg.setSource(43829U);
    msg.setSourceEntity(152U);
    msg.setDestination(50601U);
    msg.setDestinationEntity(147U);
    msg.seq = 24794U;
    msg.value = 96U;
    msg.error.assign("FZPXLSGVTDITIYFKXBRMJQHGQRQFJBCIIPSWWOQLYMEGDVHDMKUGIVJFQEJWULMMGDIIXNYWTUTBMBXCZWMZZAYRAXSWNPRRYZQCDHBNNMYPJKOIKISRKLEDPIQDJKTSCXZQBUAAXOFVTRBHFAWSNBCSOMAZDGHHHKVVVCXFATOEOLOOTELXZHEEMYVJCFLOUPGNNQEGKUGBJWSRKUVYZAXCNLGJDYUUEBLVRYPRJWSPZANCHDFETQCPLOUTNS");

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
    msg.setTimeStamp(0.890114322454);
    msg.setSource(19411U);
    msg.setSourceEntity(97U);
    msg.setDestination(46121U);
    msg.setDestinationEntity(23U);
    msg.seq = 37702U;
    msg.sys.assign("VFLUGZOWMTEWCMHIBTXIVNJAHVCFEPPGKJQBQODLXMBUCRFEVLCFZMDMSUVWNDHRWWLXUPTNFSMFTPNJVYEGBWLOUYHKXBXSZDAIIRFTPBYBKWNGHTUZJREFAQSXCDKVKKCLQMAZODHJPOHOPONJNVAFTAELJLWTRSVGUGAHIJBR");
    msg.value = 0.427542689744;

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
    msg.setTimeStamp(0.0793286228589);
    msg.setSource(46725U);
    msg.setSourceEntity(238U);
    msg.setDestination(29739U);
    msg.setDestinationEntity(248U);
    msg.seq = 38954U;
    msg.sys.assign("HQDDXIWJZNCNZQSTPOEQQEQINXRZQCLUGDBFFVAGLOBPFTANFJZAHVACEHVMMMHXUKFIRUORFYNTWHLYJSHDESKPUSVXOBAJWTLHYCGEUEKWVVBNOMZTYKLXIMFHGSENCDKKXCGCQEKBGOUIPHNQBCNZPVUSPZBYPEGFBXASDLZROLAJRDRRLJKIZFSIVOVSYRWTMUKSTRPMVGUMADJYIDGJWJBWJXAODKXNRHYTTWPFXEIUBWZI");
    msg.value = 0.315689109511;

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
    msg.setTimeStamp(0.749152575419);
    msg.setSource(50296U);
    msg.setSourceEntity(229U);
    msg.setDestination(25556U);
    msg.setDestinationEntity(159U);
    msg.seq = 59798U;
    msg.sys.assign("LTCOEEWLAFMCGZHJORXYOYJLVDCNZUQGQBTLWDTGPQHMFGMYHWNFWSTOMTVEOXEUJHFMQOGVZNKYKEJHWHBTGMVKBVXDDSCNMURUOYANDFFRIXKWDAKVMKEJANFXCXPUJUPGBSZ");
    msg.value = 0.881131737564;

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
    msg.setTimeStamp(0.294077927649);
    msg.setSource(53085U);
    msg.setSourceEntity(141U);
    msg.setDestination(9129U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.354507790365);
    msg.setSource(30488U);
    msg.setSourceEntity(100U);
    msg.setDestination(39968U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.539872393986);
    msg.setSource(27363U);
    msg.setSourceEntity(94U);
    msg.setDestination(58814U);
    msg.setDestinationEntity(58U);

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
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.84611295954);
    msg.setSource(61260U);
    msg.setSourceEntity(123U);
    msg.setDestination(42450U);
    msg.setDestinationEntity(217U);
    msg.action = 125U;
    msg.longain = 4282556878U;
    msg.latgain = 2808992929U;
    msg.bondthick = 4012566499U;
    msg.leadgain = 2433448176U;
    msg.deconflgain = 1988357705U;

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
    msg.setTimeStamp(0.366273087706);
    msg.setSource(4585U);
    msg.setSourceEntity(79U);
    msg.setDestination(1594U);
    msg.setDestinationEntity(153U);
    msg.action = 162U;
    msg.longain = 47326987U;
    msg.latgain = 1631302767U;
    msg.bondthick = 1712534593U;
    msg.leadgain = 1072671566U;
    msg.deconflgain = 3098251298U;

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
    msg.setTimeStamp(0.0157461472664);
    msg.setSource(21607U);
    msg.setSourceEntity(96U);
    msg.setDestination(36827U);
    msg.setDestinationEntity(179U);
    msg.action = 224U;
    msg.longain = 2240431091U;
    msg.latgain = 2849783519U;
    msg.bondthick = 2851059398U;
    msg.leadgain = 2878487727U;
    msg.deconflgain = 464534392U;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.51110457049);
    msg.setSource(20297U);
    msg.setSourceEntity(229U);
    msg.setDestination(11178U);
    msg.setDestinationEntity(67U);
    msg.uid = 17U;
    msg.frag_number = 89U;
    msg.num_frags = 230U;
    const char tmp_msg_0[] = {-122, 117, -67, -7, 126, -38, 45, -109, -51, 17, 7, -53, -5, 19, 10, 0, -71, 99, 47, 32, -77, -73, -97, -99, -98, -73, 56, -110, -64, 43, 49, 113, -29, 43, 102, -16, 86, 92, 105, 10, 123, 86, 126, 99, -103, -116, 60, -116, -48, -110, 124, 50, 47, -9, -77, 32, 101, -56, 56, 16, 51, 75, -42, -90, 99, -30, 23, -120, 115, -66, -35, 87, -94, -15, 46, -79, 54, 69, -73, 41, -94, 47, 77, 33, 83, -84, 14, -102, -44, -14, 103, 14, -79, 82, 60, 98, -61, 102, 92, 105, -92, -108, -51, -64, 111, 28, -82, -40, -5, 49, -18, 14, -108, 14, -76, 49, 75, -112, 11, 71, 7, 57, -69, 90, -40, 6, -112, 117, -108};
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
    msg.setTimeStamp(0.522217635614);
    msg.setSource(3494U);
    msg.setSourceEntity(237U);
    msg.setDestination(49591U);
    msg.setDestinationEntity(214U);
    msg.uid = 101U;
    msg.frag_number = 131U;
    msg.num_frags = 131U;
    const char tmp_msg_0[] = {-73, -23, 58, -93, -50, 89, 59, -5, -20, -101, -52, -68, -22, 118, 102, -109, 61, -113, 43, -91, 83, -21, 41, 103, -122, -43, 100, 95, -50, 89, -73, -114, -12, -24, 65, 89, 42, -94, -111, -77, 52, 11, 73, -96, -126};
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
    msg.setTimeStamp(0.81038175299);
    msg.setSource(26953U);
    msg.setSourceEntity(232U);
    msg.setDestination(27533U);
    msg.setDestinationEntity(136U);
    msg.uid = 238U;
    msg.frag_number = 39U;
    msg.num_frags = 56U;
    const char tmp_msg_0[] = {-87, 103, -67, 46, -82, 87, 57, 57, -85, 41, -102, 103, -43, 95, -63, -6, 42, 63, 3, 42, -73, -2, -90, -48, 113, -42, 75, 53, 68, 22, -68, 33, -69, 24, 113, 65, 27, 49, -118, -68, 61, 42, -41, 56, -47, 60, -9, -124, -36, -36, 23, 63, 74, 48, -21, 23, 122, -39, 32, -93, -61, 58, -118, -95, -120, 114, 37, -95, -127, 24, -125, -94, 111, -34, 102, 48, -47, -31, 67, -128, 65, -123, 14, 120, -14, 69, -102, -13, -83, 50, 86, 75, 78, 12, -67, -36, 19};
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
    msg.setTimeStamp(0.945968251623);
    msg.setSource(57547U);
    msg.setSourceEntity(177U);
    msg.setDestination(53564U);
    msg.setDestinationEntity(181U);
    msg.content_type.assign("PJOKWPCTNTBUE");
    const char tmp_msg_0[] = {20, 25, 38, -51, -26, -41, 80, -48, -36, -67, 57, -16, -65, 121, 55, 122, -52, 96, -9, -111, 125, 82, -33, -86, 116, -59, -94, -12, -47, -13, 31, 109, -117, -27, -118, 18, 5, 116, -111, 8, 112, 79, 27, 64, 71, 71, 54, 82, -10, -54, 28, -15, 106, -29, -128, 101, -20, 42, -48, -4, -101, 68, 66, 56, -93, -48, -16, -127, 92, -29, -118, 67, 52, 121, 32, 48, 33, 50, -23, -119, 49, -41, -22, -113, 112, -8, -99, 51, 90, -101, -50, -76, 24, 61, 25, 70, 66, 120, -40, -1, -49, 117, -24, 56, -44, -18, 12, 13, 105, 118, -90, -24, -120, -28, 75, 95, -19, -26, 59, 28, -69, 123, -68};
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
    msg.setTimeStamp(0.139641844395);
    msg.setSource(52587U);
    msg.setSourceEntity(227U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(26U);
    msg.content_type.assign("NTTJIZOWBPIXJHXPXX");
    const char tmp_msg_0[] = {-70, -115, 107, -44, -117, 107, -55, 55, -84, -44, 87, 70, 15, 48, 75, -27, 93, 106, 32, 32, -121, -105, -30, -123, -65, 53, 1, -69, -46, -39, -126, -17, 71, -105, -99, -117, 3, -86, 71, -17, -87, -9, -39, -39, 121, -6, -42, -12, -116, -6, 120, 5, -123, 32, -55, 28, -30, -128, -23, -51, -103, -78, 110, 17, 98, 33, 59, -48, 48, -120, -29, 80, -10, 83, 119, -120, -52, 123, -115, -37, -64, -18, 27, -45, 55, -94, 103, 20, -49, 76, 52, -31, 43, -78, -101, 109, -57, 101, -47, -42, -97, -5, -34, -105, -80, 46, 24, -39, 78, 70, -94, 18, 92, 104, -111, -91, 119, 24, -70, -10, -101, 62, -19, 93, -22, -20, -71, -35, 95, -47, -80, 12, 113, 87, -60, -65, 75, -60, -95, -85, -97, -11, 0, -98, 27, -15, -7, 122, 1, 61, -75, -69, 65, -7, 92, -92, 72, 34, -88, -21, -99, -19, -96, -34, -119, -78, 86, -82, -97, 43, -100, 111, 57, -25, 16, 31, 118, 41, -6, 34, -51, -110, 81, 37, 0, -44, -29, -62, 113};
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
    msg.setTimeStamp(0.615029982105);
    msg.setSource(40040U);
    msg.setSourceEntity(135U);
    msg.setDestination(45372U);
    msg.setDestinationEntity(0U);
    msg.content_type.assign("OUEYRMBJMADNODNVZLHPSDFXYFBHWAKBIUOSQFXKNWJIDBBRGSOXZCMGRJTTPWUCRFDAUIGGHCKYKNEZQBFUELOUVURJLAAMQGHWCVRTSOXZBPQPYZWTWFCJGJESZEPRJVYWTAAXYGXBFJPKZKIBLOTDBASRNHPHIEJWYWTQHEKIEWMVTSTLCF");
    const char tmp_msg_0[] = {-34, -66, 1, 31, -38, 67, 50, -124, 85, -63, -86, -32, 64, 23, 62, 6, 24, -118, -72, -26, -24, 119, 18, -72, 120, 27, -33, 124, 73, 70, -45, -33, 6, -127, -5, -114, -67, 31, -33, 111, 52, 13, -10, 60};
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

  return test.getReturnValue();
}
