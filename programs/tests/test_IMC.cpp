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
    msg.setTimeStamp(0.536669016626);
    msg.setSource(3737U);
    msg.setSourceEntity(89U);
    msg.setDestination(6081U);
    msg.setDestinationEntity(57U);
    msg.state = 109U;
    msg.flags = 246U;
    msg.description.assign("TCWUOGXCEJMDNSBCOSFLPTXJADDXHTDVTXKCQYTGGUILBOBNRRJAEGCFUBZYUPPHOPBWBNYWAARREMJQIFEKXNNKDIRQGSAEQYWRYHH");

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
    msg.setTimeStamp(0.806063098544);
    msg.setSource(20971U);
    msg.setSourceEntity(46U);
    msg.setDestination(37896U);
    msg.setDestinationEntity(182U);
    msg.state = 89U;
    msg.flags = 11U;
    msg.description.assign("GNYBEYNHVDBKZGLWIIDEJZRPUNNNLADKAKSNTGLVFGKHPMXXOJAJPRWHIOPUWAXSAJFJWGSZEPXFQUXDTWKUJBHBGYYDMVIDRZFIAFBALLQSLFBCOCZXQVLPVPTKUYYDOPQWXKMOMRICYCVERVFHGIZZRJISSUCOQSYFXMYQIBEBNDQZHTBZFSCVOSQHHAAXKBUWCEDMUAWOMZGLCJHGTMTWM");

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
    msg.setTimeStamp(0.859667894321);
    msg.setSource(33060U);
    msg.setSourceEntity(156U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(182U);
    msg.state = 28U;
    msg.flags = 169U;
    msg.description.assign("UFTAOGMQLGRVAHLBXRLTAHDWYPAZDOJEVNGHOSPOYTXBN");

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
    msg.setTimeStamp(0.539814436588);
    msg.setSource(26414U);
    msg.setSourceEntity(69U);
    msg.setDestination(58543U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.741779365896);
    msg.setSource(23603U);
    msg.setSourceEntity(166U);
    msg.setDestination(21655U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.983131366222);
    msg.setSource(45768U);
    msg.setSourceEntity(112U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.268136468165);
    msg.setSource(48667U);
    msg.setSourceEntity(213U);
    msg.setDestination(23975U);
    msg.setDestinationEntity(51U);
    msg.id = 175U;
    msg.label.assign("UGIGTMGLBFKJDWLKCHERFFKTESRUBSOITDTPEGLZJGXWLBYFTIXASEQMMUKTZZFCRBJIWJZOGIANQQUACYUWNMHUYVJQPTVDHPYASPGWZHVFAO");
    msg.component.assign("IRBQBNXJBVPSWWGOMBZLMUMYNRWIJTA");
    msg.act_time = 2605U;
    msg.deact_time = 19246U;

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
    msg.setTimeStamp(0.1768856371);
    msg.setSource(49572U);
    msg.setSourceEntity(101U);
    msg.setDestination(55677U);
    msg.setDestinationEntity(109U);
    msg.id = 96U;
    msg.label.assign("UPXSQONGUJKEIWYBZOXISHTRPCUDNRGGFBKBYLOUQZAKEBWSFAIWHIJQUBCFRXZFXSSPDJSRRISCAARNVOPGVKNEKQEBFPQMXHOMYOGNKAFVTBWG");
    msg.component.assign("SJEITQWAFZIPYP");
    msg.act_time = 13029U;
    msg.deact_time = 5501U;

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
    msg.setTimeStamp(0.142609702731);
    msg.setSource(39423U);
    msg.setSourceEntity(82U);
    msg.setDestination(28716U);
    msg.setDestinationEntity(207U);
    msg.id = 19U;
    msg.label.assign("AKXUCJSDKROJWRIPGLHAQFFTYTEHTGXJEAXBVHGWDUGJPWVJSLEYNEBFQEGQHUACGKNQZXRWMWDNATOKDKDVPUYIVRQFYCZQOVAFRHHNOAINFCWMLNLPVFPVZSBMGJOEYOMYFIPIYGSZOLFURMTWRRDMXHYXVCLNSZLFCBUMZBSLKIMVETBAQPNGQUNLDWSTIKTUJQRIZHLEDXCACDUJUHTJTKBOWHXBSOZQCDMWPX");
    msg.component.assign("CHYMFXUNVGVUJTYIFLPFERQDATYZFGMTZXHIWNBGPWOIKSQPFDWWBVJMNUWDAVYSPNXXTPNUCH");
    msg.act_time = 23754U;
    msg.deact_time = 58638U;

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
    msg.setTimeStamp(0.434189525956);
    msg.setSource(39240U);
    msg.setSourceEntity(56U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(175U);
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
    msg.setTimeStamp(0.242002495886);
    msg.setSource(38708U);
    msg.setSourceEntity(149U);
    msg.setDestination(28447U);
    msg.setDestinationEntity(117U);
    msg.id = 189U;

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
    msg.setTimeStamp(0.888302967652);
    msg.setSource(22485U);
    msg.setSourceEntity(109U);
    msg.setDestination(63094U);
    msg.setDestinationEntity(107U);
    msg.id = 81U;

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
    msg.setTimeStamp(0.698662012952);
    msg.setSource(33920U);
    msg.setSourceEntity(58U);
    msg.setDestination(32940U);
    msg.setDestinationEntity(51U);
    msg.op = 244U;
    msg.list.assign("GJDQIDXSJFHRJBPIPBPJUADIOGCCSRMDXBZUTEXZUZFYESYMHRQHTWWASMKAWPLUJQN");

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
    msg.setTimeStamp(0.861712429783);
    msg.setSource(1974U);
    msg.setSourceEntity(101U);
    msg.setDestination(61528U);
    msg.setDestinationEntity(177U);
    msg.op = 169U;
    msg.list.assign("UIGBHXBGZOQBXAIVCZVUZCZPGPELKQRCKHHMGPHWRQBXNQPEZYJIDDOWURCLXDGDBZSFMEGVKARNZIGYTMUPXJJZGWIQOEMONSDWDYLEJMBJFNJETDBCKHXRLSOI");

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
    msg.setTimeStamp(0.348994787127);
    msg.setSource(31811U);
    msg.setSourceEntity(12U);
    msg.setDestination(17769U);
    msg.setDestinationEntity(34U);
    msg.op = 197U;
    msg.list.assign("RMEJNSPUJAQFGTERMPVGTCRHEFHWUOYZXRKTOVMYGHYDOHVNEXAFUMGLSPSJXVKLKPXEQFBGEZGSALLIDIIZMBGXZYTKQKPRTUCBWEXJOOSMXXXTFCHOHVMQQGMTKLCTDDRFIMGSFHQGLHQTCUAYNBLSCWIJDVZJCSOUEINNSIBYFFCBYNIVABCRRJWZAQLWPERDUJBDPBPARKZVWM");

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
    msg.setTimeStamp(0.993978238722);
    msg.setSource(50056U);
    msg.setSourceEntity(142U);
    msg.setDestination(50350U);
    msg.setDestinationEntity(82U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.809934431368);
    msg.setSource(23712U);
    msg.setSourceEntity(186U);
    msg.setDestination(47924U);
    msg.setDestinationEntity(209U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.353224513976);
    msg.setSource(26877U);
    msg.setSourceEntity(104U);
    msg.setDestination(55866U);
    msg.setDestinationEntity(151U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.0539375656831);
    msg.setSource(55068U);
    msg.setSourceEntity(220U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(224U);
    msg.value = 177U;

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
    msg.setTimeStamp(0.989011579874);
    msg.setSource(16009U);
    msg.setSourceEntity(48U);
    msg.setDestination(60246U);
    msg.setDestinationEntity(70U);
    msg.value = 126U;

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
    msg.setTimeStamp(0.789831489781);
    msg.setSource(38785U);
    msg.setSourceEntity(195U);
    msg.setDestination(14944U);
    msg.setDestinationEntity(199U);
    msg.value = 216U;

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
    msg.setTimeStamp(0.0820520221034);
    msg.setSource(54200U);
    msg.setSourceEntity(19U);
    msg.setDestination(21528U);
    msg.setDestinationEntity(231U);
    msg.consumer.assign("FXYWXDLUAOQBBKGCYGFMHZTHZPLUZQPVJASEHGZODIDOQCXJYMJAQ");
    msg.message_id = 12181U;

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
    msg.setTimeStamp(0.0590609564074);
    msg.setSource(35619U);
    msg.setSourceEntity(220U);
    msg.setDestination(40037U);
    msg.setDestinationEntity(103U);
    msg.consumer.assign("JDNWGHADDFTBQAWKZRJIVBQSJTZMXSHGZXHMXKRBVUKZOONKDOMBAIJYMIDOUKBCVDFGPXARFFFZVSPFAIRELZEPGCTIJWOFLLTJLLACSTUEJYUEYNRSIKAEZLSYPGDYLUTGHYHDWPDOLTXUPWFANIREGLIQCCLWZRFSOKVQWMBBRMFWQEGZOJWYCGTQXUJVKATVXRPQHCESBVDEWPBJQHMUNNCXOYKCPZRCP");
    msg.message_id = 20188U;

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
    msg.setTimeStamp(0.89917031546);
    msg.setSource(46802U);
    msg.setSourceEntity(244U);
    msg.setDestination(59801U);
    msg.setDestinationEntity(22U);
    msg.consumer.assign("ZYBYXKSRCNAZESPIYUMMOSEBOQJHULHOWAUUZJAHUWHOBURGLGDXROYVYVDWCFFCHKZCWNLVDUQXMSX");
    msg.message_id = 45888U;

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
    msg.setTimeStamp(0.698824137757);
    msg.setSource(30407U);
    msg.setSourceEntity(196U);
    msg.setDestination(54943U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.0442592128812);
    msg.setSource(1722U);
    msg.setSourceEntity(161U);
    msg.setDestination(18753U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.569775414916);
    msg.setSource(2509U);
    msg.setSourceEntity(207U);
    msg.setDestination(14497U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.991974006312);
    msg.setSource(60374U);
    msg.setSourceEntity(77U);
    msg.setDestination(16663U);
    msg.setDestinationEntity(154U);
    msg.section.assign("ZUZFSOAPJUQCTIK");
    msg.param.assign("BVFZYCFBGVSNKHAPHLODNBEISECRCAETSOYUMIFIBFTMPYPOXPBWNKDHOUNPXAKMVEVGMTIGEMTXODVCQRLIPGLZQTUFNXYACVTCSKZGHSRVKKLFEMZVR");
    msg.value.assign("BERNVRFSOFMLKHLDIUYZSLTNIHMVBFDJUKITFPWTBQMJVDMCAEUFFKKNGIBRIVNEUEYQMPXNCXGAHQFGCPVSNELKUPLTUGTMXWIOZPXDEZSDOTDOHWOOGGHSWVWDCUGJNZBYQZKGRWQTJZWFJYXQOMLBZQKQAPARYANREYJJSYHHPKXPJWCVLYINCRKTUGOEVXRKPQIDMZSHZICTRBTBMMJOYFJAISASSDEADLOFBQWVUAYWCC");

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
    msg.setTimeStamp(0.827686368825);
    msg.setSource(37013U);
    msg.setSourceEntity(3U);
    msg.setDestination(30834U);
    msg.setDestinationEntity(150U);
    msg.section.assign("WJQOCDVZSSMVVKZPPYDARMWHILUHVTVZRTNDCVNSSPRI");
    msg.param.assign("FNEOGETHSVDXKABZUWIPAHCVFJNLSJOOFXSSEDZAAYTQSBOQHAUVBXRQCZGBXCVRRIFGZJKQDFHMBWWEVNWPUJHPMUWINJQT");
    msg.value.assign("MDLTFZROCQEFKUFHRYQQCXUJYIIHFGPATOATESAFGTIPKBYAVLGTVIKPPTHWLMKVSLHXVVCZQXDXCRDPFGUWSSZOMGOSRXJHEYJPOAUUCJLUURJOUHDVP");

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
    msg.setTimeStamp(0.209126432268);
    msg.setSource(31088U);
    msg.setSourceEntity(217U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(179U);
    msg.section.assign("FCSMEQNVKANXGSUONPRDDNBQJCZQMTDRVLSTSKPOKRTEJCUTVZLAHZUUTBFJGMFMMKMLGZFTJSDSEVWXVEIGPOYNIZMXGDGMRVIXEACQFNHUWHIWLROKDHZCCEFRDIRXXQATJKCAIBRSMI");
    msg.param.assign("MBZNPNDWMJEIIMQFOEBNBVFVYVPRYPHJFGGXQYQGJROMENWPONSNVLAOLFNYKRYSYKUZZWVDRUTITABODHUYPHWSXPLDGLHKKSUZ");
    msg.value.assign("BLALHIDKPIMZJNEGCKXMZWFJUXRGKQBMFDNPXDABUDYNDOTNEFIWBROUCFELXOKLNQQKOTJUJJICLXFSZWTTRUEKBRUSBVVKFJZIJLBGXQDNICCUWSKWGRKQZOBQEOEHXMABYQJPVDZOWNHEQHLCVTCANDMLYYMFQYGMX");

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
    msg.setTimeStamp(0.0327080525259);
    msg.setSource(15887U);
    msg.setSourceEntity(129U);
    msg.setDestination(29092U);
    msg.setDestinationEntity(27U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.133088182136);
    msg.setSource(6270U);
    msg.setSourceEntity(249U);
    msg.setDestination(16076U);
    msg.setDestinationEntity(141U);
    msg.op = 48U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("HUHEZCGGUKNFEFVWVSCVCIMVBONOUDGDARSFPXWNSGBXLHMBKBSXLOAJEJYGHRUKEBCXLIQQQIYAYJOTAMPCHJOEDNFIPLCXQESYZRFSXFIMKUOITDHPBDPNDWOLTRVNLKOWAQZBURUZCFWRYPIUVTYEQRQPXKLIMYKLBGSKXYNQCVQWZGAFVMHNJSZOZEKMLTYGAVMFTTOHSGEGKBZJUXFJJNWCJEIU");
    tmp_msg_0.param.assign("KMQVYYYBNLLIDLOUGZLYJJVIRMEXHMNYRQ");
    tmp_msg_0.value.assign("JLXKUMGHFOVPZSJQDXOLLEHCEUXNIPDZLLMAFUNKSGCNPEXTEWHLTYKWIUMARMLENZHVXCTJZMGXWSYUWYJVALQPNCIJGHTUFDESBWWTOAGDKVOZQZDORKEQPXLQQRDBEIMJPWYBDKOZRTVIKRYWSYEAMGQHUC");
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
    msg.setTimeStamp(0.942297336944);
    msg.setSource(62932U);
    msg.setSourceEntity(245U);
    msg.setDestination(3050U);
    msg.setDestinationEntity(29U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.912288228647);
    msg.setSource(5402U);
    msg.setSourceEntity(0U);
    msg.setDestination(47067U);
    msg.setDestinationEntity(213U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.442006636491);
    msg.setSource(1478U);
    msg.setSourceEntity(140U);
    msg.setDestination(3982U);
    msg.setDestinationEntity(249U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.934977162116);
    msg.setSource(20729U);
    msg.setSourceEntity(8U);
    msg.setDestination(6948U);
    msg.setDestinationEntity(168U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.0356428621218);
    msg.setSource(18407U);
    msg.setSourceEntity(113U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(106U);
    msg.total_steps = 58U;
    msg.step_number = 101U;
    msg.step.assign("GMGTYSSMZSQEQHKIXCKRNFSKGUMJFWXLZTOKTOIBXUCIHEIHPCYBQAOJDWVDZLECYGASNKPFHLLGFVBGRZLYQKYJYMEVKPRZAIBPMDTVMFOJNNPZWQMXQAONCHMPZCAJCSRBTOJTWAVHXBFBXXOCWIAITWDDUHWL");
    msg.flags = 37U;

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
    msg.setTimeStamp(0.106848118777);
    msg.setSource(41349U);
    msg.setSourceEntity(141U);
    msg.setDestination(16729U);
    msg.setDestinationEntity(158U);
    msg.total_steps = 126U;
    msg.step_number = 76U;
    msg.step.assign("GQLRJNEAZKFZQRVQIMNPPTNRZRFOBXYSOBDZFSBICMFUHTJGGPERJSTMJVLEWEXNWBMUJQVEUAWILEPNUOGGQDOPOAZXXHTCWFVCIWATDLZMEYGSYIHAFIRKLWAOWTPXLVQNKXXZINJCSAHUWGQKKMNQRVXLINDLTKPBTUMOSHFVYSYHLBHIGKLEKDEGCMPUQZHZZAMYFFWYBCXHBXQPRAJSDOMKTBCBCVDJUCOGKVPRUJFYDCSROEJ");
    msg.flags = 230U;

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
    msg.setTimeStamp(0.111622232886);
    msg.setSource(28986U);
    msg.setSourceEntity(248U);
    msg.setDestination(61868U);
    msg.setDestinationEntity(73U);
    msg.total_steps = 93U;
    msg.step_number = 40U;
    msg.step.assign("FFLCZVNKZPZZVTRXKMWIBEXUUXJLFRIZCYMZJNSZILGLXEISQWCBVOAQRWMEUTCXHTCGLKOJUUSGUNRBXOCKSRRJSYRLWPYKCSKQIWXTOWDTEFIWVEYQHXEGVANLBKBDGNYYWCEEKPGUQBTCZUFVZTIQNATOPIDSYBHBATDMORIOJFBPOMLSQCAVGDUDJEKAAVPQMLFPHAPXNNBVRURHGIGDMY");
    msg.flags = 130U;

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
    msg.setTimeStamp(0.973646679067);
    msg.setSource(4856U);
    msg.setSourceEntity(71U);
    msg.setDestination(29935U);
    msg.setDestinationEntity(138U);
    msg.state = 213U;
    msg.error.assign("OJRCXOMEGBBZEJMTTJNYIPZUAWSSWVUGBQBLJJQTPLPZNEDUZMAYSENMBQMITOIWCWCNEQQGYWACTPIFASLUXXDATGUYICXWGNIVFLVIKDBHMNZRPDHEUOEOMSROMFIVXDHXRBVFWBYGYNIRYHGRKXYFDVGJQAWTO");

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
    msg.setTimeStamp(0.391156137972);
    msg.setSource(13840U);
    msg.setSourceEntity(94U);
    msg.setDestination(50773U);
    msg.setDestinationEntity(148U);
    msg.state = 141U;
    msg.error.assign("EHCZCMEGOKCDSAUXHJPGTPXNRUILDYLCBFCJTHHQQPQVJSJYEMMAGVVKWXYOYBGNANVPPORYVHYFSKEZCYIEWYWKDMLRAQAVUCEKNVEMBRWLZUEQGJRVPWUSWTHHXELPXQFUPHIRWAJKTZIZLOTTCKQRADRZTHSIFBFDFGKBC");

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
    msg.setTimeStamp(0.582438854156);
    msg.setSource(7783U);
    msg.setSourceEntity(152U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(140U);
    msg.state = 85U;
    msg.error.assign("ZEYOYVWGOGHZNMCJXQIIBEQWFKRRVNFTMUKZTKOULKGLXMBSNBCZNRHEYKALJUPUIWCWQDNQTMRTIATCJDMZZLRQOJBKBCABJFHAMPSUTIVGIGEUWZDEWHP");

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
    msg.setTimeStamp(0.455803963315);
    msg.setSource(19934U);
    msg.setSourceEntity(134U);
    msg.setDestination(31911U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.886308951113;
    msg.lon = 0.990917818494;
    msg.height = 0.857113626781;
    msg.x = 0.466839804074;
    msg.y = 0.326493379426;
    msg.z = 0.623538922199;
    msg.phi = 0.596458432496;
    msg.theta = 0.246423946285;
    msg.psi = 0.983184893126;
    msg.u = 0.172255859495;
    msg.v = 0.163871295599;
    msg.w = 0.144367989618;
    msg.p = 0.491019226369;
    msg.q = 0.940582437399;
    msg.r = 0.242856577918;
    msg.svx = 0.696890820103;
    msg.svy = 0.700087366259;
    msg.svz = 0.979478160091;

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
    msg.setTimeStamp(0.615147614775);
    msg.setSource(41207U);
    msg.setSourceEntity(233U);
    msg.setDestination(31975U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.0392357556173;
    msg.lon = 0.00430118866979;
    msg.height = 0.464372663921;
    msg.x = 0.191706917637;
    msg.y = 0.516867321047;
    msg.z = 0.332799883239;
    msg.phi = 0.0932625959095;
    msg.theta = 0.288903494448;
    msg.psi = 0.447616684987;
    msg.u = 0.346120729534;
    msg.v = 0.562452354267;
    msg.w = 0.468776629333;
    msg.p = 0.504690794946;
    msg.q = 0.295721002463;
    msg.r = 0.33063848188;
    msg.svx = 0.821976818703;
    msg.svy = 0.551549475189;
    msg.svz = 0.159749670216;

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
    msg.setTimeStamp(0.725556235357);
    msg.setSource(27389U);
    msg.setSourceEntity(85U);
    msg.setDestination(31389U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.940200927175;
    msg.lon = 0.5653983079;
    msg.height = 0.517252655681;
    msg.x = 0.0823796982897;
    msg.y = 0.0784427993598;
    msg.z = 0.303984207017;
    msg.phi = 0.748928004074;
    msg.theta = 0.0579611643438;
    msg.psi = 0.918074450737;
    msg.u = 0.658885517454;
    msg.v = 0.838958479643;
    msg.w = 0.216145413458;
    msg.p = 0.924380477823;
    msg.q = 0.925006671738;
    msg.r = 0.346640011258;
    msg.svx = 0.997720586151;
    msg.svy = 0.416513122024;
    msg.svz = 0.576791628801;

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
    msg.setTimeStamp(0.246089964294);
    msg.setSource(10867U);
    msg.setSourceEntity(167U);
    msg.setDestination(42948U);
    msg.setDestinationEntity(119U);
    msg.op = 12U;
    msg.entities.assign("KTNSRUFYJTMQWCWNRTQKBHKZMIMLQBXQPCQWJGXWFYGBHDUPNZNYXYHOKWQTAMKLEGSKVQFIPRMEBSXZSZYSQP");

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
    msg.setTimeStamp(0.833669408257);
    msg.setSource(31312U);
    msg.setSourceEntity(250U);
    msg.setDestination(2557U);
    msg.setDestinationEntity(200U);
    msg.op = 243U;
    msg.entities.assign("QXUTCPEHKPWZRKBCIQEVHONKICLJQZNPZYREAHZSYWFHDCWJUJVDDGBFR");

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
    msg.setTimeStamp(0.39047628774);
    msg.setSource(28087U);
    msg.setSourceEntity(147U);
    msg.setDestination(23214U);
    msg.setDestinationEntity(250U);
    msg.op = 247U;
    msg.entities.assign("FYQUPWMCXRRAZAUYDBHNVGJAOXFAHLOZCOIWQAJJ");

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
    msg.setTimeStamp(0.0928439059572);
    msg.setSource(13390U);
    msg.setSourceEntity(6U);
    msg.setDestination(53430U);
    msg.setDestinationEntity(46U);
    msg.type = 179U;
    msg.speed = 23356U;
    const char tmp_msg_0[] = {-19, -124, -67, 95, 62, -58, -31, 126, 32, -64, -31, -21, 2, 5, 39, 103, -21, 13, -122, -118, 36};
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
    msg.setTimeStamp(0.930473438327);
    msg.setSource(56761U);
    msg.setSourceEntity(239U);
    msg.setDestination(24218U);
    msg.setDestinationEntity(58U);
    msg.type = 90U;
    msg.speed = 44934U;
    const char tmp_msg_0[] = {93, 68, 109, -19, 105, -89, -99, 42, 57, 29, 104, -114, 120, -39, -45, 122, -79, 110, 90, -77, 28, -12, 42, 95, 104, 38, -2, -88, 45, -41, 59, 50, -83, 3, -17, 29, -49, 102, -93, -68, 64, -66, 7, -64, 28, -112, -8, -108, 121, 34, -123, 36, -11, 71, 20, 74, 121, 56, 20, -63, 74, 105, -80, 22, 92, -23, 25, -51, 69, 95, 62, 24, 79, -20, -69, -11, 8, 83, 77, -70, -106, -118, 76, 42, 98, 33, 92, 123, 11, 13, -28, 117, 110, -48, -105, -9, 63, -89, 115, 52, 84, 67, -50, 61, 90, -43, -95, 19, -90, 120, 103, 113, 113, -74, 18, 91, -71, 100, 36, -81, 23, 114, 91, 92, 107, 84, 12, -68, -83, -33, 42, 101, -96, 50, -117, 58, -91, -82, 0, 54, -62, 121, 9, 113, 30, 34, -83, -50, 100, -25, -43, 72, 81, -39, -60, -98, 75, -19, 122, 45, 17, -43, -35, -26, 51, 96, 47, 71, 52, 56, -109, 8, -11, 90, 63, 2, 17, 30, 97, 101, -77, -6, 9, 101, -63, -40};
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
    msg.setTimeStamp(0.495599371498);
    msg.setSource(36252U);
    msg.setSourceEntity(191U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(181U);
    msg.type = 150U;
    msg.speed = 47311U;
    const char tmp_msg_0[] = {1, 73, -63, -126, -41, -30, 87, 91, -49, -40, -63, -4, -128, -85, -41, -82, 120, 100, 10, 39, 15, 94, -44, -12, 112, 61, -60, 21, -84, -69, 5, 67, 52, 107, 125, 119, 114, -111, -15, 13, 86, 70, -117, 86, 23, -123, -45, 103, -61, 90, 93, 114, -60, -7, 120, 14, -41, 39, 55, -122, -43, -46, 34, 4, -26, 119, -30, -53, -10, -117, 117, 122, -48, -72, 2, -32, -76, -50, 84, -106, 83, -125, -106, 88, -60, 34, 71, -42, 17, 40, -35, 66, 110, -52, 112, -122, 65, 32, -79, -122, -95, -83, 31, 91, 16, -39, -109, -34, -106, 63, 30, 66, -10, -4, 98, -75, 96, 121, -69, -120, -123, -99, 122, 90, -24, -39, 50, -73, -77, -27, -113, -20, 67, -2, -85, 29, -38, 54, -5, 18, -10, -80, 35, -11, -94, 53, 93, -80, -105, 70, -38, -74, 111, -48, -76, 34, 34, 15, -116, 20, -66, -8, -126, 54, 120, 25, -125, -47, -60, 110, -127, 68, -71, 38, 63};
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
    msg.setTimeStamp(0.190333729106);
    msg.setSource(20840U);
    msg.setSourceEntity(219U);
    msg.setDestination(35619U);
    msg.setDestinationEntity(238U);
    msg.available = 220378809U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.933598261153);
    msg.setSource(5214U);
    msg.setSourceEntity(45U);
    msg.setDestination(5141U);
    msg.setDestinationEntity(156U);
    msg.available = 2931012897U;
    msg.value = 133U;

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
    msg.setTimeStamp(0.359712165834);
    msg.setSource(36637U);
    msg.setSourceEntity(150U);
    msg.setDestination(40343U);
    msg.setDestinationEntity(131U);
    msg.available = 594514178U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.381450299921);
    msg.setSource(42447U);
    msg.setSourceEntity(160U);
    msg.setDestination(39066U);
    msg.setDestinationEntity(33U);
    msg.op = 110U;
    msg.snapshot.assign("HQLWTKMRHHWSCCYNEKSOTDPHMKXUGHOTHMPIJHBBYXNZKXXWGWGDALDUZAWQSZILRFVZNBRAYPQRUHSJGJIDALVRCMEPEOLDXVQJACTMDRCOHEBPCGAUNBAKXOFXJXEUUNLOFSGRCWNALJJWPUTIYITUPXAYKFWKERVTJESDEJZNVFRJGBGIDMFKQCEFIPBMFZSGFQYWUVKPPDSYBOYOCYZWQBKIXZLQIVCIQAFNZBZYQMNLRUV");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 253U;
    tmp_msg_0.goal_id.assign("DTMSUCWCWGDLYFVHVPONOOSEEPWGLFYQHPABKBSWJQCLVCXGXDIURSVEHDLTRUZTIRMMBRJWLREYMUFXGEMPZJQOVMTXTUSVNWDEAXFRPZGHCLCZFOBULNKMAKVKYNHZZVLWSNIPDBIGOBDNNMOFYLGTQQGD");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("BHOQPJSAWGLUOFPLILKBIYLDTXACHDHXUZNBIRMCSVLAOIOB");
    tmp_tmp_msg_0_0.predicate.assign("CWIFYWKFJAAJMEZNKQTHVBVJTSMDVUNXGJCTLGJOTIZFZYTFBMZYLLBSLZRQCXUUGYYVZNWQMQYNBZGKDCQDXKILMOJDHOVKCAROCIEAHCFWPNOGJBOJWPLEBCPSERA");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("DKXYGFWTUICYNXJPKOBNRMMWOJEPDRZICDNMITAYXCKAFQVCIGFKBEDPLZBTNNXSOIERDMKNNRBTVUDCOCSFAGWTLTSZBSVTAQZEJBUQHSOTYJZHMKYAZLGHTHZUFWHKQVFPDPJCRFIMXVYMWEZPZVFIGFNGRBJJPUZWPDMFQVANXSXSCIQGCNQBVPSOMGSCKWUOERGGIAMHJOIEQEHUJAYOJAYURLYXLLUOHK");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 122U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("XIHXDVNDFMIPTHCRWNMUAGRRSTZOPPUVJMEUZBCMGPBGKKEXZIILPYNUCUYBTQPDOZVBKHIGUQYDBNRFNDCMIQYLYBJFNIUPWGENTQWLLATRHDREJVCMMHSWEHTJOFDXWAYCOSLJHOIYFDHZOCPWTLFBEAWXXSDQWMSVLTCTAGHNLZXZOPNILKVMZWCKKESACDRVUEZKVKSMAXQUPVNERRKEJVFB");
    tmp_tmp_tmp_msg_0_0_0.max.assign("CIWOISNSJXJLYFVVAGNUMRBSGOVEZYTJFLRKOBJJYVRVUMRWEDYCNNXWDFGBMTTUIYWZGAOWBTOEYQNMLBVRJLPPOKJOTVQITULPGHBWLHVXAUIGZKKQNDKVEMSRWQZCRQCQNDFGAUFFYUOYMQBTMCZXKHMDGPPUUYAMVIZSPORWIAXNAAEGSHSIFREZSCMIEXKWDHDLJCWJFNUSXLQXEKEJNKHIPB");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.859031990434);
    msg.setSource(8611U);
    msg.setSourceEntity(83U);
    msg.setDestination(20264U);
    msg.setDestinationEntity(95U);
    msg.op = 20U;
    msg.snapshot.assign("BBHJFKOOAPAFBAKDMAMUVHJHEILOPLDSHBORIXWXDVGUMHINETFSSNWMSVLIEIVJQSUERAJAASMYKRLTUCQJBTINOBJDFRAZT");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.964530416657;
    tmp_msg_0.lon = 0.237669565097;
    tmp_msg_0.z = 0.36157793408;
    tmp_msg_0.z_units = 172U;
    tmp_msg_0.speed = 0.621911017558;
    tmp_msg_0.speed_units = 36U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.942434535386;
    tmp_tmp_msg_0_0.y = 0.954494384006;
    tmp_tmp_msg_0_0.z = 0.321765621858;
    tmp_tmp_msg_0_0.t = 0.40997521723;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 22060U;
    tmp_tmp_msg_0_1.off_x = 0.0504907893271;
    tmp_tmp_msg_0_1.off_y = 0.241889368967;
    tmp_tmp_msg_0_1.off_z = 0.0158506879943;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.130783172681;
    tmp_msg_0.custom.assign("VMSXLUOTDMJEGUTNDZBGDFHCDRCKNYHAPMABIOYVLCGRSHFGQWRNDZHVZTCPKXWYTXPEU");
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
    msg.setTimeStamp(0.413828725932);
    msg.setSource(60107U);
    msg.setSourceEntity(161U);
    msg.setDestination(40191U);
    msg.setDestinationEntity(95U);
    msg.op = 155U;
    msg.snapshot.assign("IWFDQVOIVPQCSBEWHBSFKAFPPZEMQJAPLMLUXYQMWDBKIPNFRMTHCHNXHWKVRQGWMHSVA");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 34U;
    tmp_msg_0.quality = 179U;
    tmp_msg_0.reps = 140U;
    tmp_msg_0.tsize = 68U;
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
    msg.setTimeStamp(0.462380609773);
    msg.setSource(485U);
    msg.setSourceEntity(24U);
    msg.setDestination(20992U);
    msg.setDestinationEntity(223U);
    msg.op = 31U;
    msg.name.assign("SEDDTPLYTSAIPVBNFICQPJIQLAXOJWEXZGFZFSLHEMNFLQTQUWFLGRCDVSRGOPESROCRUXUOSKWBIHMSXGPBWIKACTJWZHLPJXAXYNEYCFVLPABVEDNAZGGNFLZFWDPJNUHYKHQDQTZHQKJNCASZDHKVTYC");

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
    msg.setTimeStamp(0.00874975257206);
    msg.setSource(64840U);
    msg.setSourceEntity(199U);
    msg.setDestination(18802U);
    msg.setDestinationEntity(182U);
    msg.op = 254U;
    msg.name.assign("HYHIQHYNGRZTNCNITTTIPKNFWBSTFCNXKKXUZOEEYNGFTWPVYVIAJLDSEWVGUCBQRXAZLUFLVOWWGDPGVBXCXOHDKUBTUIITARQASYJATLKCNOZBFFEDMXDKOUMZIVYBBFJHSDQSNYTQLELZIWBSBGQKZQDAOEERPZPHDJMOJJVRZMCRCAESPNGXJCRRIXVFABFMWRXWSIJDHL");

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
    msg.setTimeStamp(0.031847025563);
    msg.setSource(41286U);
    msg.setSourceEntity(143U);
    msg.setDestination(2072U);
    msg.setDestinationEntity(20U);
    msg.op = 249U;
    msg.name.assign("AHGIWWZDOWDYEEWLXWPXDRSQEKQVKYOFKLWAVYJZCFURVGZOQUNVFLSSCXOHJXQADJJOFOPSBTKMTXPVCEEPPGYPSCLBGRFUKIDFYMBH");

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
    msg.setTimeStamp(0.265005142322);
    msg.setSource(60153U);
    msg.setSourceEntity(183U);
    msg.setDestination(1207U);
    msg.setDestinationEntity(239U);
    msg.type = 44U;
    msg.htime = 0.0310886028383;
    msg.context.assign("BMLSYPRSVZOAWUQQNMSAPNCVDYITTDHCBFFWYQUGOKAKMDKXTAJEZQPNRNPCTDTGEIRVWLTKGSLXXOACTGGJVEDOVGAEHIHIFMYBUXNZBIHHPTYQQYHGIRACEZEYPGKLGJUSVUPRWFJJDBOPYSOQZJEREOUSZWVCWXRIBNJTEBLHDUUYJNOWRXCMCJFSUBIKYRMKNHKZMX");
    msg.text.assign("MIIFSRWDVQXJYOPMCEYAYQFHGGQCBZEVMAFCUPKWVKXSFZHTPTXWLINMLXZMQBKXUDUCSPX");

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
    msg.setTimeStamp(0.510093705063);
    msg.setSource(39626U);
    msg.setSourceEntity(96U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(138U);
    msg.type = 63U;
    msg.htime = 0.223749318892;
    msg.context.assign("JKRNCMNSZXFGJXXPXJVWCFMOIUWHHIAYBSREJEXEFELABT");
    msg.text.assign("CBJMAHQQDICAXSJDIUSDLLZPGCYOHJCYGYEVVALFLNWRXHFSKEMUOLWBFANELCVENGDGHCVTXBDPQSTWOIZZLHJTIPQNWYZMNUJRFUYBFNMIKTIQRWNZLJNEWEKBORPTIDPBXPGHZYCJRMPEXRBMXA");

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
    msg.setTimeStamp(0.579773852327);
    msg.setSource(30291U);
    msg.setSourceEntity(117U);
    msg.setDestination(64771U);
    msg.setDestinationEntity(37U);
    msg.type = 203U;
    msg.htime = 0.942321230474;
    msg.context.assign("ZGCFCRVNIIJRVKJXKEPQWSZMNSSYSJKLXFUQNMQJCWERLW");
    msg.text.assign("SIWTEKBTQVRLXBEKLEFTCTJNNKPGWWOEZIMQIOXUEYDBHSMRSLJXKKOPXHFFUZEOQGGVDAMJMFLKZVHAQAYTNFMTPDNJQHCTBDUNDSZOTIZQNCHKIDGYVCAGZLYQDSLIPWUYDUAQZG");

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
    msg.setTimeStamp(0.33468864051);
    msg.setSource(56635U);
    msg.setSourceEntity(157U);
    msg.setDestination(54581U);
    msg.setDestinationEntity(144U);
    msg.command = 186U;
    msg.htime = 0.113225676731;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 247U;
    tmp_msg_0.htime = 0.291629673575;
    tmp_msg_0.context.assign("RCVFNKXBOGYKEVZPBBIHCMSPGYNBLAVKJAZVAPAEIFWRBDUGSOILQFDCJGMUTRNJIKWVRU");
    tmp_msg_0.text.assign("IEFZIEHZWXCUFGLVQWYIOQAJIHAKZSUFRYGWSDKRQSYHVROWLWHDPCKPNRACDQXONTNJXDMYFHXDTKPHVVBFBCWPLRUVCPJA");
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
    msg.setTimeStamp(0.182984548824);
    msg.setSource(5934U);
    msg.setSourceEntity(171U);
    msg.setDestination(35599U);
    msg.setDestinationEntity(231U);
    msg.command = 218U;
    msg.htime = 0.502534049103;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 11U;
    tmp_msg_0.htime = 0.986900885271;
    tmp_msg_0.context.assign("YAEWTLPPWIWEMPFDOSNTGT");
    tmp_msg_0.text.assign("HRNISAVEDVPKPIOGERWVFVSYNUKD");
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
    msg.setTimeStamp(0.659900415857);
    msg.setSource(49948U);
    msg.setSourceEntity(195U);
    msg.setDestination(16248U);
    msg.setDestinationEntity(111U);
    msg.command = 251U;
    msg.htime = 0.882217777855;

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
    msg.setTimeStamp(0.91231438577);
    msg.setSource(43522U);
    msg.setSourceEntity(119U);
    msg.setDestination(52740U);
    msg.setDestinationEntity(244U);
    msg.op = 224U;
    msg.file.assign("ANGSFJRBUJMMLSQRFSZFLYXTRJWTUKVYIMYPWTYQNARKMIMEONKIVYTBLYQWJXYWEBLPQZHVIOCFHKATVJGQMNARGVEOWCGDCBXCFUEAJDGDQDSLDXHTDOCYRODGKVTAUZCXAIOWCTCHHVRCSBZFGENMMPRZJYNQZVXPUHEYKZNBPQZJFPHFPLWWBFWSWXSOINPSXDKJZNEBHEBSAJQOAUIPVQMBUVSIO");

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
    msg.setTimeStamp(0.488754124121);
    msg.setSource(50173U);
    msg.setSourceEntity(171U);
    msg.setDestination(3414U);
    msg.setDestinationEntity(10U);
    msg.op = 159U;
    msg.file.assign("XAXAFJIGPQMGYHZWXUIQFTVLLOMTHWHVOMQMSBRCXLGQISVNSGWIFSRAYVQNSGIUDHHUCZUDTLEQQOLEKGSLHALXSNNDMIOVSEULZXUTDZDTKJIUYHUJOENMNUOJHUIYACNJPKYOJVEGXKNECITMCRPACWRFBTVDFKFBLBBJVKBORKZPGCBAXWCVDQBAYYSMTAFJBPERGZ");

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
    msg.setTimeStamp(0.459109725643);
    msg.setSource(6362U);
    msg.setSourceEntity(37U);
    msg.setDestination(15399U);
    msg.setDestinationEntity(14U);
    msg.op = 149U;
    msg.file.assign("CSKHAFYDORFEQFABPXOAOTDLMBXEVMWWYVWTBCJEYKSJDFFTYONQHDKZJZEMTZETAHRCNFUAXDGJILQEOSSJRFISOGDMJJXMOLU");

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
    msg.setTimeStamp(0.906559205241);
    msg.setSource(18937U);
    msg.setSourceEntity(224U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(241U);
    msg.op = 165U;
    msg.clock = 0.349414434032;
    msg.tz = 59;

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
    msg.setTimeStamp(0.959581107463);
    msg.setSource(36166U);
    msg.setSourceEntity(22U);
    msg.setDestination(10766U);
    msg.setDestinationEntity(56U);
    msg.op = 210U;
    msg.clock = 0.116436389152;
    msg.tz = -61;

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
    msg.setTimeStamp(0.341420672268);
    msg.setSource(47509U);
    msg.setSourceEntity(162U);
    msg.setDestination(65320U);
    msg.setDestinationEntity(27U);
    msg.op = 84U;
    msg.clock = 0.969557979491;
    msg.tz = 123;

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
    msg.setTimeStamp(0.857713164146);
    msg.setSource(36542U);
    msg.setSourceEntity(109U);
    msg.setDestination(40148U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.941927111989);
    msg.setSource(55542U);
    msg.setSourceEntity(42U);
    msg.setDestination(28137U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.590907251309);
    msg.setSource(53862U);
    msg.setSourceEntity(50U);
    msg.setDestination(3933U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.647994566055);
    msg.setSource(40926U);
    msg.setSourceEntity(22U);
    msg.setDestination(17598U);
    msg.setDestinationEntity(132U);
    msg.sys_name.assign("JNDABSWFBTNMAZPTKQBKYUSFRZOOIPAMBCYBOYEVEFZFQLYKDRDVIMHZXRRZJYLTKCBTBNSGFDMAXSVUWADZXRCHQZHHENIZAWMFKCWIXRXWXPTCWKBLYVDHGUUQLERUGTJPOCDSCOLGMEGXOYJLWKRQPACYKXMMNXUOHFTAQPBIWXNQQLEJVIMDIZROOUPJTIVPCWFCDKYUGFNJIKNLAISZNGVVNHSTDMVGA");
    msg.sys_type = 30U;
    msg.owner = 55907U;
    msg.lat = 0.684574246155;
    msg.lon = 0.84071230864;
    msg.height = 0.617302654168;
    msg.services.assign("SCTGIVMSGVWGIZXHMWUPORHYWPPAEPQAJYBVEFYORKZBFQLEGYECNZSPNPAZRBJHYBWVVRUUFMEAJTORNQUWCKAXTBQPZNPOWPYUMKIVNKGBHUVXXWGRDOOXKGBHXFSWUAILHLWJMJULEIEQGGDNISZMSCDTPCAVRONALBTHLVTFRZDLKXDIDHONLFCDFQI");

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
    msg.setTimeStamp(0.867619336577);
    msg.setSource(24599U);
    msg.setSourceEntity(95U);
    msg.setDestination(7577U);
    msg.setDestinationEntity(0U);
    msg.sys_name.assign("BJVUKHSITKIKZSQWAZDFXGNECDLJNTSOTMPSMVKUXNLOLTCFSIUJDAPREQWRLYFGWYFBCGHBLOPAOBAGCXRVUGQVIQMGHRNHMBQTKMFERMZXHQOEQBAZKPVBVEDMMGODHUZWIOICZWJQFNCIUJNBVKQVGZPYORYPDWWUCSRXIFKOBNYAYILYGJFYCTJG");
    msg.sys_type = 238U;
    msg.owner = 62658U;
    msg.lat = 0.447396556951;
    msg.lon = 0.0853037174558;
    msg.height = 0.98483583698;
    msg.services.assign("UDBKAVKIJREGBPBONEKHDRHOTIEBSGBFQCEUPGLYRVCHKHQQPGBENONNEPAHJZSJJKSGQJMGZBYULMK");

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
    msg.setTimeStamp(0.618131548804);
    msg.setSource(54028U);
    msg.setSourceEntity(232U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(252U);
    msg.sys_name.assign("MBFOAYGEWVHUQPJXDHKAMRQDFKHIDPJROJYBKQNQDOAUWYNSXCHPDZGSYYMTULVGJXEBTYWZVYVQZNEVFKNTCGULDRLQMYFIRSQEUPAMDNRORGHNOBCTZBVVZWUGSACCQTTNXQXPKHFMODGSMSHAPWMMEXNPZRCOQXJPCKZAYMVLSISZEUYIEITZZWFUKFW");
    msg.sys_type = 200U;
    msg.owner = 26907U;
    msg.lat = 0.0398694225168;
    msg.lon = 0.412891616192;
    msg.height = 0.655262345284;
    msg.services.assign("VJZDNFYFWNA");

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
    msg.setTimeStamp(0.613193987383);
    msg.setSource(35702U);
    msg.setSourceEntity(194U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(58U);
    msg.service.assign("HLOESPQXFCIWUHESMUYOIICRQVAOYYXHZQOBA");
    msg.service_type = 96U;

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
    msg.setTimeStamp(0.623213440183);
    msg.setSource(12756U);
    msg.setSourceEntity(58U);
    msg.setDestination(30283U);
    msg.setDestinationEntity(227U);
    msg.service.assign("IAMMHBYCBQJEUENVDAXNPQNXTXBJZUJSECWJUFYDKAFHVPYOWSFVZYGKJRLQWRTDMYUUHRDRLMZGCIFVJJDPWYOBVFHNXHZZLGKQJTSOHANBTMIGFNRPJOMAMYCGDEUUTWXNAVIFCBEZWKDNFPKTWQSRPSXLOTXZMTEDAMYHASPCGDLVKILUEKTKSNWHYCRVYPOXNEJRBHS");
    msg.service_type = 92U;

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
    msg.setTimeStamp(0.994122550039);
    msg.setSource(51754U);
    msg.setSourceEntity(47U);
    msg.setDestination(60840U);
    msg.setDestinationEntity(43U);
    msg.service.assign("SWSCIHQMXCCBBIWFNLFMUJHG");
    msg.service_type = 191U;

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
    msg.setTimeStamp(0.158438248927);
    msg.setSource(14559U);
    msg.setSourceEntity(209U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(17U);
    msg.value = 0.142546116374;

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
    msg.setTimeStamp(0.017784593097);
    msg.setSource(28172U);
    msg.setSourceEntity(124U);
    msg.setDestination(38785U);
    msg.setDestinationEntity(238U);
    msg.value = 0.25694606391;

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
    msg.setTimeStamp(0.689736161622);
    msg.setSource(59869U);
    msg.setSourceEntity(139U);
    msg.setDestination(26128U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0310882701359;

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
    msg.setTimeStamp(0.470336147479);
    msg.setSource(10890U);
    msg.setSourceEntity(30U);
    msg.setDestination(30403U);
    msg.setDestinationEntity(232U);
    msg.value = 0.871856631817;

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
    msg.setTimeStamp(0.79521156323);
    msg.setSource(29874U);
    msg.setSourceEntity(170U);
    msg.setDestination(40850U);
    msg.setDestinationEntity(157U);
    msg.value = 0.622173670462;

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
    msg.setTimeStamp(0.0655658246984);
    msg.setSource(59858U);
    msg.setSourceEntity(163U);
    msg.setDestination(37429U);
    msg.setDestinationEntity(158U);
    msg.value = 0.670050613178;

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
    msg.setTimeStamp(0.239153824954);
    msg.setSource(33933U);
    msg.setSourceEntity(128U);
    msg.setDestination(30171U);
    msg.setDestinationEntity(228U);
    msg.value = 0.938419071692;

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
    msg.setTimeStamp(0.45944392241);
    msg.setSource(63427U);
    msg.setSourceEntity(132U);
    msg.setDestination(38494U);
    msg.setDestinationEntity(70U);
    msg.value = 0.713996671117;

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
    msg.setTimeStamp(0.160747322634);
    msg.setSource(51265U);
    msg.setSourceEntity(127U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(193U);
    msg.value = 0.887711608663;

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
    msg.setTimeStamp(0.48158830628);
    msg.setSource(2276U);
    msg.setSourceEntity(26U);
    msg.setDestination(54474U);
    msg.setDestinationEntity(200U);
    msg.number.assign("RTSKYMCATKSAQATLFRFVJYHPOWUJKKPJOUFVQGGHBJSLBNXHUIFXMDUYQZRGMXEOWLDNDGHAVBLRWESLTISYSN");
    msg.timeout = 61257U;
    msg.contents.assign("TBPBEYBNUORJDRRDCJOHDTWZJPZRAXVUKSWSLMPBJKGPRAVCZHQFXSLKRNOJNAXILQJNXIWUEKVUGVFBUYCUIIEQJISEEEALPODOCDUIQOGSZFYSFVYJYKPMSTZRYWZKFPMWOCZZZSMDNBHTKQMWQJOMMOUDLDRYJNBGPILCICVYCGGICWRQGAQFAGKXRQNVXHMNLHWPELSFBTXDZPEXMETXHHGLWTKQAVFHVCNYOEFUGBDHNKTFS");

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
    msg.setTimeStamp(0.498838781051);
    msg.setSource(49311U);
    msg.setSourceEntity(10U);
    msg.setDestination(51254U);
    msg.setDestinationEntity(127U);
    msg.number.assign("AHLBEHPXNYLGADEBZTWLQXJMHYHKUYXFGRGQWVZLQRDQNOSVZQIPQGEVGTTZWGEUKREYVVGWUBSCABMUEGWSBWMFXWVLCZNCWIYBJYDCHFUMQXZCVMRMNIOUSABYJJTHMYETFFITSKRVNFYALPOYDODPXBJSASJTXPTVGNLKWIJZRPCKEFLNQWHRRAPROKPHZNEJBOSPEUHADDUCZXOONSTRKKIMFDSCBODVKUPDQOFNJJ");
    msg.timeout = 40398U;
    msg.contents.assign("PJBFGVNCYMNTLAGGALFHPVNHABTIWVAQAXBEQEFXTODIMFOIDRKUEJWYPHTEZRPQESRGDYBSPXJSKKZAZVNBPVETYTTRJZNFUOZPMROEQXU");

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
    msg.setTimeStamp(0.076402824379);
    msg.setSource(10010U);
    msg.setSourceEntity(174U);
    msg.setDestination(21069U);
    msg.setDestinationEntity(198U);
    msg.number.assign("DAHRARGEZLWPJEQSQUZFHEKNJOEUPMNUGPTGAVWCVORFIQJHBYTFERORYBXMOGGQQFAUDCKMCBMHTTCABGQLROLVUQZJNLSOWQOGXBVNVAFSWHCUMAPMZFOOYSWKKVI");
    msg.timeout = 7305U;
    msg.contents.assign("AKWNANSYZJDVETSTMHILBDEFMZGQQOGZNRBTUVLHPRAAIJMVQSABRGKBIMYVYANGSGXJTXWAARRZMONETDBQTIQMYRLIEJWOKPDQSPECHXVZTNUFUDLJEAFCMAZYPWXFBMOSTOPKTQULRKPBBHYJVSDCEODFQFZILUCYYX");

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
    msg.setTimeStamp(0.32966981274);
    msg.setSource(27703U);
    msg.setSourceEntity(118U);
    msg.setDestination(9030U);
    msg.setDestinationEntity(163U);
    msg.seq = 872622173U;
    msg.destination.assign("XDNCGGLNFRLDMYMBBHVBSYJKMIALZPJGZAFRCUKOAUTNTRTXSZEHOWDDPJGEINOOHSOPVXYCLDRNEZDBWTXCSKNOHGHSQHRPAFU");
    msg.timeout = 9589U;
    const char tmp_msg_0[] = {-27, -103, -32, -18, 31, -57, -85, -79, 6, -8, -59, -50, -72, 2, 108, 89, -117, 87, -97, 11, -37, -21, -29, -52, -97, 15, -48, 114, 100, 75, 50, 21, -83, 70, -17, -122};
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
    msg.setTimeStamp(0.304593666911);
    msg.setSource(5769U);
    msg.setSourceEntity(225U);
    msg.setDestination(24342U);
    msg.setDestinationEntity(183U);
    msg.seq = 2037160483U;
    msg.destination.assign("ZXEPYDGAQNYBWCCPMADVIVHOAVQXJQGCYWPBRUHPHLSRAASNPSHWUTHOFCZWA");
    msg.timeout = 14119U;
    const char tmp_msg_0[] = {5, 59, -25, -101, 114, -59, 1, 117, -24, 93, 86, 80, -15, 47, -107, 80, 108, 18, -86, 103, 10, -109, 38, 14, -101, -74, -100, -31, 81, -114, 18, -77, -31, 114, 115, -55, -49, -65, 52, 13, -80, 112, -98, 61, 94, -1, -1, -23};
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
    msg.setTimeStamp(0.248166096999);
    msg.setSource(38182U);
    msg.setSourceEntity(245U);
    msg.setDestination(42951U);
    msg.setDestinationEntity(122U);
    msg.seq = 1579945770U;
    msg.destination.assign("GRDSTFBHZALRHTGDJHPGPUNRFDAZXJWUOORPCQHSTNABOKKXUDOWDVGSKTGTSDILHDHFMZDCEPVQWMVLOTUBFGPAMCNYLZBFUVCCMBVVIHNCXIBXOMTUBQNTXGCVRZKJJXFQBPFRINEIPQWRPEIDBQWKMBEAFYLJZX");
    msg.timeout = 59419U;
    const char tmp_msg_0[] = {72, 8, -91, -78, -8, 92, 93, 54, 111, -24, 112, 34, 125, 90, 101, -97, -64, 74, -83, 13, 92, 58, -44, 67, -90, -54, -106, 99, 105, 31, 97, 104, 106, 66, 1, 52, 65, 111, 125, 48, -44, -120, -27, -121, 29, 55, 12, -39, -16, -117, -109, 6, 111, 122, -74, 82, -43, 33, -8, -76, 6, 93, 39, -6, -103, 32, 101, 54, -65, 47, -120, 53, -100, -7, 49, -68, -43, -41, 71, -65, 50, 67, 114, -77, -6, -28, 108, -116, -19, 78, 61, 70, 45, -61, -47, -124, -73, -16, 40, -115, 62, -23, 123, -5, 80, 44, 107, -76, 55, -75, -85, 32, 68, -1, 80, -52, 110, -56, -113, 38, -55, 39, 118, 123, 116, 45, -94, 37, 77, 84, 58, 14, 44, -87, -54, -72, -3, 24, 56, -101, 63, -111, 33, 52, -83, 111, 59, 3, 44, 8, -120, 89, 126, 97, -90, -126, -107, -38, -87, 84, 14, 27, 56, -31, -8, 80, -64, 89, 39, -17, 22, -65, 124, 68, -1, -91, -76, -43, -52, -109, -32, 48, 11, 110, 99, -119, 7, 74, 28, 24, -122, 112, -116, 9, -119, 43};
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
    msg.setTimeStamp(0.897674687927);
    msg.setSource(41613U);
    msg.setSourceEntity(204U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(24U);
    msg.source.assign("GNMNJOFRVEUJQYQORFXHZJUNEHGZEICOYUBICHXXNAVDKRJRDCTMGAKMPWEWAIXZOIDYOCUFLCEGDKPQRWMVQELTZPQCLRLETWQSBFSHOBIFYKDTSWYT");
    const char tmp_msg_0[] = {116, 22, 56, 114, 83, -73, 19, -98, 19, -25, 93, -2, -94, -98, -88, -101, -23, 95, 43, -96, -72, 55, 50, -90, -8, -39, -34, -35, -102, -109, 11, 49, 72, 14, 5, 104, -14, 52, -8, -100, 110, -21, 50, -24, -19, -70, -118, 120, -11, -41, 15, 113, 16, -114, 32, 120, 76, 78, 39, -34, 25, 54, -76, 89, 75, -100, -90, 87, 91, 10, 85, -33, 111};
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
    msg.setTimeStamp(0.723807495481);
    msg.setSource(35876U);
    msg.setSourceEntity(78U);
    msg.setDestination(17696U);
    msg.setDestinationEntity(176U);
    msg.source.assign("WIINYYGFCMECCSLVVLCYYXAROQLZUWARWXRBOABU");
    const char tmp_msg_0[] = {-119, 35, 76, -102, 15, -125, -20, 48, 72, -13, -92, -88, 116, 26, 115, -57, 9, 101, 78, 88, -49, 43, 86, -94, -30, -77, 100, -28, 74, 24, 88, 42, 103, -108, -101, -14, -21, 105, 95, -46, -53, -90, -39, -52, -111, -4, 125, -28, -108, 35, 32, 106, 10, -103, -22, -64, -50, 13, 47, 94, 33, 108, -82, 72, -56, -4, -39, -94, 99, -17, 50, 81, -128, 7, -95, 92, -115, -107, 67, 42, 105, 27, -55, -127, 79, 57, 62, -85, -63, -57, -98, -104, 112, 121, 18, -65, 24, -112, 114, 84, 112, 107, 52, 13, 81, -80, -25, -23, 52, 122, 89, 6, -95, -106, -15, -102, -124, 122, -125, -92, -21, 41, 115, 8, 64, -110, 101, 120, 55, -84, 99, -7, 5, -1, -76, 105, -108, -64, 107, 111, -49, -13, 75, 40, -20, -12, -43, -35, 25, 92, -124, -43, 68, 62, 117, -53, 113, -104, -125, 21, -122, 23, 8, -98, -16, -6, 45, -49, -71, -73, 126, 18, -54, 21, 61, 119, -124, 9, -105, 98, -14, 80, -91, -78, 58, -69, 88, 19, -79, 105, 108, 59, -24, -59, 21, 76, -92, -35, 12, 119, -19, 67, 57, 46, 84, 27, -128, 28, -39, -41, 0, -47, 34, 93, 37, -35};
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
    msg.setTimeStamp(0.529849713926);
    msg.setSource(27200U);
    msg.setSourceEntity(181U);
    msg.setDestination(36676U);
    msg.setDestinationEntity(4U);
    msg.source.assign("FRTEAXZEURGZGNTKNDTSPGOYHFMFPNZYCSRWGFWQWAAK");
    const char tmp_msg_0[] = {-88, 72, -65, 115, -52, 19, 78, -60, -100, -24, -5, 10, 50, 1, 105, 79, 41, -47, -38, 3, 107, -74, 10, 116, -110, -110, -127, 38, -72, -114, -63, -17, 32, 66, -43, -117, -68, 126, 124, 115, -58, 60, 107, 43, 35, 101, -82, 46, 46, -16, -109, 42, 61, 30, 30, -76, -87, -39, -98, 37, 14, -29, -109, 53, -90, 52, 59, -8, 68, -4, -2, -7, -15, -46, -43, -76, -62, 30, -44, -68, -96, -118, -95, -28, 62, 16, 33, -97, 124, -123, 102, 68, 69, -92, -3, 61, -123, 79, 51, 45, 64, 43, -82, -99, 12, -123, -128, 19, -35, 100, 22, 101, -108, 45, -68, 103, -93, -104, -82, -44, -32, 99, -67, 100, 23, 121, -69, -73, -74, -9, -36, -3, -30, -102, 51};
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
    msg.setTimeStamp(0.299463367875);
    msg.setSource(10697U);
    msg.setSourceEntity(6U);
    msg.setDestination(21986U);
    msg.setDestinationEntity(19U);
    msg.seq = 2900011994U;
    msg.state = 44U;
    msg.error.assign("PBGGJAZIVIUMTTOUTESYDUJLLSVDMQDKFFSUCWTKXMBGEDWNRLL");

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
    msg.setTimeStamp(0.887741585404);
    msg.setSource(42965U);
    msg.setSourceEntity(95U);
    msg.setDestination(33083U);
    msg.setDestinationEntity(246U);
    msg.seq = 2860627279U;
    msg.state = 223U;
    msg.error.assign("RONAHWRMZTSKOFZIGLAESJXAKTKTRWNWNADVYWQDRRTTCNCMQPEUIWVRXHTOQFBKWZPXGNINSAJXONIZVACVPXDVIFEYZPYXTLQEISDXNBJYGXAUUQKLTMQGVPGQLGCENSFKBLYZAHYRCOSJBOVEPZFGTMGBUYZCHTSLHLMDEUKPKORDILOMYMFSVBDNVQFHUHPFJOHBDJSFUAUJKWEKUCX");

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
    msg.setTimeStamp(0.994709890093);
    msg.setSource(10333U);
    msg.setSourceEntity(171U);
    msg.setDestination(22585U);
    msg.setDestinationEntity(123U);
    msg.seq = 2020026751U;
    msg.state = 16U;
    msg.error.assign("TLIKUZRKEGHXCNEOHBFCLOOTBGTWWULWMZMIPRLJMEWYUGODMPQFHQMNZSXVPERXJVYORJJGUWPTSAZOZHUYILBTEGDOWTZNKPAFYMNECPHUXBAMWZCUOKXRDJQUGVOJ");

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
    msg.setTimeStamp(0.069115106518);
    msg.setSource(39218U);
    msg.setSourceEntity(91U);
    msg.setDestination(63004U);
    msg.setDestinationEntity(104U);
    msg.id = 117U;
    msg.range = 0.467467011523;

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
    msg.setTimeStamp(0.108127552043);
    msg.setSource(8572U);
    msg.setSourceEntity(230U);
    msg.setDestination(22547U);
    msg.setDestinationEntity(77U);
    msg.id = 33U;
    msg.range = 0.102684815614;

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
    msg.setTimeStamp(0.72138601897);
    msg.setSource(39221U);
    msg.setSourceEntity(236U);
    msg.setDestination(16387U);
    msg.setDestinationEntity(187U);
    msg.id = 4U;
    msg.range = 0.930676160604;

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
    msg.setTimeStamp(0.106857779148);
    msg.setSource(61573U);
    msg.setSourceEntity(234U);
    msg.setDestination(35568U);
    msg.setDestinationEntity(31U);
    msg.tx = 64U;
    msg.channel = 156U;
    msg.timer = 27970U;

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
    msg.setTimeStamp(0.914203731906);
    msg.setSource(48199U);
    msg.setSourceEntity(35U);
    msg.setDestination(30649U);
    msg.setDestinationEntity(80U);
    msg.tx = 87U;
    msg.channel = 252U;
    msg.timer = 59103U;

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
    msg.setTimeStamp(0.541032075386);
    msg.setSource(18107U);
    msg.setSourceEntity(156U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(231U);
    msg.tx = 83U;
    msg.channel = 51U;
    msg.timer = 60279U;

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
    msg.setTimeStamp(0.822730152285);
    msg.setSource(65231U);
    msg.setSourceEntity(162U);
    msg.setDestination(34272U);
    msg.setDestinationEntity(15U);
    msg.beacon.assign("UOMBCJTSGHAWLNYXCAPKVIDBWQCYBCMWKQUROVUVNHZLIFPPBUTOSCYKYKSQPALPNPXPZEALDMSTCZADZPJXVYKXJTWZFLUWVYETYDPRLELGGDHNMJUEZTGQWWVOFNPYVEMCQQRLUHJYLCMWJOT");
    msg.lat = 0.267264514989;
    msg.lon = 0.889997911713;
    msg.depth = 0.839735212919;
    msg.query_channel = 171U;
    msg.reply_channel = 41U;
    msg.transponder_delay = 95U;

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
    msg.setTimeStamp(0.0549273395687);
    msg.setSource(13868U);
    msg.setSourceEntity(254U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(77U);
    msg.beacon.assign("LUFPFJZVDISFNFRSYSFWVYKSIRCMQUCFZUOMICZYKLVGWHKPCEOIKJXXELXQZEWSHJGZJZVNUPCMRCTFE");
    msg.lat = 0.91414920441;
    msg.lon = 0.00409799845952;
    msg.depth = 0.534620154882;
    msg.query_channel = 19U;
    msg.reply_channel = 200U;
    msg.transponder_delay = 187U;

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
    msg.setTimeStamp(0.351028666181);
    msg.setSource(58587U);
    msg.setSourceEntity(219U);
    msg.setDestination(55130U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("UYKLTJNSTLPOWTQNFFSBQHSLWTTPYQEYAXBUQDJMJDLCGZDFQRUIDKYEURZLZOMDUGAHMYVNIEDKYDCFYWBNHEGZQWZIVNAMXNFJCFOVNORJZKVQZLXOQOJKSKGMXWGHGORBPCXPSVRYELSVNKRTAGYUNSTCXKDCMPLCHQBXDOSROLPJGHCWTBMBIWAUZJBBMSSUMZIFMFKEIIPRAFVEJAITCIX");
    msg.lat = 0.290337309443;
    msg.lon = 0.57164451929;
    msg.depth = 0.419558372877;
    msg.query_channel = 151U;
    msg.reply_channel = 20U;
    msg.transponder_delay = 114U;

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
    msg.setTimeStamp(0.272985991802);
    msg.setSource(24026U);
    msg.setSourceEntity(6U);
    msg.setDestination(14166U);
    msg.setDestinationEntity(184U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.998272497159);
    msg.setSource(61501U);
    msg.setSourceEntity(33U);
    msg.setDestination(24739U);
    msg.setDestinationEntity(148U);
    msg.op = 75U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RGAFHPACLXTVDGZOUQVFCIESGYHMUDJCWNDUILQXEHVGNLHWCQWIBYREPBZWHDJUNIKJAQKYRMRXZRUHXYFMEVQMGWAQBQSPJMPJSRTSKTSAKAHWMHULL");
    tmp_msg_0.lat = 0.402420674365;
    tmp_msg_0.lon = 0.993139453814;
    tmp_msg_0.depth = 0.195241183241;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 235U;
    tmp_msg_0.transponder_delay = 191U;
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
    msg.setTimeStamp(0.278758117708);
    msg.setSource(61715U);
    msg.setSourceEntity(22U);
    msg.setDestination(1023U);
    msg.setDestinationEntity(65U);
    msg.op = 205U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YADDLMNUJVBGAZYSMWDGMSPPKXJGGUTSQMFXNNZARBBBJOAXJKPRIHVNPQRJYIBQIARTIMUQYAKEREMSLLQSHAZNEVDFZJWDNZVOFYTYXDHLLPKITYNGMTZKXGEELSRCTMWBHPVN");
    tmp_msg_0.lat = 0.161710092943;
    tmp_msg_0.lon = 0.657559824432;
    tmp_msg_0.depth = 0.203596625417;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 178U;
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
    msg.setTimeStamp(0.972110646971);
    msg.setSource(18113U);
    msg.setSourceEntity(73U);
    msg.setDestination(2159U);
    msg.setDestinationEntity(114U);
    msg.address = 244U;

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
    msg.setTimeStamp(0.302151077818);
    msg.setSource(62635U);
    msg.setSourceEntity(24U);
    msg.setDestination(40691U);
    msg.setDestinationEntity(167U);
    msg.address = 124U;

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
    msg.setTimeStamp(0.421095688858);
    msg.setSource(15787U);
    msg.setSourceEntity(38U);
    msg.setDestination(19681U);
    msg.setDestinationEntity(33U);
    msg.address = 95U;

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
    msg.setTimeStamp(0.17483009029);
    msg.setSource(30311U);
    msg.setSourceEntity(120U);
    msg.setDestination(51458U);
    msg.setDestinationEntity(254U);
    msg.address = 69U;
    msg.status = 156U;
    msg.range = 0.0108793308717;

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
    msg.setTimeStamp(0.00929411347573);
    msg.setSource(18461U);
    msg.setSourceEntity(8U);
    msg.setDestination(58945U);
    msg.setDestinationEntity(66U);
    msg.address = 26U;
    msg.status = 55U;
    msg.range = 0.460579012364;

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
    msg.setTimeStamp(0.216196104394);
    msg.setSource(32803U);
    msg.setSourceEntity(186U);
    msg.setDestination(6467U);
    msg.setDestinationEntity(130U);
    msg.address = 251U;
    msg.status = 5U;
    msg.range = 0.959610537789;

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
    msg.setTimeStamp(0.886814221813);
    msg.setSource(20752U);
    msg.setSourceEntity(66U);
    msg.setDestination(53843U);
    msg.setDestinationEntity(103U);
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 130U;
    tmp_msg_0.x = 0.662913885752;
    tmp_msg_0.y = 0.146096765971;
    tmp_msg_0.z = 0.0686731820263;
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
    msg.setTimeStamp(0.913727308657);
    msg.setSource(62405U);
    msg.setSourceEntity(57U);
    msg.setDestination(21543U);
    msg.setDestinationEntity(128U);
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 34708U;
    tmp_msg_0.lat = 0.0725970907809;
    tmp_msg_0.lon = 0.486548920156;
    tmp_msg_0.z = 0.745794919365;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.speed = 0.773587739071;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.roll = 0.512341441562;
    tmp_msg_0.pitch = 0.467338555456;
    tmp_msg_0.yaw = 0.872774522723;
    tmp_msg_0.custom.assign("ZLIHVIXPDOMGUATQZHBQKAJUZDADLMLOWQMPRSVEEUWFCNNZPXLBXMVNRON");
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
    msg.setTimeStamp(0.490579551358);
    msg.setSource(20243U);
    msg.setSourceEntity(95U);
    msg.setDestination(43832U);
    msg.setDestinationEntity(108U);
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 50140U;
    tmp_msg_0.lat = 0.651938840835;
    tmp_msg_0.lon = 0.828887142613;
    tmp_msg_0.z = 0.985830265011;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.speed = 0.466737256534;
    tmp_msg_0.speed_units = 78U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.112866792883;
    tmp_tmp_msg_0_0.y = 0.60837419245;
    tmp_tmp_msg_0_0.z = 0.982494527916;
    tmp_tmp_msg_0_0.t = 0.397325412346;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FEQHXZDGZZOQCLRCYEUHCMHSWVABIGRKNPZM");
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
    msg.setTimeStamp(0.518321484621);
    msg.setSource(55594U);
    msg.setSourceEntity(252U);
    msg.setDestination(33478U);
    msg.setDestinationEntity(44U);
    msg.enable = 171U;

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
    msg.setTimeStamp(0.137428375673);
    msg.setSource(35562U);
    msg.setSourceEntity(92U);
    msg.setDestination(18388U);
    msg.setDestinationEntity(37U);
    msg.enable = 178U;

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
    msg.setTimeStamp(0.742206902477);
    msg.setSource(13555U);
    msg.setSourceEntity(62U);
    msg.setDestination(27528U);
    msg.setDestinationEntity(19U);
    msg.enable = 120U;

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
    msg.setTimeStamp(0.155930751409);
    msg.setSource(44642U);
    msg.setSourceEntity(82U);
    msg.setDestination(40031U);
    msg.setDestinationEntity(99U);
    msg.summary = 95U;
    msg.level = 100U;

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
    msg.setTimeStamp(0.702659965626);
    msg.setSource(9074U);
    msg.setSourceEntity(78U);
    msg.setDestination(23294U);
    msg.setDestinationEntity(236U);
    msg.summary = 246U;
    msg.level = 166U;

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
    msg.setTimeStamp(0.14991756965);
    msg.setSource(27401U);
    msg.setSourceEntity(158U);
    msg.setDestination(5735U);
    msg.setDestinationEntity(128U);
    msg.summary = 230U;
    msg.level = 163U;

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
    msg.setTimeStamp(0.0877971977542);
    msg.setSource(40610U);
    msg.setSourceEntity(238U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.756894492526);
    msg.setSource(10329U);
    msg.setSourceEntity(211U);
    msg.setDestination(59713U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.868671370199);
    msg.setSource(48173U);
    msg.setSourceEntity(52U);
    msg.setDestination(51757U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.865207609651);
    msg.setSource(20259U);
    msg.setSourceEntity(26U);
    msg.setDestination(29887U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.313612894845);
    msg.setSource(20639U);
    msg.setSourceEntity(248U);
    msg.setDestination(65024U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.217824091427);
    msg.setSource(7647U);
    msg.setSourceEntity(28U);
    msg.setDestination(47874U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.218496818829);
    msg.setSource(53787U);
    msg.setSourceEntity(254U);
    msg.setDestination(64965U);
    msg.setDestinationEntity(70U);
    msg.op = 201U;
    msg.system.assign("SDUVWIHBZVIRCXVYGICZHYBLJVFVFBWRJSXPXUNTOYVJTHVPUQBGPROOCLQIICEADOTNDKPNNRWGWWKKAWWYGABBTECBRQIPRZDWJOCYJKDCEFHXUEPXNFOGZHLHQPHYTEMBYWKFLLLSBQVZHGRRAAXEDJGURHMGXPHQDMYLJQUQGXSFSIQMEKJZMXMUZTPV");
    msg.range = 0.747817834366;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 32727U;
    tmp_msg_0.plan_size = 773436744U;
    tmp_msg_0.change_time = 0.472015434201;
    tmp_msg_0.change_sid = 39556U;
    tmp_msg_0.change_sname.assign("OCZZZKJCGEPWMEVXKGELQYWRRHGRSELEGTOHHEQXAKKPDXOZNBBUJZHCBUAKKWXGYNLUTEFCMYFMNTFNPSLCQNMCLVGIYXLRDMJQJDQDHRSLKBMVUVXYIPAYOHWPURBAQYQIIQDWFONJJDQCBLCNAGTRUXTARBZUITDOTLRPWIQYZZOMHDYWLRIHKVEVOFJFOJMTPIDAEGVWBCZNXCNXFISBFPGKTD");
    const char tmp_tmp_msg_0_0[] = {46, -4, 17, 87, 42, 33, 16, 83, 26, -81, -16, -62, -15, 15, 100, 89, 57, 78, -72, 14, -49, -101, 96, 85, -10, -99, 22, 75, -46, 70, 109, 15, -17, 126, -92, -97, 37, -68, 68, -46, 122};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("YZIRXSBDDEUXBBJFCEUVUSZKSPTCWMGRQQVMESOAAKZZFBDJTWMLDAEEAKYVJNRGVRQCJYFVTGSUAMPRTXLWVTPR");
    tmp_tmp_msg_0_1.plan_size = 43838U;
    tmp_tmp_msg_0_1.change_time = 0.511493284782;
    tmp_tmp_msg_0_1.change_sid = 60698U;
    tmp_tmp_msg_0_1.change_sname.assign("YEQTSSCHJJNIGPEXYGHNUUIGDXXYQVFMFOTLGHZYHQBBTAXVOGKGCLKKVLLLQWKBWREFCZDJEQHGZZVWIWBJQPTVMRWSBCFSZWEAXLRBVUHBYPXWFLMOFNYTBDLADOZFQKSZNZ");
    const char tmp_tmp_tmp_msg_0_1_0[] = {13, -53, 120, -22, 35, -57, 33, -24, -54, 24, 66, -34, -40, 69, -73, 74, 78, 14, -3, 16, -19, -15, 70, 44, 82, 42, 71, 96, -51, -16, -15, 67, 83, 11, 93, 68, 29, -76, -77, -6, 13, -24, -91, 54, 123, 6, -73, -71, 54, -99, 22, 66, -34, -88, 33, -68, 104, -34, -91, 91, -33, -27, -87, -113};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.543501106431);
    msg.setSource(8307U);
    msg.setSourceEntity(110U);
    msg.setDestination(51493U);
    msg.setDestinationEntity(196U);
    msg.op = 104U;
    msg.system.assign("VMCLEIODIKEQUUJNSJVJZPZOIVULQXYWUZOUNIYFSFQBQAABXHSMQJTFZASCQGCTGKFKXAQXPYNJYESNVBJLKIGIHRDUEMOBGFKGZAHKNPHWLNTFDINTHP");
    msg.range = 0.211745728544;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HRVMXCYFAKPISKTNPRWICZTQJYBLKGUZQAQHBKGCLTYZNANZJMAQBDOKCNEBYFORBWRLWOUHLHNBGLFYGLZDMDPYHUSHIVQZFJTPTJVEEGJKOMEIWQMVVIEUTWPXWFNFGVVENRDBEWAXVUIOYDTYZCDDNDDPEPXPAKVXMSCYGIADMFSIPHINBQSRURXHEJHCFSWGMTGPTLQOLBJMAUSBCQTKUGJZMKLRIXXFOWOAZYF");
    tmp_msg_0.sys_type = 27U;
    tmp_msg_0.owner = 8039U;
    tmp_msg_0.lat = 0.741872026409;
    tmp_msg_0.lon = 0.734729215813;
    tmp_msg_0.height = 0.727489230665;
    tmp_msg_0.services.assign("OMKCFLSGLFBDCCENPMVTDXLZKJKXBUTWLIHELPUKASODXDMIYNHVVTINZBPZHPUGHBQAZYZERWEAXDDBGGSMZFSNROLTLSRFPUKCTYYPRYRMAAYJXRGHJFWWHTZREEKJCUOZOYXCAQMGKIBNPVWACIDJODTJSBQUTWRIGIAXOHSTZMHFUFBJZJGRQKWJQUEOQGCVEPVFUADXHGLVFNQSDMEIIXJWVNVBQFEN");
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
    msg.setTimeStamp(0.159112070473);
    msg.setSource(1446U);
    msg.setSourceEntity(10U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(127U);
    msg.op = 254U;
    msg.system.assign("PCVWTHGLZQHQLIZPCROYQWKDBXLCEMDCAXUGUWYSPPXVLAIONOKMXVYNPFTBYATIQOMWRBMQHWKUZREJVASBUERNIQGHJLHFGJPIVPCOLNYXVVUARXGLIDMSNXSUTPNTGDDOEFIURJYFZUEREFZCCEZVEDHBUFNSCQNTNMOHDRBLCTOTWYKDIJBIHOAWHFUYBMP");
    msg.range = 0.123511753836;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 225U;
    tmp_msg_0.snapshot.assign("EYMISGIOXIWCXQAMLIQKHLTJCZGOQNPCNDPHQXKREZTCITHVYDZZWNKQURMBVGQIWNOXWGTSOYDRNUMMBHOVYWGTHKCYMIXUKZPINDFFLBRSNUBAMKSUTWUJQMNAAVEWFAEPFJKPDLLJTQY");
    IMC::NavigationReset tmp_tmp_msg_0_0;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.418401803653);
    msg.setSource(26877U);
    msg.setSourceEntity(109U);
    msg.setDestination(3097U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.495762810823);
    msg.setSource(33339U);
    msg.setSourceEntity(209U);
    msg.setDestination(54752U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.00835053624973);
    msg.setSource(53501U);
    msg.setSourceEntity(10U);
    msg.setDestination(64282U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.273737484135);
    msg.setSource(18309U);
    msg.setSourceEntity(88U);
    msg.setDestination(54666U);
    msg.setDestinationEntity(144U);
    msg.list.assign("FDWTAXTODFWTBLWBJJDSNRBGLYUGSRNKNVSGGCOYPTOQWGBJAASHZRMHBRDRYEWLHKVBULSPWMCUYGZXPKJSDHVAKVXHUCUOEMLHKJWCPRACMZDQFBIANODJYAIOEZFTUBEZDABMYIGNENNPGFKGETTWPXBYMIIRCHOXEZMMQKOQSICTEFYRXUHVJQZRNLQIKYOMVQVLETUQXSCCJQIHXUPVFIFWEZFUNZCPQVLIPXSRHLJOD");

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
    msg.setTimeStamp(0.244451713849);
    msg.setSource(47041U);
    msg.setSourceEntity(106U);
    msg.setDestination(8573U);
    msg.setDestinationEntity(242U);
    msg.list.assign("HALVYYFAPFGXOMNFBJFPPORZWLMXCQEPUEWKTLRLEVM");

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
    msg.setTimeStamp(0.726169466251);
    msg.setSource(33655U);
    msg.setSourceEntity(236U);
    msg.setDestination(24739U);
    msg.setDestinationEntity(118U);
    msg.list.assign("BFVOOZENZTVEGSHWULZREJVFCJQAPVNIHZMNVIAKAXAKVVXLAXMPNQKBPEKRIYYMGBJTHRNSLEBTHBYHCQPLYIEJFWMDHMQUGTWQPRTWWZXOGJWIFSCZCAGJKFGFCEXRKOADMOKTCZDYRJDDGTOUSSLZOPWMBSGEDTBYRAZUUMBJDODGYXCSDJUUEGQPCYBYAUIH");

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
    msg.setTimeStamp(0.848389808975);
    msg.setSource(7720U);
    msg.setSourceEntity(172U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(236U);
    msg.value = -5290;

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
    msg.setTimeStamp(0.983242827761);
    msg.setSource(3936U);
    msg.setSourceEntity(14U);
    msg.setDestination(51027U);
    msg.setDestinationEntity(236U);
    msg.value = 29855;

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
    msg.setTimeStamp(0.673881669908);
    msg.setSource(55739U);
    msg.setSourceEntity(186U);
    msg.setDestination(60180U);
    msg.setDestinationEntity(35U);
    msg.value = 8373;

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
    msg.setTimeStamp(0.80255910869);
    msg.setSource(54295U);
    msg.setSourceEntity(237U);
    msg.setDestination(56422U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0622028413649;

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
    msg.setTimeStamp(0.331033221466);
    msg.setSource(23187U);
    msg.setSourceEntity(11U);
    msg.setDestination(41522U);
    msg.setDestinationEntity(80U);
    msg.value = 0.511994543754;

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
    msg.setTimeStamp(0.0742248440389);
    msg.setSource(36379U);
    msg.setSourceEntity(45U);
    msg.setDestination(41184U);
    msg.setDestinationEntity(173U);
    msg.value = 0.122001070238;

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
    msg.setTimeStamp(0.88235285086);
    msg.setSource(44762U);
    msg.setSourceEntity(223U);
    msg.setDestination(13162U);
    msg.setDestinationEntity(106U);
    msg.value = 0.34371406897;

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
    msg.setTimeStamp(0.274850132649);
    msg.setSource(36903U);
    msg.setSourceEntity(28U);
    msg.setDestination(43481U);
    msg.setDestinationEntity(197U);
    msg.value = 0.433984062912;

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
    msg.setTimeStamp(0.846761427265);
    msg.setSource(2316U);
    msg.setSourceEntity(16U);
    msg.setDestination(16854U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0807294743314;

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
    msg.setTimeStamp(0.0932964231381);
    msg.setSource(26431U);
    msg.setSourceEntity(138U);
    msg.setDestination(16136U);
    msg.setDestinationEntity(182U);
    msg.validity = 6018U;
    msg.type = 156U;
    msg.utc_year = 57818U;
    msg.utc_month = 241U;
    msg.utc_day = 60U;
    msg.utc_time = 0.661343633671;
    msg.lat = 0.237429448382;
    msg.lon = 0.082068065873;
    msg.height = 0.181091610786;
    msg.satellites = 207U;
    msg.cog = 0.172403389841;
    msg.sog = 0.132826202304;
    msg.hdop = 0.196554001687;
    msg.vdop = 0.17593904481;
    msg.hacc = 0.570775717442;
    msg.vacc = 0.97710627492;

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
    msg.setTimeStamp(0.690872477944);
    msg.setSource(35642U);
    msg.setSourceEntity(185U);
    msg.setDestination(61303U);
    msg.setDestinationEntity(63U);
    msg.validity = 60644U;
    msg.type = 52U;
    msg.utc_year = 6095U;
    msg.utc_month = 250U;
    msg.utc_day = 160U;
    msg.utc_time = 0.858507174927;
    msg.lat = 0.355630083176;
    msg.lon = 0.791387270239;
    msg.height = 0.581317696426;
    msg.satellites = 209U;
    msg.cog = 0.822104871563;
    msg.sog = 0.427676489137;
    msg.hdop = 0.685767847557;
    msg.vdop = 0.541188199392;
    msg.hacc = 0.173692591454;
    msg.vacc = 0.733730425123;

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
    msg.setTimeStamp(0.116912804716);
    msg.setSource(38653U);
    msg.setSourceEntity(190U);
    msg.setDestination(26593U);
    msg.setDestinationEntity(33U);
    msg.validity = 16467U;
    msg.type = 2U;
    msg.utc_year = 61309U;
    msg.utc_month = 125U;
    msg.utc_day = 172U;
    msg.utc_time = 0.95024468563;
    msg.lat = 0.061497788629;
    msg.lon = 0.574540564168;
    msg.height = 0.469039302128;
    msg.satellites = 154U;
    msg.cog = 0.288536795794;
    msg.sog = 0.753660953461;
    msg.hdop = 0.802916167633;
    msg.vdop = 0.219201867254;
    msg.hacc = 0.502207445451;
    msg.vacc = 0.991592042866;

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
    msg.setTimeStamp(0.209694617433);
    msg.setSource(56654U);
    msg.setSourceEntity(234U);
    msg.setDestination(50614U);
    msg.setDestinationEntity(79U);
    msg.time = 0.04118215222;
    msg.phi = 0.483074669206;
    msg.theta = 0.999841426893;
    msg.psi = 0.408841982954;
    msg.psi_magnetic = 0.58016821778;

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
    msg.setTimeStamp(0.557169195555);
    msg.setSource(39557U);
    msg.setSourceEntity(172U);
    msg.setDestination(25668U);
    msg.setDestinationEntity(221U);
    msg.time = 0.735210678673;
    msg.phi = 0.505729309644;
    msg.theta = 0.938704411559;
    msg.psi = 0.51661811319;
    msg.psi_magnetic = 0.883331484363;

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
    msg.setTimeStamp(0.298829941622);
    msg.setSource(15520U);
    msg.setSourceEntity(108U);
    msg.setDestination(61816U);
    msg.setDestinationEntity(110U);
    msg.time = 0.962300932176;
    msg.phi = 0.543224271087;
    msg.theta = 0.0370902312014;
    msg.psi = 0.352969129009;
    msg.psi_magnetic = 0.00298284419969;

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
    msg.setTimeStamp(0.491855660926);
    msg.setSource(57744U);
    msg.setSourceEntity(16U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(211U);
    msg.time = 0.393874857157;
    msg.x = 0.437833257082;
    msg.y = 0.772834402177;
    msg.z = 0.699504845693;
    msg.timestep = 0.440213565577;

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
    msg.setTimeStamp(0.282610396767);
    msg.setSource(57639U);
    msg.setSourceEntity(174U);
    msg.setDestination(31737U);
    msg.setDestinationEntity(12U);
    msg.time = 0.534992096449;
    msg.x = 0.19251986354;
    msg.y = 0.110266033087;
    msg.z = 0.794019966471;
    msg.timestep = 0.533583852965;

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
    msg.setTimeStamp(0.752814384192);
    msg.setSource(5830U);
    msg.setSourceEntity(232U);
    msg.setDestination(5910U);
    msg.setDestinationEntity(111U);
    msg.time = 0.514903134061;
    msg.x = 0.221321671426;
    msg.y = 0.581234961239;
    msg.z = 0.299612549016;
    msg.timestep = 0.825029063107;

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
    msg.setTimeStamp(0.313509662163);
    msg.setSource(17525U);
    msg.setSourceEntity(83U);
    msg.setDestination(34057U);
    msg.setDestinationEntity(16U);
    msg.time = 0.87209701417;
    msg.x = 0.381961395094;
    msg.y = 0.152652018663;
    msg.z = 0.104982703667;

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
    msg.setTimeStamp(0.999859470319);
    msg.setSource(3403U);
    msg.setSourceEntity(212U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(74U);
    msg.time = 0.602363505687;
    msg.x = 0.701405883809;
    msg.y = 0.527228994611;
    msg.z = 0.417245106111;

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
    msg.setTimeStamp(0.330808870457);
    msg.setSource(13343U);
    msg.setSourceEntity(49U);
    msg.setDestination(1618U);
    msg.setDestinationEntity(250U);
    msg.time = 0.151590815542;
    msg.x = 0.405619287978;
    msg.y = 0.264054282698;
    msg.z = 0.448924545634;

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
    msg.setTimeStamp(0.858486363088);
    msg.setSource(65198U);
    msg.setSourceEntity(236U);
    msg.setDestination(41978U);
    msg.setDestinationEntity(138U);
    msg.time = 0.538568153203;
    msg.x = 0.423272593276;
    msg.y = 0.374338710323;
    msg.z = 0.514938514082;

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
    msg.setTimeStamp(0.410607675524);
    msg.setSource(63192U);
    msg.setSourceEntity(233U);
    msg.setDestination(10520U);
    msg.setDestinationEntity(85U);
    msg.time = 0.163783588027;
    msg.x = 0.413399394115;
    msg.y = 0.334430445615;
    msg.z = 0.628181569703;

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
    msg.setTimeStamp(0.162868082436);
    msg.setSource(49402U);
    msg.setSourceEntity(165U);
    msg.setDestination(58226U);
    msg.setDestinationEntity(145U);
    msg.time = 0.645102572136;
    msg.x = 0.486405907353;
    msg.y = 0.441795403925;
    msg.z = 0.43576351279;

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
    msg.setTimeStamp(0.717957027774);
    msg.setSource(41643U);
    msg.setSourceEntity(125U);
    msg.setDestination(18361U);
    msg.setDestinationEntity(240U);
    msg.time = 0.367345457337;
    msg.x = 0.0945922097478;
    msg.y = 0.465050912371;
    msg.z = 0.492668248827;

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
    msg.setTimeStamp(0.465664217942);
    msg.setSource(49700U);
    msg.setSourceEntity(249U);
    msg.setDestination(32113U);
    msg.setDestinationEntity(247U);
    msg.time = 0.995599505137;
    msg.x = 0.504613889123;
    msg.y = 0.490278778511;
    msg.z = 0.173644360197;

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
    msg.setTimeStamp(0.250817897566);
    msg.setSource(46890U);
    msg.setSourceEntity(240U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(238U);
    msg.time = 0.626556618312;
    msg.x = 0.899798676431;
    msg.y = 0.36151809622;
    msg.z = 0.127678748753;

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
    msg.setTimeStamp(0.706728567203);
    msg.setSource(23102U);
    msg.setSourceEntity(26U);
    msg.setDestination(37113U);
    msg.setDestinationEntity(146U);
    msg.validity = 130U;
    msg.x = 0.281786860187;
    msg.y = 0.569553804624;
    msg.z = 0.668871196414;

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
    msg.setTimeStamp(0.912204577236);
    msg.setSource(64807U);
    msg.setSourceEntity(216U);
    msg.setDestination(21227U);
    msg.setDestinationEntity(218U);
    msg.validity = 57U;
    msg.x = 0.601982326136;
    msg.y = 0.879042695076;
    msg.z = 0.575086281292;

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
    msg.setTimeStamp(0.660240086989);
    msg.setSource(4246U);
    msg.setSourceEntity(188U);
    msg.setDestination(59480U);
    msg.setDestinationEntity(53U);
    msg.validity = 0U;
    msg.x = 0.927080345686;
    msg.y = 0.583134649599;
    msg.z = 0.949181741662;

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
    msg.setTimeStamp(0.202823426356);
    msg.setSource(54906U);
    msg.setSourceEntity(60U);
    msg.setDestination(28756U);
    msg.setDestinationEntity(72U);
    msg.validity = 198U;
    msg.x = 0.691099275454;
    msg.y = 0.419757920539;
    msg.z = 0.41627160067;

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
    msg.setTimeStamp(0.834012945557);
    msg.setSource(38802U);
    msg.setSourceEntity(181U);
    msg.setDestination(29500U);
    msg.setDestinationEntity(4U);
    msg.validity = 240U;
    msg.x = 0.415011605273;
    msg.y = 0.413411030061;
    msg.z = 0.776889371255;

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
    msg.setTimeStamp(0.174979490318);
    msg.setSource(850U);
    msg.setSourceEntity(143U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(192U);
    msg.validity = 19U;
    msg.x = 0.842172003987;
    msg.y = 0.89167108989;
    msg.z = 0.834876966045;

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
    msg.setTimeStamp(0.597434685959);
    msg.setSource(820U);
    msg.setSourceEntity(98U);
    msg.setDestination(19632U);
    msg.setDestinationEntity(149U);
    msg.time = 0.491547502818;
    msg.x = 0.681874022759;
    msg.y = 0.969771211922;
    msg.z = 0.060032616574;

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
    msg.setTimeStamp(0.397386999154);
    msg.setSource(37403U);
    msg.setSourceEntity(187U);
    msg.setDestination(54574U);
    msg.setDestinationEntity(215U);
    msg.time = 0.602594715177;
    msg.x = 0.730999052423;
    msg.y = 0.880111453631;
    msg.z = 0.676112832101;

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
    msg.setTimeStamp(0.0223066867725);
    msg.setSource(17736U);
    msg.setSourceEntity(202U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(78U);
    msg.time = 0.816024067729;
    msg.x = 0.230121656331;
    msg.y = 0.471690828979;
    msg.z = 0.532139985912;

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
    msg.setTimeStamp(0.91816838328);
    msg.setSource(30119U);
    msg.setSourceEntity(229U);
    msg.setDestination(60244U);
    msg.setDestinationEntity(230U);
    msg.validity = 224U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.950266541577;
    tmp_msg_0.y = 0.975829132357;
    tmp_msg_0.z = 0.0971273708698;
    tmp_msg_0.phi = 0.362712571276;
    tmp_msg_0.theta = 0.241566098926;
    tmp_msg_0.psi = 0.846593337737;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.751221133037;

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
    msg.setTimeStamp(0.38350944336);
    msg.setSource(9448U);
    msg.setSourceEntity(114U);
    msg.setDestination(55119U);
    msg.setDestinationEntity(210U);
    msg.validity = 199U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.557609929623;
    tmp_msg_0.y = 0.252895938763;
    tmp_msg_0.z = 0.921150734738;
    tmp_msg_0.phi = 0.549933550888;
    tmp_msg_0.theta = 0.564479638881;
    tmp_msg_0.psi = 0.585098990465;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.417278629719;

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
    msg.setTimeStamp(0.500250684131);
    msg.setSource(37174U);
    msg.setSourceEntity(166U);
    msg.setDestination(54884U);
    msg.setDestinationEntity(37U);
    msg.validity = 171U;
    msg.value = 0.168038043152;

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
    msg.setTimeStamp(0.10453240233);
    msg.setSource(42914U);
    msg.setSourceEntity(114U);
    msg.setDestination(43593U);
    msg.setDestinationEntity(215U);
    msg.value = 0.714378642175;

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
    msg.setTimeStamp(0.436664905394);
    msg.setSource(54579U);
    msg.setSourceEntity(68U);
    msg.setDestination(52738U);
    msg.setDestinationEntity(219U);
    msg.value = 0.230256855527;

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
    msg.setTimeStamp(0.0671433314086);
    msg.setSource(50077U);
    msg.setSourceEntity(156U);
    msg.setDestination(7445U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0914900334426;

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
    msg.setTimeStamp(0.219495585255);
    msg.setSource(35541U);
    msg.setSourceEntity(222U);
    msg.setDestination(16932U);
    msg.setDestinationEntity(26U);
    msg.value = 0.400508950807;

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
    msg.setTimeStamp(0.564070695539);
    msg.setSource(16483U);
    msg.setSourceEntity(176U);
    msg.setDestination(11277U);
    msg.setDestinationEntity(125U);
    msg.value = 0.81350643657;

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
    msg.setTimeStamp(0.757054618788);
    msg.setSource(49288U);
    msg.setSourceEntity(7U);
    msg.setDestination(29268U);
    msg.setDestinationEntity(162U);
    msg.value = 0.484743581525;

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
    msg.setTimeStamp(0.670811762254);
    msg.setSource(23191U);
    msg.setSourceEntity(143U);
    msg.setDestination(35482U);
    msg.setDestinationEntity(204U);
    msg.value = 0.249139109501;

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
    msg.setTimeStamp(0.458651005701);
    msg.setSource(39712U);
    msg.setSourceEntity(199U);
    msg.setDestination(37570U);
    msg.setDestinationEntity(225U);
    msg.value = 0.790148780021;

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
    msg.setTimeStamp(0.0862181672103);
    msg.setSource(38788U);
    msg.setSourceEntity(15U);
    msg.setDestination(56235U);
    msg.setDestinationEntity(105U);
    msg.value = 0.624087896329;

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
    msg.setTimeStamp(0.522468223686);
    msg.setSource(34484U);
    msg.setSourceEntity(55U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(161U);
    msg.value = 0.779255416935;

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
    msg.setTimeStamp(0.465827332799);
    msg.setSource(42583U);
    msg.setSourceEntity(100U);
    msg.setDestination(22628U);
    msg.setDestinationEntity(240U);
    msg.value = 0.691494927588;

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
    msg.setTimeStamp(0.27566974623);
    msg.setSource(42098U);
    msg.setSourceEntity(228U);
    msg.setDestination(9418U);
    msg.setDestinationEntity(187U);
    msg.value = 0.680939297521;

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
    msg.setTimeStamp(0.885319954471);
    msg.setSource(64123U);
    msg.setSourceEntity(12U);
    msg.setDestination(41505U);
    msg.setDestinationEntity(151U);
    msg.value = 0.471137559557;

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
    msg.setTimeStamp(0.217641753372);
    msg.setSource(5177U);
    msg.setSourceEntity(220U);
    msg.setDestination(29618U);
    msg.setDestinationEntity(87U);
    msg.value = 0.314126077747;

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
    msg.setTimeStamp(0.506352262964);
    msg.setSource(6974U);
    msg.setSourceEntity(126U);
    msg.setDestination(62312U);
    msg.setDestinationEntity(55U);
    msg.value = 0.369303641966;

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
    msg.setTimeStamp(0.860663066662);
    msg.setSource(35073U);
    msg.setSourceEntity(48U);
    msg.setDestination(5595U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0678537462856;

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
    msg.setTimeStamp(0.380368729888);
    msg.setSource(38543U);
    msg.setSourceEntity(196U);
    msg.setDestination(7557U);
    msg.setDestinationEntity(242U);
    msg.value = 0.924558869206;

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
    msg.setTimeStamp(0.883574576231);
    msg.setSource(19356U);
    msg.setSourceEntity(53U);
    msg.setDestination(1006U);
    msg.setDestinationEntity(18U);
    msg.value = 0.327049798876;

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
    msg.setTimeStamp(0.762375673079);
    msg.setSource(41138U);
    msg.setSourceEntity(166U);
    msg.setDestination(20116U);
    msg.setDestinationEntity(219U);
    msg.value = 0.593490411434;

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
    msg.setTimeStamp(0.253905414385);
    msg.setSource(58992U);
    msg.setSourceEntity(172U);
    msg.setDestination(16661U);
    msg.setDestinationEntity(205U);
    msg.value = 0.832981002623;

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
    msg.setTimeStamp(0.786007516048);
    msg.setSource(56579U);
    msg.setSourceEntity(160U);
    msg.setDestination(49840U);
    msg.setDestinationEntity(44U);
    msg.value = 0.541119651449;

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
    msg.setTimeStamp(0.636747212595);
    msg.setSource(30093U);
    msg.setSourceEntity(179U);
    msg.setDestination(24827U);
    msg.setDestinationEntity(254U);
    msg.value = 0.747464934429;

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
    msg.setTimeStamp(0.868404715675);
    msg.setSource(22561U);
    msg.setSourceEntity(0U);
    msg.setDestination(35995U);
    msg.setDestinationEntity(175U);
    msg.value = 0.134351435545;

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
    msg.setTimeStamp(0.587782378194);
    msg.setSource(6967U);
    msg.setSourceEntity(149U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(186U);
    msg.value = 0.211548152683;

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
    msg.setTimeStamp(0.191654560763);
    msg.setSource(12929U);
    msg.setSourceEntity(12U);
    msg.setDestination(41247U);
    msg.setDestinationEntity(100U);
    msg.direction = 0.666183648546;
    msg.speed = 0.335575116104;

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
    msg.setTimeStamp(0.799472430551);
    msg.setSource(503U);
    msg.setSourceEntity(15U);
    msg.setDestination(7100U);
    msg.setDestinationEntity(174U);
    msg.direction = 0.699454827912;
    msg.speed = 0.380584095225;

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
    msg.setTimeStamp(0.901918592756);
    msg.setSource(23425U);
    msg.setSourceEntity(82U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(61U);
    msg.direction = 0.436163928274;
    msg.speed = 0.328819036614;

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
    msg.setTimeStamp(0.243329087473);
    msg.setSource(15716U);
    msg.setSourceEntity(36U);
    msg.setDestination(53927U);
    msg.setDestinationEntity(111U);
    msg.value = 0.285479694779;

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
    msg.setTimeStamp(0.902282177861);
    msg.setSource(45659U);
    msg.setSourceEntity(244U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(196U);
    msg.value = 0.597598027023;

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
    msg.setTimeStamp(0.649740781044);
    msg.setSource(24322U);
    msg.setSourceEntity(125U);
    msg.setDestination(7474U);
    msg.setDestinationEntity(97U);
    msg.value = 0.844919726006;

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
    msg.setTimeStamp(0.134940206073);
    msg.setSource(31294U);
    msg.setSourceEntity(230U);
    msg.setDestination(5734U);
    msg.setDestinationEntity(124U);
    msg.value.assign("CYDBKERWPUFQSGVGJRWJAXCMYGHKDW");

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
    msg.setTimeStamp(0.692204269594);
    msg.setSource(35001U);
    msg.setSourceEntity(245U);
    msg.setDestination(30302U);
    msg.setDestinationEntity(222U);
    msg.value.assign("CMBNIWRCNBAPZUVANBHRMIVVSLWIICJGWPODPQJTEOQFVSCINOYKAQZDEUUMHDHCUNHPPMHCQTVPTZGLLQEAGWBYKLPZFU");

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
    msg.setTimeStamp(0.151173591495);
    msg.setSource(57385U);
    msg.setSourceEntity(100U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(143U);
    msg.value.assign("XYEDRVFWKKORBIROYZCSEXGMEVCDMIVCLSECUHZQFPMJXTRZFFPGTGZQDXCWRALNMZPQHADRCNNFJXKYGYZAOUJFYNUXQZDHLQPYPKUJJVHPJMILDAFROBUBBWEKONQBSXDNS");

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
    msg.setTimeStamp(0.251873367432);
    msg.setSource(45404U);
    msg.setSourceEntity(57U);
    msg.setDestination(47863U);
    msg.setDestinationEntity(242U);
    const char tmp_msg_0[] = {-101, 116, -112, 110, 65, -93, 14, 25, 115, 110};
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
    msg.setTimeStamp(0.620203798762);
    msg.setSource(40241U);
    msg.setSourceEntity(166U);
    msg.setDestination(40820U);
    msg.setDestinationEntity(82U);
    const char tmp_msg_0[] = {-58, -82, 79, -93, 101, -6, 36, -19, -83, -54, 118, -6, -72, -101, -64, 117, 123, 43, 36, -75, 29, -74, -67, 95, -49, 39, 82, -34, 73, 115, 38, 40, 46, 107, 62, -107, -125, -15, 101, 56, 78, -69, 85, -11, -72, 114, 123, 27, 17, -36, -25, 42, 71, 76, -65, -43, -84, -20, -96, -76, -26, -42, 123, 95, 83, 105, 40, 86, 68, -66, 71, -7, 109, 11, 3, -59, 92, 93, -69, 45, 82, 93, -57, 5, 80, -75, -25, -110, -90, 39, -40, -20, 40, -15, 53, -49, -45, 67, -113, 103, -122, 56, 36, 49, -105, -43, 44, 23, 109, 117, 13, 71, 46, -15, 46, 78, -121, 58, 97, 97, 105, 89, 16, -80, -41, -91, -58, 82, 102, -45, -60, 7, 59, 41, -103, 76, -55, -47, -101, -56, -14, -89, -55, -69, 123, -78, 102, -117, 24, -90, -58, 107, 11, -44, 74, 94, -97, -127, -107, -80, 30, -62, 126, -1, -115, 1, 4, -90, 125, -33, 111, 85, -86, -52, -55, -125, -67, 75, 1, 9, 65, -58, -117, -116, 22, 35, 46, -26};
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
    msg.setTimeStamp(0.851148123091);
    msg.setSource(63774U);
    msg.setSourceEntity(96U);
    msg.setDestination(30109U);
    msg.setDestinationEntity(59U);
    const char tmp_msg_0[] = {66, 97, -70, 56, 92, -7, -54, -80, -35, -87, -106, -82, 73, 123, -70, -33, -28, -74, -2, 75, 83, 2, 31, -121, -17, 116, 20, 46, -47, -68, 62, 34, -125, -100, -13, 76, -127, -16, 101, -110, -24, 90, -56, 16, 7, 57, 66, 54, -52, 39, -59, -2, -39, -101, 45, 69, -11, -63, 16, -119, -19, -42, -47, -59, -96, -56, 47, -56, -73, 94, 72, 77, -57, 1, -61, 3, -66, -60, -10, -5, 57, 12, 31, -93, 0, 77, -128, 58, -95, -55, 1, 26, 77, -53, 104, -116, 120, -26, -117, -21, 35, 84, 84, 40, -74, 24, 47, -16, 103, -85, 58, 66, 100, 11, -40, -65, 48, -126, 59, -28, 73, 109, -27, -64, -29, -128, 121, -28, -4, 29, 5, -20, 52, 87, 43, 48, -83, -16, 41, 88, 66, -17, -115, -128, -61, -98, -1, 24, 124, 104, 56, 37, -26, -88, -94, 38, 37, 78, -79, 62, 5, 28, 70, -10, 123, -81, -84, 55, 43, 10, 83, -33, 11, -81};
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
    msg.setTimeStamp(0.0297394615754);
    msg.setSource(45358U);
    msg.setSourceEntity(247U);
    msg.setDestination(44747U);
    msg.setDestinationEntity(251U);
    msg.frequency = 2507571827U;
    msg.min_range = 6474U;
    msg.max_range = 12161U;

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
    msg.setTimeStamp(0.150684952033);
    msg.setSource(43676U);
    msg.setSourceEntity(216U);
    msg.setDestination(62265U);
    msg.setDestinationEntity(128U);
    msg.frequency = 3602132291U;
    msg.min_range = 9272U;
    msg.max_range = 557U;

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
    msg.setTimeStamp(0.775062764185);
    msg.setSource(26017U);
    msg.setSourceEntity(13U);
    msg.setDestination(42131U);
    msg.setDestinationEntity(196U);
    msg.frequency = 1717868965U;
    msg.min_range = 12320U;
    msg.max_range = 26531U;

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
    msg.setTimeStamp(0.473245604555);
    msg.setSource(42162U);
    msg.setSourceEntity(25U);
    msg.setDestination(18529U);
    msg.setDestinationEntity(57U);
    msg.type = 167U;
    msg.frequency = 2538590938U;
    msg.min_range = 58028U;
    msg.max_range = 6780U;
    msg.bits_per_point = 161U;
    msg.scale_factor = 0.216847221333;
    const char tmp_msg_0[] = {-31, 54, 33, 80, -121, -60, 71, -124, -35, 11, -115, 17, 64, 54, 72, -98, -5, -117, 45, -42, 10, 17, -108, -27, -68, -1, -120, 38, 100, 104, 122, -38, -116, 77, 117, 5, 50, -72, 80, 9, 86, -21, -99, 10, -108, -8, 74, 86, 11, 24, -42, 12, -102, -77, 60, -29, -71, 93, 77, -1, 25, -30, -38, 9, 83, 41, 7, -56, -31, -37, 4, 16, 125, 117, -66, 26, -85, 45, -101, -16, 51, 72, 67, 54, -110, -77, -77, 98, 22, 65, 13, -77, 4, 105, -35, 121, -38, 126, 10, 94, -14, 72, 117, 118, 28, -46, 113, 6, 3, 13, -55, 11, 116, 48, -72, -106, 106, -8, 125, 53, 110, -96, 124, -27, 34, -101, 36, -70, 74, -22, 124, -41, 8, -81, -54, 113, 75, -9, -18, 46, 69, -5, -27, -23, 69, -117, 48, 37, -12, 61, -51, -43, -96, -42, -50, 118, -35, 80, 47, -18, 47, 66, 61, -76, -120, -66, 98, -37, 40, -57, -106, 84, -115, 88, -19, 31, -85, 23, -8, 29, -72, 8, -30, -82, 73, 22, -2, -125, 15, 13, -9, -53, 29, -61, 65, 61, 77, 105, 112, 121, 60, -117, 98, -19};
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
    msg.setTimeStamp(0.394462434465);
    msg.setSource(35010U);
    msg.setSourceEntity(220U);
    msg.setDestination(60351U);
    msg.setDestinationEntity(232U);
    msg.type = 238U;
    msg.frequency = 703278519U;
    msg.min_range = 25625U;
    msg.max_range = 2135U;
    msg.bits_per_point = 12U;
    msg.scale_factor = 0.458242614478;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.152437382655;
    tmp_msg_0.beam_height = 0.043126001246;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {78, 3, 55, 56, -12, -65, -67, -10, -76, 116, -102, 65, 125, 71, -102, -115, 81, 49, -108, -60, -52, -104, 115, -120, -27, -123, 11, -80, -3, 12, -112, -124, 41, 97, 94, -66, 11, -117, -21, -29, 18, -81, -29, 95, 0, 85, 112, -69, 125, 80, -9, 0, -21, -14, -72, -55, 25, 3, 65, -43, -25, -42, -72, 53, 65, 91, 57, 81, 97, -105, -91, -54, 108, 106, 92, 60, -17, -27, 121, -28, 12, 86, 91, 79, -54, 21, -104, -21, 10, -112, 13, -61, 0, 10, 61, -20, 56, 104, -53, 112, 2, -115, 17, -92, 109, -2, 63, -89, -7, 19, 45, 68, -70, -24, 123, 45, -62, 16, 63, 5, 1, -13, 16, 35, 22, 15, -33, -11, 99, 41, 98, -109, -25, 84, -50, -126, -94, 66, -37, -40, -63, 69, 125, 95, -86, 21, 66, -77, -40, -3, -13, -116, -9, -87, 17, 74, -30, 70, 49, -4, 88, -25, 89, 8, -48, -31, 117, 99, 90, -108, 13, 111, 111, 111, -80, -67, 27, 108, -60, -69, 37, -18, -44, -74, -54, 33, -126, 12, 40, -22, -22, -118, -119, -61, 124, 15, 48, 67, -74, 29, 37, -100, 95, -15, 107, 39, -108, 66, 79, -90, -50, 83, -40, 113, -73, 54, 0, -101, -56, 120, 35, 94, 95, 62, 110, -121, 53, -84, -40, 90, 122, 59, -116, -100, -17, 26, 82, 5, -25, 6, 38, 11, 12, -84, 23, 78, -14, 1, -109};
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
    msg.setTimeStamp(0.46449893619);
    msg.setSource(60546U);
    msg.setSourceEntity(7U);
    msg.setDestination(36943U);
    msg.setDestinationEntity(1U);
    msg.type = 168U;
    msg.frequency = 1452338894U;
    msg.min_range = 35450U;
    msg.max_range = 62450U;
    msg.bits_per_point = 0U;
    msg.scale_factor = 0.921239414262;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.542901196287;
    tmp_msg_0.beam_height = 0.0743782822408;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {3, 71, 67, -23, -91, 26, 104, 113, 39, 115};
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
    msg.setTimeStamp(0.702742291869);
    msg.setSource(13082U);
    msg.setSourceEntity(66U);
    msg.setDestination(58454U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.613629449664);
    msg.setSource(23851U);
    msg.setSourceEntity(222U);
    msg.setDestination(17872U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.59865359911);
    msg.setSource(26486U);
    msg.setSourceEntity(100U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.768010983233);
    msg.setSource(8381U);
    msg.setSourceEntity(110U);
    msg.setDestination(40548U);
    msg.setDestinationEntity(83U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.365327321639);
    msg.setSource(51379U);
    msg.setSourceEntity(73U);
    msg.setDestination(58583U);
    msg.setDestinationEntity(31U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.849514418908);
    msg.setSource(9922U);
    msg.setSourceEntity(172U);
    msg.setDestination(37580U);
    msg.setDestinationEntity(12U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.909718972894);
    msg.setSource(53584U);
    msg.setSourceEntity(247U);
    msg.setDestination(55080U);
    msg.setDestinationEntity(23U);
    msg.value = 0.986756820702;
    msg.confidence = 0.288012116021;
    msg.opmodes.assign("REYHMFRIVNNCAGDMGMTEFANH");

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
    msg.setTimeStamp(0.574153760787);
    msg.setSource(50935U);
    msg.setSourceEntity(250U);
    msg.setDestination(4242U);
    msg.setDestinationEntity(221U);
    msg.value = 0.258635359444;
    msg.confidence = 0.42373006699;
    msg.opmodes.assign("LPBDHWCRFDRWDWVKZCBZHPXUIZJZXEEABUVXHXVKVQAYBTMBYJILFGRYKVOIOENANBLRDFWWPNHMGTUGSLCDXCVHXSNRYPGPVKQPZBFPEUSMJPDYIRWZYZUQYRUGQMIMWDSNJTCHITJENQMOVLGXVCXBRDWMGGJBJMOOAOZAWXRTODCQOSTMZNOFICSANAFKFNLLTUGVEKLOIFQASMEGLEFLJFRYSEIHTSQHJ");

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
    msg.setTimeStamp(0.122453615728);
    msg.setSource(42967U);
    msg.setSourceEntity(146U);
    msg.setDestination(17757U);
    msg.setDestinationEntity(204U);
    msg.value = 0.905815018883;
    msg.confidence = 0.038272021501;
    msg.opmodes.assign("MTMCJWZVYBRDFNG");

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
    msg.setTimeStamp(0.348926561009);
    msg.setSource(41636U);
    msg.setSourceEntity(174U);
    msg.setDestination(60595U);
    msg.setDestinationEntity(11U);
    msg.itow = 1457957965U;
    msg.lat = 0.620073093299;
    msg.lon = 0.906166569784;
    msg.height_ell = 0.928743618267;
    msg.height_sea = 0.755391122154;
    msg.hacc = 0.334512077134;
    msg.vacc = 0.0295203662942;
    msg.vel_n = 0.356133205569;
    msg.vel_e = 0.261393296334;
    msg.vel_d = 0.224537514942;
    msg.speed = 0.429317973329;
    msg.gspeed = 0.979837412431;
    msg.heading = 0.959406425871;
    msg.sacc = 0.0319498549467;
    msg.cacc = 0.54627512751;

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
    msg.setTimeStamp(0.486242093492);
    msg.setSource(25628U);
    msg.setSourceEntity(64U);
    msg.setDestination(21035U);
    msg.setDestinationEntity(53U);
    msg.itow = 2804988879U;
    msg.lat = 0.210091180101;
    msg.lon = 0.714823220878;
    msg.height_ell = 0.149279208548;
    msg.height_sea = 0.321392858518;
    msg.hacc = 0.391967728079;
    msg.vacc = 0.282777796291;
    msg.vel_n = 0.89429666093;
    msg.vel_e = 0.656969515789;
    msg.vel_d = 0.374949383744;
    msg.speed = 0.153787551719;
    msg.gspeed = 0.758348734596;
    msg.heading = 0.583417498974;
    msg.sacc = 0.711893086038;
    msg.cacc = 0.616686359597;

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
    msg.setTimeStamp(0.400590644414);
    msg.setSource(9440U);
    msg.setSourceEntity(209U);
    msg.setDestination(22685U);
    msg.setDestinationEntity(19U);
    msg.itow = 4269903654U;
    msg.lat = 0.692208352706;
    msg.lon = 0.194806691523;
    msg.height_ell = 0.48892899298;
    msg.height_sea = 0.728257292204;
    msg.hacc = 0.962025429049;
    msg.vacc = 0.742804557928;
    msg.vel_n = 0.285868329912;
    msg.vel_e = 0.404237241037;
    msg.vel_d = 0.889026327565;
    msg.speed = 0.799205310285;
    msg.gspeed = 0.0753819650283;
    msg.heading = 0.622130848799;
    msg.sacc = 0.5783064519;
    msg.cacc = 0.560487974083;

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
    msg.setTimeStamp(0.00915996035401);
    msg.setSource(21339U);
    msg.setSourceEntity(172U);
    msg.setDestination(40268U);
    msg.setDestinationEntity(88U);
    msg.id = 164U;
    msg.value = 0.658220891679;

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
    msg.setTimeStamp(0.862393074517);
    msg.setSource(33585U);
    msg.setSourceEntity(188U);
    msg.setDestination(61980U);
    msg.setDestinationEntity(174U);
    msg.id = 153U;
    msg.value = 0.935440394084;

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
    msg.setTimeStamp(0.923818214154);
    msg.setSource(9015U);
    msg.setSourceEntity(100U);
    msg.setDestination(64508U);
    msg.setDestinationEntity(185U);
    msg.id = 145U;
    msg.value = 0.979388409082;

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
    msg.setTimeStamp(0.606801124438);
    msg.setSource(62736U);
    msg.setSourceEntity(210U);
    msg.setDestination(8499U);
    msg.setDestinationEntity(77U);
    msg.x = 0.106083259633;
    msg.y = 0.92115962141;
    msg.z = 0.00070296619361;
    msg.phi = 0.328462676003;
    msg.theta = 0.900940360265;
    msg.psi = 0.479114684141;

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
    msg.setTimeStamp(0.001934065974);
    msg.setSource(51771U);
    msg.setSourceEntity(35U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(140U);
    msg.x = 0.0056218335065;
    msg.y = 0.910720793639;
    msg.z = 0.993443790216;
    msg.phi = 0.289956719186;
    msg.theta = 0.579717679012;
    msg.psi = 0.868677312721;

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
    msg.setTimeStamp(0.128821686878);
    msg.setSource(16278U);
    msg.setSourceEntity(84U);
    msg.setDestination(42115U);
    msg.setDestinationEntity(103U);
    msg.x = 0.538822937548;
    msg.y = 0.918848186243;
    msg.z = 0.859783842982;
    msg.phi = 0.696134240002;
    msg.theta = 0.0272089070358;
    msg.psi = 0.685214683801;

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
    msg.setTimeStamp(0.506783311737);
    msg.setSource(20086U);
    msg.setSourceEntity(178U);
    msg.setDestination(907U);
    msg.setDestinationEntity(155U);
    msg.beam_width = 0.4952130924;
    msg.beam_height = 0.8355796788;

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
    msg.setTimeStamp(0.045317264186);
    msg.setSource(56037U);
    msg.setSourceEntity(111U);
    msg.setDestination(4492U);
    msg.setDestinationEntity(168U);
    msg.beam_width = 0.864687717959;
    msg.beam_height = 0.986710752773;

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
    msg.setTimeStamp(0.964995618236);
    msg.setSource(43447U);
    msg.setSourceEntity(41U);
    msg.setDestination(60668U);
    msg.setDestinationEntity(94U);
    msg.beam_width = 0.746965136552;
    msg.beam_height = 0.767743180876;

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
    msg.setTimeStamp(0.264872974795);
    msg.setSource(26215U);
    msg.setSourceEntity(135U);
    msg.setDestination(261U);
    msg.setDestinationEntity(212U);
    msg.id = 94U;
    msg.zoom = 218U;
    msg.action = 162U;

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
    msg.setTimeStamp(0.670640701131);
    msg.setSource(1301U);
    msg.setSourceEntity(100U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(49U);
    msg.id = 225U;
    msg.zoom = 248U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.29860953819);
    msg.setSource(41297U);
    msg.setSourceEntity(169U);
    msg.setDestination(48287U);
    msg.setDestinationEntity(177U);
    msg.id = 226U;
    msg.zoom = 236U;
    msg.action = 54U;

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
    msg.setTimeStamp(0.498808094619);
    msg.setSource(3703U);
    msg.setSourceEntity(11U);
    msg.setDestination(35945U);
    msg.setDestinationEntity(224U);
    msg.id = 90U;
    msg.value = 0.070313330256;

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
    msg.setTimeStamp(0.00629605818806);
    msg.setSource(6813U);
    msg.setSourceEntity(170U);
    msg.setDestination(60968U);
    msg.setDestinationEntity(185U);
    msg.id = 60U;
    msg.value = 0.430629477501;

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
    msg.setTimeStamp(0.784721725055);
    msg.setSource(38342U);
    msg.setSourceEntity(178U);
    msg.setDestination(40377U);
    msg.setDestinationEntity(160U);
    msg.id = 144U;
    msg.value = 0.393061867266;

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
    msg.setTimeStamp(0.47113870588);
    msg.setSource(2146U);
    msg.setSourceEntity(241U);
    msg.setDestination(53920U);
    msg.setDestinationEntity(232U);
    msg.id = 78U;
    msg.value = 0.544737649045;

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
    msg.setTimeStamp(0.47650318412);
    msg.setSource(54215U);
    msg.setSourceEntity(2U);
    msg.setDestination(18842U);
    msg.setDestinationEntity(4U);
    msg.id = 254U;
    msg.value = 0.395291699487;

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
    msg.setTimeStamp(0.00643432833322);
    msg.setSource(49840U);
    msg.setSourceEntity(21U);
    msg.setDestination(27798U);
    msg.setDestinationEntity(41U);
    msg.id = 9U;
    msg.value = 0.720853830207;

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
    msg.setTimeStamp(0.107331777357);
    msg.setSource(3655U);
    msg.setSourceEntity(148U);
    msg.setDestination(28720U);
    msg.setDestinationEntity(208U);
    msg.id = 18U;
    msg.angle = 0.504270117703;

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
    msg.setTimeStamp(0.0912443418402);
    msg.setSource(5280U);
    msg.setSourceEntity(134U);
    msg.setDestination(52342U);
    msg.setDestinationEntity(176U);
    msg.id = 178U;
    msg.angle = 0.299287698547;

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
    msg.setTimeStamp(0.892314475397);
    msg.setSource(14766U);
    msg.setSourceEntity(133U);
    msg.setDestination(989U);
    msg.setDestinationEntity(104U);
    msg.id = 221U;
    msg.angle = 0.879933114565;

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
    msg.setTimeStamp(0.946297229907);
    msg.setSource(15707U);
    msg.setSourceEntity(156U);
    msg.setDestination(45318U);
    msg.setDestinationEntity(9U);
    msg.op = 59U;
    msg.actions.assign("YRTTLYAYAKFVPNVQPIDXYZZDLAHKOBOBNXYNHYJSIAVWUHGEDZZLFJCZDQFKKCGBTREPQGGXCSOJJOWRCWIJOSFVWCUSSVKVBQHNUWNTXBHRGPLSKGIAHRAWBVUMIWDPCBTSCVLAQQFKMEPMETDTMFJENQUNLPSONHWZLMCLIUBVKZENPXXMSUNR");

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
    msg.setTimeStamp(0.460554741958);
    msg.setSource(14811U);
    msg.setSourceEntity(186U);
    msg.setDestination(4505U);
    msg.setDestinationEntity(157U);
    msg.op = 46U;
    msg.actions.assign("QBKMWCDEPYLEDAGHIQRBXOEFULWXPOIRTRXGJFDUCQSCWXAFWSOBIBCDWPDPMDHGMQGXEQULFPTKMZZYITNUYFAHTZONSANIWSPKHLBITZVLJZGVRCJAZYKTHYSCLKUAEHPQAAIDCHWOKFVNNEJVVTDEUYMQBIKVRUFIRKXYWNNYBAYGGPADNLZYJZFGRMMEQWSHIHLEMECOMCUUJTFKXOQMRLXWTXCKSLRPHQGBXJ");

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
    msg.setTimeStamp(0.426998849432);
    msg.setSource(19665U);
    msg.setSourceEntity(72U);
    msg.setDestination(48842U);
    msg.setDestinationEntity(193U);
    msg.op = 80U;
    msg.actions.assign("ELBQKNZXPJCRHTXCNSAEGZHEILBCFJKVKTUSFQIJPRQJYQSTSKQNLGDDIGHHYIJRAACACMFJQHVHFPOYXMVZMBIEIEZLUMOFVPUNZVNIWJMFEBSKVELLCTYYRIXUGXWOHTSKYWJRZUXRPAUSNKZXVCWZUONCJMRRDIUSHDGPORTFPNLACLTZBQWCXDXYAMRYFDTBQDVFQTYTHWMGOQGOBPAVUBKMAZIVGOKYMGWBWEDLWPAGSDUNHESPKFOO");

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
    msg.setTimeStamp(0.123062282237);
    msg.setSource(45117U);
    msg.setSourceEntity(28U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(25U);
    msg.actions.assign("VUNHUSIIBDFWPIPENJQIYOAXCLTPJTUETDQVIARNLYFXSAQHDUVHYSZKNPMCOBNTTOQXJZUMRNRWRTPZQMZDFAERYABJKKZJNCSEYVGOWWVTCVMCHQFFGULJBMOCDSOVTKCXJIQBHODXFANPPRFZQMAMEFKKCHWUBSYONXXLGSBKQDLDAZVGUWMCGKBMIERAI");

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
    msg.setTimeStamp(0.938764353571);
    msg.setSource(43678U);
    msg.setSourceEntity(134U);
    msg.setDestination(3316U);
    msg.setDestinationEntity(192U);
    msg.actions.assign("ZHTKEMFRRDXYOCWKHYFWLSBWPHHMZVRXSUSUXKDABJSSBVCGHHXAFTBKLJNMLYLPFSOVXCDLXIZOMHRPGAUQWWEQGUZEFOMTIEZYGVRNUKUJDOUVJIRAZULQCCFJYODYGLRCZYPIAVYPVBDNKQMTCBIMQKPUXEKUOJLGBITBWVNNGSKOORHQTKFGNTCPMEWAHADAZYDWSHTIPATNQJXGDTFIVMXQVQCD");

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
    msg.setTimeStamp(0.857923535768);
    msg.setSource(3740U);
    msg.setSourceEntity(175U);
    msg.setDestination(58016U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("ZJGWVBOZNPJSQQGMVASGAVZHFKIXTQNHSVHHCWNURYTJUOFEWYNKTLORPYVDVFLFQTFNBTRFPPBTNGRYKMASCJEJWKJLPHYHRMRAK");

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
    msg.setTimeStamp(0.929090599447);
    msg.setSource(39467U);
    msg.setSourceEntity(156U);
    msg.setDestination(7713U);
    msg.setDestinationEntity(28U);
    msg.button = 138U;
    msg.value = 165U;

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
    msg.setTimeStamp(0.419325980728);
    msg.setSource(10531U);
    msg.setSourceEntity(48U);
    msg.setDestination(7074U);
    msg.setDestinationEntity(223U);
    msg.button = 77U;
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
    msg.setTimeStamp(0.588811615626);
    msg.setSource(7822U);
    msg.setSourceEntity(45U);
    msg.setDestination(61624U);
    msg.setDestinationEntity(222U);
    msg.button = 141U;
    msg.value = 159U;

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
    msg.setTimeStamp(0.395401509876);
    msg.setSource(13319U);
    msg.setSourceEntity(42U);
    msg.setDestination(15197U);
    msg.setDestinationEntity(183U);
    msg.op = 127U;
    msg.text.assign("QFULTOYNDYTXLEKPGJKVXQNQZXQWOGITJCUKFWGBJIGUTSZYJVZWFFVXRWQUMZSGEMQNDAJPZBYHEPZFTMENEHCFIDIPAAKXLVCMMKYQBTVAPKWBMZEOKXVSVSSLHIALWFCKGRYIDIDMRARAUBNYBHWMDDYZXOHUBUSDCOLKQQWWMUHLBTPSUZHOSTX");

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
    msg.setTimeStamp(0.129914173127);
    msg.setSource(6101U);
    msg.setSourceEntity(165U);
    msg.setDestination(55649U);
    msg.setDestinationEntity(214U);
    msg.op = 214U;
    msg.text.assign("JRZOCWERDVPSZLLGXWFJRRJAIICKQGWNBYCUCXTZKMYRCNLPBBBGSASJQEBRAKUEYHSGPZYZLAKOAYVNGKIXHGHUXRIFIOMFWCMDXHNEFRGHPQMSWXIBMOXPQEDCVJIZUTCSDVDUEPNMWAYIKNGHYMBGZUUJCLFSNREEBFQKOFNDJFWHUDQYOXJJVTLZTNLQDOQQTPTOAONQJITFV");

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
    msg.setTimeStamp(0.973604176352);
    msg.setSource(25737U);
    msg.setSourceEntity(247U);
    msg.setDestination(61140U);
    msg.setDestinationEntity(90U);
    msg.op = 202U;
    msg.text.assign("EIBJOYEIZHITISIYJMBXKUKXBDCCHALXFHMJKGFAJYEXAVPIPAENSJWHNRNMJNRIGMJPFZKKYKSAUWBZDRUPFUNMDVTZNZDSVFZOBBZIKFLLWXTGXVUQPNLLXRDAJWWUOLPLRAESQAFVWMGUMMYQJGVQTYESVYTQUVDHPRKWDMSOTDRPEYOVGZVSMNTGJUNTGILWFEHOZQDPXDRCZLCGKUTBCOHYOARBRQPFWOEBCLGCHNCTKFABI");

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
    msg.setTimeStamp(0.779713620211);
    msg.setSource(9757U);
    msg.setSourceEntity(240U);
    msg.setDestination(64646U);
    msg.setDestinationEntity(117U);
    msg.op = 94U;
    msg.time_remain = 0.0583567064852;
    msg.sched_time = 0.916350165081;

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
    msg.setTimeStamp(0.478144812573);
    msg.setSource(21321U);
    msg.setSourceEntity(16U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(84U);
    msg.op = 230U;
    msg.time_remain = 0.15287983623;
    msg.sched_time = 0.192839857069;

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
    msg.setTimeStamp(0.7642303024);
    msg.setSource(65036U);
    msg.setSourceEntity(24U);
    msg.setDestination(60957U);
    msg.setDestinationEntity(104U);
    msg.op = 126U;
    msg.time_remain = 0.129306958459;
    msg.sched_time = 0.362616802458;

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
    msg.setTimeStamp(0.738626477551);
    msg.setSource(44845U);
    msg.setSourceEntity(148U);
    msg.setDestination(6578U);
    msg.setDestinationEntity(101U);
    msg.name.assign("SFLSDVZBYNSAGLTPSGDMOMWXUTVTKZTIXKSYWOTYZZDBLGOBAZRDOXPHSRGHNXNJCYCCZJEFMIFZEXWVMXTTQFBKWJOBMLCYMLHDTPKEPVQUEAMONLKDMURABEOYXDLLQAINWNIVVQYXCQUEVOVEWRFPSZFGRI");
    msg.op = 44U;
    msg.sched_time = 0.997632678841;

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
    msg.setTimeStamp(0.0197085401397);
    msg.setSource(26543U);
    msg.setSourceEntity(55U);
    msg.setDestination(49088U);
    msg.setDestinationEntity(54U);
    msg.name.assign("QWJLDSQKHNICBVLBPXRTEDYEWHXMNUDSHGXHLJTALFBOGWGGPNMNORRCPIXGPIAKBXHPEMUBWOQRUJ");
    msg.op = 217U;
    msg.sched_time = 0.011492602593;

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
    msg.setTimeStamp(0.53454204765);
    msg.setSource(3041U);
    msg.setSourceEntity(84U);
    msg.setDestination(19934U);
    msg.setDestinationEntity(251U);
    msg.name.assign("YKSIUAELKTFKKXNTPQAVKZTCVONMCDSHNXOZOTPVLWMNHDDHRPFXFKWBWPPZIHEVLNTPELXSSTJRJZKYSHOUDCAIFBOARRIOBZAXIVSYRLAZYCBUOSCVMNRUPHJJAXYONIXWHFFMBIATPGRHQIGS");
    msg.op = 85U;
    msg.sched_time = 0.462514284389;

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
    msg.setTimeStamp(0.94494888937);
    msg.setSource(53759U);
    msg.setSourceEntity(127U);
    msg.setDestination(34966U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.334483552376);
    msg.setSource(59079U);
    msg.setSourceEntity(254U);
    msg.setDestination(52776U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.371563891073);
    msg.setSource(11608U);
    msg.setSourceEntity(169U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.716220675036);
    msg.setSource(46942U);
    msg.setSourceEntity(142U);
    msg.setDestination(58443U);
    msg.setDestinationEntity(116U);
    msg.name.assign("DMHEITANSXENJSZTVEKEFFEHASUVBEUKYHDOVIOOCHXIDAMMYHMFKMTGPCIUFQVDEDQUNJEHRWAUIAGPRX");
    msg.state = 103U;

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
    msg.setTimeStamp(0.376778671566);
    msg.setSource(1726U);
    msg.setSourceEntity(205U);
    msg.setDestination(43236U);
    msg.setDestinationEntity(15U);
    msg.name.assign("QSQONBUXCWLQSMZEYCPPMAAINREFEWFVHUZGHVJTZRFBKWGAXCUQEGOOTLKTEDFVFNIWJMDTQBMYSLZFQTAYBHMZNG");
    msg.state = 67U;

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
    msg.setTimeStamp(0.703772252694);
    msg.setSource(10098U);
    msg.setSourceEntity(177U);
    msg.setDestination(52035U);
    msg.setDestinationEntity(195U);
    msg.name.assign("GLSXSLYYQZUWEEJVARPYWBPMQOWALIRAMCWWROMPUFOFMYXYUBFYUIHGPRFRNCEMGCZZSAEGLTBVJEHLLHNRFAFLAKJXBTCTTRHSKKQQYQABBOYKNMJX");
    msg.state = 153U;

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
    msg.setTimeStamp(0.746955928399);
    msg.setSource(4920U);
    msg.setSourceEntity(196U);
    msg.setDestination(20433U);
    msg.setDestinationEntity(128U);
    msg.name.assign("WJYZMMNOAQLSBSRVHHIWUGKBXYEWPQSAVKFQLXKCSDLCWIZXGFQZYEXRHJAEJXFHKUAOJXRNOISWZABRUKHHFPMYROD");
    msg.value = 228U;

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
    msg.setTimeStamp(0.455130281985);
    msg.setSource(34571U);
    msg.setSourceEntity(151U);
    msg.setDestination(53258U);
    msg.setDestinationEntity(16U);
    msg.name.assign("MWNJGTEDQQIKOCWAZFPLECGNNSBJSBPGQKGLXHRLXWZXXPXEHBPMJQEPXYPYMNAZVULRSVYJKIFGKVQJIWRVWTYTOEFDCHPIBSHATKVEOUSHKBDLQMAKTRHFHULFBOK");
    msg.value = 147U;

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
    msg.setTimeStamp(0.611110268981);
    msg.setSource(64635U);
    msg.setSourceEntity(181U);
    msg.setDestination(36379U);
    msg.setDestinationEntity(42U);
    msg.name.assign("GNREZLJJCBCFGLIIYUZITJOUCRSXQELFTFWCJUMHMOEICHNZUMYNNZOEVLIMOELQNZHDAWFKQBWVZGAYCXRDPXVWMHQAUYVMBQDMQLHFSZORGLDVBZHRTNWDDANEGYHHTWQAOGOBSQTAGV");
    msg.value = 89U;

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
    msg.setTimeStamp(0.647737450595);
    msg.setSource(4316U);
    msg.setSourceEntity(175U);
    msg.setDestination(43127U);
    msg.setDestinationEntity(251U);
    msg.name.assign("UVHDKYZSTZDMFXHCUCOHOLEFQLTIGEPJRYHIEIJWRRASGAKPBEHATQIVOPPESFUWSDZNCCFWVTFFNIJSMLXMRKAZLLSPWZBXYVXMDJGQKSJUAJYZLXWDYLKNNTGFIZBQUMNYKBMQTOMHNOVVGHPCSIUNRUAFGQPEPCGBTT");

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
    msg.setTimeStamp(0.377311729408);
    msg.setSource(57270U);
    msg.setSourceEntity(206U);
    msg.setDestination(16733U);
    msg.setDestinationEntity(185U);
    msg.name.assign("RGGSOJBYNWQYIZTCAVEKQFRORZAZMHIUQEKDPSIMTSWJNPPBRUXIKGBLAHFLO");

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
    msg.setTimeStamp(0.144165863147);
    msg.setSource(5555U);
    msg.setSourceEntity(46U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(85U);
    msg.name.assign("FZNVLSPLMICBAOHSEVEWYFSNJTYCEVDLBMTNMFDGWPHSVDRTMZPMAVGXQEMCQKUYIYCGPHUTOMOYDHSMFHYLNWZRCUDFKBATYMJRABZJSQKTLXIHNKJYBGCEPHFCRIUJRWCSCK");

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
    msg.setTimeStamp(0.0223388659943);
    msg.setSource(58369U);
    msg.setSourceEntity(57U);
    msg.setDestination(51697U);
    msg.setDestinationEntity(126U);
    msg.name.assign("FRFMGYFJIVQAEMKLYWGUNTGULMYPJXWUZAOLXNEOUDHNVNBOVPQLMRHQGCRSFKJVANTBHJDWHWIQDXUIUHBWIZSWDZLUTBEQGMRMPNJZXPNACCDOPRBTZPCUPKBJCLACLK");
    msg.value = 185U;

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
    msg.setTimeStamp(0.618727259199);
    msg.setSource(53004U);
    msg.setSourceEntity(123U);
    msg.setDestination(39185U);
    msg.setDestinationEntity(136U);
    msg.name.assign("GXDICKDFBEAUQLRSEUMRHNPLXUMZNRTJAVUNJESKNONVTEYKMWQDY");
    msg.value = 7U;

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
    msg.setTimeStamp(0.352506592693);
    msg.setSource(38224U);
    msg.setSourceEntity(194U);
    msg.setDestination(9687U);
    msg.setDestinationEntity(30U);
    msg.name.assign("DYOPOWKKMEAKVQOQXJFCYHSCYKULXXDSKZOGYZFMQPSHGLKMBPHAABQTHMYOINFAXQKZTPRMLRHMGPNDJIEIJTIZELXJUNRIWSQJWUFWPRYUXGDZAMABHADZKYZWWJFDUGRVRBOZXGDNOSPETVWXAIBEGMVSHFIGQCVNJNFTHVQFTTLRLYPLU");
    msg.value = 67U;

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
    msg.setTimeStamp(0.591634450379);
    msg.setSource(31098U);
    msg.setSourceEntity(78U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.970985868312;
    msg.lon = 0.895626775699;
    msg.height = 0.418137835607;
    msg.x = 0.162971761301;
    msg.y = 0.233637692796;
    msg.z = 0.759655668246;
    msg.phi = 0.639734811906;
    msg.theta = 0.986523528324;
    msg.psi = 0.97879951846;
    msg.u = 0.288200473627;
    msg.v = 0.811825533119;
    msg.w = 0.31292006641;
    msg.vx = 0.574726546406;
    msg.vy = 0.672218128484;
    msg.vz = 0.555063012185;
    msg.p = 0.266508095105;
    msg.q = 0.488903959662;
    msg.r = 0.358065850109;
    msg.depth = 0.913614387782;
    msg.alt = 0.476370078754;

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
    msg.setTimeStamp(0.149418579279);
    msg.setSource(38275U);
    msg.setSourceEntity(7U);
    msg.setDestination(41160U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.868104121809;
    msg.lon = 0.615245909257;
    msg.height = 0.671317600842;
    msg.x = 0.721178450343;
    msg.y = 0.688945978987;
    msg.z = 0.193403031373;
    msg.phi = 0.243634664351;
    msg.theta = 0.299909211186;
    msg.psi = 0.22095842029;
    msg.u = 0.105552574025;
    msg.v = 0.283044322313;
    msg.w = 0.0570462339684;
    msg.vx = 0.640469214856;
    msg.vy = 0.602035753453;
    msg.vz = 0.553117570317;
    msg.p = 0.619250383323;
    msg.q = 0.258784798701;
    msg.r = 0.367548924561;
    msg.depth = 0.511891369876;
    msg.alt = 0.722158519326;

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
    msg.setTimeStamp(0.13343261496);
    msg.setSource(41180U);
    msg.setSourceEntity(243U);
    msg.setDestination(31329U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.521035625011;
    msg.lon = 0.561785289878;
    msg.height = 0.143701658803;
    msg.x = 0.844174587144;
    msg.y = 0.719317555207;
    msg.z = 0.805777540171;
    msg.phi = 0.821515816426;
    msg.theta = 0.785019872346;
    msg.psi = 0.691762215019;
    msg.u = 0.0680808959972;
    msg.v = 0.329139078309;
    msg.w = 0.0170164231841;
    msg.vx = 0.0984111315323;
    msg.vy = 0.0619746998851;
    msg.vz = 0.775052154847;
    msg.p = 0.572716587995;
    msg.q = 0.811052449685;
    msg.r = 0.911054909565;
    msg.depth = 0.309566504647;
    msg.alt = 0.686698064811;

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
    msg.setTimeStamp(0.0964728331993);
    msg.setSource(28465U);
    msg.setSourceEntity(152U);
    msg.setDestination(22572U);
    msg.setDestinationEntity(176U);
    msg.x = 0.778500074489;
    msg.y = 0.287825098927;
    msg.z = 0.270356009886;

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
    msg.setTimeStamp(0.145958983065);
    msg.setSource(51232U);
    msg.setSourceEntity(204U);
    msg.setDestination(28206U);
    msg.setDestinationEntity(158U);
    msg.x = 0.696842153458;
    msg.y = 0.341925486589;
    msg.z = 0.976833835583;

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
    msg.setTimeStamp(0.309987067968);
    msg.setSource(57970U);
    msg.setSourceEntity(218U);
    msg.setDestination(50503U);
    msg.setDestinationEntity(130U);
    msg.x = 0.1406513833;
    msg.y = 0.6548000475;
    msg.z = 0.48619775781;

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
    msg.setTimeStamp(0.145962314044);
    msg.setSource(18915U);
    msg.setSourceEntity(228U);
    msg.setDestination(62080U);
    msg.setDestinationEntity(0U);
    msg.value = 0.741317666857;

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
    msg.setTimeStamp(0.77736499635);
    msg.setSource(10256U);
    msg.setSourceEntity(43U);
    msg.setDestination(19098U);
    msg.setDestinationEntity(101U);
    msg.value = 0.91119095378;

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
    msg.setTimeStamp(0.282415096808);
    msg.setSource(20582U);
    msg.setSourceEntity(175U);
    msg.setDestination(51198U);
    msg.setDestinationEntity(103U);
    msg.value = 0.746445734816;

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
    msg.setTimeStamp(0.891230767743);
    msg.setSource(56857U);
    msg.setSourceEntity(175U);
    msg.setDestination(5232U);
    msg.setDestinationEntity(90U);
    msg.value = 0.871572261313;

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
    msg.setTimeStamp(0.199499804291);
    msg.setSource(49142U);
    msg.setSourceEntity(129U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(116U);
    msg.value = 0.423300903065;

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
    msg.setTimeStamp(0.922103858361);
    msg.setSource(4223U);
    msg.setSourceEntity(239U);
    msg.setDestination(17770U);
    msg.setDestinationEntity(55U);
    msg.value = 0.301772010237;

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
    msg.setTimeStamp(0.385366100772);
    msg.setSource(31196U);
    msg.setSourceEntity(208U);
    msg.setDestination(19970U);
    msg.setDestinationEntity(156U);
    msg.x = 0.00106370537111;
    msg.y = 0.993614094314;
    msg.z = 0.190820819338;
    msg.phi = 0.262163722906;
    msg.theta = 0.0895334491324;
    msg.psi = 0.338497217603;
    msg.p = 0.532362202688;
    msg.q = 0.0207171478827;
    msg.r = 0.484952692421;
    msg.u = 0.291946636867;
    msg.v = 0.281749475465;
    msg.w = 0.960798209466;
    msg.bias_psi = 0.430454697496;
    msg.bias_r = 0.159293301755;

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
    msg.setTimeStamp(0.869216936686);
    msg.setSource(35802U);
    msg.setSourceEntity(217U);
    msg.setDestination(1359U);
    msg.setDestinationEntity(97U);
    msg.x = 0.839792758984;
    msg.y = 0.998368551117;
    msg.z = 0.520494819716;
    msg.phi = 0.623157801649;
    msg.theta = 0.855818695882;
    msg.psi = 0.885153258624;
    msg.p = 0.210639649337;
    msg.q = 0.666218728125;
    msg.r = 0.391347927288;
    msg.u = 0.069722891692;
    msg.v = 0.00570398557972;
    msg.w = 0.54818594967;
    msg.bias_psi = 0.276227977679;
    msg.bias_r = 0.119396848895;

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
    msg.setTimeStamp(0.910497745542);
    msg.setSource(46588U);
    msg.setSourceEntity(192U);
    msg.setDestination(24318U);
    msg.setDestinationEntity(0U);
    msg.x = 0.165820915939;
    msg.y = 0.529433152202;
    msg.z = 0.193524919001;
    msg.phi = 0.454531679331;
    msg.theta = 0.714187910913;
    msg.psi = 0.256915597055;
    msg.p = 0.284485837299;
    msg.q = 0.767605776967;
    msg.r = 0.138640008213;
    msg.u = 0.93094877436;
    msg.v = 0.314858412471;
    msg.w = 0.537973955538;
    msg.bias_psi = 0.696338831739;
    msg.bias_r = 0.185219994768;

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
    msg.setTimeStamp(0.856485256991);
    msg.setSource(44907U);
    msg.setSourceEntity(239U);
    msg.setDestination(7153U);
    msg.setDestinationEntity(202U);
    msg.bias_psi = 0.264119991034;
    msg.bias_r = 0.991995269423;
    msg.cog = 0.77789883793;
    msg.cyaw = 0.101298807062;
    msg.lbl_rej_level = 0.977507706422;
    msg.gps_rej_level = 0.226787684402;
    msg.custom_x = 0.644285168643;
    msg.custom_y = 0.27105212888;
    msg.custom_z = 0.281000807563;

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
    msg.setTimeStamp(0.387304357257);
    msg.setSource(19384U);
    msg.setSourceEntity(24U);
    msg.setDestination(45569U);
    msg.setDestinationEntity(118U);
    msg.bias_psi = 0.00671469933022;
    msg.bias_r = 0.840621384168;
    msg.cog = 0.728599547323;
    msg.cyaw = 0.874623670866;
    msg.lbl_rej_level = 0.748084766225;
    msg.gps_rej_level = 0.642517669162;
    msg.custom_x = 0.923164755072;
    msg.custom_y = 0.213350343419;
    msg.custom_z = 0.684314041092;

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
    msg.setTimeStamp(0.779982626997);
    msg.setSource(58806U);
    msg.setSourceEntity(167U);
    msg.setDestination(28437U);
    msg.setDestinationEntity(55U);
    msg.bias_psi = 0.73303191821;
    msg.bias_r = 0.357919410671;
    msg.cog = 0.907836005183;
    msg.cyaw = 0.433920268417;
    msg.lbl_rej_level = 0.815481982192;
    msg.gps_rej_level = 0.39229192557;
    msg.custom_x = 0.47502011515;
    msg.custom_y = 0.73006953947;
    msg.custom_z = 0.636146654444;

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
    msg.setTimeStamp(0.884974480085);
    msg.setSource(19646U);
    msg.setSourceEntity(88U);
    msg.setDestination(17947U);
    msg.setDestinationEntity(246U);
    msg.utc_time = 0.58410133295;
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
    msg.setTimeStamp(0.380616340567);
    msg.setSource(38200U);
    msg.setSourceEntity(36U);
    msg.setDestination(22672U);
    msg.setDestinationEntity(226U);
    msg.utc_time = 0.909377252506;
    msg.reason = 49U;

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
    msg.setTimeStamp(0.997697141606);
    msg.setSource(47519U);
    msg.setSourceEntity(17U);
    msg.setDestination(54187U);
    msg.setDestinationEntity(125U);
    msg.utc_time = 0.707788159048;
    msg.reason = 115U;

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
    msg.setTimeStamp(0.284208023612);
    msg.setSource(59947U);
    msg.setSourceEntity(226U);
    msg.setDestination(36637U);
    msg.setDestinationEntity(17U);
    msg.id = 20U;
    msg.range = 0.175492864363;
    msg.acceptance = 163U;

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
    msg.setTimeStamp(0.972968557063);
    msg.setSource(13536U);
    msg.setSourceEntity(186U);
    msg.setDestination(6721U);
    msg.setDestinationEntity(87U);
    msg.id = 176U;
    msg.range = 0.241525974572;
    msg.acceptance = 139U;

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
    msg.setTimeStamp(0.262057849398);
    msg.setSource(6989U);
    msg.setSourceEntity(105U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(146U);
    msg.id = 77U;
    msg.range = 0.558651900002;
    msg.acceptance = 88U;

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
    msg.setTimeStamp(0.158498930504);
    msg.setSource(64304U);
    msg.setSourceEntity(252U);
    msg.setDestination(52314U);
    msg.setDestinationEntity(149U);
    msg.type = 206U;
    msg.reason = 163U;
    msg.value = 0.584542495855;
    msg.timestep = 0.914430007908;

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
    msg.setTimeStamp(0.121010884779);
    msg.setSource(2922U);
    msg.setSourceEntity(106U);
    msg.setDestination(34847U);
    msg.setDestinationEntity(132U);
    msg.type = 188U;
    msg.reason = 121U;
    msg.value = 0.57919653545;
    msg.timestep = 0.0892203160825;

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
    msg.setTimeStamp(0.374202515093);
    msg.setSource(64398U);
    msg.setSourceEntity(76U);
    msg.setDestination(4907U);
    msg.setDestinationEntity(167U);
    msg.type = 111U;
    msg.reason = 235U;
    msg.value = 0.443824568677;
    msg.timestep = 0.0926591624538;

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
    msg.setTimeStamp(0.997677060849);
    msg.setSource(45241U);
    msg.setSourceEntity(156U);
    msg.setDestination(55909U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.749974965165);
    msg.setSource(56364U);
    msg.setSourceEntity(101U);
    msg.setDestination(22519U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.582111907409);
    msg.setSource(5443U);
    msg.setSourceEntity(223U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.887537933847);
    msg.setSource(7340U);
    msg.setSourceEntity(40U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(202U);
    msg.beacon.assign("ADYQYZKQSWCLCCNZAUSHUEOGKJLTAYCHVTVNTWDPNSOWRQSDQIHGGZPPRETOEWNDHRUERUCODOTTGVWXEXGZTIQUGFBMMLRDMDFLSFMZWVQNJYBLRVPY");
    msg.x = 0.0579497201855;
    msg.y = 0.693378265929;
    msg.depth = 0.155033449657;
    msg.var_x = 0.662724789078;
    msg.var_y = 0.461309368543;

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
    msg.setTimeStamp(0.602864366615);
    msg.setSource(31445U);
    msg.setSourceEntity(107U);
    msg.setDestination(27140U);
    msg.setDestinationEntity(203U);
    msg.beacon.assign("VKOKJFIYPLITNVSHINSBOLAIMCCQHTVDUNTUXUBUPQMZWJQXBJAIRBCEQDVIMWLLNZPFAKUSQXRURGXANOGOMHJZKYJQLSHXFFKTDIXUJRDFOZEOFYPHWZDANAKOYRVJGGJVEM");
    msg.x = 0.836646992637;
    msg.y = 0.44062518589;
    msg.depth = 0.127813151899;
    msg.var_x = 0.119552982803;
    msg.var_y = 0.359532588068;

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
    msg.setTimeStamp(0.419294117243);
    msg.setSource(60813U);
    msg.setSourceEntity(10U);
    msg.setDestination(21485U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("RCVRZNQKYGJUYVYAOEHXIDYPLEAEOTXFDSUIVHOQXXSQFUEZPLHGSUNERSUCNDFHMPZHQHUZBAMZMHVWRCWCKPTDK");
    msg.x = 0.796157677345;
    msg.y = 0.301321910864;
    msg.depth = 0.382468865371;
    msg.var_x = 0.329888103695;
    msg.var_y = 0.695169965268;

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
    msg.setTimeStamp(0.704899977765);
    msg.setSource(58248U);
    msg.setSourceEntity(16U);
    msg.setDestination(16073U);
    msg.setDestinationEntity(13U);
    msg.value = 0.402035814274;

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
    msg.setTimeStamp(0.0779672391684);
    msg.setSource(27002U);
    msg.setSourceEntity(248U);
    msg.setDestination(57779U);
    msg.setDestinationEntity(199U);
    msg.value = 0.735267780612;

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
    msg.setTimeStamp(0.681385644097);
    msg.setSource(6053U);
    msg.setSourceEntity(51U);
    msg.setDestination(61619U);
    msg.setDestinationEntity(67U);
    msg.value = 0.34251124562;

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
    msg.setTimeStamp(0.322740069622);
    msg.setSource(58038U);
    msg.setSourceEntity(54U);
    msg.setDestination(17930U);
    msg.setDestinationEntity(231U);
    msg.value = 0.559831908511;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.606233443488);
    msg.setSource(35728U);
    msg.setSourceEntity(125U);
    msg.setDestination(15767U);
    msg.setDestinationEntity(97U);
    msg.value = 0.483284101336;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.542687193843);
    msg.setSource(63894U);
    msg.setSourceEntity(221U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(156U);
    msg.value = 0.849751238997;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.316847960897);
    msg.setSource(14417U);
    msg.setSourceEntity(14U);
    msg.setDestination(19090U);
    msg.setDestinationEntity(137U);
    msg.value = 0.863150405856;
    msg.speed_units = 177U;

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
    msg.setTimeStamp(0.752088357165);
    msg.setSource(57999U);
    msg.setSourceEntity(211U);
    msg.setDestination(35568U);
    msg.setDestinationEntity(49U);
    msg.value = 0.103976324567;
    msg.speed_units = 13U;

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
    msg.setTimeStamp(0.910423307241);
    msg.setSource(7515U);
    msg.setSourceEntity(135U);
    msg.setDestination(4151U);
    msg.setDestinationEntity(22U);
    msg.value = 0.739738409921;
    msg.speed_units = 88U;

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
    msg.setTimeStamp(0.128266723445);
    msg.setSource(25402U);
    msg.setSourceEntity(45U);
    msg.setDestination(56818U);
    msg.setDestinationEntity(233U);
    msg.value = 0.550543560541;

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
    msg.setTimeStamp(0.167840507847);
    msg.setSource(65102U);
    msg.setSourceEntity(114U);
    msg.setDestination(17596U);
    msg.setDestinationEntity(2U);
    msg.value = 0.677441933976;

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
    msg.setTimeStamp(0.618124050406);
    msg.setSource(34272U);
    msg.setSourceEntity(244U);
    msg.setDestination(15774U);
    msg.setDestinationEntity(108U);
    msg.value = 0.728559977374;

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
    msg.setTimeStamp(0.0795003584764);
    msg.setSource(53979U);
    msg.setSourceEntity(186U);
    msg.setDestination(28805U);
    msg.setDestinationEntity(73U);
    msg.value = 0.403944529531;

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
    msg.setTimeStamp(0.681031029913);
    msg.setSource(63031U);
    msg.setSourceEntity(30U);
    msg.setDestination(38339U);
    msg.setDestinationEntity(180U);
    msg.value = 0.432234977181;

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
    msg.setTimeStamp(0.222511825261);
    msg.setSource(26582U);
    msg.setSourceEntity(248U);
    msg.setDestination(6173U);
    msg.setDestinationEntity(149U);
    msg.value = 0.922652173547;

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
    msg.setTimeStamp(0.839679234593);
    msg.setSource(15459U);
    msg.setSourceEntity(130U);
    msg.setDestination(24616U);
    msg.setDestinationEntity(231U);
    msg.value = 0.34548041412;

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
    msg.setTimeStamp(0.933356203576);
    msg.setSource(36120U);
    msg.setSourceEntity(34U);
    msg.setDestination(7904U);
    msg.setDestinationEntity(178U);
    msg.value = 0.60678204959;

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
    msg.setTimeStamp(0.232498851173);
    msg.setSource(47045U);
    msg.setSourceEntity(252U);
    msg.setDestination(54286U);
    msg.setDestinationEntity(142U);
    msg.value = 0.916578990139;

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
    msg.setTimeStamp(0.588353152713);
    msg.setSource(12102U);
    msg.setSourceEntity(162U);
    msg.setDestination(40249U);
    msg.setDestinationEntity(160U);
    msg.start_lat = 0.166127444574;
    msg.start_lon = 0.139223926238;
    msg.start_z = 0.254968591962;
    msg.start_z_units = 205U;
    msg.end_lat = 0.819649947121;
    msg.end_lon = 0.29674254826;
    msg.end_z = 0.854972135794;
    msg.end_z_units = 50U;
    msg.speed = 0.980945173463;
    msg.speed_units = 174U;
    msg.lradius = 0.959427895593;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.945379194583);
    msg.setSource(55510U);
    msg.setSourceEntity(152U);
    msg.setDestination(12992U);
    msg.setDestinationEntity(126U);
    msg.start_lat = 0.434803396055;
    msg.start_lon = 0.772331644832;
    msg.start_z = 0.7478754862;
    msg.start_z_units = 156U;
    msg.end_lat = 0.698110651909;
    msg.end_lon = 0.323586044007;
    msg.end_z = 0.401056090715;
    msg.end_z_units = 36U;
    msg.speed = 0.867098705682;
    msg.speed_units = 117U;
    msg.lradius = 0.758051712591;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.0383890133125);
    msg.setSource(50873U);
    msg.setSourceEntity(180U);
    msg.setDestination(8831U);
    msg.setDestinationEntity(247U);
    msg.start_lat = 0.572470708622;
    msg.start_lon = 0.184007971965;
    msg.start_z = 0.150535265124;
    msg.start_z_units = 95U;
    msg.end_lat = 0.526326913796;
    msg.end_lon = 0.47488529874;
    msg.end_z = 0.619844963293;
    msg.end_z_units = 104U;
    msg.speed = 0.272636005412;
    msg.speed_units = 186U;
    msg.lradius = 0.688631295044;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.298826116508);
    msg.setSource(25256U);
    msg.setSourceEntity(252U);
    msg.setDestination(11344U);
    msg.setDestinationEntity(151U);
    msg.x = 0.358373619449;
    msg.y = 0.712386805598;
    msg.z = 0.729220900881;
    msg.k = 0.985853461873;
    msg.m = 0.309373898818;
    msg.n = 0.692464214742;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.785201088717);
    msg.setSource(64772U);
    msg.setSourceEntity(39U);
    msg.setDestination(45586U);
    msg.setDestinationEntity(155U);
    msg.x = 0.801078006665;
    msg.y = 0.517296016478;
    msg.z = 0.0710625739167;
    msg.k = 0.384314017259;
    msg.m = 0.978620009836;
    msg.n = 0.438128739406;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.975078427066);
    msg.setSource(14203U);
    msg.setSourceEntity(69U);
    msg.setDestination(11421U);
    msg.setDestinationEntity(8U);
    msg.x = 0.164975786467;
    msg.y = 0.513262991329;
    msg.z = 0.0861883739637;
    msg.k = 0.682992096437;
    msg.m = 0.845697410233;
    msg.n = 0.347047234366;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.401031967263);
    msg.setSource(57601U);
    msg.setSourceEntity(194U);
    msg.setDestination(39754U);
    msg.setDestinationEntity(7U);
    msg.value = 0.660477101741;

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
    msg.setTimeStamp(0.298613134288);
    msg.setSource(38703U);
    msg.setSourceEntity(233U);
    msg.setDestination(33609U);
    msg.setDestinationEntity(178U);
    msg.value = 0.940366564569;

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
    msg.setTimeStamp(0.247195943002);
    msg.setSource(42291U);
    msg.setSourceEntity(131U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(92U);
    msg.value = 0.822997352214;

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
    msg.setTimeStamp(0.47783959903);
    msg.setSource(65305U);
    msg.setSourceEntity(149U);
    msg.setDestination(30477U);
    msg.setDestinationEntity(6U);
    msg.u = 0.291614815037;
    msg.v = 0.0943163611925;
    msg.w = 0.52223034578;
    msg.p = 0.449616025863;
    msg.q = 0.552935283173;
    msg.r = 0.535958626846;
    msg.flags = 218U;

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
    msg.setTimeStamp(0.702378083084);
    msg.setSource(50640U);
    msg.setSourceEntity(131U);
    msg.setDestination(20324U);
    msg.setDestinationEntity(202U);
    msg.u = 0.0939943532357;
    msg.v = 0.449272341021;
    msg.w = 0.966536207826;
    msg.p = 0.907440477646;
    msg.q = 0.914830468022;
    msg.r = 0.137127123655;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.246560307696);
    msg.setSource(42687U);
    msg.setSourceEntity(65U);
    msg.setDestination(22761U);
    msg.setDestinationEntity(1U);
    msg.u = 0.223358054827;
    msg.v = 0.0272368530813;
    msg.w = 0.399165913139;
    msg.p = 0.527307868309;
    msg.q = 0.378955237785;
    msg.r = 0.418073968712;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.114080941653);
    msg.setSource(50880U);
    msg.setSourceEntity(177U);
    msg.setDestination(20089U);
    msg.setDestinationEntity(165U);
    msg.start_lat = 0.743158525987;
    msg.start_lon = 0.663190715774;
    msg.start_z = 0.327331395418;
    msg.start_z_units = 1U;
    msg.end_lat = 0.911284092661;
    msg.end_lon = 0.818081291058;
    msg.end_z = 0.0962199500893;
    msg.end_z_units = 114U;
    msg.lradius = 0.085697885988;
    msg.flags = 113U;
    msg.x = 0.749015861529;
    msg.y = 0.850630397642;
    msg.z = 0.850822079797;
    msg.vx = 0.842485290619;
    msg.vy = 0.153388586938;
    msg.vz = 0.247057213542;
    msg.course_error = 0.929938374726;
    msg.eta = 37395U;

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
    msg.setTimeStamp(0.253777870884);
    msg.setSource(34770U);
    msg.setSourceEntity(103U);
    msg.setDestination(30614U);
    msg.setDestinationEntity(124U);
    msg.start_lat = 0.717689057462;
    msg.start_lon = 0.689749657009;
    msg.start_z = 0.331715561916;
    msg.start_z_units = 45U;
    msg.end_lat = 0.515840040766;
    msg.end_lon = 0.0480053710686;
    msg.end_z = 0.381254161728;
    msg.end_z_units = 205U;
    msg.lradius = 0.873275219529;
    msg.flags = 180U;
    msg.x = 0.130920722707;
    msg.y = 0.527283452162;
    msg.z = 0.377437641597;
    msg.vx = 0.392275164395;
    msg.vy = 0.0770736973628;
    msg.vz = 0.215055613598;
    msg.course_error = 0.0464923246957;
    msg.eta = 59222U;

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
    msg.setTimeStamp(0.2674384747);
    msg.setSource(14260U);
    msg.setSourceEntity(72U);
    msg.setDestination(2561U);
    msg.setDestinationEntity(2U);
    msg.start_lat = 0.963477796876;
    msg.start_lon = 0.218762951803;
    msg.start_z = 0.684489476065;
    msg.start_z_units = 194U;
    msg.end_lat = 0.0293983500584;
    msg.end_lon = 0.998952383564;
    msg.end_z = 0.470853339337;
    msg.end_z_units = 28U;
    msg.lradius = 0.959579983088;
    msg.flags = 160U;
    msg.x = 0.139350428932;
    msg.y = 0.599937837867;
    msg.z = 0.865085562344;
    msg.vx = 0.168241862807;
    msg.vy = 0.887321533013;
    msg.vz = 0.160508674583;
    msg.course_error = 0.156710351362;
    msg.eta = 28102U;

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
    msg.setTimeStamp(0.996838367572);
    msg.setSource(2190U);
    msg.setSourceEntity(144U);
    msg.setDestination(35908U);
    msg.setDestinationEntity(79U);
    msg.k = 0.103123899177;
    msg.m = 0.347581293896;
    msg.n = 0.946456854874;

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
    msg.setTimeStamp(0.178003942121);
    msg.setSource(2742U);
    msg.setSourceEntity(44U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(95U);
    msg.k = 0.543159458265;
    msg.m = 0.767750719196;
    msg.n = 0.251475699599;

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
    msg.setTimeStamp(0.913171201519);
    msg.setSource(56260U);
    msg.setSourceEntity(115U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(151U);
    msg.k = 0.828756692003;
    msg.m = 0.602007309973;
    msg.n = 0.281333482908;

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
    msg.setTimeStamp(0.611077670454);
    msg.setSource(36249U);
    msg.setSourceEntity(56U);
    msg.setDestination(24938U);
    msg.setDestinationEntity(133U);
    msg.p = 0.4931685421;
    msg.i = 0.356423480603;
    msg.d = 0.795856326278;
    msg.a = 0.634886659882;

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
    msg.setTimeStamp(0.605412123617);
    msg.setSource(14348U);
    msg.setSourceEntity(112U);
    msg.setDestination(34251U);
    msg.setDestinationEntity(179U);
    msg.p = 0.284905571378;
    msg.i = 0.642486303976;
    msg.d = 0.55587616384;
    msg.a = 0.874165287971;

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
    msg.setTimeStamp(0.60953454065);
    msg.setSource(62249U);
    msg.setSourceEntity(135U);
    msg.setDestination(11687U);
    msg.setDestinationEntity(77U);
    msg.p = 0.169218241236;
    msg.i = 0.0151877701645;
    msg.d = 0.0196591812354;
    msg.a = 0.047839116542;

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
    msg.setTimeStamp(0.327533943575);
    msg.setSource(45218U);
    msg.setSourceEntity(91U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(169U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.154236336292);
    msg.setSource(20373U);
    msg.setSourceEntity(17U);
    msg.setDestination(36904U);
    msg.setDestinationEntity(7U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.188924740739);
    msg.setSource(36628U);
    msg.setSourceEntity(45U);
    msg.setDestination(31218U);
    msg.setDestinationEntity(167U);
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
    msg.setTimeStamp(0.655409620101);
    msg.setSource(17437U);
    msg.setSourceEntity(64U);
    msg.setDestination(27311U);
    msg.setDestinationEntity(166U);
    msg.timeout = 34949U;
    msg.lat = 0.925202696081;
    msg.lon = 0.853835155568;
    msg.z = 0.191555292473;
    msg.z_units = 104U;
    msg.speed = 0.210477843211;
    msg.speed_units = 162U;
    msg.roll = 0.0751862799099;
    msg.pitch = 0.456440095027;
    msg.yaw = 0.655648991141;
    msg.custom.assign("WWEELIXPJBSSBGOMYWNRLPSBBNCXIWCUTDPATOZUMCRNYFJMEFMIXFVFNZHSQYNAHQMEGBTNQTIAMSACHRGHSNUWCJPPZKRRPKIQPSODTIIBXOVGLBNFQHDUHDQFVCZAGKHORHUDQWCAQDMWWYYLESYKEEOZUFPKGXULVJTQVWGLCYRZXEMUVIXPCDDTBFOAKFNLJKZMVZLHDEJYOAFJYJZBOXUJRKRIKUAVWCETGGJYTVBAPSLRNGMTXX");

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
    msg.setTimeStamp(0.274508235975);
    msg.setSource(27656U);
    msg.setSourceEntity(160U);
    msg.setDestination(29231U);
    msg.setDestinationEntity(202U);
    msg.timeout = 1103U;
    msg.lat = 0.794226161046;
    msg.lon = 0.692640678323;
    msg.z = 0.940754101987;
    msg.z_units = 140U;
    msg.speed = 0.62477083161;
    msg.speed_units = 131U;
    msg.roll = 0.449908385789;
    msg.pitch = 0.610268487187;
    msg.yaw = 0.120860476711;
    msg.custom.assign("OLDJIUYMSZNKFXQFOAGQIQOWGBOGGDPYFRZNDYRVVLNQXOWCURMYXBBADNTDPCGQGWWTSEDTMEBIJRUSHFMDNKCHZPZZSZIYMCWBCUSVTTBVFUSXUPIHQELCDWKLEPKCJOEWLYVPPVRBKYENFLCQOOUYNEHPFSXBXTVMQAIJDJGSTWXIALGZOWNKAVUWELA");

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
    msg.setTimeStamp(0.7043605509);
    msg.setSource(14579U);
    msg.setSourceEntity(193U);
    msg.setDestination(20938U);
    msg.setDestinationEntity(6U);
    msg.timeout = 42496U;
    msg.lat = 0.870559919554;
    msg.lon = 0.976540840043;
    msg.z = 0.465023776732;
    msg.z_units = 81U;
    msg.speed = 0.43546305418;
    msg.speed_units = 131U;
    msg.roll = 0.763607840215;
    msg.pitch = 0.696715093911;
    msg.yaw = 0.671512062724;
    msg.custom.assign("YUMBKOHUPCVMCIMFGOLNMQSZDBETHGAYKYOQLUBYRGHONPVMILMLGVEZZDWIEJNMDDBCSISLZKHTPZLWNEXZTXHQQKFJMFMCIBRZVHKXFQTSKJTOQCJVXJQEAEHFTONNQCRNVHSELCACYIJDAEGPPPBYBMHDWQSAFARWPBKYFKBUKREPXAIESWONVAXFUGHUG");

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
    msg.setTimeStamp(0.932570600985);
    msg.setSource(34073U);
    msg.setSourceEntity(71U);
    msg.setDestination(21544U);
    msg.setDestinationEntity(15U);
    msg.timeout = 2662U;
    msg.lat = 0.768209003074;
    msg.lon = 0.770417208556;
    msg.z = 0.627841219827;
    msg.z_units = 121U;
    msg.speed = 0.508827193743;
    msg.speed_units = 203U;
    msg.duration = 64997U;
    msg.radius = 0.925219069043;
    msg.flags = 46U;
    msg.custom.assign("IORTYFGYABLBFCNYQEGZZPAAUFTNXNZVSNUKXBWYRTLVHWRVOUCXEKMTDLKTFUDZSJBHGBAIMXKOKKQQZOJABVSKCBMCIIPHFPZAXGFUNJLJXSRVLPXRYPJGBQCHCJYSRGIJNQJEOWMVNCHDWGDTKWLTWZNTODXNEREQOWEUWYPGZCUVCYMY");

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
    msg.setTimeStamp(0.835439847208);
    msg.setSource(25192U);
    msg.setSourceEntity(128U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(10U);
    msg.timeout = 5787U;
    msg.lat = 0.863214324229;
    msg.lon = 0.805455523053;
    msg.z = 0.000265823809855;
    msg.z_units = 236U;
    msg.speed = 0.0863743034612;
    msg.speed_units = 117U;
    msg.duration = 42180U;
    msg.radius = 0.592055465598;
    msg.flags = 75U;
    msg.custom.assign("SPXZTCUJUONRELZGMGQNTIOKTSEPLSZFXZEQUKTHYDOKJMJBDECWBBFYDABFSTCYFVVANMOUJIZYGAJTQHYERGNLGWBFKNQHPWQYHKSEXFWQOGXNLAVCWWAIYPEEAUIMXDUPRIRDKJRFNVMMBWVAXNVEPCXHHNWLOIUTBGDLMWHBTVSGCBFPQSZUKRIXKDXVOBOCXYVJLMZNZKFGPLAVZTDHERSGDRLOCSLPJRIJCJQQUYSPQODTUMWIRM");

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
    msg.setTimeStamp(0.363980328707);
    msg.setSource(8009U);
    msg.setSourceEntity(112U);
    msg.setDestination(37913U);
    msg.setDestinationEntity(233U);
    msg.timeout = 9045U;
    msg.lat = 0.409613834795;
    msg.lon = 0.339825925183;
    msg.z = 0.0753739024337;
    msg.z_units = 145U;
    msg.speed = 0.46574380143;
    msg.speed_units = 134U;
    msg.duration = 30207U;
    msg.radius = 0.78587089541;
    msg.flags = 41U;
    msg.custom.assign("ZIVAUYXUGWOCUZNZHRJWTUTRZFDMFZLRVKHMQPMBLYWKTTNMXBYOECXRDKULDYIHRFHPIWGQFKNXLAMQZQGSUEFCOCOPKSJAHPPRRXTNCKDYQFURXOVIVLYWFAJSWHBNEUHAEIJPVOXDHQPCEEJAJEDDTOINJLL");

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
    msg.setTimeStamp(0.882743266819);
    msg.setSource(44436U);
    msg.setSourceEntity(238U);
    msg.setDestination(43681U);
    msg.setDestinationEntity(143U);
    msg.custom.assign("WJOHJWCKAWYKLXSUMPDRKTZSWXMYCHFCDYVDQLFBBZJIIGFESGVVSGIYMZXUQHTZFBKTIIZHDPIIZCJAOHUFWSOYPGGJVVDXYNBZKUZNNVOEAMCTUNRWMXETVFOAVYKRFSKHJGGUNPYHESMQTQLAAHVPBLLTMNNWLCOFDTWNORRXOJYFMRUSEMRQYJIPPBGCRLWAIX");

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
    msg.setTimeStamp(0.357680614001);
    msg.setSource(26580U);
    msg.setSourceEntity(248U);
    msg.setDestination(22453U);
    msg.setDestinationEntity(253U);
    msg.custom.assign("SAXNOETPMBDTNOJXLVWUDAAKCWCJXAABNAXOIKCWUTRYQWHYLPPXGCGTQWAQVFNRRMZRKMPFADIXGDHDWVVRQGHLCTNWMUYPOHIDRQTTGXUVEPDPZCEUTSOQSCTO");

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
    msg.setTimeStamp(0.948384154495);
    msg.setSource(15221U);
    msg.setSourceEntity(145U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(253U);
    msg.custom.assign("WSNJJSMDPWXLXIZSQDGHDZWLCEITGAHBURYDHGFYJKOOXUFYZTHPNLEPJNLLCFRNNXBAZKQJQHAJUVEOASZRJUDJKGVRBKFIQHBAWASXPMEFQTRDSIAQYRKHJTYVFDAYIUSOCBQTEMNATLZLTRVUCPAZDEPWGZTWEOXVHFMTIHMGPWVYLWIRGOKSNXVMXBCCLUKRQCKTNWOEPIYCHEKMYZQGC");

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
    msg.setTimeStamp(0.994670176408);
    msg.setSource(33536U);
    msg.setSourceEntity(101U);
    msg.setDestination(31390U);
    msg.setDestinationEntity(84U);
    msg.timeout = 5391U;
    msg.lat = 0.762750514814;
    msg.lon = 0.289013469444;
    msg.z = 0.704472129635;
    msg.z_units = 214U;
    msg.duration = 40285U;
    msg.speed = 0.601079353219;
    msg.speed_units = 69U;
    msg.type = 28U;
    msg.radius = 0.0590557789443;
    msg.length = 0.988504524854;
    msg.bearing = 0.725810761483;
    msg.direction = 83U;
    msg.custom.assign("JNDVJCDFOQEQXGZEWCWVQRBJYQVIXEZGILGZLZOEQJHRYKLMTFFACOZAYEXJWGKAIGJLCPXENIDTUBZJMPUHQKZNRDRIYPPDBAWIIJTRESIHVTCHHQOMTSBODDESKMMYHPJVYSVOZRPJLSZBXGXBSLWMNKUYMPTUWWGKNUQFXCUAGKISYOFUBRQADBPLMFNSNCHABTRYBVFMCWFNSVROATFDOGAGWOULZSQKRE");

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
    msg.setTimeStamp(0.0540185715381);
    msg.setSource(47048U);
    msg.setSourceEntity(243U);
    msg.setDestination(10780U);
    msg.setDestinationEntity(46U);
    msg.timeout = 45231U;
    msg.lat = 0.177336518888;
    msg.lon = 0.730342106003;
    msg.z = 0.608823829685;
    msg.z_units = 160U;
    msg.duration = 45367U;
    msg.speed = 0.803518882241;
    msg.speed_units = 70U;
    msg.type = 168U;
    msg.radius = 0.365865733823;
    msg.length = 0.674184868879;
    msg.bearing = 0.585911287995;
    msg.direction = 28U;
    msg.custom.assign("ZQMENHGNTZSBDAYNUORKLCLKGEIXAGGBRJUUCIEWYSHBOSFQBFEEPKQEEFTPBTVUEURVLGKPBUNZDSWTUIYSVUFJHMWAMXAOXOM");

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
    msg.setTimeStamp(0.250184405289);
    msg.setSource(7738U);
    msg.setSourceEntity(159U);
    msg.setDestination(61614U);
    msg.setDestinationEntity(211U);
    msg.timeout = 40480U;
    msg.lat = 0.278779128264;
    msg.lon = 0.336339851919;
    msg.z = 0.735395204719;
    msg.z_units = 218U;
    msg.duration = 37898U;
    msg.speed = 0.0591658529101;
    msg.speed_units = 2U;
    msg.type = 101U;
    msg.radius = 0.888077781881;
    msg.length = 0.0468363430023;
    msg.bearing = 0.163520983035;
    msg.direction = 182U;
    msg.custom.assign("QOCLEINRMZGRHNOXSGXDZUQUAFVRQBAXBCYOMUHEXYMLKNVEFACUZYPHRQIXPOZVPLXEGWVGIBIYMFPZWOFJYHFWSHYLDHMOUTCSCUUZFNDPTTHYKQJABGJSMINRGVAKGALSQWXVEIMDVEYPPKZVBPESDNWXAHGBUEOFFCUQIPXKQCBLMXWHWNMUTRRDVJQZSDJIBHNSWKKCNVCLLJNRFTWYTSJDDSTBZLCIQFGOGOERAJEJLIADT");

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
    msg.setTimeStamp(0.711909448553);
    msg.setSource(43374U);
    msg.setSourceEntity(19U);
    msg.setDestination(17031U);
    msg.setDestinationEntity(81U);
    msg.duration = 17096U;
    msg.custom.assign("JGIHUESLIVFUTXOGPTFJXPZDKCDIJSPJGNOKULVMEKPZWKBR");

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
    msg.setTimeStamp(0.0694606951902);
    msg.setSource(55976U);
    msg.setSourceEntity(35U);
    msg.setDestination(4887U);
    msg.setDestinationEntity(81U);
    msg.duration = 50451U;
    msg.custom.assign("FLHABQEDIOEZKAABEVRGRMTIPJELTLQMPUCSWIHHVTMKVKCTFJYULKIYDPUAEZODPUPLGAAMSBIZGGQM");

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
    msg.setTimeStamp(0.362927150771);
    msg.setSource(57816U);
    msg.setSourceEntity(198U);
    msg.setDestination(27318U);
    msg.setDestinationEntity(188U);
    msg.duration = 54404U;
    msg.custom.assign("ITNJKZDCSHVWWMTYCLXXEWEUKSHYQNVSFCBRAWYPHBGGAWIGJSTECDZCMGZOPUAGUUIPRTUWZZAWUBDWBYOMENQBLUZNFHGZCNJOFJCQKGMYKPTPFRROREAKPNWVPCGWMQTQNXIRNOYOSXYXMAVIHGNKV");

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
    msg.setTimeStamp(0.146715363017);
    msg.setSource(24939U);
    msg.setSourceEntity(246U);
    msg.setDestination(44090U);
    msg.setDestinationEntity(0U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0852874461467;
    tmp_msg_0.z_units = 185U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23095U;
    msg.custom.assign("FUCRUAUCJGQWLREPMTHSGLWBMRMLUIWZTKRAWGNKJNCSSXQSQVFE");

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
    msg.setTimeStamp(0.314804064927);
    msg.setSource(26936U);
    msg.setSourceEntity(78U);
    msg.setDestination(35423U);
    msg.setDestinationEntity(246U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.893440558637;
    msg.control.set(tmp_msg_0);
    msg.duration = 15348U;
    msg.custom.assign("BICVQRVWZISJDHYZNASKYWHOXULZYUFYFPYDLSXYNRVRFHUKTFEGSKXZTEXEDTSYBKFQOQITSZE");

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
    msg.setTimeStamp(0.869919781129);
    msg.setSource(62687U);
    msg.setSourceEntity(62U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(219U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.894299131408;
    msg.control.set(tmp_msg_0);
    msg.duration = 35337U;
    msg.custom.assign("VBIXKYRHSHWIUJERNMYCCKOPAKRTYHOSOTYWAGZGBJSFFNSBBPEPJFCFRYUWMOCQPULLGZGJEDKWEOOAYRVDGDRZLZVOOZUDTBQJBRILTUJAVEHTTWZIQNLYHBAKIKDCJLYCXKMKMQTEYUOFDXJNUKNVIVLWVZ");

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
    msg.setTimeStamp(0.0324702007984);
    msg.setSource(56156U);
    msg.setSourceEntity(36U);
    msg.setDestination(59832U);
    msg.setDestinationEntity(32U);
    msg.timeout = 64193U;
    msg.lat = 0.100104431632;
    msg.lon = 0.482263248223;
    msg.z = 0.783963761429;
    msg.z_units = 151U;
    msg.speed = 0.857176116313;
    msg.speed_units = 202U;
    msg.bearing = 0.912296467887;
    msg.cross_angle = 0.246142819594;
    msg.width = 0.416670709766;
    msg.length = 0.914022590001;
    msg.hstep = 0.804780091196;
    msg.coff = 116U;
    msg.alternation = 145U;
    msg.flags = 32U;
    msg.custom.assign("ALSOLWGJRGQSFSVPWLYBSSKQCGJMNHLFLTVBHFM");

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
    msg.setTimeStamp(0.00778764815164);
    msg.setSource(29267U);
    msg.setSourceEntity(148U);
    msg.setDestination(36603U);
    msg.setDestinationEntity(227U);
    msg.timeout = 7200U;
    msg.lat = 0.867286785983;
    msg.lon = 0.924044229324;
    msg.z = 0.762203040385;
    msg.z_units = 50U;
    msg.speed = 0.554863201166;
    msg.speed_units = 99U;
    msg.bearing = 0.6823142042;
    msg.cross_angle = 0.00334616902616;
    msg.width = 0.813662228383;
    msg.length = 0.078843851662;
    msg.hstep = 0.0831588200148;
    msg.coff = 111U;
    msg.alternation = 250U;
    msg.flags = 60U;
    msg.custom.assign("IEOVOHBTICLHGUPTDYVTNCWLIMMCMRYHSLXHLZCFWFJXLESWMHFFQBSMGYGKKARJRKTXQNVQIXZDWNZLCUWDUXGHOTIWCTOPMAODVAPYESTZYBXZKSPNUPFQYVUUSHLQIOSAZBMVAGUQHKQRNDFHEEDWKXBD");

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
    msg.setTimeStamp(0.912727085527);
    msg.setSource(58779U);
    msg.setSourceEntity(55U);
    msg.setDestination(12696U);
    msg.setDestinationEntity(233U);
    msg.timeout = 50673U;
    msg.lat = 0.303271763635;
    msg.lon = 0.574970426442;
    msg.z = 0.621908362782;
    msg.z_units = 50U;
    msg.speed = 0.740441188612;
    msg.speed_units = 182U;
    msg.bearing = 0.190941165963;
    msg.cross_angle = 0.330810148161;
    msg.width = 0.430249433863;
    msg.length = 0.530682165277;
    msg.hstep = 0.963213833786;
    msg.coff = 199U;
    msg.alternation = 7U;
    msg.flags = 115U;
    msg.custom.assign("FWYLCROTKIIMPODSKPTSPOOPOGYNEMBEDVKJGIPVNUJENZTMNXEGIXCGLNXBEIFFQLJUGMZKZEVCQAATMMKFDQTTAZLDWAMBLHQQZSGWQGLWPIYVBWH");

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
    msg.setTimeStamp(0.150164092842);
    msg.setSource(12689U);
    msg.setSourceEntity(79U);
    msg.setDestination(6536U);
    msg.setDestinationEntity(9U);
    msg.timeout = 63739U;
    msg.lat = 0.283960966024;
    msg.lon = 0.20828296607;
    msg.z = 0.615104368389;
    msg.z_units = 42U;
    msg.speed = 0.910874919806;
    msg.speed_units = 111U;
    msg.custom.assign("FYQLBUCZKYCJOODQSTIFBPHXTDMPCMMTXVZIZXNEAERCRIXANKKNBYHHCHHIT");

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
    msg.setTimeStamp(0.354006359039);
    msg.setSource(5842U);
    msg.setSourceEntity(156U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(119U);
    msg.timeout = 47596U;
    msg.lat = 0.401586342376;
    msg.lon = 0.863195577701;
    msg.z = 0.845427526145;
    msg.z_units = 16U;
    msg.speed = 0.570954350316;
    msg.speed_units = 207U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.666797254214;
    tmp_msg_0.y = 0.244141519682;
    tmp_msg_0.z = 0.0475817437129;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CAUYWBEYUAGKBCNDARSBIRTDXFSPBPDEVIYEEHBWAACLLIJEEJOWQVLYXMQMIJNGHBJWJIRRPFOKQZPIHSMWFKUVYKAGZCBNJYQTLLRHPSNMKTXPNSHJNGXCQLHGCHVCHDALQSUGUBZUFKRNQLTSZKOUECGOUDWXXASVTNQOHKQDJJWDRXYCDZGPTMFUWOMV");

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
    msg.setTimeStamp(0.766796883918);
    msg.setSource(8854U);
    msg.setSourceEntity(135U);
    msg.setDestination(13904U);
    msg.setDestinationEntity(48U);
    msg.timeout = 25879U;
    msg.lat = 0.835480488205;
    msg.lon = 0.0790303387228;
    msg.z = 0.468828871767;
    msg.z_units = 56U;
    msg.speed = 0.0844621857792;
    msg.speed_units = 223U;
    msg.custom.assign("GJVDFNCQZXBLSDHFRWKPJUNSAYJVFUXGNBDHNQLKEULPTTHICSKDFZBSWQZGEYMNXTHNQFLROKUPTKCSKFIISCKSXYFCCWCTOSXKRGBRAEZEOUIAOAVWHUWJOEVUYRPPWWBWUEXPHFXSMYATFJZYOVHGABVZHGNYBJRPTWJOGAAVCGQGQRMPCZIYXDDPIKELBXZMBDKUQVWNZPSTDMOQJJAIHDQEZRIOYUYNECIBF");

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
    msg.setTimeStamp(0.748763522785);
    msg.setSource(8990U);
    msg.setSourceEntity(178U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(148U);
    msg.x = 0.664162236749;
    msg.y = 0.673519149385;
    msg.z = 0.7090539647;

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
    msg.setTimeStamp(0.978490940425);
    msg.setSource(64521U);
    msg.setSourceEntity(123U);
    msg.setDestination(8393U);
    msg.setDestinationEntity(38U);
    msg.x = 0.717073588192;
    msg.y = 0.556458376406;
    msg.z = 0.837892769691;

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
    msg.setTimeStamp(0.357415293297);
    msg.setSource(13459U);
    msg.setSourceEntity(123U);
    msg.setDestination(7278U);
    msg.setDestinationEntity(102U);
    msg.x = 0.586880718873;
    msg.y = 0.194141989935;
    msg.z = 0.311949183412;

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
    msg.setTimeStamp(0.426250320323);
    msg.setSource(24778U);
    msg.setSourceEntity(58U);
    msg.setDestination(59456U);
    msg.setDestinationEntity(135U);
    msg.timeout = 26184U;
    msg.lat = 0.701322122153;
    msg.lon = 0.732966452989;
    msg.z = 0.549907487307;
    msg.z_units = 169U;
    msg.amplitude = 0.289521150567;
    msg.pitch = 0.971709582577;
    msg.speed = 0.8913690727;
    msg.speed_units = 153U;
    msg.custom.assign("BUYGHCCGZSRIFGGLXFTQATRHPXBCWVGWVWZPUFRSMPOKFIZSYWJXXWEDENMOFPLTEUDILDKIHCSNIQVUTRITVKZWUYCOWNMKTKSAKENMAEZOEWUQRDRYCOLAZBYKXXJBOHJHRYRXNDVHDCBMNMYBAXVPHNXTCFLJJJMABTBPUEJI");

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
    msg.setTimeStamp(0.926974530336);
    msg.setSource(38046U);
    msg.setSourceEntity(106U);
    msg.setDestination(50529U);
    msg.setDestinationEntity(187U);
    msg.timeout = 18084U;
    msg.lat = 0.0908038110204;
    msg.lon = 0.069600757111;
    msg.z = 0.523498871443;
    msg.z_units = 96U;
    msg.amplitude = 0.547145518642;
    msg.pitch = 0.980473030965;
    msg.speed = 0.803323014944;
    msg.speed_units = 218U;
    msg.custom.assign("XQGVQAEHUAHMUYCJHEFSUDJNOZYROWKMQPLVRMAKFBJZPYDJZSGXMFCVQLYKKVMXCPIRROZASAGQDIJBFSTIMKZNDPGEBDYWNMKRLTVDZOWKLMCDGTVLNOTXAUQRERBXYYIVTHWZNNBSEOUECQTNPXGJQSGPCFFBMUETAKQILFHNZYVXIP");

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
    msg.setTimeStamp(0.938917582801);
    msg.setSource(35562U);
    msg.setSourceEntity(209U);
    msg.setDestination(60102U);
    msg.setDestinationEntity(55U);
    msg.timeout = 46639U;
    msg.lat = 0.881100430465;
    msg.lon = 0.672276881084;
    msg.z = 0.165720751195;
    msg.z_units = 26U;
    msg.amplitude = 0.181182410202;
    msg.pitch = 0.116823657651;
    msg.speed = 0.978686819598;
    msg.speed_units = 170U;
    msg.custom.assign("EPPSCLGMXHCWKNKXUJZDAFHVSEKNMVTXB");

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
    msg.setTimeStamp(0.136554187076);
    msg.setSource(42450U);
    msg.setSourceEntity(249U);
    msg.setDestination(33513U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.0611671620932);
    msg.setSource(27444U);
    msg.setSourceEntity(244U);
    msg.setDestination(22997U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.399326825654);
    msg.setSource(17190U);
    msg.setSourceEntity(210U);
    msg.setDestination(2507U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.430015926973);
    msg.setSource(13509U);
    msg.setSourceEntity(77U);
    msg.setDestination(16703U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.739254247984;
    msg.lon = 0.486069411607;
    msg.z = 0.0415602527229;
    msg.z_units = 78U;
    msg.radius = 0.539506267623;
    msg.duration = 23257U;
    msg.speed = 0.34940768546;
    msg.speed_units = 208U;
    msg.custom.assign("UUBOVACVFNKXLCJKXVXETELUTCQORHRNTDMWPILBPBMIXNZASNLDPEVHCXXYOIBIMABZPRPGVDOCUYRSIKNUEUFJLSLFSDWOMBOCGD");

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
    msg.setTimeStamp(0.208054419887);
    msg.setSource(60676U);
    msg.setSourceEntity(145U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.397471542661;
    msg.lon = 0.0992020165632;
    msg.z = 0.956385652576;
    msg.z_units = 102U;
    msg.radius = 0.818863289173;
    msg.duration = 23342U;
    msg.speed = 0.473088255761;
    msg.speed_units = 60U;
    msg.custom.assign("ECIKSOIJRWLYWVCAJFKULDIFZIHOUYVNXMDVSOVQOTWFDAIREYNPRVMLAPTEKQNGCCBXLNQTWNVTCYPKGZGFLQBOUXQFSWXMPFMDADGENYDUXRZEHKPQUJEFRXKOMXIVSUJLBKVFUDAUZRMZLHZSBNGFJKOQYBMJTHPMALYOWQSTKPBRTKCBERPJGBN");

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
    msg.setTimeStamp(0.861283433566);
    msg.setSource(18387U);
    msg.setSourceEntity(245U);
    msg.setDestination(19666U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.788476307125;
    msg.lon = 0.11740247415;
    msg.z = 0.188286583518;
    msg.z_units = 39U;
    msg.radius = 0.884430651803;
    msg.duration = 50232U;
    msg.speed = 0.890869679495;
    msg.speed_units = 142U;
    msg.custom.assign("RNZKYBJKTMXCIRORSMXNWCCNVCXYDPVIMSGFDYULGAARBYELUBALHIEZQGNRNVWMISWFSIIHAZBKTJOFQKDWFWPLNXF");

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
    msg.setTimeStamp(0.120422695614);
    msg.setSource(53703U);
    msg.setSourceEntity(196U);
    msg.setDestination(51286U);
    msg.setDestinationEntity(220U);
    msg.timeout = 24693U;
    msg.flags = 46U;
    msg.lat = 0.491180709598;
    msg.lon = 0.138853532187;
    msg.start_z = 0.35637095746;
    msg.start_z_units = 137U;
    msg.end_z = 0.650691274599;
    msg.end_z_units = 12U;
    msg.radius = 0.651984141994;
    msg.speed = 0.26401771248;
    msg.speed_units = 34U;
    msg.custom.assign("MJSTLRLRHPVRZTNCYUHHPXUZUEWDWQGMJLFOLHSSCJYAKCHNVRCPNHPINGPGFBFFTKNGIMENJDTPTKOBSBLIYSZNMOPQIKQAJSDQQDXEOJOXFUGBLICIOQUQRGYNLKVRSALGBJREMAMDIUULAZTPEWRRUNXDXBHGDPDTJHBZFXEBKEZAWAIOMYTWVEOEWRBAQZCVVGAFUYXDQSK");

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
    msg.setTimeStamp(0.106667613963);
    msg.setSource(29298U);
    msg.setSourceEntity(20U);
    msg.setDestination(62656U);
    msg.setDestinationEntity(98U);
    msg.timeout = 44606U;
    msg.flags = 216U;
    msg.lat = 0.927437054361;
    msg.lon = 0.405017917721;
    msg.start_z = 0.0324107689674;
    msg.start_z_units = 196U;
    msg.end_z = 0.443923095461;
    msg.end_z_units = 185U;
    msg.radius = 0.0995474487763;
    msg.speed = 0.161946696922;
    msg.speed_units = 241U;
    msg.custom.assign("HMYPTQDTHWWCEHQTMNKKSCJTCEABIGWDKFQNQCGKBARZCSFDOUPZQVOVKVYVMMKYRTCDUOXPAREOFLPWJAQYENFELTUXYBZIGNFCXVDSMLUSVZSBNPCFV");

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
    msg.setTimeStamp(0.969137830853);
    msg.setSource(16846U);
    msg.setSourceEntity(223U);
    msg.setDestination(21788U);
    msg.setDestinationEntity(69U);
    msg.timeout = 30058U;
    msg.flags = 2U;
    msg.lat = 0.605055377357;
    msg.lon = 0.946627302655;
    msg.start_z = 0.505997834742;
    msg.start_z_units = 13U;
    msg.end_z = 0.580355273022;
    msg.end_z_units = 113U;
    msg.radius = 0.131797538565;
    msg.speed = 0.495433233095;
    msg.speed_units = 166U;
    msg.custom.assign("HYZHQMJEPHAHMLVKHQUUISBATSCFCRSVJKVCYXZBFBJYQRXVDZBKMTJUEAZRHTQKDVPRCFVNQSXLNPDIXDTMKRILAIHPFEWVBOCJOOSGPAWZYJSCOKLPSTEYXDOVAZSCJNZODBKMETPWFRUNIIIPGGUWUSWRLQXDOMLREFDDQBAUENHYWMFAACHWGUIFJEKG");

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
    msg.setTimeStamp(0.478533654817);
    msg.setSource(59826U);
    msg.setSourceEntity(94U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(172U);
    msg.timeout = 8284U;
    msg.lat = 0.97325334847;
    msg.lon = 0.992576940079;
    msg.z = 0.905417164589;
    msg.z_units = 243U;
    msg.speed = 0.417885935388;
    msg.speed_units = 209U;
    msg.custom.assign("SAHEDLIWFEOHZVQHLYECKJRSPDTEOVGKOMZDRSYFLVCPXJYFAKMKCXEBSZOVWXOPIQEVAVCNRCOLNQFMHWCIGKJZDUUDFOXUXBUNGPGWQJRDZJNAROQFKXJRYNUUZVBNACNZELKAYYRZPSDXRUYXYQBTISJFSCKILDVGWWRIKYPQTLHJEGMOEHXHKMMYZHGLPTSTSFTTXVF");

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
    msg.setTimeStamp(0.726829104227);
    msg.setSource(14105U);
    msg.setSourceEntity(237U);
    msg.setDestination(27620U);
    msg.setDestinationEntity(119U);
    msg.timeout = 52766U;
    msg.lat = 0.83976204883;
    msg.lon = 0.98103043775;
    msg.z = 0.220176825342;
    msg.z_units = 230U;
    msg.speed = 0.977043481539;
    msg.speed_units = 142U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.368601524021;
    tmp_msg_0.y = 0.276012251387;
    tmp_msg_0.z = 0.202927392474;
    tmp_msg_0.t = 0.922455915403;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MUHQAZHYPDGKLRPKEZMKWGSIHHEXLTUUVNQZYPJBIPANZVGCZWFJXMXJVHGCTIPPRFVMTDQOZEOWWSLGDKGTCCIDQWRUMXVPMWLZBKIRVETOGUASNPDSGCVVYTROAWYFPWOEQACBNU");

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
    msg.setTimeStamp(0.81789959416);
    msg.setSource(46589U);
    msg.setSourceEntity(188U);
    msg.setDestination(40281U);
    msg.setDestinationEntity(120U);
    msg.timeout = 55920U;
    msg.lat = 0.261867622779;
    msg.lon = 0.881161835575;
    msg.z = 0.150410418867;
    msg.z_units = 75U;
    msg.speed = 0.59199290207;
    msg.speed_units = 122U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.102946872393;
    tmp_msg_0.y = 0.802070879718;
    tmp_msg_0.z = 0.214095779908;
    tmp_msg_0.t = 0.43914211447;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZZVJNVPXLFBZQZRPZQLFONAUWTDOULRPCXFMHIKCMYLNMYCNGVADHGYSIFORVSJTQVSYKXEWGUAKSGNCIQTDOYTFYMPWXXMCGWBJTHTUKWTDPRRARBDAJEMEYRXOALXKNMQRUFIUHJ");

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
    msg.setTimeStamp(0.621232347953);
    msg.setSource(20218U);
    msg.setSourceEntity(129U);
    msg.setDestination(29091U);
    msg.setDestinationEntity(160U);
    msg.x = 0.851659109889;
    msg.y = 0.619131513619;
    msg.z = 0.65105869216;
    msg.t = 0.480032414336;

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
    msg.setTimeStamp(0.625336225926);
    msg.setSource(15000U);
    msg.setSourceEntity(214U);
    msg.setDestination(8306U);
    msg.setDestinationEntity(185U);
    msg.x = 0.633799439431;
    msg.y = 0.194858982657;
    msg.z = 0.679274634935;
    msg.t = 0.10048429048;

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
    msg.setTimeStamp(0.620950568576);
    msg.setSource(1043U);
    msg.setSourceEntity(244U);
    msg.setDestination(2648U);
    msg.setDestinationEntity(180U);
    msg.x = 0.972550904407;
    msg.y = 0.206778232129;
    msg.z = 0.489151991905;
    msg.t = 0.524326546177;

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
    msg.setTimeStamp(0.345616028383);
    msg.setSource(25389U);
    msg.setSourceEntity(30U);
    msg.setDestination(3288U);
    msg.setDestinationEntity(118U);
    msg.timeout = 56309U;
    msg.name.assign("VEVYZLRQHAYIVOGGILRIOWUYUUXFEGRBA");
    msg.custom.assign("UBQXGVELDMTQGXJVKSRHWDVNHJKEGRCKTUPVUWMJRHDHMYOTBDTXQHZHDPCGRDKBNFVCAYEUNWTTKPNDXUORZSMCJJEUOMJKLBEOPQYZTMHBLZKUCRIODLDRPXBWBQOVNLEWQO");

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
    msg.setTimeStamp(0.207426603261);
    msg.setSource(43704U);
    msg.setSourceEntity(154U);
    msg.setDestination(14842U);
    msg.setDestinationEntity(17U);
    msg.timeout = 39360U;
    msg.name.assign("WOEACSIZTJJWTDIPLAJXDMITWYPBRSJS");
    msg.custom.assign("XEPYAVIQNMELFTOURNXAZREYZNNUAJDJWVKVVCSYYEJLSGBFJIITOZKPXLQICZHFNAMZESRTHRJJTPQGYKBOKFVQQQGQCZCHYFLBFDNSGDALYQBIQCURSNGBLBEIWWGHOWOVGDNZDKWNRNHGYXKTMAMUOVLDHSTSIIWTCUXOPKEXSRUDXPVFHPECOCQGBZMUVMXHREYFKAROYWKDMGUMEMWPFLCFKVABIPXH");

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
    msg.setTimeStamp(0.877199575657);
    msg.setSource(16361U);
    msg.setSourceEntity(208U);
    msg.setDestination(45573U);
    msg.setDestinationEntity(21U);
    msg.timeout = 7906U;
    msg.name.assign("MPCPAHUPSGPCDUFZHWUWQYHVVOQQIAWTCKGAMKAFQBDVIFNHKALEWKURTLRRPO");
    msg.custom.assign("NPBKSOECUQNSBEBXCJFLGUDZYNJDLHCZQJYIMOWEMAEZJHLYRSDGWJQMZQNTZAQWUXUPSXKAHNAEGGPHTHSVTVIXFIOSJVPEDXFEYRFFTZGGFHZBQTPTRFILWWWIZHWHBTFMYCVENMDECWMELKBIXJHGBUKOUVKMRHVSKMTASLOILNWXKRRPDKKMRKYLIRDIJNDYQUBMATLVOOGJTDNVZPFPCZQAOOAYSJBUGGXSQIDCOYXPPXYWURAFVL");

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
    msg.setTimeStamp(0.441528590187);
    msg.setSource(11545U);
    msg.setSourceEntity(72U);
    msg.setDestination(52765U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.944751935818;
    msg.lon = 0.923085904125;
    msg.z = 0.787919840268;
    msg.z_units = 126U;
    msg.speed = 0.879076113967;
    msg.speed_units = 134U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.872129181089;
    tmp_msg_0.y = 0.855406703765;
    tmp_msg_0.z = 0.600883680034;
    tmp_msg_0.t = 0.797618008985;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 52519U;
    tmp_msg_1.off_x = 0.479313753811;
    tmp_msg_1.off_y = 0.985354916083;
    tmp_msg_1.off_z = 0.353546779684;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.531534006443;
    msg.custom.assign("WAFDRDGQANPEKLQTKWIJALAAZEQBPVUOFQXHZSBAYUJHNMRSVOCDMCFJUFVDLGCZPJJYAFBJLFLGYYIJULVTFE");

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
    msg.setTimeStamp(0.806735598098);
    msg.setSource(48165U);
    msg.setSourceEntity(174U);
    msg.setDestination(4808U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.684945329297;
    msg.lon = 0.961529729253;
    msg.z = 0.44615758728;
    msg.z_units = 89U;
    msg.speed = 0.67004422685;
    msg.speed_units = 195U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.659084130293;
    tmp_msg_0.y = 0.405468880108;
    tmp_msg_0.z = 0.298766635967;
    tmp_msg_0.t = 0.383269017605;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.576464139677;
    msg.custom.assign("ZPCUNHLSNMQULIWEVEPLFDEURHEEWMKDKKOTTZXJYZWIWHQGXBLMAZIELLIAAYLANHHFRWEIOZJYVGZVBUWJRIQNASVGRUSARTPBAJBHEFANHCBFRIUMXVHDLGYPKCOESTOGMMPYTZOWRXVDBYVDZIQGSFGDGTTPSQCPKUDDCKOBGDNLQPWXRYKCVHPTCVPJTONIJUISKZFELQBJJSJRHXYNOUVYQWMMYMCKZCXWAFFSRNFXFB");

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
    msg.setTimeStamp(0.364588851255);
    msg.setSource(47884U);
    msg.setSourceEntity(170U);
    msg.setDestination(41606U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.612183375516;
    msg.lon = 0.00869035758236;
    msg.z = 0.240391239501;
    msg.z_units = 228U;
    msg.speed = 0.222017881412;
    msg.speed_units = 41U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.880370316695;
    tmp_msg_0.y = 0.599132576108;
    tmp_msg_0.z = 0.845286465433;
    tmp_msg_0.t = 0.942856298295;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 63445U;
    tmp_msg_1.off_x = 0.739781215225;
    tmp_msg_1.off_y = 0.778870046198;
    tmp_msg_1.off_z = 0.147335553041;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.218342954193;
    msg.custom.assign("GBSQKJJNUKHWUEZWIVAFYUZUYEORTEVSJTHIQKXHPOPEAKCWGNDVWKGXXVFNOFTIPODEMSYGPSIBORPNBFQJZALWUPOXRBBAELUALUCBRJDLFSJZFAIOHXNPMRDIDALBYXEMQVWOPQMYQZDCHHLHKETZNGKCWODDILHTMNQVRTCCKXAMYGATQZKYJJRISPBVWRNQVFFCZTGLZOMGTCVJUUBWRERNSHAQCNBM");

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
    msg.setTimeStamp(0.709618099425);
    msg.setSource(49055U);
    msg.setSourceEntity(12U);
    msg.setDestination(26071U);
    msg.setDestinationEntity(251U);
    msg.vid = 9237U;
    msg.off_x = 0.308612110653;
    msg.off_y = 0.468807328474;
    msg.off_z = 0.033171493538;

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
    msg.setTimeStamp(0.891890334192);
    msg.setSource(46171U);
    msg.setSourceEntity(175U);
    msg.setDestination(3629U);
    msg.setDestinationEntity(59U);
    msg.vid = 18586U;
    msg.off_x = 0.667423943579;
    msg.off_y = 0.423039093095;
    msg.off_z = 0.765219046585;

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
    msg.setTimeStamp(0.644177908072);
    msg.setSource(20665U);
    msg.setSourceEntity(169U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(30U);
    msg.vid = 62037U;
    msg.off_x = 0.541846976217;
    msg.off_y = 0.210862529866;
    msg.off_z = 0.733561626108;

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
    msg.setTimeStamp(0.516346433079);
    msg.setSource(18513U);
    msg.setSourceEntity(80U);
    msg.setDestination(58358U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.217214087361);
    msg.setSource(22287U);
    msg.setSourceEntity(183U);
    msg.setDestination(29249U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.404801043343);
    msg.setSource(39278U);
    msg.setSourceEntity(125U);
    msg.setDestination(28013U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.894685121632);
    msg.setSource(49625U);
    msg.setSourceEntity(129U);
    msg.setDestination(53212U);
    msg.setDestinationEntity(221U);
    msg.mid = 24751U;

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
    msg.setTimeStamp(0.152229854228);
    msg.setSource(58803U);
    msg.setSourceEntity(86U);
    msg.setDestination(39816U);
    msg.setDestinationEntity(106U);
    msg.mid = 24672U;

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
    msg.setTimeStamp(0.588515732337);
    msg.setSource(41888U);
    msg.setSourceEntity(243U);
    msg.setDestination(8236U);
    msg.setDestinationEntity(49U);
    msg.mid = 27650U;

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
    msg.setTimeStamp(0.678058828769);
    msg.setSource(56111U);
    msg.setSourceEntity(19U);
    msg.setDestination(11416U);
    msg.setDestinationEntity(213U);
    msg.state = 120U;
    msg.eta = 52698U;
    msg.info.assign("FLYMTONJXCCOEBWDIWZPZPYMDTHJXKJLPMWNLRJLEBICYUREFHERAZZWVGOSGQBMPZVFYLWVRJCDDVXJVRSDZLOHNOBTSODNYKNGVXVYLFUWIRIECLQHNZNTLPWTHXGQDIAFMBTYSKYKQTHKIHEXUXZOIAUVCXBWRSJOMTHIPPZFCMSUGXGRFQKBVAZ");

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
    msg.setTimeStamp(0.568268086757);
    msg.setSource(42835U);
    msg.setSourceEntity(44U);
    msg.setDestination(23453U);
    msg.setDestinationEntity(231U);
    msg.state = 237U;
    msg.eta = 10396U;
    msg.info.assign("JVVRZCWJLHQWEJQFFOZMAKWKEYDXKWNHQYTPZDADOJQYOCWSULKMYVZESBNGIRMFMLZPKDJCJXSESCCVDNDPXSYBMXPIEOITQBHUTHLYUOHZNTXOSTELXWEUMLZHPLIR");

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
    msg.setTimeStamp(0.268588762784);
    msg.setSource(8910U);
    msg.setSourceEntity(216U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(252U);
    msg.state = 225U;
    msg.eta = 23215U;
    msg.info.assign("TTCEWSGOSMJLRMDSRERVCOABHQIZHZKKNBNWMULFNUXJGQNZLTDKVCONKNHBTBHPFCIAPPHJVUZ");

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
    msg.setTimeStamp(0.135940456995);
    msg.setSource(7356U);
    msg.setSourceEntity(187U);
    msg.setDestination(607U);
    msg.setDestinationEntity(191U);
    msg.system = 19469U;
    msg.duration = 28122U;
    msg.speed = 0.46961256786;
    msg.speed_units = 171U;
    msg.x = 0.0760304037426;
    msg.y = 0.825787821647;
    msg.z = 0.0492929593647;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.961165791676);
    msg.setSource(29788U);
    msg.setSourceEntity(208U);
    msg.setDestination(52199U);
    msg.setDestinationEntity(11U);
    msg.system = 29086U;
    msg.duration = 44839U;
    msg.speed = 0.912805147028;
    msg.speed_units = 194U;
    msg.x = 0.139966302575;
    msg.y = 0.770552929659;
    msg.z = 0.290385621423;
    msg.z_units = 88U;

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
    msg.setTimeStamp(0.0791185194827);
    msg.setSource(19537U);
    msg.setSourceEntity(164U);
    msg.setDestination(2748U);
    msg.setDestinationEntity(193U);
    msg.system = 5429U;
    msg.duration = 18901U;
    msg.speed = 0.832590498949;
    msg.speed_units = 0U;
    msg.x = 0.30016233609;
    msg.y = 0.743328716879;
    msg.z = 0.836208296711;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.616905365732);
    msg.setSource(62015U);
    msg.setSourceEntity(245U);
    msg.setDestination(48760U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.771525435606;
    msg.lon = 0.0371887947537;
    msg.speed = 0.828956557443;
    msg.speed_units = 133U;
    msg.duration = 62643U;
    msg.sys_a = 54050U;
    msg.sys_b = 47122U;
    msg.move_threshold = 0.652161698421;

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
    msg.setTimeStamp(0.913554496247);
    msg.setSource(46560U);
    msg.setSourceEntity(73U);
    msg.setDestination(9690U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.160023777486;
    msg.lon = 0.475809394886;
    msg.speed = 0.361658469175;
    msg.speed_units = 16U;
    msg.duration = 59962U;
    msg.sys_a = 29264U;
    msg.sys_b = 17584U;
    msg.move_threshold = 0.56902032157;

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
    msg.setTimeStamp(0.871261633652);
    msg.setSource(10085U);
    msg.setSourceEntity(52U);
    msg.setDestination(8394U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.667310090163;
    msg.lon = 0.257357286042;
    msg.speed = 0.555741590552;
    msg.speed_units = 167U;
    msg.duration = 752U;
    msg.sys_a = 43979U;
    msg.sys_b = 14337U;
    msg.move_threshold = 0.629391842583;

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
    msg.setTimeStamp(0.506731532969);
    msg.setSource(24350U);
    msg.setSourceEntity(38U);
    msg.setDestination(43858U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.896738050835;
    msg.lon = 0.688524664813;
    msg.z = 0.471168536696;
    msg.z_units = 216U;
    msg.speed = 0.49900848115;
    msg.speed_units = 92U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.148921767808;
    tmp_msg_0.lon = 0.171877049868;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PEUNMLLWEJFTWIBZHOEWDSJIVQTOOOCLFYTCYDFSNAEXZNTBJWAQDUBBMYVEXRPTKPRRRRRYMKXQIPGFCIIDXSAZKABXQNUGNDLISMGKGGOPJAPSHVDBGLXZLTCWZQUKQSADGZJGVSWRJSKYHIYOBZLHIVZUAFUNTYHMWFNMUVTHLHXPRTSPFYRJXXBXVEKHCQCWPFLHCCEJBAEOPVKUJWMVZFDCMFJQLEOAGONNZV");

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
    msg.setTimeStamp(0.163591029633);
    msg.setSource(896U);
    msg.setSourceEntity(30U);
    msg.setDestination(35047U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.883860313874;
    msg.lon = 0.433486043006;
    msg.z = 0.0418070921331;
    msg.z_units = 173U;
    msg.speed = 0.522532582557;
    msg.speed_units = 56U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.35798164565;
    tmp_msg_0.lon = 0.996292040709;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OOTVQUUGDTRTPMWPYVQBZRYGUFXKTJAKHNAMRKFFFBIABRHSRWSCPWCHIAOAUABGPWHHNRRSTCILTXDBSEDOEZDSYSGLXOQZQNNJSSWBXSSRGXMPEUTKZNIZVZZTDLLAGVJIRMCOZEFXEBCMHYVYBPHFWNWWXCMFBV");

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
    msg.setTimeStamp(0.97975175989);
    msg.setSource(36179U);
    msg.setSourceEntity(22U);
    msg.setDestination(6688U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.895893566166;
    msg.lon = 0.247428191537;
    msg.z = 0.873685663412;
    msg.z_units = 60U;
    msg.speed = 0.223792136098;
    msg.speed_units = 6U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.160888988709;
    tmp_msg_0.lon = 0.527465448487;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("INUGPBGFKUEN");

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
    msg.setTimeStamp(0.690344231133);
    msg.setSource(60814U);
    msg.setSourceEntity(141U);
    msg.setDestination(8327U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.950281801747;
    msg.lon = 0.438865256259;

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
    msg.setTimeStamp(0.17122706186);
    msg.setSource(8634U);
    msg.setSourceEntity(236U);
    msg.setDestination(52675U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.180445790973;
    msg.lon = 0.634951703348;

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
    msg.setTimeStamp(0.776016459276);
    msg.setSource(26704U);
    msg.setSourceEntity(98U);
    msg.setDestination(31308U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.311197980677;
    msg.lon = 0.209948544759;

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
    msg.setTimeStamp(0.22441162788);
    msg.setSource(48858U);
    msg.setSourceEntity(140U);
    msg.setDestination(43710U);
    msg.setDestinationEntity(128U);
    msg.timeout = 19623U;
    msg.lat = 0.124264402666;
    msg.lon = 0.324330348902;
    msg.z = 0.602356252823;
    msg.z_units = 81U;
    msg.pitch = 0.373202651101;
    msg.amplitude = 0.36143698897;
    msg.duration = 26321U;
    msg.speed = 0.37228655602;
    msg.speed_units = 87U;
    msg.radius = 0.802913830204;
    msg.direction = 218U;
    msg.custom.assign("JJHQEOJMIUZBMFURBIKDGCXKHXJETLZRZFAFOXUMXNGMZKVMFVFIOIMPGLSVYTBODMTWYWAYDJKCWLQAHHCBNNVSKCQWZXUGVLVEWGTSNIIVWWEQDMAPVYRBMILQXDOBAJLRYSKPNDEITYSWTGECCOXSDYCPPCSZYHRTFRZULNKXGRITHEUKHZUUVRAOBFBEQGLDLXANGNMOQNDVQCHRSWPKNAUJPTPEZYBGJJFHROSP");

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
    msg.setTimeStamp(0.605777803582);
    msg.setSource(1619U);
    msg.setSourceEntity(40U);
    msg.setDestination(52428U);
    msg.setDestinationEntity(9U);
    msg.timeout = 48259U;
    msg.lat = 0.878992240646;
    msg.lon = 0.253156975712;
    msg.z = 0.0759761808545;
    msg.z_units = 147U;
    msg.pitch = 0.480105288367;
    msg.amplitude = 0.235194090265;
    msg.duration = 37041U;
    msg.speed = 0.473295583758;
    msg.speed_units = 206U;
    msg.radius = 0.142957710854;
    msg.direction = 222U;
    msg.custom.assign("TWJRZFQLDMOHLNSGBNJIEFTVAQQUVTELPXDSYFALDBUZQXGDDEXWPSMHHCMHLRSWMDIQUAZMGFCYQWTXFBOQJHUURGKIIUVETVOFPMBNSRCBJBZCAAXHVPKRHKVYVVLBORPQASHNXUIZEYQKUMZZEGWYDWUISLLGJFOXK");

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
    msg.setTimeStamp(0.985649601024);
    msg.setSource(41648U);
    msg.setSourceEntity(172U);
    msg.setDestination(64555U);
    msg.setDestinationEntity(119U);
    msg.timeout = 61642U;
    msg.lat = 0.230133010423;
    msg.lon = 0.67948168545;
    msg.z = 0.870182102796;
    msg.z_units = 33U;
    msg.pitch = 0.59709643136;
    msg.amplitude = 0.482307780733;
    msg.duration = 78U;
    msg.speed = 0.887612130216;
    msg.speed_units = 210U;
    msg.radius = 0.645195423662;
    msg.direction = 89U;
    msg.custom.assign("GJSANUAXPGXDRBGKBQYYVPKOYVULEDMZNPRDAJTHTBOQLZFMCRXWCLLZDEMFIVYRPNGEWTMWBJGATGBAYOISOFHBLBQPAFQSWFOSZVFTYDCYVHJDUHBUCIKHBVYKOESUKDJIMGLEMNDXKXVNHNEXXQSEUCRYHXAJQVCKG");

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
    msg.setTimeStamp(0.296753228223);
    msg.setSource(22088U);
    msg.setSourceEntity(66U);
    msg.setDestination(3308U);
    msg.setDestinationEntity(177U);
    msg.control_src = 30184U;
    msg.control_ent = 64U;
    msg.timeout = 0.0494596666099;
    msg.loiter_radius = 0.548118037202;
    msg.altitude_interval = 0.676570969402;

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
    msg.setTimeStamp(0.115091257642);
    msg.setSource(7127U);
    msg.setSourceEntity(5U);
    msg.setDestination(18814U);
    msg.setDestinationEntity(70U);
    msg.control_src = 16207U;
    msg.control_ent = 41U;
    msg.timeout = 0.830526200668;
    msg.loiter_radius = 0.54038253224;
    msg.altitude_interval = 0.553429002689;

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
    msg.setTimeStamp(0.491801927786);
    msg.setSource(52886U);
    msg.setSourceEntity(17U);
    msg.setDestination(18596U);
    msg.setDestinationEntity(66U);
    msg.control_src = 63103U;
    msg.control_ent = 248U;
    msg.timeout = 0.14050592784;
    msg.loiter_radius = 0.190001779827;
    msg.altitude_interval = 0.289317872929;

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
    msg.setTimeStamp(0.714722061956);
    msg.setSource(29409U);
    msg.setSourceEntity(12U);
    msg.setDestination(5391U);
    msg.setDestinationEntity(48U);
    msg.flags = 24U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.168355876124;
    tmp_msg_0.speed_units = 249U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0458543347818;
    tmp_msg_1.z_units = 164U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.238262939169;
    msg.lon = 0.896077086446;

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
    msg.setTimeStamp(0.0908310114043);
    msg.setSource(32173U);
    msg.setSourceEntity(154U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(21U);
    msg.flags = 103U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0781129035959;
    tmp_msg_0.speed_units = 58U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.888297525788;
    tmp_msg_1.z_units = 43U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.621244767265;
    msg.lon = 0.627020959173;

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
    msg.setTimeStamp(0.301491923477);
    msg.setSource(10326U);
    msg.setSourceEntity(114U);
    msg.setDestination(1880U);
    msg.setDestinationEntity(172U);
    msg.flags = 34U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.423171189678;
    tmp_msg_0.speed_units = 35U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3199093212;
    tmp_msg_1.z_units = 44U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.695096419658;
    msg.lon = 0.511250846674;

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
    msg.setTimeStamp(0.305233655752);
    msg.setSource(54292U);
    msg.setSourceEntity(26U);
    msg.setDestination(11344U);
    msg.setDestinationEntity(143U);
    msg.control_src = 44471U;
    msg.control_ent = 188U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 11U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.875010630051;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.460314869165;
    tmp_tmp_msg_0_1.z_units = 29U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.98265374486;
    tmp_msg_0.lon = 0.470092132185;
    msg.reference.set(tmp_msg_0);
    msg.state = 244U;
    msg.proximity = 207U;

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
    msg.setTimeStamp(0.102322938243);
    msg.setSource(54987U);
    msg.setSourceEntity(196U);
    msg.setDestination(35636U);
    msg.setDestinationEntity(234U);
    msg.control_src = 19063U;
    msg.control_ent = 228U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 212U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.696260824144;
    tmp_tmp_msg_0_0.speed_units = 95U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.167316485968;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.204056469868;
    tmp_msg_0.lon = 0.0719252334019;
    msg.reference.set(tmp_msg_0);
    msg.state = 18U;
    msg.proximity = 34U;

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
    msg.setTimeStamp(0.114040235165);
    msg.setSource(17319U);
    msg.setSourceEntity(192U);
    msg.setDestination(50763U);
    msg.setDestinationEntity(53U);
    msg.control_src = 55198U;
    msg.control_ent = 92U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 47U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.93127221767;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.681824770429;
    tmp_tmp_msg_0_1.z_units = 30U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.88673032564;
    tmp_msg_0.lon = 0.0978133908846;
    msg.reference.set(tmp_msg_0);
    msg.state = 115U;
    msg.proximity = 185U;

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
    msg.setTimeStamp(0.413074022371);
    msg.setSource(50199U);
    msg.setSourceEntity(235U);
    msg.setDestination(28102U);
    msg.setDestinationEntity(23U);
    msg.op_mode = 31U;
    msg.error_count = 57U;
    msg.error_ents.assign("GPIUVKWTNCFSJCWTNHJQVESLMDMGDPU");
    msg.maneuver_type = 54690U;
    msg.maneuver_stime = 0.450263108054;
    msg.maneuver_eta = 22365U;
    msg.control_loops = 189035621U;
    msg.flags = 20U;
    msg.last_error.assign("UDGIOWTOKBJDQDTHFHQJUPZBFRLUCRHUMCXWDESRSJMMMKZBYWEVNNCPKENLKQXMPXCBWRIIZTREVKVGSGXLYQZJDCEYPTFFOEUPIJXWFXAZROEFSSYCZVNJXGOPDDKGKUHFQPHSDYDGPTOXJWLOM");
    msg.last_error_time = 0.657226292657;

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
    msg.setTimeStamp(0.209784212254);
    msg.setSource(42424U);
    msg.setSourceEntity(246U);
    msg.setDestination(39137U);
    msg.setDestinationEntity(5U);
    msg.op_mode = 214U;
    msg.error_count = 131U;
    msg.error_ents.assign("XJJGFWATILHKLCRUFENCTHCUQSILWNNJCWJRODWRRPHTYONODAZRRZYBSDPTBIPENBYGQMAGSHLCNEBSXEFVKHDBNJFJVMEJFCYINPSKTGTOYESADAKSYILDXJPAWWXROTCQDZFVJTYLRWBFMGHFOVZXUPZOPVPORALBQMIFTOGQQBSKR");
    msg.maneuver_type = 1828U;
    msg.maneuver_stime = 0.667965788581;
    msg.maneuver_eta = 25595U;
    msg.control_loops = 2116836848U;
    msg.flags = 26U;
    msg.last_error.assign("PDXUAYRAHAVPADUULDYOXIVFADKDJJEQPKJKNTHFVLQECPHXUCBOILCVYMAXRDGTCBDQMIOGXLOHH");
    msg.last_error_time = 0.00573111731515;

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
    msg.setTimeStamp(0.48479873598);
    msg.setSource(20027U);
    msg.setSourceEntity(18U);
    msg.setDestination(1765U);
    msg.setDestinationEntity(159U);
    msg.op_mode = 80U;
    msg.error_count = 117U;
    msg.error_ents.assign("OUTYAZDEZFKHV");
    msg.maneuver_type = 49830U;
    msg.maneuver_stime = 0.869765072681;
    msg.maneuver_eta = 13970U;
    msg.control_loops = 469625082U;
    msg.flags = 86U;
    msg.last_error.assign("UISLFIZCGENIQYVRTNFAYYUMCMVQBCKIVYRMOIRGHDGEUNWSGHLPIRTSBKWXHHHQUXKAOSKIBEJSTQWMDSCLGCBFZSXMTXXJNGRDPGOATFLHHZXLQAOVNAJILJPFRGWPQBJNREVDNYYDOPJBCE");
    msg.last_error_time = 0.439435377209;

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
    msg.setTimeStamp(0.564148105606);
    msg.setSource(1855U);
    msg.setSourceEntity(34U);
    msg.setDestination(7717U);
    msg.setDestinationEntity(221U);
    msg.type = 140U;
    msg.request_id = 37077U;
    msg.command = 148U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.325718497576;
    tmp_msg_0.lon = 0.39482198788;
    tmp_msg_0.z = 0.524984245964;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.speed = 0.135141583551;
    tmp_msg_0.speed_units = 158U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 46217U;
    tmp_tmp_msg_0_0.off_x = 0.371802845163;
    tmp_tmp_msg_0_0.off_y = 0.535499105358;
    tmp_tmp_msg_0_0.off_z = 0.99197015557;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.582516853732;
    tmp_msg_0.custom.assign("BKMODLEVJWOVNPROHJFKWBWKOKZVABXQTGNNFOEHSJJOLNTFSQZPLQOMAMZRDSNXDCUXEVWSAJATZFPOGSBFPUDGEVUIDQYEEABCUI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52332U;
    msg.info.assign("TUNHWESQKWRJTHIKUNFHIBSAGMGD");

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
    msg.setTimeStamp(0.172593097059);
    msg.setSource(45262U);
    msg.setSourceEntity(118U);
    msg.setDestination(63232U);
    msg.setDestinationEntity(87U);
    msg.type = 105U;
    msg.request_id = 10025U;
    msg.command = 126U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.start_lat = 0.868844341504;
    tmp_tmp_msg_0_0.start_lon = 0.92045025362;
    tmp_tmp_msg_0_0.start_z = 0.0625632257554;
    tmp_tmp_msg_0_0.start_z_units = 175U;
    tmp_tmp_msg_0_0.end_lat = 0.265351912984;
    tmp_tmp_msg_0_0.end_lon = 0.757953524857;
    tmp_tmp_msg_0_0.end_z = 0.502729521285;
    tmp_tmp_msg_0_0.end_z_units = 49U;
    tmp_tmp_msg_0_0.speed = 0.936294231631;
    tmp_tmp_msg_0_0.speed_units = 249U;
    tmp_tmp_msg_0_0.lradius = 0.704940109922;
    tmp_tmp_msg_0_0.flags = 133U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 33104U;
    tmp_msg_0.custom.assign("GKGDZTBASYZJCNZOLKYHRXUIMGEISMUNPBUHCNVUFBTPRZDYWURXKTKYRQWUWQAVMBAZGFCUKKYJFJSNDDEKIAEOGGKXPBVXYOQEEQPISWSFXRSQTXLSWOGRFVTMTBEJQNZIPHFVPHSHSDYMEABSNFZTQZCMHKRNVANODPIWGZQXGCWJHPFROYVXTLITULELMIVCJHOTELLRWMOAULOAJJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19487U;
    msg.info.assign("YJIPWMPSBNESTKJBJFMEFAGBQGYJPJCTBRYAVJNWQOZLWDNIKQKKRCOAVGFOIKIAVTNQWMJPOAWUSEPTUGXQVZESAYYPRXTRZDMCGXZSHHCHWBVQKHVMCEBHIIMDOXWPCGUHNILWCZJUTAOYBFCPUFOHMUYXVRVLSIBYUCZLZRLMITADRIGOQNUPJEETGSKDBJSDASNZTDVLLULYDCBKDRFAKHXXNLKNEEWGHSDMXOXNFYFFQHFOZWQ");

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
    msg.setTimeStamp(0.914652827478);
    msg.setSource(8953U);
    msg.setSourceEntity(166U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(197U);
    msg.type = 46U;
    msg.request_id = 15516U;
    msg.command = 77U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 35833U;
    tmp_msg_0.flags = 100U;
    tmp_msg_0.lat = 0.378563088855;
    tmp_msg_0.lon = 0.486616915029;
    tmp_msg_0.start_z = 0.846886733484;
    tmp_msg_0.start_z_units = 228U;
    tmp_msg_0.end_z = 0.677734816962;
    tmp_msg_0.end_z_units = 127U;
    tmp_msg_0.radius = 0.861496658943;
    tmp_msg_0.speed = 0.0919910811844;
    tmp_msg_0.speed_units = 97U;
    tmp_msg_0.custom.assign("XKHJPFATBJKQNAFSEOMSZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10143U;
    msg.info.assign("BBTJMRNEXGTMHKXGTJJANFTLGUPGZCOCOATBVZIWLCYRJKKFAI");

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
    msg.setTimeStamp(0.499180074463);
    msg.setSource(7393U);
    msg.setSourceEntity(46U);
    msg.setDestination(29554U);
    msg.setDestinationEntity(121U);
    msg.command = 67U;
    msg.entities.assign("YASNSMCZTIGVQDIDLKVRVBBMBEWTNELQUJEVCFTZZVPQAKLNSKLRAWRUZAKISKXTNHEIONFE");

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
    msg.setTimeStamp(0.173375317799);
    msg.setSource(60142U);
    msg.setSourceEntity(178U);
    msg.setDestination(7669U);
    msg.setDestinationEntity(148U);
    msg.command = 123U;
    msg.entities.assign("EASUUINSZGMREBBDAXSPQZVUNXPFYNAJNWDKZLKWJSYXYGF");

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
    msg.setTimeStamp(0.187658699974);
    msg.setSource(12903U);
    msg.setSourceEntity(96U);
    msg.setDestination(20073U);
    msg.setDestinationEntity(162U);
    msg.command = 198U;
    msg.entities.assign("FJPMSSBMNWOPPGWJUCRXHUOCURICOOAZPUKRCDFGMFLTLXBNCKBFZCLSTKDMELTFBVAVSYRRHTJXIMGVNQTKGGXBQQELXROKAJASVCOBLILNWB");

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
    msg.setTimeStamp(0.90923766848);
    msg.setSource(32541U);
    msg.setSourceEntity(48U);
    msg.setDestination(39663U);
    msg.setDestinationEntity(164U);
    msg.mcount = 33U;
    msg.mnames.assign("ZVKAIZNGYAHTWXGHCMYIHFXZTABOYKWTXLFYCEIWCHWRVLMAPGVHPVAVKHZOYDSSZZUIYJTSTMKO");
    msg.ecount = 132U;
    msg.enames.assign("VIBKUWGFUEJRYVNJNWFTOBRTATEJZMTCEALVWTGLOPDVPDZTCFXHVIRAITDIRMQZXVSFQZBKSGJIXMKVEYQNNXRLXRQMNOUNDJXXJEWBQHZPCLJASDPEMHAOGPKCCLSYIFYKASSCBRUOLQWSTFVGMNJBHPJUYIYWRFMZZIOPUDWHDOHFKSBQWBTSUYSUC");
    msg.ccount = 121U;
    msg.cnames.assign("VUXSREVODIKPTTTKOWHQIQYMSLVNQZPWGUFZGEFNFEAHJRKCVEHIWRBMRUJHMHXLTCPRPIYUYFYHJKETYDQKPIGGQHQWCPHVUBMOWPEYCLIAAXXVZGETNILLEQMTJKDVRYTIAASSYEBLAZOVCXSCNJLPWABZPSNONFWBKYAHFOQSOZXMSRNOUUFWDTAKNZIQDGGMNZFMSOCGRBFXAJDXNTLVCURJIHJBJLDGSXBD");
    msg.last_error.assign("KAKKJNNUNHQAEXKYIBOLZGVOPYJDDPQKETVRUUHPUAEENOFQAJSYLZCSKKYWVCLNXMPZGUUBGDVBYXZNCFVIDGHVKJDMJMPCLHKXMUTKOBXDHRAOESBMIFDTHUXSCZFZPBQIUCQMEFIBNZBWC");
    msg.last_error_time = 0.717038724005;

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
    msg.setTimeStamp(0.890967031443);
    msg.setSource(50233U);
    msg.setSourceEntity(132U);
    msg.setDestination(15269U);
    msg.setDestinationEntity(89U);
    msg.mcount = 218U;
    msg.mnames.assign("WQXLYCCNEIRTRQSNVIMYZVRHDJYEWKPHWEJ");
    msg.ecount = 127U;
    msg.enames.assign("YCXZAMXGKRUVUPAZFYZGQBXKSFHWQYAPNEBFVTNGCUYIWDYPEMEEJORPWJHAWAOYTITEMBMTGROCKFDDOBESMJFPIULHWVLKIVZZKXZKOYNIYWDOTPGJSWLIDTJMQVGUEZLBFOCANKDDHMRTIHDSCOOQATEFNBXNMDQRUKQT");
    msg.ccount = 116U;
    msg.cnames.assign("UVBFVBSZDHODNOYZVJPKHOPMGVRTJYIEOHLKDIBZKNSRUSCZJRCJLABULMZRXXSUUSUNLSWQAWXETIMPDCKXCMYIQCHRTMARNPLMDUQISYQZQKVKKGVXGASYXYGMGLFTNZFQCPWIVRIOLPXGJGWDEB");
    msg.last_error.assign("WTJVEADJGDUPBSOXSMDIXDJCDFKRNIUILINERQOBUHKCQMMELPFBTHVSZHDKLVIPYIFDMHWFAJQGLBJGBZOCGPTUEUELYDXHRQRTIZRMAGBVCLJSC");
    msg.last_error_time = 0.359445409527;

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
    msg.setTimeStamp(0.989764426393);
    msg.setSource(20750U);
    msg.setSourceEntity(115U);
    msg.setDestination(21868U);
    msg.setDestinationEntity(238U);
    msg.mcount = 116U;
    msg.mnames.assign("CPEXGBTLGPVLFTRWJHGJRDQEFEAXMCQXQDLPVOQXEBCAAPDVZVKMWNQYLJLKUEEHGOUJNMFXPYRQYEZKYVNHEDHRFWZPDSGNGWMEFYSGNSOBWORYMSTBTBWQNLKOMELIHFATVUFZCVHXUCHIIPIOZFMXGUQTTRRBARJKAZS");
    msg.ecount = 252U;
    msg.enames.assign("LTEWELTBXWHCCWGOBYTZRDZAYXXKOMNDIIGJNGBYQPTMJYSYTXJUIACSYWUSKTEVDROZSPTPADCZFAJQMMJIKGLHXAOZROIYBKLUHRRGBKWCSMOHPUKCKBGJHOXURVDPUNCMTHLWFJCHAQJGHSPALLMEJIFIRNUEVDWMFOR");
    msg.ccount = 84U;
    msg.cnames.assign("ESJFGIRZOXCDVQSLNEKQDPKOGAXBLONRIIMLJQHONRACNFBJNPTKZTJFZSAYRMIKEMHQRJWGIGPVDLMVYXRLOAYXENUZXGKTWVCWUDHIBUBPSZPWHJPGBDBRQFGMJRIDTBSTVFAJBGVRAKA");
    msg.last_error.assign("VIAFCYRTECDXTUKBGWRJXLJPXSNPYHFDMFKEQPLTLZVYKSQIEWWJPVPNXHEBXWIJANBKNAJQIOGVREMONCSYFMLHCVJAJLDEAQBOJONMPVEUMLQNWIRHFWDHRSVLVVIOSFGMCBYGSRUUCPAGZGPUYXZFMKSLUGYWZZYFRIHPUTXZKODADTHIBEOLPKZTZAGWBXTDUAQMNRZUBVGKUECDWYQO");
    msg.last_error_time = 0.739079170345;

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
    msg.setTimeStamp(0.880058065878);
    msg.setSource(55117U);
    msg.setSourceEntity(239U);
    msg.setDestination(41484U);
    msg.setDestinationEntity(220U);
    msg.mask = 123U;
    msg.max_depth = 0.0866321874873;
    msg.min_altitude = 0.0423425947601;
    msg.max_altitude = 0.2280556201;
    msg.min_speed = 0.795811545115;
    msg.max_speed = 0.21912223133;
    msg.max_vrate = 0.952030520311;
    msg.lat = 0.406083739851;
    msg.lon = 0.561978950075;
    msg.orientation = 0.249518983485;
    msg.width = 0.761750874456;
    msg.length = 0.791666532369;

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
    msg.setTimeStamp(0.124967816058);
    msg.setSource(58080U);
    msg.setSourceEntity(7U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(187U);
    msg.mask = 244U;
    msg.max_depth = 0.778732154411;
    msg.min_altitude = 0.263171065802;
    msg.max_altitude = 0.525821930746;
    msg.min_speed = 0.395721094076;
    msg.max_speed = 0.766872789604;
    msg.max_vrate = 0.266488086553;
    msg.lat = 0.315467023027;
    msg.lon = 0.37479573649;
    msg.orientation = 0.959340616032;
    msg.width = 0.262862331519;
    msg.length = 0.943127853096;

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
    msg.setTimeStamp(0.897715779655);
    msg.setSource(47404U);
    msg.setSourceEntity(220U);
    msg.setDestination(3710U);
    msg.setDestinationEntity(123U);
    msg.mask = 43U;
    msg.max_depth = 0.233695448345;
    msg.min_altitude = 0.142072582174;
    msg.max_altitude = 0.952451728374;
    msg.min_speed = 0.162086961653;
    msg.max_speed = 0.189310953008;
    msg.max_vrate = 0.382689979527;
    msg.lat = 0.526157666031;
    msg.lon = 0.758649675507;
    msg.orientation = 0.796544987629;
    msg.width = 0.403043625089;
    msg.length = 0.745003146012;

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
    msg.setTimeStamp(0.393744420587);
    msg.setSource(37051U);
    msg.setSourceEntity(6U);
    msg.setDestination(8225U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.146651088846);
    msg.setSource(12158U);
    msg.setSourceEntity(219U);
    msg.setDestination(32080U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.120677937903);
    msg.setSource(25370U);
    msg.setSourceEntity(230U);
    msg.setDestination(46539U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.621310601216);
    msg.setSource(21268U);
    msg.setSourceEntity(237U);
    msg.setDestination(22261U);
    msg.setDestinationEntity(96U);
    msg.duration = 22564U;

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
    msg.setTimeStamp(0.343481036331);
    msg.setSource(40961U);
    msg.setSourceEntity(196U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(31U);
    msg.duration = 61913U;

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
    msg.setTimeStamp(0.176608087211);
    msg.setSource(47481U);
    msg.setSourceEntity(110U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(152U);
    msg.duration = 16320U;

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
    msg.setTimeStamp(0.656558784338);
    msg.setSource(62920U);
    msg.setSourceEntity(181U);
    msg.setDestination(63133U);
    msg.setDestinationEntity(130U);
    msg.enable = 67U;
    msg.mask = 3654274424U;
    msg.scope_ref = 0.206354515636;

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
    msg.setTimeStamp(0.443785909362);
    msg.setSource(8946U);
    msg.setSourceEntity(144U);
    msg.setDestination(19333U);
    msg.setDestinationEntity(187U);
    msg.enable = 230U;
    msg.mask = 3817738071U;
    msg.scope_ref = 0.139460887019;

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
    msg.setTimeStamp(0.86470105957);
    msg.setSource(54997U);
    msg.setSourceEntity(144U);
    msg.setDestination(64826U);
    msg.setDestinationEntity(117U);
    msg.enable = 154U;
    msg.mask = 856363038U;
    msg.scope_ref = 0.0433652667887;

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
    msg.setTimeStamp(0.591965812608);
    msg.setSource(60923U);
    msg.setSourceEntity(22U);
    msg.setDestination(12046U);
    msg.setDestinationEntity(229U);
    msg.medium = 239U;

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
    msg.setTimeStamp(0.590577800101);
    msg.setSource(22673U);
    msg.setSourceEntity(61U);
    msg.setDestination(63808U);
    msg.setDestinationEntity(136U);
    msg.medium = 39U;

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
    msg.setTimeStamp(0.136753453165);
    msg.setSource(8339U);
    msg.setSourceEntity(162U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(134U);
    msg.medium = 106U;

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
    msg.setTimeStamp(0.50627139386);
    msg.setSource(29218U);
    msg.setSourceEntity(236U);
    msg.setDestination(60199U);
    msg.setDestinationEntity(95U);
    msg.value = 0.633983007753;
    msg.type = 204U;

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
    msg.setTimeStamp(0.498558274928);
    msg.setSource(15042U);
    msg.setSourceEntity(224U);
    msg.setDestination(39655U);
    msg.setDestinationEntity(25U);
    msg.value = 0.588409427474;
    msg.type = 172U;

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
    msg.setTimeStamp(0.753492679697);
    msg.setSource(50900U);
    msg.setSourceEntity(137U);
    msg.setDestination(49798U);
    msg.setDestinationEntity(64U);
    msg.value = 0.242205817116;
    msg.type = 35U;

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
    msg.setTimeStamp(0.216658231705);
    msg.setSource(40054U);
    msg.setSourceEntity(40U);
    msg.setDestination(16459U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.776221378722);
    msg.setSource(40929U);
    msg.setSourceEntity(191U);
    msg.setDestination(35800U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.313741297892);
    msg.setSource(27537U);
    msg.setSourceEntity(162U);
    msg.setDestination(16869U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.550884646482);
    msg.setSource(26728U);
    msg.setSourceEntity(206U);
    msg.setDestination(2479U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("OXLYNSPBGTUMDPDORKJJVKBQSXZHCPQDNC");
    msg.description.assign("JFARWKZUTMWYMMHIWBZLNRMURQEJZESTCOXLFPYPBHMSUPQSRLSNINTOBHMVHDVBGAJHHQKXTATDVWGVCEFJEGKYNSUQYYHDUSBVPHAJTTLFAWXAOCAVEZREQHQRKIO");
    msg.vnamespace.assign("PSVIHFMDQBIJPCYFAKJZDGAEMWWDVIRTXCLZFRYCSNGLNOVRXJZDTXXJYDXWYJCAHACGFBWWDUGQRCDBWETLHZBTIQPRKEYGGBUEZRNVZKLHARCWZLBUCHFSNQMZIGIXQSSSHPUUEPFIYAADBXOEPMUVARWIJTHMXJYPVKKNRYGQAMQOWNMTOCBSVYKQLWILTLPNPLFLODZOCNVJFQMZJDEOEKKOPJSXSUHGUITRNVQHUONBFUVBMKGEHST");
    msg.start_man_id.assign("XVMQYGFMIONQSJQSMHHAYDZLFASDCRMBWWGBSU");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("RCYBZFNCWQJJCIVMAYZMRNMIOUCWWAJMLUVSXDPEKNYZDXSDYCVLFPEXVQNBRHJXZXBREAJXMRTNKPRDIGFOUWLRNOHTGWQRDSXTMLLUPIABYDVVSOXFPUBHDOGTZPBFGWLPPEMIRHUBXVVIWMOOCGJGKSOHKQCYSUDVKHTLCNKAZPTGIQEMFSQUKIGYNMGAZZNTLEIUHSJACTLHYBQFK");
    tmp_msg_0.dest_man.assign("GFIYUSAECXYSRIPBTWHLWXJIILCFLBKDUZSZFVNFYAVEQDIGHYJHYNXYVUDSTCGXJRIXZNVNHWJMNWXBQCILOQRNAWWBUAGPFPFUSKGGKBXBTNLUESODLXCRRRHDQRZVKOYCMQTUGIOBMK");
    tmp_msg_0.conditions.assign("WBQUMOJUYIYLDIUX");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("SFWMNZQUYEADPDXUJUFVKMXKEXCKYDBMUWRRATJVHXVFZFTMXSUGYZNNJZXXGLHTYKOQWLGPIOITXTLSQOSBFUMTDEALCQRQHJYQOULIWFBCJPZNJPKKWHAGGETGBCZVPKYSSZ");
    tmp_tmp_msg_0_0.sys_type = 79U;
    tmp_tmp_msg_0_0.owner = 6316U;
    tmp_tmp_msg_0_0.lat = 0.730366583245;
    tmp_tmp_msg_0_0.lon = 0.423920238256;
    tmp_tmp_msg_0_0.height = 0.969984077299;
    tmp_tmp_msg_0_0.services.assign("RIZIGWZINWLODGOLFBPSJZEEOJVRHQFCQHMHDZVBHVRJJCVZCPIEPCRYMNRNLQTSLYAECPDSOKCTLFWZYDJPLUCIXEWBEXLVWFDNKYTQZMSGWEAICOHUYCEDXAVSBLIFXMAPKFVDFHJXGKHGNUQZMGKPTUUGUEERSDNDAZBQQIKOHJPVRHZTJHSXYBCSNTMTKYLUMFVNSPWLVKRORBGQYOUWTKFMAAAWXFUBYBSNUPAJIQTTNWJQGMO");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::TrexCommand tmp_msg_1;
    tmp_msg_1.command = 144U;
    tmp_msg_1.goal_id.assign("XSKMOVVOQQIWCOSUAVLTFSYFNJLNPAEQWGLGEOPELTYMBAWZWEBODROXWDOYNGEKCNJMHUDQPPIUBEMZNHUAJCUCRNZIZOHFMLECGBCHRXIWZQVXOTLYXJSUVNGXFAWGIJCVYMLMSGAHBQXVDLITYOBBLEZDWUDGITXRBYRXZKZFVTKVDFJWHSRNJFWDIUXEITKJRBKYKHNFFHSPKZLDPCAPCEMJHRMPSUQGAVKHPRJMD");
    tmp_msg_1.goal_xml.assign("FRVKHWGQAPCSWUGGARTDGWYNWHVFTITWBAHDMIKBZJJWHTYIKVBSTTTPJLCZOTCTHRJRHRQZKVCUDMLCAQPLIPSYXEIZOEFPZDOJIFQDXKXOUYWGPBQLRRLGMVYFANYQJSYNMYZNCVEQOINURHOVHYVBNRK");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EstimatedState tmp_msg_2;
    tmp_msg_2.lat = 0.991975374927;
    tmp_msg_2.lon = 0.993287232003;
    tmp_msg_2.height = 0.62123988681;
    tmp_msg_2.x = 0.957490781231;
    tmp_msg_2.y = 0.651940843982;
    tmp_msg_2.z = 0.775999845624;
    tmp_msg_2.phi = 0.702582546084;
    tmp_msg_2.theta = 0.140569757788;
    tmp_msg_2.psi = 0.770266273513;
    tmp_msg_2.u = 0.936551092157;
    tmp_msg_2.v = 0.536551216338;
    tmp_msg_2.w = 0.607821857501;
    tmp_msg_2.vx = 0.000101873422587;
    tmp_msg_2.vy = 0.138027088504;
    tmp_msg_2.vz = 0.569350416499;
    tmp_msg_2.p = 0.711656923294;
    tmp_msg_2.q = 0.109416531273;
    tmp_msg_2.r = 0.303525836389;
    tmp_msg_2.depth = 0.422423531723;
    tmp_msg_2.alt = 0.438356599988;
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
    msg.setTimeStamp(0.346094387657);
    msg.setSource(34055U);
    msg.setSourceEntity(66U);
    msg.setDestination(15118U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("FBHIRQMVFIXEBBYSKAAMCMDGMCUUWLSQNHRSOAHFZBXPSPZNSRTBXZPKBHROUNTOIVRMCMRWKZUVPYFGHIWAAXBJYHLKKFPTVXUFZDVQYIYWTN");
    msg.description.assign("PIVRALLQYJOZIEYPMQVLMRRFKPYDBUKDSJCTGOHGRCZQBPWBFANFFFASUJCTIDOTSXGNCRDQPNZKOTJQPVAEMMAKBKNLUGIVJLPXZPMYTJHCHJVEFNREBTZOIOQCFQETVBEREIUGJUSNFUZZFLENAFETOBCSWUONGGYGKWBYKDHSQIMCLPJ");
    msg.vnamespace.assign("TLGFJMFBGGEMJLUMXTFOEZXJPVQNPGOXULHAAGDXQDOVAGGJRGMAUOEVRDBTRLKHXXZLAIKSCNFWQCYBIUPHKIESOVQLHFOFSABOTNTTJSPNOKIBGZBJCHXHRSRAWIYWXBRBJOFQLYT");
    msg.start_man_id.assign("TBSVHLBJMJIGWNKALRUMQSYVZUVPSGLU");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("VBEFUSGZOYQVOATIFLZSUSJDGYEPZYXKFQBWWCLEMQMGCJGRTPFOTCBDXOZHPAPQTNLDPRNDJLWSQFOIWKZAWXFJYHMBVEBJHYZKCNRDSVADPUQKEXBGWHTFHMMXRCHNWGZIALZIRACMBRVTHVIJNOYGMSQITPIKRTURPPIORLHWXKMUANUMSYFWSEEYIYZKELDQAHBEECG");
    tmp_msg_0.dest_man.assign("OFYPOYSMLBHIDBUQXCOXSPVZKKXLAILNDIFSUYRBMYSIAITMTKJWMTMETHXCKLZTCELXNWTMSYJECEKROAOUCHUYHNLZRBQBYEBQFQQJMKNAAJMHKPDUOCICRPBTNLFAVVBZPAXOGUOF");
    tmp_msg_0.conditions.assign("VCOPOKABEXWNQDJZDSUMBDEDOIYWZHAPTCXXQYVDQAXRWXPEYHJPECNLQVDRWAHOLKEHKXOPVNPCUOGNVOLGSTTRBDQNAIYMLZYCPWMGIZJOFJISJQEJSFYAZHQFJLZWEALBXMUKMQWAISRDHXFVSMTAXTFCGSUOPVEKSMNVRZWIJHKXUBTZWGNUMRDOIGJGCLHBFYCEKLCJYKGUSVYFGWBRURMQKIFUNEPTNQPZIHBYTTGKMFN");
    msg.transitions.push_back(tmp_msg_0);
    IMC::EntityInfo tmp_msg_1;
    tmp_msg_1.id = 85U;
    tmp_msg_1.label.assign("NRRFTPLDUSCEVOFZYOLVKHXYBZXJZKFNGHHEAOPIHPJHEWQDGGIXIFOYKXUSGYVNOIUYJHCRGAFLSRIPLRBUWMCMIIMNTTSBYXANQTVWNXWSCAPWNUYDKQTYUNGOGLQCAQLJHKTAJTRYTGTRMIBNCESKMQVUXJKJHBCETLQXLMCGVRZMOXMFDAJSSKKYDZBVFUOOZPPEAHUQBWQLERJBPID");
    tmp_msg_1.component.assign("XPAKNBVEVKTZLBQHUEFQCQUEAXVFPHBMCCJINSFTASMQDCPOBJZEDQETBNXGRQDPXILRWKORRILWPZOGGOFBATMPJZJCHOJASXMDMNSDNAJVZZNGOVNEYRQRGVGIIKCJHUZLKAOEYUBYNIKLXWUPSWDRFYCMJTHXUTVXENOHBIFDHLSFCXHADPFWRSVVQFXYMMBJGWUYIHSITSGKTUQTPMYYUKWCQSMREZLOVNUTHZYAIABLLRGECKDDW");
    tmp_msg_1.act_time = 52143U;
    tmp_msg_1.deact_time = 11441U;
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
    msg.setTimeStamp(0.947589153845);
    msg.setSource(30524U);
    msg.setSourceEntity(187U);
    msg.setDestination(55831U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("FTYUACMUIZGKMUYHWUOSZBMDVQBDBTOFKJGXGMGDHYOOQEZPPAOWRQIIILDHXELOTVAXELRPOACEJFUXPGSFDSEKBXTNSBFNNKHROPCQRLQBHDNWALAZXKKCMFTNELCGRGMSISTZMNFZXHVNEUWNKYIMNVWJWAF");
    msg.description.assign("EPZWBBCXMQSLJQRDJRCHJDGZGYOUEINFIUELCSDELFCNFPTOHFMNBXHUBRENGWBYZWKOZNRVRMSEKFOGEBVIGWZPBCCVSKQTXJHWTTIVLXCGYYJQLYDWYQDZUKOJVKHFAPFIEMUYNYIQKIQXGUKTW");
    msg.vnamespace.assign("DTBZAXVUFAWJVXSLEKHXDJKVTPLVKFUPFMQEQYDTGSWCKURLMBLNLZQGHUDQZNOPJTCWGABAIBDNWYSHMZYHEGPYOFYFERXWQURIIVISDKXISINOEEPVTMXJBJRRGBQCJHNQPXYCTUAJXTACDWZRWZKANN");
    msg.start_man_id.assign("ERAKKJAZBRYPWQJZNVKOHNPHCQBIDSEXWMUBMLAUAEESEDCWNHVFMJIKYHFYSETNDNZCAWXOBPUOZOJGVAHMTOQJIQRRZFYGVCUDMVSXXRIMBZEUJFPBQDCPYHCTTMWDBFQIYXBQBJFRGPGGRWUIVADSKHLCFESFKIMTR");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("LEBANYYOFEXSUQAYVYNLHKEJHVZDUEAEMQFHNDWEYVGCWORSDCZWNKOBRKMIJZOABEVORXIAYFZDZTFRSCGPUPLDLSEAXCMREXKJLFEVFBQZNZMSQPKJRHQLVMZTGSUQKUAHHNXWUTBYIPQFAHNHJCWORHTJNUCGB");
    tmp_msg_0.dest_man.assign("UUYYCOQWYGJ");
    tmp_msg_0.conditions.assign("FGWPUOXSNJUPIZIWOCZBOQHHFDYPSGSBMRDONQBMNZKYFISKFEBPELINPTSSLBMZOZYUAITPUBHJTWWCAVHXNRUUVZUWQAFVHLWGTPVRHJOKMLIFESGBSFGTGYEPKMTRHCCLDYTTHISDAA");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.918763138066);
    msg.setSource(16717U);
    msg.setSourceEntity(237U);
    msg.setDestination(21842U);
    msg.setDestinationEntity(206U);
    msg.maneuver_id.assign("KFWTURIGVFNZJGTUSJPUAIGYJNTFSPLXZINWIZKCHMDGPFZMWCJOPSMLQZVFSQHXHHEKICZLUNMYGSLBRKKBYQVTMOYVRNSEYFLHWBXSMTNUUXJOWBAMEQKDXANEOINXCOAVASLOTBPZUIKEEBWSQEREDHWMGRVPHJENHFFXTMXHRYOXDTJHLZRGWJQDUIDVIABLQFUYPIEOWCGXYDSRAPJQRZVCZCWYKQDKKCBLURAB");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.96628698023;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 43669U;
    tmp_msg_0.custom.assign("HTOEGBYJXPNOWJQUVCBOACMUSUQSJQIWTBNKREUFVWNIUYZCUSZVXAYUQPNSXZIULWMEMHXVYAHCJWJEHSWOSMPGAAYFPRZFLGNVLZCRITRNTLWSYFCVYKUMVSLGEXMINKZIXEFQAMBDPXDQHDJXBSKKNPSTIGQAFYDWPYAZQCDJFMENJZUDJOTHWIBZMVLAEKFPRTDOCVQBHR");
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
    msg.setTimeStamp(0.193733867927);
    msg.setSource(5908U);
    msg.setSourceEntity(115U);
    msg.setDestination(47057U);
    msg.setDestinationEntity(137U);
    msg.maneuver_id.assign("RFIZILCATKPSVFCCZEUVUXAPBPLFPYPYTYKKFGEOJBTJIQMBPGRCFLDSXEOOHMQGXNXNIKCUDIQPVKVZPCA");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 27787U;
    tmp_msg_0.name.assign("FINMTDMNQIGLCYMXGZPIRZZDCWXNFGFPZZJMHLZMGRIHKAEWMVFOXADCSDBKTDOVJVHVYEWEENYMJQPRODBHELUBJJZKNLPBOTUBEYCZKVCIQXLQNXOIAMHRUYXEXKWULTVLGOSXUFNBCJWDGEFLHHJUYBWNRSIOBCBSLCMUQIRCSUJKATPVDQCZVHSATQDFTWIJTWBXTVWJPGVAIXYUGEU");
    tmp_msg_0.custom.assign("FHRDFIQOEXRAYKUAKBHVHQYAZPFUBRSUDINJMGEKGUVMOAPDBBNQACJSZWOMYWPMCIXQSFTVABJJROPKQSKRGBNHVNDFWALXJCNCIUWSYVXOKSZLPBMPXWORQTGPWIWBRGYFUFYU");
    msg.data.set(tmp_msg_0);
    IMC::TeleoperationDone tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblEstimate tmp_msg_2;
    tmp_msg_2.beacon.assign("GZMXSCIPGTAXZMRISCPSTWDTKIQWOAIHWYKBVXIIZJKUUSDUYVBOXUCKMDDLCJXYZMFCVCMOZKDMEWANNWKSJBORSTDPVCQSPGYQHCNILTQFPUQKYNBEVVPVBPEEBOG");
    tmp_msg_2.x = 0.944814267621;
    tmp_msg_2.y = 0.943272175529;
    tmp_msg_2.depth = 0.184937397746;
    tmp_msg_2.var_x = 0.858367909517;
    tmp_msg_2.var_y = 0.614572249223;
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
    msg.setTimeStamp(0.742073724075);
    msg.setSource(570U);
    msg.setSourceEntity(144U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(217U);
    msg.maneuver_id.assign("OKEDHZIOAMBRIIDWUXOTPMNMVPBVPLCJASTWFVSSASCLPXWTCQNLXDDCHWWHKAESRSZRDKYBXWVBYQPHQFGCIHONJEEBBAQCNUTTICRMJKPFAYIODHQUTJHALCAZVQVCKRBQZMZBFLDZPPFHZMKNUJHMGULDVXMYINQGVXKUEGMEIUYSNWXNSKJXLZXGDREFYTXGGHZTBJVNOKCTPRRFYI");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.847323442185;
    tmp_msg_0.lon = 0.353468580917;
    tmp_msg_0.z = 0.664513452521;
    tmp_msg_0.z_units = 111U;
    tmp_msg_0.speed = 0.248404440363;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.custom.assign("FDGXOISYIQGKNLZSMZDKFWBHYRNLIMRLCEJFRNMUEMVDKERPTFQZPTJRJHBSSVAGDSYXIANEVVKVBFOLNCGYHEBSXOYJUASGYDFGSROHMVTOIEODGUJKNFXAHUKQPWNRICJPWAXYDQZPTVAZCUEQWCUTLAYHNALPCXFILAQWRUJWXAGBZKFTNQCMCQTBTXMFVDLJDMHCLKMEJKPGXBWTZZMHOR");
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
    msg.setTimeStamp(0.375262315201);
    msg.setSource(12871U);
    msg.setSourceEntity(52U);
    msg.setDestination(10194U);
    msg.setDestinationEntity(181U);
    msg.source_man.assign("ZBVGFITZHRMBCKOZCHABPKLCLGATOBBZOJFLNCOWJBDQCDEXKZJWM");
    msg.dest_man.assign("FBEVTXQUBRZPKLPARWAYOLFELSRCBPGVSBAGNWJDIGOGBDMJKBJQOWIDLBUZOEYSRGLFSTXAZKNDNPYLBYNHOEWDJIVHUAMEKVFFXTGENMFSTVNODUNSCAQSJGYTCWCXZLOKPOVKDCKFTGQYWFMJDLZ");
    msg.conditions.assign("KGQRKSVNZPXHEMBFOCXAMRHCFZNFEUMPDKEMXUAACYUSQUSVLKUBFDRTSVXNPLKCRMZQMXBOJKIEBVFYKNQBTMWOYALTDHTGRPXLOHUICGJYZGFXJWHDIBOFUQDUSRNRJWBGOJXOJCFHLAKYZEYURWQUVJXWWPVCSBGDRPGQGYNDIZNPSOABQETSZFNOEPVZMCWIWJTLWMTTLDTIQLCHVGZIXNAFWOMDS");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 24817U;
    tmp_msg_0.lat = 0.577556313915;
    tmp_msg_0.lon = 0.265455640416;
    tmp_msg_0.z = 0.620050562885;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.speed = 0.594388178528;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.roll = 0.399738737686;
    tmp_msg_0.pitch = 0.823891549278;
    tmp_msg_0.yaw = 0.526376442271;
    tmp_msg_0.custom.assign("OREAOKYYXUTNXMHYZFYDICCAWTLFNSXEUEPTJMKDMVXTCGIERDLDIFDGHQVTUALLCMYCZXRSYNJIIANMWOBPUTQQEBOZDXLWGBFOVKAQZMQPVBPWXKLIDGRPGFDQKGUGEBBPBSCAWZAMVXJBWCSNUZIVREYTWSYPAFRJUPJRHWHMDNVNU");
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
    msg.setTimeStamp(0.997692758491);
    msg.setSource(33985U);
    msg.setSourceEntity(187U);
    msg.setDestination(60319U);
    msg.setDestinationEntity(248U);
    msg.source_man.assign("ERKKVYSCIZECDIMGWRKVEMENFTJSVJQFTZBZBRPAVOEUSBYHDWBLKQBMWCGWWAPHTHSQGFPVUADLFECSIPOSMZMHFLKZJZEYAPUABIIJUNOGHXOUEEPWEOWNQLXXNKXDKPIVBXLTCVRPSTCTUXHGQLHMMGAJJYNQDGOFTYOCYBJMDIHDZZKRYOXJLGGQCFHKTDPJNBLYHYJKZNRAWRRIIF");
    msg.dest_man.assign("DXSRURBVZYDRXFSOCMJMUCDONEGEXKJXFVFLJCKEKGCFFZCNIAOIQVWPTHTDUDPNSUYYPEYTEMLSCIAUBOWZBMTWRGIYGBGAAQBYKUCWPXSGJWZEOYEKZQZOJRPDWAMRFQJBFILDKMWLHNHCOTTTHHZUTSCIORZIIMYDGJSQMVANZPSYUBOJLXHUQEA");
    msg.conditions.assign("MTQZGANWCDNAJLKNBWFKKKRZPCOOPFRQEDPSARULHAHW");

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
    msg.setTimeStamp(0.469176799771);
    msg.setSource(13164U);
    msg.setSourceEntity(53U);
    msg.setDestination(62445U);
    msg.setDestinationEntity(152U);
    msg.source_man.assign("JNNOSDZOKCCVACEWREXJNLNSZUZMCDHHJENHUHATFPWLNZISJMDPJAKFGBNHSQVCTTTVQBQORUILDRIVIWVSFXUYRPAEDSMSYNKEMYKEWTUKELUXZMVMSKPFKQVPVWCAPWXHJQGNARUJYXFMOQKNDZWBIVJPQOTGROYTDASUPOLZMVELTDIWFEDQXQGOBIGGH");
    msg.dest_man.assign("CFZEFMMWQENBCGDKLVLIHSLIVJVVDBFJRAXZUUHOZRIVFCJZPJJEYUSQIH");
    msg.conditions.assign("OKMXBRNGJVYZJUOWDCCMWBTQLXVBUEXXALDULHXGFNTRVFUFOADMPRYBULAUQNTTSISNYUZZHWIPLMASGHIEJGPOFGLEKTHPTJNESIQBCPATMCDGGPMLFDWSNYILAILJEUVQKZ");

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
    msg.setTimeStamp(0.358168269002);
    msg.setSource(57132U);
    msg.setSourceEntity(201U);
    msg.setDestination(37828U);
    msg.setDestinationEntity(244U);
    msg.command = 53U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CBHKODPXYBQBYARQPMNFXVWGWHFZIAJOHKHFZMAJADJXNIWMRGIZNBCUCIYOCPHLNTITFBIQBWDAXWDPODFMAAZJYWZOXVSRXEBVEPPYEOXSEQPEWEZKZDNTRXCGYCZLRLDQTCCDUHFNQMDUYLWKSYPCSKTHGSYKHGWVIGYJKMEDROSTMVXUNUJBAJLKVQERFJONFESPUOGUFJVRWQMTCJHTLQMKBGVUIIOGERVL");
    tmp_msg_0.description.assign("REMIIWVTZUQVHNWLCKZKSFWLLZDEPNQDWBXGSPNMCOVSJWCBFDIAUYOXYZRSVFILCQLZLGAWUHXSBPTCGXMOGYTRQFCQDZJJNUQFWPAMDOAFIMPSCWHCFPTABJEVPUZHIDEBQOKOJJEMEBYXSHNUDTWLDGXRONTJIKMEILMBTIYSUGPDHATHAVTBMCYZOSNGSGKQPKYGYXJJUPYRAXXWBEXHRFUKENLGFVZQJRZCOFRLHADRKTNKMBOVVNQRU");
    tmp_msg_0.vnamespace.assign("DOABWPRRMYELQRZFIHIEJCYOGVGSPQQLECHYWVGFIFSFJXCXKWQRUTKRPDBNEUNRVRJAPEZDWMOYHVMJCYGXLSTNDWDLAOHIOZEIJNOKSIMAMWTZVLEXPVFMGQBQZCKD");
    tmp_msg_0.start_man_id.assign("MTBLUKZYTGLDDDKSSDXEXCZEYPTQGBPHZYWBWINFGUYWOZVJXKSZGJBNXXHVOATMKLHEJNJZWCMCKSTFMLPCFQOVDAENTGHGUAWJFIRJNGTBVICGLYEYLBOMRPMAFQUCSYZCNHWIMWPIEHRXZDRRHWPNLALNVXDHSUUNJXXHKOYCIGVUQYTTDTQUFVPZSYSDCAPSMEULBQQBAORQBEJJPZRFOJOFOEVMKV");
    IMC::CameraZoom tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 181U;
    tmp_tmp_msg_0_0.zoom = 49U;
    tmp_tmp_msg_0_0.action = 5U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.678428869426);
    msg.setSource(37127U);
    msg.setSourceEntity(102U);
    msg.setDestination(57383U);
    msg.setDestinationEntity(64U);
    msg.command = 146U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EXFECENIKUGBRDQTNZNPGYVTBTGTNHWIEOKGYOFYVDLONLBJACADHNXHIEEEXLAWAYZIIJYONSWDFJMIZRZYSEKUCTZWPFMFQHU");
    tmp_msg_0.description.assign("SVOTQSEPOUCLQXPDWNZIYDNLUTHRFESBNGNXJWJPHXOGADAHEDHNXRHBFMUAFCHVBSQWQJZDGQXZKLDEQBNJZVGNMFYAYWGORRREKREKMOIIGNQWLYIWKTRMVBDMVUTLWNUXCZJSMPRTOLCWAHEKKCYAUYIFEVEAKTSGBCIVPRDHQVGKTUJIJGBXSZPZHUSJVZQWUAZMLCOTFM");
    tmp_msg_0.vnamespace.assign("VDBLCFCWKGZPIDUEUUBTWIZVTZEGPSRGPLSALHJIGVRWFWDZIMHKFYEZKFULZDNOELNOJLYXJQWQMTIPVX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DFMWIHUWFZS");
    tmp_tmp_msg_0_0.value.assign("RLYJCHKSLMWCWNYSGVPNDGLTPRHEBBQJTDQXHFBGEUVHRKCLNVIBXDLZTAHCSOMZVYIVNQATDJOTBASJDRVOKHFITZRXQPSFUHCEGRNWKAUVTNWYMZUPEDXYZPUBAXIAEMUPEPZQWSJGWJKIFULHZZFOFWRGELGCGGUIXCAEKDMOCKBNQPLNLYMXARZUXSONLEEOGWDHFVOFFMDWVQPIQVICOXQKMMDUIPFAYRA");
    tmp_tmp_msg_0_0.type = 193U;
    tmp_tmp_msg_0_0.access = 204U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BEGVWDIHDTSIEVLWUSIZSXMBSNMRQJDVKICWBUYGTPZNSNMJIHQCHNBYKJTCFXSFPYQOAWKLCNFPLDQVEJHRUZNMG");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VYEVNRYYWWICZXRHMGPPESJKHKZGQOCRFOLOESOLCOGQGCSHQEKTPJGKJKJAGPIELNFZPPCCAXDINBBNFFUKSXASIYAYDNGWFUOQYVRFWSRHQNHZUVVBDMMJNDVWBVDMLXKAODHITAKYTTUZZPWFIRSNPJCXLDUNJZLJHBWXUZMVHLUUYXJVDCCXQXGETBVQQIMNOLMZOTBQGABRKFALHMHYPWBQWMZUITXSMSO");
    tmp_tmp_msg_0_1.dest_man.assign("FOEORWKAKQDFTUNDSNPBXIHQZSCTUGCHXNWKEYESYPVEFQNEOEHTCPYJGRIRBOZDWOBAEZHXUELWZFNOVJLCRQLEDLTCAJPKSVXTLFQUPFGQNQIMFAIURJVFUBHKYPBCJ");
    tmp_tmp_msg_0_1.conditions.assign("IKDLOUOVYONOBOGTWVKEJSYZJVMUNCDSERXGSXZTEZDQKDTMBHHFZXJRNJNVFWEAYRCAOMCFTELUBBXHFEXIVEYLSISDMUMHILKVAIMQPWUBQAOSIJSXHWRMRYVGTTKGFXCWFHIPJQADYNKOMUZPSWPTLRFHBJIRUKPMGAVGQGLBOBYQCJCATW");
    IMC::RawImage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.width = 14848U;
    tmp_tmp_tmp_msg_0_1_0.height = 48596U;
    tmp_tmp_tmp_msg_0_1_0.channels = 177U;
    tmp_tmp_tmp_msg_0_1_0.depth = 241U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {-103, -93, 121, 33, 100, 114, -58, 94, 114, 74, -37, 31, 86, -119, -124, 75, -113, -76, -29, -13, 51, 125, 32, -71, 21, -83, -114, 77, 84, -23, 16, -7, 111, -122, 114, -33, 7, -31, -88, 3, 19, 52, 87, 125, 103, 65, 76, -16, -3, -25, 57, 126, -73, -74, -99, 97, -82, -27, -3, -83, -8, 78, -99, 43, 20, -113, -13, 77, 114, 21, -114, -101, 92, -110, 3, -111, 62, -81, 18, -38, -75, 94, -55, -87, 48, -94, -125, 47, -72, 80, -70, 121, 124, 72, -47, 37, -121, 118, -56, 73, 56, -15, -115, 6, -31, -123, 19, 23, 35, 75, -57, 61, -110, 24, 100, -80, -8, -127, -119, 104, -28, 96, 51, 120, -4, 23, 110, 61, 24, -86, 92, 47, 67, -89, 100, 41, 93, -72, 115, -72, -43, -18, -38, -44, 27, 103, -84, -86, 27, -115, -92, -21, -71, 101, 26, 69, 114, 93, 17, 94, 10, -111, 55, 81, -119, 107, -33, 93, 56, -101, -79, 53, 6, 102, -83, 100, 39, 38, 29, -85, 45, 42, -112, -82, -92, 6, 110, -94, 63, -95, -12, -96, 67, -106, 20, 52, -26, -89, -32, 124, -29, 52, 88, -47, 113, 71, -109, -3, 112, -55, 68, 25, -20, -94, -46, -112, 126, -101, 110, -13, 36, -128, 126, 43, -89, 50, -13, -109, -93, -88, -55, 27, 11, 55, 109, -100, -22, 101, -12, -128, 112, 44, -127, -2, 32, 103};
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
    msg.setTimeStamp(0.429079042239);
    msg.setSource(36852U);
    msg.setSourceEntity(198U);
    msg.setDestination(47054U);
    msg.setDestinationEntity(115U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BFIBIFXLPZQDHLCDPSUIYIBZVCAOVOJQSDGKPLCXROACGNSNMZYTJALMNCUDUSDXBWWUNMQAUCTGZJFUVAXZRMRQOQVQEWYHJYNMPAEEPFHHBW");
    tmp_msg_0.description.assign("XFDJDZOOUTZBDBBWNCCARBHAHNCUXQKNZKGQTOIFYCCYWJIYAOINSOZBXIUOMGWSIVJZCTMAXWNEPPMQWYKMPVSGHYGHLJJRJDEMQUVJDQTVTE");
    tmp_msg_0.vnamespace.assign("BCZDWWVCIREUOJPMHAKSMJGLVXJIMNEJHBJDYLDMSBANNLAIZIFIWQYRTEBFYGSCURNSLEABDOLKUCQKWVQAKTBWMAGYCZXRZKHKQAWHQYZZGODECFESUBQURGYHPPPRYPGJTBXJKRASZLCMGKSZLVRJTBNPJVVMVZHYPUSOHSYPOOAYFDIUNEOWRNVHLFIXUJFHXATOOC");
    tmp_msg_0.start_man_id.assign("ZNEFTHHQHUCDUXHWKPTOTVTBKVLGNZITCRCFJXOXDZMMYVGVBPWREMDWALIJULORHBBLYUJQWBXIMEWQLADGINEZVYZAAPPOLACXYEZHMFRIJYQAXJUKRESQIILDJQASZOBEIOQNCIUJPSXJDHMXOGKCQRHQNYWSFLKUNFYCMDXTRPAKVMRGSKQBMSCOGTCK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ITSVJNHTKZWBQMCIHGEHGXMSSWYJNFURIMAWNIJCOMHNXKLJLDSOWQFRMLYXSTFCRILFFWZQAYVVTOSRPOCYEUTLEZFWMJMBYV");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.962209215913;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0472974697093;
    tmp_tmp_tmp_msg_0_0_0.z = 0.658696777648;
    tmp_tmp_tmp_msg_0_0_0.z_units = 84U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0570220644051;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 101U;
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.514269087322;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DWEUGDIFTSI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::AllocatedControlTorques tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.k = 0.16286814216;
    tmp_tmp_msg_0_1.m = 0.523005027787;
    tmp_tmp_msg_0_1.n = 0.443236951296;
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
    msg.setTimeStamp(0.964906903605);
    msg.setSource(21787U);
    msg.setSourceEntity(180U);
    msg.setDestination(55087U);
    msg.setDestinationEntity(145U);
    msg.state = 1U;
    msg.plan_id.assign("WMKWRPFKFVZPLISVKHQXJNQNAULTIXALANGGLPHTQXCWYFDAXPDXIPEABJIDTIWIZOEUEVKVGOIVMFUDRNFCBCFJSACOSCJYFSFUWMDODALYJXMYRYZZHGTLEZUWERYBDLJXXGKOQRYZKHWGFHHCQOMKUESUQNYEEOQVFPIBDKOJPCGSNZIEVOKSQTDPBMXQGBWOJRRNKZYPHINZCMSRVELRMBUVSGBVDWBAHQCTLTTZLJAMUJYHGRTS");
    msg.comm_level = 240U;

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
    msg.setTimeStamp(0.682904496561);
    msg.setSource(20783U);
    msg.setSourceEntity(77U);
    msg.setDestination(37648U);
    msg.setDestinationEntity(129U);
    msg.state = 207U;
    msg.plan_id.assign("HSBTBGUEXGXROJEWWQMUNAMLVASSZKRSJJTTOQMLXNANFPGJMXRBPSUWOPFUNDUIMAYZAGESJXSEIIGFAUQRYBFSLFPCKVCFBAZZTPYOHNNXETMDREJCRCDOVIKHCKLCWNDNXZPHGDBNHIPKYZDUIPVRSWKRTQCFZLZEWGWQTJTBYFJLFLLKTMLUCCOHPFRVDYCQIHWWNGGDZHMPEKYEOAWAOQKQYOYOAULBVVTQBVDXGXBIV");
    msg.comm_level = 197U;

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
    msg.setTimeStamp(0.538491126985);
    msg.setSource(14642U);
    msg.setSourceEntity(94U);
    msg.setDestination(5226U);
    msg.setDestinationEntity(156U);
    msg.state = 56U;
    msg.plan_id.assign("QLCDYMQVQYUUOWZXZDBQJLXFMSSYVYIRACSHLXGCEOZTXXXZAYREKUZYBRGSUEJVOTBKRDUQUPEPMNIHXVOLQWWNXEQUMMEFTEJBPVYDDFSEWLWSEGT");
    msg.comm_level = 231U;

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
    msg.setTimeStamp(0.649607616623);
    msg.setSource(46728U);
    msg.setSourceEntity(82U);
    msg.setDestination(42296U);
    msg.setDestinationEntity(59U);
    msg.type = 186U;
    msg.op = 229U;
    msg.request_id = 48416U;
    msg.plan_id.assign("GOVPSTHSGEWJHMNFOVSXNZRVKLSPPVOJRNXGMIYBSOFXNGFLFOUVLTLUTQIBOIRDPJRBRQCRCJMCISJEWHCCJJMSYASM");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("XPMRIVPGNTOJAFISUMUWDELDUNROCIQDPANPYFHABETAZSEPJBIDOPUEZQOOCJCZVJQGFRHMBDDUKEPZYLTCWKARSGXLYMVQN");
    tmp_msg_0.value = 87U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZTVUGKJWANHQYVTGAXMPCURNFYOQZZJETHFUSVWRSXKDHGLHQPKILDYDGCUYIYMISPVBPULAEPPQOFVQNHMJCYPRXMBEVMHRUWBREHOZCCEDWOGHQWIZGBXZFKRUXZLNEJHFXUJREBIINAKMVVQF");

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
    msg.setTimeStamp(0.713573535664);
    msg.setSource(63594U);
    msg.setSourceEntity(225U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(34U);
    msg.type = 18U;
    msg.op = 151U;
    msg.request_id = 15494U;
    msg.plan_id.assign("OSUBHSMCGDHBOOPEJHKYOVDVEPKMCVJAKKMINLAQQAPBIJFZBKRSFMTWWGEXLSNWULLWLUTIYOFCKYFWZEIRXPVGHHTSNZWCRGYQJKLVRYGEDQMSCHZSLTVRNIPVGIYRSRZ");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.466098290557;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HTQVODNNZDPULXTNWWVPPJDOBNPQKAHMHJYFNVZSXHAAMBREQTLKEYWCBEQMETICUYMZEOYBIIGMHAZGRXRDAXCZSEGTVXGESUXLJKRFRBRRHOMULYELNQKBQSXDTVFCTMAZSHYSIOLKPWIWUOVAPJISFONEGBTQGNYLSWPLGCWCZKTCSWKPZXEJTDJDAFNKPQPCQZRQSBVC");

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
    msg.setTimeStamp(0.105950639372);
    msg.setSource(55535U);
    msg.setSourceEntity(166U);
    msg.setDestination(5234U);
    msg.setDestinationEntity(59U);
    msg.type = 127U;
    msg.op = 214U;
    msg.request_id = 20468U;
    msg.plan_id.assign("TKFUCWBNEIWZFDAQILQEYGTQXNMKZUGNHPYWKAYIKPSMTQZONNNLRDEVXLHUKPUEZTHOTVIGCFDUNPUOHWJOJACENPDXLJOXGAPVRBKYWBAQVUETCBTJMFYLCJSGRRORMPOEYDZZNTIUVWXHBQFIWQCAXMZWSXAHFXFSROATFXRLIYLJLHZMSDWSZAC");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("TGVZTYWPMXIYHXLIHXXODAOESVMVHNZYRJAUWOLOUDEWWNHCTPSLILILXYOLQADNCNFJFSCFHGAEZFCMEIWBRKLOKDVLJWXVEAIRTPZMUAOBPMFRJQKURZSBTQPFHIFZUZODTQWAZGEKDANXMVCSYBPLPEVANRYXKQCUCYPWIGZQIQJMFBSEI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YGIKLASVIDRGROOYQCHUDEIOWNTJUANZ");

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
    msg.setTimeStamp(0.116508835668);
    msg.setSource(8855U);
    msg.setSourceEntity(165U);
    msg.setDestination(32086U);
    msg.setDestinationEntity(98U);
    msg.plan_count = 1406U;
    msg.plan_size = 3419528450U;
    msg.change_time = 0.347545675893;
    msg.change_sid = 12618U;
    msg.change_sname.assign("OJCUGKXXJTWYIEGBAWGLPOLVQBXKUQDABHVIYBDJSNSXLQJZZONGRFREPJVTGQQCWSHUKNNDIHPALFLWIQOERJVWQFHCLRSZMSSSCFYCECEUUGGKLAYTTHIGZQOMHFPBMHDWDMDXROCPCMMXLPEVNPBVDTKSZMYLGTVTNVRROHWDAPPSNOBJAHJUFJOJXNAKXNMIUIUTTMXBZUYIZYFZTZP");
    const char tmp_msg_0[] = {-116, 17, 93, 82, 90, -117, -67, 105, -102, -99, 111, -17, 39, -30, -80, -72, -72, -37, -46, 20, -60, 36, -111, -41, -97, -126, -56, -29, -21, -8, -22, 75, -15, 37, 63, -2, -32, 11, -95, -14, 118, -126, 10, 126, -110, -18, 20, 82, -27, 2, 43, 104, 38, -101, -5, 76, 114, 71, -19, 96, 52, -26, 83, 7, 114, -113, 71, -89, -76, -105, -9, 27, 72, -6, 49, 37, 22, -24, -115, 95, 35, 49, -75, 115, -59, 4, -1, -3, -112, -76, -117, -88, 61, 112, 122, -63, 6, -70, -72, -5, -67, -75, -52, 24, 3, -32, -44, -17, 112, 99, -80, 43, 69, 3, 49, -100, 45, 112, 24, 1, -29, -118, -36, 100, 79, -100, -58, 10, 4, 80, -51, -26, 109, -74, -8, 70, 61, -16, 78, 78, -90, 26, -117};
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
    msg.setTimeStamp(0.164728596021);
    msg.setSource(65341U);
    msg.setSourceEntity(85U);
    msg.setDestination(55964U);
    msg.setDestinationEntity(118U);
    msg.plan_count = 16956U;
    msg.plan_size = 3746746907U;
    msg.change_time = 0.447373011401;
    msg.change_sid = 8890U;
    msg.change_sname.assign("MCHHHANWWMBBTCPTHDLSYLFUFYPFZBZBRJXHITITUUIFUOJGKGDZSVBXSJHHAMPWEDZOCKCKETTAIAQEFWXMZKQOVQCPMBWVZEYUESPNCFMKYINQEAOLSMTKEWMDJVKPLZILAREQSYFKXNSPVRGNTWXOGHQUIGXFVOCVJNHZRBBPGEAWJRTOMREIQUUXQIORYRI");
    const char tmp_msg_0[] = {22, -12, -100, 32, -103, -108, 61, -114, 98, 32, -17, 124, -127, 56, -22, 125, -42, 56, 89, 126, 24, 73, 101, -52, -21, -104, 108, -71, -94, -15, 36, -17, -33, 43, -16, -45, 1, 48, -63, -66, -2, -70, 34, -49, 94, 21, 86, 67};
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
    msg.setTimeStamp(0.0695301937676);
    msg.setSource(29449U);
    msg.setSourceEntity(100U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(117U);
    msg.plan_count = 45737U;
    msg.plan_size = 2455363809U;
    msg.change_time = 0.726143078953;
    msg.change_sid = 22719U;
    msg.change_sname.assign("EABQXVZTAFIDKYJGSFJLDGSUUMMORFWDQLOWKZVFZCWRLQBYWWJKIIJLRHRJQTVBCJZE");
    const char tmp_msg_0[] = {-67, -86, 35, 120, -89, -120, 3, -61, 10, -78, -114, -119, -16, -99, 8, 5, 29, -59, -26, 43, 67, -65, -127, 17, -87, 16, 108, -55, 111, -70, -93, -26, 105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RMPKEYABVMTBSFABWZOBPLWUWVLCRYUMWQZEUKCIJFUWPHYNKJFRCHDNCV");
    tmp_msg_1.plan_size = 56335U;
    tmp_msg_1.change_time = 0.691894284371;
    tmp_msg_1.change_sid = 52837U;
    tmp_msg_1.change_sname.assign("HCQDHNZNDCZAVJQIXGRAHTBLEIFBPPXYPXVXWTYRMYXEWQITLPZKRQGOFSPMXCUVEZBUWG");
    const char tmp_tmp_msg_1_0[] = {5, -101, 90, 57, -62, 60, -30, -79, -109, 105, -71, 108, 122, -70, -41, -49, 72, -109, 39, -106, -7, 43, -65, 62, -59, -30, 37, 8, 23, 72, -55, -110, -96, -93, 54, 94, -128, -80, 1, 25, 114, 105, -49, -8, -35, 100, 120, -99, 125, 23, 28, -104, 77, 81, -44, 20, -71, -126, 0, -127, 81, 83, -71, 13, -48, -14, -94, 113, 88, 104, 82, -111, 122, 1, 58, -127, 24, 17, -104, -18, -96, 25, -4, -56, -48, -94, 57, 1, 60, -22, -64, -27, -81, 64, 22, -55, 82, -22, -32, 12, 0, 74, 104, 6, -106, -30, 48, -99, 107, -97, 118, -10, -61, -76, 50, -122, -76, -74, 99, 33, -75, -35, -6, -18};
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
    msg.setTimeStamp(0.252189073486);
    msg.setSource(29609U);
    msg.setSourceEntity(161U);
    msg.setDestination(36595U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("JODEACIDWAMNZUVIGGXAKLYHTONIFMWMWXZGCZYQXXVVKMSIAUGHNCRZUQJWBTJNLGVWCPCWFRUTRMFEPCYAHDZPSXUQETUROIOKPYENBGQUTLQJFWNLCZPMWAEKXSEWNLHDRQFJKVBKVXIQJKPBVTFBIYVYWSOSMVBDBSOTSTHPEINBFTNSQDPHSLTKJGJDCGBL");
    msg.plan_size = 25367U;
    msg.change_time = 0.250244985205;
    msg.change_sid = 57370U;
    msg.change_sname.assign("LJJSCGPVFRUKLWHMOZIFQBRUZYXFPQZTDEMPLPBFGBCVPCXTCYXIEGODDNLRPKWDAKZOIISCUFPNEXQVSJTRVWEWTQHJRMZMWONXBCUCAXPWUCRYNAAGBUXARNHWXDLYYQQCFSCNKVUHLXSPGZQXKUVGKGTWOOS");
    const char tmp_msg_0[] = {-26, -121, -12, 14, 96, 17, 1, 23, 95, 93, 23, -26, -108, 98, 73, -49, -45, -58, 22, 97, -72, -9, -24, 83, 14, 3, 104, -83, -97, -116, 99, -67, 0, -95, 97, -79, -6, -83, 44, -114, 36, -58, 94, 14, 92, -52, -47, -91, -23, -23, 97, -41, 125, -39, 71, -78, -127, 50, 79, -37, 108, -82, -41, -54, -76, 59, -20, 39, 118, -74, 74, -96, -25, 50, -24, 4, -46, -67, 81, -124, 95, 93, 56, 117, -100, -29, -118, 97, 106, -70, 110, -2, -115, -29, -105, 107, -83, 125, 66, -10, -81, -20, -88, -28, 79, 85, -123, -76, -18, -18, 22, 107, -121, -62, 106, 20, 44, 120, -80, -79, 120, 6, 74, 24, -95, -16, 86, -70, -38, 87, -65, -83, -114, 1, -113, -80, -70, 101, 44, 48, -18, 55, -123, -92, -126, -2, 71, -90, -128, -19, 101, 72, -120, 90, -110, 18, -110, -41, -120, 15, -89, 112, -103, 104, 16, 119, 80, -8, 60, 27, -54, -72, 39, 124, -22, -58, 112, -19, 68, -107, 45, -56, 73, 48, 67, 62, -119, -119, -122, 78, -118, 76, 34, -2, 30, 81, 5, 103, 61, -34, -15, -36, -47, -15, -74, -82, -112, -53, 96, 74, 16, -34, -123, -64, -128, -123, 122, 82, -3, -98, 70, -112, 53, 2, 77, -29, -111, 30, -107, -108, -116, -44, -78, 83, -128, 102, -46, 67, 103, -61, 68, -121, 1, 117, -12, 40, -115, 74, -60, -128, 94, 47};
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
    msg.setTimeStamp(0.407447144881);
    msg.setSource(58319U);
    msg.setSourceEntity(207U);
    msg.setDestination(13391U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("QPWFRWFJWHALKXXMPBOUNY");
    msg.plan_size = 15688U;
    msg.change_time = 0.693717640585;
    msg.change_sid = 27076U;
    msg.change_sname.assign("KXYDJIPWRDHULJNCYUQSKCIIVVMIPBGCZAFLVLPDGRVXYLKLFUBAVZQJGSKAEDKHZHNRONUOOPOZLTGDCJGKAWWBITQBMYSX");
    const char tmp_msg_0[] = {26, 122, -31, -90, 24, 81, -28, -56, -66, 11, 114, -43, -105, -103, -73, 13, -94, -15, -73, 37, 119, -50, 61, 88, -88, -65, 101, 91, -14, -103, -7, 82, 51, -57, 59, 42, 8, 47, -31, 45, -127, 26, -66, -93, -24, 103, -120, 80, -53, 98, -56, 103, -108, -4, -35, -126, 8, -128, 69, 15, -10, 4, 64, -95, -46, -8, -4, -125, -16, -25, 49, 12, -37, 103, 118, 37, 119, 59, -85, 102, -70, 5, 58, -17, -112, -120, 86, -105, 49, -13, -85, 4, 113, -24, 37, 89, 41, 12, 116, -23, -84, 124, 67, -18, 33, 35, -43, -76, -93, -62, 74, -32, -43, 71, 117, 65, 27, 63, -12, 7, -47, 51, -113, 37, -89, 21, 85, -100, 109, -1, 69, 122, 58, 64, 30, 107, 38, -45, -83, 61, 83, 56, 11, -38, -8, 65, -23, -100, 41, -51, -18, -41, 99, 21, -46, -85, -20, -16, 125, 124, -34, 26, -29, 72, 120, 55, 2, -116, 123, -19, -13, -66, -112, 68, -80, 123, -122, 19, 37, 74, -35, -94, 21, 126, 16, 79, -45, -64, 108, 116, -31, 105, 75, -60, 91, 24, -110, 125, -85, 11, -21, -92, -13, 3, 110, -38, 10, 122, -110, -126, 95, 22, -5, -59, -16, 98, 68, 44, -46, 59, -25, -7, 34, 98, -55, 77, 113, -39, 33, 16, -79, 23, -124, 12, -29, 42, 61, -112, -63, 77, -69, -107, -60, -120, 4, 118, -75, -50, 77};
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
    msg.setTimeStamp(0.793648223452);
    msg.setSource(24378U);
    msg.setSourceEntity(4U);
    msg.setDestination(43653U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("CJIADXWYVPFYNXELJOLRSEBBIZK");
    msg.plan_size = 24992U;
    msg.change_time = 0.58861384968;
    msg.change_sid = 36386U;
    msg.change_sname.assign("EGXPYAMORREXABTTAFYUSCTAIBQORJIFTODPEUHLDINMAQDGVKMZPZLEZKQSZTPMISCCWJJCPIBFSMSRBRNPHHIUJKRKGORQEYDNNLUUKNWDELDEDCBIJBPFRLELNBAKXNFQGSKDGOTXMHWZGPUWUXOYTDNJV");
    const char tmp_msg_0[] = {11, 104, -41, -74, 47, -77, -115, -74, 15, 104, -5, -76, 7, 101, 39, -3, -67, -41, -110, 126, -44, 79, -58, -30, 80, 23, -86, 0, -9, 118, 45, 12, -97, 115, -6, -64, -114, 30, 41, -74, 85, 43, 109, 46, 8};
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
    msg.setTimeStamp(0.317845015035);
    msg.setSource(20287U);
    msg.setSourceEntity(125U);
    msg.setDestination(21937U);
    msg.setDestinationEntity(37U);
    msg.type = 42U;
    msg.op = 228U;
    msg.request_id = 18420U;
    msg.plan_id.assign("GIFXGOZVUYHDMEHDXMKIDSJPRNATDKYMISENMOQPYIXGEOITCARMBPVFNCDJ");
    msg.flags = 20765U;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 112U;
    tmp_msg_0.entities.assign("VBESOPLVKGJIUAMVABFNMRSZXISIRKOPGXORJMHDYIFSGXRQDPQDJSAKLULPGPHNZCJKBDDWHMXNJDMWPI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TQUPDPIENAKDMSXHXMHBTEYYNTSQHLSCJQFLNAUGUERNAVLQEPRNEDBSOEUMIFWGTZQTLBVKOVNGMJERGJZWTJCGMYRSD");

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
    msg.setTimeStamp(0.494449064571);
    msg.setSource(14812U);
    msg.setSourceEntity(128U);
    msg.setDestination(54868U);
    msg.setDestinationEntity(116U);
    msg.type = 27U;
    msg.op = 132U;
    msg.request_id = 32700U;
    msg.plan_id.assign("GFWYBDQNJAQGOQJXRIXIAVRRQSMSWHXCATVOPUUGPYAUFOWEHVOFMYVAMTNFAQPSWTHJKKIRGZJZZWUHATGDIBZJMWKBJLXDRKYH");
    msg.flags = 49462U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 63312U;
    tmp_msg_0.lat = 0.842537135316;
    tmp_msg_0.lon = 0.697390089915;
    tmp_msg_0.z = 0.578928424059;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.speed = 0.628502956916;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.roll = 0.78274082621;
    tmp_msg_0.pitch = 0.604076111866;
    tmp_msg_0.yaw = 0.179615394527;
    tmp_msg_0.custom.assign("FBSOGVDBQQSEXBFNALSOGKYRMZMGVQLBVZDICAJCMDTHOQTLRYBHYSNUMNIWIDAVHCMSETUAEPGFYGXKIXAAGKWPXKQPJGKCFDAZHJJXOCAYZJSUPJZZMGAYRKCYDRSMARHUYLHUVK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WMKVGPOAKZKCPQNHJIDHMEEZNDCTKDOUTLBTWWZOVJGCCPILQBALUPUUWWSCUSDAAJEFLIGREXZPWAJDEPXFEZFHTVUIFRASEGMDGNSMSHKOUXQYSIXNC");

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
    msg.setTimeStamp(0.354311806808);
    msg.setSource(45136U);
    msg.setSourceEntity(56U);
    msg.setDestination(610U);
    msg.setDestinationEntity(251U);
    msg.type = 120U;
    msg.op = 242U;
    msg.request_id = 58075U;
    msg.plan_id.assign("SPMCAHKSKJMKELCNFPIFLVRUFOBGCJRWQMJGYICJGKNWUGBTQSBXANAOGXQAXROTRDEFPRLWZNMJHELUGFNETWTBGYLDUXYIWDXQIKFFXRFANMOQVMPDTMWQKAUWPVTZUANJUSXB");
    msg.flags = 22484U;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("ZKNQRJEZQFVNNZMCMTYQSVMFPWGPAGUTKIGRNKDRGSKHLIZUEHXMDIVJZJYBHCVGINVMJIMYDQJDSAGEYSQDCSWFEFNUKWHQEESLSDBXQOGJVYRFLSCCRPJBXOAGYDOTRMNUMYAAHSBZRZXAUMBHWPXODJFYJTAPVQOTHCTBBRNWEVBJOCKEUIEWOLGQGUUIXBWWZDCBCAOKFLXUXEMLLRQ");
    tmp_msg_0.dest_man.assign("UTNXWEZATKMUAVNFOODJMCWLNBQPEUCQYQSKFTYTSCAOMQGMNKZPVZJYLJIMGSLFVQZLFFRRMJIIBAAXXRPPHIWKGKWTHURTVPDBQNXDUAXSVGHTHDOUDFJRSHSPJBJBPUMWEEVCTIGHOS");
    tmp_msg_0.conditions.assign("URXABBVDVSHONCBEZKDRDBKKTDGVLBBOALHAQKVZOTAIIDQXGFXEJGIAZMPGLYVFLSIHQYYVMWSAGRQXMSMVOFSEMJRQYWPFKGGNNHYQRJDIJESNTUIEBRWKXJCPRCONURWRKUICECWAUNFTWXUZQDLZJWLOETLFPQF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UMQGDFTKSISJZMWZHTEYUQKKYBQJGDYMZNUTEBUTLRSGPHXBDOWBNOYCJXOQAXFCZXOVYABSMNODVWKDPHLRXYIJTXPDYRRFVXYWFSFOZFKVWWKJZHUMCZAALSCIIDNOEVWKELVGTJIRUYBGVZPZAEHCTRNRANBNOHESIAQFXJMWISAKRLDXCWHMIHRQDCF");

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
    msg.setTimeStamp(0.256534737617);
    msg.setSource(51561U);
    msg.setSourceEntity(111U);
    msg.setDestination(27513U);
    msg.setDestinationEntity(129U);
    msg.state = 122U;
    msg.plan_id.assign("BIDSDJAHLADYKDLPM");
    msg.plan_eta = -964674860;
    msg.plan_progress = 0.565611544196;
    msg.man_id.assign("QERNKJFLBFOONJCRVIOPCJCDTANEPBMZS");
    msg.man_type = 29012U;
    msg.man_eta = 508028372;
    msg.last_outcome = 92U;

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
    msg.setTimeStamp(0.508860329369);
    msg.setSource(61802U);
    msg.setSourceEntity(157U);
    msg.setDestination(10253U);
    msg.setDestinationEntity(247U);
    msg.state = 16U;
    msg.plan_id.assign("XLOUNJPEJDVBQDXCTHIUXPRU");
    msg.plan_eta = -1978775666;
    msg.plan_progress = 0.638730778388;
    msg.man_id.assign("HXXDTWOTFOHHUCEENICTDQKJCKAXJFXYPPQBZOMAFOVPPZOWPEVJARMJEYPKLBSJYBSPMBAJKCBZNWDQVHCUODALIWKGETNMBK");
    msg.man_type = 32783U;
    msg.man_eta = 1357189429;
    msg.last_outcome = 40U;

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
    msg.setTimeStamp(0.203701445308);
    msg.setSource(12490U);
    msg.setSourceEntity(74U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(39U);
    msg.state = 137U;
    msg.plan_id.assign("CGMVHRTSIAQMXYEUTSNFCWXJDQFEBA");
    msg.plan_eta = 776242488;
    msg.plan_progress = 0.925968802773;
    msg.man_id.assign("KCICEVQHBOXJVSAFFCEFEQLJVVLZADQJJBSBWQYLVPDSYAILFDCFDIHMIMHPWYAOOBURX");
    msg.man_type = 45402U;
    msg.man_eta = -417026588;
    msg.last_outcome = 181U;

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
    msg.setTimeStamp(0.663486803155);
    msg.setSource(36879U);
    msg.setSourceEntity(212U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ABXJIOLZGUMQEZDDNIIVOEKOQVQQAWDRTZTLDYBXBFRCFBTXVERMPUNCWFDKSITNPXWCAQMPPIHYDSUMDYYCFEYOMCGOZQHJVWGHSLCEAQHFKWPYOEURWEQFCGUBTGHWSUMBLFHTJMTQJPRGORDSGRSBNFOSAMCKPLCKXKPXVEHKBKDTYVALJYXTMWHAMUNGWJILRLWUSIZHUEKZRXILVVJZSPIODVOLYSBNNXTUJYBFCZPHIQGKNANGFN");
    msg.value.assign("VUKXINIPFYOYHFFCNOITDMJJXZHXZYKKUIJCLXEIAKQQJTOAJMOIUOWUSZUSPNYNBMAQHVXPEHMRABZPIGWBFQNTIJVTQKTNWKBALOKYNQWPVFRXGLWVGYPEDMNBBSETSADUMAZCFGPGJULUBKTOVDNRMVHBHGDLOXDPLQKWIQMRLEDFGPSYDYTQJARPSYXCHGHECRCJTLSNCUWAWFCUFSHMEEZYZKXZDCLELBAXJGSOWMQVVROGCIZ");
    msg.type = 136U;
    msg.access = 159U;

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
    msg.setTimeStamp(0.0649016255619);
    msg.setSource(35953U);
    msg.setSourceEntity(252U);
    msg.setDestination(58492U);
    msg.setDestinationEntity(156U);
    msg.name.assign("JRAEBCEBUHQRVMJORMIXFPCHSTWMZRYEXVSHZWLYABBUQRASVPDDFOPZNXOBURYEUOKGDQJPDOMLHK");
    msg.value.assign("WYMPORMKERHMHTZWLGRVZUTJVGSYQCQFJXMFMBTDNVAXJXEJGGENQDTGONXGQXAPZAFCYGKYWTPFAVMLPKDTYADHUKSRLZJDEACDWIWOJVXOQVHZHNALDIKVZBQIXPCDDLRGEBIBCUQSMKHSBIWFRAIIWVUUNRFXJAQSRYBKNFNDOTWSEOBXLLSCFLAWOYRUM");
    msg.type = 148U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.458474273449);
    msg.setSource(15054U);
    msg.setSourceEntity(127U);
    msg.setDestination(1864U);
    msg.setDestinationEntity(32U);
    msg.name.assign("DZTTMBIUCOAOABLWSNQPIHJBYFKBZQYRLBRCYIAFKYXOLMXEYFYQNTIGGTOGLERWOZGWJPXHVGSGCAIEKISVCSUQUEGZFCQKMRATLJCOPDMBERKVJHMDMGBOJSSXSKHNSHUNLWVVOXEFDCRSFWDHIVUHXQZJJAQAUJMIBXXYREDUHOFEFKDERSHVDGZMNLUPCPPVTXWZNYBLNNPPHAT");
    msg.value.assign("DGPAEXJGCXINHLHCRMZAOBZYRINOHYJEWUJGOOGHTUHTNRVIZNSVNJDVP");
    msg.type = 147U;
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
    msg.setTimeStamp(0.0971070220929);
    msg.setSource(22684U);
    msg.setSourceEntity(164U);
    msg.setDestination(24104U);
    msg.setDestinationEntity(203U);
    msg.cmd = 217U;
    msg.op = 194U;
    msg.plan_id.assign("FOAJRPATIKMNAFAQADSJNTQDRNTMZBOWCGXWCCVVELSAHHBCYFTIEMHFFGKRDVUGAQIPOUZZYLIGOCPZGQJPZYTVZIKNFNSFYJUEXZSLSI");
    msg.params.assign("ZPYQKIMXATYHWOKXKVFFNCUJPRMSVJDZUUPSAKVAZUJUCAPQGGWFVIIRZYIEIGFJTFZRUINLT");

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
    msg.setTimeStamp(0.549185436023);
    msg.setSource(63661U);
    msg.setSourceEntity(183U);
    msg.setDestination(45517U);
    msg.setDestinationEntity(59U);
    msg.cmd = 77U;
    msg.op = 176U;
    msg.plan_id.assign("MNAJVKMNGBEOKMBSSITZHONWPIMJTMYXPVZPLWSZQYIS");
    msg.params.assign("NDOUEASCSGVPRHURSPJESXUYBKVMJBYNTNKAWHRQUMKAUKNBWAOIDFMTMXIDTAGPGDL");

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
    msg.setTimeStamp(0.166510877727);
    msg.setSource(354U);
    msg.setSourceEntity(244U);
    msg.setDestination(1135U);
    msg.setDestinationEntity(218U);
    msg.cmd = 15U;
    msg.op = 247U;
    msg.plan_id.assign("ESFIRKHPKMFFNKDVACQLBRUYZMAR");
    msg.params.assign("SHXEVTGFTHMEVJIJGAEABPNLVZYAHHQCHJRBEY");

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
    msg.setTimeStamp(0.135594537269);
    msg.setSource(51537U);
    msg.setSourceEntity(103U);
    msg.setDestination(10396U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.612751034018;
    msg.lon = 0.464484231994;
    msg.depth = 0.934514859261;
    msg.roll = 0.197636314267;
    msg.pitch = 0.676518723244;
    msg.yaw = 0.58574068788;
    msg.rcp_time = 0.182068649644;
    msg.sid.assign("MEFWWHIKVEKCCHDFVZQMLKBPLKZBOBETYRADRIOPIQNQEODWCWSFVUYVVLSLFBALPK");
    msg.s_type = 149U;

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
    msg.setTimeStamp(0.00544599284889);
    msg.setSource(28088U);
    msg.setSourceEntity(83U);
    msg.setDestination(55550U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.378402776684;
    msg.lon = 0.11911016064;
    msg.depth = 0.882455217924;
    msg.roll = 0.648986205798;
    msg.pitch = 0.830761245209;
    msg.yaw = 0.525976664699;
    msg.rcp_time = 0.915905976816;
    msg.sid.assign("EGZJIYGASHTLLAHEVFKDUEFBBNYHPDXXINYUMLWNUJLVLVWQNKTTZBPTFCUTUUXIMDAMLRHOZHPYBYCYMAMYAKEQTVNWQZDWHOVYRRJAWARXNXTUROQKZEGDGDFVHJOBJOGLHZJFIPIWSKDBSGSGCIGXMGAHSSBSPNTFNKRTAQIZPPMRZLFFBCKOALWKRGXJSRQ");
    msg.s_type = 78U;

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
    msg.setTimeStamp(0.232545995395);
    msg.setSource(51270U);
    msg.setSourceEntity(213U);
    msg.setDestination(51273U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.636023655046;
    msg.lon = 0.220819624031;
    msg.depth = 0.783244208939;
    msg.roll = 0.356580378645;
    msg.pitch = 0.907619082644;
    msg.yaw = 0.766216581928;
    msg.rcp_time = 0.641960443727;
    msg.sid.assign("LDZMVYPYQLTHQPZXOSRSCHOIHAUTPFTKXBHTOLLPKRZOFGPFGMRWSEFZUHQYPSKRLJOHNZPAVIQUFWCIISVBLACXRIOXLNWAQUDEXFZJLUNAMEHIOQBDIIZQBGKKXXTGGGXYWJDHWOKNPCJMCMGNMVOKNENNAVJRCTFUWETCMSU");
    msg.s_type = 177U;

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
    msg.setTimeStamp(0.551645257548);
    msg.setSource(3117U);
    msg.setSourceEntity(37U);
    msg.setDestination(62653U);
    msg.setDestinationEntity(126U);
    msg.id.assign("VQLEDPTPVSJGEBCSOJFUJZJMYXPQVMHHZPCLYVMIXZQGOYQPNIWRLYBFLNDHUXZSCGVAMLWPCNLZKGBLQ");
    msg.sensor_class.assign("HEALKGWQCAYKOAZTHWIZKJIFLHBUCNMTXTOFPTOESHWTHXDRFUYDJZGBSGCRFVKHRRKJPPVICVYBIMNZQGLXCVTGDLHJDZOOCUGYFIOPIKLKSPQGPEQUBKGESVAQXXHPXOQJAMUZVRUSZESAHVGNJWRDSWSQKXTLFUEXWWD");
    msg.lat = 0.883414881962;
    msg.lon = 0.647188465049;
    msg.alt = 0.0138246869461;
    msg.heading = 0.0554699981531;
    msg.data.assign("FSWJCTJGDBSQXXXPQISSJJQYTTBWEVMMPNWMITCPUZQGDLVAHVBUNNTLUUYJUMLBHZDYTHHBSZETHHOFHXEKHJLVAGTZCVHOQORGGUQW");

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
    msg.setTimeStamp(0.480396736556);
    msg.setSource(48219U);
    msg.setSourceEntity(65U);
    msg.setDestination(36219U);
    msg.setDestinationEntity(73U);
    msg.id.assign("KSFIZRQUZYOIEVSXWLWDTDKOXOTXNBJQAFSCOCDCFDHTWGEUHPGFWSGKZMXGNWAPPQADERXDOZHNXGNLEFLVAVMGMIYCCBQSNKXZAEFMVUBLNSMPTRWDEFVRAJKAYHMYFPHRDIWHLIYDOKSVVIGLKTHQRIVLSEYMOKNZLPPJJCXMNICEMBJPTOFAQJBTYBZQNWOURINUUUJOKQAFBBTVLXIEJQW");
    msg.sensor_class.assign("VFYNILAANPCOEYTDUASFSCYHSGVNGFOTTMTMUSSPWYQWVYAIQVLGLXOJHCQWUOTPLOBBBSJRXZHIILIZPEUDXWJRRNFQNMWMREFJWGBHDOKBDJRYTUTFBODIRQKUTZVPIPGLPFSCYIJLAWHMZSVQYZWCCPNQDXBK");
    msg.lat = 0.797338140923;
    msg.lon = 0.33626822995;
    msg.alt = 0.862568038333;
    msg.heading = 0.921155003204;
    msg.data.assign("LLZOGLSVHXXFTGKONFBZSCWPFQHXPJZLRMWLKHFDEKRKTOIBKDKIHXPUGHMOJXNPHQRWISXBIDYWHMMDICPYBVCYEJIYVZSXPTATJARUASWTGKMKITFFCEDREPUUGDQPVGKUQNXNBRBAOMZDBDQJYGMLILCHXNWGACQQASJZQJWIMLQJYWOCTCUUOEPBJEVDYDLMFVGEFANWTKSYT");

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
    msg.setTimeStamp(0.0198976023061);
    msg.setSource(25328U);
    msg.setSourceEntity(157U);
    msg.setDestination(8054U);
    msg.setDestinationEntity(156U);
    msg.id.assign("DFMIDQNSPPSGOAIVCMIRTXLLYYPNJCNWQTYOARVVBDYCVHWWXDEZEYXVJRQNSIMPDMTXOBHGIUCXIAWKBBGOCEHTDRMDJFDLGXZSFVLWNHZSTZQPECSVAYTBRKSOYKQDHEQGJGJGHNUXK");
    msg.sensor_class.assign("PJANHDJQSEYFSWYHVAXIJKNHNWCNPODKUSWREHFXXORVOEAWUZTGBRTAQFUDPTNUMYGMILVCXNBHRQCFVVSZLELZECFPTQJDRRZOTRKGUWXPNRIQJYGVEMDBUJVOIDSKQSEHSDVBOFBPHQWIUCZEYKCFXMNAKYKJLAQHQMMGZUYPAMIHWVAISGBITQKYHWPCGSOTCCXBLLJTDSRYXFZFOTA");
    msg.lat = 0.202368338613;
    msg.lon = 0.268492932466;
    msg.alt = 0.871113115205;
    msg.heading = 0.145606386582;
    msg.data.assign("EXNAUUJRBSPCGZJESNQIZMLAKFZWBCYBUBIEFZXEKXLKQPZYSQPVMUMYXVDRMWROCVYKYRHZWBSHKJWZDHEZMEN");

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
    msg.setTimeStamp(0.0583586187262);
    msg.setSource(16719U);
    msg.setSourceEntity(151U);
    msg.setDestination(36288U);
    msg.setDestinationEntity(51U);
    msg.id.assign("SWOVYTQPKLYSCZDAARMJVJLXUHLSPJYBYAKCCKNRTEFMMUSZXZCAZPJBPTTOZIRUWOGNHVJIXOTFKDIISSWFGUESRLBZHXFYTZXBICDGHBGDZPZGBELUMRJOKUVWRQQQXCACYNDDTEAAWCNGLVEOEXSDQQTKFUHBYBLVPVYEEIELORNCMQOWP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OGJRNDDIYUXMHSEPHYFVYSUZQLDSYHOCKNARXGNQVKFYUPZJWAHXQEFAYATCUGQSPXDYMMQUTWXSGIWFGMLZUROHDCEEMTFXLAKAPIBDBVYPIFROATPLERGJRZAQOLPTVXINLEILOCZUDKLOLFWJYODQIVUWHEIRKLWMXSCWVBJESIURWPKKBBCCCVQSDBCNNJN");
    tmp_msg_0.feature_type = 209U;
    tmp_msg_0.rgb_red = 187U;
    tmp_msg_0.rgb_green = 179U;
    tmp_msg_0.rgb_blue = 107U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.538937318622;
    tmp_tmp_msg_0_0.lon = 0.155958966921;
    tmp_tmp_msg_0_0.alt = 0.762085200919;
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
    msg.setTimeStamp(0.924071080743);
    msg.setSource(28760U);
    msg.setSourceEntity(235U);
    msg.setDestination(2008U);
    msg.setDestinationEntity(19U);
    msg.id.assign("PWVJYOJWPLHGGYENZIXDSEUAEOKTTASWWBQFBGSNIRABKDTFNZLNCLCUDQDEHTGMCOLUWMVHWEGREGIBRUMOSNLTKIDHKNGVJVLJXPAJDHVXZXMOSIQACBSUEPRSFEYRTMCYEMOQWRQYPFBDUZCHJJLYVIUWJKXLZGOQRAAYGKHYADB");

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
    msg.setTimeStamp(0.90819215537);
    msg.setSource(41064U);
    msg.setSourceEntity(52U);
    msg.setDestination(51645U);
    msg.setDestinationEntity(211U);
    msg.id.assign("OYSHNXWXUGLPKINAKXBRGEVEDTNEQTVYKRKVJNPCSRFBUUHS");

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
    msg.setTimeStamp(0.921951884895);
    msg.setSource(41040U);
    msg.setSourceEntity(225U);
    msg.setDestination(42225U);
    msg.setDestinationEntity(90U);
    msg.id.assign("GGLQKRTYQSKIODKKIJ");
    msg.feature_type = 240U;
    msg.rgb_red = 75U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 13U;

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
    msg.setTimeStamp(0.492236745426);
    msg.setSource(40649U);
    msg.setSourceEntity(70U);
    msg.setDestination(34157U);
    msg.setDestinationEntity(132U);
    msg.id.assign("PNKQOTDIEBVHBFUBLEZRRDAZSUHMDODVXBPUKOXMXWFNVYNCCGZPGOHULBGRXLFEADHVRGTQDSNLXZQZWBPQSHUOFOFRLZRPGCJAIMGJWLNICH");
    msg.feature_type = 236U;
    msg.rgb_red = 113U;
    msg.rgb_green = 200U;
    msg.rgb_blue = 201U;

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
    msg.setTimeStamp(0.180346620316);
    msg.setSource(32583U);
    msg.setSourceEntity(159U);
    msg.setDestination(61662U);
    msg.setDestinationEntity(26U);
    msg.id.assign("OVGGMRZSSIBAGYIXUBGVJSCOWLHPFGKDJEYIBYIQYJQPWBLFVADQXTWBFVUEROXNQNZXUJPOX");
    msg.feature_type = 137U;
    msg.rgb_red = 192U;
    msg.rgb_green = 88U;
    msg.rgb_blue = 94U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.567922413138;
    tmp_msg_0.lon = 0.390089164189;
    tmp_msg_0.alt = 0.204868009508;
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
    msg.setTimeStamp(0.286943903335);
    msg.setSource(8454U);
    msg.setSourceEntity(76U);
    msg.setDestination(28843U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.284999276982;
    msg.lon = 0.554513024885;
    msg.alt = 0.231367005639;

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
    msg.setTimeStamp(0.703402297289);
    msg.setSource(25199U);
    msg.setSourceEntity(243U);
    msg.setDestination(20544U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.230361150842;
    msg.lon = 0.493287586885;
    msg.alt = 0.268550063059;

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
    msg.setTimeStamp(0.0556506613648);
    msg.setSource(30247U);
    msg.setSourceEntity(52U);
    msg.setDestination(31445U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.688184005331;
    msg.lon = 0.813373759825;
    msg.alt = 0.654956416691;

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
    msg.setTimeStamp(0.173941774893);
    msg.setSource(62934U);
    msg.setSourceEntity(19U);
    msg.setDestination(40678U);
    msg.setDestinationEntity(50U);
    msg.type = 118U;
    msg.id.assign("MXIHOGMJQJMAOUHWSKDJHGKLEPSVHMJJXRDUIRSIACAGPILRBUWJWUODHOFDBDAVVRIZXUQREZOBXDSYHLNFTLYTEMANNXGAIGDECBCFFOYECVFEGUJKPAXTWQYZKMTACDUBIVJTBPTHLKFQPTBBPQPQMNZCVVWJIWGYVSLWNMFSRKSYCQUJVGFTCNCWIOWLGXMRUOZSYFBXQSLXSYHDONRBEKTPKQYXPZZAFOGRVKHUZLIZCNQE");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.710113574148;
    tmp_msg_0.beam_height = 0.799073604243;
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
    msg.setTimeStamp(0.999325575801);
    msg.setSource(30933U);
    msg.setSourceEntity(235U);
    msg.setDestination(61692U);
    msg.setDestinationEntity(183U);
    msg.type = 82U;
    msg.id.assign("TTPRZXLGJCEFHW");
    IMC::ParameterControl tmp_msg_0;
    tmp_msg_0.op = 207U;
    IMC::Parameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.section.assign("VIVUEHHUWKMNVGELXBBCVTMLYJCWOECJXISWSJFVNSAMOHSAFEKMDKWQYEKBNQDYNFTGYUJINHDILQBKJGCKVGTVSZJXUDTKPVHPMLPEILPZJTLOXJLPWITZGCIJUOAFUWYZFQB");
    tmp_tmp_msg_0_0.param.assign("YLAQKVYYAXMQD");
    tmp_tmp_msg_0_0.value.assign("NTQTFXGJSVYANGESWLCMOCUQVUTCDEKAZOYGDECMBRXKXUSCTJVBGCMGHFHIZOVHKUKLBLUGEJBPBZZMZKKAJGIHXBCDSQWP");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.61969642068);
    msg.setSource(50823U);
    msg.setSourceEntity(116U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(79U);
    msg.type = 94U;
    msg.id.assign("JBWZCNHPLGIDMLHKDW");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("BCJLXIUIOYDRKIBSRKWBEGKDRLFGWZVFLERXYDFKGLOJXYADTFEDTMZZQQBXTZXQHIKPNRZMXOONJHITNQHYWIMXPGXJUCGVTTKMSTPEEWDLUMBGJRHMIBZJAMBGWQZOYZJMFDPUCGCXOHAATBAVNQEKPUFNSHJKIWSECUAVVSFSEDLFYVAGCSDBVQHUCDHSWPSHJZUITMHCVPRUJLFNOWNZAOGNCKLQLPKTRRYMBFWWQUQSLRYOV");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HFEBMXSNSDYIQVETOGVNIGKTJQTCAIABSYHQJPNEKAFVDQJGRCDVENAELFCIBKMEIKKGJNMZSZHSZPFCBDHCTRAVNROZTSR");
    tmp_tmp_msg_0_0.value.assign("OUGBRALATXKDAKNBVLBUJLTANFYYGHPBDHIHOXATEYFKPNBLQOSDRZEWIESMLXEZGBJSHTQJSUQCVPHNJZJDMDDCFXTGEMXRQOKOKLCYOJKRRVPEKBCWFLTVTGAN");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.185818289008);
    msg.setSource(8360U);
    msg.setSourceEntity(229U);
    msg.setDestination(37922U);
    msg.setDestinationEntity(237U);
    msg.localname.assign("IVCLDNOIKEUPNAGOJBJSXGDEWBQPNZULUZKEDWFUHCSYPEWLKORXRMAKEIBHSUHLFHDLGQWVNXRJMRKNBZWTSLYLBASDJQPUPRAFCITXZZVWGQKYVMCUSWYPLBSXDEZDGCKSZAXHVCKOFBAPANBAQPXTMJGOMAZQPBGIDXIVRTYNYTFQHUGTZQCKNFVMTMUHW");

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
    msg.setTimeStamp(0.109435849355);
    msg.setSource(28170U);
    msg.setSourceEntity(221U);
    msg.setDestination(37017U);
    msg.setDestinationEntity(118U);
    msg.localname.assign("MCVJHKUAXGMXBPDRTOAOGHJNUWMFCW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YQXXTWLPQUDCTBCJUYSWPAGIBKIKXOFWBIWHLIOGEPROYARJQVNUBAUAMWZSRQYQFDYLXNCTPHETQZJMDTFKJLKNOWCRMOOZEHHWHJHKSMZUEIDXUMFBTLACPMVXVDIKXZAPJKSWLBQNRHFARIGFNMQGEXAPZGEFWBZNJGSYSZHJHVJGDBEZQNVYRFJEGODDRQSYCXPVCCKPMNCVIUSDBHPYUEBLOROXKDAVMGLLZTKOGTUIIRCWYUVSMFTAFN");
    tmp_msg_0.sys_type = 218U;
    tmp_msg_0.owner = 57900U;
    tmp_msg_0.lat = 0.185588820866;
    tmp_msg_0.lon = 0.530238438736;
    tmp_msg_0.height = 0.41403021469;
    tmp_msg_0.services.assign("DCPJUFWLRVQOPMNQYMTKFITNOAMMBZOWJQJHCDMYNUBOHHZXRUPFCKNBFFWVFKBSJTFPCSQVTNRZRFIUCXSONDXDKIUNSGJXASNVAWEQWHTOZWSYBXBCYCAJHJDWREGTZPZDIOGYDUMHSTZOWMXOVYWAHVIILC");
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
    msg.setTimeStamp(0.900671608133);
    msg.setSource(52703U);
    msg.setSourceEntity(99U);
    msg.setDestination(25157U);
    msg.setDestinationEntity(147U);
    msg.localname.assign("KHDUVRVFRAELXSPVYHPFBAGOSBLWYXFIMNIBDZDDKIATPJCRGIUWWSZPASXOUGFJBSHTQPYZANBQWJNSECKEOBVZFVLQSBQNLKAKSGPRUWJCDLNLFCYHMDWCXMTILVGWHVZEKVG");

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
    msg.setTimeStamp(0.879240367689);
    msg.setSource(22885U);
    msg.setSourceEntity(30U);
    msg.setDestination(40483U);
    msg.setDestinationEntity(212U);
    msg.timeline.assign("IRUDZREQBMTOPFYXXUCNAWWIFBZQVOUSWBYKRZPLJXGWRFXFDQMDZPYNRTBUKDSOISKINBWOHJRXDUTANPBYFHJXQNALCAGLIKUMFPKLFOHQNPBCJCTZDTCFPDBHMNQIYIY");
    msg.predicate.assign("ZJEBQNRYFWNUYCEIIETCXBXEYHWQNURLVNVOPKOSQNHTXHYVEMFLWQQFERZOLNQVXRIBLMUQSRKUBZKJJYDRFYWGWHGIIEKCSSZKLKOQKKSNTBLMIMZNOUZSPWVTAVBYLHPPHJJDMXMEEMHMJDYGTPIKUDFSADFCAPCQLPBACODQOAGFAZUTVC");
    msg.attributes.assign("IQENJEVHMVXCCDEZBPYGOFMPDXLDALTKGVUHQZONIWKTCKYKIDBXTJCQLWZSQANHNHJUSFNV");

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
    msg.setTimeStamp(0.860456125762);
    msg.setSource(40581U);
    msg.setSourceEntity(91U);
    msg.setDestination(1198U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("GTUNRLVXCVMQTKBDDNMEKPHCSQUTAUUZEVWIRJTQDGGXFALMQDFNLZNBJESYSGPD");
    msg.predicate.assign("WUCVBXQMTKKALAQ");
    msg.attributes.assign("HFLNTVYCZFYUQZNEYMTPGSSSIJZUTSWJCNWVMIJPPXAUPUZEDWUMOQZXBUWNTICOJOQZSYYRSPJVDVYU");

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
    msg.setTimeStamp(0.183237707323);
    msg.setSource(57997U);
    msg.setSourceEntity(121U);
    msg.setDestination(58454U);
    msg.setDestinationEntity(115U);
    msg.timeline.assign("QHEUHYNVNFKFWEDDLZIDPWGFSQGNXHRSCVFOTSLMQSTDFBLUCIRCTAXSRLYXNRHAPVWYCZDWVKFMFNUOJTNPRIQEIPHYZSAFBAITUVOXTDQMOYZGGWMOMKQBZAQZIRJBKDQGTRDJGSCSYBLCOXBGYEMXCPDXWTZPIRKLEVHWEFXLKVPABZNYKZJPIJGKAUQWJEUVUPLNWJHWDCMUJLJBBNVSXACPMZYHHOOXOLYMRNCKJ");
    msg.predicate.assign("IAKYHAHFXLWQJXPPRLBFOEFNETUEQIHNWIBVDBVRBRSGTAHQXMWQZSMEGJKVSNNGTIOE");
    msg.attributes.assign("NTADHBCZNBYQSMFIREMVYRWJWFYQWMNKRFGZKWHUAUFTBUJCAAVQSTQVLHADUOUIJDQLCPWLGAHEBATLRSNPOEOCXXYBJUVPVFKCSIEDAXQKORWORYXCUQIJMWGXBWBFPECYZFORORFOBEGTMZHJHVETMPYZIMQGCJBIVAFJHSLCSUQTZEGIDKWLRXWPNOZSKZKRESPHGVXKFTPS");

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
    msg.setTimeStamp(0.861818101529);
    msg.setSource(40392U);
    msg.setSourceEntity(79U);
    msg.setDestination(26854U);
    msg.setDestinationEntity(138U);
    msg.command = 135U;
    msg.goal_id.assign("EVYWAJSVXECVFZXSMZMTAYGRHSUTCMPET");
    msg.goal_xml.assign("LAZRHWURJITRDATSASNFFYXPVQCEJHCQVQODSJFHDSU");

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
    msg.setTimeStamp(0.472455073049);
    msg.setSource(59366U);
    msg.setSourceEntity(72U);
    msg.setDestination(53167U);
    msg.setDestinationEntity(154U);
    msg.command = 32U;
    msg.goal_id.assign("BUSNDKYUZYZYPLOGPLOOLEQUR");
    msg.goal_xml.assign("TZKRNGBYJXJNPEBEHVJHDFLSTRZKQXPIQFUMUULHENOKFVPUXOZCNNCGFBRMAFUKQGLXGX");

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
    msg.setTimeStamp(0.992294789761);
    msg.setSource(64087U);
    msg.setSourceEntity(69U);
    msg.setDestination(27386U);
    msg.setDestinationEntity(110U);
    msg.command = 150U;
    msg.goal_id.assign("UFIYTMEMSZEQWDTYLKPWFDOIRYELQVDETEZBPKVFYBFGUCAUNVUXFVZWMWXPYEZJYURQDOKXFOATQSJVVCDVSSLBSKQGVPHLPIMXSTALCDBZIKN");
    msg.goal_xml.assign("EQBTLYONXFVGDKTIZBCKAVCDQHHEYCTISZJQLKCUIBARFKQLWEGNLRJSEESDRAPCNKWIGHJZKWBQXBQYEINRJMIGTJZRGNSCEWGPXRZZCTUUWDRWXSLEOMO");

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
    msg.setTimeStamp(0.381277791132);
    msg.setSource(13285U);
    msg.setSourceEntity(26U);
    msg.setDestination(63556U);
    msg.setDestinationEntity(194U);
    msg.op = 46U;
    msg.goal_id.assign("XDNWEKMLGILVITAMMACPEVLLQWHXOGFBRDGCOMPIQPGLNVWTSGSQHKEICMVCJATOBTFAYFCANSIYYKCQDDEQIDRXJNKBYSWUVMXDKNYCFPCMSDKGTFWBFZVJWSJJYUXDARGLZBYFHHESZHTMLPIOXYPWEZAPHORTZNKIONQTBFQGHEESRJFWXPZGOGY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ECQLOUHMCEUVGHMMMJCXMKSZUOKSDPCEMYVFXPWAFNTFLNMSPUAKXFGKWXWESRFHGUQHBAPLKPWQSGDRKYCLNGPNJYIWQQYPFLEDZSLTGITGEVDVRJHDBCTOSNDXDJRNVCH");
    tmp_msg_0.predicate.assign("RHKPIUPLUQFXMLQWCXGGOFCUMOUYOPYYVTJIQBAWEDDIXVCJAIKIGSKENHWJRETNKNFWFYZOZUICLWISGLXMKKWTXWHPCOBTKGNADHBKRNEOYMFATVIQJBPQVPLFOQZBBCUETJRJSPASAPVHXDNQXMVCRUMQZGWBMQIZDXYDPVEENTOOMEBZHFB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LPSDNMLFXZPFUZJTAWVYSCZCKZYKGRVTJYKLQIMQTXBVWBOUJIHSAAFCGTSWDEAOHRHFSGGUMBQQTRJQJIWNKGVHXBIVCYITNVXEUAIXPCRPEYHMLNAONDCAXLOOTQJLRMEOCLYBESF");
    tmp_tmp_msg_0_0.attr_type = 245U;
    tmp_tmp_msg_0_0.min.assign("OFKAYFOKONFLJHKFAXCCDCINVMEB");
    tmp_tmp_msg_0_0.max.assign("IFSYAGPSVJWPLIAZMVQLTGWBQMLOUCGKPNIJRPOEIZCDCAITSJTZDDQNT");
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
    msg.setTimeStamp(0.737276731029);
    msg.setSource(18606U);
    msg.setSourceEntity(24U);
    msg.setDestination(57536U);
    msg.setDestinationEntity(40U);
    msg.op = 252U;
    msg.goal_id.assign("PBYPSWVHQNJNAAHKLESEFOPWODENZLSTDGVRTOIBIQUSHJDBBCCDOIHIFCZLYPGGXJERHA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IBKOUNVWSFWQZRWFQBBVMZACAVIUNKZJXZJRQXEBDLNCYWWSIIGAYZOVMJVECBHYWRSIFKLACPVPMKPLPTCZUSUNAEXDQHPSYTPTKJANNIUTBJPQGJIKHMTQTUTCVXAYGVZOPNEVOTJHXPCGCEFYHGTHJGFRMFLSLMQJQRKSGJOIHRLKUDODLFOHDFNCDZV");
    tmp_msg_0.predicate.assign("NQPNEUPVOYJGCDECQXDWOIXEQAJEIECXNPFTWUFKRIJSZQOVMZONZIEEBRFDFZBAC");
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
    msg.setTimeStamp(0.114777022582);
    msg.setSource(159U);
    msg.setSourceEntity(239U);
    msg.setDestination(42217U);
    msg.setDestinationEntity(114U);
    msg.op = 40U;
    msg.goal_id.assign("NUAXIBNECWBJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZTDIHQEJNWOYPXKDRKQWNHOAVDZITEVHZIAGMZESRXBVZPNKPTEFBAFOOWIFOMJSPUDYMYJYAETGBVXXVPFLDYIKQWKPTLNCBSAAZSSHNVYGXZYDHDYAURAEXUCWGACIDHNCLMIBCQL");
    tmp_msg_0.predicate.assign("PDMJNMPRYGUTOKGCYKJGXTALXGMBYBWCOLCDPYVGVITNBQQLUBZXFJMRBQRGFCZFBWAUGHDAMTTRZCJTNQNXICKAPZOHBUXEIMOTPLKJUFSQSPNYFAQEIREOMWVARYBSAPKJYIWZUNGUOQFVUZXBVYWLTTEDFDZKEEERSIWNCVRWGOFOEADSRDMJWHSMJPQNSVUSZIZHAOYXXHKJYUXBKHP");
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
    msg.setTimeStamp(0.598658259669);
    msg.setSource(49953U);
    msg.setSourceEntity(154U);
    msg.setDestination(64114U);
    msg.setDestinationEntity(73U);
    msg.name.assign("EBRTCRIIVKYUBTQOWOMNZCSIHAJKBUHYOGKAMAEIGLMYXGEYHVLVLOSSZGLXPMVQZIJRUEWUDNTU");
    msg.attr_type = 193U;
    msg.min.assign("UUDHJYKIVCFRIFZNFDLAHTPUSQELVATFBHVOXMNEEIWCLFXEBHHWNFFSAJBWJDSZQJXCABLTBWJYHICKONGNZWGELORHJPVXPXDPMIGBSHZGGRZMHDURVGWLYMIUNZEKYUTAACBOEUCDNVXUCUWYZTZTFLAQCILBYOOWCGERJBDZMQOVQYAICJOTKLDYKEPRKTPMXVFVJBIHVTQSDRPSSASSWXMGDWNMZXL");
    msg.max.assign("RHRBFUCOOQVANXCBLSOEKIVVEZOXJQWMFEIOQNNMUAGYWLGDHTNGSIPX");

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
    msg.setTimeStamp(0.126383693551);
    msg.setSource(17575U);
    msg.setSourceEntity(82U);
    msg.setDestination(22595U);
    msg.setDestinationEntity(161U);
    msg.name.assign("BZXOEOHFCWEOLABOCVGDWSYNFV");
    msg.attr_type = 154U;
    msg.min.assign("AGWJUPOZGJWBQFWXD");
    msg.max.assign("MDCWVZKNWSRXGXVXOOAUEKULVCFEVUXKMPVMYNDLTZIPIGPGLORQLCFIGFPJIZAYJJZOQAOWIWAIOZZNTEMKVXFYSNFEGWFHUFTJICKOXCKCTQAKGHYAFMJIDWQSZWXBTNPREDVSGFUURSWJTKQRPHDSBAZRBRXAMMVJURNOBDHAXPKYYCNCYEGEHJMHDWPUYDYJ");

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
    msg.setTimeStamp(0.678820495209);
    msg.setSource(47463U);
    msg.setSourceEntity(126U);
    msg.setDestination(63832U);
    msg.setDestinationEntity(38U);
    msg.name.assign("WLPZRWMVTYTHESFARFBRJAVGPRZRGMBOSKFUEWTQNNCCLHGHNJGO");
    msg.attr_type = 38U;
    msg.min.assign("FFFLMVGPOPFKCNFSNTDEQXTJVTWBGDIIYXITOSLVE");
    msg.max.assign("NLBRLPHCROBUXRTZUYVQKIXQJMBHTLZPVDCDIISZSSYVYOGKANWHVECSQGIKBOZPNEPHXNVDYECAJPKAMRKJADSHQYEJZYLHOZAYGFMBDDCWYGFSWZNPDNNZFHUMUWROSRRYAOABMQESCEUPOYVDBTFCIJMRKTTCBJWJEEQAXGGHTKMAVRXEKRCFJXTGTFFVLXGKADXZTTMFNWWJGUIWVLQQSLQHZXOU");

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
    msg.setTimeStamp(0.0654173437286);
    msg.setSource(37145U);
    msg.setSourceEntity(156U);
    msg.setDestination(30568U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("HKQBKBXSVPABGKUSAIQYIUWZSGJYSOIPEIUYPDILRVSXJUIXLTHFTWBVKFURVMFZFUMVWKOYXYCAQBHZMFEDNGLMDNHIXBGKRTAQVPCOJYCTLFVYMAQJDTGBMLXPVRXFTTDTRCOJNOXZSTWXMEJMEKXNJOGPVPWUCEGIWBHERNSOZGOUDHECRACCJNKZFNYQSDLZDHLALEBOYVDZHQJUKATZESRPBAWHCRCINKONFGYQUQAGWLMHNZPDLQIFMW");
    msg.predicate.assign("TJRMUNEUAYXDAZGZJWHSKIUVCSTATBVJMPSURMNDEGPBWBGPOBZLTAJZTBLWHDYGFEQEZRDIMWRLLVLBRWSBFRIKRFCOUMZIPSDXHCSYCJOYULESSKJGQPTYKNPFXIKENFAKIZGFATUYWYLWJQGXVIRYVFENPSTDSDFQGNXCJVOLCBNOJQQPPXUHKGHIUVAVOCHMELDQUIKCORKENFTZITJDKHRYZNBYGCOMMHAFNDVEWVO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KYWFLPUYSXKTOMTUBIQLEAPYIVVMWIWTISUHGSX");
    tmp_msg_0.attr_type = 139U;
    tmp_msg_0.min.assign("WPCFRROXLWRCMZPBZTCWDJXNYAMSG");
    tmp_msg_0.max.assign("OHHVAGFIDCSVDNKFAOFWWCJVLOJE");
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
    msg.setTimeStamp(0.229802922655);
    msg.setSource(35953U);
    msg.setSourceEntity(76U);
    msg.setDestination(29302U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("POQRFKUGNWMYJZYWCLQBTMMWRTGVAIULBACHCROCPIZXLIVPBU");
    msg.predicate.assign("LACLMPPOVDEWFMYDBELNRUWSOLOALUIAPCYHVFKVNBGJWDJJJRZGWXJNAHNT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KKLLYYYEYOLWLTMTHJWMUXFPBJURUMWJKGFRQACXWADEXUDRBSMFNGNTZZRQRDZ");
    tmp_msg_0.attr_type = 79U;
    tmp_msg_0.min.assign("GHQMLPKAINHYTHIWYKJJPIJRGCVBFRLOFAACPPMOESZVOMWQGZLJKGHGJUGUDZCKBWDNSMTQIWEROZEGDSGPTQBLAXAHIKYXUXJKFOUOWBBCXRUDNIDHUQLKPNVNJDMMNGFOPBSSBRICZOXXCLEEIWCFCBASVQSZZVDMNTMYXCZPKTILRSYHHZGWKNUDRTFCWLBTVAISLBQHRVPP");
    tmp_msg_0.max.assign("QTXKBCDJXJWUIRPPFEHVOEYFDGLWKOLDEJYZYHGNBXZCDZDDWFQRPYJXQCVVSYLYGWNPKZPWLZNIAOAAGORZDFZECCWXYRCJEOSNJAVV");
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
    msg.setTimeStamp(0.106481953896);
    msg.setSource(62287U);
    msg.setSourceEntity(71U);
    msg.setDestination(60028U);
    msg.setDestinationEntity(236U);
    msg.timeline.assign("CVBJXUIUNRLOVOLWQMOWEFDBMMWKIMJPNXQUONCASHUSJRADOJEFBGKFXZEDAQBXWPOITSYTGBRIJLATZFGXOGTPPSRNDGFUYNNZSCVGZKYWKYEBIJAXPLEHGZMWULFCHUAPSCIYEZUQADSTQMFVWOCCODKZGYHLPZY");
    msg.predicate.assign("KUAIUNYERHUZXPVZFTSBFZOIGVICQGYFVMNMUMBCHXSHKIPASQPMWBUSGPZGJEHCCXHONUVHEAYDDGD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OASDBFLHIWZGMAJQEPDAMUQCWBTQOV");
    tmp_msg_0.attr_type = 33U;
    tmp_msg_0.min.assign("GXXXGJPBZGGMURPPJOFQJUIMJEFYIKKRZVAOULXUVQKRRNNIYETAUZVXAPLMVCVFBROLBVCFCZLEZKNM");
    tmp_msg_0.max.assign("MDFKEALUFHPCKFFOXIJGEQAAUOIYSZUZOXAHUFMCIOQQAXTJJAIYBEOKDHQTMXHUIGZOUBLHVTWFDZMZENESANMZGXACBSIPXPPBSSDGQGEGPBTKELGIWRQVTJXUGZHRJDLNCBWRLGNTLHVZKHRFKJIWMKVBYPCSNNHSIWRKIUEZQCMTYUXMNCWREWNXTOVCRCROYSPWEOPUWFYTYTVLJFSQDLSLNAAOJWRDQK");
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
    msg.setTimeStamp(0.555074959046);
    msg.setSource(48400U);
    msg.setSourceEntity(236U);
    msg.setDestination(55330U);
    msg.setDestinationEntity(80U);
    msg.reactor.assign("OOJFKZILKWKWLOQMWDNLMVQDFZPQONCCDGLLVRVMVWJYMMHCXIWGTTODMJUPITNJAZBTZDBMQAYOLFHMTCFQFCFFJIYANKEZFBRBXAGWGZAMSBKXUEIBIXRGVNRUJHZHOSBKXYXNQRPFWSOZUDSGPCRYBSAGRNIIAENB");

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
    msg.setTimeStamp(0.680892068994);
    msg.setSource(45148U);
    msg.setSourceEntity(91U);
    msg.setDestination(19450U);
    msg.setDestinationEntity(80U);
    msg.reactor.assign("DVOMLGWAHEYUGOFPIHGIUGKJBMJJCYBMIXKQIAHJRWNFGPDZQNGKPVKAOPUZSXAWVBDUXSZXXGPHFLVZBUHHCOPTFOHYKRVLOYEEXWYCNIBXCCQVYUUNLRITSZEQAMVLOTXTKPITRJDECAQTOQCKWREPHBZLRANMOYDLCYKGTXFAXMBSMYVRSAYSNZDJNORRJNEIKISIDUDKWJCEGBFQDVLMTULPZFWTJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LUEFZOSQOFKYRULINOPLHKUMMBXQBDRTPUANIKWKEVETXQSXCWJJTZBEPVGGEBHNGUWFNKVULZSBXETTNPBJFQQKKCWGUHOOZGHRLWVAMIJBWZGBBDSYYCRVCAPDXWPAMWFSITALLYOQRRRLSERVWFYMQVFUHIJTNHMVKKHDXQPZPFDOYEJRMACJDISFOSMZZNGPFIJGDKCHLQN");
    tmp_msg_0.predicate.assign("UOGAUIRCTZSKYEWUAFVQRFKYZJLQFNSIPGNBVZENZKMRUBQJIAMHDQLIFHHKSTRJDDAGPFCOUZVKTGQLHOCEYDCBTSEZQFCSRSMYLCRKSQOBWEQMPXAVIEJPTBQRLGBVERNPMHGKDNHMLTHGXUZEGYYXCBFPFSOJWLYWWPVYOTWIUXIZDKN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DVAQYKKSYGMYHVCZXVZOGMBHZBKENDCZEQNLUTLSZSUTBQELRJQFYVBOCIVWDMACHEHWTRLQKHSEWOBGSDXMJJFCYBOJIIPLENQTIOCWIUJFZLRTMPVNSWCWABAHAGBQZCIJGKDMWUNTU");
    tmp_tmp_msg_0_0.attr_type = 38U;
    tmp_tmp_msg_0_0.min.assign("YTAPZBSSXZQUDMLQJLDJFKUDJUFBEPAZXCPLMGXPEUJKVKSXICLIYWNSKNQDABUQCDJEKFWPQVLHWCJGMNROHECVRJIAIGIKWJWHCALQLRNRWHIOKKFWPXFOOSTSZBAZBHJZSEEQOARMKCDYOHMRNYUNVGATMILIMBOKUIDYDQSPFGQXTDGTOYDVWTVUZNEIZRNEPCCGLLOUARJHCSUNMXTGYBHGXTTF");
    tmp_tmp_msg_0_0.max.assign("NZRQOGYDTOHRQSZAMPSMVQYIHJLKTOJSRUXDENLBKXCFWZFGMVEWCBUAMPNXOOVERXFAQPWOJTYOCLGDPNUKEKMSZFCEGSZDIGXYEXSRPTGDDNTNKCXADUTBKRGYRUSJNLKMPOAFIAWHTCVHLBRHUNMHGYLAJQESBWBEZQIHWYCQQFZSJHWVAAY");
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
    msg.setTimeStamp(0.809510939597);
    msg.setSource(41955U);
    msg.setSourceEntity(199U);
    msg.setDestination(8617U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("XSOESKHLFYRPGAXEHOLQCNAQAHHVYVQNFDFGGOJWNGIRXCDAGYPKMVSLRLKQHTAYZQNEAKPJLPECS");

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
    msg.setTimeStamp(0.898690953081);
    msg.setSource(60176U);
    msg.setSourceEntity(184U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(151U);
    msg.id = 203U;
    msg.width = 64923U;
    msg.height = 11591U;
    msg.widthstep = 56702U;
    msg.channels = 76U;
    msg.depth = 9U;
    msg.finaldata = 84U;
    const char tmp_msg_0[] = {-102, -27, -100, -4, 99, -27, -106, 21, -30, 71, 76, -40, 100, -19, -45, 101, 119, -66, 73, 62, 82, -49, 71, 3, 60, -16, 114, 119, 24, 72, 77, 22, -78};
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
    msg.setTimeStamp(0.30282957016);
    msg.setSource(53872U);
    msg.setSourceEntity(246U);
    msg.setDestination(12602U);
    msg.setDestinationEntity(100U);
    msg.id = 225U;
    msg.width = 26834U;
    msg.height = 38329U;
    msg.widthstep = 2996U;
    msg.channels = 172U;
    msg.depth = 93U;
    msg.finaldata = 63U;
    const char tmp_msg_0[] = {-128, -75, -107, -73, 20, -24, 84, 16, -73, -49, 61, 6, -98, -31, -77, -27, 62, 86, -98, -40, -73, 26, -74, 77, -45, 101, -59, -116, 89, 61, 66, -100, 53, 102, 91, 73, 21, -13, 34, 104, 56, 40, -79, -71, -103, -19, 63, -71, 75, -6, 48, -28, -31, 13, -63, -42, -68, -41, 41, 58, -77, -9, -104, -102, -102, 124, -62, -100, 18, 7, -57, -128, -15, 2, -81, 83, -16, -80, -5, -127, 44, -42, -34, -96, -88, -100, 18, 18, 104, 69, 41, -94, -40, -95, 107, -46, 6, 41, -93, -66, -19, 36, 3, 6};
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
    msg.setTimeStamp(0.135967552134);
    msg.setSource(8364U);
    msg.setSourceEntity(32U);
    msg.setDestination(6762U);
    msg.setDestinationEntity(27U);
    msg.id = 219U;
    msg.width = 2625U;
    msg.height = 48103U;
    msg.widthstep = 31621U;
    msg.channels = 214U;
    msg.depth = 238U;
    msg.finaldata = 55U;
    const char tmp_msg_0[] = {-30, 19, -64, 58, -116, -87, -128, 110, 39, 82, -83, 34, 66, -18, -21, 86, -66, 97, -87, 33, -41, -87, -128, 100, -87, 37, -91, -128, -111, 29, 123, -85, 120, 60, -128, -7, -31, 13, 80, 73, 56, 63, -91, -34, 73, 33, -26, -1, 36, 77};
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
    msg.setTimeStamp(0.154142592796);
    msg.setSource(5414U);
    msg.setSourceEntity(29U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(191U);
    msg.width = 9508U;
    msg.height = 22080U;
    msg.channels = 107U;
    msg.depth = 201U;
    const char tmp_msg_0[] = {9, 52, 77, -104, 113, 49, 69, -55, -128, 41, 64, -48, -2, -2, -29, 94, 86, -62, -117, 25, 80, 25, -17, -33, 90, -92, 32, 61, 82, -55, 40, -127, -11, -91, 3, 36, -24, 15, -86, -120, 112, 33, -87, 62, -22, -48, 21, -5, -99, -118, 50, 71, -119, 13, 104, -98, -48, -13, 84, 120, 21, -110, -43, -42, -38, 52, 69, 1, 13, -98, 28, 114, -52};
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
    msg.setTimeStamp(0.656454568532);
    msg.setSource(10536U);
    msg.setSourceEntity(38U);
    msg.setDestination(13193U);
    msg.setDestinationEntity(129U);
    msg.width = 7433U;
    msg.height = 60414U;
    msg.channels = 137U;
    msg.depth = 88U;
    const char tmp_msg_0[] = {93, -55, 59, 108, 52, -21, -81, -109, -23, 45, -101, 98, 66, 66, 104, 5, 55, -83, -44, 91, 88, -53, 83, -41, -100, 125, -63, 84, 83, -3, -75, -124, 110, 120, -123, -104, -105, -50, 80, 91, -94, -106, -51, -67, -51, 105, 111, -70, -46, 49, 41, -29};
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
    msg.setTimeStamp(0.672132848425);
    msg.setSource(22744U);
    msg.setSourceEntity(231U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(69U);
    msg.width = 24091U;
    msg.height = 1428U;
    msg.channels = 87U;
    msg.depth = 210U;
    const char tmp_msg_0[] = {120, 7, 89, -70, 8, -43, -19, -122, 88, 85, -18, -63, 55, -128, -37, -34, 84, -78, -86, 114, 52, 95, 66, 98, -38, -111, -84, -54, 116, -4, -52, 69, 57, 15, -20, 33, -106, 17, -78, -128, 50, -91, -77, 118, -73, 84, -46, 34, 22, -127, -1, 68, -24, -44, -117, -100, -77, 76, 71, -108, -121, -113, 44, 27, 18, 66, -50, -119, -49, 0, -121, -71, -60, -81, -1, -69, 106, -60, -121, -73, -102, -81, 70, 122, 97, -61, -29, -50, -101, -67, -7, -128, -1, 0, 106, -31, -99, 19, -28, 96, 120, 31, 69, -83, -125, 116, -35, -63, -100, 38, 4, -83, 87, -71, 9, -114, 51, 79, 0, -111, -17, -2, -5, -80, 74, 82, 5, -90, 70, 27, 75, -92, -24, 8, 24, -44, 16, -66, 71, 57, -105, -97, -108, 96, -21, -16, 82, -101, -12, 55, 50};
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
    msg.setTimeStamp(0.147426699049);
    msg.setSource(21970U);
    msg.setSourceEntity(114U);
    msg.setDestination(33526U);
    msg.setDestinationEntity(151U);
    msg.frameid = 202U;
    const char tmp_msg_0[] = {70, 107, -125, 25, 47, 77, -83, -100, 38, -121, -35, 109, -57, -81, 27, -98, -18, 89, -96, -85, 125, -115, 89, -64, -114, -96, -116, 10, -57, 98, 53, 66, 29, -76, 108, -87, 117, 89, 116, 93, 7, -106, 21, -103, -80, 52, 75, -6, -63, 125, 42, -122, 72, 5, -63, 62, -26, 71, -105, -13, -19, -30, -43, -78, -86, -66, 81, -61, -57, -126, 94, 70, -115, -116, -33, -66, 28, -4, -96, 101, -3, 58, -94, -127, 76, 68, -17, -20, -96, 16, -96, -17, 23, 46, -10, -51, -128, -30};
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
    msg.setTimeStamp(0.273399415261);
    msg.setSource(22165U);
    msg.setSourceEntity(77U);
    msg.setDestination(10037U);
    msg.setDestinationEntity(65U);
    msg.frameid = 64U;
    const char tmp_msg_0[] = {-106, 61, -11, 36, 49, -15, -69, 126, -62, 32, 98, -69, -46, 23, 8};
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
    msg.setTimeStamp(0.382420030199);
    msg.setSource(47652U);
    msg.setSourceEntity(52U);
    msg.setDestination(11154U);
    msg.setDestinationEntity(209U);
    msg.frameid = 56U;
    const char tmp_msg_0[] = {-76, 7, 42, -24, 59, -18, 81, 51, -21, 86, -50, -71, -72, -98, -23, -96, 73, -115, 103, 59, 54, -107, 121, 116, -48, 76, 71, 112, 48, 111, -112, -3, 77, 102, -84, 99, -44, -64, -114, 57, 15, -6, -127, -107, 51, -54, 111, 29, 63, -23, -74, 94, 12, -58, 126, -104, -118, -28, -18, -121, 70, -6, 68, -111, 75, 109, 101, -58, 124, 6, -37, -113, -38, -56, 46, 38, 27, -67, 117, 23, -124, 103, -119, 114, -104, 22, 97, -51, 4, -8, -43, -128};
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
    msg.setTimeStamp(0.168698832367);
    msg.setSource(514U);
    msg.setSourceEntity(131U);
    msg.setDestination(30763U);
    msg.setDestinationEntity(79U);
    msg.fps = 194U;
    msg.quality = 220U;
    msg.reps = 64U;
    msg.tsize = 150U;

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
    msg.setTimeStamp(0.199515096716);
    msg.setSource(21909U);
    msg.setSourceEntity(178U);
    msg.setDestination(36986U);
    msg.setDestinationEntity(180U);
    msg.fps = 9U;
    msg.quality = 138U;
    msg.reps = 13U;
    msg.tsize = 23U;

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
    msg.setTimeStamp(0.800190320295);
    msg.setSource(15295U);
    msg.setSourceEntity(168U);
    msg.setDestination(21013U);
    msg.setDestinationEntity(199U);
    msg.fps = 201U;
    msg.quality = 220U;
    msg.reps = 177U;
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
    msg.setTimeStamp(0.569624588328);
    msg.setSource(48724U);
    msg.setSourceEntity(246U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.41086973584;
    msg.lon = 0.359213750819;
    msg.depth = 215U;
    msg.speed = 0.805092579135;
    msg.psi = 0.612736890103;

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
    msg.setTimeStamp(0.050914013864);
    msg.setSource(59326U);
    msg.setSourceEntity(166U);
    msg.setDestination(29728U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.585483827313;
    msg.lon = 0.759833811544;
    msg.depth = 195U;
    msg.speed = 0.0741688321867;
    msg.psi = 0.794851585826;

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
    msg.setTimeStamp(0.0536127298844);
    msg.setSource(47084U);
    msg.setSourceEntity(164U);
    msg.setDestination(5890U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.290323677076;
    msg.lon = 0.683906827476;
    msg.depth = 96U;
    msg.speed = 0.891471510267;
    msg.psi = 0.611282642735;

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
    msg.setTimeStamp(0.061088513749);
    msg.setSource(59897U);
    msg.setSourceEntity(232U);
    msg.setDestination(37723U);
    msg.setDestinationEntity(119U);
    msg.label.assign("PXRZZHNCZBYUQOPOUDNSNQKIWRORLMCFWBTCIAQOAWUZOVV");
    msg.lat = 0.132844344969;
    msg.lon = 0.212747936377;
    msg.z = 0.55448166173;
    msg.z_units = 143U;
    msg.cog = 0.914112273916;
    msg.sog = 0.773806635379;

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
    msg.setTimeStamp(0.0465011009593);
    msg.setSource(47269U);
    msg.setSourceEntity(21U);
    msg.setDestination(1845U);
    msg.setDestinationEntity(155U);
    msg.label.assign("NNJQQYJCXLZEYUSOTVTUVXLUIRPMWRQHTNCYCSAIOHJZXUXJHVFQRNWMKSRFTFY");
    msg.lat = 0.957584426688;
    msg.lon = 0.393518847654;
    msg.z = 0.0333461108778;
    msg.z_units = 214U;
    msg.cog = 0.445725437678;
    msg.sog = 0.91577567745;

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
    msg.setTimeStamp(0.514619094133);
    msg.setSource(54542U);
    msg.setSourceEntity(247U);
    msg.setDestination(63968U);
    msg.setDestinationEntity(21U);
    msg.label.assign("YEBZWBHHTGFLVIZDCYHKYRWYIMFFPXRDCDXOFFPWTKPTATWEBMFNJSWQJKVF");
    msg.lat = 0.606384829853;
    msg.lon = 0.280463152211;
    msg.z = 0.756639634896;
    msg.z_units = 18U;
    msg.cog = 0.434980841751;
    msg.sog = 0.102510279876;

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
    msg.setTimeStamp(0.295151678654);
    msg.setSource(5540U);
    msg.setSourceEntity(174U);
    msg.setDestination(18403U);
    msg.setDestinationEntity(227U);
    msg.name.assign("JDUXIDSYVXTXDFGXCFFMKVKMAJFHWGSEZMPZMQDLYUXHKBMMGWXNIHEQJAVPCYAXOQCNBAYUNMJFZGWNUFFFIQDGRCJBQVXEDSOHLBWEWBCBPVLKKKGSWKRTVBSZJOEVFPZZEUIKBEIETATTJMJLHQWY");
    msg.value.assign("LDVEXVGGRT");

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
    msg.setTimeStamp(0.916848508475);
    msg.setSource(13976U);
    msg.setSourceEntity(188U);
    msg.setDestination(57563U);
    msg.setDestinationEntity(145U);
    msg.name.assign("IPYQTQBMYGCDVQCGP");
    msg.value.assign("UZGDVOURLXJBNCHRJMVNAWSKFSGBXYHJRBCDEQSYJUIMZSRQMURDZEFVMGYYJIKBKLHEQPXMLHAIWAINZSU");

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
    msg.setTimeStamp(0.891055685868);
    msg.setSource(45675U);
    msg.setSourceEntity(167U);
    msg.setDestination(58873U);
    msg.setDestinationEntity(209U);
    msg.name.assign("IACGORMDZXWQXGFADVKJNOCYLILGWXLKCRDGKUBUGVLPRKHSMX");
    msg.value.assign("YHADYJHJGZBKMATXMVVLJHQRFJTGRNPUEGDYZJLLSGZCOXDHKWEIAKEZRERDUBKQRZPHEBDIGGFWPPWVZODVMWNTYVFMIONEUARQJANPLEBZXFIKZ");

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
    msg.setTimeStamp(0.480625003388);
    msg.setSource(24737U);
    msg.setSourceEntity(72U);
    msg.setDestination(42432U);
    msg.setDestinationEntity(243U);
    msg.name.assign("THIQKVIEGVXZNETLWJPJVNRYNLMUGYUAADOSOEASEYANEPGPTITHGYTZBSMEGWUIIUHQCDDLEDOZDSBZXRAWRRS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YTKFGPSAVVAMCIQSOPSVGXTCJGUUFHWILSLOVMZPEIRCKBFY");
    tmp_msg_0.value.assign("QDFFBZDNVMXTOKFAXWMLTUYIXCBVBIKBSJFTPXESMUCDKFYIOMHITRICWFQNSUZDWRCDE");
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
    msg.setTimeStamp(0.303442622853);
    msg.setSource(32178U);
    msg.setSourceEntity(110U);
    msg.setDestination(27964U);
    msg.setDestinationEntity(4U);
    msg.name.assign("XGJCVUINMFPGXOEUAFDFBQBIAWIJWGDNRLHXDDGTAORDYDOLWZVFYVQQ");

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
    msg.setTimeStamp(0.287361091539);
    msg.setSource(43073U);
    msg.setSourceEntity(145U);
    msg.setDestination(56857U);
    msg.setDestinationEntity(29U);
    msg.name.assign("SCDXIGXLTMZBNYJIYYFQIMGTALLXIHTRSAVQUIJMNEOFWQPGCERIJAWOHDRXHZKARGUPBYONMCQYVYJVSKMPHVNTCXLHWQUIBQSBFHODYDERUNCUZXETNZCIZUQZFJTMIXIC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PIAOAHRGINMBFUXCQIQNLEONTDHXSBFDTKEUMXKEVJXOBZNFNFTROSOLQAOKKSCFEYXTNPWPFWEGNZVMSAJIWEXCBRYARVJPXRAMHZIWYRWNTVELCSGKHSUGZLBMDQZSILQSDETJZVXYWOFWCEUYMUBCCPFKPIVXVHUDPEOXYHWBGAZZQDCPMQMADUBNMIDGJCQVQGZHHRLTTOCR");
    tmp_msg_0.value.assign("XOGWCKEXXMCFVUBIBLULLDXJWYCQBOIAWBAFJNUSURYCSUNGOVZSJWBHTXTUFLUEBRCTCYGWHKHLPRDALHFZIKHKQWNFGWFWEQOFOZJSICOSPTNMGEJCKETPIPMZSAEOIUTSHYKHRGBIMYKM");
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
    msg.setTimeStamp(0.166103947292);
    msg.setSource(63187U);
    msg.setSourceEntity(178U);
    msg.setDestination(20814U);
    msg.setDestinationEntity(200U);
    msg.name.assign("BPRJKGEWQCVGNAYZZYBTCJAWRDKMXSFDXKGSU");
    msg.visibility.assign("VQTXBUSRXMYDFOSGVFOLWPOFZHWQSHFEKSPRWXCNHBOYVLDPKTKPYAHBJWAZVBQAMWPYEHQJFDXMTBEDTZAAGZWMCRXIGWGQHBMGESIKRPNNWCOHTSDNO");
    msg.scope.assign("ALDCBJCURZYKUGBVUTKRZESLM");

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
    msg.setTimeStamp(0.693925175982);
    msg.setSource(26141U);
    msg.setSourceEntity(246U);
    msg.setDestination(995U);
    msg.setDestinationEntity(177U);
    msg.name.assign("PCHRFBLIGUKQJXYELSJKWNSQMIYOBEYRSXQJNCKFCXVHFUZTGVQXMWOMWDFLKWOSTFSEZBXXUQOTVCAZNGMWINLLILILYWVDHQBVDNKZLSAQKEZYBMSOVIKIRXCHMD");
    msg.visibility.assign("JSAYMJFUNQZMCLWWZYYLATVCHVCDYBPNVWRASEIBFFVKYZXDOEGGKZRSJLFZHEUIZEUKQMFRPOEPOHJYERRJDIFXEOZGMYRATCTOLDNSWCAUTPQLXKZPLTSHKUHQUZEVOKKNSEXJQHGFIUDHATXCYFWDBOAKYOXCMNQTWRRUKINBPGGZDISIXXBDMQULVGLSNISOPDVBXWMXQBAHVJWMIJCELSONNT");
    msg.scope.assign("PPIFXASMODQUO");

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
    msg.setTimeStamp(0.494215722617);
    msg.setSource(28832U);
    msg.setSourceEntity(248U);
    msg.setDestination(36442U);
    msg.setDestinationEntity(38U);
    msg.name.assign("RXPUIMIBWGFMEUGLCGCXADJLLRZOUHVIOTYEFWHPZEUSJSDYBVFCTTMHENIEPCRBKABDNMIGRWNFRQMEZDYOMQUMEFSJOUJCAHJPXKAHEZ");
    msg.visibility.assign("KTIOUMCQUDCRNZPMCAMUNZOYLLJTXRXFSVUREAW");
    msg.scope.assign("JYYCELVVODQLFDSXQLCWMNCKVIQNMOTNVRWIUUPWWPFQRWIDLSOROHOATBFCEEQXDBNBWTATWTCMUUVSDPMCAEPJIJXRHPJIISKRFNGTYPVRKGDIAWRSASLGYYHAFYVYLHEHXSNYDXABZGIATIIZAZDMXH");

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
    msg.setTimeStamp(0.369140085092);
    msg.setSource(49969U);
    msg.setSourceEntity(65U);
    msg.setDestination(29168U);
    msg.setDestinationEntity(40U);
    msg.name.assign("ZNCUAOVZMYLDADIJYXRCQOSLCOYRXCLWALPGFJWHJWULGZATUBDZPRRAYMVSFHOKCRKMKXCPSNFNQKGZIWYYEZYOAVGUWEDLRSEPGINVJJUKDPOEPUBIZQVOT");

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
    msg.setTimeStamp(0.617418712324);
    msg.setSource(13419U);
    msg.setSourceEntity(28U);
    msg.setDestination(21482U);
    msg.setDestinationEntity(131U);
    msg.name.assign("LXBZDEEBGIFNIAETZXYSIZWHASWKVFYMUNAAFDGJMNGJQZJCDUJH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OPZJUEKFYBRHFYTBABHUAFLUDWYWATBVOVLGWXXKSTHDWXRGYXCAPBEMUOODQUGBNEORJIZQEPSIXIFTJWKVSYAKJZIQBWGAATPFOCHHRJVVUAFNMXNKULSIOWIUDZGMKONSDYLTNLRXYHPCXAXOTYVECQMS");
    tmp_msg_0.value.assign("PZWTNXHGWFNFJIWJBAOJHRHPUYZZCQJFIWAGTPNRZPDPDCEDNWZIGTPBRFCRTSYMYVMPOEDAQVHHAJLVSKVTONMSRVDLKXLGBUENXSOFVINZJGRGBLYQPZXAKBDUUKEDRAXVVYCJXRISSMAFEUULGTXGUHMZDOQYWI");
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
    msg.setTimeStamp(0.222721998059);
    msg.setSource(45979U);
    msg.setSourceEntity(81U);
    msg.setDestination(64627U);
    msg.setDestinationEntity(34U);
    msg.name.assign("NSJQXXPINERUTSLSSUEIAEFEMGTHQOKHJUFUAOGHXJQIVADJAWCAZYPVZNPGAYICLMBMNRKPBZSVYYYQYBMDYVQQNKOFTNDFAVRCXYLBOMOJWLOFVWELTLHOEBFTZNDCDTIUFZQWEFEBGXSQKKXUSZRINHAZSHLZZRLGIXPKTRDSJNJPSGRJPGGUUQRYCITWDQRCVYLXMBABKJVGNWO");

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
    msg.setTimeStamp(0.156907329523);
    msg.setSource(35815U);
    msg.setSourceEntity(123U);
    msg.setDestination(24912U);
    msg.setDestinationEntity(21U);
    msg.name.assign("CLURUUVMVOJBLSHTROCJSVZIJNWBXMNOKADZPPZWZADANBXMHVCTDRGLZPGHFZIRBANXGIKWMIZCENGHYODQ");

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
    msg.setTimeStamp(0.83412494744);
    msg.setSource(57091U);
    msg.setSourceEntity(232U);
    msg.setDestination(62691U);
    msg.setDestinationEntity(187U);
    msg.name.assign("FLGOPHYBUJRAXAFXFKKQSVATDUHLLYLUMXOKWYNAGYQZUOEHQKYUJSKCOAMGIQQBTCKODIFJRHGEYXMRTYIJTVDYSBFLBPNZDLQTIEMZVSKDZUVWJXHOMQDGJLIAWWNZAEBDYMTWEKNFAGDXOKWCMCRGZSZMFLRCNPZEJQHSQIJBFBENCXVPNRXMRPQXGPAJGLOZSTPSGHRVCCVBKUJWRECYTHIIHANOWXVCRTDBPEOZSWUEHMNUWFIL");

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
    msg.setTimeStamp(0.310440059479);
    msg.setSource(38429U);
    msg.setSourceEntity(134U);
    msg.setDestination(16814U);
    msg.setDestinationEntity(2U);
    msg.name.assign("CNSMJFJXISZRBPQWFVDVUCEGIUXDRJCQYVKFIXREIZQJEUTHELSYPNXWPHQOGVLRLGMTJATCBRFQUKQMHWSWBOBEPYGASZBWKXAEDMNBVUZYQXKVIGKXWHGYAISQZMCEKLNUCEMOFYTDFFPUISOWYHMHTVRAUMZLTJAJWHICCBOMFHFJASELVKOIPLRGMZRFUSNXZRBDKODBGTOYRHJWINCYPUPENTSPVDLWDQNHLBNZKZOTDALP");

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
    msg.setTimeStamp(0.23592882833);
    msg.setSource(14661U);
    msg.setSourceEntity(199U);
    msg.setDestination(21869U);
    msg.setDestinationEntity(98U);
    msg.timeout = 3623109506U;

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
    msg.setTimeStamp(0.367036214783);
    msg.setSource(9637U);
    msg.setSourceEntity(120U);
    msg.setDestination(21208U);
    msg.setDestinationEntity(153U);
    msg.timeout = 3943080005U;

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
    msg.setTimeStamp(0.383788885665);
    msg.setSource(24577U);
    msg.setSourceEntity(33U);
    msg.setDestination(19313U);
    msg.setDestinationEntity(5U);
    msg.timeout = 1053012671U;

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
    msg.setTimeStamp(0.98181887235);
    msg.setSource(386U);
    msg.setSourceEntity(79U);
    msg.setDestination(62U);
    msg.setDestinationEntity(26U);
    msg.sessid = 2414062856U;

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
    msg.setTimeStamp(0.911215691397);
    msg.setSource(47077U);
    msg.setSourceEntity(181U);
    msg.setDestination(19303U);
    msg.setDestinationEntity(55U);
    msg.sessid = 4257055651U;

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
    msg.setTimeStamp(0.36471352427);
    msg.setSource(50541U);
    msg.setSourceEntity(99U);
    msg.setDestination(33865U);
    msg.setDestinationEntity(45U);
    msg.sessid = 373366360U;

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
    msg.setTimeStamp(0.885885398117);
    msg.setSource(32275U);
    msg.setSourceEntity(146U);
    msg.setDestination(54094U);
    msg.setDestinationEntity(191U);
    msg.sessid = 3967330567U;
    msg.messages.assign("TCKXKPXWTVZJBDCULOOTWFSYHZDMPVBSKKUNEUTPXOGYBIMGQYWHNDHTLAEITQLTTFGZVZLMZVDOKKSZFOEWWJJRNAYEEQBFQXMUXEJBCQXNDFRANRUVNNPCZHJUGHJGRFLASIQGSOFILGSDPRCIQINEYAXRRYEWTVRWAHPJLOMEQPZAVSKCCHYSPJEUCOTAMVBFQY");

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
    msg.setTimeStamp(0.187683536221);
    msg.setSource(27995U);
    msg.setSourceEntity(163U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(166U);
    msg.sessid = 2893984997U;
    msg.messages.assign("MQUAPWFNLRUVFZALGIGUQYIMWRDNVUXINWBTSPDPESKGPBTUWNGHCJRUCVKUGLQBEZILZHKZEEQEOFFXIJPGIGBQFLWQAIYBYGVPOJHAQEYJSYPBRJAKCXNCWJSGOKWLRDHYBMFVOUCWVITLTZWTFVURSRGESRCSKZHFVDNHPBUHMMHFJOTNTDYAZJLAYTYZDVIDJXBSXKMNMXXDX");

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
    msg.setTimeStamp(0.598215325272);
    msg.setSource(58409U);
    msg.setSourceEntity(164U);
    msg.setDestination(14015U);
    msg.setDestinationEntity(49U);
    msg.sessid = 899400904U;
    msg.messages.assign("WBRSJCAVLUJHEJIUYKSVOUWNOQGWQYPIMRPITEWAVBOBHIEAYPRKYAEKKJFGSHAZYWDMNSMQHDXILJZTWPDMTACNQZYSDGFCCMLHMRBMP");

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
    msg.setTimeStamp(0.59618190293);
    msg.setSource(50071U);
    msg.setSourceEntity(199U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(199U);
    msg.sessid = 3151061036U;

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
    msg.setTimeStamp(0.68007541359);
    msg.setSource(47434U);
    msg.setSourceEntity(128U);
    msg.setDestination(59119U);
    msg.setDestinationEntity(81U);
    msg.sessid = 241198214U;

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
    msg.setTimeStamp(0.0803607167152);
    msg.setSource(8413U);
    msg.setSourceEntity(225U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(176U);
    msg.sessid = 3610522641U;

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
    msg.setTimeStamp(0.597777852451);
    msg.setSource(55951U);
    msg.setSourceEntity(61U);
    msg.setDestination(62465U);
    msg.setDestinationEntity(96U);
    msg.sessid = 3165252034U;
    msg.status = 221U;

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
    msg.setTimeStamp(0.414652538878);
    msg.setSource(53042U);
    msg.setSourceEntity(140U);
    msg.setDestination(12885U);
    msg.setDestinationEntity(225U);
    msg.sessid = 3416130U;
    msg.status = 207U;

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
    msg.setTimeStamp(0.0579183556574);
    msg.setSource(47499U);
    msg.setSourceEntity(220U);
    msg.setDestination(49330U);
    msg.setDestinationEntity(55U);
    msg.sessid = 1867406974U;
    msg.status = 155U;

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
    msg.setTimeStamp(0.830577972278);
    msg.setSource(39522U);
    msg.setSourceEntity(192U);
    msg.setDestination(58368U);
    msg.setDestinationEntity(238U);
    msg.name.assign("RZVSFSVUHSGBIXKBAXNZZORRIQJAMFQC");

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
    msg.setTimeStamp(0.544906199858);
    msg.setSource(23581U);
    msg.setSourceEntity(67U);
    msg.setDestination(60656U);
    msg.setDestinationEntity(53U);
    msg.name.assign("DUMOWXFJYKRSTBJLGHRCPFZFKVCYAAFSSDOOUUBNIHGCSTADZOLVT");

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
    msg.setTimeStamp(0.695024813435);
    msg.setSource(48271U);
    msg.setSourceEntity(96U);
    msg.setDestination(517U);
    msg.setDestinationEntity(168U);
    msg.name.assign("FZBYKOLQMDKSDMCANAUIMGUZEPTZLKWDBHCJBORFTDOGVNVXGGWYPFYUUGTMEHXLTQESHUDIVSTCADWPDHCVAXSFIBWZFFANQFXXZBSUQTFYPZNPKZMJASTJGKHLWVO");

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
    msg.setTimeStamp(0.211214332882);
    msg.setSource(3510U);
    msg.setSourceEntity(111U);
    msg.setDestination(17350U);
    msg.setDestinationEntity(192U);
    msg.name.assign("CNPPEUSTUVNLYQGKRHFPPRMZQKOLLDCBQMEKYRHQUSOJQLVLFKEDCOMWVHEWLJGIBXKZEAMSLMHRIFJXKYKWQZCMVCHCYTEDVFQQMYESJTCAWALBYAHWRXFXMJXGAANIHMGFJLBWOHAXNSGOHJINCSZEZIVIBOQYDDRTYPUSZJGQUWNWNBPIMRFBCIWRBSPTUKDOAPEUNVIUGGBPGZKWSUBDXOYFXVJVPNTX");

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
    msg.setTimeStamp(0.0828424605544);
    msg.setSource(45106U);
    msg.setSourceEntity(97U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(69U);
    msg.name.assign("GPVFIVALLSCYZYTJOPZCIUHNTOQQJQFPXSASUDGEVKXRKURASNTOETRJBMAXXWRRKGQLUDPSXEAJVCPWVBSBJTDCWWFDNDMUNZSNGHHTXUUMKOJCGBGIPJSWXHVLKHDCZZDWZNTCMROZXZUQTWPGWEFQOSALCEPFKDGWAIPOEURNAFDCNMEVJHTFLMQFYISMNBIEYHE");

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
    msg.setTimeStamp(0.614529554649);
    msg.setSource(29232U);
    msg.setSourceEntity(120U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(190U);
    msg.name.assign("QICSEFRCGODBFFNWRNQZXBZPUXBFKGZQRJSIELGTIQYJWANYERYUGKINYCKODGKHPDMWOFKERTEMWALVDCQJLJWMVZJABFJSUDOGOUNUEHXWXUAODSXJNVQHBHMDIBLSTFTRUEPTECYTDQFKSKLZDHVZBNAIEQITJWPYCSRKGRALM");

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
