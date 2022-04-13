//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 5333e4e0128bcca236cc6af16db02bb0                            *
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
    msg.setTimeStamp(0.8328977966057164);
    msg.setSource(42790U);
    msg.setSourceEntity(172U);
    msg.setDestination(21073U);
    msg.setDestinationEntity(235U);
    msg.state = 241U;
    msg.flags = 222U;
    msg.description.assign("TYPETXFSTMZHWMVRZSHFEIJPFGWUXVUONGEMGDVCXKDRXNSKNJFLDMKOUHUWIVHMPZVQIWGPGXPJTJXURAARAVKRSBJSBCJTPJEZDKENUQHNBGCINFAETVBAYXCHRGQOLYBOKYDIWNVQJIVMYLXZZRCJHNXARPOLR");

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
    msg.setTimeStamp(0.6925357796869092);
    msg.setSource(6238U);
    msg.setSourceEntity(225U);
    msg.setDestination(59610U);
    msg.setDestinationEntity(246U);
    msg.state = 8U;
    msg.flags = 107U;
    msg.description.assign("NAZPMJVUXFQNABUQXBYWWCXSBAYIFIUWRBVIXJHLBPZPSCSAWETYVVEUPKJCTFALSILNMF");

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
    msg.setTimeStamp(0.9040966586177781);
    msg.setSource(51794U);
    msg.setSourceEntity(2U);
    msg.setDestination(59863U);
    msg.setDestinationEntity(60U);
    msg.state = 58U;
    msg.flags = 36U;
    msg.description.assign("ZHCTKLMGPBGMPSXGKEIEUMHCMWJQOUFJMJCOGJWOFEMQLTATRBNRSHFHGYYJRLMQSLEUOWZWNVOCCWEVXLACDBKYQYBEESSTVKXKILNSRMODNLFCURFZKTYIIRJSZYWJZUPFQDSGCWOCURQZABTHLOTMPXCAYNZGUVIURXRALFWGVBBPHYDYWFNQSHHEVIOVIXTIDAAZYFXDALFUBUAOPEJTBHWNDDJZMKVXRP");

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
    msg.setTimeStamp(0.8271501470894588);
    msg.setSource(31670U);
    msg.setSourceEntity(249U);
    msg.setDestination(13814U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.45292087362082734);
    msg.setSource(27381U);
    msg.setSourceEntity(53U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.022614679376480984);
    msg.setSource(6359U);
    msg.setSourceEntity(88U);
    msg.setDestination(21315U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.4145159512094253);
    msg.setSource(54679U);
    msg.setSourceEntity(56U);
    msg.setDestination(64280U);
    msg.setDestinationEntity(104U);
    msg.id = 210U;
    msg.label.assign("UYDOBJONQWNTXYHFSIEHWIZEUJSZGVPLCORIMW");
    msg.component.assign("VBIPWJJURUCBCHHFKHXRGWLSFGCQNEPSHQCYORMYBEIWXJATXKGXKUTJJSGSDVTZTFMQZEZQEISOCJGHMHYEJRFDCKKIYBYFRVGWN");
    msg.act_time = 19014U;
    msg.deact_time = 5210U;

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
    msg.setTimeStamp(0.868282861478711);
    msg.setSource(49379U);
    msg.setSourceEntity(235U);
    msg.setDestination(49023U);
    msg.setDestinationEntity(128U);
    msg.id = 116U;
    msg.label.assign("MFVXHFMPERECEJCRIUOPLDQEFIKWQCYBAYQZMNNCFZGZVJYPJDILMOJEDIOJLRIQLNNHYSDXHUYNKDLBAGUIDUFKXHOXPSTLKWMZXOSVFCMXRWYAUOHFHPKQVACXLBZQVGFHINXTAGBDN");
    msg.component.assign("QZNXDZQZEQADXYREFHKWGFUNDTEVLTNJBWFYRIWPOIXTPXBZBQLVUKWIMSCIYMWRMUGHVEEZRGJLGSCUAHSC");
    msg.act_time = 65473U;
    msg.deact_time = 41752U;

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
    msg.setTimeStamp(0.06479900898651814);
    msg.setSource(4212U);
    msg.setSourceEntity(33U);
    msg.setDestination(22377U);
    msg.setDestinationEntity(245U);
    msg.id = 247U;
    msg.label.assign("UMDPYPBKZCZAYEVMJYCWDXWDIWKUFHLYPWLCMEBJODUHLBEWDRCATLCFTZEMEXBIOSJJTKGFNEVAPALCCFYDTHQOHJRGHJFEGQZN");
    msg.component.assign("ZYLHKWCOBJSMWFDCXRGLFTVZEEWSLASPHYUEMNKYOPEUSMOTFXSQSJFPWKHBKJEJACXULCCZQMDCAZYXYQRPAGZOQLKIFJPUPYMOEXLAINFHYDFQGXTQOMLGZIZRMPEYEFZRDJ");
    msg.act_time = 36162U;
    msg.deact_time = 10731U;

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
    msg.setTimeStamp(0.5655761517042697);
    msg.setSource(23784U);
    msg.setSourceEntity(238U);
    msg.setDestination(27741U);
    msg.setDestinationEntity(139U);
    msg.id = 173U;

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
    msg.setTimeStamp(0.4549471917514619);
    msg.setSource(58670U);
    msg.setSourceEntity(16U);
    msg.setDestination(33229U);
    msg.setDestinationEntity(64U);
    msg.id = 106U;

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
    msg.setTimeStamp(0.32223402804939416);
    msg.setSource(53816U);
    msg.setSourceEntity(123U);
    msg.setDestination(24546U);
    msg.setDestinationEntity(183U);
    msg.id = 41U;

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
    msg.setTimeStamp(0.7738559974350311);
    msg.setSource(31191U);
    msg.setSourceEntity(78U);
    msg.setDestination(61021U);
    msg.setDestinationEntity(203U);
    msg.op = 208U;
    msg.list.assign("VXUIYOVRQQEQJLQVWEXFYHZDBMAMRMBGYIMTIPFFSXDJWSAGANLFREEQCWXIOQMXMUUZNIKDTSZFFHZVWHUMORYOWZJTKYHYNPJBAOGUVSGFWODVSRVLDLBWOVLZGHMQNJLPXADKKRJZRWQHCHZZHPNVUFCCAOGTJBBDLCYPGGEOEPSGQMCNIPYJKL");

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
    msg.setTimeStamp(0.5107481166019234);
    msg.setSource(25576U);
    msg.setSourceEntity(212U);
    msg.setDestination(6234U);
    msg.setDestinationEntity(228U);
    msg.op = 179U;
    msg.list.assign("HFZMUKBCXFBOUFQJUDBANARPEABJXOCNPVTIHHASTPVGJUSNVWSTSDBYXVGIMRDJKQCBILCRJIRAUUKFMTANRUQHSIPUYXOYMAQOLWQWQROQWCDYNCEPWGTGVEFRZKTEVBYSMGZLZNLJXSTBQXPVLZITHIOCWXKZKJVFDSYHMSRMCJHEKGKZFDEYYQDCODPNWONRDXFPHYOTUH");

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
    msg.setTimeStamp(0.6085309867222117);
    msg.setSource(1197U);
    msg.setSourceEntity(123U);
    msg.setDestination(34624U);
    msg.setDestinationEntity(145U);
    msg.op = 140U;
    msg.list.assign("XCNHYNFTGFUIOVPYVWQHJZZAGPVLQPMVBTTVREGKYXUUSIUEHMHZQRKBNLQRHAJHIMLOMTRJXNSJXTFXIYFNTMXEYWJUPAV");

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
    msg.setTimeStamp(0.28549885774933825);
    msg.setSource(37918U);
    msg.setSourceEntity(50U);
    msg.setDestination(35408U);
    msg.setDestinationEntity(247U);
    msg.value = 10U;

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
    msg.setTimeStamp(0.36449841685211926);
    msg.setSource(20345U);
    msg.setSourceEntity(146U);
    msg.setDestination(26697U);
    msg.setDestinationEntity(187U);
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
    msg.setTimeStamp(0.7702472169778897);
    msg.setSource(41719U);
    msg.setSourceEntity(27U);
    msg.setDestination(56706U);
    msg.setDestinationEntity(54U);
    msg.value = 108U;

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
    msg.setTimeStamp(0.1873160874805484);
    msg.setSource(29634U);
    msg.setSourceEntity(164U);
    msg.setDestination(64467U);
    msg.setDestinationEntity(217U);
    msg.consumer.assign("IDZDXMBZFDTKGPJXCMTIMWYEUXSITHJNVMPYBCKK");
    msg.message_id = 25595U;

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
    msg.setTimeStamp(0.8733455412415151);
    msg.setSource(8234U);
    msg.setSourceEntity(210U);
    msg.setDestination(4212U);
    msg.setDestinationEntity(72U);
    msg.consumer.assign("TGTYMXBLERYUSYCFPQKJHHZKPTRQZQXQCRPLKSQPZKONCUODAMVUOIVXNBKSOWGUUNRSUMWNETAGVGAFWLFJLEDZXBDBIAGCJVDBPKJSFPKNMQDGSOYTHIAQSWYLFYIQBPAGMIQIXVJCMRPPJTRSDCTENEKEEWWJSNOBMVLGCYRNXIECZWKRHIUZCHGISUJFWDVVBVNODMUXNKJYZHPIOLFXQBTXWYTDACGHDMHU");
    msg.message_id = 15322U;

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
    msg.setTimeStamp(0.7227092445763632);
    msg.setSource(41522U);
    msg.setSourceEntity(21U);
    msg.setDestination(37007U);
    msg.setDestinationEntity(213U);
    msg.consumer.assign("WEQCAVZBQRZPPMXRRS");
    msg.message_id = 642U;

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
    msg.setTimeStamp(0.4421662771296593);
    msg.setSource(57916U);
    msg.setSourceEntity(54U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(111U);
    msg.type = 120U;

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
    msg.setTimeStamp(0.5377941971054181);
    msg.setSource(50814U);
    msg.setSourceEntity(175U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(82U);
    msg.type = 108U;

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
    msg.setTimeStamp(0.5798697337816081);
    msg.setSource(58901U);
    msg.setSourceEntity(218U);
    msg.setDestination(924U);
    msg.setDestinationEntity(195U);
    msg.type = 147U;

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
    msg.setTimeStamp(0.24245535291853026);
    msg.setSource(59887U);
    msg.setSourceEntity(131U);
    msg.setDestination(58024U);
    msg.setDestinationEntity(187U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.8107288991394416);
    msg.setSource(63376U);
    msg.setSourceEntity(254U);
    msg.setDestination(23796U);
    msg.setDestinationEntity(215U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.5470690415995031);
    msg.setSource(28054U);
    msg.setSourceEntity(77U);
    msg.setDestination(53792U);
    msg.setDestinationEntity(198U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.9793946974367471);
    msg.setSource(19536U);
    msg.setSourceEntity(10U);
    msg.setDestination(59680U);
    msg.setDestinationEntity(102U);
    msg.total_steps = 123U;
    msg.step_number = 114U;
    msg.step.assign("WEGPWEVKVPZQSTARYCTHQGDWAESAVNYWSJMPDXTBMNFHONXRHFRABHUCWGPUAMKBEFYBLHZCQJLCTKCWDFEDSKAOTTJNPOTDSUKMXNOHUECCSPZNTMLKWLRLRLV");
    msg.flags = 107U;

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
    msg.setTimeStamp(0.2706357674590256);
    msg.setSource(33828U);
    msg.setSourceEntity(139U);
    msg.setDestination(38528U);
    msg.setDestinationEntity(70U);
    msg.total_steps = 95U;
    msg.step_number = 252U;
    msg.step.assign("ODRUYTKUXMPVWD");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.47231809846277706);
    msg.setSource(12060U);
    msg.setSourceEntity(180U);
    msg.setDestination(8159U);
    msg.setDestinationEntity(123U);
    msg.total_steps = 184U;
    msg.step_number = 67U;
    msg.step.assign("XSOVVOVTQUGMUXHALOGVGYHJRYYALRWFZJONZRJSTKHDGZEBPCJCHVOFPALQFFMEJICDQCXAJOSSEUMUOMHLXLMZBUITKQAUCEQJKYVGIRCZPITHTLERIWLBGWEK");
    msg.flags = 67U;

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
    msg.setTimeStamp(0.1423772988643971);
    msg.setSource(59917U);
    msg.setSourceEntity(189U);
    msg.setDestination(7312U);
    msg.setDestinationEntity(137U);
    msg.state = 232U;
    msg.error.assign("KEFCBVCFXGYPCOONVJVYAFTIEDXPTDBREXGRJUSGJCUJZPBHMLHZCJGNXIMIPLYTIKNVYHZJESWGQACWOJPPDWSBXMWPHSEQHDGIXLLKTJVYDWIAFGYOQUAQTXCMOXY");

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
    msg.setTimeStamp(0.041817893429970665);
    msg.setSource(19261U);
    msg.setSourceEntity(132U);
    msg.setDestination(56571U);
    msg.setDestinationEntity(90U);
    msg.state = 245U;
    msg.error.assign("PTODUQLJSZTDMRUFUOFSMFVQNUYKXPDTIZHJKMRQERXJOWKHOMNKESBADDYCVGIBNSEJAFTIGZCIUCBMGBEZSICD");

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
    msg.setTimeStamp(0.07070398270370515);
    msg.setSource(23346U);
    msg.setSourceEntity(212U);
    msg.setDestination(8538U);
    msg.setDestinationEntity(73U);
    msg.state = 188U;
    msg.error.assign("SQFZIKICGSBAUNAVVXPEXWHNHKKORRIPADEAGLFGIGPODYFIXWVTVJSVQCQQUSMMULTSEOEDSLNWHWZYFNGBRHNQRZHDKTNCUVOSMRZIYYYHRZLGMPTDBJOEJFBCLNWQADXVGIIXTNCFEYHHKBQDQTBPKYECNAZTXYUOPJUIFFROFCGRKRHQUWWUJH");

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
    msg.setTimeStamp(0.16456327908640989);
    msg.setSource(46363U);
    msg.setSourceEntity(44U);
    msg.setDestination(21535U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.8502275011025633);
    msg.setSource(729U);
    msg.setSourceEntity(189U);
    msg.setDestination(1515U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.3285609474246649);
    msg.setSource(61337U);
    msg.setSourceEntity(185U);
    msg.setDestination(10476U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.8191104890997359);
    msg.setSource(13546U);
    msg.setSourceEntity(36U);
    msg.setDestination(45173U);
    msg.setDestinationEntity(158U);
    msg.op = 88U;
    msg.speed_min = 0.4773876492317647;
    msg.speed_max = 0.8371330858501568;
    msg.long_accel = 0.24416865703872492;
    msg.alt_max_msl = 0.314170618528121;
    msg.dive_fraction_max = 0.5080309318546701;
    msg.climb_fraction_max = 0.19104467385367385;
    msg.bank_max = 0.3978810698556342;
    msg.p_max = 0.8958244648072489;
    msg.pitch_min = 0.7324368648373423;
    msg.pitch_max = 0.44183461885128505;
    msg.q_max = 0.14809200531309596;
    msg.g_min = 0.560022085665243;
    msg.g_max = 0.3445357265266443;
    msg.g_lat_max = 0.6304685242174802;
    msg.rpm_min = 0.6884313124730783;
    msg.rpm_max = 0.29527468042517124;
    msg.rpm_rate_max = 0.37019854563917454;

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
    msg.setTimeStamp(0.607431615753108);
    msg.setSource(12121U);
    msg.setSourceEntity(122U);
    msg.setDestination(4257U);
    msg.setDestinationEntity(50U);
    msg.op = 106U;
    msg.speed_min = 0.6315066252361704;
    msg.speed_max = 0.06519444202349656;
    msg.long_accel = 0.998836999853612;
    msg.alt_max_msl = 0.6822892158818152;
    msg.dive_fraction_max = 0.217773743871993;
    msg.climb_fraction_max = 0.40211299468494544;
    msg.bank_max = 0.41973761834062884;
    msg.p_max = 0.7290924593817311;
    msg.pitch_min = 0.9630235419970569;
    msg.pitch_max = 0.5537761528452162;
    msg.q_max = 0.641288490153978;
    msg.g_min = 0.3931112223318002;
    msg.g_max = 0.4882724171449643;
    msg.g_lat_max = 0.33417953554745594;
    msg.rpm_min = 0.08893912815251281;
    msg.rpm_max = 0.4445451473985078;
    msg.rpm_rate_max = 0.28111778788507147;

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
    msg.setTimeStamp(0.182030279555222);
    msg.setSource(24812U);
    msg.setSourceEntity(99U);
    msg.setDestination(15886U);
    msg.setDestinationEntity(109U);
    msg.op = 23U;
    msg.speed_min = 0.2262818623910594;
    msg.speed_max = 0.0011570621079943777;
    msg.long_accel = 0.8919839728430062;
    msg.alt_max_msl = 0.4643186280431415;
    msg.dive_fraction_max = 0.21121273953187514;
    msg.climb_fraction_max = 0.20738257674790572;
    msg.bank_max = 0.4388865658756894;
    msg.p_max = 0.3738137828877489;
    msg.pitch_min = 0.09441585393750163;
    msg.pitch_max = 0.9260473053009323;
    msg.q_max = 0.06940447402901573;
    msg.g_min = 0.6612704012717682;
    msg.g_max = 0.11595238334264235;
    msg.g_lat_max = 0.21143964555148576;
    msg.rpm_min = 0.20085717273829007;
    msg.rpm_max = 0.9662965684065326;
    msg.rpm_rate_max = 0.17165063467097053;

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
    msg.setTimeStamp(0.2979410024873923);
    msg.setSource(18880U);
    msg.setSourceEntity(39U);
    msg.setDestination(31361U);
    msg.setDestinationEntity(79U);
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.2913816818176499;
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
    msg.setTimeStamp(0.6752719478650688);
    msg.setSource(232U);
    msg.setSourceEntity(115U);
    msg.setDestination(49420U);
    msg.setDestinationEntity(94U);
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.36468882347906595);
    msg.setSource(15059U);
    msg.setSourceEntity(36U);
    msg.setDestination(29188U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.4215766231361596);
    msg.setSource(27403U);
    msg.setSourceEntity(43U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.6129689217978855;
    msg.lon = 0.34401764747643304;
    msg.height = 0.6105509753220177;
    msg.x = 0.6046773382758318;
    msg.y = 0.9792323191728908;
    msg.z = 0.7180835037339561;
    msg.phi = 0.721648940499699;
    msg.theta = 0.336322321027521;
    msg.psi = 0.8045869519413079;
    msg.u = 0.29862658673678;
    msg.v = 0.945589802522074;
    msg.w = 0.5264943166142434;
    msg.p = 0.8848122684630262;
    msg.q = 0.7341252099653068;
    msg.r = 0.9577553056873819;
    msg.svx = 0.9343663661729761;
    msg.svy = 0.5323487231369612;
    msg.svz = 0.4380766632619997;

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
    msg.setTimeStamp(0.18281216019611524);
    msg.setSource(15439U);
    msg.setSourceEntity(190U);
    msg.setDestination(21752U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.06399668462869967;
    msg.lon = 0.4609831892769738;
    msg.height = 0.017475065999830508;
    msg.x = 0.15542630816382919;
    msg.y = 0.5670570571545295;
    msg.z = 0.7829765817691045;
    msg.phi = 0.6786356581902957;
    msg.theta = 0.20412550021826892;
    msg.psi = 0.8244027412844575;
    msg.u = 0.7649398621697611;
    msg.v = 0.22916555920142967;
    msg.w = 0.37800119324840564;
    msg.p = 0.6448132954925127;
    msg.q = 0.47184109467427005;
    msg.r = 0.47779728387574105;
    msg.svx = 0.36178223382488117;
    msg.svy = 0.06590713169352602;
    msg.svz = 0.4452854671765065;

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
    msg.setTimeStamp(0.30788676144804317);
    msg.setSource(22924U);
    msg.setSourceEntity(225U);
    msg.setDestination(34212U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.013267371449186882;
    msg.lon = 0.6242774994256924;
    msg.height = 0.883171294486674;
    msg.x = 0.3615784275004982;
    msg.y = 0.5478744793329248;
    msg.z = 0.9340045259265932;
    msg.phi = 0.8605435835352558;
    msg.theta = 0.7830759515081857;
    msg.psi = 0.5184200611398301;
    msg.u = 0.11856957434436488;
    msg.v = 0.6080171649545488;
    msg.w = 0.15926719539857825;
    msg.p = 0.5543175127500933;
    msg.q = 0.7775652854539205;
    msg.r = 0.18152735802649256;
    msg.svx = 0.2962521816230893;
    msg.svy = 0.8903966358931104;
    msg.svz = 0.5877084433723838;

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
    msg.setTimeStamp(0.9145474304893612);
    msg.setSource(792U);
    msg.setSourceEntity(247U);
    msg.setDestination(61535U);
    msg.setDestinationEntity(239U);
    msg.op = 10U;
    msg.entities.assign("SOEXEACBVIMNIAEMOUZCUYTAVQTBINZDVKHPNNZDCUIATQPLJSDAFBTEVTSEVHXIBXRKDJTFHVYSPO");

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
    msg.setTimeStamp(0.5326251859613782);
    msg.setSource(60589U);
    msg.setSourceEntity(182U);
    msg.setDestination(46516U);
    msg.setDestinationEntity(67U);
    msg.op = 250U;
    msg.entities.assign("JOUJVWDYSOMVUTLGQDHMMSFSKTJPMLGPUKYGLOSIVIVNANNSILUJDQPFMZHLSOTEYTNVPJNLHRBBXHYWFUUPXKUJEMYXYROCLIZZXGANHWERHJDEXFRQSFKWCFAWOZQORATDRSAXZBWAQDOPWYFCGXEANFYXRTUUETDHZLBDQCPNIGEBXRMOARHZJVSDWKVKWQMPYCJCEBEKFKTCFBNBZXUVPGAQG");

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
    msg.setTimeStamp(0.10339487532457647);
    msg.setSource(26126U);
    msg.setSourceEntity(204U);
    msg.setDestination(62210U);
    msg.setDestinationEntity(183U);
    msg.op = 144U;
    msg.entities.assign("SKJGTYNBSPKNWWEGYOHZBCVIMVWDYFEYCAAALULONTQGRNSXXEOXVTTRKKIFIBJJUJWSPWGMSFEOUWFYIMJZDKJZRZOBPAIIKULEBLAHX");

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
    msg.setTimeStamp(0.5268579973059064);
    msg.setSource(19734U);
    msg.setSourceEntity(8U);
    msg.setDestination(23546U);
    msg.setDestinationEntity(158U);
    msg.type = 42U;
    msg.speed = 29622U;
    const signed char tmp_msg_0[] = {-12, -33, -74, 115, 101, 34, -75, -7, -44, 49, -27, -54, -51, -64, -20, 116, -15, -38, 71, -3, 73, 90, 20, 21, 49, -34, -82, 63, 103, -56, -91, 119, -63, -98, 102, -61, 59, -79, 63, 90, -98, -60, 30, 121, -21, 101, -109, 11, 91, 18, -123, 21, 107, 45, -118, -86, -43, 94, -71, -76, 26, 10, -120, 3, -37, 36, 75, -53, -121, 122, 7, -3, 100, -1, 106, 109, -16, -102, 89, -87, 42, 89, -115, -17, -85, -17, 116, -9, 38, 10, 42, 44, 102, 69, 13, 43, -25, -31, 68, 68, -92, 39, 72, -37, -92, -128, 118, -35, -87, 26, -16, 31, -105, -82, 34, 61, 52, -71, -13, 34, -26, 51, -2, -97, 47, -11, -46, -2, -104, 109, 85, -98, 113, -4, -86, -93, 56, -17, -17, 117, 88, 99, 84, 15, 19, 51, 69, -107, 44, 119, -39, -106, -12, -104, 58, -28, 58, 126, 25, -25, 55, 83};
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
    msg.setTimeStamp(0.7985392905630455);
    msg.setSource(44812U);
    msg.setSourceEntity(45U);
    msg.setDestination(49472U);
    msg.setDestinationEntity(249U);
    msg.type = 50U;
    msg.speed = 31659U;
    const signed char tmp_msg_0[] = {-13, -35, 121, 121, -119, -99, -66, -13, 41, -36, -4, 112, 119, 22, 110, -18, -13, -95, 90, 7, 33, -18, 123, -31, -46, -52, -81, -108, 12, -127, 78, -37, 66, -103, 48, 79, -65, 41, 19, 66, 74, 32, -86, -60, -90, 50, 52, 86, -65, 1, 8, -13, -102, 60, 61, -69, -121, -76, 122, -87, 1, 103, 89, -88, 59, -40};
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
    msg.setTimeStamp(0.9683491878239632);
    msg.setSource(61979U);
    msg.setSourceEntity(200U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(83U);
    msg.type = 116U;
    msg.speed = 39324U;
    const signed char tmp_msg_0[] = {-17, -40, 45, -118, -116, 53, -124, -117, 43, 61, 79, -37, -101, 62, 23, 49, -49, -28, 52, 76, -9, 94, 61, 21, -10, 87, -84, -23, 76, 48, -103, -76, 48, -63, -6, -21, 70, -10, 98, 113, -39, -24, -112, 68, -42, 96, 57, 53, 0, 81, -88, -46, -59, -75, 42, -61, -56, 2, -21, -112, -63, 113, 30, -117, 89, -71, -100, -16, 122, 69, -13, -23, -88, -88, -81, -1, -101, 65, 49, -82, -40, 122, -44, -44, 107, -99, 38, 28, 43, 83, -41, -11, -79, -128, 82, 82, 6, 125, -54, -15, 77, -26, 35, -67, -84, -38, 81, -123, -114, -85, 78, -127, 33, -11, -113, 42, 91, 104, 85, -50, 20, -56, -70, -111, 16, -69, -6, -125, -109, -65, 67, -13, 121, 8, 74, 62, 108, -19, -114, 113, 114, -106, 97, 83, -40, -16, -28, 44, -10, 74, 76, -85, -117, -125, 54, -45, -4, 97, -55, -24, -113, 101, -60, -74, 121, -108, -11, -32, 88, 116, -53, -24, 5, -1, 39, 66, 1, 64, -14, -107, -85, -58, 72, 1, -104, -99, -14, 107, -83, -56, 113, -31, 80, -5, -117, -57, 101, -23, -83, -124, 120, -62, -79, -49, 78, -82, -7, 1, 13, -56, -12, 39, -87, -23, 114, -29, -43, -119, -5, 61, 82, -87, -84, 24, 79, 53, 123, 39, -62, -43, -29, -126, 19, -47, 36, 60, -7, 38, 42, 81, 126, 40, 9};
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
    msg.setTimeStamp(0.5098688120444848);
    msg.setSource(28672U);
    msg.setSourceEntity(108U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(131U);
    msg.op = 176U;
    msg.tas2acc_pgain = 0.9007591995832408;
    msg.bank2p_pgain = 0.5479896064644879;

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
    msg.setTimeStamp(0.3756044484667086);
    msg.setSource(45669U);
    msg.setSourceEntity(13U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(121U);
    msg.op = 193U;
    msg.tas2acc_pgain = 0.3992808442569823;
    msg.bank2p_pgain = 0.7285281652316282;

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
    msg.setTimeStamp(0.19894363929745074);
    msg.setSource(50118U);
    msg.setSourceEntity(55U);
    msg.setDestination(62190U);
    msg.setDestinationEntity(185U);
    msg.op = 104U;
    msg.tas2acc_pgain = 0.9761168715822296;
    msg.bank2p_pgain = 0.6939561841516697;

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
    msg.setTimeStamp(0.44844596007159454);
    msg.setSource(3557U);
    msg.setSourceEntity(86U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(64U);
    msg.available = 2026059714U;
    msg.value = 19U;

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
    msg.setTimeStamp(0.4882545106179711);
    msg.setSource(25812U);
    msg.setSourceEntity(129U);
    msg.setDestination(17498U);
    msg.setDestinationEntity(92U);
    msg.available = 4256782855U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.3074202189230435);
    msg.setSource(58853U);
    msg.setSourceEntity(197U);
    msg.setDestination(63709U);
    msg.setDestinationEntity(17U);
    msg.available = 4274233124U;
    msg.value = 55U;

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
    msg.setTimeStamp(0.9408240128301103);
    msg.setSource(27281U);
    msg.setSourceEntity(215U);
    msg.setDestination(36954U);
    msg.setDestinationEntity(72U);
    msg.op = 180U;
    msg.snapshot.assign("EAYAZGLVYFVZGXPQENRQNVJIWAAIZYAUXNZTTDKUSEHIPCXKQNLENJIHXEFYYVPBMWVWSOKBHHHCXFOOZQVJSTCPHRXYGRCKGTNNYDCJDLQFVTGBXPASZKQCSCUVUOMJSFVSWCELPHTITYLWJIXUMFM");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.39940148548576326);
    msg.setSource(24876U);
    msg.setSourceEntity(89U);
    msg.setDestination(31781U);
    msg.setDestinationEntity(40U);
    msg.op = 156U;
    msg.snapshot.assign("BJVFOGOSVXQCRMYVZCEPF");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 61469U;
    tmp_msg_0.lat = 0.7981206135879788;
    tmp_msg_0.lon = 0.680187334895818;
    tmp_msg_0.z = 0.11862009703072174;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.pitch = 0.5656259908493503;
    tmp_msg_0.amplitude = 0.2351709526705522;
    tmp_msg_0.duration = 34990U;
    tmp_msg_0.speed = 0.7597644124925175;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.radius = 0.40267468573111953;
    tmp_msg_0.direction = 162U;
    tmp_msg_0.custom.assign("QEMHHYNNDIVVGELDZGXUCMJBYSUZUXVPORESQHLG");
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
    msg.setTimeStamp(0.3915531886874629);
    msg.setSource(29861U);
    msg.setSourceEntity(74U);
    msg.setDestination(43470U);
    msg.setDestinationEntity(41U);
    msg.op = 169U;
    msg.snapshot.assign("EUCPWDNQCHUDYKOBQSBEOFZPGXZLXLAMBGVGEJTZYISYTQNAIJICTGOWDNT");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 252U;
    tmp_msg_0.eta = 36381U;
    tmp_msg_0.info.assign("TZLOXYHQSQRQPLMJYAOZLSBGDYESSPLBUISZPWNUPJLLCKOMXMGUKOPMRIJKGKQENTHEHGVA");
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
    msg.setTimeStamp(0.973613946861735);
    msg.setSource(28401U);
    msg.setSourceEntity(211U);
    msg.setDestination(23517U);
    msg.setDestinationEntity(226U);
    msg.op = 21U;
    msg.name.assign("HJMKFHJMWLQICURZOZLPIKPTDMHGHJIBXCNQPTNTZNAGCEQLGRTZQEKBHLPOGMXKDJWSOSUSOMBVOTCAYCYDEFCEUSRDQSZRZVAACRWXOPNJGSJMHVLTHWWYBVIMZRR");

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
    msg.setTimeStamp(0.20220171429356715);
    msg.setSource(52494U);
    msg.setSourceEntity(193U);
    msg.setDestination(59429U);
    msg.setDestinationEntity(217U);
    msg.op = 66U;
    msg.name.assign("BTSHBKKJOAZCFVPMJUNEBGOZZMOBMEXKXPMSRZZFOJGBSQBKPVCZPIROAOIELVFWDTJXEPJIHNTDQNJBKKFRTUXKXQTNQLOWSLRGQUDNZTUNHGMDMEWCWEOHDXLDDHRPAPLHNGMWDILFZYNTFKIGPFLPLRUQYHYWSXSVSXTDKNAYUIKDVBABPCWJVAUCRYCJAUVTWOQISCHUAHWMJIEQERGYXJVLETXNVYRBICMVSMURCHAZLYZ");

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
    msg.setTimeStamp(0.30702115457069123);
    msg.setSource(20285U);
    msg.setSourceEntity(250U);
    msg.setDestination(53183U);
    msg.setDestinationEntity(98U);
    msg.op = 167U;
    msg.name.assign("TRYFGDOKYLWOHPQDMRIIANNAMPIESKGFEBHMAUBCSKZYQFTOWGRDTUOPFXRHZCTWKBXXHAZIWBHMVEJZEGXCEGBJZLIIPLCMVZVHUUXHNPXNVBKGRLZIYGGXVDEPPGRSQEILALLNI");

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
    msg.setTimeStamp(0.8706379838009141);
    msg.setSource(41542U);
    msg.setSourceEntity(103U);
    msg.setDestination(13017U);
    msg.setDestinationEntity(203U);
    msg.type = 222U;
    msg.htime = 0.5104868731346462;
    msg.context.assign("GJROHWLPJBVKVVBLILILZOFGUVFOKHHPYGRWBU");
    msg.text.assign("ZEPMIGGXLMNGXJUITCLFJPKVYLTDSZDISASDVMGRENSZEBGAQVNEMVJUAFOHUWLJIVEXBFTECFTPISJFERGFUTQXLXKKXUABLUWZPMQQHDKTKMBPHLRQDYQXRRWQP");

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
    msg.setTimeStamp(0.6339633100880093);
    msg.setSource(25661U);
    msg.setSourceEntity(82U);
    msg.setDestination(37608U);
    msg.setDestinationEntity(130U);
    msg.type = 78U;
    msg.htime = 0.9264066852205388;
    msg.context.assign("BWXRZXLAAHAEMFPSGRUOLMBPHVOMAIIYHECSOOIKDQCTAXWMCAMGAFRLTCIQPGOACKGWNGDDHGTDDXUMQJPEMNIQJEEALJZVUVCBSMKLSTFCFP");
    msg.text.assign("BPLCRHAHGUYUHLXGAWZRDYPRRNEGCOXMKLNOBPJISBFYLHLWYBQAKFMFIAYYGYIDUCDODSSTQFTFVMFWTPDIVPBLVBLERVQPUEXWKQVKGLQRUZVMGHJIUVGTQDTEURRUFKIQZZJASCBIPXNCLZCRAAPXVXISZYWWNMWFWFHJAJQDDPNJJXSTPSOCUEMVKZJXENITGZALTMBVQQHMJX");

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
    msg.setTimeStamp(0.42848638188669086);
    msg.setSource(40194U);
    msg.setSourceEntity(189U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(102U);
    msg.type = 30U;
    msg.htime = 0.2437647900963984;
    msg.context.assign("HZAJKLRTVRGHRFZWZLYOGUPGKJBNQQQYJOHOMYSCJBTETEOESJQBKRCAOMLYHZTMBHIDPRIUIAQPZB");
    msg.text.assign("LOVOCJKGLRW");

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
    msg.setTimeStamp(0.5469117692131255);
    msg.setSource(12165U);
    msg.setSourceEntity(54U);
    msg.setDestination(36177U);
    msg.setDestinationEntity(186U);
    msg.command = 64U;
    msg.htime = 0.7575614805354725;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 57U;
    tmp_msg_0.htime = 0.9111019334617004;
    tmp_msg_0.context.assign("ARDSNQVUTVWWLTARPYIDIWSDBTGXLFMUQVTPSHBKQNQEIYCRYQBOLIYLCYZMXXMGRYPPHVTMSWXMZOWNPACKGXVLRRJFQHGJJMMFCTYWMBJTGKBXKQPHKVLECHBJOAXMOXQGETDRBIHKNZEFIGUJSDWEVBVANCOUPZETSHAKJUCPAZSTHZZZV");
    tmp_msg_0.text.assign("DXHKTONOVDFYOXHXPLEPHTZUVGOSWGRQKXDZZDCBQGAWQTSOEJBNVXKTKFCZALEFYNJLOJQQUCPDAKMMTGXIJCXQIMLVNFTONULERXEZJIVLWUYWSTMQSVRPUDSHHCZWGEEBUSCLMJIIJFTHFAHPYQMYABDCBCVMIJBRIYWIEAKYGKBQSWVPUBONLZFPSWWZRWEROGR");
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
    msg.setTimeStamp(0.8277004047641876);
    msg.setSource(15030U);
    msg.setSourceEntity(148U);
    msg.setDestination(35337U);
    msg.setDestinationEntity(211U);
    msg.command = 118U;
    msg.htime = 0.2977843860674976;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.htime = 0.4863490283961618;
    tmp_msg_0.context.assign("WHFONVXEQZSBMJZMTYYSWLWFSGYOHFHGSUTJIZRNHLQZNVRPLLRGDEQFABQKGZAXVADTJPUUTCOBOTWIKDZMTAPUDWACRGXJJOJDJYPWLKLXRTIWYQQJKDTXILHQVHPADKAYQ");
    tmp_msg_0.text.assign("TRKVAHVRBBLMDWSOQFTZDPZRHJZRYDBZJRRPLBFTNYXGHPYXQOKAEALIFZXKNKQMCDXZYFWWMSODUAT");
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
    msg.setTimeStamp(0.9151921914619412);
    msg.setSource(26775U);
    msg.setSourceEntity(157U);
    msg.setDestination(13168U);
    msg.setDestinationEntity(86U);
    msg.command = 138U;
    msg.htime = 0.4410800295389924;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 10U;
    tmp_msg_0.htime = 0.7361906716816078;
    tmp_msg_0.context.assign("WEVFZQAJBSZBXIMLBVILIPWWCEQJDPVOQVFIMKWFOGJDPYIHKQYRNYPSCOWAGWXATBZZPCEZIJUWMMFTVXJUQZMFGSRGJAEEUHACSNWXYEKRBCUXA");
    tmp_msg_0.text.assign("EZHUWBPGEUPAKOEASNKQRVVJNTPGMDMOXJIBXIGLUXTUPVZLVBAFIRINKFSUQAECDVBDXUIGLYPZAEJCFBJYMSPYNYE");
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
    msg.setTimeStamp(0.7358343306731608);
    msg.setSource(16756U);
    msg.setSourceEntity(63U);
    msg.setDestination(26114U);
    msg.setDestinationEntity(143U);
    msg.op = 223U;
    msg.file.assign("ORWYXJBNLEZMIRPAWFDCDHDUBGPOPMWTHEYIEDMIWUFJYRKWSKLZBKPTZUHVIBWVKNYZAZ");

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
    msg.setTimeStamp(0.5737337915440041);
    msg.setSource(23623U);
    msg.setSourceEntity(47U);
    msg.setDestination(32295U);
    msg.setDestinationEntity(174U);
    msg.op = 123U;
    msg.file.assign("ZCFAYFKWIWHEKFOEOFSIMJBFWJMRIYIRVBQUKXJNQBDOBJBTMDESXLXHDBOZSPCTHTMLQVNUOYLAOPQNRCHJWPKZUOMLUBGZGJFGARWQFXPYBVYWAHQ");

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
    msg.setTimeStamp(0.3886052659025888);
    msg.setSource(22740U);
    msg.setSourceEntity(230U);
    msg.setDestination(29581U);
    msg.setDestinationEntity(135U);
    msg.op = 5U;
    msg.file.assign("WFZLDCHBYFIJXVCHAMAVTEGFDTKOPFLTJYMHPNYVQQSIEQLQKWGFIJTDJCLFQLLCUGAWUN");

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
    msg.setTimeStamp(0.471379627643399);
    msg.setSource(49593U);
    msg.setSourceEntity(118U);
    msg.setDestination(25756U);
    msg.setDestinationEntity(23U);
    msg.op = 240U;
    msg.clock = 0.18983408349659803;
    msg.tz = 80;

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
    msg.setTimeStamp(0.5227484314048625);
    msg.setSource(29900U);
    msg.setSourceEntity(10U);
    msg.setDestination(57552U);
    msg.setDestinationEntity(211U);
    msg.op = 119U;
    msg.clock = 0.5070822144973853;
    msg.tz = 117;

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
    msg.setTimeStamp(0.1744391414313028);
    msg.setSource(35200U);
    msg.setSourceEntity(85U);
    msg.setDestination(61665U);
    msg.setDestinationEntity(194U);
    msg.op = 254U;
    msg.clock = 0.6110989879182079;
    msg.tz = 100;

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
    msg.setTimeStamp(0.42602303922811535);
    msg.setSource(63253U);
    msg.setSourceEntity(101U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(179U);
    msg.conductivity = 0.6188170702661799;
    msg.temperature = 0.07795066022653196;
    msg.depth = 0.02507012521955354;

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
    msg.setTimeStamp(0.18035788212866222);
    msg.setSource(19173U);
    msg.setSourceEntity(138U);
    msg.setDestination(15554U);
    msg.setDestinationEntity(196U);
    msg.conductivity = 0.9043529468275466;
    msg.temperature = 0.6176670022701031;
    msg.depth = 0.36970581043640893;

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
    msg.setTimeStamp(0.043155158054899);
    msg.setSource(13673U);
    msg.setSourceEntity(57U);
    msg.setDestination(16988U);
    msg.setDestinationEntity(124U);
    msg.conductivity = 0.03710281035066432;
    msg.temperature = 0.3538355704773106;
    msg.depth = 0.6851046859144628;

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
    msg.setTimeStamp(0.7867275882688394);
    msg.setSource(47376U);
    msg.setSourceEntity(29U);
    msg.setDestination(29177U);
    msg.setDestinationEntity(223U);
    msg.altitude = 0.13753962488635696;
    msg.roll = 3096U;
    msg.pitch = 50561U;
    msg.yaw = 46392U;
    msg.speed = -5296;

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
    msg.setTimeStamp(0.5477298209370438);
    msg.setSource(62378U);
    msg.setSourceEntity(96U);
    msg.setDestination(37561U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.7918593707808456;
    msg.roll = 22465U;
    msg.pitch = 30212U;
    msg.yaw = 20858U;
    msg.speed = 23830;

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
    msg.setTimeStamp(0.02887585887030708);
    msg.setSource(27815U);
    msg.setSourceEntity(225U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(145U);
    msg.altitude = 0.24921374947310249;
    msg.roll = 16398U;
    msg.pitch = 63352U;
    msg.yaw = 47334U;
    msg.speed = -14596;

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
    msg.setTimeStamp(0.6630010813467092);
    msg.setSource(44906U);
    msg.setSourceEntity(103U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(102U);
    msg.altitude = 0.4473808353440374;
    msg.width = 0.18170165270707672;
    msg.length = 0.8872395880006123;
    msg.bearing = 0.7862469403545594;
    msg.pxl = -28018;
    msg.encoding = 225U;
    const signed char tmp_msg_0[] = {-24, 78, -1, 54, -89, 2, 44, -40, -56, -125, 114, 40, -34, 20, -55, 33, 10, -45, 107, 44, 124, 66, -6, -30, -66, 90, 2, 31, -69, -28, 121, 121, -81, 0, -127, 50, -11, 65, -121, 57, 58, 4, -36, 107, 110, 10, -45, 93, -68, 50, -66, -71, 42, 16, 107, 24, -123, -116, 34, -11, 32, 87, -30, -6, -33, 97, 39, 69, 4, -114, 59, 77, 87, 123, -115, -85, 87, -84, 71, 41, 76, 42, -52, 23, -29, -13, 121, -113, -51, 65, 106, -83, -105, 112, -23, 93, 15, -101, 81, 69, 66, -105, 88, -3, 5, -78, 95, -109, 82, -23, -67, -23, -45, 34, -31, -35, -113, 105, -58, 30, 57, -79, 29, 23, 27, -35, 23, -26, -77, -75, -70, 31, -59, -22, -119, -13, -23, -60, -106, 123, -5, 11, -69, -19, 19, 91, 58, -70, -34, -69, -78, 7, -128, 122, 63, 114, 118, 23, 54, -101, -30, -9, -74, -64, -87, -71, -59, -89, -50, -95, 58, 109, 108, -71, 91, -85, 8, -9, 79, 22, -22, -36, -94, -74, 17, -46, 101, -58, 68, 60, 3, 51, -39, 109, 80, -14, -105, 105, -30};
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
    msg.setTimeStamp(0.47662431979524533);
    msg.setSource(47891U);
    msg.setSourceEntity(235U);
    msg.setDestination(10779U);
    msg.setDestinationEntity(203U);
    msg.altitude = 0.4468079009065067;
    msg.width = 0.3809494775198389;
    msg.length = 0.671664105882328;
    msg.bearing = 0.9789590101201096;
    msg.pxl = 8751;
    msg.encoding = 27U;
    const signed char tmp_msg_0[] = {-61, 1, 39, -36, -72, -81, -110, 46, -121, -103, 74, 67, 96, 18, 23, 93, 55, -23, 80, -61};
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
    msg.setTimeStamp(0.5202811657609929);
    msg.setSource(8219U);
    msg.setSourceEntity(66U);
    msg.setDestination(41094U);
    msg.setDestinationEntity(24U);
    msg.altitude = 0.3938695354484196;
    msg.width = 0.48320010690040005;
    msg.length = 0.6413621845120141;
    msg.bearing = 0.5756208318494811;
    msg.pxl = -2997;
    msg.encoding = 181U;
    const signed char tmp_msg_0[] = {37, -4, 117, -20, 111, 71, 5, -48, 92, 124, 80, -15, 123, 75, -4, 71, 84, -117, 25, 74, 103, 61, 29, 22, -118, 50, -18, -8, 80, -31, -103, -121, 57, 56, 66, 25, 6, -84, 21, 70, 22, 8, 102, -74, -126, 48, -105, -72, -109, 101, 109, -118, -115, -32, 54, 46, -18, -13, 100, -66, 1, 57, -13, -57, 34, -31, -11, 9, -127, 53, -112, 77, -92, 85, 70, 95, -59, 50, 32, 27, -60, -38, -80, 18, 70, 59, -17, 10, 41, -116, -83, 36, -73, -24, 88, -19, -7, -118, 2, -54, 28, 99, 71, 102, -9, -49, -48, -23, 109, 15, -72, -45, 18, -122, 18, 53, -120, -1, 108, -116, 34, 60, 110, -75, -117, -52, -44, -128, 54, -71, 48, -14, -117, 28, -64, 100, -50, -92, -69, 60, -83, -76, 98, -125, 35, 78, 84, -28, -104, 50, 24, 56, 99, 44, 94, 32, -46, 52, 74, 9, -100, -122, 45, 8, 112, -22, -86, 36, -121, -55, -70, 113, 76, 65, -40, -28, 1, -70, 103, 96, 37, 33, 101, 87, -109, -50, -82, 72, 72, -116, -17, 111, 29, -116, 72, -3, 54, 17, 97, -112, -15, -42, -125, -25, 79, -21, -56, 18, -112, 3, -26, -24, 42, 27, 24, -124, 28, 116, 63, -103, 75, -34, -83, 0, -102, -107, -48, -69, 71, 109, 124, -23, 6, -1, -126, -118, 21, 0, 56, 91, -116, 83, 72, 84, 55, -85, 7, -83, -128, -12, -124, 119, 106, -17};
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
    msg.setTimeStamp(0.5378032842516636);
    msg.setSource(19856U);
    msg.setSourceEntity(118U);
    msg.setDestination(60636U);
    msg.setDestinationEntity(180U);
    msg.text.assign("DKXCRBRRSMSXQCZEMWWPDSYUWMVIKVATZCHPFDFOFZSYVLOOETAPIJLLEBQULRTMAQHPJUUNCUKUZQELXBQRKBOYLCZDXSNLQWTXKUJAMTXGTBTAYMQGJFMEEOYYJVLSEKXYNU");
    msg.type = 112U;

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
    msg.setTimeStamp(0.08232310440586399);
    msg.setSource(25335U);
    msg.setSourceEntity(2U);
    msg.setDestination(35073U);
    msg.setDestinationEntity(54U);
    msg.text.assign("YROCEBSWZUYXLEOJKOUURCKUFEPQWEAXHTBZFYQJYFFMXLSNLGAHLSGTEDQNTYRGHUTMXEXOIQRRC");
    msg.type = 201U;

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
    msg.setTimeStamp(0.9762732111749669);
    msg.setSource(35579U);
    msg.setSourceEntity(67U);
    msg.setDestination(8896U);
    msg.setDestinationEntity(49U);
    msg.text.assign("KMQCQGQOMRLBYLJNOFSURMYHLVQDGAKCHPABCUVRDHWAJCIEZAYTRTCYONAPZOFWABEGZCQPTNCQSTIXODEYJUGREMVUKJWEULZVBYZSHXISMYBEHXKVTDLVRIFWXHKEXRJLGPBXSVJRHRCTIAHGSTBUN");
    msg.type = 227U;

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
    msg.setTimeStamp(0.5570232059227375);
    msg.setSource(21275U);
    msg.setSourceEntity(135U);
    msg.setDestination(38275U);
    msg.setDestinationEntity(149U);
    msg.parameter = 22U;
    msg.numsamples = 146U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 43199U;
    tmp_msg_0.avg = 0.24084527086136298;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9042839567276553;
    msg.lon = 0.2248300111584688;

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
    msg.setTimeStamp(0.9728671427461771);
    msg.setSource(43098U);
    msg.setSourceEntity(125U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(81U);
    msg.parameter = 174U;
    msg.numsamples = 184U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 43687U;
    tmp_msg_0.avg = 0.8051388819017475;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.25750972714699305;
    msg.lon = 0.6389106293510736;

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
    msg.setTimeStamp(0.8084079737865956);
    msg.setSource(44914U);
    msg.setSourceEntity(213U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(142U);
    msg.parameter = 109U;
    msg.numsamples = 59U;
    msg.lat = 0.7215663941458006;
    msg.lon = 0.2431641886416016;

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
    msg.setTimeStamp(0.3027133969828414);
    msg.setSource(64864U);
    msg.setSourceEntity(104U);
    msg.setDestination(45065U);
    msg.setDestinationEntity(238U);
    msg.depth = 34949U;
    msg.avg = 0.538757919272363;

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
    msg.setTimeStamp(0.0014855454145634717);
    msg.setSource(56657U);
    msg.setSourceEntity(15U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(210U);
    msg.depth = 3302U;
    msg.avg = 0.07869313605283568;

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
    msg.setTimeStamp(0.028154203824860113);
    msg.setSource(38118U);
    msg.setSourceEntity(84U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(66U);
    msg.depth = 3989U;
    msg.avg = 0.5200724982086611;

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
    msg.setTimeStamp(0.7147432767387083);
    msg.setSource(43206U);
    msg.setSourceEntity(247U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.2225869120117111);
    msg.setSource(23684U);
    msg.setSourceEntity(211U);
    msg.setDestination(65291U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.7523477614860219);
    msg.setSource(42006U);
    msg.setSourceEntity(123U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.11746113029410765);
    msg.setSource(17564U);
    msg.setSourceEntity(170U);
    msg.setDestination(37758U);
    msg.setDestinationEntity(19U);
    msg.sys_name.assign("RWJHCFEPQEIAJSNOAWVTLKYXQFCDTVZFSCMSQWREQJCIMSBXMXCXHPDDOTOHNYSBLPDVPLXYRBUGUAMKNZRDYHBMDDRKLIDZDSLLKKZFQNVMUJIYEMLFWUPVBWETGAOHKUNMKLRFQIVIBDWWHEUOFQUOAGZ");
    msg.sys_type = 130U;
    msg.owner = 42036U;
    msg.lat = 0.9026069716947357;
    msg.lon = 0.2592960656096551;
    msg.height = 0.9660645512556018;
    msg.services.assign("TBVOAEDHMLNQFWUFUATTGEVGKVRTXLPQTNPWXRXRBYSQDHLEKVTUMZXZEMCNJKCALWOQUCJIGJVNSL");

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
    msg.setTimeStamp(0.036578762750158256);
    msg.setSource(50643U);
    msg.setSourceEntity(145U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(195U);
    msg.sys_name.assign("NKENWFZGBCEWSGUHBIKYKTCLOUJFXMOJCZWRKDQQSQWDGDEXJZEIWWVDRLNNNMLHACMCKZSKRLLAWCJIHPBSFEHEXXUPOIDTQNCJGZMBUTZBYVXXQLVSENYFSQBPWSUERVXIDVFTFCRMOV");
    msg.sys_type = 44U;
    msg.owner = 26031U;
    msg.lat = 0.9025216636700325;
    msg.lon = 0.007838413573003633;
    msg.height = 0.8137988576175106;
    msg.services.assign("HSSVVZSKJEODPUUEBEXRTYLZXORFKMVFPFBXOKLIAXDDDJRKDMHGAXARBHCVUFHEUJAPSTKSGNWQZNBVUCSRUDJUCKBHGOVNETGYE");

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
    msg.setTimeStamp(0.9176613972808711);
    msg.setSource(27972U);
    msg.setSourceEntity(184U);
    msg.setDestination(27738U);
    msg.setDestinationEntity(11U);
    msg.sys_name.assign("ZKYDTXVGQUQTQVFFOBGJMWLIBIPNCBTGMVBDCODNMROLLEWTEHTEXDNAHKNZYZGSYXWAQZTFWQYNPKZCUYVXAODXALPIMNOGJGSRVBJFWRAFMZLLYOYBMSJMYIDUVJUUHPIPSJLJCCRGDNSLPAIBVVVQERXFDWB");
    msg.sys_type = 254U;
    msg.owner = 56949U;
    msg.lat = 0.6123915186492468;
    msg.lon = 0.7988665856510944;
    msg.height = 0.8874066093622636;
    msg.services.assign("TOPRGWSWVHNOBXGGMASMQMKWOVEPIESPYTNXXSSWVQUNRJGKHYIYQVITMUUVVADTCCPEYQZIPGULRKRHBPFDCGHLBQKXFDJECLYGRQDJQEJFFWZVYTZBWGLLOVDSBJUMCIOUKFOAUMRWLETXDSBWREKHZXBCJBKPQCMHZJOZHAZEGENLIBFVZAJYLJQAMNDWLKOYTRHIJLBUXFMPEDPFNCNAHVITAUKURNPI");

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
    msg.setTimeStamp(0.27853246067558945);
    msg.setSource(23678U);
    msg.setSourceEntity(43U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(14U);
    msg.service.assign("CKMUZGNIGIFXEEYTKYHYUTBZCAUHPMDLHQAKSOCTBFBUGNAYIIDJGSDCLQVLVTTMVVWIDZEDPLXBSRNQUAITFQNRJXWMFYVBLFRSKLYCRWWMOUMKNTVWADPFRKJDQNXEJPAKLERZGHMWDKCENSALOFPMSVOCGRXJOMAZQOWPOMVBZYENJXUDHEL");
    msg.service_type = 197U;

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
    msg.setTimeStamp(0.20063121307415677);
    msg.setSource(63200U);
    msg.setSourceEntity(27U);
    msg.setDestination(26996U);
    msg.setDestinationEntity(155U);
    msg.service.assign("VDUUONULOGWZWFQEIFPXRIJFJPCEAYXGJAOVGAPEPPEOLMLSKSRMRQUMSTXABRELZIYISWTJTBKZEARVCOKIGMJYNEVFBSWGXNFCEJRYQGITKNFKXAVT");
    msg.service_type = 229U;

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
    msg.setTimeStamp(0.8984878360587003);
    msg.setSource(19554U);
    msg.setSourceEntity(31U);
    msg.setDestination(25777U);
    msg.setDestinationEntity(105U);
    msg.service.assign("TDNHIKTVYZSDUVDORCGPFEQUTRAKFLENYAYKLTWVCOMZEQYJSCUASCECIPDIOGKLNPQWKRBNMEXLAORZYNIWSFYNXGLVSDZRLEZCPQBEASHKPAKWHHWPITBGLBBCUMQBIZXWNBAOFVCFGCWTMZRHUBYKJXMUGOQOUDFHSGFCVMYAGRUJLIWEDTMAYSPGQFLGSKXETHWIEBIDJNUYDQN");
    msg.service_type = 227U;

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
    msg.setTimeStamp(0.3963774978287762);
    msg.setSource(37876U);
    msg.setSourceEntity(11U);
    msg.setDestination(25510U);
    msg.setDestinationEntity(14U);
    msg.value = 0.5010505811035061;

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
    msg.setTimeStamp(0.6637528891764812);
    msg.setSource(46381U);
    msg.setSourceEntity(119U);
    msg.setDestination(3678U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4525988962398366;

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
    msg.setTimeStamp(0.24371631585741482);
    msg.setSource(3347U);
    msg.setSourceEntity(95U);
    msg.setDestination(11980U);
    msg.setDestinationEntity(188U);
    msg.value = 0.23233996825905545;

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
    msg.setTimeStamp(0.10905260285799201);
    msg.setSource(30116U);
    msg.setSourceEntity(15U);
    msg.setDestination(9616U);
    msg.setDestinationEntity(53U);
    msg.value = 0.21725692086212178;

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
    msg.setTimeStamp(0.0062983821917996785);
    msg.setSource(42508U);
    msg.setSourceEntity(200U);
    msg.setDestination(33121U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7838872266496411;

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
    msg.setTimeStamp(0.6645822489930303);
    msg.setSource(20854U);
    msg.setSourceEntity(145U);
    msg.setDestination(6003U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6223386941908892;

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
    msg.setTimeStamp(0.28034005441702725);
    msg.setSource(32099U);
    msg.setSourceEntity(52U);
    msg.setDestination(11581U);
    msg.setDestinationEntity(60U);
    msg.value = 0.48818338784434934;

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
    msg.setTimeStamp(0.3010883111835666);
    msg.setSource(2485U);
    msg.setSourceEntity(154U);
    msg.setDestination(58720U);
    msg.setDestinationEntity(81U);
    msg.value = 0.2866861682168351;

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
    msg.setTimeStamp(0.5894034386583702);
    msg.setSource(27241U);
    msg.setSourceEntity(184U);
    msg.setDestination(61252U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8164210926777449;

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
    msg.setTimeStamp(0.433582556170903);
    msg.setSource(37218U);
    msg.setSourceEntity(235U);
    msg.setDestination(14674U);
    msg.setDestinationEntity(232U);
    msg.number.assign("TIALMYLAKZIOVPGRXEVJSXFYTIKBQZWMVWKYUSPNMIDCLHFSCQPNZZJAVDIXFTUYNJEOACDGUQHOLQNADHKUSICJRPWRPMTGWAUANGKWCYHCHTWNVNOZLUMUKFOOYZBKGWRLVVNEQBZFOYMOXARDCVHLQZDIWDLEFSRCTYCMUAILQPJEFRZSLEJHKJJCYGATMIOXWZ");
    msg.timeout = 27122U;
    msg.contents.assign("SGRPEFLEILVAFBEENCKHWVSJMXOTMDQJDAWRBQEMLWWZEDKJHZCUQBLIVTJJGPKZAZUYNNDUMSDNKFHYGPGMZGDLTIWUVIOUVRHXPCXPQVNBWAQIWBBPIZBKLCJOQWRTZKILPSJALMDVYYFVPUGXRMHHGFQXRFODJKUWMPRTSW");

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
    msg.setTimeStamp(0.8848289535944422);
    msg.setSource(57606U);
    msg.setSourceEntity(166U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(39U);
    msg.number.assign("JEAZLPBKVZHVLYGOHPRIWPKJLTWCCMESHNFSBWQZGOVUKKTRXJBDWNUFDSHMXOHACTLFZDJGIRTLXSFNSWQCYYAGBZAGZOPMATNPWTRXJSRCZKDHXUASILEVYGJKCMQIGUZXWHYNPRQJNAEUDJVHKXLOOQMHOBEUNFXRWPYDRZGFLBAENOKWTXBENQDJDIQCVFBBMLCGATKHTOWEIVQASEFSXFVIBGCZYYIRDYPKYFPCNS");
    msg.timeout = 5109U;
    msg.contents.assign("KEOYJRUZKXVECBSVCOHVWQIDJSJFIIROLMIWLNFXNZTYUDIEPBOEJPGBZPZTGOYNKWULRTQVZYOWWVNMZVMMCBWUMLVDFMHOZBGQCVXAYDTXRIHNULSGOLB");

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
    msg.setTimeStamp(0.3899043823007824);
    msg.setSource(6883U);
    msg.setSourceEntity(135U);
    msg.setDestination(18891U);
    msg.setDestinationEntity(208U);
    msg.number.assign("ELBNGNWUUDHNAGWRZXSASOMRMJOLUBIEPVOHHVOANBHJ");
    msg.timeout = 39415U;
    msg.contents.assign("ZLFAHOVHWRULBNFMABVNVIYEJPXFVWMTDANBABCWQUTSQFWBQEXOYQBKRINGBTAGQAYCNRJYSGASQLCUQKDHFKNDHYFO");

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
    msg.setTimeStamp(0.23762847361002992);
    msg.setSource(8712U);
    msg.setSourceEntity(32U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(86U);
    msg.seq = 1634774064U;
    msg.destination.assign("WEVCZVLGHFCFWMGWORXPZOAUBDUKQGBXHMDTOJXJDQRYTKUYPAJWZDSBCIFXNPDZISGZJWZZCANDYLRSOMEACOHFOPJLIETYERFGOHXXGIZFJKXLOWWKRSVJMWUCNYVPHPIZIVQXSTUQSHMARASKOTXCQKPETHTJQHQBULSDEUVDBDTLKDNRNNLLROCSPKKNUBIGEWFHGIVZKEUALW");
    msg.timeout = 34981U;
    const signed char tmp_msg_0[] = {60, -16, 69, 47, 107, -59, 61, 116, 43, 51, -10, -79, -1, 114, 122, 77, 86, 98, -38, -17, 44, -40, -85, -122, 99, 82, -93, 45, -29, -86, 64, 8, -109, 86, 108, 58, -66, 102, -27, -121, 52, -108, 123, -1, -117, -4, -23, -51, 114, 88, 105, -67, -48, -128, 45, 18, -73, 33, -58, -4, -10, -40, -98, 62, -76, -47, -6, -76, 107, -56, -20, 36, 66, -92, -59, 40, 123, 0, -95, -121, 71, 116, 125, 38, -24, 48, 19, 79, -128, -4, 100, -109, -106, -82, 108, 8, -27, -32, 59, -72, 0, 72, -53, 67, 57, -76, -114, -111, -60, 125, -38, 17, 65, 74, 125, -57, 59, 24, -19, 120, 18, -1, 42, -95, -62, -123, 60, 120, -91, -120, 121, 91, 5, 117, -40, 124, 94, -104, -105, -61, -128, -64, 30, -126, 119, 18, 126, -93, -122, -37, 89, -102, -81, -118, 67, -118, 5, -101, -4, -101, -93, -78, 64, 121, 12, -25, -25, -113, 2, -103, 16, 114, -7, 56, 125, -72, 81, -63, 31, -91, 0, 103, 75, 53};
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
    msg.setTimeStamp(0.7523219107803121);
    msg.setSource(17866U);
    msg.setSourceEntity(156U);
    msg.setDestination(57886U);
    msg.setDestinationEntity(8U);
    msg.seq = 678047430U;
    msg.destination.assign("YYXQLZACWLLIBYMSHXDSUINUQKUPLJPUMSQNZQTLOMLDNUKUFCHZPRKACMEHCFQEQXWRXZAFMVCRXWKDUJBZKXCJVJLSPIJKWRZTDUPGELQIOFDFQYOAUOFXETVPHMAZWYPARAWTANOZMKJNIXMZAVJEO");
    msg.timeout = 40165U;
    const signed char tmp_msg_0[] = {15, -119, 7, 104, 79, -92, 27, 97, -101, 71, 17, -78, 7, -106, -53, -125, -12, -7, 108, -100, -110, 112, 105, 38, -124, -29, -92, -22, -38, -94, -105, -123, -67, -49, 79, 26, 103, 90, -57, -27, -44, 34, -95, 39, -98, 116, -83, 5, -64, 110, -27, 65, 64, 64, 124, -15, -115, 32, -21, -77, 61, 7, 54, 12, 35, 116, 83, 24, 32, 70, 24, -110, 5, -34, -64, 17, 41, -89, 95, -16, -44, 75, 1, -120, -35, -62, 121, 68, 99, -124, 9, -101, 107, 30, 85, 51, -56, -66, 45, -31, -9, 71, -14, -77, 87, -23, -124, -102, -31, -85, 115, -110, 1, 85, 18, 90, 27, 8, -118, -49, 73, -40, 77, 81, 33, 121, -40, -90, -20, 35, -23, -70, 46, -9, -55, -42, 1, 74, 93};
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
    msg.setTimeStamp(0.9874715294119332);
    msg.setSource(36811U);
    msg.setSourceEntity(77U);
    msg.setDestination(37453U);
    msg.setDestinationEntity(133U);
    msg.seq = 36169960U;
    msg.destination.assign("DWWBSRAOVGNTRNZOLHCRRXKMSOLUHQLBQCFMFPGJPSYXVQMTLRGUVFAPWLULAPWVBFUVQNMKJKUOWQZZDSPWJLDMXCWLSMBDZVUEORIRDDJJPUAYNYDSEWYATHBJTETKBUUGATOCOEXYDSRWIIIQKBCNIECFHGCZQNMNXXXSNTXGYJQOBWVIMGPFXOXHYKPEIKCVVPDVTYZMHJHLNHEHNQZGA");
    msg.timeout = 21198U;
    const signed char tmp_msg_0[] = {3, -3, 47, -92, -121, -66, -89, 111, -36, 47, 39, 29, -117, 90, 74, -107, -49, -14, -88, 83, 98, -51, -86, -30, 60, 35, 2, 110, 18, -49, -51, 51, -83, -117, 122, -3, 43, -14, -7, 95, -94, -11, -68, 81, -20, -125, 92, 112, 110, -14, 77, -52, 123, -126, 61, -36, 80, -14, 67, -80, 52, -26, -1, 38, -31, 53, 119, 76, -97, 60, 38};
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
    msg.setTimeStamp(0.28360483563686545);
    msg.setSource(53638U);
    msg.setSourceEntity(68U);
    msg.setDestination(28667U);
    msg.setDestinationEntity(204U);
    msg.source.assign("AKSABUTHIQZVVVHFWDXZGEKUQMWCWDZOGHUQDYIXTFWLWASRLIRBJGCJIEZFLGQSKPTZNCLXLQPFIFWCVIJNIAAKTEFDOPPXFKMNQKNHJEQSVMYCWTOVSKUYRJYRHRNSTUAJATPOSFUPSUWOXLDTBRUVGIBOBZXSUEZQFHYOROGZIXAVJBDNTKLBDKOQVMRPLWENMCYEQPMLDHCTMSGBRZNBJCNAZLJHKPMMGGU");
    const signed char tmp_msg_0[] = {29, 47, 86, -126, 59, -35, -31, 28, -117, -73, 65, -86, -18, -51, -57, -113, 110, 124, 42, 8, -10, 60, 112, -59, 85, 121, -117, 9, 101, 15, -9, 85, 103, 83, 7, 12, 75, 46, -80, -95, -108, -35, 118, -52, 46, 23, 3, 102, 96, 30, 105, -88, 65, 54, 14, 75, -54, -66, 26, -47, 106, -100, -120, 119, 80, 79, -47, 121, -7, 42, 98, 78, 100, -95, 40, -78, 1, -28, -33, -45, 32, -65, 92, 35, -66, 65, 100, 46, -125, 73, -48, 58, -106, 117, 27, -4, -101, 95, 5, 39, -45, -1, -88, 19, 77, -38, 99, -4, -57, 6, -49, -89, 1, 31, 48, -128, 5, -1, 84, -8, 98, 122, 72, -35, 30, 126, -67, 52, 105, 81, -101, -44, 4, -50, -102, -18, 16, 107, -105, 78, 68, 115, 97, -51, -47, -23, 75, -59, -29, 97, -44, -97, 113, -91, -73, 118, -63, 71, 75, -32, 96, -9, -69, 113, 123, 80, 99, 2, 55, -34, -120, -84, -65, 79, -50, -8, 48, 63, -80, -103, 33, -124, 111, 13, -58, 29, -62, -7, 16};
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
    msg.setTimeStamp(0.744211688932967);
    msg.setSource(54437U);
    msg.setSourceEntity(169U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(203U);
    msg.source.assign("RAQSGVPQAUBFINRESIBJAUBSKKUHMLEPEDOTOVQGTMLTHJFNSNUXCILLTIKBDGHGEAUHRZUHSCZWVQSWODYVWZCEYQLGHRZFOKETXIMORWNATTZBT");
    const signed char tmp_msg_0[] = {-25, 28, -55, -115, 83, 83, -13, -8, 82, -85, -26, -38, -83, -81, -60, -108, 78, -110, 72, 19, -57, 98, 26, -73, -95, 33, -43, 34, -77, 32, -56, 107, -115, 74, 75, 101, -49, 8, 48, 39, 21, -70, -83, -2, 45, 86, -88, 35, -2, -91, 45, -4, 72, 45, 17, -98, 125, 77, 113, -61, -119, 11, -49, -56, -16, 87, 7, -118, -105, -120, 4, 76, 2, 126, 78, -92, -119, 109, -83, -86, 13, 68, -62, -20, 104, 45, 125, -84, -51, -55, 20, 83, -128, -55};
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
    msg.setTimeStamp(0.1304503791500795);
    msg.setSource(16685U);
    msg.setSourceEntity(187U);
    msg.setDestination(59142U);
    msg.setDestinationEntity(11U);
    msg.source.assign("HFKMHFDXRNPXHEQYYKCFDQTOAQXABWXYLQOQXLBYBRUGZUELFTCZMNTZUIHEYIFIBFYZBUPMJPRNWIPDCKLMNFGOHSUWCPADWBJOCRGTJNLHEEECWDSEVRICHUSF");
    const signed char tmp_msg_0[] = {-72, -89, 15, 8, -114, 78, 68, 55, 123, 62, -97, -10, -32, 74, 0, -98, 66, -65, -2, -54, 120, 122, -49, 33, -123, -21, -85, 16, -58, 48, -32, -40, -95, 91, 92, 113, 101, -60, -6, -112, -86, 98, -80, -78, 28, 25, 125, -84, -18, -67, -114, 23, -41, 17, -87, 106, -112, 11, 118, 123, -86, -39, -55, 17, 102, 17, 5, -18, -4, -66, -43, -38, -123, -15, 117, -20, 29, -23, 4, 94, 30, 33, -23, -60, 62, -31, 36, 106, -31, 97, -8, -93, 17, -57, -115, 115, 119, 105, 104, -47, 44, -44, 70, -35, 60, 41, -34, -55, 60, -50, 87, -101, -39, 87, -30, 39, -22, -73, -17, 98, 9, 2, 14, 37, -124, -12, 12, 41, -15, -109, -105, -93, 23, -80, -106, -107, -4, -58, -104, -117, -55, 47, 13, 45, -38, -112, 91, 26, 93, 106, -53, -84, 43, 14, -127, 74, 76, 55, -69, -76, 34, -72, -30, 70, 89, -96, -52, 115, 110, -108, 28, -110, 69, 15, 108};
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
    msg.setTimeStamp(0.4279026807299031);
    msg.setSource(44997U);
    msg.setSourceEntity(108U);
    msg.setDestination(57441U);
    msg.setDestinationEntity(38U);
    msg.seq = 2323044499U;
    msg.state = 48U;
    msg.error.assign("QPEOJLLAZKKKTRAUVOYLBUXJQCMBRHLNWMJVTVWVFRFOCTHDQEOSQDEPPONGZVRAMHSPBLYDFVIDNGTUAEBNTHGLSSFIZYDTZCVKSWNABHEJUZWQTOZXYOYKCJDHDJWQJDMLUYKIS");

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
    msg.setTimeStamp(0.7229048313040674);
    msg.setSource(46616U);
    msg.setSourceEntity(229U);
    msg.setDestination(5672U);
    msg.setDestinationEntity(57U);
    msg.seq = 3086341594U;
    msg.state = 51U;
    msg.error.assign("ENCDVUHJVPPLUKMAUMBXWWONESYSYQUFLYYABOHXNRQREOKLNUCRSXKFHYDESDFMYWIYTRVZRGXQPOIXIGRAAVHEDXNZNKUEPZCTRUUGTSLMKYWUXCJGMGIJBEKEPOOGTBDFPIAVKVTFQYLBNJQFDWXMOWOMIPVJKMNCCEZPAQQJPGTLHPKHBWGEHRQIIZWUDOJQVWNZZCFSHGXZBTSMICTCJLHSLBZRJLJXSDDTAFBRFCZA");

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
    msg.setTimeStamp(0.09290373111458627);
    msg.setSource(11708U);
    msg.setSourceEntity(182U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(57U);
    msg.seq = 2403593527U;
    msg.state = 190U;
    msg.error.assign("EUVEWXTPXJROBSCUHZVZNLZUMQPAVZFWKZHHNILSATRYEMQLVIIXBRIUGSQCYSESXMB");

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
    msg.setTimeStamp(0.8185764855513228);
    msg.setSource(25995U);
    msg.setSourceEntity(175U);
    msg.setDestination(35713U);
    msg.setDestinationEntity(54U);
    msg.origin.assign("USJJFRIPLRJFAOMTTGJMKOVPERENNGYXWTEIJCKFLUIVLAVSORBCKZBAATOAXUOEQHUHYFHEPCRSOBFZGFWXQXHAMLXEWPSVLVUVWPYTNZGBKPJZDTLFBQQCNINIMUOZDEXBVVKJXAMSRZULHCKLMADGICYUNMSVKHBPCYLJVKGBQKGAPPYNSWSWNJTSDHQYBWDZUCQCCTRQRPHIMGFWSRITHTDJDXMMIGNFDDFDKOXZGEQZIX");
    msg.text.assign("DYPDHWMARBEZLYNFIBXLYYIIJNSQLZOWENCYSOUMOGEFZVHPVBUDPBMBXTNDERPHHNADJOPDTNKSOFJYCGW");

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
    msg.setTimeStamp(0.8555919974996973);
    msg.setSource(2624U);
    msg.setSourceEntity(81U);
    msg.setDestination(15419U);
    msg.setDestinationEntity(206U);
    msg.origin.assign("HMCWTERKVBWIOIROMNHAAZCVFGUZSHHZSDWREVTICJHCZICSEXYSUXVNBKQXMVRGHIWLAASWGNBBPDXYKDYRTGFJCWEERZ");
    msg.text.assign("VMDOWEUNEEZSHXNQKBJKEDKATBZYSHMGFKOXXIO");

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
    msg.setTimeStamp(0.24265857631151588);
    msg.setSource(2596U);
    msg.setSourceEntity(42U);
    msg.setDestination(44392U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("RXAUIWNGDUMDTMKQBLSPABSTDUOAFKCQCLVVYGQIAVRCWODWXZARRGGDPKTMRYBJSZHXIKYGHSNSFSSFKEDUHMCQUIYQZWTEZLFHELXVRBETLGYYFAOPXTVHODOLZOGKZTJIICBTTWIKFNZYPYHNERPXDSGVFCDUJXCMPWRPZEOGLLZBJAUVSTBNOMMQPPAUKNDLHHQKUOWYJMNWIQPCIOJ");
    msg.text.assign("OVTVOEAUUYUDKSHLKQVGAMYNUBRFZLCMXAKNTRUTTOIGHWYVHUWWZIRUILRZTYDFGGZWACDSNHJVTJNWYDEZEZWBPJCNXAISQHPJQHBGGSIGPJMFKFQV");

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
    msg.setTimeStamp(0.7932949865497649);
    msg.setSource(37958U);
    msg.setSourceEntity(222U);
    msg.setDestination(43045U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("PYBBSHDTQOTRRXRSINPUSQXLKMPEIGNDDNSBEABVPRRWIGOBFYSVVXOMBQTXKCBJBJQJNJFMKFLIWALWPFZAGVRLHQZKGGYFXGCFUMXZTJUSHVJTMPICJQWNCXVKISFJDECQCQMGFEHBRSXPKHXLRDKUVZCPOSLVMDBGLUUKHANYFU");
    msg.htime = 0.07667635352727653;
    msg.lat = 0.05998748593512182;
    msg.lon = 0.16846663994399347;
    const signed char tmp_msg_0[] = {111, 64, 94, -60, 0, 13, 126, 50, -5, 117, 90, -127, -70, 100, -118, -99, 93, -33, -25, -92, 38, -126, -10, 9, -38, -111, 77, 97, -112, 46, 71, 8, -79, -15, 56, -69, 110, -95, -88, 96, -85, 26, -5, 118, 44, 67, 14, -6, -35, -33, 48, -78, -101, -61, 18, 106, 59, -69, -124, 101, 28, -26, -128, -128, 92, -62, -84, 46, 21, -34, 122, -22, 76, 93, 83, -117, -31, 109, -126, 40, -21, -45, -111, 56, 88, -31, -17, -82, -54, 38, 68, 114, -50, -12, -22, 39, 104, 125, 46, -79, 14, -65, 23, 34, 85, 125, 98, 79, 25, -102, -126, -98, 120, 90, -87, -103, -121, -110, -52, -15, -110, 7, 80, -51, -2, 88, -25, -83, 75, 62, -94, 12, -53, 107, -17, -122, -96, -63, -78, -97, -121, -127, -78, 10, 110, -113, -64, 20, 48, -126, -45, 87, 112, 52, -6, -71, 3, 89, -71, -126, 0, -96, 99, 45, 88, 27, -36, 101, -7, -57, 57, 117, 5, -51, -50, 13};
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
    msg.setTimeStamp(0.44902985011395913);
    msg.setSource(2162U);
    msg.setSourceEntity(219U);
    msg.setDestination(9594U);
    msg.setDestinationEntity(85U);
    msg.origin.assign("BVDNWCYZZTCOZUQBJASFQIXWLCWDMAPYVQLKAEGBRTMWKPDKSYITPIZXTQEOCSHGNGKOSLMCBKEAMYRLFRRDZNVKQNFVLRUNAASOOJDHXSOKTNAJQWGLHHSDTUCLYOPEJITIYCZSJUHLQPTGIPZXXUQLFZZUSRVUOWGVJWXXMAVYFRNGBJHSJUAFBHGCIYMONTKBDIIXPZLNMCCBEVBURFKD");
    msg.htime = 0.5152316471997422;
    msg.lat = 0.9909335784858645;
    msg.lon = 0.8633035902186651;
    const signed char tmp_msg_0[] = {33, -99, -61, -77, 115, 88, 71, 58, 34, -88, 11, -53, -93, 20, -38, -122, -76, -22, 100, 55, -123, -57, -88, -28, -113, 10, 61, -35, -68, 107, 13, -90, 34, -108, 73, -52, 88, 108, 59, -38, -47, -11, 120, -66, 107, 105, 61, -7, -24, -30, -119, -51, -49, 12, -54, 19, -78, -6, 39, 98, 114, -93, -17, -44, -13, -107, -50, 86, -19, 83, 36, 46, 38, 27, -38, 17, 77, 45, -95, 33, -99, 117, 118, -102, 90, 49, 92, 111, -30, 56, -95, -122, -69, 26, -92, 76, 20, 86, -47, 99, -123, -24, 89, 21, 85, -88, 1, -88, -38, 67, 9, -43, 50, -47, 122, -39, -34, -57, 106, -77, 50, -71, -80, 65, 96, -4, -91, 122, -104, -47, -59, 67, -85, -2, -58, 8, 94};
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
    msg.setTimeStamp(0.16006888848386358);
    msg.setSource(27880U);
    msg.setSourceEntity(7U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("ELHFXJBJAVTWPRIOEIBKZDLCTRYUOMYVQFJKXGRUGDWELXZDVBCPCGLQUSBTSPNMADBGBRWREJZHGPSQCQUFUKSDXNPHETWCQWQIUIOFYKATQKORZGRAJDMIKMFBCOHKJZGELTLMJLBHUFXKKRJVHORUCVDKXLHINPETZCHXFZGWWZYYVVEBWNUHPIQFTNZMAFMY");
    msg.htime = 0.49591078073044026;
    msg.lat = 0.09387144577526463;
    msg.lon = 0.9322389818336047;
    const signed char tmp_msg_0[] = {-82, 86, -20, 30, 28, 18, 124, -85, 112, -103, -44, 105, 82, -124, -67, 91, -109, -76, -48, -45, -118, -49, 6, 21, -6, -124, 6, 24, -46, -18, 88, 64, -95, -80, 125, -123, -89, 97, -42, -44, 73, -127, 69, 45, 84, -90, 35, -48, -54, 67, -36, 88, -2, -90, -53, 87, 99, 126, -16, 5, -109, 51, 108, -112, -57, 89, 126, -29, -113, -102, 67, 54, 37, -88, 52, -87, 94, 55, 59, 67, 86, 97, -24, -18, -75, 61, 67, 44, -94, 113, -78, 114, 95, 10, 58, -48, -78, 4, -34, -89, -73, 53, -7, -11, -92, 16, 1, -75, 49, 121, -40, -47, -114, 36, 23, -81, -34, -21, 119, -84, 90, -115, 29, 77, -46, 30, -112, -81, -105, -101, -25, 22, -54, 82, 112, 118, -25, -48, -90, 13, 78, 22, 77, -54, 15, -22, -74, 116};
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
    msg.setTimeStamp(0.10884673229425967);
    msg.setSource(38593U);
    msg.setSourceEntity(56U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(244U);
    msg.req_id = 59116U;
    msg.ttl = 53356U;
    msg.destination.assign("QCWUQECGINNHS");
    const signed char tmp_msg_0[] = {92, -69, -35, -18, -8, -37, 44, -103, 42, 98, -125, -114, -123, -81, 110, 106, -65, 43, 76, 10, -20, 60, 55, 40, 23, -62, 15, 22, -39, -6, -65, -49, -112, -115, -7, -9, -17, 92, -65, -60, -62, 92, -22, -104, -6, -83, -48, 102, -116, -99, -120, -27, -118, -126, -28, 104, 17, -28, 18, 11, 78, 63, -5, -89, 64, -92, 91, -64, 53, -41, -26, -32, 125, -31, 122, -17, 26, -59, 59, -118, 27, 31, -37, 26, -15, -102, -128, 55, -116, 12, -8, -38, 25, 69, -24, 124, -34, -3, 64, -52, 74, -97, 79, -13, -75, -22, 41, -107, -4, 32, -35, 103, -93, 115, 45, -127, 33, -4, -10, -125, 24, -8, 8, -19, 17, -40, -113, -29, 113, 39, 54, 18, 36, 41, 48, -103, 44, -88, 15, 29, -104, 73, 50, 65, 83, -52, -16, -96, 126, -37, -54, 69, -91, -88, 12, -32, -22, -15, 44, -15, -58, 59, -117, -94, 21, -19, 7, 26, 61, -11, 24, 109, -46, 4, -111, -42, -37, 1, -12, 47, 12, 84, 59, -64, 12, -61, -107, 14, 48, 90, -49, -4, 31, -91, -57, 117, -8, -81, -56, 82, 10, -57, -16, 92, -48, 88, 25, -108, 6, -68, 50, -76, -61, 45, 52, 70, -60, -54, -71, -50, 113, 28, 9, 92, 6, -79, 37, 48, 100, 90, 20, 14, 84, 97, 24, -119, 15, -75, 47, -108, -47, 11, 51, -4, -79, 32};
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
    msg.setTimeStamp(0.5665956415999506);
    msg.setSource(9648U);
    msg.setSourceEntity(196U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(28U);
    msg.req_id = 42941U;
    msg.ttl = 20663U;
    msg.destination.assign("WASRZKQBYPQMVOLMYBQQTKYFUHERMLPQCZWFLGRUZCKMHRUIIPCZSREJTXGJTSTINKAAWPFLDDNJABPPTVLQFVBVTSUVJREVIQCXOAJAVMAYFCOJDOBGJXOYTAMZENFVIKXFNRZCWGYBYXQHKNZLFBBGFWGUSRKOKPOWYPMCDEUCHPAGBHIJLDIGDDNWSHDOUCATLVJZMDGZHIQLUXNESBHXJYDKTMONHEZVSCXWW");
    const signed char tmp_msg_0[] = {-113, 65, 66, 43, 20, 58, 27, -80, 35, 34, -3, -81, -69, -125, 123, 110, 55, -91, -62, -18, 117, -13, 93, 85, 26, 82, -5, -27, -110, 64, -127, 8, -124, 86, 45, -85, 34, -85, -117, 31, -62, -66, 101, 73, 31, 102, -42, 74, -8, -1, -32, -4, -98, -68, -58, -26, -19, -82, -98, -89, 24, -35, 73, 24, 92, -112, -10, 119, -85, 31, -53, 60, 7, 27, 125, -122, -100, 123, 53, -74, 47, -123, 47, 117, -103, -30, 67, -79, 120, 35, -38, 21, -69, -49, -67, 115, -33, 2, 24, 43, 118, 118, -38, -29, 81, -81, 60, 117, -97, 74, 100, -125, 79, 74, 9, -14, -1, -66, -5, -5, -5, 12, 27, -72, 55, 43, -84, -125, 46, -74, -20, 96, 34, 120, 44, 3, -62, -68, -121, -11, 3, -3, 115, 73, 46, 124, 33, 26, -1, -73, 31, -84, 80, -98, 91, -106, -123, 11, 75, -36, 67, -108, 71, -49, -63, 116, -58, -53, 33, 64, 56, -15, -106, 40, -29, 84, -35, 81, 84, -24, 69, 59, 123, -97, -120, -53, -26, -8, 114, -65, -116, 22, 92, 58, 0, -7, -68, 10, 86, -110, 13, -41, -115, -101, -35, 103, -123, -15, -80, -79, 107, 57, -21, 91, -70, 37};
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
    msg.setTimeStamp(0.8844723448783507);
    msg.setSource(52420U);
    msg.setSourceEntity(100U);
    msg.setDestination(50226U);
    msg.setDestinationEntity(219U);
    msg.req_id = 14366U;
    msg.ttl = 10354U;
    msg.destination.assign("NGKBLQINVTVCIPPAX");
    const signed char tmp_msg_0[] = {-77, -35, -115, 75, 61, -80, -52, -109, 1, -6, 126, 39, 14, 22, -47, 21, -103, 20, -115, 17, 83, 107, -76, -70, -94, 83, -32, 42, -47, 125, -94, -50, 126, 102, 69, 74, -97, -45, -84, 70, -31, 41, -79, 34, 26, 98, 62, 125, -92, -37, 108, -38, 115, 31, -5, -36, 6, 113, 5, -30, -6, 82, -107, 116, 23, 116, -108, 60, -66, 34, 80, 98, 74, -66, 23, -23, -111, 39, -42, 36, 42, -52, -109, 90, 74, 100, 75, -11, -78, 59, 41, 61, -20, -68, -8, 23, -43, -35, 48, 90, -5, 91, 53, -37, 25, 15, 81, 3, 53, 78, -59, -67, 52, 95, -3, -96, -110, -17, 126, 126, -17, -72, -97, -77, 10, -40, 58, 25, 98, 96, -66, 52, 43, 76, -7, 47, -117, 54, 32, -15, 12, -55};
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
    msg.setTimeStamp(0.9455429409150494);
    msg.setSource(2565U);
    msg.setSourceEntity(167U);
    msg.setDestination(13019U);
    msg.setDestinationEntity(102U);
    msg.req_id = 53906U;
    msg.status = 21U;
    msg.text.assign("MYHFUCDQEUGLRKNYORNAPDUSJZCWHNLDZEXGBQGYKZJYWJAKVULORVQDSCEABKXHWMSBPNNQRXTQOMEBCKETWFSARTNCSHVGDJQBHJHFMHAOFSMIMIATUQZPXILXDQDSBSXVGWVYTMTRIRBNKGRTLWIODWYHZKKIJVNNIAFRCOTGDUAOZNZLMCJ");

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
    msg.setTimeStamp(0.25996164577642533);
    msg.setSource(37027U);
    msg.setSourceEntity(251U);
    msg.setDestination(37454U);
    msg.setDestinationEntity(240U);
    msg.req_id = 60867U;
    msg.status = 141U;
    msg.text.assign("MTRDQYKMBKZOECTASVEKFSHLNEQIQBCDHSYDQXAWVQJMUGYPHMUAAIKABONLHQOIPTSYHGEEPNRNZLBBVJOLUCRUAEAMNXPFRBXMUGPDFRFTBKCXKIJERVXZWXWEUMOQSDJDRTFGGULTNDSVSHVGTKPZWOIHKZJXFQTKNLVSTIKADIJYPTUYVCWWUEYGIGHGFZRXYLCQLCOUNZJWVAMCWGBFZFPJO");

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
    msg.setTimeStamp(0.05423109645895108);
    msg.setSource(62680U);
    msg.setSourceEntity(91U);
    msg.setDestination(27405U);
    msg.setDestinationEntity(120U);
    msg.req_id = 29414U;
    msg.status = 163U;
    msg.text.assign("FWVGWAZHMLOHTSENGVSUEQKXMXKIIY");

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
    msg.setTimeStamp(0.5771564925408602);
    msg.setSource(28067U);
    msg.setSourceEntity(157U);
    msg.setDestination(34130U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("XTYYCPXXNQPHOE");
    msg.links = 1449264712U;

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
    msg.setTimeStamp(0.04243513805831611);
    msg.setSource(30462U);
    msg.setSourceEntity(153U);
    msg.setDestination(17437U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("WRSRTUTRKAXSRSDKNPQCQLEVMFMZSOPNYOXLABXIMPLCOUWTMICMACKD");
    msg.links = 622462085U;

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
    msg.setTimeStamp(0.10229705105938913);
    msg.setSource(15325U);
    msg.setSourceEntity(61U);
    msg.setDestination(14653U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("BMVFJQPEZECWQQMIVCKKQCEWDZMZXOYGVSWXUBLVPADBKBHVNYIHZFYUSQLYBCOLSREOGSJBNWE");
    msg.links = 602036321U;

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
    msg.setTimeStamp(0.2680299700129001);
    msg.setSource(14207U);
    msg.setSourceEntity(94U);
    msg.setDestination(41780U);
    msg.setDestinationEntity(134U);
    msg.groupname.assign("CEFSWZDOXMVAPXBQMHIZWILIBMSVRHUQMPINBYWXGCMVXHSVJEJJRLONIOBPPGLTEQFGENGORWRGCIBXAVDPEHADOTZKBSULDLJMDNKVYDSYXJUWDY");
    msg.action = 52U;
    msg.grouplist.assign("MPGRDEDXITMBYQLMMCCNPLKCHSZEPIWJVN");

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
    msg.setTimeStamp(0.5033634040388177);
    msg.setSource(4044U);
    msg.setSourceEntity(124U);
    msg.setDestination(49981U);
    msg.setDestinationEntity(200U);
    msg.groupname.assign("CMPXTIYATVYXUMXCRVQPDHRVASFIYHJYYMHJMWKDUZHRJRRBXQSWGGIULQKJGIZVWCETZGUMYSMIBJTONXVFMTZF");
    msg.action = 71U;
    msg.grouplist.assign("MZFOGPNASZSODGOHDZSVLLBRBODSTJHHNAOZIEJIDVGJRBMDZOTEUZGXDIUNTFUWUROTJRKOIBHWIUQFSEHPUSEFGRRACHQWLAXFAAHEPRLRAJYDBNVOCCBVLFMNCZIYZQMNACLDJNKUKQTTCKVXWEKIITTZGLWRYAIMQYXUJYHSQYBUYDGMKLYHQLVCCQEVJNFXPXCYPPGVEMVFMWJFPDU");

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
    msg.setTimeStamp(0.8187101590588003);
    msg.setSource(10147U);
    msg.setSourceEntity(59U);
    msg.setDestination(1489U);
    msg.setDestinationEntity(25U);
    msg.groupname.assign("OFKUUTTRLEOTLXOEGWVCQBHFONLEPSMPMEOVWCQYLQKDJRFDXALIZKFNTSWXZP");
    msg.action = 35U;
    msg.grouplist.assign("AYJWUYOCFUTCAJRVATBWIAITUZASNDSMXPBFEROPXCUEOPCHQXFKMVHLEMSLULEKPGGUYYXROVSPZGKYA");

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
    msg.setTimeStamp(0.7712401734910664);
    msg.setSource(58434U);
    msg.setSourceEntity(110U);
    msg.setDestination(1159U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6817142337393347;
    msg.sys_src = 11727U;

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
    msg.setTimeStamp(0.9441490386417868);
    msg.setSource(3988U);
    msg.setSourceEntity(2U);
    msg.setDestination(9571U);
    msg.setDestinationEntity(149U);
    msg.value = 0.9161529866174358;
    msg.sys_src = 62047U;

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
    msg.setTimeStamp(0.48803205018570905);
    msg.setSource(39359U);
    msg.setSourceEntity(126U);
    msg.setDestination(4179U);
    msg.setDestinationEntity(152U);
    msg.value = 0.1834732396953761;
    msg.sys_src = 38459U;

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
    msg.setTimeStamp(0.9354115147818197);
    msg.setSource(29650U);
    msg.setSourceEntity(157U);
    msg.setDestination(61084U);
    msg.setDestinationEntity(32U);
    msg.value = 0.3326893538599137;
    msg.units = 65U;

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
    msg.setTimeStamp(0.19198993135726883);
    msg.setSource(3159U);
    msg.setSourceEntity(218U);
    msg.setDestination(15445U);
    msg.setDestinationEntity(203U);
    msg.value = 0.8313918502758042;
    msg.units = 157U;

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
    msg.setTimeStamp(0.6377136948303983);
    msg.setSource(2628U);
    msg.setSourceEntity(26U);
    msg.setDestination(54330U);
    msg.setDestinationEntity(251U);
    msg.value = 0.4978806812299843;
    msg.units = 247U;

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
    msg.setTimeStamp(0.3980431549737041);
    msg.setSource(51526U);
    msg.setSourceEntity(56U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(72U);
    msg.base_lat = 0.9463411579484481;
    msg.base_lon = 0.06866129687966238;
    msg.base_time = 0.9534288764013402;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 43757U;
    tmp_msg_0.destination = 54364U;
    tmp_msg_0.timeout = 0.345180083752046;
    IMC::RSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.04589574482799352;
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
    msg.setTimeStamp(0.09149101721367559);
    msg.setSource(62098U);
    msg.setSourceEntity(122U);
    msg.setDestination(8319U);
    msg.setDestinationEntity(17U);
    msg.base_lat = 0.33912574849047517;
    msg.base_lon = 0.4361538140761435;
    msg.base_time = 0.1836131254805452;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 13899U;
    tmp_msg_0.priority = 76;
    tmp_msg_0.x = 29763;
    tmp_msg_0.y = 17718;
    tmp_msg_0.z = -27004;
    tmp_msg_0.t = -28870;
    IMC::FuelLevel tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9685532023997812;
    tmp_tmp_msg_0_0.confidence = 0.2860669342624875;
    tmp_tmp_msg_0_0.opmodes.assign("JBDKFZHSWJCZCYCHHITDPRNELGPGXLNHNMXPUXAGKYOCELRMCAJLJCGAZTEQOIHDPWLNEZDSAIVHBDUYYHK");
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
    msg.setTimeStamp(0.6576897551349481);
    msg.setSource(57823U);
    msg.setSourceEntity(11U);
    msg.setDestination(36475U);
    msg.setDestinationEntity(196U);
    msg.base_lat = 0.7048795963684558;
    msg.base_lon = 0.8464749616986913;
    msg.base_time = 0.16764291967807088;

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
    msg.setTimeStamp(0.6880434832615466);
    msg.setSource(20481U);
    msg.setSourceEntity(104U);
    msg.setDestination(64374U);
    msg.setDestinationEntity(121U);
    msg.base_lat = 0.6364802176747865;
    msg.base_lon = 0.24118659924331065;
    msg.base_time = 0.8736616919071745;
    const signed char tmp_msg_0[] = {91, -111, -77, 12, -84, -22, -50, -59, -78, -6, 103, 100, -22, 92, -91, -46, 4, 49, -96, -80, 27, 56, 48, -93, -68, -30, 53, -43, 116, 91, 1, 72, -119, 68, -92, -76, -12, 15, 42, -95, 108, -95, -84, -16, 58, -30, -3, -114, 102, -39, 36, 48, 36, -116, -2, -119, -120, -117, 98, 97, -82, 41, -32, -30, 14, -31, 83, 113, 102, 85, 35, 61, -30, -10, -56, 110, -122, -110, 87, -37, 59, 98, 24, -12, -33, 57, -34, 5, 85, -90, 95, 106, 68, 112, -80, -28, -7, -119, -109, 61, 47, 62, 61, -93, 31, 25, 90, 50, 4, 97, -96, 115, -30, 17, -124, 89, 119, 78, 91, -38, 114, -39, 4, -104, 4, 122, -114, -52, -102, -35, 59, -9, 57, 67, 88};
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
    msg.setTimeStamp(0.1354192121110519);
    msg.setSource(43640U);
    msg.setSourceEntity(53U);
    msg.setDestination(24127U);
    msg.setDestinationEntity(187U);
    msg.base_lat = 0.4636946654564499;
    msg.base_lon = 0.6733775819944916;
    msg.base_time = 0.7203502969656415;
    const signed char tmp_msg_0[] = {56, 54, -37, -13, 60, -124, 15, 125, 115, 73, 115, -121, -103, 86, -67, -100, 118, 57, -24, 30, 27, -104, -49, -88, 10, 49, -77, -9, -56, 12, 87, 73, 52, -104, -120, 53, -52, 95, -27, 79, 15, -91, 117, 21, -50, 5, 19, -18, -52, 15, 23, 101, -111, -93};
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
    msg.setTimeStamp(0.5842573164886098);
    msg.setSource(3515U);
    msg.setSourceEntity(73U);
    msg.setDestination(22316U);
    msg.setDestinationEntity(93U);
    msg.base_lat = 0.8991724555033587;
    msg.base_lon = 0.20370660623045345;
    msg.base_time = 0.4194611190718124;
    const signed char tmp_msg_0[] = {48, -8, -26, 48, 93, 25, 57, 0, -10, 79, -13, 89, 40, -84, -57, -37, 47, -22, -20, 121, -120, -21, 95, -104, 103, 48, 1, 88, 73, -114, 56, -38, -84, -76, -22, -60, -40, 84, 63, 108, -105, -86, 13, 123, -64, 73, -111, 33, 71, -8, 1, 40, 9, 71, -98, 41, 49, -116, -105, -13, 99, -70, 99, -9, 51, -8, 121, -96, -22, -58, 114, 79, -35, 90, 99, 82, -59, 51, -30, 91, -1, 27, 31, -89, -104, -124, -45, 75, 31, 82, 21, -52, 90, 9, 15, -13, 73, -99, -44, -6, 90, 1, -80, 30, 119, 116, 71, -93, -8, -104, 115, -112, -39, 75, 54, 105, -25, -119, -37, -67, -97, -34, 72, 78, -110, -56, -29, -48, -128, 120, -58, 22, 97, 55, -15, -26, -67, -126, 51, -20, -86, 79, -5, -2, 67, -114, 115, 52, -12, -45, 58, -6, -66, 7, -59, -67, -69, -28, 107, -78, 126, -97, -84, -55};
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
    msg.setTimeStamp(0.8496668592250564);
    msg.setSource(56862U);
    msg.setSourceEntity(109U);
    msg.setDestination(44547U);
    msg.setDestinationEntity(230U);
    msg.sys_id = 948U;
    msg.priority = 117;
    msg.x = -22358;
    msg.y = 4123;
    msg.z = 24170;
    msg.t = -23775;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 23881U;
    tmp_msg_0.destination.assign("TGCUDOSJVLYAEROGZTIDFHWJEHGXIPHACLONWRZOSMDICLMFMPWBOGMLLUNWPZIOVAZKASPGQLVNIWSCYFDDUGTDYFUSEKSTJNQVFMYLVBEURRXWVAOBQRKXVDBUHUYTPYWYWBOVDRZJKEBVUTMRCKMCEPOXJSXRHSUGEEYBIXFFSKTZNSBKEHLLQLMQCTFJDJPGNTFAEQAKHQGAGQKCBVCZNNQJZITRYOAWJYMN");
    tmp_msg_0.timeout = 0.12998553882356534;
    tmp_msg_0.range = 0.8924540248995947;
    tmp_msg_0.type = 240U;
    IMC::LcdControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 158U;
    tmp_tmp_msg_0_0.text.assign("RGIJKOSZCLPWMQHWRCMJCZNIAJERHZLGBVQCGYHYQSFDYLAYMXARALZGDSTSWLVXXPLGMUFOARCFGJZTVZQPEXXIQVBZDZCFWVUWGKNUSINOFRCBWXPTQ");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7271744619807667);
    msg.setSource(47884U);
    msg.setSourceEntity(134U);
    msg.setDestination(2049U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 37351U;
    msg.priority = 101;
    msg.x = 26684;
    msg.y = 21112;
    msg.z = -22638;
    msg.t = -25365;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.7382588121285136;
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
    msg.setTimeStamp(0.3579351584286067);
    msg.setSource(26913U);
    msg.setSourceEntity(91U);
    msg.setDestination(57991U);
    msg.setDestinationEntity(171U);
    msg.sys_id = 11007U;
    msg.priority = 77;
    msg.x = 7854;
    msg.y = -24594;
    msg.z = -5799;
    msg.t = 15490;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("DQBRMXYRLNCGJHTXXNGWPPUDWJKRCUBVRVVJFHXYBYQIFHYCGSKZGAXMLPMQZFKMPTMNCMYDQNJGUCAUTPBQIQLBLAEJYKODOHLQZBDAFVJSLUCBEJEXHDPALVSSFNSSMCDAAYUOWIOTKEQQOBITZTCHVORAFGOZUHRSIGZHGD");
    tmp_msg_0.sys_dst.assign("OHKXFIJKIRUEQOLLVZMQPAZJDLPOQYPETERBISPNUAOYUREINGRUJVMATVQLTEFZNWWLSRTBYCWOSDHVRULSEVVAYPWUGZTHVHTMLFCGRVBPCPIDBYLWDWZDKORUGKRSYMNOYJWKTATNMQOHKKWYAXFSQKODFKXDYCJMQZZNM");
    tmp_msg_0.flags = 72U;
    const signed char tmp_tmp_msg_0_0[] = {94, -36, 65, 18, -39, -43, 43, -68, -73, 8, 95, 49, -52, 106, 109, -64, -18, -121, 61, -113, -122, -128, -46, 3, -50, 95, 95, 50, -44, -92, -27, 60, 104, -56, 107, 50, -96, -112, -1, -72, 111, 45, -113, 122, 34, -60, 0, 34, -48, 100, 49, -73, -68, 121, -87, -59, 92, -80, -57, -81, -20, 109, 115, 34, 22, 126, -53, 30, -85, -25, -100, -94, 48, 62, 67, 96, -2, -89, -16, -2, 89, 75, -74, 68, -21, 36, 104, 88, -91, 17, -67, -31, 34, -126, -46, -60, -115, -20, 75, -87, 6, -8, -73, 80, 61, 63, -65, 102, 43, -43, 98, -97, 57, -109, 45, -34, -92, 43, 23, 30, -66, 14, 91, 117, -46, 101, 54, 58, 38, -8, 17, 28, 10, 12, 70, -23, -78, 66, 124, 80, 30, -55, 79, -89, 50, -81, 126, -75, 53, -16, 113, -110, -53, 117, 15, 110, 51, 3, 79, 83, -50, 64, -56, -20, 83, 9, -91, -6, -15, -127, -109, 126};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7690557573709618);
    msg.setSource(12902U);
    msg.setSourceEntity(6U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(26U);
    msg.req_id = 13933U;
    msg.type = 96U;
    msg.max_size = 44945U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.09050181850295136;
    tmp_msg_0.base_lon = 0.9616303680842527;
    tmp_msg_0.base_time = 0.7312032513039606;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 53423U;
    tmp_tmp_msg_0_0.priority = -95;
    tmp_tmp_msg_0_0.x = -10911;
    tmp_tmp_msg_0_0.y = 21583;
    tmp_tmp_msg_0_0.z = -27659;
    tmp_tmp_msg_0_0.t = 30401;
    IMC::ServoPosition tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 195U;
    tmp_tmp_tmp_msg_0_0_0.value = 0.22473829175309978;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.26898269635849437);
    msg.setSource(48935U);
    msg.setSourceEntity(21U);
    msg.setDestination(55446U);
    msg.setDestinationEntity(40U);
    msg.req_id = 24133U;
    msg.type = 161U;
    msg.max_size = 47642U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7123816095133936;
    tmp_msg_0.base_lon = 0.802700753466597;
    tmp_msg_0.base_time = 0.9782365939020675;
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
    msg.setTimeStamp(0.7390087803245077);
    msg.setSource(56029U);
    msg.setSourceEntity(86U);
    msg.setDestination(52640U);
    msg.setDestinationEntity(65U);
    msg.req_id = 31685U;
    msg.type = 249U;
    msg.max_size = 9943U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.30177984887203213;
    tmp_msg_0.base_lon = 0.9387321661293385;
    tmp_msg_0.base_time = 0.8693031695328859;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 27596U;
    tmp_tmp_msg_0_0.priority = -42;
    tmp_tmp_msg_0_0.x = -8103;
    tmp_tmp_msg_0_0.y = -4961;
    tmp_tmp_msg_0_0.z = -20437;
    tmp_tmp_msg_0_0.t = -24643;
    IMC::ImageTracking tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.16925112716033786);
    msg.setSource(13750U);
    msg.setSourceEntity(113U);
    msg.setDestination(59790U);
    msg.setDestinationEntity(221U);
    msg.original_source = 12025U;
    msg.destination = 46857U;
    msg.timeout = 0.26860214835671337;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("CERPEEHMAIVNWJFMVUWCWKXPHJLMLCSRLTKILKWPKLEGSSFBBGXOTDOSGYROIUJSZZJMRJXACQW");
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
    msg.setTimeStamp(0.344805941933206);
    msg.setSource(5208U);
    msg.setSourceEntity(236U);
    msg.setDestination(527U);
    msg.setDestinationEntity(227U);
    msg.original_source = 34185U;
    msg.destination = 14960U;
    msg.timeout = 0.7605923337124062;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 138U;
    tmp_msg_0.value = 243U;
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
    msg.setTimeStamp(0.9416736390366138);
    msg.setSource(62109U);
    msg.setSourceEntity(36U);
    msg.setDestination(19398U);
    msg.setDestinationEntity(212U);
    msg.original_source = 11746U;
    msg.destination = 64825U;
    msg.timeout = 0.5107967556583485;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3522U;
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
    msg.setTimeStamp(0.2866397820897033);
    msg.setSource(34751U);
    msg.setSourceEntity(176U);
    msg.setDestination(33786U);
    msg.setDestinationEntity(88U);
    msg.type = 68U;
    msg.comm_interface = 47795U;
    msg.model = 23495U;
    msg.list.assign("EONPCEXSQLQIXHBIEAKIMTKALYDDQIQEDWIRBBKNWYCPUFFIWKOJDCHXUJTPPXPBVHDQLSGCFEGVYVYOGSOCRWJVOEKAJTNUWPGSJNUCXXVLDRBZMZDMPSAEMGHFSNFNIVAJPZUZTLXZTNHGZGYPHAJIMW");

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
    msg.setTimeStamp(0.05553442664365549);
    msg.setSource(50318U);
    msg.setSourceEntity(183U);
    msg.setDestination(64105U);
    msg.setDestinationEntity(178U);
    msg.type = 20U;
    msg.comm_interface = 38328U;
    msg.model = 33231U;
    msg.list.assign("LIYJPSUHFQCLMKAYRDZNZRAHHITQTFBTFJYSYCONAOMERGYGVILJCOQBKUDPVVLSMZDDVUXJWQZGKEWEXQRMNEBAATKCSMIWIDOBQOONTZYQXCNOHDENXCFBBBPBXAXRHSTVWFZOEDANWURNGUQFZJLKGSZKTTWJPKLVNGUDPYC");

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
    msg.setTimeStamp(0.17622834343511906);
    msg.setSource(22503U);
    msg.setSourceEntity(77U);
    msg.setDestination(16904U);
    msg.setDestinationEntity(83U);
    msg.type = 192U;
    msg.comm_interface = 41931U;
    msg.model = 10946U;
    msg.list.assign("JMDSLXVZXWQCNKYJYVBHBVBANCEFTSEJFBRTFDVCRIXKWLDZIXZQRMRIGXWQGZGYTHVNZMSVHQSPOLUICOAJLWWDZPRYBIDFFDCSYNPVSEEYPJEALTXTQQDOMUOCUKBXDHZZMEMBQCCVIPGHMIOAWJYGFBLDTXGLWSGFRMYAKNENOSIAVKOCZIKOXQPRBQAFQPUJTFTAZPWUHUJHHURDPHJRKHSBNAIORULTVEOXEGNWMLYUKGU");

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
    msg.setTimeStamp(0.26514929349816985);
    msg.setSource(18518U);
    msg.setSourceEntity(125U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(14U);
    msg.type = 131U;
    msg.req_id = 1933861785U;
    msg.ttl = 9222U;
    msg.code = 133U;
    msg.destination.assign("PLJPRQQKJGEWHYLRAJLSCLAFSEZOBQWYKAXKGDDXNIXFKYIVFAETWZXIECUOXDGUTBZRZBGOALSREHBHPZZBTYCHJPHOKSTHEDOYQCRSUOGFMGTFTJLYNHZOYLMSAMPMIKDWKLRSQXCKKPSHPORENVKVZHBFCMDVJDHQPDEXMNNMUSNICTUXWDNQUIJBLOEVJBJWNPGAIIURTUIOMRWQVYMGUSLACNVVFAXGFTVEJYZQCNVFIBAFDTWRYGPBXZ");
    msg.source.assign("FZBKONBTOKUPHWAHXVDINKZGSNQCIKTEAHQODGYGCZOMTZXDLPLJABXWX");
    msg.acknowledge = 175U;
    msg.status = 14U;
    const signed char tmp_msg_0[] = {-62, -105, 72, 94, 70, 40, 36, 33, -104, -15, 40, 118, 86, -32, 11, -117, 117, -54, 30, -87, -90, -123, -92, -60, 18, 90, 58, 33, 14, -120, -91, 75, 63, -70, 5, 77, -8, 42, 110, -31, -25, 85, 5, -82, 12, 79, 89, -118, 5, 95, 5, -75, 99, 94, -45, 119, 35, 57, -5, 60, 18, -71, -103, 62, 71, 57, -5, 51, -111, -128, 119, 101, -40, 90, 2};
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
    msg.setTimeStamp(0.45472478370213576);
    msg.setSource(46805U);
    msg.setSourceEntity(54U);
    msg.setDestination(65346U);
    msg.setDestinationEntity(67U);
    msg.type = 237U;
    msg.req_id = 2598363956U;
    msg.ttl = 61566U;
    msg.code = 234U;
    msg.destination.assign("UHKGMTNBNJOSHRHUMJTIMHVPQKPROZVDJCYLIZHQGDBUKBACOFPNAAYALHORBZYFKIQDZEDFLKMEQGAAHSHSZXDDGVHMSOXDJAWJFVBDEXSUIZYMDIDKTEPLXGIARMWNLNBGCTFZLKUTXNKJGNASWXYXTCYTOOVLJIPWGITPU");
    msg.source.assign("BDYZLMXZLLDCQPSTJOKOVIAYFKZFXQWXLUPYWHCRPJJUPCQRDWJEPCDBHJCTIJGDHAJHEFGYIKLLSOKRHENIADMLKLNTIHGXNQTTCSWSXUEUKEALRDOOPTXMUISSGNFANGOVRSMVL");
    msg.acknowledge = 45U;
    msg.status = 16U;
    const signed char tmp_msg_0[] = {45, -102, 62, 112, -52, 78, 34, 21, 34, -80, 53, 111, 22, -6, 10, -41, -47, -94, 101, -8, -39, -24, 19, 87, 82, 95, 85, -29, -23, -69, 101, 19, 72, -32, 62, 115, -65, 109, 39, -27, 11, -83, -8, 44, 67, 102, -87, 109, -50, -63, -98, 32, -50, -65, 15, 111, -20, 114, -115, 126, -107, -15, 5, 96, 72, 41, -105, -114, -22, -37, 1, 63, -84, 19, -36, -68, -30, 30, 70, 96, -45, -27, -127, -13, 63, 121, 112, -118, 10, -120, -30, -49, 122, -126, 110, 19, 58, -18, -99, 33, 126, 78, 99, 28, 52, -95, -110, 106, -85, 6, -55, 15, -61, 25, 97, 49, 73, -42, 77, -80, -41, -94, -30, 46, -81, -83, 84, -4, 3, -78, 86, 93, -68, -61, -16, -88, 2, -45, -2, 13, 29, -22, 22, 78, -87, 103, 59, 118, -77, 41, 95, 40, -63, -65, 98, -21, -19};
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
    msg.setTimeStamp(0.6360961569200061);
    msg.setSource(3963U);
    msg.setSourceEntity(36U);
    msg.setDestination(55190U);
    msg.setDestinationEntity(143U);
    msg.type = 1U;
    msg.req_id = 2465272776U;
    msg.ttl = 26491U;
    msg.code = 58U;
    msg.destination.assign("BWVCHSBIYSTRKJQAVZPZHUROBKXTJAJCTEEUKSHZWTWD");
    msg.source.assign("LBSCUQPHDFZMCUREXSMLZWHWQAGTGFWZOWGPHLBVAMAFREKWCKXPJSDYUDNVXIBRNJCUYRZLKYUKETYVIXBFXDMCSZSDFJZTSZOMCHIOYRPBXHYMEAOYERFGVPCJUJVLPJOUOYNFIBXVKZTRODNKPXLRGAMCPUXETNOJAQPQQIKBJ");
    msg.acknowledge = 174U;
    msg.status = 63U;
    const signed char tmp_msg_0[] = {-34, 81, 7, 69, -64, 42, 103, -58, -40, -11, -112, -106, 49, -102, -1, 96, -3, 96, -104, 87, 49, -127, 46, -20, -102, 71, -73, 12, 99, 8, -97, 27, -45, -9, -36, -19, 55, 119, 114, -17, 41, 52, 33, -38, -42, -67, -2, -65, 104, 40, 120, -31, 74, -47, -24, 99, -109, -29, 118, -117, -45, 50, 86, 81, -123, 73, -62, 105, 80, -7, -88, -79, 77, 25, -108, 18, 6, -50, -65, -78, -38, 40, 118, 89, -88, 18, 57, -36, 58, -86, 37, 58, -20};
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
    msg.setTimeStamp(0.8566083308127383);
    msg.setSource(57632U);
    msg.setSourceEntity(153U);
    msg.setDestination(38235U);
    msg.setDestinationEntity(232U);
    msg.id = 106U;
    msg.range = 0.4236460978316522;

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
    msg.setTimeStamp(0.12804898578444213);
    msg.setSource(44829U);
    msg.setSourceEntity(125U);
    msg.setDestination(54224U);
    msg.setDestinationEntity(21U);
    msg.id = 36U;
    msg.range = 0.3938135917858766;

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
    msg.setTimeStamp(0.571188090154614);
    msg.setSource(55089U);
    msg.setSourceEntity(181U);
    msg.setDestination(35060U);
    msg.setDestinationEntity(208U);
    msg.id = 49U;
    msg.range = 0.2752189737743874;

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
    msg.setTimeStamp(0.5892800634184141);
    msg.setSource(64827U);
    msg.setSourceEntity(226U);
    msg.setDestination(57319U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("NQGPWLBDDCNMQ");
    msg.lat = 0.8800946739751281;
    msg.lon = 0.6428009108811145;
    msg.depth = 0.8923187176291901;
    msg.query_channel = 116U;
    msg.reply_channel = 94U;
    msg.transponder_delay = 39U;

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
    msg.setTimeStamp(0.36851809709641103);
    msg.setSource(7587U);
    msg.setSourceEntity(211U);
    msg.setDestination(56995U);
    msg.setDestinationEntity(210U);
    msg.beacon.assign("JXABDSDZKMCYVPKFYLIOTWEUFOJRYOCBPHIIQFVZHGDQAOJFNNBBAVTORBUUMGSILRUTOFCFTHNIZPMAEUEJGHKEIONRQKXHDKXVURYTWESTSBHLHLPSRZITOYOANICFYMPJZCNDCEBAROWXPWAGJQSWJZCELXASGTKIYNNNTCPRJFMRXUFXEDVJQQPDTDUSWA");
    msg.lat = 0.7109550113913985;
    msg.lon = 0.7923346366726483;
    msg.depth = 0.4927098265059585;
    msg.query_channel = 76U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 70U;

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
    msg.setTimeStamp(0.44005355588991946);
    msg.setSource(63457U);
    msg.setSourceEntity(207U);
    msg.setDestination(48935U);
    msg.setDestinationEntity(86U);
    msg.beacon.assign("IYMONVAISWQFGJIRCWECJTQSFTVBBXUYPULZDPFQDUPVYTGVHZJMYNMUCCLIINDL");
    msg.lat = 0.3019372447876183;
    msg.lon = 0.41022023539308683;
    msg.depth = 0.7414311833223974;
    msg.query_channel = 189U;
    msg.reply_channel = 235U;
    msg.transponder_delay = 55U;

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
    msg.setTimeStamp(0.8776461841800985);
    msg.setSource(8318U);
    msg.setSourceEntity(119U);
    msg.setDestination(21639U);
    msg.setDestinationEntity(213U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.5874428938247992);
    msg.setSource(9109U);
    msg.setSourceEntity(115U);
    msg.setDestination(51236U);
    msg.setDestinationEntity(13U);
    msg.op = 149U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SWEBCTITJYMWIMRKDCMCYMYKZASEGBCNHQJZZGPHPIYLQGLPOHPZOSSZKXATBCDAOUDCINRRSUUDANUSQOHRKSREOKXQWXPFKJGXRNUVHWHQNLJWALBAIEGBZ");
    tmp_msg_0.lat = 0.3177468739326633;
    tmp_msg_0.lon = 0.5796511362853601;
    tmp_msg_0.depth = 0.26881427325583107;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 37U;
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
    msg.setTimeStamp(0.35256982642868184);
    msg.setSource(41368U);
    msg.setSourceEntity(217U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(181U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.8987588521562473);
    msg.setSource(48909U);
    msg.setSourceEntity(72U);
    msg.setDestination(837U);
    msg.setDestinationEntity(205U);
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.18788548039106656);
    msg.setSource(48714U);
    msg.setSourceEntity(111U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(183U);
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 179U;
    tmp_msg_0.goal_id.assign("WMZMKILWXXDXYNNSRDTSNFESIKA");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("SQLTAVCNWJXDCBVUDXDQ");
    tmp_tmp_msg_0_0.predicate.assign("DXVYHMTKGUMOBDDFYWTNKCODRCFWUKMBXPAINPAJGLUIEZDUIGWPQJDHGGZPBZSYBAUEUIEFLSPEQLVKAVHEKFOXJJZOEGNKJYTNNITLOLYUWYBDNKFOCAREKEXLPMFQGTTRWHHIXCFXCDSWORBVRIJEYCVCCSQNRIUUBTFZDGQJNUAPAGWJOAS");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.06819716316297098);
    msg.setSource(61655U);
    msg.setSourceEntity(46U);
    msg.setDestination(60350U);
    msg.setDestinationEntity(222U);
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("OQSPTKTGMVRGEA");
    tmp_msg_0.rssi = 0.7872140013071146;
    tmp_msg_0.integrity = 14309U;
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
    msg.setTimeStamp(0.22057793546036286);
    msg.setSource(15536U);
    msg.setSourceEntity(198U);
    msg.setDestination(17331U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.1444499597242893;
    msg.lon = 0.8212652448823097;
    msg.depth = 0.19180213712518546;
    msg.sentence.assign("SBVUSEOXFCIIMOLNNBQZRNHEXKLYKBZZZFXTFMTRPLOLNYFJHZRJGRQFTXWJOGELXXQHAPWCYVOXGATVDNIUTAEDLKUZQEQUOXPSNHIHDCLHUFAYSTJMNBKWDAZMSKYSMEPZSZDYEILHSBRSQPWIXKAMUWTDGUGJGGFVOCJYVPJAKFWYPPBRPR");
    msg.txtime = 0.9629080978415078;
    msg.modem_type.assign("DOKNCLEVFARFNXUHWTTPZMWMQPKIVOTLNXOYXJMSBHSTHBGBIMYXSQPKSYILSOAHBMVWNHDALGQSAFBQHYLFLLFYOCVVKSKYFUWALENETKPKARAODMUZHJMYKROADXLXBHJJIDVUGACIWYFRIUCQKBXSDNEPONUGZIFDWWPSCUJWOEGEQIWRZVRCQCZQTJINPTGUJRPMCHNXCFPEDVGWVURZBZVEZGEGEJRTQYBSXFIMRKAJHXBDDUGPYQZ");
    msg.sys_src.assign("CZNPZSLZADDMYWOQVCAPVNIDNCJQDDUKUTAIEIMMLKYCJJGWESDQWYITHEAOVXOKCQIMCJXEHELLTMGNYGRBOPHNTNAXFFUXNYPUTYWWSZUVPFOLVDQLSZZVUMSUGJRZFLHEAMRIKTEPDSHOBQPTFGCXIBVDPURTFJKYESVBQRPUIRKBBCAMXRANKEGGHOMUFIKOTHANLOKBSWXBGZYFSHJRQA");
    msg.seq = 21097U;
    msg.sys_dst.assign("JNUZNSLELWCVJYYYNRZYKLTGBKACTPJKWKDHA");
    msg.flags = 173U;
    const signed char tmp_msg_0[] = {-34, 114, -84, 48, -30, -65, 53, -44, -12, 73, 65, -13, -24, 32, -24, 13, 13, -79, 76, -77, 53, 102, 95, 89, 78, -113, 62, -105, 18, -73, -124, -1, 119, -91, -122, 52, -59, 32, 96, -38, -107, -20, -74, -101, -104, -100, 95, -117, -36, -34, -116, -111, 80, -71, -42, 124, 23, -73, 106, -59, -121, 44, 38, -48, -11, 113, -107, 5, 71, -71, -70, -9, 61, -109, -71, -38, 28, -98, 1, -109, 50, -49, 125, -12, -6, -68, 44, 113, 72, -95};
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
    msg.setTimeStamp(0.6812693335148449);
    msg.setSource(40260U);
    msg.setSourceEntity(176U);
    msg.setDestination(41490U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.4156292302551752;
    msg.lon = 0.2821672499080057;
    msg.depth = 0.5989140605673566;
    msg.sentence.assign("AZBLPHGBXSLFUCOSXTJPFRIBTJDDPXSHRCCPUGNOSTETHHKOODYCACGAMXQJQBFJHYAWMCHMQFIGIQGKAEGMFRTBPZVFWRSDNZSXRMIKOYYEPEJHJLKIFKTWXJUEOEQAHZMHRGRCEIYXKVLUVYNARFTNTWIBDAXKSUNDVBLRUNYJVDRDIAFVUOKYGXPUBQCMZMDUVKWPIZBQCOWWLEOF");
    msg.txtime = 0.5407516552466586;
    msg.modem_type.assign("BQUDVKELABIHYPCZQKGMRUSXGTAEIFBWPPCUXSJTKZDISMXTWQQZFAXZABIKUEJPLXGEHBWVDYHWNIPOCFPNQONFUJCOPLFILUAOGTBRMVDWGTLXYHJYYLJXUQRWIZRN");
    msg.sys_src.assign("YFGQIGXFSFOIMUOIKEDLNNXKSRHACSVSKUAQOSYDGRCIBLPFRHZRYQFUZTJEZIEPKMDYRGKOYKFZMOJMTVPGPHXYQWOANZZSSXAVQQRUIZVCCWVAOCPTLXDWQDVWPHMRBLQTLBTKCLYUOVJWUJRMZYXEGJQVHQJFSLITMJUCBPXNBNHBEFLWBEKORJXCITOBGLUDPEGNMPLNAWSEFIJTADRCHHXDXAMNVZNDJIUPGTKAVNDWAGTH");
    msg.seq = 32628U;
    msg.sys_dst.assign("BRSTKVKLBJNRAFOQZX");
    msg.flags = 245U;
    const signed char tmp_msg_0[] = {-105, 43, -119, 113, -45, -59, 108, 72, -84, -36, -85, 122, -38, 102, -96, 11, 97, 120, -82, -84, 110, 61, 116, -37, -35, 95, -100, -2, 101, -51, -42, -112, 75, 96, 15, 28, -62, 14, -107, -40, -114, -8, -108, 38, -40, -83, -2, -15, -39, -95, -80, 89, -64, -7, 82, 50, -124, 53, 81, 69, 100, 108, -94, -21, 11, -29, -18, -12, 15, 83, 61, -73, 10, -9, 65, -37, 72, 100, 42, -53, 69, 99, -108, -102, -96, -75, -19, -106, -7, -56, -58, 42, 97, -43, 6, -76, 66, 70, 64, -26, 113, 29, 100, -78, -6, -9, -83, -36, -110, 59, -117, 99, -77, -52, 87, -85, -124, 31, -6, 83};
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
    msg.setTimeStamp(0.2573336984500799);
    msg.setSource(10118U);
    msg.setSourceEntity(203U);
    msg.setDestination(17719U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.8806046318776877;
    msg.lon = 0.8062555860271063;
    msg.depth = 0.18799060781538224;
    msg.sentence.assign("JDFROQURZYRYLHMBDRDBKTKVCGQCAQLKZXNFPBLWAGBWYHLOBNWYWJFBXDJNPLYBSONQJXWTCNACVMGQIULFKTZBFUPPGZMQEKSYQREFGKJGTHTEZQSXMQDTJNCVXEPITASBYHOPODWVRJMAHHMFIUJ");
    msg.txtime = 0.5450948141619764;
    msg.modem_type.assign("MBZGAXETJXAYOFVYZOPLYCUDA");
    msg.sys_src.assign("UPLWFSHNEZNYPFVOABXIJNCVWDRGEQHEZIENGEMVQYHTMCVFKPWMJUC");
    msg.seq = 44701U;
    msg.sys_dst.assign("LOOQIZUNHHHIFGRZVWVQPIQAILSPYDZGXUDWYJKOSREUMSIOKRVUVPJWBNACJREVCJINMZXWQVJWKKWOPCDYFL");
    msg.flags = 95U;
    const signed char tmp_msg_0[] = {-4, -78, 45, -127, -108, 97, -50, -12, 104, -32, 110, 54, -70, 17, -104, 50, 32, -102, 82, 73, -17, -53, 104, -14, -27, -88, 76, -34, -92, 54, 16, -57, -59, 110, 67, 52, 47, 24, -82, -128, -16, -101, -9, -87, -34, -74, 41, -36, -79, 48, -33, -78, 39, 9, -56, 10, 8, 115, 125, 42, 58, 116, -48, -57, -112, -32, -40, -123, -111, -87, -39, -57, -22, 37, -66, -6, -94, -107, 39, 125, -126, -118, 87, 114, 74, 113, 27, -28, -70, -3, -25, -91, 111, -124, -103, 61, 116, -79, 80, 19, -96, -121, -21, 25, 39, -122, -90, 1, 53, 60, 74, 80, 3, -51, -2, -90, -116, 4, -114, 43, -51, 76, 55, -94, 43, -2, -40, 48, 81, 45, -98, 123, 17, 79, 63, 86, 103, 108, -115, 49, -71, 123, -33, 2, 30, 17};
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
    msg.setTimeStamp(0.48110276248323314);
    msg.setSource(60172U);
    msg.setSourceEntity(217U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(60U);
    msg.op = 133U;
    msg.system.assign("NBFLLPYDJKWDSTKDVZZRZGAGBXFNQPEKOEVGMNHTGWKTRYVFCNPEKIFXAVMMMJRYWSJUPHPDANHYNRGRPEZNHESOUFOXQWRDIYXZZMULROTOPFUUSQXASBKAC");
    msg.range = 0.5862836953514419;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("ROVBYOPGHPCSPAUZMJFTHPPLBTYNCQEUGKKFWQRXWWAKVKHMNOCYEOFUGTEDYIACPDHALDNEAJUWLSCJTQFLOPQISWDSVXQIXEQLVMEMYNTBAJYSDCQQHGNWNSNRRWBOLQFPAUSXFIDWOQONGVEZCXMZTVIMUBKKCBFHILRXYXXJDGNGHJPZFZUJDZITLIDYYOUVZMTZYXEBUVBKDHTZVEUSLNKKMTFJMJCRKZERGXIAGMHRA");
    tmp_msg_0.data.assign("IXOIKQVGDPRMFALDIVDHZFDJQIEGDRSZKVBCXEPFTZQYIGPHLLSJBSHGDUBXGASQZGDOZYEBMPYTLTNVXWOKLTYTQAMCKHUJJVLCUISMZQRYDWEPIZIKSKNHNHPNYRANBOJUFENQGCUPWXYIYERVMJN");
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
    msg.setTimeStamp(0.18667715518099803);
    msg.setSource(48321U);
    msg.setSourceEntity(253U);
    msg.setDestination(42762U);
    msg.setDestinationEntity(151U);
    msg.op = 92U;
    msg.system.assign("PONWUDZVGOIJXNWOMSSINWIHZXJHXOVXURDYIZVMDUSSTZWMDLBQXPDREQPSGVJKDNUJPSDAGLFWSPEOXAIGJYHEGDFOHWMJGJEVBUFZNMKYBULNIATRAHOQYRPMAZJAXHGVZFZRYAKIECBTNKPGBNMQIEYYOFKSLTPXKCQCCUXCVGSLTRGEXYVMWMFQONFZQCVLYOYZKTPFBBTEHTHBRPQUKBLSRUIEJHQUBLFCQAKVD");
    msg.range = 0.8991312572940781;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 3160544392U;
    tmp_msg_0.messages.assign("VKOKZXMJKUJNNBRJKRXYREVDFAUSICLPNMGGRCWMUFBYABSJZLBFPABXAEYLEYSNTKCQELEGPFJPNQHYOMOLTZXVHRCZYJTMPHIIFNYWKKQZOVSSLIMUWACDWKTEVDFUWOPIOVDXXOQRMNDGUGISKETVMRTEFYQHVTTAURYZQFRRBLZYHOGXDLCHXABDXNOGJVSTSOGVJ");
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
    msg.setTimeStamp(0.607917718719964);
    msg.setSource(50306U);
    msg.setSourceEntity(138U);
    msg.setDestination(9880U);
    msg.setDestinationEntity(85U);
    msg.op = 121U;
    msg.system.assign("OYNQAPWDPISQSQKOXOANSBBSCDQNOELVZQXGNGAJLEANBTXZ");
    msg.range = 0.6962492169935607;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("NUVXVQVDJLQZJFCFZPKBNYDSXEBGKYBIGIEZOTSMNRNQUPDAVJZFWBEOSXOFNMMKZUXFAALSAZDZJHPASSHVAWKBRPVBLVYXYPFRHTYBOPNQIBDYHCLFRWXTIJKSEUGSXGZLCHKRLHRVUELRWAZOTHGIBXMTMIHKPEQCPEZOUOJXCERCRACWGNTGXBTHSESPIDLOKJQIQDYHJRTWQ");
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
    msg.setTimeStamp(0.40764550126322685);
    msg.setSource(38061U);
    msg.setSourceEntity(144U);
    msg.setDestination(119U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.3146459698170353);
    msg.setSource(10706U);
    msg.setSourceEntity(233U);
    msg.setDestination(17950U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.19850599808879876);
    msg.setSource(6127U);
    msg.setSourceEntity(55U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.6206374248950288);
    msg.setSource(63133U);
    msg.setSourceEntity(45U);
    msg.setDestination(27629U);
    msg.setDestinationEntity(12U);
    msg.list.assign("CQFKAHMFWUDJGJHVJTKNRLQOGSVWGPSWTBHFJWWNQGEQUWAZKBRDGIRSZMVXHNCYGKTDZMYAQDUF");

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
    msg.setTimeStamp(0.11224693894072013);
    msg.setSource(35676U);
    msg.setSourceEntity(128U);
    msg.setDestination(61847U);
    msg.setDestinationEntity(28U);
    msg.list.assign("CPFSAIWKUBXUXASILWAGAXMFMLTYOJZEWRZBLQIKOTII");

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
    msg.setTimeStamp(0.937654924023954);
    msg.setSource(58606U);
    msg.setSourceEntity(132U);
    msg.setDestination(59908U);
    msg.setDestinationEntity(77U);
    msg.list.assign("GOOKKYGZJRGHJNJUDLTJJCSRI");

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
    msg.setTimeStamp(0.8138831770403796);
    msg.setSource(38211U);
    msg.setSourceEntity(231U);
    msg.setDestination(44013U);
    msg.setDestinationEntity(23U);
    msg.peer.assign("AWNATSAAORHOSNDOZRRCYQNK");
    msg.rssi = 0.1682216928952951;
    msg.integrity = 19253U;

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
    msg.setTimeStamp(0.97148219110811);
    msg.setSource(57529U);
    msg.setSourceEntity(124U);
    msg.setDestination(35323U);
    msg.setDestinationEntity(119U);
    msg.peer.assign("JTPYVRJBDSLFARFRLQOVSNTUHOUKODTQRMQDKOQMMSMRJCMHWBFYRECICERDUSIBCVGJFIZWDYQMDILTTASNWPXUFIPTRLUEIISZABZRLTPJZPEWHIDFVEHKGYVGIXHGENBOMCGOXAEHDALXXCYCXXLNZUKZUOGWPK");
    msg.rssi = 0.6637527859884821;
    msg.integrity = 4319U;

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
    msg.setTimeStamp(0.6897849900718297);
    msg.setSource(43971U);
    msg.setSourceEntity(109U);
    msg.setDestination(58897U);
    msg.setDestinationEntity(72U);
    msg.peer.assign("GIBBRUEKVMUBJSUOGRXVFQNXHREBIJSHLMIYWOORKXMMDULXPEYEKTTGTZIHMLCRONDTYCKXREPFHFKYOLGKAVCPDMBCTBJAWDTXNQPEZXGSEDFCILZVIJCPFQLFNLA");
    msg.rssi = 0.9606110403522549;
    msg.integrity = 56492U;

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
    msg.setTimeStamp(0.17111317546929727);
    msg.setSource(27159U);
    msg.setSourceEntity(253U);
    msg.setDestination(15747U);
    msg.setDestinationEntity(7U);
    msg.req_id = 3682U;
    msg.destination.assign("LQXGUURMNUEZOVHZTMGJSZYDWVZLLSIAQUITDUBOWIWVHIPXXSKHWBRZSLTRPMHZPPUAEUKASCXMIWDFOTKQCFMHOBYJATLHHTINDBBGDKGFSVVRZNUTJXOCJRZPVGPGVBTFDXKOOEGSQBFNMYYQXKGGFARQTCFKOQIYOEMVVRS");
    msg.timeout = 0.3601637945263998;
    msg.range = 0.27882640943453074;
    msg.type = 50U;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IQGZSCBBIRNDXCHKDVAWFDXPXDJOQQEJKHXUMRKBEAKRPAMPURKGUYHHOXPSLPZMODAQHHNIIBGPCVFQGMJLFTNZBUBVCEEYILSLDBOONZRZVLEXFVQUYUNNHDEFXXTWETI");
    tmp_msg_0.dist = 0.602821076585967;
    tmp_msg_0.err = 0.2337122211710917;
    tmp_msg_0.ctrl_imp = 0.9509639599480963;
    tmp_msg_0.rel_dir_x = 0.4077434908148512;
    tmp_msg_0.rel_dir_y = 0.21696625929030344;
    tmp_msg_0.rel_dir_z = 0.04796842435459647;
    tmp_msg_0.err_x = 0.19929074574699757;
    tmp_msg_0.err_y = 0.9898710916581656;
    tmp_msg_0.err_z = 0.077159496525402;
    tmp_msg_0.rf_err_x = 0.9984133505463593;
    tmp_msg_0.rf_err_y = 0.5602779218476123;
    tmp_msg_0.rf_err_z = 0.00158919195179541;
    tmp_msg_0.rf_err_vx = 0.7006854611847435;
    tmp_msg_0.rf_err_vy = 0.9617253216746199;
    tmp_msg_0.rf_err_vz = 0.8451037771234662;
    tmp_msg_0.ss_x = 0.7078985690681671;
    tmp_msg_0.ss_y = 0.34908510822236904;
    tmp_msg_0.ss_z = 0.8749865426363498;
    tmp_msg_0.virt_err_x = 0.7524264374121854;
    tmp_msg_0.virt_err_y = 0.8776746445244497;
    tmp_msg_0.virt_err_z = 0.1240171792127629;
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
    msg.setTimeStamp(0.03890417031518145);
    msg.setSource(63544U);
    msg.setSourceEntity(122U);
    msg.setDestination(53205U);
    msg.setDestinationEntity(205U);
    msg.req_id = 5371U;
    msg.destination.assign("EJZXCWMVCOCRQJKBTJTKLGRMU");
    msg.timeout = 0.7498425695483705;
    msg.range = 0.2986158147344017;
    msg.type = 119U;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 120U;
    tmp_msg_0.lon_gain = 0.30555933003932123;
    tmp_msg_0.lat_gain = 0.7255819586560648;
    tmp_msg_0.bond_thick = 0.45009661925732947;
    tmp_msg_0.lead_gain = 0.14911228669281562;
    tmp_msg_0.deconfl_gain = 0.8150139681969423;
    tmp_msg_0.accel_switch_gain = 0.7821524690878175;
    tmp_msg_0.safe_dist = 0.7451947973150247;
    tmp_msg_0.deconflict_offset = 0.4427621286411182;
    tmp_msg_0.accel_safe_margin = 0.4251500409717037;
    tmp_msg_0.accel_lim_x = 0.4826752384992995;
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
    msg.setTimeStamp(0.5904416998492215);
    msg.setSource(3416U);
    msg.setSourceEntity(206U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(226U);
    msg.req_id = 27484U;
    msg.destination.assign("JQDKDFHOGKWISYZPUZWMUCRUABXEXLJCUNGERYMDNLDJVCQZGFUAEIVTHGEBLYZXQGAFKCEFLRYVNRQVDBDQWQIJWSKD");
    msg.timeout = 0.07759052550203971;
    msg.range = 0.5624857743742852;
    msg.type = 109U;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.28308093644411925;
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
    msg.setTimeStamp(0.5554265509997035);
    msg.setSource(13400U);
    msg.setSourceEntity(13U);
    msg.setDestination(53879U);
    msg.setDestinationEntity(49U);
    msg.req_id = 42697U;
    msg.type = 76U;
    msg.status = 32U;
    msg.info.assign("UVJRKEQTSMOMLFWYAXQHELRUFYUNZQTFZQMDGJFYCXZHPXJAOIHEZLTROWJIFXHVNXEBMAGILDKBKXSHOEKWIZDPNMRKIGEABWVRBJCDFYZKYTWPCWZJIBBMHBDLNIJRPVYITLMNTGFVLABPJWTAAAGQCJUCWHQICGBJXRDVEKEFVSOMTGSWNDUREWRYOUVUDXQEZPSMSZHISLSS");
    msg.range = 0.5351708180088504;

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
    msg.setTimeStamp(0.12502849926213355);
    msg.setSource(32820U);
    msg.setSourceEntity(182U);
    msg.setDestination(62246U);
    msg.setDestinationEntity(78U);
    msg.req_id = 22245U;
    msg.type = 139U;
    msg.status = 62U;
    msg.info.assign("OAESAIYZCSDVSCMFRXJQQBHPBXJNHIKQJORQWGUTGCDHBVRIFRSVGWZASLU");
    msg.range = 0.1854419683657913;

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
    msg.setTimeStamp(0.7616490209633539);
    msg.setSource(33604U);
    msg.setSourceEntity(71U);
    msg.setDestination(9611U);
    msg.setDestinationEntity(64U);
    msg.req_id = 44477U;
    msg.type = 236U;
    msg.status = 152U;
    msg.info.assign("KFISLHJVCWVBPSEBVULKLNJGOEZEOUXTVRKFTDULYDGNMSUFOJPGMMRQRUXXJAYEGQJCOAWURPBRQRIKCNWLJWLCSNXYFDMWHBEFABRGIKMAXMRBVFKJQXEZYTTYADJOLMHWCHNSPWQYQBTGGNQXDOEIBTIFUFG");
    msg.range = 0.002602759199744953;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.4132773659317226);
    msg.setSource(13395U);
    msg.setSourceEntity(223U);
    msg.setDestination(15519U);
    msg.setDestinationEntity(162U);
    msg.value = -25536;

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
    msg.setTimeStamp(0.7559204566344812);
    msg.setSource(43820U);
    msg.setSourceEntity(156U);
    msg.setDestination(13235U);
    msg.setDestinationEntity(149U);
    msg.value = -15365;

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
    msg.setTimeStamp(0.2445544334532126);
    msg.setSource(41046U);
    msg.setSourceEntity(83U);
    msg.setDestination(52571U);
    msg.setDestinationEntity(54U);
    msg.value = -27339;

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
    msg.setTimeStamp(0.11399157694334427);
    msg.setSource(23901U);
    msg.setSourceEntity(136U);
    msg.setDestination(26684U);
    msg.setDestinationEntity(22U);
    msg.value = 0.24802373032490022;

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
    msg.setTimeStamp(0.01046150850434191);
    msg.setSource(38056U);
    msg.setSourceEntity(69U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(208U);
    msg.value = 0.43091957694680183;

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
    msg.setTimeStamp(0.7586976344158579);
    msg.setSource(61290U);
    msg.setSourceEntity(117U);
    msg.setDestination(35829U);
    msg.setDestinationEntity(143U);
    msg.value = 0.21186913316101064;

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
    msg.setTimeStamp(0.6692623845926593);
    msg.setSource(39482U);
    msg.setSourceEntity(31U);
    msg.setDestination(4802U);
    msg.setDestinationEntity(178U);
    msg.value = 0.9229073372225637;

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
    msg.setTimeStamp(0.4942961773234834);
    msg.setSource(64564U);
    msg.setSourceEntity(176U);
    msg.setDestination(3534U);
    msg.setDestinationEntity(149U);
    msg.value = 0.797629393467009;

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
    msg.setTimeStamp(0.2503474898711726);
    msg.setSource(8552U);
    msg.setSourceEntity(209U);
    msg.setDestination(32224U);
    msg.setDestinationEntity(244U);
    msg.value = 0.30574147638832205;

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
    msg.setTimeStamp(0.4623812746582673);
    msg.setSource(3763U);
    msg.setSourceEntity(90U);
    msg.setDestination(60287U);
    msg.setDestinationEntity(54U);
    msg.validity = 5260U;
    msg.type = 221U;
    msg.utc_year = 663U;
    msg.utc_month = 36U;
    msg.utc_day = 44U;
    msg.utc_time = 0.22234079153531305;
    msg.lat = 0.6325183809618642;
    msg.lon = 0.4865026464512947;
    msg.height = 0.6929328167139357;
    msg.satellites = 214U;
    msg.cog = 0.19129217379460095;
    msg.sog = 0.9448636688907264;
    msg.hdop = 0.7944384223469977;
    msg.vdop = 0.834109906864449;
    msg.hacc = 0.9664256175742879;
    msg.vacc = 0.25251020913669175;

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
    msg.setTimeStamp(0.9462360385289152);
    msg.setSource(55156U);
    msg.setSourceEntity(244U);
    msg.setDestination(55943U);
    msg.setDestinationEntity(180U);
    msg.validity = 59198U;
    msg.type = 0U;
    msg.utc_year = 37384U;
    msg.utc_month = 97U;
    msg.utc_day = 100U;
    msg.utc_time = 0.2142749300479403;
    msg.lat = 0.6706542698397913;
    msg.lon = 0.24260229410975775;
    msg.height = 0.4099468331837245;
    msg.satellites = 194U;
    msg.cog = 0.09531417764516137;
    msg.sog = 0.25588540028653484;
    msg.hdop = 0.4371818131097386;
    msg.vdop = 0.5363539704919182;
    msg.hacc = 0.6301001436704718;
    msg.vacc = 0.2684904216842645;

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
    msg.setTimeStamp(0.9146519280532346);
    msg.setSource(42434U);
    msg.setSourceEntity(83U);
    msg.setDestination(32086U);
    msg.setDestinationEntity(36U);
    msg.validity = 18721U;
    msg.type = 83U;
    msg.utc_year = 41033U;
    msg.utc_month = 172U;
    msg.utc_day = 180U;
    msg.utc_time = 0.734516354901731;
    msg.lat = 0.6623838591191967;
    msg.lon = 0.9075234396769952;
    msg.height = 0.11336302701020429;
    msg.satellites = 105U;
    msg.cog = 0.20439087100142217;
    msg.sog = 0.07964604997061953;
    msg.hdop = 0.4163801522792363;
    msg.vdop = 0.6227700663776364;
    msg.hacc = 0.6413456790118038;
    msg.vacc = 0.630945635954443;

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
    msg.setTimeStamp(0.39639051702837236);
    msg.setSource(7369U);
    msg.setSourceEntity(118U);
    msg.setDestination(10232U);
    msg.setDestinationEntity(56U);
    msg.time = 0.7936918188541288;
    msg.phi = 0.03832047325557031;
    msg.theta = 0.35736418505812373;
    msg.psi = 0.7566405069548744;
    msg.psi_magnetic = 0.9613507810133246;

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
    msg.setTimeStamp(0.5822436652135734);
    msg.setSource(35800U);
    msg.setSourceEntity(167U);
    msg.setDestination(30082U);
    msg.setDestinationEntity(198U);
    msg.time = 0.9945924851517226;
    msg.phi = 0.28095612036745454;
    msg.theta = 0.12714841304414126;
    msg.psi = 0.6668175777784039;
    msg.psi_magnetic = 0.04491301830526051;

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
    msg.setTimeStamp(0.6469763143348497);
    msg.setSource(33827U);
    msg.setSourceEntity(110U);
    msg.setDestination(32910U);
    msg.setDestinationEntity(1U);
    msg.time = 0.5742657564750279;
    msg.phi = 0.24793597033197667;
    msg.theta = 0.38999352402662557;
    msg.psi = 0.5282219959894977;
    msg.psi_magnetic = 0.8049681962349885;

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
    msg.setTimeStamp(0.28080042641082514);
    msg.setSource(59618U);
    msg.setSourceEntity(132U);
    msg.setDestination(54235U);
    msg.setDestinationEntity(32U);
    msg.time = 0.9199245830460161;
    msg.x = 0.5674631969301379;
    msg.y = 0.8729283510294363;
    msg.z = 0.3291407699532951;
    msg.timestep = 0.2698275345525569;

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
    msg.setTimeStamp(0.25469929983238637);
    msg.setSource(54206U);
    msg.setSourceEntity(162U);
    msg.setDestination(63403U);
    msg.setDestinationEntity(64U);
    msg.time = 0.774920551440216;
    msg.x = 0.38780543887771457;
    msg.y = 0.4781457511766273;
    msg.z = 0.9404043889056021;
    msg.timestep = 0.18055692182297223;

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
    msg.setTimeStamp(0.3976737447102011);
    msg.setSource(18529U);
    msg.setSourceEntity(75U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(61U);
    msg.time = 0.7900174547994758;
    msg.x = 0.6578302120835047;
    msg.y = 0.714204261925185;
    msg.z = 0.5431586233436246;
    msg.timestep = 0.8731884244343057;

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
    msg.setTimeStamp(0.8294677299276386);
    msg.setSource(31590U);
    msg.setSourceEntity(120U);
    msg.setDestination(18720U);
    msg.setDestinationEntity(94U);
    msg.time = 0.1397627909629846;
    msg.x = 0.3273525201893236;
    msg.y = 0.6299663682609143;
    msg.z = 0.5677203445942661;

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
    msg.setTimeStamp(0.34833586160830243);
    msg.setSource(57128U);
    msg.setSourceEntity(80U);
    msg.setDestination(53766U);
    msg.setDestinationEntity(112U);
    msg.time = 0.8619763806058668;
    msg.x = 0.8076963765446985;
    msg.y = 0.587611408289963;
    msg.z = 0.946734559156105;

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
    msg.setTimeStamp(0.3800573261849076);
    msg.setSource(60020U);
    msg.setSourceEntity(169U);
    msg.setDestination(22800U);
    msg.setDestinationEntity(208U);
    msg.time = 0.5159169120778596;
    msg.x = 0.9079818513258774;
    msg.y = 0.5893714536617852;
    msg.z = 0.46919288363332023;

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
    msg.setTimeStamp(0.25178490068078974);
    msg.setSource(50810U);
    msg.setSourceEntity(135U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(66U);
    msg.time = 0.9081390003419474;
    msg.x = 0.5767002764576135;
    msg.y = 0.8055282626044452;
    msg.z = 0.639119755267609;

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
    msg.setTimeStamp(0.37370058658317973);
    msg.setSource(40511U);
    msg.setSourceEntity(28U);
    msg.setDestination(31940U);
    msg.setDestinationEntity(250U);
    msg.time = 0.7005521256846805;
    msg.x = 0.476747017096532;
    msg.y = 0.33250973672056183;
    msg.z = 0.4747519475166152;

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
    msg.setTimeStamp(0.9270370552038903);
    msg.setSource(16100U);
    msg.setSourceEntity(141U);
    msg.setDestination(19217U);
    msg.setDestinationEntity(215U);
    msg.time = 0.27407495610529753;
    msg.x = 0.719036366251608;
    msg.y = 0.8236294569315924;
    msg.z = 0.9527662090305778;

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
    msg.setTimeStamp(0.5817420682596195);
    msg.setSource(62660U);
    msg.setSourceEntity(99U);
    msg.setDestination(64733U);
    msg.setDestinationEntity(228U);
    msg.time = 0.8454290385495387;
    msg.x = 0.12544993470868415;
    msg.y = 0.9698831545472134;
    msg.z = 0.3558641920544585;

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
    msg.setTimeStamp(0.6338723160181439);
    msg.setSource(56735U);
    msg.setSourceEntity(33U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(46U);
    msg.time = 0.5970581951829435;
    msg.x = 0.6073067660553207;
    msg.y = 0.9974827039654471;
    msg.z = 0.14877169242294408;

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
    msg.setTimeStamp(0.29453307214922764);
    msg.setSource(34522U);
    msg.setSourceEntity(127U);
    msg.setDestination(60990U);
    msg.setDestinationEntity(33U);
    msg.time = 0.24118358071835022;
    msg.x = 0.5242808266874603;
    msg.y = 0.19696971058509516;
    msg.z = 0.4168232399404438;

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
    msg.setTimeStamp(0.04158981187815369);
    msg.setSource(43572U);
    msg.setSourceEntity(134U);
    msg.setDestination(45693U);
    msg.setDestinationEntity(245U);
    msg.validity = 11U;
    msg.x = 0.9538464218950657;
    msg.y = 0.5533966276047223;
    msg.z = 0.6522979296292132;

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
    msg.setTimeStamp(0.7134422532150646);
    msg.setSource(53817U);
    msg.setSourceEntity(70U);
    msg.setDestination(58626U);
    msg.setDestinationEntity(76U);
    msg.validity = 136U;
    msg.x = 0.30036395286281725;
    msg.y = 0.5681432169192913;
    msg.z = 0.1630284627288191;

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
    msg.setTimeStamp(0.08569551840882739);
    msg.setSource(18205U);
    msg.setSourceEntity(2U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(103U);
    msg.validity = 31U;
    msg.x = 0.22663248171942463;
    msg.y = 0.5306230990213071;
    msg.z = 0.05263779887286946;

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
    msg.setTimeStamp(0.5287334148034529);
    msg.setSource(43650U);
    msg.setSourceEntity(184U);
    msg.setDestination(46951U);
    msg.setDestinationEntity(108U);
    msg.validity = 123U;
    msg.x = 0.9000162810782509;
    msg.y = 0.860239931006292;
    msg.z = 0.24229195271893866;

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
    msg.setTimeStamp(0.9654887980507828);
    msg.setSource(57892U);
    msg.setSourceEntity(26U);
    msg.setDestination(26268U);
    msg.setDestinationEntity(77U);
    msg.validity = 142U;
    msg.x = 0.2436946889388969;
    msg.y = 0.011100834893150169;
    msg.z = 0.5157589729214493;

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
    msg.setTimeStamp(0.44011439706790245);
    msg.setSource(61710U);
    msg.setSourceEntity(218U);
    msg.setDestination(42744U);
    msg.setDestinationEntity(226U);
    msg.validity = 210U;
    msg.x = 0.5344170083435537;
    msg.y = 0.642467084653187;
    msg.z = 0.17207642584363647;

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
    msg.setTimeStamp(0.8682454003375323);
    msg.setSource(4317U);
    msg.setSourceEntity(95U);
    msg.setDestination(64554U);
    msg.setDestinationEntity(77U);
    msg.time = 0.12908260290746743;
    msg.x = 0.21175575351215858;
    msg.y = 0.1993247254878615;
    msg.z = 0.6260687649560733;

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
    msg.setTimeStamp(0.3905590516443125);
    msg.setSource(43701U);
    msg.setSourceEntity(194U);
    msg.setDestination(27285U);
    msg.setDestinationEntity(223U);
    msg.time = 0.9258910746636768;
    msg.x = 0.40491380494702933;
    msg.y = 0.4059033398937941;
    msg.z = 0.38438018508341143;

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
    msg.setTimeStamp(0.08013503696505342);
    msg.setSource(27051U);
    msg.setSourceEntity(30U);
    msg.setDestination(60840U);
    msg.setDestinationEntity(125U);
    msg.time = 0.20748075479644001;
    msg.x = 0.7506585037836226;
    msg.y = 0.9095702389463377;
    msg.z = 0.8080677557516052;

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
    msg.setTimeStamp(0.013809524685196473);
    msg.setSource(25104U);
    msg.setSourceEntity(56U);
    msg.setDestination(10379U);
    msg.setDestinationEntity(118U);
    msg.validity = 110U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8989846755164489;
    tmp_msg_0.beam_height = 0.4125016731940696;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.42293668783400296;

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
    msg.setTimeStamp(0.7382697539706419);
    msg.setSource(54099U);
    msg.setSourceEntity(30U);
    msg.setDestination(52366U);
    msg.setDestinationEntity(198U);
    msg.validity = 215U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2890753705348801;
    tmp_msg_0.y = 0.011146270878590991;
    tmp_msg_0.z = 0.39463047022466435;
    tmp_msg_0.phi = 0.638221588408798;
    tmp_msg_0.theta = 0.7364392270183833;
    tmp_msg_0.psi = 0.9658204881907361;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7018767028941596;

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
    msg.setTimeStamp(0.09743370088830594);
    msg.setSource(17787U);
    msg.setSourceEntity(120U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(44U);
    msg.validity = 162U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.43610729455183683;
    tmp_msg_0.y = 0.6492343087654272;
    tmp_msg_0.z = 0.5675880874408334;
    tmp_msg_0.phi = 0.4732564337537142;
    tmp_msg_0.theta = 0.4103912571602095;
    tmp_msg_0.psi = 0.13675062340786415;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.48560135469647536;
    tmp_msg_1.beam_height = 0.7534054397778459;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7375053742568028;

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
    msg.setTimeStamp(0.47583066157224363);
    msg.setSource(44232U);
    msg.setSourceEntity(0U);
    msg.setDestination(49753U);
    msg.setDestinationEntity(1U);
    msg.value = 0.763698442454275;

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
    msg.setTimeStamp(0.9712029124810103);
    msg.setSource(27081U);
    msg.setSourceEntity(9U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(37U);
    msg.value = 0.9153089819829968;

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
    msg.setTimeStamp(0.062934446899232);
    msg.setSource(61132U);
    msg.setSourceEntity(26U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5662677120833289;

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
    msg.setTimeStamp(0.33920923199655284);
    msg.setSource(36673U);
    msg.setSourceEntity(151U);
    msg.setDestination(16948U);
    msg.setDestinationEntity(160U);
    msg.value = 0.2730792632879582;

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
    msg.setTimeStamp(0.8321432343235928);
    msg.setSource(22853U);
    msg.setSourceEntity(247U);
    msg.setDestination(40521U);
    msg.setDestinationEntity(33U);
    msg.value = 0.6869820514256686;

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
    msg.setTimeStamp(0.3185988832727499);
    msg.setSource(6303U);
    msg.setSourceEntity(95U);
    msg.setDestination(27411U);
    msg.setDestinationEntity(136U);
    msg.value = 0.0643115889813134;

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
    msg.setTimeStamp(0.8190557795536447);
    msg.setSource(44367U);
    msg.setSourceEntity(150U);
    msg.setDestination(959U);
    msg.setDestinationEntity(92U);
    msg.value = 0.4092998617341578;

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
    msg.setTimeStamp(0.7226552562901429);
    msg.setSource(65523U);
    msg.setSourceEntity(162U);
    msg.setDestination(19580U);
    msg.setDestinationEntity(81U);
    msg.value = 0.32315394726140634;

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
    msg.setTimeStamp(0.8534598968528181);
    msg.setSource(33746U);
    msg.setSourceEntity(139U);
    msg.setDestination(2181U);
    msg.setDestinationEntity(160U);
    msg.value = 0.29142082004281955;

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
    msg.setTimeStamp(0.15253955025027421);
    msg.setSource(50950U);
    msg.setSourceEntity(225U);
    msg.setDestination(17487U);
    msg.setDestinationEntity(23U);
    msg.value = 0.36752802641922766;

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
    msg.setTimeStamp(0.206810948425299);
    msg.setSource(2780U);
    msg.setSourceEntity(178U);
    msg.setDestination(1944U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8959159105103788;

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
    msg.setTimeStamp(0.05647662225857586);
    msg.setSource(62619U);
    msg.setSourceEntity(133U);
    msg.setDestination(34673U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5000431831306638;

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
    msg.setTimeStamp(0.7487591904430021);
    msg.setSource(63265U);
    msg.setSourceEntity(151U);
    msg.setDestination(29053U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5060094997471211;

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
    msg.setTimeStamp(0.3773289631958828);
    msg.setSource(36704U);
    msg.setSourceEntity(115U);
    msg.setDestination(41476U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6959270770819151;

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
    msg.setTimeStamp(0.07606578559857746);
    msg.setSource(10864U);
    msg.setSourceEntity(64U);
    msg.setDestination(9969U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6337983534853064;

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
    msg.setTimeStamp(0.8879783400426604);
    msg.setSource(639U);
    msg.setSourceEntity(89U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(28U);
    msg.value = 0.775363436609279;

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
    msg.setTimeStamp(0.08291080929614625);
    msg.setSource(22338U);
    msg.setSourceEntity(41U);
    msg.setDestination(52620U);
    msg.setDestinationEntity(97U);
    msg.value = 0.9944026914874766;

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
    msg.setTimeStamp(0.6727942054043835);
    msg.setSource(43319U);
    msg.setSourceEntity(41U);
    msg.setDestination(35321U);
    msg.setDestinationEntity(247U);
    msg.value = 0.1883769171458224;

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
    msg.setTimeStamp(0.5069035686628662);
    msg.setSource(28330U);
    msg.setSourceEntity(71U);
    msg.setDestination(30933U);
    msg.setDestinationEntity(204U);
    msg.value = 0.2784737759792809;

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
    msg.setTimeStamp(0.15769130335613757);
    msg.setSource(22884U);
    msg.setSourceEntity(125U);
    msg.setDestination(41224U);
    msg.setDestinationEntity(29U);
    msg.value = 0.5802695351502021;

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
    msg.setTimeStamp(0.6237006927372519);
    msg.setSource(9886U);
    msg.setSourceEntity(46U);
    msg.setDestination(38250U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9711101338704109;

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
    msg.setTimeStamp(0.21022404497328506);
    msg.setSource(20088U);
    msg.setSourceEntity(137U);
    msg.setDestination(21125U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5216377336625816;

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
    msg.setTimeStamp(0.37549687131976206);
    msg.setSource(54982U);
    msg.setSourceEntity(203U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(234U);
    msg.value = 0.575302976247812;

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
    msg.setTimeStamp(0.20904528480713247);
    msg.setSource(23997U);
    msg.setSourceEntity(39U);
    msg.setDestination(50745U);
    msg.setDestinationEntity(178U);
    msg.value = 0.9727160921569076;

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
    msg.setTimeStamp(0.893048181443821);
    msg.setSource(12762U);
    msg.setSourceEntity(166U);
    msg.setDestination(55825U);
    msg.setDestinationEntity(91U);
    msg.direction = 0.04148751257126804;
    msg.speed = 0.4778290110367428;
    msg.turbulence = 0.8397756742361229;

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
    msg.setTimeStamp(0.7808654222271634);
    msg.setSource(8364U);
    msg.setSourceEntity(138U);
    msg.setDestination(9785U);
    msg.setDestinationEntity(15U);
    msg.direction = 0.1519390784310607;
    msg.speed = 0.19163405474277606;
    msg.turbulence = 0.1463759395927121;

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
    msg.setTimeStamp(0.938876057302922);
    msg.setSource(50486U);
    msg.setSourceEntity(196U);
    msg.setDestination(54658U);
    msg.setDestinationEntity(214U);
    msg.direction = 0.9759554115098488;
    msg.speed = 0.4679128612529354;
    msg.turbulence = 0.4316969751351759;

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
    msg.setTimeStamp(0.7428189574770708);
    msg.setSource(61762U);
    msg.setSourceEntity(30U);
    msg.setDestination(62443U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9757857750810909;

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
    msg.setTimeStamp(0.5959375496689153);
    msg.setSource(64072U);
    msg.setSourceEntity(161U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(75U);
    msg.value = 0.8630028618047958;

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
    msg.setTimeStamp(0.3725290970016474);
    msg.setSource(41240U);
    msg.setSourceEntity(219U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(48U);
    msg.value = 0.5521105027097695;

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
    msg.setTimeStamp(0.8536704830384078);
    msg.setSource(37679U);
    msg.setSourceEntity(64U);
    msg.setDestination(11841U);
    msg.setDestinationEntity(80U);
    msg.value.assign("BOKIEEUPHPXOABJJZUBMCDXGOLD");

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
    msg.setTimeStamp(0.9783861499381192);
    msg.setSource(44148U);
    msg.setSourceEntity(38U);
    msg.setDestination(25239U);
    msg.setDestinationEntity(156U);
    msg.value.assign("YSAIJRWPLZQSVPRFGALBOHDRCJICEQGHYENPCFZFOXJIGQVUKOBKZRMOZPSEBHZYTSEANUIRQYRDUKQLWTENTYSOCIRBDVTVILCXXUJHACVJMVBXLVQZDCAJSHJFWBFLKXMWYWNXVUFLHDDCHNPWIBRKXPAEUMNRRGQGFZTMZTGOKPGLZXTVPBHDVEIOKTLUQLXAUDKEKIODAOWMJHWNQJAUGYHMWUN");

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
    msg.setTimeStamp(0.46951903179467147);
    msg.setSource(41315U);
    msg.setSourceEntity(209U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(33U);
    msg.value.assign("OEDHHQCWIMSPJKRZVERTUXKJHQOQVJXZVKORGINIGIZTPKZAAUNVOCLFEMKTQOTXFDCVSYXGQBPCXQHMEYORTKBVBNEQDBD");

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
    msg.setTimeStamp(0.4529560749954912);
    msg.setSource(29083U);
    msg.setSourceEntity(15U);
    msg.setDestination(20042U);
    msg.setDestinationEntity(129U);
    const signed char tmp_msg_0[] = {62, -124, -104, 68, -100, -51, 105, -57, 116, 86, 13, 104, -32, 8, 66, -109, 37, 123, 10, -4, 57, -111, 93, 61, -30, -93, 3, -67, -7, 103, -55, 109, 89, 123, -10, -84, -41, -13, 83, 107};
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
    msg.setTimeStamp(0.7991965549287608);
    msg.setSource(34096U);
    msg.setSourceEntity(207U);
    msg.setDestination(62837U);
    msg.setDestinationEntity(86U);
    const signed char tmp_msg_0[] = {-71, -117, 0, 37, -110, -27, 59, -90, 116, -42, -22, -62, -61, 93, 43, 13, 51, -127, -59, -93, 39, -5, 103, -58, 102, 51, 37, -51, -107, -100, 52, -128, -65, -84, 122, 113, 63, 88, 46, 57, -22, 9, -72, 101, 103, -76, -75, -124, 50, -56, 60, 66, -109, 14, -84, -64, -69, 95, 3, 28, -128, 24, 44, 44, -17, 73, 21, -94, 126, 27, -23, 74, 12, 12, 49, 94, -78, 71};
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
    msg.setTimeStamp(0.5191163104840144);
    msg.setSource(17529U);
    msg.setSourceEntity(241U);
    msg.setDestination(38943U);
    msg.setDestinationEntity(87U);
    const signed char tmp_msg_0[] = {11, -14, -17, 116, -26, 43, -17, 101, -120, 23, -64, 93, -92, 88, -121, -128, 126, 9, -93, 10, 15, -117, 71, -67, 21, 73, 77, 3, 85, -76, -24, -60, -57, -41, 55, -5, 1, -63, -113, 15, 29, -76, 102, -42, -96, -72, -4, 16, -3, -67, 92, -80, -126, 46, -81, 44, 57, 24, -10, -100, 28, -66, -75, 112, -111, -63, -104, -75, -102, -88, 27, 85, 42, -57, -84, -99, 10, -23, 108, 50, -125, 118, -96, 45, -96, -118, 97, -48, -112, -39, 67, 119, -42, 70, -64, 72, -7, -80, -10, -43, 28, -68, -74, 46, -106, 87, -125, -8, 104, -49, 68, -75, 95, -21, -26, 36, 97, 78, -97, -56, 68, 42, -104, -104, 87, 93, 44, 100, -107, -62, -75, 87, 93, 95, -28, -89, 56, 111, -59, -79, 11, -35, 62, -51, 38, 21, 82, -105, -80, 115, -91, 60, -112, -48, -78, 97, -77, -126, 85, -43, -39, 52, -114, -100, 93, -98, -62, -107, 103, -93, 24, 17, 113, -8};
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
    msg.setTimeStamp(0.6714095035290406);
    msg.setSource(3943U);
    msg.setSourceEntity(176U);
    msg.setDestination(11092U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5990374834266213;

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
    msg.setTimeStamp(0.9744863937736287);
    msg.setSource(18684U);
    msg.setSourceEntity(169U);
    msg.setDestination(49284U);
    msg.setDestinationEntity(4U);
    msg.value = 0.05035321089619926;

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
    msg.setTimeStamp(0.819863812194905);
    msg.setSource(42244U);
    msg.setSourceEntity(173U);
    msg.setDestination(64075U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9390847625060423;

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
    msg.setTimeStamp(0.7390652946379919);
    msg.setSource(55816U);
    msg.setSourceEntity(117U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(171U);
    msg.type = 124U;
    msg.frequency = 3039059876U;
    msg.min_range = 3014U;
    msg.max_range = 13809U;
    msg.bits_per_point = 137U;
    msg.scale_factor = 0.4770001193074813;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3665725418483389;
    tmp_msg_0.beam_height = 0.2408448728565078;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-106, 68, 54, -53, 100, 31, 120, 1, -70, 25, -117, -63, -112, -49, 54, 63, -98, -75, -86, 101, 106, 108, -69, -53, 11, 126, 41, -5, -14, -72, -18, -63, -110, -118, -10, 23, -41, -91, 101, -38, -92, 24, -101, -56, -75, 64, 95, 21, -27, -5, -27, 15, -128, 89, -79, -34, -118, -3, -103, -86, -74, 36, -72, 69, -107, 31, 49, 100, 75, -8, 48, -93, -50};
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
    msg.setTimeStamp(0.4620871944670457);
    msg.setSource(10121U);
    msg.setSourceEntity(227U);
    msg.setDestination(56072U);
    msg.setDestinationEntity(163U);
    msg.type = 164U;
    msg.frequency = 2597779933U;
    msg.min_range = 4284U;
    msg.max_range = 50645U;
    msg.bits_per_point = 166U;
    msg.scale_factor = 0.05232799301441182;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.09118055674644587;
    tmp_msg_0.beam_height = 0.3463535920905848;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {116, -123, -8, 41, -69, 119, -69, 100, -60, 10, 111, -122, -4, -77, -49, -65, -117, 27};
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
    msg.setTimeStamp(0.26817655210209934);
    msg.setSource(55074U);
    msg.setSourceEntity(70U);
    msg.setDestination(54620U);
    msg.setDestinationEntity(12U);
    msg.type = 210U;
    msg.frequency = 1358093861U;
    msg.min_range = 45543U;
    msg.max_range = 22705U;
    msg.bits_per_point = 132U;
    msg.scale_factor = 0.1455649520117306;
    const signed char tmp_msg_0[] = {-74, -117, 81, 124, 83, -35, -25, 100, -127, -14, -63, -106, -125, -35, 115, -82, 9, -31, 59, 106, -107, -102, -52, -80, 53, 33, -115, 61, 32, 105, -41, 28, 52, 58, -9, 53, -108, 118, -86, 101, 100, -125, 52, 79, 85, 85, -7, -25, -82, 122, -43, 94, 30, -76, -47, 103, -95, -39, 23, 106, -117, 96, 79, 69, -21, 55, 56, 58, -31, 111, 66, 78, -101, -23, 66, -121, -23, 29, 72, 86, -8, -34, 113, -68, -30, -24, 11, 0, 0, 87, -45, -53, -1, -84, 91, -126, 116, -100, 42, -27, 20, -116, 45, 105, 82, -106, -84, 32, 4, 105, 71, -71, -5, 99, 29, 6, 23, -35, -94, -72, -2, 14, -94, -66, 94, 71, 63};
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
    msg.setTimeStamp(0.7646908876383011);
    msg.setSource(41041U);
    msg.setSourceEntity(233U);
    msg.setDestination(31635U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.3183844496501821);
    msg.setSource(18671U);
    msg.setSourceEntity(231U);
    msg.setDestination(53212U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.8603100804280149);
    msg.setSource(48450U);
    msg.setSourceEntity(90U);
    msg.setDestination(62168U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.4301678546753478);
    msg.setSource(50687U);
    msg.setSourceEntity(101U);
    msg.setDestination(41889U);
    msg.setDestinationEntity(167U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.1283862694109399);
    msg.setSource(42626U);
    msg.setSourceEntity(4U);
    msg.setDestination(6529U);
    msg.setDestinationEntity(73U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.0347160575371982);
    msg.setSource(6940U);
    msg.setSourceEntity(133U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(14U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.9337485687403466);
    msg.setSource(10209U);
    msg.setSourceEntity(7U);
    msg.setDestination(60171U);
    msg.setDestinationEntity(121U);
    msg.value = 0.03457465074135935;
    msg.confidence = 0.7243259952698817;
    msg.opmodes.assign("VFYTQFCXYPDOWBZMGOJYMUDQHGTXWZXAHFIVXFPYNTRLRKAHUMCZSPDLXWZIJORUKTMECWABZAQDJJMVOJIPRAWEFQBONEXKPILDJUJCTSRLIEKCCZGPSVTDDJWLWXCECCQGOKSXSUYSHCRFGGMIIYAQLAPNVWOH");

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
    msg.setTimeStamp(0.4449955833814294);
    msg.setSource(383U);
    msg.setSourceEntity(1U);
    msg.setDestination(19139U);
    msg.setDestinationEntity(87U);
    msg.value = 0.9435302971493259;
    msg.confidence = 0.21587107785961823;
    msg.opmodes.assign("GKZMIIBYFSLYXAFSTAFDTCNFGBXUNYLODTUBPBDHFVWMQENXGLXOWDKVLJJHDTLBAQEISCNALQPELTWOROFVGXQZGRZAGWVNBVXMZFYBNWDNCQGSZMCAIVPACOUIOHEEUJPONYRFAEYVIJKTSKUJSJOQIFQWSZMRUHLJWQRTTMEKTRZHXGOIUCGDVXPEBRVESCQMIJZTJPRCXWROZUBMASWJEDM");

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
    msg.setTimeStamp(0.030936216591791355);
    msg.setSource(35903U);
    msg.setSourceEntity(192U);
    msg.setDestination(64700U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8183924002286578;
    msg.confidence = 0.7431278910027213;
    msg.opmodes.assign("WUUKCUWYDNTOCDEUIPUWNXVIKZUZLXPMEHBDXMPLJQFNCNOGKJZHARTQMTMDCFSWPQDRRGOG");

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
    msg.setTimeStamp(0.5607463377394868);
    msg.setSource(42984U);
    msg.setSourceEntity(175U);
    msg.setDestination(21595U);
    msg.setDestinationEntity(205U);
    msg.itow = 3609882869U;
    msg.lat = 0.13738021607732986;
    msg.lon = 0.10208964669637033;
    msg.height_ell = 0.8935628874769701;
    msg.height_sea = 0.8591286011355566;
    msg.hacc = 0.9684017736681935;
    msg.vacc = 0.7362486861106413;
    msg.vel_n = 0.1700775104580985;
    msg.vel_e = 0.6793176689752654;
    msg.vel_d = 0.8618712574739767;
    msg.speed = 0.8747683807524622;
    msg.gspeed = 0.11148614610357566;
    msg.heading = 0.6049081441138403;
    msg.sacc = 0.9589969210043625;
    msg.cacc = 0.34304062234888166;

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
    msg.setTimeStamp(0.09721894337663284);
    msg.setSource(13650U);
    msg.setSourceEntity(105U);
    msg.setDestination(43440U);
    msg.setDestinationEntity(144U);
    msg.itow = 1197150611U;
    msg.lat = 0.9831526484995691;
    msg.lon = 0.7836321574327649;
    msg.height_ell = 0.4464343986523024;
    msg.height_sea = 0.1920098073022366;
    msg.hacc = 0.047594150407291425;
    msg.vacc = 0.2951861358991228;
    msg.vel_n = 0.8461095779991396;
    msg.vel_e = 0.8994165774478661;
    msg.vel_d = 0.6036890619752068;
    msg.speed = 0.8885003929115981;
    msg.gspeed = 0.8463456500575423;
    msg.heading = 0.12190721745870214;
    msg.sacc = 0.8627699275356461;
    msg.cacc = 0.42221179413536136;

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
    msg.setTimeStamp(0.48928084465819055);
    msg.setSource(43054U);
    msg.setSourceEntity(58U);
    msg.setDestination(29591U);
    msg.setDestinationEntity(192U);
    msg.itow = 158100279U;
    msg.lat = 0.9277888540045853;
    msg.lon = 0.3464869036512105;
    msg.height_ell = 0.5517392500640215;
    msg.height_sea = 0.45536144805400003;
    msg.hacc = 0.6948547719251033;
    msg.vacc = 0.9699000561256614;
    msg.vel_n = 0.04531515370563732;
    msg.vel_e = 0.576624612845513;
    msg.vel_d = 0.4423740116961591;
    msg.speed = 0.22909220206246694;
    msg.gspeed = 0.6442882380997876;
    msg.heading = 0.8177402503037783;
    msg.sacc = 0.2526641581984107;
    msg.cacc = 0.650369399515939;

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
    msg.setTimeStamp(0.016417437637155197);
    msg.setSource(64337U);
    msg.setSourceEntity(72U);
    msg.setDestination(25172U);
    msg.setDestinationEntity(114U);
    msg.id = 95U;
    msg.value = 0.6088287007071772;

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
    msg.setTimeStamp(0.4273285081288978);
    msg.setSource(30003U);
    msg.setSourceEntity(45U);
    msg.setDestination(532U);
    msg.setDestinationEntity(190U);
    msg.id = 209U;
    msg.value = 0.8838335979211671;

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
    msg.setTimeStamp(0.5217404457002994);
    msg.setSource(21645U);
    msg.setSourceEntity(252U);
    msg.setDestination(5582U);
    msg.setDestinationEntity(47U);
    msg.id = 23U;
    msg.value = 0.9356520942770657;

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
    msg.setTimeStamp(0.2875946131135555);
    msg.setSource(64543U);
    msg.setSourceEntity(247U);
    msg.setDestination(53797U);
    msg.setDestinationEntity(32U);
    msg.x = 0.9661264927683683;
    msg.y = 0.8055931997585701;
    msg.z = 0.14292378625085245;
    msg.phi = 0.20922069953844047;
    msg.theta = 0.08165138104140723;
    msg.psi = 0.21370490143557486;

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
    msg.setTimeStamp(0.6195302081624642);
    msg.setSource(35798U);
    msg.setSourceEntity(28U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(55U);
    msg.x = 0.9955095262293902;
    msg.y = 0.6865897349835418;
    msg.z = 0.8528400520050479;
    msg.phi = 0.2587774029525506;
    msg.theta = 0.4523383193139894;
    msg.psi = 0.9640720127979577;

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
    msg.setTimeStamp(0.3537749263129619);
    msg.setSource(22375U);
    msg.setSourceEntity(231U);
    msg.setDestination(42686U);
    msg.setDestinationEntity(185U);
    msg.x = 0.7618910900986318;
    msg.y = 0.5512701187579315;
    msg.z = 0.361558070936843;
    msg.phi = 0.7738864771172983;
    msg.theta = 0.7533903424696069;
    msg.psi = 0.6521584764398438;

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
    msg.setTimeStamp(0.6048329872462669);
    msg.setSource(1497U);
    msg.setSourceEntity(180U);
    msg.setDestination(63580U);
    msg.setDestinationEntity(8U);
    msg.beam_width = 0.039892831877002766;
    msg.beam_height = 0.5218003698576561;

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
    msg.setTimeStamp(0.772744858575249);
    msg.setSource(5933U);
    msg.setSourceEntity(102U);
    msg.setDestination(34429U);
    msg.setDestinationEntity(73U);
    msg.beam_width = 0.28713871797645163;
    msg.beam_height = 0.48500116100246626;

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
    msg.setTimeStamp(0.5098505817829687);
    msg.setSource(62384U);
    msg.setSourceEntity(69U);
    msg.setDestination(20841U);
    msg.setDestinationEntity(7U);
    msg.beam_width = 0.44993678055674813;
    msg.beam_height = 0.7902252142556593;

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
    msg.setTimeStamp(0.1428343216050405);
    msg.setSource(780U);
    msg.setSourceEntity(183U);
    msg.setDestination(2224U);
    msg.setDestinationEntity(71U);
    msg.sane = 238U;

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
    msg.setTimeStamp(0.8138292468161743);
    msg.setSource(16339U);
    msg.setSourceEntity(128U);
    msg.setDestination(27492U);
    msg.setDestinationEntity(137U);
    msg.sane = 196U;

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
    msg.setTimeStamp(0.12134326306240184);
    msg.setSource(31500U);
    msg.setSourceEntity(249U);
    msg.setDestination(5256U);
    msg.setDestinationEntity(235U);
    msg.sane = 253U;

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
    msg.setTimeStamp(0.15146367562143637);
    msg.setSource(34935U);
    msg.setSourceEntity(101U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6604165086137744;

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
    msg.setTimeStamp(0.8600864304295943);
    msg.setSource(49363U);
    msg.setSourceEntity(247U);
    msg.setDestination(732U);
    msg.setDestinationEntity(77U);
    msg.value = 0.10467409423000129;

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
    msg.setTimeStamp(0.6045397446695955);
    msg.setSource(28410U);
    msg.setSourceEntity(190U);
    msg.setDestination(24052U);
    msg.setDestinationEntity(198U);
    msg.value = 0.8641845860087752;

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
    msg.setTimeStamp(0.4574948822535856);
    msg.setSource(10021U);
    msg.setSourceEntity(121U);
    msg.setDestination(15472U);
    msg.setDestinationEntity(141U);
    msg.value = 0.24890336517461153;

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
    msg.setTimeStamp(0.33272634404491686);
    msg.setSource(12049U);
    msg.setSourceEntity(41U);
    msg.setDestination(10487U);
    msg.setDestinationEntity(254U);
    msg.value = 0.20245047245955472;

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
    msg.setTimeStamp(0.20665506203218598);
    msg.setSource(37918U);
    msg.setSourceEntity(147U);
    msg.setDestination(24284U);
    msg.setDestinationEntity(117U);
    msg.value = 0.6924136266885379;

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
    msg.setTimeStamp(0.09190124329597105);
    msg.setSource(63138U);
    msg.setSourceEntity(20U);
    msg.setDestination(20760U);
    msg.setDestinationEntity(168U);
    msg.value = 0.44585159036523536;

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
    msg.setTimeStamp(0.671731991046411);
    msg.setSource(14518U);
    msg.setSourceEntity(107U);
    msg.setDestination(28035U);
    msg.setDestinationEntity(126U);
    msg.value = 0.3818387255778888;

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
    msg.setTimeStamp(0.19453840784424803);
    msg.setSource(23181U);
    msg.setSourceEntity(95U);
    msg.setDestination(42955U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8047903294961851;

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
    msg.setTimeStamp(0.8119655117583244);
    msg.setSource(49997U);
    msg.setSourceEntity(49U);
    msg.setDestination(24147U);
    msg.setDestinationEntity(20U);
    msg.value = 0.3234894839008269;

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
    msg.setTimeStamp(0.3753930755400785);
    msg.setSource(6904U);
    msg.setSourceEntity(19U);
    msg.setDestination(49252U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8922551977583104;

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
    msg.setTimeStamp(0.551277583069345);
    msg.setSource(10861U);
    msg.setSourceEntity(80U);
    msg.setDestination(59870U);
    msg.setDestinationEntity(123U);
    msg.value = 0.11954470884183832;

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
    msg.setTimeStamp(0.10767576714496419);
    msg.setSource(39874U);
    msg.setSourceEntity(5U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5979145517978245;

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
    msg.setTimeStamp(0.6807763536962381);
    msg.setSource(19049U);
    msg.setSourceEntity(156U);
    msg.setDestination(64262U);
    msg.setDestinationEntity(213U);
    msg.value = 0.23112937633065078;

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
    msg.setTimeStamp(0.4787275106695249);
    msg.setSource(4753U);
    msg.setSourceEntity(83U);
    msg.setDestination(4132U);
    msg.setDestinationEntity(226U);
    msg.value = 0.40897876045789416;

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
    msg.setTimeStamp(0.2630956934404548);
    msg.setSource(12434U);
    msg.setSourceEntity(38U);
    msg.setDestination(36035U);
    msg.setDestinationEntity(13U);
    msg.value = 0.6737102939794164;

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
    msg.setTimeStamp(0.17740728148859286);
    msg.setSource(19808U);
    msg.setSourceEntity(226U);
    msg.setDestination(35376U);
    msg.setDestinationEntity(2U);
    msg.value = 0.4090996226708419;

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
    msg.setTimeStamp(0.8551464559370235);
    msg.setSource(1432U);
    msg.setSourceEntity(43U);
    msg.setDestination(20002U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6812101541553228;

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
    msg.setTimeStamp(0.10962569390443244);
    msg.setSource(58432U);
    msg.setSourceEntity(240U);
    msg.setDestination(54532U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5653791814844702;

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
    msg.setTimeStamp(0.9901807081740097);
    msg.setSource(57970U);
    msg.setSourceEntity(222U);
    msg.setDestination(7764U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9638589000367838;

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
    msg.setTimeStamp(0.9679776132066279);
    msg.setSource(50580U);
    msg.setSourceEntity(230U);
    msg.setDestination(16693U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7071365301059963;

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
    msg.setTimeStamp(0.587307689407131);
    msg.setSource(49401U);
    msg.setSourceEntity(179U);
    msg.setDestination(41686U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8094125950669769;

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
    msg.setTimeStamp(0.6536653911040096);
    msg.setSource(60467U);
    msg.setSourceEntity(58U);
    msg.setDestination(40560U);
    msg.setDestinationEntity(107U);
    msg.value = 0.06300176199005492;

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
    msg.setTimeStamp(0.10338982744984093);
    msg.setSource(43148U);
    msg.setSourceEntity(112U);
    msg.setDestination(13207U);
    msg.setDestinationEntity(254U);
    msg.value = 0.36575301739663746;

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
    msg.setTimeStamp(0.07214709050888413);
    msg.setSource(62261U);
    msg.setSourceEntity(241U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(14U);
    msg.validity = 19405U;
    msg.type = 141U;
    msg.tow = 1592943569U;
    msg.base_lat = 0.8057468015090462;
    msg.base_lon = 0.6065608484857495;
    msg.base_height = 0.8812567189071507;
    msg.n = 0.4388532405790647;
    msg.e = 0.6439986426434423;
    msg.d = 0.5221130713413079;
    msg.v_n = 0.9861844599340422;
    msg.v_e = 0.6108016578026098;
    msg.v_d = 0.2316206702243443;
    msg.satellites = 178U;
    msg.iar_hyp = 6305U;
    msg.iar_ratio = 0.9587768834308653;

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
    msg.setTimeStamp(0.6421379149581805);
    msg.setSource(26434U);
    msg.setSourceEntity(87U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(88U);
    msg.validity = 30740U;
    msg.type = 63U;
    msg.tow = 1163387440U;
    msg.base_lat = 0.06704615216794285;
    msg.base_lon = 0.2213399600469239;
    msg.base_height = 0.04319452200147944;
    msg.n = 0.3671997120524054;
    msg.e = 0.14996046057268664;
    msg.d = 0.651981918784616;
    msg.v_n = 0.5737063428960605;
    msg.v_e = 0.4744978652806039;
    msg.v_d = 0.8987527215454646;
    msg.satellites = 122U;
    msg.iar_hyp = 37691U;
    msg.iar_ratio = 0.957091869084511;

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
    msg.setTimeStamp(0.12034244346754452);
    msg.setSource(59508U);
    msg.setSourceEntity(239U);
    msg.setDestination(8484U);
    msg.setDestinationEntity(112U);
    msg.validity = 61577U;
    msg.type = 125U;
    msg.tow = 2559569285U;
    msg.base_lat = 0.8344689722025769;
    msg.base_lon = 0.995852289897611;
    msg.base_height = 0.9958795286507115;
    msg.n = 0.11575608493403566;
    msg.e = 0.559247258565719;
    msg.d = 0.09272030479276239;
    msg.v_n = 0.7343854938531481;
    msg.v_e = 0.9917734458149738;
    msg.v_d = 0.891433719840168;
    msg.satellites = 65U;
    msg.iar_hyp = 63904U;
    msg.iar_ratio = 0.7822674539661962;

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
    msg.setTimeStamp(0.7337702892506642);
    msg.setSource(36633U);
    msg.setSourceEntity(54U);
    msg.setDestination(59987U);
    msg.setDestinationEntity(154U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.37036290121910664;
    tmp_msg_0.lon = 0.24953448609210738;
    tmp_msg_0.height = 0.3266351622297038;
    tmp_msg_0.x = 0.029619216924139602;
    tmp_msg_0.y = 0.8493709084259673;
    tmp_msg_0.z = 0.7534187685142004;
    tmp_msg_0.phi = 0.6655122960779866;
    tmp_msg_0.theta = 0.5060449506824088;
    tmp_msg_0.psi = 0.8769912769961712;
    tmp_msg_0.u = 0.8490060823682903;
    tmp_msg_0.v = 0.8412859336780125;
    tmp_msg_0.w = 0.9911901485286415;
    tmp_msg_0.vx = 0.4600954464658986;
    tmp_msg_0.vy = 0.09425836755248329;
    tmp_msg_0.vz = 0.3052370375776945;
    tmp_msg_0.p = 0.5356868999955334;
    tmp_msg_0.q = 0.6770207872600066;
    tmp_msg_0.r = 0.07331912428695242;
    tmp_msg_0.depth = 0.28407318297648265;
    tmp_msg_0.alt = 0.554365021625466;
    msg.state.set(tmp_msg_0);
    msg.type = 189U;

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
    msg.setTimeStamp(0.0992030177403288);
    msg.setSource(39853U);
    msg.setSourceEntity(137U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(220U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6475705230080309;
    tmp_msg_0.lon = 0.07783866090224745;
    tmp_msg_0.height = 0.9888468457053875;
    tmp_msg_0.x = 0.9179494889477136;
    tmp_msg_0.y = 0.3768203889738563;
    tmp_msg_0.z = 0.5389777544949186;
    tmp_msg_0.phi = 0.9921692469785046;
    tmp_msg_0.theta = 0.22539865748601717;
    tmp_msg_0.psi = 0.5040885548596107;
    tmp_msg_0.u = 0.606562011502864;
    tmp_msg_0.v = 0.8908641408748027;
    tmp_msg_0.w = 0.6860882038983607;
    tmp_msg_0.vx = 0.9225336310310392;
    tmp_msg_0.vy = 0.29526382193137723;
    tmp_msg_0.vz = 0.6090694828765797;
    tmp_msg_0.p = 0.887360170120506;
    tmp_msg_0.q = 0.7078810350393481;
    tmp_msg_0.r = 0.2703441873629451;
    tmp_msg_0.depth = 0.43835074487326786;
    tmp_msg_0.alt = 0.7685416782865166;
    msg.state.set(tmp_msg_0);
    msg.type = 131U;

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
    msg.setTimeStamp(0.22286966016667664);
    msg.setSource(37725U);
    msg.setSourceEntity(44U);
    msg.setDestination(53749U);
    msg.setDestinationEntity(116U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6338579433777723;
    tmp_msg_0.lon = 0.36067929231067053;
    tmp_msg_0.height = 0.2995624372006588;
    tmp_msg_0.x = 0.47711416904520065;
    tmp_msg_0.y = 0.6509075547275777;
    tmp_msg_0.z = 0.950656512107475;
    tmp_msg_0.phi = 0.6751125848386496;
    tmp_msg_0.theta = 0.9218948580461928;
    tmp_msg_0.psi = 0.71237427748398;
    tmp_msg_0.u = 0.24553437632922726;
    tmp_msg_0.v = 0.3628103902683346;
    tmp_msg_0.w = 0.6154461163753941;
    tmp_msg_0.vx = 0.3798498255110785;
    tmp_msg_0.vy = 0.1310129154594274;
    tmp_msg_0.vz = 0.12398939214991311;
    tmp_msg_0.p = 0.39650016191483073;
    tmp_msg_0.q = 0.7643738934709522;
    tmp_msg_0.r = 0.3151709147516707;
    tmp_msg_0.depth = 0.21918291341886798;
    tmp_msg_0.alt = 0.7834830801090799;
    msg.state.set(tmp_msg_0);
    msg.type = 139U;

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
    msg.setTimeStamp(0.8310955420663526);
    msg.setSource(61941U);
    msg.setSourceEntity(26U);
    msg.setDestination(9074U);
    msg.setDestinationEntity(90U);
    msg.value = 0.552582182898041;

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
    msg.setTimeStamp(0.6737288047391686);
    msg.setSource(6571U);
    msg.setSourceEntity(140U);
    msg.setDestination(38052U);
    msg.setDestinationEntity(197U);
    msg.value = 0.26721205400941583;

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
    msg.setTimeStamp(0.8493437697287337);
    msg.setSource(13172U);
    msg.setSourceEntity(204U);
    msg.setDestination(8012U);
    msg.setDestinationEntity(190U);
    msg.value = 0.523215645886824;

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
    msg.setTimeStamp(0.07601552119205324);
    msg.setSource(32138U);
    msg.setSourceEntity(35U);
    msg.setDestination(56262U);
    msg.setDestinationEntity(191U);
    msg.value = 0.07860273996514089;

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
    msg.setTimeStamp(0.6327472680446845);
    msg.setSource(5822U);
    msg.setSourceEntity(127U);
    msg.setDestination(48884U);
    msg.setDestinationEntity(44U);
    msg.value = 0.8215815210924151;

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
    msg.setTimeStamp(0.9492727162154797);
    msg.setSource(59251U);
    msg.setSourceEntity(180U);
    msg.setDestination(28045U);
    msg.setDestinationEntity(73U);
    msg.value = 0.8514193913884033;

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
    msg.setTimeStamp(0.336920574991439);
    msg.setSource(54279U);
    msg.setSourceEntity(126U);
    msg.setDestination(41640U);
    msg.setDestinationEntity(61U);
    msg.value = 0.8973937742480227;

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
    msg.setTimeStamp(0.5337397650525261);
    msg.setSource(7241U);
    msg.setSourceEntity(14U);
    msg.setDestination(54853U);
    msg.setDestinationEntity(11U);
    msg.value = 0.6751061954862054;

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
    msg.setTimeStamp(0.9454410002311688);
    msg.setSource(59732U);
    msg.setSourceEntity(96U);
    msg.setDestination(34232U);
    msg.setDestinationEntity(235U);
    msg.value = 0.37261292804617774;

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
    msg.setTimeStamp(0.5796857864844865);
    msg.setSource(44956U);
    msg.setSourceEntity(237U);
    msg.setDestination(29809U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6896445753079358;

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
    msg.setTimeStamp(0.15683911207181678);
    msg.setSource(5459U);
    msg.setSourceEntity(51U);
    msg.setDestination(5489U);
    msg.setDestinationEntity(31U);
    msg.value = 0.3038661578005105;

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
    msg.setTimeStamp(0.8803907655529768);
    msg.setSource(36876U);
    msg.setSourceEntity(230U);
    msg.setDestination(8208U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5861230038617056;

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
    msg.setTimeStamp(0.3638790359635732);
    msg.setSource(10445U);
    msg.setSourceEntity(181U);
    msg.setDestination(28680U);
    msg.setDestinationEntity(77U);
    msg.value = 0.286655393841714;

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
    msg.setTimeStamp(0.13726123176080174);
    msg.setSource(31904U);
    msg.setSourceEntity(181U);
    msg.setDestination(9967U);
    msg.setDestinationEntity(135U);
    msg.value = 0.8765576680481412;

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
    msg.setTimeStamp(0.5517606351653133);
    msg.setSource(191U);
    msg.setSourceEntity(117U);
    msg.setDestination(23949U);
    msg.setDestinationEntity(68U);
    msg.value = 0.1948027859497854;

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
    msg.setTimeStamp(0.22951921145036502);
    msg.setSource(37842U);
    msg.setSourceEntity(187U);
    msg.setDestination(40542U);
    msg.setDestinationEntity(224U);
    msg.id = 226U;
    msg.zoom = 4U;
    msg.action = 198U;

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
    msg.setTimeStamp(0.9534156648259645);
    msg.setSource(32568U);
    msg.setSourceEntity(43U);
    msg.setDestination(33861U);
    msg.setDestinationEntity(176U);
    msg.id = 52U;
    msg.zoom = 245U;
    msg.action = 206U;

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
    msg.setTimeStamp(0.2244990444806476);
    msg.setSource(56289U);
    msg.setSourceEntity(144U);
    msg.setDestination(41527U);
    msg.setDestinationEntity(240U);
    msg.id = 131U;
    msg.zoom = 195U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.3466990004008472);
    msg.setSource(1938U);
    msg.setSourceEntity(188U);
    msg.setDestination(39285U);
    msg.setDestinationEntity(144U);
    msg.id = 185U;
    msg.value = 0.23900305880237116;

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
    msg.setTimeStamp(0.5975402747665052);
    msg.setSource(40906U);
    msg.setSourceEntity(200U);
    msg.setDestination(16616U);
    msg.setDestinationEntity(159U);
    msg.id = 213U;
    msg.value = 0.21824363619492892;

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
    msg.setTimeStamp(0.6760747937994874);
    msg.setSource(41798U);
    msg.setSourceEntity(2U);
    msg.setDestination(36703U);
    msg.setDestinationEntity(91U);
    msg.id = 33U;
    msg.value = 0.7468403337502559;

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
    msg.setTimeStamp(0.9509369807057017);
    msg.setSource(24975U);
    msg.setSourceEntity(31U);
    msg.setDestination(22489U);
    msg.setDestinationEntity(85U);
    msg.id = 30U;
    msg.value = 0.6137393684557463;

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
    msg.setTimeStamp(0.08656489608947082);
    msg.setSource(64618U);
    msg.setSourceEntity(46U);
    msg.setDestination(59053U);
    msg.setDestinationEntity(64U);
    msg.id = 58U;
    msg.value = 0.29014771743931433;

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
    msg.setTimeStamp(0.4768623318701295);
    msg.setSource(41571U);
    msg.setSourceEntity(183U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(212U);
    msg.id = 78U;
    msg.value = 0.16428760501777218;

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
    msg.setTimeStamp(0.585212058043136);
    msg.setSource(387U);
    msg.setSourceEntity(167U);
    msg.setDestination(65003U);
    msg.setDestinationEntity(78U);
    msg.id = 110U;
    msg.angle = 0.3463426295432638;

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
    msg.setTimeStamp(0.06428916778158988);
    msg.setSource(30748U);
    msg.setSourceEntity(143U);
    msg.setDestination(47077U);
    msg.setDestinationEntity(232U);
    msg.id = 29U;
    msg.angle = 0.595104499586908;

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
    msg.setTimeStamp(0.07066218857959261);
    msg.setSource(26504U);
    msg.setSourceEntity(153U);
    msg.setDestination(40674U);
    msg.setDestinationEntity(127U);
    msg.id = 41U;
    msg.angle = 0.10074601813762762;

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
    msg.setTimeStamp(0.5029738305688363);
    msg.setSource(19970U);
    msg.setSourceEntity(192U);
    msg.setDestination(36308U);
    msg.setDestinationEntity(14U);
    msg.op = 98U;
    msg.actions.assign("LFWKLJOUYPXOMCTJHQMLFSVSJDVIYAWRZGQUWCZKXMSQOOXVZKXZFQMYATTGEJWRECTVGPHVRQCNGQNAMRLJXRBNHGZLRKPNSJEWRVUHAUODIDPUEWFHIBMDMROILJDBXUSYOPDEZGTBXBASMOKCZENMJELCYBAUBJWEYVXWYZNDNMITEBYFXGGUOAPFPPIHKNTKQFPTKPNIDQRCBZHSHUAJIKAQDANWHDFR");

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
    msg.setTimeStamp(0.21687780261708767);
    msg.setSource(47939U);
    msg.setSourceEntity(23U);
    msg.setDestination(49272U);
    msg.setDestinationEntity(101U);
    msg.op = 10U;
    msg.actions.assign("GERZSGLRNPGKIBOSHHP");

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
    msg.setTimeStamp(0.8793218686149062);
    msg.setSource(39495U);
    msg.setSourceEntity(38U);
    msg.setDestination(24422U);
    msg.setDestinationEntity(18U);
    msg.op = 35U;
    msg.actions.assign("CACHYXSXNSVKBLIAERVWWKTZJWNBUSLEZTVLJQPUIHGR");

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
    msg.setTimeStamp(0.3295330896240317);
    msg.setSource(34708U);
    msg.setSourceEntity(92U);
    msg.setDestination(18508U);
    msg.setDestinationEntity(250U);
    msg.actions.assign("ONCMPGMZHRDOWANTGMAOTYTKQAMUYBKSEKOUPXIPXTLSNBYWQWCJRLIGCNEVESYZSCDQKXODJTXMFSHXXXKUZMAKPFLSFUKYHAVLGQDUEKCFHPZYFPQJZTVHNBUYTRCVFSIINIYXLBVIGWJMTVVRXDNBQEBGVKLPRXGOROEPUASHCIIKJLZBCFGQNDHJVJOFDDZRMBZJW");

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
    msg.setTimeStamp(0.5978069295681074);
    msg.setSource(33470U);
    msg.setSourceEntity(238U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(208U);
    msg.actions.assign("USTXPVNCPXFUSHHZJGNMCVQZEVKYQORBDAVSABGCKWRJIUENXFOBBIUZHMUYMPCDLARRBBI");

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
    msg.setTimeStamp(0.9975245711872105);
    msg.setSource(50948U);
    msg.setSourceEntity(26U);
    msg.setDestination(51031U);
    msg.setDestinationEntity(18U);
    msg.actions.assign("JKEPUWVRJJUTXPKSAMIJIGKNTSGDXSBKIERLVCDHLCJTMNRAOQBAXUDRURVWJSGVHPFLOYUUCJQJQTNVWXYSNRIPMDASGAOBEGEABXZJXUS");

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
    msg.setTimeStamp(0.36834464617698126);
    msg.setSource(3769U);
    msg.setSourceEntity(35U);
    msg.setDestination(15313U);
    msg.setDestinationEntity(178U);
    msg.button = 62U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.5856139145211323);
    msg.setSource(7998U);
    msg.setSourceEntity(160U);
    msg.setDestination(23872U);
    msg.setDestinationEntity(125U);
    msg.button = 236U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.333307108406679);
    msg.setSource(60967U);
    msg.setSourceEntity(18U);
    msg.setDestination(56006U);
    msg.setDestinationEntity(211U);
    msg.button = 18U;
    msg.value = 65U;

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
    msg.setTimeStamp(0.5568455314211017);
    msg.setSource(10673U);
    msg.setSourceEntity(183U);
    msg.setDestination(23254U);
    msg.setDestinationEntity(42U);
    msg.op = 93U;
    msg.text.assign("TCXZREFNVLEQQNZ");

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
    msg.setTimeStamp(0.9359911529433642);
    msg.setSource(48023U);
    msg.setSourceEntity(172U);
    msg.setDestination(10893U);
    msg.setDestinationEntity(32U);
    msg.op = 145U;
    msg.text.assign("XILWXYIQUIHCYCYMZRHKGZHNXCJGKSFJFKVHVZJODEHRHLBXFXKWORRLOTRSVKVTABRINPTZCPDDKMBEAVGWXEGLIHYTQRBUVEHIWNJSULHGSJMRXTQCWYCQF");

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
    msg.setTimeStamp(0.1689196831112979);
    msg.setSource(43499U);
    msg.setSourceEntity(37U);
    msg.setDestination(17930U);
    msg.setDestinationEntity(119U);
    msg.op = 218U;
    msg.text.assign("DOSMPCTLKMBLPLKIRQWSLUSHHUDLLWOAWCYBVV");

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
    msg.setTimeStamp(0.3049806267395928);
    msg.setSource(61830U);
    msg.setSourceEntity(45U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(34U);
    msg.op = 175U;
    msg.time_remain = 0.7111782706397329;
    msg.sched_time = 0.0806288152646153;

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
    msg.setTimeStamp(0.008523946125007509);
    msg.setSource(61946U);
    msg.setSourceEntity(155U);
    msg.setDestination(15475U);
    msg.setDestinationEntity(85U);
    msg.op = 96U;
    msg.time_remain = 0.13325104046245784;
    msg.sched_time = 0.09363805796392832;

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
    msg.setTimeStamp(0.42510941115990675);
    msg.setSource(14339U);
    msg.setSourceEntity(221U);
    msg.setDestination(27422U);
    msg.setDestinationEntity(135U);
    msg.op = 158U;
    msg.time_remain = 0.188315741537177;
    msg.sched_time = 0.11059740724739953;

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
    msg.setTimeStamp(0.15075387861301914);
    msg.setSource(37314U);
    msg.setSourceEntity(60U);
    msg.setDestination(40069U);
    msg.setDestinationEntity(246U);
    msg.name.assign("JELNVDSDDJSCRQTDTHKGIAITLBUMSTPZKHJRWEBCPQWTUGUIFXEXZJONLBUPZKTHCPZQXMOKWXVCGIOVHTKOPGGUJLLLPYRHSLDQEDZIDRUAASYPOFFKNWCABQCDXYXEWHGTBXFOYMGKFZPIMZYHMUVNYJBXSSVICRKVARFSGFMWNRNAYNGOZJCQXRARNHQQTJIBESYPXTOWHQBELUIAAJVGMYNHIWVAUFCBEDBUQELW");
    msg.op = 52U;
    msg.sched_time = 0.8492927034476623;

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
    msg.setTimeStamp(0.9637222267008752);
    msg.setSource(20323U);
    msg.setSourceEntity(10U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(180U);
    msg.name.assign("PFVSDEDBEYHPBCABLEYKUNRBQIUCMLTOHQQKUEWSSRYOJFPCNBIPLZPXGQXDSWSVOWZQPJIGBLRTIVJNEHVWFJAIRZ");
    msg.op = 67U;
    msg.sched_time = 0.17071374966956432;

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
    msg.setTimeStamp(0.9780577708962075);
    msg.setSource(23401U);
    msg.setSourceEntity(212U);
    msg.setDestination(63645U);
    msg.setDestinationEntity(113U);
    msg.name.assign("EKPLFYULCDKCWOVXSBXZJDASDTNYODRECJJRRE");
    msg.op = 0U;
    msg.sched_time = 0.587489866652223;

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
    msg.setTimeStamp(0.7122860846562761);
    msg.setSource(20819U);
    msg.setSourceEntity(28U);
    msg.setDestination(751U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.6490011751211029);
    msg.setSource(40035U);
    msg.setSourceEntity(156U);
    msg.setDestination(32752U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.16683853644779878);
    msg.setSource(1462U);
    msg.setSourceEntity(157U);
    msg.setDestination(19241U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.3709821560269425);
    msg.setSource(20925U);
    msg.setSourceEntity(170U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(76U);
    msg.name.assign("LOGRCVLOEQKFBIYDPUTUQJVNWALNHYXMBPEOGFJVQSFWVJXNOKTC");
    msg.state = 145U;

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
    msg.setTimeStamp(0.17946154892371968);
    msg.setSource(1350U);
    msg.setSourceEntity(69U);
    msg.setDestination(11904U);
    msg.setDestinationEntity(5U);
    msg.name.assign("MGGYGVQNEMBQDDAZF");
    msg.state = 203U;

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
    msg.setTimeStamp(0.9571547266752037);
    msg.setSource(3726U);
    msg.setSourceEntity(126U);
    msg.setDestination(48899U);
    msg.setDestinationEntity(199U);
    msg.name.assign("PTOLEWEVGXSVWXLAIMNTKDWFTWTZWNEXZWKCVICIMDZBGZXNWKQMPBJYPAAFGRXEHBEJUKPDJFXAMZNIEAOGWDRUSFQTRELOBCQHYUBHVDSRYMQBHTXFTIC");
    msg.state = 52U;

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
    msg.setTimeStamp(0.8506759428273425);
    msg.setSource(62003U);
    msg.setSourceEntity(180U);
    msg.setDestination(39792U);
    msg.setDestinationEntity(166U);
    msg.name.assign("LGXWSHVSBSGKANBVWTGBIQANMMIJTILAOCMYYWQLWZKHLOHYEYSDRUXLFFQVKFOGMFAPDIIZUQWSYVCRZJOPZGIJKHTVQBCKP");
    msg.value = 71U;

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
    msg.setTimeStamp(0.3706205258249259);
    msg.setSource(17867U);
    msg.setSourceEntity(62U);
    msg.setDestination(3123U);
    msg.setDestinationEntity(100U);
    msg.name.assign("EORXRVHXGCNSOCEFXHLDIKAVPBRUQOWRAAJTKCHJFHEZFCMIZNGBICUBACYFFLOLRSGRKTVTSKNMQHRGZVHFDDXDBMHIWZJPELCLXQJYWQLEWGTOYDFWWYRUNUAVPMLYLQLAIHUIIWNEYJBWXFXANCKOKZGNPISR");
    msg.value = 80U;

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
    msg.setTimeStamp(0.04880062023766818);
    msg.setSource(14480U);
    msg.setSourceEntity(84U);
    msg.setDestination(37042U);
    msg.setDestinationEntity(200U);
    msg.name.assign("VTRWTQMXBUEELTUOIIVXLBCSFFSPRDXAYLEJFIOZGKFPAKHUENMYDAOHALMFGJRGHNOCZDZHNMYYYGHVPFCWZCTZSETFOTNKYTOGDJBOUFQTVRPIKRHGCWLSWGZDVBCBXUOQRHPMQCGQWVXSEWMAABOBSFRCILVVKOYMXIXNJIKXNWVJKAKYTJRWDQJURCNHNBHEGIDVLQHMXQPKLEPFLWJTSGMUYQILDSAZPNSQPEJDYUZECPKUAINU");
    msg.value = 45U;

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
    msg.setTimeStamp(0.5149101281615146);
    msg.setSource(28016U);
    msg.setSourceEntity(154U);
    msg.setDestination(4277U);
    msg.setDestinationEntity(5U);
    msg.name.assign("MEPDUSIFTRVBUYOWMZGTYIVQOCHCAISEHBWNWSPIUNYEWQJGSXQSCOVQNKTGEWYIOHRFPDDWKANKKBGQUABMZKORYJTGLSVFUNTJYZGLJAEDZCJQXFQAXWAHVTLEJYCUXRDAXZPGIRVTBLCUFJHPRBGMWSFCFDPDPXUZFFBEKEIJCZMYAQLDWOZAUSQBRRMHKLNIYUEPNXXTSROJMLVOMJXYKFNLLRGMDOPD");

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
    msg.setTimeStamp(0.7049284232903934);
    msg.setSource(58133U);
    msg.setSourceEntity(21U);
    msg.setDestination(32834U);
    msg.setDestinationEntity(76U);
    msg.name.assign("QSMISRRBYJVJTLBFPVNRQXFEDUBPUDAISRPVDIFBECCNECVTQPDIXMLHSMLSCVHCSBRLTUUNACZDZVNZTIFFXJTJMHURISWOKXWZCKYYWVFG");

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
    msg.setTimeStamp(0.6657560406891384);
    msg.setSource(23180U);
    msg.setSourceEntity(118U);
    msg.setDestination(8223U);
    msg.setDestinationEntity(87U);
    msg.name.assign("QSOOVVFXBWQQHGLGXCACOWNVBIBEDBLOYXBWNKNTTFCRAYKPTROHNFQDCDMMMUPSFGTAMZKFJUKGXTELUFQUDMEL");

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
    msg.setTimeStamp(0.13281729503400586);
    msg.setSource(186U);
    msg.setSourceEntity(4U);
    msg.setDestination(26289U);
    msg.setDestinationEntity(133U);
    msg.name.assign("GRQESRAYOPSMASK");
    msg.value = 210U;

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
    msg.setTimeStamp(0.28799345781939745);
    msg.setSource(25248U);
    msg.setSourceEntity(65U);
    msg.setDestination(60467U);
    msg.setDestinationEntity(172U);
    msg.name.assign("GZBSBNVTVFGPFIGCUJWDAZLDQJEZHOCAITOHFIBTMYCBYRSXUJSZSAZWAQFBKGPJPYPGJWUXWWLHWDPLRGZQWVJEOCMSKXLKKTMEQRBODXLXEFCSAUANQUBJXREYGOINPLQTNZDTAFAMNKMQVVEHQRENIDOZELFHOUZHVRNHXVMNOPAPDTARNYYMWGGIELOLSVJCUYSHJTXMTRFWDDDQZRUTXQKPEXOMNCFICUCHIKHSFC");
    msg.value = 155U;

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
    msg.setTimeStamp(0.2676642619941969);
    msg.setSource(19704U);
    msg.setSourceEntity(134U);
    msg.setDestination(36207U);
    msg.setDestinationEntity(151U);
    msg.name.assign("CLVILZYAXKPJOQZBUNMZBUJDCAANCVDXXYMFSXBJSKTGWMCOFUIJDWZFAUTSWNPYFQOSXBTYBTHAPGRESDQWRRMETPELXBUEPLEIEHEFPJSURYVBUJWSNDFQZNOQGYDMQVSWMVGJYJIGAKKCDSXJHCGOTWMLWHVQIHNVXWXYAERCNIKROHOKILVQWLAGBYDIRIEXZNDANMPRPUOOHZVGUK");
    msg.value = 136U;

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
    msg.setTimeStamp(0.34935244972079016);
    msg.setSource(23144U);
    msg.setSourceEntity(94U);
    msg.setDestination(61869U);
    msg.setDestinationEntity(177U);
    msg.id = 160U;
    msg.period = 3625324810U;
    msg.duty_cycle = 3280628289U;

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
    msg.setTimeStamp(0.5963524464182353);
    msg.setSource(40572U);
    msg.setSourceEntity(47U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(64U);
    msg.id = 201U;
    msg.period = 553290478U;
    msg.duty_cycle = 3254646736U;

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
    msg.setTimeStamp(0.17248914269223636);
    msg.setSource(11484U);
    msg.setSourceEntity(114U);
    msg.setDestination(21063U);
    msg.setDestinationEntity(154U);
    msg.id = 135U;
    msg.period = 2847330212U;
    msg.duty_cycle = 3089163402U;

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
    msg.setTimeStamp(0.2643262960047239);
    msg.setSource(31679U);
    msg.setSourceEntity(231U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(204U);
    msg.id = 119U;
    msg.period = 173659417U;
    msg.duty_cycle = 346207925U;

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
    msg.setTimeStamp(0.7330889907590065);
    msg.setSource(3600U);
    msg.setSourceEntity(253U);
    msg.setDestination(19762U);
    msg.setDestinationEntity(196U);
    msg.id = 190U;
    msg.period = 1673457933U;
    msg.duty_cycle = 1399805127U;

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
    msg.setTimeStamp(0.13872855833260234);
    msg.setSource(41576U);
    msg.setSourceEntity(3U);
    msg.setDestination(23356U);
    msg.setDestinationEntity(142U);
    msg.id = 13U;
    msg.period = 468272391U;
    msg.duty_cycle = 2831677184U;

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
    msg.setTimeStamp(0.7925022431389659);
    msg.setSource(40938U);
    msg.setSourceEntity(151U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.535398183960369;
    msg.lon = 0.732773922462203;
    msg.height = 0.209027174308562;
    msg.x = 0.44640294243952783;
    msg.y = 0.6024233016157043;
    msg.z = 0.7071276745242304;
    msg.phi = 0.33926924863331254;
    msg.theta = 0.46603585061133446;
    msg.psi = 0.2211609592112932;
    msg.u = 0.3739590364312857;
    msg.v = 0.7442754973824214;
    msg.w = 0.5528698705612746;
    msg.vx = 0.4320161008888044;
    msg.vy = 0.2531738590438013;
    msg.vz = 0.793404280576837;
    msg.p = 0.5080519195875776;
    msg.q = 0.2549567103381627;
    msg.r = 0.04962037830011545;
    msg.depth = 0.7805816615790114;
    msg.alt = 0.8770067790372025;

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
    msg.setTimeStamp(0.711685370026349);
    msg.setSource(20577U);
    msg.setSourceEntity(124U);
    msg.setDestination(51237U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.9365675119391335;
    msg.lon = 0.0711532179569665;
    msg.height = 0.3290599389098209;
    msg.x = 0.8176749492687322;
    msg.y = 0.4590150173814216;
    msg.z = 0.9800739520066162;
    msg.phi = 0.19318631963167565;
    msg.theta = 0.9558875763612705;
    msg.psi = 0.6704396496076902;
    msg.u = 0.3725321459261959;
    msg.v = 0.05730452610690662;
    msg.w = 0.6384708239389856;
    msg.vx = 0.8386482320923833;
    msg.vy = 0.15489421097630574;
    msg.vz = 0.3204841231244745;
    msg.p = 0.7180948708065351;
    msg.q = 0.38653533179930855;
    msg.r = 0.74439964941083;
    msg.depth = 0.5727971060576701;
    msg.alt = 0.16839500376912309;

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
    msg.setTimeStamp(0.947911190498518);
    msg.setSource(43002U);
    msg.setSourceEntity(13U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.1688993263245132;
    msg.lon = 0.39621095728143707;
    msg.height = 0.2853486715780589;
    msg.x = 0.061145031925595505;
    msg.y = 0.8119391346783349;
    msg.z = 0.18850722678791754;
    msg.phi = 0.13192260860952776;
    msg.theta = 0.7660615244627977;
    msg.psi = 0.7281744976197088;
    msg.u = 0.3156305659578953;
    msg.v = 0.36664179468217006;
    msg.w = 0.9588293070148889;
    msg.vx = 0.48650949113742403;
    msg.vy = 0.6903226315946261;
    msg.vz = 0.9351877550209411;
    msg.p = 0.18309625409236896;
    msg.q = 0.25966263333977;
    msg.r = 0.7096171529664278;
    msg.depth = 0.8745613611177142;
    msg.alt = 0.3211379230814846;

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
    msg.setTimeStamp(0.5252198399286336);
    msg.setSource(32727U);
    msg.setSourceEntity(39U);
    msg.setDestination(24161U);
    msg.setDestinationEntity(220U);
    msg.x = 0.6192425632109032;
    msg.y = 0.7240260256169017;
    msg.z = 0.16066594525880862;

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
    msg.setTimeStamp(0.1337464653168432);
    msg.setSource(21778U);
    msg.setSourceEntity(98U);
    msg.setDestination(50817U);
    msg.setDestinationEntity(57U);
    msg.x = 0.11652300660992221;
    msg.y = 0.1482521673960605;
    msg.z = 0.2879893188960192;

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
    msg.setTimeStamp(0.2366847210648323);
    msg.setSource(41451U);
    msg.setSourceEntity(209U);
    msg.setDestination(19130U);
    msg.setDestinationEntity(118U);
    msg.x = 0.204231717214722;
    msg.y = 0.987678073316423;
    msg.z = 0.945738067779946;

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
    msg.setTimeStamp(0.7527659344780919);
    msg.setSource(7916U);
    msg.setSourceEntity(236U);
    msg.setDestination(50501U);
    msg.setDestinationEntity(134U);
    msg.value = 0.22466774077581075;

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
    msg.setTimeStamp(0.002058363689402154);
    msg.setSource(53811U);
    msg.setSourceEntity(226U);
    msg.setDestination(48651U);
    msg.setDestinationEntity(77U);
    msg.value = 0.8778333238729703;

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
    msg.setTimeStamp(0.49563088261937016);
    msg.setSource(50214U);
    msg.setSourceEntity(62U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8379881960601857;

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
    msg.setTimeStamp(0.281000994049609);
    msg.setSource(45617U);
    msg.setSourceEntity(120U);
    msg.setDestination(63299U);
    msg.setDestinationEntity(136U);
    msg.value = 0.73692385586031;

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
    msg.setTimeStamp(0.6268829498489117);
    msg.setSource(20491U);
    msg.setSourceEntity(239U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8625016881664841;

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
    msg.setTimeStamp(0.7847454441420433);
    msg.setSource(6403U);
    msg.setSourceEntity(182U);
    msg.setDestination(7283U);
    msg.setDestinationEntity(134U);
    msg.value = 0.3045544509617808;

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
    msg.setTimeStamp(0.7157707634846769);
    msg.setSource(5325U);
    msg.setSourceEntity(204U);
    msg.setDestination(32944U);
    msg.setDestinationEntity(59U);
    msg.x = 0.22173470222131075;
    msg.y = 0.37081319383741174;
    msg.z = 0.9767274748995719;
    msg.phi = 0.026755164336932147;
    msg.theta = 0.5822003474317445;
    msg.psi = 0.19931017309095056;
    msg.p = 0.380620479056337;
    msg.q = 0.040295536513413666;
    msg.r = 0.4767128931055187;
    msg.u = 0.6645148314788606;
    msg.v = 0.6061507747901486;
    msg.w = 0.4714828285971966;
    msg.bias_psi = 0.7964114854753527;
    msg.bias_r = 0.8060930513505081;

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
    msg.setTimeStamp(0.6258274096536314);
    msg.setSource(51819U);
    msg.setSourceEntity(33U);
    msg.setDestination(44040U);
    msg.setDestinationEntity(33U);
    msg.x = 0.18682393638219152;
    msg.y = 0.5374673838421405;
    msg.z = 0.3931019746406028;
    msg.phi = 0.3856485230911023;
    msg.theta = 0.15370800099682969;
    msg.psi = 0.6093738017773972;
    msg.p = 0.647354730017474;
    msg.q = 0.5338730995281139;
    msg.r = 0.3011945791976631;
    msg.u = 0.49636078997273536;
    msg.v = 0.4803588238176254;
    msg.w = 0.3623773662883505;
    msg.bias_psi = 0.9163633179796579;
    msg.bias_r = 0.06082915153694102;

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
    msg.setTimeStamp(0.35577989088946904);
    msg.setSource(38082U);
    msg.setSourceEntity(156U);
    msg.setDestination(16361U);
    msg.setDestinationEntity(247U);
    msg.x = 0.273470365391443;
    msg.y = 0.1839525708312193;
    msg.z = 0.3216810672275161;
    msg.phi = 0.07050615455202647;
    msg.theta = 0.42989450273402174;
    msg.psi = 0.6446250874718137;
    msg.p = 0.619689282073773;
    msg.q = 0.6158982809051594;
    msg.r = 0.32437983424112704;
    msg.u = 0.9740308524168726;
    msg.v = 0.055020448973137515;
    msg.w = 0.810565515905613;
    msg.bias_psi = 0.9078535700154272;
    msg.bias_r = 0.7350536795765981;

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
    msg.setTimeStamp(0.6816645387919418);
    msg.setSource(53139U);
    msg.setSourceEntity(214U);
    msg.setDestination(27039U);
    msg.setDestinationEntity(237U);
    msg.bias_psi = 0.27651988485312473;
    msg.bias_r = 0.8140154774524933;
    msg.cog = 0.20990344460706145;
    msg.cyaw = 0.9212785136645625;
    msg.lbl_rej_level = 0.7338540566305033;
    msg.gps_rej_level = 0.2795521601088389;
    msg.custom_x = 0.811518840539758;
    msg.custom_y = 0.8920505798423549;
    msg.custom_z = 0.23713080700501732;

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
    msg.setTimeStamp(0.5250684171369652);
    msg.setSource(57964U);
    msg.setSourceEntity(227U);
    msg.setDestination(54796U);
    msg.setDestinationEntity(227U);
    msg.bias_psi = 0.4255515450522884;
    msg.bias_r = 0.6693892746517401;
    msg.cog = 0.06502936107983082;
    msg.cyaw = 0.32126544532659385;
    msg.lbl_rej_level = 0.7049853554991543;
    msg.gps_rej_level = 0.9786510853230448;
    msg.custom_x = 0.7953607383728643;
    msg.custom_y = 0.5641947502413864;
    msg.custom_z = 0.012069444330257029;

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
    msg.setTimeStamp(0.26915371404915145);
    msg.setSource(33538U);
    msg.setSourceEntity(49U);
    msg.setDestination(15278U);
    msg.setDestinationEntity(248U);
    msg.bias_psi = 0.4836740479968169;
    msg.bias_r = 0.2861368319495785;
    msg.cog = 0.8676617323073363;
    msg.cyaw = 0.5443237980376454;
    msg.lbl_rej_level = 0.49162600212260466;
    msg.gps_rej_level = 0.8067573188931737;
    msg.custom_x = 0.3445291780814914;
    msg.custom_y = 0.8224267704966719;
    msg.custom_z = 0.8645444348827548;

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
    msg.setTimeStamp(0.48502373467730975);
    msg.setSource(27416U);
    msg.setSourceEntity(188U);
    msg.setDestination(65148U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.528560579597538;
    msg.reason = 1U;

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
    msg.setTimeStamp(0.16581462439759997);
    msg.setSource(28443U);
    msg.setSourceEntity(13U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(2U);
    msg.utc_time = 0.4449955202048116;
    msg.reason = 191U;

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
    msg.setTimeStamp(0.5360624136001356);
    msg.setSource(27904U);
    msg.setSourceEntity(220U);
    msg.setDestination(9623U);
    msg.setDestinationEntity(74U);
    msg.utc_time = 0.37131886624416754;
    msg.reason = 85U;

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
    msg.setTimeStamp(0.48601295407033185);
    msg.setSource(41060U);
    msg.setSourceEntity(197U);
    msg.setDestination(31196U);
    msg.setDestinationEntity(240U);
    msg.id = 71U;
    msg.range = 0.24333060530058603;
    msg.acceptance = 22U;

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
    msg.setTimeStamp(0.4789195100239966);
    msg.setSource(23664U);
    msg.setSourceEntity(205U);
    msg.setDestination(60191U);
    msg.setDestinationEntity(219U);
    msg.id = 27U;
    msg.range = 0.10389322216594299;
    msg.acceptance = 160U;

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
    msg.setTimeStamp(0.28845322602076207);
    msg.setSource(29554U);
    msg.setSourceEntity(61U);
    msg.setDestination(17146U);
    msg.setDestinationEntity(176U);
    msg.id = 92U;
    msg.range = 0.047073483395341675;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.25906132332844434);
    msg.setSource(28566U);
    msg.setSourceEntity(205U);
    msg.setDestination(55452U);
    msg.setDestinationEntity(98U);
    msg.type = 3U;
    msg.reason = 15U;
    msg.value = 0.8897134411576508;
    msg.timestep = 0.38801351118310634;

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
    msg.setTimeStamp(0.4789041015095621);
    msg.setSource(43192U);
    msg.setSourceEntity(240U);
    msg.setDestination(9713U);
    msg.setDestinationEntity(14U);
    msg.type = 30U;
    msg.reason = 114U;
    msg.value = 0.31264196852381654;
    msg.timestep = 0.7810163837505186;

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
    msg.setTimeStamp(0.7262511236782508);
    msg.setSource(52338U);
    msg.setSourceEntity(253U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(62U);
    msg.type = 162U;
    msg.reason = 80U;
    msg.value = 0.5882781197860693;
    msg.timestep = 0.20223890474358508;

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
    msg.setTimeStamp(0.8882313130068531);
    msg.setSource(35378U);
    msg.setSourceEntity(39U);
    msg.setDestination(20352U);
    msg.setDestinationEntity(120U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZYZMQBBKNETGPGATKBPFNJYUDMJDULRCBKZOCOWPLCUQUFSVCEYMIEPRTFZLVXDVSZSGGKPTMVATYRJVTXOJFZJBZHIXKHDJUIXENKPAJQLIAHGXVPQCKQEXNOAAAEJUAIKDOFWRTISZWSEMXDBMWQVFVRSVLTMRLWOCEWOCYQLRUOUNWIHMHBAQJCSKFOKCTXFYZDLTNXYBIWLDDYRJOEYNUGMGNBLPFHRUCQRINMXHQAYPHHBWSNIFDG");
    tmp_msg_0.lat = 0.7520771848275144;
    tmp_msg_0.lon = 0.6033783389228532;
    tmp_msg_0.depth = 0.5090270557162461;
    tmp_msg_0.query_channel = 222U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 169U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3908626706431215;
    msg.y = 0.9357218210541985;
    msg.var_x = 0.017888275197766923;
    msg.var_y = 0.19750277417987605;
    msg.distance = 0.3756875630722889;

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
    msg.setTimeStamp(0.9968429628274231);
    msg.setSource(13046U);
    msg.setSourceEntity(175U);
    msg.setDestination(42259U);
    msg.setDestinationEntity(140U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HCMATBAQKNFLWIDFSKJWMGBSVFQVCSOQHZRYYREWMMGRXAFSMBUGNSWWPSPYUMUGUFKWLVNICOGEZYNTANDLHWCJRCYQE");
    tmp_msg_0.lat = 0.9369755983704643;
    tmp_msg_0.lon = 0.0164257081096707;
    tmp_msg_0.depth = 0.6433282461978802;
    tmp_msg_0.query_channel = 137U;
    tmp_msg_0.reply_channel = 42U;
    tmp_msg_0.transponder_delay = 3U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.15357309334105396;
    msg.y = 0.08544849416511446;
    msg.var_x = 0.1734708739301677;
    msg.var_y = 0.3759005398975793;
    msg.distance = 0.41803536991822987;

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
    msg.setTimeStamp(0.2744869270212734);
    msg.setSource(27040U);
    msg.setSourceEntity(35U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(207U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XIOLPDRPCQIWHHXREIUPSHEFCVVDNGYLHCYGOTTAPXUBWEYMNLJZLWYMKNWBCEWERUDDPSFQZILMGFWIBKGRQZZEARTAS");
    tmp_msg_0.lat = 0.3014233309580524;
    tmp_msg_0.lon = 0.8120278930291783;
    tmp_msg_0.depth = 0.03007406061148088;
    tmp_msg_0.query_channel = 11U;
    tmp_msg_0.reply_channel = 121U;
    tmp_msg_0.transponder_delay = 6U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.548875578945473;
    msg.y = 0.14974966289864544;
    msg.var_x = 0.21571615165656344;
    msg.var_y = 0.2717631513573636;
    msg.distance = 0.6485412930602709;

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
    msg.setTimeStamp(0.6677489715467066);
    msg.setSource(16791U);
    msg.setSourceEntity(104U);
    msg.setDestination(50726U);
    msg.setDestinationEntity(225U);
    msg.state = 217U;

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
    msg.setTimeStamp(0.6650929600958982);
    msg.setSource(28719U);
    msg.setSourceEntity(50U);
    msg.setDestination(25007U);
    msg.setDestinationEntity(140U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.49401205883118027);
    msg.setSource(13779U);
    msg.setSourceEntity(243U);
    msg.setDestination(56351U);
    msg.setDestinationEntity(219U);
    msg.state = 5U;

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
    msg.setTimeStamp(0.24773858495589274);
    msg.setSource(15635U);
    msg.setSourceEntity(55U);
    msg.setDestination(21378U);
    msg.setDestinationEntity(158U);
    msg.x = 0.08824260781313975;
    msg.y = 0.6162319251435917;
    msg.z = 0.7641864130260699;

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
    msg.setTimeStamp(0.4185178343702318);
    msg.setSource(24889U);
    msg.setSourceEntity(6U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(64U);
    msg.x = 0.21613524644194937;
    msg.y = 0.8078683776943252;
    msg.z = 0.36854210668265097;

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
    msg.setTimeStamp(0.4514413608594926);
    msg.setSource(61496U);
    msg.setSourceEntity(179U);
    msg.setDestination(43250U);
    msg.setDestinationEntity(208U);
    msg.x = 0.6498796761542376;
    msg.y = 0.6799094776859039;
    msg.z = 0.2363336188040598;

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
    msg.setTimeStamp(0.354170585444629);
    msg.setSource(48892U);
    msg.setSourceEntity(240U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(123U);
    msg.va = 0.6730975031986711;
    msg.aoa = 0.9332106686877507;
    msg.ssa = 0.46906418181427734;

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
    msg.setTimeStamp(0.8496345212746603);
    msg.setSource(57380U);
    msg.setSourceEntity(218U);
    msg.setDestination(61118U);
    msg.setDestinationEntity(56U);
    msg.va = 0.6999645624872158;
    msg.aoa = 0.4877008832522204;
    msg.ssa = 0.3108528322636531;

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
    msg.setTimeStamp(0.6139119943979626);
    msg.setSource(25479U);
    msg.setSourceEntity(46U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(85U);
    msg.va = 0.5836355753535591;
    msg.aoa = 0.17616494649645953;
    msg.ssa = 0.6864239117038978;

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
    msg.setTimeStamp(0.004479001414855355);
    msg.setSource(36439U);
    msg.setSourceEntity(106U);
    msg.setDestination(6151U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7978436263880413;

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
    msg.setTimeStamp(0.059058842487672014);
    msg.setSource(27120U);
    msg.setSourceEntity(183U);
    msg.setDestination(21775U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8218234822135883;

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
    msg.setTimeStamp(0.0658766494258175);
    msg.setSource(17714U);
    msg.setSourceEntity(117U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9744067600657234;

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
    msg.setTimeStamp(0.9825048766369768);
    msg.setSource(23074U);
    msg.setSourceEntity(202U);
    msg.setDestination(7047U);
    msg.setDestinationEntity(30U);
    msg.value = 0.10388696593888869;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.8891083521912814);
    msg.setSource(39814U);
    msg.setSourceEntity(80U);
    msg.setDestination(61018U);
    msg.setDestinationEntity(162U);
    msg.value = 0.5903059423682822;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.9027073560742574);
    msg.setSource(57104U);
    msg.setSourceEntity(33U);
    msg.setDestination(3115U);
    msg.setDestinationEntity(155U);
    msg.value = 0.822119999270657;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.19632316559460972);
    msg.setSource(20625U);
    msg.setSourceEntity(26U);
    msg.setDestination(13712U);
    msg.setDestinationEntity(41U);
    msg.value = 0.9814971198134497;
    msg.speed_units = 110U;

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
    msg.setTimeStamp(0.23435296183544163);
    msg.setSource(7548U);
    msg.setSourceEntity(82U);
    msg.setDestination(57793U);
    msg.setDestinationEntity(157U);
    msg.value = 0.19843517969217406;
    msg.speed_units = 88U;

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
    msg.setTimeStamp(0.5451832290493832);
    msg.setSource(49516U);
    msg.setSourceEntity(167U);
    msg.setDestination(20547U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6475643783002852;
    msg.speed_units = 152U;

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
    msg.setTimeStamp(0.1318164273133382);
    msg.setSource(33549U);
    msg.setSourceEntity(223U);
    msg.setDestination(18589U);
    msg.setDestinationEntity(78U);
    msg.value = 0.34244278753341095;

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
    msg.setTimeStamp(0.45383404738463695);
    msg.setSource(41996U);
    msg.setSourceEntity(19U);
    msg.setDestination(39089U);
    msg.setDestinationEntity(154U);
    msg.value = 0.21019227563796394;

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
    msg.setTimeStamp(0.9740604222257949);
    msg.setSource(27402U);
    msg.setSourceEntity(44U);
    msg.setDestination(34736U);
    msg.setDestinationEntity(245U);
    msg.value = 0.6630909925784587;

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
    msg.setTimeStamp(0.9571800694195733);
    msg.setSource(60129U);
    msg.setSourceEntity(127U);
    msg.setDestination(28883U);
    msg.setDestinationEntity(207U);
    msg.value = 0.11427408799122896;

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
    msg.setTimeStamp(0.7574121090198495);
    msg.setSource(42310U);
    msg.setSourceEntity(77U);
    msg.setDestination(11081U);
    msg.setDestinationEntity(239U);
    msg.value = 0.010682655964318943;

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
    msg.setTimeStamp(0.4471044717541677);
    msg.setSource(19348U);
    msg.setSourceEntity(247U);
    msg.setDestination(27290U);
    msg.setDestinationEntity(116U);
    msg.value = 0.38953768684051426;

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
    msg.setTimeStamp(0.29328805124714097);
    msg.setSource(43269U);
    msg.setSourceEntity(77U);
    msg.setDestination(38215U);
    msg.setDestinationEntity(46U);
    msg.value = 0.16977732136328294;

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
    msg.setTimeStamp(0.7377498016381479);
    msg.setSource(19415U);
    msg.setSourceEntity(128U);
    msg.setDestination(7099U);
    msg.setDestinationEntity(80U);
    msg.value = 0.3376814007392197;

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
    msg.setTimeStamp(0.5026138543363885);
    msg.setSource(51056U);
    msg.setSourceEntity(123U);
    msg.setDestination(18404U);
    msg.setDestinationEntity(98U);
    msg.value = 0.26414846332884856;

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
    msg.setTimeStamp(0.46252204755891346);
    msg.setSource(51408U);
    msg.setSourceEntity(4U);
    msg.setDestination(45403U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 4274662379U;
    msg.start_lat = 0.1531850584800466;
    msg.start_lon = 0.5531450375903516;
    msg.start_z = 0.11114551843364018;
    msg.start_z_units = 91U;
    msg.end_lat = 0.8215331710102454;
    msg.end_lon = 0.6090520177098883;
    msg.end_z = 0.4764509829938899;
    msg.end_z_units = 203U;
    msg.speed = 0.4365830284843045;
    msg.speed_units = 93U;
    msg.lradius = 0.4061522661827611;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.14456593817499852);
    msg.setSource(18760U);
    msg.setSourceEntity(136U);
    msg.setDestination(57153U);
    msg.setDestinationEntity(30U);
    msg.path_ref = 3421572034U;
    msg.start_lat = 0.02645211729828645;
    msg.start_lon = 0.624806723017625;
    msg.start_z = 0.644550592547492;
    msg.start_z_units = 140U;
    msg.end_lat = 0.2354976251529911;
    msg.end_lon = 0.8805205067302855;
    msg.end_z = 0.6900515141512834;
    msg.end_z_units = 10U;
    msg.speed = 0.8120286802444808;
    msg.speed_units = 150U;
    msg.lradius = 0.5761584676518723;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.157758585393995);
    msg.setSource(20730U);
    msg.setSourceEntity(190U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 377680995U;
    msg.start_lat = 0.6885844211930177;
    msg.start_lon = 0.1075975327523293;
    msg.start_z = 0.9893681955596815;
    msg.start_z_units = 221U;
    msg.end_lat = 0.7203427103339454;
    msg.end_lon = 0.026476821446646648;
    msg.end_z = 0.9781000534086209;
    msg.end_z_units = 223U;
    msg.speed = 0.41214457502978685;
    msg.speed_units = 32U;
    msg.lradius = 0.479303367523221;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.4366120345894956);
    msg.setSource(22992U);
    msg.setSourceEntity(102U);
    msg.setDestination(56790U);
    msg.setDestinationEntity(42U);
    msg.x = 0.6858067833829103;
    msg.y = 0.3227010714594718;
    msg.z = 0.708801307938095;
    msg.k = 0.7273107790688533;
    msg.m = 0.5139514704090921;
    msg.n = 0.11992835070103136;
    msg.flags = 0U;

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
    msg.setTimeStamp(0.26566948289341763);
    msg.setSource(36474U);
    msg.setSourceEntity(62U);
    msg.setDestination(57157U);
    msg.setDestinationEntity(143U);
    msg.x = 0.5637684019364387;
    msg.y = 0.5454455640375871;
    msg.z = 0.7911966995945421;
    msg.k = 0.9150458800048125;
    msg.m = 0.9034585067079852;
    msg.n = 0.39447492697250164;
    msg.flags = 121U;

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
    msg.setTimeStamp(0.2143951941828165);
    msg.setSource(51986U);
    msg.setSourceEntity(154U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(254U);
    msg.x = 0.9306533582527722;
    msg.y = 0.35875374801179694;
    msg.z = 0.38719300643511056;
    msg.k = 0.04804203282329855;
    msg.m = 0.1436698384399988;
    msg.n = 0.2557326293581522;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.5540068057118085);
    msg.setSource(3840U);
    msg.setSourceEntity(156U);
    msg.setDestination(62065U);
    msg.setDestinationEntity(142U);
    msg.value = 0.49095974502835804;

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
    msg.setTimeStamp(0.4298663760533018);
    msg.setSource(34092U);
    msg.setSourceEntity(18U);
    msg.setDestination(7495U);
    msg.setDestinationEntity(180U);
    msg.value = 0.4598850581416075;

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
    msg.setTimeStamp(0.05584281860562834);
    msg.setSource(7646U);
    msg.setSourceEntity(110U);
    msg.setDestination(54075U);
    msg.setDestinationEntity(92U);
    msg.value = 0.3194079548645087;

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
    msg.setTimeStamp(0.6217031735678485);
    msg.setSource(25991U);
    msg.setSourceEntity(229U);
    msg.setDestination(22500U);
    msg.setDestinationEntity(228U);
    msg.u = 0.4175089775473162;
    msg.v = 0.6193963766804337;
    msg.w = 0.039015571761070844;
    msg.p = 0.7500824642473445;
    msg.q = 0.0013211096938221534;
    msg.r = 0.22424105236805902;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.6411590833720998);
    msg.setSource(29335U);
    msg.setSourceEntity(225U);
    msg.setDestination(51295U);
    msg.setDestinationEntity(197U);
    msg.u = 0.4263137502151221;
    msg.v = 0.5952676637101155;
    msg.w = 0.997439759934296;
    msg.p = 0.4266177066463295;
    msg.q = 0.2197030998463616;
    msg.r = 0.3256816595215565;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.5770749440392019);
    msg.setSource(35763U);
    msg.setSourceEntity(154U);
    msg.setDestination(39325U);
    msg.setDestinationEntity(50U);
    msg.u = 0.9961369548987901;
    msg.v = 0.4845287001661862;
    msg.w = 0.8932908942415518;
    msg.p = 0.3907964947194338;
    msg.q = 0.42987089633088793;
    msg.r = 0.3711300482793489;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.8245406303551405);
    msg.setSource(58520U);
    msg.setSourceEntity(182U);
    msg.setDestination(57999U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 420815905U;
    msg.start_lat = 0.5524519586211267;
    msg.start_lon = 0.8765337125827066;
    msg.start_z = 0.37374303766271544;
    msg.start_z_units = 171U;
    msg.end_lat = 0.5697812796534494;
    msg.end_lon = 0.6021654788861277;
    msg.end_z = 0.26351799987999025;
    msg.end_z_units = 18U;
    msg.lradius = 0.7453846999681466;
    msg.flags = 172U;
    msg.x = 0.9252651079774356;
    msg.y = 0.8957669488076525;
    msg.z = 0.2575864676955394;
    msg.vx = 0.07850690425631923;
    msg.vy = 0.8218590560638529;
    msg.vz = 0.037051099148839306;
    msg.course_error = 0.9630331457233384;
    msg.eta = 12547U;

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
    msg.setTimeStamp(0.7860138110941659);
    msg.setSource(42158U);
    msg.setSourceEntity(173U);
    msg.setDestination(2142U);
    msg.setDestinationEntity(110U);
    msg.path_ref = 2163065451U;
    msg.start_lat = 0.403334577264992;
    msg.start_lon = 0.09562692624437741;
    msg.start_z = 0.5092622008705727;
    msg.start_z_units = 63U;
    msg.end_lat = 0.5482408101738061;
    msg.end_lon = 0.9457572412693418;
    msg.end_z = 0.5723011062858229;
    msg.end_z_units = 142U;
    msg.lradius = 0.8769034161051095;
    msg.flags = 20U;
    msg.x = 0.2325729165166378;
    msg.y = 0.08562268008863716;
    msg.z = 0.7406859631022015;
    msg.vx = 0.9647321665731274;
    msg.vy = 0.8131678893782497;
    msg.vz = 0.6025927912214386;
    msg.course_error = 0.5345185089395487;
    msg.eta = 56015U;

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
    msg.setTimeStamp(0.19085364816677441);
    msg.setSource(63535U);
    msg.setSourceEntity(163U);
    msg.setDestination(27064U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 264049465U;
    msg.start_lat = 0.8654722413814574;
    msg.start_lon = 0.10508881755611343;
    msg.start_z = 0.3254845536978399;
    msg.start_z_units = 6U;
    msg.end_lat = 0.04046625377578206;
    msg.end_lon = 0.7552951069139978;
    msg.end_z = 0.8364954297859534;
    msg.end_z_units = 81U;
    msg.lradius = 0.5264447506146629;
    msg.flags = 115U;
    msg.x = 0.3611919593959836;
    msg.y = 0.21258938302825348;
    msg.z = 0.5104285412967833;
    msg.vx = 0.37265367069134525;
    msg.vy = 0.8053911813590634;
    msg.vz = 0.7796449644383854;
    msg.course_error = 0.5812888640831463;
    msg.eta = 18707U;

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
    msg.setTimeStamp(0.47717562334460617);
    msg.setSource(13435U);
    msg.setSourceEntity(234U);
    msg.setDestination(3646U);
    msg.setDestinationEntity(53U);
    msg.k = 0.582014217283332;
    msg.m = 0.5967105912856179;
    msg.n = 0.9152112814198472;

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
    msg.setTimeStamp(0.9604977469357103);
    msg.setSource(3514U);
    msg.setSourceEntity(24U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(109U);
    msg.k = 0.9236022981883248;
    msg.m = 0.47270597482838994;
    msg.n = 0.7442830911740858;

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
    msg.setTimeStamp(0.8939815405862556);
    msg.setSource(43432U);
    msg.setSourceEntity(71U);
    msg.setDestination(21732U);
    msg.setDestinationEntity(215U);
    msg.k = 0.11194279268701235;
    msg.m = 0.13659745735429885;
    msg.n = 0.9903790232712055;

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
    msg.setTimeStamp(0.6909171904261877);
    msg.setSource(1491U);
    msg.setSourceEntity(252U);
    msg.setDestination(28079U);
    msg.setDestinationEntity(140U);
    msg.p = 0.2619955166005479;
    msg.i = 0.027721754991663627;
    msg.d = 0.8132461621741033;
    msg.a = 0.15733336643731588;

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
    msg.setTimeStamp(0.30782257644598243);
    msg.setSource(1141U);
    msg.setSourceEntity(249U);
    msg.setDestination(24543U);
    msg.setDestinationEntity(2U);
    msg.p = 0.3124297099297605;
    msg.i = 0.5970604214601241;
    msg.d = 0.8755110389728611;
    msg.a = 0.48692615011863416;

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
    msg.setTimeStamp(0.737807688004006);
    msg.setSource(28966U);
    msg.setSourceEntity(190U);
    msg.setDestination(9693U);
    msg.setDestinationEntity(148U);
    msg.p = 0.7209955681787724;
    msg.i = 0.24629269956376554;
    msg.d = 0.8855441000260504;
    msg.a = 0.723137938560268;

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
    msg.setTimeStamp(0.5663192992423884);
    msg.setSource(51438U);
    msg.setSourceEntity(192U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(240U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.4973933328289518);
    msg.setSource(12015U);
    msg.setSourceEntity(162U);
    msg.setDestination(38721U);
    msg.setDestinationEntity(222U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.8002300901061111);
    msg.setSource(10777U);
    msg.setSourceEntity(218U);
    msg.setDestination(59127U);
    msg.setDestinationEntity(116U);
    msg.op = 142U;

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
    msg.setTimeStamp(0.7046132337167087);
    msg.setSource(23739U);
    msg.setSourceEntity(176U);
    msg.setDestination(40119U);
    msg.setDestinationEntity(14U);
    msg.x = 0.5144630448705576;
    msg.y = 0.9462622067321019;
    msg.z = 0.2630086894609789;
    msg.vx = 0.33486774048295065;
    msg.vy = 0.6744284668465619;
    msg.vz = 0.5508943919610632;
    msg.ax = 0.15311674646726747;
    msg.ay = 0.9057443719765015;
    msg.az = 0.9217269241410511;
    msg.flags = 54930U;

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
    msg.setTimeStamp(0.8317660555596443);
    msg.setSource(50469U);
    msg.setSourceEntity(144U);
    msg.setDestination(19687U);
    msg.setDestinationEntity(247U);
    msg.x = 0.5103772334613886;
    msg.y = 0.967091895236931;
    msg.z = 0.06998555603864853;
    msg.vx = 0.3308377545430601;
    msg.vy = 0.6460112931721204;
    msg.vz = 0.820695792218797;
    msg.ax = 0.07279101784838715;
    msg.ay = 0.8082296859153596;
    msg.az = 0.733535284605616;
    msg.flags = 27317U;

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
    msg.setTimeStamp(0.3692819873505445);
    msg.setSource(33327U);
    msg.setSourceEntity(89U);
    msg.setDestination(56642U);
    msg.setDestinationEntity(188U);
    msg.x = 0.7335462998978384;
    msg.y = 0.2543694370387186;
    msg.z = 0.20546108160715026;
    msg.vx = 0.40659001381578286;
    msg.vy = 0.04066650564309415;
    msg.vz = 0.2531813479792776;
    msg.ax = 0.14930218442801613;
    msg.ay = 0.12913337647707923;
    msg.az = 0.15423022915005213;
    msg.flags = 1473U;

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
    msg.setTimeStamp(0.44986997830296005);
    msg.setSource(14163U);
    msg.setSourceEntity(76U);
    msg.setDestination(11017U);
    msg.setDestinationEntity(150U);
    msg.value = 0.516288495349039;

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
    msg.setTimeStamp(0.18178026015081195);
    msg.setSource(21309U);
    msg.setSourceEntity(45U);
    msg.setDestination(6542U);
    msg.setDestinationEntity(11U);
    msg.value = 0.13304093564072317;

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
    msg.setTimeStamp(0.2229144133564066);
    msg.setSource(33784U);
    msg.setSourceEntity(29U);
    msg.setDestination(12648U);
    msg.setDestinationEntity(147U);
    msg.value = 0.6782363858598343;

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
    msg.setTimeStamp(0.443938344404048);
    msg.setSource(16090U);
    msg.setSourceEntity(28U);
    msg.setDestination(62248U);
    msg.setDestinationEntity(114U);
    msg.timeout = 43059U;
    msg.lat = 0.5476217803710393;
    msg.lon = 0.29532261432662854;
    msg.z = 0.7111468270186818;
    msg.z_units = 214U;
    msg.speed = 0.2672485184799994;
    msg.speed_units = 130U;
    msg.roll = 0.7713454000770689;
    msg.pitch = 0.6058500855413377;
    msg.yaw = 0.2032214654515585;
    msg.custom.assign("ZAHHIKRLLTLIJEMEXMQPBSBLZVPGEKFZICNYWTZLPGYNESITERGUSKMVPGFMNDDHYXSUWGIFUKDJSHKBJEWORVHQTOUAKQQSO");

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
    msg.setTimeStamp(0.8374763569624994);
    msg.setSource(60964U);
    msg.setSourceEntity(114U);
    msg.setDestination(22741U);
    msg.setDestinationEntity(101U);
    msg.timeout = 45773U;
    msg.lat = 0.079936597595475;
    msg.lon = 0.30116382102477346;
    msg.z = 0.18200440350865854;
    msg.z_units = 237U;
    msg.speed = 0.365311248144884;
    msg.speed_units = 71U;
    msg.roll = 0.7374776155681771;
    msg.pitch = 0.15427277886758084;
    msg.yaw = 0.8310702558510681;
    msg.custom.assign("KJQVNAKFWZSTMXCSIUYEGBCOZLOBOYSEZYZHJOUPBCVHHYXOCRMXAWDCRTUXHTIUASJXUNMPVJVZPQ");

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
    msg.setTimeStamp(0.6739050188239991);
    msg.setSource(16438U);
    msg.setSourceEntity(96U);
    msg.setDestination(36791U);
    msg.setDestinationEntity(162U);
    msg.timeout = 55413U;
    msg.lat = 0.2318892921698571;
    msg.lon = 0.14209304566967706;
    msg.z = 0.5214732393162769;
    msg.z_units = 22U;
    msg.speed = 0.8301115673319492;
    msg.speed_units = 221U;
    msg.roll = 0.03916626710286386;
    msg.pitch = 0.27811530017941566;
    msg.yaw = 0.8139477525289208;
    msg.custom.assign("FQSTHYGUJEZOXISRXZNPGXINOLGKSZJNMWMRVHCBQMIOYCSTJQALROLHIVNFAQNCKNUMXWABYRXJVBXBUXLRCETDVHQIKXPCDSIHKKFCBWCESYDVPDWRFOCTULGZBJVKNRSBCPLPSXYNUKGJAGMZKBZWEXIVAEOQOTPEJMJVUAMQTPWRZFIHMFIMAPTTLESZHFJDZITLUQLHUFYDCGWPEQBHFKZQTJDWEYSYABGMDPN");

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
    msg.setTimeStamp(0.05053743752326201);
    msg.setSource(53506U);
    msg.setSourceEntity(12U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(86U);
    msg.timeout = 34844U;
    msg.lat = 0.32950993181379695;
    msg.lon = 0.12274886594423629;
    msg.z = 0.6847102967591759;
    msg.z_units = 216U;
    msg.speed = 0.776945336256019;
    msg.speed_units = 242U;
    msg.duration = 13788U;
    msg.radius = 0.7255253672695763;
    msg.flags = 109U;
    msg.custom.assign("MALZMOSGLWAOLAKZADMONEHBHSSVJQDDCESXRZGHKLDKOVXYLKSJUYWALHNEWDIHURCQGJRWQBJYSKEPIDCSBDBQDGEGEIHXLYDX");

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
    msg.setTimeStamp(0.12368941133556022);
    msg.setSource(53360U);
    msg.setSourceEntity(78U);
    msg.setDestination(21481U);
    msg.setDestinationEntity(159U);
    msg.timeout = 56654U;
    msg.lat = 0.48043989146051147;
    msg.lon = 0.004361789709605435;
    msg.z = 0.5476928396138917;
    msg.z_units = 178U;
    msg.speed = 0.04221711503051628;
    msg.speed_units = 114U;
    msg.duration = 1151U;
    msg.radius = 0.9999459283596107;
    msg.flags = 149U;
    msg.custom.assign("JVOSDKLEJBQMICYICBSKZJYIRINORYXPWRQKHWQCFSREKLWTNFZUFAUYHPVDWIVSSVEBVAWFKMF");

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
    msg.setTimeStamp(0.7948463082204089);
    msg.setSource(35536U);
    msg.setSourceEntity(229U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(162U);
    msg.timeout = 52206U;
    msg.lat = 0.1667346652783891;
    msg.lon = 0.7000186976967973;
    msg.z = 0.07033075411372336;
    msg.z_units = 178U;
    msg.speed = 0.3992942682545031;
    msg.speed_units = 57U;
    msg.duration = 51695U;
    msg.radius = 0.9676384665382649;
    msg.flags = 52U;
    msg.custom.assign("WBDLLRIBDFECRZRHGXBEIXYJHJIUJZYFUWPDKYASN");

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
    msg.setTimeStamp(0.5144662739990967);
    msg.setSource(15625U);
    msg.setSourceEntity(101U);
    msg.setDestination(41656U);
    msg.setDestinationEntity(229U);
    msg.custom.assign("HDNGTJRTCVMSYDBBVPUFULXKQRLMCPXLHWPENZTRITXYSBOYRCCWEMYOHSYGFSSOED");

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
    msg.setTimeStamp(0.29471079798121746);
    msg.setSource(12378U);
    msg.setSourceEntity(167U);
    msg.setDestination(65341U);
    msg.setDestinationEntity(9U);
    msg.custom.assign("NESIFNPXOLGWHBHRRQSJUDWLFAAVAKLARPIDVHZGVAWBBAKMFOXXILIORUORIMJYJFDZXLOGPIVCKCOXKJNODVHBRKIRJDJL");

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
    msg.setTimeStamp(0.5451431436497707);
    msg.setSource(152U);
    msg.setSourceEntity(87U);
    msg.setDestination(23964U);
    msg.setDestinationEntity(10U);
    msg.custom.assign("RTGOVNECTOUXQIHSVQGIGZIUEKGFYUBIWUOHPTXDURQTUCJBLXYM");

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
    msg.setTimeStamp(0.17580384239639202);
    msg.setSource(58442U);
    msg.setSourceEntity(228U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(111U);
    msg.timeout = 28406U;
    msg.lat = 0.612736911104781;
    msg.lon = 0.988412221070239;
    msg.z = 0.6961779833898021;
    msg.z_units = 183U;
    msg.duration = 24073U;
    msg.speed = 0.32402302344618816;
    msg.speed_units = 224U;
    msg.type = 109U;
    msg.radius = 0.6361857519353372;
    msg.length = 0.3437713340044929;
    msg.bearing = 0.20508875736466015;
    msg.direction = 121U;
    msg.custom.assign("YQUIWMIQOCWVBAQPJWLHPMONGULGWKXKRPSFOKCXFVTFOIGBNPEPQABTKXQHAPFAYGZELBJNJVPZRGMZDTYHDYXECVOSNWUAADUGVRSSJBQRASSYUDEDBNFLFBOTNECVECYZI");

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
    msg.setTimeStamp(0.10297007014276927);
    msg.setSource(22753U);
    msg.setSourceEntity(50U);
    msg.setDestination(65100U);
    msg.setDestinationEntity(151U);
    msg.timeout = 50405U;
    msg.lat = 0.7103591809842514;
    msg.lon = 0.2873392450145529;
    msg.z = 0.07338724823661913;
    msg.z_units = 51U;
    msg.duration = 5888U;
    msg.speed = 0.2725525691348418;
    msg.speed_units = 148U;
    msg.type = 154U;
    msg.radius = 0.2057499997517398;
    msg.length = 0.7402942345688523;
    msg.bearing = 0.12498583801311447;
    msg.direction = 17U;
    msg.custom.assign("DMQCXMXEKJKGNUMESWQOFOLPNDLOHPFMTWEFGYAZBGEKRVBYYRRQUZHBIWDYTRXMKRTPZMAGGFBZBDGCLJNZSPCA");

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
    msg.setTimeStamp(0.8532144743021474);
    msg.setSource(37283U);
    msg.setSourceEntity(253U);
    msg.setDestination(45519U);
    msg.setDestinationEntity(212U);
    msg.timeout = 25864U;
    msg.lat = 0.9388246288249117;
    msg.lon = 0.7247481415283769;
    msg.z = 0.9790232997209094;
    msg.z_units = 109U;
    msg.duration = 24125U;
    msg.speed = 0.8158168355572966;
    msg.speed_units = 252U;
    msg.type = 127U;
    msg.radius = 0.7384861779952318;
    msg.length = 0.8770202440556906;
    msg.bearing = 0.6722478176468156;
    msg.direction = 98U;
    msg.custom.assign("FNJXUFLKUDRGFQTXHOVRJSRCZMWGMBFWPCNDFKYMJOQVPKHCQNUDTVTDDONLBIHABMAFJWHRHENEHNJPXMHTLLFCCZKKWRIEAAYBEWCNAYUG");

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
    msg.setTimeStamp(0.7356844866475681);
    msg.setSource(53864U);
    msg.setSourceEntity(241U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(88U);
    msg.duration = 36541U;
    msg.custom.assign("IRNDUFTMYACYXUYYSQBNRXKVWDQWYUBHLJXWZPDULRGVUFBFNGEQLPAVRMWQBDDTOPLSFPVKKZUPTPQEJANWSORQCPIRSAWIJCHBKDDDMAHBFAEFDVGIJUGZATEECIOYQL");

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
    msg.setTimeStamp(0.6733947339513899);
    msg.setSource(47502U);
    msg.setSourceEntity(164U);
    msg.setDestination(52033U);
    msg.setDestinationEntity(153U);
    msg.duration = 20891U;
    msg.custom.assign("ITUMWRHVNNZGKGCTOJXEKEQPEAMWQNQLEDBOAZRISXPESDFWRWSSVKCVZAFQSBFOTYGVTLJDVUQBFAYWZJRTQSBLXYPZLQKIOCTFDUHOGHCDZPLNHMEZJDUXREXUM");

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
    msg.setTimeStamp(0.006935751205601304);
    msg.setSource(44254U);
    msg.setSourceEntity(60U);
    msg.setDestination(14801U);
    msg.setDestinationEntity(197U);
    msg.duration = 11043U;
    msg.custom.assign("CMZHYXGBQVTGGZNEVGJIDUIFFMJPAWWIUGBWFLKNSPDQCOBHXRSWLMQCOIYECEGOXLAXJNNUAAEYMYQEJMAWTXMRPMHRKCTSPSUPWKVSFSFMAAQ");

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
    msg.setTimeStamp(0.5573504827232514);
    msg.setSource(13252U);
    msg.setSourceEntity(24U);
    msg.setDestination(20607U);
    msg.setDestinationEntity(91U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.3767583645285366;
    tmp_msg_0.z_units = 131U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51664U;
    msg.custom.assign("CUSXFNELONDHOALEUOSBHHHFHNJNTAZUBYWLRQLIFECLCDWDPGHLKVORMMXIBFIWAVLSIKBNGXCBNHNUFMZPBJDBZFFKKJAYBJSCMADNQASMVLXXCQSKUOTUCYXJCGOKFGUPQ");

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
    msg.setTimeStamp(0.020735531907673188);
    msg.setSource(13591U);
    msg.setSourceEntity(84U);
    msg.setDestination(61142U);
    msg.setDestinationEntity(186U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7569520384543154;
    tmp_msg_0.speed_units = 171U;
    msg.control.set(tmp_msg_0);
    msg.duration = 48616U;
    msg.custom.assign("TRDCLHELWDEKESXZDRBNDJCGWWKZNHWPCUKERHTRPLQKNBNOFSQLUTYQEENZYGWFFXMHAPXPNLZMUIGLZJEBQCJGJPPTLWYTXNHOSXFUTKQPRMDVOWIYXBBJEHKHSBLSQABJRVVUAOMPYVKSIVZOYINOHIGJDCGIJGHYHMYDQYISJFGMRWANIFUBSLDNVTWACZRACI");

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
    msg.setTimeStamp(0.6334848753343029);
    msg.setSource(12759U);
    msg.setSourceEntity(111U);
    msg.setDestination(46821U);
    msg.setDestinationEntity(182U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6147746692550133;
    msg.control.set(tmp_msg_0);
    msg.duration = 7174U;
    msg.custom.assign("NHLUMWKTUUKQURHVQLGMPJZYTQERKHQJESQLXDSJOSWNHOVPVHUNDIWCNOZAPLJRBHBTBHRFKOVOBMHIFDUVZJAOGZSPSEIAIOCZTKIXSIQKNMNTAAYBESIYWCSKYRHTEMQKCSXIOGXGLBDUYLIUEAXFDJMCDRQWATRCWNGVFRPLTYUAIZVDRQREJNPDMJPXHDEVGMFMTOAGZJFOPLTNXBFXJBBMEYGKUCLVWLGW");

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
    msg.setTimeStamp(0.3645566340997132);
    msg.setSource(25979U);
    msg.setSourceEntity(192U);
    msg.setDestination(18714U);
    msg.setDestinationEntity(233U);
    msg.timeout = 30007U;
    msg.lat = 0.7579245625274862;
    msg.lon = 0.4009376506350276;
    msg.z = 0.3253672205991647;
    msg.z_units = 122U;
    msg.speed = 0.8999134232147057;
    msg.speed_units = 203U;
    msg.bearing = 0.9429960226392821;
    msg.cross_angle = 0.6642589849150743;
    msg.width = 0.14839751277389313;
    msg.length = 0.46402180300229223;
    msg.hstep = 0.1244706411061185;
    msg.coff = 139U;
    msg.alternation = 105U;
    msg.flags = 79U;
    msg.custom.assign("AWHOBGOIWDWFPUDAJLIXFLJQRTMBSIRIGLCNNEJCEJTGCFVPUXZRCTSNVIGLTXDDWVBNYCLSIGONMRZTQYLHOCOHSS");

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
    msg.setTimeStamp(0.3665054308978617);
    msg.setSource(56259U);
    msg.setSourceEntity(13U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(14U);
    msg.timeout = 37419U;
    msg.lat = 0.2355941590266779;
    msg.lon = 0.5579350275427274;
    msg.z = 0.9662489491026375;
    msg.z_units = 205U;
    msg.speed = 0.17432311434993497;
    msg.speed_units = 249U;
    msg.bearing = 0.68340661841894;
    msg.cross_angle = 0.4733824737378953;
    msg.width = 0.174903971537547;
    msg.length = 0.8651364003663227;
    msg.hstep = 0.9782027938942393;
    msg.coff = 149U;
    msg.alternation = 140U;
    msg.flags = 133U;
    msg.custom.assign("OXWRKUMERIYHIVQQGSFBNPLCLODTFLHDRVAFUASDGBUEMJFVHQZJWLBLAZVTZCGBDCEJCWOVRKTXPIIOLNTWFMSUTTKIVYVSJMSVFKXHJDPTAVKXEXNNSZAJQQRRABNUJCKQZGQUINBSXENOPNFHGCUYWWCSZXTQGHOMMBYRGRRJRPPYSYGUFOVPGOKJDPZEHDLOYMJZNWZTWLEPSYLBLKCHCFECYOUDHMDWIWNIITKYAEDKQAEH");

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
    msg.setTimeStamp(0.7901502641876742);
    msg.setSource(17787U);
    msg.setSourceEntity(43U);
    msg.setDestination(13111U);
    msg.setDestinationEntity(83U);
    msg.timeout = 25990U;
    msg.lat = 0.1634420300102477;
    msg.lon = 0.9242731691491088;
    msg.z = 0.5631652040545265;
    msg.z_units = 34U;
    msg.speed = 0.8856278199251514;
    msg.speed_units = 23U;
    msg.bearing = 0.2703698070889293;
    msg.cross_angle = 0.22095004387831751;
    msg.width = 0.37006354693790555;
    msg.length = 0.4624662989786009;
    msg.hstep = 0.7054169406658868;
    msg.coff = 103U;
    msg.alternation = 149U;
    msg.flags = 141U;
    msg.custom.assign("GPDIHXJVBWRCKXHOLJXZONOKUOXEAUCYTWFIPNF");

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
    msg.setTimeStamp(0.04697265748316837);
    msg.setSource(29310U);
    msg.setSourceEntity(2U);
    msg.setDestination(59334U);
    msg.setDestinationEntity(137U);
    msg.timeout = 48994U;
    msg.lat = 0.9116885815475367;
    msg.lon = 0.9449548042109274;
    msg.z = 0.2273377044917948;
    msg.z_units = 254U;
    msg.speed = 0.5597357612160654;
    msg.speed_units = 195U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3349581384347694;
    tmp_msg_0.y = 0.5359213156142804;
    tmp_msg_0.z = 0.4168201959878527;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KPIPLFWNFHZJBXQZYNHJEEVRCUXTQBB");

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
    msg.setTimeStamp(0.590298320850704);
    msg.setSource(34712U);
    msg.setSourceEntity(79U);
    msg.setDestination(43262U);
    msg.setDestinationEntity(4U);
    msg.timeout = 2667U;
    msg.lat = 0.7722269195467243;
    msg.lon = 0.4031470077873208;
    msg.z = 0.25892597831994957;
    msg.z_units = 233U;
    msg.speed = 0.6265348793891952;
    msg.speed_units = 222U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4368666678970319;
    tmp_msg_0.y = 0.4092458826640665;
    tmp_msg_0.z = 0.041531399698023774;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IBKBYHHLVHHXVQBRISNGQSSLEBZIWRPYBUXTAPCOEEFVJWVXLEIUOWYHNKCNVNJRPQOIDYAOZYIIZXTVMZGJVORUUFCFYKFQWTWGKCQJGRPGUSDMZTHMMLFWKIPBUSVXJSKAAFVEOMDAYIEZMMDZTXAYHCSADQXWUBVLDHTSWRFEZPULKTEOPRGQMWENGZQPJFPCGXNHNQSASETNFLDJRXINABJMFNGDRDJCUHCLXKOTPDOLAZBRYTQCU");

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
    msg.setTimeStamp(0.8191801000123125);
    msg.setSource(47249U);
    msg.setSourceEntity(161U);
    msg.setDestination(49465U);
    msg.setDestinationEntity(101U);
    msg.timeout = 61309U;
    msg.lat = 0.02780359805207777;
    msg.lon = 0.4034233575079693;
    msg.z = 0.2842262044428312;
    msg.z_units = 244U;
    msg.speed = 0.9373910855202503;
    msg.speed_units = 135U;
    msg.custom.assign("BDDIDIJTSRPLTKZIMLUXBQNKAQLSYZLPYAMTUWWKHZCXTCPROYQCOQFTLEGUUCRTKNMOBSSUMNSOREALFMYTEXJNVVHBHLLOKVHEGYQJEAXKHDNVKFMWRUFFBXCDJGADRNOOJXXOQERAZREIF");

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
    msg.setTimeStamp(0.5001923620330123);
    msg.setSource(10437U);
    msg.setSourceEntity(192U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(123U);
    msg.x = 0.8110594032612286;
    msg.y = 0.22384382388604984;
    msg.z = 0.3886398174452763;

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
    msg.setTimeStamp(0.42799810245210357);
    msg.setSource(14726U);
    msg.setSourceEntity(86U);
    msg.setDestination(10365U);
    msg.setDestinationEntity(3U);
    msg.x = 0.39875260534212686;
    msg.y = 0.3168619017197588;
    msg.z = 0.39172762654254534;

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
    msg.setTimeStamp(0.5572583913253266);
    msg.setSource(50793U);
    msg.setSourceEntity(230U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(48U);
    msg.x = 0.3678233441787171;
    msg.y = 0.2961790269125427;
    msg.z = 0.16209789048007717;

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
    msg.setTimeStamp(0.7355201230069726);
    msg.setSource(31598U);
    msg.setSourceEntity(244U);
    msg.setDestination(10103U);
    msg.setDestinationEntity(15U);
    msg.timeout = 51362U;
    msg.lat = 0.4761225529990808;
    msg.lon = 0.018320175391230764;
    msg.z = 0.5250759786154534;
    msg.z_units = 154U;
    msg.amplitude = 0.07030194001226664;
    msg.pitch = 0.8583151307386935;
    msg.speed = 0.6687062014243069;
    msg.speed_units = 130U;
    msg.custom.assign("HYKUNYRJTPAPPQOBJTEBCXHLMZWAFIWULSQQUZTDASNHCOSWKUICNGQWYCCGJLOLKVXIFYVTIJRUEDOZSAZLWQWEWFHCMXMKERIPXVZFAVQCMSOYBSRELBIQEV");

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
    msg.setTimeStamp(0.8663888652376074);
    msg.setSource(14975U);
    msg.setSourceEntity(18U);
    msg.setDestination(63882U);
    msg.setDestinationEntity(91U);
    msg.timeout = 52468U;
    msg.lat = 0.4089065143469658;
    msg.lon = 0.031068255773539666;
    msg.z = 0.7863270166042675;
    msg.z_units = 110U;
    msg.amplitude = 0.07939912983579911;
    msg.pitch = 0.4033461227891789;
    msg.speed = 0.41965557315437163;
    msg.speed_units = 220U;
    msg.custom.assign("XGAAUQSPLQFVIHKSPOAIGHPKVQYHYFXHOUNRJPHORXOBBWERKWVSIWGNFROKLPDWIDLAQ");

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
    msg.setTimeStamp(0.011550264355668749);
    msg.setSource(44993U);
    msg.setSourceEntity(106U);
    msg.setDestination(52623U);
    msg.setDestinationEntity(167U);
    msg.timeout = 45485U;
    msg.lat = 0.5761714523482695;
    msg.lon = 0.6327426426175468;
    msg.z = 0.6610910638975711;
    msg.z_units = 153U;
    msg.amplitude = 0.2241835265883637;
    msg.pitch = 0.7731610595359264;
    msg.speed = 0.4220724925628174;
    msg.speed_units = 183U;
    msg.custom.assign("JPOGTKRJQMRBICPXKDNLFEJSWNXIFIEVYWWCDNVMTKALDPCUIAJFLEOUYMBKWTKZPSVAAUKESOEFZSAHWXWSWNGKXNGKHHUIUZRJSYBJZPWLVGNXUBHSDXDIGSWOTHBGLIRLPDJQRVJRPAZLMDUVOORCBJFVOSQYHCGMKBEDIRJCXZYPPGQVHQCVVFQLFRO");

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
    msg.setTimeStamp(0.03966485292198252);
    msg.setSource(41156U);
    msg.setSourceEntity(10U);
    msg.setDestination(16415U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.10303383140467448);
    msg.setSource(42939U);
    msg.setSourceEntity(237U);
    msg.setDestination(829U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.23612033506327657);
    msg.setSource(2966U);
    msg.setSourceEntity(83U);
    msg.setDestination(51283U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.7271109602141607);
    msg.setSource(1187U);
    msg.setSourceEntity(10U);
    msg.setDestination(21406U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.08629224760844045;
    msg.lon = 0.9015149015831109;
    msg.z = 0.3276434554465204;
    msg.z_units = 125U;
    msg.radius = 0.9362283279458659;
    msg.duration = 37696U;
    msg.speed = 0.018319843966254856;
    msg.speed_units = 210U;
    msg.custom.assign("DBNMCCUYKQBGBGHBFALQTJQZUHWTGHILZWWZVYOSASDJWPXQIMIGNRCEKUWLODYABMRJBYQJSRBLVSCLQEDUCTXGZAETXLHWSVJDJNDYKHOTZLGFWUVZNGFHBAQRNPFYVTXFXXEJKSKVSCIKF");

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
    msg.setTimeStamp(0.16757786961857757);
    msg.setSource(46057U);
    msg.setSourceEntity(222U);
    msg.setDestination(62413U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.4972901200244614;
    msg.lon = 0.0012683798571405669;
    msg.z = 0.14929622935028053;
    msg.z_units = 50U;
    msg.radius = 0.026760662060994478;
    msg.duration = 22932U;
    msg.speed = 0.3200487950831905;
    msg.speed_units = 170U;
    msg.custom.assign("KBALCOOAXPZUSWDASWFEJHJPMVGZRJXQAJGWUPHRMUWMCNEHBRWQSVIYEYIWQNEAHIJQHRNOSCKBPYZJUXAOPYUKBTQLDLTGDEDRVKQHZRLLPBBFPQSOXW");

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
    msg.setTimeStamp(0.7963544809747207);
    msg.setSource(24898U);
    msg.setSourceEntity(236U);
    msg.setDestination(58709U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.20027886554018548;
    msg.lon = 0.3846904943038577;
    msg.z = 0.4607869302885821;
    msg.z_units = 211U;
    msg.radius = 0.12243247582061734;
    msg.duration = 51395U;
    msg.speed = 0.44966087207908123;
    msg.speed_units = 250U;
    msg.custom.assign("FBYLCTYDAXOJZZGZHPSVFYCFMNGATKRIUNTYRNOOWPUHZYXCQRWYBZHQHZVMTVOSHITPVQOYFBXLNSDJOFLSRKDRQIZHUXSPMGRBXNMKWVBQQBKULSHIFTIOLBWGIFWGAEANCJVUTGNRIKETAXLPWMKKXHTEFDQWDFAXLSBJYMRYWESOSPFPNDWBIIUPVCEEMACBDVGGNZHPUNMECOIMDMJDECUOUCTWKEQLUAESJKLXZCLAZKJHGJ");

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
    msg.setTimeStamp(0.6864759966712236);
    msg.setSource(26164U);
    msg.setSourceEntity(104U);
    msg.setDestination(43773U);
    msg.setDestinationEntity(80U);
    msg.timeout = 1755U;
    msg.flags = 168U;
    msg.lat = 0.8353090040779829;
    msg.lon = 0.061289203861974895;
    msg.start_z = 0.3841003330086501;
    msg.start_z_units = 99U;
    msg.end_z = 0.8903297055059479;
    msg.end_z_units = 40U;
    msg.radius = 0.778675408256628;
    msg.speed = 0.7542684310326728;
    msg.speed_units = 96U;
    msg.custom.assign("OHWZYMUUKDXMSUWJRGXOFFSYAGUATZHMAYEVAFPKPMCOAQSUIJMVWNDTHNTBCOLXNGMXHBROSSUPBPCXQWEVUZYLMNGNKQQTRTLDVLZIKCJDJWQYUKXHDCQFPHGBTERRXNSOFDSTFLMRVWXUPPQIRTJNKBHLYWYEYAXVLRGDAS");

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
    msg.setTimeStamp(0.9986035993882966);
    msg.setSource(43921U);
    msg.setSourceEntity(120U);
    msg.setDestination(61408U);
    msg.setDestinationEntity(143U);
    msg.timeout = 49086U;
    msg.flags = 208U;
    msg.lat = 0.5741192682958133;
    msg.lon = 0.15596990916163556;
    msg.start_z = 0.18568866539468842;
    msg.start_z_units = 68U;
    msg.end_z = 0.3727603130946926;
    msg.end_z_units = 238U;
    msg.radius = 0.8580134416833545;
    msg.speed = 0.5756814948374215;
    msg.speed_units = 30U;
    msg.custom.assign("JCFOFPYZHGBIATZLZYUBDTTHJIOSZNIEIKKWGQODJWGJIWBZCS");

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
    msg.setTimeStamp(0.033254981968131925);
    msg.setSource(58963U);
    msg.setSourceEntity(212U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(192U);
    msg.timeout = 18308U;
    msg.flags = 125U;
    msg.lat = 0.1178824759039081;
    msg.lon = 0.2714063712703765;
    msg.start_z = 0.7993338201283291;
    msg.start_z_units = 65U;
    msg.end_z = 0.9629681195234729;
    msg.end_z_units = 124U;
    msg.radius = 0.9904342893182545;
    msg.speed = 0.44955944112312696;
    msg.speed_units = 123U;
    msg.custom.assign("VMYCPPKLDMZZBKDZDGOLSBLHJHTJVVFOZJGJRYWUIMGAVIHXZZIQXYTGCTUQTBDVDTMXQGRQZFT");

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
    msg.setTimeStamp(0.3470524752538827);
    msg.setSource(9310U);
    msg.setSourceEntity(126U);
    msg.setDestination(59382U);
    msg.setDestinationEntity(105U);
    msg.timeout = 32055U;
    msg.lat = 0.27120422515584164;
    msg.lon = 0.7794522133435269;
    msg.z = 0.06375669608774504;
    msg.z_units = 151U;
    msg.speed = 0.939753692262936;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.11902894156346766;
    tmp_msg_0.y = 0.9217696776739147;
    tmp_msg_0.z = 0.4986982804663639;
    tmp_msg_0.t = 0.6894113824719874;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DWPSHYFCEGLWLWVZBWPIDXPMLKOHIJFDMALRBLNFFUTULGEATYSTDUMUXHCMVUTZAJISZNRKBRNDEQGEYODGMKARAVBPHIYEBATEYTZZOJMQD");

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
    msg.setTimeStamp(0.649338539750459);
    msg.setSource(58599U);
    msg.setSourceEntity(55U);
    msg.setDestination(35024U);
    msg.setDestinationEntity(128U);
    msg.timeout = 4068U;
    msg.lat = 0.8089263497845812;
    msg.lon = 0.7686184366885473;
    msg.z = 0.37362124216780035;
    msg.z_units = 208U;
    msg.speed = 0.2856019040949125;
    msg.speed_units = 165U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2698308401221574;
    tmp_msg_0.y = 0.17614555026434453;
    tmp_msg_0.z = 0.4439236511178536;
    tmp_msg_0.t = 0.19486398888182432;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QXAMQANOKWIKCKUMMVWXNJGXUAKLEBYZBSHTUDTVVCHESOKRQUIPQEYJPHBLCFRGKJTACLDQWUDAZMDPIHNHCBGLXRJJPXWWYUSTLEFNGZGSBARNPDMGNTQQRWPEWXOOIIYFIMTZJEYIJEXIAEJFBZYFOKHZMRXVBMCAGPHPCFLYGUWDLTWKRXOAMNTOJUXFTDKRVBHRZZV");

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
    msg.setTimeStamp(0.63280968051312);
    msg.setSource(14858U);
    msg.setSourceEntity(19U);
    msg.setDestination(38175U);
    msg.setDestinationEntity(135U);
    msg.timeout = 2471U;
    msg.lat = 0.5012886470517441;
    msg.lon = 0.029644706468481385;
    msg.z = 0.6412175212108987;
    msg.z_units = 216U;
    msg.speed = 0.6332327884811366;
    msg.speed_units = 183U;
    msg.custom.assign("GVDVBQRTEUZSOUVWDBHZAROSSJHBHOEKDAYZYPRMAFRNONPBNKRJUCXKSFNNKBVABMUJLQJSFEDKLRNXSPUQGKIHQAVUEPCMITQHIFWBIQTQAMJDPTLRBVTXSQEEEOYDTTYRPIBPYMIZYCHXUFNFPEE");

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
    msg.setTimeStamp(0.861521391551815);
    msg.setSource(45685U);
    msg.setSourceEntity(78U);
    msg.setDestination(10013U);
    msg.setDestinationEntity(107U);
    msg.x = 0.709058694541191;
    msg.y = 0.1694475957924766;
    msg.z = 0.2564963950229264;
    msg.t = 0.12002090818597166;

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
    msg.setTimeStamp(0.7031025775560122);
    msg.setSource(24203U);
    msg.setSourceEntity(170U);
    msg.setDestination(49702U);
    msg.setDestinationEntity(67U);
    msg.x = 0.8287603895395661;
    msg.y = 0.2201932089178379;
    msg.z = 0.18254289018846293;
    msg.t = 0.22112483789262127;

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
    msg.setTimeStamp(0.5671078799550505);
    msg.setSource(44955U);
    msg.setSourceEntity(128U);
    msg.setDestination(12368U);
    msg.setDestinationEntity(74U);
    msg.x = 0.632916686552239;
    msg.y = 0.2544874606759533;
    msg.z = 0.6949059048433551;
    msg.t = 0.15527832619119264;

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
    msg.setTimeStamp(0.8886656895638809);
    msg.setSource(62816U);
    msg.setSourceEntity(103U);
    msg.setDestination(42138U);
    msg.setDestinationEntity(247U);
    msg.timeout = 15643U;
    msg.name.assign("IRFNEZPWXZUCXFHYBGYBTIZJPZTEVCDLSXIAMYEZFPNZSEZUVSGOUQNONXCSSLDVHDSOJMORQKLFDRMGRVDWWJIJYMRQHEJZDBHHBYYADKSKERADGAWWPSAVGYKCIJUDENHAQGXNUUXLHONUJNCIHANZVXWLURUBKYLIYCFBFAWMMVFOKYPMHRQEJITMGLTFPJGBPCWVAKGCMOQOTVTXBMCFWPQELNQZRSTJBEVT");
    msg.custom.assign("HFWRNCBRKPQVTARMFDCLVZODIKDVKQXQKQXDJXUEUOXTFXIOFJYMBFQZTYHOCR");

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
    msg.setTimeStamp(0.10206568643801384);
    msg.setSource(40390U);
    msg.setSourceEntity(58U);
    msg.setDestination(47076U);
    msg.setDestinationEntity(230U);
    msg.timeout = 18426U;
    msg.name.assign("NSAPYWNWVCYQNFSOCFWOXDOHDZZZPGAYDVSUEAALD");
    msg.custom.assign("FGZGJFNHZDVBHUISCNHYUGLDLSGQDADHJEEOGJMHYMOWTCBDRFQNGTKZKQTEAHVMQSHMIYCULXRXKWQZR");

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
    msg.setTimeStamp(0.7102574297161767);
    msg.setSource(30424U);
    msg.setSourceEntity(232U);
    msg.setDestination(25193U);
    msg.setDestinationEntity(196U);
    msg.timeout = 8416U;
    msg.name.assign("JQMSOQCKRPHVHKNZUGDBRGJRPGIXAELEZWWPFEJOXNDIWJWQWTJCEARZEBNUGKKXSSBFIFQVBKYLKYRXZOOWXVTTRDVNHNDDLAJZXBVZXTCEGMFUCZDPSHQIJNDOCTIDTPCOXECRLLTGDLFGOJDMYPIQFHZFUUOAYASNIQBBOFGFQBMOHCJHYXRSAKMZIUPWFGSAYWLWGMNBBLYHNYTTTVKM");
    msg.custom.assign("YWXDDIFPEESZCJFPDCTWHVHMPCILEEOLJBSBXIFOYRWAYLZPKMGKBHGDXXRSXRJHBTSEZZLOXBNANPIMSVOU");

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
    msg.setTimeStamp(0.6191562708811217);
    msg.setSource(12140U);
    msg.setSourceEntity(44U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.8736765720161391;
    msg.lon = 0.34507401164012674;
    msg.z = 0.04503506185680539;
    msg.z_units = 238U;
    msg.speed = 0.7562978808116423;
    msg.speed_units = 148U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5723546890541706;
    tmp_msg_0.y = 0.062483565259571994;
    tmp_msg_0.z = 0.9621807028680287;
    tmp_msg_0.t = 0.23452764538595927;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 46204U;
    tmp_msg_1.off_x = 0.14233061437753558;
    tmp_msg_1.off_y = 0.4104307940845048;
    tmp_msg_1.off_z = 0.6322184042009703;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.35893319823445013;
    msg.custom.assign("KKRZFMUWIMGDOIRNCCETXQSIRIIQQYVWEWXBUVLMAIANHGPDVXLJSEYKNXXOGANDZDCCNSKLYRBNASNTENIOLZBDZTMZGTLIKVNUBMEBHXSFUVXXRCDFUDTZAAJAZKVHVLGDFDQKQIUCOOGEYJFJIRTZFZQJPMETUOYMWWPARLQPREATMDEWSKLOATVWJPPJKZCYBPHQPTLJQXRFSSPWVFHOS");

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
    msg.setTimeStamp(0.39216390698615344);
    msg.setSource(54040U);
    msg.setSourceEntity(252U);
    msg.setDestination(25428U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.2404738896570896;
    msg.lon = 0.36569523958238404;
    msg.z = 0.06692400722761538;
    msg.z_units = 138U;
    msg.speed = 0.7125593724274846;
    msg.speed_units = 42U;
    msg.start_time = 0.5231885101941999;
    msg.custom.assign("WWDPTODMHGFHJVMNWMHPCRXSRKRBTUFBGOGDONXSLIBIJALVECKCMWPLAGZBQKGIEOVZGMQJKVSRYEGTUBLCXDHGVFOBKSJUJDMHQROLMPCLUUEZ");

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
    msg.setTimeStamp(0.02906739820808346);
    msg.setSource(24635U);
    msg.setSourceEntity(130U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.964183662373297;
    msg.lon = 0.07695111877835814;
    msg.z = 0.8000213655299312;
    msg.z_units = 155U;
    msg.speed = 0.2004179010176087;
    msg.speed_units = 45U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.08722126611801362;
    tmp_msg_0.y = 0.5532286946725511;
    tmp_msg_0.z = 0.9436781644322736;
    tmp_msg_0.t = 0.5562631009788239;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 57031U;
    tmp_msg_1.off_x = 0.11906448113774737;
    tmp_msg_1.off_y = 0.6233985779972568;
    tmp_msg_1.off_z = 0.8767061123826186;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.11427850621036073;
    msg.custom.assign("QQTUJSGZACFQSOXRQUNPXZVNGVGKPXIERDBBNHJYHWWKNYRIHUCNWBHWZIMMLBHFHFTCKEBBVZMARUOUVWKEOSSALQMEEWADZRLLYGYIFRLDIAJPVUGWKSTLUOGNIOYDVDFZLQJYWVOVKTPMMQBQJEDAROYRDDJUGLZTCHTIPJNGZYABTRMUYXEAPZCSFRXSFSTCSIPAPKXNXFWNMMPCHCXHVVKGAGPC");

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
    msg.setTimeStamp(0.8700452816280687);
    msg.setSource(10512U);
    msg.setSourceEntity(185U);
    msg.setDestination(44187U);
    msg.setDestinationEntity(121U);
    msg.vid = 38872U;
    msg.off_x = 0.1620208744356847;
    msg.off_y = 0.8156760510691219;
    msg.off_z = 0.40788517027536975;

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
    msg.setTimeStamp(0.24970755142095447);
    msg.setSource(7906U);
    msg.setSourceEntity(61U);
    msg.setDestination(2739U);
    msg.setDestinationEntity(35U);
    msg.vid = 43338U;
    msg.off_x = 0.9425741124846021;
    msg.off_y = 0.04993993174347422;
    msg.off_z = 0.9687204949745123;

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
    msg.setTimeStamp(0.4181539855493004);
    msg.setSource(13437U);
    msg.setSourceEntity(125U);
    msg.setDestination(39332U);
    msg.setDestinationEntity(100U);
    msg.vid = 14695U;
    msg.off_x = 0.10728093081326817;
    msg.off_y = 0.9329285128684287;
    msg.off_z = 0.24279748416721736;

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
    msg.setTimeStamp(0.03387937834686994);
    msg.setSource(4139U);
    msg.setSourceEntity(22U);
    msg.setDestination(27412U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.5500660457604131);
    msg.setSource(61112U);
    msg.setSourceEntity(45U);
    msg.setDestination(35447U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.4405082486281997);
    msg.setSource(41117U);
    msg.setSourceEntity(167U);
    msg.setDestination(62643U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.48376558650880086);
    msg.setSource(54333U);
    msg.setSourceEntity(74U);
    msg.setDestination(65181U);
    msg.setDestinationEntity(70U);
    msg.mid = 41166U;

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
    msg.setTimeStamp(0.955047046583119);
    msg.setSource(59704U);
    msg.setSourceEntity(145U);
    msg.setDestination(28527U);
    msg.setDestinationEntity(194U);
    msg.mid = 18217U;

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
    msg.setTimeStamp(0.3919263673494344);
    msg.setSource(27846U);
    msg.setSourceEntity(128U);
    msg.setDestination(27702U);
    msg.setDestinationEntity(61U);
    msg.mid = 48852U;

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
    msg.setTimeStamp(0.21948714879156894);
    msg.setSource(24746U);
    msg.setSourceEntity(236U);
    msg.setDestination(38201U);
    msg.setDestinationEntity(253U);
    msg.state = 124U;
    msg.eta = 31070U;
    msg.info.assign("ZFBGRBUTGSEWTVBZNZJAUUULBNKQJALOKPTFCOEKQNKVTCTGYGOUZXMEETRUIKQOEZVCJTOXCPJRGCDSJDRJONLPCSVOFXBVMZHPGHZNACUCHQSXFGDZKQQPWIIOWITWMWTNJJYDPOADKLWGLSRWNUFIOEFXFIIVVTSLYMNZMGMHIVXHHJMUWXBDICQKBJQEYYNPWRYRKDL");

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
    msg.setTimeStamp(0.8426334551237935);
    msg.setSource(500U);
    msg.setSourceEntity(37U);
    msg.setDestination(107U);
    msg.setDestinationEntity(22U);
    msg.state = 22U;
    msg.eta = 54334U;
    msg.info.assign("ZWFBGVZTMQLHKONSJNFYKNCICCOSHMUADTWNOSRQHAPWSLUJDXMJTHYVCNKFJUEVYIMEEHXQVAFER");

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
    msg.setTimeStamp(0.8809321244286633);
    msg.setSource(28799U);
    msg.setSourceEntity(125U);
    msg.setDestination(32643U);
    msg.setDestinationEntity(28U);
    msg.state = 250U;
    msg.eta = 32912U;
    msg.info.assign("MFQBHIAADCXDUUYAJKHQMBCZUJLNIGDPSJPYWFYEYGYCR");

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
    msg.setTimeStamp(0.1692888752515287);
    msg.setSource(58761U);
    msg.setSourceEntity(6U);
    msg.setDestination(48810U);
    msg.setDestinationEntity(141U);
    msg.system = 59942U;
    msg.duration = 58462U;
    msg.speed = 0.15594093923562913;
    msg.speed_units = 212U;
    msg.x = 0.6867979092934874;
    msg.y = 0.5557199448188989;
    msg.z = 0.18732155149282304;
    msg.z_units = 216U;

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
    msg.setTimeStamp(0.5816711998114737);
    msg.setSource(8958U);
    msg.setSourceEntity(108U);
    msg.setDestination(52566U);
    msg.setDestinationEntity(119U);
    msg.system = 54606U;
    msg.duration = 28077U;
    msg.speed = 0.6963624499309661;
    msg.speed_units = 10U;
    msg.x = 0.6841508178587569;
    msg.y = 0.014695597555537065;
    msg.z = 0.03141271652700073;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.049935504113127305);
    msg.setSource(33312U);
    msg.setSourceEntity(217U);
    msg.setDestination(34014U);
    msg.setDestinationEntity(70U);
    msg.system = 58077U;
    msg.duration = 34238U;
    msg.speed = 0.8688038890668204;
    msg.speed_units = 187U;
    msg.x = 0.2521898705586286;
    msg.y = 0.2161920753993326;
    msg.z = 0.6451357108663678;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.9121031633379879);
    msg.setSource(61492U);
    msg.setSourceEntity(160U);
    msg.setDestination(31042U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.35189065626561367;
    msg.lon = 0.988278052401381;
    msg.speed = 0.119650365440784;
    msg.speed_units = 172U;
    msg.duration = 47773U;
    msg.sys_a = 11581U;
    msg.sys_b = 33609U;
    msg.move_threshold = 0.8951116258242146;

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
    msg.setTimeStamp(0.7106949860524209);
    msg.setSource(23881U);
    msg.setSourceEntity(3U);
    msg.setDestination(32328U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.7386136177383856;
    msg.lon = 0.06921575091073673;
    msg.speed = 0.8492664282984121;
    msg.speed_units = 112U;
    msg.duration = 49297U;
    msg.sys_a = 5953U;
    msg.sys_b = 40570U;
    msg.move_threshold = 0.061559448070677814;

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
    msg.setTimeStamp(0.2309105322885061);
    msg.setSource(29247U);
    msg.setSourceEntity(79U);
    msg.setDestination(28346U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.9675468587869043;
    msg.lon = 0.8273624309266733;
    msg.speed = 0.7334058759769065;
    msg.speed_units = 125U;
    msg.duration = 18403U;
    msg.sys_a = 40522U;
    msg.sys_b = 11714U;
    msg.move_threshold = 0.3057172601953514;

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
    msg.setTimeStamp(0.5778925585220047);
    msg.setSource(59138U);
    msg.setSourceEntity(2U);
    msg.setDestination(13993U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.2150380886166291;
    msg.lon = 0.8709686261692288;
    msg.z = 0.7062365451390226;
    msg.z_units = 96U;
    msg.speed = 0.7086233157395028;
    msg.speed_units = 155U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.16044732036753317;
    tmp_msg_0.lon = 0.6603323817708197;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BUPWUXHVZMONIKHSRZZBLKFERDYAOWJBSGMFUEPURPOJYMOYTZUXZFREPARXLCDEILXXCHWFKAHGMEDSOSXH");

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
    msg.setTimeStamp(0.31109100638401765);
    msg.setSource(14492U);
    msg.setSourceEntity(47U);
    msg.setDestination(16690U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.011204724239836983;
    msg.lon = 0.9247527864784678;
    msg.z = 0.7704532742577355;
    msg.z_units = 99U;
    msg.speed = 0.2706174776917428;
    msg.speed_units = 225U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.45524358292552836;
    tmp_msg_0.lon = 0.9789510932382087;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SEMXGFXPTLSULWSXTGLRDWPSBRVZONLVMDHBIKAAJHGBJOMBBFIKI");

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
    msg.setTimeStamp(0.5945358488116581);
    msg.setSource(39378U);
    msg.setSourceEntity(16U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.7461405626781314;
    msg.lon = 0.4073938195882376;
    msg.z = 0.9196585295252087;
    msg.z_units = 56U;
    msg.speed = 0.29862584575707074;
    msg.speed_units = 219U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4393194548635183;
    tmp_msg_0.lon = 0.033836840633073684;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EXGQFMCXNSFNDNODYJA");

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
    msg.setTimeStamp(0.006052856481374658);
    msg.setSource(28691U);
    msg.setSourceEntity(95U);
    msg.setDestination(11732U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.5297682001191768;
    msg.lon = 0.7170313801542361;

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
    msg.setTimeStamp(0.0966656245666645);
    msg.setSource(2473U);
    msg.setSourceEntity(103U);
    msg.setDestination(22315U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.5405641245122139;
    msg.lon = 0.5173112270642329;

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
    msg.setTimeStamp(0.9968532899106947);
    msg.setSource(14472U);
    msg.setSourceEntity(58U);
    msg.setDestination(15943U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.5276784298357323;
    msg.lon = 0.796893167086596;

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
    msg.setTimeStamp(0.4667318582616158);
    msg.setSource(29182U);
    msg.setSourceEntity(167U);
    msg.setDestination(51318U);
    msg.setDestinationEntity(91U);
    msg.timeout = 26637U;
    msg.lat = 0.8153107618538052;
    msg.lon = 0.7735330810910185;
    msg.z = 0.752858710672533;
    msg.z_units = 104U;
    msg.pitch = 0.6290185744488436;
    msg.amplitude = 0.2859698254059784;
    msg.duration = 13796U;
    msg.speed = 0.8978543673072793;
    msg.speed_units = 120U;
    msg.radius = 0.3762325963336285;
    msg.direction = 147U;
    msg.custom.assign("BYCPFYXNYDACVFJQLWQLIMJGCZRPBWBQBFHROMZQBVRRUKIZFAPHZEJIUKTWRMDMNTRBAUZDFRWLYCRU");

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
    msg.setTimeStamp(0.25552390418884086);
    msg.setSource(52524U);
    msg.setSourceEntity(215U);
    msg.setDestination(25825U);
    msg.setDestinationEntity(117U);
    msg.timeout = 40676U;
    msg.lat = 0.4562408882142184;
    msg.lon = 0.09635563644786072;
    msg.z = 0.7022658040117814;
    msg.z_units = 206U;
    msg.pitch = 0.5495598470135958;
    msg.amplitude = 0.670486379533044;
    msg.duration = 9267U;
    msg.speed = 0.9992735445514098;
    msg.speed_units = 38U;
    msg.radius = 0.2520609622746771;
    msg.direction = 68U;
    msg.custom.assign("UTPXQTDDEIRMHQZTERSENTOYUKNCPIKWZIQRDFINYVSHCVREWIOXUURAHGSLTJWOVNFAURGGZZIAVTSPGHKZDZBULBMHQWJRCNBMCKAPSZXGTENUPMAELGKOYEELBXFKDLJFZFTOEYQ");

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
    msg.setTimeStamp(0.028537504852796824);
    msg.setSource(43718U);
    msg.setSourceEntity(119U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(112U);
    msg.timeout = 49749U;
    msg.lat = 0.30746086204632805;
    msg.lon = 0.10813407062383584;
    msg.z = 0.7794864372716899;
    msg.z_units = 70U;
    msg.pitch = 0.43505255785572594;
    msg.amplitude = 0.9254185746363353;
    msg.duration = 43962U;
    msg.speed = 0.056612370409337864;
    msg.speed_units = 243U;
    msg.radius = 0.6308090315172842;
    msg.direction = 102U;
    msg.custom.assign("VLJUSJQXWRIAMFTGWPBSVZLFKUQJSBTZMSRUCTTDXZZKYKPVGVPYLBCCJBNNWNDYLFXMGEIFGHKKPQMWAWLJMXDPEDOOJIUGKVXPACLFHBKLBIOMUGVJEBNBHAOSAZLTYMKMRTDHYNVIWIVMCHHPOYGDNOEEFTWEBHVWWZYOGUSOJR");

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
    msg.setTimeStamp(0.8370119905682596);
    msg.setSource(51667U);
    msg.setSourceEntity(237U);
    msg.setDestination(21081U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("XPMZCUGCKKLKGOWVEOQBHPPTPMHWCUVSASINVATXJCXBFLRAPPJKXHMMOIEIFYEORROTWUFAIUHXSMWNLJRCGXZXBFZCBAIDFWDRHQBZOWJWCOQONQKARJGSUEUTVOIUIJQEPVEIGLIJQFW");
    msg.reference_frame = 36U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55409U;
    tmp_msg_0.off_x = 0.06688427838141642;
    tmp_msg_0.off_y = 0.05429317392430466;
    tmp_msg_0.off_z = 0.27015413648380127;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VTZGNSGZIPVMUXRZRIRPNSLOEMEUDCKYYMPVFAJJVMLHDUWMUKAPRTVYFALQSXSORWBKOFQYZJPETGRVXFOKHGENIZONGANVDDCRIURACVW");

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
    msg.setTimeStamp(0.868006862170375);
    msg.setSource(38712U);
    msg.setSourceEntity(249U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("LLOHXYCIYOHSTJTRZCWFGVUHXRARYNMVEEXNJMGERZKEDAKSOEBEZVVBZBGBBFYMYOQUPQKTXIAJUTZWQTEIDZDWKCMKJFVUZFJPLXNIJIYPPPQPOKTSYDAECHEIJRHAAXMFFVBGPDFTWMKDNXRUWIHUSGQPLOLHBXQLXCRPRYOISWCWQGSCHVTGFSNURCBHGOJLGMKAZDJMXFOBPKNBWNZLYQINSUQGUDDMUAH");
    msg.reference_frame = 181U;
    msg.custom.assign("DOAJDCBKAMWTBIQCPPDCFLGJSYZWWUGHZGUNRSIXZEQRFHOAAXGFIPTOJOZMNYHKFRARSIFWLSFCRDHIPBOLOVTDRVXVOQEUKFPZQJAMSYKILY");

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
    msg.setTimeStamp(0.8623400306141754);
    msg.setSource(31916U);
    msg.setSourceEntity(170U);
    msg.setDestination(48880U);
    msg.setDestinationEntity(176U);
    msg.formation_name.assign("USKACBNLPLKYMZPRTKMAXAJZTUEZKPOMYJHIXMANVAXEESINLFHESSWOUQDXROBDDGQOZXTDFGILEFYQJMTFWRVLOZIFGWQGFWRJNIAAVYIRZVBUQJWQRHCBVCPGPVSAYGSGTCXRLNUAYSMKBIKWRZJNIYOXBERQHOHCGPWECWPALFHTZFHOPXBVYQLTHCUFBCIHMSQXRIZNWJKNHEUVCGLOBDXCJGJTUOPLQSMDDNZEFDKVM");
    msg.reference_frame = 146U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43060U;
    tmp_msg_0.off_x = 0.9052044365453648;
    tmp_msg_0.off_y = 0.3062430538507901;
    tmp_msg_0.off_z = 0.20065900897050082;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KRKXVCPBHZOCHEDYUIEYGQEZVVBATCSIGDIZKKWXESVNTOTNFZFDLFQOHWTZDNQUQB");

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
    msg.setTimeStamp(0.057235037104122366);
    msg.setSource(21131U);
    msg.setSourceEntity(238U);
    msg.setDestination(27119U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("CZANBNXUFQIWWULYZVYKNRATOJFSVHHIEXSAQUWMLQQXVJINNPJQKUMJIPFEGQUOXYAKAMPMUDDSXZZYNVKFEOKAJVHOVXSFBPYZYXGPXNLGJPQOCSPPVZIYSTNIWVCZECQU");
    msg.formation_name.assign("LOIHNJCQTCATXGFIGLYAGVDIOHALCYXNIYGMPVAQDJJAVFUFTPJVCGZEWRWQIWKCXNFAOYQHEHLJPJALHEEWMRIXASZUSWZUWWUFTHPJCRTKNSXXKZDTQBIOENZJBJVOCQGSOVMNBXDSDKNEPHMYYBQBLSKEDQOMBLBONMCODJTVWTIIREUXTVXLHSRZKGCZZVPSOGHYRBLNFKAUMSI");
    msg.plan_id.assign("HLPGPWBTXOIDOQRFCMSJVRVZVZULQMYHYZTUHWDWDLMQQAXJHWHSFLNLDKQCETJCCLTPNKTSIZHBTBJELOAKSTMPXOUESKWLEDIIVIBBWDRHWGKRTNRACJFFYGXARYPKNYLMVFAIGUZYOELVYHBMUUIZMZWOBFEERNRPQQDZJNXCNJAPISVHYFMYUOGFXCRSJCFDOYKQCKQGEISJM");
    msg.description.assign("NMHNPECZKAETMTSJTGNPLVDBATBWDFMJAKSTVKNNHOKYSHYCUXLYG");
    msg.leader_speed = 0.6953588940551928;
    msg.leader_bank_lim = 0.7680142877197124;
    msg.pos_sim_err_lim = 0.42295767340629853;
    msg.pos_sim_err_wrn = 0.5287196280995698;
    msg.pos_sim_err_timeout = 35842U;
    msg.converg_max = 0.6132548767607001;
    msg.converg_timeout = 4759U;
    msg.comms_timeout = 30459U;
    msg.turb_lim = 0.08207387525054877;
    msg.custom.assign("SZOZPLKUCINLRTKXFJXQABKQQTSMFFBKGVCNNOOPXXLGCGADVENTOXWGVBPITUMXGJJOGWYBLPAYNNBZVDVGWRKJCAUTSHFECI");

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
    msg.setTimeStamp(0.7636205941217727);
    msg.setSource(22135U);
    msg.setSourceEntity(51U);
    msg.setDestination(11198U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("AKRIWHXLDAPUOCQWCELZNEONSHOVMDCSFQVHVMZGWHPKJLEBNEGXTXYJRFEMBHGJJKDYVJTTUACTGIWLZLPMUYFHTUGZIWASPQXBSFMBLGPFKPKPYAHSLKYQZNZURDLISLWLZUJVIIXVTMFNXFAKYEDOPFKBOSRGRJZEHIFKVVUGNAQZMKQNUIRRGATYBBJOEOYDVNDJICHQRSAUBH");
    msg.formation_name.assign("XGTZKNCEZLDODMWQGPZKBHCOYDGSAPWWOQBGQXUYELIPUUDFPGZFPVGXHWAREHDZTMCVIGRWNOLCCEEHSSPNHVDNFUELXFMRQOFNRPPDFVZIMUSATSJJABJROVWYDKNGYC");
    msg.plan_id.assign("ENKWOZVZNSJYMKVZFPNIIFPUBSZBNHYACUQHTIHVCRWPDVLOKTHCKFAKUDCUSDWVUIGZXPKQDXWHDHTEJUEWQIYIAXRAMPAPYOVLLEOVSNJNRALT");
    msg.description.assign("OVEXKTATYXJXZWRYAKJPADRRBYTEBBXCTGAJBXIKHURPNSDDQJV");
    msg.leader_speed = 0.32283346872126917;
    msg.leader_bank_lim = 0.4867195719828139;
    msg.pos_sim_err_lim = 0.8241421670503221;
    msg.pos_sim_err_wrn = 0.27419443676005284;
    msg.pos_sim_err_timeout = 44986U;
    msg.converg_max = 0.38062805837412583;
    msg.converg_timeout = 35587U;
    msg.comms_timeout = 30242U;
    msg.turb_lim = 0.4637479793554413;
    msg.custom.assign("DOVLREOHKICEVCNZAVUUQXOPFTBTLIABBBPOSAAWDRSHVNIGKRTVDTTYHECKBSIXOPQWCYYBXHQZJXAKESJXXZJEPNUZRHQGCKYHNRWARSHWYOULKQCLZGTZJOGARWFMDLDRTGLPAVMKIMHDTSGXBIQNCWSFRGQXSUXMGDLDFXRNYPLIASSBYVJFFKPUHDIFYEZVZCVUABFTZBNPYIEGLLEOUMQCTQPUWZ");

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
    msg.setTimeStamp(0.595422844225181);
    msg.setSource(45620U);
    msg.setSourceEntity(217U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("SECZQNFAINLWIEWPGBSJAQVZHTDUYFZJXIFSSKSEPBUEKZDOUOAJIYLKDFASIGTHABNOOJGYGYMQHWFVTCLKUKBDRTFZCBAXYAHDHEQGBIVMPMGGDKPJTDOKKLWVOFOHIPRQUMHXTORGNMPQXDJRVJOBSJEHXVCCUNYFTMZRESHFNXNABRUYLS");
    msg.formation_name.assign("CFWGWJRUDUGKQABCCSYLZNBPUWIABOOJOYWXSMZYENDQQXDUMJFWLFALWIJQHREHRTCSQGQNWLVJCNOJAXVJOBDPKNRZVQUMIPNCHSKGNQOKZEFDHRMIZAYVVKDSCLESLXXKWTVTDRJGJWHPIPSSKFAUOXMGILZVXDECYFKCLBKJYGAPYIUFZCQSEYDEVZMTTXQTAHENOMPGPTWXYEUIOPXBZGURBRMMNBNSGAVVTETFIDIABFBHTLZHPLORHM");
    msg.plan_id.assign("DNIDLKMEYRXMTCHUUUOMJBYDKVXVQTRYABJZYMKQRJWFAUQSTVYKVPGPPIW");
    msg.description.assign("BFWVELAKTBSZNLEMMODFPTZGLANBQQRNHUHDOIOZULYIOSCOEDEUKYXXHTIFVDZQSYVRJSDPVTCVGJZMAFSQVXEPQOEXBREIKWFFRRIYLGPAHHUHAUXZJEJUCGCHBBZCILFPNGWBFJTZPMGAYCZOG");
    msg.leader_speed = 0.4921559320387977;
    msg.leader_bank_lim = 0.7685738370245877;
    msg.pos_sim_err_lim = 0.24319918043254796;
    msg.pos_sim_err_wrn = 0.17947036057902876;
    msg.pos_sim_err_timeout = 54059U;
    msg.converg_max = 0.36312728934675453;
    msg.converg_timeout = 56101U;
    msg.comms_timeout = 39033U;
    msg.turb_lim = 0.33109839317110856;
    msg.custom.assign("DPDAZSAPTKYSEABLJFXJDCUXOHBOCEDTTSFOEQSJMYFKOALUNYIDFDNWZUXCKAWRCILRHCCFTEZVXERBIZONDVKNESVLJGDRRGIEAWYUSMKLTHFGWXLVKERIUSFNHTBZPPBKZKNPFGUBSXLMJIPGYPOBTWMQRVFBN");

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
    msg.setTimeStamp(0.3803533862222499);
    msg.setSource(24467U);
    msg.setSourceEntity(254U);
    msg.setDestination(24737U);
    msg.setDestinationEntity(240U);
    msg.control_src = 44681U;
    msg.control_ent = 28U;
    msg.timeout = 0.2542900452082172;
    msg.loiter_radius = 0.5767226597773106;
    msg.altitude_interval = 0.5525212595066824;

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
    msg.setTimeStamp(0.1242474746569705);
    msg.setSource(17127U);
    msg.setSourceEntity(34U);
    msg.setDestination(53639U);
    msg.setDestinationEntity(182U);
    msg.control_src = 14134U;
    msg.control_ent = 148U;
    msg.timeout = 0.7627500042954927;
    msg.loiter_radius = 0.902406840138912;
    msg.altitude_interval = 0.39784651168828555;

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
    msg.setTimeStamp(0.9651131603755043);
    msg.setSource(468U);
    msg.setSourceEntity(37U);
    msg.setDestination(44185U);
    msg.setDestinationEntity(118U);
    msg.control_src = 35002U;
    msg.control_ent = 148U;
    msg.timeout = 0.9735276681234887;
    msg.loiter_radius = 0.6829019432751869;
    msg.altitude_interval = 0.9592239501132027;

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
    msg.setTimeStamp(0.35601990545076845);
    msg.setSource(34241U);
    msg.setSourceEntity(129U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(5U);
    msg.flags = 133U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3546203641455068;
    tmp_msg_0.speed_units = 46U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5613453557654373;
    tmp_msg_1.z_units = 135U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5613944121994957;
    msg.lon = 0.010431831027364113;
    msg.radius = 0.22072062248191404;

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
    msg.setTimeStamp(0.7534143018830671);
    msg.setSource(8545U);
    msg.setSourceEntity(141U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(243U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.33657968288609064;
    tmp_msg_0.speed_units = 150U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1769573297733391;
    tmp_msg_1.z_units = 206U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8574439443533857;
    msg.lon = 0.5936482726943352;
    msg.radius = 0.8505309068709471;

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
    msg.setTimeStamp(0.8478419997704046);
    msg.setSource(60707U);
    msg.setSourceEntity(147U);
    msg.setDestination(49052U);
    msg.setDestinationEntity(196U);
    msg.flags = 72U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7027917060452814;
    tmp_msg_0.speed_units = 104U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9454268599973696;
    tmp_msg_1.z_units = 210U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6240154625641644;
    msg.lon = 0.9795314386060624;
    msg.radius = 0.23848892549787148;

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
    msg.setTimeStamp(0.5723470177111619);
    msg.setSource(9565U);
    msg.setSourceEntity(15U);
    msg.setDestination(25147U);
    msg.setDestinationEntity(239U);
    msg.control_src = 12665U;
    msg.control_ent = 24U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 88U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.48517081701892084;
    tmp_tmp_msg_0_0.speed_units = 101U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.709321298107027;
    tmp_tmp_msg_0_1.z_units = 49U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7093087072948276;
    tmp_msg_0.lon = 0.9034253847077529;
    tmp_msg_0.radius = 0.5676958428112593;
    msg.reference.set(tmp_msg_0);
    msg.state = 163U;
    msg.proximity = 79U;

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
    msg.setTimeStamp(0.6495952348276707);
    msg.setSource(41709U);
    msg.setSourceEntity(149U);
    msg.setDestination(24746U);
    msg.setDestinationEntity(162U);
    msg.control_src = 35106U;
    msg.control_ent = 216U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 6U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2728360357862104;
    tmp_tmp_msg_0_0.speed_units = 207U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12473832235303717;
    tmp_tmp_msg_0_1.z_units = 129U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9059086780378981;
    tmp_msg_0.lon = 0.992550856869972;
    tmp_msg_0.radius = 0.9898131409016168;
    msg.reference.set(tmp_msg_0);
    msg.state = 104U;
    msg.proximity = 234U;

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
    msg.setTimeStamp(0.21739010960954175);
    msg.setSource(65505U);
    msg.setSourceEntity(215U);
    msg.setDestination(1792U);
    msg.setDestinationEntity(111U);
    msg.control_src = 49559U;
    msg.control_ent = 185U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 165U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2078454217220772;
    tmp_tmp_msg_0_0.speed_units = 61U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2281984973449036;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6362151260466364;
    tmp_msg_0.lon = 0.23463915471268082;
    tmp_msg_0.radius = 0.32724425146044356;
    msg.reference.set(tmp_msg_0);
    msg.state = 136U;
    msg.proximity = 10U;

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
    msg.setTimeStamp(0.5052583872566997);
    msg.setSource(28229U);
    msg.setSourceEntity(77U);
    msg.setDestination(29829U);
    msg.setDestinationEntity(60U);
    msg.ax_cmd = 0.44847127333937686;
    msg.ay_cmd = 0.5443938384963095;
    msg.az_cmd = 0.3831670573675904;
    msg.ax_des = 0.29400747982380093;
    msg.ay_des = 0.03832862229445011;
    msg.az_des = 0.08091180175929813;
    msg.virt_err_x = 0.8120323304063823;
    msg.virt_err_y = 0.5617789788866876;
    msg.virt_err_z = 0.707148471302893;
    msg.surf_fdbk_x = 0.33951168114088626;
    msg.surf_fdbk_y = 0.3111418215916506;
    msg.surf_fdbk_z = 0.6059705078234799;
    msg.surf_unkn_x = 0.9248540588897359;
    msg.surf_unkn_y = 0.3109420281672889;
    msg.surf_unkn_z = 0.3428853636614497;
    msg.ss_x = 0.5508727846627747;
    msg.ss_y = 0.14562335893923162;
    msg.ss_z = 0.0861992855548882;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BNKBTWYNTFVCVOZYSTDIAVEQXIBNMNYNYRORYEOVIFAAYMXZJHALXVBGPHRSJLSRXKJFYPLIYCXEGTNQVMDDWKEBPPHEOHNQMEAWLWRMZKMVZSPSDACLDJYCECKEFCHGSHUIFOWLBIWJSKGCUQSPBHRDDFPOUOBUTTZYTHPOVLHHCMLRUIENMBZWIPDIFTNTLDZUBJQGRCWKCRAWUQXGRGTWKQGILDGSFFMZSUXAQMEGXJKOQ");
    tmp_msg_0.dist = 0.0785181820165034;
    tmp_msg_0.err = 0.864130027914716;
    tmp_msg_0.ctrl_imp = 0.996159770506969;
    tmp_msg_0.rel_dir_x = 0.22048902598000275;
    tmp_msg_0.rel_dir_y = 0.3122794261127255;
    tmp_msg_0.rel_dir_z = 0.9575543921927571;
    tmp_msg_0.err_x = 0.9676321677133579;
    tmp_msg_0.err_y = 0.47283361852404004;
    tmp_msg_0.err_z = 0.07760109909700241;
    tmp_msg_0.rf_err_x = 0.6038711907564773;
    tmp_msg_0.rf_err_y = 0.04094656183091416;
    tmp_msg_0.rf_err_z = 0.14308409691425217;
    tmp_msg_0.rf_err_vx = 0.6288434963359457;
    tmp_msg_0.rf_err_vy = 0.34588688480462204;
    tmp_msg_0.rf_err_vz = 0.39466647712965774;
    tmp_msg_0.ss_x = 0.2891261346667938;
    tmp_msg_0.ss_y = 0.17478809054600963;
    tmp_msg_0.ss_z = 0.7389031501335628;
    tmp_msg_0.virt_err_x = 0.9584294271392788;
    tmp_msg_0.virt_err_y = 0.6472755056625793;
    tmp_msg_0.virt_err_z = 0.04870351509355875;
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
    msg.setTimeStamp(0.17949509404175545);
    msg.setSource(55289U);
    msg.setSourceEntity(31U);
    msg.setDestination(40378U);
    msg.setDestinationEntity(125U);
    msg.ax_cmd = 0.024677937939316164;
    msg.ay_cmd = 0.5120328308306542;
    msg.az_cmd = 0.6390854199335968;
    msg.ax_des = 0.8139041938583199;
    msg.ay_des = 0.7584110179683772;
    msg.az_des = 0.6758972844555249;
    msg.virt_err_x = 0.564874965062236;
    msg.virt_err_y = 0.5132196617180824;
    msg.virt_err_z = 0.7655461569643631;
    msg.surf_fdbk_x = 0.6756992522502463;
    msg.surf_fdbk_y = 0.5213824938309224;
    msg.surf_fdbk_z = 0.15212240935547627;
    msg.surf_unkn_x = 0.5873890035845104;
    msg.surf_unkn_y = 0.8569448362402334;
    msg.surf_unkn_z = 0.09455623414914682;
    msg.ss_x = 0.27314432623455787;
    msg.ss_y = 0.5279138362858895;
    msg.ss_z = 0.12509849440135123;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ILPUSAUYVIXXPFSEPSLSONHZCINQDHZPNCYOUGFSNVXLCMMGBHFALEHVKTKDESYPEXBQXDDTQASKFKJTRCKGHNPVVMUTWYTOBBIGNADAUKNRAUVDZERCKXJJXZCURHRSTHWQWXLZPMFMJQJWZTQ");
    tmp_msg_0.dist = 0.7628026170713931;
    tmp_msg_0.err = 0.3945267038765419;
    tmp_msg_0.ctrl_imp = 0.26854586590290874;
    tmp_msg_0.rel_dir_x = 0.30392323010396083;
    tmp_msg_0.rel_dir_y = 0.9651907189811265;
    tmp_msg_0.rel_dir_z = 0.823456514435919;
    tmp_msg_0.err_x = 0.21390448132621132;
    tmp_msg_0.err_y = 0.4844272351957327;
    tmp_msg_0.err_z = 0.0716342503936721;
    tmp_msg_0.rf_err_x = 0.7121480439672617;
    tmp_msg_0.rf_err_y = 0.2560119506095666;
    tmp_msg_0.rf_err_z = 0.3106651845588917;
    tmp_msg_0.rf_err_vx = 0.37740630688223153;
    tmp_msg_0.rf_err_vy = 0.2302416998363227;
    tmp_msg_0.rf_err_vz = 0.8503362289420183;
    tmp_msg_0.ss_x = 0.2500867490790851;
    tmp_msg_0.ss_y = 0.909784348606917;
    tmp_msg_0.ss_z = 0.5707632677576125;
    tmp_msg_0.virt_err_x = 0.20267277050490484;
    tmp_msg_0.virt_err_y = 0.3302496596007335;
    tmp_msg_0.virt_err_z = 0.9539900134631593;
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
    msg.setTimeStamp(0.17313537633566978);
    msg.setSource(17531U);
    msg.setSourceEntity(238U);
    msg.setDestination(33878U);
    msg.setDestinationEntity(35U);
    msg.ax_cmd = 0.8046180749507551;
    msg.ay_cmd = 0.8263231385621143;
    msg.az_cmd = 0.14347673702950992;
    msg.ax_des = 0.3371680109861258;
    msg.ay_des = 0.7796904741238868;
    msg.az_des = 0.7210544837063895;
    msg.virt_err_x = 0.7630501114703695;
    msg.virt_err_y = 0.6973168011210086;
    msg.virt_err_z = 0.652616428918646;
    msg.surf_fdbk_x = 0.13802643429286343;
    msg.surf_fdbk_y = 0.12075513253584269;
    msg.surf_fdbk_z = 0.09311303754706002;
    msg.surf_unkn_x = 0.22186107280027056;
    msg.surf_unkn_y = 0.5863461406373781;
    msg.surf_unkn_z = 0.42583364149280056;
    msg.ss_x = 0.39268859146738866;
    msg.ss_y = 0.022285954819968534;
    msg.ss_z = 0.6091361035713544;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LRFNJFBWSUTBJLXUFMGLIEDGIKYJOBZXKAEDEWZG");
    tmp_msg_0.dist = 0.07333959368601761;
    tmp_msg_0.err = 0.39516338465175116;
    tmp_msg_0.ctrl_imp = 0.4668311825325795;
    tmp_msg_0.rel_dir_x = 0.03619865166717928;
    tmp_msg_0.rel_dir_y = 0.9977768849054588;
    tmp_msg_0.rel_dir_z = 0.2767971638470944;
    tmp_msg_0.err_x = 0.6761158849618251;
    tmp_msg_0.err_y = 0.9586278863496395;
    tmp_msg_0.err_z = 0.5728504421750047;
    tmp_msg_0.rf_err_x = 0.17941245971324205;
    tmp_msg_0.rf_err_y = 0.7613341468420174;
    tmp_msg_0.rf_err_z = 0.06517909888566265;
    tmp_msg_0.rf_err_vx = 0.3643421483349719;
    tmp_msg_0.rf_err_vy = 0.30770168537557685;
    tmp_msg_0.rf_err_vz = 0.8124609479890759;
    tmp_msg_0.ss_x = 0.9591880801725575;
    tmp_msg_0.ss_y = 0.21637998794964675;
    tmp_msg_0.ss_z = 0.6379215221229457;
    tmp_msg_0.virt_err_x = 0.47039175250277954;
    tmp_msg_0.virt_err_y = 0.33079967859209236;
    tmp_msg_0.virt_err_z = 0.9500855244454199;
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
    msg.setTimeStamp(0.30779635483074763);
    msg.setSource(42644U);
    msg.setSourceEntity(242U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(74U);
    msg.s_id.assign("UIQTHXOJLEWVDQFJZDBHHXDUIZLNIMZCUSCRMKYRLMTNUNO");
    msg.dist = 0.22907891060975327;
    msg.err = 0.4397802673295088;
    msg.ctrl_imp = 0.24301985806820026;
    msg.rel_dir_x = 0.9788521533642712;
    msg.rel_dir_y = 0.20731304243732762;
    msg.rel_dir_z = 0.07830105280900501;
    msg.err_x = 0.4141353597510756;
    msg.err_y = 0.7219832643999897;
    msg.err_z = 0.9085467406608572;
    msg.rf_err_x = 0.3196417084766635;
    msg.rf_err_y = 0.007657177574245222;
    msg.rf_err_z = 0.23853789434388084;
    msg.rf_err_vx = 0.7277225949245203;
    msg.rf_err_vy = 0.41919814077934225;
    msg.rf_err_vz = 0.08766922105024966;
    msg.ss_x = 0.5194245082930368;
    msg.ss_y = 0.8509410422400775;
    msg.ss_z = 0.9558773274888909;
    msg.virt_err_x = 0.6893214193816292;
    msg.virt_err_y = 0.5485411271349936;
    msg.virt_err_z = 0.5888079307452405;

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
    msg.setTimeStamp(0.677122098472627);
    msg.setSource(1443U);
    msg.setSourceEntity(176U);
    msg.setDestination(63290U);
    msg.setDestinationEntity(176U);
    msg.s_id.assign("DLSYEYBFOGINCUZWFABWKAMDLQBWEGJJSNLMZCAIHCPVOBFQQDWGNDQRUJMPNDNRCGXFHWTRDQXBUFFFMJNPAYYFLZIQSSTEKCXTGYZCRXXSKOCVHEZJXXJEITHJXTFAOZUNJMPAULBHZUGQRSKRHSILGAFNPIWYLVTRUZMTUTIDOEPOPHCRKVOVVOJBWG");
    msg.dist = 0.24543100258456751;
    msg.err = 0.953171474607264;
    msg.ctrl_imp = 0.6216665101670927;
    msg.rel_dir_x = 0.8182534804729982;
    msg.rel_dir_y = 0.18586105642413264;
    msg.rel_dir_z = 0.9590996333844977;
    msg.err_x = 0.05997381616373931;
    msg.err_y = 0.9887855310211915;
    msg.err_z = 0.738735779863109;
    msg.rf_err_x = 0.5851109709173751;
    msg.rf_err_y = 0.5010953129726129;
    msg.rf_err_z = 0.8995762248308092;
    msg.rf_err_vx = 0.29696261747191477;
    msg.rf_err_vy = 0.29959604497592573;
    msg.rf_err_vz = 0.0368474948990386;
    msg.ss_x = 0.6895669913358198;
    msg.ss_y = 0.6789229305044829;
    msg.ss_z = 0.35017470524407146;
    msg.virt_err_x = 0.6490221759792872;
    msg.virt_err_y = 0.35914372315481924;
    msg.virt_err_z = 0.9428316420631184;

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
    msg.setTimeStamp(0.11116641713717801);
    msg.setSource(19913U);
    msg.setSourceEntity(35U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(122U);
    msg.s_id.assign("TPOEVMPMJXSOOBPAYMJUODRKGJEHJUNRSVLSKWLZIHOTKDDRQDAT");
    msg.dist = 0.019649499188383657;
    msg.err = 0.8130830663141709;
    msg.ctrl_imp = 0.13825101862027367;
    msg.rel_dir_x = 0.4402447049195125;
    msg.rel_dir_y = 0.5987080569708101;
    msg.rel_dir_z = 0.08413849548491248;
    msg.err_x = 0.020909719533781068;
    msg.err_y = 0.7907240114719905;
    msg.err_z = 0.5386284337855443;
    msg.rf_err_x = 0.8335010950333817;
    msg.rf_err_y = 0.7108404538528371;
    msg.rf_err_z = 0.07935873844490726;
    msg.rf_err_vx = 0.02265346201578433;
    msg.rf_err_vy = 0.7746026826159645;
    msg.rf_err_vz = 0.6205812878142979;
    msg.ss_x = 0.6521200561924198;
    msg.ss_y = 0.5360025535226198;
    msg.ss_z = 0.16368833609212063;
    msg.virt_err_x = 0.847553273678665;
    msg.virt_err_y = 0.9129099510460872;
    msg.virt_err_z = 0.9678444551447392;

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
    msg.setTimeStamp(0.7589494188137376);
    msg.setSource(28406U);
    msg.setSourceEntity(130U);
    msg.setDestination(17522U);
    msg.setDestinationEntity(22U);
    msg.timeout = 23520U;
    msg.rpm = 0.7517311558886964;
    msg.direction = 195U;
    msg.custom.assign("PHQTKYEACILDQCSDCIPQBYUTOHZGBLERORHYNPVYOXFMKKHYXJLTKWBBNGWZVLRRTKOX");

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
    msg.setTimeStamp(0.9031342182487401);
    msg.setSource(47735U);
    msg.setSourceEntity(17U);
    msg.setDestination(40162U);
    msg.setDestinationEntity(186U);
    msg.timeout = 48011U;
    msg.rpm = 0.17783647366751998;
    msg.direction = 219U;
    msg.custom.assign("DRYEHBZQPYCJPYLMSXXZUEREQTDUGIMVVLVSSRTLXHTMYNFCQUZKQNPRJYPVFCLKGZGJYMMJZBPWJAZQHANJRNVIIDNOBCWUADHO");

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
    msg.setTimeStamp(0.2761441755425912);
    msg.setSource(39736U);
    msg.setSourceEntity(153U);
    msg.setDestination(28089U);
    msg.setDestinationEntity(115U);
    msg.timeout = 46877U;
    msg.rpm = 0.7012848288717306;
    msg.direction = 165U;
    msg.custom.assign("HNECVKBGQIKYHZTXMDFVEEHOGXLNAGQRQPPRIOPAAWJZHIQMVQNVASSNLQLSTAPGLFCNVUQWFRY");

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
    msg.setTimeStamp(0.4856090009452383);
    msg.setSource(43823U);
    msg.setSourceEntity(234U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(153U);
    msg.formation_name.assign("LGYVCQNQEBMYGWVBRXVSAZGCQDWNIFFSSPZWBLCDQGZQBUTBGQLYOIJETDBNEFYXXKNOPEOKSMHAGYSQBAXRXFTUWZJDJADMHKYCCHVJVQHRWCPMSFRRTCSOEELAXVDZPGLOINBSLJZX");
    msg.type = 137U;
    msg.op = 123U;
    msg.group_name.assign("KDCPBTKYNMNDTWUIQDIHDIOZYAFKWXSNUUTTWQBCLHOIBPGSOSUTVQXZVLSZLMFLNAVWRGOWHEUCARRHUOKTPHQEMBQRDFJMFLKRVOCKHXUHLONQMEEXPXQHRLTESJARXS");
    msg.plan_id.assign("BNNEGOTZSRYKACBPYIDOVEVLWUWWMBDBUFAWYHSDGCMRFWADSHLWMZIQGSLLJKCTFPQGUJRLZXIEZWFKMOJPTXEHPMGYKBCMKANUESSXZCBENOZREFUIFQCYYTFCJQRBPGXKFFZOWILZIJDJTXSVFEAQGPVQHNVAOALNOOPTDYDQMBZITYQXNHVRUYSMXLHJPRATVBXNHRKRCNVPGBHRZKOOTJMS");
    msg.description.assign("MOGSVVACYIKWAETHEZIJLEDDUXZPPAXFEQGUSL");
    msg.reference_frame = 118U;
    msg.leader_bank_lim = 0.2482497368071258;
    msg.leader_speed_min = 0.25924549041533074;
    msg.leader_speed_max = 0.45304567456102063;
    msg.leader_alt_min = 0.7607789973005001;
    msg.leader_alt_max = 0.648757193901952;
    msg.pos_sim_err_lim = 0.03942004764851126;
    msg.pos_sim_err_wrn = 0.40618348585660646;
    msg.pos_sim_err_timeout = 20052U;
    msg.converg_max = 0.5058019229492925;
    msg.converg_timeout = 47363U;
    msg.comms_timeout = 60729U;
    msg.turb_lim = 0.6408740785817497;
    msg.custom.assign("LRLMOOHOXXLZEKKGWUDFBIKZGQNTYBOHEJADABKVVHUNVBXLSISUDZIULCKNXCOYFCIZZQERMMEUGBJDKZTENTABVRDZIWOHHVYZYMFJQYMRTKH");

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
    msg.setTimeStamp(0.36605075396151765);
    msg.setSource(1305U);
    msg.setSourceEntity(88U);
    msg.setDestination(18780U);
    msg.setDestinationEntity(81U);
    msg.formation_name.assign("TGMOHCKRMUIVYMXANKWQYQRHHCRKUHNFFHVXBFAGSYLYWKSAQJKMCWJWZZSCJNESJKRXYBSBTCDZYRLE");
    msg.type = 174U;
    msg.op = 173U;
    msg.group_name.assign("HGMYCAEDBYDRJLXNWTSZEOUKMSSNLWHGUWLBCDSDRUGNLJUFSIIMOODMOROIZFAVCGNAJBXPQXEOON");
    msg.plan_id.assign("HVZXKIGVVKTKFOMNCEEOIMKSZVDUBQLBCMQFALUYALFBIFMYTGSGXOUUDHSHGFHWCQRTCLXIVQTKBEEWNPLJPGGEWLNJUNOZTYTSCQXFNBVUAHYZNQAXLZNXBYTJLHGKBDVRRJPAIDRZSFSDVNWOOHMZRQOAJRXMMAUGETZLUXWBWUPWBYAVZPPDGHFMWSRQFCCSJNJLEHPIRKIYQSPJMYZJYCJEKORADOGDEKUDCWWHTINBVPDFOQKAPRYMXI");
    msg.description.assign("KGUTPOBEHIJSYFNLOXNANIVIDAQRKHWLPRCIZFHVMJLC");
    msg.reference_frame = 91U;
    msg.leader_bank_lim = 0.20465916527609085;
    msg.leader_speed_min = 0.6276302165528665;
    msg.leader_speed_max = 0.8947400332948324;
    msg.leader_alt_min = 0.5406180000250622;
    msg.leader_alt_max = 0.08478838670454913;
    msg.pos_sim_err_lim = 0.54903034212805;
    msg.pos_sim_err_wrn = 0.27845386704612685;
    msg.pos_sim_err_timeout = 15170U;
    msg.converg_max = 0.8443112463607008;
    msg.converg_timeout = 62984U;
    msg.comms_timeout = 30958U;
    msg.turb_lim = 0.3432288692847314;
    msg.custom.assign("URIYSEHVMCGJTNETJLBXQMTXHURAVJAYFNKHDCRBCGIGFCFUSEDNTPRWKYFZZEWRBQFOQNGHDUBBIXGLWLPOSOCLFIGSOMEKBAZVLCDOWRMEIPZQWXYSUWMTZUZPGKA");

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
    msg.setTimeStamp(0.2799511454694955);
    msg.setSource(63674U);
    msg.setSourceEntity(246U);
    msg.setDestination(26487U);
    msg.setDestinationEntity(223U);
    msg.formation_name.assign("YHLUBTAZNSSDKIDTCVKYWRCQDVRBNGHBRJHDWFBFEKCETVDYIXWRGFCWJKJQVDFVITLOZYAMKOFJHRNAXS");
    msg.type = 83U;
    msg.op = 226U;
    msg.group_name.assign("RPYKTCGIVSYZLBUNIGWKWRTDJRTJQSWTEENJBSKITMTPAGVOSFZANZOPCMRUIDYNSDLLXBPWUPBCGFMN");
    msg.plan_id.assign("JPISWSOYEBCNVNNXYQIUGPOOZKVGTCVXCJXPYAPKJKMDALPGGZEKQHHQZJBRZZJDSRBOJMDIVISHPDKPBAXUUSJFLYRXGLSKTIUBBYMFAFLYKHMWUCNFBVVQZCKPVSANQFWLOGVRGMF");
    msg.description.assign("RUCEYQSIWMVSUKLWQJFCBAHZFXY");
    msg.reference_frame = 123U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15448U;
    tmp_msg_0.off_x = 0.284068992929585;
    tmp_msg_0.off_y = 0.38479977463427584;
    tmp_msg_0.off_z = 0.39404916367914133;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8436676770413991;
    msg.leader_speed_min = 0.6813863929098731;
    msg.leader_speed_max = 0.31516168864400895;
    msg.leader_alt_min = 0.9204504729631988;
    msg.leader_alt_max = 0.0853316379948611;
    msg.pos_sim_err_lim = 0.6504993533384213;
    msg.pos_sim_err_wrn = 0.8725518371516096;
    msg.pos_sim_err_timeout = 4474U;
    msg.converg_max = 0.3584901982868317;
    msg.converg_timeout = 41249U;
    msg.comms_timeout = 51282U;
    msg.turb_lim = 0.8834129646163701;
    msg.custom.assign("PGRECTUYXVDOEVXFPQPLOXPOQHWMAQZTBYCIKESTOSQTYUAIFOCHWXOJHWPZFQNGQCDF");

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
    msg.setTimeStamp(0.6913711639760155);
    msg.setSource(56329U);
    msg.setSourceEntity(40U);
    msg.setDestination(52895U);
    msg.setDestinationEntity(3U);
    msg.timeout = 64457U;
    msg.lat = 0.5383737044437795;
    msg.lon = 0.9225655491014062;
    msg.z = 0.49599146399139316;
    msg.z_units = 146U;
    msg.speed = 0.6823210900947232;
    msg.speed_units = 155U;
    msg.custom.assign("VVNPSNQTFWYEJQSQTMAGVUATHEQOLRMTXNKWCLYWJLAQFEKSMOICPAYSGIYWLSHVDXKNWJPSNJBACYBUJLGJVMUCDZMPIWQXXOLGOMRRHVJSCCWWKZDEYGYFTGYVEWJHOOUPBUAMLTQVEHKIMTZRVPUFBKEBZZANIEOIHICPROHRFBDQLMZEHTDCFB");

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
    msg.setTimeStamp(0.14272969865318308);
    msg.setSource(31667U);
    msg.setSourceEntity(147U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(207U);
    msg.timeout = 53270U;
    msg.lat = 0.8414544627185544;
    msg.lon = 0.7990929327235252;
    msg.z = 0.03752540901584667;
    msg.z_units = 166U;
    msg.speed = 0.48475375939610454;
    msg.speed_units = 200U;
    msg.custom.assign("OXFGNCVNDJHDDNEVJYXMSMSVWNQELUQKCICHBSHPRSSNKUMXDWIFLUBPZ");

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
    msg.setTimeStamp(0.12699583197292763);
    msg.setSource(38890U);
    msg.setSourceEntity(79U);
    msg.setDestination(15562U);
    msg.setDestinationEntity(225U);
    msg.timeout = 48586U;
    msg.lat = 0.11941015354160534;
    msg.lon = 0.26337625604505055;
    msg.z = 0.4731366123809816;
    msg.z_units = 51U;
    msg.speed = 0.6789093121278501;
    msg.speed_units = 206U;
    msg.custom.assign("LPRDSOULAKESBPPKZYMWSFWCQWKDXYXMWPVGWIGPRKGNZYUEAAGIRKZJUBDNAPEAEISLEDACROHEPMWHUCWQRLNLAQQGRUKBDDNDZSOYZLNPBINFXQFYTNYGNKRYJVJHPBCZHJCOOVBHMDWJHXVENDJXHZJQF");

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
    msg.setTimeStamp(0.18210479698733284);
    msg.setSource(45189U);
    msg.setSourceEntity(208U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(102U);
    msg.timeout = 2883U;
    msg.lat = 0.7239973018372647;
    msg.lon = 0.6119132773289582;
    msg.z = 0.794106961263006;
    msg.z_units = 227U;
    msg.speed = 0.2479426617504129;
    msg.speed_units = 72U;
    msg.custom.assign("KZRNHWNMLTHQZLRSBXGUXEHGQMXMYMPWBMHNVLCBCNYIHVCZVGDIQKGFOEXTZFKAWQOFUXLOCGRDDKSNBPTHVAIBNOJSQRUNEDKOFVAZTLHNSYCMPQIQGRDBJELDMJVEOWCXCAIFZCKWLRIHTUQYYPDEEZGPJFJFXTQYLSYSWNLIBDWOATNUWHUJBQKGJUFYYZFPDVOGCIMIRESXPZLXMYAJCFBEABJTWVAPZJKMHDRUESRAOGTPAR");

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
    msg.setTimeStamp(0.9784389153495254);
    msg.setSource(38292U);
    msg.setSourceEntity(19U);
    msg.setDestination(12186U);
    msg.setDestinationEntity(163U);
    msg.timeout = 63306U;
    msg.lat = 0.9444520761112931;
    msg.lon = 0.33974919502672574;
    msg.z = 0.28912279196547175;
    msg.z_units = 60U;
    msg.speed = 0.46853097705290103;
    msg.speed_units = 248U;
    msg.custom.assign("URNDOCHXJQMWHWWHVMXGERSROUCJKYFQLRYRSOUCKMKLZCXPUCOXGINVAAGOUSWBYFPHPQHGOILTWGFBCJUDLLTPACTLJXRSUYVFIWMN");

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
    msg.setTimeStamp(0.7924747879009585);
    msg.setSource(20040U);
    msg.setSourceEntity(109U);
    msg.setDestination(45767U);
    msg.setDestinationEntity(10U);
    msg.timeout = 29613U;
    msg.lat = 0.20890958709152874;
    msg.lon = 0.18443351969477362;
    msg.z = 0.0861174405924704;
    msg.z_units = 10U;
    msg.speed = 0.26253732713202316;
    msg.speed_units = 166U;
    msg.custom.assign("RUXQCGEBAOLCCCNGFKLKSSQFMCBDBZYNKWZJXKKEYVIERSVTREDXHLAPGBTSWAHBMTUTSJCKWPWCSXXOQGAJOVJTYXKLNIMT");

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
    msg.setTimeStamp(0.48170969119280904);
    msg.setSource(7964U);
    msg.setSourceEntity(3U);
    msg.setDestination(7352U);
    msg.setDestinationEntity(211U);
    msg.arrival_time = 0.8003224629894626;
    msg.lat = 0.7607997480815364;
    msg.lon = 0.6192808096261372;
    msg.z = 0.13488245613568228;
    msg.z_units = 130U;
    msg.travel_z = 0.4783684050751378;
    msg.travel_z_units = 167U;
    msg.delayed = 139U;

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
    msg.setTimeStamp(0.21697008611341284);
    msg.setSource(2588U);
    msg.setSourceEntity(37U);
    msg.setDestination(54394U);
    msg.setDestinationEntity(98U);
    msg.arrival_time = 0.12324332316367337;
    msg.lat = 0.04471317843334055;
    msg.lon = 0.025385567572923096;
    msg.z = 0.38312494472346603;
    msg.z_units = 222U;
    msg.travel_z = 0.8114096101005513;
    msg.travel_z_units = 13U;
    msg.delayed = 103U;

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
    msg.setTimeStamp(0.8771692925609489);
    msg.setSource(20511U);
    msg.setSourceEntity(232U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(80U);
    msg.arrival_time = 0.6025733117247711;
    msg.lat = 0.7723558566196437;
    msg.lon = 0.26239714026472793;
    msg.z = 0.7876249818014558;
    msg.z_units = 57U;
    msg.travel_z = 0.33485857073318703;
    msg.travel_z_units = 186U;
    msg.delayed = 36U;

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
    msg.setTimeStamp(0.9875101842770941);
    msg.setSource(34333U);
    msg.setSourceEntity(191U);
    msg.setDestination(64372U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.5844835518866848;
    msg.lon = 0.6103097788942768;
    msg.z = 0.42958879723103904;
    msg.z_units = 189U;
    msg.speed = 0.22251509473462183;
    msg.speed_units = 23U;
    msg.bearing = 0.8088486743701655;
    msg.cross_angle = 0.685504654512178;
    msg.width = 0.48501903348800046;
    msg.length = 0.7768223350695845;
    msg.coff = 178U;
    msg.angaperture = 0.7163416383421115;
    msg.range = 42151U;
    msg.overlap = 92U;
    msg.flags = 68U;
    msg.custom.assign("CTBJGFUQXJTMKJSFKBEHRWUCAGAVWPZUSDJDMSTNIEYBUDLONSFBOGZJECRLAGMCOIALEQHQJYHFCEAYRCUTPIRUTLITBXRDDLKMYMZZMNMHNPSZNWVHCEHLZZYTTGGYHIPIFVBIBXWGKBSPSNXEFRLSFKDQOGPKBWISVJDJFAPOONIYNQ");

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
    msg.setTimeStamp(0.779546290143358);
    msg.setSource(31940U);
    msg.setSourceEntity(117U);
    msg.setDestination(60939U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.3846590480663421;
    msg.lon = 0.9149746873716068;
    msg.z = 0.4805597257861939;
    msg.z_units = 224U;
    msg.speed = 0.4107100163761698;
    msg.speed_units = 224U;
    msg.bearing = 0.8409832831569883;
    msg.cross_angle = 0.18992737135152837;
    msg.width = 0.2525064923809761;
    msg.length = 0.3246955672147648;
    msg.coff = 229U;
    msg.angaperture = 0.3358720300457566;
    msg.range = 36673U;
    msg.overlap = 5U;
    msg.flags = 140U;
    msg.custom.assign("AMNBYWEGQJEDUAHACGYGNCTXOQJWLYGBMDUXKMTFZIXPAJGQSY");

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
    msg.setTimeStamp(0.3107123982054293);
    msg.setSource(28812U);
    msg.setSourceEntity(66U);
    msg.setDestination(39040U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.4363089762106199;
    msg.lon = 0.8014918988562845;
    msg.z = 0.805208971455361;
    msg.z_units = 122U;
    msg.speed = 0.4776230657212849;
    msg.speed_units = 86U;
    msg.bearing = 0.4301528734008261;
    msg.cross_angle = 0.5677110263679406;
    msg.width = 0.3155986698783375;
    msg.length = 0.8049101203832995;
    msg.coff = 241U;
    msg.angaperture = 0.36791215247312625;
    msg.range = 22717U;
    msg.overlap = 170U;
    msg.flags = 108U;
    msg.custom.assign("GQXROCSMPHAFHYLGQIQONRCXTBOZFZQPNLCQFJUWUYULWRXTJFAVMKDWTCJRZBWBIBLLQXZIEYKYROJYOBAFMPVULQDRMGCRTCZDNZHBGSIMHNTSCLBW");

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
    msg.setTimeStamp(0.3065994464687317);
    msg.setSource(18489U);
    msg.setSourceEntity(73U);
    msg.setDestination(61796U);
    msg.setDestinationEntity(253U);
    msg.timeout = 15488U;
    msg.lat = 0.9943308305420926;
    msg.lon = 0.34447101642433475;
    msg.z = 0.800366192558934;
    msg.z_units = 130U;
    msg.speed = 0.34962004728786633;
    msg.speed_units = 77U;
    msg.syringe0 = 93U;
    msg.syringe1 = 40U;
    msg.syringe2 = 110U;
    msg.custom.assign("ETXDDTAIZQZCONMOWPDWUCRNCPGFIUYTSRDVLMPSCDHWMEDEOLBFYWVWKGHQAHATFZRKKAWAOKSZHTCBDJCVTUQBZRQMCLLKZAVHLBXEDKBCFAQRIXDFYSJGGAGEYHEPILAPUTOKSJUUGLQESFFRFSYMQUJCZMYQNMXX");

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
    msg.setTimeStamp(0.33027833843501464);
    msg.setSource(27535U);
    msg.setSourceEntity(220U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(204U);
    msg.timeout = 57728U;
    msg.lat = 0.5221837275628347;
    msg.lon = 0.13083627879690674;
    msg.z = 0.6213357061922586;
    msg.z_units = 181U;
    msg.speed = 0.2591712039847557;
    msg.speed_units = 232U;
    msg.syringe0 = 47U;
    msg.syringe1 = 176U;
    msg.syringe2 = 222U;
    msg.custom.assign("CWMVFJEMNXNRJDFDJTGKYNIVRWCUTGRIRDQAXNFECYYOARKODYHBPSAIQYZXJGFLEKKPFZEORSUBGWMEUVURNXKTDXIPBCNIGHQMTIBHATEZFHCBQIUWAJVUARFBEK");

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
    msg.setTimeStamp(0.9056044111588777);
    msg.setSource(36522U);
    msg.setSourceEntity(164U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(72U);
    msg.timeout = 14323U;
    msg.lat = 0.3629909444689241;
    msg.lon = 0.31177503540144247;
    msg.z = 0.2168455761626864;
    msg.z_units = 152U;
    msg.speed = 0.6875772539170811;
    msg.speed_units = 94U;
    msg.syringe0 = 102U;
    msg.syringe1 = 193U;
    msg.syringe2 = 95U;
    msg.custom.assign("YVMOPEHDHMCFICSCTYUMGHSPXGEWSFNNJATNQSBLAIMCTIRGKDDDIBUPRXDMSECXQJKGKHVCTYIVJIQAOCEVHURVZKYPGUOJRZPNSVOXWPQIQVQMFVGEIUCDLQSRAJMVZSBAKRBKHRJZZNYOWBFMGGORJBLOQPVZLBOLELRKKUSXHYFUDRQYFJBBWM");

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
    msg.setTimeStamp(0.7995944141596927);
    msg.setSource(30213U);
    msg.setSourceEntity(173U);
    msg.setDestination(23300U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.387867643877566);
    msg.setSource(14324U);
    msg.setSourceEntity(145U);
    msg.setDestination(52042U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.252643594503683);
    msg.setSource(29311U);
    msg.setSourceEntity(55U);
    msg.setDestination(7123U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.6359971486203747);
    msg.setSource(15628U);
    msg.setSourceEntity(166U);
    msg.setDestination(4516U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.024145646653325636;
    msg.lon = 0.20139892640187118;
    msg.z = 0.9852598250134859;
    msg.z_units = 207U;
    msg.speed = 0.3597838253762772;
    msg.speed_units = 94U;
    msg.takeoff_pitch = 0.4829434852003207;
    msg.custom.assign("ZFXLUCPVCQOFMLDXVVVCDJKTOJUJGKHQURCQMUWLJEPASOYICWACDMPMYMIGHXAFNSUSOKQDSERJBGZGVBJALHWLAKOVIZKIBFMMFYRWZJNZKHIFPCVVBAQLRPHQFJNGWYXRBIESXNFLXZUYDCKAHOIIEPHRVNXDZFYOXEUBNOIQEHNKDUITRQVTSRUOACTZSDWGWRKENYATGPZT");

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
    msg.setTimeStamp(0.11745138643466813);
    msg.setSource(21186U);
    msg.setSourceEntity(142U);
    msg.setDestination(45074U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.9381856841211509;
    msg.lon = 0.22910682513547964;
    msg.z = 0.3391111454643052;
    msg.z_units = 6U;
    msg.speed = 0.6506657066909216;
    msg.speed_units = 6U;
    msg.takeoff_pitch = 0.7275359291087788;
    msg.custom.assign("KCLJGBVFUYAUAFQMAODIFYEMZVAFLANZYQJPCEJDGHSWBTLZIKMEZWJOPRMEWPPWESWPCTLXGMXUYMWFGANU");

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
    msg.setTimeStamp(0.5270041731670311);
    msg.setSource(2330U);
    msg.setSourceEntity(182U);
    msg.setDestination(35234U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.7980742834893867;
    msg.lon = 0.28005781426962284;
    msg.z = 0.5216377685326351;
    msg.z_units = 182U;
    msg.speed = 0.6806392168147989;
    msg.speed_units = 113U;
    msg.takeoff_pitch = 0.782044613120462;
    msg.custom.assign("SHVQEIGZPUNBDTJWPIKCDJPLMCICXUGRYZFTIIMXWQBBSDQTLBQPAYPVDMKIHPGRWAJKRYIGKHASOSMDHIVSOXEOBCSUGUGNYADJYFYZNFRGVQJFOHWDQZEHLVBQFTMLKREKCNMLNNECAKTUWCVLJQUNIRJPYJOHTOVCWZRPSZFKEMSYEMGDLKGWLFKXUJQSTHOFFEYXNZPBZRTXAHUOXNXYQFJD");

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
    msg.setTimeStamp(0.019320755369917397);
    msg.setSource(21025U);
    msg.setSourceEntity(229U);
    msg.setDestination(19871U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8412719509581821;
    msg.lon = 0.3498154510537925;
    msg.z = 0.06836047947722368;
    msg.z_units = 140U;
    msg.speed = 0.17788960764091621;
    msg.speed_units = 3U;
    msg.abort_z = 0.5081410617394669;
    msg.bearing = 0.4394019154728739;
    msg.glide_slope = 18U;
    msg.glide_slope_alt = 0.9719754029161041;
    msg.custom.assign("DKYZBMSSSTBEELJTLIYIFNLBJLJNBFVDZOGXNMCGJVCKHRWTUSTUXHXWKDELFKUROJNAVQBEQQFVQAXBJPICGDOCYYZVQUMIVVLFGRPEUDWHADWLTOSOUKZWIPPGEJHLXEPCCYJARIHUERMIFSGAGXSZUE");

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
    msg.setTimeStamp(0.6687513181227186);
    msg.setSource(63077U);
    msg.setSourceEntity(219U);
    msg.setDestination(15640U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.1803741794664695;
    msg.lon = 0.9363824510141615;
    msg.z = 0.4274058456556298;
    msg.z_units = 114U;
    msg.speed = 0.6319377117876194;
    msg.speed_units = 52U;
    msg.abort_z = 0.252574179237647;
    msg.bearing = 0.40393297534534656;
    msg.glide_slope = 98U;
    msg.glide_slope_alt = 0.4869652007591134;
    msg.custom.assign("ONCNRAREKTDZIHVMNFAQTMXBMZKVFNEHUMBWCEXQDVLSFDSKXMCXFQHZCEXBPYQMWLLUDXFCZCHXVMIOWYMOPOLZOJDQADSILMKCDUYNLNEOEPKJASPWNYXHRDGSPUGERKKORJZ");

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
    msg.setTimeStamp(0.6239695925024407);
    msg.setSource(2626U);
    msg.setSourceEntity(93U);
    msg.setDestination(54892U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.22005948227805816;
    msg.lon = 0.8135482312852312;
    msg.z = 0.9417903169006951;
    msg.z_units = 200U;
    msg.speed = 0.9825915349165327;
    msg.speed_units = 236U;
    msg.abort_z = 0.975401542023606;
    msg.bearing = 0.11378514178511501;
    msg.glide_slope = 220U;
    msg.glide_slope_alt = 0.8312334062642989;
    msg.custom.assign("ARZVEPZRJBDEILCVBUKFUTYZKWAIHTSIYHBWUKZQGOVFCXKDXSGGAIRDPUWDKZTSVAUQOOTKJBHNORVDLKULJZMHNDXHLOWZHZWLHASMGNGTMECOPRANEXWDCXRJQYFQRPUFXRHNZVGIAVYITZCSJQQCXFEFBLFVTYBWTEQOJQYIEWAEUHQXMMPFSCVHPLMCNLAIGBIRQJ");

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
    msg.setTimeStamp(0.4895481151948723);
    msg.setSource(36480U);
    msg.setSourceEntity(35U);
    msg.setDestination(35752U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.8446358555021378;
    msg.lon = 0.861232828161521;
    msg.speed = 0.59792374130574;
    msg.speed_units = 200U;
    msg.limits = 62U;
    msg.max_depth = 0.9307755893149652;
    msg.min_alt = 0.11707665865304362;
    msg.time_limit = 0.14932249496857208;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5265053498228508;
    tmp_msg_0.lon = 0.4590025878056394;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DFVQPPAUYUZRLTAOWWQGELEGKPJGQBJBRZFZMEPSROCQBQYWVVTWDBBQSVKZKFMSOVAJJHLRKRAORZRGCKUIHSCLTXEWJVNNKLRDMZSZJCEDSMMQCTUOJOBVCIEDIGUVFHFFSCGADNOXUNBWJPFQLQLMYOHTXNPIAVXUPYMNKTTISACQCXIXZDAIFYDLANLGNGYR");
    msg.custom.assign("WPQAVCQEBICMDJYFJGYDIALTPYNCYQQVEFHDGKLGBOOQBNFAZOLJSAHVNGPXMCKOGXQRWXFHXGHMEYMTWJJZKEENUTWQXKHUXIUT");

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
    msg.setTimeStamp(0.578032931995635);
    msg.setSource(8662U);
    msg.setSourceEntity(39U);
    msg.setDestination(17975U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.4714154101791208;
    msg.lon = 0.3958477634359375;
    msg.speed = 0.5217661864465657;
    msg.speed_units = 237U;
    msg.limits = 183U;
    msg.max_depth = 0.017959245265298462;
    msg.min_alt = 0.1867045398265771;
    msg.time_limit = 0.00931815844016104;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38666707099932296;
    tmp_msg_0.lon = 0.4577124482563574;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KAGNYLIUYOPMCAOGLIRTOPOOPUNQYCRBXCHLGEXMAIBCJWHIQYKNYAQUZCWKVZPSECYXFBJCVWVHNWEIBQHNTUGIMZAGT");
    msg.custom.assign("RBDIBLVZYZAUIMIDECOSSRJKHEFISVWYPPMBHQRNBKAYGOSEJKLSVRAQIFWYPVAONWLVPXWJGXGUCFNXWLMTJBTHGRGKKYOEATWRQQGZWXNJUEHWHMCWKHXIZQNAEKTQBJDKPSQBEX");

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
    msg.setTimeStamp(0.5296875822224303);
    msg.setSource(24270U);
    msg.setSourceEntity(207U);
    msg.setDestination(49682U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.22348281835388872;
    msg.lon = 0.926327345383902;
    msg.speed = 0.5060464536005148;
    msg.speed_units = 220U;
    msg.limits = 36U;
    msg.max_depth = 0.2557614098923081;
    msg.min_alt = 0.4189878732785538;
    msg.time_limit = 0.21903113923118245;
    msg.controller.assign("ZSHUXDPQAIWNMRMMTWIZOAXJRWNHXKICVWFLEVYBXIPGZCETKFNGVUUTALTKDMQAJOIXCZNLEEAPYTPTJH");
    msg.custom.assign("BSVLHIITWXPWHJVOMZULTZJPCLVJBFAIJD");

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
    msg.setTimeStamp(0.11012293283621455);
    msg.setSource(24096U);
    msg.setSourceEntity(225U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(223U);
    msg.target.assign("UPOBQTYSHWOQEMBIFFTEBHSPGNIQYWICOXZZMEKSBAYIFFBXZFHZIVNMBLGGADRSJQKQASOJRMJDMAFYHLCVSAFVLCRSCVRIWAVJEEGWCLQOGCJZYZVPJIMUDQSXJWLTXPGBLXARKZWWVRKCFNLDEZLNYGPCNQMAXJGPN");
    msg.max_speed = 0.012074740714448695;
    msg.speed_units = 154U;
    msg.lat = 0.025042096424099713;
    msg.lon = 0.4345229800494511;
    msg.z = 0.5294730376871206;
    msg.z_units = 91U;
    msg.custom.assign("HIHZGHFKEWABUXKJWNJILSJPBOGGPXXSDWUWDYQPJKXCXWBTZQJHDLIACULDSFULKCMMXZJQEPLPYUIFYRRFZMHEEORFGIEFVBHWBOIUDLQNTQNVBGMXMHAROJKDACSYHAOPBQBSVFUNXNZCIO");

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
    msg.setTimeStamp(0.5166964344204568);
    msg.setSource(6660U);
    msg.setSourceEntity(11U);
    msg.setDestination(59949U);
    msg.setDestinationEntity(50U);
    msg.target.assign("XALLHSGJFMNKWYZMOYFBDWCDREIAYIGHQIVXTWSSBQRGYUJTSKRDNORTVIOUSDDVGFKQMLEEDZYBINCWJSUTBPQWNRORUXORAHBXMZCVNOSXYRXBQSFZCAZKNFDJOFJMVXZIJPVNAECRLHHHGYRABUDFCZEEWBOPZYCPBG");
    msg.max_speed = 0.666552841930383;
    msg.speed_units = 205U;
    msg.lat = 0.8819632038927516;
    msg.lon = 0.6902708308771287;
    msg.z = 0.7566362034845815;
    msg.z_units = 56U;
    msg.custom.assign("OZQSLRQHRDHSOECWKIY");

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
    msg.setTimeStamp(0.3292144573935466);
    msg.setSource(52114U);
    msg.setSourceEntity(50U);
    msg.setDestination(30197U);
    msg.setDestinationEntity(48U);
    msg.target.assign("FRUGZDGBUGAEAMZAJNDKATDIYLVKPAEPVIHVHFNHYXMJZSCWLNCZPNDFGJEWVINKFYKCPJRHVOBWWCMHXGEQOQMBZKCJETIPJRPUIGAAXJSMYLYQRKIXYOZFDNWSESVKUUTOXJBQWBNCDHLTUMGXZYTNTROZ");
    msg.max_speed = 0.482923459445183;
    msg.speed_units = 136U;
    msg.lat = 0.7745589268800536;
    msg.lon = 0.6869227832782769;
    msg.z = 0.35019655174343567;
    msg.z_units = 222U;
    msg.custom.assign("BDRXZOBECVESNUGSIGFIHQKCJPZGAPWPHIUXFADUTTKUWKONKUTPCERTQOMHSOEEAKOWDDEDWMMRHPJDVFOFNKXEJBVBACVOXLYWWJHZTMAYRUYFUVYFIGKCNKPLDQGBYKOAVNTLBCZPIRSZDMMJTPCXHGMMYPBLTQZGIRQTWLZCQZHLIOQQAODFEJSFFVLYSHVINUZCXSBWFNRYJSHQRRUIWMLURDXNASXGXAHVTBEYIQP");

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
    msg.setTimeStamp(0.7033213190373122);
    msg.setSource(54906U);
    msg.setSourceEntity(63U);
    msg.setDestination(65354U);
    msg.setDestinationEntity(85U);
    msg.timeout = 39661U;
    msg.lat = 0.42859964479496027;
    msg.lon = 0.4189004848190755;
    msg.speed = 0.9268323515490691;
    msg.speed_units = 201U;
    msg.custom.assign("OTCUYCBJOTYSWUEWIZTHUSMKFXBNVEXLDCYJGTCGWNRLKNVSTNRHSEZVHFVSHCCFTDUDGJZMLIIGJLNWYGSVHFBTMGQBIYPNKCVOFGOAFQARJTLD");

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
    msg.setTimeStamp(0.4960736770163978);
    msg.setSource(16218U);
    msg.setSourceEntity(186U);
    msg.setDestination(38277U);
    msg.setDestinationEntity(228U);
    msg.timeout = 64113U;
    msg.lat = 0.9829099737211856;
    msg.lon = 0.1875212663324265;
    msg.speed = 0.32594001907388737;
    msg.speed_units = 90U;
    msg.custom.assign("HECSSFPLRXBRGVNDGBITTXSKNPDKVUOAIFHLCOWQPYFLVVCFQZNRZIXRJATIWQBBUMOZZUKRJPTUOHHXDCGHREEWZDGWYUZWEADMKFJMRBNXHQUNJQOQZQSELZLAMVOMKMKGTSSDMMGYQVFLHUENJSJYVXBCIRRYDCOMUMKGNAVAQVSVLZPWPOSLTAIINYSTXPA");

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
    msg.setTimeStamp(0.1945575209625915);
    msg.setSource(23759U);
    msg.setSourceEntity(78U);
    msg.setDestination(9955U);
    msg.setDestinationEntity(97U);
    msg.timeout = 23257U;
    msg.lat = 0.14179650644406194;
    msg.lon = 0.2612864523868321;
    msg.speed = 0.1431665212880724;
    msg.speed_units = 88U;
    msg.custom.assign("UJOFFRPUEKDWCRRZFAENFNEHKEVNZ");

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
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.6565603502872936);
    msg.setSource(38125U);
    msg.setSourceEntity(118U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(216U);
    msg.control_src = 35970U;
    msg.control_ent = 186U;
    msg.timeout = 0.09541729435404911;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.45398509433452017);
    msg.setSource(39468U);
    msg.setSourceEntity(242U);
    msg.setDestination(26629U);
    msg.setDestinationEntity(102U);
    msg.control_src = 59256U;
    msg.control_ent = 28U;
    msg.timeout = 0.908372977705777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.7085556686863687);
    msg.setSource(51434U);
    msg.setSourceEntity(78U);
    msg.setDestination(38646U);
    msg.setDestinationEntity(239U);
    msg.control_src = 35730U;
    msg.control_ent = 182U;
    msg.timeout = 0.10852301613799997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.48651348756061996);
    msg.setSource(7443U);
    msg.setSourceEntity(157U);
    msg.setDestination(21313U);
    msg.setDestinationEntity(39U);
    msg.flags = 86U;
    msg.speed = 0.6373291690471811;
    msg.z = 0.19762863581018342;
    msg.heading = 0.0413873459941656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.47000453206379533);
    msg.setSource(15047U);
    msg.setSourceEntity(189U);
    msg.setDestination(9036U);
    msg.setDestinationEntity(62U);
    msg.flags = 215U;
    msg.speed = 0.18062824568163716;
    msg.z = 0.44031487759745036;
    msg.heading = 0.5531474126194554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.13868278275473234);
    msg.setSource(24157U);
    msg.setSourceEntity(242U);
    msg.setDestination(36686U);
    msg.setDestinationEntity(98U);
    msg.flags = 96U;
    msg.speed = 0.8778481368580404;
    msg.z = 0.2257787782810201;
    msg.heading = 0.6673857587931561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.22623280427948222);
    msg.setSource(20903U);
    msg.setSourceEntity(245U);
    msg.setDestination(25187U);
    msg.setDestinationEntity(67U);
    msg.control_src = 30061U;
    msg.control_ent = 238U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 196U;
    tmp_msg_0.speed = 0.13365801312977255;
    tmp_msg_0.z = 0.8177313222551175;
    tmp_msg_0.heading = 0.610788214396961;
    msg.command.set(tmp_msg_0);
    msg.state = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.07337695867737459);
    msg.setSource(46461U);
    msg.setSourceEntity(86U);
    msg.setDestination(54790U);
    msg.setDestinationEntity(217U);
    msg.control_src = 6163U;
    msg.control_ent = 42U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 160U;
    tmp_msg_0.speed = 0.6596929308272144;
    tmp_msg_0.z = 0.2380576823200159;
    tmp_msg_0.heading = 0.33226095315124193;
    msg.command.set(tmp_msg_0);
    msg.state = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.13338928951546347);
    msg.setSource(23845U);
    msg.setSourceEntity(200U);
    msg.setDestination(21397U);
    msg.setDestinationEntity(6U);
    msg.control_src = 35049U;
    msg.control_ent = 4U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 108U;
    tmp_msg_0.speed = 0.046329123453136;
    tmp_msg_0.z = 0.7981040829333607;
    tmp_msg_0.heading = 0.5540109829168315;
    msg.command.set(tmp_msg_0);
    msg.state = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.18761458767783856);
    msg.setSource(51825U);
    msg.setSourceEntity(86U);
    msg.setDestination(61672U);
    msg.setDestinationEntity(105U);
    msg.timeout = 29920U;
    msg.lat = 0.5782500071664031;
    msg.lon = 0.26438428091425215;
    msg.z = 0.7510233320647216;
    msg.z_units = 66U;
    msg.speed = 0.39042433076939465;
    msg.speed_units = 122U;
    msg.bearing = 0.3778533103434121;
    msg.width = 0.5511683440756477;
    msg.direction = 49U;
    msg.custom.assign("LBXYWIPPSZNLGARJNZAMBKXRFYKVVHBYNUWGTPXKZDTXIVKPHQTMKFWVYJOROEQPLGGKAYAEEWTDNUPMFHSLLMCBIIMQZDLUDIOGCXHBJJTEYFNNHFTXEJSCAYSVFCZ");

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
    msg.setTimeStamp(0.3287684344488626);
    msg.setSource(4844U);
    msg.setSourceEntity(227U);
    msg.setDestination(63088U);
    msg.setDestinationEntity(188U);
    msg.timeout = 24739U;
    msg.lat = 0.4466695466223273;
    msg.lon = 0.793962474195764;
    msg.z = 0.43120538326276037;
    msg.z_units = 227U;
    msg.speed = 0.19095106482854007;
    msg.speed_units = 204U;
    msg.bearing = 0.21670950283662493;
    msg.width = 0.9029344779854899;
    msg.direction = 75U;
    msg.custom.assign("SDNXVCTJGSDWFSFKYNGNWILZQZTAXNLHGKZOXMAUXOCJMDXEYESWKQLCGUMTNIPQWRUIEKKRIDBVGXAFZQDIARZPVGQQOUEZPPJQYADFX");

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
    msg.setTimeStamp(0.9215716796537673);
    msg.setSource(3273U);
    msg.setSourceEntity(230U);
    msg.setDestination(12890U);
    msg.setDestinationEntity(30U);
    msg.timeout = 54235U;
    msg.lat = 0.5128794437968257;
    msg.lon = 0.3965142520143793;
    msg.z = 0.7210643158761353;
    msg.z_units = 196U;
    msg.speed = 0.4993652084378474;
    msg.speed_units = 15U;
    msg.bearing = 0.9303766841541344;
    msg.width = 0.3527255115981609;
    msg.direction = 251U;
    msg.custom.assign("JGLKHUKXEGXWHXIHTTKODLRQRAQKLNQBTNHXDWMASJNVITLFEGOBTTWXIPLZHUKYHRJNZYEXOTWUQFAEFZGMSMDHQMSMPANWEYPEUZCRVUI");

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
    msg.setTimeStamp(0.810535795676762);
    msg.setSource(33709U);
    msg.setSourceEntity(53U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(151U);
    msg.op_mode = 171U;
    msg.error_count = 147U;
    msg.error_ents.assign("TBOWZNHRTXIPRLUSFTZGRGUQURKADHSSOVAVBPBCJYDEXATTNLXWFVCOPPUMYQZLMTABUNJWQRYIMGUNMURFWIEDVVWKOIYHXPMGMICCOTELHRYBSACNUAACWXRFWEMNAOIEAZJVCRWEVHOQHFXKYNAFTLITMZTZVVGSSDBZKKDGUYJK");
    msg.maneuver_type = 6942U;
    msg.maneuver_stime = 0.040079532909278126;
    msg.maneuver_eta = 3542U;
    msg.control_loops = 3053292712U;
    msg.flags = 117U;
    msg.last_error.assign("TEUCITURVTEUGEQBCXDHNLDBWBKQZUPDFELOQQYDGLANSJVX");
    msg.last_error_time = 0.4698242151465327;

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
    msg.setTimeStamp(0.5451463805319513);
    msg.setSource(56474U);
    msg.setSourceEntity(155U);
    msg.setDestination(65339U);
    msg.setDestinationEntity(124U);
    msg.op_mode = 166U;
    msg.error_count = 201U;
    msg.error_ents.assign("WLGHZIUWWHPAMBLSESHWSJFOZFVQPMJBLJFUREGVTUBWSAAAYDFEJDUFMDPCKIBNNQTXECPXHIZQLNSGHRXKYWRKBOKNGLIZAVIMGYGNRBVDLKHQQTPGYTCCFFZUUHXBDNJXTVCNWGTJRZIMCIQDEPWKYYKXSHECPFAHEQ");
    msg.maneuver_type = 25393U;
    msg.maneuver_stime = 0.8016400106254178;
    msg.maneuver_eta = 61194U;
    msg.control_loops = 2534903468U;
    msg.flags = 249U;
    msg.last_error.assign("KCMHQSZAAAIGOSQFDYOOBHFPBJMWQIPXMVTHIVHJADCATVLYMBIRYVIQNMZCFJUDCSTDPRZGOCFTRUJILLNYRODBEYSBEQXCUTQJIXPNQBVUAZVIWGSDTKUSKDPLRXUGTFNKWXBVPJWCHVFUKPGNYGVECFR");
    msg.last_error_time = 0.9296588371259653;

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
    msg.setTimeStamp(0.17520948955518056);
    msg.setSource(23158U);
    msg.setSourceEntity(82U);
    msg.setDestination(49380U);
    msg.setDestinationEntity(148U);
    msg.op_mode = 2U;
    msg.error_count = 221U;
    msg.error_ents.assign("HYMUPNKPFMFBWYUEFMZQFNYFGLSSCESCGKDHLRAYEOLGPKXIIIYSNYFHGWVLBSDOJUUGKRQBAOMGSJSZLLUXDPKSDCMEVTYXTHDXARXTLTUEIQOTHZAHXTAWFNJZGYOVCWIKUMNIECBTKWTPWGRZVFZXARWOBVAHRVFZMJEXNKPYDGRWQPKKFACZXMCDRIVWBBSJCNAQHBJQTUROCLDIIJOPP");
    msg.maneuver_type = 44657U;
    msg.maneuver_stime = 0.9836272367566801;
    msg.maneuver_eta = 39307U;
    msg.control_loops = 3022551439U;
    msg.flags = 126U;
    msg.last_error.assign("NXYLNDTBQAHRFJDIWVPKZMGKEHBXZRZPTTIPIALVJGRYEIVKNEHAMULMRGBXPDKDLYRPTORPAJTZMMCOWEUBKZYIGHMATOHSMFNFRLVDXEGIUWFUQMPCHMASGTBXWZISLVEYFWSEZXZNKJWWBGGOPSLVCJBOVFFNGF");
    msg.last_error_time = 0.47644225649850747;

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
    msg.setTimeStamp(0.709361633947471);
    msg.setSource(35003U);
    msg.setSourceEntity(173U);
    msg.setDestination(19741U);
    msg.setDestinationEntity(188U);
    msg.type = 249U;
    msg.request_id = 18323U;
    msg.command = 174U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 17673U;
    tmp_msg_0.lat = 0.09611708513932415;
    tmp_msg_0.lon = 0.6904828939169663;
    tmp_msg_0.z = 0.04629064211023237;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.3021357203668741;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.custom.assign("NFMCGESLCUVNOZUIOXOQNTBUXPERIYKSZMXQHFAPDCCNHILAIOAAEVYXTTGQNQLYICDGBUKPYNZULMGEAHRGJI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11794U;
    msg.info.assign("WKZSVKTOSFLAMOIDVNUKLZMHYCHIQCZRVAXZAKUHWPYJZXXYBIYBGARMTDJ");

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
    msg.setTimeStamp(0.08039925051012542);
    msg.setSource(36653U);
    msg.setSourceEntity(112U);
    msg.setDestination(10382U);
    msg.setDestinationEntity(39U);
    msg.type = 48U;
    msg.request_id = 4136U;
    msg.command = 48U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 49234U;
    tmp_msg_0.control_ent = 137U;
    tmp_msg_0.timeout = 0.17838477306245593;
    tmp_msg_0.loiter_radius = 0.3635984684692275;
    tmp_msg_0.altitude_interval = 0.8267862063247536;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12114U;
    msg.info.assign("ZPGRIAIYOQKCFJQHGWCQPMRJRLBYQKSCPPUBLXMQUIBNDIRLOJEBJAUIVMXEMTDNIZRJSPWAREYW");

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
    msg.setTimeStamp(0.8449365622257982);
    msg.setSource(14520U);
    msg.setSourceEntity(124U);
    msg.setDestination(33374U);
    msg.setDestinationEntity(73U);
    msg.type = 84U;
    msg.request_id = 36061U;
    msg.command = 121U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 43193U;
    tmp_msg_0.lat = 0.08210914026443705;
    tmp_msg_0.lon = 0.5797923341128308;
    tmp_msg_0.z = 0.48413128231140745;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.29320917720396344;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.roll = 0.9511095058630127;
    tmp_msg_0.pitch = 0.49550233559031764;
    tmp_msg_0.yaw = 0.959279896812858;
    tmp_msg_0.custom.assign("GDTHAYMZJHLEYPBJLKDIARDRLTPESSNMKFTYSPNEWXXNQIRICFNGJQZZKYOISLHUUVBGAQQMFYCGPCHNUVWXEPEQJYVHANOXVDOJSYTXTCRFPGSMXYVZBLBKEDEMMFAGMSUSBCFCUMAXAAFZJVQZPYGUDWPEPTTVIBOBWGTNDWQIXELLMJWDKOJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17134U;
    msg.info.assign("ARCWBTAAOZDNRXGHJKVACHHHDUGDZXOAXDMQDRZSGESBXGKFYURAZNPUEHJIDORBUKREBIID");

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
    msg.setTimeStamp(0.12329558154300246);
    msg.setSource(64716U);
    msg.setSourceEntity(39U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(206U);
    msg.command = 17U;
    msg.entities.assign("XTUPYDHSNIQYIZLMFPUQYKXYNOESSOLUEHFKBDRLVNOLIILBVWXNTNGEAGWBRBYAGGMIQJMDZZKSVMCBGUOOGRO");

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
    msg.setTimeStamp(0.28714104510095206);
    msg.setSource(48830U);
    msg.setSourceEntity(232U);
    msg.setDestination(33396U);
    msg.setDestinationEntity(240U);
    msg.command = 12U;
    msg.entities.assign("NLTUWXLDTVQSSMJAVPMGVONFWHFISHTNVYSJVQNFCVKKZZZKXVYARYMECABXXIPGWFBWMCHDSPDZSUSHWTUOZGEIXPWLXGRYECBLMQDMJAZNUXNLVWBMFWTCMCJKQIK");

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
    msg.setTimeStamp(0.035720795695862506);
    msg.setSource(154U);
    msg.setSourceEntity(197U);
    msg.setDestination(29180U);
    msg.setDestinationEntity(97U);
    msg.command = 121U;
    msg.entities.assign("SEBCBFEZNUHGSSZIGMA");

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
    msg.setTimeStamp(0.8918847781091576);
    msg.setSource(32020U);
    msg.setSourceEntity(212U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(113U);
    msg.mcount = 38U;
    msg.mnames.assign("ENUUKELQOIQD");
    msg.ecount = 0U;
    msg.enames.assign("HECOQRFRRFILXBUSCNGOLHJXHBRDCLBJISLYAQGPGREKDFXOOETADCMPBQLUVZJLISDYHYOQYZEAGQEDFHPXUOJB");
    msg.ccount = 92U;
    msg.cnames.assign("QOSYEMBXWJLIDIUCVWWOHYEWGYOGLVBDTNUKEMGAVDGQMBMQWXVLAYVXQRJBLKQKIKAZJSXJEPSDMPZDGKAFRHMFSCNLHRODQFMNJBWTIORFLGVOA");
    msg.last_error.assign("YZHUKCRRAUBSNSUDQCIYANSZXQMBCXLTOWPQFTUVNPBVGYILOBETWEEBMJNNNPJVXTPFDNRFSESFWUBMRZLOTSHRAIKWPOEWGMJNCYDDMOPWCGYZFMSGCCRILAXJKWZTMUOQIIFUSYZAXHEHNDZLGKJTLZWXQJGYJESDSROFTPXZDDAFVUDIZXKB");
    msg.last_error_time = 0.8313099794460073;

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
    msg.setTimeStamp(0.20477409945608271);
    msg.setSource(13243U);
    msg.setSourceEntity(211U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(239U);
    msg.mcount = 33U;
    msg.mnames.assign("KZWWVTJXFBRDLXWJDBCIEHTVMGIDXBQGFAOHYVPMPPNYWJKHMDKMSCVBSHDQKFNVPVMFAASKUZSUUJXVCAEPDQHGMRXGJOEY");
    msg.ecount = 63U;
    msg.enames.assign("VUIFYIQOZVVMSVNHGACWCOEPCZHRQZMZGCOFLIKRXYAWWDIVSUUPZMPIZTHMUWYHOISRYXOVGZHNBNDGBCUSJLDMWNBPLRHQ");
    msg.ccount = 181U;
    msg.cnames.assign("WJJENVSHBSIYRNBFLOQOGVYNQMAYWRCZJAMJYDTPIVWPFUCMEKXKHLQPCADJHEFFWXOYDEMRYCHGVQKCQOXVUGPVOBXDRHSEDBXYHBPREFZFJDBKVCMGASOFFYZQLXHZJTCULZZKADOHDM");
    msg.last_error.assign("TNAJDEQKPADBMMUBNVCHOYVPMANEXXLJCNFIP");
    msg.last_error_time = 0.7915334394326924;

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
    msg.setTimeStamp(0.9703160682287562);
    msg.setSource(49678U);
    msg.setSourceEntity(229U);
    msg.setDestination(33806U);
    msg.setDestinationEntity(241U);
    msg.mcount = 209U;
    msg.mnames.assign("BNKRRABGSDNYJELQXBHOOOVFLPMHHFSAZGCMCDFDNVQSICTMQSFUZKLCXVYCBCRYRQCIQJYTMBOQEOFZMYUJYAFJZWNKTTKWCBDOYSDGYRNNIWKJGVXZWAKPLVMZJQXBEGGWJHMAEBHUHTVWKUESUMRVUZBFWXWJZLPSAHLIZYASKGIHXEXSGOLPGLEIRNCDVTNPKMHWUXVFIAEFQPO");
    msg.ecount = 250U;
    msg.enames.assign("AVARFYQDWAFYZMOPSZASDNISCXXIRRVPKUSCOFSVITHZVTSJVKCYZWOQZZOLEWGTAUTMWMXFZJXZFHUEPSWHLFMHYRYBGEMGKYGAUPBEWUMXTHHBCQCIYZDGFJNXAFQMBFQNUQERDCVULWGGOQEOJMLXRAMCRNNLUKRWGZRVEINPNYKY");
    msg.ccount = 254U;
    msg.cnames.assign("MKFMTQYPQXYCUNZDDQAIHFINDTFJHQPOYHHMJQXDGYGZEIUPPIVVNHZKRKRCKOFUEIPIWXHLQMWHPYOLXCKLWPBAECWSNRCUXZNQFSAASSBXW");
    msg.last_error.assign("KJPSVSROLUWDRAGKFWKMPXNARCWIVHNQHVXEYOTWVUYCRGPEMJZGJGNZFUUAZTSTSCUQKRVADZMDIXKVIQXYOMWKKIFUANGNDQIJHBEIWTALAMIMKYEUTOLLXVXIGWDMNJHUBRAFJKCBHCGFQYQHJRZTFWBPSEOFRECNMSVZUT");
    msg.last_error_time = 0.030473773605038557;

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
    msg.setTimeStamp(0.7758008386962291);
    msg.setSource(25822U);
    msg.setSourceEntity(203U);
    msg.setDestination(15837U);
    msg.setDestinationEntity(150U);
    msg.mask = 96U;
    msg.max_depth = 0.7080581078497489;
    msg.min_altitude = 0.4160925171674572;
    msg.max_altitude = 0.41777265908424854;
    msg.min_speed = 0.32272356173705063;
    msg.max_speed = 0.1749071007477805;
    msg.max_vrate = 0.04805159499441192;
    msg.lat = 0.36463432571443044;
    msg.lon = 0.3711167295813266;
    msg.orientation = 0.8324946455618286;
    msg.width = 0.3745718405102806;
    msg.length = 0.015129576225195729;

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
    msg.setTimeStamp(0.14518396948869494);
    msg.setSource(4268U);
    msg.setSourceEntity(155U);
    msg.setDestination(29896U);
    msg.setDestinationEntity(237U);
    msg.mask = 205U;
    msg.max_depth = 0.5461738581579321;
    msg.min_altitude = 0.47223185521474187;
    msg.max_altitude = 0.7227204280775222;
    msg.min_speed = 0.23442318306006593;
    msg.max_speed = 0.6394032893190503;
    msg.max_vrate = 0.360896058438235;
    msg.lat = 0.002149823727233713;
    msg.lon = 0.7650783558405824;
    msg.orientation = 0.04737528057376983;
    msg.width = 0.23927433921295338;
    msg.length = 0.6047598365976844;

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
    msg.setTimeStamp(0.6903644402831154);
    msg.setSource(10813U);
    msg.setSourceEntity(250U);
    msg.setDestination(45700U);
    msg.setDestinationEntity(72U);
    msg.mask = 41U;
    msg.max_depth = 0.12828965478871113;
    msg.min_altitude = 0.8290004229075784;
    msg.max_altitude = 0.1661414965725001;
    msg.min_speed = 0.13136086933450286;
    msg.max_speed = 0.13768687658265022;
    msg.max_vrate = 0.5886519681405696;
    msg.lat = 0.8762695837661376;
    msg.lon = 0.6084291250938914;
    msg.orientation = 0.6247801497539615;
    msg.width = 0.2134593509471694;
    msg.length = 0.9349305077670202;

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
    msg.setTimeStamp(0.9194618464220733);
    msg.setSource(9964U);
    msg.setSourceEntity(89U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.690829304781367);
    msg.setSource(35168U);
    msg.setSourceEntity(24U);
    msg.setDestination(56376U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.4370367646047876);
    msg.setSource(14108U);
    msg.setSourceEntity(29U);
    msg.setDestination(26453U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.5880560713717544);
    msg.setSource(32524U);
    msg.setSourceEntity(17U);
    msg.setDestination(40306U);
    msg.setDestinationEntity(44U);
    msg.duration = 15513U;

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
    msg.setTimeStamp(0.5632750031449358);
    msg.setSource(51301U);
    msg.setSourceEntity(68U);
    msg.setDestination(2181U);
    msg.setDestinationEntity(132U);
    msg.duration = 49784U;

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
    msg.setTimeStamp(0.1037508686851305);
    msg.setSource(30432U);
    msg.setSourceEntity(73U);
    msg.setDestination(11517U);
    msg.setDestinationEntity(102U);
    msg.duration = 6556U;

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
    msg.setTimeStamp(0.6165756794014888);
    msg.setSource(50042U);
    msg.setSourceEntity(48U);
    msg.setDestination(49000U);
    msg.setDestinationEntity(207U);
    msg.enable = 140U;
    msg.mask = 3215063485U;
    msg.scope_ref = 2437087364U;

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
    msg.setTimeStamp(0.4895251671455718);
    msg.setSource(27069U);
    msg.setSourceEntity(168U);
    msg.setDestination(5439U);
    msg.setDestinationEntity(159U);
    msg.enable = 201U;
    msg.mask = 3617602385U;
    msg.scope_ref = 116301402U;

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
    msg.setTimeStamp(0.21165285871460326);
    msg.setSource(58270U);
    msg.setSourceEntity(71U);
    msg.setDestination(44517U);
    msg.setDestinationEntity(37U);
    msg.enable = 135U;
    msg.mask = 2750478257U;
    msg.scope_ref = 1074477440U;

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
    msg.setTimeStamp(0.2766405132858317);
    msg.setSource(813U);
    msg.setSourceEntity(99U);
    msg.setDestination(52258U);
    msg.setDestinationEntity(182U);
    msg.medium = 181U;

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
    msg.setTimeStamp(0.6829263800306762);
    msg.setSource(54971U);
    msg.setSourceEntity(233U);
    msg.setDestination(29832U);
    msg.setDestinationEntity(154U);
    msg.medium = 216U;

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
    msg.setTimeStamp(0.9422597570935123);
    msg.setSource(23888U);
    msg.setSourceEntity(4U);
    msg.setDestination(57773U);
    msg.setDestinationEntity(223U);
    msg.medium = 52U;

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
    msg.setTimeStamp(0.6224076392110764);
    msg.setSource(20736U);
    msg.setSourceEntity(54U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(184U);
    msg.value = 0.08513233970128131;
    msg.type = 200U;

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
    msg.setTimeStamp(0.32590402609759794);
    msg.setSource(42414U);
    msg.setSourceEntity(7U);
    msg.setDestination(58729U);
    msg.setDestinationEntity(120U);
    msg.value = 0.07670995789693014;
    msg.type = 157U;

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
    msg.setTimeStamp(0.8110836772273077);
    msg.setSource(32790U);
    msg.setSourceEntity(88U);
    msg.setDestination(61278U);
    msg.setDestinationEntity(22U);
    msg.value = 0.719055747016938;
    msg.type = 235U;

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
    msg.setTimeStamp(0.28210462542044934);
    msg.setSource(927U);
    msg.setSourceEntity(170U);
    msg.setDestination(35401U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.09315760394431127;
    msg.converg = 0.26446324804502874;
    msg.turbulence = 0.07160601740837202;
    msg.possimmon = 190U;
    msg.commmon = 222U;
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
    msg.setTimeStamp(0.7475956939334703);
    msg.setSource(60052U);
    msg.setSourceEntity(60U);
    msg.setDestination(34413U);
    msg.setDestinationEntity(97U);
    msg.possimerr = 0.9951036724688063;
    msg.converg = 0.11864555741784422;
    msg.turbulence = 0.8095096554222672;
    msg.possimmon = 133U;
    msg.commmon = 145U;
    msg.convergmon = 92U;

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
    msg.setTimeStamp(0.033867575052488275);
    msg.setSource(379U);
    msg.setSourceEntity(216U);
    msg.setDestination(47135U);
    msg.setDestinationEntity(161U);
    msg.possimerr = 0.313596396079902;
    msg.converg = 0.34163371949342536;
    msg.turbulence = 0.6880628137626178;
    msg.possimmon = 243U;
    msg.commmon = 227U;
    msg.convergmon = 37U;

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
    msg.setTimeStamp(0.9166396968940982);
    msg.setSource(49947U);
    msg.setSourceEntity(104U);
    msg.setDestination(27872U);
    msg.setDestinationEntity(212U);
    msg.autonomy = 24U;
    msg.mode.assign("QIBXSHWUXGSARLNBLHOCEQNIGSFSRKGAHPJGHVKPLHRUMMCPJBRMLUWNCGGVEZZOYYBYDQMTFUASKBDJNJXVLDHAWZMZWEECYUKYQWRLXEDOGJMXHHAMSDQCFKTPEVXWHTRVVOUFXRJPVOBJCDPKSZEYJIJIRBLIYISWHVAQRFMDMTTIQDWNT");

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
    msg.setTimeStamp(0.5258825890307353);
    msg.setSource(40929U);
    msg.setSourceEntity(153U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(118U);
    msg.autonomy = 127U;
    msg.mode.assign("WKDMIFNDOIVVBSDMQKOUREJBBFGKHXZFTALSPWOFXEWLAETMEVIPIXVJXNMOQBENZBRMYGWDHATVKOKTTGPXHDWRLLYUCBSZQBKXQFQYIVGDLTPUZYFMUZUOESNJKLGUANITYHSZXQVVQWHCQAYSCREFCIJJXP");

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
    msg.setTimeStamp(0.4203439732658857);
    msg.setSource(55348U);
    msg.setSourceEntity(193U);
    msg.setDestination(54027U);
    msg.setDestinationEntity(7U);
    msg.autonomy = 208U;
    msg.mode.assign("LGERTVUFSEKXHOOKSTYPTCFYZLVKUWCDLPNPDCGMNZWRRBFGBPGDUUTTQLWSFXWQZPXGSASXKHRXBIJSQGRCZVWPJZZNCTOKIPFDJWEXINIHJNBJLNBALQSXHENRTMKOXMHTUNWZDJQXEAQRQVAEKZMBJYHXMQBVHYGIYABNUAIWICTYDOOADHUCFQRRSUSE");

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
    msg.setTimeStamp(0.7611291612881567);
    msg.setSource(9873U);
    msg.setSourceEntity(47U);
    msg.setDestination(5074U);
    msg.setDestinationEntity(93U);
    msg.type = 15U;
    msg.op = 159U;
    msg.possimerr = 0.010702859049543711;
    msg.converg = 0.34561210939596365;
    msg.turbulence = 0.13119562017385822;
    msg.possimmon = 161U;
    msg.commmon = 3U;
    msg.convergmon = 169U;

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
    msg.setTimeStamp(0.7177398660495036);
    msg.setSource(9924U);
    msg.setSourceEntity(139U);
    msg.setDestination(18931U);
    msg.setDestinationEntity(56U);
    msg.type = 142U;
    msg.op = 57U;
    msg.possimerr = 0.34617548950573007;
    msg.converg = 0.08466060440350265;
    msg.turbulence = 0.8785677383036422;
    msg.possimmon = 183U;
    msg.commmon = 151U;
    msg.convergmon = 178U;

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
    msg.setTimeStamp(0.5110326216451626);
    msg.setSource(13814U);
    msg.setSourceEntity(25U);
    msg.setDestination(35826U);
    msg.setDestinationEntity(97U);
    msg.type = 156U;
    msg.op = 103U;
    msg.possimerr = 0.02759421292135633;
    msg.converg = 0.24232397012768503;
    msg.turbulence = 0.8997655326099423;
    msg.possimmon = 98U;
    msg.commmon = 68U;
    msg.convergmon = 172U;

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
    msg.setTimeStamp(0.8409592348487606);
    msg.setSource(31672U);
    msg.setSourceEntity(157U);
    msg.setDestination(65187U);
    msg.setDestinationEntity(31U);
    msg.op = 141U;
    msg.comm_interface = 85U;
    msg.period = 53361U;
    msg.sys_dst.assign("SXOFCPSFXNWPJZMVHMLVLBEHNYZSQBOBTLTXOEKQNEKYXVDOQKQQMZPVTJMXUZUWWTTTGMKPVREGTQPVCFLQZFNGAOLRGHEEJJSPLITADICCKZFDIVAPAIGYHSKJVHNGAYZJSZSDFNURFAFLUAMURERFWBHBACUDHJNQNMOABITYCSOXWDRLS");

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
    msg.setTimeStamp(0.6671754732493993);
    msg.setSource(53353U);
    msg.setSourceEntity(24U);
    msg.setDestination(2940U);
    msg.setDestinationEntity(193U);
    msg.op = 252U;
    msg.comm_interface = 59U;
    msg.period = 32551U;
    msg.sys_dst.assign("NGJLRXONHYPDIGKMXPGBSDPYLRWAJBNNUOCADDBVQXTYOMCSMOWZLVBZEHRLEVDCSVCSHYHERWHAOAAYJDJUBFVFSTNGMXXCUQFEYFMZWRYGPEYQQATMCOUCTTUJPVCTFLLHNGNHWZMKHZZTBNOIRSLTIPZVLA");

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
    msg.setTimeStamp(0.30112307687044293);
    msg.setSource(41274U);
    msg.setSourceEntity(186U);
    msg.setDestination(25248U);
    msg.setDestinationEntity(153U);
    msg.op = 178U;
    msg.comm_interface = 13U;
    msg.period = 41134U;
    msg.sys_dst.assign("GVYNHTMTYXVOQLEHSWHDCIMDUJRQNMMOBBPSECINAWIEENITAUCQJGWEKBAYRSEXIMYYDDLTOFXFZNZZKZUGFFDLAUKOAFBWKYNKVGRDLFRIPFOPEMBDFQXWUUEXOJTXVYGQVCPWKSQZSMJL");

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
    msg.setTimeStamp(0.9862205772097535);
    msg.setSource(43796U);
    msg.setSourceEntity(63U);
    msg.setDestination(29451U);
    msg.setDestinationEntity(90U);
    msg.stime = 2814787623U;
    msg.latitude = 0.6088872797947601;
    msg.longitude = 0.7821832625052122;
    msg.altitude = 63427U;
    msg.depth = 32629U;
    msg.heading = 5875U;
    msg.speed = -3442;
    msg.fuel = -114;
    msg.exec_state = -121;
    msg.plan_checksum = 2105U;

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
    msg.setTimeStamp(0.8555696639143119);
    msg.setSource(11143U);
    msg.setSourceEntity(212U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(131U);
    msg.stime = 4286892456U;
    msg.latitude = 0.9540576973518351;
    msg.longitude = 0.7104520746339515;
    msg.altitude = 22927U;
    msg.depth = 48235U;
    msg.heading = 53952U;
    msg.speed = -7027;
    msg.fuel = -17;
    msg.exec_state = -34;
    msg.plan_checksum = 48003U;

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
    msg.setTimeStamp(0.24021603299074756);
    msg.setSource(13252U);
    msg.setSourceEntity(130U);
    msg.setDestination(26674U);
    msg.setDestinationEntity(166U);
    msg.stime = 4043665241U;
    msg.latitude = 0.9656688546254879;
    msg.longitude = 0.7370551011437353;
    msg.altitude = 18356U;
    msg.depth = 44734U;
    msg.heading = 25698U;
    msg.speed = 15997;
    msg.fuel = 8;
    msg.exec_state = 50;
    msg.plan_checksum = 47514U;

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
    msg.setTimeStamp(0.19696996955663437);
    msg.setSource(53693U);
    msg.setSourceEntity(212U);
    msg.setDestination(43745U);
    msg.setDestinationEntity(251U);
    msg.req_id = 26634U;
    msg.comm_mean = 188U;
    msg.destination.assign("MDHEPXUWDBFQPLJQAOELICGTMQCRNWSJTQLNMMDWQOQEHZ");
    msg.deadline = 0.03565217109499175;
    msg.range = 0.9082163264421717;
    msg.data_mode = 45U;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 11U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XXGINJGUHQNNXEUSRNBESJVTYVHCIFSPNXJZOPUXBFGWAYBCHWICTABFDCMMONPFJSTEIGZOOLDAEXRYPBTOWDXWXJAFHIMOCFMZEVVKGJLNSZATIFZLDGWEBVRMVYQSKVURLUWZPZDKLPRVRYIANDBHFCKNRWYYYAAQDBKUSQHGJTFHPJY");
    const signed char tmp_msg_1[] = {20, -44, 103, 82, -38, -38, 64, 27, 120, -65, 109, 116, -117, 37, -113, 56, -102, -66, 39, -2, 43, 17, 85, 88, 68, -42, -19, 120, -4, -109, -30, 105, -54, -63, 61, -100, 103, -124, 116, 65, -78, -88, -57, 122, 11, -45, -92, 110, 109, 46, -21, 44, -12, 13, -119, 77, -40, -50, -27, -69, 97, -111, 91, 19, -44, 98, -11, -70, -102, -97, -6, 34, 86, -52, 54, 29, -59, 83, 33, -66, -97, -29, -69, -114, -118, 31, -101, -57, -124, -21, -88, 109, -111, 103, 90, -103, -76, 104, -78, 119, 31, -32, -79, -6, 82, -9, 79, -67, 18, -78, 65, 105, -18, 80, -119, -27, 76, 9, 113, 63, -1, 107, 19, 91, -70, -50, 23, 85, -91, 23, -96, -26, 88, 93, 77, -60, -14, -125, 12, -95, -86, 40, -88, 37, -93, -71, -34, -20, -115, 105, 25, -3, -114, -74, 75, -35, 29, -100, 77, 26, 48, 109, -30, 69, 24, 94, 112, -11, -4, -64, 108, -105, 80, -72, -52, 123, -48, -11, 110, -72, -83, -51, 48, -115, 105, 46, -73, 85, -81, 108, 87, 104, 80, -61, -38, -46, 43, -53, 5, -98, 108, -33, -91, -29, 99, -21, 87, 43, -13, -45, 21, -1, -4, -41, -58, -47, -123, 20, -13, 75, -55, 106, -21, -37, -80, 111, 22, 44, -23, 33, -54, -128, -90, -41, 108, 116, -4, 77, 25, -89, -17};
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
    msg.setTimeStamp(0.5387651426079155);
    msg.setSource(24136U);
    msg.setSourceEntity(114U);
    msg.setDestination(11727U);
    msg.setDestinationEntity(84U);
    msg.req_id = 53191U;
    msg.comm_mean = 251U;
    msg.destination.assign("CRGXXRQYQVTHMPVHOLHPBERVQFCQLZGJMMEXXVWFZOJJJLMOTEDZJPEAXGICSNXTVVOCLGEBPQFEKOUQJFDSABGFIQIYMAS");
    msg.deadline = 0.7158163366156857;
    msg.range = 0.4616478377753781;
    msg.data_mode = 67U;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 194U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WUAYYDLZVNSITLWPJVAXZUULIHXBPIZDPRYXGDTZLXCDVMXWLJRQ");
    const signed char tmp_msg_1[] = {36, -125, -94, 64, -123, -78, -109, 109, 2, 27, 21, -114, -33, 47, 94, -70, -97, -116, 61, -5, -84, -52, 102, -6, 105, -108, 27, 90, 95, -3, -58, 87, -118, 42, 108, 66, 32, -3, 24, -78, -97, -80, -128, 116, -32, 8, -63, 101, 62, 83, -42, -96, -47, 35, -79, -46, 38, -95, 56, 43, 87, -65, 10, -120, -83, -80, 111, -69, 119, -10, 112, -28, -32, 102, 58, 5, -50, 32, -47, -20, -123, -47, 85, 81, -32, 109, -113, 96};
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
    msg.setTimeStamp(0.4791383368344104);
    msg.setSource(42612U);
    msg.setSourceEntity(123U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(79U);
    msg.req_id = 3234U;
    msg.comm_mean = 58U;
    msg.destination.assign("IPSHNKBZCEGLNVUIHSLMPEHHTRSVAUSVYPGWJZVKJQELCXRCLJZOMQSMFTZBTNZRHHRFYZCHVTLELQCAUUKUMOEZDEKQVMSCBDFPJOXQBQBRNJWATUIAPXGFAGOJTRNFEPZHNUHRBLITINJPSYBIMJWYTXDBXMRXVJBKYNPWAWFWEZDRJFGCSCDIUAWCFLOAKFDIKLOMWILASPYTNOAYONKDCURXDQDQGIYUVKGGXQGMPYDGOEVYSFTO");
    msg.deadline = 0.9131297136645062;
    msg.range = 0.619614983674953;
    msg.data_mode = 167U;
    IMC::TeleoperationDone tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SOFXVNWKLTIZSGQNCQRYVXUHRSNVMCBTLEKJBVRLVCJUNOUGAUQAWZKTTNVRHKRJPPTSYJKFDFPRHTPJSYQYAQWFQDVLIBHLUMPOTDGDLPZXJSQEECHCWBBRXIEBZHUFQWIHKYNMAMULGGIVOOTNEVJOZGJFHYIXIUMEFWIRGPZHXUHCMMDEBSRTEZKSQCFXUGLBM");
    const signed char tmp_msg_1[] = {-29, -7, 55, -83, 40, -15, 88, -120, 22, 107, 2, -2, -95, -112, -44, -78, 84, 57, 106, -61, 50, 61, 65, -26, 66, 101, -89, 31, 124, -23, -118, 67, -68, 31, -34, -23, -38, 69, -100, 29, 83, 89, -50, 3, 29, 96, -22, -27, -109, 58, 113, -54, -93, -102, -102, -9, 60, -39, 6, -50, -18, 125, -109, -45, -44, -4, 86, 121, -7, 1, 90, -105, 64, 73, 101, 41, 49, 15, -48, -81, 61, -29, 71, 75, -7, -31, -71, -69, -113, -81, -49, 10, 79, 37, -106, -18, 108, -33, 58, 13, 28, -68, -102, -51, 61, -82, 11, -109, -104, 24, 58, 96, 25, -119, -85, 84, -37, -121, 126, 22, -20, 25, 23, -29, 32, -66, -110, -24, -35, -103, 23, 49, 101, 80, 78, 99, 80};
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
    msg.setTimeStamp(0.5431940662750486);
    msg.setSource(62113U);
    msg.setSourceEntity(250U);
    msg.setDestination(14475U);
    msg.setDestinationEntity(237U);
    msg.req_id = 58142U;
    msg.status = 128U;
    msg.range = 0.3027040686013843;
    msg.info.assign("XCOTTBNRTCBKJAUKJSCUNGEWSPTNZRWCIFLVIEQKIQOVNUGXQQVOZGFBCSZXEXFHMGJDDYDHKRQSBQPCLFIWBVAPVIFVJSIHXHJLNWADLPMOSEJSCAQQKGMTCQAHRZYAEJMKFODLYMRVPO");

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
    msg.setTimeStamp(0.6518800684396044);
    msg.setSource(19919U);
    msg.setSourceEntity(118U);
    msg.setDestination(20167U);
    msg.setDestinationEntity(216U);
    msg.req_id = 12747U;
    msg.status = 242U;
    msg.range = 0.4931879764846463;
    msg.info.assign("FZQFJCUGIMPXKMRWVPBWBAGJGQATEEOIZYRMKPMCJEEDQCJNGZBIXTKSBQWPRHHGSRMBNFECGDFPYEVIDYZNETZTVWLYCQXUSGSJUOKXSQDVPUKIDENVZ");

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
    msg.setTimeStamp(0.00389796245508367);
    msg.setSource(27468U);
    msg.setSourceEntity(49U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(72U);
    msg.req_id = 5729U;
    msg.status = 243U;
    msg.range = 0.6178207287248627;
    msg.info.assign("GYOYNIAURSPDUTRAJTEGNAVTKNKGEDGAPZHMOQBKTYKXHBIJLBHOMVUFOLVSMKUJVZMZNIXZQGWEMKJBIQSPFNEHFVWNSMQKBCYKJVIAILDDYVLIENJRZLLPPXGAXXDCR");

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
    msg.setTimeStamp(0.9997333682350703);
    msg.setSource(12331U);
    msg.setSourceEntity(202U);
    msg.setDestination(62797U);
    msg.setDestinationEntity(29U);
    msg.req_id = 63613U;
    msg.destination.assign("YNACRCVRNTXQSWYJDRWHQDDIZZHGUSWJAGUYVHZZDSPMIVMOEJOIYNRHCIJWALHBIOPFBNFXLFJWAQDNHCSHRUCGQECFUUTBNSYHIBEGQGUZOKLXKXO");
    msg.timeout = 0.5501028472695781;
    msg.sms_text.assign("KKRXXGCPQTKXONNPQTEWUOEETCIFEWAAJOGAVQIPRDSKVSBEEBDVIEHYYBOZZTNGATCIABSNVSSXMXDALQWUMYNXIHQJMWHLPZF");

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
    msg.setTimeStamp(0.620132842184725);
    msg.setSource(20122U);
    msg.setSourceEntity(57U);
    msg.setDestination(23713U);
    msg.setDestinationEntity(101U);
    msg.req_id = 42807U;
    msg.destination.assign("FPXJNNCZWPGQMDYANLDVHBSYNVHLVOLRTNEZARLQAXYDRTINWSOATSKIZOVGARMGHQSNPQOWJMAIQPEETBEYGIYEWURPMFUVQHHKUSUHBITFBZMLNDFYVIWERJJSZDQPDVTJZZYTTOMDPKCPXGUMVEAPIRCSCNMDWHCIWQBXBFBHQJVXDLSBWWECRXJMKHCFAODGOCQLOVGYZUOGLWUFCKZKSXKGTLOLRFIFXJTUXSJYMPK");
    msg.timeout = 0.4722372269696967;
    msg.sms_text.assign("UDQYRRNASUJZMQYNXVZWJGYIFHMAHFIPNKUBTSJPKVOJMTXTXMDPOCDHBEEFWMFEJVPYGJVRWCQCN");

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
    msg.setTimeStamp(0.6562088105198116);
    msg.setSource(55530U);
    msg.setSourceEntity(93U);
    msg.setDestination(46305U);
    msg.setDestinationEntity(108U);
    msg.req_id = 48862U;
    msg.destination.assign("RRVWFLZVRSJRFIDLVCLSZFVLFKZJWWOQCPCKAADJZBDWZNOHSKUGOQWAWYZLABIJSUMJXTXORNBIEHIUFBBMGUGVBHMBHQXYIBERPEOVMOYPSODRDMDABQFXQSPHX");
    msg.timeout = 0.8316926718590307;
    msg.sms_text.assign("FJUHIOTRPWZFIZPMYPXOIJGDKCDRFBZKRODCMQHHJMJHMPQTBVQHSLBYLAZAWANDLJVAVELBUQHWKIPZDDTCXRZNYABPGTVQTSRXVSJDROYKCQOSESFOWYOFWBPUXLMZIDEMQGYCKEFEANZH");

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
    msg.setTimeStamp(0.1393947845771375);
    msg.setSource(30455U);
    msg.setSourceEntity(147U);
    msg.setDestination(33199U);
    msg.setDestinationEntity(44U);
    msg.req_id = 28709U;
    msg.status = 17U;
    msg.info.assign("UFEFPCVWJPCDIYLFRIUOTTVMXADDZBIEQWKGYDLLBNPNNNUIIJFMSFCCEWHXEHLDPZABSMRIXLOCYHHCFRKZBILSMVOJMCBRLVHIQUNDXWYPRJOOLNFQTPZUQGWYAUQQEWOXEYIJHOZMEUHXDSKGNRQFGSGTKHMTNGEZUYFGMZZVUJQRQSHKPANAAROWBGESNBRJKDTPAMVWSTVBKTZXWZDDKWSTLQBGJCOKUAFHCGCMSYVTAE");

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
    msg.setTimeStamp(0.5116900533557187);
    msg.setSource(39875U);
    msg.setSourceEntity(15U);
    msg.setDestination(52634U);
    msg.setDestinationEntity(50U);
    msg.req_id = 52436U;
    msg.status = 63U;
    msg.info.assign("QOIFPWVLNKDPSAWGIKIGUZBGHWNJSNKDNFSTJRU");

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
    msg.setTimeStamp(0.4892400928622712);
    msg.setSource(14745U);
    msg.setSourceEntity(168U);
    msg.setDestination(16345U);
    msg.setDestinationEntity(205U);
    msg.req_id = 32749U;
    msg.status = 31U;
    msg.info.assign("MZMGJYHPANKWVVKAPTAFXMBTWCEHEBFXGGLGQSKZNDTITIOYZGDONYXORVLTNJRDBBCUGXNZBRTETLJIDHZWQDQPSRCYYUVDWGUFIMZMUZXSHABCGENQEEOHEOWMRHQ");

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
    msg.setTimeStamp(0.42079124512430033);
    msg.setSource(24808U);
    msg.setSourceEntity(92U);
    msg.setDestination(6399U);
    msg.setDestinationEntity(140U);
    msg.state = 106U;

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
    msg.setTimeStamp(0.426487029833167);
    msg.setSource(19321U);
    msg.setSourceEntity(206U);
    msg.setDestination(14116U);
    msg.setDestinationEntity(86U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.7288773204967306);
    msg.setSource(11196U);
    msg.setSourceEntity(79U);
    msg.setDestination(44325U);
    msg.setDestinationEntity(208U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.0828291623663654);
    msg.setSource(1436U);
    msg.setSourceEntity(97U);
    msg.setDestination(4969U);
    msg.setDestinationEntity(150U);
    msg.state = 3U;

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
    msg.setTimeStamp(0.051152445195599916);
    msg.setSource(5064U);
    msg.setSourceEntity(21U);
    msg.setDestination(30086U);
    msg.setDestinationEntity(28U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.14139387843422602);
    msg.setSource(53242U);
    msg.setSourceEntity(12U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(129U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.8536846179557319);
    msg.setSource(20816U);
    msg.setSourceEntity(234U);
    msg.setDestination(14017U);
    msg.setDestinationEntity(125U);
    msg.req_id = 44443U;
    msg.destination.assign("EQQSLJWFJXWRCGABUJAHWVGYD");
    msg.timeout = 0.4938618804879351;
    IMC::TaskStatus tmp_msg_0;
    tmp_msg_0.task_id = 58770U;
    tmp_msg_0.status = 156U;
    tmp_msg_0.progress = 61U;
    tmp_msg_0.quality = 70U;
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
    msg.setTimeStamp(0.5371694115099924);
    msg.setSource(11050U);
    msg.setSourceEntity(67U);
    msg.setDestination(24954U);
    msg.setDestinationEntity(70U);
    msg.req_id = 13733U;
    msg.destination.assign("FIGETBCDSBHXOXPZOZKAJYKNPOULILSJPZZJEDJIMSACZCNRHSRGWYYJBUPWHZVP");
    msg.timeout = 0.10513693673445035;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 9U;
    tmp_msg_0.plan_id.assign("CKEOFYNQURVVOXXZMTLCUXOBAQT");
    tmp_msg_0.comm_level = 32U;
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
    msg.setTimeStamp(0.036458071101396095);
    msg.setSource(2671U);
    msg.setSourceEntity(20U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(87U);
    msg.req_id = 25945U;
    msg.destination.assign("BWSTNPOTTRHSNKGMDTLVMBSTCEGJUPUCNXHGXFAFSKOPLEYTGNJARNQEZYEXSICMIWZYQZJRUOYRKLDBDGFNHMTEBWCJVBXZWRTHYQHSAAEUOWQEVALYMWLZSFYLRFAWHADUJXSZAHKDKHJMWPKUULJUKOXYGPQOZWGFXCIZAVSGFCBBIDULVFCQVDJGAMN");
    msg.timeout = 0.09415854757119124;
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.05309527207304077;
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
    msg.setTimeStamp(0.10511412848146484);
    msg.setSource(40567U);
    msg.setSourceEntity(32U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(225U);
    msg.req_id = 55822U;
    msg.status = 216U;
    msg.info.assign("REJVEDEKJRXWOTTQGYUTVMCSQGNUTSZYOKLXHSVBIWVRWGDLSBNUZYRIXJOSUYZAFWTAKZIUVXODQIDPGNWMNWJTUONEQMPHDFFLLBAJOQFRJQVYKHOLSTKXMQXNLIRQUCKUHYDBBGCIUDDECAAHACISZIOSKYHOGWXXPNHRYTPRJEPWTBXHNECDFJKGFMCMMFEPOFVALIBRNDSGLMPPWZJGKNFHQPBMPTJBEBCVIZVEZYYZRMLX");

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
    msg.setTimeStamp(0.03858582542952471);
    msg.setSource(38613U);
    msg.setSourceEntity(16U);
    msg.setDestination(22U);
    msg.setDestinationEntity(39U);
    msg.req_id = 4542U;
    msg.status = 60U;
    msg.info.assign("XOODYZAABEWUICJLWDXJUVCDKBEAZPVXRWGNYTOIRCJDLYHNHVRHTAKLGIOVHDFNFBAGNRPBKVQFOQLBSQIUBZDFNPASH");

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
    msg.setTimeStamp(0.041767914397148664);
    msg.setSource(33339U);
    msg.setSourceEntity(237U);
    msg.setDestination(38770U);
    msg.setDestinationEntity(97U);
    msg.req_id = 291U;
    msg.status = 9U;
    msg.info.assign("AMZFOONRVZBANYEJYQFELLVFVKCMMNFWSOPOQAWOYHZKGHCZUQBWFOODZQLJYTTWBTBGFCEDXWNQIRTFEPZYEGJZAUHXQHTRTXOSNNACIBDQZRIKEAYIJLRAXNQHMNOMCINWTIKGKKDBUZUGUTSEIRMVWWGVEBVKFCPSTMUSGVVXSUZCXJSRENSADWLXMADGMFAPKUOKSHYYXHHLHYEDCIQBLCXIUQPSXBPJVPJYKPGTCGHPLBRPFDIRUJWDJL");

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
    msg.setTimeStamp(0.5872005964935048);
    msg.setSource(64604U);
    msg.setSourceEntity(136U);
    msg.setDestination(9935U);
    msg.setDestinationEntity(212U);
    msg.name.assign("QVWFHGEDGJIZMMTJYVDDINZXLNNCSOWUWYUMFOKNKABABPVWWVGXYNPJNORELAGHPBQGKHPMALLAAINJOILEZSVFAYAHW");
    msg.report_time = 0.05273513102620375;
    msg.medium = 134U;
    msg.lat = 0.663954968155785;
    msg.lon = 0.0975903636558948;
    msg.depth = 0.8760745598787364;
    msg.alt = 0.11706781580263559;
    msg.sog = 0.6351953142769108;
    msg.cog = 0.6651041311522615;

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
    msg.setTimeStamp(0.615373522669197);
    msg.setSource(41609U);
    msg.setSourceEntity(197U);
    msg.setDestination(32122U);
    msg.setDestinationEntity(125U);
    msg.name.assign("UQGAPWXYQSMBHDVOWNZPHUNPHBALYNIMFICXCSLCMXRHECLXRYDSZHFEFACNMSIRUPAZFVYLTZZECOXCUQWGDMBUIXVOTTSVJSGARNKKPZFVISCLBIJMEWQZYVBGJBUEFWDRAVHWTKDJEPFVBWQ");
    msg.report_time = 0.7907129267485686;
    msg.medium = 12U;
    msg.lat = 0.7985100038740651;
    msg.lon = 0.010161512969034003;
    msg.depth = 0.06581613300417588;
    msg.alt = 0.559264748198322;
    msg.sog = 0.4861008794394056;
    msg.cog = 0.3331277928872064;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("JTNIQCAVJGYAGXIRTACAGXJMIMKRVRWOZTYEJHQMIVOFSXWKRCQLAPABTMGFRRGBMEYJFBRTZKNKIFPGPMADNCDLICHSVRB");
    tmp_msg_0.links = 1555321431U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5755685110201465);
    msg.setSource(1907U);
    msg.setSourceEntity(200U);
    msg.setDestination(51374U);
    msg.setDestinationEntity(12U);
    msg.name.assign("VILQDARDRHWDGWMBKELQALAZHSWNJCWYORTVLBNMDQYWLNJGXRVUKGHVBIOYXGOAIQIXBQQSKVCXHSMEVEJYZIKCTZIXDGRJTCKSFPOPZJTXMFQHEPBRUECODSDVAYABFVMDAHSBINEHVNTTTULFAUWVCZJ");
    msg.report_time = 0.279727334980456;
    msg.medium = 53U;
    msg.lat = 0.2165796939496185;
    msg.lon = 0.45418169283287146;
    msg.depth = 0.5986155815318238;
    msg.alt = 0.13551341065506028;
    msg.sog = 0.7376804175683221;
    msg.cog = 0.015448396501888229;

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
    msg.setTimeStamp(0.35118060519532457);
    msg.setSource(39428U);
    msg.setSourceEntity(162U);
    msg.setDestination(65209U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.27966308763825876);
    msg.setSource(37475U);
    msg.setSourceEntity(64U);
    msg.setDestination(7287U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.2870109487927761);
    msg.setSource(60057U);
    msg.setSourceEntity(122U);
    msg.setDestination(29801U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.5043670153054786);
    msg.setSource(27237U);
    msg.setSourceEntity(120U);
    msg.setDestination(49164U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("ACFIXOBOSJPRVETGYMUULRVSUDKHVZJGKQEDUMBYTBPUZDNPVMBBGHRWJYNFCDZJSSPJVZMEFEJTPAQCMCREHEDJAAUGAYJWCGXKAFVBOWPUWHAIOLKNLRDZUCJIZARIHOAFPHLROSBKKSYELDVRTNQUFQQMVSMKNWULIGPLBERQJDQIMRZNTYZXXVWEKGWCNXFTXIGQBFHCYCIDWIGHXYNGSFMYHZNWTSNHOOKXSLQOEBWKXPYAVILM");
    msg.description.assign("NWCHLTIMXNBCKLMZMFWAOBFIXDYBYIUJTQAGREYOROKGWSPPAEGISRAHZZC");
    msg.vnamespace.assign("JQJMFLIKCCGVVMGAREEYSUBNZCANQGXBVOYKTLYPUIZREPZJQAWEEIFSBGOPTKPYCOZKOQLFEYNSFHFVFOPVKIQGBMBWVEMUURLIXUMWLQACJEHVHHWFCEWJLNJVNBXYWRXICDYKZJDHOQOGUFNPSHJTIYACUTABPZVNWDMSKMPKHBHYXWBAROGOTCSL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZGKNENQJTLWARCMVXSOAYNYDVONAOPIFOBJYMXDBZFXOMQMIJFBWQUHEPKDRBUPPFMQXYKVPASHVZWYWCBKGDGKLYLUHGFXVRADTAGPEJRKTIPRSANQQTITMGCXFGARXZDGBJGYBLOOALYUWSTBPSKCVJNHUZSUDORTQCU");
    tmp_msg_0.value.assign("GMIHBQNLVNYZFUBURTWZQKULMYZUIBTIQPRIRRFCQVBOSPEOHKNUDKCSGADMLPFNOOLCEKDIBDZNHCJEEQFHCACYCHHMIJYAYJABMGADUJQPKYPFGCBMSHNKRXOEOBXDLWGMDTZJQZRX");
    tmp_msg_0.type = 182U;
    tmp_msg_0.access = 75U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FYNOFOVWELWXCCLBEKXSYILDJMVTNXUAQSDTAJKOGKIJOQZEPXTSMDBQDWAPPDONWARQFONWEBZNNQSJGRVFVPIGWTKTTFHKNTXBSCDJJZXDSJYQUDTSUYUSVDCGBJAZYCHRVYIFIPCMKCEEREUKMZRHKFTFMUZHUQWELDGAPZAXKMWONVRPRIZEAYVCGFBJWHL");

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
    msg.setTimeStamp(0.707906981052426);
    msg.setSource(64151U);
    msg.setSourceEntity(94U);
    msg.setDestination(22878U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("MORZTVJCMBKJLPGLEWVHGPUIMCMPKRJXIUYINSPMFTLNXDRQWETIYFSIENFTJWUWQJHIPVQNEVKAOQIGTWKUXDGQHZQHVFDPBGPOASBYZFGFMHZBSUCLEWDNACHYPTRMXSVOLSBVFEAMZZGFAEIAKKSAOCCUXHTSVLYMRDOBB");
    msg.description.assign("JKNPBQBUQKFXTFLBGAMVGNIYYSEYACQLFQNLZNIVIURIEYANEVOKGQBJYNTDRDAOTGSTUCMSXCCNJOELHEPOWOKXPFZYLPLJMGAQCIDWRHBOCTZBWQFSCUPWCUFEXVQIIDMZHZDFRDAHBH");
    msg.vnamespace.assign("IVDSCKXRIKYIASEBTJKLUDZNJZWQFSPFNEFXOHHAEMHZRDECLXAELIPIPXMCD");
    msg.start_man_id.assign("FKDZMGMLTGNEFURWVZIDQEVDUKJIEWHXFOLMPZURKQQYSTEOSOWHEBVSYDYXTAEIBZHFGITXNORDXNBENMRGBBJAPIVDMTNMWRZCDPVPVAAIUMRYSJKKNUIRGRIUWYJQWQCSROCXKOJTHNFYJKCFGLXCJZAKSQAHCMONRAZGLUKADDQGOCBOBWJNFSWBUPJYHOYXMHPPUHZBZLACHHTBEVTEPDLILMQWVL");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BJCXJRWFTBFLDZUSHVBQHTUXEKAZCXWNOUKMWGCHZVVUKKDABJRIQQCIPEAMTPLJWPPVVTYOAFNHXLRUKYYHQZMSZTVQHLQNSSMJPSXVTZEYXQQABTKPADNGMELGGWRQSUISPWETULANHQNXNDUEIGNKYSDFHEBJFEDDIZYVUFTEKOIIOXKHMOAIBZRKFGZMLRCYCCDOLYOJIDACYJDFLAVJBOWBUGPNGWLHRIPRNO");
    tmp_msg_0.dest_man.assign("HKZSDFAZACEJYSFYYNKHLQGMBLCMG");
    tmp_msg_0.conditions.assign("OZSUJXNKYJAJJCNVTAUKAIFPRJQGLDBETCPQSDPTTZQBMXFJAFXBTWYFNVFKWQALBPNYDEDXMDOSZVGYKAWIUWLHFITJIOZSHEFKCGOURSUSMMQWNOLWRBWZVMBUAPGXHUZ");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Depth tmp_msg_1;
    tmp_msg_1.value = 0.24485236856663928;
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
    msg.setTimeStamp(0.9661291289497635);
    msg.setSource(5021U);
    msg.setSourceEntity(7U);
    msg.setDestination(20602U);
    msg.setDestinationEntity(252U);
    msg.plan_id.assign("YSBKFHPKQYVFPQCGAUJLNSZWDISBUSUPRJSPYEWPZOHSOUDOYQAULHXTEQZMRSLSUCPVPGXCVTAFVYJEYTMTVEGGLNQLINLJKICMENHJH");
    msg.description.assign("ADVWUBBDFKCORRTASJMTKQSPQKTLBBQYNORTOMQRLAOLZFPUZJEYZFDQWSVRCODSFTCQQIJVHEPSUHCUIFAPYNVIHVWMJIXSMWGKKLBCSBHSPBYJYDCJMLNGZCTGRKMFYFEZSXIOUGCVTONRYGDABOYMEKJBBORGDXLGXEITEQFPCWUIIHWPVJZPPNUEJ");
    msg.vnamespace.assign("QGCFDJVALGAEEETJPZKBSCSPRGAJRQTAEKXYNBYMCOELHJCKBYUHYGDJTNFPEOGILIFSVYYG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LPKEKXYVJYBQUHAMSAKXRGQHWSMXOTVEVPHLJIUCGMUZHSEROML");
    tmp_msg_0.value.assign("MDDKOEWFPEPFTGHRSDENPAOLFNZBHLZVSXIFYDCNCDOYCQXRTAKTQIGGZHMSSTIFWJTKYVTYQBRZUVPXOVUSPIQRUSWPOSGOVSGPCIZHYXKNXZKHSIJNIKHTWUYDIJNZMGRDJBFAGMMUVHGMBPALCLBBTQOWMOZQYFFLQNXLTMYCAXBUPEKFBLUERJHFVAKAAWZWOBDCCEVTZCBSCXLHKEMRYLJDURPQJQRXWOJYV");
    tmp_msg_0.type = 178U;
    tmp_msg_0.access = 194U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NAUPKXOHYMBQQLLQSSHMYFLLWCKEYTPDJJTXMTLFBOQFDFIVBOGXRBMSEEUZEHGAINWGRFGTDSTQCLUNTAPCZUSDHMKGZUYDDPSVTHIKEDYDRNFPMECJAGOVNJDUPUZEVKQYNCSHQDSXKCCIUC");
    IMC::TCPStatus tmp_msg_1;
    tmp_msg_1.req_id = 20719U;
    tmp_msg_1.status = 24U;
    tmp_msg_1.info.assign("RTHDVEJLRVTFYADTJZOLALZDCJIXICZJFNHOJRVFWHUSQMXFXTZWBAOSZHPCPSUATONNJOKAQKAMITEHWGFTMCHKULBQSFENAFIUKUFGVVRPEFSRWBJWQDRKEQHTBWXEMAHRXDVMGBEDVORXDPIPYULEZGCYAMUYKHOYIBYOZNUPKWWZDQBOMNTGXQYCM");
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
    msg.setTimeStamp(0.5650484836819942);
    msg.setSource(29986U);
    msg.setSourceEntity(76U);
    msg.setDestination(51852U);
    msg.setDestinationEntity(152U);
    msg.maneuver_id.assign("NVNWHGCDEKAMIUPGZATMAALMZWYUHZCVLLVRQVWUNJIAAYKBQPCUUMSWSZIODFSGCYTSXHLTHKYMROEWFEJPPBUHFMAYLXFOGNANIZWJYEJTXEUINUMCFYVWSEQOHRTYVEZXQQQHGLLBLWVFPGPKKUHDSOAOWBMJPMLRBGOXXSTXVPSEFCJXJHPAVHXKBLFFRKJYMJZBQCDROIDODOIBBNKGKYISDRWSPNNTIJZDFQDZ");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.38473933393995285;
    tmp_msg_0.lon = 0.8970447807793539;
    tmp_msg_0.z = 0.9506366254855936;
    tmp_msg_0.z_units = 68U;
    tmp_msg_0.speed = 0.926980530585212;
    tmp_msg_0.speed_units = 170U;
    tmp_msg_0.bearing = 0.25401283191457014;
    tmp_msg_0.cross_angle = 0.6188556329135182;
    tmp_msg_0.width = 0.9515030968629226;
    tmp_msg_0.length = 0.19671517133532745;
    tmp_msg_0.coff = 120U;
    tmp_msg_0.angaperture = 0.1629309713532806;
    tmp_msg_0.range = 19462U;
    tmp_msg_0.overlap = 233U;
    tmp_msg_0.flags = 123U;
    tmp_msg_0.custom.assign("XMQVIORDXSFXIEHCKOHEQJPAAHUWGZDEJLZSRFBHECOFOGYQYADLTTJLEYMNUGDLCBMX");
    msg.data.set(tmp_msg_0);
    IMC::WindSpeed tmp_msg_1;
    tmp_msg_1.direction = 0.0732888760562771;
    tmp_msg_1.speed = 0.051483487007011774;
    tmp_msg_1.turbulence = 0.7940743251847309;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::WindSpeed tmp_msg_2;
    tmp_msg_2.direction = 0.821334230045622;
    tmp_msg_2.speed = 0.4115948859120474;
    tmp_msg_2.turbulence = 0.4866116846608204;
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
    msg.setTimeStamp(0.9646769787643728);
    msg.setSource(60874U);
    msg.setSourceEntity(166U);
    msg.setDestination(61551U);
    msg.setDestinationEntity(11U);
    msg.maneuver_id.assign("KAUBYESQHOSXIQLTWREINQJWKXEEFNTSTAKELYVQQOAVDXOBIYNLUZBPIJF");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.3037001057179085;
    tmp_msg_0.lon = 0.5520235950673434;
    tmp_msg_0.z = 0.13239427790720226;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.03374564494837884;
    tmp_msg_0.speed_units = 55U;
    tmp_msg_0.abort_z = 0.524296687083694;
    tmp_msg_0.bearing = 0.23775792583015043;
    tmp_msg_0.glide_slope = 0U;
    tmp_msg_0.glide_slope_alt = 0.6428213669125032;
    tmp_msg_0.custom.assign("DAQFAGYUARHGGNAJJALKXBIAZGWWTLSXTEOUYQIBWTF");
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
    msg.setTimeStamp(0.40537088291046286);
    msg.setSource(58885U);
    msg.setSourceEntity(226U);
    msg.setDestination(64486U);
    msg.setDestinationEntity(143U);
    msg.maneuver_id.assign("VNJFJDMGCMHEDOYHJOAYVDFUFGODBDYDFKHZQHKZUAPXVTXCHEUTGKZQVLUNSACNYPVVAHOLCTWIBHYENMTQTYIMJUGQJGXQSTOSANBRDCDVOMPVHQLIIFSLSBUJBNELFTEZRVQRLRUWWXLGKEIZOJYYXDFIFSTWBHKPPCORJCUVSJPUZGCPZBPSMCIGFNZAMQXXZAEZ");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 52868U;
    tmp_msg_0.custom.assign("PEJYFARLHSUKYIRYCUGBXTGIRZSVCUXCGLUZFTLDMARKOQYQJJQZFABGXAZBFDYPZUWPNPOKWNMNHNCGXPAXKVETJHTZEXNONXHLFHAKQSVMAKTIJDZYCKSYAFYDKHCDMESRWEWCMEBJILPSSNIJOGPSRQODBHZXLTNCQDGDMQXIEGMBOSJBVMIPNPUPOMIOVLIENIVYAUDVGXWVTCWSREUTUQFBGTTFLVRKJQZHHFOL");
    msg.data.set(tmp_msg_0);
    IMC::DmsDetection tmp_msg_1;
    tmp_msg_1.ch01 = 0.13657596730765253;
    tmp_msg_1.ch02 = 0.9198811820109137;
    tmp_msg_1.ch03 = 0.7512582382198603;
    tmp_msg_1.ch04 = 0.8945026203903755;
    tmp_msg_1.ch05 = 0.8029392778400566;
    tmp_msg_1.ch06 = 0.7193720714439917;
    tmp_msg_1.ch07 = 0.9311727739299411;
    tmp_msg_1.ch08 = 0.7772678130503378;
    tmp_msg_1.ch09 = 0.9993551755131269;
    tmp_msg_1.ch10 = 0.8859828769552617;
    tmp_msg_1.ch11 = 0.4909706310057955;
    tmp_msg_1.ch12 = 0.44511649271510756;
    tmp_msg_1.ch13 = 0.7646818121479413;
    tmp_msg_1.ch14 = 0.8625750548792045;
    tmp_msg_1.ch15 = 0.49793235790478874;
    tmp_msg_1.ch16 = 0.08323944845638398;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::RelativeState tmp_msg_2;
    tmp_msg_2.s_id.assign("UQOCARQAQZXXOJNKOZZTTIRKZVKGIAFY");
    tmp_msg_2.dist = 0.5259527123007333;
    tmp_msg_2.err = 0.9353761418920575;
    tmp_msg_2.ctrl_imp = 0.8012542086732882;
    tmp_msg_2.rel_dir_x = 0.7597590065563307;
    tmp_msg_2.rel_dir_y = 0.4649658365489405;
    tmp_msg_2.rel_dir_z = 0.1640408459586966;
    tmp_msg_2.err_x = 0.05190461399885615;
    tmp_msg_2.err_y = 0.9215719811205051;
    tmp_msg_2.err_z = 0.5172192814467543;
    tmp_msg_2.rf_err_x = 0.6407917779292246;
    tmp_msg_2.rf_err_y = 0.5029920668189589;
    tmp_msg_2.rf_err_z = 0.8241482362120199;
    tmp_msg_2.rf_err_vx = 0.11126914373052821;
    tmp_msg_2.rf_err_vy = 0.3375460150063192;
    tmp_msg_2.rf_err_vz = 0.38932726611553237;
    tmp_msg_2.ss_x = 0.49742543394637395;
    tmp_msg_2.ss_y = 0.8048373940567111;
    tmp_msg_2.ss_z = 0.7855176518079057;
    tmp_msg_2.virt_err_x = 0.8863101019512442;
    tmp_msg_2.virt_err_y = 0.1547127976692092;
    tmp_msg_2.virt_err_z = 0.9038053347509639;
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
    msg.setTimeStamp(0.7805928264112205);
    msg.setSource(11232U);
    msg.setSourceEntity(193U);
    msg.setDestination(2253U);
    msg.setDestinationEntity(20U);
    msg.source_man.assign("TISAQCGTUWIVNVFQZSIDLRJAPNREVRLJQECVEFVYCBWHDHYDOKOUZJWCSOKBANDDJEPRMPZZZVROPFYMTQCZLISRFAIMFJBOXCUHNLIFMTKOWLCYOKYBPNZXKGQNGBIXNIZJWLIRPKAEMFTDDXQFQQFTGZHSSLTCTUOULVAGLBGWYPYTWMKHAJMMRFNCNPUVSEMNDKHPBJXYHVDEOPSTDWSWUGZSJXBAJYEKBUQXEYUROGXWVRMGHUHE");
    msg.dest_man.assign("ZOMMJKJCYGGQUECWXHOIZKIOEMVMRNFUKFFICDPBTQADYFSOGQUGCUAZHLJTMONLJGASZIAMPOBVJTIRLIPVZVXRFLKOADQHBTDKEIFLQKYEDTURXVKDXMJBWHRYEEHLLJUPNPGWYCYMWCEVNYSWPLPTJCGUWRWUMEWXRSRGESZSUDGRYTVFNAPQVMCTNHZZKXANJTXYQQDRSF");
    msg.conditions.assign("RVSGCEPINZYVDUQYRDMJYGAZRPBBHGHAYZNNISUVCMIFTHEWOEWOHTMBAIGWUXOEGASUOQVFNJSXCABNRZZLUVBDUQJGTELDJPXCWQPUKIFVWOODWYQZEYCKXGEQWOITXLCVOUSJBKGBLRYRQHTHIXMWJVCLVMFEZOLRTSKTXMNHQYXNKPDSZHYFXELW");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("SWKQVKNNNCCEIGLLKMRXFFGCHQMAQYIOIIX");
    tmp_msg_0.state = 166U;
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
    msg.setTimeStamp(0.5782856497468039);
    msg.setSource(12093U);
    msg.setSourceEntity(127U);
    msg.setDestination(51910U);
    msg.setDestinationEntity(50U);
    msg.source_man.assign("IOVYLQDXBWDNLCPFUIDKEIIMNNAZGBYPIDFSUPSQGHSPQIBTTDLMXJHXGKJAIZBLBOALOAZCKATMGJZCEZQNSPFJAARKFYPRUOQYMFXJKQFWNUBXOGEDRNUMWPWOTN");
    msg.dest_man.assign("XTARQOZCCLAYKXNYEIMHJYSAFTTGGQIOEBRTOJJAZHJLLJHSTRZYLMTKRHBMJWGPVRFJFFKMONAHZJDOUVGKZMRERCUEYKVDSFMUTQDLWMTEDINGXHSBXMACWCEPEEYISKWHAAKWDPZQVLSCXBHWSPNHZUEUXVVPYCUIABXOPLEQDPUKFTBWPNJDONGOXLWGXWBMB");
    msg.conditions.assign("UYBOYURRJCWTABQKLTLSGMDEZJDHDOUOQKISPMBWTZFEWDGSPYCLJPRIBHLDVEFEXMVE");

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
    msg.setTimeStamp(0.43101367526055934);
    msg.setSource(64100U);
    msg.setSourceEntity(17U);
    msg.setDestination(28530U);
    msg.setDestinationEntity(52U);
    msg.source_man.assign("FRFTBWGFPWUHYZMNOJZRALAGHXBJFASIVLPUMTHMOTOHIKDNQVQRYMORZIFOENZRKNPLWJKOKFBCXWZYWJCVQVAEZDSUGOYLJRZJCBVTDYCDDLSIWMIGUQQPYNMCAJLIFFGHFWDYLLNZKPTQXBZLUKGCGOTUSRJSEISKCTUDMHTGXUBEMJIEVZEXSXIOQVVBOYAYQVBI");
    msg.dest_man.assign("JNKCUFPQTPZGKRONUDTZPTMBYSFTIHFKXTEUGRYDGHBCAVPIEFYDIQXMXXJFDVBHDXGELEFLMVKTYRFYCCDHUCFSQGCLKVOHKNKBZUKIMZQMHOSDUAGOMYVZNEJWGJPQWJZPXJWHTMDUXRLRQENRSOASFMSAVUDXANYHYATZVQVJMJOCQHRKWPCVBAVTPREXWFWBGUNBLABLRNIZBXSPOQACGUMIAYGNKOBEPIQJHEENWIW");
    msg.conditions.assign("VPDYEKXRYAKYHSVZSFOXQBUNOVZLZMKBRBCTODJJXDCFFLGYTIFOSPHVIBLIAQNHHGARAEIDKWHJRQGUHBCEJOGZPTCWPMIUVJILFRVHFSRRIBEFPEDMXWPSEVMKCLEQOGLWDWRQ");
    IMC::SynchAdmin tmp_msg_0;
    tmp_msg_0.op = 31U;
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
    msg.setTimeStamp(0.6803142574214001);
    msg.setSource(5066U);
    msg.setSourceEntity(199U);
    msg.setDestination(39746U);
    msg.setDestinationEntity(186U);
    msg.command = 128U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IZBGKUQFYLBPYTDLQXVSUJHADZRZXBUSZVTFCQVQXVAYMNBIGAJPXJFOQOIKMWCGNUJKKYVPGMICNRADSJCBUETAFDTGNCUTHPZGFYXWEXDYRNLFJYAAKOOKXGMNNEXDQ");
    tmp_msg_0.description.assign("DFGPADHGDFBFAUVBGQWFNGOKYSUCWXGFPWHXCTJIRTQNKNWAXPULWZPRQCMILREDVFCOZIQGJPUHJYWXONVAHCPFEGDQKUGMZPAYHFKXGOLAXPBLSOYOLIQHQIRZZRLEFZY");
    tmp_msg_0.vnamespace.assign("LKFMRTXBDKOCMEJXFSSTHMGOEYZTUDBWKOIGCLUKXMWCFJSQHALKFPWOQXCOEYVRDWVLGQEKNDZJSFZURNMUIBYJPQCHFAEMIIXZKXSJKENEPQOHTEIGTQQVLQIMDCBZPAYZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HXWZVDDJTJUHSEVMMRGXFYCECKMJTFTSCGUUEPHIADOGTSWANQDSEMTZHQRKIFSFHZPMRDWXYWXVLOBJDZKKJIETFOHYLPWBPONYKBUVBFZNLXSYWNSURFAHKOIHWCIYADGDNRCQKSDVPAINXSLOLOLFUOMBHMUBVYAALEXVGARUZJLKPIEVNPQJNOQMCMQYGRBFTQASCVBVIWKDRNPZGXEULHTTARYRKJQBQFGBGUXTQOWWIJXCMZJ");
    tmp_tmp_msg_0_0.value.assign("PNQRGTVTKSHUHXWHCKIRIXUDQCYVRRBSCAJUWDVBLLIONOWL");
    tmp_tmp_msg_0_0.type = 49U;
    tmp_tmp_msg_0_0.access = 10U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WCRTVLEKRJYKSTXOZJKFSMFZCSAXOOITRKGPDAEIVCCWXJLWTSYENSNJEQWRGENAPYWZXOWFHTWXIEELQU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PALERJKZDXZBBRMTAGNSVGINFFBHXPMBFDQURVIHKXVMKCGGHVXFIKYRUIDBVPLGIYMPNDJKMVAQHXZXYUWDFQDYWLDYUSOUEZENEGNPHECGWAYCNOMIBPCTTVZFVQQSHDASOQANZWMBHXLBSRXSRKSONLTLKPTFRQOQYGOZWOJCNOPXUHHOTJRWZSRAUUVMIYZRC");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 3531U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.879779945459062;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.22976381070367669;
    tmp_tmp_tmp_msg_0_1_0.z = 0.20252450739580918;
    tmp_tmp_tmp_msg_0_1_0.z_units = 30U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7852469629394639;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 47U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("FBMSGZTTEWOAMIALIKLANKZLXMEZRBT");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FormationEvaluation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 193U;
    tmp_tmp_tmp_msg_0_1_1.op = 83U;
    tmp_tmp_tmp_msg_0_1_1.err_mean = 0.3955683335560235;
    tmp_tmp_tmp_msg_0_1_1.dist_min_abs = 0.935957396342846;
    tmp_tmp_tmp_msg_0_1_1.dist_min_mean = 0.45854533299779954;
    tmp_tmp_tmp_msg_0_1_1.roll_rate_mean = 0.9589544637842016;
    tmp_tmp_tmp_msg_0_1_1.time = 0.11611033150306471;
    IMC::FormationControlParams tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.action = 90U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon_gain = 0.721920293017273;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat_gain = 0.4229410061868233;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.bond_thick = 0.7287846723483548;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lead_gain = 0.9723319439707488;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.deconfl_gain = 0.6059602813494905;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.accel_switch_gain = 0.04371223715598527;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.safe_dist = 0.7746378288896537;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.deconflict_offset = 0.502790976013161;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.accel_safe_margin = 0.8057404866584097;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.accel_lim_x = 0.37970290719512667;
    tmp_tmp_tmp_msg_0_1_1.controlparams.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ESSZFBACXXIPMOBLPIOMYDWZHLPXJPLBCSHJNMXGEZJPIQIKJEUBTDBYAHCDNMWRNBGKWPANPIILXCAWOFSOLYBOJHHODMQLYBUSKOUUECCDZNRXZKFRQGSVOVUUACMSHLMGTDQZZKXCHOREHYJRBRXMUYCQQGJMPEVRSNACKYPUDQVRFWIVJUNWMZHSWEYXAVBFVTQKW");
    tmp_tmp_msg_0_2.dest_man.assign("SUJXVXUWBBZZYDAGQQVCCMEXPBDOGNNPSAVLOTPRGFVEZHFJBNKWSPEXQACLWPTYNWAHNMDYLFUDPEKZYQLZEXLEAIJJHGQPFBWILPRESIGTCESFSMGTYCRVSBSMZWJLQAYTGDTHQAOSYFNMBKXMUJBRORNZEPHVWJQHFYLJVBGRKZOMZNL");
    tmp_tmp_msg_0_2.conditions.assign("PUELARKSOYOVMDAYEJXHWWDGLHZHAPOQGLKQNRSFIMTZJIONXUBWWFETWIBZPEHBOPVQODUNRWIUSCUMMXRXXSPCFNHTZRQUMZAAFFMKLSTKNOGSIILHFGDRODKYWCXOTJJHNKPFQJJWZZLQDSYVQFVDQTNIABXLNLYVERHQD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Rows tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 4960U;
    tmp_tmp_msg_0_3.lat = 0.9404446627856042;
    tmp_tmp_msg_0_3.lon = 0.6542136663754454;
    tmp_tmp_msg_0_3.z = 0.7700571321313914;
    tmp_tmp_msg_0_3.z_units = 53U;
    tmp_tmp_msg_0_3.speed = 0.1896332187736095;
    tmp_tmp_msg_0_3.speed_units = 53U;
    tmp_tmp_msg_0_3.bearing = 0.6999455357753303;
    tmp_tmp_msg_0_3.cross_angle = 0.3502385981923771;
    tmp_tmp_msg_0_3.width = 0.4809436651540818;
    tmp_tmp_msg_0_3.length = 0.9840737391843264;
    tmp_tmp_msg_0_3.hstep = 0.4687818130085163;
    tmp_tmp_msg_0_3.coff = 204U;
    tmp_tmp_msg_0_3.alternation = 218U;
    tmp_tmp_msg_0_3.flags = 102U;
    tmp_tmp_msg_0_3.custom.assign("RVAQEKJFYHGTDQODBMKIVSAMDSQDLXLZRQGVFBYBZSUIKBCYNAJBHNKJKQTCNWZPFNWCYEXVEZVXUYHSGLGFIHRSIXEOCXJM");
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
    msg.setTimeStamp(0.04575798359363514);
    msg.setSource(62833U);
    msg.setSourceEntity(87U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(197U);
    msg.command = 42U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KCTBROPPNJTWTHIQZNKTLKYERSTEMYJBFIAQCNUUXNDGAXPQIKUMMQHQMCGSWEBBRLOUJIZKIMDAHALUYDJEBZRBKUDHOSP");
    tmp_msg_0.description.assign("OCJDLNQGKVMFWSHRZHBQWLHSCO");
    tmp_msg_0.vnamespace.assign("JUYNIONFYRLKKKUXPGKUDTDKTGMBOPBWJZSZHVOFSWCAMXIPCDUMWHNGRUMIJPDAVGDWUCZDHOAJXQICIZNYDUFGBOOXIAXNYYULMRDWBZQALTTWJIAEHEMRBIHGTZQNQRSSZKNBRYJHGLGKHEFLVQBKEVIMNFWWEXCFSXUCEUEFRWLODAALHEMABXRPCJKVTZVQQLNYSVLTTVPAHGG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JQPLVDFXXHMGEWAZWBKEDZFNRZOOIKOWJGOTMCBQBNBWJXSTLVJOSHUGVSZGCOJXYCIUTUPFKLRLSHRRPVLNAAHDAEKTHBJXIRHMMLEWR");
    tmp_tmp_msg_0_0.value.assign("MULQTOGYRBAEEUNEZBDDEAPMVJLBROOKFCFVFBRSGFIAUKXJYPJLHFOSEOGGXVWIJGTBFYWSIDWRXLAYGVULDWVAATQWADHSLSTJUIJKEIVUDQNLCOKMAERVZRRBWYAJDCWFXPOEKWYFPZGNFOSCQSXKCZXZHGMMNSKHXXC");
    tmp_tmp_msg_0_0.type = 89U;
    tmp_tmp_msg_0_0.access = 57U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DJVTIEXLXSCCRII");
    IMC::CurrentProfileCell tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.cell_position = 0.8766540069347901;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.vel = 0.16390375092198162;
    tmp_tmp_tmp_msg_0_1_0.amp = 0.25936499285926784;
    tmp_tmp_tmp_msg_0_1_0.cor = 161U;
    tmp_tmp_msg_0_1.beams.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.2498984797091781);
    msg.setSource(33493U);
    msg.setSourceEntity(242U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(65U);
    msg.command = 220U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MOSOHKINXXGDBIFYMVZUWVJJFFXSRPNNFERCCCFRGNCFTPTIDDIAXALQJHKAODUIYLIZULVACMRWQNWVHUIWELRTLMUNTFCRGTYQEOWBLYBBEFGDPJDBWGKSALPYVDQGYXPHFPMKDSXZIANZMMWSSPQMDZTVEGXSZ");
    tmp_msg_0.description.assign("XQKDDOLIPDUP");
    tmp_msg_0.vnamespace.assign("JDYLWHCAPSSNVPGEOIMXMUNZEJYKBWNGRABKZQDWDTQIQFCSHBHWUOIOMPKCSMCLLXPDOTUUQAKSTEBZNLGNFFVOXCVXLDQJFNRJDOWHQHRPDPJUGPYOKAHUULVAGCCEEYSSSVWVBPHAKIYTKYBTXLREFKHYNEMXEZPJFIUNOGZXPHOTDXCIGBWIRZILQVWBKJJDEZJRTWC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PKTFDBMSRWMSBWNJSHHWXFJCAWLBRXFYVCOTARRUWGWIEEVQCS");
    tmp_tmp_msg_0_0.value.assign("YEZEGZNPAWMXAHRHWRGHEEFITUYIRCJNJYZPDXKDULXXVAWDVTJBGFBPWTIXSHNGOOYYUJXLZXLCQMQNRDPJETDZYZHINOCQPAYSEARMZKCLDNTURVIAYBMAUVDDCLBKQQ");
    tmp_tmp_msg_0_0.type = 42U;
    tmp_tmp_msg_0_0.access = 163U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JCBKVHNSAADTUZQQJJIWGRXOMKBOESPODWGLEPXRSEIKDWPTFYGJKGFCGUMUHWVJEUZHAUVWAZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZEHTGFMNOCAYAACURVNWVSIAYNLZSUSTJSXVKOBJWEBYWFXOWQUAQBMXHTYXCPEQKXRIMYITIMSXMDZLZIWHOQQWQEBBRJKVWCEGPYYCEALDZMYVZFWTO");
    IMC::Drop tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 54424U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.4797113696841099;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5736418276192956;
    tmp_tmp_tmp_msg_0_1_0.z = 0.6462771341624433;
    tmp_tmp_tmp_msg_0_1_0.z_units = 164U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.32655798040003825;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 103U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DPNKXTJSEIMAFZCBQLMMUUQMTAODCXJGWZSMKZKCRERECSGZNBHDQMBFHDQDPXSRXYVHPZJIFLLGVDMKSKLIPXGJRRKYWNWHRBELQZKMB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::NavigationData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.bias_psi = 0.9832394125054654;
    tmp_tmp_msg_0_2.bias_r = 0.9778364708610136;
    tmp_tmp_msg_0_2.cog = 0.6527137692194483;
    tmp_tmp_msg_0_2.cyaw = 0.08258438542421365;
    tmp_tmp_msg_0_2.lbl_rej_level = 0.8894747854827505;
    tmp_tmp_msg_0_2.gps_rej_level = 0.1743482983745962;
    tmp_tmp_msg_0_2.custom_x = 0.14042286601068665;
    tmp_tmp_msg_0_2.custom_y = 0.9187748579734349;
    tmp_tmp_msg_0_2.custom_z = 0.0338858409453352;
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
    msg.setTimeStamp(0.785988973968987);
    msg.setSource(48926U);
    msg.setSourceEntity(140U);
    msg.setDestination(58635U);
    msg.setDestinationEntity(12U);
    msg.state = 141U;
    msg.plan_id.assign("CWNTPLQAYBNXSEGIZDDZCGSPKILSWRHFFNCELCAKFWDXKAEVEGTGXIZMRIZWYLOJUOASABNKZRAKHLABSWRXVFFUQBWFOLXNRGNMHJQBUUQBYJJNCNMIMZVLCJAEPDEIZRPGGYFVFKYOJEYIJHKPLUCDGTUNCHTBWJETYGQMDJVJZOWVOXOI");
    msg.comm_level = 51U;

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
    msg.setTimeStamp(0.7526207923717267);
    msg.setSource(12317U);
    msg.setSourceEntity(87U);
    msg.setDestination(9569U);
    msg.setDestinationEntity(133U);
    msg.state = 213U;
    msg.plan_id.assign("RMKKJTYSEULAPQHPOHMGYCVLEMYIKOBHHAECOENJTWANYQAOSZATDIJBBLZWFDUJKEMBZCBGQVEURAWFYDQTOQGLKMTRPTIZINRISBFLJECNGODYKNSFXZTPLZUZLUQLHCFOSUUSSJQYKXYHOKDRHMQMFVWIB");
    msg.comm_level = 145U;

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
    msg.setTimeStamp(0.6187831785351777);
    msg.setSource(28814U);
    msg.setSourceEntity(123U);
    msg.setDestination(55066U);
    msg.setDestinationEntity(90U);
    msg.state = 198U;
    msg.plan_id.assign("OYXTOFJEMDVHUSGUIOQFJKWUREZZXIJFHUCRAGQNJYEZELIFKDELEOOTVLWWZBHPQUWRCWDMFVBMAVIAVILCPSMQBOJMGDTNCDGBPCENWRRMRBGLFUJQXCGFDYUTCZGYKAOXTAMMEDZTXLJWHHEOUMFQEZSKVVPCJDAQWTQSJNYTRHMVPZRNLRGLIXNHGUPLYGDIAXPWYTRIVUS");
    msg.comm_level = 172U;

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
    msg.setTimeStamp(0.7760673766333919);
    msg.setSource(38234U);
    msg.setSourceEntity(56U);
    msg.setDestination(42340U);
    msg.setDestinationEntity(30U);
    msg.type = 100U;
    msg.op = 200U;
    msg.request_id = 58456U;
    msg.plan_id.assign("ZXXRDRSRMJFJOXUBFQUJFUZMUAZOXVAYXWHGOVLCCMDGSUAEKQT");
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XSSETRMOJKQHTXZBWXEJTBFFVLUCSG");

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
    msg.setTimeStamp(0.009058163082623194);
    msg.setSource(24875U);
    msg.setSourceEntity(183U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(220U);
    msg.type = 186U;
    msg.op = 170U;
    msg.request_id = 9648U;
    msg.plan_id.assign("OWAWZUHTDZEUZNWSYMCPEHLNYTDUPNSIEFDQZSPSDVKBNQIYFMSRMFLVLFAHLMHUSFKEGXMRJQTELCYCQNMT");
    IMC::Heartbeat tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CAEGBVHDSJCFVUIRTKAYZTLXZYOTDRBILAZDWSBXNNPNCQFTOKXWUGHGDRWNQI");

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
    msg.setTimeStamp(0.4109679538957438);
    msg.setSource(43938U);
    msg.setSourceEntity(166U);
    msg.setDestination(26817U);
    msg.setDestinationEntity(134U);
    msg.type = 94U;
    msg.op = 151U;
    msg.request_id = 46805U;
    msg.plan_id.assign("VSNSCAAVLNICAGTMGXKEVWPIU");
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.9198792444588093;
    tmp_msg_0.base_lon = 0.873482717801158;
    tmp_msg_0.base_time = 0.19030633920538953;
    const signed char tmp_tmp_msg_0_0[] = {-113, -10, -35, -58, -13, -96, 15, 118, 112, -100, 1, 61, 126, 66, 21, 69, -79, -27, 83, 47, 84, 3, 75, 11, 55, -21, -118, -128, 10, 97, -61, 48, 113, 55, 102, 107, 37, -62, -44, 122, -125, -95, -99, 52, -41, 84, -40, -120, 72, 19, -123, 55, -20, 105, -20, -103, -23, -56, -12, 6, 4, -68, -56, -28, -72, -46, 104, 16, -116, -123, 44, 108, -31, -98, -91, 49, 44, 110, 45, 10, 29};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AGMWCVDYXYXTACRJFVEGUCIHLZTEJSPOXRNWCXPYPMBGNYVYAXFURPZMLGNZIDVYMDZONBZS");

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
    msg.setTimeStamp(0.8885013306405432);
    msg.setSource(8447U);
    msg.setSourceEntity(118U);
    msg.setDestination(40750U);
    msg.setDestinationEntity(32U);
    msg.plan_count = 44992U;
    msg.plan_size = 2078278195U;
    msg.change_time = 0.9132415796276138;
    msg.change_sid = 24671U;
    msg.change_sname.assign("FUEFUCDYWFEHBYKLRDQJIQZLDURKEZXGTIRIVMSKRPHDSMNMCTQUMGEQQYJI");
    const signed char tmp_msg_0[] = {117, -127, 105, 53, 48, -122, -70, 90, -30, -128, 17, 87, -34, -100, -89, -2, 85, 42, 76, 34, 69, 69, 61, 21, -47, 75, -34, -72, 117, -32, -19, 37, 69, 108, 0, 72, -58, -85, 51, -44, 97, -84, 102, -32, 87, 20, -92, -88, 64, -2, -51, 37, 4, -106, -64, -33, 111, -16, 2, 110, -81, 42, 89, 15, 115, 68, 12, -122, -64, -49, 124, -120, 107, -100, 34, 18, 111, -27, 90, -69, 90, 118, -101, 5, 11, 125, -27, -86, -18};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TYJHBVDTXFCGHXKSQFFBVCHAMDQQHEWRJMEODYXECANJGAUMTIUGRCVYEMPOFNIPSXPFTIWOLLJLSGUJFRLIUFOMEVVEZPSLPYOEARRZCLNKSGVDZKXSYQSCABNHVYKMTULBTWNUUD");
    tmp_msg_1.plan_size = 20823U;
    tmp_msg_1.change_time = 0.6635032406749456;
    tmp_msg_1.change_sid = 33997U;
    tmp_msg_1.change_sname.assign("UOYFXMHEPIYEYYQACVVIXPNFUEMHNVHXJWZLYQLGYIQJXOVDFTIHUUZPLYTTTHFOGAWUNSQNDNESNJBMSDCBASNRGTXGKHYPFGKJEPRRZSERLPHFOGMHWEMGAASMRDIRTZUEVTKJOOKRGZWSXVNMLDCZCOMPLBTVXWZNUXCIGVWMKREFKJWIKDAQJDEBBSDQCYFJOK");
    const signed char tmp_tmp_msg_1_0[] = {53, -30, 47, 15, -64, 14, -126, -127, 101, 98, -27, -91, 81, -126, 35, 104, 4, -98, -80, -91, -108, -57, 58, -84, 24, 24, 21, 100, -76, 59, 68, 126, 109, 112, -47, -20, 45, 45, -97, 18, 84, -37, -84, 16, -61, -107, 105, 12, 67, 30, 16, 91, -72, -111, 57, -13, 121, 64, 19, -77, 80, 70, -39, 40, 84, -73, 106, -110, 37, 30, -50, -106, 66, 77, 110, 98, -35, 91, -95, 63, -12, 60, 22, 8, 82, -74, 37, -36, 44, -79, -18, -82, 107, -86, 44, 91, 56, -55, 72, -28, -122, 106, 6, -20, 42, -72, 64, 16, 73, 64, -30, -78, 86, -110, 5, -119, 29, 93, -5, -56, -37, 125, 63, 55, -34, 62, -80, -34, 109, -69, -63, -38, -13, 99, 51, -65, -37, 91, 87, -96, 85, -17, 80, 53, 122, -120, -36, 122, -91, -49, 107, 60, -75, -54, 31, -3, -113, 38, 38, 86, 100, 94, 94, -5, -53, -124, 69, -90, 45, 13, -116, -116, -79, -120, 101, -115, 99, -44, 69, 118};
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
    msg.setTimeStamp(0.14483910310242953);
    msg.setSource(42109U);
    msg.setSourceEntity(111U);
    msg.setDestination(4739U);
    msg.setDestinationEntity(34U);
    msg.plan_count = 20626U;
    msg.plan_size = 733598895U;
    msg.change_time = 0.5816050037704448;
    msg.change_sid = 14785U;
    msg.change_sname.assign("IMMHADHNQRHYKPZVXFHBCQYGAYOULSAVSKNGGIFHLORYOJCLYOSXOPBJUOYLATIWNEFXFFRZCCDAZMAHMGFWDGKPISPPTSZHQJBEZNPTLSKMVUMXNWETTXMEDGGBQVPQLESVVABLWXBCKIYWNTIEBLRWAZJJLJFRESZKJOUDZQWSPLGKOUIEQIJQTQNTUVVXXSARCPUNCKDFNJMFHQXGUBXR");
    const signed char tmp_msg_0[] = {-68, 53, 54, 20, 50, -47, -46, -126, 103, 54, -106, 66, 36, 55, 33, 99, 111, 116, 47, 123, -42, -127, -101, 44, 114, -21, -78, 45, -42, -113, 126, -31, -19, -81, 126, -17, -126, -26, 79, 65, -117, -109, 123, -93, -8, 88, 47, -13, 13, 20, 97, 117, -88, 72, 31, -57, -91, 79, 87, -58, 68, 118, -96, 112, 83, -123, 15, 94, 72, 25, -39, -63, 120, -71, -19, 18, 120, 70, -106, 22, -113, 24, -85, -76, -37, -9, 63, -12, 14, -126, 60, 118, -48, -70, 64, -35, 14, -21, -117, -118, -101, 93, 29, -84, -29, -106, 84, 68, 50, 104, 22, -16, 4, -95, 124, 81, 16, -96, 98, 80, 15, -105, -69, 51, -59, -58, 75, 68, 86, -88, -100, 41, -84, 45, 22, -125, -73, 36, -114, 114, -9, 11, -64, -35, 20, -36, 115, 68, 34, 20, -3, -104, 82, 63, -12, 82, 103, 79, -53, 109, -114};
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
    msg.setTimeStamp(0.33481247212888654);
    msg.setSource(12938U);
    msg.setSourceEntity(169U);
    msg.setDestination(29522U);
    msg.setDestinationEntity(76U);
    msg.plan_count = 20109U;
    msg.plan_size = 2811359401U;
    msg.change_time = 0.6418636407964653;
    msg.change_sid = 17575U;
    msg.change_sname.assign("PVULGIKIGNZEQWIPSBZHLVYKNJTRJLH");
    const signed char tmp_msg_0[] = {-63, -1, 33, 65, 53, 115, 90, 84, -76, -105, 120, -81, 75, -105, -34, -68, 37, -47, -65, -38, 83, 125, -86, -87, 13, -2, -120, -61, 9, 85, -66, 63, 120, 51, 99, 82, -8, 121, -73, -99, -110, -99, -40, 1, -23, -107, 120, 4, -83, 9, -41, -75, 57, 1, -83, -105, 57, 99, -110, 13, 64, -104, 59, 114, 22, -54, -55, 72, 39, 79, 74, -60, -44, -48, -41, -93, -66, -42, 116, -50, -34, -106, 105, 19, 80, -17, -106, 117, 75, -5, -122, 120, -102, -32, -60, 95, 1, 68, 80, -72, -39, -125, 25, 6, -84, -103, 121, 52, -2, -121, -46, -111, 19, -36, 105, -114, 8, 96, -7, 1, 21, 33, 73, -6, -22, 25, 4, -109, 102, -55, -105, -107, 62, 95, 70, 12, -6, -74, 110, 67, -12, 76, -56, 117, 49, -5, 34, 9, 112, 24, 57, -28, -70, 17, 81, -102, -112, -3, -90, -35, -41, -52, 112, 120, 103, 65, 41, -14, -22, 104, -50, 27, 61, -34, -57, -89, -73, 20, -54, -97, -113, -8, -60, -56, -16, 69, 17, -108, -76, 89, -7, -85, -35, 66, -113, 28, -66, 5, 11, -82, -41, 101};
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
    msg.setTimeStamp(0.3161568040426205);
    msg.setSource(41174U);
    msg.setSourceEntity(84U);
    msg.setDestination(3991U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("YFQAULMORCZVUHWCTHBJZSTEOPZWWLPDOWFBIKXVPTXCVSRQCNHRDINFODBSJHXWYRSWMNRVNKXEYAEDEFURXUAIPJNEBQLJYGYRUFGZHOBMLLXTNBKMNVCDKGNVUITWKDCFAISMALTSFGFCYZAOKZOYOCIEEUKAQLQGWJQSZGJWYOHHDRUPJTPGFIPGBFPM");
    msg.plan_size = 38497U;
    msg.change_time = 0.5351239138987575;
    msg.change_sid = 53105U;
    msg.change_sname.assign("LENJAHRBWRQHVYQZIAFZTCZAHKDWAOSMPULBYKBUFCCLPJECBUSIINFETNVGNLOSHPYGZLNYWWNUTPQZNVRARFRWKSHSMYQDDEJOQCWEDYJGIXFYDJEWZTOZFSUMDGOAIJPOMPSXBNSPCUTMTDJPHQXUUYUGLWRUXTJVKPHAKHITBEGHORPLCKKIKXJXVXHRQFVEMMWBIXEFGBQRSMZCGGKVBBYOMCGLSIKIFDQDWNXD");
    const signed char tmp_msg_0[] = {-118, 64, -32, -125, -47, -98, 79, 123, 13, -44, -68, -114, -32, 54, -90, -123, -101, 118, -84, -9, -50, -83, -52, 58, -87, -110};
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
    msg.setTimeStamp(0.15243285447930943);
    msg.setSource(63128U);
    msg.setSourceEntity(93U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("YUMFRHSZMXKJMSFBQGLTSLGBQNTUXZLXWXXVRHARXIRAVUEYEEBLCPYPMEOFZHRQPOMKMFIBIRJDSANZJNKCNXQHFEJVOETUBIYCWSZORDVQHOMLIIABRDVPDZIZJFFCKLPMRANHIWOBCTCSWYNGJSNFQKSV");
    msg.plan_size = 49731U;
    msg.change_time = 0.4352253012313224;
    msg.change_sid = 13063U;
    msg.change_sname.assign("PLHVITENKLDZCMSKLPXCJZACJRKJKWPHSCH");
    const signed char tmp_msg_0[] = {-15, 17, 18, 58, 8, 64, -11, -52, -26, -69, -53, 99, 33, 52, -21, 47, 66, -120, -16, 61, -101, 54, 9, -111, 8, -85, 13, -18, 32, 19, -25, -47, -49, 108, 89, 9, 105, 65, 126, 30, 53, 91, -43, 113, -48, 99, 95, 35, 10, 6, -116, 126, 29, 15, 44, -45, 7, -37, 117, 50, -111, 73, 113, -40, 77, -41, -100, 63, -66, 94, -53, -96, -12, 109, -95, 4, -76, 64, -78, 22, 37, -109, 70, 16, 64, 102, 92, 126, -96, -40, -81, 62, -48, 22, -70, 32, -81, -26, -4, -4, 10, -74, 24, -16, -42, 51, -94, -57, -110, 76, 52, 54, -95, -54, -123, 114, 37, -13, 78, -65, -49, 41, -23, -24, 76, -86, -83, 22, -113, -66, 54, 68, -63, -62, -120, 54, 6, 25, 22, 107, 106, 22, 71, -32, -53, 110, 102, -36, 94, -56, 12, 42, 42, 73, -32, 60, 25, -48, 23, -13, 23, -112, 51, -103, -128, 120, -111, -124, 5, 45, -87, -45, 35, -107, -49, 43, 69, -55, 20, -23, 114, -37, 102, -126, -12, 4, 81, -27, -10, 126, 42, 69, -119, -52, -14, -106, -21, -68, -124, -113, 103, -10, 110, -103, -18, -78, -127};
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
    msg.setTimeStamp(0.7619172777790162);
    msg.setSource(22589U);
    msg.setSourceEntity(248U);
    msg.setDestination(44846U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("KESBDUCPBGCGHFOXFLVOVUGJTRMINPHDIPJSDGUMIFROIPTETIVGCCCVUXLDUPGAKOSQRCKIJBETBZWEASPTENRKQOWRDQHPRHSJKSAUZRQKKIZVNOMYZYJCDFOKXLQXFAZXHBMNIYGZWWLBCGBOFYLEMJZWJLHQSNJTQLAEXAEDUYWQMTBRXEYGDUMYJZHTLYKPUNNWWNVFMXMAFOXSIWKTZYOSHPZJSVCYDQQFBDLCNBWPTAFGRVEAUVVLN");
    msg.plan_size = 28122U;
    msg.change_time = 0.7684905303021213;
    msg.change_sid = 65010U;
    msg.change_sname.assign("GBRYDQTDFIKCQTTYAMWBRKWJYWRXPLXGZUXKEPSFHOXHUAAVXYSQKGEHJBAGWPAAIZUXMAGNPPAKWDJNYYZYSOTCEJSDDKMNGFSTRVMSHBDLNRNGCBGGIJZPQQQTDBHIBSEELVPCHRAJWQFBRVEBEOJKKUOYMXLYLVTIDGNUNUIUCNPULLZYCIPVHOFENZVOURCEFXCIZRWOKEOZHZFTLSVMWMCHJFCMQAFWXQV");
    const signed char tmp_msg_0[] = {118, -49, -9, 48, 69, 41, -28, 91, -28, -68, 34, -73, -87, 125, 125, 73, -89, 75, -50, 101, 112, 72, 77, -84, 16, -7, -113, -64, 106, -128, -66, -94, 116, -2, -120, -51, 84, -53, 23, -68, -101, -33, 121, 0, 109, 48, 84, 90, 38, -102, -15, -12, 121, -78, 119, 69, 27, 49, 86, 97, 17, -100, 4, 108, 123, 4, -27, -75, 99, -103, -100, 91, -86, 45, -104, 38, 98, -40, 78, -21, -105, -86, 14, 95, 13, 79, 113, -108, -108, 42, -5, -51, 82, -74, 111, -38, -39, 111, 71, 72, 17, 59, -34, -10, 114, -86, 16, -25, 58, -9, -121, -101, 71, 30, 62, 84, -16, -16, 98, -119, 35, -120, -54, -42, 64, 88, -41, -36, 42, -89, -114, 87, -122, -94, 118, -52, -5, 109, -126, -1, -16, 29, -126, -43, -62, -26, -20, 89, 110, 109, -93, -41, -98, 43, -79, 83, -64, -71, 41, 84, 53, 21, 13, 69, 79, -128, -38, -56, 25, -9, 2, 108, 15, 33, -2, -76, -48, 107, -24, -5, 94, 113, 84, 73, 90, -35, -7, -124, -41, -53, -115, -52, 18, 119, 0, 101, -92, 79, 102};
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
    msg.setTimeStamp(0.9573811804415051);
    msg.setSource(1066U);
    msg.setSourceEntity(188U);
    msg.setDestination(40974U);
    msg.setDestinationEntity(0U);
    msg.type = 219U;
    msg.op = 250U;
    msg.request_id = 7972U;
    msg.plan_id.assign("HWWMKEBCXDHCU");
    msg.flags = 50934U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("XKMCEJUIZJXTDIQEUXGGRMCGOINFYDFIPQWMPXSJQMSAGCLSZKYQZFJCBWAMPBAUUTGRQDFMLUDBUWCTETCJWKORERIXFTXOPHUOBRTNOQXAYWQTPLSUSUIBYCMTZKENPOOJNVTANHSIEJHHGPBDDNMFLXVFJHMAEVCXLYKLDVOSWKQNDRJZIQVKRFATBHRROKNYWSDRHVLGFPENUYAEABHGBWHSPJZNYLZKMXYELFZGCQASGVOV");
    tmp_msg_0.lat = 0.7860420197493637;
    tmp_msg_0.lon = 0.9112942580254556;
    tmp_msg_0.z = 0.1398739618537882;
    tmp_msg_0.z_units = 5U;
    tmp_msg_0.cog = 0.4860300363907091;
    tmp_msg_0.sog = 0.01152177569536983;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JCABXOOOWEBYGMUWIWOLPBVLYCFSGHCTFEJKGDVKPTLSKNIJUUXOQEUDNSVQRCAZIROZAAJGBNTLKLFOVPYYCXIRJYLANFMZBUEKDJYDVBOSKMTTZVYDLGQCQBMHAXSJQELDMYNXYFZGWZSDPNVAZHBHCOTJSPDUOHCUXMWCLFQUTIRMWEEPLFDFKRNHAATVQXBKRWERSZITZYIWCGTIFIR");

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
    msg.setTimeStamp(0.2844215532953889);
    msg.setSource(21830U);
    msg.setSourceEntity(134U);
    msg.setDestination(8117U);
    msg.setDestinationEntity(103U);
    msg.type = 184U;
    msg.op = 160U;
    msg.request_id = 19451U;
    msg.plan_id.assign("RIDKXSAJSBSRTLUVRUAHRNEZEJUJAZGAWTOZWWCPZQMVKCAPGWOHGOXXHSTODEVWLHFUBIEQOZNXSFWPNEULFGAMNAEMU");
    msg.flags = 38610U;
    IMC::WifiStats tmp_msg_0;
    tmp_msg_0.mac.assign("WECQDYBWAUPFIQAGUGLHVVQCMDSVJMPFRRUHBKVEBLVUXOTYOLJLZFPHYEZEQIGOMXLEDEMCHGZSYOHPWXCFPRSWAKVZEFNSETTNXRMYZQPAGTIJUDZHIDSCWBGAROBSGMNSQBZHNXSMIGXTHOZVIHANPYCGOFWVIDLFEJHKFQNKQMTVBPORXOKZDVJQKCKKUSUPICJWFDR");
    tmp_msg_0.ip.assign("XITLGKXZUQUPHCGDIPLZDWFEYIOXNCFCPZDIDVSQDGEHDJMABTNKJYEQKCXCUORDMMGSKOFXEOEXIVJOFVOAWRGSIOLEDA");
    tmp_msg_0.ccq = 199U;
    tmp_msg_0.noise_floor = -18904;
    tmp_msg_0.signal = -4889;
    tmp_msg_0.rssi = 58602U;
    tmp_msg_0.rx_rate = 7223;
    tmp_msg_0.tx_rate = -4681;
    tmp_msg_0.tx_latency = -31023;
    tmp_msg_0.tx_power = -19384;
    tmp_msg_0.rx_count = 1644982177U;
    tmp_msg_0.tx_count = 3486127414U;
    tmp_msg_0.distance = 27095;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EKEFAZAPCRIETKOSSJDMOAWWLYDJFZNMQXLWVOFGVWLYGHESONFXLKIDHIBGBPEPDRCG");

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
    msg.setTimeStamp(0.34357446454569507);
    msg.setSource(54756U);
    msg.setSourceEntity(114U);
    msg.setDestination(17572U);
    msg.setDestinationEntity(163U);
    msg.type = 252U;
    msg.op = 211U;
    msg.request_id = 27205U;
    msg.plan_id.assign("EXUXASIDFIIVFUAILLRRQPVTESCLMUWUDCYHOVOWDSZOSSEJXDCJJMRIHKCEQZTPIVOQGEYOFQGRRZBPHHKTLEYAQWHTFTLNZONOVDATNBFJPLKVNIMPGZMWJARNUFLMHZYXAUDVJRDBBCQBGSXLRFKWBNL");
    msg.flags = 51139U;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 35U;
    tmp_msg_0.plan_id.assign("QBWDZRJNIMDAYVIJLTLOQUYBPCICMPZFSKSDUR");
    tmp_msg_0.plan_eta = 821669780;
    tmp_msg_0.plan_progress = 0.42138783385049006;
    tmp_msg_0.man_id.assign("FCQAMVUQIZCJRJACDLKRRIBXDHLQOJFWUYJJSPUNOKYXIXEFHLDPSCSIKTHOJLIJYVAJPYNWITNWXLABDWHVUMZLEMCVAQLZFBMBZBIPEAKTDNYWVPBPODNEXMRMIZONGCQYHOCGYQAZEDGRVTKOEXEVFKGQGASZZASIDHVSTMKGDJMNPSTHXARHRGEPBWYRURMZLCFWUOUCJUGFXQTDTNH");
    tmp_msg_0.man_type = 55966U;
    tmp_msg_0.man_eta = 1226058871;
    tmp_msg_0.last_outcome = 106U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RTUTHRUATXCXWRANUVAZMGCLEWYSACOLEWTLFHFNJZEYBVVXQNOUNQSBWEYTCCKKLRXCRKSFJYGIZOMJTQVEGBITRLQOPPPJXNPSHDXARRXVQASHMBJKVYMXULWFPESTVGZJMUGIOAEHDEWMCPVOFYFFIDCNBLQUKNKWAYKGQIKPDBVVIUBNKDLSYHSAFMPGHMDDIKAIJPTLQUOGDOYXNBZIZMHGFZIZETERHJLRYNFWJ");

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
    msg.setTimeStamp(0.23390421537477257);
    msg.setSource(52376U);
    msg.setSourceEntity(169U);
    msg.setDestination(48595U);
    msg.setDestinationEntity(138U);
    msg.state = 172U;
    msg.plan_id.assign("OTGBMVQAXTCAWGZNCJNUDSKXZCYYKPGCIMEPZIRPMGJQSIJUXLMOCBAHREJFWZUVCRBFSWPSPREJTRKPAGOAFHGENBCXQUBDLFJEXDIHCTUDOGTWKJWKACAYMZRPEYOLYWBTWLYFXKYULKVOIRVZYHQHWQDBROSLUKKNIKBWENVDYHFLXCDRDVLYMVOMTGNZPIPOSDQSNZFMZNAUOFTGDHXQSUGAHBNE");
    msg.plan_eta = 1731056959;
    msg.plan_progress = 0.005839640449336159;
    msg.man_id.assign("FAZITGDKXGNUKBAPKNIOYORYARTERNPPADTFSCYFUQIMAUHEGRJVCTGEGAQJQAEQOLQSYTRKCNLQZAZFPRSVULSRDVTZZEEGZXJMSFURHVTNNSNMKDLKBCVJJBULIDWGCPWHDVBJTLOLBMIYPBSFCEBHVOYZMUOACIUNWWQJWMJMYXXTPWGXHSOFBFISXVYCUOGLWVIGPOQNJWQXIJRDWZDZEECBKHXTHCDKRNPHMDBXHOZFSKKVIE");
    msg.man_type = 39533U;
    msg.man_eta = 1090942159;
    msg.last_outcome = 59U;

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
    msg.setTimeStamp(0.31573522693602507);
    msg.setSource(61951U);
    msg.setSourceEntity(137U);
    msg.setDestination(59176U);
    msg.setDestinationEntity(159U);
    msg.state = 189U;
    msg.plan_id.assign("BWZTBEYGXREOODOEQBDGBFAHIYLPDIJCRWDTLEMOUJEGRNGCCCQVCDQKEOXVWKCVECNTWFNVUCHKVIQLMNMUSNHNZMKWLIUKCRUUZZTPJRYASIDOPAKVKRJQTTXAHSTSMNPMZJLSDNWPXYFTUJMNXQJFVXSHHAPD");
    msg.plan_eta = -48233392;
    msg.plan_progress = 0.8310693967131483;
    msg.man_id.assign("QGPFONEUZVZJHZEUKINIFCQKFWZPHJCEJECYNORXXWPAHZYPEHKYZLSLIKTYSSRUYMZCODDVQVQMUTLVDKGKIYGTNFXJNQMDZXBLTRLRSJDLJSFFQDCTGVROGTFUWWHAGNVWJYFNOPMUZGQIEXWNHBXXRYCOEBPIYSMVSCFGDBKCSADKPJXIBAFHHAABOWRGAUEHPLEWBAQBBLNRLWXAVGOCUYVHUTMRDCMEKJRTKNJTOQPMBWISSTXADZM");
    msg.man_type = 65001U;
    msg.man_eta = -2116505487;
    msg.last_outcome = 225U;

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
    msg.setTimeStamp(0.08006710912961523);
    msg.setSource(884U);
    msg.setSourceEntity(51U);
    msg.setDestination(50951U);
    msg.setDestinationEntity(29U);
    msg.state = 54U;
    msg.plan_id.assign("SFTMKHYEDJRRJGURLGZQDOKUQLZPTXHEJNOXBACVHMALPWTWMVDZIA");
    msg.plan_eta = 705739050;
    msg.plan_progress = 0.49253090051886816;
    msg.man_id.assign("FVRIHBPSOGYCWPRGVAZUJGPWOXAAXHPUYNKZSVHJYPYZPBNCUEGMJLEILMJFJEAWSGHOFVZVDKGOLFONFJQRRZLKFQDWIZWMUVLWXILXMHIQTKSICBKDJPYVBOIUBODTTZZNMGWDATXKYSUXHFXPGNGJFEQZYQSTSCNDQHDGTCYJDUVFYRLNBDLWRHBAOSQRMHYPRQZIPEKBVAQKXEVHMWMLUTKJCTORNLKMDTXCFS");
    msg.man_type = 57012U;
    msg.man_eta = -1746876444;
    msg.last_outcome = 146U;

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
    msg.setTimeStamp(0.8848832178212988);
    msg.setSource(47544U);
    msg.setSourceEntity(94U);
    msg.setDestination(21343U);
    msg.setDestinationEntity(20U);
    msg.name.assign("WUDBVRJVCFEVQU");
    msg.value.assign("FDXPIUVROOQWQFXGITTUILCLIKVSJUTAPXBJDDJMYXYXIEWMJZRHYYRZOCDNTOOMHZTSQYJRSKZBCGMYSPVYFLWSHBPMWCXQZQHVLJJKFGMBEWSWQWEUNBRIPWGKYFODPEKKLEGPYKJQFKEDTJOUHUBVNPHANCQCRTVLOIFCEWWSJRBIFQZLALGHMHMEIXBUPNZXNDVHTAUFRKGXASBIGEKZARCALS");
    msg.type = 70U;
    msg.access = 103U;

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
    msg.setTimeStamp(0.025117377770761395);
    msg.setSource(45954U);
    msg.setSourceEntity(153U);
    msg.setDestination(23159U);
    msg.setDestinationEntity(59U);
    msg.name.assign("MOIQBTRXHJMXQGCYWZANYZUEILYYSIEUDVLZEVNWMXOZPEPBMPLOYYZKPDLKXWMLUFOCQDBKVRDBXYFJNSROLBTSAGJMUFLKCMPQKSVMRTNHFZWMHONAUILVGDCSKHMTOPSUDBCKPOSBHRPEXGDNQZDAWLLYWCHZJESFBYRCJUFFHQZJQWEQEWGNXSGVRSJXORZQATOTDVAFGURGBTPTFIKGIVJNXCIKJKPQCHYWADUAFARWNIETJT");
    msg.value.assign("IXNYQYAPEDLLPHRVNFEBJZOOUGHXRMVAFLSDUZXFRQQMTGIHBWODSZBUTBYYCKNAFZXHJJCETPZLIGRXPIJWUQKHUJMKIRCEUOYBNWQ");
    msg.type = 118U;
    msg.access = 149U;

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
    msg.setTimeStamp(0.20208223908628276);
    msg.setSource(61254U);
    msg.setSourceEntity(163U);
    msg.setDestination(44622U);
    msg.setDestinationEntity(83U);
    msg.name.assign("BCRFPKXYBVGGNUSVVYNBRGODFYPXUZIQDSASADGTNSOCLGMHHJWHNSWQMSRNQJETRWLI");
    msg.value.assign("OSVQKUGXLPNZLTDBXWYYMMEAYVAEJGUCTNBVJPPVVRJKNGPBEVERTSDEZSFFVOKNFZIWAJGCRKRKCAGYYRNQBPBHFUDKDILRHODGBB");
    msg.type = 70U;
    msg.access = 208U;

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
    msg.setTimeStamp(0.9525578320512152);
    msg.setSource(37077U);
    msg.setSourceEntity(47U);
    msg.setDestination(58136U);
    msg.setDestinationEntity(227U);
    msg.cmd = 100U;
    msg.op = 88U;
    msg.plan_id.assign("SVEHLYMPCGWCODDGYZVWAKZJKFGSETIHTVGWXYAKUAIKAEUPUPRGWBCBKOMNOWQWXYGSAQJMORKZIOAJXNORAQINLRKHJQRIBNSRBSTVXDLJQTDLYFZFCIMEVPODBEDQELILPSNULMSFOOYJUUNJZQXCLPFJTBRQHUHPMGQDNYTUHWVXFTJKVSPNMJNICXLFIZVMGGEQRCWEUDEBZRDZMIZPHXARTHGCTMFBEUYFLH");
    msg.params.assign("EUQUKQVXJHLEURSAPTWDYDXJNAQKRFDTQATVGNCHHOAJWNXYXCUBSEQHHKGOAIFCQTYWTUFDWLKBEMIZGQVNFRZVBXEPZCLIGVFKGFYJATRBSSQJHCTYUVXLPMPOMXMHPKBVFMTJVDKOZSSNQHNWOEIEYRCRIVPLAPGODDHIFZPDKWRPSBLSIFMIFLUESMCJNSVGXUTRXHKOZYMNBURZGNIOLYETQLJMOEJNRWZCGJBWYBPGYBCC");

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
    msg.setTimeStamp(0.07921695761024328);
    msg.setSource(18303U);
    msg.setSourceEntity(124U);
    msg.setDestination(35901U);
    msg.setDestinationEntity(157U);
    msg.cmd = 199U;
    msg.op = 83U;
    msg.plan_id.assign("AFRYFBSCQDBLITDUGMXRMMSADJZUHVNCPSAHLNBGIVEEYLTVYUBPWONMPYKZFPRUGJUI");
    msg.params.assign("FIKCLSLKOCTBNENWIJYZFSNMNHOAEHKDWBAHALGFLTELXDJJOBIGOONGYCRJCSNDZNQXEZUIXRUYGKQMDTYOUGEYRDCJTNHRBFNKIAVOMCAEMUVQIBTSKPGPQFRFFZPERDZXMZYEIITWRBEWUGWEKCGZUOTVHSWXVJYUBSRMLMMABHAIFWLPTYOMKGHL");

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
    msg.setTimeStamp(0.8744486077707855);
    msg.setSource(65157U);
    msg.setSourceEntity(50U);
    msg.setDestination(8417U);
    msg.setDestinationEntity(225U);
    msg.cmd = 142U;
    msg.op = 183U;
    msg.plan_id.assign("CASMTJHAMSAHZTDLVXEVOFEAHMFINHYRWEWWAXXOYTQIFNOBCLJLVDDYBPFPMOBURFDNZBWZTKJIUQYLPQYRYYKWPGRPSGQKDVLWQPZBPDNNNDOIUWGKGQSXFCHDAYUBVSKDIQSKLXVUXUXJVOUTNZSRVTIPMJYCM");
    msg.params.assign("CIEVHTZBBTJUUZGYUOIWTTBXIDYBFLSRYRAEVIZARDJXMQQWJEADWSSBHHNMYXRSKEBSCYVPLBTIXLLSNIWVWOHESAAAOPDNGVGNITSPYUMVRLBOFFHLRKKUHCJNMPQZQBRYCWQMPWRHYMBWN");

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
    msg.setTimeStamp(0.29043233820406555);
    msg.setSource(38849U);
    msg.setSourceEntity(47U);
    msg.setDestination(44350U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("XLHHTOVEIBALETPPMQHVFTBAOGZTSCAWUNZFEQNFPREKRRFKBQICRXFNWHQCYWAIFWAHARUOZCJWEZRTRKLCVNAJQECVDLCGSANOJPLDCSLDNLLVTUXMMUUPZYKXWMDURGMATFMVSRQPNGYSWGTDZBVYIVRUKLKQJJBXZUWGQYIBYZLYDKFSIGHQEEYZFHYMXNMUUVSYCSQPNJNXIBFDPXEMOGKSVJBHWDXHGOBTIBKPCDOJP");
    msg.op = 222U;
    msg.lat = 0.9779805310973314;
    msg.lon = 0.0331743065321195;
    msg.height = 0.9837699007795817;
    msg.x = 0.8402462454237596;
    msg.y = 0.7106527807901928;
    msg.z = 0.9206696168323703;
    msg.phi = 0.4762914010278695;
    msg.theta = 0.6906560279260477;
    msg.psi = 0.6938037791992278;
    msg.vx = 0.6545281266046741;
    msg.vy = 0.23582811756597433;
    msg.vz = 0.5731577182790181;
    msg.p = 0.5194292397746122;
    msg.q = 0.8126263504864611;
    msg.r = 0.4751872954636587;
    msg.svx = 0.38176527150499384;
    msg.svy = 0.40447232670101674;
    msg.svz = 0.5126207386679786;

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
    msg.setTimeStamp(0.8660729250607426);
    msg.setSource(23482U);
    msg.setSourceEntity(176U);
    msg.setDestination(18258U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("YLHMAXAYCYXYENQBXGFTVGCKPNPEPZOWOLVTZAEXCHSGPJBINPEMWSZFSIGSQNNNLONGWMNLUQUMBQXAFI");
    msg.op = 57U;
    msg.lat = 0.9342996711677012;
    msg.lon = 0.9342851681267577;
    msg.height = 0.7359943537093032;
    msg.x = 0.6284295912998777;
    msg.y = 0.5717304306840535;
    msg.z = 0.7359910948342029;
    msg.phi = 0.47306262478111594;
    msg.theta = 0.19133097115060527;
    msg.psi = 0.9395017442357936;
    msg.vx = 0.3807979120161483;
    msg.vy = 0.7653802424914588;
    msg.vz = 0.3557475628835076;
    msg.p = 0.6122509463847984;
    msg.q = 0.8206113087076021;
    msg.r = 0.6762130413873246;
    msg.svx = 0.15350528496222637;
    msg.svy = 0.2999613677090227;
    msg.svz = 0.9430019035904421;

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
    msg.setTimeStamp(0.9646659222927249);
    msg.setSource(51862U);
    msg.setSourceEntity(63U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("ZLCPDKVIGTZVCIDGMBKBDHADTKYVNJFCGJMEBIHPCINREKTLCVZFFMWEJPBXEMTEWWYNIHGGOUTFHKEZGPERYXGTSQFQEJCFHJXRSZYMYXHKWXMGXAOLMVDDRCQSHCKGOSBVNQSYXPOFOUMCMJQZNHQNOALBTRWSIHOYFUVAYBWLXJRFGEUWAOIUTDKAPZLERLRNRIO");
    msg.op = 78U;
    msg.lat = 0.5854817373617817;
    msg.lon = 0.19894283362180532;
    msg.height = 0.9035227717431491;
    msg.x = 0.798352786702507;
    msg.y = 0.7400198971888001;
    msg.z = 0.07154719208845917;
    msg.phi = 0.9612097491138727;
    msg.theta = 0.10091942041214841;
    msg.psi = 0.8422823711066292;
    msg.vx = 0.2859206266162049;
    msg.vy = 0.8869866082640279;
    msg.vz = 0.8819508868227962;
    msg.p = 0.5403032559805597;
    msg.q = 0.5455437719588818;
    msg.r = 0.83953185709024;
    msg.svx = 0.6059378465875015;
    msg.svy = 0.05630526783386902;
    msg.svz = 0.5215728296564281;

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
    msg.setTimeStamp(0.7702470824802258);
    msg.setSource(16598U);
    msg.setSourceEntity(4U);
    msg.setDestination(61824U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("EOAIQBCUQBMNSUVFEZHTGCLDZESZSQIHKNIRCQLROTZEZYADANYNNCNMMMFSGKMDHYEDXQMNCETFRTSWJRZUWATWPKEWVPQPPBJZGWFYSBYMLSYTXUZUPHXXFKCIGWLGTSVUVXYQPVBOWUXAMPABDWAJIZEVVOUIGUOFLCPRBKKRMJEKVJNKNTBBRLYIVEGDHUHQLCF");
    msg.type = 231U;
    msg.properties = 147U;
    msg.durations.assign("FBDGFEAGAUCXNNJNRVOJHJXSLPRBPXICANLPWYURFMSEAJQGEQYIBEKRCKAHGQXROGERLYNTZSQXNOPXFUVVBDHOVFMQMWSTPLAWPJVMTNIGDJWNSRKSAAI");
    msg.distances.assign("SNPQBCSRAMQUFALHADORDDQPWSCBSHAMOEDQRJEGPTENGJAVNTZZLECATOWGEJPVNGDWEVKFJFEBSSGVZWIZQLVOLKIXOMRWXPHJBCUJOTYHWMLUVNNMNFSNTBQPIGFKLZQPXKJPHCWGRRZCUCLDOXHJQYEYUHUTXYBAVXTYYKBQIXKMPBSBHIYZWY");
    msg.actions.assign("IQLCKSUYHMWPKDYZJOUGLIZTIOAFXGVXUWCHLAWXZRXFOBURVNMVXMZSRIODHDYVJPBJPORNFEBNQDVNIEKTATMCLTZFSFYTYOWVWBLSWUKSCFENSEKWQUOQQGOPBESRZHTGMIURHTCURXEGRSYQBFPGASQ");
    msg.fuel.assign("KCAGLZPLRNQITCNZDURLCFJSUHLFZFAFKHOTXVIMJAOEREMEOIBFNXKFJTSHJWDASOMNPXMZQQIQUSJAWKBTIDHFNANMSNLIHAYETVWLREDTUGITOSXRRZZUSSUOBMTUNGWVQYHFXAGAJLERCHNVXEBMPCVYKYXVDWGPCOBVWKXARLUCGDMIOVSKGKNHUDDXWJXEQDCQFWTYIJWIWYMFGLHMBPYKGGRUPOZYRC");

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
    msg.setTimeStamp(0.9016895659965881);
    msg.setSource(52542U);
    msg.setSourceEntity(59U);
    msg.setDestination(52227U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("QIZNALGQZUKAHBGOGDHAMOTBOELGQTBVONLFZPIRJADAMPJZVKHDVCPZUCXQSCYFGQHRONCFTKOOFBHZXZIEYYWERPCVESW");
    msg.type = 31U;
    msg.properties = 180U;
    msg.durations.assign("TZRGLIKROCJGECGKLSEZPNRTFFIUEMQTIUEUPWSHLEBRIXDPHTBYWOFQZEHHDTXCPQQLXJPUZCAINXUBKVZVNYOOKOOYQDBQUYFDTCRNMEMQAGDAVLBKHHQPHVLWSBIGJSJYMIKDDEPTHJUBXQBUWNLHZDSKRLNFTSCDZMSSYIWAROMXGOXVYYKZMANN");
    msg.distances.assign("TIWQQUNAWFKCWYTVXLJV");
    msg.actions.assign("ARWSKCVJUXUIROYAOHZRXIPWOFIXDAQTNJGWVXZCUYDEUPSQREFWFTZCDJIVXXDBNTGWLGMKTAEUCJYGMEVMTDBSCJL");
    msg.fuel.assign("NUVJANLSVEHMPPXSLICZOWNXFWQYUFKBZKDMUDOCGKWRZJDEWHBPAEGVVVIFEAAUJNTYYPAGDWYOLHQQKPMYHJIHMXNOBNGFESKBDUPZYKCBNTVFCSVXJWFIIUXTSMQWRKQQTMXTALOGIOMHXJYFRTE");

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
    msg.setTimeStamp(0.194950207787423);
    msg.setSource(703U);
    msg.setSourceEntity(90U);
    msg.setDestination(17433U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("ENGSSIFXUBOJNZPULBHBYTAKCBQWGSIQADCJVVBOQQHZBZZRANWTELMMIAXCMYBFTTUUKIPSZJHFDKCPGPTNKLQFSAWZOMVGXJIYUOIQADXKQFNAERJGVXRLXQNCKDRALDUBVPZWIRDDVYMYULXOJQAMWOIVECVPCQVJZIYSHETOYGEWSWSMADFN");
    msg.type = 88U;
    msg.properties = 173U;
    msg.durations.assign("RZBSKSZFFZTVD");
    msg.distances.assign("QZDUSFUEHVIPFTWYTKXGYQKXUKNTZJJEIZVSOJCLJPSSICHSHXPLWCAFEDUMQMGMJMNYWNZQYWZDLONBIYCACLVKRYRXEBAGEFIPPQBLLCBTZYJUHCOVFWWHXLPFA");
    msg.actions.assign("ZKIKLXRVIAWEJAUMHFBRWAZMAOQMWDBTFVQZOCENESHGIPNSTCVATAYGBDNNPELMWFRKUQKKCYSHUKPGWVTFRDPFBIMZCCGEWIVQHGHXRYXPGXCYIYDJPJJOBEQPYMWJZFSWNLJHZRFQTTRHEZOQJNKBYGFSGULDDFRAHZYXRBUIQQPVVZLJXTJMDZXYNUSSAHVXMOVUTXGLSNEOTWUCPKDDUIIXOOYWRLACBSPHLEM");
    msg.fuel.assign("NPRZMEOWGNMBNUGWCJZJDEZCSYNSPYFPIBOJUXCRUWUPKTSMESAJCHYEQSXFCFNXMGBEQKEMOKBILZKTKAJCABRDUSEWYVHFYUIQNMFZZENRJWULXBDAQNFWGJVHQVXZPKOTOCTGJAEUROLXLVDFPWNUKOYPBAQIXCQPZHLHKBQWRMXTZELMVMULDRTKVXHMSIIJTDDILOWSDJAGHDTGKSAOFCCINAGIYRYS");

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
    msg.setTimeStamp(0.9999036488523241);
    msg.setSource(28504U);
    msg.setSourceEntity(157U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.29219421476639984;
    msg.lon = 0.7996287500748487;
    msg.depth = 0.8339758178596137;
    msg.roll = 0.07884657334657419;
    msg.pitch = 0.3302772182893059;
    msg.yaw = 0.17367176891119085;
    msg.rcp_time = 0.9397057403817309;
    msg.sid.assign("AJZVIXWTBRJOMPFAYGGVZVKOKRWQACFYGGCPHFBCOWGRHPETSVFPNSNHZACIBKCEINQEJYUGMOKBXFSZGNKQFHIHATCNLOBWYQKTGSSXVARRYQEJWIZRSJDZTSAWCMTUPSFISUHLOXNWFNUOMPEXBZUHJDJYUJEDMYDLCXLDBFUTKALWQKTVOVHDUHNYPRKXQXILKIDEEXEMGQRFLHG");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.92066087015349);
    msg.setSource(44458U);
    msg.setSourceEntity(157U);
    msg.setDestination(24454U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.7916049878166092;
    msg.lon = 0.10316919866023277;
    msg.depth = 0.5000586244045868;
    msg.roll = 0.23933850006945867;
    msg.pitch = 0.3600710903904172;
    msg.yaw = 0.5549411388263582;
    msg.rcp_time = 0.5055168801988529;
    msg.sid.assign("SJWAXKVQSLTJNRJMQDMBOCKLTBYMRCHDOKGSWXKHDUCFGBHWIDPAMHUPRSPOEZOTSZZJUCPDWYVEQPRFOGFSSPWYZAOQDIJMZDATOMYQEIUXYGEFHHLUEZYNHGINQCVVRKRFFGBJZEYTORPGWVJDANIQBLWVUYCQBKRAKEVFQSRKUFLBNUPBLMEZBVTNGYFWDNT");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.8506507672744477);
    msg.setSource(57575U);
    msg.setSourceEntity(88U);
    msg.setDestination(64846U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.061195497259801446;
    msg.lon = 0.08395568305651913;
    msg.depth = 0.36948734378734516;
    msg.roll = 0.2545935986193104;
    msg.pitch = 0.10676437946159878;
    msg.yaw = 0.3113060582062568;
    msg.rcp_time = 0.47531001238448045;
    msg.sid.assign("AQGMAFDYIHDIJUDGSNZFUCOTSYHXZNMGSRXUKTEPSNULJOXYNVIVAWORPRFAFSVVLKKMLOTDEEZRKOUPOGYRVRYUMFEFXPMJZWZXBTIGRVJCTCPYBIQQSEIMTZOYLELBNJDTXNSBWKKWANWVAHSZHXTIFAXLPHVBOQBWEUZDVCXQQIHBFDZCMHBZHPQKGTSQCKACDKNKEJUFQCCLGEVIBPTONPRNMHXMSWBMUYJRLRELCGDFIGGUAJLAYWW");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.6492290323313957);
    msg.setSource(64357U);
    msg.setSourceEntity(59U);
    msg.setDestination(59735U);
    msg.setDestinationEntity(64U);
    msg.id.assign("OQQAOVRRTJDRMFCYNXYWAOYDYXPQDETGVVYUXPJIPOSWJZGRWBEIKKZEVDHUSUOJEFCPPUQGDNJSTMQIULBXALWAXQG");
    msg.sensor_class.assign("GWXKLMOWTQTWAWBHMUDYGHVTXKNBVKLMMHEUIOKYZSBHZPLQEWRZLQDAZOUGJQIDARREFEONPGTMJUPRSBCMDWPVVIFOWKBHNTKPGFDSXNHXSWYTNCRCJHQGSBMPVNZFSRKYPEWWQBMDCTXAAJUYXHKYDRFOPANZ");
    msg.lat = 0.6866267641787684;
    msg.lon = 0.4808592500044565;
    msg.alt = 0.6813960336180406;
    msg.heading = 0.8553826129280028;
    msg.data.assign("ALSCJAWMDGUILAXDQWLVARTZISVQEAJNGTELSPYEKXMYDYGBJIFYBFDJIIYNKAPQSKGWHCNDEZVJPYTDZHLEUURKMXHZHMRSTLCGQLHQYJFBUDJALNLMBSKZEWRZQTTSBUAKHCPTRWCGXOQXVVUSPEGBSJIFEWHVOGFSPIVAIOYCQVFZLJTXMUXNCNRPXWOZQAOWMMZXFRUFNGZWPKEOMDGPHCOKCHKRRYTWTQKCUBYOUDERIBHF");

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
    msg.setTimeStamp(0.32086338424190464);
    msg.setSource(35011U);
    msg.setSourceEntity(61U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(224U);
    msg.id.assign("YXVMKPIHPKKNXSRYLMSOABBQFEEIKVCCUWEQPYBUGOXVPXSTQBWRFOPKMHORQEOWKZVFLEADZS");
    msg.sensor_class.assign("RJCVADKYCBQHGBUWMKURPMDRODMXPQSSQHMFPAJIHQKJXLPGDSKAIOEDVZOPXEAVGQVRTNTEJJYTZHWDVICEWFRFLENADLVBRULUTELKFNTIITYPTKWOPPFCCUCLHRWOUUSZXEWBLAXWOYOFHMJIQFPAJXIQSGSBRHWGZSVGKXBGBZBAMZVPMJKHKYQL");
    msg.lat = 0.31731046801956064;
    msg.lon = 0.08978845411253222;
    msg.alt = 0.5621455485373112;
    msg.heading = 0.7528211784099905;
    msg.data.assign("AXWOSUWHREIHKWXACTLMCPPYXYUITFOBHAZIWCRNEVLPPJSZPFJBBVMNKZUUJUJQIHBFKSKIRHNNJCCMLGWOMGGWPEVBPFXZDWDQLIQIZZAYMR");

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
    msg.setTimeStamp(0.7478357426377393);
    msg.setSource(64085U);
    msg.setSourceEntity(8U);
    msg.setDestination(36975U);
    msg.setDestinationEntity(12U);
    msg.id.assign("QHOPRTKUEIWJHBXONICZZMFQCOEPFAQDWIOROWNYSFHLDZZJADCCNYTVTQYAKFJPDBUK");
    msg.sensor_class.assign("SYCMKPXOFPZBJZRUUBMHKMXFUCNLSCEXNDDPUUDGXTOQUYBRTBADKNJZSLCFDUANQXYEWXPGGZDRRFZMHYWRINLEMLHWHZQIQTHDVJGNZBOGIGJJRHREWJAFKFCYSNASIYGHCTELCKZTBUK");
    msg.lat = 0.29048459914151126;
    msg.lon = 0.22438906510332202;
    msg.alt = 0.9165177864272444;
    msg.heading = 0.14756515008384585;
    msg.data.assign("VMMBXWSQILZSBRJHONSMEFKDNHLITBYUEQVCFDWZUVXRMDGJPXHKFWMK");

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
    msg.setTimeStamp(0.9125704064579752);
    msg.setSource(55141U);
    msg.setSourceEntity(133U);
    msg.setDestination(13972U);
    msg.setDestinationEntity(203U);
    msg.id.assign("OKMQGDQUHMWVZNLEZALVTDXRQFWSTVGSMIXBFJIGKINXAXKGBIABZKCTZWRVHICIWXSHXXRLYBPPAFGTUPQWECJREGFNZSQZSWJEABCHQHBOISNSBOWUTNJDDZOM");

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
    msg.setTimeStamp(0.9718773328425108);
    msg.setSource(59812U);
    msg.setSourceEntity(23U);
    msg.setDestination(16U);
    msg.setDestinationEntity(182U);
    msg.id.assign("KXLEEHDEKZECCDAQUCIAYQYMEAAMPV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WQRBRMGOLKWXPJJFUXLWSOYNKCITNSOTTXIGNEKIBPTRMIVLRGFOGHZGTQGCIVSDJJYCKSRYVYPABOQVZBNQHTKUPMNYUMVAHBGAQFUJZFXQPJNEAOVSFFMXSPXEKOBHLREBMSITOACYKQVHCABMTDFHKDEYLAJCUIDMDNGCLCGFLSCXKZWDIWERCDFZIJDJZKWWUIPVLQYJAUDBYLOGUXYHVUUPDTNHPWTRZRMXWSAQB");
    tmp_msg_0.feature_type = 207U;
    tmp_msg_0.rgb_red = 239U;
    tmp_msg_0.rgb_green = 74U;
    tmp_msg_0.rgb_blue = 50U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8665034646990183;
    tmp_tmp_msg_0_0.lon = 0.11215773773775295;
    tmp_tmp_msg_0_0.alt = 0.23778418284620018;
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
    msg.setTimeStamp(0.3619970128585678);
    msg.setSource(38015U);
    msg.setSourceEntity(167U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(163U);
    msg.id.assign("EIFFMXDBNGPXNQSLDSVETAHLALYAAJIGIJSEVLHSJDIMTNWGGGVZODKYPNRCQRKBTKPQPDPLMHAFYMJSECZJWHYXISARPYGIUHPYBEHCUUWOJBWGFQIOLRZQELYUJFNFRVGZPKXARVXZWSQQDPY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZSANOHDWPOFOZBBKIUWLGAQDATITVROCZYAETTCRGOVJUTWXDWQMDXINHSZFGLLNIQDKIEHJFWVQLNTLYHFWHSEXZMYIOEKFZNNYUGCGUYCOSVEOWHGDUZSVPVFCHUSDXWHCFRVMTONLRSAIEKRCPEMNLAYTVFSWIMRPXPYXPMUFYUPGJEXKGXBOLBBQJJAQGJZQLASYBBZFBR");
    tmp_msg_0.feature_type = 120U;
    tmp_msg_0.rgb_red = 30U;
    tmp_msg_0.rgb_green = 0U;
    tmp_msg_0.rgb_blue = 149U;
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
    msg.setTimeStamp(0.600300629207034);
    msg.setSource(28032U);
    msg.setSourceEntity(195U);
    msg.setDestination(43380U);
    msg.setDestinationEntity(159U);
    msg.id.assign("KMLREWZCTCHLOZBVNPMSTQBOCZFHGREHXPNKCWOOXNZOTGOVQDWRSWIIGJYKIKVEHIUTJLREBRSIRFXWPYQHSBUVXJZDBFGLKFKCBXPLUGEALAJUXMBJXYCSAOXWPFNMSBUUSYNFSSTPRJUNDRYQIZLTCLXBCACBYGIFOZFYFMDJNUDQWAQNKQRYVGEDGQHATMOAOYZYVFVSGMZEDWIWIAADMQDQEJHKTUDCJIT");
    msg.feature_type = 198U;
    msg.rgb_red = 168U;
    msg.rgb_green = 201U;
    msg.rgb_blue = 75U;

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
    msg.setTimeStamp(0.4294558362745412);
    msg.setSource(25956U);
    msg.setSourceEntity(80U);
    msg.setDestination(2917U);
    msg.setDestinationEntity(175U);
    msg.id.assign("ITUQGOKRTFV");
    msg.feature_type = 149U;
    msg.rgb_red = 33U;
    msg.rgb_green = 120U;
    msg.rgb_blue = 241U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.35265849115534686;
    tmp_msg_0.lon = 0.9028048570527104;
    tmp_msg_0.alt = 0.018407592517428295;
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
    msg.setTimeStamp(0.17314736275485698);
    msg.setSource(46030U);
    msg.setSourceEntity(142U);
    msg.setDestination(48862U);
    msg.setDestinationEntity(230U);
    msg.id.assign("YAWJMKXJKTZYITVEHCCLONEXZOIPPTJPRJRNNYLMZVPRTYSBQXUIBKZZIAHUWTVEFOQBUWHEBSOQMPETHFCJISIQTMCO");
    msg.feature_type = 100U;
    msg.rgb_red = 198U;
    msg.rgb_green = 144U;
    msg.rgb_blue = 138U;

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
    msg.setTimeStamp(0.05116501359815262);
    msg.setSource(62897U);
    msg.setSourceEntity(64U);
    msg.setDestination(41290U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.4228102382417066;
    msg.lon = 0.8080312656955466;
    msg.alt = 0.41911922220506126;

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
    msg.setTimeStamp(0.37959810858869314);
    msg.setSource(36804U);
    msg.setSourceEntity(21U);
    msg.setDestination(7183U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.0910740092677772;
    msg.lon = 0.3147763040764354;
    msg.alt = 0.7422820917735423;

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
    msg.setTimeStamp(0.2451001614813807);
    msg.setSource(4018U);
    msg.setSourceEntity(199U);
    msg.setDestination(11873U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.5736000033200411;
    msg.lon = 0.3394531862917246;
    msg.alt = 0.20374418364521474;

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
    msg.setTimeStamp(0.22671510044317633);
    msg.setSource(20443U);
    msg.setSourceEntity(227U);
    msg.setDestination(41661U);
    msg.setDestinationEntity(80U);
    msg.type = 180U;
    msg.id.assign("CBWMAJCKBDXZFCBDSYGPQ");
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5162954515434403;
    tmp_msg_0.base_lon = 0.666341990248895;
    tmp_msg_0.base_time = 0.22844304896141865;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 43296U;
    tmp_tmp_msg_0_0.destination = 7545U;
    tmp_tmp_msg_0_0.timeout = 0.4774848777317864;
    IMC::Sample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 28363U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.019550334949884007;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.875325995992525;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6178391109617541;
    tmp_tmp_tmp_msg_0_0_0.z_units = 170U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.09835390122281795;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 116U;
    tmp_tmp_tmp_msg_0_0_0.syringe0 = 232U;
    tmp_tmp_tmp_msg_0_0_0.syringe1 = 89U;
    tmp_tmp_tmp_msg_0_0_0.syringe2 = 97U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UNDNZTJWKNKLWAYRQFUXHYZKCJDPLHBEAENQEGMIGWRVCRJMUQDWRAWSIMRWIETFKVURAAGWPZINCZBPGGZHGZZYJTLOXSDGYIB");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.36058422158087655);
    msg.setSource(61682U);
    msg.setSourceEntity(132U);
    msg.setDestination(28070U);
    msg.setDestinationEntity(221U);
    msg.type = 125U;
    msg.id.assign("DZUTTGFVFBZCYQYMKGOCMTRVFNEMZJDWULESTZJBQLAVBXTGCNKVOIMQNIBUMJZBLHIDXBNXTSYMSYJHIWPDUEPIUVLSROGOCWQALEXLHYOQGSAWHYCVURVCABCQQDNGBMSTNNKRLWFDSFVWPGFZHZQFIAUJPKURDMVSFCAAARXAYDPKOUHXJFWNJWPGLHYJXEQDKDOZSXTTHYEARBNJKEOXKIHFUGYPEXLWVKCONOLJKEEGQWHPPZMRIIRZ");
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 179U;
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
    msg.setTimeStamp(0.4734450830720448);
    msg.setSource(14304U);
    msg.setSourceEntity(98U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(185U);
    msg.type = 22U;
    msg.id.assign("YDNANDUAHDQFKEBPPHTOAICMWTBQRAWKSK");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VWUPKUQUAENEWEZFQFQIHGHOMVKHPIXCIHPTTUVJYDFCEOAHWIBNZJITTPMMJRGSRRCMTBCBYWBLMXSUWSTJZRPBRUZWXDBHYALMHAQJXRVCFZXSQCQPNDSJCRVIOGDDMOPPFENAMSWYZKQEASMDILGDKWNBTCOKBUXGODXNQZLXGHE");
    tmp_msg_0.lat = 0.6289124583942733;
    tmp_msg_0.lon = 0.5873595980707452;
    tmp_msg_0.depth = 0.12761160080019684;
    tmp_msg_0.query_channel = 21U;
    tmp_msg_0.reply_channel = 83U;
    tmp_msg_0.transponder_delay = 161U;
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
    msg.setTimeStamp(0.47746258009175846);
    msg.setSource(59886U);
    msg.setSourceEntity(44U);
    msg.setDestination(33145U);
    msg.setDestinationEntity(247U);
    msg.localname.assign("KDQRMORTJNGRKZJKOVY");

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
    msg.setTimeStamp(0.2258973369258218);
    msg.setSource(23199U);
    msg.setSourceEntity(90U);
    msg.setDestination(43290U);
    msg.setDestinationEntity(110U);
    msg.localname.assign("TCZNSZMBULOHQARUJJTFKHEVIEVRLPCIGMHYUCRPPLINNOKZHLWTASUCBITJMIKGRCBZOQAEXHSYYYLSSQQOPDUVBFXRRBOXZEUFOVBFTDLMWQCEQSWBWWIHQRPNZCNLGEQZXQAGFANABFIJKVAEYOTIKPFYDLOGHKUHIYXHJUZZDKWSTDGJAGVMKWYBAYFWMDJXEJETLXVVDDXIOGPTRXWZJKGECNSPPMVXNMKQNTSBJDR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TXDEJZMKSNWDUIVFUPXRNKKZRXYVSCSNCVPJXMPHFTWIEBWGDETCBRCGNRAJOPDQUHVOAGHVBHWFDXBRWIEEMZVLZXCLKQFUVDJKUCDAUYKXXQSMONUYBRSTKYEPZZDNPTHZSMI");
    tmp_msg_0.sys_type = 174U;
    tmp_msg_0.owner = 796U;
    tmp_msg_0.lat = 0.1999310956293947;
    tmp_msg_0.lon = 0.6355824832550672;
    tmp_msg_0.height = 0.7005093226278611;
    tmp_msg_0.services.assign("GJZEBFHVHLI");
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
    msg.setTimeStamp(0.030424620991890028);
    msg.setSource(26072U);
    msg.setSourceEntity(87U);
    msg.setDestination(11289U);
    msg.setDestinationEntity(197U);
    msg.localname.assign("BOWGYJVSXJIOPSMQYSXONQHZBDDBHPE");

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
    msg.setTimeStamp(0.5170365849362728);
    msg.setSource(61882U);
    msg.setSourceEntity(30U);
    msg.setDestination(52813U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("BDILIWHKZLFPGVUVKYTPTGTCEZYNLYCSKQLSIXUEQCITUVJNKYQTDYMYWUGMRAIDEIGHFULBDZBISOHPDOGWWAHCLPRKRIFZVTKXFNZCLXWCPVDZGSLENMTEEJDNZZJUQXBPONVMJZXAGEAMMLFHQERNLOEYRFAYOMUHHNSJFWYQGHXFGHXTPBWSRMGQBDQQRHJIYJKMDXUOTUSFPNOSFSWXOVXEBANJVQKBPWBDAVAJBTRSOKAVJCWR");
    msg.predicate.assign("MANYWGNLZHCFNQUZAXTWHWTOEFTAHKSCSWKVTJAASPKQCOOFPVRLEYZTRHCBDYSFESWKBIYFBZXURNRULYMWCQB");
    msg.attributes.assign("EXTOMECUOMJKJJSCVEZAQZRGIZNVLMZMJHCUBLQQWSRXDGIQKBSQRSYDGGCPKGSIAOWVJUFOWRAJVRIFNKGBOIYEXXZVIQUN");

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
    msg.setTimeStamp(0.40273038791513993);
    msg.setSource(31862U);
    msg.setSourceEntity(56U);
    msg.setDestination(12670U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("XJTEQACJLJEYBMIVAF");
    msg.predicate.assign("QPALKFORENJDUEYNQMGDXGQXGPDXKSJSLABAPFCTBWHFSKBOVIS");
    msg.attributes.assign("IIBMFSKBPBYBPFTMWNZEPUASJIVTMUMFNCNEXFHIUQBAMQZHYGRRGWXQRJLFTOKDSJVAUYIZUOKDMKOBXMTAPVDCINMRGQBEJJMYGTXSZGLYXOENTJIKTSOLKJBLFFOOHSGH");

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
    msg.setTimeStamp(0.6991626370139669);
    msg.setSource(54290U);
    msg.setSourceEntity(128U);
    msg.setDestination(51788U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("ZSTCYSDXZUYVMNGNMVXTPGIVHYVWNTLDDXUGQXZRPUSJAOJTGEVNIWCUTHGQRYSSLOTJPANQISCQKUBFFBBWJOHFVRJUORNYKQKZOLOEWDOKDSCBQDUCNZVBYZXKWAHAYCGMEBXRRALWFJTKIIAAPUELEIPAZSGXVKWWLQCQLXCSKMECXLQFYMAJGBSBECWIDVWNBRKGNOXHIQUTEHYJRJLHKIPPDAFHRPPFH");
    msg.predicate.assign("ZTJWMQUPZPDUEIEDHPZKTMCOGSLRMKXCJUNDLYNWBEJWIVYFFCXHDFTLMINHL");
    msg.attributes.assign("GYYUCBCTRLDHVMDWISBNCTNIRUEGPHDPRJTCFKGFVNOAJGFKRQPUSEXYDJKDJHQZWMMAHGYMJGRNZVLBKTPVQOYIDNGVQTVNTMWSZPNBYEJXAZMWHCFXTZSALTOASUHOXAMILGLPMEDHWQFOHAYZ");

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
    msg.setTimeStamp(0.8691713267376412);
    msg.setSource(13047U);
    msg.setSourceEntity(244U);
    msg.setDestination(34169U);
    msg.setDestinationEntity(124U);
    msg.command = 47U;
    msg.goal_id.assign("QOBJGTLFKJEVKQQXSCHPZSRIMJSBCGBZAIWVVAYJJLE");
    msg.goal_xml.assign("BVSQMBKQTDOLJATWXASGALUVJVLRKZJBMOWZAETJQLPTRPRCBLLBFZFUIEVPYRUOFHMZCIZJPSNITCQERIEPOVZNUVUEGGBPQCLKDFY");

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
    msg.setTimeStamp(0.24138114641193564);
    msg.setSource(56850U);
    msg.setSourceEntity(108U);
    msg.setDestination(39328U);
    msg.setDestinationEntity(136U);
    msg.command = 120U;
    msg.goal_id.assign("FXWUYTQRLKSBVRIZFQGPTRGIBWKIKNTIMNEOWJJYTEAFOHVUGXHUDMLQQEWOCBVMVJWJPRFVDGRZMBOZEVKUGXBSLSDZHUSRIWVUCYQLRYCMYUFEMHAPGOFQZPCJAMNGYWNKBADDBKFOYSYUIHTAQTERGYPHLOHJKVOQJPV");
    msg.goal_xml.assign("GOOVZZOXGOZMASXWLFPYQTSSWFBEIOUBDIQWGSXJPQCHZPXCEDLVZPEHLOLN");

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
    msg.setTimeStamp(0.6800855929777346);
    msg.setSource(38357U);
    msg.setSourceEntity(48U);
    msg.setDestination(25485U);
    msg.setDestinationEntity(80U);
    msg.command = 61U;
    msg.goal_id.assign("TDQIBSDUWVXOLWBPNEFHKEDUQWQKGJHOOPQAFPXYRKPSUBCNTAAPL");
    msg.goal_xml.assign("ZBRNGKXPWVZINJQSRKIZVHBMNNDZLUIXVAHVBQIDFOVMJSVOELARDPSVJMONJTDKSAKCCWUZHRDKMFYEFTOMKXRNPRCHIJMTGUPIYJBOGIHCKAFKODYUVUMAAWSZGZTRLJJGGXSTPJWQV");

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
    msg.setTimeStamp(0.7389463881456545);
    msg.setSource(8747U);
    msg.setSourceEntity(117U);
    msg.setDestination(30001U);
    msg.setDestinationEntity(218U);
    msg.op = 13U;
    msg.goal_id.assign("HEQQGVCJOAUZXSJWWRGBWBXSUGQKHKVSSZUUFKIFGSYDGMMKMOTVOTBIXNCPMWDFLYCHVTJDISUCCDPYQRIDRHWYIXPXZSHNGYLMLXEQFPWBAQNTEVGIPMNZQEOVPNRJUBAWKVNOLKLZJZCQMMZEEXDQEYPAAOTXDTLKFJFTGLHURCLXTBIFFBOGVYOAPYUJCEHZLKHBALNVAJQYDS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LRNCULJKMYDOYUWBTSGIRHFIMPJVXOBUYAXEVZYLAMLMQXHBVZTIBUKTSKWUYSGJDSRAWAHACZTZVRLSOFRNDJJOHVXSFRPNMBNVQCYGITBECYAGNZEKOMDLOAXXOWHEUQGTSNMPBFPFHOAWDZYWDTHIZJAPSTPJVCFKGNEZUUKDII");
    tmp_msg_0.predicate.assign("VCXPSKIBWGQTIYNCYDOQJNAIGYQTYCOZHHASITHZPKUPOHCHXDVJHPEXEJNZGRZXXDMDNFAWFIEXADEYTBVRDRUTBJWTUCTXLQIZLJGNQ");
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
    msg.setTimeStamp(0.33492701438699357);
    msg.setSource(8089U);
    msg.setSourceEntity(243U);
    msg.setDestination(60014U);
    msg.setDestinationEntity(41U);
    msg.op = 228U;
    msg.goal_id.assign("UUVGLJZHWKFVDEUXUGLJOCD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PUEKVXVATXGQQNCWNMLXGCKCNPLEVVSQDWENHAJYOOHJOHKEOTHADDFNZHCYEWPWJQFMEIRWY");
    tmp_msg_0.predicate.assign("FMRXLLBIURYHSSIAIOYSZOZVXGVXTPSPDCJMKBEEZIMTHZVGPNBWGUFNUFDDFIARHCFKGXEEYRFWPXJDLWRCVCAYHJUOGQPMNOWJTSCDXTVINHPVVAQYYZBP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZEEPZGHMVFUBBNNYRITAIOEZIJRESTWJYYHRREIQXFWVXPWDNBEUTEHASXKZQRCYCCPOHLQTSKSXKHUQRRBYHMDQZBAVLSWBBUCTMZZAOFNZMIAPFKMLOCKINGNJLKIUPNWDDGHVAUDD");
    tmp_tmp_msg_0_0.attr_type = 70U;
    tmp_tmp_msg_0_0.min.assign("VJMDCVRFRCFWQTHIDGSNREGLPNLLDZXVNKRCINPJIJUQXXICMHHGJPVIUGSQVQNMVFJOQVOZBFFRZWYMBOWOQHZGBWBOPEATBXIMFEYFYALOJJWNHAHZDTTJTXOUEADCWPOMAXS");
    tmp_tmp_msg_0_0.max.assign("MNUQKODIVHGZNKLXLPFRTEMTAVSOPDMETRUYKZOWNNSFYSIPBGGSXTWDQCALWLBRIBJDUQHSVMYGUINJNEBHNDYUGWMIEYSFTWVCGSAWXBZXJOGNXHVAHNRQLYYBPKAHBOLJRCUFFGDCLNQQLTFKWAVCXTYFVARODYVCIERMEHWSFMUDJGHZBJKOCBIQZQUK");
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
    msg.setTimeStamp(0.9572645974909042);
    msg.setSource(58117U);
    msg.setSourceEntity(64U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(0U);
    msg.op = 249U;
    msg.goal_id.assign("XECGHSANVHXZIAVWJLUARIZEOSVWINBDRYJDFXJDGGOJFNKWLSFLGQXDNVTBBGOFBULFWWWFGMBCHGHNOWJOFATYQDRRRHYJZUUWMLXEKPQRKFPHQBIHCUAQXROYBAMMULPTQJBEYFAONDIGTXCCUQSVQVZJPSXZTDIIKXGLKWMTHBNXPMKPCJKPSJTKICVSSZHEZQTDSRSVATEBEYLEP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EFOVHKJPSWRYHTMUAQJTSPSRHVRUWKLMHZBWEHOFENWRZKHJHORQWXXUVITFLORUXTKAOFBZNJHFWKAFDZGDPQMVXPWLSL");
    tmp_msg_0.predicate.assign("NRWYYZDQQCDCYVWWCXUUZEZTDERPLXYBWBPNVVVQTHBMPIEMRAJSZKFQICDSUWGEXQDOPRRHXRLAZSKIXKOBBYHEHKAFJIHRFKRNAGENFLYDZHWSVBGIGXCMEBPQBCOKXOSOTXZSNXCJTOLTJOXFPJODIAHTWMHLKVJYUQHLYLIFHCZTTJPDUKUGZYDQTPQMKVILSGJNJKMRIWGBVTUUNEWEGOVPYMFSQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XKXWOECGIPAAZVWKWXRJYIUYIQZZTDQTOVGRPUZUVGZOXNXYNCTDDFYSKMYJSS");
    tmp_tmp_msg_0_0.attr_type = 177U;
    tmp_tmp_msg_0_0.min.assign("CXQMUFLWXUGKTZREBQKVTWXMHRFBXSLPNHAYIOFTOXYHZPHLWWDAIAKDDJEHUFMPAEBDHZETIJPFPAVKNNHIXIZYDKWQEBG");
    tmp_tmp_msg_0_0.max.assign("BINEWKAAOPOQUPFMEEFFCXCZTZSXDZGJSVDYDVIRKFLHFJWPVSOGPRTMFTUEJUGSBLXHTGSLKBDYNWAMAKBJRMSMQWYFMGVEUPFHXYZJYRQILMHOYQHUEWGXTUJXPGWCENODSQXPBGLBYANQLWYHWCRREATNAMFKSBGSKPWJENNJKGHQDNUUYRLCD");
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
    msg.setTimeStamp(0.17352354237005574);
    msg.setSource(47149U);
    msg.setSourceEntity(178U);
    msg.setDestination(34797U);
    msg.setDestinationEntity(183U);
    msg.name.assign("JNYYSWQBUKZEWPHPTCPYLSZHNHCZDQKMIWTJGIBEFTVUOFDXAQGDRKBRMCTGKOBAOETVGXIXKUPSLHMGXFITRCQENZJMUZDGVLYUJCDZUFFRKYCVXFXYHJKAMVOYBPVQRIFAKEW");
    msg.attr_type = 0U;
    msg.min.assign("ZKWIODTHCXPPLQPWQTHHOTZXRFTNRDMPPGVHKQUSLMFLJAVOIBBTLUIROYLDWEMNJPYMOKQHAOZHJEFVDSXXELFQAGUZZFABDRSCTHWVUPJXFRKJYURFQIMWNCVNGGTNKFGZSNFVOZTNBJGICQYWYWXAEDIYBSCLCMPOUDVIDTSSKIVHLAIEXSXGOIASJAGKLKKMMCTABLJQCBECEAGPYEUDWXNNORWWUEUBMVQPUMBHYECZRZ");
    msg.max.assign("ZDXCLNATIVNHWRNPELKQEORCLKLAPSPUCW");

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
    msg.setTimeStamp(0.37179088785155545);
    msg.setSource(22818U);
    msg.setSourceEntity(220U);
    msg.setDestination(38734U);
    msg.setDestinationEntity(16U);
    msg.name.assign("IQSXPJEIUWMYUGZGXLCPCKLJZEUONMKYJMULNJGWPREFJDLBVSTMVPRBDUNCZUISIZHXANQHWYOHBEGWZNLGNXYLQRUVVSAMPFAMMBYGAU");
    msg.attr_type = 102U;
    msg.min.assign("INTJHRCRCGUJFZFQZQWBRDLMUUWZRPGNGCO");
    msg.max.assign("JWZUOSXNCAHGZFCNTPGJRACWHUUOLSSBEMNMGBTIBHQYFUQQDFJPRHFVDWKSYBXMVXIUHEPLXRVSPQTIJNHCAZDAQBDRMVTNDHUCFEGLZBSMBVJHKRWEYYCUALIAVOPKERAEVXOTVCNWCCOQMIPFIMLGEHFKGTX");

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
    msg.setTimeStamp(0.8496902650121684);
    msg.setSource(19633U);
    msg.setSourceEntity(39U);
    msg.setDestination(40163U);
    msg.setDestinationEntity(189U);
    msg.name.assign("RHNQLDKFOCSZVOOIDLTAILGPXSHCDSIWVWGQGLMRJXJKHEXGMOPRDORUYMQYCTNWUTLXLCUBAZFQBYIBOBSQWIGZZBTDHHFYKBLYPVBHUMTSXZGECEZKUXRHGDHCGMFKOVCUZYIVSEJHLBZKSPFONU");
    msg.attr_type = 20U;
    msg.min.assign("FUEBYKQTAYLEXVECQZIHGDRHLHIYTQPYGOWGFZWDKKVBAIVIUXFJDDQMKPMDGNWYWLQWUFTLQNBJOALOXFHOTJEVXIKXUONSLSUJKHQRPBZASUDGBBTQXMPPYECNAZVCMLWLSPWPRUPLVIOYWNSSQZPMFBAABXDZPEFNTMGNBTUYBCXMSETRFIWHRYNCZZJKRCVQHGVMI");
    msg.max.assign("KFBTBGKPNGFAJVSEJUCMJJPSWWEEJKPLFTRDUOGYVZBURZXEQSGSVIADWSZODHZYGEGKAVEEFBCBFXVXM");

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
    msg.setTimeStamp(0.2899333785386453);
    msg.setSource(12233U);
    msg.setSourceEntity(144U);
    msg.setDestination(64083U);
    msg.setDestinationEntity(236U);
    msg.timeline.assign("UZQFWWQXSLFMZAFMPATNLFMHYQKTEEGBBQPJMPFCQIXPLNANLBBWGSJDRBFYHUYQZFQANVDPIHTVJROPCODNSLRPXVDCEVJWKZXJ");
    msg.predicate.assign("XRXKZCQLKYPDRKHQUNOBPXYFYHNEMASTTCJV");

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
    msg.setTimeStamp(0.8733589533976388);
    msg.setSource(8876U);
    msg.setSourceEntity(11U);
    msg.setDestination(10537U);
    msg.setDestinationEntity(242U);
    msg.timeline.assign("HQVGRDIUCZEDTWSBKPLJLBJHQUBLHWHTV");
    msg.predicate.assign("OYEVIXKTMIHCNVHBCPXWVEMGGSQXTHJMFESDOUWOAYREI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CXWTGNOPIFYRMWFWTUATKMFGBXLJQHEGJVKZYRDTRBLBDHZSWNTLABCZFBXGUUGQEOHLQVHJHDMTFURNFYVPROAWGWKTQQZLIAOXRGRCWHJIARTDNYKMZGMXAPSQOSNYPWMYKAOEMJVC");
    tmp_msg_0.attr_type = 38U;
    tmp_msg_0.min.assign("QZJRDEZEEFHBIADYOTFGXUUMTYPWUDWCORJDMAKHFYZMBWLBIAIQXOUISIBEWUSZYKOCNCHKDZPAYVGQDEMPRQMSZJVUPDGVHXVCLIVLOKHRSZHDBOUUPMHNERVGIZNFOJDAEVJWWONWSQLQPGNLSNIKWCLGMFSSGF");
    tmp_msg_0.max.assign("VMDLWQAKSSNXTEEFUPCGWQHSYBVVVOFYXPB");
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
    msg.setTimeStamp(0.06123331134998444);
    msg.setSource(1731U);
    msg.setSourceEntity(143U);
    msg.setDestination(21922U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("IDBYMXNUJNUVDNWVPHKNBAQKMBNGHGBEIUPERPRSIKCAWGTEUEHFKUOYJYELSFLZYUZDQRAXEYXCSGWPVMQCEWDVDKIMPWWHRQSGYYTIXJOYTVHVDQVNDIWZJLXKBMBLDLFEXRETGIVPLZUJRQSOAMHSMR");
    msg.predicate.assign("BHADEBSMJPAOPHKZTMXJAZUNXBTCRNXTICZBJVVIJGRLDFLWIUVLSBYUKANPCEKEWSJUY");

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
    msg.setTimeStamp(0.20883884574898703);
    msg.setSource(1142U);
    msg.setSourceEntity(151U);
    msg.setDestination(60635U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("DEDCTWHGVZRKOZSFWJKZAKQYJTNBYEBMIVUUPSQVCSWZRCHGBQRFQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CAUAWMSBHRDFUHEOTIJFGYYBLQVUQRPWQPQISFGTVCUXNTMNMVXRGXQXZFPPGGBUYAZHVNFWHAXDHRYHUDCZSVQRMDUNTZWRLIIZDMPELEGRJYSVBSKCKSNWNKFQPADOMRYOYPVEJ");
    tmp_msg_0.predicate.assign("YAMWKFLVLWQHJGDAAVGELOSNKMCOHJRMHBHBZKEBXLKHOFMKZYBLRWNUPRJBICBYDMIUDVCWXTVC");
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
    msg.setTimeStamp(0.47626626866494814);
    msg.setSource(4567U);
    msg.setSourceEntity(152U);
    msg.setDestination(53879U);
    msg.setDestinationEntity(96U);
    msg.reactor.assign("JLIISGCLWLYJUTEDGZEYAWLQUMQBUSWHGFJRVEFYYHIZPKLHKTBHAWLOBORWABMSBIFDXKJRAMCQUSNWNLBNNECUTIDPZPNTARMPGQOJOCZTPZQFHJDXTXIVXGYHPWNEKSYOTWFOKOMQJQSXRTKFVRROIXJMRMKHGFXSAAVDADNYZZUSDSCJMNSEYKPVUDRMY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BLVIONBZRBAOSQQJQDMFHOJEDPRHKHSBBASTCYQGPIZENTVLMGVYCOXPDSJSABTYKSYAJHQLZIPTQOLZPKZKMLLVSTLJKNFJIXANQJJUTUATGDTKSEHOPEWFWRMFNADGMUMLCVYBMREFZEYFSTDFXCIOCWXJRFVVTOAKYLUDDFZXLRXDWWGSROGHXRNWKQWXPVNMGBZVGHAIUUHBCCOMURQMNUIIEUXE");
    tmp_msg_0.predicate.assign("NRJSLZAQLBAUERSKEUHFQKOSVFQWQXNOOQWHLDSWURPABDVHBGIAXINUQICAMYVZKWZZMJHMRXCEJISHOCBCOYWGITYRIFTUPHFECVUARBDESBGQTZDIKOQGZPIJUCPEWUKEGIHKFZJGTNLNGODTPDMCFLXJTYHKVTPSUMLQFNDZKSMJXFYMWMNPOSORRSDKYITPCR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GOASHRPHPFNSZWCGATUEYUWOQMDISJQIGNXTPDLODUVCRLKDFJHRBYRJLSIKQXUBTUINXBMIEDSTEJNBMEFVBSKCRCXBXLEZXATDXBWYGCAPZGGEYIKYMPPOMGKQZYUY");
    tmp_tmp_msg_0_0.attr_type = 54U;
    tmp_tmp_msg_0_0.min.assign("UXSZKOHSPOJCYXJVYEGTLVECOHKMYAVGEHLVHDEBYGWWSIXXFSMOCJALWSFU");
    tmp_tmp_msg_0_0.max.assign("YKLGWDQVRKNESJPMJDVTYCHOMNVTYTWOGGHUIFZABHDAALALBIFCXUIEVJECHGOTBKRWURWLYQPFLXATLXSQADGFTTXJUAYSDWCSRPEBSBZHMNULGYLKSOXUWCCWLWRQNRPZAGMDEGPQKMEOXCPEHQYFZBBIBPVUDSVPZISXCHOVDRZXOBSJKEBJGJMZWUKOJIWPVMFKUFAHZO");
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
    msg.setTimeStamp(0.23430547122600942);
    msg.setSource(29984U);
    msg.setSourceEntity(95U);
    msg.setDestination(55055U);
    msg.setDestinationEntity(231U);
    msg.reactor.assign("UZOOBPKAXMPELTMXTMIQRBIWECSOBYAPBNPADERVTPQGKHWZUVNGVWOPIAOUEMFJAQCUJSLDOLWLPGSQMCZUZCHAKOJVVKIYVOWLZBSAVJFXGMZSFIANKKBYUEGYODTQHFWDSYXYQNXRAHFACBDRCIKPNXMPFVCWDQWBOFGRJRLKPIHJCUCREUSDZDNGDFEEYTNSMZXEGJRJBMLLZXXXUGNEHVSHJITSKNYWGRQZFCVTDTHUTQWFINKB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QUCRNIFTIPGYJFDEVBDSXASPZFCMNBNRJWOBKYMFGTFYIHEWDZPPETQZVPXXAPMDSDAGQUK");
    tmp_msg_0.predicate.assign("RJJWPIIRLNBMYTQUSQYLPAGYOTGOSEFYEOAWUBNYACCZBXONFKVHWESDZJTKMCMURNFKJIHXQVQGKDLVZQTFRELMBZHJ");
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
    msg.setTimeStamp(0.5102644318148617);
    msg.setSource(50887U);
    msg.setSourceEntity(189U);
    msg.setDestination(34675U);
    msg.setDestinationEntity(252U);
    msg.topic.assign("VUJYEFKDFTXYWAJHOBDMUVPKCZLSMSTQURVQDPAPXMLCFFEZNHBEIPSMCWHOHESAODWNRGXBSTYGCLNNPCZGKTIAMJEQVJVENUNXUERUTYOBRILABYYJCMHHVQXLLLQTAKUXCQNUSVPBKAMYIJCFTNQGKPQBZWNYCOMTHFFPCRZHAIDERKOPAELRWYBXYWJJKZGKIGOUWQRGNJZVRJZSUEABFDLIXTSIOGDSXWZZDDQFOGDWLOKT");
    msg.data.assign("OFAIQBXJWCCEUHPRLJWCEYOCMKUHXGRVPXQSAOHRQBHKFDGUKCHBIWOOUBKZAMBVMIOGZPWICLDDNZJFKZQTDQYLPXMLSNEQSTTFTYAAZMNQFDYHYGLQPVRASNOUWVKJIEL");

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
    msg.setTimeStamp(0.3063790821605983);
    msg.setSource(34461U);
    msg.setSourceEntity(79U);
    msg.setDestination(37820U);
    msg.setDestinationEntity(15U);
    msg.topic.assign("IHEAIAFXNGDPHXQHZLYGCZRRGHRLANAYCVNBKFWQZXKBUTHODPBCPOYJVZRDWXZQUNQWOUJDEFGIQPLTYROSVXUPVHSLALSGEAOXZCYCWSMRMKSDIVHHIBTKPKFTVEJJAHNTYIBKYXDOLWNTJFCZIPKRWEMFGVUNISRAQUEMFSXKGIQZZBDABJIFFGUOMLMJXYFEKWBWTRSVVMZLSOKXGTJPNNYLMBMTOJPPEAQQYBNEDCUURG");
    msg.data.assign("PLFKDREXLJIQUAJRSCHNGGMFDHBXHPBIQMNHUHHRABFXYCWPTSSCKKFXOZPQNSJMGDWTTOHKAAIXEPBFJENBZOFBEDKTULKTMKRCXMZGGTMMHMVOIGJJVDJECQIHLNSKUOOOJZY");

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
    msg.setTimeStamp(0.9505701590972344);
    msg.setSource(7756U);
    msg.setSourceEntity(142U);
    msg.setDestination(61165U);
    msg.setDestinationEntity(16U);
    msg.topic.assign("YUKVMOOAVCLN");
    msg.data.assign("PICTDQTAMIRSXBXCTUNTHQAWBZKEMLDKBRHSQAJOSFQUYLCSOVMYHVLRRTBLDGWOIFCLIKNRFBQMGPPWHAHJFCHEZJUYKVNXPPVGTMLJNLZVOWJGFZPZVONCNAXHMTMXXSBFFIECEYKKNAKGKUVIVUWHUQGZXECUDZEPNDPCGWNYMUEJKRFZRQRIEYDMLYYIOHYQWDBTABBXFKSOGAY");

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
    msg.setTimeStamp(0.05268120086380945);
    msg.setSource(30858U);
    msg.setSourceEntity(219U);
    msg.setDestination(24620U);
    msg.setDestinationEntity(167U);
    msg.frameid = 210U;
    const signed char tmp_msg_0[] = {96, 109, 67, -56, 12, 56, 23, 23, 71, -111, 39, -79, 6, 36, 19, 120, -49, -13, 57, -14, -95, 31, 87, 106, -86, 9, -66, 126, 82, -88, 108, 95, 21, -1, 56, -78, 115, 87, -14, 82, -82, 31, 33, 105, -69, 119, 85, -82, 102, -98, 97, -87, 90, 60, 109, -26, -20, -94, 51, -37, -109, 117, -64, 5, 110, -39, 23, -5, -17, -10, -60, 7, 117, 107, 70, 92, -126, 54, -95, 44, 49, -105, -91, -37, 48, 6, 36, 114, 101, 71, 9, 65, 16, -113, 22, 39, -13, -115, 16, -76, 39, 81, -17, -121, 16, -89, 27, -98, 108, 3, -45, -100, -91, -72, -41, -91, 69, 39, 82, -68, -75, -33, 122, 12, -126, 89, 4, -8, 12, -59, 64, 94, -96, 75, -25, -47, -116, 79, -113, -127, 95, -102, 64, -38, 38, 82, -76, 85, 3, -70, -4, -73, 106, -79, -85, 11, -120, -4, 102, -62, 67, 101, 45, -23, -28, 78, 43, 59, 98, -23, -122, 49, -57, 40, -15, 27, 120, -71, -113, -39, 99, 56, -70, -53, 115, -72, 111, -95, 95, 109, 53, 39, -99, -94, 57, 26, 30, -40, -1, -125, -107, -21, 56, -2, 55, -109, -52, 11, -66};
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
    msg.setTimeStamp(0.9218110521614173);
    msg.setSource(44951U);
    msg.setSourceEntity(141U);
    msg.setDestination(61912U);
    msg.setDestinationEntity(20U);
    msg.frameid = 7U;
    const signed char tmp_msg_0[] = {-5, 72, 122, -103, 63, -102, 15, -120, -46, -127, -15, -128, 125, 61, 80, 58, 111, 6, 50, 26, 67, -107, -28, -26, -17, 77, -50, 107, 90, 104, -34, 46, 99, -61, -11, 109, 35, 11, -44, -69, -78, -56, 54, 20, 43, -11, 126, -127, -25, 100, 105, -106, -7, 1, 4, -7, -118, -43, 94, 27, 40, 39, -109, 52, 69, 121, 74, -89, -56, 116, 85, -118, 52, -97, 122, 19, -79, 35, -127, -85, -115, 90, -46, 88, 53, 59, -23, -40, 12, -14, 92, -13, 44, -28, -64, -14, -2, 22, 78, 106, 22, 94, -66, 119, -102, -44, -20, 28, -46, -88, 94, 67, -125, -2, -100, -122, -123, -50, 85, 73, -87, 12, 68, -16, 8, 87, 0, -120, -36, -60, 47, 75, 125, -104, -76, -8, -119, 100, -89, 71, -64, -8, 40, -35, -11, -35, 23, 120, -8, 8, 96, -15, -68, 121, 108, 37, 94, 68, 1, 96, -29, -108, -82, -55, -101, -119, -53, -120, 97, -107, -123, -45, -61, -96, -77, 100, 114, 63, -123, -91, 91, -22, 123, -39, -23, 0, 8, -93, 33, 26, 12, -61, -98, 86, 34, 115, 76, 92, -10, -6, 103, -72, 120, 33, -10, -85, -5, -64, 64, 97, -53, -10, -71, -94, -23, -3, 40, 16, -93, -92, -90, -88, -118, 80, -101};
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
    msg.setTimeStamp(0.18289358388860266);
    msg.setSource(4493U);
    msg.setSourceEntity(245U);
    msg.setDestination(14036U);
    msg.setDestinationEntity(89U);
    msg.frameid = 120U;
    const signed char tmp_msg_0[] = {113, -101, 119, 60, 49, -7, -94, -18, 109, -74, -11, 12, 71, -62, -40, -88, 113, 66, -17, -9, -50, 60, -19, -91, 93, -106, -112, 104, 17, 38, -9, -60, 80, 57, -28, -114, -71, -15, 44, -21, 34, 67, -16, 66, -106, -2, -55, 7, 74, 80, -44, 81, 60, -29, -120, -118, -39, -106, 76, -11, -42, 122, 11, -87, 25, -59, -47, -120, 126, 1, -81, -95, 109, 102, -95, 44, -89, 1, 126, 38, 108, -114, -107, -32, -110, -23};
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
    msg.setTimeStamp(0.4187754509865578);
    msg.setSource(49518U);
    msg.setSourceEntity(47U);
    msg.setDestination(16320U);
    msg.setDestinationEntity(101U);
    msg.fps = 220U;
    msg.quality = 112U;
    msg.reps = 96U;
    msg.tsize = 42U;

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
    msg.setTimeStamp(0.10714272809352865);
    msg.setSource(61605U);
    msg.setSourceEntity(143U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(136U);
    msg.fps = 72U;
    msg.quality = 26U;
    msg.reps = 105U;
    msg.tsize = 131U;

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
    msg.setTimeStamp(0.015321837287183171);
    msg.setSource(22146U);
    msg.setSourceEntity(221U);
    msg.setDestination(7211U);
    msg.setDestinationEntity(228U);
    msg.fps = 35U;
    msg.quality = 228U;
    msg.reps = 203U;
    msg.tsize = 49U;

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5080864351886287);
    msg.setSource(11482U);
    msg.setSourceEntity(1U);
    msg.setDestination(22655U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.9784844204624636);
    msg.setSource(20845U);
    msg.setSourceEntity(27U);
    msg.setDestination(30269U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.5743100251149498);
    msg.setSource(7563U);
    msg.setSourceEntity(73U);
    msg.setDestination(33650U);
    msg.setDestinationEntity(233U);

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
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.3857079423792896);
    msg.setSource(63104U);
    msg.setSourceEntity(118U);
    msg.setDestination(29259U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.20901337249313445;
    msg.lon = 0.28414932641746526;
    msg.z = 0.28801172591897173;
    msg.z_units = 61U;
    msg.radius = 0.369346068387155;
    msg.duration = 43279U;
    msg.speed = 0.5540998193278427;
    msg.speed_units = 240U;
    msg.popup_period = 17179U;
    msg.popup_duration = 39214U;
    msg.flags = 52U;
    msg.custom.assign("KQMZXBIKFXUTKRWZOLFDBBTFGOYKLCYGBDQNSYHRTEDPBNSVMRCXCCJ");

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
    msg.setTimeStamp(0.24461244097611945);
    msg.setSource(32105U);
    msg.setSourceEntity(107U);
    msg.setDestination(40931U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.7272003776767233;
    msg.lon = 0.9148936420928968;
    msg.z = 0.7008919713128366;
    msg.z_units = 118U;
    msg.radius = 0.6990029497224614;
    msg.duration = 16327U;
    msg.speed = 0.40826830241291134;
    msg.speed_units = 178U;
    msg.popup_period = 25953U;
    msg.popup_duration = 42367U;
    msg.flags = 41U;
    msg.custom.assign("ZCQVSYWDHJXNTIUYOCBPAJWSHGTTTAFYHVOWPUEVUYIBGZNENDQBQZBCRSJTYQDEXZKMKTIFHIORMMCHALNFIQCZOLHVMCQLDLJVQHZMWGOEFXTKARBFPBYFCSNPEMXMSGLDMGKMILXNKRCDE");

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
    msg.setTimeStamp(0.10926872217241435);
    msg.setSource(51578U);
    msg.setSourceEntity(35U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.04364775473151483;
    msg.lon = 0.07231474399287174;
    msg.z = 0.011620915779830154;
    msg.z_units = 26U;
    msg.radius = 0.9504741766007501;
    msg.duration = 2650U;
    msg.speed = 0.3779798405380673;
    msg.speed_units = 240U;
    msg.popup_period = 25639U;
    msg.popup_duration = 16110U;
    msg.flags = 6U;
    msg.custom.assign("NRSKZLJNZTUJXVQQIGHORHDIWOTZLQSDZISTFMEPRELECYCCHXAFOMZAECZKJJSHQXNIUDMZLWNZGJIHZAIGSPVOYBRUUGOEKJTGONNYSIVDXGBTHUUDJEOYKMKVREAACOVNTWRRVUVTBRYPFGGAQLCDAWXAXRMJYPSSDUNTBYFXMFFKASDLMLVQMFQKQ");

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
    IMC::RemoteState msg;
    msg.setTimeStamp(0.9129865423722748);
    msg.setSource(44892U);
    msg.setSourceEntity(58U);
    msg.setDestination(9457U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.8831022107801754;
    msg.lon = 0.22203728674675638;
    msg.depth = 122U;
    msg.speed = 0.6051412387094798;
    msg.psi = 0.9858367708250274;

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
    msg.setTimeStamp(0.828612609139144);
    msg.setSource(39077U);
    msg.setSourceEntity(213U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.9310965703433706;
    msg.lon = 0.28024158337099747;
    msg.depth = 189U;
    msg.speed = 0.07617978523002633;
    msg.psi = 0.7102578213584336;

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
    msg.setTimeStamp(0.45584104840374373);
    msg.setSource(4711U);
    msg.setSourceEntity(213U);
    msg.setDestination(5956U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.25323088503119784;
    msg.lon = 0.1003087847836186;
    msg.depth = 35U;
    msg.speed = 0.978177937643621;
    msg.psi = 0.03830103549941355;

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
    msg.setTimeStamp(0.1989713972926046);
    msg.setSource(22305U);
    msg.setSourceEntity(210U);
    msg.setDestination(16366U);
    msg.setDestinationEntity(50U);
    msg.label.assign("PHEUQVPQFMYIPSBRSGQQSCNFNTXRESCBFFJRHMJVAYWTRWEGQGDOGONJ");
    msg.lat = 0.4278459406222884;
    msg.lon = 0.7385563861629527;
    msg.z = 0.010425543303723028;
    msg.z_units = 65U;
    msg.cog = 0.9199263567781928;
    msg.sog = 0.2752524268653733;

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
    msg.setTimeStamp(0.1923565255996772);
    msg.setSource(21512U);
    msg.setSourceEntity(211U);
    msg.setDestination(49048U);
    msg.setDestinationEntity(171U);
    msg.label.assign("QWIQYBDXXBTZSZYDAUY");
    msg.lat = 0.8298645555051587;
    msg.lon = 0.7866174409324777;
    msg.z = 0.044810236846490326;
    msg.z_units = 110U;
    msg.cog = 0.10190421764742574;
    msg.sog = 0.5402767413138203;

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
    msg.setTimeStamp(0.9319961570981667);
    msg.setSource(28091U);
    msg.setSourceEntity(25U);
    msg.setDestination(44383U);
    msg.setDestinationEntity(75U);
    msg.label.assign("ZAITTHDCRSZCMLDLVPEJZEBWJITVLPGEJUKUXRGFXFLDXCYNLYVVVSAKYQHIUVYPKTNJRFSTXXTOOJXSZOEAKGZIISABMZRDDAMFMWLZMDWBCYUUNEJOFQWNPSHGCBGMTUYVBMDRRHHGOLMTIPISCWGQZRYXHCLHCOECQEXPQHELYTLVEBRGBOQAFOGFAHQQUCFARQKPYEHVGXBKWPUWNZJAFISAW");
    msg.lat = 0.521168934349001;
    msg.lon = 0.5460198258996147;
    msg.z = 0.31191996312466685;
    msg.z_units = 211U;
    msg.cog = 0.0019668467239440934;
    msg.sog = 0.21066475765190362;

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
    msg.setTimeStamp(0.3042887900901471);
    msg.setSource(10748U);
    msg.setSourceEntity(39U);
    msg.setDestination(21512U);
    msg.setDestinationEntity(128U);
    msg.name.assign("VDEFTSGPZGFPSISDATBECVIKUSSILKFRQWTGWHHDEMZRMWMQVSCVEOQWRWTOJUMJSCWYDWIWXQNCEUIEJEEOJKKIEDPKRGZGUPAPOZXHBBTHRHMTVJYWSZFNPFEHMJLYXFAHZMUVQHRFYYXZDUONKKMSCACMHYMDY");
    msg.value.assign("DXGWYSFRNELDKQZIHURKHJZCAOBNDRWLTOIGTHXRWHGIKHXURCMEOGGIAPBUJWSPVLALXFXQTZHJWSMOVEZVUXSZSSDIFIDFYYWQAFLKISC");

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
    msg.setTimeStamp(0.8057380167575416);
    msg.setSource(18483U);
    msg.setSourceEntity(95U);
    msg.setDestination(58891U);
    msg.setDestinationEntity(162U);
    msg.name.assign("HDDPMCEMDBOQMBLBNFJZURPEPCSEJBSGNPXGFECCHRUGZBTDRFHKAQUYQDISWSHQAAFHQLIZMMMXKGJTIEJFQZKITTVPYXRHJEUDZWRWGGXPRDQLHVWHQYXXCOKDIXBCLEOZRLSCUZDQNCHURGMLNVVYNTEJOTPVNWAWEBXKAOLENVIFIOWVBNOYXYLYKFXAZUFUSCKOYSKAYHV");
    msg.value.assign("HUGOSHPEUQTQDOLNLQXMIQWKZEYQQAMASWFEDZOZVILOJJCLVQBUNANEPVVEHTJACYCRMHYGWCJRRMTGCAOCNDKSEGZLROBTYHYJFIXBPUQMAXSEBNERJKJVKIIFDGRPFWGCZNHTTGDWDPIIVBZRZLCSVXGMBGOYNYGURXCUSDMAXTIT");

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
    msg.setTimeStamp(0.8552005033695207);
    msg.setSource(44825U);
    msg.setSourceEntity(12U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(44U);
    msg.name.assign("PMSHYXENUAVPBSLQOSMEVPSQGGUAGQDXHRBUQPUFYFMEYPINCVFKXNJPZRFEXDVNGCWNGIKUGWRTUEHATHQUJHWFELPAVKHZKFAMMKZSMKROXCRLYASOXYFOTVWCAZBZBPDDNTONXEEEOQRLJDZVHBPWSDYCYRRXBJIVUQTSMSWUJPALKAXQFFBRJYHCNZIMJYZLDZOEWTSYGWKTFAHCCBMLJIIKCJDQKMTIIQNGVCONBIDBORTULVWILHDOX");
    msg.value.assign("KYAQYELQESWTCDDGOZXAQAWPOGCRMLMILGBXORHHZTIUEUFDKWAVYPUMJLIHFSKWYNGOAO");

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
    msg.setTimeStamp(0.4325970998935337);
    msg.setSource(58441U);
    msg.setSourceEntity(54U);
    msg.setDestination(46572U);
    msg.setDestinationEntity(231U);
    msg.name.assign("UJGWNRXOQEEAAKCKPXHEEIQFIJHBWNSVOBBHHDDZMISRZCVFAXJCLGHJYLFBJWBWEUVXHUNDYSMXDYZYLGGTNAUSARJFRKXZVASRPFPQSWHBLKVUWCPAYMIQT");

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
    msg.setTimeStamp(0.3027856578969186);
    msg.setSource(30133U);
    msg.setSourceEntity(85U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(157U);
    msg.name.assign("HEVSYJXYERXKZITNUKCXHJLHTYUIWBZSJMGTZXNBKARJTMDMVHKEPFAORNWRUPBUSHBYKRQNPMAGCXVAWBZJTQNMGCQUAVHLWVBGSJHMVPUMPSDDZHQFNAHVQIBRNLLWOOOOGKFXRFCTYCGHUTTCYLVNOSYBDRJCFIZDGTJPSQFKCEEOESOWYWPWWQZASLUCLVIORPIEDNLAZFKVIEEETDUILBJKMXNXAQIQPUOPWDCRLSAFYDYXKMGDQGFBGZ");

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
    msg.setTimeStamp(0.8592075937112841);
    msg.setSource(45046U);
    msg.setSourceEntity(170U);
    msg.setDestination(48949U);
    msg.setDestinationEntity(116U);
    msg.name.assign("FHITYBCCSSHURLILPCQDTOQHLSXCWCTXOOFIAKJWEWLVXGIGXOKJKZZDCQYZRUHU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BPWLEKDUDQIKLNSVZCAYRQJDWXFGEROVHGUNYMKQNWILIEWOXWTNSUBNSWTRJAUSCOAPQKQFRZJPQZFDCYTUMVOTUYRUJQTUPHJTEZXEXIGOLEDAYCHKVRSFPBZWBBPYPKIGADKMGMQNXHCFXKHPRGYTVBPOLDWPSREKHMYSOZKCVAXNVIAVGUMLGTFHRHOWMJAEMZSIYMXBDSJEZABIFNT");
    tmp_msg_0.value.assign("PALPTCTZNOESYVKECBKHDDGBEXSAHVSMINWOXRENOIGQUIVCDZAUGKEDHAUVVYYUPUXHJSQPXFGYXBZUGKWLZQDTDZAREAQIPWVXBRRDSHNKW");
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
    msg.setTimeStamp(0.9401785542445718);
    msg.setSource(50871U);
    msg.setSourceEntity(194U);
    msg.setDestination(53092U);
    msg.setDestinationEntity(132U);
    msg.name.assign("TCPNNOEBUJOPQUBFQEQUPVCTOVTQACGKLDZWLFIHZJAHBFWMCKUJLMEQGIXYCBKBBGMDSVSECPOXEZSYEVORKNNJGKSTZFSACTTMSIFXYLJKQNYVHQVDWLAQTVOYHELPIHQAWAADYKRMERYNUPDWXHMPRBOGMLIWBCWGPGYNGYKHWIDXXSTKSXUXOEXCFTNJDAXROOQVZZPDRANFMIJSHYZLJBHGNFUR");
    msg.visibility.assign("SQZYLCLUNJRCHAMFWYQNMCTEKJWOZP");
    msg.scope.assign("SOKEZUUQVICCOCKFHZTXVHMQKJCVODCPFUGOYLDUOKGBQIYSZVXZJNAHHWTPREIHRWALSOMPJZBEPQJTTDYBIRJXQBWIDGBTMQBSVALBNBNOKYAYOMKRODMHVIQYLDPVQMHIRDXNYSFFAFGAHFWNYSNVXOLJIJUJVKLGSNEHERPZRBWFBJEYTRZFNQWCMYMWUFUCMJCTGCNTUZGTMHARGEWPXLUVQADTXIPPWIDPEGZGKKCZFXAL");

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
    msg.setTimeStamp(0.2897724825121428);
    msg.setSource(7214U);
    msg.setSourceEntity(57U);
    msg.setDestination(28680U);
    msg.setDestinationEntity(201U);
    msg.name.assign("IUFJZORWMPGRRBYBJUDRWJAVKMOWEDSNPGGICVQLUGPLPJSAKHTADYYYSXAGTCUHSEWJNWQRQFKVHCTTHSFXGKIMTXQAYIVHZSOVDMLTVEANKYUKNRDJEXMZRTBOWUFZGGPZLFKKNTROGCEBOBNAMSBJBTQCLLJHYPCIIIRBCLSH");
    msg.visibility.assign("VUKDLLNICMXGVYQJZYBDJXZJNGPKRUHGZGSBREPJRVDXFFYQBDOAPYOTSPRFDOKCIQDYGIXTZMJFOFDMIRHGVAWUKHMBXKLCAWQRNVVTJUNDMWCAQKFJHTSLKLYHXSSBEKSAWXXCBYRETMTVDIEITGIYOFYPHT");
    msg.scope.assign("ZFGKPFJMYKDDCWJZDTFBFBRNHOFBMIBWHERREECHEIQPDKFDSIUULYBOAAGVHNMOZXPWTXNUJI");

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
    msg.setTimeStamp(0.89109445234902);
    msg.setSource(62487U);
    msg.setSourceEntity(239U);
    msg.setDestination(45381U);
    msg.setDestinationEntity(141U);
    msg.name.assign("XOTZJOZQEBFACNDUHJUTBRIYGDFHMIRBLXJGZYU");
    msg.visibility.assign("BJODJAVUKLLMMESVLBQVATQRWBFKPUJVGDSNNNVXGUMZJXYWFQZMZTSHHWYXQTUKBWWLOXZEDMXZZSCYTRORWPEPWHHTFIOYWRIELOIKOX");
    msg.scope.assign("UGHBXDURDBUDBBNQLZHI");

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
    msg.setTimeStamp(0.950779426502439);
    msg.setSource(44878U);
    msg.setSourceEntity(54U);
    msg.setDestination(47374U);
    msg.setDestinationEntity(68U);
    msg.name.assign("GQVPZQLWAYNPZKEJMDOIAHPWVNIYGWQMPUUQIRSMGDMNSTDEVSRNLUGELKBLELVYSFHBPXCQURKHVODDUQAVTBJSSRONECTUUADZHHFIOMPEWAJBFIBXBKYPLPQXTECWWXGNMMVAXTXZCMNLKBKBFXTJZW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UFLBPCWEPOTUKYELIOVCHXXAQGWCKTMYJILNDSASTXFHFAFAOTUYZEIBVPSNDPADZSHMFRNNOTESJEHFPADJIXMHRNVCZJFSOWVUJWPBIMGGKVQTKWCRIRWADOCPVUMSBZGQCRHEYVBBOZNLWYZQJSNQVLLENMEEAKAQFXLFRNIULKDYSXKRHKYZIYXKUJQQIJBOLQAZDOPITWRJCZVGDGHHGTXTKTZGFBMUSGQNBDWCUMBXE");
    tmp_msg_0.value.assign("JKHTTIAYYFRNAYELSGVVNZODNZDPTYCGEFQVSRTUXASCRLKFWZXJWPMNCTCKGUCIBBPFHLAITFMTVMWSGPBHRPPDCBEKBBQFWQOWRJYKXGAZNLIDUIBCFVJNXSHVPIWICEOPQQDNOCTFLPOXGOBVZZTFUNSDZZCOWQASEVWDRYHEXDSQMIJRJNAYMHWSUHLTKXNVUJHLMUHJJZMMFMUPIAGYGGKKDUEXRXXALYYL");
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
    msg.setTimeStamp(0.7116634236810061);
    msg.setSource(49818U);
    msg.setSourceEntity(94U);
    msg.setDestination(25297U);
    msg.setDestinationEntity(230U);
    msg.name.assign("JCIJOICWOSHVBEYPSGDXMASRGENEJPRVQTGHWTHXBYWHEJUFWDGSFTAFIGJDTQF");

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
    msg.setTimeStamp(0.7544771723191063);
    msg.setSource(31294U);
    msg.setSourceEntity(3U);
    msg.setDestination(192U);
    msg.setDestinationEntity(150U);
    msg.name.assign("QUIUINWHPSQBCJTYMFFLZQBWVAEHAGBWODTYKYUBMIOFLYGTVURYMPGPTCOWCLFLRNEORJJKEYQZFRAZDQFJMAHLHJZIQPHFNUZZGRGCGEWTWCESXXSI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RSJWEILEJGHKNTQMQQAIVILRGPDGYAXOBBVQCYNNZOZZGRJHBFYYVWJTDDXCRHXTHVXFMKMYSKLLKUHDWFMYQRTGWDCPWEEIRFGXZUVXTKPGSNBETOWGAPDKHMKOWNVPFJCIYNAUOMROZVLRHZJUQSFXQAU");
    tmp_msg_0.value.assign("FXADHPPHJCUWBPECJNHBSBRBKMRNSOTPNSZJLFWROCCBQVBZBAKZGCILNHPGWSUEUEYQMTACEWCIFQKXVSTDPMGHDVGTFYGIDUJTHNKUVDOWNVOFDQLYHOBQJHJIIXYFYVVAOJRKFAPNQIUXMYCWKQXS");
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
    msg.setTimeStamp(0.9533341112343576);
    msg.setSource(27611U);
    msg.setSourceEntity(58U);
    msg.setDestination(22224U);
    msg.setDestinationEntity(251U);
    msg.name.assign("ZQFFAOLRZRIRNHNAUUSMISPPYJQUBRZSGGLGGCIRXWKLCXNEXLATHJYEQBZXMJOGSWHSFDMJYTFAPVYXYYXOXCDTMJQDVNSQTBWUWSVWEWJLBTNRIWNNISSDPRMDLQDCEYGJWUVBTHKYVHVTVOZELZUNDPIAYTRPBNIYJKQGOIHREBGFPKBJXBKV");

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
    msg.setTimeStamp(0.8915759418803056);
    msg.setSource(54040U);
    msg.setSourceEntity(239U);
    msg.setDestination(17266U);
    msg.setDestinationEntity(12U);
    msg.name.assign("MDKYPTTIVSMQDPHSEXTWRAZRNKMEQNUXLGMHOWUBBUMRSWQENYVTUKOFRCRH");

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
    msg.setTimeStamp(0.3582914554915808);
    msg.setSource(56323U);
    msg.setSourceEntity(138U);
    msg.setDestination(45666U);
    msg.setDestinationEntity(181U);
    msg.name.assign("TKOPDVSYCYBIUXCZOMVQNAHXOGVJAVBOGLMZMHXHXOVCMMRWKXBCUBSSNZOFMSWRODRUYPVVEKLQKQDVPRGFCUNMNFBUKQGSQUADSJTUYIHHCIAZGQSMJNARLYCRHPTTPNVFQMLKYLIJNGZUOZGEAJPEFETOPICLPLDXDIKJXGDRATDPZFQEDPJFIZDJGWCKCBH");

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
    msg.setTimeStamp(0.5101591280621456);
    msg.setSource(1810U);
    msg.setSourceEntity(196U);
    msg.setDestination(15632U);
    msg.setDestinationEntity(144U);
    msg.timeout = 4237314008U;

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
    msg.setTimeStamp(0.9768837822688311);
    msg.setSource(890U);
    msg.setSourceEntity(25U);
    msg.setDestination(9367U);
    msg.setDestinationEntity(52U);
    msg.timeout = 2034686681U;

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
    msg.setTimeStamp(0.03317271375645314);
    msg.setSource(49212U);
    msg.setSourceEntity(151U);
    msg.setDestination(46887U);
    msg.setDestinationEntity(197U);
    msg.timeout = 684935270U;

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
    msg.setTimeStamp(0.5398924747442854);
    msg.setSource(4938U);
    msg.setSourceEntity(80U);
    msg.setDestination(30867U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1646921857U;

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
    msg.setTimeStamp(0.9476813409233289);
    msg.setSource(34239U);
    msg.setSourceEntity(132U);
    msg.setDestination(42403U);
    msg.setDestinationEntity(62U);
    msg.sessid = 1568654961U;

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
    msg.setTimeStamp(0.29733078282736425);
    msg.setSource(26365U);
    msg.setSourceEntity(25U);
    msg.setDestination(39955U);
    msg.setDestinationEntity(143U);
    msg.sessid = 978226906U;

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
    msg.setTimeStamp(0.9508347756265081);
    msg.setSource(6843U);
    msg.setSourceEntity(50U);
    msg.setDestination(40947U);
    msg.setDestinationEntity(218U);
    msg.sessid = 2208207840U;
    msg.messages.assign("YIDVMTPDYASHZBTZJRLVVMMYNCQUSIQWMWIYGPSOHOKUEJLVGJODTLXJCSFFXSRHDQEKPZURPMJXZNGEXQFEJKKBHKHALOSCLTKR");

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
    msg.setTimeStamp(0.9059064593673304);
    msg.setSource(37458U);
    msg.setSourceEntity(203U);
    msg.setDestination(8030U);
    msg.setDestinationEntity(118U);
    msg.sessid = 3364204809U;
    msg.messages.assign("PIJAUVLDCEYYRWLRUVRJCYAAUGULCTPSXXZKSMRABSXHMZMQYRNWTFKONQVWAOIZMIUHZFS");

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
    msg.setTimeStamp(0.10360037359554297);
    msg.setSource(40688U);
    msg.setSourceEntity(241U);
    msg.setDestination(43050U);
    msg.setDestinationEntity(37U);
    msg.sessid = 3101174372U;
    msg.messages.assign("QEOPDFJUKZHIOMHWHVXZXKBIMOXNMVDVDAQYJMOTGCCAUKCTBMRAKLVULAJYVEOCXFGTLXRFWFTEHJRAPYOQEURQJQEZBKCFBNZKTSPPOZIIJDWGPGCADUFUNBSFCGRGVLBDJPEIABUDEXNNJY");

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
    msg.setTimeStamp(0.5986433123262588);
    msg.setSource(26766U);
    msg.setSourceEntity(54U);
    msg.setDestination(11841U);
    msg.setDestinationEntity(144U);
    msg.sessid = 3405956499U;

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
    msg.setTimeStamp(0.05274693754282389);
    msg.setSource(2231U);
    msg.setSourceEntity(79U);
    msg.setDestination(40099U);
    msg.setDestinationEntity(41U);
    msg.sessid = 4191456376U;

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
    msg.setTimeStamp(0.6416138099412592);
    msg.setSource(21387U);
    msg.setSourceEntity(157U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(125U);
    msg.sessid = 2959157191U;

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
    msg.setTimeStamp(0.9979074398770664);
    msg.setSource(14292U);
    msg.setSourceEntity(37U);
    msg.setDestination(60428U);
    msg.setDestinationEntity(61U);
    msg.sessid = 1391530570U;
    msg.status = 34U;

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
    msg.setTimeStamp(0.7017796407775733);
    msg.setSource(8059U);
    msg.setSourceEntity(159U);
    msg.setDestination(16877U);
    msg.setDestinationEntity(161U);
    msg.sessid = 475561666U;
    msg.status = 247U;

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
    msg.setTimeStamp(0.24455843106279918);
    msg.setSource(34273U);
    msg.setSourceEntity(204U);
    msg.setDestination(6052U);
    msg.setDestinationEntity(82U);
    msg.sessid = 2390752314U;
    msg.status = 6U;

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
    msg.setTimeStamp(0.8133079855277088);
    msg.setSource(46016U);
    msg.setSourceEntity(43U);
    msg.setDestination(44830U);
    msg.setDestinationEntity(179U);
    msg.name.assign("XEYYYYOGFSRIUNQIEDSCUKBGLVEDNZXTAUFHWPMZTFJEUJJLWNPNPHMMZPCFPCIGZMKKLIQZMLANJSQWMBWEWSPQHAOTJONQYVSVOGWJCNTIANPEBBQSHSORRVAMBUDDIQAVFYAGYYHMWDLRNCLORCOQYXHGPQVHHAKBUGIRBBRMZTFEXCWTXDVKLZATXTGTUHKLCPJSMSXSKUFZBOQCKBJZDVFXEJRZGEJKYPCVOEFWTHRNUFVLXAILIWUK");

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
    msg.setTimeStamp(0.5483711921704272);
    msg.setSource(31243U);
    msg.setSourceEntity(92U);
    msg.setDestination(56183U);
    msg.setDestinationEntity(18U);
    msg.name.assign("ZUKNEBFHLLFXCOBHJLEJDAJRTHKQGXMHTSEA");

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
    msg.setTimeStamp(0.8197488821070528);
    msg.setSource(57719U);
    msg.setSourceEntity(190U);
    msg.setDestination(52727U);
    msg.setDestinationEntity(23U);
    msg.name.assign("IYTKJUAUQRPCVSEULWSMGBHKMOCRWALYOGQMARBZUCOXKQFKFTEASYQLRMFEXUKTIUDHSZTNLNGWVDTAOIILNJEPYCCRORHZBFQDEGXIFGFFVOUPXACXDPGDBG");

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
    msg.setTimeStamp(0.07578375622886424);
    msg.setSource(14215U);
    msg.setSourceEntity(117U);
    msg.setDestination(55664U);
    msg.setDestinationEntity(91U);
    msg.name.assign("SHMVRYCNRQBKBHWTNJWVLCIUXNZDPOHZYNFRNOUQQATWCICAGODQJQSGPJZBIWYFAQTAFTEZPVEHPVKWDZERXUTNAHVVIDPWMPBSNJKSLYOFOTJZAMDMBJFLDHXCGNQRBKSDGYLKWUSXSXLWUTMILTKADFIRVEO");

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
    msg.setTimeStamp(0.7291707750150557);
    msg.setSource(51809U);
    msg.setSourceEntity(125U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(248U);
    msg.name.assign("BYINYCLAAXUIDMAIREEPOEMQRUJENXOTRGBKVJTMEHGJSXTTFLIEMUTHQKLCCCFFTWZRJFYZNPNQNNSFKDLODOAZHQLCWVEOIHCZSAWCZEVXJDZYBFBBMBFZIKAGABPORHVASBHCDGBEUQZXLIJLHUTIDRFTDQWRDRVOQKPXDXUAMNGJ");

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
    msg.setTimeStamp(0.3723516237275837);
    msg.setSource(62559U);
    msg.setSourceEntity(107U);
    msg.setDestination(240U);
    msg.setDestinationEntity(3U);
    msg.name.assign("QNPMVUZGTRJBNJWSXOOCSQCHXTWCGUESOZZBPVDXTOOEPLBLLDLANFWYVMZHCPQTPZKIUNWAHNRISUMTJLYTRZUWLFCZJLXOMKBWILKDAFKBVYAVQBDGXMPCFIXJJGTEGAOHMTRMZRNMEHAKNNNSSETWYFEXEJRKAHVROKIPCGULFQVMEBHEAYYICDPHZYPQQKUBRBGVPTXCEFVUCAWIUBFXXYJIIVAMFQYDOS");

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
    msg.setTimeStamp(0.5247691151912273);
    msg.setSource(24740U);
    msg.setSourceEntity(253U);
    msg.setDestination(32245U);
    msg.setDestinationEntity(204U);
    msg.type = 44U;
    msg.error.assign("BCZCNDCXWLERCRKOIBJBTZXSLKIIWFHIPSLMBUYQATISKDAOIECEABOKFVMQMANHMXOWJUYJXUFGKFRSUYLSIUEAVFYAJLQZSEWBUHJPSWHJJDVHPEFPGDWVDAGMNMOORNYPSDHGYTFQCGKRNWGPTNOPYOEFJNZHNV");

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
    msg.setTimeStamp(0.09983412890261734);
    msg.setSource(56387U);
    msg.setSourceEntity(98U);
    msg.setDestination(64669U);
    msg.setDestinationEntity(47U);
    msg.type = 234U;
    msg.error.assign("UDEUQCPCDBBVKQTBUMJFCVSTGVQFVMKSZQMIGXMVNBFSJOARRCPSYXNHEDQXYNHVWLJATZGUYDTRMRZZSEYARVYMZKQHYLDEYFUYNEXRCCHBXALWMOATZQAHIJRXQCIGUIFHBTFLNKOXOZEGHJZZLWPVTYIMPWAHPQSPCJBLPTFLEHDTIJQVBKKUXNTCKEZSFIOULOIIGRNOCASSBWFPMEJVNKDGKWUPEMJAWYWXRXRNLOOKGNDSDAWJIUWF");

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
    msg.setTimeStamp(0.21425715871545947);
    msg.setSource(9881U);
    msg.setSourceEntity(155U);
    msg.setDestination(12844U);
    msg.setDestinationEntity(103U);
    msg.type = 146U;
    msg.error.assign("RPKOWJYQUEVI");

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
    msg.setTimeStamp(0.9622855200005012);
    msg.setSource(61701U);
    msg.setSourceEntity(31U);
    msg.setDestination(41331U);
    msg.setDestinationEntity(233U);
    msg.seq = 30036U;
    msg.sys_dst.assign("TTNRSXNKSCGCLRWOXIOEYEZSLVAJSYQRGYTTTQQPSWLEUTYHQKBBNXVHVJZZHOVNMXGNEUBLHVZHNZOAKSQMPCVPWM");
    msg.flags = 183U;
    const signed char tmp_msg_0[] = {64, -20, 18, -3, 52, -71, 85, 17, -95, 38, 112, 15, 37, -44, -124, -121, -113, 12, 80, -86, 37, 47, -50, 62, 29, 15, 124, 28, -125, 13, 105, 101, -93, 87, 93, -106, -62, 53, 20, 79, -72, -70, 113, -73, -7, 85, 26, -47, 124, -124, 49, -41, -3, 123, -104, 66, 100, 78, 55, -87, 90, 43, -127, -26, 33, 95, 49, -99, 47, 69, 30, 52, 51, -94, 40, 119, -84, 42, 14, 110, -83, -22, 113, 87, -34, 52, 50, 39, -116, 114, -100, -62, 96, 10, -19, -92, 108, 116, 90, -95, 45, -95, -52, -58, 63, -37, 56, 79, -99, 66, -9, 114, 58, -12, -102, -65, -76, -27, -50, -45, -121, -13, -17, 27, -78, 85, 88, -36, 45, 122, -95, -11, 122, 126, 2, -21, -115, 68, 82, 14, 118, -36, -79, -43, 90, 119, -52, 60, -92, 115, -69, 106, 100, -66, 3, -98, -26, -47, -85, 27, -65, -99, -48, -127, -62, -114, -97, -49, -42, -128, -77, -29, -74, -114, -2, 31, -37, -70, 57, -67, -10, -108, 17, -111, 7, 82, -108, 93, 39, 77, 122, -94, -20, -50, -21, -67, -44, -69, -114, 32, 17, -70, -97, -124, -70, 55, -128, 107, 2, -73, -126, 126, -100, -101, -96, 83, 90, -106, 39, -96, -7, -10, -27, 121, 28, -22, 29, 58, -21, -3, 30, -90};
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
    msg.setTimeStamp(0.45791950704400364);
    msg.setSource(54533U);
    msg.setSourceEntity(58U);
    msg.setDestination(45709U);
    msg.setDestinationEntity(54U);
    msg.seq = 58137U;
    msg.sys_dst.assign("WLEGKMFMPXIRUPSBYSGLXQDJHHMJBRHIEJDXDFCBWURLFIRXOGLHCQEUOSYSKQGPAPAVNAJAWIXSIQHDJQJCPCTOYNWNUZQOGCGHLLANNFTBSHOFTMCEOPRHWDYBBJJKLINITTJM");
    msg.flags = 1U;
    const signed char tmp_msg_0[] = {-18, -127, 51, -124, -52, -44, -21, 49, -117, 26, 10, 62, 115, 4, -50, -49, -62, 110, -88, -93, 43, -11, -73, -4, 75, -118, 26, 110, -23, 45, -125, 80, -102, 104, 106, -27, 41, -68, -6, -121, 78, -103, -23, -62, 30, 29, 58, -7, 102, 86, 92, 32, 64, -66, -20, -59, 120, 33, -16, -25, -27, -122, -24, 122, -30, -123, -7, -104, 10, 125, -76, -93, 97, 102, -18, 6, 108, 6, 10, 30, 112, -79, 51, 64, -13, -70, 14, -70, 15, -87, 106, 15, -36, 47, 88, -111, 62, 105, 123, -54, 32, 75, -102, 0, -86, -3, 39, 29, -44, 54, 98, 8, 118, -81, -90, -115, -96, -126, -28, 8, 74, 66, 49, -36, 98, 71, 89, -47, 102, 8, -27, -126, -80, -12, -70, 65, 26, 97, 12, -22, -13, 9, -4, -86, -22, 7, 59, -64, 6, 119, 26, 114, 119, 103, 113, 74, -1, 14, 49, 93, 14, 85, 78, -76, -113, 11, 26, -82, 17, -123, 84, 65, -125, -41, -84, -21, 101, -15, 98};
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
    msg.setTimeStamp(0.28887619940361986);
    msg.setSource(11720U);
    msg.setSourceEntity(2U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(55U);
    msg.seq = 19034U;
    msg.sys_dst.assign("AYAGVPYMCWPFMUSFLDZCDNYSTEOQKJVJZSEZWPXPSFOGACVIJLKRUHPAGIQOBXPEDXRDIUBHCTBTSEZAHLRACXVLKKOREOJBETNQUSYMXWZR");
    msg.flags = 19U;
    const signed char tmp_msg_0[] = {44, -56, -15, 35, 72, 116, -4, -102, 3, 3, 60, -25, -125, 55, 64, -75, 91, 3, -117, -73, 57, 65, 125, 18, -121, -49, 116, -2, 115, 53, 29, 36, -31, -117, -4, -58, -58, -73, 13, 97, -113, 68, -71, -37, -52, -43, -39, -109, 63, 1, -25, 0, -19, -27, -108, -64, -68, 94, 10, -34, 93, 54, 99, -52, 55, -2, -76, -38, -78, 91, 76, 109, 104, -65, -3, 122, 115, 20, 109, -36, 70, -18, -118, 103, -64, -115, -83, 39, 97, -12, -102, 17, -49, 19, 13, -26, 6, 26, -25, 52, -55, -69, 80, -54, -8, -7, 82, 80, -20, -45, -61, -94, -39, 115, 1, -122, 41, 101, 16, 84, 82, -6, -85, -51, -37, -117, 46, -122, -128, -38, 72, -49, 112, -108, 38, 8, 22, -47, 51, 104, -78, -78, 124, 119, 108};
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
    msg.setTimeStamp(0.10715075212601877);
    msg.setSource(10085U);
    msg.setSourceEntity(89U);
    msg.setDestination(23341U);
    msg.setDestinationEntity(137U);
    msg.sys_src.assign("TDRVEBHSEVVKNLFEUBAWXFOAGKYPHKRHMIQYOMEJSSGYNDBKIKVLQBYQHOAJEVJYHVBJCKBQPOVYEPSIGFJFOBSNMPMDJEMETMZUBWTQPUNHFPKTARMIDSFZXIGRLVUOXCAIOCKZALXQKAWZUQCUCIZWMONZF");
    msg.sys_dst.assign("OGESGCGVIPFCTZLVKYMIWERDPSNAUBZHCLZCDFEXOKHBLFOGPGDXLSOBMTXLKBAKKUYBAMEKCIAIONVUEMPSZAIHFDQYPXTQJVFHNTRJRZZSIVXBBUNSJCUJQXHNLNTPSMPOFDDOEHKQWCRXUQJZGLTIVFMECFHXMYAPEUTLXNXRQAZWZEIVJLUSAMVB");
    msg.flags = 245U;
    const signed char tmp_msg_0[] = {109, 28, -89, 77, -116, 108, -91, -55, -49, 77, 5, 29, 38, 53, -105, -90, 111, 75, 66, 84, -79, -73, 79, -48, -2, -98, 0, 99, 6, 66, 32, 115, -104, 99, 93, 119, 63, 75, -56, -115, 106, -52, -83, -21, -100, -61, -4, 24, 13, 43, 71, 101, 7, -92, -76, -99, 91, -61, 9, 68, -49, -75, 122, -83, 87, 101, -61, -91, -89, -60, 6, -68, 79, -81, -60, -128, 65, -8, -37, -45, -35, 114, 106, -71, -128, 61, 4, 115, -85, -112, 40, -37, -123, 66, 62, 67, 32, -95, -104, -69, 59, 121, 111, 46, -105, 97, 84, 58, -48, -21, -50, -104, 52, -16, -113, -124, -103, -10, -74, -125, 41, -15, 47, -126, 103, 109, 121, -49, 67, -35, -37, -83, -64, -82, 95, -108, 36, -58, -60, -128, 81, -57, 65, -104, 113, 61, -71, -12, 32, -22, 32, 27, 29, 100, 63, 57, -9, -15, -72, 85, -60, 46, 54, -83, -38, 55, -18, 68, 0, 35, -14, -39, 111, 13, -77, -39, 96, -29, 32, 48, 91, -11, 73, 106};
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
    msg.setTimeStamp(0.9068351642032714);
    msg.setSource(13709U);
    msg.setSourceEntity(235U);
    msg.setDestination(29971U);
    msg.setDestinationEntity(0U);
    msg.sys_src.assign("AHVBMFCTQYFJSSGUOBJWTJFGXTCWIBBPFZTVPGJCZDAVHZSEEVBPZRQWSXQWKVUVFIBTKVMUTDPRJQRZYOZAAQTHIPMAREDBESYOQPOHLHWNNWBWLFYXJGNELQKITPUMDINXISKSVLMCRVGMNIZBIHKUPONQRKXXOPITDNRCLYQMYVBSEFMDKXMGWGJWMCECHUXJZCREAUOCCUWHD");
    msg.sys_dst.assign("ILQKOMQDCUQJDIXRDJQRVTFYWVQAXHSNUIMDFEGATYMRHCQZTPNRYZMNTRQPWGSBDMHJWZGFGFBOZLELXIXEIMACLWAUP");
    msg.flags = 226U;
    const signed char tmp_msg_0[] = {118, 26, -114, -9, -10, -34, -80, -24, -104, 96, 46, 61, -88, -61, -70, 64, -76, 26, 8, -72, -80, 90, -51, 30, -87, -39, 103, -102, -83, 28, 75, -2, 66, -16, 12, 55, -42, -79, -84, -90, 28, 70, 107, 33, 54, 94, 42, 123, 74, 100, -109, 119, 13, -14, -39, -8, -88, 60, 112, 27, 115, 95, -74, 116, -66, 105, -78, -15, -23, -103, -2, 119, -111, 97, 52, -7, -64, 70, -97, -48, 124, 96, -87, 37, -29, -45, -78, 125, 87, 103, 36, -109, 113, -3, 114, 56, -44, -72, 34, -49, -61, -18, -119, 51, -96, 56, 43, -36, -38, -114, 109, 72, -54, 104, 52, -119, 22, -109, -128, -104, 89, 51, -100, -62, -60, -24, -47, 88, 16, 37, -117, 121, 108, -30, 51, -122, 43, -47, -16, 73, -109, 41, 6, 11, 19, -115, -80, -77, 46, -30, -65, -23, 52, -43, 125, -19, -27, -101, -37, 94, -104, 39, -77, 36, 23, -15, 8, 43, 36, -58, -28, 108, -113, 122, 38, -56, 41, 23, -21, -46, 18, 15, -118, -33, -66, 110, 116, -97, -32, -75, -65, 9, 49, 99, 109, 7, 80, 51, -23, 113, -17, -96, 64, -31, -26, -29, 115, -58, -4, -17, 7, -41, -35, -26, 126, 57, 49, -123, 26, 28, 10, 99, -77, -34};
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
    msg.setTimeStamp(0.9464243585660593);
    msg.setSource(14061U);
    msg.setSourceEntity(194U);
    msg.setDestination(52103U);
    msg.setDestinationEntity(250U);
    msg.sys_src.assign("JGSCTRSVIHOJLAWVELDRFGXEXBTPPIOJIGCIDSNTMEBVYQGYBQWFRCEXXJXNMETFLCQHUXWEMDMNQDWWKLIDPCXOTYZPWPNOVMJDHYPCMREHKVHBVIEWQUUCRYNSYXBDQNLZPDFNRGCSOBTZZNTVCHKKZRTGVZGPAQLAIFTALEJG");
    msg.sys_dst.assign("KABUQGFRKIFIQVRMOFZKLBHYSSHXYXDHKMXUZNYTYXYAWIGWAOEAHMSPLNOABCAJLANFXJENAFVLTPILCETQDQVRIPNJVGPPEOHHSOUBISRGKTTVUHYTWAUOKPFLHMBTYWILCNJMLOHNYCYQNMUEDZWUDEXKEW");
    msg.flags = 162U;
    const signed char tmp_msg_0[] = {105, 103, 25, -51, 23, 72, -13, -25, -18, 51, -1, 119, -49, -46, -68, -87, 63, 107, -112, -43, 116, 23, 24, 103, 33, -30, 12, 95, -98, -88, 19, 71, -67, 50, -47, 34, -78, -23, 49, 123, -101, -93, 2, 13, -91, 50, 28, 65, -120, 67, -99, -48, 24, -13, -56, -128, -26, -47, 88, -41, -17, 19, -114, 78, 120, -3, -9, 70, -92, -54, 75, 25, 64, 90, 92, -118, -12, -127, -105, 30, -125, 62, -80, 61, -18, 102, 72, 40, -19, -127, -128, 79, -86, 79, -31, -36, 62, 82, 75, -88, -103, 86, 19, 91, 13, -94, -121, -79, -78, 72, 51, 32, 2, -117, -77, 8, 98, -4, -114, 95, 98, 26, 94, -41, -128, 38, 122, -85, 98, -88, 49, -40, 70, -36, 68, -21, -83, -72, 91, -35, 55, -46, -117, 122, 64, -92, -39, -61, -100, -73, -57, 92, -83, 23, -80, -27, -107, 103, -4, 35, 98, -118, -34, -97, -83, -17, 107, -106, 29, -124, -46, 29, 108, -21, 46, 19, 89, 100, 31, 109, -29, -89, 31, 61, -22, -15, 50, -118, -95, 74, 117, 109, -109, 101, 84, -121, 14, 120, -102, 64, -102, 39, 121, -115, -93, 117, -54, -14, -108, -46, -119, 65, -33, -60, -113, 77, -60, -60, -80, 10, -79, -47, 35, 125, -125, -12, -114, -79, 29, 109, 85, 17, 82, -119, -48, -64, 107, 89, 92, 42};
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
    msg.setTimeStamp(0.591350814730731);
    msg.setSource(39792U);
    msg.setSourceEntity(107U);
    msg.setDestination(26006U);
    msg.setDestinationEntity(187U);
    msg.seq = 28903U;
    msg.value = 48U;
    msg.error.assign("ZKOYOIEYYPCJATLJXTHVZDIARXEBKWJWCHLLEZNCVFCIBEURSJUJHMOCHRYQGKIDKGMBNOJTRHLZVDRYCFAXCXZRNWTRIQEFPWEKNZQCTGMHDFATVPIBUTFLQSSVMDYFZPBYFSCPXWAWITFHMUMG");

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
    msg.setTimeStamp(0.031141113672895737);
    msg.setSource(3589U);
    msg.setSourceEntity(75U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(82U);
    msg.seq = 45678U;
    msg.value = 154U;
    msg.error.assign("KXXOLQRZNTFKYBFVVRMCTEZNYJLIGWCHQGGYUJDLGRMSSNEWXQEQHEUDAZPRBDTKUHVBADUAAOQIXJWCLHEDIUZDVGZPHSHNPCCGFCOCTJJRZSNYQTFOLFXTLCPMVYSOLXOFCJIBMVZUZHRKGMSTOLFKNEFCWRFHMGNJYWVJOKWOMMTQBYLIDPZUABUGRKFUEW");

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
    msg.setTimeStamp(0.009951986553135561);
    msg.setSource(43861U);
    msg.setSourceEntity(68U);
    msg.setDestination(37476U);
    msg.setDestinationEntity(12U);
    msg.seq = 49846U;
    msg.value = 103U;
    msg.error.assign("SXEQFQKATXDPPLJNNIKYYJLWIZJXDCLZXQHLXXONGY");

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
    msg.setTimeStamp(0.8012332340178157);
    msg.setSource(53897U);
    msg.setSourceEntity(26U);
    msg.setDestination(35610U);
    msg.setDestinationEntity(246U);
    msg.seq = 23959U;
    msg.sys.assign("UQKPZHPLIYPROKAVSPYTVXUNEJAZOMVNBAWEMTKNABDJZLVZDGLUWBBFPRVCDUCDQNJESUKMIAOLUYDOVHMHCSHTBSBFDIRLCSQDYSGSIKLBCRQXNBVOQTXZWMOGYYETUXEXW");
    msg.value = 0.6665215805323345;

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
    msg.setTimeStamp(0.21076175547724618);
    msg.setSource(16776U);
    msg.setSourceEntity(91U);
    msg.setDestination(60814U);
    msg.setDestinationEntity(62U);
    msg.seq = 39581U;
    msg.sys.assign("ASXZSTAASFJWXUKFRYADVHBMNBMGYPKRACDLYFPSPVFXPCAWHNLEVHHELXOTCJQNVJDLQJUVJURDGEQXXQQPEQUQEZSYOIPRZHWKUZWBKOZBWGGQLDLDWFHBHFCMNNDYNRXVNSBHVCCRTLKWFBIUAOJUUVMMZGOVGEBIFFOTPDPPEWIUOMIJRETMEOCKTASYCCYXVWHNTQILIBYKZJBTJGYHGRINL");
    msg.value = 0.4883410628353724;

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
    msg.setTimeStamp(0.16697879816327743);
    msg.setSource(59145U);
    msg.setSourceEntity(109U);
    msg.setDestination(14418U);
    msg.setDestinationEntity(139U);
    msg.seq = 30922U;
    msg.sys.assign("TMFOQYRNRBRBXMFJSACERYDGDHYZGLDHNCQODCZOITICDCRUBEUWAOKNEGSFGGSRRIZIFNHPVBBVNJUKYQYKZKQHXDFMXWXXOVXZEPQUXOZVLQZWVFTASMPWGLNTCNJCCHJXYIWWSLZVBLVBDMIQEBZCVQTYYGFAHSHTNVBIRDPMFUBDAATFKQYHPSLWNWLXPHJMGSEIAMMUEPHQMKOOPEGCZIKTJRLAFYKGAWROE");
    msg.value = 0.7987432371297004;

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
    msg.setTimeStamp(0.0002534938683372845);
    msg.setSource(19399U);
    msg.setSourceEntity(158U);
    msg.setDestination(57385U);
    msg.setDestinationEntity(10U);
    msg.seq = 61520U;
    msg.sys_dst.assign("FMABPAXZLEIGQJCBUUSGMUYTOSFWJGKL");
    msg.timeout = 0.5321813644971495;

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
    msg.setTimeStamp(0.4126049746284852);
    msg.setSource(26522U);
    msg.setSourceEntity(197U);
    msg.setDestination(45352U);
    msg.setDestinationEntity(34U);
    msg.seq = 3548U;
    msg.sys_dst.assign("UYRCUHTCSABVXNPOVFXFALEINRSQUFSXTRUQZCAOLIGKDDHPHTFHFLLPSSMEQLIXNJBWWOZJTYZDHBOQWRRCIOVNWRFSWPREQARQBMZUV");
    msg.timeout = 0.4694362981138236;

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
    msg.setTimeStamp(0.23002911796140857);
    msg.setSource(7337U);
    msg.setSourceEntity(224U);
    msg.setDestination(15839U);
    msg.setDestinationEntity(244U);
    msg.seq = 37043U;
    msg.sys_dst.assign("RZBXWJOYRYHQMBVFBMNTJPSGOCTPULWKZIVRVGZSZWITHBDMLNAGZMNTKVGXEHFEIIZJCPMVZEKKQXQFINNAPSBOSBHOAQGTCAYIDRVJYGHTZURSCBDKBXGQUOXPUMDJPCLHMPDCNWRHERYOKPAKRDOSYOWGMRNCLXFTXAAVJIFUVEYLNJHQEXPGBFDSFVKDLKTNFUJWXBSIKEHRLQLZQTYWUQDNFUETAIF");
    msg.timeout = 0.9590945004192327;

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
    msg.setTimeStamp(0.5908646442321701);
    msg.setSource(33615U);
    msg.setSourceEntity(87U);
    msg.setDestination(30689U);
    msg.setDestinationEntity(118U);
    msg.action = 200U;
    msg.longain = 0.6343963612617726;
    msg.latgain = 0.3474474450126276;
    msg.bondthick = 2747760261U;
    msg.leadgain = 0.008173816800355005;
    msg.deconflgain = 0.4308916978413201;

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
    msg.setTimeStamp(0.2986129054415585);
    msg.setSource(29955U);
    msg.setSourceEntity(102U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(171U);
    msg.action = 159U;
    msg.longain = 0.8779725548448344;
    msg.latgain = 0.6114249111061563;
    msg.bondthick = 1012661087U;
    msg.leadgain = 0.9557690248072991;
    msg.deconflgain = 0.6152432427022241;

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
    msg.setTimeStamp(0.23711794292438415);
    msg.setSource(46295U);
    msg.setSourceEntity(99U);
    msg.setDestination(3549U);
    msg.setDestinationEntity(132U);
    msg.action = 36U;
    msg.longain = 0.7253622696383155;
    msg.latgain = 0.9084252792365662;
    msg.bondthick = 655296413U;
    msg.leadgain = 0.4608369141584048;
    msg.deconflgain = 0.7771764515571093;

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
    msg.setTimeStamp(0.7197611340681264);
    msg.setSource(24107U);
    msg.setSourceEntity(116U);
    msg.setDestination(58969U);
    msg.setDestinationEntity(80U);
    msg.err_mean = 0.74246599710774;
    msg.dist_min_abs = 0.3330390373439236;
    msg.dist_min_mean = 0.3254138933714098;

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
    msg.setTimeStamp(0.4291237083730234);
    msg.setSource(1267U);
    msg.setSourceEntity(46U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(33U);
    msg.err_mean = 0.13825374409039248;
    msg.dist_min_abs = 0.6411660215259196;
    msg.dist_min_mean = 0.45034217049755876;

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
    msg.setTimeStamp(0.10521735393234721);
    msg.setSource(47012U);
    msg.setSourceEntity(33U);
    msg.setDestination(55939U);
    msg.setDestinationEntity(71U);
    msg.err_mean = 0.8267414879016337;
    msg.dist_min_abs = 0.1211850565745789;
    msg.dist_min_mean = 0.06156917583526533;

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
    msg.setTimeStamp(0.44618120976461184);
    msg.setSource(23882U);
    msg.setSourceEntity(128U);
    msg.setDestination(59995U);
    msg.setDestinationEntity(193U);
    msg.action = 126U;
    msg.lon_gain = 0.20149396334514824;
    msg.lat_gain = 0.8577049093001574;
    msg.bond_thick = 0.160780939253084;
    msg.lead_gain = 0.5328526519526338;
    msg.deconfl_gain = 0.7571704518802848;
    msg.accel_switch_gain = 0.2417542991733942;
    msg.safe_dist = 0.2372962067607971;
    msg.deconflict_offset = 0.12804404246853351;
    msg.accel_safe_margin = 0.08881544455611468;
    msg.accel_lim_x = 0.6966344237462433;

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
    msg.setTimeStamp(0.58958147363833);
    msg.setSource(49087U);
    msg.setSourceEntity(64U);
    msg.setDestination(39535U);
    msg.setDestinationEntity(247U);
    msg.action = 121U;
    msg.lon_gain = 0.24328802236429325;
    msg.lat_gain = 0.27801235929846124;
    msg.bond_thick = 0.7747789911542701;
    msg.lead_gain = 0.627632130239079;
    msg.deconfl_gain = 0.4427302054755389;
    msg.accel_switch_gain = 0.8431946384008757;
    msg.safe_dist = 0.1806604046235336;
    msg.deconflict_offset = 0.026053212903249356;
    msg.accel_safe_margin = 0.6557316588840595;
    msg.accel_lim_x = 0.49026128474949526;

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
    msg.setTimeStamp(0.9973472473221646);
    msg.setSource(19694U);
    msg.setSourceEntity(238U);
    msg.setDestination(31188U);
    msg.setDestinationEntity(128U);
    msg.action = 62U;
    msg.lon_gain = 0.8681664220248018;
    msg.lat_gain = 0.8192758615939787;
    msg.bond_thick = 0.031100155371154736;
    msg.lead_gain = 0.9117295061107079;
    msg.deconfl_gain = 0.2831978667780507;
    msg.accel_switch_gain = 0.2877869164790099;
    msg.safe_dist = 0.9651532469523393;
    msg.deconflict_offset = 0.1857400207388562;
    msg.accel_safe_margin = 0.7475056088245701;
    msg.accel_lim_x = 0.8049048324080991;

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
    msg.setTimeStamp(0.8287924613359074);
    msg.setSource(46229U);
    msg.setSourceEntity(114U);
    msg.setDestination(16210U);
    msg.setDestinationEntity(50U);
    msg.type = 218U;
    msg.op = 111U;
    msg.err_mean = 0.5590526343998296;
    msg.dist_min_abs = 0.39003394658873936;
    msg.dist_min_mean = 0.4227091804690031;
    msg.roll_rate_mean = 0.48935964873157256;
    msg.time = 0.962458288855503;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 95U;
    tmp_msg_0.lon_gain = 0.5258497478124673;
    tmp_msg_0.lat_gain = 0.21588136670557567;
    tmp_msg_0.bond_thick = 0.266446445736619;
    tmp_msg_0.lead_gain = 0.9226253273787591;
    tmp_msg_0.deconfl_gain = 0.3827896633265637;
    tmp_msg_0.accel_switch_gain = 0.15475818944543052;
    tmp_msg_0.safe_dist = 0.4162530666455422;
    tmp_msg_0.deconflict_offset = 0.21409746753095005;
    tmp_msg_0.accel_safe_margin = 0.5613243118879672;
    tmp_msg_0.accel_lim_x = 0.3142987077606061;
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
    msg.setTimeStamp(0.2667787950591761);
    msg.setSource(50476U);
    msg.setSourceEntity(142U);
    msg.setDestination(60321U);
    msg.setDestinationEntity(37U);
    msg.type = 106U;
    msg.op = 130U;
    msg.err_mean = 0.5646325488448556;
    msg.dist_min_abs = 0.1815393673494078;
    msg.dist_min_mean = 0.12000684504342729;
    msg.roll_rate_mean = 0.9921002208599462;
    msg.time = 0.06599359916838232;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 36U;
    tmp_msg_0.lon_gain = 0.09854485222547282;
    tmp_msg_0.lat_gain = 0.23897492985416724;
    tmp_msg_0.bond_thick = 0.0007105847420812994;
    tmp_msg_0.lead_gain = 0.4771208394509191;
    tmp_msg_0.deconfl_gain = 0.36450927166910163;
    tmp_msg_0.accel_switch_gain = 0.9726929390655586;
    tmp_msg_0.safe_dist = 0.9839540862070318;
    tmp_msg_0.deconflict_offset = 0.9773517102526578;
    tmp_msg_0.accel_safe_margin = 0.9932119665232314;
    tmp_msg_0.accel_lim_x = 0.9263948365339494;
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
    msg.setTimeStamp(0.426067783967345);
    msg.setSource(716U);
    msg.setSourceEntity(40U);
    msg.setDestination(64244U);
    msg.setDestinationEntity(85U);
    msg.type = 179U;
    msg.op = 167U;
    msg.err_mean = 0.4394360125109177;
    msg.dist_min_abs = 0.4900234335332867;
    msg.dist_min_mean = 0.7059919571737011;
    msg.roll_rate_mean = 0.8939384075695721;
    msg.time = 0.8326290706463373;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 48U;
    tmp_msg_0.lon_gain = 0.8460514377567103;
    tmp_msg_0.lat_gain = 0.6081049678808167;
    tmp_msg_0.bond_thick = 0.03399614159318454;
    tmp_msg_0.lead_gain = 0.5870892372119655;
    tmp_msg_0.deconfl_gain = 0.4380982305173574;
    tmp_msg_0.accel_switch_gain = 0.06823189134453433;
    tmp_msg_0.safe_dist = 0.7910348708828282;
    tmp_msg_0.deconflict_offset = 0.941628936410102;
    tmp_msg_0.accel_safe_margin = 0.5561012282422304;
    tmp_msg_0.accel_lim_x = 0.5102023902519164;
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
    msg.setTimeStamp(0.6298439807103486);
    msg.setSource(45940U);
    msg.setSourceEntity(35U);
    msg.setDestination(38561U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.9184707725064502;
    msg.lon = 0.0777345636331771;
    msg.eta = 455285858U;
    msg.duration = 33175U;

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
    msg.setTimeStamp(0.7851791261876457);
    msg.setSource(7377U);
    msg.setSourceEntity(184U);
    msg.setDestination(50160U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.5195132311904216;
    msg.lon = 0.010600705087751239;
    msg.eta = 23156386U;
    msg.duration = 5258U;

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
    msg.setTimeStamp(0.8543115944650485);
    msg.setSource(35404U);
    msg.setSourceEntity(96U);
    msg.setDestination(53781U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.43786651204725424;
    msg.lon = 0.09203615932995213;
    msg.eta = 2098384987U;
    msg.duration = 13973U;

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
    msg.setTimeStamp(0.20625737176264647);
    msg.setSource(62067U);
    msg.setSourceEntity(158U);
    msg.setDestination(26834U);
    msg.setDestinationEntity(11U);
    msg.plan_id = 55716U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9846518077845187;
    tmp_msg_0.lon = 0.9180137497626075;
    tmp_msg_0.eta = 1502786043U;
    tmp_msg_0.duration = 56819U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.010655175945417206);
    msg.setSource(43883U);
    msg.setSourceEntity(243U);
    msg.setDestination(18901U);
    msg.setDestinationEntity(22U);
    msg.plan_id = 53853U;

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
    msg.setTimeStamp(0.32800378100385563);
    msg.setSource(27823U);
    msg.setSourceEntity(237U);
    msg.setDestination(58239U);
    msg.setDestinationEntity(217U);
    msg.plan_id = 35006U;

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
    msg.setTimeStamp(0.20577033417746438);
    msg.setSource(11799U);
    msg.setSourceEntity(86U);
    msg.setDestination(51641U);
    msg.setDestinationEntity(181U);
    msg.type = 178U;
    msg.command = 187U;
    msg.settings.assign("VWSSQVIJLGYUEVLRIKIWATKSBFKPACCZLRYOKOUPBLXOHTVXYLRWZQHMVSEPNGIZHNKDDXMFXUOFGICSKNEMOAFDXBCIULFTRSQNHEEMTCIUYQHXZOTPRDWJZTJNGOPXYTCFJBARVWWSJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 47128U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4819786951618985;
    tmp_tmp_msg_0_0.lon = 0.6963276233397157;
    tmp_tmp_msg_0_0.eta = 3486264286U;
    tmp_tmp_msg_0_0.duration = 8855U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SMYMMZXKGKVNYDYPABQFHJYIXELHEOBPDMWTMYFDIOGCDJSAXNDDAGZTVWXJBCVSRPI");

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
    msg.setTimeStamp(0.21900038582655734);
    msg.setSource(59823U);
    msg.setSourceEntity(162U);
    msg.setDestination(21852U);
    msg.setDestinationEntity(114U);
    msg.type = 217U;
    msg.command = 225U;
    msg.settings.assign("PZRLMLYSSSOMUYMHXQQIGAQBNWMRXHESZYKCNUQIBFTNNAKIQSPGKRGDGOBCLIDJTSMYWDXXLWBWTZEWRLIUEMNJBCFNCWHKBBWNVHYHCASROEVJYVUDRICKTMJQJGZMJBRWIOUXCPPZGZEVEJQDOXRSLLEYBFITCOPSTLPIYNGGTMVEYUXAFUXZFHFKDTKDOOZFDA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36627U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.49428644733603355;
    tmp_tmp_msg_0_0.lon = 0.3868080187238516;
    tmp_tmp_msg_0_0.eta = 1544154200U;
    tmp_tmp_msg_0_0.duration = 39829U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YTIYQJUSLSYJTITGCFGANMIUCJLLDSRESZZNISKBKSYJVHVQKAOXCRHTOODNTPMQAFMWSAIGLERJEBOWRXEHGYJOWSBZUXZTNCZXQBRNGECDFEFZDQEDSKKUBFAWEXVPDOMGTNDHKIKAXASMWGBBPYLQWMVUALQRCNOHRTQFYZVAXCPLEBVJVPOLUUMJUWMI");

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
    msg.setTimeStamp(0.4593471922895852);
    msg.setSource(51429U);
    msg.setSourceEntity(190U);
    msg.setDestination(31765U);
    msg.setDestinationEntity(91U);
    msg.type = 69U;
    msg.command = 36U;
    msg.settings.assign("AWMIYPJMCCLSJUVREZYZAHOXSSYXISKJZLVJOTEQQCKMQEVHNUUMLSIFUFYQVPNFZAAPJXMGTPMPYXTIXVBRXLOEEGDNYCMJUNCKBCFCAHQLOHDBKPIXNETQJUTDQSTZIIYDWHNGSQK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21328U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VFNOTRELBCHSPXMVTGJOKCCXOZRXWGDFTGEPBPNFMRCUVOYVNSTFZYSAXYQURTJRUHPYQVNDLAMNBHENWMYSCJKKQQLYTMKRDQUAOHYWIGJSRGBJEGPZUWCQUPNMGESHCKFGVAHZLIMOVLJOOXIYKBUPAPBDQNDJDLHATOZIGDWTBRFSEB");

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
    msg.setTimeStamp(0.9794780619760683);
    msg.setSource(12005U);
    msg.setSourceEntity(202U);
    msg.setDestination(13066U);
    msg.setDestinationEntity(125U);
    msg.state = 86U;
    msg.plan_id = 31258U;
    msg.wpt_id = 40U;
    msg.settings_chk = 10004U;

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
    msg.setTimeStamp(0.3352403214148383);
    msg.setSource(54590U);
    msg.setSourceEntity(206U);
    msg.setDestination(33574U);
    msg.setDestinationEntity(59U);
    msg.state = 228U;
    msg.plan_id = 4773U;
    msg.wpt_id = 97U;
    msg.settings_chk = 8353U;

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
    msg.setTimeStamp(0.15560639908435958);
    msg.setSource(24444U);
    msg.setSourceEntity(185U);
    msg.setDestination(5033U);
    msg.setDestinationEntity(24U);
    msg.state = 225U;
    msg.plan_id = 8684U;
    msg.wpt_id = 78U;
    msg.settings_chk = 64584U;

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
    msg.setTimeStamp(0.33925372410475907);
    msg.setSource(7053U);
    msg.setSourceEntity(151U);
    msg.setDestination(59317U);
    msg.setDestinationEntity(52U);
    msg.uid = 135U;
    msg.frag_number = 115U;
    msg.num_frags = 243U;
    const signed char tmp_msg_0[] = {-1, 112, 87, -22, 39, -19, -45, 64, -83, 79, 111, 27, 39, 122, 79, -49, -116, -9, 125, -54, 84, 37, 126, 86, 111, -49, -19, -89, 6, -118, 96, 46, -111, -35, 123, -102, 118, 74, -2, 13, -34, -52, -38, 71, -47, 5, -47, 76, 70, -114, 35, -83, 49, 41, -88, 40, 72, 124, -30, -106, 87, 50, -120, 71, -10, -3, -108, 2, 49, 80, 41, 109, 28, 10, 124, -84, 69, 56, -110, 61, 44, 64, 96, -95, 105, 96, 117, -108, -85, -104, 104, 23, 32, 79, 82, 107, 29, 19, 80, 93, -58, 125, 120, -95, -65, 59, -76, -29, -98, 36, -93, 125, -66, 113, 89, -58, -104, 126, 64, 8, 39, 69, -67, 114, 33, -128, -115, -114, -51, 104, -26, 108, 60, -48, -94, 13, -50, 51, -22, -91, 38, -93, -102, -107, -91, 82, -59, 30, -98, 100, 93, -109, -90, 36, -87, 10, -34, 66, 78, 73, 83, -75, -34, -73, -57, -57, -96, 5, 21, -12, -109, 112, -55, 73, 47, 35, -81, -80, -74, -72, 23, 40, 82, 59, 117, 22, -32, 44, -122, 42, -65, -40, 111, 76, 54, -94, -90, 44, -88, -85, 83};
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
    msg.setTimeStamp(0.8688978421508343);
    msg.setSource(28380U);
    msg.setSourceEntity(223U);
    msg.setDestination(58985U);
    msg.setDestinationEntity(159U);
    msg.uid = 76U;
    msg.frag_number = 213U;
    msg.num_frags = 203U;
    const signed char tmp_msg_0[] = {64, 114, -83, 1, 2, -85, 82, 27, -73, 52, 59, 115, 32, 111, -37, -109, -109, -87, 22, 43, 60, -93, -24, 122, -74, 84, 85, 12, -88, -115, 6, 113, 94, -120, -3, 11, 22, 93, 99, 7, -118, 93, 30, 55, -122, -15, 76, 49, -14, 55, -108, 85, 51, -25, -111, 80, -70, 35, 10, -26, 50, 105, 36, -65, 104, 104, 46, -38, 80, -87, 50, -127, -79, 100, 100, -110, -78, -48, -71, -65, 53, -18, 84, -121, -44, -53, 97, -97, -19, -9, -39, 116, -53, 76, 38, 53, -76, 19, 39, 0, 95, 23, -54, -33, 9, 15, -47, 123, 99, -30, -98, -113, 77, 19, -100, 120, -39, -65, 30, 60, -12, -70, 123, -111, 52, -34, 22, 28, -37, -55, 119, 109, -56, -105, 11, 72, -17, 82, -119, 39, -73, -89, 105, 70, 45, -94, -16, 39, -59, 65, -119, -114, -124, 27, -50, 7, 15, 42, 31, 79, -9, -98, 47, -24, 3, -8, -62, 67, -17, -30, 2, 17, 15, -5, -102, 16, 94, -125, 54, -16};
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
    msg.setTimeStamp(0.318371446510898);
    msg.setSource(49004U);
    msg.setSourceEntity(15U);
    msg.setDestination(21871U);
    msg.setDestinationEntity(144U);
    msg.uid = 144U;
    msg.frag_number = 48U;
    msg.num_frags = 158U;
    const signed char tmp_msg_0[] = {-92, 2, 121, 107, 30, -3, 62, -13, 82, -57, -38, -36, -47, -73, 33, 18, 50, -13, -16, -18, -5, -54, -102, -74, 75, -95, 94, 102, -92, 44, -94, 91, -92, 5, 75, -126, -46, 29, 83, -13, -12, -118, -97, -37, -16, -78, 119, -4, 115, 88, 54, 42, -83, -26, 61, -57, -34, -119, -73, -98, -1, 8, -122, 96, -69, 5, -64, -51, 119, 47, -117, 106, 7, 74, 28, 50, 123, -70, 66};
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
    msg.setTimeStamp(0.5131385998260193);
    msg.setSource(38287U);
    msg.setSourceEntity(117U);
    msg.setDestination(47764U);
    msg.setDestinationEntity(10U);
    msg.content_type.assign("NEGLJVKIIZKHJZUQCKXJWCTZYPUPSUZBSROPKONBVUGMYTURLJWMQLLVZIYPFOOCCDIRGUDHEMZKHJYJ");
    const signed char tmp_msg_0[] = {-103, 80, 73, 82, 82, -81, 31, -123, 66, -41, -112, -23, -54, -103, 51, -102, 87, -78, 33, 104, 46, -68, -27, -22, -128, -116, -15, -44, 83, 98, 41, 23, -119, -61, 18, -67, -79, 23, 36, -91, 79, 77, -84, 90, -99, -84, -13, -79, 36, 23, -22, -49, 97, 125, 73, -3, -59, 121, -92, 38, -10, 24, -98, 64, -54, 111, -88, 94, -61, 49, 43, -10, 13, -28, -110, -31, 114, -13, 85, 28, -114, 116, -29, -73, 89, -52, 89, 36, -43, 96, 92, -32, -120, 80, 52, 71, -74, -23, -119, -75, 124, -122, -41, -118, -76, -20, 59, 120, -80, 25, 39, -77, 61, 126, 80};
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
    msg.setTimeStamp(0.33501259480184065);
    msg.setSource(2314U);
    msg.setSourceEntity(47U);
    msg.setDestination(64053U);
    msg.setDestinationEntity(24U);
    msg.content_type.assign("QBPTZETAZHWRRYTCLZPAATRPMESUMVKGOSWFGCIDGLEVMEZEEOUNBILHPKOQKHCRIXPDRJLBJAFVCWEXZIOYTLAIABWOZFDJFBQYTEAJMSDNRHGXVQTYRKOAUJUSWTILNXHZEWSPCKYCDDTKLKRZ");
    const signed char tmp_msg_0[] = {-94, 58, -38, 108, 68, 77, 79, 15, -100, -80, -117, -34, -18, 101, 29, -28, 125, -62, -50, 75, 25, -43, -81, -47, 57, 0, 12, -76, 54, -115, -29, -54, 124, -36, -70, -58, -83, -110, -54, -123, -78, 67, -37, -55, -84, -108, -34, -87, 110, 43, -22, 59, -19, -108, -49, 36, -5, -12, -6, -19, 82, -98, 93, -87, 84, -38, 11, 107, -23, 52, -99, 72, -53, -96, 17, -122, -66, -11, 95, 51, -49, -121, -90, -59, -74, 31, 67, 11, 74, 67, -122, 86, -51, -101, -89, -59, 3, 36, -48, -37, -54, 59, 14, -97, -47, -60, -66, -41, -122, 3, 87, 88, 72, -119, -44, 123, -101, 84, 86, -19, -100, 80, 72, -18, -97, -55, -128, -117, 0, 40, 93, -119, 25, 96, 16, -59, 124, 44, -29, 70, -94, -38, 118, -106, 89, -83, -86, -4, -118, -105, -124, 121, 73, 26, 105, -87, -58, 78, -111, -34, -88, 11, -16, 49, 125, -40, -29, 101, -37, 93, -48, 117, -43, 4, -46, 81, 117, 30, 114, -82, 122, -27, 55, -122, 101, -84, 118, 21, 80, -14, 10, -103, 63, -86, -19, -2, 96, -84, -15, -13, -114, -7, -40, -96, -33, 27, 118, -95, 66, 86, -117, 20, -124, -65, -112, 116, 58, 98, 60, -75, -2, 40, -105, -54, -127, 11, -96, -4, -61, -117, -120, -88, -40, -59, -118, 51, -3, -36, 93, -85, -71, -108, 99, 108, 113, -13, 5};
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
    msg.setTimeStamp(0.2050844204790364);
    msg.setSource(28404U);
    msg.setSourceEntity(39U);
    msg.setDestination(24488U);
    msg.setDestinationEntity(212U);
    msg.content_type.assign("QDVPUERXMOPQWRAFFJAOXZOACCRMEVKOVKGUODNGGDZGIUASTLLJERMWAOYHRYJSBQJSMHXPGAQSPGBITLCXOXSYJMBHGTSZQKLHKIECOFLPBNWEZTBQKHFLICLEUTKGEHDQHJPHNLKUSWFYXRVPCDSGRDYUUJEBEMFUTRUNWZWCHZENYIZXLO");
    const signed char tmp_msg_0[] = {-64, 100, -10, 2, -63, -35, 112, 51, 41, -12, 122, 116, -19, 102, 121, 16, 75, 77, -87, 70, -58, -73, -47, 92, -115, -5, -17, -9, 109, 11, -74, 20, 20, -50, 15, -107, -63, 103, -128, 93, -71, -52, -81, -5, 76, 107, -38, -8, -1, 15, -49, -123, -96, 64, 92, 2, -127, -43, 61, -10, -90, 4, 94, -27, 67, -54, 54, -1, -79, -23, -47, 89, 85, -97, 80, -82, -77, 37, -118, 49, 29, 71, -118, -48, -116, -14, -73, -38, 48, -58, -110, -116, -35, 45, 6, 25, 89, -24, 67, -63, -81, -24, 88, 80, -10, 45, 95, -103, -121, 20};
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
    msg.setTimeStamp(0.031012122288428645);
    msg.setSource(37045U);
    msg.setSourceEntity(69U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.7556131179027478);
    msg.setSource(22867U);
    msg.setSourceEntity(22U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.7993957956898534);
    msg.setSource(38522U);
    msg.setSourceEntity(211U);
    msg.setDestination(7689U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.37870119633075505);
    msg.setSource(36772U);
    msg.setSourceEntity(158U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(110U);
    msg.target = 11231U;
    msg.bearing = 0.4685182433811983;
    msg.elevation = 0.36008995755366413;

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
    msg.setTimeStamp(0.7306298884017347);
    msg.setSource(11494U);
    msg.setSourceEntity(122U);
    msg.setDestination(27575U);
    msg.setDestinationEntity(254U);
    msg.target = 32333U;
    msg.bearing = 0.3705753805382611;
    msg.elevation = 0.02296621803319876;

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
    msg.setTimeStamp(0.1885378628824712);
    msg.setSource(48157U);
    msg.setSourceEntity(227U);
    msg.setDestination(6148U);
    msg.setDestinationEntity(181U);
    msg.target = 5705U;
    msg.bearing = 0.9949265578570159;
    msg.elevation = 0.5301239824569094;

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
    msg.setTimeStamp(0.8848045802104728);
    msg.setSource(32990U);
    msg.setSourceEntity(82U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(164U);
    msg.target = 2440U;
    msg.x = 0.02424360357899269;
    msg.y = 0.9200830617678298;
    msg.z = 0.09595459459659283;

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
    msg.setTimeStamp(0.507983510318919);
    msg.setSource(64511U);
    msg.setSourceEntity(46U);
    msg.setDestination(45761U);
    msg.setDestinationEntity(14U);
    msg.target = 29896U;
    msg.x = 0.45335574829072667;
    msg.y = 0.5574852023480568;
    msg.z = 0.42003281240602663;

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
    msg.setTimeStamp(0.9889251502497497);
    msg.setSource(60981U);
    msg.setSourceEntity(127U);
    msg.setDestination(42678U);
    msg.setDestinationEntity(237U);
    msg.target = 30931U;
    msg.x = 0.5426837828868247;
    msg.y = 0.9538204390849488;
    msg.z = 0.9378036168964736;

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
    msg.setTimeStamp(0.8640398906542174);
    msg.setSource(56133U);
    msg.setSourceEntity(83U);
    msg.setDestination(3792U);
    msg.setDestinationEntity(147U);
    msg.target = 55610U;
    msg.lat = 0.2454184219294122;
    msg.lon = 0.6013070708391076;
    msg.z_units = 87U;
    msg.z = 0.8212070601820096;

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
    msg.setTimeStamp(0.5995130474104452);
    msg.setSource(10440U);
    msg.setSourceEntity(121U);
    msg.setDestination(4598U);
    msg.setDestinationEntity(12U);
    msg.target = 52215U;
    msg.lat = 0.22000962085281728;
    msg.lon = 0.9799208314817023;
    msg.z_units = 94U;
    msg.z = 0.47945743686188547;

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
    msg.setTimeStamp(0.9072607172925335);
    msg.setSource(5190U);
    msg.setSourceEntity(253U);
    msg.setDestination(11595U);
    msg.setDestinationEntity(234U);
    msg.target = 59105U;
    msg.lat = 0.5491600493235168;
    msg.lon = 0.10388906544684506;
    msg.z_units = 218U;
    msg.z = 0.8497250292957801;

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
    msg.setTimeStamp(0.5417060238036235);
    msg.setSource(3995U);
    msg.setSourceEntity(163U);
    msg.setDestination(53119U);
    msg.setDestinationEntity(72U);
    msg.locale.assign("GBJFRULFLGCPHOEIUUPOKEXINVDLNREWHIGJZDRUPDLABMTHKKSCCPMFIAFZEOVUAZPCRVPYMNTWLVFPWFMVEQGOWLAOZVLTTNQSOTCKHGDPZFISNMYIHWWKVWZJOHTLKVCOXSUHJQQDSMURQYKYTINVJAFAEIMLUGDSAQXN");
    const signed char tmp_msg_0[] = {-50, -49, 10, -7, -33, -107, 4, -92, -111, -3, 19, 121, 25, -31, -106, 25, 124, -60, 77, 13, -29, 51, 63, 99, 107, -43, 91, -101, 93, -3, 32, 82, -78, 88, -9, 77, 116, -32, -104, 78, -14, -108, 33, 75, 38, 12, -18, 73, 32, 53, 37, -49, -103, -119, 63, -73, 41, -9, -58, 12, -3, -103, 4, 68, -97, 108, -108, -44, 10, 74, 45, 35, -59, 117, 55, 62, 26, 31, 95, 92, 65, -77, -116, 115, -61, -95, 51, -37, -86, -33, 108, 15, -7, 5, -15, -69, 86, -74, -107, -56, -20, 13, 26, -61, 96, -54, 31, 116, 25, 17, 42, -101, -59, 104, 123, 116, -26, 105, -120, -12, -25, -75, 14, 71, -104, 98, -84, -128, 86, -85, 71, 13, 112, -128, -38, 110, -16, -48, -83, 45, -9, -76, 63, 119, -31, -107, -99, 93, 123, -109, 21, -26, -50, 71, -11, -31, -45, -126, -84, -111, -21, 94, 29, -63, -16, 116, -24, -90, -86, -41, 48, 20, 92, -104, 2, 95, -105, -25, -1, -21, 91, 85, 126, 1, 75, 24, 54, -92, -10, -49, -49, -22, 122, 106, 6, 125, 27, -25, -20, -65, -67, 85, -81, -85, 108, 122, 72, 79, 88, -3, -3, -9, -42, -36, -37, -39, -2, -105, -39, -85, 102, 21, 38, 31, 71, 63, -99, 62, 85, -122, 113, 7, 32, 19};
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
    msg.setTimeStamp(0.35353716372330923);
    msg.setSource(38904U);
    msg.setSourceEntity(84U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(10U);
    msg.locale.assign("PZETUAGWKUHMPLSPBIRBRUSJERMSCGWGJQOGGZDBPVHSVQLHGUNHYLVHXPDTYOMEJOSCIXYOCTXELDAIACKFBZUEFNHOADKWQJVUYQEYBOZCSTIJPLQWXFJPOGXZMFKLTMEMEJNAXGXLWQNBIORHMCAEVPNBIGDDQSFLQACKFUOFMBZNVEYNNBOAXWDNBUIZFWVWZFM");
    const signed char tmp_msg_0[] = {9, -12, 18, 58, 104, -16, 78, -121, -82, -52, 122, -97, -67, -128, 125, -127, -124, 34, -54, -76, -106, -96, -68, -94, -67, 114, -74, 89, -66, -119, -41, -13, -111, 45, 26, -32, -15, -115, -69, 116, 24, 38, 45, 41, 75, 49, 76, -44, 52, -38, 58, 18, -18, 8, -109, -8, 57, -117, 18, 51, -96, 55, -1, -67, -88, -59, 74, 67, -121, 8, 84, -97, -75, -99, -2, -22, -74, 14, -4, -114, 115, 23, 113, 46, -79, -34, -50, -124, 107, -120, -83, -35, -16, -27, -27, 23, -40, 16, -8, 5, -71, -16, -14, -89, 38, -110, -24, 71, -84, 34, -113, 19, 4, 34, -51, 119, -124, -17, 5, 74, 27, 8, 123, -34, -25, 88, -70, -2, 126, -95, -81, -67, -79, 91, -118, 73, -77, 112, 123, -120, 76, -120, -24, 18, -65, 105, -110, 98, -38, -96, 10, -93, -96, -58, -124, -117, -23, 42, -30, 52, 11, 11, -2, -85, -116, 43, -43, -100, 113, -120, -60, -99, -37, 88, -125, -86, 7, -72, 30, -107, -77, 78, -37, -99, -1, -121, -43, 84, -47, 29, 64, 95, 48, -102, -58, -118, -107, -54, 69, 1, -33, -114, 63, 50, 7, -17, -113, -94, -49, 22, -55, -82, 94, -6, 20, -5, -25, 89, -41, 0, 19, -65};
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
    msg.setTimeStamp(0.7104078511594998);
    msg.setSource(43612U);
    msg.setSourceEntity(16U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(250U);
    msg.locale.assign("QACXKPIVOSXWIKNRQMYLDBADTDREUSRBCSHPAILUCORNHRGEZPYILFQJOYCPRSWTPVYGFHXDBHESCHWIIOWQMPPPFVWTJEZCIFFJQTUJBZWHTBKDUTYZYZSHLGONABJ");
    const signed char tmp_msg_0[] = {-16, 91, 28, -78, -49, 23, 44, 43, 39, 46, -40, -70, -62, 86, 55, 103, -66, 25, 80, 48, -41, -1, -16, 77, 101, 30, 125, 57, -29, 67, -15, 80, 105, 109, 58, -19, 103, -9, 65, 2, 93, -36, 16, 48, -97, -69, 43, 24, 81, -52, -91, -10, 11, -6, -15, 74, -22, 110, -84, -69, 3, -40, 14, -92, 103, -48, 42, -40, 59, -101, 1, -59, 55, -76, 10, 16, -23, 6, -102, -124, -54, 95, 19, -108, 73, 98, -42, -127, -13, 7, 56, -23, 2, 39, 33, 89, 17, -12, 97, -103, 126, 25, 122, -39, 125, 67, 89, 70, -29, 96, -63, -49, -119, -112, -105, 85, 77, 85, 108, -32, -25, -37, 6, 29, 34, 97, -6, 53, 100, -77, 68, -79, 76, 99, 40, -58, 75, -114, -121, -11, -65, 59, -91, 9, 91, 82, 91, 68, -127, 18, 123, -99, 34, -102, 96, -45, 29, 124, 100, 16, -54, 4, 16, 75, -82, -78, -110, 17, -21, 27, 109, -95, -17, -27, 122, -13, -80, 122, 21, 83, 68, 78, -11, -110, -126, -69};
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
    msg.setTimeStamp(0.6410327847194578);
    msg.setSource(34276U);
    msg.setSourceEntity(160U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.5031316822640656);
    msg.setSource(11916U);
    msg.setSourceEntity(238U);
    msg.setDestination(65301U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.8590097747276438);
    msg.setSource(32199U);
    msg.setSourceEntity(25U);
    msg.setDestination(10673U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.07819436125206713);
    msg.setSource(31575U);
    msg.setSourceEntity(88U);
    msg.setDestination(61611U);
    msg.setDestinationEntity(170U);
    msg.camid = 90U;
    msg.x = 10562U;
    msg.y = 40250U;

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
    msg.setTimeStamp(0.20883430678050474);
    msg.setSource(42770U);
    msg.setSourceEntity(223U);
    msg.setDestination(20744U);
    msg.setDestinationEntity(59U);
    msg.camid = 187U;
    msg.x = 24284U;
    msg.y = 43290U;

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
    msg.setTimeStamp(0.6131912513212524);
    msg.setSource(54464U);
    msg.setSourceEntity(111U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(79U);
    msg.camid = 235U;
    msg.x = 19212U;
    msg.y = 48627U;

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
    msg.setTimeStamp(0.9623067446127892);
    msg.setSource(47541U);
    msg.setSourceEntity(206U);
    msg.setDestination(7286U);
    msg.setDestinationEntity(35U);
    msg.camid = 119U;
    msg.x = 14128U;
    msg.y = 61729U;

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
    msg.setTimeStamp(0.22963381999548482);
    msg.setSource(4646U);
    msg.setSourceEntity(9U);
    msg.setDestination(56121U);
    msg.setDestinationEntity(60U);
    msg.camid = 168U;
    msg.x = 44772U;
    msg.y = 22892U;

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
    msg.setTimeStamp(0.3092335266499604);
    msg.setSource(27188U);
    msg.setSourceEntity(135U);
    msg.setDestination(8035U);
    msg.setDestinationEntity(38U);
    msg.camid = 225U;
    msg.x = 31370U;
    msg.y = 64015U;

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
    msg.setTimeStamp(0.9659253352303353);
    msg.setSource(10240U);
    msg.setSourceEntity(117U);
    msg.setDestination(25403U);
    msg.setDestinationEntity(252U);
    msg.tracking = 146U;
    msg.lat = 0.8663268566760128;
    msg.lon = 0.4898405554237092;
    msg.x = 0.4418257966709014;
    msg.y = 0.40530923260988594;
    msg.z = 0.5537043916353959;

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
    msg.setTimeStamp(0.1402953821901226);
    msg.setSource(47195U);
    msg.setSourceEntity(134U);
    msg.setDestination(26400U);
    msg.setDestinationEntity(85U);
    msg.tracking = 199U;
    msg.lat = 0.5432819905588147;
    msg.lon = 0.09641674321291971;
    msg.x = 0.6046738904816022;
    msg.y = 0.17015260824710943;
    msg.z = 0.35870678115464827;

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
    msg.setTimeStamp(0.1640915397437317);
    msg.setSource(32899U);
    msg.setSourceEntity(214U);
    msg.setDestination(4441U);
    msg.setDestinationEntity(85U);
    msg.tracking = 216U;
    msg.lat = 0.8620374287363856;
    msg.lon = 0.9560704337781095;
    msg.x = 0.056527711989651674;
    msg.y = 0.3101434229520219;
    msg.z = 0.221917965749439;

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
    msg.setTimeStamp(0.08571055473061695);
    msg.setSource(47897U);
    msg.setSourceEntity(10U);
    msg.setDestination(12079U);
    msg.setDestinationEntity(197U);
    msg.target.assign("HMRKUDHBHHCWEMGKDLFQSIJKAPPDJHYHAFYDZGMHZGUNAIQKFKUVIDPCSZLTEYBLNKOVQTIBWLYFEOZYOMIZDTNSBZPUXULSUUXAUVNSVDEZLIFVPWBTFSNMOPSTPQQMKXMSERDAJE");
    msg.lbearing = 0.7706724035400645;
    msg.lelevation = 0.6383350375237807;
    msg.bearing = 0.5076168598533548;
    msg.elevation = 0.6415289865169088;
    msg.phi = 0.29964730912354787;
    msg.theta = 0.2322229519666229;
    msg.psi = 0.011605575046235828;
    msg.accuracy = 0.6137378656826705;

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
    msg.setTimeStamp(0.7217200732493818);
    msg.setSource(6844U);
    msg.setSourceEntity(25U);
    msg.setDestination(56185U);
    msg.setDestinationEntity(10U);
    msg.target.assign("UEIWYWIKIGSFZTJWOJRPWRZRTHWQHLXLFDMTQTRKWCHNBWPUJKYTNQBUYGVVWRPENXZPTLXPMBFVSMZXXTZPQCIPUNOVNCYDMCYCVAOMLKQUBUSRDCXJZYOHPLVJILTMOGNHKDSJYNGGJMCUFDLLUNKYGCUYDQXJNGF");
    msg.lbearing = 0.16236929109657972;
    msg.lelevation = 0.1836404308673929;
    msg.bearing = 0.12654842674513533;
    msg.elevation = 0.5132671618674962;
    msg.phi = 0.724270467438025;
    msg.theta = 0.33391433829475614;
    msg.psi = 0.28512977775044457;
    msg.accuracy = 0.44233553344675003;

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
    msg.setTimeStamp(0.672957176313997);
    msg.setSource(45001U);
    msg.setSourceEntity(55U);
    msg.setDestination(31203U);
    msg.setDestinationEntity(61U);
    msg.target.assign("FBSVDKONVWGBQVOPYRDXNYMZPWJNEMHGNNBYCSYKKJICOSHSWRLWXSEXGOUFOTZFMYKIHSXQQRAZOJUMGQYHSNGMXZIUVFDIIEFCUFNRUEHJHEPXPZKLPWRMTUTWYLQIKOOVDTDSCHHLCVJJSECTDOBZHABACPPLBMXMQYHXNGBAJLMWZJRFYRTPMQTAJFLDLWRIGAYQQGIIVLCTPUECSQWRZAIXZUFKDUDVAGKKC");
    msg.lbearing = 0.5374348346918179;
    msg.lelevation = 0.7622701848429668;
    msg.bearing = 0.9453719028161135;
    msg.elevation = 0.045061658869270715;
    msg.phi = 0.1093134437535015;
    msg.theta = 0.7094927914516596;
    msg.psi = 0.5395036272102325;
    msg.accuracy = 0.6568391424524489;

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
    msg.setTimeStamp(0.09283383531708789);
    msg.setSource(4340U);
    msg.setSourceEntity(111U);
    msg.setDestination(63362U);
    msg.setDestinationEntity(216U);
    msg.target.assign("RAHISHACLTPVYCQIUPUTGHYFEAFBBNMGCYVUJKBWLWJSYMNNXIJSJPIEQZDGNWBPZPVPAXSODNOAVQXQRNJKQBZCZFCLFDHITXADGLOZIWLFGXQGSLUORSMAGYVLJEZAZWFTDWNKIECVKOCYYOOURQRRRBIXVAQDVIUBTQYEZDWMLHSPCPHMSYSFFREKFIEWDKRZOMGMOUEMMLMKJUNRXHBEUXXGHPWUTOJBTVKNKTC");
    msg.x = 0.3233846457776597;
    msg.y = 0.8067380930506246;
    msg.z = 0.7613207996955811;
    msg.n = 0.9121830338091935;
    msg.e = 0.8814207543017739;
    msg.d = 0.6255362624459311;
    msg.phi = 0.35666951852761075;
    msg.theta = 0.4632929096861832;
    msg.psi = 0.4906938104912042;
    msg.accuracy = 0.21181235755796013;

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
    msg.setTimeStamp(0.7049766664355329);
    msg.setSource(7946U);
    msg.setSourceEntity(60U);
    msg.setDestination(48578U);
    msg.setDestinationEntity(59U);
    msg.target.assign("MKVSSEMZKLLYVWMAULDMSLTZBXJCYEUGYXFBUNLURHKIEWSQEKAOGSYQZHWNHBWDXZLAPVOKPAOXYWTFULDUNRCDIQFWYVXAES");
    msg.x = 0.6546221160457929;
    msg.y = 0.3504711601113142;
    msg.z = 0.9637697598159264;
    msg.n = 0.46083530706705544;
    msg.e = 0.7568091798586241;
    msg.d = 0.46740152102821386;
    msg.phi = 0.8805985562707452;
    msg.theta = 0.02347079048330525;
    msg.psi = 0.3824446128019927;
    msg.accuracy = 0.9106016660530193;

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
    msg.setTimeStamp(0.21578311685870077);
    msg.setSource(52242U);
    msg.setSourceEntity(244U);
    msg.setDestination(43012U);
    msg.setDestinationEntity(46U);
    msg.target.assign("ZQTELHWQXVUKRIKGOMBJURSIKBWOZCWFTDJORQDBALFSSITXGGWOPRAHWRKXJOTDXZNBPMXVKOVGCUOTIJNMRDZMKAQQFELNUCSMLVALNJVAYMGUCXZNEINYBKJTQMENBRREFMIGOXVTYZJQFHAZNQYZHPARBHU");
    msg.x = 0.4851598996951093;
    msg.y = 0.2091854942965764;
    msg.z = 0.8784470228147065;
    msg.n = 0.1696416484404467;
    msg.e = 0.2397082830435412;
    msg.d = 0.5246142238107835;
    msg.phi = 0.7845367428555207;
    msg.theta = 0.049880615251560734;
    msg.psi = 0.6395056210188882;
    msg.accuracy = 0.016247400384684196;

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
    msg.setTimeStamp(0.5708905053384974);
    msg.setSource(57554U);
    msg.setSourceEntity(174U);
    msg.setDestination(6036U);
    msg.setDestinationEntity(200U);
    msg.target.assign("VAVJZJRUKJCSNTOFGABYDSKKMHOZTDCMRNIEEPQSOBWAFLKMVFCUFXCXVXBQZJQHZCOLTTBQZQJIOSAGFMWETVIVNLYYFYWAPUIWUJQNBCZOLGHHJXEVPSQBZRGWNIQJTEMTYJRRMKBESUXGKUZYDEUDSDGOCHIFMORFPYSQNGPZRFXUVDWWRHKPCAJCHXDANFHRWGTLGBYBXIADZMXNLMLPMISKWLDEINBO");
    msg.lat = 0.7581445156840232;
    msg.lon = 0.3549971091865828;
    msg.z_units = 178U;
    msg.z = 0.9682410347206076;
    msg.accuracy = 0.2751273125427327;

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
    msg.setTimeStamp(0.8792842737729629);
    msg.setSource(37051U);
    msg.setSourceEntity(61U);
    msg.setDestination(13064U);
    msg.setDestinationEntity(111U);
    msg.target.assign("MFMYBMXYZBEINONOVBWEEYWEKROYNNGVRQMIPUTTSHOPUKTLQOHYGJWZFSLXFCGPVERMXHRFSXOVDVCOSPIZLNUYPASANVXEUBFEGDRGMCJUPXPETBWIHBBCYJZKKLKAJFUORKGSZGGXWDMCTLLRLQTFASHDILXZCHFBXLHAGDYDSIJNCAATZEITHUIDYIUJMEGJCKVDUBZXQTAPCAYKM");
    msg.lat = 0.9478968034660539;
    msg.lon = 0.32783694347586734;
    msg.z_units = 150U;
    msg.z = 0.6780721380117494;
    msg.accuracy = 0.5641832427791763;

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
    msg.setTimeStamp(0.9185320606696009);
    msg.setSource(3240U);
    msg.setSourceEntity(202U);
    msg.setDestination(35716U);
    msg.setDestinationEntity(198U);
    msg.target.assign("BNITOSMCPFPCZJOHPKBTDBYEMOIWMQWUPWXNFQYFOSIBG");
    msg.lat = 0.06991138713194567;
    msg.lon = 0.6715495266674669;
    msg.z_units = 246U;
    msg.z = 0.21040756159030793;
    msg.accuracy = 0.007090533587202352;

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
    msg.setTimeStamp(0.9147003108417276);
    msg.setSource(42084U);
    msg.setSourceEntity(211U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(189U);
    msg.name.assign("SXQYAUCXLUDCLXTKDHDIFWMRMIFIMJXNVCBOELZTBFOUMKGEWUMRVZFFHQTZHATWBDCCULIJKSBLPEAJDPASOUNOVJTYCWKDUGQJUZCAHTYPYMEXEOZWNJPMAFGHNTYLNGQOHNCWTJHOFXWBFFOBDPLLJORAPVIEBSMGZDPDVQ");
    msg.lat = 0.09330977687346098;
    msg.lon = 0.8194620862875327;
    msg.z = 0.3675431086120662;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.6935160093739791);
    msg.setSource(698U);
    msg.setSourceEntity(127U);
    msg.setDestination(13118U);
    msg.setDestinationEntity(134U);
    msg.name.assign("XWMVAPPESVNSARRXRJMEFCLGTMYDTPPDJSFGNBBEMUITYPALDCCFHFJRTWOHUODMTJHNLCTXWBUYJATIMRBOZNVHPDHUPZXZITLVENOUGADXKJGVECRLGKLXOMWOYXLVAFMOZRQQQRDFGYNUKJZKQHSZFXWSKBLZYCTUBCONPZVFMQZWMWPSKYQDFEIFCJSRAWNJKIUQAHUHITADBBQXKGHWEKCNGKYOJQOSZLGBCVQVVEXGIPDBR");
    msg.lat = 0.5126594134926828;
    msg.lon = 0.5768495792233863;
    msg.z = 0.48700950881536786;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.8090226663152088);
    msg.setSource(17936U);
    msg.setSourceEntity(82U);
    msg.setDestination(56981U);
    msg.setDestinationEntity(163U);
    msg.name.assign("CDRRBOEVLENQISKSZVLUEKDKDTQMGEFXPYSFNJZZVAGFPAKZEGHUGSYKSOYBLOBTRFYUJLZQOVJXJKWXDVZQDIHCHDNXXCZMTKBJLVTTODRLAIUWAUAUNRVFKILFTSUCHWGNMWPYXAMWXBCNOCARIVPQBHFEVARPDSOGJBNQQBFK");
    msg.lat = 0.32292423929098;
    msg.lon = 0.9090546306956925;
    msg.z = 0.33400712645418307;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.743408754250582);
    msg.setSource(52618U);
    msg.setSourceEntity(122U);
    msg.setDestination(61616U);
    msg.setDestinationEntity(31U);
    msg.op = 99U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VHFQQTNYVEHYFKGPXSNPUG");
    tmp_msg_0.lat = 0.6378717043775343;
    tmp_msg_0.lon = 0.22804784209498363;
    tmp_msg_0.z = 0.9500986649759329;
    tmp_msg_0.z_units = 51U;
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
    msg.setTimeStamp(0.19327998197492013);
    msg.setSource(31677U);
    msg.setSourceEntity(160U);
    msg.setDestination(17357U);
    msg.setDestinationEntity(183U);
    msg.op = 233U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BEGOEUACPSIBMCTKFWNWMHDLZZEBDLVKJMTCDZJTWLGBDQKTQTCMIQKVFPEJTAYYXXNWJET");
    tmp_msg_0.lat = 0.13895600310443967;
    tmp_msg_0.lon = 0.12943590229942525;
    tmp_msg_0.z = 0.8695460094725862;
    tmp_msg_0.z_units = 244U;
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
    msg.setTimeStamp(0.893253536659855);
    msg.setSource(28067U);
    msg.setSourceEntity(88U);
    msg.setDestination(58651U);
    msg.setDestinationEntity(236U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.40309584276987775);
    msg.setSource(32613U);
    msg.setSourceEntity(69U);
    msg.setDestination(52787U);
    msg.setDestinationEntity(131U);
    msg.value = 0.40421763081268225;
    msg.type = 97U;

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
    msg.setTimeStamp(0.9450674418731343);
    msg.setSource(58077U);
    msg.setSourceEntity(142U);
    msg.setDestination(2096U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8200414069920967;
    msg.type = 121U;

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
    msg.setTimeStamp(0.9470066846022938);
    msg.setSource(61276U);
    msg.setSourceEntity(237U);
    msg.setDestination(53177U);
    msg.setDestinationEntity(97U);
    msg.value = 0.40660076442706883;
    msg.type = 222U;

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
    msg.setTimeStamp(0.46459807015725696);
    msg.setSource(9610U);
    msg.setSourceEntity(143U);
    msg.setDestination(19383U);
    msg.setDestinationEntity(62U);
    msg.value = 0.322524090029658;

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
    msg.setTimeStamp(0.8616196485258683);
    msg.setSource(10318U);
    msg.setSourceEntity(89U);
    msg.setDestination(20212U);
    msg.setDestinationEntity(5U);
    msg.value = 0.39669259629164366;

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
    msg.setTimeStamp(0.012428535107261385);
    msg.setSource(51561U);
    msg.setSourceEntity(208U);
    msg.setDestination(24163U);
    msg.setDestinationEntity(113U);
    msg.value = 0.19075378126465148;

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
    msg.setTimeStamp(0.023937494983029217);
    msg.setSource(14282U);
    msg.setSourceEntity(209U);
    msg.setDestination(31990U);
    msg.setDestinationEntity(60U);
    msg.timestamp_last_service = 0.9067226968307663;
    msg.time_next_service = 0.24053621934440406;
    msg.time_motor_next_service = 0.8840042663107562;
    msg.time_idle_ground = 0.16121618498985246;
    msg.time_idle_air = 0.9746264921165648;
    msg.time_idle_water = 0.43600229229309206;
    msg.time_idle_underwater = 0.5818695777990076;
    msg.time_idle_unknown = 0.3539174384782261;
    msg.time_motor_ground = 0.21564270345242753;
    msg.time_motor_air = 0.38744961174485726;
    msg.time_motor_water = 0.3639298959477588;
    msg.time_motor_underwater = 0.08755121734479143;
    msg.time_motor_unknown = 0.5983131315831952;
    msg.rpm_min = 6419;
    msg.rpm_max = -17613;
    msg.depth_max = 0.2164277983896138;

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
    msg.setTimeStamp(0.04857546070377927);
    msg.setSource(19921U);
    msg.setSourceEntity(218U);
    msg.setDestination(62014U);
    msg.setDestinationEntity(65U);
    msg.timestamp_last_service = 0.5953624045421733;
    msg.time_next_service = 0.850781028692824;
    msg.time_motor_next_service = 0.7872224752557683;
    msg.time_idle_ground = 0.4094166880955096;
    msg.time_idle_air = 0.8301929452395087;
    msg.time_idle_water = 0.36555378152748363;
    msg.time_idle_underwater = 0.13178104455577544;
    msg.time_idle_unknown = 0.4864774314014527;
    msg.time_motor_ground = 0.786863014594282;
    msg.time_motor_air = 0.7347074837838304;
    msg.time_motor_water = 0.3415133130670365;
    msg.time_motor_underwater = 0.6443645040303263;
    msg.time_motor_unknown = 0.8330276458493294;
    msg.rpm_min = 14386;
    msg.rpm_max = -27252;
    msg.depth_max = 0.053806961967931444;

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
    msg.setTimeStamp(0.4113513188214293);
    msg.setSource(29725U);
    msg.setSourceEntity(221U);
    msg.setDestination(47566U);
    msg.setDestinationEntity(75U);
    msg.timestamp_last_service = 0.32730114263537835;
    msg.time_next_service = 0.6313326767452763;
    msg.time_motor_next_service = 0.3557167968474866;
    msg.time_idle_ground = 0.9747941682084781;
    msg.time_idle_air = 0.21257575351016844;
    msg.time_idle_water = 0.3488025105692609;
    msg.time_idle_underwater = 0.5026471608061345;
    msg.time_idle_unknown = 0.5111991455643505;
    msg.time_motor_ground = 0.05069676092828579;
    msg.time_motor_air = 0.47194339615183645;
    msg.time_motor_water = 0.4876426243084854;
    msg.time_motor_underwater = 0.4668716255373928;
    msg.time_motor_unknown = 0.0348751253844265;
    msg.rpm_min = 3261;
    msg.rpm_max = -23746;
    msg.depth_max = 0.2982622784849843;

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
    msg.setTimeStamp(0.9164325628024369);
    msg.setSource(26398U);
    msg.setSourceEntity(155U);
    msg.setDestination(44469U);
    msg.setDestinationEntity(132U);
    msg.severity = 119U;
    msg.text.assign("XHNXGQUYMVVXHQATHGEDFPOLCHZEQACGNSPETLXQMAJRJINKKGWDIKMJUQSMNDUUOXUUEJHNEGZATHXIVPRCDNFHLPBXJRUESGKLMSEFRDTDAKIWMMWPCCIKLYBOYBQXAVQVSEDKZKSHQKFXERYALHOLWNTYLWOYBZDVMZ");

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
    msg.setTimeStamp(0.7079196171555127);
    msg.setSource(29046U);
    msg.setSourceEntity(254U);
    msg.setDestination(58210U);
    msg.setDestinationEntity(203U);
    msg.severity = 165U;
    msg.text.assign("SBOHOCHBXJSNLATYJUVZGYRJHIBGYXVGXMINNCTMORERJOFAJOTUYOVERHTPNWSILEQNZXQZPQEKKOGVDWJUSFWASAPTKPAFBENGMSDHPWPBJSELMECZHXWDSKCLDTFDMIGONRQTBAGVULUIEALQUYQKCXYLFGIXJNQXEAWZM");

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
    msg.setTimeStamp(0.32251883119994995);
    msg.setSource(31239U);
    msg.setSourceEntity(62U);
    msg.setDestination(2222U);
    msg.setDestinationEntity(68U);
    msg.severity = 18U;
    msg.text.assign("SJCXWOHFZPQQDUKSRGTMHJCZPAJQIPYZQNKQGSEGDVOEBITXPSVPXAPECYYBNNQKVHOEVLAIRFXMTJZPHUEIJCOKFRDUGVWMJZVLOHQIGTIRZUOMXFWGSABPZLYIZGYTFKWLIC");

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
    msg.setTimeStamp(0.2830584367012009);
    msg.setSource(4132U);
    msg.setSourceEntity(223U);
    msg.setDestination(63355U);
    msg.setDestinationEntity(209U);
    msg.channel = -120;
    msg.value = -1291487578;
    msg.gain = 229U;

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
    msg.setTimeStamp(0.5178326934388864);
    msg.setSource(5150U);
    msg.setSourceEntity(87U);
    msg.setDestination(45198U);
    msg.setDestinationEntity(96U);
    msg.channel = 95;
    msg.value = -2143304504;
    msg.gain = 120U;

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
    msg.setTimeStamp(0.7513577446429309);
    msg.setSource(34376U);
    msg.setSourceEntity(174U);
    msg.setDestination(49575U);
    msg.setDestinationEntity(166U);
    msg.channel = 28;
    msg.value = -749128406;
    msg.gain = 69U;

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
    msg.setTimeStamp(0.9346217033985019);
    msg.setSource(33675U);
    msg.setSourceEntity(238U);
    msg.setDestination(21837U);
    msg.setDestinationEntity(31U);
    msg.ch01 = 0.6974123874505718;
    msg.ch02 = 0.7695157637668648;
    msg.ch03 = 0.4372864448465895;
    msg.ch04 = 0.8236855103335821;
    msg.ch05 = 0.8783927683485326;
    msg.ch06 = 0.5804342421623678;
    msg.ch07 = 0.6328428855029148;
    msg.ch08 = 0.3265811516226267;
    msg.ch09 = 0.5023229581340167;
    msg.ch10 = 0.27376904097785837;
    msg.ch11 = 0.21201090517419174;
    msg.ch12 = 0.11176536136341331;
    msg.ch13 = 0.22670750359406466;
    msg.ch14 = 0.46999432042555167;
    msg.ch15 = 0.45441825536694336;
    msg.ch16 = 0.9231558524716564;

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
    msg.setTimeStamp(0.578066034417902);
    msg.setSource(13034U);
    msg.setSourceEntity(156U);
    msg.setDestination(1590U);
    msg.setDestinationEntity(170U);
    msg.ch01 = 0.908848804788774;
    msg.ch02 = 0.5859077910870623;
    msg.ch03 = 0.3170421144129134;
    msg.ch04 = 0.23244455904188566;
    msg.ch05 = 0.5065159254841576;
    msg.ch06 = 0.7557829171332932;
    msg.ch07 = 0.14263575696431818;
    msg.ch08 = 0.3910462160314855;
    msg.ch09 = 0.8953197400216764;
    msg.ch10 = 0.13845694729311897;
    msg.ch11 = 0.8416306272861026;
    msg.ch12 = 0.22016432143009657;
    msg.ch13 = 0.1259306107864131;
    msg.ch14 = 0.13124978075065208;
    msg.ch15 = 0.49777443607655625;
    msg.ch16 = 0.5668655472963882;

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
    msg.setTimeStamp(0.23386221111979444);
    msg.setSource(49392U);
    msg.setSourceEntity(179U);
    msg.setDestination(38958U);
    msg.setDestinationEntity(31U);
    msg.ch01 = 0.21344299356723917;
    msg.ch02 = 0.43894270273091884;
    msg.ch03 = 0.1281143002678823;
    msg.ch04 = 0.6788165314565086;
    msg.ch05 = 0.6550212188296882;
    msg.ch06 = 0.3694603362221254;
    msg.ch07 = 0.2804577459324309;
    msg.ch08 = 0.3539955325549323;
    msg.ch09 = 0.3334183868673518;
    msg.ch10 = 0.5532372932056911;
    msg.ch11 = 0.013238285721354104;
    msg.ch12 = 0.8149357758483772;
    msg.ch13 = 0.6829987551889581;
    msg.ch14 = 0.09709398137626757;
    msg.ch15 = 0.5255953794298579;
    msg.ch16 = 0.4105884615912514;

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
    msg.setTimeStamp(0.43765843186946196);
    msg.setSource(17906U);
    msg.setSourceEntity(197U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(67U);
    msg.op = 39U;
    msg.lat = 0.7230026014421004;
    msg.lon = 0.0927709404784598;
    msg.height = 0.43907711124381354;
    msg.depth = 0.45077097774932773;
    msg.alt = 0.4470395725660874;

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
    msg.setTimeStamp(0.1249149406033373);
    msg.setSource(57694U);
    msg.setSourceEntity(62U);
    msg.setDestination(10156U);
    msg.setDestinationEntity(99U);
    msg.op = 115U;
    msg.lat = 0.1397172130163714;
    msg.lon = 0.5479675655872479;
    msg.height = 0.01954704792320827;
    msg.depth = 0.3454554530324274;
    msg.alt = 0.42421266730221097;

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
    msg.setTimeStamp(0.09250606508441761);
    msg.setSource(9715U);
    msg.setSourceEntity(28U);
    msg.setDestination(64837U);
    msg.setDestinationEntity(46U);
    msg.op = 147U;
    msg.lat = 0.27090315677452914;
    msg.lon = 0.296159226846635;
    msg.height = 0.4676179428371411;
    msg.depth = 0.6633526845062763;
    msg.alt = 0.30105958585360937;

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
    msg.setTimeStamp(0.7096371821090635);
    msg.setSource(50887U);
    msg.setSourceEntity(37U);
    msg.setDestination(44865U);
    msg.setDestinationEntity(72U);
    msg.nbeams = 7U;
    msg.ncells = 43U;
    msg.coord_sys = 28U;

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
    msg.setTimeStamp(0.8271936195323136);
    msg.setSource(45404U);
    msg.setSourceEntity(150U);
    msg.setDestination(3281U);
    msg.setDestinationEntity(101U);
    msg.nbeams = 174U;
    msg.ncells = 230U;
    msg.coord_sys = 78U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.0042418364579693835;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.023945782651994763;
    tmp_tmp_msg_0_0.amp = 0.4467095709153268;
    tmp_tmp_msg_0_0.cor = 145U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.26996618978643316);
    msg.setSource(44118U);
    msg.setSourceEntity(233U);
    msg.setDestination(46576U);
    msg.setDestinationEntity(3U);
    msg.nbeams = 213U;
    msg.ncells = 169U;
    msg.coord_sys = 10U;

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
    msg.setTimeStamp(0.9192747970837056);
    msg.setSource(22239U);
    msg.setSourceEntity(214U);
    msg.setDestination(5405U);
    msg.setDestinationEntity(112U);
    msg.cell_position = 0.670957644979329;

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
    msg.setTimeStamp(0.2241188786657039);
    msg.setSource(63300U);
    msg.setSourceEntity(100U);
    msg.setDestination(25245U);
    msg.setDestinationEntity(112U);
    msg.cell_position = 0.9950935124161293;

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
    msg.setTimeStamp(0.0712105101071755);
    msg.setSource(50645U);
    msg.setSourceEntity(203U);
    msg.setDestination(3726U);
    msg.setDestinationEntity(192U);
    msg.cell_position = 0.9543305443655707;

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
    msg.setTimeStamp(0.11586078626450969);
    msg.setSource(5367U);
    msg.setSourceEntity(97U);
    msg.setDestination(32323U);
    msg.setDestinationEntity(209U);
    msg.vel = 0.4098043090642649;
    msg.amp = 0.6834971604025081;
    msg.cor = 153U;

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
    msg.setTimeStamp(0.4594630013843056);
    msg.setSource(57522U);
    msg.setSourceEntity(159U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(208U);
    msg.vel = 0.26356352511599124;
    msg.amp = 0.6228837102926346;
    msg.cor = 202U;

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
    msg.setTimeStamp(0.19979355501024598);
    msg.setSource(35976U);
    msg.setSourceEntity(76U);
    msg.setDestination(13455U);
    msg.setDestinationEntity(94U);
    msg.vel = 0.9544128226451798;
    msg.amp = 0.9834477843989715;
    msg.cor = 8U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.46833430407972776);
    msg.setSource(53834U);
    msg.setSourceEntity(81U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(128U);
    msg.name.assign("ATTJQSTWDUERZZYXBBEUWKJQXWPTSHEGKRRONUTTOMZHJCAOPJBIFMSNQUMCOMUQQOMBVGKONYFAFJLEAMWXDGRMIKIHRNCGVIZJJVLVNTGFPPXBLCHIRWFYWHVEDEGCCQKPNLNPYYEDVAADUTRQWJXZZQVZILLKBIHFAIKGNHSSXOWECZSJXDAZNXYVMRXDUSRMND");
    msg.value = 136U;

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
    msg.setTimeStamp(0.13745250882677462);
    msg.setSource(42208U);
    msg.setSourceEntity(27U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(31U);
    msg.name.assign("BUTCRPYOSIPPONMCSIUVFVHQDRFYTKGVWPLANOHEYQXWIDKAYPEUDIWLTTBJXPOYOXTEQGGLCYFFWGVLRBJZJWHLAA");
    msg.value = 53U;

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
    msg.setTimeStamp(0.0638895939425902);
    msg.setSource(27429U);
    msg.setSourceEntity(31U);
    msg.setDestination(15400U);
    msg.setDestinationEntity(45U);
    msg.name.assign("TNBZCAZVRYTSPRNSXHCBBDJWVPVYOYAZDUPDRJADDITJAISYBWSBNFBIWBKVTSJXJBEEEGCQZELFLXSCHJGUEDONQISUMHHNQFPFTIAOZSUKXHSRMGQGMJZPHCFMVRMXXKYVBOUQXQ");
    msg.value = 159U;

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
    msg.setTimeStamp(0.03154681012293925);
    msg.setSource(35876U);
    msg.setSourceEntity(133U);
    msg.setDestination(13374U);
    msg.setDestinationEntity(243U);
    msg.name.assign("RSXIWGFNKNUKZCQGFVXWAWRJTABKUBZQONEDEPFRDUKVIOIDJTCVXRBGMQPOLYSMZWCHAPORREFQHUAABQ");

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
    msg.setTimeStamp(0.4040550576135903);
    msg.setSource(40071U);
    msg.setSourceEntity(234U);
    msg.setDestination(35509U);
    msg.setDestinationEntity(68U);
    msg.name.assign("SYEJMFRMLGTMTXRGWYZKUBRNHETDJKZUJZEIUGOYZOEFXSSCEWEDVALXIYTIDVPHQOKITKCNCVLNSFYAJIJEPSLBDUZOQLWBHGBNFQYKHASDGVWXXPXVEKFUJCGOVCTPJPBAXDSHLRUFDRNA");

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
    msg.setTimeStamp(0.0797879204022447);
    msg.setSource(48386U);
    msg.setSourceEntity(50U);
    msg.setDestination(60426U);
    msg.setDestinationEntity(5U);
    msg.name.assign("MJWPQCIEHQHMYIKGBSLQBYZFBRMDAWLJHGOKNALKHVUWXAPTLJVSQPOIXRJRXDECEAGGYLDRMILUHTEUDMQSRSZCMVCRXFUZUZWYRKKIOFMVTWGMUGSIQUNVSZDFLJMXUHFREOAEOPRREBTFTNJAJTVXXVWEWHZDCYTIFUCPADBPZODPSENQLQHYQNGCYDNUAVZQPHXVMPJIIKBSCSKDTFKLCFYGOJOWLTGNVZXABKYTBBO");

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
    msg.setTimeStamp(0.854151299102463);
    msg.setSource(235U);
    msg.setSourceEntity(3U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(146U);
    msg.name.assign("UFRQUBMKHNTLIRBKJMDHAFDSYFZDWIRBZTONNYGJSUHMEFLDZEYJZGCUYTPIUTJHILPBVXPFVVFJGCFZIZMKUPVKWGTEALGMHSEDGVXSOOSZNNGXRYJKVAIRMBNPHWPKACTTPGCEQEWMLAZROQSRHWWDAISOJCTSBNMCVVNVPSBHXNM");
    msg.value = 155U;

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
    msg.setTimeStamp(0.8355718118060234);
    msg.setSource(7452U);
    msg.setSourceEntity(171U);
    msg.setDestination(1743U);
    msg.setDestinationEntity(179U);
    msg.name.assign("IKBBPQKMANHPVWTBNAVPDXIZHWXERD");
    msg.value = 153U;

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
    msg.setTimeStamp(0.07181760383539104);
    msg.setSource(14656U);
    msg.setSourceEntity(52U);
    msg.setDestination(7477U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ADWOMFSBYJNYJVKAIXNWQLJYCRPKLWRDMZOUHTMDLPHEYCSNV");
    msg.value = 239U;

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
    msg.setTimeStamp(0.42784257158393013);
    msg.setSource(20093U);
    msg.setSourceEntity(203U);
    msg.setDestination(50663U);
    msg.setDestinationEntity(134U);
    msg.value = 0.2962525113969088;

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
    msg.setTimeStamp(0.3502080501140932);
    msg.setSource(33196U);
    msg.setSourceEntity(25U);
    msg.setDestination(21580U);
    msg.setDestinationEntity(239U);
    msg.value = 0.7759118410628838;

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
    msg.setTimeStamp(0.05122210709082009);
    msg.setSource(58779U);
    msg.setSourceEntity(206U);
    msg.setDestination(26447U);
    msg.setDestinationEntity(250U);
    msg.value = 0.5593499165288814;

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
    msg.setTimeStamp(0.5575930286706489);
    msg.setSource(64052U);
    msg.setSourceEntity(165U);
    msg.setDestination(47826U);
    msg.setDestinationEntity(36U);
    msg.value = 0.36790895940421153;

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
    msg.setTimeStamp(0.8812090410976486);
    msg.setSource(41387U);
    msg.setSourceEntity(232U);
    msg.setDestination(53970U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5068139961995883;

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
    msg.setTimeStamp(0.5350986013704483);
    msg.setSource(64401U);
    msg.setSourceEntity(211U);
    msg.setDestination(31101U);
    msg.setDestinationEntity(99U);
    msg.value = 0.0907965540543183;

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
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.6192916624814728);
    msg.setSource(25430U);
    msg.setSourceEntity(14U);
    msg.setDestination(65407U);
    msg.setDestinationEntity(180U);
    msg.req_id = 3339U;
    msg.ttl = 45906U;
    msg.expiration = 3463391795U;
    msg.destination.assign("FQDEHUURGFJDFYNXQATLRRWVFSVSYNKPUMLHOXWOUCHAFBOURPZMEIRFLDYXLWPSRWBLFWGRWQINXLTXOABQGSCWXJIZMKMXDNBZUNPLUTABMEKTXGCPOZIMSXHIVGJKSJJVMQEWVBVJDVECCKSTDRIHQCTBIJSZBUKJVOYDGLDEANYCDNJBQOQNHSYDTCEHHGGQYKFINWFEWIEROSZQTRZUJGXYPOOBTYY");
    const signed char tmp_msg_0[] = {-36, 68, -13, -29, 104, -18, -14, 73, 66, 84, 74, 72, -78, -98, 122, 34, -123, 10, 71, -37, -65, -60, -106, -73, 45, 85, 44, -105, 114, -100, 58, -33, -86, 80, 88, -21, 98, 113, 12, 45, -108, -53, -58, -104, -98, -76, -8, -40, 39, -90, -76, 101, 68, -30, -128, -52, -24, -80, 98, -7, 86, -58, -120, 17, 99, 67, 123, -79, 91, -96, 114, 77, -32, -1, 94, 22, 68, -7, 110, -38, -74, 77, -114, -73, -9, -97, 116, -64, -11, 22, 54, 12, -28, -85, -2, -35, 118, -3, 31, 124, 19, 81, 29, -59, -119, 103, -128, -33, -68, 20, 17, -118, -113, -38, 74, -86, 12, 32, 66, -81, 102, -1, 22, 48, 57, -4, -62, -90, 99, -44, 3, 81, -88, 108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.474627799450576);
    msg.setSource(59829U);
    msg.setSourceEntity(110U);
    msg.setDestination(21171U);
    msg.setDestinationEntity(19U);
    msg.req_id = 28845U;
    msg.ttl = 59837U;
    msg.expiration = 3289616116U;
    msg.destination.assign("LTSMGLOIGOWICWCSIWFYNLHEAFCBWKQYGAGMDCHKXSBIRYFSUKJ");
    const signed char tmp_msg_0[] = {6, -118, -44, 106, 22, -22, -82, -108, -106, 39, 37, 53, -46, 119, 30, -31, -117, 72, -12, -77, 100, -23, -79, -113, -22, 118, -80, -7};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.4054536332294262);
    msg.setSource(62397U);
    msg.setSourceEntity(80U);
    msg.setDestination(48963U);
    msg.setDestinationEntity(125U);
    msg.req_id = 24858U;
    msg.ttl = 35707U;
    msg.expiration = 689485080U;
    msg.destination.assign("CNGYWAZJOJTHNXGELGCLPCMRCRIWRVAYENOSUJRGPFJKMYIGWBKWXKDPFZAHCXFPOHQWZSWMPLEDMSUKYQNGUFRUEMQEYKQBMHQRAYDKDNJWFTVUYFQYMHFZNHXBGBHLAISVEISAZRGQLKKISUSRPOTLSKJOLLNXPTDPZUBDTUEJPEVBMKGHVOQTROVVFOECFICJIRUDOWBBIVSLBCCAAILTHTOTZMYEBXVGPQD");
    const signed char tmp_msg_0[] = {120, -21, 80, -32, -52, 17, -93, 64, -34, -87, -105, 30, -6, -82, 102, 32, 41, -23, -38, -124, 88, 59, 13, 95, 62, -58, -108, 34, 21, -26, 102, -113, -91, 92, 125, -104, 30, 97, 37, 95, 49, 122, 32, 101, -99, -106, -16, -40, -75, -57, 64, -116, -12, -105, 120, 21, 58, -125, -60, 2, -99, -49, 4, 18, -126, -100, 107, 125, -73, 100, -4, 18, -110, 112, 45, -108, -18, -42, -73, -22, 111, 30, 116, 48, -71, 87, -41, 73, 11, 83, -31, 65, -68, 19, -55, 102, -27, 103, 77, -113, -19, 99, 70, 2, 63, 118, -77, 29, 73, -61, 35, 45, -82, -29, 107, -17, 33, -12, -35, -24, 72, -22, 54, 97, -3, -123, -122, -9, -99, 118, -21, 121, 95, 122, -91, -46, 102, -30, 103, -1, 91, -61, 7, -41, 10, -30, 27, -117, -61, -123, 35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #2", msg == *msg_d);
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
    msg.setTimeStamp(0.797811494445465);
    msg.setSource(41864U);
    msg.setSourceEntity(0U);
    msg.setDestination(15525U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5519991559634008;

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
    msg.setTimeStamp(0.21762933702319232);
    msg.setSource(36682U);
    msg.setSourceEntity(137U);
    msg.setDestination(59872U);
    msg.setDestinationEntity(29U);
    msg.value = 0.767752630565124;

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
    msg.setTimeStamp(0.16451810932470212);
    msg.setSource(23333U);
    msg.setSourceEntity(119U);
    msg.setDestination(41162U);
    msg.setDestinationEntity(16U);
    msg.value = 0.46648022216843366;

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
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.21285498490036903);
    msg.setSource(34657U);
    msg.setSourceEntity(237U);
    msg.setDestination(62042U);
    msg.setDestinationEntity(79U);
    msg.type = 233U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 94U;
    tmp_msg_0.op = 221U;
    tmp_msg_0.request_id = 2265U;
    tmp_msg_0.plan_id.assign("XFHEBWMOKYQGOPRFSLNLGXZLJSOZPUBXTA");
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.03325362991326808;
    tmp_tmp_msg_0_0.y = 0.6598916169282539;
    tmp_tmp_msg_0_0.z = 0.5125521421327577;
    tmp_tmp_msg_0_0.t = 0.8566968089814383;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("SHFCHNFEVIOMQBTSBBIEUGLOCNPAWDMAXFXIPJTWGYMAPNIYMVZSMPVCJWPQEUEXEOVHRHUIJYLYZDLAUFQKBSUTQTKJTGJTBTTAHZTYKQZHKXSKYFJCMVRAUNQOLPORTSRIESSGXBQKSOYKEUJKNYHRPOCYZKCDDUZLJFZY");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.16796920534973014);
    msg.setSource(26658U);
    msg.setSourceEntity(212U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(73U);
    msg.type = 181U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 58U;
    tmp_msg_0.op = 67U;
    tmp_msg_0.request_id = 22963U;
    tmp_msg_0.plan_id.assign("EKWRADHFJWOGJBIBIWNHDIBFCPFIPKBCDGDYTNWUYESVFJTAKQAJONHLQVIUFIXGZYQMARURBTALYBCCOSTXJEYEUUZEQIASHDXFMVQOZBWMDTJVUYNVBMLHXHJAQGRZOXPMRLGGEWRETZUCGSLPMTPXRNBLZKAYXGICCOTUENHLQNMGMSZUSRTKVVCKVHKJDMFWWGSPDOYWXSECRNCLFISLNOSQYHZ");
    IMC::QueryEntityInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 196U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("FZJIRNLFDOZXINQSIHUGFEMFLOXXCYLNGMKCUBAOVTQWKVEWMZGZUWVMHRVSJUHINUAJWNSRMOBAYHDMNDCSWOPWOSEYOTDGNUDTVVFASRFKXQQGVCQHBAXSBHQNIRWTUVCYYMXBRDLTLAUCVPPHKNXKYKIEADFJRPEGTETNTXOYLPKJGQSWPXZJTBAIFSEOQQPZCQGPMRBUHZPEJBMRCXIEYBGDBSZY");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.27096017268191763);
    msg.setSource(35260U);
    msg.setSourceEntity(200U);
    msg.setDestination(43394U);
    msg.setDestinationEntity(230U);
    msg.type = 202U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 108U;
    tmp_msg_0.op = 29U;
    tmp_msg_0.request_id = 24588U;
    tmp_msg_0.plan_id.assign("JRTMSWDLHDWQBGGUMCCCVEVNPXYKPHJHTOWSQVAFGZWLAQCVUMPEMRSIZPWBPDDLUMKYWEWOJXYKROCVIQMSPRMJNLPRMARQOZXBULERPLZDSKIBXMTNUCTNCDNOLCABUYOTOVEVZXZXDLSHUHHRHBUJUFITFJZVXWETXYDFUATXBNDIGOYYPBQFNTEDGICBFKGPRGFHAKMWJGFYEA");
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.19190779180247464;
    tmp_tmp_msg_0_0.lon = 0.5483376492707249;
    tmp_tmp_msg_0_0.speed = 0.6173408787075482;
    tmp_tmp_msg_0_0.speed_units = 213U;
    tmp_tmp_msg_0_0.limits = 203U;
    tmp_tmp_msg_0_0.max_depth = 0.5241562272274894;
    tmp_tmp_msg_0_0.min_alt = 0.9606010329546327;
    tmp_tmp_msg_0_0.time_limit = 0.8614735422598917;
    tmp_tmp_msg_0_0.controller.assign("OABKKWSWLVKWMGHTNFTOZZPCMYQAOVSHMHBYEYWIUAVARFXSFGQJVOWSNUBNRTGCWDSHLZVVKULMCWAAEAYXDYRGQJDRXVWXQLFTIXLPYRJGNDOPIRZFPXSBGWRITRFKULYMMPXPHSCUICFZRLOCZSCBGNPISENZYNXFKGBIXIZHEMKLDMKQHBJDJUBCFOKDDHDZJI");
    tmp_tmp_msg_0_0.custom.assign("NZQJAVLTXKTDYBIGIHTKBTFHBLXXAXOZIYEHICJCQNLBUKGESMCVU");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("PPRQFIEBRUDXLVQOZZDHBJNZDKTUSMQLQPXVKRXVYMVQDDREUAKCGSCGWMFLGOCAIVLOEIOTNMGPPNGCRVBH");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.6856339697737126);
    msg.setSource(55620U);
    msg.setSourceEntity(87U);
    msg.setDestination(60993U);
    msg.setDestinationEntity(247U);
    msg.name.assign("LNIUNBBGJGRMURFMUWUYSSRXAQFYPADHUEFFCCHDMN");
    msg.type = 84U;
    msg.default_value.assign("FADWBGTHLGBJXOSOXVJVRMTAVIQVCZCTGPFHWJUCJRKODXWAPAVDSBVWAAJYNOINHNBCPUHCZAXSILUHKQTEOREIAQVEKOHWKJYFUWOUTYDRYZEHSLYDYWLMEMCUPLGMUJFZNKDSBGZJPBUQZFDDVICJPHRAJOOYIVMMRQDKPNLNGSXMNMHYFMNUEAKTGGOQKBKYNIERCICUEGTZYRIGECPQLFPW");
    msg.units.assign("IMQYWQRLGOKEKTDDSCYFCYHVRZHKIGMMZDSGHRUMGJTLKAOIZDORPQOWCZIIYAPGKDVNXVSZLPPRQCDOQJUWWM");
    msg.description.assign("IPMRNEPEQHGBWNEUXNUTIMDIVJCHYKQMEXKHOREORQAZWHGJOPO");
    msg.min_value = 0.9868770392212755;
    msg.max_value = 0.7342640837161877;
    msg.list_min_size = 598883110U;
    msg.list_max_size = 3487551581U;
    msg.visibility = 110U;
    msg.scope = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.9527319588211238);
    msg.setSource(56546U);
    msg.setSourceEntity(174U);
    msg.setDestination(26680U);
    msg.setDestinationEntity(202U);
    msg.name.assign("EFMZYCUQTRPUXRKWMJVQGIBMSZHCWGDYDGACSDFMCCVBXWBYNEPHTDWJSORWKJNBMHBUXNGBIOXLAUIFZKLFGQEBVXPFLUBHJCNPJZFJUYQMKHHOEHIMFKGLAATFVPIOPVPDLDSVOWZ");
    msg.type = 65U;
    msg.default_value.assign("ZGKXTDQBBVIEMWHPMFFPLSQQJHKPJDRGISAHTBVEMXVMANKPQEKUNXVGYCMMFSYUAFCDZNDSRVBKLXQCMNVBJHTJNBJLQQGYEIAWRCEEOMRGSXEXFSZYWHFRUXRHABWECPCVAWOLLUNXOOCRULTYZPBKPPYWSJINWMLCPDTDOIZDZWMVDNLYRBHLTTOAOQKY");
    msg.units.assign("OVTXWCMWRISSVJUJEGPLUNKRZRNCSEYOIFABZEYUOHLMDSTZJLWUYOQGQUGWGVUQATIVAXBQSFYIVTQPCKJFLZFOYSHCJTKIEAQDMHUWEPGRPEPNCDMLOFLAYBKVRLUXPXZKTGRYNBEMYJRSYMSXHJDIDBEVPPERCKZLHBZXPFBIRDBTQWFWZXFNJINKEMUAFDWQYACLHOGVZDNBAHRMCOFGKPIDJTVHKWKOAQAMSWQVNXOTHM");
    msg.description.assign("SOOZMTIEJTGFHAHXDTZLORLUEUGYAHSSEZWIZOAQHVOAQNNHSXGBOCRFUXMPBGLLKZNQJYNXRHZBVFVMLCJCWPRUCJMEETEJHGYWZQSSKCUDDJAEGUVXDNKQBZGKPJWHTDWDFM");
    msg.min_value = 0.8553735488697193;
    msg.max_value = 0.3846452522514586;
    msg.list_min_size = 2409114393U;
    msg.list_max_size = 2889910715U;
    msg.visibility = 91U;
    msg.scope = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.37498077991995515);
    msg.setSource(48323U);
    msg.setSourceEntity(103U);
    msg.setDestination(48521U);
    msg.setDestinationEntity(202U);
    msg.name.assign("SCPEKRFZXPFQPOYLXILMFEDSZEJFKKNSKISQPUHZUGAWYYFTBDOCQJERPNFKHUSPTMLGAMOQVXQVZANJEXZCDOQVHTIROMSEXUMYCIRNRQFHKRHBANWGCYTJWCCTEKBRLTTJBZIWZIEWFGFSHMGIHGDBQIDLZDEBZGLYSXXYIRJLAASTVTJWBROGBVVGEYPLDOZDNUUGPONMWHUYDDOCXQYNWMKPVXOJKUR");
    msg.type = 10U;
    msg.default_value.assign("KUYHOERNXOXTAZNDRUAIJTOZYRABECSMYNXPWQEMQCVSAZIQXELDPKZNJFQENZXVIUHJIRNIBJRWDZDMEGLLXGCBMUOSABBWVUWMPVMBVOFWTYS");
    msg.units.assign("SADCVFTPOQOJGPBRLDYVIEOWUJYXNHYHIDCUJEFLAMJZGADLFAUMYCKTTKPKWQQQFHTBNRECITDOSWXAOBEBPBCVHDNKEYTJEGMAHTIPFVZUYXAFNPEQCHWMSORCZVVZMNYNLDKCLVF");
    msg.description.assign("VUNESOJHVDMEDZYALPVQV");
    msg.min_value = 0.9178698206873726;
    msg.max_value = 0.6907380580539446;
    msg.list_min_size = 4243721588U;
    msg.list_max_size = 716800965U;
    msg.visibility = 211U;
    msg.scope = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.511032035755085);
    msg.setSource(63155U);
    msg.setSourceEntity(142U);
    msg.setDestination(8004U);
    msg.setDestinationEntity(166U);
    msg.op = 48U;
    msg.request_id = 2072009603U;
    msg.entity_name.assign("TWCDHOTTXHVWLIMVQYIAPERRQRDFEAOBNHBFWPBWZUDQLJJFCIYUTICGQLXBNWHVYEGYTUPLBHVPPPGGDKAAWVOMJMVOMQZILTSHZFEUAODUUUPZTFGYEGHRSNBKYCMLNUEJAKGXQJDHBBSXXYJVSTJEFXUWXGRPRGFUMOKVQBWEISNKCXAZCTLSSAIZILMSCOCPJORWKENVQAWHZZRTNRQYYMAFSMKKFPDXYNSLXNHKGJQDDIOZOIEBKRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.12985666268795804);
    msg.setSource(15282U);
    msg.setSourceEntity(98U);
    msg.setDestination(63807U);
    msg.setDestinationEntity(27U);
    msg.op = 157U;
    msg.request_id = 2792131517U;
    msg.entity_name.assign("NHWYCSWDXSTHTBGYLLOMVIASVFETCXYMWOXEPOOAAACCHHLMBEGRGFXEWNGJZSTUMUUFPKYWUVZPRFIXRNWYNJDAKDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.9406621348430908);
    msg.setSource(41127U);
    msg.setSourceEntity(166U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(107U);
    msg.op = 231U;
    msg.request_id = 2108107074U;
    msg.entity_name.assign("VVJPKAMDIJRNDXGPHIYQPBDCWLGOLKIHFRBSNZJXJOJBXVXPYZOACSHMJMOGPIBLQSPNWNBTGLUFMQQBMXRUKHLTYHQKRKCGZYEQZTQJGEHFFSZIRUMWNOBKBNEUCONKIORSVEVMRNHJITUTASCXNCTCTYRFJVGPAFWEJMWTLMDEAITSXSYQPFRRUWHFGFW");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OBYACLXQYHUXRFNJPTOEEDLKXKKEOBHGQEAMJQVIYWWJNCTGIPRMAPNTGBGVTQCUALEYZNDOCLGTJYLBGIZNPXSDJDOOYVBOCQSNKIMPBSSZEWNROMRBUYMHLLUXBHWFRFKQZVSUKCBVDBIUMWUIZVEAPPFCQOZDEKMKIAW");
    tmp_msg_0.type = 104U;
    tmp_msg_0.default_value.assign("WIXFMBCWHDKUXPVQLKMGMZQAGVOEHIZRPMCYXPWZNERLAHJSGYCVEKFSVYBFYRQCURHKWLJSHAYKZQPDIAXWRNLLFZNPOEOFDCEGIJDJMUSMBJDJIUQAKQVHXFONYBBCPQCZLOEFAJRLBKTIRHWRHNLFITUGPSGZYTYXBXNVKQJXMKGOCCNUUWGOIADPXJDNUMUIZQBLAO");
    tmp_msg_0.units.assign("STWLSQJATSDQXRWUZHQWABGSENOAMKJGKESUMHFBEKXWVDMNVNDQZRKPVFGZCOJVKWXNQAJFXHZXZGMBIBFRJZGKPSXDCGQEINYOZLHLAXENQEVCALVGSTNZWBTDDDFZOOEDOHXFEAHRDYUJPJXVPNFCBMIQYJMTKCTPENYVLFUEZOHPBUCQAIULXSCTYPUWGLBVIVGPFIFRHTRMUPYICLLKAWYIYRWPWOJ");
    tmp_msg_0.description.assign("ZAFLHHUDOSUKGWEJHZSNREMEYDHIENISKCXXZIWMWVNNYLIXWEXAYETBEQJTSLHLKGSEJYMRCOYHTBIBWDQTUVHHECCNYLUUKZDQMQATNBNOWPJPYBDCFKPUUBRBUJXRGIZQCXVKMLDKG");
    tmp_msg_0.min_value = 0.9339090609484203;
    tmp_msg_0.max_value = 0.48898645409268593;
    tmp_msg_0.list_min_size = 4007645428U;
    tmp_msg_0.list_max_size = 3472858554U;
    tmp_msg_0.visibility = 85U;
    tmp_msg_0.scope = 83U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7324668839339401);
    msg.setSource(23266U);
    msg.setSourceEntity(203U);
    msg.setDestination(2858U);
    msg.setDestinationEntity(166U);
    msg.restriction = 181U;
    msg.reason.assign("WLCAIGZAZNMMFCPMSFAFRDTOWJOKUBRSLUGDGWDYUJ");

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
    msg.setTimeStamp(0.6840696859022292);
    msg.setSource(47519U);
    msg.setSourceEntity(195U);
    msg.setDestination(32319U);
    msg.setDestinationEntity(253U);
    msg.restriction = 49U;
    msg.reason.assign("KFDPAEGIGTCFRDYXQASYRXULQYCAEJGSWURVJFUIIFGQBQBMPXKFCEJCRYUXTIDLVURRILRAIUUWZYJACIPMBXTVHYAOTENMYWDBOGQHSTPQEWOVGBWNJ");

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
    msg.setTimeStamp(0.3301654457203883);
    msg.setSource(15394U);
    msg.setSourceEntity(42U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(163U);
    msg.restriction = 254U;
    msg.reason.assign("LCXAAUFSVLTVZXUQYMOSTEWNXRCAUDMPPZCKOQHKINQLORIDMQOVEINFPJGGHOZVRTDINKFWEWXTUEGMOQOQBELZETJCWMCDQIWFNYVSNFOLXNARKJEBNDZJKKZJALPURLELTCHAJDKYXDPPXTLPCGBES");

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

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.6937244761607774);
    msg.setSource(1428U);
    msg.setSourceEntity(186U);
    msg.setDestination(2048U);
    msg.setDestinationEntity(221U);
    msg.mac.assign("KEORKPZPRGMEXXYYBKEHXTHQRTUAQYUMHNMRYUTEYOBDATM");
    msg.ip.assign("SWUMUDOHABVLSFTNWHRGPSCMUKSNGQASBIAEKAWDZLQPBRHDVHEDYMYNJKJPELFPKZYXIRPMNTDVMONTJQPQCGVJZCLXEOUUSJMGUIRCLWVIEAFJCAF");
    msg.ccq = 79U;
    msg.noise_floor = -13910;
    msg.signal = 16149;
    msg.rssi = 45037U;
    msg.rx_rate = 15165;
    msg.tx_rate = -6438;
    msg.tx_latency = 21957;
    msg.tx_power = 22353;
    msg.rx_count = 4186449316U;
    msg.tx_count = 700819719U;
    msg.distance = 16653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.21317628745971517);
    msg.setSource(37908U);
    msg.setSourceEntity(128U);
    msg.setDestination(16920U);
    msg.setDestinationEntity(8U);
    msg.mac.assign("ICQKQCOTFBHNKRDHAZBZGJUNDKOVRFHT");
    msg.ip.assign("VIANHEYGGHJLMQMUORWBZPBYFQIMPBOEZKZPLUCSGWVYAQYRHCAAZVMOFNCXMYVFUZXWCCMQVDTJWZGRKQBHOVJHUNYSUQTRWXFNEIQRGSCSXIXHEDZOLNMYSLKOHCID");
    msg.ccq = 7U;
    msg.noise_floor = -24818;
    msg.signal = -20052;
    msg.rssi = 26406U;
    msg.rx_rate = 27375;
    msg.tx_rate = 21683;
    msg.tx_latency = 244;
    msg.tx_power = -17668;
    msg.rx_count = 735530614U;
    msg.tx_count = 2810613940U;
    msg.distance = -17497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.5513232074855244);
    msg.setSource(65448U);
    msg.setSourceEntity(108U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(34U);
    msg.mac.assign("COZSCXWKWPFDNPEUBUWYKSYXPZEKQZGSMUTQQVTIZXC");
    msg.ip.assign("PDSSNKGMIUUXJSVMYDPUKZODCWFZPBAWLSJTKQHPYPAOPIPCDVDKYHSPOCYREXFBQRUKRAXZJVBQLYTRHFRHTQGITZXBCQTCTMXACJIENXANWKUEWMJOWGBAUFJXWACBAVGVYZLXEEIOICLTDFMKLOSSLRPATWAIBVJFHFLBNIY");
    msg.ccq = 156U;
    msg.noise_floor = -11828;
    msg.signal = 8674;
    msg.rssi = 13013U;
    msg.rx_rate = 16117;
    msg.tx_rate = 16297;
    msg.tx_latency = 27621;
    msg.tx_power = -1480;
    msg.rx_count = 2399731433U;
    msg.tx_count = 2578498066U;
    msg.distance = 5754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.020709076066351084);
    msg.setSource(52688U);
    msg.setSourceEntity(56U);
    msg.setDestination(28546U);
    msg.setDestinationEntity(122U);
    msg.essid.assign("KMNREIJDKVEAXCHFOZUCNAYHTDNDCGRGSZIEGHPQDYVUDQIIQYKFIMVGAYKTRZSUUXMQPZWHU");
    msg.mac.assign("KUOQGKGERYDFEAOMNJNFJVUNDGXICGOIUTDRUYVWVREWLSWWSQUSXHIZHPPFFQTIDFEMXBJYWLPYCSZQPPQBVRFGXCAKGIOHIPGNF");
    msg.signal = 14511;
    msg.noise = -15454;
    msg.ccq = 117;
    msg.channel = 81U;
    msg.freq = 0.3807023745265462;
    msg.security.assign("JZLUTAWVDFLVJBCUJDLVRXWNFYMAUFZCPKZDQJIOUWWCSOIGHABRXTIVLVVYHQJNERNSTQYQBARXKSMWSZIIOBNKESSTOMKEVABGMXFKRIPPCXXPMGYIMELNBOQZRJHVDTKQPQXDNDPAUWMRGHEKZWIBTMIDRNSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.45375533751675656);
    msg.setSource(37460U);
    msg.setSourceEntity(112U);
    msg.setDestination(57145U);
    msg.setDestinationEntity(33U);
    msg.essid.assign("TUNRZJHMPELBOZCLWNLHMUFWBADBXQNIQSPLYXSNKDVHEGDGVRCWUMSFCTOUIMCHPJQBVGAVFVWOXURSRXEPNJIRGIOYQTFEQVPSEFYPADDMEJRZIILOAMBZKTGWNAXYYJAHDUCQOXLTTTAIZCTFRLYPDPHKWKEIZARCGNSMCIXZEHWOQUANUFVYDZLSYQKOLXBJKTGBPUCHEIJNGTJDBXMDBMUQZXHWGCVAKZWSQFRFVBPSLYKVJNKWK");
    msg.mac.assign("ZHGXRNGJILBFWQCFCIBEONMHTXRXQJKMTEXUVTYRMTKXHUPSHSZKDCZYYVLOMELQNAIMQDDFUVYHVPNLERGDXDVPPAEQHGJJCOFXYSKKECVLXNPXLAOTEAVEIYRQPCIWSDFFGOSLBDKEMASBLGUQYDFAKQBPORYRIZJZJDWJGAJPZMRQDITBUQJONRCWRYCVYKVKZWIUCHAANWWFHZEZBWGUOTBPTJWWZO");
    msg.signal = 22366;
    msg.noise = -2247;
    msg.ccq = 126;
    msg.channel = 125U;
    msg.freq = 0.8978790983252054;
    msg.security.assign("NCLKALEOSRTDTHREKOXBZVPYJNIQQJDCPJFDTYCULBQICJWVNEHUMCFNNGXPIQWXSUEBAXXGSUMCPTSTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.20027145862959683);
    msg.setSource(60705U);
    msg.setSourceEntity(211U);
    msg.setDestination(51838U);
    msg.setDestinationEntity(217U);
    msg.essid.assign("IJTQCQNWBVFMLIZIJCFCGBYQYWFYNOPJESFZRKXHIWPCKBKCGRXZRMURVLVKCSPVACFJTZOSJLYUBZEEYUNHOWJEDIEQMSNFPDPQMIERWCRSRKDWCZBVTHZMLLUODRCEZXGITBZDPFATGTKPS");
    msg.mac.assign("XWJTKRRMOAQTRHLOQWUSAVWPACCCBVXNRWZHYLVKPLQZPBVJPDCDUKSBZXBFQKRSDTYFKZGYBICZYAJWQMBGMHUOTNHM");
    msg.signal = 31481;
    msg.noise = 16220;
    msg.ccq = -32;
    msg.channel = 241U;
    msg.freq = 0.5643934209658136;
    msg.security.assign("VMJOEYURFOFGRMOFTFITDPZDVENCBXLQUDUVCIOGEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.21715491684288002);
    msg.setSource(35083U);
    msg.setSourceEntity(56U);
    msg.setDestination(31815U);
    msg.setDestinationEntity(52U);
    msg.frequency = -283194072;
    msg.pulse_length = -1612788556;
    msg.time_delay = -1775353407;
    msg.simulated_speed = 1006852164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.27046357744197236);
    msg.setSource(20468U);
    msg.setSourceEntity(206U);
    msg.setDestination(36769U);
    msg.setDestinationEntity(63U);
    msg.frequency = 1634257486;
    msg.pulse_length = 348906704;
    msg.time_delay = -1666944484;
    msg.simulated_speed = -507974080;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.8422714568746441);
    msg.setSource(33037U);
    msg.setSourceEntity(150U);
    msg.setDestination(7429U);
    msg.setDestinationEntity(234U);
    msg.frequency = 592827384;
    msg.pulse_length = 750385397;
    msg.time_delay = 1941489957;
    msg.simulated_speed = -1756350650;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.4690329137961159);
    msg.setSource(41893U);
    msg.setSourceEntity(81U);
    msg.setDestination(196U);
    msg.setDestinationEntity(186U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 9076U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7449969383803587;
    tmp_tmp_msg_0_0.lon = 0.823312848174374;
    tmp_tmp_msg_0_0.alt = 0.2661066910508302;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    msg.geo_features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.28375657043828806);
    msg.setSource(46878U);
    msg.setSourceEntity(117U);
    msg.setDestination(42971U);
    msg.setDestinationEntity(239U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 3170U;
    msg.geo_features.push_back(tmp_msg_0);
    IMC::CoverageState tmp_msg_1;
    tmp_msg_1.feature_id = 47944U;
    tmp_msg_1.state = 247U;
    msg.cov_states.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.3537363387503276);
    msg.setSource(64946U);
    msg.setSourceEntity(150U);
    msg.setDestination(21171U);
    msg.setDestinationEntity(63U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 46557U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3654162495745136;
    tmp_tmp_msg_0_0.lon = 0.956850098785919;
    tmp_tmp_msg_0_0.alt = 0.5350440888410258;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    msg.geo_features.push_back(tmp_msg_0);
    IMC::CoverageState tmp_msg_1;
    tmp_msg_1.feature_id = 24227U;
    tmp_msg_1.state = 15U;
    msg.cov_states.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.9557571281908288);
    msg.setSource(11771U);
    msg.setSourceEntity(162U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(108U);
    msg.feature_id = 29815U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.001982709681699557);
    msg.setSource(47753U);
    msg.setSourceEntity(170U);
    msg.setDestination(14619U);
    msg.setDestinationEntity(84U);
    msg.feature_id = 22916U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9602742682381624;
    tmp_msg_0.lon = 0.9206331695857187;
    tmp_msg_0.alt = 0.872760611710518;
    msg.points.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.7962337430355286);
    msg.setSource(36380U);
    msg.setSourceEntity(16U);
    msg.setDestination(57899U);
    msg.setDestinationEntity(158U);
    msg.feature_id = 9562U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4648467124263568;
    tmp_msg_0.lon = 0.0418908304513389;
    tmp_msg_0.alt = 0.7376118008962913;
    msg.points.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.14205022717077787);
    msg.setSource(10200U);
    msg.setSourceEntity(162U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(114U);
    msg.feature_id = 44371U;
    msg.state = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.15861727463574538);
    msg.setSource(62462U);
    msg.setSourceEntity(205U);
    msg.setDestination(2994U);
    msg.setDestinationEntity(247U);
    msg.feature_id = 15847U;
    msg.state = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.16557838124317448);
    msg.setSource(34920U);
    msg.setSourceEntity(185U);
    msg.setDestination(1046U);
    msg.setDestinationEntity(176U);
    msg.feature_id = 22820U;
    msg.state = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdim msg;
    msg.setTimeStamp(0.9241606417314633);
    msg.setSource(58435U);
    msg.setSourceEntity(90U);
    msg.setDestination(41825U);
    msg.setDestinationEntity(147U);
    msg.tid = 33127U;
    msg.op = 4U;
    IMC::SurveyTask tmp_msg_0;
    tmp_msg_0.task_id = 26134U;
    tmp_msg_0.feature_id = 37886U;
    tmp_msg_0.sensor = 250U;
    tmp_msg_0.resolution = 0.13089580510511079;
    tmp_msg_0.deadline = 0.5915847287119868;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdim #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdim msg;
    msg.setTimeStamp(0.24868969868593938);
    msg.setSource(113U);
    msg.setSourceEntity(214U);
    msg.setDestination(24993U);
    msg.setDestinationEntity(87U);
    msg.tid = 50568U;
    msg.op = 3U;
    IMC::MoveTask tmp_msg_0;
    tmp_msg_0.task_id = 15455U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.07922407818219979;
    tmp_tmp_msg_0_0.lon = 0.7944160560028581;
    tmp_tmp_msg_0_0.alt = 0.9467867087733608;
    tmp_msg_0.destination.set(tmp_tmp_msg_0_0);
    tmp_msg_0.deadline = 0.6199153637348518;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdim #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdim msg;
    msg.setTimeStamp(0.6268353238454829);
    msg.setSource(54767U);
    msg.setSourceEntity(221U);
    msg.setDestination(32357U);
    msg.setDestinationEntity(65U);
    msg.tid = 20794U;
    msg.op = 195U;
    IMC::TaskStatus tmp_msg_0;
    tmp_msg_0.task_id = 13213U;
    tmp_msg_0.status = 160U;
    tmp_msg_0.progress = 253U;
    tmp_msg_0.quality = 94U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdim #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.18384620080603098);
    msg.setSource(4840U);
    msg.setSourceEntity(208U);
    msg.setDestination(41486U);
    msg.setDestinationEntity(211U);
    msg.op = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.4895542172345537);
    msg.setSource(28412U);
    msg.setSourceEntity(62U);
    msg.setDestination(23292U);
    msg.setDestinationEntity(217U);
    msg.op = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.6205232792465158);
    msg.setSource(44236U);
    msg.setSourceEntity(194U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(157U);
    msg.op = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.8309986730969492);
    msg.setSource(33524U);
    msg.setSourceEntity(237U);
    msg.setDestination(31509U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.49850015977867346);
    msg.setSource(43727U);
    msg.setSourceEntity(177U);
    msg.setDestination(60272U);
    msg.setDestinationEntity(157U);
    IMC::CapabilityAreaSurvey tmp_msg_0;
    tmp_msg_0.sensor = 253U;
    tmp_msg_0.resolution = 0.36758182151362273;
    tmp_msg_0.res_bathym_factor = 0.6427392533594094;
    tmp_msg_0.cov_rate = 0.5165068105408589;
    tmp_msg_0.cov_bathym_factor = 0.4574958716458948;
    msg.capabilities.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.4500237937374766);
    msg.setSource(7607U);
    msg.setSourceEntity(32U);
    msg.setDestination(2042U);
    msg.setDestinationEntity(230U);
    IMC::CapabilityPointSurvey tmp_msg_0;
    tmp_msg_0.sensor = 227U;
    tmp_msg_0.resolution = 0.347460497671245;
    tmp_msg_0.duration = 0.3837708586763132;
    msg.capabilities.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.6258601594204217);
    msg.setSource(16739U);
    msg.setSourceEntity(230U);
    msg.setDestination(44279U);
    msg.setDestinationEntity(90U);
    msg.sensor = 19U;
    msg.resolution = 0.9716434374677859;
    msg.res_bathym_factor = 0.651852644036758;
    msg.cov_rate = 0.020290079486421697;
    msg.cov_bathym_factor = 0.8145072489712623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.5793417273991146);
    msg.setSource(23348U);
    msg.setSourceEntity(32U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(156U);
    msg.sensor = 78U;
    msg.resolution = 0.3461327511986618;
    msg.res_bathym_factor = 0.16348680341411526;
    msg.cov_rate = 0.5376014807478513;
    msg.cov_bathym_factor = 0.9193747471672022;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.27747764775981243);
    msg.setSource(10965U);
    msg.setSourceEntity(92U);
    msg.setDestination(47306U);
    msg.setDestinationEntity(6U);
    msg.sensor = 190U;
    msg.resolution = 0.1785302871164577;
    msg.res_bathym_factor = 0.4768853873334836;
    msg.cov_rate = 0.9468082573901664;
    msg.cov_bathym_factor = 0.20846308591071616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.2577917813653793);
    msg.setSource(59692U);
    msg.setSourceEntity(84U);
    msg.setDestination(28876U);
    msg.setDestinationEntity(32U);
    msg.sensor = 191U;
    msg.resolution = 0.08440806524658351;
    msg.duration = 0.4262704832313844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.2670306192466416);
    msg.setSource(15293U);
    msg.setSourceEntity(104U);
    msg.setDestination(49589U);
    msg.setDestinationEntity(97U);
    msg.sensor = 239U;
    msg.resolution = 0.44997824583818247;
    msg.duration = 0.9371908401008968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.6978836404007253);
    msg.setSource(26488U);
    msg.setSourceEntity(253U);
    msg.setDestination(15710U);
    msg.setDestinationEntity(140U);
    msg.sensor = 111U;
    msg.resolution = 0.3346764809626528;
    msg.duration = 0.8082431756708967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.2765758808598888);
    msg.setSource(33185U);
    msg.setSourceEntity(195U);
    msg.setDestination(62528U);
    msg.setDestinationEntity(23U);
    msg.speed = 0.4828659328284973;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.3869866507125267);
    msg.setSource(53425U);
    msg.setSourceEntity(162U);
    msg.setDestination(413U);
    msg.setDestinationEntity(249U);
    msg.speed = 0.2714019526351361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.06277304247374249);
    msg.setSource(31465U);
    msg.setSourceEntity(136U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(57U);
    msg.speed = 0.5719942383865407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.8732647562375759);
    msg.setSource(26071U);
    msg.setSourceEntity(173U);
    msg.setDestination(57199U);
    msg.setDestinationEntity(180U);
    msg.task_id = 16231U;
    msg.feature_id = 36381U;
    msg.sensor = 50U;
    msg.resolution = 0.1585952688173431;
    msg.deadline = 0.43023681442906814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.5224240453559553);
    msg.setSource(44368U);
    msg.setSourceEntity(181U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(229U);
    msg.task_id = 12994U;
    msg.feature_id = 6442U;
    msg.sensor = 252U;
    msg.resolution = 0.43398447645877103;
    msg.deadline = 0.9767320673116326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.9159611928386557);
    msg.setSource(21482U);
    msg.setSourceEntity(144U);
    msg.setDestination(27019U);
    msg.setDestinationEntity(36U);
    msg.task_id = 7365U;
    msg.feature_id = 38108U;
    msg.sensor = 139U;
    msg.resolution = 0.300137993440622;
    msg.deadline = 0.5202406750686754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.9027121126316408);
    msg.setSource(28719U);
    msg.setSourceEntity(81U);
    msg.setDestination(22158U);
    msg.setDestinationEntity(30U);
    msg.task_id = 33152U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6148678313811528;
    tmp_msg_0.lon = 0.45129448311233145;
    tmp_msg_0.alt = 0.11101215898882477;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.3566582559328415;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.7979309110753096);
    msg.setSource(35494U);
    msg.setSourceEntity(224U);
    msg.setDestination(10533U);
    msg.setDestinationEntity(104U);
    msg.task_id = 4673U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2155254466961387;
    tmp_msg_0.lon = 0.4209076345148993;
    tmp_msg_0.alt = 0.7744566870281153;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.028076428693758926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.40797275854131654);
    msg.setSource(61530U);
    msg.setSourceEntity(134U);
    msg.setDestination(34754U);
    msg.setDestinationEntity(150U);
    msg.task_id = 19919U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3463663494692706;
    tmp_msg_0.lon = 0.49409895995345754;
    tmp_msg_0.alt = 0.5558197171689366;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.33976706957787706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.5142623345255313);
    msg.setSource(41354U);
    msg.setSourceEntity(118U);
    msg.setDestination(14775U);
    msg.setDestinationEntity(165U);
    msg.task_id = 62425U;
    msg.status = 85U;
    msg.progress = 7U;
    msg.quality = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.3732257501850378);
    msg.setSource(59004U);
    msg.setSourceEntity(114U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(31U);
    msg.task_id = 23627U;
    msg.status = 192U;
    msg.progress = 172U;
    msg.quality = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.997102912037888);
    msg.setSource(48019U);
    msg.setSourceEntity(49U);
    msg.setDestination(63736U);
    msg.setDestinationEntity(177U);
    msg.task_id = 16515U;
    msg.status = 109U;
    msg.progress = 228U;
    msg.quality = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.48566774012834);
    msg.setSource(41581U);
    msg.setSourceEntity(227U);
    msg.setDestination(56336U);
    msg.setDestinationEntity(238U);
    msg.task_id = 54867U;
    msg.feature_id = 53570U;
    msg.time_window = 45198U;
    msg.deadline = 0.7921486851812473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.8333926829564365);
    msg.setSource(42612U);
    msg.setSourceEntity(142U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(58U);
    msg.task_id = 13939U;
    msg.feature_id = 54427U;
    msg.time_window = 58708U;
    msg.deadline = 0.32045550679684054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.6434678843293364);
    msg.setSource(61723U);
    msg.setSourceEntity(1U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(14U);
    msg.task_id = 22990U;
    msg.feature_id = 23586U;
    msg.time_window = 24565U;
    msg.deadline = 0.10907198543958874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #2", msg == *msg_d);
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
