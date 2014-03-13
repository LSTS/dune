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
    msg.setTimeStamp(0.475175172594);
    msg.setSource(43085U);
    msg.setSourceEntity(194U);
    msg.setDestination(15574U);
    msg.setDestinationEntity(116U);
    msg.state = 241U;
    msg.flags = 202U;
    msg.description.assign("QRRWZNJOPXSSQQLHRFXUVICQYHKEHMZDZKCNCZXAHOGJSCE");

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
    msg.setTimeStamp(0.471475321602);
    msg.setSource(53348U);
    msg.setSourceEntity(9U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(163U);
    msg.state = 115U;
    msg.flags = 164U;
    msg.description.assign("ORVABDCPTINFXRSEJEDPW");

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
    msg.setTimeStamp(0.575553678229);
    msg.setSource(61933U);
    msg.setSourceEntity(49U);
    msg.setDestination(37565U);
    msg.setDestinationEntity(32U);
    msg.state = 90U;
    msg.flags = 175U;
    msg.description.assign("YXGVENFQOZMZPNJFVHMRSHQFFBILHESEYZHCNWTPWQGUDEODJXPNBLGRMUOUISBYSROIACCJTLRKVBWBYDDHOSRPPMAHWMVFIKVZILZSVXLTIRWJOAKKJI");

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
    msg.setTimeStamp(0.106908562332);
    msg.setSource(30992U);
    msg.setSourceEntity(219U);
    msg.setDestination(8816U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.133437602257);
    msg.setSource(46386U);
    msg.setSourceEntity(69U);
    msg.setDestination(12351U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.0745840867234);
    msg.setSource(8352U);
    msg.setSourceEntity(215U);
    msg.setDestination(44400U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.00203928608611);
    msg.setSource(22627U);
    msg.setSourceEntity(136U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(107U);
    msg.id = 19U;
    msg.label.assign("ZLABFDSUKWQMBCKHJTNEUVRBLPLUWJHDVLHNFARUOBYNBOXIFAGIQWULDZGBBYJMMICFFETREVERDACXGGPMLW");
    msg.component.assign("IXRKALFPVUBGKNPHAPBABTIRWZTYDSEOCPJCVSLJMAKRNLNGAKFPWXVNTVBUYIPADROHXCZWWSYXQAEICIKALTHOBTWENYRKJPOQSAMWEHMUTRECUREJMVQNUDBVIZTRDHGOENWIQVCFHYDYETQUHBFKLDYJXOOJEVGYUDNZQXFDWBIJQMSSVJXJPMGPOWHLNSBGWRFGJSAMCUTBYZXUMMGZMXV");
    msg.act_time = 62117U;
    msg.deact_time = 40327U;

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
    msg.setTimeStamp(0.0165976954902);
    msg.setSource(20886U);
    msg.setSourceEntity(75U);
    msg.setDestination(53378U);
    msg.setDestinationEntity(195U);
    msg.id = 64U;
    msg.label.assign("SZEXAWBRKZUKLTAOTGBWZTCTJAWNIKOSUCXOGSYTNCFYIVRRRPUEYCOMLINAPDVVNDAYXLNLERTU");
    msg.component.assign("SRTOTVRQVFYOBDLFDRGOXFMIWLLCJZIRAYZZGN");
    msg.act_time = 39086U;
    msg.deact_time = 42320U;

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
    msg.setTimeStamp(0.512089740853);
    msg.setSource(24284U);
    msg.setSourceEntity(13U);
    msg.setDestination(39272U);
    msg.setDestinationEntity(102U);
    msg.id = 61U;
    msg.label.assign("JXAGVVGPIRYMDGQXBCYKXTQACHRTVPKWETZKSEDZPWALCSGGRNWHMIEHJUJZOASXEBWHIVVQUFRIRZJHOPUQGIFGSCZBZABBYYDIPRWXPJOILBZABNSDQKAQQJLPR");
    msg.component.assign("NJNLZFBWASWXNZVDWHEZDQVWTCQYKUEHNRIMKRUHASJMMRIIEKFJCORPUCYUVRKOBSXVDZIMAFKBOJAYGDHSGTRIZNLGIQSXTMHUXOUNDBNHUVPCPDBBCSWVLKZISFKPBLOZEARNAQMWTGIWEOCDPTFVQGJHTKPYOUSED");
    msg.act_time = 60627U;
    msg.deact_time = 16533U;

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
    msg.setTimeStamp(0.919048473756);
    msg.setSource(35523U);
    msg.setSourceEntity(10U);
    msg.setDestination(58469U);
    msg.setDestinationEntity(93U);
    msg.id = 24U;

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
    msg.setTimeStamp(0.520052042898);
    msg.setSource(61974U);
    msg.setSourceEntity(210U);
    msg.setDestination(2334U);
    msg.setDestinationEntity(9U);
    msg.id = 209U;

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
    msg.setTimeStamp(0.668774164674);
    msg.setSource(36999U);
    msg.setSourceEntity(131U);
    msg.setDestination(34218U);
    msg.setDestinationEntity(224U);
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
    msg.setTimeStamp(0.795741092507);
    msg.setSource(16512U);
    msg.setSourceEntity(101U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(225U);
    msg.op = 116U;
    msg.list.assign("VDQFFTRWZKXJXSQTIRNQCICOTEXUQUDVMUTWSSGGKACLNNMRDBNCDNOPAJHJRXHRINKMMNYDXKRJROYCEHTUYBJIGOLDKEYNUKJHIFPQCHDZHBXRSWLIMAZVFELMAZLSRBLDOFVTVPMCQPQEXAJKAAPUOGFBEYYZJVBZUETJLPFXWJEGZG");

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
    msg.setTimeStamp(0.349713488955);
    msg.setSource(44969U);
    msg.setSourceEntity(73U);
    msg.setDestination(51413U);
    msg.setDestinationEntity(72U);
    msg.op = 41U;
    msg.list.assign("RXSNWLSQAKPIGEFPGNKANTYDGDBQGDJMJDXFWEBSKRZHLNTYPMCFCVZXNKQKZUAOGOMBQTAEVELTQOUPYWQWEIDSYVVIZZHQIFCBTBRIRINWBDMLFJIFDETOVVISJWLAUZP");

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
    msg.setTimeStamp(0.0403421663276);
    msg.setSource(61687U);
    msg.setSourceEntity(193U);
    msg.setDestination(34342U);
    msg.setDestinationEntity(182U);
    msg.op = 133U;
    msg.list.assign("FBYXLFDRSISGCWTJFYGMZWAMQVCTKCYQBSBZQCNBWQDJDSAWRVUDGKDNNYLOXRUCYUQOXFXTUANNQCUBLMUHGKDMGIXIEGRIUWRNEPDLZLJZTEOVHKPETVMTHVFTUBZJHRAUGZKALFAHVUJNXOHNVIKYDNLWOARXFYPBIDAQLETEWJBSEGPEFGIKVOQSEMQZXWPRHPLMPCEVZPKZHAKBXYJWHQ");

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
    msg.setTimeStamp(0.177148403871);
    msg.setSource(8789U);
    msg.setSourceEntity(127U);
    msg.setDestination(47948U);
    msg.setDestinationEntity(196U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.744781524612);
    msg.setSource(26729U);
    msg.setSourceEntity(213U);
    msg.setDestination(42417U);
    msg.setDestinationEntity(176U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.117198441985);
    msg.setSource(9524U);
    msg.setSourceEntity(223U);
    msg.setDestination(12662U);
    msg.setDestinationEntity(28U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.272513484987);
    msg.setSource(61979U);
    msg.setSourceEntity(184U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(0U);
    msg.value = 43U;

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
    msg.setTimeStamp(0.925277060929);
    msg.setSource(32045U);
    msg.setSourceEntity(127U);
    msg.setDestination(45810U);
    msg.setDestinationEntity(78U);
    msg.value = 128U;

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
    msg.setTimeStamp(0.502893889854);
    msg.setSource(64586U);
    msg.setSourceEntity(75U);
    msg.setDestination(51027U);
    msg.setDestinationEntity(226U);
    msg.value = 65U;

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
    msg.setTimeStamp(0.440252734091);
    msg.setSource(34892U);
    msg.setSourceEntity(43U);
    msg.setDestination(62418U);
    msg.setDestinationEntity(136U);
    msg.consumer.assign("IPIHAZYWAVREYDXZNPAAJDVXLHKWZITQGNEPCGQJCXYMSEZESRUWHFDMSGYVXUFOWAMGOKOYAL");
    msg.message_id = 31395U;

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
    msg.setTimeStamp(0.882856937608);
    msg.setSource(39853U);
    msg.setSourceEntity(251U);
    msg.setDestination(37329U);
    msg.setDestinationEntity(136U);
    msg.consumer.assign("RBSAHEUAUPZVXUWDBIWZVOROEXILMORVBYWDQDQZTELJKIUKVGKRGXEHYNEEEAQSUSYKMRPCUPWK");
    msg.message_id = 56472U;

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
    msg.setTimeStamp(0.61935568002);
    msg.setSource(17866U);
    msg.setSourceEntity(134U);
    msg.setDestination(61366U);
    msg.setDestinationEntity(102U);
    msg.consumer.assign("GDOGLFAIXZBLKSDARWZZEAIJEQGXVXZIPGDPQLYLWRZLVGRLHSLYMZCLRSVHPALOXFTTKTVUKPWIRUONMWJPZCTKHABSCZWYQEQXIPTJSNQOMQKTUSAFADPTYNREUYNAKVNWSXEMWFMEKYHTUBOPJQGBQLHHUYUYOUDCPAFETPNBVCMDWECYIRKHJCFOBSJGFJMGIW");
    msg.message_id = 60967U;

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
    msg.setTimeStamp(0.409099920729);
    msg.setSource(28192U);
    msg.setSourceEntity(166U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.9790402684);
    msg.setSource(10321U);
    msg.setSourceEntity(78U);
    msg.setDestination(45117U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.476515475976);
    msg.setSource(19199U);
    msg.setSourceEntity(96U);
    msg.setDestination(43643U);
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
    msg.setTimeStamp(0.980824222236);
    msg.setSource(45883U);
    msg.setSourceEntity(205U);
    msg.setDestination(45989U);
    msg.setDestinationEntity(130U);
    msg.section.assign("RGDSEZJPCCOGYILNNDGVSDOHYMVFUQTHPAIWIBZPKQNFPHBSWYAYCNLKQKVRCDGSUBEJAJUMAVUUWAJRHEUDFHZWCFPENZBTHXSCLRTPBYMNBNPLZXKYYMGDWAJBVVLIMWGSEICODOBUMOIPVITZDTXJQEKTDZMAEXECQIA");
    msg.param.assign("IJONBUMIRANVYYKAQZLLGZXBQMTGQKHIFBDGSCTOPRINZUZJWREOANXHHVFGMXEJSTCMVKOYGRBMUILPPFEKDIPKFPVWEEUDNCYISCGJPQWNWFTJNZHZGMZYDULMMGRQJLSWNEPGJXHGPQAIATATVWHBQOKIARUSYWVRCCFNTSBPLEFHUOAYDXDSXWKCXZSLOHCK");
    msg.value.assign("SAMQFTIEGYKXNTVTHUSTUVJWYEJMYWIFNINVAMJONOXJCUGHAFJXHFEPZKLCWBGRYODIZBQIVXIVNWZLBYODKVCGN");

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
    msg.setTimeStamp(0.431155198409);
    msg.setSource(2803U);
    msg.setSourceEntity(38U);
    msg.setDestination(2492U);
    msg.setDestinationEntity(124U);
    msg.section.assign("RNKEMKZDBITHMVHKISTZNPVNOLMMNUWWITGOXNWIAKYYLJDHXPAFKBEIUJCPMWJHXERNFCVEZZYO");
    msg.param.assign("MUKWNMYNVMTDYVSLPORTHBCXSLPZYQEZWTQJFDIHAPOIBWCHVYLSFWMCPVWNOCFKNMGUPVDFHFHGYMIUMJCAMQBBTESARQRAXSUUFIWLHZIOBVDLGJHKKJVMEISKCRRCPIROOEQXJKCANXNWWGHPOESWDGAAFDQQZJCGDHKFBBIGJSZTPDXJUGZERHDPVQUIZKAQTYLZFSTLLYRLNOQPUYXBRZEKVNJTXTXYAGYIKBRZUTUENOOGJMCVLFNXXD");
    msg.value.assign("OQDVYGMIFSIWITSZEZ");

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
    msg.setTimeStamp(0.642750525472);
    msg.setSource(38782U);
    msg.setSourceEntity(45U);
    msg.setDestination(46578U);
    msg.setDestinationEntity(206U);
    msg.section.assign("YCXYGGUIUJOEKTCPBAYWXHBLPFPWFPTECVRFSUDSXEUHYLNMHTBBXMSUXEXWOKCKBTENGUAQTVHFTDJBMTIICKNVXRPUBKAQVVSVNPIRTKOZFPLLOAYZWKWQDJPLNMMBSUAMNIRQDOKOIRECWJCLJABWOPWIDRHRQHQFDDLHOLLHTUYXRRSJTNLNZWPFEDESZIAVYJUMZJNZQC");
    msg.param.assign("EJJJFFAQMDOULTSVHGDF");
    msg.value.assign("VOXSCRPFBHZZYREFLWJWDCTNVPFQBXKMHHXUTABMPJFHLATQZFVDDSKXRWPBNTYUYZYIFRIYLZELDPMGHMRIYGBKIQJOSRPQCATLOKIEXJEBTFNVQPNLAIVFIGGZSUEMKSLQOJRXUADNTYSJWCNOZGMESNZVKODMUSJBMMWETXUVEUZNUUAIWHKGPCISAZYGHBKCDQRRALHBYBJQCKGAXFAEOOWKYXTJPLODWVI");

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
    msg.setTimeStamp(0.911055253084);
    msg.setSource(56637U);
    msg.setSourceEntity(76U);
    msg.setDestination(48099U);
    msg.setDestinationEntity(243U);
    msg.op = 73U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ZAWNHMVFPSZXXVJLNTFJSTURILOSKIIICEGKFEDQQYQCMYAKYHTMXOPJPIOXMSDNFKPYTFPOTWNAGGBPFKVMVOXIJGFMDFKWLRFVLNRIWDKOQYGNAJGEYVZWOEQQZYLYNHZBDMUVJCAZOCSJBCLHGKCUNJDYLTZWVMHUDUUTSRGGWQIEKREUAUBWRBTZHQLQBRBQ");
    tmp_msg_0.param.assign("MKGHZCRVHPEZLJQPKROEYIDOYQQLRWVCWOEDGATGCSANNPLJJOVPSGLSMSJVCDWTMJIYEUBGISLXIBLQKKQBPFGGUPQJKNPWLBFANBTRJNHSRSDLUKTMYULHAZXZGTBYFJYDQHVFZAXIXITUFOCMWQBSARFWHYMXZXOEZOJKRDFWAFEQPKXNXOIBSEECHUCADEITYPCMWUKGOVGYQNY");
    tmp_msg_0.value.assign("UCBZUEHZGHQIAIZGCRIRGVHLLBEPKLXVVSOKSJIIBTJMRZYRQWZJDTWSTAURZPGDRCISGLJUX");
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
    msg.setTimeStamp(0.687230772496);
    msg.setSource(32542U);
    msg.setSourceEntity(116U);
    msg.setDestination(8002U);
    msg.setDestinationEntity(68U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.806250708066);
    msg.setSource(12510U);
    msg.setSourceEntity(93U);
    msg.setDestination(34774U);
    msg.setDestinationEntity(72U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.822062236826);
    msg.setSource(36720U);
    msg.setSourceEntity(63U);
    msg.setDestination(37960U);
    msg.setDestinationEntity(147U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.684779356832);
    msg.setSource(29588U);
    msg.setSourceEntity(181U);
    msg.setDestination(52701U);
    msg.setDestinationEntity(71U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.819942227286);
    msg.setSource(17047U);
    msg.setSourceEntity(84U);
    msg.setDestination(48208U);
    msg.setDestinationEntity(198U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.00321533605974);
    msg.setSource(32753U);
    msg.setSourceEntity(229U);
    msg.setDestination(5149U);
    msg.setDestinationEntity(113U);
    msg.total_steps = 198U;
    msg.step_number = 236U;
    msg.step.assign("ULSVZSAHOKMFVWINVDSYMZSBMQXXAHPDDNHBTVWJGCQAOGTZZKFKNLXRBYIOZTVCXMMGHUJYFMCNRJUYCSTEOWBQUZVAJCBJKLMJCHAFPL");
    msg.flags = 240U;

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
    msg.setTimeStamp(0.849378186061);
    msg.setSource(4392U);
    msg.setSourceEntity(97U);
    msg.setDestination(61281U);
    msg.setDestinationEntity(74U);
    msg.total_steps = 6U;
    msg.step_number = 65U;
    msg.step.assign("JLYBAQJKSVOUWTTIFIESDYRGNRPCMIFAXJSPWFUOWPCLSARDZVLXWLJOMXUCOHGZBNMPBKQUXFFDSLZDUMQNJTWXKHKLPEDGRDCGNVEBNIKQYIVGQSWJZIRYGOGJJPMIVBFPIPRNZHYEFRJVNHEXLEFQONQRKHAHCDGHCHYMUDKYAVVOWXRDUUBZPLEASATZNSWFODAQIBGCRZQT");
    msg.flags = 176U;

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
    msg.setTimeStamp(0.85457564448);
    msg.setSource(14862U);
    msg.setSourceEntity(132U);
    msg.setDestination(16204U);
    msg.setDestinationEntity(236U);
    msg.total_steps = 161U;
    msg.step_number = 139U;
    msg.step.assign("BMNFNELMSQCDZMSPTODWBRHGXDTXGDCXSPQYXALACXOFUARRFOYJEKMLLBOISKNYZJXKPISYDXGMYKTLVVU");
    msg.flags = 111U;

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
    msg.setTimeStamp(0.202502987448);
    msg.setSource(46431U);
    msg.setSourceEntity(250U);
    msg.setDestination(52804U);
    msg.setDestinationEntity(192U);
    msg.state = 168U;
    msg.error.assign("QTYSNHRMREQRGTVPNCQBBELZVKRPBLUHGXLYNAZSFPDICNOEEKGFFGKSYERCWCXSAXWIGQOJKLCMMLQDUTMYITIJXSIMRPQAFJKWYPTVMNABRQDUZGXOGVUICSXBXFDZWYVABLPYZAMSWLXIJAYLWZPWFAFGXNFKIJKHNVJENZ");

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
    msg.setTimeStamp(0.268427165189);
    msg.setSource(42236U);
    msg.setSourceEntity(102U);
    msg.setDestination(56118U);
    msg.setDestinationEntity(102U);
    msg.state = 175U;
    msg.error.assign("GPSNAOJEPMWPEJIVPVSVHFFRPIQVXWIGFEDDCBZMT");

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
    msg.setTimeStamp(0.194789288072);
    msg.setSource(17989U);
    msg.setSourceEntity(218U);
    msg.setDestination(25680U);
    msg.setDestinationEntity(179U);
    msg.state = 47U;
    msg.error.assign("VHPPTFURDNVFJTPNPXNOKBEALUIVDZMJJRMAWKCNEYDUFPZDEFFKMRGLHOQQGOVJIDYTARVWUZMBATLREQBDFFPXLLBAIIYTTMTOVLEPGDGFXSQTVNUJCSIFZWMQEXLXOSRQNSDYPROCWWQYAHZWBIEYLCFRSAMNHXAGYEKPHKUCUOBKCHZKWJSXXGHSBCWVBYUZSIOKSCCKYGUXHMCMGHTZLAQDYOJXLWRRANQUIGKPWDBJZVTISIHMNBV");

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
    msg.setTimeStamp(0.689751887495);
    msg.setSource(62962U);
    msg.setSourceEntity(157U);
    msg.setDestination(9520U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.781392494061);
    msg.setSource(11315U);
    msg.setSourceEntity(134U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.415919370211);
    msg.setSource(20912U);
    msg.setSourceEntity(48U);
    msg.setDestination(51303U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.325429527207);
    msg.setSource(50399U);
    msg.setSourceEntity(120U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(221U);
    msg.op = 13U;
    msg.speed_min = 0.130570841019;
    msg.speed_max = 0.469994896086;
    msg.long_accel = 0.726170452975;
    msg.alt_max_msl = 0.191020525195;
    msg.dive_fraction_max = 0.843560021925;
    msg.climb_fraction_max = 0.234867000937;
    msg.bank_max = 0.420031535049;
    msg.p_max = 0.55693537444;
    msg.pitch_min = 0.328700181923;
    msg.pitch_max = 0.742807186596;
    msg.q_max = 0.758202624188;
    msg.g_min = 0.471739266546;
    msg.g_max = 0.753184381674;
    msg.g_lat_max = 0.286881420104;
    msg.rpm_min = 0.658998146605;
    msg.rpm_max = 0.0950227497867;
    msg.rpm_rate_max = 0.110767519834;

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
    msg.setTimeStamp(0.36835764446);
    msg.setSource(63006U);
    msg.setSourceEntity(28U);
    msg.setDestination(62697U);
    msg.setDestinationEntity(8U);
    msg.op = 254U;
    msg.speed_min = 0.411249514421;
    msg.speed_max = 0.575252016927;
    msg.long_accel = 0.247520511506;
    msg.alt_max_msl = 0.119698482403;
    msg.dive_fraction_max = 0.528710376105;
    msg.climb_fraction_max = 0.884684178178;
    msg.bank_max = 0.0264415369048;
    msg.p_max = 0.832414728211;
    msg.pitch_min = 0.179301448834;
    msg.pitch_max = 0.799169142523;
    msg.q_max = 0.244822343454;
    msg.g_min = 0.684054522719;
    msg.g_max = 0.763053719502;
    msg.g_lat_max = 0.867598738751;
    msg.rpm_min = 0.957038194211;
    msg.rpm_max = 0.275183391086;
    msg.rpm_rate_max = 0.463165817561;

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
    msg.setTimeStamp(0.907962950549);
    msg.setSource(5197U);
    msg.setSourceEntity(150U);
    msg.setDestination(48923U);
    msg.setDestinationEntity(98U);
    msg.op = 106U;
    msg.speed_min = 0.46030227782;
    msg.speed_max = 0.747361103342;
    msg.long_accel = 0.512506024295;
    msg.alt_max_msl = 0.371710454716;
    msg.dive_fraction_max = 0.254624406114;
    msg.climb_fraction_max = 0.0290182752791;
    msg.bank_max = 0.196860918194;
    msg.p_max = 0.580193198542;
    msg.pitch_min = 0.954469029557;
    msg.pitch_max = 0.996850876685;
    msg.q_max = 0.470188132997;
    msg.g_min = 0.51868184111;
    msg.g_max = 0.776098366247;
    msg.g_lat_max = 0.400471486456;
    msg.rpm_min = 0.630399042285;
    msg.rpm_max = 0.498389428287;
    msg.rpm_rate_max = 0.457741608732;

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
    msg.setTimeStamp(0.990049242626);
    msg.setSource(42588U);
    msg.setSourceEntity(222U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(62U);
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 145U;
    tmp_msg_0.error.assign("QLCXMSCDYYGHGLDCITEWRGTSSUWKXUQGKUXYDWVNNZTIPZPFOECVAABKNLKBRBEHEYABQZLFKCQLLMBDDMTMVPFHSVEKZGQRZNAZYKIAZOQFCAJUAL");
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
    msg.setTimeStamp(0.223248536926);
    msg.setSource(41442U);
    msg.setSourceEntity(2U);
    msg.setDestination(51222U);
    msg.setDestinationEntity(182U);
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 126U;
    tmp_msg_0.step_number = 152U;
    tmp_msg_0.step.assign("JPZSPLJSKJXWHWWVTTYGITSNODOSINHWMCBSFSHARJFUPBADOWAFQQCAOEUECKQZQICAYAWVYFLZXDJOMHHNRBLHAXURCCVUZOKBXOOKRSPVMPASQHTXBCDMSXDUENAVPZBTCEDPEJKCKDLOGRUMDXMIRFGPEJRVGWXGQPDLNBWZUZJVYLJVQFFQTPUEYBMKGLNVZYXBMQIGXNEGNZCUHAOLTFTRK");
    tmp_msg_0.flags = 167U;
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
    msg.setTimeStamp(0.0079414334024);
    msg.setSource(30126U);
    msg.setSourceEntity(116U);
    msg.setDestination(50069U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.546699351401);
    msg.setSource(53851U);
    msg.setSourceEntity(234U);
    msg.setDestination(33072U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.239561121768;
    msg.lon = 0.137248316083;
    msg.height = 0.543472670212;
    msg.x = 0.252833286302;
    msg.y = 0.760532117286;
    msg.z = 0.422887668849;
    msg.phi = 0.704019797652;
    msg.theta = 0.305004588215;
    msg.psi = 0.201712421111;
    msg.u = 0.498791551359;
    msg.v = 0.437744390186;
    msg.w = 0.0773302512038;
    msg.p = 0.927147061623;
    msg.q = 0.232052226754;
    msg.r = 0.693164741352;
    msg.svx = 0.281350248239;
    msg.svy = 0.887589002166;
    msg.svz = 0.126867993603;

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
    msg.setTimeStamp(0.582276568713);
    msg.setSource(24205U);
    msg.setSourceEntity(222U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.193111594496;
    msg.lon = 0.402224397816;
    msg.height = 0.741851241563;
    msg.x = 0.449968021753;
    msg.y = 0.111173701817;
    msg.z = 0.0911484732141;
    msg.phi = 0.590473511143;
    msg.theta = 0.833520925264;
    msg.psi = 0.761213734216;
    msg.u = 0.399464547553;
    msg.v = 0.639638332808;
    msg.w = 0.397938335352;
    msg.p = 0.961181798611;
    msg.q = 0.233630738331;
    msg.r = 0.458925710339;
    msg.svx = 0.951676724178;
    msg.svy = 0.869265580459;
    msg.svz = 0.527242946319;

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
    msg.setTimeStamp(0.884692606686);
    msg.setSource(32620U);
    msg.setSourceEntity(249U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.0343161056481;
    msg.lon = 0.224043176591;
    msg.height = 0.808543250689;
    msg.x = 0.740608590011;
    msg.y = 0.261100659691;
    msg.z = 0.365622325181;
    msg.phi = 0.454587953462;
    msg.theta = 0.0270250556899;
    msg.psi = 0.177158769949;
    msg.u = 0.265348877655;
    msg.v = 0.134038285226;
    msg.w = 0.344424536701;
    msg.p = 0.570692147182;
    msg.q = 0.397957582213;
    msg.r = 0.918589424979;
    msg.svx = 0.780220010522;
    msg.svy = 0.43047594968;
    msg.svz = 0.0854686945388;

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
    msg.setTimeStamp(0.142054091304);
    msg.setSource(53397U);
    msg.setSourceEntity(237U);
    msg.setDestination(25771U);
    msg.setDestinationEntity(211U);
    msg.op = 218U;
    msg.entities.assign("JLCSIUBBRUHSQFDIBZPCRZVHFFHDWMNBPSSMZXEMMXODLZVPTCJVACUQCIJJIWGIOARMHKAAXLCVDQUCJPCEZWPOFZMANQINDPPPIYDDVHGTFAIYWBGYGOORVRSXBHMFUSXGWGTETEWANFXW");

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
    msg.setTimeStamp(0.308892607605);
    msg.setSource(12036U);
    msg.setSourceEntity(48U);
    msg.setDestination(28194U);
    msg.setDestinationEntity(228U);
    msg.op = 4U;
    msg.entities.assign("KGDDRAPIODABZDIQG");

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
    msg.setTimeStamp(0.598334214369);
    msg.setSource(7966U);
    msg.setSourceEntity(185U);
    msg.setDestination(3328U);
    msg.setDestinationEntity(58U);
    msg.op = 251U;
    msg.entities.assign("YFZNZQMTMHJYORRKBRQRDDTJSTNTBAIZUWBWAGGZFQHPPVLXUISEYNJVPCIGAMXKIXVOSGKZBNEIPIXDEKXEGKFIMVNGANMYUEZLZODHHYMXQPPFOJNHPTQIFJDC");

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
    msg.setTimeStamp(0.866812977908);
    msg.setSource(21391U);
    msg.setSourceEntity(221U);
    msg.setDestination(16796U);
    msg.setDestinationEntity(72U);
    msg.type = 247U;
    msg.speed = 33818U;
    const char tmp_msg_0[] = {126, 42, 121, 35, 34, 36, 16, 30, 105, -123, -29, 40, 83, 115, -107, -22, 78, 11, -10, 3, 80, -77, -12, 46, 84, 100, 36, -106, -58, 53, 3, -43, -98, -114, 76, 79, -20, 43, 12, -3, -83, -48, -47, 35, -106, 105, -103, 55, -82, 106, -45, 122, 38, -116, 46, 54, -26, -80, 51, 122, -6, 84, -75, -96, 50, -126, -62, -70, -65, 64, 66, 30, -122, -1, 19, 86, -103, -54, -11, 92, -11, 14, 98, -7, -107, -89, -22, -76, -71, 6, -128, 66, -96, 118, -96, -93, -90, -21, 56, 5, -117, 14, 96, 39, 60, 64, 92, 18, -29, -79, -78, 115, 86, 93, 29, 82, -127, 60, 2, 108, 14, -56, 72, 124, -15, -67, -105, -22, 65, 43, -50, -116, -71, 71, -103, -29, 23, -103, -86, -71, -40, 110, 44, 112, -29, -122, -4, 111, 35, 99, -52, 5, -10, 111, 78, -1, -67, -54, 117, 25, -96, 35, 121, -70, 87, -56, 18, 69, 105, 68, -123, -24, -122, 5, 116, -58, 19, 114, -74, 30, 23, -42, 24, 76, 56, -13, -43, 69, 48, -8, -21, 87, 10, 71, -1, -30, 116, -51, 74, -118, -3, -122, -78, -126, 86, 48, -66, -63, 11, -14, -59, -22, 77, 50, -47, 122, 119, 38, -52, -28, 41, -78, 69, -26, -4, 29, 69, -36, -85, -55, -46, 29, -26, 118, 65, -5, 83, -46, 77, -112, 20, -21, -44, 18, 30, -70, -27, -6, -41};
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
    msg.setTimeStamp(0.275024546972);
    msg.setSource(12050U);
    msg.setSourceEntity(1U);
    msg.setDestination(39821U);
    msg.setDestinationEntity(184U);
    msg.type = 180U;
    msg.speed = 9794U;
    const char tmp_msg_0[] = {35, -109, -12, 20, 4, 106, 34, -62, -106, 0, -14, 71, 8, -96, 9, 83, -126, 81, 35, 21, 45, 86, 30, 38, 99, 108, 61, -50, -92, -78, -123, -94, 113, -16, 10, 95, 47, -40, 59, 97, 112, 112, -97, -2, -111, 8, 17, -82, -125, 37, 26, 20, 57, -59, -99, -42, -116, 0, 92, -2, 52, 62, -49, 71, -24, -76, -103, 104, -42, -91, -50, 15, 51, -120, 95, 68, -64, 65, 88, -53, -37, 53, -16, -127, 5, 71, 19, -52, 98, 43, 105, 7};
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
    msg.setTimeStamp(0.429481896466);
    msg.setSource(21989U);
    msg.setSourceEntity(160U);
    msg.setDestination(7737U);
    msg.setDestinationEntity(223U);
    msg.type = 93U;
    msg.speed = 34376U;
    const char tmp_msg_0[] = {3, -80, 81, -47, -11, 83, -45, 2, 20, -80, 97, 5, -5, -121, 64, 114, -73, -61, 108, 63, -39, 79, 18, 52, -52, 5, 72, -72, -85, 38, -68, -5, -93, 108, 62, -73, -6, -24, -4, -119, -33, -75, -35, 53, -63, 32, 42, 41, -69, 122, -51, -119, -34, 107, 32, 55, 59, -26, 124, -120, -81, 34, 44, -54, 120, 55, 95, 47, 79, 62, 98, 97, -128, -7, -49, 92, 27, -14, 107, -73, 86, -69, 89, 63, 50, -42, -56, -89, -85, -19, -75, -34, -61, -77, -5, 23, 24, -58, 95, 47, 61, 38, 22, -88, 48, -30, 66, -90, -96, 103, -85, 90, 36, 11, 18, 88, 16, 95, 113, 25};
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
    msg.setTimeStamp(0.9829091904);
    msg.setSource(12147U);
    msg.setSourceEntity(221U);
    msg.setDestination(44109U);
    msg.setDestinationEntity(196U);
    msg.op = 228U;
    msg.tas2acc_pgain = 0.367239186477;
    msg.bank2p_pgain = 0.260781747963;

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
    msg.setTimeStamp(0.192277884968);
    msg.setSource(43302U);
    msg.setSourceEntity(104U);
    msg.setDestination(48112U);
    msg.setDestinationEntity(76U);
    msg.op = 243U;
    msg.tas2acc_pgain = 0.18126572933;
    msg.bank2p_pgain = 0.399682890494;

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
    msg.setTimeStamp(0.739853191859);
    msg.setSource(60093U);
    msg.setSourceEntity(32U);
    msg.setDestination(58324U);
    msg.setDestinationEntity(154U);
    msg.op = 219U;
    msg.tas2acc_pgain = 0.615615629082;
    msg.bank2p_pgain = 0.650239467975;

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
    msg.setTimeStamp(0.6895107649);
    msg.setSource(52422U);
    msg.setSourceEntity(20U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(51U);
    msg.available = 1382427053U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.180222794159);
    msg.setSource(32730U);
    msg.setSourceEntity(127U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(145U);
    msg.available = 2766976526U;
    msg.value = 187U;

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
    msg.setTimeStamp(0.916030679022);
    msg.setSource(62069U);
    msg.setSourceEntity(119U);
    msg.setDestination(30821U);
    msg.setDestinationEntity(122U);
    msg.available = 1157306234U;
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
    msg.setTimeStamp(0.844547532208);
    msg.setSource(9868U);
    msg.setSourceEntity(20U);
    msg.setDestination(35336U);
    msg.setDestinationEntity(160U);
    msg.op = 80U;
    msg.snapshot.assign("AQRXKWFGWKEVJBEUFCTSCALBRLZFATTDOTLCMXVLY");
    IMC::NavigationReset tmp_msg_0;
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
    msg.setTimeStamp(0.134323458192);
    msg.setSource(27530U);
    msg.setSourceEntity(220U);
    msg.setDestination(27919U);
    msg.setDestinationEntity(0U);
    msg.op = 241U;
    msg.snapshot.assign("EGPDQKIKWXZBLKMSTAHRBBSYNTAZUWWDTPOBGKHBLAPQLHSIIMRQRXZJXZNJDCMDSJXHGXXRNYPFFSGCSQUHZTZZOYLJORKLRWELMQQQKVELMDJMWOPVXNORTFMHSWHQCRMHMKVVFSIIPGZJKBDWYLWCLEDNCYVYFCI");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.855336170545;
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
    msg.setTimeStamp(0.393968808189);
    msg.setSource(62211U);
    msg.setSourceEntity(198U);
    msg.setDestination(26392U);
    msg.setDestinationEntity(31U);
    msg.op = 33U;
    msg.snapshot.assign("JGBANAVLFCSWJNWMVRWPEKTQLZQVJUSVLRYPGEMAEBISNCEXCXSVEGXUPVTTZZNGUDZKGEJRJHMRLXOYPIBKOYVZCEXQWSFKUSOYVBPFIHCCMKLMZZAANHBECHCDITOEN");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.925089240465;
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
    msg.setTimeStamp(0.347627972134);
    msg.setSource(48080U);
    msg.setSourceEntity(55U);
    msg.setDestination(65398U);
    msg.setDestinationEntity(80U);
    msg.op = 249U;
    msg.name.assign("KVBBLOEPDECXRRVXRSPSLLRHZIVSBCDKUKUTUCOZCFTNFDPWKC");

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
    msg.setTimeStamp(0.0213369894052);
    msg.setSource(30280U);
    msg.setSourceEntity(158U);
    msg.setDestination(60911U);
    msg.setDestinationEntity(146U);
    msg.op = 217U;
    msg.name.assign("ECCYKZAEVVIPZDSAUHFRDMQCRETEQGBWSGINXYPRCYOXMZWYIMRXRRJBIGDQQYQTICDHZDSOWGOZETYALBCXZZUBPAEFHMNXGIBWTMUXYIVLTVOQBHKXADNEVSGUFBEVRFPSJJMZCVOQESJHNAMFGWFKLWKAEPMGNPBPXVZSNLPKJJJANOTDUHTWMIHRDYSJFPBLRLLCFUMH");

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
    msg.setTimeStamp(0.363374668732);
    msg.setSource(65282U);
    msg.setSourceEntity(219U);
    msg.setDestination(7809U);
    msg.setDestinationEntity(35U);
    msg.op = 88U;
    msg.name.assign("CTOCUTURFCWZLPGABVNTFWMLFBGGXJLJZISOFANSOMNMRAMWODHQYMXYWNAUCSPJAUXHEMFSOLDRUONNKKZKNTKDANRREDHXVISOYLMJGBFXSLCTEJVEYBBSELQDWHGQUVWCQXOPIGSYCBKJQHDFQWFRZBQBYIJAAVYBCCEDKNELZGIJIFTVVVMKUORPWPHIAXBXOAVZRETGLZHXSPRZCMPZQPSMYEFDUUWGU");

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
    msg.setTimeStamp(0.536542563403);
    msg.setSource(46069U);
    msg.setSourceEntity(31U);
    msg.setDestination(60675U);
    msg.setDestinationEntity(54U);
    msg.type = 148U;
    msg.htime = 0.178002767697;
    msg.context.assign("EAIPCQXESXKWJGVEZZBZOMWFSMBQHAYYHPWYJLMXWECTUHRDNNVUSNCWGKEASGPOAMKIWYLHZBAYIRJORDOJFQNOQUWJXUBTIURHJFOMOUFSENBUFVJYTHKCDLITR");
    msg.text.assign("GRQRJCHKAUMQLYPJXDNIYFCZOFWBZIUKCMALMDZPMWRWBDLLWCHBVXDAXVHEBAOBKGIRUPJKDSMONNUOIBZWXJIYTRJUAYJVYXHRAYWDQSETUMYVJYHXPJTIMDOSOQLCXSBREFLFTMCXRGZTEDKSULVVRVNPOYZFIZLMCJLTPV");

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
    msg.setTimeStamp(0.627976817856);
    msg.setSource(14652U);
    msg.setSourceEntity(175U);
    msg.setDestination(14672U);
    msg.setDestinationEntity(22U);
    msg.type = 251U;
    msg.htime = 0.366940270396;
    msg.context.assign("TQIJFVBUUSYKWCQGAJDAHYJOQQTTIPKIERPXIVQINBKTTPSZZGBSOJ");
    msg.text.assign("HTBFVVXYIWOVPQNPQRNSODHGDKUTGIQJQWNFTEZRGJYVPNCSBOVEGLKLJNNHLMEIBGDYSWQFRKTBIKAMUAFYAUAIOVEZMHPESQSSZLZWDBEHWOIFMTJJCXLCCYZKYRXRPYATHTNJZCXAMUKZXINCBHIHUOEJMQ");

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
    msg.setTimeStamp(0.531838680807);
    msg.setSource(27394U);
    msg.setSourceEntity(250U);
    msg.setDestination(13722U);
    msg.setDestinationEntity(231U);
    msg.type = 116U;
    msg.htime = 0.489723677232;
    msg.context.assign("MYEIHFMQERYJNSMCOQIPIXULRVXRYGRFNRVJQBOXTEOCKWPBZNMDNLWHIKRSJQTKFUOYXJXBFAABXPTGCEATZCHGRXCNEJ");
    msg.text.assign("WOYABMOLUKWKDIGIPHAIMXNAWBRLJKQHPUFFSGJTDQXGVVVLJIRCAFVVMPNMZMPUETBYDUVSICYGQIXHTHRCDJAQBSMDE");

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
    msg.setTimeStamp(0.898502454366);
    msg.setSource(37982U);
    msg.setSourceEntity(9U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(129U);
    msg.command = 11U;
    msg.htime = 0.360104737209;

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
    msg.setTimeStamp(0.313354140738);
    msg.setSource(20906U);
    msg.setSourceEntity(203U);
    msg.setDestination(54978U);
    msg.setDestinationEntity(224U);
    msg.command = 75U;
    msg.htime = 0.875081850122;

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
    msg.setTimeStamp(0.339829167359);
    msg.setSource(13103U);
    msg.setSourceEntity(119U);
    msg.setDestination(38375U);
    msg.setDestinationEntity(92U);
    msg.command = 94U;
    msg.htime = 0.520612502598;

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
    msg.setTimeStamp(0.99307474318);
    msg.setSource(7852U);
    msg.setSourceEntity(207U);
    msg.setDestination(31772U);
    msg.setDestinationEntity(191U);
    msg.op = 45U;
    msg.file.assign("JVYUKGTVBXRPPSMAJOQSGXQLZKYSLMLPDBZNPOENISKMGDPSRFBGYBZGZLUXNBHERDSGIECQAAABOUWUNMOMWPULVUHHEWIWEIXZAHOQUFBKGZWRHJPCFTXGVUVJRYQKTTIJYZYCSKLOJDXJWZKJEDOKXDKYTLHRVIWFCMLEFQZEAALDSQOTTQACTCIIXRQHVFOVADNWGYTABXHPLWRRCVCM");

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
    msg.setTimeStamp(0.870828981293);
    msg.setSource(25186U);
    msg.setSourceEntity(191U);
    msg.setDestination(24650U);
    msg.setDestinationEntity(144U);
    msg.op = 172U;
    msg.file.assign("VSMKILKXFBIFUTUDXSHLMWNKDKSJAOCFOBTZYCLRRXXEDUJHTDMSYLOAEOTKJEVYWQCORBPAHSFHPXDUYSFBPZKXVVBPZ");

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
    msg.setTimeStamp(0.290694366943);
    msg.setSource(18243U);
    msg.setSourceEntity(94U);
    msg.setDestination(33408U);
    msg.setDestinationEntity(18U);
    msg.op = 250U;
    msg.file.assign("FVQYDLAVNJIHFWBKSICTZWWMIHBMZTXBOIWLNXGHPYQRGTRSHTYJKHMLXOG");

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
    msg.setTimeStamp(0.325236444799);
    msg.setSource(10087U);
    msg.setSourceEntity(230U);
    msg.setDestination(56227U);
    msg.setDestinationEntity(217U);
    msg.op = 27U;
    msg.clock = 0.762564891321;
    msg.tz = -89;

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
    msg.setTimeStamp(0.431602648685);
    msg.setSource(14544U);
    msg.setSourceEntity(234U);
    msg.setDestination(11485U);
    msg.setDestinationEntity(136U);
    msg.op = 135U;
    msg.clock = 0.555244228385;
    msg.tz = 45;

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
    msg.setTimeStamp(0.637332016956);
    msg.setSource(19345U);
    msg.setSourceEntity(237U);
    msg.setDestination(35087U);
    msg.setDestinationEntity(72U);
    msg.op = 87U;
    msg.clock = 0.985972937682;
    msg.tz = -96;

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
    msg.setTimeStamp(0.0567715520264);
    msg.setSource(51374U);
    msg.setSourceEntity(94U);
    msg.setDestination(24696U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.0561213449635);
    msg.setSource(52765U);
    msg.setSourceEntity(232U);
    msg.setDestination(57562U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.563792877377);
    msg.setSource(33298U);
    msg.setSourceEntity(218U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.498073251116);
    msg.setSource(3710U);
    msg.setSourceEntity(91U);
    msg.setDestination(52055U);
    msg.setDestinationEntity(0U);
    msg.sys_name.assign("AIWZDAHLVBOBSJSIYXVJJUBUFPYOFSMZKDLPWMOVQZSYEMTARNOXZIVLOTIPSWNDLGRTHCCDQLYWWDNRZLMDNFDXKAUPKYFEEEXWTWJEJVKBCYURBWPIIGAPLSORZAXVLZUTNCUCBLOGGEQWZXFTHGCREBYKGPTYNRVNNHKUBJVAKQJCRNTRQOYQXE");
    msg.sys_type = 56U;
    msg.owner = 44401U;
    msg.lat = 0.139520535516;
    msg.lon = 0.467660065998;
    msg.height = 0.335539091;
    msg.services.assign("EIFDHLTMKMKJVIPCTSAITOCEMNTOJEFIQAHL");

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
    msg.setTimeStamp(0.25511574666);
    msg.setSource(39381U);
    msg.setSourceEntity(207U);
    msg.setDestination(24241U);
    msg.setDestinationEntity(102U);
    msg.sys_name.assign("UBXUHBMSDKFKBDUHDLFZJWFPIVVPRSPOREAUNTLCMNZLWOAQJEIKKCVMPFZSZSNWXYCSJBJJLXTWVNXYPWTQAGNJPUOOWLVDCVGUYUFOTXNSLMUWLGTMTNXDEFYKPPQTYKQCJBIZMYDMEVGHCIYGSIZ");
    msg.sys_type = 159U;
    msg.owner = 14265U;
    msg.lat = 0.49979466421;
    msg.lon = 0.794124459415;
    msg.height = 0.739858624812;
    msg.services.assign("WTTDPFSSTVNMQPCCBWRUZGBVUJXTLYIIWCITOQMIKRMKHXGEPQEPZJANNURWLBQHGPAPOBWFJDFIIVHWSGVTSIYXCLCVOQXBPGJEZFUDEYSKHUJSMGPRVVAE");

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
    msg.setTimeStamp(0.289624572975);
    msg.setSource(20727U);
    msg.setSourceEntity(82U);
    msg.setDestination(9626U);
    msg.setDestinationEntity(131U);
    msg.sys_name.assign("AYSPXRAXOUAGHVXTRVCZKHZOMSYFDOUWKNXOVCMWJVKQILDZYUBALFBJQMFJZQBMEPKQBPTUWTBBPVJSIMYPGGDCABURUXDOSJMHAVJNAGLYGDLIRUNLUEOWEBEMORENOXRGPDMYSZYBFLOFQOKYQNKEVNCFSXQXHSZQTXQNTKSDKVGJHEMYATIPHCZFJVMEIJCRTRDIBCWIKZUANHNKVNIPGYFGPHISLJPAXWZZLLIGFDLEFRDWHTWTWCQ");
    msg.sys_type = 125U;
    msg.owner = 38193U;
    msg.lat = 0.0242265312873;
    msg.lon = 0.222601673587;
    msg.height = 0.756119115249;
    msg.services.assign("VPURSAXFIBAWTNPUDPNGKGHCQUAOVKDOOXSYUCYMRSCHCCRIAOFUIHJMHFSRETQJIOCNTKZRABHTGFMDJIFPBBBLZSAWEMAIK");

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
    msg.setTimeStamp(0.460629121446);
    msg.setSource(62453U);
    msg.setSourceEntity(237U);
    msg.setDestination(32048U);
    msg.setDestinationEntity(90U);
    msg.service.assign("AIZBQAWCFDKVCYWLSIEWJMCWPZKXPVWYWGGFITILEKQFLCVVCJLXKOYXVAGNVSQRTYRZHDEDYGHJRVEITUIPHBAVPYLMBMDSOPYYLGMAHLBCR");
    msg.service_type = 194U;

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
    msg.setTimeStamp(0.534450024446);
    msg.setSource(12375U);
    msg.setSourceEntity(192U);
    msg.setDestination(35090U);
    msg.setDestinationEntity(244U);
    msg.service.assign("NCULCMEZKWYHDIZJRAEANRUCHDMRIYIVGIRLGIZBLFWTXLMNEPDFNHXPUNCOSLCAXYVGPYFNTBZOKNLSCYLOBGKMBFWWFAZSIPVTVTTJJRXUTQNRPDUABQJPFJOYVVHVEIPQXEVXMJEUCSEFTYMKXEOUEXCQSQOWZBEZSKFTTWZNUHQZQQAUXDKRDMSXBBVGBGHSMPQGOIAHKHAOL");
    msg.service_type = 41U;

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
    msg.setTimeStamp(0.697324300306);
    msg.setSource(23787U);
    msg.setSourceEntity(22U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(231U);
    msg.service.assign("VQRUCNOYVTUHYXKRQYNAQABXJVXIKMLKWYZHMBAJDTJHOTFVGTBQVZRYYLFDWKRLENLFXCBPMSXAMFAMUCRLAKOTFWEEOIZKGHBPCJEHVJPPCDXMASQYTSWZAJGFPINPUJEGVRWIOKPHSFBDXFZQOZWPWRNYALWGMQOEPGFBCSDEKOOIQTEQNXBDTXLLHLNIWUQHBDEJFCCTLUZCMSGTPUIZIIJHNOZYSUNGZVUSGNSDRRCXSMHDVG");
    msg.service_type = 196U;

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
    msg.setTimeStamp(0.212942577115);
    msg.setSource(50565U);
    msg.setSourceEntity(148U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(251U);
    msg.value = 0.305205218628;

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
    msg.setTimeStamp(0.726588492966);
    msg.setSource(59320U);
    msg.setSourceEntity(186U);
    msg.setDestination(38908U);
    msg.setDestinationEntity(28U);
    msg.value = 0.6530892599;

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
    msg.setTimeStamp(0.220989341735);
    msg.setSource(15875U);
    msg.setSourceEntity(139U);
    msg.setDestination(38050U);
    msg.setDestinationEntity(205U);
    msg.value = 0.263081315579;

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
    msg.setTimeStamp(0.319764441619);
    msg.setSource(26306U);
    msg.setSourceEntity(128U);
    msg.setDestination(4053U);
    msg.setDestinationEntity(245U);
    msg.value = 0.877243001604;

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
    msg.setTimeStamp(0.255907251936);
    msg.setSource(5351U);
    msg.setSourceEntity(46U);
    msg.setDestination(43233U);
    msg.setDestinationEntity(83U);
    msg.value = 0.105958262761;

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
    msg.setTimeStamp(0.869271680806);
    msg.setSource(29229U);
    msg.setSourceEntity(37U);
    msg.setDestination(12463U);
    msg.setDestinationEntity(245U);
    msg.value = 0.670735617648;

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
    msg.setTimeStamp(0.0510765402629);
    msg.setSource(63966U);
    msg.setSourceEntity(177U);
    msg.setDestination(41160U);
    msg.setDestinationEntity(37U);
    msg.value = 0.554926699225;

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
    msg.setTimeStamp(0.0421123051063);
    msg.setSource(54892U);
    msg.setSourceEntity(173U);
    msg.setDestination(13758U);
    msg.setDestinationEntity(72U);
    msg.value = 0.681516212981;

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
    msg.setTimeStamp(0.200772836391);
    msg.setSource(2072U);
    msg.setSourceEntity(8U);
    msg.setDestination(25825U);
    msg.setDestinationEntity(130U);
    msg.value = 0.985308218905;

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
    msg.setTimeStamp(0.787015102316);
    msg.setSource(26083U);
    msg.setSourceEntity(103U);
    msg.setDestination(33244U);
    msg.setDestinationEntity(98U);
    msg.number.assign("REJQCTWPHLWPTRGGZCJRKASPCMOJVGDYPIHJKWXFJVNQDQKZFXRPQOOVLUQIISIMBKXYUUUHRKZSWZMBPFUMCGIKQRDMKAWUKXNTAIJWEPVOUIQXXYVBETLZOILGWWDYPXBLACVTNZDVVAJRNZSSEBOYFMROHNRJBABLADHSI");
    msg.timeout = 33033U;
    msg.contents.assign("ZFVITRCNEMCKLMRMUAZJUNAFEXSUGBJJAY");

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
    msg.setTimeStamp(0.559189977436);
    msg.setSource(57002U);
    msg.setSourceEntity(132U);
    msg.setDestination(50542U);
    msg.setDestinationEntity(28U);
    msg.number.assign("VGBIOAZEMMEUGVNQYRNUDCNVDFHELXURKNIJRWFVHTGFTSSMCILEBWDNPDWPOYZOMZADGVJNJLGCS");
    msg.timeout = 21112U;
    msg.contents.assign("EDSWJTBJCLSKTSCUONIKJWXNRKHRBFOVDXXZNKFSPRNGPGGDUSHEAASSXLVYBXFQMZAYLMWIRITPIOCZFLIDGWZIMGVIXORXVIDBFQBKAUVQSFQAMWWHEBCZNXNSPOTUQA");

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
    msg.setTimeStamp(0.162394413169);
    msg.setSource(22856U);
    msg.setSourceEntity(56U);
    msg.setDestination(42136U);
    msg.setDestinationEntity(102U);
    msg.number.assign("SKJIOLMKMDYBPHSDWVBKPPYZOENUKGAKNGNAYKXEQLVYIZCNITJRZVASFJABLDEUQUGDOWRAVSPCJUOCNQ");
    msg.timeout = 22504U;
    msg.contents.assign("ICQQNDWUBVXLOOZZFNDTIAXXNZDKWWRTHLBICGIWWWEEOLJZAMAHHRAZYL");

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
    msg.setTimeStamp(0.861176089401);
    msg.setSource(27002U);
    msg.setSourceEntity(156U);
    msg.setDestination(60125U);
    msg.setDestinationEntity(77U);
    msg.seq = 1821089801U;
    msg.destination.assign("JXIRMDAOGTMWJOJHEZRXJBWDLGZOEOCQLWAUXLIPWIZZIYITSAVOWRPSAFGRGRXKUPDBNFAQHZEJYNCQAEDNQPFYOWTUINBFXOPCRQBASLKCPMNNTACGBJOSUVLFELDCUZSXDQKCEGPKKTSFEHKYQDMYHVHCVZZIDLOLKHNJEEQTKOSJDTXJVMTSPJYFQHVNGUMWRUDKYSETVWHVUVBFNRHIUNBHGMIBAGBFVXTYWMPGARZZSQFYL");
    msg.timeout = 6686U;
    const char tmp_msg_0[] = {-127, 50, 73, 83, -106, 104, 109, 126, -19, 72, 112, 37, -110, 101, -3, 118, -62, 27, 39, -48, 121, 47, 97, -104, -34, -89, -93, -38, 32, 39, 115, -2, 18, 90, -16, 47, -55, 53, -19, 106, -96, 124, 38, 92, -103, -71, 107, -107, -28, 60, -104, -120, -101, -24, -50, 97, 126, 111, -85, -15, 5, 84, -58, -87, -40, 86, -70, -2, 61, 78, -3, 39, 85, 22, 85, 107, 62, 12, -4, -111, -106, 1, -105, -20, -23, -60, 123, 1, -47, 52, -84, 102, -49, 124, -11, -91, 55, 84, 7, 19, 3, -66, 106, 42, -8, 59, 110, 9, 38, -30, -14, 40, 41, 61, -121, 35, -117, 2, 37, -100, 78, 51, -94, 12, -19, -123, 102, -35, -95, 14, -93, 66, 102, -79, 100, 112, -114, 33, 47, 36, 19, -52, 79, -78, -86, -79, 8, -66, -77, -52, -106, -77, 44, -79, 66, 76, -105, 1, 103, 100, -94, -48, 38, 15, 115, -59, -70, 3, -108, -91, -6, -24, 111, 9, 101, 15, 47, 5, -61, 38, -78, 122, 22, -120, 89, 93, -52, 20, 75, -73, -77, 20, 54, 118, 90, -102, -58, -30, 88, 97, 116, 29, -65, -34, 35, -60, 112, 5, -23, 89, 7, 34, 48, 65, -44, -66, -48, 43, 87, 62, -89, 33, 84, 26, 63, -112, 103, -81, -95, -122, 67, -25, -44, 50, -83, 79, -37, -118, 115, 73, 24, -6, -64, 43, -4, -57, 108, -28, -76, -17, 66, 51, 120, 0};
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
    msg.setTimeStamp(0.876629230647);
    msg.setSource(25042U);
    msg.setSourceEntity(215U);
    msg.setDestination(19671U);
    msg.setDestinationEntity(0U);
    msg.seq = 805851302U;
    msg.destination.assign("NWOALUCKMQPBOMNVGZDTGOAHCNJJDDCF");
    msg.timeout = 24708U;
    const char tmp_msg_0[] = {-4, 6, 9, -40, 120, 26, 122, 27, 73, 25, -52, 6, -46, -96, -101, 50, 19, 22, 124, -2, -83, 49, 72, -25, 60, 94, 38, -28, -68, -25, -42, -16, 12, -42, 23, -125, -48, -88, 79, 40, -27, -33, -36, 8, -60, 22, 116, 88, -12, 29, 25, 104, -14, 110, -12, 32, -101, 124, -122};
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
    msg.setTimeStamp(0.215565016042);
    msg.setSource(15890U);
    msg.setSourceEntity(168U);
    msg.setDestination(42800U);
    msg.setDestinationEntity(240U);
    msg.seq = 3955760049U;
    msg.destination.assign("DBMQHXCQURIHDXL");
    msg.timeout = 34995U;
    const char tmp_msg_0[] = {-56, -101, -16, -43, -66, 54, 52, 52, -98, -80, -89, -89, 90, -77, -89, -119, -10, 43, 40, -38, 22, -58, 126, -20, -13, 69, -126, -23, 120, 7, 49, -24, 19, 55, -115, -120, -78, -66, 104, 14, -128, -101, -25, -128, -52, -97, 98, -94, 107, -94, -16, -120, 18, 40, 1, 95, 30, -74, -15, -69, -34, -86, -115, 54, 98, 97, -35, -10, -1, 37, 28, 96, -81, -54, 116, 6, -12, 110, 52, -91, 32, 6, 102, 12, -71, -100, -16, -124, 112, 4, -78, -99, -35, 7, -101, 121, -100, -57, 125, 33, -88, -62, 31, 74, -118, 17, -72, -7, 92, -17, -45, -91, 64, -14, 10, 101, -108};
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
    msg.setTimeStamp(0.572421623417);
    msg.setSource(15291U);
    msg.setSourceEntity(41U);
    msg.setDestination(25315U);
    msg.setDestinationEntity(211U);
    msg.source.assign("UBVYDUJXVSWHOLXYTTGCHNNPEEPJNZQCIHQIUUECMIHQOUVHSEYQNMFJMFOVWWTGFBPDRSWJYYGJLHSOOGEKJMUXBAFVTBWWQSSBLUGCJZPPDAIRBSBIXDRNGOOHRLEKUPMKZXKJVYKSXMAZWKITEMGMZVFDPQYTOAXDIGNEWVRMNBTRZSTXKWVZRNBHLTOCHKJFQIGYJZLAH");
    const char tmp_msg_0[] = {32, -13, 103, -9, -103, 13, -114, 86, 122, -15, 108, 79, 95, -79, 64, 45, 87, -124, 19, 63, 99, -42, 97, 47, -58, 93, -123, 118, 44, -52, 94, -5, -90, 20, 41, -117, -31, -54, -66, -6, 121, -82, 72, 109, 88, 123, 43, 49, -105, 76, -124, -39, -9, 87, -114, -78, -1, -122, -59, -59, 95, 99, 92, 57, 9, -26, 59, -10, 20, -103, -6, -67, -7, 40, 116, -44, 16, -58, -81, 71, 125};
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
    msg.setTimeStamp(0.0434738265696);
    msg.setSource(65010U);
    msg.setSourceEntity(81U);
    msg.setDestination(35675U);
    msg.setDestinationEntity(58U);
    msg.source.assign("QFOSZYPGLCLHAEYTRVHTNDVZSYKMYZENMGXFLAYTXBRJCHVLFWIBAQWJDMGHUGCPKVBUKQIMLUSQRIETGSFNLZAGGPAWIEUTXIULJDUBXBZHDJXYHCOYERIFARNDSDLWPWHROLTGK");
    const char tmp_msg_0[] = {-38, -21, -37, 45, -24, 94, 43, 46, 71, -54, 113, -63, -34, 80, -128, -5, 16, -54, 50, 72, 61, 27, 2, -54, -103, 57, -85, -88, 57, -103, 78, -72, 67, -121, 17, -18, 36, 34, 110, -14, -128, 113, -93, 94, 112, -73, -10, 118, 103, -85, -98, 63, -63, 69, -117, 23, -52, 9, -45, 21, 118, -98, 96, 40, -108, 76, 23, -101, -128, -125, -94, -72, -7, 63, 61, 98, 61, -76, 46, 6, 51, 4, 106, -12};
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
    msg.setTimeStamp(0.684953003982);
    msg.setSource(8035U);
    msg.setSourceEntity(23U);
    msg.setDestination(32345U);
    msg.setDestinationEntity(122U);
    msg.source.assign("ITQWMADZFVCVRMCQIQXXBUBCEZNPNLHSRHDNRLKUTKUGRHWNHGPJIMSYBWJLXOKFPOWWXEDCMUVHTTQCZYMMXSPJJIVGLPHLXKLBEHWYGNAEEA");
    const char tmp_msg_0[] = {-72, -119, -11, -44, 91, 1, -45, -87, -49, -112, 54, -65, 3, -39, -89, -22, 21, 12, 72, -96, 106, -33, 9, -48, 36, -32, 62, -95, 79, 21, -11, 52, 88, -16, -48, -109, 57, 27, -93, 120, -19, 63, -58, 113, 23, -92, -47, 116, -117, -59, -47, 118, 29, -59, -58, 63, -12, 74, -87, -37, 13, -21, -5, 103, 80, 55, 34, 3, 60, -43, -48, -40, -68, 9, 46, -19, -16, -113, 13, -2, 100, 107, 45, -67, 10, -115, -93, 96, -55, -16, 108, 6, -78, 54, 107, -21, 28, 115, -25, 60, 84, 53, -81, 29, -103, -122, 36, 23, -53, 95, 85, 92, -113, 51, 53, -83, 5, -64, 122, 13, -116, -105, -121, 125, -81, -124, -83, 32, -57, -124, 86, 10, 42, 33, -116, 34};
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
    msg.setTimeStamp(0.543452123911);
    msg.setSource(53113U);
    msg.setSourceEntity(45U);
    msg.setDestination(31322U);
    msg.setDestinationEntity(193U);
    msg.seq = 1686728498U;
    msg.state = 78U;
    msg.error.assign("KNFIBGULDPWJYVMAFUYZDPFHCXGHOGLQSLVFDBCNOOHLOXSUWPVRPBWLJSDNGOIMAPQRCLTKCCZAZGLYTWNWBMKEXXPIOBDSUYGERKRPEIRWQ");

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
    msg.setTimeStamp(0.00138446316954);
    msg.setSource(31458U);
    msg.setSourceEntity(117U);
    msg.setDestination(47179U);
    msg.setDestinationEntity(56U);
    msg.seq = 2306622219U;
    msg.state = 27U;
    msg.error.assign("DZPMEGMAXKJXDCLGSZNLVHGZICAGEXRTKDGNLBNWVOJCKJFSDYCRKYICZZHRBJTTZTHKSEEZAFOQXQNKBZUJLISRXPUTIFOUOHXBMLZTRDYHLNFMYFWUFXPNNIUOBULPSDVGFKOREMAQJVVOCLIFYASFQPAEJMVVSQGVBPWHEUKCJHRWIZBXNFMORSYBHAEKAWDHCYDCPT");

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
    msg.setTimeStamp(0.0772734087251);
    msg.setSource(22283U);
    msg.setSourceEntity(173U);
    msg.setDestination(7769U);
    msg.setDestinationEntity(178U);
    msg.seq = 3954000018U;
    msg.state = 43U;
    msg.error.assign("XCVVTHGMWBFLUCPUXVNPVMAW");

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
    msg.setTimeStamp(0.817764154914);
    msg.setSource(22997U);
    msg.setSourceEntity(69U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(102U);
    msg.origin.assign("EUFIUDUQESRQEGOCMOXJSZMZHIFPXVNEDNIEOJXBFTRPEODYWPKBCLWTRCAAOUIDHNEVONAZTLIMFFZLGPCYWLZSU");
    msg.text.assign("CYRXFLQDSPCQLCIJWHOBMWAHXXAORGQJUHZSHVY");

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
    msg.setTimeStamp(0.347095560547);
    msg.setSource(1134U);
    msg.setSourceEntity(242U);
    msg.setDestination(28112U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("CDCHCIZUZEHYGPHVOJHTXSUVKGNEJPSYTHMNBVKZQJFTEHJOROXMRYEPAKWQCWOUXYIDFNHQYZXAWBRBBQXCMXALLUCOLZJNGMGYTUGFBWQVIOXFTLNEVKDTSWQPSSIVSSPEABWGYNIBHOUPJPDZGDTIUGICPZMRAZSLLWEZBFCTBNPKUQJDRFKXKWEMMYMEKLRFSKAGJQRCMUFLDOPLADYCDMHVZAROAAWYIRQBNNVIVXTJFSJROTWQXG");
    msg.text.assign("ACBWAGOSFSURIHPJNMZY");

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
    msg.setTimeStamp(0.119981400481);
    msg.setSource(21580U);
    msg.setSourceEntity(224U);
    msg.setDestination(182U);
    msg.setDestinationEntity(221U);
    msg.origin.assign("XAWRUBHLZELGQOIOUBAYMHBPFPTVBNHCCDZTQLEFJFKTXMTVISOIDFEKISSJZZIMGIVOTLFOYCLUEWPVKBNYUKVDZLOEGCXLRFPBAEAKY");
    msg.text.assign("GSZZONAOQROOHSQQSYURTPWIOMVYIUNMDLESUUPCGWFZLBWORVJIREMXIBMVVASIUKECGBTBGVWGLDVAACMKZRCCQUTXETLSSAYKLYXHMEILDAHXOYCIYJBHAPTEHHDMGNFRCNTFLSXJQEWPGPRNOJADQDXDRSZJJBLNKXOVZDUQBJDKQGPYNFOMYAUNKCKZZVTIFDKPFPGQZWPGYVNTHBEHFJWEHKWXX");

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
    msg.setTimeStamp(0.123365222661);
    msg.setSource(56063U);
    msg.setSourceEntity(165U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("GZXBHOWIDEQSHAPVARZAGVDIKOZXMKAKWFJHSMKUBBJBEZSTGNPJCAOUCRUFRRDRVQCMAMQECUWKVSDOVNHLGMUQNYWRCIHEMJZOHCEOOSFPXAYGJKVQVUIKISFNNTDYUJLJNQMTTDBUTMSCWRPZFGIQNBNTRVYVGBPSXAPZMDQAKDSPQYQXTYYFYZGFJUHYXOEWNHRJCP");
    msg.htime = 0.0808625523428;
    msg.lat = 0.0210874310565;
    msg.lon = 0.4308181081;
    const char tmp_msg_0[] = {24, 32, -40, -86, -123, -101, 13, -5, 14, -75, -27, 119, -12, 54, 50, -106, 2, -34, 86, 62, 19, 93, 64, 51, -59, -107, -43, 6, -97, 105, -85, 38, -40, 29, 111, -117, 121, 113, 70, -8, 62, 57, -105, -97, -16, 97, 18, -60, -82, -126, 16, -50, -40, 17, -105, 103, -59, -7, 9, 64, -99, -111, -63, -118, 31, -80, 107, 76, -58, 76, -78, -67, 48, -15, -107, -89, 120, 55, 4, -55, -92, 3, -7, 85, 77, -114, -1, -62, -51, -36, -108, -126, -77, -94, -119, 120, 44, 5, 26, -126, -89, 86, 82, 57, 21, -96, -21, 99, 67, -106, 2, -1, -32, 94, -68, 119, -75, -47, -76, 63, -46, 94, -14, 89, -88, 107, 92, -33, -94, 92, -80, -125, -42, -52, -49, -1, -65, -4, 82, 55, 95, 68, 75, 119, 20, 67, 111, -120, -38, 62, -31, -89, 41, 3, 22, 71, -13, -23, 31, -32, -83, 103, -27, -10, -90, 73, 66, 67, 105, -31, 92, 34, -43, -125, -94, 16, -9, -77, 2, -95, -109, 20, 91, 10, -82, 101, 39, 42, -61, -102, 125, -1, 30, 38, 55, 72, 22, 108, -15, -33, 99, -36, -123, 33};
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
    msg.setTimeStamp(0.399553535803);
    msg.setSource(3114U);
    msg.setSourceEntity(3U);
    msg.setDestination(50071U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("CETBDVFDCAJGMKACAAVBWWHIACJXGNUJLHC");
    msg.htime = 0.145088157299;
    msg.lat = 0.622576331982;
    msg.lon = 0.456302637283;
    const char tmp_msg_0[] = {60, -7, 71, -102, -98, 66, 30, -1, -106, 97, -24, -8, -103, 0, 18, 55, 8, -2, 53, 28, -51, -60, 9, -20, 43, 67, -57, -26, -122, 115, 108, -5, 26, 57, 65, -9, 123, -97, 123, -34};
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
    msg.setTimeStamp(0.223829724743);
    msg.setSource(9738U);
    msg.setSourceEntity(78U);
    msg.setDestination(7704U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("UIGADKLCPOEBWQEVSNBWNCDZIZRLXCTTRBLRIMHLYKXOPWIRYEPGMNLAZMTYAGBDSSCQFWXTNQRTJYONYTOIEMMKEHAGHZAPNUYTJEIDCKHVXBKIGMWLHZYUMDSKBBVFJKOUKSMDRZUVVXHTAOPUESFQOUVMTHEPNADSUQXVGBHYLCOWJPNJFXXCGQRECBGYIFDSLLTQJGALOBWWMJVPHQREFPYFFRCCDZQWJFAAXJSVRZPNGXDSZFOUIIWN");
    msg.htime = 0.754457359251;
    msg.lat = 0.194624501399;
    msg.lon = 0.217913945998;
    const char tmp_msg_0[] = {27, -57, -23, 16, -62, 117, 93, 66, -35, -76, -32, 16, 22, -41, -127, 59, 112, -108, 62, 51, -36, 50, -51, 74, -18, 122, -77, 43, 107, -65, -94, -29, -8, 110, 12, 16, -77, -17, 72, -50, 109, 1, 108, 44, 112, 34, -13, 5, -110, -101, 16, -96, -117, -5, 13, 79, -46, -2, -41, 52, 101, -94, -53, 33, -91, -25, 99, 78, -125, 17, -10, -47, 3, 118, -86, 8, -127, 94, 60, 24, 113, 98, -27, 10, 4, -96, -25, 68, 93, -86, -105, -96, 84, -50, 122, 7, 111, -111, 112, -57, -4, -42, 27, 13};
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
    msg.setTimeStamp(0.509112079295);
    msg.setSource(3481U);
    msg.setSourceEntity(102U);
    msg.setDestination(32109U);
    msg.setDestinationEntity(111U);
    msg.req_id = 50089U;
    msg.ttl = 37546U;
    msg.destination.assign("INEICZSBDTVYRXHCCKOQFSKYWSBNWMWOXKKEALWUKZVGOQDFTRNEJBAPPPUGV");
    const char tmp_msg_0[] = {85, -2, 32, -86, -102, 16, 82, 91, 76, -86, -24, 88, -48, -115, -31, 15, 47, 40, -46, -43, 3, 20, -52, 66, 11, 71, 67, -125, 85, -49, -95, -64, -26, 114, 108, -7, -63, -67, 84, -89, -100, -69, -60, 81, -82, -3, -65, 125, -29, -127, 20, -101, 36, 72, 116, -119, -77, 62, 118, 63, 108, -122, 124, 59, 93, 71, 54, -54, -97, 15, 40, 81, 88, -95, -11, -10, 50, 94};
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
    msg.setTimeStamp(0.892390519811);
    msg.setSource(64003U);
    msg.setSourceEntity(239U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(236U);
    msg.req_id = 7780U;
    msg.ttl = 35638U;
    msg.destination.assign("NGJYJPYIWKSAEXYAANUOPLUCYVJPJKEXHIRFOWULXFHSOKUDSJPQHTMXDAKXUIJYCLBUJZCRNXPFJNNHVZEMPKCFHHGQEFBZQZRQCULGSQWXLTHCFAWAZTREOMBWVQMITOSKTQTTMIPBBDGYGRBXYNBYVLDOHRIMCRWCOMZVESEGAOKPIPELBFEHRBZGLDMVXAISQNGPYTWZTKT");
    const char tmp_msg_0[] = {62, -32, 54, -99, -65, 97, 55, -51, 18, -43, 52, 6, 68, -22, -69, -33, 117, -57, 19, 84, -91, -78, -59, -116, 123, 58, 9, 25, -77, -82};
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
    msg.setTimeStamp(0.762463523649);
    msg.setSource(47754U);
    msg.setSourceEntity(212U);
    msg.setDestination(29799U);
    msg.setDestinationEntity(13U);
    msg.req_id = 7603U;
    msg.ttl = 419U;
    msg.destination.assign("NMDOHEDCMAZAEYNGXCUROQAQCTOJZSMRNROIQUJQ");
    const char tmp_msg_0[] = {33, 96, 51, 121, -20, 69, 118, -11, 12, -69, 21, -21, 90, -15, -60, 102, 116, -74, -26, -27, -38, -109, -112, -66, 2, -121, -92, -102, -62, 44, 93, -29, 20, -16, -40, -113, 33, -110, 67, 98, -103, -100, 66, 37, -86, -12, -89, 116, -110, -118, -117, 106, -47, -103, 60, -50, 13, 28, 99, 84, -59, -21, 77, 47, 76, 57, 55, 65, -112, -67, -45, -9, -14, 107, -17, 50, 52, 21, 20, 111, -109, 80, 110, 27, 109, -5, 83, -31, 49, -28, 70, 110, -39, 5, -1, 124, 54, 84, -24, 80, -84, 119, -27, -24, -64, 77, -92, -66, 42, -84, -101, 82, 15, -105, -60, 68, -23, 90, 21, 98, -113, -22, -94, 13, 43, 57, 119, 51, -5, 44, -39, -26, 75, -12, 40, -9, 60, 85, 22, -104, 26, 18, 54, -13, -111, -3, -94, -27, -111, -79, -91, 33, 24, 31, 61, 70, 75, 25, -119, 123, 88, -16, -122, 120, 87, 5, -64, 76, 88, 104, 58, 15, -10, 9, -32, 76, 67, -74, 113, -80, -93, 78, -59, -107, 1, -30, 89, 34, 28, -72, -99, 92, 33, -17, -27, 108, -21, 112, -55, 70, -32, 39, -88, 59, 71, 7, 103, 10, -73, -121, 87, -51, 98, -55, 38, -6, 118, 44, -86, 107, -101, 78, 76, -3, 123, 49, 15, -84, -54, -51, -61};
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
    msg.setTimeStamp(0.928285678946);
    msg.setSource(21358U);
    msg.setSourceEntity(84U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(48U);
    msg.req_id = 5465U;
    msg.status = 76U;
    msg.text.assign("YBQMRSLWSVOCEAUXPDJWEIRBCJOSZIGBLAQCLQRFHTJHNFLUFUVYXUTTQNDSRFADLCZXKMNWCNIHZUICOZ");

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
    msg.setTimeStamp(0.205276915548);
    msg.setSource(36416U);
    msg.setSourceEntity(202U);
    msg.setDestination(64974U);
    msg.setDestinationEntity(213U);
    msg.req_id = 51273U;
    msg.status = 243U;
    msg.text.assign("ZNQMNZZOTNSKLXJJLWTOZIMRSXZFCDSVTIYOWGPKPEYAOWJJGKRWUDMTAWKCRMEDKJMZIUJCVMUOVUHJPLIPHRCMIHGCNYWYNXGKHKCTBNVSNQDJFZATAELWVHXVHZLWEOILJEBXCRSDDESRGGMZBSBYSLFEGVKPEBOQHTUFCFUNYVKWRUBIBFSAFXQ");

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
    msg.setTimeStamp(0.42658335154);
    msg.setSource(24820U);
    msg.setSourceEntity(22U);
    msg.setDestination(59320U);
    msg.setDestinationEntity(14U);
    msg.req_id = 3964U;
    msg.status = 140U;
    msg.text.assign("VTKWJMGGSRECWXJJEMNVEATLQGOKDHVAILMSUORZPMBXWLMZBTWELRDBQQKKTVCGDJQYARIBBUAEZFFAEXNSORFMJQECDLOHEVSHHMSSDCAYSUWFVKYPLXVBJOGJHOLWKQGDMWZPJPZBNAPLWQJFVDPICXXIJYYSZFSYKKUMIZIDZUXGCKQAILYROCVTTWTYHBPAXFNORPQZSVLFWCUIUNRYYONOUKTUQXIPHNNCTHHZBR");

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
    msg.setTimeStamp(0.760218534034);
    msg.setSource(23028U);
    msg.setSourceEntity(56U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("FTBKXHSDBRGSLXZUIXJPCBPIPOJBNAJVZIIZTRLNFWXSLYOLSZSBDUWZYPRAMVEKIBFHMEFCDKHQVYTQEDJQ");
    msg.links = 1208977200U;

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
    msg.setTimeStamp(0.699136695544);
    msg.setSource(10450U);
    msg.setSourceEntity(98U);
    msg.setDestination(50510U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("PIOUFHFONKDXIAWUATCUUBZPYXWAJBETLEAGGQCNKMJNKLPPWABMHHUQAWPSJSDOOKGYZDISBIYZJMKXJSBNZJTEKNUJURROIGZVSILERPDAEQTKQBZTZWKMAZCTGJMYIDFSPHJLQVEDERTCBSHEEKFPUIVCDDRMRCHXLXJXVOQNFGOQIDNRMYYYNOQLFBTWPSMVMLTGLQXHGHCYWPCDKXFFVVTHHXNCLGWWMFOZCYOI");
    msg.links = 2774417501U;

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
    msg.setTimeStamp(0.104685146395);
    msg.setSource(39898U);
    msg.setSourceEntity(202U);
    msg.setDestination(54637U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("PBUYOUCWEVKODGRBFWNMJQMIUPYAEAZHQSRQHOAUNKZOQLTHNPYBFEJXXETTUGZIIFYNDBFQHDILPPMWAMBMPNKULYWJHOCGPZVYCJWQZOSVNIEJBOJXIQRWGFRACYFJBMEKLRVSATHASCUUGZCSDGKWCPRSALHDVCXSXVHIMEXZZMJFOXKSGKRDJIYZKLLBZDTAHXTTOSGWLGVNPMFDBXPATDYUW");
    msg.links = 2168432510U;

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
    msg.setTimeStamp(0.766063169986);
    msg.setSource(46387U);
    msg.setSourceEntity(31U);
    msg.setDestination(50733U);
    msg.setDestinationEntity(220U);
    msg.groupname.assign("XTSVJFPKSGNZRMWSSLLJFRGSSFUZPFEQHMJBVVLZUWFLQUGPYHIRNXNZBYIRBDEKJMMNWOPTXULMQYRYHSGFSKWXVUMIWNZSLIPIOKJDBPCOHDTCWLCZKNBAVFLOCHEQDVUOEKRLDIYYKXNOOWDEEODXKPCYJGCCHAUXVYSMNHIHNXTABEERTZRBIMQYJTMEQDTUXAZFPJVCZBVIKYDWIPCCJEGNAPDQORRLFJGHWTAQM");
    msg.action = 246U;
    msg.grouplist.assign("VRXGYZHMLPSUNNHOOYK");

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
    msg.setTimeStamp(0.221277718604);
    msg.setSource(36770U);
    msg.setSourceEntity(6U);
    msg.setDestination(37260U);
    msg.setDestinationEntity(148U);
    msg.groupname.assign("PARGXUHVXOTSSSOMZHKLRMPOCSRLQFDQDBWETTEGNKVYOVOPEVPTLHIFIQCSGJRAZQUYDDOZEXHEQWLGZXVBCFAKTSAYYJWEIIZNTSJFZVBAUCQVANXIIGBHKDQAZQNFLQJAFDGNBJLEWNOOEFSBVBHDWYGNCBKKHNRXTKYNPYFOJCPLBEOCDWLPPXTRLJJDJBCTMUGHHYUZFIUXTSFIWMAJMXZYP");
    msg.action = 18U;
    msg.grouplist.assign("AOGRTSHJNARCLWFGNDPORMEHEPHJJITWVZRBFZIVKQYDGZXLKMVNJGONMPYKWZAUFOIRQYRBKEJBZSSQJCCUZUFSDUNSOQHUYKUOSPPMDXIVSTSJQGMJAXELEYWPBYUAHBZNXNFNXCILWLTCEHMPRTBWAUFDUFGBHFORQYQ");

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
    msg.setTimeStamp(0.262239036849);
    msg.setSource(25830U);
    msg.setSourceEntity(233U);
    msg.setDestination(30613U);
    msg.setDestinationEntity(163U);
    msg.groupname.assign("CNMNCQYDNRIMETSFDORYOZMJRUVRHCHQUYEUDYLHOPKZVXHSAPWGUKIFWNOZSLCMJTCOMTWTNZVYDIFEXWJLHNTGDIOVXBRQDXRHEHDKWAMVTBZMABPLBDTIEXZVDJPUFKXRNNEPUZH");
    msg.action = 64U;
    msg.grouplist.assign("KTJWGOYERNHFAHYOEFOEECATRXSXIGZPPMPFTAIYNTLKEULPBBAZGHPCPHSUSWKLDNSFETSINVCWCQZYTCWNLHRVJSXQEBZRZEBNUDQUDPXICUXQYROSLXUOLWYCNAQOYGRYTIZLBIHCIZWWVMLNOAORMQURMTMDZ");

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
    msg.setTimeStamp(0.850021215692);
    msg.setSource(62290U);
    msg.setSourceEntity(253U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(76U);
    msg.id = 17U;
    msg.range = 0.377510402847;

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
    msg.setTimeStamp(0.247992714261);
    msg.setSource(40306U);
    msg.setSourceEntity(230U);
    msg.setDestination(63920U);
    msg.setDestinationEntity(172U);
    msg.id = 118U;
    msg.range = 0.557788938874;

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
    msg.setTimeStamp(0.6035540583);
    msg.setSource(30391U);
    msg.setSourceEntity(133U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(159U);
    msg.id = 92U;
    msg.range = 0.560623941454;

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
    msg.setTimeStamp(0.774095058152);
    msg.setSource(18101U);
    msg.setSourceEntity(220U);
    msg.setDestination(13674U);
    msg.setDestinationEntity(125U);
    msg.tx = 121U;
    msg.channel = 169U;
    msg.timer = 49827U;

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
    msg.setTimeStamp(0.351081865838);
    msg.setSource(54853U);
    msg.setSourceEntity(30U);
    msg.setDestination(40769U);
    msg.setDestinationEntity(170U);
    msg.tx = 172U;
    msg.channel = 168U;
    msg.timer = 62398U;

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
    msg.setTimeStamp(0.980454620282);
    msg.setSource(61954U);
    msg.setSourceEntity(146U);
    msg.setDestination(36181U);
    msg.setDestinationEntity(51U);
    msg.tx = 175U;
    msg.channel = 66U;
    msg.timer = 49739U;

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
    msg.setTimeStamp(0.319263487267);
    msg.setSource(4384U);
    msg.setSourceEntity(147U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(245U);
    msg.beacon.assign("LRJCSCZGLMEZAOKGSLHKFQRRHZDHJSIJGAJFDOKNVMGVRUBJMFKLMTLXYVIQQVWVETHLLUOPTCZXUBOJQISMZYOILYJGKPPBKNWXFQCDXHEWPBGRMJUPELKKKJYQHAE");
    msg.lat = 0.883281102004;
    msg.lon = 0.273645078439;
    msg.depth = 0.248496761067;
    msg.query_channel = 121U;
    msg.reply_channel = 65U;
    msg.transponder_delay = 97U;

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
    msg.setTimeStamp(0.288908114376);
    msg.setSource(21086U);
    msg.setSourceEntity(189U);
    msg.setDestination(31976U);
    msg.setDestinationEntity(4U);
    msg.beacon.assign("JVQTPQJUKMRRPEKSJZTLYAYKZCIFACQDGXOZSMWSWGVSDWFTMMUUKSEEGEWCGYWHKHHSGIFJBMWXLGYMODAMOVVNXCXUDZFMNBPULEFRRBVKELAHTIBNOKENZXKCVHOFJQRRADFCUQILISORFUIYVJSGXDNPTADPEYNOYWXCJLTQAZARYIHBDPTCUCKAHNVGETJQPWZNPUVDNUZBHVOHIGIRPFKLWFXXZABOXRESQHPIBBTTOCJWMQBMQLZDYY");
    msg.lat = 0.195654561892;
    msg.lon = 0.0488376584776;
    msg.depth = 0.105283196106;
    msg.query_channel = 160U;
    msg.reply_channel = 102U;
    msg.transponder_delay = 19U;

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
    msg.setTimeStamp(0.0396446398877);
    msg.setSource(45624U);
    msg.setSourceEntity(60U);
    msg.setDestination(29158U);
    msg.setDestinationEntity(74U);
    msg.beacon.assign("FZRATROACOQAZJXQCMMWEZDHVNWNWYIYHADSNIEXEKCKXSDLXIKJSUZSHZVNCZSUJRYTPMRQPLGFIWJFOFPTCEGJTEHTXPTVEVSUGUAKAYQHKIXFBOPKVWFOIVYEBKGHVYJSEGIEODZOXHAGYWKDVMOCNCAHKRYMVNFHBRQXOWDUXJLZLFWKBBLRJSRPBDTYJFQNIQNAGDUBOUELWBPPMPFIGJCZ");
    msg.lat = 0.705900567154;
    msg.lon = 0.638793540998;
    msg.depth = 0.476410993693;
    msg.query_channel = 19U;
    msg.reply_channel = 194U;
    msg.transponder_delay = 67U;

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
    msg.setTimeStamp(0.81947256562);
    msg.setSource(17574U);
    msg.setSourceEntity(115U);
    msg.setDestination(2353U);
    msg.setDestinationEntity(91U);
    msg.op = 114U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RNBTNBJFWKQVRGRBLTQLVALONHNZMVFZXBIUATXKCMQFXAWMBZXJOISLNGAUQPEATUJYINSEPCHVUXHHDEOOSTIDKNHRRMNGMFOZYBGWTTUPRUEHEWTFCPZKDTPJFUMZDHOMFCPWBCYBKSQGYRJUBGHKYJJOXYYXRIOYSKDLDGVGPWNEMAZEEWRISOSDDXBDLUYVLLWPKPYWQGVJJVQATFIKSCQPFXSVRLHCMQNKUCEACHIXDZGIOAIZSEFCVQ");
    tmp_msg_0.lat = 0.497926771299;
    tmp_msg_0.lon = 0.0367115164733;
    tmp_msg_0.depth = 0.346016799795;
    tmp_msg_0.query_channel = 143U;
    tmp_msg_0.reply_channel = 69U;
    tmp_msg_0.transponder_delay = 198U;
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
    msg.setTimeStamp(0.883340326077);
    msg.setSource(37941U);
    msg.setSourceEntity(136U);
    msg.setDestination(18659U);
    msg.setDestinationEntity(35U);
    msg.op = 23U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JGWDZOXEYPGONKWGFBZXQUVHOWHEGSSUQQXXCPTQXFJMARCBJCZLVGWUDAFYMMVTIDCYURKFALNQCIVDKVYYVCARSMWKBVNKJHBNRGSTIUQKSXHMNFWZGENREQHLKPCSHAOBRSTLJDFYPYFZOJMTDYFLPRIZVKQOOEHENNETAESMIFUJBHRLSYWIXUHJLRTBANBDLZRJUTPBXAQI");
    tmp_msg_0.lat = 0.356130096024;
    tmp_msg_0.lon = 0.938743518338;
    tmp_msg_0.depth = 0.537053098883;
    tmp_msg_0.query_channel = 42U;
    tmp_msg_0.reply_channel = 5U;
    tmp_msg_0.transponder_delay = 81U;
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
    msg.setTimeStamp(0.287460092077);
    msg.setSource(33561U);
    msg.setSourceEntity(148U);
    msg.setDestination(53118U);
    msg.setDestinationEntity(188U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.915474581881);
    msg.setSource(41462U);
    msg.setSourceEntity(231U);
    msg.setDestination(40732U);
    msg.setDestinationEntity(67U);
    msg.address = 182U;

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
    msg.setTimeStamp(0.960524049145);
    msg.setSource(10092U);
    msg.setSourceEntity(97U);
    msg.setDestination(1597U);
    msg.setDestinationEntity(90U);
    msg.address = 188U;

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
    msg.setTimeStamp(0.441987666584);
    msg.setSource(5106U);
    msg.setSourceEntity(58U);
    msg.setDestination(12755U);
    msg.setDestinationEntity(180U);
    msg.address = 200U;

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
    msg.setTimeStamp(0.139402472493);
    msg.setSource(27272U);
    msg.setSourceEntity(60U);
    msg.setDestination(31667U);
    msg.setDestinationEntity(88U);
    msg.address = 12U;
    msg.status = 215U;
    msg.range = 0.880338616551;

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
    msg.setTimeStamp(0.315720685685);
    msg.setSource(24418U);
    msg.setSourceEntity(74U);
    msg.setDestination(11152U);
    msg.setDestinationEntity(90U);
    msg.address = 197U;
    msg.status = 242U;
    msg.range = 0.74430947194;

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
    msg.setTimeStamp(0.515937177989);
    msg.setSource(36483U);
    msg.setSourceEntity(95U);
    msg.setDestination(21938U);
    msg.setDestinationEntity(144U);
    msg.address = 145U;
    msg.status = 31U;
    msg.range = 0.395394920633;

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
    msg.setTimeStamp(0.141851048375);
    msg.setSource(31237U);
    msg.setSourceEntity(38U);
    msg.setDestination(5830U);
    msg.setDestinationEntity(30U);
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 166U;
    tmp_msg_0.value = 0.885507844929;
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
    msg.setTimeStamp(0.437998114134);
    msg.setSource(54294U);
    msg.setSourceEntity(142U);
    msg.setDestination(56009U);
    msg.setDestinationEntity(230U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("TENZDRNBCDJBGCTKKQWMNZZEASRRFYTPPEDGVLLISKQGOEJDVTMFEASCEJTZXSHEORQSMEVIBJTIPRLNORZKCVDZXYUWJZHPKOGXULAVDCKGSCPRMLXUFXVDNWQQMDYKCJBXMVFWKG");
    tmp_msg_0.value = 31U;
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
    msg.setTimeStamp(0.746369081263);
    msg.setSource(42322U);
    msg.setSourceEntity(113U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(220U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 107U;
    tmp_msg_0.error.assign("RSKQGTAILASTBAKSCINFBAXITNVDKOAMMJDALNTWOHHYFAIUY");
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
    msg.setTimeStamp(0.663541778152);
    msg.setSource(4479U);
    msg.setSourceEntity(66U);
    msg.setDestination(40613U);
    msg.setDestinationEntity(190U);
    msg.enable = 164U;

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
    msg.setTimeStamp(0.905992254431);
    msg.setSource(1418U);
    msg.setSourceEntity(160U);
    msg.setDestination(31547U);
    msg.setDestinationEntity(94U);
    msg.enable = 13U;

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
    msg.setTimeStamp(0.321521011991);
    msg.setSource(18294U);
    msg.setSourceEntity(9U);
    msg.setDestination(61801U);
    msg.setDestinationEntity(79U);
    msg.enable = 40U;

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
    msg.setTimeStamp(0.629416923582);
    msg.setSource(56655U);
    msg.setSourceEntity(174U);
    msg.setDestination(29804U);
    msg.setDestinationEntity(2U);
    msg.summary = 71U;
    msg.level = 54U;

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
    msg.setTimeStamp(0.891352710536);
    msg.setSource(25758U);
    msg.setSourceEntity(208U);
    msg.setDestination(37411U);
    msg.setDestinationEntity(48U);
    msg.summary = 141U;
    msg.level = 52U;

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
    msg.setTimeStamp(0.683389564778);
    msg.setSource(49456U);
    msg.setSourceEntity(146U);
    msg.setDestination(35124U);
    msg.setDestinationEntity(239U);
    msg.summary = 250U;
    msg.level = 171U;

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
    msg.setTimeStamp(0.486297845225);
    msg.setSource(42580U);
    msg.setSourceEntity(237U);
    msg.setDestination(23411U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.0534252811631);
    msg.setSource(51438U);
    msg.setSourceEntity(247U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.768857709888);
    msg.setSource(39109U);
    msg.setSourceEntity(202U);
    msg.setDestination(41591U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.709296488535);
    msg.setSource(8817U);
    msg.setSourceEntity(145U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.754969312105);
    msg.setSource(10671U);
    msg.setSourceEntity(245U);
    msg.setDestination(62843U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.3259431833);
    msg.setSource(48558U);
    msg.setSourceEntity(149U);
    msg.setDestination(47170U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.370128474917);
    msg.setSource(42487U);
    msg.setSourceEntity(249U);
    msg.setDestination(18867U);
    msg.setDestinationEntity(183U);
    msg.op = 184U;
    msg.system.assign("OMJWFUGBXTCTRIKUZYHOLQSSBZOQOEMJTNOVIDCWOSHFUEQYQDAIBSJTEPMRI");
    msg.range = 0.799287381392;
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.480504560138);
    msg.setSource(5029U);
    msg.setSourceEntity(233U);
    msg.setDestination(35679U);
    msg.setDestinationEntity(215U);
    msg.op = 196U;
    msg.system.assign("CPNROJLDUTBOVGPIXWSMWJIREFJWIEKNDERLCJFZMBFGBCDGUDJIYWHLVUKXNYRKPCPDCDMQPSTDPAKESHBALEHXBSCOVMAEFOGFJUFIA");
    msg.range = 0.526490016897;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2843015090U;
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
    msg.setTimeStamp(0.717628261638);
    msg.setSource(42133U);
    msg.setSourceEntity(13U);
    msg.setDestination(42384U);
    msg.setDestinationEntity(49U);
    msg.op = 38U;
    msg.system.assign("TATUGPTKHWHRPNOIUJWQWXJYAFPTFYEIUYJLATWEOTXSFAUCOUJYAZCLDXJEFCEYYVMSWQHCZIBNCQKWLXKGXOUBVKQLZGZGSEHGKRFZAWWRESZGKVVWLRRLZFBQBFZSMUFTQJDIPOYMBQJNASIETHLKOPVPBTSV");
    msg.range = 0.101784300914;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3474276262U;
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
    msg.setTimeStamp(0.600972738105);
    msg.setSource(10780U);
    msg.setSourceEntity(209U);
    msg.setDestination(45319U);
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
    msg.setTimeStamp(0.907881972848);
    msg.setSource(35036U);
    msg.setSourceEntity(160U);
    msg.setDestination(23754U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.215157249759);
    msg.setSource(3973U);
    msg.setSourceEntity(7U);
    msg.setDestination(47472U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.635131416256);
    msg.setSource(58963U);
    msg.setSourceEntity(167U);
    msg.setDestination(35091U);
    msg.setDestinationEntity(201U);
    msg.list.assign("MUVJOIXACHBGLHXEVLXZCKQEKSCGWLYWQBXSSATRPBYSPJTCCVXPSUKBSOORLQQYKILCXYJPQOSF");

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
    msg.setTimeStamp(0.887579931975);
    msg.setSource(14447U);
    msg.setSourceEntity(158U);
    msg.setDestination(47973U);
    msg.setDestinationEntity(88U);
    msg.list.assign("AHKCLVXFXXILUZJYOSBJNYCCDEBORPFZOIWIOECIEZBFUFGPILNYGRFAPFQLDSWNFTEMKLBZSNBVHXKKHCZRECGUVYYPWFSQSBWHYSPAGMEEJLDRWKARRVQUYUTGHAVSXTNEQGMGAKRMNWTJABTDNJDSMILQCUPNVWKWHJCQZOPGMXDJUUWMAHEXLODVQHLZYVALBOXZOITNEDPKBTGXQJMCBV");

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
    msg.setTimeStamp(0.578575214553);
    msg.setSource(60735U);
    msg.setSourceEntity(10U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(3U);
    msg.list.assign("ZLJRGUIUCLHRIDSLNIRKZGOITFYZYKKOARQXEDCJYXXKWDHOSGLTYHPNBLOJMGMABWCWDWJBRCJVAHSARACEFDKCNGHXMRFNIIYUBFPOGVKS");

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
    msg.setTimeStamp(0.209519444111);
    msg.setSource(43394U);
    msg.setSourceEntity(89U);
    msg.setDestination(31496U);
    msg.setDestinationEntity(148U);
    msg.value = -29500;

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
    msg.setTimeStamp(0.464083411511);
    msg.setSource(61363U);
    msg.setSourceEntity(178U);
    msg.setDestination(30562U);
    msg.setDestinationEntity(208U);
    msg.value = -21521;

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
    msg.setTimeStamp(0.450545404238);
    msg.setSource(57022U);
    msg.setSourceEntity(52U);
    msg.setDestination(43476U);
    msg.setDestinationEntity(32U);
    msg.value = -13031;

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
    msg.setTimeStamp(0.369710667573);
    msg.setSource(11369U);
    msg.setSourceEntity(13U);
    msg.setDestination(9641U);
    msg.setDestinationEntity(86U);
    msg.value = 0.919903129772;

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
    msg.setTimeStamp(0.247105162785);
    msg.setSource(30077U);
    msg.setSourceEntity(7U);
    msg.setDestination(28429U);
    msg.setDestinationEntity(199U);
    msg.value = 0.913704807336;

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
    msg.setTimeStamp(0.453347426617);
    msg.setSource(14691U);
    msg.setSourceEntity(160U);
    msg.setDestination(22480U);
    msg.setDestinationEntity(114U);
    msg.value = 0.291473159075;

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
    msg.setTimeStamp(0.0716308170855);
    msg.setSource(20311U);
    msg.setSourceEntity(243U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(60U);
    msg.value = 0.563982006357;

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
    msg.setTimeStamp(0.677655938524);
    msg.setSource(23647U);
    msg.setSourceEntity(195U);
    msg.setDestination(32717U);
    msg.setDestinationEntity(172U);
    msg.value = 0.337838091107;

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
    msg.setTimeStamp(0.0333147925596);
    msg.setSource(6809U);
    msg.setSourceEntity(238U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(40U);
    msg.value = 0.256278532602;

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
    msg.setTimeStamp(0.524900609976);
    msg.setSource(26210U);
    msg.setSourceEntity(117U);
    msg.setDestination(8613U);
    msg.setDestinationEntity(254U);
    msg.validity = 38402U;
    msg.type = 238U;
    msg.utc_year = 3985U;
    msg.utc_month = 225U;
    msg.utc_day = 157U;
    msg.utc_time = 0.669963837331;
    msg.lat = 0.537461242816;
    msg.lon = 0.232701534632;
    msg.height = 0.877853794384;
    msg.satellites = 254U;
    msg.cog = 0.645684666233;
    msg.sog = 0.84087627621;
    msg.hdop = 0.524661687149;
    msg.vdop = 0.624182833758;
    msg.hacc = 0.223865872611;
    msg.vacc = 0.188701240094;

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
    msg.setTimeStamp(0.830724661119);
    msg.setSource(37036U);
    msg.setSourceEntity(236U);
    msg.setDestination(32664U);
    msg.setDestinationEntity(244U);
    msg.validity = 59109U;
    msg.type = 176U;
    msg.utc_year = 42363U;
    msg.utc_month = 146U;
    msg.utc_day = 130U;
    msg.utc_time = 0.949470067699;
    msg.lat = 0.831298129936;
    msg.lon = 0.212626852384;
    msg.height = 0.615747097942;
    msg.satellites = 15U;
    msg.cog = 0.46029915182;
    msg.sog = 0.651559353607;
    msg.hdop = 0.966079410665;
    msg.vdop = 0.233011657263;
    msg.hacc = 0.891965104058;
    msg.vacc = 0.366920437251;

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
    msg.setTimeStamp(0.185001868639);
    msg.setSource(39301U);
    msg.setSourceEntity(5U);
    msg.setDestination(62680U);
    msg.setDestinationEntity(141U);
    msg.validity = 62323U;
    msg.type = 156U;
    msg.utc_year = 19711U;
    msg.utc_month = 64U;
    msg.utc_day = 75U;
    msg.utc_time = 0.78104749467;
    msg.lat = 0.255271200267;
    msg.lon = 0.56976767859;
    msg.height = 0.019461512787;
    msg.satellites = 254U;
    msg.cog = 0.115662549104;
    msg.sog = 0.93814247933;
    msg.hdop = 0.742132697688;
    msg.vdop = 0.679632990117;
    msg.hacc = 0.187877120932;
    msg.vacc = 0.0816602161855;

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
    msg.setTimeStamp(0.451998611462);
    msg.setSource(56899U);
    msg.setSourceEntity(253U);
    msg.setDestination(21324U);
    msg.setDestinationEntity(113U);
    msg.time = 0.510794750933;
    msg.phi = 0.283017200974;
    msg.theta = 0.573386274807;
    msg.psi = 0.0628779569092;
    msg.psi_magnetic = 0.575855269374;

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
    msg.setTimeStamp(0.295756178605);
    msg.setSource(29204U);
    msg.setSourceEntity(5U);
    msg.setDestination(37616U);
    msg.setDestinationEntity(143U);
    msg.time = 0.938029119944;
    msg.phi = 0.20052847036;
    msg.theta = 0.664105641769;
    msg.psi = 0.696214865951;
    msg.psi_magnetic = 0.251010849764;

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
    msg.setTimeStamp(0.384347371886);
    msg.setSource(44623U);
    msg.setSourceEntity(67U);
    msg.setDestination(1323U);
    msg.setDestinationEntity(128U);
    msg.time = 0.763595233761;
    msg.phi = 0.336169281386;
    msg.theta = 0.598044835689;
    msg.psi = 0.650157836727;
    msg.psi_magnetic = 0.609388092423;

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
    msg.setTimeStamp(0.359580154556);
    msg.setSource(3346U);
    msg.setSourceEntity(77U);
    msg.setDestination(10721U);
    msg.setDestinationEntity(167U);
    msg.time = 0.910874921928;
    msg.x = 0.983282885114;
    msg.y = 0.92417515803;
    msg.z = 0.496361644384;
    msg.timestep = 0.281184032197;

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
    msg.setTimeStamp(0.628519688625);
    msg.setSource(62083U);
    msg.setSourceEntity(197U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(250U);
    msg.time = 0.709214334414;
    msg.x = 0.80439030597;
    msg.y = 0.253880496085;
    msg.z = 0.100576067949;
    msg.timestep = 0.117741609944;

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
    msg.setTimeStamp(0.646678580229);
    msg.setSource(29883U);
    msg.setSourceEntity(82U);
    msg.setDestination(64051U);
    msg.setDestinationEntity(189U);
    msg.time = 0.654621729959;
    msg.x = 0.300908388414;
    msg.y = 0.522672472556;
    msg.z = 0.231261838446;
    msg.timestep = 0.135651494506;

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
    msg.setTimeStamp(0.605422914421);
    msg.setSource(38263U);
    msg.setSourceEntity(72U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(167U);
    msg.time = 0.780349954872;
    msg.x = 0.238442928965;
    msg.y = 0.511310012569;
    msg.z = 0.493913386918;

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
    msg.setTimeStamp(0.0700715658655);
    msg.setSource(6678U);
    msg.setSourceEntity(147U);
    msg.setDestination(62971U);
    msg.setDestinationEntity(121U);
    msg.time = 0.749524904105;
    msg.x = 0.34986446148;
    msg.y = 0.975517293953;
    msg.z = 0.897591319678;

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
    msg.setTimeStamp(0.26279240186);
    msg.setSource(3849U);
    msg.setSourceEntity(144U);
    msg.setDestination(16929U);
    msg.setDestinationEntity(96U);
    msg.time = 0.740729147159;
    msg.x = 0.161402740908;
    msg.y = 0.303135407904;
    msg.z = 0.722533838478;

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
    msg.setTimeStamp(0.703040064003);
    msg.setSource(53973U);
    msg.setSourceEntity(92U);
    msg.setDestination(33036U);
    msg.setDestinationEntity(170U);
    msg.time = 0.0715954583497;
    msg.x = 0.185496571912;
    msg.y = 0.646417022302;
    msg.z = 0.532211732034;

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
    msg.setTimeStamp(0.41539041143);
    msg.setSource(8110U);
    msg.setSourceEntity(60U);
    msg.setDestination(41098U);
    msg.setDestinationEntity(71U);
    msg.time = 0.96149462701;
    msg.x = 0.501698390817;
    msg.y = 0.521576650743;
    msg.z = 0.864960882287;

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
    msg.setTimeStamp(0.294640518388);
    msg.setSource(11698U);
    msg.setSourceEntity(229U);
    msg.setDestination(27716U);
    msg.setDestinationEntity(51U);
    msg.time = 0.899685039455;
    msg.x = 0.108059605953;
    msg.y = 0.772593413778;
    msg.z = 0.432828278819;

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
    msg.setTimeStamp(0.62811382692);
    msg.setSource(56390U);
    msg.setSourceEntity(127U);
    msg.setDestination(40947U);
    msg.setDestinationEntity(0U);
    msg.time = 0.161920775282;
    msg.x = 0.411108993133;
    msg.y = 0.906786473422;
    msg.z = 0.134422105642;

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
    msg.setTimeStamp(0.025696136976);
    msg.setSource(7295U);
    msg.setSourceEntity(191U);
    msg.setDestination(8588U);
    msg.setDestinationEntity(75U);
    msg.time = 0.89400756049;
    msg.x = 0.89385088815;
    msg.y = 0.510093689846;
    msg.z = 0.705678537607;

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
    msg.setTimeStamp(0.116876031198);
    msg.setSource(59617U);
    msg.setSourceEntity(211U);
    msg.setDestination(43794U);
    msg.setDestinationEntity(204U);
    msg.time = 0.30422283558;
    msg.x = 0.107673799449;
    msg.y = 0.379749735077;
    msg.z = 0.231357992983;

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
    msg.setTimeStamp(0.486090853393);
    msg.setSource(36361U);
    msg.setSourceEntity(251U);
    msg.setDestination(27930U);
    msg.setDestinationEntity(180U);
    msg.validity = 51U;
    msg.x = 0.127164423859;
    msg.y = 0.722847732501;
    msg.z = 0.385573312192;

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
    msg.setTimeStamp(0.922826348606);
    msg.setSource(63650U);
    msg.setSourceEntity(225U);
    msg.setDestination(168U);
    msg.setDestinationEntity(80U);
    msg.validity = 115U;
    msg.x = 0.546649863081;
    msg.y = 0.0599777047796;
    msg.z = 0.764133342053;

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
    msg.setTimeStamp(0.635083322928);
    msg.setSource(31983U);
    msg.setSourceEntity(100U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(72U);
    msg.validity = 182U;
    msg.x = 0.606649343653;
    msg.y = 0.579031132762;
    msg.z = 0.230895619348;

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
    msg.setTimeStamp(0.217291829324);
    msg.setSource(40000U);
    msg.setSourceEntity(173U);
    msg.setDestination(52270U);
    msg.setDestinationEntity(111U);
    msg.validity = 21U;
    msg.x = 0.456912416479;
    msg.y = 0.609183629623;
    msg.z = 0.319220686072;

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
    msg.setTimeStamp(0.281801440617);
    msg.setSource(9061U);
    msg.setSourceEntity(5U);
    msg.setDestination(37809U);
    msg.setDestinationEntity(164U);
    msg.validity = 128U;
    msg.x = 0.378713309817;
    msg.y = 0.713935131166;
    msg.z = 0.787776847348;

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
    msg.setTimeStamp(0.366177423578);
    msg.setSource(10275U);
    msg.setSourceEntity(26U);
    msg.setDestination(45738U);
    msg.setDestinationEntity(51U);
    msg.validity = 51U;
    msg.x = 0.307587635;
    msg.y = 0.474629167738;
    msg.z = 0.292465708664;

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
    msg.setTimeStamp(0.555896019952);
    msg.setSource(37704U);
    msg.setSourceEntity(129U);
    msg.setDestination(19566U);
    msg.setDestinationEntity(75U);
    msg.time = 0.37535668214;
    msg.x = 0.171568424986;
    msg.y = 0.933602632941;
    msg.z = 0.236113320787;

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
    msg.setTimeStamp(0.770688714523);
    msg.setSource(62521U);
    msg.setSourceEntity(50U);
    msg.setDestination(19523U);
    msg.setDestinationEntity(104U);
    msg.time = 0.364579071491;
    msg.x = 0.394895500653;
    msg.y = 0.763517401818;
    msg.z = 0.564158867073;

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
    msg.setTimeStamp(0.0945895990191);
    msg.setSource(24391U);
    msg.setSourceEntity(141U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(244U);
    msg.time = 0.583692584414;
    msg.x = 0.526231804587;
    msg.y = 0.54432027745;
    msg.z = 0.509422729501;

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
    msg.setTimeStamp(0.44876955857);
    msg.setSource(49276U);
    msg.setSourceEntity(56U);
    msg.setDestination(27006U);
    msg.setDestinationEntity(139U);
    msg.validity = 172U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.664195658715;
    tmp_msg_0.y = 0.921616821331;
    tmp_msg_0.z = 0.148061135832;
    tmp_msg_0.phi = 0.190183914611;
    tmp_msg_0.theta = 0.55455049798;
    tmp_msg_0.psi = 0.943096949237;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.150567988974;
    tmp_msg_1.beam_height = 0.637735846319;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.115453144703;

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
    msg.setTimeStamp(0.651260474793);
    msg.setSource(52242U);
    msg.setSourceEntity(58U);
    msg.setDestination(62476U);
    msg.setDestinationEntity(171U);
    msg.validity = 103U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.463161994927;
    tmp_msg_0.y = 0.295565498054;
    tmp_msg_0.z = 0.436566546341;
    tmp_msg_0.phi = 0.963949358671;
    tmp_msg_0.theta = 0.630965878181;
    tmp_msg_0.psi = 0.465917925312;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.773351752863;

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
    msg.setTimeStamp(0.442645656656);
    msg.setSource(14286U);
    msg.setSourceEntity(172U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(178U);
    msg.validity = 170U;
    msg.value = 0.0492505428796;

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
    msg.setTimeStamp(0.0240488632529);
    msg.setSource(843U);
    msg.setSourceEntity(135U);
    msg.setDestination(55131U);
    msg.setDestinationEntity(101U);
    msg.value = 0.425317556671;

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
    msg.setTimeStamp(0.066499233766);
    msg.setSource(26862U);
    msg.setSourceEntity(220U);
    msg.setDestination(37717U);
    msg.setDestinationEntity(97U);
    msg.value = 0.628277217872;

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
    msg.setTimeStamp(0.992908909135);
    msg.setSource(47089U);
    msg.setSourceEntity(104U);
    msg.setDestination(56584U);
    msg.setDestinationEntity(106U);
    msg.value = 0.493443238997;

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
    msg.setTimeStamp(0.699469689014);
    msg.setSource(10210U);
    msg.setSourceEntity(16U);
    msg.setDestination(26944U);
    msg.setDestinationEntity(32U);
    msg.value = 0.62736242288;

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
    msg.setTimeStamp(0.850432505217);
    msg.setSource(25725U);
    msg.setSourceEntity(76U);
    msg.setDestination(51066U);
    msg.setDestinationEntity(170U);
    msg.value = 0.0633886384543;

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
    msg.setTimeStamp(0.485111422623);
    msg.setSource(47871U);
    msg.setSourceEntity(218U);
    msg.setDestination(28155U);
    msg.setDestinationEntity(216U);
    msg.value = 0.648613516293;

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
    msg.setTimeStamp(0.80204159704);
    msg.setSource(37996U);
    msg.setSourceEntity(80U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(65U);
    msg.value = 0.708114103801;

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
    msg.setTimeStamp(0.594236782751);
    msg.setSource(6688U);
    msg.setSourceEntity(237U);
    msg.setDestination(19222U);
    msg.setDestinationEntity(3U);
    msg.value = 0.370443460806;

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
    msg.setTimeStamp(0.639571138905);
    msg.setSource(27174U);
    msg.setSourceEntity(9U);
    msg.setDestination(29486U);
    msg.setDestinationEntity(187U);
    msg.value = 0.629612338197;

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
    msg.setTimeStamp(0.942100641743);
    msg.setSource(46341U);
    msg.setSourceEntity(78U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(131U);
    msg.value = 0.344003044114;

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
    msg.setTimeStamp(0.110608123324);
    msg.setSource(19034U);
    msg.setSourceEntity(78U);
    msg.setDestination(3027U);
    msg.setDestinationEntity(112U);
    msg.value = 0.50354042663;

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
    msg.setTimeStamp(0.227824194472);
    msg.setSource(42484U);
    msg.setSourceEntity(93U);
    msg.setDestination(10937U);
    msg.setDestinationEntity(201U);
    msg.value = 0.832591032719;

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
    msg.setTimeStamp(0.221379945539);
    msg.setSource(23941U);
    msg.setSourceEntity(80U);
    msg.setDestination(10804U);
    msg.setDestinationEntity(4U);
    msg.value = 0.71011494619;

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
    msg.setTimeStamp(0.801849829927);
    msg.setSource(32880U);
    msg.setSourceEntity(8U);
    msg.setDestination(29131U);
    msg.setDestinationEntity(22U);
    msg.value = 0.464038904984;

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
    msg.setTimeStamp(0.481144866795);
    msg.setSource(55402U);
    msg.setSourceEntity(239U);
    msg.setDestination(19842U);
    msg.setDestinationEntity(44U);
    msg.value = 0.611201160376;

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
    msg.setTimeStamp(0.586691921559);
    msg.setSource(28714U);
    msg.setSourceEntity(163U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(38U);
    msg.value = 0.842346527707;

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
    msg.setTimeStamp(0.955213184957);
    msg.setSource(29458U);
    msg.setSourceEntity(218U);
    msg.setDestination(61441U);
    msg.setDestinationEntity(174U);
    msg.value = 0.606877893489;

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
    msg.setTimeStamp(0.0206413298102);
    msg.setSource(4760U);
    msg.setSourceEntity(36U);
    msg.setDestination(19589U);
    msg.setDestinationEntity(72U);
    msg.value = 0.942528286935;

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
    msg.setTimeStamp(0.655873552498);
    msg.setSource(5180U);
    msg.setSourceEntity(127U);
    msg.setDestination(29944U);
    msg.setDestinationEntity(229U);
    msg.value = 0.279729474854;

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
    msg.setTimeStamp(0.833233224964);
    msg.setSource(54374U);
    msg.setSourceEntity(130U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(143U);
    msg.value = 0.870138590041;

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
    msg.setTimeStamp(0.0114268136435);
    msg.setSource(50450U);
    msg.setSourceEntity(11U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(134U);
    msg.value = 0.119478205347;

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
    msg.setTimeStamp(0.592699199814);
    msg.setSource(59642U);
    msg.setSourceEntity(225U);
    msg.setDestination(2017U);
    msg.setDestinationEntity(128U);
    msg.value = 0.052866873355;

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
    msg.setTimeStamp(0.447120677846);
    msg.setSource(36829U);
    msg.setSourceEntity(234U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(232U);
    msg.value = 0.00103270734418;

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
    msg.setTimeStamp(0.97644891085);
    msg.setSource(8634U);
    msg.setSourceEntity(193U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(5U);
    msg.value = 0.697725078519;

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
    msg.setTimeStamp(0.0683599820293);
    msg.setSource(32010U);
    msg.setSourceEntity(116U);
    msg.setDestination(60902U);
    msg.setDestinationEntity(106U);
    msg.direction = 0.0186106758151;
    msg.speed = 0.187435448489;
    msg.turbulence = 0.134236483821;

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
    msg.setTimeStamp(0.146040239159);
    msg.setSource(19988U);
    msg.setSourceEntity(29U);
    msg.setDestination(14001U);
    msg.setDestinationEntity(103U);
    msg.direction = 0.843345432587;
    msg.speed = 0.478439709152;
    msg.turbulence = 0.615529396607;

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
    msg.setTimeStamp(0.1275349951);
    msg.setSource(37333U);
    msg.setSourceEntity(145U);
    msg.setDestination(23627U);
    msg.setDestinationEntity(146U);
    msg.direction = 0.625413214191;
    msg.speed = 0.358032099883;
    msg.turbulence = 0.407628240664;

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
    msg.setTimeStamp(0.0348716754456);
    msg.setSource(9030U);
    msg.setSourceEntity(17U);
    msg.setDestination(33264U);
    msg.setDestinationEntity(155U);
    msg.value = 0.256808119787;

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
    msg.setTimeStamp(0.362533358624);
    msg.setSource(57040U);
    msg.setSourceEntity(69U);
    msg.setDestination(34110U);
    msg.setDestinationEntity(39U);
    msg.value = 0.332809078873;

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
    msg.setTimeStamp(0.282671183698);
    msg.setSource(13965U);
    msg.setSourceEntity(17U);
    msg.setDestination(13071U);
    msg.setDestinationEntity(32U);
    msg.value = 0.750695167512;

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
    msg.setTimeStamp(0.668922046844);
    msg.setSource(52777U);
    msg.setSourceEntity(206U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(183U);
    msg.value.assign("UFMMFBHGRSBCYFECVZWPVRJQOYMZGTXRASZDDUYKDCTMSITZHUAOIABCQHZDNEMRYBQRTBXDLGNFNYWCSMCBKPWKDOKPWUWWRMLEJFJAAAYBVDVZVTIOMDPWAJPSZENFEGRXLULBIMFCEEJQLOPKNAVCUXFKSEBJWHJMNIKNUYGYCLHHQZERWTORVASLIAXX");

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
    msg.setTimeStamp(0.524112659415);
    msg.setSource(61094U);
    msg.setSourceEntity(3U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(117U);
    msg.value.assign("OQXCSYEDWMCJHCWEMJRJTGZOKPJKSCKEVRQNDGEWTNNBROTQXNHNXIVTARVSYGUTSPBYUYJQGJVEUDBBPZPQFAJTPLNWIKZXDINZNYHIZWQJESGRZISTWHFRZJTFQBXPUUAAEWFDAOIXLLYVCNKXNGDUZEDADTFBPIBMQRBYSQVCHUHFBVTAPCUUVDYMXCYLDK");

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
    msg.setTimeStamp(0.468756543633);
    msg.setSource(64907U);
    msg.setSourceEntity(254U);
    msg.setDestination(18167U);
    msg.setDestinationEntity(70U);
    msg.value.assign("WNWGNCAUOJSJAIHLTSCDQGMAQHPUJXTUQPYQMBETTDKDOZUVWXSGYENKWXUKOOHS");

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
    msg.setTimeStamp(0.877208182849);
    msg.setSource(2034U);
    msg.setSourceEntity(36U);
    msg.setDestination(4541U);
    msg.setDestinationEntity(161U);
    const char tmp_msg_0[] = {33, 40, -100, 94, 31, -91, -19, -127, 121, -2, -121, -119, 23, 21, -34, -45, -76, 112, 8, 124, -123, -34, -91, 74, 13, 16, 65, 42, 75, -14, -9, -28, -98, 10, 96, 90, -9, 2, -45, 126, -102, -97, -52, -24, 54, -126, 101, -33, 10, 14, -127, 47, 75, -42, -91, -2, 82, -109, 101, 97, -105, 6, -56, 106, 13, -65, -86, 81, 126, 82, 27, 60, -107, 114, -123, -93, -87, 58, -34, 39, 114, 31, 90, -90, 71, 49, 52, 75, -72, -115, 88, 110, 27, -83, -16, -86, 31, 71, 71, 29, 80, -118, 79, 1, 12, 121, -103, -48, 38, 118, 37, -25, 44, 126, 43, 3, -47, -26, 45, 29, 59, -40, -95, -120, -124, 19, 59, -69, -40, 8, 106, -113, -106, -1, -15, 94, -107, -91, -36, 86, -79, 114, -97, -100, -110, 120, -13, 117, -25, -43, 32, -27, -24, 82, -16, -6, -82, -128, -4, -21, -97, 79, -108, 10, -42, -33, 69, 85, -15, -13, -65, 46, 2, 111, 2, -81, 94, -7, 22, 18, 42, -71, -17, -21, 96, -27, -31, 12, 58, -95, 19, 80};
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
    msg.setTimeStamp(0.159810958646);
    msg.setSource(30613U);
    msg.setSourceEntity(2U);
    msg.setDestination(48068U);
    msg.setDestinationEntity(178U);
    const char tmp_msg_0[] = {-13, 81, -44, 75, 25, -32, 38, -124, 25, -114, 18, -68, 0, -3, -59, 1, -27, -96, -19, 101, 92, -46, 69, -37, -121, 53, -59, 88, -101, -23, 59, -85, 43, 31, 80, -52, 80, -8, 75, 82, 40, 61, 0, 79, 20, -90, 51, 113, 110, -88, -34, -83, -107, 67, -71, -101, -83, 17, -68, 68, 104, 46, 13, 44, 77, 71, -73, 66, -118, -58, 69, -75, 8, -19, -119, 102, 88, 70, 25, 89, -44, 35, -31, 37, -11, -6, 108, 15, 42, -92, 52, -71, -84, 71, 84, 40, -6, 86, 67, 19, -93, 84, 114, -22, 33, -113, -105, 20, -125, -86, 114, -34, -20, -18};
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
    msg.setTimeStamp(0.424626543077);
    msg.setSource(5009U);
    msg.setSourceEntity(179U);
    msg.setDestination(42584U);
    msg.setDestinationEntity(81U);
    const char tmp_msg_0[] = {-9, -87, 94, 6, -39, -3, -89, 106, -30, 29, 71, 79, 123, 75, -96, -27, 125, -106, -23, -36, 4, 112, -75, 12, 33, -73, -92, 3, 89, 77, 95, -80, 106, 125, -111, 93, 3, 98, -80, -100, -86, -84, -23, -42, 15, 13, 76, -84, 57, -118, -43, 7, -39, -30, 37, 38, -67, 121, -31, 41, -110, 125, -31, -25, -31, -64, 71, -117, -44, -77, 6, -42, 59, -80, 7, -111, 110, -52, 66, -47, 69, -124, 67, -27, -61, -76, 97, 21, -42, -40, -64, 55, 101, 22, -5, -121, -33, -82, 16, 103, -119, -85, 118, 45, -89, -56, -46, 6, -73, 77, -48, -72, 121, -46, -47, 29, 42, 122, -54, 7, -39, 29, -71, -42, 102, 21, 108, -21, 40, -118, 45, -88, -87, 100, 56, 56, 125, 96, -121, -115, -22, -70, 118, -102, -21, -103, -77, 21, 112, -48, -51, -95, -105, -58, -47, 5, -5, 49, 11, 96, -45, -13, -60, 117, 85, 29, -70, 42, -87, 85, -20, -54, -22, -119, -2, -38, -103, 61, -10, -4, 90, -3, -93, 33, -27, 89, -83, -121, 66, 121, 119, -90, 27, 15, 10, -67, -112, 103, 86, -123, -118, -95, 83, -106, -13, 43, -48, 105, -74, -52, 3, -97, -18, -114, 29, -46, 111, -16, 117, -35, -22, 14, 20, -17, 59, 10, -10, -107, 63, 87};
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
    msg.setTimeStamp(0.310128555408);
    msg.setSource(46537U);
    msg.setSourceEntity(94U);
    msg.setDestination(65051U);
    msg.setDestinationEntity(237U);
    msg.frequency = 1791059752U;
    msg.min_range = 56623U;
    msg.max_range = 12106U;

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
    msg.setTimeStamp(0.608633300631);
    msg.setSource(6296U);
    msg.setSourceEntity(165U);
    msg.setDestination(4118U);
    msg.setDestinationEntity(218U);
    msg.frequency = 2582410671U;
    msg.min_range = 768U;
    msg.max_range = 4953U;

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
    msg.setTimeStamp(0.844383280257);
    msg.setSource(23118U);
    msg.setSourceEntity(114U);
    msg.setDestination(40269U);
    msg.setDestinationEntity(5U);
    msg.frequency = 3458399801U;
    msg.min_range = 25860U;
    msg.max_range = 64502U;

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
    msg.setTimeStamp(0.584492623889);
    msg.setSource(31396U);
    msg.setSourceEntity(186U);
    msg.setDestination(23724U);
    msg.setDestinationEntity(233U);
    msg.type = 7U;
    msg.frequency = 4223460558U;
    msg.min_range = 48303U;
    msg.max_range = 38123U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.527832037787;
    const char tmp_msg_0[] = {-49, 106, 88, 93, -52, 106, -6, 89, -128, 75, 49, 6, 22, 120, -14, 38, -119, 120, -124, 102, -30, -67, 96, 117, 55, 64, 36, -6, -24, -43, 43, 46, -82, 21, 43, -95, 114, -61, -115, -91, 88, 50, 70, -79, -28, 44, -48, -80, -42, 94, 114, 15, 3, -4, 50, 76, -21, -100, 42, 64, 19, 11, 102, 68, 49, -45, 86, 62, -83, 12, -50, 33, 79, -43, 18, -61, 14, 45, 89, -60, -57, 94, 122, 120, -4, 19, 54, 63, 102, 89, -63, -13, 46, -57, 71, 90, 26, -33, -65, -39, 60, 92, 67, -117, 114, 0, 106, 95, -86, 95, 45, 109, -87, -43, 117, -105, 46, -35, 60, 31, 7, 126, -31, -88, -69, 87, 98, 109};
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
    msg.setTimeStamp(0.188963123105);
    msg.setSource(26312U);
    msg.setSourceEntity(13U);
    msg.setDestination(46760U);
    msg.setDestinationEntity(57U);
    msg.type = 138U;
    msg.frequency = 3649561531U;
    msg.min_range = 22227U;
    msg.max_range = 8687U;
    msg.bits_per_point = 123U;
    msg.scale_factor = 0.249720554663;
    const char tmp_msg_0[] = {-82, -44, -78, -86, -20, 97, 93, 68, -37, -67, 37, -60, -20, 12, 108, 39, -22, -123, 38, -9, -37, 95, 116, -123, 103, -25, 64, -47, -92, 2, -69, 122, 116, 38, -38, 23, -91, 113, 88, -8, 29, 41, 73, 58, 74, 107, 4, 114, -11, -119, -70, -89, -55, -91, -112, 55, -55, -28, 84, -7, -101, -80, -70, -92, 101, 16, -78, -45, -103, -2, -30, 9, -24, 126, -93, -99, -102, -25, -68, 56, -9, -72, -8, 123, -35, -27, -65, 89, -104, 26, 72, 124, -93, 48, 99, -116, -48, -58, -109, -56, 81, 98, 91, -55, -126, -116, -124, 12, -96, -64, 30, 57, -110, 13, 101, -45, 10, 94, -25, 41, 101, -1, -58, 21, 9, -114, 65, 31, 116, 77, 41, 66, 70, -59, -51, 105, 60, 121, 40, -64, -28, 114, 94, 0, 88, 97, 18, -21, 101, -69, 77, -73, -89, 107, 49, -83, 74, -69, -5, 106, 71, -39, -54, -94, -120, -54, 55, 96, 4, -3, 50, 114, -20, -1, 5, -108, 36, 26, -54, -15, 106, 67, 32, -8, -89, -97, -99, -40, -80, 60, 58, 46, -93, 114, -49, -91, -124};
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
    msg.setTimeStamp(0.453500951373);
    msg.setSource(52329U);
    msg.setSourceEntity(127U);
    msg.setDestination(44705U);
    msg.setDestinationEntity(53U);
    msg.type = 149U;
    msg.frequency = 2915150734U;
    msg.min_range = 26348U;
    msg.max_range = 12228U;
    msg.bits_per_point = 123U;
    msg.scale_factor = 0.0707121542806;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.691140337389;
    tmp_msg_0.beam_height = 0.697304280167;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {85, -23, 101, 76, 20, -66, 96, -75, -109, 42, -68, -47, 107, 25, 114, 122, 105, -72, 33, -118, 80, -37, 65, 117, -104, -77, 83, -35, -58, 112, -73, 48, 100, -84, -66, 25, -21, 110, -122, -107, -95, 6, -14, -44, -30, -66, -49, 23, -102, -82, -56, 105, 11, 37, 47, 94, 20, 84, -59, 57, 112, -110, 36, 51, -122, 15, 50, 37, 90, 39, 54, -120, -33, 66, 96, -58, 81, -8, -34};
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
    msg.setTimeStamp(0.322803071469);
    msg.setSource(43185U);
    msg.setSourceEntity(145U);
    msg.setDestination(60950U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.600845364432);
    msg.setSource(52128U);
    msg.setSourceEntity(199U);
    msg.setDestination(49298U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.523285720412);
    msg.setSource(54556U);
    msg.setSourceEntity(169U);
    msg.setDestination(48145U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.750504074961);
    msg.setSource(26862U);
    msg.setSourceEntity(1U);
    msg.setDestination(9268U);
    msg.setDestinationEntity(253U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.348480985175);
    msg.setSource(24085U);
    msg.setSourceEntity(116U);
    msg.setDestination(35333U);
    msg.setDestinationEntity(128U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.159744495289);
    msg.setSource(31760U);
    msg.setSourceEntity(94U);
    msg.setDestination(44244U);
    msg.setDestinationEntity(183U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.760056681602);
    msg.setSource(21991U);
    msg.setSourceEntity(157U);
    msg.setDestination(42246U);
    msg.setDestinationEntity(12U);
    msg.value = 0.358980016521;
    msg.confidence = 0.169109347536;
    msg.opmodes.assign("YIZODYFHRNHPTBVLAGYATGUHSBMVELWJDSGAYODPKW");

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
    msg.setTimeStamp(0.148608630636);
    msg.setSource(61246U);
    msg.setSourceEntity(88U);
    msg.setDestination(63774U);
    msg.setDestinationEntity(190U);
    msg.value = 0.582715803728;
    msg.confidence = 0.772974503721;
    msg.opmodes.assign("TBRAXNNRYSIADOGKUKRYKAUMURSCDJFFERVLPRBGLVLQOTZVGKDHXODHZSEYEUIDRGPTYDYQHQSGHKPJOCYUEPQRSBBVANZCEKHPWTKWVNFLHLWQIXTSQPWEPUBKOSAXDMJOMXFLFHIXAKGENIJPMAHXWXMAZZFBZGEIIFWAQXBMZOLYCTTJMUOGWVVBRTWUVYHJJSKNESCNSQBBYPHZTPNJQJW");

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
    msg.setTimeStamp(0.274935684311);
    msg.setSource(30608U);
    msg.setSourceEntity(129U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(244U);
    msg.value = 0.293914794481;
    msg.confidence = 0.464617215352;
    msg.opmodes.assign("FNQVSEYERJZHHLRFGRTKDFIPPZRCZSVWBUXMKVXXOSLSAUZTGEIXCTMXLBKDLEDTPYJMQFLPEUBWLXWKVPEO");

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
    msg.setTimeStamp(0.963534351973);
    msg.setSource(16736U);
    msg.setSourceEntity(38U);
    msg.setDestination(24360U);
    msg.setDestinationEntity(172U);
    msg.itow = 2099254633U;
    msg.lat = 0.502953244538;
    msg.lon = 0.0039322028094;
    msg.height_ell = 0.914290609854;
    msg.height_sea = 0.447848822963;
    msg.hacc = 0.52640526556;
    msg.vacc = 0.0873761856401;
    msg.vel_n = 0.972445227926;
    msg.vel_e = 0.318678996579;
    msg.vel_d = 0.555285778697;
    msg.speed = 0.251574560648;
    msg.gspeed = 0.401466841618;
    msg.heading = 0.591088237577;
    msg.sacc = 0.91051111275;
    msg.cacc = 0.15066600171;

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
    msg.setTimeStamp(0.0504381495757);
    msg.setSource(35004U);
    msg.setSourceEntity(5U);
    msg.setDestination(22514U);
    msg.setDestinationEntity(27U);
    msg.itow = 2465630520U;
    msg.lat = 0.907618239465;
    msg.lon = 0.486487720841;
    msg.height_ell = 0.32513556684;
    msg.height_sea = 0.0610323515291;
    msg.hacc = 0.261593302465;
    msg.vacc = 0.0300655980686;
    msg.vel_n = 0.224375200907;
    msg.vel_e = 0.62620040763;
    msg.vel_d = 0.526603940372;
    msg.speed = 0.0558581877;
    msg.gspeed = 0.965857032302;
    msg.heading = 0.715272391301;
    msg.sacc = 0.390608025683;
    msg.cacc = 0.0323841570623;

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
    msg.setTimeStamp(0.968710019826);
    msg.setSource(22963U);
    msg.setSourceEntity(201U);
    msg.setDestination(1100U);
    msg.setDestinationEntity(33U);
    msg.itow = 3454854827U;
    msg.lat = 0.100885799561;
    msg.lon = 0.383989894235;
    msg.height_ell = 0.13294664229;
    msg.height_sea = 0.578069827774;
    msg.hacc = 0.82280354429;
    msg.vacc = 0.147838775561;
    msg.vel_n = 0.530768651158;
    msg.vel_e = 0.263199109379;
    msg.vel_d = 0.697798456656;
    msg.speed = 0.0517014628433;
    msg.gspeed = 0.805441546176;
    msg.heading = 0.511576104323;
    msg.sacc = 0.308015459596;
    msg.cacc = 0.112854507331;

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
    msg.setTimeStamp(0.325839403151);
    msg.setSource(5657U);
    msg.setSourceEntity(71U);
    msg.setDestination(62810U);
    msg.setDestinationEntity(220U);
    msg.id = 244U;
    msg.value = 0.663188572264;

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
    msg.setTimeStamp(0.804366980611);
    msg.setSource(16058U);
    msg.setSourceEntity(145U);
    msg.setDestination(38088U);
    msg.setDestinationEntity(189U);
    msg.id = 29U;
    msg.value = 0.994677342977;

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
    msg.setTimeStamp(0.667561048063);
    msg.setSource(57269U);
    msg.setSourceEntity(153U);
    msg.setDestination(20577U);
    msg.setDestinationEntity(199U);
    msg.id = 173U;
    msg.value = 0.797564227663;

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
    msg.setTimeStamp(0.423681966558);
    msg.setSource(38999U);
    msg.setSourceEntity(171U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(88U);
    msg.x = 0.188489725678;
    msg.y = 0.449331822753;
    msg.z = 0.298025653773;
    msg.phi = 0.334813654318;
    msg.theta = 0.363859735956;
    msg.psi = 0.965326570588;

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
    msg.setTimeStamp(0.437105158094);
    msg.setSource(60242U);
    msg.setSourceEntity(44U);
    msg.setDestination(25366U);
    msg.setDestinationEntity(181U);
    msg.x = 0.066757126813;
    msg.y = 0.0750142425883;
    msg.z = 0.150884641596;
    msg.phi = 0.324063371632;
    msg.theta = 0.449097468289;
    msg.psi = 0.407607064642;

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
    msg.setTimeStamp(0.468505845799);
    msg.setSource(4187U);
    msg.setSourceEntity(162U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(109U);
    msg.x = 0.906586191646;
    msg.y = 0.504575781811;
    msg.z = 0.687599693221;
    msg.phi = 0.450772575753;
    msg.theta = 0.359777429042;
    msg.psi = 0.547629842681;

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
    msg.setTimeStamp(0.379488062767);
    msg.setSource(33373U);
    msg.setSourceEntity(38U);
    msg.setDestination(61468U);
    msg.setDestinationEntity(117U);
    msg.beam_width = 0.234143451685;
    msg.beam_height = 0.341063628334;

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
    msg.setTimeStamp(0.557511210584);
    msg.setSource(5696U);
    msg.setSourceEntity(214U);
    msg.setDestination(12308U);
    msg.setDestinationEntity(160U);
    msg.beam_width = 0.115094644198;
    msg.beam_height = 0.505217863975;

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
    msg.setTimeStamp(0.709965894886);
    msg.setSource(37221U);
    msg.setSourceEntity(155U);
    msg.setDestination(60835U);
    msg.setDestinationEntity(63U);
    msg.beam_width = 0.614760327242;
    msg.beam_height = 0.584947383805;

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
    msg.setTimeStamp(0.0947348144021);
    msg.setSource(37778U);
    msg.setSourceEntity(200U);
    msg.setDestination(60781U);
    msg.setDestinationEntity(217U);
    msg.sane = 135U;

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
    msg.setTimeStamp(0.163728652358);
    msg.setSource(6263U);
    msg.setSourceEntity(9U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(199U);
    msg.sane = 90U;

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
    msg.setTimeStamp(0.238948656103);
    msg.setSource(57849U);
    msg.setSourceEntity(119U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(189U);
    msg.sane = 10U;

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
    msg.setTimeStamp(0.0953877168931);
    msg.setSource(21746U);
    msg.setSourceEntity(90U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(127U);
    msg.id = 75U;
    msg.zoom = 6U;
    msg.action = 146U;

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
    msg.setTimeStamp(0.140423053409);
    msg.setSource(44845U);
    msg.setSourceEntity(180U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(139U);
    msg.id = 120U;
    msg.zoom = 115U;
    msg.action = 179U;

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
    msg.setTimeStamp(0.0544072835899);
    msg.setSource(49366U);
    msg.setSourceEntity(134U);
    msg.setDestination(61466U);
    msg.setDestinationEntity(150U);
    msg.id = 163U;
    msg.zoom = 131U;
    msg.action = 165U;

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
    msg.setTimeStamp(0.025309131254);
    msg.setSource(64960U);
    msg.setSourceEntity(114U);
    msg.setDestination(43925U);
    msg.setDestinationEntity(104U);
    msg.id = 94U;
    msg.value = 0.87886207817;

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
    msg.setTimeStamp(0.251849723274);
    msg.setSource(20729U);
    msg.setSourceEntity(100U);
    msg.setDestination(35797U);
    msg.setDestinationEntity(215U);
    msg.id = 14U;
    msg.value = 0.927329154942;

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
    msg.setTimeStamp(0.181136905183);
    msg.setSource(43401U);
    msg.setSourceEntity(184U);
    msg.setDestination(31851U);
    msg.setDestinationEntity(215U);
    msg.id = 54U;
    msg.value = 0.755740930616;

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
    msg.setTimeStamp(0.425007446499);
    msg.setSource(49161U);
    msg.setSourceEntity(119U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(96U);
    msg.id = 112U;
    msg.value = 0.904891152136;

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
    msg.setTimeStamp(0.474923468231);
    msg.setSource(29129U);
    msg.setSourceEntity(157U);
    msg.setDestination(43128U);
    msg.setDestinationEntity(200U);
    msg.id = 40U;
    msg.value = 0.993331822457;

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
    msg.setTimeStamp(0.795512027174);
    msg.setSource(42186U);
    msg.setSourceEntity(165U);
    msg.setDestination(56130U);
    msg.setDestinationEntity(230U);
    msg.id = 133U;
    msg.value = 0.188111752762;

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
    msg.setTimeStamp(0.965098447331);
    msg.setSource(55033U);
    msg.setSourceEntity(148U);
    msg.setDestination(36399U);
    msg.setDestinationEntity(177U);
    msg.id = 71U;
    msg.angle = 0.263584394788;

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
    msg.setTimeStamp(0.7436107034);
    msg.setSource(62561U);
    msg.setSourceEntity(208U);
    msg.setDestination(29882U);
    msg.setDestinationEntity(120U);
    msg.id = 33U;
    msg.angle = 0.624748095055;

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
    msg.setTimeStamp(0.618251562554);
    msg.setSource(12727U);
    msg.setSourceEntity(45U);
    msg.setDestination(2997U);
    msg.setDestinationEntity(4U);
    msg.id = 146U;
    msg.angle = 0.824486475922;

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
    msg.setTimeStamp(0.91209585682);
    msg.setSource(51896U);
    msg.setSourceEntity(119U);
    msg.setDestination(33314U);
    msg.setDestinationEntity(226U);
    msg.op = 221U;
    msg.actions.assign("UXBTACKNDZMGUMQTDLPKJHGXFOWVTNZUGXATWXEJLHMUYCAZZOBTKACPRADDLJPQIIYOWCBGKFEVMULIKOCOBGWSPMWDYKLBUUSSRNFHCPFIXVOMABJTOSVXVSORBNJPGHEITZNWHKRXYJUOLQGVMZFBBZESPADDGVZYGWZPYAFHRSYUIOFHIEIXMRTANQCSRFQCJJDLHECLKSWR");

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
    msg.setTimeStamp(0.50791910744);
    msg.setSource(21079U);
    msg.setSourceEntity(54U);
    msg.setDestination(1260U);
    msg.setDestinationEntity(242U);
    msg.op = 24U;
    msg.actions.assign("NQCITFPWLYUBDUSEJWCNBQCRNGEAFWGAVSIKYTZYPQWHPUOGGERUIEVOYUSF");

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
    msg.setTimeStamp(0.0258931555308);
    msg.setSource(40504U);
    msg.setSourceEntity(101U);
    msg.setDestination(18171U);
    msg.setDestinationEntity(233U);
    msg.op = 223U;
    msg.actions.assign("IKQSWAYPQUSDWPVKNCHKLFZEVYSOSYZBZAGOAFRLNIXYADVGDAHEXPXXULBPZATPGTOMOHQHLTFMBROEEWNLKNSIEANRWXZJDJGBV");

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
    msg.setTimeStamp(0.073039138066);
    msg.setSource(63131U);
    msg.setSourceEntity(55U);
    msg.setDestination(18023U);
    msg.setDestinationEntity(136U);
    msg.actions.assign("WHUSQAAHILMIZSQFISGICIJDXWBJZVOJCLOYOLTTHBOGCELWAPPVURBIIZKONCUTKNTHRGSULQHDGLFRRAMZAXHZWQOPTHBFJWFKULZYKCDLBQNLVTCTYKPIDQUGXUBEIPETDARHMEGDNJSNXYCYXXYBDPEBSFGRH");

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
    msg.setTimeStamp(0.92972142886);
    msg.setSource(48652U);
    msg.setSourceEntity(230U);
    msg.setDestination(3233U);
    msg.setDestinationEntity(242U);
    msg.actions.assign("EDYXAFRKBQELFMLOQXLCLOJRIWTRDDYVVFHWJNKZCBOSYXIVKLNPDITMGNPNZCGTTIALEAKQCRGMAAREIIZAJREUKTCXOGDHJGVLVKVTJXTUUXZXQSHSOE");

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
    msg.setTimeStamp(0.0866392871152);
    msg.setSource(36570U);
    msg.setSourceEntity(90U);
    msg.setDestination(61277U);
    msg.setDestinationEntity(232U);
    msg.actions.assign("KCULTOREHAOGXWWGATOXFVKTSAZNUBHWRAYMSUOZOKKURBBCSEELOJXSJVPSDACISPYBECCFQXDBLJTICMHLIVVWIRUCCBNP");

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
    msg.setTimeStamp(0.993351825765);
    msg.setSource(12606U);
    msg.setSourceEntity(115U);
    msg.setDestination(35375U);
    msg.setDestinationEntity(83U);
    msg.button = 65U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.284678335295);
    msg.setSource(17123U);
    msg.setSourceEntity(117U);
    msg.setDestination(42152U);
    msg.setDestinationEntity(4U);
    msg.button = 100U;
    msg.value = 24U;

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
    msg.setTimeStamp(0.503371753482);
    msg.setSource(48398U);
    msg.setSourceEntity(0U);
    msg.setDestination(51634U);
    msg.setDestinationEntity(83U);
    msg.button = 217U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.352163345766);
    msg.setSource(25708U);
    msg.setSourceEntity(22U);
    msg.setDestination(34552U);
    msg.setDestinationEntity(100U);
    msg.op = 161U;
    msg.text.assign("KMOGIOZMTXZFMHKKPHADDMNDCKDPMGIIZOUNWGXUJNGYICOWWFCSCRCNVCJPPJPEWUJROZHUJKSCWLAJLTKQHEFDVRHR");

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
    msg.setTimeStamp(0.394339840223);
    msg.setSource(16588U);
    msg.setSourceEntity(46U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(195U);
    msg.op = 159U;
    msg.text.assign("LIMFYGNUTCFFJMNJHCHXURIHBQYBLNPDPZWZMZVKANVJNAGTDSHVIQEIDQTRDXESKCMMXHUOTEYUIKHHEAJZOEPENXYZYOYQPWLQBTFDBHGGFVLRRPRTBCKEPLIQOVESCOCARDLJAUBESBDRWXUFIQUZDIZCCAKJRSOGSNPJJNFPYBOZRYPNVWLTSJASBFINTFXWZETGVMCOVWYVCKQMDWLUOHJBAGTISMQP");

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
    msg.setTimeStamp(0.72919351606);
    msg.setSource(1392U);
    msg.setSourceEntity(236U);
    msg.setDestination(20724U);
    msg.setDestinationEntity(91U);
    msg.op = 145U;
    msg.text.assign("PKDMDNQYCTUFNSKUGFZELZSODQPLBVNJJSLZGLUHCOWNNUHVZYMOLREFEKLJXQOJRPHURPLGBOJ");

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
    msg.setTimeStamp(0.253308414839);
    msg.setSource(34283U);
    msg.setSourceEntity(72U);
    msg.setDestination(35337U);
    msg.setDestinationEntity(45U);
    msg.op = 100U;
    msg.time_remain = 0.619813516847;
    msg.sched_time = 0.588302365809;

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
    msg.setTimeStamp(0.12917281437);
    msg.setSource(48293U);
    msg.setSourceEntity(18U);
    msg.setDestination(31010U);
    msg.setDestinationEntity(37U);
    msg.op = 242U;
    msg.time_remain = 0.281897759018;
    msg.sched_time = 0.1762978113;

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
    msg.setTimeStamp(0.43710838855);
    msg.setSource(413U);
    msg.setSourceEntity(64U);
    msg.setDestination(42054U);
    msg.setDestinationEntity(59U);
    msg.op = 20U;
    msg.time_remain = 0.260688442019;
    msg.sched_time = 0.796725397912;

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
    msg.setTimeStamp(0.174233044417);
    msg.setSource(39063U);
    msg.setSourceEntity(75U);
    msg.setDestination(10387U);
    msg.setDestinationEntity(47U);
    msg.name.assign("DXNPJREAEHQZMHNKJYPAXLYCQBAAGEUFNOWMDWX");
    msg.op = 58U;
    msg.sched_time = 0.501786954628;

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
    msg.setTimeStamp(0.224682855993);
    msg.setSource(35795U);
    msg.setSourceEntity(18U);
    msg.setDestination(13209U);
    msg.setDestinationEntity(206U);
    msg.name.assign("GSPCKZSRRSIATGISYWNAMGHWXZXHFZMBJWLDLCBORPFCXGHQTRDKAHHDUUVMJEPHKRHWVPFMKICOWYTVYCDFGXRMAWLYYLEBKVL");
    msg.op = 173U;
    msg.sched_time = 0.968210351461;

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
    msg.setTimeStamp(0.76128361942);
    msg.setSource(9668U);
    msg.setSourceEntity(82U);
    msg.setDestination(1695U);
    msg.setDestinationEntity(180U);
    msg.name.assign("KTNDIVQJBNKLJWQSFOOGCKSBMCFXAPY");
    msg.op = 127U;
    msg.sched_time = 0.29259469545;

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
    msg.setTimeStamp(0.421350678794);
    msg.setSource(26299U);
    msg.setSourceEntity(209U);
    msg.setDestination(54358U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.513142116952);
    msg.setSource(19618U);
    msg.setSourceEntity(78U);
    msg.setDestination(24681U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.697099152291);
    msg.setSource(60086U);
    msg.setSourceEntity(14U);
    msg.setDestination(34146U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.545370742912);
    msg.setSource(54464U);
    msg.setSourceEntity(29U);
    msg.setDestination(13650U);
    msg.setDestinationEntity(10U);
    msg.name.assign("ZJPKHCOTFBZCVEXCDJMWTFKFHRKYEUZPWTLGLRDRPRGPHWPOAYSWAMUAURVSYIEAZNYGLOBLAALJWRMJVSCACQSMSAGXZDIWMBUINDQPCRVUOQQILBBDQBEWWIXXLTNSYIYFKLGJCYSETHGJMUQIGVVQOUQNKLZOIPBZRPEKSJXHHVVGBOKDHPEOYEIBNMYVZTAAXDHFODCMWFNOHVEPKYTNULNURTSHFUXXFIFTZCQGBXQWDXN");
    msg.state = 148U;

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
    msg.setTimeStamp(0.949937656028);
    msg.setSource(17899U);
    msg.setSourceEntity(248U);
    msg.setDestination(27144U);
    msg.setDestinationEntity(87U);
    msg.name.assign("PEWBSEISKZHIMIZBTGBMOQNRBJYRMQDVYZYPSIWRHCORBKJTDSLYDDCDXDGVGPOECNSDMFZQHBYNMOYLRYZONXZGFHKWXTKRTNILKEGXAJYCTWOBIITIMBUXZSCYEPWKCESHXYSQPGFMWDTCFFTBGJFKQZAUVZUQJSGXQULOPQUELOMWUCQSJFUJHA");
    msg.state = 239U;

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
    msg.setTimeStamp(0.568869058615);
    msg.setSource(5250U);
    msg.setSourceEntity(252U);
    msg.setDestination(16878U);
    msg.setDestinationEntity(250U);
    msg.name.assign("HLJLUDIJMDYBGZYWOXFBQKFNWZPNYJSBGTWKKHWJQXJNNHNEZWSLMMIUVQWTQEOZAEVIJMGJRNPHAHCGMVKIZMNQVPKAEPUJDURAGKOIXIOZSNEKOCXDCJKPUHPLAPTDRTDUGPAQYTREZTLHLMZYXSIBAYEMSTDOFQKGBMACGBLXVYUXDZKABSSQCCR");
    msg.state = 29U;

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
    msg.setTimeStamp(0.623405693498);
    msg.setSource(53824U);
    msg.setSourceEntity(134U);
    msg.setDestination(26994U);
    msg.setDestinationEntity(125U);
    msg.name.assign("BAKPYJCSDTVOJCRVITZXRUHSQGZFACIIAZBWCRABEGMMBLBRKUMAQPMQRDPILWJXHEOXXTKQW");
    msg.value = 144U;

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
    msg.setTimeStamp(0.666745116025);
    msg.setSource(35340U);
    msg.setSourceEntity(189U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(165U);
    msg.name.assign("SVFPVSGUYXMTCBNFQADJYKFKSTOPZPIRNQSSLEYCNPGABIBDJQMLKCLMPTKHDRSLUNMGZPXBJKTGAZGGEOMAORPBLXXFTXAMELOEQKOZUHSVSIFPUUOFQYLJ");
    msg.value = 113U;

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
    msg.setTimeStamp(0.163416686182);
    msg.setSource(45484U);
    msg.setSourceEntity(3U);
    msg.setDestination(50752U);
    msg.setDestinationEntity(151U);
    msg.name.assign("PRUFAXKYMMCLUWNPEVYGHGZZQYXAPVRHUREKNNLSBCJVUGZOEBAUWRKXJXMQVWYFQGANHSKMPAMMFGIBBTVACDGILPFAIBAZKELIDMXWKNYXVIXATLZCJOGWYUTDVJEVQPRFOCDBSJTHMHRDRBOYGTOHJKMSWOGDSLZRULIUJQFYQZRUZLSCPESWFLPMHHA");
    msg.value = 79U;

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
    msg.setTimeStamp(0.520622725556);
    msg.setSource(38485U);
    msg.setSourceEntity(42U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(114U);
    msg.name.assign("ZYAMWCELUHTZANLEXLOUDTIRRGLAATEUFRNERUCILAWHQWRJQBRTIJWDGCVEBTVXFTOGQMHJNODJYMGNSAEXVVFUXQQGLJPKKWCMJDIYTEVNWMRQIVTYXVRYMVFYUKOCOKBXDQKCZZMSZQJIAQZRNGZOYBBKDEEFVCFMPSVXLRNPBJHWGDHAYCCWHSHSKXUJUYNSOBDT");

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
    msg.setTimeStamp(0.790198420956);
    msg.setSource(35058U);
    msg.setSourceEntity(114U);
    msg.setDestination(24711U);
    msg.setDestinationEntity(77U);
    msg.name.assign("EFJAGJMKFPBBEZRYBSWISTUMKYTFIYHGUXXIDTORNPTUQDDGXXJTPMNEROWTHAXLJIRSEYEOOKNBAZGIYJWOZNXBMVZUOQXBMDVBGKUYPDHCILQRSJTRGLIBSMFOCEZDWWZPATVUAQPPZKLNEAYXKHHADULKSGVHHMCYNDGOVVHJJFIPBKMZSULHCCYVYKTKWZGFREXENGCDNSILQIFQVCQDVQSJXMORNLWHWMA");

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
    msg.setTimeStamp(0.140110621419);
    msg.setSource(54275U);
    msg.setSourceEntity(89U);
    msg.setDestination(32807U);
    msg.setDestinationEntity(27U);
    msg.name.assign("LTKSQDUDCFPURXAZLCGKVGFBSWPUBIIJCHZCSMZHXRPRZRVUYBGIGLTPNDTQKWWDZKVJUVGSYBEEUURQHQZSTZIOUIYJDHKNYFTCHASQFGSS");

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
    msg.setTimeStamp(0.703315847493);
    msg.setSource(45304U);
    msg.setSourceEntity(233U);
    msg.setDestination(41594U);
    msg.setDestinationEntity(194U);
    msg.name.assign("ZMYAVFEDLVZRECCJPKVZGBISRFHQOJPMYFTZIEDMYVFPSKBHJVIGZZKXPKKCFNTMR");
    msg.value = 225U;

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
    msg.setTimeStamp(0.399116614388);
    msg.setSource(64092U);
    msg.setSourceEntity(76U);
    msg.setDestination(50231U);
    msg.setDestinationEntity(94U);
    msg.name.assign("WBROUFEPFWPWUMLMUVXHZWQNZYPAAYTXLJTLPEXEKAH");
    msg.value = 138U;

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
    msg.setTimeStamp(0.398123675566);
    msg.setSource(26879U);
    msg.setSourceEntity(93U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(25U);
    msg.name.assign("QILZIWLLJGCVFZEJMUEIRJASDRTRPTFQOZMXSWDQJYOAYHNIVRWJXQLYBCFZFVMOGRUWY");
    msg.value = 164U;

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
    msg.setTimeStamp(0.315022030401);
    msg.setSource(43009U);
    msg.setSourceEntity(14U);
    msg.setDestination(4808U);
    msg.setDestinationEntity(233U);
    msg.id = 250U;
    msg.period = 3840200966U;
    msg.duty_cycle = 3443807927U;

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
    msg.setTimeStamp(0.0415585276445);
    msg.setSource(39466U);
    msg.setSourceEntity(178U);
    msg.setDestination(40629U);
    msg.setDestinationEntity(211U);
    msg.id = 90U;
    msg.period = 2542642227U;
    msg.duty_cycle = 989777017U;

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
    msg.setTimeStamp(0.346791659657);
    msg.setSource(46822U);
    msg.setSourceEntity(225U);
    msg.setDestination(5053U);
    msg.setDestinationEntity(93U);
    msg.id = 202U;
    msg.period = 3844044290U;
    msg.duty_cycle = 102064467U;

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
    msg.setTimeStamp(0.747131040518);
    msg.setSource(57619U);
    msg.setSourceEntity(224U);
    msg.setDestination(61227U);
    msg.setDestinationEntity(30U);
    msg.id = 183U;
    msg.period = 1821788374U;
    msg.duty_cycle = 2034339203U;

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
    msg.setTimeStamp(0.445682502063);
    msg.setSource(14202U);
    msg.setSourceEntity(194U);
    msg.setDestination(44308U);
    msg.setDestinationEntity(189U);
    msg.id = 192U;
    msg.period = 2037391309U;
    msg.duty_cycle = 933115554U;

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
    msg.setTimeStamp(0.177451214566);
    msg.setSource(61511U);
    msg.setSourceEntity(56U);
    msg.setDestination(54550U);
    msg.setDestinationEntity(45U);
    msg.id = 106U;
    msg.period = 802820269U;
    msg.duty_cycle = 2825981675U;

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
    msg.setTimeStamp(0.383496603625);
    msg.setSource(14518U);
    msg.setSourceEntity(180U);
    msg.setDestination(35332U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.223884079447;
    msg.lon = 0.00425945878491;
    msg.height = 0.560702744005;
    msg.x = 0.0738102024335;
    msg.y = 0.000105834367902;
    msg.z = 0.625487581197;
    msg.phi = 0.262572538057;
    msg.theta = 0.861988901531;
    msg.psi = 0.706858617297;
    msg.u = 0.371020300113;
    msg.v = 0.848461555771;
    msg.w = 0.0445952891169;
    msg.vx = 0.262518906839;
    msg.vy = 0.129867756132;
    msg.vz = 0.977324780641;
    msg.p = 0.585390392094;
    msg.q = 0.739754606172;
    msg.r = 0.801890340838;
    msg.depth = 0.544497540215;
    msg.alt = 0.948415173599;

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
    msg.setTimeStamp(0.225872122831);
    msg.setSource(61849U);
    msg.setSourceEntity(32U);
    msg.setDestination(14903U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.924726758132;
    msg.lon = 0.691527429945;
    msg.height = 0.0364436411744;
    msg.x = 0.740350798042;
    msg.y = 0.271495685475;
    msg.z = 0.969568936415;
    msg.phi = 0.636282147317;
    msg.theta = 0.251082073411;
    msg.psi = 0.6947963154;
    msg.u = 0.542468007747;
    msg.v = 0.467167491857;
    msg.w = 0.575349729482;
    msg.vx = 0.711984311702;
    msg.vy = 0.422324942357;
    msg.vz = 0.60317566306;
    msg.p = 0.337771516598;
    msg.q = 0.57194907105;
    msg.r = 0.244486232835;
    msg.depth = 0.558056671154;
    msg.alt = 0.458868492993;

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
    msg.setTimeStamp(0.74586237917);
    msg.setSource(27434U);
    msg.setSourceEntity(224U);
    msg.setDestination(28659U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.54807332592;
    msg.lon = 0.444373392557;
    msg.height = 0.97124258678;
    msg.x = 0.384852420641;
    msg.y = 0.81841685115;
    msg.z = 0.671826934746;
    msg.phi = 0.133841148797;
    msg.theta = 0.839470419739;
    msg.psi = 0.989186451081;
    msg.u = 0.795162167004;
    msg.v = 0.80392631419;
    msg.w = 0.469374375502;
    msg.vx = 0.370083141506;
    msg.vy = 0.223017878755;
    msg.vz = 0.21250307541;
    msg.p = 0.0948176224298;
    msg.q = 0.1675064283;
    msg.r = 0.159147154127;
    msg.depth = 0.773669483138;
    msg.alt = 0.98958302094;

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
    msg.setTimeStamp(0.384093799559);
    msg.setSource(29455U);
    msg.setSourceEntity(199U);
    msg.setDestination(5661U);
    msg.setDestinationEntity(184U);
    msg.x = 0.372257055054;
    msg.y = 0.977467906293;
    msg.z = 0.971598782322;

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
    msg.setTimeStamp(0.499092456375);
    msg.setSource(52200U);
    msg.setSourceEntity(125U);
    msg.setDestination(47621U);
    msg.setDestinationEntity(120U);
    msg.x = 0.416313898982;
    msg.y = 0.877083395639;
    msg.z = 0.644701617454;

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
    msg.setTimeStamp(0.710142568308);
    msg.setSource(51870U);
    msg.setSourceEntity(155U);
    msg.setDestination(62365U);
    msg.setDestinationEntity(125U);
    msg.x = 0.774433496536;
    msg.y = 0.842354291503;
    msg.z = 0.364560773874;

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
    msg.setTimeStamp(0.454026460306);
    msg.setSource(45737U);
    msg.setSourceEntity(75U);
    msg.setDestination(53398U);
    msg.setDestinationEntity(171U);
    msg.value = 0.94873013969;

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
    msg.setTimeStamp(0.369117034569);
    msg.setSource(58088U);
    msg.setSourceEntity(195U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(79U);
    msg.value = 0.156174702896;

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
    msg.setTimeStamp(0.587400578436);
    msg.setSource(478U);
    msg.setSourceEntity(243U);
    msg.setDestination(20589U);
    msg.setDestinationEntity(233U);
    msg.value = 0.253541026562;

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
    msg.setTimeStamp(0.180613551753);
    msg.setSource(39588U);
    msg.setSourceEntity(250U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(143U);
    msg.value = 0.99838384356;

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
    msg.setTimeStamp(0.997536823884);
    msg.setSource(8243U);
    msg.setSourceEntity(111U);
    msg.setDestination(59416U);
    msg.setDestinationEntity(70U);
    msg.value = 0.0586575481513;

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
    msg.setTimeStamp(0.592111097177);
    msg.setSource(57267U);
    msg.setSourceEntity(142U);
    msg.setDestination(53045U);
    msg.setDestinationEntity(248U);
    msg.value = 0.553523996004;

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
    msg.setTimeStamp(0.245678881174);
    msg.setSource(43216U);
    msg.setSourceEntity(71U);
    msg.setDestination(54650U);
    msg.setDestinationEntity(152U);
    msg.x = 0.384781724726;
    msg.y = 0.159631113248;
    msg.z = 0.438809357389;
    msg.phi = 0.688635658073;
    msg.theta = 0.381099282159;
    msg.psi = 0.56844408779;
    msg.p = 0.729100376768;
    msg.q = 0.730700897515;
    msg.r = 0.927005678312;
    msg.u = 0.660014240973;
    msg.v = 0.0745594616581;
    msg.w = 0.758105276371;
    msg.bias_psi = 0.923875732152;
    msg.bias_r = 0.0828224551055;

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
    msg.setTimeStamp(0.216430802698);
    msg.setSource(26667U);
    msg.setSourceEntity(47U);
    msg.setDestination(61289U);
    msg.setDestinationEntity(14U);
    msg.x = 0.181875075449;
    msg.y = 0.66761779634;
    msg.z = 0.990163245275;
    msg.phi = 0.292181467114;
    msg.theta = 0.537431507058;
    msg.psi = 0.103143516012;
    msg.p = 0.843419397446;
    msg.q = 0.984035217578;
    msg.r = 0.183869449092;
    msg.u = 0.0227607473675;
    msg.v = 0.445623749551;
    msg.w = 0.418705448495;
    msg.bias_psi = 0.12011332265;
    msg.bias_r = 0.933276039961;

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
    msg.setTimeStamp(0.789811550912);
    msg.setSource(39256U);
    msg.setSourceEntity(7U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(125U);
    msg.x = 0.85490025184;
    msg.y = 0.452334119793;
    msg.z = 0.984576088956;
    msg.phi = 0.950193634207;
    msg.theta = 0.227926963713;
    msg.psi = 0.287444810485;
    msg.p = 0.0138094767001;
    msg.q = 0.102720480955;
    msg.r = 0.95894505037;
    msg.u = 0.478474797274;
    msg.v = 0.0985594994008;
    msg.w = 0.898953528173;
    msg.bias_psi = 0.683849144402;
    msg.bias_r = 0.868711875518;

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
    msg.setTimeStamp(0.687130272625);
    msg.setSource(37101U);
    msg.setSourceEntity(33U);
    msg.setDestination(57210U);
    msg.setDestinationEntity(159U);
    msg.bias_psi = 0.00980012633575;
    msg.bias_r = 0.863526277478;
    msg.cog = 0.291221905209;
    msg.cyaw = 0.375570397432;
    msg.lbl_rej_level = 0.727442629314;
    msg.gps_rej_level = 0.665351709371;
    msg.custom_x = 0.743746226665;
    msg.custom_y = 0.955783460642;
    msg.custom_z = 0.554311771659;

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
    msg.setTimeStamp(0.926548876832);
    msg.setSource(55259U);
    msg.setSourceEntity(236U);
    msg.setDestination(12057U);
    msg.setDestinationEntity(169U);
    msg.bias_psi = 0.488676267453;
    msg.bias_r = 0.7422162491;
    msg.cog = 0.404388727065;
    msg.cyaw = 0.703858219638;
    msg.lbl_rej_level = 0.506823736242;
    msg.gps_rej_level = 0.862807352998;
    msg.custom_x = 0.101753357832;
    msg.custom_y = 0.709033964173;
    msg.custom_z = 0.79687513375;

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
    msg.setTimeStamp(0.732677579683);
    msg.setSource(2533U);
    msg.setSourceEntity(97U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(23U);
    msg.bias_psi = 0.671864053265;
    msg.bias_r = 0.938478748393;
    msg.cog = 0.775402025185;
    msg.cyaw = 0.567690073848;
    msg.lbl_rej_level = 0.480314058613;
    msg.gps_rej_level = 0.274239010649;
    msg.custom_x = 0.212114634331;
    msg.custom_y = 0.988326158688;
    msg.custom_z = 0.953684705602;

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
    msg.setTimeStamp(0.181041097566);
    msg.setSource(54289U);
    msg.setSourceEntity(40U);
    msg.setDestination(7855U);
    msg.setDestinationEntity(81U);
    msg.utc_time = 0.576336501932;
    msg.reason = 35U;

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
    msg.setTimeStamp(0.0656832979208);
    msg.setSource(42800U);
    msg.setSourceEntity(38U);
    msg.setDestination(37689U);
    msg.setDestinationEntity(117U);
    msg.utc_time = 0.94853302153;
    msg.reason = 203U;

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
    msg.setTimeStamp(0.715309403283);
    msg.setSource(17061U);
    msg.setSourceEntity(145U);
    msg.setDestination(5574U);
    msg.setDestinationEntity(197U);
    msg.utc_time = 0.36483496165;
    msg.reason = 221U;

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
    msg.setTimeStamp(0.314966506523);
    msg.setSource(38828U);
    msg.setSourceEntity(193U);
    msg.setDestination(46966U);
    msg.setDestinationEntity(218U);
    msg.id = 155U;
    msg.range = 0.664630622659;
    msg.acceptance = 176U;

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
    msg.setTimeStamp(0.722754912398);
    msg.setSource(8227U);
    msg.setSourceEntity(143U);
    msg.setDestination(59301U);
    msg.setDestinationEntity(252U);
    msg.id = 208U;
    msg.range = 0.55179041303;
    msg.acceptance = 186U;

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
    msg.setTimeStamp(0.507410262324);
    msg.setSource(51351U);
    msg.setSourceEntity(162U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(90U);
    msg.id = 103U;
    msg.range = 0.573642998371;
    msg.acceptance = 66U;

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
    msg.setTimeStamp(0.300164634265);
    msg.setSource(27462U);
    msg.setSourceEntity(185U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(206U);
    msg.type = 239U;
    msg.reason = 78U;
    msg.value = 0.330665642629;
    msg.timestep = 0.431757743656;

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
    msg.setTimeStamp(0.920245112356);
    msg.setSource(35656U);
    msg.setSourceEntity(137U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(131U);
    msg.type = 176U;
    msg.reason = 219U;
    msg.value = 0.272199140224;
    msg.timestep = 0.794982205577;

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
    msg.setTimeStamp(0.193229874208);
    msg.setSource(40865U);
    msg.setSourceEntity(168U);
    msg.setDestination(64393U);
    msg.setDestinationEntity(210U);
    msg.type = 33U;
    msg.reason = 91U;
    msg.value = 0.517786079451;
    msg.timestep = 0.0745919643893;

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
    msg.setTimeStamp(0.366245440286);
    msg.setSource(64830U);
    msg.setSourceEntity(239U);
    msg.setDestination(32182U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.65531977098);
    msg.setSource(48914U);
    msg.setSourceEntity(160U);
    msg.setDestination(58321U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.745763999744);
    msg.setSource(6883U);
    msg.setSourceEntity(45U);
    msg.setDestination(62888U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.820675981344);
    msg.setSource(23397U);
    msg.setSourceEntity(118U);
    msg.setDestination(30931U);
    msg.setDestinationEntity(166U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BBNKYDGRORAQWHXXGKAJZTTWPXPITJEDVUHRBRJGSLKNEBMPHZRDUDYUMQ");
    tmp_msg_0.lat = 0.11008195682;
    tmp_msg_0.lon = 0.186229673839;
    tmp_msg_0.depth = 0.389114402561;
    tmp_msg_0.query_channel = 23U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 104U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.430377032721;
    msg.y = 0.452690843661;
    msg.var_x = 0.851538603563;
    msg.var_y = 0.970379332275;
    msg.distance = 0.982897338412;

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
    msg.setTimeStamp(0.678695243038);
    msg.setSource(5907U);
    msg.setSourceEntity(122U);
    msg.setDestination(33203U);
    msg.setDestinationEntity(177U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AQEQBKXPFTUWSKNATQPRGEQRAB");
    tmp_msg_0.lat = 0.283181477877;
    tmp_msg_0.lon = 0.0149307754753;
    tmp_msg_0.depth = 0.663662366854;
    tmp_msg_0.query_channel = 43U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 212U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.450564119514;
    msg.y = 0.702238933355;
    msg.var_x = 0.606944129243;
    msg.var_y = 0.602252650762;
    msg.distance = 0.458210004133;

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
    msg.setTimeStamp(0.431949688852);
    msg.setSource(4937U);
    msg.setSourceEntity(129U);
    msg.setDestination(25587U);
    msg.setDestinationEntity(18U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YLTRDHYDQFBUILXFJKSGAEPZHYAXVWDHOYEFISKXPXQKYPSJOTRNOBPLBEUGLJOBNSCNJAFZKOYKNCEFSTHAXXQFXVZNQTLQWTUWGDVCVKJKDYAHNTZKGOPMHWMLMERRRQTCLITRCBVCVPHEKHSZWOHCYMBTMKQURCVAGBNYZPRSWEEAPPAGRLZEJJUIVQFONMQX");
    tmp_msg_0.lat = 0.987994436351;
    tmp_msg_0.lon = 0.526248844662;
    tmp_msg_0.depth = 0.227711829842;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 125U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.345750487082;
    msg.y = 0.954716795168;
    msg.var_x = 0.165082480298;
    msg.var_y = 0.00547714006022;
    msg.distance = 0.764877840777;

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
    msg.setTimeStamp(0.196662749297);
    msg.setSource(60996U);
    msg.setSourceEntity(238U);
    msg.setDestination(42464U);
    msg.setDestinationEntity(32U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.304703699515);
    msg.setSource(30654U);
    msg.setSourceEntity(120U);
    msg.setDestination(6934U);
    msg.setDestinationEntity(123U);
    msg.state = 96U;

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
    msg.setTimeStamp(0.865972147185);
    msg.setSource(2717U);
    msg.setSourceEntity(220U);
    msg.setDestination(20780U);
    msg.setDestinationEntity(102U);
    msg.state = 140U;

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
    msg.setTimeStamp(0.82466378555);
    msg.setSource(13714U);
    msg.setSourceEntity(185U);
    msg.setDestination(1282U);
    msg.setDestinationEntity(66U);
    msg.x = 0.485487869168;
    msg.y = 0.171941760848;
    msg.z = 0.859463469305;

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
    msg.setTimeStamp(0.45176366767);
    msg.setSource(49861U);
    msg.setSourceEntity(16U);
    msg.setDestination(36525U);
    msg.setDestinationEntity(248U);
    msg.x = 0.993778622043;
    msg.y = 0.766917724895;
    msg.z = 0.937115303969;

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
    msg.setTimeStamp(0.823088717972);
    msg.setSource(8280U);
    msg.setSourceEntity(54U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(44U);
    msg.x = 0.157134907983;
    msg.y = 0.220228267049;
    msg.z = 0.710986215618;

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
    msg.setTimeStamp(0.0580670198753);
    msg.setSource(37031U);
    msg.setSourceEntity(161U);
    msg.setDestination(41155U);
    msg.setDestinationEntity(117U);
    msg.value = 0.844661602169;

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
    msg.setTimeStamp(0.313489450065);
    msg.setSource(65003U);
    msg.setSourceEntity(40U);
    msg.setDestination(25050U);
    msg.setDestinationEntity(28U);
    msg.value = 0.64806862348;

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
    msg.setTimeStamp(0.718962678289);
    msg.setSource(10758U);
    msg.setSourceEntity(34U);
    msg.setDestination(14828U);
    msg.setDestinationEntity(224U);
    msg.value = 0.328422971021;

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
    msg.setTimeStamp(0.0655654377974);
    msg.setSource(51314U);
    msg.setSourceEntity(71U);
    msg.setDestination(43479U);
    msg.setDestinationEntity(159U);
    msg.value = 0.183046727978;
    msg.z_units = 190U;

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
    msg.setTimeStamp(0.495327476144);
    msg.setSource(36542U);
    msg.setSourceEntity(117U);
    msg.setDestination(19316U);
    msg.setDestinationEntity(211U);
    msg.value = 0.406948341492;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.596983719672);
    msg.setSource(10439U);
    msg.setSourceEntity(83U);
    msg.setDestination(20856U);
    msg.setDestinationEntity(248U);
    msg.value = 0.524400540064;
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
    msg.setTimeStamp(0.227477569502);
    msg.setSource(19419U);
    msg.setSourceEntity(78U);
    msg.setDestination(23729U);
    msg.setDestinationEntity(244U);
    msg.value = 0.565570687676;
    msg.speed_units = 33U;

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
    msg.setTimeStamp(0.137965532876);
    msg.setSource(25415U);
    msg.setSourceEntity(144U);
    msg.setDestination(55645U);
    msg.setDestinationEntity(181U);
    msg.value = 0.616433422441;
    msg.speed_units = 223U;

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
    msg.setTimeStamp(0.286385718885);
    msg.setSource(21182U);
    msg.setSourceEntity(172U);
    msg.setDestination(12513U);
    msg.setDestinationEntity(157U);
    msg.value = 0.934551977227;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.47526822835);
    msg.setSource(15373U);
    msg.setSourceEntity(20U);
    msg.setDestination(46005U);
    msg.setDestinationEntity(239U);
    msg.value = 0.0988465879392;

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
    msg.setTimeStamp(0.201226509018);
    msg.setSource(26481U);
    msg.setSourceEntity(77U);
    msg.setDestination(35198U);
    msg.setDestinationEntity(31U);
    msg.value = 0.813197869907;

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
    msg.setTimeStamp(0.559851031799);
    msg.setSource(42603U);
    msg.setSourceEntity(219U);
    msg.setDestination(3709U);
    msg.setDestinationEntity(181U);
    msg.value = 0.543157689092;

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
    msg.setTimeStamp(0.964324618949);
    msg.setSource(9731U);
    msg.setSourceEntity(25U);
    msg.setDestination(17258U);
    msg.setDestinationEntity(54U);
    msg.value = 0.435799308493;

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
    msg.setTimeStamp(0.105290190735);
    msg.setSource(41639U);
    msg.setSourceEntity(20U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(28U);
    msg.value = 0.174373135594;

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
    msg.setTimeStamp(0.92410896142);
    msg.setSource(21029U);
    msg.setSourceEntity(98U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(108U);
    msg.value = 0.64198302184;

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
    msg.setTimeStamp(0.222020137791);
    msg.setSource(24502U);
    msg.setSourceEntity(44U);
    msg.setDestination(49587U);
    msg.setDestinationEntity(210U);
    msg.value = 0.644009892192;

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
    msg.setTimeStamp(0.0779268044004);
    msg.setSource(50830U);
    msg.setSourceEntity(119U);
    msg.setDestination(5876U);
    msg.setDestinationEntity(50U);
    msg.value = 0.547485461547;

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
    msg.setTimeStamp(0.561663379853);
    msg.setSource(43210U);
    msg.setSourceEntity(135U);
    msg.setDestination(27278U);
    msg.setDestinationEntity(231U);
    msg.value = 0.344805740432;

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
    msg.setTimeStamp(0.404476152706);
    msg.setSource(26671U);
    msg.setSourceEntity(151U);
    msg.setDestination(33024U);
    msg.setDestinationEntity(212U);
    msg.start_lat = 0.387898548965;
    msg.start_lon = 0.674710096911;
    msg.start_z = 0.144248240313;
    msg.start_z_units = 56U;
    msg.end_lat = 0.811443775236;
    msg.end_lon = 0.436085304609;
    msg.end_z = 0.422113843818;
    msg.end_z_units = 81U;
    msg.speed = 0.675267653369;
    msg.speed_units = 227U;
    msg.lradius = 0.909069192134;
    msg.flags = 218U;

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
    msg.setTimeStamp(0.16095994257);
    msg.setSource(11102U);
    msg.setSourceEntity(99U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(7U);
    msg.start_lat = 0.430955414542;
    msg.start_lon = 0.618959378833;
    msg.start_z = 0.147495086795;
    msg.start_z_units = 22U;
    msg.end_lat = 0.662777006043;
    msg.end_lon = 0.980464844233;
    msg.end_z = 0.0224253358492;
    msg.end_z_units = 206U;
    msg.speed = 0.0430365642657;
    msg.speed_units = 167U;
    msg.lradius = 0.187266512881;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.666783921525);
    msg.setSource(16249U);
    msg.setSourceEntity(184U);
    msg.setDestination(329U);
    msg.setDestinationEntity(40U);
    msg.start_lat = 0.783828341769;
    msg.start_lon = 0.908380069328;
    msg.start_z = 0.758292683772;
    msg.start_z_units = 35U;
    msg.end_lat = 0.721446707281;
    msg.end_lon = 0.63064020396;
    msg.end_z = 0.2748090105;
    msg.end_z_units = 4U;
    msg.speed = 0.345688603523;
    msg.speed_units = 178U;
    msg.lradius = 0.238378914188;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.424291424823);
    msg.setSource(50705U);
    msg.setSourceEntity(33U);
    msg.setDestination(54781U);
    msg.setDestinationEntity(111U);
    msg.x = 0.970706049573;
    msg.y = 0.432318948762;
    msg.z = 0.398300648949;
    msg.k = 0.983268479654;
    msg.m = 0.604310822111;
    msg.n = 0.920639842318;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.978471512488);
    msg.setSource(10534U);
    msg.setSourceEntity(234U);
    msg.setDestination(35147U);
    msg.setDestinationEntity(42U);
    msg.x = 0.509536938502;
    msg.y = 0.994540151999;
    msg.z = 0.767026546406;
    msg.k = 0.909789619682;
    msg.m = 0.492189447408;
    msg.n = 0.0416975530748;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.857445121627);
    msg.setSource(12446U);
    msg.setSourceEntity(130U);
    msg.setDestination(39440U);
    msg.setDestinationEntity(215U);
    msg.x = 0.548167401254;
    msg.y = 0.660473412129;
    msg.z = 0.722848581851;
    msg.k = 0.33750661089;
    msg.m = 0.0880867681762;
    msg.n = 0.339343196854;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.132104400111);
    msg.setSource(19383U);
    msg.setSourceEntity(31U);
    msg.setDestination(63029U);
    msg.setDestinationEntity(28U);
    msg.value = 0.569705253956;

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
    msg.setTimeStamp(0.745143876399);
    msg.setSource(27201U);
    msg.setSourceEntity(194U);
    msg.setDestination(20283U);
    msg.setDestinationEntity(221U);
    msg.value = 0.416379757958;

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
    msg.setTimeStamp(0.629406678926);
    msg.setSource(40926U);
    msg.setSourceEntity(106U);
    msg.setDestination(20754U);
    msg.setDestinationEntity(60U);
    msg.value = 0.039756626694;

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
    msg.setTimeStamp(0.0190667726755);
    msg.setSource(25756U);
    msg.setSourceEntity(144U);
    msg.setDestination(5445U);
    msg.setDestinationEntity(80U);
    msg.u = 0.633011904696;
    msg.v = 0.0490951659907;
    msg.w = 0.816751948612;
    msg.p = 0.253520525825;
    msg.q = 0.116864078379;
    msg.r = 0.985758688575;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.697451488837);
    msg.setSource(61577U);
    msg.setSourceEntity(178U);
    msg.setDestination(64061U);
    msg.setDestinationEntity(65U);
    msg.u = 0.355679906889;
    msg.v = 0.253870232204;
    msg.w = 0.84015529255;
    msg.p = 0.24347346273;
    msg.q = 0.915852622612;
    msg.r = 0.263172159233;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.454257981063);
    msg.setSource(36175U);
    msg.setSourceEntity(172U);
    msg.setDestination(62581U);
    msg.setDestinationEntity(167U);
    msg.u = 0.188199684693;
    msg.v = 0.950316483152;
    msg.w = 0.660390798776;
    msg.p = 0.57759179378;
    msg.q = 0.122770408015;
    msg.r = 0.644501260005;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.925474610511);
    msg.setSource(26911U);
    msg.setSourceEntity(62U);
    msg.setDestination(15533U);
    msg.setDestinationEntity(184U);
    msg.start_lat = 0.193574055767;
    msg.start_lon = 0.171267921928;
    msg.start_z = 0.866575197073;
    msg.start_z_units = 39U;
    msg.end_lat = 0.251090787386;
    msg.end_lon = 0.555516032718;
    msg.end_z = 0.0798749774995;
    msg.end_z_units = 212U;
    msg.lradius = 0.293364265592;
    msg.flags = 164U;
    msg.x = 0.485136871325;
    msg.y = 0.554130590748;
    msg.z = 0.786174584284;
    msg.vx = 0.712349508124;
    msg.vy = 0.572558594597;
    msg.vz = 0.523144355824;
    msg.course_error = 0.813928942564;
    msg.eta = 50319U;

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
    msg.setTimeStamp(0.836844435288);
    msg.setSource(10968U);
    msg.setSourceEntity(80U);
    msg.setDestination(23366U);
    msg.setDestinationEntity(253U);
    msg.start_lat = 0.836422727018;
    msg.start_lon = 0.525040388915;
    msg.start_z = 0.38788360684;
    msg.start_z_units = 198U;
    msg.end_lat = 0.874610240666;
    msg.end_lon = 0.925373787842;
    msg.end_z = 0.909232391065;
    msg.end_z_units = 193U;
    msg.lradius = 0.329450485911;
    msg.flags = 112U;
    msg.x = 0.359236274775;
    msg.y = 0.698997752468;
    msg.z = 0.637674105138;
    msg.vx = 0.127428831084;
    msg.vy = 0.203802391148;
    msg.vz = 0.219854859723;
    msg.course_error = 0.386840490804;
    msg.eta = 54582U;

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
    msg.setTimeStamp(0.259727287488);
    msg.setSource(60892U);
    msg.setSourceEntity(32U);
    msg.setDestination(52547U);
    msg.setDestinationEntity(166U);
    msg.start_lat = 0.145422547751;
    msg.start_lon = 0.0485778540804;
    msg.start_z = 0.515880660604;
    msg.start_z_units = 79U;
    msg.end_lat = 0.564529333783;
    msg.end_lon = 0.54500793512;
    msg.end_z = 0.905505146569;
    msg.end_z_units = 54U;
    msg.lradius = 0.265528013124;
    msg.flags = 225U;
    msg.x = 0.458356311225;
    msg.y = 0.369219117854;
    msg.z = 0.292200345904;
    msg.vx = 0.392144292984;
    msg.vy = 0.985309773284;
    msg.vz = 0.588187375702;
    msg.course_error = 0.536116347484;
    msg.eta = 12983U;

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
    msg.setTimeStamp(0.400983228539);
    msg.setSource(63442U);
    msg.setSourceEntity(126U);
    msg.setDestination(54902U);
    msg.setDestinationEntity(138U);
    msg.k = 0.423437596261;
    msg.m = 0.371669253611;
    msg.n = 0.72524592843;

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
    msg.setTimeStamp(0.601126794823);
    msg.setSource(22734U);
    msg.setSourceEntity(175U);
    msg.setDestination(1630U);
    msg.setDestinationEntity(253U);
    msg.k = 0.365661468068;
    msg.m = 0.317916059458;
    msg.n = 0.108621859648;

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
    msg.setTimeStamp(0.588395586148);
    msg.setSource(11476U);
    msg.setSourceEntity(229U);
    msg.setDestination(58443U);
    msg.setDestinationEntity(142U);
    msg.k = 0.478393408415;
    msg.m = 0.484003073982;
    msg.n = 0.343389120385;

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
    msg.setTimeStamp(0.681513118334);
    msg.setSource(52469U);
    msg.setSourceEntity(218U);
    msg.setDestination(52378U);
    msg.setDestinationEntity(194U);
    msg.p = 0.383267333746;
    msg.i = 0.773871825743;
    msg.d = 0.413328389426;
    msg.a = 0.592394475869;

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
    msg.setTimeStamp(0.206436254646);
    msg.setSource(18364U);
    msg.setSourceEntity(102U);
    msg.setDestination(28161U);
    msg.setDestinationEntity(137U);
    msg.p = 0.606066725085;
    msg.i = 0.613794025467;
    msg.d = 0.143597478339;
    msg.a = 0.0293566956821;

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
    msg.setTimeStamp(0.465859432632);
    msg.setSource(29255U);
    msg.setSourceEntity(139U);
    msg.setDestination(849U);
    msg.setDestinationEntity(211U);
    msg.p = 0.922510310624;
    msg.i = 0.103116744248;
    msg.d = 0.848441274577;
    msg.a = 0.343438772417;

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
    msg.setTimeStamp(0.160425940889);
    msg.setSource(56365U);
    msg.setSourceEntity(250U);
    msg.setDestination(16881U);
    msg.setDestinationEntity(85U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.878254701766);
    msg.setSource(61569U);
    msg.setSourceEntity(219U);
    msg.setDestination(41062U);
    msg.setDestinationEntity(41U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.194317438466);
    msg.setSource(37200U);
    msg.setSourceEntity(20U);
    msg.setDestination(25194U);
    msg.setDestinationEntity(7U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.2313494036);
    msg.setSource(38151U);
    msg.setSourceEntity(102U);
    msg.setDestination(36028U);
    msg.setDestinationEntity(249U);
    msg.timeout = 12577U;
    msg.lat = 0.28698881173;
    msg.lon = 0.705257643995;
    msg.z = 0.638099753074;
    msg.z_units = 100U;
    msg.speed = 0.590376094735;
    msg.speed_units = 159U;
    msg.roll = 0.714512024448;
    msg.pitch = 0.580610026869;
    msg.yaw = 0.772064792465;
    msg.custom.assign("UXULCUHBYVIGFSTJZDOTWWYIOKRHQPMJAQDBXPFONVJNSBRQFETJASEKVCNHNWJFWIXLGIIXGUTEJOKLGBYYWSEDQOBXCNSDAYNDLUHZRYRXLVUOZLJVHTHPIVISHBFZARGSNZMJWSBDQPUVKKRPMRUKBWQPPTKEOZNQSVBPDOCYMAXKLAZGOAECOFWQTM");

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
    msg.setTimeStamp(0.606550891344);
    msg.setSource(57470U);
    msg.setSourceEntity(70U);
    msg.setDestination(40593U);
    msg.setDestinationEntity(225U);
    msg.timeout = 25840U;
    msg.lat = 0.273151156963;
    msg.lon = 0.10769831705;
    msg.z = 0.868247802182;
    msg.z_units = 94U;
    msg.speed = 0.627540170763;
    msg.speed_units = 30U;
    msg.roll = 0.557684498188;
    msg.pitch = 0.0586392876233;
    msg.yaw = 0.412393270146;
    msg.custom.assign("SYWUPLXDKBUEWQUCHICGHDXSIISVLRXRYROVTIRWHVDOKLZFDIANVENVEMMHQLEMPWGPJDAILUTNWWAEXOBKWPCPJGDATSGMLQEUEZLCYSPJFRKDZUBODPCPUAFMYTCOQWXVFVNOEKKJYQJICPQFZCMONTKGBBTNRKLIZNBSHHRVCGRMGNBQZFVXQIZOJAPHZLYHMAJLNHXJYDXAXFEUYTBTJFJTQECUVMQIWYA");

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
    msg.setTimeStamp(0.182539603476);
    msg.setSource(2488U);
    msg.setSourceEntity(229U);
    msg.setDestination(17018U);
    msg.setDestinationEntity(173U);
    msg.timeout = 33474U;
    msg.lat = 0.422667614195;
    msg.lon = 0.643671423261;
    msg.z = 0.0732817509099;
    msg.z_units = 121U;
    msg.speed = 0.0848096520752;
    msg.speed_units = 147U;
    msg.roll = 0.213002540683;
    msg.pitch = 0.552272723865;
    msg.yaw = 0.757411839868;
    msg.custom.assign("VVCDWQDVMCVYEPWOLMYMGINSZGBDBSNDUNLAFFCCHEUJOOJHOPNYJLNRNZVGRJQWGRHZSUMIUTSYFDHLGWOTRWSLGGOJYVYPTNBVVQLBAKFCIZFKNSPYYRIZBUJDXZ");

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
    msg.setTimeStamp(0.793707783459);
    msg.setSource(40863U);
    msg.setSourceEntity(58U);
    msg.setDestination(397U);
    msg.setDestinationEntity(128U);
    msg.timeout = 43861U;
    msg.lat = 0.393697675407;
    msg.lon = 0.815640999203;
    msg.z = 0.869911099089;
    msg.z_units = 148U;
    msg.speed = 0.0271858590231;
    msg.speed_units = 120U;
    msg.duration = 60827U;
    msg.radius = 0.725884816193;
    msg.flags = 172U;
    msg.custom.assign("NIFXLOWBSMDK");

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
    msg.setTimeStamp(0.172847708975);
    msg.setSource(63773U);
    msg.setSourceEntity(160U);
    msg.setDestination(36012U);
    msg.setDestinationEntity(43U);
    msg.timeout = 23634U;
    msg.lat = 0.300731602614;
    msg.lon = 0.690464524852;
    msg.z = 0.459147890641;
    msg.z_units = 198U;
    msg.speed = 0.110401521416;
    msg.speed_units = 128U;
    msg.duration = 34342U;
    msg.radius = 0.229251592936;
    msg.flags = 146U;
    msg.custom.assign("GWSEYTHRAUDHDCLPCPYGJWUMREQJITSQKFOGTXYVRT");

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
    msg.setTimeStamp(0.285588440907);
    msg.setSource(44235U);
    msg.setSourceEntity(26U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(207U);
    msg.timeout = 33223U;
    msg.lat = 0.889687045711;
    msg.lon = 0.496015633193;
    msg.z = 0.311087557439;
    msg.z_units = 4U;
    msg.speed = 0.945563217674;
    msg.speed_units = 105U;
    msg.duration = 22548U;
    msg.radius = 0.26528181135;
    msg.flags = 117U;
    msg.custom.assign("WTUTFRDILLXSWKIAZRHOEULPJZVAXQMFXPWWUJSCMOKKUQYHVGRMYKBDAEHDYCZBSOJFE");

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
    msg.setTimeStamp(0.0847937980919);
    msg.setSource(28347U);
    msg.setSourceEntity(205U);
    msg.setDestination(22127U);
    msg.setDestinationEntity(6U);
    msg.custom.assign("XJNKUKWWGUYLZGBTOBXJOXQOGOQLWHDXVQSVTJTCDVZSVGEPXZYRVINBMHCVHECWWBXIFVLPZPPFQHYNLAOHHADFOAFSFGOUJGMZBRYDCQYMZUUGRMUFSEDDCEOBCUQRQZSCFXKNILASOTNIHYKNILETPZKMDAVBIQOCRFWGICVZELTVMMRRKJQTAEHTRIATUMCXNJUKIXPMPSUWFLLHLNYKEZYJRPDDYYAJPKSNEGWDXW");

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
    msg.setTimeStamp(0.0906841498258);
    msg.setSource(49525U);
    msg.setSourceEntity(83U);
    msg.setDestination(30481U);
    msg.setDestinationEntity(113U);
    msg.custom.assign("BJAQZEJWNAUQQGDVOYPQRVYFXOXPHFCNDQBTIFGAQMASHQTWCCMSXKZIGAHVAVDWMKLYFDHBKSZOYMLIECYVWOUAMWZGNHTOKXVJLHVIGIVHJPTDWXXYUOJSPPKTSDPHTFDORBXAMHIRSFIECRKRPDGUMYLONBXTQWTKILVRC");

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
    msg.setTimeStamp(0.307994283365);
    msg.setSource(59833U);
    msg.setSourceEntity(120U);
    msg.setDestination(7391U);
    msg.setDestinationEntity(22U);
    msg.custom.assign("ULMJPXFCLCUOFBRMHXPWUJOARQWWFOFMRMAHJRJORJOWIBC");

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
    msg.setTimeStamp(0.0765572271994);
    msg.setSource(48135U);
    msg.setSourceEntity(16U);
    msg.setDestination(51762U);
    msg.setDestinationEntity(81U);
    msg.timeout = 18582U;
    msg.lat = 0.122710011001;
    msg.lon = 0.282982198714;
    msg.z = 0.460914736123;
    msg.z_units = 75U;
    msg.duration = 11981U;
    msg.speed = 0.674552625572;
    msg.speed_units = 180U;
    msg.type = 214U;
    msg.radius = 0.38681409974;
    msg.length = 0.871751998381;
    msg.bearing = 0.769434210189;
    msg.direction = 8U;
    msg.custom.assign("PRHPNYUOLEQYDWITRCMOWPFLAVXWKXMOJHGJFWIRNQ");

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
    msg.setTimeStamp(0.881457680893);
    msg.setSource(41195U);
    msg.setSourceEntity(120U);
    msg.setDestination(52209U);
    msg.setDestinationEntity(4U);
    msg.timeout = 56681U;
    msg.lat = 0.0611329614236;
    msg.lon = 0.616353695908;
    msg.z = 0.026103435563;
    msg.z_units = 117U;
    msg.duration = 37998U;
    msg.speed = 0.510712025401;
    msg.speed_units = 110U;
    msg.type = 12U;
    msg.radius = 0.885319111901;
    msg.length = 0.731139583331;
    msg.bearing = 0.753602895441;
    msg.direction = 14U;
    msg.custom.assign("TWGFFYNQHMNZKDFUTXKWKUOLWGTPIBLESUOWQSRGCZPRGFRJJZNQEQPHCNVOCUHXEWIHMAQUTVCXYWPUJVXYBMXRMALFNIEIHATAOEMDQUSTLDHINNFYPQDVZLADJETRZBVYPGYGSOCCBQYGKICODRPNPLTDURLQQOYHYEAK");

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
    msg.setTimeStamp(0.264621883233);
    msg.setSource(14778U);
    msg.setSourceEntity(245U);
    msg.setDestination(35508U);
    msg.setDestinationEntity(179U);
    msg.timeout = 64796U;
    msg.lat = 0.716258446549;
    msg.lon = 0.894892207011;
    msg.z = 0.772719432883;
    msg.z_units = 123U;
    msg.duration = 59094U;
    msg.speed = 0.342891721464;
    msg.speed_units = 205U;
    msg.type = 42U;
    msg.radius = 0.830754605067;
    msg.length = 0.966861897068;
    msg.bearing = 0.435353189342;
    msg.direction = 250U;
    msg.custom.assign("IKGPBHKPDMXEKKMAARTVLQXYNBHOVZ");

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
    msg.setTimeStamp(0.964120296804);
    msg.setSource(36312U);
    msg.setSourceEntity(194U);
    msg.setDestination(7999U);
    msg.setDestinationEntity(49U);
    msg.duration = 28808U;
    msg.custom.assign("WOPWJGLRBHBPCOCATRCTUXLBFGJZRHDPSCMNMZCQLIJRIRSVMSRFPWAXRHPCIQQLHZZYXMKHDWJUHFOKLQZLKBOAYUETGMGRE");

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
    msg.setTimeStamp(0.00121594574859);
    msg.setSource(39917U);
    msg.setSourceEntity(190U);
    msg.setDestination(34000U);
    msg.setDestinationEntity(77U);
    msg.duration = 2416U;
    msg.custom.assign("SCHBAOVBKRSXBZRCPJNZEOYKSIECGCBSZESJIHYZNHBLKXDKVTYJXJFMOUEMUVYTPDHTVUNTGOLOAAZIWMMPDPOKZYZGVTGOSUFNBIQXRVENWWFWFDFTUDWSPSEHPKUTKYCYKCCAIJOTQFGNKCBIQUZFZLMPXUMAUADDQCA");

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
    msg.setTimeStamp(0.246575391275);
    msg.setSource(11853U);
    msg.setSourceEntity(11U);
    msg.setDestination(65002U);
    msg.setDestinationEntity(155U);
    msg.duration = 27427U;
    msg.custom.assign("GXRFLSUIKBIZYNZEBOKMDVOHXWKDGMDLSMAJIQPRNQICRARZYIUTBAEOCDQWDNXCVWOTSBINZVWSUUAHDAJCCHMNNCZGPWTJZVXCYCXSOLABGYQFOYVCDAETQWQOTYBQDYESSVXJRLHVJRXKGVJKIB");

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
    msg.setTimeStamp(0.0301256411843);
    msg.setSource(29433U);
    msg.setSourceEntity(206U);
    msg.setDestination(12683U);
    msg.setDestinationEntity(183U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.988457211485;
    tmp_msg_0.speed_units = 167U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61690U;
    msg.custom.assign("YTLSBQVRLBGRFWEDHTKBLHROZXNIVOHQFTGKOLNQMLPHFFPYOUJXKCCMKKDBDQDICJCQMCPAJZOWBYSLHOHUKUVZLRRKJZAJCVURFNWEAGSFMXWXSSWNOMZGUSFEWJSIUEUICAAQOBREYMWHNTLTVOGUBAISY");

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
    msg.setTimeStamp(0.585650792446);
    msg.setSource(43202U);
    msg.setSourceEntity(177U);
    msg.setDestination(31954U);
    msg.setDestinationEntity(83U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.278291680174;
    msg.control.set(tmp_msg_0);
    msg.duration = 43031U;
    msg.custom.assign("ATMZFHDCNEOSLVYZLIJYDJOLJIQVVJMDLDGNFBJKBQBXMANBIWTGHVYJXFLPQMF");

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
    msg.setTimeStamp(0.273994019097);
    msg.setSource(42695U);
    msg.setSourceEntity(107U);
    msg.setDestination(7406U);
    msg.setDestinationEntity(222U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.878272845645;
    tmp_msg_0.z_units = 237U;
    msg.control.set(tmp_msg_0);
    msg.duration = 60013U;
    msg.custom.assign("EPOVBHIFZQRRBWWPUYMAUFADCPUEQICFXFGBNSKMMFBMLOIVIWJACHKUBQGNAQDGOSLNHRDSBAEHDEIVZYBYWGVZVFIOSJUEBTGOMZZYIMTPXPGTZOQWKZCVWMHVCVKUTZCRAWFLQDHTXOJORRJFEUDJEKIXGNHVRTAJNWLXKFQJPYLSAENGOCPHYSJKFUDTKBZXCDYLTHSJYSCLIGMXQPPXWRWMALTAXSTCNJLEYES");

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
    msg.setTimeStamp(0.845733207797);
    msg.setSource(45247U);
    msg.setSourceEntity(26U);
    msg.setDestination(49810U);
    msg.setDestinationEntity(24U);
    msg.timeout = 19522U;
    msg.lat = 0.0283150508493;
    msg.lon = 0.761798360714;
    msg.z = 0.236956518469;
    msg.z_units = 9U;
    msg.speed = 0.653301928187;
    msg.speed_units = 126U;
    msg.bearing = 0.726062118666;
    msg.cross_angle = 0.198698535655;
    msg.width = 0.72580064988;
    msg.length = 0.196723496632;
    msg.hstep = 0.0400872003922;
    msg.coff = 0U;
    msg.alternation = 177U;
    msg.flags = 205U;
    msg.custom.assign("EDMOLYTRJSQFSLHFXBYMZNLGTFEFYCXQTZOAUTTKKTJPHIOLKCCAYDGCCJSNNXLPEJABROPBHPGRSRBBSDKJRFEG");

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
    msg.setTimeStamp(0.277925912108);
    msg.setSource(37292U);
    msg.setSourceEntity(182U);
    msg.setDestination(20989U);
    msg.setDestinationEntity(49U);
    msg.timeout = 11440U;
    msg.lat = 0.313019152314;
    msg.lon = 0.0741348236118;
    msg.z = 0.422297759123;
    msg.z_units = 92U;
    msg.speed = 0.424175889877;
    msg.speed_units = 20U;
    msg.bearing = 0.887339216407;
    msg.cross_angle = 0.689595643005;
    msg.width = 0.0738198527074;
    msg.length = 0.932767121049;
    msg.hstep = 0.686149812225;
    msg.coff = 177U;
    msg.alternation = 132U;
    msg.flags = 225U;
    msg.custom.assign("JVGDSUXXLRKVJEAHDDRFQXWFUEHEIJHDCVMNQPUURSYPGCSTIHTPHDLZFLPNIWWAAYKLQFEFSTOYAZBPAWKLKTBUEQFAGWBHIHRGFZXWFILCGLBIRYSCVOGYEOWNWMXZXVTKSW");

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
    msg.setTimeStamp(0.775746573383);
    msg.setSource(56839U);
    msg.setSourceEntity(234U);
    msg.setDestination(5883U);
    msg.setDestinationEntity(21U);
    msg.timeout = 54323U;
    msg.lat = 0.598417927243;
    msg.lon = 0.793107768298;
    msg.z = 0.412417172044;
    msg.z_units = 77U;
    msg.speed = 0.725778607533;
    msg.speed_units = 216U;
    msg.bearing = 0.659301922925;
    msg.cross_angle = 0.924733638564;
    msg.width = 0.820854191299;
    msg.length = 0.490584471304;
    msg.hstep = 0.126612934632;
    msg.coff = 7U;
    msg.alternation = 108U;
    msg.flags = 158U;
    msg.custom.assign("LLXICQZSOJCLHSDYWEVIKALPZZDLBEQYHOLFTXUZTTJPHBNFSJSELIHTJWGISTRRQQFNAJFLMRIUOVKAMXQSNGQVKMDMJMKKLGARWKOTPKCIGMRTOBVFYZYMVGHAHRPPEZJPZXXIXEXQNAOVDPDWOVKVAQUEPTNYSEYVBUGZAGSRUKSCHYZBWBBFEECMWDXGGFWUDQYFXWCBMNJDCCROSJEQPYANRUVZINFBWDNLAHKHBWHTDYGTFOCNOUUI");

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
    msg.setTimeStamp(0.900361550072);
    msg.setSource(36889U);
    msg.setSourceEntity(101U);
    msg.setDestination(57250U);
    msg.setDestinationEntity(160U);
    msg.timeout = 57438U;
    msg.lat = 0.996351710657;
    msg.lon = 0.394553246141;
    msg.z = 0.855671766436;
    msg.z_units = 238U;
    msg.speed = 0.860846279601;
    msg.speed_units = 104U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.535333808098;
    tmp_msg_0.y = 0.657177501456;
    tmp_msg_0.z = 0.717935057786;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FXARKBRFPJQVBNTBGGEOZDMLRYHGXXXILPATLNQTVURLZNHCPHVBSVNPRMLMWZPIMGNJGIWGJCEHVCAWMTULMYHKVDSDQNRWOOOSPYUBIAIYOWWHIQUFKWLCVQKDTZVBTVASXDALXAYCDOEPKZDSWEYFHFUSKPJFUMGKZIDLZXXZNBWUAXQJDYEUOQHIPWEAYYYPJORUFUJTSBAK");

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
    msg.setTimeStamp(0.910184507936);
    msg.setSource(53547U);
    msg.setSourceEntity(232U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(245U);
    msg.timeout = 38631U;
    msg.lat = 0.102228477826;
    msg.lon = 0.0204314746694;
    msg.z = 0.0743754944455;
    msg.z_units = 23U;
    msg.speed = 0.318801116173;
    msg.speed_units = 133U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.57416752266;
    tmp_msg_0.y = 0.521568243966;
    tmp_msg_0.z = 0.986610541203;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OSANMQSPPGMFWQMBVZQUGCTZZK");

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
    msg.setTimeStamp(0.477584739489);
    msg.setSource(2454U);
    msg.setSourceEntity(0U);
    msg.setDestination(56158U);
    msg.setDestinationEntity(142U);
    msg.timeout = 26440U;
    msg.lat = 0.6708423166;
    msg.lon = 0.947357362085;
    msg.z = 0.972336756071;
    msg.z_units = 146U;
    msg.speed = 0.211313454421;
    msg.speed_units = 250U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.551524552353;
    tmp_msg_0.y = 0.774838957551;
    tmp_msg_0.z = 0.0264281575155;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZDWXJSYHIMZOOJOJDDTOVFIZVHJSCKILGTMIBMLZQVWLLNRLXDRTENVIKDCIRKINKLATQGJVFVERMAKXFZQGFNCQGIXXWBUFMOPGYFZBPPNKZWMGQNXSVFNXACCGYYBVULZHUPMJUQHNQBWEYGRBABTYNUPUYJCCAKSXZREVLPSSUEMVXIRBC");

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
    msg.setTimeStamp(0.654107433523);
    msg.setSource(19563U);
    msg.setSourceEntity(68U);
    msg.setDestination(62502U);
    msg.setDestinationEntity(160U);
    msg.x = 0.385443872996;
    msg.y = 0.429309058875;
    msg.z = 0.896870888274;

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
    msg.setTimeStamp(0.0634289886596);
    msg.setSource(51986U);
    msg.setSourceEntity(211U);
    msg.setDestination(57656U);
    msg.setDestinationEntity(148U);
    msg.x = 0.29830210046;
    msg.y = 0.824981690205;
    msg.z = 0.729377586179;

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
    msg.setTimeStamp(0.366558167683);
    msg.setSource(25189U);
    msg.setSourceEntity(116U);
    msg.setDestination(63329U);
    msg.setDestinationEntity(192U);
    msg.x = 0.414249410336;
    msg.y = 0.44501441153;
    msg.z = 0.677312248242;

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
    msg.setTimeStamp(0.822917734698);
    msg.setSource(51593U);
    msg.setSourceEntity(90U);
    msg.setDestination(59746U);
    msg.setDestinationEntity(153U);
    msg.timeout = 41067U;
    msg.lat = 0.782520653962;
    msg.lon = 0.56648796431;
    msg.z = 0.256447223786;
    msg.z_units = 55U;
    msg.amplitude = 0.591776312056;
    msg.pitch = 0.769507617448;
    msg.speed = 0.204492461172;
    msg.speed_units = 6U;
    msg.custom.assign("QUSXSDZWXIACRZHCSLARMURVKBSFIRLBKXJZMTOWVCQPQLNDFTCIBGJWYCTJKPEGFAFUKOHCEZEXSHBQSPTMYAAXGNIJVUGTAHFJSFGDHTBVGURVCURCTYMTLHIDAMPKEQIKDHSNCWDTQWIPNEPZXYTGVVXMYDEOMRHWWGOLYAKKVFVLQZECWYRJPIJIFOONXN");

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
    msg.setTimeStamp(0.38032944035);
    msg.setSource(5843U);
    msg.setSourceEntity(63U);
    msg.setDestination(6414U);
    msg.setDestinationEntity(251U);
    msg.timeout = 19070U;
    msg.lat = 0.423389610474;
    msg.lon = 0.501835612053;
    msg.z = 0.179293246413;
    msg.z_units = 29U;
    msg.amplitude = 0.755405644472;
    msg.pitch = 0.354531543903;
    msg.speed = 0.0481967156351;
    msg.speed_units = 148U;
    msg.custom.assign("KSHGONILUEVYOWJIQSVTRYWPRJYSABVTWBHMDKOFMMIPDCZIPRAUZYQSOWQWPDVYHQUGZUXFHDJEJLSQBZOUQULAZRFMCNPTNVNIULOSMPJBXDCTNXXGLCJRAYTZVMSCQBURFP");

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
    msg.setTimeStamp(0.282018889198);
    msg.setSource(18617U);
    msg.setSourceEntity(133U);
    msg.setDestination(27183U);
    msg.setDestinationEntity(14U);
    msg.timeout = 30571U;
    msg.lat = 0.206872601101;
    msg.lon = 0.174540408703;
    msg.z = 0.88940756014;
    msg.z_units = 185U;
    msg.amplitude = 0.987396865459;
    msg.pitch = 0.224223490917;
    msg.speed = 0.226486998567;
    msg.speed_units = 217U;
    msg.custom.assign("ARKDLJCHLLXZXEGCCNPHOBZHBHFNJAAYPEBRTDBCGPRSUG");

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
    msg.setTimeStamp(0.539831137197);
    msg.setSource(5970U);
    msg.setSourceEntity(169U);
    msg.setDestination(2198U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.34647225957);
    msg.setSource(53141U);
    msg.setSourceEntity(237U);
    msg.setDestination(62395U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.310164691954);
    msg.setSource(1591U);
    msg.setSourceEntity(213U);
    msg.setDestination(24365U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.881188896025);
    msg.setSource(17617U);
    msg.setSourceEntity(105U);
    msg.setDestination(55693U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.187923791548;
    msg.lon = 0.655682600847;
    msg.z = 0.378961606794;
    msg.z_units = 50U;
    msg.radius = 0.280624010045;
    msg.duration = 25171U;
    msg.speed = 0.468854413899;
    msg.speed_units = 20U;
    msg.custom.assign("QOTGKSCVATZWZABSYKMWYXRIYOCTAUREKZBMVSSMLNJFEVXDRQOLNNRTUQDLKEHIGK");

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
    msg.setTimeStamp(0.673819428476);
    msg.setSource(28208U);
    msg.setSourceEntity(238U);
    msg.setDestination(5855U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.459811246511;
    msg.lon = 0.0774125799247;
    msg.z = 0.0649725239155;
    msg.z_units = 214U;
    msg.radius = 0.321710482194;
    msg.duration = 30045U;
    msg.speed = 0.289064374491;
    msg.speed_units = 217U;
    msg.custom.assign("SOUHGUBFVLTEXCPBRPLSKOEGDYJFINXZACIMVGMGIRDBRJPOSUHHRDUVUYNPYOXYLAOWHHTRJFWDGHVIIRWJMSVETJQDNGFZNPIECMIOSYCLAFKLLLPOBAODABEB");

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
    msg.setTimeStamp(0.791586651336);
    msg.setSource(59436U);
    msg.setSourceEntity(200U);
    msg.setDestination(3063U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.301774564504;
    msg.lon = 0.213916880174;
    msg.z = 0.279761509414;
    msg.z_units = 56U;
    msg.radius = 0.0641015063667;
    msg.duration = 46835U;
    msg.speed = 0.20638897857;
    msg.speed_units = 118U;
    msg.custom.assign("YBZPHJNSSLZGYQQPQLBEAZAKVWFE");

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
    msg.setTimeStamp(0.291798333858);
    msg.setSource(26863U);
    msg.setSourceEntity(210U);
    msg.setDestination(48285U);
    msg.setDestinationEntity(170U);
    msg.timeout = 19357U;
    msg.flags = 196U;
    msg.lat = 0.64226150208;
    msg.lon = 0.476243360846;
    msg.start_z = 0.644916894424;
    msg.start_z_units = 236U;
    msg.end_z = 0.401586466439;
    msg.end_z_units = 121U;
    msg.radius = 0.164092353116;
    msg.speed = 0.759248471281;
    msg.speed_units = 186U;
    msg.custom.assign("AYQCNHEPSAOTZTQRANILPDXWESCHVYTMVKVCAGIXKRDWNXPKPBFHDAKYSLTMMBCJVEKYQFZURJOCRSGMJOTLTZBWNYXPXBJGMOGXONDYTQPKRQPXASMMXCUEHZ");

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
    msg.setTimeStamp(0.217549311608);
    msg.setSource(24245U);
    msg.setSourceEntity(5U);
    msg.setDestination(59501U);
    msg.setDestinationEntity(246U);
    msg.timeout = 62613U;
    msg.flags = 156U;
    msg.lat = 0.258767817091;
    msg.lon = 0.621424673578;
    msg.start_z = 0.437859749016;
    msg.start_z_units = 176U;
    msg.end_z = 0.955144456443;
    msg.end_z_units = 158U;
    msg.radius = 0.0530875074954;
    msg.speed = 0.59250124402;
    msg.speed_units = 224U;
    msg.custom.assign("EEBJRFNOSCXHCMTCDVVLVUMBLVZOPGDQYATWXDBNCHEKYVAJIEQGOQDMLHIYTSOWMMFPBJHRORNXOEARLCXNDUTXJTFOGWZXTLBHNYGRUUGKQMYZSHNVWG");

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
    msg.setTimeStamp(0.368428593461);
    msg.setSource(46682U);
    msg.setSourceEntity(172U);
    msg.setDestination(20155U);
    msg.setDestinationEntity(44U);
    msg.timeout = 14538U;
    msg.flags = 246U;
    msg.lat = 0.640758303669;
    msg.lon = 0.265065516513;
    msg.start_z = 0.191187477693;
    msg.start_z_units = 213U;
    msg.end_z = 0.0836035475214;
    msg.end_z_units = 96U;
    msg.radius = 0.484887969347;
    msg.speed = 0.932061447086;
    msg.speed_units = 53U;
    msg.custom.assign("BWKARKJIHGJPPMQSXHTUWTRXUVLUZOKOXAWNINHEUJCIYPPQFAERTSAOQOGCGMVVFLNDWQQEIIOVBRCVHZGCUGNFFEWCNHUBEGESDKEJQWDLDHACYKGKNBFJMBPQUNVJANAMSUUTWTZBOIQIIDJTPXUXOYRZXJWRCZTBHZVAORTHZGYOWBQYCSDKRKMGDZIRSDEFRPBYWVCLLYKLXAZTMEMDMMFGHKLSAFDFYYZLXXLVNSYPTSVJOHJQLPFSB");

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
    msg.setTimeStamp(0.932794340327);
    msg.setSource(37279U);
    msg.setSourceEntity(19U);
    msg.setDestination(42578U);
    msg.setDestinationEntity(252U);
    msg.timeout = 59865U;
    msg.lat = 0.859825973526;
    msg.lon = 0.997254602271;
    msg.z = 0.756058135189;
    msg.z_units = 190U;
    msg.speed = 0.0488189162986;
    msg.speed_units = 105U;
    msg.custom.assign("NXLTLJCSZAKRGCKSPSNPZSBKULIZODGMZQAZIGXNFDIOVULTFRCVFOOCMEDKHGWFWSQCIQPQRFVPKJPJSYMRYDOBLWAXPUULRHPOBKQDYDTEIOONNPTTBYAC");

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
    msg.setTimeStamp(0.614763021219);
    msg.setSource(48352U);
    msg.setSourceEntity(136U);
    msg.setDestination(44269U);
    msg.setDestinationEntity(138U);
    msg.timeout = 6987U;
    msg.lat = 0.268273042354;
    msg.lon = 0.48443611683;
    msg.z = 0.395778931096;
    msg.z_units = 8U;
    msg.speed = 0.267570394893;
    msg.speed_units = 134U;
    msg.custom.assign("PWVUFUHPWKZPZWHPHLNYXXKLBCEBGQFKWMCVNYKHMADEVSIBJDMVPCSAMJRKUOLPLNYXDYBFQCGPVNLRPRAORTZHVCJBJKAOJRGDFAZNUTDFSSVXHRWFQGHAYHP");

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
    msg.setTimeStamp(0.715005120645);
    msg.setSource(10320U);
    msg.setSourceEntity(37U);
    msg.setDestination(45335U);
    msg.setDestinationEntity(139U);
    msg.timeout = 12946U;
    msg.lat = 0.697447434238;
    msg.lon = 0.939457935358;
    msg.z = 0.976191815103;
    msg.z_units = 83U;
    msg.speed = 0.371803552784;
    msg.speed_units = 250U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.115186632519;
    tmp_msg_0.y = 0.979218917025;
    tmp_msg_0.z = 0.367665804923;
    tmp_msg_0.t = 0.248174653544;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PRXAWOKDJFOUSAHYYOHZLVXIVLGHCLVSMXQESFKTMAFLJPBITMQRZSQAUCKGNJEWGJWDHCQQHQEOQRNXFUBYABAYIXQEXY");

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
    msg.setTimeStamp(0.425922684069);
    msg.setSource(56001U);
    msg.setSourceEntity(248U);
    msg.setDestination(62498U);
    msg.setDestinationEntity(247U);
    msg.x = 0.398203294809;
    msg.y = 0.510897537308;
    msg.z = 0.0131683379484;
    msg.t = 0.725029580809;

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
    msg.setTimeStamp(0.696555449047);
    msg.setSource(12537U);
    msg.setSourceEntity(156U);
    msg.setDestination(13285U);
    msg.setDestinationEntity(110U);
    msg.x = 0.978761076977;
    msg.y = 0.158537066525;
    msg.z = 0.562817865717;
    msg.t = 0.429216619279;

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
    msg.setTimeStamp(0.984301011694);
    msg.setSource(54692U);
    msg.setSourceEntity(226U);
    msg.setDestination(11711U);
    msg.setDestinationEntity(68U);
    msg.x = 0.959575893587;
    msg.y = 0.615680987824;
    msg.z = 0.997001132333;
    msg.t = 0.0541237604235;

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
    msg.setTimeStamp(0.0711772464776);
    msg.setSource(22669U);
    msg.setSourceEntity(238U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(70U);
    msg.timeout = 39180U;
    msg.name.assign("IEWBQQEWHAAFKRSXRBWFCSJXUQSIGHOETGGQLNRYMZJKBLZDRIILCTEVPFIBEHAGZYSUCHTIALPW");
    msg.custom.assign("FTHDMNWPSHAZRYRKQFQIEEKXASTCECWXLITLLPDHSKQIGRCGLSIGUBBPQMYMKHAZJGADMBQKVCXZSIZBTOYWNYAHKHVRYBWFFUHTJBPGNOFCVOFYJVVWXLLUNGHEEQASRJNVYZUXWHMUJVDWIDAE");

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
    msg.setTimeStamp(0.0582724207437);
    msg.setSource(55130U);
    msg.setSourceEntity(124U);
    msg.setDestination(15398U);
    msg.setDestinationEntity(124U);
    msg.timeout = 11504U;
    msg.name.assign("HDZBENQHSSFAXPXQRREWBLMGDITQDWBNWTPVUKMVMSIZPLOFHFLXSOHNSLYIOHUGNHWJMAEBAXHTPAIWZNWJDNMNYZNIZYPXIHJOXOVKWOUCSCSCURFSEZEQYZGGIBS");
    msg.custom.assign("TGONFMSMAMLDPCGJCIVKZLUOMCDBYGKTHQDTFKEFJEOEOAKVRFJWJWX");

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
    msg.setTimeStamp(0.382300268453);
    msg.setSource(5007U);
    msg.setSourceEntity(33U);
    msg.setDestination(39974U);
    msg.setDestinationEntity(37U);
    msg.timeout = 6042U;
    msg.name.assign("BEBOAKEVVUJCBXASODHYRFBETUPKMDRZRJXYDWUCBNIXTMYDZRJTVQMLMMZDHINYGZARORNYCWWEFULDNAOVLOIWBLFFGNNBQBSGQUSHTOJSKKAHTVEQHFSBQJDFSAUIWWKMYSP");
    msg.custom.assign("NCSZFLIDBUXSRTKFBPTUIMWDCRYWVPPOKFROSJSCCPBBODELRLEZIISHZONQMJYAQTQMBWIYEHJANUWQGKVBRDUUUHACXQLWRTGEVNCTWU");

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
    msg.setTimeStamp(0.967484723777);
    msg.setSource(4268U);
    msg.setSourceEntity(190U);
    msg.setDestination(55683U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.430273487;
    msg.lon = 0.75444015967;
    msg.z = 0.78039852263;
    msg.z_units = 198U;
    msg.speed = 0.00709020961092;
    msg.speed_units = 151U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.785385339573;
    tmp_msg_0.y = 0.86541364505;
    tmp_msg_0.z = 0.627679117794;
    tmp_msg_0.t = 0.922854696648;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.487956594782;
    msg.custom.assign("AZUICDRUHFRFBNATFQQGVIFKMGQPWYIVJSCVXFAMCDYYPUSBQVZISXXRHCWBLAFMPPXKSEEMKQTLHRMJYLCQGYQKGFYXJJBDKCNZTYEDQ");

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
    msg.setTimeStamp(0.635258929881);
    msg.setSource(18719U);
    msg.setSourceEntity(124U);
    msg.setDestination(60967U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.732294831023;
    msg.lon = 0.00849108094595;
    msg.z = 0.994098008926;
    msg.z_units = 49U;
    msg.speed = 0.557956221787;
    msg.speed_units = 212U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.320529346602;
    tmp_msg_0.y = 0.420856836738;
    tmp_msg_0.z = 0.0347756393562;
    tmp_msg_0.t = 0.84449466645;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 56019U;
    tmp_msg_1.off_x = 0.838134045308;
    tmp_msg_1.off_y = 0.970113437491;
    tmp_msg_1.off_z = 0.209004729612;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.657992800555;
    msg.custom.assign("EHBMGHVTARBOCYL");

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
    msg.setTimeStamp(0.420672412015);
    msg.setSource(30421U);
    msg.setSourceEntity(153U);
    msg.setDestination(21315U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.397072148399;
    msg.lon = 0.275383723639;
    msg.z = 0.262044416036;
    msg.z_units = 95U;
    msg.speed = 0.184196052742;
    msg.speed_units = 102U;
    msg.start_time = 0.392544855249;
    msg.custom.assign("BXBZVMNPZOFNMBUCWCZMWEOVHTBYNTMKJWOCIITDARPLZJNPSEJKAIEMHGDKMERLOUQSN");

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
    msg.setTimeStamp(0.0851877706383);
    msg.setSource(41302U);
    msg.setSourceEntity(121U);
    msg.setDestination(64091U);
    msg.setDestinationEntity(134U);
    msg.vid = 25364U;
    msg.off_x = 0.712289069603;
    msg.off_y = 0.989606485336;
    msg.off_z = 0.693292304536;

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
    msg.setTimeStamp(0.788684725153);
    msg.setSource(5329U);
    msg.setSourceEntity(215U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(38U);
    msg.vid = 32152U;
    msg.off_x = 0.0743501291586;
    msg.off_y = 0.869045340556;
    msg.off_z = 0.87618295797;

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
    msg.setTimeStamp(0.397046166719);
    msg.setSource(13290U);
    msg.setSourceEntity(150U);
    msg.setDestination(7488U);
    msg.setDestinationEntity(210U);
    msg.vid = 13194U;
    msg.off_x = 0.170558226297;
    msg.off_y = 0.173337436876;
    msg.off_z = 0.4992062325;

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
    msg.setTimeStamp(0.117929650773);
    msg.setSource(6952U);
    msg.setSourceEntity(59U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.99411149149);
    msg.setSource(2209U);
    msg.setSourceEntity(137U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.278478481135);
    msg.setSource(44757U);
    msg.setSourceEntity(83U);
    msg.setDestination(47628U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.982570944947);
    msg.setSource(19589U);
    msg.setSourceEntity(254U);
    msg.setDestination(4690U);
    msg.setDestinationEntity(222U);
    msg.mid = 14595U;

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
    msg.setTimeStamp(0.933138656091);
    msg.setSource(26318U);
    msg.setSourceEntity(239U);
    msg.setDestination(9845U);
    msg.setDestinationEntity(46U);
    msg.mid = 18846U;

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
    msg.setTimeStamp(0.46969916338);
    msg.setSource(32362U);
    msg.setSourceEntity(139U);
    msg.setDestination(56566U);
    msg.setDestinationEntity(204U);
    msg.mid = 27423U;

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
    msg.setTimeStamp(0.211378044517);
    msg.setSource(56627U);
    msg.setSourceEntity(220U);
    msg.setDestination(25731U);
    msg.setDestinationEntity(68U);
    msg.state = 76U;
    msg.eta = 28367U;
    msg.info.assign("HGMTQELIIAPRUALXRMPBTHSCZDMSYZQSTPGESUUEVEFTOVDBCPREMLLZKMKXSNJCCMFDKQBTKJYDFDDYBZCODBWAAGTXWSZBVRKPYYJAFBCZGJOKNHRFVWYQGTJYOJINWOPOEVUHXRNJILVPGRCJAQJWFXUIHWQHFVNUIWLRDESGEDVHNKXFMTOVCRWGFRTKSZPPOAQBBAHJQOWUXECYIP");

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
    msg.setTimeStamp(0.573079061843);
    msg.setSource(22652U);
    msg.setSourceEntity(245U);
    msg.setDestination(51279U);
    msg.setDestinationEntity(146U);
    msg.state = 30U;
    msg.eta = 45830U;
    msg.info.assign("UHTAMQLVLWMWBNCPFLXMOIPLGCJCJWAABVEXXXUETPOHNYJUDUWXYROJFSNLRCFZDOONPAYVDHWNNWJIXZQBEZAWJRHPUOKFEEQKOSKMHVPKZRNDBRTEYIQKTHADHIQVJSJVCTAFVNT");

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
    msg.setTimeStamp(0.487895963818);
    msg.setSource(44717U);
    msg.setSourceEntity(162U);
    msg.setDestination(42313U);
    msg.setDestinationEntity(193U);
    msg.state = 117U;
    msg.eta = 1508U;
    msg.info.assign("VGZJWRKSAM");

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
    msg.setTimeStamp(0.418846971518);
    msg.setSource(44177U);
    msg.setSourceEntity(116U);
    msg.setDestination(17620U);
    msg.setDestinationEntity(218U);
    msg.system = 37828U;
    msg.duration = 45819U;
    msg.speed = 0.236573993347;
    msg.speed_units = 167U;
    msg.x = 0.900586004772;
    msg.y = 0.972594296111;
    msg.z = 0.657460970917;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.794179287818);
    msg.setSource(52303U);
    msg.setSourceEntity(232U);
    msg.setDestination(5418U);
    msg.setDestinationEntity(97U);
    msg.system = 42715U;
    msg.duration = 30133U;
    msg.speed = 0.388000962273;
    msg.speed_units = 226U;
    msg.x = 0.88607464353;
    msg.y = 0.851302916272;
    msg.z = 0.693468678269;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.679864727116);
    msg.setSource(56377U);
    msg.setSourceEntity(229U);
    msg.setDestination(41589U);
    msg.setDestinationEntity(185U);
    msg.system = 23374U;
    msg.duration = 20723U;
    msg.speed = 0.91005571917;
    msg.speed_units = 159U;
    msg.x = 0.753762155721;
    msg.y = 0.0992247299178;
    msg.z = 0.99162859924;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.0164863238452);
    msg.setSource(49522U);
    msg.setSourceEntity(61U);
    msg.setDestination(50740U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.576691266674;
    msg.lon = 0.534522445052;
    msg.speed = 0.819319698315;
    msg.speed_units = 106U;
    msg.duration = 9156U;
    msg.sys_a = 51921U;
    msg.sys_b = 23188U;
    msg.move_threshold = 0.76821223805;

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
    msg.setTimeStamp(0.285795027849);
    msg.setSource(36016U);
    msg.setSourceEntity(109U);
    msg.setDestination(47335U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.144811902485;
    msg.lon = 0.709348165089;
    msg.speed = 0.8053274191;
    msg.speed_units = 241U;
    msg.duration = 5220U;
    msg.sys_a = 55364U;
    msg.sys_b = 1854U;
    msg.move_threshold = 0.975008368562;

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
    msg.setTimeStamp(0.568870986581);
    msg.setSource(51520U);
    msg.setSourceEntity(27U);
    msg.setDestination(55377U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.888310239429;
    msg.lon = 0.693539618986;
    msg.speed = 0.0431567927973;
    msg.speed_units = 229U;
    msg.duration = 23414U;
    msg.sys_a = 35495U;
    msg.sys_b = 14389U;
    msg.move_threshold = 0.165819644742;

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
    msg.setTimeStamp(0.871711301058);
    msg.setSource(37629U);
    msg.setSourceEntity(247U);
    msg.setDestination(32665U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.368139172311;
    msg.lon = 0.578684823336;
    msg.z = 0.588191370863;
    msg.z_units = 80U;
    msg.speed = 0.756696364269;
    msg.speed_units = 168U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.036815551015;
    tmp_msg_0.lon = 0.985432615937;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UNTDALYLVCVZSDXFEGUPEZOUOESPPBMEWQBTOUTTGILDFAVNAICYEKQRCVQRUOZBFJWZPQWZAHDVCHHHRSHNKPH");

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
    msg.setTimeStamp(0.440905817726);
    msg.setSource(228U);
    msg.setSourceEntity(112U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.0822985847548;
    msg.lon = 0.35174606992;
    msg.z = 0.736332595121;
    msg.z_units = 26U;
    msg.speed = 0.568274101694;
    msg.speed_units = 55U;
    msg.custom.assign("POOSUIYTGPWJZZNUYCXTFFWVAICTBZODNMYUKFBOPASEEDLRPYDQBWVDBKXWAVDIJXCZTGPTXTCXQDEHZBEJKKABRAGCISUBSUQTOIWILPLEWMCHAJNDYPARHHCTQMFEXKNBMLIAZSXRBY");

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
    msg.setTimeStamp(0.679658106436);
    msg.setSource(64764U);
    msg.setSourceEntity(53U);
    msg.setDestination(28849U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.514546976199;
    msg.lon = 0.792001001522;
    msg.z = 0.310100937603;
    msg.z_units = 97U;
    msg.speed = 0.0671552742639;
    msg.speed_units = 140U;
    msg.custom.assign("EXARKTWOQYOIYMGLQUGTSIWJAEUIRZQHLNSUCWPBUMJWEDCJRJFMHQTXVOADKLMCHCNOENHKFRTCHZXDMTYVZGFAMCBLINPYDVZZMEEJNGPOXUCMJWAPAUALSGEADLRYBJXKXQDNKPVTWEZIRFMYNLGYWSSHWULMGEKTYWGYVXPKXAZVQOVQIZFINBLJLRSBAQCOFCBGRRSPDIKBGVQTFRHUPVYSCONTUBBIV");

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
    msg.setTimeStamp(0.950962549171);
    msg.setSource(180U);
    msg.setSourceEntity(78U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.410165964694;
    msg.lon = 0.877465653327;

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
    msg.setTimeStamp(0.48803107901);
    msg.setSource(60565U);
    msg.setSourceEntity(161U);
    msg.setDestination(47290U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.189862320817;
    msg.lon = 0.197091381519;

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
    msg.setTimeStamp(0.429821071512);
    msg.setSource(6230U);
    msg.setSourceEntity(211U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.506739984869;
    msg.lon = 0.670039944266;

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
    msg.setTimeStamp(0.175488328391);
    msg.setSource(57252U);
    msg.setSourceEntity(3U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(38U);
    msg.timeout = 42687U;
    msg.lat = 0.15250418898;
    msg.lon = 0.897729944977;
    msg.z = 0.803367900817;
    msg.z_units = 94U;
    msg.pitch = 0.376447298048;
    msg.amplitude = 0.557741610403;
    msg.duration = 29353U;
    msg.speed = 0.237215603155;
    msg.speed_units = 208U;
    msg.radius = 0.264347317032;
    msg.direction = 234U;
    msg.custom.assign("PIRYMQDIEXQNYGKWYUZLMNSHFFWLCHFEPJJJBBYSENJWUIUAHDKTSWYCNZEFTAXSVJRBQXHJMLPRDKRODZDNHZUSAYXMQTIVPSWPABCLMRIZQHCMXEVJTFSXTXVRWXWXYKRLCHEDUOOSYUKZVTBNIVTGZHOWBIGUMBKHBOVQOUIFPHBKPPASNNMACPFKLQCVEYOFIGQTOLJGZALYCQDUAWZWTLCNGGU");

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
    msg.setTimeStamp(0.897873930665);
    msg.setSource(10709U);
    msg.setSourceEntity(4U);
    msg.setDestination(23315U);
    msg.setDestinationEntity(230U);
    msg.timeout = 51275U;
    msg.lat = 0.32086291183;
    msg.lon = 0.611684421444;
    msg.z = 0.867963645219;
    msg.z_units = 148U;
    msg.pitch = 0.820644540635;
    msg.amplitude = 0.634067864899;
    msg.duration = 58060U;
    msg.speed = 0.170824132912;
    msg.speed_units = 49U;
    msg.radius = 0.132044154481;
    msg.direction = 14U;
    msg.custom.assign("XCDOUVEYHCQKQQPDGREYAPPJWNMIUQYSDEKOJXVGAMJUKRRLRZYVMRXHWIXQNAGOYFAWAXJTFSCCUMALYKWMXSHZEHQJBNPZBDEVLPVNMDWWIYMVGVETZMFZXQIZLGLPCEIYPFRCKYTLZQIQHHUJPIDZGZHEOFIPVCLOSZGTNVDAXBMCBNJASCBEKBWLEDLIXNTFSTOFUBAOYSRRGJHAKUF");

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
    msg.setTimeStamp(0.93998579844);
    msg.setSource(14578U);
    msg.setSourceEntity(61U);
    msg.setDestination(22474U);
    msg.setDestinationEntity(135U);
    msg.timeout = 29847U;
    msg.lat = 0.226386253206;
    msg.lon = 0.00394095429196;
    msg.z = 0.70893507833;
    msg.z_units = 102U;
    msg.pitch = 0.586405830375;
    msg.amplitude = 0.65902685078;
    msg.duration = 15634U;
    msg.speed = 0.0208116886881;
    msg.speed_units = 179U;
    msg.radius = 0.962635764888;
    msg.direction = 193U;
    msg.custom.assign("EDWXUQKSTAIFURDVRGE");

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
    msg.setTimeStamp(0.197305304623);
    msg.setSource(44599U);
    msg.setSourceEntity(161U);
    msg.setDestination(2555U);
    msg.setDestinationEntity(221U);
    msg.formation_name.assign("VVDDPUORMFWYDPCCVIPEVPUDLPTLRDHZMRDSNOASIUBRKDKLOWNQTMUUTGBXBUHKDZIJFVGKMOJFEFZNPUYXUWMXKFWGQVJZKOCNJBKWVANWGXZNJJXBSTBNBYFHHOLHKVRAYNCHIRIFXLSJMKQSJAJXEBGSYEAEWAMPLTMQFCLPBCTYCOQUKETEINZZRAYPPOHGTCMAT");
    msg.reference_frame = 176U;
    msg.custom.assign("OSKBNOJMXOCGNKSKWMCIPXUBYSWBCQGYNSJPLYFAQCVRUUSUBYYRMTKLZLAADDAEVAMADAGBBTDNMMUTGTQRVXRMDENQESRMPHKSYAVJUUMZWFHRLPEOHPDHWKTKENSFIEICIXHZXUNYYHGLPCIBYOLSKRHFZRGEDCFDTQBCQCQBXZYHJJLG");

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
    msg.setTimeStamp(0.785932809828);
    msg.setSource(57437U);
    msg.setSourceEntity(50U);
    msg.setDestination(39919U);
    msg.setDestinationEntity(160U);
    msg.formation_name.assign("CUOSCAJOMMDVUTKSDWMDXQXFBBBBUFGEYIFUIWRNV");
    msg.reference_frame = 100U;
    msg.custom.assign("WDNTMQYAFR");

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
    msg.setTimeStamp(0.281362349723);
    msg.setSource(22651U);
    msg.setSourceEntity(196U);
    msg.setDestination(6137U);
    msg.setDestinationEntity(5U);
    msg.formation_name.assign("ERNZRAWOOWFAZLULKPZSJZODFLKBWFQGGAPSWYAJKTOHPNZGBYBXMISMDPEHTRVEHEOPNQFO");
    msg.reference_frame = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10017U;
    tmp_msg_0.off_x = 0.814732142161;
    tmp_msg_0.off_y = 0.917532877991;
    tmp_msg_0.off_z = 0.581018217377;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RTAKKEEZYHAKNGQLMBPWP");

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
    msg.setTimeStamp(0.555833065162);
    msg.setSource(65027U);
    msg.setSourceEntity(0U);
    msg.setDestination(61246U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("XTMHJDCZFIGOLGJYPNCMNVUBBHLIPVHREVMKBFWPZKRRGCCIKXSGEEPAVCMTZOVUPQXATIXMINBYQKBIWXGQC");
    msg.formation_name.assign("LGVUDFFLRBXXYEXLFJVXTNFSQXUWVPGWPVGLFAVZSELRCQGKNMT");
    msg.plan_id.assign("IBDIQPOJXZLLHWLGYCOQUATORYVFFVCJEGOMJEHUYAPLDDVMTHWCKTYBSKPBJRQMASVGOBAUZAXQKBDZMINWWQHYGRWYFIIFDTGUZPYYWOMQD");
    msg.description.assign("OAHFWXAJHVWQRARYHNIXNPGVVWZHFNYBFYUQSEXKCAFHWGYMKZNCCGBOLOWHFURGTMJSAPTSBTIWFXIEJLEAPZDCQVPSHHTFIELKJW");
    msg.leader_speed = 0.572330679002;
    msg.leader_bank_lim = 0.517663377383;
    msg.pos_sim_err_lim = 0.246308135045;
    msg.pos_sim_err_wrn = 0.202689070897;
    msg.pos_sim_err_timeout = 53898U;
    msg.converg_max = 0.797611237398;
    msg.converg_timeout = 42342U;
    msg.comms_timeout = 28709U;
    msg.turb_lim = 0.134340154848;
    msg.custom.assign("KAWWYLLFQWOCPJTIEGXJWLVGLFUZCITUNCBPSKOJMJYONLUSCRMDQPEIBEXKOKJNCRUAYGKRZZAIFMDEZQNTFWQZVDNJUWPHNHHSEVHMIWSWXJMDQGMYOEDSDAKJACPK");

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
    msg.setTimeStamp(0.437783776162);
    msg.setSource(14676U);
    msg.setSourceEntity(16U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("IOHPDBUWWYRPGXQAYUEWVCZFHRKLUWSONAMJAXSROUISQMVJVQPNMNBZGHKQQPKKCTCEBHZTTTTWJXBVUMWUDSDERSBE");
    msg.formation_name.assign("IRPXOJJDWVISEBADTLEWIDDGUSYCGMGFHJDOJPUYVYMYFBZNBPWZOFXEVIPGHOWYAMXNONFXGSKPKBATIKOPOZFHDPULVQOTNLDKMCJMEAAWSDHRTUQKWWBQWCACRTVEDQGQKZBLHNYKRVMOTPSBGBTEVKXHSXZFLTRQXVLRUTGAIWIZJMVCJRUYSDFZRMSQFXQUHXBULUJQITAZHYNXCNMNERGQKOMYANZK");
    msg.plan_id.assign("MXHFPCDYPZKIOVERKCNMAMJCPUKJLWKDJMGDIYEJTFCYOXGVGDVXXQERGGZVTZOAJBQEYNAWNWLPTCDPUJCGKEMWFNFUEAIMFALPBHSCRUBCGYNLJQLSWCKRHMIQXFAFHDOLPNHMBLZZWSUBZXRQRWHDTUKRNVFTUBTYXKITVVMIQIKJXDFTXTQWEMOYEDASSOLUUHOZIJVVAQYHUQPPCZINZIQGVBWOBSHERZSGYWSSKHADYSPFNLLNERJBX");
    msg.description.assign("GLCOVZEGDSPMBREUDTPOBZKRFNDNUFFYVDIAVTADTAQRCCZUGIWMGHHSWBFOFMLSFYTBJGHCNKQPRGNYBIYQIHPZJQJYOKHWNYPVONEIFDESJHMXXRRKOKHQXVSIJOPLVPJWUIGTLQZKTSGDDISQSKWPXBOPLQRYMLKBVYWVWTQUJHRZDLEOUEECRJGQMHUUNKDVZEWAYJNA");
    msg.leader_speed = 0.4627250752;
    msg.leader_bank_lim = 0.981310379004;
    msg.pos_sim_err_lim = 0.0430607728648;
    msg.pos_sim_err_wrn = 0.692337061531;
    msg.pos_sim_err_timeout = 51672U;
    msg.converg_max = 0.971381539957;
    msg.converg_timeout = 60791U;
    msg.comms_timeout = 51445U;
    msg.turb_lim = 0.469197494869;
    msg.custom.assign("XUYVAHQRHKQMRIERXMPEIKWSFYGLRAGFFTOTCNOMAQQJAREVNYTCKXEGUOSOUDLLBIEFZDCWLXGJGPGIPWYJQVPUIGKYSRWLUZUHKPHHFOUALQDBNGOSWYSJACCWOZNQTHEFCEGPVCOHDKDKBTVJV");

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
    msg.setTimeStamp(0.0424723602805);
    msg.setSource(9736U);
    msg.setSourceEntity(27U);
    msg.setDestination(45756U);
    msg.setDestinationEntity(246U);
    msg.group_name.assign("RNLGFQQKTYTKWQCRSGIMRRVJBFLYKMBUKCOJRPBFHCPVIWXBUPHQTBPZUMNZSFMOJUAXETNYLRWQVGXKKNLYWQQWZTZ");
    msg.formation_name.assign("THTLADPSSRZAUSCNNEYZOHQDRMKOBJLXLNPDEQLBUWVPWVOLAWGJHSGPTPECLXEQZSUIHMHLIQSIJEZVHJALTPKUXCYMVTJGIREAIOMRRDPFPMJFCUKQKFFZJTLBNKFTUWXAKKURXOGWDAKAEKRLGQMYYYCFSRBFOQBIHMNYZYQVBMQVWCZZZGSQ");
    msg.plan_id.assign("PFSSDCJDJALRGAKITNVFQNXXEGYHRHOIBYTLVMWKGEHPDZCJUPWKXKEEJDSQOHYMUVZBRHUVJWTICMKPATSZYTXLODKBRNJOHFDKSPECQRNNUAMBYEIZRPCZCYTIYFWPNGQQRZSAITLXFJRGHXWBHWOPTOZARCUWMVZEVGJAGBKWOQYSLMJDEFKEQOXQPFMCFULDLFIQNVNSXLNSIRLYWDNJGSBHZ");
    msg.description.assign("WSBSZJIQDAHWSBVFIUBNFKABXTGAYOXZTACROVPRUKSKFMJMCUQETUKDWQIPIZPYPCOWHONDLURKNRXEUJYEEDTUVZIOPTVSRFLTNSTYIMHOQFLZXMQYZGLOOLJQBJSQFPCJUVLLNAIRFIGYGZYMDGHRWPCUPIMAGNJHVGKIFOGWPBTC");
    msg.leader_speed = 0.537536783793;
    msg.leader_bank_lim = 0.115902317832;
    msg.pos_sim_err_lim = 0.795371942411;
    msg.pos_sim_err_wrn = 0.0357487718104;
    msg.pos_sim_err_timeout = 27381U;
    msg.converg_max = 0.421199054474;
    msg.converg_timeout = 1448U;
    msg.comms_timeout = 27811U;
    msg.turb_lim = 0.452460598749;
    msg.custom.assign("GGMAZSUGARRPFAPEFYOUDVUCCYKANNZGMONLFVFGVMMKQYZHPHI");

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
    msg.setTimeStamp(0.893802469109);
    msg.setSource(60881U);
    msg.setSourceEntity(13U);
    msg.setDestination(57222U);
    msg.setDestinationEntity(56U);
    msg.control_src = 36842U;
    msg.control_ent = 113U;
    msg.timeout = 0.00156543871858;
    msg.loiter_radius = 0.654666210278;
    msg.altitude_interval = 0.617539231705;

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
    msg.setTimeStamp(0.652720863362);
    msg.setSource(3962U);
    msg.setSourceEntity(233U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(124U);
    msg.control_src = 41930U;
    msg.control_ent = 156U;
    msg.timeout = 0.119214369185;
    msg.loiter_radius = 0.449086904808;
    msg.altitude_interval = 0.586064599174;

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
    msg.setTimeStamp(0.285183807997);
    msg.setSource(20590U);
    msg.setSourceEntity(216U);
    msg.setDestination(10492U);
    msg.setDestinationEntity(140U);
    msg.control_src = 32239U;
    msg.control_ent = 234U;
    msg.timeout = 0.309076632944;
    msg.loiter_radius = 0.735677003984;
    msg.altitude_interval = 0.262026087413;

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
    msg.setTimeStamp(0.89593074752);
    msg.setSource(38499U);
    msg.setSourceEntity(70U);
    msg.setDestination(11493U);
    msg.setDestinationEntity(169U);
    msg.flags = 192U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.430556377046;
    tmp_msg_0.speed_units = 252U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0744285619838;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.878091633614;
    msg.lon = 0.925180328944;
    msg.radius = 0.467210662674;

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
    msg.setTimeStamp(0.429138628062);
    msg.setSource(43152U);
    msg.setSourceEntity(226U);
    msg.setDestination(18552U);
    msg.setDestinationEntity(110U);
    msg.flags = 229U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.506935675378;
    tmp_msg_0.speed_units = 111U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0413036268629;
    tmp_msg_1.z_units = 140U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.657561056008;
    msg.lon = 0.21632982231;
    msg.radius = 0.784639524231;

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
    msg.setTimeStamp(0.334071180617);
    msg.setSource(4776U);
    msg.setSourceEntity(58U);
    msg.setDestination(4306U);
    msg.setDestinationEntity(158U);
    msg.flags = 20U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.380457617727;
    tmp_msg_0.speed_units = 174U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0447211349549;
    tmp_msg_1.z_units = 54U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.971845177338;
    msg.lon = 0.620918618121;
    msg.radius = 0.428980664887;

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
    msg.setTimeStamp(0.666264865091);
    msg.setSource(1206U);
    msg.setSourceEntity(90U);
    msg.setDestination(14707U);
    msg.setDestinationEntity(54U);
    msg.control_src = 49448U;
    msg.control_ent = 125U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 81U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.248397328299;
    tmp_tmp_msg_0_0.speed_units = 19U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.858257834407;
    tmp_tmp_msg_0_1.z_units = 206U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.395624553939;
    tmp_msg_0.lon = 0.645990225198;
    tmp_msg_0.radius = 0.200924225019;
    msg.reference.set(tmp_msg_0);
    msg.state = 121U;
    msg.proximity = 121U;

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
    msg.setTimeStamp(0.0479809970815);
    msg.setSource(53688U);
    msg.setSourceEntity(232U);
    msg.setDestination(39288U);
    msg.setDestinationEntity(24U);
    msg.control_src = 35134U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.373707942599;
    tmp_tmp_msg_0_0.speed_units = 127U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.194609667185;
    tmp_tmp_msg_0_1.z_units = 62U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.572358256839;
    tmp_msg_0.lon = 0.593394377102;
    tmp_msg_0.radius = 0.596367968527;
    msg.reference.set(tmp_msg_0);
    msg.state = 117U;
    msg.proximity = 28U;

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
    msg.setTimeStamp(0.889908294397);
    msg.setSource(36341U);
    msg.setSourceEntity(5U);
    msg.setDestination(18883U);
    msg.setDestinationEntity(206U);
    msg.control_src = 31176U;
    msg.control_ent = 168U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 129U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0434438592789;
    tmp_tmp_msg_0_0.speed_units = 251U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.566595897314;
    tmp_tmp_msg_0_1.z_units = 218U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.949698176172;
    tmp_msg_0.lon = 0.00134779609186;
    tmp_msg_0.radius = 0.0275431831833;
    msg.reference.set(tmp_msg_0);
    msg.state = 131U;
    msg.proximity = 21U;

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
    msg.setTimeStamp(0.522440184755);
    msg.setSource(11425U);
    msg.setSourceEntity(56U);
    msg.setDestination(61975U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 179U;
    msg.error_count = 151U;
    msg.error_ents.assign("EXPWMUSDTLNDKGJAUFXMKWCJTHOUNPYRXEOUGBXLRXFERRLKAPPYHYBBEJETDVYXNXQVUSSJFBFFEPTU");
    msg.maneuver_type = 10175U;
    msg.maneuver_stime = 0.106359882019;
    msg.maneuver_eta = 50328U;
    msg.control_loops = 635586435U;
    msg.flags = 50U;
    msg.last_error.assign("ZAESCLKHPXECCAJZVAVOCSTDAYVMENOCDVUXIKHEGKBAPVBCUOTKDHXJS");
    msg.last_error_time = 0.00445959383567;

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
    msg.setTimeStamp(0.228948461882);
    msg.setSource(48544U);
    msg.setSourceEntity(199U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(51U);
    msg.op_mode = 40U;
    msg.error_count = 59U;
    msg.error_ents.assign("RVLOCGEFYNSWVOAMJMOYKGYEUVPQGEOPUQCPJLBECIUAWLUGNRNLWQBNPUMVQAPTBWVSXBSJTWXXUASFAVELYIDAPWHXYQGZFJRELSKXKTYEZTVZJCCFHKMUDIFXNHSTFUCGCZDRDIDGQHZOKXSNMQFSFKZTDXWNNRUMRTHQFCDDMPVYAJXTZZZA");
    msg.maneuver_type = 14915U;
    msg.maneuver_stime = 0.199790025731;
    msg.maneuver_eta = 2592U;
    msg.control_loops = 431099209U;
    msg.flags = 59U;
    msg.last_error.assign("QDASVYKBGTECYUCAARIZVAOEHINWVPUHSRBZFOPABWJMSDRRTCHENQPOFCWLFRTRIONEUYSBGJYTOXQTNWAOSGBHPXIVFYKWKXJMRYKNMTDKQIHSEKOPGENNMQMGCQSMGCSOUYWXIHXCZDRWHKGBUFUJLZFYSYAGXOLFZXAMDMHQDYVLPEELNJKUZJIKBS");
    msg.last_error_time = 0.812501620641;

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
    msg.setTimeStamp(0.387069758115);
    msg.setSource(25303U);
    msg.setSourceEntity(6U);
    msg.setDestination(13486U);
    msg.setDestinationEntity(90U);
    msg.op_mode = 56U;
    msg.error_count = 101U;
    msg.error_ents.assign("JAVAXHHWTGNULPUQUEQPGVSWDWOKFZEATMABPOXFQOFNMKSLOXLHXSCGKYLTXLDSZNXBYZRFDADMTEUFPQZZKVVFEKQUAEZGGPSEHZXPFOBQHMRUKJKXQHIJSRRDDBNZCTRULVJRMMKIBDQGIFGOQFRGIFLLEXJMUVGDWXUJCIKZOJYCTNIBIYTH");
    msg.maneuver_type = 19905U;
    msg.maneuver_stime = 0.241724147895;
    msg.maneuver_eta = 52717U;
    msg.control_loops = 1033332113U;
    msg.flags = 133U;
    msg.last_error.assign("HJDZZPOXRVBRNNSBWIWVTNTEVXGAJKQUJDESARSUXJDCZQTKFXKOFILBAJKHQOOXDZCNQMCKIHCFTRGPJFFDILWRGHEMMEAVRIRAALGQCIGMTFNUWMISSYLAMZPHMUWVX");
    msg.last_error_time = 0.919994043539;

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
    msg.setTimeStamp(0.701045072508);
    msg.setSource(18317U);
    msg.setSourceEntity(104U);
    msg.setDestination(51333U);
    msg.setDestinationEntity(99U);
    msg.type = 140U;
    msg.request_id = 51546U;
    msg.command = 212U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 30376U;
    tmp_msg_0.name.assign("HRGVBLWGVTHTQKIUKW");
    tmp_msg_0.custom.assign("JDHHLZDIWOZWSZXWWYTKQHRZGLEMCADZPVPWLPUOZBIKQLRMOTQJWXACNVEMYHEWGBNSMYVBZQCUXWLTTKHNAMSNTAMGLIUKTBGVUSIPZOOKUKNICFGDRCBOQZYAKSEQVXARGVLYFHNVXSNYADIT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50549U;
    msg.info.assign("EMNKLEDVWXNYJCLXWJTUFBIKNPRMXRQZXMIALZZMEUAZTWFEWFSVBYKQVDUUXHTCTBLPIZDPLNJLRHCCNOEYEIIFEZKGMQIBDWWJEAZVBMYMTPJAQVFPUKCDXCGGQZCTYFRAYFNVTSCAEIRAQGSQYRDVOTVMWXXHYGFKVSJJHPUKLNNOIOHBXKPLNSFTDHSPKHPQGXDHUNIFUWDVCQWJBMYKRY");

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
    msg.setTimeStamp(0.672173336535);
    msg.setSource(36179U);
    msg.setSourceEntity(8U);
    msg.setDestination(5680U);
    msg.setDestinationEntity(103U);
    msg.type = 6U;
    msg.request_id = 5266U;
    msg.command = 222U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.501591550219;
    tmp_msg_0.lon = 0.88855163332;
    tmp_msg_0.z = 0.947789207815;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.speed = 0.113919335478;
    tmp_msg_0.speed_units = 155U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.700332801381;
    tmp_tmp_msg_0_0.y = 0.957584310992;
    tmp_tmp_msg_0_0.z = 0.936357670164;
    tmp_tmp_msg_0_0.t = 0.844478140449;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.226085042907;
    tmp_msg_0.custom.assign("BHMYXJYQOTPIOTPEATRHVXMFCFJUSVIIQALQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40911U;
    msg.info.assign("PVGQGTSNZHEWMQMPSFUWEMYPFUICHSHEZHHQCALJEJNJNVCFNZJQBC");

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
    msg.setTimeStamp(0.37670178085);
    msg.setSource(51361U);
    msg.setSourceEntity(182U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(48U);
    msg.type = 132U;
    msg.request_id = 31393U;
    msg.command = 153U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.574072720089;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 58597U;
    tmp_msg_0.custom.assign("WGBJOMEFBEZINSQUSDIVAZFNHHOTWHVAWSMSIJTKPLPPLQETSILEOODZDKEXWUEVJFBTFQSFHGPJQBVWJTNAQTGQIZVF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55746U;
    msg.info.assign("WKNILDBPROPGPFFZAIYGUBATKWTODYFLAPNALJZECVILZDGKPIWTEVOZVYLHAKMPSFJZMJCHJCTQXXXWRIZICREBHOKEOSLJOVXNMDNFMVUQG");

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
    msg.setTimeStamp(0.740479839361);
    msg.setSource(13530U);
    msg.setSourceEntity(226U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(168U);
    msg.command = 220U;
    msg.entities.assign("VKIOQFETSNLCLZDLVJPBGKYIABCBOGQSPNQIVZRULBMEHMTYXWKRHWIEBVQNOPOEVFJTYLDNXCUNIMMTJGUGBYXRTAFPAUSIWHQTKFDIZBJAMVSGXFEYDSFJAJKDRYXWZMDOCERXWFOAJWP");

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
    msg.setTimeStamp(0.394896934461);
    msg.setSource(42548U);
    msg.setSourceEntity(54U);
    msg.setDestination(12886U);
    msg.setDestinationEntity(192U);
    msg.command = 8U;
    msg.entities.assign("JYRYDPBGXBMKMYJIAASZFSSQMHXKRCOETGDASBELSZBTHUJQMFYSHZVPIHOAWUVDRDCIGNNXXKXUGQLGTWVRCCTXBDWJXYTWNZWRJOVLPZNFNOYU");

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
    msg.setTimeStamp(0.00341261848103);
    msg.setSource(46251U);
    msg.setSourceEntity(22U);
    msg.setDestination(2651U);
    msg.setDestinationEntity(196U);
    msg.command = 53U;
    msg.entities.assign("VTPBNMZJNICBIVUFLYQREJNQKQOYXUPEZHYOXAAFERSCKWFGIPLFAUBTHHYM");

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
    msg.setTimeStamp(0.244724760872);
    msg.setSource(17566U);
    msg.setSourceEntity(3U);
    msg.setDestination(11980U);
    msg.setDestinationEntity(102U);
    msg.mcount = 252U;
    msg.mnames.assign("URWMWVIMYBOBV");
    msg.ecount = 4U;
    msg.enames.assign("MDFOHELYCULMVVCWIMOSJQNRVVWTJOYZVXANWCSSDVNVDIXGLDIEYESGIKWVXIZEZOKPQKPIHXAXJBJWQIGGXSENFCIILUBNZH");
    msg.ccount = 196U;
    msg.cnames.assign("DIAMKGBTNOLORQZBKLPYFZWFKXHGEXPERLVQLNSHOYAPOLFLOVWQJHVFHSWUCUSIQVAYWZNXRARZYDMKMHXXVWZIHJDVZXFTUGDRQTTICDOQSWRXBETRYAZKKYRODJCBYEUTLDFWUNGTHACGGBBDCGFJPKFNGVIPBQYCNLBERMIEOSBSC");
    msg.last_error.assign("GZCYVHPHKOVTFRRUFBEZKSVLUEBBFOMGVQQSVJITLAHQBTBTENDCWTUSGZQAQLVVQPABIXLJZUDSHMVBIJXKC");
    msg.last_error_time = 0.656310027649;

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
    msg.setTimeStamp(0.293722044824);
    msg.setSource(36568U);
    msg.setSourceEntity(134U);
    msg.setDestination(52240U);
    msg.setDestinationEntity(107U);
    msg.mcount = 47U;
    msg.mnames.assign("RCCMEBKSYRCATGADBJJCXEJSERDDGFNJHZGIPPIVEPSUWNTDBMDPWYFTZWQQBLRXVVHVAHTQFIUQOGGJUOETFSYJVXDRGVAIBOVNNPOTYNNHFNMQZMHWIFPFKRJDJISDYXNITMDQFKCLWMUZWGLSXXCYNRUCWSBHIRLKWYUQCRGEWZOUKHBAKVXWQLOMEQBCSJZHEZXVBIHXONEECFLIMKLX");
    msg.ecount = 209U;
    msg.enames.assign("ORGJXEKWPMINUZZDCMQNJIVLSUVABSFKOQPYHFGMJYSPHVTHUDHTYNMHOXGXWVARVQTMMCBNAIUZXSIFZLJXCIZMTAJWBLQSZZEGVGOYDDYXYYRFVKVHNSKFKAHLXPEJWBUDDERPWQANANBUCWCOYGPJUODETUKBLTKZYO");
    msg.ccount = 140U;
    msg.cnames.assign("TCWHQVMUSPBVBUIAWKHUIBNLZHTVLLGMESHDOYWTKXJWLXOJXFJJCYJENRTPIFHRZQGNGHLXFFWCTKSZJPGNUOGAKNMEMWGAYIMIGYQYLDG");
    msg.last_error.assign("KDTEEASXCZXSAMCVDWGIYYMTDRWOAHRLBJLPDIMJACGBZFYPFTNNFXBRDLFACQLRZKWZKKZKTJZXQPFYOGJQVIVXWWHAUWFBYBAXSUOLRAVNBCBOBTVQSRUSOMFWSSCIQSJZXLYG");
    msg.last_error_time = 0.409895135971;

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
    msg.setTimeStamp(0.0261838658211);
    msg.setSource(18693U);
    msg.setSourceEntity(29U);
    msg.setDestination(35986U);
    msg.setDestinationEntity(4U);
    msg.mcount = 251U;
    msg.mnames.assign("UNLVBZOIBNMWLAESAFDGMLCFWAPCHCTGSLANQHI");
    msg.ecount = 39U;
    msg.enames.assign("MBMZNGLATWSUXZBSQAQJGOWMQENHTFPBSDMOAHAQE");
    msg.ccount = 159U;
    msg.cnames.assign("WCRWKJOVBDMM");
    msg.last_error.assign("VXJYVQEMQCQNGLMGEKPXOQRWOABTIFRXUAVJMSALMCGKCWPYADYIAKUJ");
    msg.last_error_time = 0.554036449179;

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
    msg.setTimeStamp(0.990267105499);
    msg.setSource(13810U);
    msg.setSourceEntity(64U);
    msg.setDestination(47920U);
    msg.setDestinationEntity(184U);
    msg.mask = 105U;
    msg.max_depth = 0.541258690135;
    msg.min_altitude = 0.702648877887;
    msg.max_altitude = 0.421287893602;
    msg.min_speed = 0.400027166634;
    msg.max_speed = 0.951178045996;
    msg.max_vrate = 0.900805677292;
    msg.lat = 0.0145570367174;
    msg.lon = 0.0162486163739;
    msg.orientation = 0.43566374909;
    msg.width = 0.241633109048;
    msg.length = 0.62928031522;

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
    msg.setTimeStamp(0.879487971747);
    msg.setSource(64951U);
    msg.setSourceEntity(159U);
    msg.setDestination(47229U);
    msg.setDestinationEntity(53U);
    msg.mask = 68U;
    msg.max_depth = 0.112228016694;
    msg.min_altitude = 0.26469814384;
    msg.max_altitude = 0.0934675618674;
    msg.min_speed = 0.782663381065;
    msg.max_speed = 0.622229715153;
    msg.max_vrate = 0.785949233387;
    msg.lat = 0.147172640794;
    msg.lon = 0.365050254043;
    msg.orientation = 0.162844919689;
    msg.width = 0.855150080915;
    msg.length = 0.329739379491;

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
    msg.setTimeStamp(0.38551637456);
    msg.setSource(6781U);
    msg.setSourceEntity(45U);
    msg.setDestination(63913U);
    msg.setDestinationEntity(197U);
    msg.mask = 219U;
    msg.max_depth = 0.0573180089221;
    msg.min_altitude = 0.84474048715;
    msg.max_altitude = 0.611962323227;
    msg.min_speed = 0.447457947205;
    msg.max_speed = 0.758218880911;
    msg.max_vrate = 0.181281731639;
    msg.lat = 0.567912397842;
    msg.lon = 0.279425466237;
    msg.orientation = 0.977897237063;
    msg.width = 0.191906870641;
    msg.length = 0.225147632849;

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
    msg.setTimeStamp(0.744367732674);
    msg.setSource(55503U);
    msg.setSourceEntity(209U);
    msg.setDestination(51765U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.439103075423);
    msg.setSource(33502U);
    msg.setSourceEntity(229U);
    msg.setDestination(15965U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.954316347239);
    msg.setSource(31711U);
    msg.setSourceEntity(101U);
    msg.setDestination(5061U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.658341387103);
    msg.setSource(33967U);
    msg.setSourceEntity(58U);
    msg.setDestination(27550U);
    msg.setDestinationEntity(234U);
    msg.duration = 12239U;

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
    msg.setTimeStamp(0.315343869261);
    msg.setSource(29738U);
    msg.setSourceEntity(28U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(31U);
    msg.duration = 54393U;

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
    msg.setTimeStamp(0.181399859006);
    msg.setSource(49956U);
    msg.setSourceEntity(15U);
    msg.setDestination(7008U);
    msg.setDestinationEntity(35U);
    msg.duration = 53581U;

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
    msg.setTimeStamp(0.449766902345);
    msg.setSource(16417U);
    msg.setSourceEntity(152U);
    msg.setDestination(12088U);
    msg.setDestinationEntity(105U);
    msg.enable = 0U;
    msg.mask = 2031008842U;
    msg.scope_ref = 3971883338U;

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
    msg.setTimeStamp(0.646421366178);
    msg.setSource(14850U);
    msg.setSourceEntity(93U);
    msg.setDestination(42967U);
    msg.setDestinationEntity(114U);
    msg.enable = 169U;
    msg.mask = 826267578U;
    msg.scope_ref = 4088340378U;

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
    msg.setTimeStamp(0.790014094737);
    msg.setSource(51771U);
    msg.setSourceEntity(251U);
    msg.setDestination(2527U);
    msg.setDestinationEntity(22U);
    msg.enable = 58U;
    msg.mask = 3530008224U;
    msg.scope_ref = 3530800363U;

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
    msg.setTimeStamp(0.266816885752);
    msg.setSource(10428U);
    msg.setSourceEntity(54U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(68U);
    msg.medium = 187U;

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
    msg.setTimeStamp(0.758773954247);
    msg.setSource(64814U);
    msg.setSourceEntity(122U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(199U);
    msg.medium = 185U;

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
    msg.setTimeStamp(0.092306365243);
    msg.setSource(55209U);
    msg.setSourceEntity(96U);
    msg.setDestination(32871U);
    msg.setDestinationEntity(131U);
    msg.medium = 11U;

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
    msg.setTimeStamp(0.74684635429);
    msg.setSource(53111U);
    msg.setSourceEntity(1U);
    msg.setDestination(3442U);
    msg.setDestinationEntity(66U);
    msg.value = 0.900151424968;
    msg.type = 5U;

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
    msg.setTimeStamp(0.0708791654128);
    msg.setSource(44995U);
    msg.setSourceEntity(52U);
    msg.setDestination(41288U);
    msg.setDestinationEntity(180U);
    msg.value = 0.35427041038;
    msg.type = 74U;

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
    msg.setTimeStamp(0.364198085415);
    msg.setSource(442U);
    msg.setSourceEntity(168U);
    msg.setDestination(9362U);
    msg.setDestinationEntity(155U);
    msg.value = 0.430439763733;
    msg.type = 108U;

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
    msg.setTimeStamp(0.051195641008);
    msg.setSource(46974U);
    msg.setSourceEntity(27U);
    msg.setDestination(63496U);
    msg.setDestinationEntity(140U);
    msg.possimerr = 0.556203325476;
    msg.converg = 0.721478071815;
    msg.turbulence = 0.121583571061;
    msg.possimmon = 168U;
    msg.commmon = 212U;
    msg.convergmon = 0U;

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
    msg.setTimeStamp(0.158770822082);
    msg.setSource(16662U);
    msg.setSourceEntity(201U);
    msg.setDestination(18647U);
    msg.setDestinationEntity(242U);
    msg.possimerr = 0.489877359197;
    msg.converg = 0.772420196192;
    msg.turbulence = 0.485783714563;
    msg.possimmon = 14U;
    msg.commmon = 216U;
    msg.convergmon = 104U;

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
    msg.setTimeStamp(0.731019479784);
    msg.setSource(29168U);
    msg.setSourceEntity(171U);
    msg.setDestination(11329U);
    msg.setDestinationEntity(114U);
    msg.possimerr = 0.617922065352;
    msg.converg = 0.189026662879;
    msg.turbulence = 0.600701249973;
    msg.possimmon = 131U;
    msg.commmon = 10U;
    msg.convergmon = 100U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.27302468267);
    msg.setSource(46619U);
    msg.setSourceEntity(7U);
    msg.setDestination(57740U);
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
    msg.setTimeStamp(0.806144170913);
    msg.setSource(2854U);
    msg.setSourceEntity(22U);
    msg.setDestination(39519U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.128787980373);
    msg.setSource(38025U);
    msg.setSourceEntity(100U);
    msg.setDestination(55260U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.897373948973);
    msg.setSource(20321U);
    msg.setSourceEntity(4U);
    msg.setDestination(41459U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("HDNBAJQTOKIOIGSDMMTITPXSIKZBXYEUDXUVKSAHNTERTBYREFCEDDLVJLZWN");
    msg.description.assign("DGTDVQYIGSFUQUZUCXMADKWPBYCAAMNLCZGVNHOCFOXFTMMNBABUYNRBEFXHVMLHOCXBPSUERHNIEKADSLKEGMYZFGREWQW");
    msg.vnamespace.assign("NIUAUUFIGQOMDTJOWFCOCNGUZUVIIDTMKDAAHWKDZHKQMPJKRBYZTGRSKNCGLSJYZZEAPGELWYELQTCLNHUTDTWMSW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HQIOTNZEERDFTDTXCWWKDTVWPOVDECCP");
    tmp_msg_0.value.assign("ZWTNFSZQOIKXBXZDJUVLUHWC");
    tmp_msg_0.type = 153U;
    tmp_msg_0.access = 177U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PNDVGQAIBDAWBZXLPIVSQQQQSQHQTCIYSIRMXZCUDAJEKVIZNMUBTJFWPKPFJZLHNRJYDZCGLJTNMBPWZEJXTGAUSDZMAFXNFYADMZOXYHBKRVMBOLYMOLKBNGSHUQCMUF");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CGOXIPTYCHSPYOJXWFHKGDHLUDEQZZAJKOLYSYAXRMATDGSQJCPNEHYTHDDUQZKCXWMKVKQIWGUEJVCURDZ");
    tmp_msg_1.dest_man.assign("SDWLBLMNDZGJRMEQUKZBIKDJSC");
    tmp_msg_1.conditions.assign("NZEQKJWJNWXF");
    IMC::VideoData tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 215U;
    tmp_tmp_msg_1_0.width = 9599U;
    tmp_tmp_msg_1_0.height = 27751U;
    tmp_tmp_msg_1_0.widthstep = 17402U;
    tmp_tmp_msg_1_0.channels = 228U;
    tmp_tmp_msg_1_0.depth = 233U;
    tmp_tmp_msg_1_0.finaldata = 92U;
    const char tmp_tmp_tmp_msg_1_0_0[] = {2, -111, 0, 30, 91, 89, 80, 15, -4, 120, 68, -107, -60, 118, -31, 25, 119, 125, -45, 1, -75, 107, -47, -73, -12, 11};
    tmp_tmp_msg_1_0.data.assign(tmp_tmp_tmp_msg_1_0_0, tmp_tmp_tmp_msg_1_0_0 + sizeof(tmp_tmp_tmp_msg_1_0_0));
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::PlanDBInformation tmp_msg_2;
    tmp_msg_2.plan_id.assign("XNQVSCRKSNVOAEISDQXCFCNRAIEMOKILYTVOHQI");
    tmp_msg_2.plan_size = 50678U;
    tmp_msg_2.change_time = 0.492239984714;
    tmp_msg_2.change_sid = 59720U;
    tmp_msg_2.change_sname.assign("LZBBMUJOXLCPEZYRIFMIFOTVMLDJPDWAKHOMHSVGGEJIGBHOUCWYVRPYNNETGRLZUILDSFYWBUUEALXAMQRNYZELJMKSWKNPJVTCEHRADCEDZOLQCFGJRCTQTSQPVKVKFWDDJUUZUAHHENXDAACCNBWISKPPFNIMCTRXLVXVFMAHWPRSKKXTZXXZSXTOJLFIBFOQVOIEJQZWAQOBHBYYFGKHQPDSNUMJWII");
    const char tmp_tmp_msg_2_0[] = {-39, -39, 120, 37, 86, -103, 1, 31, 102, 34, 19, 125, 55, -127, -58, -5, 84, -42, 96, 112, 108, 36, 112, -105, 97, 71, -12, 72, 56, -105, 81, 48, -6, 75, 52, 27, 95, 46, 14, 24, -31, 108, -71, -58, -58, -52, -47, -94, -73, 41, 7, -59, 64, 85, 58, -6, 119, -64, 12, 35, 52, -91, -87, 51, -80, -47, -125, 120, 79, -8, -60, 75, -78, -59, 122, 34, -93, -78, 43, -100, 41, -27, 108, 123, 88, 104, -100, -58, 93, -67, 70, 72};
    tmp_msg_2.md5.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.381777099854);
    msg.setSource(55498U);
    msg.setSourceEntity(219U);
    msg.setDestination(35049U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("DDVUAAHUQAVWWZKXPOLFZXPJJJMVYYECBRTCWURKNLJTOTFPJREDGCXXZVVOCFQNWIRKRMKOUEIFFCARGEUCBLNUNZEHQWJIHPZLDTBFFH");
    msg.description.assign("TWSTGBVHFLFUGHKSWHDXWSSVCMXALBZKKTJIDOJSVYQXVMBVPIPXGHKCTJXHHRIZOCLJYNEZOEDIUYPBMLEVSMQZWANSNPFNZRVWJEBGYKUIODFARJEWBLOKBTVQNUBGOIJKTKHCRZFZMREAUUDNNDYYDERTWJNKPAFSJAHCYZGEAVBIMYLZLCSOJWMRWXZMELCGQULQPIQPPVXAONUOOE");
    msg.vnamespace.assign("IMLQNWSFUOXZKZXYWVNGKIJFJZORVSEXLBGFXSQJGIRNPMSJGOTFVNUQQZVICWKFMESCHOROOHLAYCRALKEVPTWZUFVOYWZLDXEOMSILRTCCTXRTHEEAMETZGJUCDXBBWENQU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IPSJDIRYFFMLGXITABCUWEJVODTYQHJIAFVCJXATBSOCVGOPVGYHMJKBXRTTPGHTMTHZADZNZUEWZEAEDKOKFNWZJZQYGHKIRPIOPEGBZVSVMXMDFSGRWKXYQCFLPUIURIUAEOJMNFOKLLTZJMEYSADGQRLCXXHSFYHFOCEHNTNOSUDRTBCNPSPNAQOYWZNBCMNLWQBBNXQQQQIGAPVILWYCVJJKAUH");
    tmp_msg_0.value.assign("UAPBTLDQLLFXYEAGBWWRFFNPTPJKWTIFPHYSWBGVULCDBZIIJJAMNMPGDUMXNEWILTAGAANOWSXZBSZDMJTPOFYOBSZKYKHWALRFECCUCVVDJQTSIQFIKHXNJHKACXOVGMIZEHDPUPCXODZJHUCFROVPGNOKFTKWHSRYYVMVZUWAOXDUJOWGAMNRXYHYLRXITQMIRZJVQZ");
    tmp_msg_0.type = 2U;
    tmp_msg_0.access = 136U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VXZDKFLFPNZFLWEGJTUINLPFIUUMUPVWIEGVDBJSEXKBWUQPYIVFKXOPDJOEDKGVQYICNSFCHQMHDSQINYMPFZAEMRHJSWQMXXHGXRXZXCTRZJRWGOLSPWJNCFVRAEBCJJCUWIWGYYTFQSCTOMBLKICLLADYUZMIHASWOSVTIERXPYNDOUM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OIJQWKFJNAYCUMNSXJOYQEDEPYPYBQZSZZBHYRAYQDO");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 5677U;
    tmp_tmp_msg_1_0.flags = 12U;
    tmp_tmp_msg_1_0.lat = 0.363637771154;
    tmp_tmp_msg_1_0.lon = 0.81154118985;
    tmp_tmp_msg_1_0.start_z = 0.487833738862;
    tmp_tmp_msg_1_0.start_z_units = 133U;
    tmp_tmp_msg_1_0.end_z = 0.890756199242;
    tmp_tmp_msg_1_0.end_z_units = 135U;
    tmp_tmp_msg_1_0.radius = 0.164295667241;
    tmp_tmp_msg_1_0.speed = 0.753749988027;
    tmp_tmp_msg_1_0.speed_units = 197U;
    tmp_tmp_msg_1_0.custom.assign("WQQBKHPKLMLICBDHYNCUNJMHVABSRXFOOXTNHXCKSYMJGFUXAFRNVLMFMLRZNFUAPYMGDKMBEWTTEYHUHPXEKREGNXKSIYAGPRAPBPNEPHZBXTGAZOTZFQULCQEJHTCZFPDUBJVYWJQDDQQCHJGATOZWIDURCCOSILADBXDNVMGQEDESLFJRJKOQHOWRLDWOYYEQAGBUGSXBKVGYTVFXL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredSpeed tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.636217741154;
    tmp_tmp_msg_1_1.speed_units = 174U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::QueryEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("XDIHJGLTCCYMHAAAUVZQRDIJUMERWEOLZDJJPLEUGRMKERXYABUCBBTLEAHVOMZZWESGPYLAXIQNVEUYAOGIHPHUJIXWGITYVQMJVDSQXDSTPZQTSTGBUTKOONBOQZITSHLJNSWDLKKNSJNVKYRDPMFFYNVEEVROYIKWRYZOGPOXUJRF");
    tmp_msg_2.visibility.assign("PIIABYKQMADMAPBSBXAKODEIUUCNFZUGRNGVEEWRLZZHDSOG");
    tmp_msg_2.scope.assign("OJONDGXJHYNQMDEHHFTAWLXBEIOWLFIPTSZZBNDGCJYYPHTFUZKVRUZIZLUKUUMECOMDXZBSYYRLHVCENOWJRQWTFTGDJJPAGDAORCOBIAGXPMNEYNNPKCGUKVSLUYSCKNANPMDXKFSLEGKXWJIIIBQEMVRKIHVSGXRRSAJVCTUXHLQFBEABQFAYZQSOMWFFYGQJCXORDKUWWSVQTCI");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.326840241866);
    msg.setSource(16200U);
    msg.setSourceEntity(78U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("XGNSXXAKOZXZVUNUINQMEJSOBMQZRO");
    msg.description.assign("MFRQHTWUTHTKBEYBIDIOZIGSDZIJRQCHQAGXLJSQZXMEMXTNXYCWEJEPRDDDCKREZGTFBDNMQUVGPXJWAVWLVCSQEWUFIPLMZCVCTFIURPUXEZFKHQOAOYVHYUANKNSKFPQCPPOUVZUUGJLGHTOCHKDVVFQRAADAWXLMTFHSAJLIOKCYYJMBDP");
    msg.vnamespace.assign("LAHOIVPEFXYTPYXGLMJGCCJJTLKQURAQUNZOTWV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KHYJQKSEZXWSCZHCFJMOTAVULBKRAMYGVAJLQSESPFRNAFCZICDEKRCZDNRQDHLAPREYIDBQULTMYNYJBQLGHWKEBKZAYBYIOTJEGIEZPGHGVBLOMPWTSDMKTVIIRPEZWQTMZWFAUPNEIASRLMYLFGTUOAFTYJDCNHDPNFNPUXXGGRIVXQFDAORY");
    tmp_msg_0.value.assign("QLWEGIIWDFOKRTNXJXBLZVOUBIDOGUDOUYEHQDPGIZCCVCAPZTQSBPZSNNSTRIONYC");
    tmp_msg_0.type = 44U;
    tmp_msg_0.access = 98U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JUUUNWEMQMOTQCBQWZKJFCJOCOOMKMXLSKFAZGXKHINYAIXHWEJXCIKUYPNAPJMIAOQSVABGAHECSRIXZAVCWLQVYSPHEQKZHFHABRPJGNYBWTLRQRUFNGRVMGZRDVVWLDXJITOBYMLIDCTXEFUPYZQTZKNLKPVJCENUGTRUGYSHB");
    IMC::RawImage tmp_msg_1;
    tmp_msg_1.width = 59242U;
    tmp_msg_1.height = 11166U;
    tmp_msg_1.channels = 231U;
    tmp_msg_1.depth = 80U;
    const char tmp_tmp_msg_1_0[] = {-99, 46, 56, -93, 5, -82, -69, 71, -20, -47, 32, 29, 61, -88, -14, -124, 62, 67, -49, 115, 6, 54, -60, -55, -76, -116, 91, 40, 37, 83, -110, -96, 13, 58, 57, -52, 122, -5, -12, 110, -90, -58, 92, -11, 21, 67, -92, -22, -25, -1, -1, 74, 45, -123, 53, 79, 47, -119, 13, 30, -127, -92, 21, -63, 77, -86, 68, 5, -122, 102, 102, -99, 112, -95, 108, -58, 72, -24, -95, 86, 115, 39, 69, 17, 94, -31, -17, 80, -127, 5, -18, 73, -118, -20, -102, -108, 79, -43, 24, -1, 77, 67, -23, -125, 74, -44, 78, 113, -57, -54, -91, 50, 46, -100, 122, -35, -74, -17, -101, -45, 42, 15, -38, 51, -101, -40, 8, 62, 67, 87, 90, 82, 58, -126, -88, 10, 79, 23, 4, -92, 39, 26, 73, -27, -103, -9, -17, -94, 73, 40, -12, 6, -120, 42, 119, -30, -35, -108, 40, 96, 79, 33, 27, 10, -48, -78, 41, -17, 44, -86, -30, 22, -34, 126, 78, -35, -51, -67, -31, 109, -77, -2, 114, 68, -123, -75, -22, 44, 90, -31, 12, -106, -8, -31, 0, 74, 101, -31, 91, 56, -112, -111, 126, 112, 34, 90, -50, -69, 47, -20, -78, 50, 97, 42, 13, 24, -51, -84, -37, 111, 28, 4, 30, -2, 62, 110, 108, -70, 118, 47, 124, 121, 91, 28, 44, 61, -99, 96, 63};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.440820482603);
    msg.setSource(50834U);
    msg.setSourceEntity(200U);
    msg.setDestination(10950U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("XYYOIDXVNSZKHDJYSVPBZSQKDWJCEFBRLIPGDOKGRVQMOAHDBMKFXABMQAYUEWECLSMKUHUOXUUPZUKVPRALCGWITNIZOTXVLTHRXDXWELRGNJMUXLRFNIJBCDJTGDHBUOQRFQWFPMPYKVBSKLEQTEAHOBSFLRHAFNFUYECGWZTHOWWVKQTRRZCICZEGYYVNA");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 3755U;
    tmp_msg_0.lat = 0.750964842184;
    tmp_msg_0.lon = 0.816847073454;
    tmp_msg_0.z = 0.977415677092;
    tmp_msg_0.z_units = 222U;
    tmp_msg_0.amplitude = 0.0150229545581;
    tmp_msg_0.pitch = 0.846101671947;
    tmp_msg_0.speed = 0.697977949542;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.custom.assign("DICOKBITUCMSILHESAXRLZCYRGGNVAWJFLHBMCLCOMDKAKRZJMJHWEUYEZFNUNCVWIBPYWPPYGKZQAXXWVRXUNDNYOXQZXTRT");
    msg.data.set(tmp_msg_0);
    IMC::EmergencyControl tmp_msg_1;
    tmp_msg_1.command = 197U;
    IMC::PlanSpecification tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id.assign("TGCJYDFZPXDSEWKIZDDPHAHWOTWIADIVHRBYGZENRCNLGLXKWLESDOCMFVUXMWOFVTM");
    tmp_tmp_msg_1_0.description.assign("ILUCAXERLZYGWBTNKMOKBDOTVPBDUPWJQGWLKFLRVAHMPFZOZPGGZQZYHVGCKEZUXPNNAHWPXNUSMNXWGCRKVIEHBYCYUHTOQSTAFXPLYDXENICUST");
    tmp_tmp_msg_1_0.vnamespace.assign("GOGAJDBFXDO");
    IMC::PlanVariable tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("UCRCOLUBPCGQVGAKWGFYPTZAFOOOLAPCOICNIKIJDVAKBTJRNTKIFBXVMZBCPNRSQXZDLWKRZSVJHCYISUDLONXGKIQWZWWAHROUGJHUHSBJOVCDFEEDMDTGQUQAEMTTMYNWXHVHZNFRRNXYEBBESNCPYGHSPJJLFPRTTQXNVHJDJMSKMMVIVGXHLUJEZRFHBEOEREIWOUWYYA");
    tmp_tmp_tmp_msg_1_0_0.value.assign("MXBCHZIFMNBQNXKAEAVWEITUDXWXTQRHCCYVSNMGBIITCQZGCWSTIGWWNERVJDZEKPDRYXBEKKTHWIRPMRPJFLDHMJAFPAMLOTYDHTUIDUJCFZADVCZYSFUGLSPORUBTZRPCVPPHEOKYJPWUVAOAPQJXJDYMQHCWLRQTNDGVNQN");
    tmp_tmp_tmp_msg_1_0_0.type = 252U;
    tmp_tmp_tmp_msg_1_0_0.access = 92U;
    tmp_tmp_msg_1_0.variables.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_man_id.assign("TOBGFLLDNRXBICEECMPAKAWCPYHWZSLIUKBRUZXIMEPKTKRRZSMQXQPHNFTIIUGOTAGNIUJHDLXLRDBGFYRUSJXFZDSLLPWJAWTJNHGAYYHQVURRDDCIVPKHWOSYRVPUJNPZALJNVXKZYUCVQWCEBDWCAXTVIXVYNKELOJONMMMRATB");
    IMC::PlanTransition tmp_tmp_tmp_msg_1_0_1;
    tmp_tmp_tmp_msg_1_0_1.source_man.assign("FGRYEMPOCHBUMWNXOUTMPKEVAHKBQRTROSHYMRDNEKIVTYZJWKHDBSFUJGMTGDCZXNLVWVDNPJIPOMFLNWPD");
    tmp_tmp_tmp_msg_1_0_1.dest_man.assign("AVXTBCBQJPBOFDWXGKMOMFPVIPYJWADJSGOZUGFSEJCALIRCGYNRCLGKTLHBBOQBVPUJDIJMGWETCJLFDTIVVKRWHGYHERBLHIZAFFCUMAZWQRCXSSKSEEYSIXOLHTAWGFIDYIPNOPUYQOHITEPLGDXBHJABZNUJHAZRVNVDDZPVUFZOKTXMNZWXRCCRMAYLDOHPXTQMQYUQUNBVAKLVSEORKKM");
    tmp_tmp_tmp_msg_1_0_1.conditions.assign("WATSBHSRNIDCWDNZAQUWERTYVVVQMKKKWPQPKWTMANIORXIEHXTWILTJOUWHMVXPZAXCTACGFOJZRFRSUGBJKCAQCYZQWSDGIXNZAMRBUFPAJWTOGNQPFLHWEHYZSBHLHDDTLEHINQOEPNXGNOUVCLROGOETDUUJSONLFZZIXDBFXBVRLDEMIKZKIYXESNBTQYUVGAUGMMSCJ");
    tmp_tmp_msg_1_0.transitions.push_back(tmp_tmp_tmp_msg_1_0_1);
    tmp_msg_1.plan.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.166363664263);
    msg.setSource(27160U);
    msg.setSourceEntity(174U);
    msg.setDestination(43549U);
    msg.setDestinationEntity(56U);
    msg.maneuver_id.assign("TAGBGKQUEPQWJUHIUXKQYUQLXDNZCTYCZAJECGVNYMMCHMERBGBLZOXFIZEHAAFIXPVYKMSFWLCNHAPFIPGUJWAVUHTRSKNIVVFKZRCCGULBOZES");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("SRFDBPPIKQSROSAMBKYJACOPWJIEVEZJGQYNNESWJSKFJSGBRVDRCRXGHGZMUVWNFWKICVAXMHVNBAJGYPAXTLLDFEGXUHJGXPYORQTDOQQSQVBWDXMRYXSCGALKEBVDBBMNWDREQOXNHUTHPCZTFNCHAUQHINA");
    tmp_msg_0.reference_frame = 5U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 56627U;
    tmp_tmp_msg_0_0.off_x = 0.958696807661;
    tmp_tmp_msg_0_0.off_y = 0.572202863742;
    tmp_tmp_msg_0_0.off_z = 0.0823314969622;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OCJBXFAKOHQKZEWQRKILEKDYLHEBQJCWGDYRCYQWXMGZQBXSBAZANDOUFOFKFASQ");
    msg.data.set(tmp_msg_0);
    IMC::Target tmp_msg_1;
    tmp_msg_1.label.assign("DZWQULYJDOJCGYKOLJDKIBMKANCMUUXZFXRLPPXLEVSPKPTYOOHYMLASIRGOKQZIWQYSCEVFLLZFE");
    tmp_msg_1.lat = 0.535805148002;
    tmp_msg_1.lon = 0.618610722521;
    tmp_msg_1.z = 0.231375880118;
    tmp_msg_1.z_units = 46U;
    tmp_msg_1.cog = 0.613031464811;
    tmp_msg_1.sog = 0.316130258416;
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
    msg.setTimeStamp(0.682386953064);
    msg.setSource(42659U);
    msg.setSourceEntity(43U);
    msg.setDestination(27366U);
    msg.setDestinationEntity(128U);
    msg.maneuver_id.assign("EKXTLVFQYFCQERAGUYYDMGRQAKZVORBNJVHAYVJVFZVSIDPISECKYNPWXPJQQBHORBZXMRTSPKTIAPWGLTANQYXVONXTISUPJGEFDUZOMNPNCOKIMDYOCKUFMYDCBOMWZXUBEIDTFLXLIMTLNSPOMEEDHGTRHVJFXRKAEHEJEWAAWZWUVGIGHFLLTRMXCSCWAUZCKBHCLHJSBK");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 25671U;
    tmp_msg_0.custom.assign("VFZKCDYJLMNMXRCOFJWTHFRVYLMLLUQEDSNQFKALTRKRWKLLBGWENGTKJPAOTTYBDGGPHCIYLRWEWDNVTKBAFNIHASVTLVCIPZJERFJGYKCPRXHGYXSGEWVSGHZBQPMEQZASPSQZIKJOCOCXVOSHAZJOXEC");
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
    msg.setTimeStamp(0.454722246134);
    msg.setSource(29912U);
    msg.setSourceEntity(219U);
    msg.setDestination(19077U);
    msg.setDestinationEntity(57U);
    msg.source_man.assign("BCXTMDUUIQIVOHPXAUHDQFAXAIRMCBSBDLHMTIDEKZEVVIUKTGNOIFKAZFIMBQGYJNUZJLLXJRFGWAVWLTYSEAHVKOBREUSXEXCUQOUIOHYWMRFGHHANTPPQBVCSPVRWRXCJBAXMPNWKJHDVTIFJZXN");
    msg.dest_man.assign("VUFQJIPRUMLCNZSXMIPPHEIORKYZUSIOHTBJGOQOBHMJADQIHALFEEXHDMBNSJASFJTONDRKLXDRDPJVQAIXWWXAMGZS");
    msg.conditions.assign("VMPCOKQXEFFZLWQMZBBNIISRQYNACMVGOJQLIUAYZGLTPEDPHOTTQWSXMRQAYVNDOUSYFJRGAPWBZJXWZQGYDX");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 11U;
    tmp_msg_0.speed = 50210U;
    const char tmp_tmp_msg_0_0[] = {-4, -36, 42, -53, 61, -64, -14, 7, 70, -24, -26, -87, -104, -110, -126, 97, 23, -21, 78, 34, -119, 17, 118, -73, -10, 113, -88, 55, 61, 123, -124, -24, -3, 56, 56, -45, 101, 52, 30, 33, -7, -51, 77, -49, -51, 37, -1, -121, -5, 121, -15, -92, -110, 83, 55, 70, 120, 14, -124, 18, -41, -58, -107, -119, 104, 77, -4, 7, -122, 109, -94, -21, -93, -114, -115, -103, 59, 2, 52, 53, 18, -31, -18, -111, 70, -71, 34, 122, -52, 123, -61, -105, 24, -75, -54, -118, 22, -24, 82, 13, -123, -105, -119, -89, -119, 100, -12, 55, 118, 63, -4, 64, -7, 29, 49, 89, -5, -122, -118, 112, 111, 55, 90, -98, 81, -109, 125, -36, 35, -113, -70, -16, -29, 123, -11, -74, -82, -11, 111, 113, 59, -46, 102, 67, 104};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.577265655776);
    msg.setSource(46913U);
    msg.setSourceEntity(109U);
    msg.setDestination(44828U);
    msg.setDestinationEntity(243U);
    msg.source_man.assign("WSRAROGQCQHGPAZJAIUQIVJTUOLUD");
    msg.dest_man.assign("FTJNBBWLEASCGVWDKZWKJUXDRPSLDKMFKHEMJDNMPCWGBTDOCTSQBYRUNPAOAPEUVVEUKLICHMRYYHZPFXQYSNEWMHPFFHDPXWYEQFKNHVJORDYRCOIGRVMS");
    msg.conditions.assign("XZDCFWGYVTBZGYCIUYDOOV");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 138U;
    tmp_msg_0.speed_min = 0.211251182722;
    tmp_msg_0.speed_max = 0.766414792606;
    tmp_msg_0.long_accel = 0.554268495887;
    tmp_msg_0.alt_max_msl = 0.447682915813;
    tmp_msg_0.dive_fraction_max = 0.366923246362;
    tmp_msg_0.climb_fraction_max = 0.954651191913;
    tmp_msg_0.bank_max = 0.128131015474;
    tmp_msg_0.p_max = 0.320677976462;
    tmp_msg_0.pitch_min = 0.802091608497;
    tmp_msg_0.pitch_max = 0.646286762086;
    tmp_msg_0.q_max = 0.0974643303296;
    tmp_msg_0.g_min = 0.184717681843;
    tmp_msg_0.g_max = 0.139936892176;
    tmp_msg_0.g_lat_max = 0.638277630073;
    tmp_msg_0.rpm_min = 0.117852538255;
    tmp_msg_0.rpm_max = 0.877832469836;
    tmp_msg_0.rpm_rate_max = 0.961378131622;
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
    msg.setTimeStamp(0.789497054314);
    msg.setSource(44875U);
    msg.setSourceEntity(120U);
    msg.setDestination(5733U);
    msg.setDestinationEntity(36U);
    msg.source_man.assign("YKPWSHTRBUQTUHUETQGXUYEEVREKZAZGUFVHKJFFODJIYBOULMZODPTMVZFIJDSLRZHADMCWFJEIMIONDIWNJYQKNJLAEWDGPSPGRXQERLNVHXYJZUSGWKOLWAHHFYLIVGANSFDVVENYCBHGJVOWWSMBQAZJYKMMINMPFRQFHQDMUKCBZTVTCZIZDRGQPWXXKNNBIPAWQALMANLYXSPXUUKGK");
    msg.dest_man.assign("XDUHDOACLPWCFAKSFZYXPYPVWAELL");
    msg.conditions.assign("PSWUIDHHVXNTSDVREGBYCDEUGQNBVPVIIIKJDIQHHQYOUIHVQATVWDHKGLAENTMBTNYNYLWMBHSOCUDCBRZSTQPPZYQGAY");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.229710169065;
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
    msg.setTimeStamp(0.581468843432);
    msg.setSource(21260U);
    msg.setSourceEntity(253U);
    msg.setDestination(1760U);
    msg.setDestinationEntity(54U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TFRVJCAHMDAXHFUWFLIGSLPKZLIXQNSMTRPCDNKBQVHQPYWNNDTLHEMYODVPJ");
    tmp_msg_0.description.assign("GMYWJSSYQVYXZUMQZBNRNMVHKXWGEXAHUVYXWXFMRWVZXCDUUKGIKWXIRQPOLONJWLKVSMPOSINHFVAPTLWQOCAFFFKCZJXHEGABIZVQRQSQBIFWJINYRALTGTP");
    tmp_msg_0.vnamespace.assign("TWOIVROWITCWMSKGENDLHYVHKMPKZMZQNAFIFCZOMLXTBBPYZJGIUTYNPFEBNBENGQPAAYXXLSRRGSDBT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QJOYAQLKKXPVQBPXVUIBJKIMWRRNYOIAIAHPDANVDPIMOXVYWAJBHUDAHCZWSTKYBORZAOLBLVWGANMFRCKHKXORUFBVXLZGXTXJCMGUDGBCMVFVQIDHIDAECPFQTGSEDESJZKSGNHOTBRVFOEGRWZGODIQFRQOUYZNYFISDJWPHFFLBLKYTLTEYUSZFCSJDMPTXXUKRZCMCREPAZMQMGNCWTYQWHEJJIEHBKUEULHTWMQWVYS");
    tmp_tmp_msg_0_0.value.assign("UDKTGDHLEEVTJIJMQCNDQMQHROBIBIFPZWESYSOIDJBMAOBKIBJFEQXXZWRMHITXWANMEAHLSCMJUHWFYZWFAONOUBBJDNOPISZVSENBUVCQTRILUKQGREEUKWTRKBDLOALJHZPWZDQPCQFNMXRZXLYWJTPGIRYXATSPZZKXGVXGVYMIRKYNGVVPOQTWGSFTVFSLFSVHAYGDNEDUACHBOTJNMOYPLFYZKWMCUKHCPSCALKLPFDXJGNXVGU");
    tmp_tmp_msg_0_0.type = 37U;
    tmp_tmp_msg_0_0.access = 231U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LNCJLRRUMPJMTNUEUOSTXXDEIHCAFITDWYXMTZWDBBVPQWUMQYBFBVCPMDTLFADWAESDGRHOCIFAJZQYXPMIHJJLKNUYEHPVSJVXUIAISZOIPAGKQRETYBDHJLZMCUEWGNCCKOBZDYBFYNSOQUQZIGFBWWTLEGMHNVUOOSWLQ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ZQFPOWVQSBWGGRMCYFDLBWYCXOPOMUHRAHPALSOSLGYVENICWQMJRHONKLBTUIJXXSQURSFFEWPGBAMNWSIXMYGQGNTKCNBXZEDMFJHZMDQFJLDLPRDRWJLGHVUGPOFYKABYLHSPKRVKCZDDOTTYKUREQHISKRVJNMQDIAJWXCUJKBILNPAMWZGBUXIABCTZSZPFAKKMUWDHOFUCRQOIPVU");
    tmp_tmp_msg_0_1.dest_man.assign("VIZSGOAVBIVDZRUTARRIWUWVVGTFDFOKJAMJQSNOXBZRRJWTAYPFEYNYNRBKZHHFPPILDAHGFHCQGDMXODZCXYBSYLJJEHHMKSBYGCGLWBACQPNUIZJAETRKBEBLVFVEHDDXZWTKJVOFOSCMEWOXMHIWMXBUMGTHQENBTEPIHKZQSYNMUKGZSANKRLJLFUMWFTGRODQFXQQAKCSU");
    tmp_tmp_msg_0_1.conditions.assign("TNGGHWYFSOPLZGPFFBKYDDIQBMEGRXCUFXPKEINACXXGQIFBBVXSCUVNOOFMQLSINZEQVJQMGHSTKDZGEHDWYJMWDDSOHKVRPTTSEYCRUOWIUKCKMAYRNEFLXPJCEOMUZPLEJDEOLBJHWWLTIQVVFUHDYRWVLHXRYULGCACBCJZNIJOICSVBTYU");
    IMC::DepthOffset tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.336208834111;
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
    msg.setTimeStamp(0.468046902707);
    msg.setSource(49252U);
    msg.setSourceEntity(44U);
    msg.setDestination(12054U);
    msg.setDestinationEntity(85U);
    msg.command = 185U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LBYPBFZPMBHNRHQLSGKSZQPRBXAHVEUBMFBVMVKWUJNYYNTMYAZEJCGSNCPJAJVMMVGJJHCQVONZSCAWVYOGAOKIRQSIDWLREDZDTHZXOEUWTTRRKIAXJPVXQSKGCIRDHLEHQFGOKCUSIKDRWZZBJPXUGBZAEPUSIEQXNGWLUOIUYKKPQXEULGMAOOZGRSNTFAYFJFWLHSCDEVNDTQMWEYIQRKLNLDTXHIWXPFOWPTHFXUDLFCYFN");
    tmp_msg_0.description.assign("LITGRUPJYLGFPPNUNRTBZFHJWFCGDJWMJKUSNMMDEJLFXZYHDYOSJAAXXEYATWVPKYBIYOVQVQAMPIWIKNTCKXKNVPPGVBAZNRHDNBDMRXKLUGCLSYECDXIFTKKRENPVFSE");
    tmp_msg_0.vnamespace.assign("HDWYWEUCDGOAGVDLZVMKBQBBWFJRNLMCQERYKRXFZHPIQOPSOIOMXQYXRNDISFWBTEPENLPFCFZODATKJMORHQJZGUMGTHJRCEYFTKXUAFIRCKXCHCNJKQYYNZODQADSTIGFJBMUSIFUSMVPOUNBGINWVLSRLXUQAHJRBJGTZNHTUCSLIVJLEMJTPXCYWBGOEELGXZVISEWPVDHVVMHEKKNKFDZRZTUVQIATHYYBX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("APIBRXZOGEMSATCAVGPDSQBQNWYRWHZXXPAMAGWXNIUWJSCABXROAHCXSHRFZPQURGJURTFUHACFOAWNVFYYFWVGCEEXHCXRBHKZFUWBIRUMTDIM");
    tmp_tmp_msg_0_0.value.assign("VAHCOSWQECZVZKFWWKTMQWYPOVEMSPFUYCQEIJNPIELXMMNGLGDPGWYVOKKJURDUBXCPYZCAYHIFHAZNCBRJKQLRFYTNJYMJEGJAPVTKHIXSBGLDOBVTDQXNGIORDXFVHSRCURPMYIAPFXSAKGMLYTRAODTSSZNCSZEQVKXGXOMIVBHHBTRSDLIEYCENQCWEVZOHFWJKUWQNNKLRPRLJUNELFAPMDHMUTBFLZFUWDTAQZQBOIB");
    tmp_tmp_msg_0_0.type = 48U;
    tmp_tmp_msg_0_0.access = 203U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YZEQJSUKNQCBIZDKNSFIMTATXVKQWFTPORGYVVYCXJKZUAFSTNFCMEATEEWKUA");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TJGZWUVCAQDCYNYJXHEVNFOWPVONRESPUYXTFAMOLSPRYDPRJNWMNMRKSAKLRAZZRFXNEWTDQZCTWFXCDWITYDDXPCHJBGEYXBCQP");
    tmp_tmp_msg_0_1.dest_man.assign("ZBMLMPLNBIROIIDGMRRGVPAYYTPIQTKYGROQZYNWAZPBMYAVNBDXZMVEFMZNELRLVJBXPJUPYHJXQQQCHSWOIKETBWGUGCSYJDFVHUFJUSKUBCGBIWASRSWSLHZVFGICQNNCVGHUIABUJXKIGNKRTSQAJKKGXNCODEJHTEEZUYFHLWHRJPWONXCKURXZLDQWWNLTPFV");
    tmp_tmp_msg_0_1.conditions.assign("RMDQIOGYADSNDSTJSRLPXRHSFBXFAEEXMICCZZILWSOQUIYPEILPFTGDBMRNJRLHLNKLSGNTBAGAMISUIYWOLLNWBWBGUNIRVVQBUVVNTRFKVIHAGHFUYADYCGCEPETHZQYVO");
    IMC::PWM tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 30U;
    tmp_tmp_tmp_msg_0_1_0.period = 31994864U;
    tmp_tmp_tmp_msg_0_1_0.duty_cycle = 777714945U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::WindSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.direction = 0.47715871103;
    tmp_tmp_msg_0_2.speed = 0.011189629265;
    tmp_tmp_msg_0_2.turbulence = 0.321879416735;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.13576448336);
    msg.setSource(57568U);
    msg.setSourceEntity(96U);
    msg.setDestination(51138U);
    msg.setDestinationEntity(118U);
    msg.command = 23U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FAQGBMRWZJDTGSVEMTHGVSMXPTRDOAPNOZKSCOZOYESVUTMXJJKMSSUTLZYWNZTFMXDIBQUTBZYCLZUDWIYBGCZHPLFQBXDNQHQHAVGOUIPDKUBTXVIYRCKOLGAUILAEJZELTARVEUWRBIMOGYJYFAOJFUHCOXFUKCWLMKARNCRQ");
    tmp_msg_0.description.assign("DRKPIIFQBTQTNDJMXLKZWXMHQFWWPIRQAAMTUFKSZXYNHDDOOGYXUKHFSWZOVYBUEFSNFVTLEAMGYYYDIBAOCUTJKCYQQSYJJHXQEVAQLVLGOQTTKVSJMKOLSPYWBIWEOCLNHKLWVDNCXFPWRDBRGXUZMZKLGZEHOAHPFWNEEOTLAAAGRJUZDNTMSHXMVEIUNIVBUHGCIPUNPKFCBCPSXASJBCGPZYTJDIFMPSVLGZMDJICO");
    tmp_msg_0.vnamespace.assign("VAGRLUNYEYFZUXJJOMPJPTGOPDXKBQUSSVTTLUBNHDHUCNNXTZNUSTVIRBBJKKIEKCKJMRNFRYCQHEHZMSIKPYDROKLPODJRRQQZEKEEECDFVDOIOHUOWSQHIHEQZRCLMWZVXRESHTBDFONYWPXWLZZPMWVDJQIYWQXBBUYM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JZYANHIHPTRRVGMJUFZNBZUYPZRZWMESNASWOQJCIAQHFNNYWRLJIOMGGXBVRKAOIBPZATOYLSYKTPDHNQEZKVSDOMRDPFQWEWWJSTCMOBJSXMAWDDNNCZGYHIFLULSUY");
    tmp_tmp_msg_0_0.value.assign("RSVWHJSQXRYRDBZXXEVEPBHDPJCTMTVPSRXLJOBQBLRNMIMZDEIKXBYDWBLNBZYFOWXWFTGGSYAGCKQTQBPVOITESVYYFMMIRBBONEQRWUPVN");
    tmp_tmp_msg_0_0.type = 134U;
    tmp_tmp_msg_0_0.access = 88U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KBJYZDGSFSFTHWWDQSIFOVPUYAAUZLHCBOHKIXHQRLCJFRWFJPXGVHGYUKVCPSCVHZEXQQASMMZIIDWRYBQRCZCLYLIVOCMOSWTIKNMEXGTDAHSOKPVTWOLJLXBERVAYRJPBMTITIABGVTUKSZMAPNBWCOEDGMWNYOQUXQEFWKLHEZMRRJEJEVBHAXRFGUUVIKNQKDZUOGMFBNDQZLTNSPGSRNTNLMC");
    IMC::Pressure tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.62589381382;
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
    msg.setTimeStamp(0.992204223174);
    msg.setSource(392U);
    msg.setSourceEntity(247U);
    msg.setDestination(60589U);
    msg.setDestinationEntity(23U);
    msg.state = 93U;
    msg.plan_id.assign("NVZSLOXJMIGKBGMPKFXCHEEBFVNPQFWLASHRBEYGVHHDPDRDRIRVPXYNTWVZQUACBMLCGECUPIBNZMROGOYXQJDTPYDIVLZQTMEVQXHFFJCBZTK");
    msg.comm_level = 73U;

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
    msg.setTimeStamp(0.855835786535);
    msg.setSource(53072U);
    msg.setSourceEntity(51U);
    msg.setDestination(53416U);
    msg.setDestinationEntity(230U);
    msg.state = 187U;
    msg.plan_id.assign("SEGDJIOVZHQZNKFTYLSJPNHCUFAOKADXFOKPEYMZAMQLVPCQHQDDHRCMSKMXLHIXCIVNUZTNPEGREDQJEFNIUGQXQBWRIPLLINFBZKSNUBMCYAGOYWXLRFWZTMSCWTQNKWPSJUDUUWQHKSYDGGFRTKIVVBMTGXBCBVWHGOIJGBLDTWPPESLODVAJBPARRLJMAO");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.956766525743);
    msg.setSource(43721U);
    msg.setSourceEntity(227U);
    msg.setDestination(20894U);
    msg.setDestinationEntity(39U);
    msg.state = 188U;
    msg.plan_id.assign("FCVTBFVXZFGFMUDEWJZXVNNSCUJZEIMJQCGRONQVJTUUOZTGKYNKYWMLDELCBKVKAGDWAHVOETRLPTUQYGNRUPXPIAOSRWVXWAZWDBJFAXJIXMDSYXTQPLRPKCYXHQCHWGAMTYKPOUFUPCOQHUYIXAKKHLWMFEEGJKZWIMYBMSCSDTVFLLVJDMABRQMOZCZTQFHNBSDYGQIRSNHAEOBQPPZH");
    msg.comm_level = 32U;

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
    msg.setTimeStamp(0.429426535798);
    msg.setSource(23718U);
    msg.setSourceEntity(162U);
    msg.setDestination(54773U);
    msg.setDestinationEntity(116U);
    msg.type = 211U;
    msg.op = 120U;
    msg.request_id = 42820U;
    msg.plan_id.assign("ANWTUKPIHAXCOQTFTMFTHJVHTAHGDHQWDAQPZDOFMCOLY");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.0288169523269;
    tmp_msg_0.speed = 0.682598173727;
    tmp_msg_0.turbulence = 0.658329183365;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YCUHGOFBPKIRCWOFUAICVMGKZHBPWTMZKQUCSDUMFHEYAHHZQJLVSWNAKVLAPNTJIPCRBIBQWZXQGWYGFDASGQFTFOSOTVCVKHMEYJSXDNISQZSNBDOKRRCPQNTLNHOAQFYCQKVVMPGTXLWREUSZOSEKQRJTEZJNHYUFRAIPXWXPYBYEYUFTIMJDM");

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
    msg.setTimeStamp(0.161082213985);
    msg.setSource(405U);
    msg.setSourceEntity(54U);
    msg.setDestination(42419U);
    msg.setDestinationEntity(116U);
    msg.type = 167U;
    msg.op = 121U;
    msg.request_id = 8620U;
    msg.plan_id.assign("TGKXTKNOVYJBBUVZFJRLICZSULWVYOEOETBWPSCFEALOXCHJAWVHBHHBXUIQLPYXNHKUCNVJTZYTTSRFJDNPGQDGQWOWTHLNYALDFPDJARGR");
    IMC::AcousticMessage tmp_msg_0;
    IMC::AcousticOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 234U;
    tmp_tmp_msg_0_0.system.assign("ORRMWQYPSQJFEOUWHFHCIPIZKEBGEYMEPNDZESRGATLHVQKTXIBBESJGYLVCZRHQULQAHYRUPBFAPQBMDCCGBDCJINVGSGYHJMAXQRTTVNRFTDGEYUDMOGQYZQYTSOXIFNKXPEKQZUFMEMUHHPFBNWJIASWYWBCFBLXNJX");
    tmp_tmp_msg_0_0.range = 0.700708762794;
    IMC::MsgList tmp_tmp_tmp_msg_0_0_0;
    IMC::IridiumMsgTx tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.req_id = 36663U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ttl = 3702U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.destination.assign("XXBWHGOQCKLSREESLZSFXJFEHGTUWZOTPTBWCTVGCNHJTGNDLHVXCMLXXZUGAEKVHPPOIZRQJWVKHLBVOJJMIRQCJYVYDHXJRCGRURVDWMJNLLNPDTLIPPHQOICWFRXFMAAQNJOOIYBZJWFPDTKXEQYMQKLRUPSSADQWEICTRCZKUBXEBUNZKA");
    const char tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0[] = {12, -28, 60, -59, -7, 46, -110, -115, -48, -101, 28, 123, 63, -13, -20, 103, -6, 18, 94, 64, 75, 68, 68, 6, 39, 24, 44, 104, 114, 28, 54, 69, 65, 112, -14, 115, -40, -109, -103, 65, -82, 55, -42, -21, -77, 82, -107, 113, -38, -126, 108, 13, -47, 94, -42, -100, 104, -94, -88, 125, -5, -77, 67, 126, -75, 72, 8};
    tmp_tmp_tmp_tmp_msg_0_0_0_0.data.assign(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0, tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0));
    tmp_tmp_tmp_msg_0_0_0.msgs.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.msg.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OQXYDRCTLUBIAECNFHAROJVXPHODSMSKGMTLNQAEWLCLTTXBZCMQDFATNJHNXJXIENSVJFVHGKQITIJZIWWBNBESITPYMDLZJDUUDVEZENHCVKAPFCZSUWQQZMMVUXEWNXJZKYFGGRAROOQJMBHVULLSLRRPWLWONWYOPYCWU");

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
    msg.setTimeStamp(0.220007643407);
    msg.setSource(2094U);
    msg.setSourceEntity(208U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(202U);
    msg.type = 156U;
    msg.op = 90U;
    msg.request_id = 18121U;
    msg.plan_id.assign("KFYVHJFBKCTSNFTGKHNMXLQMCIIEGOCRCVSDSSVSPBHQEYUOZOTAIIZNPVIEEYANBDRNDEOZVMPJCIAXEDVKPCQUGRYEUTWVTLNKGCLWHLQLXDIYFLBEUSQQBXFKZAWURHAYZNWOHBDMNGIYXFZZAROMUJOMGDXNRGFBDYEKJXPMPRMPSXFFTPV");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("XDPDICVECABIKARQNAXWSN");
    tmp_msg_0.links = 1968805925U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JGEQRWHVOBU");

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
    msg.setTimeStamp(0.629139306826);
    msg.setSource(27813U);
    msg.setSourceEntity(11U);
    msg.setDestination(9298U);
    msg.setDestinationEntity(238U);
    msg.plan_count = 39554U;
    msg.plan_size = 1151976660U;
    msg.change_time = 0.735764467278;
    msg.change_sid = 52825U;
    msg.change_sname.assign("WGWXAFXUKVVBLZKEKIRZHCJAKJ");
    const char tmp_msg_0[] = {57, 12, -46, 91, 7, -27, -35, -120, -127, 66, 19, 87, -48, 88, -110, -46, -108, -27, -65, 45, -87, -51, 21, 95, -9, -24, 0, 124, 70, -75, 85, -5, 45, 29, 124, 104, 101, 87, 54, -81, 51, 102, -41, -93, 53, -12, 28, -103, -114};
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
    msg.setTimeStamp(0.376858614211);
    msg.setSource(42489U);
    msg.setSourceEntity(11U);
    msg.setDestination(60652U);
    msg.setDestinationEntity(77U);
    msg.plan_count = 53186U;
    msg.plan_size = 4023982678U;
    msg.change_time = 0.538142951238;
    msg.change_sid = 34570U;
    msg.change_sname.assign("AIXSCQYDPJJPONOZSYXQSQZZEECFMEWRGMYGSRADXLCYZSWPNRTOIWZGVXUJYVFUBKDLXWJJ");
    const char tmp_msg_0[] = {-63, -92, -82, 125, 84, -5, 93, 46, 3, -53, -45, -103, -16, -101, -44, -85, -98, 73, -62, 97, -91, 8, 58, -105, 25, 100, 105, -94, 90, -24, 114, -116, -78, 35, 106, -89, 111, -31, -58, -120, 51, 49, 109, 65, 39, 93, 68, -1, 31, -14, 47, -43, -18, -67, -71, 66, 60, 21, 95, 18, 70, 27, -54, -98, -89, -32, 78, 86, -107, 108, -30, -30, 33, -95, -64, -102, -111, -122, -76, 20, 124, 33, 31, 22, 118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NWOFNFPVUBKVTXPJXRRKSFSDQUZKTBKMJPTDTIQMLFMZJCMMFGADDOFGECIWDNRKOVBLTBSSSRWMVRYVYXUFVDGRZETHSYAYXHQFXABIJZQVNYZGCIQWBBHVOLDWWZKNKIYAUXBHCJAPNUEWPASXZOIGPVTMQHDAULLUYHXIFRLCRSCKAYEYLEWOKRINNUOCMUMKBICUYEIGGJEVHLJQSTQQBEZPAHEJDHDXM");
    tmp_msg_1.plan_size = 59838U;
    tmp_msg_1.change_time = 0.807596083456;
    tmp_msg_1.change_sid = 5976U;
    tmp_msg_1.change_sname.assign("GXJRNIWFRHXNWIDHQJBOPWZOWDZDYLCVACKBQYPTKTEIISEFYOLTYKHRBQGGZSHZDNGEOAMNAQUULSWSSVXBIVDYIJBLKPJUOCBVFEEXRWJVTMNGNJSPBKVDETPVFNHKETLVAOHJRPGVTPGUZCXNTCMEOQOACBLDWEFBJFMZFLPAGLQRQZCIMHWKTXDMUYFHJUFZYYXVQCMTGXRWXRKAHIC");
    const char tmp_tmp_msg_1_0[] = {-80, 11, -123, 33, -64, -35, 75, -70, 83, -21, 52, 94, -118, -37, 30, -109, -88, 40, -3, -27, -44, 121, 118, 112, 15, 62, 20, -69, 13, 2, -92, 0, -11, 81, -15, 117, 46, 5, -75, -12, 106, 83, -76, -82, -95, -78, 24, 28, 23, -109, -92, 25, -120, 101, -49, -46, -32, 26, -46, -36, 47, 62, -121, -33, 16, -24, 69, -20, -76, -103, 114, -66, -23, 65, 109, 24, -72, 98, 114, -33, -127, 4, -32, 19, 105, 73, -7, 73, 97, -66, -59, 104, -6, -71, -117, 23, -3, -88, 36, -89, -91, 71, -9, 30, -105, 82, -118, -52, -80, 100, 76, -66, -69, -105, 10, -116, 122, -78, 7, 11, -15, -115, 109, -13, 124, -122, -68, -96, -55, 112, -99, 88, 104, -36, -24, 97, 118, -32, 5, 11, -67, 76, -114, 17, -43, 116, 5, 111, -122, 25, 84, 64, -75, -108, -93, 86, 118, 88, 53, 99, -59, -34, 90, 105, -62, 52, -99, 119, -32, 102, 115, -58, 126, 52, -89, -23, 65, 80, -113, 106, -21, -99, 42, -124, -93, -48, 24, -80, 105, 95, -34, 76, 5, 20};
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
    msg.setTimeStamp(0.31365053289);
    msg.setSource(25620U);
    msg.setSourceEntity(152U);
    msg.setDestination(2771U);
    msg.setDestinationEntity(78U);
    msg.plan_count = 52491U;
    msg.plan_size = 865984535U;
    msg.change_time = 0.495882319683;
    msg.change_sid = 11364U;
    msg.change_sname.assign("QHAVCFJBZHHRCCHJZJLDUUC");
    const char tmp_msg_0[] = {87, -116, -27, -104, 63, -73, -113, -60, 115, 116, 21, -15, 75, -12, 90, 47, -9, 57, 117, -122, -67, -83, 0, -2, -76, 97, 75, 117, 125, -78, -110, 0, -44, -46, -22, -22, -37, -74, 84, 5, 56, 71, 59, -124, 38, -21, 122, -42, -119, 122, 114, 54, -84, -103, 67, -7, 27, 86, -91, -105, 56, 121, 26, -91, 2, -43, 56, 110, 42, -102, -54, -105, 63, -61, -56, 10, 67, 106, -26, -86, -17, -86, 106, 73, -100, -58, 109, -97, 77, -31, -62, 34, -54, -29, 5, -22, -1, -56, -124, -33, -5, -29, -65, -125, 79, 23, 52, -87, 18, -110, -81, 71, 20, -126, -32, 34, -68, -50, -62, 6, 59, 48, 54, -33, -49, 51, 113, -37, 43, 97, 104, -120, 38, 11, -64, -80, -113, -13, -114, 10, 16, 35, 87, -113, 99, 73, -1, -126, 8, 11, -95, -31, 47, 111, -66, 124, -93, -116, -48, -111, 49, -128, 30, -50, -62, 126, -58, 100, -59, -93, 18, -9, -128, 101, -105, 23, -6, 74, -25, -16, 101, -18, 34, 61, -91, -78, 125, -30, 31, 67, 42, -66, -20, -63, 18, -98, -27, -117, -28, -80, -101, 6, 6, 110, -10, 94, -41, 76, -9, 113, 9, 84, 88, -58, -16, 43, 1, 107, -36, 86, -91, 67, -84, -1, -97, 90, 112};
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
    msg.setTimeStamp(0.941723836638);
    msg.setSource(15103U);
    msg.setSourceEntity(143U);
    msg.setDestination(61673U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("OZAEIQLQPOAMPDKJWSOTATBYZLBNHMUQWHJYEMAEJRSFCBKNEJIXGOZFNMDGWUJPRBRXPPZHYSMBQFSHNERCSTKRICFEJVVMPHLNCWEKTRLMTLVGDZVBRULBZGPUTDKXXLUQXUIOAM");
    msg.plan_size = 48343U;
    msg.change_time = 0.160008213377;
    msg.change_sid = 10925U;
    msg.change_sname.assign("XEVUWRLMUWKJMNRGKYBVFJBYNDOIMBXAKUSCMBGELKJPXJBMDPRXPTKTZGCTMDLFBFGPLBSVGSPHTVML");
    const char tmp_msg_0[] = {10, 96, 28, -67, 83, 43, 82, -60, 4, 44, 57, -7, -56, -13, -82, -45, 103, -64, -27, -103, -126, -61, -98, -22, -1, 55, -44, 116, 49, 99, -11, -97, -34, -66, 88, -30, -78, 126, 120, 96, -39, -107, 56, 35, -68, 27, 118, -40, 60, -52, -101, 122, -15, -16, -110, -33, 17, 94, 87, -112, -10, 62, 29, -73, -124, 126, 100, 82, -119, 97, 82, 8, 73, -73, -123, 110, -127, 108, -58, -26, 39, -19, 77, 102, -68, 13, -70, 57, 31, -76, -48, -83, -1, -23, -52, 40, 122, -32, 1, 92, -14, -96, -27, 69, -115, 126, 98, 120, 93, -21, -2, -73, 8, 0, -68, -12, 123, 43, 30, -31, -69, 126, -16, -104, 23, -55, -93, 62, -20, 13, -51, 105, 113, -58, 112, 88, -31, 106, 74, 22, 82, -52, 54, -10, -19, -65, 79, 101, -84, 88, 62, -98, 74, -50, -51, -72, 108, -120, 87, -27, 23, -127, -12, -42, 56, 115, -72, -29, -14, -13, -102, 37, -112, 33, -8, 62, -81, -80, 98, -52, -112, 57, -110, 92, 4, 26, -11, -2, -30, 28, -15, 55, 5, 6, -21, 36, -81, -18, -79, 126, 24, -50, -119};
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
    msg.setTimeStamp(0.579649832589);
    msg.setSource(51844U);
    msg.setSourceEntity(39U);
    msg.setDestination(47088U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("FPUEVCDOVEDBQBOZASWEUKXRJJPHPNSBEGLJAHKUUHTXFKODWAIKJZCRUCEYVFTDVRTQGEUREVW");
    msg.plan_size = 12651U;
    msg.change_time = 0.738244780711;
    msg.change_sid = 44540U;
    msg.change_sname.assign("TUBXJWDSFPYEHQMBOEWCGCSUHONSGLBRLAPBZDFIXAVTKNOYIMLZXLIERQIPVKMHGQMHQOUQWPFXAFULVZUZFWCJDVPECZTBPVLXVRAKMJMDNMWAJPXYQDNMBHDBJYYXNARNGODXDYTQZMRIGVTHSUATKNQIJGORESKEYGQFKJXRWNHXHTJBDWCEJLSBMGBOVWOIRGSAEVJZLCZZKPHTCWCSACITKLWRPECKFYQDVS");
    const char tmp_msg_0[] = {-119, -34, -50, -18, -49, 50, 77, 3, -48, 81, -3, -119, 89, 68, -115, 36, -48, 18, 121, 11, -127, -114, -24, 102, -95, -84, 80, 100, -52, 96, 99, -118, -86, -95, 60, -107, -85, -49, -4, -4, 83, 0, 1, -112, -50, 112, -88, -82, 118, -95, 119, -15, 53, 84, -109, 13, -89, -49, 1, 2, 11, 104, 60, 64, -52, -16, 98, -105, -113, -107, -115, 38, -85, -29, 73, 54, 83, -79, -53, -50, -79, 101, 49, 25, -113, 64, 38, -43, 64, 85, -59, -10, 68, -25, 122, 95};
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
    msg.setTimeStamp(0.421494261962);
    msg.setSource(53591U);
    msg.setSourceEntity(205U);
    msg.setDestination(29869U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("PILUQXDRWKVRDAMICNXKJEYWJMYDDVQHSTVYSBPLZLVHRJTXCYGBRWRLNHZIQLQAANVOATMBAYPGYLGIEDFXTSLKOBHDXNGFSWTUOGCLONACJQSAYQUTZVASD");
    msg.plan_size = 50895U;
    msg.change_time = 0.976949855847;
    msg.change_sid = 14886U;
    msg.change_sname.assign("RNBLQWLFQVWICDOJXVYKAOSRPIJSDOPZADKEFRFCHZATOBNBASJCHDXUODEJXNOGWQMQEIAEZNMQGMWMHGUMFVLPXCOTZYICCXTRSEUEFJRGMQBABR");
    const char tmp_msg_0[] = {36, -21, -85, -94, 113, -53, -7, 100, 8, -29, 27, 54, 60, -105, 101, 9, 91, 56, 85, 49, 38, -52, -117, 39, -95, 63, -70, -108, -57, 79, -124, -40, 122, 52, 100, 50, 32, -128, 28, -54, -85, 119, 87, -62, -88, -34, -4, 2, -96, -39, -72, 52, 98, -15, -97, 80, -46, 55, -2, 40, 119, -112, -91, 34, 19, -99, 90, 19, -63, 59, -103, 2, -108, -66, 116, -128, -9, 99, -101, 73, 60, 62, -67, -31, -24, -121, 122, -1, -111, -105, 7, 110, -35, -44, 51, -22, 80, 16, 88, -97, -29, -7, -62, -21, -32, 57, -106, -110, -23, -106, -79, 50, 78, -30, -61, -108, -116, 15, 84, -87, -5, 54, -34, 58, -26, 101, 116, 95, 40, 97, -77, 84, -15, 72, 66, -113, 55, 53, 91, 58, 78, -51, 116, -47, -115, 92, 5, -120, 52, -12, -70, -125, 124, -84, -98, -126, -87, 72, -99, 71, 63, -73, 14, 81, 48, -68, -35, -102, 4, -118, 69, 107, -65, 53, -121, -12, -78, 5, 122, -114, -46, -122, -67, -46, -102, -78, -53, 93, -97, 35, 55, -7, 61, -17, -12, 17, 51, -76, 9, -20, -84, -116, -78, -23, -78, 32, -54, 57, -27, -100, 52, 85, -9, 72, 58, 51, 44, -38, 33, 37, 0, 0, -79, -123, 111, 18, -121, -122, 12, 67, 118, 6, 92, 98, 8};
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
    msg.setTimeStamp(0.577634203492);
    msg.setSource(64141U);
    msg.setSourceEntity(49U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(48U);
    msg.type = 32U;
    msg.op = 246U;
    msg.request_id = 52434U;
    msg.plan_id.assign("GMTKCQTMBCSFAJALUKAEPCQZHYWHPBDVPSQOFRNSTGNUREDUAKQNZKCMWFLMOUEJBNFMSIWYBXDVVXHRPKCFXVIQWWVIZBISVZQYWXYHYDGQLJHHJRMZIFKQIAEAPZGDYQDILGEUTGZTJPXROFOPPOVBSHEZYFPXN");
    msg.flags = 5028U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::UASimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 138U;
    tmp_tmp_msg_0_0.speed = 49671U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {57, 82, -59, 44, -64, -124, -107, 101, -128, 94, 63, -80, 25, -105, 84, 10, 80, -64, 104, -19, 24, -19, -91, -15, -65, 102, 60, 88, -93, -2, 112, 25, -104, -20, 69, -87, -83, 126, 45, -121, 71, 118, 69, 96, 92, 63, -50, 105, 23, -77, -13, -16, 55, -81, -124, 84, -47, -51, 71, -125, 70, 7, 66, 99, 10, -10, -77, 90, -91, 76, -79, -34, 67, -116, -82, -72, 101, 76, 45, 24, 62, 101, 85, 56, -114, -118, -67, 41, -68, 5, -110, -28, 43, 11, -98, -13, -58, 103, -60, 68, -6, 68, -90, -80, -56, 61, -41, 98, -14, 24, -25, -12, -15, -82, -115, 108, -43, -76, 122, 96, 39, -80, 43, -54, -81, -63, 72, -102, -88, -78, -73, 6, -75, -80, -105, 44, -98, 88, -78, -6, 43, -117, -78, 83, -8, -6, 124, 50, 75, -97, 73, 75, 40, -125, -92, -90, -69, -27, 32, 117, 57, 84, -15, -50, -117, 10, -119, -105, -51, 59, 41, 92, -42, 86, 85, 71, 39, -128, -62, 8, -83, 40, -62, 59, -119, 114, 5};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EOCHAACGMRNTKQCRWQMPOZYIOLRJTRABQDFV");

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
    msg.setTimeStamp(0.532869782288);
    msg.setSource(61141U);
    msg.setSourceEntity(236U);
    msg.setDestination(46793U);
    msg.setDestinationEntity(31U);
    msg.type = 4U;
    msg.op = 44U;
    msg.request_id = 7172U;
    msg.plan_id.assign("LTIMVRVUPPTDUUTKVZFGPCCZEQNACTQRNMHCMOZYBESMMAKXIGLOOQNWEROXLSGFSANNDHYHRLSNGJWTJOKUFCAVDYYMQYVLCZYSVDNVWQTPKLCMWYQSDXBSGLWIBDVWXSVRIYFDBJHZPAEYWIKPEPAFFJHBOZFICAAYDGRPQPELUJBEOJAHTDFGXBIDOBUUEJZURZKLXHTISSXIFAWNTWIHMFQCUGKENXXGQHTNWRKOMVRZLCM");
    msg.flags = 31957U;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 96U;
    tmp_msg_0.htime = 0.749391021866;
    tmp_msg_0.context.assign("LKTOUJFXTAKOCTHHGQSCFIKYMQOBBTDVDOUZSTSVJJTPRZGXCVWAKXMUISOUJKAWLSHWUFCYBAZEPRDQHEDDMJEYFLMUEFKVMEUNHDOYFTTDLCPVMOCHIJNVZBXPQBIIMTLEJBOHEONGGUKJJGWLRZLLRWGDPZWIRBSPPHIZRNNGNPAOQLQEKMY");
    tmp_msg_0.text.assign("ARJFHMTCTYIKCVUINXSZDQGLIZATHNKPHHAXOOGEBWGOKODLUIBAWFCPEDIJEPFVTNVQZOCYALGSVZQWDBKHJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OTVVRMICCNFZPXDIRRZUZGWKCONLRTIZBYDGRFAHGLSGBYMCSQUKBOHBSLBVBNEDPIVTDYUCQPGMQATWPPHMZRSFIQSGEANAK");

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
    msg.setTimeStamp(0.660971250449);
    msg.setSource(51653U);
    msg.setSourceEntity(247U);
    msg.setDestination(13876U);
    msg.setDestinationEntity(7U);
    msg.type = 19U;
    msg.op = 243U;
    msg.request_id = 13587U;
    msg.plan_id.assign("TGMPTIPVRPACIDOLKZGATMVJMKTMPFWSLXBVQWHCWAOXXKJIOCOLKPHBNGSAMMNFFAVRVYXR");
    msg.flags = 46690U;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QLDALOKVTSWJJSBJPHWQHICOBOEGUXIFVSVLCGGOZLZDGMQAHUYWUSFYTRTRXGXXBKZFABPITINSCSVEFGWDSXHAFTDYNBQUKIPBFQURCWMDUELYUMKYRIHNXIRNODWZDUEZVNLIUSGJYNKQPKWBJYYG");
    tmp_msg_0.visibility.assign("QWTZZDAKICGYYEAFP");
    tmp_msg_0.scope.assign("SITFLEGQKTWWYAKCUEJIFZXVFMOCBCLAJRQJVUFOFSKBBREIEYZGKJLOPUVGFQRWUYXAB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RGSMBXNIYOHFZNUCAQEICKHWLCTEJPHRQJEPOMUSWKTHPSXXTXKJLAYVRAIHSZTXUCRNIGSLSYPLWCLASESZNGPUCDAMFXUQYRXVNMGQJPGQDBEAFYHDKKVHDOZHIMZMFTMWJJY");

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
    msg.setTimeStamp(0.876828619271);
    msg.setSource(36200U);
    msg.setSourceEntity(172U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(117U);
    msg.state = 36U;
    msg.plan_id.assign("YQSQMJVZBBRKGLVLLETYPNWGQMFOHHAOOCFGPVUZZXPADETWGJELSQGHHPYSNBCCDRPNQSKRSOVJWARYYAFZEDRZCZJAUBKRPZEMFUWMNIN");
    msg.plan_eta = 875726502;
    msg.plan_progress = 0.113504323831;
    msg.man_id.assign("SZGCKAUKHPFZQRYEYJVOXWMHZFXGTIBGMOCAJHBNPHCTRWTETQWXRQULNZECUKMUGVUZKVCQJVYNYXRDFCLUVNCXMLEIDPRWYDIFJOHEHAECQJCGTFNRSRAHPZMUWBDNUBINHISJSXHYUWZM");
    msg.man_type = 33539U;
    msg.man_eta = 1200727016;
    msg.last_outcome = 223U;

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
    msg.setTimeStamp(0.0281259507746);
    msg.setSource(4600U);
    msg.setSourceEntity(109U);
    msg.setDestination(53451U);
    msg.setDestinationEntity(171U);
    msg.state = 198U;
    msg.plan_id.assign("GTXUIBECYYWIGLVA");
    msg.plan_eta = -2054788590;
    msg.plan_progress = 0.711916836406;
    msg.man_id.assign("CPSGKPRDGNUHBKROLWOMAXZBWZAGYGVLEQLSQSUIYRZRDYSFBYFTHXYHZPWEYDVKRCQXDQDANMPIQJLFMANJEIQMVGBIFXLTUKGETIYTSJRHKTEUNVWCMVHMMWGXAHZOSXIFCHCEPQCVGPXQBJCTYBEUGBNCRUOLRPOXSIVNRODFZFZUVDLXMJFZWNKJWXHJOIGNTJEADBMDCWTRKJIF");
    msg.man_type = 11351U;
    msg.man_eta = 98499281;
    msg.last_outcome = 114U;

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
    msg.setTimeStamp(0.457580153051);
    msg.setSource(33937U);
    msg.setSourceEntity(50U);
    msg.setDestination(10984U);
    msg.setDestinationEntity(76U);
    msg.state = 214U;
    msg.plan_id.assign("RVVXZXSDJFDBVSAYLTWMQLCVKKDFDIKZSJHWHGRRAPEIIGZBAMVUIYWJNAZPYWLBARUSQMP");
    msg.plan_eta = 1861416610;
    msg.plan_progress = 0.0909129334596;
    msg.man_id.assign("WGPLJLJGOGERQYOYAGPWTSRRPCWGDHMOQAHDCYEMWKOIMPVIZLYONUJCJDLZZHVJTKIXCGBMPTAFMKVWNZHXABFMCLYFXNVXLUTQQUNJCEBJIXEQWUSSHNKFYSVQXFRJJSCDPSMSQIMBIFZCCPNNLPGAVETRASBJNVXZI");
    msg.man_type = 26958U;
    msg.man_eta = -1475934600;
    msg.last_outcome = 114U;

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
    msg.setTimeStamp(0.11077993393);
    msg.setSource(4535U);
    msg.setSourceEntity(56U);
    msg.setDestination(23017U);
    msg.setDestinationEntity(134U);
    msg.name.assign("SXDZGJBKGBQEZDYHRRPKDAEMF");
    msg.value.assign("MJKOVSTXIGYJIUAMYQDUZIIOYDPLZFQPABBCAVEHNFQXDXSAHXGCAXMYUUWKNIOKJARJYPBXBQJSQVPEOTPFEMXOZLBDKRYLLVPLHXEQGAVHKW");
    msg.type = 68U;
    msg.access = 15U;

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
    msg.setTimeStamp(0.897375623497);
    msg.setSource(54769U);
    msg.setSourceEntity(210U);
    msg.setDestination(11862U);
    msg.setDestinationEntity(119U);
    msg.name.assign("SLKZJXWFXOQGSLHTUHZHSRHVJGLQBCFQSHQWZCOVSGSNFNSNGRDKPDOAVIJJDMHQUIBWDUJANDAJYTCLXUMBXDVZEKPBXUWOOZILJSUBRNWMNMVXLOZZJYBPWEVETMDPFLAIVIMLFKOLBJCZDHEHKIFAVAMECUPDPZEYBRYEXPQIYSWYGANTFEGXGKYKTWWTGXIFDHCNMRLBVRRFMJPERSAOPCUITAZBRGAKNXTYYQI");
    msg.value.assign("JQQPKNTYCSMVJFXHYRCSTXKYOYSEOGKFVSFBAZSJTBPIVVEGQKFMDHTARTZXKUGOLVUQQCRIZWALIICEWSK");
    msg.type = 40U;
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
    msg.setTimeStamp(0.858169995432);
    msg.setSource(10940U);
    msg.setSourceEntity(138U);
    msg.setDestination(39019U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JYJZGGDNIUHDKWMXAACEWREDKNROVXLEDQYQHFOYITOFIAHQIQTSBGECHQPMLVKYTFLSAZJHTCNKLQVJFVOZWOEUDUKSSKBHWIQJLRLCEAFBFIJAAXRNMXPSCMGFUURXFFRVJHONPPVYTZMBEXCOHCLLZUQWWMQIVBNSKWEUZVJRGPXUNGECTWYGYMGIHAUOMLBOGPMSBZDAPCDNWDYVUBLPAT");
    msg.value.assign("YHSCYWFIWXZXBGOQYZSDDQHFSMRDCBKFUCCHMVYMUZIGGSOPGPDXCIQJVMBWATANDEGWLIXZDAEANZTGRZUJOWELHXKXTPZVLJNVEEAFITQVXKQWYQUJZDOZYKWGTFHIBKNMQCIWRYIPVUQPJURTRSXEIKDLUJSKNSPAGCADQTFJSHCQMFLPXRURVJPAHOFVNMLKHOLROBEOGUBBSNVURBKNTKCDLVLBLREMGYMTWAPOEOPAH");
    msg.type = 50U;
    msg.access = 44U;

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
    msg.setTimeStamp(0.766007121232);
    msg.setSource(27356U);
    msg.setSourceEntity(153U);
    msg.setDestination(49073U);
    msg.setDestinationEntity(131U);
    msg.cmd = 104U;
    msg.op = 45U;
    msg.plan_id.assign("UOMXWNXUKKVLGXPGIVZMZGJTPDHSUADNGTESFABSGZCVMCCULYKVROOEQFRANCVEHETUWSQLNWCOIKBFGXKJBZWOIEBLOWHDSTDUJHRAWXBVQWWRYJUXJSHFMRGLADTMVAFHCNWXBLVPNNAHPBPQEYQKUPKNGI");
    msg.params.assign("RNCMDDTWPCBQXLXFMKXWOKYHPRHPEGJWS");

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
    msg.setTimeStamp(0.106860220732);
    msg.setSource(10576U);
    msg.setSourceEntity(38U);
    msg.setDestination(7310U);
    msg.setDestinationEntity(63U);
    msg.cmd = 48U;
    msg.op = 153U;
    msg.plan_id.assign("XURACPZQDNOREUSSFKEWCFFMWZFJZBVLQJNKMLGVUHHMIMUTJAYDHEUGWTQTTZEWHCQQPWPSTPOSJNXRWSUQTULFXIFKBMXPRRCUZZJIXAFKAYKYOHBALUGFWXYBNYWNBOQVTVAMSMYMNKOHLVIBTBEGPHOZKDRLRGMHEBUGZYYDSPKEDNKIFXZDJRXLCEBIIDXOJQJWSDYOJSKZLNRG");
    msg.params.assign("IVRZYZAISLIODUUKCKOFDWYWJQNJENRVLHZTVOWKJQYEWRKTSPQQVXHISZBECBXUNNGFEYHQLLFMPNLULGGIDULZWWIYRCCNXFEEVBNMQGAIHJPBAEHGGNJZUSEPKOUPCQHMJRTGCNMZ");

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
    msg.setTimeStamp(0.80981771151);
    msg.setSource(43312U);
    msg.setSourceEntity(39U);
    msg.setDestination(59012U);
    msg.setDestinationEntity(147U);
    msg.cmd = 246U;
    msg.op = 66U;
    msg.plan_id.assign("TEAZPPHDVBVYPSGJZPAESETACAG");
    msg.params.assign("AWPQKAVEBNYJBMOKUYHLPWWNUDVWQMVJARMWBUPSPXHBOHFHKKUCDIXKOGLCXBSPXMAPGDYJDCXWMOEZZIZUZLTLHAUFZZADIGRVXWHTSGMTQLXNIUSNNRNGCHHOIEJMFIZLQOALDCNQMIHCVGTOFCVRQKEYGCTYBFYBVIUGYIRRQPQUSRNDRIKS");

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
    msg.setTimeStamp(0.53873589123);
    msg.setSource(5071U);
    msg.setSourceEntity(171U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("WSXHPZSXJDASYRDFBLDBSJYZQLCWRXZOULCLZJOTQVKQQDKCDRHPQUWFEVPEPTDSZNCCENDBVDTOJAATFQPFYKGBJHHHCMOMYEUEXJSPXKNK");
    msg.op = 233U;
    msg.lat = 0.137639729386;
    msg.lon = 0.00914786719247;
    msg.height = 0.73068581952;
    msg.x = 0.206902823657;
    msg.y = 0.155308388409;
    msg.z = 0.361953144372;
    msg.phi = 0.31936233277;
    msg.theta = 0.20359567722;
    msg.psi = 0.546993137169;
    msg.vx = 0.123780121641;
    msg.vy = 0.629793052566;
    msg.vz = 0.287523956403;
    msg.p = 0.0895324021761;
    msg.q = 0.825363459623;
    msg.r = 0.427656331098;
    msg.svx = 0.831506622207;
    msg.svy = 0.181965445216;
    msg.svz = 0.10104033124;

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
    msg.setTimeStamp(0.153364570524);
    msg.setSource(33031U);
    msg.setSourceEntity(54U);
    msg.setDestination(60504U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("VFYKHDCCIUANPNVJDPCLFMXSOKKLZFTCFVAYBBDQFMMRIQSBNLXZHJQVMROWLVXYIKSQAMUAFXRQNZJVHAJTJNCRBOVQIWFGCUWZLIWERBSJUTWFOMUWCKOSVXXXSEUNHEYAIHRUNFEGQLPHHLAEMBABTOGOWNCTDRDDQQIYK");
    msg.op = 181U;
    msg.lat = 0.539072747305;
    msg.lon = 0.155413322181;
    msg.height = 0.826253993665;
    msg.x = 0.775835866066;
    msg.y = 0.406991759566;
    msg.z = 0.456216092305;
    msg.phi = 0.688396390633;
    msg.theta = 0.482016615471;
    msg.psi = 0.469173470463;
    msg.vx = 0.0479396090799;
    msg.vy = 0.266834307855;
    msg.vz = 0.375343231312;
    msg.p = 0.646141497005;
    msg.q = 0.91738501641;
    msg.r = 0.412430563253;
    msg.svx = 0.358610613757;
    msg.svy = 0.66244070909;
    msg.svz = 0.720939254791;

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
    msg.setTimeStamp(0.924588753417);
    msg.setSource(31442U);
    msg.setSourceEntity(107U);
    msg.setDestination(65297U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("AZPGYJXNWYTLWUESNSRIEWUJRGJFRAPXGK");
    msg.op = 242U;
    msg.lat = 0.64339334665;
    msg.lon = 0.312508982136;
    msg.height = 0.140233245361;
    msg.x = 0.899300053929;
    msg.y = 0.867685869631;
    msg.z = 0.15956345327;
    msg.phi = 0.844117713361;
    msg.theta = 0.993689679332;
    msg.psi = 0.0131271611179;
    msg.vx = 0.741461202821;
    msg.vy = 0.720574684699;
    msg.vz = 0.277426217394;
    msg.p = 0.584903039085;
    msg.q = 0.830759959653;
    msg.r = 0.799816513218;
    msg.svx = 0.940813649461;
    msg.svy = 0.160189195654;
    msg.svz = 0.734961265867;

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
    msg.setTimeStamp(0.336300389591);
    msg.setSource(5046U);
    msg.setSourceEntity(165U);
    msg.setDestination(33530U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.235688543477;
    msg.lon = 0.18616385024;
    msg.depth = 0.829380276709;
    msg.roll = 0.975654980985;
    msg.pitch = 0.386725978752;
    msg.yaw = 0.590202158635;
    msg.rcp_time = 0.902478403108;
    msg.sid.assign("DIWDVQRCEFVGEDLVLTEZLGZRMIJPWDHNNEBMLXOSQTAXTKKDSFHEHIAHIJCPTWFVOTUYNGOLRLZPIOHZKUNFHCJXXXA");
    msg.s_type = 109U;

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
    msg.setTimeStamp(0.806017507938);
    msg.setSource(42354U);
    msg.setSourceEntity(0U);
    msg.setDestination(18302U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.720680634366;
    msg.lon = 0.55513612148;
    msg.depth = 0.929552647271;
    msg.roll = 0.946710479923;
    msg.pitch = 0.0309204932432;
    msg.yaw = 0.31336445483;
    msg.rcp_time = 0.112262583504;
    msg.sid.assign("UQAUWJQSAMNBXINOMTVDCRUINBTUJLIMUGIMHWZVGWISHFXVENFGVKRWFKNTUBYYPSJAQCAETVGAFCPORMLETIZHLZHTAINLQYQQDOCRPQPBHIRTCSYRHSJBLKGFDGIBEN");
    msg.s_type = 171U;

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
    msg.setTimeStamp(0.371324501145);
    msg.setSource(24169U);
    msg.setSourceEntity(233U);
    msg.setDestination(65489U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.90485676593;
    msg.lon = 0.710330129896;
    msg.depth = 0.715849737908;
    msg.roll = 0.938397398845;
    msg.pitch = 0.0592240744329;
    msg.yaw = 0.185049038112;
    msg.rcp_time = 0.163410970064;
    msg.sid.assign("AFSZLCSIRETVRJKBGMBWWCOPEMNPKVJEADBQCOJKNDSIIKRRGJDNFQAWZIFCQRRRMKJUBGHVXJEFCSDHUGTKWXUNTAQWZCOBYWPTZHUEOXPXTMQYLCKACWFEZNXYXTBSYNRLOMCVJTDPTXFAOYZHMIGJSSXENSUIGEBGLYGNFDHDPZDYMQOQLHZHNUYLVKAZY");
    msg.s_type = 97U;

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
    msg.setTimeStamp(0.751425177342);
    msg.setSource(42953U);
    msg.setSourceEntity(24U);
    msg.setDestination(22643U);
    msg.setDestinationEntity(73U);
    msg.id.assign("TEZYXLQJPGFXAHAWIYDKQSEVBYUXPQPKDUCEMUXFISAGYJINFBGHIPWTXSKOBAJGBDVDFTNEECWMTJMWVYPVM");
    msg.sensor_class.assign("WHNOBJMNNNOSBBKURBCISAKQIIEMRTDREVDOZVMJGEDFYXKCMELJNBQVUWKPCOXXUQKLYHEVYONODXZZNO");
    msg.lat = 0.58674869944;
    msg.lon = 0.366599062367;
    msg.alt = 0.0308573940521;
    msg.heading = 0.0198642825521;
    msg.data.assign("KHCLNGTQOIHPEOMPSLRBUKKISPCCDQJNXFNAEZIBLRYHMHESKHGIFJONRAMQEMPIQMPJXKBNURBYFWOAJHDSFZZDZZZFVEYHNKYXULPOUDDDDTQRIZFVNPVOTTVIASXSSRTCJPFMUZWTBIYTUQGBVLJFBKT");

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
    msg.setTimeStamp(0.561634017556);
    msg.setSource(29384U);
    msg.setSourceEntity(43U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(25U);
    msg.id.assign("XFPKGMTLRWGBQKVNCHOLPRMGJFPDNXCLHXSUARQTPOSQVBEQSSREPKVSLCWDWLDIXHVYBZIZTJSELSOZHLBWGYRWNVAJKHFYZMZWUEOEDAQMI");
    msg.sensor_class.assign("WONJLISPRKXXBQUQTFDWSSTZDJXIGOLDEIWKGGOXFMCRCNMRXPOUGUATWXUDEUDQBRZCFHJLVUPMMEGECLMSRPEAYDPMKHAIAZTFSLMAKIVVOBBIJGYLVQVYJYNEWRPVDIUBQ");
    msg.lat = 0.747135642095;
    msg.lon = 0.170647849438;
    msg.alt = 0.695255101558;
    msg.heading = 0.552985925674;
    msg.data.assign("XQEMAXTJQDWVFOLIVXPJHOGMVVJYEWPMKHIGJFYDYZXLVKSALWQZJURBBRKSPNUUWEOCUUYGKFJTHAAZHJALPZNTIVCKN");

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
    msg.setTimeStamp(0.570018007918);
    msg.setSource(64468U);
    msg.setSourceEntity(133U);
    msg.setDestination(43125U);
    msg.setDestinationEntity(82U);
    msg.id.assign("FBZZDBSWDAIDTKKBREQDLXLVYSIMJTRSAUEZCPQFQAFVKHSXCSOSOJRPCEYYMHNBDLJGZHNBUQYKARWPCYPEHRSSMTNUVHVZJCGPFVBTWOXCMUGAI");
    msg.sensor_class.assign("DLXKFQAWPJWQHBANDVXXHRHAXDDEOWXKGOKUQMQMFTTPVCCIIKSKSQSPVDLFIEPKINYAYBTJMIOUJPDKUVPEAOGEWQMFHFHPWWGSBANNQBROHTWVOUNEYVOGFEFMYBINRHBDEKYC");
    msg.lat = 0.747020357456;
    msg.lon = 0.173414917221;
    msg.alt = 0.878684060982;
    msg.heading = 0.10402756421;
    msg.data.assign("VVKUIFJXVMTNAVNMNFRRCQGPOGQZAJJNFFAKYWCSLUDNNMDJTKAUOPZ");

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
    msg.setTimeStamp(0.306425712838);
    msg.setSource(55651U);
    msg.setSourceEntity(104U);
    msg.setDestination(2224U);
    msg.setDestinationEntity(57U);
    msg.id.assign("WLJGJZSVQBY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WCZUVRYGAKFFPEHSHKGUAMFOLYIOMESJGBXGIGOLZBVDWKXCAVUJVPSTRQEQFSQDWVLPPYQXNDCEYVQRO");
    tmp_msg_0.feature_type = 226U;
    tmp_msg_0.rgb_red = 44U;
    tmp_msg_0.rgb_green = 44U;
    tmp_msg_0.rgb_blue = 93U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0271704101706;
    tmp_tmp_msg_0_0.lon = 0.676064017568;
    tmp_tmp_msg_0_0.alt = 0.918193156109;
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
    msg.setTimeStamp(0.929529038098);
    msg.setSource(57701U);
    msg.setSourceEntity(240U);
    msg.setDestination(50508U);
    msg.setDestinationEntity(127U);
    msg.id.assign("TTVIGIEVKQXXLDOSNJNNHRJWGJKYAWKOHQTKTURXOBDZFGISCVAMQEQCRNMBHCJOCRUTAFIMX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WXNEGOGEAPCXJBDHUWEDFKRTLUOUASQZVCMNZZNIDGTAXYNQBJLFSUHJCAMDVYVVMQTHHXYNEDBBFYTPMMCZSZKMTIEWMJQRCLKVNKKTURMYLFQBALLXFEEHFYWGDXZUBITBLKUJEXSRNSUPRILZBRHQVIDYOLRPJXSGYARANZCECOQOJQFODYIAVVEGPSTKRHZXLDOGYUJVFHJVWGCMOBGSPMJKZRPPWNHSKCIIQWAWKTOSDQHGFPWTCUF");
    tmp_msg_0.feature_type = 1U;
    tmp_msg_0.rgb_red = 121U;
    tmp_msg_0.rgb_green = 189U;
    tmp_msg_0.rgb_blue = 113U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.427121746426;
    tmp_tmp_msg_0_0.lon = 0.539362018036;
    tmp_tmp_msg_0_0.alt = 0.291450318881;
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
    msg.setTimeStamp(0.54821999322);
    msg.setSource(54014U);
    msg.setSourceEntity(203U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(146U);
    msg.id.assign("ITQQYQTJFBOWBXPAHNWQFALEDRRZSXGSKLKXUQDCNDXGHJLTBTQWGVLEG");

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
    msg.setTimeStamp(0.354246876195);
    msg.setSource(50983U);
    msg.setSourceEntity(173U);
    msg.setDestination(26888U);
    msg.setDestinationEntity(4U);
    msg.id.assign("UOMBEOCCJLVSHJXAHJQFXYIG");
    msg.feature_type = 139U;
    msg.rgb_red = 6U;
    msg.rgb_green = 204U;
    msg.rgb_blue = 193U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.446202894278;
    tmp_msg_0.lon = 0.322851899909;
    tmp_msg_0.alt = 0.875941461822;
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
    msg.setTimeStamp(0.662235079883);
    msg.setSource(14285U);
    msg.setSourceEntity(107U);
    msg.setDestination(14985U);
    msg.setDestinationEntity(113U);
    msg.id.assign("ZKPQSUQRTFDTKIAOFUCNOVRUABZKPGNOIWFZTKKXFHQFUALMXNEXXOKRUGPGBSNNGTOWMPMRCXJBNBIDDUILTDYOYLWJZHHIKDHUPMWDMWJVCCNJILQWHJSDVWYSBKXHVBCGBWEMAVYCQOCSLHSJSVIREGUVOBJWVTYJGAUBXRGOENCLESFTEPYFFZYDEQXMJMFDASIHESHACLTVMBXXLRROZRNPFJTZQPRZKNGPLAKEA");
    msg.feature_type = 35U;
    msg.rgb_red = 25U;
    msg.rgb_green = 131U;
    msg.rgb_blue = 203U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.00691850453648;
    tmp_msg_0.lon = 0.689673517696;
    tmp_msg_0.alt = 0.974645430857;
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
    msg.setTimeStamp(0.553469266251);
    msg.setSource(16728U);
    msg.setSourceEntity(183U);
    msg.setDestination(25640U);
    msg.setDestinationEntity(240U);
    msg.id.assign("ZEFUTOLTVHSQVPKBGFVDNEDRJQUMAQNPJTCWJDNLINPKUATBWRIJMGHOULABWCUEKXLEXZYLVJYDDYBNEIUEUXMCVSQ");
    msg.feature_type = 189U;
    msg.rgb_red = 16U;
    msg.rgb_green = 60U;
    msg.rgb_blue = 14U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.586407002156;
    tmp_msg_0.lon = 0.64016575167;
    tmp_msg_0.alt = 0.690576460028;
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
    msg.setTimeStamp(0.435494719288);
    msg.setSource(37394U);
    msg.setSourceEntity(176U);
    msg.setDestination(43659U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.169655314196;
    msg.lon = 0.359482233674;
    msg.alt = 0.908693330816;

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
    msg.setTimeStamp(0.175194410083);
    msg.setSource(22092U);
    msg.setSourceEntity(71U);
    msg.setDestination(16836U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.79723385389;
    msg.lon = 0.738798564679;
    msg.alt = 0.929551770748;

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
    msg.setTimeStamp(0.00715616977667);
    msg.setSource(64517U);
    msg.setSourceEntity(50U);
    msg.setDestination(59830U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.860508635577;
    msg.lon = 0.750714001041;
    msg.alt = 0.457061606386;

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
    msg.setTimeStamp(0.431836453864);
    msg.setSource(45220U);
    msg.setSourceEntity(54U);
    msg.setDestination(62781U);
    msg.setDestinationEntity(153U);
    msg.type = 114U;
    msg.id.assign("LODYRRDYASNLMAQOHTYTYBXYKCUNZRAVACNFTCPHPSEYHFBFSSIXIEXGJOLIIGCVZYLAGNZPOVJPHIEK");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 70U;
    tmp_msg_0.mnames.assign("TNAKVGXRJTZZLTETRVRYMPCGLJICJZGXQSAGOZHFOZRCNDBBMVVTSBTCKK");
    tmp_msg_0.ecount = 242U;
    tmp_msg_0.enames.assign("PLQCYNKAUNVRTZFUQGYXGPVHBJDHDIZLNFZXPRVTMMNJFXKBBLENJMXXQGRCWGSRRYAIMAELJHFLTKHCBCLZIDKAMKRSEPUOFTOEILMPYZRAAMAYFRRKBCOWZTJYWGJ");
    tmp_msg_0.ccount = 245U;
    tmp_msg_0.cnames.assign("DPHUWXZKCELGJWNAFWFHKXCHAQLIWNUYSUNYRVOVJWOSXHUBPDTJTVWQZPOQBPUFZKPAQCOIFPDCTPJKQQSZKBDCMIJFKPLAMEFYJNTEFGGDTOMRYEWCXMCGURONHYBAJVGMRREIQITFESEAIMENTVSTXBLVHBLMHPGCFYUPNVHNHOOYFVSZXLZ");
    tmp_msg_0.last_error.assign("KRLRLAGXDVMVBMVPLKHQFIRDTMPIPKCTGNLKCTSAMYSLGBPCOMOJUHJBUNIZBBSYTDRLVFCRCFAGAEFZCEPDHJVTYXJADUEEVBQJNYKQHJXWQIGLEKUYOHHQEARXUOITTEIKRNYPUHDFWVBUMHEIXMANGBDFKPKWTNZDJRLEZOYDHNNSAPCCZQCIYCPQAXQXGMHGJWRSLNVSFZIWFVZWJVWGSJMSNTO");
    tmp_msg_0.last_error_time = 0.104593792696;
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
    msg.setTimeStamp(0.709659998865);
    msg.setSource(59381U);
    msg.setSourceEntity(110U);
    msg.setDestination(18034U);
    msg.setDestinationEntity(150U);
    msg.type = 93U;
    msg.id.assign("YVBKRFFPAUBCIOFKBPCMOQLZTBAEQJOXUSWOEAUCMONFYVHSGHJLIVTSFEPLOGVKDQQGTXGWHWDWBC");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 132U;
    tmp_msg_0.range = 0.274240117273;
    tmp_msg_0.acceptance = 87U;
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
    msg.setTimeStamp(0.186173965221);
    msg.setSource(39600U);
    msg.setSourceEntity(124U);
    msg.setDestination(38146U);
    msg.setDestinationEntity(139U);
    msg.type = 151U;
    msg.id.assign("YQELMNEUCZNZKRJTGTPXDZQSSWWATCBSROJA");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.160305353512;
    tmp_msg_0.lon = 0.983837750204;
    tmp_msg_0.speed = 0.501959387049;
    tmp_msg_0.speed_units = 112U;
    tmp_msg_0.duration = 29632U;
    tmp_msg_0.sys_a = 31962U;
    tmp_msg_0.sys_b = 54121U;
    tmp_msg_0.move_threshold = 0.107377926511;
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
    msg.setTimeStamp(0.605380657888);
    msg.setSource(5285U);
    msg.setSourceEntity(76U);
    msg.setDestination(33317U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("ULKZFJYSMNYRWBVODSEFIEXLEQXWTNQMEOFEDGOUGTLYDWCXSKILEBWPKRPMRMTIUZOWGKCGIPQSHHNUHXCAXKJUWPUAOGMKLRDEQORBOAIQTNXCRYZVOPVJBMHZZWQJJZFBAUDVIHNYGLQGLM");

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
    msg.setTimeStamp(0.979783765332);
    msg.setSource(19743U);
    msg.setSourceEntity(93U);
    msg.setDestination(63010U);
    msg.setDestinationEntity(69U);
    msg.localname.assign("OJORCZEZYDPIKKJKYGQEAXRSEKFPFITXQZGJWEZAVUOXMVBWAVXRXUDLRYNBROOLPYQHVWBMMZOIPHDYGSXUJPCBNZDYFNVRUNWTKDPTBPQQRNJXMZMQHKQVIHMDWYUDTRJIXHSOJKSNACBNNUIFLJTMFFEYPWHSKQUBWESWHGZSFNCVBDVAWUEFLKRIAPYGICLVOKTJDUSLIMXQJGACRCBTSCEFONZLAASVFGWECHHLGUDEITGMCBG");

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
    msg.setTimeStamp(0.0496179458571);
    msg.setSource(22535U);
    msg.setSourceEntity(148U);
    msg.setDestination(33053U);
    msg.setDestinationEntity(109U);
    msg.localname.assign("IABZBVKUFYDSFWAKHAYHWGYQMNYTTWQHZOCKVCZWPLAIZLRUDPZDDGVAMPYASVVCFGKFNQNXCJXEULVPSEUKJKJUQRDZTRNNGQHBPIKEAJCTORXEBTKZWFEFPWNEYLLDBGYUVIPV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KJETBEVQISPIHGJLOUDREOKZKYQMXTZPAWPHGXLTPQMYQRAAFXCI");
    tmp_msg_0.sys_type = 155U;
    tmp_msg_0.owner = 30682U;
    tmp_msg_0.lat = 0.839632040951;
    tmp_msg_0.lon = 0.30469229206;
    tmp_msg_0.height = 0.860450329066;
    tmp_msg_0.services.assign("QOUANRVNAOTOXWBZSJLSFFLWQIMIVVOIPVMUJQHERHGIRCJELYKVPCFKGIWPNXDZCOQ");
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
    msg.setTimeStamp(0.112669416668);
    msg.setSource(33806U);
    msg.setSourceEntity(157U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("SQGXBIMHAXAFZGRYFPXNYTPVLABTQIDYWMBACZPAUFQRGSFORRDIHPJMXITFQDY");
    msg.predicate.assign("INJUNARQLBJZREDUCWUWXZOSKSBAVQBIJUKNARZQIYCUMMYDHKMFMRHFXQCGULYTEROPRAFVUBXGZJCFBLYERSUFNCVMLAWDFCIYNEDKWIOTZLHXGEXBADSBTAOKSVDSFTVCMLVXVRNJYOPGEHDOELFVTQPJQZGZQLGSYDNATKIQPJLCSONSDFZWMMTUCBWPUJEHXJPPMKFPWRVTDZWNEGIGYJBSEPXTGHNOQ");
    msg.attributes.assign("XUVKLSUMGWJTBEEZBUPLGYCXMNTRIBRSKDPVOOYREGUNEGJSBKHPLDZUSYAUVHCTCHVLPIGBCTNFJAFZEVOXCTTGYITYFOSUQNRUIVWLCNWYBHVQAIODYJIHDIYDCKJCZNBNJLWDAO");

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
    msg.setTimeStamp(0.0536692775091);
    msg.setSource(46700U);
    msg.setSourceEntity(114U);
    msg.setDestination(1345U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("VBUZNXZLGGUSRWTRXTCJTRYLAPJKQLELMEGDPDYQWNYPWQNJVBVTJARHRMDQTVSKZEMDMSAAQAOODTUIZFKNZECOYJPIBUHEGBHFFQWYKSKLWDXLBNGVUCKXIOPCPYBMBHKRSMAIFRXAMWQNPBYECZJYTHAOYKEJYA");
    msg.predicate.assign("XUVCWQKTIJLFNSUKZXRKDQLTIXRYITHZTIIWGEUGKZSWDDQJJQDWJADDLQBTLVRSPFTOEJQONFFNYIAPDHNSKBMCCDPLCYNBXVPZFFTBGXAHAHYXNULSEPPORQFUVAGVRGBYVJQYMGBRODEJWROZISHDQNLSXUAPBKPWJPXNEXOT");
    msg.attributes.assign("EAHPEDVRNCVLVHDEGLDUCMUYRMEDDJUGXRTYCBCVSFFCUFEEQGHITIAUMKWTBOWGSGWETZYLGZNKQXILEZNPOFBOCNLFQPRLYICJCFTJUQKVSZTHF");

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
    msg.setTimeStamp(0.293583372322);
    msg.setSource(33429U);
    msg.setSourceEntity(81U);
    msg.setDestination(38291U);
    msg.setDestinationEntity(57U);
    msg.timeline.assign("WGZGUWEJZLHNUDMMJXBJXIFXNNFCUEUYPZHKSTZBYSJRLGWSVISPEVIQHTCDSCMMICSCOWDKSQNLBWBFZRKAFWRPJDNCZNXHGADEIONO");
    msg.predicate.assign("ICLXRZNHLSWKYFHCIRXWOWIFKTJXEBUEQAMAENOMKHCCITPFKXCTZGIBQMEMBEXUOKITQQJKWDGAFZOSYYRJDQEZMDDSVWLFYVVICJSGUVFZGHLYSAHNUNPJKQLZNMTPHUZEETGPKILVBTSHBPVIXAWWLIDBRFAQDAGZPQOSORHOPTOUXCHLAYXVRUGSFYPGCGSUYFVHBJWAVOMLMWWDPJADYJEGNBNRUJTERUNZDVRXKTSQXNCFCOMPMD");
    msg.attributes.assign("NZDGYHVUMDRISGNUXYLBBJODUTQVUMBWUAHAPZQBOXPIEBOYETZRRFCQXQPSEXXHCUSBFDTNKCIYALUUDWEDVAIHGGVKQTNJRNAKENLNWMFWVXLKVJOJLGZHLCBWCMWHVDZTZMALQKBOCSLPIAQXYGJIDZFSXVOLSPTFIYDJHFA");

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
    msg.setTimeStamp(0.612160627249);
    msg.setSource(6403U);
    msg.setSourceEntity(209U);
    msg.setDestination(30789U);
    msg.setDestinationEntity(18U);
    msg.command = 209U;
    msg.goal_id.assign("DEOGSQBURQPBIDUYLHJRBSMYPXGXMJBHUWXHKF");
    msg.goal_xml.assign("DOEFPWYIUTFZLEEQZCZMBQIRTQHBFSKIRYQUDNPALRPYXHQQMGRQFUJKE");

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
    msg.setTimeStamp(0.0113951596982);
    msg.setSource(39688U);
    msg.setSourceEntity(108U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(137U);
    msg.command = 222U;
    msg.goal_id.assign("LVXQNVSTXEHYAKLTYKUBDZKXUZJDPECYVC");
    msg.goal_xml.assign("LURLMGKTYZJUIHUTFYTLEZHPJUUIFFPKONWPHIVTASCNYQRFKPRSGCRBSKOXASDGFNHIBKRADHPOLKWUQQDDNVNLQCEQMZZAQVVQGWDGTJHPQJFCXXYAEUVTIUDZSQMWGUACLDRCMMJOVRKKLMWVFOTCHWIZECOPXSWEAYMESMTDLEJAUJEEYGOXBSLICWGHPYRVNAOYDIHJMPJMVWROVQXXBXWZ");

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
    msg.setTimeStamp(0.322698772952);
    msg.setSource(9238U);
    msg.setSourceEntity(183U);
    msg.setDestination(63164U);
    msg.setDestinationEntity(184U);
    msg.command = 14U;
    msg.goal_id.assign("QRIUWLLZMKQXRBNWXVWWKKHSJGRKITGJMYZEOMFGHYJPULPLLRBFRXFBVDRSNGQDSNMAZZOHYHKMIVIGAAZHXPCVELNONQZGODWXCIWUSLTDCNBXOYOXCPDCGJOQGZCTSTIFKFSFMFVCAALNORK");
    msg.goal_xml.assign("UDXHTXNFBKKFCEXZHUYDBNXWRRFRFPSGKAMNGEXIYVCOQTZEHMSVZCHOOAKBITENLZIKPMCWQKJOSUQWDDWOQJEGASWOYFAGRUJIINKMQSJBJBCINKJPVJJIRBQLBZGSEORWCDAHYNUPBIGOVBPCYRZQLRGPMTUJFCAVNXPUMLLXIWFVZLMYZTUOQQCCQSNTHTSTMKZXVAFWTELPXJDSIGEFBVYRMM");

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
    msg.setTimeStamp(0.291831310911);
    msg.setSource(34852U);
    msg.setSourceEntity(233U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(96U);
    msg.op = 75U;
    msg.goal_id.assign("QFEOYZAFBKDFRQBBEXVAOSJZZRSGPUWYVMEJZPZFOVDUISJMRWNVMVJQXTKVTRXVESMIDTPAWZDTKSGZYWDGGNAJQBGKVJLEUHTTNHAIOELRONJRPSEATLLFKPWWRTMOBDKIMXFQSCYTCGPAXAWLQBVOKHGCRHNKTXLYSCXMFECECEC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NUVQMIJAGGYKVFJYETUFMGZEYUKFXEAVLQTIWUOADINPNPSQCWADGMRVPFAGRCMVURLRBRMDAKDJNIOGJLPCHEINYBRXSCCVVBCWM");
    tmp_msg_0.predicate.assign("UOEFNMJXCOVXPOWLIFITMOUNVOJKAFLOFTQELYRBWFEPJQYEDLGNRKTFGBFCQXTRQDZMRXEVLMQZCUAVNECIGXDSACGBDSSFUYYLUPTYMRGYACIGWGALAHDDTELBAOXKBVFHLTHBGWSQIMRWHAJWPJNMWHRKUBNRZKOGTXIPNQSIUYFSQPDCHKZJHJWZNRQNSZZMZVUHGRXYMPD");
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
    msg.setTimeStamp(0.615801423467);
    msg.setSource(10166U);
    msg.setSourceEntity(20U);
    msg.setDestination(29557U);
    msg.setDestinationEntity(196U);
    msg.op = 22U;
    msg.goal_id.assign("IAOZFNVDIKTSTEWDAVVEYBLFIHHONBRQAQLQWGMKMSTNOVJOPJLHRKUKAROSZNTJKEMIZDRRRNUJYFMJXEGSGONLXGKQBNYRBJBUSJPFDBJCKDNTAU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FWLKEHAXGROGMUSZVOSPFMNCBDNZLGTYIGZPQNKYXLTINUEGQPGIOVJVRTDHIFMBDQCTUPDHFKLJXIDUMGCNABJSSAROEFZXDEUZPWHMPLCBIUZHSCTGISUVNZCUWYBMSHXJEJKWVNYNIROJFAOOOGAXRVKKESYLARWXEMHQWLWJBPDPJFZHNOIQKIJTEUXCJQFVFCCLPDYRTMHMXTWNDYKQWHQSRGVAOAAUC");
    tmp_msg_0.predicate.assign("UZKRFUBODPSOMAXBBGAEWSF");
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
    msg.setTimeStamp(0.430352564564);
    msg.setSource(45638U);
    msg.setSourceEntity(229U);
    msg.setDestination(20462U);
    msg.setDestinationEntity(249U);
    msg.op = 41U;
    msg.goal_id.assign("JXMNNQLKFCTQCGKZWXIPKUEEHGSMYRMDWVGWBXUIDGVJNUVGCPGAUDZSPWJWMARFRVIGIVNNFEBGVBSELRCUHHTRTRMVDYOHDKOTIUIBZPTERWNFLWEZXCATAPFHHYXPUJQKXEVCOAOQXQFSOPCTL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VJYQDARNUDHNARCMGMTBWWFIHKYHRZCJHNVFPLZFJCYBMNPCASDLDCUMRDBGLRJJJZQAGOEJNWCGRIFOZTQKVQAVOSILLEIMNKCHDFKNTMIWHBNTWIDUFLPRGIZTRBMEMOJFEPK");
    tmp_msg_0.predicate.assign("PAOKLPYEYUPOFEMMYMRLJMQJXGALGOVSBIROVXPBMQTGCWSXGEDPKWLUCVTSXNYRBCATKHDTJLQKJJVDQYZZRXQINWDHUJRKUVUIINTLOENSXHHGICNGPXDDIVWSAPACWNQHMEFLLBCYMDJFSDVAPJJSHZFZHNYRTVZTLXTOXJEQBZWVUCWOEYGEEBHKMNFQYNUBRAPOFMOEWFIRZQDHZGCWTDBQZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KYGWTYUZLUKSQSEGZXIOBGRJPVWURZPAUEAKPYFNNKOFFSVSGTJDSBLQHGGSKEAJFEREBNKLINPAPDBJAQCRKDCPMZJOUFUPMRRRHGLARCCUPXXJQUEASYYQJISD");
    tmp_tmp_msg_0_0.attr_type = 184U;
    tmp_tmp_msg_0_0.min.assign("GCZUNSFTJBFSVCAIPJOSABQLCCCIDXLKWMVVHROBCMVNUHWCZGLQYPTKIWQMJQSERVJEJQQTVZLUGEBLHMNEUVFXJOIYOSLEUDDWYKLKDWRIUSRBAWXXAEKWDZKGTPBUQDCQEYNRPRXYBOWOCMJKXAUBLBTDYDMAZXUGXSRAHDTHWKUBZOGIJYTIPGYCFRKXLPFXHJVMOGAY");
    tmp_tmp_msg_0_0.max.assign("GCFPXHVYLPWWKQZQDAWMNMNPGZCPHZRBMCMTSWCWGOIKRUAWZETSBSSYEKDXJCJOQKECFOSLXNKPRYBZCUGWRHGOPDTLCJUAPTZRJLHXDINETPVVBSDAJQFZXXTWRXBVYVHOHMINOTRAQLNKIVNFWZAFRAHJINAAOEEFWHAFVCUBMDBIKILUYDDKSFKTLBSUQYSRIYPZUOXHMJIEDRNJXFOEOTYYQMJVGBBGEVLLLQNQKMSMZHDCPQUFTGE");
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
    msg.setTimeStamp(0.826299097989);
    msg.setSource(36510U);
    msg.setSourceEntity(226U);
    msg.setDestination(39369U);
    msg.setDestinationEntity(242U);
    msg.name.assign("BLVRNOTLUOOBXWBASYBESLPGAIMFHECEJVLJOGSYUSYVCPFYCKGKPYONXYWIAWUIHJBHUTFJMXZIQLDLYRZTYEDSWBGDRKVOKUPPCUBQJMVAOHYFWFGSGZXWFJWHAIGKTENXXUMNZSTVJETZODKOMNVIQCSKPBCAIXFPAJPGXCDMVXYWHUDLNNMTESMHNOQMZDQVARWEMAQDZIKUDTRICRARQ");
    msg.attr_type = 209U;
    msg.min.assign("QTAQYFQLMNTNLGRMUGBFPJGRZHKSGDXIIZAJOTWTOSKBCANJEKRRWOAICJXZZKBBUCDAFOXCMKNRQPPBMGXKOONGIEVASPVYBMXFPGEUFQRTORSVEEJGWDJXZAGTNKDISBACVZJSEBHVLSNPHQKWQZABTLKMMPVYIUFRWHZSVCRTKILYNNHLIHJUXCDUHLYZASDWLYVWOZPFBQHQMHPOPLYUEITWVXXEUFVYGWLMYFESTQHJNYXWCDCF");
    msg.max.assign("FPHEMKZIQTCJRKGVPGJIFHJPNHK");

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
    msg.setTimeStamp(0.344454156771);
    msg.setSource(49934U);
    msg.setSourceEntity(55U);
    msg.setDestination(18661U);
    msg.setDestinationEntity(134U);
    msg.name.assign("WONXWZETPTTDCOJPJLSVXNWYRIKFXKAHFCEFLFCRXAIWEBJKSVZYHXAQRKLCMUKDOYZOYQZUGSONYZSCKGUHXRJPVGXASZGLDTYMDVIBDXIMSQVTUQKERIJVAGPFQMUHGAHOPDTVTOLEBRBQEAJLJMRNZNPUEOIMBXUJRPNZCWDTHQYNOAZSEWPLLAMVLJNUNVABDDBEMWYCFGDHTCSZGKQWBLK");
    msg.attr_type = 90U;
    msg.min.assign("MNOWXGHQPTBYSIFYEGSUQMLITXOFYRORAABGVXQTBUSJDDJWADBWTKYSCLICDDNKWPHGDWBDKFPXEWFUNPPIIPEIJMXRWJISKYVYRPAVTELOFZUYCRE");
    msg.max.assign("TMJWDVFYGNLTOWSSQMBUHXMRYOKTBGLZEKPIWGRUMWBRZALJYXTSGPBMVXMBISJIPYKFHSAZDQTZWBCSEPQJZJFPMOUKRFOQSPJEVQECVAMQSNOUIPKKRHABIAWLLNOGGENCHILHOMQJFXFYUZNTCZQELCZKXNICWHENDJTPNRLOQTIENGACCCFXDOKWWFYEHXPADNTPIVUZYUTYKGVUDVSDL");

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
    msg.setTimeStamp(0.221253285806);
    msg.setSource(41909U);
    msg.setSourceEntity(115U);
    msg.setDestination(41294U);
    msg.setDestinationEntity(63U);
    msg.name.assign("SEOQAJGENNABVYPLAAHWFFARRHDSXKUDPWNUCATKAPUSCHPXCFJVIQUMYBLYLOIOKIEDGFMVEFEGMZWLLUSCLDTSSWBIXYPQFNQAUCKEPVWQZTVWREEZZOPCRHKZIRQZEVRXAZHMSWCNHCOSGFFRLSTMXLDGOPTBBYKTUX");
    msg.attr_type = 179U;
    msg.min.assign("CELSBQCENRDYNPOFVIOBLFSWIDYARRSTIJYLRRMKYKYAPHIQEUNWHZDBJZRZZNHBDSFCMANWKOPRGJSVUTXASXDPWXKOOCBXJQHBXYFUWLFJTQEQKMBVNCTGAJEOEKQUMPTSPGNYTXFIHRBOUCGDVIEXXCHGAFRHPCIZPURQGWPMAKKXSUZYJPVOQZLZQLVUBNUVWTLMGIYETFZZWLODQEA");
    msg.max.assign("PLPCMMZDFJJQYEMHLPZZSI");

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
    msg.setTimeStamp(0.37205304975);
    msg.setSource(46037U);
    msg.setSourceEntity(58U);
    msg.setDestination(65282U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("OAMKQQYQNBCHWJBPQEYURLYXTNBKFLTDQJFOPTFIVOFUBRDNRZUQLNAMUQKSIHYZMRENIWLEFANDRZCZTJKFRFLJHBAPHGRHAJYWGXMAMFMPWQEFGDXKYLBHULVTHVWZIKXCMSJSIIXURABBJALVBMVGLISBVSTPEUXKZOVGGCVWTEFUPUCVMOIWTSCZMOZHDNNTSKZVYKPDWQPDJQNUREYGOJJDPGWOYYIPNGEOOXWEIALHZGCRXCHDD");
    msg.predicate.assign("IGUKOLTAEVLHIHNYFOBLCPXJWXPJNCWKZYFHKBGYFNGTVGTHDMRMBPFUXVXMDIORHSYZWIBRDGFCSQIUGYH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BUDNFWYLBQGRYQWQTESKHSXINGWIGYPLBNYJAUZCFAGDRJPOFJBYEINUXI");
    tmp_msg_0.attr_type = 230U;
    tmp_msg_0.min.assign("XSXJOHLVSKMUXGNIDARGVSDSZDCFDLJPK");
    tmp_msg_0.max.assign("KOFHGBMLEWOHCCZKXABJYEXDEVSUXJAQWNAGZDUSKMJYVKVYMREQNXJUFONHTWVCBURNQXECDZQUTTBIVMVPHPICSRJQIMTESBPQGFGUMMXYGOTBQLLWFENASJUJLLHHRRXAWDCGYLBIFNTQKMTRNZGPALZYI");
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
    msg.setTimeStamp(0.493585034442);
    msg.setSource(41041U);
    msg.setSourceEntity(137U);
    msg.setDestination(25021U);
    msg.setDestinationEntity(126U);
    msg.timeline.assign("CREUAIAZMREKYPZTFU");
    msg.predicate.assign("KSHGMNZLSUGZOEMKZREAZDOUBQHKDJJNXGAQQENDKYICZAOXZPITAIHXLYIRNBCRINGFXLUEIHDPUYYAFVKWDHUPWQPJXYCXUCCZVOMDGBYPJTTMBRIGTUFRHFGNIRXQVDLYSVLLDOLEYASSCYOSSSOBDSRRAFKVJQGHQEMVETMJRBCUEWJKPPMTXEIGNBVFWIQLZXAZOAKCJRSFNAXDBFTLMUCJKWWHBL");

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
    msg.setTimeStamp(0.890435878924);
    msg.setSource(804U);
    msg.setSourceEntity(17U);
    msg.setDestination(31148U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("PTMSXATHRDPFFZJHJPWLIWXAQLZOGNKRDBNRZGUWBFLQUZOCBYILLLIQYHGTMXDOEGAVYACIWJOOICKXXRAUQAFAHBRATCPSVCHAMEKYYDZBYIJJQOJCHPFKLUMXZTUXMFOIOWNTBBMSRCSGBSSVUVKTMPHVDYERFKNPPG");
    msg.predicate.assign("WUOCMOIOLZPGZEWXIMJJBYVYAPNAXZGEXOSFHKJJNWEWKMEKONBSMNIGNRPYRDHJJSIBWHADLVXLUTHWCKQMARQZWKBBEJPOPVUBGMDQIXTQPHFAMHCYALWOSIVDXCFNTTDKVONHUBERYQPOVFLUGQGBGCYZSPQUKRAREBJJNZPTDBFYHYODTLFRQKFXG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LIIDHRDLRYCXTMLQSXNCGAMUAOWXJSWDHNRIINMHOHDWYJKBVAFSCAGQWSOKECEPSBMRXAZQIBYNJYZGKLVDNTUHODIXQPCAWKFVKOYPLUABQCVYWOLGEXWOIRRDCGPSTWDRGPMQSHJHCLOAUGXFZHVFKMYBZLGUVNNRTBSZZNZHYWFACMVJFIRQIIKETZJLUVRMKXEOPYBUXAFDPWDYBQQHMTEPMEVNJCJNUTTU");
    tmp_msg_0.attr_type = 165U;
    tmp_msg_0.min.assign("UQSNOPMKTJNAILLHNQHCYAUULLTCFVEYXZSWPBOWWGJQIKFBTVDTSHIEAVDABOYXXDNKFOFLTVPISYGHPYZFDTJQZPZGQCQJMYPUIAAXRUECUAREGRKOJQODAZBFUFMWYXLVPYNSOKWTPCWWBCPDVAHEMWJXNIIFKLDTRGUJCDETVCJZWILUHBGLESEZHBXNFRQSVBRHQRHWZCMMIUEXOACFKYYSMKGSRKZMBD");
    tmp_msg_0.max.assign("JVSIDRLDRQXHQCSZJIKEBMUIOGAPQXUVEAOBWKWTHSJWPGHOYSYVUBCXLNXPTPWBBMRJSHWJMKYAHCBVLHKMFGPYQPMTFIFLTQDFGLYUONQUNSCTEMEESAYLNFTSKFCHNROCQFWWGZVMPNZIFZRRPIJZCXUZKGKDOTLJQVKPCNDXDROODKYOCJEALYHGYAIZQRSBWDVGAULWXVAKCZVU");
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
    msg.setTimeStamp(0.227038821792);
    msg.setSource(58771U);
    msg.setSourceEntity(133U);
    msg.setDestination(57019U);
    msg.setDestinationEntity(105U);
    msg.reactor.assign("FANZPXENWLTOKEZHHISMQLQZTPZHWTHZETSCSIISNYCAPVHXURUWDPDEKFEESKWJYUEQRKBSYZKUGUBEDCOGSZGQPOZLWVCGZNOIDKOKEFRGQJWHJHFWALVYIQXQBMGHCSJBS");

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
    msg.setTimeStamp(0.0899894241713);
    msg.setSource(52171U);
    msg.setSourceEntity(114U);
    msg.setDestination(46462U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("TIQLIMZGHGPIGVTFJJBY");

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
    msg.setTimeStamp(0.589302802757);
    msg.setSource(16748U);
    msg.setSourceEntity(91U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(236U);
    msg.reactor.assign("PSOIYRNEKTDKLNKTSQWPNXDNVDWJKYZEJYFCPEABUQMYP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PJZOGUVZEFLVWZDMJUHVHZAALKBTXBSPOLQVSTDOIIWERVYDRGXPRSTMJSAHGMINOHCKIKECLONFXKRLRNPBBYPJXWFCLQUALEROCUGFKLGKDYVTPQDAHECZYCWGSXEYQFUGNMHCOXCDAVYSNQGNOQDTWYUQKRJIFUWRBZBFREVZJMEKEFNVHQMHFYOGYPSVIFDITNTXTPDWJHTNJKNCOSGZTPMCMAEIXJABJXS");
    tmp_msg_0.predicate.assign("MAPEJHJXEGGWXWYLHCIHJTFWJHMJKFZAKQXGBSULGXEBJBIMZKAWSSQMDMREUXPCIYPXCNQTMILEDGEMUBPSDIULTFWPCOWUCXGPQBBRGSJFCURZVUBAOREZJUCAOMBOHVDLYLVYZBQWKDKWLAOSKYSHNAVYIWRVYYBYNWRCVOPOVIEYZGUGLXNNDHTMAZHQNTSAZSINOHZFPXLSJT");
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
    msg.setTimeStamp(0.341440629902);
    msg.setSource(2941U);
    msg.setSourceEntity(195U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(136U);
    msg.id = 31U;
    msg.width = 20882U;
    msg.height = 37798U;
    msg.widthstep = 44814U;
    msg.channels = 243U;
    msg.depth = 181U;
    msg.finaldata = 238U;
    const char tmp_msg_0[] = {22, -52, 32, -104, -96, -73, 117, 112, 22, 75, -74, -73, -36, -83, -90, 75, -2, 33, 107, 43, 68, 81, 120, -19, 58, -52, 9, 68, -120, 32, 7, 6};
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
    msg.setTimeStamp(0.457536165593);
    msg.setSource(555U);
    msg.setSourceEntity(120U);
    msg.setDestination(27045U);
    msg.setDestinationEntity(63U);
    msg.id = 73U;
    msg.width = 13019U;
    msg.height = 8598U;
    msg.widthstep = 31802U;
    msg.channels = 159U;
    msg.depth = 97U;
    msg.finaldata = 238U;
    const char tmp_msg_0[] = {-23, 114, 88, -19, 7, 56, 57, 53, 117, 24, -25, 66, 89, -38, -9, 108, -125, -91, 45, 75, 39, 52, 30, -117, -66, -13, -88, 121, -67, -7, 29, -2, -88, -2, -73, -37, 40, 15, -50, -109, -92, 78, 4, 103, 116, -5, -107, 5, -114, -89, -57, -38, 1, 49, 85, -88, -122, 33, -87, 100, -7, -112, -25, -14, 22, -109, -109, 124, 106, 84, -100, 29, 81, -50, -8, -8, 34, 65, -67, 107, -5, 55, 6, 27, 58, 70, 101, 113, 102, 100, -54, 21, 8, -20, -9, -9, -83, -68, 55, -111, -89, -5, -86, 64, 28, -29, -56, 113, 78, -85, 45, 98, -52, -12, -26, -92, -34, 115, 54, -113, 125, -90, 2, 108, 11, -127, -39, -53, 14, 54, -112, -105, -38, -87, -34, 6, 17, 36, 89, -106, -84, 104, -34, 32, -93, 26, 0, 63, -90, 64, -49, -70, -101, 27, -100, -94, 71, 77, 33, 67, 121, -15, 125, -49, 68, -72, 20, -124, 53, 20, 27, 103, -120, -76, -46, 21, 108, 93, -1, 116, 75, 72, -61, 44, -84, 37, -101, -87, -128, -22, -86, -29, -114, -76, -125, -5, 30, -94, 92, 40, -127, 94, 33, -79};
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
    msg.setTimeStamp(0.783540781336);
    msg.setSource(21995U);
    msg.setSourceEntity(130U);
    msg.setDestination(30723U);
    msg.setDestinationEntity(17U);
    msg.id = 129U;
    msg.width = 28670U;
    msg.height = 10046U;
    msg.widthstep = 3432U;
    msg.channels = 235U;
    msg.depth = 241U;
    msg.finaldata = 185U;
    const char tmp_msg_0[] = {117, 59, 92, 52, -90, -109, 114, 12, 1, -27, 79, -89, -120, 30, 112, -59, 88, 58, -12, 15, -99, -43, 50, 17, 49, 125, -67, -33, -101, 27, -25, -108, -95, -88, -23, -65, -47, -110, 77, -61, 100, 87, 59, -4, 104, -113, -9, -89, -67, -111, 105, 61, 58, 119, -48, 40, -103, 66, 105, -4, -93, -63, -1, -127, 99, 72, -120, -18, 18, -68, 107, -101, -58, 37, 13, -2, 37, -13, 64, 77, 65, 67, -44, -77};
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
    msg.setTimeStamp(0.723586720997);
    msg.setSource(60128U);
    msg.setSourceEntity(23U);
    msg.setDestination(17584U);
    msg.setDestinationEntity(253U);
    msg.width = 21353U;
    msg.height = 29770U;
    msg.channels = 239U;
    msg.depth = 151U;
    const char tmp_msg_0[] = {59, 33, -51, 80, 79, -69, 15, -38, -22, -38, -90, -44, 12, -19, 86, 116, 68, 73, -66, -102, 27, -73, -6, -74, 30, -47, 29, -103, 55, -94, 7, 34, -104, 104, 68, -39, -23, 60, -8, -67, 16, 50, 125, -28, 63, 14, 99, -80, -58, 59, 125, 69, -97, -26, 104, -86, 28, 124, -69, 68, 22, 57, -8, 29, -75, 123, 30, 47, 7, -109, -29, 95, -10, 81, -104, 116, 58, 47, 6, -110, -7, 35, -46, 98, 39, -72, 79, -4, 81, -20, 105, 62, 19, -111, 58, 57, 76, 105, -38, 97, -80, -15, -2, -71, 39, 109, 80, -120, -39, 41, 96, -8, -30, -27, -46, 65, -56, -17, 12, 61, 86, 112, 20, -119, 56, -2, -84, -33, 67, -26, -74, -110, -43, 27, -20, -113, -36, 17, 73, -55, 35, 53, 82, 47, 18, -120, 106, 36, -80, 47, 107, 57, 125, -6, -71, 33, -56, -53, 90, -81, 99, -20, -90, 7, 112, 60, -79, 54, 30, -68, 86, 61, 77, 94, -32, -14, -103, 94, 85, -73, 11, 64, -61, -75, -18, 51, 82, 69, -31, 114, 30, -20, 113, 1, 26, 77, -56, 105, 118, 1, -100, 72, -116};
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
    msg.setTimeStamp(0.548000623073);
    msg.setSource(59082U);
    msg.setSourceEntity(135U);
    msg.setDestination(38737U);
    msg.setDestinationEntity(212U);
    msg.width = 43538U;
    msg.height = 40656U;
    msg.channels = 172U;
    msg.depth = 234U;
    const char tmp_msg_0[] = {-46, -75, 126, -77, -85, 0, 117, -89, 85, -51, 114, 68, 106, -92, -99, 121, 98, 92, -114, -13, -118, -76, 125, 120, -125, 46, 94, 49, -50, -94, 77, -34, -21, 25, -98, -14, -125, 104, -24, 32, -48, -103, 124, 86, -116, 15, -30, -107, 119, 60, 88, 3, -33, 54, -86, 94, 11, -44, 54, -43, -19, -117, 17, -25, 10, -92, -92, -40, 62, 27, -126, -19, 116, -78, -120, 117, -102, 36, 92, 114, -96, -122, -64, -42, 117, 70, 112, -15, -17, 25, 4, -1, -76, -30, 88, 10, -36, 36, 26, 29, 4, 21, -16, 109, -17, -39, -74, -98, 20, -12, -77, -9, 64, 69, 126, -17, -22, -127, 8, -52, -116, -43, -83, -88, 60, 33, 61, -24, 122, 29, 93, -39, 81, 38, 66, -21, 119, 46, 68, -126, -103, 100, 126, 114, 94, 121, 70, 5, 120, -84, 122, -104, 44, -50, -42, 61, 92, 71, -35, -81, -128, 84, -116, 69, -42, 96, 73, 50, -104, 58, -120, 37, -23, -7, -109, -45, 116, 44, -15, -107, 32, -59, -121, 32, -112, -115, 62, 96, 113, -24, -31, -106, -53, 67, -6, 122, 24, 17, 49, -6, 4, 55, 108, 69, -79, -105, 17, 50, -23, 104, -32, 111, -122};
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
    msg.setTimeStamp(0.484797538722);
    msg.setSource(23594U);
    msg.setSourceEntity(221U);
    msg.setDestination(36690U);
    msg.setDestinationEntity(74U);
    msg.width = 20997U;
    msg.height = 26490U;
    msg.channels = 230U;
    msg.depth = 185U;
    const char tmp_msg_0[] = {13, -17, 119, 66, -24, -43, -52, -114, -72, -120, -127, 122, 120, -77, -89, -87, 35, 3, 84, -44, -44, 107, -110, -40, -17, -71, 2, 57, 15, -118, 125, -106, -127, 65, -92, -51, 126, -71, 6, 28, 91, 99, 7, 71, 85, 48, 101};
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
    msg.setTimeStamp(0.826150987092);
    msg.setSource(47855U);
    msg.setSourceEntity(34U);
    msg.setDestination(1097U);
    msg.setDestinationEntity(112U);
    msg.frameid = 65U;
    const char tmp_msg_0[] = {115, 53, -38, 69, -106, -2, 30, -128, 104, 9, 126, -25, 61, -37, -121, 88, 49, 36, -25, -2, -100, 35, 60, 118, -34, 40, 51, -122, 3, 55, 5, -90, -128, 26, 116, -64, -118, 108, 41, 78, 36, -44, 87, 79};
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
    msg.setTimeStamp(0.258932269425);
    msg.setSource(19486U);
    msg.setSourceEntity(43U);
    msg.setDestination(43700U);
    msg.setDestinationEntity(133U);
    msg.frameid = 177U;
    const char tmp_msg_0[] = {55, 33, -31, 73, -59, 84, -88, 63, -11, -110, 16, 51, -34, -70, -36, 29, -62, -15, 33, 0, 37, 125, 116, -53, -15, -99, 113, -74, -122, 32, 33, -69, -73, -77, -84, -31, -117, 30, 117, 89, 92, 76, -79};
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
    msg.setTimeStamp(0.412548274172);
    msg.setSource(56530U);
    msg.setSourceEntity(225U);
    msg.setDestination(38939U);
    msg.setDestinationEntity(83U);
    msg.frameid = 32U;
    const char tmp_msg_0[] = {-22, 1, -23, 76, 71, -24, -59, 56, -93, -88, 99, -44, 115, -81, -12, 23, 59, -83, -22, -91, 1, 117, 40, 16, -12, 88, 120, 76, -57, 37, -18, -12, -120, -20, -13, 22, -24, -115, 52, -117, 38, 46, 71, 107, -105, -73, 43, 47, -80, -87, -39, -29, -53, -15, 3, 85, -24, -29, 60, -24, 41, 126, -48, -18, -31, 101, 53, -45, -108, 104, -84, -38, -118, -23, 33, 77, 103, -69, -46, 67, -74, 41, 10, -125, -5, 9, 22, -72, 43, 103, -125, -120, 91, 40, 47, -118, -34, -92, 65, -39, -121, 8, 109, 111, 1, -112, -84, 29, -109, 93, -17, 3, 110, -17, 87, 38, -123, 57, -105, -124, 115, -20, -99, 111, 36, 61, -38, 90, 82, 71, 97, -93, 2, 113, -87, -13, 69, 91, 19, -101, 46, -15, -115, -36, 26, -17, -127, 31, -66, 34, 55, 77, 99, 53, 94, 99, 46, 113, -105, -4, -61, -48, 121};
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
    msg.setTimeStamp(0.230599721502);
    msg.setSource(46315U);
    msg.setSourceEntity(98U);
    msg.setDestination(14131U);
    msg.setDestinationEntity(13U);
    msg.fps = 42U;
    msg.quality = 235U;
    msg.reps = 231U;
    msg.tsize = 30U;

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
    msg.setTimeStamp(0.342454351947);
    msg.setSource(49205U);
    msg.setSourceEntity(195U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(140U);
    msg.fps = 57U;
    msg.quality = 60U;
    msg.reps = 89U;
    msg.tsize = 80U;

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
    msg.setTimeStamp(0.93029557078);
    msg.setSource(14324U);
    msg.setSourceEntity(77U);
    msg.setDestination(26578U);
    msg.setDestinationEntity(44U);
    msg.fps = 180U;
    msg.quality = 8U;
    msg.reps = 237U;
    msg.tsize = 174U;

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
    msg.setTimeStamp(0.0131941103225);
    msg.setSource(53366U);
    msg.setSourceEntity(48U);
    msg.setDestination(17962U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.826397121002;
    msg.lon = 0.489294676407;
    msg.depth = 203U;
    msg.speed = 0.42695267991;
    msg.psi = 0.0681914848342;

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
    msg.setTimeStamp(0.715301109594);
    msg.setSource(23066U);
    msg.setSourceEntity(194U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.0068366791667;
    msg.lon = 0.907082841391;
    msg.depth = 219U;
    msg.speed = 0.219390395898;
    msg.psi = 0.326348406211;

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
    msg.setTimeStamp(0.322208412349);
    msg.setSource(32686U);
    msg.setSourceEntity(26U);
    msg.setDestination(3959U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.0586247393434;
    msg.lon = 0.783500048523;
    msg.depth = 225U;
    msg.speed = 0.890357187514;
    msg.psi = 0.62711582278;

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
    msg.setTimeStamp(0.895493412832);
    msg.setSource(65065U);
    msg.setSourceEntity(226U);
    msg.setDestination(51367U);
    msg.setDestinationEntity(242U);
    msg.label.assign("AEIELOHVYVIVFCPTPIBM");
    msg.lat = 0.00489766598411;
    msg.lon = 0.213159855885;
    msg.z = 0.152677164233;
    msg.z_units = 163U;
    msg.cog = 0.53871430037;
    msg.sog = 0.742360552164;

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
    msg.setTimeStamp(0.377209757882);
    msg.setSource(31004U);
    msg.setSourceEntity(110U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(47U);
    msg.label.assign("SWVYTMMJYWSSHMZMPNWLB");
    msg.lat = 0.161503966706;
    msg.lon = 0.280748745828;
    msg.z = 0.0926745753235;
    msg.z_units = 72U;
    msg.cog = 0.93951373437;
    msg.sog = 0.734286207796;

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
    msg.setTimeStamp(0.260401252352);
    msg.setSource(31511U);
    msg.setSourceEntity(154U);
    msg.setDestination(18256U);
    msg.setDestinationEntity(204U);
    msg.label.assign("TRYTUXZMCRBNIFXWGBOCGFKLDKSUPSCBFXMQMQWDNACYATSADDRCHSOAKYQWXXVCHLDASENIVZJ");
    msg.lat = 0.363663528246;
    msg.lon = 0.429270189456;
    msg.z = 0.195472509983;
    msg.z_units = 102U;
    msg.cog = 0.574589104051;
    msg.sog = 0.912088410845;

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
    msg.setTimeStamp(0.831795117499);
    msg.setSource(26179U);
    msg.setSourceEntity(222U);
    msg.setDestination(54119U);
    msg.setDestinationEntity(105U);
    msg.name.assign("OIXTYGFJMTLYABRVXCGSYNMNKKHYIYBMBRGHAUTZLWBQOWJOSUHCMS");
    msg.value.assign("ZMWXPXSTYFRHRDLPNSYAMGJFBRIPDWONNQDXJWVJBZEQYPXHOGACZGADZTUCSGHTWWARXXCJGZKMQTFOIEHJNOQAKFESSRSVRGHFPOFVIGTIEAJQUDWIMVDQQMPIVBEEYNMRNSEUITWCUHRQULWFMBAXSLWEOGSNCIYUUZCHKQMMCPJUFHXNUTOKJOVLGHDIOBO");

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
    msg.setTimeStamp(0.685481388567);
    msg.setSource(15502U);
    msg.setSourceEntity(228U);
    msg.setDestination(26572U);
    msg.setDestinationEntity(254U);
    msg.name.assign("KEWIFKJZLFFLIIHWUCAQPBSWZYDJRBQOAQXGNGSOYRRPCTCELIKYHSNHQRHWBGWXJEZNPVMQMIDLSIJOWJAPOECNQNCMBUGCZMTNXDGJSEORUTMATHBHNIWMEHKMDJGSZPLPVUGZNUFKEVZYSXXXCRJRDUCT");
    msg.value.assign("BKUZMRICONVQFMNPQOEWSDHPWJUHYETTGEUVGHBNTQAYIGYTTBTELFWPXCVCOKWABAKZTZCNWXJVBIOYKSDXXZZCJWPZQPQKRRMIJMIMHPDXTCGFNJRYAQFSRGQLTJUHJPGLOZUMDOMQLDHWBIYAEZBXUOCKGFAGOPZNDV");

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
    msg.setTimeStamp(0.270455889237);
    msg.setSource(35041U);
    msg.setSourceEntity(30U);
    msg.setDestination(36642U);
    msg.setDestinationEntity(117U);
    msg.name.assign("YVKNUQTVFKNDILGEXDFRJIOBJMZBQMMLNZVEPFIQDLDW");
    msg.value.assign("ONDUVTHJCRCRWUTFADREJIRUGEMRPOUMGZEQGIDLWGJWUQCOVSIZPUZCSQKXYEXRCXXGGVZYPM");

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
    msg.setTimeStamp(0.300415407151);
    msg.setSource(41148U);
    msg.setSourceEntity(231U);
    msg.setDestination(55707U);
    msg.setDestinationEntity(116U);
    msg.name.assign("UVVHRHGUADAMXRGMFMEQSCYUDIOOPYIBZJKLSFBHIRLRWIRDYKLGHATMZ");

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
    msg.setTimeStamp(0.547021187852);
    msg.setSource(59861U);
    msg.setSourceEntity(67U);
    msg.setDestination(28180U);
    msg.setDestinationEntity(183U);
    msg.name.assign("YWGCRMKKWTUROTLZTCWOMEPBTLALYHPJYNCHPSQDRTDRWJBAGIMUPEMZIZQPYOVYMYYQIAXNJBIFNKHWFOSJFCPJYIUVKAONSURQKMEDMPEAOTPMGTUEZNZFUKBRYNZAFFLBFQJGOKXRNLXIJDUXEDWKHKHIF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LKIXDTHDXAFJOIUVNKOQNURPMPSOXQSMYKAKRYYLFTEBLZUZVJWJBGQWWYIGLXKCZGSERIMROAGRQKBPJWUADIBMJMPCDODTKJWIGSFRVLGFVSBXMVPTZAEWCBFDANUFNHRFVOYEGKGQEHNKEUAHLBKINCGAZHYSXZTIWZQDDPVFEEMDUSNNSLUQRQAHEVJPTZCWBPNSTCO");
    tmp_msg_0.value.assign("GKVCKWGAXQQDCYJSOSKGVTHDQJFHBAYFFOYNECROGUYTQPDFBSAUPENBSZPBNUAFHZXVOXBZMVFQKGRWEJ");
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
    msg.setTimeStamp(0.262625372677);
    msg.setSource(54068U);
    msg.setSourceEntity(89U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(138U);
    msg.name.assign("YHGEAARIRNECLLCDCGBMJLDJKGOXZURQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NIXDJSBGJKVGKYKOHDSMZWBCHEQPXXULRKDQPMZVORNQDTIFVEVDFRQDJAJSHGOUZNMEELPENCWINRDWIWDCISVXNPPAHOJMBKMUUACESCVWUZWLZHQUAKCVFPTTOOLBIA");
    tmp_msg_0.value.assign("JPPAONAEJRLIFZIJGCVHUZENIHMYDACIJBTGHSDOEKQTNBNMGQNNZGZTDTSXSHZJWBYYLDYJAVGJQQTHVKVYKIMAJIQVNEDMWXYRURSBWBCOXFPVMGYVXPPOEZZTMFQYEPMXHIJRHQILUELOEDBGPLFDF");
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
    msg.setTimeStamp(0.701492144563);
    msg.setSource(36687U);
    msg.setSourceEntity(19U);
    msg.setDestination(44816U);
    msg.setDestinationEntity(231U);
    msg.name.assign("IBOVGFMXSHAJHAHUQGIBCTAICGRBRGVZYVWZNWOWLNBKMJZVKPPNCWHXWQFLDNFJWKIOESHRTYDXNNLUDRMSZLUZBPEXXPKDYRCALERXPZBWQCLKIFSOJIKZOFDHVPUMBUTISFHNCJGCWNQX");
    msg.visibility.assign("HIYONEWJSTTAPKANFRTLWEVQCEGFQNAIAANSXHBDVTNIXBHHLWFZULLEWWZLDKTXSURFKGEDHRCYJYXDXSXCBIMOIIMYROLDWGOFYKWJRSHZVVUEAXZBPUGMPRYBYKFQOZDZBHNESLFUNBYIQTSFKUDPPTJLKGYJUZQKMXZCAIPRAJMYPOAZJQQCMIMRVUVZUUVTSGKCPNFODLQPOCFMTAGMGIGOECJNSCWHHJQRHCEDKQSXWB");
    msg.scope.assign("EFIDOIJMUBJCXPENRNMNJDTWWIDOOZPTXOPCSQUJRALQRFUVRRRSEJCQYCTSPFFFQOIQEABBKPXDOATGJLAMKNDYZLSWRZWLBHSFEBPLHR");

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
    msg.setTimeStamp(0.710237464996);
    msg.setSource(44302U);
    msg.setSourceEntity(24U);
    msg.setDestination(60476U);
    msg.setDestinationEntity(242U);
    msg.name.assign("THXPIQRPZETYJQLLHHBJLYRJZSIZESLGMBWMKUYEWTVVOMJLXJYMGSYVWRQHKDQNONBNHPUMVWBGXSLVLWVZOUJFFEISOHZXQMPN");
    msg.visibility.assign("WFQCODYPCHINPOUFTVLGNNZZHEYMMWOJJIARDBJYQOVWBUKXRMXMYSPJCFKBZQFSODDTSAWUXAOMJGKELCPZCRNVYKDPDHSFBYQDKAVEYLKIDTQXXKSECBNVWHECMRWUPNWIJKMPPWLGLMBOIUWUXZZICUFXTLZMAK");
    msg.scope.assign("UQGGKEBOIRXAZROOQLPPKTMAUHCKEEBDZBGMASYCUWPFHDFOPCHZLMSKMFQYVNETXDBMVGJNLFHLPUYECXBZUHQTIQMTOOBLGJAHHDVPVRITZTWWRGFKYKDAYCNCXOMZCFOS");

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
    msg.setTimeStamp(0.412314435279);
    msg.setSource(34600U);
    msg.setSourceEntity(169U);
    msg.setDestination(58760U);
    msg.setDestinationEntity(197U);
    msg.name.assign("EKZHYXWYFOHDYRQMPWBLLJSVQMRQUUUJQUHZIGLIQRWFIGPDZXGETNQGOZLZBVKRCLANAROIVSESUTWYPHGFYADRQDXCOJHLFHFQGKMTBSJGEPZAJFDPQMPKIGEPVUTSAFOLBJFWSCJNANWKVIGOYWHRAEXCXBDIHKODXCACBNKJMMUYKCG");
    msg.visibility.assign("PXETDRKBKXIFTVVJJC");
    msg.scope.assign("DZQZKVIUYOGYFRPQIIACLMKFWFZHVWDWWBORJLPVUXSHGUIUUZBHEVNFWKPTFORYTKDMNZSJZDVLMXBQNLEHISGOPTKSPTKNAPDIZAACBEQDIVMJJDOXSXPYEGZYMCEBWXSAXUCGKXQNDAHTVLSLBTZQQGCSEWEQTYMLTLCUCUWCB");

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
    msg.setTimeStamp(0.109878764678);
    msg.setSource(5851U);
    msg.setSourceEntity(93U);
    msg.setDestination(42326U);
    msg.setDestinationEntity(18U);
    msg.name.assign("BANPPUFBVGPAYTFDOAEXLVWKJOJQTSLQFEQEESNBABPNPTOOTGMVIZXGEJDQTHHUZZRASTMGBCEXLOSXLGXVZLNINNXCSLBWON");

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
    msg.setTimeStamp(0.323048411842);
    msg.setSource(23166U);
    msg.setSourceEntity(168U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(42U);
    msg.name.assign("RSGRSTHWKSQHOWHTRUA");

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
    msg.setTimeStamp(0.982091009129);
    msg.setSource(8366U);
    msg.setSourceEntity(107U);
    msg.setDestination(6588U);
    msg.setDestinationEntity(28U);
    msg.name.assign("UOHIGUWHQLYUUISEVVOJHSKJAXESYOUWLDAZWHHYIDGMYRVDNCYPLBNPMSEQOAFLQZLCRVKPKGFCIBYURTLNVPZDJWVAFSXELHYRNROFBTBMDF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LFNGZDSYIZZBUXDURASWXKCVGCGXFQTRAJTDCDVCDBCYNLYGHEXUYFQAXMSMAAJDOYJQKDOHJIDBPZIAEDMWLKQTETTWWLIJYJSPIUYHVKTKGAMTXGWZIBCGETFEHEMEQKSFTNOPUPUPALIMGWPFRQMHRHFFZSCUOEYRPJNHNXNYHNNISQQUPFXBLDBOEROWQVKGXAORBZCOWCPHSOWJV");
    tmp_msg_0.value.assign("IULOGXVWQMKLFKMIFNARAMCRNGWBCBPYDFEROPSCCWTUOZKRYGVFGCAMC");
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
    msg.setTimeStamp(0.445498896948);
    msg.setSource(22577U);
    msg.setSourceEntity(70U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(212U);
    msg.name.assign("XTCGMYYNESZCAEMQMPERTNYJUMHKTSMUCNNVCMDGIUGQYXFRHDMURFVKHBLHQLBUGAWJIZVQKYHXOZYNQRKSTWGVIVJWGD");

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
    msg.setTimeStamp(0.543415412539);
    msg.setSource(65U);
    msg.setSourceEntity(24U);
    msg.setDestination(56594U);
    msg.setDestinationEntity(25U);
    msg.name.assign("ZFHEAEKIFAVPRZBUEZZIMIDKDWJH");

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
    msg.setTimeStamp(0.93401662825);
    msg.setSource(35010U);
    msg.setSourceEntity(243U);
    msg.setDestination(2916U);
    msg.setDestinationEntity(11U);
    msg.name.assign("SETUKBLAWFZLHGTDRIIAJUHBPPIJNQNPNHKUVEMRRKVGMTQCBSGMBVTIQX");

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
    msg.setTimeStamp(0.728534673256);
    msg.setSource(11101U);
    msg.setSourceEntity(9U);
    msg.setDestination(36699U);
    msg.setDestinationEntity(90U);
    msg.timeout = 2717182783U;

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
    msg.setTimeStamp(0.156303477064);
    msg.setSource(43042U);
    msg.setSourceEntity(29U);
    msg.setDestination(30251U);
    msg.setDestinationEntity(104U);
    msg.timeout = 346762075U;

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
    msg.setTimeStamp(0.380938183598);
    msg.setSource(38682U);
    msg.setSourceEntity(137U);
    msg.setDestination(3127U);
    msg.setDestinationEntity(250U);
    msg.timeout = 3812379929U;

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
    msg.setTimeStamp(0.741737992227);
    msg.setSource(570U);
    msg.setSourceEntity(73U);
    msg.setDestination(13452U);
    msg.setDestinationEntity(118U);
    msg.sessid = 2385030944U;

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
    msg.setTimeStamp(0.0842808233908);
    msg.setSource(40284U);
    msg.setSourceEntity(16U);
    msg.setDestination(17394U);
    msg.setDestinationEntity(55U);
    msg.sessid = 1513217971U;

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
    msg.setTimeStamp(0.740538375949);
    msg.setSource(36443U);
    msg.setSourceEntity(245U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(199U);
    msg.sessid = 1611369720U;

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
    msg.setTimeStamp(0.329712345857);
    msg.setSource(510U);
    msg.setSourceEntity(85U);
    msg.setDestination(42916U);
    msg.setDestinationEntity(105U);
    msg.sessid = 3260642165U;
    msg.messages.assign("HYIAWJEXLKPPWPWGOPSPRBORCYUCLELEFYHINUAFHEVSCDIKZVZNENDMIITGED");

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
    msg.setTimeStamp(0.300350502065);
    msg.setSource(8355U);
    msg.setSourceEntity(151U);
    msg.setDestination(33915U);
    msg.setDestinationEntity(84U);
    msg.sessid = 1973558281U;
    msg.messages.assign("ZHCSRGQCWXFDTMPLBWNVPSJNBFUSAVNCCUPDSCHUGMBXILURAIAYCDHEETPFEUWRXENMXVRDQUNVXMLOROAXBBULBVYPSZNQEJLHFGMWSTEYOICHMCSJYLQDZLMFQHVQBBUKKEJYOSDACAGLYNEGFBNJUKUVQ");

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
    msg.setTimeStamp(0.289837288262);
    msg.setSource(25117U);
    msg.setSourceEntity(57U);
    msg.setDestination(40286U);
    msg.setDestinationEntity(191U);
    msg.sessid = 3073937443U;
    msg.messages.assign("OJWQBXEFBIJXOPFLRNHYHANESRYAIIABNTAOTTZCDPIGSSZMGWRZQSUHFPPEHVFTTQAUXGILATUQDAVOEHSTYZRVNDNBBMCKGMWCZPK");

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
    msg.setTimeStamp(0.924017383835);
    msg.setSource(42562U);
    msg.setSourceEntity(107U);
    msg.setDestination(30858U);
    msg.setDestinationEntity(29U);
    msg.sessid = 3716692580U;

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
    msg.setTimeStamp(0.200381756612);
    msg.setSource(22852U);
    msg.setSourceEntity(137U);
    msg.setDestination(57057U);
    msg.setDestinationEntity(18U);
    msg.sessid = 1918026828U;

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
    msg.setTimeStamp(0.896682651143);
    msg.setSource(13940U);
    msg.setSourceEntity(5U);
    msg.setDestination(48292U);
    msg.setDestinationEntity(115U);
    msg.sessid = 3656631086U;

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
    msg.setTimeStamp(0.207243283424);
    msg.setSource(47843U);
    msg.setSourceEntity(245U);
    msg.setDestination(43144U);
    msg.setDestinationEntity(228U);
    msg.sessid = 3055233225U;
    msg.status = 64U;

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
    msg.setTimeStamp(0.193045259537);
    msg.setSource(34640U);
    msg.setSourceEntity(248U);
    msg.setDestination(19690U);
    msg.setDestinationEntity(113U);
    msg.sessid = 3646034624U;
    msg.status = 218U;

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
    msg.setTimeStamp(0.111643835967);
    msg.setSource(813U);
    msg.setSourceEntity(116U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(186U);
    msg.sessid = 1877551115U;
    msg.status = 43U;

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
    msg.setTimeStamp(0.391270149996);
    msg.setSource(44539U);
    msg.setSourceEntity(208U);
    msg.setDestination(58282U);
    msg.setDestinationEntity(91U);
    msg.name.assign("LIMMWPZJVCOIDAYZRTCUVXPPIQIKWNDOGWYHNNFVRVLPERHQMHAYEGNRBUSDATIFIMKZCFKUQMTAFYWCLPHNWVFKDKHHIKRNBVLXPAASGCJOZFAWEGBPSMYHPCVGPZDIYLGNSCJFXBMVKAZULTXUUGXOMEJSXJBITHBDJQDQQVYNDTSCEKWROLETHBAJOQRSIUGECNNQKBPVHSKTTUZSYYJDURZXGFCGWSQWMOYMUO");

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
    msg.setTimeStamp(0.777879607513);
    msg.setSource(11596U);
    msg.setSourceEntity(149U);
    msg.setDestination(22891U);
    msg.setDestinationEntity(121U);
    msg.name.assign("VECAIANXWYRCMQNVIFUPTCTSTEOGHJLAXQVYWVVKDGODOFADWBOACUDNCJHMLYLFRLWBSFIMTQKFEMBJCBVLHPTNBGJIUMBZKLEKRKQIWHDMXSFMRZLZMEQKLPPYZQUYVGUXCCIRTZGJPA");

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
    msg.setTimeStamp(0.284588280924);
    msg.setSource(52314U);
    msg.setSourceEntity(107U);
    msg.setDestination(24604U);
    msg.setDestinationEntity(133U);
    msg.name.assign("MXLUNVEEGE");

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
    msg.setTimeStamp(0.616602802175);
    msg.setSource(4821U);
    msg.setSourceEntity(61U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(131U);
    msg.name.assign("YHVLSTMRCFBBPTCOZLWQEQKGDSNVQWSHBNIWVKAYZZMKXXGDEQYSMAIY");

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
    msg.setTimeStamp(0.0878870922701);
    msg.setSource(28621U);
    msg.setSourceEntity(83U);
    msg.setDestination(44027U);
    msg.setDestinationEntity(134U);
    msg.name.assign("ZONFWXFTYRWHGHFYMSWUZNJTCAGURDWXGTLFHNVMBRBVJIHSDDRWEWLSPAJFUOYTEZDFPRUVKPISKQVFCEQIQZINBONHXRTUEKOTEBDBLVXPCCZURSEOPYSUBUOLNPUWNDQYIKDAASGTHXSFOQLVWALKLDSOCDJCBMLVTVRRJXKQBJWV");

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
    msg.setTimeStamp(0.34998987697);
    msg.setSource(46798U);
    msg.setSourceEntity(157U);
    msg.setDestination(14999U);
    msg.setDestinationEntity(61U);
    msg.name.assign("BHUQPWDCWUMIJCCRTCBNUUEMOOKLTJVTBXLDEWFFSPKGXOFBGKDQYHPHJYNMFVTNLRJKAIYRDZZJVMZHROIQGLXSJWKAABMUPXXWDUPOAEKJOPGZVCDGJZIWXNDEVGDQFVLIMOHVQZAPQVSQNPLFAGBHSYFFSAGNTKKNORNHEERMBTESBCYUACXY");

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
    msg.setTimeStamp(0.0477123183178);
    msg.setSource(55205U);
    msg.setSourceEntity(249U);
    msg.setDestination(37263U);
    msg.setDestinationEntity(13U);
    msg.type = 55U;
    msg.error.assign("ZUAPORSDYBWBXAXNOTFYJJCNQZPXDCXJGOIOCHKOJLCOXDDNZQRJBGWYPV");

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
    msg.setTimeStamp(0.0483408754626);
    msg.setSource(53683U);
    msg.setSourceEntity(87U);
    msg.setDestination(37811U);
    msg.setDestinationEntity(230U);
    msg.type = 67U;
    msg.error.assign("OPQBIIAHZGMLUEHRMZRFEOJF");

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
    msg.setTimeStamp(0.312739202304);
    msg.setSource(52824U);
    msg.setSourceEntity(235U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(24U);
    msg.type = 78U;
    msg.error.assign("VAHBHLCUKPFWQFOYSAKRZHCXBMSRNXFAGEPTSWKUGJFUKBBRWBJCFATTACZEPSMRXDCWDUJIRYDTNJLRGOQBQFLZMACAEOURGFVU");

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
    msg.setTimeStamp(0.466837412472);
    msg.setSource(8482U);
    msg.setSourceEntity(95U);
    msg.setDestination(39514U);
    msg.setDestinationEntity(110U);
    msg.seq = 24145U;
    msg.sys_dst.assign("UHEXJDVJMNTODVYGKLPQFQYVUCNGADDXFCRPHIICUTBMIQWLGORYLKXAKDXPTBWZORZFXDIPZJJHTSMGIHFNOLAVIHLJEBFJUNVCSMQBOVWIHKWRJRHXZCFAMXALHETDNMANCMNRYOKIYQSRQYVOFKYIACVNOZPTYSPFEIBCB");
    msg.flags = 245U;
    const char tmp_msg_0[] = {-85, -29, 28, -103, -29, -88, -53, 26, -3, -92, 117, 7, 73, 2, -93, 117, -85, -52, -83, -73, 15, 0, -90, 77, -64, -99, -63, 35, 121, -41, 31, 107, -24, 113, 65, 32, 1, -92, 47, 46, 97, -128, 10, 56, 11, -42, -68, -40, 83, -28, -24, -104, 13, -51, 76, 10, -36, 23, 74, 84, 1, 27, 15, 35, -92, -41, 98, -49, -115, -97, 97, 115, 122, -46, -79, -118, -47, -53, 45, 68, 57, -43, -122, -56, -17};
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
    msg.setTimeStamp(0.142202687077);
    msg.setSource(32243U);
    msg.setSourceEntity(186U);
    msg.setDestination(40807U);
    msg.setDestinationEntity(139U);
    msg.seq = 54210U;
    msg.sys_dst.assign("TWSPIITMGWSOORTBEZUUQEWGRMADSUEUWEZNPYSADMHYCXPYZMVUMSGOHNLNJESAHTZHYRKXMZLXCRVNQSTULRBFFJVNDYEQEEKVWJPVRRLUJQXBZCLTBGBLOHXQWFPLNJIDLNKKEKCVWAXLVXCRCSHTHLIWPFHEBYVQHADYRKKMGPOTIA");
    msg.flags = 165U;
    const char tmp_msg_0[] = {-104, 50, 82, 121, -32, -125, 46, -120, -22, 96, -73, -76, 37, -66, 118, -14, -61, 83, 55, -105, -42, -119, -79, -17, 59, 125, -14, -52, -115, 22, -93, 107, -82, -4, 91, -47, 124, 98, 95, 42, -72, -67, 106, -121, 118, -97, -11, -90, 59, -16, 116, 104, -58, 74, 116, -96, -112, 25, 105, 46, -109, -92, 60, 33, -124, 105, -117, -97, 19, 19, -33, -41, -112, -25, 16, -35, 34, 13, 82, 36, 90, -80, -96, 3, -63, -116, -123, 45, -91, -47, -46, 111, -93, -61, 87, -46, -79, 14, -62, 97, -47, 68, -44, 59, -1, 24, -30, 13, 86, -27, -10, -29, -105, -9, -8, -79, -35, -38, 24, -128, 42, 31, 44, -43, -59, -103, -82, 80, 52, 16, 31, -113, 81, -51, -107, 14, 25, 20, -31, -20, -28, -55, 19, -106, -110, -27, -88, -32, 98, -25, 93, -22, -88, 45, -118, -73, -61, -29, -4, 102, -96, -10, -21, -59, 15, -87, -79, -33, 10, -119, 47, -48, 34, -15, 99, -80, 20, 17, -26, -46, -120, 15, -81, -109, -50, 97, -54, 88, 50, 40, 96, 121, 19, -56, -45, -114, -80, -44, -97, 96, -29, -112, -60, 65, -96, -88, -54, 70, 72, 114, -105, 32, -42, 15, -20, -72, -5, 19, 30, -13};
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
    msg.setTimeStamp(0.433498190408);
    msg.setSource(48631U);
    msg.setSourceEntity(2U);
    msg.setDestination(13580U);
    msg.setDestinationEntity(107U);
    msg.seq = 44507U;
    msg.sys_dst.assign("LXCEEZWYUVSOGAXTVINTEZUPIZOWPEUUJMKKQJWRWJIDVVPVBWJVXQFFXKRWTIXQPCGRRCNFFHACCNBLBEUZQBYJFJEHAHGAHNPUDJDOARSZWPZASKQKFLJYRNHNBTDYLILZQCMTOOTSSXDGIOKBQAJMZLTEGKWXVDRHFKLPVNQHUQOYNPREHEXTDMOGBYCHMBUWRMBFIUYYTAJSCXSNOMZWXCSUKARGLMDATQGMODGVPSFMNCG");
    msg.flags = 67U;
    const char tmp_msg_0[] = {109, 53, -7, -93, 120, 64, 46, 56, 22, 122, 4, -36, -72, -35, -102, -57, 69, -27, 122, -112, 28, 104, -98, -47, 17, 93, 4, -57, -30, -113, -51, -113, -66, 45, -85, 79, 27, 99, 6, -5, 6, -23, 10, -75, 125, -10, 10, 118, 87, -103, 124, -123, 56, -69, -117, 46, -68, 75, -19, -104, -58, -33, -71, -55, -103, 38, 5, 20, 110, -73, -70, -50, 108, 59, 113, 95, 45, -93, -30, -18, -123, 98, -66, -30, 93, 76, 112, -128, -86, 110, 35, 89, -119, 125, -5, -52, 85};
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
    msg.setTimeStamp(0.618903950207);
    msg.setSource(28279U);
    msg.setSourceEntity(108U);
    msg.setDestination(44481U);
    msg.setDestinationEntity(167U);
    msg.sys_src.assign("YJSDMLATOSCASLEFJVWXECQGKNWINJPZKCQKZIPZRFXKBXPYHRSQNBCRJGZLMFYOOMJVDJSYIWPUTPSUUUNQHCXGLINNBGCVFILWTBBVEKYJVFYBSVODMIENKJRAEATAQRUHHE");
    msg.sys_dst.assign("SWVNFCVWGYAXYFXQFJGUBPJBARNWLDXXQARZGZFQKNYAGQENEIHHOQTJMMNXHHCEUTPDOKRPFHDANBBVPQSHXXYHSW");
    msg.flags = 11U;
    const char tmp_msg_0[] = {108, -95, 71, 92, 7, 57, -96, -44, -124, -128, -32, -119, 95, -70, 30, -123, -102, 71, -11, -2, 63, -117, 20, 9, -126, -37, -85, -32, 101, 59, -92, -115, -109, -4, 86, -31, 9, 25, -39, 16, 0, -64, 70, -104, 61, -3, 111, 98, -41, -5, -125, 100, 84, 114, 115, -6, -78, -98, 73, 37, 62, 34, 3, 7, -92, -52, -59, 27, 27, -116, 88, -105, 52, 103, -98, -30, -59, -5, 99, -117, 46, -58, -48, 107, -50, 44, -73, 29, -105, 95, 47, -40, 84, -108, 58, -92, -117, 22, 58, -113, 106, -60, 55, 60, -119, -99, 4, -123, 92, 95, 45, -43, -25, 15, -106, 28, 3, -13, -113, -104, -75, 7, 8, 106, -3, -65, -49, -72, 98, 110, -45, 4, -100, 41, 56, -25, -54, -85, 64, 111, 119, 66, -92, 5, -8, 95, -60, -39, -127, 34, -36, 70, 70, -70, 48, 53, 8, 90, -98, 12, 44, 29, -98, 106, -68, -118, -96, -114, 80, -42, -69, 124, 123, -5, 104, 42, 10, 121, -90, -115, 42, 43, 1, -42, -28, 65, -33, 89, -107, 83, 82, 60, -8, 104, 28, -128, 44, 5, -19, -126, 126, 57, 21, 96, 112, -38, -78, -13, -63, -9, 21, 63, -96, -91, -96, -27, -90, -90, -88, -85, -32, -69, -35, 13, -39, 43, 51, 35, -14, 116, 120, 6, 21, -82, 68, 7, 94, 24, 39, 97, 94, -10, 39};
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
    msg.setTimeStamp(0.742911493368);
    msg.setSource(46496U);
    msg.setSourceEntity(5U);
    msg.setDestination(43825U);
    msg.setDestinationEntity(72U);
    msg.sys_src.assign("MWPTFXBYPHRHXHJTKMYXEKVLGLYGFDKZRVDILMMEFCMLMPCDYGAKHSXGCLRNAYUOVKBTBJFCKQRASYTRDGUOBOSMINZZTZBESOBOWN");
    msg.sys_dst.assign("BVOITVEYGMPAHEDWWESQBJUGVDLFFPYKEVYXQANMKCRLUWYLSBJKNADMQJCOUUGQZTLBZNHAAFRSXBRHPTRHECBBDCKOKMIZGXLMJZHUWCLHNAXQPMGFCSNWZJWLEAIR");
    msg.flags = 42U;
    const char tmp_msg_0[] = {7, -8, 63, 0, -102, -24, 1, 100, -72, 60, -61, 0, -51, -93, -60, -90, -32, -116, -116, 124, 29, 106, 63, 74, 71, -41, -70, 12, 27, 96, -83, 6, 1, -46, -53, -74, 30, 123, 21, -59, -91, -24, -56, -115, -69, -63, -75, -96, -21, 2, -31, 16, -46, 123, 40};
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
    msg.setTimeStamp(0.139271388235);
    msg.setSource(374U);
    msg.setSourceEntity(169U);
    msg.setDestination(60254U);
    msg.setDestinationEntity(145U);
    msg.sys_src.assign("ENFLRCIWXJDPFUMSTPAGTWPYPGVXVPRONMNLWFFLRRBFYTEAFKPBMHPRIDFGWEDQGDYOUKKTSLGJDHIEKHNKCHHVAIIYXVLIOQKYEZTYNQOBRUOWZVSXYX");
    msg.sys_dst.assign("WREZSGCFUOXUZIANGXIABMYBZJPYBHTADZLPUYBCXOKSGRJDNKTWO");
    msg.flags = 21U;
    const char tmp_msg_0[] = {-122, 103, 95, -83, 14, -78, 95, 8, 17, 66, 96, 33, 122, -74, 80, 99, 98, 4, 38, 69, 37, 25, -2, -115, 61, -81, 40, 28, 77, 40, 18, -36, -18, 39, -4, 54, -122, 118, -32, 105, -44, 57, 74, -110, 43, 62, -37, -128, 106, 67, 120, -21, -10, 34, -101, 65, 3, -73, -57, 42, -26, 53, 102, 73, 44, -23, 22, -3, 92, 58, -98, 78, 107, 122, 41, 83, -1, -110, 20, -60, -96, 71, -46, -28, 61, -18, 51, -88, 101, 72, -111, -41, 12, -19, -3, -69, 43, -63};
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
    msg.setTimeStamp(0.751579031694);
    msg.setSource(41409U);
    msg.setSourceEntity(117U);
    msg.setDestination(16622U);
    msg.setDestinationEntity(205U);
    msg.seq = 6877U;
    msg.value = 152U;
    msg.error.assign("RUGIFOMTBUQOIIYCQMRLHBWADNRFRZHBCKCJJOURHKQVYLBYITPXPLAWPZYZUKMHENMQCVSQ");

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
    msg.setTimeStamp(0.515090317534);
    msg.setSource(40443U);
    msg.setSourceEntity(195U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(107U);
    msg.seq = 16610U;
    msg.value = 227U;
    msg.error.assign("XMAZHSCDVFHFNMPQSYDLRDPLWKSILFRJWELKBEVSIAIGPMGYWOOECQCQTRBEQGPXZTZPXNCRHXHWFUUJOHIOJDFIKGZGGVHKORJSUIEUDYLVWXKPTROOVVBAOTMDZANRRXVTIYGPSCVQNNLJZIRBJZJYBSZFYWPZLYZJFWLIPYHOETMMRDTLCAEUYMUFCUXAUBEAWBYGGLBNHWKHBMHNPEKTVUAONQENDBJTGTDCKDASFSQQQ");

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
    msg.setTimeStamp(0.359361828426);
    msg.setSource(57270U);
    msg.setSourceEntity(94U);
    msg.setDestination(27432U);
    msg.setDestinationEntity(107U);
    msg.seq = 58441U;
    msg.value = 179U;
    msg.error.assign("FWDASSMOGZZEWWUCTJHSBVXCPLUANBMMHGTLAGZEKDPLOXKANQRGJRMRYGTKAEXMUEVJOKLMWUOCIGLRESBZNTZSUUXBRXUKTICOLZWPAYEDNISYWZKIPQQUQTPHKPDROLCVCRIHQSNWRTARFCVNVYXDHODKFHAHFECFJOYNSJZSNPVJSWVFZIFNTYVVVEDOPGXXWMWLYYCLGQMEJTQOUJJRFFID");

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
    msg.setTimeStamp(0.417583113654);
    msg.setSource(17513U);
    msg.setSourceEntity(54U);
    msg.setDestination(38675U);
    msg.setDestinationEntity(202U);
    msg.seq = 63990U;
    msg.sys.assign("IXOBIWULCCJPZBMSTXRNITWWHFJXAFPOWFQXFCTWAYXULYLNLPZSPCSVR");
    msg.value = 0.361375286958;

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
    msg.setTimeStamp(0.968541662434);
    msg.setSource(48403U);
    msg.setSourceEntity(90U);
    msg.setDestination(15721U);
    msg.setDestinationEntity(223U);
    msg.seq = 26260U;
    msg.sys.assign("QYLMDGLRRHPRFXFXFXLPILMASIVQUSADCUQGLFDGMSOQECUGWYUZMBVRSPXAXENMXBBNKDBIPQNTYIWCZJKXVRSLGNGKYCQNTHCMKOXTBSHBUIJJENCBAYHACZVANHJULSMDCTWQZTUOKYISUDFYOORJBAHDHNEWTGKIPZLNFVIZWV");
    msg.value = 0.243127338284;

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
    msg.setTimeStamp(0.747638752536);
    msg.setSource(15840U);
    msg.setSourceEntity(217U);
    msg.setDestination(8132U);
    msg.setDestinationEntity(93U);
    msg.seq = 36954U;
    msg.sys.assign("NQAHWHZLHZGMDEKRBJFFRYUKJNTAWBPVFHAIUUIELXAVSPALVIUBXEJEHGPRNTJRYFKLACAFVWZ");
    msg.value = 0.425384601277;

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
    msg.setTimeStamp(0.18917094015);
    msg.setSource(29422U);
    msg.setSourceEntity(36U);
    msg.setDestination(1854U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.781306712971);
    msg.setSource(15996U);
    msg.setSourceEntity(190U);
    msg.setDestination(36983U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.657574101281);
    msg.setSource(44271U);
    msg.setSourceEntity(89U);
    msg.setDestination(47734U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.630688311599);
    msg.setSource(12906U);
    msg.setSourceEntity(206U);
    msg.setDestination(37983U);
    msg.setDestinationEntity(132U);
    msg.action = 111U;
    msg.longain = 2830447792U;
    msg.latgain = 3470191540U;
    msg.bondthick = 847590021U;
    msg.leadgain = 1745024357U;
    msg.deconflgain = 2744785676U;

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
    msg.setTimeStamp(0.0864716880686);
    msg.setSource(14790U);
    msg.setSourceEntity(1U);
    msg.setDestination(12660U);
    msg.setDestinationEntity(47U);
    msg.action = 105U;
    msg.longain = 419127873U;
    msg.latgain = 1285305782U;
    msg.bondthick = 2031635220U;
    msg.leadgain = 3161237057U;
    msg.deconflgain = 1742663756U;

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
    msg.setTimeStamp(0.771406415845);
    msg.setSource(14206U);
    msg.setSourceEntity(248U);
    msg.setDestination(2249U);
    msg.setDestinationEntity(183U);
    msg.action = 222U;
    msg.longain = 3386988505U;
    msg.latgain = 3452526472U;
    msg.bondthick = 1519988250U;
    msg.leadgain = 3914594686U;
    msg.deconflgain = 3511434915U;

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
    msg.setTimeStamp(0.842436445005);
    msg.setSource(43036U);
    msg.setSourceEntity(162U);
    msg.setDestination(11675U);
    msg.setDestinationEntity(218U);
    msg.uid = 55U;
    msg.frag_number = 57U;
    msg.num_frags = 115U;
    const char tmp_msg_0[] = {-34, 54, -60, 0, 103, -27, -1, -111, -42, -127, 9, -65};
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
    msg.setTimeStamp(0.182909605937);
    msg.setSource(11964U);
    msg.setSourceEntity(185U);
    msg.setDestination(4856U);
    msg.setDestinationEntity(46U);
    msg.uid = 139U;
    msg.frag_number = 162U;
    msg.num_frags = 11U;
    const char tmp_msg_0[] = {-24, -37, -16, 76, -90, -108, 2, -34, 76, -121, 45, 125, 77, 97, 107, -33, 59, 69, 30, 13, 34, 76, 64, -103, -54, 22, 104, 120, -14, 39, 95, -63, -90, 11, 2, 29};
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
    msg.setTimeStamp(0.546491691468);
    msg.setSource(5023U);
    msg.setSourceEntity(29U);
    msg.setDestination(14594U);
    msg.setDestinationEntity(181U);
    msg.uid = 66U;
    msg.frag_number = 134U;
    msg.num_frags = 210U;
    const char tmp_msg_0[] = {-18, 97, 124, 65, -103, 112, 63, -37, 81, -97, 15, 88, -109, 68, 80, -93, 32, -89, 78, -27, -53, 39, -120, -102, 31, -78, -76, -93, -125, 41, 72, 63, 58, -73, -65, 40, 24, -107, 74, -108, -20, -62, 17, 104, 100, 46, -7, 38, -77, -11, -94, 37, -1, -125, -34, -89, 41, 75, 68, -125, 15, -124, 104, 50, -16, -67, 5, -76, -36, 108, 60, -47, 114, 88, -100, -76, 53, -7, 67, 51, 38, -15, -74, -93, 98, -24, 102, -22, 21, 109, -41, -26, 103, 22, -90, -113, 30, -104, 69, -12, 76, 116, -118, 104, 114, 9, -53, -86, -15, 0};
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

  return test.getReturnValue();
}
