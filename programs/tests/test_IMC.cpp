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
    msg.setTimeStamp(0.938384329957);
    msg.setSource(10929U);
    msg.setSourceEntity(44U);
    msg.setDestination(38133U);
    msg.setDestinationEntity(194U);
    msg.state = 225U;
    msg.flags = 118U;
    msg.description.assign("OOHYWZQJFWYTAVZEEHVWEPQZDFRQHUKBXAKARIPBEFKX");

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
    msg.setTimeStamp(0.0506970568192);
    msg.setSource(46329U);
    msg.setSourceEntity(198U);
    msg.setDestination(40208U);
    msg.setDestinationEntity(170U);
    msg.state = 233U;
    msg.flags = 241U;
    msg.description.assign("GESCHIFNPYLMQCRCVQXCFSRPBZZIBYHUBKWMDCMTKAQQPHRINLNDQVRXQXVGDEEOLNNKIWTHOZPNUQPUDXYWJKJVEYIIBWTJHRDFULOAFFOEVXOIKHAACNGPQSNWSCIRXAISFJTVCLYEFKAALMZHZPKJZ");

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
    msg.setTimeStamp(0.0302272560779);
    msg.setSource(40889U);
    msg.setSourceEntity(144U);
    msg.setDestination(27632U);
    msg.setDestinationEntity(253U);
    msg.state = 211U;
    msg.flags = 161U;
    msg.description.assign("LECYIPRKLRPOGUGTDJWCRELYRZJFEYVYWEFVVZQPCSJUVDNQIBDCYVIMTXMRMSZLEOTJUHHKAQSDXQPIAHGHSZZOZPLRBJAFWAFXKARHEEAANLMKWCCWTQMNQIWWCFCKHHKOAVILBNMBIDZYNBJBBLGTLMGRSOFYCFSHVIGFUXDFYDUKWJTEKOKVBJXBTJPSNPYAMWYXUMVU");

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
    msg.setTimeStamp(0.502984154728);
    msg.setSource(47599U);
    msg.setSourceEntity(11U);
    msg.setDestination(19194U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.913820232366);
    msg.setSource(62884U);
    msg.setSourceEntity(94U);
    msg.setDestination(43344U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.488383080188);
    msg.setSource(24063U);
    msg.setSourceEntity(34U);
    msg.setDestination(45707U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.346895557308);
    msg.setSource(48769U);
    msg.setSourceEntity(203U);
    msg.setDestination(46433U);
    msg.setDestinationEntity(61U);
    msg.id = 12U;
    msg.label.assign("XYZNRYQPVSCDRDJVELOLSEPWJNSGUXFYSDJXPGFCUACOGVPTRHFYFZWWAKJQPEISQZOGYNBVMZZFXKHBJORPNVDTNLBFKVRGUCGZPBKKEQEMJZBBXQDNTYIAUITKYEOFBIIUHFMMZWAYLPNHWCAJGHQDRTCMSFTITILSSQXHAJOKOYCSDCNAUMHIZBYXHERQBEQRVFAGWVEPLGXMOSMVDLKKDLTUUAJ");
    msg.component.assign("LOBPMXASPTPEQCRYIWJJHOPLWQJQNXIKHGEUVVMCCRSUVZIOBAZGXECXZHHAAFZNULJLNLBUZNPJMUMWOFDVIXFKGXIYKOUWNGCXTARFMKIWQFPVHMYKEHXSJYDRXAKRNAABDZTEZJDPUHTVOUSYNFNTCPWWRFOVDI");

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
    msg.setTimeStamp(0.151781245054);
    msg.setSource(44275U);
    msg.setSourceEntity(247U);
    msg.setDestination(38138U);
    msg.setDestinationEntity(99U);
    msg.id = 110U;
    msg.label.assign("PFEIXTVRQNGFZNAHPTXMRHIWMGJGHSBRNTGCUWYRUIZEQTZYKDDFVDECZHXDJNAWYVQNGKITWXIVW");
    msg.component.assign("PBNVNCGZWDBXNASPCFLXBTPQHVSYMOLJRHUM");

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
    msg.setTimeStamp(0.148618717559);
    msg.setSource(24758U);
    msg.setSourceEntity(225U);
    msg.setDestination(16669U);
    msg.setDestinationEntity(21U);
    msg.id = 200U;
    msg.label.assign("UGMDBXCJTQLJFMEEPGIDUUMSSSVRAGSAJWSQIMVBEOZDOMDIHCBQGXZUJXNEXGKVFYJZELIHIHXDPWNKXYQFNCQYQTWUIFCOAKLFCFJPVWYYSALLPXBPHGAJXR");
    msg.component.assign("XTERMCOAMSBKYONTIROBOMFHIATQCRQWKKNGLSGZVRDPXOTKZPJIOLYHAGUMCZPKDNABBWCGSNZPZYQFJWUIHDCKCABCMVMVDIXVQHWZKPFFPAZB");

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
    msg.setTimeStamp(0.83243552194);
    msg.setSource(11083U);
    msg.setSourceEntity(166U);
    msg.setDestination(15091U);
    msg.setDestinationEntity(32U);
    msg.id = 111U;

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
    msg.setTimeStamp(0.971238082752);
    msg.setSource(4019U);
    msg.setSourceEntity(119U);
    msg.setDestination(28965U);
    msg.setDestinationEntity(205U);
    msg.id = 241U;

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
    msg.setTimeStamp(0.985783088858);
    msg.setSource(40412U);
    msg.setSourceEntity(9U);
    msg.setDestination(39148U);
    msg.setDestinationEntity(3U);
    msg.id = 166U;

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
    msg.setTimeStamp(0.820621854468);
    msg.setSource(18553U);
    msg.setSourceEntity(164U);
    msg.setDestination(25038U);
    msg.setDestinationEntity(152U);
    msg.op = 36U;
    msg.list.assign("CDOECTUIGXOHXNFCQTBOFLHCSAGUTFJVLWUWJFRZKHPGNRPXLXYECQEYGQYZHQXCMWFYUOZVRLWNKCJBXIFRYSEPMVHHZYKUZPLQSRJLGESPDIFIBSAUPINKQJQPLKDXWW");

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
    msg.setTimeStamp(0.37331364836);
    msg.setSource(37130U);
    msg.setSourceEntity(214U);
    msg.setDestination(51138U);
    msg.setDestinationEntity(229U);
    msg.op = 246U;
    msg.list.assign("YRINIXJIDMYMGHQLFNGCKJJZQUWLGMXAQDBCZTOOBZUBLLZUEJLNDHWYYJGXGWAZTFBWRZXNLLRBVHMLHHJFMYPKCENQTOSKXJNEVCIVHAPOUEGNFGHVBZEAYTCTQRZOMARNZAWHM");

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
    msg.setTimeStamp(0.591543855715);
    msg.setSource(44511U);
    msg.setSourceEntity(78U);
    msg.setDestination(28557U);
    msg.setDestinationEntity(146U);
    msg.op = 12U;
    msg.list.assign("QTSXDAVNUAABYNBXMQOXJQSDIZZWEVUNNVWSVWCIFMMBYTQOQQDBFFYSFTCNKTZFBSGLQJPPZHQWWKCPORIFUXKLYZFZMOYJIEXMUWLGHKEFZBLYPCIOTAGKDALE");

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
    msg.setTimeStamp(0.862407564618);
    msg.setSource(21927U);
    msg.setSourceEntity(52U);
    msg.setDestination(57599U);
    msg.setDestinationEntity(138U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.119353742305);
    msg.setSource(62451U);
    msg.setSourceEntity(57U);
    msg.setDestination(13974U);
    msg.setDestinationEntity(243U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.632352042852);
    msg.setSource(47077U);
    msg.setSourceEntity(197U);
    msg.setDestination(919U);
    msg.setDestinationEntity(106U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.955814231407);
    msg.setSource(9589U);
    msg.setSourceEntity(2U);
    msg.setDestination(64558U);
    msg.setDestinationEntity(177U);
    msg.value = 137U;

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
    msg.setTimeStamp(0.995419451417);
    msg.setSource(19865U);
    msg.setSourceEntity(119U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(164U);
    msg.value = 49U;

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
    msg.setTimeStamp(0.90945328314);
    msg.setSource(51152U);
    msg.setSourceEntity(35U);
    msg.setDestination(8506U);
    msg.setDestinationEntity(233U);
    msg.value = 86U;

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
    msg.setTimeStamp(0.0350138190348);
    msg.setSource(62307U);
    msg.setSourceEntity(177U);
    msg.setDestination(44980U);
    msg.setDestinationEntity(138U);
    msg.consumer.assign("JIPFWCWXAKVSZIOMNIEDMZDDXONECJHYRATKMETCOEEHUMOEOSROTQWVUHGTKYYXXXDCYURWAKSYZRUKK");
    msg.message_id = 51172U;

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
    msg.setTimeStamp(0.139298343601);
    msg.setSource(31723U);
    msg.setSourceEntity(166U);
    msg.setDestination(14585U);
    msg.setDestinationEntity(44U);
    msg.consumer.assign("EDSWCKEMWZSFXSKVHDPBYRNOIUMOGALFPKAXPDVHBCOTSWEGWZOWNBSICEGSDNRNMUPLUHVQWBVZFQJPUFWLVQDIDWALQUIQCZZRAXATWCTMIASNTQKYXXNYPOHYNFYFLHHKNVMYEWJFBZJCRMUTGMATQYRLZTGXXDRFJBDQMBFJ");
    msg.message_id = 12605U;

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
    msg.setTimeStamp(0.414249575247);
    msg.setSource(51086U);
    msg.setSourceEntity(135U);
    msg.setDestination(33860U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("WINSXKLPKMIAMPDBSODRX");
    msg.message_id = 62614U;

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
    msg.setTimeStamp(0.0715308319404);
    msg.setSource(14521U);
    msg.setSourceEntity(78U);
    msg.setDestination(6970U);
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
    msg.setTimeStamp(0.0617245036425);
    msg.setSource(28993U);
    msg.setSourceEntity(103U);
    msg.setDestination(46674U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.324094699461);
    msg.setSource(4888U);
    msg.setSourceEntity(140U);
    msg.setDestination(1776U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0262659865901);
    msg.setSource(28553U);
    msg.setSourceEntity(70U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(76U);
    msg.section.assign("ULFODOSQNONHIEYXOJNRRPIMVDKCXHTFXPLNVXRGBMZMGUNBYLXBEVVSGXSYVUAWGWDYZLZLCJBHADOQAGSGLEFHZFOIGZWYFCJBXBETXQMDJGIYCBFCQJKPRXFATBYQAANEHJPSFOILFSDAZNCKDDKZEJPPVIHMNWETWRKPTULUROTRMSJFHKTGHYZOMRPJPTNRCSWIRSKVQIYQVKKWJUVKQBOEAMPUIVXLCTHETGBCEWUCZDDNLMIHWYZAWM");
    msg.param.assign("HNDXMZCQYIPAFSKZGDHRGXCRUSCJQACWJQAQPCFHNAFSNRN");
    msg.value.assign("DEJTREUCIWCJMBLYZDGMNCMILODDGIGCAIFIKECWNPPTELAVDI");

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
    msg.setTimeStamp(0.800472014047);
    msg.setSource(34081U);
    msg.setSourceEntity(68U);
    msg.setDestination(12780U);
    msg.setDestinationEntity(181U);
    msg.section.assign("BDIFJZAKDRLOPESRCODCATOGFVARCYUDKVVKASNZGNVWJJMYPZGRXXZYRVWTOBKIIWDHPBWAMYEBTXHDVHIYJTSQMJSRJBAKBIKGOJWZOTAGGQLJVNWYQLFSAICCYPFUMXQOUZNDBSFMWLJOUDSBPJKNPPIQEHREZMEUFYWKGZ");
    msg.param.assign("PIOVNUARPHPKNDHCEIVLHKVUZPCKQMCBVXSSXDNUYHZBGJUTUBDZMJZLHLCYCODKKIUPSISMJMNYGXLNMOTGKRDSGQXNTRRXRYDVSNFAAXFWYRDGZSWYJOJDUQUKTOEAEUAWBMFRMCQTFSYZTLHFNPCVLVHQTOEQXRHJFGTHERBXACEQEBADANKOZKWEESQJIYIMWFZPZBMLFWWIETVXJFRQOWVPMIXSPNACWLGAODWJBIJBYPB");
    msg.value.assign("GACCLDFDVPAJWHRSGOZFASNEYPPCUEEXZHCFESBVADMSUOIFNOTJVAYTQUTLRKXHWVBRYTBSCWRBORNMFPUNZEDZVZGXWDLZRKLNOLJXMUIGZJHSLXYAAADOHKGMJHQBQNYTMHZGOPRUUEMJNEEKDNLFWIKWJXCVTILLHYWSKNTKTPSQFPMZQNCBUVPITUKYUXMRQCXWQOCGQYQD");

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
    msg.setTimeStamp(0.544240742908);
    msg.setSource(13185U);
    msg.setSourceEntity(12U);
    msg.setDestination(901U);
    msg.setDestinationEntity(69U);
    msg.section.assign("SAGSRDGLRYNCSZKVMCUGXDJNF");
    msg.param.assign("SBKHHGNNJSOMDIWOBSCYMFMVOAPAKCRPYIVUWTQXDLJUYEDLEADHDFLMABCGDGYCKHOMWSSTWZNILQONUPWVKPTNKRJUXBEXHZVNCCLQHSCKLQR");
    msg.value.assign("TBRYJOXHMNGRRSURZHQEGLLCCNCOQWFMBLMLTYIYJJZMHGDZXLVKEDQVDLCVWIOY");

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
    msg.setTimeStamp(0.894266503776);
    msg.setSource(20763U);
    msg.setSourceEntity(151U);
    msg.setDestination(15279U);
    msg.setDestinationEntity(241U);
    msg.op = 70U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TNTWCBECKFYIPRFQNVAZWTYIHCOHGVGUIDEMLPGCNAAHQABKBEOXWJUGMZPRHPSZCYZPTXWFPNLQBLRZYDXBHZVFJOQMRCGWIAHTDRQJXOLRHNLXWUTMKEEIKOQXFGYMSAKJNAYCKDDOUSPMVQVYLAUL");
    tmp_msg_0.param.assign("JTSFTBVFIIVLIPNDNZNXRHNOSXSFPFBWEHGWFRGFAKMMJCHELIOCUCTUYHPQLIXOACGBBUWXLRPEKVNZNVMPWZTFSSVARJNKSYEYXZJMUJRCLXDB");
    tmp_msg_0.value.assign("BDBVOTDIJRXCJGAZLCYNNZJZWURQANHZNUMYFTGDVMJAHEKWYDKCUXJSMWHEAGKLVCFAZENSGXTODQYQLKBFDFWPEQLNABDNCGGRWTSHWSESGQUBJPLDTFUMYOXVARFKYXBXASUFOIUYWHTEPKZMRRCYIBKQNONVVSMZEZPLLESPIWLKCCFHVIHWXYB");
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
    msg.setTimeStamp(0.00882733547387);
    msg.setSource(45495U);
    msg.setSourceEntity(248U);
    msg.setDestination(5469U);
    msg.setDestinationEntity(101U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.944683295738);
    msg.setSource(14091U);
    msg.setSourceEntity(51U);
    msg.setDestination(23187U);
    msg.setDestinationEntity(50U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.1594124232);
    msg.setSource(60697U);
    msg.setSourceEntity(109U);
    msg.setDestination(2609U);
    msg.setDestinationEntity(84U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.490132481862);
    msg.setSource(14132U);
    msg.setSourceEntity(56U);
    msg.setDestination(2298U);
    msg.setDestinationEntity(2U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.465542996788);
    msg.setSource(60425U);
    msg.setSourceEntity(19U);
    msg.setDestination(34946U);
    msg.setDestinationEntity(209U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.829362480025);
    msg.setSource(1259U);
    msg.setSourceEntity(236U);
    msg.setDestination(65407U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 120U;
    msg.step_number = 210U;
    msg.step.assign("ZHQSSSBAXLUPYDARSNZENEFGUVWBNBZEALNVPJTNJODYTWGZPTDOOYEWIXHOALQQMEJPCKWXXHGVAWUYRSGCFWOVVSIMCFHGCECKPRXUQDJFOHEZKABTPMTAIBOUDXRDTDPZGGHLUKDFMRLKDVHQJABMKVGG");
    msg.flags = 127U;

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
    msg.setTimeStamp(0.429131794755);
    msg.setSource(12623U);
    msg.setSourceEntity(34U);
    msg.setDestination(13394U);
    msg.setDestinationEntity(164U);
    msg.total_steps = 249U;
    msg.step_number = 176U;
    msg.step.assign("SGUYAUKGWXYUSPCWMGEDREAXXHHESCZATCATGTADKDDODPZSBYAQYQYJBUGRHCCRAYHIEFSBMKZWXSMQKYNQVZODHJJJMXZCIXCVIZBPWWZUSFRPFPKL");
    msg.flags = 69U;

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
    msg.setTimeStamp(0.373710690683);
    msg.setSource(3864U);
    msg.setSourceEntity(86U);
    msg.setDestination(61652U);
    msg.setDestinationEntity(180U);
    msg.total_steps = 76U;
    msg.step_number = 31U;
    msg.step.assign("ICWCXYWNHQDXNWVVCOELARQXIJBKWVECZUQAWTNKYTXCOGRKQEUPMYZUKRXAMKTKBZHPGYUNNKJHSZPHSLUGAWTIWALHENCDQGPCRZIMVOSJNFTDTWQACLLXHAMRFDJFSWOCBTXWVDJIPTHBZVSCOFR");
    msg.flags = 60U;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.338747682848);
    msg.setSource(24612U);
    msg.setSourceEntity(163U);
    msg.setDestination(55571U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.366902054166;
    msg.lon = 0.176055099119;
    msg.height = 0.957836826042;
    msg.x = 0.489275732546;
    msg.y = 0.984607575938;
    msg.z = 0.734898232686;
    msg.phi = 0.827566399869;
    msg.theta = 0.075177477066;
    msg.psi = 0.721793666739;
    msg.u = 0.605497192413;
    msg.v = 0.324304817367;
    msg.w = 0.902771380831;
    msg.p = 0.481503361955;
    msg.q = 0.689930442413;
    msg.r = 0.951987657163;
    msg.svx = 0.796262511635;
    msg.svy = 0.0887192406298;
    msg.svz = 0.210686850629;

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
    msg.setTimeStamp(0.640449964875);
    msg.setSource(55692U);
    msg.setSourceEntity(51U);
    msg.setDestination(5385U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.271869785924;
    msg.lon = 0.230278919324;
    msg.height = 0.97248450642;
    msg.x = 0.816930862402;
    msg.y = 0.8447768411;
    msg.z = 0.164145841138;
    msg.phi = 0.888472032572;
    msg.theta = 0.380310750507;
    msg.psi = 0.90307039589;
    msg.u = 0.78530271861;
    msg.v = 0.113055168488;
    msg.w = 0.849851646309;
    msg.p = 0.772187234784;
    msg.q = 0.880628139715;
    msg.r = 0.405001221077;
    msg.svx = 0.903502678229;
    msg.svy = 0.393693298728;
    msg.svz = 0.834772475902;

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
    msg.setTimeStamp(0.504140968674);
    msg.setSource(44885U);
    msg.setSourceEntity(9U);
    msg.setDestination(7556U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.106010311853;
    msg.lon = 0.16609139344;
    msg.height = 0.91118800176;
    msg.x = 0.679050542794;
    msg.y = 0.986276256823;
    msg.z = 0.297807474849;
    msg.phi = 0.926415312029;
    msg.theta = 0.551266176968;
    msg.psi = 0.136488302483;
    msg.u = 0.235417553185;
    msg.v = 0.219358773201;
    msg.w = 0.748678803643;
    msg.p = 0.854156326747;
    msg.q = 0.103777933623;
    msg.r = 0.0521155539255;
    msg.svx = 0.882594039138;
    msg.svy = 0.884802613025;
    msg.svz = 0.246939666558;

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
    msg.setTimeStamp(0.569903566936);
    msg.setSource(5025U);
    msg.setSourceEntity(243U);
    msg.setDestination(25961U);
    msg.setDestinationEntity(129U);
    msg.op = 62U;
    msg.entities.assign("PHTQSYVYPACDAOLPNTJINWBKMLHJFMHSVJVQJGFHDNMNQLAXIVUQUYZRWPTKZWGKMCFEMIWXGDT");

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
    msg.setTimeStamp(0.177313073153);
    msg.setSource(38239U);
    msg.setSourceEntity(231U);
    msg.setDestination(63356U);
    msg.setDestinationEntity(120U);
    msg.op = 142U;
    msg.entities.assign("TEQFKYNJWIRBFZORFIJJSGTKTJCONVIPKWINHPSEZKHHKSCETWFSTYYYZAULYXPKAXHUEFTGPCMYROZSYACHNMQAQBWVFUFBBZLSAZOLSOWXSBVPDIKJVOKUYDUDMLQXCRHCTWIQVICCNLXDFEPUSNBWYBCGEGUAONKNVAHDLWDTNBIXBZYLQRZJQUZLZWIMQGHAMGDMCGJVFOKOU");

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
    msg.setTimeStamp(0.62439717301);
    msg.setSource(63605U);
    msg.setSourceEntity(156U);
    msg.setDestination(29105U);
    msg.setDestinationEntity(96U);
    msg.op = 249U;
    msg.entities.assign("ECLUGFICYNMDTKPKDBOXKEDYHJUJBCVITRXQTHLAFJOAFQLEVMAKHISAUBWCMZLSSOUSFZRIOUKPJDLYHRGYJRWKTVHVQQHEUXTXQPSGRGSJPDXFTEGNMTBBBPWJNWBCMVOFHYVUCLRSAEDGZQFOJFNUWYISZCYWKFAREXLWTVNBXYZIDZYCDBDAOMOHMSLFKNGWPWIEQELRVAIGDQHCEVPZZNSAMLXMOXNKHGG");

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
    msg.setTimeStamp(0.127050049057);
    msg.setSource(51730U);
    msg.setSourceEntity(0U);
    msg.setDestination(65312U);
    msg.setDestinationEntity(197U);
    msg.type = 148U;
    msg.speed = 54526U;
    const char tmp_msg_0[] = {-75, 24, 23, 40, -83, 3, -47, -124, 101, -56, -114, 82, -124, -86, 92, 34, -54, -120, 122, -91, 100, -82, 111, 50, -96, 48, 77, 93, 124, 95, 40, -3, 67, -112, -91, -73, 9, 126, 9, 52, -19, -67, -123, 70, -101, -9, -36, -106, 116, 107, 107, 21, -31, 27, 21, -58, 57, -21, 51, 58, -106, -94, -79, -29, 96, -14, -35, 86, -78, 74, -18, 85, -24, -110, 37, -17, 51, -36, 103, 56, 47, -117, -28, -10, 39, 117, -98, 100, -14, 121, 103, -78, 46, 86, -1, 56, 59, -123, -89, 47, -91, -30, 61, -28, 1, -51, 4, 94, -62, -39, -8, 98, 27, 110, -18, 13, -14, 49, 70, -88, 70, -46, 21, -48, 107, 126, -88, -116};
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
    msg.setTimeStamp(0.238008264959);
    msg.setSource(36965U);
    msg.setSourceEntity(49U);
    msg.setDestination(35131U);
    msg.setDestinationEntity(38U);
    msg.type = 236U;
    msg.speed = 609U;
    const char tmp_msg_0[] = {-16, 8, 90, 1, -120, 81, -9, 90, 6, 9, 65, -47, -42, -123, -83, -71, 104, -128, -68, -59, -71, -125, 121, -32, 7, -24, -41, 124, 125, -25, -72, -33, -21, 22, 121, -23, -97, 53, 89, 80, -70, 89, -39, 8, 71, -57, -37, 98, 55, 14, -120, -33, -51, -52, -114, 113, 117, 121, 66, 8, -86, -113, 81, -85, -39, 24, -119, 37, -12, -84, -7, -75, -81, 12, -99, -34, 3, -102, 78, -116, 37, -64, -98, -4, -107, 6, 5, -118, 56, 109, 30, 75, -34, 37, 46, -87, 77, 46, 18, -32, -63, 36, -120, -107, 11, 87, -115, 40, -15, 122, -5, 10, -34, -109, -58, 32, 57, -52, -34, 85, -18, -75, -89, -102, -11, 88, -56, 11, -103, 37, -3, 71, 59, 49, 46, -85, 16, -85, -24, -84, 48, -23, 97, 28, -89, 122, -89, -47, -45, -63, -99, 29, 92, -5, 50, 20, -118, 113, -26, -17, 64, -57, -110, -12, -125, -128, -110, 78, 73, -119, 32, -23, 26, 54, 88, -17, 101, -128, -75, 123, 41, -121, -61, -27, -9, 103, -102, -3, 93, -126, -65, -60, 49, -84, 58, -68};
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
    msg.setTimeStamp(0.72215630214);
    msg.setSource(10445U);
    msg.setSourceEntity(64U);
    msg.setDestination(42951U);
    msg.setDestinationEntity(236U);
    msg.type = 245U;
    msg.speed = 47993U;
    const char tmp_msg_0[] = {65, -103, -126, -90, 5, -36, 103, 4, 68, -43, 21, 12, 78, 75, -35, -25, 75, -67, -101, -33, 112, 8, -36, -39, 79, 111, 92, -43, 2, -34, 31, 91, 125, 79, -59, -20, 38, -21, -39, -25, -113, 69, 116, -123, -30, 30, -102, -11, -128, 118, 117, -113, 15, -53, -112, -49, -49, -32, -84, -26, 126, -3, 13, 73, 38, 33, -116, 99, -17, -18, 44, 126, 46, -105, -11, 22, -18, 49, -114, 60, 6, -42, -86, -47, -55, 31, -38, 76, 115, -29, -19, 114, -14, -10, -22, 64, 107, 11, -47, 92, 107, 126, 98, -67, -119, -57, -79, 60, 65, 35, -72, 43, 10, -106, -48, 99, -105, 75, -125, -109, -122, 36, 31, 69, -4, 65, 122, -31, 90, 62, -121, 2, 99, 72, -103, -114, 27, 8, -95, -32, 86, -10, 76, -91, -71, 16, -23, -9, 88, 29, -21, 18, 41, 16, 100, 28, 68, -17, -47, -53, 54, 91, -103, -95, -123, -17, -34, 12, 122, -25, -29, 55, 117, 123, -53, -38, 94, -33, 67, 89, 91, 60, 99, -46, 122, -33, 75, 53, 85, -73, -122, -28, 103, -97, -55, -46, -63, -109, 100, -117, 90, 88, 3, -10, 125};
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
    msg.setTimeStamp(0.29631691317);
    msg.setSource(53070U);
    msg.setSourceEntity(132U);
    msg.setDestination(31472U);
    msg.setDestinationEntity(57U);
    msg.available = 2829072483U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.963891758701);
    msg.setSource(44902U);
    msg.setSourceEntity(210U);
    msg.setDestination(15297U);
    msg.setDestinationEntity(108U);
    msg.available = 969641328U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.690800886642);
    msg.setSource(20918U);
    msg.setSourceEntity(104U);
    msg.setDestination(10307U);
    msg.setDestinationEntity(29U);
    msg.available = 1938772866U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.578006287242);
    msg.setSource(22499U);
    msg.setSourceEntity(107U);
    msg.setDestination(2398U);
    msg.setDestinationEntity(212U);
    msg.op = 77U;
    msg.snapshot.assign("VCJVOTKZSELALEGOLBHMMOWQQDBXXIELSYVEXICVBFGDTNXRRVNBJSYKIXOMFQDHMHGRGRRNYYYPQBPOIZEIXFHI");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 161U;
    tmp_msg_0.time_remain = 0.459974139413;
    tmp_msg_0.sched_time = 0.662766000642;
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
    msg.setTimeStamp(0.51744821829);
    msg.setSource(49142U);
    msg.setSourceEntity(166U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(132U);
    msg.op = 83U;
    msg.snapshot.assign("OICKGASGTWRTBXNGPDSMJOZHOPJPVLIJHBJUJIPQIRFCQATRFZKVEIRUWOBIFDRPVNSAESBEBMMPSWMYNXIGUCVDYNZACEECYVRKNVQNFAJMUMWRWKAUUUTSCSDHHHMLZZQIXLSLHIKXMWAWHXNKUXIMQGQTLYFZEEW");
    IMC::ParameterControl tmp_msg_0;
    tmp_msg_0.op = 168U;
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
    msg.setTimeStamp(0.503099355054);
    msg.setSource(14928U);
    msg.setSourceEntity(26U);
    msg.setDestination(46551U);
    msg.setDestinationEntity(226U);
    msg.op = 79U;
    msg.snapshot.assign("YJVLDOZBXPIQQHUOQORKGWNVDYFACZWZVJIMUXZWXFQKWKKTYTBWAXUFSNSXWIQSPBOGPHNQOJFCAWRBCQBLLVZQHEJVMERQPMTEYSGWYATITKKVSIXPLMTNVLBEIUEUOYRQIFYLXJRAGMKXHFCUUUVTPIMNBYCMVRKLHEODDURHC");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("URSQHIVQYYXFKBIZLBHNVNGQSUGTRJUMMXLLSDGLOJKBJHCCXLPYZCTWCKYSLYEACGTPRZWEACPX");
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
    msg.setTimeStamp(0.245905546456);
    msg.setSource(60506U);
    msg.setSourceEntity(243U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(65U);
    msg.op = 32U;
    msg.name.assign("UPSZSFFNOJGNMMIPYIAXUIYUWHREYXRXXTUZOEGAGUTJLWLOAHVLLOKOLDISTXSDNPW");

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
    msg.setTimeStamp(0.723906557784);
    msg.setSource(21746U);
    msg.setSourceEntity(247U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(50U);
    msg.op = 189U;
    msg.name.assign("VLGIRKQVKPLAXBZMMOSPSIPBMESPVOJDJBVYPYDQLZIISFFMDRYNGUVLDUGNTXSGQZFYWTEJKBAYCLLEVWXGJKSLIQLBVOHOJPZNQAKXZYM");

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
    msg.setTimeStamp(0.333208800285);
    msg.setSource(51773U);
    msg.setSourceEntity(110U);
    msg.setDestination(18610U);
    msg.setDestinationEntity(195U);
    msg.op = 125U;
    msg.name.assign("UMEOHORMRZXEZUXAJBPVSVPEUGUKYEKJKMIY");

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
    msg.setTimeStamp(0.819683592937);
    msg.setSource(28357U);
    msg.setSourceEntity(65U);
    msg.setDestination(25029U);
    msg.setDestinationEntity(88U);
    msg.type = 62U;
    msg.htime = 0.821426055729;
    msg.context.assign("ZYBTZTJKABLXMANICPSZNHDUSCZCLAQDRHNNXLBORUEPQTVJDNYABWPCOWHIMGQQSCXDCFKVLNBOFHDVEXHEASMKDXYYTVXIQNMXMEFRTVJLVJBJRAPBASGVQZWTUDGRMTHUFJOGKXPLYOQTUCIHDXWMZASPJNYKLGRN");
    msg.text.assign("LAMAXMICKYZGYXZVNPCQTZZYFIAGTYVEVCFHQKRUVLUQHXRDLTUQWSMKSXSKYWJDDFNYNKPUGLJPOQBBUBJGTJFKIPAKUVCPYNIOWRLVAJAZBTASYSPIWOWLDIXN");

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
    msg.setTimeStamp(0.768007352691);
    msg.setSource(62498U);
    msg.setSourceEntity(57U);
    msg.setDestination(62876U);
    msg.setDestinationEntity(208U);
    msg.type = 84U;
    msg.htime = 0.66279082265;
    msg.context.assign("GSDSRMRXEWCUUGLQUZPVBEVYPOQMVUTITYZDEQGIBJFRLXHKCBDNRUMNZLLZVPDSFRMVWWHMNKASLPOQUHQYQOIVYCXUCXQBYORUBJDBNQOONSQAGLYSAFNFFTOZCZLGRAUMJHVXTHEFKFHMSUBKPESPJKWEWTKHWXIAJTLLNYOTCIBZRYVIDZXXHIYDWTAMEXMCWPJCKAWGFCAOQHCMRTOSKJIKT");
    msg.text.assign("KEXZBZGRVQBBJZYTZCUQOMEJJKKDRCTPIULCNYKQVHLMADZWFRQNEJWMOEHCNUNOVOPVQDZTNTXOIFFYXBGDAAZFNCLSSKWHSZGMCHJGSWIACFJBIBVGAUEEGHOWJUTRQTWYTPLEIWYWQTWXOMLSATGDHYUKIRJXMFOWSUVRQYRPNIMSEPSLPJ");

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
    msg.setTimeStamp(0.794090272135);
    msg.setSource(4955U);
    msg.setSourceEntity(4U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(211U);
    msg.type = 234U;
    msg.htime = 0.763725958121;
    msg.context.assign("HCMLVTLRXOROVNZUECZYUYNLWXXLMSNCHWEOBSTGWW");
    msg.text.assign("GPINQUKMAUANXIDIPOHYQDGHRWOHUURECSNVVJJEWPXCYDRVTXDCTTHNCBPVCHBUKTABWLYJHNAMPSZEERLDXXFFPRWQUOVMZZCSPCQAIZLTLYSREPAGEBOLKWMGVIAHLKKVUKSWBXYGCZFZOBBIBLUFJWMNXGYQJOGKGMEATBCZVMIRIEMCYHMYSKOXDRHXNSIJNJKWFOAQQQRUVAHFYXJPFSJJTDDFVZTSFKEZ");

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
    msg.setTimeStamp(0.187954365262);
    msg.setSource(26800U);
    msg.setSourceEntity(28U);
    msg.setDestination(13495U);
    msg.setDestinationEntity(23U);
    msg.command = 108U;
    msg.htime = 0.650777809265;

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
    msg.setTimeStamp(0.0978177458809);
    msg.setSource(13669U);
    msg.setSourceEntity(157U);
    msg.setDestination(21555U);
    msg.setDestinationEntity(4U);
    msg.command = 158U;
    msg.htime = 0.848415438402;

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
    msg.setTimeStamp(0.25172566581);
    msg.setSource(31784U);
    msg.setSourceEntity(206U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(192U);
    msg.command = 127U;
    msg.htime = 0.648782110564;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 24U;
    tmp_msg_0.htime = 0.349713654405;
    tmp_msg_0.context.assign("FECPLDFOVTEGLWXSAHVICUYOTRIXNNVGWGAMCPBOAPDHOMLWKYWTHJVSJQNVIFWNKOGDNLUNDYWTGEKRGERYOXUHLZFCWAFMVSXOSIUQDSAOWFTNRRJBLBKKFPMXQMQXKUAEMIBSZHDQOYQCWBADNVZTSURGGEHZPYSEDBCUCEZAYG");
    tmp_msg_0.text.assign("MMHPOMOIFQRLOVZPTAXNASIIBLMFKCJXKCCNCYNRAXHZSOGVHLGMUYUCFWUCULLTYMOBYJDTHNKMGQQXZHLPSBATQJJKGR");
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
    msg.setTimeStamp(0.140520259411);
    msg.setSource(32866U);
    msg.setSourceEntity(182U);
    msg.setDestination(41902U);
    msg.setDestinationEntity(132U);
    msg.op = 231U;
    msg.file.assign("OYBZVQDXREMATCVNFEORMFMDAHXNVHRUZGNPQAKRTYWJJHBWWPVMBQPXTVYJSXSFOABRDZNPNMEIFUFAOPMAOH");

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
    msg.setTimeStamp(0.28148944333);
    msg.setSource(48057U);
    msg.setSourceEntity(250U);
    msg.setDestination(49578U);
    msg.setDestinationEntity(142U);
    msg.op = 43U;
    msg.file.assign("TBBNWTVKMSLUUEEHNJGFWAFVXMERXVKAEBKGATJSNASUGACBVYHSUPVIMJLZCYYTFNOUJXNLAPKBQPRBOGBNGCVYTIFWDPHNOYAIVLMWMHLXOQJGJKKKSIFQRNYZCCHIXTSMUFVVZOBQILDRIYAHDZRCCUIZUQF");

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
    msg.setTimeStamp(0.768577395791);
    msg.setSource(23499U);
    msg.setSourceEntity(85U);
    msg.setDestination(17268U);
    msg.setDestinationEntity(207U);
    msg.op = 138U;
    msg.file.assign("OEOGYCFNXRWDUQZGXPDTQDFJVROGCOBATAJPRZKRUC");

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
    msg.setTimeStamp(0.51457690863);
    msg.setSource(11498U);
    msg.setSourceEntity(133U);
    msg.setDestination(24540U);
    msg.setDestinationEntity(167U);
    msg.op = 162U;
    msg.clock = 0.825839781311;
    msg.tz = 16;

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
    msg.setTimeStamp(0.868818874472);
    msg.setSource(12302U);
    msg.setSourceEntity(171U);
    msg.setDestination(7640U);
    msg.setDestinationEntity(65U);
    msg.op = 18U;
    msg.clock = 0.268628150701;
    msg.tz = 14;

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
    msg.setTimeStamp(0.201914279682);
    msg.setSource(37696U);
    msg.setSourceEntity(116U);
    msg.setDestination(41509U);
    msg.setDestinationEntity(165U);
    msg.op = 57U;
    msg.clock = 0.657705569867;
    msg.tz = -2;

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
    msg.setTimeStamp(0.688375290715);
    msg.setSource(17020U);
    msg.setSourceEntity(34U);
    msg.setDestination(26422U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.464849634328);
    msg.setSource(52912U);
    msg.setSourceEntity(242U);
    msg.setDestination(61400U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.66047347017);
    msg.setSource(35785U);
    msg.setSourceEntity(172U);
    msg.setDestination(54088U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.813524108509);
    msg.setSource(42236U);
    msg.setSourceEntity(129U);
    msg.setDestination(27971U);
    msg.setDestinationEntity(158U);
    msg.sys_name.assign("CVAAGWMNOKFZLJWSFCSLKNIYOIPTMPVKBXBRJIHKBYRDHJMFXRPJEESWFOVKPWXFRUKGLRBCYHYMHNAVBBEEUQEJWLFWFPEPMHAYUEWVEZCOJYANUMKGQMSXZASKQCRYDHVQZEOAQIWZOQNNDJZRIDCYZFODNSQSTTTFKLZCDBJUCJODQTDBXEGSVLDHHULVUGIKBABNLLLGQXWVDUTQNRXYTFZAICGRR");
    msg.sys_type = 221U;
    msg.owner = 35537U;
    msg.lat = 0.189330108461;
    msg.lon = 0.339690900975;
    msg.height = 0.0329508141359;
    msg.services.assign("ROKSSKTBZFXUTGCDOABJRNFSUJEYGHYAUFOJEEIMNVXQHPSNKUDVOECXZBFPYDHWTGCEMTPAKLLMLFGOVIVLBERHCUAHQQXITTLZIAIDSVVCGRXDJHLMZEDOHSGCVGJPNXEWU");

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
    msg.setTimeStamp(0.553373181867);
    msg.setSource(4804U);
    msg.setSourceEntity(38U);
    msg.setDestination(61497U);
    msg.setDestinationEntity(143U);
    msg.sys_name.assign("YVZCGWVFUBWDQSJYEKGLVFESTQBGMTOYSVZOO");
    msg.sys_type = 182U;
    msg.owner = 18594U;
    msg.lat = 0.811379464101;
    msg.lon = 0.400272734194;
    msg.height = 0.484328290322;
    msg.services.assign("AZPJZRLGQNFCZEDEEJMERNFNIYKDYQZZJHJYTPGXNHLVOXRHIAVQHYFBWMJIVXXLOIGIPIOGVBOJQHGAUOLIDMRNWGXWKUBGMXUHSDTUFANMCPDFHZQ");

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
    msg.setTimeStamp(0.108590848265);
    msg.setSource(22133U);
    msg.setSourceEntity(64U);
    msg.setDestination(6171U);
    msg.setDestinationEntity(164U);
    msg.sys_name.assign("PHXWHYEBXBWEZDJAIZOVEXEVYONJUAEUQRRCMYPMRCDBJCYYNDQLBXXODOEVRMTDCUJ");
    msg.sys_type = 246U;
    msg.owner = 38324U;
    msg.lat = 0.814114993071;
    msg.lon = 0.249996042618;
    msg.height = 0.885355646301;
    msg.services.assign("AASLTKMTDBMPNDBBMXWFNIBSKREFYDUJPSHDKQEVSIJIRXCIBLDFKXXEJJTGAJJGHMWSRGEURRHZITUVFQEPOQVWUBRGFGNHKPLZUMMZLRLTKUGJAVNTZKZPXTDSCGJAVWQBDGXWWRKTHKGCHZF");

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
    msg.setTimeStamp(0.874001399192);
    msg.setSource(2948U);
    msg.setSourceEntity(136U);
    msg.setDestination(57540U);
    msg.setDestinationEntity(134U);
    msg.service.assign("TMMLLCNGEXOQNLBIQPPKYZJTVNQVMDSGRXWHXHSBSWFAHNUWPLMCEZZZUDKHWRGUABXSCHBKAFJMTTRUUBTESMWONFTCBCSRNSDIOEFDZLVPKVKOVJGPKTJHUTDJZOYRHKYQEWJVEIAXEPHWYXQXYWBLNGTOXPZYUBHIDQEKTOYFDFGAGZHLFVEJRNSYGEIDNAPCSWQVARJMJSOQFQPIGRIRIRI");
    msg.service_type = 107U;

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
    msg.setTimeStamp(0.0605797434941);
    msg.setSource(40635U);
    msg.setSourceEntity(223U);
    msg.setDestination(56141U);
    msg.setDestinationEntity(20U);
    msg.service.assign("PXBLHOKSPKJXZZDUGNEMXVMQPNMYQIVIGGUUSWDYNPICALZNUVIKWSPKTCHRLIEVXRFDUWYR");
    msg.service_type = 111U;

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
    msg.setTimeStamp(0.884472228746);
    msg.setSource(47248U);
    msg.setSourceEntity(196U);
    msg.setDestination(47355U);
    msg.setDestinationEntity(241U);
    msg.service.assign("BYRPTIZMIZKDQGWJOJPWJPMEHSTUPGFUFNSJTAVIMEYRVGWRQELKB");
    msg.service_type = 240U;

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
    msg.setTimeStamp(0.796947271538);
    msg.setSource(19986U);
    msg.setSourceEntity(27U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(61U);
    msg.value = 0.290792805014;

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
    msg.setTimeStamp(0.724702869126);
    msg.setSource(16178U);
    msg.setSourceEntity(212U);
    msg.setDestination(14815U);
    msg.setDestinationEntity(32U);
    msg.value = 0.0928265788045;

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
    msg.setTimeStamp(0.00966796101415);
    msg.setSource(51939U);
    msg.setSourceEntity(121U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(198U);
    msg.value = 0.357342391166;

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
    msg.setTimeStamp(0.085607872187);
    msg.setSource(12290U);
    msg.setSourceEntity(131U);
    msg.setDestination(63304U);
    msg.setDestinationEntity(201U);
    msg.value = 0.7107818868;

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
    msg.setTimeStamp(0.499513365499);
    msg.setSource(60543U);
    msg.setSourceEntity(93U);
    msg.setDestination(6941U);
    msg.setDestinationEntity(79U);
    msg.value = 0.212100724995;

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
    msg.setTimeStamp(0.0398277149721);
    msg.setSource(42066U);
    msg.setSourceEntity(186U);
    msg.setDestination(48256U);
    msg.setDestinationEntity(133U);
    msg.value = 0.824695342416;

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
    msg.setTimeStamp(0.103895580661);
    msg.setSource(14211U);
    msg.setSourceEntity(109U);
    msg.setDestination(10266U);
    msg.setDestinationEntity(240U);
    msg.value = 0.0981007505923;

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
    msg.setTimeStamp(0.704159698461);
    msg.setSource(57541U);
    msg.setSourceEntity(206U);
    msg.setDestination(59360U);
    msg.setDestinationEntity(163U);
    msg.value = 0.329324745367;

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
    msg.setTimeStamp(0.348441934045);
    msg.setSource(20024U);
    msg.setSourceEntity(30U);
    msg.setDestination(1425U);
    msg.setDestinationEntity(16U);
    msg.value = 0.312326658959;

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
    msg.setTimeStamp(0.643531811931);
    msg.setSource(49110U);
    msg.setSourceEntity(29U);
    msg.setDestination(55632U);
    msg.setDestinationEntity(14U);
    msg.number.assign("JFQBDPAIQIZRSDKAEHVSOLGGCEEWRWFGMNWXJNCZTELKVUUNNHBPHUPXYQVDKESJGUKETAGHMYKJLEPMSZJPNPDFURBBTOTDMKXCPFTTLVMAJGXYMIGIMBXWHQISXMCMFIFNXGVVPYOBGJRVDXLJCRODZOSWYZHNKIUJYHYUTTKNEQZROZUSAHXNTWYJRLLOEARFPHQA");
    msg.timeout = 2442U;
    msg.contents.assign("MXJYPEMREOXJWGJEWZLCYRNUSHZGKMCCYHSXGLKCXPFUZGUNMAFREALYBSTQSRWQGNRIGRSJKRLWCZTLCDTTYVKHFTTMBJNSAUPIWERMPMCNHPQFKYIZVLAOPD");

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
    msg.setTimeStamp(0.374177042619);
    msg.setSource(5100U);
    msg.setSourceEntity(153U);
    msg.setDestination(60715U);
    msg.setDestinationEntity(63U);
    msg.number.assign("CTICRHWVSZPHYQPHASBQJOKFZEGXSTBJZPFCESABXDGTIMAPLCLJPXLWUICAJRLGJYZGM");
    msg.timeout = 45078U;
    msg.contents.assign("ANKPSHFBRWTDZJDLISLUWFZFKABBRNCPZHTOWNIJYJIHD");

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
    msg.setTimeStamp(0.796843778847);
    msg.setSource(64476U);
    msg.setSourceEntity(127U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(113U);
    msg.number.assign("IJBOLWVBCUPCBPGMFEUKGCZQJONUIWVZARWSTSTYNUZRXGMJIFMQQDLHWJOVAULLNSKSV");
    msg.timeout = 63332U;
    msg.contents.assign("EUOJCRJPUPSTJAQAZISFYANGVFIUPVWUCNAQKBZHFSMDCPXHIKEJACSHEGZLJUNITNBAJGVRVKKDUMOSLBDWURKFLRJIZZUTEAONLEMBHOWHJMSVTOMSTVVPXLMPHZNVCDLTFNMCWPWBQDTSBCFVECGWJADTQXWFBMATPIZZKKXOWYGDYEKTZNVBGQXYDYEFLXBYXYPPEYAXHGOQHRMLROCSGXKQLILMYUFNGQBZ");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.159298509414);
    msg.setSource(63948U);
    msg.setSourceEntity(73U);
    msg.setDestination(47033U);
    msg.setDestinationEntity(211U);
    msg.id = 99U;
    msg.range = 0.388694185725;

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
    msg.setTimeStamp(0.41972699116);
    msg.setSource(50355U);
    msg.setSourceEntity(70U);
    msg.setDestination(45060U);
    msg.setDestinationEntity(23U);
    msg.id = 232U;
    msg.range = 0.754522322553;

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
    msg.setTimeStamp(0.791346784198);
    msg.setSource(16969U);
    msg.setSourceEntity(230U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(158U);
    msg.id = 150U;
    msg.range = 0.0858148483016;

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
    msg.setTimeStamp(0.746567658158);
    msg.setSource(26715U);
    msg.setSourceEntity(217U);
    msg.setDestination(61223U);
    msg.setDestinationEntity(200U);
    msg.tx = 244U;
    msg.channel = 37U;
    msg.timer = 58409U;

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
    msg.setTimeStamp(0.221892563103);
    msg.setSource(55017U);
    msg.setSourceEntity(79U);
    msg.setDestination(18595U);
    msg.setDestinationEntity(176U);
    msg.tx = 65U;
    msg.channel = 15U;
    msg.timer = 19796U;

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
    msg.setTimeStamp(0.343625298385);
    msg.setSource(58211U);
    msg.setSourceEntity(118U);
    msg.setDestination(5928U);
    msg.setDestinationEntity(72U);
    msg.tx = 180U;
    msg.channel = 74U;
    msg.timer = 54013U;

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
    msg.setTimeStamp(0.161590955394);
    msg.setSource(4855U);
    msg.setSourceEntity(95U);
    msg.setDestination(42708U);
    msg.setDestinationEntity(94U);
    msg.beacon.assign("HQLXEDFUHDQSBVKSQWRTXHGHUSIVEYAGEULJQNHYGBELTLCGWJXHYULOMVJNDSBWGVKZZDNBVPFMQXLAWNCTBDWQVIMSINAPXKFRIARKRODNFHYBCOCXUKXOQZIQCPMLAKXJAQDTHSVAOREJDUACYKCUZTZILJGFEFTHWCKXOTCRPOMKHAMINMJSWVVMITXGEOAMEYBPFPFBWNWPZ");
    msg.lat = 0.822503510982;
    msg.lon = 0.274045974732;
    msg.depth = 0.892114675264;
    msg.query_channel = 238U;
    msg.reply_channel = 76U;
    msg.transponder_delay = 29U;

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
    msg.setTimeStamp(0.480971378015);
    msg.setSource(12727U);
    msg.setSourceEntity(107U);
    msg.setDestination(65172U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("PWFJRUFYOZY");
    msg.lat = 0.207516829852;
    msg.lon = 0.0917196902601;
    msg.depth = 0.070797262204;
    msg.query_channel = 115U;
    msg.reply_channel = 221U;
    msg.transponder_delay = 194U;

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
    msg.setTimeStamp(0.796998436748);
    msg.setSource(64337U);
    msg.setSourceEntity(85U);
    msg.setDestination(27167U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("BSXEFJJUTGPZKZDSVCIQCQXVMGZDQYPKMWSMCYNEUUTAWNJIWHBEGPQMKRAAGTFLKILSYHEOACRJHBHDVKBXJLOQYYJGRFLHCIUEJIXTLLDYEVTXAQNVOIECBPWOSUYFDWTKVUEXBMZGXX");
    msg.lat = 0.212894711777;
    msg.lon = 0.906683093704;
    msg.depth = 0.373067991205;
    msg.query_channel = 208U;
    msg.reply_channel = 185U;
    msg.transponder_delay = 83U;

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
    msg.setTimeStamp(0.625311569703);
    msg.setSource(43962U);
    msg.setSourceEntity(38U);
    msg.setDestination(13417U);
    msg.setDestinationEntity(96U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.740362458532);
    msg.setSource(56470U);
    msg.setSourceEntity(118U);
    msg.setDestination(10875U);
    msg.setDestinationEntity(54U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.0589986702031);
    msg.setSource(62755U);
    msg.setSourceEntity(26U);
    msg.setDestination(41234U);
    msg.setDestinationEntity(108U);
    msg.op = 183U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TJNDHSYDBFKPMOBPHJAUGZCJXOULQFHHOYXZIMKATNIYRKOVLTOFVJEGBGMGKGYWURNJYPCNYVFZEBF");
    tmp_msg_0.lat = 0.636531287792;
    tmp_msg_0.lon = 0.749817387947;
    tmp_msg_0.depth = 0.996623356664;
    tmp_msg_0.query_channel = 187U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 64U;
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
    msg.setTimeStamp(0.0970030378513);
    msg.setSource(23340U);
    msg.setSourceEntity(126U);
    msg.setDestination(60900U);
    msg.setDestinationEntity(115U);
    msg.address = 48U;

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
    msg.setTimeStamp(0.765542300729);
    msg.setSource(60091U);
    msg.setSourceEntity(69U);
    msg.setDestination(61258U);
    msg.setDestinationEntity(68U);
    msg.address = 229U;

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
    msg.setTimeStamp(0.572326507935);
    msg.setSource(35174U);
    msg.setSourceEntity(83U);
    msg.setDestination(54585U);
    msg.setDestinationEntity(78U);
    msg.address = 189U;

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
    msg.setTimeStamp(0.437814222647);
    msg.setSource(2644U);
    msg.setSourceEntity(68U);
    msg.setDestination(55076U);
    msg.setDestinationEntity(196U);
    msg.address = 0U;
    msg.status = 246U;
    msg.range = 0.790208540454;

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
    msg.setTimeStamp(0.0867665098461);
    msg.setSource(62925U);
    msg.setSourceEntity(174U);
    msg.setDestination(16692U);
    msg.setDestinationEntity(156U);
    msg.address = 45U;
    msg.status = 172U;
    msg.range = 0.621559310596;

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
    msg.setTimeStamp(0.922354992607);
    msg.setSource(65434U);
    msg.setSourceEntity(127U);
    msg.setDestination(64243U);
    msg.setDestinationEntity(175U);
    msg.address = 135U;
    msg.status = 84U;
    msg.range = 0.331645850708;

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
    msg.setTimeStamp(0.654233062784);
    msg.setSource(54462U);
    msg.setSourceEntity(230U);
    msg.setDestination(40054U);
    msg.setDestinationEntity(114U);
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 30203U;
    tmp_msg_0.plan_size = 2468055905U;
    tmp_msg_0.change_time = 0.286120662838;
    tmp_msg_0.change_sid = 3203U;
    tmp_msg_0.change_sname.assign("VUFABBITDRLJVFBZPAETDQVGRFAOUAZBCNEKWOEGRPRPKTKPNLBRQZXWNIWUYXLMQIHGNBRQWVUELOADYEQHRWOUXRPHOMSUPUSPKSIVCWWFZQQRJLQZOSIOFEMIIJNGHJZNCHZMXKGTATKOSFJNWZLSUMJMKHEMMUCXMTKCTOSWUQTPHESBGXXLWV");
    const char tmp_tmp_msg_0_0[] = {51, -61, 95, 86, -18, -114, 52, -107, -25, -126, -41, -4, -19, -19, -10, -66, 38, -118, 68, -122, -115, -24, -54, -60, -74, -87, 91};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("YIBPWVMCORWYQFDVKTBKNRGOHXXPXJHTSQVKUTKWHYCIGUPEIQPUGDEIHKGWJWTLFNVLOOFRZYOURMMUEDXOUNDBJMKQSZYITMLCRKGXCSFGAJCEDCVEYZBFNXBZUJCWGEINVSSLAUJHEZSZJAXDFMYANPEOLFJQHGBVXATTJESBVNSZQPYWAO");
    tmp_tmp_msg_0_1.plan_size = 39114U;
    tmp_tmp_msg_0_1.change_time = 0.433590783583;
    tmp_tmp_msg_0_1.change_sid = 10901U;
    tmp_tmp_msg_0_1.change_sname.assign("HLONOFOXDZPJISZPSSKGOHMWRAXNITYHMUWLQFFTFZGPMYCYQRMVEEUUSETCIUDGTEWTQDPFVTIFPAKBWQIWAIUXUJJCGXYYZSGYAHEYXLNNVGFGJOACQIXRSCMUMKSFFCHYRDHWJGBZKHKCN");
    const char tmp_tmp_tmp_msg_0_1_0[] = {-23, -88, 31, 71, 111, 46, 32, -31, -63, 23, 100, 108, -73, 58, -38, 80, 22, -2, 50, 24, -15, -120, -56, -31, 54, -106, 97, -101, -39, 97, -70, -7, 39, 13, -15, 20, -105, 14, -39, -2, -86, -84, -84, 69, 12, 13, -36, 14, -84, 11, 93, -128, -67, 97, 99, -85, 49, -28, 9, -58, 82, 83, -126, -51, -52, 118, -113, -51, 34, 117, -76, -69, -18, -52, 35, 8, -119, -90, -51, -73, 92, 53, 81, -19, 55, 26, -113, -15, 96, 108, -27, 106, 52, 108, -75, 59, -44, -15, -106, 68, 0, -26, 120, 124, -94, 1, -54, -96, 32, 75, 56, -82, -42, 101, 95, 57, -12, 81, 40, -21, -17, -12, -63, -56, -100, -110, -41, 87};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0211178739207);
    msg.setSource(22662U);
    msg.setSourceEntity(21U);
    msg.setDestination(11572U);
    msg.setDestinationEntity(211U);
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.208732786162;
    tmp_msg_0.v = 0.120244173781;
    tmp_msg_0.w = 0.82509131132;
    tmp_msg_0.p = 0.871868764159;
    tmp_msg_0.q = 0.259389403977;
    tmp_msg_0.r = 0.655708878287;
    tmp_msg_0.flags = 162U;
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
    msg.setTimeStamp(0.821112873742);
    msg.setSource(42924U);
    msg.setSourceEntity(10U);
    msg.setDestination(1063U);
    msg.setDestinationEntity(224U);
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 164U;
    tmp_msg_0.value = 0.530631245834;
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
    msg.setTimeStamp(0.26576314039);
    msg.setSource(17056U);
    msg.setSourceEntity(51U);
    msg.setDestination(34212U);
    msg.setDestinationEntity(29U);
    msg.enable = 224U;

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
    msg.setTimeStamp(0.85309347391);
    msg.setSource(63750U);
    msg.setSourceEntity(237U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(86U);
    msg.enable = 231U;

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
    msg.setTimeStamp(0.0692536326694);
    msg.setSource(24904U);
    msg.setSourceEntity(150U);
    msg.setDestination(13885U);
    msg.setDestinationEntity(105U);
    msg.enable = 64U;

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
    msg.setTimeStamp(0.110195793545);
    msg.setSource(60291U);
    msg.setSourceEntity(110U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(176U);
    msg.summary = 202U;
    msg.level = 128U;

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
    msg.setTimeStamp(0.499387853077);
    msg.setSource(14597U);
    msg.setSourceEntity(12U);
    msg.setDestination(5301U);
    msg.setDestinationEntity(253U);
    msg.summary = 210U;
    msg.level = 118U;

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
    msg.setTimeStamp(0.19967793486);
    msg.setSource(24468U);
    msg.setSourceEntity(247U);
    msg.setDestination(27496U);
    msg.setDestinationEntity(65U);
    msg.summary = 120U;
    msg.level = 175U;

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
    msg.setTimeStamp(0.162294063281);
    msg.setSource(42303U);
    msg.setSourceEntity(167U);
    msg.setDestination(18630U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.258214872396);
    msg.setSource(49180U);
    msg.setSourceEntity(154U);
    msg.setDestination(14703U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.270658777713);
    msg.setSource(16694U);
    msg.setSourceEntity(236U);
    msg.setDestination(12699U);
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
    msg.setTimeStamp(0.116608997973);
    msg.setSource(16033U);
    msg.setSourceEntity(30U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.291700711032);
    msg.setSource(6342U);
    msg.setSourceEntity(13U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.652128196937);
    msg.setSource(57138U);
    msg.setSourceEntity(97U);
    msg.setDestination(19998U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.968369279409);
    msg.setSource(32330U);
    msg.setSourceEntity(1U);
    msg.setDestination(53294U);
    msg.setDestinationEntity(113U);
    msg.op = 157U;
    msg.system.assign("UJEFMJAJOYJLUJOMHEYWEFFLFWIOZMAFVMQEXSGRIVVMDHNPOZMGCSPAXUXREZUKRSYJDVAYNNUBBKRBIWIQNKLEBLCWLBTQWOKSUZOANAXZIPYGUQNPXPYXFKDHPHSHSGJHVGXZWQBPEJDDJRI");
    msg.range = 0.676093826151;
    IMC::LblDetection tmp_msg_0;
    tmp_msg_0.tx = 174U;
    tmp_msg_0.channel = 12U;
    tmp_msg_0.timer = 31929U;
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
    msg.setTimeStamp(0.328483281726);
    msg.setSource(53748U);
    msg.setSourceEntity(197U);
    msg.setDestination(60839U);
    msg.setDestinationEntity(55U);
    msg.op = 85U;
    msg.system.assign("IEXPVSKLYSRMDFKTCQFMBPIUVFIJEZRHBDWOSNMNDGNAAGJKWWXUDLJABSXBYEWUIEVFQYSZJNGAFLBDTUDFOKSQOHUXRPHXCYPMCNKVFARNKIGWPUBJYNDPQQMKWATYQRRKZXHITEJJOFKESPJUORFAAVUXCQPMBGGWCLTLILZPYZC");
    msg.range = 0.733762354956;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.533782717179;
    tmp_msg_0.y = 0.632550160885;
    tmp_msg_0.z = 0.83510988769;
    tmp_msg_0.t = 0.0732501860854;
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
    msg.setTimeStamp(0.542432106415);
    msg.setSource(14937U);
    msg.setSourceEntity(232U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(106U);
    msg.op = 245U;
    msg.system.assign("PIVIZACJAMQTRZJYBWIMPCNFHUCIBUCELOQNDVWDGDZCWRHRZAUNVQDADATSPPZWYWKALMGFFBTOSIQXGJBOTTVNVWVLEOUVZCPPYOUSTUAXQSYHBNXLIMYQKGDIYOLDKDUGRFXJLFGZUEHECGFQTMWFQNYLWELQHJTGZJXTXGECRVMRDRBRKKSAKXHUNNJOMCMOFIZCSBEHGKSDFPRMHWRLFTBIZPBKXPYYNHJOKPNSVOKWLJYEIMBSH");
    msg.range = 0.0175065951774;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 31497U;
    tmp_msg_0.custom.assign("EQKHZNIOREZPGZJWDASVXOTJBUVLRLOYNZUMFAMEGPKXAZEUDSPWAYIQVXBOEZ");
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
    msg.setTimeStamp(0.109425163638);
    msg.setSource(39400U);
    msg.setSourceEntity(87U);
    msg.setDestination(48597U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.638800762013);
    msg.setSource(32157U);
    msg.setSourceEntity(213U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.926361550144);
    msg.setSource(2303U);
    msg.setSourceEntity(18U);
    msg.setDestination(6871U);
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
    msg.setTimeStamp(0.559882953035);
    msg.setSource(47402U);
    msg.setSourceEntity(138U);
    msg.setDestination(10376U);
    msg.setDestinationEntity(191U);
    msg.list.assign("CLECMHIXDPYAPSMOJWCIOCFJAKGVILWROLXXJXKYVOOXRUFDMYHXKGREQSDWRNJZKSMLKNKBWUUUSLBKFSACUDUXYVWHRAMOZPBNYXRUBGWHITVNLJHDOCUBTNQIZSAZJVWOGZEGPYEEQYSBFRATSBBXMLGZVREPMSEAEQGICZCLFTVZHFNQTXMTYUTWMZNDHLGPEQEVTJVSMHTK");

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
    msg.setTimeStamp(0.712961556553);
    msg.setSource(36053U);
    msg.setSourceEntity(217U);
    msg.setDestination(33722U);
    msg.setDestinationEntity(232U);
    msg.list.assign("YLORKBIDBBKRXXHPMEUULYMGXSCNEWWAKVNFYPXEILF");

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
    msg.setTimeStamp(0.84419949957);
    msg.setSource(765U);
    msg.setSourceEntity(243U);
    msg.setDestination(47712U);
    msg.setDestinationEntity(194U);
    msg.list.assign("RFFSVPDGZKZOIGMHNRCJQEHCXVWCCEGBYHSFNTMSNDLQYARVMUBPWPJEAWB");

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
    msg.setTimeStamp(0.145726507097);
    msg.setSource(1944U);
    msg.setSourceEntity(47U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(138U);
    msg.value = -7880;

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
    msg.setTimeStamp(0.457811688789);
    msg.setSource(65192U);
    msg.setSourceEntity(232U);
    msg.setDestination(22403U);
    msg.setDestinationEntity(31U);
    msg.value = -18436;

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
    msg.setTimeStamp(0.723374254564);
    msg.setSource(28028U);
    msg.setSourceEntity(121U);
    msg.setDestination(59198U);
    msg.setDestinationEntity(47U);
    msg.value = 29477;

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
    msg.setTimeStamp(0.685779520899);
    msg.setSource(3742U);
    msg.setSourceEntity(126U);
    msg.setDestination(26814U);
    msg.setDestinationEntity(169U);
    msg.value = 0.325824700485;

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
    msg.setTimeStamp(0.224631641377);
    msg.setSource(23447U);
    msg.setSourceEntity(134U);
    msg.setDestination(8081U);
    msg.setDestinationEntity(45U);
    msg.value = 0.849535836551;

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
    msg.setTimeStamp(0.726651637096);
    msg.setSource(4136U);
    msg.setSourceEntity(190U);
    msg.setDestination(8144U);
    msg.setDestinationEntity(103U);
    msg.value = 0.47279382831;

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
    msg.setTimeStamp(0.691410572195);
    msg.setSource(6235U);
    msg.setSourceEntity(8U);
    msg.setDestination(46390U);
    msg.setDestinationEntity(71U);
    msg.value = 0.782976754802;

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
    msg.setTimeStamp(0.394910363116);
    msg.setSource(4155U);
    msg.setSourceEntity(152U);
    msg.setDestination(43913U);
    msg.setDestinationEntity(198U);
    msg.value = 0.00682994568177;

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
    msg.setTimeStamp(0.773434274917);
    msg.setSource(18443U);
    msg.setSourceEntity(195U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(219U);
    msg.value = 0.50445435964;

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
    msg.setTimeStamp(0.983250940644);
    msg.setSource(27537U);
    msg.setSourceEntity(198U);
    msg.setDestination(4833U);
    msg.setDestinationEntity(245U);
    msg.validity = 33917U;
    msg.type = 34U;
    msg.utc_year = 58751U;
    msg.utc_month = 160U;
    msg.utc_day = 9U;
    msg.utc_time = 0.607612972968;
    msg.lat = 0.121221820306;
    msg.lon = 0.609712927763;
    msg.height = 0.290227010532;
    msg.satellites = 85U;
    msg.cog = 0.268042217139;
    msg.sog = 0.32587761897;
    msg.hdop = 0.147788495384;
    msg.vdop = 0.998908319318;
    msg.hacc = 0.245247647283;
    msg.vacc = 0.7407376279;

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
    msg.setTimeStamp(0.603469143694);
    msg.setSource(6714U);
    msg.setSourceEntity(31U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(176U);
    msg.validity = 63585U;
    msg.type = 245U;
    msg.utc_year = 64756U;
    msg.utc_month = 187U;
    msg.utc_day = 108U;
    msg.utc_time = 0.0669048960826;
    msg.lat = 0.879359717002;
    msg.lon = 0.816522578681;
    msg.height = 0.247626547118;
    msg.satellites = 7U;
    msg.cog = 0.596334052684;
    msg.sog = 0.264515581544;
    msg.hdop = 0.716001810734;
    msg.vdop = 0.118959928813;
    msg.hacc = 0.801695252475;
    msg.vacc = 0.907522929377;

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
    msg.setTimeStamp(0.973717652951);
    msg.setSource(31851U);
    msg.setSourceEntity(103U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(64U);
    msg.validity = 15297U;
    msg.type = 51U;
    msg.utc_year = 43549U;
    msg.utc_month = 164U;
    msg.utc_day = 233U;
    msg.utc_time = 0.0563555065158;
    msg.lat = 0.39527495923;
    msg.lon = 0.699600635502;
    msg.height = 0.911950159265;
    msg.satellites = 190U;
    msg.cog = 0.151569281707;
    msg.sog = 0.411268001763;
    msg.hdop = 0.969929610151;
    msg.vdop = 0.207615877965;
    msg.hacc = 0.381431574667;
    msg.vacc = 0.0770208659724;

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
    msg.setTimeStamp(0.145631928384);
    msg.setSource(5900U);
    msg.setSourceEntity(253U);
    msg.setDestination(16581U);
    msg.setDestinationEntity(37U);
    msg.time = 0.204315629882;
    msg.phi = 0.0221980565583;
    msg.theta = 0.450825780117;
    msg.psi = 0.894637047012;
    msg.psi_magnetic = 0.785079568148;

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
    msg.setTimeStamp(0.261645749656);
    msg.setSource(17612U);
    msg.setSourceEntity(56U);
    msg.setDestination(46948U);
    msg.setDestinationEntity(186U);
    msg.time = 0.712224846871;
    msg.phi = 0.844844222407;
    msg.theta = 0.276957255272;
    msg.psi = 0.142358324714;
    msg.psi_magnetic = 0.0797278410007;

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
    msg.setTimeStamp(0.495192030802);
    msg.setSource(12471U);
    msg.setSourceEntity(50U);
    msg.setDestination(63288U);
    msg.setDestinationEntity(46U);
    msg.time = 0.991972484194;
    msg.phi = 0.453220770519;
    msg.theta = 0.759791828376;
    msg.psi = 0.863689322797;
    msg.psi_magnetic = 0.123287213594;

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
    msg.setTimeStamp(0.897930926146);
    msg.setSource(36744U);
    msg.setSourceEntity(228U);
    msg.setDestination(40752U);
    msg.setDestinationEntity(187U);
    msg.time = 0.702914374869;
    msg.x = 0.22759531908;
    msg.y = 0.689825353993;
    msg.z = 0.375165018707;
    msg.timestep = 0.107553150958;

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
    msg.setTimeStamp(0.644587893163);
    msg.setSource(64145U);
    msg.setSourceEntity(87U);
    msg.setDestination(36467U);
    msg.setDestinationEntity(241U);
    msg.time = 0.578966471572;
    msg.x = 0.823127455814;
    msg.y = 0.821239827969;
    msg.z = 0.872970288771;
    msg.timestep = 0.799603574761;

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
    msg.setTimeStamp(0.978311518784);
    msg.setSource(40289U);
    msg.setSourceEntity(109U);
    msg.setDestination(20747U);
    msg.setDestinationEntity(186U);
    msg.time = 0.416208816515;
    msg.x = 0.079244259481;
    msg.y = 0.184505489797;
    msg.z = 0.218520227634;
    msg.timestep = 0.510933621497;

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
    msg.setTimeStamp(0.205641758586);
    msg.setSource(3022U);
    msg.setSourceEntity(66U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(178U);
    msg.time = 0.638121654584;
    msg.x = 0.0206822557085;
    msg.y = 0.317774173807;
    msg.z = 0.454702051425;

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
    msg.setTimeStamp(0.399147031568);
    msg.setSource(26990U);
    msg.setSourceEntity(247U);
    msg.setDestination(7560U);
    msg.setDestinationEntity(151U);
    msg.time = 0.0677787299768;
    msg.x = 0.149134878064;
    msg.y = 0.983661130127;
    msg.z = 0.686239100172;

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
    msg.setTimeStamp(0.216091112941);
    msg.setSource(60832U);
    msg.setSourceEntity(4U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(56U);
    msg.time = 0.873639317692;
    msg.x = 0.283660431528;
    msg.y = 0.902236616171;
    msg.z = 0.100264397219;

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
    msg.setTimeStamp(0.540719194555);
    msg.setSource(39987U);
    msg.setSourceEntity(7U);
    msg.setDestination(18013U);
    msg.setDestinationEntity(181U);
    msg.time = 0.98193881647;
    msg.x = 0.0162523957687;
    msg.y = 0.885535978123;
    msg.z = 0.946218640109;

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
    msg.setTimeStamp(0.508027549628);
    msg.setSource(54728U);
    msg.setSourceEntity(228U);
    msg.setDestination(13901U);
    msg.setDestinationEntity(63U);
    msg.time = 0.0115153553572;
    msg.x = 0.865348822899;
    msg.y = 0.195613522785;
    msg.z = 0.964696750834;

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
    msg.setTimeStamp(0.629888348516);
    msg.setSource(33648U);
    msg.setSourceEntity(95U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(88U);
    msg.time = 0.334913055067;
    msg.x = 0.472396593075;
    msg.y = 0.194087198507;
    msg.z = 0.817817905651;

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
    msg.setTimeStamp(0.152390826061);
    msg.setSource(54403U);
    msg.setSourceEntity(13U);
    msg.setDestination(50843U);
    msg.setDestinationEntity(116U);
    msg.time = 0.00384089109948;
    msg.x = 0.212599507168;
    msg.y = 0.634071881312;
    msg.z = 0.877579862917;

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
    msg.setTimeStamp(0.387507215333);
    msg.setSource(42266U);
    msg.setSourceEntity(22U);
    msg.setDestination(45820U);
    msg.setDestinationEntity(80U);
    msg.time = 0.615456109479;
    msg.x = 0.180783342296;
    msg.y = 0.630525134878;
    msg.z = 0.574119453327;

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
    msg.setTimeStamp(0.906973173951);
    msg.setSource(32670U);
    msg.setSourceEntity(232U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(157U);
    msg.time = 0.316624512642;
    msg.x = 0.236446575585;
    msg.y = 0.297029206214;
    msg.z = 0.563006911681;

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
    msg.setTimeStamp(0.936023375956);
    msg.setSource(31459U);
    msg.setSourceEntity(43U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(198U);
    msg.validity = 120U;
    msg.x = 0.489316982784;
    msg.y = 0.221389142875;
    msg.z = 0.144919610735;

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
    msg.setTimeStamp(0.272350199927);
    msg.setSource(7100U);
    msg.setSourceEntity(197U);
    msg.setDestination(5841U);
    msg.setDestinationEntity(8U);
    msg.validity = 234U;
    msg.x = 0.644301245186;
    msg.y = 0.288693309882;
    msg.z = 0.416005302528;

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
    msg.setTimeStamp(0.258963285986);
    msg.setSource(11048U);
    msg.setSourceEntity(209U);
    msg.setDestination(46398U);
    msg.setDestinationEntity(51U);
    msg.validity = 128U;
    msg.x = 0.256564812224;
    msg.y = 0.038292387522;
    msg.z = 0.585161703654;

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
    msg.setTimeStamp(0.847877680454);
    msg.setSource(18186U);
    msg.setSourceEntity(63U);
    msg.setDestination(47870U);
    msg.setDestinationEntity(148U);
    msg.validity = 67U;
    msg.x = 0.566205105461;
    msg.y = 0.236454111221;
    msg.z = 0.392099054032;

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
    msg.setTimeStamp(0.770941592309);
    msg.setSource(27022U);
    msg.setSourceEntity(91U);
    msg.setDestination(32531U);
    msg.setDestinationEntity(51U);
    msg.validity = 115U;
    msg.x = 0.426508070741;
    msg.y = 0.212994872859;
    msg.z = 0.799779533169;

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
    msg.setTimeStamp(0.485683489337);
    msg.setSource(49774U);
    msg.setSourceEntity(97U);
    msg.setDestination(25498U);
    msg.setDestinationEntity(188U);
    msg.validity = 69U;
    msg.x = 0.502125322911;
    msg.y = 0.0220887509383;
    msg.z = 0.30652213867;

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
    msg.setTimeStamp(0.136466682105);
    msg.setSource(49078U);
    msg.setSourceEntity(238U);
    msg.setDestination(17434U);
    msg.setDestinationEntity(73U);
    msg.time = 0.649747676115;
    msg.x = 0.821852597753;
    msg.y = 0.462269050005;
    msg.z = 0.492969333417;

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
    msg.setTimeStamp(0.302015452171);
    msg.setSource(5458U);
    msg.setSourceEntity(93U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(227U);
    msg.time = 0.275832988465;
    msg.x = 0.037046884152;
    msg.y = 0.647899047324;
    msg.z = 0.460337819362;

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
    msg.setTimeStamp(0.426283517832);
    msg.setSource(17701U);
    msg.setSourceEntity(181U);
    msg.setDestination(17198U);
    msg.setDestinationEntity(48U);
    msg.time = 0.556113417047;
    msg.x = 0.718293525149;
    msg.y = 0.355311078299;
    msg.z = 0.479562750097;

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
    msg.setTimeStamp(0.584177001188);
    msg.setSource(6947U);
    msg.setSourceEntity(244U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(21U);
    msg.validity = 95U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.832618202101;
    tmp_msg_0.y = 0.587445741533;
    tmp_msg_0.z = 0.93644622969;
    tmp_msg_0.phi = 0.980885932185;
    tmp_msg_0.theta = 0.406052227326;
    tmp_msg_0.psi = 0.241531626077;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0741488771664;
    tmp_msg_1.beam_height = 0.534906113472;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.145492560565;

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
    msg.setTimeStamp(0.240529522123);
    msg.setSource(2299U);
    msg.setSourceEntity(151U);
    msg.setDestination(60770U);
    msg.setDestinationEntity(59U);
    msg.validity = 22U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.373509476593;
    tmp_msg_0.y = 0.881752193628;
    tmp_msg_0.z = 0.856632197882;
    tmp_msg_0.phi = 0.228945521853;
    tmp_msg_0.theta = 0.978013398984;
    tmp_msg_0.psi = 0.54607952932;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.24507203679;

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
    msg.setTimeStamp(0.749521420634);
    msg.setSource(19704U);
    msg.setSourceEntity(240U);
    msg.setDestination(57474U);
    msg.setDestinationEntity(99U);
    msg.validity = 125U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.202624019905;
    tmp_msg_0.beam_height = 0.0573272841714;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.538038555043;

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
    msg.setTimeStamp(0.940982101552);
    msg.setSource(61939U);
    msg.setSourceEntity(223U);
    msg.setDestination(27934U);
    msg.setDestinationEntity(82U);
    msg.value = 0.258879993529;

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
    msg.setTimeStamp(0.801536255509);
    msg.setSource(33402U);
    msg.setSourceEntity(171U);
    msg.setDestination(57776U);
    msg.setDestinationEntity(129U);
    msg.value = 0.556741317235;

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
    msg.setTimeStamp(0.91922466997);
    msg.setSource(64168U);
    msg.setSourceEntity(68U);
    msg.setDestination(49590U);
    msg.setDestinationEntity(108U);
    msg.value = 0.668879674671;

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
    msg.setTimeStamp(0.370639726706);
    msg.setSource(54927U);
    msg.setSourceEntity(238U);
    msg.setDestination(39006U);
    msg.setDestinationEntity(101U);
    msg.value = 0.325562635682;

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
    msg.setTimeStamp(0.432784390827);
    msg.setSource(6850U);
    msg.setSourceEntity(163U);
    msg.setDestination(54728U);
    msg.setDestinationEntity(14U);
    msg.value = 0.769674728119;

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
    msg.setTimeStamp(0.468111589455);
    msg.setSource(55687U);
    msg.setSourceEntity(85U);
    msg.setDestination(36367U);
    msg.setDestinationEntity(79U);
    msg.value = 0.172030961394;

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
    msg.setTimeStamp(0.305159391332);
    msg.setSource(39246U);
    msg.setSourceEntity(140U);
    msg.setDestination(7247U);
    msg.setDestinationEntity(108U);
    msg.value = 0.770512655207;

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
    msg.setTimeStamp(0.816359530602);
    msg.setSource(12439U);
    msg.setSourceEntity(22U);
    msg.setDestination(56118U);
    msg.setDestinationEntity(85U);
    msg.value = 0.210784541292;

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
    msg.setTimeStamp(0.244219437368);
    msg.setSource(2045U);
    msg.setSourceEntity(139U);
    msg.setDestination(28377U);
    msg.setDestinationEntity(69U);
    msg.value = 0.918000210746;

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
    msg.setTimeStamp(0.530548393552);
    msg.setSource(50408U);
    msg.setSourceEntity(184U);
    msg.setDestination(10142U);
    msg.setDestinationEntity(47U);
    msg.value = 0.926626079032;

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
    msg.setTimeStamp(0.345613631693);
    msg.setSource(37296U);
    msg.setSourceEntity(108U);
    msg.setDestination(35812U);
    msg.setDestinationEntity(174U);
    msg.value = 0.783351952973;

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
    msg.setTimeStamp(0.572707600658);
    msg.setSource(30666U);
    msg.setSourceEntity(32U);
    msg.setDestination(21493U);
    msg.setDestinationEntity(85U);
    msg.value = 0.0845851730965;

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
    msg.setTimeStamp(0.774935060019);
    msg.setSource(41579U);
    msg.setSourceEntity(95U);
    msg.setDestination(19063U);
    msg.setDestinationEntity(41U);
    msg.value = 0.0576452713438;

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
    msg.setTimeStamp(0.634367513991);
    msg.setSource(27178U);
    msg.setSourceEntity(156U);
    msg.setDestination(23503U);
    msg.setDestinationEntity(202U);
    msg.value = 0.789501779076;

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
    msg.setTimeStamp(0.569757883028);
    msg.setSource(7700U);
    msg.setSourceEntity(97U);
    msg.setDestination(40485U);
    msg.setDestinationEntity(162U);
    msg.value = 0.20499437038;

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
    msg.setTimeStamp(0.410832446838);
    msg.setSource(58581U);
    msg.setSourceEntity(251U);
    msg.setDestination(36001U);
    msg.setDestinationEntity(49U);
    msg.value = 0.622365768464;

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
    msg.setTimeStamp(0.189135815093);
    msg.setSource(43634U);
    msg.setSourceEntity(102U);
    msg.setDestination(54190U);
    msg.setDestinationEntity(108U);
    msg.value = 0.699371367495;

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
    msg.setTimeStamp(0.224680667097);
    msg.setSource(51217U);
    msg.setSourceEntity(143U);
    msg.setDestination(37554U);
    msg.setDestinationEntity(74U);
    msg.value = 0.384249333518;

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
    msg.setTimeStamp(0.752982210055);
    msg.setSource(6627U);
    msg.setSourceEntity(59U);
    msg.setDestination(26748U);
    msg.setDestinationEntity(70U);
    msg.value = 0.10090336335;

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
    msg.setTimeStamp(0.559726390146);
    msg.setSource(6862U);
    msg.setSourceEntity(249U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(73U);
    msg.value = 0.457222554403;

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
    msg.setTimeStamp(0.231978778961);
    msg.setSource(62938U);
    msg.setSourceEntity(169U);
    msg.setDestination(4069U);
    msg.setDestinationEntity(245U);
    msg.value = 0.953132291068;

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
    msg.setTimeStamp(0.165718704855);
    msg.setSource(42962U);
    msg.setSourceEntity(145U);
    msg.setDestination(50349U);
    msg.setDestinationEntity(41U);
    msg.value = 0.167455551863;

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
    msg.setTimeStamp(0.761368590772);
    msg.setSource(30325U);
    msg.setSourceEntity(214U);
    msg.setDestination(44588U);
    msg.setDestinationEntity(9U);
    msg.value = 0.18915680805;

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
    msg.setTimeStamp(0.248180957643);
    msg.setSource(46043U);
    msg.setSourceEntity(254U);
    msg.setDestination(38772U);
    msg.setDestinationEntity(92U);
    msg.value = 0.547201663701;

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
    msg.setTimeStamp(0.33572830397);
    msg.setSource(22604U);
    msg.setSourceEntity(100U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(106U);
    msg.direction = 0.37183194045;
    msg.speed = 0.045958423663;

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
    msg.setTimeStamp(0.100929005047);
    msg.setSource(26980U);
    msg.setSourceEntity(93U);
    msg.setDestination(28045U);
    msg.setDestinationEntity(27U);
    msg.direction = 0.0983429245175;
    msg.speed = 0.273126193122;

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
    msg.setTimeStamp(0.954189364266);
    msg.setSource(6295U);
    msg.setSourceEntity(32U);
    msg.setDestination(25963U);
    msg.setDestinationEntity(143U);
    msg.direction = 0.914929818043;
    msg.speed = 0.125448061502;

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
    msg.setTimeStamp(0.441372731127);
    msg.setSource(6569U);
    msg.setSourceEntity(100U);
    msg.setDestination(29216U);
    msg.setDestinationEntity(160U);
    msg.value = 0.649808875842;

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
    msg.setTimeStamp(0.716652040109);
    msg.setSource(65488U);
    msg.setSourceEntity(210U);
    msg.setDestination(186U);
    msg.setDestinationEntity(157U);
    msg.value = 0.31403854999;

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
    msg.setTimeStamp(0.620206263482);
    msg.setSource(21830U);
    msg.setSourceEntity(55U);
    msg.setDestination(32376U);
    msg.setDestinationEntity(64U);
    msg.value = 0.453539435078;

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
    msg.setTimeStamp(0.825618920349);
    msg.setSource(60266U);
    msg.setSourceEntity(233U);
    msg.setDestination(8171U);
    msg.setDestinationEntity(9U);
    msg.value.assign("TFCBZWKYVOMYNXDWWEUFFXCKLKLWLJSIXHUHMKHPCFROSNSVGEGGOQZTXITZIIGJCQWBAXXZZBJIDNYELUSVYJISKSUVHVNEPTGQANCZAFEHCEVXADEPDAUUMDHROPYACJPYDQFERBFKWXLTQTUIUUZYJOPBLTDDPERNTOZGFDHAPSANRLPZQBWMJGTKOBPWTRI");

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
    msg.setTimeStamp(0.450190749402);
    msg.setSource(38348U);
    msg.setSourceEntity(24U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(52U);
    msg.value.assign("HQXRFYDVLQWCEQJRMOMYKSAPDJRASMSCQLWZEWYOTXCXFMBMCZZRAYZVEBMDGOPNHUPGUQUVGIDJYJWYDRONKYLNGEYUISFBPBJRNJELPLMDDJJVFRXSKTVDKWZERIWJOEAAKVTHAEIKZENXBI");

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
    msg.setTimeStamp(0.402072019333);
    msg.setSource(38942U);
    msg.setSourceEntity(34U);
    msg.setDestination(1539U);
    msg.setDestinationEntity(222U);
    msg.value.assign("YHZPEXQLGTYDXFRIHMEVEOMJDMIUGDDWCLHHJTZPVY");

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
    msg.setTimeStamp(0.547076006544);
    msg.setSource(37372U);
    msg.setSourceEntity(147U);
    msg.setDestination(64016U);
    msg.setDestinationEntity(131U);
    const char tmp_msg_0[] = {108, 126, -18, 70, 77, -109, 97, -108, 73, 52, -52, 78, -27, 81, 18, -103, -18, 30, -111, 50, 71, -70, 47, 101, -114, 94, 126, -28, -119, -51, -66, 98, -74, -62, 41, 42, -93, -89, -11, -44, 23, 117, 92, 84, -2, 124, 16, -41, 95, 104, 121, 53, 0, 87, 33, -27, 100, 14, -84, 66, 20, -6, 101, 79, -87, -33, -41, 52, -104, 85, 35, -32, 96, 102, 39, -102, 46, -78, 64, 89, 106, 102, 27, 66, -81, 39, -4, 60, -64, 104, 86, 84, -83, 53, 120, -32, -37, -90, 42, 53, 42, 89, -101, -50, 12, 26, 49, -128, 125, 5, 123, -72, 84, 83, -34, 87, 110, 107, 124, 99, 77, -60, -53, -120, -10, 124, -82, -1, -75, 25, -69, -4, 74, 108, 50, 21, 104, 34, 119, 63, -8, 10, 63, 101, -48, 81, -15, -89, -23, -108, 66, 39, -72, -94, 100, -126, -34, 123, -12, -7, -92, 33, -48, -117, 99, 29, 15, 64, -88, -117, 11, -100, -45, 49, -39, -29, -128, 32, 31, -90, 8, -125, -109, -22, 104, 92, -26, -119, 67, 3, 8, -107, -105, -19, -31, -99, 70, -32, 43, -84, 84, 117, -63, -125, 71, 27, -98, -12, 79, -59, -127, 102, 76, -50, -24, -123, -125, -94, 59, -124, -89, -83, 112, -56, 10, -47, -70, -68, -41, 14, -94, 126, 78, 108, -70, 10, 116, 61, 60, -83, -112, 123, 110, -105, -124, -3, 28, 112, -4, 25};
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
    msg.setTimeStamp(0.868418144318);
    msg.setSource(9526U);
    msg.setSourceEntity(114U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(62U);
    const char tmp_msg_0[] = {-105, -38, 53, -37, -70, 75, 113, -43, 19, 24, -71, 23, 122, 3, 6, -75, -107, -19, -11, -51, -37, -56, -88, 95, -30, -122, 112, -87, 5, -84, -14, -20, 39, 49, -81, 73, -69, -119, 27, 110, 38, 97, 4, 78, -71, 29, -92, 48, -93, 119, -91, -126, 24, -99, -65, 11, 117, -11, 110, 83, 92, -25, -29, 51, -17, -104, -48, 3, -17, -37, 117, -14, 6, 5, -106, 76, 123, -78, 45, -6, -26, -110, -2, 107, -28, -42, 45, -96, 104, -9, -102, 12, -41, -11, -117, -59, -9, -54, -119, -113, 64, 100, 118, -80, 50, 34, -9, -79, -46, 117, -42, 16, -104, 113, 7, 116, 5, 106, -115, 79, 12, -97, 0, 111, -17, 35, -77, 104, 100, -16, 83, -117, -40, -99, 109, -118, 56, 4, 59, -68, 58, 15, 111, -117, 93, 75, 46, -100, -91, 51, 104, -13, 21, -70, -128, -97, -67, -86, 35, -52, 86, -64, 24};
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
    msg.setTimeStamp(0.743148473794);
    msg.setSource(64075U);
    msg.setSourceEntity(89U);
    msg.setDestination(20145U);
    msg.setDestinationEntity(26U);
    const char tmp_msg_0[] = {77, 101, -72, -108, -99, -61, -26, -16, -112, -73, 31, -102, 74, -29, -38, 121, 118, -88, 29, 71, -28, -83, -90, -108, -105, 43, -42, -102, 118, -83, 99, 18, -17, 59, -82, 101, 126, 21, -65, 29, -34, -95, -122, 57, 37, 118, 115, -5, -36, 23, -23, 120, 64, 1, -46, 62, 76, 19, 88, -73, 100, -20, 89, 110, 84, 82, 80, 83, -61, -65, 81, 28, -64, -59, 16, -112, 39, 103, 99, 98, 115, -103, -108, -112, -81, -20, -86, -29, -13, -114, -100, 96, 29, -25, 88, -102, -63, -76, -34, 118, 59, 94, 3, 28, 90, 5, -45, -115, 99, -96, -41, 79, 11, -34, -12, -111, -10, -85, 104, -22, -57, 40, -12, 65, -117, -20, -18, -42, 30, -34, 38, -116, -38, 115, -119, 21, -128, 56, -77, -14, -72, -71, -7, -128, 62, -57, 105, 55, -32, 51, -102, 13, -52, 60, -62, 65, -6, 78, -75, -60, -111, 118, 125, 71, -54, -23, 34, -18, -17, 88, -77, -48, 1, 98, 14, 114, -36, 96, 9, 86, 112, 105, 46, -103, 24, 40, 101, 6, -65, 20, 52, 57, 57, -75, 54, -66, -59, -75, -105, 115, -28, 5, 103, 82, 48, 114, -46, -24, 84, -89, -44, -46, 111, 30, -41, -42, -42, -109, 69, -34, -45, 66, -61, 99, -88, 70, -63, -60, 50, 15, 39, 95, -120, 18, -39, 8, 16, -43, -104, 109, -52, 96, -125, 31, 35};
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
    msg.setTimeStamp(0.0185986917787);
    msg.setSource(8512U);
    msg.setSourceEntity(191U);
    msg.setDestination(27671U);
    msg.setDestinationEntity(44U);
    msg.frequency = 3671377184U;
    msg.min_range = 46299U;
    msg.max_range = 42285U;

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
    msg.setTimeStamp(0.522687671535);
    msg.setSource(4561U);
    msg.setSourceEntity(37U);
    msg.setDestination(57093U);
    msg.setDestinationEntity(233U);
    msg.frequency = 480436784U;
    msg.min_range = 64386U;
    msg.max_range = 46056U;

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
    msg.setTimeStamp(0.986037493157);
    msg.setSource(42814U);
    msg.setSourceEntity(119U);
    msg.setDestination(20569U);
    msg.setDestinationEntity(169U);
    msg.frequency = 415559866U;
    msg.min_range = 25234U;
    msg.max_range = 14113U;

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
    msg.setTimeStamp(0.109610827666);
    msg.setSource(50381U);
    msg.setSourceEntity(162U);
    msg.setDestination(12358U);
    msg.setDestinationEntity(134U);
    msg.type = 55U;
    msg.frequency = 3185752197U;
    msg.min_range = 48972U;
    msg.max_range = 12799U;
    msg.bits_per_point = 40U;
    msg.scale_factor = 0.965164319801;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.874088977514;
    tmp_msg_0.beam_height = 0.0212342560851;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {90, 109, -115, 24, 29, -48, 50, 20, -60, -96, 26, 59, 120, 115, -68, 80, -77, 29, -93, 10, -71, 67, 90, 22, -108, -113, -25, 66, 40, 123, -46, 50, -51, -98, 67, -48, -32, 62, 93, -127, 118, -34, -105, 1, -28, -6, -87, -63, 13, 34, -62, -81, 66, 98, 63, 56, 91, -110, -52, 77, -88, -22, 91, 98, 50, -50, -80, 11, -101, 9, 57, -105};
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
    msg.setTimeStamp(0.251329802988);
    msg.setSource(24574U);
    msg.setSourceEntity(59U);
    msg.setDestination(65509U);
    msg.setDestinationEntity(184U);
    msg.type = 67U;
    msg.frequency = 4110795647U;
    msg.min_range = 55068U;
    msg.max_range = 20386U;
    msg.bits_per_point = 44U;
    msg.scale_factor = 0.986574743573;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.881927748016;
    tmp_msg_0.beam_height = 0.247935558282;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {11, 36, -118, -5, -73, 45, -33, 124, -13, 48, -81, 106, -107, 32, -19, -3, -65, -21, 7, 87, 41, 64, 125, -65, -118, -30, -104, 66, 21, 49, -6, -92, -1, -42, 101, -10, -100, 0, 113, -94, -62, 68, -35, -12, 25, -60, 18, -110, -92, -14, -70, -46, 87, 100, 62, -14, 124, 123, -92, 44, -62, 38, 3, 34, -128, -12, 76, 73, -62, 56, -81, -43, 69, -115, 107, 100, -33, -71, 12, 109, 22, -21, -93, -79, -98, -76, 104, -42, 30, -12, 31, 12, 62, 66, -96, 41, 78, 18, 65, -11, -42, -86, 82, 1, -30, 59, -4, 97, -28, -82, -13, 53, -83, 115, 107, -53, -115, 33, -123, -113, -8, 100, 63, 89, 117, 29, 62, -105, -9, -24, 66, 118, 3, -108, 56, -35, -100, 43, -20, 107, -90, -46, 47, 86, 98, 108, 89, 63, 20, -85, -52, 28, 28, -36, 118, -117, -59, -94, -105, 25, 122, 84, 52, -96, 28, -105, 89, 9, -24, 35, -15, 65, -111, -12, -71, 64, 123, 107, -117, -35, 104, 19, -28, -46, -5, 26, -68, 87, -108, -127, -72, -44, -51, 125, -118, -13, -49, 33, -31, -26, -69, -69, -41, -11, -109, 66, 26, 116, 79, -71, 118, -12, 121, 12, -53, -2, -84, -44, 25, -119, -25, -48, -77, 1, -31, 35, 118};
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
    msg.setTimeStamp(0.31878580054);
    msg.setSource(19660U);
    msg.setSourceEntity(110U);
    msg.setDestination(33924U);
    msg.setDestinationEntity(215U);
    msg.type = 141U;
    msg.frequency = 660675224U;
    msg.min_range = 11001U;
    msg.max_range = 50746U;
    msg.bits_per_point = 80U;
    msg.scale_factor = 0.00211992343044;
    const char tmp_msg_0[] = {113, -15, 84, 42, -54, -56, 35, -61, -89, -88, 76, 10, -46, 56, 76, 51, 6, 31, 126, 2, 29, 34, 57, 83, 58, -22, -6, 0, -41, 37, 9, -107, 73, 22, -43, -82, 61, 59, -94, 31, 75, -16, -11, 43, -11, -63, 111, -22, -95, -20, -81, 17, 45, -106, -1, -8, -90, 79, -37, -111, -66, 31, 85, 2, 11, 110, -36, 61, -44, -63, -118, -87, -85, -41, 90, -104, -75, 86, 102, 81, -56, -61, 98, 126, 72, -43, -41, 66, 118, -124, -37, -42, -83, -92, 3, 92, 6, 34, 89, 92, -127, 123, 95, 96, 61, 37, -120, -20, 29, 68, -12, 59, 63, -74, 47, -7, 83, -34, -74, -65, -10, -40, 47, 34, 50, 92, 105, 85, -83, 3, 33, 59, 7, 22, 95, 76, 120, -63, -75, 45, 56, -100, -64, 51, 47, -37, -58, -69, -12, 72, 6, -108, 23, -62, 79, -87, 77, 77, 106, 37, 50, 57, 82, 74, -92, 82, 47, -9, -19, 101, 38, 30, 24, -114, 99, 108, -62, -25, -98, -34, 112, 63, 63, -27, -44, -80, 13, 108, 115, -89, -86, 69, 66, -32, 5, -122, -92, 51, 19, 21, -75, 18, -119, 43};
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
    msg.setTimeStamp(0.00351833958522);
    msg.setSource(8238U);
    msg.setSourceEntity(109U);
    msg.setDestination(60938U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.131197017282);
    msg.setSource(62888U);
    msg.setSourceEntity(194U);
    msg.setDestination(32424U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.144741756273);
    msg.setSource(62318U);
    msg.setSourceEntity(98U);
    msg.setDestination(11272U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.48701361163);
    msg.setSource(63637U);
    msg.setSourceEntity(191U);
    msg.setDestination(39196U);
    msg.setDestinationEntity(149U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.379154746394);
    msg.setSource(32786U);
    msg.setSourceEntity(2U);
    msg.setDestination(46875U);
    msg.setDestinationEntity(37U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.340023947022);
    msg.setSource(26891U);
    msg.setSourceEntity(63U);
    msg.setDestination(10152U);
    msg.setDestinationEntity(67U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.383952936933);
    msg.setSource(14362U);
    msg.setSourceEntity(0U);
    msg.setDestination(44085U);
    msg.setDestinationEntity(212U);
    msg.value = 0.416317199313;
    msg.confidence = 0.443188724695;
    msg.opmodes.assign("AOAHYBZZREEKCKZFUJTQHUTIAEFDFNDWPJXFBWMYIXSMPFOBWDRXKNILEGGVQDHLUVTKXNHDHQQWNZCKEJU");

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
    msg.setTimeStamp(0.22645791675);
    msg.setSource(41479U);
    msg.setSourceEntity(225U);
    msg.setDestination(49218U);
    msg.setDestinationEntity(79U);
    msg.value = 0.642509761184;
    msg.confidence = 0.0746350082038;
    msg.opmodes.assign("JGVEHXXMFAAHRMWKZTXPYAGTFVMHFZJUUWOBJCVTUDDILFBQAWKRNOUYKTLZQCIIITMWEALNNBDJWPQHBBXHHILBNDKGTAPITUOIXAZSCWMCLQGASHYYOYCSNRVOLVZSFYKQEQRXBIKYPKMOGQEQCSCODHRBIWYGUQRRDLGXUJNFELMMVJACGWCMRXEVBSGYWCUXZDNLDV");

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
    msg.setTimeStamp(0.817980262735);
    msg.setSource(23732U);
    msg.setSourceEntity(146U);
    msg.setDestination(44296U);
    msg.setDestinationEntity(86U);
    msg.value = 0.72738033561;
    msg.confidence = 0.114690053667;
    msg.opmodes.assign("FJWKOCRTKDLCNBALHPYURGPAQWWSXLGOXBCUNDICEEZNWYDATBPVVSHEBFLOHAUWRNUFQMISJIUWLSCZFNWONAMHIVISFUJMOGSNSGTGWWYYQJHZIKQNZB");

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
    msg.setTimeStamp(0.4359671828);
    msg.setSource(47417U);
    msg.setSourceEntity(214U);
    msg.setDestination(46999U);
    msg.setDestinationEntity(84U);
    msg.itow = 3317922495U;
    msg.lat = 0.58277360769;
    msg.lon = 0.818288180636;
    msg.height_ell = 0.562605429298;
    msg.height_sea = 0.722385602157;
    msg.hacc = 0.00987434889271;
    msg.vacc = 0.175634279255;
    msg.vel_n = 0.421852690513;
    msg.vel_e = 0.48804085422;
    msg.vel_d = 0.0101812898846;
    msg.speed = 0.474194432727;
    msg.gspeed = 0.470993261943;
    msg.heading = 0.890840045285;
    msg.sacc = 0.140027385162;
    msg.cacc = 0.802783051829;

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
    msg.setTimeStamp(0.224023544359);
    msg.setSource(13074U);
    msg.setSourceEntity(244U);
    msg.setDestination(43066U);
    msg.setDestinationEntity(74U);
    msg.itow = 2562257972U;
    msg.lat = 0.0542648394365;
    msg.lon = 0.824071931352;
    msg.height_ell = 0.466650914432;
    msg.height_sea = 0.671516404126;
    msg.hacc = 0.909733671038;
    msg.vacc = 0.866246028262;
    msg.vel_n = 0.1129780215;
    msg.vel_e = 0.678929350161;
    msg.vel_d = 0.560359397344;
    msg.speed = 0.7129024507;
    msg.gspeed = 0.222324291508;
    msg.heading = 0.864181744622;
    msg.sacc = 0.640914041671;
    msg.cacc = 0.686775559371;

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
    msg.setTimeStamp(0.133168404365);
    msg.setSource(47479U);
    msg.setSourceEntity(80U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(124U);
    msg.itow = 2971549671U;
    msg.lat = 0.0302717539612;
    msg.lon = 0.159023795234;
    msg.height_ell = 0.730949198621;
    msg.height_sea = 0.141579577734;
    msg.hacc = 0.954833686185;
    msg.vacc = 0.343468260628;
    msg.vel_n = 0.779059390959;
    msg.vel_e = 0.220234636994;
    msg.vel_d = 0.0321992052816;
    msg.speed = 0.0786939728759;
    msg.gspeed = 0.350081191151;
    msg.heading = 0.0883014825576;
    msg.sacc = 0.964653760806;
    msg.cacc = 0.245610738715;

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
    msg.setTimeStamp(0.0643076202116);
    msg.setSource(4481U);
    msg.setSourceEntity(146U);
    msg.setDestination(18952U);
    msg.setDestinationEntity(225U);
    msg.id = 153U;
    msg.value = 0.248977685859;

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
    msg.setTimeStamp(0.5330140548);
    msg.setSource(48224U);
    msg.setSourceEntity(98U);
    msg.setDestination(17924U);
    msg.setDestinationEntity(248U);
    msg.id = 157U;
    msg.value = 0.859207164646;

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
    msg.setTimeStamp(0.700765570315);
    msg.setSource(42553U);
    msg.setSourceEntity(237U);
    msg.setDestination(23556U);
    msg.setDestinationEntity(176U);
    msg.id = 224U;
    msg.value = 0.100840029061;

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
    msg.setTimeStamp(0.207047151639);
    msg.setSource(63274U);
    msg.setSourceEntity(68U);
    msg.setDestination(26606U);
    msg.setDestinationEntity(215U);
    msg.x = 0.750479901855;
    msg.y = 0.0599695504474;
    msg.z = 0.0520766904624;
    msg.phi = 0.210974023855;
    msg.theta = 0.177663516893;
    msg.psi = 0.823466804984;

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
    msg.setTimeStamp(0.985694533033);
    msg.setSource(7732U);
    msg.setSourceEntity(68U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(107U);
    msg.x = 0.0370845848267;
    msg.y = 0.545464105055;
    msg.z = 0.487979271956;
    msg.phi = 0.473712285147;
    msg.theta = 0.831760023007;
    msg.psi = 0.210799647691;

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
    msg.setTimeStamp(0.15426160472);
    msg.setSource(42483U);
    msg.setSourceEntity(164U);
    msg.setDestination(14166U);
    msg.setDestinationEntity(242U);
    msg.x = 0.144667565802;
    msg.y = 0.0605864677405;
    msg.z = 0.874957213944;
    msg.phi = 0.0591456361301;
    msg.theta = 0.0993334289989;
    msg.psi = 0.882482738124;

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
    msg.setTimeStamp(0.801225250411);
    msg.setSource(26844U);
    msg.setSourceEntity(199U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(231U);
    msg.beam_width = 0.102928142528;
    msg.beam_height = 0.87236449137;

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
    msg.setTimeStamp(0.322990726202);
    msg.setSource(11301U);
    msg.setSourceEntity(185U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(197U);
    msg.beam_width = 0.901443121685;
    msg.beam_height = 0.0819871575935;

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
    msg.setTimeStamp(0.709075583369);
    msg.setSource(64729U);
    msg.setSourceEntity(42U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.701952372421;
    msg.beam_height = 0.635844029999;

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
    msg.setTimeStamp(0.434210916238);
    msg.setSource(63963U);
    msg.setSourceEntity(176U);
    msg.setDestination(40081U);
    msg.setDestinationEntity(102U);
    msg.id = 142U;
    msg.zoom = 205U;
    msg.action = 51U;

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
    msg.setTimeStamp(0.339322061343);
    msg.setSource(9490U);
    msg.setSourceEntity(223U);
    msg.setDestination(19504U);
    msg.setDestinationEntity(72U);
    msg.id = 52U;
    msg.zoom = 36U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.02713356011);
    msg.setSource(45534U);
    msg.setSourceEntity(225U);
    msg.setDestination(16796U);
    msg.setDestinationEntity(92U);
    msg.id = 68U;
    msg.zoom = 193U;
    msg.action = 130U;

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
    msg.setTimeStamp(0.658536287941);
    msg.setSource(58220U);
    msg.setSourceEntity(134U);
    msg.setDestination(29602U);
    msg.setDestinationEntity(30U);
    msg.id = 89U;
    msg.value = 0.213238538474;

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
    msg.setTimeStamp(0.295646978338);
    msg.setSource(12207U);
    msg.setSourceEntity(172U);
    msg.setDestination(49316U);
    msg.setDestinationEntity(141U);
    msg.id = 204U;
    msg.value = 0.926767967904;

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
    msg.setTimeStamp(0.38974519981);
    msg.setSource(61181U);
    msg.setSourceEntity(29U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(209U);
    msg.id = 170U;
    msg.value = 0.699431585503;

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
    msg.setTimeStamp(0.0776253685759);
    msg.setSource(40987U);
    msg.setSourceEntity(138U);
    msg.setDestination(62431U);
    msg.setDestinationEntity(59U);
    msg.id = 229U;
    msg.value = 0.0918794538621;

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
    msg.setTimeStamp(0.421859904441);
    msg.setSource(28230U);
    msg.setSourceEntity(119U);
    msg.setDestination(19178U);
    msg.setDestinationEntity(165U);
    msg.id = 96U;
    msg.value = 0.707034670578;

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
    msg.setTimeStamp(0.144704714763);
    msg.setSource(30893U);
    msg.setSourceEntity(201U);
    msg.setDestination(58383U);
    msg.setDestinationEntity(245U);
    msg.id = 215U;
    msg.value = 0.377969784042;

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
    msg.setTimeStamp(0.624868148524);
    msg.setSource(3302U);
    msg.setSourceEntity(5U);
    msg.setDestination(22598U);
    msg.setDestinationEntity(109U);
    msg.id = 141U;
    msg.angle = 0.269206851506;

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
    msg.setTimeStamp(0.439688319174);
    msg.setSource(8881U);
    msg.setSourceEntity(226U);
    msg.setDestination(45259U);
    msg.setDestinationEntity(103U);
    msg.id = 145U;
    msg.angle = 0.778889707508;

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
    msg.setTimeStamp(0.147187650935);
    msg.setSource(62694U);
    msg.setSourceEntity(172U);
    msg.setDestination(55265U);
    msg.setDestinationEntity(60U);
    msg.id = 7U;
    msg.angle = 0.00616352125603;

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
    msg.setTimeStamp(0.451043763875);
    msg.setSource(52484U);
    msg.setSourceEntity(134U);
    msg.setDestination(39093U);
    msg.setDestinationEntity(29U);
    msg.op = 200U;
    msg.actions.assign("KBHXVKYNSCSDIBJNHAKWYZKSGWMBJKCLTLNOJAECPLMXMXRGSOZIVGHOPAJFKLZBENTOBFYCYWHGLWHXTIVAQSNNQPYJZQAUCEMXNYXRHMLQDMKTVPJZBURTIBIWIEREDTFALRGLCVUAITVUSGDFUNFQWQJ");

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
    msg.setTimeStamp(0.727907151335);
    msg.setSource(30923U);
    msg.setSourceEntity(22U);
    msg.setDestination(63021U);
    msg.setDestinationEntity(68U);
    msg.op = 166U;
    msg.actions.assign("IDJQMJFRVCURZMNLIECYTCKRYLAMOQUWJNKGXTWZLKZBGVGHSPDNHAIUQFNKNHDPNAEBUGSQEXJPZDATVMUELEALYMSYNHKHFWXJOSOV");

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
    msg.setTimeStamp(0.921165796874);
    msg.setSource(12417U);
    msg.setSourceEntity(183U);
    msg.setDestination(22188U);
    msg.setDestinationEntity(114U);
    msg.op = 54U;
    msg.actions.assign("LGFPQGZOTKQYTFLPCUJHHLCABPLPJZGMBPFVDYNVSGDIBWTKASXE");

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
    msg.setTimeStamp(0.929628405478);
    msg.setSource(54092U);
    msg.setSourceEntity(136U);
    msg.setDestination(23739U);
    msg.setDestinationEntity(193U);
    msg.actions.assign("RJNZTYXYPWRMUZKKZZMWWWQLFXNLVOSVXRWPQENGYLRCQEDHRIJPKVKTXGEUMQLMAMQNMDRPTGZJGFCJJSPJHKWOBGCSGAOCUGHOITRAAQNHDOYRPEJYIOKTMIFCNMBUYFEYIULZKUGLSYUMXVGFDTHFFNAJXCAXHOYCJFBWSDDBSWSBNZLTETTXEKVZHFHJNUELEGRVPIDTZKKPAVSBSOZXORCUVAWAYLQIQQVIEPPFWBCDOCM");

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
    msg.setTimeStamp(0.619001833474);
    msg.setSource(54300U);
    msg.setSourceEntity(230U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(169U);
    msg.actions.assign("FDNMTRDKHHIVCROLCJTDOGKVVBXQVHZNGLSTPAPSGVZOYXKISOFVRHGXMBLSNCJYCPTOGIPWNGTSMAK");

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
    msg.setTimeStamp(0.0968033795643);
    msg.setSource(50749U);
    msg.setSourceEntity(176U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(80U);
    msg.actions.assign("PJGGAJRWAZAOIXSYYUEVTAXAIHHOMEDMKWGLRDEJFSFOVYMWLGIDUBUTXFICYPBOZEKFQEYKCCRZKDPUQMWAQCVQTZODVGWXPNUVNBUHJFPAFWBVVGZLITCMPJZLQFJDJTJSZKKGCEBLXYPSCDQARWTUKVUPPXSYQZDSQNNLMXNGNERRIKZHODXLGWIFMSMO");

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
    msg.setTimeStamp(0.676457856044);
    msg.setSource(37045U);
    msg.setSourceEntity(225U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(119U);
    msg.button = 97U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.389978035623);
    msg.setSource(52934U);
    msg.setSourceEntity(236U);
    msg.setDestination(33502U);
    msg.setDestinationEntity(201U);
    msg.button = 7U;
    msg.value = 35U;

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
    msg.setTimeStamp(0.266334750422);
    msg.setSource(15716U);
    msg.setSourceEntity(36U);
    msg.setDestination(11730U);
    msg.setDestinationEntity(202U);
    msg.button = 150U;
    msg.value = 170U;

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
    msg.setTimeStamp(0.369437311345);
    msg.setSource(54482U);
    msg.setSourceEntity(136U);
    msg.setDestination(44972U);
    msg.setDestinationEntity(123U);
    msg.op = 84U;
    msg.text.assign("GSFHPHFBOIAFMMIYELLCGTMXFORWKVSIIENLJLEUTQIGUECKPXOSYRWODIXNBSHAWHCICGEKNRQUKPITPWRQXVDDQJNXOVJDASDURVGTZLTCLVYWKPQRMHXFJWQWMBAE");

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
    msg.setTimeStamp(0.395460118534);
    msg.setSource(33287U);
    msg.setSourceEntity(27U);
    msg.setDestination(24150U);
    msg.setDestinationEntity(62U);
    msg.op = 36U;
    msg.text.assign("UGEIJXQRSYLDFQMPJZVEJKVIVHIRFOSDOHFWMZEHONMPTBHEWRDBGTKCMSQDXWZXRILWALPMTOUGYFCNONNATHTTQWMGOXKIJAVUYCQIQLBJUTQNXNPEHZYRUTDQURSSZZRKMWNVZJKJEWCSVOBFRNSXHAPCGEXRNBBXYWPYYDPPIFQIVNHAAVMBOYBZOLTPWVDL");

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
    msg.setTimeStamp(0.0332180706459);
    msg.setSource(19949U);
    msg.setSourceEntity(75U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(93U);
    msg.op = 226U;
    msg.text.assign("KQNSQSRXFZZKHWTNQCGKPXBNCIJQUAEHEWNWALKODOXDMRWTKDVLYNRMNWGUHCMFKIKIUNXESGFXCVFQPMRUKZPJZMANBHBLVCEUARHZLCEVQNYCIYMZJSUVBQZJHSYIWRGTUIMGEIDDZDFONDJTQOATWQGIJQSUGWBULETRPVWLRBFYYYIBHALLEWJTXPODXYFBTASPXHPKJVCCDSEFSVPPOCAVLJBEFOTOAFJZLHOGGX");

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
    msg.setTimeStamp(0.460223931898);
    msg.setSource(62791U);
    msg.setSourceEntity(44U);
    msg.setDestination(56517U);
    msg.setDestinationEntity(150U);
    msg.op = 58U;
    msg.time_remain = 0.406074209196;
    msg.sched_time = 0.274963282847;

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
    msg.setTimeStamp(0.66941420947);
    msg.setSource(25546U);
    msg.setSourceEntity(85U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(199U);
    msg.op = 34U;
    msg.time_remain = 0.747052566917;
    msg.sched_time = 0.799209685361;

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
    msg.setTimeStamp(0.205082003381);
    msg.setSource(45121U);
    msg.setSourceEntity(161U);
    msg.setDestination(23948U);
    msg.setDestinationEntity(69U);
    msg.op = 82U;
    msg.time_remain = 0.135826858484;
    msg.sched_time = 0.584148696262;

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
    msg.setTimeStamp(0.706755653336);
    msg.setSource(35745U);
    msg.setSourceEntity(25U);
    msg.setDestination(42501U);
    msg.setDestinationEntity(54U);
    msg.id = 70U;
    msg.op = 69U;
    msg.sched_time = 0.375033833539;

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
    msg.setTimeStamp(0.541260644961);
    msg.setSource(32030U);
    msg.setSourceEntity(14U);
    msg.setDestination(50560U);
    msg.setDestinationEntity(225U);
    msg.id = 204U;
    msg.op = 240U;
    msg.sched_time = 0.0586134748665;

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
    msg.setTimeStamp(0.919643506046);
    msg.setSource(8169U);
    msg.setSourceEntity(150U);
    msg.setDestination(36999U);
    msg.setDestinationEntity(117U);
    msg.id = 141U;
    msg.op = 121U;
    msg.sched_time = 0.968468682474;

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
    msg.setTimeStamp(0.315432166684);
    msg.setSource(17073U);
    msg.setSourceEntity(96U);
    msg.setDestination(28481U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.320611025293);
    msg.setSource(54158U);
    msg.setSourceEntity(230U);
    msg.setDestination(42598U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.564996662902);
    msg.setSource(62362U);
    msg.setSourceEntity(3U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.168456823914);
    msg.setSource(50864U);
    msg.setSourceEntity(140U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(216U);
    msg.id = 91U;
    msg.label.assign("FIGZGTQPQHJWDSNBBQZWLSCKJNAYMPEHVWMJMLIJUV");
    msg.state = 76U;

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
    msg.setTimeStamp(0.391483883072);
    msg.setSource(44787U);
    msg.setSourceEntity(178U);
    msg.setDestination(3180U);
    msg.setDestinationEntity(83U);
    msg.id = 248U;
    msg.label.assign("GENYARFGMJLEEPOHWVKRTZIFTDZWNGHOZV");
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
    msg.setTimeStamp(0.713877541211);
    msg.setSource(44861U);
    msg.setSourceEntity(129U);
    msg.setDestination(467U);
    msg.setDestinationEntity(195U);
    msg.id = 183U;
    msg.label.assign("BFIRDKOEQIAEWXZVGFXJDYTXWUYHWBSONDKNEGPQYDAJLVNLGZNBRWOUODJJVJBZFORMMSVHHGGXNXUICMTMPPMPPSQMTKN");
    msg.state = 119U;

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
    IMC::LedControl msg;
    msg.setTimeStamp(0.512926794166);
    msg.setSource(2831U);
    msg.setSourceEntity(74U);
    msg.setDestination(2487U);
    msg.setDestinationEntity(19U);
    msg.id = 159U;
    msg.op = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.207616049944);
    msg.setSource(13593U);
    msg.setSourceEntity(99U);
    msg.setDestination(30513U);
    msg.setDestinationEntity(216U);
    msg.id = 192U;
    msg.op = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.89925946491);
    msg.setSource(43755U);
    msg.setSourceEntity(185U);
    msg.setDestination(29534U);
    msg.setDestinationEntity(122U);
    msg.id = 121U;
    msg.op = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.648484374742);
    msg.setSource(44428U);
    msg.setSourceEntity(66U);
    msg.setDestination(64709U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.268672243997;
    msg.lon = 0.730030667638;
    msg.height = 0.881500285289;
    msg.x = 0.789179475614;
    msg.y = 0.278694264755;
    msg.z = 0.148147786466;
    msg.phi = 0.463738338942;
    msg.theta = 0.955061687182;
    msg.psi = 0.240444808808;
    msg.u = 0.485601125856;
    msg.v = 0.993534453449;
    msg.w = 0.943254343261;
    msg.vx = 0.627154087739;
    msg.vy = 0.223413586823;
    msg.vz = 0.687737126358;
    msg.p = 0.376250170355;
    msg.q = 0.614453690594;
    msg.r = 0.955046276516;
    msg.depth = 0.250289082625;
    msg.alt = 0.138515487554;

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
    msg.setTimeStamp(0.763399057083);
    msg.setSource(65496U);
    msg.setSourceEntity(220U);
    msg.setDestination(10585U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.469533666622;
    msg.lon = 0.303573371491;
    msg.height = 0.633916819641;
    msg.x = 0.506459636484;
    msg.y = 0.444647844197;
    msg.z = 0.46550125273;
    msg.phi = 0.23975020515;
    msg.theta = 0.772503644007;
    msg.psi = 0.838079532936;
    msg.u = 0.469620198957;
    msg.v = 0.801197847895;
    msg.w = 0.187239160193;
    msg.vx = 0.424686220326;
    msg.vy = 0.0861857200946;
    msg.vz = 0.597738336133;
    msg.p = 0.286888037829;
    msg.q = 0.392376901451;
    msg.r = 0.015681416554;
    msg.depth = 0.394844341281;
    msg.alt = 0.080084188066;

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
    msg.setTimeStamp(0.108753068652);
    msg.setSource(59857U);
    msg.setSourceEntity(151U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.0137877436808;
    msg.lon = 0.888199886702;
    msg.height = 0.595940561064;
    msg.x = 0.386556696358;
    msg.y = 0.933283385;
    msg.z = 0.955056419719;
    msg.phi = 0.348655449582;
    msg.theta = 0.967708835509;
    msg.psi = 0.390924415613;
    msg.u = 0.599269159104;
    msg.v = 0.76979180937;
    msg.w = 0.524128986078;
    msg.vx = 0.258734784653;
    msg.vy = 0.176676588565;
    msg.vz = 0.939708562884;
    msg.p = 0.93096757624;
    msg.q = 0.744472239886;
    msg.r = 0.00608797022044;
    msg.depth = 0.0511636215863;
    msg.alt = 0.247601254628;

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
    msg.setTimeStamp(0.0455894439796);
    msg.setSource(30235U);
    msg.setSourceEntity(85U);
    msg.setDestination(31703U);
    msg.setDestinationEntity(219U);
    msg.x = 0.915953112728;
    msg.y = 0.233745628587;
    msg.z = 0.594157716696;

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
    msg.setTimeStamp(0.193872618686);
    msg.setSource(11769U);
    msg.setSourceEntity(188U);
    msg.setDestination(47011U);
    msg.setDestinationEntity(119U);
    msg.x = 0.636797472812;
    msg.y = 0.217909816257;
    msg.z = 0.273405467285;

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
    msg.setTimeStamp(0.172435576378);
    msg.setSource(28181U);
    msg.setSourceEntity(21U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(172U);
    msg.x = 0.383899869199;
    msg.y = 0.83734364379;
    msg.z = 0.222669289444;

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
    msg.setTimeStamp(0.296947089625);
    msg.setSource(860U);
    msg.setSourceEntity(228U);
    msg.setDestination(12329U);
    msg.setDestinationEntity(163U);
    msg.value = 0.722314735281;

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
    msg.setTimeStamp(0.826680012343);
    msg.setSource(34861U);
    msg.setSourceEntity(93U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(149U);
    msg.value = 0.62097840518;

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
    msg.setTimeStamp(0.906078400498);
    msg.setSource(58576U);
    msg.setSourceEntity(141U);
    msg.setDestination(22119U);
    msg.setDestinationEntity(189U);
    msg.value = 0.341336590935;

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
    msg.setTimeStamp(0.247211672143);
    msg.setSource(24636U);
    msg.setSourceEntity(198U);
    msg.setDestination(28821U);
    msg.setDestinationEntity(148U);
    msg.value = 0.438907261765;

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
    msg.setTimeStamp(0.721154729559);
    msg.setSource(26637U);
    msg.setSourceEntity(219U);
    msg.setDestination(62693U);
    msg.setDestinationEntity(127U);
    msg.value = 0.289762571804;

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
    msg.setTimeStamp(0.228550603822);
    msg.setSource(8646U);
    msg.setSourceEntity(154U);
    msg.setDestination(22865U);
    msg.setDestinationEntity(188U);
    msg.value = 0.497532318784;

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
    msg.setTimeStamp(0.304253572556);
    msg.setSource(38927U);
    msg.setSourceEntity(115U);
    msg.setDestination(41324U);
    msg.setDestinationEntity(177U);
    msg.x = 0.691245258211;
    msg.y = 0.346361315599;
    msg.z = 0.8588988611;
    msg.phi = 0.693698377773;
    msg.theta = 0.763373690785;
    msg.psi = 0.576186585557;
    msg.p = 0.135984846918;
    msg.q = 0.471534167436;
    msg.r = 0.457704824061;
    msg.u = 0.606384655517;
    msg.v = 0.129618657503;
    msg.w = 0.797681324057;
    msg.bias_psi = 0.606347295188;
    msg.bias_r = 0.56825882779;

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
    msg.setTimeStamp(0.371289439633);
    msg.setSource(28460U);
    msg.setSourceEntity(148U);
    msg.setDestination(65457U);
    msg.setDestinationEntity(235U);
    msg.x = 0.747062269876;
    msg.y = 0.310359850573;
    msg.z = 0.361012527373;
    msg.phi = 0.161014481069;
    msg.theta = 0.429328022749;
    msg.psi = 0.264532773012;
    msg.p = 0.256675862039;
    msg.q = 0.925521843787;
    msg.r = 0.935120748934;
    msg.u = 0.883796128462;
    msg.v = 0.130878591024;
    msg.w = 0.836574205962;
    msg.bias_psi = 0.148618154182;
    msg.bias_r = 0.720965916992;

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
    msg.setTimeStamp(0.0444488645212);
    msg.setSource(45807U);
    msg.setSourceEntity(218U);
    msg.setDestination(53528U);
    msg.setDestinationEntity(12U);
    msg.x = 0.18300289357;
    msg.y = 0.279049461443;
    msg.z = 0.0781569960549;
    msg.phi = 0.0516064457657;
    msg.theta = 0.857121865737;
    msg.psi = 0.370393110706;
    msg.p = 0.887716640754;
    msg.q = 0.552999361221;
    msg.r = 0.387315888214;
    msg.u = 0.555752083345;
    msg.v = 0.928845648654;
    msg.w = 0.1831798796;
    msg.bias_psi = 0.059431596663;
    msg.bias_r = 0.311747797217;

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
    msg.setTimeStamp(0.817274232168);
    msg.setSource(17530U);
    msg.setSourceEntity(80U);
    msg.setDestination(57089U);
    msg.setDestinationEntity(115U);
    msg.bias_psi = 0.118752500238;
    msg.bias_r = 0.227886296684;
    msg.cog = 0.243233216525;
    msg.cyaw = 0.295014525303;
    msg.lbl_rej_level = 0.543402638355;
    msg.gps_rej_level = 0.814311236963;
    msg.custom_x = 0.411491819168;
    msg.custom_y = 0.294411909219;
    msg.custom_z = 0.831615646672;

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
    msg.setTimeStamp(0.96951447527);
    msg.setSource(11106U);
    msg.setSourceEntity(212U);
    msg.setDestination(61221U);
    msg.setDestinationEntity(92U);
    msg.bias_psi = 0.163859501641;
    msg.bias_r = 0.644382850294;
    msg.cog = 0.3869112421;
    msg.cyaw = 0.543188115675;
    msg.lbl_rej_level = 0.355407262945;
    msg.gps_rej_level = 0.142314874275;
    msg.custom_x = 0.898928933538;
    msg.custom_y = 0.708591896557;
    msg.custom_z = 0.318629849734;

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
    msg.setTimeStamp(0.843706670016);
    msg.setSource(58179U);
    msg.setSourceEntity(195U);
    msg.setDestination(13569U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.00410874469603;
    msg.bias_r = 0.405292411924;
    msg.cog = 0.971510898667;
    msg.cyaw = 0.669385326185;
    msg.lbl_rej_level = 0.00869147482054;
    msg.gps_rej_level = 0.536735837658;
    msg.custom_x = 0.207749794222;
    msg.custom_y = 0.588729819724;
    msg.custom_z = 0.091725602331;

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
    msg.setTimeStamp(0.744943372231);
    msg.setSource(51409U);
    msg.setSourceEntity(165U);
    msg.setDestination(26419U);
    msg.setDestinationEntity(174U);
    msg.utc_time = 0.87958369377;
    msg.reason = 83U;

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
    msg.setTimeStamp(0.809399233808);
    msg.setSource(35902U);
    msg.setSourceEntity(239U);
    msg.setDestination(56531U);
    msg.setDestinationEntity(217U);
    msg.utc_time = 0.548816738857;
    msg.reason = 161U;

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
    msg.setTimeStamp(0.988730483057);
    msg.setSource(35312U);
    msg.setSourceEntity(128U);
    msg.setDestination(5718U);
    msg.setDestinationEntity(237U);
    msg.utc_time = 0.77288837822;
    msg.reason = 111U;

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
    msg.setTimeStamp(0.883630040146);
    msg.setSource(63605U);
    msg.setSourceEntity(23U);
    msg.setDestination(31648U);
    msg.setDestinationEntity(174U);
    msg.id = 134U;
    msg.range = 0.939362297021;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.15530838675);
    msg.setSource(28361U);
    msg.setSourceEntity(152U);
    msg.setDestination(2262U);
    msg.setDestinationEntity(36U);
    msg.id = 109U;
    msg.range = 0.101136176013;
    msg.acceptance = 145U;

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
    msg.setTimeStamp(0.170645306798);
    msg.setSource(40414U);
    msg.setSourceEntity(243U);
    msg.setDestination(10080U);
    msg.setDestinationEntity(12U);
    msg.id = 229U;
    msg.range = 0.168159906536;
    msg.acceptance = 232U;

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
    msg.setTimeStamp(0.94360604741);
    msg.setSource(32143U);
    msg.setSourceEntity(208U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(212U);
    msg.type = 14U;
    msg.reason = 80U;
    msg.value = 0.966945510593;
    msg.timestep = 0.883178855869;

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
    msg.setTimeStamp(0.988170038859);
    msg.setSource(45682U);
    msg.setSourceEntity(128U);
    msg.setDestination(34827U);
    msg.setDestinationEntity(106U);
    msg.type = 232U;
    msg.reason = 117U;
    msg.value = 0.578329552394;
    msg.timestep = 0.305203662942;

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
    msg.setTimeStamp(0.607251098863);
    msg.setSource(26360U);
    msg.setSourceEntity(217U);
    msg.setDestination(53897U);
    msg.setDestinationEntity(13U);
    msg.type = 110U;
    msg.reason = 27U;
    msg.value = 0.148267191873;
    msg.timestep = 0.0435296555624;

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
    msg.setTimeStamp(0.276294886683);
    msg.setSource(3305U);
    msg.setSourceEntity(8U);
    msg.setDestination(19260U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.814263573691);
    msg.setSource(23014U);
    msg.setSourceEntity(30U);
    msg.setDestination(54648U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.278824266164);
    msg.setSource(61618U);
    msg.setSourceEntity(209U);
    msg.setDestination(29622U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.846209487633);
    msg.setSource(387U);
    msg.setSourceEntity(164U);
    msg.setDestination(59282U);
    msg.setDestinationEntity(197U);
    msg.beacon.assign("QMKFIZCWVFFZBZIRLIPUAYLRIQFYPEAVTMXGXZTTZHEENUZQOOWKHLHETFCNLIDMGIXGYJCPWBAUJJWBPQACLRYGVXSDEKABXKMSNVRBBFSTTJKMBTKLDAYCYMBNMIUYUSADOEYNSMDUOFGQSVPCSZKZWGQSXUXNOEQYKWJDIWJVAQPWPUOCOUBBVRTMCEXNDRCDEHFHLYNZLALFFNJIROPVHXRJMGARTCQGOG");
    msg.x = 0.171341147195;
    msg.y = 0.605828971334;
    msg.depth = 0.0169204633788;
    msg.var_x = 0.426353195784;
    msg.var_y = 0.869500324765;

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
    msg.setTimeStamp(0.848653729997);
    msg.setSource(50457U);
    msg.setSourceEntity(111U);
    msg.setDestination(868U);
    msg.setDestinationEntity(232U);
    msg.beacon.assign("XWQIPFGELYAGTVFBNCWHZVLJIMVLCNYGDDPCLIYLAUHCGIHQUUYWLXKUXOHJDOZKVVERQXYDZVBWZCHHAPXEHFNFDAWFRMBWKHSOMBDLNYQGXJNTEDRIOIOPSRIZQAIKOOLWTRLNMDZNAITPPWBTBGTGDBRWEV");
    msg.x = 0.386788487529;
    msg.y = 0.467918667871;
    msg.depth = 0.197478675091;
    msg.var_x = 0.228747152372;
    msg.var_y = 0.352557328336;

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
    msg.setTimeStamp(0.935169575702);
    msg.setSource(61165U);
    msg.setSourceEntity(251U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(246U);
    msg.beacon.assign("JMUXNVPOMOMUXMGIBSPDSZHEDBJREGXPCONTXVXWTH");
    msg.x = 0.653949763594;
    msg.y = 0.566994343853;
    msg.depth = 0.0304863457001;
    msg.var_x = 0.655167244326;
    msg.var_y = 0.590439975558;

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
    msg.setTimeStamp(0.541308820398);
    msg.setSource(57227U);
    msg.setSourceEntity(254U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(199U);
    msg.value = 0.149994853861;

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
    msg.setTimeStamp(0.652011059229);
    msg.setSource(23265U);
    msg.setSourceEntity(227U);
    msg.setDestination(12787U);
    msg.setDestinationEntity(213U);
    msg.value = 0.181919380958;

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
    msg.setTimeStamp(0.618477062015);
    msg.setSource(26717U);
    msg.setSourceEntity(92U);
    msg.setDestination(48497U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0864066909265;

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
    msg.setTimeStamp(0.608279545813);
    msg.setSource(32710U);
    msg.setSourceEntity(83U);
    msg.setDestination(7038U);
    msg.setDestinationEntity(70U);
    msg.value = 0.25244623345;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.805161654653);
    msg.setSource(50978U);
    msg.setSourceEntity(87U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(232U);
    msg.value = 0.236562585675;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.289725901014);
    msg.setSource(38049U);
    msg.setSourceEntity(81U);
    msg.setDestination(17809U);
    msg.setDestinationEntity(72U);
    msg.value = 0.756801134776;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.721783661999);
    msg.setSource(9456U);
    msg.setSourceEntity(24U);
    msg.setDestination(37044U);
    msg.setDestinationEntity(179U);
    msg.value = 0.192375882688;
    msg.speed_units = 182U;

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
    msg.setTimeStamp(0.853067171213);
    msg.setSource(55744U);
    msg.setSourceEntity(42U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(131U);
    msg.value = 0.664382053947;
    msg.speed_units = 129U;

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
    msg.setTimeStamp(0.169661453589);
    msg.setSource(36440U);
    msg.setSourceEntity(116U);
    msg.setDestination(44617U);
    msg.setDestinationEntity(220U);
    msg.value = 0.757110910609;
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
    msg.setTimeStamp(0.0641347679517);
    msg.setSource(47873U);
    msg.setSourceEntity(38U);
    msg.setDestination(44582U);
    msg.setDestinationEntity(146U);
    msg.value = 0.326199965439;

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
    msg.setTimeStamp(0.0213830927023);
    msg.setSource(57994U);
    msg.setSourceEntity(158U);
    msg.setDestination(40600U);
    msg.setDestinationEntity(192U);
    msg.value = 0.939267093993;

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
    msg.setTimeStamp(0.764648574981);
    msg.setSource(43742U);
    msg.setSourceEntity(100U);
    msg.setDestination(52082U);
    msg.setDestinationEntity(228U);
    msg.value = 0.502754337878;

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
    msg.setTimeStamp(0.111596646959);
    msg.setSource(21635U);
    msg.setSourceEntity(51U);
    msg.setDestination(8755U);
    msg.setDestinationEntity(46U);
    msg.value = 0.735674624001;

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
    msg.setTimeStamp(0.585476598524);
    msg.setSource(2137U);
    msg.setSourceEntity(106U);
    msg.setDestination(54399U);
    msg.setDestinationEntity(170U);
    msg.value = 0.372234632318;

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
    msg.setTimeStamp(0.189132454898);
    msg.setSource(2811U);
    msg.setSourceEntity(133U);
    msg.setDestination(5758U);
    msg.setDestinationEntity(128U);
    msg.value = 0.926113263567;

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
    msg.setTimeStamp(0.164654891577);
    msg.setSource(40295U);
    msg.setSourceEntity(76U);
    msg.setDestination(57907U);
    msg.setDestinationEntity(15U);
    msg.value = 0.155123780019;

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
    msg.setTimeStamp(0.302152745254);
    msg.setSource(58021U);
    msg.setSourceEntity(46U);
    msg.setDestination(28452U);
    msg.setDestinationEntity(138U);
    msg.value = 0.528116051683;

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
    msg.setTimeStamp(0.880325584344);
    msg.setSource(64159U);
    msg.setSourceEntity(46U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0773714131611;

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
    msg.setTimeStamp(0.0984131089514);
    msg.setSource(17028U);
    msg.setSourceEntity(110U);
    msg.setDestination(5958U);
    msg.setDestinationEntity(241U);
    msg.start_lat = 0.625975251154;
    msg.start_lon = 0.0286814269759;
    msg.start_z = 0.0183942474722;
    msg.start_z_units = 27U;
    msg.end_lat = 0.152547674573;
    msg.end_lon = 0.484764553339;
    msg.end_z = 0.429066989324;
    msg.end_z_units = 42U;
    msg.speed = 0.779265395711;
    msg.speed_units = 28U;
    msg.lradius = 0.982074048646;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.660722472752);
    msg.setSource(19798U);
    msg.setSourceEntity(169U);
    msg.setDestination(6999U);
    msg.setDestinationEntity(109U);
    msg.start_lat = 0.892053050259;
    msg.start_lon = 0.00778006554166;
    msg.start_z = 0.519248747608;
    msg.start_z_units = 144U;
    msg.end_lat = 0.760752173984;
    msg.end_lon = 0.956704427444;
    msg.end_z = 0.77213459381;
    msg.end_z_units = 50U;
    msg.speed = 0.765450870634;
    msg.speed_units = 254U;
    msg.lradius = 0.0711488146467;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.811681018389);
    msg.setSource(8941U);
    msg.setSourceEntity(134U);
    msg.setDestination(45795U);
    msg.setDestinationEntity(180U);
    msg.start_lat = 0.574112579278;
    msg.start_lon = 0.192364012599;
    msg.start_z = 0.812828288187;
    msg.start_z_units = 206U;
    msg.end_lat = 0.488247956897;
    msg.end_lon = 0.369870683069;
    msg.end_z = 0.312202451093;
    msg.end_z_units = 93U;
    msg.speed = 0.907731794484;
    msg.speed_units = 99U;
    msg.lradius = 0.324025317956;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.547550772705);
    msg.setSource(3781U);
    msg.setSourceEntity(9U);
    msg.setDestination(23581U);
    msg.setDestinationEntity(165U);
    msg.x = 0.567889759489;
    msg.y = 0.820873035373;
    msg.z = 0.466017481779;
    msg.k = 0.380909862815;
    msg.m = 0.320044899572;
    msg.n = 0.66352532575;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.174407117132);
    msg.setSource(22554U);
    msg.setSourceEntity(138U);
    msg.setDestination(35640U);
    msg.setDestinationEntity(143U);
    msg.x = 0.169530024054;
    msg.y = 0.65003520854;
    msg.z = 0.373815353666;
    msg.k = 0.188402889553;
    msg.m = 0.111967707995;
    msg.n = 0.527139372005;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.75074365844);
    msg.setSource(55469U);
    msg.setSourceEntity(116U);
    msg.setDestination(29040U);
    msg.setDestinationEntity(107U);
    msg.x = 0.0739866714518;
    msg.y = 0.903182513508;
    msg.z = 0.947865024215;
    msg.k = 0.335465681605;
    msg.m = 0.863617077054;
    msg.n = 0.0321964148872;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.290340038281);
    msg.setSource(9449U);
    msg.setSourceEntity(71U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(43U);
    msg.value = 0.438043648003;

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
    msg.setTimeStamp(0.857931870129);
    msg.setSource(38039U);
    msg.setSourceEntity(157U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(157U);
    msg.value = 0.859882327178;

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
    msg.setTimeStamp(0.21493583563);
    msg.setSource(42781U);
    msg.setSourceEntity(114U);
    msg.setDestination(4815U);
    msg.setDestinationEntity(64U);
    msg.value = 0.366549476041;

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
    msg.setTimeStamp(0.510721640102);
    msg.setSource(47685U);
    msg.setSourceEntity(41U);
    msg.setDestination(63548U);
    msg.setDestinationEntity(122U);
    msg.u = 0.243817599355;
    msg.v = 0.506899818185;
    msg.w = 0.338329032422;
    msg.p = 0.374632258326;
    msg.q = 0.563018955894;
    msg.r = 0.650894195604;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.116698359613);
    msg.setSource(11730U);
    msg.setSourceEntity(34U);
    msg.setDestination(59311U);
    msg.setDestinationEntity(115U);
    msg.u = 0.114508193693;
    msg.v = 0.439608006148;
    msg.w = 0.442210189339;
    msg.p = 0.700520916374;
    msg.q = 0.735038513203;
    msg.r = 0.503661135351;
    msg.flags = 211U;

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
    msg.setTimeStamp(0.622926751868);
    msg.setSource(36436U);
    msg.setSourceEntity(173U);
    msg.setDestination(62538U);
    msg.setDestinationEntity(109U);
    msg.u = 0.906008061011;
    msg.v = 0.0455066977259;
    msg.w = 0.0482111186598;
    msg.p = 0.726130364738;
    msg.q = 0.364989910489;
    msg.r = 0.655449785776;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.503556023139);
    msg.setSource(21996U);
    msg.setSourceEntity(3U);
    msg.setDestination(6479U);
    msg.setDestinationEntity(30U);
    msg.start_lat = 0.0431917320004;
    msg.start_lon = 0.371910371837;
    msg.start_z = 0.898706025426;
    msg.start_z_units = 25U;
    msg.end_lat = 0.32581314692;
    msg.end_lon = 0.962904981765;
    msg.end_z = 0.870957635536;
    msg.end_z_units = 216U;
    msg.lradius = 0.465817966946;
    msg.flags = 116U;
    msg.x = 0.0427862733397;
    msg.y = 0.495384247627;
    msg.z = 0.678362614553;
    msg.vx = 0.512181896031;
    msg.vy = 0.284169165022;
    msg.vz = 0.106601137136;
    msg.course_error = 0.363810797339;
    msg.eta = 48382U;

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
    msg.setTimeStamp(0.0983799009883);
    msg.setSource(60328U);
    msg.setSourceEntity(190U);
    msg.setDestination(60087U);
    msg.setDestinationEntity(165U);
    msg.start_lat = 0.708634252154;
    msg.start_lon = 0.850658002515;
    msg.start_z = 0.0644315818098;
    msg.start_z_units = 57U;
    msg.end_lat = 0.741118126293;
    msg.end_lon = 0.255255369666;
    msg.end_z = 0.777328966615;
    msg.end_z_units = 85U;
    msg.lradius = 0.076705209096;
    msg.flags = 237U;
    msg.x = 0.322612070177;
    msg.y = 0.0054885004031;
    msg.z = 0.123906218391;
    msg.vx = 0.392965878726;
    msg.vy = 0.593151051355;
    msg.vz = 0.951462785525;
    msg.course_error = 0.0587815796131;
    msg.eta = 50236U;

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
    msg.setTimeStamp(0.7599782985);
    msg.setSource(304U);
    msg.setSourceEntity(177U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(185U);
    msg.start_lat = 0.399026861549;
    msg.start_lon = 0.000211634061278;
    msg.start_z = 0.0229072409803;
    msg.start_z_units = 83U;
    msg.end_lat = 0.687529254387;
    msg.end_lon = 0.764307112155;
    msg.end_z = 0.135180162961;
    msg.end_z_units = 72U;
    msg.lradius = 0.591433634649;
    msg.flags = 244U;
    msg.x = 0.28300923696;
    msg.y = 0.642553211542;
    msg.z = 0.926412924486;
    msg.vx = 0.689020296705;
    msg.vy = 0.31644910741;
    msg.vz = 0.873588322315;
    msg.course_error = 0.617094954445;
    msg.eta = 9976U;

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
    msg.setTimeStamp(0.590538246398);
    msg.setSource(16283U);
    msg.setSourceEntity(190U);
    msg.setDestination(41158U);
    msg.setDestinationEntity(30U);
    msg.k = 0.620388160874;
    msg.m = 0.818637792643;
    msg.n = 0.727602470607;

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
    msg.setTimeStamp(0.295016492925);
    msg.setSource(46012U);
    msg.setSourceEntity(125U);
    msg.setDestination(10026U);
    msg.setDestinationEntity(87U);
    msg.k = 0.546547988018;
    msg.m = 0.773256363799;
    msg.n = 0.87702760628;

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
    msg.setTimeStamp(0.292350747192);
    msg.setSource(8516U);
    msg.setSourceEntity(45U);
    msg.setDestination(34512U);
    msg.setDestinationEntity(189U);
    msg.k = 0.860287241067;
    msg.m = 0.0700711125415;
    msg.n = 0.501186208777;

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
    msg.setTimeStamp(0.573259866988);
    msg.setSource(60715U);
    msg.setSourceEntity(27U);
    msg.setDestination(64575U);
    msg.setDestinationEntity(93U);
    msg.p = 0.921891025947;
    msg.i = 0.785740239114;
    msg.d = 0.308407677681;
    msg.a = 0.929448811801;

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
    msg.setTimeStamp(0.732593960498);
    msg.setSource(45298U);
    msg.setSourceEntity(19U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(194U);
    msg.p = 0.00903892904631;
    msg.i = 0.467383327031;
    msg.d = 0.704835821771;
    msg.a = 0.411594455563;

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
    msg.setTimeStamp(0.257132813432);
    msg.setSource(61969U);
    msg.setSourceEntity(37U);
    msg.setDestination(38501U);
    msg.setDestinationEntity(16U);
    msg.p = 0.3890867909;
    msg.i = 0.488397435892;
    msg.d = 0.0832755106905;
    msg.a = 0.477618499798;

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
    msg.setTimeStamp(0.562971479923);
    msg.setSource(47661U);
    msg.setSourceEntity(71U);
    msg.setDestination(19441U);
    msg.setDestinationEntity(56U);
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
    msg.setTimeStamp(0.549445928754);
    msg.setSource(41522U);
    msg.setSourceEntity(83U);
    msg.setDestination(11007U);
    msg.setDestinationEntity(166U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.110542917201);
    msg.setSource(42849U);
    msg.setSourceEntity(49U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(227U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.279515960647);
    msg.setSource(26712U);
    msg.setSourceEntity(199U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(109U);
    msg.timeout = 25312U;
    msg.lat = 0.482578175681;
    msg.lon = 0.14671597589;
    msg.z = 0.970974947763;
    msg.z_units = 38U;
    msg.speed = 0.277420501104;
    msg.speed_units = 68U;
    msg.roll = 0.516466973705;
    msg.pitch = 0.348684473676;
    msg.yaw = 0.899362994331;
    msg.custom.assign("KQOKOBWRGUWFIXTDHDPURMLAQULTTFSPJKBFTAKDGANTKBJHSMFBOTPZQIOYFBUOORVPQWGECEE");

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
    msg.setTimeStamp(0.309133617704);
    msg.setSource(60460U);
    msg.setSourceEntity(35U);
    msg.setDestination(46506U);
    msg.setDestinationEntity(209U);
    msg.timeout = 37703U;
    msg.lat = 0.333549038563;
    msg.lon = 0.413543117442;
    msg.z = 0.798921039994;
    msg.z_units = 12U;
    msg.speed = 0.256203406487;
    msg.speed_units = 182U;
    msg.roll = 0.123451564273;
    msg.pitch = 0.444046606608;
    msg.yaw = 0.420452407842;
    msg.custom.assign("PFZXAXAZFQNLXSRPBDIARVUTHKHLP");

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
    msg.setTimeStamp(0.697777373371);
    msg.setSource(37535U);
    msg.setSourceEntity(135U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(123U);
    msg.timeout = 16739U;
    msg.lat = 0.293682027777;
    msg.lon = 0.675445200885;
    msg.z = 0.612320524205;
    msg.z_units = 86U;
    msg.speed = 0.000127137197378;
    msg.speed_units = 151U;
    msg.roll = 0.781857358241;
    msg.pitch = 0.294097876309;
    msg.yaw = 0.368446775795;
    msg.custom.assign("ILIVQOPJWHOPGFHXYIPOLVTUOJCQJWDUVWTKLDSTABPMOBMNAANCSHETFIQDHLKELHYDXVIJCFBTGKPVMWXRIDAKKZEQZGHEZHWFWRTSWLRGWYXPFBSDCMSCUPABVNNDVAOYZRSSBCUKJKQZVNGUENCGVSGCUEUJSFOYHTADMEWQFKRCRBXRCGIURMPXQDMLEQFDHZZJWHERJYMLAGMXPTNZKUSRIYBABXXNBYFJKZVOXTLJQFQZTE");

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
    msg.setTimeStamp(0.76924262439);
    msg.setSource(41848U);
    msg.setSourceEntity(88U);
    msg.setDestination(47597U);
    msg.setDestinationEntity(8U);
    msg.timeout = 64781U;
    msg.lat = 0.405334639323;
    msg.lon = 0.422080939574;
    msg.z = 0.605343855049;
    msg.z_units = 250U;
    msg.speed = 0.187838499292;
    msg.speed_units = 159U;
    msg.duration = 6817U;
    msg.radius = 0.699814930916;
    msg.flags = 16U;
    msg.custom.assign("LQNBJAOUQJAPSJUZGPJULXTDNJGNKVTOMBHCIKSLSYNCUGPWZWDFHPQEMXTAWZTCAPKEAHYYSYEIRTQIYEEMRRPLFN");

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
    msg.setTimeStamp(0.69789274498);
    msg.setSource(21471U);
    msg.setSourceEntity(111U);
    msg.setDestination(63866U);
    msg.setDestinationEntity(43U);
    msg.timeout = 12801U;
    msg.lat = 0.23697601259;
    msg.lon = 0.156313283914;
    msg.z = 0.326252150501;
    msg.z_units = 209U;
    msg.speed = 0.796452462952;
    msg.speed_units = 47U;
    msg.duration = 55778U;
    msg.radius = 0.559051361395;
    msg.flags = 26U;
    msg.custom.assign("RICOIWVSWMJGKHUEHXOYQMTCORVBKSXDJVWMTTFGLIPWEJWYCMASRTACEMXNDCEFJCHCINFDKHAATUYHTPAWSQVUIXAVZYVDFOUUAHEDPMNAXRIYSGIPESQXHBDZEUTNGWKKKLZKVWBSKDNENNQXDAOPQDMFEBGWFOFCCRLLBZYEXHXRPIOGVQBZIRBPKRBSJSGZHSJFPQUGNPWYTJFYLOQZJTRUZNPUAJHMGLZ");

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
    msg.setTimeStamp(0.272199085759);
    msg.setSource(28106U);
    msg.setSourceEntity(15U);
    msg.setDestination(8579U);
    msg.setDestinationEntity(177U);
    msg.timeout = 5406U;
    msg.lat = 0.604443616374;
    msg.lon = 0.195517551215;
    msg.z = 0.230100575596;
    msg.z_units = 186U;
    msg.speed = 0.466043525985;
    msg.speed_units = 26U;
    msg.duration = 59779U;
    msg.radius = 0.0489631197856;
    msg.flags = 231U;
    msg.custom.assign("PJRRBFGURFZKRWWOVPGFOQQQZUKEVBXDXGLZCVQTEDELNENZHMBUARPUDYWILABNPRSAIVNF");

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
    msg.setTimeStamp(0.446310719256);
    msg.setSource(45413U);
    msg.setSourceEntity(234U);
    msg.setDestination(41241U);
    msg.setDestinationEntity(136U);
    msg.custom.assign("ZGQRNXARYELKWZUULUXVIREEYDWVPFYOLYFZTZGKUNWJVOBQWJMGGNJFTFDNUQOSHIHTJLSYGXXNRNVDMJ");

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
    msg.setTimeStamp(0.276639693781);
    msg.setSource(43477U);
    msg.setSourceEntity(105U);
    msg.setDestination(30560U);
    msg.setDestinationEntity(159U);
    msg.custom.assign("JINCLYPRNGRYZGIEOEQWBTVLHOMOPBANNEYSFFYEWRCE");

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
    msg.setTimeStamp(0.197092737054);
    msg.setSource(36824U);
    msg.setSourceEntity(145U);
    msg.setDestination(16849U);
    msg.setDestinationEntity(134U);
    msg.custom.assign("AGBZIQAWQICPHUJVIVHZBOGGZRCCGWPBJCSXYMEFCJXDHQRBVQYXLIFESMBBPSDCTNMLWGNPFNGAOWMDZFHDVOSIDOTTXPOXKBYIZUYWCAVYSBLYACYZQJFRGEV");

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
    msg.setTimeStamp(0.319541284418);
    msg.setSource(5511U);
    msg.setSourceEntity(231U);
    msg.setDestination(15534U);
    msg.setDestinationEntity(71U);
    msg.timeout = 928U;
    msg.lat = 0.764657045069;
    msg.lon = 0.176191773173;
    msg.z = 0.765851475281;
    msg.z_units = 206U;
    msg.duration = 55277U;
    msg.speed = 0.661036178962;
    msg.speed_units = 182U;
    msg.type = 182U;
    msg.radius = 0.741637388203;
    msg.length = 0.827333893755;
    msg.bearing = 0.484170740637;
    msg.direction = 22U;
    msg.custom.assign("WMEZPAUHETSBRQXPAFOGXMYLCUYWCYPQBJJOPKUWJLKNNGZTXKVPOCVCYANSJWGQTRFOWIGFIFDAEVTNBZEXLROQIEMYKSKLFOPWZVAMUWJYQGQIMGEBSBYV");

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
    msg.setTimeStamp(0.0556069522529);
    msg.setSource(37714U);
    msg.setSourceEntity(216U);
    msg.setDestination(6459U);
    msg.setDestinationEntity(175U);
    msg.timeout = 23466U;
    msg.lat = 0.48676872496;
    msg.lon = 0.0425069118374;
    msg.z = 0.972796504212;
    msg.z_units = 174U;
    msg.duration = 59100U;
    msg.speed = 0.276558546561;
    msg.speed_units = 105U;
    msg.type = 191U;
    msg.radius = 0.88423509714;
    msg.length = 0.692072003684;
    msg.bearing = 0.860519795118;
    msg.direction = 12U;
    msg.custom.assign("SHGTGPJOYYGNLKYQLKSDIAWLMJEPLJKUEFQOVRFZZUUXNXCMAJAIURAHHAPPRKOXDFJSDBXZRVCSQEVNPXCTCBVMISKMIBNKXHLMWGEJZQBFFVDOTJTRC");

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
    msg.setTimeStamp(0.606993556931);
    msg.setSource(10950U);
    msg.setSourceEntity(181U);
    msg.setDestination(19890U);
    msg.setDestinationEntity(88U);
    msg.timeout = 37515U;
    msg.lat = 0.79225393106;
    msg.lon = 0.718299998401;
    msg.z = 0.317431270052;
    msg.z_units = 204U;
    msg.duration = 35010U;
    msg.speed = 0.0539700513563;
    msg.speed_units = 219U;
    msg.type = 11U;
    msg.radius = 0.447137957537;
    msg.length = 0.888136449448;
    msg.bearing = 0.744735772281;
    msg.direction = 8U;
    msg.custom.assign("XJASVPKZELWQHNCQAQXUBPGXRHWCOXHXKTYUGSYSZWORDJYAJUSSSDVHBKYLTCIZOBXMOPQTLMAVZPVKIDONEEJUNYFFFMJNPOIVAUQIEFJHCWLGSFGRRWIMLNQBQRUNAZDVGENNYEWVMPSKYHCZPCAIXTOZJRJKDTSDTKXKLUCHYMAHMFBPYYWIDPNHBAEVWFTZEBVBB");

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
    msg.setTimeStamp(0.0878713095323);
    msg.setSource(1201U);
    msg.setSourceEntity(196U);
    msg.setDestination(63441U);
    msg.setDestinationEntity(96U);
    msg.duration = 46422U;
    msg.custom.assign("RKFYXWRVUPJQPAKRTNXMYDDRLSAWWAEBIKRBMYAEAKWZCLTIVGXJWUETHSCOGBRESAYYLTPYVSTBZNFBENOLKTZDQQXJOETPFHMDHOCNIUZOFYSEBMHXPVMAAHASUZOYLNOMTVNIKOGCHGQRCUKSURBCQFYJGYSNPEGWRHUPRPFCFJHJWBUZQKDBXIGWMFCKILELWPLTZXNXGUFIDTHQDIGBX");

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
    msg.setTimeStamp(0.407134845632);
    msg.setSource(49924U);
    msg.setSourceEntity(173U);
    msg.setDestination(6462U);
    msg.setDestinationEntity(131U);
    msg.duration = 31190U;
    msg.custom.assign("AMDFTHFYEFAZCSZSCOWQHXGYOPARVNZUOABCLTALRWVDWSRFADMPPOYMVJHBRUQOSROJILHKPRXVDNSLJZYWUGJCOYYZEUIZYKDXNWJEMFNNIOHBTFLTEDXEUDWWDMTVEUXQGAFVMXCILKRGAHGKACUCIOBBGZSLZXKMYRTBPYXCKRQUQEQINMWKNLMYKVFAHQELIW");

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
    msg.setTimeStamp(0.460449869116);
    msg.setSource(32894U);
    msg.setSourceEntity(108U);
    msg.setDestination(58951U);
    msg.setDestinationEntity(115U);
    msg.duration = 40190U;
    msg.custom.assign("HUCBACJEENRKHQYWOJVRGDYYTOOXJCOQHPHEZLNMWBZJMIVINXSZQCLUAUYVBTSMGFFABQANVVUYMLSZFFAXINMVWHABNHZKJKSDAIUNMCDDDUQZTGOAYUYPLTEUSHTKPQRIPEYWAVCXJTPKDNLCDKCETIWWTFPLWXNLLREWXQGWRXBVDYXJEIIKQSBGIRZIFBWOKQKFOEKSHPZOS");

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
    msg.setTimeStamp(0.159611529148);
    msg.setSource(20408U);
    msg.setSourceEntity(17U);
    msg.setDestination(49717U);
    msg.setDestinationEntity(253U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.857993778923;
    tmp_msg_0.speed_units = 61U;
    msg.control.set(tmp_msg_0);
    msg.duration = 31686U;
    msg.custom.assign("YMQZXSCTIVBVVROXYYAHHSITXAJKBYBHAVVDGJIPJSNCHEMGARZRRFPZOYXBKUXUHAOWLQXPDOZDURQJQKOVKCYDMGAUQGWKCAHNIM");

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
    msg.setTimeStamp(0.658376162415);
    msg.setSource(47225U);
    msg.setSourceEntity(103U);
    msg.setDestination(3024U);
    msg.setDestinationEntity(249U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.827896892245;
    msg.control.set(tmp_msg_0);
    msg.duration = 65494U;
    msg.custom.assign("NZOZORAOQHBVEECLREVFUVVUAJWQKAMTHKICRLGNOTBNLZFVMLTHJZKXUQCHVSSRSKLHZXBUZBTBWFMVYRVYDSWNUWINFMQFYIHAOMOSXABBYCJIDDQDGWNNLAMGQTCFRRCYXLUHTTWSMEWAEZAPQEKEKFI");

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
    msg.setTimeStamp(0.208734178972);
    msg.setSource(26224U);
    msg.setSourceEntity(196U);
    msg.setDestination(36941U);
    msg.setDestinationEntity(122U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.462427900847;
    msg.control.set(tmp_msg_0);
    msg.duration = 56989U;
    msg.custom.assign("MSGTXAOEICJYYEKTGRZFHNWBOOFXAT");

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
    msg.setTimeStamp(0.865548436324);
    msg.setSource(24717U);
    msg.setSourceEntity(205U);
    msg.setDestination(24355U);
    msg.setDestinationEntity(4U);
    msg.timeout = 60059U;
    msg.lat = 0.252368258012;
    msg.lon = 0.996828186368;
    msg.z = 0.776904095931;
    msg.z_units = 20U;
    msg.speed = 0.179000552499;
    msg.speed_units = 89U;
    msg.bearing = 0.889204080696;
    msg.cross_angle = 0.34818860664;
    msg.width = 0.88406903294;
    msg.length = 0.707405313513;
    msg.hstep = 0.785166121495;
    msg.coff = 71U;
    msg.alternation = 228U;
    msg.flags = 87U;
    msg.custom.assign("XQYKRBIFXOHCNQMRBCVRDRLFEJPKGUGORTICOQEITXPZNTXCYOCBGCALMZAFVBPDYOFMTIDXDVEGZTMFYUKDLNHDNSFONGZEYZITQLAHYWBXCRMZJSUZAQSTMZPETHVSUSYLDZAJHXCAABWREPXBD");

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
    msg.setTimeStamp(0.3796144502);
    msg.setSource(33083U);
    msg.setSourceEntity(235U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(129U);
    msg.timeout = 55371U;
    msg.lat = 0.318552892598;
    msg.lon = 0.919511505124;
    msg.z = 0.183091922679;
    msg.z_units = 173U;
    msg.speed = 0.752654014453;
    msg.speed_units = 202U;
    msg.bearing = 0.407087191988;
    msg.cross_angle = 0.00202848453129;
    msg.width = 0.139012153014;
    msg.length = 0.815176685023;
    msg.hstep = 0.652581285142;
    msg.coff = 210U;
    msg.alternation = 224U;
    msg.flags = 171U;
    msg.custom.assign("QRXAIIXOAVSYEOTGQDLIEZVIEGILVDFMROGQELGUJSBAAUWHZMUGBBHMAJYBQBSCDMSPUCLJYDIVGSKBIHHPWFMWJJYQURBPZKHZNWVCLWYYEVWNRJINGFCCLDLRCXZHTJSAXZOWUPKYAWFQNMG");

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
    msg.setTimeStamp(0.609430498203);
    msg.setSource(18687U);
    msg.setSourceEntity(5U);
    msg.setDestination(4098U);
    msg.setDestinationEntity(154U);
    msg.timeout = 39973U;
    msg.lat = 0.752840264613;
    msg.lon = 0.415958398367;
    msg.z = 0.517248128722;
    msg.z_units = 128U;
    msg.speed = 0.842295285497;
    msg.speed_units = 112U;
    msg.bearing = 0.410894858817;
    msg.cross_angle = 0.334195845433;
    msg.width = 0.257747329586;
    msg.length = 0.0192702124368;
    msg.hstep = 0.530088578828;
    msg.coff = 65U;
    msg.alternation = 253U;
    msg.flags = 172U;
    msg.custom.assign("GHKBTCTYKGXASIIEBKKVOLSLVHQWFMXCDFUAEHGD");

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
    msg.setTimeStamp(0.821985832306);
    msg.setSource(21056U);
    msg.setSourceEntity(39U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(98U);
    msg.timeout = 32240U;
    msg.lat = 0.96453843436;
    msg.lon = 0.891752648563;
    msg.z = 0.353470408232;
    msg.z_units = 136U;
    msg.speed = 0.090375222563;
    msg.speed_units = 13U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.915731843816;
    tmp_msg_0.y = 0.431344733914;
    tmp_msg_0.z = 0.633194406885;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZYHHSEOXAWVUJVDANACAFZXPDGQJPBESYNMIUSPIEZHOCTHXKZJVWHZQYOVICCGLANDSXQJFYEWBJD");

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
    msg.setTimeStamp(0.101918959666);
    msg.setSource(64680U);
    msg.setSourceEntity(250U);
    msg.setDestination(39180U);
    msg.setDestinationEntity(117U);
    msg.timeout = 13021U;
    msg.lat = 0.257599069204;
    msg.lon = 0.38336497883;
    msg.z = 0.0243137154565;
    msg.z_units = 57U;
    msg.speed = 0.323726932913;
    msg.speed_units = 131U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.193969595752;
    tmp_msg_0.y = 0.00774364037421;
    tmp_msg_0.z = 0.951443542021;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OTYVGKZERANEWILUTGNJDANRUPISEIMMBQURTSXQSFZJPIMLFZVXVEPHNREJWUFKAEOOCRHAQKZKTCFMOHCRXGXGRYSOQICYCGZLDJATFNFYDCM");

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
    msg.setTimeStamp(0.950388760042);
    msg.setSource(13135U);
    msg.setSourceEntity(6U);
    msg.setDestination(34940U);
    msg.setDestinationEntity(232U);
    msg.timeout = 27920U;
    msg.lat = 0.359247829404;
    msg.lon = 0.829251038482;
    msg.z = 0.684828539742;
    msg.z_units = 165U;
    msg.speed = 0.878100701513;
    msg.speed_units = 117U;
    msg.custom.assign("QIOZIETQKRCTAEYFBJFWADIORBRRFQZZHEIPHXZSLVMSJFUNLAWEYZKWCJRGUPWAIWEJIDUMZKZFVPSMVQBGVVJJXUGDMVHPFATMRFLSAFPXMHYVXWXWXHBYTHHCDJFSLIQNKTJMUPOXDBGAGSNGKOTHNRIQUBPUGDSEHKDYKEQYJYDFTOEHDBPGVCXIENXYYPM");

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
    msg.setTimeStamp(0.186846397081);
    msg.setSource(27423U);
    msg.setSourceEntity(237U);
    msg.setDestination(57846U);
    msg.setDestinationEntity(46U);
    msg.x = 0.0929401542859;
    msg.y = 0.791251185729;
    msg.z = 0.371214240097;

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
    msg.setTimeStamp(0.138674669028);
    msg.setSource(63678U);
    msg.setSourceEntity(38U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(159U);
    msg.x = 0.628966150851;
    msg.y = 0.0914925639391;
    msg.z = 0.766661278619;

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
    msg.setTimeStamp(0.797975516591);
    msg.setSource(27502U);
    msg.setSourceEntity(39U);
    msg.setDestination(23666U);
    msg.setDestinationEntity(202U);
    msg.x = 0.0764699466883;
    msg.y = 0.339847521428;
    msg.z = 0.00187460391721;

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
    msg.setTimeStamp(0.941191231534);
    msg.setSource(58377U);
    msg.setSourceEntity(84U);
    msg.setDestination(38264U);
    msg.setDestinationEntity(223U);
    msg.timeout = 8155U;
    msg.lat = 0.413423443652;
    msg.lon = 0.527257628284;
    msg.z = 0.722600313539;
    msg.z_units = 142U;
    msg.amplitude = 0.11522601688;
    msg.pitch = 0.955333102878;
    msg.speed = 0.258546072567;
    msg.speed_units = 147U;
    msg.custom.assign("RUKWBPWEDSFKTBZRCQYELEMBVGRBHAEJYHQWRQFOEALNILAJGMCANDOVNZXQMIYDFTWYSZICJIDNBRWEHPUKIUTWUAVFDLLXEXBEBLIOIPAYZJMGSIMUFXNKRFNHDVKKVBEGDFTHUXGULFOWSPBKRXQDXYQZWOUSZCCYGMVNSTCXPMJFGNGXJACMPNULXVAGGPZSYHYQSIERVHCRTHUOQDOBKLSMVINLATDCOVTJJZZPFWJMS");

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
    msg.setTimeStamp(0.285267753355);
    msg.setSource(18300U);
    msg.setSourceEntity(122U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(126U);
    msg.timeout = 12563U;
    msg.lat = 0.936294081581;
    msg.lon = 0.08498451226;
    msg.z = 0.757317424333;
    msg.z_units = 237U;
    msg.amplitude = 0.462005950049;
    msg.pitch = 0.379183512797;
    msg.speed = 0.825542297442;
    msg.speed_units = 5U;
    msg.custom.assign("TLAGHNMOTAPWTISSDPPJFWKSXEGNQDTMHZFHYQFDVIOQYPVDGUTTQTOSGJBCOXEVRBYNAPFNJHDVCZSLEMMKJLODELGLYDJOSAJXCVYBVIRIXGCHNWEXFRURPRILVETSKUKDCPGODIZBFRYIMZKZ");

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
    msg.setTimeStamp(0.927398874074);
    msg.setSource(870U);
    msg.setSourceEntity(228U);
    msg.setDestination(32628U);
    msg.setDestinationEntity(148U);
    msg.timeout = 61550U;
    msg.lat = 0.0196990474421;
    msg.lon = 0.446263752483;
    msg.z = 0.52880575622;
    msg.z_units = 97U;
    msg.amplitude = 0.897022174879;
    msg.pitch = 0.148612017287;
    msg.speed = 0.0853373855426;
    msg.speed_units = 144U;
    msg.custom.assign("RSSJERHFUWQDWOKPUVYKUTPPRLCCEPXRAQHCIQDOFE");

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
    msg.setTimeStamp(0.334813385188);
    msg.setSource(27369U);
    msg.setSourceEntity(175U);
    msg.setDestination(59021U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.431539677124);
    msg.setSource(1651U);
    msg.setSourceEntity(126U);
    msg.setDestination(46866U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.395074301907);
    msg.setSource(29768U);
    msg.setSourceEntity(121U);
    msg.setDestination(14443U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.612707974352);
    msg.setSource(17757U);
    msg.setSourceEntity(51U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.790387746671;
    msg.lon = 0.781505149526;
    msg.z = 0.793867633918;
    msg.z_units = 244U;
    msg.radius = 0.451296094827;
    msg.duration = 27174U;
    msg.speed = 0.929875831235;
    msg.speed_units = 21U;
    msg.custom.assign("LUMPRHWQLFAMKGNAYECYZKEEQCPMVJBRVHRXJDWABNZWQQQJFGODKCRHZLMSITIVRAFCFBPVVRSPGWBKYDUTDXAOZIJXSZDFXDYHAIGJHQXUSUTWZMONHUNVQFEOJHOLRYFMDKLTOVBJZUWUCTTITEDTVPEYFUGTGMPEKTOPSWZSICBMRSHWBVFCRAJLIUHNAYQKZMYKFLASIXQKDNNXUBCIYBLYGDOGPHEBKOVXEQJWNNZA");

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
    msg.setTimeStamp(0.303615685958);
    msg.setSource(48194U);
    msg.setSourceEntity(23U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.497134832302;
    msg.lon = 0.27288204699;
    msg.z = 0.831260182416;
    msg.z_units = 232U;
    msg.radius = 0.575587452601;
    msg.duration = 1931U;
    msg.speed = 0.625398998973;
    msg.speed_units = 182U;
    msg.custom.assign("LRGKRRQXWTXXHPUMDIIPEGIQUJPNLIWOHIHRZUFALPSCTVLOLDVNKOCNRKGVOYXSPZHJZOFTQVPXIMUASWJKNBZZYQSEODGCUXNJKNNCDZIOKLAVFSZEJFELSACYVGNQRVPTDWAAFIIWKCSGOELTYLETMEDQBNJWQKBC");

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
    msg.setTimeStamp(0.700829475074);
    msg.setSource(33157U);
    msg.setSourceEntity(92U);
    msg.setDestination(61805U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.626668170943;
    msg.lon = 0.73286298174;
    msg.z = 0.195012437617;
    msg.z_units = 2U;
    msg.radius = 0.779969822274;
    msg.duration = 51550U;
    msg.speed = 0.137736679541;
    msg.speed_units = 213U;
    msg.custom.assign("EMTLKYOGNLEEVLTKCAHCNUICYEHQXGOYWOSNFZYTDKBIIPRFQQGZHYLAVTGQLDDFGYCXMQNRVXACOZPTVAZWXKGEJZHJVGZUNNXTUYEZQPZPKEMNPCDIJZJCNKBMHOIWWJMUBYTDQBXVQUBZROGJOJNCFFASHMIRRVMPCSDSDAVURAVISBXMUDLFWGEMTUQQIBRXWEFTRHKCWHSFIHFWSPPNODUXYBASRAAOPFLTJOKVRWPDGLHEUJKKXSL");

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
    msg.setTimeStamp(0.525573722644);
    msg.setSource(12884U);
    msg.setSourceEntity(85U);
    msg.setDestination(53142U);
    msg.setDestinationEntity(248U);
    msg.timeout = 43264U;
    msg.flags = 233U;
    msg.lat = 0.775197856022;
    msg.lon = 0.381243727566;
    msg.start_z = 0.0652651288338;
    msg.start_z_units = 253U;
    msg.end_z = 0.995989755618;
    msg.end_z_units = 57U;
    msg.radius = 0.313969883223;
    msg.speed = 0.152244859243;
    msg.speed_units = 248U;
    msg.custom.assign("OJXWAUAKGLYFDTJKFYODAKDTHYTJYJEATEQRSIEAQBBBPDUKVQOGJIHEMBXOEIIMKDBMPUVXFNFGCGTSGRHWMBKARJLLCTVOPZCHLBNEXQENVWBDZHARQUCBVRSDRUDIMKXQPOSVJZOJAACQMWNSNVPGLWPIHWPYXHICKCKLBQVUZGCYFEQYUMTZEDNUZSXTUQLHRGNHMFMVSTTLSX");

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
    msg.setTimeStamp(0.338413218927);
    msg.setSource(154U);
    msg.setSourceEntity(122U);
    msg.setDestination(42314U);
    msg.setDestinationEntity(130U);
    msg.timeout = 48327U;
    msg.flags = 183U;
    msg.lat = 0.930667757766;
    msg.lon = 0.206899033726;
    msg.start_z = 0.979510353984;
    msg.start_z_units = 8U;
    msg.end_z = 0.341361276471;
    msg.end_z_units = 117U;
    msg.radius = 0.868595906774;
    msg.speed = 0.134129459958;
    msg.speed_units = 79U;
    msg.custom.assign("JDUQBSZACHJQSRXRMZAZUQTIFGMZKGWKROSDWVTMXQWDEZCYAQGBIZGYCQO");

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
    msg.setTimeStamp(0.934183989183);
    msg.setSource(46494U);
    msg.setSourceEntity(157U);
    msg.setDestination(46041U);
    msg.setDestinationEntity(206U);
    msg.timeout = 45330U;
    msg.flags = 155U;
    msg.lat = 0.32042984269;
    msg.lon = 0.371323067038;
    msg.start_z = 0.960116918243;
    msg.start_z_units = 204U;
    msg.end_z = 0.513999107135;
    msg.end_z_units = 95U;
    msg.radius = 0.962152911602;
    msg.speed = 0.92645979347;
    msg.speed_units = 254U;
    msg.custom.assign("MXZCLKPMXMGYCICLEHTQNVVVDXEEFNEFYAWNJQNWRJJQ");

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
    msg.setTimeStamp(0.411921965594);
    msg.setSource(10394U);
    msg.setSourceEntity(148U);
    msg.setDestination(47714U);
    msg.setDestinationEntity(222U);
    msg.timeout = 22682U;
    msg.lat = 0.868639866245;
    msg.lon = 0.626453532764;
    msg.z = 0.6785193047;
    msg.z_units = 52U;
    msg.speed = 0.300126708523;
    msg.speed_units = 145U;
    msg.custom.assign("TRKOKTOSBKGOHPESNULCIPAYTOOWVGBWYUUKMIHBFAVOXHDHTZGGIXGXAJVACPKTRSDLPGYWXZGHFUZPJFBDEAAZRRQAQUDRQSNZUQUCMEPAPMOGBWXFNN");

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
    msg.setTimeStamp(0.321959885251);
    msg.setSource(8964U);
    msg.setSourceEntity(137U);
    msg.setDestination(4532U);
    msg.setDestinationEntity(130U);
    msg.timeout = 60301U;
    msg.lat = 0.938237920274;
    msg.lon = 0.573694793727;
    msg.z = 0.902236547734;
    msg.z_units = 25U;
    msg.speed = 0.322205676158;
    msg.speed_units = 218U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.807008651237;
    tmp_msg_0.y = 0.15853415151;
    tmp_msg_0.z = 0.520066244648;
    tmp_msg_0.t = 0.788059404464;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RIVXSGTZMLNWPQKWCOZTRBMZQDEMTZOMKJWAUDBVKNXHMVHKPYOJQFLKULPNCISXNZTMUTSYXNUOPHRMSJBIHARTDAHLQWNVQ");

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
    msg.setTimeStamp(0.220723382222);
    msg.setSource(37746U);
    msg.setSourceEntity(163U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(183U);
    msg.timeout = 14757U;
    msg.lat = 0.342233824245;
    msg.lon = 0.766146888336;
    msg.z = 0.164069690041;
    msg.z_units = 10U;
    msg.speed = 0.837216601858;
    msg.speed_units = 85U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.123136439516;
    tmp_msg_0.y = 0.246190103676;
    tmp_msg_0.z = 0.509088406228;
    tmp_msg_0.t = 0.138697717707;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LCBLUZYFNHDJNRMIUADTXYDRGDWEJSVGYTUL");

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
    msg.setTimeStamp(0.194987935712);
    msg.setSource(48581U);
    msg.setSourceEntity(189U);
    msg.setDestination(1286U);
    msg.setDestinationEntity(111U);
    msg.x = 0.657818309003;
    msg.y = 0.855217434751;
    msg.z = 0.547140281134;
    msg.t = 0.58851233696;

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
    msg.setTimeStamp(0.732639229866);
    msg.setSource(19902U);
    msg.setSourceEntity(45U);
    msg.setDestination(43725U);
    msg.setDestinationEntity(103U);
    msg.x = 0.147837204067;
    msg.y = 0.351185393985;
    msg.z = 0.593205770576;
    msg.t = 0.0519682782619;

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
    msg.setTimeStamp(0.48214029488);
    msg.setSource(17685U);
    msg.setSourceEntity(213U);
    msg.setDestination(58667U);
    msg.setDestinationEntity(75U);
    msg.x = 0.895867850578;
    msg.y = 0.113140269736;
    msg.z = 0.329366160901;
    msg.t = 0.510716033336;

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
    msg.setTimeStamp(0.170222591149);
    msg.setSource(26732U);
    msg.setSourceEntity(231U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(2U);
    msg.timeout = 26827U;
    msg.name.assign("FXKVSHQQSTGDGDFMSPCJQYOQWOOCKIDQGRANFYXTKHYWHXJYZEARPQLBVGDQYQADXRHHPUTWT");
    msg.custom.assign("KILITQQBUQWJMYGPJPHDRESONQRGWSPFDXMRGMLOEMJVTAKYWDTZSBLANMZXFPOGSLMIDEXPFNISZMTOGRMZXIDNUXHXRCGHSTQRWVSZTWHTZLEXGSDOOUKIVAFBAJPVCUHYNVOITHGJYYNWNWWZCHFCYRCOIGEDBBPQYBWQBEAPCUKQJVVYRRXAFVPHTCOQKAFWHXCBKVEUEUACLFZNFJIHLKYBXPZANUFQJYTGJMOLKKUD");

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
    msg.setTimeStamp(0.473488602631);
    msg.setSource(53209U);
    msg.setSourceEntity(241U);
    msg.setDestination(16325U);
    msg.setDestinationEntity(12U);
    msg.timeout = 20544U;
    msg.name.assign("HXLUMZQYUGUSPPTZYQHASXBARLQENFCAMENZFBXKGGBTKBCOWPCNJKBIRDLGNPDXIFSCLFYJIHKHYOSUKHBRABZXRJPFUADZZCLPGILWJUAAMTLIAWJWXGKHONTZLZVRIYSRQASVNTVTSTECVGVMTOPPYDKYEQWDJAEVOQXFHSMODRNF");
    msg.custom.assign("GQSQAHBDWEJCJKZSHKCTPXLFCPFSDCGLABPOMRITNZSLFIRYMZIHQZXSQOUYLGUNPOEYDVYHRXGORMAZDMUNQJYGVXLEPCAFLXWJVXTHYCEHJIEWIABTKEJKCKFLWGLMONKRELIYYORXMRXTMCSEFIXPDVQBFDCJSUVVXWVKAVENUNUWBRRUIMBZHWFISHGQM");

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
    msg.setTimeStamp(0.828670761949);
    msg.setSource(27454U);
    msg.setSourceEntity(71U);
    msg.setDestination(33612U);
    msg.setDestinationEntity(35U);
    msg.timeout = 51765U;
    msg.name.assign("NPEOZLIUDJMXVHGVSSCYRAMOPQHBACMEPSPPNZFTTURXAGJLUUNPFYDNDZKEHHCREWNVHROQFXKZRSSLFYNICVVKPGJBROHOBXNKLJABCDACIKYUIZYZZDWUQVPNCQITEAJEDMLNKUXGWKJGZTXFGUICKTLAVCDJMUNEXZELFBTGOVYRPXBQTUWRQQFQJHWAWMLLHWSFYMITTDIFSOLMBVAVSYGOMKQOJEBIWKA");
    msg.custom.assign("SLLKNYOYBZQBTZOLKJDEWGPHCKBYPIWVNJROMPHKXTTAEVLWRBJKQQNIRXLLHXGSUBGTWBGVJFFZPFJBGUKBIUCKSIRXMWEFDOJXMWZMUPPSHUNPWDHMOAMYSLQNDCPEXCTFQUUNAXKSLYOCOTSHJSV");

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
    msg.setTimeStamp(0.973168248942);
    msg.setSource(28790U);
    msg.setSourceEntity(12U);
    msg.setDestination(2014U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.949644497209;
    msg.lon = 0.0420383663324;
    msg.z = 0.842637273016;
    msg.z_units = 231U;
    msg.speed = 0.751100666631;
    msg.speed_units = 107U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61301U;
    tmp_msg_0.off_x = 0.603467237162;
    tmp_msg_0.off_y = 0.845999140331;
    tmp_msg_0.off_z = 0.57258186562;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.429271288056;
    msg.custom.assign("DVXOTQFHZVOHGCOXRUFUXGLFYXFEKNCKVLYRGNKIMLCDPPZGRTQVEALUSZGPZLREZBPNWJEDVYBQSCILNWETUZFALQVPKHUATCSSXGHWBGRAYMXPFPKCIIJIMKJVUJIDYMNSLEOQTJYRANZPWGEHMHWIHSYQ");

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
    msg.setTimeStamp(0.552660417714);
    msg.setSource(62003U);
    msg.setSourceEntity(72U);
    msg.setDestination(28260U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.629501697368;
    msg.lon = 0.225478246802;
    msg.z = 0.644477551288;
    msg.z_units = 175U;
    msg.speed = 0.992065347565;
    msg.speed_units = 127U;
    msg.start_time = 0.655359632952;
    msg.custom.assign("BHYCZKADZJDFSVAQDZEJLQBVOOHRBKJFSXIXZUMNHKELKGDTEFSGKZMVBNUIOZNAVAYQMDXSJCAWICTQXSAJFJXRUIWQRSLHLNJNGVFWDKRMUQFASTIWLWIOZRPUXNCYKKPEPFZCMCGMMGMJWIQYAVXEFG");

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
    msg.setTimeStamp(0.977436577599);
    msg.setSource(22281U);
    msg.setSourceEntity(37U);
    msg.setDestination(10220U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.505136799484;
    msg.lon = 0.840901293774;
    msg.z = 0.674859641727;
    msg.z_units = 219U;
    msg.speed = 0.322848823045;
    msg.speed_units = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33189U;
    tmp_msg_0.off_x = 0.781244428933;
    tmp_msg_0.off_y = 0.472965996284;
    tmp_msg_0.off_z = 0.0994483031846;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.898513574035;
    msg.custom.assign("GSKQTZDEXQWJONVQL");

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
    msg.setTimeStamp(0.631512736258);
    msg.setSource(45643U);
    msg.setSourceEntity(132U);
    msg.setDestination(62772U);
    msg.setDestinationEntity(124U);
    msg.vid = 28813U;
    msg.off_x = 0.103359891215;
    msg.off_y = 0.947419929313;
    msg.off_z = 0.896284437281;

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
    msg.setTimeStamp(0.144766444562);
    msg.setSource(44290U);
    msg.setSourceEntity(223U);
    msg.setDestination(43612U);
    msg.setDestinationEntity(158U);
    msg.vid = 30211U;
    msg.off_x = 0.85378943911;
    msg.off_y = 0.0109715963152;
    msg.off_z = 0.306169547687;

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
    msg.setTimeStamp(0.447864983224);
    msg.setSource(62593U);
    msg.setSourceEntity(14U);
    msg.setDestination(47U);
    msg.setDestinationEntity(155U);
    msg.vid = 1071U;
    msg.off_x = 0.17237650166;
    msg.off_y = 0.219800558991;
    msg.off_z = 0.00400977171168;

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
    msg.setTimeStamp(0.525421054682);
    msg.setSource(57132U);
    msg.setSourceEntity(42U);
    msg.setDestination(1936U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.820616476098);
    msg.setSource(65232U);
    msg.setSourceEntity(250U);
    msg.setDestination(36045U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.497308475179);
    msg.setSource(23919U);
    msg.setSourceEntity(211U);
    msg.setDestination(13999U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.542294346741);
    msg.setSource(14835U);
    msg.setSourceEntity(181U);
    msg.setDestination(19058U);
    msg.setDestinationEntity(81U);
    msg.mid = 9221U;

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
    msg.setTimeStamp(0.260456976428);
    msg.setSource(55187U);
    msg.setSourceEntity(40U);
    msg.setDestination(46729U);
    msg.setDestinationEntity(48U);
    msg.mid = 40926U;

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
    msg.setTimeStamp(0.266298636149);
    msg.setSource(57008U);
    msg.setSourceEntity(253U);
    msg.setDestination(57228U);
    msg.setDestinationEntity(220U);
    msg.mid = 12734U;

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
    msg.setTimeStamp(0.211352156612);
    msg.setSource(30553U);
    msg.setSourceEntity(144U);
    msg.setDestination(16125U);
    msg.setDestinationEntity(245U);
    msg.state = 51U;
    msg.eta = 52387U;
    msg.info.assign("DEQHZLVQJOEKCUFMGFELBUBAOTHDADFVCETQXGARIPPBDKSPWKSPQQPNUNRTVMHTORGUKKLAHZCPSZLUQLSHMKFSSJYVFJGFPFGDNBTTJCJBVAOASJFZGBLRWDYAY");

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
    msg.setTimeStamp(0.712519006285);
    msg.setSource(1974U);
    msg.setSourceEntity(2U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(21U);
    msg.state = 68U;
    msg.eta = 57321U;
    msg.info.assign("GWMFHHNDIXPNDURTKDHMUXJKETPLLBZBDKVAQEQSCCGWNBOF");

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
    msg.setTimeStamp(0.0817119000469);
    msg.setSource(33480U);
    msg.setSourceEntity(17U);
    msg.setDestination(48886U);
    msg.setDestinationEntity(210U);
    msg.state = 133U;
    msg.eta = 39995U;
    msg.info.assign("UGKFMCMKASOUTKBQALFZJGZCPACXWBITZPBAZMDRDQFYMLJBWUSYWUJNCZGLQNBSYJGADNDJEVUWEZSUPOJTJCTJIVTCOXQCLXVOAEGYPVAIUBBHMBBPHOHMPOQKEIPWNKRXVZLIXIROFTCESWRMJPYIQTANGZWGGOIQAYFMUNSYLSKTAHQWYKLEDZHQERXELVEXFHLVEFFTJSHDKBHDHUPNXOMNWQDV");

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
    msg.setTimeStamp(0.887745092697);
    msg.setSource(6824U);
    msg.setSourceEntity(25U);
    msg.setDestination(54444U);
    msg.setDestinationEntity(25U);
    msg.system = 48917U;
    msg.duration = 23967U;
    msg.speed = 0.0531618296691;
    msg.speed_units = 49U;
    msg.x = 0.355611577628;
    msg.y = 0.477855620725;
    msg.z = 0.437232289074;
    msg.z_units = 1U;

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
    msg.setTimeStamp(0.518795585284);
    msg.setSource(15712U);
    msg.setSourceEntity(216U);
    msg.setDestination(25195U);
    msg.setDestinationEntity(219U);
    msg.system = 31813U;
    msg.duration = 5610U;
    msg.speed = 0.986115415024;
    msg.speed_units = 58U;
    msg.x = 0.49020101742;
    msg.y = 0.412715812384;
    msg.z = 0.93406799182;
    msg.z_units = 106U;

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
    msg.setTimeStamp(0.684557002031);
    msg.setSource(30371U);
    msg.setSourceEntity(68U);
    msg.setDestination(6766U);
    msg.setDestinationEntity(96U);
    msg.system = 3127U;
    msg.duration = 2694U;
    msg.speed = 0.806988644505;
    msg.speed_units = 64U;
    msg.x = 0.912490341677;
    msg.y = 0.0105786023065;
    msg.z = 0.914571295666;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.627547856754);
    msg.setSource(44907U);
    msg.setSourceEntity(48U);
    msg.setDestination(35175U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.452485418036;
    msg.lon = 0.221106510797;
    msg.speed = 0.965378008134;
    msg.speed_units = 45U;
    msg.duration = 56101U;
    msg.sys_a = 31609U;
    msg.sys_b = 44278U;
    msg.move_threshold = 0.977751052398;

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
    msg.setTimeStamp(0.857681252928);
    msg.setSource(6957U);
    msg.setSourceEntity(32U);
    msg.setDestination(11716U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.795820004463;
    msg.lon = 0.485271721979;
    msg.speed = 0.770332976396;
    msg.speed_units = 115U;
    msg.duration = 999U;
    msg.sys_a = 57013U;
    msg.sys_b = 54027U;
    msg.move_threshold = 0.691713686004;

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
    msg.setTimeStamp(0.349809967078);
    msg.setSource(28613U);
    msg.setSourceEntity(128U);
    msg.setDestination(26441U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.0786625701868;
    msg.lon = 0.321391859358;
    msg.speed = 0.897424056168;
    msg.speed_units = 204U;
    msg.duration = 63478U;
    msg.sys_a = 56532U;
    msg.sys_b = 58500U;
    msg.move_threshold = 0.503544535893;

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
    msg.setTimeStamp(0.692107162422);
    msg.setSource(30881U);
    msg.setSourceEntity(93U);
    msg.setDestination(59157U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.604007711879;
    msg.lon = 0.712236146932;
    msg.z = 0.00863955840798;
    msg.z_units = 191U;
    msg.speed = 0.297785090756;
    msg.speed_units = 180U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.215650329519;
    tmp_msg_0.lon = 0.819877642431;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WPIOTJHFTXSGQBESBFJBZZJXJXUWWTCHGELMYVYXDVOCGDZZBLBUYAUJGAIQDPLRWWQILHVLLZHXMWFOTNDNWNQPMOPMLJKOYRDBYKYKNAVXKZAKNERMYOIALTOGTSGERJLRIUKCYACDKPTXQLJXRBFGNSVUAKSFTTWJCQPZWENPVFOIGXNWEKFNUQAHCDSBUBQHUMTVMVIRECME");

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
    msg.setTimeStamp(0.404250314834);
    msg.setSource(13170U);
    msg.setSourceEntity(177U);
    msg.setDestination(38138U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.937802163044;
    msg.lon = 0.174246194148;
    msg.z = 0.611936591295;
    msg.z_units = 192U;
    msg.speed = 0.557106388011;
    msg.speed_units = 238U;
    msg.custom.assign("CVVHRALKXLLFUMDNQZBBHWAUPYTTBTUMNLNFADKBQXEWVNWZUHACOAUWCOOFEMDTNCSTAVPCFADDIRZXZDUEDJOLEHLERLVBOQPNYQKAEBUSACXBHTUOJNDHXDZUQGMLRIFOJKKVXYQRKPGZILSNGNHJFGJSKIWQGPLTQVYRECXHBXJKIXUQFJFPPGMXWYCARFGSGJSKSOZMMKYROPHWVSC");

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
    msg.setTimeStamp(0.0858155317983);
    msg.setSource(36136U);
    msg.setSourceEntity(110U);
    msg.setDestination(37462U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.723428857409;
    msg.lon = 0.80743377581;
    msg.z = 0.128402323837;
    msg.z_units = 187U;
    msg.speed = 0.960465367728;
    msg.speed_units = 2U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.268289012371;
    tmp_msg_0.lon = 0.310797552854;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XROZXRZMKRRJBZHQQRXNUMJISWPCHIREXDOPCFUCISCYLYNFJSMAZGKAJFLPMUOYRTVZSAJORUDBXNYIBTWQDTTLFFYBGOFWEKXDADEIEHYJLHCWJEIVUOGHVLYGLOUZENBQGJCSQATXATPDPLQLEHIUMZQBGWHIDRWNWTEN");

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
    msg.setTimeStamp(0.250963713092);
    msg.setSource(7220U);
    msg.setSourceEntity(168U);
    msg.setDestination(54002U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.74667602493;
    msg.lon = 0.754004756766;

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
    msg.setTimeStamp(0.725226824814);
    msg.setSource(41758U);
    msg.setSourceEntity(188U);
    msg.setDestination(679U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.385389565595;
    msg.lon = 0.246752614809;

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
    msg.setTimeStamp(0.284356818084);
    msg.setSource(23647U);
    msg.setSourceEntity(111U);
    msg.setDestination(44128U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.408500853196;
    msg.lon = 0.916811186991;

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
    msg.setTimeStamp(0.892344546896);
    msg.setSource(35007U);
    msg.setSourceEntity(143U);
    msg.setDestination(14607U);
    msg.setDestinationEntity(66U);
    msg.timeout = 38303U;
    msg.lat = 0.35877568056;
    msg.lon = 0.63528862208;
    msg.z = 0.599111652378;
    msg.z_units = 102U;
    msg.pitch = 0.865483643373;
    msg.amplitude = 0.921446541322;
    msg.duration = 54332U;
    msg.speed = 0.950735744474;
    msg.speed_units = 141U;
    msg.radius = 0.150598033255;
    msg.direction = 64U;
    msg.custom.assign("GRCISBMIILILWRGTYYFDQKKRKONVPWCYMLTVFWQDATXSHLGJCRJVMEFZOSKCTOVABIDNPXYJARKGMXCTODURSXYAIZEEPXTOXVQWQOYKNIRQYDQBTPCBYPQIJEFFBASJKGCSOLZNFLZVHNZKGRVUGXBWZSN");

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
    msg.setTimeStamp(0.414542846765);
    msg.setSource(16336U);
    msg.setSourceEntity(0U);
    msg.setDestination(37914U);
    msg.setDestinationEntity(177U);
    msg.timeout = 32250U;
    msg.lat = 0.821302045252;
    msg.lon = 0.305168469603;
    msg.z = 0.732734217851;
    msg.z_units = 185U;
    msg.pitch = 0.591363298738;
    msg.amplitude = 0.681735422375;
    msg.duration = 35306U;
    msg.speed = 0.646626707206;
    msg.speed_units = 116U;
    msg.radius = 0.78221501676;
    msg.direction = 38U;
    msg.custom.assign("SUNIRCUUSIWYFXAFGEVZCWTWGAQBWAKQQCGLYOPMRSMACUIFVRPBXDAAQLECLSFMHIDVXWNPBDDGUOBHXMKBEPW");

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
    msg.setTimeStamp(0.789905202563);
    msg.setSource(64605U);
    msg.setSourceEntity(17U);
    msg.setDestination(12416U);
    msg.setDestinationEntity(104U);
    msg.timeout = 29494U;
    msg.lat = 0.671041206017;
    msg.lon = 0.0712046150008;
    msg.z = 0.17958079203;
    msg.z_units = 115U;
    msg.pitch = 0.721703582554;
    msg.amplitude = 0.444370880028;
    msg.duration = 18779U;
    msg.speed = 0.958969056537;
    msg.speed_units = 23U;
    msg.radius = 0.179824762716;
    msg.direction = 111U;
    msg.custom.assign("WFGPCLTHXVGMKQZRPAIUITGNLJVKMLXZCRVWDSTOJZCCTRPTLXJHVUUDWQHMIVSXDQJIWGYDMHBEGFJUQNKBXHOWLYAGPTXIEHOROVPVRFBDFIXOFGZOZZMVEUKFYPERYWZQDBNGEXMQHXFEIKOKSVQDQRGYUNHNPAAWBOFCAPRWJZKSJSALTADDYEEMSIKNNATLQMSHANPUCBVSSBMYRHUTWEBCRTMY");

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
    msg.setTimeStamp(0.657156903339);
    msg.setSource(46452U);
    msg.setSourceEntity(136U);
    msg.setDestination(4771U);
    msg.setDestinationEntity(51U);
    msg.control_src = 51886U;
    msg.control_ent = 94U;
    msg.timeout = 0.445081614576;
    msg.loiter_radius = 0.268935484146;
    msg.altitude_interval = 0.528298902734;

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
    msg.setTimeStamp(0.986055527838);
    msg.setSource(11494U);
    msg.setSourceEntity(65U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(164U);
    msg.control_src = 644U;
    msg.control_ent = 192U;
    msg.timeout = 0.593079498988;
    msg.loiter_radius = 0.425958627601;
    msg.altitude_interval = 0.0288577602568;

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
    msg.setTimeStamp(0.433774209502);
    msg.setSource(15662U);
    msg.setSourceEntity(9U);
    msg.setDestination(45061U);
    msg.setDestinationEntity(106U);
    msg.control_src = 2782U;
    msg.control_ent = 183U;
    msg.timeout = 0.562407325288;
    msg.loiter_radius = 0.529562475494;
    msg.altitude_interval = 0.363944835325;

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
    msg.setTimeStamp(0.325529571277);
    msg.setSource(39172U);
    msg.setSourceEntity(41U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(248U);
    msg.flags = 95U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.694845613358;
    tmp_msg_0.speed_units = 246U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.863913366661;
    tmp_msg_1.z_units = 111U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.420472835428;
    msg.lon = 0.294465640264;

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
    msg.setTimeStamp(0.179482396598);
    msg.setSource(62389U);
    msg.setSourceEntity(191U);
    msg.setDestination(26829U);
    msg.setDestinationEntity(118U);
    msg.flags = 145U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.874230057152;
    tmp_msg_0.speed_units = 173U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.742304050161;
    tmp_msg_1.z_units = 121U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.793085344074;
    msg.lon = 0.965148415354;

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
    msg.setTimeStamp(0.21169420121);
    msg.setSource(60611U);
    msg.setSourceEntity(101U);
    msg.setDestination(14277U);
    msg.setDestinationEntity(152U);
    msg.flags = 252U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.597756322228;
    tmp_msg_0.speed_units = 219U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.884564351329;
    tmp_msg_1.z_units = 100U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.297610115339;
    msg.lon = 0.881157062155;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.877259209447);
    msg.setSource(11344U);
    msg.setSourceEntity(118U);
    msg.setDestination(61218U);
    msg.setDestinationEntity(194U);
    msg.op_mode = 94U;
    msg.error_count = 171U;
    msg.error_ents.assign("UWEVSRIAXHRHIJMXQQHCPBZOLJFNTAULOVDGHYUKONXNQVPTMWYTYADGRBJUSHZBYRHFJJTWCZCUUUCJBFZKTEEGRSDSXUFJICMAAKALBMNRWPZFXSELZKTNWHSPATKLDGMBXFFCDQCIPBTNVQKPRXCEGPEFKDHNWWLSECSWOBYVMQEBGNAHYIMGYOGWDNXLSIIXFGVQMMVVPAER");
    msg.maneuver_type = 58178U;
    msg.maneuver_stime = 0.161991811399;
    msg.maneuver_eta = 33744U;
    msg.control_loops = 2528819228U;
    msg.flags = 53U;
    msg.last_error.assign("PCUXBOXRGGRONCPTZSGN");
    msg.last_error_time = 0.399349155959;

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
    msg.setTimeStamp(0.400238247141);
    msg.setSource(46690U);
    msg.setSourceEntity(194U);
    msg.setDestination(14803U);
    msg.setDestinationEntity(161U);
    msg.op_mode = 205U;
    msg.error_count = 5U;
    msg.error_ents.assign("ZHWNCBZSFGTXQXOWLDPWRVTSMWBMDQHJSMHJZOWLHKUCVKEOLGLGGCHFBVNPVBYTDJTCPCAYVPKAXJBMXHTRZLFXDNASAFWXTZCEMBGIQUFHRPKCAGUXAFHMEOVFNLRYDQPQAUBJGZRMGUCXIUZYBVNEIEULULPPVZQNFWJBQR");
    msg.maneuver_type = 1165U;
    msg.maneuver_stime = 0.10415826626;
    msg.maneuver_eta = 2559U;
    msg.control_loops = 2182807122U;
    msg.flags = 53U;
    msg.last_error.assign("ARVBEBPTHJXUGKIFWOBSPNUIMVFVMWQLGGDSNLMJTCFRAZLXHCDSRCPWVLPOHMYHXRIRYUELHNPWQGQNZFJQPCUYWQSEERPAUMVVTDCQXJVXZLINIZEURBIKYMZVOBIRIQTDWFWFYHJGNSOUQQWKLNDOPYKTXLKFDKKJCETZTGPABKOCFKYOXGGBSIDCEZPEJ");
    msg.last_error_time = 0.492643090559;

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
    msg.setTimeStamp(0.136054900721);
    msg.setSource(55949U);
    msg.setSourceEntity(178U);
    msg.setDestination(20061U);
    msg.setDestinationEntity(46U);
    msg.op_mode = 14U;
    msg.error_count = 175U;
    msg.error_ents.assign("NSQWCQHWSRPYPPLYFMGBTBTKYYYKLAJMULYUFDIEJRWEVZSZVIMQGXWLALFEYRN");
    msg.maneuver_type = 56590U;
    msg.maneuver_stime = 0.586451977359;
    msg.maneuver_eta = 37792U;
    msg.control_loops = 3183183819U;
    msg.flags = 53U;
    msg.last_error.assign("VDYYQNDUCIMAJCWRNTMUTQXPSTSDVAZFXQIRWXVWPKOLXBUKNTGGJXGNKJROHVMSXDWAVBWPZAQNQCWFBSNQWTREHEEVSGUICTUAX");
    msg.last_error_time = 0.108380125884;

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
    msg.setTimeStamp(0.4689049704);
    msg.setSource(17622U);
    msg.setSourceEntity(30U);
    msg.setDestination(44262U);
    msg.setDestinationEntity(221U);
    msg.type = 230U;
    msg.request_id = 14802U;
    msg.command = 132U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.393052057771;
    tmp_tmp_msg_0_0.speed_units = 113U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 12745U;
    tmp_msg_0.custom.assign("YKMXEZPPXXTZVGGBYPSQCUBBQAYUFCQXNUTIPLYYSZLEJEWWRBOHXJIADIGFXYEKCIVUQYKPHGRVQEZSMTNMFOTGNQQNL");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("CALDPFIRGABKNYYISJQMTARKCFDTAPIDOJWBZFFYHAFRLBXXVZVWTEDKTQXLKSOKHECQIJBBBLWBRJGUTKEQUDWMYYMGHYASNEQSOTOAGXDNUJMSXJPAUWFREOZWNZTYHLFPHXVHGHCOEGSRGIMQGFCZXKPLJUIHNIEVWYUFPCUZIXVDQKSMFIZYNMPNPOVCJVPEYBCKBUSZDVMLGURDQLRQGUKBXHTVNEJTHWCODLAIQ");

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
    msg.setTimeStamp(0.256509257816);
    msg.setSource(27896U);
    msg.setSourceEntity(124U);
    msg.setDestination(30584U);
    msg.setDestinationEntity(199U);
    msg.type = 181U;
    msg.request_id = 16092U;
    msg.command = 146U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 57033U;
    tmp_msg_0.lat = 0.198416183532;
    tmp_msg_0.lon = 0.805533117339;
    tmp_msg_0.z = 0.520978074477;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.speed = 0.905335365518;
    tmp_msg_0.speed_units = 197U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.623139476766;
    tmp_tmp_msg_0_0.y = 0.152521309185;
    tmp_tmp_msg_0_0.z = 0.849793909332;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SHEFMBEPLVSPHSNZLZVDUMINJZRGHTDACADIKCTJCBTBOFIAHFRYQARCQDMPXYDWGHQSYGMARLWLJONAAARMKGNFPHBOONTPEECMSVJVFQACBHLGRTCDOYWKREGYKWUUUWPS");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("ILHGNNNURFSKHJUNUDJQNLRVEVXGCLFAWQBHOJIEMMIDDPVRAXXFBOXJILZYFQXQPOYYBHRMTCYOS");

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
    msg.setTimeStamp(0.715520960926);
    msg.setSource(49578U);
    msg.setSourceEntity(27U);
    msg.setDestination(12671U);
    msg.setDestinationEntity(139U);
    msg.type = 134U;
    msg.request_id = 9529U;
    msg.command = 213U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.724042304106;
    tmp_msg_0.lon = 0.148700049836;
    tmp_msg_0.z = 0.62578011968;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.speed = 0.63783731381;
    tmp_msg_0.speed_units = 240U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 46988U;
    tmp_tmp_msg_0_0.off_x = 0.984128698338;
    tmp_tmp_msg_0_0.off_y = 0.495846332113;
    tmp_tmp_msg_0_0.off_z = 0.642322893928;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.0424348916827;
    tmp_msg_0.custom.assign("XLSKBZTKHDCOFJQZDUHUNTJCOSJEGANSLXROBRYYNXCRAINICCLTHUEHMDIFYAUGMZAUMCTJNQRVQTQX");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("JYFDCWPLRCHSRHUXZFPHUOOEKIAGNBWTURZZEMGBFDUMCBRZCIYTNIDYWKPKWADKXCAEOBNPRQRWLAZIXLWXTDYVDROMNZGAYVJPXASAMJEQGKEQIYMHUQWIPNLOJIJEFZIQNOBFTLLFBUPHCFPRJWCFEVEDDNTT");

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
    msg.setTimeStamp(0.0353753802703);
    msg.setSource(19406U);
    msg.setSourceEntity(96U);
    msg.setDestination(47045U);
    msg.setDestinationEntity(147U);
    msg.command = 167U;
    msg.entities.assign("EYJEHZWSBRDQOMCUYCLLWAOWYNPNROSNOUGPDUHDIPTSAMYQLJHZJQEFKBIVDXGJDXOTSPUISRRLGMELVVSUFKQJQRUOAEPXXBVSFZYENTLHNCIKMGALHPVMACKTGZJYGCFZOUAMBAMWCUZCVJJGNBVWFNLIPIJMDZZTYAVWHBEEDXUNCXBPHXJORMWLISXZWQHHYSHTABXEMIRSIGWKODTKNZFBQUFCRYQPVLPQCFT");

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
    msg.setTimeStamp(0.0584511690226);
    msg.setSource(18U);
    msg.setSourceEntity(99U);
    msg.setDestination(59022U);
    msg.setDestinationEntity(122U);
    msg.command = 156U;
    msg.entities.assign("KJPMHOVRPCAROGFLIGNOFWHAGMEBEWAXGTPJEQIFBFWOSVMZCPEWYGWQLDJFUDDSQJTZBSETQMVFZMAFIRODMXACDRPKYESGJRXNDEQLDGAUZHLAUQIJ");

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
    msg.setTimeStamp(0.94759296215);
    msg.setSource(12262U);
    msg.setSourceEntity(169U);
    msg.setDestination(4758U);
    msg.setDestinationEntity(100U);
    msg.command = 241U;
    msg.entities.assign("QAULINWVKGUDXRKKJYCYLSFHWLCMFNIAMXUKHWGQRRPJRBBBJMADPZEIJWZVLODNOBSYNWZOQUJDBHTYMVCHWJABOCKOPJELMIMSXCAYZNIKDEUQEMTVSJTTUSYTUPFVZHTUDZFBPGTQZYRSCCCGVTESCLIHXLEIYQNAOHMOQVFPXSHQIWLKBW");

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
    msg.setTimeStamp(0.858420532159);
    msg.setSource(50116U);
    msg.setSourceEntity(169U);
    msg.setDestination(9932U);
    msg.setDestinationEntity(107U);
    msg.mcount = 237U;
    msg.mnames.assign("BDSUADSGOGLFQHYYTODOPDNEXMDWRYTNWRAJRFYQCOWACGPAGJEHPFAGXXZDINMYTWIIHRBVSTRYEQCTIFFDVZRTMUNBTNPIIIGSCCKQKYHMBQXGZZXUJXORQHXIXONOGPLFZIFOLLLMNKKJOQEMWJTENKLMZVUJDQAQUPQVUMVSLKVRVERKZVEDAFKEPAJMHPBWLNWUCCJGHPBDWSC");
    msg.ecount = 20U;
    msg.enames.assign("EELEKJQPCSDLGIXSRGMDAFZKVQYZQXMFPOOEHQPLLAUKBUMDINOJTSAAMNEKMHTPOXXSEZPHJKMAQLANYZWGGXMGNJAXCHGBCLCWWSMHTPHZPFRVQWYXVCVVYBIIYTANDLKJTOMUTPTSISCNXLWLIDODFFODWHOIFUBFVBWXVEEMUETBZRRGYUHNHIRWDWRUKHVQYNLUJIZQJFXGDJPGAFYQZKSVZSSCFCOUDARBNRWTJPKZRNQVUIE");
    msg.ccount = 63U;
    msg.cnames.assign("UXMTURHZNQWGPFSRQVDIZTOQMOMWSOTOKGIKMBFSQBRFMJIETERZPNXLHMEIKPMGESOZGAOIQIHYSZJPYYBLMKBEUKLYFLEWKIHVSIDXFPCMTCXPBGJLQUCREVDUFNWMSJFQDXVSHWQXHJBOXVYWVCJGCADRDTQKORAHYALUPLZRDS");
    msg.last_error.assign("MUCLBZALRDNEYQNMVCJUWMQKFALNOSWWWSYKLUPYADZVPWVMCBAJJHZIVDUUSXXFFNZSGBKGPMDLQGJOBSGOUXQHSHPELZYRNFMRCMAJHTNXILXTZGPAVZFITFRHBYXZCGRQBVIJGQEIAMZYPICHRQUDYBOWFEAEPSVSWOTOPDPJMBVGOPNQXECEXACSWKRARRZJTTLGKNHCFJOXIIKLHEGWJWIVDNROIFBOTMYTSHTNXUDEUEYBY");
    msg.last_error_time = 0.344652458303;

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
    msg.setTimeStamp(0.0792823148031);
    msg.setSource(5383U);
    msg.setSourceEntity(30U);
    msg.setDestination(50056U);
    msg.setDestinationEntity(61U);
    msg.mcount = 15U;
    msg.mnames.assign("IKZIEJGPFIWJZQYDOGVXLQTENLSGLJHEHNFMWBAQMASJCWTHOBXUTROPMMQEKKZCBXORNPCWDCNYZQXSKGVURFPNQAKXPNRZTCOFSUMUXPVLMQUPUSJLJYMAGKNYIAVDTDXYXCOVUCIYDGHSLELUBWFYWXTDEWYTEWLBUFRVGTKRBJKZCPMFOOUXCWZGEZNSZILHFPNGRHYPFHSAQWLTHBAJITKQSVORBBKFBOIH");
    msg.ecount = 40U;
    msg.enames.assign("KMDFQSMCMJTGKVRDOMRHLPBSPNQRZKPERZVYXZSBAYDTZIMWAQWFMOSNUOAXEROEXCYPXJXIGQWILHUDSLN");
    msg.ccount = 209U;
    msg.cnames.assign("BEKEIBUTQVSKRJMSKMHKXCGBUIZVXUAKSPCDHOULPXSTEBGKSORGZWQNNHQXYSWUGIPGBENUSEFOPYWOPMYVRIDWRFWWYFIEBLREVDZTAURLHMAEBMXFMQDZUWAPMMNLGIHLRUTFTXNWSXJAAAXOHHIHZBSJJYCCXZPGEDO");
    msg.last_error.assign("AVXHCHXGSJCWQPDCSZEJPMANHPGUPOXOYRCTRZBWMFCIHONXUGXCEPBIDTNQODEURFFDYUHVVQZHLKKBFORQYOBWGFMJIEUKTILOLWGWXZ");
    msg.last_error_time = 0.575908397979;

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
    msg.setTimeStamp(0.0361975616739);
    msg.setSource(61246U);
    msg.setSourceEntity(112U);
    msg.setDestination(55523U);
    msg.setDestinationEntity(11U);
    msg.mcount = 180U;
    msg.mnames.assign("SBQSAEWZGYYHSAHOHMNOXBAYBEULKGJWBYTAXVNTKKNFKLKGODUDMMFPVEASXCLYRZEUJICDESLWXWPWQAPHUSDHIJJHLXQZRXDOENQERRTMBVEUNARJFDYGIJTDRAIKFRJQACOSPRBJNYCZFBTXOQVDZ");
    msg.ecount = 180U;
    msg.enames.assign("LWNQAOULXKAYOBWQYWVGSJQUAVHGUTJPKZXRGMMOZKZ");
    msg.ccount = 201U;
    msg.cnames.assign("LHDITSGYLVTKGLPLXKXJBITKWRJVTQJARURWSKEEITTCYQIRSGMTQWDAKOIAQLSOXXMATZHICVQTNUUBESNKUXXMHDCWVDHXWVCDYLYUKRMPGLCPJSFZSQWYGOGOFSONBDYIVBUWRGRHCOUQPPXKHSCMZMBHBCBJSWEZZPVPBDFQAYZYGHRAXCQROQNWOJ");
    msg.last_error.assign("KTNMGZHHTGPBJRUCZC");
    msg.last_error_time = 0.034598216531;

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
    msg.setTimeStamp(0.442449274671);
    msg.setSource(61649U);
    msg.setSourceEntity(49U);
    msg.setDestination(7993U);
    msg.setDestinationEntity(86U);
    msg.mask = 217U;
    msg.max_depth = 0.222778181833;
    msg.min_altitude = 0.363346875461;
    msg.max_altitude = 0.829862997221;
    msg.min_speed = 0.822854826543;
    msg.max_speed = 0.431473093513;
    msg.max_vrate = 0.318923760613;
    msg.lat = 0.228806090754;
    msg.lon = 0.33417866404;
    msg.orientation = 0.735700302562;
    msg.width = 0.527092786521;
    msg.length = 0.0505460128555;

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
    msg.setTimeStamp(0.00548714980842);
    msg.setSource(20716U);
    msg.setSourceEntity(112U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(146U);
    msg.mask = 0U;
    msg.max_depth = 0.33425441423;
    msg.min_altitude = 0.187218373825;
    msg.max_altitude = 0.663515876229;
    msg.min_speed = 0.221741371582;
    msg.max_speed = 0.928906982392;
    msg.max_vrate = 0.0488703681619;
    msg.lat = 0.137519909771;
    msg.lon = 0.104871801272;
    msg.orientation = 0.355103703142;
    msg.width = 0.270874796574;
    msg.length = 0.0617266256934;

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
    msg.setTimeStamp(0.0778334488122);
    msg.setSource(40926U);
    msg.setSourceEntity(73U);
    msg.setDestination(19495U);
    msg.setDestinationEntity(97U);
    msg.mask = 22U;
    msg.max_depth = 0.114066787178;
    msg.min_altitude = 0.116651469048;
    msg.max_altitude = 0.275011114214;
    msg.min_speed = 0.515908910243;
    msg.max_speed = 0.612576150459;
    msg.max_vrate = 0.078486960466;
    msg.lat = 0.591282772575;
    msg.lon = 0.399593657408;
    msg.orientation = 0.426642426624;
    msg.width = 0.536711146457;
    msg.length = 0.859749902505;

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
    msg.setTimeStamp(0.334058682483);
    msg.setSource(26456U);
    msg.setSourceEntity(38U);
    msg.setDestination(39147U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.205068802724);
    msg.setSource(49978U);
    msg.setSourceEntity(85U);
    msg.setDestination(64758U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.805048567434);
    msg.setSource(8995U);
    msg.setSourceEntity(224U);
    msg.setDestination(49254U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.0999529105523);
    msg.setSource(56494U);
    msg.setSourceEntity(29U);
    msg.setDestination(38465U);
    msg.setDestinationEntity(10U);
    msg.duration = 19731U;

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
    msg.setTimeStamp(0.020258406607);
    msg.setSource(17706U);
    msg.setSourceEntity(87U);
    msg.setDestination(7665U);
    msg.setDestinationEntity(101U);
    msg.duration = 22121U;

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
    msg.setTimeStamp(0.279328752126);
    msg.setSource(24817U);
    msg.setSourceEntity(207U);
    msg.setDestination(54327U);
    msg.setDestinationEntity(245U);
    msg.duration = 6005U;

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
    msg.setTimeStamp(0.270538124939);
    msg.setSource(49641U);
    msg.setSourceEntity(217U);
    msg.setDestination(29641U);
    msg.setDestinationEntity(10U);
    msg.enable = 144U;
    msg.mask = 3545718779U;

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
    msg.setTimeStamp(0.34705711258);
    msg.setSource(2688U);
    msg.setSourceEntity(8U);
    msg.setDestination(16988U);
    msg.setDestinationEntity(151U);
    msg.enable = 42U;
    msg.mask = 921833839U;

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
    msg.setTimeStamp(0.979335146143);
    msg.setSource(22021U);
    msg.setSourceEntity(216U);
    msg.setDestination(35737U);
    msg.setDestinationEntity(67U);
    msg.enable = 96U;
    msg.mask = 2633873304U;

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
    msg.setTimeStamp(0.633571634335);
    msg.setSource(53867U);
    msg.setSourceEntity(12U);
    msg.setDestination(48713U);
    msg.setDestinationEntity(48U);
    msg.medium = 31U;

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
    msg.setTimeStamp(0.852815684241);
    msg.setSource(49815U);
    msg.setSourceEntity(60U);
    msg.setDestination(15200U);
    msg.setDestinationEntity(31U);
    msg.medium = 103U;

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
    msg.setTimeStamp(0.381015034702);
    msg.setSource(60094U);
    msg.setSourceEntity(85U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(61U);
    msg.medium = 254U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.782355627651);
    msg.setSource(11984U);
    msg.setSourceEntity(206U);
    msg.setDestination(19179U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.206539450381);
    msg.setSource(26866U);
    msg.setSourceEntity(223U);
    msg.setDestination(56545U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.106623624183);
    msg.setSource(34101U);
    msg.setSourceEntity(33U);
    msg.setDestination(7032U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.248223108993);
    msg.setSource(12348U);
    msg.setSourceEntity(34U);
    msg.setDestination(37903U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("WSPLKCTHGNOQJGAQVFBECMAACCAQMHZTTXHGVYXXGGLIHZCNNPHHOSEOAKXZQURRKIESOZSWJQBEULHLRJYDGDZDWHKTJDGOUICXDJFUXMSVNIIHONLYQNNGJTTBYQAVIBPZWILFOIFVTMBQVURVAXSJSFBSNVEYAMYPWYBRMPACRKEVQPBFLYPBOFVUDRRJKUWLDKNPSNGFC");
    msg.description.assign("BLWEIPRTCCOJKQHVPUYQRCMTTWWBAEFRLXVZIJYOSNJUOSFASTGRSEEWDHNWCXBFYDIXWNKMQGTHOVOURUMEGXSIIDCDGLPDKJCDKITRXIJJMWVMJGMESYIQFQEPUFCJLUAURNABPFKKZNKBHJLBMRCPDWXBBXBMZGFRVDZHSDYLQVXZZIEDY");
    msg.vnamespace.assign("QMWXMWENGL");
    msg.start_man_id.assign("WTPPZRSWZPJWLHHXARDOMZMYTAMFCJWTSXVHGWKIEILVDIVOXBQJLOJCIESJXPKYXKSFUVPCLGADWSGYMNWTFNSNLVITQCECYTNARYFSQVEEDPNRTBGDMEJLMPHGCFCBGXPNBQYEQHBHCMKYXHJVWA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XKPOJYCPYXWAJMV");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 10097U;
    tmp_tmp_msg_0_0.lat = 0.729022228843;
    tmp_tmp_msg_0_0.lon = 0.645780231409;
    tmp_tmp_msg_0_0.z = 0.73386268369;
    tmp_tmp_msg_0_0.z_units = 228U;
    tmp_tmp_msg_0_0.pitch = 0.0398685088385;
    tmp_tmp_msg_0_0.amplitude = 0.71788932279;
    tmp_tmp_msg_0_0.duration = 12410U;
    tmp_tmp_msg_0_0.speed = 0.222462832419;
    tmp_tmp_msg_0_0.speed_units = 196U;
    tmp_tmp_msg_0_0.radius = 0.321683183773;
    tmp_tmp_msg_0_0.direction = 38U;
    tmp_tmp_msg_0_0.custom.assign("PUXJIWBGSTNHMGDNAIFGWPISKMWHFQULOLISDYJRZQZGHMQZXBTBWLFIBNCBDPZWAXPPMCETOYPIXAWQMURRDVIHZTCQJRESRLNWFQHGYAVYJZTPTTMRCEEZSSJNSYLLLOUZJKHVXVJKWFDDGGYSDXNYCFPKMBBJDNCIJPMI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EulerAngles tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.0917770982705;
    tmp_tmp_msg_0_1.phi = 0.324385242012;
    tmp_tmp_msg_0_1.theta = 0.407712711089;
    tmp_tmp_msg_0_1.psi = 0.764756460226;
    tmp_tmp_msg_0_1.psi_magnetic = 0.0363851486214;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DvlRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 147U;
    tmp_tmp_msg_0_2.reason = 68U;
    tmp_tmp_msg_0_2.value = 0.676774250651;
    tmp_tmp_msg_0_2.timestep = 0.259143027256;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QOEEWRITAVLXSIGICPQOACRUZESJLUSPF");
    tmp_msg_1.dest_man.assign("MFVRQZNGYHSYCZLAUAHQPASEELEDKMIMOPDIWKGGPNJDLVGBUPDGURNMQYQQAXUFXKFQRHFILNSEXOBDBCRSUJAJJBHYSKUJMCVCPRHEOPTBDLDZQHPWNRWCIHEWNCWEXGGATUZCXDVTNWYLSFJUKMMXEYODTRXHIZOFZTOQVVEOKVCRLCTF");
    tmp_msg_1.conditions.assign("NUDPFSJDORTCTYSARSCWKJOTMMFOYHIHFEEXLPRT");
    msg.transitions.push_back(tmp_msg_1);
    IMC::DepthOffset tmp_msg_2;
    tmp_msg_2.value = 0.682119940891;
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
    msg.setTimeStamp(0.650798317382);
    msg.setSource(36098U);
    msg.setSourceEntity(86U);
    msg.setDestination(57369U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("VIFKQPCGRRXBQSUCABPLWPMDTZAHRARSFKKLTYDQYISSJLCTEVSJWYURZQECJHDPZBGWLGFMZAMNGCUPJVXDHNDHXPWJKTWRMWPKTIAGVTRCYVDEBYQ");
    msg.description.assign("OYUEVVKYIVYSQBNASKOQDIFVZCMEMJLHAIJCXHOPUTWGWIHNFNCASRQLMBCMQXFQGW");
    msg.vnamespace.assign("KKFMAYLQJSMGWNHFHAYEGPISWRUJZTPBGDURSKZPGGMUEXHJZIRBEPVAQQHLXCNACDXCUBRXKSCMCWGDIIVGLACFOVLRNONESCMQWQVECCYDMGTIOUWJITINUYQZDTDUXTKPPSFWYUJQRAVNJBOLLGNBIVFSBUFZEDZIBIQOVHRLXKHHOBOVQSRNZVYDUPXOCYSMTMXEGAEEKAFAZFPTZYORXRWMLKTTPKYJHJZLWFYSNWMEQFLDTHOKNHBBW");
    msg.start_man_id.assign("DQNDWFHQFSFZTSSVJKSGIRWPLSEEBOPOYBUTRTWQUWXAYCNABAZPPNPWLJDIHUQABXWQUVHLCVSMZNPUNEVLRSIDUIHOUQSDKFYWADLEKHCLJFPFJQCNDFTJGLKYIBWCMTLJUSJXCOZGIXJYMNJMYKMIWKUMXDQLPMXNTYPAIRNZF");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MWSVMTATCBRDZWJVXYBOHDSYLOOJNTPLNDXJAOVFAHBOGZDFTORRQGHTAEURUGNMUGOBAIRHSZZHXZXVXKDCKPSAAKFIKJQFYBDKPIPJCMXSMCEIVYLPLCPZIAKIZEWIBIQTZUWMTVEYLNNRFLSNFCQQCDSYRKLAUZELTQHQVOHGJNNNYUWAFSRXBZXEUQPUJEHXGYFLMKYPTGLVSWUJGQFDMHQMXJGBWHUWOKCDPMERGRFIKIPDWJEOCES");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 9738U;
    tmp_tmp_msg_0_0.lat = 0.0347789538587;
    tmp_tmp_msg_0_0.lon = 0.834280428412;
    tmp_tmp_msg_0_0.z = 0.582229981218;
    tmp_tmp_msg_0_0.z_units = 41U;
    tmp_tmp_msg_0_0.duration = 1725U;
    tmp_tmp_msg_0_0.speed = 0.451043579028;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_tmp_msg_0_0.type = 173U;
    tmp_tmp_msg_0_0.radius = 0.358171366281;
    tmp_tmp_msg_0_0.length = 0.638811260972;
    tmp_tmp_msg_0_0.bearing = 0.176683052014;
    tmp_tmp_msg_0_0.direction = 249U;
    tmp_tmp_msg_0_0.custom.assign("EMFFDKWEBXRGZXBVUAVEZMTVIWJFFFVESJJMQCXHIKORPGQCGAQJDWEUEVTYEV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("QAQIVRFXKXTKMKHNBVAOGUOUGUTCTMLSRBRWXCVUSXSAOMAPWJMKDGBOFIIJEQGDEJIYBJVSFQQELCXQXMRAPWCXGLPTYTYIKGUKSTHWVE");
    tmp_msg_1.dest_man.assign("ICZATOCGKSUITXTFCIDGXBDLVHATVGKBAYPRHEJDBHQRQAPRKRVXZSFAZTTNVHJNPOGMWCJGZYSYNFWRXVWLUMDZVSJVZIDIYGCPMZKIEDADEGSMXLSUUAOFBUHNOAMFSUKUOXPLCWNKCAIMXHAZOBBCJQFYTRWGVTSKELBWKXIGOINFJOROTFQQMHYEPMYOCRRLWXLHVKRNDLWZQB");
    tmp_msg_1.conditions.assign("ZLPAHEZQSPXFGMDDPMWUKSFRRVERYLUPCWMBAHVDYWSHEAJATGYOETVGDCWUPRRDMEAVFIXGMSVULFJESLQIUIYNKNCKUHNNFMQRDJVQJHBWQSZPTZWLYNTPWNKCRTAIJBBNOIEYIQFVDQ");
    IMC::GroundVelocity tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.validity = 89U;
    tmp_tmp_msg_1_0.x = 0.142828575301;
    tmp_tmp_msg_1_0.y = 0.825398713217;
    tmp_tmp_msg_1_0.z = 0.932809640627;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SetControlSurfaceDeflection tmp_msg_2;
    tmp_msg_2.id = 228U;
    tmp_msg_2.angle = 0.303351939838;
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
    msg.setTimeStamp(0.536791130688);
    msg.setSource(45375U);
    msg.setSourceEntity(30U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("XMEJXTPWCHASRIWYJIHKXOLCICBQLGBOZKJMOBFCHMZFUOYJXTQWVHJEJTRUFNMYXEZMTBUBWCEAPQNYQBYPVNNXFESPHYTFXG");
    msg.description.assign("EWGYNPHOICKPYERZMFHDJNUJQREOIUWKOMHTZSJIBDPUKRHVRBGPCEXYIOATOXLWTVGEJZPZGTXHWWLTUMCILBFPLZQGEDZKPBQSJIBVHBEXMIRNSUXACALQEWJSRWNUCUOVKMF");
    msg.vnamespace.assign("UGRYQRNLYNUBUPGMDKMZTDRWQKSKAMIBCDDUKKWHZYHFGGPKPCAVXICQTTZEJITCHNTYJYXFFOJOWORBMPQIBRWNCWUVWRAHHDDFPXGJGQXEFOUZCNUSXSZJLXLFYTOKNVOTJJIIRIAHFXMMFREDEUSCVAMDEZCEQPOTPYRNEWQQLAKKUPJBLYWLZTMHOBOVYGECIAMWPSVVXCRNUQVSSGHOSADSJXLIZMGNXZNLLBGHEPFFLQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CBDYAKXUSFACWMJJRZTOGVNKMNSYVCWOHXHTVOKQYUERZQBQVHXRGFYIRZDKLBNUXMDETYTAEVHEULBYMTGFAWGSINRZOMIOFBJJOXDCAAJJZXHZGGHXFQHYM");
    tmp_msg_0.value.assign("IQSZHJBWBYKCJHLCXISNPUEDBNPI");
    tmp_msg_0.type = 133U;
    tmp_msg_0.access = 16U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JAKEFSWCQGSSNLIPETVIJLAAXTBDMUHKGKHEKRMQVEOJBWOKIGSQTRFTEXUMXZXBEJWYHQYPKDLJDBTOIJJAVZKDPFAUAMZRFHLGUGAVFDKFPGHZLDQWISRBPGXFPZTTHENONOPDBIZYYSNVRUNCCTCSOZELZAWFLILESJNMUOFHXQMCUKNQBYAIDCUTQPXCMBMYVJBTOXYGDWKSYEWRCNXRBMHZNV");
    IMC::PlanDB tmp_msg_1;
    tmp_msg_1.type = 196U;
    tmp_msg_1.op = 123U;
    tmp_msg_1.request_id = 41221U;
    tmp_msg_1.plan_id.assign("NILRHFAMHJJILSPMQOBOTWVNVGAUFMZGAIAZFMGVDOWKZXXRHCVCMQQEETYIPGNJEHOIHYGXYUBTHSUCPIFUFTZYWYTJLGWTDQZPIUGCVXKFTCRRLDFVTSPODBQONJPDWMJXDVDNXWSHWRDEDCKJBFCKLLJPWGQMEVYUSXMPPNAQVAIKBRXNMOTSKEEZZHENFREULXAJWGXACYGINBAQVZSZEIBLPWYLBQHBTFRKYM");
    IMC::ButtonEvent tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.button = 30U;
    tmp_tmp_msg_1_0.value = 88U;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("FOMLSCMFXCEQNTSPFRJVDUDSEMAIDQWRZQVYXHVXKIRCKFOSLKOZZENADNRUNZCVJCZGFUAGGJHPDOJSRYBGKMUMZUCFVJCRHTLNIBABXZKBTOYDIQYOTLHBTIQXGZMEAVULBMNWOXQBNCRVTWEANWIXHXRLJIGPRLJUDJHHYEFQRESKBESWWGJXUOQIVPNLKPBSSLYSNIYAFVOIFYCPFWMKWDGMKWHQ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EulerAngles tmp_msg_2;
    tmp_msg_2.time = 0.537136126785;
    tmp_msg_2.phi = 0.0772100742651;
    tmp_msg_2.theta = 0.891315027595;
    tmp_msg_2.psi = 0.436566549406;
    tmp_msg_2.psi_magnetic = 0.0401883379811;
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
    msg.setTimeStamp(0.209353464844);
    msg.setSource(17396U);
    msg.setSourceEntity(247U);
    msg.setDestination(20198U);
    msg.setDestinationEntity(198U);
    msg.maneuver_id.assign("SCIYMVYPJNBHPPC");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 50265U;
    tmp_msg_0.lat = 0.47950589541;
    tmp_msg_0.lon = 0.853982216631;
    tmp_msg_0.z = 0.551831037635;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.pitch = 0.819152323852;
    tmp_msg_0.amplitude = 0.0935073279101;
    tmp_msg_0.duration = 22389U;
    tmp_msg_0.speed = 0.54544078026;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.radius = 0.828815391306;
    tmp_msg_0.direction = 4U;
    tmp_msg_0.custom.assign("ILALFMXKWTMNVOKMXSTQJMPNCIOEGIAGEKRWFGKYUWQQWYSRNLDYKNSHLQPABLUHLYZULCSQNEMHLIARMIEVKFBEACYCPKPQIBXNJPYRUUGCTXZVWVXNZDTCDBHIOTXAHFLXDFRFZRGILWVHVR");
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
    msg.setTimeStamp(0.975409515285);
    msg.setSource(44286U);
    msg.setSourceEntity(240U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(86U);
    msg.maneuver_id.assign("DAFEHWQTEYFPYQOZPVZWUFDZQELDUKNPPMJCZTCWODISVOAUCONQHTPAYEJIYYBIUOSZPQQDLXFZWIFYILQEYGLGQINKPOTZEIVXMUN");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 52713U;
    tmp_msg_0.flags = 176U;
    tmp_msg_0.lat = 0.505562078624;
    tmp_msg_0.lon = 0.368064082935;
    tmp_msg_0.start_z = 0.764772729729;
    tmp_msg_0.start_z_units = 172U;
    tmp_msg_0.end_z = 0.854941131152;
    tmp_msg_0.end_z_units = 32U;
    tmp_msg_0.radius = 0.0119758976178;
    tmp_msg_0.speed = 0.765446495731;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.custom.assign("DUPPYLYTXNCHXSPXVZRGNSQCUDZXXRJIGKTAGSLBRRCNTWMUMKJQDJOOJHEETMRAYYXTWENHWUQBLFZYHZWVTADOBLULKDCLSFFIVKJBMTIYMGVVDIIBNESZVEFSZJFPPONYOMWSBUCGPIFNGCKUAWWDXWIGIDTJAOBQXRECHQQYQCZXCJSARUEBZAMOYHFUMIPTAKD");
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
    msg.setTimeStamp(0.0065348394398);
    msg.setSource(20224U);
    msg.setSourceEntity(103U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(148U);
    msg.maneuver_id.assign("WEHIFMNQHEDTPUVJYOISHBISBEDGBSLDXHNMKJDMOISCJOLOGULXCPAHYQBVAILQSFALEZUFLWRDXKQYFFETZWOZDMSGICRXGDUMTVBCZFYPVHKEYWWNHXLWAWXUTYUFKQCINMBVLPZJPHRLVNIQZAYGTACZPJTOQESWPGZMBJIAYSZSWTVBTGDGKAVPNGOKFJWUCBNDJRYXRBNAFQK");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 5225U;
    tmp_msg_0.custom.assign("DBXKMUTNDPDMULRHBVWACXNFLBKEAHALOFGJEJPYJDIHFMUAWRJMJKEBYOCVIGHTRTZQWPUUWQEVTOEDXQISFEQVYFWVVTZAZLJSCMFHSCCLMVGSPJFVXZAONOCSIPJZOWNKUPPKTUIYDRYQGTFWGBMSWEQUXPULLGBYGBDDYTNIYRSSZOKDKQHKWETQKRBNGBPNYOBACOZLX");
    msg.data.set(tmp_msg_0);
    IMC::EmergencyControlState tmp_msg_1;
    tmp_msg_1.state = 130U;
    tmp_msg_1.plan_id.assign("YOFKTXYLPPDBMJIWCHYZDNNAVOPUMDZRHJZXBPMWHIHXNQDJ");
    tmp_msg_1.comm_level = 247U;
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
    msg.setTimeStamp(0.860299117695);
    msg.setSource(55077U);
    msg.setSourceEntity(159U);
    msg.setDestination(9402U);
    msg.setDestinationEntity(92U);
    msg.source_man.assign("TKLGSQHSLUDAVOWUNCILDUWVJYAUDOJLEBTCPNYFHJPDZOKTMLJIZAKBANAFKXUZUWPZHTZGWQMXBMUJAXEVSNWIJGKONHYKYVRBPXVDOMTKCWPGPXQNOOBWEHQSYILFNWLQZFJYIZNMFPQAXORZHCOCGSESMSTZIHYMFVNEUQGIPIRSGFIRZYPCLRMCAADBVLRTXFTBEQNTMGFQOAJXCSCFDBWIXEEDTJHELUD");
    msg.dest_man.assign("BCNCSXUFKKAMFHGRXMRFOJTFROHOWMLIYKFZVFZGFUONZWBKQDLREPXQECMWYOUAAUEVSYUCHFWAXNTTPBJFGVQHNMICEOPBZTDJVDQCXPTUSWQHNJDJXTKWGOALNOIMRPMTPRZVNBXMIJGOCDEUQCZLJVTEPRBVJKDRZIHWNZQVLDHHSZGIKCDSHPLAZN");
    msg.conditions.assign("UOBNHBJHCICGTETKAIOBLTSECJBGTURNWSRLQGHFZNP");

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
    msg.setTimeStamp(0.298350513885);
    msg.setSource(39277U);
    msg.setSourceEntity(61U);
    msg.setDestination(12320U);
    msg.setDestinationEntity(195U);
    msg.source_man.assign("OXJDEZKDWRORSRLIOKPPNTCLQGAVNYYJMHYFPQQBXQJFFFEDATHNLYZTQAWIMIZTMNMGDSWTOAWHLBJNMDGZXRQVHORPEKNTRIEZCUHCXPXYKBICITYDJIBKFXIHGSSLPTMQOQRNWFGVJOVYDFX");
    msg.dest_man.assign("TJZPLLNGEDYIFVALIWXQDTHUYLWMDCZFKAMGRNTMYXHVAEQHVKCLEFGOHJXIFNQLTBBVXTQTSPGNODVLEADFSUHPDEJFTQRJAHOPFUXBCJGUWINOVJULWRVHTOZWCUCFKPEIIFMGYYSGOKNDPRCEAIVLZMBGSMMUMMYHLRXBGUKWWEXOCJEKROVKBUJYONQQXNBZASCSZ");
    msg.conditions.assign("OYMXGDBCTGPHWQTEEYZZBKJARXIAVMYLVJZUKFEXHMRKECLJTFVJGFKYUWEXNCUGPDSIFOCXGNENDFABPWNFKOBDMIAOLPSICAQDCKTBZMSEQLZBXUUPIONFBHHMUXXGFLSRLPZDQTVRJVHACOSQJQVMVQGELHVSPYFOFKCUTGQRQSPRNWRYIYONLGZDSDDZSTTJEBGHPNUVJDLEPRAVRUCMHIH");

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
    msg.setTimeStamp(0.989736439063);
    msg.setSource(16900U);
    msg.setSourceEntity(41U);
    msg.setDestination(45622U);
    msg.setDestinationEntity(237U);
    msg.source_man.assign("EXDCUBLCIFAVZJVITCNJZSOOQYIJSYXHRKBZMFMCGQAZTPBXZGFFMJILOBUPMWESUPKAHWP");
    msg.dest_man.assign("HWVMMLUFRVCBIGDFLXKTYOBPQOUKWRJNYATUTMTEIACDUACFXLAASBFOEKIITGPKXGDVVZMVXCOPUUQSYFATJIZOJLPNZPXYPQYEWZYXOHLKQEGWMENPMTSPFHSXDHDTNLODTRHZIXJTBKWGMWAQHHGSKPZZGDERNXNERVCSJLURJMCCNFYUVIIEGLQGLWFWBQGMZCEVIYKNAOUJIBLVSXHBQQWE");
    msg.conditions.assign("BGEXOLDQQLQIRMISHUPJWNURLPCBERQNCIPYIQNITUHTMNVCTZJHKWETYPDWBYCBDFCMWAAMBKKKYMXPFG");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 147U;
    tmp_msg_0.system.assign("AUGIQSOYIUMGEKCRXQKZACWGIUTDSOAYBERRDTPRWEJUXXZBZFAVVYPYWLRCYBBONFFMFNTNGZPPSQHPNKDHOZNWMEHBMONVPERWYRKJLZZSMWGUUTABMFASXFDHYRXXQYJVIUOTGDDXKHPQDSXIVPCANQKFQBGLBLLVVNWLYIIJCTJ");
    tmp_msg_0.range = 0.662069066913;
    IMC::TrexCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 91U;
    tmp_tmp_msg_0_0.goal_id.assign("NXJFJABGZCACMXYXKMDJROQPVJOPVHIUFLEDKTITONSPDQUKCBREAGLYRLBYNIFNEGWZPEATDIRSTERFPCVOLVOKTETWAHIESBIQIXSKVD");
    tmp_tmp_msg_0_0.goal_xml.assign("YCRIFUUIHSWXJGMERCXROQOLZDPNULHOSANSQNXN");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.70425190044);
    msg.setSource(35034U);
    msg.setSourceEntity(75U);
    msg.setDestination(41113U);
    msg.setDestinationEntity(80U);
    msg.command = 177U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NFYONGUKBWMDJCRQLUOSZRVZAMIJEGCELVAJNTBMFBXTXRDJJPVLIKTGUVFKKLITDAKRYSZWCXPYNZCVTJUUEMGPKSVKTEHTBEKYTWLHI");
    tmp_msg_0.description.assign("IYDDIVSATCPZUXOLIBTCBUEMTZYWQPEWNJMLXRMWMHZIUJJOLINJHVVQLZKXDYGAWJIXKWSROWDTNDAKQYZHWUBYVZMKFNSTGRETGEGXJJLTFZSAQQDFVLGQBZO");
    tmp_msg_0.vnamespace.assign("CDZCBARDZYPFEQTKNPEOOMDZBEFVPKWFCOLXGNSAEJJMWEXIUKVJUBLGHCVAOGMFAQAJSGK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XGMKNPPLPVWHTNESJARCZKRMYQNOOSYGRCTFQSHSHRGAXZOOOUVDODWLGEQREBNSCRPXOFDAYMWFDHCXHSMXJYMYVNIATKKWCAOGDMKEEBYBPKQHHTDBIZECTLWFYTZRCQUCFNTJFJZIFVUFTMCLMLGPEHBXJXOECNEUQNOXPNDGKBJSVDZDWJAIZJS");
    tmp_tmp_msg_0_0.value.assign("UZXXPSZTLCLHTCOOVEPOAUIOQSWQJXYZUMQKGFXTQFIBPZKPMUCLREIUADYWLZXOQHBANCHRERTMWUICAOVZNMRUKVSNSFUJLGAEMWVLPRYJKBTLSBGFTNNGDKMORKIMIJNTDNFNRBTZBWTALZAOVYVMPDJDJJLAQEXECNWIGWFPKBGMDRYKP");
    tmp_tmp_msg_0_0.type = 9U;
    tmp_tmp_msg_0_0.access = 30U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VTXLPFPHCAOKJPOQJMQGXKBIISBIAGJUCKALQNTSHVPGYMXOKNGDYZLUHTLLKGFMWQWUPFNVKVDPZVYHXMEGUBYKENKEXCJVWOWVYWFMTDIHTRRNBDAACRKWYUPPYOINNYCSTXJRVHUHZDBLZOHQQWZZABCSHSTRGFPERCDJEQZMMEIUELCHSSYEJCSARBZIDWBRFVTLOAGLCLXJRTOSXGIOIZQIVUDFPWJYMXXQMNBUFGMFR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EAAQOGDJBMUOEJPQRVYIKXAYXIJOZPHGYNOXCKGUEDRMBSLKKYBBWJAEUFSNSUDZMUZECGNBIMOWHCMOYTEARKHDJMLPCLGWDGLWC");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.46073517449;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z_units = 4U;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 20387U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("QHERMYAFGFHUEKVVXQBZDABBEJCSYYAFDWRXEKAYZOVLTXHLDTTPDW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LeakSimulation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 194U;
    tmp_tmp_tmp_msg_0_1_1.entities.assign("FIDNIWPSNGUKMVWSCOIJAGVXYILRWRYGEYNZNMVYMFTFAJXWSMNGRFIQPIPHCXBCSCRBDRVFDBCONUAGVJRHVEQPZJQFBZBULTSVUIMUTLXOHWZNWQYMYOKZUMHHUSIXHBBSUXPJTJAIHGNJPILQQVKTCANYRADZGOLLMDABQMCKOGSDZKOXJXQKFKEDTHATBYTSAWWQPFTEBDZZGDEYULVO");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::MapPoint tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.527679343779;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.396890056351;
    tmp_tmp_tmp_msg_0_1_2.alt = 0.804988508929;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PowerChannelControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 221U;
    tmp_tmp_msg_0_2.op = 58U;
    tmp_tmp_msg_0_2.sched_time = 0.751123586425;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SoundSpeed tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.902678807599;
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
    msg.setTimeStamp(0.764794207923);
    msg.setSource(48355U);
    msg.setSourceEntity(175U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(230U);
    msg.command = 143U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DYSBHRMLWMSYQDJTCSOZALYOYRAVVJMPNHJPWKFBKPQHXIJRBIGROQANKZCCVPRHNIYHHFSWODLDTCVTEAPVQEZTGOYULAWFOFIGJHFXMUJJBIGWNAQBESVTVLWNZYLXUMICXAUKTRHG");
    tmp_msg_0.description.assign("KMCVIPAJRDGQFQGLVWNNTICDWMLXNXHCROYZVIRUJIKWKANTTYZBBLIWBKTEDAAMKWIOKYSXFYHPAKDOUWGHLFHBXZBPRPQBQATLMRMTYKCGIRRUMEJNBGDYNVLPLMPZYHBAXVFTESSNVCOVUEPCPUYHDIDD");
    tmp_msg_0.vnamespace.assign("JGLSPKXBOPYTTDGQLAWDQLHNZDSZYSGLJBTKMTOUHXCVTFIGWNOXLPXFNIIZHAMZN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NIOPADYGHTIFYAXKRVDUXBHMTJKSDRGXCBLPDXIPU");
    tmp_tmp_msg_0_0.value.assign("JFTYCJNMNCCLKLCBEVXHDNPPCSMVIHFQVOWLHDOZTYIHROUKLOLTFRXIVUUXSCBWCSQEXOBAYGQWGVOITYXDHSEZRPRZQEJDZRWPEGOBDXPZJOUJNNPBGAIFAQSVUAEBBCK");
    tmp_tmp_msg_0_0.type = 143U;
    tmp_tmp_msg_0_0.access = 140U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OIWKVSSRMBMKALTMZSEPDZJVXJSUPXSLMRRVISWEPFRHWIRFQDJPWBWHGZQUYBKXAPEQZOURVYOUAIKIQTYXCCLADOJLW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JBKPEESMINHEAOFLYJZVLQWAFDZLALIQSYNPPTJHKGXGMXZSZXSQHVUBJXFWSWABEHKVVLWIGPVWEZTXLMXGQCQTGSURUCBUUOCKVAOSBNJCKDWDMYTKFDQVNAFOUOUOIASRNLUJFNHTBDJPCRWNQOTOGVRTQPRMRZBBRWSKDGJCZICYBHDNVAEHRKPLHMIJHGANRDPQCIEXKYXOYDCXAFDYOZFTZZUXYMMTCWYYQSEGMJPKEMVFFILIGE");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 27995U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("MBWHSRJCOIUQTEXYOVNKYVAXHEPNVAPRZIADDRXKUINRNWGXQFGRBLRGSLUHJTYALBOTVOZUTZWEOSBGOKZFSPDADQTSJKMTEHKQJXQWKBCENBMXQFQNIUHNIMOLXICRIRMXZSFZMIJGAZYKYFCMVBCHPEZVKWAGONSECKBPUWTGDVICODAUYHAU");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BHCGVYRARRPYOSDOCCTFXIOYDMANBGMTCAQZWZRNZEAKPNCHIPBWWHHGELMKIYLDXCPOQHBDEBGAWKUWTVIMPUJONPTVPSVRRVUSCSTZLRCIHATTAYF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VehicleMedium tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.medium = 253U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.777773967005;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredPath tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.start_lat = 0.735823463454;
    tmp_tmp_msg_0_3.start_lon = 0.90306351571;
    tmp_tmp_msg_0_3.start_z = 0.767357848915;
    tmp_tmp_msg_0_3.start_z_units = 80U;
    tmp_tmp_msg_0_3.end_lat = 0.758131790451;
    tmp_tmp_msg_0_3.end_lon = 0.900955014849;
    tmp_tmp_msg_0_3.end_z = 0.545139139715;
    tmp_tmp_msg_0_3.end_z_units = 214U;
    tmp_tmp_msg_0_3.speed = 0.871942834018;
    tmp_tmp_msg_0_3.speed_units = 153U;
    tmp_tmp_msg_0_3.lradius = 0.249842034365;
    tmp_tmp_msg_0_3.flags = 225U;
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
    msg.setTimeStamp(0.71463750818);
    msg.setSource(51071U);
    msg.setSourceEntity(80U);
    msg.setDestination(3374U);
    msg.setDestinationEntity(182U);
    msg.command = 51U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QYWAZKMYLMRZWNFTKRSVUJCARSHQYXFXBGZBJKLDGCIDONXECNLLXNHWTJGMKINUPOFMNBTWRTJXHHSDARAEKUOQSQPGUPEJXUTRQBYVBDOFYMSYDLCHAHSDTLDIBIOVFFDXIHCLESETZQEKXNZADWNLGILFEQYWJYBRPVMOGUGQFJZKCMZLTZIANCHRHWVVPETOQWSAJGAPNBCSIMUSKUKXODZMPGBPVIJYMKJOPUURCHVXBETIOAVY");
    tmp_msg_0.description.assign("OEWSTSYFSWDEROBCQNKYWLAUFZLTUAUGIYMBIGDBAY");
    tmp_msg_0.vnamespace.assign("IQXUJMWWCDUQHFUDOFWLTKMGFVKYEHZSFJBEVSSTLOVAAQCDPCDIREKFLTVAJAVZTFQERDSCZRWPHDFNFSMYWPGRBHCQYOIGCNTQRXBRJRAMUYWGNYIXBXHHTUXKZXSLVUERCXWPYCOCNLJIWASJLJOBLOZZVKEDTZNEXTQPNLZWHIRPVBOXMMPAZUJBIEPQKNIDBMKNTFSAGDYEJUGOXVFUHMKSHOAZBQQHYWADCSIPNGIE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BGWUMLFOWGSJLVEMRHDSDEOQPQBOXVZYLWHMEISARZQNIYRAZWDLZTPEGTTPBKJDRTUUKIBMADSGIIQYCGCOXWSUVJBYNNVDNXXYHFFNJUOCNYAKL");
    tmp_tmp_msg_0_0.value.assign("YDHZYSNBTWTLQTCRAXILNIOSLOPBZOZUYPBNPDHVFAOMODYCKHXKNUFEVMEHTWTDQFTXSDXVESSOYSXGDKVYJCGXGCONMSRRUTHZAHABITXQGHEGYVWPEIJNJQDJFPHOBGVRRZNMKWNUSFEVWSFUAJEGEMRBLZEAWPJFGFIVUKXW");
    tmp_tmp_msg_0_0.type = 52U;
    tmp_tmp_msg_0_0.access = 103U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PKBUGCSOKWOERVCOHGPDNSJNTRLSNKKOPTCDSIWEWGLRXFUAFYAVDXVJBTXVOLAHBUBYNXYUTGMVHMQWIJJZOIFIKISWQIVEHJYZX");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("COZRYGRJWWCEUSGAVQSXMQEBRSPDKADWMHMOXZRQLKFIBHVQBQLIOVARGSXOCLQNKFUJGYITOMTVEFNXNZPABFJDBKJJMSPIZAMPKXGPHMDGXHWGQOMRBAPDYVRRMCLYCYRDZLJUUASBTUWNQIYHHV");
    tmp_tmp_msg_0_1.dest_man.assign("GAIJNHZWFIANLOGBHYHMSWKZLPKHIJRZWNUORRXHEBISXWAXZBUXKOGWTXJFCPZOEXYUYOGIPTWEKFMENUQAEYHPURTDPGKOLBYLNTKLDLZUVJVRERQHRSDVZMAQCMBJD");
    tmp_tmp_msg_0_1.conditions.assign("XPWBHOJJKTUNSPTTKLSUKQXDSFOAARRPFFNWCZHGNXTQYSODIAJHYGWREQAMDJNAPY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Brake tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 89U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.348278617934);
    msg.setSource(12152U);
    msg.setSourceEntity(235U);
    msg.setDestination(8779U);
    msg.setDestinationEntity(19U);
    msg.state = 191U;
    msg.plan_id.assign("GUGZIFHNTHAOLNEZFPTCWGUVMZCBPHIGOVVJLXCRDEILAIORXQMFYPJGEQTREOQFBYBLEAXBRMNDVTOWRVTOHJTXPZBMZVHDPLIKXWUVQAMTKHYKQHCUMRYLUANVUYPCISPODKBEJZUFSYNREXCLJHWJTMACYYJDNGXNLAHDQTSJCKITZBIJNGSEEYSDVFRGLRODWSEMQDUZRIMKGHUQQFWDPFSZLXOBASFKKAXNWSCSKGBZAWJMFCOUBQIVY");
    msg.comm_level = 72U;

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
    msg.setTimeStamp(0.401495064046);
    msg.setSource(49654U);
    msg.setSourceEntity(195U);
    msg.setDestination(5987U);
    msg.setDestinationEntity(80U);
    msg.state = 84U;
    msg.plan_id.assign("MPPGNHIJWVNKQHUMBRFHUINRNJTYUEFRUGLRCOTRAZVOGMEZWIBBNUYVDINQETBLKTOCGGYKCGDYXHSYUZMCVBMWZKVJN");
    msg.comm_level = 212U;

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
    msg.setTimeStamp(0.667133437152);
    msg.setSource(15391U);
    msg.setSourceEntity(158U);
    msg.setDestination(1951U);
    msg.setDestinationEntity(144U);
    msg.state = 144U;
    msg.plan_id.assign("FBHJYMXHEPOKZEOHASWLNINREAYNWXRZVTMCLIZITENEPSJZRVRJWDLEQBVYJJPGHJIRFQNDCSZJMPWBPTYBFPPVGNSLLXAJISADFGMMXTJPMAHJMTLCLOUEGWOOQKHQ");
    msg.comm_level = 69U;

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
    msg.setTimeStamp(0.572449860821);
    msg.setSource(41516U);
    msg.setSourceEntity(60U);
    msg.setDestination(12829U);
    msg.setDestinationEntity(77U);
    msg.type = 111U;
    msg.op = 43U;
    msg.request_id = 36231U;
    msg.plan_id.assign("FHEILEZJDXWWCZFSJPRGXAHSFNFJQWZOV");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.342789196486;
    tmp_msg_0.lon = 0.810361867027;
    tmp_msg_0.height = 0.529924953683;
    tmp_msg_0.x = 0.78940927304;
    tmp_msg_0.y = 0.0343932469975;
    tmp_msg_0.z = 0.0143016425883;
    tmp_msg_0.phi = 0.42987460217;
    tmp_msg_0.theta = 0.806608253902;
    tmp_msg_0.psi = 0.426843839665;
    tmp_msg_0.u = 0.973302910863;
    tmp_msg_0.v = 0.41969693277;
    tmp_msg_0.w = 0.180663890276;
    tmp_msg_0.p = 0.55058421082;
    tmp_msg_0.q = 0.67196735915;
    tmp_msg_0.r = 0.0597817531734;
    tmp_msg_0.svx = 0.989073074661;
    tmp_msg_0.svy = 0.570259278839;
    tmp_msg_0.svz = 0.386447999606;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MFYDBPLEQRMPRWYWSVSDWLGGAYMEXCBEFVWTGKY");

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
    msg.setTimeStamp(0.237474865595);
    msg.setSource(38446U);
    msg.setSourceEntity(3U);
    msg.setDestination(7605U);
    msg.setDestinationEntity(40U);
    msg.type = 115U;
    msg.op = 42U;
    msg.request_id = 32893U;
    msg.plan_id.assign("WLARVXNMGQVSRYMGPLCFPQPLEGZZATLCDXPBRQAIBUITQGJZZFUNMVMBGUXZJDBSYRWBYXGSBVIYWPHNFZQEKKRTFXOJHOLSPODGTVYJDHMCYBDNTDKCXKCAMELJZKIHNIPQLDEWLZPAEFRGJMSIGEAHNKZLXSDNNWCQDVOWEFJRMKBKC");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 27U;
    tmp_msg_0.label.assign("KOMCPNRIDRFKYDAESCHHUEIVFDNZRJAUEKBCJYXEYSOFTWXYZHECVLXUOQQBFLNNHKHINZALMPBWW");
    tmp_msg_0.component.assign("KKYYSGPOEMYJQPRGLUDTFRQLLIQJEKDQFMVQRCUEWOGJNEVJDTSEMDHWTDGMICXABFKXBKZNNYGHJXYRECZSLOSOPDCJFVYXZGBTYTDCVPWQVZTOURGSTKESFXTHAYUXNFBBOOIMVLQVRBUUJWMIAWANWZREVXASO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KWAHWMJVMRUOLLJOITQNMPHFHYGDVLFHUXERXBCJUQPSHLZLO");

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
    msg.setTimeStamp(0.646936724047);
    msg.setSource(557U);
    msg.setSourceEntity(172U);
    msg.setDestination(18742U);
    msg.setDestinationEntity(34U);
    msg.type = 182U;
    msg.op = 11U;
    msg.request_id = 41147U;
    msg.plan_id.assign("LJNCPYTATJAAGNFYICEQHUMUDQBRXVWFGLDPNWBCXXNVIVGAHMYFBRCXQWBSLRCNJXSDEENKUSUGFJIOLMOZPCACOMPCXFZNYJIYYBODWKRMKZJJUIFXJOAHFYRQYDRQLPJBUSVYZAKEEIKBDTAWOLOFFDEGDSSPOKDWNESVPLXCQSGZKHGHEEWATOWBTTSTCTUAPNGQHIWNRZXUZLLXOUVTHRFR");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 107U;
    tmp_msg_0.clock = 0.147350338019;
    tmp_msg_0.tz = -95;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HWFFOVEMAJWZBBFKEBFCSUIRWHLYQAFECKBSZBFTARCAXMINWYHTXHJYQKSVUWOKPMVUWDTCQLGUCMZZYGBXNGPNITMJSDLSVMAXWDEMXNSIQVLMRCXSTOZJVFHEWOGSRUCEXQWXPPONOJBGAKOSIJUYYLETFEIZYNFGLIBLETZRXGWGCLPOOGFNCODQP");

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
    msg.setTimeStamp(0.47022344339);
    msg.setSource(16704U);
    msg.setSourceEntity(166U);
    msg.setDestination(17894U);
    msg.setDestinationEntity(219U);
    msg.plan_count = 41458U;
    msg.plan_size = 829157691U;
    msg.change_time = 0.612131308157;
    msg.change_sid = 42350U;
    msg.change_sname.assign("OPEXZJOMBZUVVKWCAABMLXFQDJFPPRCORLGUEQTNSDPRWJYHSUKKGGQFZIVMDFVSCLW");
    const char tmp_msg_0[] = {-58, -50, -42, -72, -18, 102, 126, 49, 112, -42, -53, -54, -85, 71, -74, 20, -121, 97, 37, 116, -92, -53, 107, -84, -34, -107, -63, 102, -89, 50, -27, -65, -92, -79, 78, -32, -35, -81, 10, 51, -38, 14, -12, -69, -45, 104, 69, -123, -1, 25, 75, -75, 25, 98, -71, -114, 27, -54, -43, -44, -98, -97, -12, 14, -39, -94, -102, 64, -66, -47, 54, 9, 36, 99, -16, 42, -78, -121, -2, -59, 66, 30, -79, 124, -5, 51, -48, -95, 88, -6, -53, -70, 37, -41, 61, -11, 1, 120, 80, -118, -28, 89, 28, 112, 81, 77, 0, -97, -46, 30, 26, 122, 51, 113, 125, -52, 65};
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
    msg.setTimeStamp(0.950019950564);
    msg.setSource(46478U);
    msg.setSourceEntity(46U);
    msg.setDestination(62737U);
    msg.setDestinationEntity(211U);
    msg.plan_count = 30915U;
    msg.plan_size = 3621512291U;
    msg.change_time = 0.0715012721573;
    msg.change_sid = 33167U;
    msg.change_sname.assign("NFJOMQPAPCNEFGUFMOBWRJFHRBQWKKVCGEKOYUQBJQGLBJPIQSSGGOVDAVSKFHGCIOPXFUXZMXNCJEZEACKWPUZDTDWYFUUZGOPCAMRPVHFHMXTIXRZHINZ");
    const char tmp_msg_0[] = {-66, -100, 124, -65, 1, -65, 105, 70, -105, -101, -85, -91, -116, 1, 98, 33, -20, 102, 60, -73, 108, -96, -76, -55, -21, 3, -96, 41, -74, -4, -58, -13, -33, -71, -28, -13, -20, 94, 123, -85, 44, 41, -5, -122, -33, -127, -94, 63, 123, 24, 87, 76, -3, 98, 43, 45, 17, 114, 61, 82, 107, -49, 41, 40, 8, -84, -24, -109, -25, -109, 30, -2, -15, -94, -82, 113, 52, -90, 26, -22, 16};
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
    msg.setTimeStamp(0.35631392428);
    msg.setSource(1448U);
    msg.setSourceEntity(177U);
    msg.setDestination(54202U);
    msg.setDestinationEntity(240U);
    msg.plan_count = 45459U;
    msg.plan_size = 3794035393U;
    msg.change_time = 0.0824630724193;
    msg.change_sid = 4778U;
    msg.change_sname.assign("XBTZHBMGWWQSPPQXMAOHDRKOBBCCTJPAKPUNONXYHSZPEDVZQIAFXHEIBVVBJBTGYLVYFNQR");
    const char tmp_msg_0[] = {-9, 120, -112, -10, -59, -96, -49, -42, -5, -93, -36, -40, 26, -6, 42, -8, -23, -7, -46, 44, -60, -111, 41, -63, 62, -17, 85, -120, -100, -55, -113, 53, -61, 7, -55, -42, 81, -26, 47, 90, -75, -38, -102, 60, 49, 62, -50, 121, 13, 120, 56, 18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JGJXYLHPACWHVAJPWXSMASTHUTRZUJZBKSCEJKCASRJLKCNIPPGHNGSWGIABYQRVLWPEOGW");
    tmp_msg_1.plan_size = 54181U;
    tmp_msg_1.change_time = 0.367940747956;
    tmp_msg_1.change_sid = 11518U;
    tmp_msg_1.change_sname.assign("QGFEHSTHLZJHXYWIVMGNTNMZZXPAZDQOBFUHBNLXXPQDWWKSRJCZTTMTHEDAXFQPFWCBCYTGOONQQXLQQIEKJCQPZKUUEMUAWVGYDPVFEVKBNEEDUPCHOYVFOPOSVAFRLNMQIXGUHDJRRRDLDLIARSNNWMIBOZPHBOKKLJDCNMMYAWLFYYFIVCSLVRFHGXJ");
    const char tmp_tmp_msg_1_0[] = {51, 63, -11, 73, 12, -108, -56, -82, -47, 66, -92, -60, 86, -126, -26, -85, 34, 63, -52, -77, 118, 89, -85, -117, -40, 113, 48, -112, 94, -117, -90, -108, 109, -86, 99, 1, -33, -102, -111, -34, -56, -14, -10, 27, -59, -11, 106, -102, -1, 49, -110, 35, -120, 101, 39, 89, 98, 97, 17, 58, 113, 90, 42, 30, 125, -100, -8, -90, -56, 25, -88, 78, 53, 38, 88, 108, 91, -4, 71, 34, 70, -21, -34, -104, -34, -27, 72, -69, -68, 39, 27, -16, 124, -69, 44, -83, -101, 65, 119, -89, -112, -3, -15, 5, 24, -77, 113, 115, 120, 8, -68, 62, 64, 71, -116, 3, -45, 51, 118, 3, -31, 11, 37, 119, -115, 3, 91, 64, 75, 6, 101, -99, -81, 24, -124, -117, 76, 102, -68, -18, 125, 31, 87, 42, 69};
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
    msg.setTimeStamp(0.284469942375);
    msg.setSource(56223U);
    msg.setSourceEntity(66U);
    msg.setDestination(57822U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("YCUMLEDPAXPCPMSKICGKXEOOULDZFMSGEJJKHHOJSLXMKEDMYRNBSHHRUKAQBNLPAEDJINOWUGZTFGBNBZPLWQOXWBIOWYDZJCURWVTWYZUKGISQPFWMPQZFXZCEFAZUMRHFVBKTWDIQIEKUSYICINNAOAMJACPBNUXVYJZVLNUQEOTRXPLRTXWHFEDDTYYSFORQSFJQDMRGFAGVTICHTKKLNPBOVRYAHVYMQHISGCW");
    msg.plan_size = 5651U;
    msg.change_time = 0.807267599944;
    msg.change_sid = 21441U;
    msg.change_sname.assign("YPLDXRETSOEMDMVEUWMNNGVLEZSPZLTWFFWCNTHTGXWBLDWKHRVDYNCAINOXXNKHDMGPJQLRSPISYRMBIRFOIRSPATQQXQHMBZAFZTDUSESKVGHYVLKAOTVTRJSWURBJCUYYDDJGYUPIBOUDN");
    const char tmp_msg_0[] = {-46, 14, 104, 123, -7, -103, -41, 115, -19, -126, -65, -55, -50, 62, 120, 104, 90, 125, -38, 38, 85, -20, 92, 99, 78, -67, -3, 46, 93, -2, 11, 101, 120, 70, -80, 73, -120, 39, 80, 118, 31, -11, -107, 113, -60, -26, 65, 23, -53, -109, 31, 39, 31, -93, -35, 126, -14, 19, -101, 94, 2, 21, 13, 13, -115, -27, -79, -40, -85, 106, -37, -29, 103, -11, -87, -10, -74, -15, 88, 51, 104, -111, -34, 72, 37, 45, 10, -61, 110, 40, 48, -94};
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
    msg.setTimeStamp(0.991337644026);
    msg.setSource(34726U);
    msg.setSourceEntity(93U);
    msg.setDestination(52333U);
    msg.setDestinationEntity(82U);
    msg.plan_id.assign("JSSIRSHTNLLWHNZWAZEFRKGQJOTDRUHNHOUTRCGIIERFIMIOCXSNDFMZQPYYAJATOWHZGVAPLBYKYMVRPKWYBPISPOARNALCKBHKYEQUD");
    msg.plan_size = 22071U;
    msg.change_time = 0.369648683536;
    msg.change_sid = 49280U;
    msg.change_sname.assign("GYXKRPPULVZOLKXLBBZNRZUXWFCHBAYOOUSLIDFOUVUSCRJOTZKFHFNNADSLAXMRJQFGOOIMLWIPPJBYWYZGWDDJDVFXECAXNUIJXDPKVESDISLKQBRWEIQMJMIXZADAJLJPQKTOYVAYTCUHTHFCGNMDBIVALKZXHR");
    const char tmp_msg_0[] = {-51, -77, -112, -63, -60, -22, -12, -77, -10, 64, 120, -45, 39, 101, 38, -41, -2, 121, 57, 89, -102, -11, -23, 23, 112, 87, -117, -55, -54, 46, -49, -101, 104, 33, -68, -62, -42, -24, -29, -26, -31, -22, 6, 51, -15, -123, -62, 68, 115, -52, -118, -127, -30, 40, 75, -53, 2, -128, 125, -89, -43, 31, -65, -66, -49, 6, 122, 92, -94, -33, -44, 41, 99, 18, -14, 24, 34, 21, 116, -107, 6, -90, -55, 83, -98, -111, 10, 123, 93, -47, -78, 101, -47, 122, 26, 85, -111, 56, -93, -4, -32, -101, 61, -70, -68, 83, 23, -22, 49, -120, -52, 41, 103, 21, 73, 98, 76, 13, -57, 78, -73, -86, 13, 68, 17, -113, 77, 33, -46, 45, 89, 76, 110, -116, 60, -93, 94};
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
    msg.setTimeStamp(0.416670195742);
    msg.setSource(16939U);
    msg.setSourceEntity(110U);
    msg.setDestination(61065U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("LQKWXGPEYVSQUZRGILKTYEDKQUUZBQGKSOZRNWSUEXDONBJZHHT");
    msg.plan_size = 62873U;
    msg.change_time = 0.581709936068;
    msg.change_sid = 16554U;
    msg.change_sname.assign("WDUCJMGSCSTRNURYEZEQARZWLXEDKUCFJGZNKAXKOMPBHEREXNFYJVHTOIDUMCSYBRKKTNWQNXPWKVFGTMEQPOPSZDCUZSGNIPTTAVSDVNXLHGUZJHNBBCTASFHSVQPPEKKF");
    const char tmp_msg_0[] = {-47, 44, -54, -74, -9, -42, -56, -10, 73, 95, -42, -29, -7, -47, 40, 109, 93, 23, -101, 109, -121, 21, 124, 67, -22, -82, -106, -59, 116, 15, -51, -21, -57, 41, -99, -36, 114, -9, -88, 117, 108, 27, 55, 10, -120, 59, 101, 59, -69, 83, 11, -53, -80, -100, 36, -76, 95, -23, 78, 110, 31, 107, 25, 125, 117, 7, -72, -104, -1, 2, -63, 100, 77, -15, -52, 102, -43, -55, 51, -3, -85, 45, -45, -40, 73, 26, -4, 7, -48, 68, -21, 29, -62, 58, 74, 98, 20, 62, -111, 42, -7, 4, 85, 110, -6, 125, 45, 119, 40, 48, -66, -68, 121, 20, 118, -72, 58, 78, 41, 120, 18, -112, -15, -9, -126, -54, 0, -50, 76, -88, 3, 84, -57, -12, -82, -73, -81, 89, -40, -13, 45, -84, 25, -112, 61, -82, 56, 92, -15, 121, 44, -21, 28, 104, -116, 101, 121, 1, -7, -63, 65, 63, -8, -14, -54, -117, 65, 32, -15, -100, 116, -125, -9, 29, -91, 88, 25, 34, 126, -118, -26, 30, -117, -73, -44, -43, -63, -46, -118, -94, -19, -113, -111, 79, 119, -115, -72, 115, 72, 40, -57, 57, -79, -108, -1, 1, -91, -18, 6, -96, -108, 85, -102, 27, 34, 63, 19, 111, 29, 24, -74, -49, 90, 116, 32, -87, 122, 72};
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
    msg.setTimeStamp(0.985371906636);
    msg.setSource(45689U);
    msg.setSourceEntity(119U);
    msg.setDestination(26477U);
    msg.setDestinationEntity(168U);
    msg.type = 112U;
    msg.op = 249U;
    msg.request_id = 31933U;
    msg.plan_id.assign("NSOFQNMMFQZRKYWMRNUCENFVPFKUAEQLFY");
    msg.flags = 35663U;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.0543085860035;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OUKDKBRMTVIXINTAUOEPMLMBQJ");

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
    msg.setTimeStamp(0.208128931991);
    msg.setSource(20622U);
    msg.setSourceEntity(79U);
    msg.setDestination(55135U);
    msg.setDestinationEntity(121U);
    msg.type = 95U;
    msg.op = 140U;
    msg.request_id = 64155U;
    msg.plan_id.assign("JLLNXODXUFVPYLZARDGAHUSTAWMIUPJWYKXKBQPUZYDRCMKEZYXOPLMOBOELDHACUNNWNCYXIJUDCVHWFYGGADCYPPCJZCHTGIIRLECQFDEKSZPSMYMAZTQEWYFFJPIODNQPXTKRNOMOZMBULXARQFHUFENHS");
    msg.flags = 43592U;
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XSBVYUBVLXLZWKSMVOHIVEQWRBPEGEKIATTCQKSSQGGDSPDSTVNKMKCZUKGIZKJRJNUWAXALOVCCXQZXMEFDNIAJYGPJYRUEPLYZGAXGXWCJH");

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
    msg.setTimeStamp(0.531624830441);
    msg.setSource(26480U);
    msg.setSourceEntity(93U);
    msg.setDestination(18356U);
    msg.setDestinationEntity(68U);
    msg.type = 28U;
    msg.op = 173U;
    msg.request_id = 60586U;
    msg.plan_id.assign("PHSXDIWTTBBKFUVFRRVMKXKPEJCJQDRDVILPNN");
    msg.flags = 41247U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 10186U;
    tmp_msg_0.lat = 0.441830587375;
    tmp_msg_0.lon = 0.936224699544;
    tmp_msg_0.z = 0.864339499078;
    tmp_msg_0.z_units = 248U;
    tmp_msg_0.speed = 0.0120419221722;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.bearing = 0.47037471991;
    tmp_msg_0.cross_angle = 0.28433825873;
    tmp_msg_0.width = 0.563171254533;
    tmp_msg_0.length = 0.411394294218;
    tmp_msg_0.hstep = 0.885803389583;
    tmp_msg_0.coff = 102U;
    tmp_msg_0.alternation = 133U;
    tmp_msg_0.flags = 87U;
    tmp_msg_0.custom.assign("IBOZVYJDOWDTMGZYSLKUHHMHMVKHYVJHPOQFQTFXIZWPETWXVRYCGIRRJWAPHCSNENDOKAVBXAJLUEZRCNHGUJPLYHCNJURUSDMJATNTCLEFGLHEQKFRPKPYZSJQQWTBMASFUGYOXXEMSGZNUNGUPAIOBGDOETKFXVLEZBSFBNOMAETIQLGJPCLTRLUVKLPSCGIYKXWOAXNVBRDJVIWIFQDNSWFAFBQOCURAWHZQYZTPEBKXVICDMMCW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WKFUSVPJWDKBNJMFIPNUOWPHYNCZDSPXHXSMTVTUKCIKIYZVHWVUZLDXTRELXLXOOOXMGEEAW");

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
    msg.setTimeStamp(0.922264150042);
    msg.setSource(25018U);
    msg.setSourceEntity(195U);
    msg.setDestination(44261U);
    msg.setDestinationEntity(241U);
    msg.state = 146U;
    msg.plan_id.assign("HZKTTREARUMUKZXFIJZXWPVCGMJGGUPOAQRYGOMWTKSSKULGTBCENMLIDAJBEJERKASVWGPHCNLSNCOSKGHESXBTSRDQCFUYBOJVYDFONIIOSNUVXHFZWTDTEXXNTZLQERIVEXJNIZJPAYJXMPZQCYXYBLSDWYRVVFHHQLDRLFOBZWFKMCAXUJMQCGNLBPTAKCUWRGGEOBBPIKYDFOMLQQIZVLNPUDI");
    msg.plan_eta = -1925940355;
    msg.plan_progress = 0.520195965118;
    msg.man_id.assign("RXRSBDCXEUBQWTKRZNPQQZKQVFWGGUTVCWRGMBKETIDAHFDPFYIZR");
    msg.man_type = 53540U;
    msg.man_eta = 43940213;
    msg.last_outcome = 31U;

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
    msg.setTimeStamp(0.914965506046);
    msg.setSource(12336U);
    msg.setSourceEntity(30U);
    msg.setDestination(24902U);
    msg.setDestinationEntity(117U);
    msg.state = 190U;
    msg.plan_id.assign("IJWIPVJHULPMOXRJEKPXPFOMTYHAEFRJXJDJHWSNZRJXKWTQMIIGCORSAQYJGXVDHAUQYC");
    msg.plan_eta = 233894364;
    msg.plan_progress = 0.275664112314;
    msg.man_id.assign("OFBOBKCCUHQUAEGYHPHIPOWSZHKFNASCNJKLKKBXVDONPEIYZTJQTZQTAVILOS");
    msg.man_type = 15404U;
    msg.man_eta = 1811192316;
    msg.last_outcome = 222U;

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
    msg.setTimeStamp(0.269811931231);
    msg.setSource(22058U);
    msg.setSourceEntity(251U);
    msg.setDestination(32023U);
    msg.setDestinationEntity(12U);
    msg.state = 92U;
    msg.plan_id.assign("ZDRKQJBQXUOOZSHSFEGOJINCYQXXVCPUHYLYFZWPYVJYGHRNHBEYBFHZILIJYQAXJGRZNKXTDVEWZWLJMIHRWGHYRNNSPRNCDXTNCIUKWDKDXGODGCDDZQUFKSKEKLQNMEVAYXBSUHARLJUTNFXKLTCPBASCJPIKDVUWSIITLPOWLEXQAFQZPM");
    msg.plan_eta = 1279354109;
    msg.plan_progress = 0.770295874759;
    msg.man_id.assign("NNRRHEHBUMEFPJCXHOOXJNPQLYFBCLZJAXRLUXBRMVHCQVNQKWAUCWBUGTXFAIHWLAJKLIKPLQBPTIOYWABSPZWQYYJYKAVYWIEXYVHFKAZZMESTOLGVKSDXCMFZLYMPTWCLGGEECMGKNMDJHWMCUJQRP");
    msg.man_type = 18525U;
    msg.man_eta = -196016392;
    msg.last_outcome = 37U;

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
    msg.setTimeStamp(0.32887310857);
    msg.setSource(24298U);
    msg.setSourceEntity(46U);
    msg.setDestination(51116U);
    msg.setDestinationEntity(136U);
    msg.name.assign("EXBFNATIWODXVYGKLCSHNFPXZLXKHLLNNDULKEJKGUDSOLTATXCUDSSODCTUKWGSJXHRRPQVRBQOPYTDKFLTOMAOCMOWKQJFAJQSMFHYJINPGEEMKQZWTBYMTVJZRCZUIWTAUPZQRHIZWSUICDEVAEYBUPKEVHVFASOQJWHBFGXYRQUZQGYJTWYEONCDJU");
    msg.value.assign("EEKMZLHQEJFHAFTHOWNQMQVZNGPWSLKTBVNAXPHARVXODGZDSNWVHOCSUDRITSACYKDTOUIVJPITMWPURAJKGBLYJJMTLXANYKSMYNDTGUKNPVTHEBKQZOIRRKIZMVOUFWEBAGBQOWEGRQVWWHMGZXXUDRESQQLMZKLGOFXDITSYPDCRBIETAFLZHEFHNOCXSIVDZHIXFCLSPWEJAU");
    msg.type = 213U;
    msg.access = 181U;

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
    msg.setTimeStamp(0.534960447247);
    msg.setSource(54643U);
    msg.setSourceEntity(32U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(189U);
    msg.name.assign("PLPJGNHFYKRFPMFFXHOVSYNHXJXDVEBZVSCJWRVDMQXFCWRCITRHIHZYBVAVENUAFDBWWKATQICYMAGEPAEUDABKEMIHQKBHBKNZQGSXTCERBIZWPFKILONKOJOYQB");
    msg.value.assign("JWRZQBNLAPYJLGKFERYVMSHXGYECAFOHTTFNMMKZKLREJQNVJMKODLIVFICHMPXGXXQGZVYERYPDIJUYMLCXEZBUHRDCJSUTUNLWNGTRWPHPOVUIIXAKCTATJJROZF");
    msg.type = 120U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.0217178891228);
    msg.setSource(24052U);
    msg.setSourceEntity(70U);
    msg.setDestination(9274U);
    msg.setDestinationEntity(222U);
    msg.name.assign("DOFAALXOBDWNICQWFRWZDSIGTVERQWLJRYSNUIUVXOBVQPHMJYIUKVLXXTORTRASENMFGXHFAPLIUPOYHJXPWBMMNZFAGUCVVUCEIWJNZZDRGDYYKXEKVPKOETXSMEITVBJIGOTLQGHZXRWWDAKPNJHFZNSQFKPZFGLNEHDONHGCSAH");
    msg.value.assign("QXZPWJJSVZMXSKTOYZCCACI");
    msg.type = 122U;
    msg.access = 79U;

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
    msg.setTimeStamp(0.260694075703);
    msg.setSource(9057U);
    msg.setSourceEntity(254U);
    msg.setDestination(54271U);
    msg.setDestinationEntity(173U);
    msg.cmd = 98U;
    msg.op = 167U;
    msg.plan_id.assign("CNMWMEWSJCPENPUBHWAXKWCLETQUWPZYZLBBIATZWKRJSSHNZYTKTPCEGDODIHIHXVOGGCKUBARRKITIHHQMNQDDODLOKMVFORZUAQKSVBMG");
    msg.params.assign("VTVHXHABVVRSBNFNUOCCVGULGPWLMEVXSMARGFMOWLNWPTKAVDQQFEGBFKZTUDIQXHNDYARYCILUXNJRIQWNEUEXOMPQOONYTLAJUUCKWDZKXHNOSOTDAPSDJIRRUPDDJQWEGZIIKESIHMBSLRJMQINBQHLKTGOHZVUBCZQGYWAGPGAEPSCMTJYCFCHCUWXCJJZVXZLAHTJPOMWBPDTXYLW");

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
    msg.setTimeStamp(0.25269693786);
    msg.setSource(13358U);
    msg.setSourceEntity(199U);
    msg.setDestination(25165U);
    msg.setDestinationEntity(65U);
    msg.cmd = 156U;
    msg.op = 83U;
    msg.plan_id.assign("PAYSEKRQHKQPHNMZEXEIZESRTIOCSXFOSFLRSUHGLJNXHCBNVBNDAFBBYOICJNATEFYNKIEMALXISXTXAAKCQCDJLOKMRFJUBACWJZICYQ");
    msg.params.assign("KPPCEVXHOTYMNWNHEAJCBJGJHTIEOVDUKTMSGWGHWDONWCNJAZCFSSGLKQRZKFMFECKQZSIUYIZEDTZVRJYGKSTSVBUARBIXPZEZGUVBZJQQXRDHGAOOAKAWFTWSSTAQVHMNDEVLCBFXPNMMFKMIWXEMHDSGHJTYBVMZQBROIBCUOHVWYPRIBKQVELACQTCIIUPPJNYSHJUQRFRORDAIAULXCFDJXUYPXXMLYOPWKDZPLONGQNTELGFYD");

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
    msg.setTimeStamp(0.743139441664);
    msg.setSource(26412U);
    msg.setSourceEntity(92U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(134U);
    msg.cmd = 189U;
    msg.op = 142U;
    msg.plan_id.assign("ETZNIJIDGAOGGNBARPSDBRKWJQVMCOJTNGDXAG");
    msg.params.assign("KGEWOTLPIELUUFQMEVWDCWRGJJUOSARCSZRUQSQBTSZYHTJGSBZHASJAXZIEVXVRULDIPWUMDPGHQYQLFOAKBFNXMMZFSMHJCVYVUSRXBOLAZDXEONWTCOGDRSTGYNGMKQFRKOJAMNLBGJPABGELDBQBVPZYTTU");

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
    msg.setTimeStamp(0.823767328259);
    msg.setSource(18070U);
    msg.setSourceEntity(228U);
    msg.setDestination(44740U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.392958250209;
    msg.lon = 0.282389258935;
    msg.depth = 0.066189016674;
    msg.roll = 0.253497694626;
    msg.pitch = 0.0919879288057;
    msg.yaw = 0.0485298839838;
    msg.rcp_time = 0.936909528749;
    msg.sid.assign("XFMJZCVTLQMAEXLCUGAZPZHUNYSGOZKDNXNIVDMTCMSWMBXDFWUOIIJQHVXQPAANTPZBFSIHIKQBRFBRVKUGW");
    msg.s_type = 153U;

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
    msg.setTimeStamp(0.393569987491);
    msg.setSource(60631U);
    msg.setSourceEntity(249U);
    msg.setDestination(10371U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.377567989971;
    msg.lon = 0.180880810356;
    msg.depth = 0.457818928032;
    msg.roll = 0.716901396628;
    msg.pitch = 0.158736634842;
    msg.yaw = 0.135388925326;
    msg.rcp_time = 0.918522354176;
    msg.sid.assign("MJFIFOAHJWJYBKREGCJNOUTLKXTRKZGMAEOEMPYKSGIDQTLMXBOJ");
    msg.s_type = 126U;

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
    msg.setTimeStamp(0.801172292025);
    msg.setSource(53528U);
    msg.setSourceEntity(194U);
    msg.setDestination(51441U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.215945633713;
    msg.lon = 0.940633793451;
    msg.depth = 0.900825367019;
    msg.roll = 0.344868142514;
    msg.pitch = 0.334130806536;
    msg.yaw = 0.171507492607;
    msg.rcp_time = 0.374406395688;
    msg.sid.assign("GBTGAQVUUPPZICCDAYWLGXZETJGYIZDIDVXSTQMRQKYJZTCAEUIJRYASPFZKRNDUESNHQMUJHVDEWWGMTNRUIIXGACVLCYLHNFRFTRSBWBMVKWFMZIOWKOSFEF");
    msg.s_type = 78U;

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
    msg.setTimeStamp(0.917287464457);
    msg.setSource(7953U);
    msg.setSourceEntity(76U);
    msg.setDestination(17196U);
    msg.setDestinationEntity(125U);
    msg.id.assign("VATMOAEBBBAVXXFJJTWOAWOZFVMCWRRZEJINCWUYIDTPKNLIQRJRAHSZTWTQDTMHVQYUJOSHXKSDGLRNSSUZNXUFCKFLGSPGXGAELRYMEBPDGZOALIBUWKHQWZREDOHNSXAENSKVFVMCPDDCYIRXWLMEBNBL");
    msg.sensor_class.assign("XENASZOSWCUSMCBMLQUYZHJYHTMHLGOJSIXTKVNFURRVKHLLBSUPVXXXBARDUFYCAFWPJSDFEMCWPKFZRGQOWDLYEUQTRKZYSHHFYBAFEGWIWPFZTXEVGWZIJTAURAPLGKAINBOHMYVQTGEUPBVNJDDLYXZVZONXKNBHIPDJOLWRTPDQIFVANDMKBIAPMMQRQGTVJOLIRJZOJYQTKSIGKELVMNGUNQYXGCWOBCHDNW");
    msg.lat = 0.058751520541;
    msg.lon = 0.844872451844;
    msg.alt = 0.0536539794583;
    msg.heading = 0.189072688339;
    msg.data.assign("IQGJQLBFIAYZIPYZBMKTAXSGNEHRNPBJUMCFLV");

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
    msg.setTimeStamp(0.0933981292747);
    msg.setSource(2719U);
    msg.setSourceEntity(90U);
    msg.setDestination(6011U);
    msg.setDestinationEntity(65U);
    msg.id.assign("XGYEJFAJYPDVIMFUVPGPWMZOLCMZQYJJHBDQOGDRWJWPFCNOCWXZBBUTTUHGXIZUIAUKRVIALBSZLDZTKUPZFOYXTKRFRNCFOUNCYQEHVMSWEAGNATKSNEAGIEHZXJFAWLYRUOFGWTQBNOQRNTBMVMDFRLSVMIXSWQRBAVCSJMEEHBKBIDDEYTAEEICXHCPIJCTDDXXWRGZJSJWKGKZ");
    msg.sensor_class.assign("SRNRRQADXJEPJSZO");
    msg.lat = 0.800362551994;
    msg.lon = 0.62580107922;
    msg.alt = 0.786452016048;
    msg.heading = 0.386245768854;
    msg.data.assign("YSECVARAUCALDSJBDVIHWQIINHPTWFWVMMHVRVHTKJZNUKIQQKMGJPIGASXXMLBEZMCDCB");

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
    msg.setTimeStamp(0.482925961261);
    msg.setSource(23093U);
    msg.setSourceEntity(179U);
    msg.setDestination(58123U);
    msg.setDestinationEntity(199U);
    msg.id.assign("SFFDKAXHEIUFKAMGXRRQMQRUHVHWAXPDHYPFAQMNALBMFRUPXLEO");
    msg.sensor_class.assign("XNKLJWQWTSDRFJPBEURSVNNXZUCFKQPCMBNOFHWAHSEKYWGHMZREVTOJADGMYKHVPCUBHLCDHXDCLDRPNRYSIQNJRRSQXVRUGSSLCQMGOKFLSUULFIAZZTFOGWQEEFIEBWXXPXRKCCJMTYDMCCHRIAZPZKBD");
    msg.lat = 0.0886095124038;
    msg.lon = 0.803368027811;
    msg.alt = 0.388816562406;
    msg.heading = 0.841526914922;
    msg.data.assign("LISGAPNCXBPMOEIUBFWQXJTPBXCVJWENAUJJ");

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
    msg.setTimeStamp(0.0622975383985);
    msg.setSource(59301U);
    msg.setSourceEntity(80U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(21U);
    msg.id.assign("YNYVMULGZCYIRPQNZFAHDJHIFAEIVBQHBHIRCTDAIGGHBMDPUIMNPLXBUJXPOWCZJREJFSRMRUBATQFMKFNNFXCWPOAYSGGPNTBPGQNYEWJTERSXKYGOGXKLUBXULLTBDQWOIHFGOXTKJEIQWMJZPDCLRDWSRM");

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
    msg.setTimeStamp(0.663816565939);
    msg.setSource(50464U);
    msg.setSourceEntity(7U);
    msg.setDestination(20141U);
    msg.setDestinationEntity(132U);
    msg.id.assign("RMFJZAELKBLYYTKDSLUSJBXCJNDYXSTRWHKUYUJKI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VSGDMMXEFISWXJJLFWJJEXZJITVDCFRCMNLVNKQSAXGOZUFGHBUAWYJQZVYWPBBZFUOGHSRSSRPQOLXFQQRKRQGKBNKAKEYKUNROTMCLNYRZUGBCIQLFLPXVZTOFNOMGYMDLPMBTJZIZMOHQTRICXWWHGDJHFLESSIYYHPTCLCFWBXUCPBEARUAVAZNEDKGAJCISCQBTKTLPNPWHEBKVVDVVYOQDWIESOAAUHYEPUOPNXHEDIIJMXKUNTMYDZ");
    tmp_msg_0.feature_type = 75U;
    tmp_msg_0.rgb_red = 14U;
    tmp_msg_0.rgb_green = 75U;
    tmp_msg_0.rgb_blue = 59U;
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
    msg.setTimeStamp(0.0579446348978);
    msg.setSource(9166U);
    msg.setSourceEntity(247U);
    msg.setDestination(5448U);
    msg.setDestinationEntity(184U);
    msg.id.assign("ROWVWEYULAQNYMKMLBISLGNXPIDSBFGKURFCCSIQRZBWEPJMRHRAIRDEFZRDVGSPDOYLXAXFTAGZWKZ");

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
    msg.setTimeStamp(0.314059963229);
    msg.setSource(50383U);
    msg.setSourceEntity(78U);
    msg.setDestination(49647U);
    msg.setDestinationEntity(230U);
    msg.id.assign("MWDTKGOXVETRNUUQOOSZEXHAFUXYDZQCSHZERLPXEMPJDRKHZDASUIEGNPYJZJNRSJIJHDJRWJBYBCWDDKJDLAKQHQQVFLTDLGHFDWIW");
    msg.feature_type = 77U;
    msg.rgb_red = 56U;
    msg.rgb_green = 246U;
    msg.rgb_blue = 235U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.983032750512;
    tmp_msg_0.lon = 0.930356589851;
    tmp_msg_0.alt = 0.498386781142;
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
    msg.setTimeStamp(0.796592077603);
    msg.setSource(61390U);
    msg.setSourceEntity(146U);
    msg.setDestination(36314U);
    msg.setDestinationEntity(160U);
    msg.id.assign("VLUXLLIWKJKUBLJCFNUHQPRLZOVKOASWMNSNCPYJXCHEEERCWLQQVHWBSRZGHQHYQADIOMYEJFZKUZTRYICLPKLZNGZBAFGVQMDVLBAZKXUEOHWM");
    msg.feature_type = 52U;
    msg.rgb_red = 82U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 181U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.37277273481;
    tmp_msg_0.lon = 0.760442253893;
    tmp_msg_0.alt = 0.187156909851;
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
    msg.setTimeStamp(0.234637933976);
    msg.setSource(15014U);
    msg.setSourceEntity(211U);
    msg.setDestination(28891U);
    msg.setDestinationEntity(84U);
    msg.id.assign("BSTEYRBWZCTHRMEDZNYVOLZRGMTLRYWMNTSHBNAAZSQSOCWCSYXNLVGQNJHWGPNYAHRXEDZXGTPKGKHTAGECXQFLSJCFXRNIWOSDPVEABJXJEVOQWSWPAFTUPMXIIRXWTCTKDKEWKKOPCRONCHMIXHSEWJUJMLHPUYNGUFVIDKOZBIUMCDQFCMDFZTUVIIDQUVIKVFPLQSFAKYJEHQNVMBZLLJGAKEZ");
    msg.feature_type = 152U;
    msg.rgb_red = 153U;
    msg.rgb_green = 113U;
    msg.rgb_blue = 249U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.541250767253;
    tmp_msg_0.lon = 0.213098651646;
    tmp_msg_0.alt = 0.859224793063;
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
    msg.setTimeStamp(0.586153877513);
    msg.setSource(7141U);
    msg.setSourceEntity(138U);
    msg.setDestination(38449U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.28668828264;
    msg.lon = 0.480574942649;
    msg.alt = 0.31929552486;

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
    msg.setTimeStamp(0.582626076059);
    msg.setSource(41126U);
    msg.setSourceEntity(53U);
    msg.setDestination(29655U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.743748971121;
    msg.lon = 0.493382556897;
    msg.alt = 0.711890566465;

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
    msg.setTimeStamp(0.930722995955);
    msg.setSource(20989U);
    msg.setSourceEntity(210U);
    msg.setDestination(14317U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.0960116922648;
    msg.lon = 0.0945919772637;
    msg.alt = 0.286988089995;

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
    msg.setTimeStamp(0.102747414428);
    msg.setSource(64338U);
    msg.setSourceEntity(230U);
    msg.setDestination(26611U);
    msg.setDestinationEntity(213U);
    msg.type = 13U;
    msg.id.assign("UHVGIJXCSUETATJEZULCBRRHYXJJNQNVZUIAHNBPHAVOTZYAMIXGSHCXIROYSVEAGWQBQFZLSORPEUAFXPVVZGMPSNMOONIRCJUEQJRAHYPYBJOTTQC");
    IMC::LblEstimate tmp_msg_0;
    tmp_msg_0.beacon.assign("KVGNFSPIVHZCABHDJXXEBNSRIKFOGRYVBLYXVUMGYRHMUIDPCYYQOZZSSZGFWPCGALGTJULRQFKTJRMCRAQ");
    tmp_msg_0.x = 0.914934290516;
    tmp_msg_0.y = 0.955129590179;
    tmp_msg_0.depth = 0.562488116058;
    tmp_msg_0.var_x = 0.27268463687;
    tmp_msg_0.var_y = 0.837011706681;
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
    msg.setTimeStamp(0.326252751992);
    msg.setSource(46323U);
    msg.setSourceEntity(198U);
    msg.setDestination(45100U);
    msg.setDestinationEntity(59U);
    msg.type = 155U;
    msg.id.assign("SODQUMUBTHOSVNRJNPHGQJNILMJKAJKIBTYSPAVIAHEJMDXJLHKNADOZDOGNSEOTSBLKFQHWVTDYTXIWIFRRVWWMSXFJNZRFUTITORGXISHFGNZERFYCPGPVGANADEB");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.614614861251;
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
    msg.setTimeStamp(0.940161759208);
    msg.setSource(37097U);
    msg.setSourceEntity(244U);
    msg.setDestination(24748U);
    msg.setDestinationEntity(4U);
    msg.type = 92U;
    msg.id.assign("FHFKHGRQWIPTKNOLRPKWKLWY");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.650400897491;
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
    msg.setTimeStamp(0.543695488881);
    msg.setSource(59784U);
    msg.setSourceEntity(10U);
    msg.setDestination(37965U);
    msg.setDestinationEntity(70U);
    msg.localname.assign("QAFSGKNXFSQKGDXJVMCDDKNBGIAUINICSDNFVYEPBECWEDZLPPOPLBYAFKYTPWSROIGJTKWTGAOIHFKRTRHDKHVLCLBDVARIVJIBJZCMXHENCZHUESOOXQXLFBLWSFLUKQOBWREEVVOJNHLHACSBXGCRQTHXSZNZAGAUYODPVJJPJIBUQFZNMWKEJAIEWMKPZWMUYEJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KWYKNEQHSGJXEISSOPQSAARXZKHAPKLE");
    tmp_msg_0.sys_type = 40U;
    tmp_msg_0.owner = 61121U;
    tmp_msg_0.lat = 0.552020049947;
    tmp_msg_0.lon = 0.679190174496;
    tmp_msg_0.height = 0.462619916863;
    tmp_msg_0.services.assign("DJKLOWAONOVKNPSOMRAICJLFDHUTEHZFVSBUCGASWJBURPLSMXMGQZGLARUVQEDKFGAWTDBJFVWRRJASIXVTK");
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
    msg.setTimeStamp(0.0598624513584);
    msg.setSource(28170U);
    msg.setSourceEntity(73U);
    msg.setDestination(44752U);
    msg.setDestinationEntity(48U);
    msg.localname.assign("SCVUFHADXOCXMHOMTZKVCNHRLFKUUZMZSNVXYDZJYKTDWWOQHQATPYFELBRRFPQPSRIKBIBBGIDRW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BNMZFNZDCMMRRCQYQYWUXZIVSOAIDGPQOUAPRBNDYQAFZQWGCOJSOSTOTXIVKBGMRDCAZEQHKAUWRGSKMLRZTNKLCMVIDZJLEIKQGJSBGDFNXSVJHGLLVHPIUPNSAQXEYHPXGOYAEZYTJXCTESNBLOKUKRVMJEHMGWFTYDSREKASTMYFWPYBJUEFXW");
    tmp_msg_0.sys_type = 210U;
    tmp_msg_0.owner = 35176U;
    tmp_msg_0.lat = 0.897960139212;
    tmp_msg_0.lon = 0.157128796257;
    tmp_msg_0.height = 0.0794404841963;
    tmp_msg_0.services.assign("AVPYFZQDWBKIVOUPGELFGXTEDYVUVRCZEOMVEJIQVRGHXKZNCWCZYDSAXUMQUONDBKFHFINJUBDSRSNNJGNJDQXSTKEJLWQFTOPPBTHBTKEQXMAIMRDKVJKNNAUPTJNYPIDQTWFHBOIVIRKLCKRILDYPSSWWLPXASBCBCMPWLTHOAHOKJYFREURGXMMPAYTQJON");
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
    msg.setTimeStamp(0.11062104483);
    msg.setSource(22562U);
    msg.setSourceEntity(50U);
    msg.setDestination(50941U);
    msg.setDestinationEntity(15U);
    msg.localname.assign("ATJZTAUCZODSAZEMVKBLFHZIAFWYXWRTEOBHKVQJLMUMVVOISTRYILNTAKMYSZZALKGSRENVZKHNCPUBYYNPRUVKZQPUXGZMMAGUOUQGIVPYWPQCFJHFJDKRLFSWXYWQGGNTOQBDRNILJMOFLKXGPFE");

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
    msg.setTimeStamp(0.293370430088);
    msg.setSource(20607U);
    msg.setSourceEntity(121U);
    msg.setDestination(2183U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("HMOSCBOWTQIJEHFQMVWGKKDACTDZDWTFHRMHELUEWPQNKPWYII");
    msg.predicate.assign("THDPGRCNQGVMRNXIUPTOZPCLFKVSUEDSFHHUSUIKPBUJTAJSBJAIFQLDLYBRCARYNDDXMTVGBQYUNMLEADWFCKNREFLQCZBDMYYNDHEADVZCXAFXHVLKJUJJMOGSNSZZKJWREM");
    msg.attributes.assign("VZUQVMCKEPCODUBRQRETFAJHQHDEYTBDLWNLYJEYJPDOWZPRFYSLEINGNNQRSLXVFSC");

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
    msg.setTimeStamp(0.39885978739);
    msg.setSource(3283U);
    msg.setSourceEntity(131U);
    msg.setDestination(4684U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("HJFRJFZALYOVMIHTTBIGZERTFEEPXSEJYYXUNMMTOD");
    msg.predicate.assign("SPBWUSJSSRZDKBQOJGBDQGMGOTAJPQKUWNXLKZEPEOZJQRFPQWWALX");
    msg.attributes.assign("JSCCOSPIUCTKRGCQKYBJMSGAVXRWZOSTKZYIULAPNKEZVKTDQPUINLJUDMVOBUWFINSYNTJYEZSGP");

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
    msg.setTimeStamp(0.280627342797);
    msg.setSource(60639U);
    msg.setSourceEntity(192U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(112U);
    msg.timeline.assign("HHGYESGRHJWQBJWILMBPGMUQIZWJSPANDLYIEKMNSJFAUUEQAGDTSFABMTIEPKYALJTK");
    msg.predicate.assign("JXNALFMUFBQLEXJQVDMDTIEQUGMYFNUZNWJQSXPTAGAWBCWYPEHBXTJCXKATGQHKIOSJMHNUFYIZGDCDJOOHUTHTKMQZPUZPGULMLXBRJHWVEQVIBLVESKPXWGBAMJZCVAYHVUNWXFGYVEPMGCAWMEDSPFONZXHNPCOFQRKNZXRKFRCROAKWIYEBITBVZPFBLDS");
    msg.attributes.assign("BZIQYBZQUMKZUKNAFJWYWLSWBLDD");

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
    msg.setTimeStamp(0.779627787244);
    msg.setSource(46444U);
    msg.setSourceEntity(253U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(153U);
    msg.command = 134U;
    msg.goal_id.assign("EVFGETRGCNVTAJVPLMREISXFVKFYWTSDZAHDUUXLLEKPDXGMNPPORQKQTUIVKJVVFUNQIWTKWZHRDTFTYBGIYGRFBRAEUYBEKXXKDQFOCZPLVPSGKHZSSOYZFCIJEDQAHMWMZHMAYLBJMQNNYZJGSZONXBCOFMKBRMXTHDFRMTQJDLLSVBUEQLSKI");
    msg.goal_xml.assign("PJBUDCIUISXFBYYTOKQHRAVNGDPCPAQZOYGHFFTCVVVVCJPKKSJZBPUQKYYAVIYKIVTUFNNEWXCUVFOXHRSNQIINIONMYLWAMZSOXJHLBZDSCJLWNHUGBGDOKEFTBAPHKZPCZGAMGKET");

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
    msg.setTimeStamp(0.19131950513);
    msg.setSource(56794U);
    msg.setSourceEntity(103U);
    msg.setDestination(58985U);
    msg.setDestinationEntity(232U);
    msg.command = 219U;
    msg.goal_id.assign("YCJYVYESUKPHNUVHXTFCVITHTBWLBZRQQEKTCIFLNADDQAMGDNOZVHTMGMYKUWKXOFMKPESUOND");
    msg.goal_xml.assign("PERODNAGIZQXXV");

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
    msg.setTimeStamp(0.384876311248);
    msg.setSource(57434U);
    msg.setSourceEntity(196U);
    msg.setDestination(57271U);
    msg.setDestinationEntity(200U);
    msg.command = 16U;
    msg.goal_id.assign("PZLGOSLLMXRBHCHMVEZKMDSFOPJBAIVNIGQIQPKHVEBRSDHMFCQFUBEARBBDLRJJYHMQDWTPETKIRQEYNOOSBTKKRVXMGYFNVOKRCOCKEYUVTXXTGSDWGVXNMIRKBDVFTONTBSPYWNJWKMIFPRCQFRCJQHWIZYEVTFZVXGSQJYPUOPINTNQUDNALQCJDMZUIYAZUOZZSSYWDWEAZXHLB");
    msg.goal_xml.assign("MZKKCGTDSYJVMOBURPNSLOFALPHNWIPOHOFSITLWYXGACMFAFMBFSEBWBXGOBGXLHFUNOQDEKAZNHCYCSIHUTYDSENYXKKTSLGZOEQSYFHDUGTLXQWODGUCJAWTRDKTJIQGLNTIWCRPIVZVBNPHIQIRMJTPKYMPMVVQNVKACSRKYLNXUZX");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.875484913062);
    msg.setSource(35854U);
    msg.setSourceEntity(159U);
    msg.setDestination(59846U);
    msg.setDestinationEntity(226U);
    msg.id = 79U;
    msg.width = 25354U;
    msg.height = 35175U;
    msg.widthstep = 18569U;
    msg.channels = 15U;
    msg.depth = 51U;
    msg.finaldata = 56U;
    const char tmp_msg_0[] = {-17, -44, 72, -11, 101, 31, 48, -99, 112, 69, 84, -98, -81, 120, 110, -43, 22, 119, -13, 96, 119, -46, -45, -27, -67, 60, 10, -35, 32, -124, 61, -109, 61, 43, 2, 23, 56, -104, -86, -65, 41, 112, -6, -105, -75, -63, 31, -48, 50, -122, -85, -23, -38, 63, -94, -2, -67, 70, -96, -34, -32, -113, -68, -119, 121, -39, 16, -5, 33, -116, -82, -3, -117, -61, 70, 114, -33, -108, 52, -79, -5, -28, -68, -38, 90, 47, -11, 77, 92, 90, 122, 110, 57, -23, 47, -11, -125, 49, 84, -127, -52, -115, -29, -126, -76, -93, -6, -73, 23, 20, 33, 114, 71, 44, 92, 105, -122, 14, -99, 73, 124, 109, 43, 79, -127, -74, 94, -104, -15, -87, 68, 46, 34, -61, 78, -24, -66, -24, -119, 34, -55, -15, -100, 118, 120, 28, -65, -73, 95, 29, -40, 105, 35, -124, -13, 35, -68, 96, 61, -25, -89, 2, -68, -85, -75, 36, -33, -36, 92, -6, -120, 67, 61, -126, -118, -102, 32, -115, -31, 113, 50, -30};
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
    msg.setTimeStamp(0.663545256834);
    msg.setSource(6835U);
    msg.setSourceEntity(92U);
    msg.setDestination(50491U);
    msg.setDestinationEntity(78U);
    msg.id = 47U;
    msg.width = 29789U;
    msg.height = 60022U;
    msg.widthstep = 35435U;
    msg.channels = 207U;
    msg.depth = 214U;
    msg.finaldata = 9U;
    const char tmp_msg_0[] = {-96, 101, 90, 118, 111, -29, -54, -47, -60, 26, -80, -20, -47, -90, -11, -62, 40, 58, -28, 78, -3, 123, 120, 101, -44, -78, -25, 70, -7, 59, -21, -54, -42, 69, 40, -33, -20, -73, -126, 45, 63, -102, -82, 9, 5, -5, -53, 9, 72, -68, 50, -116, -84, 23, 38, 99, 25, 63, 37, 46, 23, 90, 58, -86, 117, 72, -28, 37, -85, -96, -54, 64, -31, -41, -80, 28, 29, 44, 68, 69, 40, 80, 47, -90, 46, -80, -67, 38, -84, 86, -1, 121, -50, 70, 119, -30, 125, -121, -95, -9, 78, -17, -26, -83, -105, -97, 90, 77, -51, 53, -40, -112, -3, -1, -78, 76, 15, -108, -63, 117, -123, -9, 111, 93, -114, 94, 8, 116, 75, -122, 28, -5, -128, -37, 101, 12, 72, -44, 4, 45, 95, -104, 120, -120, -124, -85, 50, 40, -85, 64, -11, 9, -101, -111, -107, -102, -30, 80, 36, 102, 64, -112, -57, 126, -117, 14, 39, -115, -71, -46, -50, 124, 36, -77, -4, -120, 20, -25, -107, 122, 1, 54, 14, 95, -92, -35, -40, -86, 74, -51, 112, -36, -117, 90, -89, -43, 108, -1, -95, 19, -15, -90, 55, -78, -73, 73, -3, 48, -64, 106, 28, -21, -87, -102, 54, 125, 64, 27, -6, 75, -83, -57, -89, -103, 88, 61, -48, -8, 90, 100, 108, -17, 17, 85, 92, -54, -65, 77, 24, -110, 111};
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
    msg.setTimeStamp(0.923020273638);
    msg.setSource(14107U);
    msg.setSourceEntity(20U);
    msg.setDestination(49872U);
    msg.setDestinationEntity(188U);
    msg.id = 125U;
    msg.width = 43850U;
    msg.height = 36872U;
    msg.widthstep = 42240U;
    msg.channels = 130U;
    msg.depth = 199U;
    msg.finaldata = 114U;
    const char tmp_msg_0[] = {-114, 49, -17, 112, -111, 110, -14, 18, -21, 102, 30, 63, -94, -115, 91, -123, 117, -3, -121, 91, -48, -79, 103, 50, -32, 62, -3, 41, 19, 85, 79, 11, -49, 96, 21, 87, -14, 98, -72, 116, 42, -86, -12, 114, -66, -66, -95, -121, -78, 110, -66, 125, -22, -114, -25, -122, -92, 9, -89, 22, 39, -102, -5, 99, -116, 59, 67, 115, 124, 40, -82, -91, 46, -14, -94, 40, 106, 86, 40, 81, 48, 10, 99, -76, 82, 53, 110, -128, 39, -108, -16, 96, 125, 52, 10, 57, 105, -88, -41, -92, -26, -62, -61, -113, 38, -103, -47, 87, 27, -112, -90, -11, -91, 39, -49, -62, -18, 108, 52, -111, 37, -118, 95, 81, -67, -60, 16, 117, 68, -14, 54, -31, -5, 33, -25, 50, 73, -62, 74, 118, -122, 123, 76, -66, 36, 69, -76, 82, -106, 62, 99, -110, -25, 49, 12, 122, 87, -115, 39, -25, 31, 41, -44, -70, -85, 74, -119, -98, -84, 59, -117, 101, -13, 35, -73, -108, -77, 1, -22, -41, 94, -7, -12, -20, 66, 18, -72, -66, -57, 51, 24, -91, 52, 57, -13, -18, 118, 28, 19, -23, 5, -99, 83, -93, -63, 1, -58, -44, 20, 17, 71, 39, -118, -92, -75, 91, -77, -108, 54, 75, 89, 84, 89, -28, 45, -91, -16, -97, 47, 97, 58, 117, 87, -43, -102, -102, -56, 126, 88, -97, 19, -10, -38, 97, 44, -42, 29, 82, -47, 122, -90, 59, 48, 4};
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
    msg.setTimeStamp(0.975632838731);
    msg.setSource(2919U);
    msg.setSourceEntity(252U);
    msg.setDestination(12515U);
    msg.setDestinationEntity(79U);
    msg.width = 11968U;
    msg.height = 16719U;
    msg.channels = 47U;
    msg.depth = 27U;
    const char tmp_msg_0[] = {-24, -24, -24, -118, -59, -101, -4, -128, 12, -54, -55, -23, -39, 78, 18, -98, -122, -52, -62, 72, 110, -69, 81, -64, -121, 48, 42, 80, 9, -98, -75, 61, -56, 92, 13, 105, -59, -93, 0, 112, -24, -36, -45, 23, 84, -42, -45, -57, -110, -38, 82, -13, 126, 31, 37, -59, 85, -106, -127, -93, -6, -10, 68, -127, -19, -76, 11, -72, -28, -97, -128, -92, -27, -67, -80, 108, 56, -126, 67, 97, 98, 4, 93, 58, 101, 12, 13, 54, 114, 63, -113, -76, 5, 85, 10, 80, -78, 76, -104, 76, -58, 80, -45, 108, -98, -67, 126, 25, -123, 85, 80, -3, 48, -5, 111, 119, -31, -8, 59, 108, 97, 120, 68, 15, 27, -28, -39, -87, -100, -70, -8, 1, 112, -118, -3, -93, -77, 99, 87, -10, 62, -108, 5, -53, -38, 87, -26, -114, -99, 84, -120, -2, 95, 6, 86, -113, -44, -103, 8, -55, -47, -70, -35, 85, 119, 34, -72, -106, 21, -36, -75, -78, -72, 126, 55, 18, -99, -113, 7, -82, 84, 14, 92, -55, -95, 83, 64, -30};
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
    msg.setTimeStamp(0.920494362266);
    msg.setSource(35054U);
    msg.setSourceEntity(180U);
    msg.setDestination(35737U);
    msg.setDestinationEntity(108U);
    msg.width = 18435U;
    msg.height = 43631U;
    msg.channels = 61U;
    msg.depth = 89U;
    const char tmp_msg_0[] = {-120, -3, 69, -80, -114, 120, -100, 13, -13, 89, 123, 117, -3, -11, 60, -23, 83, 16, -28, 1, 19, -10, -79, -20, 28, 124, 96, -87, 45, -44, 1, -93, -91, -16, -22, -52, 65, 116, 125, 101, -55, 110, -59, -44, 17, -92, -17, 100, -23, -44, -86, -19, -119, -66, -114, -77, 109, 81, 109, 81, -100, -99, -107, -124, -87, -55, 117, -42, -60, -3, 126, 7, 17, 63, -32, 52, -56, -106, -52, -100, 53, 116, -14, -41, -28, -49, 84, 85, 89, 124, 99, 0, -56, -109, -43, 54, 46, 59, -114, 16, -62, -34, -37, 43, 103, 64, -88, 100, -11, 119, 124, 10, 58, -63, 110, -46, -21, 15, -40, -13, 27, 93, -19, 109, 105, 14, -103, -101, -85, 115, 59, -47, -54, 98, 74, 18, 86, 19, -6, 96, 76, 5, -125, 36, 99, 65, -43, 104, 34, 57, -114, -21, 76, -82, 101, -18, 116, -6, -110, 2, 19, -31, 69, -73, 28, 50, -59, 25, -110, 54, -33, -23, 40, 22, -89, -86, 53, -76, 76, 103, 33, -24, -56, 88, -86, -84, -7, -79, -18, -41, 64, -25, -33, 74, 116, -1, -4, 47, 25, -118, -80, -103, -117, 23, 123, 85, 44, 46, -5, 47, 77, -83, 55, 68, 85, 78, 13, -110, -84, 55, 110, 21, -14, 19, -96, -127, 119, -77, -108, 29, 84, -6, 19, -57};
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
    msg.setTimeStamp(0.338381360907);
    msg.setSource(31691U);
    msg.setSourceEntity(26U);
    msg.setDestination(40607U);
    msg.setDestinationEntity(164U);
    msg.width = 45216U;
    msg.height = 43522U;
    msg.channels = 154U;
    msg.depth = 254U;
    const char tmp_msg_0[] = {113, 69, -89, -4, 74, 37, -36, 6, 123, 48, -100, -121, 79, -54, -32, 4, -72, 100, -21, -11, 52, 36, 12, 103, -27, -19, -39, 118, -31, -50, -17, -83, 62, 66, -90, 53, -8, 85, 53, 24, 0, -116, -87, 76, 36, 13, 67, 15, -42, -122, -86, 120, -125, -101, 71, -12, -25, 9, -51, -119, -81, -75, -127, 96, 74, -30, -90, -15, 53, -12, 57, -96, 57, 104, 28, 16, -110, 14, 37, -2, 75, 28, 20, -27, -53, -16, -124, -25, 115, 100, 47, 46, 103, -91, 52, -37, 48, -92, -120, 53, -74, -29, 5, 23, -111, -12, 10, 87, -118, -124, 5, 120, 92, 78, -37, 122, 84, -48, 19, -11, 101, 97, 13, -116, -48, -114, 23, 36, -64, 99, 16, -47, 34, 83, 55, 92, 125, 98, 93, 122, -122, -51, -80, -85, 40, -66, -70, 6, -93, -38, -63, 86, -61, -59, 47, 37, -36, 28, -118, -21, -89, 19, -59, 97, 61, -125, -98, 104, -83, -124, 80, 100, 93, -44, -88, -78, 65, -90, -45, -117, -113, -62, 98, 115, 119, -32, -96, -96, -124, 80, 108, 86, -10, -35, -9, 61, -36, 45, -90, 75, -47, 109, -48, -57, 12, -32, 92, 16, -3, -84, -122, 44, 18, 104, 92, 29, -127, -117, 45, -79, -62, 85, -123, 97, -39, 71, -105, -18, -64, 5, 8, -104, -42, 80, -11, -98, 64, -99, -20, -54, 61};
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
    msg.setTimeStamp(0.643990491781);
    msg.setSource(54803U);
    msg.setSourceEntity(249U);
    msg.setDestination(4809U);
    msg.setDestinationEntity(251U);
    msg.frameid = 145U;
    const char tmp_msg_0[] = {-84, 114, 18, 86, 107, -16, -65, -96, -69, 37, 36, -60, 42, 35, -7, -95, 109, 73, -69, 120, -59, -122, -51, -73, 109, -12, -99, 31, 71, 96, -48, -123, 55, 118, 78, 79, -106, -24, -60, 78, -17, 95, -76, -79, 110, -37, -79, -92, 4, -102, -111, 57, -102, 109, 39, -123, -3, -30, 35, -31, -20, 22, -52, -107};
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
    msg.setTimeStamp(0.184351540957);
    msg.setSource(11622U);
    msg.setSourceEntity(54U);
    msg.setDestination(57669U);
    msg.setDestinationEntity(70U);
    msg.frameid = 185U;
    const char tmp_msg_0[] = {73, -6, 33, -102, 13, -40, 29, -4, 105, 47, -58, 40, 5, -88, 101, 1, 72, 98, 13, -41, -25, 96, 73, -67, -49, -25, 60, 54, 108, 96, 69, 73, 1, 36, 79, 18, 115, -71, -4, -26, -13, -62, -112, -38, -62, -111, 51, -119, -52, -93, -113, 86, 65, 84, 101, -46, 110, -92, 23, 29, 113, -45, 32, -38, 18, 42, 56, -93, 19, 110, -73, 38, 8, -116, 19, -18, 48, -97, -5, -24, -31, 11, 94, -63, 19, 45, -24, 38, -101, 11, -22, -37, 24, -17, 92, -118, 13, -63, 25, 66, -58, -80, 121, -95, 7, -35, 112, -82, -26, -39, 49, -97, -43, -65, 20, -69, 101, -26, 96, -18, 101, 100, -94, 64, -24, 72, 125, -103, 21, -122, -67, 111, 44, 64, -25, 84, 21, -16, -44, -95, -19, -8, -77, -84, 71, 53, 61, 69, 3, -16, 39, -79, 104, -1, -4, -68, -6, 4, -88, 21, 82, 118, -128, 17, 4, -95, -83, -119, -45, 29, -98, -112, 52, 63, -79, -114, 94, -68, 92, 108, -31, -125, 12, -18, -101, -8};
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
    msg.setTimeStamp(0.93634469728);
    msg.setSource(52147U);
    msg.setSourceEntity(159U);
    msg.setDestination(59958U);
    msg.setDestinationEntity(27U);
    msg.frameid = 97U;
    const char tmp_msg_0[] = {-124, -42, 44, 54, 72, -4, 46, -30, 25, -126, -45, -72, -48, -113, 17, 16, 20, 100, 88, -28};
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
    msg.setTimeStamp(0.94797003997);
    msg.setSource(5U);
    msg.setSourceEntity(135U);
    msg.setDestination(57921U);
    msg.setDestinationEntity(185U);
    msg.fps = 149U;
    msg.quality = 225U;
    msg.reps = 7U;
    msg.tsize = 132U;

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
    msg.setTimeStamp(0.805748138098);
    msg.setSource(56961U);
    msg.setSourceEntity(100U);
    msg.setDestination(26376U);
    msg.setDestinationEntity(10U);
    msg.fps = 68U;
    msg.quality = 211U;
    msg.reps = 74U;
    msg.tsize = 247U;

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
    msg.setTimeStamp(0.444417448811);
    msg.setSource(24007U);
    msg.setSourceEntity(254U);
    msg.setDestination(19356U);
    msg.setDestinationEntity(185U);
    msg.fps = 15U;
    msg.quality = 234U;
    msg.reps = 82U;
    msg.tsize = 221U;

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
    msg.setTimeStamp(0.458003892838);
    msg.setSource(37232U);
    msg.setSourceEntity(214U);
    msg.setDestination(57048U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.341173156497;
    msg.lon = 0.523003203382;
    msg.depth = 254U;
    msg.speed = 0.413516639802;
    msg.psi = 0.283148772967;

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
    msg.setTimeStamp(0.459657949075);
    msg.setSource(46266U);
    msg.setSourceEntity(116U);
    msg.setDestination(58032U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.79447417939;
    msg.lon = 0.499982072624;
    msg.depth = 27U;
    msg.speed = 0.433784158193;
    msg.psi = 0.802290270531;

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
    msg.setTimeStamp(0.649590237222);
    msg.setSource(40344U);
    msg.setSourceEntity(229U);
    msg.setDestination(55447U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.43352023847;
    msg.lon = 0.664977862723;
    msg.depth = 199U;
    msg.speed = 0.863709133733;
    msg.psi = 0.17442493602;

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
    msg.setTimeStamp(0.361405479674);
    msg.setSource(62685U);
    msg.setSourceEntity(99U);
    msg.setDestination(56418U);
    msg.setDestinationEntity(190U);
    msg.label.assign("OOJRVQCDPNYOFMNIPTBPUYLQVWRSKCCXMIMSGWXM");
    msg.lat = 0.074738082117;
    msg.lon = 0.458849124196;
    msg.z = 0.849429895702;
    msg.z_units = 1U;
    msg.cog = 0.479547331317;
    msg.sog = 0.615497557914;

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
    msg.setTimeStamp(0.0998921684224);
    msg.setSource(1856U);
    msg.setSourceEntity(127U);
    msg.setDestination(36739U);
    msg.setDestinationEntity(207U);
    msg.label.assign("AANZEIWQSRBUTWESSPGHCDDULNWBNSGKMRUESHUUUINXLEDCLAQPXEEJMAOWRRXKGIJDOFBAL");
    msg.lat = 0.844742785612;
    msg.lon = 0.624382435197;
    msg.z = 0.117808761646;
    msg.z_units = 228U;
    msg.cog = 0.56630975501;
    msg.sog = 0.110758647036;

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
    msg.setTimeStamp(0.0556021824219);
    msg.setSource(2866U);
    msg.setSourceEntity(1U);
    msg.setDestination(9778U);
    msg.setDestinationEntity(191U);
    msg.label.assign("IUOTYDFPLNPBXVOSGOGTSWYXBAHUJDOMJTXBIPLOFGZEZRHVHZJFJCLNWYNQKICNFAMKKBRNBYGMUHKDHPDZKPLTFINKAUJBSZWPILNKROACGWPZLQIDCETEOWZCKLMQLRRMADBHQFPMXPDQTIRNGQXCEFVWINZUEWHEVRCJERIBWEGDDUMSNFGWUAJVWASJIVUPOBLYDCXQFLQFYYQAUZTSYSCVGKQGAXTTJMCARHX");
    msg.lat = 0.33103462302;
    msg.lon = 0.712414219625;
    msg.z = 0.316556067919;
    msg.z_units = 68U;
    msg.cog = 0.760747092864;
    msg.sog = 0.119582828699;

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
    msg.setTimeStamp(0.06889723382);
    msg.setSource(33415U);
    msg.setSourceEntity(3U);
    msg.setDestination(8579U);
    msg.setDestinationEntity(1U);
    msg.name.assign("PPFKHBFEVWTQLJWLPIRSMQFMAQTYZTNHTUXNPYYRUTUTZPFEUZXELLKIOAGSHVHLUBUAUTOXSJVSMEEGNHKWETIWFCGGGDCDOJNQKUSNPSBSBPAHADTIRMTUZHOLHFDZFMWJAQCXYGCWEJVGVJRCNVEEPRQCSZWVPGWBIZJLLDQLKFAIHKRABBCIKZBD");
    msg.value.assign("UFXIDSYSBLXNESOJILKSQVSTEJQQVVIMFZOAUJRYJKZLRPGPCBFYZNACOIMMKIHAB");

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
    msg.setTimeStamp(0.773895151167);
    msg.setSource(39380U);
    msg.setSourceEntity(37U);
    msg.setDestination(64225U);
    msg.setDestinationEntity(54U);
    msg.name.assign("TRFCKIYUVIZTPLQOHT");
    msg.value.assign("KMPDGMCOAVLELZLIUQHUMBFTLNLAOBKSCLQMOXPUZVJKAFJCRZSTUQNPMVORPDIWYQDYADETNMQEP");

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
    msg.setTimeStamp(0.454793501928);
    msg.setSource(6143U);
    msg.setSourceEntity(24U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(223U);
    msg.name.assign("COVHGVMJGOHLBDHSLAUMWIYOTDCCSQKXQUQGVEYCDOUHBUGDNSQOWTZEXSAXZZCRPKEOWXTFKVRZCTZBFDZUKITIYYIUEFHJEVNQNIXYXFRLLLWNNFZJFHAGBAFXJHTMGQDLSFNZLGCDGYIWSBLBPERVKCHXQWVUNATOJCEDJIRTPOPYOIKRUVWVZFETARSDT");
    msg.value.assign("DWVMMCLQKJUTHDJEKPWUCVFJPHTCPEHTCUJHVOVPYAFQUKZCHWNQFGAQSSDRMOZCALKZZVWWNNWUDMDNISAERLDPFEHJXNBGNBQNELXRVXNHVDSXXZZBBPTMMOGIUSJMKHGJERFORKGMALTUWUCFBOXURKUCKRYDRBGNIAEQCWYDIVGTZTOLWEXBQICRNZYOVPXSFYQBAPPRYJBSQTFEHTDIYOLMSZMGTLGOBKIIKHAIL");

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
    msg.setTimeStamp(0.687656236099);
    msg.setSource(36103U);
    msg.setSourceEntity(142U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(147U);
    msg.name.assign("TBPEQLVTPSFWDNCIGJGQJYSARZVZHEFPLAOFBUCFISUBSNBOGOKHX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NVNRYONAEQJVMDAHSLUNNLDOARBGWKRUMVXSBESTXJTWETKTMJBADOKBMLJRCGINHCDDCGBZESPPOEHUUFLGZZRFPXFGGOLILIAVHCMPQULDWKZZUIVZYTZXKFBUMXIORQDEIZZHFFYYCWCICKKRWTVJPPQKOFXQETBBRACMKVIHGRSGUNGQXUFQMJOJTHMINOSLWEDXKCUBIVYCJYLOAVHZGSTHQJMLVYSSXDTWXPAWRBE");
    tmp_msg_0.value.assign("ZFWHEYTBJYPFHKCVZNMAROLHYGJCMEFDYFNJWAZBPFCWGVGIUWMGTXVSTTKTYIXXMYFAZHCLCBDITNPLBWILKVDGBSBSEPXHDYUQQRONSMJSATSILAIUXQDBPIKUHUXGAQXRTDCJVMXTLASRQNLFAEPWSQVTOBVEUOJBADOEXSKPOUHUVWYLLDWFKWRQZOQXJNYJP");
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
    msg.setTimeStamp(0.764176670928);
    msg.setSource(33428U);
    msg.setSourceEntity(160U);
    msg.setDestination(4409U);
    msg.setDestinationEntity(132U);
    msg.name.assign("WKDOPTCSBLWTEOVSVZMCFYLWFGPYKXLYHPNUQFRSFGLVDDXWYKMRQAKBDDHAEXEALEKIELTKICXZBSCAAQBFATACFNHFEOZQZJPVPLGJQIHXMJKGNRYHIMONLSGPXEZURMRXNFSMDTWIWMJOIGROPEQCCRLVARISSSYXGJETYNYJJWTTLVZJBUVJVHKZDGBUBPFERHODBFCU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QQSCEAKPJFGKJLGHJNGYUNBOCXNAFMOMVEWULMMWKVBEASDLYYXMBQPDYFQRLGORXOHDAMYTWNZKVRNZCHCFOQRGRQOKFZSCJGNEXYGWQHHPVYIQBBZUTBSBUULJTABPIPPWOOFNCQDRBUBNSFVUDSTETIPMFJPIOLLKYMCTAVWLDEUWXDTAMJRIDVIJDFCGKJUKASVPITZSKUVXHETHAPDXZLIEJGZCSFQHKWYZZSAEVT");
    tmp_msg_0.value.assign("ARNKJVPYWNRVJGGHIPKHAXCFJHOIQOLMFDBXGHSVCDQQOBKYLHJOZKEETMZCZNRHVALOZDRZPMQBVVPAUEFKXTNYBRLJOWQUGAABFWHLUPJWEWDVJQUMSPFAMYUTFOTNLDBI");
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
    msg.setTimeStamp(0.82556280265);
    msg.setSource(47157U);
    msg.setSourceEntity(1U);
    msg.setDestination(13070U);
    msg.setDestinationEntity(143U);
    msg.name.assign("AOMPROOBNFZBVIANFDIUZCNSALFNVCEKEJHUVVPFREEPPBXKXRFSJGAHLGKISLCCQRZVZDAGXWBCTBGAFKPYWGVSEMPANXCKHDQZBUKJIRXDSSBRJZUYJJXTQKINYZQMVFBLUHCAYDYECZPRYQQGQVKIWLCLXTOJTXHVVUHWLDOGMHXTWKSQHYIR");

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
    msg.setTimeStamp(0.494570414397);
    msg.setSource(11996U);
    msg.setSourceEntity(171U);
    msg.setDestination(33754U);
    msg.setDestinationEntity(107U);
    msg.name.assign("FVBAFIQAZRTAUHRMXNFFSYQCHEIUPYHBQCTRZLUGUKTKOGBNMINRCHZIZCTEFJQNLXODQRRMVAHXELBZDWDMXFSMWGDYNTBCJUXCZRGOKPTKJXHSSQHSNGMQKWKPALWBWRJRBFOFE");
    msg.visibility.assign("DSBSKAJSUIQGIFGFTWBOFDCZJGKMWMHWUIUVQEEVMYXANOHXJPYIXTGLOUHKDYJNGMLJFUGELJRNWZZALKWAJYANZQSATYAKNZYSPQDOXHQAQOXLUHTHLFRYZMWFMCHUTCSNESTEJAPPZBMQP");
    msg.scope.assign("LLGZRFMYFQIYSAZJOVQKRVKHEFTNUYDTECIOGLVVTGWADPJNOETHEVMLERJIGKNXHLTLZIMWHIGHDDVCSOXRAXVURRDJSLWUKWNWOMJBMBZBECFKMIUGDHCANJRZEYXVSUALCBXCEQQMFPCUQCAJXXTPTWFWOGLKEAFPFBPCCMWSJFHDSRTZZBNK");

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
    msg.setTimeStamp(0.617448774864);
    msg.setSource(31976U);
    msg.setSourceEntity(189U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(24U);
    msg.name.assign("XQFQJBSJFKPDHLQNGYPHBTILWW");
    msg.visibility.assign("TPIXJLQSATFENYRESYLGWQTCLUTFCDFRYBCIRAPXNFSQMQPHGXCIFPBNNONRHWTVKNFUPGOYDSDHJEXNSQXMJHHLVHRREAWEKSOUABKYWZVZEFJZRWAYMTVGIGXGBDAUZQUCMBWGXQINEFLRSOVMXJMJJVAKEUQUPPPZEJWANBHYVZTWABTBZBAMCFDIUOHFIQJLIXZPIYIMHV");
    msg.scope.assign("QPMASKGCLOHZPYKRVOGBQJLNPJJRZHSNNOWMIWUMZYVGQAYTFNDEEVBRUQUPOORUABCDUCSOMDFRTHNBWHTIXDGQLIVFKXMFYDZKBQFUSAJYEQJJYHBTKZWRHBDRO");

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
    msg.setTimeStamp(0.16932806604);
    msg.setSource(27898U);
    msg.setSourceEntity(132U);
    msg.setDestination(12268U);
    msg.setDestinationEntity(165U);
    msg.name.assign("SVMJXTUSJDQSHBUZCXVOHGCLXUNPSKYZCMEZOYBIWZEERVAGIVJTKDNREERNOOWSXLGXEIROWPGCZYVWLBVFMHOIYZTPQJYHLLYWAELWGKVMSIUNBJJGHDHTKEKMCRPJ");
    msg.visibility.assign("ZNBDFCXTCLUCIRXYDUGFPDXZFNYPJTISKZLPEGWDLBEGNHURCMNEIERKOQRAEVJJUVHZPWTYQWFT");
    msg.scope.assign("STMVYHZKKCDQBSRBOLCPGGYMLUKMSVRZUHZAXUSOWQPVUHWQNHAFBRWEJIREMWUAIVBFQONOMGSCGMCUVTJPUTRBXDHLYTLZRNTSGKKOEWCXEGYNDXLGOZYJJACSTRPIANJADGILLHFYPCKHYPRAVFQYNTDUHIEWXOQGXITDBQDUNFJHVAVNKYQJFKFXSBUPM");

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
    msg.setTimeStamp(0.0742844669208);
    msg.setSource(45364U);
    msg.setSourceEntity(207U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(4U);
    msg.name.assign("LVMHOUUNPGPUOAQNGLUYSQIIDUERRVPGHPCUCWIORERPPOWOKFVZRZFCKXPFSZWJCKNNYJJLEEQDIRBQKVTWTKOVVCWYUXTZPEGYRUBGKADJCZIWBXWTOGFDQING");

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
    msg.setTimeStamp(0.08489930762);
    msg.setSource(32U);
    msg.setSourceEntity(72U);
    msg.setDestination(23838U);
    msg.setDestinationEntity(191U);
    msg.name.assign("TRSCBOAWYCOTSDRBQBTGTZQZNIXBWVKSGTXVRJTUCMFJYFBRMBFWFKLTHMEUEXHCQZWNDSYBKMPVUCJVJNLQHAUJFEZZZKWSLEOPWYBSBGQMLIQGGQNXINAAQQJLPFSPGFXZYAEHGOLABMQORWPCYHEJYXOTZEDNCPCAVHNAESTDIFJRWKIFUOROMWHKEKRZYUIVNTR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CNIGVRTYZHMKTSZJWDJLKBNHALFPBUBYXFRTEOZFSKGAAYMRYRHBMGHPZWMQOOKRFMPYVRGTHGAEMPTAEGOPIGUQOQQTOPJLKXDOJXNTCGEUIWWKFZVJND");
    tmp_msg_0.value.assign("MSWXHQKRVTXYZEIZIRACTORJANBKAPQMABN");
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
    msg.setTimeStamp(0.468177902165);
    msg.setSource(54797U);
    msg.setSourceEntity(226U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(76U);
    msg.name.assign("NVJPRVRHSXOREPBTHMAFXIGPGOYQDGYIS");

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
    msg.setTimeStamp(0.390838582371);
    msg.setSource(44354U);
    msg.setSourceEntity(62U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(88U);
    msg.name.assign("PIQMKLATBWHGALQPSPGGSHDNCVEXTDUFDVSIQEOQQTLRWKKDCJHUMLZRVNECVPHAIEOOPGWBNYIHNGXHEQJRYOFRMIBLRISBAJDZZWLRHCEXFHFDOMILZYKTYEHZXJWTBKQBYJWDYCDGLXFWCKN");

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
    msg.setTimeStamp(0.697424304774);
    msg.setSource(7959U);
    msg.setSourceEntity(22U);
    msg.setDestination(22441U);
    msg.setDestinationEntity(249U);
    msg.name.assign("QKUYCALHQSIJASUQDGOMIPTLLITRELVHUOJXBPEMYBRNKGLMESFRJVQPTNHPWUFCUIDSNMYMJMELDQOCKEDHJYXNWCJSBBNIPKAESBPMYMKYHOCMFFZWHORWLAZVZXXVOSFDOUIKIRZTQYLYBVZQEPESIRQGZKDSOFBANZRGUEGXHXWPYPWAZRCHJWMTGVGGNROTVCLVTVTNJJUFCWKICFKKGDHQW");

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
    msg.setTimeStamp(0.624512612848);
    msg.setSource(65227U);
    msg.setSourceEntity(43U);
    msg.setDestination(48606U);
    msg.setDestinationEntity(215U);
    msg.name.assign("LXXFUSWTDAXTRRWSEJOKFWWEGYLSUTYURNETIVMEAGZYDQHYP");

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
    msg.setTimeStamp(0.544532596499);
    msg.setSource(27989U);
    msg.setSourceEntity(175U);
    msg.setDestination(59587U);
    msg.setDestinationEntity(159U);
    msg.timeout = 1786872993U;

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
    msg.setTimeStamp(0.127942056794);
    msg.setSource(19135U);
    msg.setSourceEntity(174U);
    msg.setDestination(31081U);
    msg.setDestinationEntity(0U);
    msg.timeout = 1710083496U;

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
    msg.setTimeStamp(0.327193731552);
    msg.setSource(24162U);
    msg.setSourceEntity(210U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(24U);
    msg.timeout = 3949574026U;

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
    msg.setTimeStamp(0.918827175492);
    msg.setSource(12697U);
    msg.setSourceEntity(140U);
    msg.setDestination(63051U);
    msg.setDestinationEntity(157U);
    msg.sessid = 472827492U;

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
    msg.setTimeStamp(0.160531508028);
    msg.setSource(8230U);
    msg.setSourceEntity(161U);
    msg.setDestination(60106U);
    msg.setDestinationEntity(54U);
    msg.sessid = 2454100762U;

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
    msg.setTimeStamp(0.854356845859);
    msg.setSource(65455U);
    msg.setSourceEntity(198U);
    msg.setDestination(32899U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1275677937U;

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
    msg.setTimeStamp(0.872276257593);
    msg.setSource(4342U);
    msg.setSourceEntity(101U);
    msg.setDestination(35744U);
    msg.setDestinationEntity(53U);
    msg.sessid = 1442897828U;
    msg.messages.assign("TFACIQKTELAOUYAOUKXTQQRODFVLTVFWLQIXHXKHCFINCVIFBMGJOYAYDGPIOJMIJMEIBSDRKDNDYNBGF");

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
    msg.setTimeStamp(0.128863706628);
    msg.setSource(42196U);
    msg.setSourceEntity(177U);
    msg.setDestination(39892U);
    msg.setDestinationEntity(9U);
    msg.sessid = 3269464960U;
    msg.messages.assign("SDFZOJQFHXEQBMROPFKOSPFYXEBDWEHNHZWANHJCQRBDWDCMKIWIIQSMQLNOZIXALWHMBNGUFRGXFFKHDMABUGKLDZKRDJKADIIUNUPVKZWXCCXVEFKLIICUUVYJGLJBRARPSJBYXSYJETVYVJPPUTQVYQYONHTSTYEWAWCWUEGTSAONEOOJL");

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
    msg.setTimeStamp(0.246999602718);
    msg.setSource(51644U);
    msg.setSourceEntity(44U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(29U);
    msg.sessid = 3207016933U;
    msg.messages.assign("VUZANERITCYJVFLUMOIEDGMPFKTUAERRZOITHZBFJQSOLAXPBHCXLZGAZHSIASTMIMYQIRRMEPCQSYPDQBSGLUXFFPCWYKVCJRZVTCATKXGRDLAMRFOHBWHQIXBAQQGPJOQLEHDORKEFJYZFIMWVFXWLZKGKKPCUNXBSNVBMPNYHSQWVSLNNGKTGMBZSRKTJXIDZWMUEWHBVYUUTXSBO");

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
    msg.setTimeStamp(0.577026984058);
    msg.setSource(4785U);
    msg.setSourceEntity(57U);
    msg.setDestination(24121U);
    msg.setDestinationEntity(114U);
    msg.sessid = 1111553336U;

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
    msg.setTimeStamp(0.372773629767);
    msg.setSource(30268U);
    msg.setSourceEntity(214U);
    msg.setDestination(35919U);
    msg.setDestinationEntity(154U);
    msg.sessid = 1750282175U;

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
    msg.setTimeStamp(0.136072442711);
    msg.setSource(44391U);
    msg.setSourceEntity(106U);
    msg.setDestination(1740U);
    msg.setDestinationEntity(249U);
    msg.sessid = 564683059U;

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
    msg.setTimeStamp(0.507863237923);
    msg.setSource(11866U);
    msg.setSourceEntity(129U);
    msg.setDestination(55839U);
    msg.setDestinationEntity(210U);
    msg.sessid = 3411768938U;
    msg.status = 110U;

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
    msg.setTimeStamp(0.290340209996);
    msg.setSource(62667U);
    msg.setSourceEntity(72U);
    msg.setDestination(10536U);
    msg.setDestinationEntity(52U);
    msg.sessid = 1763162247U;
    msg.status = 29U;

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
    msg.setTimeStamp(0.0890954727183);
    msg.setSource(29211U);
    msg.setSourceEntity(31U);
    msg.setDestination(38182U);
    msg.setDestinationEntity(164U);
    msg.sessid = 2194175932U;
    msg.status = 90U;

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

  return test.getReturnValue();
}
