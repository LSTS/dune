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
    msg.setTimeStamp(0.031379849642169555);
    msg.setSource(25551U);
    msg.setSourceEntity(225U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(131U);
    msg.state = 144U;
    msg.flags = 220U;
    msg.description.assign("AVCKHXNLNESBFHWCVQSCJRHAESKVZHTTLAZWF");

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
    msg.setTimeStamp(0.6116435172381918);
    msg.setSource(13744U);
    msg.setSourceEntity(77U);
    msg.setDestination(31213U);
    msg.setDestinationEntity(241U);
    msg.state = 189U;
    msg.flags = 121U;
    msg.description.assign("NBDWSQHJYEZHNYLQKDGFGNTH");

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
    msg.setTimeStamp(0.022989645681686932);
    msg.setSource(64471U);
    msg.setSourceEntity(229U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(31U);
    msg.state = 49U;
    msg.flags = 95U;
    msg.description.assign("DMEYZXWQVMLIWKLHFCZUHVRULLTYQEUYOIBNVERAHBCBRXQEJJLFSPIPJSTCZEYLSVBKMVXKKXVYAJZLTRFNBCTYDODDGJZEYLMHUZKAMZJSQPIXJDBMDWCCRSVNSFIIOPBXOTXQPQTNJVOAWCNDKUGYYICRRBLAXRUICGNQDGBPMEMHCFHLQXHGONMFFKZK");

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
    msg.setTimeStamp(0.7057351952967125);
    msg.setSource(43599U);
    msg.setSourceEntity(53U);
    msg.setDestination(16495U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.41535578798174666);
    msg.setSource(31645U);
    msg.setSourceEntity(164U);
    msg.setDestination(62261U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.6576995674096343);
    msg.setSource(46652U);
    msg.setSourceEntity(52U);
    msg.setDestination(12351U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.07515217264607976);
    msg.setSource(7003U);
    msg.setSourceEntity(108U);
    msg.setDestination(12276U);
    msg.setDestinationEntity(237U);
    msg.id = 242U;
    msg.label.assign("GALLBGHMWIPTGESQZWCOGCUIYCIQRRWEZKVGIQVAFMNHYLRMHVTOUUJLNCQZPNKNWSSVXOEBXHFCRMKJSUFDDMDSZVILPZJSONEGBIYSVFEJLVACXMBOTNNFBBNXKULOE");
    msg.component.assign("SKVWOKSYTCYUGFEEPOAOOYMVMIPXRJVRGHIZFCCQNRCQKYUNBYEKMINBYSSNICNMPPHCLGWKLXXLLJBQZLHNRUKIMWJVSLLFDHJMFBWBDFEUXGZMDJTZGGULBVBKWNZAPLQO");
    msg.act_time = 25U;
    msg.deact_time = 8008U;

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
    msg.setTimeStamp(0.7592439169237754);
    msg.setSource(49099U);
    msg.setSourceEntity(250U);
    msg.setDestination(24742U);
    msg.setDestinationEntity(163U);
    msg.id = 14U;
    msg.label.assign("LPASEYCNEQBXBIKTSHQOQJJCAEJXCNVVOVKEUXWCNIWAZVMMPZBZWXKIHJAVFWZGRQXHMZMXNRZGDLOKZDTNYHWCQRRFYFTEKHOOSSISMJXQLUIFDYTWCCBVAMGOINVPGRDAGNKEYEXMUOVLNGDPLTCDB");
    msg.component.assign("QXLTERVRWPCZKWECODVLQONBKFBSHUJLKHAIOLGPTBMDMZOBDAIJOJMJBRLKPFSJAYYZL");
    msg.act_time = 17076U;
    msg.deact_time = 17677U;

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
    msg.setTimeStamp(0.3468903371387255);
    msg.setSource(9934U);
    msg.setSourceEntity(168U);
    msg.setDestination(11946U);
    msg.setDestinationEntity(54U);
    msg.id = 139U;
    msg.label.assign("XUIKWPBRFCDTASOYSWLDAVMLEAULQIVRQJYZMXJXHRHQMBLEVIUWJVKIDAOQCCWKNLSONFGQSIFNPGPJPBYUMESOCGOFTLJBDKMORNIVXGNNZUDMFLFEKSBXYIVHZNDKJTRJPZGSTPRKZBNWOAMXQCLTKDYCBGZBKPCAYZRYHSOTWAHHWUYJDQBHIHGACQKWOMUXHPFTVFRUHLRCADPENTDBGYTVJMPYGRQWQAZEETZVZFUOXLXNIVCEEUSFX");
    msg.component.assign("SNBVCGKUCENZAYSULFQTVEWNDHKNAOGBNWAFJYSVXRSPOETJNQHTMGPDISHKHMTPUAEHWTQYOALFUJPQRXKCOVINIJLAFGWDSCLXCQXBBFAFFBYJMSRHHHT");
    msg.act_time = 43123U;
    msg.deact_time = 58701U;

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
    msg.setTimeStamp(0.3685617368959636);
    msg.setSource(30240U);
    msg.setSourceEntity(245U);
    msg.setDestination(22694U);
    msg.setDestinationEntity(0U);
    msg.id = 65U;

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
    msg.setTimeStamp(0.6762425589211288);
    msg.setSource(48892U);
    msg.setSourceEntity(51U);
    msg.setDestination(64328U);
    msg.setDestinationEntity(242U);
    msg.id = 101U;

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
    msg.setTimeStamp(0.7622553278835448);
    msg.setSource(34864U);
    msg.setSourceEntity(27U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(153U);
    msg.id = 217U;

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
    msg.setTimeStamp(0.790316138309885);
    msg.setSource(48941U);
    msg.setSourceEntity(70U);
    msg.setDestination(54504U);
    msg.setDestinationEntity(135U);
    msg.op = 144U;
    msg.list.assign("YKROMXUXTIWZQMTKABFICVKDMPBXEEUZYJABSDPTICFMRIRDZSRPTSIAVGTRKP");

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
    msg.setTimeStamp(0.2843945278634613);
    msg.setSource(64206U);
    msg.setSourceEntity(91U);
    msg.setDestination(17807U);
    msg.setDestinationEntity(55U);
    msg.op = 138U;
    msg.list.assign("EUYMBPRHYOTUMLGZVXSYNHWCFBGUYOGMGCDOEJBUKTXPZGQIKQVCCFMWKONGYREMIMOUPCVTYBDJUVAFREHUVNKKPPDHOMXYAHLYKIUPSSTCQZKHYZOLHNCXRXRBVEIJWFNSBARZLZQAZWNQRBFSLQDESVCTJJVQMKNAIXSOMTJNOBPATTLLSGZITINFHAZSBILPQHLWBMJQWJJKWXFUXOANIWUCRVRVDESRAILGDFE");

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
    msg.setTimeStamp(0.7888793899002418);
    msg.setSource(22876U);
    msg.setSourceEntity(242U);
    msg.setDestination(41511U);
    msg.setDestinationEntity(4U);
    msg.op = 49U;
    msg.list.assign("RYCJDYFTGVNKAWWHECHYLCDQQNKLLBNCNVNFKRBPVJOXHKRPYK");

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
    msg.setTimeStamp(0.9759154460681368);
    msg.setSource(9152U);
    msg.setSourceEntity(187U);
    msg.setDestination(58693U);
    msg.setDestinationEntity(132U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.6654433096190087);
    msg.setSource(35575U);
    msg.setSourceEntity(65U);
    msg.setDestination(57739U);
    msg.setDestinationEntity(210U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.6809638629464315);
    msg.setSource(18442U);
    msg.setSourceEntity(139U);
    msg.setDestination(44940U);
    msg.setDestinationEntity(212U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.6389801904150902);
    msg.setSource(63899U);
    msg.setSourceEntity(78U);
    msg.setDestination(2599U);
    msg.setDestinationEntity(3U);
    msg.value = 251U;

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
    msg.setTimeStamp(0.1427364951675082);
    msg.setSource(60844U);
    msg.setSourceEntity(166U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(182U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.3536979810741633);
    msg.setSource(59023U);
    msg.setSourceEntity(139U);
    msg.setDestination(34233U);
    msg.setDestinationEntity(80U);
    msg.value = 143U;

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
    msg.setTimeStamp(0.8152256147112915);
    msg.setSource(7957U);
    msg.setSourceEntity(196U);
    msg.setDestination(18737U);
    msg.setDestinationEntity(16U);
    msg.consumer.assign("IOTHGGGVPXGMCUTYUSWDDXDWPPMZXCLWNCATKOXKFNESV");
    msg.message_id = 24122U;

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
    msg.setTimeStamp(0.9394656453034361);
    msg.setSource(26290U);
    msg.setSourceEntity(54U);
    msg.setDestination(23676U);
    msg.setDestinationEntity(15U);
    msg.consumer.assign("NVQOYQQXOZRSYXMCCIUYKCIJKIIJOPIJRNLRJQNUJCFUSLBKKBPWKK");
    msg.message_id = 16260U;

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
    msg.setTimeStamp(0.1428621781782664);
    msg.setSource(7151U);
    msg.setSourceEntity(136U);
    msg.setDestination(59765U);
    msg.setDestinationEntity(39U);
    msg.consumer.assign("UNLPSOULPCMNZQMRSVKGSMUXVBXRECBWJEKMFAUJEEDWLBGZKKEGVKPTZHZZYUGOIHMVFOGWITCOYFJUYSZFDEUPCUHINWYOXYYCHQOBMKNZNKCOISDBBSKHGYQTFJVZBSDRJLXCGHMDJDAHZGIIXXHDQWFBLMDPDHSLVWRCJZLJAYALOWVTNESBYHNPVTO");
    msg.message_id = 2998U;

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
    msg.setTimeStamp(0.9512293042597748);
    msg.setSource(3423U);
    msg.setSourceEntity(182U);
    msg.setDestination(466U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.9492906073237033);
    msg.setSource(60543U);
    msg.setSourceEntity(220U);
    msg.setDestination(16819U);
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
    msg.setTimeStamp(0.47451765390850187);
    msg.setSource(49850U);
    msg.setSourceEntity(194U);
    msg.setDestination(18891U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.11044715665267679);
    msg.setSource(29324U);
    msg.setSourceEntity(56U);
    msg.setDestination(30362U);
    msg.setDestinationEntity(10U);
    msg.section.assign("NFOMXRNSACGFJBUGSQHKNXQTNJTCLMRPUEDYFDANIBFYQVUWYZSNKMUEAXYXZPICNVLKTRIDDTVPOCDEWUHL");
    msg.param.assign("JYTLXEPQEKZFRVYNBQHGJEFVLMBACWYXAEWYPUXICBHNCRCQMOPSEOGYJMOZBIHDTXKQNAXBTUOWYHEVJQGFWOFSDKFSNIFWNTHGMSUYUHZIRCOLMRBINADLVHYKFZTJSQNUAXKANSDUVCZRLZWDSGPVOLWKQCIFCCGULYRXRPHEOIZMDOKAVPJTWJNEYRIPTKIEFTRQUCMTAV");
    msg.value.assign("EFRBBCNNOYLHVRBKFEOMKCTCLLEJRJVABKRWMXXYPVVQGZLMSSKBCGJYASJQIWIAFTZPUQYPJGYZIZHAXEYCTACFSFQUCEGOSAWKMNVBAJTBRXQIQYDTNGXZKPZTGTVTNMDVFHLOILDPPWBGREBCMFJHDHSWISSLDPVOUWVD");

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
    msg.setTimeStamp(0.3332781141063902);
    msg.setSource(46946U);
    msg.setSourceEntity(228U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(132U);
    msg.section.assign("VSOWDVPJWFNMBFCXDJSARWZSBVIAUNPRLAMEQXQFZWGGCSRHAISQUNNDQBVMIUJKKEHXCGUPRPHATFZUQERLVIXWTMG");
    msg.param.assign("HUCDNJKXLFBJXFDR");
    msg.value.assign("KUKZSUEZRRVTFMSIXSCACPUMOKREGYKPJQDNQPAUPRSGBTJJZHFHLEXZLIQQSSGJQBUTXXKNDBVNHVVJ");

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
    msg.setTimeStamp(0.0036999711558978188);
    msg.setSource(12685U);
    msg.setSourceEntity(195U);
    msg.setDestination(24552U);
    msg.setDestinationEntity(49U);
    msg.section.assign("LTDKXWAGQOUUJVYPQKEMCKJTTSHHBXYWZQESZDO");
    msg.param.assign("GVAPFDJJARNEFVCQABJFOOJJLIEQXEBOXDVPVZIPVPYSDMHRAUFHEBQKTTCHOZZMDFUUKGIFITCMXNYOHTUYTOHRNCRSQYGIEWMECACRLQEDLKMIHZAXVPTHLABNBJZSJPKVWUBCMPDLSTDPLNIQGZWANWWJNTKFUSDKNEXAEYCSGBFWYKFMISQUMDVBWXMRCXRTOLYYVCSSKDZIXXYLTYPJUEHBWVSPOZZRHF");
    msg.value.assign("WTNUTLLSNVFLVRDRMQXKMKLCHBQJZJPSXFUQIFFDUPQXHMWZPSBVWKTCAXEHSAUYCGLGGNDASUCGHGPSOQGEJALIZTKEDZYUZSYXTTXOAOODEAOOFCQKUYXAXBCVAAKJLJNMONBMWZHIJDRXVTKIIYWMIWKWELBLLPOQFGHHHBDKRPN");

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
    msg.setTimeStamp(0.009137824819826945);
    msg.setSource(34173U);
    msg.setSourceEntity(229U);
    msg.setDestination(2224U);
    msg.setDestinationEntity(64U);
    msg.op = 237U;

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
    msg.setTimeStamp(0.34318208865994515);
    msg.setSource(20908U);
    msg.setSourceEntity(226U);
    msg.setDestination(16864U);
    msg.setDestinationEntity(138U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.3153778138656278);
    msg.setSource(58376U);
    msg.setSourceEntity(189U);
    msg.setDestination(807U);
    msg.setDestinationEntity(232U);
    msg.op = 231U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("SCEHRKXRUEZTEJCIHXMAMQXADBNBHKJDWQSDUDRYVFMYTFWRTBVWBNRZGIOWI");
    tmp_msg_0.param.assign("WSDIBUNBNGHBRZPMJIWZNERTDNPRMJTLHXQIWCOSFVPCGYGYMVHYLJWCDQCQJCBNUSAUHVBKMSZIUVQKZBBYVRBNPYMRUDITAZOTWRXZUHTQOCXGMKXUPOAODVEOVFBCFKHEYUFLJWNAJXDLVIKPSGPNVAMPHKGSXL");
    tmp_msg_0.value.assign("YJYUHTAOYHXECFOQGFOUNVNCYIJOTJUXQCCOAPYKEEEWKRMTRXUGJIUWUKNEAOSHQNRNXURTCIWLIBADLPMFUJFCVTLSBNRLDWKGFZRMQRTZIVZLDMZFNPJVQKQL");
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
    msg.setTimeStamp(0.2615113320312299);
    msg.setSource(25575U);
    msg.setSourceEntity(159U);
    msg.setDestination(31889U);
    msg.setDestinationEntity(215U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.014574003676155356);
    msg.setSource(50758U);
    msg.setSourceEntity(30U);
    msg.setDestination(11738U);
    msg.setDestinationEntity(81U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.03777310255765742);
    msg.setSource(10150U);
    msg.setSourceEntity(63U);
    msg.setDestination(1869U);
    msg.setDestinationEntity(170U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.26755187303336714);
    msg.setSource(28520U);
    msg.setSourceEntity(202U);
    msg.setDestination(11694U);
    msg.setDestinationEntity(54U);
    msg.total_steps = 203U;
    msg.step_number = 141U;
    msg.step.assign("MSECEKTYOJRIHCXIMFZXLXKBSVEVNICBDTHOFELNNKGMABZUURAVCPDYLREDWRHOPGHLMRONWFHXZJPQZMFSIMWHQESNKTQBGRARDOVSJGIUAPJRGBUUJASOXPUSFZPZGHWYGYXEKMDUCQQPLSPFWKMBCEBGIAOZLTZYYBZJWJCKQXAFCIIBFLZQOYEIMJYMJXTUH");
    msg.flags = 222U;

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
    msg.setTimeStamp(0.42411709847954404);
    msg.setSource(988U);
    msg.setSourceEntity(35U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 222U;
    msg.step_number = 30U;
    msg.step.assign("QNLPQOIVPXSUMHUZDIULVXHVFYITNLXXCINSCNCVHZYLDEDVGAFEADEGTVHBAEPJUWZHKIYEGEEAHTVWZFFJAGMLZMGSTHZBHIRXPAPYBTNKNDMZQCRXCNWUBFQOQCGDUYVPKBSTOEOMGUQBTSAWWJCXLWGHNFCFKSJWLRLGIYMUQQRDOBJJLHWJQVCXDNSIFZRJEUBPGOMDYYPAEKTSWRZFQTXLKOSYPVIKFPMOODORSKXKAAZKWJMB");
    msg.flags = 88U;

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
    msg.setTimeStamp(0.9224560537471937);
    msg.setSource(37640U);
    msg.setSourceEntity(65U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(170U);
    msg.total_steps = 96U;
    msg.step_number = 22U;
    msg.step.assign("QCVZTXCRJQAPDDNCITDGOSOZJXEBUKLQZIEBHWUYJVKWGNMHEHKXPFBOLSVXRFUJETOHYNQGKJLVTNFBWUNVQKXYVUPSKDHPYVAIIEKCMLZKMGMDEPWB");
    msg.flags = 207U;

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
    msg.setTimeStamp(0.16879171225471246);
    msg.setSource(14027U);
    msg.setSourceEntity(158U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(249U);
    msg.state = 35U;
    msg.error.assign("UYPHOVNAOAJVEMXNFPSXDRLXDTOLHXISXJJVOKOZRKKQMLWDNROWAYFEMNQIRJOLAGEJYGVHRNSMTQTRJEXPDZJVVYAFICPKCQQXQTMABQSRIWHGATLZRAOHNFIWNTKTCXDNZPIJCYDCPHEKBFDEFHGJNLNXJGSTEOQYZC");

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
    msg.setTimeStamp(0.4382691907669214);
    msg.setSource(40723U);
    msg.setSourceEntity(227U);
    msg.setDestination(65367U);
    msg.setDestinationEntity(209U);
    msg.state = 60U;
    msg.error.assign("ZRYJGYAJPSGACXJMXRZBBZGDZNYFICRKLZWHZKXRVIHGWPHOVFNTKKHQXDCQYPKZJTHDBDEEITLUEPEYAOKPTFUKLIDMKWFSTVCIKSVKXMEQGEOHUMWFRLDJCCDHOUJVNVGFIPXNMFYBTOLHTYLXLMJX");

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
    msg.setTimeStamp(0.8070377871692584);
    msg.setSource(36692U);
    msg.setSourceEntity(172U);
    msg.setDestination(29532U);
    msg.setDestinationEntity(82U);
    msg.state = 69U;
    msg.error.assign("GXRPNQFNISTQGTMICOMWZXGGUXRWJMYBUHTXQMFOEIYULSLDUFATODGISTVYFWDVBOVWXCAQLCIWBWAJKIBFEOJETYTKGFEMQCOMVZMPKBRRXBUHXHPSDZLUWHUVELVKYETJAMGO");

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
    msg.setTimeStamp(0.16961237758516257);
    msg.setSource(25203U);
    msg.setSourceEntity(59U);
    msg.setDestination(44055U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.25973673195243063);
    msg.setSource(651U);
    msg.setSourceEntity(220U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.524906419382447);
    msg.setSource(6383U);
    msg.setSourceEntity(53U);
    msg.setDestination(23626U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.03239500123085637);
    msg.setSource(48760U);
    msg.setSourceEntity(21U);
    msg.setDestination(15149U);
    msg.setDestinationEntity(110U);
    msg.op = 192U;
    msg.speed_min = 0.21362553300210652;
    msg.speed_max = 0.5075988115013211;
    msg.long_accel = 0.4556464698450602;
    msg.alt_max_msl = 0.30965138283783655;
    msg.dive_fraction_max = 0.16668141599282338;
    msg.climb_fraction_max = 0.4058155752919178;
    msg.bank_max = 0.7250285129253434;
    msg.p_max = 0.913814039069041;
    msg.pitch_min = 0.5130290993811237;
    msg.pitch_max = 0.062152356406221076;
    msg.q_max = 0.7135334112794114;
    msg.g_min = 0.3392698587632469;
    msg.g_max = 0.07875870903343507;
    msg.g_lat_max = 0.13266550272093058;
    msg.rpm_min = 0.24067490674551328;
    msg.rpm_max = 0.906266348604692;
    msg.rpm_rate_max = 0.26995860875999567;

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
    msg.setTimeStamp(0.9487679218777455);
    msg.setSource(49207U);
    msg.setSourceEntity(113U);
    msg.setDestination(35763U);
    msg.setDestinationEntity(38U);
    msg.op = 1U;
    msg.speed_min = 0.8716455078367402;
    msg.speed_max = 0.5628908870581637;
    msg.long_accel = 0.43427932390947155;
    msg.alt_max_msl = 0.18822675311220127;
    msg.dive_fraction_max = 0.7423297089823168;
    msg.climb_fraction_max = 0.09964463305380766;
    msg.bank_max = 0.8762929346497385;
    msg.p_max = 0.26277053097412695;
    msg.pitch_min = 0.36017473506517317;
    msg.pitch_max = 0.7119672412751741;
    msg.q_max = 0.40481074387230087;
    msg.g_min = 0.06691356909623913;
    msg.g_max = 0.13744873078710895;
    msg.g_lat_max = 0.8327606064788271;
    msg.rpm_min = 0.8202335486967619;
    msg.rpm_max = 0.9364758213160421;
    msg.rpm_rate_max = 0.38643468181594287;

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
    msg.setTimeStamp(0.7462060213793491);
    msg.setSource(63018U);
    msg.setSourceEntity(166U);
    msg.setDestination(18741U);
    msg.setDestinationEntity(35U);
    msg.op = 132U;
    msg.speed_min = 0.16460041157498229;
    msg.speed_max = 0.06076490839763171;
    msg.long_accel = 0.29485273428693526;
    msg.alt_max_msl = 0.44103972805756486;
    msg.dive_fraction_max = 0.27224622121441955;
    msg.climb_fraction_max = 0.2984492337621173;
    msg.bank_max = 0.1906543833398654;
    msg.p_max = 0.48905996105551075;
    msg.pitch_min = 0.35332253366404565;
    msg.pitch_max = 0.346298828944719;
    msg.q_max = 0.7142307094460921;
    msg.g_min = 0.24938755262010048;
    msg.g_max = 0.6474843119882535;
    msg.g_lat_max = 0.6073602939196143;
    msg.rpm_min = 0.3617940888492873;
    msg.rpm_max = 0.847647087550708;
    msg.rpm_rate_max = 0.9625522095080848;

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
    msg.setTimeStamp(0.8970376565282803);
    msg.setSource(19998U);
    msg.setSourceEntity(28U);
    msg.setDestination(23577U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.744739932280952);
    msg.setSource(42278U);
    msg.setSourceEntity(6U);
    msg.setDestination(19362U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.13427012694239682);
    msg.setSource(61571U);
    msg.setSourceEntity(224U);
    msg.setDestination(4200U);
    msg.setDestinationEntity(162U);
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 20721U;
    tmp_msg_0.lat = 0.7769349887140804;
    tmp_msg_0.lon = 0.34399903042159774;
    tmp_msg_0.z = 0.7713815556976696;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.08745888692238601;
    tmp_msg_0.speed_units = 252U;
    tmp_msg_0.custom.assign("SIBYOSLQIGUSTRXGHFMIWANYCYPI");
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
    msg.setTimeStamp(0.1482265413287306);
    msg.setSource(44317U);
    msg.setSourceEntity(190U);
    msg.setDestination(62537U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.7840848789310486;
    msg.lon = 0.0005478356386274807;
    msg.height = 0.10101139187743946;
    msg.x = 0.2353697577741123;
    msg.y = 0.12203434120701506;
    msg.z = 0.8128090318470239;
    msg.phi = 0.6083062717586633;
    msg.theta = 0.09937917001953467;
    msg.psi = 0.3401243191682152;
    msg.u = 0.34627530919960525;
    msg.v = 0.02296693403522021;
    msg.w = 0.9483471841664219;
    msg.p = 0.3629244324273674;
    msg.q = 0.04544951787196727;
    msg.r = 0.056491448311172365;
    msg.svx = 0.518233237743365;
    msg.svy = 8.575651412279228e-05;
    msg.svz = 0.6996356309489625;

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
    msg.setTimeStamp(0.16507698823700778);
    msg.setSource(49558U);
    msg.setSourceEntity(63U);
    msg.setDestination(23867U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.9234281474073129;
    msg.lon = 0.6624440659636004;
    msg.height = 0.10965879765430497;
    msg.x = 0.6280287737280728;
    msg.y = 0.8302555718919397;
    msg.z = 0.8706301696193635;
    msg.phi = 0.10140280109357458;
    msg.theta = 0.6794666454518278;
    msg.psi = 0.12478306269408557;
    msg.u = 0.7333739497605529;
    msg.v = 0.5345472179399002;
    msg.w = 0.07032696242002645;
    msg.p = 0.004466055903865618;
    msg.q = 0.6470762483989727;
    msg.r = 0.5836315788333908;
    msg.svx = 0.04879736768319498;
    msg.svy = 0.4094906954169548;
    msg.svz = 0.9579479043797755;

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
    msg.setTimeStamp(0.1736843152682338);
    msg.setSource(51609U);
    msg.setSourceEntity(8U);
    msg.setDestination(13129U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.44748266755912247;
    msg.lon = 0.06442556500076302;
    msg.height = 0.10394036816227792;
    msg.x = 0.7789381720625382;
    msg.y = 0.22402647398063802;
    msg.z = 0.2536154892380873;
    msg.phi = 0.5627448905000384;
    msg.theta = 0.17952324572061906;
    msg.psi = 0.1975716437818067;
    msg.u = 0.08787272173096894;
    msg.v = 0.5127399391044865;
    msg.w = 0.9581431741226578;
    msg.p = 0.5339539963611863;
    msg.q = 0.8626330816687663;
    msg.r = 0.7716433027604804;
    msg.svx = 0.1456939207121637;
    msg.svy = 0.7213333502324669;
    msg.svz = 0.6088155049543392;

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
    msg.setTimeStamp(0.8983488557884861);
    msg.setSource(8230U);
    msg.setSourceEntity(119U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(214U);
    msg.op = 16U;
    msg.entities.assign("NZWQMWZADZXDWVKMPGHHYEPRNVJTHWKHGCSIRLSBZINBIFJUUROXPDLHATJQUMXIYVAPMTRBCCWLFBZNXKOIPVJXEEDAIOTNWPRGTLKVRWEYKUESIJHOUZKTYOGVGYRUMHSYFVLFXSDJRHXKK");

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
    msg.setTimeStamp(0.8197407512126907);
    msg.setSource(45931U);
    msg.setSourceEntity(110U);
    msg.setDestination(49978U);
    msg.setDestinationEntity(29U);
    msg.op = 206U;
    msg.entities.assign("DHFPQVCVCGMGESKZUYWRKPIQBKPVSMLHTEFULRIBZGUTTAGRCYUFDVXADJOLHAENWQKFTUFDNQOIAIDKBYXYWAXLITJRYVROEASCSOTXWKGFIRBLGMVHCYXPXNKSILJBZOFLOPVZWDMYBKSWQHONYMUHSPAYQRANBVMHQVTVCUNCH");

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
    msg.setTimeStamp(0.5078017719351916);
    msg.setSource(51611U);
    msg.setSourceEntity(190U);
    msg.setDestination(766U);
    msg.setDestinationEntity(72U);
    msg.op = 151U;
    msg.entities.assign("HRLAETGSOGBDMKFUCLXEJPAGHKMENQHTOYTMGXKFBDLGJRWYHJLTFMFUMARYCSOYDJEQYKTUXIMIDPZOVJZAWHMEGFCKCSMALXLBKHTTJDEFZEUZNDGIDIWWBDPRQBZPDPZBWVWDCIBXOLHYMGAZROCEGNCOFYCPNXQEVNSORBMTVWKFBSNZXNUKQNRIZHLVVXUSTOLWYN");

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
    msg.setTimeStamp(0.9370855005837704);
    msg.setSource(45967U);
    msg.setSourceEntity(39U);
    msg.setDestination(59915U);
    msg.setDestinationEntity(93U);
    msg.type = 227U;
    msg.speed = 36657U;
    const char tmp_msg_0[] = {-19, 85, -94, 45, 56, 61, 109, 35, -18, -19, -32, 107, 3, -74, 79, -17, -97, -10, -123, -11, -122, -47, 100, 37, 56, 47, -89, -106, -59, 97, 34, -125, 13, 108, 78, 114, -3, -62, 34, -4, -37, -56, 113, 17, -98, 32, 49, 56, -25, -67, -12, -35, 10, 73, 113, 120, -74, 45, -121, 60, 28, 22, 106, -86, -111, -72, 121, 118, -41, 50, -89, -3, -9, -13, 90, 105, -41, 124, -6, 64, -50, -31, 83, 26, 36, -20, 0, 26, -126, 100, -10, -14, 101, 29, 105, 67, -73, 85, -85, 119, -90, -17, -125, 2, 45, 67, 27, -106, 67, 88, 59, -9, -102, -126, 60, -114, 8, 115, 62, 16, -70, 121, 71, -35, 89, 21, -125, 15, 63, -118, -107, 111, 30, -50, -82, -75, 47, -65, -109, -74, 109, 119, 101, 5, 87, 59, -18, 116, 75, 92, -58, -12, 48, -26, 117, -64, -49, 101, 116, 28, -120, 119, -91, -8, -23, -12, 109, 50, 58, 61, -89, 47, 49, 82, 117, 53, -115, 5, 11, 82, 66, 104, 75, 40, -10, -28, 40, -115, 7, -103, -37, -86};
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
    msg.setTimeStamp(0.6312599206803117);
    msg.setSource(1470U);
    msg.setSourceEntity(182U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(227U);
    msg.type = 102U;
    msg.speed = 29753U;
    const char tmp_msg_0[] = {-36, 102, 123, 8, 0, -14, 119, 63, -103, -83, 78, 104, 111, 70, -95, -61, 56, 112, 34, -113, 113, -117, 90, 96, 6, -43, -12, -127, 79, 66, -121, -39, -45, 110, 94, 29, 28, 121, 79, -41, 78, 84, 63, -96, 100, -56, 70, 20, -19, 77, 88, 115, 118, 40, 53, -72, -122, -128, -112, -18, 95, 12, -110, 69, -81, 34, -70, 41, 16, 103, -126, 113, 97, -30, -31, 100, 26, -8, 86, 49, 24, -117, -82, 31, 36, 74, 30, 116, -3, -127, 84, 77, 62, 122, 55, -84, -9, 6, 117, 27, 4, -76, 84, -64, 1, -36, -95, 51, -73, 57, 60, 16, -112, 67, 89, 100, 104, 51, 113, 92, -17, 51, 13, 83, -55, -110, -7, 125, -84, 95, -68, 107, 105, -117, -111, 69, 50, 56, -125, 39, -75, 3, -48, 110, 44, 81, -23, 44, 48, -101, 122, 17, -87, 70, 100, -38, -127, -102, -84, -112, -57, 118, -29, -53, -67, -20, 24, -61, -111, 25, -99, -126, 16, -14, 34, 126, 45, 74};
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
    msg.setTimeStamp(0.009250247475162121);
    msg.setSource(35626U);
    msg.setSourceEntity(227U);
    msg.setDestination(46261U);
    msg.setDestinationEntity(75U);
    msg.type = 147U;
    msg.speed = 50044U;
    const char tmp_msg_0[] = {-124, 124, 33, -112, -106, -102, -102, 86, 7, 42, 123, -37, -9, 111, -104, 87, -14, -89, -48, -80, 37, 97, 33, -18, -75, -8, 21, 70, -113, 114, 98, -67, 81, 45, 31, -57, -68, -4, -105, -86, 10, 114, -103, -44, 36, 71, 125, -6, -67, 92, 77, 45, -88, -99, 67, -15, 109, 104, 32, 12, -112, -67, 123, 35, 119, 34, 49, 82, 88, -79, -84, -75, -116, -121, -126, -69, -55, -61, -84, 66, 85, 117, 60, -70, 97, 41, -114, 0, 91, 95, -71, -127, -96, -7, 24, -12, -127, -16, 124, -72, -7, -88, -5, 126, -64, -22, 94, -20, 26, -54, -114, 95, 72, 48, -2, -3, 58, 43, -35, -68, 103, -37, 124, -91, 111, 12, 64, -79, -9, 97, -103, 5, -8, -53, 100, 21, -103, -72, -102, -106, 46, -102, 81, -82, -16, -59, 105, -43, -26, 7, 109, 74, 106, -86, -107, -5, 16, -80, -76, 90, 32, 21, 68, -113, 37, -43, 59};
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
    msg.setTimeStamp(0.2657599117469185);
    msg.setSource(10580U);
    msg.setSourceEntity(241U);
    msg.setDestination(25083U);
    msg.setDestinationEntity(37U);
    msg.op = 14U;
    msg.tas2acc_pgain = 0.7220268539095444;
    msg.bank2p_pgain = 0.6893998525833895;

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
    msg.setTimeStamp(0.900445874571896);
    msg.setSource(5276U);
    msg.setSourceEntity(217U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(153U);
    msg.op = 205U;
    msg.tas2acc_pgain = 0.8609449976306716;
    msg.bank2p_pgain = 0.9505275075596276;

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
    msg.setTimeStamp(0.7380931690854098);
    msg.setSource(11214U);
    msg.setSourceEntity(121U);
    msg.setDestination(52552U);
    msg.setDestinationEntity(30U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.5058432868245212;
    msg.bank2p_pgain = 0.633478080443134;

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
    msg.setTimeStamp(0.4971589745383783);
    msg.setSource(48426U);
    msg.setSourceEntity(82U);
    msg.setDestination(3118U);
    msg.setDestinationEntity(147U);
    msg.available = 2306757105U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.6448772112603792);
    msg.setSource(37432U);
    msg.setSourceEntity(30U);
    msg.setDestination(36393U);
    msg.setDestinationEntity(54U);
    msg.available = 388145019U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.7288440665806393);
    msg.setSource(54827U);
    msg.setSourceEntity(35U);
    msg.setDestination(27146U);
    msg.setDestinationEntity(238U);
    msg.available = 4217197968U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.07904678848284619);
    msg.setSource(64033U);
    msg.setSourceEntity(47U);
    msg.setDestination(38101U);
    msg.setDestinationEntity(109U);
    msg.op = 228U;
    msg.snapshot.assign("DOQJYSXNMXAOSJLRGYNDPIWVTFLNGUBRUBUQVREHYARTKJIJEWLNMBEWHLTIGHBZCANADHFQDXGOKIZGTGYWCBNHROWKPWUQTCAFTLZSBMSXZPOHYKDMJYZVDCCSQMDEFQMLKCEEXNFMLFPWITVZYNLGOZXVXEPKSHOZXJFWHGGUMUYPCARJVUNHTUSHKQIY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UOXHOIURGNUNVMQHDECFWTUCIHRZWIZJYIBTLGQAYESSOCKTFLVLZACLGTWQBKPJOFVWANXQFGDJTDUAVIHQGPKYRCHHDWBMQAMJBMNGJYJIZXLYZBVUOUTKXCSWSNRCRBPPRPGIELGPOKYSSEFDMPFFACYVDMWDHWJOJTZNZDCHQUXJXLMHNYELZ");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("YFTEHYXQMAVDVZGYLPENHYHUVFKJEPTNSGJEIAGSYUSVWWCACUJZPLUXEFEVWIDZTRIIFOQQOTBPVUBNGOOSIAZBPLDOROWCSQBMAXCRSYIFRHKRPZVTBVXRMWQPGWAZUEDGPMNYTGLQSUHRNELX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NEFDSGRABYJFJORQPRFCYPFYKFCDQSLTBCEEJSKGHPSVEMINJYWHUUIRRMECFMWHQTPVQDUHKLTZFRBTAPEODNXIIVRMGUAYCZDZ");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 49235U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("HAWRFYHUGXVPPHBQMNCSFXIPGSIVJZCLXFLDXLIEOORTIOKJUDVYLRPZWZBDHAMMCBKSDQMFFYFPJEZQOKCKAIKWCJNUDZFZBSXOHADFZJNQVIYMDNXULZOXCRZLEURMRORTAKHUMMQENWKDGGOIXICXUUWVYGWSHSQECRBTNNIUHEPYTGCVQEXNSHGOKTNKEBSJVLFESZYTDBBMALAWIATGNKOPCWMPGYQPTVVTDSBTWAUL");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IBMZJHTIJZOCZNWYLUCVEQXGCMTQOMVXAXXQKUJQAVAIHEXFBXJMHR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LogBookControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.command = 69U;
    tmp_tmp_tmp_msg_0_1_1.htime = 0.04926303000258381;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.8165769172698211);
    msg.setSource(36366U);
    msg.setSourceEntity(38U);
    msg.setDestination(3526U);
    msg.setDestinationEntity(5U);
    msg.op = 102U;
    msg.snapshot.assign("GBPKTHLBEOXTOQZKFXXRISKHVFEXA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CPHQWYPIVGSGED");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 18307U;
    tmp_tmp_msg_0_0.control_ent = 165U;
    tmp_tmp_msg_0_0.timeout = 0.8473228682631455;
    tmp_tmp_msg_0_0.loiter_radius = 0.32234693161858097;
    tmp_tmp_msg_0_0.altitude_interval = 0.7128032964527236;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.07611720178959813);
    msg.setSource(42612U);
    msg.setSourceEntity(161U);
    msg.setDestination(41566U);
    msg.setDestinationEntity(17U);
    msg.op = 176U;
    msg.snapshot.assign("NDUDIWBIHIIRGOVMLJMSGQJFJKCLWPOUCHFMOBZWRTXKIQYNGSWYHCQVPQEMIXMJLORLRYAVGQZNOCANWYZBCDVKJMOZUXPMRWBSKKSTSXCDALEEPOZDEGGPVUTUAXCNFVMRATYGHVUIMBSKTNNZTGCLELIHYKEQAODSCVNHANXAJ");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("URDHWDEAINRRWWBZAOJLBQQTUCX");
    const char tmp_tmp_msg_0_0[] = {71, -83, -54, 77, -1, -85, -121, 65, -100, -1, 110, 61, -3, 102, 59, 110, 73, 51, -63, 3, -35, -63, 90, -99, -59, -104, 36, 84};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.57941147126057);
    msg.setSource(7957U);
    msg.setSourceEntity(100U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(44U);
    msg.op = 23U;
    msg.name.assign("VLANOUDSAVPJDGINGXMVTMSVHRMIVDQHYBEHCGWTOOJMGGRNIWFCKCODDUFUBPNJYWURRUOSOYIDWBLBZZSZCJISCIYPFSDMVDGOAEARBZQCLEDYKEWVLXFTUXGXPGQSMGSWNQVFESZQKTWTPGDTSHNJKMULOZYEEMLJRNAEFBOIHQJIABHYCRKQAXPFPXNMYQTFLAULEJOMUKQIZHZCHCXFHJ");

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
    msg.setTimeStamp(0.16316975087262142);
    msg.setSource(9391U);
    msg.setSourceEntity(175U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(254U);
    msg.op = 116U;
    msg.name.assign("QZNOQOYUJYIFGZKFFQCYZVNBLDSTZQQHRPSOIDEDKEYHRYCTECRRFZGQWDAIYLKVOWLXWITNFYEDR");

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
    msg.setTimeStamp(0.5211682174779666);
    msg.setSource(49385U);
    msg.setSourceEntity(174U);
    msg.setDestination(42083U);
    msg.setDestinationEntity(23U);
    msg.op = 13U;
    msg.name.assign("PHBMONZXAIQEFHJVQLKWTUFIDVCGLEDNUXPBTDJYNLQYOYONNEGOBGALIGEDDCPCQIMQYMPPPSNDKMUEWGZQJEJZLJZHBXOMRSFTIYPCLX");

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
    msg.setTimeStamp(0.8034810262799614);
    msg.setSource(52227U);
    msg.setSourceEntity(19U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(2U);
    msg.type = 194U;
    msg.htime = 0.40954773329499394;
    msg.context.assign("EDIMERHICWISYPRBFNJFYQPBCDQFKYPBKWCMDTTHZNLUVNRYFDPAHOXNLELMJAUOWCGTNYQLBXQSPDAREXJPXYVUFBOFJRGJKWQFEIGVPOZWMHAVMCSWZIPXRARUVDJGYIUWGAXEMBOTLNOPKJQLOJVIAXRHVWFCDOKRFVYNSBOHCZUSMVBTAYLTHHCILMDZXHQNELISWZJXENZPMTCGQGEKYTQJLTDHUASZUZKSNGIORWKCGAEUSDU");
    msg.text.assign("DWCTUTYPQPEMNXCGVOUGLEKZFHTGYGLEBZXMNOLQTHVJUKQEBHNVYPSBYXHZLMXSCOYWJTAZLPARRZNFFSIMKVIKMSXOQZCSARRUIHFSCLDATUGRNZAIOFEIWUTMWWIQPDLFPRGKKNYOQIVJFVYJRFMPBKKCPHBXZCOYHNVSBOHGVNGGEOVXINBDJJIQRDBEDWJOJGDUBSWEMJUSAHCJIASFHFWDU");

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
    msg.setTimeStamp(0.5129609364361776);
    msg.setSource(30164U);
    msg.setSourceEntity(146U);
    msg.setDestination(38023U);
    msg.setDestinationEntity(198U);
    msg.type = 216U;
    msg.htime = 0.7502554047652213;
    msg.context.assign("GVKAPCHSHAMVTTCYSQDZCZMYKTIOOEOJVK");
    msg.text.assign("XJSZZYDLDXWSUYDJAKVXRKNNEKPZWOPFEIANDALJEPSCAOXNGOBXOTOMXHRIUGZLNCHKKRFRYPDHMBHPFCNTNSENOFAWRHTSJVWUHMGKSWCHMYGPYLVUEUTIMVPQGZPAMDVLKIJBWNXKEJQTQXIGHBYEVSXKIBGBRRMSYBAULEDBGRJVYF");

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
    msg.setTimeStamp(0.3765338974524637);
    msg.setSource(46018U);
    msg.setSourceEntity(116U);
    msg.setDestination(30620U);
    msg.setDestinationEntity(195U);
    msg.type = 56U;
    msg.htime = 0.4306921575380307;
    msg.context.assign("LNWLDDOLIRHQKWUUZBSYEFWKJOHNOFOSLTYBGLWEZIAEVGPUGCPXZZP");
    msg.text.assign("WZAOCXQBCTQMPWFSFLMQEOEKFATQYPWXDXRMDMRHODJDARTTUWVTFCBJOJLGYVHIZLGLZFEVQVWRGNCYVGJNDAPRWIETSSCECNTULBXJWSPMLMCDBIXVSSBF");

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
    msg.setTimeStamp(0.9761556953318538);
    msg.setSource(17702U);
    msg.setSourceEntity(199U);
    msg.setDestination(54389U);
    msg.setDestinationEntity(36U);
    msg.command = 227U;
    msg.htime = 0.3974215069335262;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.06177178112503001;
    tmp_msg_0.context.assign("LHTNZGPWRDGTEEWLMTRIXRHWRDJWJMVQIQPCVFCYRNCYYAQEFNCEFNKKFLASFBILQVYRAHUUJUNPAKK");
    tmp_msg_0.text.assign("VHULYZGKISGGBFZ");
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
    msg.setTimeStamp(0.6117051663483813);
    msg.setSource(53143U);
    msg.setSourceEntity(253U);
    msg.setDestination(27214U);
    msg.setDestinationEntity(188U);
    msg.command = 221U;
    msg.htime = 0.5953625382474662;

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
    msg.setTimeStamp(0.5128447902005798);
    msg.setSource(19853U);
    msg.setSourceEntity(97U);
    msg.setDestination(45653U);
    msg.setDestinationEntity(197U);
    msg.command = 83U;
    msg.htime = 0.6515904753049583;

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
    msg.setTimeStamp(0.054786707692568215);
    msg.setSource(54037U);
    msg.setSourceEntity(141U);
    msg.setDestination(37978U);
    msg.setDestinationEntity(184U);
    msg.op = 151U;
    msg.file.assign("DMBNWXHQTOZBDCEXFZSMVBTYQCLKABWPYOLEMXLVNPDTCRNRMHXXXWPOVKZFCPUCEXBRBHZMOFSKAEHPPZSGPAALSOUQRDWDVDQNRAYMPMUNNAZCUTKDTGBMTQIDQGUWVUGZKIVFNJFIYQAIWHSGUWIKYICFCHIFRVING");

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
    msg.setTimeStamp(0.08810397686686777);
    msg.setSource(39220U);
    msg.setSourceEntity(8U);
    msg.setDestination(43470U);
    msg.setDestinationEntity(245U);
    msg.op = 186U;
    msg.file.assign("DIMXBVFZJXOLNEVUPKUUCAS");

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
    msg.setTimeStamp(0.7518057552489822);
    msg.setSource(14214U);
    msg.setSourceEntity(66U);
    msg.setDestination(25181U);
    msg.setDestinationEntity(138U);
    msg.op = 139U;
    msg.file.assign("UVOZOSSEAFNUQNJHCRLULMROIFV");

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
    msg.setTimeStamp(0.335030856625228);
    msg.setSource(29921U);
    msg.setSourceEntity(137U);
    msg.setDestination(12723U);
    msg.setDestinationEntity(176U);
    msg.op = 75U;
    msg.clock = 0.44616653619048363;
    msg.tz = 57;

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
    msg.setTimeStamp(0.7187338556437822);
    msg.setSource(38653U);
    msg.setSourceEntity(210U);
    msg.setDestination(35442U);
    msg.setDestinationEntity(8U);
    msg.op = 35U;
    msg.clock = 0.13165615649548867;
    msg.tz = 92;

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
    msg.setTimeStamp(0.6948939985554081);
    msg.setSource(22094U);
    msg.setSourceEntity(36U);
    msg.setDestination(20659U);
    msg.setDestinationEntity(0U);
    msg.op = 253U;
    msg.clock = 0.00192099556511649;
    msg.tz = -53;

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
    msg.setTimeStamp(0.8671354568520222);
    msg.setSource(49755U);
    msg.setSourceEntity(242U);
    msg.setDestination(50553U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.44319804458034484);
    msg.setSource(6819U);
    msg.setSourceEntity(22U);
    msg.setDestination(63851U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.18081072182747726);
    msg.setSource(10596U);
    msg.setSourceEntity(113U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.3993169598823213);
    msg.setSource(17391U);
    msg.setSourceEntity(133U);
    msg.setDestination(35040U);
    msg.setDestinationEntity(104U);
    msg.sys_name.assign("WCMCBYOLUMLLNCNJQCDXACBITPLTJHGAGXYAHCPLQZOGVHASUHQMWFSWQRSNPTNGZSVKPIMPZEXRKHRWIXQUPDWJYFAQWKBZBIJAGXHRGJGUEQKIDSTNHNNYMRKMHSFUAY");
    msg.sys_type = 87U;
    msg.owner = 20649U;
    msg.lat = 0.6972992099901951;
    msg.lon = 0.004936421173959538;
    msg.height = 0.4823002839900258;
    msg.services.assign("SCFXNVIMJYPNEPKDRYZPZJBGQUWZUPRHJCSGPDUVUGTKKTUDWLADMVFFQTXYGWUQCIFYKRXCISNQULMZPVRQMJEQVXBESAKHPXTFVGETJMSACJDQUILZBFPCXGHALBZQWKJCMAOTNPLKBOSWJIYBHZFHWXOACIVYCBQIELGHALAVLINKRRNXTHYCFDNBJUGTSROPLWFOBANMEWBOEFGWWYXSHMDOAOXRITY");

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
    msg.setTimeStamp(0.8787222137339264);
    msg.setSource(60506U);
    msg.setSourceEntity(170U);
    msg.setDestination(20128U);
    msg.setDestinationEntity(39U);
    msg.sys_name.assign("EXNQZAPYMOXQYIWFZRDQEUFIAJGDNJKYZVMMFAXYJYVRHQQTCAZZZTETNGZHWBNVHOHPDBPSCGWRWKFURWMVGHFBUUIDESDHNVLMNJTLDBXNBXYQIILSSMULODTHDZJAANSCQFTOIMBEPSKKCWWVLDYFGRTIHPKVREOSWUKAUEPCQGCERMQVCSCRGMEJOZVD");
    msg.sys_type = 180U;
    msg.owner = 13170U;
    msg.lat = 0.6223857671839749;
    msg.lon = 0.07890435167504661;
    msg.height = 0.768145082565112;
    msg.services.assign("RYHNNCEWTVEUYUGXCTOGITDFYFVLGOWEYMHTFSVGIMGNYXPZOAWOJGEZCEUYMFABJDXWKBSHKTLAREGXCJBNFSHTFCSZWGCNHQRGDNWXAONLDGWFZILLRAZVDOLLPVHIWYBQPUDFOAQXDQYAYCLQJUCVPHCRZOTKBSOAEPKSTCHKJRXUKIBMJIMXDQMMPIPNHNQAWZMEVMRVU");

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
    msg.setTimeStamp(0.5888861514833007);
    msg.setSource(2094U);
    msg.setSourceEntity(25U);
    msg.setDestination(37593U);
    msg.setDestinationEntity(228U);
    msg.sys_name.assign("BNPWIWEWYHFVOYDACQKXTODCQBSYW");
    msg.sys_type = 42U;
    msg.owner = 44959U;
    msg.lat = 0.3750496182716462;
    msg.lon = 0.7652212040278545;
    msg.height = 0.016452521897802663;
    msg.services.assign("XHXBPQWGQNYIXDGNQBBTHFCNMFLUYZJJNRZOCDSIWEAEMAJVCXIWBTFJKUTZYRABXKUEFUQPAFTGIRSMPANGTZASBXKDKCWPLEJZFRSHMLBGUVZIJBVQXQ");

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
    msg.setTimeStamp(0.6326302535804562);
    msg.setSource(21008U);
    msg.setSourceEntity(60U);
    msg.setDestination(57217U);
    msg.setDestinationEntity(80U);
    msg.service.assign("VOTXWEWMIULJYIBNRGHGUHLXCRGYVZRBGVFVHCJNAVLUDWSEZYCSSRAZQBJHGHHMWFAUOOMOZTBCGKWTFSYOFKYYIDZMKFRQWIBAOTKKAHVJAMMBJEKQKLHCAPYXTDZSNMGSUJPQALGEFQSTRCECEPQOCXXNBMLSKVXJPCYFURWXNUGJDN");
    msg.service_type = 227U;

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
    msg.setTimeStamp(0.760620501990697);
    msg.setSource(42078U);
    msg.setSourceEntity(41U);
    msg.setDestination(24079U);
    msg.setDestinationEntity(205U);
    msg.service.assign("KKCBMWOSAOYMTLCLXYTPHZPNOXPUMTAQVZURINUWTOPTYUVGLFMCMOAOJXJOYMBIHZGEXDXRUBDKVGLBNGUPDDFMNIEXKTASVBEJNOEYKHPJYEPZDIBVSXIFQDXWPBUNLVBLECZCDWKZVWGXAWERFRJQDWKF");
    msg.service_type = 214U;

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
    msg.setTimeStamp(0.5279692183431371);
    msg.setSource(13732U);
    msg.setSourceEntity(81U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(80U);
    msg.service.assign("IDBWBHEQMEUGPCXGXVLVPSZWGKAXPDESKYUKRMOIMXVWTHXMKQBGQDBJUVOKARKHXCQNRCBMOFLNJIEHDKREZMCJNPBTYWJITLSABDFVPYZIWYXVZWQSSL");
    msg.service_type = 237U;

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
    msg.setTimeStamp(0.3807098587733768);
    msg.setSource(6113U);
    msg.setSourceEntity(0U);
    msg.setDestination(35121U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8323384137486413;

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
    msg.setTimeStamp(0.7993131725072089);
    msg.setSource(10965U);
    msg.setSourceEntity(32U);
    msg.setDestination(26588U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6635104799375269;

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
    msg.setTimeStamp(0.6989837111960383);
    msg.setSource(45457U);
    msg.setSourceEntity(252U);
    msg.setDestination(54139U);
    msg.setDestinationEntity(243U);
    msg.value = 0.7596632717463006;

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
    msg.setTimeStamp(0.04420736413981474);
    msg.setSource(55234U);
    msg.setSourceEntity(18U);
    msg.setDestination(65072U);
    msg.setDestinationEntity(115U);
    msg.value = 0.4817485821076768;

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
    msg.setTimeStamp(0.144021116694228);
    msg.setSource(405U);
    msg.setSourceEntity(244U);
    msg.setDestination(12718U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5655992504623558;

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
    msg.setTimeStamp(0.4153927909175017);
    msg.setSource(34674U);
    msg.setSourceEntity(8U);
    msg.setDestination(13564U);
    msg.setDestinationEntity(251U);
    msg.value = 0.15508763036084294;

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
    msg.setTimeStamp(0.7257600405663224);
    msg.setSource(27178U);
    msg.setSourceEntity(153U);
    msg.setDestination(6114U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5231475301441365;

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
    msg.setTimeStamp(0.07321688408303217);
    msg.setSource(62266U);
    msg.setSourceEntity(152U);
    msg.setDestination(45255U);
    msg.setDestinationEntity(234U);
    msg.value = 0.7215480201860859;

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
    msg.setTimeStamp(0.24908734483980233);
    msg.setSource(27288U);
    msg.setSourceEntity(168U);
    msg.setDestination(19096U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9316121414657056;

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
    msg.setTimeStamp(0.9401737572363742);
    msg.setSource(31612U);
    msg.setSourceEntity(174U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(33U);
    msg.number.assign("NGVTJTLOSCOHSHQCYNWXZYJGWOUCOWBMEFVMPZGCZNIMKDCSUORPTTBFZVDQPTIDFGRXESHECRSEMDAPFBCADGZDUJLYSETFHRFYHOBABHRZVOTYTPXAKREKKVDBQZAUWUJNBJIDKVNYSMPANHCHJXDMMYLGRRGXGOIARCGKSJZEEVFQASCUTPBVKGNEMZXDLOXPNRLKQEFXYWBHUMJUYFILILLLKIQQVPNUTQIUPBXJQFWIXMVOWZQLWKY");
    msg.timeout = 36110U;
    msg.contents.assign("EHRMUOYIAGFSVCXXPCJWGIVZYDIQQKIHJQVEIBAAZWVDOENEIBEURWKQPYVCDYWCAHMHNRXQBMPBXUSLJGKPNJHYVFEJUTTPLSLBUCFCVXTSDCPRHGNJBWDVXWDRHNRKTESDZ");

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
    msg.setTimeStamp(0.3593921993054864);
    msg.setSource(34903U);
    msg.setSourceEntity(47U);
    msg.setDestination(41756U);
    msg.setDestinationEntity(203U);
    msg.number.assign("ZONGCQNUUHIMXAWHSBKV");
    msg.timeout = 37969U;
    msg.contents.assign("PBTWLZOLMVTUZZTJWIRACPTATGBUSYVWPBNOFCLOBNNQGIOXDEGIFUVMQWSHYLYPQKQXMBFZSZRCBNZKQCWUXQGFFMDSPKEJXTYDZSMCXFPXPSYDPDEJHNPPUQCWLHROCUHTSDTGVGKWWCCIVLOUJNQDOQVLKLQKEHRIOYHNEYVAJADWTABFJSGMIXBR");

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
    msg.setTimeStamp(0.20042059919787136);
    msg.setSource(44756U);
    msg.setSourceEntity(206U);
    msg.setDestination(38188U);
    msg.setDestinationEntity(71U);
    msg.number.assign("WOXTOHIWNKIHRFQMBEZXWUMRVCBSYPQPGUIYCORBEPAEYSTNSEUDSGVJGJMQNVAZACFJTPXQQYUXVLLRYUOISKNIZIUBKUCLSNPLMCBIMGWUUVKTEFDF");
    msg.timeout = 49074U;
    msg.contents.assign("MSJOSFUWEQXJKNTELLZFGCCWNRJYWFNZCTXBCDMSJADKEPKNNYMLOVYOYOCHOPEJVKBIARGLHDEZNIWZNLIHDHIFRDGIJQFBLMSGYPYBTUDHAFQPKILRGRLWXCFVRUUVHKLKFTTJIAABXPXPTMCJESGAZAHMPOSOHXCDUNYAIOYPXXDARBXOEVNHQGWVUPWVUEEMH");

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
    msg.setTimeStamp(0.33225470610136565);
    msg.setSource(52391U);
    msg.setSourceEntity(19U);
    msg.setDestination(6625U);
    msg.setDestinationEntity(251U);
    msg.seq = 3357145694U;
    msg.destination.assign("JBEYJOKBKHKCPOHKCXDZQJAPJFZMRMZIQSWPEYFBPMUIRHOUUAEXTDJILOERNPSKRBFOLEFEDQRHLQUZSHSMWLFGACSVMYQWB");
    msg.timeout = 64895U;
    const char tmp_msg_0[] = {27, 0, -103, 90, -22, 42, 6, 31, -112, 32, -6, -73, -47, 75, 118, 97, 108, 26, 94, 54, 59, -122, 53, 107, 69, -93, 36, 61, 93, -74, -121, -36, 96};
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
    msg.setTimeStamp(0.3543957650238767);
    msg.setSource(57973U);
    msg.setSourceEntity(223U);
    msg.setDestination(59653U);
    msg.setDestinationEntity(245U);
    msg.seq = 2672124237U;
    msg.destination.assign("RCWCFLJNAYUGGKYBVIDLOHQSTFOWHKIYMRTLRHTPEWKPIPBSPOCVZAZIJXQKHRBZCZKOIZHWCHMTXADTQHWWNMLEVUQQXUFIPVFUDEXVDBDJKUGEBOJUNSMCUSFENMZPLBSLCGWZSNJCPFJDV");
    msg.timeout = 19770U;
    const char tmp_msg_0[] = {6, -72, 5, -22, -49, 38, 117, 89, 121, 8, 111, -63, 13, -83, 79, -106, -79, -125, 40, -111, -21, 90, 3, -109, 77, 2, 105, 89, -48, 52, 26, -90, -114, 88, -42, 28, 54, 29, 60, 31, 51, 46, -115, 2, -107, -8, 91, -4, -28, 13, -127, -11, 8, -58, 120, -105, -66, 68, -65, 79, 118, -58, -96, 9, 48, -30, -36, 73, -54, 96, -31, 119, 50, -83, -101, 106, -7, 112, 105, 19, -75, 13, -2, -58, 78, -20, 82, 72, -77, -112, 111, -122, 55, -113, -95, -65, 1, -127, -93, -90, 10, -47, -57, -120, -77, 83, 91, 41, -115, 3, 105, -96, -30, -4, 16, 14, 81, 71, -106, 58, 14, -113, 27, -77, 56, -2, -80, 16, 117, 7, 19, -55, -36, 115, -72, 82, 103, 49, 15, -120, 52, -73, 86, -109, -111, -13, 44, -87, 102, 53, 75, -110, 103, 63, -9, -26, 120, 111, -95, -36, 125, -18, -55, -128, 50, -19, 87, -81, 39, 65, 117, 88, 97, 21, 103, 119, -107, 12, 23, 121, 56, -75};
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
    msg.setTimeStamp(0.9018759068319864);
    msg.setSource(50433U);
    msg.setSourceEntity(251U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(125U);
    msg.seq = 2762482884U;
    msg.destination.assign("LJPZIOTXMMHNYVHPFWBLDFVKCUWOTMBIKSFRLJDSEYYOBWXSPNWYEKIXHPDRXGQZQAORUPCUJVYAVEHZPONANZXFUFDVQLGNBTYTYFDDVTCFDIDROWEZLXGSDNFQMRCGNITWAWTVRKSMSNKEJZQXUKVOTQLWSMHLJHKVJMGLFYZIJMGGIKEAXHLQJWIPEURIKSTACPRHSAUCENHUMOBYABOGHUOCPEEIQCZZJPJSBULBDXVBXBRGFQAMCCTGNQ");
    msg.timeout = 14431U;
    const char tmp_msg_0[] = {65, 80, -20, 3, -90, -46, 15, -1, 58, 103, 63, 70, 11, -19, 90, 3, 1, 110, 10, -49, 10, -1, 125, -97, -52, 81, -5, -32, 81, -48, 122, 110, -54, -71, -4, 62, -118, -5, 35, -50, 111, 119, -22, 29, 99, -86, -83, -28, 31, -19, 9, 69, -128, 76, 92, -118, 29, -35, 96, -26, 116, -36, 41, 123, -41, 63, 6, 30, 55, 62, 34, -46, -122, -60, -118, 95, 67, -126, -63, 32, -7, -5, 11, -120, -83, -72, -53, 19, 126, -119, -67, 36, -98, 55, -95, 34, 66, -76, 4, 75, -128, -70, 85, -99, -11, -63, -53, 125, -55, -86, -48, -28, 8, 77, -14, -24, 33, -115, -105, -4, 95, -34, -31, 124, 114, 47, -103, 22, -94, -79, -92, -120, 72, -52, 56, -119, -11, -83, -82, 49, 80, 61, 53, -49, 27, -59, -89, -57, -35, -109, 6, -114, -30, -65, 11, 90, 60, -67, 32, 16, 100, -39, -12, 54, 105, -48, -74, -31, -68, -65, -93, -122, 109, 98, -62, -91, -80, 68, -39, -47, 23, 23, -102, -85, -108, -105, 45, 59, -12, -84, 75, -19, -53, -39, -11, 111, 103, 20, -100, -73, 93, 58};
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
    msg.setTimeStamp(0.43576190211006316);
    msg.setSource(11665U);
    msg.setSourceEntity(250U);
    msg.setDestination(24236U);
    msg.setDestinationEntity(133U);
    msg.source.assign("BJUUEXZBWSSFOUSLJYKBYBUMDPMMJQSMNOLGWMHVHGHCABYDJNAYOZPJJTHIJFZYRFZVBEZXDPCEFGGSFEHXQGCDRRSANCDUYDRTHMEMQOWQGIXPMYDPCISKAFBXKSEXYETJUAQUNHOYL");
    const char tmp_msg_0[] = {46, 81, 95, 57, -85, -109, 15, 67, -33, 35, -42, 109, -27, -28, 9, -63, -1};
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
    msg.setTimeStamp(0.1882649341526348);
    msg.setSource(42594U);
    msg.setSourceEntity(20U);
    msg.setDestination(28155U);
    msg.setDestinationEntity(61U);
    msg.source.assign("JEGABMSIHUCMMXNUTLZFTKPHRPSVUGZHCXVQTODKNIZFTSWSVLGAEVKFKRGMXBNTZZIWCXANBLOUQTJAOTVDDUAGPYQZHPSLNEIYHOWSXFKFMRYRRZOXQDWYAZBEZIMDXPAQTFMBGQGNPUSRHCDVKBBWWJZJLCEAVFECUHWKLYSYYCNKVFNGYPVCIBUFOFDSJCIQDQJJRVUDAAXKPRWCYONROII");
    const char tmp_msg_0[] = {50, -99, -67, -128, -35, 1, 44, -39, 10, -67, 18, 55, -104, -121, -85, -55, -113, -48, -105, -19, 119, -10, -99, 99, 114, -117, 121, 68, 85, -101, 66, -73, -13, 79, -125, 26, 123, -94, 9, -113, 10, 16, 91, -123, 108, 123, -73, 8, -81, 34, 89, -120, -70, 34, -127, -29, -86, -83, 52, 5, 82, -116, -100, 113, -19, 43, -67, -9, 33, -121, 60, 18, 88, -90, 99, 4, -122, -66, -32, 121, -104, 29, -43, 30, -44, -31, 65, 119, 3, 83, 32, -123, -123, 69, 96, -66, 80, 71, -66, 39, 44, 40, 51, 98, -1, -26, -125, -33, 52, 38, -51, 30, -30, -94, 40, 92, 58, 87, 46, -77, 24, 117, 33, 59, -97, -81, 45, 98, -31, 34, -56, 27, -70, -44, 75, 29, -102, 55, -31, 83, 77, 33, 112, -86, 63, 2, -76, 38, 51, 40, -1, -27, -13, -109, 45, -71, -74, -126, 30, 11, 122, 46, -47, 60, 14, -56, 1, -45, 15, 120, 6, -110, 64, -101, 114, 103, 73, -4, -106, -83, -46, 38, -80, 81, -96, -74, -19, 97, 26, 9, -1, 0, -41, 122, -126, -49, -16, 98, 23, 105, -1, -97, 19, -16, 43, 51, -81, 14, 51, -62, 93, 61, 111, 16, 106, -1, -40, -88, -124, 26, 31, 67, -67, 22, -72, 115, -43, 24};
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
    msg.setTimeStamp(0.7919217510509942);
    msg.setSource(10354U);
    msg.setSourceEntity(230U);
    msg.setDestination(34934U);
    msg.setDestinationEntity(211U);
    msg.source.assign("YGDEUJLNFYGXYJMXEGPDZYZJCBXZXORMELOFCDAPZTNOKAMCRENHCIYSAZGTJWEPNTLULESOIKAUTVERGNDZRJWBQRTCGWPCYUFOFLZRIDMBBJICUOOEFBHUFAIGDUYIKRMIGBOPFAMDYHWZQDXOFIPJTHMSZGHNXWVQPXVJQRXVYJ");
    const char tmp_msg_0[] = {107, 55, 61, -98, 48, -33, 28, 69, 70, -46, 105, -115, -37, -51, 125, 60, 66, 49, -80, -86, 86, 85, 17, -115, -114, -43, -59, 79, 6, -57, -119, -39, 62, 117, 102, 55, -93, 27, 50, -11, -120, -90, -5, 113, 85, -102, -56, -113, 5, 2, -107, -11, -48, -24, 74, -19, -66, -71, -88, -48, -117, -57, -90, 61, -77, -101, -44, 124, -15, -61, -85, -50, -74, 10, 115, 107, -74, 14, -111, -124, -49, 102, -48, 52, 22, -19, -48, -119, -19, -104, 29, -22, 12, -48, 113, 34, -22, 18, -8, 72, -5, 74, -21, -101, -33, -3, -38, -24, -10, -34, 112, -70, -78, 118, 77, 98, -94, 6, 7, 105, 24, 7, -6, -24, 79, 90, -85, 71, -79, 44, -47, -31, -33, -63, -126, -11, 86, -104, 93, 65, -68, 92, 68, 63, 60, -83, 80, 96, 55, 75, -49, -53, 67, -71, 85, -26, 101, 118, 89, -64, 58, -27, 3, -11, 77, -94, -11, 108, -87, -54, 33, 101, -125, -82, -98, -106, 40, -51, -74, 114, 105, 9, 66, -11, -122, -71, 60, 67, -24, -39};
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
    msg.setTimeStamp(0.2879874811146117);
    msg.setSource(25755U);
    msg.setSourceEntity(248U);
    msg.setDestination(62131U);
    msg.setDestinationEntity(168U);
    msg.seq = 1013082224U;
    msg.state = 185U;
    msg.error.assign("JKXMQUCDSGVWQUEBADK");

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
    msg.setTimeStamp(0.32255579141715274);
    msg.setSource(23935U);
    msg.setSourceEntity(121U);
    msg.setDestination(8774U);
    msg.setDestinationEntity(194U);
    msg.seq = 4203959505U;
    msg.state = 10U;
    msg.error.assign("CPIHAQMTWCFMOBGQJPWKUTYCRCPBDEUKZGNJLBREADDTLIHTJX");

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
    msg.setTimeStamp(0.21619477435411794);
    msg.setSource(28929U);
    msg.setSourceEntity(167U);
    msg.setDestination(2376U);
    msg.setDestinationEntity(204U);
    msg.seq = 205320906U;
    msg.state = 58U;
    msg.error.assign("UBTSWEVXBIUMBBHGRQCKWSYFIKIXLBOOPJARZIAACDEPOQLYJZQUFKYYALUDGRNENINUNQGSMLFAOGHMSMJI");

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
    msg.setTimeStamp(0.41575362882271605);
    msg.setSource(52356U);
    msg.setSourceEntity(76U);
    msg.setDestination(28358U);
    msg.setDestinationEntity(159U);
    msg.origin.assign("OTYUKIQDHQVXRCUFIUPGHKAVVBTDWSCNVXAKRBYNXPYGEJMGRSKDDTUDEBCSDGQCOEZYVGGLKNUTIJIDLUJHWJALRMBBSIHFVZZOJOMHLFMMQZBLAYLIFZEYAIYPQFNGDTVBZXASKFOCEXPLTTHMNBPPZFCKAITQRLZWGOXRHIOJSNLCOBMARGDRYREKZSMYEMZHFKXPFHNFWUNXJCDTGULWINRXAQSK");
    msg.text.assign("UENVKDYKQPCKRMGINJMCMEBTXKRCOHQIJQKBXYRTSSPFJZROAHYGYODDQNWNHBEOVOWGTHBCUGKJJCPWCFKZSFXTYZQNTIUZMMUYBNMGWCABUOHXIWHFFJNQLFEJXZGLWKPRSGSMKHJDEISFEUDXXGVPFZEFLBQHRDUASAUIXCUVEGCYXWLMIWR");

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
    msg.setTimeStamp(0.877377331274558);
    msg.setSource(31582U);
    msg.setSourceEntity(249U);
    msg.setDestination(57062U);
    msg.setDestinationEntity(84U);
    msg.origin.assign("FDWVKOMJRVBRQATSOWWMKMONHTGGSVZIAYSDAVKLBMNTEIMYLPQBBHCRACLDQWHIILTINSIUXODNGEUXFZCSQEYAERXLHKHECBSXRUPFPAPAKZQUXPNIUWBDALQTVTYHDOYOCZFOVJXLKZQGKQFUSODAWXVNGTIJWLMEVITRUMDURIUGLHKOXKYWRWFDHUMZCSPSXJRENHMYZFMBJYG");
    msg.text.assign("CSRXYGYZUBKHMXBUDMWVFWRWRYIPBFCCTAEPKWGUQUYVEJYPZMXVIQWWWHCSZBBQWVZBSXTFFSJKOGEDKXSZSQIMHFKLHVTLETNFXEOSGACTSRTJORMQLDNAPTBUDNHMFGKNPEZULINHRVFHATODHDFLSVCIJTXDJYINOPNAAIHZGQOHIKPEEZJONKNDLBYJZLWGGDAALYXOUAMMOVZSRPBRXCTRFOKGURBYPDAXUCWEQMPLCUQJVJCGKV");

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
    msg.setTimeStamp(0.5028475515554524);
    msg.setSource(47437U);
    msg.setSourceEntity(58U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("VXANXMMZHTDDIPUBOHYJZELURYFJCXTXBKNGGXJRIWPMSBWVXUZFRTKUNDUPIFSQXVSBWVDYIMOLZPESOONCJCVCDZVSYTYEMJGZAWACLIOGRSBKRSAZEOPOMWQELMDGYBRKYUIRVHAKLCXKYBNAAEPLDRAQGMIDMKLNGQENQJCQFTNUDMXHOPJGQLCPJDUZCPTFTUJWZKT");
    msg.text.assign("JHHCSOYFMVUGZJPSOMAZZEVNUFQGCNQCMSOSUCMNPCJNIUKTQFLWDZFWIBDRYRZZVLYLNOIHZFDEYWXBXYVAKAOOKDNAJMUEBLPVBVSZPLRGHAEXATSGXIJVPJKVGKPUIJJBHOFBLBQVERBEPCRGADXIDGLUZEAHXRLDIFYVNGYNAICQHQPRRDCHJOHDAGONMUYBETZBWTXSWMWSXRTJLWQTFYCKTKQQOWWTIFTSRXPMS");

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
    msg.setTimeStamp(0.14177607898632982);
    msg.setSource(35408U);
    msg.setSourceEntity(206U);
    msg.setDestination(52697U);
    msg.setDestinationEntity(199U);
    msg.origin.assign("BXEOWAULDDUNLCNWBBPKSWDXQJAXNUGHVHIPMUWMZQUBTGMFYINBKOLVVSMUWPSNPGXSQJTEGVJGPYHSYEHJILYTJLKSGJIMNIAZPMARQZJFPHTDOCZBERQNSZYWJRBTCOTLMXTXIHQCZGXRKLJXTSUVMUYOGMYLSKCAUZGDFTV");
    msg.htime = 0.35356340655469554;
    msg.lat = 0.6512791690329868;
    msg.lon = 0.8934736751956541;
    const char tmp_msg_0[] = {116, -65, -80, -33, -18, -93, 10, -122, -30, -118, 22, -33, 8, -111, -126, -43, -104, 126, -104, -102, 102, -51, 54, 1, 83, -50, 14, -117, 11, -77, 88, 93, -77, -18, 50, 116, 72, -3, -49, 123, -91, 37, -95, 90, 76, 89, -85, -5, 96, 98, 15, -8, -43, -102, -112, 8, -83, -14, 37, 94, -54, -41, -14, -16, 92, -15, 110, -26, 14, -39, -94, -29, 74, 104, 66, -16, 113, -121};
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
    msg.setTimeStamp(0.23848308254379436);
    msg.setSource(54316U);
    msg.setSourceEntity(11U);
    msg.setDestination(32476U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("FOETFSKIKFYOAVMFXYXRMPXMAYJZRGHUGCCUWDSBEXTFONNWNHRGZZMSQGGOTMGCPWJTIIKUDZBKOVYIOBTXPTJMQQHWRTGWVIHPKJCVOGCPKLIUXNOASPDDXPMJKVYQXDPDCNBBNUHZQFQ");
    msg.htime = 0.524520767563209;
    msg.lat = 0.14941264459303627;
    msg.lon = 0.02318460634289876;
    const char tmp_msg_0[] = {13, -16, 15, -79, 55, -91, -55, -25, -103, 69, 104, 81, 27, -59, 18, 97, -37, 74, 23, 26, 20, 62, -73, 4, 9, -122, 23, 73, -104, 97, -52, -13, 66, 80, -62, 36, -79, 48, -103, -98, 2, 28, 1, -43, -109, 89, 62, -64, 64, 22, 12, 118, 124};
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
    msg.setTimeStamp(0.7366450152029568);
    msg.setSource(27983U);
    msg.setSourceEntity(224U);
    msg.setDestination(2386U);
    msg.setDestinationEntity(14U);
    msg.origin.assign("IYKACBAWENOGAGTWJDAATEFR");
    msg.htime = 0.8939005792513942;
    msg.lat = 0.48518875989140764;
    msg.lon = 0.2707358573536841;
    const char tmp_msg_0[] = {-72, -106, -120, -78, -81, -81, -33, 13, -58, -108, 44, -110, -82, 54, -24, 27, 1, -78, -24, 61, 101, 89, -98, 115, -23, 113, 70, -9, 62, 117, -101, -88, 42, -103, -72, -26, -2, -108, 63, 42, 1, -40, 20, 45, 76, 10, -116, -123, 125, -36, 23, 68, -31, -10, 96, -104, 126, -82, -52, 63, 98, 45, 77, -115, -10, 124, 15, 31, -82, 88, -34, 96, -24, -86, 105, 31, 85, -43, -76, -114, -53, 104, 8, 125, -69, -71, -62, 49, 74, 74, 125, 48, -14, 9, 53, 0, -85, 126, 80, -115, 73, -109, -22, -108, 68, -20, -85, -46, -44, -7, -101, -50, -121, 89, 41, -55, -68, 47, -51, 73, -15, -27, -9, 85, 50, 20, -5, 44, -92, 25, 120, -23, 20, -65, 14, -55, 107, 28, -107, -121, -42, 34, 78, 96, 14, -16, 8, 77, 76, 115, -22, 9, 61, 126, -27, -120, 62, 70, 66, 7, -118, -111, 84, -7, 64, 36, -121, -21, 22, -38, -49, -6, 93, 18, 93, 97, 8, 80, 125, -109, -73, 124, 105, -12, 46, -18, -97, 48, -57, 75, -25};
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
    msg.setTimeStamp(0.08799899366892461);
    msg.setSource(8732U);
    msg.setSourceEntity(65U);
    msg.setDestination(6990U);
    msg.setDestinationEntity(233U);
    msg.req_id = 31842U;
    msg.ttl = 43105U;
    msg.destination.assign("SNSOPKXLGPWMU");
    const char tmp_msg_0[] = {-103, -56, 22, -24, 67, 22, 0, 13, 88, 124, -122, -65, 27, 110, -99, -35, -60, -104, -37, 75, -115, -13, 79, -10, -124, -88, 17, -93, 42, -100, 74, -28, -22, 16, 38, 7, -89, -113, -13, 9, 89, 121, 23, -58, 38, 35, -18, 3, -102, -41, 92, 87, 12, -72, 74, -104, -92, -74, 44, -7, 102, -13, -114, 0, 20, -65, -22, 4, 15, 122, -37, 44, -69, -89, 89, 16, -58, -82, 27, -39, -111, 59, 91, 9, -63, 71, -119, 53, -73, 70, -94, -2, 48, -115, 20, 97, -100, 24, 113, 48, 103, -34, -30, -59, 122, -82, -34, 55, -103, -110, -61, 103, 18, 53, -45, -37, -78, 78, 82, -30, 71, -91, -57, 1, 93, 1, 16, -113, -41, 99, 14, 101, -104, -55, 76, -101, 1, 41, -21, -123, 62, -55, 46, -17, 39, -70, -49, 3, -107, -72, 98, -53, 41, -15, 66, 7, -9, 37, 117, -91, 2, 70, 45, -26, -123, 39, 59, 32, 90, -121, -81, 117, -88, 106, 33, 46, -3, -59, 39, 94, 11, -30, 56, 55, -92, -93, 86, 60, -89, -61, 58, -8, 3, -103, -1, 95, -57, 80, -118, 72, 25, -41};
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
    msg.setTimeStamp(0.42907565207752874);
    msg.setSource(57041U);
    msg.setSourceEntity(30U);
    msg.setDestination(5473U);
    msg.setDestinationEntity(194U);
    msg.req_id = 28559U;
    msg.ttl = 11130U;
    msg.destination.assign("DKGYVHFTWKXOBQBSKLNBHJWOTMPWGDZEFCVREQICNHUNBURZJZPPOOPQJJXVVYAHHJSXNNJQHBGEZZLWLNRXGPAZIXRVNAFRISY");
    const char tmp_msg_0[] = {-18, 8, 69, 43, 13, 3, -110, -40, 116, -6, -79, 18, -64, 26, 37, -64, -2, -39, -38, 85, -49, 33, -92, -117, -110, 114, -63, -85, 35, 119, -42, 23, -16, -119, 7, 2, 95, -101, -59, 49, 25, -26, 49, 60, -62, -124, 21, 113, 97, 27, 118, 125, 91, -89, -37, -111, 29, -3, -43, -88, 37, -45, 4, 2, -88, -11, -115, 115, 100, -86, 93, -109, 53, 89, 54, 75, -94, 120, -66, 85, 57, 24, -112, 73, -54, -113, 89, -24, 49, -102, 2, -68, 88, 115, -101, -83, -53, 61, -100, -50, 101, -125, -41, -9, -118, 105, -96, -7, -59, -97, -110, -102, 121};
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
    msg.setTimeStamp(0.40928171714123374);
    msg.setSource(5180U);
    msg.setSourceEntity(39U);
    msg.setDestination(48360U);
    msg.setDestinationEntity(87U);
    msg.req_id = 47205U;
    msg.ttl = 57561U;
    msg.destination.assign("LQNPORVETOZAHLZKXVXCEACKWICPBPHOOMIVBTGDTPDBWCYAYSTUIMEWTKWHPQJXFXSWYGRPZSAQEKSVIEFOYKIKLRUVFPOGGPVIWBTSMYEUZVYKMFCWGJWFNRRDGNCS");
    const char tmp_msg_0[] = {-112, 55, 46, 35, -25, 21, -47, 91, 44, -101, 97, 101, 13, -70, -87, -6, -9, 21, -92, 32, -71, -91, -126, -106, 23, 25, 41, -43, 37, -63, 74, 79, -86, -43, 106, 58, -24, 36, -68, 8, 115, -24, -70, 21, 32, -74, -28, 13, 21, 7, -21, 22, 45, -76, -74, -28, 81, 81, -80, -106, -82, 100, -112, -94, -118, -101, 30, -41, 79, 126, 57, 80, 84, 40, -18, 32, 15, -18, -65, -61, -59, -13, -9, -38, 32, 59, -19, -2, 47, 72, 66, 44, 7, 11, 19, 55, -124, -77, -97, -93, -37, 30, -2, 67, 72, -19, 10, -55, 8, -95, 52, -45, -21, 113, 120, -103, 55, -90, 6, 100, -85, -121, 121, -127, -45, 120, -81, 26, 105, 17, -9, -104, 99, -58, 48, 38, -104, -127, 18, -4, 96, 41, 124, -6, 95, -23, 64, -70, -28, 69, -73, -29, -112, 121, 76, 68, 19, 113, 106, -109, 85, 100, -63, 91, -26, -48, 126, -48, -118, -58, 35, -78, 90, 44, -13, 48, -109, 25, 79, -123, -54, -109, -74, -58, -1, 110, -36, -20, -110, -36, -96, 60, -52, 84, -2, 106, -92, 72, -74, 13, -26, -113, 11, -23, 32, -4, -14, -3, 12, -66, 42, -14};
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
    msg.setTimeStamp(0.16043433473174296);
    msg.setSource(46709U);
    msg.setSourceEntity(142U);
    msg.setDestination(59651U);
    msg.setDestinationEntity(162U);
    msg.req_id = 10587U;
    msg.status = 206U;
    msg.text.assign("KPQKVABQGKZWFATZTIJTJQWYOPI");

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
    msg.setTimeStamp(0.7053490348695169);
    msg.setSource(60189U);
    msg.setSourceEntity(34U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(51U);
    msg.req_id = 4775U;
    msg.status = 234U;
    msg.text.assign("DKTYDICIQB");

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
    msg.setTimeStamp(0.9170214282390504);
    msg.setSource(36729U);
    msg.setSourceEntity(107U);
    msg.setDestination(60382U);
    msg.setDestinationEntity(98U);
    msg.req_id = 29244U;
    msg.status = 217U;
    msg.text.assign("KZXZDNXLLBMTILZDJCRVBZGOOOCQTZPPELPLGIGGDDBTOEYPRKNHIEQUTLPATG");

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
    msg.setTimeStamp(0.33212875841898426);
    msg.setSource(40279U);
    msg.setSourceEntity(141U);
    msg.setDestination(9720U);
    msg.setDestinationEntity(47U);
    msg.group_name.assign("DKKKEVLXFMPOFRYXYPUGFTKZOXGUMOCTPQCLAIMEEBJWSRDVUZNFTZZHVWRVIBYCSGUMOX");
    msg.links = 650811278U;

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
    msg.setTimeStamp(0.9378288758002388);
    msg.setSource(4453U);
    msg.setSourceEntity(105U);
    msg.setDestination(17477U);
    msg.setDestinationEntity(243U);
    msg.group_name.assign("NWEGZGXQSFAAJCWCCZGCGJJKWLYRHFMUVUQLDLJXIVBITRVXLGXSDDMDWVMUOHJCGFNXKCENFVHWKZNJOZCMPMOPOSQSEDDPKBKLDRBBNADWZXMPLABHFQIYRPYOLAWEYLUWJTUQYARFHYUAUFKNCBVQUCRIGIMIITESNYJXRZPBHKVSOBGOZ");
    msg.links = 153109706U;

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
    msg.setTimeStamp(0.16604672135335286);
    msg.setSource(29833U);
    msg.setSourceEntity(193U);
    msg.setDestination(63496U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("TRTDMKCVCZFECXPOYKZNJGILSZGMXPGOIQXZQJXWNYLRAI");
    msg.links = 3254439704U;

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
    msg.setTimeStamp(0.9982094695796623);
    msg.setSource(4937U);
    msg.setSourceEntity(103U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(182U);
    msg.groupname.assign("NQJISJRRNDGSXUFHYKSUNPWHJVVKEIDLSEPNFNJCKLLCOKQTQKMHGDHWIFJTCIMXZCWBROECEPAEGWBGAUTVYLMTALBZOKW");
    msg.action = 218U;
    msg.grouplist.assign("TSWXQSSGOTSEGQUOXQWMKOIVJXINJPOFDALCORUBDMRKYUDXGXTVYMLXZERIVFUNVGTIHAQNAVBNWUCGKHUHXCVECEDJTPWAKLWDGRVOHPSTHEBTQWNYLZIGQKZFOIKR");

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
    msg.setTimeStamp(0.11462242587384353);
    msg.setSource(50894U);
    msg.setSourceEntity(128U);
    msg.setDestination(15270U);
    msg.setDestinationEntity(151U);
    msg.groupname.assign("ARAFQXDTMPFJIHFGWSBJEABXEXLDBNDPOWKFPQJYZMITHSSUIDZMNAHEZKHOFXKGXEGJJXVOSFZEONYRVXGDAPPGQSISOOLTDBCRMILKVBVYUVMHILYBUTOIFWN");
    msg.action = 62U;
    msg.grouplist.assign("YFUPKYMRRGKRHLFGIUNSHUTEASCXZLXREJTIHIQKYRTBQQJJSAGLGUPDIJFBYNQFVHCFZZEULYKSHBWWDNFLFODMVOBDPTAMBYKLPEJPVOXCLWXUEZUTAIVYDUCQFUXNKFRHZGWXWJDGABVZMJNSNQVDWWJEDTMKWNQCBZDOVVNXLOENKMSMOVRQWAECPFXYPBLTWQC");

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
    msg.setTimeStamp(0.8157205534579646);
    msg.setSource(50797U);
    msg.setSourceEntity(208U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(55U);
    msg.groupname.assign("KBVUTJYCCXTOECDZUBFCGCNWXQALOWUOFOQAMMJRNVOSZMRVRCZSRRBFEJYZLZTASRKYHTKUWLQFEEHTIQJSGFJWLHEKSTPGPWLIVUOZPSIKXTVFYBZASUXSDEGHABUMBANKDPKAPLGFVLMJOSMPNHVJVSWAUOQZMEDLJRRNGYPXQCIGHNLGYYZWLUBDEHIR");
    msg.action = 105U;
    msg.grouplist.assign("HAKHTVTWAWNFJMRWFFKEYLRZYDSPAOLHPGAUSEKHKPDKQXTGAV");

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
    msg.setTimeStamp(0.14733476251018318);
    msg.setSource(37655U);
    msg.setSourceEntity(183U);
    msg.setDestination(63561U);
    msg.setDestinationEntity(113U);
    msg.id = 92U;
    msg.range = 0.1657763976414297;

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
    msg.setTimeStamp(0.32715573778606866);
    msg.setSource(38623U);
    msg.setSourceEntity(4U);
    msg.setDestination(37353U);
    msg.setDestinationEntity(219U);
    msg.id = 12U;
    msg.range = 0.2587268229055122;

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
    msg.setTimeStamp(0.871629590436016);
    msg.setSource(22192U);
    msg.setSourceEntity(166U);
    msg.setDestination(49464U);
    msg.setDestinationEntity(4U);
    msg.id = 159U;
    msg.range = 0.15914088325139308;

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
    msg.setTimeStamp(0.5650877759865068);
    msg.setSource(58616U);
    msg.setSourceEntity(109U);
    msg.setDestination(42854U);
    msg.setDestinationEntity(80U);
    msg.tx = 188U;
    msg.channel = 4U;
    msg.timer = 43368U;

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
    msg.setTimeStamp(0.8853378928994661);
    msg.setSource(43412U);
    msg.setSourceEntity(17U);
    msg.setDestination(22517U);
    msg.setDestinationEntity(131U);
    msg.tx = 65U;
    msg.channel = 42U;
    msg.timer = 5121U;

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
    msg.setTimeStamp(0.36691499204816636);
    msg.setSource(43336U);
    msg.setSourceEntity(243U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(144U);
    msg.tx = 239U;
    msg.channel = 182U;
    msg.timer = 49644U;

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
    msg.setTimeStamp(0.9921963593005436);
    msg.setSource(6586U);
    msg.setSourceEntity(212U);
    msg.setDestination(58106U);
    msg.setDestinationEntity(243U);
    msg.beacon.assign("DKLDMBJRCHEIEPRIEJPUEPZBXWEDLTBHKCCRQQFNUFPHKTQNOOZHPQIDIWCJXNPNSIAFQMFODGOOWYWTTUJLSRCOQTLYVBBCIMSKSCVPNANMISKWDYDEZKJZHAWYCSAVRXJLPCQMYGOZBVVXLMYSXTROXAZKYGIBHVALQAFWPYXZRRUWGMSWQJDWHD");
    msg.lat = 0.008913809031093956;
    msg.lon = 0.567531004596075;
    msg.depth = 0.8663175423046974;
    msg.query_channel = 82U;
    msg.reply_channel = 37U;
    msg.transponder_delay = 203U;

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
    msg.setTimeStamp(0.8388091699501684);
    msg.setSource(17613U);
    msg.setSourceEntity(178U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(39U);
    msg.beacon.assign("ADWUBENELWUHIC");
    msg.lat = 0.7295050515621324;
    msg.lon = 0.6974140422060557;
    msg.depth = 0.9940160878301243;
    msg.query_channel = 66U;
    msg.reply_channel = 67U;
    msg.transponder_delay = 177U;

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
    msg.setTimeStamp(0.9508301147579895);
    msg.setSource(25718U);
    msg.setSourceEntity(143U);
    msg.setDestination(6341U);
    msg.setDestinationEntity(109U);
    msg.beacon.assign("ITNIFCGWVNHUCAJDEEDDTKTZTOYGJELLIDKNMPYOKUWBKLHHYUWMMNZXSCPFGTBAAXIEEYRRFJQXHTUJBQRSTYQQHTOLUBEMAPJAZVBZPPPOYLDVICDJSFOJVYWREUOXUFRXHVGMHSDBRQSFWPOXDKZWGYWKKUJGPCFKUFGEUNYFKVDWZRVARXCJBXZVDIMICTQPIC");
    msg.lat = 0.7620031273374396;
    msg.lon = 0.46733319790613503;
    msg.depth = 0.01099690123798125;
    msg.query_channel = 215U;
    msg.reply_channel = 44U;
    msg.transponder_delay = 150U;

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
    msg.setTimeStamp(0.2479002266729644);
    msg.setSource(1089U);
    msg.setSourceEntity(3U);
    msg.setDestination(19569U);
    msg.setDestinationEntity(207U);
    msg.op = 132U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FGAFGKGWKEQHANZ");
    tmp_msg_0.lat = 0.30202226175864955;
    tmp_msg_0.lon = 0.5153524754194293;
    tmp_msg_0.depth = 0.2818529956270651;
    tmp_msg_0.query_channel = 4U;
    tmp_msg_0.reply_channel = 47U;
    tmp_msg_0.transponder_delay = 91U;
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
    msg.setTimeStamp(0.33609598476924873);
    msg.setSource(34140U);
    msg.setSourceEntity(184U);
    msg.setDestination(51992U);
    msg.setDestinationEntity(15U);
    msg.op = 98U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZOQUOFAZHBNSKVINWAYZFAEXPYQYFBAGBORJGKGTPKUIJFZTEZMLVRWDPUQNLCWKYYBYXIWYCHTLTHSCC");
    tmp_msg_0.lat = 0.4328898381174813;
    tmp_msg_0.lon = 0.9824096249194293;
    tmp_msg_0.depth = 0.20802098707223382;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 178U;
    tmp_msg_0.transponder_delay = 16U;
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
    msg.setTimeStamp(0.3307626383593526);
    msg.setSource(62818U);
    msg.setSourceEntity(187U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(214U);
    msg.op = 200U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RHAXLMFLIEPLXZCCFULNWZSZEBMNYMOFXXXPDCEJWSNXOIQHGQRHZRDOMPSDYTFZWCLRBOYYSUIAJNOVIGVSLOFPHCVUEJLRJYTWIAEPZMENHDQBBCQRNKBSAQQIZXIKHKASGBISTCYKKGTJYGNWHTNTGPOPZUJJAHWQSV");
    tmp_msg_0.lat = 0.21318842485582212;
    tmp_msg_0.lon = 0.9006057576195388;
    tmp_msg_0.depth = 0.20456414553918978;
    tmp_msg_0.query_channel = 36U;
    tmp_msg_0.reply_channel = 179U;
    tmp_msg_0.transponder_delay = 234U;
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
    msg.setTimeStamp(0.9939853559136315);
    msg.setSource(22061U);
    msg.setSourceEntity(7U);
    msg.setDestination(48583U);
    msg.setDestinationEntity(254U);
    msg.address = 57U;

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
    msg.setTimeStamp(0.5272981778955069);
    msg.setSource(45593U);
    msg.setSourceEntity(14U);
    msg.setDestination(45713U);
    msg.setDestinationEntity(15U);
    msg.address = 130U;

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
    msg.setTimeStamp(0.3326635314235681);
    msg.setSource(14639U);
    msg.setSourceEntity(141U);
    msg.setDestination(53369U);
    msg.setDestinationEntity(210U);
    msg.address = 242U;

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
    msg.setTimeStamp(0.8808696097806727);
    msg.setSource(5084U);
    msg.setSourceEntity(8U);
    msg.setDestination(51147U);
    msg.setDestinationEntity(228U);
    msg.address = 157U;
    msg.status = 173U;
    msg.range = 0.9079812527392054;

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
    msg.setTimeStamp(0.25284197703716493);
    msg.setSource(22829U);
    msg.setSourceEntity(30U);
    msg.setDestination(59401U);
    msg.setDestinationEntity(164U);
    msg.address = 137U;
    msg.status = 232U;
    msg.range = 0.6954496391782601;

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
    msg.setTimeStamp(0.4934020331935509);
    msg.setSource(47565U);
    msg.setSourceEntity(121U);
    msg.setDestination(63752U);
    msg.setDestinationEntity(101U);
    msg.address = 183U;
    msg.status = 2U;
    msg.range = 0.6984734541755888;

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
    msg.setTimeStamp(0.02561604475478385);
    msg.setSource(62208U);
    msg.setSourceEntity(3U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(120U);
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("UTKJQFGRIXQMBEUQBSOUYYCBHURHFOKALOSKCTZBIAWDYDOJTLNQSMDCYWNMWRNAWNEAKKLYRKAELZMXWRA");
    tmp_msg_0.reference_frame = 34U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 22049U;
    tmp_tmp_msg_0_0.off_x = 0.953286295787335;
    tmp_tmp_msg_0_0.off_y = 0.16610003816095043;
    tmp_tmp_msg_0_0.off_z = 0.6684685230192128;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FAZTFIWBGVDYOIBVFOXSGWDCXXCONGJUEOWBKGRFBLKPUPETDMFCUKVNEJXPYUJCHVALXJZO");
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
    msg.setTimeStamp(0.8606473999787272);
    msg.setSource(28855U);
    msg.setSourceEntity(159U);
    msg.setDestination(64710U);
    msg.setDestinationEntity(71U);
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("HAUHQXOKHGYPBLSXWGOOMSMEFAELEVZRKHBLSKXRRDMWSXFCNDAZGWJHQKOEMYBANHGWWCWBUIUYIITNTATWZWFGZF");
    tmp_msg_0.timeout = 63952U;
    tmp_msg_0.contents.assign("GNEVRYGCJTCJUJIGRPUJWYHRHSOKILJWPBZJBMKYPHNP");
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
    msg.setTimeStamp(0.04990370170079084);
    msg.setSource(61013U);
    msg.setSourceEntity(53U);
    msg.setDestination(21166U);
    msg.setDestinationEntity(213U);
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 45U;
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
    msg.setTimeStamp(0.03619288179181879);
    msg.setSource(57216U);
    msg.setSourceEntity(9U);
    msg.setDestination(20979U);
    msg.setDestinationEntity(210U);
    msg.enable = 165U;

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
    msg.setTimeStamp(0.3902227439871293);
    msg.setSource(7796U);
    msg.setSourceEntity(101U);
    msg.setDestination(33594U);
    msg.setDestinationEntity(55U);
    msg.enable = 204U;

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
    msg.setTimeStamp(0.5040371872545826);
    msg.setSource(9777U);
    msg.setSourceEntity(90U);
    msg.setDestination(60337U);
    msg.setDestinationEntity(105U);
    msg.enable = 127U;

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
    msg.setTimeStamp(0.8555956554886672);
    msg.setSource(21013U);
    msg.setSourceEntity(49U);
    msg.setDestination(10028U);
    msg.setDestinationEntity(3U);
    msg.summary = 157U;
    msg.level = 194U;

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
    msg.setTimeStamp(0.6618061018461727);
    msg.setSource(24065U);
    msg.setSourceEntity(248U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(67U);
    msg.summary = 44U;
    msg.level = 23U;

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
    msg.setTimeStamp(0.4781239028659292);
    msg.setSource(6659U);
    msg.setSourceEntity(215U);
    msg.setDestination(25469U);
    msg.setDestinationEntity(248U);
    msg.summary = 186U;
    msg.level = 74U;

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
    msg.setTimeStamp(0.5980009575266552);
    msg.setSource(11050U);
    msg.setSourceEntity(33U);
    msg.setDestination(13818U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.6885810730071947);
    msg.setSource(59363U);
    msg.setSourceEntity(186U);
    msg.setDestination(11796U);
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
    msg.setTimeStamp(0.5169984253581785);
    msg.setSource(33857U);
    msg.setSourceEntity(70U);
    msg.setDestination(28388U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.44136362215736435);
    msg.setSource(17954U);
    msg.setSourceEntity(252U);
    msg.setDestination(3313U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.5834891432143414);
    msg.setSource(44536U);
    msg.setSourceEntity(177U);
    msg.setDestination(20371U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.48553516398465424);
    msg.setSource(39677U);
    msg.setSourceEntity(131U);
    msg.setDestination(49738U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.7946445422198417);
    msg.setSource(22144U);
    msg.setSourceEntity(197U);
    msg.setDestination(30879U);
    msg.setDestinationEntity(32U);
    msg.op = 42U;
    msg.system.assign("KZCUIDCYRZKMEVXBGYTHHAZMNFEVNPEMSTLSXCASPQHYZVUFJLQMEJRMXYGAXKGAPLJQNRNHKOADBOSTSUWQGVQVCMIIGRFALZZJAUDAKJSRWEWDFJWTDZCKWVQMQOYSSBKJQPBDWOXBLNNYUKVXJKURMCBEIHIRCT");
    msg.range = 0.17482091526967825;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 56715U;
    tmp_msg_0.lat = 0.5934180758021372;
    tmp_msg_0.lon = 0.39187453008070494;
    tmp_msg_0.z = 0.9835708137885575;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.duration = 48583U;
    tmp_msg_0.speed = 0.28948449844471247;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.type = 236U;
    tmp_msg_0.radius = 0.6138971458887446;
    tmp_msg_0.length = 0.36587652347697364;
    tmp_msg_0.bearing = 0.2697375816164347;
    tmp_msg_0.direction = 86U;
    tmp_msg_0.custom.assign("TOIYJNBLPCOIYIFOSMKUCANGWYYAKWQXRFMEYVJYBUXZAGLXTITOQTXAJRRWPIZUZFEOSZHFKFLIAMGWCSWAHDVWMQVIHUVDZYENHOLBKMYKARVQRVDDMJEJUBIHPCJLSCNTVJHXJUBSFASPGCGLRYIOFUZINUPNMPQXMPNJJSWGBEHWZNLMFUTXWEZDDNHGOKZWCCE");
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
    msg.setTimeStamp(0.5252923205245209);
    msg.setSource(22065U);
    msg.setSourceEntity(160U);
    msg.setDestination(43432U);
    msg.setDestinationEntity(90U);
    msg.op = 161U;
    msg.system.assign("BSOCNWQXGQGQBYZOJJBIHYRCQQJXSILRITGNPDEXDYTBKHYKEZGCVSIDDLMPHYEOWZDIGDJAHZOOAJSLWKYRNIZWXNWDBOLXXSPIWIHFYNNUJUTGAHXCOSVCAATMEWLARMMUCKHXGFEKXZUVBNIBKPRZAEGUOFFTAPFVWLPQUETJBRC");
    msg.range = 0.21135950225482125;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 207U;
    tmp_msg_0.error_count = 9U;
    tmp_msg_0.error_ents.assign("FGPBZTQVQWDLUWMASVHBAQQDNYMIIZVEJGBIUOWIRVEUYJJGAEIXKQQUSZNXBKQACHFVGWOFNXWUJCRCGRVSEXFTODTBMCDVWUFYHJTPPEQGFQKUUPMCILDFCRLYXOJTUPRPSQLZBRHYVISWOLYSAYBJPVSRRMZPNNXXMNCJSMYMCJHBMSFIBWNECWKHLZDZTENZKKZFTDETOYGXPNERFGTIUALSXILZOTDNYKHCHJDLKHGPAOVBRGDKXOH");
    tmp_msg_0.maneuver_type = 53741U;
    tmp_msg_0.maneuver_stime = 0.0465556281009446;
    tmp_msg_0.maneuver_eta = 54936U;
    tmp_msg_0.control_loops = 3441626632U;
    tmp_msg_0.flags = 203U;
    tmp_msg_0.last_error.assign("WQYBSHQJLFVQPRAPOUKDRFVKVROHUKCLLQLSNDVMMHVBKJLJHYCCZHQNBTIGTHSPFIBDIZBOXJEWIVUTPACYJSNTM");
    tmp_msg_0.last_error_time = 0.26979484941620746;
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
    msg.setTimeStamp(0.404566698590627);
    msg.setSource(63784U);
    msg.setSourceEntity(77U);
    msg.setDestination(42279U);
    msg.setDestinationEntity(242U);
    msg.op = 249U;
    msg.system.assign("OARUIAQNWVUQCCVWEQYGRGHSHPLLHZRNKRHDYNTMHWTIACJFQONNFHT");
    msg.range = 0.04038870607312306;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.9526703733063199;
    tmp_msg_0.lon = 0.15260920384310017;
    tmp_msg_0.depth = 0.4607974269838664;
    tmp_msg_0.roll = 0.46725819456318274;
    tmp_msg_0.pitch = 0.961528502318466;
    tmp_msg_0.yaw = 0.9269461745427033;
    tmp_msg_0.rcp_time = 0.033611003291873054;
    tmp_msg_0.sid.assign("EAVZIRNTUKKWFXJVLIJKDITRSCBJMMBOGDAUHMFIYVFYATJSOIZKXFVCGPJNRHFQYEQYCWKHIFUBIHTYZBVAMCUPYPLENNQAQQGLQTWVCRYSPOHHARQL");
    tmp_msg_0.s_type = 24U;
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
    msg.setTimeStamp(0.15587246938777155);
    msg.setSource(33271U);
    msg.setSourceEntity(159U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.7996071270308684);
    msg.setSource(28193U);
    msg.setSourceEntity(97U);
    msg.setDestination(25516U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.02890438218485103);
    msg.setSource(4601U);
    msg.setSourceEntity(223U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.43946844676905084);
    msg.setSource(28078U);
    msg.setSourceEntity(219U);
    msg.setDestination(4672U);
    msg.setDestinationEntity(19U);
    msg.list.assign("IPBEPADMWFMIAKZXFNBFJBDOTTJPELCJFBYJCJWYEWQRWWAQKZHVKVEDFXOTDEISRNQNNUUKIFWXGYPMGZBDJMSSZLCZSKBWUOXAWGYHINPHFZFVAOUVNRDXCSRGXNYWESMEOHWUIKJSQFYQXLRDDTGTNOVKUTGDIGQYCLPINEUOBHK");

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
    msg.setTimeStamp(0.8652894052167769);
    msg.setSource(58600U);
    msg.setSourceEntity(83U);
    msg.setDestination(12174U);
    msg.setDestinationEntity(4U);
    msg.list.assign("MZNZDFBTAWWPEQOOXBQCKJKYLGRVAODDEDPKMZYMYCDSKIBHEQFATQBTDHNXULJCWKUBNIMKUFMBKJCVUHLCXIXDJFVLRYAFMIMAGHAYPGEOHFSCYSMHBSNEPXSZBVVPZIKJAQONWWHJWSTTCLDPHCRDFFONTWTAJRWIIVXUOQZMVYQSOYGELNTRENCLOUIFQSPJZTGGPDRF");

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
    msg.setTimeStamp(0.5392626955944168);
    msg.setSource(31306U);
    msg.setSourceEntity(174U);
    msg.setDestination(49029U);
    msg.setDestinationEntity(131U);
    msg.list.assign("VVMLGJOMBREFXVGPNVCPAIDOIJIGQFKGQYJUSJPXHNBNYMNHIFSZHESSCWQPKBPMCCSNUKTKVDWOWFRNJDBJRGNTHTIYAWHAARJETXACZOVEVBLRNWXXLSXKTWYAWBNEVSCXSHMTPGOYPQALROPUQYUDAMTCQZYDAVEXFXGVDTOSLWPBFRPYGRIAZZLJETLQRFQMDDXZKWLCEGUKKYGBIIMTLEDFKHBHMKUMJILOIQCEZHUFQSOUOFNBWUY");

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
    msg.setTimeStamp(0.6835218179649012);
    msg.setSource(40151U);
    msg.setSourceEntity(244U);
    msg.setDestination(35357U);
    msg.setDestinationEntity(53U);
    msg.value = 2698;

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
    msg.setTimeStamp(0.27403520398434966);
    msg.setSource(32083U);
    msg.setSourceEntity(181U);
    msg.setDestination(17708U);
    msg.setDestinationEntity(92U);
    msg.value = 20029;

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
    msg.setTimeStamp(0.37199518146039356);
    msg.setSource(13609U);
    msg.setSourceEntity(242U);
    msg.setDestination(31151U);
    msg.setDestinationEntity(197U);
    msg.value = -1079;

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
    msg.setTimeStamp(0.48665985947513024);
    msg.setSource(28321U);
    msg.setSourceEntity(56U);
    msg.setDestination(54395U);
    msg.setDestinationEntity(25U);
    msg.value = 0.11895256620096695;

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
    msg.setTimeStamp(0.8590163052981977);
    msg.setSource(52386U);
    msg.setSourceEntity(33U);
    msg.setDestination(21663U);
    msg.setDestinationEntity(129U);
    msg.value = 0.7591971860875603;

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
    msg.setTimeStamp(0.43040596818165733);
    msg.setSource(54675U);
    msg.setSourceEntity(58U);
    msg.setDestination(55220U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6227319761585264;

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
    msg.setTimeStamp(0.7281130713613132);
    msg.setSource(46308U);
    msg.setSourceEntity(65U);
    msg.setDestination(50683U);
    msg.setDestinationEntity(56U);
    msg.value = 0.5979451111386727;

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
    msg.setTimeStamp(0.849509906150261);
    msg.setSource(14445U);
    msg.setSourceEntity(8U);
    msg.setDestination(2763U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5031419551107758;

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
    msg.setTimeStamp(0.05280256192250998);
    msg.setSource(37760U);
    msg.setSourceEntity(161U);
    msg.setDestination(32610U);
    msg.setDestinationEntity(77U);
    msg.value = 0.5506309011521289;

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
    msg.setTimeStamp(0.1838957990475517);
    msg.setSource(12199U);
    msg.setSourceEntity(173U);
    msg.setDestination(48198U);
    msg.setDestinationEntity(55U);
    msg.validity = 48484U;
    msg.type = 34U;
    msg.utc_year = 23900U;
    msg.utc_month = 125U;
    msg.utc_day = 52U;
    msg.utc_time = 0.37032849265107715;
    msg.lat = 0.1541738708633038;
    msg.lon = 0.6302825817648781;
    msg.height = 0.408176287625054;
    msg.satellites = 224U;
    msg.cog = 0.2947930889502902;
    msg.sog = 0.4682475751910181;
    msg.hdop = 0.22594759966912292;
    msg.vdop = 0.7363888982854156;
    msg.hacc = 0.32233599310552197;
    msg.vacc = 0.6814213020145431;

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
    msg.setTimeStamp(0.47871173214460006);
    msg.setSource(49873U);
    msg.setSourceEntity(60U);
    msg.setDestination(35022U);
    msg.setDestinationEntity(139U);
    msg.validity = 1566U;
    msg.type = 165U;
    msg.utc_year = 9447U;
    msg.utc_month = 45U;
    msg.utc_day = 208U;
    msg.utc_time = 0.2869244455469717;
    msg.lat = 0.12065050545273759;
    msg.lon = 0.6578440596514612;
    msg.height = 0.8004107804323073;
    msg.satellites = 18U;
    msg.cog = 0.2811914940296162;
    msg.sog = 0.10483250495565344;
    msg.hdop = 0.654379620079014;
    msg.vdop = 0.3200083193045964;
    msg.hacc = 0.25810090336061187;
    msg.vacc = 0.5356699525822188;

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
    msg.setTimeStamp(0.3818032416700057);
    msg.setSource(21743U);
    msg.setSourceEntity(106U);
    msg.setDestination(20327U);
    msg.setDestinationEntity(77U);
    msg.validity = 32092U;
    msg.type = 238U;
    msg.utc_year = 13210U;
    msg.utc_month = 45U;
    msg.utc_day = 160U;
    msg.utc_time = 0.5759293516037093;
    msg.lat = 0.9179348076494467;
    msg.lon = 0.8565123981097295;
    msg.height = 0.22757393025844508;
    msg.satellites = 102U;
    msg.cog = 0.43801224421910956;
    msg.sog = 0.8232647887025997;
    msg.hdop = 0.13180585954653212;
    msg.vdop = 0.30279379914503424;
    msg.hacc = 0.2522453841204684;
    msg.vacc = 0.4911342812156101;

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
    msg.setTimeStamp(0.9133566425586546);
    msg.setSource(8681U);
    msg.setSourceEntity(103U);
    msg.setDestination(19930U);
    msg.setDestinationEntity(71U);
    msg.time = 0.8190029452045517;
    msg.phi = 0.5066364324187581;
    msg.theta = 0.8044226663244871;
    msg.psi = 0.5350146301496655;
    msg.psi_magnetic = 0.8814894903047674;

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
    msg.setTimeStamp(0.7039388631492939);
    msg.setSource(15345U);
    msg.setSourceEntity(30U);
    msg.setDestination(48438U);
    msg.setDestinationEntity(92U);
    msg.time = 0.5148652425915967;
    msg.phi = 0.7807035833872501;
    msg.theta = 0.4996001088664408;
    msg.psi = 0.9433377954520737;
    msg.psi_magnetic = 0.48433932016330594;

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
    msg.setTimeStamp(0.6355231718923069);
    msg.setSource(13280U);
    msg.setSourceEntity(221U);
    msg.setDestination(35039U);
    msg.setDestinationEntity(240U);
    msg.time = 0.9503245512011833;
    msg.phi = 0.03950829445395154;
    msg.theta = 0.8971248221353946;
    msg.psi = 0.12052775011670258;
    msg.psi_magnetic = 0.7815214598079633;

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
    msg.setTimeStamp(0.5197892278037547);
    msg.setSource(46372U);
    msg.setSourceEntity(205U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(13U);
    msg.time = 0.25240234209453183;
    msg.x = 0.9375238704708705;
    msg.y = 0.731235602603217;
    msg.z = 0.550505669020674;
    msg.timestep = 0.9818787378381262;

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
    msg.setTimeStamp(0.2565017039811285);
    msg.setSource(23359U);
    msg.setSourceEntity(28U);
    msg.setDestination(17502U);
    msg.setDestinationEntity(147U);
    msg.time = 0.2959138300385108;
    msg.x = 0.5975487411861578;
    msg.y = 0.21131039044149713;
    msg.z = 0.9915065527117125;
    msg.timestep = 0.25931228360164726;

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
    msg.setTimeStamp(0.3415078468679601);
    msg.setSource(41865U);
    msg.setSourceEntity(156U);
    msg.setDestination(38399U);
    msg.setDestinationEntity(42U);
    msg.time = 0.4893377543683429;
    msg.x = 0.21991778628368763;
    msg.y = 0.8189044754124386;
    msg.z = 0.7300301699167326;
    msg.timestep = 0.48684603530016235;

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
    msg.setTimeStamp(0.7795702528399433);
    msg.setSource(50974U);
    msg.setSourceEntity(102U);
    msg.setDestination(61706U);
    msg.setDestinationEntity(243U);
    msg.time = 0.399047073607123;
    msg.x = 0.04291449402474323;
    msg.y = 0.6754288198995101;
    msg.z = 0.193439686830031;

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
    msg.setTimeStamp(0.956311100600537);
    msg.setSource(56873U);
    msg.setSourceEntity(70U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(218U);
    msg.time = 0.2874142414515891;
    msg.x = 0.2629982419315009;
    msg.y = 0.23432622569502126;
    msg.z = 0.9190287717225878;

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
    msg.setTimeStamp(0.40905991607259984);
    msg.setSource(61420U);
    msg.setSourceEntity(219U);
    msg.setDestination(42728U);
    msg.setDestinationEntity(113U);
    msg.time = 0.6851522999340517;
    msg.x = 0.9861749323461396;
    msg.y = 0.38391373953562513;
    msg.z = 0.2681745264103893;

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
    msg.setTimeStamp(0.2742148897597242);
    msg.setSource(4032U);
    msg.setSourceEntity(5U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(43U);
    msg.time = 0.049081411385303086;
    msg.x = 0.12550285054844046;
    msg.y = 0.4022134083680152;
    msg.z = 0.8551608706254024;

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
    msg.setTimeStamp(0.8167136855456446);
    msg.setSource(13831U);
    msg.setSourceEntity(76U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(234U);
    msg.time = 0.08441489764209009;
    msg.x = 0.7794820323151117;
    msg.y = 0.2747358081893968;
    msg.z = 0.5378392716802168;

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
    msg.setTimeStamp(0.2034913384218161);
    msg.setSource(38331U);
    msg.setSourceEntity(140U);
    msg.setDestination(16454U);
    msg.setDestinationEntity(194U);
    msg.time = 0.7640836759782411;
    msg.x = 0.6430590256749698;
    msg.y = 0.4621455385292994;
    msg.z = 0.3230597065249876;

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
    msg.setTimeStamp(0.15581791768477915);
    msg.setSource(60214U);
    msg.setSourceEntity(177U);
    msg.setDestination(15994U);
    msg.setDestinationEntity(25U);
    msg.time = 0.553695678310865;
    msg.x = 0.733320666708259;
    msg.y = 0.7230672698613636;
    msg.z = 0.22195847613111996;

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
    msg.setTimeStamp(0.3223118213326297);
    msg.setSource(7309U);
    msg.setSourceEntity(99U);
    msg.setDestination(53894U);
    msg.setDestinationEntity(133U);
    msg.time = 0.3199587513660861;
    msg.x = 0.6066237161351006;
    msg.y = 0.944040152977598;
    msg.z = 0.2608301226925617;

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
    msg.setTimeStamp(0.08100638381443404);
    msg.setSource(12293U);
    msg.setSourceEntity(41U);
    msg.setDestination(24684U);
    msg.setDestinationEntity(20U);
    msg.time = 0.42648313571178587;
    msg.x = 0.7549983918883317;
    msg.y = 0.1911429279964586;
    msg.z = 0.5051918714678536;

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
    msg.setTimeStamp(0.048027122111610976);
    msg.setSource(1758U);
    msg.setSourceEntity(125U);
    msg.setDestination(64381U);
    msg.setDestinationEntity(75U);
    msg.validity = 143U;
    msg.x = 0.5467471314999824;
    msg.y = 0.7480648689780225;
    msg.z = 0.8823150173374613;

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
    msg.setTimeStamp(0.42188937743881993);
    msg.setSource(2925U);
    msg.setSourceEntity(156U);
    msg.setDestination(16213U);
    msg.setDestinationEntity(96U);
    msg.validity = 245U;
    msg.x = 0.02630039234596515;
    msg.y = 0.6424286206818073;
    msg.z = 0.5247982086115808;

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
    msg.setTimeStamp(0.9163461692109314);
    msg.setSource(48578U);
    msg.setSourceEntity(58U);
    msg.setDestination(18366U);
    msg.setDestinationEntity(133U);
    msg.validity = 137U;
    msg.x = 0.8804516491046397;
    msg.y = 0.34011353489329255;
    msg.z = 0.0008733485999053991;

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
    msg.setTimeStamp(0.2928110514180303);
    msg.setSource(17236U);
    msg.setSourceEntity(103U);
    msg.setDestination(57995U);
    msg.setDestinationEntity(215U);
    msg.validity = 16U;
    msg.x = 0.13998563924437024;
    msg.y = 0.8886444863251636;
    msg.z = 0.30982949782195035;

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
    msg.setTimeStamp(0.10826218871404902);
    msg.setSource(30029U);
    msg.setSourceEntity(83U);
    msg.setDestination(32847U);
    msg.setDestinationEntity(152U);
    msg.validity = 107U;
    msg.x = 0.1840057413419115;
    msg.y = 0.33272023647688287;
    msg.z = 0.9846987291537463;

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
    msg.setTimeStamp(0.9054561252819288);
    msg.setSource(15802U);
    msg.setSourceEntity(128U);
    msg.setDestination(55929U);
    msg.setDestinationEntity(91U);
    msg.validity = 233U;
    msg.x = 0.910480784322839;
    msg.y = 0.9408689406140474;
    msg.z = 0.6295731918222844;

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
    msg.setTimeStamp(0.3550851577551045);
    msg.setSource(34877U);
    msg.setSourceEntity(78U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(73U);
    msg.time = 0.3496784340490542;
    msg.x = 0.7622893987863323;
    msg.y = 0.757236114832255;
    msg.z = 0.37142348982939843;

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
    msg.setTimeStamp(0.31530087735914747);
    msg.setSource(14028U);
    msg.setSourceEntity(90U);
    msg.setDestination(10892U);
    msg.setDestinationEntity(105U);
    msg.time = 0.5747547749671418;
    msg.x = 0.16654141834260627;
    msg.y = 0.6781941706229488;
    msg.z = 0.8867722635042613;

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
    msg.setTimeStamp(0.15676753120280695);
    msg.setSource(2801U);
    msg.setSourceEntity(0U);
    msg.setDestination(834U);
    msg.setDestinationEntity(96U);
    msg.time = 0.497272344652659;
    msg.x = 0.48874313228202426;
    msg.y = 0.3381786092181961;
    msg.z = 0.07178655923791943;

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
    msg.setTimeStamp(0.32170709579364887);
    msg.setSource(56020U);
    msg.setSourceEntity(208U);
    msg.setDestination(7877U);
    msg.setDestinationEntity(18U);
    msg.validity = 222U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.36842102390215825;
    tmp_msg_0.beam_height = 0.737710949951292;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.09732882760342998;

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
    msg.setTimeStamp(0.8952747665347849);
    msg.setSource(62667U);
    msg.setSourceEntity(149U);
    msg.setDestination(26659U);
    msg.setDestinationEntity(184U);
    msg.validity = 91U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9984643369451932;
    tmp_msg_0.y = 0.9389563497890467;
    tmp_msg_0.z = 0.10740634455383913;
    tmp_msg_0.phi = 0.8306137578161422;
    tmp_msg_0.theta = 0.553838668141734;
    tmp_msg_0.psi = 0.33276294880947355;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1952022716555527;
    tmp_msg_1.beam_height = 0.29354578881952886;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4925924821126224;

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
    msg.setTimeStamp(0.18627950622032252);
    msg.setSource(9036U);
    msg.setSourceEntity(222U);
    msg.setDestination(29085U);
    msg.setDestinationEntity(220U);
    msg.validity = 213U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6618219474865724;
    tmp_msg_0.y = 0.09318310607933455;
    tmp_msg_0.z = 0.06959294561649665;
    tmp_msg_0.phi = 0.4684881463025612;
    tmp_msg_0.theta = 0.9647508791567129;
    tmp_msg_0.psi = 0.9533399021085123;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1878720986544431;
    tmp_msg_1.beam_height = 0.10237981960466669;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.15572080868298555;

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
    msg.setTimeStamp(0.686862326975337);
    msg.setSource(36091U);
    msg.setSourceEntity(101U);
    msg.setDestination(14657U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7211685543467847;

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
    msg.setTimeStamp(0.0029647196845555834);
    msg.setSource(61668U);
    msg.setSourceEntity(18U);
    msg.setDestination(43017U);
    msg.setDestinationEntity(198U);
    msg.value = 0.2694716363395673;

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
    msg.setTimeStamp(0.9472244356972984);
    msg.setSource(21863U);
    msg.setSourceEntity(192U);
    msg.setDestination(3347U);
    msg.setDestinationEntity(96U);
    msg.value = 0.003147386411212816;

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
    msg.setTimeStamp(0.772902057574262);
    msg.setSource(49012U);
    msg.setSourceEntity(43U);
    msg.setDestination(20912U);
    msg.setDestinationEntity(131U);
    msg.value = 0.5901804322271014;

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
    msg.setTimeStamp(0.8090995792268866);
    msg.setSource(18215U);
    msg.setSourceEntity(223U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(81U);
    msg.value = 0.2540998113335404;

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
    msg.setTimeStamp(0.6599579628316037);
    msg.setSource(38517U);
    msg.setSourceEntity(232U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(87U);
    msg.value = 0.87201259911057;

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
    msg.setTimeStamp(0.270592883475382);
    msg.setSource(62669U);
    msg.setSourceEntity(233U);
    msg.setDestination(35653U);
    msg.setDestinationEntity(205U);
    msg.value = 0.7180006179020861;

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
    msg.setTimeStamp(0.41480277967997325);
    msg.setSource(43288U);
    msg.setSourceEntity(194U);
    msg.setDestination(4724U);
    msg.setDestinationEntity(246U);
    msg.value = 0.42545250699890436;

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
    msg.setTimeStamp(0.5416357879573243);
    msg.setSource(19543U);
    msg.setSourceEntity(41U);
    msg.setDestination(51588U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7337679401956109;

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
    msg.setTimeStamp(0.2146280886745614);
    msg.setSource(42710U);
    msg.setSourceEntity(197U);
    msg.setDestination(43876U);
    msg.setDestinationEntity(220U);
    msg.value = 0.22212042983036728;

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
    msg.setTimeStamp(0.01665795090361266);
    msg.setSource(31883U);
    msg.setSourceEntity(211U);
    msg.setDestination(37778U);
    msg.setDestinationEntity(173U);
    msg.value = 0.24627325155795854;

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
    msg.setTimeStamp(0.03227082897481415);
    msg.setSource(40715U);
    msg.setSourceEntity(177U);
    msg.setDestination(27060U);
    msg.setDestinationEntity(19U);
    msg.value = 0.4208372088432798;

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
    msg.setTimeStamp(0.9923728999439384);
    msg.setSource(61938U);
    msg.setSourceEntity(87U);
    msg.setDestination(47594U);
    msg.setDestinationEntity(100U);
    msg.value = 0.2878847865015094;

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
    msg.setTimeStamp(0.77090494033424);
    msg.setSource(60750U);
    msg.setSourceEntity(245U);
    msg.setDestination(62074U);
    msg.setDestinationEntity(16U);
    msg.value = 0.34888327720691725;

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
    msg.setTimeStamp(0.5520531164973257);
    msg.setSource(44121U);
    msg.setSourceEntity(96U);
    msg.setDestination(64093U);
    msg.setDestinationEntity(36U);
    msg.value = 0.9921739410073542;

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
    msg.setTimeStamp(0.5821071902233081);
    msg.setSource(24065U);
    msg.setSourceEntity(2U);
    msg.setDestination(63918U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0830907029467739;

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
    msg.setTimeStamp(0.26795757209602733);
    msg.setSource(44629U);
    msg.setSourceEntity(226U);
    msg.setDestination(42888U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9054359395265186;

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
    msg.setTimeStamp(0.7940249621838662);
    msg.setSource(56780U);
    msg.setSourceEntity(82U);
    msg.setDestination(52438U);
    msg.setDestinationEntity(223U);
    msg.value = 0.013131987138430334;

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
    msg.setTimeStamp(0.4508386200973292);
    msg.setSource(61871U);
    msg.setSourceEntity(50U);
    msg.setDestination(21673U);
    msg.setDestinationEntity(162U);
    msg.value = 0.21677529748889246;

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
    msg.setTimeStamp(0.06999036114336898);
    msg.setSource(7575U);
    msg.setSourceEntity(147U);
    msg.setDestination(46792U);
    msg.setDestinationEntity(27U);
    msg.value = 0.4296998231608359;

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
    msg.setTimeStamp(0.5252460109534062);
    msg.setSource(51114U);
    msg.setSourceEntity(251U);
    msg.setDestination(20353U);
    msg.setDestinationEntity(156U);
    msg.value = 0.09512783168499661;

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
    msg.setTimeStamp(0.6122486528769866);
    msg.setSource(10870U);
    msg.setSourceEntity(50U);
    msg.setDestination(35147U);
    msg.setDestinationEntity(48U);
    msg.value = 0.2826013497234646;

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
    msg.setTimeStamp(0.3719858777524093);
    msg.setSource(44792U);
    msg.setSourceEntity(251U);
    msg.setDestination(33452U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8475852463787431;

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
    msg.setTimeStamp(0.6632670956099149);
    msg.setSource(38819U);
    msg.setSourceEntity(197U);
    msg.setDestination(64607U);
    msg.setDestinationEntity(42U);
    msg.value = 0.052168568696126516;

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
    msg.setTimeStamp(0.31338405032941163);
    msg.setSource(55441U);
    msg.setSourceEntity(151U);
    msg.setDestination(64080U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.007694359009409291;
    msg.speed = 0.4801552796643277;
    msg.turbulence = 0.13993206254357393;

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
    msg.setTimeStamp(0.6266207877107471);
    msg.setSource(35235U);
    msg.setSourceEntity(76U);
    msg.setDestination(53295U);
    msg.setDestinationEntity(206U);
    msg.direction = 0.7124832409535339;
    msg.speed = 0.8782184764940123;
    msg.turbulence = 0.28764785380617;

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
    msg.setTimeStamp(0.9496997156615353);
    msg.setSource(54460U);
    msg.setSourceEntity(246U);
    msg.setDestination(55065U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.22824836667696158;
    msg.speed = 0.10594939891492017;
    msg.turbulence = 0.3302827813263791;

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
    msg.setTimeStamp(0.3991440513638056);
    msg.setSource(30619U);
    msg.setSourceEntity(77U);
    msg.setDestination(64119U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7493181267767844;

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
    msg.setTimeStamp(0.6244809251390775);
    msg.setSource(23681U);
    msg.setSourceEntity(234U);
    msg.setDestination(65230U);
    msg.setDestinationEntity(34U);
    msg.value = 0.12259270327293659;

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
    msg.setTimeStamp(0.8842173896366593);
    msg.setSource(58401U);
    msg.setSourceEntity(18U);
    msg.setDestination(58757U);
    msg.setDestinationEntity(90U);
    msg.value = 0.006565856184762242;

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
    msg.setTimeStamp(0.4798876346373563);
    msg.setSource(33762U);
    msg.setSourceEntity(115U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(10U);
    msg.value.assign("COBYQLNLYKQXVAXDRUSUTXFZQWQFHALCKWSOUNIMPTLSHQKEJS");

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
    msg.setTimeStamp(0.6926817456672679);
    msg.setSource(684U);
    msg.setSourceEntity(219U);
    msg.setDestination(42444U);
    msg.setDestinationEntity(217U);
    msg.value.assign("QABYTYDGLSLCVFHCPIVNODBFYHHEASZECGFSSZZMKOVYDMVDSJRELGOVETBKMFINTTYKIGUAQXLACGWJNOZBGKKURJHTPPKJIVVEMLGNXCHEWOVJRVAXDOCYQHTIWMNZELZFUYNURUHMBNMUILIWCNSOQTFXHUJFRWBVLBPWDRINBMNPZDPCQEQLHXFDMUWYMHPCTPXSSJZBFKXUKWRRSCPGTA");

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
    msg.setTimeStamp(0.08201769190857622);
    msg.setSource(20471U);
    msg.setSourceEntity(186U);
    msg.setDestination(58145U);
    msg.setDestinationEntity(25U);
    msg.value.assign("BWLBJNNBJVXPNGIYZVZCDNTFACTGNXBLJUTCRQJDTFPLXFOPAPZMCCUQCLJ");

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
    msg.setTimeStamp(0.8242243550923528);
    msg.setSource(63173U);
    msg.setSourceEntity(131U);
    msg.setDestination(43671U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {104, 97, 17, -43, 91, -11, 48, 120, 28, -27, -40, -59, 88, 38, 9, -97, 115, -57, 50, 91, -43, -95, 20, 68, 91, -45, -79, 56, 1, 86, -6, -95, -60, 113, -7, 110, -20, 99, 77, 38, -56, 25, -112, -75, -124, -5, -111, 33, 96, -33, -106, -31, 77, -99, 3, 42, -9, -60, -6, -13, -41, 78, -59, -30, -92, -65, 104, 0, 54, 114, 121, -85, 114, -12, -20, 121, 46, 5, 4, -66, 27, 25, -82, 14, 31, -109, -43, 118, -115, 93, -35, -127, 88, 59, -70, -102, -75, 16, 28, -42, 82, -118, 26, 32, -85, 117, -104, 47, 73, 24, -106, -26, -119, 101, -101, -7, -16, 53, 64, 108, -70, -7, -79, -49};
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
    msg.setTimeStamp(0.07134195856215098);
    msg.setSource(43374U);
    msg.setSourceEntity(102U);
    msg.setDestination(51304U);
    msg.setDestinationEntity(191U);
    const char tmp_msg_0[] = {19, -33, 9, -58, -92, -102, 94, -74, 121, -99, -10, -86, 0, -77, -48, 125, 96, 122, -28, -59, 113, -93, -120, -121, 25, 21, -106, -66, -76, 31, 58, 79, -50, 117, -27, 36, 62, -1, 105, -4, 34, 83, 43, 28, 93, 44, -7, -112, -22, -73, -39, -32, 7, 75, 89, 111, 21, 114, 77, 123, 111, 44, -70, 123, -15, 21, -96, 118, -74, -34, 15, -44, -4, -110, 67, -85, 108, -95, 34, -22, 77, -116, 43, -66, 125, -59, 101, 109, 30, 99, -57, 34, 77, 113, 11, 83, 105, -94, 44, -102, -32, -74, -112, -89, 120, 57, 60, -56, -34, -6, 114, -34, 20, -31, -45, -73, 62, 69, -114, -124, -87, 85, 94, 23, 79, 85, 36, 7, 8, -77, 36, 31, 80, 109, 101, -76, 9, 122, 48, -90, -107, -92, -68, -19, -63, 67, -21, 111, 26, 125, -77, 29, 54, 120, -12, -19, -99, -102, 59, -16, -41, -83, 51, 89, -25, -50, -54, -76, 71, 6, 78, 59, -58, 90, -56, -18, 124, -43, 69, 107, 70, -85, 4, -69, 104, -74, -2, -102, 53, 31, 104, 122, -64, -100, 10, -47, -17, 8, -65, 57, -20, -17, 114, -49, -63, 84, 58, 60, -2, -7, 101, -106, 52, -24, 93, 53, 89, -4, 70, 56, 26, -112, 32, -118, -23, -117, 110, 86, -110, 86, 125, 25, 90, -32, -49, 126, -94, -127, 63, 29, 55, -94, 38, -31, -54, 61, 91, 81, 76, -62};
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
    msg.setTimeStamp(0.9197605723586726);
    msg.setSource(28687U);
    msg.setSourceEntity(13U);
    msg.setDestination(17743U);
    msg.setDestinationEntity(123U);
    const char tmp_msg_0[] = {13, -112, -2, -50, 8, 31, 7, 72, -46, 85, 49, 18, 31, 104, 60, -31, 105, 108, 6, -68, -57, -57, 12, -86, -81, -44, 111, -32, 1, 65, -61, -59, 122, 73, -95, -56, -100, 52, -90, 23, 66, 106, 14, 4, 82, -58, 50, -9, 65, -21, -110, 23, -62, 100, -12, 102, 46, -6, -23, -102, 116, -45, 18, 51, 20, -60, -70, 109, -23, -16, 94, 39, -104, -42, -15, 20, -51, -128, -55, -52, -19, -96, -91, 19, 117, 62, -43, 3, -101, -104, 98, 3, -89, -71, -90, 16, -123, 94, 1, 86, -98, 62, -88, -26, 68, -24, -116, 59, -26, -76, 17, 32, -2, 9};
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
    msg.setTimeStamp(0.017239411525448278);
    msg.setSource(65138U);
    msg.setSourceEntity(250U);
    msg.setDestination(2306U);
    msg.setDestinationEntity(127U);
    msg.frequency = 382717679U;
    msg.min_range = 6575U;
    msg.max_range = 41306U;

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
    msg.setTimeStamp(0.5025362588274941);
    msg.setSource(64419U);
    msg.setSourceEntity(227U);
    msg.setDestination(27111U);
    msg.setDestinationEntity(10U);
    msg.frequency = 2025920461U;
    msg.min_range = 23713U;
    msg.max_range = 22667U;

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
    msg.setTimeStamp(0.9400884200963163);
    msg.setSource(2130U);
    msg.setSourceEntity(244U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(216U);
    msg.frequency = 4151499472U;
    msg.min_range = 17869U;
    msg.max_range = 8917U;

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
    msg.setTimeStamp(0.2663294002607399);
    msg.setSource(57794U);
    msg.setSourceEntity(64U);
    msg.setDestination(32963U);
    msg.setDestinationEntity(244U);
    msg.type = 61U;
    msg.frequency = 884312524U;
    msg.min_range = 41967U;
    msg.max_range = 38054U;
    msg.bits_per_point = 183U;
    msg.scale_factor = 0.2783036430833661;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7672257219727636;
    tmp_msg_0.beam_height = 0.8401360339144638;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-118, 114, -19, -69, -119, 121, 98, 77, 77, -33, -49, -54, 79, -19, 113, 22, 125, 96, 117, -19, 80, 1, -53, -62, 85, 48, 93, -77, 11, 83, -106, 84, 80, -8, -16, 71, -35, 42, 100, -128, 52, -40, 43, 14, -79, -91, 123, -55, -37, -106, 96, 44, 35, -96, 3, 111, 111, 2, 49, 22, 14, -121, -107, -61, -119, -72, 5, 111, -7, 13, 92, 51, -16, -70, -42, 4, -77};
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
    msg.setTimeStamp(0.05459770287564958);
    msg.setSource(11676U);
    msg.setSourceEntity(63U);
    msg.setDestination(56061U);
    msg.setDestinationEntity(186U);
    msg.type = 95U;
    msg.frequency = 215826153U;
    msg.min_range = 29799U;
    msg.max_range = 32582U;
    msg.bits_per_point = 74U;
    msg.scale_factor = 0.019232378156507246;
    const char tmp_msg_0[] = {-70, 104, -45, -97, -41, 30, -84, -121, -73, 89, -111, -41, -38, -84, -81, 115, 15, -128, -4, 81, -126, -109, -55, -24, 18, -12, -82, 43, 44, -17, 84, 111, 53, -98, 87, 83, 123, 91, -17, 11, -115, -69, -75, -18, 47, -60, 9, 28, -59, 77, -117, 79, 109, -78, 65, 17, -29, 110, 115, -52, -33, -115, 47, 112, 92, -21, -110, -84, -77, -49, -111, 16, -104, -84, -85, 90, 52, -120, -116, -14, -23, -16, -95, 15, 11, -10, 112, 9, 94, 94, -105, 10, -92, 38};
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
    msg.setTimeStamp(0.17409830723098418);
    msg.setSource(64375U);
    msg.setSourceEntity(216U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(29U);
    msg.type = 186U;
    msg.frequency = 398541716U;
    msg.min_range = 13031U;
    msg.max_range = 32726U;
    msg.bits_per_point = 109U;
    msg.scale_factor = 0.46562799071363004;
    const char tmp_msg_0[] = {-72, 8, 121, 41, -87, -5, 67, 110, -121, -97, 71, 69, -66, 22, -6, -70, 101, 20, 36, -53, 86, 43, -23, -40, -65, -79, 64, 30, 62, 48, 78, 100, -60, -22, 93, 11, 45, -44, -6, 106, 93, 62, -89, 24, 10, 11, 21, -24, 76, 14, 81, 21, 93, -31, 75, 58, 63, -107, -55, -48, -54, 15, -95, 56, -75, -40, -94, 4, -108, 69, 114, -123, 100, -45, -107, -90, 76, -71, 49, -29, 65, 48, -7, 18, 12, 4, -103, 48, 17, 26, 89, 73, 60, -24, -16, 72, 19, 117, -104, -58, 83, -50, -17, 51, 76, -104, -65, 77, -111, 38, -21, -53, 120, -61, -38, 84, -80, 3, 53, -37, -24, -88, 82, 88, 6, -34, 52, -84, -99, -122, -42, -121, 13, -43, 102, -118, 10, 89, -121, -26, -9, -81, 107, -99, 60, 85, -33, 54, 20, 126, 90, -116, 48, 65, 124, -22, -6, 32, -19, 68, 39, -43, -66, 32, -108, 110, 72, -23, -5, -81, -17, 52, -24, 126, 117, -104, 53, -54, 82, -24, -19, -84, 87, 89, 81, -28, 46, 74, 108, -60, -10, -11, -110, 94, -19, -73, -63, -88, -120, 114, 27, -43, -84, 18, -113, 55, -119, -7, -65, 47, 27, -75, 82};
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
    msg.setTimeStamp(0.8058694741749883);
    msg.setSource(56878U);
    msg.setSourceEntity(169U);
    msg.setDestination(41028U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.1560263714990454);
    msg.setSource(64824U);
    msg.setSourceEntity(57U);
    msg.setDestination(44829U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.6533010673336619);
    msg.setSource(14088U);
    msg.setSourceEntity(150U);
    msg.setDestination(57749U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.4426579981096491);
    msg.setSource(54864U);
    msg.setSourceEntity(246U);
    msg.setDestination(48983U);
    msg.setDestinationEntity(178U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.03580096474483241);
    msg.setSource(40999U);
    msg.setSourceEntity(187U);
    msg.setDestination(37605U);
    msg.setDestinationEntity(247U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.6706318413698511);
    msg.setSource(24015U);
    msg.setSourceEntity(235U);
    msg.setDestination(46378U);
    msg.setDestinationEntity(22U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.018133577816557667);
    msg.setSource(37524U);
    msg.setSourceEntity(192U);
    msg.setDestination(27647U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3727707328259716;
    msg.confidence = 0.9611746417129441;
    msg.opmodes.assign("VPFTXNKUCNWJFCZPGJEWPBASHUHGPSQIXACRMKJJXHRQYZCMHIMRBNBSWDVHVWOIEVWTSPDHNGXTBUCJIKKECUUJREKWYNWQOGLMOPXXTHXFLNRKHOMJNYZLDZFFBPAQORUGTYOEDDWQGVEGQYXMZSSBLPILYEABVSFPJBFWWKLIDDZJHXMMEZQLTSUGAFCNIRTBLTUJASKYVYPCORTDAXIVNQFADQCV");

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
    msg.setTimeStamp(0.7001695702789363);
    msg.setSource(40320U);
    msg.setSourceEntity(116U);
    msg.setDestination(8559U);
    msg.setDestinationEntity(93U);
    msg.value = 0.22905997237165154;
    msg.confidence = 0.014150060767301298;
    msg.opmodes.assign("GJCEWINCZRGEQEQLWLTEYJIUDGYDSGFXCVSRUHSBQUAWFLRCDKPJPHTRCGUZWHQYRBMPREDLZBHMPHAXGZCVZZSGMIBMWWEBSVOCEJTENKYUPKNXXUPSNRCEVAOOXOTWKZBJQKQDLQWPQDFBNJCMFEKYFWTFLMVLAZUXXFSYXMZJBAUYISIXTHBZHGJYATRVRANOCKVIVKNXSKIPITGJDOOPTLIKGFSMAFPIADOYFQOVH");

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
    msg.setTimeStamp(0.2350653376669336);
    msg.setSource(41608U);
    msg.setSourceEntity(26U);
    msg.setDestination(8323U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8611988574799143;
    msg.confidence = 0.26426259165049715;
    msg.opmodes.assign("CCFLEAUVLXIYCUAXWOBUKYAQSHYNWZVYTGBPYUQFEUBRRSKGPWDJUOOUPBMRNSJNIGTIINNTNYABFTQWDZMZVBDAQLZDLISTRKEQTGPHRAZOIRCFXJJJJWF");

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
    msg.setTimeStamp(0.0677093210092996);
    msg.setSource(22923U);
    msg.setSourceEntity(203U);
    msg.setDestination(36861U);
    msg.setDestinationEntity(166U);
    msg.itow = 730572081U;
    msg.lat = 0.027281360951329048;
    msg.lon = 0.4958095162476387;
    msg.height_ell = 0.682775382578923;
    msg.height_sea = 0.4714961477655829;
    msg.hacc = 0.8137460055286868;
    msg.vacc = 0.7414563079850396;
    msg.vel_n = 0.39556260502698504;
    msg.vel_e = 0.12937304695458407;
    msg.vel_d = 0.43627559582256736;
    msg.speed = 0.6933994681449479;
    msg.gspeed = 0.16175124620017411;
    msg.heading = 0.7561222108512938;
    msg.sacc = 0.5111112468817361;
    msg.cacc = 0.5072099517670817;

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
    msg.setTimeStamp(0.21993487091079988);
    msg.setSource(63958U);
    msg.setSourceEntity(25U);
    msg.setDestination(44879U);
    msg.setDestinationEntity(171U);
    msg.itow = 4279281419U;
    msg.lat = 0.2640288517272783;
    msg.lon = 0.0014709648802757602;
    msg.height_ell = 0.4806462227157454;
    msg.height_sea = 0.03804110418122697;
    msg.hacc = 0.35982330291288933;
    msg.vacc = 0.5009683524626022;
    msg.vel_n = 0.8052016400200263;
    msg.vel_e = 0.8563781353480789;
    msg.vel_d = 0.7194742131389094;
    msg.speed = 0.02147590233975394;
    msg.gspeed = 0.9988154193215424;
    msg.heading = 0.1697374297937122;
    msg.sacc = 0.7166937255616637;
    msg.cacc = 0.07874812129884612;

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
    msg.setTimeStamp(0.8639520250455406);
    msg.setSource(14103U);
    msg.setSourceEntity(52U);
    msg.setDestination(45359U);
    msg.setDestinationEntity(8U);
    msg.itow = 4286122382U;
    msg.lat = 0.6596891789974902;
    msg.lon = 0.5338725306758625;
    msg.height_ell = 0.022629187314200827;
    msg.height_sea = 0.6441919968147515;
    msg.hacc = 0.5567695507490267;
    msg.vacc = 0.4671257767907915;
    msg.vel_n = 0.045657789674376725;
    msg.vel_e = 0.2502200089929949;
    msg.vel_d = 0.25398745533857614;
    msg.speed = 0.725681427095974;
    msg.gspeed = 0.20280261078952755;
    msg.heading = 0.9056082061916118;
    msg.sacc = 0.3719926770131772;
    msg.cacc = 0.5480416256243623;

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
    msg.setTimeStamp(0.7860030304228249);
    msg.setSource(20821U);
    msg.setSourceEntity(1U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(171U);
    msg.id = 113U;
    msg.value = 0.5591997219212498;

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
    msg.setTimeStamp(0.21627330679940227);
    msg.setSource(39160U);
    msg.setSourceEntity(219U);
    msg.setDestination(58365U);
    msg.setDestinationEntity(154U);
    msg.id = 114U;
    msg.value = 0.5474330006683119;

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
    msg.setTimeStamp(0.7101941871390217);
    msg.setSource(15225U);
    msg.setSourceEntity(76U);
    msg.setDestination(33907U);
    msg.setDestinationEntity(12U);
    msg.id = 134U;
    msg.value = 0.8371945692004528;

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
    msg.setTimeStamp(0.5988697596402485);
    msg.setSource(43526U);
    msg.setSourceEntity(229U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(63U);
    msg.x = 0.02914982603144689;
    msg.y = 0.09609055603110173;
    msg.z = 0.6747511100630273;
    msg.phi = 0.9811210651754024;
    msg.theta = 0.7799324115711677;
    msg.psi = 0.9599714098667275;

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
    msg.setTimeStamp(0.10625082867555968);
    msg.setSource(31767U);
    msg.setSourceEntity(76U);
    msg.setDestination(50838U);
    msg.setDestinationEntity(5U);
    msg.x = 0.4635433063878601;
    msg.y = 0.13331393033251948;
    msg.z = 0.12671363553689574;
    msg.phi = 0.6730701168244638;
    msg.theta = 0.8295677744027355;
    msg.psi = 0.4733943445327997;

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
    msg.setTimeStamp(0.17398158087876137);
    msg.setSource(32063U);
    msg.setSourceEntity(103U);
    msg.setDestination(4586U);
    msg.setDestinationEntity(31U);
    msg.x = 0.6889122612467928;
    msg.y = 0.9396129820785798;
    msg.z = 0.581664093049077;
    msg.phi = 0.47297473229506637;
    msg.theta = 0.1926612714138468;
    msg.psi = 0.814893680769544;

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
    msg.setTimeStamp(0.923471154732228);
    msg.setSource(63497U);
    msg.setSourceEntity(180U);
    msg.setDestination(186U);
    msg.setDestinationEntity(3U);
    msg.beam_width = 0.9556654776563178;
    msg.beam_height = 0.30087705456423575;

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
    msg.setTimeStamp(0.24985555551903194);
    msg.setSource(60636U);
    msg.setSourceEntity(197U);
    msg.setDestination(61954U);
    msg.setDestinationEntity(132U);
    msg.beam_width = 0.012722216871731362;
    msg.beam_height = 0.9597475375314519;

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
    msg.setTimeStamp(0.5156981542501713);
    msg.setSource(50364U);
    msg.setSourceEntity(13U);
    msg.setDestination(48534U);
    msg.setDestinationEntity(246U);
    msg.beam_width = 0.29983024507117506;
    msg.beam_height = 0.7526986665339666;

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
    msg.setTimeStamp(0.6176131689396527);
    msg.setSource(65109U);
    msg.setSourceEntity(123U);
    msg.setDestination(36822U);
    msg.setDestinationEntity(181U);
    msg.sane = 140U;

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
    msg.setTimeStamp(0.7299820479358955);
    msg.setSource(32394U);
    msg.setSourceEntity(62U);
    msg.setDestination(31396U);
    msg.setDestinationEntity(216U);
    msg.sane = 219U;

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
    msg.setTimeStamp(0.32184236219416473);
    msg.setSource(62215U);
    msg.setSourceEntity(203U);
    msg.setDestination(62158U);
    msg.setDestinationEntity(51U);
    msg.sane = 137U;

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
    msg.setTimeStamp(0.719271276139617);
    msg.setSource(41721U);
    msg.setSourceEntity(196U);
    msg.setDestination(4317U);
    msg.setDestinationEntity(249U);
    msg.id = 192U;
    msg.zoom = 6U;
    msg.action = 32U;

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
    msg.setTimeStamp(0.27698078306669816);
    msg.setSource(58952U);
    msg.setSourceEntity(135U);
    msg.setDestination(46364U);
    msg.setDestinationEntity(87U);
    msg.id = 146U;
    msg.zoom = 43U;
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
    msg.setTimeStamp(0.8273151112100824);
    msg.setSource(16770U);
    msg.setSourceEntity(232U);
    msg.setDestination(64429U);
    msg.setDestinationEntity(213U);
    msg.id = 216U;
    msg.zoom = 53U;
    msg.action = 49U;

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
    msg.setTimeStamp(0.30921761725921404);
    msg.setSource(30059U);
    msg.setSourceEntity(7U);
    msg.setDestination(15188U);
    msg.setDestinationEntity(114U);
    msg.id = 105U;
    msg.value = 0.1763929530119488;

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
    msg.setTimeStamp(0.011962409354155379);
    msg.setSource(61099U);
    msg.setSourceEntity(223U);
    msg.setDestination(13750U);
    msg.setDestinationEntity(23U);
    msg.id = 15U;
    msg.value = 0.8613681147342093;

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
    msg.setTimeStamp(0.5036318329250762);
    msg.setSource(60244U);
    msg.setSourceEntity(115U);
    msg.setDestination(63773U);
    msg.setDestinationEntity(122U);
    msg.id = 18U;
    msg.value = 0.7205335568039044;

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
    msg.setTimeStamp(0.998500022988514);
    msg.setSource(31662U);
    msg.setSourceEntity(14U);
    msg.setDestination(33257U);
    msg.setDestinationEntity(27U);
    msg.id = 76U;
    msg.value = 0.2673175982912086;

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
    msg.setTimeStamp(0.5952963216866124);
    msg.setSource(30496U);
    msg.setSourceEntity(8U);
    msg.setDestination(56763U);
    msg.setDestinationEntity(81U);
    msg.id = 61U;
    msg.value = 0.891027797838312;

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
    msg.setTimeStamp(0.8862918220574119);
    msg.setSource(62227U);
    msg.setSourceEntity(161U);
    msg.setDestination(53559U);
    msg.setDestinationEntity(160U);
    msg.id = 131U;
    msg.value = 0.7033833998711521;

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
    msg.setTimeStamp(0.7732939596726149);
    msg.setSource(36036U);
    msg.setSourceEntity(210U);
    msg.setDestination(8746U);
    msg.setDestinationEntity(211U);
    msg.id = 144U;
    msg.angle = 0.05641338949811936;

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
    msg.setTimeStamp(0.3921173539904763);
    msg.setSource(9062U);
    msg.setSourceEntity(81U);
    msg.setDestination(43430U);
    msg.setDestinationEntity(186U);
    msg.id = 46U;
    msg.angle = 0.3342555551915106;

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
    msg.setTimeStamp(0.707485999614337);
    msg.setSource(7959U);
    msg.setSourceEntity(126U);
    msg.setDestination(9595U);
    msg.setDestinationEntity(98U);
    msg.id = 48U;
    msg.angle = 0.6650378451403167;

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
    msg.setTimeStamp(0.04943297218906273);
    msg.setSource(18996U);
    msg.setSourceEntity(40U);
    msg.setDestination(3140U);
    msg.setDestinationEntity(133U);
    msg.op = 130U;
    msg.actions.assign("EHLJTCYMJMBPOHVDRBRWUAJVNPUAZUSJLMOWZLXWDSFCMRPHBFCDDIIXIGOUZMNEACEAZYMYQXRZFATLUEMBKMGOWQCNFJKPTRRDKKTCVMQNSVBKHNUQYTFGGCLJTIXNAQKNTGYJPHIFUNEHWBSSRHCZLTVROXSUGIEXDXWXRPHJISTVSGKDJGZWFEOPHAIMODLAYHXGVZFUYKCQONCZTVPVWBG");

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
    msg.setTimeStamp(0.31152187176239454);
    msg.setSource(57035U);
    msg.setSourceEntity(122U);
    msg.setDestination(26291U);
    msg.setDestinationEntity(156U);
    msg.op = 58U;
    msg.actions.assign("SOTLMSDMJUFTHYIYZVRMSZJHDDLUAWHKEHTABXBGEPBOEJGFNPEWCRGWSDNYZZXTPAJFKVQBRKORBFRVFLCCHAVASFQOMNAWBJZPVILBGIQOCIHMMMRVWSNWLKUKGAHYQRSCAEFQWNTTUNMKKFCIKPPPWNTXOSCIWVVLVXSNUYQYCZKDUGJILTOTVUDQLBJUHIETWSUAYXHDFOGGRYDXEPXJQNXOFEEYYDLRBBZXZJMEZUIGCDXCAKIRMNLHJG");

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
    msg.setTimeStamp(0.170008036236586);
    msg.setSource(22662U);
    msg.setSourceEntity(53U);
    msg.setDestination(9003U);
    msg.setDestinationEntity(204U);
    msg.op = 47U;
    msg.actions.assign("LJVUGNMMOXOBAWTBDPUZNCIIVWFGJTTQIAVYKCEDATRAPDLHPAEQUYXHMLMJWWEWJSUOVGPAFCHTPRZUVAGAEOBKYWTRGSHEAOKPXYYUZNIFAWCGIUSXBRMOZVBSOIEPPNEVSKHDMNHVCEQDYCHMTMGZFQKZETZSQSLGICGBUKQOHRNYUHNPRKWMLRJJKBXZIWXEJJLFIXSNHOLJSB");

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
    msg.setTimeStamp(0.8040983792713646);
    msg.setSource(9787U);
    msg.setSourceEntity(86U);
    msg.setDestination(28175U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("BCZHTDDPZAIHJDSFGRMXZCQZXMTQKEOBHUOBNKGBLCEUFSZBGZT");

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
    msg.setTimeStamp(0.23271412179029383);
    msg.setSource(51510U);
    msg.setSourceEntity(113U);
    msg.setDestination(49356U);
    msg.setDestinationEntity(13U);
    msg.actions.assign("PLSORCILCBFHCLKBBTSDSLEPNFWSBDNUJNPAFMDAOGJEEUYDUFIZJVDQZYAGVTOWVNPHSOXDCNIAWNOTAMPUXEJOUBGHUVCCYIGJAMDSXTWQGMENKZIKOYXQSHTZLQLKRYWVDFXHCQQMJKMLLVRBKZMRZR");

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
    msg.setTimeStamp(0.33698868007996485);
    msg.setSource(46917U);
    msg.setSourceEntity(59U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(15U);
    msg.actions.assign("LQRGCDSBYKBGPLWMBLIAQXHGYEAFBPIBIZQPZDDRYWSWISIVCBDGGUVJFZVHFLCOSXUIC");

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
    msg.setTimeStamp(0.21177223913890986);
    msg.setSource(54948U);
    msg.setSourceEntity(228U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(16U);
    msg.button = 115U;
    msg.value = 114U;

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
    msg.setTimeStamp(0.36386508978909526);
    msg.setSource(8544U);
    msg.setSourceEntity(142U);
    msg.setDestination(13099U);
    msg.setDestinationEntity(77U);
    msg.button = 188U;
    msg.value = 130U;

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
    msg.setTimeStamp(0.8441194502380334);
    msg.setSource(15005U);
    msg.setSourceEntity(163U);
    msg.setDestination(6813U);
    msg.setDestinationEntity(17U);
    msg.button = 146U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.036819463769605876);
    msg.setSource(21253U);
    msg.setSourceEntity(8U);
    msg.setDestination(40610U);
    msg.setDestinationEntity(212U);
    msg.op = 13U;
    msg.text.assign("LTDYFUAMTCUDESZLXZVGBLSLCFKYWJDUWVGVOKBDZLOHNOYSFMTIYZATNYWRAPRVYPWABPQXNXDVERQHSITTQIBHGHPWZQXIHKEHEXFJRKVIUWXSVJUE");

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
    msg.setTimeStamp(0.796947100502919);
    msg.setSource(8396U);
    msg.setSourceEntity(28U);
    msg.setDestination(54453U);
    msg.setDestinationEntity(235U);
    msg.op = 9U;
    msg.text.assign("URXJTMCQAAAPFTPEKEVFGIWJDKWRKYPOVRWQSSLHKUJHLBZPPRJMONBOQEHKUJILSYSBMJWLTNCFSJFKHAFWXJUKCDIRHGOQKFWUDSHZTMQGGIMIYVIDBRAVUDDORYLZEFYWNMPQBNGYCQ");

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
    msg.setTimeStamp(0.4270574946570721);
    msg.setSource(34558U);
    msg.setSourceEntity(100U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(137U);
    msg.op = 105U;
    msg.text.assign("NRJMZAWEKMKPSKBYALOTXISJEJQTVUGDPFSBGUFCRNHOFBLIUTORDFKBYQWLUAIAXHSPAKIIQUYKNZQYVQAKMGEECXTELBCQKTDRHGVNJCLHYHGPZMWWVUVJOZOSCHEZSOMVBVZSUMPXQBWTTAFYDRRHMQAIDLXERILRFJPWJIBNGXZCPEVYEZGNSWDDNKUPCKSEWJLOPJWXODFMSJXHWOCPNZADAYVYQTBRVBLLNNID");

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
    msg.setTimeStamp(0.6250754535443711);
    msg.setSource(63563U);
    msg.setSourceEntity(137U);
    msg.setDestination(35538U);
    msg.setDestinationEntity(203U);
    msg.op = 50U;
    msg.time_remain = 0.17757788691827026;
    msg.sched_time = 0.39649127683510366;

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
    msg.setTimeStamp(0.075367927531091);
    msg.setSource(23458U);
    msg.setSourceEntity(174U);
    msg.setDestination(46004U);
    msg.setDestinationEntity(186U);
    msg.op = 130U;
    msg.time_remain = 0.5615771412501448;
    msg.sched_time = 0.8926026176103918;

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
    msg.setTimeStamp(0.9206881294390185);
    msg.setSource(28145U);
    msg.setSourceEntity(182U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(41U);
    msg.op = 228U;
    msg.time_remain = 0.638099689271195;
    msg.sched_time = 0.8247081540465933;

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
    msg.setTimeStamp(0.004116026397871564);
    msg.setSource(59827U);
    msg.setSourceEntity(15U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(119U);
    msg.name.assign("PTWJDSDHFOGNJOAIUFVSOXMTYSYLJPOEWPXVMAYKXUBFKMAHKITGNNNUPAZHJHVLWAAWOQJBMGCFKSYPTIHEPBISXNMIJPX");
    msg.op = 123U;
    msg.sched_time = 0.42960862956021806;

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
    msg.setTimeStamp(0.7539279270721001);
    msg.setSource(55185U);
    msg.setSourceEntity(61U);
    msg.setDestination(31568U);
    msg.setDestinationEntity(178U);
    msg.name.assign("NRLVRQMULDBNVEFIPVLUPOZTRHERZHFCYVYXCLSOQCSXUDYEWPWQKHETWNVLIPCKRMJPQKCKTFBLGECLQNWOIHDOOQGSMCPAJMUDSXXEOJCANRXBAYPFMULQVYSLIIVHSGRZUFKDQDWNGNESTKQZTWGVHNBMZXTRKJFAMGFTKYYRFOGIIRIIJJTHBWTKAXZVUZXOFKMZYAUCOMLEJXAFSYXEIQBBBUOHUGGTYPBVWDHZBDNWCHAJAMWJ");
    msg.op = 50U;
    msg.sched_time = 0.0355531677366846;

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
    msg.setTimeStamp(0.000542786638057069);
    msg.setSource(24760U);
    msg.setSourceEntity(220U);
    msg.setDestination(13707U);
    msg.setDestinationEntity(229U);
    msg.name.assign("RFKYCCLJMFQIUOAUCTWEMRPFYMVIXGMLSKUGEXBRDNSFEAMUTXRVZKHETAMBSATKHZBGLGOKGFNQABOIOVQAC");
    msg.op = 170U;
    msg.sched_time = 0.8286492142164256;

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
    msg.setTimeStamp(0.9617860300809211);
    msg.setSource(52466U);
    msg.setSourceEntity(235U);
    msg.setDestination(44590U);
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
    msg.setTimeStamp(0.7724029685114217);
    msg.setSource(41127U);
    msg.setSourceEntity(244U);
    msg.setDestination(1532U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.7634273009588264);
    msg.setSource(41440U);
    msg.setSourceEntity(112U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.014953606408491749);
    msg.setSource(43U);
    msg.setSourceEntity(160U);
    msg.setDestination(33187U);
    msg.setDestinationEntity(252U);
    msg.name.assign("NTADSLKJWLPETJJUSDIGBKVYHWYYERMMVJOUDKTUENUQCPTXZXDODNBDOFIAHCHVKNWPIVYYTBGEYDBGJFTNFOSZZISPHUSWHRAPCHPTZXOAIKUEIQVQDCXCMQXVYQOGXRTYH");
    msg.state = 131U;

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
    msg.setTimeStamp(0.21928903670728972);
    msg.setSource(17267U);
    msg.setSourceEntity(7U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(224U);
    msg.name.assign("FIWMVHGLTYQFPNBUXVUQEEXVVSIIICSQQHWRXWCGAJKFNTODCMLLQMHPMSPEZCPRDRKCJGVIVRHLHQOTXUEKEBJTWLSZFRJTPXFKEAKOWIDYQGXNAIYYT");
    msg.state = 144U;

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
    msg.setTimeStamp(0.45944223436280696);
    msg.setSource(17126U);
    msg.setSourceEntity(173U);
    msg.setDestination(677U);
    msg.setDestinationEntity(208U);
    msg.name.assign("NOZMYCIDMNLGRJBDMGUSWMVBBDSKUWTFHRMSYXFZZNNRCDCAYGLSOVZJJYSCXTJTPGPBSKFOJQYBKVQGLVUAAJWRFVIHLIMIOGKTXOKDNLLSCQUSCZTZRQOIJKPZBEVATEZPICBPQEALTJBTZXLRXGXDAMWEAEHEDCQWDHNURIGQRVQNIXLESHFHHUCGWOYYXBHDXRELPJAVUOOEQPSZWYXMOAP");
    msg.state = 154U;

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
    msg.setTimeStamp(0.9133917218336939);
    msg.setSource(52439U);
    msg.setSourceEntity(94U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(35U);
    msg.name.assign("FNHHAJVTOSWHPTFRIYJNBWMCDETFGEVEMICFLQKVOXZSOQCVWYKIOQWXWTXUDDBMZEPDZWYIRKOZTFKSYYMHUVDLEWGBQKUUQAZCDMBEIJQDJCMLKTJNFHUWAOXERFWPCDHOXZCPNGCNEBKVJDTSSGLLLBROSZYUVVUHEXNZFMTUBGXEHRWAZPIKXRAAFUOMSHGKDJAG");
    msg.value = 249U;

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
    msg.setTimeStamp(0.5254649185577909);
    msg.setSource(2114U);
    msg.setSourceEntity(155U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(146U);
    msg.name.assign("FONVNAKDTBRZHHSDBMZLLGBXPIBUQCAVTNKJLOAODXXZLUKGTJXAWJUHZNFATRWDQGZOXYLKQBGPMKIEGEMOYNKRRAWASXJYLLPTKYVHCSDCTCEBQ");
    msg.value = 87U;

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
    msg.setTimeStamp(0.6975492851901208);
    msg.setSource(31262U);
    msg.setSourceEntity(170U);
    msg.setDestination(14465U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FEPZILEAAWGRWBAFQPHKPROTPJUIVYTZPICGDYWXSLMMUEKIHNNWUVWKQQOSLQBTYFRFCHQGVTWJIHXDEEYL");
    msg.value = 129U;

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
    msg.setTimeStamp(0.02575475865511545);
    msg.setSource(51117U);
    msg.setSourceEntity(253U);
    msg.setDestination(16997U);
    msg.setDestinationEntity(231U);
    msg.name.assign("UFDYDNJHKKIGAOQOX");

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
    msg.setTimeStamp(0.34704625955532153);
    msg.setSource(35716U);
    msg.setSourceEntity(224U);
    msg.setDestination(10358U);
    msg.setDestinationEntity(165U);
    msg.name.assign("UPODXYFCNCMSMKFADLJTFIUCYVJCFTBQWCZFGXZJYUVXSVVENOSUBPWIHBHCREHHUUFCNSGZHENPQZVTKNSWVA");

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
    msg.setTimeStamp(0.6472937689224206);
    msg.setSource(18383U);
    msg.setSourceEntity(132U);
    msg.setDestination(48322U);
    msg.setDestinationEntity(97U);
    msg.name.assign("IIGGTNAYFPJVOFZUYFJDNVLYUPMDFHEKHVWOXHPXCFPWEHNJOUHFHRMMTTUOINRBSAWMYITSDGTLJNKRYNFFWXNBNBWQKCMHDGYIRDUBLGCQTLZMFDTLYIJLCBXAPTGUYESVASCGBCRXZCLIFKRAUDOSAQOTZEYDJOELAWBZPMDQVEXWRZVOWNXQTRMGPGUOBSJMOZZVAHKCKAABLRXLIQHJVRJDHSPIEUVSEWEKPKQCWKBSCY");

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
    msg.setTimeStamp(0.35725280579705276);
    msg.setSource(31158U);
    msg.setSourceEntity(176U);
    msg.setDestination(8893U);
    msg.setDestinationEntity(210U);
    msg.name.assign("JYUTMVSUWDRKCXHPOYYKPFZHMWNIAGQBRRHCQMRVEDQEHKEZSTWNBZLXVTOWTOEFPYYDLQZWOILFUNWG");
    msg.value = 77U;

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
    msg.setTimeStamp(0.9205500768936271);
    msg.setSource(4230U);
    msg.setSourceEntity(205U);
    msg.setDestination(17302U);
    msg.setDestinationEntity(70U);
    msg.name.assign("HZWECPTUCBVLMWKEPIRINRTQRKCRTGTOYVBGDFCBSNHQRWDXBBVANWZNSJDLLUUZOMJENYLOGWSAGDPK");
    msg.value = 153U;

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
    msg.setTimeStamp(0.292177786428766);
    msg.setSource(61602U);
    msg.setSourceEntity(192U);
    msg.setDestination(24733U);
    msg.setDestinationEntity(156U);
    msg.name.assign("VOBRINVAYZQDZKDBSMXYEQPSUNFBXFBLCPBBSWZDPJQTWNUHDNOXZRWHIDMHNIUKSLOJUGAGQQGFHAYRMXWGYCX");
    msg.value = 83U;

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
    msg.setTimeStamp(0.7116048448800287);
    msg.setSource(40036U);
    msg.setSourceEntity(8U);
    msg.setDestination(57087U);
    msg.setDestinationEntity(121U);
    msg.id = 216U;
    msg.period = 4252169568U;
    msg.duty_cycle = 2042500270U;

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
    msg.setTimeStamp(0.9417158246794531);
    msg.setSource(37378U);
    msg.setSourceEntity(102U);
    msg.setDestination(18244U);
    msg.setDestinationEntity(235U);
    msg.id = 88U;
    msg.period = 2341015411U;
    msg.duty_cycle = 3106495338U;

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
    msg.setTimeStamp(0.3810007883238311);
    msg.setSource(31490U);
    msg.setSourceEntity(17U);
    msg.setDestination(34003U);
    msg.setDestinationEntity(25U);
    msg.id = 5U;
    msg.period = 2937604410U;
    msg.duty_cycle = 2577495688U;

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
    msg.setTimeStamp(0.23461283730785942);
    msg.setSource(46023U);
    msg.setSourceEntity(145U);
    msg.setDestination(16733U);
    msg.setDestinationEntity(191U);
    msg.id = 46U;
    msg.period = 2207543104U;
    msg.duty_cycle = 997183300U;

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
    msg.setTimeStamp(0.18964910435873927);
    msg.setSource(8633U);
    msg.setSourceEntity(166U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(229U);
    msg.id = 209U;
    msg.period = 583380018U;
    msg.duty_cycle = 3354733583U;

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
    msg.setTimeStamp(0.31357450207570137);
    msg.setSource(7320U);
    msg.setSourceEntity(68U);
    msg.setDestination(20198U);
    msg.setDestinationEntity(128U);
    msg.id = 213U;
    msg.period = 3730861451U;
    msg.duty_cycle = 1763965183U;

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
    msg.setTimeStamp(0.35687571858376066);
    msg.setSource(1414U);
    msg.setSourceEntity(215U);
    msg.setDestination(28121U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.8303383272174614;
    msg.lon = 0.7031095774974773;
    msg.height = 0.7137705636734253;
    msg.x = 0.05822299178343793;
    msg.y = 0.3728570349584295;
    msg.z = 0.5007383220886669;
    msg.phi = 0.15052379914194947;
    msg.theta = 0.5434950812428209;
    msg.psi = 0.22311232683544568;
    msg.u = 0.4438484893246636;
    msg.v = 0.1715716995200569;
    msg.w = 0.230028811543884;
    msg.vx = 0.9871052325626033;
    msg.vy = 0.4086322880289973;
    msg.vz = 0.6084996300101146;
    msg.p = 0.2860788059485916;
    msg.q = 0.06689892303260714;
    msg.r = 0.601163075874323;
    msg.depth = 0.7112450810245601;
    msg.alt = 0.3492433918568836;

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
    msg.setTimeStamp(0.32770498414727744);
    msg.setSource(65017U);
    msg.setSourceEntity(57U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.8887258243186068;
    msg.lon = 0.8236783983499506;
    msg.height = 0.513432823940675;
    msg.x = 0.09544268889248453;
    msg.y = 0.9652631220930699;
    msg.z = 0.21375453408820833;
    msg.phi = 0.5387203574713924;
    msg.theta = 0.6340506436397487;
    msg.psi = 0.1876001730270601;
    msg.u = 0.7882889153516247;
    msg.v = 0.2889958304076241;
    msg.w = 0.7269128466486281;
    msg.vx = 0.3441236285976178;
    msg.vy = 0.4843576812664714;
    msg.vz = 0.09942732442870073;
    msg.p = 0.8099314191870727;
    msg.q = 0.571840489918495;
    msg.r = 0.49504255718004486;
    msg.depth = 0.8883478438252405;
    msg.alt = 0.285883375586546;

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
    msg.setTimeStamp(0.18506172453415837);
    msg.setSource(43717U);
    msg.setSourceEntity(123U);
    msg.setDestination(11578U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.39345512517725023;
    msg.lon = 0.9066208137942164;
    msg.height = 0.1920492675900437;
    msg.x = 0.35680067051278275;
    msg.y = 0.3518098574912749;
    msg.z = 0.5609771656260207;
    msg.phi = 0.5210829353239236;
    msg.theta = 0.5614182982690107;
    msg.psi = 0.5121678647390687;
    msg.u = 0.41570848478837563;
    msg.v = 0.4383670452548256;
    msg.w = 0.5709057876959122;
    msg.vx = 0.0692879018042003;
    msg.vy = 0.23024300670738962;
    msg.vz = 0.31922193943542176;
    msg.p = 0.6313756397305743;
    msg.q = 0.5202981897598412;
    msg.r = 0.6359518771747583;
    msg.depth = 0.6115170006267712;
    msg.alt = 0.05926640199260558;

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
    msg.setTimeStamp(0.8798449975669581);
    msg.setSource(52260U);
    msg.setSourceEntity(203U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(226U);
    msg.x = 0.1376219330352767;
    msg.y = 0.5542239165758083;
    msg.z = 0.31522486947103145;

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
    msg.setTimeStamp(0.21141207903227122);
    msg.setSource(20276U);
    msg.setSourceEntity(34U);
    msg.setDestination(28591U);
    msg.setDestinationEntity(43U);
    msg.x = 0.4572366416379371;
    msg.y = 0.918025398528635;
    msg.z = 0.16061086669044145;

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
    msg.setTimeStamp(0.39123837751546653);
    msg.setSource(60126U);
    msg.setSourceEntity(67U);
    msg.setDestination(18936U);
    msg.setDestinationEntity(184U);
    msg.x = 0.47954232011665876;
    msg.y = 0.7862110106945447;
    msg.z = 0.93781360198914;

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
    msg.setTimeStamp(0.7227088791256587);
    msg.setSource(65060U);
    msg.setSourceEntity(208U);
    msg.setDestination(11691U);
    msg.setDestinationEntity(159U);
    msg.value = 0.802375699186136;

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
    msg.setTimeStamp(0.1278395034930866);
    msg.setSource(7810U);
    msg.setSourceEntity(253U);
    msg.setDestination(60153U);
    msg.setDestinationEntity(249U);
    msg.value = 0.6535652226513002;

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
    msg.setTimeStamp(0.38542362057142854);
    msg.setSource(33636U);
    msg.setSourceEntity(177U);
    msg.setDestination(7567U);
    msg.setDestinationEntity(237U);
    msg.value = 0.09381868712389907;

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
    msg.setTimeStamp(0.9493362241629067);
    msg.setSource(27274U);
    msg.setSourceEntity(103U);
    msg.setDestination(41626U);
    msg.setDestinationEntity(133U);
    msg.value = 0.0034811285992962793;

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
    msg.setTimeStamp(0.9144679958138089);
    msg.setSource(14019U);
    msg.setSourceEntity(18U);
    msg.setDestination(58965U);
    msg.setDestinationEntity(22U);
    msg.value = 0.08267007773849999;

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
    msg.setTimeStamp(0.20333993633267855);
    msg.setSource(9710U);
    msg.setSourceEntity(207U);
    msg.setDestination(4937U);
    msg.setDestinationEntity(18U);
    msg.value = 0.44821404681067756;

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
    msg.setTimeStamp(0.4325499203853995);
    msg.setSource(61093U);
    msg.setSourceEntity(6U);
    msg.setDestination(4314U);
    msg.setDestinationEntity(124U);
    msg.x = 0.7894531790445598;
    msg.y = 0.9576613194036897;
    msg.z = 0.3833054423651451;
    msg.phi = 0.006475349188102331;
    msg.theta = 0.93462742739021;
    msg.psi = 0.6949684575803956;
    msg.p = 0.37277561887132427;
    msg.q = 0.14473789305955465;
    msg.r = 0.018117153628645855;
    msg.u = 0.5680040629016396;
    msg.v = 0.6656809303711596;
    msg.w = 0.44296215818120965;
    msg.bias_psi = 0.259891805350814;
    msg.bias_r = 0.662028824850932;

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
    msg.setTimeStamp(0.722983632377722);
    msg.setSource(52282U);
    msg.setSourceEntity(82U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(216U);
    msg.x = 0.6787507231791331;
    msg.y = 0.23542228294592138;
    msg.z = 0.043256873909599425;
    msg.phi = 0.8687048562528559;
    msg.theta = 0.6470082792173236;
    msg.psi = 0.1954144238832466;
    msg.p = 0.4030303299527058;
    msg.q = 0.3377866723913514;
    msg.r = 0.39151580376886985;
    msg.u = 0.9755688676294827;
    msg.v = 0.24933751259736625;
    msg.w = 0.6060502264522714;
    msg.bias_psi = 0.0984632031261734;
    msg.bias_r = 0.7121059677754931;

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
    msg.setTimeStamp(0.5379251954408738);
    msg.setSource(9417U);
    msg.setSourceEntity(240U);
    msg.setDestination(21238U);
    msg.setDestinationEntity(171U);
    msg.x = 0.15840879728866653;
    msg.y = 0.23378177796844568;
    msg.z = 0.5746731546477271;
    msg.phi = 0.0837247345857739;
    msg.theta = 0.3818059016993428;
    msg.psi = 0.7075987614744376;
    msg.p = 0.4490235319390212;
    msg.q = 0.6774510039244576;
    msg.r = 0.12165009221427492;
    msg.u = 0.5157688779591545;
    msg.v = 0.24469641777484885;
    msg.w = 0.8103634603047741;
    msg.bias_psi = 0.021038537207248242;
    msg.bias_r = 0.19916872672982355;

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
    msg.setTimeStamp(0.7046385005525684);
    msg.setSource(58265U);
    msg.setSourceEntity(189U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(117U);
    msg.bias_psi = 0.11103660789671199;
    msg.bias_r = 0.46581461243120303;
    msg.cog = 0.4828019609197788;
    msg.cyaw = 0.1529831406825164;
    msg.lbl_rej_level = 0.5974891504871379;
    msg.gps_rej_level = 0.5534346722286078;
    msg.custom_x = 0.9479447085823509;
    msg.custom_y = 0.5219709529146772;
    msg.custom_z = 0.6739084275831833;

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
    msg.setTimeStamp(0.7651865833316248);
    msg.setSource(44076U);
    msg.setSourceEntity(101U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(110U);
    msg.bias_psi = 0.5345469623443747;
    msg.bias_r = 0.42749824890114607;
    msg.cog = 0.007788367856651046;
    msg.cyaw = 0.22507680868310553;
    msg.lbl_rej_level = 0.4338572407327087;
    msg.gps_rej_level = 0.8399309016205936;
    msg.custom_x = 0.5544808414156351;
    msg.custom_y = 0.13669788525929205;
    msg.custom_z = 0.7721400442352157;

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
    msg.setTimeStamp(0.5047831271136216);
    msg.setSource(4273U);
    msg.setSourceEntity(177U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(71U);
    msg.bias_psi = 0.10343859925960941;
    msg.bias_r = 0.7580070683027291;
    msg.cog = 0.26608778302083547;
    msg.cyaw = 0.36973608463551433;
    msg.lbl_rej_level = 0.5035446655462559;
    msg.gps_rej_level = 0.5400513444285963;
    msg.custom_x = 0.7822750030287974;
    msg.custom_y = 0.10489725578865872;
    msg.custom_z = 0.3505974799526316;

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
    msg.setTimeStamp(0.21811781113606343);
    msg.setSource(17326U);
    msg.setSourceEntity(173U);
    msg.setDestination(33218U);
    msg.setDestinationEntity(241U);
    msg.utc_time = 0.6862926247181264;
    msg.reason = 179U;

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
    msg.setTimeStamp(0.18875333215614243);
    msg.setSource(51647U);
    msg.setSourceEntity(25U);
    msg.setDestination(13548U);
    msg.setDestinationEntity(136U);
    msg.utc_time = 0.0910470561953105;
    msg.reason = 11U;

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
    msg.setTimeStamp(0.5489743835194146);
    msg.setSource(27194U);
    msg.setSourceEntity(96U);
    msg.setDestination(35889U);
    msg.setDestinationEntity(194U);
    msg.utc_time = 0.31255053633538654;
    msg.reason = 38U;

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
    msg.setTimeStamp(0.5483734800527061);
    msg.setSource(42269U);
    msg.setSourceEntity(88U);
    msg.setDestination(50758U);
    msg.setDestinationEntity(42U);
    msg.id = 247U;
    msg.range = 0.5447283165451813;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.6621626785766148);
    msg.setSource(59351U);
    msg.setSourceEntity(206U);
    msg.setDestination(18186U);
    msg.setDestinationEntity(204U);
    msg.id = 130U;
    msg.range = 0.6569287170388829;
    msg.acceptance = 138U;

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
    msg.setTimeStamp(0.15249215900369384);
    msg.setSource(59024U);
    msg.setSourceEntity(141U);
    msg.setDestination(58996U);
    msg.setDestinationEntity(15U);
    msg.id = 109U;
    msg.range = 0.825803910796136;
    msg.acceptance = 191U;

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
    msg.setTimeStamp(0.7599582457811908);
    msg.setSource(64779U);
    msg.setSourceEntity(72U);
    msg.setDestination(16761U);
    msg.setDestinationEntity(28U);
    msg.type = 145U;
    msg.reason = 194U;
    msg.value = 0.5819411596178564;
    msg.timestep = 0.36084060196659273;

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
    msg.setTimeStamp(0.35351032430600304);
    msg.setSource(1395U);
    msg.setSourceEntity(19U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(73U);
    msg.type = 16U;
    msg.reason = 120U;
    msg.value = 0.9056869051456558;
    msg.timestep = 0.5453364504129121;

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
    msg.setTimeStamp(0.30856077914251623);
    msg.setSource(49277U);
    msg.setSourceEntity(119U);
    msg.setDestination(21788U);
    msg.setDestinationEntity(118U);
    msg.type = 242U;
    msg.reason = 0U;
    msg.value = 0.9395939771471864;
    msg.timestep = 0.4645227417998238;

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
    msg.setTimeStamp(0.17497873907278405);
    msg.setSource(23827U);
    msg.setSourceEntity(172U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.6656818664192631);
    msg.setSource(1985U);
    msg.setSourceEntity(174U);
    msg.setDestination(29395U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.09010318796762451);
    msg.setSource(4483U);
    msg.setSourceEntity(188U);
    msg.setDestination(6036U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.0643400629728762);
    msg.setSource(1117U);
    msg.setSourceEntity(150U);
    msg.setDestination(19001U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CWRIVGORSSZZTFDYDYGFHUWKNI");
    tmp_msg_0.lat = 0.6356115161343853;
    tmp_msg_0.lon = 0.1616422209087891;
    tmp_msg_0.depth = 0.4183321340267374;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 187U;
    tmp_msg_0.transponder_delay = 114U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5248671404892047;
    msg.y = 0.6322728801403852;
    msg.var_x = 0.31254251360466967;
    msg.var_y = 0.549261083843889;
    msg.distance = 0.6729563249478286;

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
    msg.setTimeStamp(0.4858744631294547);
    msg.setSource(56381U);
    msg.setSourceEntity(168U);
    msg.setDestination(17350U);
    msg.setDestinationEntity(161U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XBRFZYUCVWDWRKORTGCWHYYPOLLZQJDAFZZBBKIROJPTXTBVKIGJDFCHIWAKPDLNLMQWDKUAJRFMGXNNPATRFGIJQEMKOACTSFKFSPHVOZPB");
    tmp_msg_0.lat = 0.8661996616559908;
    tmp_msg_0.lon = 0.4741174782401678;
    tmp_msg_0.depth = 0.5533330872740354;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 159U;
    tmp_msg_0.transponder_delay = 133U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.033340020289554184;
    msg.y = 0.9702806926651546;
    msg.var_x = 0.6327644316624159;
    msg.var_y = 0.6394432703590478;
    msg.distance = 0.5009764228618113;

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
    msg.setTimeStamp(0.9022822796259236);
    msg.setSource(307U);
    msg.setSourceEntity(152U);
    msg.setDestination(34668U);
    msg.setDestinationEntity(176U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MHIGZRUDUIIMGPGPLBQZDXBBINLLRYWFLIVIYNKILRYJNSGWRKZFUUMCOLHXX");
    tmp_msg_0.lat = 0.21610263274981656;
    tmp_msg_0.lon = 0.21853544729574204;
    tmp_msg_0.depth = 0.571363758928971;
    tmp_msg_0.query_channel = 20U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 191U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9212321358847899;
    msg.y = 0.17258815765173718;
    msg.var_x = 0.983705272915267;
    msg.var_y = 0.32395499137852346;
    msg.distance = 0.5403534832630956;

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
    msg.setTimeStamp(0.37003062932409336);
    msg.setSource(54753U);
    msg.setSourceEntity(105U);
    msg.setDestination(25240U);
    msg.setDestinationEntity(86U);
    msg.state = 47U;

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
    msg.setTimeStamp(0.4645674397332803);
    msg.setSource(8121U);
    msg.setSourceEntity(58U);
    msg.setDestination(32978U);
    msg.setDestinationEntity(194U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.8703285766431342);
    msg.setSource(42500U);
    msg.setSourceEntity(130U);
    msg.setDestination(26996U);
    msg.setDestinationEntity(252U);
    msg.state = 12U;

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
    msg.setTimeStamp(0.8539877347732898);
    msg.setSource(28628U);
    msg.setSourceEntity(85U);
    msg.setDestination(8072U);
    msg.setDestinationEntity(51U);
    msg.x = 0.7509642065648968;
    msg.y = 0.8159607469704263;
    msg.z = 0.7610375650106223;

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
    msg.setTimeStamp(0.23851792825977347);
    msg.setSource(58088U);
    msg.setSourceEntity(25U);
    msg.setDestination(54092U);
    msg.setDestinationEntity(69U);
    msg.x = 0.9603335106743889;
    msg.y = 0.8764883189326502;
    msg.z = 0.8512452265672592;

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
    msg.setTimeStamp(0.42889301662401635);
    msg.setSource(38486U);
    msg.setSourceEntity(28U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(42U);
    msg.x = 0.6734038940747006;
    msg.y = 0.7201709460224345;
    msg.z = 0.06121287767473682;

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
    msg.setTimeStamp(0.31079031723835715);
    msg.setSource(24319U);
    msg.setSourceEntity(164U);
    msg.setDestination(60268U);
    msg.setDestinationEntity(193U);
    msg.value = 0.5786275214784862;

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
    msg.setTimeStamp(0.027048202898444118);
    msg.setSource(38115U);
    msg.setSourceEntity(37U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(0U);
    msg.value = 0.07150331930020515;

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
    msg.setTimeStamp(0.4191193202174369);
    msg.setSource(26192U);
    msg.setSourceEntity(28U);
    msg.setDestination(35097U);
    msg.setDestinationEntity(153U);
    msg.value = 0.5548098621643406;

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
    msg.setTimeStamp(0.8743397793097996);
    msg.setSource(57276U);
    msg.setSourceEntity(121U);
    msg.setDestination(9663U);
    msg.setDestinationEntity(132U);
    msg.value = 0.6749241116321392;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.7925392592819849);
    msg.setSource(212U);
    msg.setSourceEntity(86U);
    msg.setDestination(58940U);
    msg.setDestinationEntity(106U);
    msg.value = 0.601242488325011;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.3485144883370257);
    msg.setSource(5240U);
    msg.setSourceEntity(201U);
    msg.setDestination(54112U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5738526243457303;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.6482631329983456);
    msg.setSource(36959U);
    msg.setSourceEntity(134U);
    msg.setDestination(46585U);
    msg.setDestinationEntity(104U);
    msg.value = 0.752233890210213;
    msg.speed_units = 21U;

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
    msg.setTimeStamp(0.6847380052059657);
    msg.setSource(62459U);
    msg.setSourceEntity(131U);
    msg.setDestination(751U);
    msg.setDestinationEntity(254U);
    msg.value = 0.40066897735853124;
    msg.speed_units = 31U;

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
    msg.setTimeStamp(0.2237187592808476);
    msg.setSource(31776U);
    msg.setSourceEntity(15U);
    msg.setDestination(32195U);
    msg.setDestinationEntity(58U);
    msg.value = 0.5581738697000314;
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
    msg.setTimeStamp(0.43446439989973085);
    msg.setSource(52429U);
    msg.setSourceEntity(187U);
    msg.setDestination(56127U);
    msg.setDestinationEntity(251U);
    msg.value = 0.9295585294754115;

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
    msg.setTimeStamp(0.8078263011437017);
    msg.setSource(26970U);
    msg.setSourceEntity(183U);
    msg.setDestination(28605U);
    msg.setDestinationEntity(126U);
    msg.value = 0.3206596635350688;

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
    msg.setTimeStamp(0.3534570370319653);
    msg.setSource(58623U);
    msg.setSourceEntity(41U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5012513470811082;

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
    msg.setTimeStamp(0.8698946203389676);
    msg.setSource(38907U);
    msg.setSourceEntity(95U);
    msg.setDestination(2384U);
    msg.setDestinationEntity(157U);
    msg.value = 0.18305364399940105;

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
    msg.setTimeStamp(0.13023239518116447);
    msg.setSource(11782U);
    msg.setSourceEntity(126U);
    msg.setDestination(54758U);
    msg.setDestinationEntity(236U);
    msg.value = 0.41108254955318146;

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
    msg.setTimeStamp(0.33807096322279895);
    msg.setSource(19593U);
    msg.setSourceEntity(31U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(229U);
    msg.value = 0.338482308847469;

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
    msg.setTimeStamp(0.48964418641229057);
    msg.setSource(57715U);
    msg.setSourceEntity(24U);
    msg.setDestination(57382U);
    msg.setDestinationEntity(53U);
    msg.value = 0.39326681774061656;

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
    msg.setTimeStamp(0.733206862961633);
    msg.setSource(50098U);
    msg.setSourceEntity(173U);
    msg.setDestination(25332U);
    msg.setDestinationEntity(232U);
    msg.value = 0.43218142879570676;

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
    msg.setTimeStamp(0.13055110888394117);
    msg.setSource(46743U);
    msg.setSourceEntity(149U);
    msg.setDestination(50266U);
    msg.setDestinationEntity(36U);
    msg.value = 0.7961118709192212;

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
    msg.setTimeStamp(0.5080548464798685);
    msg.setSource(5158U);
    msg.setSourceEntity(71U);
    msg.setDestination(25377U);
    msg.setDestinationEntity(210U);
    msg.path_ref = 3890884457U;
    msg.start_lat = 0.17238906236002582;
    msg.start_lon = 0.3217531025318442;
    msg.start_z = 0.49034981291866575;
    msg.start_z_units = 95U;
    msg.end_lat = 0.26349244466650523;
    msg.end_lon = 0.9267865965836525;
    msg.end_z = 0.20512221047369616;
    msg.end_z_units = 211U;
    msg.speed = 0.6825363971011126;
    msg.speed_units = 108U;
    msg.lradius = 0.6729499439272646;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.3992407835581826);
    msg.setSource(27747U);
    msg.setSourceEntity(165U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 414538936U;
    msg.start_lat = 0.21404215089555512;
    msg.start_lon = 0.09777883456447134;
    msg.start_z = 0.36154358802586284;
    msg.start_z_units = 161U;
    msg.end_lat = 0.2690468048820913;
    msg.end_lon = 0.6994104607945304;
    msg.end_z = 0.695908211824206;
    msg.end_z_units = 207U;
    msg.speed = 0.43586709255298994;
    msg.speed_units = 91U;
    msg.lradius = 0.5506298271105837;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.9402136447231709);
    msg.setSource(18857U);
    msg.setSourceEntity(87U);
    msg.setDestination(29549U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 1538607384U;
    msg.start_lat = 0.712852854069189;
    msg.start_lon = 0.6978916669900102;
    msg.start_z = 0.7641491938526324;
    msg.start_z_units = 180U;
    msg.end_lat = 0.8576292533874141;
    msg.end_lon = 0.46864951381665154;
    msg.end_z = 0.5197136161380472;
    msg.end_z_units = 37U;
    msg.speed = 0.34963549974924246;
    msg.speed_units = 69U;
    msg.lradius = 0.18962533957540817;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.3325857265596083);
    msg.setSource(43982U);
    msg.setSourceEntity(93U);
    msg.setDestination(56331U);
    msg.setDestinationEntity(204U);
    msg.x = 0.5806931874200484;
    msg.y = 0.8590687309168072;
    msg.z = 0.967955870162792;
    msg.k = 0.32600442388313977;
    msg.m = 0.21738165294552625;
    msg.n = 0.16994016658612432;
    msg.flags = 248U;

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
    msg.setTimeStamp(0.7102013051417071);
    msg.setSource(54052U);
    msg.setSourceEntity(59U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(252U);
    msg.x = 0.32428813899968856;
    msg.y = 0.4183467890163617;
    msg.z = 0.11450313621565378;
    msg.k = 0.2837806695105236;
    msg.m = 0.9226881623943006;
    msg.n = 0.8023721995728343;
    msg.flags = 79U;

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
    msg.setTimeStamp(0.8120405971963593);
    msg.setSource(53885U);
    msg.setSourceEntity(119U);
    msg.setDestination(64907U);
    msg.setDestinationEntity(37U);
    msg.x = 0.05537045330908408;
    msg.y = 0.6875968583419292;
    msg.z = 0.7686947081430032;
    msg.k = 0.3566785467021786;
    msg.m = 0.5415747642035006;
    msg.n = 0.0547952226248426;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.39106436360398633);
    msg.setSource(10680U);
    msg.setSourceEntity(11U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(77U);
    msg.value = 0.7083766142127401;

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
    msg.setTimeStamp(0.17448037658374904);
    msg.setSource(14605U);
    msg.setSourceEntity(9U);
    msg.setDestination(61737U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6939847694104047;

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
    msg.setTimeStamp(0.8995610791483207);
    msg.setSource(26978U);
    msg.setSourceEntity(248U);
    msg.setDestination(27058U);
    msg.setDestinationEntity(22U);
    msg.value = 0.8403982122186148;

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
    msg.setTimeStamp(0.7544489491495131);
    msg.setSource(4921U);
    msg.setSourceEntity(105U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(63U);
    msg.u = 0.83950079161612;
    msg.v = 0.1840188161008952;
    msg.w = 0.03479749305345403;
    msg.p = 0.9256614821881841;
    msg.q = 0.2830176823249695;
    msg.r = 0.6291322884613557;
    msg.flags = 80U;

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
    msg.setTimeStamp(0.7071757932624211);
    msg.setSource(46827U);
    msg.setSourceEntity(143U);
    msg.setDestination(35576U);
    msg.setDestinationEntity(18U);
    msg.u = 0.5964478030475822;
    msg.v = 0.5295103720257506;
    msg.w = 0.3613384857022828;
    msg.p = 0.6336777900775089;
    msg.q = 0.8055958348665069;
    msg.r = 0.46260437520228026;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.055719020603534064);
    msg.setSource(29894U);
    msg.setSourceEntity(149U);
    msg.setDestination(30259U);
    msg.setDestinationEntity(92U);
    msg.u = 0.5765765806258977;
    msg.v = 0.9470961073969385;
    msg.w = 0.9485984424178594;
    msg.p = 0.7576018087310292;
    msg.q = 0.9063280838568626;
    msg.r = 0.7362580257128208;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.545233213207869);
    msg.setSource(17243U);
    msg.setSourceEntity(66U);
    msg.setDestination(60331U);
    msg.setDestinationEntity(98U);
    msg.path_ref = 404526280U;
    msg.start_lat = 0.2938421353918975;
    msg.start_lon = 0.3437928837406633;
    msg.start_z = 0.2859841553045587;
    msg.start_z_units = 167U;
    msg.end_lat = 0.09701638109026;
    msg.end_lon = 0.50546180136681;
    msg.end_z = 0.45640584149394015;
    msg.end_z_units = 227U;
    msg.lradius = 0.04128857322062185;
    msg.flags = 68U;
    msg.x = 0.6249479447707976;
    msg.y = 0.47685511829264016;
    msg.z = 0.8115691569467295;
    msg.vx = 0.543079497298022;
    msg.vy = 0.03025814282752559;
    msg.vz = 0.7313289048115029;
    msg.course_error = 0.17831157899719097;
    msg.eta = 34900U;

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
    msg.setTimeStamp(0.17164987253701225);
    msg.setSource(24957U);
    msg.setSourceEntity(103U);
    msg.setDestination(39078U);
    msg.setDestinationEntity(80U);
    msg.path_ref = 838746272U;
    msg.start_lat = 0.8390789705532165;
    msg.start_lon = 0.30832239894030045;
    msg.start_z = 0.7782692501048347;
    msg.start_z_units = 230U;
    msg.end_lat = 0.17207551299532897;
    msg.end_lon = 0.601412430661055;
    msg.end_z = 0.3560428161657657;
    msg.end_z_units = 99U;
    msg.lradius = 0.3921567775719652;
    msg.flags = 226U;
    msg.x = 0.6803939584490535;
    msg.y = 0.3859573107659193;
    msg.z = 0.778825488144196;
    msg.vx = 0.9557734586535531;
    msg.vy = 0.9686898930611403;
    msg.vz = 0.22265838285750628;
    msg.course_error = 0.49395081880698766;
    msg.eta = 51843U;

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
    msg.setTimeStamp(0.9620039789540877);
    msg.setSource(13462U);
    msg.setSourceEntity(203U);
    msg.setDestination(22551U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 4292349402U;
    msg.start_lat = 0.9611262806908355;
    msg.start_lon = 0.652214223500334;
    msg.start_z = 0.383372094058677;
    msg.start_z_units = 24U;
    msg.end_lat = 0.7073585293258403;
    msg.end_lon = 0.47201114741126915;
    msg.end_z = 0.5855470476476665;
    msg.end_z_units = 56U;
    msg.lradius = 0.6625455255337093;
    msg.flags = 248U;
    msg.x = 0.0850485760587042;
    msg.y = 0.9601521236789159;
    msg.z = 0.7505594364290025;
    msg.vx = 0.49297057636787167;
    msg.vy = 0.0992650761507825;
    msg.vz = 0.645795811271537;
    msg.course_error = 0.8236361391400695;
    msg.eta = 62201U;

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
    msg.setTimeStamp(0.840903416949388);
    msg.setSource(10040U);
    msg.setSourceEntity(90U);
    msg.setDestination(17571U);
    msg.setDestinationEntity(34U);
    msg.k = 0.015939502287689034;
    msg.m = 0.7020044063932012;
    msg.n = 0.8132384853168706;

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
    msg.setTimeStamp(0.2334526417770728);
    msg.setSource(33500U);
    msg.setSourceEntity(134U);
    msg.setDestination(15363U);
    msg.setDestinationEntity(105U);
    msg.k = 0.9729718404829039;
    msg.m = 0.5673997088088117;
    msg.n = 0.5394481111648488;

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
    msg.setTimeStamp(0.5959208914530519);
    msg.setSource(41511U);
    msg.setSourceEntity(99U);
    msg.setDestination(33098U);
    msg.setDestinationEntity(96U);
    msg.k = 0.05906450335308888;
    msg.m = 0.16817981470716048;
    msg.n = 0.51331421711756;

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
    msg.setTimeStamp(0.02176241057225725);
    msg.setSource(64442U);
    msg.setSourceEntity(92U);
    msg.setDestination(4049U);
    msg.setDestinationEntity(175U);
    msg.p = 0.7378555859202759;
    msg.i = 0.3920533318541073;
    msg.d = 0.967703970327627;
    msg.a = 0.23618027464012892;

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
    msg.setTimeStamp(0.1283001502444675);
    msg.setSource(40279U);
    msg.setSourceEntity(172U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(23U);
    msg.p = 0.004018689751314253;
    msg.i = 0.3162131647764741;
    msg.d = 0.3980219938046182;
    msg.a = 0.8088311315951863;

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
    msg.setTimeStamp(0.6306529114765309);
    msg.setSource(63853U);
    msg.setSourceEntity(82U);
    msg.setDestination(5054U);
    msg.setDestinationEntity(180U);
    msg.p = 0.42832041058463377;
    msg.i = 0.9193814778331646;
    msg.d = 0.46235454357565053;
    msg.a = 0.5428105983703834;

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
    msg.setTimeStamp(0.059967307373854695);
    msg.setSource(12552U);
    msg.setSourceEntity(236U);
    msg.setDestination(61125U);
    msg.setDestinationEntity(67U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.9714392224813758);
    msg.setSource(10869U);
    msg.setSourceEntity(184U);
    msg.setDestination(13386U);
    msg.setDestinationEntity(27U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.9116843838622403);
    msg.setSource(27842U);
    msg.setSourceEntity(121U);
    msg.setDestination(37472U);
    msg.setDestinationEntity(83U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.8689505875652479);
    msg.setSource(61931U);
    msg.setSourceEntity(63U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(119U);
    msg.timeout = 16133U;
    msg.lat = 0.036654046111148975;
    msg.lon = 0.9162635690661378;
    msg.z = 0.577482345278683;
    msg.z_units = 197U;
    msg.speed = 0.6745878214457944;
    msg.speed_units = 118U;
    msg.roll = 0.6443671015734832;
    msg.pitch = 0.33847288526298547;
    msg.yaw = 0.8400899217913166;
    msg.custom.assign("VPANQZDMIINVMJJBOGVGZZDARIYYNQVPYLTZJKJHTAAAVKKHVOBMHPSWBJTLFEQTZWXZELPTKUYSQXOKDHJGLNCCCYBFFMCERYPJLUSUSQURDKE");

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
    msg.setTimeStamp(0.4644492955273668);
    msg.setSource(32286U);
    msg.setSourceEntity(131U);
    msg.setDestination(16451U);
    msg.setDestinationEntity(89U);
    msg.timeout = 32422U;
    msg.lat = 0.6022184896226263;
    msg.lon = 0.7442122749309041;
    msg.z = 0.5433667335709385;
    msg.z_units = 19U;
    msg.speed = 0.15552285273254274;
    msg.speed_units = 217U;
    msg.roll = 0.12832052224949364;
    msg.pitch = 0.14014915673754014;
    msg.yaw = 0.9260287693459207;
    msg.custom.assign("QRUNDRZFZJWHNISNAJHSXPECDRYBAJPXQPIYRZGUKHQESSHTXEYOHKFETIAMVROGHBDZQWUKSAGKCUBNLGKFXBFOJNAKZKTJBNCSZCWUDCFCXGRDQYWVJRMVOKTLYMWBECROFNOIJXMPMQMTEDWSFTLFAOMJUEPAGXVNYBWCIEDBCIHPGPPMDNQMZEUQDYCJGIAVWBUONSKVUHTYZYHZVTVXTAFGOLWVSJLLFSGTWLIULDAEIRLKRZPVOQXB");

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
    msg.setTimeStamp(0.8018605799203858);
    msg.setSource(28521U);
    msg.setSourceEntity(22U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(231U);
    msg.timeout = 53755U;
    msg.lat = 0.6072892152243041;
    msg.lon = 0.3447579690948902;
    msg.z = 0.30625704922354324;
    msg.z_units = 175U;
    msg.speed = 0.7938225346185346;
    msg.speed_units = 121U;
    msg.roll = 0.7159903870842735;
    msg.pitch = 0.25483466122793463;
    msg.yaw = 0.9784382144295135;
    msg.custom.assign("SXRKUEOXLEZPVGYQFOJCVFFIAMZLWYYNUDSDBNSZUWPIOOAAQCAGJHXURGLSDRALGBTJBKZPMXSQZCQJMTGWXBMOAKPHHRBNBZNCFFAKAUEKUDELWFWHITRSVPYYJI");

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
    msg.setTimeStamp(0.3109903239555938);
    msg.setSource(13553U);
    msg.setSourceEntity(211U);
    msg.setDestination(8646U);
    msg.setDestinationEntity(19U);
    msg.timeout = 7657U;
    msg.lat = 0.37679425045255543;
    msg.lon = 0.5636718425580405;
    msg.z = 0.15084455766033777;
    msg.z_units = 105U;
    msg.speed = 0.27386836797199143;
    msg.speed_units = 161U;
    msg.duration = 15800U;
    msg.radius = 0.16804253732805907;
    msg.flags = 63U;
    msg.custom.assign("SKYWHKALRLAWJBXMYPSNJGVGIHAJKFKXSUZQWLPODKYODNERTXVLXUUBSB");

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
    msg.setTimeStamp(0.30390863613822217);
    msg.setSource(43531U);
    msg.setSourceEntity(48U);
    msg.setDestination(23527U);
    msg.setDestinationEntity(226U);
    msg.timeout = 34293U;
    msg.lat = 0.36166127908463186;
    msg.lon = 0.5519295576037102;
    msg.z = 0.534394338411997;
    msg.z_units = 121U;
    msg.speed = 0.33924229370612835;
    msg.speed_units = 192U;
    msg.duration = 543U;
    msg.radius = 0.8521705599048436;
    msg.flags = 228U;
    msg.custom.assign("SIHIZHSIJYLABNKLQGCWWIIEMBTWVPLSJGNRKGCVRNPTEUQUCZNCWYUBQCGCFXFLMKXMKZELXVFHTTJDQZSGSMLWFEXPZWHUJUYURVMSRJLMLYRZSRACDGHWBMEODIEFKFDVCTQDYOCIXWOQOUNTPJAHBNAKXTBECFPRLVQOTDOUHEPAEARNABESBOIPNHUOIKDQDQFFFKBTUVXNYDZYKYQGLS");

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
    msg.setTimeStamp(0.08679774579767996);
    msg.setSource(60223U);
    msg.setSourceEntity(229U);
    msg.setDestination(51990U);
    msg.setDestinationEntity(204U);
    msg.timeout = 28862U;
    msg.lat = 0.767147045406417;
    msg.lon = 0.7305912571116955;
    msg.z = 0.6724985282343718;
    msg.z_units = 239U;
    msg.speed = 0.8626471153661831;
    msg.speed_units = 69U;
    msg.duration = 5167U;
    msg.radius = 0.5197809654638698;
    msg.flags = 76U;
    msg.custom.assign("ZZBFKSSLWXTYHKIARCBFWIHRRRGKBICHZFDAYIEHNJXKBSWSISQOPNKRBSXBFDETHULGJVUJZDNFVWOXMLEIKPYTMRJNVFMNXJEUQOAXXEETHMLJCRXUGADCTQFOAOSHEGVROIVNTHCKGTTURDDJLQKA");

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
    msg.setTimeStamp(0.48384903880468777);
    msg.setSource(52301U);
    msg.setSourceEntity(18U);
    msg.setDestination(13498U);
    msg.setDestinationEntity(202U);
    msg.custom.assign("CUDWUBGJAAYBW");

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
    msg.setTimeStamp(0.8533396055559409);
    msg.setSource(48908U);
    msg.setSourceEntity(150U);
    msg.setDestination(48498U);
    msg.setDestinationEntity(162U);
    msg.custom.assign("UGLVMJUSYPISMSURBKAQDCYFAUGTEMFALQZQAARDWMWZURIUWXLSIOGFVFNRNEQUIVOBLYPXHCNWYGURRIQDSHREETXVPSSKYCOYBHOXJGDKXBKJPCJJZCZWXKEHLRLDWDQKLVPZETXMOBVGBHLMYMIIGFXGLQQEJJRHHWUHSSPTJIOWAVZIGMKOQQKSYTYPWKLCNMPTDNOXNENTCZCBDNY");

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
    msg.setTimeStamp(0.1647631187234564);
    msg.setSource(25463U);
    msg.setSourceEntity(189U);
    msg.setDestination(43151U);
    msg.setDestinationEntity(9U);
    msg.custom.assign("KJOURVAVIOHUYPTXUUWJGSYSZFJHDXMEHMCRWOWGAKHWDNSJKDVZMHOOTMKANGBZCBCGOMFBRPLVEIDHQFZYLBTQJHYJARPUHXMMNJWXWTKEOGUNFISOLUBPXTFEGSQMRBXVTNISUPLIPIBJDPDRNTGQQPRYELALZKZKUE");

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
    msg.setTimeStamp(0.40865693804167624);
    msg.setSource(42577U);
    msg.setSourceEntity(22U);
    msg.setDestination(56999U);
    msg.setDestinationEntity(78U);
    msg.timeout = 49785U;
    msg.lat = 0.4670311346202294;
    msg.lon = 0.5463237110690584;
    msg.z = 0.6174307728370545;
    msg.z_units = 3U;
    msg.duration = 65292U;
    msg.speed = 0.275640966895464;
    msg.speed_units = 213U;
    msg.type = 210U;
    msg.radius = 0.5236150039118787;
    msg.length = 0.3782379860593026;
    msg.bearing = 0.8887564339790618;
    msg.direction = 110U;
    msg.custom.assign("VBATXCWYWFZFCSYYCVLOHUTKEZUOMGRLEAAYSRXPWZDDHPDOGUHDIIQEIYQEAUQFCKRGDKFCXBAKBFWPZMYXTUCNKJVSSBXDVRB");

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
    msg.setTimeStamp(0.5954219714961128);
    msg.setSource(38402U);
    msg.setSourceEntity(224U);
    msg.setDestination(33304U);
    msg.setDestinationEntity(245U);
    msg.timeout = 12211U;
    msg.lat = 0.6010497149748786;
    msg.lon = 0.9499802621091223;
    msg.z = 0.42396931334470045;
    msg.z_units = 75U;
    msg.duration = 55365U;
    msg.speed = 0.29624317534992106;
    msg.speed_units = 188U;
    msg.type = 184U;
    msg.radius = 0.961391488480641;
    msg.length = 0.6169563091437787;
    msg.bearing = 0.3290432925289041;
    msg.direction = 159U;
    msg.custom.assign("UXSWQJKNOTRTJTHPPIQWVIUGSVOIMYVMQLWILOJFDROGJAEXEHCKOWONTZDXJFENNODUQZSGUBNGITZSSYVDXWKOKSLMWFVFFRHCAFMSSCVMERRDBAMCEZBNRALHUGGUKJUPFCXWHAIKEBPBBRBTLPUNGXAWCKBEAXTQJLNBYLQDDMYZLXRB");

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
    msg.setTimeStamp(0.335590934390809);
    msg.setSource(19711U);
    msg.setSourceEntity(180U);
    msg.setDestination(56147U);
    msg.setDestinationEntity(112U);
    msg.timeout = 12054U;
    msg.lat = 0.545131798972339;
    msg.lon = 0.5680664597989021;
    msg.z = 0.6180505363188163;
    msg.z_units = 230U;
    msg.duration = 49148U;
    msg.speed = 0.19194190891611784;
    msg.speed_units = 225U;
    msg.type = 241U;
    msg.radius = 0.3417000858732311;
    msg.length = 0.9870680353077899;
    msg.bearing = 0.19461994973365715;
    msg.direction = 133U;
    msg.custom.assign("RWELMVCKNNGQZRPVULDYPXTIEJXQXOXTBBFJWCBXGZWNIMLTQMUEJYCEDIFZMHMZPBUVTIFBNBOLALNJVORQHMXCHFWJKBRIDTVLMFWEGMAMVZKQFGEUKGHHVOVEZWTEINSQHXZVHSQULSETAGDVSGJGJDJRYDENOPYUHLIOCPQPIZAWXYSIZUCNSDOLODWY");

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
    msg.setTimeStamp(0.7441597561675621);
    msg.setSource(8598U);
    msg.setSourceEntity(59U);
    msg.setDestination(21954U);
    msg.setDestinationEntity(133U);
    msg.duration = 43857U;
    msg.custom.assign("LHOKEMCOERSCSGPXIYWRERKVGPDYUCIRWZESODBQSZBRKZDNKIBNWEVJFPIDVESVPYNVXZOPXWLOVQIKGMBMYAXYKDZRZRXHGXGKJLQACABTMFFPDCRKUUZWBTDFYHJZYTMCPRUIPGDAVTAHDYJNLQQPLMQEHBHMNSLUUCMVIOZFTHLWOGCNXTVZQFDWJTPAJFMKAJIBXRQSUGHGHFSXLCHUAQTNMWKTWABILEUOAJVNUYNJTJ");

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
    msg.setTimeStamp(0.2675733102970945);
    msg.setSource(46324U);
    msg.setSourceEntity(40U);
    msg.setDestination(24535U);
    msg.setDestinationEntity(144U);
    msg.duration = 36734U;
    msg.custom.assign("VLABZPRRQTFRDEAIGLPKASZNMTEWPHXVKMPNUTFGLRKAOZWAYFAIOXLEAWDZNVGQXEQVIDGYNPEUIUWGIGPMJHEZTHKUEOFTVKBWYNUVWQROQIGMBNH");

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
    msg.setTimeStamp(0.028155783370356735);
    msg.setSource(14614U);
    msg.setSourceEntity(82U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(86U);
    msg.duration = 11647U;
    msg.custom.assign("BMVSZRECIHLXYZXIXGPFTQYCKKGUQPYWCJBWJXCZDHQIXJGEBDEHPZAQ");

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
    msg.setTimeStamp(0.42906005039482065);
    msg.setSource(61533U);
    msg.setSourceEntity(183U);
    msg.setDestination(54319U);
    msg.setDestinationEntity(64U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5543442950665842;
    msg.control.set(tmp_msg_0);
    msg.duration = 20367U;
    msg.custom.assign("OBLKEJYTTMHKLOMVGXWQSQPCJDBRUWVBTXXYJROLLZNUTJQYDUMHOIPKZXMHXLRDYOKHUMQFICCMYYWMTQCBGEIGKPZQSDZDFINAUZXEYMMCIUEYGWKNVNQRBNEAFIISOWZSVUXQSPOLAAHGCBFGWLCEDFRXCNEJPVPFHYJCZRFBDPM");

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
    msg.setTimeStamp(0.6250904149522334);
    msg.setSource(2957U);
    msg.setSourceEntity(75U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(122U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.15485463218620787;
    msg.control.set(tmp_msg_0);
    msg.duration = 34922U;
    msg.custom.assign("TTMSWCKRXEFHZZSQOSWJVTTKEDTFBYNWWLUAMXDQOURYHYJCBITSTDLUOTYJQI");

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
    msg.setTimeStamp(0.38439979055387463);
    msg.setSource(2287U);
    msg.setSourceEntity(50U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(143U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.23786990584829149;
    msg.control.set(tmp_msg_0);
    msg.duration = 64541U;
    msg.custom.assign("SDCZYQYZZSNZHFZXKOCPOKJQKYOAGIMCJAJAEPFNTUEGAIGVGOBDFFWBEMUMNJLRILQAENLWRMYUDBTFUHMKLLYVKJRPPOKALOYDJAWWPKPXKROTUSTYSEFHCUQTKGORVTNBOXDVDBYHQVXZSVGCDW");

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
    msg.setTimeStamp(0.9776923594451268);
    msg.setSource(1472U);
    msg.setSourceEntity(155U);
    msg.setDestination(26426U);
    msg.setDestinationEntity(168U);
    msg.timeout = 7670U;
    msg.lat = 0.8205835106399897;
    msg.lon = 0.979392406905979;
    msg.z = 0.8253598836118896;
    msg.z_units = 146U;
    msg.speed = 0.2524644250546605;
    msg.speed_units = 252U;
    msg.bearing = 0.6280451916592892;
    msg.cross_angle = 0.8771927439563192;
    msg.width = 0.762771017782008;
    msg.length = 0.9610059026581913;
    msg.hstep = 0.5270453105590586;
    msg.coff = 78U;
    msg.alternation = 19U;
    msg.flags = 48U;
    msg.custom.assign("HMYSVBSWBKXEEFSFK");

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
    msg.setTimeStamp(0.433015971415874);
    msg.setSource(19007U);
    msg.setSourceEntity(60U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(20U);
    msg.timeout = 31338U;
    msg.lat = 0.16178010520254604;
    msg.lon = 0.6265618782456305;
    msg.z = 0.05922892375805655;
    msg.z_units = 172U;
    msg.speed = 0.7057576820298307;
    msg.speed_units = 107U;
    msg.bearing = 0.9847354171521032;
    msg.cross_angle = 0.754957160626248;
    msg.width = 0.6447231943077087;
    msg.length = 0.8547220709058612;
    msg.hstep = 0.6396476104633532;
    msg.coff = 112U;
    msg.alternation = 103U;
    msg.flags = 120U;
    msg.custom.assign("NDKQYEAFKKRYIPKSPQQRM");

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
    msg.setTimeStamp(0.5501928059447692);
    msg.setSource(59231U);
    msg.setSourceEntity(17U);
    msg.setDestination(40415U);
    msg.setDestinationEntity(109U);
    msg.timeout = 51513U;
    msg.lat = 0.9556507738648112;
    msg.lon = 0.319329075638596;
    msg.z = 0.8190345898391433;
    msg.z_units = 146U;
    msg.speed = 0.9438514117306827;
    msg.speed_units = 21U;
    msg.bearing = 0.16514949208324714;
    msg.cross_angle = 0.4498248589556274;
    msg.width = 0.46557821404710886;
    msg.length = 0.06828782240284292;
    msg.hstep = 0.6558469778236768;
    msg.coff = 64U;
    msg.alternation = 201U;
    msg.flags = 96U;
    msg.custom.assign("NMZPLKVEEOIQOKCHNVYNEHGCYFSQQRQRKGAQSYRIPPCLDFKXBOTXXWYMFWQUIFHYDAWKBKGGBJCNAYMAVKEDDZJSLHTHBUEKSGXMUWEMNOGRBWQZAZDXFJQUTSRIUYNUXEALJCBTITZAQPTMZJOIHCJUVMJSTCRMORXFLHNFXIVENQFNNFDCSMOTGCXPBPIAWOBZK");

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
    msg.setTimeStamp(0.8585010977090507);
    msg.setSource(6685U);
    msg.setSourceEntity(12U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(149U);
    msg.timeout = 30794U;
    msg.lat = 0.2888502808573049;
    msg.lon = 0.09953114870468216;
    msg.z = 0.7186724400270419;
    msg.z_units = 114U;
    msg.speed = 0.10058648789100555;
    msg.speed_units = 13U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8518752847274913;
    tmp_msg_0.y = 0.8643339887533023;
    tmp_msg_0.z = 0.0186471410828285;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VXBNWCACMCUKHFZGYCCQIFKGXSAIOSGKJVVSOHHGQSZBTVPPJPBWONFICLJYEXUHQMLTQOH");

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
    msg.setTimeStamp(0.35911031614217315);
    msg.setSource(26455U);
    msg.setSourceEntity(91U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(70U);
    msg.timeout = 11558U;
    msg.lat = 0.663598729040031;
    msg.lon = 0.45184198490072924;
    msg.z = 0.958802913137575;
    msg.z_units = 199U;
    msg.speed = 0.35099147824077204;
    msg.speed_units = 31U;
    msg.custom.assign("BZHZPGNLVXUKVBDVWWVS");

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
    msg.setTimeStamp(0.0363072306335549);
    msg.setSource(24295U);
    msg.setSourceEntity(60U);
    msg.setDestination(51461U);
    msg.setDestinationEntity(140U);
    msg.timeout = 32514U;
    msg.lat = 0.4331085709404696;
    msg.lon = 0.7972560826166715;
    msg.z = 0.33075487046776864;
    msg.z_units = 12U;
    msg.speed = 0.8373533678446137;
    msg.speed_units = 86U;
    msg.custom.assign("RJBAJZAHSAITGPWKMSIWMJJUUYWRGXITNRQMCCMYRDHHVQOTJGCBAQLOKILINPAMSKDKRTUYOT");

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
    msg.setTimeStamp(0.11698616765068681);
    msg.setSource(7750U);
    msg.setSourceEntity(83U);
    msg.setDestination(4244U);
    msg.setDestinationEntity(205U);
    msg.x = 0.8938333980393498;
    msg.y = 0.851977250528552;
    msg.z = 0.7633226522301407;

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
    msg.setTimeStamp(0.06411232420740154);
    msg.setSource(33804U);
    msg.setSourceEntity(231U);
    msg.setDestination(19829U);
    msg.setDestinationEntity(224U);
    msg.x = 0.1471386067079138;
    msg.y = 0.6476113226229422;
    msg.z = 0.8291674605755638;

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
    msg.setTimeStamp(0.27627664381917305);
    msg.setSource(39294U);
    msg.setSourceEntity(80U);
    msg.setDestination(15703U);
    msg.setDestinationEntity(21U);
    msg.x = 0.3667511839650628;
    msg.y = 0.41266534386346376;
    msg.z = 0.8515461402429091;

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
    msg.setTimeStamp(0.425054846726693);
    msg.setSource(12105U);
    msg.setSourceEntity(100U);
    msg.setDestination(31826U);
    msg.setDestinationEntity(42U);
    msg.timeout = 3327U;
    msg.lat = 0.46695432905278167;
    msg.lon = 0.759175340656951;
    msg.z = 0.3775762862538805;
    msg.z_units = 144U;
    msg.amplitude = 0.20168484393414499;
    msg.pitch = 0.989051923006718;
    msg.speed = 0.9612469379850249;
    msg.speed_units = 150U;
    msg.custom.assign("ASUPLTZKTKCXEDRWRBQAAFZFMYLXECKNBUDWISSOLVKGEPOZVMWZETSUMLOYLUSMDTOJEORSJZGVNUXTNFBTPGKWEQIDWLYXBGIFXVLSQPQNBBCYIIKDROHEJLOFFQYUKPJJGIWFVVUAPNNVZOWHYTUEFZWYRGHVQRJEIOHAGCAQTNXTSNTDAAQORUFNYYKJBHP");

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
    msg.setTimeStamp(0.7808279318427382);
    msg.setSource(26192U);
    msg.setSourceEntity(189U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(33U);
    msg.timeout = 50443U;
    msg.lat = 0.8224112041950614;
    msg.lon = 0.1563360657795252;
    msg.z = 0.517346532811622;
    msg.z_units = 163U;
    msg.amplitude = 0.27343756594213164;
    msg.pitch = 0.25655962250488284;
    msg.speed = 0.10139343993587191;
    msg.speed_units = 59U;
    msg.custom.assign("JLSGSVVCROOTZTNYBEAUEUGKBEHJZTAYVJQEOADLVYUAKNNPQCCYOHJGPMQSJLPRHMJILMYVHDIQDNWRMKWFEFHJUDIVASGIIZGXBIJHWWMSNQSCNOYMTFCNTZRXWFOZHA");

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
    msg.setTimeStamp(0.8220698142858952);
    msg.setSource(48775U);
    msg.setSourceEntity(166U);
    msg.setDestination(31518U);
    msg.setDestinationEntity(211U);
    msg.timeout = 51887U;
    msg.lat = 0.1461477925409138;
    msg.lon = 0.4695758607831263;
    msg.z = 0.05288601743315757;
    msg.z_units = 72U;
    msg.amplitude = 0.950727021159917;
    msg.pitch = 0.9305642754603676;
    msg.speed = 0.48820186775204977;
    msg.speed_units = 184U;
    msg.custom.assign("QTVCZEDLTXRELDTLSDQDJGUOHZIYTRHAUZODFNCPLYYAQJZCBASIDITAFYPNMJQSERJAJMQBIPZWNCWJFNVWIUPTVTLEUSYWEHMFKTAQXOUAKJBOXKZCORIFXQFGAHEYJOXLSDUNGWKAQMVZIGVRCILXLTKVHWMRKJGEPGMXSX");

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
    msg.setTimeStamp(0.5664674474760434);
    msg.setSource(56131U);
    msg.setSourceEntity(3U);
    msg.setDestination(30441U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.8986671969621397);
    msg.setSource(36486U);
    msg.setSourceEntity(58U);
    msg.setDestination(28421U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.04559054693297582);
    msg.setSource(22727U);
    msg.setSourceEntity(192U);
    msg.setDestination(26222U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.6097222588278541);
    msg.setSource(48596U);
    msg.setSourceEntity(228U);
    msg.setDestination(19990U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.9358247597654311;
    msg.lon = 0.11926450381677123;
    msg.z = 0.6582112036548685;
    msg.z_units = 247U;
    msg.radius = 0.7535301130213194;
    msg.duration = 62559U;
    msg.speed = 0.6816177097636698;
    msg.speed_units = 176U;
    msg.custom.assign("FKTPPHQUZVNNRIZOTNKRJCJTYTRUJBFZEBQOZIEWCUHGQKBOUJXTGDZWSLRPGYDMGLMLMDLABAQFBSNDOECTZAOIEWRSCAJUGKIUGEJPRVGYQMQFIFACTLVXHHLLXANBEFIJJQERSPOICUADTCMZFWSSPWCAZOOUPGYTITDBNXXNOLXQVMPQWKJJWCKHDKVNAKEHEXVDBLNYSFGREUPQYYZMVMFOYBHRAMD");

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
    msg.setTimeStamp(0.5643019268244722);
    msg.setSource(43093U);
    msg.setSourceEntity(2U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.6054155554817986;
    msg.lon = 0.19831240859487576;
    msg.z = 0.3202532967045336;
    msg.z_units = 141U;
    msg.radius = 0.6935901024398877;
    msg.duration = 36122U;
    msg.speed = 0.6621347155842684;
    msg.speed_units = 200U;
    msg.custom.assign("SMDMZHPARVIKTELEEYZXSTCGZQVMHINRYLBAZLWGNSNUKOKXLCNAZKSTMCPETVUGFSFVGGJJEWOPZHDRWQDUICKVBAYIHAAEOCNVOXTELMIIGOLGOPUWTIIBKGWBTLMCQIIXDXAFFZSKADUZYBNWPXJYFMZBHQKLEXXHKNSOBVFDQCQYTCHRL");

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
    msg.setTimeStamp(0.7956345107019952);
    msg.setSource(7424U);
    msg.setSourceEntity(114U);
    msg.setDestination(52236U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.9709419181643237;
    msg.lon = 0.06110129137793252;
    msg.z = 0.07910543728333275;
    msg.z_units = 45U;
    msg.radius = 0.7224991484133135;
    msg.duration = 5363U;
    msg.speed = 0.5680294662915358;
    msg.speed_units = 83U;
    msg.custom.assign("AAAVYKFYZOOZPAMXQGHTSSWDHUWGERJDUMUKKPNARFOXIGVKKYOBMFSRCGITHJUOYMMDDLJSTNDXCJBMXQEZMBNVEKOAGVBETIS");

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
    msg.setTimeStamp(0.5846259415694799);
    msg.setSource(16762U);
    msg.setSourceEntity(189U);
    msg.setDestination(46406U);
    msg.setDestinationEntity(167U);
    msg.timeout = 15987U;
    msg.flags = 114U;
    msg.lat = 0.24281259869692595;
    msg.lon = 0.004595910913955725;
    msg.start_z = 0.9255637868433599;
    msg.start_z_units = 227U;
    msg.end_z = 0.9973232632370562;
    msg.end_z_units = 236U;
    msg.radius = 0.13210961285537415;
    msg.speed = 0.8493131504247142;
    msg.speed_units = 175U;
    msg.custom.assign("HUSARTCLXAHHVHGJASOIUICKIGKJOGOPNTGXYCQHLGAWHXPDTTSFYGEDFCWTYABCZWQDOQNCSAKOMKQJXXENIVFJUMTEGLEEOTDGERYMBAJRKIUHGMVWHYZZSUPVJRQBVRFBPPBNRWYTPLKASDJXT");

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
    msg.setTimeStamp(0.739924848159868);
    msg.setSource(41932U);
    msg.setSourceEntity(85U);
    msg.setDestination(18150U);
    msg.setDestinationEntity(80U);
    msg.timeout = 42781U;
    msg.flags = 211U;
    msg.lat = 0.30611313494343495;
    msg.lon = 0.6369560747572073;
    msg.start_z = 0.08409243739301309;
    msg.start_z_units = 37U;
    msg.end_z = 0.12857474150843107;
    msg.end_z_units = 216U;
    msg.radius = 0.574650183157307;
    msg.speed = 0.187323671226011;
    msg.speed_units = 5U;
    msg.custom.assign("NFFROBZKCCBQIWDADGCLBWBAJADATXGBWFDUGUUPPRFJYYIWLNCZJWWRRHYLSPTTVKTEJQSEUVMWNBSSXTTOGXRJZYANIPNMWORBBZXZUCGDSQOXXHVOXSNDVTLJQEBCGYCMZHOMNKCHKXLLXOMFZIHQJXVDHPPGIPPTZQSUJYYQVNUFHEHAGMCQKULEPKKSTDNYWQMEEPGWIFZOYFEAAILY");

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
    msg.setTimeStamp(0.5035725712832311);
    msg.setSource(25874U);
    msg.setSourceEntity(244U);
    msg.setDestination(712U);
    msg.setDestinationEntity(18U);
    msg.timeout = 38106U;
    msg.flags = 47U;
    msg.lat = 0.9901803987390212;
    msg.lon = 0.9885982695539348;
    msg.start_z = 0.9101987850422057;
    msg.start_z_units = 196U;
    msg.end_z = 0.7249118104591219;
    msg.end_z_units = 247U;
    msg.radius = 0.2408442385612588;
    msg.speed = 0.39679955677923906;
    msg.speed_units = 46U;
    msg.custom.assign("FULHKBIIHIXCJOVUZMYDSLDVLWEUZJEFPVQTRXDGKQBCIPSCUNIMGQ");

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
    msg.setTimeStamp(0.36396220234227883);
    msg.setSource(17725U);
    msg.setSourceEntity(17U);
    msg.setDestination(20370U);
    msg.setDestinationEntity(9U);
    msg.timeout = 6804U;
    msg.lat = 0.5936025197309556;
    msg.lon = 0.12022886694859747;
    msg.z = 0.2030135454333778;
    msg.z_units = 58U;
    msg.speed = 0.8063813894721886;
    msg.speed_units = 172U;
    msg.custom.assign("UPUCVCKKOQONTVZZWKYWSOPEPZWCKHFHLPPTEJMVSHQOYSWHTNOQQXDBYBINJOJJRAWMNDBRXWPMCFISWUSDXEFEKTCAKLHPIKXPGRVYAHAQJWCZMAFNDKMTEDVDGQOBYXEQXDNUGEMSRGZEKLLAYDZUTNJLJPJWXGMALXRIVCZGDSIUAYOTUNFBZJEQNBLAUFICLRMQBRYUYTXOSVBZLMBHKFCZRHNSTMXORVGTFDIRJG");

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
    msg.setTimeStamp(0.5859764064201975);
    msg.setSource(11021U);
    msg.setSourceEntity(230U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(200U);
    msg.timeout = 48068U;
    msg.lat = 0.29326464078513714;
    msg.lon = 0.41366407626163304;
    msg.z = 0.47835565894481624;
    msg.z_units = 202U;
    msg.speed = 0.47372583542805835;
    msg.speed_units = 235U;
    msg.custom.assign("RSZIQSJKDFSUGXNFQSGSAUZNZPJERFNWVGDBVBHYTRNJCWOVESVQHATJLOVSASTPKFGFQXIBCZPXMKTTOCTKGIALGDDR");

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
    msg.setTimeStamp(0.014492541077931853);
    msg.setSource(1316U);
    msg.setSourceEntity(139U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(75U);
    msg.timeout = 45231U;
    msg.lat = 0.05640680571316159;
    msg.lon = 0.4185965027223786;
    msg.z = 0.7386038383676001;
    msg.z_units = 109U;
    msg.speed = 0.9827490567372049;
    msg.speed_units = 116U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7327580458784864;
    tmp_msg_0.y = 0.507310718246852;
    tmp_msg_0.z = 0.3316028122046757;
    tmp_msg_0.t = 0.12023023906225949;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EXNFPHYTXFXYNAIFSSWJQBJPVJTZIUEBOVXBZIZERRGKY");

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
    msg.setTimeStamp(0.276113036020306);
    msg.setSource(28546U);
    msg.setSourceEntity(21U);
    msg.setDestination(41145U);
    msg.setDestinationEntity(234U);
    msg.x = 0.594697669789349;
    msg.y = 0.13969177433397695;
    msg.z = 0.6228601007862884;
    msg.t = 0.22302314722300498;

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
    msg.setTimeStamp(0.3713562935469229);
    msg.setSource(1228U);
    msg.setSourceEntity(49U);
    msg.setDestination(29669U);
    msg.setDestinationEntity(52U);
    msg.x = 0.5777241196988794;
    msg.y = 0.8162668109293177;
    msg.z = 0.39372695966457294;
    msg.t = 0.787087733257189;

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
    msg.setTimeStamp(0.7792209837363221);
    msg.setSource(54014U);
    msg.setSourceEntity(80U);
    msg.setDestination(15869U);
    msg.setDestinationEntity(89U);
    msg.x = 0.39911923251023507;
    msg.y = 0.21487574254166697;
    msg.z = 0.7103513981418499;
    msg.t = 0.9912660080895623;

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
    msg.setTimeStamp(0.6749597873240346);
    msg.setSource(35077U);
    msg.setSourceEntity(105U);
    msg.setDestination(64220U);
    msg.setDestinationEntity(89U);
    msg.timeout = 54329U;
    msg.name.assign("XFLXFXUPPTWUSXHVCGCDUQFBXBQQDXKMCEFZTHSIQMRTIAZCWMGJMYEUCAIPLABJGPSRLFVDZVDBTFYXWQQVDNEWACZWZBVYVSUMEKDYLPHAWGZVDUNIPCEOUWPOJQVPRCXHWFOTUEAHMNILNYGWRVPGRAMYZROYAHLYACULNBSNRIOKJJSOZEIDLJQQFHKLIEKWRBGTSHKTUMJZRHQOENIDGGZNSYBLEITKDPMOSJOBAKSTOKJCFNGYVNFJ");
    msg.custom.assign("KOYHVTLNLNFEHFUPTWJJFRQZXLDKFRPSYSSHUUKCXLSSIDZIPKPNAICZ");

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
    msg.setTimeStamp(0.7430542523715371);
    msg.setSource(8087U);
    msg.setSourceEntity(172U);
    msg.setDestination(58893U);
    msg.setDestinationEntity(97U);
    msg.timeout = 58108U;
    msg.name.assign("CKQTIEMBROKVXGLZCHERECHJGZYBZLQUEMMTVAWAJYDQRYATYVPFDFOASNYBEQERMNVYXOFKQNPNVYXPZDKWJUCHVUSBEPTIUPHIXQBCNXWTTOLIASPYLRIZZXWLGDGHFQDSJOUQDKYVFMTVJPNKCTRMF");
    msg.custom.assign("WWBMSSZTULRVGBTQQXDGBYTMOZCEMUUOKEMATLVLKSAAJIXOBJLPRYSHQZVVIFMJZAPMOCKCDDVRYDUHEOCLIHSDLNXUBSJGWINFRZNJWVQEQRNRDDKGWZODOPQUMXKVBQGETJKCTBFJEKNBUIBOTHSKHZXIFKUXXBWOXVQPPVJDEFWPERJFWAAGTNSNIMIXYCQPZNRHROLAFYYWRYGXZHAQLFVMIFHP");

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
    msg.setTimeStamp(0.5761248943619947);
    msg.setSource(22431U);
    msg.setSourceEntity(211U);
    msg.setDestination(45246U);
    msg.setDestinationEntity(141U);
    msg.timeout = 41460U;
    msg.name.assign("TELUOCLIZJWBKBSYKMOIPUNDZQOBTPKZZXDAUJJZRKAFWZEBTTFTMKCETXFMPESVRYAKFOHDNQALRVLCDSXIXMBYAHJGMOIENQFZXLNAIAIWKYRTEGKMWRCJAY");
    msg.custom.assign("HVULVUYOTQNUECIYQKLAAIJPJIJXPOLVIQKLJIUWTDHRXUJXSMFDEYOBZMRVPDIAKPMENVTHZQDPYCVQECZPGRBFUYMWMDTFQWGNTSOMBBFOFKLRTGXMYNEZJKEJCFSKZONPNBXNB");

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
    msg.setTimeStamp(0.9018024091669004);
    msg.setSource(11029U);
    msg.setSourceEntity(79U);
    msg.setDestination(60754U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.049555231195231864;
    msg.lon = 0.6228691108623512;
    msg.z = 0.8221722880047893;
    msg.z_units = 38U;
    msg.speed = 0.5888965316639072;
    msg.speed_units = 152U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15862U;
    tmp_msg_0.off_x = 0.3428826584513922;
    tmp_msg_0.off_y = 0.40864912247480567;
    tmp_msg_0.off_z = 0.22310861695721185;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.11219756589168262;
    msg.custom.assign("JQBNVOTZAY");

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
    msg.setTimeStamp(0.2614919682932312);
    msg.setSource(8120U);
    msg.setSourceEntity(172U);
    msg.setDestination(10622U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.2423617817435486;
    msg.lon = 0.30782185052691835;
    msg.z = 0.5627066625639543;
    msg.z_units = 189U;
    msg.speed = 0.8855116730620268;
    msg.speed_units = 107U;
    msg.start_time = 0.20474347456383302;
    msg.custom.assign("BNIECHFJOFHIJQWYZPZNPGHIBZQUIDEVWZMXSEXNRAQNDYBHDSAQSKUNWXXUEBUPBVCSVLZLUAYZHJKZBTASOYHJSJCEROTWURSXUOQCZLQEBKMWHZSCPPJXCOOLMDOMRRFRDDCKGJERGQYSPKOLLGTIFLNNDBENWMCTALYVHKOKQCTVAXGDJYMKWMUYFBYNIVUKCQMIPKALVDTTVVRIH");

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
    msg.setTimeStamp(0.31187074006810944);
    msg.setSource(35756U);
    msg.setSourceEntity(32U);
    msg.setDestination(51205U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.7271882022479711;
    msg.lon = 0.6417149646278343;
    msg.z = 0.4868785460378593;
    msg.z_units = 190U;
    msg.speed = 0.8680216355020723;
    msg.speed_units = 250U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7940U;
    tmp_msg_0.off_x = 0.43593288471034686;
    tmp_msg_0.off_y = 0.4456475138801028;
    tmp_msg_0.off_z = 0.9794106043035444;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8907394173178849;
    msg.custom.assign("EPNGAADKQUVQBQPCGNZUSFINOEB");

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
    msg.setTimeStamp(0.4061583834629513);
    msg.setSource(960U);
    msg.setSourceEntity(70U);
    msg.setDestination(9775U);
    msg.setDestinationEntity(28U);
    msg.vid = 15227U;
    msg.off_x = 0.5899922674582087;
    msg.off_y = 0.014451965909256681;
    msg.off_z = 0.1991152879027298;

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
    msg.setTimeStamp(0.3596717054648173);
    msg.setSource(11901U);
    msg.setSourceEntity(233U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(33U);
    msg.vid = 4187U;
    msg.off_x = 0.6209162839651678;
    msg.off_y = 0.6461149659289082;
    msg.off_z = 0.11519525093967409;

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
    msg.setTimeStamp(0.552312043176201);
    msg.setSource(16729U);
    msg.setSourceEntity(71U);
    msg.setDestination(24643U);
    msg.setDestinationEntity(100U);
    msg.vid = 3153U;
    msg.off_x = 0.08458578760818847;
    msg.off_y = 0.2717738732367768;
    msg.off_z = 0.14058277940798702;

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
    msg.setTimeStamp(0.17084230561136848);
    msg.setSource(47115U);
    msg.setSourceEntity(129U);
    msg.setDestination(22482U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.37862638678715876);
    msg.setSource(13178U);
    msg.setSourceEntity(163U);
    msg.setDestination(28013U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.037476685608234694);
    msg.setSource(17172U);
    msg.setSourceEntity(11U);
    msg.setDestination(62001U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.4379726176552291);
    msg.setSource(45285U);
    msg.setSourceEntity(130U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(27U);
    msg.mid = 10766U;

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
    msg.setTimeStamp(0.22448153645546187);
    msg.setSource(56883U);
    msg.setSourceEntity(50U);
    msg.setDestination(24373U);
    msg.setDestinationEntity(158U);
    msg.mid = 24739U;

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
    msg.setTimeStamp(0.47722527775772716);
    msg.setSource(41491U);
    msg.setSourceEntity(121U);
    msg.setDestination(54345U);
    msg.setDestinationEntity(87U);
    msg.mid = 37511U;

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
    msg.setTimeStamp(0.1394831534151274);
    msg.setSource(6369U);
    msg.setSourceEntity(152U);
    msg.setDestination(9684U);
    msg.setDestinationEntity(76U);
    msg.state = 79U;
    msg.eta = 45644U;
    msg.info.assign("FUUZCZYGRWHHCEYTMJYTKLQJHRZPJZRWGXSDOCWUHSPHAKMCXHVFHGNETVIDFDXFPIPSWOKCNOPHIVDAKXDQSQBREVQBZBOBFRAIJSKGNPGXXBBIYVWILMXROGXEMRNKWTMQEGTQUFZOPDKTRAHEVJYTGWZLFCTLYVWMMCFSOWINKYJTJQXOANUCLZAXVDESUCJDLSCPQENIPVFYQRSYOQKLNARBUNZJMBSADJMUINBIDLLY");

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
    msg.setTimeStamp(0.26240516477192777);
    msg.setSource(54826U);
    msg.setSourceEntity(233U);
    msg.setDestination(39527U);
    msg.setDestinationEntity(191U);
    msg.state = 198U;
    msg.eta = 54499U;
    msg.info.assign("MKIBJOLYBIXUCHMZQIRBBTEAZGSJVOZTTAOPVDQQXNVXTAQFWNROKCVTQKBRMORUUUWPNEMTJSVFGUCJCAIZKNLFQUGKHERFURREOQFXFCTSRJHHAWXWHSDAIWLZMUPDFKY");

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
    msg.setTimeStamp(0.32417468597847754);
    msg.setSource(46077U);
    msg.setSourceEntity(147U);
    msg.setDestination(5039U);
    msg.setDestinationEntity(164U);
    msg.state = 107U;
    msg.eta = 14680U;
    msg.info.assign("MMVODGPTXFGCQOZPAUMLDRRCRBBKBHDPUPHLLXUSTOYSZCWDEIQBUUKJHKJEZQOZSYXDJHBVCVZTEFXTUZSHLNANEFXDNIVCWYEDVLIPBCOGTOVKSAGBBSZPIJCPKJLSRJORFYDUHIBHJNYHKMAPVXVKQLDWGKAYMIACIWVAQLCGUFOGNEJQMNNDEKQWYRRYXERPFLOMGQT");

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
    msg.setTimeStamp(0.6922233797808858);
    msg.setSource(62666U);
    msg.setSourceEntity(99U);
    msg.setDestination(21998U);
    msg.setDestinationEntity(136U);
    msg.system = 4955U;
    msg.duration = 15471U;
    msg.speed = 0.9859307420774759;
    msg.speed_units = 66U;
    msg.x = 0.1429212130855273;
    msg.y = 0.5293078695975297;
    msg.z = 0.07758981574914059;
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
    msg.setTimeStamp(0.7625692916030439);
    msg.setSource(26471U);
    msg.setSourceEntity(136U);
    msg.setDestination(30128U);
    msg.setDestinationEntity(199U);
    msg.system = 47427U;
    msg.duration = 58987U;
    msg.speed = 0.1952225076629699;
    msg.speed_units = 225U;
    msg.x = 0.013773470422406398;
    msg.y = 0.4620192677297007;
    msg.z = 0.1810444067079402;
    msg.z_units = 253U;

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
    msg.setTimeStamp(0.25161171003423877);
    msg.setSource(65279U);
    msg.setSourceEntity(145U);
    msg.setDestination(20548U);
    msg.setDestinationEntity(20U);
    msg.system = 16739U;
    msg.duration = 47980U;
    msg.speed = 0.7359503964511707;
    msg.speed_units = 90U;
    msg.x = 0.15495243953264304;
    msg.y = 0.27803111760728505;
    msg.z = 0.09039900665898337;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.9222203723678655);
    msg.setSource(32316U);
    msg.setSourceEntity(116U);
    msg.setDestination(312U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.7285462693467828;
    msg.lon = 0.7485426434243838;
    msg.speed = 0.09054107319770743;
    msg.speed_units = 24U;
    msg.duration = 41634U;
    msg.sys_a = 60320U;
    msg.sys_b = 18697U;
    msg.move_threshold = 0.8696528369255616;

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
    msg.setTimeStamp(0.5004758756034623);
    msg.setSource(32479U);
    msg.setSourceEntity(218U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.41603100269444493;
    msg.lon = 0.6933739341729536;
    msg.speed = 0.993142989323994;
    msg.speed_units = 14U;
    msg.duration = 11550U;
    msg.sys_a = 63795U;
    msg.sys_b = 57772U;
    msg.move_threshold = 0.12808438261523525;

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
    msg.setTimeStamp(0.6555258401096199);
    msg.setSource(54651U);
    msg.setSourceEntity(111U);
    msg.setDestination(30386U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.2798989434485377;
    msg.lon = 0.9672206943563268;
    msg.speed = 0.22778468420874665;
    msg.speed_units = 127U;
    msg.duration = 45358U;
    msg.sys_a = 35762U;
    msg.sys_b = 10965U;
    msg.move_threshold = 0.5409266868292822;

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
    msg.setTimeStamp(0.7274773477166314);
    msg.setSource(60647U);
    msg.setSourceEntity(125U);
    msg.setDestination(61091U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.3744979888335763;
    msg.lon = 0.549919738309048;
    msg.z = 0.7412578236176485;
    msg.z_units = 132U;
    msg.speed = 0.48949146992891623;
    msg.speed_units = 189U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4787270208774319;
    tmp_msg_0.lon = 0.3450063400219209;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MXWKKVNAGIBIVJJUOIJZNJLMWOCXACGXZLQKPSEHQKSTEU");

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
    msg.setTimeStamp(0.8565558008760306);
    msg.setSource(10987U);
    msg.setSourceEntity(145U);
    msg.setDestination(36786U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.34683965116083326;
    msg.lon = 0.8794784178033791;
    msg.z = 0.35208343643871964;
    msg.z_units = 91U;
    msg.speed = 0.03334915590393295;
    msg.speed_units = 172U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4336942980104479;
    tmp_msg_0.lon = 0.4973841247038001;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GBGZINLWQOKUDBCTYJMBXZFPDTFXYTPGVXOHZQWIRPUIEPTWEKSQOIMPEEALRQJDZCBOKUWKVAKKIBBMHZKAHJEJLAWJUTRUCFBLYSTCGMUSWWGTDLYVYVVUGCVPONNOFXXBHSUQLOXACIRWMOKZTVISVIJNADCTQSDQOZQIJSPVKPMSENFSCNFRUEHPFNGEHRXJTPHAUCXZDXWLRNDXYMNHYKGYGLY");

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
    msg.setTimeStamp(0.339043908012415);
    msg.setSource(2634U);
    msg.setSourceEntity(167U);
    msg.setDestination(26765U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.26546860675899797;
    msg.lon = 0.6761790715871719;
    msg.z = 0.7573423812894318;
    msg.z_units = 95U;
    msg.speed = 0.6776397613835742;
    msg.speed_units = 87U;
    msg.custom.assign("KSDANGRIOBEVABMNJSQSVQLXWNSPZRZPEHJGRIXLUIICDYCSPCNHFAMXIVYSMOUTPGOUENYSMNSPMSYHOMOEDOVRBXPFLDKQFXFFDNVRBCZYDLWIKCQBAQWARYEZARMHBKZGMQOPZHCGQJNJFUTTQCQGECVZAWNJRXTGKIVZPDLYKGFJHDTETWFVPCLUJJABAHW");

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
    msg.setTimeStamp(0.4081627907274624);
    msg.setSource(37285U);
    msg.setSourceEntity(227U);
    msg.setDestination(51984U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.4315471211214944;
    msg.lon = 0.5908660091821795;

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
    msg.setTimeStamp(0.10259217084032368);
    msg.setSource(59703U);
    msg.setSourceEntity(70U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.258019101442737;
    msg.lon = 0.5196270200968546;

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
    msg.setTimeStamp(0.4424715166434937);
    msg.setSource(60608U);
    msg.setSourceEntity(173U);
    msg.setDestination(43538U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.4004295112890348;
    msg.lon = 0.5862366694333078;

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
    msg.setTimeStamp(0.31850489041567076);
    msg.setSource(14342U);
    msg.setSourceEntity(137U);
    msg.setDestination(34650U);
    msg.setDestinationEntity(178U);
    msg.timeout = 55339U;
    msg.lat = 0.07958269432625942;
    msg.lon = 0.4345188089496872;
    msg.z = 0.7804133575051516;
    msg.z_units = 57U;
    msg.pitch = 0.36111927918277464;
    msg.amplitude = 0.6550936625780859;
    msg.duration = 25328U;
    msg.speed = 0.781683586089849;
    msg.speed_units = 203U;
    msg.radius = 0.6478017610501351;
    msg.direction = 115U;
    msg.custom.assign("VLXMRFPSXJRDTJNBPQQDKRZBMFNGKMSTRIMUUOXTWFNMFDLQMKCJIBUPSHOYEYDPVNEXMTTDLTAPCQSFAEUYINIRAOFQFHQGUZYRAMKZCQJWKOCRXWBMOOZKVBBHXSEFZRLIKWOZPBJTUSJIIIWBQPSLPRETNTHXWINQWVYGBNSCVDDYXKAVADUHEZBLJLHUHOOKUAPEZEVYGCGHSSKNFLDXFGZYGGHAALXWGOVQPZJYDVACCJHUWERTJVGME");

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
    msg.setTimeStamp(0.5771728444332117);
    msg.setSource(58514U);
    msg.setSourceEntity(18U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(58U);
    msg.timeout = 26249U;
    msg.lat = 0.8531888647345062;
    msg.lon = 0.4535700744748825;
    msg.z = 0.6609514077301438;
    msg.z_units = 127U;
    msg.pitch = 0.2678924357411726;
    msg.amplitude = 0.44452426057620675;
    msg.duration = 23663U;
    msg.speed = 0.5981069703718551;
    msg.speed_units = 187U;
    msg.radius = 0.7085204768240914;
    msg.direction = 103U;
    msg.custom.assign("NVLMPVDMJAGHCUEUNDHFZSHMYZBWTATHGRLPUYTWCIFVQGBAYWMIVQSMYXWGNTZETGDXQPJPQQRIGCPETRNEGCBDLKOROSJZDALWZRSAGIOYWOYRTIMGFGOIKANZTJLMFFLCWANNFFBCLFYTEJAJXROUZXVMYBXDLIOBNPVRWUVSZQKPEORDHJBKVXCZFKEMSHTPESYSSAHQOQEDONPJBKF");

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
    msg.setTimeStamp(0.26235094552523286);
    msg.setSource(26332U);
    msg.setSourceEntity(161U);
    msg.setDestination(34039U);
    msg.setDestinationEntity(243U);
    msg.timeout = 60897U;
    msg.lat = 0.6259180790064575;
    msg.lon = 0.03299195668496335;
    msg.z = 0.8341853961768566;
    msg.z_units = 218U;
    msg.pitch = 0.20408676985826035;
    msg.amplitude = 0.2416413318149292;
    msg.duration = 65440U;
    msg.speed = 0.19438479515522866;
    msg.speed_units = 190U;
    msg.radius = 0.014317737107807704;
    msg.direction = 50U;
    msg.custom.assign("QRMMPSCYGVTLLOHPYCOKUPZNJHUEHLMIFDBVPVGGWTYZRAWWYWUZRSFZYSLXRBTMKGZAVLPFYWKCUQZAQFNCDIRIGIXJGNTQTOVFJNBWVIFFJUBSIKEODPJVSPIWABXLIPZVTRLBNACBXAEIUQJAMMUJUKSOEUJEQZNCJEBMWQOKSSEQONMDXCYGEZDYJKOCOVDHXDHHTRMCLFGKFNG");

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
    msg.setTimeStamp(0.5142641562708545);
    msg.setSource(42378U);
    msg.setSourceEntity(226U);
    msg.setDestination(12471U);
    msg.setDestinationEntity(156U);
    msg.formation_name.assign("PYZDYBSMNNWPTDAVJISOWGOPEUOXOQMQODNDTJQSFHQNIQCTOLPVPBURFBKROHZOCSQELMMRHDIGHJTJWFTZPVNESNLVHSRWTMYMTXHQXEXPYTBUUWECB");
    msg.reference_frame = 98U;
    msg.custom.assign("JLBBYXZIHWCHWVXHWYHPZBTEMYMTPIDLYSVLLYIHVGGSDNJZQUETCVZXXNVYUQNMZPTCVCXQSIAXGTSKAWDJYKOVXCJAJXRCDZWLMRKIFNJNUIWUNHMMFAHEOSDEZTTYQUGJUTNUINRQZFJOBMGVECPWZEMDSRKTGKSKFYXFRZDQCRLDIALUAEDLWYKRTIRNOEBBQPBOPDRFJJAVQQEIMRGAKAHMSOKHGALOGOLGPCSOUSNFCPEVBKWFFOHWB");

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
    msg.setTimeStamp(0.041834903547879776);
    msg.setSource(52470U);
    msg.setSourceEntity(4U);
    msg.setDestination(53461U);
    msg.setDestinationEntity(49U);
    msg.formation_name.assign("CHXORKFUFVEOTBIUQAZBWNPKUQXXQNWOVOINJTJDELPAPFSLYZHQPYDJVIMTICNBSMMMHTUYQZEJZGRAQFIWFYPHDXBMPLXEOJBIQCWMWMWUVPXCLFORASZDIAMLBTVHRKRVDVGKIZXRETTUVXVIFEBWFQOASWCNEEWKJHZDXCYGRBLSHDFOHPPSJTOQYCLJNKUPNEYYEKG");
    msg.reference_frame = 242U;
    msg.custom.assign("KOSYNKRUDLKFLVLTYBOTNIBZCHHVBTZMGXUMUOPZRAPJUSJJFPIXBCHTUQEXQILRDBOHGVFZEIBHYGPFXWVGPLSYATXQUOZDCSVXKDUTQYYWUUMEGKQQACNVVJNTLZLBDUAQOYAMDMPMYENZSEICEJOHGNAIRYGRJHAFNFIECWFIG");

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
    msg.setTimeStamp(0.5414980323855305);
    msg.setSource(12292U);
    msg.setSourceEntity(220U);
    msg.setDestination(8798U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("NRJHWHESQXFXQUYQLJRVTLVUXH");
    msg.reference_frame = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59166U;
    tmp_msg_0.off_x = 0.6374949916313345;
    tmp_msg_0.off_y = 0.35257781792918286;
    tmp_msg_0.off_z = 0.07922735248889401;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MAOXPUNXEIRNGZNSZJSVUSIZHOZCBBECTQCZPPWGLMEYEWWPWEOANJZQEKOHTXJQXMOTZGUJUHEDLVLBBLHJPXFUFRPAFRCNTQSTMGQZGCNAKNURXQLBYYSOUAXFDYYQHBGCATXKYWUPMAFISXOIWALJLERJVUYQHGDVSQFKDWIHBVXIRMKFRFBNQVDPVVIDSBFCMTATOSKOIYCCRIJKGWRDMIPMFVJKEDT");

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
    msg.setTimeStamp(0.9120366623628516);
    msg.setSource(9385U);
    msg.setSourceEntity(95U);
    msg.setDestination(33224U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("IDQECQWYXEDNSJRDUHDYXHOQPKBCXCNZXGESGMDOHITPYTVLBNOZVCDUHPXNIWUPJJQZSOMFRMABLTJGPLIJUQRSLWIATEKKHKLVCRWMYLMZUQEFZZOWPFANTDGLCXPITBEZBNEFVJHVSM");
    msg.formation_name.assign("KWPVAGKKNMLSCTJFDKDHCKAPTHRBDSGNHFAYKEDDDGGBOCUTMMZRENXUAHZEMYHJYFXJDUHVTWJWQCVSZRQYNYBXOJXQJYGIDJLDHILOJPB");
    msg.plan_id.assign("YZJCQUKGWTSBOSYKKERGCYSAMPRWLRMHAQFWFTTXRCZQHHTEBGLFAXDPHJHAWMNSKNPHGJDHNMVIUSTNUGOSXVQLAJWFIDEZHBGEZRIXLCBVTWCEBZOTIXMUQOGLDRPKVEMYFSDUMSQZXGVBBBKVOIJMPEXYFULWAEYDJRCHONBAEPUSVTHVDRMOLQQWJKKGYE");
    msg.description.assign("WHFCVKJZNKGJBQNDMLXDUEMIRXKLWOCEBYSOTFTDYWGPDSNOIDOMTNXBDYEWHCOYFFQKRUIXMTLORQULRVPALAFLVSEHBZIOZLSTFJUFAYYLSQHOHVFYZQRQCQQWBTRVNYSPHACXKDYZAERKDMOCGUMWXPISGPABPFCBMVTUQKAFNKHDEZV");
    msg.leader_speed = 0.0434551512561987;
    msg.leader_bank_lim = 0.83522174544421;
    msg.pos_sim_err_lim = 0.3423091706006872;
    msg.pos_sim_err_wrn = 0.8131043163464002;
    msg.pos_sim_err_timeout = 6881U;
    msg.converg_max = 0.24774970625615866;
    msg.converg_timeout = 7451U;
    msg.comms_timeout = 65291U;
    msg.turb_lim = 0.7989631843855179;
    msg.custom.assign("OXYXFIYQCFWIHDTTWMHWOFGVXQLIFDDHKLLNIWEKRLUNNPOBASKBTQMNPBIMXXSXMR");

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
    msg.setTimeStamp(0.4943082830886715);
    msg.setSource(2563U);
    msg.setSourceEntity(138U);
    msg.setDestination(53546U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("NWBWQSUYBMKXFLTMPHFKBGXFDVWKSSOVEYLOROEZENXXRJXCTEIESSZDZDNBDGEFPWBDADVRPBJPCZVHFMJGODYNVEXNIHLUMFJDCLMVLKAMHVORZLWGFJTKTAKQYOCMVNQURCKT");
    msg.formation_name.assign("QVBERRHVDTFBDCSLNKPEHIEIWIPPLXOBQCTGKUUIBHFESJDVCRALEIOMDUBALVYAMUYZPHRGLTXRPDNOYKCAGRZWYFWHSTOBGZKNUEQGQCLUHIKIVJPJCHNRQQGMWTMSHZFJJILFCTMKYNDXYCGLOFSVHFEULZRNSMVNHMTMABKVGQQEUADFXIXALYZTWAWAXSFXMMCIUNNRSSTOBXYEFDDNBTWASJQPOXPRKJKZZPWYZOVGV");
    msg.plan_id.assign("XBUXXPSNIEBMXLENWOGADVATZSHJXWHCRYPYJTJBTKYQSQP");
    msg.description.assign("XINJDNUTKRPJNEIMCS");
    msg.leader_speed = 0.1508405034236;
    msg.leader_bank_lim = 0.9611848734912372;
    msg.pos_sim_err_lim = 0.1110652406990763;
    msg.pos_sim_err_wrn = 0.5636582818678209;
    msg.pos_sim_err_timeout = 32486U;
    msg.converg_max = 0.3023838446667011;
    msg.converg_timeout = 23997U;
    msg.comms_timeout = 53626U;
    msg.turb_lim = 0.8449091184495987;
    msg.custom.assign("WEGXFXZOYRTKOADANGQIDWSYFOUVOWENXHWNANGHBIOURJSTYVHCRBIMFQPGCXQBYVSOEVKPPFJDTLGIJJECRJCZGHRTBMTCQAZWQVXHXOGRVSGDWQRJKNDFBKRFPDIGPPZVSUNTBQOVMANOPXDQYZCBEPYYCLFMLSMLZJIWRUYBJUSLNBLFKLELEAZTOXVUEUZGMKHLYWHTSADSQMIKN");

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
    msg.setTimeStamp(0.8812027782754017);
    msg.setSource(47444U);
    msg.setSourceEntity(111U);
    msg.setDestination(47621U);
    msg.setDestinationEntity(189U);
    msg.group_name.assign("HAGZHHIAIFHJGRKEJNECGFFCJBKVSDWUQHGOMVUZMDCEKODQPUOBGXJWATIEQQRMYGWWLBZELXZRYBFZTQFTXGCSFGVNHZAAII");
    msg.formation_name.assign("ZOSPUABSOCKEPTORZLZIGSPKZBKIMGUBMFNEGNIEXTIUWKNCJOQOAMINKOAMDWURAWDEVLMEWCTTYTPFQFVXXGGAMEJTTXYUN");
    msg.plan_id.assign("NGMKGTGPREDCLUIVLXYNDPQYUQNXVXSMVUDGWHBMKXSLDJVCWPMZVIEFEWGFHOSJPTQYZWYJZKAFLTRVEMIMYLRSWLRBLMDYCUNZKTKOUWSLAQPUURAIIBBNOQFCKTYNJUKRKBZAAPTYONCNXQHPZHOZJFUDEOHOIIELFIDVAQCMVHBZHJFBQCCSWGTDRSBBTHEXEGWHANIJQTPEJIXFCUAOSPDXAERWRSHVFRPSZQK");
    msg.description.assign("QHNFQPWMNHILYIFLNTBTTWMRPOXQUBYGIWUIGXPSFOOUVUJLZCWDLMMFRTEFSASJRQPLVBTUFHCUCXXZYHKELKOCLNAAABWTWMKJJNMGIDUHUNRYCZH");
    msg.leader_speed = 0.3269842384266949;
    msg.leader_bank_lim = 0.9185985607274209;
    msg.pos_sim_err_lim = 0.8970670078347301;
    msg.pos_sim_err_wrn = 0.11626216128320532;
    msg.pos_sim_err_timeout = 27539U;
    msg.converg_max = 0.15527206407938154;
    msg.converg_timeout = 41939U;
    msg.comms_timeout = 38642U;
    msg.turb_lim = 0.18818735452915858;
    msg.custom.assign("CSUAFUKXLXNFHEMENTYCHIGPBNEOGWYQJSNLXEYJZACMDBUTAEVIXMJBRRMKBVDWVVQJRKVUHEGDANAAPSXJWXJTTZEVOZGIFNWMBOHKPTSEHMHWARLOIVRYLARSLOLUSXZWGKFDYTWDLLKPIZGKCPVVHBGZPISHSROVQMFQKNUGJZ");

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
    msg.setTimeStamp(0.09883864154217192);
    msg.setSource(51367U);
    msg.setSourceEntity(199U);
    msg.setDestination(63735U);
    msg.setDestinationEntity(66U);
    msg.control_src = 64980U;
    msg.control_ent = 47U;
    msg.timeout = 0.6928241822437546;
    msg.loiter_radius = 0.6824646985906038;
    msg.altitude_interval = 0.3547618723667595;

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
    msg.setTimeStamp(0.13024622413404752);
    msg.setSource(13225U);
    msg.setSourceEntity(227U);
    msg.setDestination(30034U);
    msg.setDestinationEntity(168U);
    msg.control_src = 21250U;
    msg.control_ent = 1U;
    msg.timeout = 0.5219643762063477;
    msg.loiter_radius = 0.6390902895027442;
    msg.altitude_interval = 0.4466092168398714;

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
    msg.setTimeStamp(0.738278897530312);
    msg.setSource(20273U);
    msg.setSourceEntity(166U);
    msg.setDestination(37509U);
    msg.setDestinationEntity(0U);
    msg.control_src = 24280U;
    msg.control_ent = 106U;
    msg.timeout = 0.06913636597088146;
    msg.loiter_radius = 0.6755882540051681;
    msg.altitude_interval = 0.994032180535993;

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
    msg.setTimeStamp(0.47263892346642344);
    msg.setSource(15216U);
    msg.setSourceEntity(180U);
    msg.setDestination(10139U);
    msg.setDestinationEntity(229U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.42764982933714857;
    tmp_msg_0.speed_units = 215U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8857557054441186;
    tmp_msg_1.z_units = 77U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4812367862222703;
    msg.lon = 0.9683811931013497;
    msg.radius = 0.6898353092400717;

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
    msg.setTimeStamp(0.16082733751250133);
    msg.setSource(50181U);
    msg.setSourceEntity(4U);
    msg.setDestination(58434U);
    msg.setDestinationEntity(49U);
    msg.flags = 216U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8390968708994748;
    tmp_msg_0.speed_units = 132U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3337001958889886;
    tmp_msg_1.z_units = 87U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.16795621448536868;
    msg.lon = 0.45969064453229525;
    msg.radius = 0.985302768065568;

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
    msg.setTimeStamp(0.010367386877355833);
    msg.setSource(30096U);
    msg.setSourceEntity(86U);
    msg.setDestination(47011U);
    msg.setDestinationEntity(58U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7776372954858051;
    tmp_msg_0.speed_units = 14U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6058796146832706;
    tmp_msg_1.z_units = 163U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7117765206690677;
    msg.lon = 0.14007749031473649;
    msg.radius = 0.632976423936632;

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
    msg.setTimeStamp(0.37271940969099593);
    msg.setSource(4264U);
    msg.setSourceEntity(170U);
    msg.setDestination(28321U);
    msg.setDestinationEntity(150U);
    msg.control_src = 27829U;
    msg.control_ent = 138U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 179U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2738876286842218;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6789539769852403;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5941248064887107;
    tmp_msg_0.lon = 0.16882362387469807;
    tmp_msg_0.radius = 0.18671307262493064;
    msg.reference.set(tmp_msg_0);
    msg.state = 226U;
    msg.proximity = 251U;

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
    msg.setTimeStamp(0.8415536340447649);
    msg.setSource(52695U);
    msg.setSourceEntity(2U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(106U);
    msg.control_src = 49594U;
    msg.control_ent = 112U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 251U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7228816541412973;
    tmp_tmp_msg_0_0.speed_units = 29U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3690152316023445;
    tmp_tmp_msg_0_1.z_units = 60U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7377713516521511;
    tmp_msg_0.lon = 0.006666640154513348;
    tmp_msg_0.radius = 0.748226604041442;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 68U;

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
    msg.setTimeStamp(0.5835719579260451);
    msg.setSource(32934U);
    msg.setSourceEntity(106U);
    msg.setDestination(52615U);
    msg.setDestinationEntity(124U);
    msg.control_src = 46162U;
    msg.control_ent = 50U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 30U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.06625967950214573;
    tmp_tmp_msg_0_0.speed_units = 66U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7605803383367724;
    tmp_tmp_msg_0_1.z_units = 98U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.21702881488712034;
    tmp_msg_0.lon = 0.4774086132450056;
    tmp_msg_0.radius = 0.5170424973934409;
    msg.reference.set(tmp_msg_0);
    msg.state = 202U;
    msg.proximity = 183U;

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
    msg.setTimeStamp(0.35142172753283585);
    msg.setSource(21285U);
    msg.setSourceEntity(131U);
    msg.setDestination(57678U);
    msg.setDestinationEntity(125U);
    msg.ax_cmd = 0.3816666034007381;
    msg.ay_cmd = 0.21550912334400474;
    msg.az_cmd = 0.9048331470595147;
    msg.ax_des = 0.894294261299038;
    msg.ay_des = 0.58927514424268;
    msg.az_des = 0.9643624746947209;
    msg.virt_err_x = 0.08729425844271388;
    msg.virt_err_y = 0.42505847914154893;
    msg.virt_err_z = 0.701040232657447;
    msg.surf_fdbk_x = 0.6351864242869255;
    msg.surf_fdbk_y = 0.703443216448623;
    msg.surf_fdbk_z = 0.14542163967628952;
    msg.surf_unkn_x = 0.518306051879891;
    msg.surf_unkn_y = 0.9367415969275643;
    msg.surf_unkn_z = 0.16421888967017528;
    msg.ss_x = 0.18404932131239005;
    msg.ss_y = 0.04375756953366805;
    msg.ss_z = 0.5730267070341113;

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
    msg.setTimeStamp(0.7577682130840333);
    msg.setSource(37833U);
    msg.setSourceEntity(245U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(86U);
    msg.ax_cmd = 0.13914995284795528;
    msg.ay_cmd = 0.9610419325460923;
    msg.az_cmd = 0.2768321324057006;
    msg.ax_des = 0.7512565375641995;
    msg.ay_des = 0.08674545527842603;
    msg.az_des = 0.3505048967931287;
    msg.virt_err_x = 0.25853642754077066;
    msg.virt_err_y = 0.5037707704961986;
    msg.virt_err_z = 0.2965314805109617;
    msg.surf_fdbk_x = 0.19269628753462387;
    msg.surf_fdbk_y = 0.8036596138370458;
    msg.surf_fdbk_z = 0.26459735135993023;
    msg.surf_unkn_x = 0.34435416062260027;
    msg.surf_unkn_y = 0.3784526962692829;
    msg.surf_unkn_z = 0.9546927707320361;
    msg.ss_x = 0.5336894638910598;
    msg.ss_y = 0.752424732440641;
    msg.ss_z = 0.6026030182946299;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SBGPRBURVGJHTJQGUNTXGTMBPPFJCBDNEQCMBULEHWTIJOQYTXSTQKZBPGYZENCYRMOJDMDOEKPKASYWSDVDRBJWIIUYUQQNIKSPCNFSODIYDYNVLWQUKAUZUMSWXETZKMAVQGFRNWHTMFORRIFUVHYGIYTZLAXBPPMPXXVJHWLJILFVCMZXCVLUFQNKRASZHKQRCDLACBXGTVACBH");
    tmp_msg_0.dist = 0.7130703361712702;
    tmp_msg_0.err = 0.773817179448457;
    tmp_msg_0.ctrl_imp = 0.6606946752002281;
    tmp_msg_0.rel_dir_x = 0.7148167260331693;
    tmp_msg_0.rel_dir_y = 0.09881493797339436;
    tmp_msg_0.rel_dir_z = 0.34622702581296216;
    tmp_msg_0.err_x = 0.018811741623586786;
    tmp_msg_0.err_y = 0.5795228747701082;
    tmp_msg_0.err_z = 0.01122627710118207;
    tmp_msg_0.rf_err_x = 0.2293010973266857;
    tmp_msg_0.rf_err_y = 0.1614661850784368;
    tmp_msg_0.rf_err_z = 0.9394512455917118;
    tmp_msg_0.rf_err_vx = 0.9618344093143614;
    tmp_msg_0.rf_err_vy = 0.12268347023024206;
    tmp_msg_0.rf_err_vz = 0.8436134029830723;
    tmp_msg_0.ss_x = 0.5692797693847661;
    tmp_msg_0.ss_y = 0.0024170733562672853;
    tmp_msg_0.ss_z = 0.10240165340598595;
    tmp_msg_0.virt_err_x = 0.9733940362672733;
    tmp_msg_0.virt_err_y = 0.39803859732566127;
    tmp_msg_0.virt_err_z = 0.43742861166367464;
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
    msg.setTimeStamp(0.3203407549747399);
    msg.setSource(20723U);
    msg.setSourceEntity(95U);
    msg.setDestination(20752U);
    msg.setDestinationEntity(11U);
    msg.ax_cmd = 0.08422477457247346;
    msg.ay_cmd = 0.5854993320051061;
    msg.az_cmd = 0.0676882186381792;
    msg.ax_des = 0.01687809585397737;
    msg.ay_des = 0.6145951758850551;
    msg.az_des = 0.5552039352818678;
    msg.virt_err_x = 0.1679099296311931;
    msg.virt_err_y = 0.4111396017053026;
    msg.virt_err_z = 0.9353236900344266;
    msg.surf_fdbk_x = 0.6224194674441031;
    msg.surf_fdbk_y = 0.1525444313508778;
    msg.surf_fdbk_z = 0.6194062784893078;
    msg.surf_unkn_x = 0.9610704690974283;
    msg.surf_unkn_y = 0.23015220033355865;
    msg.surf_unkn_z = 0.4861855535732207;
    msg.ss_x = 0.943619965494684;
    msg.ss_y = 0.4375883354525273;
    msg.ss_z = 0.20556038998384196;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TISQISDYDFJSIRZODHYHOPMZVLIBNRXIOGVAAYFGKWRDFNQHCBMXLVVCACEBOHCBPBXPJZXEROJSOXAJGYPNKLRUXIDWTZLAMNPMYAXGDNVQKBGJIHWNKWRKHJWELNWKSFYGEHUTLOGUTVQHMFFRAAUATEOMZSMZLOUDRGHTNFCKRCCXWIVTUOGPQPUUZDXQYKMBILDMKUS");
    tmp_msg_0.dist = 0.2157417592803954;
    tmp_msg_0.err = 0.2724654278393358;
    tmp_msg_0.ctrl_imp = 0.7003646717606229;
    tmp_msg_0.rel_dir_x = 0.005445203068191962;
    tmp_msg_0.rel_dir_y = 0.576446626473246;
    tmp_msg_0.rel_dir_z = 0.06549839430021931;
    tmp_msg_0.err_x = 0.9311074109726516;
    tmp_msg_0.err_y = 0.26263044708357397;
    tmp_msg_0.err_z = 0.08650857082048591;
    tmp_msg_0.rf_err_x = 0.34125951071341676;
    tmp_msg_0.rf_err_y = 0.955353068927397;
    tmp_msg_0.rf_err_z = 0.5325355704871629;
    tmp_msg_0.rf_err_vx = 0.6909441625104735;
    tmp_msg_0.rf_err_vy = 0.5323329368305337;
    tmp_msg_0.rf_err_vz = 0.308486498044947;
    tmp_msg_0.ss_x = 0.8878367624779078;
    tmp_msg_0.ss_y = 0.5563613681404033;
    tmp_msg_0.ss_z = 0.6835705609927772;
    tmp_msg_0.virt_err_x = 0.214855144376756;
    tmp_msg_0.virt_err_y = 0.7580553238587118;
    tmp_msg_0.virt_err_z = 0.8266939436407922;
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
    msg.setTimeStamp(0.19132000626722423);
    msg.setSource(53498U);
    msg.setSourceEntity(83U);
    msg.setDestination(14534U);
    msg.setDestinationEntity(21U);
    msg.s_id.assign("JMFTDWXCTPGFVORRXLCYZCHSYMWDNFD");
    msg.dist = 0.7608134410294494;
    msg.err = 0.18164341617839375;
    msg.ctrl_imp = 0.8970001366873775;
    msg.rel_dir_x = 0.20092841986454235;
    msg.rel_dir_y = 0.5877913732153568;
    msg.rel_dir_z = 0.8582725110749984;
    msg.err_x = 0.3101710904145315;
    msg.err_y = 0.026250743133091725;
    msg.err_z = 0.14444769160223414;
    msg.rf_err_x = 0.7340066556676208;
    msg.rf_err_y = 0.4971074081650616;
    msg.rf_err_z = 0.2975853077133034;
    msg.rf_err_vx = 0.6249845502435154;
    msg.rf_err_vy = 0.9130788038948088;
    msg.rf_err_vz = 0.9983554103821441;
    msg.ss_x = 0.003557642929124638;
    msg.ss_y = 0.7183390665590177;
    msg.ss_z = 0.46144340976195186;
    msg.virt_err_x = 0.07653874486168377;
    msg.virt_err_y = 0.4847570738834226;
    msg.virt_err_z = 0.2658976999604208;

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
    msg.setTimeStamp(0.7164965999235545);
    msg.setSource(45724U);
    msg.setSourceEntity(134U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(190U);
    msg.s_id.assign("EVNULHLCXKOLWSLMFNIXSBUWAZEDOJQJCN");
    msg.dist = 0.12989310346571847;
    msg.err = 0.8702937863043715;
    msg.ctrl_imp = 0.9137612271951605;
    msg.rel_dir_x = 0.278635478100108;
    msg.rel_dir_y = 0.33274323743703405;
    msg.rel_dir_z = 0.9404253657043996;
    msg.err_x = 0.4658102440359212;
    msg.err_y = 0.30561276063121023;
    msg.err_z = 0.7830299888491397;
    msg.rf_err_x = 0.4676270345646557;
    msg.rf_err_y = 0.8622898374634856;
    msg.rf_err_z = 0.9888238186327396;
    msg.rf_err_vx = 0.42534421185393245;
    msg.rf_err_vy = 0.49016810314554005;
    msg.rf_err_vz = 0.005987858738713547;
    msg.ss_x = 0.5805634364837842;
    msg.ss_y = 0.5888889060683412;
    msg.ss_z = 0.16395542895619408;
    msg.virt_err_x = 0.09927193905390919;
    msg.virt_err_y = 0.6036440900351039;
    msg.virt_err_z = 0.5389398548597678;

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
    msg.setTimeStamp(0.6928043402200424);
    msg.setSource(35612U);
    msg.setSourceEntity(15U);
    msg.setDestination(28093U);
    msg.setDestinationEntity(166U);
    msg.s_id.assign("YNOUGUSCRFVLSMRAPOBMEKCIVNWFCTVTRNAIHCTLQZJQEAIODOSCCUMJWLSAMCBWSXNZFJXPKKKJRVCEHZRJDYDX");
    msg.dist = 0.9703585201458058;
    msg.err = 0.10283646655980827;
    msg.ctrl_imp = 0.9775757073306072;
    msg.rel_dir_x = 0.17747730436196663;
    msg.rel_dir_y = 0.19746503781261826;
    msg.rel_dir_z = 0.7869988236447509;
    msg.err_x = 0.43506446253749187;
    msg.err_y = 0.09663663510771614;
    msg.err_z = 0.2992165414019411;
    msg.rf_err_x = 0.03009424965204255;
    msg.rf_err_y = 0.432845711402443;
    msg.rf_err_z = 0.9784714574022849;
    msg.rf_err_vx = 0.26088625844573465;
    msg.rf_err_vy = 0.10435244571286284;
    msg.rf_err_vz = 0.5659360995679744;
    msg.ss_x = 0.01110880198769304;
    msg.ss_y = 0.34443036054819387;
    msg.ss_z = 0.7155953896813734;
    msg.virt_err_x = 0.7188255388108332;
    msg.virt_err_y = 0.3230845807320103;
    msg.virt_err_z = 0.15608092791086214;

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
    msg.setTimeStamp(0.6615587113850435);
    msg.setSource(38868U);
    msg.setSourceEntity(86U);
    msg.setDestination(10915U);
    msg.setDestinationEntity(105U);
    msg.timeout = 29699U;
    msg.rpm = 0.8474296492173727;
    msg.direction = 241U;
    msg.custom.assign("GPTPBVGXAAYMQMQXWUKSLLNBDKAAHFIIDF");

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
    msg.setTimeStamp(0.5492814792437187);
    msg.setSource(55944U);
    msg.setSourceEntity(115U);
    msg.setDestination(40017U);
    msg.setDestinationEntity(191U);
    msg.timeout = 26270U;
    msg.rpm = 0.312701491359074;
    msg.direction = 198U;
    msg.custom.assign("JOMDNPHXGDLNHXJQMPXXNPNETJGTGIUKAMLQZPGGNEKNMRKRQSQFHJZNWTVAABYKUDLHKJBBAVUCZSVVSRYYSBYHWCTJLEEPUQIIFZADXUZZIXTOOGCTQZACQNKRUPEXUWSKVZPAWOESTHWTRLMAIZTDYSOKHHEBBSKUHDWCFOLQRYQBJFLFOGFSOJLIODEXJPCFLPACJEUBIBDIQBYRVDGSMVACFVXTRYNRWCKCRGFDLEPWMOHYNWIWVF");

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
    msg.setTimeStamp(0.24105526605378857);
    msg.setSource(49707U);
    msg.setSourceEntity(31U);
    msg.setDestination(45364U);
    msg.setDestinationEntity(7U);
    msg.timeout = 57555U;
    msg.rpm = 0.8568868892434327;
    msg.direction = 104U;
    msg.custom.assign("NREGVHCFPUZGXAFPSLEKBZPTCCRCXTDUSMUGTSTDMNZBWURYFBIJASUNTLPEZNSXDGEGJXABEXSMNYQHISJYKBMXNCWFJZQWWGQKTXCXDZVJNGUYPVPWHKQIYILVEKMJIR");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.18510305708562258);
    msg.setSource(30560U);
    msg.setSourceEntity(181U);
    msg.setDestination(21818U);
    msg.setDestinationEntity(90U);
    msg.op_mode = 118U;
    msg.error_count = 101U;
    msg.error_ents.assign("IQNJYAEAHGLIZUOQZDKZRNJFOHBZMYKVXDQXMRQYPKLIYNEAOSDGLELTZGOFUHSPGDKCJAMFQVXKDIWQOBMTPVRIUGPSRGMNHRWOSXQSWMPHFAICBTQIFOYCJSSHJUUEVFXTXWVPUEZLQDEXBFTMYBMENHWPU");
    msg.maneuver_type = 17699U;
    msg.maneuver_stime = 0.8177716105151471;
    msg.maneuver_eta = 34258U;
    msg.control_loops = 1102607526U;
    msg.flags = 125U;
    msg.last_error.assign("TSDDGXLOMGEFCROVPWKMMABYKYXOQGJTIYHJPASSPMVVJLZZXUZKJGUPINWNZVGEUBCQSJUYNOHQFEIBOCIEPVBCLTWALCTTQXG");
    msg.last_error_time = 0.43447823373081096;

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
    msg.setTimeStamp(0.3782486420732134);
    msg.setSource(17916U);
    msg.setSourceEntity(241U);
    msg.setDestination(21515U);
    msg.setDestinationEntity(105U);
    msg.op_mode = 64U;
    msg.error_count = 103U;
    msg.error_ents.assign("OAQAQESPKOPRRQGPDAKFZOQYIDMLPDIERFQKGKFLVIDHITLPOVLGOEOWMYCHWXWEZARNZERVRUWGZZFXWDRNK");
    msg.maneuver_type = 30931U;
    msg.maneuver_stime = 0.3504817848931304;
    msg.maneuver_eta = 35066U;
    msg.control_loops = 3554728064U;
    msg.flags = 173U;
    msg.last_error.assign("HFLMQFJMBWADEWIZYXGNEGGNLFZWMVBZONQBDXFPWGRYUOCKYBGAOHEDMKLXYXDXHKCOXFSRQQBUPWUKPESDNPJFQEDYKPHXBZZNJOVIRWMUSNVHMWTCMPMTIDKIMIDTEOZKOLTCKZQBMBCT");
    msg.last_error_time = 0.1414944670384065;

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
    msg.setTimeStamp(0.13499566979750377);
    msg.setSource(41768U);
    msg.setSourceEntity(42U);
    msg.setDestination(58078U);
    msg.setDestinationEntity(23U);
    msg.op_mode = 82U;
    msg.error_count = 62U;
    msg.error_ents.assign("UFKFFSWNABGXXQNIOTRHZYPFSQVHZSURHVSBGTPTPIYELKEMXWBDKGAMPACOVJAPCQRMJFLLJWETUWKUONVRHYTJYZJBPNIDHZJYUJVBCNPPTXLJAONHOCFLSDDGOWMFRQZRSBAXEDHMZCHMOFDLKFEDDCSUMQECUVKERPBCGWNLUMBGUKVDRZOBLOGM");
    msg.maneuver_type = 33419U;
    msg.maneuver_stime = 0.3248644857346379;
    msg.maneuver_eta = 716U;
    msg.control_loops = 726919974U;
    msg.flags = 23U;
    msg.last_error.assign("SQUMHPECKDNJBTKEYPNPVMGSOHYRDKADLLDTXMFJFRLRJQZFLYVBXACXNFNTAQUFWIIBDCPQJBROIHZJKYSNHGTUZSBLIIZSTEQWOKZVTEZEUVOXNFHLAGIGOJOKPAGVEHEYVSRTMIWBXRLZQYOAOJQHWIMAGSQYXGRTBPMMRVCDEDQOIYFKPFRATUPBFIZDGWCBUMHYAPWGNKLKTHRXQBH");
    msg.last_error_time = 0.3762374107596298;

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
    msg.setTimeStamp(0.36867518287728895);
    msg.setSource(4567U);
    msg.setSourceEntity(236U);
    msg.setDestination(48132U);
    msg.setDestinationEntity(202U);
    msg.type = 10U;
    msg.request_id = 53835U;
    msg.command = 13U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6853875153138036;
    tmp_msg_0.lon = 0.45885800726930603;
    tmp_msg_0.z = 0.16779010880134126;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.01830130989131784;
    tmp_msg_0.speed_units = 230U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8586451084616568;
    tmp_tmp_msg_0_0.y = 0.8216857927462217;
    tmp_tmp_msg_0_0.z = 0.8767919308520163;
    tmp_tmp_msg_0_0.t = 0.9707379480565244;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.569390278483627;
    tmp_msg_0.custom.assign("AANDLFZPXPDRADAABSIUDGWDEJW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31515U;
    msg.info.assign("SZEQGSHJPDJOBAAFXYEOTXCCNDRITZJTJMWXJUAOGJMDSOZDSIWOXPCGKLLCVLFTOTUB");

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
    msg.setTimeStamp(0.737511273636366);
    msg.setSource(29408U);
    msg.setSourceEntity(77U);
    msg.setDestination(22838U);
    msg.setDestinationEntity(140U);
    msg.type = 226U;
    msg.request_id = 16645U;
    msg.command = 207U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 57604U;
    tmp_msg_0.rpm = 0.6563923445903281;
    tmp_msg_0.direction = 177U;
    tmp_msg_0.custom.assign("DAZYCYRUWJNXBKJAIMBIYHMIUSFWTZPJCIASDYSXKFHDVDTHRUKQSGWHFIYLFCJZFBOGDBPEGZLMPXBPNKSVRZUSDFBVYFQLZN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5470U;
    msg.info.assign("LPOUZOKZZXYOTBMZUEXFISESGUWVHCPMCGHPGDOJRBERNGBGSWKTJIPIJXGRSFDRGAUBAKOOMOQEPUQUIDTUYVCLONCNGFPCSMCDFAAIFJXHPUSULMQAXEQYBBEJXDACTHVQJZVJKILQLEZSZJEHBURQMRTFJZIOXKIDWATLQBRZHYHNNBPDTCQYFXLMKRGZWTEDAITSXOLVPWWYPQILCNDLVANJKHRVKFVWTBWYGNKFNHVMSVWAYYMDWM");

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
    msg.setTimeStamp(0.7877616296869439);
    msg.setSource(59267U);
    msg.setSourceEntity(215U);
    msg.setDestination(14557U);
    msg.setDestinationEntity(38U);
    msg.type = 48U;
    msg.request_id = 42529U;
    msg.command = 30U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MPBBDSVNZBTZMOFFDVAMYJJKFNLIFPINTXNKOEAUCVKPAXSYEMILBWHLBINTNJAQQOQHBURGGAHTNFUXUWYAXYDCLPFJPRGDMRLEOGMKBGTPTEAKIDFJYDTQAKXXSTTJVUWJHUYIORUZGUQSPLFKBYQFIEOQCXLVDQGCZHUEBZSQSNRCJGILDTKJCVOLEHRDEEDYIWHPKIHCXAOSNPOWLZMHS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24598U;
    msg.info.assign("VMIXZJHIHOSYDWCTDFTFRKQTP");

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
    msg.setTimeStamp(0.3517011274647084);
    msg.setSource(61284U);
    msg.setSourceEntity(200U);
    msg.setDestination(29030U);
    msg.setDestinationEntity(171U);
    msg.command = 41U;
    msg.entities.assign("AORLEAUANIOJXBTGXASZVKBQWQQDBIJTFNZRDIGTCUCCNLIMSWWUTVETKMAJYYRSBRAZDCAVGUNGNHJXHSGKOXEMQJKJDWCXOXTJAOXVZBKKSIRZNCVOOVCQLRBYHEFPPQMLZYTRYUTHT");

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
    msg.setTimeStamp(0.9262016458644363);
    msg.setSource(35641U);
    msg.setSourceEntity(229U);
    msg.setDestination(57529U);
    msg.setDestinationEntity(53U);
    msg.command = 131U;
    msg.entities.assign("GQOBVHLIZDCVSXNNPVAUPQKIFQVUZWLTGCCXJQLETUVGAZNJGODERQDSAICYFEWCITZYCNADVWMFSORCOX");

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
    msg.setTimeStamp(0.15856678234133137);
    msg.setSource(62968U);
    msg.setSourceEntity(14U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(27U);
    msg.command = 109U;
    msg.entities.assign("DGJHRGASMWANJYNEUMFPVVUWKYYZQFHIQURNXTCMXBAOTWECPWCMDLQQDOVZLOEDKHXSAMXFIBFGDXRORQUCVPSHCWWATPFOSLQZYHHSLVUTABNRXCUXVQPPXBFJAFDFMJYDTRFIZSHMJZPOQRBAWYRPBIVCOIUJPNZQJGNGTZTLDKUMBAUIENVICEHOGTXGKZRGLEHYKIYSJGLQWSYXKKZIGKHWKTEMCED");

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
    msg.setTimeStamp(0.3152527113705522);
    msg.setSource(26729U);
    msg.setSourceEntity(144U);
    msg.setDestination(32607U);
    msg.setDestinationEntity(164U);
    msg.mcount = 67U;
    msg.mnames.assign("PIDULYNQDQPGGXXPVPAVMSMWWQEYSBWROHCJBKJCNNFHSBLYRHFXMPHUHISBSECILNALITJMRWJSRNLQFUXEOBKZWZDHPFSZKRZIWQQDLAXRYFIISDJVTKHNMQCOHQYGT");
    msg.ecount = 184U;
    msg.enames.assign("MZFRKAGDMWMPULWFYHDEGHQXNVWEBGMHFYRMLPGPUXHRDINCTXJMRWOBEFBKPOSSETPKANKAUSYJYFDOBEVMBLNVABGCYEBQZOGJVRWDDIJLSDITVKLHOXERPEPFQGLVJHQSQZLHKAT");
    msg.ccount = 190U;
    msg.cnames.assign("HWYGFFEALDRDLUCKWHJLDZRVUFVIWYRLRSRJVGMNXLBBEEGJVSKOCJJPPPWJATYKIQPUEHQTALWMFXZBQMYKDODZRYFXCNMUIDGQANZHCQASCCZZZSPEJTVIMRPOTWZHOHNWKXSVNHRLFPPNMIXLCEUAMGYTDEGNWTOBJERVOFLIKWHY");
    msg.last_error.assign("PWVQESINYLMBIYEDVMKVADSENYETHTXADUZASJCFHABJPHVQQSHBWWROZCVVKHLCQTPWXZWFLYBEVKRCXPGDHUHZEQWZLUFEWJTGXBAFEXFZRPKZRFNGJROQINWQOKJGASUIDOXKNGJCRMSONFGMAXLMGPUIODRKGHQYDCSWUMQUWRBDJBPIYBZXTYIHYMUTZPUSOABZEKFTCDLTTIOMEKYSPVJCOTLNMXYNGSQRFDAHLLV");
    msg.last_error_time = 0.2625261862691316;

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
    msg.setTimeStamp(0.49609555232433733);
    msg.setSource(15433U);
    msg.setSourceEntity(14U);
    msg.setDestination(19689U);
    msg.setDestinationEntity(111U);
    msg.mcount = 70U;
    msg.mnames.assign("GYQLMIXLTSLSJYFBZEKXDUCZSHYGAQGITMTQCRZVDJNLFCHODCCYXQSPJTFOHHKMIJJUUTMR");
    msg.ecount = 244U;
    msg.enames.assign("UIZJBBOVRDQCEKUVWVPIEPLUFUSXBXIAXQVCCZJXWCOQNAQUXMDWFMANDHVYTGTPCNADDXGCDRWOHYIRZYQMCMPGAFPQXTMXSLBELECVKBSHDYCSEKFHRTRTHGWAUKELJAZEYUELRNRNJTPJSHYCJGOHKGNOVQGJTLIJARPBZAZELMLPBHTNMZFRBXEJIQIWBJLFZOIUUFYZDW");
    msg.ccount = 53U;
    msg.cnames.assign("PIMWEBRHJPQFENSDHSKOJWBMSJZGZDDCTQYC");
    msg.last_error.assign("GOLUBQRBLETJJQUXNTUWVLCWWBNUVDCQAKGALOQVQCZHVGTSUWLLYXMXDABFXFDOMXMQIRJKHGGSXAQWIMHSDFNKGRIAQESYEDUWEVSKXYRDACAUEJZJTZESBPTMLHJIVFRIUUFNOZHOVFBY");
    msg.last_error_time = 0.28241169599466087;

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
    msg.setTimeStamp(0.33839970835387656);
    msg.setSource(797U);
    msg.setSourceEntity(70U);
    msg.setDestination(31980U);
    msg.setDestinationEntity(97U);
    msg.mcount = 248U;
    msg.mnames.assign("QCAOYQXJXAUVFBLQHAMSANBPPVCKNEHSLWZANKZDLCQLLGFMZUONMYJXGBRGZMAWEVWKHQOREIXVPDSCFCFTWUHMXYTUYUZSYFWROBLUVIRPFLZICTVRFVHLOAQAJQGUCHIEVTIRDNTDKHNZEKQBQTTENPXOYYGXDRPGWHBQFSMCPIPSUYWNLZWFMXXKSAUBKIEWIOHAKOEJUMDTDSEKPYWBZNLDJOCIDB");
    msg.ecount = 100U;
    msg.enames.assign("BVJKZDODWQFLCWMLNYHWIEOTANCBBDKSBTCSNREXPMFMGGZFLIXYPPMIMULNBXD");
    msg.ccount = 115U;
    msg.cnames.assign("WTSBCYNUEHMZULOEMVRQVIIZTVPFVXWPNHSNOOEMKVXAQABDAEZYNHXJIXQPSLWNRHFXYBJXJDAISSWODZLFRYZFWNMFDUPSAMRFTLPOKAURMNNGKPJGZTHBLXNXRVMGMHLOD");
    msg.last_error.assign("QKIPJUKCFUFDSNGJSBTJZLOZGNRKHMJUVUQ");
    msg.last_error_time = 0.0715335149353471;

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
    msg.setTimeStamp(0.6553290387557485);
    msg.setSource(38173U);
    msg.setSourceEntity(12U);
    msg.setDestination(9509U);
    msg.setDestinationEntity(181U);
    msg.mask = 109U;
    msg.max_depth = 0.17129170909720381;
    msg.min_altitude = 0.2521698461674604;
    msg.max_altitude = 0.11079794331147474;
    msg.min_speed = 0.803794567591498;
    msg.max_speed = 0.4452286966475065;
    msg.max_vrate = 0.3139985026413865;
    msg.lat = 0.04399717167465855;
    msg.lon = 0.622516929383255;
    msg.orientation = 0.26872907792040623;
    msg.width = 0.1393547473894815;
    msg.length = 0.9803395048120546;

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
    msg.setTimeStamp(0.21599846244252985);
    msg.setSource(10659U);
    msg.setSourceEntity(59U);
    msg.setDestination(25750U);
    msg.setDestinationEntity(125U);
    msg.mask = 186U;
    msg.max_depth = 0.714169369292575;
    msg.min_altitude = 0.31507089196615656;
    msg.max_altitude = 0.4995505728306774;
    msg.min_speed = 0.1593524658235479;
    msg.max_speed = 0.4920168732395027;
    msg.max_vrate = 0.1793520959219007;
    msg.lat = 0.09488451545040366;
    msg.lon = 0.6772594737869798;
    msg.orientation = 0.29287520102733466;
    msg.width = 0.35946315966062814;
    msg.length = 0.7314078709435361;

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
    msg.setTimeStamp(0.7685729737851232);
    msg.setSource(57804U);
    msg.setSourceEntity(1U);
    msg.setDestination(33605U);
    msg.setDestinationEntity(247U);
    msg.mask = 16U;
    msg.max_depth = 0.7088857616387948;
    msg.min_altitude = 0.27089184582489023;
    msg.max_altitude = 0.08349289425718553;
    msg.min_speed = 0.543077319555457;
    msg.max_speed = 0.26584362798386607;
    msg.max_vrate = 0.2158714805472084;
    msg.lat = 0.6439021441125014;
    msg.lon = 0.5432792793186332;
    msg.orientation = 0.10117565510109994;
    msg.width = 0.3298221654961241;
    msg.length = 0.8147682747079947;

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
    msg.setTimeStamp(0.9838419438191867);
    msg.setSource(56411U);
    msg.setSourceEntity(131U);
    msg.setDestination(53045U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.9118994905229051);
    msg.setSource(60585U);
    msg.setSourceEntity(108U);
    msg.setDestination(9548U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.7253719976250684);
    msg.setSource(42862U);
    msg.setSourceEntity(165U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.8929257183243704);
    msg.setSource(50975U);
    msg.setSourceEntity(127U);
    msg.setDestination(17704U);
    msg.setDestinationEntity(168U);
    msg.duration = 20594U;

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
    msg.setTimeStamp(0.07214232471026105);
    msg.setSource(17245U);
    msg.setSourceEntity(113U);
    msg.setDestination(20909U);
    msg.setDestinationEntity(191U);
    msg.duration = 64343U;

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
    msg.setTimeStamp(0.6481870914040461);
    msg.setSource(36587U);
    msg.setSourceEntity(87U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(214U);
    msg.duration = 57506U;

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
    msg.setTimeStamp(0.8462701143017749);
    msg.setSource(16065U);
    msg.setSourceEntity(29U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(223U);
    msg.enable = 242U;
    msg.mask = 3092711535U;
    msg.scope_ref = 4077048170U;

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
    msg.setTimeStamp(0.23531940455310585);
    msg.setSource(23758U);
    msg.setSourceEntity(15U);
    msg.setDestination(18234U);
    msg.setDestinationEntity(157U);
    msg.enable = 132U;
    msg.mask = 3869145799U;
    msg.scope_ref = 2410789494U;

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
    msg.setTimeStamp(0.8602979739010977);
    msg.setSource(62401U);
    msg.setSourceEntity(194U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(52U);
    msg.enable = 9U;
    msg.mask = 405032487U;
    msg.scope_ref = 3845526822U;

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
    msg.setTimeStamp(0.21875122460262786);
    msg.setSource(28709U);
    msg.setSourceEntity(147U);
    msg.setDestination(34102U);
    msg.setDestinationEntity(45U);
    msg.medium = 10U;

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
    msg.setTimeStamp(0.3159820726302113);
    msg.setSource(10003U);
    msg.setSourceEntity(33U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(34U);
    msg.medium = 170U;

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
    msg.setTimeStamp(0.7479917174349865);
    msg.setSource(60545U);
    msg.setSourceEntity(73U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(36U);
    msg.medium = 242U;

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
    msg.setTimeStamp(0.9453045632591102);
    msg.setSource(53100U);
    msg.setSourceEntity(62U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(27U);
    msg.value = 0.34739365896593544;
    msg.type = 3U;

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
    msg.setTimeStamp(0.008028565905247254);
    msg.setSource(1957U);
    msg.setSourceEntity(129U);
    msg.setDestination(63788U);
    msg.setDestinationEntity(69U);
    msg.value = 0.08154639004560105;
    msg.type = 214U;

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
    msg.setTimeStamp(0.35116745347085176);
    msg.setSource(16857U);
    msg.setSourceEntity(127U);
    msg.setDestination(17883U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8254709256069801;
    msg.type = 98U;

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
    msg.setTimeStamp(0.6544805506184161);
    msg.setSource(4362U);
    msg.setSourceEntity(68U);
    msg.setDestination(24169U);
    msg.setDestinationEntity(104U);
    msg.possimerr = 0.9923993427189739;
    msg.converg = 0.6620045674025589;
    msg.turbulence = 0.4011535136029323;
    msg.possimmon = 92U;
    msg.commmon = 30U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.4804271628872334);
    msg.setSource(37000U);
    msg.setSourceEntity(80U);
    msg.setDestination(43919U);
    msg.setDestinationEntity(234U);
    msg.possimerr = 0.8661812765583794;
    msg.converg = 0.627200074710997;
    msg.turbulence = 0.6947882246574202;
    msg.possimmon = 13U;
    msg.commmon = 50U;
    msg.convergmon = 31U;

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
    msg.setTimeStamp(0.7684616153914006);
    msg.setSource(57071U);
    msg.setSourceEntity(66U);
    msg.setDestination(17236U);
    msg.setDestinationEntity(99U);
    msg.possimerr = 0.9384270720180613;
    msg.converg = 0.38379334699150314;
    msg.turbulence = 0.21034155884156103;
    msg.possimmon = 242U;
    msg.commmon = 129U;
    msg.convergmon = 252U;

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
    msg.setTimeStamp(0.5111828729475786);
    msg.setSource(44321U);
    msg.setSourceEntity(171U);
    msg.setDestination(53042U);
    msg.setDestinationEntity(97U);
    msg.autonomy = 118U;
    msg.mode.assign("DSSFRLZTDUYQDTZGALEOAZSIMTBLWHLYOCYXCNBFUGSXGOSAALXWNPCHCVHIORMPUMXWUWJHARIQNHUZWJMODDONZGKQWJRBTFJYRHYYJTHCKTFRIPUGMVUOWSCEGDIWPCXPLGEEVNKMFERAGBJAFEQMDYKIBWWNGYBRVGVBJPPYZKQEXILZKDTFAFTJEQJUHSIACTCSX");

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
    msg.setTimeStamp(0.29237743056927923);
    msg.setSource(65296U);
    msg.setSourceEntity(168U);
    msg.setDestination(33199U);
    msg.setDestinationEntity(126U);
    msg.autonomy = 231U;
    msg.mode.assign("WKYEMGSHXLTMOWRJZDFEYAGIFIHFXWVYGQMGPSKRUDHFLXMIBBUTMJOWVBLAQVJLAZYQTZSYYBTMKWXFOKLP");

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
    msg.setTimeStamp(0.9654895296601604);
    msg.setSource(28127U);
    msg.setSourceEntity(167U);
    msg.setDestination(144U);
    msg.setDestinationEntity(246U);
    msg.autonomy = 221U;
    msg.mode.assign("CGZMUHFGOPZVBLVWICV");

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
    msg.setTimeStamp(0.33997598218318636);
    msg.setSource(44003U);
    msg.setSourceEntity(155U);
    msg.setDestination(24821U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.20579827888338365);
    msg.setSource(23044U);
    msg.setSourceEntity(111U);
    msg.setDestination(16510U);
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
    msg.setTimeStamp(0.12917341896395673);
    msg.setSource(3529U);
    msg.setSourceEntity(80U);
    msg.setDestination(21780U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.5231638997853034);
    msg.setSource(56807U);
    msg.setSourceEntity(88U);
    msg.setDestination(1886U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("POONORVNBSWSGSNYGTTALBEPYRZVSZPOMWJJLCMLUQSGLJLFFWLTBFPGBDTJIWKMHFHQCQVNRXSNZDJHEWSHEAHPIXAGVSVUQKTWMEXZQFJBHYRSZHBFJVXRIFTELNEGHBZUWEEKMAHDPPQBUMQUKXQLNRCYC");
    msg.description.assign("TJANIJCOCXOWBFWWODGRXKKNEWXWYGLYGTMABP");
    msg.vnamespace.assign("FEHBSABKCMDHEOKLVIYTPUSSGXQEENWOHRNPAMFTGOXTGPXZHAWQWHBQWDUERJVSKMFVCIXKVPMINMIODZQNRTYSBMJGVITLGQSNLUIIFDYWELZJFUAEXXDOJWYGRNEMYQTYT");
    msg.start_man_id.assign("UUFNEOJFULCTEQZDMUYPQPISNTCWFOEMODUYYLJXDIZMGWASKAHBQBRQBTHBJSSBANYEXLHDCZYMFMAAFFVZWLMTXIEVPKYYCIRSEZZUVFYGUKWBNYKRFWBHPEKJSILVLFMSGGZGTKTTIJHGNAKJSOKPWAMJOHDZTRZPUYOADCAJVCKNHSCGBXERODPCMJGQJIKGWRTBTDRDDRQLLNQZVXRWOWEWVLMBI");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("MUTYDCDPOJLNDDBFUAIQEVKRHBGKSVOXLIATAOZYBFCXVEJHRJTOASCQZQARMGYNBMEYLRYIFWNEYNJUVJCWDCHNZKVJXZMTGLTRZXVFMSOISOQXJGPGUKFCIJSKDEYHEQIPEUHBHDOUKQSHEIVHBWISQRVYUUNSFGLCPQRKKLBJCUAWYPFZCTQFWBLNRHENKXJAWDZMMWZVGCXZWEHSXIPTNTFTYXBALBP");
    tmp_msg_0.dest_man.assign("JUJSADUPMPLOPYRUFBHTQFMOSQEICJDYGVCQARNTDZNEQNFGXTILHVVOPEYLXVPJYPHKYNGMFVHALZPQKKYCFBHIKCVQJGJERRSMFREDNTLOIRCQXX");
    tmp_msg_0.conditions.assign("PVLJIJEEPCVORPFPJLYPSRQIRQZYFEKTDASJTOTZNVKKZCEUNWXPLOWXILWYOLGMHFKSLNHSXTDEIIBAHILGIFOGSSWHDMFMCQHAMQHYNVWXZGDFJYYCQAVNEKSUHDFTRAG");
    msg.transitions.push_back(tmp_msg_0);
    IMC::RemoteSensorInfo tmp_msg_1;
    tmp_msg_1.id.assign("WAWPTCEZUHHNTEQYIPFIRFGFCSAMQZKCBVEHXJNDUIJVPXYVMAHQKXUQRVMTHYGSBIVBMIKMWVYCLWFUQCLTVPBWUTRXTQCGWQHGFNAFIRYJJEWKHOCTUOGJPNYBDGDHBMTZOYXRVJKTXSMGZDSSUDALTOSFPBLFBROCOFDHBNRUWNILEGBKFPRZYIVPZGEJDCRLOXADMEMAMJZJXGSU");
    tmp_msg_1.sensor_class.assign("HDBHCGUAYEUGNISRIZDELJNYOBNDBQHONPGJGSDHIEXRAMYLHFFCKJJQFTTKTEGEDCISQTTXVEFNJUYIJQQWNXPAKXDFMLV");
    tmp_msg_1.lat = 0.8959227290308158;
    tmp_msg_1.lon = 0.7300141482727973;
    tmp_msg_1.alt = 0.5059931511237253;
    tmp_msg_1.heading = 0.36152332391836906;
    tmp_msg_1.data.assign("BLGMAPOEVJEZQHYQDCUQFVRHYSSGJDHNOSXEIHJQAGNMZICMHELWJLMXDJDIARZAKCNUKEKUUPSAVURBYEKCFUNJFXZIWYSDNGMYETFRKKGPWCBPPXNXVBLYQLYNVDDXMGWYSHAZRJFRFICMXOYUAALWHTNGNQCEWSHVOUTPJZTKQBIITFJOVPLQTSGJTOOMIKCDATIKOWXVQLGWLZWQCUAPZMUVHMIDFGFTHBBBRSZC");
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
    msg.setTimeStamp(0.3382828011174873);
    msg.setSource(16757U);
    msg.setSourceEntity(217U);
    msg.setDestination(22831U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("EEXCQHCHFPTEAKOPHKCYCBCNARFRZGKOBRQWCYSGIYJIMOKLTUYWMSFNKAEFSBXCYBRPNINWXVOPNJXBBOAWPEXJBUMDLVWEEMJWBOQHZVSKYAPT");
    msg.description.assign("KUGLJMGXCOXQKSDNBLOETTNIBUOVNPGMYCARWEGUZPNEKAXECUGPJFTOKJQMBHVWDWCPBHCUGAYKYTQSXVHWYAFGVZVPIQJMWIBXJFMLRNWYQRAEIXLRNPGVEKVALBKKRUBWRHQZYUFFFJIPMPMORSPLATBZWQPEDWCLIZCXFCEFIKODHIVZATDKYMECJFUGROLWHIRDZJEYJONHZQTMNTSVDZNSXUMDHHZL");
    msg.vnamespace.assign("JGCLLFYIUWJATZGROIYBCQFBUVBAAWIYNRSKXBDSYDIDFUCKEEMZVVFLPVPHZXEMKEORQYKLOUULDBEXMABONPSXVSYXKMKEIDSQRDHHSCRMRQDOQIZFZVUTQEUKYGNLIREGPQATIXXKWLQCBPAHEOWSXN");
    msg.start_man_id.assign("TKWEQIKNBCJISYKTZNPKHOGLIQSIONKTDJQSGIJSSWYXZTKFBUVRMNIGKZGPPFJFEWDLTPHZAYRBTUXFMXXYFERUOORZLMSPOIPNLOHLJFDZCHJVWRWDISNBZUIRYCJVCAFEQNZUVKOXKFAANDDEVBQBQJMYEFGUFMK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DARNFUXCPDKNGCBQTVSKFPUKHGLJHSKZZYTMWCDJNAEFPJWVPCWSRLARHZXGBVIOGH");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 14319U;
    tmp_tmp_msg_0_0.rpm = 0.00793642853787746;
    tmp_tmp_msg_0_0.direction = 203U;
    tmp_tmp_msg_0_0.custom.assign("QSLHZOFLCAFLHZJCABANJUINPARBHDJYQSBOUOSZEGFSVYMHVVGLNVOBDZOQXPZBLIJUYNBGWITWPYAGKINQTKEEAAWKKZUIRIVHKFGHRPXYTALOBMEIILNCIKFYQVVEEURPWSRVZLOKDDYSWFOLYRPCXNTWJKDQJMXXPDGC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ControlParcel tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.p = 0.1014824278640224;
    tmp_tmp_msg_0_1.i = 0.30714572327779344;
    tmp_tmp_msg_0_1.d = 0.17588751337084707;
    tmp_tmp_msg_0_1.a = 0.17253013818388907;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.2674230984718641;
    tmp_msg_1.x = 0.042191122785735446;
    tmp_msg_1.y = 0.03553418871822511;
    tmp_msg_1.z = 0.15610895058439267;
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
    msg.setTimeStamp(0.23261668248751732);
    msg.setSource(64477U);
    msg.setSourceEntity(138U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("XOTBUIKRIFQINIYKJQOUWRNEYXRRHWHARWGFPEDONUQEUAEWWWNBDWMVGENHSJLDJULDQCJSSFZTYGOOQFZTZGBPCKLNNBYKBKPTGEMUJHMGJEVPMXSMUPSQYIOFXFMHVFRAAAPAHHYFVCJCOPDBPLIVSDKNWVBBVIKHXQCTQRIZVATGTZEZPQXJFOMWLKVCBAUSGGTPYZKEOXODNDZSERXXC");
    msg.description.assign("GAEOELKHOIJZTRGJNUNNZIQBCFBFXEVUNXWMBMGITS");
    msg.vnamespace.assign("TQUPQDPYTAITNFHFUGAKVZCJAJZWYEFOXFBKWGCGNEZPSXAFYXGTMCWGNRVIAZGXPSQDROWPIEVETHSNRBROVZER");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FWUIJHIJQAZLNTDLGFGWGQPRNDKMFSKWFQMCFEFZJMYKYXOQRQJCMBCIYCOUNYHXJXSJRMHKASTKHSVDULOAYLNJKZCLMIRHDGZAQDWNRWZ");
    tmp_msg_0.value.assign("HEVSZZFAEDMUMOTAFPZEYDLOVFKSALXUNFPEZPHWKTHNOWBJBFRQRCLTHJNPRDYJVCVVEMTLXAVBFYHVMAUPDM");
    tmp_msg_0.type = 236U;
    tmp_msg_0.access = 94U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RCCTLIEPJITIBJSHGPMLSQVKWMHVRNPCOTYPJNYAUUUKRPXVPFZUTJBBZOSCVFANEMZYIYEEHNCNNU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OCYMQSAAVWZVWIMUXIDQNFGRHMQJLTYEYFMIAQORJEZIYGBZWYLVKVTKWNLPTLDITAACHJXRGFUNBTSFKVZWFTOWJQWFJNTEYHILDPTKKQDLUDDPFVMOOBSMEAJCAUUSKICP");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.5075505568900963;
    tmp_tmp_msg_1_0.lon = 0.6929945869193251;
    tmp_tmp_msg_1_0.z = 0.23479602570859304;
    tmp_tmp_msg_1_0.z_units = 54U;
    tmp_tmp_msg_1_0.radius = 0.16733305676009358;
    tmp_tmp_msg_1_0.duration = 52233U;
    tmp_tmp_msg_1_0.speed = 0.6035603878001871;
    tmp_tmp_msg_1_0.speed_units = 130U;
    tmp_tmp_msg_1_0.custom.assign("ZZHZWUELDQEUTPFWTFCREZQJAUEZKEUZCIYNLHIRWSLFCNNJSUNUTKMFQOOMLHPTBUXWUJIDVJNGZVHOSHLXCJWRVLVLVYCRHTWSYQPMOMYUJWDNTYSAVMOZEXKGYGBIVVAJUMRYQDAMLKDBQGXTHXWAPCAFFZKLXPPTGGZFBFEKDPDBFCYEHCKIDQID");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EmergencyControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.command = 156U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.plan_id.assign("YBCQPZHSGULJGKPATYDLIOLUIQQKDAQRHZIZAML");
    tmp_tmp_tmp_msg_1_1_0.description.assign("YHENPGMRZGFKOBIAEFNIOXSUVVSRYGMOMHTTWSYGKLYAZRUCIWRHAQIBQBZMJTXSTXNKVDNOVWJVVBSJKTOJBQGYYPDRACIAYCGLDWCFTIFMFMQL");
    tmp_tmp_tmp_msg_1_1_0.vnamespace.assign("YZXYQWVAXQPJUUXUMHCPRKCERLNQPDYAJVASOFHSPIWUWSHBGHIOQFWWRHMTBHYYNEAYGPJMRHKLFNFGBOMLFIILWGJEWTRJQCCPTASGCFLYVYAVTALIUBOBXNNRHZDZSCEQPWMNIIYSZQAXOCKIJLNQFMMBEJJCVZRETDEGMJDHSZQXSTDKTDOAUHZRFNRMVZUOFLKOTD");
    tmp_tmp_tmp_msg_1_1_0.start_man_id.assign("NXXUCEBTHKNNDHFWPCBIBFJTKVISWOQPUVLUWXSXDDVGJFXZNBRMKAATGRLPMHAEIVEYS");
    IMC::ReportedState tmp_tmp_tmp_tmp_msg_1_1_0_0;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.lat = 0.8177296441459276;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.lon = 0.11363071325122931;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.depth = 0.035672092764366115;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.roll = 0.8929216655820865;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.pitch = 0.9447952275410347;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.yaw = 0.4453051772687797;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.rcp_time = 0.406304338632949;
    tmp_tmp_tmp_tmp_msg_1_1_0_0.sid.assign("ZUSFWFNZCQHMVGSTFAEYWUOYBKPUXDOQJIVMKGDKQWMEHOUFMKNZEX");
    tmp_tmp_tmp_tmp_msg_1_1_0_0.s_type = 88U;
    tmp_tmp_tmp_msg_1_1_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_1_1_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_1_1_0_1;
    tmp_tmp_tmp_tmp_msg_1_1_0_1.vid = 47118U;
    tmp_tmp_tmp_tmp_msg_1_1_0_1.off_x = 0.37866938700842223;
    tmp_tmp_tmp_tmp_msg_1_1_0_1.off_y = 0.47350031036875107;
    tmp_tmp_tmp_tmp_msg_1_1_0_1.off_z = 0.6684192243565691;
    tmp_tmp_tmp_msg_1_1_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_1_1_0_1);
    tmp_tmp_msg_1_1.plan.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ZBCATOSYBDRPTXVWTEKHYGYWZXVJXQAWLUOBOCMFSMMJUFJKMMSEHZDGAWKVHIITGQFICAUWYRZMKPRLDIJLNOTUYYQNPHHIVQKZPTGJGPDNEGLDXHRBEWXNXHUPMFGKPCCXEKBCCVDYZIBQKXA");
    tmp_msg_2.dest_man.assign("GTCLEFKFRWPNFOAXAHNMINIBWMRLSLTLPZQJQWNXSRDAMYTXWUFDQONLCYHZYTYUWIIRTWMDWVVGKRRSGZGILIBCBBRAABAZEKHGPWMSBYMTZXRVVJBJJGQGVKEUMIFFSNBQJVYWKXCOEQTPIURFWHQTVAFKEEEEKDLUNFUSKPUPNNNXESYSQDDOTICFHJGSUZHBGLCRXDCYACAPLJAUDOVHVPIBOMVMPOYXZLZKGZJDPOQHXOTMDKEHJCSO");
    tmp_msg_2.conditions.assign("VLAYQGUQUIKG");
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
    msg.setTimeStamp(0.19716929643739178);
    msg.setSource(46448U);
    msg.setSourceEntity(32U);
    msg.setDestination(56590U);
    msg.setDestinationEntity(156U);
    msg.maneuver_id.assign("CFVWXKWHMUTYMFGPPOAIJCDGYEEOXRTQIFCHEUNKNXCMFVPJZMAQMEOWSWWIWNZBYCUXCLHXFZUIQCQHUDRBGOYSAWVLIZEMJNMXHUYAOVUIPVSDDGDLMGYTMTDBKASWTQGNVZJJSBELURQ");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.18188026767858245;
    tmp_msg_0.lon = 0.9635993765991379;
    tmp_msg_0.speed = 0.18870932610329827;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.duration = 27150U;
    tmp_msg_0.sys_a = 21980U;
    tmp_msg_0.sys_b = 49021U;
    tmp_msg_0.move_threshold = 0.6372754365223681;
    msg.data.set(tmp_msg_0);
    IMC::SmsState tmp_msg_1;
    tmp_msg_1.seq = 1251556015U;
    tmp_msg_1.state = 125U;
    tmp_msg_1.error.assign("TPNGJZUOIOUNJAMBPI");
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
    msg.setTimeStamp(0.7343578001658629);
    msg.setSource(58824U);
    msg.setSourceEntity(131U);
    msg.setDestination(51119U);
    msg.setDestinationEntity(68U);
    msg.maneuver_id.assign("DJUSAQWRORYDK");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("LKDNNOTVZQLHYPWJSWMRJEMTVOUWHFBGBXAFNLUCISNZVSAZTXAJJIESUPBXXYWVVRBMV");
    tmp_msg_0.formation_name.assign("XXFDNLHSZPLZBGPANMBDNRXIOIIUCTQEVRTSDWYTKQMBVVSOKPCZAUISJAMSTTLCZTPQOAJGYXSHLCKMGBPPWLTDKROMDVSQROAVPXSRXQIEGBWJWZVVUFJRRXCZNFCUMIYCIGEHAAFEUKVCDBMWLAGUBXHZIMCLQYJXMPJQJREEIRGPFFHMNYUOOAUTWKWWHBQNYCDBUSYRODJLPDOZFZENHWFNLAUKEJEGTFVKNHVWHIHKNYBYZTXQG");
    tmp_msg_0.plan_id.assign("QREEZKMGYDMELPAJWXRIVAPVEIIKSDYZYOPMUZPSIXUSNECEJCCTTSOKAYQLTZMKWEHYJQLPOSAIBUGXAWNLWSDRNVFTFNIUAOKYTMAUFCBFXMJPBIYXVUTDNFKVPVGOLACMIHRJANFQWJGCLUBCTIMQQXYPHEPOTBHJROJLSQQINY");
    tmp_msg_0.description.assign("KKZUQNSSUALSVNYTDXDFYWWPDLCAKPBRZNXUOHGORXYX");
    tmp_msg_0.leader_speed = 0.17306146429138447;
    tmp_msg_0.leader_bank_lim = 0.4637677607863072;
    tmp_msg_0.pos_sim_err_lim = 0.41354396667603854;
    tmp_msg_0.pos_sim_err_wrn = 0.3928906340135877;
    tmp_msg_0.pos_sim_err_timeout = 9985U;
    tmp_msg_0.converg_max = 0.20990170948212816;
    tmp_msg_0.converg_timeout = 26789U;
    tmp_msg_0.comms_timeout = 20391U;
    tmp_msg_0.turb_lim = 0.36237532673146255;
    tmp_msg_0.custom.assign("PEFJQUYPIEHTGEDUICSCPKOXUJEXNVIDTCMFQBAWLPRTFNHRRDLZGKQDJVRJTXMDYRUWGBZSECNDVNQKQZSJXMAOFBFLHNFTBXFALUMHKULOTROHAHWUS");
    msg.data.set(tmp_msg_0);
    IMC::PlanSpecification tmp_msg_1;
    tmp_msg_1.plan_id.assign("FGQPBCRAKUVGVHWWCDOTQWZHELELFSUSLMTXFRPRBZZJMOCAUYJPSAVHROZNLOTGOXNDBPZORSIIJTGUTZFVCGKZQBDKZMLBNAMWIQCQNEYIAHTKWRXBOHGWPXCFDSMFSRBUUBPDJDRVEECFNXYMHNTTJAQVICVDPEDHZTGEWVEYMLPLQPUKQSPYOJYQUHJGDKSOKBSDNRYEVNYJNCKTHMX");
    tmp_msg_1.description.assign("USVECJZLVINOLKFFXONUGJKBRGHUNGTRZITCOISNNOIWOEWDIIVYZTGPLDLADOZMTGXBPJNDDRXALYQSZHFASCQPMLEMHUAQJUYMOHODKWJXBRXIERGFVQCASCXYWDSBIWRPTKHZBQFA");
    tmp_msg_1.vnamespace.assign("PQFBTHQJNGQUBLWHXJZKLDPJDGNODVDOWZZFMKMCAGVJTYRBZITEVWVNXBFRPEHAZPHIOUBJRWAPXIKWYYYVZEHNIBRJXOGGTIJEGLTOTMJLTRCFQXBUMZKFCNSKEGSGEJHPZFIDPBFIKXHEISNOCSSMGV");
    IMC::PlanVariable tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("GYXWCCVXETETTZKZISRMWGVOQKNUAFEEGWSDURGCUHIZMKNKQSNJLLYXZBVNWIOLWKBHMTZBCJMFRFYVEPAXZJUAUBFPVDYTVIAWJEBRYRZILLNH");
    tmp_tmp_msg_1_0.value.assign("FVTIDEJCLJSZUODFGUJPBNUSICHKPZFYBFXLNLYPMIYICMQCNKALKWXABPJUKGRVNIZVSPASILDDMRHBQCXOKXTSZPAMCZZSBQEPHDTGUVHHEWBAUADTWHPNYECFXGUREELQQWNGOKCZLORMWEWHJYVEWDXMRKJDNTYOFVNWWLA");
    tmp_tmp_msg_1_0.type = 242U;
    tmp_tmp_msg_1_0.access = 109U;
    tmp_msg_1.variables.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_man_id.assign("ONJEUIIWCOAPVVMLSLRNMEYSDNPFKEDSWTCAZIVFJYSYJKUYSFSRGBTRIUSVZPUQXZXMLGOFQORG");
    IMC::PlanManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.maneuver_id.assign("SNJPXOZWUHLJPNYFLJXGLNTKXBMMDIMGONPAQRQGOGJFIBCUVLCBBUODBJSRWCIKIZOAXTRZAVNDMPWPALUOMQNZPWRPSVHGQIJWQVODHPCKUDACTSKTGCRRDXETWTZMYJMNAAZEKJGNYCDYRNVWBVHKEAMRFLSFVAQHSKDHSBZKDYEUTDEHQNWFGTPQBYTSLILMIHEFC");
    IMC::StationKeeping tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.lat = 0.2464600567983798;
    tmp_tmp_tmp_msg_1_1_0.lon = 0.7012153500451702;
    tmp_tmp_tmp_msg_1_1_0.z = 0.9270494415765043;
    tmp_tmp_tmp_msg_1_1_0.z_units = 96U;
    tmp_tmp_tmp_msg_1_1_0.radius = 0.4454310673993823;
    tmp_tmp_tmp_msg_1_1_0.duration = 37951U;
    tmp_tmp_tmp_msg_1_1_0.speed = 0.4058851629845813;
    tmp_tmp_tmp_msg_1_1_0.speed_units = 77U;
    tmp_tmp_tmp_msg_1_1_0.custom.assign("CXLPSFQPVMBFZPJEILSEFBHKDEQEAWNNJWWWZRQKCGJODECQYXTXHBCLDHXUIDOKFWVPALIEZZZPQCTLBIAWMAYBMDNILRHIPRNKMSOVAHGYVHGANRAMJSSNFETWKMULJUBPUXNIDOTXQVCQUMSYGWBDZNYTNJIYGOGSDJVJWGLFMUHOZOGSKATVYUPFLTYBNAIOJODFFKTRHXJVZTYRUBHQCKVUZYRRPMMREVKTDZQX");
    tmp_tmp_msg_1_1.data.set(tmp_tmp_tmp_msg_1_1_0);
    IMC::SoundSpeed tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.value = 0.2487011121714503;
    tmp_tmp_msg_1_1.start_actions.push_back(tmp_tmp_tmp_msg_1_1_1);
    IMC::PlanDB tmp_tmp_tmp_msg_1_1_2;
    tmp_tmp_tmp_msg_1_1_2.type = 69U;
    tmp_tmp_tmp_msg_1_1_2.op = 116U;
    tmp_tmp_tmp_msg_1_1_2.request_id = 37188U;
    tmp_tmp_tmp_msg_1_1_2.plan_id.assign("TAKWCMWIZPXFBLGAZGXGRJHFVVYJPMVILCEGTKYBMMESBTORRHSXRAWNIXZODZRYAYPADPRIWMSTTCJEOETKBUCEIJTF");
    IMC::SoundSpeed tmp_tmp_tmp_tmp_msg_1_1_2_0;
    tmp_tmp_tmp_tmp_msg_1_1_2_0.value = 0.820468189064126;
    tmp_tmp_tmp_msg_1_1_2.arg.set(tmp_tmp_tmp_tmp_msg_1_1_2_0);
    tmp_tmp_tmp_msg_1_1_2.info.assign("ZIUZJQPKVTXFUZPOGAXELXHUABMMFRC");
    tmp_tmp_msg_1_1.end_actions.push_back(tmp_tmp_tmp_msg_1_1_2);
    tmp_msg_1.maneuvers.push_back(tmp_tmp_msg_1_1);
    IMC::PlanTransition tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.source_man.assign("TGPXYVNHQSQWNVTBXLPNPSMREZIKMOQEKZDLRTDCHZZWHAGTDUEBNEIINFRKYAHXYCRAGGDFSXPBYOTHMLFKJJYHTSVKJUZHEVNVCUBQRIPJXFGCMGURQVAWZORZW");
    tmp_tmp_msg_1_2.dest_man.assign("YEAHJEPNRZMJIUIZPCJNUBVDRNZPWIIOKVTMRGFLVZHFEZLJXUGXOBTQUMNKCUPBPDCCDYQRSNGHTDLAXZTHWGIEMSD");
    tmp_tmp_msg_1_2.conditions.assign("WHVTMIMLZOCSLSYQLNTUYNFGCPPCFZRJMKDLBZCHHZBUBZAHDOZGUNGTSCWDNBSIMBYENQTJCIMDMHHKAIZPFHETHUKIRQCODYRWGYQDLMBKAWWXZXZOXW");
    IMC::MapPoint tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.lat = 0.6098129860989808;
    tmp_tmp_tmp_msg_1_2_0.lon = 0.520084338736668;
    tmp_tmp_tmp_msg_1_2_0.alt = 0.08099118965397101;
    tmp_tmp_msg_1_2.actions.push_back(tmp_tmp_tmp_msg_1_2_0);
    tmp_msg_1.transitions.push_back(tmp_tmp_msg_1_2);
    IMC::AcousticPing tmp_tmp_msg_1_3;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_3);
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
    msg.setTimeStamp(0.427685038929139);
    msg.setSource(35118U);
    msg.setSourceEntity(160U);
    msg.setDestination(35852U);
    msg.setDestinationEntity(142U);
    msg.maneuver_id.assign("LNXLSQZGGSVLNBMCBPDGZBKECEOEDTHOUSONXYVRCUORLGMAJEFWUTAYFTQEEXJUVNBTLQWNHBOFJCQCDFSBIGXPKRHKZPSVLIDAEUMKLLVOPYJGJPBWOPIYIYOMHHFHUWCQERERVAZQUXFTRNESWIWDFRMMQDPGNHVXQVTHQBWIZNLXPQRKLUJYM");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 24047U;
    tmp_msg_0.control_ent = 192U;
    tmp_msg_0.timeout = 0.613491465935883;
    tmp_msg_0.loiter_radius = 0.8529789660024607;
    tmp_msg_0.altitude_interval = 0.38286295756167465;
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeading tmp_msg_1;
    tmp_msg_1.value = 0.23481176973823636;
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
    msg.setTimeStamp(0.06945847795508941);
    msg.setSource(29170U);
    msg.setSourceEntity(207U);
    msg.setDestination(15845U);
    msg.setDestinationEntity(158U);
    msg.source_man.assign("DFYJOOXIWQHCRVJGGGGSNDUEQZDPFFTPWEHLBTFNWTLHFWQECQUCVLYAZARGHWGW");
    msg.dest_man.assign("TMEKEFXINOKJDQICVDVWCOQKWGGCBZIITOYCPJYPHLBGCJILAVBFULAISGTVTNVYLESOFBLMMFLCZSBSVRFZKLKXRQESVAZGDWQKWGNHRXHOXPUEGWTMEDKEUHSWDKORZTQQDQQTBQBAQRRSGFAUUOUMLGPUNGRPAYVBJIBPAXZKIDDFMHUYACXNZNYYSKOTRMCCSPZUZHXYYMEJENSWAPTIRVPBNDWXJOXHWLRMUYACNJMHEZJFN");
    msg.conditions.assign("LNKHMRTTJLKXTWZCOUSHQIJOPSXQLAWLPIDXHMUKCVABPCXBADPNUDFJNKFESBELBYM");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 61U;
    tmp_msg_0.system.assign("XWWRBZAUFOTPFWSU");
    tmp_msg_0.range = 0.3463715353368704;
    IMC::EntityMonitoringState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.mcount = 49U;
    tmp_tmp_msg_0_0.mnames.assign("HLBMOJTDACVVXOBQHGGJNZMSSEUPXKPOHBFNDSULWFYGJAWLQRPZNALIDEAQTPKFAUCEEDVGNOPRIFKCJWGRQEUMBSKUGCJTHVVMFJACUZDJLGMBVPQAPXHVRIOSICTYTBOYBYOFZDYRXOJTUXDMZBZXXVQKVDRTFPWEKPCRWZIMZJAXNXJIFHWSILGBGCKYA");
    tmp_tmp_msg_0_0.ecount = 242U;
    tmp_tmp_msg_0_0.enames.assign("LISMKCIZLQLUJIWVIFJCDRGMUDZHNWRDACVGSJMAPVKTFCLZGAUKBKOYTPWRDXSNZAIIETKKXWJVTE");
    tmp_tmp_msg_0_0.ccount = 106U;
    tmp_tmp_msg_0_0.cnames.assign("QAZYMNKVQTJZYWGWGKZCRYHRJKWPTGCRDHZNZUAWHXOWMBARULMCSBGDEBIZUJUNILVNLSTYNXSSWNXSDDWWLPHUQEOQTFSXIPNITJFBFBYALLJPOTZFPMVPZCIANJOUJMIWSYQDGGAXRCGJXUEKRCOIHFMKRLVRYVFDHPKDHUWBOFHEAMXEPYGQNCXYSJLLHBE");
    tmp_tmp_msg_0_0.last_error.assign("ZWNQMEOOLUWGVLITRSSLCLWGOLUYNWVCMSHWSXILTUYGRNFRJTYMPDAIWEQUEUVTHOJHLFRDMRXTVHPVXDITAFIZIXEZRXGHPCXKZPHUQSSZZPUFIWPVGCKOCEKESTRYBMPVCNYADIJKGBDDEQOPMLNQTKFPAXJLGMGWBNBJZFQKAFBBMADOWZACVUHRUZZEUFEACOAGSRKBCJBGVPOSTYDXFQFMIRNJJKMAYQDHYWXIEV");
    tmp_tmp_msg_0_0.last_error_time = 0.9991626829158275;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7777560157751506);
    msg.setSource(34356U);
    msg.setSourceEntity(236U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(244U);
    msg.source_man.assign("RPFKEKTWHZTNJVSWZHOQLSQBTIWVNOOLDBFMRJVTHDIKVAYMIUQPG");
    msg.dest_man.assign("NJCQDMUQOCAXLLOBSBZKHXGJKYDCHMKOWCJQRXKFOBHLVMOMMULQUDIHTYGMA");
    msg.conditions.assign("XTSXZFKZVBLJLWGGFLCBXPAYNPBNCHWDKKLEPZMXJHYUNJPUJPFSKEOWRSRMQGPOFWWIUFHPNKYCTC");

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
    msg.setTimeStamp(0.38342779892059753);
    msg.setSource(62849U);
    msg.setSourceEntity(171U);
    msg.setDestination(49312U);
    msg.setDestinationEntity(91U);
    msg.source_man.assign("MXUAHYHRPWPKTNZWKHAFRNKJXJLUNFPCIVRTRSISPPDKZCCLVBMWTNFEFSHFDBQYUARUPGLTAXFCBUMUSZJXQDWSHMWQIQQBJNXGQKHAMXUEWDGXINFOOYLBYPQSAGONJMVGHKOEJHFWEOMZOSHXDN");
    msg.dest_man.assign("VNBTBAEAWQTQKLHOXZYZKDSWTUZJWICWDUYLLPNTQHYMVOBEXXKPCEYVCJHJCSXDMZZFHIFVRPFQSVELLNJPVKIQZMSKNGBXGUIRDZQBGKCBQTHDKWRXEDFYOWQOMPGFSDRGQBJOLEAPHCCLMWAYNIKXIFETAPMUMJRRGNEAHMSJWCUZTEROIUSZCZRPBVGYNFJVHNMUYGHTKGJUSSTFRUGINOILVXDCHYBIOKQPFFYRNDALLAOJBVXXPD");
    msg.conditions.assign("YJCTSGKPQDZNDBRNUIAUOHNAXMMFHYUHDYRBCCTQGZNOONFECZTUAHIKBXILMTZCOVFNIQEXEAWLXVSRPCKMGEALYFOIWFLRTWZUXGPDVWBEUBKQQVGPPQEDTMIPQKWYSLPVTZWOEOEHHCRWBSJMKVPCQLQKLIRVXPNZABKMFBAMBCRFDEHG");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 46448U;
    tmp_msg_0.value = 129U;
    tmp_msg_0.error.assign("ZTANBSWGAOHRGJVNSPAIMHBJLEODTMBITQWOYCCYMLADZSKNGQMHBOVXXPZJNMRFYFAVUOYGGUNKJIHTLXZMOFJWYWBSCARGDUWADWRYXPNYJGKBKFXNLBRLMKTTCSSYVQKUFAHPDNLDAIHJLJABFQXWEQKYNTXLRXHQOZOLMCODJTYEGSHVZVRWTKXZKIFXUQQVQEWLKWIMEUSPCHEPIUFPVRZCIEVQCFUGPECHUFIRUZ");
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
    msg.setTimeStamp(0.75690472619609);
    msg.setSource(8195U);
    msg.setSourceEntity(114U);
    msg.setDestination(55416U);
    msg.setDestinationEntity(186U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QMBFSDYJEMPHMSHWJYAYCROUHFYIZUPIEHNCDMPBNWUWSNPCXILEYHWAVXUREQXIYKOIFMMJOVBWRWCMTWTAKFCYBVYTGNDGNZLNEZFJURLDWEZDQE");
    tmp_msg_0.description.assign("UJYSTFPXUVSUPOZXCPRDYCTKKMPFHSJDWPCVLNIMQEFBQOGGRCLVWHYTOABUOTLFKQOIKGWDEKBRQXBAQKHFDSQSWZKSULNITDSBJEOHINQCJRMLXORFDLTXKHRDMTNINDYLIFNGAAZVNRHABTKQWGMEUBRSXYZVVCXUUEYSQJWFZDBANALNODPYECJCJUEBLEVCJGWMXPNFPOASYHJHQBWZPYITZZV");
    tmp_msg_0.vnamespace.assign("WSKHWAJLEDDNXPTRSODIEBOVKXTCRARXHMXNZLFJVGIDVPJQIUHGLBWQQUNBLBJXLEWWDGSGROVWWYAJTDTAZOOUTPKYXKRENDOOKMMJUSHSXGWKWMISBWPACEZFMQNPYNZUHUZQMCIFITFNFSEOHFPGGQNELCYIBYCVEYBDAHQTIZHFMMZKCYJRZYBUCPYHUKVSLAUUQNVAKITAMZXKERPVIEXR");
    tmp_msg_0.start_man_id.assign("EBKLXBUNWZDOBNVIGEPXAPDZUOWRYMNIGFANXZUXKQGKKISEPRUNVTYASOMIKHESGALOSXOPSRQKDMOVGLMYFZBUBDLHJHSWMBWEZBJUZULCTXKYJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VTJVRHOQACYCMULRLSAPCOUGQTWITVEYLBMHWYKNBIZZETUNXUGKOHDWEXJSCRQFLKANSYPOKSJISDCXUPPNVUPJATBDULRRQQJGDHHZAIZPTFYBFZDZENHQFZLIDGMLCVWTIEOAVMQFXZSDKGYBVJWUBAQIWXNRSZBIFDFPTEIWOAVEYRCEYVRSICQPESXMKLLROVCMOPDJKBHJKKWOMSR");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 60304U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.24482477687188342;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7041412345901504;
    tmp_tmp_tmp_msg_0_0_0.z = 0.4183202456743986;
    tmp_tmp_tmp_msg_0_0_0.z_units = 28U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.37912056575438224;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 150U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.7151961665926114;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.6219272831986261;
    tmp_tmp_tmp_msg_0_0_0.width = 0.025781311510295835;
    tmp_tmp_tmp_msg_0_0_0.length = 0.6735161074304616;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.22010230912864215;
    tmp_tmp_tmp_msg_0_0_0.coff = 66U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 223U;
    tmp_tmp_tmp_msg_0_0_0.flags = 103U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CTLHYCESSUKFDHPQUFLWOKDOAVJIVGEFWTANWDBRZXAGBKVLJVBQBVXKMONODDFZSPYDMNNJGKIWGMJIRSAREPKCHCRUEBABPRJURASUCLHPQOSYNKVMLCEMBOJZTCEYBNWXIBEXWMVFYQPJXJOHYGLUKRMAZWGFFFRDPQACGETTHQVHFLWGYGJXQETHDNAUXHWICKLUPJSPGVQTIYYFBZXZRNKEZDXMVRDTPOZOATLMSLSTQMCIHQI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 61U;
    tmp_tmp_tmp_msg_0_0_1.htime = 0.9429099249079265;
    tmp_tmp_tmp_msg_0_0_1.context.assign("AKHKSYCFHDJMZOTFHETLQWFIDDAELBNABADFVNTCWZRCVLOEXXXTOE");
    tmp_tmp_tmp_msg_0_0_1.text.assign("LUNPJKOBBGICVTSLVVAPHDQBPZCSFVFBPYXZPKQDSLOWRQNMEJVQVYZISIMCBJXPQNCIWAODLRJVMNCDVSZMWXRWHGKEOWQNX");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PowerChannelState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.name.assign("LZHNUCYBYZVRGWKPMIIKOEEDKBIGWWJDRQSKDSAGUQLZJ");
    tmp_tmp_tmp_msg_0_0_2.state = 206U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DevCalibrationControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 160U;
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
    msg.setTimeStamp(0.8709165071609124);
    msg.setSource(37820U);
    msg.setSourceEntity(21U);
    msg.setDestination(54860U);
    msg.setDestinationEntity(145U);
    msg.command = 165U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YTNUVWYFYRHSGZTCOHPMNZPFLKNYWRNAQEWBXVCSJMMSYAOSRPTAMHPKBMGLHSBUQRTSUXHPGXAKD");
    tmp_msg_0.description.assign("LIGDMNPNOBLWEMDCWIEDCZXYTZGRSQKVUDPZONXWQAUFIJICOSUWFPBBHVRJYFIPSHPZYSACBSWIRHQRNUKKDHNYUYIXXQGHTERLAQTKRMUKXCMANOCSFBENAJMNJEMQZDZWBXJOGCJGOVBKMUFADUPEROLSKCCVQLABXJPIVMBL");
    tmp_msg_0.vnamespace.assign("TNHDGOLHPGXELSGAYCSVBBJNYUEHNRTJRFMQIAVAZHUKCRSWPTCYRIEGNJSXFFELRAAGKAMGURJIFOUVHJHBKIZTDQMLZWQVEPIJDJUKBSQUIWKZYKVPVRHQDBDHSZYUEIQUQMDWOQTNPCLRYSZTAPLJLMCV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AVVBEZLKJBTQDBECJFYJJTEEPMFPBFLRDXAJNXNAPHCGDVMDITSDNOKVASFFSUQQUSAUMWMPPCQJZBLWONAZGMDISOFWUVLPRJHMAKRVIPCEVBXBOLLTJRXDYXCRAGYDLWRTEXSSZYTCGDYQTOXHJ");
    tmp_tmp_msg_0_0.value.assign("VTGCAEQFCGFXUDVXKMCRFGGXETILIIHLJTPKVBLVDXCBQXAPPDEOJAOHJHQABDUFRSYWENVEOWJBQBAMZSIONSECNCXAPLIVLDXQPJWKMGRKYBIZVGJMNYZRYGFUARNYNNJKXLKWHHOMADMFESUJGSIERSPKWBZATAJZHMRFPOOFTHZWDCXDBRVUJCMSNKZXTHRITYOWRZWTLUUPIPFTCUKKQG");
    tmp_tmp_msg_0_0.type = 22U;
    tmp_tmp_msg_0_0.access = 132U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QNHSMPOPIACKEMMKTTKGWZPTKCNQJBMKGLXNMHLWLUSUPFHEFUNFRUDAXVUWLDTEBYOCSJNCYZSIARCQBZDLHPODEMVJYFBWLYUXFYJZFFDJBODIKGSJTRWGCKWNKTVYARYMRIEIOXEBQSFVQUC");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BVXNYWEZQPNMBNGUVCBQFLABDOGEIAGUIVEAHYGBOWELUIECTAQMKYHLZUGXNHHTRGHFRPJBUGBOLAXXLDDUCPCRAWRDITURFTFCJDPWRQCPPLDZFADKSSBNJFJEILMDKYXOQQQYVMSMDILXJQMFPXEMIYZIKVNND");
    tmp_tmp_msg_0_1.dest_man.assign("UGUHAXZINVWWTUHWVXIMHFPAXWQKGYMVJAZZUSGALMIMPXKUNVDGOLOWNTEADRWLXQFDIKPNMPQBWTWLRBHIVZAMZORYOJEHILRJUCVNBINCHDJHFBDTFEFOEGLTCZDNVJAISPPJKTBLLUQSYFKJBSYPFEPRUCSCGLAXOOVPOCWLDTUYHFFYVFGYXOSMSRYZYKCSQBXKXEQ");
    tmp_tmp_msg_0_1.conditions.assign("OMLWBLLCOVIMEZGCGZDWCSHXMHBVBMWKYDLRQENBDXZFDGWRELIRTYLDSYZLSALNRTVKPBMDPJNWSNWXQSVYXHGIUHQFRUTOTCENVMUGOEUKQAOUVJEEYWXGXWDBNGKBWHTWYHCZRFSEAAMHJLTXRMOHKJTEBFXAZMQTHXHYCCQPUVANBAFUYKJQXSADIRTBYSSKJCUGPKPNJVIJGPPPNMVFUCRVIFNOQOZJEJOYKAFUILQOFZC");
    IMC::GroundVelocity tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.validity = 116U;
    tmp_tmp_tmp_msg_0_1_0.x = 0.07069609298931079;
    tmp_tmp_tmp_msg_0_1_0.y = 0.9264835693777589;
    tmp_tmp_tmp_msg_0_1_0.z = 0.7633058643335249;
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
    msg.setTimeStamp(0.15301749231074713);
    msg.setSource(13326U);
    msg.setSourceEntity(24U);
    msg.setDestination(28700U);
    msg.setDestinationEntity(102U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CPTSRIJWRRREFCSRBZOOSBMUEOFEZALDBXFKFHUUVWHWFLNQWTVCFPYYVUDPPQBTEGNZYDSNCCPFJZBABVBWUXDKHEQFQUIKTGLALEFZBCNLSKIIAPMDSZQGYBKGHRKZTHNWIGODPGNYUPCTEMSHAIXOUJWSYRJULAOQJVRGOSMQAUMEOTMVKHABEVXWKVEXXGHCRWYLJXJVIG");
    tmp_msg_0.description.assign("MIZGLEGJMPINTAQOTSGQXOEMDWPWSMZMGUHEMLVSVIQXUIJGBABCXB");
    tmp_msg_0.vnamespace.assign("SQHOJHVDQMNHIQBIBNVRCNMFBFVOKPXRRTGXLTXLGKEMKYJJPTUAXZTDSNNAJKMWEKCQFQTMIBUVVPZEPJIECSQKKCKUAIPZBYUGCJJBDUTPKFYTNBCYAEDRAUNSTPDPXMZIBOLLFONVVGEZFWXWGTVCUZZIRFHGHROMLWWMOWMUZS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TTUAUGBUOOBKMSYTKBRPCKXCDGVEGLBYLWJQLEJIOSRWWXEJLYASQSZOOXUGAZHCWKETRWDALJUPSICAORMNMHVTAIINCVKRAMSQUETYENXRRTRYGZQFOKPVWYDRZTJGTQQJDOOZSFMCZHINYFNBPPDWJWJKUVFPDHVXLIPCFMSZBHXNDJXYSIAHULMFOCKFBEWGBMQLNUEGNPVUQHHDQ");
    tmp_tmp_msg_0_0.value.assign("FBIBSLZXWMRXOQWUZSFJZDRWUHLZSOIEVURDVKNAXDBKRRSTVNXEMQEHVQANIXLMUFRZYQRXOUBYVDTYJPBXCCSTDQTFNDNEAOPHIOPMUUCVOLFGPSMKMYTJPBYTWOWVITDN");
    tmp_tmp_msg_0_0.type = 248U;
    tmp_tmp_msg_0_0.access = 60U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TFKTWYUQTPUZBWWOACFLKFQOHJRMQSCJXMEGCDGGLJXCVLUSXPSSZVVILTEBUTTBGUSXYONAHWCBJMEMINQJTXNEEZRJCLYCEZWBPPDWNKLSKGMOBRHFRQXEWVMPZJZUABDNDLXIRKAYRYHJWROCRVGDWPUIIHVFAIUVGMBOYJKHTUTVOJORYSEFZVBFHFDOFQQBCQCAYKYRISIQANOTXPKASLGGVDMAZEUNEMZGHHQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FNUPATZRUCAVWXSRRVKQAIYLASKDDRUNBBQBMQJFXDMHIWGJBUJMXTSTTPEFLZRNETZOAWZEFUKOIIKLWFINWXELGCYKAICIYBQXODBOECLGHDROOZHT");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 13269U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.38038990602769707;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7210367617462008;
    tmp_tmp_tmp_msg_0_1_0.z = 0.859831143061691;
    tmp_tmp_tmp_msg_0_1_0.z_units = 126U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.04417941850989271;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.6922948917939733;
    tmp_tmp_tmp_msg_0_1_0.duration = 25132U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.3659445709178333;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 32U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.7277710981122024;
    tmp_tmp_tmp_msg_0_1_0.direction = 28U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SWNRPOQIYQTQSJGFBRPHAZOUCEXJZMHJWLIWWOZQOIQNPCNBLEDPURQOVEYAGYAHR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PlanControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 134U;
    tmp_tmp_tmp_msg_0_1_1.op = 2U;
    tmp_tmp_tmp_msg_0_1_1.request_id = 13925U;
    tmp_tmp_tmp_msg_0_1_1.plan_id.assign("YOQIHDXAVAARPFZTBUEWAISLSCZYTCUBSVIXZPAFUEBRMSHDDVFMGADTFGVUUGZSTKQOZFFIFGVTLRMNJIQH");
    tmp_tmp_tmp_msg_0_1_1.flags = 39139U;
    IMC::SonarData tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.type = 253U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.frequency = 1779405080U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.min_range = 64204U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.max_range = 11790U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.bits_per_point = 60U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.scale_factor = 0.26430065462240127;
    const char tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0[] = {-40, -116, 80, 67, 47, -62, -61, 65, -76, 63, 13, -1, -9, 40, 24, -114, -106, -9, -106, 67, 116, -4, 2, -63, 113, -119, 14, 120, 99, -21, 50, -82, 83, 45, 51, -100, -46, -102, 64, 64, 117, -56, 61, -7, 32, 44, 85, 77, -67, 36, 14, -22, -120, -87, -20, 51, 99, 10, 120, 51, 13, -40, 67, -126, -65, 86, 81, 28, -94, -27, 6, -51, 8, 35, 73, 93, -117, -88, 95, -10, -38, 88, -85, 6, 52, -118, 63, -91, 6, 5, 63, 80, -78, -110, -1, 107, 59, -104, 97, -9, 87, -65, -111, -29, 119, 7, 20, -88, -54, 0, -108, 111, -99, -84, -76, 97, 43, -89, 0, 27, -65, 20, 105, -111, 79, 55, -37, 10, 120, -13, 74, -45, 37, -14, -17, -29, -52, -27, -111, 2, -127, -35, 92, -2, 92, 63, -104, 27, -100, 25, 51, 86, -6, -100, -102, 54, -103, -47, -122, 18, 91, 90, 95, 16, 83, -94, -7, 19, 94, -122, -23, 56, 14, 10, 114, 21, -32, 34, 58, -9, 126, -14, -100, 40, -7, 40, 29, -78, -113, 43, 29, -38, 96, 33, 120, -12, -31, 116, -78, -100, 53, -77, -110, -128, 32, -72, -125, 122, -52, 125, 70, 30, 62, -48};
    tmp_tmp_tmp_tmp_msg_0_1_1_0.data.assign(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0, tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0));
    tmp_tmp_tmp_msg_0_1_1.arg.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_tmp_msg_0_1_1.info.assign("PEXCYSHJIXQQLFEZGZMUKZFVKNZXCLHDPSOEIFUKBHMQVXYNNDFAYCJOAYQHRSWULOOBMBTKTPUTGNGRFKJHRIDAQGBXDEETATWJWNENROJQMBKXLFVTMJPWUBINWLIPQCHPGBGMUIHDZSAOMRXIBVRMSBPCYTFLDGCZCJVJCMIMNLOJDERAOGCAZWHLNAFZPSJPGXKTF");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::AcousticRangeReply tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.address = 172U;
    tmp_tmp_msg_0_2.status = 70U;
    tmp_tmp_msg_0_2.range = 0.08862804220778875;
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
    msg.setTimeStamp(0.7113585855686609);
    msg.setSource(850U);
    msg.setSourceEntity(17U);
    msg.setDestination(30132U);
    msg.setDestinationEntity(116U);
    msg.state = 168U;
    msg.plan_id.assign("ZLWTDTQXLJMOAMLBWILHXOVXYWPGVYMPIQFFRPTBCXKONDXFNUXEKYRBOZCDJBGPXHYMLAIASGDQWLWPKFFTLTHWVQNEMRUAHEWNLDABJMZHHQVTBMNVSDCZCGBTRAUCKHESDFCJCUWHIKEYWSSRUOEZPFNEQTRAMUIWXPAQABQRFOGSCZX");
    msg.comm_level = 106U;

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
    msg.setTimeStamp(0.47696121505211597);
    msg.setSource(52293U);
    msg.setSourceEntity(38U);
    msg.setDestination(39873U);
    msg.setDestinationEntity(128U);
    msg.state = 145U;
    msg.plan_id.assign("MQOIZQXFWPAERJMLLFPGLNHIFYAUYGIRWCYAPSYJODXTBPSRETXHGUGTDQVAXQQLVTMWSRPNSVENCODENJFTYNOVWUOVFOHXPGCZNEAAYIXGGVTWFRCDZGNZHJCZZGVKWVIDMTLXEJAKBUWUTQSNPUUFMRRKEEFSAMALHMQOMKJKBUCRJOZYXEIMBGHLBYISKISABPBSFLKLQUWHC");
    msg.comm_level = 239U;

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
    msg.setTimeStamp(0.0876708799781949);
    msg.setSource(6452U);
    msg.setSourceEntity(202U);
    msg.setDestination(49074U);
    msg.setDestinationEntity(126U);
    msg.state = 197U;
    msg.plan_id.assign("UIFIUWMKLRICDAKIZZWVUSFYLUZQBRGACRUDTNZOFSTUAVHVPDRHIGXJFHLVCUFYXSOBSGMBPXCHNYJAPRTTUWQRMXNIDTBNKGKBMBICSQWYZVCEPLFWQZMGDJFKVDNRPXSHTKJEMMBPEOCEVGBHNWWPJBTYIDCMHOZVYQJEPKKOEH");
    msg.comm_level = 241U;

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
    msg.setTimeStamp(0.9775729021784803);
    msg.setSource(24593U);
    msg.setSourceEntity(114U);
    msg.setDestination(52269U);
    msg.setDestinationEntity(113U);
    msg.type = 58U;
    msg.op = 250U;
    msg.request_id = 52208U;
    msg.plan_id.assign("LRZDSWOHVZPEWOTAQBZYNYHDSPFFAPOQYBQTSFVNPUJSIEDYRMWYKBEXVVHQEZUANSZXVUETAUCPHBKYQCZKIAZTLMRNWLRKKQWZDXGJAPRIUCQRMCIMPMIUIJKBCBYZMTWXYLGFNELFWMGBPVIGMEROCUSTTYFLBOPJFRGNDNIUFXHJFKXCQLOMMDAGBVVDCXGO");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 161U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QJLMOUBPJNYDAEXMLTZFYPXKMAZSEAWPEBGLXFYQIWJQQPFCOTAZVXHRXHRBVZCGSCSONCKDNXDCSUQUP");

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
    msg.setTimeStamp(0.3885005853124117);
    msg.setSource(34842U);
    msg.setSourceEntity(167U);
    msg.setDestination(23U);
    msg.setDestinationEntity(168U);
    msg.type = 56U;
    msg.op = 122U;
    msg.request_id = 2909U;
    msg.plan_id.assign("MHLQCJTXWIEGG");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 75U;
    tmp_msg_0.op = 151U;
    tmp_msg_0.plan_id.assign("TRGORYXHWGGFKCBVOBYEKQUWZUSVSYWZMOINAIXPLPTTQVFXXZDCYGUGWKHMGPYLDUJSMFQCYEYCFBIGBIEKNLJWKJRPLZNUISXMTIXSJANVRVQXPEDQPLBLQTLFOHQRTFVFESIKVSCZLEEUBPRHEJDPOXMCMRRJHURJJKDINTYZDCUVMDTH");
    tmp_msg_0.params.assign("NSBYMOKYUVEYHBZLOKPKCSEJFXWRIEGGWDIEDUAKXSCWXVXAVQRAVIUMHPHQDFQQGBMSURCUSTMMIRCJBVZRNIAZQVCSDSVEXJAZKPSQPGVCOY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SRNQWJHRCLRNOHXICWUFISCLKLFUVJOUSEAUFEJAVXJFUCSEJMBEUAIQKAZEADLMTKOFIVXFIARYMXHALO");

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
    msg.setTimeStamp(0.1591786628719114);
    msg.setSource(4320U);
    msg.setSourceEntity(23U);
    msg.setDestination(54402U);
    msg.setDestinationEntity(66U);
    msg.type = 12U;
    msg.op = 228U;
    msg.request_id = 43968U;
    msg.plan_id.assign("FPSDZRYCTPWYESPBEWKNYIAMPCAXFLHDARFOKRARCHHBKHDWZLPTJZZJNSZTPSFUKLQIMIXAOETNYQSMILGDROUBVHNMBLDWUFRAMUGVGBTJKLLDRWHX");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.956580478531514;
    tmp_msg_0.y = 0.8597185887579792;
    tmp_msg_0.z = 0.4544613379058946;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RNRKOLKTYEYSHQWUBNHWPTSMVUGMFMSQXQXLMKSINHKTUBWGKFGDHVZZWQVQQAXCEXSTGSNCBDIOOOXEKRJUPAZEEIDIBEOPJXOEFS");

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
    msg.setTimeStamp(0.9169185885997384);
    msg.setSource(3110U);
    msg.setSourceEntity(253U);
    msg.setDestination(26748U);
    msg.setDestinationEntity(52U);
    msg.plan_count = 42943U;
    msg.plan_size = 1300539563U;
    msg.change_time = 0.9909607094918644;
    msg.change_sid = 20683U;
    msg.change_sname.assign("VXYBKSMXAMYMICJUAWBCQVLDHBBFVKIYEROCEYTDWVCONPIRSJMFAFVGWMISDIKGCJOHCLVCPTNIYTDRMRPKUOPPBQJWZTAXSUYYETXTNUFVLLVCXZDDRGNVWAEZCENWEL");
    const char tmp_msg_0[] = {58, -45, -10, 20, -120, -23, -128, 82, 97, 85, -7, -127, 53, 54, 103, 90, -77, 123, 39, 21, -14, 9, 95, -64, 61, -105, 15, -110, 122, 87, -25, 125, -70, -4, 15, 12, -85, 104, 60, 53, -71, 114, 102, -6, -36, 24, 61, -63, -40, 23, 112, -79, 84, 30, -57, -26, -79, -75, -53, -115, 29, -35, 109, 18, -1, 96, 86, 68, -12, -16, -47, -47, 71, -105, -45, -10, -91, -34, 93, 52, 13, -62, -71, 17, -16, -4, -57, -125, 23, 43, 41, 77, -56, 89, 33, -75, -68, -18, -121, 94, -123, 123, 105, 14, -90, -30, 15, 120, -46, -123, 33, -116, 120, -77, -123, -78, -19, -113, -61, 75, -91, -63, -50, 119, 86, 63, 123, 28, -30, -113, 6, 83, 103, 122, -52, -108, -44, -43, 94, 72, 122, 65, 106, -12, -105, 33, 28, 126, 87, -38, 78, -64, 115, 110, -87, 81, -50, 83, -111, -14, 120, 103, 83, -5, -113, -107, 80, -28, 112, 103, -111, -59, 16, 71, 73, -54, -65, 29, 6, 19, -122, 6, 79, 24, 104, -36, -105, 71, -12, -34, -58, 117, -26, 8, -3, -86, -67, 110, 9, 39, -41, 83, -61, 17, -80, 109, -127, 72, 88, -50, -109, 55, 101, 58, -31, 85, 78, -59};
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
    msg.setTimeStamp(0.6076749898651933);
    msg.setSource(33628U);
    msg.setSourceEntity(77U);
    msg.setDestination(30767U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 62265U;
    msg.plan_size = 3247924239U;
    msg.change_time = 0.7433025753198541;
    msg.change_sid = 22352U;
    msg.change_sname.assign("KWIBPMUQSIGFDKMZWGXUBJFIKOIZTUSNQNLXFDHILEIBVFVIATZSGEJAQTZVLZLDTZBNMPXMDWKCXMEPCWWJAKGYEONTOXRPDSCASWVFSF");
    const char tmp_msg_0[] = {86, -88, -97, -112, 108, 51, 105, 104, -27, -69, -102};
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
    msg.setTimeStamp(0.5274725796580719);
    msg.setSource(40403U);
    msg.setSourceEntity(176U);
    msg.setDestination(44634U);
    msg.setDestinationEntity(8U);
    msg.plan_count = 15840U;
    msg.plan_size = 25367062U;
    msg.change_time = 0.7747217466582107;
    msg.change_sid = 2965U;
    msg.change_sname.assign("XSGELHGVOGOUQZRVTFZNFIR");
    const char tmp_msg_0[] = {23, -61, -73, -107, 106, 45, -60, 126, -56, -54, 40, -124, 84, -125, -105, -44, 69, -40, 24};
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
    msg.setTimeStamp(0.7392732824380598);
    msg.setSource(29803U);
    msg.setSourceEntity(143U);
    msg.setDestination(57747U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("VHHLECAQFXVHVMFTKT");
    msg.plan_size = 55426U;
    msg.change_time = 0.5051650743380641;
    msg.change_sid = 30035U;
    msg.change_sname.assign("KAQOHOEKDMWIILDGWGESBTNBZYNISNCXPGABVMSARVXDVGGRIOZPPFKJMIETLBJZNOGLQEMDAYPGPBOSNHNXTXJQFTHPCDBRSGIPEOSRAXBICFNTWYKNLTYARZCLEYUTJTUYJIFUHJWKSHXHWMWWMPAVVHAJUZQJCSRVUQLDRZQZGZMMCKZXJFVQLNQRCPGFKKVJBCELEDSFAUUUSHHQDADWIRUWO");
    const char tmp_msg_0[] = {-53, -54, 19, 97, -20, -59, -107, 54, -109, 95, 13, -113, 61, 8, 75, 75, 62, 10, 3, 102, 3, 49, -80, 5, -10, 6, 92, -110, 116, -46, 64, 125, 24, -40, -16, 65, 11, -55, 98, -87, -48, 50, -26, 44, 7, 72, -77, -55, 52, 36, 77, -119, -109, 21, 124, -90, -63, -38, -106, 58, 82, -86, -66, 125, -54, 122, -123, 96, -107, 115, -101, -122, -70, 87, -41, -116, -106, -34, -94, 42, 99, 101, -8, -99, -89, 49, -112, -20, 65, -21, 67, 109, -86, 30, 10, 95, 106, 94, -67, -10, 93, -101, 105, 43, 42, -21, 8, 77, -26, 55, -100, 48, 37, 96, -12, -120, -62, -65, 67, -106, 36, 20, 117, -3, 59, -5, 101, -120, 49, -114, -109, 3, 102, 107, -112, -49, 110, 38, 52, -53, 34, 113, 50, 37, 98, 125, 76, -112, 27, -110, -23, 48, -17, 95, 103, 75, -26, -5};
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
    msg.setTimeStamp(0.0842929894211315);
    msg.setSource(29100U);
    msg.setSourceEntity(165U);
    msg.setDestination(12333U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("QBHYHGPFSLBERNCZLYYDRBLSQOBCDFZJPKHXXFVCMZSUUHYJKQRKXJSADLXALFTOVMJUZGHWUIJANNUAAIMWEKVLXYUKSNEWGQQHDWEQJNACPZLPRBDWYYHEMRSDYDMHJJFGRPVPRTRKLNCVHZOSDIQGUHXDJNIDOCPEVAAYKQFOVCMTQBBWSCMYZKEZIGQWECEXTJBTTRLZUMI");
    msg.plan_size = 52894U;
    msg.change_time = 0.5409315720147638;
    msg.change_sid = 16417U;
    msg.change_sname.assign("RPHQIHWRGRWNZKDOCHQAPOQXVFRAYLRAGDBTELZFMNMTLWJDLCTSTKJAHXNYASSLCGCKDBQUOFONSTCPBYKEHEGQNXGJPCUZWVTEWFNMSFACZXKQSDMVGVPVJQUJAJGXIJUSRBYLQEXYMOURUTRECPZF");
    const char tmp_msg_0[] = {62, 72, 23, -85, 84, -59, 38, 114, -80, -120, 114, 49, 35, 34, 56, -124, 22, 79, -66, 10, 69, -48, -29, 5, 106, -15, 38, 101, -49, 123, -62, 36, -101, -39, 114, -108, 9, 23, 72, 20, 45, 55, -6, -45, -125, 5, 86, -105, 33, -76, -80, -17, -24, 21, 76, 67, -70, 64, 99, -22, -91, 4, -70, -39, -84, -68, -120, -41, -66, 126, 73, -24, 96, -117, 94, 103, -121, 1, 85, -109, -2, 103, 1, -68, -23, -126, 4, -53, -105, 27, 60, -37, -111, 32, 2, -49, -17, -101, -124, -42, 102, -38, 35, 70, 69, -128, 83, 14, -14, 93, 70, 88, -74, 103, -9, -112, 95, -63, 87, 121, -120, 111, -7, 72, 35, -13, -67, 103, 100, 77, -53, -122, 26, 115, -50, -19, -118, -55, -33, -112, 72, -10, -118, -20, 88, -15, -12, -80, -107, 27, -95, -102, 34, -40, 107, 52, -9, 101, -1, 71, -124, 45, -124, 126, 68, -46, -102, -5, -20, -72, 15, 57, -21, 78, -46, 88, 21, 36};
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
    msg.setTimeStamp(0.439952932021494);
    msg.setSource(46282U);
    msg.setSourceEntity(226U);
    msg.setDestination(41225U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("SSZUIUWFVPTJCVFAGLZSONJDQOBHACJZGJPUWRYKURCACGLBKE");
    msg.plan_size = 51039U;
    msg.change_time = 0.5353382547147485;
    msg.change_sid = 55923U;
    msg.change_sname.assign("RFVRYBHTWXVNRNTYITCYZGBIMEMCDMJQFFIHHGLMKYIRCLTLMGKSXOUGZELXZYGILEARLJQYTOJTYAOSSADARHGGBPKVTNXWHHJVQVZNIAXPHCMDJSOXUWHWPIXCAFEUDSDZSEFJGWNATPVTYEUCZALQKFNKFJJZQKRYSDOIDVQFNPVEPSOXMNLOJKCFW");
    const char tmp_msg_0[] = {105, -65, 116, 9, -37, 46, -53, 20, 49, 63, -30, 101, -26, 93, -61, -41, -19, -16, -32, 75, -104, 46, 51, -29, 62, 111, -10, 70, 31, 112, 73, 80, -100, 75, 6, -54, -78, 46, 6, -75, 120, 93, 123, -5, 125, -28, -40, -115, 124, 115, 60, 47, 20, 115, 78, 120, 116, 104, -96, 25, -119, -100, 52, 36, 94, 56, -63, 65, 58, -13, -123, 83, -79, -5, -61, 29, -124, -53, 62, -27, -78, 37, -11, 34, 102, -92, 104, -90, -37, 83, -36, 116, 124, 23, -88, -34, 95, -112, -120, 34, 120, 69, -25, -87, 115, 68, 60, 93, 42, -51, 71, 33, -113, -40, -99, 42, 21, -76, 21, 2, 21, 39, 17, 84, -35, -25, 107, -111, 56, 111, 78, -101, -111, -121, 3, -26, -97, 54, -22, -23, -119, -70, -41, -31, 108, 118, -61, 37, 28, 12, 102, 126, -75, -76, 17, -22, 45, -106, 16, -84, 70, 44, -124, -57, -64, -27, 66, 79, 34, 105, -2, 72, 105, -80, 101, -51, -93, -68, -58, -87, 57, 18, -127, -64, 2, -92, -110, 101, 120, 14, -86, 53, -7, 67, -81, -18, -117, -86, -117, -3, 84, -53, 81, 66, 118, -16, 78, 35, 42, -9, -52, 72, -100, 14, 16, 14, 63, -71, -102, 23, -37, -29, -35, -10, -32, -111, -10, -21, 16, -118, -122, 11, 44, -17, -20, 124, -105, -43, -100, 111, -100};
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
    msg.setTimeStamp(0.5440858793523385);
    msg.setSource(12985U);
    msg.setSourceEntity(179U);
    msg.setDestination(33063U);
    msg.setDestinationEntity(146U);
    msg.type = 194U;
    msg.op = 139U;
    msg.request_id = 46962U;
    msg.plan_id.assign("MMAGBNTLXGZPRUGPCEFDZAYEMQBMMGHUKZCSPVHWROWQDWWXGFMCUBXSWIBIJUXEJJNBCZYCHCEEDACPVAOJAKJBHTUWPVOVLZATNDITPQQQNGZVPVKIJPWTQNHXLNWOHSBPTIKTFAEFDUFZTYFSSIGMCQJIOFCBVLWLMRKKFYLNRDTUCBNKQLQRHLJFYUXZPVLMDBOYVDEYNGLORSIOUNKKHWIZZXXJOYEXDSARXAE");
    msg.flags = 28916U;
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 194U;
    tmp_msg_0.level = 49U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CBTTHNCPKDNZCCKAWEXQZLXQOOQPUMWFILHCCMGVGBART");

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
    msg.setTimeStamp(0.84715187639081);
    msg.setSource(24559U);
    msg.setSourceEntity(126U);
    msg.setDestination(26677U);
    msg.setDestinationEntity(197U);
    msg.type = 148U;
    msg.op = 48U;
    msg.request_id = 40264U;
    msg.plan_id.assign("VDRXTYCXVGHCRMYACCGQOPIYNJOOSTKY");
    msg.flags = 19421U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1594614711U;
    tmp_msg_0.start_lat = 0.23777037359757458;
    tmp_msg_0.start_lon = 0.32519678064585655;
    tmp_msg_0.start_z = 0.25545821138649316;
    tmp_msg_0.start_z_units = 112U;
    tmp_msg_0.end_lat = 0.20096458831405395;
    tmp_msg_0.end_lon = 0.16119767501281945;
    tmp_msg_0.end_z = 0.4053067049956569;
    tmp_msg_0.end_z_units = 178U;
    tmp_msg_0.speed = 0.6513472220772781;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.lradius = 0.8272575635339754;
    tmp_msg_0.flags = 6U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BJITRIUZKXQPXOVRAHAFPOPHKSADWALYEBANJJDMRMFQEYJFQNDHYFECGGYWFUPDPPDRHIHLGLMSUWEBYTMHMPOUAIVEFHDGXRZMBQAIHUMCYWI");

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
    msg.setTimeStamp(0.7329250992233595);
    msg.setSource(29563U);
    msg.setSourceEntity(236U);
    msg.setDestination(3381U);
    msg.setDestinationEntity(237U);
    msg.type = 229U;
    msg.op = 80U;
    msg.request_id = 3418U;
    msg.plan_id.assign("SECOMZNBOWOCHQGOZVSEMIPBUUJQYOVINCXHNQVHVFYGHLXZHFJF");
    msg.flags = 6223U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 42457U;
    tmp_msg_0.plan_size = 1452105676U;
    tmp_msg_0.change_time = 0.823551606334697;
    tmp_msg_0.change_sid = 46094U;
    tmp_msg_0.change_sname.assign("OMYBIQNUXOSRBFPXPKTMAPMQZKIMZPJUEWUSEHFLFZRVHSGHGNHGTUNUAGXNGCJMKCOYKSBJTLRPEQADTMIHUYRZOYEVMVQWZSOKNXESDNGMIFEEBRIRGDAHZLEDRTSQXVOCNFZYYWNDWHYPXGORATLGJJDFVZVHLVQCKTXWJWJJKFUGIUWPABTAOBKTCFCCLHPQNAVFWBREUZSASCXYKRTWLLBLKDEN");
    const char tmp_tmp_msg_0_0[] = {-125, -76, 84, 121, 23, -14, 7, 79, 72, -29, 80, 0, 118, -27, -127, -45, -58, 22, 109, -36, -41, 62, -18, -18, -56, 35, 88, -20, 26, -105, -54, 95, -15, -75, 39, 48, -54, 124, 53, -16, -23, 20, 104, 90, -89, -117, -86, 117, -113, 97, -63, -38, -104, 39, 65, -56, 114, 14, 120, -25, -37, 46, -33, 110, -38, -69, -78, 9, -103, -96, -117, -110, -44, 98, 79, -114, -114, -66, 117, -105, 82, 120, -102, 117, -3, 39, -54, -58, -80, 8, 38, 122, -101, 67, -56, -109, -46, -88, 93, 126, 68, -118, 126, 62, 63, 92, -53, -108, 21, -4, -1, -23, -32, 86, -121, -125, 30, -62, 65, 2, -110, -85, 76, 80, -32, 104};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("SGTALTVCOXGSVHBNPWWQKINSSUAJQXDEQXRRGIWKNKSNKBDRUXJWWBLCQLDCQWUVXMWFBIIXMQZMEUNSEYNQUEKXTAHHOJVZLCZBZDOSVPTTGQLBDKUQKYDMRFEVIMZXLGSSBVJWPEJJVTLHKBOCAPMYJFCJZBACCJOIOREFRTHSRYCVZAFLHPRYDKEPDMNRTLZKYYQANOFHPUIXEGAUFUHRBHNODTGDFCYWOMFGZPIUPEMJIGYYPIFVTXMO");
    tmp_tmp_msg_0_1.plan_size = 44533U;
    tmp_tmp_msg_0_1.change_time = 0.8287382244371304;
    tmp_tmp_msg_0_1.change_sid = 45057U;
    tmp_tmp_msg_0_1.change_sname.assign("PRCBZARBRHZDYBGBNWIXWLUFXJPQMAYQ");
    const char tmp_tmp_tmp_msg_0_1_0[] = {-73, 30, -68, -54, 61, -85, 22, -66, 120, -71, -71, -39, 0, -7, 107, 3, 123, -106, -124, -71, 107, -41, 14, 26, -3, 126, 21, 8, -26, -78, 33, -99, 90, 117, 67, -109, 50, -79, -81, -24, 113, -2, -108, -58, -63, 99, 57, 111, 65, 7, -5, -63, -91, 55, -82, 100, 70, -38, -78, -41, -113, -128, -66, -115, -31, 126, -107, -63, 75, 65, -25, -1, -20, 38, 0, -26, 113};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WZLHRKBLUXWRFPZLTVNANEOLBEHMLRGJRZZDABCWAUIBQFPXOTXMJOCBYQDLGYIWZNTPSRYVBNCLMTSHPLRCYVDQGVAPZXVSNIOGEGXUFSIEHOMSPOMCWMJLIHPXPYCRHTMTUQASMGMIYUQFHHKGSWTFJDQDEYZIDFDQABADSPUKYUBHOWQNGVIKTUKTOWGQNVIGFKTJKVRJEKYRJNEZVERF");

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
    msg.setTimeStamp(0.4546661645622093);
    msg.setSource(21393U);
    msg.setSourceEntity(74U);
    msg.setDestination(29836U);
    msg.setDestinationEntity(208U);
    msg.state = 239U;
    msg.plan_id.assign("RIDWJFLSAWJEDMQFZRJUSRQHFKVBOKX");
    msg.plan_eta = -831692460;
    msg.plan_progress = 0.029366555178800158;
    msg.man_id.assign("UVTPWYDPIBUPQCRMPYIUFBOXDWNMVDUKRQEQJIAQVAF");
    msg.man_type = 31526U;
    msg.man_eta = 676033414;
    msg.last_outcome = 247U;

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
    msg.setTimeStamp(0.7394671808732337);
    msg.setSource(19401U);
    msg.setSourceEntity(98U);
    msg.setDestination(62506U);
    msg.setDestinationEntity(230U);
    msg.state = 60U;
    msg.plan_id.assign("KZTWKTVYTHXJNIJAZYCDQJVTWXZBPFWQWLHYPDYYANOEVEINMEVDUAXSRXBZABTEXZLUJQYJGSWUMURBDOPLDBKPRILGHLLLVNUJQDBKCQJOUSLCDPCYDBSSSXKRPFZFKCYIUQVOJKOGMUEUHOIPTZEWCMMTNEIQAZIJWCHNCMXNSMLJRZKRGCEQ");
    msg.plan_eta = 549353070;
    msg.plan_progress = 0.2368357259860553;
    msg.man_id.assign("KJWBYSCINFIQDZNALYCZIWMSTYDVPQHCZM");
    msg.man_type = 13981U;
    msg.man_eta = -2113314484;
    msg.last_outcome = 130U;

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
    msg.setTimeStamp(0.21729248548480828);
    msg.setSource(1805U);
    msg.setSourceEntity(156U);
    msg.setDestination(4787U);
    msg.setDestinationEntity(187U);
    msg.state = 53U;
    msg.plan_id.assign("SIFWWRFLBWHTKBPBQWVYYLOSOMSMWLKSOEDFJFESBGLJZDLAQIKGCWIHEUCUIBAMIAEDGQVPXHZKYDJNNRAMFRQXOOAAYCQXNQPUYOCENYXYTKZDKKTZBXLGPZAJQDHHTNURYWLZLJNAJQTJGIEVGIVTMXOXHJHRRCBCCTTFKGGUOSSCKPGNNRMFNWYFITMUIPPUFLEPDVZDVQVOUBCBSWSADNHMU");
    msg.plan_eta = 1881435402;
    msg.plan_progress = 0.25535788643338275;
    msg.man_id.assign("MAZGAUYJUNWRDXXXEYKDYJKDKHZAUYZECRDESOZIXZGFSTPFQBTZMICOGSPAOVFFNFEEZTHCSCBGVUMZJAULQXJATMNGRBQEPUOVOGDJEONXULPDGXVPWCCNCKRKBQCWECLBCBMKIQWHJVALGSMRAGNPKBSUTIXFMEJHOIFYFZHEWTJYSLVYSMLQFJTIWBDSIBMSTHQWYHQIPNLOUJVRWGVLLPMQVHRWDNDOVKATKXTXFYNRHI");
    msg.man_type = 1859U;
    msg.man_eta = 995574599;
    msg.last_outcome = 55U;

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
    msg.setTimeStamp(0.7326797074428504);
    msg.setSource(44861U);
    msg.setSourceEntity(246U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(4U);
    msg.name.assign("WRIUULJCQKBGOBWHXTQZHFZDYYVEVIIRGZRWTWIOKBEXOSYVWBVRLGCUHDNKPZLWAPOJRLHRKEYSDMASXQTZNUAEFNPOJAKSUAGNCWMEZNMIIOSDZGJGXXFLLPUMOZGEQJOMQLJBWBFAMT");
    msg.value.assign("MEGKYEOGZPVCQMPWIJYVHGUBKVSBRARHNSCSDXKAYCEENPWCQITYHCEAXLWUZVJEH");
    msg.type = 63U;
    msg.access = 91U;

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
    msg.setTimeStamp(0.6706610325151727);
    msg.setSource(54585U);
    msg.setSourceEntity(95U);
    msg.setDestination(34166U);
    msg.setDestinationEntity(93U);
    msg.name.assign("WZUGYYSPMAIJORFQZDMDOGXKPCANQWXYPGHZQNYUGFVKBEBJDDXORTALUHYWOQVGEUTBBSIOKUZHTWCZWMOPAVQDSQHPYFDCLNEJUZQLLWJBXNJFTOSSSXMBQPKRPEKEIBLUUVPR");
    msg.value.assign("MGTRLFTAIEPZGRLOEQPJANHEPOFNAIQPTPSMVPBWFZBBLMCVJMQCBUUOSTIEBSBFWXJOQQYULCKNSVKRUQQREKRWTQOCSGFYYLJDRGJMDQHUVDCTDEDL");
    msg.type = 244U;
    msg.access = 41U;

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
    msg.setTimeStamp(0.6272462156699087);
    msg.setSource(14023U);
    msg.setSourceEntity(199U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(91U);
    msg.name.assign("LDCRGOHYDDWLHXQSDKWGGPPLKCWJTPIDDNRIVUUTAGMUNFARVNSKOEXTAMMKJLBQUDANWQQIVWKKPCSMZHPNTYFMFWPUCOBJPNUWALFFRZLCSIWEYISYEVEQQIJXOJQVXVPBRZTGGUAGGJHZOTRK");
    msg.value.assign("KRKIPCJYBHFVSWKFHWQLKHJNRUNZMADTXHKCECGTMPVXGMMQNVTJVFLUZVATBLWZIEDCISPFVSJEFOHZLXPPJXLNLYPGQAPNSYYQPOBEXDEHIRGBFSMSDXAMRWIJWERGGODIDBRBWXXEMRPZYAQHOVKULEOTWUOYCSYIDQIUCNXERVMHUIEPONKATVZLSFAZMKBQFWUGQZOCUULKAQGZKWXT");
    msg.type = 12U;
    msg.access = 66U;

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
    msg.setTimeStamp(0.8258392982195653);
    msg.setSource(30118U);
    msg.setSourceEntity(154U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(147U);
    msg.cmd = 197U;
    msg.op = 51U;
    msg.plan_id.assign("WCRHWMCTGMRPWPETIAXJJKRZRPGMKUFECEQNUSMWXCOLFGCECQYI");
    msg.params.assign("BOXLVIEXIJAYEFHULNGDFEVGATPKFCUXTWIBEBMGLSWSQMGSGRKJRJSITYNZOLZETMHDYKEGOCUHJQQTFZLPMWEPPUIDCODQTQUBGIWJVSMYAQMSCLSENZQGVFVNRTTCGWOLUWHBLVMBCUNBFCHAAYVJFQPDUXIVKFFVWDYCXRHPPRHAKIWVJL");

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
    msg.setTimeStamp(0.52743971129941);
    msg.setSource(6633U);
    msg.setSourceEntity(174U);
    msg.setDestination(29495U);
    msg.setDestinationEntity(79U);
    msg.cmd = 252U;
    msg.op = 26U;
    msg.plan_id.assign("SYEVVCGILILJTAWSLEYZPGKVIEBZKD");
    msg.params.assign("HGCGDKHGEBGFEAPBPJEFPKCMLDSLYOKQTPRYKMJONYFLYZFNJRXMFXDUPMVYZCZGUXUXZPASTVZLHOLJNPHQOIQMYAJGDJSOCU");

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
    msg.setTimeStamp(0.2468920437750498);
    msg.setSource(12394U);
    msg.setSourceEntity(126U);
    msg.setDestination(23176U);
    msg.setDestinationEntity(36U);
    msg.cmd = 146U;
    msg.op = 75U;
    msg.plan_id.assign("RGBAAJHAOXFMTYWHCFRXEFRKGHODJVLTYDLIRSDSCJPCGPEYJSZKXABBYJKXLOBQCDFNWFNHQJWVZSHMGZTDVQLWOOJKMXWZUVQRINZPGPMUVKTOBIPFVZIEHPNIJSPRYBSVOFSUHQFEFXEHTSIRG");
    msg.params.assign("PHVWFFZWJMZIHLSXCDNZASFOBIETIHQDVSUXGAVQBWOHDZNFBXWJTKKBNGWQQAK");

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
    msg.setTimeStamp(0.39862826939208584);
    msg.setSource(53426U);
    msg.setSourceEntity(217U);
    msg.setDestination(24033U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("NGRNVIVBDIMEHSMVWZIKCLJDKFLOCTXCTTSMCGRGPA");
    msg.op = 68U;
    msg.lat = 0.289541844723738;
    msg.lon = 0.6480377108062209;
    msg.height = 0.11759581525368212;
    msg.x = 0.9544673586579648;
    msg.y = 0.06415069494105863;
    msg.z = 0.7377394012502865;
    msg.phi = 0.962610667601635;
    msg.theta = 0.44014628632046937;
    msg.psi = 0.24521596671080736;
    msg.vx = 0.4243669307411514;
    msg.vy = 0.8993809286878303;
    msg.vz = 0.6386732771849564;
    msg.p = 0.3814784278603519;
    msg.q = 0.8237259630443252;
    msg.r = 0.4921892022488842;
    msg.svx = 0.192406911299408;
    msg.svy = 0.04405433207600673;
    msg.svz = 0.05836131241630316;

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
    msg.setTimeStamp(0.5425058899551778);
    msg.setSource(7893U);
    msg.setSourceEntity(84U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("HFADLHGHKCZMBJPAPNSYTVTAGCJ");
    msg.op = 131U;
    msg.lat = 0.7072710095609611;
    msg.lon = 0.5325122716178345;
    msg.height = 0.9675187766056214;
    msg.x = 0.9245287242465018;
    msg.y = 0.8146173281677843;
    msg.z = 0.47581391748384705;
    msg.phi = 0.585718355428198;
    msg.theta = 0.431843205749897;
    msg.psi = 0.5756424675984846;
    msg.vx = 0.6336500413572634;
    msg.vy = 0.7136154022994493;
    msg.vz = 0.9311617741966605;
    msg.p = 0.16175078549230082;
    msg.q = 0.8853944392958428;
    msg.r = 0.3568096130793206;
    msg.svx = 0.11388810213877709;
    msg.svy = 0.613284125208492;
    msg.svz = 0.4236700298537144;

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
    msg.setTimeStamp(0.3816980165792182);
    msg.setSource(61146U);
    msg.setSourceEntity(191U);
    msg.setDestination(16351U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("OSVLNCWIWFHDLGWBONTXQEHVBKLNEMDCHVRARRJUIZVWPGRRDMNRMDNZXSQ");
    msg.op = 215U;
    msg.lat = 0.32182490032506483;
    msg.lon = 0.8442815635940893;
    msg.height = 0.13545491170114277;
    msg.x = 0.12564950490057913;
    msg.y = 0.09143236193874937;
    msg.z = 0.7507080434987776;
    msg.phi = 0.9628905402828444;
    msg.theta = 0.1669901128626442;
    msg.psi = 0.7906106379292134;
    msg.vx = 0.9659097455083496;
    msg.vy = 0.8038305516043077;
    msg.vz = 0.9079332891804589;
    msg.p = 0.20900599220129024;
    msg.q = 0.739567516073356;
    msg.r = 0.8953215941775182;
    msg.svx = 0.366774083287989;
    msg.svy = 0.966300022540644;
    msg.svz = 0.6813128620713776;

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
    msg.setTimeStamp(0.427206622605817);
    msg.setSource(61813U);
    msg.setSourceEntity(67U);
    msg.setDestination(60268U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.6066690835484999;
    msg.lon = 0.5502910505924099;
    msg.depth = 0.95351234432419;
    msg.roll = 0.025810799393945483;
    msg.pitch = 0.45283664665617285;
    msg.yaw = 0.42229465787434806;
    msg.rcp_time = 0.01794982872540407;
    msg.sid.assign("XGYIFKTLQQMDBMHHCWSORVDYHFGXEKJCS");
    msg.s_type = 13U;

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
    msg.setTimeStamp(0.48090308073713484);
    msg.setSource(10828U);
    msg.setSourceEntity(38U);
    msg.setDestination(27962U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.582901183591545;
    msg.lon = 0.33171964870038606;
    msg.depth = 0.18101391886865648;
    msg.roll = 0.021956198255534076;
    msg.pitch = 0.49038809669905803;
    msg.yaw = 0.6180812217172877;
    msg.rcp_time = 0.3349540154820181;
    msg.sid.assign("ADBDLHSYXARCSNHLTBBYD");
    msg.s_type = 151U;

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
    msg.setTimeStamp(0.1939322217048156);
    msg.setSource(39716U);
    msg.setSourceEntity(7U);
    msg.setDestination(48976U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.31773242256916523;
    msg.lon = 0.9721906269844064;
    msg.depth = 0.8006671160226153;
    msg.roll = 0.0027447810612325485;
    msg.pitch = 0.7298500975852745;
    msg.yaw = 0.44363512643622405;
    msg.rcp_time = 0.12393250093610209;
    msg.sid.assign("AYLCDRIOYJBLCSFVXTECOIUEWBJNMHMVIGHBFKSEJYXOPUVMKXYGKGJOPVBBDETZBCXKNNC");
    msg.s_type = 157U;

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
    msg.setTimeStamp(0.24805504777448728);
    msg.setSource(49438U);
    msg.setSourceEntity(6U);
    msg.setDestination(6738U);
    msg.setDestinationEntity(36U);
    msg.id.assign("DGGOJEHFPWXMMNUAJSKQBCTCYZJMHKJZPKERKLRWG");
    msg.sensor_class.assign("ZWGJAMZABUWZAQITBLUNESSSAXPRDPAVJNQKHTHBIRYVDWZDQIDFUYBVSOUZENLYMMQLYIRQQQNXPFDRUINGIKWLVYNCMXHTOUH");
    msg.lat = 0.1983512976299675;
    msg.lon = 0.5940002936841903;
    msg.alt = 0.9878278363945907;
    msg.heading = 0.07079756267554882;
    msg.data.assign("UGLCCMPVAGVJLWDLOPPTAFILYWRFTSVFJSZEGJNZCHAXFRMOWPBTOXVKPMUIHRMSDUYCKMASSGULJDNOQWXEQ");

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
    msg.setTimeStamp(0.6347468122433231);
    msg.setSource(1888U);
    msg.setSourceEntity(172U);
    msg.setDestination(7528U);
    msg.setDestinationEntity(86U);
    msg.id.assign("ZUGCTIKIBXWLYXJMAWIZISVNZJOEUOIKWOKUNJBDQFGVZOXAOXCMEMBPYQQCEEZDYCEWYUDKTSQKWPYGZLWLCMDQWVBTYQ");
    msg.sensor_class.assign("IQHOPJNVYQUMTBFZIAXRZFBTESPGMWNQDFABARKKAUABYVTHTLTWRCTGBJDSTPVMXPDKCLMEJMR");
    msg.lat = 0.3302109329015004;
    msg.lon = 0.1214476969803383;
    msg.alt = 0.8113206981198638;
    msg.heading = 0.23950109970790967;
    msg.data.assign("EIUKPZNSYWGDMCHTBRFJZDLBMTSNTEUWNTPEGAQDOGNYQBUSDKTADSHUAVIAVXVBMWOXHPKLQWVUJYVIOYNITORBIFEMEAWLKBRCQGRLCDNXOBACMEXYJEUXVNHLJTHKPRYPJSBSJKZTPHQQKSJGXJIOZLWOVZZGSFEFYHP");

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
    msg.setTimeStamp(0.6118370670392749);
    msg.setSource(9284U);
    msg.setSourceEntity(29U);
    msg.setDestination(41016U);
    msg.setDestinationEntity(74U);
    msg.id.assign("BIGAUFNJHTUDISKNPLVLAKJFMHEPKEBSYODMSRQPPWQAPZEPDHVC");
    msg.sensor_class.assign("MBYNWBGJLSIRIMADQXWRFYZMBVAIELSP");
    msg.lat = 0.9363737909300883;
    msg.lon = 0.4202070204961157;
    msg.alt = 0.9584834824588998;
    msg.heading = 0.0958761402952959;
    msg.data.assign("QXAZBHMSVEWIQLMQJKPFUR");

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
    msg.setTimeStamp(0.6303120521110244);
    msg.setSource(21192U);
    msg.setSourceEntity(227U);
    msg.setDestination(11508U);
    msg.setDestinationEntity(103U);
    msg.id.assign("JBNDABXRSGGKZXZHTKUDQRNVOQERSRPMQICFBLEQHIKIWCRPDMSWUPBEUSVRVXCXWAVWWPVJVRZKGVXLQYGHRTXSMHNNNHGYCFLPGJZKACOFZUJXUDTCQKPYJY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LQASBKKCUTJAIBXXCNPCDSVOJKANYRVPWFLFFHSHMZRISNJLDERMGFBEWPTMHQSTDIRCPWAGZHXRMWZTTGFEDBGGTPGQCOHNWBEFHOXRZAYWDUSBWQHPXEJNOQSUTXMGGBVCVSKDKLVVUBBVWRCPQLGFJUEFPZELEHJOPYUCHOUPITKMMTYEFQSZAXQLUKEYNOIYIYDZNLTYLLHXXJQYVXAMGZDSINKVNWDAW");
    tmp_msg_0.feature_type = 207U;
    tmp_msg_0.rgb_red = 99U;
    tmp_msg_0.rgb_green = 37U;
    tmp_msg_0.rgb_blue = 230U;
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
    msg.setTimeStamp(0.4273997526170791);
    msg.setSource(53817U);
    msg.setSourceEntity(26U);
    msg.setDestination(57916U);
    msg.setDestinationEntity(232U);
    msg.id.assign("AYODBSSUXVZYQRXKJBILWZTKQYEIHVWSNHPMQOCBIDGSCVKZEEIHGVYISMLJRHDMTJGZOXFBLTSRQXZGGOUELJJNICEBFKAJRGNSNWVHRSIKOBQTFUGONCCMOAJRBEVXOAQHZUJWRYCMDQDLKPZDMSYMPWXQUPEXFT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WSYJVKJVPJKLEWOCRTOZUU");
    tmp_msg_0.feature_type = 101U;
    tmp_msg_0.rgb_red = 101U;
    tmp_msg_0.rgb_green = 153U;
    tmp_msg_0.rgb_blue = 163U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5464100133060925;
    tmp_tmp_msg_0_0.lon = 0.7843978053188527;
    tmp_tmp_msg_0_0.alt = 0.22416061628635253;
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
    msg.setTimeStamp(0.22388780468369895);
    msg.setSource(32104U);
    msg.setSourceEntity(206U);
    msg.setDestination(52706U);
    msg.setDestinationEntity(3U);
    msg.id.assign("EVXAQQHOHFGRWZTSLFQAOPZJDXUVGCTFGKGTFDVRIUWAYZKIZVDBORPANKINGEPFUJQNBCBSPZBNUJTUGEPXHFWRBVBOALMWLYMOPFJNUVXCBEHLZLTUXJXYPHKBXIIQQCSCLSCQPYDFMKKJERARECWSNMAJESDYDKDNZOQGRLFHIDRTSBUKGCAAMLYJVINKZOCWMNMPPWRJGJQUANIZTSIVCEVZMEYXTXOMWSUYHD");

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
    msg.setTimeStamp(0.6066430504439122);
    msg.setSource(15155U);
    msg.setSourceEntity(12U);
    msg.setDestination(31354U);
    msg.setDestinationEntity(38U);
    msg.id.assign("BYAXHGYDGDDUIBXLIRUCFZNUPLAMKOWKHSECAHGRAFDGUINUNHIIFQJGBLFLSMRPDYYVBVJRFPWCJORXCWKBGJOHROEZQDIDOHHTBEYEPYUCWDTGQQQCSVOULQVNMABSPDLZNUACRRBRJSXXMZMPKQNIVRFLMPGPHVVFJLJOMWOHYGZZXZBJTYQUOEQFPKNDTLWTI");
    msg.feature_type = 55U;
    msg.rgb_red = 112U;
    msg.rgb_green = 26U;
    msg.rgb_blue = 28U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8740656755099228;
    tmp_msg_0.lon = 0.0411163353737346;
    tmp_msg_0.alt = 0.28451008641169384;
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
    msg.setTimeStamp(0.48167129180759816);
    msg.setSource(13147U);
    msg.setSourceEntity(31U);
    msg.setDestination(53964U);
    msg.setDestinationEntity(101U);
    msg.id.assign("IMISLJCNJDDTTQFKPBFWSDIZSFUKEEBPDEGDPPTWKBKXSAIUNLORERYEUVOXXARBMIOAHABPJGFZDSFUENGZTCVHDLNQXYSJERQTYXGCKVZJTXNJIRDPKWACWFOOLEDRGAHEGHYTLTCFHYNLNOPMUMQSMVCNKPBBRFBUCXORJTQMYXYBVUKVWPWISGMIKWISIZCG");
    msg.feature_type = 127U;
    msg.rgb_red = 14U;
    msg.rgb_green = 7U;
    msg.rgb_blue = 155U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9191304085843857;
    tmp_msg_0.lon = 0.27292607097907473;
    tmp_msg_0.alt = 0.9349589429611992;
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
    msg.setTimeStamp(0.635544884098476);
    msg.setSource(23399U);
    msg.setSourceEntity(61U);
    msg.setDestination(60332U);
    msg.setDestinationEntity(250U);
    msg.id.assign("BMYUYOKJPMFJOYPQHNKLOWPCMSUPAHRKFGLQZYSCXZZTNEZDJRCDBHVOYAGVDCUTTUWRLBVVNDAEAZAEOWAIELEJPCDHINWAKGBFLBXLQSJAXNPKCYHALNDIFZFRXGLBYCWQHXIWKJRVRYQSIISKQFPTKRFJWFFVSESZSGOTGHURIMKMLIRFUXTYRQPWNJODEPUUGVKXQGMCQOYTVZUMOJGITMVHQ");
    msg.feature_type = 120U;
    msg.rgb_red = 166U;
    msg.rgb_green = 175U;
    msg.rgb_blue = 217U;

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
    msg.setTimeStamp(0.49613839951556093);
    msg.setSource(38698U);
    msg.setSourceEntity(111U);
    msg.setDestination(56856U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.3072414257030097;
    msg.lon = 0.9873764588153805;
    msg.alt = 0.27966765304826025;

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
    msg.setTimeStamp(0.04739781022808054);
    msg.setSource(21528U);
    msg.setSourceEntity(16U);
    msg.setDestination(32343U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.5315657101038146;
    msg.lon = 0.33075395536765195;
    msg.alt = 0.29685613419156354;

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
    msg.setTimeStamp(0.8803971185002332);
    msg.setSource(52088U);
    msg.setSourceEntity(246U);
    msg.setDestination(22251U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.3204554022757552;
    msg.lon = 0.5641484482133156;
    msg.alt = 0.31624891986543213;

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
    msg.setTimeStamp(0.8184774763665534);
    msg.setSource(20080U);
    msg.setSourceEntity(33U);
    msg.setDestination(56023U);
    msg.setDestinationEntity(186U);
    msg.type = 25U;
    msg.id.assign("FBTPCVWPDFKBCRIQYHFTGVREBMXLYOAMXKVZRIUTDJNGEGJWLFJMOTCXQULJGJS");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.9112516054994576);
    msg.setSource(48233U);
    msg.setSourceEntity(65U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(183U);
    msg.type = 89U;
    msg.id.assign("CMKTIANQDXBORNMEVUQORFVXCBTUJLLQGXOKSUYSLEQODIIUQNZBTNXBGFKPMUJPEKEXDOCUZQMYEHBNWRJZRKHQEZZSHIARANZQNEVKHLCF");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 108U;
    tmp_msg_0.entities.assign("ECKGPTGAAHYPTOMTFQMUOBQHQMALFTJPDIKPDMEXPIEYHHWQXPQLXSCDFSZQNNSNWWFODGRECNIRYVVNMZJISWQFILILYDMDRXLUTVHVJVLYCOSUPLVMCN");
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
    msg.setTimeStamp(0.055349265002281656);
    msg.setSource(50020U);
    msg.setSourceEntity(160U);
    msg.setDestination(4430U);
    msg.setDestinationEntity(25U);
    msg.type = 227U;
    msg.id.assign("HHTCYJYBHJTOIFKEAGCHIOLJSDEZSRWWWGBWVWCCNERRSLHNJVYLNTDRDDPBNLXCTIXZOXQPOOHELVVFDZYJXTQSOCMKNAAIYMLOSPIELMHUKGIJMVFFNNELXQQUPSBJCDGZZFGFSTKZWVBMFBTMYUKGBPLMYFNBXPDAZVJGNPYQGUZDEBQRPQDQRJBPUEUYHGFFUKSVAODMXKZAXGXNIWTUQRK");
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 128U;
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
    msg.setTimeStamp(0.3217782287758959);
    msg.setSource(62141U);
    msg.setSourceEntity(230U);
    msg.setDestination(48485U);
    msg.setDestinationEntity(123U);
    msg.localname.assign("WQOITJVKRGIUDPMHSCUOEEVMBLLROSYPS");

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
    msg.setTimeStamp(0.8216583184125229);
    msg.setSource(4459U);
    msg.setSourceEntity(12U);
    msg.setDestination(22795U);
    msg.setDestinationEntity(36U);
    msg.localname.assign("NRLUHLQSBGRNXHMQRPRZZNEQICEADIUMXWKJUBJNQZCXZAYGTCEMFVSWWDXDBSJCXWHWIUDGNVUMVRZPVAJFGIOFICTKYFIETZKUMPWVTWKZHPNRCQLELGLDZCTVYDNNXABOAYTTIGPQSHGBFZUMOSTFOOBKBXKCLECABYYYEMBQHRGYFSJYJSSWEZKANAWPDPQRTFXVLGXUVRABAKOVEVPHFPHIQCWOQSLRLJKDLM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LVMSFKJWQQJGTHXLXDPOUESGVRNMICWZSZOQKEBNSVYDCVYSFJZIQDYCWTHQICYEEOTAVDOQIVQZAVSJMGMHPUNTUTYNNYULPLOYQGTBJECWBFZHEWNPIWJOXYHANNKEBRTUJRLXRWODCWEXBWATMFXYPQGBILKBSARDGDPORQHFKRTCICPVOXFLJLFZULSGGVJCDSZWJMAZIDXGOUXAFEMPGBBFTMAAXFAULZBHYKRNENIZKCSPPKURMHKMKD");
    tmp_msg_0.sys_type = 31U;
    tmp_msg_0.owner = 48012U;
    tmp_msg_0.lat = 0.004983949778117114;
    tmp_msg_0.lon = 0.8745643059177073;
    tmp_msg_0.height = 0.1872972988408117;
    tmp_msg_0.services.assign("LXBWDMELONWWQGGYSVPYAJDTKBAAZFSKQUDTQR");
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
    msg.setTimeStamp(0.09814684990450395);
    msg.setSource(56360U);
    msg.setSourceEntity(64U);
    msg.setDestination(22324U);
    msg.setDestinationEntity(206U);
    msg.localname.assign("LXPKTIFSUZOTUEUCJYKSBNVBBZHBBGZGTQCSZYVQLMBQSORYPAPXKXFKFZLQAWLEZCASWLZQTZGIDYJKAETHNTYJKTJJOFFVSUVGCGMZXSVRXYAOOSCXWLMQRPUVUQNIAJRRPNEPKBXDJXQMHHHPCARIWIEEMSNNFNDYUEUUDKM");

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
    msg.setTimeStamp(0.1136222128016775);
    msg.setSource(37227U);
    msg.setSourceEntity(107U);
    msg.setDestination(63997U);
    msg.setDestinationEntity(118U);
    msg.timeline.assign("LZPJWUOGGQEOYWXSMDVXSTAJMRMNJQOKEXVTWFHMOHHBXPWTOYMZMZMEHZIVZEPCAJJUIKUBTCIYAEATKRFDMBQCSXRNNKJZAEBDKBWIWCHOVLQCMKAVFLSHTNOPFIGRHVLOYTCBIDBGLCBQNLXRFYOYAURGUTZDPDEUSYIDFXDQHJUKWLPVQJQNFGBGNZOXJRGD");
    msg.predicate.assign("NCVPJXIKZNRKYBEZFOAVLUBCCFHRAKWQHVUIBECDHMAYMHWKRQJEGSVWODCMNYZC");
    msg.attributes.assign("DXVICKLDMWVVJGNFGXA");

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
    msg.setTimeStamp(0.17308244583307886);
    msg.setSource(54137U);
    msg.setSourceEntity(214U);
    msg.setDestination(41202U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("BGQIVMLAHIEDTHKOHTXCPPPNXWCNIBVVLKHHZMHVZWOKROAKVOKFUFDBAUSFEKNBWSUQAPTDYSQRYPWVGZBLPELIRUMJNDJIDMNWUOBYMACXGBDGS");
    msg.predicate.assign("JFCGOAQNIMBFICFNJIKKILEWDSQYUKJXXWTPPTRSLQMZRJOWQZLVJPNJPPIGLXSMFBFECVBGERBREOZNAKKDQZUNLGNMRNODKUJRJRHLCCBAMWVTEDTKHUKXHYAOVIOJCYXUADSZHNNHPIATCXYHGFWTPTXULEYMCCSHGGZRIQIKRYSDSYMVPKWCQSHZOUWPSYFWNMAXLABGEVEWTYHEDZTBVEUFFQL");
    msg.attributes.assign("GQKOQMQLBHJATCSMUYEHHYBDJAJOPPZKPNVXVOANPLBLXYSCQXLRIVELKRDXHAJEBRGJMIMNWVDUVEDMMQYFQUKUWYYOPXZBOWZTKFOHDRGOHZEBITTRPRNCG");

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
    msg.setTimeStamp(0.5406278864623418);
    msg.setSource(47023U);
    msg.setSourceEntity(94U);
    msg.setDestination(13983U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("BGAGCTHDBBPIXWDPQOAQUDBMUWFYRLSDDXKIOXYODTHUPPKYKVFPMVGZEGSJRVGRWFYWNJXMNSJUSYUPTAQACHNHOLLPKQKNLTXEBVCFGRIXROCGRYMWBEJXZJDMNFXPDOLKBNBKTVZGFUWBHCQISWZATOQFUCKHUGZ");
    msg.predicate.assign("IYWPWXPTQASKKLNLQXLOJUPQBWERCIZGGDEXQMYOLGYHABFHHRXSTDTUWYKMICFSSDHYBJJELTCBJZWSQCVAITCCYJIAUOEDIFYNRMGZQJUKVRZNBMZWXFQSYVDSACHAMCGVPHPCXWTYXGLVQOSADZMBQUDIEOOFRUN");
    msg.attributes.assign("GBCQPYLKATGADFGLLQIEOQGNTOHTIKBMPUQDLMNCFSLCUWTPRY");

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
    msg.setTimeStamp(0.3193943414432282);
    msg.setSource(4573U);
    msg.setSourceEntity(55U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(46U);
    msg.command = 207U;
    msg.goal_id.assign("GVWLQGOEJKFOAKXELHFXQQEYZCQYNTFJHPZIVUTRMQANJEYZXXSXYFRWQDABTJFWUDBTEMXKDZJGVKFLTGRENKFUPFNLCIOXMHVXMSGNJBMONSQVDFCYKBOHHSVNQLIUZANOULCZRPLAFJZCBVRUBEDIMGPNIIWINWAMECBSKCOJGJBAVPPTAKYRQPKOEMXLYRAMCICRYHYDDOLVSW");
    msg.goal_xml.assign("CQHFYRZHHAUGADEUCNMBNEPKTNPEMYHBTREFAOHMGPJVOZEVCLVVPWCIZMZETMTXIRFDKBHIRDNLPSNHYPZNLQPYWQSWQAWFGKQVUDNPIXETLSRBGAONGHQGMJSCDFUUWIGYAXJJZOUOTLRUVEDJVICGWAX");

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
    msg.setTimeStamp(0.2576825870289926);
    msg.setSource(41121U);
    msg.setSourceEntity(47U);
    msg.setDestination(62365U);
    msg.setDestinationEntity(93U);
    msg.command = 110U;
    msg.goal_id.assign("HTVCHRDBZUZNIFHLRKDHQCFQILEGVZDNMYQXQMRPXWLZAIGMTNHQIUIPDABVTQZJQKLBJHXTZEESQKGWSAPMUOWUOFFWNADURKMXSNOOTTLKHJNXPWNOCDYATIUCMZEQFSFHAMYOZIELYOOGV");
    msg.goal_xml.assign("TCMOGFFDKGIWGFICZXQIFTRBXRQZYSBVXGNPNHWMOYCSTMPUGECYNGJAZKYUUOWULCACDZNZXXJBAPRVMUXEIZDMSSQOA");

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
    msg.setTimeStamp(0.16270100076469596);
    msg.setSource(37390U);
    msg.setSourceEntity(202U);
    msg.setDestination(40341U);
    msg.setDestinationEntity(115U);
    msg.command = 98U;
    msg.goal_id.assign("RNVSRCMGSQYJKJPHYQPOFPNBMUMLZENFWMATWAUIUUJCADBAYKRDHANCFOZZBAXDOENRQLREWSJTDUINPGULERLVXZMACLEDDHKABXVFWQDUVCIXHLSFRJZFMLPXFTGHTVGTSTKGGTOKUZUZVRYSOIQIQNEYMANVQOXXTKIZVHLOAKHJXJIWNGSBYYEYYJTPBDCWICXQFSHVWBXOKSYIWLDHBCTKBDEMUCWQEPZJGMFHECNGMJGIPSQKWO");
    msg.goal_xml.assign("EQYVRCWHYYNURRZXEEFVWUZZBGLABFICFOJFQQMMQDLGGUODYHLLADPULIVZZKHYTYUWWISSMUMBOJTNWRCSJZWQCEMJRPEIUDDKXNUXAITHSOCUTR");

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
    msg.setTimeStamp(0.45957533831947095);
    msg.setSource(3216U);
    msg.setSourceEntity(63U);
    msg.setDestination(55727U);
    msg.setDestinationEntity(161U);
    msg.op = 117U;
    msg.goal_id.assign("ALBFHYYLMVLZPAOQNVHHYTWQFWNEUDGHTXTGQNYBOJKUGJWDDBAIHEMTVRSGJSKHKHHZQDEGCWSCPPFYOUVOSKAWXVUBXBNGIZVGQHCYWGQCWFBILIOKLCLPANRUUHIEJCKPVLJMADNBREUMRGQLUZXCXMZFYXSPEBSNRBWKSBYCNQPVMETJMWSFMPMVQDZWTOPEOLFNOCSKFKICJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ULHEUTDUABNQTSMZVXCINUMVHHOTVQAJARMTCTSFVLZLHCXGVHZFTSLRKIAHWMFZYERKPDRJZPMKJWCTSXJWGMGTGIFKVJPYRMVQXOKBIWJCUOPMBRJLSSGEIBQHN");
    tmp_msg_0.predicate.assign("VDHTRFKLWICHGTZWHJUMEYZRCWFKYBPPHJMAZXXHDGLAIPNTQFYFOEQWHIQBWUVMPAIFVUBXETGQALYNUHOKFRJXPCSZUFOKQKXWEZVTTGJYLVQHGMNEYVAZJLXRWQAZKKNZKIMJZGDNDIEMRAROJINHEDCWRAOLVNESOIHSQZDTQOBUPJLYTYRWNSBFVCNSWJPIKUCULOBR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CQNRCIVCLJBSCIGMVBSHHEHEKUWGCXNRFPUKEKJMTPUJSTVWQKWNLZQXAPJGEMOMBNGJZTRKOCTNZTGJQOWXNMNYOBBRAOIRZNJYTXVXXCYZDPLDSYFVMAGQGLAHF");
    tmp_tmp_msg_0_0.attr_type = 225U;
    tmp_tmp_msg_0_0.min.assign("EWDMDETWHXBXYGEIQDQHZPPIBSKLMTOFEYYNVLHPMDAUNCTGUMJZSBGXLCKKXTZRDBCNICAQQNGRJJYUJCWVBIYMTAQFARJGDECXOSKXNVZLFGZFOXEMNCNWJGYPZVEHPLKQXQYUL");
    tmp_tmp_msg_0_0.max.assign("ZPVEHAHRKJSICOZJSXPEWCUQAYHWNUAAWDSZKLBMPRQPFFQHIHGUJYTLKWBVLSHMRUYXMGKXLDNEPQOZNUOQRTJRHFEYXFDOHUPSQXPSKOBIAPMRWEBJJYFEILILVUQVXYLSNVUCQAMNDNJRFECYDTSIVFZSDQCZBMXDEZOBNJP");
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
    msg.setTimeStamp(0.4219762485796975);
    msg.setSource(36395U);
    msg.setSourceEntity(252U);
    msg.setDestination(22384U);
    msg.setDestinationEntity(22U);
    msg.op = 68U;
    msg.goal_id.assign("MPBSVIKNQRATPOCHSPRXUMWVINNLGSVRVULHAWADHHXGZVCVCBIFAEJBNWCEQJNILAYZODYOKKZYDBJJZWXKYMDSDKZWIFPJKQHNHSLGVTIDHBLKOZLQUQTMUVPFFTWOZRLMZISGMHNQLWQELDZPTERKXMOXELPARYRCSHMTWAUHTCRCABDNICSUYUEKXEUETVQSDFJFPOYCNGKIGMWJFPEGVUFGNXDJZPOQXXGMYTSFRFOXATUYOWJI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AZZGBVCXHYQTTFCJBLQMVJSZKWPFNFCMWYJVSBVBRPCUDGTUZFUXLCGYCEPOZETNYUSTYAQRNLWBHVFHTALPXJUZNEXDOZTEPQHBKWPXKMOGRFIUPXLWQTQXOQXDEJIDYGCAMEQOIWDIBSXZICVNSIPXTVILZGPHUEKSUMDIRRPUAHSBEMKVAKNOAKASCFGORNL");
    tmp_msg_0.predicate.assign("EWBCTYSQJCTJHFUXUUAZGGQRXOFHTCNNAAWVXWIKQPTBOERBJVUVEMFAUEMEYYDFCPHDJOQMPWSBXMRCXVUJIDGSETHXIBWZGTKKLJVLQPMBDRGXJGSLLKKAHIBZLLZWODPPDMAAYDRVFCYRFJEYYFUAKEHCZYOOXIQHQMLIMGCYOTNFLFAMOSYUGJBQTPKWIROHZPFIWBNVTUSTDIRNSSPWKVKQSNNLGEO");
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
    msg.setTimeStamp(0.7647298593258087);
    msg.setSource(38655U);
    msg.setSourceEntity(244U);
    msg.setDestination(6366U);
    msg.setDestinationEntity(76U);
    msg.op = 168U;
    msg.goal_id.assign("IKRALXYKYSPQGECKIRCEXOIGLOTCOEPMHALGDNZLINXVWUIRSUWEUTDNFAHKVDDDPVTGQGSQNZQVHBJDNRCWBHETPGDOBVWJFVNHKOBWMNKYEYBWYEEAMAYZNJBRRXBSRITGSZTYJHOGK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RQJWIAPXTZKNGBTPOZHOXEOPQZROHNWWTXNMFMAAKGBOCKXYJCVDVFRARGDGOBSDJENEGZXMTRKTAMADYODPYLWUPXACHYSU");
    tmp_msg_0.predicate.assign("YDJCNQZQGNDUDHIYRDJOAPFWIJZKBLNQGXPUZXJVMELIXWOFDHVFCUOZCVXHBWOSRGAQKNZPLPRLEDSGMGLMWTQJZDOAENBYIPWXSTPMYOCTFARAZVTCHBWKJYIYELWSPLBRSNSBVRQULRDRMPOUKBXNXWUAHMLOMHVNVSZZTXSHAJIJIDJKQWKVEFBLOFEGSHEOCBTIUFZKGCTUVRRXYPEMCTAAFHXKKNMIYHFACYEQGDUUSVN");
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
    msg.setTimeStamp(0.14697584416600462);
    msg.setSource(5243U);
    msg.setSourceEntity(235U);
    msg.setDestination(6061U);
    msg.setDestinationEntity(185U);
    msg.name.assign("SHCXBYODQCQQBEAEYQLRYOCVLHVTTLOFYUDPYRPOGPSFMDMCMTFLJUXXXDDTRHSKVBGACEXYMMPMQDBZSBUOTHXJRIRAITMDTIBEPBYAOQROSEVYUIPOLFOZJRGNEIWKZUZKRFKZZMVCXWBNPZWFQSANOEHLWMDKQWLLIVRIVA");
    msg.attr_type = 62U;
    msg.min.assign("HGHCRWPNIVWYMSODGPRWYVRZAQYVUXLESCNSVJQCMKHTPMFSVFISQJGENOWNXLCMRIEYZPAEZSTZOTGTXIWQPAYFBJIWYKNLMUKXXHBHOJVXMWNNMGTKKZQJHUCBELAIDKADBCUFAGXKECLNGQIS");
    msg.max.assign("QUYKASZRWXZSOIBMOWJBMHRZLLMUYDNOKVTRXGFFXCLGNDGBAVUNNKLINVPUASNEPLHFIZDRERUFHLBILTIKSHTOEOLWAKWQJUAXINUQMCQJWCBMTWHZPDSKJAQHWEYBEKNLRDPFJGTURJYDXFWITGRZULGHFYFENMBKPYTQBUMEIDMFVZVSSKVDTCCSPCXZCGCAPIHMEX");

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
    msg.setTimeStamp(0.15710923338140814);
    msg.setSource(14198U);
    msg.setSourceEntity(100U);
    msg.setDestination(21331U);
    msg.setDestinationEntity(168U);
    msg.name.assign("LSDWOOOIOFRADMSBQYRCHKHSKIMTYUFKDFXWYTUNLOCZJNEMWBOYRKXYVIHHXXFTDINLVRBZUECAGXHHFOHLLVCLZWMDZSHFWXBJFRDSQGLQBNZYYRCPONFMTKBPYPSEDANQTJAGCINSTBRPAUBLEQJZMHMKRMWGSAKYWPTVQPMFICZKQSGUCVAWNFVU");
    msg.attr_type = 136U;
    msg.min.assign("AFUNRPIXXTZGWOYKMFBQTXGICUANVQTDZFMEQXWZNGJGDSZJEZMGMOBLRHEQZDDZUXIVYRDSUYHTKFPEVDEAWMNFPUYQYURGVYRMSSITWXQLTNWYAHC");
    msg.max.assign("XFIQUIFRJQLZCGEKDHCCZWPQJ");

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
    msg.setTimeStamp(0.4756730832609479);
    msg.setSource(7285U);
    msg.setSourceEntity(135U);
    msg.setDestination(58001U);
    msg.setDestinationEntity(110U);
    msg.name.assign("KRTTLUXPPMIOEFJWJSUTZSYBQTZIUUHIIDLLPMELNYDXRMJXCIXSBXBTANCSFBCLZUAEVDUNRPEGSMIKCQIVOFFPQOIGHEHQNHABSMKBZMJAZKDQRBDJBYTNRHWYRLHGBKMPHRVVHFAWOQFKKSGGRCPNFYOZOPAKLZTSVXYDNDIUQXKLVJLRCHAVEQXNWWJJEVYAPIDGGEOMCOUTSCMCUCJBWMWAOHGEYOFTGDDNSPQRTYKXFYWQAFZJUVWXN");
    msg.attr_type = 74U;
    msg.min.assign("POTYJFERKSQGQYBSHSDXKTNZKFOWSFXVAGCCEQITWZGUTQTAUARSQWINOZODWQNGLHMEPDYUBUMKRKUZNWIWIIDHEBBPIOLVOREXCDPAEXYHJBDJ");
    msg.max.assign("ZQZIOFNHQTBSYXZGPRISYYXDUYKCXCBMWARCDGDBXXAQJDFDBACTQRPCGELAEPKFGFSEFJUVOLVEKAESLZWHYMRZSMTBRQPGNMUKMTNOSWZWQECTGIWKQHSUJNJCNIMFMEDZQNINULAAIDIPJZXCKBPMUGWHVPPAVNOCXWLIUTRJNL");

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
    msg.setTimeStamp(0.36909213204701474);
    msg.setSource(54400U);
    msg.setSourceEntity(201U);
    msg.setDestination(59933U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("HWDOJKTTYNOSUIHOYEHBFGONXEODZAFPJNKERZGJIDDVBJOBNHJHLKVJQFAGAEOMQYNCXYGSNPTPJSPRUXNILQUOAVTPXWCRXUSTGRSXCLTLZRXMVSVJNIOKBKGYCPLVIEVZAUMKHWFFWWFMICJQUDUVLZXGUSGRMYLCBEDCXKMTZIZQYLCJWRB");
    msg.predicate.assign("XBEUYMQNMTPQRJOSONMNVGBNTGGXUBHFVUHRXKSSZEDFXBTAWEADOYJBRHOEAUBQYCZGJRFLMZDWXMUYLTEYMBRREDBHYRAPVVAFJQIMPSLWKXKSQVJWKPNKNOIGTWTCATUPOBKQXHLDCHXCISLLFEAIRNDHNWOMOCYSCVIZODSA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PNQXRIKCVCVDSOTMFCADCGOCURSXWBPGXUEXTRDCSJQBZTHZUFFBASTEFYWWPHWNWXBGEUXPKYBPPAUDRXLAEAVVPYMDOLKNIVSRBKCWOQUHWVMQCAGGSWAFMVGZUVOYLBJFCKLOAXRMDLJLTBQKJGPRRZ");
    tmp_msg_0.attr_type = 18U;
    tmp_msg_0.min.assign("FSIAEPTBXSBRIV");
    tmp_msg_0.max.assign("IYUEPJJXTDYQXPTMLOIWWVOJBKRYDLZKJQAMRPSDMOEPCUKZABSRHNBIDHUTIPULXMSIXUNTKASJIFPGJJMNTENCJFKGWXEKTCQAMOGGRMCWITYHBQFXGBZGALLDPVQYLFGDUIZUONYOSPXDENAFYLRKRWQRHOUKZA");
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
    msg.setTimeStamp(0.26087216420202797);
    msg.setSource(44558U);
    msg.setSourceEntity(180U);
    msg.setDestination(8244U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("LHVMOCPNDNGODOYAGUZSJRKMXGLVZMAJKZPVLCENLWTGKQRHAEEWEIBJYHOQGBSZUFXPUNEIMMJVKTVKNIHZCRRV");
    msg.predicate.assign("ADZWTPVOVGNNVWDNWTFVUWHSWHNUGERQUCKTSZJQGLZRXHNJNTXHEEKYWVXSLQYGKMZFYLFMGLMCVTLFIAHZSYEWLOZIOUCVEWFCAQZXXJRTCYFAFJPMGDGQIIYBMPSIARKEZLBJYUKMDFIMAVXROHKSLKKOOPJOSQCSVORZTDAZBXICHPYALBTUBMTFQXDQQPCDKOJIUHEWGUHUHYQIEAIF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WTWOJHXXQOUHFPVBFBGSROVCLKPLDVHIFYGFATNKFJSNCJKPGYUITBLVOBDXWCDWPEQGBROSJASXMUZANCLVQHXGJTRUJFEGIHLRPRUZPNYBRCKAWZIXXVMBQULGKQXFVZKHVWEOEUEOHEHBDLYNDKNKERSIAMMRBZLNYQDSYNRLMKBUEIGWCZ");
    tmp_msg_0.attr_type = 40U;
    tmp_msg_0.min.assign("WZXHPTGTTHSIATZNLXUDTRJGELIKQBPGQLKMJEXLPXCNENGMGTIRUAHOWQNYKSQYONBBSARGXBAZAYQBAVSVMZKVIAFKKTBXEMANOWMRBDTRYTLWYDXMVFSBRWOWHTYCMDSVZCLUEOWCUXLCQDKMOYCVZCDQIPCFMKKJQCPVRLZQSOWCEEMDJJYVFNGPNRU");
    tmp_msg_0.max.assign("IMMHEDRQLOTCJBCERVYVXHPOXAYXUKYXBTAQFGXUTJKLRTFSAEWFXGGZXOZMMXVSDNNINSHVFRPCWWMWYCZWBNVUMWGQPFMUJQICCE");
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
    msg.setTimeStamp(0.7686062302003442);
    msg.setSource(15523U);
    msg.setSourceEntity(142U);
    msg.setDestination(37911U);
    msg.setDestinationEntity(31U);
    msg.timeline.assign("BOVUKSHIXWMWMLEFFANHKADIWPXDMEQLLGVQXMJFTBYUPATNWUNZWVUGMMFYELRNARJCXIZRJNXPLYZHXPFZKULFJWCTIIFZVCJNJMJIAIXKBEIOZOJEUBOGPRDPGCNHEMHSESAVOBKRTUOQULAYQQRXSQCBJYNSBCYVHLTQQZPTMTYEFVDVODQCDH");
    msg.predicate.assign("SXAJTPJUSMTLTMQMPTRDUNVQCQIYXWUBRALRYTWVVPGYMOBOCHJECQZFNKNRKOHQTIGHUDLXOTBZBEJALNAKNSSFUUGLVYKYFOKRBBDWWUVSXCXVFGOEVMEESHJQDEDMEOCZXFDHRYZFGELKOAGGVIDJPPPCKJLJCEBONTPBISWJQZJI");

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
    msg.setTimeStamp(0.08228297998330025);
    msg.setSource(29431U);
    msg.setSourceEntity(89U);
    msg.setDestination(32956U);
    msg.setDestinationEntity(147U);
    msg.reactor.assign("PYGZRQGZAWAHRVPCFYMOIQAKKDUWMDBBWTOWMAQBEEHAHEJJQRVKDPIUQEDIOHVXOBYHTJKCGUYPNZLCKSWDXALGPRXSWXXCPKGLTAOYWRFNJNUR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JCSFKCXJGHMMVIPMSDJSVBZKIRSQJEYDHGTIDAHJMDPWHNMYYUVXFACNCXGVLRDFUWOQNKVETHKONWEUMSORKDXZPJZXPVLZRLXAIBUIYTGNYLWIKTYQTPLKWBYTJDWHUFPHREWLTMSBUYSZAECQ");
    tmp_msg_0.predicate.assign("GPEBLNAHMAYUDESMBTHLGNYQOPKJGYRLNDFHWZRXCVKJZIQNDIMCLCZXUDMKREAMWIMTUFNOPBARSEHTZDBFAUZAWBQCYSWOMKHVIAQLOKWETBEIPDGKIOJECRPFLQCPIPCIYLAWXYOVVDVWRKZTGXDJZGQPLWHCQXNST");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ONDCGJQXIVLADGGDEMGNENQGZQKHZOFCAMOXFLJYXHORHOZWJJHSCUF");
    tmp_tmp_msg_0_0.attr_type = 170U;
    tmp_tmp_msg_0_0.min.assign("OXYHTJTYVSQNINMOBCTZWZANEGDFGGCRAXHCIZGGPHNVULWAFTTWPUVRNEYQVMEMFFIWDVCYIZVEKMHXSJGNAFLSCIPGRSPKKVEBQZBEKYQHCTPEUCUTKIOBDTFWGRSWYSJEFQYMNDJLPKYIFBPBQZCMNLUFHIQ");
    tmp_tmp_msg_0_0.max.assign("AKJCYTLTMUHXNZVTONWUTQNLKSVCPJYLVHCBZPHFRXSYPSQVXWOWHDSPDRTTHZNNRIQWSNRKYGRBOPSGVIJGDIDBUEKBFXWHDEVSQKEJXUOMQUBPFOIRCKMITEUY");
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
    msg.setTimeStamp(0.17233433809090526);
    msg.setSource(10950U);
    msg.setSourceEntity(71U);
    msg.setDestination(13134U);
    msg.setDestinationEntity(42U);
    msg.reactor.assign("TLSYMNMATZGIZPIDIRHMMOKMWKAFZBXKCKLXNSSINHPXZQAZGTACHLPQDCUCYHHQKINGIEJMOTZFROKVCRVFBWYWUAKISAVCUWRHQRFWTKQSDOQFLFXWFGTGTPPXXGVSPWXGVJXNSMOYYLEDXNYUALMUMNBWJOQYJBEPBTBPFDZRRDCCNSYJBIMAEVUUVKVOJROZYLHSGBCPJHUHDXZJWEB");

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
    msg.setTimeStamp(0.3168221189400898);
    msg.setSource(55697U);
    msg.setSourceEntity(175U);
    msg.setDestination(21951U);
    msg.setDestinationEntity(245U);
    msg.reactor.assign("KEKICEUBMBUCJEQAYPKIMCSWBISQZMVZXFGMYESAFGNBATVKIFKMALNYZLSEARFONYTQLTNJQJADIMNSHOEPWRIMAJOCPXVNGVKSPUSKZTWPJUOGGBXIFDQSXABNUWSFYVBLHJKUWVXPPGTELRKLUGKRCMZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NZPAHBVZILBPKTPPCBMICOKGHKRHEQXM");
    tmp_msg_0.predicate.assign("HLXMAYFMTAWVUWBTKPUGZZSPVXCKQOZKUYULTAVJRNJGCYTXXAFQLUFOTMIUUOTMPYKPGRVEJOWMFDBURDJHSVWHTCZPBZLHYDRRLFOWKSN");
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
    msg.setTimeStamp(0.6762421368072762);
    msg.setSource(25673U);
    msg.setSourceEntity(68U);
    msg.setDestination(20499U);
    msg.setDestinationEntity(180U);
    msg.id = 224U;
    msg.width = 44341U;
    msg.height = 34136U;
    msg.widthstep = 13189U;
    msg.channels = 200U;
    msg.depth = 159U;
    msg.finaldata = 50U;
    const char tmp_msg_0[] = {102, 9, -85, 94, 9, -48, 84, -42, -55, 11, 5, -122, 91, -11, 122, 28, -63, 16, -20, 121, 26, -67, -21, -10, -37, -61, 66, -68, 11, -52, -103, 85, -49, -39, -103, 11, 47, 97, 67, 49, 62, 82, -65, 91, -125, 3, -48, 28, 90, 52, 4, 67, -35, 121, -105, 27, 0, -86, -93, -61, 111, 64, -51, 44, -23, 78, 58, -92, -18, 77, -52, -37, 51, 22, 83, 48, -62, 120, 68, -109, -57, 48, 52, -18, 35, -87, -104, 98, -1, 89, -41, 89, -113, -95, -64, -55, -55, -36, 107, 69, -54, 5, -59, 16, -110, 43, 111, 99, -123, 90, -93, -57, 47, 66, 37, -104, 42, -92, 113, -127, -84, 76, 96, -10, -55, 20, -81, -83, -47, -84, -40, 29, 109, 99, -54, -16, 108, -75, -17, 98, -84, -86, 44, 100, 26, 39, 27, 12, 59, -115, -5, 59, 73, -93, -94, -21, -92, -6, 88, -101, -101, -108, 19, 82, 17, -114, 59, -108, 89, 22, -67, -90, 117, 3, -86, 28, 63, -30, 102, 63, -20, -111, 30, -22, 77, -49, 54, -84, 77, 105, -21, 81, -7, -79, -37, 104, 78};
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
    msg.setTimeStamp(0.7383262702799392);
    msg.setSource(47143U);
    msg.setSourceEntity(16U);
    msg.setDestination(33821U);
    msg.setDestinationEntity(7U);
    msg.id = 82U;
    msg.width = 44023U;
    msg.height = 8791U;
    msg.widthstep = 50837U;
    msg.channels = 44U;
    msg.depth = 173U;
    msg.finaldata = 181U;
    const char tmp_msg_0[] = {-64, 33, -13, -104, 59, -92, 111, -126, -84, 39, -68, -108, -122, -8, 43, -41, -86, -70, 76, 58, 78, 51, -67, -13, 109, -86, -87, 46, -54, -58, -46, -63, -76, 19, -16, 65, -71, 52, -10, 47, 9, 76, 49, -103, 64, 58, -72, 33, 7, -81, 98, -57, -10, 63, -90, -10, -44, 2, -6, 77, -97, -128, -14, 64, 3, -110, -92, 50, -5, 51, 55, 8, -123, -42, -17, 19, 103, -83, 94, -32, -69, 10, 78, 107, 102, -79, -38, 66, 120, -51, -106, -65, -91, 15};
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
    msg.setTimeStamp(0.6089642982793354);
    msg.setSource(36036U);
    msg.setSourceEntity(43U);
    msg.setDestination(55908U);
    msg.setDestinationEntity(228U);
    msg.id = 74U;
    msg.width = 40025U;
    msg.height = 38250U;
    msg.widthstep = 24931U;
    msg.channels = 198U;
    msg.depth = 252U;
    msg.finaldata = 138U;
    const char tmp_msg_0[] = {-72, 76, 32, -53, -100, 50, 9, -1, -38, -89, -121, -121, -34, 61, -17, 120, 59, -89, -6, -77, 33, 7, 41};
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
    msg.setTimeStamp(0.4049909315129);
    msg.setSource(25173U);
    msg.setSourceEntity(110U);
    msg.setDestination(30621U);
    msg.setDestinationEntity(153U);
    msg.width = 22358U;
    msg.height = 7790U;
    msg.channels = 114U;
    msg.depth = 143U;
    const char tmp_msg_0[] = {8, -58, 110, -91, -45, 49, 107, 125, 116, -73, -91, -104, 70, 13, 38, -75, -36, 125, -79, 53, -119, 2, 126, 66, -107, -115, 17, 119, -121, 94, 91, -53, -31, 38, -111, -36, -76, -55, 11, -121, 21, -35, 97, 118, 94, 25, -16, -29, 105, 23, -79, 65, 79, -87, -97, -98, 74, -118, 59, 105, 21, 70, 20, 3, -47, -20, -112, 5, -121, -60, 16, 46, 88, -110, -123, -26, -17, -12, 37, 123, 16, -75, -43, -73, 69, -97, -128, -64, -4, 41, 81, 81, 88, 126, 114, -80, -76, -83, -82, -76, 83, 25, 54, 68, -78, -93, 81, 91, 106, -51, 75, 109, -8, 114, 91, -40, -117, 96, -119, -116, -24, 76, -55, -128, 39, 53, 110, 40, 101, 47, 105, 3, 109, -63, 19, -103, 88, 72, 113, 121, -4, 68, 72, -92, -30, -101, 59, -40, 86, -100, 53, 65, 42, -25, -53, 88, -126, 35, 85, -86, -122, 109, -43, -58, 7, -89, 31, -87, -8, 5, -119, -7, 84, 21, -106, 38, -51, -87, 64, -35, -42, 38, 17, -87, -80, -73, -23, 41, -45, 62, 51, -116, 94, 7, 52, -88, 52, 103, -117, -45, -10, -24, -22, 95, 113, -72, 36, 107, 62, 101, 111, -61, 84, -101, 120, 80, 100, 104, 126, 17, -79, -103, -46, 102, 99, 95, 41, -54, -10, -36, 18, -42, 40};
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
    msg.setTimeStamp(0.18669872994174241);
    msg.setSource(4309U);
    msg.setSourceEntity(34U);
    msg.setDestination(55307U);
    msg.setDestinationEntity(177U);
    msg.width = 59694U;
    msg.height = 17550U;
    msg.channels = 251U;
    msg.depth = 242U;
    const char tmp_msg_0[] = {125, 84, -47, 12, 27, -34, -125, 73, -14, 8, 60, -79, 56, -40, 16, 125, -39, 80, -94, 38, 114, -125, -78, -61, 71, 109, 107, 61, -79, -98, -63, 63, -34, 2, 44, -45, -67, 45, 58, 57, -94, -74, 29, -47, 47, 109, -93, 117, -57, -127, 60, -80, -78, 35, 104, -11, -15, -112, -79, 99, -58, -62, 61, -10, -113, 63, 55, 3, -116, -103, 106, 116, 22, -113, -65, 60, 102, -118, 20, -77, -46, -9, -80, -94, 3, 27, 30, -110, -65, 65, -80, -121, -53, 55, -15, -36, 119, -22, -30, -97, 28, -6, 15, 102, 88, 0, -121, -2, -41, 9, -59, 40, -102, -121, 45, 23, -9, 113, 89, 32, 19, 13, 108, -60, 66, 44, 21, -61, -79, 38, -103, 104, -56, 42, 22, -9, -28, 7, 40, -75, 20, -72, 91, 19, -2, 46, 57, 66, 75, -118, 101, -28, -2, 101, 11, 118, 98, -1, 27, -18, 76, 30, -125, -69, 44, 49, -17, -54, -123, -121, 7, 37, 31, -34, 121, -22, -77, -17, -31, 67, -125, -18, 69, -52, -112, -16, -17, 32, 68, 115, 83, -86, 61, -115, 102, -45, 27, -104, -88, -21, 111, -101, 124, 100, 73, 110, 118, -9, -103, -98, -91, 33, -3, -56, 66, 90};
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
    msg.setTimeStamp(0.751137652856253);
    msg.setSource(26971U);
    msg.setSourceEntity(242U);
    msg.setDestination(18704U);
    msg.setDestinationEntity(166U);
    msg.width = 33745U;
    msg.height = 45394U;
    msg.channels = 35U;
    msg.depth = 97U;
    const char tmp_msg_0[] = {-18, -111, -27, -115, -96, -61, 79, -52, -38, -46, -92, -15, -12, -15, -94, 126, 11, 77, 49, -113, -21, 32, 106, 9, 76, -7, 23, 57, -65, -111, 74, 104, 7, 36, 10, 81, -49, 66, -49, 5, -83, -118, 97, -17, 47, -123, -25, -14, 47, 87, 90, 63, -29, -46, 24, -119, -80, -112, -97, -4, 80, 62, -124, 17, -43, -94, -55, 12, -11, 79, 21, -70, -85, -9, 118, 81, -121, -3, 40, 85, 116, 91, 112, 87, -80, 55, 71, 32, 66, -85, -119, 108, 79, 111, -1, -24, -23, -56, -68, 85, 37, 70, 9, 123, -127, 104, -2, 38, -120, -67, -116, -46, -43, -29, -59, 3, 58, 101, 116, -83, -42, 24, 70, 58, 125, -86, -69, -103, -110, 12, -96, -20, 122, -13, -82, 98, 124, 54, -104, 110, 103, 126, 7, -123, -25, -88, 122, 63, -4, 99, -99, 6, 48};
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
    msg.setTimeStamp(0.3321543698180506);
    msg.setSource(8425U);
    msg.setSourceEntity(179U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(63U);
    msg.frameid = 190U;
    const char tmp_msg_0[] = {85, 51, 63, -81, -35, 126, 44, 112, 68, 123};
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
    msg.setTimeStamp(0.40854460110444735);
    msg.setSource(15160U);
    msg.setSourceEntity(155U);
    msg.setDestination(50679U);
    msg.setDestinationEntity(85U);
    msg.frameid = 84U;
    const char tmp_msg_0[] = {-91, 35, -4, -95, -4, -21, 103, 67, -58, 49, -19, -6, 102, 12, -111, -40, 107, -47, 88, -81, -84, 6, 88, 80, 99, 70, -47, -85, 77, -110, -43, -55, 24, -88, -53, 82, -40, 114, 126, -14, 22, 113, -42, -95, -21, -71, -121, -126, 107, -73, 23, 33, -16, -58, -29, 78, 68, -74, 29, -38, 8, 77, -55, 116, 18, -23, 25, 8, -29, 41, -82, -5, -54, 17, 45, -105, -101, -94, -126, 61, 43, 74, 77, -90, -83, 95, 49, -68, 66, -56, -89, -121, -48, 87, -101, -13, 101, -120, 75, 27, -13, -83, 111, 115, -123, -29, 22, 84, 67, -28, -34, 88, 70, -112, -92, -104, 51, 60, 60, 80, 0, 18, 111, 2, 34, -30, -4, 57, -104, -91, -110, -45, -38, 115, 97, -38, -77, 41, 17, -78, 21, 96, 24, -9, 9, -32, -24, -18, -124, 35, 8, -96, -38, -95, -78, -70, -112, -112, 120, -111, -2, 90, -27, -51, 13, 35, -123, 79, 93, 41, 63, -34, 87, 121, 82, -27, 63, -83, 87, 85, -49, 83, 21, 67, -117, -81, 20, -18, -19, -91, -8, -58, 3, 57, -92, 24, 81, 20, -51, 59, 120, -20, 43, -27, 34, -19, -17, -119, 109, -33, 40, -124, 10, 96};
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
    msg.setTimeStamp(0.8276441290538569);
    msg.setSource(5123U);
    msg.setSourceEntity(84U);
    msg.setDestination(17918U);
    msg.setDestinationEntity(1U);
    msg.frameid = 179U;
    const char tmp_msg_0[] = {-77, 125, -18, 82, -122, 89, -41, -105, -75, -64, -21, -74, -18, 49, -71, -31, 1, 75, 1, 73, 50, -10, -96, -123, 61, 22, -71, 35, -121, -47, 32, 91, 63, -62, 112, 117, -56, 50, 21, -103, -83, 76, 99, -126, -81, 70, 12, 67, 62, 124, -13, 114, -64, 34, -67, -24, 33, 38, 3, 32, 29, -117, 36, -95, 103, -101, 35, -62, 117, 13, -5, 13, 43, -75, 107, 45, 7, -6, 119, -23, -61, 87, -4, 23, 48, 58, -70, 87, -125, 92, 96, 60, -119, 64, 20, 38, 57, -28, 115, -50, 60, -34, -64, -76, -127, 4, -94, -107, -101, -84, 80, 56, -10, -120, -84, 54, 80, -29, 52, 57, 114, 77, -62, -86, 117, 21, -94, -107, -116, -13, 2, -56, 56, 90, -64, -87, 29, 14, -60, -114, -8, -94, -68, -70, -34, 83, 102, 97, 34, -31, 102, 41, 9, 18, 17, -47, 7, -27, 34, -16, 97, -81, -89, 124, 43, 1, -110, -113, -2, 102, -60, -87, -117, -27, 62, -76, -118, 126, -34, 107, -85, -85, -51, -23, 84, 86, -78, -45, -77, -61, -52, -91, -111, 0, -5, 15, -118, -32, -116};
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
    msg.setTimeStamp(0.5923409093639149);
    msg.setSource(53354U);
    msg.setSourceEntity(169U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(233U);
    msg.fps = 213U;
    msg.quality = 59U;
    msg.reps = 67U;
    msg.tsize = 76U;

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
    msg.setTimeStamp(0.9571796285893376);
    msg.setSource(13968U);
    msg.setSourceEntity(82U);
    msg.setDestination(30599U);
    msg.setDestinationEntity(126U);
    msg.fps = 189U;
    msg.quality = 132U;
    msg.reps = 213U;
    msg.tsize = 35U;

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
    msg.setTimeStamp(0.13701718818203112);
    msg.setSource(19279U);
    msg.setSourceEntity(95U);
    msg.setDestination(46862U);
    msg.setDestinationEntity(62U);
    msg.fps = 114U;
    msg.quality = 70U;
    msg.reps = 126U;
    msg.tsize = 183U;

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
    msg.setTimeStamp(0.523038501222319);
    msg.setSource(42838U);
    msg.setSourceEntity(249U);
    msg.setDestination(40469U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.1315182941909635;
    msg.lon = 0.4327848508765618;
    msg.depth = 231U;
    msg.speed = 0.9358305559736352;
    msg.psi = 0.45891662013382173;

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
    msg.setTimeStamp(0.8962783989271067);
    msg.setSource(26834U);
    msg.setSourceEntity(219U);
    msg.setDestination(42783U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.36382490603354967;
    msg.lon = 0.2334604804099707;
    msg.depth = 108U;
    msg.speed = 0.12068560828491637;
    msg.psi = 0.3595895850779184;

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
    msg.setTimeStamp(0.19756958708996708);
    msg.setSource(41574U);
    msg.setSourceEntity(121U);
    msg.setDestination(59810U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.443968322265483;
    msg.lon = 0.3738987644430899;
    msg.depth = 55U;
    msg.speed = 0.2386848673132348;
    msg.psi = 0.34248090135937703;

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
    msg.setTimeStamp(0.19703708250979568);
    msg.setSource(5584U);
    msg.setSourceEntity(60U);
    msg.setDestination(64269U);
    msg.setDestinationEntity(33U);
    msg.label.assign("KCJNVIJSVYLROFGSKTWZAHDHJHUZWROZNHHTFBWRIBJLLCPQLOWXZCZNLSGDRBSMTTFULCJRXNEIORVEZCFPUIEWHXJYAUKUKCTQVNDZGKMOIXWQEEUAQEFVQVGOXIREFLBMZGMSLHLPWYYTCMRBNYGKAHSJCSDQKPPJQLAFESBEJVEIBTKUSZUUMXPYYXATPWSMTRPPMDRHZTDPO");
    msg.lat = 0.8847534171216955;
    msg.lon = 0.8018267509145142;
    msg.z = 0.37844392286013284;
    msg.z_units = 170U;
    msg.cog = 0.3116654297418858;
    msg.sog = 0.64612783943726;

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
    msg.setTimeStamp(0.03577447531338496);
    msg.setSource(38240U);
    msg.setSourceEntity(208U);
    msg.setDestination(44668U);
    msg.setDestinationEntity(122U);
    msg.label.assign("OAAEHSIQSNBBQOKQCTWBBCGJJRSDDKDXVZPTFQSDAYDWHYTCHXWGFNEFRLIBFPXAWTJGENDAYHJEZSBZHETUDMVZKMZNNSBVVYOFIUAVKZOYYGHHYCIAVYRVUJEUFCTGRLLXOIEPOWXLICBFSHLZK");
    msg.lat = 0.7565734353313981;
    msg.lon = 0.6600171777453626;
    msg.z = 0.06390011979631305;
    msg.z_units = 56U;
    msg.cog = 0.3785453450648987;
    msg.sog = 0.795132193284358;

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
    msg.setTimeStamp(0.8965941326850304);
    msg.setSource(33581U);
    msg.setSourceEntity(254U);
    msg.setDestination(2395U);
    msg.setDestinationEntity(246U);
    msg.label.assign("FODLAKSVXFLDIPNNRFYBIXIPRSZOISAHXOAWX");
    msg.lat = 0.24581332543131773;
    msg.lon = 0.9567023521528549;
    msg.z = 0.22828789107097014;
    msg.z_units = 197U;
    msg.cog = 0.2106489800862965;
    msg.sog = 0.7987345830871468;

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
    msg.setTimeStamp(0.12467290658452534);
    msg.setSource(1104U);
    msg.setSourceEntity(218U);
    msg.setDestination(25380U);
    msg.setDestinationEntity(1U);
    msg.name.assign("BDPOAONWSVNRWTBGVLICZAECLRDKKKYUCCIBSPFHHLXCWLAPSSJGJHVIHYOGQNHJBMERGQVXRYXPLEIUQKMCQNESXFDDMMBRZPVTLUAIHOJHZDIFVEUSET");
    msg.value.assign("AJBCOSPUOXLJVDXJIDI");

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
    msg.setTimeStamp(0.04459826590918026);
    msg.setSource(26274U);
    msg.setSourceEntity(196U);
    msg.setDestination(54574U);
    msg.setDestinationEntity(190U);
    msg.name.assign("MMZDHOALGOXUIPDWZPGIIOGWEY");
    msg.value.assign("KVBFFEPDOXIHTMBJWTDITCGBCOCOHWRNDYIAMZJAERBWXBLSGIUOMZRCZMUIVKCTGVNBNOPPUHGTLDBXRZQMSXXMQAKWNGIEJUKJAJLVYEGPQQGSUFYHWYUNESZYWVJVGPHNUPAUMCRZVVUHNDWGQLKMZXJPODFONLIOEOKEZWDTVFSTILYBPKDFQCAOERQ");

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
    msg.setTimeStamp(0.28886148339779916);
    msg.setSource(17101U);
    msg.setSourceEntity(226U);
    msg.setDestination(42010U);
    msg.setDestinationEntity(92U);
    msg.name.assign("IKMOXGKHPQIPBHBZNLYPWHVEAWVKKEXZUZYUXYLUQBHXSFISVZAWYVSHJLSXSGDYAFHXJRNPILTQLSOTTLETBNHMOAFFQQNWSXOVJXJQVERCKJQGDPHHUUTQXJPNFNSKPMTTMQWFQZBGTGGDCIKVMRFRVCJSFERJBTTMWAEIGWRUCUYOPE");
    msg.value.assign("CVJPSEJQLALAQVYYMFKXFMIRDHHLQSNPCTWOGPPXTGBUHCABUPXASYLTMYMIHKIJSZDZVSAPGIRRWLGMCFXIBDDNQFEHQUHOGKCUJUWNEGFSTEDOWLZGLRRRCTZKECZRVVHZVOJANEYXPQLERKLZEFZAUBNJWYPBYJPUHNQODOTJWVILMKDNFEBGJXBZOSKTQXWMCNXCNOANWWFDKOII");

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
    msg.setTimeStamp(0.048771792946910364);
    msg.setSource(29962U);
    msg.setSourceEntity(123U);
    msg.setDestination(48131U);
    msg.setDestinationEntity(159U);
    msg.name.assign("CSSCZPXKYTBYJOZSBNPNUDBOWROIHNMTYAEXLMRTQNUDWKZYWFRGTDLMEOQJLUAUUFZYDGBBPMSEYAVOGWFKILLIRTMJBZUFHIFPAGAAQXTVNQTJLGVMK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SEFTWOAMXSCYLPMQCXXQJNTYHOLCIFWABZNGHZPTOBUWSKFTNFAZVFJJPYAZTUDEQGPSILYVSNAJONPUYAURRDJERYGZCDKUHTSXIKDUDIFFYBPNZLPHKTROWWVA");
    tmp_msg_0.value.assign("MBOHIINQNATGHENMVUSKXTZFZCHIMOCSICAWISOLQG");
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
    msg.setTimeStamp(0.5952239152611428);
    msg.setSource(22910U);
    msg.setSourceEntity(40U);
    msg.setDestination(53321U);
    msg.setDestinationEntity(160U);
    msg.name.assign("LEZVNMBRDWHVSOLICTFODXHIXPUQSVVOJBTSQNOGRYCDJMZLSIQAAJNWDTXVBACAHFOHDSEWJREEAJRQPTDGPJCGEOKLKATWYMTLHKDWANNCMKZMCQXRIIZCYULSTFBLLAPUHKMPPN");

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
    msg.setTimeStamp(0.4417523384323435);
    msg.setSource(21456U);
    msg.setSourceEntity(172U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(128U);
    msg.name.assign("GVWNSWMRLBZQXAOHBULQECTKOTHHWMZMXFMMTENNEEGZWFQKRHSAPDBOBVXLLHIJUVPJRAKTCGILEUPGRJJQJ");

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
    msg.setTimeStamp(0.7781613241518092);
    msg.setSource(48754U);
    msg.setSourceEntity(66U);
    msg.setDestination(25247U);
    msg.setDestinationEntity(191U);
    msg.name.assign("HJFKRPUAVKLELPOPWSHEPMIOVKYOYJVCEYXHFCZLCULWJMQGZNN");
    msg.visibility.assign("FQEAIGYJFBGBYFNSDUERRXAZKWSEBJKJTIMUXDPWLZWSNMCVJCOVDZUQHMEOBZJPPAELNCXYUNOMLJWVUQLPRWSDBEJDPAQVHPBZSDOPHIOPVYWUDKLGJIZGCMFAOO");
    msg.scope.assign("YMWPELHYXOWITXPYBBXJMJVJXEFOOQFBKVKNPFUYPVERRN");

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
    msg.setTimeStamp(0.3947368013885262);
    msg.setSource(11674U);
    msg.setSourceEntity(114U);
    msg.setDestination(50444U);
    msg.setDestinationEntity(3U);
    msg.name.assign("DNWRTTSFJOMVLIZOQHQNWQFAEJJXPBCMNIAENCKLNOGMSXELSRVYDAKTEJNFMJBYMVXUXLGLLOAGKEIACLPFFZCAXGYQZBXMCZDVXZRFIHOGBHGOGJJCMYKUJSXZSONLHIDOHGECQTBWFGBTPOMQPSAZIYVAURBUUWAWDVTTPEUMWULNGTJPFKHISYXCBQ");
    msg.visibility.assign("HUTKVYFRZXNDXMXTIMGNMTLULSBHCJCAHPUYMPTKEFKQPAYHXSVSOKLMCZETBDFJXBKVPRZELNOHBGEMVUOYSXJPEVYAWGNCWSOYYLCYBDIKHBPWNIPTQGOWIBGLIOIWULFJURAZUDVNFRPASHBFDXEJKFFRWICDAAHCLVY");
    msg.scope.assign("OQLFHCLEKPDLJRWTOUMGU");

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
    msg.setTimeStamp(0.41019268163296674);
    msg.setSource(28749U);
    msg.setSourceEntity(170U);
    msg.setDestination(34935U);
    msg.setDestinationEntity(84U);
    msg.name.assign("IJQQCQHVJOPPVFNFYNIMRRYDMATJDHZYJTKUOXTJRHWWABYTXGBYASAQU");
    msg.visibility.assign("ITWDHNUQUODGMGDOJ");
    msg.scope.assign("FXYBYOJMJQPNBYTWLUVEMKLFTXLKDPCGUJAPADZGLXXETFUDTZMHIUGSPRXHEXDJIESQYSRISVNUNKRHVBQTBRDZTQKVOGPNWGBGZZGYDKINHADDQBEZXFYSPIENKURBQEKVSEESNCWFFPIQLZRHOHWCGFAZMOCWASMUWJZBFLRHPPBJAMXUCCGHYYJKOMI");

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
    msg.setTimeStamp(0.04868997265305619);
    msg.setSource(36223U);
    msg.setSourceEntity(136U);
    msg.setDestination(21051U);
    msg.setDestinationEntity(51U);
    msg.name.assign("HDUOSXTURAXELSNITFQSVQDCXEOFCWBHBSCEBEJPTTKDPR");

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
    msg.setTimeStamp(0.2246762885185194);
    msg.setSource(64693U);
    msg.setSourceEntity(232U);
    msg.setDestination(19508U);
    msg.setDestinationEntity(13U);
    msg.name.assign("SWSRSNCIIQJJFIHGNYMEANACVNZATUJBTKDZCRLYOXWBRQJOBKDRZTEKITPIYVMDGWOLFPMEIHGHOZPHATHVMJSZWXUMOKRHACADSKLMRLUKWFYUKMRQGXJIDDZNEVNCSSGHGUTUVIYBKPBDPGUWVFZQNLAUEOGCXWVCLIQVTYJQTPD");

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
    msg.setTimeStamp(0.9920806247608904);
    msg.setSource(5255U);
    msg.setSourceEntity(187U);
    msg.setDestination(65379U);
    msg.setDestinationEntity(30U);
    msg.name.assign("MIOYTPOUQFCNWQZLBYHMAYKBXSOKBBMVUECJZQCKDXTAVLNXSEBUBRWSPSLNVCVIHRBSWRUWTOLSVNAEULFOQTBXAUIPPEPGKNAHMJRQCCFDJJDGHGXCZLQL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FXEATBRSHSKLTLDGYFVQZYTXWCFWHEDRWFYTNCDWJDULDCDOUVNSFKSCKYKZVWRPJEBAVZNSWTFLYIOBNJBOQGHBNHLGHMWAFFTLPOKUSUIXLKRXCXUEMAHOKDCPQPJAVHAUYDERCZIWSEGCZWUIUVKJLRYIVMIYJTNGQQHNNOMXLSGMMXMEGTMQGBBBQIZVJABEOSFODAYVVISPREDPACBQ");
    tmp_msg_0.value.assign("RVTSGORJXIDHVJWDLFUFQAMDKGOBMYHKARMIKICGRAKODHXNMGQQGEEAGAKELITXQNQZMDEGQOYEIJWZVXKCMLFJJZAWFTJOFQLLSVZWVQPEBMRESXHXNWHOYSUVLBOBYDCYESSHRPTSFFYQTSUDLGMNWCRH");
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
    msg.setTimeStamp(0.3260865062818561);
    msg.setSource(5623U);
    msg.setSourceEntity(18U);
    msg.setDestination(59704U);
    msg.setDestinationEntity(153U);
    msg.name.assign("NPPVCACVYXDWOHCXLAREZXGFAUQQPUNMPQLVJLPQKTJZQSSNTTXKCUEJUQXGOBAMD");

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
    msg.setTimeStamp(0.6634082472328673);
    msg.setSource(46831U);
    msg.setSourceEntity(7U);
    msg.setDestination(25431U);
    msg.setDestinationEntity(69U);
    msg.name.assign("KJRIFOIKFLBVXNCEQRATLOPADNFOKMUMELYDEVCBCVOAZTDJVTADHISQTZDAPHCNVWJBFSXUGPGLXLGPBFBUEEERCWLDZJSCBFIXWYDXCNABHWSVDAIUKSSFFLQHMHNSFNVPMJRAJSQDOOIOYHGYKHGQPRUJVYGQRKOWXKFCJELKXCMYWQWYQKANVPTTMWWRNMTUILNBOKHZEMUURRXZIJPWE");

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
    msg.setTimeStamp(0.5286590006530361);
    msg.setSource(24509U);
    msg.setSourceEntity(239U);
    msg.setDestination(52297U);
    msg.setDestinationEntity(199U);
    msg.name.assign("NXCMFEHPJMWAOAPAFPBZFQCATUSJNTUJXLQYOCNCTPIONGHRECZAUNUCEPTHDQBJENHZKGSDHLNVDNKUPNPZBQRZBIUKCAKYFRI");

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
    msg.setTimeStamp(0.9393610287536359);
    msg.setSource(15582U);
    msg.setSourceEntity(116U);
    msg.setDestination(15887U);
    msg.setDestinationEntity(15U);
    msg.timeout = 3505093868U;

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
    msg.setTimeStamp(0.8144559887243993);
    msg.setSource(40308U);
    msg.setSourceEntity(19U);
    msg.setDestination(15781U);
    msg.setDestinationEntity(208U);
    msg.timeout = 3590663145U;

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
    msg.setTimeStamp(0.09015905831399562);
    msg.setSource(65297U);
    msg.setSourceEntity(183U);
    msg.setDestination(6694U);
    msg.setDestinationEntity(22U);
    msg.timeout = 1833777723U;

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
    msg.setTimeStamp(0.45356196794709025);
    msg.setSource(51770U);
    msg.setSourceEntity(187U);
    msg.setDestination(50913U);
    msg.setDestinationEntity(168U);
    msg.sessid = 1107461995U;

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
    msg.setTimeStamp(0.7904571269016004);
    msg.setSource(35369U);
    msg.setSourceEntity(74U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(176U);
    msg.sessid = 1056849129U;

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
    msg.setTimeStamp(0.5847067499586509);
    msg.setSource(15288U);
    msg.setSourceEntity(204U);
    msg.setDestination(9899U);
    msg.setDestinationEntity(16U);
    msg.sessid = 179722308U;

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
    msg.setTimeStamp(0.846321708237112);
    msg.setSource(59505U);
    msg.setSourceEntity(140U);
    msg.setDestination(41110U);
    msg.setDestinationEntity(46U);
    msg.sessid = 3493970719U;
    msg.messages.assign("DJNFAALNZUHZMYNBVNSCBORWAVLSKJCRABHQIDSIWOAJCRFRODLYHTWBLLSKSTWGFGRPODWPPVXHEZDFWHKPRKNTNOIWTCIKPOGYVVLMGULHZSAWDJQVIXUAVHRQTXDTYMAKAJQUTRUSCOGNZMEIWZQBEYPPBEPMMNIUCFECITSBUAKVFGQRLDMQXZGJOUQYIVOJXXESCX");

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
    msg.setTimeStamp(0.6607312420452957);
    msg.setSource(33886U);
    msg.setSourceEntity(31U);
    msg.setDestination(34599U);
    msg.setDestinationEntity(54U);
    msg.sessid = 1749884507U;
    msg.messages.assign("TUZCUTVDDRXSCPUAWKNGLOJIWKDISAFEERSPMFJDBXRANRIGQCMXNNXFIBDFITVVIRSTWKYEUJUOWMIGWZTGRRTVXYYQGGJOKELAONGEIPPOBUDLPVBHYQQREYXIJPNDTHZVMNFMQCHVWMKLCAGVHADVKKAGWJNALMB");

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
    msg.setTimeStamp(0.2404968062038194);
    msg.setSource(25203U);
    msg.setSourceEntity(99U);
    msg.setDestination(8033U);
    msg.setDestinationEntity(20U);
    msg.sessid = 3067617225U;
    msg.messages.assign("CFPOTRRZRJFZZLOVDSAWKXMAITTMEWIGGIPKQNLRKPGJYJCKFCSEHOERUSBTSWNEWHPPURGQW");

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
    msg.setTimeStamp(0.29108354105438605);
    msg.setSource(52257U);
    msg.setSourceEntity(15U);
    msg.setDestination(23896U);
    msg.setDestinationEntity(21U);
    msg.sessid = 101808988U;

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
    msg.setTimeStamp(0.17209838839191927);
    msg.setSource(62884U);
    msg.setSourceEntity(84U);
    msg.setDestination(30238U);
    msg.setDestinationEntity(24U);
    msg.sessid = 2529553581U;

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
    msg.setTimeStamp(0.5791578483750307);
    msg.setSource(61488U);
    msg.setSourceEntity(170U);
    msg.setDestination(34830U);
    msg.setDestinationEntity(187U);
    msg.sessid = 1719181505U;

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
    msg.setTimeStamp(0.8113221697032471);
    msg.setSource(53464U);
    msg.setSourceEntity(65U);
    msg.setDestination(6677U);
    msg.setDestinationEntity(162U);
    msg.sessid = 3510594278U;
    msg.status = 35U;

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
    msg.setTimeStamp(0.5447682203148633);
    msg.setSource(22959U);
    msg.setSourceEntity(237U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(224U);
    msg.sessid = 3490977218U;
    msg.status = 145U;

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
    msg.setTimeStamp(0.028436910964391715);
    msg.setSource(40669U);
    msg.setSourceEntity(39U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(131U);
    msg.sessid = 2484095408U;
    msg.status = 8U;

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
    msg.setTimeStamp(0.8801126711342175);
    msg.setSource(54307U);
    msg.setSourceEntity(116U);
    msg.setDestination(23570U);
    msg.setDestinationEntity(211U);
    msg.name.assign("MNZQGDATYABBCNUZLFSLBCWWHIVPKJAUVTJVFDMGM");

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
    msg.setTimeStamp(0.022551874545080897);
    msg.setSource(63912U);
    msg.setSourceEntity(54U);
    msg.setDestination(35630U);
    msg.setDestinationEntity(23U);
    msg.name.assign("VGTTIAAKRPICABOSIBYMHECQCYBDUKWGFKZGVSEWASOZHAOHEYWBGZBSNOJXKACPIENQXJFNBQCBDSTFCOPZJDIEGLKNAEJZLDBGLECPMTDYGSEEZQQUOIPMLTVYHNXWRKYFUXZGDFMNFRMFUQULXCVTNZRTLIWXNXPJUNH");

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
    msg.setTimeStamp(0.540553805150487);
    msg.setSource(13599U);
    msg.setSourceEntity(185U);
    msg.setDestination(43403U);
    msg.setDestinationEntity(165U);
    msg.name.assign("HDXPZCVGSKWZUOHKCWZACADNWMRLSYJPP");

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
    msg.setTimeStamp(0.5059222062946167);
    msg.setSource(55270U);
    msg.setSourceEntity(112U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(229U);
    msg.name.assign("NRKXVUXKEIIADSCZEMNXYAVJLQHKGDFDLYUUUAJXIYPSYDVHEEHDOZCAFPVZWSEJHSQKQIVLNURIMXTSLCNGAVZSTTDFOJKZCFWNPYGXFNPPDCQGWLRMTAJCWTLNEKJZWAMEEVOGSVKN");

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
    msg.setTimeStamp(0.018562221997930006);
    msg.setSource(26192U);
    msg.setSourceEntity(112U);
    msg.setDestination(6415U);
    msg.setDestinationEntity(25U);
    msg.name.assign("HYODTVZIRYDEWNVIOHWXGEOMJVJBCXCHUJAGLLHAYPCZUPQAKMQASIIKPXXNCFXVDOACDRQTFJJDLOYWBLQQUONZHFGDIZECLNMBZHZTSBWPUMPNREUORSBBFPGMBBGXJQPZQGULNFYWCKQVLATZUKVGTXTRBRLWGLVYYDYWURLJVCIZSKHNKEZEAKMHMUVCVDUWJRXONIKFO");

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
    msg.setTimeStamp(0.028276592086246444);
    msg.setSource(37080U);
    msg.setSourceEntity(110U);
    msg.setDestination(45059U);
    msg.setDestinationEntity(97U);
    msg.name.assign("PFOQCXOVTYFQAMH");

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
    msg.setTimeStamp(0.9159058587376356);
    msg.setSource(12447U);
    msg.setSourceEntity(12U);
    msg.setDestination(52977U);
    msg.setDestinationEntity(49U);
    msg.type = 199U;
    msg.error.assign("PUCRTVCSMIWPTVJDGIIGXNRPVJWAIGEZUEZHUOMTMOOAKVNROORQGNWZUFDKPRIZSBMKSDSDKXCCQLYLGHTY");

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
    msg.setTimeStamp(0.22788903481726186);
    msg.setSource(43012U);
    msg.setSourceEntity(111U);
    msg.setDestination(9148U);
    msg.setDestinationEntity(128U);
    msg.type = 152U;
    msg.error.assign("NDVIPEYNJAXRYJTHBCSVDFILOCYOIREHYFKBSXBWDNMEKISITLXUQCUZUNXXOEWTHKCBAPWYOCFBVXHOUZGUULKFEJTZZBFTAGSRDRPMMQRWZFWGRGGTHWLTPQTXQSQEMKNYXOKJQVRBDVWYHYD");

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
    msg.setTimeStamp(0.6655320816110254);
    msg.setSource(51615U);
    msg.setSourceEntity(182U);
    msg.setDestination(25747U);
    msg.setDestinationEntity(210U);
    msg.type = 11U;
    msg.error.assign("PUIYMMLHNLHWRQHOHCBSVURYYTZCDBTUDJKRZKQIIIJNAWFHDOCGXPKKIKXSCLQBEPAUZVNKOPWCYCMJUXELBQBPMCBJFNYZGBQAJTOGZYFWVTZSYKWCOFMMHUHKAQSLRVYXUZGENTSWVRALGWNMDJZWMFDEPYDPETWRBOLVNIPEQDSVTTDJXDLCEQZFAZAIIOXQVJCXKFEUHGMMFGTLUVGSSAGSDYNBXANXGTEKFHAOJNRSERXIUROHFPB");

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
    msg.setTimeStamp(0.7762028790999383);
    msg.setSource(16825U);
    msg.setSourceEntity(55U);
    msg.setDestination(25663U);
    msg.setDestinationEntity(47U);
    msg.seq = 5151U;
    msg.sys_dst.assign("PKPRUNTWGUHKKVQHIVCQJXAFWEPYYZLTRNRPOTXMAIUGRIGBXPZJDGBUVMXUSHZSCKLNHFQUNPZXITOYKSYTLNAEPCVPFMNVMLXJYQMJOSCAUEEMIACVEWBMQOJHRRKTNRWFTADDNFLBALFHBSYJKZILQOYKDGIJPQLYCDHOGUWLEBXVXUSDTPWGROJEYWKMBQOZMBJGFETHZCWUBE");
    msg.flags = 247U;
    const char tmp_msg_0[] = {124, -23, -44, 8, -15, -104, -16, -111, 121, -34, 6, 94, 60, -31, -88, 17, -50, -50, -127, -7, -22, 36, -34, 45, -20, 58, -102, -6, 68, -17, -18, -102, -12, 3, -61, -65, -56, -122, -57, -90, -94, -119, -96, -87, 42, 88, -82, 11, -121, -92, 90, -116, -76, -68, 64, 0, 70, -124, 38, -15, -12, 64, -114, 69, -64, 82, 41, 104, -36, -107, -27, -8, -104, 64, 39, -114, 91, -50, 72, -10, -46, -119, 31, -67, 4, 58, -2, 28, 28, 62, -127, -126, -119, 50, 122, -34, -88, -13, 91, -58, 88, -11, 85, -22, -8, -89, 4, 93, -23, 26, 90, 117, 71, -37, -89, 105, -52, 124, -51, -13, -108, -19, 27, -86, 53, -84, 80, -128, -65, -124, 2, -95, -118, 78, -5, -22, -2, 69, -32, 7, -117, -123, -37, -79, -39, -31, -32, 14, 77, -42, -60, -37, 27, 100, 93, -91, -61, -84, -21, -71, 82, -121, -46, 37, -11, 113, 33, -69, 22, 71, -33, 58, 67, -24, 28, -124, -21, -115, -90, -47, 106, 57, -20};
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
    msg.setTimeStamp(0.5767942557939799);
    msg.setSource(44325U);
    msg.setSourceEntity(226U);
    msg.setDestination(33710U);
    msg.setDestinationEntity(191U);
    msg.seq = 49763U;
    msg.sys_dst.assign("OTZOKCRTGIJBENRXAEXLUGGYAQVPXCDMYXCABSA");
    msg.flags = 142U;
    const char tmp_msg_0[] = {118, 94, 64, 103, -80, 29, -46, 44, 72, 108, -118, 47, -39, 74, -58, -24, 19, -66, 101, 30, 58, 7, 6, 51, 57, -57, -89, -5, -73, 58, -64, -40, -105, -31, -34, -53, -34, -77, -85, -49, 22, -18, 40, 15, -122, 54, -43, 56, -60, 39, 117, -54, -97, 124, 69, 7, -2, 43, -8, -39, -88, -62, -93, 16, -121, 75, -40, -88, -1, -22, -55, -35, -120, -68, -94, -68, -102, 111, 71, 122, -101, -85, -128, 3, -2, 24, -78, -114, -30, 33, -99, -23, 108, -22, 114, 31, -113, 60, 117, 115, -11, -7, 0, 102, 69, -38, -101, -82, 122, -83, 113, 4, -67, 78, -14, -18, 19, 55, 26, -100, -114, -35, -87, -23, 22, 102, 45, 110, -19, 13, -29, 92, 68, 23, 84, -107, 125, -23, -92, -73, 112, -63, 100, 64, 101, -103, -106, -10, -39, 114, 101, -120, 112, -77, -2, -45, -85, -105, 81, -61, 109, 48, 8, 31, 124, 5, -11, -44, 71, 34, -85, -90, 97, -38, 57, -5, 2, 120, -102, -56, -27, -60, -1, 12, 78, 73, -75, -79, 50, -127, 71, -14};
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
    msg.setTimeStamp(0.30582113575567915);
    msg.setSource(36673U);
    msg.setSourceEntity(64U);
    msg.setDestination(6886U);
    msg.setDestinationEntity(142U);
    msg.seq = 10734U;
    msg.sys_dst.assign("AWYKJEWSVFMNDLNDCLNEZHSRXXYKBAVRARY");
    msg.flags = 210U;
    const char tmp_msg_0[] = {-66, -75, 97, 0, -75, 29, -96, -120, 45, -53, 80, 28, 122, 49, -56, 88, -34, 69, 87, -78, -109, 31, -77, 36, 26, -66, 100, 35, 100, 34, 57, -118, 12, 112, 0, -36, -31, -28, -8, 83, 62, -14, -82, -95, -58, 87, -56, -41, 123, -119, -76, 126, 65, -87, 98, -106, 47, 97, -55, 19, -89, 124, -33, 10, -11, -12, 27, -36, -71, -47, -77, 55, -4, -119, 126, 102, 36, 42, -80, 45, 92, 76, -21, -1, 0, -113, -26, -56, -62, 35};
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
    msg.setTimeStamp(0.04528704524545413);
    msg.setSource(14038U);
    msg.setSourceEntity(60U);
    msg.setDestination(61709U);
    msg.setDestinationEntity(127U);
    msg.sys_src.assign("XRGFKOSUQHGFVJDZRMXHPDPUMGKMZYTLTVCRBOLQDBAXWIAEEJKMPIOOWWNJXPUGMBNITHAGZHCYABLPLLDXQIUULZSIGBDNHRQBJYVELKBCUQTGICYFKCLZBJRUMVGFTEDPCQNLSMQVBOSKSWKAYZHXYLZWNDAGJFOYNWOESSSNWTDHMVQKGFHQEAAFTMXNEDUYVSBTOUMFTCNCKJPVIZAOKHVRRYRVEWXPJIRFQP");
    msg.sys_dst.assign("VLMZCGOUMPTBOCGEIRPSGOTHSKHRISOYTKXCRAJWDNNLHLVFKCJUBRHQZXYRHTMKGKWGQDPIPZPTNHPJZYYKAYNXEOJGOSULVEZZWLNFOIKHSFLTFATDRFPDFGMDBMYARHWURLUVYFOAWZRZQWDEAKQJKSNQULQCGAXVIFWXWUMJDAAVUUSVMQLVSWIXANEITDBFBPJGOECFBBOUXYCWCZQBQNGJHRNENIBMDY");
    msg.flags = 168U;
    const char tmp_msg_0[] = {121, -96, 55, -71, 109, -95, -115, 84, -5, 29, -76, 105, -20, -42, 24, -103, 84, -15, 121, -14, 61, -66, 61, -120, -29, -69, -34, -8, 4, -99, -83, 53, 69, 63, -91, 59, -44, 116, -84, -66, 72, 41, 84, -49, -86, 121, 110, 5, 108, -91, -6, -128, 120, 11, -75, -46, -18, -6, -21, -119, 71, -23, 98, 50, -124, -58, -53, -60, 90, 22, 103, -59, -61, 15, 84, 92, -97, -21, 13, 100, -16, 85, -105, 38, -33, -3, -62, 6, 90, -56, -48, -50, 29, -103, 124, 53, -95, -96, 84, 42, 100, -82, -128, -80, 123, 61, 71, 82, 119, 22, -118, 61, 104, 49, 121, -23, -21, -121, 26, -42, -101, -53, 6, -3, 55, -71, 67, -122, -2, -12, -63, -88, -93, -72, -59, 116, -33, 125, 7, -85, -49, 78, -125, 85, 6, 27, -53, 72, 48, -47, 53, 5, 80, -124, -126, 0, -124, -59, -111, 86, -120, -26, 60, -25, 42};
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
    msg.setTimeStamp(0.15708554151431786);
    msg.setSource(35939U);
    msg.setSourceEntity(170U);
    msg.setDestination(51783U);
    msg.setDestinationEntity(169U);
    msg.sys_src.assign("UKLJGAGHLZBIUNZNOYSEMLAMITBDNUKMHIZCXGDUVBGJWRVGBUBVCHIEVWDAJFIJDWZOXVQETGTEPUQWKKUXYPDGLAHRVJZABYWKCQMRXRPMYQSWXRQZH");
    msg.sys_dst.assign("MOYXOTFDFOHCSCWYUGHSZKPLAMBEYVPKDIXPCUSLZIMKGHZPSQWHUGCTCCVIQKFOSEXOQXGLJDAABODKDMDWZYVRREARSJFFPLXIATDBIUGMGMVMNKARCZTNLPEXOTLWYKQOVNVMEQCPBJBEHUHCNQHQTIGYNRSWCRJGJJIYXWTUEBTXAZXNRJELHYZSBREJFALTWZAANZVLNFYYMBJZDHEBGQUUPWSDVPHUXVMVKNOWFIKDB");
    msg.flags = 136U;
    const char tmp_msg_0[] = {57, 37, 89, -101, -27, 100, -69, -119, 82, 43, -60, 98, -106, 94, -101, 3, 98, 21, -15, -68, 13, -20, 111, 96, -84, 39, 90, 70, 116, 73, 4, -37, 79, -113, 73, -62, -58, 83, -126, -115, 37, -92, 5, 84, 121, -28, -30, 10, -73, 34, 96, -30, 38, 93, 13, 71, -102, 88, -89, -65, -13, 98, 100, 98, -70, 121, 91, 93, 112, 12, -60, 42, -4, 16, 39, 81, -65, 9, 81, 21, -56, -65, 22, 57, -43, 118, 99, 91, -5, -121, -38, -10, 40, -95, 123, -53, -72, 102, 120, -54, -14, -56, 35, 110, 7, 115, -34, 95, -99, -97, -20, -64, 95, 82, 39, 100, 41, 56, -20, -112, -7, 44, -44, -50, -38, 30, -113, 54, 96, -36, 25, 78, 98, 26, -65, 113, 109, 27, 32, 83, -85, -33, -95, -28, -3, 118, -5, 26, -109, 124, 105, 83, 42, -89, -68, -44, 88, 7, 27, 86, -45, 34, -8, 60, 88, -78, 30, -96, -41, -81, -93, -21, 67, -127, 58, -95, 115, 97, 74, -49, 90, -122, -27, -43, 106, 4, 71, -42};
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
    msg.setTimeStamp(0.3853191242956978);
    msg.setSource(19112U);
    msg.setSourceEntity(240U);
    msg.setDestination(57196U);
    msg.setDestinationEntity(227U);
    msg.sys_src.assign("NCARQAOZSOREZOZSFECWAXGMDOIHVSXAJWYIOJPSUBMLNGHAPRBPOPJGPNZTPTQQXUWDEVEQEOY");
    msg.sys_dst.assign("HCTPOQCDMWVELSPCKOZTLMAUZGXIMNBVTIFAWGXRGZJATTMYPKHHCZEPXCJGDSOKDNNOLJQXKUBDVQDCDILG");
    msg.flags = 124U;
    const char tmp_msg_0[] = {-37, -125, 21, -14, -35, 66, 67, -120, -63, 99, 75, -20, -100, -97, 34, -36, 15, -82, 84, -41, 99, -8, -44, 122, 105, 125, 29, -60, 39, -35, 92, -41, 15, -10, 118, 90, -72, 3, -7, 99, -22, 115, 74, -11, -118, -22, -70, 13, 95, -45, 124, 12, -36, 50, 32, -65, -119, 105, 109, -61, -118, 55, -74, 8, 53, -80, -105, -22, -74, 111, -96, -12, -54, 19, 122, 54, 123, -121, 100, 62, 35, -14, 26, -13, -80, 80, 98, 126, 20, -81, 113, 53, 37, 94, -30, 111, 112, -32, 50, -16, -35, -80, 45, -124, 24, -2, 115, -104, 46, 8, -9, -16, 41, 121, 52, 60, -76, 123, 8, -88, -35, 114, 15, -94, 9, 20, 91, -5, -3, -47, -126, -45, 126, -96, -117, 42, -106, -71, 76, 106, 85, -54, -110, 77};
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
    msg.setTimeStamp(0.5488282374499767);
    msg.setSource(46337U);
    msg.setSourceEntity(58U);
    msg.setDestination(54718U);
    msg.setDestinationEntity(223U);
    msg.seq = 37138U;
    msg.value = 40U;
    msg.error.assign("XYKEYUUACOARGGMDVNHSXSCZIVCQNEJRTWKOXHZIKYDHXIDWANQXVUISXLHEBZJWVLHSKVLQAESAOPFNLIGPKDQUBYALBDCJZQWOIEDFSQKZYSCUJFEZYXFRJOGWMTSTRVVRMDHSCZOPTZPPGCJHYFUMPIWTFZQLHOXQLIMDTMJRSDVMLFYPNOFCBNIUBNPWBUBRLNZKEMCGGRWCARG");

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
    msg.setTimeStamp(0.03412699310869338);
    msg.setSource(10462U);
    msg.setSourceEntity(86U);
    msg.setDestination(40891U);
    msg.setDestinationEntity(29U);
    msg.seq = 6129U;
    msg.value = 32U;
    msg.error.assign("RSCBOGDICFWJPYGFRCUMUEILVNZFHQDEQOORLNVIJHCQBDMPTRSCANSHABUUUSFSVXLOBDQVGNKBETLXNFDDPQHBNKXHKWVEZJPIOWEYQWTBAZW");

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
    msg.setTimeStamp(0.1354950188718167);
    msg.setSource(585U);
    msg.setSourceEntity(148U);
    msg.setDestination(39428U);
    msg.setDestinationEntity(220U);
    msg.seq = 37919U;
    msg.value = 57U;
    msg.error.assign("YXBTFSYBHEFOBTINTMCUGZMBFHUZICNVDWDOIXCJJPAKZNUCCMZTDRFOJLCIWQSVSUJAPBAZKHLECPAODWVRIMWYSNEXVEZOGENDUBKUMAHAOLILLRHPHVMYPGITEWLINBIHMONTNAVRQXSFPXMASGNY");

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
    msg.setTimeStamp(0.9405521287313869);
    msg.setSource(13731U);
    msg.setSourceEntity(240U);
    msg.setDestination(54371U);
    msg.setDestinationEntity(244U);
    msg.seq = 14029U;
    msg.sys.assign("LUMYTSCEZDSUEMJWSIPCQFCVVOINGNDCLMFHLEXEBTXQYHWODWGFVROFTUJPLMVHWHVWQHKVCIXGQAPEIHSFYAMKLEHURYREQABWPCIXZLEEADKGQNGSUZNBZTSETBWZIJZCUKUIZIGXXOXMNUPDJYPDPJRTZSZRDXQRPKMVAWGOPDDKNTNKAKRMYLOXFOTASK");
    msg.value = 0.9620081249962825;

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
    msg.setTimeStamp(0.9338403189735415);
    msg.setSource(47574U);
    msg.setSourceEntity(211U);
    msg.setDestination(19534U);
    msg.setDestinationEntity(122U);
    msg.seq = 11694U;
    msg.sys.assign("IZHKGGATOUWCHXPDEGMTVLSYLSRYADBCRZRDLJTEVSQVQIPWXPKTRAOALZMXTFHNFOJYNMNQZEWEODDALBYWDVKIRGGIFJAKABCHUPZUSPILXMSSSKRCGNVHDSTYNGUTMWJOIYXBXWFBQUPJHXVSFZFVTBOJCQBHLYAQJODDYEWJGOXUICEKQJEIHIFKPMENPNOGNLEBZFRZQNMUKUPWFBYCLNGCSQLCPRAETXWKMKMHQJBICZYORVTFRMUVU");
    msg.value = 0.9855047468968295;

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
    msg.setTimeStamp(0.3516130620193212);
    msg.setSource(42143U);
    msg.setSourceEntity(56U);
    msg.setDestination(57153U);
    msg.setDestinationEntity(197U);
    msg.seq = 32948U;
    msg.sys.assign("BSREJWUPTUSGDQSZPMNCUGQGZWZLEQCOSXFBUFWTOILTXQLDMFXUHLMTRYWGPEINLYYSOIRBYDEVWVKXTNGHDVJKJFAREKAVZEVNJXBKCADTVDHKCWMQMJEXBQBDORFWKVFHZYJOHHKFJTRDENYTJZRMSUGPXKPCIZUIJJ");
    msg.value = 0.19004085329199538;

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
    msg.setTimeStamp(0.023130729884459522);
    msg.setSource(1426U);
    msg.setSourceEntity(54U);
    msg.setDestination(39793U);
    msg.setDestinationEntity(81U);
    msg.action = 160U;
    msg.longain = 0.9383383765546266;
    msg.latgain = 0.7374420531804476;
    msg.bondthick = 2646010175U;
    msg.leadgain = 0.18634243755501811;
    msg.deconflgain = 0.14702778798278215;

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
    msg.setTimeStamp(0.40281938243156934);
    msg.setSource(19491U);
    msg.setSourceEntity(81U);
    msg.setDestination(52791U);
    msg.setDestinationEntity(205U);
    msg.action = 122U;
    msg.longain = 0.2503662576957657;
    msg.latgain = 0.25279648419146605;
    msg.bondthick = 3355670120U;
    msg.leadgain = 0.6055490822810715;
    msg.deconflgain = 0.5204821717800251;

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
    msg.setTimeStamp(0.6622149781280633);
    msg.setSource(22359U);
    msg.setSourceEntity(220U);
    msg.setDestination(3586U);
    msg.setDestinationEntity(133U);
    msg.action = 188U;
    msg.longain = 0.761292258715114;
    msg.latgain = 0.029675741347052753;
    msg.bondthick = 1596609081U;
    msg.leadgain = 0.7558902654239992;
    msg.deconflgain = 0.701829917738588;

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
    msg.setTimeStamp(0.9304596909064838);
    msg.setSource(56788U);
    msg.setSourceEntity(40U);
    msg.setDestination(8464U);
    msg.setDestinationEntity(51U);
    msg.err_mean = 0.8576325715790534;
    msg.dist_min_abs = 0.23041992422762714;
    msg.dist_min_mean = 0.16659616153654555;

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
    msg.setTimeStamp(0.05183044667286962);
    msg.setSource(37126U);
    msg.setSourceEntity(1U);
    msg.setDestination(11630U);
    msg.setDestinationEntity(209U);
    msg.err_mean = 0.594849324683081;
    msg.dist_min_abs = 0.01960066425558804;
    msg.dist_min_mean = 0.8835571904573222;

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
    msg.setTimeStamp(0.6097294826875427);
    msg.setSource(45220U);
    msg.setSourceEntity(6U);
    msg.setDestination(47379U);
    msg.setDestinationEntity(32U);
    msg.err_mean = 0.9321231401622768;
    msg.dist_min_abs = 0.5372627733822684;
    msg.dist_min_mean = 0.7744657311227641;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.39041633006530163);
    msg.setSource(28098U);
    msg.setSourceEntity(64U);
    msg.setDestination(25419U);
    msg.setDestinationEntity(123U);
    msg.uid = 238U;
    msg.frag_number = 51U;
    msg.num_frags = 216U;
    const char tmp_msg_0[] = {-70, 86, -2, 63, -111, -126, 21, 54, -21, 31, -100, -1, -27, 90, 42, -53, -110, -6, 18, -125, -120, 120, 24, -128, 120, 40, 27, 106, -87, 39, 75, 26, 69, 25, -92, -88, -79, -21, 68, 86, -45, 21, 86, 83, 35, 14, -64, -7, -99, 39, -27, 95, 55, -90, -117, -11, -110, -108, 49, 69, -122, -117, -99, 43, 95, -124, 93, 88, -38, 37, 111, -41, -123, 81, 82, -22, -120, -88, -54, 93, 18, -90, -109, 102, -124, -126, 124, 64, 107, -60, -11, 53, 109, -44, -73, -61, 119, -1, -86, 74, 96, 92, -18, 65, 108, -46, -61, -86, 95, 3};
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
    msg.setTimeStamp(0.3499388426345431);
    msg.setSource(10886U);
    msg.setSourceEntity(10U);
    msg.setDestination(22175U);
    msg.setDestinationEntity(25U);
    msg.uid = 165U;
    msg.frag_number = 248U;
    msg.num_frags = 58U;
    const char tmp_msg_0[] = {-82, -51, -125, 57, -5, 11, 101, -52, 102, -127, 114, 29, 70, 9, 21, 21, 33, -94, -14, 46, 3, -19, -1, -90, 119, 90, -39, 65, 32, -68, 89, -36, 14, -19, -128, 118, 40, -60, 28, -36, -98, 77, -125, -42, 85, -83, 53, -122, -61, 83, -39, 6, -52, -84, -18, -45, 85, -119, 14, -94, -15, 85, 117, 33, -21, 102, -39, 49, 75, 62};
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
    msg.setTimeStamp(0.5395010188334253);
    msg.setSource(21812U);
    msg.setSourceEntity(105U);
    msg.setDestination(24064U);
    msg.setDestinationEntity(179U);
    msg.uid = 170U;
    msg.frag_number = 87U;
    msg.num_frags = 203U;
    const char tmp_msg_0[] = {-61, -77, 25, -95, 97, -121, 126, -114, -11, 11, 8, -119, -42, 0, 11, 58, 49, -11, -27, 85, 51, -5, 14, -47, -66, -70, -59, 122, -91, 27, -15, 82, -125, -96, -72, -56, 5, -63, -36, -21, -11, 21, 117, 88, -41, -28, 123, -4, -115, 34, -37, 40, -10, 46, -96, 89, 116, 109, -48, -42, -21, 86, -53, 31, 1, 72, -20, 53, -24, -6, 107, 86, -2};
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
    msg.setTimeStamp(0.7000600882557059);
    msg.setSource(2761U);
    msg.setSourceEntity(193U);
    msg.setDestination(33566U);
    msg.setDestinationEntity(199U);
    msg.content_type.assign("YPOFTYEZPBZYQTKQBVHSHIGVCJEXPBOGLWSXGTBCVWLCTZCRPVPFZUYYDODGCZXBDPMQJXEGNHZMRMDBQFKOKFRHUKISHPEBJOATZMX");
    const char tmp_msg_0[] = {-119, 107, 105, 13, -124, 99, 90, -98, -45, -35, 89, 38, -3, 37, 111, -92, 44, 33, -25, -59, 28, -105, 28, 24, 36, 111, -91, -51, -7, -60, -58, 56, -59, 111, -97, 95, -41, -119, -50, 38, 12, -113, -111, -28, 109, -70, 70, -83, -47, 91, 80, 111, -108, -11, -29, -115, -70, -102, 111, 5, 60, 59, 37, 25, -126, 71, 87, -14, -40, 33};
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
    msg.setTimeStamp(0.15938416683517542);
    msg.setSource(34215U);
    msg.setSourceEntity(100U);
    msg.setDestination(49248U);
    msg.setDestinationEntity(3U);
    msg.content_type.assign("MLGKJQXERGXTVZIWWVYSHGFJNJZOSTANJLTKBAWRZKKRMUPUSKUJPBQMDWPDIXNKESTORPVTDXSALVOIBWQYOZSZ");
    const char tmp_msg_0[] = {-93, -84, -128, -40, -2, -121, 5, -44, -123, 27, 77, -6, -54, -117, -32, -54, 50, 43, 52, -76, 105, 103, -45, -26, 84, 30, -53, -90, 110, -95, -120, 73, 73, 38, 42, 103, -17, 50, -33, 24, -109, 12, -34, -54, -50, 106, -87, -15, -45, -25, 114, -81, -25, -12, -40, 76, -85, -123, -12, -41, -76, 55, 1, -61, 110, -8, 68, -16, 104, 110, -88, -20, -46, 32, -16, 101, 13, 106, -99, -55, 105, 102, -119, 88, 9, 115, -75, -114, 107, 76, 19, 109, -90, 78, 84, -31, 87, -5, 5, -113, 115, -4, 65, 31, -59, -54, -48, 42, 19, 43, 11, -96, -69, 125, -46, 82, -23, 117, 90, -34, -21, 3, 4, 122, 59, 110, 8, 4, -61, 16, -70, 13, 35, -39, -73, 83, -122, 93, 124, 59, 100, -91, 8, 24, -65, 85, -91, 57, -17, -112, -95, -4, -77, 7, -14, -68, -95, -24, -67, -29, -125, -11, 74, -78, 25, -63, 46, 106, 92, -45, 95, -56, 12, 52, -66, -30, -11, 115, 103, 45, 88, -115, -92, -101, -100, 37, -110, -50, 54, -98, -82, -85, 124, 27, -60, 68, -112, 19, -126, -54, 16, -63, 36, 5, -116, 116, -122, 108, 97, -23, 84, 72, -13, -19, 6, -39, 0, -120, 21, -125, 66, -88, -94, -123, 94, -47, 20, -116, 68, -95, 101, -118, 82, -103, -58, 34, -32, 15, 94, 123, -2, 79, -127, -17, 34};
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
    msg.setTimeStamp(0.5242398446073768);
    msg.setSource(59198U);
    msg.setSourceEntity(235U);
    msg.setDestination(20192U);
    msg.setDestinationEntity(112U);
    msg.content_type.assign("LTMYWVSQGOPSDCSHDLGDBHZVBQPTTMYZLGQVEYKNIQJURDOFVJQTQMRYNIDGJMTULRGLEBXNAALSDCQRVXKYKOZCEXFKUMIYNHWNSWVPPUBUJDYWNXLIJBJJWLQBDZASPFXEHGXAEWWOXZPNHXSUJRMTXFAEKAVTWPRTOKZRUIKVFFDFYCZKGMHCZSAQFRBRTVUTJHBOANBEIGOEYINMCHEUDNPXRSGEIKPJHQCCLAILWCZUYCOPZOFGAMFWI");
    const char tmp_msg_0[] = {65, -96, 64, 104, -83, -56, 58, 15, 25, -123, 107, 101, 0, 42, -81, -122, -15, 18, 101, -54, -64, 41, 124, 47, -24, 51, 54, 116, -52, 93, 77, -118, 3, -78, -83, 10, 97, 122, 42, 79, 8, -1, 43, 18, -67, -127, -119, -68, 31, 109, 31, -79, 25, 11, 43, -97, 49, 31, -15, 62, 89, 86, 50, 77, -78, -118, 40, -102, -42, 79, 41, 119, -110, 28, -86, -60, -63, -8, 63, 64, -79, -1, 86, 17, 76, -72, 90, -123, 32, 73, -93, 56, 31, -6, 34, -60, -58, 12, 14, 24, -80, -83, 45, -68, -19, 26, 64, -62, -124, -83, 112, 61, -3, -93, 10, -43, -60, -49, 115, 106, -117, -62, -7, -76, -14, -46, 19, -85, 29, -82, -54, 0, -92, 124, -3, 25, -51, 4, -23, 24, -118, -68, -66, 74, 76, 116, 59, 43, -102, -51, 24, 25, -19, 56, 101, -32, 30, 19, 58, -121, -58, -33};
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
    msg.setTimeStamp(0.6013661422561628);
    msg.setSource(11828U);
    msg.setSourceEntity(33U);
    msg.setDestination(25821U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.2661392004673231);
    msg.setSource(64873U);
    msg.setSourceEntity(154U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.9479913032074759);
    msg.setSource(15224U);
    msg.setSourceEntity(135U);
    msg.setDestination(39258U);
    msg.setDestinationEntity(177U);

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
