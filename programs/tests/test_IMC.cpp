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
    msg.setTimeStamp(0.46467541644254085);
    msg.setSource(31708U);
    msg.setSourceEntity(86U);
    msg.setDestination(33878U);
    msg.setDestinationEntity(142U);
    msg.state = 149U;
    msg.flags = 74U;
    msg.description.assign("QKPVPCAIUOZOALRXFHLWRARRF");

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
    msg.setTimeStamp(0.8714700841022427);
    msg.setSource(28271U);
    msg.setSourceEntity(149U);
    msg.setDestination(15883U);
    msg.setDestinationEntity(168U);
    msg.state = 225U;
    msg.flags = 115U;
    msg.description.assign("VPYSFZVENXDAHPNDAGAEXLJSWWFL");

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
    msg.setTimeStamp(0.5993508128982145);
    msg.setSource(15927U);
    msg.setSourceEntity(127U);
    msg.setDestination(55442U);
    msg.setDestinationEntity(193U);
    msg.state = 58U;
    msg.flags = 222U;
    msg.description.assign("NKBBJHIJSYHCHGKSTVSXWFJGKAVNTJWHLVOOWUBGMMIGUTQTSRWXBVDRLQGOZQFPFAUPMPXRFDRRVFZUTJWTXOANQDDYCIJP");

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
    msg.setTimeStamp(0.7705312707801574);
    msg.setSource(39158U);
    msg.setSourceEntity(11U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.05110723301003217);
    msg.setSource(36803U);
    msg.setSourceEntity(12U);
    msg.setDestination(49664U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.6881632670596466);
    msg.setSource(63054U);
    msg.setSourceEntity(230U);
    msg.setDestination(38077U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.6087630051519252);
    msg.setSource(5456U);
    msg.setSourceEntity(10U);
    msg.setDestination(37011U);
    msg.setDestinationEntity(223U);
    msg.id = 42U;
    msg.label.assign("ZSTJZPJATWCRHCNZXSIGBVAVXVOOZCCE");
    msg.component.assign("YJJYSITRMRZFJJGNZLJCBHAPWIPQTVIODPXJGXYJZZFBRHWDHCMXOBEJOGYQKBAQYCFLBSELEGYLKGNSFEXOVNKFCKUEAETVAADTHICSAXVNSHWDRYTOTLZCMWQLNWUBDOPPYU");
    msg.act_time = 50391U;
    msg.deact_time = 25192U;

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
    msg.setTimeStamp(0.8941495204101998);
    msg.setSource(60645U);
    msg.setSourceEntity(3U);
    msg.setDestination(10786U);
    msg.setDestinationEntity(28U);
    msg.id = 59U;
    msg.label.assign("RTTIJHVWAJWCOPQYXQTOIKUGJURXJISYNKVZEOZNQNPTPRKMDLQPEMFBCVMQZANRWIOLUBEZZDEBNFOVCHHXVTHPGGFUDIMETSARXAVBUNVRKWPGUCEQZXSZBKTDYELBPKAFN");
    msg.component.assign("UQJSHAPZGORHPJOEGKYRKNTYUTBYWNUDTKIPCHSMCEERFWQXUCIBRVXGPLRDZIJBOBSNILXWLNXKEDPGSZQESVFKTUAMBXACQZUOZKARLQHABAGHVMONENSHBWFGIVOXQCPQYEZGCESMVDKVJKXYEVCRHFQICOFDSQMPCVOUNRZHPZMVLTVENWRZJGDOYYAKQJBGOHUDIXW");
    msg.act_time = 22425U;
    msg.deact_time = 55312U;

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
    msg.setTimeStamp(0.03836539546804241);
    msg.setSource(22840U);
    msg.setSourceEntity(185U);
    msg.setDestination(33223U);
    msg.setDestinationEntity(91U);
    msg.id = 210U;
    msg.label.assign("NVESGZCJUAISMDHIBYMQJPKVOHZFLZGCJBQHGITJGUEDEQKUOWLNZTNFDOPTPLHXMWQOAWWFBXHGJQTNSINNERMGCICPTXDARCKPELVYUKVZWGBHLCMAEOFPNJMTDXCKTRHFQFYKCCBRHIEFLXVAYMDYRPYNTOUTZWSAUGZMRMIOOTKDQBIJUDEKSFBXSBAGFYPYGULRSDEARZUWYJSZ");
    msg.component.assign("LMHLPAZYNFAYIREVJMSDIWAUFCNLFLZKBKOOUMAXTTPIJNHFTWHDRHIXDRWZJKAKPQUTCMFVZDEOYCRPKTXHMYEXWNZBVJOTLVBCRKADMIUQEINYUKJCPGCVXGHNGHWPMGBENESXICSTLWMDDJLZBQ");
    msg.act_time = 50121U;
    msg.deact_time = 10777U;

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
    msg.setTimeStamp(0.9193410352931348);
    msg.setSource(62284U);
    msg.setSourceEntity(99U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(190U);
    msg.id = 18U;

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
    msg.setTimeStamp(0.020243545454442957);
    msg.setSource(28282U);
    msg.setSourceEntity(110U);
    msg.setDestination(48735U);
    msg.setDestinationEntity(241U);
    msg.id = 75U;

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
    msg.setTimeStamp(0.8311567643999496);
    msg.setSource(38973U);
    msg.setSourceEntity(144U);
    msg.setDestination(44766U);
    msg.setDestinationEntity(112U);
    msg.id = 91U;

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
    msg.setTimeStamp(0.401532793235573);
    msg.setSource(40497U);
    msg.setSourceEntity(123U);
    msg.setDestination(19241U);
    msg.setDestinationEntity(55U);
    msg.op = 69U;
    msg.list.assign("BNBOSOPFNCPVOHKSSAYUEQVPIUWJJNTZOEHFNLBHUWYTMGZXHQVTFCTOYBVGZFDAYZHLACMQIVLOPLHJUECWMUGGEVTBJYNWRLSCITGSDKLFKCXEKMMZCXKZUPKCWZIIGZIQJZIVETWVXGTSDBIBWLFYAUXAKIJMEQBRFVXXQXPHGDSYRMQLRNCMY");

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
    msg.setTimeStamp(0.0001660195338197834);
    msg.setSource(44072U);
    msg.setSourceEntity(21U);
    msg.setDestination(44911U);
    msg.setDestinationEntity(78U);
    msg.op = 238U;
    msg.list.assign("UCFBIMLKXEJSNGNKOKCBXNMFLBIKQFWUOAUYXSKNLYYLSQZHACMBQQGREKNMDGNVJWR");

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
    msg.setTimeStamp(0.0212292891408421);
    msg.setSource(48454U);
    msg.setSourceEntity(122U);
    msg.setDestination(43439U);
    msg.setDestinationEntity(234U);
    msg.op = 148U;
    msg.list.assign("BVYGZCDQCPLKEGCFSZPCTNVMUJUPRLJSBYWFSVKOJCSRYMLUAUWFIWXJJOPLOIRGKDPLKTZGGTLMXUOVFITCCHROWUKBBYLJQWZIRKQNAODHQNGHFAXEPNRKORHDFXYLAVYKSXT");

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
    msg.setTimeStamp(0.5073263930992601);
    msg.setSource(23602U);
    msg.setSourceEntity(63U);
    msg.setDestination(37700U);
    msg.setDestinationEntity(209U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.9713879916014243);
    msg.setSource(29045U);
    msg.setSourceEntity(18U);
    msg.setDestination(58002U);
    msg.setDestinationEntity(88U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.005518637057094988);
    msg.setSource(19447U);
    msg.setSourceEntity(23U);
    msg.setDestination(62454U);
    msg.setDestinationEntity(199U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.4265462604529944);
    msg.setSource(3752U);
    msg.setSourceEntity(28U);
    msg.setDestination(31174U);
    msg.setDestinationEntity(11U);
    msg.value = 118U;

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
    msg.setTimeStamp(0.14748703932030893);
    msg.setSource(258U);
    msg.setSourceEntity(26U);
    msg.setDestination(19815U);
    msg.setDestinationEntity(108U);
    msg.value = 43U;

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
    msg.setTimeStamp(0.014229791696808602);
    msg.setSource(1222U);
    msg.setSourceEntity(17U);
    msg.setDestination(17290U);
    msg.setDestinationEntity(163U);
    msg.value = 237U;

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
    msg.setTimeStamp(0.9825494919147318);
    msg.setSource(41319U);
    msg.setSourceEntity(244U);
    msg.setDestination(22007U);
    msg.setDestinationEntity(85U);
    msg.consumer.assign("OIWUAJMGURZFPDRNJOBGEYXGTIPBNGEWPDXFYAMCDBVJPXTSUIZQFCIRSOQOUQJWMXGSLUPHVHWCWDAXDKWYPSVCJGZQGINFENLLJMSKYOQY");
    msg.message_id = 14436U;

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
    msg.setTimeStamp(0.5650248077327401);
    msg.setSource(61088U);
    msg.setSourceEntity(35U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("MWLWFOTORBCGHXDBAHJCKTHUOILKGYIBWLRPQGVWUGEQKAANGDCEAFEQAPSNMKOOTXINMEPOVHJDQZCOIAZICAZWUGWHPZAJURBRDENFUKPSCENTJDHXYEBKXFYMQVIKULJYTTLBVJGPSVZFEBQLEQYHRYLDYY");
    msg.message_id = 22794U;

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
    msg.setTimeStamp(0.969934092227016);
    msg.setSource(39659U);
    msg.setSourceEntity(166U);
    msg.setDestination(10376U);
    msg.setDestinationEntity(165U);
    msg.consumer.assign("CWXFLGERGZPHDDIXSWRFAMIUAGOEQGOFMOVYGQPMYATOKNQQSSF");
    msg.message_id = 23841U;

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
    msg.setTimeStamp(0.21187854408145346);
    msg.setSource(28628U);
    msg.setSourceEntity(110U);
    msg.setDestination(36239U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.44643847243905277);
    msg.setSource(27929U);
    msg.setSourceEntity(210U);
    msg.setDestination(55652U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.5652644518507598);
    msg.setSource(43683U);
    msg.setSourceEntity(8U);
    msg.setDestination(4659U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.4385331560853537);
    msg.setSource(35461U);
    msg.setSourceEntity(55U);
    msg.setDestination(42197U);
    msg.setDestinationEntity(242U);
    msg.section.assign("AIVKCWOMCELWISBVVBJUOKKEJZFTHTXITPRIEFGLSUPZDQZEXIOPJJNZDECMFLXHCXPVARUWMNNODVSNHRELKTGPGWHTWMBTPRJCYVKFDYRAFMVQDYAIRWGSGIEVVCKUXCOHLAZTQFKIWNYQDLABPHARJKCZENENPGXLQYFPTDKWFWTXEYCAABGRXUHJQSJKM");
    msg.param.assign("MZSUVYARILC");
    msg.value.assign("TZZDFZWKBVAMMBBBENKPJW");

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
    msg.setTimeStamp(0.05049524733038857);
    msg.setSource(37061U);
    msg.setSourceEntity(202U);
    msg.setDestination(17334U);
    msg.setDestinationEntity(108U);
    msg.section.assign("IQCOVPNQPUEPLLMDARVREDGGWSIBDSWRYRHUZBHFTSXYGSICMETKVPMWNGOMOLJMKLJNHQEMYGDQUFYIMDHBCZFGQJJHQZVYRJMNVLPICDUENYICQTTPKBROXUCWPRIBIHXKSSFLFASYWAZXEFCUTDQLYGEDWVZDXAKCKGRIOPJLNYUOAYARZTZWBWJFUCELTBOCNKVXZNNKBXBAMFHXHQHVMUAALESZKPEXSKGJIBWUVOD");
    msg.param.assign("SZYRWLURZOKVEKMTAKGATXMBZZSWBYGGWWMQFTYIPQKYDLKJCJFMBHHEBHQULFHCRQUXPJWNLSNADXPEEASOKZKDPNQNBALUVYJPHWVLVQHCKB");
    msg.value.assign("ADNHGOJWHZJXPVHYTPVVSRWDLQR");

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
    msg.setTimeStamp(0.2718932902254977);
    msg.setSource(5010U);
    msg.setSourceEntity(13U);
    msg.setDestination(12004U);
    msg.setDestinationEntity(39U);
    msg.section.assign("RAGDOXFGKKYLTHTUUGBCNMWHSENXWVNUAPZKIKFJKGGMBFFZGAUIDIMPLYQNPPTAVYYTUCHOBQMJAIRHQSBOHFMAYBBXMCKJZFZVCNDRZJXVEHINSNXCLYDTDELOQOICVJASRGJVVKIYEJCMELFZPSGOEPWDNLIWTXIWVUWDA");
    msg.param.assign("GAETIYRQOPTZYJPDMWDSBFDWWUICOYNRLPQVSRHWRSUYYFCTEBZHJCVGKFUMZFQTBCHXKMGPKPLVQQFUCELUUAIUHHGLIZMAQMMPEOYHJXZICSQBGXVREVOFTVDFXNZPFOQJHUIRRL");
    msg.value.assign("OVBAWHZCGNYJYUDTRLHZIAAOTLUYCIQRBZFDLIYXMJIYUIVDJLTTZWXKHDXZHJDUUDDEMVCLKEITMEVTXLGMWSYGQMPKFSAAKGKOJENSIEF");

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
    msg.setTimeStamp(0.13140008112035362);
    msg.setSource(37123U);
    msg.setSourceEntity(200U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(51U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.24172970726634135);
    msg.setSource(42997U);
    msg.setSourceEntity(54U);
    msg.setDestination(61293U);
    msg.setDestinationEntity(173U);
    msg.op = 182U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("DWONHLFKKUGCIMNERTJULYFKWMSVWQYDXYLBLKKHRBIOAVBYFDXWXNLTSNGVHTZGGWRTQMHHJIZPCHJPPRHKZRJFLCEFXCDXSADOAORHQTBQBEZYUXVCXJMQSQMMDNAKPXFQARSZQJCDNMBSPVOCIXTTIOVYKXZJAUNLBFHCFBZIOWUEOURRIRYYOPJZMMKIEZDYBSFPZYVENGGUFIPM");
    tmp_msg_0.param.assign("RAFKQKPODGJFRZDJUDIZNKJLVNLHXFQMYOTAGKYKSYHCKPNZHVJKWQTFEIYCSSDMHSWZBJGBUQEISYWKQBJXTOBDPIONPGECCPAMFRTSUYGXNIBGQRHGCSQLLLBXVDLHZFOIRDNOIULNYW");
    tmp_msg_0.value.assign("SJDHZOVIHSRFYSRVISFMGMFOLTIVWZDRFFZLOPCIPVTMXMVOBVNXNRTHGKIPZBHSDXCDCNOOJVZFBUUIYWSTKCEULQASU");
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
    msg.setTimeStamp(0.31907443292768456);
    msg.setSource(31838U);
    msg.setSourceEntity(198U);
    msg.setDestination(12445U);
    msg.setDestinationEntity(24U);
    msg.op = 218U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TUZOAMVDDGUWUMYHYGHDAQFUNPZZCKMDADEYKOYRCLCCQACWJFGCBZMNBDPJRNRNSRHBTYXSOVWHLLXHIJWKKNHJTHXNQJILFQRBLETWVEXGWMZIBVIWLWZFOSBMOVKYHMTAQIIUOLJUOKLATGNAVYE");
    tmp_msg_0.param.assign("UUCIQQDEDSBCGPRIUBNIKUTRMIPPCHSVCTFMZBVIOUTDAFYMZPNQXYLWNKBZVGEHYPTAKSPFFFZOEQETAAPYSIRHUBOXLXHZXGFKKKXNDWHRLWTKXAJVHTOOLXYGPVIFUMJJALUYFLGJPRQJBYLQHVDRSMLWNMCWRVHVRQJWZEIYEDHZWXDKZVSC");
    tmp_msg_0.value.assign("HYIBXCLQQHZILFBHYNJMENKBTVPUUSMNJDGTLMECQCFVRRNBVIESTTTGURXJZAXRWVZFPWLSOGPFKGUXDFYOBYLKYZXUADWQELSOOVSWAPRCKWGVHAGHYIGIJCJAPEIILHGGKDHXNFNOBKNPWHQZPRXCRYUQZCXXVIMDPLVQTRMMJUJFSADKSEWKEOLWIZNWAZSYVAECFFDWGUUYOMTDORRMMBNCFHJUOZKQCPJLDQSTMZBIEXVQPNHKADATST");
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
    msg.setTimeStamp(0.68131753617309);
    msg.setSource(19584U);
    msg.setSourceEntity(192U);
    msg.setDestination(6819U);
    msg.setDestinationEntity(245U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.6489190398278489);
    msg.setSource(37058U);
    msg.setSourceEntity(149U);
    msg.setDestination(51140U);
    msg.setDestinationEntity(18U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.24789675069517314);
    msg.setSource(42013U);
    msg.setSourceEntity(47U);
    msg.setDestination(38444U);
    msg.setDestinationEntity(67U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.17091871137549286);
    msg.setSource(44358U);
    msg.setSourceEntity(139U);
    msg.setDestination(54531U);
    msg.setDestinationEntity(9U);
    msg.total_steps = 3U;
    msg.step_number = 186U;
    msg.step.assign("UVXHPTMWDHHTEKRFSIJJEYVARZAQWUUBDMQHUJEFZSMTRFXXVZZYGJYBLGYLEWOFBBEWGUJXXTXWGRZ");
    msg.flags = 125U;

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
    msg.setTimeStamp(0.11990710024976514);
    msg.setSource(36223U);
    msg.setSourceEntity(121U);
    msg.setDestination(60878U);
    msg.setDestinationEntity(79U);
    msg.total_steps = 178U;
    msg.step_number = 115U;
    msg.step.assign("MOFBAZOOEGHTBSITXUVMUQLCPKJRDNUYFXMMDZRNVTYEMFOWLGKURKBYVXGZEABICQUOGUBWFJGOHSVPMIAYYGIXBDIHQEKZQUDULQGPKIOAASDNYXFFQJWTLOKTVQHSWHAWKFEEMXTPZJCEFCZ");
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
    msg.setTimeStamp(0.528372180843091);
    msg.setSource(59087U);
    msg.setSourceEntity(46U);
    msg.setDestination(30166U);
    msg.setDestinationEntity(28U);
    msg.total_steps = 35U;
    msg.step_number = 200U;
    msg.step.assign("UOQKKJZOZFPITOGBISTLFNHAMZOPECXFNNBHXJKHHANAKYRPNCHULGZBENNLQXOMOOUQZEWIVCUTUFCKPDDQFG");
    msg.flags = 74U;

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
    msg.setTimeStamp(0.860404152783509);
    msg.setSource(47938U);
    msg.setSourceEntity(17U);
    msg.setDestination(3416U);
    msg.setDestinationEntity(55U);
    msg.state = 43U;
    msg.error.assign("YLFXCKYYBAOIBLIVMTKEGHRFCLKAUPIQCXFVGTWNHYTQZLOINEHRTHLAOMZVZDIJTHWAZGKPLKBNSUOFNYDAFSMQTIDVWRMUVPFFQQQDPRPGXGOBWYRURSSJZJWNYEHTEVMXRNPDSQCXJXOWSQBPENMXALDMHGZVQLESGDPHBNXXQ");

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
    msg.setTimeStamp(0.4548949059321058);
    msg.setSource(25532U);
    msg.setSourceEntity(87U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(7U);
    msg.state = 224U;
    msg.error.assign("VFOSSXVHOTKGNTCCGMPZSORQFQJAATNHLUPAYVYRQRXKVNHCNCSLILLICDFNGYXJSNKNXGJDUHIEFBZSUEATABAEOMOBWFCVVLTMMYSHERMPZDQYZRPWRMSSNZCMXUKTLPCBAUOEJLGAWZFKBXJYXBEXMYRITJEOPEUOAIOVPDWHUIGJJZLYUJEQGEBVKFHQWQGDIQLZWPSCRDDRNRGQFCBTOUWP");

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
    msg.setTimeStamp(0.9755460436526902);
    msg.setSource(52403U);
    msg.setSourceEntity(164U);
    msg.setDestination(18216U);
    msg.setDestinationEntity(65U);
    msg.state = 136U;
    msg.error.assign("LHYKNGBCOMPVDOAEKXQIRMRBMZSWGQEONTWEQDUNTJTYVHFQOOUTKTFLCAKEWPSRBKBCFFLACWZYQVNCHLCMIQYYJRKIXQELOHAPXIWWFMOWHNLSQCHHIJOEUXGOCLDIBVIGZGRZMENZTYGNRFZ");

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
    msg.setTimeStamp(0.27272193669002676);
    msg.setSource(47730U);
    msg.setSourceEntity(198U);
    msg.setDestination(27513U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.8831645166926408;
    msg.lon = 0.2557059123510953;
    msg.height = 0.523230630658581;
    msg.x = 0.6456222998093533;
    msg.y = 0.12954490376360062;
    msg.z = 0.5308760574093427;
    msg.phi = 0.10911448447313232;
    msg.theta = 0.31486055361514087;
    msg.psi = 0.9452462241142363;
    msg.u = 0.9943858108862066;
    msg.v = 0.0048943038397201155;
    msg.w = 0.26643327226114333;
    msg.p = 0.9972304753660276;
    msg.q = 0.23879117474380807;
    msg.r = 0.7064182757740907;
    msg.svx = 0.7464317048182175;
    msg.svy = 0.4683191203344931;
    msg.svz = 0.3621648853988212;

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
    msg.setTimeStamp(0.04511747290027157);
    msg.setSource(30950U);
    msg.setSourceEntity(118U);
    msg.setDestination(63404U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.5166783735356916;
    msg.lon = 0.0019551720925014004;
    msg.height = 0.3053396292893049;
    msg.x = 0.01257396041031933;
    msg.y = 0.8252248535184414;
    msg.z = 0.5045773217990392;
    msg.phi = 0.6105833846787052;
    msg.theta = 0.1783424285559193;
    msg.psi = 0.4058601497104306;
    msg.u = 0.06282053645007013;
    msg.v = 0.6696565997225853;
    msg.w = 0.4206021334879978;
    msg.p = 0.8128559266567289;
    msg.q = 0.34646306768028934;
    msg.r = 0.3408303783505914;
    msg.svx = 0.5133815232400843;
    msg.svy = 0.025464375135044737;
    msg.svz = 0.04814751652384719;

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
    msg.setTimeStamp(0.2669863594973306);
    msg.setSource(3925U);
    msg.setSourceEntity(27U);
    msg.setDestination(46437U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.0960979945461915;
    msg.lon = 0.12332870802147178;
    msg.height = 0.40171735453767066;
    msg.x = 0.11718231920985445;
    msg.y = 0.4662890303914381;
    msg.z = 0.7381813553635508;
    msg.phi = 0.816241832292839;
    msg.theta = 0.694770556485564;
    msg.psi = 0.8239945148743455;
    msg.u = 0.04854843453046087;
    msg.v = 0.162977331981903;
    msg.w = 0.9855999934910131;
    msg.p = 0.7955209080223464;
    msg.q = 0.2975336755435174;
    msg.r = 0.4303642249401054;
    msg.svx = 0.37763691824060797;
    msg.svy = 0.7446896620654827;
    msg.svz = 0.3993953241326579;

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
    msg.setTimeStamp(0.2357565526134835);
    msg.setSource(20955U);
    msg.setSourceEntity(10U);
    msg.setDestination(14826U);
    msg.setDestinationEntity(132U);
    msg.op = 16U;
    msg.entities.assign("KQNTZIMQQMDJTZZXYSWXRZHNMYEKOLIRNNBWULXGXPGWDMWCISECFJZUOLKWCFEWYQFMLRETAYLDGPQDELCVGJCYFBHEGNURLHFSPPCCIFZVFVATHWAYQGURKLAGIKXOBBTEQCHKTBBYAJOVV");

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
    msg.setTimeStamp(0.4118992435923199);
    msg.setSource(24263U);
    msg.setSourceEntity(111U);
    msg.setDestination(65018U);
    msg.setDestinationEntity(84U);
    msg.op = 119U;
    msg.entities.assign("CRNDQZQOGOUKRJYIVASQAZMLFCBWOESEULUWWEVPRBNEESBRSHAQGAZVXR");

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
    msg.setTimeStamp(0.47524699868633247);
    msg.setSource(35947U);
    msg.setSourceEntity(148U);
    msg.setDestination(422U);
    msg.setDestinationEntity(217U);
    msg.op = 162U;
    msg.entities.assign("SDJRUKCWXYFZZKPUETFUEYUMQPKVWHRACGKJIREJNVIOTLVDYSGHEFQHURSFPSNKTRYBEPIFCAZMXHIONBGTWFKBWODYDDZKOYMUEXTJTSWGDXPJSBWYWBBEV");

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
    msg.setTimeStamp(0.46468810615587186);
    msg.setSource(35238U);
    msg.setSourceEntity(53U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(216U);
    msg.type = 129U;
    msg.speed = 12069U;
    const char tmp_msg_0[] = {38, -29, 107, -103, -70, 96, 70, -100, 48, 118, 100, 99, -50, -14, 37, -111, -32, -67, 103, -63, -23, -93, -76, 97, -88, 67, 45, 106, 64, -33, 34, -87, 110, 115, 114, 99, 103, -96, 126, -63, -34, 58, 62, 111, -89, -94, -70, -92, -108, 15, 55, -80, -47, -112, 1, 28, 100, 20, 39, -123, -7, -35, -124, 34, -51, -52, 31, -122, 89, -121, 117, -7, 21, -9, 8, -60, 94, -36, -78, -39, -79, -2, 17, 1, 83, 5, -2, 68, -19, -62, -33, -97, 79, 24, 24, 16, -18, -85, -42, 83, 53, 44, -40, -125, 55, -76, -62, 116, -128, -48, 84, 75, 65, 26, -41, 123, -123, -23, -102, -94, -7, -32, -18, -74, -50, 0, -83, -4, -76, -127, 64, -114, 78, -14, -104, -118, -67, -80, 2, 109, -112, 102, 4, -112, 13, 49, -79, 113, 33, -21, -17, -53, 88, 64, 18, -50, 87, 39, -45, -8, 64, 12, 117, 29, -56, -62, 41, 41, -99, -126, 75, 74, -28, 37, 103, -28, 12, -66, 11, 113, 44, -115, -78, 84, -41, -66, -114, -22, -63, -100, 75, 49, 8, 9, -124, -73, 5, -76, 69, -64, 55, 59, -119, 73, -115, 72, 108, 89, 49, 109, -110, -56, 7, 21, -110, -5, -39, 50, 4};
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
    msg.setTimeStamp(0.09965833163248827);
    msg.setSource(56290U);
    msg.setSourceEntity(180U);
    msg.setDestination(30663U);
    msg.setDestinationEntity(151U);
    msg.type = 107U;
    msg.speed = 20775U;
    const char tmp_msg_0[] = {-19, -63, 105, -15, -96, 6, 33, 120, 59, -38, -34, 120, -21, -110, -48, -59, 36, -50, -24, -34, -122, -62, -103, 65, -58, -21, -95, -47, 35, 101, -18, -51, -29, -90, 62, 99, -59};
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
    msg.setTimeStamp(0.9498865955115158);
    msg.setSource(28354U);
    msg.setSourceEntity(253U);
    msg.setDestination(63923U);
    msg.setDestinationEntity(175U);
    msg.type = 166U;
    msg.speed = 26241U;
    const char tmp_msg_0[] = {92, -124, 84, -80, 73, 53, 50, 74, 14, -47, -51, 96, -119, 34, 64, 71, 123, -21, 115, -103, 43, -52, 49, 85, -50, -64, -41, -74, 53, 19, 73, -73, -55, -48, -94, 126, 91, -51, 0, -103, -51, 120, 63, 50, 14, -13, -125, -127, -1, 67, -73, -110, -31, -116, -51};
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
    msg.setTimeStamp(0.18833848879250026);
    msg.setSource(10122U);
    msg.setSourceEntity(151U);
    msg.setDestination(43136U);
    msg.setDestinationEntity(31U);
    msg.available = 565776289U;
    msg.value = 137U;

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
    msg.setTimeStamp(0.24046739653680627);
    msg.setSource(8196U);
    msg.setSourceEntity(27U);
    msg.setDestination(685U);
    msg.setDestinationEntity(31U);
    msg.available = 3819472635U;
    msg.value = 201U;

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
    msg.setTimeStamp(0.5003018386701736);
    msg.setSource(30550U);
    msg.setSourceEntity(95U);
    msg.setDestination(44671U);
    msg.setDestinationEntity(1U);
    msg.available = 2234122454U;
    msg.value = 180U;

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
    msg.setTimeStamp(0.4459126760715044);
    msg.setSource(60443U);
    msg.setSourceEntity(253U);
    msg.setDestination(27123U);
    msg.setDestinationEntity(224U);
    msg.op = 125U;
    msg.snapshot.assign("BGPKCGLBIGQHLVHHTMHJVSLVKVLPKDZIXRZZVSRJWPQXCEYIMQLFHHYFXKECNUTPLQYQFVGDSSYVOTDWKEKETJSGNKBAUTHNHARDMWTEJDHFMMM");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.8204768275431868;
    tmp_msg_0.m = 0.3469137273684796;
    tmp_msg_0.n = 0.9459609706147181;
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
    msg.setTimeStamp(0.8432932355721058);
    msg.setSource(44495U);
    msg.setSourceEntity(139U);
    msg.setDestination(2669U);
    msg.setDestinationEntity(101U);
    msg.op = 78U;
    msg.snapshot.assign("QFKPECBPDBLYRGNUFVMMTGNIGVZRKAVOZPRZQVEPJDCVXPSHBUPCDWUKNHSIJJORXTKIZMYGDIAIIZARYCSKDUOKFTZJQYYGMWEBSCAWJWFVLSUZDELWQUCUIGSOHJGFQZMVBNSWMMLXIKBMJSONINKREYOQCLJNWQOTHHUUOLXCRLLVAPXLSAGYPOFHBXDJEFARSCTOCKYITXV");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 100U;
    tmp_msg_0.range = 0.4859658840973268;
    tmp_msg_0.acceptance = 68U;
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
    msg.setTimeStamp(0.2970566988318688);
    msg.setSource(6705U);
    msg.setSourceEntity(132U);
    msg.setDestination(28037U);
    msg.setDestinationEntity(221U);
    msg.op = 85U;
    msg.snapshot.assign("ZORBJUEBEYJGNDLTWWHUHXFCSSPLCPXTDXJWQUPPLVRKVQRBHYRFRXDTTPPGEGOHIPFATINCHTYPMCBGNXCWJTUZPRNNOBKDKNNYRABYKQVUSZFFCBKWRMEOOUKVLQMXXGVMMUEGJFYIHCDZXWGOBWKHWBSGSUCKDJLDMIQGAISXNFVAHIMZYIWPQSOHEIOZFKZLMDSIFUQTQOVZJVZQIKLLYTNCADYECSAUMORAL");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.9308096817252522;
    tmp_msg_0.x = 0.13914778738857725;
    tmp_msg_0.y = 0.49286015252045146;
    tmp_msg_0.z = 0.5916620971295389;
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
    msg.setTimeStamp(0.4212378959899489);
    msg.setSource(15657U);
    msg.setSourceEntity(69U);
    msg.setDestination(10778U);
    msg.setDestinationEntity(186U);
    msg.op = 228U;
    msg.name.assign("EIOCOCWTNEWGKWNPDXXZWJSZZLPEXEXQILTCWGPJVOCFSYBXQMJKLSRDZYVXLGWHLUDJHQPAKUSKFBGDBTBRRIRLSCMFK");

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
    msg.setTimeStamp(0.9201100439995513);
    msg.setSource(61930U);
    msg.setSourceEntity(155U);
    msg.setDestination(43778U);
    msg.setDestinationEntity(22U);
    msg.op = 237U;
    msg.name.assign("EKUDTTBRFQMRBCMUVPROZCWNVCUYFWZOQFIJOYKUYEBXZTTHKTBUYQPBFONAMSEXPMIUWDZXFOYTFEIXJNFLYPXQYRGSCPOMJLEEHQVDBGW");

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
    msg.setTimeStamp(0.1584390599066814);
    msg.setSource(29207U);
    msg.setSourceEntity(50U);
    msg.setDestination(65299U);
    msg.setDestinationEntity(144U);
    msg.op = 124U;
    msg.name.assign("JLWGJXKTVOMKNGFKASQANDPDPIRJZWHPDFWBFIZXVIKBAFLWWQDYFLDTXSXMMFKMUYEONN");

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
    msg.setTimeStamp(0.7326478552248894);
    msg.setSource(61483U);
    msg.setSourceEntity(110U);
    msg.setDestination(22740U);
    msg.setDestinationEntity(117U);
    msg.type = 64U;
    msg.htime = 0.5784878234372441;
    msg.context.assign("VODOQXUYNITPVULKVHJRMHGWLTGADZLUBUQPBYSHKACAVMSYWNDJPFXKTNPZJCIJVHIEATQZTPJITCYCZEBXSCJUZRAGETCLOWPCQMXIBCUANFEDBABOODGGDEZNSXBIQFHDWDQCERMUWQPDSHVYXLKHJNPPIKVENXMEZAKOEC");
    msg.text.assign("DNQNGZNILQJQADZVPZVQYNXMZTDJUMYHKEZHRCMRUXKBIYAGPNCOTNIONZVRVLEUVHRCBACDEFOFAFUPSKDEKLGSFUKXEZESWTHEPSQEBCUXHICRMWWVKBYZRXJTAMAWJJWOXQNPWREITXUFQGPBNDXKGVJYWCFWVOZNIITSRCHYOXQJKAYLGPESTLLYTJDMRURZX");

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
    msg.setTimeStamp(0.9898724261605393);
    msg.setSource(3035U);
    msg.setSourceEntity(58U);
    msg.setDestination(48911U);
    msg.setDestinationEntity(90U);
    msg.type = 101U;
    msg.htime = 0.9675226495004511;
    msg.context.assign("JKOTHMRWKPZNBEQCVGCXIBRLRLKDLAQRELNXARTPYBSTBZAEFVSCNCIUZTLKDDJKAGLMVESMCNMMOSWPQYUMCAXGKFCIEZAYECMVXHFPPVDZQ");
    msg.text.assign("FINKYSPYYFDITJTVWGYHQVUMNGKZTDXFSMTKQZD");

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
    msg.setTimeStamp(0.836728753949284);
    msg.setSource(64210U);
    msg.setSourceEntity(216U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(242U);
    msg.type = 62U;
    msg.htime = 0.0700029210375176;
    msg.context.assign("GONKWHICDSJB");
    msg.text.assign("KOIADMDRDMGLYPHPBEVTHPCLXYSNOQRTTINLAWFXICLYXVGHOWAXPDRBOFDAKJHRPFGBJZSWIHSWNJTCFUXQUGEJPSKMRLZYTGEHAOYVUWMDGUYFGRHBCUAQFDDUJIFIWBJCTCQLTLANEY");

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
    msg.setTimeStamp(0.5566626371749365);
    msg.setSource(43804U);
    msg.setSourceEntity(62U);
    msg.setDestination(49441U);
    msg.setDestinationEntity(114U);
    msg.command = 79U;
    msg.htime = 0.6982941947378387;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 234U;
    tmp_msg_0.htime = 0.6868628126750095;
    tmp_msg_0.context.assign("EWASUUIGITBLPFMMOCRZXANOJTPQ");
    tmp_msg_0.text.assign("WMYSZZFZMHQFIFEVBJUUHEWJTQPYNRKUFPDCLYOJZNKBBACBMELNQZWPJPXIOWAMXPSXEGGJZOHOWQXAUUKRAIMTARURUJVTXGNVKWITXIRGSESQSFBUDPHECTGOTXHRRLTAKEILNMVYRAIAONJDVTFPNHOZSWCMYGHEBQQATCFQWHMUBVYITRXGBJHPYCPDCYDLS");
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
    msg.setTimeStamp(0.04547116895126346);
    msg.setSource(54946U);
    msg.setSourceEntity(128U);
    msg.setDestination(17839U);
    msg.setDestinationEntity(146U);
    msg.command = 102U;
    msg.htime = 0.3575648349306536;

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
    msg.setTimeStamp(0.8366428787064669);
    msg.setSource(10288U);
    msg.setSourceEntity(186U);
    msg.setDestination(4010U);
    msg.setDestinationEntity(199U);
    msg.command = 158U;
    msg.htime = 0.17658235394382804;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 160U;
    tmp_msg_0.htime = 0.3195179487965165;
    tmp_msg_0.context.assign("JMXDOKSWZEJWUTEGRKFZTNPXWKOFC");
    tmp_msg_0.text.assign("HSPETBCOIDXICRXLCPRBYEDUVXJMSOHZUOTIFKQLEMKCPFADCVGRYTB");
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
    msg.setTimeStamp(0.20811192496000686);
    msg.setSource(62007U);
    msg.setSourceEntity(42U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(127U);
    msg.op = 143U;
    msg.file.assign("BAGGADMAOFUNBAUSYMUEYDRSGPIKCZTZAWTIJODDRDOYKSKZAZHZKOZFBJOXLVCCHQSUIYAIPWTCPFHTGGBZHEVJMOWFJLQBWLRPXDPYPXMWVJNPEFCSDLJIVUMVEJPBSBPYKSHVMOACIQCVSRFSBNTYQKODGQFITJZBHVKENLCUNEBJLHNOTIAURMK");

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
    msg.setTimeStamp(0.3586625982673727);
    msg.setSource(47819U);
    msg.setSourceEntity(236U);
    msg.setDestination(21576U);
    msg.setDestinationEntity(216U);
    msg.op = 251U;
    msg.file.assign("LETYFRLVYJPDJXBMDHICOKEIUBIDVSTIGPVNFNXGVMRQSLOJPCGVEZJKZOEMNPXGYWNAKNLXPMHKVDUT");

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
    msg.setTimeStamp(0.05325705388078772);
    msg.setSource(18069U);
    msg.setSourceEntity(9U);
    msg.setDestination(15672U);
    msg.setDestinationEntity(112U);
    msg.op = 83U;
    msg.file.assign("GJUGELCYUOVPRHSQLGYNVVLVSAPCMYYYNQCXHJZKTYASNFYFGHHXZWUWIIQAEKWOKSZLUSKANDAUNPPMMB");

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
    msg.setTimeStamp(0.8049990840783141);
    msg.setSource(18788U);
    msg.setSourceEntity(132U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(128U);
    msg.op = 80U;
    msg.clock = 0.014631621753019575;
    msg.tz = 82;

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
    msg.setTimeStamp(0.651172924558776);
    msg.setSource(4763U);
    msg.setSourceEntity(160U);
    msg.setDestination(31945U);
    msg.setDestinationEntity(185U);
    msg.op = 142U;
    msg.clock = 0.2954950783894268;
    msg.tz = -77;

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
    msg.setTimeStamp(0.9446907385267173);
    msg.setSource(23146U);
    msg.setSourceEntity(100U);
    msg.setDestination(10813U);
    msg.setDestinationEntity(39U);
    msg.op = 111U;
    msg.clock = 0.8590944050436073;
    msg.tz = -61;

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
    msg.setTimeStamp(0.9304293713894886);
    msg.setSource(32418U);
    msg.setSourceEntity(70U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.5387077085981987);
    msg.setSource(45520U);
    msg.setSourceEntity(148U);
    msg.setDestination(45592U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.7709043487706211);
    msg.setSource(54115U);
    msg.setSourceEntity(155U);
    msg.setDestination(42566U);
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
    msg.setTimeStamp(0.8380050947672819);
    msg.setSource(6583U);
    msg.setSourceEntity(223U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(150U);
    msg.sys_name.assign("QQFSYBMKHSWMEOOQXTBLHBESPWKWZGMIGMQYMQBBPVKYFECNHZEGQUJWKIPZJOBHSEHJFGKDURRATKILLDONRSJLRGNPOAYVUYICYZPIZKVYOWAW");
    msg.sys_type = 138U;
    msg.owner = 35391U;
    msg.lat = 0.9010761114739587;
    msg.lon = 0.9073693584784;
    msg.height = 0.5552682595410531;
    msg.services.assign("HWMFLVKROBZPLFXTTSGHVDPDPKZWBDZKXIJVISUPUTWGOILCYSTYPZBSVVTELBZBAGXGYWRWDNMYEEHLANIWRKERVZNFCBAXHOLDSNQIQEFFNFDRRIMNHQHEXCECTGSBMQKDWTOVNWGJGANZOFXOKCXKQRJJFMYULAQLEVMSNPLPKJATTQAYHUUYVROLXHHEPXUPCBSRMOQJPTVACGIJBONACJHXJIOFZUZGKYIBY");

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
    msg.setTimeStamp(0.6199567454548798);
    msg.setSource(40312U);
    msg.setSourceEntity(200U);
    msg.setDestination(44290U);
    msg.setDestinationEntity(202U);
    msg.sys_name.assign("CGWEGOZJTJJBIQMHFSRMUFZKOVPELDSSWUFGCGFZDSHBSEXILPGHANTRUABLFQDZVCLQXJHMALASPJKNRPVCGEHDQQWBKMQKPUICDHVZMEXLJPRXMYVYAGNRYRDFZINVEGCUWKDGIOFBRXGCTYNSDVEXMQINJHQTYWZSNIHZJD");
    msg.sys_type = 121U;
    msg.owner = 57308U;
    msg.lat = 0.2624513003169363;
    msg.lon = 0.6459755334881654;
    msg.height = 0.790930568871328;
    msg.services.assign("FVOXIAHDCEXZMULGGTUJEXJACHGHEYXDSPTGWPKPFDQCGTZYITBEZQROLNAYYFGRORSVIVNHAECQPVXKWPUZMYRKAADFOMHLGPNOSBCPWOKAVXFBJTJICUUCLSRSFIECZMITKRZYLJNOWIIOAWBZSDKHBLYZEJNHQUTQST");

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
    msg.setTimeStamp(0.5840228789584291);
    msg.setSource(33409U);
    msg.setSourceEntity(45U);
    msg.setDestination(2578U);
    msg.setDestinationEntity(248U);
    msg.sys_name.assign("LGFHWMXTQVDOGKLLEVTCZCDLBD");
    msg.sys_type = 165U;
    msg.owner = 17470U;
    msg.lat = 0.239986895008789;
    msg.lon = 0.8370255142225957;
    msg.height = 0.07579098948045859;
    msg.services.assign("DNAQTRYGSLPKPJTDYIWHDSDMNFFYUYVVQTONHXGOSUNEDAKYROVSVKZTOEIWFIOEAPRFOYSMLXWBOLIEKDSBVZSZUZGKCUNAVBIWBTZPLNMINGRCEWHQPMHHXWUHXJXEE");

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
    msg.setTimeStamp(0.4933796104417979);
    msg.setSource(30355U);
    msg.setSourceEntity(3U);
    msg.setDestination(61682U);
    msg.setDestinationEntity(24U);
    msg.service.assign("NHYELCHISIJFZQXRJRJJNTUZUKSAVJMXJSWTXTZESEBAPWYFPFDYHQFWUBVYNOTYSIQYOJUGTCMXKRLWDLRPAHLDXQNBDUYLKIBYUYHMXBFMZADOZDCSIZKDCWGGWWIVIKURPOVCIVHLCLAOWUBOEPGR");
    msg.service_type = 139U;

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
    msg.setTimeStamp(0.058540872921098996);
    msg.setSource(48680U);
    msg.setSourceEntity(133U);
    msg.setDestination(57256U);
    msg.setDestinationEntity(144U);
    msg.service.assign("IUAFXZDVWIHHSHPROJEZYCTWBMRPXKTAIJFUVQTWHDPRONNZLTEFFVZBWQWMWBKXQCYEEOLP");
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
    msg.setTimeStamp(0.3427343162403057);
    msg.setSource(48800U);
    msg.setSourceEntity(209U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(225U);
    msg.service.assign("NXSSAFHMUCOPNZJBFQVXTCHRHLMDHLZMZYCXEYGAKZNOZKLJTTUPBRXIJQDEPTYWW");
    msg.service_type = 151U;

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
    msg.setTimeStamp(0.8352924505657313);
    msg.setSource(37422U);
    msg.setSourceEntity(182U);
    msg.setDestination(26708U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8948628209692144;

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
    msg.setTimeStamp(0.7900892845684243);
    msg.setSource(41953U);
    msg.setSourceEntity(112U);
    msg.setDestination(39929U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6600581993152218;

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
    msg.setTimeStamp(0.3880525400617659);
    msg.setSource(4303U);
    msg.setSourceEntity(125U);
    msg.setDestination(41916U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5981047770166906;

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
    msg.setTimeStamp(0.39443229591278606);
    msg.setSource(23181U);
    msg.setSourceEntity(216U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9381864672610521;

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
    msg.setTimeStamp(0.5784718995993197);
    msg.setSource(14455U);
    msg.setSourceEntity(218U);
    msg.setDestination(32257U);
    msg.setDestinationEntity(120U);
    msg.value = 0.2860682418481103;

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
    msg.setTimeStamp(0.8237351049538187);
    msg.setSource(22980U);
    msg.setSourceEntity(213U);
    msg.setDestination(61884U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9857400146250682;

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
    msg.setTimeStamp(0.06313639794990566);
    msg.setSource(16507U);
    msg.setSourceEntity(61U);
    msg.setDestination(51201U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8268526887263875;

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
    msg.setTimeStamp(0.3883521513743484);
    msg.setSource(50560U);
    msg.setSourceEntity(229U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(211U);
    msg.value = 0.9379333153455386;

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
    msg.setTimeStamp(0.7694547470052125);
    msg.setSource(60340U);
    msg.setSourceEntity(105U);
    msg.setDestination(22827U);
    msg.setDestinationEntity(36U);
    msg.value = 0.3436163250746913;

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
    msg.setTimeStamp(0.49096031616112423);
    msg.setSource(64413U);
    msg.setSourceEntity(150U);
    msg.setDestination(35639U);
    msg.setDestinationEntity(196U);
    msg.number.assign("FABJHUQVRLHQCCYXZTFDGYFUELYXLZUUEXZADUGCTDCHTQZEVBGTQCWIYHWVVMRBYQBWNBAGOZURKYSSSSPQCGVVKJJNVDBONDNZNXLKNXPEUNMFJRXDLMFKMGSZPHBSOITSIQIACBDIASPTWMELBECDQOKWTMRLRZUONEAJWPQWCYMWROMPROKNODAUUJHCJFIZYETMORAOELYGXFDTTVSHHAEQRGAFPIKHHSYI");
    msg.timeout = 7075U;
    msg.contents.assign("NWJHUWRSQWHBNESJVTKGFECMGXTFH");

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
    msg.setTimeStamp(0.2992675398230136);
    msg.setSource(26196U);
    msg.setSourceEntity(16U);
    msg.setDestination(48201U);
    msg.setDestinationEntity(7U);
    msg.number.assign("RBGXTXSTLCDEUIMNZQBRQDKZEYNPGBCXZMCKXCIUIECGXEDOMWOFBYIYPZCJDBILLHHSBXVXYKPWWFIYHFAMF");
    msg.timeout = 31475U;
    msg.contents.assign("AGJWJUFJUHPIMWQAMEFWYNTELVZXEPKPQHZCFCZXDNQWVPJAVBQKIIOMJGUBKCHOBRMHFVOFTTSDSFSWOVGHXJZYAWDGXXEMBEGFUOKBNCD");

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
    msg.setTimeStamp(0.034482057601439076);
    msg.setSource(22231U);
    msg.setSourceEntity(140U);
    msg.setDestination(7861U);
    msg.setDestinationEntity(158U);
    msg.number.assign("RFBFIZXTOABDZIAAENXEDMCAUHSAQHMTJYLNVRAQYJFOWTPUSZGALSGTIXGKVPLDYGCXFXMHWXZQQPFJWQSXSVCKPUXRZTUTGQHOLZBYMILCKEK");
    msg.timeout = 49575U;
    msg.contents.assign("TVMSOBKEGIPKGHURRZYSSNWAQKJCIOEVVHZNNOGBHQEFASLHPHJTVYVIVMNVMZLFMAGAZUKVOZWEREPNKPQWJFZFJRDLXQJITDIJBAVOXHDAULLXEGZFQMIVBDEYJAPYRETTGOXNKZWWKPDNBOCCOYBAXRLYDQMNPUEJBALSDHUTFYUJSJXRPMSLMBRIGWTUXGFKQCQFHKLGWSOCCKFR");

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
    msg.setTimeStamp(0.4268618275943028);
    msg.setSource(23534U);
    msg.setSourceEntity(91U);
    msg.setDestination(628U);
    msg.setDestinationEntity(194U);
    msg.id = 176U;
    msg.range = 0.7715209259649568;

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
    msg.setTimeStamp(0.8261101130036468);
    msg.setSource(40480U);
    msg.setSourceEntity(139U);
    msg.setDestination(36140U);
    msg.setDestinationEntity(240U);
    msg.id = 188U;
    msg.range = 0.9804021179166194;

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
    msg.setTimeStamp(0.1284704408286984);
    msg.setSource(61410U);
    msg.setSourceEntity(199U);
    msg.setDestination(59128U);
    msg.setDestinationEntity(6U);
    msg.id = 47U;
    msg.range = 0.708381053926145;

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
    msg.setTimeStamp(0.8013562547262691);
    msg.setSource(61838U);
    msg.setSourceEntity(179U);
    msg.setDestination(8737U);
    msg.setDestinationEntity(172U);
    msg.tx = 6U;
    msg.channel = 34U;
    msg.timer = 17941U;

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
    msg.setTimeStamp(0.31844530518548875);
    msg.setSource(1970U);
    msg.setSourceEntity(27U);
    msg.setDestination(47682U);
    msg.setDestinationEntity(118U);
    msg.tx = 209U;
    msg.channel = 98U;
    msg.timer = 36963U;

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
    msg.setTimeStamp(0.4719045138197001);
    msg.setSource(30620U);
    msg.setSourceEntity(187U);
    msg.setDestination(35940U);
    msg.setDestinationEntity(224U);
    msg.tx = 108U;
    msg.channel = 108U;
    msg.timer = 15474U;

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
    msg.setTimeStamp(0.24285522026407314);
    msg.setSource(20031U);
    msg.setSourceEntity(85U);
    msg.setDestination(55273U);
    msg.setDestinationEntity(139U);
    msg.beacon.assign("PDUBGPNCHVDARZTKWYSKUZBFAWRBXENAFBVGQHOXMTIHMWYNILSUQDJOLOXDSSXVYTLCAPZZMRJPAJLYIDUGMRIQCARUWHOPJMEWMZKHEQWTKQQSANVIDRAHLROYXPLBHYFWFGQTQNKTZCPTGRFCLCZGMBYJESDBTMEGCYRBMTXWGSXFKIDJVQNGUECOPVLRSEJXNWEIAOMTZFBFSKCIIUXJVOBQFYNVGIUAFCOHUHUKZXYVJEWLNN");
    msg.lat = 0.6567950478074995;
    msg.lon = 0.9142276346293188;
    msg.depth = 0.20176380120233028;
    msg.query_channel = 40U;
    msg.reply_channel = 188U;
    msg.transponder_delay = 106U;

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
    msg.setTimeStamp(0.6522089077049874);
    msg.setSource(6508U);
    msg.setSourceEntity(149U);
    msg.setDestination(20048U);
    msg.setDestinationEntity(143U);
    msg.beacon.assign("KTXSCHBJKLDFVWVSQHUANUOPVZNZLJSKAIRKMBBETOZGUAKBWECZEGRPWVXCCXWXLKCYKDJDXUNGQTFCUDMZUDAHTROWWIOEPWEYCLUOPPHSNRJOCMABAIRHDEYMGQNBMJPMXIRTEDMBFYSAZHIVTKFVEOOISLYDYSLTPMGUATXPUYNIZLQCFLJXGOVDLPBOHNWGESEFKXGFTMUYGBNFHAHQRSMVYPJYIFBJIANQJIZW");
    msg.lat = 0.8047455307531853;
    msg.lon = 0.8472814999753269;
    msg.depth = 0.9261563734800254;
    msg.query_channel = 206U;
    msg.reply_channel = 212U;
    msg.transponder_delay = 239U;

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
    msg.setTimeStamp(0.09091793657185854);
    msg.setSource(64661U);
    msg.setSourceEntity(34U);
    msg.setDestination(46544U);
    msg.setDestinationEntity(53U);
    msg.beacon.assign("CPHCCYEBZEJNBVQDUYCUHXNIQFZTNYAUCGQJPAYMTTAZRVVTUDLHCFDGKBVLFMGJSFKKTKIAAMCTNWGYYVYXZEVAAHKHLJFFLLPBRWMWONQGTDPFRNOOEWADPPVZKZJGXKQPFELEIDKZRMSHM");
    msg.lat = 0.8700954286109174;
    msg.lon = 0.7835524237455707;
    msg.depth = 0.5967202069242143;
    msg.query_channel = 129U;
    msg.reply_channel = 14U;
    msg.transponder_delay = 207U;

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
    msg.setTimeStamp(0.16201997144094105);
    msg.setSource(55218U);
    msg.setSourceEntity(86U);
    msg.setDestination(29355U);
    msg.setDestinationEntity(49U);
    msg.op = 142U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LJIZWETIENMYGDTLCLNABQCNDMEEQMZBXWBFGPQZMFQBOSFRMKZDUSRQXMPSRSYRUFGKELVTLTIGHTELSYQYOSXMXFDITKKIXPEZEVDOJXJYCCAWXBWYVQTQXIWLAYBMPFOJHCOLHNDCDSJKIHWDVPTWWHMWXTRZHPGSVU");
    tmp_msg_0.lat = 0.22422614930642137;
    tmp_msg_0.lon = 0.3049815408002541;
    tmp_msg_0.depth = 0.36900003905067924;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 157U;
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
    msg.setTimeStamp(0.28106730048398987);
    msg.setSource(47626U);
    msg.setSourceEntity(217U);
    msg.setDestination(5647U);
    msg.setDestinationEntity(5U);
    msg.op = 236U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CZQAMABUXLFBNPSKAHJQDIDWMAGOXYKJQBKMLGTNVM");
    tmp_msg_0.lat = 0.8792796594464694;
    tmp_msg_0.lon = 0.6263940263062913;
    tmp_msg_0.depth = 0.7914756935448807;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 191U;
    tmp_msg_0.transponder_delay = 94U;
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
    msg.setTimeStamp(0.9025591223892779);
    msg.setSource(62375U);
    msg.setSourceEntity(131U);
    msg.setDestination(3042U);
    msg.setDestinationEntity(73U);
    msg.op = 157U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YSWYOZRLUNTUTXBFTVIKAVBPEASMPXVQDOINUKRBHWKIVECFNMVDPESUDMZTHQQAJMU");
    tmp_msg_0.lat = 0.5080012064976981;
    tmp_msg_0.lon = 0.6847522446906771;
    tmp_msg_0.depth = 0.22749740983169264;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 245U;
    tmp_msg_0.transponder_delay = 184U;
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
    msg.setTimeStamp(0.4351343414931894);
    msg.setSource(47639U);
    msg.setSourceEntity(117U);
    msg.setDestination(5312U);
    msg.setDestinationEntity(226U);
    msg.address = 149U;

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
    msg.setTimeStamp(0.1561105093173576);
    msg.setSource(39434U);
    msg.setSourceEntity(47U);
    msg.setDestination(44493U);
    msg.setDestinationEntity(140U);
    msg.address = 76U;

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
    msg.setTimeStamp(0.2382189156636615);
    msg.setSource(45594U);
    msg.setSourceEntity(69U);
    msg.setDestination(35804U);
    msg.setDestinationEntity(136U);
    msg.address = 130U;

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
    msg.setTimeStamp(0.9030612869536204);
    msg.setSource(23436U);
    msg.setSourceEntity(161U);
    msg.setDestination(37717U);
    msg.setDestinationEntity(233U);
    msg.address = 100U;
    msg.status = 115U;
    msg.range = 0.31691900950331076;

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
    msg.setTimeStamp(0.31027947649673293);
    msg.setSource(55996U);
    msg.setSourceEntity(238U);
    msg.setDestination(22282U);
    msg.setDestinationEntity(47U);
    msg.address = 195U;
    msg.status = 12U;
    msg.range = 0.10706317463426918;

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
    msg.setTimeStamp(0.8590432184502363);
    msg.setSource(42845U);
    msg.setSourceEntity(104U);
    msg.setDestination(3951U);
    msg.setDestinationEntity(25U);
    msg.address = 25U;
    msg.status = 51U;
    msg.range = 0.5095815645510454;

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
    msg.setTimeStamp(0.3331683439916078);
    msg.setSource(43191U);
    msg.setSourceEntity(131U);
    msg.setDestination(4687U);
    msg.setDestinationEntity(49U);
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.008269700997227125;
    tmp_msg_0.x = 0.048995223367241714;
    tmp_msg_0.y = 0.8264393275960827;
    tmp_msg_0.z = 0.9817262921173673;
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
    msg.setTimeStamp(0.23161354572333592);
    msg.setSource(13463U);
    msg.setSourceEntity(28U);
    msg.setDestination(32592U);
    msg.setDestinationEntity(130U);
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 68U;
    tmp_msg_0.x = 0.08843373913706676;
    tmp_msg_0.y = 0.17838385322704398;
    tmp_msg_0.z = 0.4159219040487683;
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
    msg.setTimeStamp(0.31324869525791743);
    msg.setSource(21568U);
    msg.setSourceEntity(208U);
    msg.setDestination(61492U);
    msg.setDestinationEntity(176U);
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 212U;
    tmp_msg_0.clock = 0.4905795761237943;
    tmp_msg_0.tz = -126;
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
    msg.setTimeStamp(0.7795343618642989);
    msg.setSource(49262U);
    msg.setSourceEntity(173U);
    msg.setDestination(8727U);
    msg.setDestinationEntity(140U);
    msg.enable = 223U;

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
    msg.setTimeStamp(0.38397169264142006);
    msg.setSource(43051U);
    msg.setSourceEntity(88U);
    msg.setDestination(41848U);
    msg.setDestinationEntity(194U);
    msg.enable = 179U;

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
    msg.setTimeStamp(0.6670054889792014);
    msg.setSource(49833U);
    msg.setSourceEntity(170U);
    msg.setDestination(28079U);
    msg.setDestinationEntity(143U);
    msg.enable = 174U;

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
    msg.setTimeStamp(0.999861244150974);
    msg.setSource(60175U);
    msg.setSourceEntity(90U);
    msg.setDestination(4579U);
    msg.setDestinationEntity(54U);
    msg.summary = 174U;
    msg.level = 177U;

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
    msg.setTimeStamp(0.7133636905975015);
    msg.setSource(45944U);
    msg.setSourceEntity(141U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(130U);
    msg.summary = 121U;
    msg.level = 97U;

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
    msg.setTimeStamp(0.2571635563912005);
    msg.setSource(47492U);
    msg.setSourceEntity(100U);
    msg.setDestination(50089U);
    msg.setDestinationEntity(121U);
    msg.summary = 128U;
    msg.level = 77U;

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
    msg.setTimeStamp(0.3214242708404692);
    msg.setSource(36966U);
    msg.setSourceEntity(60U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.4186831153402618);
    msg.setSource(64444U);
    msg.setSourceEntity(249U);
    msg.setDestination(13668U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.8995327060742244);
    msg.setSource(15533U);
    msg.setSourceEntity(187U);
    msg.setDestination(32652U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.3043342774467953);
    msg.setSource(20164U);
    msg.setSourceEntity(207U);
    msg.setDestination(10437U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.8362877500307443);
    msg.setSource(60333U);
    msg.setSourceEntity(5U);
    msg.setDestination(42789U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.6061369475923);
    msg.setSource(63714U);
    msg.setSourceEntity(211U);
    msg.setDestination(23210U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.3419227645274663);
    msg.setSource(40861U);
    msg.setSourceEntity(129U);
    msg.setDestination(36227U);
    msg.setDestinationEntity(76U);
    msg.op = 239U;
    msg.system.assign("XTZFIYUZHQZIDDQMURARCVFCXKPSGULQXIXNMQWRCMFIRBZXGYSECQSODMBJUHXOOFBDNVHKMYPYXBTIWVCFKXWPURXMWALJWTOPJBQHOLHLKYOAJJNPUNGEKIGFBRALEWNZCVRZVUETQGNGY");
    msg.range = 0.8757895988570362;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.9845238225375645;
    tmp_msg_0.z_units = 9U;
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
    msg.setTimeStamp(0.02081510570234335);
    msg.setSource(11853U);
    msg.setSourceEntity(73U);
    msg.setDestination(29152U);
    msg.setDestinationEntity(134U);
    msg.op = 78U;
    msg.system.assign("SDAVCZEYPGNEJAFAXCKZZWLEBIVMEQVOMHBYEWXAIXBTFBDIDGTCGDPZDYEZNPKCDSLFLSEFSQWXFTQJMOHSUJGVMIAURAIMSUQWMNQKKRFCRTSULRAUKHBXDGHDKKQCIJXFIMHJPYNVWWCPWLOLFGGCNQODTYZUCDNHLJQYJTZGVZAVPXRIBLYBMKPJVCSOEURXUIEUYNHYPXROUZNVBXWBTSRNJOYGGFQERVOOLTZPFOKBM");
    msg.range = 0.0020996371187196328;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 7933U;
    tmp_msg_0.lat = 0.5808861468005337;
    tmp_msg_0.lon = 0.04110412868333102;
    tmp_msg_0.z = 0.46239516576263007;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.01905174184108449;
    tmp_msg_0.speed_units = 101U;
    tmp_msg_0.custom.assign("QEYWDRICCZINGTPKMSXPGZVDOZHJTJXBIPFVXNJHLNVTYMRSBVBCVAREOZPDMUQDZWIKNMYWTQDWOMSVEVJGXICXVKUIAMYAFAOBWYUNNPRGKIADPBUEYWCXBUPAASOTBVRQCQWLFUGEPHFTGTNGTMRCFQCKJRKFAILZUJKZSMPNOGSVLAQSFZMEFLYUZLGETAUCEXLKJEOEHYDQYHXZJIRM");
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
    msg.setTimeStamp(0.44556554276179194);
    msg.setSource(29047U);
    msg.setSourceEntity(109U);
    msg.setDestination(48475U);
    msg.setDestinationEntity(239U);
    msg.op = 1U;
    msg.system.assign("HIEYTKXVPVDOSRGHBGSCTEVFCBGYVWUDEXRFGVHPDLUOJQWIHYWZKTAZAHQMRCGNAMOHULQYMIOHQQJZDOPVUVMTAMRCMWDZBYZWLXFKOKYTNCBZYRJQBKTBMUUUCWSQYQWVQAHDAFFDBILERXLIAZIUJKENXXDPEDLJCPXFPKEJFCKJUBJYLSAOKTLXJIANOFEOGSSLXGZHSBBIZPMRUQOWNMII");
    msg.range = 0.08225484271926164;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("XQSQTVIDFVSFETOCPTLTYVMSFCEXBZGFPOJBRZFJDIJZTAQHQWNVPMNTFYFFYSUQHUDHOPXEWWPIMKRAOGSVGHHZESVBDPAJRCKCBXCJCCRALMMSZRUBAWZLKITZYIQTDDBQZLYRNNXWQGWPEHGAICIMBJQRPGEUGVOBNHUAMELNJSAFW");
    tmp_msg_0.plan_size = 61494U;
    tmp_msg_0.change_time = 0.9985303283335756;
    tmp_msg_0.change_sid = 45201U;
    tmp_msg_0.change_sname.assign("QKXBMKHAAQQJFTXVIWDMHZYBRQOLARGGNFEIKZPJOYFFIQAROSKWKHXTLVSYSSOVORECGYCIBPA");
    const char tmp_tmp_msg_0_0[] = {-38, -50, -53, 103, -111, -81, 0, -118, 47, -57, -31, -22, -8, -11, 94, -56, 108, -125, -103, 48, 74, 57};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.30276799042577685);
    msg.setSource(33210U);
    msg.setSourceEntity(58U);
    msg.setDestination(15026U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.8057026146375967);
    msg.setSource(983U);
    msg.setSourceEntity(20U);
    msg.setDestination(62618U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.9813126641982327);
    msg.setSource(11599U);
    msg.setSourceEntity(83U);
    msg.setDestination(5306U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.3846933386526301);
    msg.setSource(14342U);
    msg.setSourceEntity(51U);
    msg.setDestination(27752U);
    msg.setDestinationEntity(249U);
    msg.list.assign("KLSLIDCIZIDCYMXHKPYJMOBVNHYYQJRWMXFGNFUVREPBLHLCPKXEBFTRSDKWEVHCHSLWBJWQQAKRGOOUWESQVLLTTOAGRASENPIMTAZXZLUQGZG");

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
    msg.setTimeStamp(0.73571357140985);
    msg.setSource(12308U);
    msg.setSourceEntity(119U);
    msg.setDestination(48594U);
    msg.setDestinationEntity(152U);
    msg.list.assign("KBRTAPBQHRHSTFXOIMQUHMLYPCBQXLSAYBVHFHZLUAEDLQKTIYSPWERIFOMNRJRUHWCPERNETCPKTQWKHEDCSJKVHDOUTONBXMENKVACBZTVPOZZYNQRILRDFGBPWCXBIZIGJSYYEQZXCWCOPVLEDXMSAJWXFOEZSLQGGGNQAHGUFFTEKHOJVAYTGRIDYIXPJYDNGFDDWRVAJCULBJXMWMYUWOUAKLFLZBNCIVNIZGJKKJVP");

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
    msg.setTimeStamp(0.1537016722292771);
    msg.setSource(62007U);
    msg.setSourceEntity(69U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(101U);
    msg.list.assign("QTZBBBCPLSA");

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
    msg.setTimeStamp(0.30842808377222075);
    msg.setSource(19010U);
    msg.setSourceEntity(68U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(17U);
    msg.value = 28164;

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
    msg.setTimeStamp(0.3774462380490733);
    msg.setSource(52440U);
    msg.setSourceEntity(150U);
    msg.setDestination(31802U);
    msg.setDestinationEntity(236U);
    msg.value = -27502;

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
    msg.setTimeStamp(0.9672931135252029);
    msg.setSource(60707U);
    msg.setSourceEntity(216U);
    msg.setDestination(57360U);
    msg.setDestinationEntity(146U);
    msg.value = 31958;

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
    msg.setTimeStamp(0.566253902263209);
    msg.setSource(27524U);
    msg.setSourceEntity(22U);
    msg.setDestination(469U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7247540062146975;

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
    msg.setTimeStamp(0.9168806668562611);
    msg.setSource(43978U);
    msg.setSourceEntity(135U);
    msg.setDestination(48443U);
    msg.setDestinationEntity(177U);
    msg.value = 0.5249404329781799;

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
    msg.setTimeStamp(0.41979005887541043);
    msg.setSource(5770U);
    msg.setSourceEntity(46U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(143U);
    msg.value = 0.00598867880896925;

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
    msg.setTimeStamp(0.2764867196545352);
    msg.setSource(33962U);
    msg.setSourceEntity(72U);
    msg.setDestination(24720U);
    msg.setDestinationEntity(220U);
    msg.value = 0.2642918031001775;

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
    msg.setTimeStamp(0.9368200486301467);
    msg.setSource(53422U);
    msg.setSourceEntity(48U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7454691828682526;

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
    msg.setTimeStamp(0.7550654049232658);
    msg.setSource(51917U);
    msg.setSourceEntity(16U);
    msg.setDestination(39994U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6934895436580759;

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
    msg.setTimeStamp(0.7172340993551405);
    msg.setSource(16425U);
    msg.setSourceEntity(7U);
    msg.setDestination(14506U);
    msg.setDestinationEntity(107U);
    msg.validity = 44286U;
    msg.type = 161U;
    msg.utc_year = 306U;
    msg.utc_month = 192U;
    msg.utc_day = 117U;
    msg.utc_time = 0.5750132691536759;
    msg.lat = 0.12398230233220742;
    msg.lon = 0.6562005094531592;
    msg.height = 0.20713051897090018;
    msg.satellites = 240U;
    msg.cog = 0.8836544328731548;
    msg.sog = 0.608950381542315;
    msg.hdop = 0.15068839288207736;
    msg.vdop = 0.23812453901379393;
    msg.hacc = 0.9646349467117684;
    msg.vacc = 0.9558171958169073;

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
    msg.setTimeStamp(0.5862973772016874);
    msg.setSource(38749U);
    msg.setSourceEntity(46U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(82U);
    msg.validity = 21231U;
    msg.type = 177U;
    msg.utc_year = 64965U;
    msg.utc_month = 82U;
    msg.utc_day = 229U;
    msg.utc_time = 0.461637450787875;
    msg.lat = 0.8751060451213875;
    msg.lon = 0.049825329982527755;
    msg.height = 0.9624543702442574;
    msg.satellites = 60U;
    msg.cog = 0.46746983834288636;
    msg.sog = 0.41321674983318823;
    msg.hdop = 0.6233508599971793;
    msg.vdop = 0.005144030011187017;
    msg.hacc = 0.11760552168005711;
    msg.vacc = 0.047210500451241755;

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
    msg.setTimeStamp(0.06333519722944125);
    msg.setSource(53877U);
    msg.setSourceEntity(60U);
    msg.setDestination(3328U);
    msg.setDestinationEntity(221U);
    msg.validity = 16801U;
    msg.type = 85U;
    msg.utc_year = 53952U;
    msg.utc_month = 183U;
    msg.utc_day = 170U;
    msg.utc_time = 0.9756922371615919;
    msg.lat = 0.48870925784115027;
    msg.lon = 0.05836174669500782;
    msg.height = 0.8548586694143605;
    msg.satellites = 9U;
    msg.cog = 0.543509322182533;
    msg.sog = 0.7577114907383391;
    msg.hdop = 0.6462056943585825;
    msg.vdop = 0.4836275869265855;
    msg.hacc = 0.601611578034663;
    msg.vacc = 0.9692986117966205;

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
    msg.setTimeStamp(0.6521993758332516);
    msg.setSource(144U);
    msg.setSourceEntity(76U);
    msg.setDestination(6759U);
    msg.setDestinationEntity(110U);
    msg.time = 0.49373224366055446;
    msg.phi = 0.9260986681693394;
    msg.theta = 0.1843090187278582;
    msg.psi = 0.18505033711622265;
    msg.psi_magnetic = 0.5290109629527675;

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
    msg.setTimeStamp(0.9088266868114445);
    msg.setSource(58717U);
    msg.setSourceEntity(178U);
    msg.setDestination(41918U);
    msg.setDestinationEntity(119U);
    msg.time = 0.4833470834774227;
    msg.phi = 0.39619588652415716;
    msg.theta = 0.09138763492083635;
    msg.psi = 0.6705435541591129;
    msg.psi_magnetic = 0.2440464545363904;

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
    msg.setTimeStamp(0.8549494295198374);
    msg.setSource(48236U);
    msg.setSourceEntity(244U);
    msg.setDestination(49771U);
    msg.setDestinationEntity(192U);
    msg.time = 0.0997684731624221;
    msg.phi = 0.7872259736675576;
    msg.theta = 0.4070528715575431;
    msg.psi = 0.9003999260071158;
    msg.psi_magnetic = 0.014059185850132883;

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
    msg.setTimeStamp(0.8444775242193895);
    msg.setSource(15502U);
    msg.setSourceEntity(18U);
    msg.setDestination(37761U);
    msg.setDestinationEntity(89U);
    msg.time = 0.43893639083247304;
    msg.x = 0.4054286867113499;
    msg.y = 0.8483438474364127;
    msg.z = 0.11578995225247035;
    msg.timestep = 0.5640695411886946;

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
    msg.setTimeStamp(0.22537956209292442);
    msg.setSource(55804U);
    msg.setSourceEntity(117U);
    msg.setDestination(40308U);
    msg.setDestinationEntity(75U);
    msg.time = 0.3310829459427176;
    msg.x = 0.2786351182757121;
    msg.y = 0.6506691416041829;
    msg.z = 0.06403430488636153;
    msg.timestep = 0.9383529120444585;

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
    msg.setTimeStamp(0.8952946345675827);
    msg.setSource(3415U);
    msg.setSourceEntity(171U);
    msg.setDestination(44770U);
    msg.setDestinationEntity(124U);
    msg.time = 0.9155471425877079;
    msg.x = 0.2115991414380135;
    msg.y = 0.9678264303903845;
    msg.z = 0.040519603916542524;
    msg.timestep = 0.9855415480419166;

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
    msg.setTimeStamp(0.02414428231124699);
    msg.setSource(30875U);
    msg.setSourceEntity(185U);
    msg.setDestination(3108U);
    msg.setDestinationEntity(59U);
    msg.time = 0.9325704652577722;
    msg.x = 0.48893992897560346;
    msg.y = 0.18862221985831695;
    msg.z = 0.3104480937016675;

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
    msg.setTimeStamp(0.614448059328415);
    msg.setSource(65356U);
    msg.setSourceEntity(72U);
    msg.setDestination(18064U);
    msg.setDestinationEntity(249U);
    msg.time = 0.7557955009201321;
    msg.x = 0.6948380597453886;
    msg.y = 0.08763707435326473;
    msg.z = 0.2376430017483736;

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
    msg.setTimeStamp(0.9311663599329688);
    msg.setSource(45650U);
    msg.setSourceEntity(208U);
    msg.setDestination(15979U);
    msg.setDestinationEntity(69U);
    msg.time = 0.4736450001885453;
    msg.x = 0.312500073279079;
    msg.y = 0.2648185625924865;
    msg.z = 0.4624063657685179;

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
    msg.setTimeStamp(0.48975885713299994);
    msg.setSource(57785U);
    msg.setSourceEntity(133U);
    msg.setDestination(41246U);
    msg.setDestinationEntity(100U);
    msg.time = 0.04917347578086906;
    msg.x = 0.35257875962385077;
    msg.y = 0.4884960899865908;
    msg.z = 0.6122880296350767;

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
    msg.setTimeStamp(0.5410196200882287);
    msg.setSource(22209U);
    msg.setSourceEntity(100U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(181U);
    msg.time = 0.5538564870142463;
    msg.x = 0.42070117110276883;
    msg.y = 0.9134510371811352;
    msg.z = 0.7799539103935909;

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
    msg.setTimeStamp(0.10360233953758591);
    msg.setSource(24892U);
    msg.setSourceEntity(160U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(48U);
    msg.time = 0.9137697857584447;
    msg.x = 0.40765702264266435;
    msg.y = 0.02954686252673755;
    msg.z = 0.1451854142086042;

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
    msg.setTimeStamp(0.1133209123696558);
    msg.setSource(18950U);
    msg.setSourceEntity(235U);
    msg.setDestination(16820U);
    msg.setDestinationEntity(172U);
    msg.time = 0.3433885046947259;
    msg.x = 0.5949942049733963;
    msg.y = 0.875601377664784;
    msg.z = 0.1920327833761697;

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
    msg.setTimeStamp(0.2889189374071942);
    msg.setSource(58182U);
    msg.setSourceEntity(111U);
    msg.setDestination(18057U);
    msg.setDestinationEntity(51U);
    msg.time = 0.39181908249421804;
    msg.x = 0.14186034006702541;
    msg.y = 0.8354567830063199;
    msg.z = 0.1283225847425663;

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
    msg.setTimeStamp(0.7334729808987029);
    msg.setSource(45422U);
    msg.setSourceEntity(229U);
    msg.setDestination(44874U);
    msg.setDestinationEntity(23U);
    msg.time = 0.3072381935007369;
    msg.x = 0.5726110468914051;
    msg.y = 0.5575668139731629;
    msg.z = 0.3100960860843567;

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
    msg.setTimeStamp(0.06454426092403243);
    msg.setSource(39778U);
    msg.setSourceEntity(253U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(122U);
    msg.validity = 213U;
    msg.x = 0.6524541755543948;
    msg.y = 0.04512287414772742;
    msg.z = 0.9043837419811062;

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
    msg.setTimeStamp(0.6976798838251003);
    msg.setSource(49548U);
    msg.setSourceEntity(120U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(245U);
    msg.validity = 62U;
    msg.x = 0.831619005395357;
    msg.y = 0.7850243451376233;
    msg.z = 0.6783809451627942;

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
    msg.setTimeStamp(0.7266452149509104);
    msg.setSource(54269U);
    msg.setSourceEntity(95U);
    msg.setDestination(8035U);
    msg.setDestinationEntity(94U);
    msg.validity = 241U;
    msg.x = 0.8163491470858615;
    msg.y = 0.05212348088765284;
    msg.z = 0.1295671961025816;

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
    msg.setTimeStamp(0.5156753812989905);
    msg.setSource(23412U);
    msg.setSourceEntity(191U);
    msg.setDestination(21854U);
    msg.setDestinationEntity(90U);
    msg.validity = 195U;
    msg.x = 0.9446376714755721;
    msg.y = 0.00450907478067597;
    msg.z = 0.45658542481873143;

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
    msg.setTimeStamp(0.7564990530531923);
    msg.setSource(7219U);
    msg.setSourceEntity(123U);
    msg.setDestination(56812U);
    msg.setDestinationEntity(185U);
    msg.validity = 1U;
    msg.x = 0.7595285713543689;
    msg.y = 0.045192090115529826;
    msg.z = 0.22785916524733507;

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
    msg.setTimeStamp(0.6002829262899282);
    msg.setSource(22510U);
    msg.setSourceEntity(138U);
    msg.setDestination(14445U);
    msg.setDestinationEntity(208U);
    msg.validity = 145U;
    msg.x = 0.3232712289355639;
    msg.y = 0.6626478982226304;
    msg.z = 0.9980321459867864;

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
    msg.setTimeStamp(0.09255335759591488);
    msg.setSource(33351U);
    msg.setSourceEntity(87U);
    msg.setDestination(53895U);
    msg.setDestinationEntity(216U);
    msg.time = 0.44951958415532023;
    msg.x = 0.746746514304014;
    msg.y = 0.892047467928672;
    msg.z = 0.8503104929397439;

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
    msg.setTimeStamp(0.7258973066252866);
    msg.setSource(12774U);
    msg.setSourceEntity(97U);
    msg.setDestination(11757U);
    msg.setDestinationEntity(169U);
    msg.time = 0.3256534459650048;
    msg.x = 0.990421459258326;
    msg.y = 0.5106963476886812;
    msg.z = 0.8121150084818772;

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
    msg.setTimeStamp(0.6079112659943634);
    msg.setSource(56242U);
    msg.setSourceEntity(244U);
    msg.setDestination(8256U);
    msg.setDestinationEntity(81U);
    msg.time = 0.21963487872451737;
    msg.x = 0.9844527882495652;
    msg.y = 0.5404255982946272;
    msg.z = 0.3543930322880474;

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
    msg.setTimeStamp(0.09935672859801481);
    msg.setSource(49189U);
    msg.setSourceEntity(31U);
    msg.setDestination(57515U);
    msg.setDestinationEntity(134U);
    msg.validity = 126U;
    msg.value = 0.17732937811914118;

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
    msg.setTimeStamp(0.843846696762178);
    msg.setSource(24359U);
    msg.setSourceEntity(20U);
    msg.setDestination(18169U);
    msg.setDestinationEntity(122U);
    msg.validity = 141U;
    msg.value = 0.7078628665719644;

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
    msg.setTimeStamp(0.9356349182594774);
    msg.setSource(55833U);
    msg.setSourceEntity(217U);
    msg.setDestination(57655U);
    msg.setDestinationEntity(40U);
    msg.validity = 178U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8422495422588623;
    tmp_msg_0.y = 0.4961058805725729;
    tmp_msg_0.z = 0.05992673898472367;
    tmp_msg_0.phi = 0.2281933919943493;
    tmp_msg_0.theta = 0.14716504052088342;
    tmp_msg_0.psi = 0.6827570161897432;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.005673895041094723;

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
    msg.setTimeStamp(0.4960589645900363);
    msg.setSource(61666U);
    msg.setSourceEntity(197U);
    msg.setDestination(39428U);
    msg.setDestinationEntity(208U);
    msg.value = 0.2144105618468206;

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
    msg.setTimeStamp(0.3941798273300936);
    msg.setSource(31295U);
    msg.setSourceEntity(171U);
    msg.setDestination(47918U);
    msg.setDestinationEntity(125U);
    msg.value = 0.13106613732772643;

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
    msg.setTimeStamp(0.9144036112137998);
    msg.setSource(46688U);
    msg.setSourceEntity(185U);
    msg.setDestination(35846U);
    msg.setDestinationEntity(95U);
    msg.value = 0.14017410687450282;

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
    msg.setTimeStamp(0.27882663689127807);
    msg.setSource(65060U);
    msg.setSourceEntity(210U);
    msg.setDestination(57759U);
    msg.setDestinationEntity(68U);
    msg.value = 0.05887335413720629;

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
    msg.setTimeStamp(0.5565719193900248);
    msg.setSource(16178U);
    msg.setSourceEntity(109U);
    msg.setDestination(63924U);
    msg.setDestinationEntity(104U);
    msg.value = 0.2096580670795527;

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
    msg.setTimeStamp(0.989372045970284);
    msg.setSource(46919U);
    msg.setSourceEntity(25U);
    msg.setDestination(16392U);
    msg.setDestinationEntity(68U);
    msg.value = 0.25848938624814133;

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
    msg.setTimeStamp(0.21696661147731677);
    msg.setSource(24403U);
    msg.setSourceEntity(148U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9699169113368584;

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
    msg.setTimeStamp(0.13508088460853218);
    msg.setSource(9710U);
    msg.setSourceEntity(249U);
    msg.setDestination(10255U);
    msg.setDestinationEntity(119U);
    msg.value = 0.46714031375983833;

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
    msg.setTimeStamp(0.09756949818997263);
    msg.setSource(22958U);
    msg.setSourceEntity(21U);
    msg.setDestination(26229U);
    msg.setDestinationEntity(171U);
    msg.value = 0.978861016069357;

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
    msg.setTimeStamp(0.9921329277888982);
    msg.setSource(34984U);
    msg.setSourceEntity(195U);
    msg.setDestination(39805U);
    msg.setDestinationEntity(122U);
    msg.value = 0.22167341164652965;

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
    msg.setTimeStamp(0.18125117687447412);
    msg.setSource(46131U);
    msg.setSourceEntity(197U);
    msg.setDestination(46082U);
    msg.setDestinationEntity(37U);
    msg.value = 0.17530757770887984;

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
    msg.setTimeStamp(0.28456632168054274);
    msg.setSource(32400U);
    msg.setSourceEntity(125U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(201U);
    msg.value = 0.6297076064234942;

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
    msg.setTimeStamp(0.9904126921932975);
    msg.setSource(30174U);
    msg.setSourceEntity(224U);
    msg.setDestination(43079U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5199811832015209;

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
    msg.setTimeStamp(0.802693493411877);
    msg.setSource(32098U);
    msg.setSourceEntity(56U);
    msg.setDestination(40222U);
    msg.setDestinationEntity(158U);
    msg.value = 0.3074454732140166;

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
    msg.setTimeStamp(0.11615691306453169);
    msg.setSource(60923U);
    msg.setSourceEntity(248U);
    msg.setDestination(11962U);
    msg.setDestinationEntity(78U);
    msg.value = 0.9317110591923434;

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
    msg.setTimeStamp(0.7920506573123737);
    msg.setSource(19168U);
    msg.setSourceEntity(93U);
    msg.setDestination(21062U);
    msg.setDestinationEntity(13U);
    msg.value = 0.07692079576809241;

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
    msg.setTimeStamp(0.7445677974955159);
    msg.setSource(8238U);
    msg.setSourceEntity(248U);
    msg.setDestination(23332U);
    msg.setDestinationEntity(27U);
    msg.value = 0.6853404261119628;

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
    msg.setTimeStamp(0.08653936830536557);
    msg.setSource(45023U);
    msg.setSourceEntity(158U);
    msg.setDestination(49584U);
    msg.setDestinationEntity(62U);
    msg.value = 0.04722863480219164;

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
    msg.setTimeStamp(0.7119803627480491);
    msg.setSource(16339U);
    msg.setSourceEntity(208U);
    msg.setDestination(49207U);
    msg.setDestinationEntity(249U);
    msg.value = 0.4447658023172436;

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
    msg.setTimeStamp(0.8550106844335045);
    msg.setSource(47185U);
    msg.setSourceEntity(177U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(64U);
    msg.value = 0.46289517098396527;

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
    msg.setTimeStamp(0.505104040022158);
    msg.setSource(59358U);
    msg.setSourceEntity(83U);
    msg.setDestination(58854U);
    msg.setDestinationEntity(225U);
    msg.value = 0.3574997547928528;

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
    msg.setTimeStamp(0.9649588728699277);
    msg.setSource(39499U);
    msg.setSourceEntity(129U);
    msg.setDestination(13945U);
    msg.setDestinationEntity(165U);
    msg.value = 0.12309818984061216;

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
    msg.setTimeStamp(0.659096286812737);
    msg.setSource(9648U);
    msg.setSourceEntity(145U);
    msg.setDestination(23827U);
    msg.setDestinationEntity(232U);
    msg.value = 0.37074661828974453;

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
    msg.setTimeStamp(0.6864877529206197);
    msg.setSource(21379U);
    msg.setSourceEntity(237U);
    msg.setDestination(50639U);
    msg.setDestinationEntity(7U);
    msg.value = 0.16085944899819082;

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
    msg.setTimeStamp(0.007812719809943691);
    msg.setSource(26693U);
    msg.setSourceEntity(167U);
    msg.setDestination(46378U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.0876136019280217;
    msg.speed = 0.03926848955090623;

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
    msg.setTimeStamp(0.44406106197306516);
    msg.setSource(34137U);
    msg.setSourceEntity(138U);
    msg.setDestination(51213U);
    msg.setDestinationEntity(55U);
    msg.direction = 0.7655186685441753;
    msg.speed = 0.09186129979639335;

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
    msg.setTimeStamp(0.6653392038102867);
    msg.setSource(21381U);
    msg.setSourceEntity(85U);
    msg.setDestination(43620U);
    msg.setDestinationEntity(77U);
    msg.direction = 0.2493003007211133;
    msg.speed = 0.6358785682258842;

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
    msg.setTimeStamp(0.8224599333094174);
    msg.setSource(10419U);
    msg.setSourceEntity(217U);
    msg.setDestination(42132U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9215161972041261;

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
    msg.setTimeStamp(0.668658718983564);
    msg.setSource(46259U);
    msg.setSourceEntity(26U);
    msg.setDestination(40108U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9519365219871185;

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
    msg.setTimeStamp(0.15572717556569515);
    msg.setSource(35599U);
    msg.setSourceEntity(225U);
    msg.setDestination(16103U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9620898633603471;

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
    msg.setTimeStamp(0.35283103801878557);
    msg.setSource(56599U);
    msg.setSourceEntity(56U);
    msg.setDestination(2017U);
    msg.setDestinationEntity(60U);
    msg.value.assign("HRZXWSTXOHQQEUDWBKGSZJQWODVWQVDFOCRTDAPGTQDZNCXPXAWXQYDFAQATZJOPMPURPZGJHRVWBSSDTNITSEIUXTLOCFVEXGANYDVKNUTBKIFOOXFFQCFSRFPPNJYDMKAQGALXBOUHLBQMS");

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
    msg.setTimeStamp(0.5096592632727859);
    msg.setSource(39275U);
    msg.setSourceEntity(5U);
    msg.setDestination(9907U);
    msg.setDestinationEntity(232U);
    msg.value.assign("BEWNQWGJSTXZUDBYBAEVWHIEDPUJEZPYADFLBGATKKCBNSVOCQLBDRVOUFXEJSVEQPGNZQMUGSHYUZSRBQTEVLBMI");

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
    msg.setTimeStamp(0.5736462667642767);
    msg.setSource(5195U);
    msg.setSourceEntity(244U);
    msg.setDestination(21036U);
    msg.setDestinationEntity(92U);
    msg.value.assign("AEMIZDDYXCCEAHCUTWZEYKJPSSXEWZHGBZQBWILCRRWPLSOQLAVYNFZAIIVBUYORQGVFFFCZQTSHNFVPTUDDMMKAPQUTNBGDAEJJBQSGUZHLQFNVIYUJERDTJPXKWZARVIMNJYQMNDDGEGLPNCKNPJNWZITPRSWGXIOLHYVBLMYCOZOUBQVWPXSOIKUFGNREFAXLHEXJTSTTXKPXCKEXCUHKBK");

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
    msg.setTimeStamp(0.8102352043637938);
    msg.setSource(17563U);
    msg.setSourceEntity(8U);
    msg.setDestination(63692U);
    msg.setDestinationEntity(30U);
    const char tmp_msg_0[] = {-45, 18, 81, 78, 66, 114, 62, -38, 102, -97, -23, -43, -34, -29, 14, 119, -81, 95, 112, 118, 27, -88, 102, 95, -16, -64, 95, 57, -128, -128, 54, -97, -48, -42, 43, -16, 4, 122, 22, 120, -77, -2, -17, -33};
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
    msg.setTimeStamp(0.5968292079935341);
    msg.setSource(39587U);
    msg.setSourceEntity(16U);
    msg.setDestination(5032U);
    msg.setDestinationEntity(136U);
    const char tmp_msg_0[] = {77, -31, 80, -117, 72, 110, -77, -126, -102, -85, 104, 91, -105, -97, 19, 123, -121, 110, -21, -24, -44, 27, -97, 107, -126, 34, 74, -39, -4, 45, 57, -63, -73, -103};
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
    msg.setTimeStamp(0.9114491021151123);
    msg.setSource(51535U);
    msg.setSourceEntity(94U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {-97, 91, 8, -94, 101, -60, -96, -105, -115, -114, 30, -19, 8, -126, 117, -77, -62, 65, 16, -121, -80, -123, 63, 55, 53, 118, -38, 3, -83, 43, 102, -73, 63, -43, 121, 80, 2, -51, -59, 69, 40, -86, 8, -45, 50, -56, -39, -110, 60, -101, 89, -108, -60, -11, -79, 71, -102, 54, -63, -34, 89, -112, 119, -52, -77, 61, -6, -23, -24, -21, -81, 23, 72, 8, -33, 16, -128, -45, 110, -83, -45, -119, 125, -57, -108, -92, -22, 80, -18, 57, -89, -110, -53, 1, -93, 56, 101, -57, -128, 33, -8, 7, -62, -43, -1, 68, -83, -114, 8, -12, 37, 1, 9, -16, 9, -41, 1, 119, 53, -3, -18, -56, -121, 126, -48, 121, -101, 107, 2, 53, -104, -78, 16, -74, 29, -28, 85, 123, 39, 115, -69, -50, 41, 2, 64, 26, 35, 57, 82, 45, -94, -101, 60, -38, -17, 0, -13, 49, 116, -107, -105, -112, 84, -55, 14, -34, -41, 93, 6, -127, 96, 120, 103, 72, 37, 35, 95, -79, 50, 17, -2, -94, 45, 82, 5, -128, 74, 58, -35, -92, 4, 93, 44, 0, 108, 77, -31, 32, 114, -3, 70, 105, -103, -43, 7, -101, -43, 18, -29, 1, 20, -76, -75, -54, 26, -71, 69, -12, -85, 101};
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
    msg.setTimeStamp(0.5245808173846709);
    msg.setSource(8716U);
    msg.setSourceEntity(122U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(123U);
    msg.frequency = 245765351U;
    msg.min_range = 35911U;
    msg.max_range = 50978U;

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
    msg.setTimeStamp(0.5372322704260429);
    msg.setSource(25735U);
    msg.setSourceEntity(74U);
    msg.setDestination(18875U);
    msg.setDestinationEntity(253U);
    msg.frequency = 2552485263U;
    msg.min_range = 16460U;
    msg.max_range = 47545U;

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
    msg.setTimeStamp(0.6099488165863698);
    msg.setSource(32218U);
    msg.setSourceEntity(93U);
    msg.setDestination(19079U);
    msg.setDestinationEntity(180U);
    msg.frequency = 1216464761U;
    msg.min_range = 32992U;
    msg.max_range = 1883U;

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
    msg.setTimeStamp(0.5500976413427913);
    msg.setSource(4641U);
    msg.setSourceEntity(174U);
    msg.setDestination(3801U);
    msg.setDestinationEntity(219U);
    msg.type = 200U;
    msg.frequency = 748022273U;
    msg.min_range = 51560U;
    msg.max_range = 23885U;
    msg.bits_per_point = 229U;
    msg.scale_factor = 0.5084639634784136;
    const char tmp_msg_0[] = {18, 108, 126, 4, 114, 110, 11, 75, -121, -71, -93, 20, 3, -103, 94, 3, 102, -7, 37, 61, 77, 49, -84, 16, -112, 7, -99, -116, 26, 32, -93, -24, -115, -101, 90, -19, 83, 58, -3, 43, 122, 80, -88, -38, 81, -56, 113, 41, 77, 87, -85, 118, -117, 116, -122, 14, -84, -10, -91, -75, -3, -15, 87, 120, -13, 105, -121, 102, 100, -7, -47, 39, 94, -63, 77, 8, -123, -83, 121, -94, 75, -118, -43, 81, 50, -1, -112, -25, 27, 112, 24, 101, -109, 3, 110, 61, -42, 3, 94, -35, 106, -22, -74, 126, 17, 26, -40, -95, -67, -23, -42, -55, -33, 64, -99, 8, -94, 47, 44, -119, -123, -105, -87, 92, -19, -35, -70, -53, -8, 89, 69, -10, -15, 87, 41, 9, -49, 30, -112, -3, 44, -116, 21, 30, 58, 126, 121, -20, -103, -88, 104, 19, -51, 47};
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
    msg.setTimeStamp(0.6119801553804135);
    msg.setSource(28114U);
    msg.setSourceEntity(239U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(225U);
    msg.type = 233U;
    msg.frequency = 2127781604U;
    msg.min_range = 23047U;
    msg.max_range = 35308U;
    msg.bits_per_point = 227U;
    msg.scale_factor = 0.3655215604354547;
    const char tmp_msg_0[] = {-98, -109, 104, -16, -117, -7, -36, -113, -87, -38, -124, 41, 52, 117, -67, 16, 10, 56, 122, 65, -112, 66, 99};
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
    msg.setTimeStamp(0.9371786547491306);
    msg.setSource(34862U);
    msg.setSourceEntity(173U);
    msg.setDestination(24541U);
    msg.setDestinationEntity(38U);
    msg.type = 192U;
    msg.frequency = 1756793126U;
    msg.min_range = 18970U;
    msg.max_range = 24066U;
    msg.bits_per_point = 16U;
    msg.scale_factor = 0.4903799690645524;
    const char tmp_msg_0[] = {71, 77, -108, 125, 124, -62, -89, -112, 10, 21, 104, -100, 94, -122, 114, 22, -119, 19, 24, -55, -5, 63, 95, 75, -59, -100, -11, 122, -96, -45, -128, 61, 93, -16, -38, -100, -68, 92, 75, 99, -126, -111, -120, 57, -28, -47, 40, 39, 124, 119, 12, 21, 14, 28, -69, 84, 98, -68, -15, 32, 97, -114, -86, -8, 94, 76, 8, 81, 105, -12, 12, -27, -53, 70, 31, 55, -73, 42, -86, 13, 66, 95, 121, 61, 75, -70, 122, 69, -88, -128, -71, -25, -103, -41, -32, -52, 36, 74, 22, -120, -26, 21, -30, -7, 77, -49};
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
    msg.setTimeStamp(0.28823046212771253);
    msg.setSource(49150U);
    msg.setSourceEntity(216U);
    msg.setDestination(52717U);
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
    msg.setTimeStamp(0.891977187748088);
    msg.setSource(55815U);
    msg.setSourceEntity(112U);
    msg.setDestination(21168U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.1679158521649774);
    msg.setSource(54292U);
    msg.setSourceEntity(205U);
    msg.setDestination(56794U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.41618036222702337);
    msg.setSource(38615U);
    msg.setSourceEntity(141U);
    msg.setDestination(21466U);
    msg.setDestinationEntity(131U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.6362848686032323);
    msg.setSource(62045U);
    msg.setSourceEntity(39U);
    msg.setDestination(23057U);
    msg.setDestinationEntity(236U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.16125124173825867);
    msg.setSource(42673U);
    msg.setSourceEntity(100U);
    msg.setDestination(3454U);
    msg.setDestinationEntity(231U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.12234054828035135);
    msg.setSource(18599U);
    msg.setSourceEntity(84U);
    msg.setDestination(60123U);
    msg.setDestinationEntity(239U);
    msg.value = 0.3773547723592352;
    msg.confidence = 0.6053622996080783;
    msg.opmodes.assign("KYHQFROKLRMSASBLFZYYKTBMMEVMCEKZZWNEWPAUKEDOJUZFRUATGDCRNOITYDLJJNQCBDDWHUUYCVGRXXZBOCKJFVMLQVOLMGTNUXMXKQZLMJLJLQHOXGOGZQREZIYHPNSOHTJ");

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
    msg.setTimeStamp(0.796807119332587);
    msg.setSource(19487U);
    msg.setSourceEntity(130U);
    msg.setDestination(7138U);
    msg.setDestinationEntity(143U);
    msg.value = 0.4255574666492101;
    msg.confidence = 0.3404286254422183;
    msg.opmodes.assign("JBKBCAXSRQTPYNKAHRSSTQOOADGPBDFMEEDOSNETRNGZIMBHUHSYEMEGSZVWPCKWHFLMSQLCHCZFI");

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
    msg.setTimeStamp(0.64543517834457);
    msg.setSource(23611U);
    msg.setSourceEntity(101U);
    msg.setDestination(5971U);
    msg.setDestinationEntity(56U);
    msg.value = 0.006620498584176238;
    msg.confidence = 0.09154403087850671;
    msg.opmodes.assign("KMJZBIECPFDCVHQCTXQYQZHTIDLJHEWEXTNKZPMHGGQWBVRTUCJMDTFGVHSVGROSOOMOEKNDREUPATABSKRSIKKSUBA");

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
    msg.setTimeStamp(0.9545449053719532);
    msg.setSource(6913U);
    msg.setSourceEntity(68U);
    msg.setDestination(7982U);
    msg.setDestinationEntity(134U);
    msg.itow = 4133999056U;
    msg.lat = 0.18732240115060772;
    msg.lon = 0.6347836126689438;
    msg.height_ell = 0.19068175514888863;
    msg.height_sea = 0.24116887132350562;
    msg.hacc = 0.9631086161091909;
    msg.vacc = 0.6938115094675427;
    msg.vel_n = 0.3175923624136553;
    msg.vel_e = 0.8877837693593703;
    msg.vel_d = 0.7379226804394995;
    msg.speed = 0.8703261866437941;
    msg.gspeed = 0.9814972683845067;
    msg.heading = 0.033413428324460925;
    msg.sacc = 0.7121154649139362;
    msg.cacc = 0.992774036895796;

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
    msg.setTimeStamp(0.9099178113104135);
    msg.setSource(59012U);
    msg.setSourceEntity(169U);
    msg.setDestination(54599U);
    msg.setDestinationEntity(178U);
    msg.itow = 2137265367U;
    msg.lat = 0.4816145678292999;
    msg.lon = 0.36054537531580444;
    msg.height_ell = 0.3202367169213296;
    msg.height_sea = 0.11100961362254713;
    msg.hacc = 0.7877392506502727;
    msg.vacc = 0.7974009162814658;
    msg.vel_n = 0.42246885658235067;
    msg.vel_e = 0.6603274759390639;
    msg.vel_d = 0.362848509235719;
    msg.speed = 0.11021208517424985;
    msg.gspeed = 0.9406531738101973;
    msg.heading = 0.06041929450272432;
    msg.sacc = 0.062209211267886366;
    msg.cacc = 0.36730179039134137;

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
    msg.setTimeStamp(0.5607009332064667);
    msg.setSource(47986U);
    msg.setSourceEntity(19U);
    msg.setDestination(7620U);
    msg.setDestinationEntity(100U);
    msg.itow = 1595112885U;
    msg.lat = 0.02030504754399809;
    msg.lon = 0.6115170961805966;
    msg.height_ell = 0.6484835501518141;
    msg.height_sea = 0.16521658907747538;
    msg.hacc = 0.8545271682094935;
    msg.vacc = 0.664173745535306;
    msg.vel_n = 0.2870646226192234;
    msg.vel_e = 0.45828980284860477;
    msg.vel_d = 0.35303399193660645;
    msg.speed = 0.11747880471161021;
    msg.gspeed = 0.33532460580679646;
    msg.heading = 0.5194363848480081;
    msg.sacc = 0.5946020883616573;
    msg.cacc = 0.338761443836075;

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
    msg.setTimeStamp(0.7892353230269845);
    msg.setSource(31868U);
    msg.setSourceEntity(77U);
    msg.setDestination(9504U);
    msg.setDestinationEntity(73U);
    msg.id = 4U;
    msg.value = 0.11015844617795745;

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
    msg.setTimeStamp(0.8372865232089561);
    msg.setSource(46619U);
    msg.setSourceEntity(206U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(222U);
    msg.id = 1U;
    msg.value = 0.21399340941485512;

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
    msg.setTimeStamp(0.7755110905650754);
    msg.setSource(24121U);
    msg.setSourceEntity(248U);
    msg.setDestination(24517U);
    msg.setDestinationEntity(116U);
    msg.id = 254U;
    msg.value = 0.6883947611189816;

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
    msg.setTimeStamp(0.4936896816027109);
    msg.setSource(39272U);
    msg.setSourceEntity(192U);
    msg.setDestination(13618U);
    msg.setDestinationEntity(253U);
    msg.x = 0.7678197861667407;
    msg.y = 0.21409629125148721;
    msg.z = 0.9700598806681966;
    msg.phi = 0.7714986488610449;
    msg.theta = 0.8536188617075849;
    msg.psi = 0.8066501571188425;

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
    msg.setTimeStamp(0.3666440980111434);
    msg.setSource(32056U);
    msg.setSourceEntity(81U);
    msg.setDestination(41813U);
    msg.setDestinationEntity(199U);
    msg.x = 0.392275760859788;
    msg.y = 0.8522216603448395;
    msg.z = 0.31294240383437233;
    msg.phi = 0.11622389406326705;
    msg.theta = 0.08187327860202853;
    msg.psi = 0.5945929625602356;

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
    msg.setTimeStamp(0.17489661505108411);
    msg.setSource(60562U);
    msg.setSourceEntity(31U);
    msg.setDestination(47553U);
    msg.setDestinationEntity(199U);
    msg.x = 0.1633029568787585;
    msg.y = 0.8645093349082169;
    msg.z = 0.12438606585651935;
    msg.phi = 0.8745721022791481;
    msg.theta = 0.38111417331472164;
    msg.psi = 0.3487870518258992;

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
    msg.setTimeStamp(0.12820355548852314);
    msg.setSource(18316U);
    msg.setSourceEntity(62U);
    msg.setDestination(64678U);
    msg.setDestinationEntity(61U);
    msg.beam_width = 0.9293185709568155;
    msg.beam_height = 0.5901355226360865;

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
    msg.setTimeStamp(0.0039507519230256305);
    msg.setSource(28483U);
    msg.setSourceEntity(215U);
    msg.setDestination(64833U);
    msg.setDestinationEntity(94U);
    msg.beam_width = 0.9925297730794902;
    msg.beam_height = 0.9391049495720522;

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
    msg.setTimeStamp(0.40316726284510673);
    msg.setSource(1911U);
    msg.setSourceEntity(172U);
    msg.setDestination(14058U);
    msg.setDestinationEntity(206U);
    msg.beam_width = 0.9282337727205613;
    msg.beam_height = 0.4559575776138265;

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
    msg.setTimeStamp(0.6316570142020301);
    msg.setSource(14230U);
    msg.setSourceEntity(56U);
    msg.setDestination(33332U);
    msg.setDestinationEntity(112U);
    msg.id = 131U;
    msg.zoom = 27U;
    msg.action = 201U;

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
    msg.setTimeStamp(0.0004371617228080549);
    msg.setSource(61092U);
    msg.setSourceEntity(136U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(104U);
    msg.id = 109U;
    msg.zoom = 194U;
    msg.action = 194U;

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
    msg.setTimeStamp(0.2670455582368487);
    msg.setSource(38543U);
    msg.setSourceEntity(52U);
    msg.setDestination(54741U);
    msg.setDestinationEntity(196U);
    msg.id = 82U;
    msg.zoom = 131U;
    msg.action = 239U;

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
    msg.setTimeStamp(0.10397979574723659);
    msg.setSource(50382U);
    msg.setSourceEntity(55U);
    msg.setDestination(3735U);
    msg.setDestinationEntity(227U);
    msg.id = 143U;
    msg.value = 0.6486961352047862;

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
    msg.setTimeStamp(0.8897211609653142);
    msg.setSource(25942U);
    msg.setSourceEntity(194U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(223U);
    msg.id = 89U;
    msg.value = 0.3619330581294111;

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
    msg.setTimeStamp(0.20939994137442386);
    msg.setSource(6337U);
    msg.setSourceEntity(125U);
    msg.setDestination(32289U);
    msg.setDestinationEntity(101U);
    msg.id = 234U;
    msg.value = 0.3937620659259682;

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
    msg.setTimeStamp(0.6383507097673954);
    msg.setSource(51773U);
    msg.setSourceEntity(154U);
    msg.setDestination(30570U);
    msg.setDestinationEntity(52U);
    msg.id = 31U;
    msg.value = 0.47202087332552;

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
    msg.setTimeStamp(0.5708246077745319);
    msg.setSource(27337U);
    msg.setSourceEntity(0U);
    msg.setDestination(41412U);
    msg.setDestinationEntity(191U);
    msg.id = 5U;
    msg.value = 0.967141626541007;

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
    msg.setTimeStamp(0.44172815886595496);
    msg.setSource(64372U);
    msg.setSourceEntity(113U);
    msg.setDestination(4152U);
    msg.setDestinationEntity(47U);
    msg.id = 187U;
    msg.value = 0.29112178602882854;

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
    msg.setTimeStamp(0.07612272392527064);
    msg.setSource(38094U);
    msg.setSourceEntity(229U);
    msg.setDestination(11965U);
    msg.setDestinationEntity(11U);
    msg.id = 210U;
    msg.angle = 0.6468820835956939;

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
    msg.setTimeStamp(0.04133084107530327);
    msg.setSource(51788U);
    msg.setSourceEntity(115U);
    msg.setDestination(10130U);
    msg.setDestinationEntity(146U);
    msg.id = 14U;
    msg.angle = 0.39068525402085386;

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
    msg.setTimeStamp(0.029288674020684802);
    msg.setSource(39205U);
    msg.setSourceEntity(12U);
    msg.setDestination(55201U);
    msg.setDestinationEntity(172U);
    msg.id = 58U;
    msg.angle = 0.3648441728012629;

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
    msg.setTimeStamp(0.9443512881722923);
    msg.setSource(55179U);
    msg.setSourceEntity(41U);
    msg.setDestination(14009U);
    msg.setDestinationEntity(203U);
    msg.op = 22U;
    msg.actions.assign("RXNSCHVUTXPABOZRDCJZVLFWKOFVOLSUZGKTOSKKUZBLBCSLYEDLLDYDWWNYRVMGAGNHJVICNZODWVYMPCEQPNUHHXFTYAJJQEHXMIIUHFTPGQCKYWIEARRPTUXVMZYQNLDPMWQNKEXIVUBMCBSVFAYTDBFTOSHISKNUOIIQINBUWBYOYMRLEFRTDHWSEEGKXAGWLPQHRASCUTJEBZSODQVGMJNILGFZBOFQPKJ");

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
    msg.setTimeStamp(0.242199295962911);
    msg.setSource(46484U);
    msg.setSourceEntity(187U);
    msg.setDestination(36711U);
    msg.setDestinationEntity(153U);
    msg.op = 166U;
    msg.actions.assign("WJSPCYOZEGQHPOORATDBGDWJJSBAWUCKIJLDZLDKTVKBNAEBZFAVORSGYEGLKVKNHLRPSMWBTHDXRASZIOMCEDAWQQDUHDFWXEUYIGKRXUTUIX");

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
    msg.setTimeStamp(0.014701211569284944);
    msg.setSource(11686U);
    msg.setSourceEntity(81U);
    msg.setDestination(60666U);
    msg.setDestinationEntity(190U);
    msg.op = 103U;
    msg.actions.assign("LBNYMHHHDBTPSGCHAGCEGQFYDNGONJCWUARGKZDSVFIOGHFRTTHFNEPUFXUAVWFEWXOKGPMPPPFQAURJAZKLIEQBRPKHXUWAMKKIZTTARBXOQBEQCKZIOIECUWSMMXTLJXPCLMJILBADSOIEDSVVKZNVBJPESQRYQMNITYVKHMBWXRMAZEJILAWGJDDCUJBFPLZUNOYOUGSXXYXVNLZJTOYERVZRCYWSLOFGJDFNWWVHMCYQQDVDCY");

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
    msg.setTimeStamp(0.5481405888264733);
    msg.setSource(34173U);
    msg.setSourceEntity(69U);
    msg.setDestination(53756U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("LXZHUNAVOTYDDLRIQLGOCFTXGPSHWAJMBHYMXGODDXDKZRRPMAHEYZYZKVVCTEQNJYXNPKMREYLRGOGUJLFFFAPNNQRMBPCWVOJTDXQHIVXVJCIGCKAESOLLCCKILERQYKHBJFZICZTCOOBUFDQRZUGYAMVXWYIHAFWKJPUMBDBIHWBXUFVJZSEEHUJPEEMWRFSPLSEPTFS");

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
    msg.setTimeStamp(0.6607353505747122);
    msg.setSource(3784U);
    msg.setSourceEntity(202U);
    msg.setDestination(35810U);
    msg.setDestinationEntity(130U);
    msg.actions.assign("JMANMGHKJSDWKAIPSWLYVVDLGCKGPKLCHWOYXQEGKXHTIOLCZVTBXJSUAXHOOCSWGDJWZIEUEOIJDKIUPTZGDWNINAYAEIPCESVLBWRRDSFZYURWTUFBYHXJFFSHCOUGVJHZQAUALZQMBWOHVQAJAQBSQDIVEGNVVDLDNTBFMNNBMPXYRMZPMTULVEMXKUXCFIGYWKTKDZCMAXXEOQLRSSFENBLJFIZRUGYRQHNOFECRN");

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
    msg.setTimeStamp(0.9987289002203095);
    msg.setSource(6914U);
    msg.setSourceEntity(141U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(158U);
    msg.actions.assign("UHBSLNDQGXEXXSPHMGLEFZSDJIMVVZTQSIWNQDRGGNOILGEVIRNUKHFQTFPXGTVMSDYXCCUUPXQBBNFUXIEBSLDTWYWNOBWYWNYKKEFMQUPAGGHXUNIWHFZLIAAIYPLQKDFHAXTCLJZRECFXPBIVOAUJBJCRZRAJ");

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
    msg.setTimeStamp(0.7601481984628724);
    msg.setSource(32425U);
    msg.setSourceEntity(117U);
    msg.setDestination(50996U);
    msg.setDestinationEntity(0U);
    msg.button = 110U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.8936990599925709);
    msg.setSource(22161U);
    msg.setSourceEntity(64U);
    msg.setDestination(24882U);
    msg.setDestinationEntity(56U);
    msg.button = 216U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.8540584039758542);
    msg.setSource(35405U);
    msg.setSourceEntity(152U);
    msg.setDestination(31234U);
    msg.setDestinationEntity(83U);
    msg.button = 103U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.39990981068170806);
    msg.setSource(18377U);
    msg.setSourceEntity(84U);
    msg.setDestination(33576U);
    msg.setDestinationEntity(243U);
    msg.op = 109U;
    msg.text.assign("ZSKOPVTSLECKHWWJGWQVGTYYFVIZAJTTQAUXULYOQGCNZRZFJNBANAZGBRYJPKCEDAMDIVVTPNNFXW");

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
    msg.setTimeStamp(0.8125262629795984);
    msg.setSource(340U);
    msg.setSourceEntity(226U);
    msg.setDestination(47660U);
    msg.setDestinationEntity(80U);
    msg.op = 228U;
    msg.text.assign("XZFVMPIHBLCFSJSAVMGUROPOGZWJOCZAUXZZNLOFTDAQZNKYBLLARKRLLQFWFDMJOASUTXXSQPXNBFBRDCLHSEVGNXEVCGLCIYVWUZKYYHDGAKKWDCFUUJGLDCFYSTSCKJWPESHTJJIFXPQZEJQBHWTACRMVMGTGXIBDKODMRWTHHXZSGJBEQFQPTWUAYAJLIUKTMOPIMRIKQEONETVZCIRVAHBVHNQPOYENPBDYOKMNH");

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
    msg.setTimeStamp(0.7243653216718057);
    msg.setSource(65422U);
    msg.setSourceEntity(252U);
    msg.setDestination(6068U);
    msg.setDestinationEntity(132U);
    msg.op = 6U;
    msg.text.assign("MPDDPBKBEBIYJTFCSPOPTBEAJEOPWILPTSQOKKRJFYRDMUGGOKYHWUCFTLVJEZMLQCDHOXNQDLLVQRWVHZYAJZDXDKFODPECNCMSVOIDURGCKSBYLFGVJOHRWIEHQNUDRWFTGBSPQBBGFKVOIMIXISCNSZUNJWAXJVTUXNJNWGIHJMGHMMXZVRZEAGYRCXLCVWFXYIMWFTSBARVOUUKQUAQBKAXZZLFYQPYHY");

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
    msg.setTimeStamp(0.1393019067062352);
    msg.setSource(47451U);
    msg.setSourceEntity(9U);
    msg.setDestination(38122U);
    msg.setDestinationEntity(254U);
    msg.op = 151U;
    msg.time_remain = 0.10494948936956938;
    msg.sched_time = 0.45013366750157446;

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
    msg.setTimeStamp(0.9250773184155846);
    msg.setSource(39674U);
    msg.setSourceEntity(125U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(71U);
    msg.op = 136U;
    msg.time_remain = 0.7842828839029444;
    msg.sched_time = 0.1929327007684083;

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
    msg.setTimeStamp(0.3892584000338237);
    msg.setSource(56553U);
    msg.setSourceEntity(151U);
    msg.setDestination(16508U);
    msg.setDestinationEntity(254U);
    msg.op = 211U;
    msg.time_remain = 0.07981025684757448;
    msg.sched_time = 0.4127603425780958;

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
    msg.setTimeStamp(0.3035529234608286);
    msg.setSource(34208U);
    msg.setSourceEntity(79U);
    msg.setDestination(42195U);
    msg.setDestinationEntity(198U);
    msg.id = 182U;
    msg.op = 72U;
    msg.sched_time = 0.6750063024546873;

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
    msg.setTimeStamp(0.6667025504384676);
    msg.setSource(45805U);
    msg.setSourceEntity(206U);
    msg.setDestination(62956U);
    msg.setDestinationEntity(145U);
    msg.id = 51U;
    msg.op = 92U;
    msg.sched_time = 0.5807895184036246;

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
    msg.setTimeStamp(0.7849022090978045);
    msg.setSource(51897U);
    msg.setSourceEntity(152U);
    msg.setDestination(42100U);
    msg.setDestinationEntity(66U);
    msg.id = 126U;
    msg.op = 118U;
    msg.sched_time = 0.664923199967767;

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
    msg.setTimeStamp(0.005970665503095773);
    msg.setSource(63686U);
    msg.setSourceEntity(20U);
    msg.setDestination(38311U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.6492959103745686);
    msg.setSource(49891U);
    msg.setSourceEntity(171U);
    msg.setDestination(51497U);
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
    msg.setTimeStamp(0.09047915622503067);
    msg.setSource(26186U);
    msg.setSourceEntity(131U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.6681697055822104);
    msg.setSource(22046U);
    msg.setSourceEntity(147U);
    msg.setDestination(59639U);
    msg.setDestinationEntity(164U);
    msg.id = 91U;
    msg.label.assign("MSROCZDTFIFVKAQPQVNIEHJPTFEAIOU");
    msg.state = 190U;

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
    msg.setTimeStamp(0.19896195355528634);
    msg.setSource(1313U);
    msg.setSourceEntity(74U);
    msg.setDestination(57646U);
    msg.setDestinationEntity(125U);
    msg.id = 83U;
    msg.label.assign("BNMNYWIYJNQRYGPABDRFTQUFXQPQSHSBSOQBDGOMBAOAXRXCGCCJEPAIKSHLTLEWMVDMWKUAPYEVUKHXBQZQGOCCNXJXZXKKSZITHHYVNRXVYWRKRVAJLWPB");
    msg.state = 227U;

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
    msg.setTimeStamp(0.9627820157521125);
    msg.setSource(51548U);
    msg.setSourceEntity(253U);
    msg.setDestination(59247U);
    msg.setDestinationEntity(144U);
    msg.id = 234U;
    msg.label.assign("ZKQEMGTABVYCCQKZAOOESVCRARXSIXYDKAINVXJSWHWKFYTGSPNIMZCYIISZBUVRUUTMXYYUSCNXEOCBZKGNCAKFMRLDVZFQPERWGHDQBQWBMBWVKQUBPHQGDEUCUAMAOPMEBDJFMBPJVBJTVXZNGCWPGNHASKYIETFZURWPRQEHFOALCDLOZTJTPRZLDXHMTHVIDWJWHNE");
    msg.state = 204U;

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
    msg.setTimeStamp(0.14151005309769038);
    msg.setSource(41520U);
    msg.setSourceEntity(38U);
    msg.setDestination(7703U);
    msg.setDestinationEntity(115U);
    msg.id = 148U;
    msg.op = 5U;

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
    msg.setTimeStamp(0.17898270844533248);
    msg.setSource(60416U);
    msg.setSourceEntity(17U);
    msg.setDestination(12812U);
    msg.setDestinationEntity(29U);
    msg.id = 134U;
    msg.op = 72U;

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
    msg.setTimeStamp(0.3626024300749804);
    msg.setSource(23227U);
    msg.setSourceEntity(39U);
    msg.setDestination(38711U);
    msg.setDestinationEntity(138U);
    msg.id = 242U;
    msg.op = 229U;

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
    msg.setTimeStamp(0.5197412464682307);
    msg.setSource(56623U);
    msg.setSourceEntity(96U);
    msg.setDestination(10217U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.5271383218926406;
    msg.lon = 0.0069372164862049335;
    msg.height = 0.5331501408804891;
    msg.x = 0.9741568662824934;
    msg.y = 0.33284472418598043;
    msg.z = 0.7626532270141456;
    msg.phi = 0.7894056002229002;
    msg.theta = 0.4109460001092077;
    msg.psi = 0.6216462029116167;
    msg.u = 0.7307787333182135;
    msg.v = 0.01904217077515835;
    msg.w = 0.07763260385545157;
    msg.vx = 0.02414139896702272;
    msg.vy = 0.26365627145294623;
    msg.vz = 0.8502562317572958;
    msg.p = 0.3560708244398929;
    msg.q = 0.30867213314993724;
    msg.r = 0.9439085538202858;
    msg.depth = 0.6609646458126608;
    msg.alt = 0.4716567016535139;

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
    msg.setTimeStamp(0.5823468062007923);
    msg.setSource(9854U);
    msg.setSourceEntity(143U);
    msg.setDestination(36942U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.6704271439011119;
    msg.lon = 0.11621873452500442;
    msg.height = 0.25391255994218087;
    msg.x = 0.2270415047040314;
    msg.y = 0.21192512893608395;
    msg.z = 0.33046010191139696;
    msg.phi = 0.08102979957079548;
    msg.theta = 0.5894165622318452;
    msg.psi = 0.8860109087455481;
    msg.u = 0.7031033610766368;
    msg.v = 0.5050811690776943;
    msg.w = 0.7056473760832931;
    msg.vx = 0.9039524997335542;
    msg.vy = 0.25799399252492183;
    msg.vz = 0.15031038103719518;
    msg.p = 0.2595027925221858;
    msg.q = 0.8377063809907929;
    msg.r = 0.880374842282169;
    msg.depth = 0.38373260015141386;
    msg.alt = 0.23568497733748428;

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
    msg.setTimeStamp(0.9324933897393622);
    msg.setSource(23151U);
    msg.setSourceEntity(36U);
    msg.setDestination(38415U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.27224889420619647;
    msg.lon = 0.40226282161084415;
    msg.height = 0.8450471677533106;
    msg.x = 0.9518082248563244;
    msg.y = 0.5957778701476989;
    msg.z = 0.41793256674504864;
    msg.phi = 0.9597911049851668;
    msg.theta = 0.7328595540398805;
    msg.psi = 0.07726232083533158;
    msg.u = 0.8537248554297097;
    msg.v = 0.8832886996639203;
    msg.w = 0.6319099376881406;
    msg.vx = 0.4756482956203161;
    msg.vy = 0.9582848637537562;
    msg.vz = 0.5735420489842736;
    msg.p = 0.6621616138844784;
    msg.q = 0.17483209374824882;
    msg.r = 0.6728656984009753;
    msg.depth = 0.2753393983313054;
    msg.alt = 0.9130221241439498;

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
    msg.setTimeStamp(0.28270666637556596);
    msg.setSource(20998U);
    msg.setSourceEntity(251U);
    msg.setDestination(64138U);
    msg.setDestinationEntity(89U);
    msg.x = 0.6686826598928451;
    msg.y = 0.3123231309866439;
    msg.z = 0.7271760046019273;

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
    msg.setTimeStamp(0.4203230432868563);
    msg.setSource(11547U);
    msg.setSourceEntity(80U);
    msg.setDestination(8553U);
    msg.setDestinationEntity(47U);
    msg.x = 0.0226741655691578;
    msg.y = 0.07855485882239277;
    msg.z = 0.342136786403218;

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
    msg.setTimeStamp(0.8251384495621612);
    msg.setSource(21273U);
    msg.setSourceEntity(21U);
    msg.setDestination(49018U);
    msg.setDestinationEntity(152U);
    msg.x = 0.5761789953808484;
    msg.y = 0.631120954000203;
    msg.z = 0.9384587910666745;

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
    msg.setTimeStamp(0.7448360826222494);
    msg.setSource(15504U);
    msg.setSourceEntity(111U);
    msg.setDestination(21392U);
    msg.setDestinationEntity(242U);
    msg.value = 0.2576473766414711;

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
    msg.setTimeStamp(0.8234422472934527);
    msg.setSource(9432U);
    msg.setSourceEntity(143U);
    msg.setDestination(38683U);
    msg.setDestinationEntity(222U);
    msg.value = 0.13973796666923533;

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
    msg.setTimeStamp(0.17001563654159957);
    msg.setSource(11362U);
    msg.setSourceEntity(249U);
    msg.setDestination(25814U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8711440139853663;

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
    msg.setTimeStamp(0.506404661523234);
    msg.setSource(61572U);
    msg.setSourceEntity(157U);
    msg.setDestination(43047U);
    msg.setDestinationEntity(226U);
    msg.value = 0.4215258504298882;

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
    msg.setTimeStamp(0.6659481820744615);
    msg.setSource(15883U);
    msg.setSourceEntity(170U);
    msg.setDestination(46713U);
    msg.setDestinationEntity(192U);
    msg.value = 0.11825816174715165;

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
    msg.setTimeStamp(0.9161677937166341);
    msg.setSource(57803U);
    msg.setSourceEntity(227U);
    msg.setDestination(3435U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5170468805306345;

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
    msg.setTimeStamp(0.9292748903686344);
    msg.setSource(51680U);
    msg.setSourceEntity(56U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(86U);
    msg.x = 0.4064985081575634;
    msg.y = 0.3865339954996966;
    msg.z = 0.42435371046672354;
    msg.phi = 0.8839102674053031;
    msg.theta = 0.33738602756062075;
    msg.psi = 0.9746483018751643;
    msg.p = 0.2672324780918184;
    msg.q = 0.5714960484778149;
    msg.r = 0.1966730653005263;
    msg.u = 0.36932645171703593;
    msg.v = 0.4346401455198883;
    msg.w = 0.42331238645133595;
    msg.bias_psi = 0.5181181762544744;
    msg.bias_r = 0.5880573002448332;

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
    msg.setTimeStamp(0.31332966307002774);
    msg.setSource(23394U);
    msg.setSourceEntity(203U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(253U);
    msg.x = 0.13608283019060896;
    msg.y = 0.8267425932801413;
    msg.z = 0.5470625190581943;
    msg.phi = 0.8971844123404392;
    msg.theta = 0.40854235793354254;
    msg.psi = 0.18567853159107972;
    msg.p = 0.9504068922741861;
    msg.q = 0.9975991269766369;
    msg.r = 0.1736378220364314;
    msg.u = 0.30165249222532864;
    msg.v = 0.7528368513449476;
    msg.w = 0.1966929381964938;
    msg.bias_psi = 0.40012502992319254;
    msg.bias_r = 0.5808536102017164;

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
    msg.setTimeStamp(0.8610413513114246);
    msg.setSource(41188U);
    msg.setSourceEntity(50U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(214U);
    msg.x = 0.945576954008394;
    msg.y = 0.7419243254133443;
    msg.z = 8.130023030461508e-06;
    msg.phi = 0.11531716038223339;
    msg.theta = 0.027857745764590325;
    msg.psi = 0.8265916752971877;
    msg.p = 0.6924710805945377;
    msg.q = 0.17994496309578434;
    msg.r = 0.4882558882247665;
    msg.u = 0.3216771745055682;
    msg.v = 0.2902127028251449;
    msg.w = 0.8326383565033844;
    msg.bias_psi = 0.1866822011076945;
    msg.bias_r = 0.3083381339165261;

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
    msg.setTimeStamp(0.8221913379621808);
    msg.setSource(27637U);
    msg.setSourceEntity(241U);
    msg.setDestination(33840U);
    msg.setDestinationEntity(233U);
    msg.bias_psi = 0.4722041452860217;
    msg.bias_r = 0.44860037444631873;
    msg.cog = 0.6471449376497802;
    msg.cyaw = 0.7737292571177233;
    msg.lbl_rej_level = 0.8554081855245548;
    msg.gps_rej_level = 0.42998315826616773;
    msg.custom_x = 0.8683142412547998;
    msg.custom_y = 0.4458314543727474;
    msg.custom_z = 0.5258902286343886;

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
    msg.setTimeStamp(0.5397404027116377);
    msg.setSource(25566U);
    msg.setSourceEntity(92U);
    msg.setDestination(24289U);
    msg.setDestinationEntity(159U);
    msg.bias_psi = 0.4135384143759807;
    msg.bias_r = 0.9634045302266673;
    msg.cog = 0.7494780193825771;
    msg.cyaw = 0.4307701089279764;
    msg.lbl_rej_level = 0.008800307440090971;
    msg.gps_rej_level = 0.9296331794245765;
    msg.custom_x = 0.20579549013164722;
    msg.custom_y = 0.15332913312757068;
    msg.custom_z = 0.8244859235614364;

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
    msg.setTimeStamp(0.1146686040573821);
    msg.setSource(17112U);
    msg.setSourceEntity(195U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(220U);
    msg.bias_psi = 0.06809776850820115;
    msg.bias_r = 0.527017319637699;
    msg.cog = 0.10349350807386826;
    msg.cyaw = 0.99654571928774;
    msg.lbl_rej_level = 0.5749022571874196;
    msg.gps_rej_level = 0.9654484924351017;
    msg.custom_x = 0.2443423322485726;
    msg.custom_y = 0.8587569413205617;
    msg.custom_z = 0.534983778238679;

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
    msg.setTimeStamp(0.5604608275164246);
    msg.setSource(61022U);
    msg.setSourceEntity(65U);
    msg.setDestination(62234U);
    msg.setDestinationEntity(83U);
    msg.utc_time = 0.0819116787936991;
    msg.reason = 227U;

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
    msg.setTimeStamp(0.9580358431678703);
    msg.setSource(41697U);
    msg.setSourceEntity(152U);
    msg.setDestination(34625U);
    msg.setDestinationEntity(130U);
    msg.utc_time = 0.16584946885412222;
    msg.reason = 41U;

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
    msg.setTimeStamp(0.7967898663801366);
    msg.setSource(49773U);
    msg.setSourceEntity(190U);
    msg.setDestination(30457U);
    msg.setDestinationEntity(17U);
    msg.utc_time = 0.7466843759919937;
    msg.reason = 144U;

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
    msg.setTimeStamp(0.4562741071448869);
    msg.setSource(35540U);
    msg.setSourceEntity(36U);
    msg.setDestination(37299U);
    msg.setDestinationEntity(59U);
    msg.id = 189U;
    msg.range = 0.6432378698382585;
    msg.acceptance = 130U;

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
    msg.setTimeStamp(0.40633158269688563);
    msg.setSource(6778U);
    msg.setSourceEntity(71U);
    msg.setDestination(30379U);
    msg.setDestinationEntity(169U);
    msg.id = 175U;
    msg.range = 0.1134208544926456;
    msg.acceptance = 115U;

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
    msg.setTimeStamp(0.11390627636109485);
    msg.setSource(52575U);
    msg.setSourceEntity(86U);
    msg.setDestination(46017U);
    msg.setDestinationEntity(14U);
    msg.id = 36U;
    msg.range = 0.2964092476211272;
    msg.acceptance = 21U;

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
    msg.setTimeStamp(0.04095801738153759);
    msg.setSource(32944U);
    msg.setSourceEntity(157U);
    msg.setDestination(10129U);
    msg.setDestinationEntity(74U);
    msg.type = 242U;
    msg.reason = 165U;
    msg.value = 0.5193772735357969;
    msg.timestep = 0.5963555665782085;

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
    msg.setTimeStamp(0.3160890873946467);
    msg.setSource(55521U);
    msg.setSourceEntity(207U);
    msg.setDestination(54907U);
    msg.setDestinationEntity(36U);
    msg.type = 114U;
    msg.reason = 115U;
    msg.value = 0.9922024611290767;
    msg.timestep = 0.7074514353473739;

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
    msg.setTimeStamp(0.9329259763610714);
    msg.setSource(61952U);
    msg.setSourceEntity(143U);
    msg.setDestination(53039U);
    msg.setDestinationEntity(60U);
    msg.type = 19U;
    msg.reason = 176U;
    msg.value = 0.41861448802644663;
    msg.timestep = 0.6385174417652334;

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
    msg.setTimeStamp(0.4334941442302712);
    msg.setSource(58153U);
    msg.setSourceEntity(97U);
    msg.setDestination(46642U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.1828482819642303);
    msg.setSource(26930U);
    msg.setSourceEntity(106U);
    msg.setDestination(60599U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.14122843068316437);
    msg.setSource(37588U);
    msg.setSourceEntity(166U);
    msg.setDestination(32822U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.1607301750046729);
    msg.setSource(5698U);
    msg.setSourceEntity(188U);
    msg.setDestination(38474U);
    msg.setDestinationEntity(39U);
    msg.beacon.assign("KDUESAQMNI");
    msg.x = 0.8865418852454395;
    msg.y = 0.9700999954661127;
    msg.depth = 0.39955041190317997;
    msg.var_x = 0.4140180715975581;
    msg.var_y = 0.5257162942676271;

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
    msg.setTimeStamp(0.0062779888552026986);
    msg.setSource(37276U);
    msg.setSourceEntity(107U);
    msg.setDestination(21273U);
    msg.setDestinationEntity(9U);
    msg.beacon.assign("FSUPDBUELWIBRCELFAFQJXPYWTYXWZFBIOCHQYDMVSUFVKKAVZFQRXBHWYHXWMDRBSJFRLUGJDWJSYZGKLFKURQLRHAGGRDMWNTXCJTXBEDCDBMQNPALYSDGTEOBPANEPTJVVEVXIQLXOHZRZAVCKTGNJUTWCDMVKHLOCJMKE");
    msg.x = 0.45165941316995406;
    msg.y = 0.30393674502533574;
    msg.depth = 0.2452340795339396;
    msg.var_x = 0.2665308989911648;
    msg.var_y = 0.3948507316209554;

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
    msg.setTimeStamp(0.09878129000360159);
    msg.setSource(27058U);
    msg.setSourceEntity(32U);
    msg.setDestination(65029U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("OLNVJVDITCTMZTQAADKORSNVVFIQMMIJEIVYZFGHGPBQJWAVWUNEGKDUFDDHGYAOUBSZLFRBFPPUCSQURLBPPARUKKXRZWRMHHKSSHRZSDKCZSSBNNUAVABTWMUPKELDLEHXWMOYWKMYXBQQCIFHNQEOJGMELAATQZPEXHEZJWGRRFGUAJDQZWDNOIWJWCOTIFZSIPXIGXMCNYYPYH");
    msg.x = 0.419868345658832;
    msg.y = 0.533705455524608;
    msg.depth = 0.928144937863787;
    msg.var_x = 0.03846864841450115;
    msg.var_y = 0.3613788451711044;

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
    msg.setTimeStamp(0.025551019772982242);
    msg.setSource(26857U);
    msg.setSourceEntity(85U);
    msg.setDestination(49714U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5638194079343075;

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
    msg.setTimeStamp(0.10346543321383173);
    msg.setSource(26459U);
    msg.setSourceEntity(214U);
    msg.setDestination(36630U);
    msg.setDestinationEntity(49U);
    msg.value = 0.8515803837186201;

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
    msg.setTimeStamp(0.8674901229827126);
    msg.setSource(12243U);
    msg.setSourceEntity(192U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(157U);
    msg.value = 0.6262589500869381;

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
    msg.setTimeStamp(0.4791083936037467);
    msg.setSource(24670U);
    msg.setSourceEntity(87U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(216U);
    msg.value = 0.9478651132222675;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.700244043118919);
    msg.setSource(50400U);
    msg.setSourceEntity(150U);
    msg.setDestination(34494U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6684359781277314;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.8614899369107338);
    msg.setSource(809U);
    msg.setSourceEntity(25U);
    msg.setDestination(53533U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9003180822605796;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.9987456866680706);
    msg.setSource(45812U);
    msg.setSourceEntity(196U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(126U);
    msg.value = 0.34220202849548675;
    msg.speed_units = 100U;

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
    msg.setTimeStamp(0.3602325866037047);
    msg.setSource(58237U);
    msg.setSourceEntity(59U);
    msg.setDestination(4008U);
    msg.setDestinationEntity(144U);
    msg.value = 0.1422167548725386;
    msg.speed_units = 72U;

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
    msg.setTimeStamp(0.7086350454756263);
    msg.setSource(48749U);
    msg.setSourceEntity(31U);
    msg.setDestination(14439U);
    msg.setDestinationEntity(246U);
    msg.value = 0.6873772758097015;
    msg.speed_units = 234U;

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
    msg.setTimeStamp(0.7556539211828316);
    msg.setSource(49086U);
    msg.setSourceEntity(249U);
    msg.setDestination(65097U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9467501612972385;

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
    msg.setTimeStamp(0.2719156341938497);
    msg.setSource(33564U);
    msg.setSourceEntity(60U);
    msg.setDestination(9614U);
    msg.setDestinationEntity(0U);
    msg.value = 0.36266990848338954;

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
    msg.setTimeStamp(0.9733578882100059);
    msg.setSource(15479U);
    msg.setSourceEntity(119U);
    msg.setDestination(19356U);
    msg.setDestinationEntity(32U);
    msg.value = 0.313676000366775;

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
    msg.setTimeStamp(0.48456361838630724);
    msg.setSource(40223U);
    msg.setSourceEntity(215U);
    msg.setDestination(49193U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5740610004817533;

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
    msg.setTimeStamp(0.07526798947721991);
    msg.setSource(58128U);
    msg.setSourceEntity(230U);
    msg.setDestination(1856U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7692635924191003;

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
    msg.setTimeStamp(0.9194431387748365);
    msg.setSource(8002U);
    msg.setSourceEntity(38U);
    msg.setDestination(10758U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6807757511813864;

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
    msg.setTimeStamp(0.06618608732913955);
    msg.setSource(2903U);
    msg.setSourceEntity(173U);
    msg.setDestination(36032U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8006419011342896;

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
    msg.setTimeStamp(0.7044125301261759);
    msg.setSource(57952U);
    msg.setSourceEntity(151U);
    msg.setDestination(18695U);
    msg.setDestinationEntity(51U);
    msg.value = 0.4024508267975848;

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
    msg.setTimeStamp(0.9129570810144358);
    msg.setSource(64076U);
    msg.setSourceEntity(24U);
    msg.setDestination(26910U);
    msg.setDestinationEntity(58U);
    msg.value = 0.37388109867752406;

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
    msg.setTimeStamp(0.7999250260622657);
    msg.setSource(22541U);
    msg.setSourceEntity(99U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(93U);
    msg.start_lat = 0.39060646433802493;
    msg.start_lon = 0.12429028752570703;
    msg.start_z = 0.696175034116267;
    msg.start_z_units = 188U;
    msg.end_lat = 0.3220559569193161;
    msg.end_lon = 0.14747382388009556;
    msg.end_z = 0.1753505532741617;
    msg.end_z_units = 32U;
    msg.speed = 0.0917201344715265;
    msg.speed_units = 163U;
    msg.lradius = 0.845386313096315;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.30671632178066566);
    msg.setSource(17150U);
    msg.setSourceEntity(59U);
    msg.setDestination(3385U);
    msg.setDestinationEntity(44U);
    msg.start_lat = 0.6884386548259801;
    msg.start_lon = 0.9353037124162823;
    msg.start_z = 0.8848612025014382;
    msg.start_z_units = 27U;
    msg.end_lat = 0.13460247947349369;
    msg.end_lon = 0.772020198580967;
    msg.end_z = 0.6579447985730892;
    msg.end_z_units = 235U;
    msg.speed = 0.6768861307364885;
    msg.speed_units = 237U;
    msg.lradius = 0.6589834656142151;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.2331923148291586);
    msg.setSource(14364U);
    msg.setSourceEntity(241U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(26U);
    msg.start_lat = 0.4973156605864044;
    msg.start_lon = 0.1199816057963159;
    msg.start_z = 0.04701041451710475;
    msg.start_z_units = 59U;
    msg.end_lat = 0.332901836491153;
    msg.end_lon = 0.49000419448168664;
    msg.end_z = 0.18845419983745637;
    msg.end_z_units = 173U;
    msg.speed = 0.20463132376272697;
    msg.speed_units = 183U;
    msg.lradius = 0.2905257227103367;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.12422831866610506);
    msg.setSource(27500U);
    msg.setSourceEntity(244U);
    msg.setDestination(11637U);
    msg.setDestinationEntity(126U);
    msg.x = 0.7661252429793757;
    msg.y = 0.03059688513838965;
    msg.z = 0.0609884102809678;
    msg.k = 0.14322524837891615;
    msg.m = 0.2944616267633554;
    msg.n = 0.7333079659383381;
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
    msg.setTimeStamp(0.18075199190640545);
    msg.setSource(55358U);
    msg.setSourceEntity(136U);
    msg.setDestination(65010U);
    msg.setDestinationEntity(212U);
    msg.x = 0.18338580931850812;
    msg.y = 0.515536647229342;
    msg.z = 0.73822838512657;
    msg.k = 0.16089735182908305;
    msg.m = 0.4983331772124264;
    msg.n = 0.4272564053298712;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.6202314778751497);
    msg.setSource(32282U);
    msg.setSourceEntity(7U);
    msg.setDestination(14281U);
    msg.setDestinationEntity(210U);
    msg.x = 0.609498246187114;
    msg.y = 0.16875339018331337;
    msg.z = 0.4271995755701474;
    msg.k = 0.796078790741298;
    msg.m = 0.7756417506876259;
    msg.n = 0.7746312578489106;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.000496780204957914);
    msg.setSource(63620U);
    msg.setSourceEntity(114U);
    msg.setDestination(19448U);
    msg.setDestinationEntity(254U);
    msg.value = 0.08250778843571416;

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
    msg.setTimeStamp(0.569442939772288);
    msg.setSource(46574U);
    msg.setSourceEntity(146U);
    msg.setDestination(22795U);
    msg.setDestinationEntity(70U);
    msg.value = 0.7289068217397926;

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
    msg.setTimeStamp(0.2825135462827506);
    msg.setSource(64674U);
    msg.setSourceEntity(75U);
    msg.setDestination(28234U);
    msg.setDestinationEntity(104U);
    msg.value = 0.46207332238820287;

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
    msg.setTimeStamp(0.3633376262973631);
    msg.setSource(32086U);
    msg.setSourceEntity(137U);
    msg.setDestination(20051U);
    msg.setDestinationEntity(111U);
    msg.u = 0.9619287768509827;
    msg.v = 0.9628875299323375;
    msg.w = 0.8154263139338278;
    msg.p = 0.13066759154338115;
    msg.q = 0.46438414212795953;
    msg.r = 0.6229385843544339;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.7279555936047626);
    msg.setSource(11480U);
    msg.setSourceEntity(159U);
    msg.setDestination(6764U);
    msg.setDestinationEntity(197U);
    msg.u = 0.08059901375307188;
    msg.v = 0.897189806340137;
    msg.w = 0.5433624778412479;
    msg.p = 0.7737494798196931;
    msg.q = 0.28044244535778173;
    msg.r = 0.2030779876545742;
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
    msg.setTimeStamp(0.6769643319124756);
    msg.setSource(65428U);
    msg.setSourceEntity(8U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(142U);
    msg.u = 0.6582154529706753;
    msg.v = 0.03552134705117904;
    msg.w = 0.667460861368546;
    msg.p = 0.9523837475853684;
    msg.q = 0.6556512961960386;
    msg.r = 0.9282865848050058;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.8571921537886666);
    msg.setSource(56939U);
    msg.setSourceEntity(79U);
    msg.setDestination(9166U);
    msg.setDestinationEntity(221U);
    msg.start_lat = 0.1884690448728752;
    msg.start_lon = 0.6478216799644848;
    msg.start_z = 0.589240734729063;
    msg.start_z_units = 43U;
    msg.end_lat = 0.2596936760073374;
    msg.end_lon = 0.6513177099921711;
    msg.end_z = 0.77022297598172;
    msg.end_z_units = 253U;
    msg.lradius = 0.7748578701140603;
    msg.flags = 47U;
    msg.x = 0.09999342756851481;
    msg.y = 0.831877961428861;
    msg.z = 0.2707834765415348;
    msg.vx = 0.08130248780489924;
    msg.vy = 0.8654358389598724;
    msg.vz = 0.2268751596755234;
    msg.course_error = 0.33863899764998684;
    msg.eta = 56790U;

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
    msg.setTimeStamp(0.8370274308531724);
    msg.setSource(13779U);
    msg.setSourceEntity(112U);
    msg.setDestination(31449U);
    msg.setDestinationEntity(208U);
    msg.start_lat = 0.3323108305405794;
    msg.start_lon = 0.43304419039848296;
    msg.start_z = 0.7741557031042073;
    msg.start_z_units = 37U;
    msg.end_lat = 0.2520298286494924;
    msg.end_lon = 0.1524291782804863;
    msg.end_z = 0.1984043902433843;
    msg.end_z_units = 42U;
    msg.lradius = 0.6436835779174495;
    msg.flags = 196U;
    msg.x = 0.1253360801899852;
    msg.y = 0.3974589354898608;
    msg.z = 0.3002882059274278;
    msg.vx = 0.7663225072012521;
    msg.vy = 0.19305541388483027;
    msg.vz = 0.6261600887311464;
    msg.course_error = 0.8557558786785018;
    msg.eta = 21712U;

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
    msg.setTimeStamp(0.3448390826897675);
    msg.setSource(14239U);
    msg.setSourceEntity(149U);
    msg.setDestination(53109U);
    msg.setDestinationEntity(139U);
    msg.start_lat = 0.30764428288948187;
    msg.start_lon = 0.3385653609419006;
    msg.start_z = 0.738104193087019;
    msg.start_z_units = 66U;
    msg.end_lat = 0.6586343215844361;
    msg.end_lon = 0.666808462890025;
    msg.end_z = 0.6078899859179903;
    msg.end_z_units = 95U;
    msg.lradius = 0.0021291383101306183;
    msg.flags = 253U;
    msg.x = 0.9413141630625046;
    msg.y = 0.004126425606703066;
    msg.z = 0.6294567263982186;
    msg.vx = 0.6152697537556715;
    msg.vy = 0.9887397524332897;
    msg.vz = 0.752804120667396;
    msg.course_error = 0.3786915965762977;
    msg.eta = 56844U;

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
    msg.setTimeStamp(0.3714103800552069);
    msg.setSource(2031U);
    msg.setSourceEntity(206U);
    msg.setDestination(22402U);
    msg.setDestinationEntity(195U);
    msg.k = 0.15117530982246308;
    msg.m = 0.3406111579912168;
    msg.n = 0.6355540621858297;

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
    msg.setTimeStamp(0.4796419904950301);
    msg.setSource(13736U);
    msg.setSourceEntity(46U);
    msg.setDestination(49493U);
    msg.setDestinationEntity(209U);
    msg.k = 0.8716937478834343;
    msg.m = 0.054584531043437745;
    msg.n = 0.46855320353925056;

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
    msg.setTimeStamp(0.03627572546824198);
    msg.setSource(25143U);
    msg.setSourceEntity(158U);
    msg.setDestination(52535U);
    msg.setDestinationEntity(69U);
    msg.k = 0.41366516969438705;
    msg.m = 0.02177503216058152;
    msg.n = 0.09262171509889716;

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
    msg.setTimeStamp(0.9386548275103728);
    msg.setSource(12949U);
    msg.setSourceEntity(49U);
    msg.setDestination(51306U);
    msg.setDestinationEntity(195U);
    msg.p = 0.9948264111547837;
    msg.i = 0.7516734146778263;
    msg.d = 0.5215573754912989;
    msg.a = 0.5568814043841491;

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
    msg.setTimeStamp(0.25306136053094086);
    msg.setSource(23420U);
    msg.setSourceEntity(147U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(73U);
    msg.p = 0.09865518992452937;
    msg.i = 0.7849373526419559;
    msg.d = 0.6604830302843985;
    msg.a = 0.18696528926596523;

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
    msg.setTimeStamp(0.11852339094677522);
    msg.setSource(14476U);
    msg.setSourceEntity(146U);
    msg.setDestination(22744U);
    msg.setDestinationEntity(251U);
    msg.p = 0.20875691101400295;
    msg.i = 0.4100169674058022;
    msg.d = 0.22345572437452244;
    msg.a = 0.7890040547830101;

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
    msg.setTimeStamp(0.2531754330713757);
    msg.setSource(49895U);
    msg.setSourceEntity(194U);
    msg.setDestination(37308U);
    msg.setDestinationEntity(250U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.3397159972102277);
    msg.setSource(47460U);
    msg.setSourceEntity(170U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(108U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.6628313883185744);
    msg.setSource(1491U);
    msg.setSourceEntity(177U);
    msg.setDestination(2669U);
    msg.setDestinationEntity(201U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.738507140912917);
    msg.setSource(18554U);
    msg.setSourceEntity(200U);
    msg.setDestination(19620U);
    msg.setDestinationEntity(91U);
    msg.timeout = 22840U;
    msg.lat = 0.3642865637330467;
    msg.lon = 0.5162744122009597;
    msg.z = 0.4615102769516296;
    msg.z_units = 18U;
    msg.speed = 0.2611112376578736;
    msg.speed_units = 209U;
    msg.roll = 0.3448390735059498;
    msg.pitch = 0.28945528087060035;
    msg.yaw = 0.1981778707066657;
    msg.custom.assign("WHHEVTCLEXYMQFFNMEZBOAVIFXOVVGEEZKYKIDPPYDLAQAUCSGFNPKQZAKKSXIVJITJHVZGPDFQZPPALCRWKYXXMLOCGJEZDLDYBZUWJFLTTBTRUUJYYNBHMFNPCNLUXOZBSCJECRQSK");

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
    msg.setTimeStamp(0.6586030114353072);
    msg.setSource(26011U);
    msg.setSourceEntity(119U);
    msg.setDestination(37373U);
    msg.setDestinationEntity(122U);
    msg.timeout = 2711U;
    msg.lat = 0.48338348772181006;
    msg.lon = 0.5823494392444833;
    msg.z = 0.4787847759192885;
    msg.z_units = 180U;
    msg.speed = 0.2784108404504262;
    msg.speed_units = 133U;
    msg.roll = 0.11279233523970655;
    msg.pitch = 0.027736583403059734;
    msg.yaw = 0.08926650834127481;
    msg.custom.assign("TCARAJIGZUPHWYK");

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
    msg.setTimeStamp(0.12108536187428265);
    msg.setSource(61140U);
    msg.setSourceEntity(100U);
    msg.setDestination(61334U);
    msg.setDestinationEntity(142U);
    msg.timeout = 43924U;
    msg.lat = 0.4194871306764639;
    msg.lon = 0.004039917278244598;
    msg.z = 0.6806713974085089;
    msg.z_units = 71U;
    msg.speed = 0.30986249851108094;
    msg.speed_units = 95U;
    msg.roll = 0.5938242235631045;
    msg.pitch = 0.031199754935655744;
    msg.yaw = 0.30552684335280156;
    msg.custom.assign("WUMUNSNITSVHPTILCLDFYZVOFHZSJFINPCXAQZUKIKSIDTGDXBKOSIKXMAXZOARMJFGHNSUWEZTIUATUBLUWHK");

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
    msg.setTimeStamp(0.724926405368623);
    msg.setSource(20627U);
    msg.setSourceEntity(123U);
    msg.setDestination(8489U);
    msg.setDestinationEntity(172U);
    msg.timeout = 19394U;
    msg.lat = 0.9223320011026339;
    msg.lon = 0.9218604299052633;
    msg.z = 0.3282537911670961;
    msg.z_units = 237U;
    msg.speed = 0.23906677121814535;
    msg.speed_units = 238U;
    msg.duration = 55462U;
    msg.radius = 0.9356853401621125;
    msg.flags = 209U;
    msg.custom.assign("KDIMLDXUYIBYGSXSRZMUAFQEFYHVWIOHMAXWURATQCTMGXFROBIJQPKPUDQJZLGJEHNJPCVNEJSVZOPGGWFCHWZZXCYCHIWJREWVFBREZINEIICSMAYFPHJALYZCLNOCTZMTSOVSKUEDSGAKPTBRUJEGYXQENFMNDJNKYCAUKCYVQHNOLIPWQODBMKSVPFDRZRZFSBTQUFKWUTAWOTGTDLXBMOVMBJABQLNKPUYEAODDXRHVLL");

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
    msg.setTimeStamp(0.3501125703366129);
    msg.setSource(10044U);
    msg.setSourceEntity(91U);
    msg.setDestination(15411U);
    msg.setDestinationEntity(4U);
    msg.timeout = 26689U;
    msg.lat = 0.5811883498130311;
    msg.lon = 0.8457945586362787;
    msg.z = 0.4967792717826536;
    msg.z_units = 12U;
    msg.speed = 0.7626090459486057;
    msg.speed_units = 129U;
    msg.duration = 50212U;
    msg.radius = 0.05630558142997988;
    msg.flags = 184U;
    msg.custom.assign("DYFMGIOGUIRAJLHFURZECKNGBAWPFGFAHQJZUTLDNTAAPDYPVHMJLTCDNUCTYBLPHUMEVHCQADXTWBKDSWNPOVNVCRBQZYFLZMSZQTAJSEQDUSAVRQYFOH");

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
    msg.setTimeStamp(0.15705509924165983);
    msg.setSource(10490U);
    msg.setSourceEntity(155U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(250U);
    msg.timeout = 40584U;
    msg.lat = 0.7715664428063579;
    msg.lon = 0.7944885073085182;
    msg.z = 0.2895291160084966;
    msg.z_units = 99U;
    msg.speed = 0.03963601632699143;
    msg.speed_units = 102U;
    msg.duration = 52269U;
    msg.radius = 0.4814534293254028;
    msg.flags = 237U;
    msg.custom.assign("TELUVPTGYJYPHFAWDJIADJZRKIHJQJWPVFFBTUQAOSIVQOXMCVTIAVMMIESZWKIKMJYKNJUNAPLPOJWDTLMUQCSDHOLYLZATAHXBCNXCBLXGYDUFFRYEZUBCR");

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
    msg.setTimeStamp(0.3317846145411869);
    msg.setSource(39257U);
    msg.setSourceEntity(71U);
    msg.setDestination(36350U);
    msg.setDestinationEntity(228U);
    msg.custom.assign("LGSAXPKEMOGRVFMOEDJOSZKHDPHPFXJZDUSDLPPBBCOTURRX");

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
    msg.setTimeStamp(0.5944711105984123);
    msg.setSource(7300U);
    msg.setSourceEntity(51U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(13U);
    msg.custom.assign("AHCDTZTDUJKWRGQEYATKXRLNFKDOLGLPLGUCFLCCDJLLFBTDTXIBUEVDGAKPQVYSSEGKCQNVTOKJHVRYPBFYMPSCWQXTAKZIYMQHILXVEYNPOSUERNJLRPWINFJIDBFVBXRQ");

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
    msg.setTimeStamp(0.732007868458277);
    msg.setSource(244U);
    msg.setSourceEntity(148U);
    msg.setDestination(42285U);
    msg.setDestinationEntity(174U);
    msg.custom.assign("SNGFTEXTTWMSPJRATAIPKIHZWDVCANKWMYAGCMGEGBFTQNU");

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
    msg.setTimeStamp(0.9310220852507423);
    msg.setSource(40824U);
    msg.setSourceEntity(213U);
    msg.setDestination(30171U);
    msg.setDestinationEntity(170U);
    msg.timeout = 2229U;
    msg.lat = 0.5818257743983021;
    msg.lon = 0.9562677280838353;
    msg.z = 0.7068692210601174;
    msg.z_units = 98U;
    msg.duration = 54563U;
    msg.speed = 0.27399396191115066;
    msg.speed_units = 119U;
    msg.type = 1U;
    msg.radius = 0.22914918497550196;
    msg.length = 0.6213796512322369;
    msg.bearing = 0.15774283376829068;
    msg.direction = 134U;
    msg.custom.assign("JMGCMQOQLDTMYARXWSDSRDPYVLNEOBNKEXZHJIUOEVIHLRFOXAIJSGUCYAFKWVLKHQUYRUOSCOHJOJAFHYVGMRZRBLSGZEPCFJJJUFPGDTDDMIYFWIETZSBUNUFCG");

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
    msg.setTimeStamp(0.004042212552991309);
    msg.setSource(7149U);
    msg.setSourceEntity(70U);
    msg.setDestination(24852U);
    msg.setDestinationEntity(174U);
    msg.timeout = 35727U;
    msg.lat = 0.21452175491444236;
    msg.lon = 0.717299926109975;
    msg.z = 0.40513760124228115;
    msg.z_units = 59U;
    msg.duration = 58150U;
    msg.speed = 0.04652705029269466;
    msg.speed_units = 179U;
    msg.type = 113U;
    msg.radius = 0.5098541984724283;
    msg.length = 0.9936377739363372;
    msg.bearing = 0.3415088203665899;
    msg.direction = 12U;
    msg.custom.assign("ZXTFQSXCMYPVHGTLUBJCVREJOFLNHELQTNWZFVSBOHNEKOIARIBPXPIIBAEUJUSCMKPJODODDQLPKHCNDQWZZSSHOACCGLYKKRSSYROBCQKLOTAMFFJFEJ");

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
    msg.setTimeStamp(0.77206665469248);
    msg.setSource(50916U);
    msg.setSourceEntity(230U);
    msg.setDestination(27994U);
    msg.setDestinationEntity(175U);
    msg.timeout = 42878U;
    msg.lat = 0.14491986186671657;
    msg.lon = 0.8604378049630893;
    msg.z = 0.8084534350883702;
    msg.z_units = 85U;
    msg.duration = 15996U;
    msg.speed = 0.9578302839212904;
    msg.speed_units = 48U;
    msg.type = 20U;
    msg.radius = 0.7088628119040978;
    msg.length = 0.5686552128645136;
    msg.bearing = 0.7983605330518146;
    msg.direction = 97U;
    msg.custom.assign("PTPFAQJHPAYWNXZJLFXYTCGJYJHHPTVOGYVBSCCXBBBBDMBSOPKXOZGANIFPERVLDQEEEAWWLVCSQDQGVGNJDDCCIJZUWPNVSWSMLKICMRHHMTPMIFATOTTSFDISIFABARNEHNAYULTRQVDNEOUUYZFYVHSILCWBGWMPUKDVHUZGKZZKBLIJSOTAFLMXLQRKHEIKVUXXDB");

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
    msg.setTimeStamp(0.9931795512043302);
    msg.setSource(57859U);
    msg.setSourceEntity(55U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(168U);
    msg.duration = 4750U;
    msg.custom.assign("HIYHHJEXJRJTCDWWOWURXHDEYYUBZGVBBSSJGOMJRCPBKKCRKDIPFBOLJSMMJDLAAOEWQILIVCVRSQVZZBPUADYLVLNGBKFKMZHUWEPZDUIASCMOQRGRCGAONFAFPAFBOEVSVPGHPZPXNEDAILENJCFCWTTRQYKSLJONRMBIPZLNLHKYEZWKODYTGDNQCVPVOTQN");

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
    msg.setTimeStamp(0.30267263227851504);
    msg.setSource(47978U);
    msg.setSourceEntity(202U);
    msg.setDestination(46415U);
    msg.setDestinationEntity(186U);
    msg.duration = 54983U;
    msg.custom.assign("AKNLIDCRGZLCACHTYWIOSHOFVTFXXLUUVODWXVUVCMSJRLPYJHNMSICYXFGGFPIRASZQBGAJPMPMWNFFTUKHBZZROUGZYQDKDCNNLNXKITQDQEYDWCQGNGRXBRALGCTLPUPHAPXRVEIQWBDZHBEGUUQJVNGEMXZFTBIHSOVZTXJQOUYMWMHKKRIAOVKCFDMFAKHAVWLVIWXHLLANCMYSZYFJBOJQKPOJETSESYTE");

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
    msg.setTimeStamp(0.868095759399919);
    msg.setSource(20223U);
    msg.setSourceEntity(144U);
    msg.setDestination(438U);
    msg.setDestinationEntity(189U);
    msg.duration = 11970U;
    msg.custom.assign("SPJBJXGHLPLGRQSBYPPTPYGOIXBFABWZWHWUCZQSCSGXEDESAXHWNRHLKLUCSHYPLIARZKDPVZF");

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
    msg.setTimeStamp(0.23578453039782876);
    msg.setSource(6825U);
    msg.setSourceEntity(187U);
    msg.setDestination(59792U);
    msg.setDestinationEntity(188U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.709539920571239;
    tmp_msg_0.z_units = 16U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20287U;
    msg.custom.assign("BGSPKCFNQZVPEHCMUVFPKFCNGTKCYGPNAHTJGDQUBSZJSTMQHWJLGQIYAAJVE");

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
    msg.setTimeStamp(0.3767603718244049);
    msg.setSource(11830U);
    msg.setSourceEntity(202U);
    msg.setDestination(9864U);
    msg.setDestinationEntity(66U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9786608580778704;
    tmp_msg_0.speed_units = 100U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11984U;
    msg.custom.assign("JWCKJDXGAVGQZBLKYRFFNQHUWYINTJREHGVOUAMQIKCEBQWCMBQWABRCOWZPWJVZGXFZVCMFURMPDXDAJHOSGIDITBFSNESAWNBTTDYEIXNCFZXLKXMO");

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
    msg.setTimeStamp(0.457146198074443);
    msg.setSource(12476U);
    msg.setSourceEntity(215U);
    msg.setDestination(32176U);
    msg.setDestinationEntity(80U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1580584347923497;
    tmp_msg_0.speed_units = 25U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46402U;
    msg.custom.assign("VHJLYXGNWUZNBJLUIYPOREGFVCALWYAVGTNETMBVDEGHKTSDSPQKCZHAZGRYYLPEJWNHMECVAHMVEHXJDRNGGAQQIQMNTUWSDWBOIYCUWPKAFZPQZPQXZUBUXJQKBVVMLEROFIJYLBDOHMFSZ");

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
    msg.setTimeStamp(0.3913938415842978);
    msg.setSource(40466U);
    msg.setSourceEntity(161U);
    msg.setDestination(3653U);
    msg.setDestinationEntity(22U);
    msg.timeout = 62725U;
    msg.lat = 0.13348015793201762;
    msg.lon = 0.4775538621646783;
    msg.z = 0.3959528881251372;
    msg.z_units = 64U;
    msg.speed = 0.5378027542777606;
    msg.speed_units = 226U;
    msg.bearing = 0.11208168456359147;
    msg.cross_angle = 0.542463109782714;
    msg.width = 0.2635421631150373;
    msg.length = 0.9094240473273633;
    msg.hstep = 0.8181425146931045;
    msg.coff = 65U;
    msg.alternation = 225U;
    msg.flags = 76U;
    msg.custom.assign("XXVDKZOWLREAEHYFMYMCJPLMUVRWWSWFABNXDMAMEKEJKJGSWAXOGFMWZTZIBPFYIBUQPQHMRQNVMYSDBHHNTDFQMUYAHTGKCXETQYJJFPVJOPNBQUVKZNPLRYPUNACDB");

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
    msg.setTimeStamp(0.9547180365080191);
    msg.setSource(9570U);
    msg.setSourceEntity(244U);
    msg.setDestination(33868U);
    msg.setDestinationEntity(165U);
    msg.timeout = 49531U;
    msg.lat = 0.7241714982842701;
    msg.lon = 0.4790477411843108;
    msg.z = 0.6306217022767515;
    msg.z_units = 218U;
    msg.speed = 0.6714935695040092;
    msg.speed_units = 85U;
    msg.bearing = 0.9757439163413171;
    msg.cross_angle = 0.04288285856152696;
    msg.width = 0.8181652945866356;
    msg.length = 0.32781298464525066;
    msg.hstep = 0.9687753317610329;
    msg.coff = 40U;
    msg.alternation = 199U;
    msg.flags = 166U;
    msg.custom.assign("NPAWCGJWRXNWMAVNJYYCFLKZQPADGLZTUNZTBORUQJFGSXKYTAHBXQGCDIDHOPBJIJBBVAHAUGXODFNCBEUTFYZWCRGUWWJSBYRPQZVYGMHLURKSUAXLFOKH");

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
    msg.setTimeStamp(0.6459582501602915);
    msg.setSource(52515U);
    msg.setSourceEntity(75U);
    msg.setDestination(65355U);
    msg.setDestinationEntity(22U);
    msg.timeout = 27933U;
    msg.lat = 0.45127505025087655;
    msg.lon = 0.515923891885499;
    msg.z = 0.3982151085650172;
    msg.z_units = 45U;
    msg.speed = 0.6781920250583052;
    msg.speed_units = 62U;
    msg.bearing = 0.1382820355575427;
    msg.cross_angle = 0.42781825720493594;
    msg.width = 0.9745690757506521;
    msg.length = 0.49642845588366213;
    msg.hstep = 0.5148656759720215;
    msg.coff = 92U;
    msg.alternation = 48U;
    msg.flags = 80U;
    msg.custom.assign("OEJSTAQBQPDZEGFLGOSIIBBUZMVDFHTPNUDRAWKXORMROQEGNKOUANRLTJSJKTGOKXHJUJPGLPIKZUFVTPNVBMZLMBQCRVXCYYSFUCBATDRJWKBVELSMLHGCWZFZXPDAHNKHZGNLSRFATKFVNHMYALNSNQFIZGYRCISPQJEWFUAWJRVCAIOQEXQKMVOJDCYCBUYUGHWHWWWIFDYDZRCSEPZXV");

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
    msg.setTimeStamp(0.6300586387689394);
    msg.setSource(3820U);
    msg.setSourceEntity(196U);
    msg.setDestination(56684U);
    msg.setDestinationEntity(249U);
    msg.timeout = 22786U;
    msg.lat = 0.6539109947646953;
    msg.lon = 0.9756864268837869;
    msg.z = 0.024048236458502514;
    msg.z_units = 212U;
    msg.speed = 0.3556855239975325;
    msg.speed_units = 27U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9897886605762637;
    tmp_msg_0.y = 0.6074776369958519;
    tmp_msg_0.z = 0.015188894118878027;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PTCXFNLJNGURDWAYEAZFPHJPVVFMEQMZLJILTKTYIMEVGLKOTLJIOLUHYLNOJZYIRHEWASAPWLEKUAUETSGYWMDSKSWNODZTWFKODMWBJDZQLJKYWYCUSRXVSTROMJTNCQYHUOYUBGMBKBAPRFINQHSHKRSARXQJECWKGUNBCCXDPNMTIBUKP");

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
    msg.setTimeStamp(0.6344708384806798);
    msg.setSource(45374U);
    msg.setSourceEntity(121U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(139U);
    msg.timeout = 3350U;
    msg.lat = 0.051584997370142216;
    msg.lon = 0.1552736470039936;
    msg.z = 0.10946754393662583;
    msg.z_units = 90U;
    msg.speed = 0.5623691840543252;
    msg.speed_units = 112U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2709600915705682;
    tmp_msg_0.y = 0.10586403852235193;
    tmp_msg_0.z = 0.3019529579434451;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DVDIUXITJFJYZSSOCYQJPQJO");

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
    msg.setTimeStamp(0.675602162670104);
    msg.setSource(27622U);
    msg.setSourceEntity(6U);
    msg.setDestination(34748U);
    msg.setDestinationEntity(250U);
    msg.timeout = 28314U;
    msg.lat = 0.5023733150801262;
    msg.lon = 0.8502956071725389;
    msg.z = 0.4125426359231392;
    msg.z_units = 247U;
    msg.speed = 0.20687086989970682;
    msg.speed_units = 166U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.37589770017929036;
    tmp_msg_0.y = 0.03383813780158662;
    tmp_msg_0.z = 0.9830564299454788;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XUCARJRIWHWMGFAWLZUNRYGIQSFHPAFJXVUZXYBPVFMKUHVGHWVXLDEIIESADZWKOKNOVXCCPUITYSAQPHTYLSPKSDXANJIWZVQMBEBRYOJZCNSREKHKYUQZGLET");

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
    msg.setTimeStamp(0.9920959401068036);
    msg.setSource(62294U);
    msg.setSourceEntity(248U);
    msg.setDestination(52451U);
    msg.setDestinationEntity(242U);
    msg.x = 0.963658277711205;
    msg.y = 0.751104377765981;
    msg.z = 0.7817828299249732;

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
    msg.setTimeStamp(0.21161804628982883);
    msg.setSource(43031U);
    msg.setSourceEntity(148U);
    msg.setDestination(30831U);
    msg.setDestinationEntity(227U);
    msg.x = 0.9961316890614609;
    msg.y = 0.9408154941177705;
    msg.z = 0.03317643185171659;

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
    msg.setTimeStamp(0.47258787570824334);
    msg.setSource(37129U);
    msg.setSourceEntity(116U);
    msg.setDestination(46650U);
    msg.setDestinationEntity(59U);
    msg.x = 0.8898903875950837;
    msg.y = 0.39667658932336747;
    msg.z = 0.10008940956851065;

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
    msg.setTimeStamp(0.7310480682599818);
    msg.setSource(6149U);
    msg.setSourceEntity(217U);
    msg.setDestination(29126U);
    msg.setDestinationEntity(49U);
    msg.timeout = 54894U;
    msg.lat = 0.8241617215719749;
    msg.lon = 0.022142073869041434;
    msg.z = 0.8786369892748019;
    msg.z_units = 235U;
    msg.amplitude = 0.8360285281127737;
    msg.pitch = 0.04874174980851487;
    msg.speed = 0.9487838334322094;
    msg.speed_units = 155U;
    msg.custom.assign("ZQOQHYHBTVMBPEPXCLAQKNFVGPKZYOIBETITMDVGSAWEYTBCZFAJLOAFRLEBVPSCOPQYQVSKHDUJMNXYGEUHHJNNKUDKJIBFESVEXMCUIPSRGFZQZIMDJDKUCNPFFLAWOMKCRXYVYOEAZIHBVPQBBXXESGXILKULTWMSFWNDFIWOLWOJRVMSEPGXJGTODZCATRQGGYIDMCTWNPAFRYWCN");

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
    msg.setTimeStamp(0.8628437986238274);
    msg.setSource(6168U);
    msg.setSourceEntity(29U);
    msg.setDestination(35561U);
    msg.setDestinationEntity(42U);
    msg.timeout = 3496U;
    msg.lat = 0.3225798863388716;
    msg.lon = 0.17043512276429074;
    msg.z = 0.8530792488634312;
    msg.z_units = 20U;
    msg.amplitude = 0.5204440320029079;
    msg.pitch = 0.09600913499990837;
    msg.speed = 0.4805625976856861;
    msg.speed_units = 61U;
    msg.custom.assign("KZYUJMLVHYCXIWGXRHSAKTLVPDPGHYGKEHVNJPDSAAITSMOWUQQNNEFNRKCRSEAKRTZSONPBHFZOELIWSYZQREBGIQDWDAFDRVYKQDBOJMXMTSOIGMIPRAKJITZWUBPICXFPYRANEV");

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
    msg.setTimeStamp(0.6757835422779663);
    msg.setSource(8090U);
    msg.setSourceEntity(181U);
    msg.setDestination(8528U);
    msg.setDestinationEntity(126U);
    msg.timeout = 6537U;
    msg.lat = 0.17489113644456056;
    msg.lon = 0.8776363068381807;
    msg.z = 0.7592336080831028;
    msg.z_units = 138U;
    msg.amplitude = 0.3743830417048025;
    msg.pitch = 0.9657671805298965;
    msg.speed = 0.792080127237259;
    msg.speed_units = 254U;
    msg.custom.assign("OUESBEVDRWBKGPTTZFCKIYFBIQYLJKJQPDMZTNHVFYRAJZGUZWNZTGWCUORBCLAXGZXRQOIRPBBHYPOBHIZVIAPGLNVKSFJQCIHASJKIKDLXCHFVRJEIWPSTTPAUDWEVQVJXJHPNWERSSWBFNOALUYQLPMMKGYEPVXJESKGCYINDMQCGHKWXDFMXQCHLEOSVDUKRMYZDRBGENUCXOMMSJOYNNUMMFFSTOTTZ");

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
    msg.setTimeStamp(0.2516051817838102);
    msg.setSource(33578U);
    msg.setSourceEntity(179U);
    msg.setDestination(48336U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.5203185225992194);
    msg.setSource(20294U);
    msg.setSourceEntity(123U);
    msg.setDestination(57840U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.09347538877843897);
    msg.setSource(31387U);
    msg.setSourceEntity(64U);
    msg.setDestination(14892U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.41572980427078976);
    msg.setSource(55542U);
    msg.setSourceEntity(233U);
    msg.setDestination(62429U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.45939227985609987;
    msg.lon = 0.3429308480113976;
    msg.z = 0.1179168421069976;
    msg.z_units = 206U;
    msg.radius = 0.0908712245238894;
    msg.duration = 15636U;
    msg.speed = 0.4164250749544257;
    msg.speed_units = 63U;
    msg.custom.assign("BBQDWSMYJHOEFYINNALJKMZYBIGPRAJPCQPNGGFRJLEWHPBWQOUMCSTKHPUZCUUBIHGZNWNWLZHXNSYJQFLOGQVVVAESXADUTEDLXYKLATSNGLZCFIXQGQWRRRMWIYWGDKZRPVXEMLSKFLFIJUYAEWNOQKTJCPVAIOAEHPEDVUKNUXICBNOYZDOJFCFCJVOPUR");

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
    msg.setTimeStamp(0.50447881999522);
    msg.setSource(14449U);
    msg.setSourceEntity(163U);
    msg.setDestination(36294U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.8284576620350353;
    msg.lon = 0.010954384602515854;
    msg.z = 0.37602576044412417;
    msg.z_units = 233U;
    msg.radius = 0.14412711646018073;
    msg.duration = 9635U;
    msg.speed = 0.8910476569306567;
    msg.speed_units = 51U;
    msg.custom.assign("QTLKVFNXTDLZNRFCEAVFKEMINYZORZJKXJXFCYQYNGKUFTNWDNFKGVBGABNSPNLWRJCRISYIBDFJQWJMIOIPZDGZJOUBFZHQWXLAKTYLDDRRBZAJPPRKMOUSMPVJAQZVAHNDUXQLCFHUSXXISVHOCUYOOEGAKMAXGO");

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
    msg.setTimeStamp(0.0898683788591752);
    msg.setSource(21806U);
    msg.setSourceEntity(55U);
    msg.setDestination(25019U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.9072095375453394;
    msg.lon = 0.7974539153020612;
    msg.z = 0.35819801839763166;
    msg.z_units = 128U;
    msg.radius = 0.25474353802443783;
    msg.duration = 57087U;
    msg.speed = 0.48934313699715626;
    msg.speed_units = 44U;
    msg.custom.assign("RYGCWKFWVPRAJLVMKBUVUJMHVPGDLZQLHRKLKFCXJBPEESEOTCMLAQNNWADDWNUOTWZBSMLNLQAXPUNZFKVYVEKGHISEVZUBHSWSTIBRTCBESPODVLHIZKYDOAWUHWXQOFRCPTMPXOOCMXFQYZMGVRQDNDZTYQSGMBZYWRTJCROTJTTYPQOWUQBIYCQSXBKXIKDZFIYAUMNJKIZFSFGDFMDIJJULEHVXYLPEN");

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
    msg.setTimeStamp(0.248076208466543);
    msg.setSource(55767U);
    msg.setSourceEntity(102U);
    msg.setDestination(47143U);
    msg.setDestinationEntity(86U);
    msg.timeout = 64196U;
    msg.flags = 34U;
    msg.lat = 0.3429625303005215;
    msg.lon = 0.4804453447319714;
    msg.start_z = 0.8855059028597192;
    msg.start_z_units = 42U;
    msg.end_z = 0.7606932045697306;
    msg.end_z_units = 84U;
    msg.radius = 0.8623529896209716;
    msg.speed = 0.6247607497554721;
    msg.speed_units = 155U;
    msg.custom.assign("RLPXRNTTHNCLFAVDACJURFDFTISLFYXEHISQSQEUZWHMOTJTZYOKJBHPMHKOWTBYYCIMYUJADBHXIDNDVAFNWPQCPIZIZXGBUWGBMDBKFKYZGQLMPOZREJOACTDGYKJSXEJKFBILYPQZJSOVYRGLXUVPD");

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
    msg.setTimeStamp(0.5479028199002605);
    msg.setSource(26360U);
    msg.setSourceEntity(253U);
    msg.setDestination(1802U);
    msg.setDestinationEntity(130U);
    msg.timeout = 17116U;
    msg.flags = 88U;
    msg.lat = 0.1082767709556427;
    msg.lon = 0.9938953874331667;
    msg.start_z = 0.4451484927166096;
    msg.start_z_units = 213U;
    msg.end_z = 0.3190939282836357;
    msg.end_z_units = 176U;
    msg.radius = 0.8749114795385154;
    msg.speed = 0.8383506336647776;
    msg.speed_units = 121U;
    msg.custom.assign("YZHCKWLPWYUGTBSZDIHSQRGMUJHS");

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
    msg.setTimeStamp(0.23730109618325934);
    msg.setSource(7798U);
    msg.setSourceEntity(157U);
    msg.setDestination(49062U);
    msg.setDestinationEntity(253U);
    msg.timeout = 42185U;
    msg.flags = 233U;
    msg.lat = 0.3116278917232308;
    msg.lon = 0.5884317123850273;
    msg.start_z = 0.21861220097003808;
    msg.start_z_units = 188U;
    msg.end_z = 0.30744804427135974;
    msg.end_z_units = 89U;
    msg.radius = 0.13774840608271244;
    msg.speed = 0.2765391170267827;
    msg.speed_units = 210U;
    msg.custom.assign("QUTXWPDWRDVCATJUDTELQHRIZJKCGTWFHBBQGJAMXMNXBHTNAGIHFDDUYDDHRJVUTCWIYFXRVBSESSQBFQDYVLHLMSKELHKNGMURLSAJHHO");

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
    msg.setTimeStamp(0.33478287272515095);
    msg.setSource(27960U);
    msg.setSourceEntity(136U);
    msg.setDestination(18473U);
    msg.setDestinationEntity(80U);
    msg.timeout = 19037U;
    msg.lat = 0.8554780945926392;
    msg.lon = 0.4332391765610446;
    msg.z = 0.47427770061837893;
    msg.z_units = 178U;
    msg.speed = 0.4159900885688894;
    msg.speed_units = 91U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.654039075398277;
    tmp_msg_0.y = 0.3379395257945683;
    tmp_msg_0.z = 0.7574924188982747;
    tmp_msg_0.t = 0.12947420445717428;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZURDTMONONOFMXDLRVYCBOFRSLIAKOGCARBSVJZQJ");

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
    msg.setTimeStamp(0.3920280792211964);
    msg.setSource(3171U);
    msg.setSourceEntity(33U);
    msg.setDestination(23424U);
    msg.setDestinationEntity(149U);
    msg.timeout = 42970U;
    msg.lat = 0.9141862699561637;
    msg.lon = 0.21906428044270976;
    msg.z = 0.34787615835177477;
    msg.z_units = 166U;
    msg.speed = 0.3609902397141147;
    msg.speed_units = 90U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0883117610691514;
    tmp_msg_0.y = 0.048948417916833575;
    tmp_msg_0.z = 0.8244101734105259;
    tmp_msg_0.t = 0.1829140174862891;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RPDKTUAOHJQURDTDXHCZQZOZKFBRRAY");

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
    msg.setTimeStamp(0.28362877983373147);
    msg.setSource(29614U);
    msg.setSourceEntity(181U);
    msg.setDestination(27344U);
    msg.setDestinationEntity(5U);
    msg.timeout = 5463U;
    msg.lat = 0.816792262398279;
    msg.lon = 0.725759644843403;
    msg.z = 0.33890637443372706;
    msg.z_units = 205U;
    msg.speed = 0.8882432534212767;
    msg.speed_units = 146U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.44197735104441815;
    tmp_msg_0.y = 0.3066113061818354;
    tmp_msg_0.z = 0.5783648293298081;
    tmp_msg_0.t = 0.3523780976339814;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HKXELOVUZOMGOTYDYLAOPMUKTUNQVUAKNPQPSYHOTHVSCVGYSJTKASOEANFJLOXINGVYXRSZXGDPBXLDNSASUWIMPPIWQJUSKREGCTTUFQFBLFEDJTBEEIXSLCZCBPBORVAYYXFDHRIWIQENZWILLIWGDRJEZFCNVZWKEOJCAUBTEGTCJBDYXVZQFMMHBGAKNLHZYNZRDIXUMJMHFKURJAHPQKW");

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
    msg.setTimeStamp(0.6245043017555415);
    msg.setSource(54799U);
    msg.setSourceEntity(249U);
    msg.setDestination(16069U);
    msg.setDestinationEntity(215U);
    msg.x = 0.6273009818206209;
    msg.y = 0.4881867822851561;
    msg.z = 0.80340109145371;
    msg.t = 0.21824494345868195;

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
    msg.setTimeStamp(0.5542003802638072);
    msg.setSource(39088U);
    msg.setSourceEntity(234U);
    msg.setDestination(64428U);
    msg.setDestinationEntity(235U);
    msg.x = 0.9537686698972936;
    msg.y = 0.9952123356039507;
    msg.z = 0.04713984627711365;
    msg.t = 0.047662226959471976;

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
    msg.setTimeStamp(0.4855226293840841);
    msg.setSource(22832U);
    msg.setSourceEntity(33U);
    msg.setDestination(40202U);
    msg.setDestinationEntity(240U);
    msg.x = 0.4307561351455156;
    msg.y = 0.16923676418209432;
    msg.z = 0.9084699537222999;
    msg.t = 0.389929345449435;

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
    msg.setTimeStamp(0.9550497056470356);
    msg.setSource(18468U);
    msg.setSourceEntity(164U);
    msg.setDestination(16362U);
    msg.setDestinationEntity(182U);
    msg.timeout = 40043U;
    msg.name.assign("VGDMPFKAMDILFJVVHTBZERCKMWNUOVBVASTVTGMYYOCDTYEPJQUOERHFDFPXZJLSRVIPADKBQQXOCBCRZZAOFXDPGBTNHPXM");
    msg.custom.assign("ODJLAPBSIITDQPOFTYJOQVIZYZNLDXNZPOELBSMYYCEUAMSGKQXHGGWORWMOZMVHVEIQCIQDJELPINTBNVLMUGWFNSWGRUKBDGQZHHUSIEHYRMCXFHMCJNYVYZPBAKSLJEUYNFKKHZMNFEXBQFSVDDSPOEJXQBRVOQ");

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
    msg.setTimeStamp(0.6737123994757261);
    msg.setSource(55037U);
    msg.setSourceEntity(250U);
    msg.setDestination(19152U);
    msg.setDestinationEntity(26U);
    msg.timeout = 16581U;
    msg.name.assign("BWCEPEHKLQTFQBNFNUYFNOLWNXZVWEVRVYSIYCSMLVIYDGDXAATXGUVJYKOVHSMGZLMTDLYEJVRICRMBQACSIJSDLOGAHOALJGUQETQA");
    msg.custom.assign("CCAJNJIMYQGUFVATXGLXZJUONNPIKFHYSMOLKLBBWPSFHW");

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
    msg.setTimeStamp(0.19185239286582956);
    msg.setSource(14818U);
    msg.setSourceEntity(251U);
    msg.setDestination(58589U);
    msg.setDestinationEntity(137U);
    msg.timeout = 8644U;
    msg.name.assign("USVFMUMAXPVBFEUWTBDCMEQRYKRREYJINQMTHGKLJFROYHQFVTRXVTFCOHLWOXIDZKKUZRMKNEJQGUHDVLYJCXOWSDOCBYIJHDWMOZERXQBYBYPFDWSOXKPGWKCXPGWIWJVXPBXFKTSUZPMNVNGWVBL");
    msg.custom.assign("SKQYTIKWFORDKGDJSLLNJTZPAEBQAOXJQJZGRFTEQAWNDORVSNJRCBEHFRCWBJHAMXKWMKFLAXKIUXYVILMANDLMUGMBGFGKTIXYJCINTCRHDDEQKH");

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
    msg.setTimeStamp(0.9405787778272233);
    msg.setSource(47823U);
    msg.setSourceEntity(154U);
    msg.setDestination(59326U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.5393915579891703;
    msg.lon = 0.6743092726089022;
    msg.z = 0.6726893849436707;
    msg.z_units = 80U;
    msg.speed = 0.37111520793866426;
    msg.speed_units = 248U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9815956426082523;
    tmp_msg_0.y = 0.6432721164425454;
    tmp_msg_0.z = 0.2187504935806558;
    tmp_msg_0.t = 0.442985178926841;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 11452U;
    tmp_msg_1.off_x = 0.11382841901349527;
    tmp_msg_1.off_y = 0.8177438001477886;
    tmp_msg_1.off_z = 0.28612008050173854;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.9398406505852976;
    msg.custom.assign("YYBJAJZKVQLUVTNKPRPWIBCMNBMBWRNQOJMXQRRZXALEGLGBHMWNHHDONOFTVIEEJSRIKTQSYDPRBFHMITCDVUCQQHJESXR");

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
    msg.setTimeStamp(0.46274164498765813);
    msg.setSource(21425U);
    msg.setSourceEntity(54U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.9816571754263549;
    msg.lon = 0.5427124101396218;
    msg.z = 0.5186333850176382;
    msg.z_units = 61U;
    msg.speed = 0.3177040151017141;
    msg.speed_units = 178U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0925704838688789;
    tmp_msg_0.y = 0.5887033282236227;
    tmp_msg_0.z = 0.34817222144966764;
    tmp_msg_0.t = 0.08119916475478972;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.2740592106186378;
    msg.custom.assign("QQUDRSRLBNRVFPOQSYDGBEWJCRWEQXMXHYJAHIGBLOWDSCRNHT");

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
    msg.setTimeStamp(0.9710614460524565);
    msg.setSource(31820U);
    msg.setSourceEntity(63U);
    msg.setDestination(61540U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.6745098578261806;
    msg.lon = 0.516250467373937;
    msg.z = 0.36565950286643023;
    msg.z_units = 27U;
    msg.speed = 0.2972399440069172;
    msg.speed_units = 174U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32877U;
    tmp_msg_0.off_x = 0.07212982741932461;
    tmp_msg_0.off_y = 0.7904843729150549;
    tmp_msg_0.off_z = 0.3880047236488432;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6756414513434376;
    msg.custom.assign("AKGNOJXXXVWNMBBIXZAXGVQPPMVFOEBCGDQODQHTASBTZZWDHJXYIAZDYHEVRCSQAPGIFZQLEHGDEKJELGFMCTWBLIBFMAROBYTQKPKHKJNQPZRUHLOFCJJUHSJFVKNVCZCYAWPMXKOUIZWGSUDIBCOWTJUPHUOGHCDRFNOMEWGAUERPXTKPVVSCOTNSNYZYBXLNMCGY");

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
    msg.setTimeStamp(0.6608089054874225);
    msg.setSource(28174U);
    msg.setSourceEntity(60U);
    msg.setDestination(51899U);
    msg.setDestinationEntity(74U);
    msg.vid = 34112U;
    msg.off_x = 0.0802856404426131;
    msg.off_y = 0.4762099157771468;
    msg.off_z = 0.05563266347702012;

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
    msg.setTimeStamp(0.043957063282828446);
    msg.setSource(11217U);
    msg.setSourceEntity(131U);
    msg.setDestination(11464U);
    msg.setDestinationEntity(128U);
    msg.vid = 53416U;
    msg.off_x = 0.5585548630826077;
    msg.off_y = 0.5167820572974274;
    msg.off_z = 0.5711208540014705;

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
    msg.setTimeStamp(0.8234174748163393);
    msg.setSource(15913U);
    msg.setSourceEntity(88U);
    msg.setDestination(31927U);
    msg.setDestinationEntity(91U);
    msg.vid = 40752U;
    msg.off_x = 0.741648486850741;
    msg.off_y = 0.03134962137101882;
    msg.off_z = 0.01740986056384719;

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
    msg.setTimeStamp(0.40506069048220905);
    msg.setSource(15482U);
    msg.setSourceEntity(157U);
    msg.setDestination(9493U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.9059486817913963);
    msg.setSource(32121U);
    msg.setSourceEntity(149U);
    msg.setDestination(4234U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.4390461646726933);
    msg.setSource(4058U);
    msg.setSourceEntity(155U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.605772631790914);
    msg.setSource(16361U);
    msg.setSourceEntity(253U);
    msg.setDestination(43685U);
    msg.setDestinationEntity(102U);
    msg.mid = 54484U;

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
    msg.setTimeStamp(0.301986216296135);
    msg.setSource(42687U);
    msg.setSourceEntity(117U);
    msg.setDestination(32593U);
    msg.setDestinationEntity(248U);
    msg.mid = 35379U;

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
    msg.setTimeStamp(0.09377594171705483);
    msg.setSource(12864U);
    msg.setSourceEntity(171U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(146U);
    msg.mid = 12515U;

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
    msg.setTimeStamp(0.14768178095483486);
    msg.setSource(33539U);
    msg.setSourceEntity(71U);
    msg.setDestination(49826U);
    msg.setDestinationEntity(153U);
    msg.state = 229U;
    msg.eta = 9565U;
    msg.info.assign("NWPOCPABXXHKMXMESPPCCKNQSQCAVVAIFYPLHKVSEDGGZWEIZKNDVWCLQTYUMWWLAVLOLHOWUFXSDOAKBMZWPDBFORDKGSRTYUOYGHTHMUCFZOSGYXSQLRXZPDXFOZAVMUW");

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
    msg.setTimeStamp(0.3799070878132538);
    msg.setSource(56310U);
    msg.setSourceEntity(70U);
    msg.setDestination(11222U);
    msg.setDestinationEntity(38U);
    msg.state = 228U;
    msg.eta = 35245U;
    msg.info.assign("HIGIJAOKLHFBQASSUJDSSQPTNYXCSOCGWADRGIBEMNTTIVXJWBUSXTJUXVRLOUQJAYVRTEVCNQQK");

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
    msg.setTimeStamp(0.2754035678093656);
    msg.setSource(8516U);
    msg.setSourceEntity(20U);
    msg.setDestination(22151U);
    msg.setDestinationEntity(64U);
    msg.state = 149U;
    msg.eta = 24358U;
    msg.info.assign("UZPQIBWJDXZJKNWOYQWISNGTUKPZDFSCJCOKEMLHKDMLSGOCUOAWRVVCUYCWVFTPAAYKCTHIPZSDZFLOTVKQQBLYCNPBMSQDVMBEOXEJSEIHXQBRYRSBSGHPTT");

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
    msg.setTimeStamp(0.18686017235645036);
    msg.setSource(57450U);
    msg.setSourceEntity(3U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(33U);
    msg.system = 21000U;
    msg.duration = 43989U;
    msg.speed = 0.6381913159624256;
    msg.speed_units = 41U;
    msg.x = 0.593831529639006;
    msg.y = 0.3877370334891611;
    msg.z = 0.513023496199584;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.8907927391194074);
    msg.setSource(18615U);
    msg.setSourceEntity(238U);
    msg.setDestination(32964U);
    msg.setDestinationEntity(208U);
    msg.system = 4455U;
    msg.duration = 60822U;
    msg.speed = 0.4067509982872174;
    msg.speed_units = 175U;
    msg.x = 0.521168419530156;
    msg.y = 0.8057415834432933;
    msg.z = 0.2695841224407267;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.6916086364120985);
    msg.setSource(54290U);
    msg.setSourceEntity(28U);
    msg.setDestination(47603U);
    msg.setDestinationEntity(206U);
    msg.system = 6810U;
    msg.duration = 10889U;
    msg.speed = 0.2564853002469262;
    msg.speed_units = 64U;
    msg.x = 0.48754387207775063;
    msg.y = 0.9867767419696036;
    msg.z = 0.6929077243434357;
    msg.z_units = 152U;

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
    msg.setTimeStamp(0.39666938553546804);
    msg.setSource(24087U);
    msg.setSourceEntity(43U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.11257204742823812;
    msg.lon = 0.5641983289174034;
    msg.speed = 0.014610194764074103;
    msg.speed_units = 33U;
    msg.duration = 44959U;
    msg.sys_a = 31948U;
    msg.sys_b = 9897U;
    msg.move_threshold = 0.22683686399021752;

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
    msg.setTimeStamp(0.02298027981110029);
    msg.setSource(47387U);
    msg.setSourceEntity(113U);
    msg.setDestination(4547U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.14398845534215854;
    msg.lon = 0.9125467342974486;
    msg.speed = 0.8605030754150186;
    msg.speed_units = 230U;
    msg.duration = 38411U;
    msg.sys_a = 42656U;
    msg.sys_b = 32454U;
    msg.move_threshold = 0.02335442438784341;

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
    msg.setTimeStamp(0.0003307055833543515);
    msg.setSource(17366U);
    msg.setSourceEntity(222U);
    msg.setDestination(2597U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.8882094202088432;
    msg.lon = 0.5836806178592479;
    msg.speed = 0.08814441551788466;
    msg.speed_units = 183U;
    msg.duration = 48860U;
    msg.sys_a = 16301U;
    msg.sys_b = 53114U;
    msg.move_threshold = 0.33682195139368;

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
    msg.setTimeStamp(0.41248796159167034);
    msg.setSource(11541U);
    msg.setSourceEntity(80U);
    msg.setDestination(49895U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.8219956929057293;
    msg.lon = 0.328664626208203;
    msg.z = 0.4163741055435701;
    msg.z_units = 118U;
    msg.speed = 0.04828651544423179;
    msg.speed_units = 155U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1358067709630878;
    tmp_msg_0.lon = 0.3034700277935224;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LFYWOMJFFQXHNSPXDOUYBUCBACDGDSIWHEVRFHZIDAMQEHQOWMASEDDAMKEGMVKYWXQ");

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
    msg.setTimeStamp(0.6714528749173717);
    msg.setSource(31766U);
    msg.setSourceEntity(222U);
    msg.setDestination(63998U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.8677748049615537;
    msg.lon = 0.23867908752207145;
    msg.z = 0.08620383220603467;
    msg.z_units = 163U;
    msg.speed = 0.5476780021853992;
    msg.speed_units = 21U;
    msg.custom.assign("BBGEQLBMJHJNEMDWFHZBIOOXRAAMKSJQXVXJCJPJCSVGUMLWHKKLRSHYCPVHYIGXSDUIOKFXPSAVMLFUNFYFOATDCMNVSUJMFQRLXUTFYDAEERCYGNTZWBOICNCATBTWRPYIQQSUWMIZNBBZ");

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
    msg.setTimeStamp(0.04590810117595234);
    msg.setSource(29176U);
    msg.setSourceEntity(100U);
    msg.setDestination(15823U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.22055057971960468;
    msg.lon = 0.43728398425822324;
    msg.z = 0.46034324358478185;
    msg.z_units = 106U;
    msg.speed = 0.7999017160732577;
    msg.speed_units = 109U;
    msg.custom.assign("IKXJBRAMWQACKQSAQRWYNLUYNOSOQMTILAOUVMZVXVDNSUYRCXRAHQBWVXOMUQMPGRNBQKFNCZPIZRFENMIJYWBLLYGXQGKRYETZOPADGDNVDWGHXIPXBCFWBGDNHHDZOEMTSXIKHOJPGXJRLBCVMQEWRUGSFFCZCTENEADWEUUDJELAIVBVWSKHSPFPQJYFKIJADSNOTSZOKLTMUSZCLTCHKYTKBIJEYLGVXIJTF");

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
    msg.setTimeStamp(0.8538036030945828);
    msg.setSource(4566U);
    msg.setSourceEntity(186U);
    msg.setDestination(62001U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.17987051767434425;
    msg.lon = 0.8224170055305586;

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
    msg.setTimeStamp(0.1670717335698393);
    msg.setSource(56581U);
    msg.setSourceEntity(219U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.7865882749844865;
    msg.lon = 0.9977304761616371;

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
    msg.setTimeStamp(0.07472905270410357);
    msg.setSource(40586U);
    msg.setSourceEntity(101U);
    msg.setDestination(43471U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.8300036179191645;
    msg.lon = 0.2483209999357633;

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
    msg.setTimeStamp(0.7843014037125505);
    msg.setSource(59128U);
    msg.setSourceEntity(84U);
    msg.setDestination(29550U);
    msg.setDestinationEntity(159U);
    msg.timeout = 32602U;
    msg.lat = 0.9489749154090041;
    msg.lon = 0.8588438019700803;
    msg.z = 0.6878180640962844;
    msg.z_units = 140U;
    msg.pitch = 0.7234346439546419;
    msg.amplitude = 0.2809987148681864;
    msg.duration = 29418U;
    msg.speed = 0.17650511686506065;
    msg.speed_units = 134U;
    msg.radius = 0.10809568959283633;
    msg.direction = 194U;
    msg.custom.assign("PGYWKKIVALESGXTGJPOYGGDSCBQDUZXCNTMITEGOUJUGRKODXUNUYSLXZHTAPCIXEBRXPJRBTUCLWAZHVNQMZCEVLKLJSDXRKBMDKPTAQPFVSWRHLQKPZECWYIVILBXHZHVGISNWZLISNIYGESJPOMQMMJYZWDLBOOPNFVDBYVFJOYJTFUSMSRBYRACQZCWFHXTAJ");

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
    msg.setTimeStamp(0.9968467971810571);
    msg.setSource(24403U);
    msg.setSourceEntity(188U);
    msg.setDestination(26666U);
    msg.setDestinationEntity(195U);
    msg.timeout = 40933U;
    msg.lat = 0.601096658695854;
    msg.lon = 0.35565538952646214;
    msg.z = 0.22570105782355954;
    msg.z_units = 149U;
    msg.pitch = 0.8092447581352163;
    msg.amplitude = 0.44622073439210064;
    msg.duration = 37296U;
    msg.speed = 0.40700174039904224;
    msg.speed_units = 146U;
    msg.radius = 0.7256269861688482;
    msg.direction = 94U;
    msg.custom.assign("PDMUYXULZOYMSKJTECBJSZSDMKWJTWWJBRDATKXYYOQZLAGZEZKELBRINUUKKCXUVVRZLZIDMACCXTLYBPBOSHUPIHAALHBMRAZUNYH");

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
    msg.setTimeStamp(0.8044673014165238);
    msg.setSource(29717U);
    msg.setSourceEntity(156U);
    msg.setDestination(54462U);
    msg.setDestinationEntity(97U);
    msg.timeout = 29056U;
    msg.lat = 0.9462749817786457;
    msg.lon = 0.03190144776942516;
    msg.z = 0.6968767147873258;
    msg.z_units = 18U;
    msg.pitch = 0.22601525901527897;
    msg.amplitude = 0.3471869504497296;
    msg.duration = 39482U;
    msg.speed = 0.9108898766175283;
    msg.speed_units = 93U;
    msg.radius = 0.662083980475012;
    msg.direction = 216U;
    msg.custom.assign("EOGXBCFXYACAOOPBQFZWPQHOWLKVZIBGSFSJKWXIPHMYSJSLRPPSJUQVGIIVSZURYOUDQCHVXKXQGLHGESUHRTEJPHKWXUMXYWLQAMVADJAWMSBYOJDUMUNTKVIRKFPNBIWTCDYQKSKXNAHGUNNXNTLTEZDZTZDYOOCCNHSJRULFMNGZMTCKIYTRABKJFFAELRE");

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
    msg.setTimeStamp(0.8670574547985228);
    msg.setSource(10978U);
    msg.setSourceEntity(172U);
    msg.setDestination(35680U);
    msg.setDestinationEntity(129U);
    msg.control_src = 49365U;
    msg.control_ent = 99U;
    msg.timeout = 0.5184781563029977;
    msg.loiter_radius = 0.7402458776327144;
    msg.altitude_interval = 0.5066257282411456;

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
    msg.setTimeStamp(0.5362707297229157);
    msg.setSource(23434U);
    msg.setSourceEntity(169U);
    msg.setDestination(50639U);
    msg.setDestinationEntity(117U);
    msg.control_src = 32741U;
    msg.control_ent = 49U;
    msg.timeout = 0.7716191998354924;
    msg.loiter_radius = 0.23360086081771214;
    msg.altitude_interval = 0.9599642151757345;

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
    msg.setTimeStamp(0.17052596676900122);
    msg.setSource(45792U);
    msg.setSourceEntity(186U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(116U);
    msg.control_src = 33323U;
    msg.control_ent = 162U;
    msg.timeout = 0.4212740187665224;
    msg.loiter_radius = 0.9021875202784527;
    msg.altitude_interval = 0.21629113492673036;

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
    msg.setTimeStamp(0.8364246594471586);
    msg.setSource(29147U);
    msg.setSourceEntity(107U);
    msg.setDestination(38439U);
    msg.setDestinationEntity(148U);
    msg.flags = 225U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7703275276264937;
    tmp_msg_0.speed_units = 68U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9579770486621876;
    tmp_msg_1.z_units = 24U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.36864249954457384;
    msg.lon = 0.701589041052307;

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
    msg.setTimeStamp(0.11327438227704412);
    msg.setSource(10098U);
    msg.setSourceEntity(52U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(150U);
    msg.flags = 198U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.831850762935096;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.700098357383365;
    tmp_msg_1.z_units = 88U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.32860716332897855;
    msg.lon = 0.2820140509808031;

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
    msg.setTimeStamp(0.0031770909539139414);
    msg.setSource(23729U);
    msg.setSourceEntity(11U);
    msg.setDestination(57137U);
    msg.setDestinationEntity(143U);
    msg.flags = 154U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4476301603527192;
    tmp_msg_0.speed_units = 134U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9409694108057048;
    tmp_msg_1.z_units = 7U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.27310664646005955;
    msg.lon = 0.4798486398274042;

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
    msg.setTimeStamp(0.84455315755752);
    msg.setSource(47302U);
    msg.setSourceEntity(201U);
    msg.setDestination(25805U);
    msg.setDestinationEntity(251U);
    msg.op_mode = 53U;
    msg.error_count = 163U;
    msg.error_ents.assign("XTOMFNCTDUDGCHDSMBUBHRSUDMHLIWWEGKLYOAMYGDBVZKMNPYBBILYOIDANRKBQVYSZHBPXPPGMOBGIKLRXRXIDTRZJVKLRKOASTKYJAZQGMDH");
    msg.maneuver_type = 12296U;
    msg.maneuver_stime = 0.9454124224291417;
    msg.maneuver_eta = 52427U;
    msg.control_loops = 2795049103U;
    msg.flags = 225U;
    msg.last_error.assign("EVRLNJGWFUVMEQWDBKMNIZKKNVZQAEIYTKRCPHHCCWKIPAOZQNXLUDBYVMAMATHWYGOIXXSCECYWJJJTQYBLOGPJVGUZJRORQLHQDITGXUBDPCHASXISHIVLMAAQFDRVOCLCZEXDOPSLYYZOAKNNXOWRAPXFKQWDTJIQJPNHEEJBXENSDBZGVBFCNFZXSLFUFMUBZISGPTLYRWVFEJZPYMWMHDSOUVUFN");
    msg.last_error_time = 0.6582467898774225;

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
    msg.setTimeStamp(0.1498192030969523);
    msg.setSource(3553U);
    msg.setSourceEntity(148U);
    msg.setDestination(11649U);
    msg.setDestinationEntity(61U);
    msg.op_mode = 93U;
    msg.error_count = 118U;
    msg.error_ents.assign("GVOCRZXJGUQCAORNGMNYVDDHIRNSVJSFAUTNEBDBSPWUZXHNGFWFLJGARIMXMQFBHECMDDSLBFNFVGYPOTHJOVRACKEXUWPZBOVEUSQHWSBSAZWNDFQIPPC");
    msg.maneuver_type = 18616U;
    msg.maneuver_stime = 0.5994465790656985;
    msg.maneuver_eta = 43403U;
    msg.control_loops = 1654062777U;
    msg.flags = 231U;
    msg.last_error.assign("GDMTXXSNBVFZUTAHIEVYVWDYUNQVQRBJNELJNISYLVRZXGYGQNQHWFZGEDKHEXRGZTAUDNWRPKBXWQWPNEDYCUSQHDQIM");
    msg.last_error_time = 0.7851410483848518;

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
    msg.setTimeStamp(0.8764065246258356);
    msg.setSource(13116U);
    msg.setSourceEntity(117U);
    msg.setDestination(9134U);
    msg.setDestinationEntity(73U);
    msg.op_mode = 65U;
    msg.error_count = 55U;
    msg.error_ents.assign("BLUBJNNRCPVCPYPCGWIMAQIYAXSWOZWCTIXZQKTXHRHJVCYRQLEGRGDMUGDKACOWQIFXYFVBCHGZISSBATNEOZUFFJVOYPEPXSXJWRJWZMUWFMEMGUTVBDCSWQQFDJYHSMLHSE");
    msg.maneuver_type = 29191U;
    msg.maneuver_stime = 0.9319390339302823;
    msg.maneuver_eta = 53105U;
    msg.control_loops = 591276275U;
    msg.flags = 129U;
    msg.last_error.assign("VMTVXCDGFQXBRYJTAARBRUZWZFYRBEXKKOJWQSCRBSBKDZJTDDTROIIPNGPUQGVIHNVQJVEENYSKAEJPSVDOOMNWKOFWGNYXZYFBFCILFRZPEGTXHDCQBLLIZAIMHMHWLFLYQWUVSBSPLLAKVIASDJKWONXEFGCUXPJMEPFGRIHHHNSZWNEGVUKJWPQKCWJMYQSQCHGHHMVZTPRELBUYMELURIZAODDUKPISLNFCMXAMYXQOACYBDGOUOUTJAZ");
    msg.last_error_time = 0.9387522033347396;

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
    msg.setTimeStamp(0.2777745895062014);
    msg.setSource(64872U);
    msg.setSourceEntity(65U);
    msg.setDestination(49421U);
    msg.setDestinationEntity(62U);
    msg.type = 253U;
    msg.request_id = 357U;
    msg.command = 65U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 46347U;
    tmp_msg_0.lat = 0.1761896855873034;
    tmp_msg_0.lon = 0.769666475141705;
    tmp_msg_0.z = 0.8372997675247966;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.pitch = 0.44020850387089716;
    tmp_msg_0.amplitude = 0.3977764534171899;
    tmp_msg_0.duration = 63915U;
    tmp_msg_0.speed = 0.6033211391426989;
    tmp_msg_0.speed_units = 201U;
    tmp_msg_0.radius = 0.4013947207918207;
    tmp_msg_0.direction = 227U;
    tmp_msg_0.custom.assign("WKHMMRHUQCFHVUVBGQYFCLYFQOMSWYADZUVHCTBNZX");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("FICJMPTZBWLZABVDTBLQERLAKKCGZOJQAMYRTKOZEOZSYFDNWWYROHCGFNRGSSYSPVCAPPXQEPUXBEJDJLOUGBNQKKLLTJZTKCJPFKQLPNNQGWJBWBPVFXROGIACIZUIDWTDEHVUNNFYBMNUMECZQVVDHFJVEDELZRGWMKAMCYASVGQYRHHILXRRSWYTIJIEMTXSBUTDOHKJTDYWFIUBFDVIGMUHHXYCCNNPHOXZMFAOAUWPX");

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
    msg.setTimeStamp(0.5081437978679645);
    msg.setSource(30704U);
    msg.setSourceEntity(65U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(159U);
    msg.type = 170U;
    msg.request_id = 52891U;
    msg.command = 93U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 3063U;
    tmp_msg_0.name.assign("GGITMLVIYGDBGYQKQHFOUMHDUXFLPOETORVKCZTRIJFAVXPLCOJEADNVKJZQMESPSHKPKWUOCKLJCGRQZXYACIGA");
    tmp_msg_0.custom.assign("KUZQNDQAGGRTNZXGJMBSWEXSIKDJMSOEWQHIFFUUBIRLCAMYYNUPFGOJPKDGXHYAGBBEBQVRYGTTVLHASXTILOEZMQUYEEOMKOMIVETCXSBCCALHEALXBG");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("FOAHCIMDVFXUWJMKPRYBJUJKKHZYJLIUSPMDOAJRXLPRMITATNPZVMNXDOSTTDOHSWJELBDHYNGMYRQSVKLCBKBLTWHZZXMSVXNQWUWTWPFIOGQEBSAYKFLVINIXFSCKTLBZWNBHVXXENQGMORTRPGLQR");

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
    msg.setTimeStamp(0.36412723852539675);
    msg.setSource(30357U);
    msg.setSourceEntity(115U);
    msg.setDestination(11368U);
    msg.setDestinationEntity(165U);
    msg.type = 119U;
    msg.request_id = 9031U;
    msg.command = 209U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 50073U;
    tmp_msg_0.flags = 186U;
    tmp_msg_0.lat = 0.8843792736812931;
    tmp_msg_0.lon = 0.3796044116509619;
    tmp_msg_0.start_z = 0.47290005684830394;
    tmp_msg_0.start_z_units = 28U;
    tmp_msg_0.end_z = 0.817265502300471;
    tmp_msg_0.end_z_units = 16U;
    tmp_msg_0.radius = 0.9996562465117147;
    tmp_msg_0.speed = 0.08957664717191616;
    tmp_msg_0.speed_units = 166U;
    tmp_msg_0.custom.assign("MRFAIVVSWIBITWYZBVIABVMAAFYQPEDPSHDINSFG");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("XNWXUJPLRSZNUCLCWWMBJAAXEVTCZTXAMXCVLGDHDWTRATIAWGKSHO");

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
    msg.setTimeStamp(0.7515048100379829);
    msg.setSource(34016U);
    msg.setSourceEntity(97U);
    msg.setDestination(4637U);
    msg.setDestinationEntity(242U);
    msg.command = 142U;
    msg.entities.assign("HJNHXAAXTPALELWNPYFZRHEIFPDKBGJZCPVEWSYDADLWKGGPYTCTSJDNITBXKSUXWOGELCHJTKSJTQAPRHLMUKVKXBCDCCJNQRXWVZFETDHQJVZQZBSVYQAPQUURHDFDMSSRYZYXYIIURYVOEVZGSA");

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
    msg.setTimeStamp(0.17499262766891965);
    msg.setSource(2476U);
    msg.setSourceEntity(7U);
    msg.setDestination(39413U);
    msg.setDestinationEntity(104U);
    msg.command = 43U;
    msg.entities.assign("DXJDTSNNCGJVQQXZPMRUQKHHPWMERVZEXTJONOBPJDIPINEQQHQJWBTIDCSVTYXARMBSYNUAFLKKFHZPVENCLIDJKDTMDMTBICYCWNMZKGAKHKBAFGBHBOMKKLUUCGELYVNSSHPRCXCGWXOAUZFTRJJKXATRGOYCLELIARUVAQOXWCOESNAZHEWDIBNYYDDTPZWGOY");

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
    msg.setTimeStamp(0.8413061150426215);
    msg.setSource(62224U);
    msg.setSourceEntity(208U);
    msg.setDestination(40336U);
    msg.setDestinationEntity(13U);
    msg.command = 141U;
    msg.entities.assign("JWUDWODVURYHIQDWTUETBGKIXOFRGSQVGWPMKHUCTTZPXQZZCBXAYXYNELOYKAOQPJGHGAPEUUWKSDNKIMKBLHBZLPTMXFHNOVIZNEZXHHBVDOMHMXPXSJIISDTQUGWJLRVNIYTVAWWLRFMACWXUEEYCYEBJAZZCYEORCQMSJNLBRPJSLNACRBTFKMRXMFDFVPLQOKSQBFZVFAOIHQSGHATBJAWFUZSLLJDCUDEPPGVIDGQMNJYKNCK");

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
    msg.setTimeStamp(0.3213219601524564);
    msg.setSource(34017U);
    msg.setSourceEntity(200U);
    msg.setDestination(55845U);
    msg.setDestinationEntity(3U);
    msg.mcount = 151U;
    msg.mnames.assign("SPFXARTNUYFCMEJVOHJLHTNBFUGRIXPSFHURQZWZMKTDWQUALHZJVVGRQTXBEDHZQQJKUILMTYMYCIDQBPOEDQD");
    msg.ecount = 250U;
    msg.enames.assign("XILFGQAIUEXHHRLTHUGNIVLW");
    msg.ccount = 47U;
    msg.cnames.assign("JANMNDUCYGMIRTUACABGMYKLNDSUJIZSRDQYZWCRXOUZFKGUTFBVELUSCWRCXGTTJIAAGWBIJKQHOONVRQPQWEZLJNNJJALWFQRFLEZFUMREELVCHRRKFOPZZLEONSIMYQBGDFBWSMXYPSQIIBXKPPRULGGVXPEBIVKHWDJKDSYCNLHZZTANHFWWIFFWCATOCXBHZPBQCTGXVQAUDVOSLXQYJVYKGDJHMEXNTXTEVOBVKPKYSDASHMYO");
    msg.last_error.assign("HAYXHEFTYJMCWSRFYZNSGOWLAVNTEWBEQLPTRVPARGEEQHGIIRQAHWSZTJAVQUDFCIQOUCTFHTDCEBDOENPUKBYKHXQTIBFOMDRMEZKTVUQXNCCDAHSQIZLZJDJDVNPBYZCGUVPLRXOVXNDSZOHGOONMGYLIUTMCYIBLMXNZFAHLOJVPFIMSDSLBZKBXWEPPGAUNJWDQVWNBYGUJRVKKMZEBUJLAISKYFTIWWYPSPMRAXHFC");
    msg.last_error_time = 0.479923865694612;

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
    msg.setTimeStamp(0.8252282129923042);
    msg.setSource(30863U);
    msg.setSourceEntity(41U);
    msg.setDestination(19486U);
    msg.setDestinationEntity(46U);
    msg.mcount = 143U;
    msg.mnames.assign("SCENUEZZXMTRBJGLCSKGJZFJTAVVZXRQTZUNWZXIKLHCYLGNWJXRPWOTNYKDUYP");
    msg.ecount = 214U;
    msg.enames.assign("WVJAAFIVCSYFPNBMRHBKRQPLFWJUISYCAGCBDBEYOZMCDJZJBRMWTEXKXFLZQFSVLFGIGYHHDCLPYLPTIOGENCTREDRKSQWOVFQTTKEDIYRMWLJZEOFHYXRIFNVZXAUDOHCQXSGPVOUILOEVTOXNARANNAUWG");
    msg.ccount = 195U;
    msg.cnames.assign("KEWCGBVGZRAKZYVPHROTFQMLIXXSRTEIUVLHRLJL");
    msg.last_error.assign("UTAAKECTDMBZFIGIBTAZNWGAAOQOGXRYLPWDICJJZKMWPNNNJWHXJMQHPJRBHGUHXFZZPHUCCXMCBHMIYPYCXRNXZEKSYZTPIEDMASYUCNDWWOTFVQKFOKHHFBAJGVBOXMKFSRLDSUORRQKYDQAVTVQ");
    msg.last_error_time = 0.6540232148762718;

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
    msg.setTimeStamp(0.16981130128457977);
    msg.setSource(18725U);
    msg.setSourceEntity(130U);
    msg.setDestination(2565U);
    msg.setDestinationEntity(139U);
    msg.mcount = 237U;
    msg.mnames.assign("LQSCBEEULSXXHETYMOSJLI");
    msg.ecount = 7U;
    msg.enames.assign("JEZSHSPHQXOUDAXVMCICHMRUTLOVUOBCIUKBFPFXOXZZGBZLTEAKTFUHPAEGTDZXDKDQKQALKEWSQVSNCQTLBZTMTQRLXHFBRWRZRWQYAGGNFJLKRGDLIYKXTUYPIZGUSUGYTWCNWVMEMLOCAFIEWWNVTYNNBJZNBPYEJHSJWDXPUOYREVLVWQDHQUPNBAINIMOSBDZF");
    msg.ccount = 21U;
    msg.cnames.assign("QOKKNFEYPOCWOQMIRDAESLBSRFXNMVMMRRWLCUGYVQQPGVXGCQOMWVNZTRGYJMMFZPHAWRWTDFKSOHLUSIXJJDIPZOJKTHGSKFNWQUSLFQAPSHVYKVECGITPMJNCYFRAZXBXLIBEVADHATAXKGIWOTSYLNYFODUIZBJYCQPVPZIDVGUTTLKSYXUGNKUWZIZENVQTBCRABXRHMEFNULQWBANHZUDFGBOUPKMRWEHJCBHLLBEXEDCJJPZ");
    msg.last_error.assign("JMENELDFBFDWLZIPETZTUQT");
    msg.last_error_time = 0.8909377229329528;

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
    msg.setTimeStamp(0.4072397096324949);
    msg.setSource(11556U);
    msg.setSourceEntity(38U);
    msg.setDestination(52233U);
    msg.setDestinationEntity(127U);
    msg.mask = 20U;
    msg.max_depth = 0.06513390973090827;
    msg.min_altitude = 0.4931203939154212;
    msg.max_altitude = 0.8487673470209259;
    msg.min_speed = 0.359066958001353;
    msg.max_speed = 0.3530362209653183;
    msg.max_vrate = 0.2772186298136504;
    msg.lat = 0.4873918152914425;
    msg.lon = 0.32606726840929157;
    msg.orientation = 0.4901454782110716;
    msg.width = 0.41964160149061713;
    msg.length = 0.13428240424087112;

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
    msg.setTimeStamp(0.2627203229087276);
    msg.setSource(57536U);
    msg.setSourceEntity(135U);
    msg.setDestination(30866U);
    msg.setDestinationEntity(28U);
    msg.mask = 208U;
    msg.max_depth = 0.7494951926814126;
    msg.min_altitude = 0.9255023304748934;
    msg.max_altitude = 0.5862222071090732;
    msg.min_speed = 0.03091262579933851;
    msg.max_speed = 0.6993825532346656;
    msg.max_vrate = 0.15975278489316813;
    msg.lat = 0.3052422167029345;
    msg.lon = 0.4884812754992649;
    msg.orientation = 0.5573352383470601;
    msg.width = 0.836142428203266;
    msg.length = 0.02298960728799193;

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
    msg.setTimeStamp(0.7915776869395572);
    msg.setSource(13763U);
    msg.setSourceEntity(207U);
    msg.setDestination(40245U);
    msg.setDestinationEntity(41U);
    msg.mask = 189U;
    msg.max_depth = 0.3269584486146765;
    msg.min_altitude = 0.5765505859009835;
    msg.max_altitude = 0.6743656134359635;
    msg.min_speed = 0.6270638494687156;
    msg.max_speed = 0.4776343290821037;
    msg.max_vrate = 0.28048433625446656;
    msg.lat = 0.5782889143554106;
    msg.lon = 0.40582307985265786;
    msg.orientation = 0.7907703261193021;
    msg.width = 0.059520036989702985;
    msg.length = 0.8169842408651381;

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
    msg.setTimeStamp(0.6089605421274594);
    msg.setSource(15403U);
    msg.setSourceEntity(245U);
    msg.setDestination(22917U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.42709124121808273);
    msg.setSource(1760U);
    msg.setSourceEntity(153U);
    msg.setDestination(8683U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.31723849414817706);
    msg.setSource(61042U);
    msg.setSourceEntity(189U);
    msg.setDestination(58671U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.9491933423128902);
    msg.setSource(46435U);
    msg.setSourceEntity(85U);
    msg.setDestination(12172U);
    msg.setDestinationEntity(216U);
    msg.duration = 13116U;

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
    msg.setTimeStamp(0.18725229318467873);
    msg.setSource(61189U);
    msg.setSourceEntity(101U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(254U);
    msg.duration = 46951U;

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
    msg.setTimeStamp(0.15815555309081053);
    msg.setSource(19657U);
    msg.setSourceEntity(114U);
    msg.setDestination(1389U);
    msg.setDestinationEntity(105U);
    msg.duration = 6127U;

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
    msg.setTimeStamp(0.7474425450723576);
    msg.setSource(4111U);
    msg.setSourceEntity(36U);
    msg.setDestination(61032U);
    msg.setDestinationEntity(115U);
    msg.enable = 84U;
    msg.mask = 98947472U;

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
    msg.setTimeStamp(0.1852001874662853);
    msg.setSource(38710U);
    msg.setSourceEntity(206U);
    msg.setDestination(15346U);
    msg.setDestinationEntity(238U);
    msg.enable = 58U;
    msg.mask = 491425678U;

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
    msg.setTimeStamp(0.877654855876361);
    msg.setSource(60339U);
    msg.setSourceEntity(245U);
    msg.setDestination(2355U);
    msg.setDestinationEntity(166U);
    msg.enable = 129U;
    msg.mask = 951291959U;

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
    msg.setTimeStamp(0.7520705854124996);
    msg.setSource(45610U);
    msg.setSourceEntity(234U);
    msg.setDestination(19512U);
    msg.setDestinationEntity(60U);
    msg.medium = 247U;

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
    msg.setTimeStamp(0.9647451050979012);
    msg.setSource(40708U);
    msg.setSourceEntity(175U);
    msg.setDestination(32037U);
    msg.setDestinationEntity(44U);
    msg.medium = 42U;

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
    msg.setTimeStamp(0.50298900414458);
    msg.setSource(56059U);
    msg.setSourceEntity(253U);
    msg.setDestination(29491U);
    msg.setDestinationEntity(211U);
    msg.medium = 156U;

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
    msg.setTimeStamp(0.13255986583751234);
    msg.setSource(38341U);
    msg.setSourceEntity(68U);
    msg.setDestination(40948U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.04014378490197945);
    msg.setSource(22441U);
    msg.setSourceEntity(19U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.967563544773413);
    msg.setSource(42972U);
    msg.setSourceEntity(16U);
    msg.setDestination(9474U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.6180730673062006);
    msg.setSource(13552U);
    msg.setSourceEntity(71U);
    msg.setDestination(41362U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("ZJXDYUECMBNBDMEQFFJRXSYYGVWBMFFOREOHCRDFORBZPFTSIJIKNAIHVFLQUCCHXUDCZPQABKTCROWPRWBZDJPVGBMQAAAIGHLXRBNVYYVEILGPVBPKMEFJTEVRYWNDLAHTNAIWOSBOLICWAVSCTAXVHOUMYKASCULQKYJWWYQUSNDQGXMIQIUQVFSTQ");
    msg.description.assign("GFEZHIRCGVZSTGYUYDGNXJAFZPDJHZCRUHHWOVUIUAHDYQNQSEYLHMYEADEJGDAMAZIOKRXKHLNCXPJBRTUAXJHZWIWAFBRMVAXQTRSSLYPEPFUBZFMSEIDGHJVJQLXRKKYFXNGMPNXFKCUEMBJULCIMLUOMEQSEIMDXSOPKARKTGEQBPCWDWHDVUTF");
    msg.vnamespace.assign("TMXZELBFYMRIRQFTKRAGSSRSVEDVDFLPYOPAKVUNHHAVUZEZYWMWRACQDXJRPHLEKOXWZFVYSKINJDIRCUOFSTBILCELSVMTJYFKBJQHUYBPUQEYIXYWBMSNGWZCQAGCWUIMQONPQTOYFSAVDECHSXKLRTXNPHDVDVAPWCDQEIGWHKNJFHJHZPOGVXEKBUTAFLMZMWWLZNLXBYIAMTSODPZBUMJCKGHUEXQGNRZGODNLI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZJNUIJNTZDOUQKFPDEKCYDDWSJRYXOZVUTVWRAGNZIPIKLLWPAOYCVRBJNYIVMQHCMGPIMGHQLBUNFUNQKZQLZDEUUSFALPTJSHIRBYTJBOMWEXOFIQIXHSGKQORJSYXOTJHOHX");
    tmp_msg_0.value.assign("CVUBWFXTWVSVUFUQCVZKULHEONZXMTEQWZDLBDSMNYJOKMKEIPIRJVHYQQTIFECGGNPLUBRSNGIOEMCHRMSIYFNLTXAHRPXLCOMYEYAUMFXBWCSGDRASSAIJJUYTXVXQLDOFMTCAGPDKHHIIJPHUBYWWJAAE");
    tmp_msg_0.type = 220U;
    tmp_msg_0.access = 202U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EDJRMGYRZUPSLXTADRNTGRMFGJBSQGOFSHZAGFJMXKWBFILUSLQGQLUICVAUNDOZNKBRVSAAGYQTBCUVAYAJHVRRFSYUEPOMMQOJCCICKMLIYZTFTUPMNIWKVYXXPEBPXFSXQOPTPWDDMEZQO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("NFBYFAPHJMDEYHXVMYJBQLFZWMWMQCNSPFCGSVBKCORVZPCOKZIFXNOJOSRPSQTSSHDHLBVWGNLDMDMFHBGFAQJTEQNVIBJIHAUBGZTGNXJVSPNCIAOANRECFTJCLYTZJFWLURWIQIUCIAXNUICZZO");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.6777988630110164;
    tmp_tmp_msg_1_0.lon = 0.032945155611245;
    tmp_tmp_msg_1_0.z = 0.7930663416883105;
    tmp_tmp_msg_1_0.z_units = 132U;
    tmp_tmp_msg_1_0.speed = 0.4634990248240499;
    tmp_tmp_msg_1_0.speed_units = 200U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.5279998262864033;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.7355928875945644;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("IOJHEMCWSLEKSPBXFSNEEZQAHTBJHIKQEXQEWCOLUPBQOKUVJBCSZOXPTTVDRYNQRWPZVMMLBYXIPNZUVBDUYALDEFEAZYDFLTCLUDGQIWMFAL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticPing tmp_tmp_msg_1_1;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::CompressedImage tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.frameid = 94U;
    const char tmp_tmp_tmp_msg_1_2_0[] = {94, 1, 42, 28, -56, 119, -25, -45, -89, -58, 107, 81, 101, -86, -60, 21, -106, -104, -107, -63, -44, 35, 102, 99, 115, -39, -126, 110, -75, -33, -82, 71, -6, 14, 90, 76, -23, 114, 21, -10, 54, 45, -114, 88, 116, 47, -9, 16, 114, 12, -46, 38, 27, 120, -33, -82, 10, 75, 116, -14, 36, -57, -61, -56, 0, 51, 117, -68, 35, -19, -67, -22, -86, -58, -124, 65, -80, -118, 7, 62, -14, -101, 49, -27, -122, 9, 86, 121, -11, -32, -76, 103, 75, 42, 84, 16, -47, 88, 78, -37, 13, 36, -68, 56, -98, 55, -39, 77, -25, 6, -81, 97, -27, 24, -11, 10, 72, -60, 105, -77, -106, -76, 65, 85, -92, 1, -47, 102, -62, 118, 31, -1, -103, -94, 68, 111, 100, 110, 98, -62, 32, -122, 49, 5, -100, 22, 41, 11, -55, -102, 5, -55, -115, -84, -59, -108, -7, 112, 101, -41, 73, -68, -1, -105, -123, -74, -62, 4, -102, -83, 56, -45, -107, -123, 2, 95, 42, 80, 46, -21, -37, -62, -46, 81, 27, -86, -54, 25, -35, -125, 38, -78, -30, -117, 7, 25, -123, 120, -38, -88, 28, -98, 64};
    tmp_tmp_msg_1_2.data.assign(tmp_tmp_tmp_msg_1_2_0, tmp_tmp_tmp_msg_1_2_0 + sizeof(tmp_tmp_tmp_msg_1_2_0));
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Target tmp_msg_2;
    tmp_msg_2.label.assign("GQROMMDSWCCJCCYXUCXKLGBEBAPLXXLNKYRICNTQFJRQZWKGAGNPBUARTZZEKTUTHSP");
    tmp_msg_2.lat = 0.44838524053484996;
    tmp_msg_2.lon = 0.6920395613708045;
    tmp_msg_2.z = 0.5275157079144186;
    tmp_msg_2.z_units = 198U;
    tmp_msg_2.cog = 0.5451455817431313;
    tmp_msg_2.sog = 0.9534680792189583;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::GetOperationalLimits tmp_msg_3;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.49150926606442613);
    msg.setSource(20043U);
    msg.setSourceEntity(106U);
    msg.setDestination(27491U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("CFDOBHVEZXFRFOBCJZZHHWGRHKKSGYEIEQNUFMIMWIIQTJMNRRFJCHNPKXYSKQDWVRIEDBRYCOYASSSYMTRPYCJCAFEEUOWBVUJA");
    msg.description.assign("DIQXHDCOWEIXNPUWOMURZSBVXTPFOLTGUWVJAHWQLGSXCURKKEQURKGMX");
    msg.vnamespace.assign("IZJYVSKURMHIIXWFCBJVPLPWYVNEFILFWZHSIJOOCRGF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NWHFAOUTJGXJLWDPZQYHZYRLIXYRRTTFZRHVEKUVMBAXZBHHPNAOMXTDDSDEKIZGKAPENSTQQMKZSBWRALBVUPCZUVSAJPVEUQTBCFRIRGYBHYSESPFPYAAIGOFOYIGBZKCWMLIBWMQROCLQUXCOKTVENMAUXVDMLEYMBNQFGSEASNIZDOBFCPIKXWGUXVTGJNHCWQKCGUHOCWTSRMEO");
    tmp_msg_0.value.assign("NHGONZQUVJFISWTPRZBBTEGXQVNTCHGIEVEJKDUAHCXBZVFWTSQTDFLJLMDLIOPACXIXFOBSGPNIZUYHHAUXSDKHVMIWUKR");
    tmp_msg_0.type = 118U;
    tmp_msg_0.access = 219U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VLHYQCCFQQVXIWHZNVURZJXRIMAYUVGYIUXBTJRQEASLSXGLYHQULQPFKENNHPZXFKUXCRCOJEDKWTOKNEZBSYFJEVOISUUNANNEHJBRNMOSAJNDWCDCQSGGLLXBBBSPVIZTLSFPHMKCFWFVECXPQUZOEFLPDXDAGGSGIPDCZTXGJZSWEFADIWHUMHKTKBPTMHDYBPWOV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZVCVCBSXJLEKWIKMHYDZKPNFCQNMJYGVMBSGRSDHOXCXHIZICXWVHOIIUNDUNPXOPNLXTOVYDIZCVABLVTJIOWFWARWAMENBRXPGJMBFJYLHXFWB");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 39787U;
    tmp_tmp_msg_1_0.lat = 0.6055405667902902;
    tmp_tmp_msg_1_0.lon = 0.957648291071393;
    tmp_tmp_msg_1_0.z = 0.542578631753844;
    tmp_tmp_msg_1_0.z_units = 208U;
    tmp_tmp_msg_1_0.speed = 0.6869734681084898;
    tmp_tmp_msg_1_0.speed_units = 34U;
    tmp_tmp_msg_1_0.duration = 19296U;
    tmp_tmp_msg_1_0.radius = 0.14028418314451685;
    tmp_tmp_msg_1_0.flags = 43U;
    tmp_tmp_msg_1_0.custom.assign("XHXRAMJHSZMVUWZVKPOXQGEZKDWHFUTRNTYZBPDVRXGHSJSTKULCFZTDFPASZIVDB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Sms tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.number.assign("FTOJQWXLZQPUSODJRWFWINIJIDIWQ");
    tmp_tmp_msg_1_1.timeout = 51924U;
    tmp_tmp_msg_1_1.contents.assign("CTKYZPOBCMRALTFHWPDHBUJTBAQWOOSSJOTFHHZIPSYXRQNGDMYVMNYDLJKRNTEIIJNYWKXHVPFXADGELIWXTRAGNTBQUNGIKBVWWUXOUUSMJMAQZWRYZTBVX");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("CEATGKFMUCHDSHZXXYGWRXJUCUUDVNLZWWDUMXVTOSYQUWOZGXEISYDYOALXIUGEHENOABVNSTLPNAWUJPOQGTPTZKHMVIDEIMZSBTWMYHSJTXDLVQPQ");
    tmp_msg_2.dest_man.assign("HJNHJBVOQTRGEYVZPZBLOLYPYSZBMYXKTRHQWXTVBNZQDPEGWBQPYJYDDKJJTFAZEUOQRKLKQQUFFPBAMCIFSKUHCERUZOMRDRPHCWANLXTLHEFIEKIVINKLHRJNCZXGNVGHWJCSFASMYTFXEGAWAQIXLJCIEOMNRZWWTSA");
    tmp_msg_2.conditions.assign("NUBDSSMCTWMBGYVRPQDYRWPFXLBKVJSAWCORFGEPSYULGVFMUBTUEMRGLDEOLGTXMCSMNHPXTXTZEORDCBHZTHSWHQZJBKLKAEWPZVCKGVUTUOHZCRQGNBAJFIMVFNAZQNNFXEACMVKCRALOUSEDKIIYFTJBDAUKXAPIILPATREMXLQVDZWDRYQPIGZHWYYNGNFWPGQKOVXZDOJCONIJQHDFTXPZBUEJLV");
    IMC::DesiredRoll tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.7384718543148486;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6220340178162428);
    msg.setSource(10205U);
    msg.setSourceEntity(77U);
    msg.setDestination(24549U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("ICEMWUESCZZFEFJGNPBEEPKQMUXTJRIGFMQZDXRSTZNKFLNELIZYCE");
    msg.description.assign("JDPEHOTUCLNMYMZWBZISRKNKPMDOBXPVNRDGZTTHCOYCLTBAUEJOZYVJINTUKFCOKTNHMGBQORVMCQQHEUPWQALQOIYMMUTGIPKUCDUSHVLQPFYWAOJPCLWVJFPHRQJXLIRSAAHWLWKLTFMYYWEZBMZGGAFXJRARVDATPYFZPBFOTUCUXGSXRKXSLIZZYNEOXQHAVSDVGVJASDSJSED");
    msg.vnamespace.assign("MABQICGPTITYLTUGMWABYWLNOBCJCNCTZVWXRTAEIYHEFADQCELRX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LLEAXTGZIBDQDSUMKSXQPVAHXQRTTWJNFCEKHUVOGYVRCNBXITJTBLFJAJA");
    tmp_msg_0.value.assign("XIGBMXDKFVJRNQHKJUNEVQYFWDOVRDTPFDIXTWEFRTCNAUZVOGGLVNCLTKIPFIWTMOIHLDRWXNGVHCDGXTEMGKQEYSSIHZOSWAKCIULPQJTRZYNVKATGDXBNJNORCAYJOPZGDPURVBYZKCKVFZQUHESWYYBPBCWAMMNOAKLGXTBYSFUQRLXBAFAOMUWXSFZPEYLHHAHBZPAMCQDCIDRSQZQJOUJVPLGYWOSCLMXEHEJWE");
    tmp_msg_0.type = 152U;
    tmp_msg_0.access = 137U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LAWCNWVHBVLOQOIJGL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("TGHPSFCCLDDBJDMNSXRKEIUIZUGTBWNHXFJAMFWSEITSZOVYSNCFTGVXLWMLXNAQMRV");
    tmp_msg_1.dest_man.assign("SATURKXIPATGXEPYMGYQFLSZFDPRKSPZSRTVZNQCABGYLNHPXTINBEKFDTQNEDIKXWMJNFALXXPHOWMOPCCFKXJUDVCQIRYGEKZBMOBOVMEHCFHFWQLXGJWZACUDVBNEMYBLRDVPVGUPHHSJBKEJZOSZEDCMBSTUQYTRTWSEGISDNWKJUHCNEDOAINGHLHZUXDWMQHCBATPAZZULFQNJVIUMVBWKGLY");
    tmp_msg_1.conditions.assign("WJMTFLMYZCQTNBEMNOSOFWKMCRLSCKCTXEKSMAWQTZPFDCTPNHFSJSQDYSZKUMBGCEANJVIEDBVNAKUJFOQIRLROHCPIKVYEUUXIFUXUANBFYGPRVBER");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9713431303566736);
    msg.setSource(63413U);
    msg.setSourceEntity(146U);
    msg.setDestination(11781U);
    msg.setDestinationEntity(219U);
    msg.maneuver_id.assign("NAGCXSIMWHERNYBGYZIZLJAEZRYOHDTONNNCPSPBAVHW");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("LKKAUORBTEVHPKFOTPAYILNSVYZBOJINVGYAHGTJWFZNPNYDAJTSEYBVUQWLCIENWUCWZAPBXUGEUEQIBOYDTFFCMBOVCCMDMFRXVPPHSRSWACSGUQSXBAGKHZALIVDQYRDJHXWOQVZFNIFZRBWMHJYTNQZTGRXBIUVLTIWFMODSZWCOSRKAKQCXJQMCQJIUJAHTHZERMDOHPMMNYGBQYTXDZPMLXHKEWREGSKDEGGKPFXLI");
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
    msg.setTimeStamp(0.546734074080864);
    msg.setSource(46237U);
    msg.setSourceEntity(22U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(144U);
    msg.maneuver_id.assign("PVGUNDSFAAIE");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 50955U;
    tmp_msg_0.lat = 0.47064348286649926;
    tmp_msg_0.lon = 0.6977674675385113;
    tmp_msg_0.z = 0.19027326739377237;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.speed = 0.3193995079492117;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.roll = 0.14128569760335885;
    tmp_msg_0.pitch = 0.9054853837073862;
    tmp_msg_0.yaw = 0.8587212236135584;
    tmp_msg_0.custom.assign("CWUCRCKXKBCEBPZMSDIYECNJTXHZFOXEXAKWAAYIPMSLGYZXPGELTYJBFITO");
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
    msg.setTimeStamp(0.12257275936637635);
    msg.setSource(36027U);
    msg.setSourceEntity(154U);
    msg.setDestination(9010U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("WNUOGNOGGHDVFEUYBYPFIBQKJZ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.06400025726427039;
    tmp_msg_0.lon = 0.1748545312232852;
    tmp_msg_0.z = 0.7562108819386236;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.speed = 0.8832359437917957;
    tmp_msg_0.speed_units = 77U;
    tmp_msg_0.custom.assign("EDEMNEVBXIODPUPNBRXGAGIBFHVTMUYSQGSTODLRYUMVZLCYJEWGBEROZLAQBTUOVFWVKPUDRGLBOIJHWDWMAATCBXHRCQEPTUEYDTFHWYIM");
    msg.data.set(tmp_msg_0);
    IMC::CompassCalibration tmp_msg_1;
    tmp_msg_1.timeout = 63794U;
    tmp_msg_1.lat = 0.1337665731762243;
    tmp_msg_1.lon = 0.6657193500823511;
    tmp_msg_1.z = 0.25253239375939274;
    tmp_msg_1.z_units = 29U;
    tmp_msg_1.pitch = 0.41050343487724417;
    tmp_msg_1.amplitude = 0.603848580694206;
    tmp_msg_1.duration = 8306U;
    tmp_msg_1.speed = 0.00559044044336765;
    tmp_msg_1.speed_units = 110U;
    tmp_msg_1.radius = 0.8047562083683011;
    tmp_msg_1.direction = 87U;
    tmp_msg_1.custom.assign("KZCALVWVPHVUABKAJYWFPOBUFZKQDZVUXBEUAMMEFSNOHCXWANFNJJLOIKDYSDRTCAQHTOWRMHOLHYJBKWHVXURDTHEFELBAYTHMJXQVBPTPXGPNJNZGQKMMPEOPOKISXIZJRRKNMYQEUXZZNCYNQXCOIICCDGGUTJDPHJSFT");
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
    msg.setTimeStamp(0.27440094005100935);
    msg.setSource(62512U);
    msg.setSourceEntity(96U);
    msg.setDestination(48658U);
    msg.setDestinationEntity(146U);
    msg.source_man.assign("RKQBFPOEALOHZLTBCMVGLMBTXZOUEKGXJBVGRQEDSEWHAFICIPNMBHOFFURCKWSSCVDLLQUUGFENPEOUFTPMMORSUZYNKCLVMFFUEPGOAWQZBLJTRZAABPACDWOVXCNMTMXLAK");
    msg.dest_man.assign("GDWHZPMKQDHPFOVKSSPFCVEKAQUECRASRABBHZUEAHLNKEHJJMYPTTCPJNFYEHBCGOMMMGGYIKONIUXPIQCLWTKFVFGPOVRUJQOVFOXZTWAUNNRYIREWSMCKKEZXBHTDCTAGDFHKOXOYYVANJYOQGVLXXAARXILDIWSBNSKHZDTPNEIPXJIWYTWBZUMYLBRPSDJMJLNLQSEOGMFGACHZWQSZUITUBULRDQQRJZXVCJWYUTLBIM");
    msg.conditions.assign("OOIOODCYFFGLHRUFLYCXYKAWSECHTNYPZDXMSECIIZMLRNZCQAYRNDSGKALKOTFKFDQYJWBTKZPOZKHYTUUBDWVIJHQUEGWPVQIHBZOMVSNSTEDGDZECWJJPFDWXMNMZUQUJQQLYOOGZOJFRJXNBANWVPIHFYXQGKBIGSSLWVCCLRYMEIGECABBQPKHPAIVFTNRFUXTGGUJXEVAVQMR");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {105, -43, 71, -31, 111, -40, -30, -48, 19, -15, -47, -22, -43, -110, 3, -95, -20, -91, 47, -99, 88, -44, -94, 85, -31, -92, -30, 120, 15, -29, -125, -25, -114, 29, 95, -78, 59, 37, -75, -5, 123, 24, 58, 58, -32, 110, 29, 69, -92, -67, -80, 58, -24, 111, 45, -66, 22, 68, 100, -102, 50, 105, -23, 109, 61, 115, -105, 42, 31, -37, -43, 112, 57, 38, -108, -93, 4, 30, 109, -69, 106, -35, -115, -125, 45, 99, 98, -81, -87, 91, 121, -128, 36, -47, 71, -36, 19, 20, 60, -116, 48, -5, -109, 41, -58, -46, -87, 55, 106, 78, -122, -124, -87, -84, 104, 35, -61, 109, 71, -53, 117, 121, 120, 102, 114, 35, -27, 79, -99, -80, -19, -67, -31, 58, 35, 89, 87, -64, 106, 114, 90, 105, 32, 80, -48, -42, 13, -115, -18, -40, -102, -101, 117, 82, -128, -34, 61};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9598960086840096);
    msg.setSource(47067U);
    msg.setSourceEntity(92U);
    msg.setDestination(61089U);
    msg.setDestinationEntity(142U);
    msg.source_man.assign("TRTNIBKPIISHJSVZUJHFHUUYYWXHHJMCMGGSIKVLAWJDOKWAWZDVPODWOIGLWMNBJJXCNZGVMWXFLELCBYPQTETXETNZSYFOLFRNKOFEECRNCXQJIKYDHDNQJKZYDGGSQBNRWISKQJRPKTOFLXYCAVAIMLFACUQHZAREDGEWGMZONOVSOANEUXTHUQZVSQBPYUGYHTCCPURZIOT");
    msg.dest_man.assign("RGKYVJFNYCJEHJPSXJVUQVFLNHIOUXWSSDKVFELOTMLXWNOQGXKOPPKHXDSMORBWCSIHFXGDJQTDBWNLMQSHVEGUCTAYMYREPWNLLTANYBTEGGUBYDGUDKMZKLMICBRCO");
    msg.conditions.assign("WMTNWKYTORZANSJQQXRFDJBFDXUEGGFGSHMLICKCJGHSUYAKFWGPCNFBYKKCBGAIGYMRDPQUZZZCJOAQZ");
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 167U;
    tmp_msg_0.status = 159U;
    tmp_msg_0.range = 0.557649285265783;
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
    msg.setTimeStamp(0.9488057540085362);
    msg.setSource(37549U);
    msg.setSourceEntity(209U);
    msg.setDestination(44357U);
    msg.setDestinationEntity(157U);
    msg.source_man.assign("PQQEFIOVOGAJAVCUQGRQYORPDAZUAMSVZFS");
    msg.dest_man.assign("LADRVCBEONK");
    msg.conditions.assign("MOHXLHLQEQAQJSLHTAPKBOZIGSLNTGIYQOFBADKWLCKLMPGHHPAZJIDXJVALSMSXRXCURNUYZSUCWNWDROMFXPBCHCYJSRNWWEUKKOSVKMVYKOZECRSGIUJSUNUWAMETERDTYJVGNJUPEAKMQWZDQIFATVTEIJGOLFJVCDHBMORETPZJTACUXKPWDPNNWQHINDFLBXZRHRCYZFLGEAHGZORPQK");

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
    msg.setTimeStamp(0.2185912853883697);
    msg.setSource(28358U);
    msg.setSourceEntity(16U);
    msg.setDestination(25410U);
    msg.setDestinationEntity(90U);
    msg.command = 112U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VISDKPGIDEGBTOLAXLHSQORNELAPJRUDIYHPHDUBRHLCRMLPCZXLDJFCMGWUHZCIWOGDRGIJSZPUCVJRFSRDPXVIPXWOANLNZURWXTNRKLDKTYEJZ");
    tmp_msg_0.description.assign("INZZVPWLUJAEOMLXPYYKHZBVVOMSAFDRUXAKCUHYUETXOWBPFUOANSNVWKQEDVFAMSBFPGRTTITYRBXTYLWFWFZZLLSEHPGCVGQTYBBPDWWIEJQNMOORVRHMBHQUJEDTFJSSLPCDXXGFRVJQGRIYKDOQIGUCPOVUBMJXAERGKIJGNJPZCTULKSZHLRDLKDCXYCQZEIQMHHQWDGSCIDESFRFZ");
    tmp_msg_0.vnamespace.assign("YFPCTEOKPBVQTDLXQEBDSNFOQZZNYFPPOBOLJUAKPHSWKDXGGBGCETKEYERYUNSGHHXWGFNXLAQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DMXWDYBDJGLPPVKTLCISZOONCR");
    tmp_tmp_msg_0_0.value.assign("BJVSMSQVTOT");
    tmp_tmp_msg_0_0.type = 203U;
    tmp_tmp_msg_0_0.access = 196U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QJGKVUZUYMDXERYJLPPTJDSWWYCHPZYUVMZGNASFUOIJZNCRIKYNDPNBDRAYAXFBISKXJXPKPKTLELDCZSCLTUHQYHVUSUBHCNCBMUPNZAMQHNFXPGHOF");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("AQKGNRKJERPAIWPZSTUGUXJOBHYPKWDWGSPMSFRRNCVYHJRPCDNKLMTYLUNPLKUMFUMFMBGZTOKHYOOYBMESQFQHXQOSZZIDLCBCVTQMOQISPCNJTSMECAGJVYKRMKFEWCFIVVAXNSOD");
    tmp_tmp_msg_0_1.dest_man.assign("FKXIRUHKCVXBDDBUTJGULYNZHFWTVDNDSFPDSUYHFWVXYASARSPFSCOYCJOQQAOSFMMXRMECHMKVEXSDGNCWRTSUOGKTTVAPRETKYRGDVIBZMDMYACNHLYWHFJRLFTNNXEZQLQBGAKPNGUQUPFPRHLBXHMQBZIPXJCOEKGCJTDBBQBMYNMWQJAI");
    tmp_tmp_msg_0_1.conditions.assign("OSTIRPNBTCKWFCDPKDGHTCHYUCIFSBOJIRBKVNOOVYGVKRQRJQWBMXEKNLXFQZPGOFOUXVTQEYEAUFISYJSASCBDLZUFPMNSRDEQAFANGKTUDEKQHBHBGCMWKMNAVZRZ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LowLevelControl tmp_tmp_msg_0_2;
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.11145120868920955;
    tmp_tmp_msg_0_2.control.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.duration = 26402U;
    tmp_tmp_msg_0_2.custom.assign("HOESSWWHCEXZMDSYEMGZSNBENQMYRLYSCUUEDNIRVJDHWCORGNROBROFMBINLNQTPWSSOIVGFUHOPDEMGTJPTXVFLASWKROAPVKTJKNPGALJCJHDJTZZXSAVAEBYKTDSQUEVKXRLINQFAVBMWMYFZKOHWUWCCXZKCZUBPUBHGJQHDDWVBQXOXIRQYCGLKFAXXFGETQYMAKFOPRKUINIRIHZMXVYU");
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
    msg.setTimeStamp(0.2125658218879849);
    msg.setSource(30282U);
    msg.setSourceEntity(253U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(248U);
    msg.command = 0U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UMJSUGDUZCIXKRUQLYRUBFCLVLERPVFJNWAPOMGMIXCWNLCGHUXWVWWJQBVCKXBMPXYGSJCOLCOIDWXAHUTSQTJDFFAQUJFKHRYKVAYAQJHYVEOOZDOWGUDDBFEVMQZHEZCNFSABSXZHDPTSOETHYRJQTTXKGTSNGTRRRBNGDVNWIDQLBWKMHMSFVBZTYZLMDAIOAEEQXPZITHKYPNINKMBQJILZI");
    tmp_msg_0.description.assign("VSQINZNVJIMVHJVTTYNJSUPYTECNLLOMPXDELAFHKRBWGOGMIKXOBDXDUSIADCXUQGZQFOKORXPZBWHFMZHLGKYTBRQXEFADZSRRKHMNXFMCXFIEWMSCIUTJL");
    tmp_msg_0.vnamespace.assign("RIPUDUHMWVEPMFAPBXQCWCJTJRWQPJZLARAJYHMDXODAYIMMZTVVGCGNLGIFSETVVTCBXJZEOQXUWSMEYCLVCGHZHKSSKDDRPHBNWFRPKP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CZSBRYQHGYXNCWIKGYGDFROJJNNUFBAOQMRYQFXZOMWNQYVEJHOGVZTRZTEKEDJDDCSXBWUNHVJCCJFOVWVNLRKVZXGZSEYUOVXKDSGBWHVWZULTUIANNSJWPVYAMABKLPGQEUHOMNJQZMCYKMIYXCLLKHEPAEMFIDASHTFYCHJWRBPBSNTVAZUQWLBRELUGDPIDPFOAMERLLDKCXJPGETBLPIZSMFAHSTQIFKBFDUI");
    tmp_tmp_msg_0_0.value.assign("UDRIIMDIQGXIUJRWJABOFHIIWPRPMAXRQTDOEFUASQSWS");
    tmp_tmp_msg_0_0.type = 100U;
    tmp_tmp_msg_0_0.access = 39U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BQLAMOWSTOAGU");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NITCZHJXCCPQBXHSIMQGLYSPPAUOZYPTHSCERFAPNWLAYIZLHDJKEJNWKBZTIJEFIMWCTMOJNDPEIHKRGBSNEMUTCGFBNMJSFQVBCIJALQOUALVFPBVXTMDDBWTKSAUWNWSVSBZRNRHZUKXYAGNQ");
    tmp_tmp_msg_0_1.dest_man.assign("FXCCXBEDXYVDAKBEIYEUDNPUQGGLITWSIMJZXNHNLRYFIGNMXHIOQECXVOSPAYRWBOUMUFVVJQVHDSQZPOOWJLSQNHFRDYDATCTCNNLZWTROVXRG");
    tmp_tmp_msg_0_1.conditions.assign("TOKLDLKXCQSUHPGKEFAEZMBEVAGFXFZGKQWGWOXUWESKNZPHTDEJNASZGVPORGJYGRLJKTWZIFUURWVIVADDHFCYXPMBIIKISBLBBRMDYCBZVNMMNTIQLRVHFHAYYPVUNVXIZOASOZJMSXDQPSNVTCJXKCCCXWQYAHTPYGOGTSFAJYGLBVWLPDQCZSLHJXNWFIWRLHQTQEMAPCFMNUIXOBEQMRUSLH");
    IMC::DesiredVelocity tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.u = 0.646959163595585;
    tmp_tmp_tmp_msg_0_1_0.v = 0.6217768621953047;
    tmp_tmp_tmp_msg_0_1_0.w = 0.15069769477555917;
    tmp_tmp_tmp_msg_0_1_0.p = 0.09398912192339659;
    tmp_tmp_tmp_msg_0_1_0.q = 0.1076441905367238;
    tmp_tmp_tmp_msg_0_1_0.r = 0.42978895038764886;
    tmp_tmp_tmp_msg_0_1_0.flags = 58U;
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
    msg.setTimeStamp(0.07597286208527165);
    msg.setSource(55320U);
    msg.setSourceEntity(225U);
    msg.setDestination(58202U);
    msg.setDestinationEntity(232U);
    msg.command = 235U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BBUSLRQTWUCFNEWOQZNNTXXTNXQPUADHUFLMVTRUFHUDOMAFHQGWICHIWMSHRTJTOUKFLBKXMPJZOGKJQAKGCHAILRMAZEZKBFJMVTTQWMFYZQYSPREIQUEKXRWZXIFBSJLAMPN");
    tmp_msg_0.description.assign("CVKIAMYZPNRWBWZBAUKQTDEHESKFDFVAICKFCBJFOSSONLSQPCTMPUCIXWIUT");
    tmp_msg_0.vnamespace.assign("FJXSZVBKQKFPPKGJCHTPAHWIEQEIAFPCKQEWOCBKDHTOERDVWZTYVSMVFMNJKNQCPTYNCYZUELAFDRUDMDBQGNPLDNQJBJIMYZTHAAXAMSYAHOMRLVTEMWHDXIKYUTULH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RHUSFLLNSHUMOGKFZSGUKUHIQZKBOBMYATHSDNSEAIYYLUWZTQIVYARGEAWVDQQJWVFLMRMTTJDHNBJQYHTJZXZTKNMCNIKXSDLXGORNRFKPYKPGKFABWKUNXPJCSIQUQHCGQORCMXVYCVXLAFXYVYDCNBFFAMOLHAEPJWHODKEZSPLEBNXRIDPLORTJSFWTOFGYEIXZZUDWWTWIRHMMVPCJUUBVRMO");
    tmp_tmp_msg_0_0.value.assign("FBHRJBBCKGIRGWOOONIGFOHQUOFPUPPLWZYCUPKUVKGJEJBLZYXENLGVCIYSKNMRNKWYYPXTSFIWAMDBJVAWUUMQJTUHOSPZAYCDETFDBXMQILQFFFQZPOIGBILTEVHNJIVLAZXCLJATXGZXCXHSACMVYVDTERTOXSMKOZCGWFGKMWEUMBTVSOHGR");
    tmp_tmp_msg_0_0.type = 6U;
    tmp_tmp_msg_0_0.access = 26U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OBMASNAUNUZNMOTYVYYHXJKLAQZHMJUGYSUFMUKWRFOIRWVOIFFTVNFRIQEKYCGDVKTSCEQJDSTLPBLZMTBPZIVMWBPRCECRUZAOOOHWLXZQYFEJJCXLFKGZEYQTLPKCHYT");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IDISGRLIAFSASRUKRECTTXEVXPSHWEAXWQSCJUKMHLUMLTQFFPDDXOVNOMFYNJQAYLRLGBAVHMZCAPWTWHYTSXPWIEZSLGMGGZAJZOHIKVGNZNYGVKYLMERJVTHVQNATYFOEWKVXVBNWDUHMSFOKQCFODQBICDSIQBCGOTGBHJVXDUMKUECLZYLNZADUNRRMQHBHRETQCCMGIBFRAFYK");
    tmp_tmp_msg_0_1.dest_man.assign("TUVCCYRFQNROPAFBEWEMTZOLDVCPRNJTWZCPZJZJHOJUDHFPVUIPFFTRLSKILEADQLUHIYFJYJTETVNISWWKOCPNMYTKSZWEXQUZQBVLOXDBSOGSYHUAXJYKHIEBKPFZVKEXGKINHGVFZXDQPHVNACJDSMMXLIJULHNCIUBCQZBFYCMRNGLGIAHSKSQYDAXBZVPTWXWY");
    tmp_tmp_msg_0_1.conditions.assign("PRGMDQSFGPCUTESIGNKJMIBLFPZRUVGIOVTYXNGHUXUEWWIAWBWWMESHKSCIRZSZSTPEVKYEYTIACVNINKRPLFIRROGBDXYBUVKBFVDDYFLHCBJZOBZCCCQMSAGAZBVHDXPFCFXHHBFHNLLOJAUMRDHAWQANYDRWUWZJSXDROQW");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::RestartSystem tmp_tmp_msg_0_2;
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
    msg.setTimeStamp(0.18821183280912324);
    msg.setSource(44326U);
    msg.setSourceEntity(212U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(187U);
    msg.state = 228U;
    msg.plan_id.assign("RIDWRRMCEIOLTZLGOSOGKJVGEDXKBLUAAJKZQJXNQINFASJNBTGLTQPPCLPWHVBIXMFHOOIJHMUEFULGEAHMVMTMYQSCGFJKXUAGDZYVVRZXYTPXVJNESQKZCHBZZLTRRFYDKXBYKMIWAFYOMEFRCBEQLQCVDNBSVUDKNRLXABRGTUAMSYLDSXHCUUWVBEHWSMOPEJYWIKOFTJ");
    msg.comm_level = 182U;

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
    msg.setTimeStamp(0.6610205909376358);
    msg.setSource(40516U);
    msg.setSourceEntity(109U);
    msg.setDestination(9523U);
    msg.setDestinationEntity(104U);
    msg.state = 239U;
    msg.plan_id.assign("KWFIBXSUHPJTMZSXJGUDGTQPVRYJZSYWLBJBQDELXJNLNPCITVERNBXWNEJPEPITYOOQAVBKBGQRRAQWLPDZVARKXPUFWMAINZOGCSOJRIMUZTEWLHYPVCPLTRBMKBIIAWODWCNDOEFFFZZLKMJEMQYQGSIQVYALCUZMIKWLVKHELGTTVPZUCM");
    msg.comm_level = 21U;

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
    msg.setTimeStamp(0.8403812627117875);
    msg.setSource(16548U);
    msg.setSourceEntity(101U);
    msg.setDestination(37821U);
    msg.setDestinationEntity(169U);
    msg.state = 67U;
    msg.plan_id.assign("DFHUJZXZMWUBYPTTJGIMLIVUJLXHRRQSIUHFTMSWJQYQEGLVXZIGZVWPQGRGZHLBYCAVOYPUBHZUJSMTNRVFOTRFEZJAJREXCFUKFLETLWWNYKKSAEACFLEOCDKBISWENPGRGMRKHHDIFFDPKIKSJZOTJNYGQBNBBBDHPLLUDPMSVIYNRDYNCKDQTKIXAMNWHXVYRMVMCOAQBHPXEISVFWXXZQECMNLKPGAZXOODQDEAVUSTUONOWOASCCTQC");
    msg.comm_level = 71U;

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
    msg.setTimeStamp(0.7994514638377952);
    msg.setSource(49880U);
    msg.setSourceEntity(245U);
    msg.setDestination(49163U);
    msg.setDestinationEntity(49U);
    msg.type = 162U;
    msg.op = 146U;
    msg.request_id = 23162U;
    msg.plan_id.assign("ADQMQWRZUCESCFWIGNYKMJBIXBRAMOUPHLHAVIZ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 46510U;
    tmp_msg_0.lat = 0.08824609690186747;
    tmp_msg_0.lon = 0.6908855099423261;
    tmp_msg_0.z = 0.2931697851956796;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.duration = 62280U;
    tmp_msg_0.speed = 0.0822703306113649;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.type = 175U;
    tmp_msg_0.radius = 0.26268766429615487;
    tmp_msg_0.length = 0.33333871646130997;
    tmp_msg_0.bearing = 0.1917131091867017;
    tmp_msg_0.direction = 146U;
    tmp_msg_0.custom.assign("UICILZLOLIAYGJXDRRPNHTWBYNWOTMVGKTYHPWGDXCYWVIWXASMEGVTQZKEVGWLAZDOBXTMUUQVCGSSYQUFDTDIL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HDHCDCSJGTDGAMTAKTJEFVBYJZYJBNBGPLZNRYGHFHMKJHZWKWTYHLECHSIXHXIUNFJJVWOALNWJATXFGCYDLAYSZOWSNAPQWSQKXEZBLSXLAWCMQEPKTPBWAVO");

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
    msg.setTimeStamp(0.6538308202564576);
    msg.setSource(6707U);
    msg.setSourceEntity(238U);
    msg.setDestination(17572U);
    msg.setDestinationEntity(54U);
    msg.type = 48U;
    msg.op = 16U;
    msg.request_id = 23660U;
    msg.plan_id.assign("TTTLLWLACQUYIUNHHLTBMSVZKSYYMQPJCWSRNCUWHIELXENZBYJJRGLZJOEFPZIHZBMLSBKMOEKYRKQDDBSYFTRVWNVJNQNRSKUDNFVDPNEJZGXXEOMWFP");
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 139U;
    tmp_msg_0.level = 238U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WZNUPKRSPDLFAIDEADOMWNGMFBALTOQRVBXTKNGNZONVOBKNSHZEZCCIREAPLXUUULUFRFFIVQCJDXZULLSQYFCZWTMHHYNFGQOGLMBPQSDMKUDQBJBVRWYOWUMBTESDPDJOTMSKEKLRNMGRCQNHIBLGDSAHWJSGJYHZDGBQZKHFVYVYSUPHYTPRIAYHOICTFXAPVQSWTWQR");

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
    msg.setTimeStamp(0.09451959227904216);
    msg.setSource(7857U);
    msg.setSourceEntity(37U);
    msg.setDestination(49465U);
    msg.setDestinationEntity(188U);
    msg.type = 236U;
    msg.op = 106U;
    msg.request_id = 401U;
    msg.plan_id.assign("YEYWUGIYBXLJUPJSQGYGRKVITHNYDRDIOCWJVBAMVNPPANYNCKGNPOOOWVWSOH");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.start_lat = 0.24177024305367523;
    tmp_msg_0.start_lon = 0.26760487656544996;
    tmp_msg_0.start_z = 0.25091713772909807;
    tmp_msg_0.start_z_units = 236U;
    tmp_msg_0.end_lat = 0.471263024677434;
    tmp_msg_0.end_lon = 0.4221469272986027;
    tmp_msg_0.end_z = 0.18821460274934654;
    tmp_msg_0.end_z_units = 162U;
    tmp_msg_0.lradius = 0.11854538086682032;
    tmp_msg_0.flags = 18U;
    tmp_msg_0.x = 0.027447065827222783;
    tmp_msg_0.y = 0.09493154821531846;
    tmp_msg_0.z = 0.34419371372199314;
    tmp_msg_0.vx = 0.8037273859346615;
    tmp_msg_0.vy = 0.37553831349439637;
    tmp_msg_0.vz = 0.11177191578332069;
    tmp_msg_0.course_error = 0.38957855071288805;
    tmp_msg_0.eta = 53117U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XQESUEDHZASCGQGNNXVCFOQRMKTLNVPZOBVRDYEZZBJKLEHSSBLPXWNJIEGROVIEHQXWHPYYANKAOUJYPJKKKOHPRIYIHZRPQFDSJZUTGQUUTASGLFSUFUWUZXFHQDWVNBTPJECZDVBIODFIOHKFBUYTKFDLAIEJCCCDWCMCRAHMWPLPQWVJDMRMXIVZSGKYTLBWGZAGDIMOGWCTSTAETJQENOFXAIY");

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
    msg.setTimeStamp(0.7280486507344359);
    msg.setSource(32979U);
    msg.setSourceEntity(41U);
    msg.setDestination(61024U);
    msg.setDestinationEntity(46U);
    msg.plan_count = 27361U;
    msg.plan_size = 4173853616U;
    msg.change_time = 0.127311750309673;
    msg.change_sid = 58579U;
    msg.change_sname.assign("NUKABYFKWZPCUOIURPVJNZGQQEAXRLSZASTRGPWBMUTYJELDPVTFBWR");
    const char tmp_msg_0[] = {-58, 89, -59, -107, 25, -44, -89, -124, -75, 25, -50, -124, 74, -70, -66, -32, -53, -8, 62, -43, -20, -82, -77, 108, -16, 37, -18, -6, -35, -18, -66, -9, 18, -14, -40, -82, -3, -120, 106, 15, 29, -32, -65, -112, -44, -100, -56, 33, -91, -88, -68, -91, -31, 91, 6, 43, 19, 65, -7, 66, -100, 13, -8, -85, 101, 115, 103, 29, -84, 72, 62, 39, 97, -27, -8, 91, 44, -122, -4, 5, -115, -8, -72, -1, 4, -79, -58, -109, -61, 42, -80, 27, -96, 82, 12, 83, 33, 92, 113, 39, 62, -41, 17, 113, -51, 121, -45, -78, -122, -118, -104, -117, -84, 101, 86, 85, 114, 59, 73, 120, 86, -57, 44, -19, 101, 25, 66, -36, 16, -62, 93, -6, 0, -71, 90, -58, 95, -72, -48, -101, -100, -15, 111, -7, -110, 16, -19, -7, -103, -75, 18, -16, -1, -55, -70, -8, -62, 32, -119, 12, -34, 126, 90, -69, -32, 27, 99, -90, 74, 97, 67, 104, 109, -67, 98, 120, -86, -79, -2, -90, -45, 68, -92, 111, -92, -34, -88, -101, -11, -37, 43, -102, -61, -100, 59, -80, 29, 12, 18, 90, -38, -59, -62, -67, -94, -81, 59, -52, 104, -60, 92, -88, -34, -9, 50, 72, 47, -103, 123, -63, 97, 82, 74, -87, -66, 46, -101, -21, -125, 76};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QBEVIDTKVQFQPTPKLEQBOZRXIKOYMAXWB");
    tmp_msg_1.plan_size = 12121U;
    tmp_msg_1.change_time = 0.41268576384059585;
    tmp_msg_1.change_sid = 40218U;
    tmp_msg_1.change_sname.assign("WXHPCHGDJWTIKIVLXMQMQQCEPHZKORWAGFUNHBALBCSUGVGTBWHVCIOJPRMGAIDI");
    const char tmp_tmp_msg_1_0[] = {100, -45, 99, -42, -23, 24, -99, -8, -36, -17, 96, -113, 28, -87, 18, -34, -2, -66, -93, 63, 107, -64, 0, 43, -44, 41, -87, -60, -76, -31, -107, 27, -31, 67, -9, 25, -113, -123, 81, -64, -11, 74, -75, 118, -53, 37, 46, -114, 10, -63, -80, 17, -98, -61, 71, -82, 122, 95, 33, -35, -90, -2, 10, -53, -105, -95, 70, 5, -66, 111, -93, 117, 24, 21, 61, 83, 120, -73, -39, 113, 62, -24, -59, 37, 103, 39, -120, 95, -19, 55, 89, -62, -72, -8, -64, 3, 66, 5, 102, -62, 89, -97, -122, -60, 103, 47, -39, 80, 113, -76, 79, 29, 0, 48, 41, -118, 11, -94, 57, -98, -71, 36, 7, -59, 29, 83, 41, -106, 100, -108, 114, 70, 107, 109, -33, -29, 31, -6, -124, 50, 34, 68, -109, 77, 104, 101, 42, -17, -95, 49, -81, -64, 63, -97, 32, -91, -3, 52, 79, 57, 22, -5, -35, 77, 65, -99, -95, 56, -76, -34, 30, 0, -116, 75, 54, 34, -53, 71, 126, 123, -22, -108, 59, 110, 36, 4, -13, 13, -78, 80, -57, 55, -8, -84, 121, 87, -104, 74, -116, -113, 94, 92, 67, -3, 30, 32, 99, -70, 47, 101, -25, -1, -128, -24};
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
    msg.setTimeStamp(0.22974983360521217);
    msg.setSource(1321U);
    msg.setSourceEntity(41U);
    msg.setDestination(55049U);
    msg.setDestinationEntity(161U);
    msg.plan_count = 7109U;
    msg.plan_size = 543118168U;
    msg.change_time = 0.5800854702731545;
    msg.change_sid = 62447U;
    msg.change_sname.assign("XFGMUPMVAFCJUTFBSQXMWCJFYGJQDSSMURACEQDTDVZOWYEKXXYXYLYRNCDLHLBPVBPNFPOKWOOELSDMYQMTVMRNNWTPJBRYHETDNA");
    const char tmp_msg_0[] = {82, 60, 94, -97, -43, 99, 112, -42, 16, 21, 62, -128, -44, 1, 73, 100, 1, -57, 6, -106, 27, 31, -1, 19, 32, -24, 67, 11, 97, 116, -119, -120, 76, 22, 12, -29, 97, 53, 108, 59, 47, -2, 53, 98, -68, 73, -51, 61, 11, -106, -115, 15, -89, -29, -120, -22, -102, 60, 125, -75, -3, -28, -124, -22, -21, -84, -56, 40, -43, 15, 44, -1, 27, 105, -95, -107, 106, 43, -63, 80, 105, -71, 63, -33, 2, 36, -69, 50, 16, 33, -85, -39, -6, -82, -101, 49, -41, -103, -6, 64, -8, -70, 106, -84, -127, -22, 30, -45, 59, -98, 76, -36, 78, -115, 1, 9, 117, 73, 62, -88, -91, -122, 26, -15, -12, -79, -33, 34, -97, 91, 16, 51, -10, 6, 110, -114, -11, -69, -17, -10, -42, 41, 103, 11, -7, -4, 98, 120, -111, -83, 81, 35, -122, -87, -71, -86, 4, 54, 110, 90, 111, -57, 6, -72, 47, -101, -29, 35, -13, 105, -104, 54, -113, -32, 70, 90, -71, 124, 114, 88, 111, 6, 57, -103, -46, 48, -70, -34, -53};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KBCZAOQJEDACFPLQCFOIGAAYHWSZJHOXWFBOZA");
    tmp_msg_1.plan_size = 36651U;
    tmp_msg_1.change_time = 0.9933715507765424;
    tmp_msg_1.change_sid = 30355U;
    tmp_msg_1.change_sname.assign("CVXCNGZWNBETTSVCYAHJZIWZNZYBDMDAIBOBACTFQQGLOZWCHNCLLCURDWSRSLVOAKBGJQKOHRIKWJBJTWXRMGHIREQIXKFTAIVZUYR");
    const char tmp_tmp_msg_1_0[] = {9, 55, -61, 14, 61, 0, 65, 55, 55, 17, -73, -26, -107, -120, -23, -98, -115, 39, 81, 99, 20, -52, -9, -14, -23, -17, -103, -31, 48, 103, -73, -117, -73, -36, 77, -83, -110, 43, 37, -41, 121, 4, 126, -90, -94, 4, 40, 91, 105, 100, 28, 46, 60, 95, 25, 107, -107, 42, 6, 43, 105, -115, -33, -124, 119, 78, -60, 59, -18, 35, 10, -112, 90, 64, -94, -47, -59, 82, -22, 63, 27, 78, -83, -81, -76, 7, 89, -60, 32, -33, 56, -95, 124, -111, -125, -82, 105, 62, -66, -100, -110, -75, 98, -79, 84, -51, 111, 9, 79, 8, 41, 114, 26, -82, -41, 18, 105, 109, 11, -5, 8, -34, -119, 50, 73, -122, 123, 96, -108, 10, -34, -25, -118, 44, -32, 9, 72, -25, -104, -53, -17, -103, -53, 114, -4, -105, -116, 23, 44, -102, -57, -37, -14, 51, 77, 18, 74, 106, 69, 13, -60, -47, -79, 75, -115, 15, -22, 123, -30, 51, -40, -25, 35, -16, 51, 40, -88, -90, -59, 75, -44, -33, -32, 110, 35, 84, -78, -17, -36, 101, 13, 42, -19, -21, -28, 54, 61, -32, 33, 52, 15, -124, -92, 117, -23, -87, -6, 79, -71, -88, -34, 17, -114, -9, -18, 94, 82, -101, 86, -84, 76, 48, -122, -11, 12, 27, -67, 110, 1, 50, 79, -104, -86, -4, -65, 42, -36, -105, -116, 43, -52, 32, -67, 37, 86, -61, -59, 26, 66, -67, 114, -78};
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
    msg.setTimeStamp(0.5196307437702139);
    msg.setSource(39136U);
    msg.setSourceEntity(26U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(186U);
    msg.plan_count = 24556U;
    msg.plan_size = 3554471422U;
    msg.change_time = 0.5760621126465658;
    msg.change_sid = 56470U;
    msg.change_sname.assign("MCXSRMJZCUGFPOSRPVJUOZMRWEQQZUPDBULFIHQTVGRXXFKOINGZLGNKATUDMXWJLHILASDXNBTGVXSANZIZMHLAPFGTEGWTMVQEUEJSMCTKZNHQSDOYHYBOHJAKJBEDIPKCTDYWWYEYDVIQOJPCSACZAZCXUHCYWDRBRAIPVMUULNJCJHFIOFPQKICJFYERKENXZHNQWYRTMSFBREKVOTIB");
    const char tmp_msg_0[] = {-40, -93, 23, -64, 71, -84, 116, -97, 81, 118, -103, 84, 112, -28, 22, 81, -75, 91, 50, 46, 13, 51, -14, -29, -103, 5, -34, -66, -23, 29, -48, -52, -19, -35, 111, -44, -72, -81, 82, 125, -44, 35, -97, -101, -41, -71, -60, 84, -114, 11, 99, 77, -98, -16, -4, -99, 107, -11, 97, -83, 0, 30, -30, -81, 17, 16, -86, 4, 66, 95, 49, -7, 26, 98, 94, 78, -12, 102, -3, 17, -30, -54, -96, -75, 125, -84, -54, 86, -40, 105, 104, -56, -56, 73, 108, 12, 94, 35, -52, 91, -58, 16, 73, 27, 107, -125, -72, 82, 52, -13, -10, 35, 100, -41, -93, -53, -5, 44, 96, 57, 50, -42, 73, 122, 95, -117, 102, 118, 97, -97, 104, -112, -95, 106, -70, 45, 97, 63, -90, 69, 7, 26, 47, -41, 122, 36, 123, 97, -65, -17, -113, 30, -101, 98, -98, 52, -74, 8, 21, -79, 65, 10, 115, 34, -22, -56, -2, -33, 75, -112, 79, 28, -87, 8, 23, 57, -107, -50, 73, -23, 116, -82, -98, 27, 32, -32, -19, -90, 113, -65, -104, -7, 8, -113, -101, -73, -37, -61, 45, -127, 1, 52, 26, -19, -92, 36, 63, -89, 36, 60, 9, -104, -84, -39, 99, 87, -52, 20, 103, 91, -5, -122, 47, 31, 105, 4, 8, 78, -60, -121, 80, -46, -38, 82, 61, 44, -51, 56, 29, -75, 70, 74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EGCJVSVRNIFPSMMRMLECEVKDTATLUGWNJQBYGLLNOTRCEGDDLPGDKXDOBUIATNIABOYVWQOGGSZZCAWGNYSDJFOQXQQWVHRAFWEKFPLPODSOMT");
    tmp_msg_1.plan_size = 5341U;
    tmp_msg_1.change_time = 0.7043648260671462;
    tmp_msg_1.change_sid = 54212U;
    tmp_msg_1.change_sname.assign("SXVVGIPAGMMKHQXFTHSNWSMAXIOQODXDYURYISANTTGDNKSTVNCINURRVGQWTTQEWUFPVASHKZJWMNOEDBZFRVRVJJXLEUOLGHFIIOZZGCMXACGIDGLIJZUKMGHZKPJLBNOKTFUPWXOCYZYNOKBKBLEASQWEPJRZMQWUEHTGYKIJTPBBUFWTYJCYCNDYUFELOEKLHPCPYZASQXJHXDMBQBEMFWCXVSQAMLFVRESDRVHLDZ");
    const char tmp_tmp_msg_1_0[] = {-13, -94, 109, -16, 58, -8, -51, -82, 92, -96, -6, 94, 27, -9, 24, -39, 13, 89, 14, -25, 85, -94, 7, 80, -85, 55, 34, 98, 109, -52, -94, -45, -95, 12, -102, -102, 25, -7, -10, -98, 28, -22, -104, 124, -98, -90, 73, 108, -10, 9, -71, -3, -97, -81, -31, -47, 72, 119, -35, 109, -42, -55, 8, -113, -46, -114, 110, -68, -21, 75, 124, -19, 43, -72, 122, -63, -91, 83, 58, 80, -64, 6, 22, -127, 28, 11, 49, -89, -113, -49, 75, 85, -55, 22, 56, 80, 39, -77, -12, 105, -77, -63, 33, 29, 110, 10, -99, -9, 33, -79, -89, -90, 1, 8, 78, 110, 11, 34, -122, -114, -65, -60, -34, -65, 5, -31, -103, 50, -113, 70};
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
    msg.setTimeStamp(0.16801332643447275);
    msg.setSource(53901U);
    msg.setSourceEntity(121U);
    msg.setDestination(45952U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("DARUYJNKENJGAMOVLFCGUNITWLDPGDFDBZOOLKPMEEVOXYXHAXVZZHWVFTJPCJADSGDXBDQPHUDIZRKYBFPZUVIDAOZCLHWYHJTUASQPXVSTTLTSGMTOJATPWZAHRYUXKGGSECWYRYHQFVYOCWUSFLIEVKWYCVHQYXIERZNNOXFAZTHJIFBAZCNPRKIRETBUIJRLRNXLRISXOWCMNFL");
    msg.plan_size = 7069U;
    msg.change_time = 0.7754333327156145;
    msg.change_sid = 50163U;
    msg.change_sname.assign("WCTDLJTXPBVYHVRZSMKDHPXXCLRMTDCERBHBGQQAFMFHXOAIHMNIJZERKVXPWVGQIVAAJUFLUXIQGJJBWYYMQNTGHGCHASRLETSJGZOYRDHOFEVBFKCYCWHNYMIBLFNRXZEXZADQBPQPKUNRJLKNDDTFLUCVSYOCWLOAUJSNOEZFILINGGZJPOXRBKWLMBDADQJIVADFQSZYUQANNSTPPUGBUIOMEOKMZWEHVTU");
    const char tmp_msg_0[] = {30, 17, 66, 55, 53, 9, 44, 100, -49, -79, -64, 39, 51, -121, -78, 16, 69, -103, 28, -61, 71, -78, -121, 74, -46};
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
    msg.setTimeStamp(0.5744320541373927);
    msg.setSource(22055U);
    msg.setSourceEntity(92U);
    msg.setDestination(33830U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("LIVVFFZIFTRXWBSBRJFPFUJCSKJGHHRSPJWCXRKWKJZTXUOIFXLTNERBFUPGPMNCLCQNAYAAZUVJQLMDOIQDHKW");
    msg.plan_size = 26999U;
    msg.change_time = 0.6209649902388197;
    msg.change_sid = 3834U;
    msg.change_sname.assign("RWGZBAIIQVBAMZUIWASYAUKXVJBFIFECGRVNYTOCUFRWMLUGDCHFIFKBROUYDSJDWPQHWMTGOYSNZDCOGFSHKHYPUDFLKPTEZXIAEDUOMTHBQRDOLLAQBMSGSIJCJUYGHVPRNLIWZAHXQZEUEGPJC");
    const char tmp_msg_0[] = {39, 111, -74, -39, -106, -68, -46, 30, -29, 65, 15, -39, 19, 112, -60, -115, 62, 8, 75, -110, -67, -124, -44, -43, 108, -122, -3, 2, 95, -41, -24, -23, -98, 110, -100, 98, -17, 63, 81, -80, -14, -91, 75, -69, 120, 57, 62, -127, -39, 74, -1, 74, -3, -7, -71, -128, 67, 113, 45, -99, 23, -128, -64, -85, -93, 39, 8, -127, -114, -92, 81, 79, 59, 88, 1, -102, 23, 101, -64, -75, -16, -51, -29, -43, -92, -116, 68, 120, 15, -13, 44, 95, 105, -96, 0, -69, -101, -105, 42, 115, -26, -15, -73, 67, 13, -37, 65, -126, -38, 72, 45, 28, -29, 63, 71, -81, 18, -61, -122, 5, 98, 95, 112, -102, 7, 99, -123, -25, 70, 48, 83, 58, -88, -38, -71, 63, 91, -77, 30, 58, -106, 68, -29, 103, 40, -103, 58, -42};
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
    msg.setTimeStamp(0.26900807145357286);
    msg.setSource(39875U);
    msg.setSourceEntity(124U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("QQHCIZLGTXGZRJRMDFPOQHTMSFXYIBMEZXLEUHLOAXPPDEFBOSMWIETUTXBEIJENUPPKSVAIBAXRPWSQQYGVFTAIDPNXETMQWUQSYZFRHSADNKGFVACJHGWETLGKUYBAVRNCSDJQQZKHKAYVMZTAYJONRUVCJWLZSFBLEGBHZZIGIOYHHUUNDVDSWGOLMTZXBDRYVJDIUWKKNJLOCBPWKTRNOLFMCNKISDCOCMFGPWC");
    msg.plan_size = 53383U;
    msg.change_time = 0.9585255344836385;
    msg.change_sid = 17860U;
    msg.change_sname.assign("QFLBCGCXWWNNBVXNSNLPBYTFGZYPVCFWHSUTTTYHJQLSURSOIJXRCMKTZZOJQXDIBOQHUCEYPYIOPZGUSLZHNKLNRD");
    const char tmp_msg_0[] = {-68, -89, 7, 24, 81, -88, 8, 104, -7, 110, -114, 74, 71, -89, -2, 0, 57, -128, 114, 125, 100, 116, -20, 108, -51, -11, 110, 107, 5, -63, 122, -53, -116, -20, 21, -113, 121, 109, 66, -5, -38, -77, 68, -34, 116, -14, -89, 39, -69, -46, 2, -52, 14, 110, 62, 111, -78, 97, 78, 0, 4, 4, -114, -59, -73};
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
    msg.setTimeStamp(0.3821314630544259);
    msg.setSource(43154U);
    msg.setSourceEntity(174U);
    msg.setDestination(51609U);
    msg.setDestinationEntity(2U);
    msg.type = 126U;
    msg.op = 36U;
    msg.request_id = 42156U;
    msg.plan_id.assign("WYTTGBELLPWBMRNZNREVJDCGTEKXBXUNEPHMABBYAHWESKKCOEWRBMRZWJXWSKQ");
    msg.flags = 24559U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 206U;
    tmp_msg_0.request_id = 35265U;
    tmp_msg_0.command = 40U;
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 45090U;
    tmp_tmp_msg_0_0.lat = 0.6017660630709488;
    tmp_tmp_msg_0_0.lon = 0.5400139194191036;
    tmp_tmp_msg_0_0.z = 0.7359021689215852;
    tmp_tmp_msg_0_0.z_units = 47U;
    tmp_tmp_msg_0_0.speed = 0.6603977070646688;
    tmp_tmp_msg_0_0.speed_units = 127U;
    tmp_tmp_msg_0_0.custom.assign("IGYHZFHTBCGMVKNJQBEXMCTHKHIDCJPAWSSGJUKQWEUDNLYEVMAYRDJIPMQABARGPSRGNWZCXSQVKGJLKLALFKUUUBRBOEQOQDTOZPAVCJAQOYTTYIIITDFXEDABLXXNTFNPYFGJKVKMEEZXRINUJSBRVIWUBRCKYLPHWMQPRHDFYMWMWHX");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("WDIFMGBUZFDTTCKDRHLBHKDQNLKLLULPXMPCEIQUOCGJZEQGZJCTUEJSMYNFARWFMYDITPLXNCZLDLGEQPDRYSNQROXHVWVARFDMROMOHPJHWPAEQKGRSYTNSFYZSYBKCETBHYSGXTTGSCFHYHMNDMJJXSJOLAOAIKVNQHNBOOSEJRWCSCIKINLMQVCTGJBVAIKKFUOVEVPAZWGGUMUWWAYFVRXQBIXIXBJBZNR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FDLQOJGRUXFJKNQEXOSMADQXFLDZRSXHSRPFWQCDODVFI");

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
    msg.setTimeStamp(0.6899619284481827);
    msg.setSource(9659U);
    msg.setSourceEntity(134U);
    msg.setDestination(53967U);
    msg.setDestinationEntity(183U);
    msg.type = 122U;
    msg.op = 69U;
    msg.request_id = 2113U;
    msg.plan_id.assign("CRBZLHKFFMSKKIVCDBMKNTHIORBZYVPXDRNFHRDVHBVXNMACYDUIOKVLTKQWCNOMAUZGPLWWMUTSNJLOHYTEGSBKTSFDJXHPFLHLYYBTBRAAUFMDWCXNOCGPQVRITXGBRUWAUUTRYJNFADCRZ");
    msg.flags = 7498U;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1505870621U;
    tmp_msg_0.value = 194U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("APXXBBJEKCLTZASAPKAWIUQEOFBGL");

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
    msg.setTimeStamp(0.7276510254326153);
    msg.setSource(8913U);
    msg.setSourceEntity(199U);
    msg.setDestination(62237U);
    msg.setDestinationEntity(56U);
    msg.type = 36U;
    msg.op = 45U;
    msg.request_id = 34630U;
    msg.plan_id.assign("DCYZWASLCEPKFNRKFZUWGPFZBDUKYR");
    msg.flags = 31734U;
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MTTVOJSQLYXJOYRNBALKOAVJKIFFGBLVRPZRZSIJAETIMWEEYLEYXAYZZAZQMJCIDBUIBJXHVKMQUBGKMRLTGSSCCFTNRAHYWQHNQHADJZSVKETEGFCABJSONPMGWNXHVBGGKPQQVLIDYURJPZQDZGHVFMKHZALHBFHPXFIPTWBXTRWOEFLPDJNUUCVOXNSQECKTFKOUURFLPWSNUGRNMWRLOPIXC");

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
    msg.setTimeStamp(0.00483719708489172);
    msg.setSource(23441U);
    msg.setSourceEntity(166U);
    msg.setDestination(18873U);
    msg.setDestinationEntity(59U);
    msg.state = 125U;
    msg.plan_id.assign("SPZJBFYWWDIGSNMERRZNBJQBEJKRBQQJTBQQXDMHAPFPISCJWTQUESKOJCNDARMDOJDUMSMZRZTYIVPFVANAPDFLEPKOICTDNUNTRIKZUSOWOTKVHLMKABBHWUKUOGFMVAXFHOCVIEYIDODYLMLVYTFYUPAWLOXBAXLMSLNHXYGUWJGHZEPU");
    msg.plan_eta = -1764794429;
    msg.plan_progress = 0.4952758799352728;
    msg.man_id.assign("LJXQCQUXAQRBJYCQOHCDGDZSYOEIONRW");
    msg.man_type = 22423U;
    msg.man_eta = 1947724076;
    msg.last_outcome = 239U;

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
    msg.setTimeStamp(0.7937696568922106);
    msg.setSource(27902U);
    msg.setSourceEntity(166U);
    msg.setDestination(18882U);
    msg.setDestinationEntity(13U);
    msg.state = 219U;
    msg.plan_id.assign("HECEGGNNUJMQWSFPFGQVBREIDCDBSMNLYOZXEKVMUCRXHKVRXGNGOQTBYCZFQSNMLJRZQLORLVPJAJXQNIVKKYWARDVHAGVNEBKGPBAIDHWJAFYVZNLZOTPDFECIPHKFWOAOPXTMRCKPYZDPCPYBBOBLTTIHIKYTUHSMQLUISIBJTRUL");
    msg.plan_eta = 1267957366;
    msg.plan_progress = 0.8629728604489427;
    msg.man_id.assign("QLYBMJKRSXLRHTQLXJBOKZWJACV");
    msg.man_type = 43205U;
    msg.man_eta = -584801764;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.37279367541854513);
    msg.setSource(62618U);
    msg.setSourceEntity(57U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(126U);
    msg.state = 151U;
    msg.plan_id.assign("WTODKUZVIRKODQNLTSXZOTBASNHRQDXFRNTXWPGTFELDXMUUUJHSHVIGOENEKWHZICRFNVTGWNADMWZUVNJILBXCHTPWVJPSEGCA");
    msg.plan_eta = -509133916;
    msg.plan_progress = 0.47971080805432087;
    msg.man_id.assign("RNKWDTCUEAVFOKYXXAQXFFBZBXQKUWIYNPZEGJIIIGARSZOZ");
    msg.man_type = 4616U;
    msg.man_eta = 316702714;
    msg.last_outcome = 168U;

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
    msg.setTimeStamp(0.05945876761884883);
    msg.setSource(39506U);
    msg.setSourceEntity(188U);
    msg.setDestination(49211U);
    msg.setDestinationEntity(98U);
    msg.name.assign("AJLAYGHXBDCOFINJVHPIIAGGBNDRCLYLKPMSAPCUNULHYFVBNICNVZPWDRECUKQAVKMNITXZM");
    msg.value.assign("EOSKYCHDKUTTDOMGDPGUMUQZNUQVDHCJHCTFAJPWLKAEMKSWJRCPKVOWOLCAMQIMRBXWYMPWFMGTPMNWKZRIXLXVUAOIDFXBQZZPYFOFGQVCVESAZNYRQLHZTXLXSJBRBCJRZVDEOYEPIRPYPCFEIFKBUYHUMTIFRKRDHTDIGVLUIVNMTHESLLEGJRWIXZCAJBUHGNQAJVSSZFXJGKSAGSTBGWXUEIZLPJFNWSNQYNYBYKC");
    msg.type = 57U;
    msg.access = 188U;

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
    msg.setTimeStamp(0.0346554568517069);
    msg.setSource(55203U);
    msg.setSourceEntity(161U);
    msg.setDestination(63201U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ESNUTEMKRFJLREBNWJTAISSSJRIGYGEKJCBJGLIVXTXCPPZXUAMTMDXNCFYEUUSASCFZNMBLGBVSJHIDGXRAUHKYZROPPTZBNJQYAVZCMMSHXUVKOHO");
    msg.value.assign("EANNKTNKJYMZTXITPRPOSVTEJILTVGTDFAKTOFNKJAUWPQZUBXHUORSMIXSQGSFYGRXYCLTIMUGKCZFDSKMMJBWVELABVIIHHNVZWSJDYZDVJMDYPWLGFDZUAEWVULCQRRUIEFDEVOCBRBQAUOJZIHSGVQAMGEKERXHCXNJYTVYMOWQBSFYKEOZ");
    msg.type = 164U;
    msg.access = 121U;

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
    msg.setTimeStamp(0.37234753954546895);
    msg.setSource(38937U);
    msg.setSourceEntity(142U);
    msg.setDestination(21985U);
    msg.setDestinationEntity(76U);
    msg.name.assign("KKZABCNHMJGEZTKASDPWDZIMOFDSWFRAOUOUPNBCUPFFVCTNTFHUKGHKUVTBEECZANUAOMRXMSIJEFODHFJMOMJQXGRHYDKYVOYQLQQXBXNXJKSBJIXTWPLAFYYTWWLAPDQMAWZRETGVCTBFDFEGOYZLSUPPWZVQQHHMCGZODLXNBUHLVEJCLIYZJGNJYSXINTBBDSSNCEQIWZRILWVVLKIGJWVMOGP");
    msg.value.assign("WUBXQBPKLFHMIZRRFABZCGETYAJRJXILANXFSCOCJCINEKOIDYVNSXWM");
    msg.type = 0U;
    msg.access = 215U;

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
    msg.setTimeStamp(0.07528262355207593);
    msg.setSource(449U);
    msg.setSourceEntity(70U);
    msg.setDestination(57214U);
    msg.setDestinationEntity(71U);
    msg.cmd = 253U;
    msg.op = 81U;
    msg.plan_id.assign("GHQQBSCDZSWVDGALPLPEQHGTLKSMUJRONPCAJJOIQBEMFHRNCXHTVANHRFZZQOLRZWVUFOQJZFOPITDSIIEHEEBTAXQMEOFXLIQEEXDXYNUJSHZUYJNGSCTYKYWL");
    msg.params.assign("SAHTETGLGCDKPJYAMEVSZOOMAUBMANXUIRRFAVOGRYNBRJLCSTWBQEUXZADCMYXZKZIJLKDMSJZPQLXISLKQCDTRFWUYKUGIRWEGENCZNCBQUHZGBOPCSFRWHFWUEKNTYHFNHIYTRXRTMBFTDYMPVIBLEIUVPWKDHMPQSPBAAJPFAUODBPCOXAJWDXWKSQOQVTQWZQGKLVNRIJDDMMILESJHKHZFWXYQENOOZ");

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
    msg.setTimeStamp(0.9976122099135466);
    msg.setSource(10059U);
    msg.setSourceEntity(36U);
    msg.setDestination(47014U);
    msg.setDestinationEntity(136U);
    msg.cmd = 135U;
    msg.op = 189U;
    msg.plan_id.assign("WPLFTVLIJAMJINYQWLNMLYBUGRVEBZUFRMKDSLFBJPPOFCDAHAAWQHVCFGYXXNXDXIKFOWNRLMNIEHNYHQGFRCUPYSZOECYHVDVTIUKXOGVOQQFKJBUHJDXASDSZVAJUZITGXXVZDGSACEDPGQRNAUESZRTETNNBRBWBGQACPUYPBVLXWGWCKUJKYZGHCFTKCTTWYLIIHJSDQEXJHRMVPUCO");
    msg.params.assign("KANOJDJGHFFQCKVTWNIZELRNJYBVELJMKFFQDEPEQGNTMONROPZIUOXQBISPOLNFCATCILAYZXSOMHVZHVKEXURVSYKQYBCZRJWJWZLWVTQSJECODYAISDDITGTBLACWFZJYPIJNYMLWWQBPMXXMSKUXRSDTVPFWALDXFHHFRBGUBSIUMECNDRYDBGUPXETMKLMOHMSLGPEAPSOIKFAUKBEAVZKQTWNZX");

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
    msg.setTimeStamp(0.387421190965453);
    msg.setSource(49456U);
    msg.setSourceEntity(249U);
    msg.setDestination(56586U);
    msg.setDestinationEntity(48U);
    msg.cmd = 156U;
    msg.op = 197U;
    msg.plan_id.assign("SEHRZTPZLUEHVBSVNSVFQPQXCYWSKNMOMNVVIQJJLIIKCEZOHGYDIMDQWTTLWJUIFZPDXGZRVQCVCLKHSQRQ");
    msg.params.assign("CTUNOIAMOSUSFKQKFIUKMPOKUYIREJKGZJOWHALJHBNWAEWUZIZWSELJEYGYBVHFGUXPPEQWVZKMOFRAGEFOMVPDZQJDMNGXGCLTJIZLNPCMUIDDTUJYVXOALQNCLHRTXRDAPMYDNUBBSMVSHDZSXKWOOWFXAFNQJGSIUWTPSEBOKZQTRXBHSDNYMXBQHKRIVAEGPBGIJWLVQHDYFC");

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
    msg.setTimeStamp(0.47836158485301206);
    msg.setSource(12007U);
    msg.setSourceEntity(160U);
    msg.setDestination(60548U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.6796196417091701;
    msg.lon = 0.6676706409663624;
    msg.depth = 0.7986274978479355;
    msg.roll = 0.622600489934781;
    msg.pitch = 0.757455613386886;
    msg.yaw = 0.7667215769317103;
    msg.rcp_time = 0.6974856295855212;
    msg.sid.assign("SAQDFAZXLPRWFDBHTKFNZFHUGWPBWLHCEPGQYLYMXUFLUUXIXOLMZTMCYJRTACZPEFQKKHRKSTXOWSMQOYAKYKCIVVKOKSLRCSULYDPMOEJXIDSJZMVD");
    msg.s_type = 22U;

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
    msg.setTimeStamp(0.9564974624047848);
    msg.setSource(23837U);
    msg.setSourceEntity(94U);
    msg.setDestination(65103U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.8289093444073239;
    msg.lon = 0.5951771314281391;
    msg.depth = 0.17318236138810872;
    msg.roll = 0.5421656079554994;
    msg.pitch = 0.2957581840805882;
    msg.yaw = 0.22728575721726163;
    msg.rcp_time = 0.0567854234940296;
    msg.sid.assign("DWSPLXXEDHQCEOCIDJWEGLHQEIRBICARGNKCOZUULTTRVVOWQPBQICPJHYGYUJZHQFYAFMXLQLCNEPFNKPATRBGRSNBNZBKHTEIDRJLRAVUCTHUGJMZYJSQVSSDOQPYUUPVUSEKXRLFAOTWQSQTKXOSNDBOZX");
    msg.s_type = 104U;

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
    msg.setTimeStamp(0.4275789704702705);
    msg.setSource(4858U);
    msg.setSourceEntity(108U);
    msg.setDestination(52713U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.6340161207804211;
    msg.lon = 0.6933290741107394;
    msg.depth = 0.24266987907227233;
    msg.roll = 0.5676501216866183;
    msg.pitch = 0.12645862912976036;
    msg.yaw = 0.8600956812000681;
    msg.rcp_time = 0.5818919569495589;
    msg.sid.assign("XHFZARFNTQRPDHDDMKFSQTOZUQEGXGZRJLNVVATEOHLPYAXNSTKUJYKZXIIXYDCITURUBFOBPSSWWAVEJMIEVJCLJPMMGJVZBZCYGCDRYOCXKAJFPRABATVEAFDEKXSQMKNYYBGOXKZTYLXPIWVCRTQYGZBSNIOD");
    msg.s_type = 227U;

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
    msg.setTimeStamp(0.7715283384924472);
    msg.setSource(35004U);
    msg.setSourceEntity(246U);
    msg.setDestination(34443U);
    msg.setDestinationEntity(34U);
    msg.id.assign("VVCVMCSLRQRYBJCUCONIALFZJRXGEEYFZSWPMMNAYKZHDNHLYKQTVCAVCPFPGZIQNWHTZVLT");
    msg.sensor_class.assign("DYSPAPBDBKCUDHXWGRVRXPZTDXOTCVQFVMLLZLUPAOLGAPWAHRCPZZGGQWNBPFWBYQQCGRDIFNTGZEKIYQDFFOJHBWTVBEZAYAJHNORGKCMBELJWUKMLNUVJKVXWBRJXPGZXUHRFKPMAZOHDEOSTHYBNMKZEFKVQSEIYMNWXMFJOIQRLMSJOIWOSCZFCLSOSNLIHISCTQTXNTKCMQNESGXYUEJVYI");
    msg.lat = 0.18580971436153093;
    msg.lon = 0.44527278741994647;
    msg.alt = 0.34624507050224196;
    msg.heading = 0.490450476120578;
    msg.data.assign("TXDJPUPUQZPTGXQPCQINFPVDGQOZQWZMFCCLBXFRLHBIRLAFDKMJGTZYXTSGEEYYJWODVPYBBMWDHWFQCZWHBBAOSQKXLZQWSHEFEYFGIGRTKMNEUFPUWEAVIQVKDBONJKVEHO");

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
    msg.setTimeStamp(0.6062184234326667);
    msg.setSource(41276U);
    msg.setSourceEntity(49U);
    msg.setDestination(33397U);
    msg.setDestinationEntity(66U);
    msg.id.assign("NIFJHCOQTTWSABMBCQIJVIRNZWIHZPLJVUVFJNPEDLWIBWDSQOZHJKLXUCPHDGAQXRYGEADLCXPENSMXUTULHYHTYVAYNRFGTPCFMLLNKVTLXUSSXZNNEZFAAARNWSZMUGBTEUZHXOVIWLPWDQJRKVCHMKKUG");
    msg.sensor_class.assign("VTQABZQQZDIYKGXKMHCQFIYPRWDRZKOKJPSPTNVHCWMEFSXJKAICEXMZOKQXIFWGMCPRWGNUTLYDHDEEEBQOLNWLWVDHCSVNLAPENHDREFPUDZVOMUSSTVFJYPMWJBLKLTHGBNPWYQTPAXORJNAEFJXOLSRGTKSUSBJOLIFGYBIPHYTFCUQYZKAXYHHUYNXLDZAVUWCIAMRTFGGDZQNKJABBMV");
    msg.lat = 0.27040485209830467;
    msg.lon = 0.8634801612395159;
    msg.alt = 0.9857692697278314;
    msg.heading = 0.05919415852494425;
    msg.data.assign("PYHWKSYLOSKEKRKHMWNYIQKDEPEMECWPEOIBWGWVRJGPLBRHAKMYTUOZDGFVUPFZYZCJIZPFCSTFVXSXPGTZLNKNSYEDBW");

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
    msg.setTimeStamp(0.3333428806026464);
    msg.setSource(15263U);
    msg.setSourceEntity(80U);
    msg.setDestination(40626U);
    msg.setDestinationEntity(53U);
    msg.id.assign("NJNMVOKHHXHMJKBMIFXFOSYKGBXDCSAPILGNZUWKILBDFFJPSVLJRMEYSICMDMQNXPPQRPYCEGXWMZYLFSOXVTDKMVIZAQPGIBWIDKGUTAWHRWOAC");
    msg.sensor_class.assign("JUBFMTOEFIGNKHLSJAPDZUGBMINZORYUVQJASKZFNBKRDWXBXWPAQYANPNDYXWNPLGZNRNHFIDWECHYNZJQLCLDHFRKMCUXJSQVADAYPCFVZKEYSWVQFPOZAMJJX");
    msg.lat = 0.4414523423903709;
    msg.lon = 0.8578083202264795;
    msg.alt = 0.553149338655826;
    msg.heading = 0.9871669014405863;
    msg.data.assign("MPRSJQFGCXUEHFMBJASXTTCBXRNYYHHUWDGOAJKYGXOLVZIBIBWOUQADWRTWYGISDCCNPHFFIJPRHXLFTVQPORMLNQNEWFKIBVSMREJCKQSYLDXMWSYETGUEVSQBOPTLTMFTVYLSJUSRZYIFKNLIANXWCDLPOAHKVIIKGUA");

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
    msg.setTimeStamp(0.7902589971355791);
    msg.setSource(24913U);
    msg.setSourceEntity(95U);
    msg.setDestination(47551U);
    msg.setDestinationEntity(160U);
    msg.id.assign("ASINTHOLEQMXLPOUJDTJCYAFRQMFVZWPYQM");

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
    msg.setTimeStamp(0.7067958907112718);
    msg.setSource(2187U);
    msg.setSourceEntity(176U);
    msg.setDestination(47005U);
    msg.setDestinationEntity(105U);
    msg.id.assign("KSEAFHKBJQXQCLKYQVMWELRBNTTOSSDNDXRTNCSXGDTPMV");

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
    msg.setTimeStamp(0.08059115031590414);
    msg.setSource(53209U);
    msg.setSourceEntity(159U);
    msg.setDestination(49967U);
    msg.setDestinationEntity(8U);
    msg.id.assign("BNITVUCJNPO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MTGWSOKKFXLEAZYHHIQXCWIWKTVRTPDEPUUUXXSISJKMNNWBCZYPWHANZNCDL");
    tmp_msg_0.feature_type = 236U;
    tmp_msg_0.rgb_red = 121U;
    tmp_msg_0.rgb_green = 133U;
    tmp_msg_0.rgb_blue = 177U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3010241156062532;
    tmp_tmp_msg_0_0.lon = 0.8382768673681915;
    tmp_tmp_msg_0_0.alt = 0.4854720115626179;
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
    msg.setTimeStamp(0.3685133526368939);
    msg.setSource(21649U);
    msg.setSourceEntity(179U);
    msg.setDestination(29717U);
    msg.setDestinationEntity(180U);
    msg.id.assign("QBZQQOESIEOVLCECNTRRIGAQLRRIXDXMLFFPJGEKXKIFVLAMHNNWDIPLBJPICEDFQKTAPJOOGZCVXWAKCNTMDOPBIYIBUUKGWRMYZGARFLBDFSWSKVXDRUNUYUMXMTHLQWLJWAGGNGXDDCZSXJUHTJNCAMQPCUZYOVRJVPTZURBNLHEZACTKYSVEBIZKFWHFWABRBPFBHEW");
    msg.feature_type = 29U;
    msg.rgb_red = 213U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 110U;

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
    msg.setTimeStamp(0.4557683936270579);
    msg.setSource(7847U);
    msg.setSourceEntity(144U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(36U);
    msg.id.assign("YPUUHIJJWXTTBLGRBSOGZIHTJFGGZYUXAQAYRZGBPBQIULHLTDAXFMXQFIGWPBKRPNGCFNSYCPPVQUABKXCWKMOVKVQMNLSPREYDZDHLNSMITRSOKQFCNMJRVGZEBDLJMDUFSPOVNUXEDAWKFDQK");
    msg.feature_type = 6U;
    msg.rgb_red = 215U;
    msg.rgb_green = 213U;
    msg.rgb_blue = 213U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1491512482827222;
    tmp_msg_0.lon = 0.21890956781341264;
    tmp_msg_0.alt = 0.5945791927320192;
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
    msg.setTimeStamp(0.7817851378618942);
    msg.setSource(9124U);
    msg.setSourceEntity(36U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(78U);
    msg.id.assign("SEZRTQATYDWZMLKXVVURQORBSEQKBYKJWQEAKKQOZTPPDZNXVFHDTCCSNRZUHIVUKUAQUVRGWBNWHLOJANXMCJTWWOCGVMLJDHOQXKKULCGIJVVDYLCEGPEEJXADEUZMFHJFQGNTGHOMWAMWDEPFFNIUVCSHJIBFHRCPGYKZRXAASUFSRLKYNRONZCPBMHYSIOIXCSTIEDWYBNLXMGGFPFLVYGBZWMJHLTQDOIXPTYLNSPUXBSQIOJDIB");
    msg.feature_type = 21U;
    msg.rgb_red = 116U;
    msg.rgb_green = 165U;
    msg.rgb_blue = 42U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.27872984948528123;
    tmp_msg_0.lon = 0.3124824482199223;
    tmp_msg_0.alt = 0.9569556738319774;
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
    msg.setTimeStamp(0.6736425444981852);
    msg.setSource(52124U);
    msg.setSourceEntity(187U);
    msg.setDestination(40654U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.11118566539597374;
    msg.lon = 0.8772512735019761;
    msg.alt = 0.32867620308809076;

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
    msg.setTimeStamp(0.22502449235068633);
    msg.setSource(62123U);
    msg.setSourceEntity(181U);
    msg.setDestination(55735U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.9128165763241766;
    msg.lon = 0.5692812108960571;
    msg.alt = 0.9352285576609933;

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
    msg.setTimeStamp(0.058971663054206425);
    msg.setSource(35228U);
    msg.setSourceEntity(137U);
    msg.setDestination(30260U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.6478503893137659;
    msg.lon = 0.4812709640957611;
    msg.alt = 0.9682697929327813;

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
    msg.setTimeStamp(0.7268865542120538);
    msg.setSource(35230U);
    msg.setSourceEntity(56U);
    msg.setDestination(30554U);
    msg.setDestinationEntity(184U);
    msg.type = 228U;
    msg.id.assign("YAOQKGPMQRTUJCDDPUNBAQEURRZHXTIIXEIYXWVKQCPAOXNFXQUIGDBMMBPHWGFIBECOPSVQRRDSVJZMSVVOXTVOOPOAJUGGQRFDJNIWHQUXZTKOLHLJMFTKXYEEKSSDAJLKCLDFCELJKFDUTHINCPXDFJIBSZAYFORHZRKBLJNNNGTLBHDKAQWSAYRVYHSHTTTCCVYILZBAMSGCIFUNNMCYFEAMEWWPWEWWYZMQGUGPOSRZJMBVZH");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 62760U;
    tmp_msg_0.type = 125U;
    tmp_msg_0.utc_year = 5158U;
    tmp_msg_0.utc_month = 32U;
    tmp_msg_0.utc_day = 252U;
    tmp_msg_0.utc_time = 0.03250471799230059;
    tmp_msg_0.lat = 0.19182615846696305;
    tmp_msg_0.lon = 0.3895847973057327;
    tmp_msg_0.height = 0.4085602356055309;
    tmp_msg_0.satellites = 76U;
    tmp_msg_0.cog = 0.9114616695138532;
    tmp_msg_0.sog = 0.2730207678524341;
    tmp_msg_0.hdop = 0.0796903273154651;
    tmp_msg_0.vdop = 0.6274208773344125;
    tmp_msg_0.hacc = 0.10809880898619717;
    tmp_msg_0.vacc = 0.6651536368831166;
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
    msg.setTimeStamp(0.6760267627686983);
    msg.setSource(53178U);
    msg.setSourceEntity(91U);
    msg.setDestination(45074U);
    msg.setDestinationEntity(56U);
    msg.type = 183U;
    msg.id.assign("KGIEWQBUPAERVEFJNJYGLJYXWBXKWAVQCSXMRVTYONXGMXMDPCFCEALLYFUQZTWEHUHYIWBAPPJIKDMBHFPLEDWUODECQR");
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 169U;
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
    msg.setTimeStamp(0.5009332517041795);
    msg.setSource(12462U);
    msg.setSourceEntity(242U);
    msg.setDestination(44978U);
    msg.setDestinationEntity(66U);
    msg.type = 201U;
    msg.id.assign("NHCVJJFFVVYZRDQETFLVVYOLDIGIZQOASXZTBICXKMPBPKEISLDQATHK");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 14U;
    tmp_msg_0.op = 220U;
    tmp_msg_0.request_id = 55977U;
    tmp_msg_0.plan_id.assign("GEHXXTFGBWDFMIWLETSDTTLRRNDQXSXTDLUOQYZTQHUBWCVMFJIKLGODUSRCNOQJKMGVHODZSPUVMJHPQBSAVNGKPZYFEUAHTOAGOZVNCKSEWEWMYZQGECDFBOOXBTPHYKTSFNCVCGCBJEAKKQESBRNIPPLXNAUDYMILQBRLZMIRKI");
    tmp_msg_0.flags = 10219U;
    IMC::LeakSimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 218U;
    tmp_tmp_msg_0_0.entities.assign("VSIXQHZDAMTZHQLKOZPVLJNSMECCAUBGJXRAMMCEXDWQZEITTYRFNABJPQXNESVKQKCBQNWH");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ABSDQKWRQEQEAKTYZZNULTXBCUEDLOJCTESIHYBLWHYMSINZNTRAGNENZVWMDMRLSLXQDFRSRQFSIONDIWVGZSPPCPYACVRAPQXBRJHPKQWVKWUFQJGJATKUPRUHODITTUCJVOBGHJAXCBOYCMMOEMVPNNHJDREIAWOPVVXXODQLKOMZ");
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
    msg.setTimeStamp(0.5302147973579932);
    msg.setSource(18432U);
    msg.setSourceEntity(122U);
    msg.setDestination(61743U);
    msg.setDestinationEntity(18U);
    msg.localname.assign("EZBFPGHYANKKJVMSSZQXXTSUIJDLKNBSLLHNCQYDLIIUVHRKGLLHTGSUNOPTNQIHJOBJJYJJFIFMUMTCIFHVGEVZUTXYRKAZSNYWAOCERTFVCXTYTBGTLVUROZDCJMRXFQZQGRPHGEAQWZOHUMCCPCNRMPEUJMOBMBEFUEDGRN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BNSDQXLVQSNKOXHWQSIMKSOOYLPNTTEXHXQDHGQUBLCPUCEKKJRGIEBVHBGUKGGAHCPNAWAVQOJMVUEUBILURSLWISOBHGYEXJIDJFNYKVDFWYNHWRCXIDFRWPAZAEZFPZPFBEXSWDRRZLOYPVCHXRTLVXHIGCRNMBJJZQOMZECIFYRQACPOTDBEJKJOJDMUAZURETCGFYUOWKDTMALYKTQA");
    tmp_msg_0.sys_type = 27U;
    tmp_msg_0.owner = 29535U;
    tmp_msg_0.lat = 0.1345561571313576;
    tmp_msg_0.lon = 0.34481200241940946;
    tmp_msg_0.height = 0.2680567976356122;
    tmp_msg_0.services.assign("KXOFBOXBFTMAWQNSMFWWVKRJIMBLFQEWPYULEPGVQGEDYRDOEWRXBJXJJIATHSBVKSQEZTSWGZZCNSKUBCYGGDDMMZPCARHJBUPRILJIFTBKATEYMXUUIN");
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
    msg.setTimeStamp(0.06373112872812237);
    msg.setSource(57964U);
    msg.setSourceEntity(203U);
    msg.setDestination(22866U);
    msg.setDestinationEntity(102U);
    msg.localname.assign("OKKCHXRZAJLORQEGEZBQMPGECQYGMZ");

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
    msg.setTimeStamp(0.9995709922648974);
    msg.setSource(54687U);
    msg.setSourceEntity(78U);
    msg.setDestination(1978U);
    msg.setDestinationEntity(13U);
    msg.localname.assign("GABBAIYZXVGNNWHDDLTCQIHUJWCDFEOFDTUZOACEBRASBAVVRAKZDPAUG");

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
    msg.setTimeStamp(0.098889165798417);
    msg.setSource(40594U);
    msg.setSourceEntity(128U);
    msg.setDestination(38464U);
    msg.setDestinationEntity(237U);
    msg.timeline.assign("ONHPUMPYHOXNSNJIHZXUIIQKRCTADNXQYYGWDWKZOCNUZSFHMTXVBRHNHMBJSGRCEXITBIZAWBRPZZTJKDBWVTAIZEOLKCWWELXXDLNJCLEJQUWQYLGAOHPHMOJGOXYCQGPMRECZOYQBPGVGQVDPERHMJELPVTISJUVOFKVDWMUXTYCKNSFVDXRNNSLOEDVLAZPDRTYIJASFAFBBEVKEMITFFSAFLPWBKWQQLHRZA");
    msg.predicate.assign("QTARGGBOIKNRWYORNAFUZZBMCOPPBGNETDNYFSIWNTXADAQGVUFCTAUSZKRUPMHDIFFBFEKHXBPOKQOTWYSSTYYXISQCEXUNTGEJWHVXALOPHDKGPHPMZFKRDEQFSRJLLKHNIZ");
    msg.attributes.assign("SHZLTRFJRDGLGETCCUBYAYJXEQNFWYBUKPKYXDPNZXIUYIUUFCHTTPQMVMZUJSBBGAQNGRVIOSBZTNQZWVZDNGETSYMFEJSGHWXYQXWRBNHOLNLCSFONWLUB");

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
    msg.setTimeStamp(0.09504827740540733);
    msg.setSource(53828U);
    msg.setSourceEntity(136U);
    msg.setDestination(48333U);
    msg.setDestinationEntity(146U);
    msg.timeline.assign("YSXSYLVHQPNGUTBLKJZQKCKNAOLATYNOJUTWIHDZIJHSVFMFEXTDPDPCDLGXPHDEAKGBUMIPVIWSRUCXEDTOVVQRKJIDHPDKBZFEHGWYNXXNCNFYQWGGRPCBUXTOIPTWGRZXYQQHBHDGVAXOJUOYWMBUVSAKSMUMNOWLIFOQNAUZCVKIITLZWDCETTACENYKXMMZ");
    msg.predicate.assign("BUGZXODUDRHTGJQAMVRZTJDILKAPLJRUWVZPTNWHUSGOVXJWLOGKJVXMOBNUNSPHUSKPSWGIDNMZSLGYECABVONQHWYTOXDYKBKVBZSUNMKLHDLQHEWB");
    msg.attributes.assign("KJDCDAXRTWKIEBOAAPOKGETFSXFXY");

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
    msg.setTimeStamp(0.3960791153752883);
    msg.setSource(9204U);
    msg.setSourceEntity(249U);
    msg.setDestination(18935U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("YEMBUKIKSKBLMSGOBUNYVGENZIZXUUDYWCVRBNNFXSAQKHAEJDTIUNFYWCAOQIFSCRLOAMIVIRAYWKAYSGFOLIYHQGWGVHCDLLBTOXALRPIDZ");
    msg.predicate.assign("PGPUFIEUMVXJVJMNHKMJBGDZLRCRRBVTAOHFSYHYJUWKTXOCASSUHTDGRCISBFFXTDSLLWIJPULQGXKSQIHOANEVMNJFMPZNVWAJOZWMMDQJEQKXAYSRDXFLTIEWQCXZUXIJFGVYNYUGVVEDZXOGTGBSLUHDIDPFRLGYHCMIQAETREHONSPNDLKVNGAYYLCQCEIPK");
    msg.attributes.assign("XXAINIOEFLHDJHGDBYSAMUXFZXGGCOPNPHPROBRDFYLPQGQVPFZHKRSMKMWAZLHINSUJBZBYSYZXSOTMTFUPWILTNZKEXWATUGLNWRPQTQNVKXTEEJMDMBOIUWVUQLEZACVDXJVDYQIG");

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
    msg.setTimeStamp(0.46808621273900464);
    msg.setSource(46156U);
    msg.setSourceEntity(72U);
    msg.setDestination(56275U);
    msg.setDestinationEntity(6U);
    msg.command = 198U;
    msg.goal_id.assign("ZJLQWVDNJPPFRTKUAZDZMEGFTSGUAXVHWCNPYSDWTUREDJWEDLTJLUCXFYMGUFHRMQNLZZBVONAOPCVAMODBDSCOISUIRVBQAWCUXRBMASSVEUKKQNKRCHMYLRIKHENIRGITXDKGYGHNFZLJSYTIPOEPLVGYLLSY");
    msg.goal_xml.assign("MLFMBZKMEGMLNJNFTKUSZFSFZVGQHVDLJRYSNQBTUWOMBMPILRTWKOHLBMNVYICBCOTPRTIXYVBEAVFCHJMCPQZMPJRZHJKWDLCGKSPPNXTGENXUWYYQEURSDKHDISDJDPQOEITVKHBQUNZZFAXWYIZEWYIWAVPLKGCGXCLXGDROFGQZJOXPRRVGSQJBIIFFSLLDIYXAQOKPCGOARUJMWETNSKUABDHEURFWTQNESAODYXJOHAC");

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
    msg.setTimeStamp(0.03551097517929447);
    msg.setSource(10220U);
    msg.setSourceEntity(253U);
    msg.setDestination(16859U);
    msg.setDestinationEntity(232U);
    msg.command = 251U;
    msg.goal_id.assign("TLUEAVHFTXAKOJPRLGMDWZBVCGIBOXXPACZNLUVHTCJACFJPGVMLUNNFDKWSFDFNJLDWKOOGMANHFKTCKEIQSGHWEWHCAFTNJWREDKIWSSIDGHVKVYXYYMRJPAYUFKGYOLMEBDXUGBUSLJEQXDCLVU");
    msg.goal_xml.assign("CLMTXUKADEUWXYUHCAEEUUNXHGVSAZWBCYPVBNANNQHXYPHYSNJPQB");

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
    msg.setTimeStamp(0.35070917489715614);
    msg.setSource(10576U);
    msg.setSourceEntity(234U);
    msg.setDestination(46902U);
    msg.setDestinationEntity(176U);
    msg.command = 213U;
    msg.goal_id.assign("QRYEOFWZWYNYZRZNXBJSXYVUSPJZWMJVAHXCTJQVNCXNKJAKEGWCWEMCBTBTKSHSKBDAECESGXVFNAHYAVHPFBGDRKPUMQXAFKQLMUINCPLFEFDCBLXQLOFWIHQOPKLJFSPCIATFIGUMPRKXAGHBWOQRNIWDCSZNUYUDVPXZMZULGFJLJZLRVRYQBPVDNHMSTHZIPEUNRMESDKOMGSDGWITUOTWAVEOOY");
    msg.goal_xml.assign("QRFEOSGGJZZLCHAPUPMXPPEFCJRQRKYCQSSETNHJJTDTWEDJBWKPOCFXIJGDPZVBMMNHVYKTLLGGBHCCBECWMDMSKZMSWQXUXOERRGUKUGVFBZILLVPXIJFFVPSDNXYMGNHDRWAKEUTNWDVXTVGPAOSKYXENALTMTANRLXOWCNSLYALHS");

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
    msg.setTimeStamp(0.39569086239756734);
    msg.setSource(24310U);
    msg.setSourceEntity(92U);
    msg.setDestination(8081U);
    msg.setDestinationEntity(165U);
    msg.id = 144U;
    msg.width = 16003U;
    msg.height = 62173U;
    msg.widthstep = 1144U;
    msg.channels = 216U;
    msg.depth = 41U;
    msg.finaldata = 52U;
    const char tmp_msg_0[] = {112, -31, -108, 42, 82, -31, -45, 41, -94, -9, 24, 118, -123, 36, -76, 7, 86, 77, 59, 103, 3, -70, -122, -23, 37, 98, 25, 114, 89, -38, 103, -27, 86, -36, -54, -29, 75, -111, -100, -2, -107, 5, 50, -5, -101, -67, 46, -28, 42, 11, 100, -42, -16, -29, 111, 57, 74, -54, 109, -117, 56, -36, 77, -13, -41, -117, -66, -109, -75, 43, 39, 59, -14, 28, 44, 3, 86, -64, -117, 107, -97, -85, 28, 75, -121, -76, -48, -58, 22, 58, 123, -127, 126, -121, -65, -106, 67, -121, -83, 123, 100, 28, 80, -32, 65, 53, 56, 60, -118, 33, 104, -47, 19, 81, -70, -118, 50};
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
    msg.setTimeStamp(0.10112038739657658);
    msg.setSource(31142U);
    msg.setSourceEntity(171U);
    msg.setDestination(1442U);
    msg.setDestinationEntity(89U);
    msg.id = 250U;
    msg.width = 6537U;
    msg.height = 33416U;
    msg.widthstep = 1719U;
    msg.channels = 64U;
    msg.depth = 200U;
    msg.finaldata = 18U;
    const char tmp_msg_0[] = {35, -86, -8, 57, -85, -90, -90, -88, -96, -80, -102, 121, -67, -69, -101, -111, -87, 31, -101, 77, 111, 51, 98, -115, -49, 51, 118, 51, -37, -18, 44, -22, -25, 6, 86, -122, 20, -65, -82, 19, 82, -115, -88, 115, -49, 10, -116, -58, 12, 122, -38, -60, 89, 40, 59, -63, 14, 76, 4, 37, -94, -128, -42, 55, 50, 78, 75, 110, -72, 59, -43, 44, -45, -57, 43, -80, 53, -108, 10, -33, 84, 28, 124, -92, -114, -67, 82, -16, -23, -110, -112, 108, 52, -65, -24, 113, -56, 15, 117, -10, -59, -69, -46, -128, 53, 57, -28, -86, -101, 92, -5, -53, -9, -29, 119, -11, -17, 71, -44, 55, -121, 105, 78, -75, 114, -107, 107, -60, -109, 17, -72, 2, 98, -42, -93, 56, 36, 91, 68, -128, -24, 16, -19, -16, 111, 122, -1, 32, -78, 99, -19, -12, -112, -95, -93, -86, -6, -7, -75, 119, -59, 6, -102, -21, 91, -74, 111, -95, 120, -86, 126, 75, 80, -87, -87, -128, -100, 106, 24, -63, 63, -128, 21, -109, 79, 50, 53, -83, -116, 15, -20, -88, 3, -67, -63, 107, -66, -100, -74, 124, -18, 90, -41, -15, 121, 1, -38, -11, 113, -15, -23, 70, -92, -71, -93, -77, 0, 68, 81, 47, -123, 29, -70, 105, -16, -118, 109, -123, 5, 65, 77};
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
    msg.setTimeStamp(0.10415623980322697);
    msg.setSource(16508U);
    msg.setSourceEntity(95U);
    msg.setDestination(39773U);
    msg.setDestinationEntity(17U);
    msg.id = 154U;
    msg.width = 31990U;
    msg.height = 65213U;
    msg.widthstep = 3820U;
    msg.channels = 86U;
    msg.depth = 87U;
    msg.finaldata = 157U;
    const char tmp_msg_0[] = {-28, -33, 62, 67, -106, 17, -65, -44, -39, 103, -127, 60, 56, 91, 109, -10, -4, 58, -38, 44, -76, 61, -93};
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
    msg.setTimeStamp(0.03269912638538508);
    msg.setSource(56731U);
    msg.setSourceEntity(239U);
    msg.setDestination(27436U);
    msg.setDestinationEntity(15U);
    msg.width = 320U;
    msg.height = 5775U;
    msg.channels = 104U;
    msg.depth = 36U;
    const char tmp_msg_0[] = {88, -52, 74, -17, -125, -9, 1, 33, 71, -6, 113, 38, -56, -108, 119, 45, -125, 35, 82, 108, -87, 108, 0, 37, 97, 59, 43, 120, -68, -50, -128, 86, 108, -63, 24, 57, 49, 108, 64, -105, -53, 50, -104, 15, 72, -108, 117, 116, 74, 48, 81, 22, -117, 62, 100, 101, 78, -48, -22, -2, -54, 19, 85, 4, -51, 85, 25, -124, 119, 48, 46, 105, -99, -92, -41, 68, -73, 115, 96, -83, -4, -20, 100, 81, 51, 106, -18, -10};
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
    msg.setTimeStamp(0.8098004527911833);
    msg.setSource(13435U);
    msg.setSourceEntity(91U);
    msg.setDestination(8078U);
    msg.setDestinationEntity(199U);
    msg.width = 55159U;
    msg.height = 4514U;
    msg.channels = 113U;
    msg.depth = 187U;
    const char tmp_msg_0[] = {56, -57, -55, 35, -2, -64, 49, 11, -111, 67, -2, 108, 28, -67, -46, -53, 57, -40, 13, 78, -69, 28, 101, -76, 73, -86, 3, -76, -122, 61, 73, 74, -25, -101, 38, -125, -95, -95, -84, -80, 12, 97, -50, -33, -10, -72, -36};
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
    msg.setTimeStamp(0.04119380640543069);
    msg.setSource(36793U);
    msg.setSourceEntity(126U);
    msg.setDestination(11128U);
    msg.setDestinationEntity(85U);
    msg.width = 45809U;
    msg.height = 15764U;
    msg.channels = 167U;
    msg.depth = 154U;
    const char tmp_msg_0[] = {-5, -25, -113, -61, 26, 49, -60, 93, 29, 58, -44, 44, -122, -127, -26, -95, -9, 48, 64, -127, -7, 60, -33, -118, 80, 84, 20, 116, 104, 50, -115, -49, 81, 42, -75, -117, -40, 119, -22, 37, 84, 36, 2, -121, -97, -7, -99, 89, -61, 63, 115, 65, 36, 35, -75, -48, 56, 44, -86, -43, -21, -80, 28, 59, 64, 31, -99, 12, -83, -25, 77, 44, 31, -15, 110, 117, -6, 27, 94, 3, 50, 83, 66, 64, -102, 8, 35, 103, -45, -99, -75, -23, -114, 83, 8, -85, -1, 90, 25, -85, -128, 122, -20, -59, -78, -9, -77, -64, -46, -123, 84, 78, 61, 111, 114, -89, -25, 73, 113, 45, 96, -118, 4, -20, -59, -28, -33, -121, 96, 120, -99, 60, -101, 46, -50, -99, 64, 64, 10, -2, -80, 65, 121, 6, 76, -62, 45, 123, 38, -27, -29, 66, -22, -16, 19, -50, -1, 123, -65, -95, 72, 79, 4, -76, 108, 64, 71, -18, 65, -82, -27, -31, 94, -103, -33, -15, 116, 60, -60, -91, 40, 1, -8, 96, -89, -57};
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
    msg.setTimeStamp(0.05585109575245273);
    msg.setSource(4601U);
    msg.setSourceEntity(113U);
    msg.setDestination(9418U);
    msg.setDestinationEntity(151U);
    msg.frameid = 4U;
    const char tmp_msg_0[] = {-79, -4, 118, -67, 22, 13, 31, -107, -108, -61, -121, 126, -105, 77, 118, 53, -12, -69, 47, -13, 48, 16, -42, 96, -76, -86, -108, -53, -88, 32, -111, -16, 27, 89, -63, 57, -14, 91, 7, 8, -124, 111, -47, 88, -97, 55, -73, 79, -71, -13, -10, 77, 11, -21, 22, -60, -35, 83, -111, 101, 115, -7, -56, -26, -96, 97, 4, 106, 97, 24, -6, -54, 125, -89, -4, 111, -115, 31, 81, -87, -5, 53, -51, 66, -89, 0, -12, 89, -3, -79, -24, 64, 2, -30, 43, -76, -113, -82, 80, 125, 62, -7, 110, -8, -104, -14, 40, 34, -111, 64, -81, 33, 55, 96, 84, 93, 43, 15, 79, 16, -17, -84, 71, -16, -26, -84, 2, -112, -17, 78, -92};
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
    msg.setTimeStamp(0.14686564921727863);
    msg.setSource(5986U);
    msg.setSourceEntity(238U);
    msg.setDestination(26687U);
    msg.setDestinationEntity(233U);
    msg.frameid = 215U;
    const char tmp_msg_0[] = {-4, 106, -110, 107, -115, 21, 51, -116, 81, -126, 0, 15, 97, 76, 114, 73, -62, -95, -105, -77, 99, 68, -84, 116, -80, -122, 79, -43, -38, 24, 65, 0, 26, -79, -53, -70, -8, -38, 114, -6, 107, 77, -99, -54, -109, -93, -65, 11, -47, 119, 103, -86, 5, 37, 59, 0, -105, -128, 59, -110, -42, -93, 62, -40, -99, -86, -100, -125, 87, 44, 109, 36, -44, -56, 74, -7, 90, -123, -44, -69, 114, 105, -102, 30, 103};
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
    msg.setTimeStamp(0.8115514356548397);
    msg.setSource(10041U);
    msg.setSourceEntity(26U);
    msg.setDestination(60986U);
    msg.setDestinationEntity(241U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {76, -3, -16, -36, 19, -81, -31, 91, 49, 102, -29, -59, 81, 10, -33, -63, -31, -107, -126, 78, -40, 18, -81, -35, -106, 97, -102, -70, -12, -60, -44, -122, -113, 107, -121, 118, -37, -29, -68, -85, 80, 111, -86, -63, 54, -37, 107, 92, 50, -103, 46, -50, 120, -46, 11, -111, 7, -1, 114, -120, 59, 76, 51, -21, -11, 60, 35, 117, -73, -122, -35, -104, 26, -12, -123, -55, 29, 6, 53, -7, 95, 3, 35, -2, 21, -116, -78, -62, 120, 76, 42, 29, -31, -77, -44, 76, -25, 94, -77, 2, -73, -128, 123, -118, 81, -21, 65, -35, -26, 35, 65, 75, -20, -107, -103, -54, -38, 22, 116, 16, 44, -59, 31, 43, 103, -14, 36, -12, -125, -93, -77, 4, -75, 95, -100, -110, -48, -118, 51, -49, 22, -76, 120, 75, -88, -80, -119, 118, 44, -57, 29, -103, 86, -47, 1, -77, 99, -114, 17, 59, 71, -128, -119, -53, -122, -112, -86, -124, 14, 124, -27, 23, -105, 2, -84, -123, -103, 79, 125, 31, -52, 64, -128, 125, -85, -31, 104, -38, 93, 49, 45, -8, -116, -72, 86, 80, -66, -21, -29, -71, -74};
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
    msg.setTimeStamp(0.8023242025437624);
    msg.setSource(61253U);
    msg.setSourceEntity(28U);
    msg.setDestination(26515U);
    msg.setDestinationEntity(254U);
    msg.fps = 7U;
    msg.quality = 14U;
    msg.reps = 195U;
    msg.tsize = 147U;

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
    msg.setTimeStamp(0.2814003208879243);
    msg.setSource(29222U);
    msg.setSourceEntity(58U);
    msg.setDestination(51784U);
    msg.setDestinationEntity(117U);
    msg.fps = 254U;
    msg.quality = 235U;
    msg.reps = 72U;
    msg.tsize = 160U;

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
    msg.setTimeStamp(0.3743541790763615);
    msg.setSource(11767U);
    msg.setSourceEntity(64U);
    msg.setDestination(11847U);
    msg.setDestinationEntity(195U);
    msg.fps = 51U;
    msg.quality = 142U;
    msg.reps = 16U;
    msg.tsize = 35U;

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
    msg.setTimeStamp(0.07833817607083171);
    msg.setSource(7181U);
    msg.setSourceEntity(233U);
    msg.setDestination(64010U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.7419029764444387;
    msg.lon = 0.06081343196195055;
    msg.depth = 132U;
    msg.speed = 0.8567706874728136;
    msg.psi = 0.879526013879896;

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
    msg.setTimeStamp(0.03846683333439893);
    msg.setSource(17287U);
    msg.setSourceEntity(45U);
    msg.setDestination(28193U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.6311988551017852;
    msg.lon = 0.4811291539417465;
    msg.depth = 243U;
    msg.speed = 0.9051513265957511;
    msg.psi = 0.5853960559516704;

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
    msg.setTimeStamp(0.38666193322477005);
    msg.setSource(40596U);
    msg.setSourceEntity(237U);
    msg.setDestination(40269U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.7093840341667047;
    msg.lon = 0.8844360258008498;
    msg.depth = 249U;
    msg.speed = 0.13280919338465946;
    msg.psi = 0.5367702337547602;

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
    msg.setTimeStamp(0.018052577258081404);
    msg.setSource(25179U);
    msg.setSourceEntity(125U);
    msg.setDestination(28818U);
    msg.setDestinationEntity(120U);
    msg.label.assign("QUTTVIMEJIBQGPBHIDJACDBBJFWZIYEHZYJKGHWLFZQQNRZKOFZWYIYGPUGAABSTDKGZSFXLCHRUYNLPONXQPSVERVTXDBASUPERVFASKOFYSEABEDHJPKOISKKY");
    msg.lat = 0.16303417315445023;
    msg.lon = 0.09963157845052939;
    msg.z = 0.4570062985877552;
    msg.z_units = 85U;
    msg.cog = 0.4962303384637199;
    msg.sog = 0.5184988107098587;

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
    msg.setTimeStamp(0.5894113707241829);
    msg.setSource(36829U);
    msg.setSourceEntity(68U);
    msg.setDestination(2615U);
    msg.setDestinationEntity(179U);
    msg.label.assign("EYHNMAWRTGIAKFIOELTFMZXGDSBKRFUMTANHBEBGUCKJJWPPGEXEODNURJGWVSKAMWVWYXDVRXZVQQCOGONTUILMGPPHQWCZXYVGOVKDOLPVALCNLBWK");
    msg.lat = 0.42006793970387335;
    msg.lon = 0.2871743779483382;
    msg.z = 0.31055349679742195;
    msg.z_units = 169U;
    msg.cog = 0.15343329690245366;
    msg.sog = 0.55015188275971;

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
    msg.setTimeStamp(0.06601583626439611);
    msg.setSource(37194U);
    msg.setSourceEntity(75U);
    msg.setDestination(61135U);
    msg.setDestinationEntity(55U);
    msg.label.assign("UFLVJNUBJZFZOUXMKAGBRDPWRSASFWSSGUTKEVZZPHBTMIWFKCSIDUVOYQFRJNX");
    msg.lat = 0.9045691547521945;
    msg.lon = 0.9766965657117397;
    msg.z = 0.6021810790875348;
    msg.z_units = 111U;
    msg.cog = 0.36977214966640226;
    msg.sog = 0.8472167310928429;

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
    msg.setTimeStamp(0.9515753722244924);
    msg.setSource(16524U);
    msg.setSourceEntity(244U);
    msg.setDestination(46913U);
    msg.setDestinationEntity(214U);
    msg.name.assign("OKJOFYGPJIKVABTMSIKHGYMFXOALRZDZBAMRSZ");
    msg.value.assign("CVMGBONIXPAITYGMFYILIUQNUXUXCHWPKBLTCCPOJTZYSBIAHCZVJKBBNRFQXPTKOWESEWRUWD");

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
    msg.setTimeStamp(0.7254366184793669);
    msg.setSource(58721U);
    msg.setSourceEntity(19U);
    msg.setDestination(2131U);
    msg.setDestinationEntity(184U);
    msg.name.assign("RDUHKXIFBUAOJDSWTCOAYRCPVDNFGHXKFIMGERWCHVDMRLLVPPVANNUALTMPBLZASQOLLFEKNYOZXZBTMXSUBQRVKGQBERHKNF");
    msg.value.assign("VONMJLBCFWSNHLTVSEACDFZSQVFHILLHXZJSWIIJGBXNMATEAZFHUTLBVTXJFXHRYAWKRZAIGYDDCWVWIQWFZJSCYLYEEEJVQJKJZRCNDRQVHUGUXGOTMEABPQVNJRODEDNKSP");

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
    msg.setTimeStamp(0.08365897490068575);
    msg.setSource(49232U);
    msg.setSourceEntity(106U);
    msg.setDestination(21188U);
    msg.setDestinationEntity(38U);
    msg.name.assign("UAAMSWJYQDLNUBOTNSFPRINMUANQJXDMWUXPVGZVDXIQZOGTFNOIRWEZFPJLGRDDCMEBDICRZRSNQXGVVDRYOJEOHNXVYRKJUBBBKIMAVTDJFPVSMAXOJERPWXVYMGSZATWSUBXQFWOCFTKKICBVCLPAQTKIHLZIILMJYLUWZAKGRGNUJHCCSVBFWFFPAXCWKUYROOPOKQBNNHIHADFEWSMLECYTYTGCTLYSLSXTKYZGQJEZGEPU");
    msg.value.assign("IPMAQCCTILAZWHPQWHOASAWYIQPBIJQVJJCVVMSXQKGMSYDOXQXAWWQYYTLZRFUPLRNBCCCLXTXIZDBHSPENGSOZNLGVRKXUGZOQONYRSEJJYBSPQTWEBWYMNEBGYAEVNHTPJCZGLDPBNRSEIIMNTFLEWZMDEZTGGFPJXKMDFAZHPUZRCYJDKDWFFBDRHXOLUUKNLTOSV");

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
    msg.setTimeStamp(0.5917847057880343);
    msg.setSource(41723U);
    msg.setSourceEntity(179U);
    msg.setDestination(20046U);
    msg.setDestinationEntity(232U);
    msg.name.assign("XURLPUCEAFMQNEPMWWBYUAALFSSCDBVYAZMEBAGCPFUSPRPBWKZXPJHLZMJGTCCKOBSTWIYYZSQXINNHQSRJILOWSZBXNKQVEOHAVJVKPDGXRKFFYOTUCGZDXVKGKQIRPFNBKRRE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MFDYZPYZAANMDODGDNFPBLBLXHMWKKKQOHUVTIBWIYUDPCRTSXDRBYUAWENHOJUHWEPQOZJBFSXJYNRXYLISLIRWLHXFLOGWRZBZDBGAVBNUSNHAVQFXQJTFADIT");
    tmp_msg_0.value.assign("CZKKTITAUFSEUIMEKFILNRLA");
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
    msg.setTimeStamp(0.5285721172416631);
    msg.setSource(25834U);
    msg.setSourceEntity(186U);
    msg.setDestination(44448U);
    msg.setDestinationEntity(195U);
    msg.name.assign("BHWAZQOBLUIFDVVOBZYRYFRTFQZWOCCKYWYASSTGODXRSICGFQGQSVCFHKMWVSNJXLAWVQMWBTZUWIQPJYKHRKZUNBCDVLJLUYFDZTAAHJHNAELHNBMNRZAEIJXVIUFRUGSFCTBQEJHMLTAUWOUPPBYMGHTAFPPMZROKPKEXWIUIRTGJNMOQLPPJNRFEMRAMKLJKVCSEEYEBXOQYLGIKDVNKCOXTGDXENLOPXCTIHSBDZPGQJDYNUDCXXZDVHI");

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
    msg.setTimeStamp(0.6114935876195499);
    msg.setSource(49762U);
    msg.setSourceEntity(165U);
    msg.setDestination(13109U);
    msg.setDestinationEntity(219U);
    msg.name.assign("EANSOSDPKZKQMKTKAUIFHTJTLNWQNRIAVROKBRWYERHSNPCNZYBGJVGKXEHHHZYZLQCCRMAJSEJFICONUEYAKGXBKVVTMSXJRALDVPBJMWLNSRRZDDDINQLPMMFYZHGFFESUFLWCBPYUBVGDBHUYOOIGTIVSOWABWUCZUOAMSQXQYHP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZWSVHFYUELJIGHGVRZNEYWRWULTHSBXKDYLAPGTVGEMPAEKCRSIUOYJXXCTMBOMPIVLIVRTEPXNFQJBYTKAEZHWDWCYTRUQOAVLPCPANTDJMMDPMSOXGZFYHOJIZITMUHAFBQTVJFWJLCDFRMNGNQDCQIOKSUOXNUDQEBGZEXFRVWBUSVJPNSZBAWJSJAGSRY");
    tmp_msg_0.value.assign("KNSIUDRDFOYTRARACKPGQPIEHATTNETNVTVWGAINBYGCVDMOXOBIQXZGQCMHFLIFRKJASJQHMHNYCDDEYEJDVRZJIJTATUSOUVZZSSCNKRLSLYXLOGLJE");
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
    msg.setTimeStamp(0.03819044121727044);
    msg.setSource(8552U);
    msg.setSourceEntity(120U);
    msg.setDestination(39033U);
    msg.setDestinationEntity(87U);
    msg.name.assign("BFWHAESZLNSKDERRPNKZPLUJWRJTESBCSKFVEJARLYXIXONDBWQAKMBHOZSMQBYPVDJEAYSPCAVKLKMCPWBQAKVPGRDWQICJPZXDWOTRCQ");
    msg.visibility.assign("XCHOGTIBLSSNUVNUOHQXJVDDESWATMTSWLMYBTDQFZMGRCHCQTWYNVC");
    msg.scope.assign("VUHQTVSCPLNZZGNKMPPFJJKTGUTBNWHUXGZQRXFQCXJPGBPZBHRUFVRJXBSEEVZQTXAGSGBU");

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
    msg.setTimeStamp(0.6673488294671807);
    msg.setSource(4750U);
    msg.setSourceEntity(122U);
    msg.setDestination(37465U);
    msg.setDestinationEntity(5U);
    msg.name.assign("TYUDJREFXHEWLWYGIBBVXSUWKUDIEYAFTJTCJVIUVKRJLTRSZCPWMXXMENKCUGQOLFEHYLRXQFICPOUHQSPGPFGNMCHLVPBQSVZWKSMLFLGEPIZQLHYNOQXYZJQAZVCAHZMBODAJIKGYQIYNHNBWIDBARQABFWNFZCBOBTWDKAHDLCXJGAMKDQLYXFMEKPJRGNKDXKOIMEOZSVZRORBTHJDFOTWNSSNUZJVXMWRPMIHOTVGT");
    msg.visibility.assign("ILZGFRXVHEGJPDRKHBJJHHAFWIXWMPRBHVSWASOTQZFOQRBSNDQWSTVMJYDQXTLYRVVOCUAJGUVMQUUUKDMBCNSKIAIMAPXJYTNVKXSEDBTGFOVIQMYRULCSNXQLLMNFOFFBPVWKNSXRJSLKGWTOIGQIBXDRNTHTDZKLZETARLWBOYEDPFCEHKAYDMOHYUCMGZMKLUEZYANXSNBIYDGGRUCZZCBVAPZEZCHPPEAOUTGJXIHWENPWJYFOIJC");
    msg.scope.assign("ALDMBZGNWBFPRCNHQPIMQVMCYUNDZRVTYVQQXSHDY");

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
    msg.setTimeStamp(0.6311200906082033);
    msg.setSource(47394U);
    msg.setSourceEntity(205U);
    msg.setDestination(30137U);
    msg.setDestinationEntity(80U);
    msg.name.assign("KBEENOOIXFHSHMTARVCDBTUGMSEKBDNAGBGPSCM");
    msg.visibility.assign("ZUJNKDULVPZOSEBONIGCHMLJQBDHWQ");
    msg.scope.assign("SFCJKJDNQHTGZAGETWEILXMRPJHUKNIDUMXFINQCZIRAHUGWIKOABLOEDUYLRDPDLUBDIJWIODCOVCYVGQFBFTERWAXLPMEGSHVDMZLQBXQALXYRVFXPYSMHJQGYPQCKAUXZFHDSYNMKGPWJBYBOWSAJVZZVOANPGTEOSRWTBTVRBRRRKGVWTUYUHQBFTLMFOIZWXEYOUETFNAMHMLC");

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
    msg.setTimeStamp(0.6440545954496015);
    msg.setSource(3978U);
    msg.setSourceEntity(128U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(190U);
    msg.name.assign("QALWWTODIKSCOBJASCBFZIBJZTDYCEDBMLTGBNBAKGFUBPXKYBLJJAOGZNPJIDFFPTIEHPDVYUP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YDXRTUNXNIOMBLTSFXENKASGBDKNUMRDZOHYGHYVEPSRLWUZZQNAYXVOWFTOCCVJNJBZALMSEWRIDEVWARNEYNGWVKMKFMMXCDOGXLCGLWRPVKBFOKTUYGMTIRJZGPJEVWUPKJTOPXHQQFQTJOWMHBUYCAPIVSBSQMLSCDAPFPSLEGNZTDQUHKOAARJHIQJQWVIIJBZBGACHUCDUVLFFZOUNXWSPZDJRCYEITXZ");
    tmp_msg_0.value.assign("VEIOBHLPEWKYFTJXNPRTVCHRJZHVYFTP");
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
    msg.setTimeStamp(0.7343727053156606);
    msg.setSource(59808U);
    msg.setSourceEntity(178U);
    msg.setDestination(7440U);
    msg.setDestinationEntity(137U);
    msg.name.assign("VMVTKWUUYCEGBRTAOPZBPJ");

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
    msg.setTimeStamp(0.16699488064655377);
    msg.setSource(5617U);
    msg.setSourceEntity(14U);
    msg.setDestination(22146U);
    msg.setDestinationEntity(112U);
    msg.name.assign("VHYAWLXDDYGCCVAEUWYRQRZFMTKKZAQRXIOHNNWWXXNBCMBGEFVLQSZMTQEJNYIVDHJNENHCVGIUIYDLPUOAWJWJDLQSBSGJJFSQCOELBXWMZUQPPRSEGMKPTAFHELKFDBQIIZUJZKEJZCSGRIARTPHMNR");

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
    msg.setTimeStamp(0.9060699365108468);
    msg.setSource(57760U);
    msg.setSourceEntity(227U);
    msg.setDestination(32215U);
    msg.setDestinationEntity(46U);
    msg.name.assign("EDSOYMLYZDVSRLLMZCGFRFYSNVLHZWZHDMEMJPOOHWZUGNTLTQCPIDHNIPKCNCARERILNFJCMEKQKPPWXOXKGTJCBNFVZZOWUHGPDBMWQMNFSPXEHBKHOIRTFEKYLNCYSAAWALYYPBGXUFJELUQYRA");

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
    msg.setTimeStamp(0.34200400005889164);
    msg.setSource(55924U);
    msg.setSourceEntity(101U);
    msg.setDestination(21100U);
    msg.setDestinationEntity(92U);
    msg.name.assign("WQUMCGRZWKVABIDRVTWAXOUWDHGBKRDGHNDGBPWKVXQZNDUZHOTPASUHZGEDKJHVYFLAKFBIUHMIWOZVSMWHDDEMNRXMZVLQUMJSNYKOJEQQSUTFCRTQZXEYKCIIAHONBBKJNQJG");

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
    msg.setTimeStamp(0.23842688818782087);
    msg.setSource(40317U);
    msg.setSourceEntity(60U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(214U);
    msg.name.assign("GJTNATYWDYOLOUVIUSFMDXBCSSLIEMHPWCIVRXTQPFTIBSNERKIRWLRMGZSBWETZFXVGTEPWKJOHYAWDQDKAXVKNB");

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
    msg.setTimeStamp(0.3522526662009253);
    msg.setSource(37549U);
    msg.setSourceEntity(167U);
    msg.setDestination(51742U);
    msg.setDestinationEntity(125U);
    msg.timeout = 2258408203U;

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
    msg.setTimeStamp(0.9384475952558977);
    msg.setSource(27623U);
    msg.setSourceEntity(178U);
    msg.setDestination(24473U);
    msg.setDestinationEntity(166U);
    msg.timeout = 2960521973U;

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
    msg.setTimeStamp(0.8388522150622445);
    msg.setSource(59363U);
    msg.setSourceEntity(57U);
    msg.setDestination(10353U);
    msg.setDestinationEntity(125U);
    msg.timeout = 537830736U;

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
    msg.setTimeStamp(0.8443278747185003);
    msg.setSource(39810U);
    msg.setSourceEntity(80U);
    msg.setDestination(42719U);
    msg.setDestinationEntity(252U);
    msg.sessid = 2695033371U;

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
    msg.setTimeStamp(0.2811129123219175);
    msg.setSource(55988U);
    msg.setSourceEntity(235U);
    msg.setDestination(44288U);
    msg.setDestinationEntity(94U);
    msg.sessid = 3650635256U;

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
    msg.setTimeStamp(0.1044491073631173);
    msg.setSource(2101U);
    msg.setSourceEntity(104U);
    msg.setDestination(17510U);
    msg.setDestinationEntity(139U);
    msg.sessid = 3222341337U;

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
    msg.setTimeStamp(0.2936414377750569);
    msg.setSource(41478U);
    msg.setSourceEntity(28U);
    msg.setDestination(53226U);
    msg.setDestinationEntity(93U);
    msg.sessid = 2291962080U;
    msg.messages.assign("KMJQPOCOLCHPXVNMKEPRADTTDELULCRJXXGBSSXBVTSXFHRWIEVYXOZOQNCZMCEBWMGNSHIYFTAFVRXLRJANEVNLMEPTHQTDEEUUMIKDKLSXDLUOLFPZZYUHJGGPGNBHJQCVAZTJWFK");

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
    msg.setTimeStamp(0.13855804876053357);
    msg.setSource(33545U);
    msg.setSourceEntity(194U);
    msg.setDestination(53836U);
    msg.setDestinationEntity(181U);
    msg.sessid = 699142874U;
    msg.messages.assign("VFZRPXFMGMFPHRDPWKSDXVCNTCBTRRSCTKWEPYSECGLNNTMBTPUUZUGNEQSBHAZEFCBQHTAYTBSQYHOJMYZ");

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
    msg.setTimeStamp(0.6570065217819253);
    msg.setSource(8490U);
    msg.setSourceEntity(204U);
    msg.setDestination(43313U);
    msg.setDestinationEntity(63U);
    msg.sessid = 2609624079U;
    msg.messages.assign("TBFGCOEQFGFCJGLYRUCVHOKPGMUZBIAKBTMURHQEMWJLJHYDDSKBIZDBEKHTOOWFDSVJZANSADUGAG");

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
    msg.setTimeStamp(0.9452186584472626);
    msg.setSource(42231U);
    msg.setSourceEntity(29U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(109U);
    msg.sessid = 100917378U;

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
    msg.setTimeStamp(0.1625548466388257);
    msg.setSource(63243U);
    msg.setSourceEntity(113U);
    msg.setDestination(50812U);
    msg.setDestinationEntity(218U);
    msg.sessid = 3209012493U;

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
    msg.setTimeStamp(0.2884552545850775);
    msg.setSource(25889U);
    msg.setSourceEntity(134U);
    msg.setDestination(54601U);
    msg.setDestinationEntity(38U);
    msg.sessid = 2595891477U;

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
    msg.setTimeStamp(0.663794873857453);
    msg.setSource(11603U);
    msg.setSourceEntity(148U);
    msg.setDestination(51618U);
    msg.setDestinationEntity(242U);
    msg.sessid = 1533540728U;
    msg.status = 77U;

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
    msg.setTimeStamp(0.5453296942523451);
    msg.setSource(6776U);
    msg.setSourceEntity(223U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(218U);
    msg.sessid = 1971440806U;
    msg.status = 85U;

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
    msg.setTimeStamp(0.78249194651757);
    msg.setSource(32096U);
    msg.setSourceEntity(76U);
    msg.setDestination(45260U);
    msg.setDestinationEntity(33U);
    msg.sessid = 1981514965U;
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

  return test.getReturnValue();
}
