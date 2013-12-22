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
    msg.setTimeStamp(0.892050300989);
    msg.setSource(54841U);
    msg.setSourceEntity(231U);
    msg.setDestination(12812U);
    msg.setDestinationEntity(11U);
    msg.state = 111U;
    msg.flags = 208U;
    msg.description.assign("MGEGHKKXLMKZIMZFEDQXJGPWIDXLPFVIYVNTLVNXCORBSPHJFADSICHGLUKHESTYJLAGQNPIFKFXSSYOZZFRCTRAWWMJHCNLOCAUBIOAQKMWBSJBGRJASFRYEHGPTEQFNRNQYTDYLKADXBCSTN");

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
    msg.setTimeStamp(0.789091172429);
    msg.setSource(23341U);
    msg.setSourceEntity(105U);
    msg.setDestination(41141U);
    msg.setDestinationEntity(140U);
    msg.state = 93U;
    msg.flags = 225U;
    msg.description.assign("KARPKJQGSUIGAXLCDFNMYLIDYDVRQMWGHXVLMPOYDMGXZSVVYVOFPITRTWJCRZEXBXGEZKJDNVLTFEWQYHRZPBTNA");

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
    msg.setTimeStamp(0.936661035527);
    msg.setSource(2685U);
    msg.setSourceEntity(247U);
    msg.setDestination(54870U);
    msg.setDestinationEntity(43U);
    msg.state = 131U;
    msg.flags = 127U;
    msg.description.assign("LSETFFIJOPPYDSWRKRXNTBMGMIWDKPHAXXAEZGVLRFLCADTOWQEQLZAVVBKTBBHCKLUKCQLEODQCNUGXMISZHWIWADJZSQSQQMCPHTXOYYMHKHFOMGNFRTNZKIBGFLGPLZJVATDULTYGVCNTDGKYSRIWYSRXRE");

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
    msg.setTimeStamp(0.427700925519);
    msg.setSource(35782U);
    msg.setSourceEntity(197U);
    msg.setDestination(30159U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.650167087078);
    msg.setSource(3156U);
    msg.setSourceEntity(78U);
    msg.setDestination(4536U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.557210716082);
    msg.setSource(56961U);
    msg.setSourceEntity(186U);
    msg.setDestination(33466U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.063139384459);
    msg.setSource(48688U);
    msg.setSourceEntity(212U);
    msg.setDestination(50462U);
    msg.setDestinationEntity(73U);
    msg.id = 33U;
    msg.label.assign("ZAKFZFABHATBGPZGZXAXIYPKZZGTOVJDNNGNRQSRBEUABDEGHRPVBLHOOMGDDWWMQXQCIMELHTMOAELOUHJAIWIOBUQTAYHINBVWGLSPKHULKLDUEETMCLNHISVCXPFBXDXSFMWQLOFDOQCVXUJJIBTSXYIPMKJXUGMHJFYIOVYVYPUAVRGWNJPUQYJNY");
    msg.component.assign("AWEHOGXHLPFFLHNACEPCSLZIXYFBAILVQNQSWGJXRROVVBTJWTJKQFA");
    msg.act_time = 55533U;
    msg.deact_time = 24762U;

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
    msg.setTimeStamp(0.66459893431);
    msg.setSource(58643U);
    msg.setSourceEntity(124U);
    msg.setDestination(47567U);
    msg.setDestinationEntity(107U);
    msg.id = 237U;
    msg.label.assign("QQFXCPTADWUWRJGHRFXMUJ");
    msg.component.assign("RWCOTWYZRGEPMCKHUWBMGBJAAYXJLGJRQTTSKOLIISYFDVPAFDWSDRJHCCIQHZVWBJXLLJDPQGKRIVTZAAUSPXXNVNGEUAMGLMNPRMVPT");
    msg.act_time = 44191U;
    msg.deact_time = 25655U;

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
    msg.setTimeStamp(0.0396474323435);
    msg.setSource(5243U);
    msg.setSourceEntity(3U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(137U);
    msg.id = 31U;
    msg.label.assign("MCMFXZHKIGXPSDAZBNPQTKJMTKTMZUBILLBIWITPVJXJVKSQBHTRRLMHKWRYLKABJZNNURDOJZYZAZLFCOPXINFTWDVZBFLCCHAITVSJGHUMWUFLFQVCJMECBDLRXCYLBGUEVGOOUZGFPAMWTSIWFXYEANNIIGAKUNEOCHSWWYRDHERIPUMCCNVDBOVXGQAXUWVODJYVKNDQEDPHRJQABYEOQ");
    msg.component.assign("OXWKXLWZXQUIPVKCIXPMC");
    msg.act_time = 14992U;
    msg.deact_time = 32656U;

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
    msg.setTimeStamp(0.498203869703);
    msg.setSource(41092U);
    msg.setSourceEntity(233U);
    msg.setDestination(58740U);
    msg.setDestinationEntity(248U);
    msg.id = 186U;

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
    msg.setTimeStamp(0.991617295071);
    msg.setSource(10494U);
    msg.setSourceEntity(206U);
    msg.setDestination(48790U);
    msg.setDestinationEntity(49U);
    msg.id = 220U;

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
    msg.setTimeStamp(0.0483168369232);
    msg.setSource(35620U);
    msg.setSourceEntity(240U);
    msg.setDestination(8643U);
    msg.setDestinationEntity(225U);
    msg.id = 135U;

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
    msg.setTimeStamp(0.398454712735);
    msg.setSource(39540U);
    msg.setSourceEntity(197U);
    msg.setDestination(53619U);
    msg.setDestinationEntity(26U);
    msg.op = 68U;
    msg.list.assign("ZKBYSQDREVSZHWWVJGOZAYLSTZVGZGBQYJXSPOLQHZGAVVUISEONAOIHRKIDMFBCHVHPNJRKMZXJHAUTKMWABQBBYJTCXEVPCXZTHQIFVOBQGJRIYLAEQRNFVFRIIDFYDFSOZQQEMUACLLUCLEXRAXQCFDBMFKGXERRLHNGYYYNUDSRPGTNLDODWOTESTMVXZJUUKHCCJFAWMNIBCUWKEWIETCPPWNPF");

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
    msg.setTimeStamp(0.857721596466);
    msg.setSource(38000U);
    msg.setSourceEntity(192U);
    msg.setDestination(31711U);
    msg.setDestinationEntity(180U);
    msg.op = 179U;
    msg.list.assign("HKIATXKMEOGPJRSOXFDREZSZCNVRVPESNZWKWGOOIQWRTFACDUOKVTZJEJSWNFNMXLHLFXBZYKPGQURFDSIATOXVDYDQKFBWRCGTDYVVBELLOBLZTCILZIADXCTSPCQGSIMLKKZQXUFAYMOXBVGSOHUMXJNDWGPVAMLNYAEBRIPUQJPRHNWHBBBUHVSYSJDANMTQJFGRHPJLCQPYAKUXBFNMEEIVWRQTZCUMEEMPDFYGJWJYHYCOWALHHZN");

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
    msg.setTimeStamp(0.887634235);
    msg.setSource(31002U);
    msg.setSourceEntity(36U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(185U);
    msg.op = 1U;
    msg.list.assign("BSZBOMHUGHCAGIHUDQORSZIVVTSKDJHYDQQWQEEJIBQVGEJVARYQAWNFNTGCICLFGNUVBHHYNLGTLBRDLAKKDUSPSIOZYXCJBKEVXVMEYBDJIEWMPNXUAKLKAFOOYPRNVOJJPRNKFDLFMOHHCBKMMMEVPSIXTFXJLUGI");

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
    msg.setTimeStamp(0.276072174618);
    msg.setSource(6455U);
    msg.setSourceEntity(209U);
    msg.setDestination(53209U);
    msg.setDestinationEntity(29U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.0281710839854);
    msg.setSource(1388U);
    msg.setSourceEntity(134U);
    msg.setDestination(36103U);
    msg.setDestinationEntity(99U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.244745488439);
    msg.setSource(59929U);
    msg.setSourceEntity(177U);
    msg.setDestination(23190U);
    msg.setDestinationEntity(170U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.769873202002);
    msg.setSource(38961U);
    msg.setSourceEntity(205U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(205U);
    msg.value = 73U;

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
    msg.setTimeStamp(0.250720530998);
    msg.setSource(46487U);
    msg.setSourceEntity(99U);
    msg.setDestination(14474U);
    msg.setDestinationEntity(35U);
    msg.value = 109U;

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
    msg.setTimeStamp(0.383622269743);
    msg.setSource(33123U);
    msg.setSourceEntity(172U);
    msg.setDestination(29469U);
    msg.setDestinationEntity(206U);
    msg.value = 95U;

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
    msg.setTimeStamp(0.482207327575);
    msg.setSource(42441U);
    msg.setSourceEntity(208U);
    msg.setDestination(52092U);
    msg.setDestinationEntity(76U);
    msg.consumer.assign("CSFDCDVPBLUMGQQJLRYWZXLNRTQASPVCICLLOOMNQRMHSYNEDUWIHOTZCVTTZYRNRFOFHAWPFELSQZAPQEEODENRPJLYNJICYASQOOKIYFZIDOBKZLYFHMTQGVHJIJMZUAGKUZFNUSSHMVWXJUVIPGVUMHDIKMLXPDXAGGUBWBYFTHTKBJBURX");
    msg.message_id = 11252U;

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
    msg.setTimeStamp(0.938093888959);
    msg.setSource(3627U);
    msg.setSourceEntity(240U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(141U);
    msg.consumer.assign("FXQNZZBNCIACUVOBIYSDIRKADHPNFXM");
    msg.message_id = 53622U;

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
    msg.setTimeStamp(0.79313478926);
    msg.setSource(15127U);
    msg.setSourceEntity(74U);
    msg.setDestination(684U);
    msg.setDestinationEntity(142U);
    msg.consumer.assign("KLPPLVILWSDJACXBWCGKMFPAGCNVOWZJTLZCHYBTKQMZTJRKEMNDBRKJGAUQTDXXTWWMFBMLSYXOUBZEDBERBFYDXYPAHSKRJNCVMFNTJCKONQDGMXRQEQGCTGAUKTHGVYPMJIPZPCRHQIYXMSHAEIPRQOVXUELACS");
    msg.message_id = 37013U;

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
    msg.setTimeStamp(0.284611666857);
    msg.setSource(14294U);
    msg.setSourceEntity(108U);
    msg.setDestination(18868U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.515336886422);
    msg.setSource(33087U);
    msg.setSourceEntity(73U);
    msg.setDestination(58885U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.0094824196937);
    msg.setSource(46249U);
    msg.setSourceEntity(97U);
    msg.setDestination(15342U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.107916320401);
    msg.setSource(12980U);
    msg.setSourceEntity(132U);
    msg.setDestination(15583U);
    msg.setDestinationEntity(32U);
    msg.section.assign("BWDBUEORGUCTJMGXIHUKCWMSVEYVLABMVIRRDPUCSNYAQECPHXJUFCQDEBMHFIYODVAJARGZWWUKXUXLYZKPOWBDJSNZWVMPSUWEVZPRFNBFTTZIHTWSZXCXFGSKWAMJMEIOYHLVIEMLHNHJLNJXVRIAISHOKTXTKDBOZCAFRQLJGSQOQZQNZFGEFKTCUHFCRGOGGRVNMDQSZYYKXMVIEAIKPNCLNLTPXY");
    msg.param.assign("QHZVIWEHGPSTLHULNROSQIRTDFXQEHLAZJNVNTHRXWGEEROJBSHOSFAPGYAGDLFBMINACCLBOJOYLEIJQDKCZVEVQKFFSGCRGPPZCAUEFIYVBASLV");
    msg.value.assign("SYEXDUDLIHEIAXWVIIDBMSGEKYOLESBTWFRJNHGUTGRKVVPPNHWCCYADWBFNCTJEPRHXCADMTVNQCVHUOQPLW");

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
    msg.setTimeStamp(0.981077123791);
    msg.setSource(22796U);
    msg.setSourceEntity(189U);
    msg.setDestination(29296U);
    msg.setDestinationEntity(153U);
    msg.section.assign("NPWYTNMZKNUPWHFIFSDICAAVGYLNJJYVXZSVHUESKBLDIPQCLYHHBZATNWTHOVMR");
    msg.param.assign("JWPNKTJIKNIDPBRBBIMDELTJXRBQCYPAWHLYAVYNCSZRITVXLDDIZGSOWUAULHFFBQLCKFQVHRGWUXFIMRHNMMKNCOJRKMTOOKNGFZBKTBHWSODFYESJUDYNBRTOPWVBSCGQRGQAQVOVJTUFVEDKXFUJOYXGUEMRKCLSZCYXVJITKDGXHPLOGQHZFIWBDUWCZCJWMZIYXFNYDT");
    msg.value.assign("AZQIFFNLMXKX");

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
    msg.setTimeStamp(0.643855368043);
    msg.setSource(50028U);
    msg.setSourceEntity(187U);
    msg.setDestination(13272U);
    msg.setDestinationEntity(240U);
    msg.section.assign("OOMSFVZICUISVHAZRHROIZYFZQZEOJLPDHHYFQOAWKUDGNCRGSKEHJVYMVOMMNAAXCALTLBUQDZZIYNLQNPYPLEIQKXYTJGCCSCCGTJFJTXOVJKAKZCEJNMOCEFLPMSKSBEKTGDOBVDTHHVIETLWUXPSFBYIBDJYBDPEBFTCPTDVNXXWXINQNYNWXYAUEHXUMFRUIAZQRJ");
    msg.param.assign("BOOAWIIPIDJKYEEAJQCUBTXPDFDLMCOOHJFNGQURCCMGZMNLXKYBEQZRLNMGRBWNYLMRDGXZCOCWSRBNAMXUUMVWETCHLATDWRMSHFJMBHTKKJAWEBTAYLNYIDQYPRZLQKXVSZTDGGRSBXHTDANFEPSUJUTBE");
    msg.value.assign("OLHFKRVHNYWEWRNSNLPQQWDSQUAZHCGFCVBIRINYYIZOIRKAKHLDOGGGLWJMRERBWZVHTPHETBAPVMZSELYJUTHYLRIZKMSFDYPUKSXXXSRYMXQUJDFLWPAHWTBLBSNTDUQLDNQZCJVJPCQJGRJSUOAWHTVUZJFOFMBABJTNPMORXSMWVFUIEUXIELZDFPKAXQYZKVOVT");

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
    msg.setTimeStamp(0.153700968301);
    msg.setSource(22863U);
    msg.setSourceEntity(229U);
    msg.setDestination(28145U);
    msg.setDestinationEntity(126U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.808399771963);
    msg.setSource(22237U);
    msg.setSourceEntity(203U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(90U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.572721799041);
    msg.setSource(61249U);
    msg.setSourceEntity(141U);
    msg.setDestination(58285U);
    msg.setDestinationEntity(198U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.723567936794);
    msg.setSource(9351U);
    msg.setSourceEntity(194U);
    msg.setDestination(62318U);
    msg.setDestinationEntity(219U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.954654024411);
    msg.setSource(53831U);
    msg.setSourceEntity(31U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(17U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.276885164659);
    msg.setSource(26247U);
    msg.setSourceEntity(21U);
    msg.setDestination(1482U);
    msg.setDestinationEntity(250U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.263144701729);
    msg.setSource(5973U);
    msg.setSourceEntity(253U);
    msg.setDestination(40364U);
    msg.setDestinationEntity(53U);
    msg.total_steps = 149U;
    msg.step_number = 91U;
    msg.step.assign("DJYOSBXCGZOVFQAPQHJLEDIPHTBAEBNWLDDPWFGDBHNJKPBAGMJRIFYMTEXZJTPYYCJZOSHCFCVMIUBSCBCMKQKWEODRIOHTLFRLQKQXEUXZXQNBEOPKTSZMHSAVAIGJ");
    msg.flags = 224U;

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
    msg.setTimeStamp(0.901448293474);
    msg.setSource(33572U);
    msg.setSourceEntity(181U);
    msg.setDestination(3459U);
    msg.setDestinationEntity(145U);
    msg.total_steps = 41U;
    msg.step_number = 14U;
    msg.step.assign("EAWQATYMUCYIMXGWFORJQOGLXEGCYTSBYZUDIQCMKIDEIWZVRNGFDXDBLAUXLOEUNJEYONDOLBRMJKVZIMVJFAJJGKWSRSTOETMLUGOZAIPUJFLWBCUVKBCJCCXEPDZMKIZXNLQOQVSGUYIAZDL");
    msg.flags = 55U;

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
    msg.setTimeStamp(0.120766732626);
    msg.setSource(61073U);
    msg.setSourceEntity(189U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(215U);
    msg.total_steps = 100U;
    msg.step_number = 210U;
    msg.step.assign("AOIJPCXGTNQPGBHURVUMEHKOFGJJSUOPFSDJYHNZAFOSL");
    msg.flags = 247U;

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
    msg.setTimeStamp(0.740112578833);
    msg.setSource(13383U);
    msg.setSourceEntity(85U);
    msg.setDestination(43847U);
    msg.setDestinationEntity(245U);
    msg.state = 117U;
    msg.error.assign("NAWVXFDPHYQKWRFIAJCSDOKNVALGZ");

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
    msg.setTimeStamp(0.187929737966);
    msg.setSource(38214U);
    msg.setSourceEntity(211U);
    msg.setDestination(27357U);
    msg.setDestinationEntity(129U);
    msg.state = 40U;
    msg.error.assign("OTZHJWFSBSCJNZZRJWNUSUFVIQPSXKANQDOELXCCL");

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
    msg.setTimeStamp(0.356721578314);
    msg.setSource(29401U);
    msg.setSourceEntity(33U);
    msg.setDestination(27693U);
    msg.setDestinationEntity(181U);
    msg.state = 73U;
    msg.error.assign("DIUMKJKBEIAPGWCQGZSDWMQMLXSBEDPFSXUTYHPZSORUWDSRFTZFMQEDNCHBXKQNGNKQWRKQRZLHYQORVAFICRPHCBMWFGOGASGMLFZCIWEGLNNUJJHTHTTNWCEVJJDEVICVPIHPXYPJVINO");

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
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.936410637919);
    msg.setSource(39738U);
    msg.setSourceEntity(250U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(82U);
    msg.op = 28U;
    msg.speed_min = 0.72630697128;
    msg.speed_max = 0.450001409798;
    msg.long_accel = 0.986645871215;
    msg.alt_max_msl = 0.213979720768;
    msg.dive_fraction_max = 0.812895128572;
    msg.climb_fraction_max = 0.540343275644;
    msg.bank_max = 0.445193291957;
    msg.p_max = 0.747246252104;
    msg.pitch_min = 0.928137626668;
    msg.pitch_max = 0.958180037047;
    msg.q_max = 0.808297817623;
    msg.g_min = 0.478149319041;
    msg.g_max = 0.754010449984;
    msg.g_lat_max = 0.542999179162;
    msg.rpm_min = 0.747938658021;
    msg.rpm_max = 0.368813323719;
    msg.rpm_rate_max = 0.0173705772254;

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
    msg.setTimeStamp(0.185222386229);
    msg.setSource(41683U);
    msg.setSourceEntity(190U);
    msg.setDestination(47779U);
    msg.setDestinationEntity(195U);
    msg.op = 30U;
    msg.speed_min = 0.487913227432;
    msg.speed_max = 0.698662006649;
    msg.long_accel = 0.166002191465;
    msg.alt_max_msl = 0.765914094426;
    msg.dive_fraction_max = 0.521364508947;
    msg.climb_fraction_max = 0.96312094695;
    msg.bank_max = 0.693226492631;
    msg.p_max = 0.771063700856;
    msg.pitch_min = 0.73213375663;
    msg.pitch_max = 0.0220524585787;
    msg.q_max = 0.215642729656;
    msg.g_min = 0.162849975533;
    msg.g_max = 0.984983212201;
    msg.g_lat_max = 0.939875244413;
    msg.rpm_min = 0.989350345958;
    msg.rpm_max = 0.816097102961;
    msg.rpm_rate_max = 0.794516899256;

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
    msg.setTimeStamp(0.585570188468);
    msg.setSource(46877U);
    msg.setSourceEntity(52U);
    msg.setDestination(52269U);
    msg.setDestinationEntity(113U);
    msg.op = 56U;
    msg.speed_min = 0.717290839897;
    msg.speed_max = 0.238245089487;
    msg.long_accel = 0.145502824981;
    msg.alt_max_msl = 0.856478695149;
    msg.dive_fraction_max = 0.24114641255;
    msg.climb_fraction_max = 0.505242205106;
    msg.bank_max = 0.913548444462;
    msg.p_max = 0.224781409406;
    msg.pitch_min = 0.0506630408758;
    msg.pitch_max = 0.808584247559;
    msg.q_max = 0.852231402521;
    msg.g_min = 0.748516489459;
    msg.g_max = 0.305096249489;
    msg.g_lat_max = 0.9072836198;
    msg.rpm_min = 0.131992284201;
    msg.rpm_max = 0.929393459437;
    msg.rpm_rate_max = 0.786257886774;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.489883081015);
    msg.setSource(55126U);
    msg.setSourceEntity(221U);
    msg.setDestination(64317U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.849961839208;
    msg.lon = 0.677558274027;
    msg.height = 0.864712608259;
    msg.x = 0.679013039358;
    msg.y = 0.687687180686;
    msg.z = 0.743568697828;
    msg.phi = 0.179627501011;
    msg.theta = 0.903117579329;
    msg.psi = 0.304727056598;
    msg.u = 0.647296239601;
    msg.v = 0.622128342448;
    msg.w = 0.310742438209;
    msg.p = 0.131381599455;
    msg.q = 0.817043857493;
    msg.r = 0.221003972656;
    msg.svx = 0.68339002476;
    msg.svy = 0.971621497639;
    msg.svz = 0.0150097962933;

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
    msg.setTimeStamp(0.780212812956);
    msg.setSource(28599U);
    msg.setSourceEntity(59U);
    msg.setDestination(7294U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.097450597998;
    msg.lon = 0.165461910747;
    msg.height = 0.872231228418;
    msg.x = 0.431629214313;
    msg.y = 0.957917347511;
    msg.z = 0.12014956992;
    msg.phi = 0.862410174161;
    msg.theta = 0.21823914294;
    msg.psi = 0.287266730141;
    msg.u = 0.721559518985;
    msg.v = 0.243491042276;
    msg.w = 0.105018204687;
    msg.p = 0.990220940677;
    msg.q = 0.391526204783;
    msg.r = 0.611783867016;
    msg.svx = 0.254821226116;
    msg.svy = 0.133406034344;
    msg.svz = 0.707645611008;

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
    msg.setTimeStamp(0.432605528612);
    msg.setSource(47489U);
    msg.setSourceEntity(64U);
    msg.setDestination(28457U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.525593280244;
    msg.lon = 0.584457338371;
    msg.height = 0.624193332551;
    msg.x = 0.544150789163;
    msg.y = 0.147411929853;
    msg.z = 0.273716943147;
    msg.phi = 0.763576614186;
    msg.theta = 0.674844810369;
    msg.psi = 0.189947032475;
    msg.u = 0.0644583827256;
    msg.v = 0.957768046286;
    msg.w = 0.150620505032;
    msg.p = 0.564626702709;
    msg.q = 0.453178338557;
    msg.r = 0.404383384888;
    msg.svx = 0.372921986375;
    msg.svy = 0.507095751459;
    msg.svz = 0.435287690426;

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
    msg.setTimeStamp(0.535694806871);
    msg.setSource(11462U);
    msg.setSourceEntity(72U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(143U);
    msg.op = 8U;
    msg.entities.assign("XAJDCTHTMAINKOAMVNTNWRCZHUXIUVIEUSQXJPL");

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
    msg.setTimeStamp(0.796873782995);
    msg.setSource(27842U);
    msg.setSourceEntity(86U);
    msg.setDestination(62374U);
    msg.setDestinationEntity(85U);
    msg.op = 141U;
    msg.entities.assign("NDYJCUCUXMNZVQBOCKJYNOBRQXSXXXCALATNTQHGOINFNQSPJHZWWDNDBEWZGSTHLEVBRLKIWGLLLCYQAYFKROSMMRJMEIFSSQWXCQVJZYHOMBEQGTTQBAEKMNPZ");

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
    msg.setTimeStamp(0.643117789818);
    msg.setSource(59054U);
    msg.setSourceEntity(243U);
    msg.setDestination(30424U);
    msg.setDestinationEntity(5U);
    msg.op = 212U;
    msg.entities.assign("EPIRQSJYOVLLIEHZDRGDBFSVFUMHEVTCTEJFDZPDHYQFNJZQAUPUSKWBTXXOJRYYGPG");

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
    msg.setTimeStamp(0.323210144557);
    msg.setSource(5947U);
    msg.setSourceEntity(178U);
    msg.setDestination(53944U);
    msg.setDestinationEntity(131U);
    msg.type = 239U;
    msg.speed = 36512U;
    const char tmp_msg_0[] = {44, 68, -41, -74, 1, 117, -8, -60, 99, -44, 116, 26, 22, -79, 24, 109, -128, -90, -11, -73, 2, 91, 33, 71, 43, -10, 59, 74, 41, 11, 93, -101, 7, -20, 115, 119, -75, -93, -67, 122, -123, 92, -112, 101, 84, -21, 112, -27, -10, -51, -38, 68, -92, -49, 42, 6, 42, -74, 54, 71, -128, 89, 88, -10, -114, 32, 51, 124, 64, 126, -50, -9, -28, 32, -55, -11, 5, 75, 80, -1, 59, -28, 102, -117, 19, 112, -108, 101, -38, -42, 55, -4, -47, 42, 67, 94, -65, 45, 51, 111, -90, 19, 111, 18, -97, 97, -62, -56, -59, 119, 104, 121, -31, -82, -10, -15, 89, 9, -94, 11, 91, 70, 107, 37, -102, -117, -97, -39, -37, -121, -125, 94, 84, -7, -51, -51, -82, -89, -71, 103, -23, 11, 76, -30, 116, 47, -29, 36, 62, -39, 46, -30, 75, 20, -48, 63, 7, 102, 31, -14, -15, 96, 125, 106, -96, 16, 8, -55, 64, 52, 37, -47, 21, -89, -86, -10, -53, -124, -56, -125, 42, -104, -122, 90, 24, 76, -55, -74, -123};
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
    msg.setTimeStamp(0.898524722099);
    msg.setSource(41448U);
    msg.setSourceEntity(177U);
    msg.setDestination(30493U);
    msg.setDestinationEntity(181U);
    msg.type = 219U;
    msg.speed = 35905U;
    const char tmp_msg_0[] = {108, -99, -100, 40, -46, 18, 96, -32, 41, -30, -38, 122, -106, 63, -50, -104, 108, 75, -25};
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
    msg.setTimeStamp(0.556573495585);
    msg.setSource(39642U);
    msg.setSourceEntity(121U);
    msg.setDestination(24502U);
    msg.setDestinationEntity(202U);
    msg.type = 64U;
    msg.speed = 9148U;
    const char tmp_msg_0[] = {-73, -76, -94, 79, -107, 2, -95, -96, 76, -61, 63, 83, 119, -40, 101, -32, 28, 77, 69, 15, 88, 27, -97, 3, -60, 111, 3, -85, -84, -126, -78, 14, -24, 126, -46, 30, 120, -38, -80, -103, -17, -100, -30, 89, 67, 19, 83, -65, -109, 110, 11, -2, 25, 101, 20, 63, 64, 55, 13, -83, -112, -110, -100, -3, 105, 65, -45, 56, -59, -98, 87, -57, 80, 22, -100, 14};
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
    msg.setTimeStamp(0.687755084126);
    msg.setSource(33336U);
    msg.setSourceEntity(104U);
    msg.setDestination(13517U);
    msg.setDestinationEntity(253U);
    msg.op = 84U;
    msg.tas2acc_pgain = 0.790850296048;
    msg.bank2p_pgain = 0.018671249069;

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
    msg.setTimeStamp(0.526194330731);
    msg.setSource(57843U);
    msg.setSourceEntity(138U);
    msg.setDestination(30608U);
    msg.setDestinationEntity(60U);
    msg.op = 90U;
    msg.tas2acc_pgain = 0.478919515475;
    msg.bank2p_pgain = 0.655252073143;

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
    msg.setTimeStamp(0.277585737086);
    msg.setSource(38893U);
    msg.setSourceEntity(51U);
    msg.setDestination(14682U);
    msg.setDestinationEntity(248U);
    msg.op = 189U;
    msg.tas2acc_pgain = 0.977726961201;
    msg.bank2p_pgain = 0.834529541971;

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
    msg.setTimeStamp(0.303678061878);
    msg.setSource(47136U);
    msg.setSourceEntity(208U);
    msg.setDestination(46706U);
    msg.setDestinationEntity(33U);
    msg.available = 1485905884U;
    msg.value = 129U;

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
    msg.setTimeStamp(0.370736315197);
    msg.setSource(48533U);
    msg.setSourceEntity(60U);
    msg.setDestination(13694U);
    msg.setDestinationEntity(107U);
    msg.available = 779183867U;
    msg.value = 24U;

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
    msg.setTimeStamp(0.440148479012);
    msg.setSource(12613U);
    msg.setSourceEntity(219U);
    msg.setDestination(63592U);
    msg.setDestinationEntity(92U);
    msg.available = 2802984916U;
    msg.value = 98U;

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
    msg.setTimeStamp(0.685058511754);
    msg.setSource(40880U);
    msg.setSourceEntity(94U);
    msg.setDestination(31237U);
    msg.setDestinationEntity(164U);
    msg.op = 131U;
    msg.snapshot.assign("XSTMJURYETVCPWGBOFLCTIIVTSW");
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
    msg.setTimeStamp(0.688112121165);
    msg.setSource(14026U);
    msg.setSourceEntity(79U);
    msg.setDestination(8142U);
    msg.setDestinationEntity(237U);
    msg.op = 105U;
    msg.snapshot.assign("XVUMMCAPXNSJKYCZFIRSUUTMOUZIHOQBASKWLRGZQYSWNFKJJW");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.367578498425;
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
    msg.setTimeStamp(0.14246672562);
    msg.setSource(46972U);
    msg.setSourceEntity(19U);
    msg.setDestination(43032U);
    msg.setDestinationEntity(212U);
    msg.op = 228U;
    msg.snapshot.assign("RXHOYIRJVRYXJKWNXHHHZEVJYSNCZQMPBZYHKTPUGPAQCGJKAUUWUOXVZNCLNCMBTTIKJMDKBBLLQTJSWSIDQQDENUIEGMNXVRCMUWUWBKPMOFPFQOTBCCCVAKEBXTYDFHDFIEVWKRAADARYYISNTJDLAGARG");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 31768U;
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
    msg.setTimeStamp(0.65470057753);
    msg.setSource(56485U);
    msg.setSourceEntity(31U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(127U);
    msg.op = 174U;
    msg.name.assign("PQHIWZALEIDPBTSPGLYMKWQXDSHXDJMNTTLCZBOVUZFADEEWCZXGTEEBQNHHYWCOGSJXXKKYJDFQFFZVCKZFVPIDMRWDJHMEDNCAPZPIQXHUINNJKOLXIVIBKTVGEQBLJWFJTMMWFPLJCRTCLRFSLRRAVLVHMTKTPUOGTJWAYASYYOSRAOSXOFHK");

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
    msg.setTimeStamp(0.0700117987972);
    msg.setSource(39607U);
    msg.setSourceEntity(238U);
    msg.setDestination(3306U);
    msg.setDestinationEntity(127U);
    msg.op = 104U;
    msg.name.assign("PVXGNOWUEARRNFPMPGBZHKLEDBQIGERTVIXMGDHWORSJCCWKKDFYVMNKRYIDWPXSEHBDSKPMDVCXJSUFTLIRHFYCLXBJAYLMBAVDNKOOYKFZEGXHOLZYLCATBVFCQAVSPFLZQUTAUTCCMOQHWBDNHGRMEJTLKQSLQHPFJTQGNYKMZVZPEOW");

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
    msg.setTimeStamp(0.60577523303);
    msg.setSource(37769U);
    msg.setSourceEntity(38U);
    msg.setDestination(23327U);
    msg.setDestinationEntity(24U);
    msg.op = 58U;
    msg.name.assign("WBGSEIUNEDUZNZZFDJKEUCMSAAGRGXBVAIFFXYVZOLCFJFFBUJQRAZWZMDONXNHEWXPUWTYXDYMWMITPDHDEDVJVMYSCYPQQGSVXKRUTOWXSCRJQPVVROIBRASVPLLBIRPGNKOMTYUEHPHNZSSINQKKALDRFYRIKAHVOWBOZQHTDLOBOCQBTPYQCJPTKKVYSQIFGZFTJXKEJTFE");

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
    msg.setTimeStamp(0.83379108294);
    msg.setSource(43329U);
    msg.setSourceEntity(140U);
    msg.setDestination(49799U);
    msg.setDestinationEntity(179U);
    msg.type = 0U;
    msg.htime = 0.448066025369;
    msg.context.assign("GHPFQJCCXJEQVPOAXQFRHXPKLVUNYRMLFQZAUALYEPEAYDGHWPSRVBCBUJAERUNZCQIDJZUOR");
    msg.text.assign("WKFUKHLCGNKOGBPNWAVLGRBNZZZOUEMIRIJYLHUXXQESRNSSDRLVMPYDIBPMHTAMRIQXFSYZUKKDRSKIITKPZWHQVVLGXHCMAPQCGCRVWHZGPTPBNHSRXFBEKXOTVAFTFPPUAGXFELBHJCZRQLODYFTLAFOBVGVSW");

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
    msg.setTimeStamp(0.50248490311);
    msg.setSource(36287U);
    msg.setSourceEntity(132U);
    msg.setDestination(1530U);
    msg.setDestinationEntity(61U);
    msg.type = 218U;
    msg.htime = 0.27063204139;
    msg.context.assign("UMWXYUFZNXYSTXZYHUMTIBJTEINHFAQNNSOTRLDAOANMHXYLEBMIGJHYMGKEHLNUXEUCOCLHBZGNVICAHSYBMLCTUFZRDPAGGYAODKWGSKGAVJFGLAORVRHSJDTEEWQSXQRLI");
    msg.text.assign("AITPMIFAFAQYJVZUPGCLAZQJZYGFXKGCJPCFQMFKBDWTEQTFVYOCIXDDLQMBDGMWYIHRSKXGSMAAGNTJRMTBJBFBVGEXJRCUPHSWOXEBWRCOMCHHDPYIYBPENJVXYJWEIZJVYBWVRRDQNPJAYEOCKSZMWNBOAOTHEKYVENWRLZXUSVHRHISFVGLUTAETTLZQFPXKDPLONLQINTOZHCSNDGQCIWDLKOL");

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
    msg.setTimeStamp(0.270185338828);
    msg.setSource(38805U);
    msg.setSourceEntity(19U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(36U);
    msg.type = 187U;
    msg.htime = 0.489111895211;
    msg.context.assign("JULBGPZKPEOIPYWWVLROXJYKLGBHWXFTHNKNRHYEIEBDJONCAJNSSOZKIHKNZHGHYSQQUFVVBTNKMKFLRYJTYKJEHWYUDOTWPLNMAYAXOJPGIBWUUAFFIDMHMGHPUOSZDYGDMS");
    msg.text.assign("EDCKVKJVLRRPLHONFNBQODRZZMCEHWSQBKOGCNGJKLCPJVYCWCFSXBSGELGUVZRJSTZPVDTIJSUQXOEXFHFMWMJAWYSRWYDHVPBZSTLECNUYHAUIGQMETCBPGDVHIMBRKAITPSLZKOMKMADKIZEAUOIYTDWLGNQBHUAWZZJSNERWPVUFHTYTNXLYGROCGMBROSXMFIOIAUQWFJXWYADXPUJENPIHAQKLOIDMXQVNYKQGQUCTFBB");

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
    msg.setTimeStamp(0.306044156833);
    msg.setSource(17798U);
    msg.setSourceEntity(163U);
    msg.setDestination(63264U);
    msg.setDestinationEntity(86U);
    msg.command = 136U;
    msg.htime = 0.135639386162;

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
    msg.setTimeStamp(0.473195428465);
    msg.setSource(60107U);
    msg.setSourceEntity(224U);
    msg.setDestination(27898U);
    msg.setDestinationEntity(97U);
    msg.command = 76U;
    msg.htime = 0.38903752146;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 219U;
    tmp_msg_0.htime = 0.620474422806;
    tmp_msg_0.context.assign("NTIBLBNPNHHMRQRGDGZFEGFRAZHSDFIIHGVOQFOLZGLHTMMQEKXBXLOFTKKTRKTKNUDELDNPAYVXSHLOYXBNJCBMSUOCYXOXJWJJIWRCDNRSEGKLJXAPBABPQPSKTOSYZGHXFD");
    tmp_msg_0.text.assign("DYGEMVOYJIYFWRGGZLVRYUUWBCHCMVJVAZUCFFIPUXPLCUJKCENMPRLSHOBBPNWMSDDUXCOMGPQOPSKNEBAJSIFLQLUVDNZYFVJKNSIPBWKQYXXFGOQWOBXSMLHWFJGOLNZTBDTJVSAOTWKYTHQXODIPEEENNSHRYHZCWQQGTIKCZASXMIYVHTSUMXAGRANEWIJTTMTAJWFGBARRZBMRQ");
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
    msg.setTimeStamp(0.120214649211);
    msg.setSource(39087U);
    msg.setSourceEntity(32U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(145U);
    msg.command = 97U;
    msg.htime = 0.374261863721;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 182U;
    tmp_msg_0.htime = 0.0719125530832;
    tmp_msg_0.context.assign("EYTODQFWLDMSPPWDNZIWIFSYNKNBCUHYTOISMAOHCIQMTOHWUYBXCKVIQHEOCVRZOKPJANESSLGBQNDLDRXKZAIJMFPIZTLODVYFUKZCMNAUXZDXJIYC");
    tmp_msg_0.text.assign("EMAAJGMLVUNYHEHFOGLXZWVVTZNMBWMNUPIKOPGYIRMLRMDLUPYHVFKELCGOPTUOTQLSYRSAOFXOFIQRWXZFNVHOWIJFCCTAIXYIZDRVHNQRZKTBGWGSFSUBDTMNUQGSJZIBHZERUCAEXDNXDSPAFLHTFADPCKSLWWENJLTVLKEITJVCFQEQYSHOWKQDEXVRSJCQGGOKXBIEJYNWAJYKUZMZRAYRTDKQXMPBBCUUWBVPCM");
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
    msg.setTimeStamp(0.132193625237);
    msg.setSource(8396U);
    msg.setSourceEntity(193U);
    msg.setDestination(1726U);
    msg.setDestinationEntity(177U);
    msg.op = 34U;
    msg.file.assign("DKKMEGLLTJWTVQBSXQYSDPHOOJGRDSAYDZOJEWIKSRBVWYZZEBNMMFTANRDTZVGRECFZTBHLZYIKNILIHJWUWZYGPOBRUCLGXKFCFEQAORQUHIDLWUXRUFACMCHIJMSTIFCRVYWCFDERLNAKAMDPMTCTVXOFXBTHIIHVRZMASWVUFOEQMUWZNACVNOKJGDAQLBPVEKSJUSEPOGXDYASBXYQKPHYWUMJHPGILCPNLGOZEXGKXJHNPYX");

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
    msg.setTimeStamp(0.320017896536);
    msg.setSource(23192U);
    msg.setSourceEntity(10U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(192U);
    msg.op = 161U;
    msg.file.assign("HEDQIHKRXZXROIBUJYEUOVCVUZMICYOKCFNBYAMDBAEPQJYENASSOIHULLJTNGXJYLRHGKIOQMSDTWPIRKGQBZFRNIVXGFFZHSUABCUHTTGFWZVDMTAWHFEJSTERUKDMWNTYXAZXTTYBGY");

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
    msg.setTimeStamp(0.6399213144);
    msg.setSource(30058U);
    msg.setSourceEntity(120U);
    msg.setDestination(14959U);
    msg.setDestinationEntity(252U);
    msg.op = 209U;
    msg.file.assign("VHFJVYEJLRTQGKGHXCTOVBJSNSIEOGQQSPPRYACAZMYWBESOFQLZCDDJBXMZZRIYTUWXGEZECBYGZJAUVRBXRJMLCXBKSIAFYORLUYNCWUMPLGJVXMBZIBWAHQAPRXEYMDDMPPGLEPDVBNFHNHHMCISFTKQIQT");

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
    msg.setTimeStamp(0.343296774753);
    msg.setSource(5532U);
    msg.setSourceEntity(137U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(118U);
    msg.op = 142U;
    msg.clock = 0.672536629685;
    msg.tz = 46;

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
    msg.setTimeStamp(0.0980244152874);
    msg.setSource(48596U);
    msg.setSourceEntity(235U);
    msg.setDestination(27376U);
    msg.setDestinationEntity(78U);
    msg.op = 133U;
    msg.clock = 0.461058575383;
    msg.tz = 61;

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
    msg.setTimeStamp(0.2347394681);
    msg.setSource(27859U);
    msg.setSourceEntity(253U);
    msg.setDestination(47945U);
    msg.setDestinationEntity(66U);
    msg.op = 198U;
    msg.clock = 0.0986621630551;
    msg.tz = -43;

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
    msg.setTimeStamp(0.466002918926);
    msg.setSource(13949U);
    msg.setSourceEntity(170U);
    msg.setDestination(54910U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.665443894217);
    msg.setSource(27626U);
    msg.setSourceEntity(101U);
    msg.setDestination(58277U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.0228404326607);
    msg.setSource(11827U);
    msg.setSourceEntity(207U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.642807132272);
    msg.setSource(44498U);
    msg.setSourceEntity(120U);
    msg.setDestination(13629U);
    msg.setDestinationEntity(26U);
    msg.sys_name.assign("WHNPUZGQBEZQUAQLIPWQSTOLBBVYJUAJCIFZAIAFNXFRMQESZSKORDLFYOHHZMUDLHEXWGXDSAFIHYAPLOHNRIYGV");
    msg.sys_type = 252U;
    msg.owner = 1187U;
    msg.lat = 0.198937504172;
    msg.lon = 0.0525589675736;
    msg.height = 0.16218801032;
    msg.services.assign("QCJGUIFVZBHSDBLODRAEZDVOHEEIVUJGAKSSCLNG");

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
    msg.setTimeStamp(0.71344733957);
    msg.setSource(63066U);
    msg.setSourceEntity(186U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(60U);
    msg.sys_name.assign("FJIAPMAWJXDFWMTHMTHHAOGRPKCOCZBNLGFKKORINFDWLFQKVHQCPQNEUOBMPDLGYXBNLKBDTMVTXPYRGOITHXMHNKAXULSZRYFLTSYZHAADPORCEKVNYEQSEVKVSUVQOSCJGHCFVYYEYWZEWZXNLGMUJMUYTWENZQNGMPLKXZAUKAIVBSRQYJTQOBGWJAIMACOLZIRUSIPDCPWVWRNPFWRZQUUBG");
    msg.sys_type = 47U;
    msg.owner = 38643U;
    msg.lat = 0.303423758853;
    msg.lon = 0.254185751781;
    msg.height = 0.206215465894;
    msg.services.assign("MBHACLZBUEZNY");

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
    msg.setTimeStamp(0.603042717576);
    msg.setSource(47173U);
    msg.setSourceEntity(229U);
    msg.setDestination(56702U);
    msg.setDestinationEntity(216U);
    msg.sys_name.assign("GGNXVERBAUJWWZPLKUNQYXTZCJBZKOHMOEVPCZGNUIDAYKGPKFYUVWNSSKMXRTTEBYCCWMR");
    msg.sys_type = 16U;
    msg.owner = 1783U;
    msg.lat = 0.22770368868;
    msg.lon = 0.54727552997;
    msg.height = 0.773913240309;
    msg.services.assign("KAZPWVXUTALYXK");

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
    msg.setTimeStamp(0.880708269746);
    msg.setSource(46175U);
    msg.setSourceEntity(55U);
    msg.setDestination(65313U);
    msg.setDestinationEntity(190U);
    msg.service.assign("YSGBDLNHAQIYLSZHYWSPITJLSBQYLWOHPMZFWEBHZCNNDNYAOYKOPJFPIOQQWOHQNRLZORLNPHOEXRBUMVFRGGONIKCUAFAUGJJKCWUQTGZMLAGKXJDFAEXAVSUBCITTJDQCPSOKHWXUVORVJZVJKMQSYSYLIQDMNQMMUVFHCAIBLEEZCZBKREBDN");
    msg.service_type = 235U;

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
    msg.setTimeStamp(0.378371675095);
    msg.setSource(54661U);
    msg.setSourceEntity(29U);
    msg.setDestination(31571U);
    msg.setDestinationEntity(205U);
    msg.service.assign("NCGXULTHRTTXFNKLJZUPZZNUDZQAAGSTGMIEFAFVOEVNYHVZJEKPEFPMPQYIJXFOPAUDXDIUSBXGFBLHEQKEGLSQWMIGJGFSIGBNRPLCBVOZITYLUKHORXBWRCWHWJWVNSRDQCOTZWCZDVLCQNMSXXZUJRRDJHCUKZYAVSCSDNEHAKKXDITNWDARSBPHECYTKHIMTMYLKHLOQQAIPVAPCDJMYERIQYFQRGBJFO");
    msg.service_type = 202U;

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
    msg.setTimeStamp(0.204900821032);
    msg.setSource(21916U);
    msg.setSourceEntity(226U);
    msg.setDestination(14690U);
    msg.setDestinationEntity(232U);
    msg.service.assign("NXGTJZMZSRVEGYJAQAYCLYQEABUANJBTEGYOUZYWRHJXSLOCMPBXUDTVEDWVMDCUXS");
    msg.service_type = 230U;

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
    msg.setTimeStamp(0.246481921058);
    msg.setSource(7955U);
    msg.setSourceEntity(17U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(235U);
    msg.value = 0.350086740252;

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
    msg.setTimeStamp(0.94840820364);
    msg.setSource(53656U);
    msg.setSourceEntity(166U);
    msg.setDestination(44371U);
    msg.setDestinationEntity(185U);
    msg.value = 0.472450920895;

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
    msg.setTimeStamp(0.757778744234);
    msg.setSource(56496U);
    msg.setSourceEntity(145U);
    msg.setDestination(575U);
    msg.setDestinationEntity(168U);
    msg.value = 0.868026162422;

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
    msg.setTimeStamp(0.515296679102);
    msg.setSource(28237U);
    msg.setSourceEntity(249U);
    msg.setDestination(27533U);
    msg.setDestinationEntity(49U);
    msg.value = 0.321935794172;

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
    msg.setTimeStamp(0.438503131383);
    msg.setSource(47378U);
    msg.setSourceEntity(83U);
    msg.setDestination(1390U);
    msg.setDestinationEntity(207U);
    msg.value = 0.37846289178;

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
    msg.setTimeStamp(0.449539436034);
    msg.setSource(59752U);
    msg.setSourceEntity(134U);
    msg.setDestination(4933U);
    msg.setDestinationEntity(38U);
    msg.value = 0.411733462839;

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
    msg.setTimeStamp(0.505261867476);
    msg.setSource(58856U);
    msg.setSourceEntity(239U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(231U);
    msg.value = 0.537644006324;

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
    msg.setTimeStamp(0.85896726068);
    msg.setSource(47117U);
    msg.setSourceEntity(243U);
    msg.setDestination(48100U);
    msg.setDestinationEntity(164U);
    msg.value = 0.306866628127;

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
    msg.setTimeStamp(0.843736826588);
    msg.setSource(42088U);
    msg.setSourceEntity(214U);
    msg.setDestination(62503U);
    msg.setDestinationEntity(25U);
    msg.value = 0.774781393363;

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
    msg.setTimeStamp(0.270788073371);
    msg.setSource(1763U);
    msg.setSourceEntity(201U);
    msg.setDestination(60148U);
    msg.setDestinationEntity(128U);
    msg.number.assign("GUSBHEZDIERSLUBUCJXBDKWWONNFAWCYVXCAYAGSXSPJIBWEFSQKLBWDZUFPMVHAIBKZZCYZYFVQGVPWHMQOCIIRBSVHUDFTJGPJXQBYPEXKURJXJFPE");
    msg.timeout = 43178U;
    msg.contents.assign("AWVTZTOPXMXLCMHPXBYIHHZNSVRPXQJOPBMZTXFNPWSNOMOITHEJGOMHPUBIOWUTLRYAQSFEVBVOFQDTEGLZLRUAMARKDTLSEBORSCCGNPAYICFAEMKZNGXIVUPAXUGNHHQKOCDRPYBQOGNFPCLZTCSIEDG");

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
    msg.setTimeStamp(0.543848631967);
    msg.setSource(52080U);
    msg.setSourceEntity(251U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(227U);
    msg.number.assign("MSLLPJXDGRFEGZBPBXUWYMMYMUKXUTTFMYZFIAQJGFZULLVCWTNVBOERMPBQAJKRSWBYGRDVPQEDSUVEYYKIBJNAQKEQZKHICRALXDTTZVSFEXCBWXWHHJSKOJNOIDLKLSORWCMRQYMWUFMYISTXGSXQKNNECBUDGECZVRZTNGLDIAHNNNPPPZILUKOYZGEQHSVGAFQ");
    msg.timeout = 39941U;
    msg.contents.assign("TUCPIPWYBERKCZWXVJHOYXRENUAGUEKJSFRTZYHABHHZPONTQYJCLNDLNMSWDJOESILMNHVIWJZWXUKKNCLPPGXTGEQOGTIUMLEPETBMQMRUOSVDAQFTJCCYNUCFOHFFCHTIWMCJGLMKMHNIVIMFBPBRWXVJYFQXRALXDPNNZYBTKWRPH");

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
    msg.setTimeStamp(0.247721709591);
    msg.setSource(50637U);
    msg.setSourceEntity(165U);
    msg.setDestination(49121U);
    msg.setDestinationEntity(33U);
    msg.number.assign("XCPYCRDFICKYKHZHVCTSPLUJK");
    msg.timeout = 27387U;
    msg.contents.assign("CZWTVSEAKELGYHQTOVZPXLNGMYDXENNXKJEVFFLCNNDECBHZOTDGMQJAZFEPQMJCBYCBBWFZFOUAQZMUOTJUKYHLWKWAGPGKDNZXQVTUBYMGRPQAKIPQYFGKWELFHNCSJISRLDNXBMZBTVMVPDTXIHWWVVDMXZCE");

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
    msg.setTimeStamp(0.426900342749);
    msg.setSource(23473U);
    msg.setSourceEntity(57U);
    msg.setDestination(13222U);
    msg.setDestinationEntity(142U);
    msg.seq = 3555995363U;
    msg.destination.assign("FPWFGXAQVNNPLWTEBXVMSMEJNAALMVEUDXPNKDZLBOYCIJYVBKUGLOWNTILIQTRUKBHYHUXCHDDTVCXMIJKDYOLAGSGIWVQIPFJKUAFWOHYWHDFOUANSGYFQLGJTSBWZZREDCROEKEQOGTVLBZCKSXZIZZEOABTISMXZJJRNIHAWU");
    msg.timeout = 58491U;
    const char tmp_msg_0[] = {106, -47, 125, 47, -80, 43, -91, 43, -117, -31, 97, -96, 35, 74, 108, -76, -90, 39, 110, 82, -56, 84, 2, -79, -34, 69, -15, -9, -68, 117, -125, -114, 75, -17, 2, 45, 107, -16, 60, 25, 110, -21, 15, 126, -17, -127, 10, 112, -4, -118, 75, -124, -68, 38, -98, -113, 23, -110, -50, -34, 30, 4, -12, 2, -123, 38, -22, 25, -17, 29, -10, -71, 109, 76, 95, -85, -77, -5, 98, -91, -1, 65, -88, -51, 94, 68, 69, 57, -115, -84, -40, -125, -93, -100, -108, -50, -105, -88, -68, 94, -9, 16, -30, 63, -49, 6, -119, -76, -30, 112, 111, -77, 44, 120, 31, -34, -38, -23, 117, 92, -37, 78, -25, -53, 15, 25, -9, 32, -65, -44, -125, -22, 119, 39, -114, -124, -74, 5, -45, -24, 118, 30, 20, 29, 92, 75, 100, -49, 18, -127, 30, -41, -36, 31, 81, 0, 117, -122, 96, 11, 69, 62, 9, 47, 106, 122, -53, -90, -24, -52, -46, 5, -109, 108, 39, -60, 69, -86, -55, 5, -72, 98, 5, -116, 105, 48, 121, -3, 88, 99, -107, 8, -4, -55, 109, -37, -74, -83, 86, -106, 7, 69, -121, 72, -2, 99, -64, 90, -39, 59, -111, -76, -52, 103, 54, 3, -36, 14, 14, -87, -41, -17, -108, -37, -91, 0, -62, 90, -53, 124, 120, 60, 70, 55, -86, -109, 98, -39, -87, 34, -127, -91, 122, 108, 72, 63, -8, 78, 104, -70, -23, 106};
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
    msg.setTimeStamp(0.0947118038206);
    msg.setSource(13430U);
    msg.setSourceEntity(248U);
    msg.setDestination(17391U);
    msg.setDestinationEntity(132U);
    msg.seq = 2272710593U;
    msg.destination.assign("DUXNLYNGNCSJPLEPLQQWZIUMDJXQKPIUBMBNAAQNTRSCQTQBGOLUYTEQRMRCXOCHHVHWTJFGZSOSIKZNYSHCXXPIEHYFEIKDJEOIRDNAOYOMMZGWMBDRZTUMZRAPNLVQJMTVPCGB");
    msg.timeout = 5663U;
    const char tmp_msg_0[] = {-14, -103, -21, -115, 99, 97, -125, -72, 91, -56, -30, 49, -99, 55, -102, 21, -44, -35, 107, -13, -104, -114, -19, 12, -100, -63, 48, 64, 112, -13, 103, -85, -91, 50, 104, -4, 92, -73, -70, -4, 111, 100, 81, 84, -124, 0, 119, -79, 30, -33, 126, 21, 110, 78, 31, -18, -107, -98, -93, -114, -23, 74, -48, -10, -73, -88, 14, -27, -96, 66, 97, -58, -63, 40, 2, -111, -110, 75, -22, -7, -106, -69, 11, 117, 66, 125, -73, -97, 116, -6, -6, 70, -99, -14, 88, 70, -117, 113, 123, -4, 81, 17, -65, 119, -6, -90, -52, 15, 102, -83, -33, -85, 60, -30, 80, 93, -66, -45, -102, -17, 49, 93, 121, -64, -45, 45, 115, 37, -75, 16, -43, 23, 60, -7, -108, 53, 75, 118, 0, -64, 12, -128, 41, 91, -110, 57, 103, -101, 9, 112, -22, -84, 36, 40, 90, 32, 56, 96, 56, -73, -10, -44, -113, -20, -124, 69, -127, -10, 118, 97, 55, -11, -120, 40};
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
    msg.setTimeStamp(0.0159882482964);
    msg.setSource(28312U);
    msg.setSourceEntity(63U);
    msg.setDestination(33877U);
    msg.setDestinationEntity(35U);
    msg.seq = 831031162U;
    msg.destination.assign("XYGFILCQUPXGSPCFUKAAWHBTUFQDTLRHPXELQIJJYHOMBUAXOHLHYIVXNMCOTHKTERUKZBZUSMTJVENDRXKLLJVDWPSFQJAPHGFFZRWOFEQOVVYNXHZMWEGWQUXSIYWCYDGLJSSYPESROSZFRBAKIBHFZCWQKYK");
    msg.timeout = 49681U;
    const char tmp_msg_0[] = {-51, 42, -102, 123, -79, -53, 125, 76, 102, 11, -73, 87, 95, -5, -100, -92, 21, 29, -36, 115, 85, -106, 83, 1, 78, -106, 29, 112, -7, -10, 84, 126, -92, 99, -71, 56, -112, -29, -8, -50, -17, -17, 1, -17, -67, 56, 4, -105, 113, 55, -116, -46, -40, -67, -61, -87, 3, 106, -9, 50, 41, -50, -72, 126, 37, 52, 122, 118, 21, 13, 8, -40, -101, -69, 5, 91, -7, 88, -43, 15, -12, 21, -65, 40, 6, -31, -78, -69, -22, 50, -56, -18, 32, 4, 25, -76, -119, 14, 75, -31, 19, 110, -57, -8, 120, -76, -127, 119, 57, -89, -118, 57, -18, -28, -70, -5, -26, -16, -50, -68, 87, -72, -67, -91, -17, -12, -9, -72, -44, 100, 26, 92, -32, -100, -15, 107, -76, 17, 9, -123, 64, 6, -39, -76, -9, -108, -2, 12, -35, -8, 13, -101, 23, -2, 66, -127, 29, 96, -49, -75, -52, 32, -115, 2, 30, 110, -65, 35, -63, 64, 9, 78, -73, 15, -76, -52, -41, 119, 68, -125, 58, 113, -104, -21, 116, 62, -95, 42, 38, 98, 50, -99, -16, -27, 112, -4, -116, -11, 50, 101, 95, -88, 1, -6, -110, 83, 48, 99, -7, 30, -120, -111, 98, -127, -114, -7, -73, -19, -72, -88, 124, 18, -106, 40, 110, 71, 39, -25, -16, -57, -60, 85, 4, -31, 72, 12, 6, 72, 8, 96, 1, -72, -26, -22, -41, 117, -124};
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
    msg.setTimeStamp(0.38221327843);
    msg.setSource(21863U);
    msg.setSourceEntity(49U);
    msg.setDestination(8862U);
    msg.setDestinationEntity(227U);
    msg.source.assign("EUUFPOAWWBPUZOOEGBPJJSBBNZHQKLWEVBHTJIYDCUATIXSWMDPVNWEVGFRNSSCPKRCWYQYPJYYIDGHLXDEMLPNKHHIBZOIDUZQLDLXKAVKDKSGDEMLFVTYLZRLQZLXXGLCRYIXMPQIJVRTVMAVYSJKCJNEQNUGJUKIHUWKFCRNACHCNMRFUSGZBFQHGDSXOFGARAJJWACDFTOXMYZBTMTZQNTGWPNQUMKFBVHMHOYOQFAOTBEORR");
    const char tmp_msg_0[] = {-30, -72, 77, -73, 89, -106, -84, -40, 113, -76, 83, -78, 98, 41, 94, -111, 75, -97, -50, 87, 15, 22, 116, 71, 91, -97, -8, 8, 103, 56, -85, 48, 83, 106, 22, -4, -45, 5, 6, 81, -41, -128, -56, 115, -117, 114, -3, -47, 37, 25, 53, 55, -24, -81};
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
    msg.setTimeStamp(0.728412614368);
    msg.setSource(28071U);
    msg.setSourceEntity(208U);
    msg.setDestination(26129U);
    msg.setDestinationEntity(97U);
    msg.source.assign("DMPXTJCVLQDXSLJFZZYXAOPIUQQRNUTJFETSDBGCJSKWPNA");
    const char tmp_msg_0[] = {-20, -19, -100, 10, 126, -56, -69, 84, 115, 81, -106, -10, -69};
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
    msg.setTimeStamp(0.0362313147914);
    msg.setSource(43429U);
    msg.setSourceEntity(23U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(206U);
    msg.source.assign("YBBMUEITLAVQMTLKSGGIGXNFBHCSHUBKSFEDRDILNOTPCWRNPAQZPGLFOEXJNOROWFGDSMMQYXUCMRHRUVZBRYTCSRUKQQLLYCDWLLZBRNDBTUPXSXFGVSAWKVTVPRICWVNADIMJGFA");
    const char tmp_msg_0[] = {85, 66, 10, -116, -67, -103, -1, -116, 3, -77, 106, -33, -48, 85, 78, -20, -88, 50, -96, 113, -5, 14, -45, 19, -123, -81, -34};
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
    msg.setTimeStamp(0.616022984938);
    msg.setSource(51641U);
    msg.setSourceEntity(244U);
    msg.setDestination(751U);
    msg.setDestinationEntity(175U);
    msg.seq = 3518695604U;
    msg.state = 4U;
    msg.error.assign("EFTWDOBJAFOKLCLOSKOYRPXBOMFZDNPE");

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
    msg.setTimeStamp(0.912148494222);
    msg.setSource(1678U);
    msg.setSourceEntity(242U);
    msg.setDestination(10850U);
    msg.setDestinationEntity(182U);
    msg.seq = 623893289U;
    msg.state = 189U;
    msg.error.assign("GIEVNSPIEVQYTBGIT");

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
    msg.setTimeStamp(0.428186069639);
    msg.setSource(52377U);
    msg.setSourceEntity(40U);
    msg.setDestination(4328U);
    msg.setDestinationEntity(97U);
    msg.seq = 2144672753U;
    msg.state = 126U;
    msg.error.assign("CVPBJNILAXLUZZXFCWMKUNBBTVZQERLOKFXIKPWDVFLZIAGGRAPBVTDVTVTVKSPOWZEDEUJXOQGIHYJCGAIFXJDCAMZRAHHJPTSTUSHLKFUGYFYQKBRSYSHBLOJEOCLGUMMHQDNBNEXLUVHAYJRKYWZPDZWZETPYKWRRHNMMDFFNSKETSFJBMWSIUEWPMPXOSHYJIARVDQWBOKMTECWNLRONPGRJXMCGDZCIE");

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
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.144754265504);
    msg.setSource(62973U);
    msg.setSourceEntity(14U);
    msg.setDestination(20531U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("VZYOWCRVQKLDWNQNELNYYMYNRSPBNWPIRRSVFWXOIUVAQQJMGJDYFQFUGDCYVEXFKIQRIMKDZNTQUHLMFHLIOWAOHMOLOGNSBUDIJDXUHBPHXZYZBSLTVEHXIGOQLLHUPEWPGSRTKVEEZGCUMOXISEYWLNEASEKITYXCA");
    msg.links = 1127379828U;

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
    msg.setTimeStamp(0.17979889559);
    msg.setSource(16078U);
    msg.setSourceEntity(143U);
    msg.setDestination(20896U);
    msg.setDestinationEntity(186U);
    msg.group_name.assign("TIJNGDEUHXFTKFWTTOMTXUXMUQZMUAPIQHKQOODDLPSFUIWPZXNQNSVSEMLKAPQKJCHBEESRKFFVMMHXALIZOCTHDUJOESCSUNOVGVVBAYKJBOCRQADRBWQPCZQJD");
    msg.links = 2503462909U;

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
    msg.setTimeStamp(0.429235754878);
    msg.setSource(53010U);
    msg.setSourceEntity(248U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("JJEDRSHFLEAWGZBCCHKCYDDUMSIBYHJTMHSBOVQVEDCQGDOMBPMUBACAFRFSOGUKSPGJTOIQIWIPNYYAJBVHVTWHIYPTEXZCSFZAPLKRZYEYWJGOLVMOQXPUFKYLKTWOVPMZOJZUQWXNBBA");
    msg.links = 2192332979U;

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
    msg.setTimeStamp(0.567572088046);
    msg.setSource(51860U);
    msg.setSourceEntity(158U);
    msg.setDestination(5962U);
    msg.setDestinationEntity(223U);
    msg.groupname.assign("OYCDXGKZGOEDSVTFNBHZCKUSGIYJIXCLGTKSELMDEFTANYQHDJVTPDIIIRQUIRMNFTLSMDWONOYFOSKGJRVJYPPITDMXZEWAHBNKKLAJFDMNWZFKDXHSBSENSEZZPUSOPKCBRALGBQYWNRPWGBOQIHHZMEXWVQYXCLRUIZWTAJCJUAXFQRCVKFPZEALNDLUMQXVVUBAQYHFAWXBCRMHMRCFEOHNGPGHUYILTJUCZSJBVW");
    msg.action = 162U;
    msg.grouplist.assign("JBCMSUYRDLZUZHNPGNTTMLFYDQDTDDVFRNIHFAWYLYECRERTVXNCPECBHPLYUDFWRBIFMLAXLFAKVKNAQRPXCCOXIQJOQRQSURBAQJDHMJIGESIEKSWWOHBZKLSWGFBYNLBRSKVSAGNTGJXFWEMUHOXQMKLVWRUEIPUZCDQQDEGLNTKWVTQJNYIOISGPBWSFYVCVTOKAGMYSZCFZOKGUAHUPOPJGEJJDMXETZHZBOT");

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
    msg.setTimeStamp(0.98221813119);
    msg.setSource(21084U);
    msg.setSourceEntity(0U);
    msg.setDestination(43031U);
    msg.setDestinationEntity(84U);
    msg.groupname.assign("ZDMSYZBOHAMXFKLBAZGIEMVUXGDKSECPWCTIIXOMUQPTRYULAMOYTQSBYBTWUVEJLVWPNNHEIADUXBDLXWVKDBLMCSXZSJMWZUCHCNLGMLHRGXYRKAXQFRNAOJWQIGVTPISBRDCFZQIHDVL");
    msg.action = 145U;
    msg.grouplist.assign("DIBBBDDDAZMYFSKWAMNPWPRLHNYCRPWMVGROKMBSPBKOYNCAXWMAILZTXNFQUVUYJEFETIGJHN");

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
    msg.setTimeStamp(0.490604671579);
    msg.setSource(58997U);
    msg.setSourceEntity(187U);
    msg.setDestination(65501U);
    msg.setDestinationEntity(62U);
    msg.groupname.assign("EYRDLHTKFHVQXJSRGDMBMI");
    msg.action = 253U;
    msg.grouplist.assign("MALVLAZKPHLUHTHPLARJVKJXCSPZSHIVLJFJXNZQMGTXOWRPSDKGVRQUIQWAMFFOCRGUMMDQIEOJHKFMUYPGOJOOCHISRCTDCAPLBEKMXFSWTPXJBUN");

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
    msg.setTimeStamp(0.421269205044);
    msg.setSource(63380U);
    msg.setSourceEntity(184U);
    msg.setDestination(60259U);
    msg.setDestinationEntity(247U);
    msg.id = 209U;
    msg.range = 0.78560943621;

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
    msg.setTimeStamp(0.324657019387);
    msg.setSource(4410U);
    msg.setSourceEntity(100U);
    msg.setDestination(139U);
    msg.setDestinationEntity(215U);
    msg.id = 147U;
    msg.range = 0.547757094154;

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
    msg.setTimeStamp(0.10157682849);
    msg.setSource(52821U);
    msg.setSourceEntity(134U);
    msg.setDestination(1206U);
    msg.setDestinationEntity(125U);
    msg.id = 70U;
    msg.range = 0.291663253024;

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
    msg.setTimeStamp(0.0649067533646);
    msg.setSource(38903U);
    msg.setSourceEntity(19U);
    msg.setDestination(2549U);
    msg.setDestinationEntity(212U);
    msg.tx = 198U;
    msg.channel = 225U;
    msg.timer = 4019U;

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
    msg.setTimeStamp(0.713722954361);
    msg.setSource(38565U);
    msg.setSourceEntity(221U);
    msg.setDestination(24101U);
    msg.setDestinationEntity(195U);
    msg.tx = 61U;
    msg.channel = 85U;
    msg.timer = 58670U;

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
    msg.setTimeStamp(0.428963351698);
    msg.setSource(28389U);
    msg.setSourceEntity(102U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(164U);
    msg.tx = 136U;
    msg.channel = 69U;
    msg.timer = 12200U;

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
    msg.setTimeStamp(0.149227187656);
    msg.setSource(41268U);
    msg.setSourceEntity(23U);
    msg.setDestination(24794U);
    msg.setDestinationEntity(106U);
    msg.beacon.assign("RHVMLAJBQBLOYVHNZNWSUKAMSOIUW");
    msg.lat = 0.810040666344;
    msg.lon = 0.25536341484;
    msg.depth = 0.685498321786;
    msg.query_channel = 38U;
    msg.reply_channel = 58U;
    msg.transponder_delay = 119U;

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
    msg.setTimeStamp(0.382913931498);
    msg.setSource(41148U);
    msg.setSourceEntity(238U);
    msg.setDestination(52002U);
    msg.setDestinationEntity(161U);
    msg.beacon.assign("NTWYFMKERTAWEIANKFUSHPQTJUSKDQFQGKCMYRUHDOTVRKBDEICSDBGJRRQPDLYKVBTYXZAHWRGANEXSEHGOQKDMMMSZYNCNEXEVQNBHWYRXGACJJPHLLELSZXSYBPASUGDSYCXRXKF");
    msg.lat = 0.255372807895;
    msg.lon = 0.365795826524;
    msg.depth = 0.40684324765;
    msg.query_channel = 149U;
    msg.reply_channel = 92U;
    msg.transponder_delay = 243U;

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
    msg.setTimeStamp(0.154215479913);
    msg.setSource(44030U);
    msg.setSourceEntity(179U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(102U);
    msg.beacon.assign("PTIWSEHQZUDNVNRFEVXDWRKOCJDKBXJTBAWBFJRKWZAAQMMQRFKMNBFESSJQCSPMOIUWEFDMJYNDSRJIZVIOGZZHUMOZNCHRNWRLLXPTALWYFDJSWIACZALHNPQBXVABLRHXQEIPVHGEQDYGEJVIZVYVSUGUTGJNMDHLYCGWSLYGOPLQSOKTMRYHDXHIAJAFPHLOQVTBECFASYCBKBOCEYYUEGOUUPXXCQP");
    msg.lat = 0.216677134917;
    msg.lon = 0.816315005292;
    msg.depth = 0.807283297494;
    msg.query_channel = 60U;
    msg.reply_channel = 188U;
    msg.transponder_delay = 186U;

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
    msg.setTimeStamp(0.735255816192);
    msg.setSource(28525U);
    msg.setSourceEntity(232U);
    msg.setDestination(23599U);
    msg.setDestinationEntity(224U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.382898294453);
    msg.setSource(26574U);
    msg.setSourceEntity(89U);
    msg.setDestination(3884U);
    msg.setDestinationEntity(176U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.700210557615);
    msg.setSource(6774U);
    msg.setSourceEntity(106U);
    msg.setDestination(44744U);
    msg.setDestinationEntity(212U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.979499451114);
    msg.setSource(16129U);
    msg.setSourceEntity(212U);
    msg.setDestination(7339U);
    msg.setDestinationEntity(77U);
    msg.address = 155U;

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
    msg.setTimeStamp(0.730718585029);
    msg.setSource(48634U);
    msg.setSourceEntity(165U);
    msg.setDestination(49770U);
    msg.setDestinationEntity(195U);
    msg.address = 217U;

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
    msg.setTimeStamp(0.419717275854);
    msg.setSource(28585U);
    msg.setSourceEntity(122U);
    msg.setDestination(5381U);
    msg.setDestinationEntity(15U);
    msg.address = 19U;

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
    msg.setTimeStamp(0.581149068024);
    msg.setSource(10012U);
    msg.setSourceEntity(178U);
    msg.setDestination(35117U);
    msg.setDestinationEntity(160U);
    msg.address = 74U;
    msg.status = 142U;
    msg.range = 0.396123652276;

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
    msg.setTimeStamp(0.477750773934);
    msg.setSource(55992U);
    msg.setSourceEntity(8U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(24U);
    msg.address = 121U;
    msg.status = 226U;
    msg.range = 0.839328835602;

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
    msg.setTimeStamp(0.560881589733);
    msg.setSource(55246U);
    msg.setSourceEntity(184U);
    msg.setDestination(583U);
    msg.setDestinationEntity(76U);
    msg.address = 123U;
    msg.status = 243U;
    msg.range = 0.844683168327;

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
    msg.setTimeStamp(0.276212537822);
    msg.setSource(60461U);
    msg.setSourceEntity(198U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(224U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0396951377962;
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
    msg.setTimeStamp(0.98391730004);
    msg.setSource(36771U);
    msg.setSourceEntity(160U);
    msg.setDestination(29834U);
    msg.setDestinationEntity(234U);
    IMC::RawImage tmp_msg_0;
    tmp_msg_0.width = 20139U;
    tmp_msg_0.height = 19830U;
    tmp_msg_0.channels = 112U;
    tmp_msg_0.depth = 207U;
    const char tmp_tmp_msg_0_0[] = {-85, -58, -11, 69, -14, -92, -94, 97, -52, 7, 46, 98, -64, -93, 15, 7, -89, -108, 34, -6, -4, -104, 61, -97, 95, 30, 54, 120, -9, 99, 105, 93, 105, -74, -44, -39, 95, 67, 114, -100, -33, -57, 95, 49, -36, -54, 73, -93, 104, 92, 26, -22, -70, 106, 8, -92, 42, -70, -24, -60, -27, 47, 88};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.924688267336);
    msg.setSource(53222U);
    msg.setSourceEntity(240U);
    msg.setDestination(28542U);
    msg.setDestinationEntity(7U);
    IMC::LblDetection tmp_msg_0;
    tmp_msg_0.tx = 174U;
    tmp_msg_0.channel = 229U;
    tmp_msg_0.timer = 31145U;
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
    msg.setTimeStamp(0.599652550857);
    msg.setSource(39685U);
    msg.setSourceEntity(84U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(157U);
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
    msg.setTimeStamp(0.0465626816871);
    msg.setSource(27751U);
    msg.setSourceEntity(24U);
    msg.setDestination(49783U);
    msg.setDestinationEntity(188U);
    msg.enable = 95U;

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
    msg.setTimeStamp(0.746689089778);
    msg.setSource(23955U);
    msg.setSourceEntity(120U);
    msg.setDestination(25987U);
    msg.setDestinationEntity(26U);
    msg.enable = 249U;

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
    msg.setTimeStamp(0.487558877724);
    msg.setSource(10857U);
    msg.setSourceEntity(84U);
    msg.setDestination(45934U);
    msg.setDestinationEntity(242U);
    msg.summary = 85U;
    msg.level = 223U;

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
    msg.setTimeStamp(0.36970454508);
    msg.setSource(63707U);
    msg.setSourceEntity(109U);
    msg.setDestination(2395U);
    msg.setDestinationEntity(206U);
    msg.summary = 27U;
    msg.level = 46U;

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
    msg.setTimeStamp(0.294208234149);
    msg.setSource(1090U);
    msg.setSourceEntity(18U);
    msg.setDestination(33955U);
    msg.setDestinationEntity(193U);
    msg.summary = 200U;
    msg.level = 223U;

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
    msg.setTimeStamp(0.0325964959274);
    msg.setSource(26161U);
    msg.setSourceEntity(10U);
    msg.setDestination(58999U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.104899889215);
    msg.setSource(27779U);
    msg.setSourceEntity(239U);
    msg.setDestination(44043U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.188706161066);
    msg.setSource(6490U);
    msg.setSourceEntity(6U);
    msg.setDestination(37868U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.239179764844);
    msg.setSource(39395U);
    msg.setSourceEntity(15U);
    msg.setDestination(57787U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.456597049804);
    msg.setSource(61647U);
    msg.setSourceEntity(126U);
    msg.setDestination(36236U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.00182398363473);
    msg.setSource(56909U);
    msg.setSourceEntity(237U);
    msg.setDestination(35293U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.844314316217);
    msg.setSource(35870U);
    msg.setSourceEntity(56U);
    msg.setDestination(52351U);
    msg.setDestinationEntity(141U);
    msg.op = 3U;
    msg.system.assign("OXYHBFTHPTXYFQQKSOVHACGMQNKHUPKMDWBDROJFEQSJFOQAZGMKXHEPSXNQVSPXEKSCWUAPLTRUAYTBMJUCVWFOZPHFNWSCLMTAVNRAIIJMOKZOZGBGVTGBQGJZNRBNPOEJXHKXTULLLEGYVNHZNXDUCCIRODCZQMMIYIESMIGVEQHBUVGLDQDSJNTXUYLRXCLTZWPNCEJIFLSJSFEYDWWPHFMDRVRYFEDDIZUGCOAKAYIKZWWYJPRUTABLB");
    msg.range = 0.331420843215;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.499564254139;
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
    msg.setTimeStamp(0.968468613575);
    msg.setSource(438U);
    msg.setSourceEntity(128U);
    msg.setDestination(49604U);
    msg.setDestinationEntity(32U);
    msg.op = 101U;
    msg.system.assign("KKNEZNQLHOQEBBCUCMTPMWCBTOMYFECWABLDNQVDNRQXWEVTWQZFZBAVEMEAHCDOGWGKYKUJCAIGIBGYWVQRZOFSOCIMBTUSEDNVRKHDUHNCOJXUDGMTWJJOFUXMYBTEYECDJFNAXHRFJKAUVGSNPFSNQZLISTHIAPJAKHVH");
    msg.range = 0.126076896046;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 69U;
    tmp_msg_0.reason = 222U;
    tmp_msg_0.value = 0.381077135943;
    tmp_msg_0.timestep = 0.808843887179;
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
    msg.setTimeStamp(0.25516464273);
    msg.setSource(8463U);
    msg.setSourceEntity(171U);
    msg.setDestination(60575U);
    msg.setDestinationEntity(136U);
    msg.op = 77U;
    msg.system.assign("DGCBDISMLQDRZIXQCJIKFQCICZPNLHZTSGMBEKGXNTUCPQGYXDAOLWRVZDZRGSFFWKXNHNNSPXPL");
    msg.range = 0.589015078404;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.892492939428;
    tmp_msg_0.bias_r = 0.100378586443;
    tmp_msg_0.cog = 0.547418394031;
    tmp_msg_0.cyaw = 0.506636064676;
    tmp_msg_0.lbl_rej_level = 0.366878883761;
    tmp_msg_0.gps_rej_level = 0.102628187872;
    tmp_msg_0.custom_x = 0.471332227773;
    tmp_msg_0.custom_y = 0.635298298792;
    tmp_msg_0.custom_z = 0.251627303586;
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
    msg.setTimeStamp(0.120591333);
    msg.setSource(21671U);
    msg.setSourceEntity(0U);
    msg.setDestination(28774U);
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
    msg.setTimeStamp(0.957336450222);
    msg.setSource(17633U);
    msg.setSourceEntity(152U);
    msg.setDestination(214U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.775442648879);
    msg.setSource(64601U);
    msg.setSourceEntity(252U);
    msg.setDestination(32394U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.772165527543);
    msg.setSource(51921U);
    msg.setSourceEntity(107U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(152U);
    msg.list.assign("CARVSDXHRZDWRNXEMJPMBSKAVHBIIUTYPYNQWSKAJFPOSPUYFARFFQKCWIOSELJVCMRHBFNJGJTWXXGMBUZGXZMWBFKZNDMDMKJQGOTEOECCZEXOBTENOVVGDY");

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
    msg.setTimeStamp(0.524948946733);
    msg.setSource(32021U);
    msg.setSourceEntity(161U);
    msg.setDestination(12029U);
    msg.setDestinationEntity(183U);
    msg.list.assign("HEWSZKUTMOZYITMNVAUXFBKBVYFUZSUWGXGRXBGSZWSBWZKESCNLCAKXCFWCNSVDSRRPOHKWOKRTKNPWBEIXMDUZMKFTRQHXUXRPQJQZURPAAXRFOCACRJVYHBNTMSGYAJNPLVQDHQKLMVQVHLMDJQSPIEOQJCDYLNIKPGSCATLOYLGDBMNWILI");

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
    msg.setTimeStamp(0.00575250002582);
    msg.setSource(22773U);
    msg.setSourceEntity(89U);
    msg.setDestination(35279U);
    msg.setDestinationEntity(235U);
    msg.list.assign("CNWFPIUMTOHKGEUQBZ");

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
    msg.setTimeStamp(0.83357381797);
    msg.setSource(10003U);
    msg.setSourceEntity(22U);
    msg.setDestination(51930U);
    msg.setDestinationEntity(7U);
    msg.value = 9451;

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
    msg.setTimeStamp(0.535564336506);
    msg.setSource(6775U);
    msg.setSourceEntity(198U);
    msg.setDestination(50688U);
    msg.setDestinationEntity(122U);
    msg.value = -27199;

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
    msg.setTimeStamp(0.0803856648678);
    msg.setSource(18012U);
    msg.setSourceEntity(130U);
    msg.setDestination(27617U);
    msg.setDestinationEntity(22U);
    msg.value = -23513;

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
    msg.setTimeStamp(0.105527688171);
    msg.setSource(61713U);
    msg.setSourceEntity(39U);
    msg.setDestination(19110U);
    msg.setDestinationEntity(35U);
    msg.value = 0.708509882743;

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
    msg.setTimeStamp(0.427563137761);
    msg.setSource(33435U);
    msg.setSourceEntity(149U);
    msg.setDestination(64999U);
    msg.setDestinationEntity(19U);
    msg.value = 0.667046240482;

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
    msg.setTimeStamp(0.275455365775);
    msg.setSource(43052U);
    msg.setSourceEntity(219U);
    msg.setDestination(28573U);
    msg.setDestinationEntity(37U);
    msg.value = 0.252639966092;

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
    msg.setTimeStamp(0.624113008475);
    msg.setSource(42643U);
    msg.setSourceEntity(81U);
    msg.setDestination(43634U);
    msg.setDestinationEntity(55U);
    msg.value = 0.907907358577;

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
    msg.setTimeStamp(0.313944603702);
    msg.setSource(36303U);
    msg.setSourceEntity(116U);
    msg.setDestination(45989U);
    msg.setDestinationEntity(18U);
    msg.value = 0.886067178865;

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
    msg.setTimeStamp(0.616665611647);
    msg.setSource(32154U);
    msg.setSourceEntity(21U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(121U);
    msg.value = 0.137023227195;

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
    msg.setTimeStamp(0.710915930869);
    msg.setSource(27111U);
    msg.setSourceEntity(123U);
    msg.setDestination(55910U);
    msg.setDestinationEntity(11U);
    msg.validity = 27158U;
    msg.type = 184U;
    msg.utc_year = 11038U;
    msg.utc_month = 17U;
    msg.utc_day = 155U;
    msg.utc_time = 0.890426236434;
    msg.lat = 0.690096001289;
    msg.lon = 0.764568711371;
    msg.height = 0.724961347027;
    msg.satellites = 12U;
    msg.cog = 0.281570063499;
    msg.sog = 0.0666120461279;
    msg.hdop = 0.330259468748;
    msg.vdop = 0.422521190921;
    msg.hacc = 0.626573134588;
    msg.vacc = 0.635434697994;

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
    msg.setTimeStamp(0.523753470938);
    msg.setSource(55790U);
    msg.setSourceEntity(16U);
    msg.setDestination(20588U);
    msg.setDestinationEntity(31U);
    msg.validity = 12732U;
    msg.type = 151U;
    msg.utc_year = 53016U;
    msg.utc_month = 199U;
    msg.utc_day = 81U;
    msg.utc_time = 0.469656981779;
    msg.lat = 0.218801511756;
    msg.lon = 0.498596634284;
    msg.height = 0.423838124411;
    msg.satellites = 134U;
    msg.cog = 0.580252302818;
    msg.sog = 0.356161880793;
    msg.hdop = 0.730919552872;
    msg.vdop = 0.30039781891;
    msg.hacc = 0.735016410084;
    msg.vacc = 0.189433775062;

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
    msg.setTimeStamp(0.696421750805);
    msg.setSource(31759U);
    msg.setSourceEntity(167U);
    msg.setDestination(13188U);
    msg.setDestinationEntity(29U);
    msg.validity = 37117U;
    msg.type = 235U;
    msg.utc_year = 53482U;
    msg.utc_month = 8U;
    msg.utc_day = 178U;
    msg.utc_time = 0.526242358935;
    msg.lat = 0.641876533974;
    msg.lon = 0.969706023528;
    msg.height = 0.0307883750626;
    msg.satellites = 235U;
    msg.cog = 0.530694639216;
    msg.sog = 0.928023756103;
    msg.hdop = 0.761809308148;
    msg.vdop = 0.562081205812;
    msg.hacc = 0.90013697014;
    msg.vacc = 0.814651900531;

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
    msg.setTimeStamp(0.403101531864);
    msg.setSource(64396U);
    msg.setSourceEntity(250U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(137U);
    msg.time = 0.183061748072;
    msg.phi = 0.574445177717;
    msg.theta = 0.271012464954;
    msg.psi = 0.210936448232;
    msg.psi_magnetic = 0.646837752638;

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
    msg.setTimeStamp(0.584416586574);
    msg.setSource(12567U);
    msg.setSourceEntity(122U);
    msg.setDestination(609U);
    msg.setDestinationEntity(189U);
    msg.time = 0.59780631668;
    msg.phi = 0.624768778575;
    msg.theta = 0.743602109368;
    msg.psi = 0.555728765526;
    msg.psi_magnetic = 0.577402806992;

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
    msg.setTimeStamp(0.258474004284);
    msg.setSource(45369U);
    msg.setSourceEntity(140U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(253U);
    msg.time = 0.641966106286;
    msg.phi = 0.875466842692;
    msg.theta = 0.171993169703;
    msg.psi = 0.300807999256;
    msg.psi_magnetic = 0.29096619359;

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
    msg.setTimeStamp(0.936004937812);
    msg.setSource(20257U);
    msg.setSourceEntity(1U);
    msg.setDestination(31920U);
    msg.setDestinationEntity(53U);
    msg.time = 0.0439708326296;
    msg.x = 0.672699873021;
    msg.y = 0.412825203876;
    msg.z = 0.372843471921;
    msg.timestep = 0.291118580451;

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
    msg.setTimeStamp(0.0148869426127);
    msg.setSource(159U);
    msg.setSourceEntity(197U);
    msg.setDestination(15546U);
    msg.setDestinationEntity(196U);
    msg.time = 0.206615241236;
    msg.x = 0.328261866218;
    msg.y = 0.132991736471;
    msg.z = 0.309311053895;
    msg.timestep = 0.0665647769374;

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
    msg.setTimeStamp(0.695534907087);
    msg.setSource(7441U);
    msg.setSourceEntity(20U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(71U);
    msg.time = 0.264120974932;
    msg.x = 0.881480689268;
    msg.y = 0.108600230131;
    msg.z = 0.194475957054;
    msg.timestep = 0.652040066679;

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
    msg.setTimeStamp(0.768004063278);
    msg.setSource(40657U);
    msg.setSourceEntity(54U);
    msg.setDestination(55670U);
    msg.setDestinationEntity(210U);
    msg.time = 0.432677476905;
    msg.x = 0.454485523548;
    msg.y = 0.929866858716;
    msg.z = 0.916698331279;

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
    msg.setTimeStamp(0.48201926015);
    msg.setSource(52624U);
    msg.setSourceEntity(6U);
    msg.setDestination(30806U);
    msg.setDestinationEntity(173U);
    msg.time = 0.958642745014;
    msg.x = 0.898332081556;
    msg.y = 0.894474649256;
    msg.z = 0.517586704717;

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
    msg.setTimeStamp(0.701008608406);
    msg.setSource(59389U);
    msg.setSourceEntity(227U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(158U);
    msg.time = 0.91268211875;
    msg.x = 0.425672167419;
    msg.y = 0.629418548662;
    msg.z = 0.993417320959;

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
    msg.setTimeStamp(0.857485358597);
    msg.setSource(55376U);
    msg.setSourceEntity(187U);
    msg.setDestination(62643U);
    msg.setDestinationEntity(198U);
    msg.time = 0.0956611823628;
    msg.x = 0.485088221348;
    msg.y = 0.845293982454;
    msg.z = 0.0357385162789;

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
    msg.setTimeStamp(0.691001837071);
    msg.setSource(3115U);
    msg.setSourceEntity(171U);
    msg.setDestination(61062U);
    msg.setDestinationEntity(114U);
    msg.time = 0.619643693512;
    msg.x = 0.750789839442;
    msg.y = 0.815729894616;
    msg.z = 0.764140394309;

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
    msg.setTimeStamp(0.655484503166);
    msg.setSource(42388U);
    msg.setSourceEntity(189U);
    msg.setDestination(16597U);
    msg.setDestinationEntity(88U);
    msg.time = 0.199417590436;
    msg.x = 0.640065897812;
    msg.y = 0.810854749;
    msg.z = 0.718716465404;

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
    msg.setTimeStamp(0.915464224544);
    msg.setSource(34906U);
    msg.setSourceEntity(147U);
    msg.setDestination(17767U);
    msg.setDestinationEntity(250U);
    msg.time = 0.668331671046;
    msg.x = 0.509671665177;
    msg.y = 0.594244594713;
    msg.z = 0.156478660051;

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
    msg.setTimeStamp(0.206721644244);
    msg.setSource(28490U);
    msg.setSourceEntity(210U);
    msg.setDestination(10368U);
    msg.setDestinationEntity(76U);
    msg.time = 0.311919744994;
    msg.x = 0.863448203108;
    msg.y = 0.173765304086;
    msg.z = 0.604568539724;

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
    msg.setTimeStamp(0.728023362063);
    msg.setSource(3705U);
    msg.setSourceEntity(67U);
    msg.setDestination(29454U);
    msg.setDestinationEntity(172U);
    msg.time = 0.490903529916;
    msg.x = 0.0299424160692;
    msg.y = 0.79606573229;
    msg.z = 0.132848729308;

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
    msg.setTimeStamp(0.398607697291);
    msg.setSource(33488U);
    msg.setSourceEntity(1U);
    msg.setDestination(53368U);
    msg.setDestinationEntity(233U);
    msg.validity = 38U;
    msg.x = 0.266749584352;
    msg.y = 0.0307512215542;
    msg.z = 0.766191256211;

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
    msg.setTimeStamp(0.875124692543);
    msg.setSource(31363U);
    msg.setSourceEntity(171U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(220U);
    msg.validity = 226U;
    msg.x = 0.426077351294;
    msg.y = 0.274275365805;
    msg.z = 0.512227933811;

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
    msg.setTimeStamp(0.532649357973);
    msg.setSource(33023U);
    msg.setSourceEntity(243U);
    msg.setDestination(5685U);
    msg.setDestinationEntity(124U);
    msg.validity = 231U;
    msg.x = 0.207332994638;
    msg.y = 0.452946712496;
    msg.z = 0.0644841772003;

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
    msg.setTimeStamp(0.106810971313);
    msg.setSource(11321U);
    msg.setSourceEntity(224U);
    msg.setDestination(13580U);
    msg.setDestinationEntity(24U);
    msg.validity = 213U;
    msg.x = 0.0914072083344;
    msg.y = 0.494346438977;
    msg.z = 0.369831026002;

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
    msg.setTimeStamp(0.55268866666);
    msg.setSource(42716U);
    msg.setSourceEntity(124U);
    msg.setDestination(62143U);
    msg.setDestinationEntity(128U);
    msg.validity = 10U;
    msg.x = 0.880427829136;
    msg.y = 0.0970263089048;
    msg.z = 0.150135477266;

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
    msg.setTimeStamp(0.207810604066);
    msg.setSource(53980U);
    msg.setSourceEntity(253U);
    msg.setDestination(8485U);
    msg.setDestinationEntity(179U);
    msg.validity = 107U;
    msg.x = 0.931816043389;
    msg.y = 0.338460524925;
    msg.z = 0.832086837821;

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
    msg.setTimeStamp(0.574460099506);
    msg.setSource(37654U);
    msg.setSourceEntity(122U);
    msg.setDestination(36674U);
    msg.setDestinationEntity(133U);
    msg.time = 0.276754600944;
    msg.x = 0.687540578127;
    msg.y = 0.848472310604;
    msg.z = 0.147413638964;

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
    msg.setTimeStamp(0.407289279771);
    msg.setSource(35924U);
    msg.setSourceEntity(0U);
    msg.setDestination(24660U);
    msg.setDestinationEntity(155U);
    msg.time = 0.902106314592;
    msg.x = 0.00612448113852;
    msg.y = 0.254255787441;
    msg.z = 0.198998133082;

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
    msg.setTimeStamp(0.984829890242);
    msg.setSource(767U);
    msg.setSourceEntity(16U);
    msg.setDestination(2149U);
    msg.setDestinationEntity(38U);
    msg.time = 0.499588276486;
    msg.x = 0.818724386276;
    msg.y = 0.460176930466;
    msg.z = 0.797216044643;

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
    msg.setTimeStamp(0.507521370874);
    msg.setSource(63951U);
    msg.setSourceEntity(101U);
    msg.setDestination(51148U);
    msg.setDestinationEntity(28U);
    msg.validity = 174U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.549190927782;
    tmp_msg_0.beam_height = 0.964057945126;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.646127827462;

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
    msg.setTimeStamp(0.479027752239);
    msg.setSource(13610U);
    msg.setSourceEntity(96U);
    msg.setDestination(11990U);
    msg.setDestinationEntity(192U);
    msg.validity = 142U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.153817442759;
    tmp_msg_0.y = 0.96149132032;
    tmp_msg_0.z = 0.782937130445;
    tmp_msg_0.phi = 0.158383884869;
    tmp_msg_0.theta = 0.405268427746;
    tmp_msg_0.psi = 0.175511018491;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.125391192176;

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
    msg.setTimeStamp(0.163894574182);
    msg.setSource(49951U);
    msg.setSourceEntity(65U);
    msg.setDestination(9813U);
    msg.setDestinationEntity(162U);
    msg.validity = 213U;
    msg.value = 0.262497865869;

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
    msg.setTimeStamp(0.347814010019);
    msg.setSource(32065U);
    msg.setSourceEntity(4U);
    msg.setDestination(53890U);
    msg.setDestinationEntity(155U);
    msg.value = 0.255200440461;

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
    msg.setTimeStamp(0.173952962937);
    msg.setSource(44744U);
    msg.setSourceEntity(87U);
    msg.setDestination(64496U);
    msg.setDestinationEntity(219U);
    msg.value = 0.87375157573;

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
    msg.setTimeStamp(0.863508652987);
    msg.setSource(11176U);
    msg.setSourceEntity(172U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(159U);
    msg.value = 0.207498888947;

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
    msg.setTimeStamp(0.915578886824);
    msg.setSource(51631U);
    msg.setSourceEntity(101U);
    msg.setDestination(34070U);
    msg.setDestinationEntity(151U);
    msg.value = 0.809094600618;

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
    msg.setTimeStamp(0.131277636805);
    msg.setSource(6991U);
    msg.setSourceEntity(166U);
    msg.setDestination(39780U);
    msg.setDestinationEntity(177U);
    msg.value = 0.411097382613;

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
    msg.setTimeStamp(0.298262078662);
    msg.setSource(55493U);
    msg.setSourceEntity(191U);
    msg.setDestination(9325U);
    msg.setDestinationEntity(197U);
    msg.value = 0.110130656942;

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
    msg.setTimeStamp(0.175210633662);
    msg.setSource(65201U);
    msg.setSourceEntity(4U);
    msg.setDestination(46102U);
    msg.setDestinationEntity(121U);
    msg.value = 0.883157437309;

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
    msg.setTimeStamp(0.230248266821);
    msg.setSource(17106U);
    msg.setSourceEntity(64U);
    msg.setDestination(33696U);
    msg.setDestinationEntity(26U);
    msg.value = 0.548170581461;

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
    msg.setTimeStamp(0.752815409208);
    msg.setSource(47970U);
    msg.setSourceEntity(245U);
    msg.setDestination(59303U);
    msg.setDestinationEntity(222U);
    msg.value = 0.949915801044;

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
    msg.setTimeStamp(0.682544486387);
    msg.setSource(61967U);
    msg.setSourceEntity(30U);
    msg.setDestination(34909U);
    msg.setDestinationEntity(36U);
    msg.value = 0.907232271611;

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
    msg.setTimeStamp(0.62891038277);
    msg.setSource(11627U);
    msg.setSourceEntity(4U);
    msg.setDestination(51506U);
    msg.setDestinationEntity(105U);
    msg.value = 0.359211763856;

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
    msg.setTimeStamp(0.0765786142711);
    msg.setSource(54683U);
    msg.setSourceEntity(131U);
    msg.setDestination(20316U);
    msg.setDestinationEntity(200U);
    msg.value = 0.358822828766;

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
    msg.setTimeStamp(0.656062276157);
    msg.setSource(31052U);
    msg.setSourceEntity(195U);
    msg.setDestination(27444U);
    msg.setDestinationEntity(67U);
    msg.value = 0.696725517832;

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
    msg.setTimeStamp(0.724890599581);
    msg.setSource(25927U);
    msg.setSourceEntity(39U);
    msg.setDestination(8111U);
    msg.setDestinationEntity(158U);
    msg.value = 0.367741629113;

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
    msg.setTimeStamp(0.801701203183);
    msg.setSource(6002U);
    msg.setSourceEntity(200U);
    msg.setDestination(21886U);
    msg.setDestinationEntity(149U);
    msg.value = 0.0847299052449;

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
    msg.setTimeStamp(0.602395445061);
    msg.setSource(58083U);
    msg.setSourceEntity(166U);
    msg.setDestination(8879U);
    msg.setDestinationEntity(114U);
    msg.value = 0.625289204578;

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
    msg.setTimeStamp(0.560251948228);
    msg.setSource(34593U);
    msg.setSourceEntity(34U);
    msg.setDestination(62201U);
    msg.setDestinationEntity(149U);
    msg.value = 0.977455603041;

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
    msg.setTimeStamp(0.410962378226);
    msg.setSource(46601U);
    msg.setSourceEntity(148U);
    msg.setDestination(8902U);
    msg.setDestinationEntity(51U);
    msg.value = 0.738061742197;

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
    msg.setTimeStamp(0.541504661515);
    msg.setSource(46956U);
    msg.setSourceEntity(71U);
    msg.setDestination(44927U);
    msg.setDestinationEntity(51U);
    msg.value = 0.0585800819136;

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
    msg.setTimeStamp(0.71483124693);
    msg.setSource(64678U);
    msg.setSourceEntity(7U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(147U);
    msg.value = 0.174346134541;

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
    msg.setTimeStamp(0.476385542852);
    msg.setSource(11120U);
    msg.setSourceEntity(83U);
    msg.setDestination(60554U);
    msg.setDestinationEntity(74U);
    msg.value = 0.276910575446;

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
    msg.setTimeStamp(0.473344738331);
    msg.setSource(12884U);
    msg.setSourceEntity(109U);
    msg.setDestination(53331U);
    msg.setDestinationEntity(252U);
    msg.value = 0.885454169684;

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
    msg.setTimeStamp(0.941643087772);
    msg.setSource(9491U);
    msg.setSourceEntity(201U);
    msg.setDestination(42547U);
    msg.setDestinationEntity(200U);
    msg.value = 0.575531099474;

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
    msg.setTimeStamp(0.0114427699321);
    msg.setSource(35667U);
    msg.setSourceEntity(232U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(52U);
    msg.value = 0.500830734624;

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
    msg.setTimeStamp(0.198639622897);
    msg.setSource(49485U);
    msg.setSourceEntity(73U);
    msg.setDestination(7021U);
    msg.setDestinationEntity(17U);
    msg.direction = 0.447697806908;
    msg.speed = 0.498484584718;

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
    msg.setTimeStamp(0.740991748078);
    msg.setSource(8524U);
    msg.setSourceEntity(253U);
    msg.setDestination(24235U);
    msg.setDestinationEntity(71U);
    msg.direction = 0.0102793781869;
    msg.speed = 0.115411395114;

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
    msg.setTimeStamp(0.387203386477);
    msg.setSource(52504U);
    msg.setSourceEntity(7U);
    msg.setDestination(51773U);
    msg.setDestinationEntity(143U);
    msg.direction = 0.630025282167;
    msg.speed = 0.866620268027;

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
    msg.setTimeStamp(0.296285062325);
    msg.setSource(16114U);
    msg.setSourceEntity(200U);
    msg.setDestination(34228U);
    msg.setDestinationEntity(186U);
    msg.value = 0.809411516077;

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
    msg.setTimeStamp(0.450260337991);
    msg.setSource(32821U);
    msg.setSourceEntity(80U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(92U);
    msg.value = 0.158289661484;

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
    msg.setTimeStamp(0.425683859343);
    msg.setSource(33084U);
    msg.setSourceEntity(87U);
    msg.setDestination(37472U);
    msg.setDestinationEntity(29U);
    msg.value = 0.925857478421;

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
    msg.setTimeStamp(0.817007855818);
    msg.setSource(22497U);
    msg.setSourceEntity(59U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(135U);
    msg.value.assign("EVBMFWGXVNYWHBYYTMJIOLXCROPGCWMWVJIIGTGNRWHGTSAAFFOGIUKQLCQOBURRAYMDZBEZLDCQRMSZUNPXFJZXCHRXTLNKDAPZDKDBHJWBHBTMBEWUMVHZXYAPWJXREIZRNKJAFZFFOFVEVLEKTKSPQVNJSDBSOPCCNVCLPIUYXCHPCZUIEQNXIPK");

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
    msg.setTimeStamp(0.561466839571);
    msg.setSource(21224U);
    msg.setSourceEntity(33U);
    msg.setDestination(61509U);
    msg.setDestinationEntity(230U);
    msg.value.assign("EEZWYJDEWFEHLNNXEMJGBJFTINBRGDBIVGTLOHMPLIYUSUAWJHCQIXKPQKKCFALCKEJIASUPZRTKMXXYSLDOEDGZJPTRCHYCTVPXUMHNAGRLMOLIKDCXBTJNMTGPAUAWNYZMCV");

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
    msg.setTimeStamp(0.266860429976);
    msg.setSource(1275U);
    msg.setSourceEntity(178U);
    msg.setDestination(8939U);
    msg.setDestinationEntity(142U);
    msg.value.assign("EQTWCSDPVYOTUTJEBAYNVCXDPLIUA");

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
    msg.setTimeStamp(0.212407991844);
    msg.setSource(61036U);
    msg.setSourceEntity(234U);
    msg.setDestination(37380U);
    msg.setDestinationEntity(111U);
    const char tmp_msg_0[] = {-97, 112, -102, 44, -45, 41, 54, -93, -116, -17, 79, -79, -34, -88, -70, -97, -81, 61, 98, -2, -73, 26, 1, -95, 92, 48, -92, 71};
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
    msg.setTimeStamp(0.996558816614);
    msg.setSource(64585U);
    msg.setSourceEntity(19U);
    msg.setDestination(55014U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {60, 58, -102, -59, -10, -86, 112, -123, -98, -72, 9, -109, -109, 18, -23, 88, 3, 1, 4, 29, -94, -10, 105, -60, 92, 92, 123, 75, -58, 65, -30, 92, -22, -46, -94, 104, -86, -67, 40, 99, -114, 112, -81, 106, -17, -109, 86, 44, 74, 11, 58, -120, -46, 49, 84, -115, 27, 115, 100, 122, -95, 65, -74, 83, -38, -3, -90, -88, -26, 124, 17, 122, -88, 102, 17, 34, 72, -32, -35, -13, -102, 8, 60, 89, -79, 29, -86, -101, 44, -98, -29, -100, 112, 120, 8, -110, 27, -106, -34, 113, 0, 26, 53, -124, -122, -19, 71, 57, -60, -25, -12, -53, -114, -88, 6, 115, -53, -107, -36, -56, -54, 55, -126, 41, 69, 92, 114, 44, 27, -21, 76, 10, -2, 93, -80, -77, 34, 1, 106, 123, -95, -96, 39, -121, 42, -104, 30, 103, -80, 76, 23, -56, -51, 53, -125, -97, -78, -67, 106, -17, -40, 26, 44, -59, -111, 113, -122, 81, 53, -116, 0, 15, -44, -101, -39, 63, 62, -84, -19, -110, 61, 58, 5, -29, 116, -115};
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
    msg.setTimeStamp(0.253967502424);
    msg.setSource(45386U);
    msg.setSourceEntity(8U);
    msg.setDestination(58567U);
    msg.setDestinationEntity(252U);
    const char tmp_msg_0[] = {-120, -88, -31, 62, -80, 14, -10, 120, 105, 24, 45, 36, -108, 0, 43, 55, 117, 111, 114, -33, -109, -33, 23, -66, 117, -35, 105, 5, -59, -83, -3, -110, 110, 119, -123, 112, -103, 75, 48, 122, 1, -65, -44, -34, -9, -99, -75, 32, -126, -120, 35, 113, 41, -79, -103, 65, -101, -1, 87, -82, 121, -42, -90, 46, 32, 20, 65, 95, -28, 125, -64, 30, -56, -111, -97, -39};
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
    msg.setTimeStamp(0.21481949277);
    msg.setSource(33086U);
    msg.setSourceEntity(245U);
    msg.setDestination(16574U);
    msg.setDestinationEntity(133U);
    msg.frequency = 3016424585U;
    msg.min_range = 3041U;
    msg.max_range = 3166U;

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
    msg.setTimeStamp(0.679671574128);
    msg.setSource(62624U);
    msg.setSourceEntity(111U);
    msg.setDestination(27618U);
    msg.setDestinationEntity(111U);
    msg.frequency = 792127111U;
    msg.min_range = 50793U;
    msg.max_range = 7720U;

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
    msg.setTimeStamp(0.922135383821);
    msg.setSource(65530U);
    msg.setSourceEntity(222U);
    msg.setDestination(60214U);
    msg.setDestinationEntity(175U);
    msg.frequency = 4281798924U;
    msg.min_range = 39527U;
    msg.max_range = 29520U;

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
    msg.setTimeStamp(0.959190431158);
    msg.setSource(61969U);
    msg.setSourceEntity(166U);
    msg.setDestination(55357U);
    msg.setDestinationEntity(32U);
    msg.type = 223U;
    msg.frequency = 4096048617U;
    msg.min_range = 10442U;
    msg.max_range = 4513U;
    msg.bits_per_point = 57U;
    msg.scale_factor = 0.765545999598;
    const char tmp_msg_0[] = {-79, 97, 76, 50, 24, 58, -91, -57, -11, -101, -110, 91, 51, 1, 89, -7, -96, 17, -83, -98, 10, 84, -26, 85, -7, 27, 18, -65, 57, -47, 30, 122, -60, -46, -88, -112, -92, 116, -88, 116, -124, -15, -44, -63, 60, -112, 39, -3, 42, -109, 74, 73, 14, 95, -55, -28, 99, -43, 94, 57, -69, 21, -16, 2, -111, -6, -117, -101, -7, 126, 8, 81, 25, -125, 101, 28, 37, -103, 45, 95, 103, 70, -99, -58, 22, 15, -59, 125, 113, 14, -49, -82, -71, -79, 114, 114, 31, 36, -86, 66, 40, -52, 103, -14, -46, 47, -90, 79, -81, -1, -6, 54, 61, -4, 113, -108, 72, 58, -89, 114, -78, 83, 104, -97, 62, -28, -104, 46, 36, -30, -31, 59, 25, -19, -66, -12, -63, 118, -67, 41, 28, -112, 74, 2, -9, 15, 33, 89, 72, 62, -71, -35, 55, -39, -80, 56, -31, -55, 109, 20, 86, -85, 114, 97, 91, -95, 119, 12, -65, -27, -40, 93, 109, 117, 85, 24, -40, 24, 63, -106, -118, 22, -6, -82, 110, -49, -77, 39, 107, -55, 7, -106, 7, -20, 76, 126, 96, 104, 76, 46, -20, -100, 86, -66, -41, -39, 7, -118, 37, -37, -8, -116, 106, -82, 72, 114, 126, -37, -68, 1, 6, 84, -4, 94, -19, -3, 21, 81, 33, -62, 91, 97, -4, 95, 54, 97, 125, 41, 21, 45, 61, 22, -28, -44, 3, -28, 90, -43};
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
    msg.setTimeStamp(0.424120222521);
    msg.setSource(34800U);
    msg.setSourceEntity(70U);
    msg.setDestination(11399U);
    msg.setDestinationEntity(66U);
    msg.type = 234U;
    msg.frequency = 3053705330U;
    msg.min_range = 16286U;
    msg.max_range = 61118U;
    msg.bits_per_point = 27U;
    msg.scale_factor = 0.684322243315;
    const char tmp_msg_0[] = {-116, -79, -32, -36, -72, -44, -55, -99, -43, 56, 20, -19, -39, -110, -29, 86, 12, -98, -1, -102, 33, 46, 80, -19, -44, -28, 107, -125, -125, -12, 39, -59, -23, -23, -58, 32, 49, 99, -19, -45, -16, -85, 82, -96, 88, -19, -78, -16, -79, -127, 49, -30, -30, -14, -41, 60, -77, 90, 88, -65, 4, 107, 109, 88, -116, -109, -114, 110, 66, 89, -30, 31, 85, -120, -61, 83, 66, 45, 123, -40, -128, 34, 78, -50, -43, -29, -25, -32};
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
    msg.setTimeStamp(0.494178807417);
    msg.setSource(38733U);
    msg.setSourceEntity(168U);
    msg.setDestination(25230U);
    msg.setDestinationEntity(202U);
    msg.type = 182U;
    msg.frequency = 3167599354U;
    msg.min_range = 64876U;
    msg.max_range = 33426U;
    msg.bits_per_point = 47U;
    msg.scale_factor = 0.730296593823;
    const char tmp_msg_0[] = {103, -93, -34, 73, 33, -111, -119, 10, -16, -85, 22, 102, 66, 6, -78, 33, 96, -123, -28, -91, -3, -123, -76, 61, 84, 99, 99, -110, 81, 95, -13, 33, 17, 78, -101, -95, 36, 38, 52, -61, 0, -127, -16, -77, 83, -109, 33, 118, 79, 7, -74, 11, 2, -100, -5, 3, 26, 100, 36, 85, 50, 19, -59, 38, -44, -33, 27, -36, 4, 124, 46, 48, 3, 96, -108, -26, 19, 31, -17, -15, -60, -74, 51, 62, 80, 63, 1, -95, 116, 32, -89, 40, 5, -38, -27, 42, 52};
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
    msg.setTimeStamp(0.984621047315);
    msg.setSource(22263U);
    msg.setSourceEntity(31U);
    msg.setDestination(36130U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.1211299396);
    msg.setSource(13330U);
    msg.setSourceEntity(16U);
    msg.setDestination(36850U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.336123830584);
    msg.setSource(41744U);
    msg.setSourceEntity(194U);
    msg.setDestination(35315U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.373706702276);
    msg.setSource(1630U);
    msg.setSourceEntity(118U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(46U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.698311543485);
    msg.setSource(226U);
    msg.setSourceEntity(81U);
    msg.setDestination(49532U);
    msg.setDestinationEntity(35U);
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
    msg.setTimeStamp(0.30495067956);
    msg.setSource(39651U);
    msg.setSourceEntity(8U);
    msg.setDestination(49312U);
    msg.setDestinationEntity(159U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.270401774749);
    msg.setSource(62821U);
    msg.setSourceEntity(98U);
    msg.setDestination(12300U);
    msg.setDestinationEntity(160U);
    msg.value = 0.83828805928;
    msg.confidence = 0.640810265686;
    msg.opmodes.assign("YYZUAJGHVCJZTEHQRIOOXESPPKRPCSXVOAZQPXLXPQVMVFDFRQUCEXARNM");

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
    msg.setTimeStamp(0.566295127461);
    msg.setSource(25309U);
    msg.setSourceEntity(91U);
    msg.setDestination(13586U);
    msg.setDestinationEntity(122U);
    msg.value = 0.919499629665;
    msg.confidence = 0.905315913193;
    msg.opmodes.assign("KBXLVVMTOACOTZMYJJODLCLCGVZNUYVMGBBTFPNAIQFOFRQQKFGWQXWQGHLKZIJHVZPYVTDMRFBJRPHCOCOCKJJLKTORVOPUTSUTYBNPWUEUWLSOQCQJZCSABMMWVIYESERPNX");

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
    msg.setTimeStamp(0.315105734511);
    msg.setSource(18306U);
    msg.setSourceEntity(223U);
    msg.setDestination(48139U);
    msg.setDestinationEntity(99U);
    msg.value = 0.437754044315;
    msg.confidence = 0.0261195141919;
    msg.opmodes.assign("RSAAULWRPYFQEGHQXLFQMUZZKLIOXCNGPZFROCLSXNXKRGEBQZSCSHLJFXIAUTFMFVBHGOAPDEMIPRNDEPTUCOBSJROUUBETEBRRUIITB");

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
    msg.setTimeStamp(0.131636197956);
    msg.setSource(30616U);
    msg.setSourceEntity(211U);
    msg.setDestination(48803U);
    msg.setDestinationEntity(110U);
    msg.itow = 327205923U;
    msg.lat = 0.668359441637;
    msg.lon = 0.224060380329;
    msg.height_ell = 0.213352052916;
    msg.height_sea = 0.582762491751;
    msg.hacc = 0.209683957365;
    msg.vacc = 0.302524519488;
    msg.vel_n = 0.58561722775;
    msg.vel_e = 0.253719263478;
    msg.vel_d = 0.810694900163;
    msg.speed = 0.441226468879;
    msg.gspeed = 0.327385659816;
    msg.heading = 0.228503354794;
    msg.sacc = 0.533388281096;
    msg.cacc = 0.927276111962;

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
    msg.setTimeStamp(0.11647441795);
    msg.setSource(61661U);
    msg.setSourceEntity(166U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(106U);
    msg.itow = 3069691080U;
    msg.lat = 0.690045459633;
    msg.lon = 0.158358991651;
    msg.height_ell = 0.172176675833;
    msg.height_sea = 0.653088430034;
    msg.hacc = 0.538721507996;
    msg.vacc = 0.124317275895;
    msg.vel_n = 0.16203717233;
    msg.vel_e = 0.701862356692;
    msg.vel_d = 0.975178730398;
    msg.speed = 0.439184697996;
    msg.gspeed = 0.249607323436;
    msg.heading = 0.816112926929;
    msg.sacc = 0.23437247613;
    msg.cacc = 0.89070154483;

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
    msg.setTimeStamp(0.28506948141);
    msg.setSource(29514U);
    msg.setSourceEntity(68U);
    msg.setDestination(40775U);
    msg.setDestinationEntity(157U);
    msg.itow = 4197635346U;
    msg.lat = 0.160090237467;
    msg.lon = 0.301298273516;
    msg.height_ell = 0.883930970057;
    msg.height_sea = 0.895358962044;
    msg.hacc = 0.273403889402;
    msg.vacc = 0.00112610779201;
    msg.vel_n = 0.323865453378;
    msg.vel_e = 0.861048614502;
    msg.vel_d = 0.0105068572407;
    msg.speed = 0.49955529339;
    msg.gspeed = 0.295419831814;
    msg.heading = 0.42282124317;
    msg.sacc = 0.668909460167;
    msg.cacc = 0.1301807589;

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
    msg.setTimeStamp(0.00375652784024);
    msg.setSource(16750U);
    msg.setSourceEntity(150U);
    msg.setDestination(56217U);
    msg.setDestinationEntity(58U);
    msg.id = 169U;
    msg.value = 0.781981542637;

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
    msg.setTimeStamp(0.623498258086);
    msg.setSource(52397U);
    msg.setSourceEntity(211U);
    msg.setDestination(64802U);
    msg.setDestinationEntity(10U);
    msg.id = 84U;
    msg.value = 0.753917581642;

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
    msg.setTimeStamp(0.621188076595);
    msg.setSource(21794U);
    msg.setSourceEntity(10U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(109U);
    msg.id = 164U;
    msg.value = 0.790194956156;

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
    msg.setTimeStamp(0.411893574536);
    msg.setSource(62595U);
    msg.setSourceEntity(178U);
    msg.setDestination(27129U);
    msg.setDestinationEntity(64U);
    msg.x = 0.0830232727889;
    msg.y = 0.546679540708;
    msg.z = 0.802157340576;
    msg.phi = 0.124823020286;
    msg.theta = 0.141081698807;
    msg.psi = 0.270039026301;

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
    msg.setTimeStamp(0.361378160959);
    msg.setSource(64870U);
    msg.setSourceEntity(131U);
    msg.setDestination(29351U);
    msg.setDestinationEntity(13U);
    msg.x = 0.528436919199;
    msg.y = 0.492861364925;
    msg.z = 0.787952393505;
    msg.phi = 0.243323821562;
    msg.theta = 0.414493351453;
    msg.psi = 0.96992120607;

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
    msg.setTimeStamp(0.121891710529);
    msg.setSource(51190U);
    msg.setSourceEntity(115U);
    msg.setDestination(41463U);
    msg.setDestinationEntity(221U);
    msg.x = 0.351079403282;
    msg.y = 0.583819357131;
    msg.z = 0.371580814222;
    msg.phi = 0.25377896798;
    msg.theta = 0.26779653779;
    msg.psi = 0.352694073925;

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
    msg.setTimeStamp(0.601230729629);
    msg.setSource(65328U);
    msg.setSourceEntity(97U);
    msg.setDestination(47923U);
    msg.setDestinationEntity(192U);
    msg.beam_width = 0.479411926009;
    msg.beam_height = 0.332604891689;

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
    msg.setTimeStamp(0.0377268278268);
    msg.setSource(19908U);
    msg.setSourceEntity(94U);
    msg.setDestination(19623U);
    msg.setDestinationEntity(176U);
    msg.beam_width = 0.0622637004971;
    msg.beam_height = 0.849168530931;

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
    msg.setTimeStamp(0.356332112113);
    msg.setSource(45050U);
    msg.setSourceEntity(40U);
    msg.setDestination(4733U);
    msg.setDestinationEntity(225U);
    msg.beam_width = 0.155264964077;
    msg.beam_height = 0.114965878532;

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
    msg.setTimeStamp(0.270375090702);
    msg.setSource(7774U);
    msg.setSourceEntity(120U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(97U);
    msg.id = 141U;
    msg.zoom = 223U;
    msg.action = 216U;

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
    msg.setTimeStamp(0.504591095239);
    msg.setSource(44010U);
    msg.setSourceEntity(113U);
    msg.setDestination(1184U);
    msg.setDestinationEntity(75U);
    msg.id = 13U;
    msg.zoom = 31U;
    msg.action = 130U;

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
    msg.setTimeStamp(0.4643993621);
    msg.setSource(14863U);
    msg.setSourceEntity(222U);
    msg.setDestination(26464U);
    msg.setDestinationEntity(184U);
    msg.id = 124U;
    msg.zoom = 203U;
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
    msg.setTimeStamp(0.181393270772);
    msg.setSource(31988U);
    msg.setSourceEntity(145U);
    msg.setDestination(18110U);
    msg.setDestinationEntity(113U);
    msg.id = 4U;
    msg.value = 0.47413896058;

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
    msg.setTimeStamp(0.748176963392);
    msg.setSource(16521U);
    msg.setSourceEntity(230U);
    msg.setDestination(62942U);
    msg.setDestinationEntity(222U);
    msg.id = 88U;
    msg.value = 0.903274201289;

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
    msg.setTimeStamp(0.971462616615);
    msg.setSource(51938U);
    msg.setSourceEntity(185U);
    msg.setDestination(50882U);
    msg.setDestinationEntity(24U);
    msg.id = 199U;
    msg.value = 0.245967971775;

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
    msg.setTimeStamp(0.330536052056);
    msg.setSource(59952U);
    msg.setSourceEntity(81U);
    msg.setDestination(58242U);
    msg.setDestinationEntity(78U);
    msg.id = 58U;
    msg.value = 0.266468768869;

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
    msg.setTimeStamp(0.783170009399);
    msg.setSource(51024U);
    msg.setSourceEntity(180U);
    msg.setDestination(11066U);
    msg.setDestinationEntity(93U);
    msg.id = 107U;
    msg.value = 0.533135761881;

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
    msg.setTimeStamp(0.384352858013);
    msg.setSource(37499U);
    msg.setSourceEntity(244U);
    msg.setDestination(64986U);
    msg.setDestinationEntity(168U);
    msg.id = 89U;
    msg.value = 0.182903316061;

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
    msg.setTimeStamp(0.443154505326);
    msg.setSource(9817U);
    msg.setSourceEntity(180U);
    msg.setDestination(48867U);
    msg.setDestinationEntity(85U);
    msg.id = 202U;
    msg.angle = 0.442037184672;

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
    msg.setTimeStamp(0.555196877881);
    msg.setSource(21244U);
    msg.setSourceEntity(30U);
    msg.setDestination(26836U);
    msg.setDestinationEntity(122U);
    msg.id = 91U;
    msg.angle = 0.48768079398;

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
    msg.setTimeStamp(0.471855109118);
    msg.setSource(49730U);
    msg.setSourceEntity(150U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(94U);
    msg.id = 126U;
    msg.angle = 0.593083964481;

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
    msg.setTimeStamp(0.824245585356);
    msg.setSource(56689U);
    msg.setSourceEntity(213U);
    msg.setDestination(9665U);
    msg.setDestinationEntity(147U);
    msg.op = 192U;
    msg.actions.assign("OXSPFBQWYUVBMVCSNKVPKCNOHWKTCQBLJQPVZUGESYLUMYPGRPDXNWWOHCHMZAQPHGCEDOBPWODTKYDQPAMNXVHOHKZAIYDTFDMGXKSUUHRIQBFJLAKUDCMFZGZTSQNRNGULTNYYTLMQEUPVKBVIHYJDJANGERWWGRAOVAWGEJTFIICOHBCLXFEZSCTBYWLRNZZSSJFNELFILKOORCHJZTMII");

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
    msg.setTimeStamp(0.289550207759);
    msg.setSource(55589U);
    msg.setSourceEntity(69U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(168U);
    msg.op = 159U;
    msg.actions.assign("SNAFJUVHONKMDRXOOXQCAOOAZUJEVWWOPCXSMIBHCVQHWNMHEXUDCTYKYZQRRUSFFKMWQGDWERKIGUTINPJVWLHKJRPVBRFINCIRNSTNMNISDHXIXOTBGKVKDEKDMMNPAYDYVKDMHQEZTSGVUEPJWLBOSAWGYKCTFADQGGFDAFVHZBFLBYBUAYGZCBLVPNCEYQMETBRLLAUGTZPQBPRTLHGIPLFZOJILC");

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
    msg.setTimeStamp(0.0187981856902);
    msg.setSource(32403U);
    msg.setSourceEntity(127U);
    msg.setDestination(26309U);
    msg.setDestinationEntity(107U);
    msg.op = 101U;
    msg.actions.assign("QZTKRDUBMUJODYILSNVMCNMMSCKZCDATHHGNRF");

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
    msg.setTimeStamp(0.403939041775);
    msg.setSource(19834U);
    msg.setSourceEntity(73U);
    msg.setDestination(62394U);
    msg.setDestinationEntity(254U);
    msg.actions.assign("QIKGNNJCIZWMEMRNNZBYEDMYMHWZSANVYJWIHPLGBSXPHOWTSRZMOVTAUALGESZCOUQDQCKAHNXKLIZUSGLXNSYKNXOISUHTXQIDPZRUFJNWLBXDHBFLNTPVWKFJYGIQWOSLUTQEYPYUZWDODVIEVMXPCKXRUTKAGEAHJZEBAPFGXJERQQBWFBREMJMPRVOTYKGCKJLL");

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
    msg.setTimeStamp(0.26349852164);
    msg.setSource(55295U);
    msg.setSourceEntity(102U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(2U);
    msg.actions.assign("WHSHTGVCVXACLPCEFOBKJGSEJWKEUVADBZPLFJOAXVBNHLJNPYWAFSCBFOVWQSTWYIIZSPIBEEUDZNTAGDSQQKCIJTFXHBYNOPRDPDQSLLOGEXYUXOGEAJKTROUDQMQNBBJRRRKQ");

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
    msg.setTimeStamp(0.130309954871);
    msg.setSource(12253U);
    msg.setSourceEntity(234U);
    msg.setDestination(62422U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("JFQRVBDVZZCXHYJKPCGOGQIBDZBLUYALNHFGWROWYDBMLTVXWPSATFKLPFYNJVHCCYKMZQCIVZQPJUOEDCPHALLXDFRPYMAQIUJTMCRICMXLNJZBHWPWXHSGAHGMXXYWCEOUEDNSWPAKDBRVONKWCFGBFWKFPSYEHKNBVZIJIRDTZOVLOIXPFSUWQNOAAXEATJRBTMUAZJGETZOLTJDFQEIOQSHMKIBXYUNIMGKUQTUEVERDVGRM");

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
    msg.setTimeStamp(0.979174782093);
    msg.setSource(64752U);
    msg.setSourceEntity(50U);
    msg.setDestination(17694U);
    msg.setDestinationEntity(150U);
    msg.button = 92U;
    msg.value = 158U;

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
    msg.setTimeStamp(0.429320432642);
    msg.setSource(28012U);
    msg.setSourceEntity(40U);
    msg.setDestination(369U);
    msg.setDestinationEntity(204U);
    msg.button = 242U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.352336791905);
    msg.setSource(49985U);
    msg.setSourceEntity(94U);
    msg.setDestination(49308U);
    msg.setDestinationEntity(238U);
    msg.button = 175U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.2488157598);
    msg.setSource(25778U);
    msg.setSourceEntity(92U);
    msg.setDestination(35119U);
    msg.setDestinationEntity(145U);
    msg.op = 155U;
    msg.text.assign("WCEQPVQNWLXXMFGNCJRYNSHNROPDQGTTNAMBIOHYDDUKFSCVSYULTLFZVKZUZPCJHTXXMSOFTCTLVOZQNZMSFFECHQMRLAEKNGMIRPZKPIUFUBIKADYTESPRRSIQJHHWQBMROJIJPMDBREGUWEUASWAOUZOOEQJJGWVCVVIXGYYSOIIUBQDJHMWDDAFNHYA");

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
    msg.setTimeStamp(0.985362862042);
    msg.setSource(46529U);
    msg.setSourceEntity(73U);
    msg.setDestination(54423U);
    msg.setDestinationEntity(207U);
    msg.op = 95U;
    msg.text.assign("FIOLLWHOWGBQGZJDCRVUAVWFNZCXJYMRBWPFDSMJNKRXVQTYARGBHENKFLAPIWTYKQADOIMONGZVMXI");

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
    msg.setTimeStamp(0.221990536744);
    msg.setSource(7770U);
    msg.setSourceEntity(75U);
    msg.setDestination(13161U);
    msg.setDestinationEntity(71U);
    msg.op = 2U;
    msg.text.assign("HGIFQUKXMOMPWDHERJDBSAQAOOWMHLCUJUIMJRBNLNDVFBTZVVHQYPRONFIZNDEWMOPUCZWKYHDUXWGYJOALMQSTVDGRKLRXTHCAZFWLHLITEY");

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
    msg.setTimeStamp(0.0253214908353);
    msg.setSource(199U);
    msg.setSourceEntity(39U);
    msg.setDestination(21202U);
    msg.setDestinationEntity(105U);
    msg.op = 99U;
    msg.time_remain = 0.090525643905;
    msg.sched_time = 0.927305795591;

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
    msg.setTimeStamp(0.04990380327);
    msg.setSource(59531U);
    msg.setSourceEntity(227U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(78U);
    msg.op = 200U;
    msg.time_remain = 0.973143293891;
    msg.sched_time = 0.3616765825;

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
    msg.setTimeStamp(0.00479366048994);
    msg.setSource(51426U);
    msg.setSourceEntity(69U);
    msg.setDestination(11028U);
    msg.setDestinationEntity(108U);
    msg.op = 207U;
    msg.time_remain = 0.740650756507;
    msg.sched_time = 0.77474754155;

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
    msg.setTimeStamp(0.976136871094);
    msg.setSource(29665U);
    msg.setSourceEntity(7U);
    msg.setDestination(43266U);
    msg.setDestinationEntity(217U);
    msg.name.assign("NGMDPHTJPBEZIUGJWHSNMSHPZWDDKYAPJCTGYGISZRJOYCBFOSLXX");
    msg.op = 46U;
    msg.sched_time = 0.196976194498;

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
    msg.setTimeStamp(0.491008842585);
    msg.setSource(34009U);
    msg.setSourceEntity(21U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(134U);
    msg.name.assign("WHYVYAOMXDSIYKCEZMOFZSSURFVHGBLSNDWKTYUIJLCDOELJRYNKCEAHBRNEJBZTAWKZEEAIQTHGCLMPLZAUWPFTXISQHHQRZSMDCXVVSLGDLXDOTDGGVBLRNGFOOAMSNPSKUCPGOAABVNQPMKCKEQIIKEABXFBFZJVTQNEJKMNFJSEZPOJATYHUCUMZIMGIPGQMRFWLCIJGVPDJHXFZIONBQOHWCDBXTPYVXKWVUF");
    msg.op = 183U;
    msg.sched_time = 0.173959408969;

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
    msg.setTimeStamp(0.109634344704);
    msg.setSource(41218U);
    msg.setSourceEntity(69U);
    msg.setDestination(19234U);
    msg.setDestinationEntity(244U);
    msg.name.assign("YCARPUXRZYFAKRXAWQWVKIOBTRNVFIXSLDKWVEGOYOGLIDLMBTSKZNTCLIFNHLTMZMPHYFYJHBUWJVZAIYSVISUGVPPBXNVXBKSAFSTCHRHHJIDEMUMCULGPCEOMZJFDXAQDWKFVANXAGKCLPKYQWENWLUBTJNVHFEICCDJQPDQQSMEBSIXOENKUPIFRRDBASRZPGQOUZRMBWOHHJJEOCQTZKDZRWYGTEPWGXAJ");
    msg.op = 237U;
    msg.sched_time = 0.268345891488;

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
    msg.setTimeStamp(0.921086479886);
    msg.setSource(29620U);
    msg.setSourceEntity(11U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.165139344804);
    msg.setSource(54325U);
    msg.setSourceEntity(237U);
    msg.setDestination(14204U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.755143132294);
    msg.setSource(10153U);
    msg.setSourceEntity(168U);
    msg.setDestination(45590U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.717818187553);
    msg.setSource(63245U);
    msg.setSourceEntity(211U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(69U);
    msg.name.assign("OVMNTQAQOLUXYYMNEUQVXYMMEQVLNEVEJKXOYUAQSCWHHFKDPIBWMZARTERVODRVGWLFSZOYSXZRNBHKDHDGRNPVCXCMEUUIILPIHSE");
    msg.state = 112U;

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
    msg.setTimeStamp(0.909452383641);
    msg.setSource(3613U);
    msg.setSourceEntity(156U);
    msg.setDestination(5062U);
    msg.setDestinationEntity(121U);
    msg.name.assign("GLQRWKEETVMGQVWKTMHNPJUDJXUGIDINRTGYSLXTPPMIAERRKZBHQOODAMLEJYFFBZOYHATNLYMUYMXAPEX");
    msg.state = 88U;

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
    msg.setTimeStamp(0.318496747476);
    msg.setSource(22313U);
    msg.setSourceEntity(114U);
    msg.setDestination(41673U);
    msg.setDestinationEntity(247U);
    msg.name.assign("SZPYSUQLWOKROGAKQGZZSLCQTSDFZD");
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
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.686623972457);
    msg.setSource(51091U);
    msg.setSourceEntity(122U);
    msg.setDestination(13145U);
    msg.setDestinationEntity(151U);
    msg.name.assign("GXNTKLWGCZCVJNRKQECKQBYIFRALZZ");
    msg.value = 26U;

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
    msg.setTimeStamp(0.350572011163);
    msg.setSource(21584U);
    msg.setSourceEntity(218U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(207U);
    msg.name.assign("HBSXAZGIZASYOAMOBLGURJDKWMOW");
    msg.value = 177U;

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
    msg.setTimeStamp(0.125026728787);
    msg.setSource(64259U);
    msg.setSourceEntity(149U);
    msg.setDestination(12096U);
    msg.setDestinationEntity(124U);
    msg.name.assign("WPRTMNSATVBAILCOLVORROYQBEDIGARKNIRGXPPJXUZWPEYFNRUATQEJIFGMWKSUCNUCYBZMOJEEHJZFJYUSOBULYSNVPZM");
    msg.value = 39U;

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
    msg.setTimeStamp(0.332622192646);
    msg.setSource(52181U);
    msg.setSourceEntity(177U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(253U);
    msg.name.assign("WZGERZXAUVGBHIKPWNNMJVCNZZISIVYGPOULZDDMFCGZFNQRDTXSAUHLNAWYHMCYJWTTGUFRJYMRBSFK");

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
    msg.setTimeStamp(0.51893177528);
    msg.setSource(36340U);
    msg.setSourceEntity(251U);
    msg.setDestination(39106U);
    msg.setDestinationEntity(114U);
    msg.name.assign("MBRRNGRLHPJFSILEZNHWRXLFBVOYNSWHDAKXOFBGSNHDIWEQFAPPNUHMSLNUUGCQSUTVKUXBVQYFQCIHELDRTEBCGFHUCUUJPL");

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
    msg.setTimeStamp(0.777243300749);
    msg.setSource(40907U);
    msg.setSourceEntity(155U);
    msg.setDestination(52611U);
    msg.setDestinationEntity(84U);
    msg.name.assign("QRGEXVPFTFFYHDSNKNHGCAJDANCGTQZOJEBATGVKAQNLXDGHKIPVUCIVHXCECMUXDVIOUNLXIDRWPSTHTAJHQFPNZIVHDOJXPWQZMRNTVXSWAI");

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
    msg.setTimeStamp(0.577735480215);
    msg.setSource(1774U);
    msg.setSourceEntity(179U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(156U);
    msg.name.assign("JBKAHFTDDEBTZAQPNYXCJWKEXPIMSIPDASUUJRONJECXLEBXQCYHZMOYZSTUERSSALTAHHWVHJNBNENKSCWJGURZRDUTUCNEXGSRMDAYZXF");
    msg.value = 222U;

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
    msg.setTimeStamp(0.267498289075);
    msg.setSource(33746U);
    msg.setSourceEntity(118U);
    msg.setDestination(15037U);
    msg.setDestinationEntity(186U);
    msg.name.assign("GTRZRSSKEUMINVFVMDNQIHHARMIVMCJPBKLDVGPXGNPZASRAFIEAUAPBTHBJXMDDXQRROMUYFFTDONIWWCFCXXPRYBIXHOHWDYCLQSHIZSAIJIKJEJFLTBUEXGELTWOKPMPKDHDKJCTOSZHQKYCBJWCDUOGFNOIJQBWUTYGKYSHANLZMCD");
    msg.value = 78U;

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
    msg.setTimeStamp(0.571938047825);
    msg.setSource(2128U);
    msg.setSourceEntity(144U);
    msg.setDestination(15898U);
    msg.setDestinationEntity(98U);
    msg.name.assign("GNSVZPWTBCZBPJFZRDWOPWLIGUTFBGXUTWBYBMKGMSLDXIEWMEDUXRTLQEDRUNSJPIHDAFIGKDETQNCHOUFIGVNAXZKQCHRYVDPYIRKXLMMLFOGBUHAYBAYQMJKVWMXNNYHUUHTGSCWHDBYTCRVSUUJBJPQCSCORHZHAVFJKMPHQNZLEWTKZARDBZSOLVQGOMXTAAVFFZOFLXLPEJOENASJ");
    msg.value = 92U;

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
    msg.setTimeStamp(0.663194048014);
    msg.setSource(39892U);
    msg.setSourceEntity(183U);
    msg.setDestination(63593U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.0192503181869;
    msg.lon = 0.051921517936;
    msg.height = 0.209725693008;
    msg.x = 0.866454820522;
    msg.y = 0.90557570512;
    msg.z = 0.159733402596;
    msg.phi = 0.811897868511;
    msg.theta = 0.232024477376;
    msg.psi = 0.0317798739889;
    msg.u = 0.290086594486;
    msg.v = 0.84459202063;
    msg.w = 0.973951551594;
    msg.vx = 0.445828629324;
    msg.vy = 0.843955971203;
    msg.vz = 0.220863380506;
    msg.p = 0.638875548591;
    msg.q = 0.491444732563;
    msg.r = 0.956352180305;
    msg.depth = 0.365931768073;
    msg.alt = 0.460581901909;

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
    msg.setTimeStamp(0.0382533827588);
    msg.setSource(47750U);
    msg.setSourceEntity(61U);
    msg.setDestination(44550U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.0473415181859;
    msg.lon = 0.911927752647;
    msg.height = 0.390794104906;
    msg.x = 0.348337999662;
    msg.y = 0.610283389942;
    msg.z = 0.682372828638;
    msg.phi = 0.220202795218;
    msg.theta = 0.925942797494;
    msg.psi = 0.735404708525;
    msg.u = 0.397460593087;
    msg.v = 0.38423526058;
    msg.w = 0.196328452015;
    msg.vx = 0.248008325971;
    msg.vy = 0.52071269617;
    msg.vz = 0.417849547744;
    msg.p = 0.0480200921486;
    msg.q = 0.853962308596;
    msg.r = 0.766370791857;
    msg.depth = 0.33745986837;
    msg.alt = 0.607379354687;

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
    msg.setTimeStamp(0.0447443588905);
    msg.setSource(42447U);
    msg.setSourceEntity(26U);
    msg.setDestination(61904U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.7318447425;
    msg.lon = 0.757640316294;
    msg.height = 0.821479480936;
    msg.x = 0.591624581681;
    msg.y = 0.949189271741;
    msg.z = 0.81986189291;
    msg.phi = 0.804786399569;
    msg.theta = 0.905602479051;
    msg.psi = 0.0762587831178;
    msg.u = 0.143511454571;
    msg.v = 0.0639791803325;
    msg.w = 0.0258351405784;
    msg.vx = 0.472738877819;
    msg.vy = 0.920073375864;
    msg.vz = 0.724231859454;
    msg.p = 0.226896696554;
    msg.q = 0.060405527953;
    msg.r = 0.284426210681;
    msg.depth = 0.735483371292;
    msg.alt = 0.232055822724;

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
    msg.setTimeStamp(0.0961786331903);
    msg.setSource(61675U);
    msg.setSourceEntity(56U);
    msg.setDestination(36030U);
    msg.setDestinationEntity(37U);
    msg.x = 0.67642271249;
    msg.y = 0.243685268754;
    msg.z = 0.42921069287;

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
    msg.setTimeStamp(0.113598266472);
    msg.setSource(26852U);
    msg.setSourceEntity(21U);
    msg.setDestination(12142U);
    msg.setDestinationEntity(250U);
    msg.x = 0.995449895575;
    msg.y = 0.686548379589;
    msg.z = 0.327152799931;

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
    msg.setTimeStamp(0.996261162201);
    msg.setSource(45137U);
    msg.setSourceEntity(93U);
    msg.setDestination(22403U);
    msg.setDestinationEntity(208U);
    msg.x = 0.372343609705;
    msg.y = 0.30765536693;
    msg.z = 0.111541976841;

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
    msg.setTimeStamp(0.317602933267);
    msg.setSource(56549U);
    msg.setSourceEntity(230U);
    msg.setDestination(50294U);
    msg.setDestinationEntity(39U);
    msg.value = 0.345401484944;

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
    msg.setTimeStamp(0.257659084871);
    msg.setSource(33853U);
    msg.setSourceEntity(34U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(48U);
    msg.value = 0.18203025774;

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
    msg.setTimeStamp(0.162347529333);
    msg.setSource(39076U);
    msg.setSourceEntity(58U);
    msg.setDestination(11025U);
    msg.setDestinationEntity(34U);
    msg.value = 0.206526690343;

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
    msg.setTimeStamp(0.602060050138);
    msg.setSource(62929U);
    msg.setSourceEntity(204U);
    msg.setDestination(40817U);
    msg.setDestinationEntity(64U);
    msg.value = 0.952637837379;

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
    msg.setTimeStamp(0.0607358428231);
    msg.setSource(56859U);
    msg.setSourceEntity(201U);
    msg.setDestination(25390U);
    msg.setDestinationEntity(78U);
    msg.value = 0.326276505404;

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
    msg.setTimeStamp(0.926247246105);
    msg.setSource(17252U);
    msg.setSourceEntity(233U);
    msg.setDestination(37629U);
    msg.setDestinationEntity(37U);
    msg.value = 0.334784212417;

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
    msg.setTimeStamp(0.472802420462);
    msg.setSource(23471U);
    msg.setSourceEntity(86U);
    msg.setDestination(16709U);
    msg.setDestinationEntity(116U);
    msg.x = 0.845240665925;
    msg.y = 0.695704494689;
    msg.z = 0.794052427844;
    msg.phi = 0.311947680058;
    msg.theta = 0.789265827411;
    msg.psi = 0.530898546607;
    msg.p = 0.0821880393241;
    msg.q = 0.518754176526;
    msg.r = 0.790163151413;
    msg.u = 0.459811722382;
    msg.v = 0.213394032947;
    msg.w = 0.37946801777;
    msg.bias_psi = 0.687356485148;
    msg.bias_r = 0.808241244923;

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
    msg.setTimeStamp(0.816472974575);
    msg.setSource(21517U);
    msg.setSourceEntity(152U);
    msg.setDestination(60389U);
    msg.setDestinationEntity(122U);
    msg.x = 0.868284880879;
    msg.y = 0.629933573775;
    msg.z = 0.971417264817;
    msg.phi = 0.09644970282;
    msg.theta = 0.435007096825;
    msg.psi = 0.133397872856;
    msg.p = 0.734053927478;
    msg.q = 0.0214189532818;
    msg.r = 0.504669705902;
    msg.u = 0.809261329808;
    msg.v = 0.400486655274;
    msg.w = 0.94183436831;
    msg.bias_psi = 0.106189420242;
    msg.bias_r = 0.553627868121;

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
    msg.setTimeStamp(0.890094711915);
    msg.setSource(6985U);
    msg.setSourceEntity(231U);
    msg.setDestination(41660U);
    msg.setDestinationEntity(156U);
    msg.x = 0.646452243157;
    msg.y = 0.992470508188;
    msg.z = 0.690853424276;
    msg.phi = 0.872903277338;
    msg.theta = 0.551695182498;
    msg.psi = 0.999657673397;
    msg.p = 0.514049596285;
    msg.q = 0.272254814483;
    msg.r = 0.352185574696;
    msg.u = 0.88728465717;
    msg.v = 0.945240462975;
    msg.w = 0.620143513952;
    msg.bias_psi = 0.836326385897;
    msg.bias_r = 0.934915164308;

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
    msg.setTimeStamp(0.566255041388);
    msg.setSource(7614U);
    msg.setSourceEntity(169U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(188U);
    msg.bias_psi = 0.459865602165;
    msg.bias_r = 0.557538666557;
    msg.cog = 0.321640564018;
    msg.cyaw = 0.810058158767;
    msg.lbl_rej_level = 0.901419813985;
    msg.gps_rej_level = 0.964945715245;
    msg.custom_x = 0.722920024278;
    msg.custom_y = 0.683617474456;
    msg.custom_z = 0.966947872658;

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
    msg.setTimeStamp(0.344070501781);
    msg.setSource(4524U);
    msg.setSourceEntity(108U);
    msg.setDestination(971U);
    msg.setDestinationEntity(239U);
    msg.bias_psi = 0.623813650696;
    msg.bias_r = 0.47007808461;
    msg.cog = 0.896858423176;
    msg.cyaw = 0.780973896636;
    msg.lbl_rej_level = 0.349969593542;
    msg.gps_rej_level = 0.214218380072;
    msg.custom_x = 0.600445292002;
    msg.custom_y = 0.70404685781;
    msg.custom_z = 0.133549488394;

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
    msg.setTimeStamp(0.339223823737);
    msg.setSource(63016U);
    msg.setSourceEntity(125U);
    msg.setDestination(35644U);
    msg.setDestinationEntity(130U);
    msg.bias_psi = 0.440719366268;
    msg.bias_r = 0.164421693308;
    msg.cog = 0.368100294137;
    msg.cyaw = 0.460835986514;
    msg.lbl_rej_level = 0.884241952439;
    msg.gps_rej_level = 0.561531573047;
    msg.custom_x = 0.65502658782;
    msg.custom_y = 0.272950639459;
    msg.custom_z = 0.742759844807;

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
    msg.setTimeStamp(0.273889602882);
    msg.setSource(64867U);
    msg.setSourceEntity(234U);
    msg.setDestination(3746U);
    msg.setDestinationEntity(66U);
    msg.utc_time = 0.536807041955;
    msg.reason = 137U;

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
    msg.setTimeStamp(0.243915450457);
    msg.setSource(26358U);
    msg.setSourceEntity(156U);
    msg.setDestination(35606U);
    msg.setDestinationEntity(205U);
    msg.utc_time = 0.214603488963;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.794036293544);
    msg.setSource(60614U);
    msg.setSourceEntity(113U);
    msg.setDestination(49628U);
    msg.setDestinationEntity(189U);
    msg.utc_time = 0.138707965561;
    msg.reason = 89U;

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
    msg.setTimeStamp(0.54744874796);
    msg.setSource(23075U);
    msg.setSourceEntity(32U);
    msg.setDestination(58042U);
    msg.setDestinationEntity(127U);
    msg.id = 121U;
    msg.range = 0.904139031422;
    msg.acceptance = 127U;

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
    msg.setTimeStamp(0.541045335006);
    msg.setSource(11097U);
    msg.setSourceEntity(63U);
    msg.setDestination(9529U);
    msg.setDestinationEntity(206U);
    msg.id = 177U;
    msg.range = 0.452698871762;
    msg.acceptance = 32U;

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
    msg.setTimeStamp(0.871139517978);
    msg.setSource(52310U);
    msg.setSourceEntity(110U);
    msg.setDestination(15699U);
    msg.setDestinationEntity(132U);
    msg.id = 248U;
    msg.range = 0.0529472306077;
    msg.acceptance = 33U;

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
    msg.setTimeStamp(0.0083098476226);
    msg.setSource(61766U);
    msg.setSourceEntity(187U);
    msg.setDestination(51575U);
    msg.setDestinationEntity(147U);
    msg.type = 93U;
    msg.reason = 126U;
    msg.value = 0.197542663224;
    msg.timestep = 0.039992589084;

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
    msg.setTimeStamp(0.94083862167);
    msg.setSource(17128U);
    msg.setSourceEntity(250U);
    msg.setDestination(44616U);
    msg.setDestinationEntity(125U);
    msg.type = 183U;
    msg.reason = 199U;
    msg.value = 0.86805393231;
    msg.timestep = 0.283386215928;

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
    msg.setTimeStamp(0.974988041815);
    msg.setSource(24459U);
    msg.setSourceEntity(124U);
    msg.setDestination(25312U);
    msg.setDestinationEntity(196U);
    msg.type = 15U;
    msg.reason = 204U;
    msg.value = 0.296684991198;
    msg.timestep = 0.148268285182;

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
    msg.setTimeStamp(0.382838837201);
    msg.setSource(64998U);
    msg.setSourceEntity(158U);
    msg.setDestination(36527U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.299428252182);
    msg.setSource(30228U);
    msg.setSourceEntity(94U);
    msg.setDestination(26753U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.655697422902);
    msg.setSource(14240U);
    msg.setSourceEntity(115U);
    msg.setDestination(46023U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.128461247308);
    msg.setSource(4641U);
    msg.setSourceEntity(74U);
    msg.setDestination(24540U);
    msg.setDestinationEntity(251U);
    msg.beacon.assign("VDESSNNCMXIJZTSZFTDVKLMZOMSBUGUYQUYWUAMGEULBXCVCKRZVMGDYHEGOLXJXJCLBJKZARWEKAQHTHTQMOHBPKSTZQHWTHLMBOWVVDZWBJJDOLRZCFGIQFADKCXELBHOULGHPFFOXUDFKVTASILMUTGKFPRGFNOAXQWWRXEIWMHXRVIAXPCNVYBFECNQEIORTRAHOIFPPYLNQRSBGIYITDUPIDPWPN");
    msg.x = 0.17319650749;
    msg.y = 0.32059999835;
    msg.depth = 0.816292732411;
    msg.var_x = 0.324150279808;
    msg.var_y = 0.64196707555;

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
    msg.setTimeStamp(0.596327617706);
    msg.setSource(8176U);
    msg.setSourceEntity(208U);
    msg.setDestination(7468U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("KEWUXDGQPOHIDHSHLSIGCGVRJTMUUZGBEAUULGMYYTNBBWWFNCQXNHJHNCQVEIXVQCTKFQUOTYEZYGNMDBHWQCUPNPBZUWPAPAAGOVJCQXNDQWIDWYIMDWBRCSGYDBPRDAXHSMZYYKUXHDLNXEPLJRUIVSQSOADXKTFXCEKZ");
    msg.x = 0.666030871772;
    msg.y = 0.217173859066;
    msg.depth = 0.923777256164;
    msg.var_x = 0.186108241362;
    msg.var_y = 0.525794445845;

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
    msg.setTimeStamp(0.999865254298);
    msg.setSource(21836U);
    msg.setSourceEntity(24U);
    msg.setDestination(25440U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("XEUZDJDKOYSECPZJOTYJVNWFRBTKOHNSDLKNSBOXVIIMPUSOIBPCZUFCGJHAYNUNMXIMKDWYHGPKNVLKVXPYOBSDQAGGJ");
    msg.x = 0.885155132701;
    msg.y = 0.761271888946;
    msg.depth = 0.401085743858;
    msg.var_x = 0.592999062708;
    msg.var_y = 0.0641674464729;

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
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.195466360441);
    msg.setSource(33804U);
    msg.setSourceEntity(27U);
    msg.setDestination(44934U);
    msg.setDestinationEntity(78U);
    msg.x = 0.609691678769;
    msg.y = 0.493732175299;
    msg.z = 0.785294980336;

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
    msg.setTimeStamp(0.626680133644);
    msg.setSource(53743U);
    msg.setSourceEntity(211U);
    msg.setDestination(20496U);
    msg.setDestinationEntity(212U);
    msg.x = 0.913745275717;
    msg.y = 0.455864070534;
    msg.z = 0.369289285241;

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
    msg.setTimeStamp(0.986900060179);
    msg.setSource(10462U);
    msg.setSourceEntity(253U);
    msg.setDestination(48402U);
    msg.setDestinationEntity(32U);
    msg.x = 0.141866212665;
    msg.y = 0.70734536373;
    msg.z = 0.525031603661;

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
    msg.setTimeStamp(0.5737093527);
    msg.setSource(39054U);
    msg.setSourceEntity(14U);
    msg.setDestination(5288U);
    msg.setDestinationEntity(99U);
    msg.value = 0.283052326916;

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
    msg.setTimeStamp(0.436146664798);
    msg.setSource(24425U);
    msg.setSourceEntity(135U);
    msg.setDestination(61346U);
    msg.setDestinationEntity(150U);
    msg.value = 0.145935313711;

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
    msg.setTimeStamp(0.311727936332);
    msg.setSource(55227U);
    msg.setSourceEntity(4U);
    msg.setDestination(63903U);
    msg.setDestinationEntity(97U);
    msg.value = 0.585043290305;

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
    msg.setTimeStamp(0.607804722851);
    msg.setSource(27163U);
    msg.setSourceEntity(165U);
    msg.setDestination(40925U);
    msg.setDestinationEntity(61U);
    msg.value = 0.699497257012;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.90212002322);
    msg.setSource(5530U);
    msg.setSourceEntity(131U);
    msg.setDestination(23258U);
    msg.setDestinationEntity(52U);
    msg.value = 0.527491541242;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.014793691139);
    msg.setSource(25931U);
    msg.setSourceEntity(220U);
    msg.setDestination(35652U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0983213476532;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.17183988128);
    msg.setSource(40847U);
    msg.setSourceEntity(242U);
    msg.setDestination(44627U);
    msg.setDestinationEntity(68U);
    msg.value = 0.694458537021;
    msg.speed_units = 139U;

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
    msg.setTimeStamp(0.733394809173);
    msg.setSource(3390U);
    msg.setSourceEntity(230U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(127U);
    msg.value = 0.346265979331;
    msg.speed_units = 229U;

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
    msg.setTimeStamp(0.300480334576);
    msg.setSource(41758U);
    msg.setSourceEntity(112U);
    msg.setDestination(48500U);
    msg.setDestinationEntity(108U);
    msg.value = 0.858200250913;
    msg.speed_units = 8U;

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
    msg.setTimeStamp(0.887942253465);
    msg.setSource(20603U);
    msg.setSourceEntity(100U);
    msg.setDestination(55915U);
    msg.setDestinationEntity(55U);
    msg.value = 0.347609943335;

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
    msg.setTimeStamp(0.688801588746);
    msg.setSource(39866U);
    msg.setSourceEntity(169U);
    msg.setDestination(62170U);
    msg.setDestinationEntity(8U);
    msg.value = 0.858998927588;

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
    msg.setTimeStamp(0.59440288743);
    msg.setSource(62757U);
    msg.setSourceEntity(156U);
    msg.setDestination(32180U);
    msg.setDestinationEntity(43U);
    msg.value = 0.784231732964;

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
    msg.setTimeStamp(0.190660674219);
    msg.setSource(39550U);
    msg.setSourceEntity(155U);
    msg.setDestination(51158U);
    msg.setDestinationEntity(42U);
    msg.value = 0.992665090305;

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
    msg.setTimeStamp(0.169304754944);
    msg.setSource(49136U);
    msg.setSourceEntity(55U);
    msg.setDestination(30845U);
    msg.setDestinationEntity(194U);
    msg.value = 0.524215713116;

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
    msg.setTimeStamp(0.998733545588);
    msg.setSource(5341U);
    msg.setSourceEntity(20U);
    msg.setDestination(56644U);
    msg.setDestinationEntity(197U);
    msg.value = 0.374444436494;

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
    msg.setTimeStamp(0.562363266065);
    msg.setSource(12054U);
    msg.setSourceEntity(55U);
    msg.setDestination(10243U);
    msg.setDestinationEntity(184U);
    msg.value = 0.190753304263;

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
    msg.setTimeStamp(0.0360256441592);
    msg.setSource(64777U);
    msg.setSourceEntity(189U);
    msg.setDestination(18309U);
    msg.setDestinationEntity(225U);
    msg.value = 0.703446028676;

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
    msg.setTimeStamp(0.547933736742);
    msg.setSource(12914U);
    msg.setSourceEntity(43U);
    msg.setDestination(34127U);
    msg.setDestinationEntity(31U);
    msg.value = 0.397666227902;

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
    msg.setTimeStamp(0.431147159443);
    msg.setSource(37685U);
    msg.setSourceEntity(148U);
    msg.setDestination(57605U);
    msg.setDestinationEntity(141U);
    msg.start_lat = 0.0834690210936;
    msg.start_lon = 0.532279611454;
    msg.start_z = 0.709927379755;
    msg.start_z_units = 240U;
    msg.end_lat = 0.675180665313;
    msg.end_lon = 0.785004662264;
    msg.end_z = 0.0653397836985;
    msg.end_z_units = 92U;
    msg.speed = 0.733437997246;
    msg.speed_units = 204U;
    msg.lradius = 0.330678864412;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.858719611804);
    msg.setSource(14144U);
    msg.setSourceEntity(50U);
    msg.setDestination(57535U);
    msg.setDestinationEntity(29U);
    msg.start_lat = 0.482987905578;
    msg.start_lon = 0.622902501367;
    msg.start_z = 0.744990647636;
    msg.start_z_units = 57U;
    msg.end_lat = 0.503443215549;
    msg.end_lon = 0.342078378086;
    msg.end_z = 0.9386221932;
    msg.end_z_units = 75U;
    msg.speed = 0.839675190295;
    msg.speed_units = 36U;
    msg.lradius = 0.897991970773;
    msg.flags = 22U;

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
    msg.setTimeStamp(0.345025463353);
    msg.setSource(34616U);
    msg.setSourceEntity(36U);
    msg.setDestination(21089U);
    msg.setDestinationEntity(41U);
    msg.start_lat = 0.300724805193;
    msg.start_lon = 0.464571175094;
    msg.start_z = 0.824872629624;
    msg.start_z_units = 123U;
    msg.end_lat = 0.790114574834;
    msg.end_lon = 0.665131722828;
    msg.end_z = 0.312607915823;
    msg.end_z_units = 124U;
    msg.speed = 0.806091804893;
    msg.speed_units = 159U;
    msg.lradius = 0.453222434864;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.403315346422);
    msg.setSource(17901U);
    msg.setSourceEntity(34U);
    msg.setDestination(58059U);
    msg.setDestinationEntity(180U);
    msg.x = 0.279226099544;
    msg.y = 0.395432767542;
    msg.z = 0.73583260613;
    msg.k = 0.0986699647854;
    msg.m = 0.745017033657;
    msg.n = 0.0430056204008;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.204814553358);
    msg.setSource(5815U);
    msg.setSourceEntity(197U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(142U);
    msg.x = 0.766316340996;
    msg.y = 0.830292763512;
    msg.z = 0.143019609536;
    msg.k = 0.245731162043;
    msg.m = 0.811034161288;
    msg.n = 0.0468013647987;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.577848797388);
    msg.setSource(9908U);
    msg.setSourceEntity(36U);
    msg.setDestination(53060U);
    msg.setDestinationEntity(159U);
    msg.x = 0.593264253859;
    msg.y = 0.0516651403096;
    msg.z = 0.608367307524;
    msg.k = 0.436831888028;
    msg.m = 0.540295593038;
    msg.n = 0.79234508187;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.630530532671);
    msg.setSource(57174U);
    msg.setSourceEntity(209U);
    msg.setDestination(21665U);
    msg.setDestinationEntity(103U);
    msg.value = 0.543984613886;

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
    msg.setTimeStamp(0.393234364359);
    msg.setSource(6272U);
    msg.setSourceEntity(30U);
    msg.setDestination(43347U);
    msg.setDestinationEntity(48U);
    msg.value = 0.396058697508;

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
    msg.setTimeStamp(0.269400749457);
    msg.setSource(21861U);
    msg.setSourceEntity(25U);
    msg.setDestination(55023U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0298981815151;

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
    msg.setTimeStamp(0.469685457549);
    msg.setSource(26135U);
    msg.setSourceEntity(139U);
    msg.setDestination(10865U);
    msg.setDestinationEntity(173U);
    msg.u = 0.768600224327;
    msg.v = 0.377539038777;
    msg.w = 0.789592728152;
    msg.p = 0.842638952174;
    msg.q = 0.832997651821;
    msg.r = 0.479002420753;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.92213826272);
    msg.setSource(25085U);
    msg.setSourceEntity(128U);
    msg.setDestination(12606U);
    msg.setDestinationEntity(196U);
    msg.u = 0.409391167338;
    msg.v = 0.160399241665;
    msg.w = 0.179155890958;
    msg.p = 0.682723469091;
    msg.q = 0.208171827426;
    msg.r = 0.307221599001;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.71755089253);
    msg.setSource(41422U);
    msg.setSourceEntity(3U);
    msg.setDestination(21903U);
    msg.setDestinationEntity(116U);
    msg.u = 0.278819949971;
    msg.v = 0.794057627964;
    msg.w = 0.642555058859;
    msg.p = 0.197736983132;
    msg.q = 0.665436379582;
    msg.r = 0.610607484818;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.307410283374);
    msg.setSource(63602U);
    msg.setSourceEntity(45U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(4U);
    msg.start_lat = 0.279117684235;
    msg.start_lon = 0.690813267055;
    msg.start_z = 0.0469309658851;
    msg.start_z_units = 228U;
    msg.end_lat = 0.795071291353;
    msg.end_lon = 0.360587956874;
    msg.end_z = 0.863153834622;
    msg.end_z_units = 114U;
    msg.lradius = 0.497835715254;
    msg.flags = 115U;
    msg.x = 0.806813861352;
    msg.y = 0.355356296692;
    msg.z = 0.433915545268;
    msg.vx = 0.0529550456983;
    msg.vy = 0.126666228102;
    msg.vz = 0.578042702898;
    msg.course_error = 0.719125238656;
    msg.eta = 38546U;

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
    msg.setTimeStamp(0.47345156478);
    msg.setSource(50892U);
    msg.setSourceEntity(169U);
    msg.setDestination(9889U);
    msg.setDestinationEntity(189U);
    msg.start_lat = 0.540420688534;
    msg.start_lon = 0.964571724657;
    msg.start_z = 0.66206008144;
    msg.start_z_units = 132U;
    msg.end_lat = 0.613518475476;
    msg.end_lon = 0.805145860091;
    msg.end_z = 0.191267933966;
    msg.end_z_units = 112U;
    msg.lradius = 0.373819801962;
    msg.flags = 84U;
    msg.x = 0.00121805729058;
    msg.y = 0.957503986599;
    msg.z = 0.648090716697;
    msg.vx = 0.885551459996;
    msg.vy = 0.854851240508;
    msg.vz = 0.730338241041;
    msg.course_error = 0.840848884206;
    msg.eta = 55924U;

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
    msg.setTimeStamp(0.63179935637);
    msg.setSource(55791U);
    msg.setSourceEntity(197U);
    msg.setDestination(12483U);
    msg.setDestinationEntity(217U);
    msg.start_lat = 0.316727133435;
    msg.start_lon = 0.0877155473195;
    msg.start_z = 0.696633448601;
    msg.start_z_units = 226U;
    msg.end_lat = 0.862813565449;
    msg.end_lon = 0.126837074796;
    msg.end_z = 0.623786683779;
    msg.end_z_units = 226U;
    msg.lradius = 0.14468557538;
    msg.flags = 100U;
    msg.x = 0.430337703805;
    msg.y = 0.832389128843;
    msg.z = 0.858111058101;
    msg.vx = 0.562507689427;
    msg.vy = 0.122978008161;
    msg.vz = 0.368911442672;
    msg.course_error = 0.315230451593;
    msg.eta = 8551U;

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
    msg.setTimeStamp(0.62622354304);
    msg.setSource(50560U);
    msg.setSourceEntity(142U);
    msg.setDestination(21296U);
    msg.setDestinationEntity(204U);
    msg.k = 0.0114174070205;
    msg.m = 0.149698787288;
    msg.n = 0.781755051321;

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
    msg.setTimeStamp(0.388613886101);
    msg.setSource(46691U);
    msg.setSourceEntity(227U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(148U);
    msg.k = 0.626941842412;
    msg.m = 0.0726535569079;
    msg.n = 0.111067747622;

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
    msg.setTimeStamp(0.139890508565);
    msg.setSource(64479U);
    msg.setSourceEntity(233U);
    msg.setDestination(24978U);
    msg.setDestinationEntity(140U);
    msg.k = 0.353850459685;
    msg.m = 0.77294338707;
    msg.n = 0.434034869301;

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
    msg.setTimeStamp(0.277897738239);
    msg.setSource(19931U);
    msg.setSourceEntity(131U);
    msg.setDestination(27806U);
    msg.setDestinationEntity(158U);
    msg.p = 0.822950256719;
    msg.i = 0.770987937256;
    msg.d = 0.300516437505;
    msg.a = 0.584773993057;

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
    msg.setTimeStamp(0.756524891464);
    msg.setSource(30837U);
    msg.setSourceEntity(155U);
    msg.setDestination(13920U);
    msg.setDestinationEntity(65U);
    msg.p = 0.295939996129;
    msg.i = 0.493080011349;
    msg.d = 0.0769533078823;
    msg.a = 0.995061234266;

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
    msg.setTimeStamp(0.673014850949);
    msg.setSource(15820U);
    msg.setSourceEntity(197U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(197U);
    msg.p = 0.468125370689;
    msg.i = 0.932785042612;
    msg.d = 0.940298604472;
    msg.a = 0.41223773801;

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
    msg.setTimeStamp(0.0396055698488);
    msg.setSource(14869U);
    msg.setSourceEntity(194U);
    msg.setDestination(49836U);
    msg.setDestinationEntity(72U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.237634852339);
    msg.setSource(22747U);
    msg.setSourceEntity(96U);
    msg.setDestination(51804U);
    msg.setDestinationEntity(201U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.212964184359);
    msg.setSource(37190U);
    msg.setSourceEntity(57U);
    msg.setDestination(13718U);
    msg.setDestinationEntity(158U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.749868166213);
    msg.setSource(42495U);
    msg.setSourceEntity(29U);
    msg.setDestination(27631U);
    msg.setDestinationEntity(143U);
    msg.timeout = 12214U;
    msg.lat = 0.722209651457;
    msg.lon = 0.289826895219;
    msg.z = 0.978928785427;
    msg.z_units = 141U;
    msg.speed = 0.477118609721;
    msg.speed_units = 37U;
    msg.roll = 0.317493926181;
    msg.pitch = 0.628019136347;
    msg.yaw = 0.356073214998;
    msg.custom.assign("MLETSHFNCOQGWSGHZQWVCNKFYSADZACWOEDHJQLYJUNPRDVCYPLMWTEEHMQXBPTTNLXYKTGRNURFCBGYVQAYIJRHTJSAFOPCMVD");

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
    msg.setTimeStamp(0.439043323888);
    msg.setSource(32426U);
    msg.setSourceEntity(171U);
    msg.setDestination(41387U);
    msg.setDestinationEntity(55U);
    msg.timeout = 16890U;
    msg.lat = 0.479821940256;
    msg.lon = 0.249176689631;
    msg.z = 0.539241835528;
    msg.z_units = 195U;
    msg.speed = 0.145802479205;
    msg.speed_units = 176U;
    msg.roll = 0.030910237967;
    msg.pitch = 0.414280804436;
    msg.yaw = 0.560475003024;
    msg.custom.assign("SHLDUIYSQRIQZIPPYWAYWODGJBSLKPKRQXIQCDNJANCAVNXBYZNHZYOPEJSMCETAVZTXPVQDXIFMJB");

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
    msg.setTimeStamp(0.351559484805);
    msg.setSource(9102U);
    msg.setSourceEntity(46U);
    msg.setDestination(64621U);
    msg.setDestinationEntity(88U);
    msg.timeout = 58925U;
    msg.lat = 0.137405302888;
    msg.lon = 0.177495708251;
    msg.z = 0.608047471164;
    msg.z_units = 186U;
    msg.speed = 0.311112832394;
    msg.speed_units = 182U;
    msg.roll = 0.512753995382;
    msg.pitch = 0.369300589248;
    msg.yaw = 0.902584609958;
    msg.custom.assign("AHONWRTQXIXWNBTBZTQZOZMBVVSQNBFRFHYGXODJVHVMCUFCONCAUJCNVAKLAFYSIQRHSZTEKCMDCLPQUNVNTLGSUFIWJXRDXDCETVPOJNKBDYVAMTDJOEIEFMZGVPSQQYTJSJIAKKFLDLLPHXNXGMDYQERGGFGFOCVUGIJCIDXRBITKYWYGMWULBEHWPEPPSQQ");

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
    msg.setTimeStamp(0.999415602519);
    msg.setSource(18938U);
    msg.setSourceEntity(71U);
    msg.setDestination(63169U);
    msg.setDestinationEntity(23U);
    msg.timeout = 63457U;
    msg.lat = 0.459904743667;
    msg.lon = 0.844851067826;
    msg.z = 0.834538516906;
    msg.z_units = 150U;
    msg.speed = 0.0840237041684;
    msg.speed_units = 237U;
    msg.duration = 27273U;
    msg.radius = 0.717297780095;
    msg.flags = 171U;
    msg.custom.assign("FUIOTCLBRUJL");

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
    msg.setTimeStamp(0.818593609175);
    msg.setSource(34700U);
    msg.setSourceEntity(149U);
    msg.setDestination(40092U);
    msg.setDestinationEntity(18U);
    msg.timeout = 50183U;
    msg.lat = 0.365306995052;
    msg.lon = 0.124161479243;
    msg.z = 0.339636949015;
    msg.z_units = 232U;
    msg.speed = 0.064530857276;
    msg.speed_units = 68U;
    msg.duration = 12016U;
    msg.radius = 0.277563566504;
    msg.flags = 234U;
    msg.custom.assign("IANBHZRHVQFPYGZEXRCHYYNEBSZSJFDEVLIJSTRYBKCXNLMDFGECOGCVXIGOXQJTPQUKWQOOZRGPFANHPNGIWHXKXDFLNZSBURUBPKXFOWZMITZHAQEYQZFYOIETLVTSNDJEMPJTSFMNAATAQCIZYWHUEPWNAACHRD");

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
    msg.setTimeStamp(0.603175073179);
    msg.setSource(15380U);
    msg.setSourceEntity(189U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(231U);
    msg.timeout = 56565U;
    msg.lat = 0.798305858122;
    msg.lon = 0.737407538575;
    msg.z = 0.258489652073;
    msg.z_units = 155U;
    msg.speed = 0.29939151062;
    msg.speed_units = 224U;
    msg.duration = 26479U;
    msg.radius = 0.762757450529;
    msg.flags = 29U;
    msg.custom.assign("MWHKQQTXNAIMMWHKRFKQGGLDFQDBWANCGIHBJRMDIQEKGOBYGPJECYBZYSIBQPDSXXJWRWCHK");

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
    msg.setTimeStamp(0.173454559278);
    msg.setSource(51598U);
    msg.setSourceEntity(190U);
    msg.setDestination(61492U);
    msg.setDestinationEntity(214U);
    msg.custom.assign("EPGMYIKDFRPBFYIMAUXWAHEJWIVIGLKTPKQJHRHJKCZATONGIKCASOZWKJTSQSEAUOBVPZYCYGSFXRSYEVBNPWLZ");

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
    msg.setTimeStamp(0.994949028373);
    msg.setSource(15255U);
    msg.setSourceEntity(127U);
    msg.setDestination(23783U);
    msg.setDestinationEntity(252U);
    msg.custom.assign("LMXABHGBEHIICSFYBRZAZUCLOPBIMTHWFYRGEVPPWNLKKSGAHKRXBSZCBVMUEWQTDKBOOUXBAEMEDCNOGIACOCKPQFQLJJWRPTTULBI");

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
    msg.setTimeStamp(0.407165304548);
    msg.setSource(45923U);
    msg.setSourceEntity(19U);
    msg.setDestination(620U);
    msg.setDestinationEntity(222U);
    msg.custom.assign("DYUIWRXHEUZFIGEEWPMYONJRNNBRHIAPWAPJSKGQCQXTIIYKCYFZALCLFVCBOOSAFUPQPJMKYELETWIUVWWCXFZXHQECOGDRSGWOAEKCSUAAVQPLJISIHXDYPJBGRJNQLALEBYJMHZQVGVDUUVKE");

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
    msg.setTimeStamp(0.520726639213);
    msg.setSource(64834U);
    msg.setSourceEntity(59U);
    msg.setDestination(9576U);
    msg.setDestinationEntity(139U);
    msg.timeout = 37207U;
    msg.lat = 0.38782188707;
    msg.lon = 0.749924011911;
    msg.z = 0.63709409391;
    msg.z_units = 98U;
    msg.duration = 38515U;
    msg.speed = 0.722557777898;
    msg.speed_units = 92U;
    msg.type = 37U;
    msg.radius = 0.64173628459;
    msg.length = 0.431753965553;
    msg.bearing = 0.137252941701;
    msg.direction = 221U;
    msg.custom.assign("RMYPLSRHBVJFKVSPTJKVDLEWVQMHPICGHTIGBXGFWFUPDEIGVQGGCSAXKFBCCSZAAURRYEYAQCODCJKDHMPIKQHWGJBRNLRQMEAKAYETSMAXKBTLPVFTIYDXLNSFORANWHZUKCYZDUVUJIZEVCWQNHMCN");

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
    msg.setTimeStamp(0.85623776485);
    msg.setSource(24336U);
    msg.setSourceEntity(231U);
    msg.setDestination(52942U);
    msg.setDestinationEntity(36U);
    msg.timeout = 14408U;
    msg.lat = 0.130214513221;
    msg.lon = 0.127810938061;
    msg.z = 0.328460609843;
    msg.z_units = 117U;
    msg.duration = 53991U;
    msg.speed = 0.501247323963;
    msg.speed_units = 246U;
    msg.type = 14U;
    msg.radius = 0.5263985868;
    msg.length = 0.622391311954;
    msg.bearing = 0.816989362437;
    msg.direction = 65U;
    msg.custom.assign("VZVIAQTFAVCQKSENVRKUBMIPMDFEJQPYHQBOKJHDJMQDKNOLWKCHHUAFRMSYTORRUCDYXPMWYZEWAGSJSFDOQHWOMLJBIXFDWVBBIPRYNHBTBNUELDEYIMXTFGOAXXTJKSELLESNOFKIZJCJLUDTLIHVAHGRYWUTRSCRKPFQPBGZZCILQAALGWUPYLURCPOSTAESZPAXZZJWGY");

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
    msg.setTimeStamp(0.979782564586);
    msg.setSource(3430U);
    msg.setSourceEntity(187U);
    msg.setDestination(18113U);
    msg.setDestinationEntity(107U);
    msg.timeout = 16915U;
    msg.lat = 0.250159674095;
    msg.lon = 0.416237468057;
    msg.z = 0.281703797245;
    msg.z_units = 180U;
    msg.duration = 51405U;
    msg.speed = 0.723235642752;
    msg.speed_units = 184U;
    msg.type = 35U;
    msg.radius = 0.20701008997;
    msg.length = 0.848627035611;
    msg.bearing = 0.753970343691;
    msg.direction = 58U;
    msg.custom.assign("ECGWYMFAGHFZRLGKSEXZNWJPBTKMPROUXZWGSFNKXQEBHDABJXTRWYKQMQDXIEBTXUXCOCFCAKSRHUARHDYWLLEIFBVSQCZEVZOWKPUKBWARINMJDNBDQTQLVPIUPAOKOXTRZPNOPFONCLJZYHMNVXPSUKUMRKVHEEDCDIGANUYATRFQTAIRYVGUVJBISYYBWCGGLJCLT");

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
    msg.setTimeStamp(0.0326882786436);
    msg.setSource(62195U);
    msg.setSourceEntity(175U);
    msg.setDestination(1709U);
    msg.setDestinationEntity(234U);
    msg.duration = 1745U;
    msg.custom.assign("EPFWHFAZDIEPVKUYAMZUQUYMJRBYVLRGVGEVENDCRLHXEUWYIDCGUADFKQEKZNWHZTRMYBFUBSTJCIFEGIFRIZXSEJHITJIMLTFPOVUWMYSWTDKOHLPPNOGQJWIQVFQWKS");

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
    msg.setTimeStamp(0.437801007557);
    msg.setSource(42695U);
    msg.setSourceEntity(62U);
    msg.setDestination(39449U);
    msg.setDestinationEntity(169U);
    msg.duration = 16849U;
    msg.custom.assign("PLSTGEVORSEXJNTDCVBADPEHRDJXSPNZMXUDZMXLYXPKUTGGTBOWEVXSCYSWIMGURBGDZOGUFEWKWIEKQGMCVZIQMFCTOJCKNOHAYFJRSAANIOWYAFVEMKWWKNPNKZGHBDTGYKBHBUUJLXONDFOQPCEISWLFWTVOMVBLVORPKYJRMVISUJNXFRCLQACMMTDZQLKYYEARHNQLDXIFVBSSXHUJQCHUFQRGYRQAUIZHAA");

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
    msg.setTimeStamp(0.0338855519878);
    msg.setSource(3840U);
    msg.setSourceEntity(162U);
    msg.setDestination(41874U);
    msg.setDestinationEntity(7U);
    msg.duration = 4693U;
    msg.custom.assign("MNOIAOEAZKSLJRZVIVWPGBSXBMRDQZNJXGMMKGOMSHTKZNJFAQMVOEKIOUSWITNQCJTGAPCVIYKIKTCRI");

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
    msg.setTimeStamp(0.414323871606);
    msg.setSource(31233U);
    msg.setSourceEntity(195U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(220U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.31859163173;
    msg.control.set(tmp_msg_0);
    msg.duration = 41751U;
    msg.custom.assign("TWJUBXREPOGZWOHFWGRWYIRBQRYVXBBZQHTCUDEMVPYXKGSGZHBHJNELOUJYHJXZAITFPTTUMGFMUDHJBAFEXWXVKRCPIWDGSQHRGBLKMAOUZVZROBCDYHRTDJIPXGUFRDXRZQAKVKINVJCPYOEMILN");

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
    msg.setTimeStamp(0.394644090379);
    msg.setSource(63137U);
    msg.setSourceEntity(122U);
    msg.setDestination(46063U);
    msg.setDestinationEntity(65U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.257213781507;
    tmp_msg_0.z_units = 58U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51173U;
    msg.custom.assign("TZHXHGTNBAXFVNAOMPYXZORNUVPCJTQPULRBYKJVOZVROAMKQMOMWEPFDXVXDBXBERYZQWOJGHGKJYICSKEVAKXZJYHURCKUCJQRZTRMEZTLBWHCDWRQCBWIQAESPNYLHADLLGFMHKLNWFFOMZWNSICHBVTKEFXWDDJLYHOVIGLDGLJNZLQIEYD");

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
    msg.setTimeStamp(0.0604259598031);
    msg.setSource(1618U);
    msg.setSourceEntity(249U);
    msg.setDestination(57947U);
    msg.setDestinationEntity(92U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.0620783294476;
    tmp_msg_0.start_lon = 0.955289091152;
    tmp_msg_0.start_z = 0.442510999853;
    tmp_msg_0.start_z_units = 156U;
    tmp_msg_0.end_lat = 0.358713145785;
    tmp_msg_0.end_lon = 0.0445518148818;
    tmp_msg_0.end_z = 0.886035834903;
    tmp_msg_0.end_z_units = 231U;
    tmp_msg_0.speed = 0.0181788404098;
    tmp_msg_0.speed_units = 205U;
    tmp_msg_0.lradius = 0.364205033779;
    tmp_msg_0.flags = 211U;
    msg.control.set(tmp_msg_0);
    msg.duration = 39225U;
    msg.custom.assign("EUTMPXHKLGEFJDIXKLRXNMRYBCTWWTJQYJQJZDJOSSOMYGKTCKFTMEULPNXIZCVRBVNVVQXXXXSMWOPLAWAPFYBUCSPFBPWKUEDSMNGANJGLWRHDCWGICTTROIMASPRNTGLNUAODTQIPHIVDKZAWSCDBZIUQEDZQZJHBFFVLXQZYXKUVEWZLZHOAZDLAFKJYAIBEOIWLOVYNGVYIJHAPRRERCHTKMRPVHKBFNSM");

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
    msg.setTimeStamp(0.103704336419);
    msg.setSource(63563U);
    msg.setSourceEntity(164U);
    msg.setDestination(56652U);
    msg.setDestinationEntity(150U);
    msg.timeout = 21238U;
    msg.lat = 0.785925742416;
    msg.lon = 0.140658861741;
    msg.z = 0.144989820543;
    msg.z_units = 174U;
    msg.speed = 0.0330763682777;
    msg.speed_units = 178U;
    msg.bearing = 0.601927541781;
    msg.cross_angle = 0.501619223716;
    msg.width = 0.158109508725;
    msg.length = 0.555474795778;
    msg.hstep = 0.0161677266869;
    msg.coff = 223U;
    msg.alternation = 208U;
    msg.flags = 46U;
    msg.custom.assign("ZIJJCUQKNVGPAVSILRZBCTHIZBJZAJYCPRVRAQYYNKCZPOJLFQHSSMTBOBRKKDWRFWDJBAIHRDVECFDDFLNSHKPXXHUCQEBROVZQTDDSNYMAVMWUUZYGYXWGXNEMPLRFZXKSKCTOQIGEUNFWETGIWWJGLXMNYAPCPMOLJSVPOLQCZUIEXAFJHDNTUAQBDSTYTBPVUMQLDG");

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
    msg.setTimeStamp(0.943311207991);
    msg.setSource(23901U);
    msg.setSourceEntity(26U);
    msg.setDestination(35606U);
    msg.setDestinationEntity(189U);
    msg.timeout = 15152U;
    msg.lat = 0.939647677381;
    msg.lon = 0.972401661835;
    msg.z = 0.54830827253;
    msg.z_units = 102U;
    msg.speed = 0.73050514142;
    msg.speed_units = 47U;
    msg.bearing = 0.528598141359;
    msg.cross_angle = 0.354894735616;
    msg.width = 0.076917072109;
    msg.length = 0.0783702350402;
    msg.hstep = 0.754811499947;
    msg.coff = 72U;
    msg.alternation = 133U;
    msg.flags = 43U;
    msg.custom.assign("TLPYTTGXSMLNRGLJLGCVIYDPWFAXPWGOZGVSJDIQKQWMISJUPOWKMFJRKGEAQTLXBEZKKOKEHBVTETFVWDHRIOQWNEKMIRQXCBEWHCLSUAAAUYYPHUOXPBQPHWCMMQJURXEUNDCVJVOBVNMFAZYUYHAIGXCMSSGGENBTCZRFSVQKNPFXXJMISFZKERVYFFOBZOBZQMLJUYTWHTCIYLFAKGHPDDRBEJZUDRVNODDXZWAADLLSRNQO");

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
    msg.setTimeStamp(0.0607846691162);
    msg.setSource(12896U);
    msg.setSourceEntity(93U);
    msg.setDestination(42621U);
    msg.setDestinationEntity(37U);
    msg.timeout = 17479U;
    msg.lat = 0.304669226098;
    msg.lon = 0.623124117533;
    msg.z = 0.272612170226;
    msg.z_units = 195U;
    msg.speed = 0.913322575005;
    msg.speed_units = 30U;
    msg.bearing = 0.403763481414;
    msg.cross_angle = 0.319653789676;
    msg.width = 0.686905677817;
    msg.length = 0.169155208098;
    msg.hstep = 0.397250451157;
    msg.coff = 2U;
    msg.alternation = 192U;
    msg.flags = 97U;
    msg.custom.assign("ADBDKKLKZAEZTNJZIOURBJRTLTJULXULNKBGIWXMYHFSMEWNNLCYDQTCHAMMCFPIZGVEYQEVSYQIBBLQCGTZNWRYFUDYKXPXIEUABIXUXZJNVAWQDKYHHAJRQFSURPCOCHIJY");

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
    msg.setTimeStamp(0.254786156228);
    msg.setSource(3935U);
    msg.setSourceEntity(102U);
    msg.setDestination(8344U);
    msg.setDestinationEntity(138U);
    msg.timeout = 23658U;
    msg.lat = 0.352310702765;
    msg.lon = 0.0599112895392;
    msg.z = 0.206429729972;
    msg.z_units = 183U;
    msg.speed = 0.684317699517;
    msg.speed_units = 90U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.063127332332;
    tmp_msg_0.y = 0.0342609287413;
    tmp_msg_0.z = 0.988093479227;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GCKYIWJYNDTJZOPUCADXMWAAAXQVURFKJVXIAJDNSBTXBWTWRMPEEFDSONIUCLRYGMFSHBYVFCHARTPBWFXRTPTLHHHPIGYRTKNHTNSMUKKGVVBDJJFDCWMCQGULSSGIJHXGBELMSEUENUCLQZERJQEMKIYLDPKVKIWPCRWOLVUPJKFMCNXASOSMZQZZUXCYAOZDLBEGOKQRAVQZFOZXNPBTQEILSIRFEWAX");

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
    msg.setTimeStamp(0.173515095489);
    msg.setSource(21221U);
    msg.setSourceEntity(52U);
    msg.setDestination(28913U);
    msg.setDestinationEntity(73U);
    msg.timeout = 10239U;
    msg.lat = 0.53377204475;
    msg.lon = 0.775085110594;
    msg.z = 0.427404058341;
    msg.z_units = 130U;
    msg.speed = 0.206750253719;
    msg.speed_units = 17U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.534004954723;
    tmp_msg_0.y = 0.799819025063;
    tmp_msg_0.z = 0.319102260608;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UOJGBPBXGUUZTGZVLMWOTQSZTETTFUEFJBLOXQRQJCFDULCROKYSUYWYKMNLCNMFMABYBHSDXAGIXPALVVVZKDVPJISUIAHNPSHGOTECFKSGERYHWARPWSGUGXDKDLGYMLQENVFVCICJXLRQURXOMMZHSQADZNPVYVHYIASKMICNFOZADOPHWQJAPQUWRIKRPNK");

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
    msg.setTimeStamp(0.220613064374);
    msg.setSource(28559U);
    msg.setSourceEntity(212U);
    msg.setDestination(7281U);
    msg.setDestinationEntity(228U);
    msg.timeout = 46302U;
    msg.lat = 0.864161602092;
    msg.lon = 0.044936167318;
    msg.z = 0.331310960134;
    msg.z_units = 195U;
    msg.speed = 0.637279096299;
    msg.speed_units = 238U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.372810596708;
    tmp_msg_0.y = 0.386335837686;
    tmp_msg_0.z = 0.826510185047;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZKTJKRGVXIGHBFCRRAUMIWQDCKMFONFEDCDHZISPWSLLINZPJHUCEMHRNHPHYSMQ");

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
    msg.setTimeStamp(0.946126393985);
    msg.setSource(55593U);
    msg.setSourceEntity(41U);
    msg.setDestination(29755U);
    msg.setDestinationEntity(215U);
    msg.x = 0.970541808082;
    msg.y = 0.274650824723;
    msg.z = 0.342745137478;

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
    msg.setTimeStamp(0.886288563707);
    msg.setSource(35603U);
    msg.setSourceEntity(179U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(208U);
    msg.x = 0.608647678149;
    msg.y = 0.27263440291;
    msg.z = 0.689859448905;

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
    msg.setTimeStamp(0.0311762900255);
    msg.setSource(50052U);
    msg.setSourceEntity(152U);
    msg.setDestination(32281U);
    msg.setDestinationEntity(245U);
    msg.x = 0.321847904745;
    msg.y = 0.273950912771;
    msg.z = 0.734480716011;

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
    msg.setTimeStamp(0.0198581256331);
    msg.setSource(60976U);
    msg.setSourceEntity(134U);
    msg.setDestination(18671U);
    msg.setDestinationEntity(19U);
    msg.timeout = 38721U;
    msg.lat = 0.175412054709;
    msg.lon = 0.846242577444;
    msg.z = 0.525395032383;
    msg.z_units = 44U;
    msg.amplitude = 0.933274213141;
    msg.pitch = 0.562264053178;
    msg.speed = 0.581557616449;
    msg.speed_units = 159U;
    msg.custom.assign("HQQTEDARLYMTUVJHEKSUNHOWGGFACWAVNJRKLOZDDZNCWEOVBCGXIRTLKBLJKUSBBKRQMIMUYXPSADWJXUJRFTFAFZMYPVSZIKMAIVMBWUIYIITXGAXPUBEHTYEWQBCREDFLZWKLFSDMPDFYDHIUXFMQGSHLQHSJVBAZWGUZFECHTRYHJENJYCXQTCHISVZYYNGSCOLRDRVRTNTZFBOEQPPCPXGVGUSLQAKXWXOVKIOQMGBWMNNDNPOZKPJ");

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
    msg.setTimeStamp(0.624480270963);
    msg.setSource(11465U);
    msg.setSourceEntity(62U);
    msg.setDestination(37844U);
    msg.setDestinationEntity(146U);
    msg.timeout = 32898U;
    msg.lat = 0.524873506199;
    msg.lon = 0.523389150839;
    msg.z = 0.0199421875499;
    msg.z_units = 142U;
    msg.amplitude = 0.303638183377;
    msg.pitch = 0.271269201649;
    msg.speed = 0.892975316027;
    msg.speed_units = 117U;
    msg.custom.assign("WHXOCNDWHJLBAXJIGPCXUWIRLQUQSOPEUYNBOTZFQAJHYWNZCXBBZPEFKFCCMVUNJSAXNGNFSAAXJASEDHYYTMPDAZPSJLUKFGJMGPMOTQBWVITWJOOLBRWEINXJRYWDKLPDYBBGSKZHHTVUMIOLBGLRGMTRSNESOKTRZMKEOE");

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
    msg.setTimeStamp(0.216475464092);
    msg.setSource(17324U);
    msg.setSourceEntity(80U);
    msg.setDestination(30728U);
    msg.setDestinationEntity(187U);
    msg.timeout = 16607U;
    msg.lat = 0.997921731444;
    msg.lon = 0.287868398541;
    msg.z = 0.489988520343;
    msg.z_units = 243U;
    msg.amplitude = 0.0732326946356;
    msg.pitch = 0.94094874385;
    msg.speed = 0.324023812296;
    msg.speed_units = 117U;
    msg.custom.assign("LXQMILQEVGUIHJAFLYMNNTJONPSBTPDQQGUXRAJQSKSKNGTPGZWYJDHZHQGFRORSMGEFAQCABRITFDYJTCAXKLDRUQEBWNWCMJSXEYBXFELRNDIEDWNQVTTTWKAXYUKDYSLFPPOKSQCGZIRLWWZOVSMCZDZVSFINGEWOMFIBRENUZPYFJRFPOCMIUXXLHULUVPAYTUZBLTXSAEDYGAZOHCMOBCMEWHKVCBHHICD");

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
    msg.setTimeStamp(0.122688843062);
    msg.setSource(60331U);
    msg.setSourceEntity(191U);
    msg.setDestination(32037U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.985488163718);
    msg.setSource(1553U);
    msg.setSourceEntity(28U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.205525536136);
    msg.setSource(37934U);
    msg.setSourceEntity(70U);
    msg.setDestination(28541U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.191247942972);
    msg.setSource(32467U);
    msg.setSourceEntity(168U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.472415607591;
    msg.lon = 0.0407017923494;
    msg.z = 0.718501270212;
    msg.z_units = 154U;
    msg.radius = 0.349920970397;
    msg.duration = 6614U;
    msg.speed = 0.50478254983;
    msg.speed_units = 124U;
    msg.custom.assign("BALAEXEFZIJTBETJCQCPCKMPEWCQRXOUFGZXUOVKJDXPUABLYJNDKDVNJRSVFGHWAQMCIYBADWOFLVXWAIIQLAELEVZMPDPFKLPWSSPWMJEVIMORQMAONNHZHGJ");

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
    msg.setTimeStamp(0.613698703596);
    msg.setSource(36512U);
    msg.setSourceEntity(186U);
    msg.setDestination(59587U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.490298518222;
    msg.lon = 0.765354245074;
    msg.z = 0.136954682727;
    msg.z_units = 117U;
    msg.radius = 0.218118518552;
    msg.duration = 18214U;
    msg.speed = 0.479386278034;
    msg.speed_units = 240U;
    msg.custom.assign("XKSHKTQNGUGJSIDALUQBUBLHUZKXPDFOKCJWMJZFOKWVPSAEJGADCINPWCIDRGYLSMTYIHTFYXUDCBXHEQSEKKLAUCBXGNVISGHZCIVIQPJQOVLCVQAXQBZDJNOHSBZJOUMBMVETGOWXVTRXEAORPFPENUOZLTQCJNMUCPWNJVZMNQGIFKNWXFBNYAWRIPSWWYMPGERHRFHRBLVWFBD");

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
    msg.setTimeStamp(0.35740612772);
    msg.setSource(4115U);
    msg.setSourceEntity(236U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.872594338912;
    msg.lon = 0.27345547418;
    msg.z = 0.549825748739;
    msg.z_units = 160U;
    msg.radius = 0.894945849886;
    msg.duration = 48754U;
    msg.speed = 0.30349503201;
    msg.speed_units = 233U;
    msg.custom.assign("UNZDUGLMOZODMDPSQPRKSBUUMKSYVEGSZPCOJTFPJQLTQADHWRYYDGZVEQMYFFFDOALVCJNAPENHAFHDWLOIAROBJMGUHKMQFWECKCMNXIUHCNYQMBJBBACGOTHK");

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
    msg.setTimeStamp(0.609747697864);
    msg.setSource(37482U);
    msg.setSourceEntity(247U);
    msg.setDestination(19744U);
    msg.setDestinationEntity(147U);
    msg.timeout = 63666U;
    msg.flags = 34U;
    msg.lat = 0.622966900421;
    msg.lon = 0.436252588211;
    msg.start_z = 0.757541886254;
    msg.start_z_units = 26U;
    msg.end_z = 0.976028337419;
    msg.end_z_units = 79U;
    msg.radius = 0.339844555146;
    msg.speed = 0.758763779704;
    msg.speed_units = 119U;
    msg.custom.assign("IKKXWFBZRFIYAUVZ");

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
    msg.setTimeStamp(0.569433242962);
    msg.setSource(51009U);
    msg.setSourceEntity(148U);
    msg.setDestination(59181U);
    msg.setDestinationEntity(145U);
    msg.timeout = 61740U;
    msg.flags = 97U;
    msg.lat = 0.239833750803;
    msg.lon = 0.218383110436;
    msg.start_z = 0.541800846242;
    msg.start_z_units = 4U;
    msg.end_z = 0.130994820829;
    msg.end_z_units = 112U;
    msg.radius = 0.682717700851;
    msg.speed = 0.939050990164;
    msg.speed_units = 112U;
    msg.custom.assign("QJOBKRVGYYUROLGKOIMPFXGZMLZQCCSHMHTRDAOBZUXHYCPVJJRJWDIYUUEMWNCPDXYVPPZSWCVETETTJBOGWJSZSRKHBIXGCOADNQYFGIZTN");

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
    msg.setTimeStamp(0.095788308123);
    msg.setSource(24237U);
    msg.setSourceEntity(212U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(32U);
    msg.timeout = 55912U;
    msg.flags = 233U;
    msg.lat = 0.826330045742;
    msg.lon = 0.693119048895;
    msg.start_z = 0.0529118041511;
    msg.start_z_units = 25U;
    msg.end_z = 0.345999316635;
    msg.end_z_units = 232U;
    msg.radius = 0.271076613835;
    msg.speed = 0.73052395728;
    msg.speed_units = 229U;
    msg.custom.assign("YPPKEOPCWQFKCVSJFQ");

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
    msg.setTimeStamp(0.217251097092);
    msg.setSource(23047U);
    msg.setSourceEntity(66U);
    msg.setDestination(45693U);
    msg.setDestinationEntity(127U);
    msg.timeout = 41362U;
    msg.lat = 0.274545824155;
    msg.lon = 0.339227235108;
    msg.z = 0.113611186076;
    msg.z_units = 157U;
    msg.speed = 0.581851246473;
    msg.speed_units = 173U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.959859255819;
    tmp_msg_0.y = 0.165646313389;
    tmp_msg_0.z = 0.415704269329;
    tmp_msg_0.t = 0.825420534716;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BRTDBFCEXARFDMBEXMACILSKTVJPOPCEQPZBAXJUSGRKVEZCPULLAVNVDKVSITDATNGFD");

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
    msg.setTimeStamp(0.736552981425);
    msg.setSource(21991U);
    msg.setSourceEntity(63U);
    msg.setDestination(5352U);
    msg.setDestinationEntity(181U);
    msg.timeout = 15568U;
    msg.lat = 0.647145848019;
    msg.lon = 0.77131613573;
    msg.z = 0.217419893517;
    msg.z_units = 207U;
    msg.speed = 0.930691980819;
    msg.speed_units = 97U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.912053830691;
    tmp_msg_0.y = 0.378512317505;
    tmp_msg_0.z = 0.153770494834;
    tmp_msg_0.t = 0.259096734189;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LCKQHNDLSETCGLGEPMDLAACUCXNSZZSOXUSSZBYWTQAUOEIQYODFCFYJUAHWPRVPVYRBHRRMHVXGCHJAWRZXKMKWGSKNFOXEDLRGQXYUIGJIFQFYIQMLOZFDYUXFDTNJINNPLWVYUGPWRMABJWSMVJWASCBMGBPVPOOKRFKGOHUKDTMRNECIJQADZZBBAZUEGSJIVAUYPXWZ");

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
    msg.setTimeStamp(0.185547765877);
    msg.setSource(2134U);
    msg.setSourceEntity(166U);
    msg.setDestination(51295U);
    msg.setDestinationEntity(26U);
    msg.timeout = 54382U;
    msg.lat = 0.827694691433;
    msg.lon = 0.928801700739;
    msg.z = 0.216178960146;
    msg.z_units = 92U;
    msg.speed = 0.848982815894;
    msg.speed_units = 78U;
    msg.custom.assign("WAZNDGOUPZTRMNVVAYUBLZNWWZPWHELXFCWQLABBVHOIVQVISMRXQDSOCCJCYSFCKMGPNFESIOHSPIQHYVTWSUHTTLQJ");

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
    msg.setTimeStamp(0.455647025041);
    msg.setSource(51530U);
    msg.setSourceEntity(102U);
    msg.setDestination(12695U);
    msg.setDestinationEntity(32U);
    msg.x = 0.332532494878;
    msg.y = 0.0840267482706;
    msg.z = 0.0247084336432;
    msg.t = 0.488156010715;

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
    msg.setTimeStamp(0.420485083799);
    msg.setSource(56456U);
    msg.setSourceEntity(114U);
    msg.setDestination(49202U);
    msg.setDestinationEntity(121U);
    msg.x = 0.0471623005244;
    msg.y = 0.133181914519;
    msg.z = 0.41098590855;
    msg.t = 0.798703272209;

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
    msg.setTimeStamp(0.69654905236);
    msg.setSource(13382U);
    msg.setSourceEntity(237U);
    msg.setDestination(16656U);
    msg.setDestinationEntity(228U);
    msg.x = 0.72151069684;
    msg.y = 0.153330116462;
    msg.z = 0.992609926184;
    msg.t = 0.459698489502;

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
    msg.setTimeStamp(0.148627081955);
    msg.setSource(18680U);
    msg.setSourceEntity(168U);
    msg.setDestination(29708U);
    msg.setDestinationEntity(68U);
    msg.timeout = 55437U;
    msg.name.assign("OEBXMPRXRBCSYBGLMZKSLBDOZCABAYXWNTVMSOGRZIRDKIWLJESBXNUVNGUMYCFUAHNVQFYTKJKHGCRRUGAJNFWNZKOPREESTWHPUCDECQXVUMJTASPTRFDJYQYZUMPADZXEBONGUQTFKQEFEQLYMQAQIEALPDILYGJUFYKKBMDPGQXJINWQKHLOGPSXWWPCFOARMHZDVHXIVWIJITCS");
    msg.custom.assign("BZZFTLMLFLGQEZOGYUQPLDAVIWNSZDMNLYMNQMTWAANCMPZATWQDKBUUUETYIFYDSHCKHWZKDBPHAFXREKVBOICMIFVTPKHOCRCJJMVRRVUOQBSZCYSIDICUPIHLWESRGUDCJEZSXTRZKVTHFJLAGWFGNBXOHPYQBUGWYKGGVJDFYOIKRBQQXUPVLEXOXLXRYDNLNYVSODAKXFJS");

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
    msg.setTimeStamp(0.121608373344);
    msg.setSource(34550U);
    msg.setSourceEntity(242U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(70U);
    msg.timeout = 29519U;
    msg.name.assign("PSPFMCDOUOSLRMXZCVNNESXJTFKPLQTPKLHFQGJWQGYDGLPODITQOAKFNLEIWMDDHXQZ");
    msg.custom.assign("EVUMHJWPLHUZBPPT");

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
    msg.setTimeStamp(0.575987729398);
    msg.setSource(36027U);
    msg.setSourceEntity(23U);
    msg.setDestination(64195U);
    msg.setDestinationEntity(49U);
    msg.timeout = 3489U;
    msg.name.assign("JMRRFJCGFQEJIGXYFVKHQFRCZGZVBPIXBCSRUMVHMNCAFQJUY");
    msg.custom.assign("IKAGSLEFEFQQJRCSJOATOOCVXPXJAPOJSOQJWQBZUGYUXMFATKPBVZNSRTXFLJEDSNCMAEBROVPXCMJCTUNIXLVHOBIKPQRZSKXRBSDGYKIDZNAIRAICWHBZRVOKEJMLIKKH");

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
    msg.setTimeStamp(0.113510505144);
    msg.setSource(59076U);
    msg.setSourceEntity(89U);
    msg.setDestination(59837U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.328645524256;
    msg.lon = 0.787478609621;
    msg.z = 0.427352901638;
    msg.z_units = 46U;
    msg.speed = 0.996255296542;
    msg.speed_units = 39U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.14987277492;
    tmp_msg_0.y = 0.333547719151;
    tmp_msg_0.z = 0.43219693221;
    tmp_msg_0.t = 0.708866356316;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 54764U;
    tmp_msg_1.off_x = 0.871095888821;
    tmp_msg_1.off_y = 0.915950789504;
    tmp_msg_1.off_z = 0.627151639469;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.228955836485;
    msg.custom.assign("QLQKUYWERXJYNPWTMSAXMBPXELKRFDRQIDTUGQCAOIRKJHUBRFIVGZCGFKVYMXVLLWCZMIKJKFNZIULFVQQKPLUMMBOVCEVBGJSIWCEGYOQDEDFJRFIYXAQMYAFZYZWACHHLDATGSTNZSWOXNREJVBPWIESNHCHZSHAUYPYTBLATHDHAMROEXDXXQGOOMFNNIGS");

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
    msg.setTimeStamp(0.445304812906);
    msg.setSource(19557U);
    msg.setSourceEntity(113U);
    msg.setDestination(44628U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.946535383992;
    msg.lon = 0.228167160753;
    msg.z = 0.0139653479496;
    msg.z_units = 176U;
    msg.speed = 0.452177709316;
    msg.speed_units = 199U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21235U;
    tmp_msg_0.off_x = 0.887386491268;
    tmp_msg_0.off_y = 0.392528101099;
    tmp_msg_0.off_z = 0.437322413493;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.468718288567;
    msg.custom.assign("ZXCRMCFKSFEGYAJNJPZMHYAWKHLMCUCXYTRMRUIIFXMEUGKBCRQWHLGSQQYPMVYIAKXUQNEUQOYGBHQVVRINBBSHSVTJDRJTOOAPNZHAOROVHPPDXPDBAVZAZJMRUHFBCE");

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
    msg.setTimeStamp(0.0752216782575);
    msg.setSource(20231U);
    msg.setSourceEntity(113U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.187546269811;
    msg.lon = 0.832820064953;
    msg.z = 0.378070985383;
    msg.z_units = 249U;
    msg.speed = 0.368353642938;
    msg.speed_units = 3U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.737970167776;
    tmp_msg_0.y = 0.899002423339;
    tmp_msg_0.z = 0.512470869297;
    tmp_msg_0.t = 0.81364917223;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 50399U;
    tmp_msg_1.off_x = 0.873190103008;
    tmp_msg_1.off_y = 0.864884414634;
    tmp_msg_1.off_z = 0.196740784193;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.807070745861;
    msg.custom.assign("BTNOJKZPYJJAWMTQDELXEVDTTAJOGMBHKAFDIFYCRYWERSFJOLROGDBRYGPOQJSDXIFIYICNGUZBRWUZGSAWNHCUVGMHDAZXKPSEAHTEXQIWPKTZBPTCDNGVJXGTQLCVDVRMTZEZNVKMQXRRCDLLUWPCFKFBQHQLCMSPACOTJKUHHYSNSMFVHKVDQXIVXJGXMQZYNSKBRWJNRIIEINQAYEELOXFUBA");

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
    msg.setTimeStamp(0.426124809529);
    msg.setSource(24540U);
    msg.setSourceEntity(211U);
    msg.setDestination(42887U);
    msg.setDestinationEntity(218U);
    msg.vid = 34286U;
    msg.off_x = 0.786853849951;
    msg.off_y = 0.21092373375;
    msg.off_z = 0.727296828957;

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
    msg.setTimeStamp(0.945177404313);
    msg.setSource(53800U);
    msg.setSourceEntity(84U);
    msg.setDestination(1147U);
    msg.setDestinationEntity(119U);
    msg.vid = 39628U;
    msg.off_x = 0.73984186798;
    msg.off_y = 0.605102759418;
    msg.off_z = 0.161669955368;

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
    msg.setTimeStamp(0.520313283322);
    msg.setSource(18179U);
    msg.setSourceEntity(61U);
    msg.setDestination(47526U);
    msg.setDestinationEntity(202U);
    msg.vid = 43538U;
    msg.off_x = 0.344759479012;
    msg.off_y = 0.948606779359;
    msg.off_z = 0.695011836392;

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
    msg.setTimeStamp(0.999737368329);
    msg.setSource(10114U);
    msg.setSourceEntity(119U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.546413975234);
    msg.setSource(49978U);
    msg.setSourceEntity(237U);
    msg.setDestination(30711U);
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
    msg.setTimeStamp(0.221445860006);
    msg.setSource(30447U);
    msg.setSourceEntity(252U);
    msg.setDestination(31597U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.483518533634);
    msg.setSource(31596U);
    msg.setSourceEntity(99U);
    msg.setDestination(56918U);
    msg.setDestinationEntity(0U);
    msg.mid = 1018U;

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
    msg.setTimeStamp(0.952136408919);
    msg.setSource(24479U);
    msg.setSourceEntity(136U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(151U);
    msg.mid = 23351U;

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
    msg.setTimeStamp(0.796933132123);
    msg.setSource(51931U);
    msg.setSourceEntity(141U);
    msg.setDestination(15039U);
    msg.setDestinationEntity(170U);
    msg.mid = 60855U;

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
    msg.setTimeStamp(0.592993263153);
    msg.setSource(13950U);
    msg.setSourceEntity(166U);
    msg.setDestination(18065U);
    msg.setDestinationEntity(74U);
    msg.state = 1U;
    msg.eta = 27618U;
    msg.info.assign("CJUZBNTRYIPURZQGMMSFRCNHAWVAJMWHPXAOWYADVWFQRLSKHIVUDYOLCFEEJIHBDJXOIGGTRUKAWJISTAWQYLJKICEVEDZZGKLWOIDUPSYZSPGTSTXJQATPNADFVVVMBPFYGKLQHGXRZNLYNTVGUULOCJUXOONXBA");

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
    msg.setTimeStamp(0.602130679228);
    msg.setSource(53911U);
    msg.setSourceEntity(145U);
    msg.setDestination(35366U);
    msg.setDestinationEntity(163U);
    msg.state = 108U;
    msg.eta = 24140U;
    msg.info.assign("LDSHOVHFGJDLERBKVVXPBOKHJPILWZIGZUFFBLAGFSAJOXZVVRVNOUGRWTTNGCIHPEZSCJNSOSRTXUHNDDKYDYNQHWPGHUGXVMYJMXPKCWKTRSDR");

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
    msg.setTimeStamp(0.742071478573);
    msg.setSource(6289U);
    msg.setSourceEntity(175U);
    msg.setDestination(54757U);
    msg.setDestinationEntity(122U);
    msg.state = 17U;
    msg.eta = 23757U;
    msg.info.assign("EVQAHEZDMVDYADRMOZHOZZISRALJCYDAGCBNOJMQHLTJKERSYPLHZXGPESGCSBRTAWZQFVXUZEWDGVKNSMORLFEUJPWCNXXADWNVOVGHAPISHTCHQGTMDLIZJUGPZUERNNFFAAWQTBQKCQUJDKFSPLFOHPETXCGXMBIPBGYPSWYNSIKFIBXTQKYNKYUVCOBBNLBRWQPTCXJWBLUYOLRIIYEFMWVSYNTXQM");

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
    msg.setTimeStamp(0.954586500464);
    msg.setSource(10686U);
    msg.setSourceEntity(47U);
    msg.setDestination(4349U);
    msg.setDestinationEntity(133U);
    msg.system = 4972U;
    msg.duration = 5307U;
    msg.speed = 0.146698848216;
    msg.speed_units = 177U;
    msg.x = 0.659057366881;
    msg.y = 0.195390773348;
    msg.z = 0.431025661544;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.772922147153);
    msg.setSource(46234U);
    msg.setSourceEntity(153U);
    msg.setDestination(18606U);
    msg.setDestinationEntity(229U);
    msg.system = 43386U;
    msg.duration = 3391U;
    msg.speed = 0.279454348316;
    msg.speed_units = 193U;
    msg.x = 0.11154174037;
    msg.y = 0.928520643545;
    msg.z = 0.0267985191516;
    msg.z_units = 40U;

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
    msg.setTimeStamp(0.84431965565);
    msg.setSource(25899U);
    msg.setSourceEntity(111U);
    msg.setDestination(7736U);
    msg.setDestinationEntity(135U);
    msg.system = 4614U;
    msg.duration = 55431U;
    msg.speed = 0.429639133568;
    msg.speed_units = 164U;
    msg.x = 0.613603270975;
    msg.y = 0.280476458754;
    msg.z = 0.767598922995;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.631160123071);
    msg.setSource(5261U);
    msg.setSourceEntity(39U);
    msg.setDestination(49269U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.195747865421;
    msg.lon = 0.550337533296;
    msg.speed = 0.439862445731;
    msg.speed_units = 143U;
    msg.duration = 58288U;
    msg.sys_a = 30148U;
    msg.sys_b = 33412U;
    msg.move_threshold = 0.681029977677;

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
    msg.setTimeStamp(0.381434762703);
    msg.setSource(57652U);
    msg.setSourceEntity(131U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.369800798452;
    msg.lon = 0.512037912699;
    msg.speed = 0.403455215346;
    msg.speed_units = 80U;
    msg.duration = 46612U;
    msg.sys_a = 60920U;
    msg.sys_b = 51969U;
    msg.move_threshold = 0.538622508641;

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
    msg.setTimeStamp(0.77901580761);
    msg.setSource(20118U);
    msg.setSourceEntity(8U);
    msg.setDestination(63975U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.310921342739;
    msg.lon = 0.292186071648;
    msg.speed = 0.535096863736;
    msg.speed_units = 79U;
    msg.duration = 28007U;
    msg.sys_a = 13564U;
    msg.sys_b = 23234U;
    msg.move_threshold = 0.77894298466;

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
    msg.setTimeStamp(0.0289204880481);
    msg.setSource(10619U);
    msg.setSourceEntity(101U);
    msg.setDestination(28032U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.0710101911037;
    msg.lon = 0.933849895991;
    msg.z = 0.440149399967;
    msg.z_units = 217U;
    msg.speed = 0.395670243794;
    msg.speed_units = 219U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.206804613455;
    tmp_msg_0.lon = 0.943759624383;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XBIHJRCWHTVHGLEGLSDKTAZEAOILAWQTRGOSZITQKFSWCDGUXURXEBNXDWPACTJMPGHIONMJNAFFYQMWCEHXYBW");

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
    msg.setTimeStamp(0.545441593028);
    msg.setSource(47458U);
    msg.setSourceEntity(94U);
    msg.setDestination(13439U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.576641588857;
    msg.lon = 0.129492394284;
    msg.z = 0.964949285576;
    msg.z_units = 92U;
    msg.speed = 0.3538718417;
    msg.speed_units = 184U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.665084368604;
    tmp_msg_0.lon = 0.0826142717672;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ETKCFFIDHCSRWFXDTFACMOBKUSMSTFYQRXCALACABFIXCYRAXMSZSSWFOJUYVFJAJAMPQLKGJNRUKEZLLIXWYQPBUTZBFHGDJQUQJDVYBJESPNRFGRELIKGKGVPTDYMTBVZEHZNTGQTWOAQVOLHPWGXGZWYNQLUZNMMJRXWCSXIDWNPOKLHEEIOPXHVTGBIAJQWPCPBYYVVEOIDMKHD");

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
    msg.setTimeStamp(0.994009517848);
    msg.setSource(60041U);
    msg.setSourceEntity(170U);
    msg.setDestination(27580U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.686952877581;
    msg.lon = 0.753063032093;
    msg.z = 0.66997197988;
    msg.z_units = 200U;
    msg.speed = 0.422447839753;
    msg.speed_units = 20U;
    msg.custom.assign("PBPSFMWGXOEHTWVMARPIRLZRAPLJPXBYYRIJSCKJGLPYENSQTZNYMCTUVLBDTIHWTBQGHDWXVFXFTJKWUE");

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
    msg.setTimeStamp(0.671095224777);
    msg.setSource(45947U);
    msg.setSourceEntity(208U);
    msg.setDestination(18162U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.194354033767;
    msg.lon = 0.00444461869122;

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
    msg.setTimeStamp(0.501138660529);
    msg.setSource(56245U);
    msg.setSourceEntity(72U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.312578330576;
    msg.lon = 0.782972631257;

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
    msg.setTimeStamp(0.972425329067);
    msg.setSource(57132U);
    msg.setSourceEntity(126U);
    msg.setDestination(12260U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.022038772122;
    msg.lon = 0.537931998307;

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
    msg.setTimeStamp(0.00346169782568);
    msg.setSource(43366U);
    msg.setSourceEntity(70U);
    msg.setDestination(33567U);
    msg.setDestinationEntity(80U);
    msg.timeout = 17604U;
    msg.lat = 0.614647588012;
    msg.lon = 0.0165820397616;
    msg.z = 0.42940685665;
    msg.z_units = 74U;
    msg.pitch = 0.466665348906;
    msg.amplitude = 0.324467668037;
    msg.duration = 34553U;
    msg.speed = 0.642550591671;
    msg.speed_units = 148U;
    msg.radius = 0.159597178715;
    msg.direction = 31U;
    msg.custom.assign("JIMJJQPUUOIKGOD");

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
    msg.setTimeStamp(0.31200864417);
    msg.setSource(8673U);
    msg.setSourceEntity(109U);
    msg.setDestination(52527U);
    msg.setDestinationEntity(19U);
    msg.timeout = 64786U;
    msg.lat = 0.834613983816;
    msg.lon = 0.0537138682799;
    msg.z = 0.940841852155;
    msg.z_units = 72U;
    msg.pitch = 0.870773442875;
    msg.amplitude = 0.886407431294;
    msg.duration = 57925U;
    msg.speed = 0.0867974928254;
    msg.speed_units = 172U;
    msg.radius = 0.606676409995;
    msg.direction = 8U;
    msg.custom.assign("TFKOTELZILQCFLYPCMCEOHDBUQBHIINSWREQZYBQGNBKVJYOTHAYRSSDKWNDQNREUXAAZOXHYUOUUFPTMHOGSIVGBZCKOCWQNNDMFCQGZMDWGHGGSXKLLTNWBYIDBLRKJMWPWNSJMFMITRHLBPVPUZVGWNMDIPBQZSEYVVFTHXXVJUXRKXKJXJGIUYWRYUJJEBJFVRCOLPADFVCCGOPCFPVTSEOAFYDZMPIMKSAXEQALQTASIUEDWJHH");

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
    msg.setTimeStamp(0.08928973446);
    msg.setSource(58827U);
    msg.setSourceEntity(220U);
    msg.setDestination(58711U);
    msg.setDestinationEntity(233U);
    msg.timeout = 42422U;
    msg.lat = 0.237514642875;
    msg.lon = 0.90224642709;
    msg.z = 0.740837389256;
    msg.z_units = 107U;
    msg.pitch = 0.499361790205;
    msg.amplitude = 0.437467214264;
    msg.duration = 4406U;
    msg.speed = 0.0995979244418;
    msg.speed_units = 87U;
    msg.radius = 0.133044935108;
    msg.direction = 46U;
    msg.custom.assign("LAZLUQUATBYNSYRHQWGEXGCFPQYBDPKINGCZOFMXNIIKFOHUUAOJOAJOBMUZSMGGTDLJFKSIVDPGCCIKCXSNEYNGLVZFAMMYFXXJJFLBNUYZSHJNOLKOFZASYPMWWMQTDAWLXAQGRXDTTZWMRMCDRNQTKBVIWZBXKBNIARDNRPWQVFUVPGZCHFLKHCQPLEWGSTCXEEQWPJHWVJEMSEHVRDKEY");

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
    msg.setTimeStamp(0.00379725820771);
    msg.setSource(35527U);
    msg.setSourceEntity(193U);
    msg.setDestination(15438U);
    msg.setDestinationEntity(97U);
    msg.formation_name.assign("OQWZWSJEBKDXQRRDCCRDYGJFSSBGMTROEAAVSNYZZYEOYYNMUWPJCSDXKTFDEASBHUMLNOGV");
    msg.reference_frame = 9U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28563U;
    tmp_msg_0.off_x = 0.313290105367;
    tmp_msg_0.off_y = 0.855126914535;
    tmp_msg_0.off_z = 0.515823555128;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NEKNYFXHXBSIAAKMYQDQAVHYRPPKXKCMRLGQUVAXGJLFPDBCTQHLOZGAJLOQNYGMZPBMEAJCNSMAIDNUKSZAZEWTFEHINOPOWZCOSKYSZHOSFGTUEU");

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
    msg.setTimeStamp(0.979154562459);
    msg.setSource(65099U);
    msg.setSourceEntity(230U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("HWJOLZFJZBIGMTDYPKTMYMLNYQAXUFFKAVECJCILZDVKXYLAFLNERCPKXAQMGJEFWTFXBSBSGDRDOYDKUYHUVKOJBWIWQQNOPVQXSRGZVGTTMHBAOGOCPKUEAZARSKLHBCPZCJNIRWOEVZIRLMNFV");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14575U;
    tmp_msg_0.off_x = 0.885385229327;
    tmp_msg_0.off_y = 0.102061103903;
    tmp_msg_0.off_z = 0.665155382938;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MWIOHCZXLXUFZHDBGFZPPIQLPCHCNAVKREAQITHIRFTCEFGOQWOLNUIYXQDTJXXGLPLBMKRSKARNGWGWZRTBYAZUSKGWLBXHSENMDDZFZ");

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
    msg.setTimeStamp(0.278340507409);
    msg.setSource(40864U);
    msg.setSourceEntity(152U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(20U);
    msg.formation_name.assign("NYLBFGJLYZNFUZSYHHGZKEPCHOQZMGRJBBXRWABHASQUTRSTIPEXMVWIBCPXOIZWTVUTNUJPDCLQKKKIZWEJIJALISNGNNCYVHVXSPLJXMFEDEFWZNKALD");
    msg.reference_frame = 100U;
    msg.custom.assign("OAUFVIUWJFXPCLSKOIFNXRSXPMAQWAFZHRFAIVQTQTTVIYDXGCYQDPRGQCNTBYFWKLQAJRHMUNWDDBNSOHWVNDHMMTAVYOHURZNKGADLGMZGUHPZYUUEAPXCLEXDPHVEEYNOZUPTIZIMXCSEEI");

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
    msg.setTimeStamp(0.222658030381);
    msg.setSource(37063U);
    msg.setSourceEntity(188U);
    msg.setDestination(56414U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("ZHCXPUJHFTKKBBERVEKGZWLKIBADLWUDPCDKQYXNQCIIXUWIHFAEJJHQJXNFAELXSNQRUVPRDGWCTCMTKTYVWACUIKEVKQKYTLZBQPFTNUJRUHSRXSGWNBNLMXVHMGEXGTDVMROFZOYMRGQWASEPMDFMVNBPSOOZKHCHFISASVGCNIJQSTMEVZQYDHOMUELYTIFDFVFWANZW");
    msg.formation_name.assign("BYMRNVZGEWBUPBKHMEYSDCQIHWWGAWYPPTV");
    msg.plan_id.assign("YZCHVIBGZAIQQNPNLUEDJJTMWRRWMMOFTKRWDICGQEHZOFVGYHRRBCCOKYFBIEPUDGEVDMSHXZLIUEIXUNMWHSUBTXONJWS");
    msg.description.assign("RJAEJZAMMSPJFNPERSSELAQWFCRNQXYCFEGBBLLNMYDJXRNPYGOKLVGTPUTZUDIZGCDZHXVSSKHUQYKCNAVOUJQUQMUDAIQVUTTODSEYVTXBGMHVVCJKKRG");
    msg.leader_speed = 0.104590258834;
    msg.leader_bank_lim = 0.520649293894;
    msg.pos_sim_err_lim = 0.323787099471;
    msg.pos_sim_err_wrn = 0.488137896996;
    msg.pos_sim_err_timeout = 22441U;
    msg.converg_max = 0.00204619760011;
    msg.converg_timeout = 61675U;
    msg.comms_timeout = 45624U;
    msg.turb_lim = 0.953309625203;
    msg.custom.assign("OJMFLGUCJCTUQTHBEJACBNVDXXMLQTBMEWKSGFVZCARBJLNCCKOFMOZMRRELNI");

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
    msg.setTimeStamp(0.223233992234);
    msg.setSource(61308U);
    msg.setSourceEntity(155U);
    msg.setDestination(2236U);
    msg.setDestinationEntity(9U);
    msg.group_name.assign("IJLRQWURUADZCFGLLEGRMZDOUZWGKYTTDAILELYOGVXKJSLEZCAMTECJIHEXLBUHTEAKDSNPXPQZATMOWEJVKEMFHNXWIHRSNFUNFKBTRM");
    msg.formation_name.assign("HHCSYPCOTZLJPKQWDMCVPPCTNPXOLSNDUETOJAEBSWUCEXWGJJNBDLSFKDFFFBGGVXTTVOCXMQRNZIEJLRHSRLKRXQGYYGYVAMNMNAGJKFVSCDTQAZQOGZENBHVWERYXKPIMNAKXDPTMVNMPOEOSIYJOLALMIBQGUHEWLQRKHETDGDLYZUWUFWYZIQWBKQFOFRUXJY");
    msg.plan_id.assign("NYVHYECOBLULZUATHTENTUAHBBNUIJGJHZLXQZSWWGDPBOHTQMDJAIAKKVKHEOLKTLMGYTCVVMSAGKMUQXYWA");
    msg.description.assign("ZRZPAZQUEKVPYVNWLGIBOUFGZTSCNTWYAHRFOHEJRSOZKWYYYAKONMNPMXXTYQADTJQIGJLKCIMOBCDCIGNXIKBMQEXBNOJXIIMAMEGZFZLZFZMFHFABBSHTUKPPRJNMGLLKSHFTRRYQHXHRSJSBPVYCEFTNGWMLUYBSCHJVUEUQVHOPJGUSBDBAPTVDEAAOXKLRUQFAOVLIDGULDDVWXWRTRSCPWKHNSCDUQETJVJX");
    msg.leader_speed = 0.779564964943;
    msg.leader_bank_lim = 0.344037167266;
    msg.pos_sim_err_lim = 0.943011183726;
    msg.pos_sim_err_wrn = 0.763072229262;
    msg.pos_sim_err_timeout = 51062U;
    msg.converg_max = 0.271640861124;
    msg.converg_timeout = 1989U;
    msg.comms_timeout = 57016U;
    msg.turb_lim = 0.888547019794;
    msg.custom.assign("JRAHAMRVTLSPOITZPCWPWJDJKFIHUHDOGLSBKYXTWLTXAKYISPOMUTVUVINZHZHHFXMAQQPPGUOEXEVTZNVJ");

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
    msg.setTimeStamp(0.567877497748);
    msg.setSource(25346U);
    msg.setSourceEntity(23U);
    msg.setDestination(12749U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("TAUNIOREBNMDPQZHXSKNZFHQLCYWOVCSRXWNAAHRRUSXGIA");
    msg.formation_name.assign("UKUKDIIITWJKFWHAGZTFCZOPWCHQAWFHNJSAYQQNHJIJPEYEIGPPATMOXXLWRWZKMNVRYMOOZTQDWZSUGVKOBBGNYKRFOQDFAIDOVKRUBLRPZRBVDLS");
    msg.plan_id.assign("HTJLAYOZSRJUVBTYDOQJGCAHFDPKWECMIUFCVVAAJFYSODECTBMZTLFZPIENNKTGLMQWSTTRFKWCG");
    msg.description.assign("PWAIXJOTKENMOPXIUJDMBLYNIXOGNIVWRZGSUOCSGJTBHTCGMRZCAAMAIGKFEJZWBFYKUEYESTBUFRVBLLIOKYJEOGOENXPPTQUOLTFYTW");
    msg.leader_speed = 0.268249808115;
    msg.leader_bank_lim = 0.888892246894;
    msg.pos_sim_err_lim = 0.987810153564;
    msg.pos_sim_err_wrn = 0.745261199565;
    msg.pos_sim_err_timeout = 58147U;
    msg.converg_max = 0.347643240003;
    msg.converg_timeout = 10410U;
    msg.comms_timeout = 37333U;
    msg.turb_lim = 0.853863239835;
    msg.custom.assign("KSZWVVQVDSEWJOPUDZTHHXQLBBPTLMXZVGMJMGOWBHGRRXYSCQYODBZPIPLBHGKYHMPLDGJEWAJTSBFEGCAKTXOOZPFXOJAUGLONMINVCUYLUPURLEDFECROMJWNRSDYOFZET");

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
    msg.setTimeStamp(0.0118572270823);
    msg.setSource(43550U);
    msg.setSourceEntity(179U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(106U);
    msg.control_src = 52968U;
    msg.control_ent = 90U;
    msg.timeout = 0.874505422698;
    msg.loiter_radius = 0.664501060242;
    msg.altitude_interval = 0.0316942755599;

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
    msg.setTimeStamp(0.210624564084);
    msg.setSource(8156U);
    msg.setSourceEntity(119U);
    msg.setDestination(11907U);
    msg.setDestinationEntity(145U);
    msg.control_src = 62908U;
    msg.control_ent = 119U;
    msg.timeout = 0.634812332376;
    msg.loiter_radius = 0.165430965365;
    msg.altitude_interval = 0.762049598105;

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
    msg.setTimeStamp(0.703187717524);
    msg.setSource(14442U);
    msg.setSourceEntity(232U);
    msg.setDestination(39284U);
    msg.setDestinationEntity(56U);
    msg.control_src = 21461U;
    msg.control_ent = 109U;
    msg.timeout = 0.545243367066;
    msg.loiter_radius = 0.235450541188;
    msg.altitude_interval = 0.134093153708;

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
    msg.setTimeStamp(0.959173972234);
    msg.setSource(58772U);
    msg.setSourceEntity(164U);
    msg.setDestination(42053U);
    msg.setDestinationEntity(35U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.111600633368;
    tmp_msg_0.speed_units = 28U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7655108801;
    tmp_msg_1.z_units = 58U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.953525920077;
    msg.lon = 0.595123775429;

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
    msg.setTimeStamp(0.886323065981);
    msg.setSource(47965U);
    msg.setSourceEntity(35U);
    msg.setDestination(59907U);
    msg.setDestinationEntity(197U);
    msg.flags = 97U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.234286586092;
    tmp_msg_0.speed_units = 201U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.795516297848;
    tmp_msg_1.z_units = 127U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.740098450714;
    msg.lon = 0.63480533667;

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
    msg.setTimeStamp(0.189260788496);
    msg.setSource(43633U);
    msg.setSourceEntity(185U);
    msg.setDestination(39623U);
    msg.setDestinationEntity(200U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.75089280788;
    tmp_msg_0.speed_units = 231U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.262002003847;
    tmp_msg_1.z_units = 161U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0713373127408;
    msg.lon = 0.547794059631;

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
    msg.setTimeStamp(0.263228144906);
    msg.setSource(47841U);
    msg.setSourceEntity(9U);
    msg.setDestination(31407U);
    msg.setDestinationEntity(245U);
    msg.control_src = 26282U;
    msg.control_ent = 101U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.560460845658;
    tmp_tmp_msg_0_0.speed_units = 196U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.80659374739;
    tmp_tmp_msg_0_1.z_units = 225U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.534899469108;
    tmp_msg_0.lon = 0.865647113891;
    msg.reference.set(tmp_msg_0);
    msg.state = 231U;
    msg.proximity = 140U;

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
    msg.setTimeStamp(0.202173866047);
    msg.setSource(62242U);
    msg.setSourceEntity(214U);
    msg.setDestination(62155U);
    msg.setDestinationEntity(48U);
    msg.control_src = 57500U;
    msg.control_ent = 248U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.515548167895;
    tmp_tmp_msg_0_0.speed_units = 199U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.424632147387;
    tmp_tmp_msg_0_1.z_units = 77U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0420843151027;
    tmp_msg_0.lon = 0.772401115836;
    msg.reference.set(tmp_msg_0);
    msg.state = 4U;
    msg.proximity = 94U;

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
    msg.setTimeStamp(0.841547780799);
    msg.setSource(51377U);
    msg.setSourceEntity(12U);
    msg.setDestination(19163U);
    msg.setDestinationEntity(199U);
    msg.control_src = 3160U;
    msg.control_ent = 143U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 63U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.663356375551;
    tmp_tmp_msg_0_0.speed_units = 234U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.295389793104;
    tmp_tmp_msg_0_1.z_units = 43U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.30649121246;
    tmp_msg_0.lon = 0.456719461345;
    msg.reference.set(tmp_msg_0);
    msg.state = 50U;
    msg.proximity = 5U;

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
    msg.setTimeStamp(0.979981490129);
    msg.setSource(28822U);
    msg.setSourceEntity(142U);
    msg.setDestination(52749U);
    msg.setDestinationEntity(251U);
    msg.op_mode = 177U;
    msg.error_count = 190U;
    msg.error_ents.assign("AHJWXCCMDZEKTBCWYEQUCMMTTUIPFDXLIVAKZUXHBFCOMJNWGHPERSENFRABPTZNLL");
    msg.maneuver_type = 41671U;
    msg.maneuver_stime = 0.0974755434172;
    msg.maneuver_eta = 6899U;
    msg.control_loops = 3291743017U;
    msg.flags = 242U;
    msg.last_error.assign("AVYBQHEAJUARXROOJVODNJHGNKOIYFHYHPZSDWMJNUZYTQUIUAKEZVEDBHLLOGOGFVPOVETSGCTKABUBSYPVHLSRVC");
    msg.last_error_time = 0.529713851881;

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
    msg.setTimeStamp(0.525422299456);
    msg.setSource(7293U);
    msg.setSourceEntity(71U);
    msg.setDestination(30453U);
    msg.setDestinationEntity(244U);
    msg.op_mode = 82U;
    msg.error_count = 35U;
    msg.error_ents.assign("RHFBETBVEYDQYEAISLYRMFLCKEZOHRCIAHIKSEWSZLXZJBGWZODOCZIKNDUJVLPKQPFSAXFBXURNPOUKDFNWXLGQMGHQUQPOYBPCZCNGESOMBMSMQVDIPCZWFWVDKXMQXUIJYHAPAFANGIZNVLSPUSZWEUWRFPTXVXYYGJZKIRSJEHVOTFKHTVCHCVYXQELTMKJTIQTHAMTWMAT");
    msg.maneuver_type = 39661U;
    msg.maneuver_stime = 0.265908985455;
    msg.maneuver_eta = 3421U;
    msg.control_loops = 3461523422U;
    msg.flags = 140U;
    msg.last_error.assign("UJZHTZLBDFGKMIBUUTWTYJLPB");
    msg.last_error_time = 0.396030326881;

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
    msg.setTimeStamp(0.242423009048);
    msg.setSource(54700U);
    msg.setSourceEntity(208U);
    msg.setDestination(58839U);
    msg.setDestinationEntity(196U);
    msg.op_mode = 184U;
    msg.error_count = 95U;
    msg.error_ents.assign("OBVMEQRUBGFOTIBJFYYTJOZYHWIGFCVSWTCQBYSTISOFLAMXJPMEMTVIGAMDFNEKWXEULFRDHDYYNQZQGUGPLPFEDOAAOHEHRHBPXFOXUCSSGDEKSPAGTKPDMZKWW");
    msg.maneuver_type = 57479U;
    msg.maneuver_stime = 0.53533169715;
    msg.maneuver_eta = 499U;
    msg.control_loops = 3692130682U;
    msg.flags = 39U;
    msg.last_error.assign("ZAMLLBETMPWKVQHBDECDWLKHQSRSRRLGFDZPYTXBRBKYTWOUCOAMACTIZICQDBIAYKTMEHLHZHEZIRRQYSIKGLFVQOIPODZXVMGGYJDKZSNJUONEIUGNNUUMBWYJIKMCANSCBKLSUQTVLPOTGNHJQFUSJFJTWWMJWZNFTJEYTUZMHXJPYHMEQGHBSRUGRQHBWVJEABAVFPGDSPRXIODOXNFXACKNVWFAGOFVUXVYOPPNCCDDYAL");
    msg.last_error_time = 0.969192309373;

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
    msg.setTimeStamp(0.870092577704);
    msg.setSource(46784U);
    msg.setSourceEntity(95U);
    msg.setDestination(19873U);
    msg.setDestinationEntity(90U);
    msg.type = 182U;
    msg.request_id = 57118U;
    msg.command = 12U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31846U;
    tmp_msg_0.name.assign("FPUZFVYZPFSKFKKEZOLHPWITQVNGAUFETNCINOGHYKTNYDBNVOPQZMTYWUYTJODQDXXGWHJHHROXMPZQJPDCSUQRBMAFEMLXTXOZCFNKVONDIIJCRYDQLYWEFWPBIGAEMJBIEEJBFCUDSBIYEKVQCUTRSZXGN");
    tmp_msg_0.custom.assign("PYGTVNHQDRXCZBMMZARYTFTDDQCKJJGBWPPJTPOOWQRGAHEJT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5843U;
    msg.info.assign("TAFRIZBOWMCCOZLRNMMBPGNOPQALWPIEQJTJGAFSKBKJUSUVWPFEGVUEZDFFKXSVJBPJEMLIQKCGJVVXZXDORIQIVCEAYCUUVYNOKCHEYSTYUSPSWHEZLODBKNWFNJEJDHXQRYCKGJHDAIOHMYLWRFCXXTNBMPBPDHEOBCXZGXGVSRSZRAOXMDMIDQOBUIIAAETZTRLKRVTLHJNKY");

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
    msg.setTimeStamp(0.105341662877);
    msg.setSource(46378U);
    msg.setSourceEntity(120U);
    msg.setDestination(57328U);
    msg.setDestinationEntity(128U);
    msg.type = 182U;
    msg.request_id = 64179U;
    msg.command = 42U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 20441U;
    tmp_msg_0.flags = 223U;
    tmp_msg_0.lat = 0.484502864003;
    tmp_msg_0.lon = 0.222077019349;
    tmp_msg_0.start_z = 0.733394371255;
    tmp_msg_0.start_z_units = 140U;
    tmp_msg_0.end_z = 0.348274439964;
    tmp_msg_0.end_z_units = 156U;
    tmp_msg_0.radius = 0.531462221056;
    tmp_msg_0.speed = 0.187222700934;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.custom.assign("QUVYRVCHUFDPHDHZTEOBICBZHWELQDIIACQRU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25575U;
    msg.info.assign("PXJMOXJSIFWHFZTQRDUMCWNOQFNFEBTYVTTZSGOEVEXEWQGNFMUADXGVUYBVRHQCURJFPSYDHEKGXILBUBKMRMABVVCKXQHPCLVSMCHIKYJYFKEWZKHPQJONRBCWQLPKNOQWMZLWJLDYXCYMBHLDEDAKQYCUTEGOXLPKZLPHTXPBYSRZM");

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
    msg.setTimeStamp(0.102144523091);
    msg.setSource(49410U);
    msg.setSourceEntity(75U);
    msg.setDestination(38256U);
    msg.setDestinationEntity(84U);
    msg.type = 106U;
    msg.request_id = 42564U;
    msg.command = 243U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.538261348917;
    tmp_msg_0.lon = 0.174314179535;
    tmp_msg_0.z = 0.113438989838;
    tmp_msg_0.z_units = 30U;
    tmp_msg_0.speed = 0.0728677581804;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.custom.assign("EUWULMIATNDOOUPQSDEJSJFHUJZSREJHGGGCPQAOQJWBMXYRXISNRNJREYSIHSOIHTEJRGLTALAN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1675U;
    msg.info.assign("OOTCVCZJYMEBOJGUCMHUMBUDZOBYCPSXQWGWIRYYVRBMBPQQFXEBYRBOHNAGUMPQFTRFWHYDKNJSKOYAXEKXEZYMJAIOSWKXEHIWVNMDJFKREPXLTLSPANOVRQRUQFIUPFWZHHTSRPLZQSGEHHLEILFDZILNGWUGNCFSKDECJZKLGIKAQYNGVDJLK");

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
    msg.setTimeStamp(0.30461663164);
    msg.setSource(22760U);
    msg.setSourceEntity(164U);
    msg.setDestination(46696U);
    msg.setDestinationEntity(188U);
    msg.command = 40U;
    msg.entities.assign("AYASQTKHTAISWJEIPRGQWRWWQIRYJPKCCMAGFEULGPGSHTAHIGFYWHYNKVIIMQVXAPBWDUNSGDNBBXDTHTJLBMMQWZDORODNGKZJCXLDABYEETVVCUWBZBFOYYVDCVHN");

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
    msg.setTimeStamp(0.48646968698);
    msg.setSource(45637U);
    msg.setSourceEntity(9U);
    msg.setDestination(48414U);
    msg.setDestinationEntity(210U);
    msg.command = 131U;
    msg.entities.assign("VLQXVSFKOHBLN");

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
    msg.setTimeStamp(0.444485056064);
    msg.setSource(61901U);
    msg.setSourceEntity(190U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(172U);
    msg.command = 150U;
    msg.entities.assign("ZJGPRCIVBATMFRWCDJISVECHGUYUIYSWRVWXEXYBJUZYBNPOBECTQHXSSMMDHBSSPIJRMQNUNONYYBHDEOVIDGZRHAGYEZDNWNKMGFLWHZXWQECDTJDLUOSUOVVBSAQZEBZMNNJ");

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
    msg.setTimeStamp(0.610301297361);
    msg.setSource(57015U);
    msg.setSourceEntity(114U);
    msg.setDestination(61306U);
    msg.setDestinationEntity(143U);
    msg.mcount = 80U;
    msg.mnames.assign("TJWUXOFXKXNXTYBBLOAVRE");
    msg.ecount = 169U;
    msg.enames.assign("RNFBXPYQPQHYRAVFMZV");
    msg.ccount = 22U;
    msg.cnames.assign("JTMWLVFEDWNSZODJIMSPHHMOINVTJKBPHVSMJQECBCVOVWLYIWCTAYAUWUPMKGVHKIZALEAOWUMOUAREFXTXNRHWUHDZSXYEPZKCQRHOVFFMXBMVDITVTIDUJCJFRZTQETHOFBPROHEIRU");
    msg.last_error.assign("DEGTPPMSCRCYXJIRAEFVYFPNBKBIGUZQNILVWNIVFOELEKWMGKCMLKBXNHSTUMWSIPJFBTRGXSTVIODRRULNHOCHXCQBWDGGFOIWHBPLVFJBIKABSUDJJQPYYKRHJIUM");
    msg.last_error_time = 0.214860148819;

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
    msg.setTimeStamp(0.67050873419);
    msg.setSource(41297U);
    msg.setSourceEntity(187U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(36U);
    msg.mcount = 237U;
    msg.mnames.assign("ODUBVFOFSHKSDRAYLCIXYYTNUOAERKUVGZSGXFMNASNLYXTTXKDBVILQCGZKWOPVMFDFHNUCBZQPFZUYXLGOEIOYNCTRWKDJHTQIINEWJTVDOLMTZVUUKSKFBNIBNWPMGQBMRWCQEFSDURZCLPIAEJEOEQAFCPZMVRSJQRAMXBJ");
    msg.ecount = 135U;
    msg.enames.assign("RNEJOWOLAOJUTHT");
    msg.ccount = 119U;
    msg.cnames.assign("PBBFLIJXCDBVYSXPZDUDLBEQNLKRIKWMMOGDYGHLFBPELY");
    msg.last_error.assign("MJGMSFPUKAWLBDYYCSOTXZITCPXJKTMPCHVHQYVWASXCHLOIIFFTPWIXCKPMKHKHVB");
    msg.last_error_time = 0.207927402719;

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
    msg.setTimeStamp(0.0522010295779);
    msg.setSource(29827U);
    msg.setSourceEntity(183U);
    msg.setDestination(50657U);
    msg.setDestinationEntity(162U);
    msg.mcount = 207U;
    msg.mnames.assign("NLEATKTIXATCAJSKIOPPPAICXKORVUGFJFRWGCQCS");
    msg.ecount = 2U;
    msg.enames.assign("VGICJHETVBUERPNKYDFXQOJSMJ");
    msg.ccount = 23U;
    msg.cnames.assign("ENLYPKYNDVJUMKYVSGIFBPRNLNTMVIQIKJHDMLXSNLRRDRUDEKSHDNHTJQWTJBIGFBLTLWKCGOFXWKKMSSOQZPPPXXQKOVQOQQFLOIQASMBGWZZJZZZFCWVWCOTVAGQCOZHSIPVJCBAYCEIUIDBCKCXLWJNHFOQXHEATUEGVFKFJHMYSX");
    msg.last_error.assign("KMPXSIZENKNZWERMUTDSLOZTHCUFFZQUKAKTULE");
    msg.last_error_time = 0.547974990975;

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
    msg.setTimeStamp(0.0138374459851);
    msg.setSource(2080U);
    msg.setSourceEntity(146U);
    msg.setDestination(47479U);
    msg.setDestinationEntity(251U);
    msg.mask = 149U;
    msg.max_depth = 0.182407970333;
    msg.min_altitude = 0.365674254328;
    msg.max_altitude = 0.734185769602;
    msg.min_speed = 0.496233447556;
    msg.max_speed = 0.268166250223;
    msg.max_vrate = 0.547344396789;
    msg.lat = 0.240355854329;
    msg.lon = 0.799171588869;
    msg.orientation = 0.44281467382;
    msg.width = 0.404698368322;
    msg.length = 0.51500993643;

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
    msg.setTimeStamp(0.742195740711);
    msg.setSource(19114U);
    msg.setSourceEntity(227U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(43U);
    msg.mask = 13U;
    msg.max_depth = 0.930459859272;
    msg.min_altitude = 0.443426429174;
    msg.max_altitude = 0.624794480252;
    msg.min_speed = 0.162324845875;
    msg.max_speed = 0.833519377036;
    msg.max_vrate = 0.86996627501;
    msg.lat = 0.62419922998;
    msg.lon = 0.764446443374;
    msg.orientation = 0.752071021386;
    msg.width = 0.987906378457;
    msg.length = 0.642041001277;

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
    msg.setTimeStamp(0.885404821789);
    msg.setSource(40899U);
    msg.setSourceEntity(61U);
    msg.setDestination(9150U);
    msg.setDestinationEntity(88U);
    msg.mask = 55U;
    msg.max_depth = 0.44285264059;
    msg.min_altitude = 0.266033991254;
    msg.max_altitude = 0.648937053277;
    msg.min_speed = 0.77637405728;
    msg.max_speed = 0.689712003574;
    msg.max_vrate = 0.363618157179;
    msg.lat = 0.996254909974;
    msg.lon = 0.289748066756;
    msg.orientation = 0.179758556937;
    msg.width = 0.538267794483;
    msg.length = 0.789277854187;

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
    msg.setTimeStamp(0.514326197571);
    msg.setSource(4557U);
    msg.setSourceEntity(82U);
    msg.setDestination(33287U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.0272513626956);
    msg.setSource(41939U);
    msg.setSourceEntity(114U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.0237296124381);
    msg.setSource(47283U);
    msg.setSourceEntity(178U);
    msg.setDestination(64176U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.050521680168);
    msg.setSource(44020U);
    msg.setSourceEntity(87U);
    msg.setDestination(38891U);
    msg.setDestinationEntity(60U);
    msg.duration = 38315U;

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
    msg.setTimeStamp(0.24810511853);
    msg.setSource(45255U);
    msg.setSourceEntity(180U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(81U);
    msg.duration = 50493U;

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
    msg.setTimeStamp(0.307730262701);
    msg.setSource(8511U);
    msg.setSourceEntity(82U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(79U);
    msg.duration = 40044U;

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
    msg.setTimeStamp(0.889967181449);
    msg.setSource(57308U);
    msg.setSourceEntity(224U);
    msg.setDestination(12533U);
    msg.setDestinationEntity(253U);
    msg.enable = 168U;
    msg.mask = 2402759510U;
    msg.scope_ref = 0.675184216911;

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
    msg.setTimeStamp(0.688042008223);
    msg.setSource(55614U);
    msg.setSourceEntity(131U);
    msg.setDestination(61133U);
    msg.setDestinationEntity(5U);
    msg.enable = 110U;
    msg.mask = 155753560U;
    msg.scope_ref = 0.465690731788;

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
    msg.setTimeStamp(0.418691665681);
    msg.setSource(38446U);
    msg.setSourceEntity(10U);
    msg.setDestination(9739U);
    msg.setDestinationEntity(166U);
    msg.enable = 249U;
    msg.mask = 4186756320U;
    msg.scope_ref = 0.75912492794;

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
    msg.setTimeStamp(0.726263968954);
    msg.setSource(32238U);
    msg.setSourceEntity(120U);
    msg.setDestination(31118U);
    msg.setDestinationEntity(29U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.278134699279);
    msg.setSource(33461U);
    msg.setSourceEntity(191U);
    msg.setDestination(5753U);
    msg.setDestinationEntity(58U);
    msg.medium = 192U;

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
    msg.setTimeStamp(0.987191430253);
    msg.setSource(1520U);
    msg.setSourceEntity(47U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(55U);
    msg.medium = 50U;

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
    msg.setTimeStamp(0.902118687104);
    msg.setSource(60884U);
    msg.setSourceEntity(116U);
    msg.setDestination(64160U);
    msg.setDestinationEntity(151U);
    msg.value = 0.507979307979;
    msg.type = 139U;

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
    msg.setTimeStamp(0.816005716584);
    msg.setSource(12772U);
    msg.setSourceEntity(223U);
    msg.setDestination(10231U);
    msg.setDestinationEntity(212U);
    msg.value = 0.958212295488;
    msg.type = 178U;

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
    msg.setTimeStamp(0.143625969505);
    msg.setSource(26446U);
    msg.setSourceEntity(161U);
    msg.setDestination(20333U);
    msg.setDestinationEntity(78U);
    msg.value = 0.505756214609;
    msg.type = 6U;

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
    msg.setTimeStamp(0.102177625087);
    msg.setSource(732U);
    msg.setSourceEntity(43U);
    msg.setDestination(62455U);
    msg.setDestinationEntity(45U);
    msg.possimerr = 0.0681734737142;
    msg.converg = 0.936098307877;
    msg.turbulence = 0.704583362737;
    msg.possimmon = 73U;
    msg.commmon = 213U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.329220886359);
    msg.setSource(43343U);
    msg.setSourceEntity(123U);
    msg.setDestination(9836U);
    msg.setDestinationEntity(244U);
    msg.possimerr = 0.894272312238;
    msg.converg = 0.133888843149;
    msg.turbulence = 0.137535078531;
    msg.possimmon = 247U;
    msg.commmon = 200U;
    msg.convergmon = 108U;

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
    msg.setTimeStamp(0.61983703392);
    msg.setSource(53755U);
    msg.setSourceEntity(228U);
    msg.setDestination(58151U);
    msg.setDestinationEntity(139U);
    msg.possimerr = 0.26588479222;
    msg.converg = 0.77433562325;
    msg.turbulence = 0.534914682087;
    msg.possimmon = 221U;
    msg.commmon = 109U;
    msg.convergmon = 38U;

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
    msg.setTimeStamp(0.477570287302);
    msg.setSource(34559U);
    msg.setSourceEntity(80U);
    msg.setDestination(32459U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.884390857737);
    msg.setSource(27219U);
    msg.setSourceEntity(222U);
    msg.setDestination(62748U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.521672990565);
    msg.setSource(59148U);
    msg.setSourceEntity(144U);
    msg.setDestination(19351U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.897805031902);
    msg.setSource(26547U);
    msg.setSourceEntity(221U);
    msg.setDestination(5768U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("ZXPHSOWYUORJLSPLNTZHWIOIPSLAMEPUBTEGOUOKBKHUYJVSGSYKCTWWMRKBZYCUJQJXHTIQIFJKQMTBERSZTPHOSDMUJFNVBYVRXZQABDCNRQYPECDGLPRTELWYDAVVGDWIQRDXQAMBZGFJRJXNMNGCKOQICXAICFB");
    msg.description.assign("POEUCQPBKCCANDBKUCRUNEJBBGQYHLZ");
    msg.vnamespace.assign("HPVONILHMGWACBZFKRMYTBKRBXXKLPUMYGYSXOGSVQIWNPPQKIDGEZZIEXCJBSXZFTOWVXIDFVCRYMDUQLNDUPZBAOQEDGMAMLMAFUUZVFOOLNRTKOYLHCSJSIKANDHXKTLJJLHNGJHNJBDEMAYRFCIGUEYGVDUN");
    msg.start_man_id.assign("LHALTAZZNYSHILERZOQQXFWEDWUCCKNIEOFDEUFJDQJPKSHOXSTGFMQTXUKBGNLVBOBTXVLSOMANVFLPYEPUDNUPFDZFYGNYGWUSGWYEXGSVMFEMQHSIKSFTVKBUGBXPDSWKNFCRJTYWAVZABKBXDRHSRZKYQRWULLHDHJOEACCCTJBBGKWPUIWXZERJBDHIZMRIVZMVWYMIDIJHXCCONPPMLRITJJIGCRPYHQGUAPMCA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RAXRQCMFBJZHJDOLQMEPHGZUBDIKEIXVCYWEQEQINPWDTJZSBATOAONFASGSNLVGCHEVCKRGAAJSMJ");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 39206U;
    tmp_tmp_msg_0_0.lat = 0.973528754287;
    tmp_tmp_msg_0_0.lon = 0.375009477049;
    tmp_tmp_msg_0_0.z = 0.983571524761;
    tmp_tmp_msg_0_0.z_units = 134U;
    tmp_tmp_msg_0_0.speed = 0.947791352065;
    tmp_tmp_msg_0_0.speed_units = 99U;
    tmp_tmp_msg_0_0.roll = 0.646370466662;
    tmp_tmp_msg_0_0.pitch = 0.142443440794;
    tmp_tmp_msg_0_0.yaw = 0.886717000464;
    tmp_tmp_msg_0_0.custom.assign("LPCEKWKRIETNNEUUJSQRHFOHPJQYMQAXFAILQABLAVVWGYFRGYNLRTSTNVPLRXKJQQHFWMLWEIKAGMPFGGHDBHOPGAHKBPCEAOZHCYICTZQOMEITNCKSDILIGBWBBOADGRDMDINHJDVUUMUDS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("DLFCULKFCOXPMAHOFBDBZMPCWYGPVPZQPATFSGWKHFVXEQDJIEAJJWKAXXXGLGLBTRDPNGKOMICNCZTUHKKPMNRTYQREGWQSH");
    tmp_msg_1.dest_man.assign("BYYSCIQOURLLQWHYZZNTJAIAJPMTCNGPBOCHNAXNCTANQWEZJIZOOKMBCHPCFBDRLMQDNUKFXZBDONKFGDTESAMKDHJRSMSGYMPZCGHAEIAKWQVHVYIVFOKZKLXTZJLEUSRSQJJBVSRDWHCCUMZHFITODUIVPNBJXNZJCKWRPUBBFPHGPYMXVLXLFGUAEUMWWOAYTEETNTSIIGXO");
    tmp_msg_1.conditions.assign("OLIDECMTOMZKOJZNLFQCMYVTUPUUSZSCOIEIIRKLKORPIIKMWGJVQDNVKXZACB");
    msg.transitions.push_back(tmp_msg_1);
    IMC::LcdControl tmp_msg_2;
    tmp_msg_2.op = 93U;
    tmp_msg_2.text.assign("IDKDTQBDRRLZEQFWJJMSFVMUZNTEYJYECZTIBHXEFHQVUCLMLKAFVWJGWAIDFGKXVZJJMREVKILTTSUQSQFWUTNEAZPJBTYKEQXPTMOAKVNOORBV");
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
    msg.setTimeStamp(0.0377316404002);
    msg.setSource(7299U);
    msg.setSourceEntity(132U);
    msg.setDestination(34875U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("GFAWVZOIQLNSSSDTJABLETCUMVGDTMTWCYOXLTGQPMSZZHAGIVYGVUUHKQJOQXUDQEPKVIZVSXWKEHJWVNILRQLPMKQKMBHCOKFEDLLP");
    msg.description.assign("FESNFLONWYMFDQEXAZPCIDGKGTONSKWQAOQSFBIDLVVDKWGGPRLXKHSWPKGFUBDUGSYUWRTYEXZYKFMKUYYFMNRAVAJNWTTXTIASILUHEZBPUSUDMPQGIJQCTUAIXMSJRERBPUXOXBHFHCYZEMTBCRXPDAISRNQZMAQJWAWJEJNPOJZNBJCQZKFYAEEGCCVNNPUGVOEHOZWZHXJQROFHILVDVIXJVTZPDOKTMLLMDLYOB");
    msg.vnamespace.assign("VUIXKKERQOAAYMZDYVEUYOTCXRVBXUEYASBLLNFPP");
    msg.start_man_id.assign("NUYERPUURWHBOHMQBPOMVTUCHHZGVBNEZSEPPVWXWFMDRNSIUKOYMDUVFJIQNMTNRJWKDCLVDJEYFGIKTZAEJQJCLFGDOKGACYZPQHVVNEIZQASSAFTNTDYOTQKBWVJVTOLRQOYAESIXSLEESBJSCTZOZWXGDZRHLADMKXXZWIKKCCPAYGVANIUBRMYHFXUJHXCGORPHMLJQJGWFSNPAIGMUWQLBTYPXREGYZFBPXHXBI");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 100U;
    tmp_msg_0.plan_id.assign("POGLBTFBBNCECQIYSARTUZAKQGOLDXRPPVMRXOJTGSHFHDTIYDWQZWMDLAURPRKBCDSKGVZPENEYASGOVUZPQXCAKHRPCQIIBHVMVKIMHFDNAJKBVUMTSWUCJOQCMNOXQJGOVYCLJYMIETONVUVWLRMDNZXTLDUWPUEKVAJERXHLGSSGSAEFRIUNZHKJPCESKZHLZEFLHDBEDFYWHFTOLIIXYJQKIA");
    tmp_msg_0.plan_eta = 1434061589;
    tmp_msg_0.plan_progress = 0.501160230083;
    tmp_msg_0.man_id.assign("RBIEQCPGHMJRMANQSMFTEEWIJHXBQOQXXCRCRHVLMBHCGWHXITYPZNUACIWEZMEFJZFNVGVWDEJSOAWBDVKJEGL");
    tmp_msg_0.man_type = 232U;
    tmp_msg_0.man_eta = 433686950;
    tmp_msg_0.last_outcome = 239U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.824236614515);
    msg.setSource(16372U);
    msg.setSourceEntity(122U);
    msg.setDestination(13741U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("AEHXCARILWMDZBHBLYKXOQREEXTBODWSDJQARPNPSPUHQVHSLUJCABUPOHVNZJNXKLAYMV");
    msg.description.assign("EWQCGMRNIDBNYXDKLFKDGTUZKSEIQXTXQRHNV");
    msg.vnamespace.assign("GWSKOJTPKUYDARMFQUMAELXIDPCRMGYIHARZRVZVAZWGFTYDMHIOTUXLRZCZWEESIQYZAUTKGHRFYUWAFUMYKGXFKPFAUJPBENPESZSBDQSCIMIEZBSWVNXPBNIGIXMOTNKGBNQSLTAJPCPVVQTQVFJWXBOJFZNWNGLLHBTRFCRRCYXZJYKNPEWACLIHCBOJLQSIPEXDKUQDXOVVODDOQDHNJHNTKOLQGUCLMESEYTJMHWUKBLRW");
    msg.start_man_id.assign("RSNDSLUCODZPERZKTKLOILIZGKSRGFXWIEXJMSXVQXGAVOJYNZKBTRXYKNVETYMEQBKFXGRMCOTLSMCUUSBSAPHF");

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
    msg.setTimeStamp(0.397832698965);
    msg.setSource(5990U);
    msg.setSourceEntity(145U);
    msg.setDestination(47892U);
    msg.setDestinationEntity(170U);
    msg.maneuver_id.assign("ABQDWBXHGVPPEIZSSFZSXBINYHWZOTONHVSLXRNTGMCLWXWDTCDPLDQJMVORERKRUKWFSXDZZOUAFFURCCQFXKAJIPNDWDVOMJQUXHFRVOEXVVKLXRUCHNPBMBSLYECGJFCKJTNGJWKTGCKJNYTHOHAPTPFVEOYOQGDIMMRAKLEEBMPGUUBIKAYNMLRZSDQEYKXDU");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 41501U;
    tmp_msg_0.lat = 0.219941544535;
    tmp_msg_0.lon = 0.321645022908;
    tmp_msg_0.z = 0.732308166783;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.amplitude = 0.246010519289;
    tmp_msg_0.pitch = 0.524282524157;
    tmp_msg_0.speed = 0.503626693991;
    tmp_msg_0.speed_units = 163U;
    tmp_msg_0.custom.assign("OKLAJKRGYFTRLUDCSVLAQNGXWDDQNINZQZAGONKIGUEBPMOFRGEEIWOBOHZMBKXXKXCVRGPYRCQXFMBTUESVOBEHYZVYYWLTAYHSVEHSJKDZXOAFSCHCATINNISRJETPUQDVUFPRRCYTBUKLVYIAISFQDAWVLUPTDRCJMNWXQGMPITFJEJUBZWFEWIQNYDJHHZEXGSIFKXAFPZBSLCTBD");
    msg.data.set(tmp_msg_0);
    IMC::EntityList tmp_msg_1;
    tmp_msg_1.op = 158U;
    tmp_msg_1.list.assign("BAUXJSRDCMLXEBRMAFNHPR");
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
    msg.setTimeStamp(0.816906914707);
    msg.setSource(25088U);
    msg.setSourceEntity(215U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(199U);
    msg.maneuver_id.assign("VBUKFBQPHEUTYVAQ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 16337U;
    tmp_msg_0.lat = 0.696404091919;
    tmp_msg_0.lon = 0.586220447398;
    tmp_msg_0.z = 0.631343244705;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.duration = 65021U;
    tmp_msg_0.speed = 0.568562518858;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.type = 5U;
    tmp_msg_0.radius = 0.951870811581;
    tmp_msg_0.length = 0.643769556821;
    tmp_msg_0.bearing = 0.563739832253;
    tmp_msg_0.direction = 66U;
    tmp_msg_0.custom.assign("HBAUQHUVQRPBGPWFTMXBSIFOREWLFPTFBICUIVCXKJAILIYSLMFOUCEZMJUSDJPWIDQCBDETZ");
    msg.data.set(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 6427U;
    tmp_msg_1.lat = 0.677464045248;
    tmp_msg_1.lon = 0.106783309027;
    tmp_msg_1.z = 0.719721377784;
    tmp_msg_1.z_units = 31U;
    tmp_msg_1.speed = 0.189231663332;
    tmp_msg_1.speed_units = 28U;
    tmp_msg_1.duration = 5445U;
    tmp_msg_1.radius = 0.0508129162125;
    tmp_msg_1.flags = 36U;
    tmp_msg_1.custom.assign("FWWGFNKPCQDPEHULLKJNVIIRSFCKMGOTQVJYDICOPVPJHLFCZZIIFGBLSBHU");
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
    msg.setTimeStamp(0.475666533039);
    msg.setSource(46282U);
    msg.setSourceEntity(240U);
    msg.setDestination(13289U);
    msg.setDestinationEntity(136U);
    msg.maneuver_id.assign("GBLUMTSYXGHFAWJQDBCIJAYWTKUBHKDLZAETEMAVX");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 57719U;
    tmp_msg_0.custom.assign("FRISZCYICMYKGBSGHCOHTWBVULINRZNAAUOFJEQWIJUHXNMLAFTPGCZTUKZIEVDPYYUWVQDLWRINWWBSAZZXWARYDESCZGXOIAIPYJKTHLJFHQPVVBMQIRJHR");
    msg.data.set(tmp_msg_0);
    IMC::LowLevelControl tmp_msg_1;
    IMC::DesiredSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.839336903304;
    tmp_tmp_msg_1_0.speed_units = 175U;
    tmp_msg_1.control.set(tmp_tmp_msg_1_0);
    tmp_msg_1.duration = 3239U;
    tmp_msg_1.custom.assign("CSOMXQCZTXMZFGAPWNBEIYIVCLHUALMVKNDIGWVOBQQNTKTABVCVERJKWPNSJHYYLBBNEGBOZMUICKELKVZHDPBQJFHWTBUEEZXFRBIPTTHGX");
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
    msg.setTimeStamp(0.899741181936);
    msg.setSource(52335U);
    msg.setSourceEntity(125U);
    msg.setDestination(34603U);
    msg.setDestinationEntity(162U);
    msg.source_man.assign("RMEGBLEDKAETWXHHMICRUVLHALSYXDGEEALEJFVULKZNBVXIPNSFZWJRZNAWPUKEXAMOTFLQMGCWUJMPHHWCGHPBTKZOYQJJSHWGFLTQJWDCNTHRTYDF");
    msg.dest_man.assign("ZDMDTLTUQNDXPIAZXOJSHIRCRKFDYZWXEQIOLJQSGUKFSNKWUVWRIPTJQHYCPVESWVBMOPMNWVGJPZQAQWWEJHMMOZSFLZNJXOESAQPLKUVBVYPRUWUBOGDTJEZMXBLCHKICHXQRIGYJHROBLYZMAERSABVFOFGXDNCXCTAKYXWYUZKRVVLEKTM");
    msg.conditions.assign("YRUQMEGLBIVLTFAGKUZEJHJZLACDZIYHNSRMMATEVEXORTCCSFBBOPONCMXQAUTIRSMQVQGAFSVRTHNPHSPZRJVMMDNIGHJOIMMFVQOZDLSYKJWTVJWCZAPWHLCFU");

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
    msg.setTimeStamp(0.040247486289);
    msg.setSource(50122U);
    msg.setSourceEntity(119U);
    msg.setDestination(2539U);
    msg.setDestinationEntity(67U);
    msg.source_man.assign("OAULNTLDQCTTAUBLSXXDTEJRZKSJCNMIEMATQZVWDABFCIFBNQBB");
    msg.dest_man.assign("RFJZNQMPUXVYEFLMBCGWMNDZTDHHYDTMORNZBSAYOMVPBLKIVVSIYEKCIUHQGXSGPZBTPHXMKJTGRCMCCLYHROSCHHPPRKJQCHDUJZIGYRJUSGFWXTHRKCBSLQQANVOWIXPXDGNXVTTGRPFIEKLAOLDKEATJMNUIVUWDQSAEIFWKZWUOOFNLZKJESQQWFBVYBEWIBCO");
    msg.conditions.assign("GDJVOVTOVODTHTANSLEPLYQMBZRRTJSQBMQIZBPLJPICMYXUXAFJKPUWHWBVFZHYHINZHCSGJ");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.143658451429);
    msg.setSource(17231U);
    msg.setSourceEntity(0U);
    msg.setDestination(16877U);
    msg.setDestinationEntity(99U);
    msg.source_man.assign("KHYBORISALYLGYDQTXCAXUAKGVVVGYTSYZNYDQHOYERJMTNBATUFSLZPEEABRUJTJCMLKFIRNBFMNVJWXOFTUXKSVVGRLZKZBONJGHDDNIEUAPLNPIRSWTCDMSQWPIYFQEAXCEDMLSCLDEQPOSRIRFNOJEAIJSDZIHCFMJFOIWP");
    msg.dest_man.assign("RFPWXQWMOFYTZHUYJOUARBOUCWEBNOTNEJSLXVIJVNLBSKEQCXTSBMWRAXVEMRYHERNGWTOMVRUIICWSHIWUPIKZFNPGULKMTKOLIMIWFUPCHFHFMBXSCMFAJZIEERYNKJXGTPTSGDLVYGNALMPSKHABCYDDFILQQCPFVKGQGHVZUYZCQKBJXOZJQAAZDMZGDDSNVDYWGPR");
    msg.conditions.assign("WVLEVQYEBYRD");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.535100375353;
    tmp_msg_0.x = 0.681406929685;
    tmp_msg_0.y = 0.837904293438;
    tmp_msg_0.z = 0.273377243035;
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
    msg.setTimeStamp(0.291414700464);
    msg.setSource(9884U);
    msg.setSourceEntity(242U);
    msg.setDestination(4463U);
    msg.setDestinationEntity(37U);
    msg.command = 79U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VHSWMSQACIMDIOXDYGTPDUQTFQOHBAPUYDNELZGOGICZWAZGYUXWDAJOVMCSTBMYVXJXSTOOSRVGZGWLVSXJRQHRIUZKEVNGHALXNEZHFMMXIRUFKTUCERAQCZYIOCXTJCVPQMPFYEMUAJMKVWALLPHBQWQORZWYAFKWSUGEIFBRFJLDQIYJKWEPTCJSEXLTDILLGKFWRDNKVFPDVSJSCCRTUYIONUJQMBOPZH");
    tmp_msg_0.description.assign("OMOACGRJPAAJTIZKFQWJMONBOHZYPGPULZGITVHDILQDWRXAWZMYPOYEWDLFMGIJNKMQHNCBLCULIZWRIOSSGUVVKAQE");
    tmp_msg_0.vnamespace.assign("NTGZOUFVYWHKNKJXIKFEWXWULKCENAWTBJKPAQGPQHVYZPLIIRATDWAYLKODFZPVNIZBUQMNBDJPWLLACFOQAXWSQRQSHUMEPSJUTTSAJVGGHWQYMVKEBQHGBFNPDDVDRCNYNEUFVRMQURECWJKCMBAEVKHGOYBZJOHFZIFZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TEKFQZAWMAGKDIKDGNGJQJBVBPDYFVFZEOVLGEXCQCBFURRVRVDUZLSRGFSXIJKTTHHFIEHUFNKQTQYPLXBYZDXKWOYRJTDVUXLQFZHJCKXPWEZXPICDAEVHPCXEMMIQBURUMLYB");
    tmp_tmp_msg_0_0.value.assign("RLFEJUZIVCFLILHFYDPQMIVVHDHRYSOUUSNXZKBPXOOZETMYKBVFBPZYNCCYZQCSDJAAVGAJFDQDNOZJPNDJUKKWSSOWXBTTOLUS");
    tmp_tmp_msg_0_0.type = 112U;
    tmp_tmp_msg_0_0.access = 221U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FVRIPQQBXXUKTUKAHXNVDEUPTENTZZZAMXZSMRMZLLOWKDDDYDHKYRRLOZZQWVJOHLWSAVIQQBNFKHWGFIJVCJJHKOSBQACJZFTLFBLVCSRPAOWKBMNBIVCLTAOGWUTDHQBYRJRAKONCRHSPSQBYMBYYSCXAULNDHMNXAUGILOQXXGWGWLCCXHYNUGMTSEUJMMDFGZKW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RLNEJHVCXUTCXMVMDGCQKQUXUOZAWQEIZOVBZYNCAGWPSWLRCLBXYHPHETIAKVGTITMMDJFNBQRYLOJZLVFFMYMSDJZNAKHLLBKMXUMWNXLYDNDRHHYZVYIHKPGBZOSAIEBFFUKQV");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 60743U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.620463575026;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.498571669099;
    tmp_tmp_tmp_msg_0_1_0.z = 0.161228410353;
    tmp_tmp_tmp_msg_0_1_0.z_units = 57U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0165743251212;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 123U;
    tmp_tmp_tmp_msg_0_1_0.duration = 463U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.428863371773;
    tmp_tmp_tmp_msg_0_1_0.flags = 51U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("RMAGWDDZJKLTUS");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::GroupStreamVelocity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.x = 0.696095229438;
    tmp_tmp_tmp_msg_0_1_1.y = 0.806346511844;
    tmp_tmp_tmp_msg_0_1_1.z = 0.646006514892;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::LeakSimulation tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 178U;
    tmp_tmp_tmp_msg_0_1_2.entities.assign("OASJJYETWZCOORJQVBRGRCLZLUHEQAQNOCISEIFALBSMNAQURCUPOPJWDPLVZUTPBHTQDDVFKJFMQUJLPPMQUEYFLZRCVTALGWILFOMXWFKOKGGWYTWUVRYHZVYQEYMWZEAKAEBJXHCQNEGXDRSVBCGZMHSKNWLFVZXUSIUMHTMDVGDXPDPWGAMOPGIT");
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
    msg.setTimeStamp(0.313350634824);
    msg.setSource(8759U);
    msg.setSourceEntity(100U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(154U);
    msg.command = 71U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DIYEULJOIFFLOKTLVJQXTKUQWJEXIJHJOWMVNRZTFBVALHRUFSTNKJGTPMCINBOEIICUNEVQEHTBGLRFKIAQMLWQSXPCUZKOVUDKPBCGARDTLEHYAZASZIYXRMXWERGHOVRSHFIWTMYBOFZKCVMQAPDBEZFPDBZCGYESWRLVECNBO");
    tmp_msg_0.description.assign("UQNYYNPFXIEQXIUILWHUTYYNCQUHECXREISSYRAURTDYPTHBQBDGTFEDGRMLNUGGKVJQZWFLCZQKLWEIOEWDKWHJSKMDOVVOASCFHBAFXPPPPVBYVAJNCMCFBEJZJUAJMFCRVSKBLRYMDCPSTHHZLROSVYPOFKGSIXMJFBAMGQUAOVVDNFKZRMIEEDTTOJGNADBMCXOXRRKKUHOHDSZXIAI");
    tmp_msg_0.vnamespace.assign("SOYRAANJJINLJLQDQEAXDKRRFYHVIYPLXOBPUCEFIEPIITYZJRLUXABVDLMXPFJZCLTBIOKZDOVYVNSMHSSZPWAKMCVUHXEKNRGAHGBMCNSSMPUZOHWJ");
    tmp_msg_0.start_man_id.assign("FPMWQPXRQEFHEXCTRABPBBXLXYNIZFNNHKOVQZASWOLSQULFXIRWOJBVEZQAKORUSKXGRWPGCQVFITHBHIIEVDRJVPYQAVVSUPONKYL");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("EZBOYDNULSCFQOZSHMNHJLHSHZQLTYVIGBWOTYGIKGPXNMYIUMIXMJBXPCJVQTHFJTGZZFVGABIDLKTCLGSXAWYCWFRKFLLHVSBFTWRWJIYEIXPDOPPWYQUUHYJUGEFENJIAAQIZKCWDWAHNXMRZGMBVPQRGSTXKWXTLBLK");
    tmp_tmp_msg_0_0.dest_man.assign("VRORWDYZBOOKEXTLNYUXGTZWOIJSLNZACSSYDGVNJTVLZSXRQEHKJLQMHXLDUQKCDQFMWUCTAAWBYCMIOQHFEAPKIZRPXZKNSRTYMAVBBXZWAFGNWUKEMYOJGOGRMVNFUKYKCZHBGWZFKSJECOJZJVOXALWBIRLWLLDJPTDGNJURU");
    tmp_tmp_msg_0_0.conditions.assign("BPNCUDBWVFLGKUHHYEBVWVDWIQFZQWLLMAJGVXMGVLZFCYPASCESRKNPSME");
    IMC::PathControlState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.554652331036;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.881855849673;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.259393048307;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 214U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.924177701761;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.140966872694;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.896875919603;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 0U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.807493967665;
    tmp_tmp_tmp_msg_0_0_0.flags = 193U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.822844530912;
    tmp_tmp_tmp_msg_0_0_0.y = 0.704655460175;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0876918843129;
    tmp_tmp_tmp_msg_0_0_0.vx = 0.20140923664;
    tmp_tmp_tmp_msg_0_0_0.vy = 0.556528295574;
    tmp_tmp_tmp_msg_0_0_0.vz = 0.772083487552;
    tmp_tmp_tmp_msg_0_0_0.course_error = 0.907025835848;
    tmp_tmp_tmp_msg_0_0_0.eta = 27155U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::PowerChannelState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("TSXDLGTXOTKBZVYHUSSTKOCKYOFGILUAXZUBBPDMSOUMAOMUZVLQACHAIAAPQWGSGLHCEYLNWFRAHWLTJNPMUXXYJJFESUJORZXRBVMSWZLKUGXCEQPKNMCICMTIRHVIJKCQSYGJVWJDLSRCDRNYFRDDQKIHZHWIQQAJZSLDBILNGJEMHBEXIMJZBATFZNYEMFAPKFUKFNYOPPEGGHWFTBKWBYT");
    tmp_tmp_msg_0_1.state = 27U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DepthOffset tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.369364421117;
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
    msg.setTimeStamp(0.362969129239);
    msg.setSource(40477U);
    msg.setSourceEntity(52U);
    msg.setDestination(13251U);
    msg.setDestinationEntity(64U);
    msg.command = 156U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MAJBYLIRVSMWUYOQBHOWCKTLMFXRYCIDQCRLVHRTIXWTAPBSRYKVEVRHSPZJBEWQUEITQWJP");
    tmp_msg_0.description.assign("NPKUFDQYNABECBUNOCTHBFYHIPJZAQZJMQBDANEEIXWBMJVLNGRNCAQNIRVGTQAARLDIJWIUKTLGUBFSEOOYRFCXKQDMVLCIAJHXXVHCSUTBQIDPOBWEFZYMSOWFGZPZOACCZHXMJYLHHPRKZKPYZUWPVFTGYXEEIRZESSUEKBJNDMOHDW");
    tmp_msg_0.vnamespace.assign("QRJOPYCTHVUSMPIPPSMCYAMFFXEGROCOOSOJHSQZUYZJJCXXXIDEWNMYQIDOBPVZXZDKINVKDKCHAHLIWYGLTRBVARTO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LIRSYDAWIRJTLQBGAHSNAMNYWGEMOAPFMZCVDALOGXRFBKJOVSDTKKTCVZXFOWEFZZYKFBAIENQRTSJBWJFHSDVJZMXEABPMYDVJWJWSNUKCJCPXBQRJYPMIFKAUGXOWFGRUUXV");
    tmp_tmp_msg_0_0.value.assign("MVXFRQSPCQCTLJEEYNHVJXQPGPKMSSYZTLMLMXRRRZMHUEPGINHBEZTDXQIFABQXRWSFGCDHWRVLGIIPOXVJYGJOSKIYWCFZWGWKUDTSYYAMEDEKNKPNDCJFPFDOTOOFBYXIZJCBAGCGABWJHMALICAAUQVUNSOEIYBBTUYVFNUHMNJLKHHDRRWGZZLAMOUSKFODMEFVJHJUPPQQTRQTKARNH");
    tmp_tmp_msg_0_0.type = 207U;
    tmp_tmp_msg_0_0.access = 69U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PQMJCWQNTTBEONKFHUGBYOAUSPVTSECCLIGSFDKGSRVNRQXDU");
    IMC::GroupMembershipState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.group_name.assign("BXAFXGMJLPQINBJWHUJBCKHTWCUCOMLJZOBLUXIVEJDFUCBKYWXKJPPHLILUQNTZOXEHRFYNAGDAGDSYKVOYIWGRCSPHMZCDTDNTWINHEH");
    tmp_tmp_msg_0_1.links = 2719105776U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Sms tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.number.assign("KBDYWYTLQLIEBOSLHQIGOEJTWJCBQARZJZMVMSRIXEYJGKLCUJ");
    tmp_tmp_msg_0_2.timeout = 53097U;
    tmp_tmp_msg_0_2.contents.assign("QAQWQGESIGONCHRZAJOEVJNMKDMSOPTZOH");
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
    msg.setTimeStamp(0.820413942649);
    msg.setSource(28157U);
    msg.setSourceEntity(146U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(170U);
    msg.state = 165U;
    msg.plan_id.assign("KYDJBYAUVSXENPJAPOTZJRWAVWIQCTXVAFJTGGIHAVGOZMUBWHLITBFIBELETUUCYRRNNXMQIDCLZGJJPPDMHCHRHQMMJPXQGURNQOFEPVMSZKCZQK");
    msg.comm_level = 31U;

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
    msg.setTimeStamp(0.630722563371);
    msg.setSource(18598U);
    msg.setSourceEntity(114U);
    msg.setDestination(54548U);
    msg.setDestinationEntity(17U);
    msg.state = 210U;
    msg.plan_id.assign("ZEQXEDELFWGEHLLJSFVAXRRDXRIFPWBPBABGOPZHTDNMMLUNOASVDBIRPJUNGBEHANWKQXWNFTTXWPGRSCSBEVLXCGCDGFQHJLKNZZHPNTZCBSBJJIUCYPZATBEYIYHIGACIWMDGICTLVWPVKTHKVVNKTTQLZRQYWNXYXVHICFODWHLYMU");
    msg.comm_level = 217U;

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
    msg.setTimeStamp(0.932613877586);
    msg.setSource(10044U);
    msg.setSourceEntity(141U);
    msg.setDestination(11145U);
    msg.setDestinationEntity(72U);
    msg.state = 94U;
    msg.plan_id.assign("PYFATMQRHCZHLP");
    msg.comm_level = 65U;

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
    msg.setTimeStamp(0.619097801519);
    msg.setSource(49643U);
    msg.setSourceEntity(152U);
    msg.setDestination(19402U);
    msg.setDestinationEntity(134U);
    msg.type = 44U;
    msg.op = 27U;
    msg.request_id = 45474U;
    msg.plan_id.assign("PIBXVTKTINAEFHCWTAJYGSTBVZLOGIQGOWUDILTCDSMQOSHQLMEUIEGKDUFHLMDNOTTWTUWQVMDYDCVWWUKBJCPJFEBKMOUKNCGRKIUAZEFZEXGCIAMRGFBPXPHFBLSQAVHXFNPDPFLWIGXZJXGOEDHRJSBQMLJVVXLMKQGEAKVYOOMLWRFTUUZOZSRC");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 12U;
    tmp_msg_0.time_remain = 0.68212079553;
    tmp_msg_0.sched_time = 0.66816773947;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WCAXZYNHIDBBNMP");

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
    msg.setTimeStamp(0.811765044577);
    msg.setSource(20261U);
    msg.setSourceEntity(117U);
    msg.setDestination(30718U);
    msg.setDestinationEntity(98U);
    msg.type = 54U;
    msg.op = 85U;
    msg.request_id = 60570U;
    msg.plan_id.assign("LPDHIVUEMNAMTDXZDKLVGRAMPORCONTKJJXBUSOIXAUORWVYARLWLYCOFALEBCJQGBCBGXKXXAYNDUEGCQBDHAWMKFPSKOEPFQXMKWTGOHTULSKZBRZFBFMPVYTUGWFRZHKQZMZ");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.293105384749;
    tmp_msg_0.converg = 0.627439629456;
    tmp_msg_0.turbulence = 0.130113968438;
    tmp_msg_0.possimmon = 110U;
    tmp_msg_0.commmon = 192U;
    tmp_msg_0.convergmon = 189U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UYDSRDCDGIUAXTORQSCEGKTIHSMNODUSSERUXNPBQBNVDIKYFHLYPHPQLOBXZROGHKC");

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
    msg.setTimeStamp(0.217690153193);
    msg.setSource(33166U);
    msg.setSourceEntity(104U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(101U);
    msg.type = 137U;
    msg.op = 60U;
    msg.request_id = 32520U;
    msg.plan_id.assign("IAGJPAEWKEMRVRAADGEHJJQXUDLUIHGFRDZLFDVQPDNKFKCRTTPCOMWUMGOPBDVUABWLPONLDMQOEQOWPIEXRZBEEAGFYZK");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.514128262814;
    tmp_msg_0.lon = 0.0590713743881;
    tmp_msg_0.depth = 248U;
    tmp_msg_0.speed = 0.0259508528928;
    tmp_msg_0.psi = 0.725772657687;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QAJGAVNLZKUMTIDQX");

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
    msg.setTimeStamp(0.367026401211);
    msg.setSource(53883U);
    msg.setSourceEntity(10U);
    msg.setDestination(4813U);
    msg.setDestinationEntity(96U);
    msg.plan_count = 42681U;
    msg.plan_size = 2831196954U;
    msg.change_time = 0.664374326484;
    msg.change_sid = 49280U;
    msg.change_sname.assign("CHPYMIVRCFEHKPVNEKNONTEPSBDXUAMTRVUZOVWNVQJSLZSCJXOMCVEWRCTFLMSRGSYNEMVRIVCMCMEBFYODEZUWWYWLGDKCMRABUOWXUIOGYZRLPDLTQZHTHJJSKTNHQYQHJJQOBDEPXGTEONGYKXUQDLPQHUXHAGIZGGKPQFSZARCSBWMWHNCZAIXNYUBLJIVDYNFLFJFBFHDKQIVWMXBT");
    const char tmp_msg_0[] = {-122, -72, -74, 108, 84, -26, -83, 14, 44, -23, -72, 3, -98, -96, -82, 69, 63, -97, -46, -62, 32, -53, -38, 47, 110, -74, -53, -50, -95, -46, -44, -47, -103, 109, -2, -55, 73, -104, 66, -39, 13, -111, -66, 97, -123, 10, 118, -15, -41, 91, -62, 86, 34, 10, -22, 3, -36, 17, 58, 102, 102, 58, 21, -50, -44, -59, -75, -114, -102, 35, -25, 19, 75, -86, -53, 100, -7, -34, -69, -74, -4, 22, -108, 75, -22, -76, 3, -6, 101, 88, 43, -3, 82, 69, -55, -85, -22, -12, -26, 50, 33, -82, -63, 32, -11, -8, -95, -37, 124, 123, -54, -48, 2, 121, -36, -127, -96, -15, -106, -74, 57, -90, -3, -96, -17, -107, -36, 36, 115, 29, 87, 37, -111, 17, -30, 9, -21, 116, 96, -15, -93, 80, 39, 61, 26, -82, -1, -96, 31, 66, 96, 66, -17, -116, 92, -106, 94, 52, -117, -73, 116, -77};
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
    msg.setTimeStamp(0.622763413165);
    msg.setSource(30498U);
    msg.setSourceEntity(173U);
    msg.setDestination(34934U);
    msg.setDestinationEntity(235U);
    msg.plan_count = 59230U;
    msg.plan_size = 904867833U;
    msg.change_time = 0.195298249323;
    msg.change_sid = 51471U;
    msg.change_sname.assign("EKTESPBQSOADGRGWQVIJQVENBTLHSTP");
    const char tmp_msg_0[] = {-37, -37, -57, 56, 44, -49, -87, -15, -118, 122, -126, 59, -3, -72, 52, 104, -95, -2, -10, 24, 14, -27, 41, -44, -82, 106, -6, -70, -84, -56, 71, -112, 123, -110, -73, -46, -7, -7, 125, -11, 80, 37, -105, 29, 88, -67, -9, 52, -38, 90, -72, 54, -47, -92, 84, -67, -84, 34, 111, 118, -99, 121, 14, 20, -71, -13, 72, -9, -125, 102, -44, -84, -36, -32, -48, -1, -39, -72, 107, 28, 66, -101, -111, 93, -104, -71, -86, -28, 85};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KLYQLPPAAKKRERMIXQGRUIUYIUEXTPXDJXHMLSBULRQWWZZKSMLKSWEIAEPCRATSSXLRLHVCHTSDABGROSCMMFTZOLZZORMFAIIVTAFNJNCJTZZXBWWNDFHYOIJQTKGFICJYJEGVLNTFGRQFTLJYKJCUDOUVAOTBMSUWUYKSNVXYVBNQICMMDRBEZFKPHDDDCYXQVUPANWHEPZKGWCOENAGGJBGQ");
    tmp_msg_1.plan_size = 32070U;
    tmp_msg_1.change_time = 0.00300590053893;
    tmp_msg_1.change_sid = 7308U;
    tmp_msg_1.change_sname.assign("XDTNJQJPEOPKWFJSXFIZGKUKWYHPRUHGSKEBAEJMDMDHJLRFYHEONZNLCNKIVBWNDTPLFSUYITLOMXZDHETYYOQLOSFMLTCAWUUAGAVCPOCMUECSNRIWKGMREDELXBQXQFJGYAUXYFHOSGUTZZCNYMJDVGISAQIXYP");
    const char tmp_tmp_msg_1_0[] = {17, 93, 95, 33, 65, -19, -46, 5, -5, -73, -102, 114, -8, -38, 1, 118, -55, -58, 62, 106, 112, 101, 85, 50, -32, 22, 5, -128, -43, 103, 33, 49, -119, -51, 43, 88, -27, 44, -101, 35, 42, -113, -103, 38, 108, -99, 24, 116, -85, -47, 24, -66, -81, -11, 111, 44, 94, 52, -76, -30, 66, 86, 79, -113, -121, 16, -117, -112, 13, 87, 45, -64, -70, 32, -26, -8, -36, -42, -42, 59, 51, -45, -123, 84, 82, 89, -9, 120, 21, -32, 77, 26, 68, 32, -36, 64, 124, -1, -7, -15, 74, 98, 12, 7, -114, -120, 72, -60, -105, -124, -114, -33, -58, 119, -43, -44, 63, 115, 27, 98, 77, -103, 102, -44, 109, -42, 6, 113, 21, -24, -38, -127, -1, -111, -17, -18, -49, 122, 36, -127, 121, -54, -66, 34, 77, -88, 10, 19, 119, 122, 59, -41, -112, 46, -86, -88, 16, -98, -67, 50, -47, -123, -67, -75, -88, -25, -73, 48, 47, -103, -113, 10, 119, 116, 9, 45, -63, -38, 76, -22, 120, 13, 108, -40, -70, 20, 40, 118, 98, 119};
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
    msg.setTimeStamp(0.577771137037);
    msg.setSource(43546U);
    msg.setSourceEntity(61U);
    msg.setDestination(26190U);
    msg.setDestinationEntity(121U);
    msg.plan_count = 32503U;
    msg.plan_size = 1097087413U;
    msg.change_time = 0.579029641772;
    msg.change_sid = 50027U;
    msg.change_sname.assign("MYITYITEKMOCJNSOXEUTFGBCKVVWNUREUORSOXACXSIRNUAVLOZBUVBJUEVGRZVWFNIHKVLRHFQMADKFIRIZHQEJSPNFZWBWPODWDKCYLSCCNDPOULDIOHEHQAXBYWZCDKMJW");
    const char tmp_msg_0[] = {16, -19, 22, -85, 56, -7, -104, -38, -51, -49, -5, 65, -66, 69, -48, -114, 10, 59, -16, -69, 106, 108, -47, 122, 42, -44, 107, 125, 67, 51, 44, -71, 40, 124, -38, 16, -46, 96, 41, -91, 92, 15};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EAHUBLHYKUKETSNVWLNMTUCTDBVJDAANDSFYRJJDUEPWAUYGXZYAHLNBPAANNQXFJXAVPVKQVISPTVSPRZTQFMMOOIQPQXTJBCDEGTWOFQCDFREWPL");
    tmp_msg_1.plan_size = 33225U;
    tmp_msg_1.change_time = 0.0243581813613;
    tmp_msg_1.change_sid = 63518U;
    tmp_msg_1.change_sname.assign("WCNDGMDQBTUEAOSYUHBDPHROJTTACMMICAWMAHSEFXXHLMDQQZYPZPJVWYGOBFXWLCVRULFJWBVZHGENZQKFMGGKEWRUGNAKOSCCXRQVJEAMGOVBTHAFKQZTZWQZDRSZLMNLWDYVAMSXTYOAGJFYYEEPKRKIBSYENVLNNSFJRVGZNHPYSRRKUXPFHUUIIDIWKDOIYNWCBBZTCLEJXEIVSJBQPULN");
    const char tmp_tmp_msg_1_0[] = {-56, -23, 15, -72, 13, -5, 32, 20, -93, -45, 35, -117, -2, -29, -46, -118, 34, -84, 70, 84, 16, 10, 32, -68, 88, -115, -69, -5, 66, 72, -32, -7, -82, -28, 57, 70, -89, 124, 42, -58, 51, 107, 97, 118, -75, 48, -120, -82, -85, -8, -97, -72, 18, 11, 65, 54, -75, 41, 106, 116, -51, -92, 17, 7, -97, 2, 120, -25, 35, 85, -48, 53, 11, 65, 123, -47, -107, 95, -71, 31, 11, -107};
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
    msg.setTimeStamp(0.524405188312);
    msg.setSource(28648U);
    msg.setSourceEntity(141U);
    msg.setDestination(54454U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("LVNCOPGAYFERUHLLSJUUTCCTLDOUJTSKGDWLRGACSHCOIXZQUFLFZODHIDTMJWRZZPAIQCJZERMHKLNTAXXODBDMNYGWDNVIGXPTMIPSFGANWLUHSGKXHBMQRWIZBQOEDXMUBGQVHFKTRYDXWJXPZEEAMWICYKHFNVVOSSOKCOIAZQERWQXSJGBQVKWJJLNKPQMYHANPYGEIKBCQPYRAKUBVYTFVRZTFVDWLSPEBOJTZUVM");
    msg.plan_size = 11921U;
    msg.change_time = 0.191374080383;
    msg.change_sid = 59394U;
    msg.change_sname.assign("FMJVXOXNCCDQPBFQXLGIWMNPBFDCPBIFYRQPFKCDAGXROPKKCTBGPBWEUGEXISMSYULNQGVOLJEHLIYZPJWDMHNKOABMAUIOEKYKXVUDEWNDMQO");
    const char tmp_msg_0[] = {95, 107, -108, -127, -121, -28, 11, -68, -125, 47, 83, 22, 88, -96, -113, 84, 89, -61, -90, 74, -84, 101, -67, -19, 116, -68, -107, 115, -49, 11, 97, -14, 3, -88, -125, 56, -116, -83, 113, -56, 78, -79, 95, 34, 120, 53, 4, -39, 46, -43, 72, -101, 67, -75, 113, 88, 78, 43, 83, 96, -51, 43, -100, -93, 56, 80, 55, 122, 106, -50, 125, 67, -112, 105, -85, -107, 100, -28, -95, -97, -2, 91, 14, -60, -1, 119, 94, -1, -87, 42, 75, -98, -61, 110, -80, -84, -52, -37, -105, -124, -56, -114, 15, -115, -55, 8, 108, 118, -69, 17, -111, -69, 44, -35, -93, 83, -22, -34, 46, 34, 72, -6, -51, 122, -92, -29, 57, 75, -125, -101, -27, 56, 34, -66, 50, 123, 16, -24, 98, -12, -84, 89, -27, 45, -67, 7, -111, -112, 34, 7, 22, -78, -98, 102, -55, -41, -79, -117, -67, 109, -118, 112, -78, 126, 44, -49, -117, 6, -39, -11, -35, 82, -108, 16, -37, -78, -41, -11, 27, 24, 66, 11, 47, 87, -93, 120, 23, 56, 80, -49, 7, -4, 67, -27, -81, -108, -85, 71, 85, 9, -73, 75, 67, 99, 19, -75, 43, -81, 91, -53, 19, 15, -72, 98, -100, 89, 121, -61, -56, -124, -125, 117, -38, -64, 86, -102, 32, -40, 35, -113, -123, -121, -112, 27, 74, -17, -38, 4, 76, -62, -29, -86, 101, 102, -33};
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
    msg.setTimeStamp(0.339176444931);
    msg.setSource(12303U);
    msg.setSourceEntity(15U);
    msg.setDestination(39526U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("VUFFGOAZAZQSPFCLMYUIUDAFEQLBURNBUPQMTPFMZWIISSPUZBVARSITITLNHHV");
    msg.plan_size = 65432U;
    msg.change_time = 0.990638179271;
    msg.change_sid = 3840U;
    msg.change_sname.assign("UYDSQQRPARBIHNOYDNRMFUDCDKUOEVMWMYXWJVNCIRQXYPJDSWEBAYGZRNWTAILEVTMLTLGCCVXLHKLTZPACOWFRHIFQFYZGAZVUGOELIHPFFSEHUQBUCAQIJCGXFGEKASAWZKWSXBDYNRMQXWBS");
    const char tmp_msg_0[] = {-44, -97, 20, -21, 7, 87, 68, 94, -102, 104, -9, 124, 123, -100, -50, -7, 83, -20, -48, 21, 22, -106, 43, -2, -47, 75, -84, -101, -95, 83, 6, -128, -14, -92, 24, -105, -75, 31, 65, 44, 118, 122, -71, -30, -29, 77, -98, -22, -32, -103, -81, 25, -45, 112, -73, -93, 110, 63, 82, 30, 41, 26, 20, -116, -63, 117, 42, 101, 114, -104, 119, 0, 125, 126, -72, -45, 54, -121, 65, 33, -86, 113, 87, 90, -95, 121, 124, -71, 93, 123, -58, -31, -107, -3, 66, 28, -82, 49, 39, 59, -14, -43, 31, -82, 90, 34, -40, -17, 43, 5, -121, 92, -79, -36, -58, -80, 83, 42, -59, 35, 56, -42, -24, 117, 73, 116, -78, -37, 66, 25, 125, 126, 108, -71, 9, 85, -11, -3, 11, -4, -47, -88, 110, 79, -18, -80, 125, 23, 61, -68, -67, -51, -105, -90, -91, 37, -37, -103, -48, -64, -96, -51, 105, 111, -39, 89, 107, 62, -58, -44, -116, -50, -28, 95, 17, 73, 18, -90, 82, -52, -62, -18, -87, 60, 51};
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
    msg.setTimeStamp(0.337037026914);
    msg.setSource(23673U);
    msg.setSourceEntity(140U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("DJRMABOSECHZDKMECEQQFMWGWTLQODZLNXCKMGMCTWHWAPQEPQFOTZSBVIPWYEXJEMWWTKBIJXALJQIDHTVJUULEZAIHNGPYLSSOXVCOKNBANYVYKUETDYPNXODCZJLHFXNORXHQRILYSBSNIGRSFFFAKGRRVQBRYUSKOBQCVAFRUOVDTZIIEAMYMWKMUJUCF");
    msg.plan_size = 26092U;
    msg.change_time = 0.946826152962;
    msg.change_sid = 2393U;
    msg.change_sname.assign("AYMAUBJLBLRPSHHAWIBKXGCPEQQUDQHKHTWOWIVXCEFBUEUZGMTZYHPXPAYCLDEYDUKTHCWYVJIIBACHCTEKAVB");
    const char tmp_msg_0[] = {-127, -119, 20, -93, -86, 41, 124, 125, 39, -15, -114, 21, 8, -57, 32, 97, -9, 113, 90, 112, -112, 109, 113, 43, -30, -120, -15, 99, -114, 45, 89, 65, 78, 78, -43, 117, -17, 54, 55, -123, -12, 49, 21, -1, -104, 0, -101, 86, 59, -81, 64, -68, -18, 112, -7, 123, -85, -61, 5, -34, -28, 112, 7, 43, 93, -75, 10, -78, 36, 67, -97, -74, -66, -80, -15, -29, -62, -27, 122, 67, -84, 45, 114, -71, -123, -35, -50, -8, 73, -91, 34, -68, -103, -124, -26, 30, -35, -35, 98, 68, 94, 120, -32, -127, 58, -123, -4, -31, 122, 83, 111, 93, -80, 105, -16, 2, -100, 2, -89, -83, -70, -49, 81, -24, 66, -100, 44, 42, 26, -121, -90, 91, 106, -22, -76, 88, -59, 20, -1, -95, 7, 120, -39, -79, -32, -43, -59, -83, -71, -91, 57, 30, -97, -85, 126, 120, -33, -44, -25, -37, 24, -37, 90, -11, -110, -21, 92, -42, -126, 62, -32, -36, -80, 49, -65, -60, -64, 48, -57, -65, 39, 5, 44, -75, -119, 63, 87, 51, -91, -29, 6, 29, -65, -37, 3, 34, 12, 67, -104, -98, -42, 8, -31, -83, -20, 6, 67, -17, 101};
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
    msg.setTimeStamp(0.498646719796);
    msg.setSource(45291U);
    msg.setSourceEntity(222U);
    msg.setDestination(43906U);
    msg.setDestinationEntity(46U);
    msg.type = 107U;
    msg.op = 48U;
    msg.request_id = 17947U;
    msg.plan_id.assign("XSUAAQKZXXKIYYJMNUVQRIZZDLVVEDSSXVPLIUQIZTVWXROMQMIJEIDUJDVDLZPKEBGVFBFCGCTFRJFNTGGBMKLOPUAAYNHOUIXXFTVAYCGBKJUFUEMRLMEFYWAJBEEQOACDYBRQSYPTEHHLWTRLWAZBOHKPQVDWXINMJPHZDQOLNOPJGNQIZOFUWYBRZTVQYRRZLAFGRFSHKMDTPHUYKTWOMOHSSECCHXGWCNNKCSDSMLBHJXTNKCPNS");
    msg.flags = 24138U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 99U;
    tmp_msg_0.speed_min = 0.151360824984;
    tmp_msg_0.speed_max = 0.655705000431;
    tmp_msg_0.long_accel = 0.141838291103;
    tmp_msg_0.alt_max_msl = 0.106169991618;
    tmp_msg_0.dive_fraction_max = 0.758554825437;
    tmp_msg_0.climb_fraction_max = 0.0119890751785;
    tmp_msg_0.bank_max = 0.841714449664;
    tmp_msg_0.p_max = 0.0869460130112;
    tmp_msg_0.pitch_min = 0.25089557805;
    tmp_msg_0.pitch_max = 0.567629645356;
    tmp_msg_0.q_max = 0.84217510699;
    tmp_msg_0.g_min = 0.427926201678;
    tmp_msg_0.g_max = 0.696856594711;
    tmp_msg_0.g_lat_max = 0.586399814206;
    tmp_msg_0.rpm_min = 0.701649197223;
    tmp_msg_0.rpm_max = 0.379470218058;
    tmp_msg_0.rpm_rate_max = 0.46000047762;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IXMACJDORCUUXISXJLBEHQROHPCDQEZOXLRVQGPTPMRXMLRCZJEQVYVGATVRHQCBKSOPTFXSBZMYJCOHYULIJQLHXTEZYMTARXKKAGSAINWPVQW");

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
    msg.setTimeStamp(0.857492325522);
    msg.setSource(59027U);
    msg.setSourceEntity(19U);
    msg.setDestination(59217U);
    msg.setDestinationEntity(44U);
    msg.type = 8U;
    msg.op = 25U;
    msg.request_id = 44786U;
    msg.plan_id.assign("SYZEADKRQYREAMPVYHOIFDQIJCTOLMPVUPTZAOGINOKCHZQBVMHXSNYLZRQYMYWNWLZMDDOUDHTCFCDSIIBJXWGTBYQOAYDPBFQIHYZNHR");
    msg.flags = 15350U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.237041440701;
    tmp_msg_0.lon = 0.166465092516;
    tmp_msg_0.height = 0.256147946806;
    tmp_msg_0.x = 0.754659077369;
    tmp_msg_0.y = 0.720618340472;
    tmp_msg_0.z = 0.557019025066;
    tmp_msg_0.phi = 0.507284630819;
    tmp_msg_0.theta = 0.500293931161;
    tmp_msg_0.psi = 0.479397524026;
    tmp_msg_0.u = 0.108419352915;
    tmp_msg_0.v = 0.363529991177;
    tmp_msg_0.w = 0.582513488429;
    tmp_msg_0.vx = 0.893379466685;
    tmp_msg_0.vy = 0.366567099461;
    tmp_msg_0.vz = 0.17040410301;
    tmp_msg_0.p = 0.562028966422;
    tmp_msg_0.q = 0.229935510863;
    tmp_msg_0.r = 0.919053441569;
    tmp_msg_0.depth = 0.923824924534;
    tmp_msg_0.alt = 0.326912601511;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SPAVLGKZNQZNETYAMZJQVSDKZRXGRMIDYV");

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
    msg.setTimeStamp(0.395170889574);
    msg.setSource(17031U);
    msg.setSourceEntity(112U);
    msg.setDestination(29761U);
    msg.setDestinationEntity(126U);
    msg.type = 164U;
    msg.op = 80U;
    msg.request_id = 49051U;
    msg.plan_id.assign("USXKIIVNOKQGWMTQRJFPWBOZPMGTRPAYRHDDEKEGYZRLCPJDRZFNHMEKGBVJIVSUQLUMVHIWZNHEAUFGRSHBKVTIBVQWAOYMEPXCHFDJHYWRZGZCZXLCMOABDTCWOQAXCXGIQQNMPYOQVLSVEJLTQKJLJNANWEFTSXUSOMANABWFSEUQHMNWIDODDYDGZRTYCGUDUKIXZXYTLORRVSHNPSLNAHKBJFZWXUPVIIYYBSGTEXCUBETOALKC");
    msg.flags = 6246U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.659548182672;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 48480U;
    tmp_msg_0.custom.assign("ZYNEGFSSJRSKQICPFNFPEIRFJKPRNOQCJWUET");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HSKKIIJPAOGWUXJBPBLZKGKTSEQGZTHQQOGPJGEMMFYHAYOXZTULSRQPLIZBNKPEPLLUDYQREZIHZEMCZAWJWCRUBFADEATHBUPGKCCQJENXNDXSDWOXTIMGSWJXQVTIUTXDIWIVCFCRONTJKPSYDNEVYGWGXUMC");

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
    msg.setTimeStamp(0.606571739664);
    msg.setSource(22686U);
    msg.setSourceEntity(104U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(5U);
    msg.state = 140U;
    msg.plan_id.assign("GLXNBFRAHTGOGADUSZXLHLDCPAVCQAHNUVJEFJKHYWOVPTMZFNOJHMZIRYEEKIJMMLCOCSJRDUSIPFKCMZMDYNRVIXJXPMWIBAQBABDSUVTUDZZAKWZCXGNZNZASRKTWWVTDNWMHHXEFGYWIXYQFKUBWQOAGPLQYBLHVCEXVEUKCNQOQTOIJUSCGQRPTEBTBLTBSDTPUKPLFOKEDYNSSWBRJYCQIILWXGPQJSXRAGFHOF");
    msg.plan_eta = -553160345;
    msg.plan_progress = 0.663136971712;
    msg.man_id.assign("HZETWWXHOVLYMDYCIJMJOREYYQVFNQKNFSGCLIXZUDYGBWMRJQCOBQKJTTNIDLSHSAYNUSMXNCUXMSGELPLZTXFMPUSAZHPRCUWLQIUDKBLEIWFYXFVDGAGEEUJNKMARRIDHARNSPJNPCRBPQVHTIQFZCWJBUVZDBOBPKPAZWDYGZLGUZYHVLDETBSQVGOJVFSIHBVCMYWKXDMXTQOOFXXTIBTNIPOQRGKKTRENAGOSJ");
    msg.man_type = 41960U;
    msg.man_eta = -893320615;
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
    msg.setTimeStamp(0.110477230419);
    msg.setSource(24386U);
    msg.setSourceEntity(39U);
    msg.setDestination(9829U);
    msg.setDestinationEntity(235U);
    msg.state = 11U;
    msg.plan_id.assign("DSAIIZGUSYVNXRRQYGSJFIQYVBNXITTEHWZJQWWDRZZQYDOINNHYVLEYRXCVMRNEWYCSYEGNKEXFPGFB");
    msg.plan_eta = -1713117859;
    msg.plan_progress = 0.986244193539;
    msg.man_id.assign("JQOFHVEJVKTCDODGHWTXVXHBOUQYZOLHNXBDYJLEEFJSNRTSZCTCIPKRDBSUZDMNMFTAERWUMYUNFSBNIKMCQYZKOHJEFSUETLUXCGQAJPQSKNVVIIBGICGWBLPJQCWAUIRRBMNNKV");
    msg.man_type = 56734U;
    msg.man_eta = -127635016;
    msg.last_outcome = 183U;

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
    msg.setTimeStamp(0.919701087324);
    msg.setSource(17564U);
    msg.setSourceEntity(69U);
    msg.setDestination(32499U);
    msg.setDestinationEntity(59U);
    msg.state = 174U;
    msg.plan_id.assign("DBCVFFMYAJTKLJTMSEFHIGQYPEYAARSSBLZNYKOUQYISVBRBMQTGZYEHAGNWOHNCYUMJSQWUSZFW");
    msg.plan_eta = -1195931358;
    msg.plan_progress = 0.224435541944;
    msg.man_id.assign("NLKNUWNFRJZPJIOGWAQULFLNLYVSIDTWKPYLSXEBMBXQQPWHCGUXACHZZNQIYWLAKSAFFJHBHJRSRITOTTMSMZKEFWBZCHLTHZLMQMHECBPAIM");
    msg.man_type = 37328U;
    msg.man_eta = 1774785587;
    msg.last_outcome = 251U;

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
    msg.setTimeStamp(0.342078558196);
    msg.setSource(30897U);
    msg.setSourceEntity(110U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(72U);
    msg.name.assign("OHLLCIYGIWUFBUWKLOCVWCGASVWDYKPSRXNATBTNQQBUISDXDOEALUJRBZEUROLRPWZUKNLQFRRFIFBGZWNXNNZUKSCBNMCANXHHIGWFPVDTQECJEYZJPJESVWFXTAMVVYFZFMCDQESPSXQHHYXKAYOKDPYYJEGZCIAMLTSJALHIEPBHXZHDHDQMUMFTCEAIDZKOGPTEGQBGVWONMSGTPCLORUIJRYBMZQMAXJKTKJDORYQRUGNHBWMVIVJ");
    msg.value.assign("ZTQAGYRSSEWUQCHHDRFMIMGUNJBGEHSLSBAITJBMEQXBWDVAIRKITHJPOXKAOXYYCPAVJFMWLGNFGJHKQJFVICUEC");
    msg.type = 143U;
    msg.access = 171U;

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
    msg.setTimeStamp(0.522011101167);
    msg.setSource(18739U);
    msg.setSourceEntity(241U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(208U);
    msg.name.assign("NDJNZSALJGOPUBZFSHTIRBRVTPVIHLLTHFIJVMLGJPFAFECNUYANEEGAROFWIPVZJLZCPTXQGMFBHOABYKZCIYJBGWHLSWMQIDWRGMNLSRFCKIBUPXXDGMYOKOQJKDIERCNVTUAASXNUWVJYDZRJWVZCKNFSMWFQEKEHLSYOXOBSGRYMKOODGUM");
    msg.value.assign("LZYXWGJDOMYLFHOIZUBFZETNERACWSJQNZOAFITMXYGEZQQVONUCMCOLIVLLBEQSHAGCJGSUHUYXXXQTMPWRZKQUYPMEQPAAMZVTNGGHAMRXDRLCPXONMEZUHKJNSCXWAUORGTLUEXYNVHRCBMWFOPWVVKYYDECJZRWIQVUKQRIFRDPSKBTPNJATJBKEMIABVDESIHPPKNBFKD");
    msg.type = 43U;
    msg.access = 183U;

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
    msg.setTimeStamp(0.137565644312);
    msg.setSource(56989U);
    msg.setSourceEntity(143U);
    msg.setDestination(53366U);
    msg.setDestinationEntity(207U);
    msg.name.assign("UIMHHJYQCHZGVDCGFLWIYTEMWSGXRDYXEHRFSCDNTAOQUMQTPNOXVGTMTABBNSEPGZMBFYWJVAWQDICLRQKNWPEJZPJIVLJZWTLRLNAQCKROVUXKBSSEETTYKFUEAVVMFGVJAYIDLADYIQPRSRKNOMUAKKNTPVXZZQBUGOZZBXBIHQWZAOCLIXUFRJMHISLUHBINYLFNXBOXDGCDHEPFJHEPFKGZXL");
    msg.value.assign("IMXOOEFCNXHPXWSSUMNIBUOIJFDCUHVKQMCYPSBSPGWKQZQJRTXDT");
    msg.type = 200U;
    msg.access = 64U;

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
    msg.setTimeStamp(0.0303015427969);
    msg.setSource(40899U);
    msg.setSourceEntity(14U);
    msg.setDestination(11935U);
    msg.setDestinationEntity(118U);
    msg.cmd = 191U;
    msg.op = 0U;
    msg.plan_id.assign("ZAWJRDMCKTVSQZZXAVZPKIDHIOXBUGNUKGFKQTGKXTEQRWORPJODEINIMWECDXASRSXHLVUNQMAFCIVYLZFMIDFWYHAIQXRPONCSHRBVPKHCEDQGHQSVNZGOELAHBDDJNFTV");
    msg.params.assign("NYLYZFAAYGKENOHQHHWUGPQWHPQKDOPHDKEDQCAXKVSZSUDOOGNMSTGIUCYCJVVNEBVVVFNTQWUFOYZKIMXTBUDCLEMURONXFRTSQGCKW");

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
    msg.setTimeStamp(0.44221054534);
    msg.setSource(37993U);
    msg.setSourceEntity(179U);
    msg.setDestination(34182U);
    msg.setDestinationEntity(206U);
    msg.cmd = 191U;
    msg.op = 37U;
    msg.plan_id.assign("KXBYQSVSPNIXLWQCAITXAKZJKUNMCQWSGWAORZSUQEGSZYFOYEKQMIFNGFEDETLEIVRENQHZDABMMDTUCHGHKXPUZMDLTYJJOVLPOZTHVOXWBKVRSDWOIZIKUUHLRBSJSPPMUXPYMEBILZXGUIAIXAPFFJAWTCRYSHJFDGRNYCDCAFPHTMVEGMMJUWRNZDYDHRYGXJLLRDPWWNVBQKQCOXRWCYATNFFLPBUHCVBTKKBVJEFOSQOBNCATNGV");
    msg.params.assign("TFUHPSSQVYTJIULPAZHYCSDRQMFJHOLNMAWAPFUSAIFEABWQUGWJUMTQI");

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
    msg.setTimeStamp(0.167623445251);
    msg.setSource(58289U);
    msg.setSourceEntity(240U);
    msg.setDestination(44836U);
    msg.setDestinationEntity(98U);
    msg.cmd = 88U;
    msg.op = 26U;
    msg.plan_id.assign("FLATJZZMHQHHDSTAYGTLBTNISFPGITACOEYSMDVFCAPDEDBLGDNHE");
    msg.params.assign("CAHPFWNANYFTBBSRNLRHJIWVZABJKJDPGDZBHRBJRDPMXCENGQUCERNMQZULOCRVIPLHGLTOMBJPVYNWZMWRDCOAKMNKEJMYWUPAGHTOIOSYZEXKACUXADEUBNZUKIGTKYCBZWZSBQGYVATXSAFIHJBRDGPYSTEHQXDCFSTWFZAMZXCPOPHQXDLORYLVQPDFMFRKLMUQEJTXFIGVGTCJSULNVQKIJXQSFUEKWUGSIKSVLDNYOHTQVI");

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
    msg.setTimeStamp(0.851556654297);
    msg.setSource(48509U);
    msg.setSourceEntity(43U);
    msg.setDestination(36450U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("ASMHMIQJTKHXKAOKTSKZDSYVQPPUXNMWFOYTRIXQZMLPPIZBGGRYRAJMHKIMEYLPNUQBAVWLTBHOPWZGBRTTBLRVEHUTYAAUFHDVGWSJWJCIZFNNWDIWCHJRNDODINLWCDVVBBHEGELCNOWBMCFDPROSLSTQJCFK");
    msg.op = 0U;
    msg.lat = 0.77057045038;
    msg.lon = 0.784847736789;
    msg.height = 0.118350912781;
    msg.x = 0.74713595917;
    msg.y = 0.633369262868;
    msg.z = 0.329603227895;
    msg.phi = 0.65759401505;
    msg.theta = 0.55404522842;
    msg.psi = 0.240510717284;
    msg.vx = 0.694585935759;
    msg.vy = 0.868771558615;
    msg.vz = 0.872752277666;
    msg.p = 0.0993103766907;
    msg.q = 0.341109245823;
    msg.r = 0.899007334941;
    msg.svx = 0.433266562797;
    msg.svy = 0.681583347388;
    msg.svz = 0.669096099628;

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
    msg.setTimeStamp(0.317602637303);
    msg.setSource(16215U);
    msg.setSourceEntity(42U);
    msg.setDestination(23521U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("RXDHVVNKONKLGDXPCSQFZMUIJBEUZMLICLHQCGPSATMIAJUQFPVOPSYEIFKBPBCRJUXOWRNBLDKEDGYQYALMVGDJYUMHVXXAPNIYNQQCATBQZLZMAWKPATLEJXYGNFCVXXRWLGNDRXRG");
    msg.op = 73U;
    msg.lat = 0.914451778104;
    msg.lon = 0.594225582689;
    msg.height = 0.901231657883;
    msg.x = 0.617610811774;
    msg.y = 0.2544765162;
    msg.z = 0.412682960041;
    msg.phi = 0.707709293043;
    msg.theta = 0.0558404801642;
    msg.psi = 0.203088830093;
    msg.vx = 0.300144380199;
    msg.vy = 0.418071843593;
    msg.vz = 0.430886734563;
    msg.p = 0.501751382971;
    msg.q = 0.117074144814;
    msg.r = 0.727903853237;
    msg.svx = 0.807764296445;
    msg.svy = 0.618231088821;
    msg.svz = 0.187073128396;

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
    msg.setTimeStamp(0.873707394505);
    msg.setSource(10438U);
    msg.setSourceEntity(141U);
    msg.setDestination(1590U);
    msg.setDestinationEntity(52U);
    msg.group_name.assign("NKYMOUQOFHBUBKJ");
    msg.op = 13U;
    msg.lat = 0.884100974275;
    msg.lon = 0.519513073944;
    msg.height = 0.845464396204;
    msg.x = 0.569428749256;
    msg.y = 0.0847503536608;
    msg.z = 0.508309700488;
    msg.phi = 0.52977362587;
    msg.theta = 0.785270855725;
    msg.psi = 0.461419405244;
    msg.vx = 0.988672082035;
    msg.vy = 0.410359786334;
    msg.vz = 0.538081652395;
    msg.p = 0.592313855372;
    msg.q = 0.95529799006;
    msg.r = 0.494282093835;
    msg.svx = 0.325870337904;
    msg.svy = 0.552030917345;
    msg.svz = 0.889974928263;

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
    msg.setTimeStamp(0.0222722772935);
    msg.setSource(18620U);
    msg.setSourceEntity(246U);
    msg.setDestination(54806U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.969555486626;
    msg.lon = 0.268238946329;
    msg.depth = 0.427234767458;
    msg.roll = 0.231752416459;
    msg.pitch = 0.972051334886;
    msg.yaw = 0.331134622663;
    msg.rcp_time = 0.259683946461;
    msg.sid.assign("HUZKALTXQPHAUELINXSORWWBVDIFLGKVBBMFDNENVYELPEOQGYODDXXMEOGQZLYZPFGIHLLOWKWCGJAKYATTNYSIJQCMHKOPPBSVPXYNUUMAOQDUMIXTSQRKRDJJFWKCFIZVLDIJOJGJHAIVMOAGKPOGQWPKNCESQHWHCZRHGRUCYJRWXEEWTNWSTSBQSFVVABTFNRDZKYBEIDYAZJCXUINPMRUURYXETZNM");
    msg.s_type = 151U;

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
    msg.setTimeStamp(0.255980055047);
    msg.setSource(34773U);
    msg.setSourceEntity(45U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.830564866469;
    msg.lon = 0.3869992845;
    msg.depth = 0.496224526764;
    msg.roll = 0.103896912568;
    msg.pitch = 0.372512068547;
    msg.yaw = 0.894082108185;
    msg.rcp_time = 0.672701843837;
    msg.sid.assign("SYBVEISHZQILWFTEFDLATDLMZGKXSTBMSQDRNYREQDJFYJXVADIDQAIYYKEPSENUUAFVOBKGLGUKLMERBKXHFKHDYSYRYNWYQBILNJWUGVAVWVOCMPCNX");
    msg.s_type = 111U;

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
    msg.setTimeStamp(0.740384939175);
    msg.setSource(30811U);
    msg.setSourceEntity(96U);
    msg.setDestination(9899U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.0938646727766;
    msg.lon = 0.659728172808;
    msg.depth = 0.361973147834;
    msg.roll = 0.0599424774803;
    msg.pitch = 0.406546889361;
    msg.yaw = 0.374347138793;
    msg.rcp_time = 0.344559565964;
    msg.sid.assign("MDKVALMKNEAFXINUBDJYRZVMDNJMWIUIUXRCFTUKQPGETSGQYEOESMXCDEKDVCIUDGVIPWFJXFYWBPFZIHOPXVTSCPZYSVCFAEZLNABGIFXTNITQNN");
    msg.s_type = 171U;

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
    msg.setTimeStamp(0.288926823822);
    msg.setSource(3499U);
    msg.setSourceEntity(152U);
    msg.setDestination(60578U);
    msg.setDestinationEntity(74U);
    msg.id.assign("YXEMZONTLCHIRRNVQQPHAXCDJPVVRDXFZEWUEQSKANKSIOFCAZTKSGVYLNKJTNFZNCUSLILJTZRWDYAMTAUKQTPPCSRYOGPZGGFPVRJXJARGFFCNAWWIOQDNQGBAMSEBMIWVFYDLEKRJRRHESUSOKXYCTPVBBWXEIFLEECOFZKOXXDQZOTPNTMMZGAUSG");
    msg.sensor_class.assign("OGBPHVQHSFYLXOOUAEGUYCZZSLKKPMXJA");
    msg.lat = 0.270405888465;
    msg.lon = 0.888233539726;
    msg.alt = 0.424865752214;
    msg.heading = 0.648039261817;
    msg.data.assign("DGTQBIJOIPTXIYEZQUDWJYNIFRWAEKHRODJFEHTIZYIQKIRAAQKBHJZDGGEHZLJJHPAKLHSYVFUGTSEZBLRSKFMDMPQVOATWURJECWQBNOYCFCSWUMLWDXYGLQMIYNZDPWMPXORKKMPLPXKZYAUDPUSCEVIOICBXNOVRA");

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
    msg.setTimeStamp(0.616537091144);
    msg.setSource(15044U);
    msg.setSourceEntity(112U);
    msg.setDestination(24670U);
    msg.setDestinationEntity(113U);
    msg.id.assign("AAUVKIAPUWSCHRMZVDXTYSTOWJLBZZEXKPTDDRDXBQKBEKKWPFVFLHESUVDDNIBRDGOCYHXXSEFAIJFPCHUUVTUOCSNIWBWMCQLGRXEIBQJYRYOWEJGCPRUDTDNIUWNWBOGEKPBPAXMRMGMYSPCYHOQNTZJGNCCOHMSAKGDJTRBHYZQTNTSKJVRKVJIVIMPQHOGSLYEZAZWWLQVNRGLZPFQAEEFHQJFXATFIXJKYCALFVOLMZUMLXNGIUFOLH");
    msg.sensor_class.assign("HSYFSACRWTKJCKRMTJUQRJZAELSKRTKJIROVDIUGANPGYNGILSCLESUNWYKOAXBEFZIHJCDPYJOEZIQLZOBFXTTDLXXCBENCNGEAKWLOMHBOHAVYIYDHPHOGBIZFGVNCRIMUKLQWPWQPEETGXQDZTQDMJZYUDP");
    msg.lat = 0.934130585448;
    msg.lon = 0.673672961447;
    msg.alt = 0.890324873267;
    msg.heading = 0.205259906974;
    msg.data.assign("JKPOOVVFALTGVXCOJGJKQBLCKDXURLPJSWFFUYNKKEHLKBBWWLHDTEWNYJQQZUQCCVRKYQZHIGTDYFEFDMXYMWHBOLAXJAHSPDJVHSMWEREZZDULIOHCCOPGIDJJKRSTENUEZ");

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
    msg.setTimeStamp(0.0135081876134);
    msg.setSource(8944U);
    msg.setSourceEntity(110U);
    msg.setDestination(44528U);
    msg.setDestinationEntity(244U);
    msg.id.assign("HUQJUVFWKXUBFQTDKPNDVYRKMVOFPFBPAOFARKEHMHZKZGERXUGRXPIDVTGRDMMYWCVFJSHARYYKYPCJWHRNJNIAANTXJYGBVLFCSZNIRLZYALLHOTCZUXCMBSXGUJMEZISPRE");
    msg.sensor_class.assign("TTRQIKVQXTHOJSMOHTXBINPSQPPLXCKLRMUUKORLVQSNZVZYJHNTOOYDNPKFHDSWLWNDVDXAPQUREWGYOGYHYSAGDXGMPNIKJEGKEBHICCJMFCDIOBENUVUVEWCBOSEZIUSFNMBPJILGCLIIORCFBRMLADEFXZBJZXYWNATZTLHQUVCQBSGTKTJRRLAUEERPKCASGPYJFVADAVPZDQCUWMFWHMGIFEUZXAWXFLZOZJYQQ");
    msg.lat = 0.870057461658;
    msg.lon = 0.148081441197;
    msg.alt = 0.914082435274;
    msg.heading = 0.648499481031;
    msg.data.assign("WHQKNIZLSIVTVFHESDEPMSHEWAKLVQQECNBRNCNPULYYRPUUYFOLKFJLHIMZCDAGTGATKTXQXSBFACPMRWQWBPDYPYTVTRABPMNMYEJUPLRNHDXYXCWFOHOVTGSUDIRPPEXFOJJCCHBGSZTIDNOQZOSVRAOUAW");

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
    msg.setTimeStamp(0.644165418596);
    msg.setSource(33540U);
    msg.setSourceEntity(241U);
    msg.setDestination(14435U);
    msg.setDestinationEntity(226U);
    msg.id.assign("PJYNKLUJLUHUJRBLYEQMHERCKVRFZQTRCORGQADMIONHZRVUSYWHUDJQWHOFVTIQBXMGFYLXLQIXSRKQGLPXHMCIJYSIIMBIJZXXHJKLPYANIBCRZUWJAOMACFDGEVTPNIABYNHFCAWNZMDGNCWOJDAXXTBZDFCFEUGSLTNVCVZEEQORQTSHPGXZEBTCMBE");

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
    msg.setTimeStamp(0.744709458344);
    msg.setSource(62935U);
    msg.setSourceEntity(206U);
    msg.setDestination(9325U);
    msg.setDestinationEntity(12U);
    msg.id.assign("LBGRWWBHUG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZAOEGYPDTMYSOLRUKIYBFRKRUYXTVTUHXXVCIEGGFKEHLBFLBUZBXABUTZUWJJZTJFSJKNTHFXQKPUFVWVITDMMSVSTRWDAGOKBDCDFHWNHP");
    tmp_msg_0.feature_type = 160U;
    tmp_msg_0.rgb_red = 115U;
    tmp_msg_0.rgb_green = 154U;
    tmp_msg_0.rgb_blue = 188U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.861625461337;
    tmp_tmp_msg_0_0.lon = 0.058635769079;
    tmp_tmp_msg_0_0.alt = 0.783180509701;
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
    msg.setTimeStamp(0.198955636832);
    msg.setSource(56847U);
    msg.setSourceEntity(89U);
    msg.setDestination(36984U);
    msg.setDestinationEntity(121U);
    msg.id.assign("JDZDQHDOAOYQLLLIOFWSBUAUSCPEFDWTVPGJEBSDBBKGKDHCIXEPIDHMPSSYNTZVOWFVXTSCKHXCZBCPBNPFQPNAEJTZBXCJJWJGYFNQMEMUKXOASCVUDIYTYYIXMNGTAZIQEBWVROQYGHJXKMMTBLPJMVRRFNPFKORAOJDWUTUSYSAHAXCHVUQOMHSQBDZHEKWGNVYFPJGZUWFRILLAMZKEQKOAEQRTNX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IFTTHUTFXJZDKACBROPCXWLJCICBSABOIUVTJNCDOAPUWVDOYHDIU");
    tmp_msg_0.feature_type = 33U;
    tmp_msg_0.rgb_red = 237U;
    tmp_msg_0.rgb_green = 63U;
    tmp_msg_0.rgb_blue = 236U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.342127839429;
    tmp_tmp_msg_0_0.lon = 0.0115161685566;
    tmp_tmp_msg_0_0.alt = 0.000165383036634;
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
    msg.setTimeStamp(0.370922507247);
    msg.setSource(25867U);
    msg.setSourceEntity(201U);
    msg.setDestination(65156U);
    msg.setDestinationEntity(37U);
    msg.id.assign("OCZEEMCAYZCVIMAJNPGWHAVDDLFGTXCJIDOAKFVGNNJFSZPYUTYWQVUAKHSETUUFSTELMVFMKUSIWWNGXTERHCDAQXFLWVPMGLFKLXOVYYXRUIPQRXQHSBOPRAHNRKKNMDWMGZUZMBQRHPBOQQHGKOBWKPEDFXNDECSJRAIMEOLOCSHRGJCKXWKQVEPBYIWNILXLDGZZYGEAUOTIFNTDYYBBBTSJRBJJOJ");
    msg.feature_type = 20U;
    msg.rgb_red = 241U;
    msg.rgb_green = 202U;
    msg.rgb_blue = 234U;

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
    msg.setTimeStamp(0.641301418121);
    msg.setSource(44518U);
    msg.setSourceEntity(4U);
    msg.setDestination(35768U);
    msg.setDestinationEntity(103U);
    msg.id.assign("KWEYLUVCBOKSURPBZBCTRFFYYWGKXRDAKDQJYNDFREQTFSJNDQKVRD");
    msg.feature_type = 236U;
    msg.rgb_red = 176U;
    msg.rgb_green = 133U;
    msg.rgb_blue = 66U;

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
    msg.setTimeStamp(0.85512215569);
    msg.setSource(48754U);
    msg.setSourceEntity(172U);
    msg.setDestination(45016U);
    msg.setDestinationEntity(54U);
    msg.id.assign("VUCZTHWEWKNBKGZBAHYYHMCGZQXBWSARIOLBGYFNWVWCHLSMVEILMRDXCDXJHIJLSWYYOPLZFNYRQYEAJWOKZLDSEUMGLVHSQIWHOPRFQRVOJJQOJPRWENPPTCDLFGIUNKMBSOPHEEXFJUSPGPACZVNDCVDTUQMJSMDMRAOKSUEPPXMNIUADFIWDBJFGEYGUQIAKFHQOAHZTLRCBTDKKC");
    msg.feature_type = 222U;
    msg.rgb_red = 120U;
    msg.rgb_green = 148U;
    msg.rgb_blue = 12U;

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
    msg.setTimeStamp(0.3811372934);
    msg.setSource(11039U);
    msg.setSourceEntity(43U);
    msg.setDestination(1437U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.184988272712;
    msg.lon = 0.750285668954;
    msg.alt = 0.839393917247;

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
    msg.setTimeStamp(0.94465354119);
    msg.setSource(41658U);
    msg.setSourceEntity(136U);
    msg.setDestination(58521U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.297308164791;
    msg.lon = 0.632538390108;
    msg.alt = 0.335002349179;

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
    msg.setTimeStamp(0.862702358954);
    msg.setSource(37141U);
    msg.setSourceEntity(115U);
    msg.setDestination(9975U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.000421368823482;
    msg.lon = 0.377697518158;
    msg.alt = 0.00298094921923;

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
    msg.setTimeStamp(0.531434869659);
    msg.setSource(52989U);
    msg.setSourceEntity(155U);
    msg.setDestination(56545U);
    msg.setDestinationEntity(216U);
    msg.type = 244U;
    msg.id.assign("XUYPNRFODAVPESWVJFZBBEGOYAUNIAKZLFODVBLKCRLLIFUUMSKUFDNDNTCDSEGBFTNPAOCQCPSVBTXXCSNPWZWPRTIYEQYVHTJMLHXGGABDCCRWYFZPQWTIOIQWGTKEOQSJMDOTEANFBRRGQHVKJYZNXPAOVIGBXTGGEMRWLSRHQXHIWWZKYMFOUDIJCQCMXLUVZEJGMEKZJZQFJLJYLDQMPHHPMHNZTOCXHNLVSBMAVUKXWUBJUKHRRIIS");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.486681060262;
    tmp_msg_0.z_units = 5U;
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
    msg.setTimeStamp(0.992080236413);
    msg.setSource(9519U);
    msg.setSourceEntity(132U);
    msg.setDestination(12253U);
    msg.setDestinationEntity(39U);
    msg.type = 231U;
    msg.id.assign("UWFYYGABDQOVFALLQJDCVETGARUOUJMHEQVVFIRRMWFOMSUHZKTMEQSVFKZKYXCPKQOCJUPTDWGTAXZRBYICRFIVZPHYHLQIUOPYRWPWJTJTIRTWDDZAECZMGXBNQDAMBBXGJVUGZVODRBVNSIDLNMNY");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.905960694565;
    tmp_msg_0.lon = 0.404790134644;
    tmp_msg_0.depth = 242U;
    tmp_msg_0.speed = 0.935561238754;
    tmp_msg_0.psi = 0.354671854526;
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
    msg.setTimeStamp(0.163352922454);
    msg.setSource(42252U);
    msg.setSourceEntity(229U);
    msg.setDestination(24395U);
    msg.setDestinationEntity(180U);
    msg.type = 157U;
    msg.id.assign("MMBJFHQFBJZMSVLWXMUMHRRKGDKBFZMGUUQXCPXPWVDKQTAOTQEVOMEXMLCVBCWKPREPGAWWXBSQRNECLWKJITNPQPDOOPPCTDTZOXSGEJVBLYYBKDZNFEHBIOYJYDCOTSTEIYFRAZDRGHICDNJRQYYS");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 90U;
    tmp_msg_0.htime = 0.689273115476;
    tmp_msg_0.context.assign("LWDKIRFULJTYDQAOCYQJGNNIEUQFVNFUBKHYHUZDRVKSVGXZAESZTAYZROYHQGSIDOBNPBVFCFNCVIJHULYZVRJQRQEPRODZRKFQWPTXLCVWXJKYAEXNUVUSQGPLHDLJQPASHMXZOVETWMNTEMPCL");
    tmp_msg_0.text.assign("JDBKERYSOSHSTATWCATHZIAFFWYXLXHMMUYJVPNYHQQNYLABLFCTIEIQPJIBADNBBUWWQ");
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
    msg.setTimeStamp(0.959839172787);
    msg.setSource(44107U);
    msg.setSourceEntity(161U);
    msg.setDestination(2158U);
    msg.setDestinationEntity(105U);
    msg.localname.assign("DRMRNGTITQZJXIAHMJTXPIYBMGFQXOIELOTIKLEJPJEVCTBITQNBRXOWGRRELWHQAVGGZLMBMYSENOCQAUCGDAAPJSDYTVYOFDFUKWYMOKZGQXBYSQBKVCFHYVWQOCLPMZHKRUCNTBUZPXCOPQKXFMFUCDNHKPECHYPZYVOIWVUDEKEMJVLGZWARWPAVJ");

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
    msg.setTimeStamp(0.8124942765);
    msg.setSource(42343U);
    msg.setSourceEntity(29U);
    msg.setDestination(46271U);
    msg.setDestinationEntity(50U);
    msg.localname.assign("DOBTWQUKMAJBBSTHCZMHUZBPIZVFSIRTQEDKXHRTAHZNNNGMDOXGOLINXDCDGBEDGMYVLQDYKMTYOZLUIIMGNKQXQLNKCKJCRABREIOFGQQDKDFPPJTRWOZDNAFHJUXNZAYVYSAELWMLJSOAMIOWHP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GZAHOYLDFNZUEVAJGZHSUBDCUFUWQHMQXRPMYJEJDLIUEVQJSPJHIXDZTPTYPSORZWJWQYLTRPPBBEPGTFWMZSKNKVRTTSSDVJIRCKJLXDHGWXXYVUILJAVUEBGBHZVXZG");
    tmp_msg_0.sys_type = 187U;
    tmp_msg_0.owner = 20443U;
    tmp_msg_0.lat = 0.483724975233;
    tmp_msg_0.lon = 0.868679989895;
    tmp_msg_0.height = 0.248145650706;
    tmp_msg_0.services.assign("TECWXOFDTTTNFAOMBGPDPELFKGJLUVJUBYYZLNFCEHTNNWIXZRRGFPELCUHJMELVIPXBBAPNMKJCUYOSHAXTIIVJJAWPISBTEJYNKVODUXGQESQCRNCFYBHRMAQUZDVUSBIVYKFGDTIQYANSZJNPBEZZMOWMUHMSS");
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
    msg.setTimeStamp(0.216813970166);
    msg.setSource(55493U);
    msg.setSourceEntity(30U);
    msg.setDestination(5401U);
    msg.setDestinationEntity(43U);
    msg.localname.assign("OBHSAJFPUTMGMHUEZZAXKMRAXVAIVKKQBRLLNZLDRNIYSDGYGAGFZOCIKHSALTYTIJNSJPLWSXJJLAPDTHOQUTTRUBVHFFMSUVEHPQBRTHVBZCIHYNOKEQCLSNKGPVRTCKQNOIQXJMIWWVVDSYYXARBXCXFXFGQTOWWPQOEWLMUZIQXLDWWZADUJSDYWKJBEXBMPJMZANJNDYQYEPIDKCUGEVMOYHRZCHGDWPIZKNOVR");

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
    msg.setTimeStamp(0.612170353037);
    msg.setSource(14429U);
    msg.setSourceEntity(8U);
    msg.setDestination(60579U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("RKIINYKTWDWRPDLNTQGFAUIZXZNOCWIMNABNLVIREYKWSDDLJYUHUXUJPRGTDQHGOT");
    msg.predicate.assign("LLSLVCXNOIACCYCQHPTHONORUUZXHPIVHJJZVLVZDQBPTLCJEBGSHZFOMERPSTNCRAEOKEETTEPACUGKHWBRRFBVQXVUGGIIKGXYHBXKQORVOMKTSJLXALJWNDNMDRQWIXERMJBZSQYFGIPPUYFYKVPGBIIVSZDZBNPXLADFWHWFNLSSAJCHINDHMTQEPGGFQTJWAXUKBDJCTDWFNWOZOARXWYS");
    msg.attributes.assign("XLYOJHYQYVACKDYWXVHVMWTMTBCNHXEV");

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
    msg.setTimeStamp(0.662233336257);
    msg.setSource(51539U);
    msg.setSourceEntity(36U);
    msg.setDestination(28794U);
    msg.setDestinationEntity(22U);
    msg.timeline.assign("KMMRZPIXTHJMVSBUKSGIGVNREQRZPXIYLGFDLZGNEQKGHOQWDPBZBJAQSPWFXUJECVTMYERTYVIAIOFDLIQNOKFAPCYFDJZDHCUHUAVSHMSRAPGWURAYLMWVLKMLLJSWSBKHRP");
    msg.predicate.assign("VCZHHAYUWPPQQJYLXNDBFSBPQENXICNYGWOATDCARNMQTQJBWOZIQEPIHRADRBIRCGCZUTWSSLEKEYXSBNTLDGSMVLHCMUARFXPWSECDCRAJLHZEFLGKMDJLLKEXSYYZMBTKUFRSKMIXHJUWWUUNZMJABFKGPOBJTQMBLVODAGMHJTVIPBNESYPCEOZQWIGXUWPRQIRP");
    msg.attributes.assign("RVGFLDDUVYJEVLXNSTTZQIXVKHAZQDDNFOXSUKRDTHSAARTVTRKWNOPENNIBXVZTSJBJOYPSFHWNKBENPBLZSYCEKEZPWIYJMGAOZGPCQPJYFIUGZPHBNUSHEMDKWCJBTXMBOWWJREUZWBPRIWQDDXHKOIAWOSMYPGYGDFHMGJTCUMFUZLLNVCFFFQYLCMXVGVUJIHFIBESRILVISCHGOMQUQDXQJAACAANOMBHT");

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
    msg.setTimeStamp(0.31463261754);
    msg.setSource(32499U);
    msg.setSourceEntity(43U);
    msg.setDestination(14410U);
    msg.setDestinationEntity(150U);
    msg.timeline.assign("QDDWOYKYZLMOPIFESTJTKBIUERTZDMBYHKNXJPTAMJOIWIYLDNNPBGVRWTJQASQHAOFAYKVJFCIQHFSAQVERWXHBUUXOKMQDDGJSDAPOI");
    msg.predicate.assign("EJNYREGFMTCZUXVTHTXYDFFOVXKDBRACGFWFWHPJVIZAQQVGGKCNWOEAMSZBUMNKKCQAGLOJWOSOBRDPUKGQMJDVTUHNNSHWVUEYUTPQFRGQFTUTER");
    msg.attributes.assign("KFKGOLBMUGYQCFKCFLNCORXFPIZZQWLBYHXVVAZIDTTGNUPKHNHJPMOLFDQO");

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
    msg.setTimeStamp(0.981681601217);
    msg.setSource(59101U);
    msg.setSourceEntity(177U);
    msg.setDestination(7432U);
    msg.setDestinationEntity(57U);
    msg.command = 153U;
    msg.goal_id.assign("BNKNXXVJJWHODYQQZWSHEZDGSFLKHMYBKCMPTLBGZTDXOJNTBSLPNVSLXVMR");
    msg.goal_xml.assign("FGOAZJDSGISJDVPXDEGJSMOP");

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
    msg.setTimeStamp(0.400865559855);
    msg.setSource(8865U);
    msg.setSourceEntity(187U);
    msg.setDestination(56578U);
    msg.setDestinationEntity(251U);
    msg.command = 192U;
    msg.goal_id.assign("SRSWXTUXVBQJZVKVTPRBNOHKMCMIWHCPRELMFQBFEYPRZWUBKVFFYDEATNLWOAKPDKPHD");
    msg.goal_xml.assign("TQMKZNHNQCRJYYVKJOMLFVKUVOHSNBGXVCIRCDRHHWDFMYMOCCWDVGIBOZKNITTSVUQLXZTGFDZNSTQPLLEAJKIKEDI");

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
    msg.setTimeStamp(0.284090646436);
    msg.setSource(65269U);
    msg.setSourceEntity(167U);
    msg.setDestination(11293U);
    msg.setDestinationEntity(146U);
    msg.command = 98U;
    msg.goal_id.assign("TMRSEAUSBLJPFYTXSKKSAGKRRLMQGWHYEXBVIREFBJEJCUKDZANBTQRUVHD");
    msg.goal_xml.assign("ZJQFSICFXNZXNHMQFRESORUJORLQEJWZEKFTDGYJRQSDXQLNXWLTDDIHFPNGVIMOHZDERULPRYYESAUXWWSYIPGHQHBOPMKYMVJKXLFSPNNDKBYUCBNCQKMKAMWLZAJOIAVMVYZYXXKFARFHCRKEWPOUEGKWMFOIUHVLDGZLBITZPUSQBUZE");

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
    msg.setTimeStamp(0.839892520058);
    msg.setSource(19404U);
    msg.setSourceEntity(227U);
    msg.setDestination(2518U);
    msg.setDestinationEntity(77U);
    msg.id = 247U;
    msg.width = 54190U;
    msg.height = 44049U;
    msg.widthstep = 64670U;
    msg.channels = 154U;
    msg.depth = 124U;
    msg.finaldata = 21U;
    const char tmp_msg_0[] = {-123, 15, -103, -43, -70, 64, 118, 102, -80, -84, -4, -41, -101, 100, -73, -70, -24, -59, -90, -24, -59, -85, 120, 94, -115, 6, -42, 43, 43, 111, -31, -117, -79, 84, -67, 113, -113, -31, -2, 74, -122, -94, -50, 72, -56, -6, 66, -95, 52, 52, -1, 46, 103, 33, 19, -122, 57, -43, 22, -69, 116, -67, -44, -89, -127, -8, -26, 91, 26, 104, 38, 54, 52, -115, -33, 8, -109, -49, 44, -4, -126, -95, 61, 126, 60, 61, -70, 19, 3, -95, 25, -105, 2, -13, 49, 92, -125, 97, 59, -46, -89, 12, -9, -128, -16, -21, -34, -93, 70, -64, -5, -75, -46, 54, -73, 32, 73, 49, 95, 28, 119, -67, 37, -86, 112, 57, -29, -68, -56, -33, -118, -71, 87, -114, -36, -79, -115, 91, 2, -23, -60, 50, 94, 15, 76, -84, 96, -78, 58, 35, -64, 47, -34, -85, -120, 112, 82, 31, 48, -94, 52, -84, -72, 117, 48, 55, -95, 8, -70, 9, -123, -35, 98, -47, 14, -93, 74, -72, 122, -65, -90, -33, 7, 91, -97, -125, 113, 15, -100, -41, -57, 34, -111, 60, 59, 23};
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
    msg.setTimeStamp(0.579358861878);
    msg.setSource(42313U);
    msg.setSourceEntity(84U);
    msg.setDestination(665U);
    msg.setDestinationEntity(72U);
    msg.id = 169U;
    msg.width = 43489U;
    msg.height = 9256U;
    msg.widthstep = 49690U;
    msg.channels = 2U;
    msg.depth = 100U;
    msg.finaldata = 225U;
    const char tmp_msg_0[] = {-33, -99, 83, -111, 118, 108, -111, 85, -50, -70, 74, -29, 16, -94, -19, 33, 114, 12, 97, 92, -87, 32, 68, 97, 114, -31, 43, -18, -92, -55, 25, 46, 75, -126, -10, -82, 40, -70, 111, 15, -119, -83, 68, 58, -96, -14, 6, -64, 33, 36, 73, -15, -26, -43, 101, 69, 54, -48, -40, -39, -33, -34, -78, 102, -102, -115, 31, 70, -115, 27, -36, -77, 105, -67, -47, -81, 123, -123, -77, 54, 83, -109, 71, -123, 21, 87, -104, -76, -24, 87, -89, 70, 71, 125, 56, 9, -35, -54, 113, 45, -33, -61, 86, 0, 65, -101, 7, 46, 122, -108, -10, 108, -62, 42, 115, 9, -71, -100, 93, 102, -27, 89, 93, 89, -75, 22, -60, -70, -34, 60, 61, 70, -13, 40, 113, 121, 27, -110, 49, -46, 84, -40, 83, 27, 113, 110, 57, 12, 124, -115, -93, 44, -51, -56, 104, 86, 67, 113, -4, -99, 74, 15, -93, -48, 110, 29, -10, 60, -79, 103};
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
    msg.setTimeStamp(0.988418863337);
    msg.setSource(8832U);
    msg.setSourceEntity(116U);
    msg.setDestination(62756U);
    msg.setDestinationEntity(181U);
    msg.id = 166U;
    msg.width = 14722U;
    msg.height = 64635U;
    msg.widthstep = 28464U;
    msg.channels = 171U;
    msg.depth = 190U;
    msg.finaldata = 36U;
    const char tmp_msg_0[] = {96, 24, -2, -127, 4, 111, -10, -6, 85, -99, 114, 101, 24, -7, -5, 86, -87, -72, -39, 68, 45, 0, -48, -67, 28, 28, -63, 126, 108, 96, 70, -51, 117, 87, -40, -93, -51, -81, -51, -56, 120, -80, -55, 51, 37, -43, 109, -124, 38, 123, -30, -34, -96, -70, -64, 123, -77, -103, 88, -52, 4, -92, 65, -48, -56, 45, 103, 91, -52, 70, 3, 46, 55, -67, 98, 23, 109, -105, -81, -117, 43, 54, 79, -26, 16, 36, -68, 54, -107, -25, 53, -40, -95, -67, 79, 97, -124, 114, -65, -8, 50, -93, -15, 97, 70, 18, 89, 108, 35, -17, -105, -20, -114, 17, 30, -53, -117, -63, 19, 4, 108, -17, 123, 96, -86, 91, -66, -16, 124, 80, -50, -12, 93, -87, 56, -2, 115, 103, 83, 56, 124, 126, -25, 88, 37, 34, -6, 56, -26, 101, -90, -32, -125, 12, 123, -77, -35, -85, 27, 51, -57, -86, 10, 121, -53, -75, 63, 22, -20, 34, -31, 94, -16, -94, -78, 88, 18, 126, -10, 99, 63, -110, 91, 18, -4, 53};
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
    msg.setTimeStamp(0.903064733997);
    msg.setSource(63145U);
    msg.setSourceEntity(181U);
    msg.setDestination(42538U);
    msg.setDestinationEntity(25U);
    msg.width = 4570U;
    msg.height = 50152U;
    msg.channels = 184U;
    msg.depth = 12U;
    const char tmp_msg_0[] = {-111, 108, -126, -11, -67, -111, -108, -55, -19, 71, -23, 121, -18, 106, 5, -98, 105, -31, -111, -99, -102, -87, -37, 55, -117, -26, 51, -118, -45, 18, 56, -91, 49, -91, -14, -58, -29, -80, -55, 122, -35, -67, -38, 87, -118, -28, -123, -77, -124, 1, 80, 66, 88, 115, -38, 75, -62, 24, 2, -51, 38, 124, -106, -35, 25, 54, 126, -61, 91, 58, 43, 52, 119, -46, 107, -81, 5, 114, 76, -116, 78, 72, 66, -113, -20, -76, 53, 61, 88, 99, -29, 77, -3, 94, 116, 1, 18, -21, 71, -48, -117, 114, -1, -106, 6, 66, -108, -63, 39, -5, -18, -119, -6, 45, 55, -124, 87, -75, 125, -126, 44, 81, -13, -108, 102, -23, 48, 114, -87, 69, 63, -79, -111, 113, 103, -9, -84, 44, -29, 2, 55, -76, -89, 13, -124, -103, 18, -98, -63, 60, -111, -48, -115, 117, -89, 56, -14, -71, -22, 8, 21, -55, -74, -126, 56, 49, 105, -77, -92, -57, -88, -85, -68, -80, 12, 71, 44, -52, 19, 6, 57, -31, 54, -14, 72, -22, 115, 113, -53, -74, -77, 38, 4, 87, -72, 76, 115, -33, -4, -1, -20, -2, -105, 103, 39, -61, -61, 56, -123, -70, 53, 36, 39, 62, 4, 8, -11, 43, 50, 107, -92, -18, 3, 19, 1, -95, 80, -18, 40, 25, -80, -62, 54, -126, 116, -79, 122, -62, -98, 68, 29, -103, 102, 80, 76, -115, 100};
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
    msg.setTimeStamp(0.303439096328);
    msg.setSource(11852U);
    msg.setSourceEntity(20U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(178U);
    msg.width = 8869U;
    msg.height = 34010U;
    msg.channels = 128U;
    msg.depth = 107U;
    const char tmp_msg_0[] = {63, -36, -114, -76, -57, -115, -28, -92, 91, -32, 27, -87, -4, -112, 48, -112, 52, 91, -61, 87, 20, 76, 102, -123, -111, -87, -51, -26, 33, -86, 85, -11, -121, 116, 38, 95, 58, -106, -31, 9, 122, -103, -64, 48, -122, -5, -1, 125, 95, 104, -55, 108, -112, -108, 122, 49, -112, 48, 57, 53, -17, 19, 67, -31, 14, 15, -52, -39, 13, -50, 41, -125, 49, -68, -46, -96, -30, -116, -120, -127, -5, -65, -59, -31, -36, 80, 90, -26, -29, -112, 95, 73, 50, -68, 88, -4, 61, 81, -37, -124, -29, -89, -125, 33, -92, -66, 54, -49, -99, -76, 35, 77, 71, -87, 84, 74, -28, -80, -124, -15, -16, -117, 106, 16, -89, 77, -72, -124, 21, -48, -76, 21, -53, -118, -71, -41, -32, -100, 2, 51, -8, -104, 22, 76, -108, -63, -110, 31, 56, 70, -99, 119, 105, -5, 111, -41, 122, -117, -108, 87, -44, -123, 111, -36, 121, 91, -112, 124, 124, -86, -35, -57, -58, 29, 11, 122, 66, 24, 111, -37, -16, -30, 84, 122, -9, 69, -74, -125, 42, 31, 52, 117, 119, 81, 43, -52, 80, -4, 63, -31, 40, -29, 91, -28, -106, -119, -55, -51, -44, 71, -39, -2, 43, -66, 44, 57, -4, -96, -124, -78, -127, 114, -91, 0, -109, -24, 124, -111, 0, 86, -36, -12, -99, -114, 27, -120, -71, 76, 7, 62};
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
    msg.setTimeStamp(0.952225889129);
    msg.setSource(11965U);
    msg.setSourceEntity(84U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(98U);
    msg.width = 51743U;
    msg.height = 15779U;
    msg.channels = 77U;
    msg.depth = 141U;
    const char tmp_msg_0[] = {-67, 109, 86, 18, -79, 62, -99, -78, 7, 78, 103, 34, -87, 123, -56, -60, -52, 108, -94, 3, -23, 104, 115, -115, -24, 71, 53, 124, -66, -5, 12, -28, 76, -31, 91, 34, 17, 63, 60, 126, 98, 1, -23, -10, -106, 90, 14, -115, 102, 63, 74, 85, 82, 47, -20, -67, -20, -2, 70, 54, -78, 44, 44, -73, 45, 111, -74, -27, -106, 55, 48, -26, 102, -88, 122, 33, -123, 42, -45, 125, -43, -98, -100, -46, 16, -76, -9, -86, -125, 126, 8, 19, 27, 105, 86, 79, -97, 111, -113, -33, 117, -1, 117, -105, 17, -65, -43, 71, 105, -104, 82, 27, -117, -47, 14, 90, 79, 20, -18, 84, -94, -33, 63, -125, -97, 86, -13, -79, -100, -39, -86, 110, 100, -14, 50, -12, 104, 64, 57, -107, 16, -39, 116, 61, 33, -8, 80, -126, 51, -38, -90, 99, -4, -63, 110, 77, 37, -110, -24, 51, -121, 32, -58, -7, 67, 72, -124, -41, 20, -113, -8, -94, 20, -17, -9, 118, 46, 104, -8, -50, 21, -65, 95, 47, -107, 66, 96, -72, -86, -13, 122, 89, -52, -53, 33, -21, -22, 77, -86, 90, 98, 36, -121, -23, 108, 68, -126, 97, -72, -14, 24, 65};
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
    msg.setTimeStamp(0.158642434533);
    msg.setSource(54019U);
    msg.setSourceEntity(1U);
    msg.setDestination(45628U);
    msg.setDestinationEntity(172U);
    msg.frameid = 102U;
    const char tmp_msg_0[] = {112, -71, 43, 51, 26, -91, -53, -44, -46, 92, 50, 91, 36, 75, 33, 67, -81, -10, -34, 29, 91, -127, -119, 111, -50, -10, -2, 87, -75, 13, 93, 3, -123, -15, 116, 83, -49, 34, 24, -95, 14, 24, 53, -20, 14, -13, -43, -100, -4, -22, -12, -115, 11, 99, 101, 6, 39, -109, -48, 56, 4, -58, 65, -101, -38, -17, 37, -82, -55, 125, 50, 117, -71, -25, -89, 48, 112, 63, 37, -128, 9, -109, -53, -28, -69, -39, 46, -39, 86, -20, 63, 52, 87, -41, -87, 30, 109, -80, 93, 58, 101, -87, -65, -44, -76, -117, 2, -40, 51, 62, -6, -104, -117};
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
    msg.setTimeStamp(0.611923923379);
    msg.setSource(62803U);
    msg.setSourceEntity(28U);
    msg.setDestination(37215U);
    msg.setDestinationEntity(51U);
    msg.frameid = 45U;
    const char tmp_msg_0[] = {11, -89, -105, -73, -45, 87, -82, -122, -122, 32, 123, 119, 28, -87, -68, 41, 1, -112, 39, -59, 52, -27, 37, 40, -49, -128, 81, 48, 112, -27, -71, -59, 48, 54, 103, -56, 2, -105, -54, -46, 14, 77, -119, 86, -19, -93, -99, -61, -105, -68, 102, 62, 85, 89, -91, -80, 92, 21, -66, 111, -99, -102, 49, -56, 49, -114, 119, -72, 52, 60, 125, -92, -65, -124, 119, -56, 123, -16, 16, -32, -65, 125, -16, -101, 103, 105, -114, 29, 58, -122, 48, -114, -43, -68, -65, 71, 7, -74, -86, -118, -128, 40, 28, 2, -22, -107, -125, 33, 35, -76, 126, -72, -57, -31, -85, 40, 122, -40, -26, 7, -25, 4, 55, 99, 108, -16, -45, -1, 35, -123};
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
    msg.setTimeStamp(0.22886620832);
    msg.setSource(7918U);
    msg.setSourceEntity(26U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(73U);
    msg.frameid = 0U;
    const char tmp_msg_0[] = {3, -30, -76, -92, -40, -46, 51, 90, -97, -101, 121, -57, -95, -122, 17, -34, 38, 15, 50, -107, -48, -85, -42, -42, -80, 26, -6, 74, 11, -125, 33, 59, 78, 116, 120, -4, -54};
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
    msg.setTimeStamp(0.75318840077);
    msg.setSource(15312U);
    msg.setSourceEntity(254U);
    msg.setDestination(33777U);
    msg.setDestinationEntity(40U);
    msg.fps = 19U;
    msg.quality = 116U;
    msg.reps = 192U;
    msg.tsize = 203U;

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
    msg.setTimeStamp(0.513108465577);
    msg.setSource(60323U);
    msg.setSourceEntity(64U);
    msg.setDestination(51840U);
    msg.setDestinationEntity(144U);
    msg.fps = 204U;
    msg.quality = 0U;
    msg.reps = 232U;
    msg.tsize = 200U;

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
    msg.setTimeStamp(0.689117586134);
    msg.setSource(7012U);
    msg.setSourceEntity(95U);
    msg.setDestination(58862U);
    msg.setDestinationEntity(12U);
    msg.fps = 0U;
    msg.quality = 15U;
    msg.reps = 83U;
    msg.tsize = 4U;

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
    msg.setTimeStamp(0.621044912626);
    msg.setSource(664U);
    msg.setSourceEntity(155U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.834201278122;
    msg.lon = 0.537041085411;
    msg.depth = 32U;
    msg.speed = 0.324557453743;
    msg.psi = 0.980693149577;

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
    msg.setTimeStamp(0.167075015604);
    msg.setSource(65449U);
    msg.setSourceEntity(86U);
    msg.setDestination(50545U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.909007880855;
    msg.lon = 0.696492641568;
    msg.depth = 8U;
    msg.speed = 0.095153190857;
    msg.psi = 0.787483376038;

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
    msg.setTimeStamp(0.691752748891);
    msg.setSource(56444U);
    msg.setSourceEntity(230U);
    msg.setDestination(9654U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.709603580701;
    msg.lon = 0.990309408761;
    msg.depth = 87U;
    msg.speed = 0.992234415307;
    msg.psi = 0.6978544763;

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
    msg.setTimeStamp(0.574428137561);
    msg.setSource(61481U);
    msg.setSourceEntity(157U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(41U);
    msg.label.assign("BRZDWUMFVETXIUPZVNCJHXMZUNECUDVGORKLLFADVJSUJGNMDARWCEICJZHXSDANZSFGIIJMBPFGENEEOCOUIJIBKKNYYRVPTKYZELAXQOZOYNKSUULDHLTSQCTPRSBQLELAZWYVEUQYGKRZVSWQQLO");
    msg.lat = 0.899822059324;
    msg.lon = 0.383009994752;
    msg.z = 0.326669620798;
    msg.z_units = 216U;
    msg.cog = 0.425220930158;
    msg.sog = 0.757362697741;

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
    msg.setTimeStamp(0.590499088853);
    msg.setSource(31985U);
    msg.setSourceEntity(11U);
    msg.setDestination(60094U);
    msg.setDestinationEntity(245U);
    msg.label.assign("ESPPIXAHZGUCPJPYBZQROFRAEBYDNMBE");
    msg.lat = 0.927825043105;
    msg.lon = 0.595534061812;
    msg.z = 0.470287618562;
    msg.z_units = 166U;
    msg.cog = 0.494938062931;
    msg.sog = 0.335791831013;

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
    msg.setTimeStamp(0.381378960033);
    msg.setSource(5907U);
    msg.setSourceEntity(124U);
    msg.setDestination(48232U);
    msg.setDestinationEntity(234U);
    msg.label.assign("UMRWFSANBJHDVGEFTXHIKRQJUUPLCTYTBFQIMDWUYWUWDVQJSCEFZFQWRSYROMVUYYJVADPEUPLVBWDIZIKJFMM");
    msg.lat = 0.327236915906;
    msg.lon = 0.088905288585;
    msg.z = 0.941907988269;
    msg.z_units = 243U;
    msg.cog = 0.204346010752;
    msg.sog = 0.113983461259;

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
    msg.setTimeStamp(0.538244136532);
    msg.setSource(5042U);
    msg.setSourceEntity(175U);
    msg.setDestination(8422U);
    msg.setDestinationEntity(45U);
    msg.name.assign("OSMJIRZQBJORNOWXKBXAGSOBFSWIDFVEEUWTCNMQWQWZGHRDQVBCQTDDYAQFHKYWEGLGGIHOYJXHLQXKKJNZQSZMXCFYXAMMAHRMIPCZRIAPIPOQYDCJOKDFULBYCYJEZBPOHZNNPTLMFSLUBKHJHQWYMTUPFVTXDBXHCHNIGFTSZXTOUPVZYEFNLELKLKCU");
    msg.value.assign("CTZBBRKMUHOKLRMYWJRPTCWIQQHZSYVQLSSHKDCJQHVLUXTUNFSMPVKZDCKYXRNIWPXNFVHLIDAOSQHE");

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
    msg.setTimeStamp(0.908437825475);
    msg.setSource(5886U);
    msg.setSourceEntity(99U);
    msg.setDestination(678U);
    msg.setDestinationEntity(123U);
    msg.name.assign("IGEKDLBOWTATJRQMMIQMKXRZZFDRFNAEFCZSWDIZ");
    msg.value.assign("EJUZMIXOETRRXZPLWFYYQMTYIEGUZVVRSIYOUHQUYAXIANCTBH");

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
    msg.setTimeStamp(0.931551867255);
    msg.setSource(35519U);
    msg.setSourceEntity(164U);
    msg.setDestination(20702U);
    msg.setDestinationEntity(150U);
    msg.name.assign("OCJOIUKXDRAYBQIMMXSENWWBYQMESKTPHUYCWPLRZOHTORKDEQJYYRFWVFYCHFJOQFESKCDOVVVJHIAIZJQTRDKMTTCWMYNUJZUQBIUPAHZTUTIZLACEPSDOOGQFNDBTW");
    msg.value.assign("XRXAFUHIQPNYAKUDHYARTQPWYAKSGQEROPPGCGNBMOCFWVTBMVQETKCCSCXIGUPBDPGHRLRN");

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
    msg.setTimeStamp(0.836523699101);
    msg.setSource(44252U);
    msg.setSourceEntity(227U);
    msg.setDestination(21054U);
    msg.setDestinationEntity(175U);
    msg.name.assign("IEXHICWCSKXWUIZKPNTLINFIAQFRMXGGHYVAEHTOYEDJKRBJHLKDWBTTXRQTGNCTSORJOAEPSAGVFSHDJHPAPHLTBQKPHIFMSMRYJQHUESJLYAVRBEJGBUMHLDSQTUOIDFCDMWZZCVIXKTOLPWOOUZMQYJTCOVUQRAZLWPMNUYBBCOFZKDXBRUFXOYQXYF");

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
    msg.setTimeStamp(0.437302253983);
    msg.setSource(22996U);
    msg.setSourceEntity(1U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(225U);
    msg.name.assign("IEULJKHJCIJLDKVXYHAUWSWLRNIWOZCGNHZFCSUPWDXAXVUWJWRGLMWZRSQEMONDQZVCQCMKZIIWESVGVTDBFYPLVESASRQXHRITDOXHJNZRFKHZMQMXBTKFTENXHOQDRCEOAIZKJWSYEGXGMGONKDNCFYTUTQPYYYCGNGOHPFVZBTIEOUPBIVRSFYLQBNWVSOFMGMCRRFFVJLNAHEBYBTP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZPZDKQHOPTGYIBBHMXQDJKRGVTLGNKFMTAUVMLXBFKPDMVTJUOIBCJHYZVVJJRFLPPASJZYZXMAFFIWOWMODAEWUTVEELQWXOCENLSRORZJHDXWKCRYEQSSBLSQONFMAKBXSTXTHYUNQEACCYLEKWBJXRCRMG");
    tmp_msg_0.value.assign("USEBNONTJDZNHLYIWZYUULBBTYIRWUMJWHLCOPGEAYYKIQKAFSZTHBBWEOCXDFCUIVVKMWFWDIBMZNJBKRECPMJSPEOXAQTOMWUQOMXMFYLUVNNSENVIXHCNSQTYBVWHLEJCBQAQGQCMPPJZRWEXCIAHDZHOSKXFVZGYLNDUGIRDJNXT");
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
    msg.setTimeStamp(0.158144946468);
    msg.setSource(2208U);
    msg.setSourceEntity(156U);
    msg.setDestination(23243U);
    msg.setDestinationEntity(62U);
    msg.name.assign("HTHKQASGOGCNQWIYULCOHDWMSGBFXDXXDZOUEQLUZNIZDEKTCPETVSMGEGBDVPWFCOLLIEJSARSGKPIHWXIEYKUXIKTROOMEVXCFDOMEHPHQBTWRVXVHJYSRJWEQBLKUILHIRKZRULDCVBXFYVYCZEBOONFNDNRYTAFPPTNJQIIRBZMVMTHNFAJJFASYSG");

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
    msg.setTimeStamp(0.102954124073);
    msg.setSource(38117U);
    msg.setSourceEntity(98U);
    msg.setDestination(21145U);
    msg.setDestinationEntity(207U);
    msg.name.assign("LNJFAZETEHPMBWNYAOLEOYOOFVRZYLCEXFEXCZRLKXXRNWJCVZGNEFHTCGUTIUIWTOLGMBYQAKAFXDMPKZMKQXKFJBPDKSOVWHDIHPNOYZKSXRWFKNGQMWDTFVTHZDUZHBJGSPEGUPJWBVNUJQVRMLGIQCDPBJKANVOIRLCXTAI");
    msg.visibility.assign("JLQMHONVODBDQFSVWPDOCHGCCUBTAICDJDNDQZBGPSOYERASFVSGRONFITBWJYFKCMBIQBYGKIEKUMRCYKLQWKAXRRIYSECWRRXDMADQGCZYJFLGXWXYANXFVIPLUWEUMUZKOIZUJMKTMJAHAVHBGVOPRQPZQWFBATJLGXLQUTDZCLWPNXJHETPVHRUFEMRHXONTYMSLSOLETSAGQKVEFNGTXBS");
    msg.scope.assign("PMOAPWYDZDZBQCGKQVZVQKXNAOCEALZMKVICVJODYFUAZNMRMTSXYAIYTYBNEBQIZHBZCRSTPUGBIMHQHGURHTVBBSDYFSTJFBXJQRVLLIWLJPVIDEWMIMFJVTPLELDVNJMSRKKYDBZSCJCSGMRUKSLAXOFOTXAZHEPUGWTKCRKLHOCWJEOUUQYWAAROXLFNINICWHJFIFWFGOQETH");

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
    msg.setTimeStamp(0.883903550762);
    msg.setSource(125U);
    msg.setSourceEntity(6U);
    msg.setDestination(53138U);
    msg.setDestinationEntity(109U);
    msg.name.assign("RNGWTYIRVTAPNCOGUCZHTHSXQHJDDLNYMLXALAMIDWJPZIKEEJWFQMHQITXWXYCVRMNORKVUJYZVHDDHLAYOUIANEQOTMFMLUMWIZJIKYFPGIDZGKQZCTWMLGCCUQTJBOJBVMNDXWLGBWVYSHFULSOCDBRAPEEMFNUUKPEKJSGPFHGEXRXOAZTQVBJSKTALYKBXBFTNFNHWUWAEVYESRFGBXRDSSOPRCIC");
    msg.visibility.assign("GVFUONFZHMDBHIKRBXDXVGCZACRBBKORPACMUQRLLWNUFBLHVKEUNMPAYZCFWTHLZVYKSWMPQTTMXCWJWRVZUSEHUTCLPSYSVKQBBPNDIWEOTNQHJPZFDWBLVKDKTDJEGAUKJTWLOMXFGOYOIEMRPSQXTWNQEIAYIAAQJJAFSMYOBZ");
    msg.scope.assign("OFQYDPDBTIJQVXLRBIXTCTMPMMBXSZPRNAMVDJEUEICOYMOKGZSCQVGOSJXAAHPEQPHACQFGP");

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
    msg.setTimeStamp(0.954919549892);
    msg.setSource(44515U);
    msg.setSourceEntity(189U);
    msg.setDestination(49818U);
    msg.setDestinationEntity(209U);
    msg.name.assign("FGDFIWSYNQWOXZARIGYDHYDFNUPQIERVBVJMGEZKLKMAATGOOTJXGJMSHIYNFIIOSKZNUUBKPQKJLOSZGDETUJFAAEEYTZLHNOXYGQDDRQGENKFPKWXLIKPCXUQLEHOBRNPMCVUPWJMTHSJZ");
    msg.visibility.assign("AVBDYEAZIFGZALMRBKEQMKQXQKVLLFSQEYGENCXJKKDTBUYOUBYNPPAMHCDTVYTMAYQDCWFMHSHOPIVOFOJNNBTOIQZJJLKN");
    msg.scope.assign("MDFSJGKUBHVWFTYGNMLVNTWFQKIJKJOZLGAQIOLWECEVYOIFKCMBULUGNFTNDAWZSSKZV");

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
    msg.setTimeStamp(0.154229613736);
    msg.setSource(34809U);
    msg.setSourceEntity(156U);
    msg.setDestination(59458U);
    msg.setDestinationEntity(188U);
    msg.name.assign("VNZKNEKLMUHOOGGRGMQTPMRNIIIVHJBLAQARGWFZBJWGYUMHLYSFYBJDJYHZPQLCPDKSYQWUVJCKZHTOFFLMDIANXAKIEJYQWRPRBUKXEEUVRAFHSMPTSYWZVZXC");

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
    msg.setTimeStamp(0.17265380873);
    msg.setSource(18972U);
    msg.setSourceEntity(192U);
    msg.setDestination(60590U);
    msg.setDestinationEntity(199U);
    msg.name.assign("LLWMNVIILYVAKWFKHCSBJFIZIVZIDTWTZFLWLMOQCKDGZHOMCGPGVCAXMXMCPOTRKVUKXWACGTEJSJOXGKTBUMUNIOQRKAKEYHPPWO");

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
    msg.setTimeStamp(0.765865661176);
    msg.setSource(53565U);
    msg.setSourceEntity(202U);
    msg.setDestination(1183U);
    msg.setDestinationEntity(156U);
    msg.name.assign("GJNOQADEAWEVIYPFPMMQISHEZNTIYKXOHXTWSHKGNWPLRWDAGFEYRKCHEOECPJWWODVZFUQBJAKITMIFOSGRXNBYGWHZZLAOSLIZVANITKATHPVQDOSQPFBJVVJJCBTXIXOXHQOJQRFYCBJBIVHFNSSYLJPBWULKDGTNENWHFZAGCPARNKUZRVMLYRVCDJSMYDLGM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CYYRUKMNZWSBTGGXNHFKZQQDGPMJOCONPEDUHGZBYAJEWTWTIJIBFOHNSOCVTBWTDPPTKQWXZVQWGTVQPGWXXCBZKLKVEOKCJGRZCLHWASYBJYXIHDAQAOPSULSHVIHPNLNSQUVRFIFDIMCVMKJOBREUERREYLFALPBNQSXIGMWLPZUVVNEZXNQQABRCFTYLH");
    tmp_msg_0.value.assign("PMAZBQYXEWYWOKAIFMTKGFCSMCXKLAJZIZLDRTCYWTAVELRCIMEQDBRAHNSVJVPBCHEQNIJYMZWIWRRLMHFQPJTPGZGNPEPFHADYNIZLODCCKXUIJJTPOTJBYIVDRLTQXSOAHVBUGQSZMOSOWWJRBHG");
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
    msg.setTimeStamp(0.731309869952);
    msg.setSource(27702U);
    msg.setSourceEntity(46U);
    msg.setDestination(35503U);
    msg.setDestinationEntity(6U);
    msg.name.assign("SDUHDSQCEDZLSYGUBMQBBNQMIELKXPZTGEVUVHIAHSQXVECWIHTJMLSBRUZEHGAFQAKRJWPHBFMTTNHRWPGDJFNXBLUACIFUYYMBFKZYCCFQCZOYUEWKZVELIZLNQVBDMUXNGNWQIARKOFTTZEPCOJCIXOSBVXNARPTKQJKJSIODFMNYGOJCZSOHLEHRPI");

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
    msg.setTimeStamp(0.0489078327392);
    msg.setSource(62967U);
    msg.setSourceEntity(252U);
    msg.setDestination(18958U);
    msg.setDestinationEntity(105U);
    msg.name.assign("GEETSOGARGBDOBRDQQTJXTLJZAAYESUKPUOXYFVOZKJYGXQPISTBWZQVDDDANRNUNDUDCGKFRIOTCRPVFAXIHZMFVLLGCEGZUWFXHJXVKIMKVBURYVYLPEONDIMSDLIR");

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
    msg.setTimeStamp(0.988754212436);
    msg.setSource(16204U);
    msg.setSourceEntity(194U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(227U);
    msg.name.assign("TQSPRKXRTOGEKUKCVZGUCKDGQKMFLM");

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
    msg.setTimeStamp(0.0449515339799);
    msg.setSource(45635U);
    msg.setSourceEntity(63U);
    msg.setDestination(52894U);
    msg.setDestinationEntity(42U);
    msg.timeout = 2677332524U;

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
    msg.setTimeStamp(0.342479719442);
    msg.setSource(63091U);
    msg.setSourceEntity(232U);
    msg.setDestination(40052U);
    msg.setDestinationEntity(107U);
    msg.timeout = 267034166U;

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
    msg.setTimeStamp(0.695643001189);
    msg.setSource(43350U);
    msg.setSourceEntity(93U);
    msg.setDestination(15435U);
    msg.setDestinationEntity(188U);
    msg.timeout = 3483986312U;

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
    msg.setTimeStamp(0.475274951864);
    msg.setSource(60837U);
    msg.setSourceEntity(185U);
    msg.setDestination(25189U);
    msg.setDestinationEntity(138U);
    msg.sessid = 2664788055U;

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
    msg.setTimeStamp(0.48509042681);
    msg.setSource(3373U);
    msg.setSourceEntity(173U);
    msg.setDestination(58691U);
    msg.setDestinationEntity(115U);
    msg.sessid = 2130057320U;

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
    msg.setTimeStamp(0.103533851576);
    msg.setSource(14315U);
    msg.setSourceEntity(232U);
    msg.setDestination(21534U);
    msg.setDestinationEntity(229U);
    msg.sessid = 595822605U;

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
    msg.setTimeStamp(0.486671344123);
    msg.setSource(21560U);
    msg.setSourceEntity(50U);
    msg.setDestination(15309U);
    msg.setDestinationEntity(136U);
    msg.sessid = 683635564U;
    msg.messages.assign("NPNFUPWWJVHQZCDPAJXBCZKRTANAKSELGDRYCVTRDISHHTWZFFCRBRAHXIEGBENOLFDXEULUGKKRSPEHUAOTNJYIRZYOHLEAFMZKWQYRACUTOLVGXXMWYGRFXBFFTNPKIUHTPOHACYRZWPVZBJZMWSFJBGJTDIOPLNQSEWDALQVDTCQJYJCMWSXPBMBDSGQLHVNIYQXZTPOMIVLHMKQVI");

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
    msg.setTimeStamp(0.00361876931648);
    msg.setSource(34304U);
    msg.setSourceEntity(131U);
    msg.setDestination(64752U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1286000297U;
    msg.messages.assign("HAGFHJEXWDVITSKBSUCQOUPAMUDESQDXSJJRCEIVWTXYHGNDNFDYWGHZUJYCTYIAKKLGVALWEDYLDHRGMTOCCUCJKZSNMVSKFZJLPQPEOIWXYHXBGARLIFTIYEPJZBROYWHRUMPVSDMXURXZNWGZIEOIBTSVRKVGLTYJRUVIMMLOHSOFOSBYUFFAVEBNPPTKRFLKQZWXNFTHGRXOKBHMLBJZJUPQDWMBPKAZABCQWNIVOTQAFECEQQMNDAXCCQ");

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
    msg.setTimeStamp(0.38226618041);
    msg.setSource(48068U);
    msg.setSourceEntity(72U);
    msg.setDestination(57925U);
    msg.setDestinationEntity(77U);
    msg.sessid = 2151618652U;
    msg.messages.assign("IRNYHYSMJJLQOKBKQACATIWIKRYQDP");

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
    msg.setTimeStamp(0.260461748767);
    msg.setSource(3926U);
    msg.setSourceEntity(87U);
    msg.setDestination(27125U);
    msg.setDestinationEntity(155U);
    msg.sessid = 168806020U;

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
    msg.setTimeStamp(0.69824423014);
    msg.setSource(28695U);
    msg.setSourceEntity(28U);
    msg.setDestination(25268U);
    msg.setDestinationEntity(119U);
    msg.sessid = 2584504308U;

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
    msg.setTimeStamp(0.351001908496);
    msg.setSource(5618U);
    msg.setSourceEntity(61U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(209U);
    msg.sessid = 3857078429U;

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
    msg.setTimeStamp(0.0329226131229);
    msg.setSource(57693U);
    msg.setSourceEntity(153U);
    msg.setDestination(61164U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2629591594U;
    msg.status = 196U;

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
    msg.setTimeStamp(0.0933595600549);
    msg.setSource(40825U);
    msg.setSourceEntity(163U);
    msg.setDestination(1174U);
    msg.setDestinationEntity(138U);
    msg.sessid = 167035038U;
    msg.status = 105U;

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
    msg.setTimeStamp(0.0409104605838);
    msg.setSource(18206U);
    msg.setSourceEntity(83U);
    msg.setDestination(62981U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3401680340U;
    msg.status = 186U;

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
    msg.setTimeStamp(0.342144498065);
    msg.setSource(52511U);
    msg.setSourceEntity(46U);
    msg.setDestination(50689U);
    msg.setDestinationEntity(198U);
    msg.name.assign("SNWYAQYZBNMWOWELQCULKFLVUUAIJXZMQFESBZTBXHNEPYNYHTMMKLKGFSFPBX");

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
    msg.setTimeStamp(0.127791035211);
    msg.setSource(59126U);
    msg.setSourceEntity(222U);
    msg.setDestination(58676U);
    msg.setDestinationEntity(199U);
    msg.name.assign("XVJYDNAGELFHPDQHJTSKUBSZLJTODMRZMJERSBNPZDPNMTMPUITLECLYSPEOGLAPXE");

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
    msg.setTimeStamp(0.0642403713124);
    msg.setSource(35398U);
    msg.setSourceEntity(199U);
    msg.setDestination(8031U);
    msg.setDestinationEntity(168U);
    msg.name.assign("UYVIGUISQAHNQHRAPCROWREKPYYAVLAWJHMRKUDVUSHSPBOHWSVYJGIQVBDEKGJSFDTOGDGMCWLPORRIARGHAKVUQNFKIUYPNFREQZCISCGTPQERBNMYWQIOJZJFYEPWXLVUYLNCZBWEHMNDLXKBSZMDEJFXKFWDNXMCUZUDQGMCHRVPXIHTZNZLXMJCIXLYFZ");

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
    msg.setTimeStamp(0.127826012649);
    msg.setSource(34535U);
    msg.setSourceEntity(31U);
    msg.setDestination(46092U);
    msg.setDestinationEntity(189U);
    msg.name.assign("QSJSTSFYRNYIZKIFISMHMXSUEGOUCDACYTQGODAOXHWNHPFWUVMAFHCQOYMUMLQBEGGOPPRJZRBHMGKCJELWGXNDUXPNRIRELUFGVHFJQYKZVVMAITHWYAYBAFXTXURNHDOAMXSOVMUALKCGEPSNOZKKIRMRQFRJWTVBJSCZTVGLWOWYBNJLVNYAKDZZQPTJDBOBQBFUTLESLDVECNKCSUIWTZWWLFBGYQJEK");

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
    msg.setTimeStamp(0.533208909089);
    msg.setSource(53270U);
    msg.setSourceEntity(24U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(11U);
    msg.name.assign("IIFPVBDYGNESUIMIDWZJNLOTDXNIPBEEREMPGDSYGBEQ");

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
    msg.setTimeStamp(0.346643382683);
    msg.setSource(8919U);
    msg.setSourceEntity(111U);
    msg.setDestination(25488U);
    msg.setDestinationEntity(190U);
    msg.name.assign("XPPEYZLMHHIECPMIOMDZYGLJCBESLOAVXCFPMYNFPGONYJVAIFUFTZRUNEARBOUPDZGQNSXIYZIFUZBKDQDKJ");

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
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.559928579598);
    msg.setSource(54627U);
    msg.setSourceEntity(7U);
    msg.setDestination(47633U);
    msg.setDestinationEntity(139U);
    msg.action = 31U;
    msg.longain = 730540871U;
    msg.latgain = 776048387U;
    msg.bondthick = 2974267090U;
    msg.leadgain = 3313182027U;
    msg.deconflgain = 4174916790U;

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
    msg.setTimeStamp(0.47206665933);
    msg.setSource(25729U);
    msg.setSourceEntity(23U);
    msg.setDestination(62230U);
    msg.setDestinationEntity(121U);
    msg.action = 16U;
    msg.longain = 3790334112U;
    msg.latgain = 899915469U;
    msg.bondthick = 2074360681U;
    msg.leadgain = 2351649840U;
    msg.deconflgain = 834319552U;

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
    msg.setTimeStamp(0.146723353124);
    msg.setSource(57094U);
    msg.setSourceEntity(183U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(45U);
    msg.action = 151U;
    msg.longain = 4221633023U;
    msg.latgain = 1931981594U;
    msg.bondthick = 2262518374U;
    msg.leadgain = 2042648216U;
    msg.deconflgain = 2719186680U;

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

  return test.getReturnValue();
}
