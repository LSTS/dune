//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 3d6973200b83d092c28143ce3a35235d                            *
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
    msg.setTimeStamp(0.21148347964839476);
    msg.setSource(17244U);
    msg.setSourceEntity(176U);
    msg.setDestination(40711U);
    msg.setDestinationEntity(68U);
    msg.state = 208U;
    msg.flags = 243U;
    msg.description.assign("CRLQGTWIZUOBNHPAVUASXXHQEPWPDYRMDJEEGHRORXASNDQPLLCJXWTBAVQEISGQFVBPIWZYPNZECAJRCQKMLBOQINSNESBQDJPEOOFZGUMMARWEBUJKMCSIKZIRVTULCYABGPGUVTVULDTFEHZVWJVNGHMROOJKDXKHMFSTAQXBSTNZKEIOZIYFOFCKNDCQMOPPRUJYAXUJMVBVXNFTXKUFKYIWD");

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
    msg.setTimeStamp(0.8148623254975993);
    msg.setSource(41493U);
    msg.setSourceEntity(244U);
    msg.setDestination(40951U);
    msg.setDestinationEntity(70U);
    msg.state = 106U;
    msg.flags = 210U;
    msg.description.assign("IQUDAQXLHGBHFYVFSBHHKWTINORECEZBEZCDMAJUWYIIMNSHMPR");

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
    msg.setTimeStamp(0.08297615944557024);
    msg.setSource(25594U);
    msg.setSourceEntity(55U);
    msg.setDestination(33755U);
    msg.setDestinationEntity(199U);
    msg.state = 111U;
    msg.flags = 159U;
    msg.description.assign("HGVFQLVWGUAJYLOATJORIFDZNDXDRYOZHHWKGUGCZMDZTPDAUDBWSQNQYNOILYFEPGOOWLCGTUPUMHAXHXYZSRANNWOUWSIVPRQMZSKSLWPPGXBBHTJBITITQHZRJQTXFQSLWVXHHNBITKQAESVLCSOUFZUXCRBFKEZDKRYBOCYGXXAJBTGUSL");

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
    msg.setTimeStamp(0.7585238882059375);
    msg.setSource(8671U);
    msg.setSourceEntity(237U);
    msg.setDestination(55031U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.7902803687751351);
    msg.setSource(21413U);
    msg.setSourceEntity(163U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.146842712390292);
    msg.setSource(36182U);
    msg.setSourceEntity(104U);
    msg.setDestination(59096U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.6004669192385013);
    msg.setSource(35151U);
    msg.setSourceEntity(20U);
    msg.setDestination(4149U);
    msg.setDestinationEntity(161U);
    msg.id = 112U;
    msg.label.assign("GPMRAXTDFFYJBVNWOQAACUUUKMXLIIIMBFSEZSOIVUOTAMCVEAXAS");
    msg.component.assign("YNRNYQMALEDHWGGNCWJUDLBBTRWHGHFLUZHLXFOYVUIOQKBRGTRAQKXOZADJCEOBBGWYEFQDNNJMDPVZPYQWPMZTHWNTJEBNRSSVKBUQRZNKBMEFWCPXWFFZCJLOFILOCEUAVGKJLDHIMXYYLIPMITJROSGMHTUVPXSCDRAQVSOXPTITZDEANZCJMKHPPZOJNFASLGZCHXCSIVUQU");
    msg.act_time = 45737U;
    msg.deact_time = 56748U;

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
    msg.setTimeStamp(0.18880857581877886);
    msg.setSource(64682U);
    msg.setSourceEntity(180U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(107U);
    msg.id = 211U;
    msg.label.assign("VMRKFXNGJZVBZLMNBTNSVAMYFOPJXCPOPHKWOQCJSTDJXBPRNQSXHUYRYOLBDOLSZMYRMYXZICZJSTCOIQVIENUBIMBHUXJEKAHMPRQWGFPILHVBQDLMGFEGNZQZVDPVTCTXMZBGWZPZLDKHMGOLPURUYECAQNTKATAVHKBIYWGXEIALCRUVQFFJALJXLNJFGHKFUEIHQDYCFAWYAFURSEOEHUKTYREPGGDSSNEWIVWSJTWKQDDOTR");
    msg.component.assign("FPIVSQDYGJIWXRTIOJBQNXJKHVYOEWJEVETLWMPYPCMWTYLOEXSZMUGAZHPQZWKBXUGXRNGQPRITDHZHXAIBAUJBUBBQUSSALFLGNBCYFTGP");
    msg.act_time = 9729U;
    msg.deact_time = 47367U;

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
    msg.setTimeStamp(0.3636383746558447);
    msg.setSource(9835U);
    msg.setSourceEntity(51U);
    msg.setDestination(63880U);
    msg.setDestinationEntity(102U);
    msg.id = 186U;
    msg.label.assign("CHBGQVVZFOCNREXPZFTHTPFGJNAIMLSQDTUKMPBZLYLKHOXSYXWARKFVMXHKSUI");
    msg.component.assign("YDQFRYDOKAOLCTHSRQIZOZWQQHOAWJTAFRIGUNTTMQLHCWSQAJNKGRZTUVKIYWJZHJLLAKLCXVSRHEWSWIUPNGJJEFAAIMNMQDBUXRUQOWSVFLOIXGFVFYIKQCIXMMSPMYSPNNHNQHYUDJEPBBNMFXEYROISTHLBPGGOPLSVZPDBHIPBDBYMDUGXJEUFOELWFKKTGVMETBREEXZRVLCMKTUVZWVXFJKZPRZNPTAYASOBXHDNV");
    msg.act_time = 11415U;
    msg.deact_time = 41289U;

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
    msg.setTimeStamp(0.14567305338061587);
    msg.setSource(54657U);
    msg.setSourceEntity(58U);
    msg.setDestination(9251U);
    msg.setDestinationEntity(211U);
    msg.id = 165U;

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
    msg.setTimeStamp(0.4139698678171274);
    msg.setSource(27520U);
    msg.setSourceEntity(249U);
    msg.setDestination(56294U);
    msg.setDestinationEntity(69U);
    msg.id = 238U;

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
    msg.setTimeStamp(0.9902622425488856);
    msg.setSource(57623U);
    msg.setSourceEntity(42U);
    msg.setDestination(1593U);
    msg.setDestinationEntity(188U);
    msg.id = 229U;

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
    msg.setTimeStamp(0.7224144863072995);
    msg.setSource(7606U);
    msg.setSourceEntity(241U);
    msg.setDestination(59702U);
    msg.setDestinationEntity(236U);
    msg.op = 61U;
    msg.list.assign("LNBXHTPLVJSNDEHRYPJARVRXSBXVWHBCQULIVIYQIKAUWGGPKYEAWSYHDTGKCGIWFEMXASCMUZVPMJTDKZVZDLDFEHJALTUITQBNFATYLOQNFWZWHFHSXPKZIFOFCPHHWGUJHVEQXOXDG");

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
    msg.setTimeStamp(0.513327484156674);
    msg.setSource(30645U);
    msg.setSourceEntity(253U);
    msg.setDestination(6454U);
    msg.setDestinationEntity(28U);
    msg.op = 166U;
    msg.list.assign("PHWVPOVTMXGDVTJVRYSQXGXAQKQUSGGWJKDNCRZUI");

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
    msg.setTimeStamp(0.1421142256933552);
    msg.setSource(1699U);
    msg.setSourceEntity(21U);
    msg.setDestination(26308U);
    msg.setDestinationEntity(141U);
    msg.op = 8U;
    msg.list.assign("CJNHWWKPXILJTTHNGOEGCVBNQEXTLEIDKGISQRRAPVYXXNAPHYMUQBKZEJHLSTSQOHQBYPWDQYWDYE");

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
    msg.setTimeStamp(0.15155786403357185);
    msg.setSource(39500U);
    msg.setSourceEntity(120U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(26U);
    msg.value = 18U;

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
    msg.setTimeStamp(0.6563089613625483);
    msg.setSource(15903U);
    msg.setSourceEntity(206U);
    msg.setDestination(27300U);
    msg.setDestinationEntity(253U);
    msg.value = 170U;

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
    msg.setTimeStamp(0.1277468980979748);
    msg.setSource(6743U);
    msg.setSourceEntity(31U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(155U);
    msg.value = 232U;

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
    msg.setTimeStamp(0.4927602233450894);
    msg.setSource(60568U);
    msg.setSourceEntity(54U);
    msg.setDestination(12089U);
    msg.setDestinationEntity(210U);
    msg.consumer.assign("COMXMTFPVYZLVDLEBHGHJMBNTGRUSZNZYWCFATOOZHIDYWAFTKJKLHXOPKIBKSNUE");
    msg.message_id = 33684U;

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
    msg.setTimeStamp(0.23912920732809118);
    msg.setSource(62404U);
    msg.setSourceEntity(149U);
    msg.setDestination(39686U);
    msg.setDestinationEntity(96U);
    msg.consumer.assign("KCNJDXWRFCTRBCPYSJOIPNZBREAUDYJXXZDJMILXVNWMNEHVZVFKICVTUDVHAWGVLXJLUUEOGFDEKBLTZPGPBGUGEDTQKJRIDBYQM");
    msg.message_id = 38573U;

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
    msg.setTimeStamp(0.20497381803836545);
    msg.setSource(36907U);
    msg.setSourceEntity(201U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(44U);
    msg.consumer.assign("SKDXDHZYZKVCFPFENJFBYHLIHUIEWGOWXHCGDLAXTADTWRGJOZGXQDYNMXVSOQZSRXATZRLFQEIBLYJUINDUAMPZNLALOFEDD");
    msg.message_id = 29320U;

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
    msg.setTimeStamp(0.9143622703504691);
    msg.setSource(59259U);
    msg.setSourceEntity(127U);
    msg.setDestination(33963U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.7571799278484802);
    msg.setSource(36911U);
    msg.setSourceEntity(94U);
    msg.setDestination(27949U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.3103014503144318);
    msg.setSource(51250U);
    msg.setSourceEntity(194U);
    msg.setDestination(43885U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.5361757244989893);
    msg.setSource(28135U);
    msg.setSourceEntity(45U);
    msg.setDestination(46908U);
    msg.setDestinationEntity(113U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.4745671054723707);
    msg.setSource(61569U);
    msg.setSourceEntity(145U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(172U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.34188808861780984);
    msg.setSource(21718U);
    msg.setSourceEntity(65U);
    msg.setDestination(45734U);
    msg.setDestinationEntity(0U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.5279653642286055);
    msg.setSource(29251U);
    msg.setSourceEntity(5U);
    msg.setDestination(10737U);
    msg.setDestinationEntity(77U);
    msg.total_steps = 222U;
    msg.step_number = 48U;
    msg.step.assign("UDEOJDOQLJLIHHZKRVJMANBSMQXVEBWALAEGMBOYNTOSRWQJHDIUWJPWOMVXYLNUYJRUSGLZBFTBCGXHIXHRGGSTDAUXGPOXDRYRJFBYPTVNCSNYEIMWPBHFNDTCISZF");
    msg.flags = 53U;

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
    msg.setTimeStamp(0.9802175289585469);
    msg.setSource(18444U);
    msg.setSourceEntity(109U);
    msg.setDestination(56155U);
    msg.setDestinationEntity(172U);
    msg.total_steps = 181U;
    msg.step_number = 56U;
    msg.step.assign("OECBOXYMXHTVGESILHMRRUVGAZASXICMBTAQVRUGOCPKFCZYFKRCQOSKU");
    msg.flags = 253U;

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
    msg.setTimeStamp(0.07980542179045502);
    msg.setSource(54561U);
    msg.setSourceEntity(205U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(16U);
    msg.total_steps = 243U;
    msg.step_number = 158U;
    msg.step.assign("SLNODEJBBICVCKWQYTXDPLNPXBQCPXCBSRUPTZTNERPMURHRXVGAQJODNPVAPIZDAIHSLPYTKGHXMWRPYOIPJSWKHTBUSNCNYTZZDYGWUHDFKSTYAAWYMGGEIQXJMZCSZFSLJOKEJEFXWQBVEFWUEZUTKKMDAUGBVYUJJTUABXIAGFYLRSQDVXJRZZHWVSZKFL");
    msg.flags = 160U;

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
    msg.setTimeStamp(0.3805782415208625);
    msg.setSource(51361U);
    msg.setSourceEntity(41U);
    msg.setDestination(37503U);
    msg.setDestinationEntity(189U);
    msg.state = 3U;
    msg.error.assign("GVPBGEONBEHYZMHBQFJLRJEFDYDUGNBSIROSLKHYJFRMVOVUTJUOPHNGUOKXBLZREUCEMDKHQZYXXTQJWCPKQDPIIWWIVODBLFSZHWKLAUZAYPCHFJQASTRSVDRVIIMYZTYBDRXVMTMCTJPCSCFLSQBHPGXAFVQZJMOVZWYLNGUINACXAKIYRTRBFGAAIRTFQNQMMGMUZWAWGXTIXHSDCWCKNSPKS");

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
    msg.setTimeStamp(0.5140494868617198);
    msg.setSource(47713U);
    msg.setSourceEntity(137U);
    msg.setDestination(18615U);
    msg.setDestinationEntity(50U);
    msg.state = 26U;
    msg.error.assign("EBEWMZTSIKXFZFHLWOLFICTRVCKYYBBUGGQONNVXZNXAEBMVORXKGLAJYPUJQMVHDOAPSFRUKHDZMJZZQOSXRTSUNPQEZSPBRPWRUELRMVVGYHJXNTWVGODSKHFIXGCLNZKHLELCBVCOVDIDYYRUDWWSYLNUCCQBUNABMIGMPIXWNXQJDWVMETIDPFUUCJY");

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
    msg.setTimeStamp(0.8954141046776551);
    msg.setSource(43151U);
    msg.setSourceEntity(152U);
    msg.setDestination(24093U);
    msg.setDestinationEntity(32U);
    msg.state = 165U;
    msg.error.assign("YBHDJRAXZMKRVECZNVDVTBQWABYBIEPZQZLCJFAZHWAF");

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
    msg.setTimeStamp(0.8252606706881223);
    msg.setSource(11524U);
    msg.setSourceEntity(251U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.3210285251832432);
    msg.setSource(6647U);
    msg.setSourceEntity(205U);
    msg.setDestination(1424U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.05972048966309429);
    msg.setSource(45582U);
    msg.setSourceEntity(239U);
    msg.setDestination(52255U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.13860048696308047);
    msg.setSource(35146U);
    msg.setSourceEntity(62U);
    msg.setDestination(40250U);
    msg.setDestinationEntity(88U);
    msg.op = 171U;
    msg.speed_min = 0.42080873911545424;
    msg.speed_max = 0.8887868757227001;
    msg.long_accel = 0.3901863862078534;
    msg.alt_max_msl = 0.6658768063301107;
    msg.dive_fraction_max = 0.21219358641913366;
    msg.climb_fraction_max = 0.6510507956965478;
    msg.bank_max = 0.6040554838845908;
    msg.p_max = 0.24334168229051045;
    msg.pitch_min = 0.3691670005218154;
    msg.pitch_max = 0.4246861994457075;
    msg.q_max = 0.03639155220020551;
    msg.g_min = 0.1601621700908018;
    msg.g_max = 0.09122446901424996;
    msg.g_lat_max = 0.4224415913471288;
    msg.rpm_min = 0.41874540883071354;
    msg.rpm_max = 0.5358160068288038;
    msg.rpm_rate_max = 0.854593547609612;

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
    msg.setTimeStamp(0.3090292215891136);
    msg.setSource(33101U);
    msg.setSourceEntity(162U);
    msg.setDestination(9439U);
    msg.setDestinationEntity(185U);
    msg.op = 153U;
    msg.speed_min = 0.01348042101736835;
    msg.speed_max = 0.5943812577740822;
    msg.long_accel = 0.5066951822263971;
    msg.alt_max_msl = 0.03985994831278361;
    msg.dive_fraction_max = 0.6331339499721548;
    msg.climb_fraction_max = 0.9721749619696194;
    msg.bank_max = 0.6849148274898597;
    msg.p_max = 0.013761453180280991;
    msg.pitch_min = 0.9252923575101981;
    msg.pitch_max = 0.8132349110248933;
    msg.q_max = 0.49108204426614765;
    msg.g_min = 0.9567174572113718;
    msg.g_max = 0.21464186641686278;
    msg.g_lat_max = 0.20618174250364663;
    msg.rpm_min = 0.57096796515856;
    msg.rpm_max = 0.4442195429102139;
    msg.rpm_rate_max = 0.30992371596238066;

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
    msg.setTimeStamp(0.6536012945453354);
    msg.setSource(52725U);
    msg.setSourceEntity(239U);
    msg.setDestination(28476U);
    msg.setDestinationEntity(247U);
    msg.op = 210U;
    msg.speed_min = 0.07253129275505454;
    msg.speed_max = 0.2647844733228142;
    msg.long_accel = 0.489806596651718;
    msg.alt_max_msl = 0.8009281935169535;
    msg.dive_fraction_max = 0.3852381099986185;
    msg.climb_fraction_max = 0.2098488745389795;
    msg.bank_max = 0.9576495578937968;
    msg.p_max = 0.8024451360675349;
    msg.pitch_min = 0.28697102955691434;
    msg.pitch_max = 0.4908715105573517;
    msg.q_max = 0.3177925241924343;
    msg.g_min = 0.9188923794103084;
    msg.g_max = 0.7567157015381674;
    msg.g_lat_max = 0.5525190654919749;
    msg.rpm_min = 0.9554308596387017;
    msg.rpm_max = 0.8776745788071775;
    msg.rpm_rate_max = 0.9991992663432595;

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
    msg.setTimeStamp(0.348510956014065);
    msg.setSource(36982U);
    msg.setSourceEntity(68U);
    msg.setDestination(12969U);
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
    msg.setTimeStamp(0.6170452764547245);
    msg.setSource(30439U);
    msg.setSourceEntity(177U);
    msg.setDestination(60130U);
    msg.setDestinationEntity(170U);
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 228U;
    tmp_msg_0.value = 0.3132146431995536;
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
    msg.setTimeStamp(0.31627775679189774);
    msg.setSource(64834U);
    msg.setSourceEntity(33U);
    msg.setDestination(20790U);
    msg.setDestinationEntity(236U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.5556454893899615);
    msg.setSource(3694U);
    msg.setSourceEntity(127U);
    msg.setDestination(21086U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.164229392091908;
    msg.lon = 0.7215723360163869;
    msg.height = 0.14302240635130192;
    msg.x = 0.4261395894312582;
    msg.y = 0.014803004239912987;
    msg.z = 0.9331880641209269;
    msg.phi = 0.9815289109015183;
    msg.theta = 0.15253263056039157;
    msg.psi = 0.028083145411246346;
    msg.u = 0.5422536140589233;
    msg.v = 0.8801642370765947;
    msg.w = 0.5451527618900268;
    msg.p = 0.09747972950681971;
    msg.q = 0.6476126432621466;
    msg.r = 0.68438903257513;
    msg.svx = 0.9103132691418735;
    msg.svy = 0.11060296305509276;
    msg.svz = 0.9502685039630469;

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
    msg.setTimeStamp(0.9767588919746868);
    msg.setSource(10934U);
    msg.setSourceEntity(206U);
    msg.setDestination(31497U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.9875657476842779;
    msg.lon = 0.1532416882094969;
    msg.height = 0.5432124989131626;
    msg.x = 0.31990919156809583;
    msg.y = 0.09045970547376958;
    msg.z = 0.44893618230901133;
    msg.phi = 0.552884357086666;
    msg.theta = 0.8175273404582905;
    msg.psi = 0.008885552741263347;
    msg.u = 0.4776809594394118;
    msg.v = 0.9641806546746731;
    msg.w = 0.11626366217737505;
    msg.p = 0.6845506069828204;
    msg.q = 0.8383533252124791;
    msg.r = 0.4100819746329001;
    msg.svx = 0.947410632177135;
    msg.svy = 0.6008901740400808;
    msg.svz = 0.965172164176282;

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
    msg.setTimeStamp(0.03828937427353196);
    msg.setSource(19658U);
    msg.setSourceEntity(115U);
    msg.setDestination(60951U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.3545404874242668;
    msg.lon = 0.23844047534888235;
    msg.height = 0.15682384263256732;
    msg.x = 0.7289874573887772;
    msg.y = 0.7660366465740267;
    msg.z = 0.5148415245949732;
    msg.phi = 0.9885962931815521;
    msg.theta = 0.1819454992873225;
    msg.psi = 0.3926573191348728;
    msg.u = 0.5365151740655675;
    msg.v = 0.5334563486998904;
    msg.w = 0.23867378412226137;
    msg.p = 0.006589171368842961;
    msg.q = 0.7176196942406113;
    msg.r = 0.768007934995839;
    msg.svx = 0.3412142675781472;
    msg.svy = 0.36853036180701126;
    msg.svz = 0.11292010056446311;

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
    msg.setTimeStamp(0.6699554300612031);
    msg.setSource(63342U);
    msg.setSourceEntity(153U);
    msg.setDestination(40459U);
    msg.setDestinationEntity(174U);
    msg.op = 103U;
    msg.entities.assign("HFOKOFPMNIUDNPAZDZPBVYUACQJVBYUUPVKMXSHCYYTAGTHRQQMHOCZVBKVDLNWJARYIFCYJIBNORKSDXZTSRVCSPWIBXHBDDWGRSZHKYVIFCEVKSCBMJJZQGM");

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
    msg.setTimeStamp(0.9213605527951981);
    msg.setSource(7478U);
    msg.setSourceEntity(22U);
    msg.setDestination(13177U);
    msg.setDestinationEntity(48U);
    msg.op = 209U;
    msg.entities.assign("UDWMGYQLZGXYDLCFEJBPOMETYMDRDDADSMUTNEGMSKWIXPOJIQXQSUAZSKCZDTVTFELKHTASHVEHCYDAWORLIBMWZETUYBZDUMJHKBFXIICGLPKFCKRSRNGKVAQCZQZHSJUHXFSUHGPJTEJWVJQBPIVKRHPLPYOUBONBJIWN");

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
    msg.setTimeStamp(0.10295300081024283);
    msg.setSource(30618U);
    msg.setSourceEntity(135U);
    msg.setDestination(60245U);
    msg.setDestinationEntity(208U);
    msg.op = 86U;
    msg.entities.assign("YUWUQXPDMBARGCRSYGETPJDMNHPPHOFFSOVSSKIAUTAIGKAKLWYDGZYDMAEKJVBGKULTILCNEWVVAGOURZRSMEGDRVLRSJHLQQYVKXOMKEQWLJMCFFBTZQHUXBYOSAVRGKQLQXNVJNHYNJTRXCEWHTUHQNXCZASCLMMHPDPPNWUEJW");

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
    msg.setTimeStamp(0.027776775469779524);
    msg.setSource(800U);
    msg.setSourceEntity(236U);
    msg.setDestination(16779U);
    msg.setDestinationEntity(140U);
    msg.type = 208U;
    msg.speed = 33513U;
    const char tmp_msg_0[] = {33, 109, -98, -37, -71, 50, -77, -52, 89, 105, -31, 94, 9, -28, -88, -77, -120, -27, 41, -13, -52, 121, 52, 62, -1, 94, 94, 59, -104, -15, -74, 108, -18, -84, 36, -8, 125, -112, 62, -14, 40, -59, 82, 100, -3, -19, 52, 86, 12, 99, -2, -53, -19, -76, 32, -27, -128, -49, 14, -78, -127, 24, 102, -111, -89, 62, -23, -43, -120, 26, -121, 2, 35, 78, -87, -116, 110, -127, -21, -100, 29, 80, 90, 41, 81, 46, -115, 121, 29, -20, -12, 91, 106, 53, 118, -55, -97, 36, -124, -5, -82};
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
    msg.setTimeStamp(0.6452095132168224);
    msg.setSource(617U);
    msg.setSourceEntity(178U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(116U);
    msg.type = 208U;
    msg.speed = 53766U;
    const char tmp_msg_0[] = {-1, -58, -100, -58, 67, 66, 79, -23, -57, -124, -20, -127, 75, 34, 59, -88, 55, -2, 35, 109, 77, -83, 26, 120, -60, 41, -33, -17, -120, -72, -97, -51, -128, -79, 102, 76, 35, 86, 95, -108, 16, -113, -39, 53, -44, -116, 57, 102, 83, 117, 32, 41, 98, 28, 6, 10, 121, 31, 63, -49, 63, 40, 97, 89, 55, -25, -125, -80, -45, -87, 66, 116, 92, -126, -15, -49, 58, -47, -22, -92, 89, -90, 63, 57, -20, 106, 84, -75, -72, -122, -111, -60, 49, -4, 53, -32, 11, -41, -94, 69, -119, -83, -56, 58, -6, -58, 109, 80, -17, -75, -4, -111, 4, 54, -109, 119, -109, -40, -23, 78, -95, 47};
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
    msg.setTimeStamp(0.10454266023904868);
    msg.setSource(55867U);
    msg.setSourceEntity(66U);
    msg.setDestination(27593U);
    msg.setDestinationEntity(217U);
    msg.type = 38U;
    msg.speed = 13312U;
    const char tmp_msg_0[] = {-53, -48, 107, 97, -9, -19, 98, 88, 37, 8, 72, -106, 65, -45, 75, -17, 5, -101, -125, 51, 76, 114, -91, -82, -126, 28, -42, 90, 14, 74, -30, 111, 30, -62, 84, -98, 125, 30, 123, -42, 66, 88, -90, -84, 106, -89, 43, 62, -123, -65, -121, 115, 95, 44, -90, 57, -88, 68, 62, 114, 117, -91, 108, -66, 7, 106, -41, -37, 53, 67, -35, 103, -14, 33, 122, 108, -103, 89, 87, 46, -55, 81, 55, -96, 37, 61, -108, 97, 5, 32, -94, 116, -4, -83, -118, 20, 30, -3, 53, 95, -98, -73, -75, -105, -95, 117, 16, -15, 95, -74, -15, -67, -92, -85, 43, -7, 28, -67, 47, 59, 41, -35, 48, 66, 8, -89, -118, 111, 67, 31, -61, -70, 106, 62, -41, -43, 119, 40, -8, -106, -39, -86, -72, 108, 96, -44, -11, 13, 104, -33, -12, 32, -74, 92, -110, 118, -40, -28, 96, -29, -95, 57, 100, -22, -30, -59, -73, -103, 43, 22, 125, 65, -70, -98, 96, -106, 83, 95, -65, 124, -43, 74, 37, 76, 42, -93, 117, -61, -122, 28, -128, 103, -64, 70, -124, -39, 70, 69, -109, 79, -53, -100, 42, -128, -12, 64, -93, -72, -2, 13, 0, -45, 63, 14, -28, -38, -82, -28, -10, -58, -22, -73, 101, -4, 60, -43, 115, -123, 60, -111, -86, 99, 111, -88, 26, 76, 97, 37, 7, 113, 5, -59, 75};
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
    msg.setTimeStamp(0.4925476600221289);
    msg.setSource(30873U);
    msg.setSourceEntity(167U);
    msg.setDestination(40307U);
    msg.setDestinationEntity(160U);
    msg.op = 58U;
    msg.tas2acc_pgain = 0.1975785272335715;
    msg.bank2p_pgain = 0.6268094025027596;

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
    msg.setTimeStamp(0.9559793466555383);
    msg.setSource(10839U);
    msg.setSourceEntity(172U);
    msg.setDestination(21062U);
    msg.setDestinationEntity(197U);
    msg.op = 17U;
    msg.tas2acc_pgain = 0.8344096400394266;
    msg.bank2p_pgain = 0.8377315719478843;

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
    msg.setTimeStamp(0.6979824956197213);
    msg.setSource(26384U);
    msg.setSourceEntity(246U);
    msg.setDestination(20609U);
    msg.setDestinationEntity(248U);
    msg.op = 152U;
    msg.tas2acc_pgain = 0.966410004600631;
    msg.bank2p_pgain = 0.10406282697782243;

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
    msg.setTimeStamp(0.5211369484125822);
    msg.setSource(5699U);
    msg.setSourceEntity(85U);
    msg.setDestination(46863U);
    msg.setDestinationEntity(156U);
    msg.available = 668718581U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.04580974199679111);
    msg.setSource(64301U);
    msg.setSourceEntity(203U);
    msg.setDestination(7628U);
    msg.setDestinationEntity(24U);
    msg.available = 2853798608U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.6084545063896517);
    msg.setSource(46954U);
    msg.setSourceEntity(128U);
    msg.setDestination(34476U);
    msg.setDestinationEntity(136U);
    msg.available = 566969610U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.46986908062685995);
    msg.setSource(17784U);
    msg.setSourceEntity(155U);
    msg.setDestination(12697U);
    msg.setDestinationEntity(181U);
    msg.op = 245U;
    msg.snapshot.assign("OKETUHAUZOFMAHTNGCYAGERVRJHUXDTFCHDZZMLHVFXKRGTBOSRMKJSRVJXMJLVRXBSQAPHUZQRZJYQGCPZQBOJMTZP");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.5224370839212771;
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
    msg.setTimeStamp(0.057752184995964906);
    msg.setSource(38106U);
    msg.setSourceEntity(62U);
    msg.setDestination(39146U);
    msg.setDestinationEntity(34U);
    msg.op = 129U;
    msg.snapshot.assign("EECXOLIYSFVJSHJQXBMF");
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 238U;
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
    msg.setTimeStamp(0.08187668583024865);
    msg.setSource(61035U);
    msg.setSourceEntity(235U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(50U);
    msg.op = 85U;
    msg.snapshot.assign("PABXATAPUPUFBTMYLEKQBGKDDRPRVWBWJRDZOWIKCYJMJLVYCHMXCZVRADHIXTMKSENWNSGCIMSLNQNTFVGQEXCOQIQAEPLVDDHHQBXDLUOPZNLMGCLEUDFMHHJACTEZSSNORPJHKBKTQBDEVXIFKGASYQHWSCXZGFNUVIJLZKAOJGJJWWFLEXOILVJZYAUYYTMFGWGPPWERNSNQ");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.6892550476798006;
    tmp_msg_0.y = 0.7686941414718481;
    tmp_msg_0.z = 0.95860488257059;
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
    msg.setTimeStamp(0.723813093292425);
    msg.setSource(31805U);
    msg.setSourceEntity(82U);
    msg.setDestination(61352U);
    msg.setDestinationEntity(142U);
    msg.op = 233U;
    msg.name.assign("UJGUJHBDCPJRFXNSEKCYWGYYVTXVCIQWLLCXHJWNWNYVBOQFHVQXSUJDZEOWBAKWKBISDQXPOOGYCIEAYHZFQAFJMCEZHUKEREOQAJZDLEMLLZRQPHRMFDBWKTTLSAEGFZVIQP");

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
    msg.setTimeStamp(0.4533846207673935);
    msg.setSource(64805U);
    msg.setSourceEntity(158U);
    msg.setDestination(15185U);
    msg.setDestinationEntity(65U);
    msg.op = 197U;
    msg.name.assign("UEYJDEUWVRSAIYXVYAISIKIWAOIZWUQGLAFFVMCZZPGQLGAOGNLBZNLMVXFQRKYPXWLRHKNTVPXNETWPCRWLKHDESGVWEECYXNUMSQJILRYSRUFMNBPGEAJHMBBLTWKWCSFJKLDTTMA");

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
    msg.setTimeStamp(0.7372157313100751);
    msg.setSource(10992U);
    msg.setSourceEntity(185U);
    msg.setDestination(35834U);
    msg.setDestinationEntity(34U);
    msg.op = 188U;
    msg.name.assign("CMQFWWKLUSVXFAOKGNKLLNIZTLRRTDMCQJUWJYPYIKGQERRWPNOKVUZYDVDTBQFTLKBEAUMUGDVZYOHUKSMGAWIBEQHRCSDKFEQPHVXSKDMAVSCOIOIDPOQOXEOSNJIFNGFWXTAALXQIXDCAWAPNBPTYBPREHGCBZCILGZMQBDCWUFNSLMALMRTMMJVEVHEGHYHJNBFCYZSITPAWJJRCHYENTUSLJUVSNBOZGX");

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
    msg.setTimeStamp(0.6633352589170011);
    msg.setSource(5529U);
    msg.setSourceEntity(163U);
    msg.setDestination(14100U);
    msg.setDestinationEntity(128U);
    msg.type = 66U;
    msg.htime = 0.5935534616580054;
    msg.context.assign("BYIQVFHLEXUQKLYYWPKSGWWP");
    msg.text.assign("FSBURVTEWASOSXDJVXUWNLMDIAGFNGPYBBMKQJJCAPBHMIFNTIFYHYUJOIFOUZZJVCI");

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
    msg.setTimeStamp(0.4283983105856647);
    msg.setSource(51099U);
    msg.setSourceEntity(120U);
    msg.setDestination(15196U);
    msg.setDestinationEntity(211U);
    msg.type = 209U;
    msg.htime = 0.029826112239467184;
    msg.context.assign("EETRDGTWEIIGPOPVROXAVHQSMWTQYPUCDCPWNQXAJNLZIATXVZMYKNWBAVSJYJTTYMNAKWJBAQLVJXRLUS");
    msg.text.assign("MJXRWYVFFECOYUQLTMTKEDKRIQLHJHECTOQTYUQSWUMMQYEWUDQEZPPBHAVOSYBFSIEZRLSVGNNIVWVIDODDJSRAKTCUMAJBXXXQGUZLYZVKUWEKMRNNEGVHBGCZDLOHXQSAINBXAPCZRKJOKGQKINNLWEVFNGGXMCINDHAUALPPUATSKCFCWQJPVFWZOHTIXSICRFWRONYFBPMGDMZJPBPIYLLBYCBDROFKEHXWHAZGTFJZVSBLADJSHP");

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
    msg.setTimeStamp(0.9425617684408376);
    msg.setSource(51019U);
    msg.setSourceEntity(239U);
    msg.setDestination(22964U);
    msg.setDestinationEntity(126U);
    msg.type = 221U;
    msg.htime = 0.7940044312664032;
    msg.context.assign("RLRKSMMLTUSVGANHKGKCAVZLLFBYYEIYWBREWLFRAJSJVVJYKPGNNXKMLSPKTLXMJZXYZNXDWQHOIIIMQEILVHOWBZVNXODFWRSXDUDEUZFJVRTMTGWUCKTTYFYZCGZWCOSGVQEHSMPTCKSVULBPOKBOUZPKCPFRAXQWHUZJTCCBDXQPMYBGHAAFHEQFGXUDNIPJENQOXFQRCITHDTINVJZMWDYAPGELOEJUQDRIDOYAJAANCEP");
    msg.text.assign("ZVOIXGPSIEKHQCNXWVMZSVLCZMTQCJTFQYABFPCNMKTMIVCTNCDND");

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
    msg.setTimeStamp(0.1854835011899697);
    msg.setSource(51309U);
    msg.setSourceEntity(125U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(184U);
    msg.command = 248U;
    msg.htime = 0.38777838058040215;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 45U;
    tmp_msg_0.htime = 0.1210089481653529;
    tmp_msg_0.context.assign("AGZNALHPPMMWOXJOTIUHLZZCDIPMXPPIQEOFTNKRKMYVYQUDGBYXRXKODCMSXXFISCPUFCUQGWGYGSRHWRDIUHFANAKHIVVWFBEQWHJPMPIGLCFEMFOGDQHBETLJPUNVCVFTUANVBVMBDYZASL");
    tmp_msg_0.text.assign("OFCBEIFFYMNKRLGNGXRRBETYVGCHSYFTDXFQWNBYVKGAGXEGOIMUBRNHALJZLDXWOTHDWYWAUMZWWFCZQKVGKUTJOACHZUXMEVOAHEUEYXSUFOXSSNRPUYDDVODEMSJBJVRUPNIVYNQGZHLIMTLBZQISALLPCCWCNRUQBRJIIPSDXXFKEQZB");
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
    msg.setTimeStamp(0.7556603300702427);
    msg.setSource(45566U);
    msg.setSourceEntity(99U);
    msg.setDestination(38759U);
    msg.setDestinationEntity(85U);
    msg.command = 0U;
    msg.htime = 0.04233346986372011;

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
    msg.setTimeStamp(0.31208627146500234);
    msg.setSource(58214U);
    msg.setSourceEntity(106U);
    msg.setDestination(7289U);
    msg.setDestinationEntity(108U);
    msg.command = 216U;
    msg.htime = 0.3479564464378314;

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
    msg.setTimeStamp(0.5465786809841506);
    msg.setSource(63641U);
    msg.setSourceEntity(252U);
    msg.setDestination(57875U);
    msg.setDestinationEntity(54U);
    msg.op = 43U;
    msg.file.assign("KINIDESRSSSYAQZLGRVTDYEEEBPXJNHFZQHWPQSAZOQMFYALQXIPBUYJFCWELWKOYAOHKCVRGXJMUNXKKRKCJJYDZFYWMXQJEFMKHPYUTBRFBLLLVDXHTZUVOTLBIHVTSBTNHONCJFWYMQMPXEINCUGQEZASWJPTTCRBNOADZMGJAEDGLIIESBTRNGSUSTUOOCUKHZHDFQ");

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
    msg.setTimeStamp(0.33280334141632084);
    msg.setSource(36086U);
    msg.setSourceEntity(44U);
    msg.setDestination(37332U);
    msg.setDestinationEntity(242U);
    msg.op = 167U;
    msg.file.assign("ZNIOASTXHHNUZHBTAYCEZWWUUFLPUMGWONZMABDFPIBKIWGPSXXWAWNTCDFRKBOHNZKYCPNIQLVOLLKRGZRXYJMYBNTJQCEVDVIISXHAHPCIADWPWYVCUADKFJSBHKSZTSA");

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
    msg.setTimeStamp(0.304666077674261);
    msg.setSource(28215U);
    msg.setSourceEntity(11U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(229U);
    msg.op = 154U;
    msg.file.assign("BGGVYCNMPTOCIZWARJFFJGLHUDRXMHVEBIRTKQNXTIZMDYTRGIBYPBJQGQRKXRUPPUMELEUKJOYFKNQQUOAVYOVDTOWCCRWLDYCJOKUQCVHBYXSEGNQSJEKXSOUZFRBOJZFCHILDJTYAGSUELSTHAXKNPUHZDSWWWCMFZJRQMDIPXGAPLERZIFVIHVNAEOAFTMKSNDVCHVESBMEAWWZZJSVQMHXLDPYZIHF");

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
    msg.setTimeStamp(0.957774353515372);
    msg.setSource(1561U);
    msg.setSourceEntity(87U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(98U);
    msg.op = 186U;
    msg.clock = 0.2670182630860569;
    msg.tz = 56;

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
    msg.setTimeStamp(0.0024630371926334105);
    msg.setSource(57314U);
    msg.setSourceEntity(139U);
    msg.setDestination(57043U);
    msg.setDestinationEntity(204U);
    msg.op = 82U;
    msg.clock = 0.3773259288298413;
    msg.tz = -91;

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
    msg.setTimeStamp(0.9477248091184844);
    msg.setSource(30813U);
    msg.setSourceEntity(160U);
    msg.setDestination(56073U);
    msg.setDestinationEntity(118U);
    msg.op = 139U;
    msg.clock = 0.568688158876673;
    msg.tz = -113;

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
    msg.setTimeStamp(0.6337577795186619);
    msg.setSource(46839U);
    msg.setSourceEntity(57U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.41574673179072863);
    msg.setSource(45693U);
    msg.setSourceEntity(220U);
    msg.setDestination(40135U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.251440587538717);
    msg.setSource(39521U);
    msg.setSourceEntity(89U);
    msg.setDestination(23349U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.39757097476190584);
    msg.setSource(63705U);
    msg.setSourceEntity(105U);
    msg.setDestination(25085U);
    msg.setDestinationEntity(59U);
    msg.sys_name.assign("ABPMRUFWSLFWVWMTZGBOFIXOVQSJU");
    msg.sys_type = 155U;
    msg.owner = 8456U;
    msg.lat = 0.3764396645407009;
    msg.lon = 0.2734587199484757;
    msg.height = 0.7412417789655883;
    msg.services.assign("JSFRSLMVGPURXXAAYVAZIYWUZMWBCANLGWMUMWIRTYEIKPRLQUZSYGVWAHSQMVJBLSJXOHILOGDOQKUYRPNWDNDHIGOYOZBBEPFIBVQFG");

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
    msg.setTimeStamp(0.2881815312445912);
    msg.setSource(41953U);
    msg.setSourceEntity(212U);
    msg.setDestination(36888U);
    msg.setDestinationEntity(240U);
    msg.sys_name.assign("CCJHOTXDWLIFAIPYRAWSQCFYHVSDSRHKJYGEJVTNYJCSAGWMXQRYGZTKJKIEOVSCIPMSFQEUXXKBGIPLLWBLNPTHAUXLSOVXLVHYO");
    msg.sys_type = 39U;
    msg.owner = 60839U;
    msg.lat = 0.4137170180213975;
    msg.lon = 0.8974518935151184;
    msg.height = 0.3565643729296991;
    msg.services.assign("PQJKQITJYHCSFXKNXYFOCIHIPCMXNEGXSHLLOJHBEHAIMLPMHQZEYOWVFRKDRSAMTOWSAFFJBWUAVUGTUGZRQCTPNZDYOVUVDPXTSUMWKEYXGBBDCRVZQUBSYXGTCDAKMBBRZKNGXLFMEQXDBZPIAVDEUPJGCNELWVKVJTMFG");

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
    msg.setTimeStamp(0.40409038525269536);
    msg.setSource(5361U);
    msg.setSourceEntity(136U);
    msg.setDestination(8765U);
    msg.setDestinationEntity(198U);
    msg.sys_name.assign("PEEGUCTGEUZXGSFQVOIEKDKNZXUZCRXSIZLDSYLPTHTEBJBDXLTFIKJFDZMAGOEMNAOMPYUTPVRJXAYZRQBALIPQOBFRRO");
    msg.sys_type = 73U;
    msg.owner = 10882U;
    msg.lat = 0.28036193170099233;
    msg.lon = 0.5285573395497761;
    msg.height = 0.4122758762635209;
    msg.services.assign("LESUZRZWPMUVPXKHOAITAVXNFFCGSPRUKEQCWJEUMOIHEIIWNABDMPOUDTERBEOAACRVSQBKXTWRDNGCZXOSQCIQTQXGHMNFPXTULDJHYYKIZU");

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
    msg.setTimeStamp(0.579186697206558);
    msg.setSource(62114U);
    msg.setSourceEntity(71U);
    msg.setDestination(42153U);
    msg.setDestinationEntity(242U);
    msg.service.assign("QUZCOIDNCETBYAHATVIJMZWKJKWVGXHSZKOBDMIMPSVFGJDREXVKMPBXHNRBQUTHLCKPECZPLVWQOCVFZAONAOFSMQIB");
    msg.service_type = 233U;

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
    msg.setTimeStamp(0.8759380022440834);
    msg.setSource(14861U);
    msg.setSourceEntity(96U);
    msg.setDestination(12806U);
    msg.setDestinationEntity(46U);
    msg.service.assign("ZRUTCHXGOLFCVYEVFCHRNSJBYQXNWDPUBZPQLQAKXQFJNEEIULENQIWIDFHTOYMDONZXUNMRHUOSYLSIEWJRAKLMMXTDTQBSJMPGRADJGZFABEZZPVJMWASOXHLDUGHMQNPUPGUKSVTNCYWCRCLICTSOWXKEAJBYBFBAIVYMOIILWMHEFZVGJEOLXVKTPZJSRDPSMKABRTANYFKDDHUPPTCYWCYRKOUVQEDVFHGSRFXCZ");
    msg.service_type = 55U;

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
    msg.setTimeStamp(0.3387860045453299);
    msg.setSource(8102U);
    msg.setSourceEntity(76U);
    msg.setDestination(21148U);
    msg.setDestinationEntity(36U);
    msg.service.assign("IZJBHTXDECRQHVXVPKWSPRUMLWQGKCXHTNMMYYHCDIUGIQBZCJRLBOXILNIEERCBNLROYFNTBUPULYGHQUEHZPTFQWYBJRLZFTRANCPBFULDAXBONPFZVNYUJJDDKTASWTHRQDZAAXCKZGGHIEFNFMGKHMUZMFSIDFEEXGHOCJCGORALBGKSXIQKNQAAOGKWMETWNJQSWJYIZMEVDOUJJU");
    msg.service_type = 0U;

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
    msg.setTimeStamp(0.23140470096865118);
    msg.setSource(7275U);
    msg.setSourceEntity(106U);
    msg.setDestination(25017U);
    msg.setDestinationEntity(97U);
    msg.value = 0.06118081642949169;

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
    msg.setTimeStamp(0.8607410022099435);
    msg.setSource(15881U);
    msg.setSourceEntity(228U);
    msg.setDestination(64683U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5981695892147176;

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
    msg.setTimeStamp(0.7683672242695435);
    msg.setSource(871U);
    msg.setSourceEntity(228U);
    msg.setDestination(42598U);
    msg.setDestinationEntity(86U);
    msg.value = 0.34969304787671096;

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
    msg.setTimeStamp(0.6898576354123769);
    msg.setSource(20684U);
    msg.setSourceEntity(47U);
    msg.setDestination(24553U);
    msg.setDestinationEntity(205U);
    msg.value = 0.2630201663968511;

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
    msg.setTimeStamp(0.7362418831644132);
    msg.setSource(27704U);
    msg.setSourceEntity(197U);
    msg.setDestination(48492U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6913004345289178;

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
    msg.setTimeStamp(0.9039917425255787);
    msg.setSource(41709U);
    msg.setSourceEntity(220U);
    msg.setDestination(13832U);
    msg.setDestinationEntity(100U);
    msg.value = 0.33577130367896535;

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
    msg.setTimeStamp(0.951687192308031);
    msg.setSource(57897U);
    msg.setSourceEntity(244U);
    msg.setDestination(33845U);
    msg.setDestinationEntity(164U);
    msg.value = 0.2634081804199788;

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
    msg.setTimeStamp(0.9610681628793433);
    msg.setSource(8175U);
    msg.setSourceEntity(185U);
    msg.setDestination(3473U);
    msg.setDestinationEntity(36U);
    msg.value = 0.337726566423725;

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
    msg.setTimeStamp(0.5140456928992987);
    msg.setSource(16937U);
    msg.setSourceEntity(157U);
    msg.setDestination(56724U);
    msg.setDestinationEntity(56U);
    msg.value = 0.08678764624061996;

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
    msg.setTimeStamp(0.9558086432834129);
    msg.setSource(495U);
    msg.setSourceEntity(41U);
    msg.setDestination(45797U);
    msg.setDestinationEntity(50U);
    msg.number.assign("MZAPRNLDBVTWTRGWEBIAONFBIQMQLZGLYEGYPDLZKGXDIFWKRSFGTCPOCVMLUVBTZGUZBPIEDAQKGYLQJPTESPYJWVXVIRNZVNPGVEDHOLKUCQYFUKHMOFHECXJCQAALHXWFTWAONMNSOWUQUCJDDCBNFUWPKSMRXPMAWFSVIYQLOBUJZRAQDCHJRSGSFPDMDXAKRXEWETIZHNTIKZIYYXHKAMS");
    msg.timeout = 19317U;
    msg.contents.assign("HJPUGWIFIQEFCBDQUTLEPNBMNKWNIXYSTEPNYIIUDXYLCGEQKHYWXROQRAUNUPJFSXFZMDGEYBOHCVGKSVCFZUKRHXMCFWQLXMIKDKHQGZJPMPRSSVOUASYRSTVOOJPMVSVNZ");

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
    msg.setTimeStamp(0.7809146022682818);
    msg.setSource(47242U);
    msg.setSourceEntity(232U);
    msg.setDestination(2599U);
    msg.setDestinationEntity(39U);
    msg.number.assign("DJMWQRKJRXDZERVRNFQVEJKITMAOEUKZAGFHUBZWXXGZLYMZLDNOCDVGUYBACWULFIXIHMSYFFV");
    msg.timeout = 61695U;
    msg.contents.assign("YPFEFRNUYAJPSJSITTESGTVTYPFMQUPZAJJNFZBIOCCLUFIGXQDZFMNRKZBWNWQVCDQIVDMOYOKJDQUSSNFQYWHVSGDRBTLESHXJZRCLONVEOAEGLLEVBQNHSRAWXVOAJIMUCKLINHBYTHKOWNACURHDYQSRKDICJRUG");

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
    msg.setTimeStamp(0.9640865574577834);
    msg.setSource(43616U);
    msg.setSourceEntity(145U);
    msg.setDestination(60735U);
    msg.setDestinationEntity(131U);
    msg.number.assign("CJVUTQKRKKKANIAZTNWPDMVACOGHGZMQQFJBNHPLURGYNEIATSEIBFXHERKREMFFQICWYTZOUDOQHMRZSFOXAFSYSRUPYFTZAKGCXZWVWHETQOCXMVNIXLYKHOIEPJLCFHGNMLDJMUTIGSDWEYYUDQBJXJJIV");
    msg.timeout = 54074U;
    msg.contents.assign("RLKGRTENLXGRKNVMSUCBCKARKPLIXTDZTBSZUAMHPLFHWDQKQVOPGLUPXJECYRXFQ");

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
    msg.setTimeStamp(0.5015744542602497);
    msg.setSource(60375U);
    msg.setSourceEntity(233U);
    msg.setDestination(23684U);
    msg.setDestinationEntity(42U);
    msg.seq = 2812923255U;
    msg.destination.assign("MJLQFXZQTGVNNLSYPDKZEWBNDKRBBZLNXNRHCJGDBMLUMIIWSFMCFGJTIPGYJXDJQXXSLHMLBOAPMJTQAKZTXPDMENUUXISOCUZWXZISOEHHKRMVTQTELKMCAYSHYEOBEUNWKPGRKQNWZNCPUKVXSTRD");
    msg.timeout = 36570U;
    const char tmp_msg_0[] = {-96, 81, 96, -92, 97, -61, -24, 76, -29, -117, 122, -4, 37, -125, -126, 36, 48, 38, -124, 11, 33, 23, -112, 0, 25, 80, 100, -13, -116, 57, 76, 76, 7, 11, -38, 60, 59, 54, 119, 82, -39, -7, -105, 89, -66, 84, -21, 117, -42, -101, -99, 64, 74, -31, 76, 119, 75, -16, -95, 33, 50, -108, -45, -68, -23, -66, 119, 84, -95, -37, 41, 50, -67, -63, -65, 18, -100, -45, -84, 5, 36, 31, -40, -105, 68, 87, 105, -86, 59, 11, -63, 33, 21, -64, -1, -33, -32, -16, -14, 68, 126, -55, -99, 67, -20, 88, -68, -110, 22, -29, -128, 76, -46, 42, -117, 85, 92, -69, 62, 18, -63, 96, -80, -24, 86, -89, -98, -33, -47, 90, -126, 60, 125, 94, -55, 72, 1, 44, 26, 89, -89, -110, 123, 114, -76, -79, 6, 76, -120, -70, -24, -10, 24, -78, 33, -94, 29, -97, -25, -99, -33, 17, -40, 78, 63, -114, -25, 15, -48, -73, -59, -63, -84, -11, -119, 14, 68, -75, -91, -86, 116, -92, 115, -7, 85, -32, -89, 69, -64, -41, -17, 66};
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
    msg.setTimeStamp(0.6730818805867396);
    msg.setSource(60725U);
    msg.setSourceEntity(158U);
    msg.setDestination(52116U);
    msg.setDestinationEntity(238U);
    msg.seq = 3861574954U;
    msg.destination.assign("JGPDZGLEHPHQXDJQQNEZRUWIYJPRWISCYAPLDJYOLOBBXGAZDSNBKWQUOEPYLFNCGPZGSPIGUFABNDLVYMBQTPWFSOJVYBRISHENMPDEMKGFIVKUBIZGWSLTMREMIYHXHDZVXWEKSHMRATJDGYYWAXFCCVVNNRNZXVLVIXATOLXJXCUDCATMCRADLYKZUELQEHQMKNS");
    msg.timeout = 35211U;
    const char tmp_msg_0[] = {-73, -94, -123, 77, -2, 79, -107, -69, 43, 25, 107, -115, -124, -114, 113, 96, -111, -55, -99, -96, 67, -25, -124, -25, -116, 64, 30, 75, -82, -58, -112, -91, -30, -104, -82, -22, -38, 13, -17, 19, 87, 59, -118, -9, 5, 65, 42, 28, 72, 103, -3, 43, -96, -100, -37, 39, -99, -65, 17, -85, 31, -28, 77, -92, -121, 58, 16, 96, 19, -50, -89, 1, -63, 103, 9, 19, 70, -76, 104, 45, 42, 65, 22, -107, -57, 49, -123, 63, 41, 28, -64, 9, 55, -17, 105, -61, -6, -13, 13, -54, -89, 85, -24, 43, -111, 5, -124, -68, 101, 97, -112, -1, 55, -4, 121, 12, -13, -58, -25, 65, -1, -100, 62, -8, -51, 23, -1, 89, -43, 113, -26, 71, -38, 54, -110, -111, -71, -90, -113, -91, -54, 100, -61, 10, -35, 87, -35, -77, -23, 22, -122, 37, -79, 51, 18, 85, 112, -120, -60, -76, 63, 43, 89, -76, 87, 60, 92, -26, -73, 55, -113, 100, 119, -119, 22, -12, 86, 2, 37, -15, 121, 92, -94, 37, 96, 63, 101, 108, 77, -7, 3, 75, 37, 49, -28, -126, 5, -2, 42, 123, -2, -18, -53, 55, -117, -122, -13, -53, 19, 37, 17, -122, -88, 76, -4, -122, 30, 108, 35, -19, 88, 0, 49, 48, 59, -91, -67, -1, 70, -120, 7, -73, -35, 118, 78, -53, 123, 94, -10, -61, -48, -19, -23, -93, -75, 126, 99, 69, 89, -56};
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
    msg.setTimeStamp(0.7553630637579769);
    msg.setSource(4669U);
    msg.setSourceEntity(209U);
    msg.setDestination(61677U);
    msg.setDestinationEntity(162U);
    msg.seq = 3617475926U;
    msg.destination.assign("ZUFXAAHUJNESVEJDJWQRURFNP");
    msg.timeout = 31913U;
    const char tmp_msg_0[] = {-104, -48, -7, 66, -73, 57, -105, -88, 8, 48, 63, 106, 10, -60, 25, -100, -38, 120, 59, 86, -27, 118, 51, -107, -15, 50, 57, -52, -113, 76, 125, -127, -108, -56, 56, -48, -118, -97, -5, 31, 63, -33, 107, -111, -108, -78, -10, -23, -107, -17, 27, -2, 123, 71, 70};
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
    msg.setTimeStamp(0.3465089717193164);
    msg.setSource(37259U);
    msg.setSourceEntity(184U);
    msg.setDestination(58118U);
    msg.setDestinationEntity(147U);
    msg.source.assign("LCDVJGJGEAKVMZOBWWGHDSJVFXPNIBQZUQHWQZWXGTLBKVLRZIRCSOKVGPKNUECFUPHIWBAQRFOXFMIQNOUHPHAQKBMYRTMMCQQTOHBCXVGHTLAANCVQCGWCJZWMEMPVODXSYWRPBTILSLOHNIFEQUBKRIJKRJKEGDKZSXJXPOSDFLYGAGS");
    const char tmp_msg_0[] = {-8, -60, 80, -42, -67, -122, -33, -100, -122, 77, -119, -99, 112, 29, -13, -50, 35, -128, 101, 21, -34, 117, 68, -125, -69, -121, 113, -56, -26, 92, -20, -21, -77, -73, -30, -120, 107, 88, -3, -125, -58, -114, -16, 122, -81, 100, 109, 38, -79, -81, 115, 40, 35, 61, -15, -123, 22, -101, -94, -21, -52, 57, -46, 79, -123, 86, -86, -111, 71, 59, 33, -95, 58, -106, -124, 52, -64, -41, 38, -39, -35, -116, -6, -30, -1, 12, -50, 59, 41, -118, 80, -55, -125, 99, -8, -107, 86, -103, -122, -101, -34, -112, -18, -108, 0, 104, -45, -65, -109, -4, 85, 49, 65, -4, -127, -107, -45, 112, -54, 94, -29, 3, 15, 56, -50, -28, -38, -103, -48, -55, -36, 90, 93, 8, -90, -8, 20, 23, -55, 16, 115, 76, -21, -2, -52, -64, 108, -30, -6, -98, -108, 16, 1, 117, -39, 109, -63, -68, -97, -52, 99, -12};
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
    msg.setTimeStamp(0.8681940459453462);
    msg.setSource(28924U);
    msg.setSourceEntity(88U);
    msg.setDestination(51050U);
    msg.setDestinationEntity(251U);
    msg.source.assign("HIREGIDALPPVGJAZJSHHGTOSRZMPXYBIAHSJMMPMSLPCBGOGZRPQLRRKBOQKFCAZVUQUKIVTDYNRYKWNWXVJBVZSSWKXNMUVCZCOXWAKTWFHSVUYBBWYRCKMLSEDYABUERLBOLAXKQEFYBONNDACKSZ");
    const char tmp_msg_0[] = {-73, 32, -128, -47, -113, -110, 9, 13, -31, -119, -38, -107, 39, 100, -128, -117, 52, 77, 83, 57, 81, -62, 1, -84, -30, 20, 72, -66, 4, 28, -56, -14, 41, 114, 67, -94, 92, -28, -14, 103, 64, -79, 42, 90, 123, 10, -99, -84, -106, 96, -33, 116, 15, 105, -21, 53, -34, -108, 62, 111, -52, -30, -68, 111, -21, -9, -67, 21, 60, -43, -104, 104, -42, -13, 95, -35, -39, -119, -98, -128, -71, 84, 7, 60, -40, 33, 65, -116, -124, -15, 121, 56, 14, -51, -106, -29, -107, 75, 0, 48, -123, -33, 17, -22, 105, -63, 126};
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
    msg.setTimeStamp(0.628837908851178);
    msg.setSource(28028U);
    msg.setSourceEntity(111U);
    msg.setDestination(57151U);
    msg.setDestinationEntity(183U);
    msg.source.assign("NCVRNSLBRDTTTDWEVUBQEU");
    const char tmp_msg_0[] = {-108, -42, -115, -36, 38, -17, -54, -32, 64, 97, -69, -124, -26, 5, 101, 81, 50, 38, -53, -99, 49, -118, -105, 79, 100, 51, -114, 98, 98, 91, -37, -107, 29, -43, 52, -122, 115, 62, 87, 65, 58, -16, 85, 108, -12, -46, 89, -112, 18, -120, -10, -10, 120, -42, 32, 89, -56, -66, 51, 8, 46, -77, -109, -123, -96, -126, 44, -92, -60, 41, -95, 13, -50, -101, 119, 4, -92, -87, 86, -75, -107, -31, 115, -48, 2, 74, 67, 37, -101, 107, -30, -112, -13, -93, 123, -7, 43, -115, 117, -82, -17, 70, -104, 23, -116, -2, 82, -95, 14, -108, -14, -62, 26, -34, -2, 40, 105, -46, -30, 62, -89, -82, 37, 91, 57, -11, 44, -59, -56, -11, 15, -10, -45, -41, -22, 75, -74, 27, -97, -53, -83, -27, -64, -46, -15, -31, -119, -6, -71, -17, 35, 95, -62, -19, -13, -126, -10, -25, 67, 84};
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
    msg.setTimeStamp(0.40101782048032686);
    msg.setSource(37133U);
    msg.setSourceEntity(219U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(147U);
    msg.seq = 3180469125U;
    msg.state = 156U;
    msg.error.assign("EOWPBSXYCKNECOCSTVHNOMOUJZABMDXIXHGMKPREEKGTLJTZCEZJYHLKGPLWJHMVDRNCSHGOFQVQYJZPXZKUEKDBGHXVFBDZLRPZSLSUXWSDMQCBHBOIAURSOSQXVMIUUXAFUJJSVPAIRARJEYCLNLEQQUWQVKOZBBHPFUTAFDJRDFQCSGYGVWFIUBNIRTN");

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
    msg.setTimeStamp(0.5492839250513002);
    msg.setSource(63221U);
    msg.setSourceEntity(26U);
    msg.setDestination(56045U);
    msg.setDestinationEntity(124U);
    msg.seq = 416136826U;
    msg.state = 39U;
    msg.error.assign("YNSIHGDVXKYGTQUJWSHOLYPRFJQXFDNZSFOOPDLEYXEMWRRBGXTMPUFRECIFPQDKXMNWWSYTFTHSUHXSTTBAKOSDZWKCGKAMDXOIWHYMTVMKKGZGOMHGNKDVXJZQBLF");

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
    msg.setTimeStamp(0.6699749891163119);
    msg.setSource(23885U);
    msg.setSourceEntity(210U);
    msg.setDestination(36283U);
    msg.setDestinationEntity(157U);
    msg.seq = 2748604771U;
    msg.state = 191U;
    msg.error.assign("SQFOGBKJPUDCPIEUDFZTUUGVOHDDILUGVYLBYLGTORMFUTVYJDBLVREMRPQZLAEWAXHKGNMSOMYEAJUSAXGRNTWFMSNYXFDHBNPENTXJQZCNLEHWBIWLFCYOOEFSTDUMRBLINEPHPKHFFINNGTJYXKAHUPARPGVYXESVIDHOHJMZKMZUYVJKHGJXPOSZCKQOAISACVDA");

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
    msg.setTimeStamp(0.9917056959254449);
    msg.setSource(62764U);
    msg.setSourceEntity(63U);
    msg.setDestination(49900U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("IPWCQDPHASVLYUJHPDZPSCZAKSGXGTRQTPVBZQJXUXSIMCTONWYOBMEGRDDRRIAGPLSDKUFOOJMEAEJVPCKZGVKMYYPBRCTZLJNLZNYWTOLUMNB");
    msg.text.assign("EQMUKYEMOZDWGFZRPEJAVRABKHJALNEPGXNSILNIRIBNRYQPYJTERLCRVGFYPUMKFDMDHCEQURGFWJFMFTNQBSXBYSJSLKAEJOOVIHQOPROCDHDPVGDLVCZSSIRYDCKGTKXQ");

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
    msg.setTimeStamp(0.7825264662996966);
    msg.setSource(64018U);
    msg.setSourceEntity(135U);
    msg.setDestination(3927U);
    msg.setDestinationEntity(57U);
    msg.origin.assign("LBNLICFNQFXOKUVAZKQAGIQCO");
    msg.text.assign("EONZDIACDCRKDOCWCARJFQOLVMLDMEIKUWYXRNKHETGEUWBRJYQHZZVVIDPVBZRAXDTVCCTKSNFSGSMCPO");

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
    msg.setTimeStamp(0.8391176442669552);
    msg.setSource(29302U);
    msg.setSourceEntity(41U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("NPVLLGRQLKFBNVSNNQMVOUQUZIQGCCXTNYTLESIKYFYCZFB");
    msg.text.assign("RSVJJEWTLEKGTLAHQTBKUQEFOBHDIZKHYNVCGPATBQUWIZDDNWMVCHABVXGFBFQRFESZIQXAWRIHHTYAVSPJCQGXLUHLMBKCFAXGTTIRURHJFZNAROKVEZWSUYWMMBVZAVBDLYDOEIALNPDCKGBJPNMHRKWPPKGVQ");

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
    msg.setTimeStamp(0.28061380526623625);
    msg.setSource(44641U);
    msg.setSourceEntity(32U);
    msg.setDestination(8608U);
    msg.setDestinationEntity(220U);
    msg.origin.assign("XEISNZUWDRWDBXOOUUXNILEDIOXQYWHWBJBTTRHMODAPMONVJDFVFUNZCAXDTJHLSTYKNGQOTDWNDLBIKGMAEQKGGGVBNLCJWCFOKZHQZRJYUUQGJFFTLGAPVRJYFSYRPQDMZIAFEJPHETCZBCXMITHKSWLVCHAIASFOAMOUBLRUPFLMPTTXVYBSKSEZMACWEZJGVRBRLFRXWU");
    msg.htime = 0.776852601289884;
    msg.lat = 0.7680167840234907;
    msg.lon = 0.9289931833445711;
    const char tmp_msg_0[] = {-36, 34, -40, -46, -35, 59, -17, -19, -100, 23, -91, 83, -36, -9, -1, 93, -39, -82, 2, -48, -11, 70, -75, 103, -128, -72, 47, -18, 58, -99, -63, -126, -61, 117, 54, 43, 40, -57, 1, 67, 33, -58, -80, 3, 44, -13, 28, 31, 90, -9, -47, 85, -63, -1, 96, -2, -86, -113, -96, 92, -85, 98, 22, 68, 98, -102, 48, -32, 91, -61, 108, 14, -24, 74, -80, -18, 108, -51, 76, -30, 47, -71, 61, -96, 34, -6, 40, 114, 81, 41, -24, -108, -116, 28, -109, -44, 32, -4, -65, -85, 121, 2, 93, -3, 118, 15, 50, 43, 60, 103, -98, -98, -89, 0, 23, -65, -91, -92, -71, -58, 92, 76, -65, -20, 70, -124, 100, 91, -104, -78, -33, 113, -32, 38, -3, 112, 36, 23, -75, 49, -92, 58, -40, 3, 44, 41, 122, -101, 61, 1, 43, -27, -7, -11, 17, 109, -43, -73, -93, -72, -34, -12, 51, -41, -125, 112};
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
    msg.setTimeStamp(0.9310817957806107);
    msg.setSource(21074U);
    msg.setSourceEntity(203U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(116U);
    msg.origin.assign("KPAIZDNPEYCWQJKYJWGUUEZDSWARFPDUCREHBGSEOAUKKTHRXNZXPGOVQTJEPZQQNBVMFSRZHOTUWFDQFWEPSPBLHZSSLRCJSVNXFLTTXFDTYLIEYMWMMRKIGDMMIJIWXLEUJTGVDHAQYHAVLJCO");
    msg.htime = 0.672695276018551;
    msg.lat = 0.08905831054739721;
    msg.lon = 0.05332182775945293;
    const char tmp_msg_0[] = {-11, 98, 12, 10, 1, 53, -127, -121, 38, 50, 82, -73, 108, 0, 51, -117, -4, 111, 50, -87, 19, 97, 33, 61, -115, -91, 66, -85, -47, 69, 94, -10, 35, 39, -81, 70, 60, -40, -108, 78, -30, 93, -67, -4, -3, -31, 34, -71, 3, 91, -91, -84, 56, -28, -63, 48, 113, -10, 94, -98, -43, 114, -35, -27, -5, -29, 87, -92, -44, 19, -62, 3, 13, -38, 72, 45, -9, -69, 60, -86, -121, -31, -6, 16, 65, -124, -94, -117, 80, 22, -39, -72, -124, 7, 86, -66, 99, -20, 95, 0, 61, 112, 41, -26, 101, -43, 18, 124, -53, -65, 75, 97, -16, -73, 45, -88, -114, 27, -76, -54, 46, -106, 67, -43, -51, 2, -21, 20, -125, -41, -48, 68, -77, -55, -103, 114, 42, -88, 82, 4, -93, 9, -54, -123, 22, 23, 51, 68, 116, -118, -93, -41, 96, 39, 84, 84, -97, 32, -47, 49, -91, 76, -90, -12, 55, -70, 60, -72, 58, 84, -53, 10, 88, 70, -102, -8, -1, -7, -75, 30, 85, -37, 114, -127, -38, -38, -62, 112, 50, -46, 22, -98, -77, -103, 65, 18, -5, -107, -82, -98, 11, 106, 24, -57, -37, 38, 85, 14, 101, 124, 89, 10, -14, -25, -80, 22, 14, 14, -33, -38, 37, -21};
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
    msg.setTimeStamp(0.5414063985805344);
    msg.setSource(10853U);
    msg.setSourceEntity(161U);
    msg.setDestination(31878U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("GYNBJHQVYFZLOBXYJSMQLCHQTLUMXMADGSO");
    msg.htime = 0.7195204735428895;
    msg.lat = 0.2498424928161651;
    msg.lon = 0.5694701552088779;
    const char tmp_msg_0[] = {111, 118, 21, 103, -117, 47, -48, -71, -56, -6, -75, -32, -31, 51, 91, -31, -50, 93, 3, -59, 7, 109, -45, 92, 90, -53, -113, 73, 2, -48, -51, -98, -77, 88, -104, -6, 28, -92, -22, -81, 93, -40, -91, 96, -45, -32, 25, 67, 57, -54, 116, -116, 108, 27, 90, -76, 112, 0, -44, -26, 54, -111, 85, -48, 58, 84, -19, 85, 72, 99, -62, 32, 110, -46, -30, -94, 62, -24, -107, 73, 96, -115, 113, 73, 110, -44, -38, 84, 35, 110, -73, 66, -49, -98, -44, 110, 86, -17, -42, 59, 91, -15, 100, 37, 21, 64, -24, 98, -51, -20, 119, -21, -1, -17, -89, -6, 71, 53, -29, 109, -67, 33, -112, -109, 67, 126, -116, -72, -50, -41, -94, 124, -19, -58, 80, -118, 9, -55, -83, 14, 60, -114, -69, -104, -28, -27, 85, -49, 58, 22, -41, -73, 50, -128, 33, 107, -113, 83, -48, 0, 47, -5, 24, -65, -38, -31, -99, -70, 117, -65, 7, 122, -79, -68};
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
    msg.setTimeStamp(0.9649812656795537);
    msg.setSource(54923U);
    msg.setSourceEntity(125U);
    msg.setDestination(3347U);
    msg.setDestinationEntity(48U);
    msg.req_id = 48187U;
    msg.ttl = 17414U;
    msg.destination.assign("EZGYJBIEBGBCCULSSNLVIFSOZIRJYERXUIHQZGHWMDZEHPYFACYFPCLBNOJAVMLWG");
    const char tmp_msg_0[] = {-77, 78, 94, -73, -42, -34, 27, -120, 32, 59, 50, -124, 80, -106, -88, -36, -29, 9, 72, -109, -28, -46, -71, 45, -52, -35, 98, 25, -40, -57, -74, -24, 40, -45, 5, -111, -39, -75, 65, -39, -15, 9, -83, -103, -85, -69, -123, -85, 83, -95, 46, -7, 68, 63, 63, -18, 125, 33, -60, 49, 51, 12, -24, -38, 52, 81, 46, 95, -61, 36, 63, 43, 28, -66, 3, 41, -102, -2, -47, -102, 70, 45, -104, -12, -12, -45, -123, 33, 62, -75, 8, 107, -52, -39, -104, -80, -3, 9, 24, -94, -78, -118, 31, 105, -81, -12, 2, 111, 48, -43, -28, 82, -92, -113, 67, -28, -1, -42, 98, 9, -114, -101, -98, 46, -56, 38, 118, -127, -115, 54, -116, -55, 104, 56, -12, -117, 57, -76, -19, 15, 58, 15, -114, 112, 11, -123, -34, 2, 66, -55, -88, 59, -97, -33, 92, 63, -7, -128, -82, 110, 87, 13, 110, -89, 95, 17, -91, 123, -102, 75, -29, 29, 34, -66, -113, 119, -55, 26, -75, 57, 35, -59, -102, -33, 113, 116, -25, -59, -90, -114, -93, -82, -68, 95, -82, 108, 105, -18, -114, -60, -100, 48, 72, 16, -98, -27, 5, -41, 60, -8, -115, -61, 39, 90, -27, 110, 23, -108, -39, -85, 121, 92, -110, -74, 126, -111, -78, 112, -102, -103, -73, 99};
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
    msg.setTimeStamp(0.9134905633601572);
    msg.setSource(29671U);
    msg.setSourceEntity(151U);
    msg.setDestination(40720U);
    msg.setDestinationEntity(222U);
    msg.req_id = 59748U;
    msg.ttl = 60794U;
    msg.destination.assign("YIRROSTZLKVYPXJPUEAUCBVJDMVAYNXHZCOSWINQGUBOMEPSMTWTASCFHEHNTTLOIMEJEVPEOSAGVZVBFQLIRFFLJSORIDHBFFRWKYKHDQXDGKEZXHZYNUPVPOMQUMKGQWEBXTBNKXFQQSRMMYCHNQGDZOAT");
    const char tmp_msg_0[] = {51, -43, -34, -111, -29, -52, -69, -43, 72, -85, -26, -23, 120, 80, 18, 47, -16, -94, 15, 9, -49, 98, 20, -92, 108, -110, 5, 25, 40, 21, -79, -60, 118, 76, -28, 106, -88, 90, -119, 18, 24, 29, 90, 11, 41, 18, -11, -115, -9, 109, 20, -12, -124, 119, 26, -111, -106, -12, -60, -104, -128, 12, 11, -119, 74, -74, -59, 27, -6, 93, -59, -46, -90, -59, 10, -118, -71, 7, -101, 55, 110, -50, -46, -37, 0, -25, -84, 72, 45, 110, 39, 31, 76, 107, -37, 94, 119, -94, 71, -123, 124, 82, 5, 54, -10, 86, -11, -96, -13, 117, -4, 41, -17, 109, 53, -61, -59, -94, -27, 110, -59, 116, -104, 69, -72, -122, -112, -17, -19, -104, -6, 17, -76, -2, -25, -19, 81, -49, 99, -52, -2, -88, -73, -74, -22, 36, -52, 69, -52, 38, -110, 115, 34, -40, 118, 112, -49, 43, -115, -100, -76, -52, -103, 6, 75, 3, 100, -72, -98, 8, -20, -124, 78, 36, 71, 49, 40, -18, 5, -66, 72, -98, -66, 28, -4, 115, -27, -5, 59, 72, 38, 5, 26, -77, 41, 97, 101, -100, 60, 20, 108, 50, -116, 14, -117, -14, 74, -67, -15, -52, -89, 61, 45, 54, -4, -44, -110, 97, -66, -90, -62, -108, -83, -51, 45, 62, 68, 12, -95, 92, -96, 53, -71, -5};
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
    msg.setTimeStamp(0.6701285974677134);
    msg.setSource(45788U);
    msg.setSourceEntity(235U);
    msg.setDestination(45209U);
    msg.setDestinationEntity(198U);
    msg.req_id = 33254U;
    msg.ttl = 17010U;
    msg.destination.assign("RDMOZVPJAUGRMBFYHRUBILKHLWTFIEXPYJACKPAPBFMGWEDTWESJTQSWXJZLFPVSYVKKXMGFTPQWGNGXQJAHIEEYIQZUYATBRETVROQFJIKWIZECGLUKCEWWIOVSKBOXJHRXLJTMYAJPOIWKFBZOKAIUDCSBCQDUVTACCDGXHZHNVCRSCZMGNLZUIKEXLYORSHVQPDJDERBLNHGMCAANYULOVTMGUBLXPDMTPSHN");
    const char tmp_msg_0[] = {43, 36, -38, 52, 105, 48, 97, -47, 18, -90, -37, 42, 9, 107, -90, 7, -101, 115, 121, 69, -21, -61, 118, 2, 38, -112, 39, 13, -86, 41, 126, 7, 30, -116, -20, 92, -89, 101, -27, -8, -14, 55, 90, 62, 23, -58, -40, 66, 92, -104, -115, -11, -123, 77, 81, -82, 2, -125, -59, 124, -92, -69, -113, -119, -53, -81, -51, 46, -55, -83, -47, -43, 7, -1, -53, -89, -29, -80, -92, -113, 36, 117, -12, -14, 44, -70, 5, -95, -113, 71, -97, -33, -17, -23, -84, 36, 42, -50, -10, 90, -3, -61, 103, -124, 25, 27, 74, 74, 29, 99, 48, -84, 78, -23, 68, -49, 114, 34, -1, 97, -66, -10, 10, 69, 60, 22, 60, -3, -4, -79, -84, 14, -16, -115, -121, -100, -33, -90, 101, -76, -78, 23, 83, 79, -108, -110, 60, 110, 24, 126, -3, -75, 57, 45, 108};
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
    msg.setTimeStamp(0.3546077424984794);
    msg.setSource(41891U);
    msg.setSourceEntity(166U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(86U);
    msg.req_id = 44265U;
    msg.status = 170U;
    msg.text.assign("NQWHMUVGPOVNXPHOIXYEWWNHR");

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
    msg.setTimeStamp(0.29639201126987647);
    msg.setSource(26427U);
    msg.setSourceEntity(130U);
    msg.setDestination(57100U);
    msg.setDestinationEntity(15U);
    msg.req_id = 18577U;
    msg.status = 122U;
    msg.text.assign("FNKYHDPIPSYNBPUZRHUAISWZRNBHDXLYRXOJUUPTRDLFNHUKTHVYULPXVOHTUVCWRSVGWXXMXTRCQJIDQOIEJVZCRNYAMNCEQUABWINHDEJASFCWNEVBGMOMAYFIIJGMSZZTEKBFPYICTTMWGWKLJYZYKVWUSAJVPRDESQIKSQFHKZHLFOVCPGMALVXXMGKASGBRLZWLAWKOTOBZQBOFQEXKMBFTIDRYPCCSQBAXZGEDNEJULNGJDFEGOQM");

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
    msg.setTimeStamp(0.07723936770611362);
    msg.setSource(50768U);
    msg.setSourceEntity(60U);
    msg.setDestination(41087U);
    msg.setDestinationEntity(118U);
    msg.req_id = 3427U;
    msg.status = 16U;
    msg.text.assign("DVZOUTEJHVTROKZMHLGGSQPWAIXBDPYBATOPHMEAYDQNYRYB");

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
    msg.setTimeStamp(0.8111931653390957);
    msg.setSource(7682U);
    msg.setSourceEntity(237U);
    msg.setDestination(8257U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("OUNWLEVZKQTCRPG");
    msg.links = 1524719535U;

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
    msg.setTimeStamp(0.5203001658304129);
    msg.setSource(32118U);
    msg.setSourceEntity(223U);
    msg.setDestination(10408U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("HUFZOGKXCBBJKQNWBTAHEZBMOCSUJAOMTVSIIMEIWECJMAEVUYHLUWSWEOLCLBRTFRBSPYALTDMPKUDAEGZJDBFXTWRRZIKMIHHVMMCSCAQRXUFECTGWNCRLPINHZTVZQBMVLPFOZRUXCQYFVAYFIGXQDPIAJFNQLDNPQYFVXPINGBODVWEQADDIYLGYLNRGE");
    msg.links = 585421979U;

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
    msg.setTimeStamp(0.22901511334654534);
    msg.setSource(32535U);
    msg.setSourceEntity(230U);
    msg.setDestination(55487U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("MYIKFQLOXUGFIDRAQLFNEPGXJEEXQWPZKILZHOR");
    msg.links = 2999285637U;

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
    msg.setTimeStamp(0.42386461974633893);
    msg.setSource(27775U);
    msg.setSourceEntity(155U);
    msg.setDestination(35203U);
    msg.setDestinationEntity(158U);
    msg.groupname.assign("BVJEKAXHWDRLATYOZNJMALFUTWMXWNTJQHPKKMNFBQVKEHXQHPNQLRNFCINUWMYFGBXVBCYQISORTRCTONVQEYVDABNBSSGMGXJRPSZPIGXCERBWYUFEUTZAJIDQDVVMYLXOHIZPUMHPYCCAIOQNIGMSKAFHLZQYDFIDDHCBPEEOUOKVBIAABYOXZWUZUZGSJPJPETTROG");
    msg.action = 206U;
    msg.grouplist.assign("JPZUGDIZFKVLIJEZXLSDUJCDLPKOGREEPQWNNZGORGWCVSRIZFKVQMIIBDMYBILSAWYVRJKTUMBBFKHCZEWZYRASWPYUAHOPOJLKRXNXTAZZDMVVNUAFTHHWSIOK");

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
    msg.setTimeStamp(0.4850106005998982);
    msg.setSource(21664U);
    msg.setSourceEntity(27U);
    msg.setDestination(19717U);
    msg.setDestinationEntity(152U);
    msg.groupname.assign("BNTVHDTVAYIEWWCEDMGUQCDGQMSGSUWOLHPLECHCXGRPRJLOLNRFOIN");
    msg.action = 80U;
    msg.grouplist.assign("QRVISFFKVGFQQYWQXCGRLTQZBISVDKNMVDVPOFMECAYVRUTYQLACCOOHWPGISKKMYWDEQDOALBNCHSKRUXJDFJAXGZZLUXXACJTAFXHZMIUGAEBPDQFLYGBMER");

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
    msg.setTimeStamp(0.3750313736298032);
    msg.setSource(3354U);
    msg.setSourceEntity(88U);
    msg.setDestination(51165U);
    msg.setDestinationEntity(109U);
    msg.groupname.assign("SNKBDQBPHXFUGWSGERJNEMXRHEGIVUYIFAWOQAJJUMAJRTSZKZVKCMOTNFLAZAQWDKEILIBQSEMCPPQYOIBLUHSHCTGQZOPYXACCKKJIYNNKQUMDNZYTNFBPDJYVCYCXJOWMYPMGRGIEO");
    msg.action = 248U;
    msg.grouplist.assign("GCIYXRLAIHRVFIVBDFBEBGQTHD");

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
    msg.setTimeStamp(0.8727435522894034);
    msg.setSource(32293U);
    msg.setSourceEntity(138U);
    msg.setDestination(31332U);
    msg.setDestinationEntity(170U);
    msg.id = 92U;
    msg.range = 0.822951379877957;

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
    msg.setTimeStamp(0.4535343060549948);
    msg.setSource(43288U);
    msg.setSourceEntity(224U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(181U);
    msg.id = 250U;
    msg.range = 0.32936103806030403;

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
    msg.setTimeStamp(0.1679271103294554);
    msg.setSource(46168U);
    msg.setSourceEntity(92U);
    msg.setDestination(28312U);
    msg.setDestinationEntity(249U);
    msg.id = 78U;
    msg.range = 0.3402814166895811;

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
    msg.setTimeStamp(0.6940395557212982);
    msg.setSource(5757U);
    msg.setSourceEntity(154U);
    msg.setDestination(6991U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("BZNUBCLUDJBOBIYPIYJAAISWMZJRBRINXLYYZAPKQVKTJWDUNAGJHCOCSOSQQHJBCWYOFAQXDXRUBLUORTDIHVCXNPPMTPSZVKVWGFESFRTRRNHHSMJPFRTIQVKVNCHMTNEQOKBXIVDQAMGTJBPDUYKEEGOGCXRVMVCDZKZNWMYLFTDEXLWYJIMIANUQDCSZW");
    msg.lat = 0.1512395924276091;
    msg.lon = 0.6393918074230284;
    msg.depth = 0.7267629001265863;
    msg.query_channel = 18U;
    msg.reply_channel = 62U;
    msg.transponder_delay = 81U;

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
    msg.setTimeStamp(0.7623756439560457);
    msg.setSource(5575U);
    msg.setSourceEntity(179U);
    msg.setDestination(59190U);
    msg.setDestinationEntity(174U);
    msg.beacon.assign("UYTVLQWFMNOLFRKTFVOYLYDMHJLBXBDABKNAJGMUQXSDIDCDUQIILYOXBHKRYTIFMSTAXYUKKIXVJVGCMJTERMOQVCB");
    msg.lat = 0.32329991476705455;
    msg.lon = 0.8482953402445496;
    msg.depth = 0.20797658082301984;
    msg.query_channel = 234U;
    msg.reply_channel = 54U;
    msg.transponder_delay = 3U;

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
    msg.setTimeStamp(0.6153006652459018);
    msg.setSource(26015U);
    msg.setSourceEntity(94U);
    msg.setDestination(57172U);
    msg.setDestinationEntity(70U);
    msg.beacon.assign("KJVQWCIXSIPNNMVAHJOJVDVUHZKRFZDDI");
    msg.lat = 0.007612797972663898;
    msg.lon = 0.9218598796895431;
    msg.depth = 0.6493577434123481;
    msg.query_channel = 21U;
    msg.reply_channel = 191U;
    msg.transponder_delay = 15U;

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
    msg.setTimeStamp(0.5220725550462421);
    msg.setSource(16349U);
    msg.setSourceEntity(157U);
    msg.setDestination(26945U);
    msg.setDestinationEntity(49U);
    msg.op = 236U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KBCFJOTTJEVGTRNJBKYNXPQMELOELMNLXTEXM");
    tmp_msg_0.lat = 0.5375280888636336;
    tmp_msg_0.lon = 0.899595787859641;
    tmp_msg_0.depth = 0.012098673138913663;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 63U;
    tmp_msg_0.transponder_delay = 80U;
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
    msg.setTimeStamp(0.7420100520258183);
    msg.setSource(35527U);
    msg.setSourceEntity(226U);
    msg.setDestination(41109U);
    msg.setDestinationEntity(169U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.42961218204749374);
    msg.setSource(22860U);
    msg.setSourceEntity(163U);
    msg.setDestination(703U);
    msg.setDestinationEntity(239U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.4588161873847798);
    msg.setSource(7125U);
    msg.setSourceEntity(4U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(57U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.24611828075021058);
    msg.setSource(21663U);
    msg.setSourceEntity(19U);
    msg.setDestination(6731U);
    msg.setDestinationEntity(75U);
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {84, -99, -47, 76, 84, 110, -29, -68, -20, 9, -104, 70, -73, 29, -115, -104, -48, 53, -75, 74, -17, 77, -4, -59, 82, 86, 105, 67, -106, -8, 90, 95, -112, -10, -57, -33, 106, -54, -95, -103, 43, -127, 91, -87, -43, 6, 97, 70, 20, 104, 41, 42, 48, 3, 60, 111, -26, -91, -30, 42, 111, 40, 115, -94, 32, 27, -63, 58, 59, 79, -12, -40, 53, -108, 119, 75, -126, -63, -39, 119, 77, 41, 17, -113, 120, -29, -121, 43, -17, -39, 55, 72, 81, 38, 77, 102, -47, -34, 58, 96, -17, 30, 49, 64, -58, 74, -80, -73, -84, 89, 78, -37, -70, -29, 100, 8, -20, 35, 59, 84, 118, -116, 33, 81, -43, -95, -104, 91, -6, -30, -59, 34, 43, -82, -14, 50, 68, 37, 54, -58, 47, 100, -121, 19, -121, -35, -74, -12, -58, 32, -59, -32, 60, 29, 10, 110, 4, -108, -61, 107, -114, 73, 88, 43, 39, 52, -40, -124, -84, 19, 54, 5, -121, 17, 36, -65, 7, 49, 109, -42, -105, -80, 1, -60, -64, 50, -27, -54, 34, 54, -82, -20, 54, 76, -72, -23, 87, 21, 66, 75, -52, 29, 35, 10, -100, 67, 56, 70, 1, 73, 77, -85, 3, 35, 83, 43, 91, 34, -118, -26, 2, 98, 93, -46, -87, 43, -60, 65, 91, -49, 71, -62, -34, 25, -72, -77, 47, 44, 13, 120, 89, -6, 91};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.4057512564332467);
    msg.setSource(33734U);
    msg.setSourceEntity(1U);
    msg.setDestination(22457U);
    msg.setDestinationEntity(246U);
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 1280526175U;
    tmp_msg_0.lat = 0.6022328570031295;
    tmp_msg_0.lon = 0.4384446451365751;
    tmp_msg_0.height_ell = 0.6921196444589688;
    tmp_msg_0.height_sea = 0.3380851902912103;
    tmp_msg_0.hacc = 0.433390316595369;
    tmp_msg_0.vacc = 0.695403781317704;
    tmp_msg_0.vel_n = 0.36826696888141897;
    tmp_msg_0.vel_e = 0.03931122542226706;
    tmp_msg_0.vel_d = 0.34997831413320946;
    tmp_msg_0.speed = 0.09588569416702442;
    tmp_msg_0.gspeed = 0.10576276137174279;
    tmp_msg_0.heading = 0.7329149790072798;
    tmp_msg_0.sacc = 0.3070533022774964;
    tmp_msg_0.cacc = 0.03978129930930152;
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
    msg.setTimeStamp(0.31225181338670405);
    msg.setSource(46819U);
    msg.setSourceEntity(116U);
    msg.setDestination(19797U);
    msg.setDestinationEntity(73U);
    msg.op = 213U;
    msg.system.assign("TOFCICUOSJZKTSKNGAZEZQCUGHYQLRWJUOYPANJRGVCPNZDBMFKJFWMFDODPRNSYWEPKHVHHXNNVFVDDKBVREA");
    msg.range = 0.46423463338432736;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 77U;
    tmp_msg_0.plan_id.assign("BOXQSPRBXUH");
    tmp_msg_0.comm_level = 212U;
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
    msg.setTimeStamp(0.057733429523333935);
    msg.setSource(50229U);
    msg.setSourceEntity(106U);
    msg.setDestination(63092U);
    msg.setDestinationEntity(119U);
    msg.op = 1U;
    msg.system.assign("ZVBLWICLFKDNPKYGHCTOYKMWYVUCJRYZJIIVDMVVFSBBDBALSNCRHFEZQATKMDNYAPUYQMSHOFDEUWBBEIKGULCWOY");
    msg.range = 0.6123431037461511;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 118U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7985702036560645;
    tmp_tmp_msg_0_0.speed_units = 84U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2694466746685409;
    tmp_tmp_msg_0_1.z_units = 87U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.20211807963779016;
    tmp_msg_0.lon = 0.6003402387202907;
    tmp_msg_0.radius = 0.10902974431120804;
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
    msg.setTimeStamp(0.2056871096736559);
    msg.setSource(47706U);
    msg.setSourceEntity(164U);
    msg.setDestination(50350U);
    msg.setDestinationEntity(218U);
    msg.op = 54U;
    msg.system.assign("ZSRGBDVANKJIDRJLMNNPQPWTOR");
    msg.range = 0.36538053338823484;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.14613924864147432;
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
    msg.setTimeStamp(0.3704105909249814);
    msg.setSource(38214U);
    msg.setSourceEntity(218U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.7027118565240468);
    msg.setSource(26126U);
    msg.setSourceEntity(29U);
    msg.setDestination(32598U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.22113709682029015);
    msg.setSource(27239U);
    msg.setSourceEntity(238U);
    msg.setDestination(56474U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.9543433130058018);
    msg.setSource(3448U);
    msg.setSourceEntity(46U);
    msg.setDestination(28295U);
    msg.setDestinationEntity(47U);
    msg.list.assign("BEGXELXRIQZYCKZBRDFYKXEVKJEFVQZHMNUERNMYCMDWNKNQAQYTSAJQTPIMAPDPOFXHTCYUSAMUQIVWDIGZTYTCENOCXZIULYFZOTAVTXXHMPUNSCFAVRGLJSRQYFBBDJPIAKVGLWDEWXPWDWIGTDZZFHWSFROVLRSKAVJASSIBFHKUNIWEWPNZXOQBJHRDQNPLXOGMYLHBMSHMQTCYCCVGLZJ");

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
    msg.setTimeStamp(0.7975771110251952);
    msg.setSource(52940U);
    msg.setSourceEntity(152U);
    msg.setDestination(45061U);
    msg.setDestinationEntity(204U);
    msg.list.assign("WTFJPIEEFUULUSAEZSVECSXIPSUATNDFNCIMXKWKPZXJAPAEIHEQWCJYDRYKEERZOHVSVSNVCXOGZNYAHMPCOURKJFWKYAGQYBTZQBVGBLOGPQYGZRMHBFYNONONLGMYXSWCLRJIRPISPXXLKUPKEWGDBUBADR");

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
    msg.setTimeStamp(0.7240345000574832);
    msg.setSource(2870U);
    msg.setSourceEntity(37U);
    msg.setDestination(18325U);
    msg.setDestinationEntity(131U);
    msg.list.assign("UXAIJDQSVBVPBRYRDFKOXABDOQGWCPUNMJRTBVIWXTBQPAIVMMLONLVMHYUGXITZMXENBCQJTQSUYPSCNRBIFILDEVWEHPJJGRGGVZOYPEGJMBIFWPACXTNYDLSHKSZOXSTLDQVNRFCSRHCCQUZAVVTKQZKYDLPCKDYPOZUOUBEZINKGRHUQHSCQYJHPMGEGOXTIEHESEWHXFWMNIAFZEFLFSZBMALJKJYLZWTWHMTLRXJDAWGDU");

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
    msg.setTimeStamp(0.5345936386467641);
    msg.setSource(50965U);
    msg.setSourceEntity(170U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(156U);
    msg.value = 23160;

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
    msg.setTimeStamp(0.2670082686607894);
    msg.setSource(54606U);
    msg.setSourceEntity(96U);
    msg.setDestination(16263U);
    msg.setDestinationEntity(32U);
    msg.value = -7655;

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
    msg.setTimeStamp(0.7124475396120592);
    msg.setSource(36579U);
    msg.setSourceEntity(231U);
    msg.setDestination(54287U);
    msg.setDestinationEntity(55U);
    msg.value = 18074;

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
    msg.setTimeStamp(0.4614540876408981);
    msg.setSource(37087U);
    msg.setSourceEntity(132U);
    msg.setDestination(51202U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8865545415585623;

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
    msg.setTimeStamp(0.9159968649878973);
    msg.setSource(8245U);
    msg.setSourceEntity(107U);
    msg.setDestination(16352U);
    msg.setDestinationEntity(254U);
    msg.value = 0.09438469919026504;

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
    msg.setTimeStamp(0.4822082342771088);
    msg.setSource(12216U);
    msg.setSourceEntity(99U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(135U);
    msg.value = 0.38201081263388426;

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
    msg.setTimeStamp(0.4950064825624364);
    msg.setSource(34950U);
    msg.setSourceEntity(237U);
    msg.setDestination(22937U);
    msg.setDestinationEntity(252U);
    msg.value = 0.24573713373570483;

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
    msg.setTimeStamp(0.17130963473699634);
    msg.setSource(31662U);
    msg.setSourceEntity(135U);
    msg.setDestination(16816U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9404556985712841;

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
    msg.setTimeStamp(0.23109924514958324);
    msg.setSource(62207U);
    msg.setSourceEntity(231U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5087787931316777;

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
    msg.setTimeStamp(0.48691189238073607);
    msg.setSource(14978U);
    msg.setSourceEntity(92U);
    msg.setDestination(3848U);
    msg.setDestinationEntity(109U);
    msg.validity = 64981U;
    msg.type = 154U;
    msg.utc_year = 56628U;
    msg.utc_month = 231U;
    msg.utc_day = 113U;
    msg.utc_time = 0.9054537508920156;
    msg.lat = 0.4127540221287821;
    msg.lon = 0.16752649115156404;
    msg.height = 0.13535416912279163;
    msg.satellites = 204U;
    msg.cog = 0.19363794483200758;
    msg.sog = 0.8835091599857801;
    msg.hdop = 0.4985081596987787;
    msg.vdop = 0.5049549559660564;
    msg.hacc = 0.4534604544214056;
    msg.vacc = 0.6781182224732465;

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
    msg.setTimeStamp(0.4253911569605131);
    msg.setSource(14965U);
    msg.setSourceEntity(103U);
    msg.setDestination(22289U);
    msg.setDestinationEntity(84U);
    msg.validity = 13588U;
    msg.type = 181U;
    msg.utc_year = 39947U;
    msg.utc_month = 218U;
    msg.utc_day = 176U;
    msg.utc_time = 0.39850291489622913;
    msg.lat = 0.045807158183971075;
    msg.lon = 0.22716335453839764;
    msg.height = 0.2928619389546475;
    msg.satellites = 98U;
    msg.cog = 0.4660237519165409;
    msg.sog = 0.42447004321551696;
    msg.hdop = 0.9620427662364945;
    msg.vdop = 0.16419720975445917;
    msg.hacc = 0.6464687649454863;
    msg.vacc = 0.4653848301560154;

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
    msg.setTimeStamp(0.3044448592612522);
    msg.setSource(35728U);
    msg.setSourceEntity(168U);
    msg.setDestination(15212U);
    msg.setDestinationEntity(210U);
    msg.validity = 56259U;
    msg.type = 105U;
    msg.utc_year = 17280U;
    msg.utc_month = 163U;
    msg.utc_day = 0U;
    msg.utc_time = 0.510274774515441;
    msg.lat = 0.5082718254813197;
    msg.lon = 0.9728108780916209;
    msg.height = 0.42547609142451115;
    msg.satellites = 218U;
    msg.cog = 0.7574353740197882;
    msg.sog = 0.9463579577855874;
    msg.hdop = 0.053227768403530495;
    msg.vdop = 0.5983559937167536;
    msg.hacc = 0.7744891964342312;
    msg.vacc = 0.05274124564722105;

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
    msg.setTimeStamp(0.4703283250101139);
    msg.setSource(43784U);
    msg.setSourceEntity(11U);
    msg.setDestination(36444U);
    msg.setDestinationEntity(171U);
    msg.time = 0.752315390858241;
    msg.phi = 0.11182094578873858;
    msg.theta = 0.7242568065871611;
    msg.psi = 0.08419787122502997;
    msg.psi_magnetic = 0.25525030603030063;

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
    msg.setTimeStamp(0.5948934701951002);
    msg.setSource(13642U);
    msg.setSourceEntity(91U);
    msg.setDestination(55541U);
    msg.setDestinationEntity(42U);
    msg.time = 0.5487114881083848;
    msg.phi = 0.31982043706997254;
    msg.theta = 0.28450517254759333;
    msg.psi = 0.19017168209640822;
    msg.psi_magnetic = 0.17770144116802877;

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
    msg.setTimeStamp(0.41614797817797167);
    msg.setSource(60626U);
    msg.setSourceEntity(40U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(98U);
    msg.time = 0.4366891801692796;
    msg.phi = 0.3562154085280159;
    msg.theta = 0.9818746747163436;
    msg.psi = 0.6008943166014761;
    msg.psi_magnetic = 0.7861520550199396;

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
    msg.setTimeStamp(0.37816562693547995);
    msg.setSource(11650U);
    msg.setSourceEntity(250U);
    msg.setDestination(16723U);
    msg.setDestinationEntity(44U);
    msg.time = 0.18086573976045284;
    msg.x = 0.6451730391459015;
    msg.y = 0.1732552433283412;
    msg.z = 0.2579111797939916;
    msg.timestep = 0.2825303374144762;

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
    msg.setTimeStamp(0.7554203985752981);
    msg.setSource(46137U);
    msg.setSourceEntity(121U);
    msg.setDestination(5198U);
    msg.setDestinationEntity(237U);
    msg.time = 0.7391373134370515;
    msg.x = 0.8916734281639158;
    msg.y = 0.648997256611851;
    msg.z = 0.2143036997607014;
    msg.timestep = 0.9268438695269672;

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
    msg.setTimeStamp(0.23291086162374863);
    msg.setSource(47238U);
    msg.setSourceEntity(191U);
    msg.setDestination(13359U);
    msg.setDestinationEntity(76U);
    msg.time = 0.477263254370085;
    msg.x = 0.33753090015512677;
    msg.y = 0.009328708324565671;
    msg.z = 0.3421213763365891;
    msg.timestep = 0.5137457822036202;

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
    msg.setTimeStamp(0.2033583129939932);
    msg.setSource(46924U);
    msg.setSourceEntity(253U);
    msg.setDestination(26496U);
    msg.setDestinationEntity(245U);
    msg.time = 0.3872216341579158;
    msg.x = 0.19084062566560878;
    msg.y = 0.7403949284077113;
    msg.z = 0.7087484561922465;

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
    msg.setTimeStamp(0.746891361975457);
    msg.setSource(20702U);
    msg.setSourceEntity(75U);
    msg.setDestination(37102U);
    msg.setDestinationEntity(69U);
    msg.time = 0.6990785173478966;
    msg.x = 0.4699797580130808;
    msg.y = 0.8708932116777761;
    msg.z = 0.9408453627931259;

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
    msg.setTimeStamp(0.06955616152300792);
    msg.setSource(47125U);
    msg.setSourceEntity(40U);
    msg.setDestination(48644U);
    msg.setDestinationEntity(155U);
    msg.time = 0.2677987914343728;
    msg.x = 0.4139611218971304;
    msg.y = 0.11717208812502478;
    msg.z = 0.9847683417936131;

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
    msg.setTimeStamp(0.5345770798460204);
    msg.setSource(9255U);
    msg.setSourceEntity(232U);
    msg.setDestination(36517U);
    msg.setDestinationEntity(139U);
    msg.time = 0.9880392500921873;
    msg.x = 0.8160863470833891;
    msg.y = 0.9703810509243527;
    msg.z = 0.9225964892242872;

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
    msg.setTimeStamp(0.7078538694238397);
    msg.setSource(15135U);
    msg.setSourceEntity(153U);
    msg.setDestination(27917U);
    msg.setDestinationEntity(46U);
    msg.time = 0.6260592530350345;
    msg.x = 0.01755316929804207;
    msg.y = 0.9592453306429435;
    msg.z = 0.08570100962111538;

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
    msg.setTimeStamp(0.1759309154735068);
    msg.setSource(45692U);
    msg.setSourceEntity(194U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(222U);
    msg.time = 0.4376662121312994;
    msg.x = 0.9267247872320572;
    msg.y = 0.19660414538427373;
    msg.z = 0.9330916192326275;

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
    msg.setTimeStamp(0.7461418095844123);
    msg.setSource(60217U);
    msg.setSourceEntity(127U);
    msg.setDestination(32169U);
    msg.setDestinationEntity(140U);
    msg.time = 0.4931725105277669;
    msg.x = 0.11270291192237514;
    msg.y = 0.896119129613013;
    msg.z = 0.5697898035419388;

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
    msg.setTimeStamp(0.019352483468809023);
    msg.setSource(37935U);
    msg.setSourceEntity(20U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(36U);
    msg.time = 0.6946613345382121;
    msg.x = 0.36218557517589367;
    msg.y = 0.38906890202583544;
    msg.z = 0.4184219917266967;

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
    msg.setTimeStamp(0.5717912181446017);
    msg.setSource(44345U);
    msg.setSourceEntity(219U);
    msg.setDestination(63468U);
    msg.setDestinationEntity(203U);
    msg.time = 0.8559320182370584;
    msg.x = 0.1795908561732097;
    msg.y = 0.7904952701191844;
    msg.z = 0.2272340913696319;

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
    msg.setTimeStamp(0.6030366412681787);
    msg.setSource(57144U);
    msg.setSourceEntity(26U);
    msg.setDestination(45295U);
    msg.setDestinationEntity(207U);
    msg.validity = 52U;
    msg.x = 0.9616808381413537;
    msg.y = 0.20086003261144691;
    msg.z = 0.942773109873604;

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
    msg.setTimeStamp(0.49052931846666203);
    msg.setSource(7220U);
    msg.setSourceEntity(14U);
    msg.setDestination(43007U);
    msg.setDestinationEntity(118U);
    msg.validity = 54U;
    msg.x = 0.3276512159884878;
    msg.y = 0.5884324998552897;
    msg.z = 0.7685452936689926;

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
    msg.setTimeStamp(0.12563095173239403);
    msg.setSource(37103U);
    msg.setSourceEntity(57U);
    msg.setDestination(42574U);
    msg.setDestinationEntity(94U);
    msg.validity = 247U;
    msg.x = 0.05316880099411425;
    msg.y = 0.9600348094785284;
    msg.z = 0.06668447355735341;

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
    msg.setTimeStamp(0.16617743077387215);
    msg.setSource(43071U);
    msg.setSourceEntity(182U);
    msg.setDestination(28296U);
    msg.setDestinationEntity(87U);
    msg.validity = 23U;
    msg.x = 0.9501164964240967;
    msg.y = 0.8542696008190372;
    msg.z = 0.4825721721436036;

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
    msg.setTimeStamp(0.4917069931610043);
    msg.setSource(55997U);
    msg.setSourceEntity(77U);
    msg.setDestination(25181U);
    msg.setDestinationEntity(89U);
    msg.validity = 148U;
    msg.x = 0.6006775115307096;
    msg.y = 0.6568200204357656;
    msg.z = 0.6310991071510216;

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
    msg.setTimeStamp(0.5772541611056342);
    msg.setSource(29083U);
    msg.setSourceEntity(39U);
    msg.setDestination(33485U);
    msg.setDestinationEntity(100U);
    msg.validity = 0U;
    msg.x = 0.8493265193168185;
    msg.y = 0.5264001341585999;
    msg.z = 0.8634005051253453;

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
    msg.setTimeStamp(0.10989952425335048);
    msg.setSource(49291U);
    msg.setSourceEntity(131U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(68U);
    msg.time = 0.8159508354144879;
    msg.x = 0.6445054406036599;
    msg.y = 0.5707525427099737;
    msg.z = 0.8566510453279462;

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
    msg.setTimeStamp(0.39731900638403816);
    msg.setSource(23020U);
    msg.setSourceEntity(178U);
    msg.setDestination(53649U);
    msg.setDestinationEntity(68U);
    msg.time = 0.40340468023346643;
    msg.x = 0.9161787923191126;
    msg.y = 0.30495681433547794;
    msg.z = 0.09025680166279315;

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
    msg.setTimeStamp(0.41812880943290864);
    msg.setSource(11676U);
    msg.setSourceEntity(161U);
    msg.setDestination(507U);
    msg.setDestinationEntity(204U);
    msg.time = 0.1420975651069888;
    msg.x = 0.02560609516245682;
    msg.y = 0.8227994148955451;
    msg.z = 0.40962324280484297;

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
    msg.setTimeStamp(0.7775068597423972);
    msg.setSource(2341U);
    msg.setSourceEntity(250U);
    msg.setDestination(15207U);
    msg.setDestinationEntity(84U);
    msg.validity = 84U;
    msg.value = 0.9650159368571136;

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
    msg.setTimeStamp(0.9815891190936542);
    msg.setSource(31981U);
    msg.setSourceEntity(91U);
    msg.setDestination(43649U);
    msg.setDestinationEntity(163U);
    msg.validity = 131U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5147176541616095;
    tmp_msg_0.beam_height = 0.19559253055919323;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9871238009861403;

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
    msg.setTimeStamp(0.24462405511734642);
    msg.setSource(64939U);
    msg.setSourceEntity(14U);
    msg.setDestination(7698U);
    msg.setDestinationEntity(196U);
    msg.validity = 124U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.44193023973020074;
    tmp_msg_0.y = 0.38172081869683705;
    tmp_msg_0.z = 0.6676624950903264;
    tmp_msg_0.phi = 0.616364766567771;
    tmp_msg_0.theta = 0.9087112234022926;
    tmp_msg_0.psi = 0.02872508971531651;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.41884197898248965;
    tmp_msg_1.beam_height = 0.25278576842892597;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.15868057655142087;

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
    msg.setTimeStamp(0.9929259327145199);
    msg.setSource(1094U);
    msg.setSourceEntity(29U);
    msg.setDestination(36774U);
    msg.setDestinationEntity(209U);
    msg.value = 0.536040404518338;

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
    msg.setTimeStamp(0.36355027693987974);
    msg.setSource(8112U);
    msg.setSourceEntity(136U);
    msg.setDestination(51353U);
    msg.setDestinationEntity(165U);
    msg.value = 0.050120118643681155;

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
    msg.setTimeStamp(0.9296246975093813);
    msg.setSource(12628U);
    msg.setSourceEntity(218U);
    msg.setDestination(19420U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9654147258546851;

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
    msg.setTimeStamp(0.8783261747900374);
    msg.setSource(36514U);
    msg.setSourceEntity(251U);
    msg.setDestination(46565U);
    msg.setDestinationEntity(236U);
    msg.value = 0.27430626266714997;

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
    msg.setTimeStamp(0.21337354524831809);
    msg.setSource(51138U);
    msg.setSourceEntity(60U);
    msg.setDestination(56515U);
    msg.setDestinationEntity(232U);
    msg.value = 0.23486602115897515;

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
    msg.setTimeStamp(0.15992874809281976);
    msg.setSource(26675U);
    msg.setSourceEntity(204U);
    msg.setDestination(35251U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7246201316274398;

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
    msg.setTimeStamp(0.150218848675978);
    msg.setSource(15799U);
    msg.setSourceEntity(228U);
    msg.setDestination(60933U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7404722209102873;

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
    msg.setTimeStamp(0.7850388513925755);
    msg.setSource(33943U);
    msg.setSourceEntity(51U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(133U);
    msg.value = 0.3324294906973345;

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
    msg.setTimeStamp(0.4194391340842685);
    msg.setSource(61346U);
    msg.setSourceEntity(112U);
    msg.setDestination(48464U);
    msg.setDestinationEntity(116U);
    msg.value = 0.12612060195971309;

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
    msg.setTimeStamp(0.5406632608825027);
    msg.setSource(7236U);
    msg.setSourceEntity(66U);
    msg.setDestination(60506U);
    msg.setDestinationEntity(123U);
    msg.value = 0.1999615489420763;

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
    msg.setTimeStamp(0.6785534450802939);
    msg.setSource(20160U);
    msg.setSourceEntity(123U);
    msg.setDestination(64930U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5627625801916301;

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
    msg.setTimeStamp(0.8705824960542806);
    msg.setSource(53266U);
    msg.setSourceEntity(157U);
    msg.setDestination(22058U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5378352865817752;

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
    msg.setTimeStamp(0.3181268812280602);
    msg.setSource(49419U);
    msg.setSourceEntity(43U);
    msg.setDestination(58915U);
    msg.setDestinationEntity(182U);
    msg.value = 0.26907871266499217;

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
    msg.setTimeStamp(0.10317347674464328);
    msg.setSource(18087U);
    msg.setSourceEntity(180U);
    msg.setDestination(31536U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6774647679958465;

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
    msg.setTimeStamp(0.22586711337419652);
    msg.setSource(49176U);
    msg.setSourceEntity(49U);
    msg.setDestination(32267U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8132451972813142;

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
    msg.setTimeStamp(0.39750698386199534);
    msg.setSource(16302U);
    msg.setSourceEntity(41U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(73U);
    msg.value = 0.9120005957948676;

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
    msg.setTimeStamp(0.8068884326325746);
    msg.setSource(55259U);
    msg.setSourceEntity(199U);
    msg.setDestination(42869U);
    msg.setDestinationEntity(160U);
    msg.value = 0.774152962822364;

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
    msg.setTimeStamp(0.7919347633412185);
    msg.setSource(62050U);
    msg.setSourceEntity(18U);
    msg.setDestination(53495U);
    msg.setDestinationEntity(179U);
    msg.value = 0.2700961204607881;

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
    msg.setTimeStamp(0.6491061357035531);
    msg.setSource(42527U);
    msg.setSourceEntity(148U);
    msg.setDestination(23815U);
    msg.setDestinationEntity(169U);
    msg.value = 0.20576382654038738;

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
    msg.setTimeStamp(0.6345194733519082);
    msg.setSource(17975U);
    msg.setSourceEntity(152U);
    msg.setDestination(39415U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8720947966842986;

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
    msg.setTimeStamp(0.2392752657627759);
    msg.setSource(17509U);
    msg.setSourceEntity(237U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(81U);
    msg.value = 0.08199288022221007;

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
    msg.setTimeStamp(0.7218827422062655);
    msg.setSource(14674U);
    msg.setSourceEntity(129U);
    msg.setDestination(16723U);
    msg.setDestinationEntity(160U);
    msg.value = 0.789837548557433;

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
    msg.setTimeStamp(0.36220150584814614);
    msg.setSource(26085U);
    msg.setSourceEntity(38U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(159U);
    msg.value = 0.6279973289403157;

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
    msg.setTimeStamp(0.14334520789431282);
    msg.setSource(49210U);
    msg.setSourceEntity(52U);
    msg.setDestination(50305U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5057387021739403;

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
    msg.setTimeStamp(0.9860658722107223);
    msg.setSource(64780U);
    msg.setSourceEntity(64U);
    msg.setDestination(26570U);
    msg.setDestinationEntity(54U);
    msg.direction = 0.8062488987212232;
    msg.speed = 0.9891554120684997;
    msg.turbulence = 0.6842830966393004;

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
    msg.setTimeStamp(0.8959418044742592);
    msg.setSource(18176U);
    msg.setSourceEntity(235U);
    msg.setDestination(56452U);
    msg.setDestinationEntity(188U);
    msg.direction = 0.7001618097773097;
    msg.speed = 0.2697529263179482;
    msg.turbulence = 0.573229042515121;

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
    msg.setTimeStamp(0.34913426855587126);
    msg.setSource(12623U);
    msg.setSourceEntity(116U);
    msg.setDestination(16850U);
    msg.setDestinationEntity(73U);
    msg.direction = 0.8646818846143534;
    msg.speed = 0.28048702047078644;
    msg.turbulence = 0.9102325960908147;

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
    msg.setTimeStamp(0.01987110869545128);
    msg.setSource(21945U);
    msg.setSourceEntity(199U);
    msg.setDestination(34011U);
    msg.setDestinationEntity(109U);
    msg.value = 0.0485806221952354;

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
    msg.setTimeStamp(0.5259600535592487);
    msg.setSource(27965U);
    msg.setSourceEntity(122U);
    msg.setDestination(42170U);
    msg.setDestinationEntity(67U);
    msg.value = 0.14731441326046868;

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
    msg.setTimeStamp(0.5285748532874691);
    msg.setSource(28370U);
    msg.setSourceEntity(14U);
    msg.setDestination(44548U);
    msg.setDestinationEntity(222U);
    msg.value = 0.3731249505344324;

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
    msg.setTimeStamp(0.3828984113909204);
    msg.setSource(16759U);
    msg.setSourceEntity(5U);
    msg.setDestination(12678U);
    msg.setDestinationEntity(128U);
    msg.value.assign("NPPAGQTAOHTJOIIBQNVUXATKSPRKQWVFFSLDVLVDRYXZHRZHBUCALNBSKIHXIIOACEEWLJLQHFQAZDZRFXJWKCJIXLDYFKOCCNHJXJQDNZUDRNOHZBAPFICJFPDRJYWITTBCXXSMEOMWELRBRBUTAHIGSQM");

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
    msg.setTimeStamp(0.8844399759087587);
    msg.setSource(49816U);
    msg.setSourceEntity(251U);
    msg.setDestination(41723U);
    msg.setDestinationEntity(32U);
    msg.value.assign("NNOYCCQEQSXNAHZUIHWOALFJMATEXACFHKWUWBZRBFSVJFIKMDVKHPQXNYPTPOKPQODGHZYIAGCDHCGQYTFRJJSYPRRQUPDVGGNGENQEENXDEUGPYL");

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
    msg.setTimeStamp(0.9401018304937898);
    msg.setSource(49341U);
    msg.setSourceEntity(206U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(237U);
    msg.value.assign("ESZRGLLFZVDEXVBRADCIVJUCKQZYNDOMIIKTNOJYARJPGIZXGYOYNUBQHRUCLEYFMFPFLFDOWWYMAWWUGRSXYTVPZNVMXJIGKAJNIBJTSHPGTMDYLRCPHVCFMZNJSQJYASIOBMDHAQYTCTUUEBHQVEAZHGHUQWBPVRDFOLRJGQVHEMCKWZUMSOBTQVGCIMPPUTKZSTFTGEK");

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
    msg.setTimeStamp(0.05175744336216359);
    msg.setSource(12559U);
    msg.setSourceEntity(245U);
    msg.setDestination(44857U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {-82, -111, 124, 4, -113, 30, 37, 80, 114, -22, -15, 39, 98, -115, 118, -101, -118, 38, -88, 53, -122, -127, 7, 12, 104, -22, -108, -110, 16, -117, -67, -32, -2, -95, 11, -20, 110, -99, 106, 32, 116, 53, 107, 124, 93, -121, 71, -2, 92, 97, 12, -128, 29, -81, 110, 85, -108, -126, 26, -8, -89, 47, 69, 40, -81, 66, -24, 4, -34, -128, 41, -22, 118, -11, 64, 118, 43, 2, -55, 15, -38, -92, 76, 17, -120, -124, 6, 24, 47, 47, 120, 84, 12, 35, -54, -122, 89, -69, 106, -126, -84, 26, -59, 36, 73, -51, 92, -23, -39, 95, -121, -79, -85, 60, 3, -53, -70, 13, -115, 11, -120, -75, -42, 49, 18, 117, 21, -77, -24, 95, -110, 92, 79, -14, 44, -79, -3, 1, 73, -16, 77, 66, 13, -97, 86, -56, -4, 11, -72, -40, 5};
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
    msg.setTimeStamp(0.43744891930521645);
    msg.setSource(21637U);
    msg.setSourceEntity(161U);
    msg.setDestination(50456U);
    msg.setDestinationEntity(244U);
    const char tmp_msg_0[] = {-44, -29, -6, -61, 57, -103, 20, -1, 83, 87, -83, 120, 105, 10, -36, 48, -62, 29, -52, 119, 78, -13, -82, 10, -105, -77, 42, -43, -5, -30, 13, 23, -16, -97, -61, 53, -94, -30, 26, -120, 37, -109, 3, -80, -118, 126, -96, 92, -85, 122, -1, 14, 55, -58, 126, -26, 95, -39, -81, 125, 12, 28, -69, 84, -63, -72, 105, 33, -83, -77, 23, -111, -2, -70, -89, 71, 44, -79, 31, 94, 27, -57, 108, -118, 68, 116, -3, 99, -89, -79};
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
    msg.setTimeStamp(0.3300985558425802);
    msg.setSource(29632U);
    msg.setSourceEntity(120U);
    msg.setDestination(44892U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {26, -29, -82, -125, -65, 93, 118, -98, -66, 73, 115, 111, 25, -74, 102, -25, -38, -13, 42, -46, -79};
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
    msg.setTimeStamp(0.9715251000527374);
    msg.setSource(53025U);
    msg.setSourceEntity(23U);
    msg.setDestination(16373U);
    msg.setDestinationEntity(182U);
    msg.type = 153U;
    msg.frequency = 2887470027U;
    msg.min_range = 22042U;
    msg.max_range = 33364U;
    msg.bits_per_point = 186U;
    msg.scale_factor = 0.4883569978075779;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.998289946422819;
    tmp_msg_0.beam_height = 0.43016565379223026;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-65, 71, -54, 74, -7, -73, 60, -49, -54, -88, -94, -38, -1, -75, 65, -83, 8, 124, -106, -68, 79, -29, 49, -74};
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
    msg.setTimeStamp(0.8487566744565317);
    msg.setSource(1027U);
    msg.setSourceEntity(138U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(185U);
    msg.type = 137U;
    msg.frequency = 23333312U;
    msg.min_range = 40022U;
    msg.max_range = 61956U;
    msg.bits_per_point = 125U;
    msg.scale_factor = 0.8363884211933531;
    const char tmp_msg_0[] = {123, 23, -117, 113, -75, 120, 33, 23, 95, -93, 75, 106, -104, -89, -42, -67, -122, 59, -62, 40, -89, -10, 123, -54, 109, 79, -69, -109, 123, 109, -126, -4, -86, -23, 29, -52, -117, 113, 99, -4, 79, 107, 40, -100, -79, 98, 13, -74, 118, 40, 56, 41, 60, -110, 110, -104, -85, -58, 121, -71, -118, -1, -26, 119, 5, -47, -26, -58, -57, -103, -78, 40, 35, -3, 10, -127, 64, 107, -112, -108, -61, 55, 84, 94, 7, -80};
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
    msg.setTimeStamp(0.8486641286669055);
    msg.setSource(54002U);
    msg.setSourceEntity(25U);
    msg.setDestination(12655U);
    msg.setDestinationEntity(174U);
    msg.type = 180U;
    msg.frequency = 2547720588U;
    msg.min_range = 61043U;
    msg.max_range = 59203U;
    msg.bits_per_point = 39U;
    msg.scale_factor = 0.5770588677122347;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.17263610042836786;
    tmp_msg_0.beam_height = 0.3990322749028402;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-55, -43, -75, 108, -60, -81, -106, 117, -52, 79, -15, 109, -104, 65, 105, -45, 29, -62, 61, 78, 28, 113, 56, -128, 98, -73, -26, 101, 45, -52, -127, -87, -51, -75, -100, 10, 87, -3, 45, -67, -14, -2, -39, 3, 117, -22, -115, 69, -6, 17, 35, 53, -62, -33, 107, -14, 27, 83, -18, 39, -33, -42, -32, -82, -49, -23, 73, -42, -39, -92, -48, -104, -106, -7, -103, 2, 1, 106, 39, -60, -44, -41, -51, -69, 15, -47, 81, -96, 28, 8, 13, 12, -80, 85, 27, 31, 6, 113, 56, -122, -64, -106, -75, -116, 60, -27, -12, -100, 40, 32, -117, -62, -14, -44, 42, -79, 9, 30, -8, 99, -127, 123, 25, 117, -30, -79, -68, -45, 110, -18, 72, 38, 95, 66, 37, -115, -52, -87, 109, 37, -99, -103, -65, 9, 8, 103, 9, 27, -81, 20, -44, 56, -22, 116, 112, -12, -15, 67, 39, 86, -10, 53, 63, -13, 15, -126, -89, 54, 31, 90, -32, 46, -27, -24, -49, -7, -31, -89, -46, -27};
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
    msg.setTimeStamp(0.7387362727163879);
    msg.setSource(57096U);
    msg.setSourceEntity(70U);
    msg.setDestination(50643U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.7314740906719451);
    msg.setSource(1338U);
    msg.setSourceEntity(146U);
    msg.setDestination(52686U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.8747537478158925);
    msg.setSource(27064U);
    msg.setSourceEntity(209U);
    msg.setDestination(7769U);
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
    msg.setTimeStamp(0.16036986990390134);
    msg.setSource(20684U);
    msg.setSourceEntity(7U);
    msg.setDestination(58509U);
    msg.setDestinationEntity(196U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.7428293185107872);
    msg.setSource(24354U);
    msg.setSourceEntity(167U);
    msg.setDestination(19547U);
    msg.setDestinationEntity(194U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.7962387063664518);
    msg.setSource(23475U);
    msg.setSourceEntity(168U);
    msg.setDestination(59148U);
    msg.setDestinationEntity(88U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.2720109787067704);
    msg.setSource(12229U);
    msg.setSourceEntity(26U);
    msg.setDestination(25837U);
    msg.setDestinationEntity(184U);
    msg.value = 0.2137010407168043;
    msg.confidence = 0.2020682064906465;
    msg.opmodes.assign("ILUQPZOKVCWVTDYDROPZCEPBBNSKFOWBASXWTYCJMNYJGGEHMJXGDBZLGLKVGSMNUHLXVYDVLFVELNGASGTZPUPUJFBMKUZWZFRAZQTODWWJVEWBLMKIQETCYHJKJWQHOCBLSYGFIKPHRDFHNXIXCTRSOFNMEUHTETODDWXJQLFONUKMSAOPSIMICIYHFDUTGKRYAYCVQAXEHUSJNZQRDPQARNTRUAAIJNQCXVBXSPCEIGOBWIAMYHZMRRB");

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
    msg.setTimeStamp(0.19983053478784485);
    msg.setSource(17318U);
    msg.setSourceEntity(116U);
    msg.setDestination(3824U);
    msg.setDestinationEntity(12U);
    msg.value = 0.266292224074579;
    msg.confidence = 0.18538854009377792;
    msg.opmodes.assign("DTWKMBYVCXLXCEMDQCBJSRLPTNVYABOVSNIOOYVQFDYBRVVZPKGVPXPZKWLJIMRXXVUEKGSHBWNNIHZHDKRTSPLFAGNOAZJWHUNARUQGJWIBRPUCMDEWEOZAVGFIHCYXLUSENZRPBQKAUOQJDRVZLPKMGFEYZOLFXBFEHIEFJJQPJ");

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
    msg.setTimeStamp(0.9601442650562575);
    msg.setSource(12999U);
    msg.setSourceEntity(113U);
    msg.setDestination(21703U);
    msg.setDestinationEntity(186U);
    msg.value = 0.43580082518261176;
    msg.confidence = 0.8052878136278562;
    msg.opmodes.assign("MLJZKXEYDYCGZDAPSLKBETQDARTDSYXMPUWSUHPRJQOQQLCUUJIFXNBXBVSEOGPCYFZZEGNUZVPAKGMTFHJJMNSFNTVIDYXNPASVCRU");

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
    msg.setTimeStamp(0.7971053079159384);
    msg.setSource(31559U);
    msg.setSourceEntity(188U);
    msg.setDestination(61227U);
    msg.setDestinationEntity(39U);
    msg.itow = 1896729610U;
    msg.lat = 0.050865685369562263;
    msg.lon = 0.22780841593985413;
    msg.height_ell = 0.40064142534591685;
    msg.height_sea = 0.9129381959948628;
    msg.hacc = 0.020056054951182345;
    msg.vacc = 0.055799919955145216;
    msg.vel_n = 0.17469134242540152;
    msg.vel_e = 0.9723337448252644;
    msg.vel_d = 0.5118672063685674;
    msg.speed = 0.054122106186315966;
    msg.gspeed = 0.9729393255781382;
    msg.heading = 0.9692774358519477;
    msg.sacc = 0.20371155169406607;
    msg.cacc = 0.5299351776448893;

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
    msg.setTimeStamp(0.4363003749592458);
    msg.setSource(53265U);
    msg.setSourceEntity(177U);
    msg.setDestination(34154U);
    msg.setDestinationEntity(24U);
    msg.itow = 1008772293U;
    msg.lat = 0.6004147988089242;
    msg.lon = 0.8848069837007903;
    msg.height_ell = 0.5538208267325538;
    msg.height_sea = 0.5910596521192384;
    msg.hacc = 0.27582818243107277;
    msg.vacc = 0.6898540204348589;
    msg.vel_n = 0.5928899751613523;
    msg.vel_e = 0.10261184706266446;
    msg.vel_d = 0.3834371673598739;
    msg.speed = 0.3552241889801543;
    msg.gspeed = 0.7927541291294654;
    msg.heading = 0.6392189119293197;
    msg.sacc = 0.5754372233646688;
    msg.cacc = 0.6500008448063008;

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
    msg.setTimeStamp(0.5145847795070113);
    msg.setSource(23723U);
    msg.setSourceEntity(36U);
    msg.setDestination(63862U);
    msg.setDestinationEntity(121U);
    msg.itow = 2551733053U;
    msg.lat = 0.36497541186933535;
    msg.lon = 0.9867790681015615;
    msg.height_ell = 0.36440040485847836;
    msg.height_sea = 0.8542021484839367;
    msg.hacc = 0.8851183761056403;
    msg.vacc = 0.20981559506391678;
    msg.vel_n = 0.9984693086510046;
    msg.vel_e = 0.5474692252271804;
    msg.vel_d = 0.041055459303933395;
    msg.speed = 0.2219195904836656;
    msg.gspeed = 0.9426824918410165;
    msg.heading = 0.9430783646074435;
    msg.sacc = 0.1824401152621309;
    msg.cacc = 0.5952963923959588;

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
    msg.setTimeStamp(0.17209047566817226);
    msg.setSource(25052U);
    msg.setSourceEntity(51U);
    msg.setDestination(29243U);
    msg.setDestinationEntity(3U);
    msg.id = 112U;
    msg.value = 0.02602882237123083;

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
    msg.setTimeStamp(0.17107297454684167);
    msg.setSource(41853U);
    msg.setSourceEntity(6U);
    msg.setDestination(35784U);
    msg.setDestinationEntity(73U);
    msg.id = 13U;
    msg.value = 0.7534644602030327;

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
    msg.setTimeStamp(0.37566594893693606);
    msg.setSource(47082U);
    msg.setSourceEntity(85U);
    msg.setDestination(14119U);
    msg.setDestinationEntity(89U);
    msg.id = 236U;
    msg.value = 0.2420055135303436;

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
    msg.setTimeStamp(0.06111308834236351);
    msg.setSource(35723U);
    msg.setSourceEntity(197U);
    msg.setDestination(43909U);
    msg.setDestinationEntity(70U);
    msg.x = 0.32516628724854424;
    msg.y = 0.5010731788576679;
    msg.z = 0.02999774466261862;
    msg.phi = 0.6093685986883137;
    msg.theta = 0.08379718980963269;
    msg.psi = 0.27917477490334475;

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
    msg.setTimeStamp(0.27958113491477454);
    msg.setSource(31911U);
    msg.setSourceEntity(96U);
    msg.setDestination(15420U);
    msg.setDestinationEntity(51U);
    msg.x = 0.6418133563942732;
    msg.y = 0.9146221274385554;
    msg.z = 0.3990825647230468;
    msg.phi = 0.18416831112352083;
    msg.theta = 0.654135467795799;
    msg.psi = 0.26509025484274595;

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
    msg.setTimeStamp(0.13760201406874883);
    msg.setSource(35080U);
    msg.setSourceEntity(171U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(141U);
    msg.x = 0.3638689080090737;
    msg.y = 0.7281438732722679;
    msg.z = 0.40858257383350494;
    msg.phi = 0.24463942693907692;
    msg.theta = 0.014897939688973016;
    msg.psi = 0.970403388842226;

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
    msg.setTimeStamp(0.10324891208926246);
    msg.setSource(54884U);
    msg.setSourceEntity(220U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(102U);
    msg.beam_width = 0.9517887926343119;
    msg.beam_height = 0.748271598678423;

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
    msg.setTimeStamp(0.2156542204211751);
    msg.setSource(58829U);
    msg.setSourceEntity(186U);
    msg.setDestination(13822U);
    msg.setDestinationEntity(174U);
    msg.beam_width = 0.011039231207473632;
    msg.beam_height = 0.13408090456047306;

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
    msg.setTimeStamp(0.059704924152618744);
    msg.setSource(61951U);
    msg.setSourceEntity(197U);
    msg.setDestination(24443U);
    msg.setDestinationEntity(81U);
    msg.beam_width = 0.3140582292517141;
    msg.beam_height = 0.19610135014258046;

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
    msg.setTimeStamp(0.7121817825482456);
    msg.setSource(41843U);
    msg.setSourceEntity(73U);
    msg.setDestination(61803U);
    msg.setDestinationEntity(20U);
    msg.sane = 119U;

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
    msg.setTimeStamp(0.37427152784069595);
    msg.setSource(24049U);
    msg.setSourceEntity(113U);
    msg.setDestination(28694U);
    msg.setDestinationEntity(139U);
    msg.sane = 177U;

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
    msg.setTimeStamp(0.38336349751677834);
    msg.setSource(59179U);
    msg.setSourceEntity(36U);
    msg.setDestination(40720U);
    msg.setDestinationEntity(16U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.8002794559202228);
    msg.setSource(52350U);
    msg.setSourceEntity(100U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(207U);
    msg.value = 0.7496877832756831;

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
    msg.setTimeStamp(0.9518460574924709);
    msg.setSource(58205U);
    msg.setSourceEntity(83U);
    msg.setDestination(56413U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9404591373788244;

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
    msg.setTimeStamp(0.7822432445153547);
    msg.setSource(13945U);
    msg.setSourceEntity(120U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8643165009534663;

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
    msg.setTimeStamp(0.6242562932069188);
    msg.setSource(22397U);
    msg.setSourceEntity(93U);
    msg.setDestination(56818U);
    msg.setDestinationEntity(0U);
    msg.value = 0.6778401345856331;

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
    msg.setTimeStamp(0.04561421557659173);
    msg.setSource(32025U);
    msg.setSourceEntity(136U);
    msg.setDestination(22854U);
    msg.setDestinationEntity(248U);
    msg.value = 0.65569774591835;

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
    msg.setTimeStamp(0.9891708331125503);
    msg.setSource(46355U);
    msg.setSourceEntity(101U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(242U);
    msg.value = 0.17072384460984724;

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
    msg.setTimeStamp(0.01995514892703043);
    msg.setSource(56458U);
    msg.setSourceEntity(85U);
    msg.setDestination(55853U);
    msg.setDestinationEntity(15U);
    msg.value = 0.45148717101335734;

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
    msg.setTimeStamp(0.0582089182536234);
    msg.setSource(15677U);
    msg.setSourceEntity(94U);
    msg.setDestination(11589U);
    msg.setDestinationEntity(132U);
    msg.value = 0.3323908575246428;

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
    msg.setTimeStamp(0.5291377653785332);
    msg.setSource(38633U);
    msg.setSourceEntity(19U);
    msg.setDestination(1585U);
    msg.setDestinationEntity(122U);
    msg.value = 0.09301738237529067;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.4895595578782935);
    msg.setSource(32224U);
    msg.setSourceEntity(45U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(119U);
    msg.id = 164U;
    msg.zoom = 4U;
    msg.action = 148U;

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
    msg.setTimeStamp(0.3819884419027316);
    msg.setSource(35256U);
    msg.setSourceEntity(215U);
    msg.setDestination(21797U);
    msg.setDestinationEntity(103U);
    msg.id = 199U;
    msg.zoom = 2U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.8415315052275856);
    msg.setSource(19928U);
    msg.setSourceEntity(209U);
    msg.setDestination(46045U);
    msg.setDestinationEntity(45U);
    msg.id = 115U;
    msg.zoom = 198U;
    msg.action = 78U;

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
    msg.setTimeStamp(0.5399904239484311);
    msg.setSource(10849U);
    msg.setSourceEntity(182U);
    msg.setDestination(48676U);
    msg.setDestinationEntity(163U);
    msg.id = 222U;
    msg.value = 0.49254033577122025;

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
    msg.setTimeStamp(0.75588861453967);
    msg.setSource(49545U);
    msg.setSourceEntity(12U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(117U);
    msg.id = 120U;
    msg.value = 0.09518999087722602;

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
    msg.setTimeStamp(0.6111186060547563);
    msg.setSource(28270U);
    msg.setSourceEntity(98U);
    msg.setDestination(65143U);
    msg.setDestinationEntity(154U);
    msg.id = 250U;
    msg.value = 0.17792630767968975;

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
    msg.setTimeStamp(0.7193022180594334);
    msg.setSource(29105U);
    msg.setSourceEntity(192U);
    msg.setDestination(59887U);
    msg.setDestinationEntity(250U);
    msg.id = 132U;
    msg.value = 0.701493990373618;

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
    msg.setTimeStamp(0.009145585773805198);
    msg.setSource(21814U);
    msg.setSourceEntity(10U);
    msg.setDestination(10361U);
    msg.setDestinationEntity(91U);
    msg.id = 62U;
    msg.value = 0.12073835888199913;

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
    msg.setTimeStamp(0.32776207063613894);
    msg.setSource(7589U);
    msg.setSourceEntity(253U);
    msg.setDestination(13799U);
    msg.setDestinationEntity(188U);
    msg.id = 127U;
    msg.value = 0.7533617926248148;

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
    msg.setTimeStamp(0.3365374185214617);
    msg.setSource(47056U);
    msg.setSourceEntity(182U);
    msg.setDestination(22316U);
    msg.setDestinationEntity(151U);
    msg.id = 141U;
    msg.angle = 0.8286324543701987;

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
    msg.setTimeStamp(0.11202431348543318);
    msg.setSource(14129U);
    msg.setSourceEntity(207U);
    msg.setDestination(47981U);
    msg.setDestinationEntity(141U);
    msg.id = 202U;
    msg.angle = 0.4895809415537121;

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
    msg.setTimeStamp(0.7324354911342236);
    msg.setSource(6191U);
    msg.setSourceEntity(141U);
    msg.setDestination(63613U);
    msg.setDestinationEntity(44U);
    msg.id = 246U;
    msg.angle = 0.6420278195511906;

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
    msg.setTimeStamp(0.3100506458899309);
    msg.setSource(57541U);
    msg.setSourceEntity(23U);
    msg.setDestination(25448U);
    msg.setDestinationEntity(89U);
    msg.op = 219U;
    msg.actions.assign("XEDEYTXEOBHNVARCJVFTMGMRUMGBNDNQBEMTETHPABISRYPSKYQJLGACPLISHWOYFTVKIRJXVWWUIXROSFRAZOYYBIQMMUVFOKBUYDTDKJTKIQYWXLKZJEICCNAQQZQQYPJDLEUWRZGSFZWNLUPNGPVBGZHOJDCZ");

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
    msg.setTimeStamp(0.4140860468588822);
    msg.setSource(4597U);
    msg.setSourceEntity(84U);
    msg.setDestination(36193U);
    msg.setDestinationEntity(27U);
    msg.op = 6U;
    msg.actions.assign("IBNCNYLTECGVWPPODSFCGUKCIFGERNEKXHWMTRZKJTLTXHQKYSUUEBPZZWYQYPRFWHZPWULFDBWLNNPVUCORQKZOXDHWMZSIJGYMDJHSCQMLNVKBODMXU");

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
    msg.setTimeStamp(0.6705212064466405);
    msg.setSource(60850U);
    msg.setSourceEntity(104U);
    msg.setDestination(9228U);
    msg.setDestinationEntity(233U);
    msg.op = 6U;
    msg.actions.assign("VWOSLURPXPMRJLIUIWZMYFCWPIZTSRBPLAZTTKWYGVSTFTICCQJHSQKLGNCRERGOVKDMUEOKOAXTVBINHRINAUGYPFYPICKFUBAMSJEZXVLLNJVKZSPJDVDVRJGUHCNAJMTHHAOFMMXXVBGOHHYZUHDJXGKFWQEAZZQSYHRWQQPDAIYLULODIZEON");

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
    msg.setTimeStamp(0.4547125350503116);
    msg.setSource(43558U);
    msg.setSourceEntity(131U);
    msg.setDestination(15167U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("QHGNRFFYSETJZXQUFBAZTKNKBYOGTPMOVXEBQMUN");

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
    msg.setTimeStamp(0.4069075397109808);
    msg.setSource(31634U);
    msg.setSourceEntity(199U);
    msg.setDestination(10710U);
    msg.setDestinationEntity(228U);
    msg.actions.assign("HESIVKALNSBGFKBLYMJPEIWXPQDACYMMIZBI");

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
    msg.setTimeStamp(0.03908948159189218);
    msg.setSource(42919U);
    msg.setSourceEntity(92U);
    msg.setDestination(21737U);
    msg.setDestinationEntity(112U);
    msg.actions.assign("KKSTUFZROOJHPDNYVXCLMUPMWOMZCLMIXUVFIVBMKULUCSDTINMVGLLSAMZPBXUOXZXRFKPQYKHBRNJSVIEHAXZTOCGYCYSBQJVCFF");

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
    msg.setTimeStamp(0.4868000543308112);
    msg.setSource(22286U);
    msg.setSourceEntity(201U);
    msg.setDestination(46126U);
    msg.setDestinationEntity(19U);
    msg.button = 239U;
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
    msg.setTimeStamp(0.5822232284244084);
    msg.setSource(32948U);
    msg.setSourceEntity(26U);
    msg.setDestination(23834U);
    msg.setDestinationEntity(100U);
    msg.button = 24U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.6185803577057226);
    msg.setSource(46971U);
    msg.setSourceEntity(245U);
    msg.setDestination(22400U);
    msg.setDestinationEntity(154U);
    msg.button = 107U;
    msg.value = 3U;

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
    msg.setTimeStamp(0.49067114685044244);
    msg.setSource(51076U);
    msg.setSourceEntity(23U);
    msg.setDestination(33481U);
    msg.setDestinationEntity(198U);
    msg.op = 201U;
    msg.text.assign("WKPAUEYKFCDNYWZRFNSCZVLMZWJTDASSADJTHWKYCCBOBOZXMTUDHMXDRHMUILDZFPOBECACVZPJPQJVFRVHXLMACRPBWLGQESAYYVGULJGRZOLXRYRKKJUFWIBBKSCIJIIAWNIXFKTMAANQQGUPQWYQUETEENNW");

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
    msg.setTimeStamp(0.6726158594216325);
    msg.setSource(2206U);
    msg.setSourceEntity(42U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(168U);
    msg.op = 73U;
    msg.text.assign("DHUDGKXPIAPSTRBULKWVPCMBJVQXVSPRDYFDWRAFYDTPMLAFJJNQGCWGNGEUSMZXVEFBETJNISIEZENPLWVMAEQIRUSJLBAGZUTDSHSJVMPWWYJXOYIQYLTRWHGRYDIYAMCIBBKMROYZOLPTWOUGRFZXMAZNVHTCFEFOJHGANUKEIUIOLRTCZBKQQBFLUDQLQCOKZTDKVDOXZPOFZVKIHJCCKNHOQQPEJCMSNUGAWNKV");

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
    msg.setTimeStamp(0.09322161930540307);
    msg.setSource(420U);
    msg.setSourceEntity(213U);
    msg.setDestination(54424U);
    msg.setDestinationEntity(232U);
    msg.op = 243U;
    msg.text.assign("IDADARJRTYZJPJSNU");

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
    msg.setTimeStamp(0.05379280125976105);
    msg.setSource(53675U);
    msg.setSourceEntity(64U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(187U);
    msg.op = 198U;
    msg.time_remain = 0.26136604391866525;
    msg.sched_time = 0.2578321242266657;

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
    msg.setTimeStamp(0.02931776281505849);
    msg.setSource(43778U);
    msg.setSourceEntity(104U);
    msg.setDestination(6722U);
    msg.setDestinationEntity(116U);
    msg.op = 176U;
    msg.time_remain = 0.46318510980386673;
    msg.sched_time = 0.3697811998642907;

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
    msg.setTimeStamp(0.21629440898404018);
    msg.setSource(4800U);
    msg.setSourceEntity(37U);
    msg.setDestination(38064U);
    msg.setDestinationEntity(137U);
    msg.op = 11U;
    msg.time_remain = 0.050925829578120974;
    msg.sched_time = 0.36668586592948316;

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
    msg.setTimeStamp(0.934746940485381);
    msg.setSource(29349U);
    msg.setSourceEntity(16U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(203U);
    msg.name.assign("LNKNRQFTMJKDTDNMHCNWVGSDWIDYZV");
    msg.op = 147U;
    msg.sched_time = 0.13483549179344922;

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
    msg.setTimeStamp(0.44792654076950666);
    msg.setSource(49202U);
    msg.setSourceEntity(231U);
    msg.setDestination(54330U);
    msg.setDestinationEntity(18U);
    msg.name.assign("IQFCOCJPHIIURPMCRVALUCDSAYVRNUOGJXZDYAZHJFDOUMQBZBVTSEFYGWMGQGXPGREQIOTWXEWEOXZXYYOYIMFJQXYHNIQZWEHMQGUZNTBNSMIBPFVSVEHLUHNBNJOEILLQFSNQQBXZKZUPZCKCFWVRBXKTSCUAYVGEJSDAIFKGKWRFOBNMJWUKLDUYRPPVKOEVZWWDDSVM");
    msg.op = 253U;
    msg.sched_time = 0.26564705714865133;

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
    msg.setTimeStamp(0.004324741280209987);
    msg.setSource(16866U);
    msg.setSourceEntity(185U);
    msg.setDestination(26890U);
    msg.setDestinationEntity(123U);
    msg.name.assign("WLPGLPUTWSFWABTAKDSZNNBPBQCZSKWXYHG");
    msg.op = 153U;
    msg.sched_time = 0.8159482451363028;

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
    msg.setTimeStamp(0.8323359233388674);
    msg.setSource(48506U);
    msg.setSourceEntity(80U);
    msg.setDestination(14213U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.9037107650382838);
    msg.setSource(6199U);
    msg.setSourceEntity(43U);
    msg.setDestination(17626U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.024239236035967004);
    msg.setSource(5158U);
    msg.setSourceEntity(115U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.07424429119918663);
    msg.setSource(28107U);
    msg.setSourceEntity(142U);
    msg.setDestination(8845U);
    msg.setDestinationEntity(194U);
    msg.name.assign("RVBRIUHPJACJBUUZYUOWFIXUMHLXZAZISKHZJGONWTZSFMPUYPSOVMMSXOPYVUDJQTBLANQLSFZHDOWLMBBRVIVXEAJBOACPTGWETNDOLIFEEIVPBKQSWJVDQSRDVKXKBEABYAYIIMMGQYLGRKWGSPCMNWPFAGGLWSRQWTXQYDIHDNJMGCKONEFOZKIPCHPEVZZBNQACKXTYJTQJLFCRMEJXCDENDTKUFGLCFRTAXRSZH");
    msg.state = 105U;

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
    msg.setTimeStamp(0.575800888221857);
    msg.setSource(58277U);
    msg.setSourceEntity(98U);
    msg.setDestination(26372U);
    msg.setDestinationEntity(12U);
    msg.name.assign("FUXGCPKSLAOEK");
    msg.state = 74U;

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
    msg.setTimeStamp(0.6173876185458297);
    msg.setSource(5883U);
    msg.setSourceEntity(51U);
    msg.setDestination(52864U);
    msg.setDestinationEntity(62U);
    msg.name.assign("BLGZCMDWAKHIN");
    msg.state = 192U;

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
    msg.setTimeStamp(0.016099241540862175);
    msg.setSource(52405U);
    msg.setSourceEntity(110U);
    msg.setDestination(32768U);
    msg.setDestinationEntity(39U);
    msg.name.assign("WJKYKFBFNRDWXNLGFUJGCAHUEANPTFXUGSJOJPHXXBGOLTZYNSBKAWVEOLWPMUZCMWIBAYSKDBXYKMSAREMPBLHPTCAZFZVOXSVQJKJLANGQXTODXQTQLYWNLITRQZYNYZFIIOSHWYXHMUEWNRVAOPCIYFWEFBUVACBHGODVPQBTOMKJUH");
    msg.value = 212U;

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
    msg.setTimeStamp(0.5590635295680456);
    msg.setSource(6693U);
    msg.setSourceEntity(148U);
    msg.setDestination(13144U);
    msg.setDestinationEntity(174U);
    msg.name.assign("AWWVYBZMSDTRAQNBBOZDUIEUGXSBIXPTUBKWTHIYVPZGHYBSXJKSKMIEVNLKNWBPQQWWGEDLCOQYNNPKRRMZXRDASZFOVAFIIQDRXGLVPRVCWCYSCHPTXQSFLHNFSAJRJPOIXDADAHQJLZXIC");
    msg.value = 141U;

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
    msg.setTimeStamp(0.2263675273442337);
    msg.setSource(16746U);
    msg.setSourceEntity(165U);
    msg.setDestination(16324U);
    msg.setDestinationEntity(243U);
    msg.name.assign("DYLHOYCROQVIWXAZUBUGMSOIGTPWGCOCFYOIEIVEWMHTIUVXDUBOKMVADE");
    msg.value = 185U;

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
    msg.setTimeStamp(0.04304396017849499);
    msg.setSource(45750U);
    msg.setSourceEntity(49U);
    msg.setDestination(1212U);
    msg.setDestinationEntity(210U);
    msg.name.assign("AUYLRTVGPBJKPPFMREJJYHWWZINJKKUSKTRPCVWEBESVYIZORERDOTTGHSPVQUYEGNOMUGGLABWLFHVTWJWRYKICTCDAZVDZPWWKKUOONLVGLMQHYSLSHCQXKGUX");

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
    msg.setTimeStamp(0.30439260029851756);
    msg.setSource(16069U);
    msg.setSourceEntity(95U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(229U);
    msg.name.assign("JHQCAXVOYJCSWAJVUEWCRHWDEKBOHFWFQYIZKQRGFSSQXMMDLEKZFEZBSIQKJAPQYUZKVGJJHRLMFEOYGEPPIUYVHNORBPBOMXNKBVLYAOYVZCIBWTZEZGGDCBSQFDVEDMCVUMVKFDPOTIMZWAMAPHXOOTJNAWJATKTNGTWAIERJXHILTYXNFRIHVTTUQXPLMKBDWKCQSCSLBCXP");

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
    msg.setTimeStamp(0.31040194759752493);
    msg.setSource(60657U);
    msg.setSourceEntity(8U);
    msg.setDestination(32438U);
    msg.setDestinationEntity(35U);
    msg.name.assign("NYYFPTJNPNXOBXYUDCIZRCMUKXIFMXPEHQMWCINUVCOEHHWLGPVWTPWEDSKFYIBBTKOYLAIULSRMTBSUZOSQCJDYPAJFKVVQQKQTJNCEVQETQTGFDYGJZPWLXOFAZUYOBHDOGSKVISDLSRAEKHRHEAPBGSMHXVDOBWVTXPKRNGMXHKFJZRLSTOUELVZFWYHSALJDBRNJNEWMUZNPNCJIKUZAMIFMHQGRMZWEVDBDUZA");

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
    msg.setTimeStamp(0.8888998094409525);
    msg.setSource(5220U);
    msg.setSourceEntity(40U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(120U);
    msg.name.assign("HBPOCEEJFKXWMNVFYYHTXHKACPBNRAGOBVXBGCMOVHYQSJUDUSEBKUZKWSAETOXOTWDWVLWASCELLJDZJSRQFQTQCGUAUHQSYXLAQLXZIIVVNYKEGBJJJTIQOPLLNRDMZCMNLHGSAIFVPCPJXWDLHIOZDUHMZRDYKBTODVBUENGPGFZTUPXIRXLHBRM");
    msg.value = 228U;

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
    msg.setTimeStamp(0.8093533710703386);
    msg.setSource(56027U);
    msg.setSourceEntity(107U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(4U);
    msg.name.assign("UMVNPWHYZALZOTGZRPQMGOQUJAMFCCIYUYGLLHTIEOVWTWVRLUSINMGFVZMZXEJXSBJXFIEBACZDQCTWKBIJIBQDOKJNBEWUSUBQTFTWZDLLXHJCTAKMDPBFESZEHXOKECLROXY");
    msg.value = 200U;

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
    msg.setTimeStamp(0.6387197414421736);
    msg.setSource(26636U);
    msg.setSourceEntity(229U);
    msg.setDestination(47473U);
    msg.setDestinationEntity(214U);
    msg.name.assign("BCPNNJYDIUQHBJKPUWPBUFHEAAKOEFMSDZMCNKOUBRQCYWJASPYMBBWMSGKNJBPURPRVPRIGDZZVDJFCGREXGOANTEVTJKZSIFXFJZHDDYSVJXORXQZ");
    msg.value = 236U;

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
    msg.setTimeStamp(0.7750107106936563);
    msg.setSource(28607U);
    msg.setSourceEntity(36U);
    msg.setDestination(4741U);
    msg.setDestinationEntity(16U);
    msg.id = 56U;
    msg.period = 3439225376U;
    msg.duty_cycle = 3200809740U;

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
    msg.setTimeStamp(0.06501166172945061);
    msg.setSource(16006U);
    msg.setSourceEntity(117U);
    msg.setDestination(4610U);
    msg.setDestinationEntity(56U);
    msg.id = 45U;
    msg.period = 3853146295U;
    msg.duty_cycle = 2320135105U;

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
    msg.setTimeStamp(0.774436965245431);
    msg.setSource(56475U);
    msg.setSourceEntity(32U);
    msg.setDestination(3960U);
    msg.setDestinationEntity(74U);
    msg.id = 153U;
    msg.period = 817756326U;
    msg.duty_cycle = 293248343U;

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
    msg.setTimeStamp(0.09257670872204071);
    msg.setSource(29505U);
    msg.setSourceEntity(214U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(198U);
    msg.id = 53U;
    msg.period = 1347464062U;
    msg.duty_cycle = 3167614649U;

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
    msg.setTimeStamp(0.6919314082048152);
    msg.setSource(43496U);
    msg.setSourceEntity(115U);
    msg.setDestination(36852U);
    msg.setDestinationEntity(138U);
    msg.id = 128U;
    msg.period = 4126851682U;
    msg.duty_cycle = 3840654038U;

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
    msg.setTimeStamp(0.7859639492361149);
    msg.setSource(3489U);
    msg.setSourceEntity(139U);
    msg.setDestination(50857U);
    msg.setDestinationEntity(92U);
    msg.id = 3U;
    msg.period = 3386658848U;
    msg.duty_cycle = 992705650U;

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
    msg.setTimeStamp(0.9119215882344351);
    msg.setSource(35886U);
    msg.setSourceEntity(27U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.9214900693092077;
    msg.lon = 0.6384661402194178;
    msg.height = 0.1403823011224059;
    msg.x = 0.06649329657083769;
    msg.y = 0.6128302178862827;
    msg.z = 0.9284637786254819;
    msg.phi = 0.5724271985226154;
    msg.theta = 0.8745482706363665;
    msg.psi = 0.051964795230021066;
    msg.u = 0.826550474109695;
    msg.v = 0.55398305401839;
    msg.w = 0.7229064800532302;
    msg.vx = 0.5663905690126126;
    msg.vy = 0.10449744246556691;
    msg.vz = 0.6490814768006625;
    msg.p = 0.9361593163876997;
    msg.q = 0.652233637782672;
    msg.r = 0.7582217859168697;
    msg.depth = 0.21324189408039262;
    msg.alt = 0.3088736388378044;

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
    msg.setTimeStamp(0.43469307315854777);
    msg.setSource(43547U);
    msg.setSourceEntity(223U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.05937797730042227;
    msg.lon = 0.46124093044090786;
    msg.height = 0.9772557837339165;
    msg.x = 0.09704323220435551;
    msg.y = 0.7965854652245254;
    msg.z = 0.7381008520716684;
    msg.phi = 0.9318029200193024;
    msg.theta = 0.2596229074138685;
    msg.psi = 0.5926988837839609;
    msg.u = 0.4044280032155504;
    msg.v = 0.6089966244369215;
    msg.w = 0.2645820958872094;
    msg.vx = 0.3801966310874304;
    msg.vy = 0.1661510814814201;
    msg.vz = 0.525679738609749;
    msg.p = 0.04935719988489862;
    msg.q = 0.893115229912705;
    msg.r = 0.7253222123054776;
    msg.depth = 0.097960284178917;
    msg.alt = 0.5167732040350629;

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
    msg.setTimeStamp(0.6264488586184109);
    msg.setSource(12683U);
    msg.setSourceEntity(26U);
    msg.setDestination(21427U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.4898378408746016;
    msg.lon = 0.3695648993396171;
    msg.height = 0.809181048882897;
    msg.x = 0.5740069405303682;
    msg.y = 0.9062755349872499;
    msg.z = 0.9626109623919976;
    msg.phi = 0.9311427473980616;
    msg.theta = 0.4605450498395123;
    msg.psi = 0.9812961993163297;
    msg.u = 0.7346186043204453;
    msg.v = 0.5158603636368925;
    msg.w = 0.8155624872817142;
    msg.vx = 0.12357870044882457;
    msg.vy = 0.5458403403449141;
    msg.vz = 0.2310458050887375;
    msg.p = 0.10372499886678876;
    msg.q = 0.38049694405027157;
    msg.r = 0.9532416759195932;
    msg.depth = 0.38490963968249625;
    msg.alt = 0.5451808821574012;

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
    msg.setTimeStamp(0.6007045863658513);
    msg.setSource(27333U);
    msg.setSourceEntity(5U);
    msg.setDestination(63132U);
    msg.setDestinationEntity(209U);
    msg.x = 0.8009342695394216;
    msg.y = 0.1836620551972814;
    msg.z = 0.9206979993727819;

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
    msg.setTimeStamp(0.421242917438583);
    msg.setSource(1374U);
    msg.setSourceEntity(115U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(201U);
    msg.x = 0.31655987875203817;
    msg.y = 0.029138664088262378;
    msg.z = 0.7123277128288433;

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
    msg.setTimeStamp(0.5648176905869514);
    msg.setSource(44548U);
    msg.setSourceEntity(168U);
    msg.setDestination(49705U);
    msg.setDestinationEntity(62U);
    msg.x = 0.7414100087664087;
    msg.y = 0.28009693048766293;
    msg.z = 0.49868032759742864;

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
    msg.setTimeStamp(0.8410854020380281);
    msg.setSource(40168U);
    msg.setSourceEntity(83U);
    msg.setDestination(62789U);
    msg.setDestinationEntity(210U);
    msg.value = 0.38488457632186013;

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
    msg.setTimeStamp(0.1325902411491342);
    msg.setSource(65196U);
    msg.setSourceEntity(143U);
    msg.setDestination(47822U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8347208908679493;

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
    msg.setTimeStamp(0.16670246078943274);
    msg.setSource(54275U);
    msg.setSourceEntity(27U);
    msg.setDestination(32875U);
    msg.setDestinationEntity(147U);
    msg.value = 0.8508351176382326;

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
    msg.setTimeStamp(0.976995318230798);
    msg.setSource(56171U);
    msg.setSourceEntity(10U);
    msg.setDestination(35113U);
    msg.setDestinationEntity(84U);
    msg.value = 0.7792944303173022;

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
    msg.setTimeStamp(0.9008765234719373);
    msg.setSource(29738U);
    msg.setSourceEntity(43U);
    msg.setDestination(9542U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9797645738386033;

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
    msg.setTimeStamp(0.3671231565968326);
    msg.setSource(36690U);
    msg.setSourceEntity(225U);
    msg.setDestination(31264U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5188110585741273;

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
    msg.setTimeStamp(0.23429883902475745);
    msg.setSource(55706U);
    msg.setSourceEntity(220U);
    msg.setDestination(25853U);
    msg.setDestinationEntity(175U);
    msg.x = 0.8558934211836318;
    msg.y = 0.6756234635805415;
    msg.z = 0.9787886659817838;
    msg.phi = 0.40718738984163505;
    msg.theta = 0.5927848096936223;
    msg.psi = 0.055261426764631194;
    msg.p = 0.5899258038092956;
    msg.q = 0.08802563807331454;
    msg.r = 0.7228764450631269;
    msg.u = 0.6511973559303907;
    msg.v = 0.6275975044516616;
    msg.w = 0.540699682736647;
    msg.bias_psi = 0.8944300680163091;
    msg.bias_r = 0.24170037121630317;

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
    msg.setTimeStamp(0.18203164606246158);
    msg.setSource(54895U);
    msg.setSourceEntity(253U);
    msg.setDestination(12656U);
    msg.setDestinationEntity(94U);
    msg.x = 0.1368215226896431;
    msg.y = 0.029174982148523654;
    msg.z = 0.4952223682558432;
    msg.phi = 0.34510038797281894;
    msg.theta = 0.04903982946847507;
    msg.psi = 0.45715376461822255;
    msg.p = 0.012950195048887836;
    msg.q = 0.2909705257202918;
    msg.r = 0.8694593208093012;
    msg.u = 0.8102845300461913;
    msg.v = 0.4376508360864806;
    msg.w = 0.2801824751664417;
    msg.bias_psi = 0.6502978397872672;
    msg.bias_r = 0.6066482346250425;

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
    msg.setTimeStamp(0.08022048886767263);
    msg.setSource(51563U);
    msg.setSourceEntity(185U);
    msg.setDestination(4740U);
    msg.setDestinationEntity(198U);
    msg.x = 0.8832661275774503;
    msg.y = 0.08571331492816303;
    msg.z = 0.25993055426607925;
    msg.phi = 0.6479247599829295;
    msg.theta = 0.39858396911562866;
    msg.psi = 0.42017917099398305;
    msg.p = 0.11120740306093324;
    msg.q = 0.5588487917259888;
    msg.r = 0.833767446301284;
    msg.u = 0.586271353743704;
    msg.v = 0.7726241824449335;
    msg.w = 0.917138855390343;
    msg.bias_psi = 0.12349807564765736;
    msg.bias_r = 0.5441034683064644;

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
    msg.setTimeStamp(0.36450141480573284);
    msg.setSource(3597U);
    msg.setSourceEntity(215U);
    msg.setDestination(49344U);
    msg.setDestinationEntity(202U);
    msg.bias_psi = 0.24294913719293776;
    msg.bias_r = 0.8933644114440836;
    msg.cog = 0.03677328637145194;
    msg.cyaw = 0.7405847649308046;
    msg.lbl_rej_level = 0.04071232238024225;
    msg.gps_rej_level = 0.7788002016720424;
    msg.custom_x = 0.6895807303368119;
    msg.custom_y = 0.06958996111736537;
    msg.custom_z = 0.35879829231006155;

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
    msg.setTimeStamp(0.9694034322533904);
    msg.setSource(3609U);
    msg.setSourceEntity(24U);
    msg.setDestination(57154U);
    msg.setDestinationEntity(4U);
    msg.bias_psi = 0.24799068690302284;
    msg.bias_r = 0.45077426460954806;
    msg.cog = 0.6352524757432791;
    msg.cyaw = 0.4003100516222948;
    msg.lbl_rej_level = 0.2728241414445438;
    msg.gps_rej_level = 0.004366570378297796;
    msg.custom_x = 0.8084927777907497;
    msg.custom_y = 0.02755297062096773;
    msg.custom_z = 0.011629218035236644;

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
    msg.setTimeStamp(0.4108162413767449);
    msg.setSource(38658U);
    msg.setSourceEntity(26U);
    msg.setDestination(59285U);
    msg.setDestinationEntity(253U);
    msg.bias_psi = 0.2022534320060846;
    msg.bias_r = 0.5535141643405743;
    msg.cog = 0.12851445341450474;
    msg.cyaw = 0.751933896367374;
    msg.lbl_rej_level = 0.5420837706079489;
    msg.gps_rej_level = 0.05774894878756642;
    msg.custom_x = 0.7637747352646974;
    msg.custom_y = 0.48053077434391134;
    msg.custom_z = 0.7698347545090795;

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
    msg.setTimeStamp(0.045973675257652946);
    msg.setSource(60831U);
    msg.setSourceEntity(100U);
    msg.setDestination(63739U);
    msg.setDestinationEntity(201U);
    msg.utc_time = 0.9532611248578264;
    msg.reason = 221U;

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
    msg.setTimeStamp(0.4201690772336646);
    msg.setSource(56389U);
    msg.setSourceEntity(228U);
    msg.setDestination(65000U);
    msg.setDestinationEntity(11U);
    msg.utc_time = 0.6614803569106401;
    msg.reason = 55U;

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
    msg.setTimeStamp(0.8981703138488181);
    msg.setSource(6510U);
    msg.setSourceEntity(180U);
    msg.setDestination(32818U);
    msg.setDestinationEntity(5U);
    msg.utc_time = 0.8730247695420447;
    msg.reason = 20U;

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
    msg.setTimeStamp(0.719273912136699);
    msg.setSource(21948U);
    msg.setSourceEntity(55U);
    msg.setDestination(44174U);
    msg.setDestinationEntity(23U);
    msg.id = 29U;
    msg.range = 0.6525227033076212;
    msg.acceptance = 182U;

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
    msg.setTimeStamp(0.31002025848987247);
    msg.setSource(19386U);
    msg.setSourceEntity(27U);
    msg.setDestination(57935U);
    msg.setDestinationEntity(65U);
    msg.id = 188U;
    msg.range = 0.5621707751480307;
    msg.acceptance = 152U;

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
    msg.setTimeStamp(0.34968127634162705);
    msg.setSource(49702U);
    msg.setSourceEntity(70U);
    msg.setDestination(31393U);
    msg.setDestinationEntity(211U);
    msg.id = 0U;
    msg.range = 0.8764907865629861;
    msg.acceptance = 45U;

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
    msg.setTimeStamp(0.5437680722503035);
    msg.setSource(10703U);
    msg.setSourceEntity(245U);
    msg.setDestination(44910U);
    msg.setDestinationEntity(242U);
    msg.type = 245U;
    msg.reason = 191U;
    msg.value = 0.8321762163100164;
    msg.timestep = 0.19307917587931045;

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
    msg.setTimeStamp(0.47684836582816936);
    msg.setSource(42103U);
    msg.setSourceEntity(225U);
    msg.setDestination(39760U);
    msg.setDestinationEntity(205U);
    msg.type = 250U;
    msg.reason = 59U;
    msg.value = 0.2724845570062414;
    msg.timestep = 0.05990999640215022;

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
    msg.setTimeStamp(0.45396247779355026);
    msg.setSource(54814U);
    msg.setSourceEntity(85U);
    msg.setDestination(439U);
    msg.setDestinationEntity(151U);
    msg.type = 99U;
    msg.reason = 69U;
    msg.value = 0.11996628911082696;
    msg.timestep = 0.990116968234959;

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
    msg.setTimeStamp(0.7353134201133793);
    msg.setSource(20708U);
    msg.setSourceEntity(116U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(132U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BEQSEQHSAGCUULZOESYPHQZHIBMXSJETTTNXINMVRKYCFEXDGRWHFONKQBSJFQGLAFKRIRTVGISVTCJSWGGBFVVBQULMYXLKHKVPLWLBSDKNYWZZYZAUQGHFAAYKZEKMYJNXWKOMYBOWWLRUVFJPEXOSMOCQRD");
    tmp_msg_0.lat = 0.4040543647449425;
    tmp_msg_0.lon = 0.0780759937251767;
    tmp_msg_0.depth = 0.48709961052647965;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 81U;
    tmp_msg_0.transponder_delay = 199U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4344401908443697;
    msg.y = 0.25887603018151417;
    msg.var_x = 0.8668167503473592;
    msg.var_y = 0.391502308688473;
    msg.distance = 0.5988040535612533;

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
    msg.setTimeStamp(0.9205732909692025);
    msg.setSource(17493U);
    msg.setSourceEntity(201U);
    msg.setDestination(14645U);
    msg.setDestinationEntity(206U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YQNYBSJKBVFIERYISPBFMXOAEQRNHSXNPVSQYIKDOQVNATMHGLDJOSNKCWVWNCBMDFZMLPDUZHOTZVRLACTHIKVYOLZWBPIFEBPFPSTXHFGDDMQCAEZDSGHWKVTSKGWNRAJOGRVPCYUILJUOZWTRCYTTADQOCNXATWOLCQKILUNBSFKZUSEJEEUJJLECI");
    tmp_msg_0.lat = 0.6264721845709985;
    tmp_msg_0.lon = 0.8052434200975501;
    tmp_msg_0.depth = 0.12618020275072117;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 204U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.21266625251698745;
    msg.y = 0.7714233675157472;
    msg.var_x = 0.6673021294480878;
    msg.var_y = 0.35263993747444344;
    msg.distance = 0.058841059251810934;

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
    msg.setTimeStamp(0.2642208605036067);
    msg.setSource(29811U);
    msg.setSourceEntity(3U);
    msg.setDestination(54212U);
    msg.setDestinationEntity(48U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QNHPBQJAJRVTPAXTTMHUTPNCUHRMWNODQJYUQSYEDWCZUFXAZAKEWISKHLEGKJBFSXUZFTPJLKVGJPPUGFMAVAEXQHMSOABSFKHVOUGSOQFDXBNNBZBCIMCCTYZPIRRLFIMGNXDWWGYVLRXQKNKYVSULB");
    tmp_msg_0.lat = 0.3799855378747625;
    tmp_msg_0.lon = 0.780393793768344;
    tmp_msg_0.depth = 0.7491100266204421;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 21U;
    tmp_msg_0.transponder_delay = 96U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8344108861837015;
    msg.y = 0.9213018009939778;
    msg.var_x = 0.5594001787030011;
    msg.var_y = 0.5719151142553248;
    msg.distance = 0.17579460689242687;

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
    msg.setTimeStamp(0.12208066980519183);
    msg.setSource(16805U);
    msg.setSourceEntity(180U);
    msg.setDestination(1789U);
    msg.setDestinationEntity(184U);
    msg.state = 183U;

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
    msg.setTimeStamp(0.8102726029503659);
    msg.setSource(39215U);
    msg.setSourceEntity(253U);
    msg.setDestination(59550U);
    msg.setDestinationEntity(51U);
    msg.state = 245U;

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
    msg.setTimeStamp(0.04432984258878725);
    msg.setSource(28876U);
    msg.setSourceEntity(145U);
    msg.setDestination(45309U);
    msg.setDestinationEntity(143U);
    msg.state = 232U;

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
    msg.setTimeStamp(0.7334897051671915);
    msg.setSource(14805U);
    msg.setSourceEntity(232U);
    msg.setDestination(21701U);
    msg.setDestinationEntity(114U);
    msg.x = 0.13496118307192584;
    msg.y = 0.04046177916226523;
    msg.z = 0.7994404360599079;

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
    msg.setTimeStamp(0.34599655369354165);
    msg.setSource(45296U);
    msg.setSourceEntity(114U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(130U);
    msg.x = 0.24626780543906945;
    msg.y = 0.7124201740757349;
    msg.z = 0.08798199927358108;

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
    msg.setTimeStamp(0.5689106779893908);
    msg.setSource(53448U);
    msg.setSourceEntity(187U);
    msg.setDestination(16351U);
    msg.setDestinationEntity(89U);
    msg.x = 0.04625966851698904;
    msg.y = 0.9542500004195135;
    msg.z = 0.7889362392092838;

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
    msg.setTimeStamp(0.9179878412954301);
    msg.setSource(12698U);
    msg.setSourceEntity(31U);
    msg.setDestination(17099U);
    msg.setDestinationEntity(248U);
    msg.value = 0.587672627646659;

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
    msg.setTimeStamp(0.06039739365432406);
    msg.setSource(20379U);
    msg.setSourceEntity(22U);
    msg.setDestination(29873U);
    msg.setDestinationEntity(243U);
    msg.value = 0.21415429632658667;

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
    msg.setTimeStamp(0.28968267216670385);
    msg.setSource(6316U);
    msg.setSourceEntity(253U);
    msg.setDestination(33980U);
    msg.setDestinationEntity(155U);
    msg.value = 0.7580151792435885;

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
    msg.setTimeStamp(0.5240813990226486);
    msg.setSource(51043U);
    msg.setSourceEntity(247U);
    msg.setDestination(7512U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5455196438041586;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.6481733094558365);
    msg.setSource(57965U);
    msg.setSourceEntity(194U);
    msg.setDestination(14359U);
    msg.setDestinationEntity(68U);
    msg.value = 0.04050202166177441;
    msg.z_units = 30U;

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
    msg.setTimeStamp(0.5975992297606123);
    msg.setSource(17213U);
    msg.setSourceEntity(63U);
    msg.setDestination(456U);
    msg.setDestinationEntity(241U);
    msg.value = 0.07460158764437186;
    msg.z_units = 246U;

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
    msg.setTimeStamp(0.5507123168347922);
    msg.setSource(4392U);
    msg.setSourceEntity(248U);
    msg.setDestination(52969U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3248278263522947;
    msg.speed_units = 176U;

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
    msg.setTimeStamp(0.9145890115133237);
    msg.setSource(16242U);
    msg.setSourceEntity(69U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0926638625774664;
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
    msg.setTimeStamp(0.8516429461790634);
    msg.setSource(50596U);
    msg.setSourceEntity(101U);
    msg.setDestination(23488U);
    msg.setDestinationEntity(114U);
    msg.value = 0.5714154894012532;
    msg.speed_units = 163U;

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
    msg.setTimeStamp(0.5712661142649264);
    msg.setSource(17261U);
    msg.setSourceEntity(154U);
    msg.setDestination(36121U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8030482068976635;

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
    msg.setTimeStamp(0.6584089801916851);
    msg.setSource(11696U);
    msg.setSourceEntity(251U);
    msg.setDestination(20114U);
    msg.setDestinationEntity(33U);
    msg.value = 0.4364838002439989;

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
    msg.setTimeStamp(0.11401125859788042);
    msg.setSource(56153U);
    msg.setSourceEntity(61U);
    msg.setDestination(43784U);
    msg.setDestinationEntity(46U);
    msg.value = 0.4302883577779931;

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
    msg.setTimeStamp(0.29877123240816816);
    msg.setSource(52815U);
    msg.setSourceEntity(136U);
    msg.setDestination(10358U);
    msg.setDestinationEntity(187U);
    msg.value = 0.369895648105494;

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
    msg.setTimeStamp(0.2885846762278499);
    msg.setSource(17387U);
    msg.setSourceEntity(72U);
    msg.setDestination(16480U);
    msg.setDestinationEntity(38U);
    msg.value = 0.6764458216709217;

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
    msg.setTimeStamp(0.13579075672965524);
    msg.setSource(60711U);
    msg.setSourceEntity(210U);
    msg.setDestination(5853U);
    msg.setDestinationEntity(92U);
    msg.value = 0.43977737717075827;

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
    msg.setTimeStamp(0.20803757079430263);
    msg.setSource(63860U);
    msg.setSourceEntity(231U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(45U);
    msg.value = 0.6538203402378207;

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
    msg.setTimeStamp(0.8124598504673327);
    msg.setSource(24586U);
    msg.setSourceEntity(180U);
    msg.setDestination(26467U);
    msg.setDestinationEntity(92U);
    msg.value = 0.6114957033332326;

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
    msg.setTimeStamp(0.698994169281951);
    msg.setSource(48647U);
    msg.setSourceEntity(65U);
    msg.setDestination(24097U);
    msg.setDestinationEntity(237U);
    msg.value = 0.40474790349943524;

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
    msg.setTimeStamp(0.7499084991359672);
    msg.setSource(31060U);
    msg.setSourceEntity(142U);
    msg.setDestination(12171U);
    msg.setDestinationEntity(25U);
    msg.path_ref = 850719382U;
    msg.start_lat = 0.7735814555611996;
    msg.start_lon = 0.651172654088524;
    msg.start_z = 0.2513458952484704;
    msg.start_z_units = 118U;
    msg.end_lat = 0.060240997315528566;
    msg.end_lon = 0.4337877368926074;
    msg.end_z = 0.21898957796841356;
    msg.end_z_units = 4U;
    msg.speed = 0.4862760762652403;
    msg.speed_units = 31U;
    msg.lradius = 0.0933347448865427;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.625133728576432);
    msg.setSource(39524U);
    msg.setSourceEntity(196U);
    msg.setDestination(48143U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 1542794537U;
    msg.start_lat = 0.36768090611920445;
    msg.start_lon = 0.07323002013160551;
    msg.start_z = 0.2798327393032888;
    msg.start_z_units = 42U;
    msg.end_lat = 0.9677209773165514;
    msg.end_lon = 0.9618593651151734;
    msg.end_z = 0.4331141455432086;
    msg.end_z_units = 157U;
    msg.speed = 0.8613549799810498;
    msg.speed_units = 83U;
    msg.lradius = 0.10335539713110542;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.31306709101185815);
    msg.setSource(29652U);
    msg.setSourceEntity(210U);
    msg.setDestination(25397U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 1467784056U;
    msg.start_lat = 0.17771040161103702;
    msg.start_lon = 0.6681735439817468;
    msg.start_z = 0.6013797272236183;
    msg.start_z_units = 76U;
    msg.end_lat = 0.49647308832026626;
    msg.end_lon = 0.49606257658864417;
    msg.end_z = 0.6828169906866834;
    msg.end_z_units = 102U;
    msg.speed = 0.12038279767723337;
    msg.speed_units = 20U;
    msg.lradius = 0.011498445525110035;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.978952634713052);
    msg.setSource(26465U);
    msg.setSourceEntity(217U);
    msg.setDestination(41960U);
    msg.setDestinationEntity(233U);
    msg.x = 0.6693833430581955;
    msg.y = 0.06407728034609972;
    msg.z = 0.5042088356883951;
    msg.k = 0.5401427879350132;
    msg.m = 0.020627206123588926;
    msg.n = 0.5111824517116675;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.1916135715860291);
    msg.setSource(15489U);
    msg.setSourceEntity(178U);
    msg.setDestination(55121U);
    msg.setDestinationEntity(209U);
    msg.x = 0.9034414944573663;
    msg.y = 0.8412757685358603;
    msg.z = 0.37872411680224327;
    msg.k = 0.94814131307453;
    msg.m = 0.24545392924732956;
    msg.n = 0.0449528992044439;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.6006780601596569);
    msg.setSource(9236U);
    msg.setSourceEntity(203U);
    msg.setDestination(34363U);
    msg.setDestinationEntity(8U);
    msg.x = 0.5975319134227558;
    msg.y = 0.9447594337203455;
    msg.z = 0.7845275461906656;
    msg.k = 0.2416445685095454;
    msg.m = 0.5330917819787891;
    msg.n = 0.7150938317867573;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.4382635098990356);
    msg.setSource(28612U);
    msg.setSourceEntity(143U);
    msg.setDestination(32294U);
    msg.setDestinationEntity(193U);
    msg.value = 0.05020395369873221;

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
    msg.setTimeStamp(0.90255827384906);
    msg.setSource(43764U);
    msg.setSourceEntity(68U);
    msg.setDestination(8202U);
    msg.setDestinationEntity(248U);
    msg.value = 0.4635988674656534;

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
    msg.setTimeStamp(0.7048486130724819);
    msg.setSource(27331U);
    msg.setSourceEntity(18U);
    msg.setDestination(689U);
    msg.setDestinationEntity(148U);
    msg.value = 0.714206220667041;

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
    msg.setTimeStamp(0.6814516401927814);
    msg.setSource(38658U);
    msg.setSourceEntity(243U);
    msg.setDestination(63892U);
    msg.setDestinationEntity(199U);
    msg.u = 0.12243629459533878;
    msg.v = 0.6382641327741775;
    msg.w = 0.7401301575067426;
    msg.p = 0.2136829846181011;
    msg.q = 0.3989994524611421;
    msg.r = 0.8014145724197829;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.14940301320632965);
    msg.setSource(21760U);
    msg.setSourceEntity(222U);
    msg.setDestination(16645U);
    msg.setDestinationEntity(21U);
    msg.u = 0.5994355132430625;
    msg.v = 0.4092211985238129;
    msg.w = 0.09463658816851106;
    msg.p = 0.43920879619783637;
    msg.q = 0.9102388195756493;
    msg.r = 0.5906932664619696;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.7435878432518757);
    msg.setSource(43934U);
    msg.setSourceEntity(62U);
    msg.setDestination(46612U);
    msg.setDestinationEntity(3U);
    msg.u = 0.2798387010259178;
    msg.v = 0.7655511149998264;
    msg.w = 0.005559296917957646;
    msg.p = 0.37822598041109556;
    msg.q = 0.476714738584199;
    msg.r = 0.0023587590176618045;
    msg.flags = 225U;

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
    msg.setTimeStamp(0.6206450047857242);
    msg.setSource(57540U);
    msg.setSourceEntity(63U);
    msg.setDestination(38760U);
    msg.setDestinationEntity(201U);
    msg.path_ref = 2559633614U;
    msg.start_lat = 0.37464601947587395;
    msg.start_lon = 0.5879120390562754;
    msg.start_z = 0.5080119898363583;
    msg.start_z_units = 144U;
    msg.end_lat = 0.382331940634939;
    msg.end_lon = 0.136440756491221;
    msg.end_z = 0.7329924786225269;
    msg.end_z_units = 192U;
    msg.lradius = 0.403988845000816;
    msg.flags = 168U;
    msg.x = 0.723759669876691;
    msg.y = 0.517524753899648;
    msg.z = 0.34033562750881996;
    msg.vx = 0.2543564927876002;
    msg.vy = 0.6228814776561751;
    msg.vz = 0.7790462644418794;
    msg.course_error = 0.7897071186589812;
    msg.eta = 59290U;

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
    msg.setTimeStamp(0.8916156457538769);
    msg.setSource(62689U);
    msg.setSourceEntity(115U);
    msg.setDestination(27369U);
    msg.setDestinationEntity(0U);
    msg.path_ref = 2015631176U;
    msg.start_lat = 0.3652469077403252;
    msg.start_lon = 0.6938877959687004;
    msg.start_z = 0.2033424682847269;
    msg.start_z_units = 153U;
    msg.end_lat = 0.32818825387047246;
    msg.end_lon = 0.508009609447912;
    msg.end_z = 0.3203292683708908;
    msg.end_z_units = 108U;
    msg.lradius = 0.22714746909354533;
    msg.flags = 230U;
    msg.x = 0.31216924980599603;
    msg.y = 0.4910925578337182;
    msg.z = 0.0838552664813722;
    msg.vx = 0.6552762924707255;
    msg.vy = 0.7746297199803213;
    msg.vz = 0.9573299261331445;
    msg.course_error = 0.829267070836008;
    msg.eta = 61236U;

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
    msg.setTimeStamp(0.682221159515323);
    msg.setSource(3313U);
    msg.setSourceEntity(187U);
    msg.setDestination(35804U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 2552732728U;
    msg.start_lat = 0.2074021641527385;
    msg.start_lon = 0.7507004161801032;
    msg.start_z = 0.5445867991766032;
    msg.start_z_units = 140U;
    msg.end_lat = 0.082536998748591;
    msg.end_lon = 0.4298745230521457;
    msg.end_z = 0.06828424755102558;
    msg.end_z_units = 54U;
    msg.lradius = 0.6132707076933275;
    msg.flags = 240U;
    msg.x = 0.04186625602355698;
    msg.y = 0.3081792245599648;
    msg.z = 0.2489153872079628;
    msg.vx = 0.1659549338485976;
    msg.vy = 0.014167545257821046;
    msg.vz = 0.32808131751626024;
    msg.course_error = 0.0004431516309307826;
    msg.eta = 60835U;

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
    msg.setTimeStamp(0.22244759464853336);
    msg.setSource(38191U);
    msg.setSourceEntity(37U);
    msg.setDestination(25631U);
    msg.setDestinationEntity(142U);
    msg.k = 0.9293188330386946;
    msg.m = 0.7780844255342453;
    msg.n = 0.643798306421057;

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
    msg.setTimeStamp(0.2659712092232871);
    msg.setSource(54800U);
    msg.setSourceEntity(22U);
    msg.setDestination(12478U);
    msg.setDestinationEntity(96U);
    msg.k = 0.3707270427120646;
    msg.m = 0.7290149779276949;
    msg.n = 0.18656797479797582;

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
    msg.setTimeStamp(0.913502336807627);
    msg.setSource(16320U);
    msg.setSourceEntity(41U);
    msg.setDestination(45544U);
    msg.setDestinationEntity(50U);
    msg.k = 0.6919072221909989;
    msg.m = 0.21744577309600788;
    msg.n = 0.02002440692125218;

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
    msg.setTimeStamp(0.06887715131356098);
    msg.setSource(10269U);
    msg.setSourceEntity(164U);
    msg.setDestination(29911U);
    msg.setDestinationEntity(221U);
    msg.p = 0.5243994738369562;
    msg.i = 0.39947165088399084;
    msg.d = 0.741416914755837;
    msg.a = 0.5923473529393669;

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
    msg.setTimeStamp(0.6438402517485705);
    msg.setSource(27937U);
    msg.setSourceEntity(219U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(178U);
    msg.p = 0.1943420277088428;
    msg.i = 0.6340823304471046;
    msg.d = 0.08349597875320725;
    msg.a = 0.37034717586663946;

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
    msg.setTimeStamp(0.31619176966792306);
    msg.setSource(9912U);
    msg.setSourceEntity(242U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(167U);
    msg.p = 0.9804341404357738;
    msg.i = 0.896273886934946;
    msg.d = 0.24797829270626182;
    msg.a = 0.9298893381960869;

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
    msg.setTimeStamp(0.7737499294993592);
    msg.setSource(34690U);
    msg.setSourceEntity(219U);
    msg.setDestination(32U);
    msg.setDestinationEntity(162U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.8696521300487523);
    msg.setSource(30856U);
    msg.setSourceEntity(205U);
    msg.setDestination(53816U);
    msg.setDestinationEntity(209U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.28888598777951624);
    msg.setSource(38141U);
    msg.setSourceEntity(183U);
    msg.setDestination(17629U);
    msg.setDestinationEntity(87U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.6823370622985306);
    msg.setSource(9354U);
    msg.setSourceEntity(100U);
    msg.setDestination(22970U);
    msg.setDestinationEntity(171U);
    msg.timeout = 24216U;
    msg.lat = 0.48870340138650914;
    msg.lon = 0.7640599154741181;
    msg.z = 0.3085053989164608;
    msg.z_units = 98U;
    msg.speed = 0.2316184352458983;
    msg.speed_units = 132U;
    msg.roll = 0.2829941413770707;
    msg.pitch = 0.5730370482776281;
    msg.yaw = 0.19784557150030868;
    msg.custom.assign("CIOCXYGRMXVNLAPCTLMRULGMUPZBBAXJRLLAQPCSOWTVZYVMUPSQKSEFUWDDLFJXCWBHTZFBRYMDGWWSKTLXJKPGSIAKWPME");

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
    msg.setTimeStamp(0.3884552086770784);
    msg.setSource(14179U);
    msg.setSourceEntity(242U);
    msg.setDestination(16281U);
    msg.setDestinationEntity(196U);
    msg.timeout = 45340U;
    msg.lat = 0.9364929805155509;
    msg.lon = 0.09107467686047954;
    msg.z = 0.13126544596536027;
    msg.z_units = 132U;
    msg.speed = 0.2508852922250965;
    msg.speed_units = 90U;
    msg.roll = 0.6232909135742936;
    msg.pitch = 0.703403728056709;
    msg.yaw = 0.9778069967584287;
    msg.custom.assign("RBWGQKZYXKRDWUXXWMMDIOTEXZGFRCMRJOCZNT");

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
    msg.setTimeStamp(0.9181301092266362);
    msg.setSource(2774U);
    msg.setSourceEntity(229U);
    msg.setDestination(53836U);
    msg.setDestinationEntity(170U);
    msg.timeout = 18596U;
    msg.lat = 0.7073356129076258;
    msg.lon = 0.9834411745040172;
    msg.z = 0.40093184648967484;
    msg.z_units = 185U;
    msg.speed = 0.04904697008914838;
    msg.speed_units = 13U;
    msg.roll = 0.6240356116772285;
    msg.pitch = 0.8156624559299952;
    msg.yaw = 0.5275175662244367;
    msg.custom.assign("SLJQWHWKABEZJTNVOZXMSLZMNUNCDLIHHF");

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
    msg.setTimeStamp(0.014679143414494056);
    msg.setSource(18230U);
    msg.setSourceEntity(23U);
    msg.setDestination(54617U);
    msg.setDestinationEntity(66U);
    msg.timeout = 31629U;
    msg.lat = 0.5382186990681211;
    msg.lon = 0.7798530183128491;
    msg.z = 0.14267195617088324;
    msg.z_units = 165U;
    msg.speed = 0.47390891140726876;
    msg.speed_units = 199U;
    msg.duration = 7985U;
    msg.radius = 0.3504443862682949;
    msg.flags = 122U;
    msg.custom.assign("CLXJOCZKQXEQNQHCLIFRWAIKVSQZVURWKNHMOCAGNFAAFXLHHLSDBAZGTPMMBUDQTJFZEPDGLALUKGSNOOXISZAIVSILZJSWPBQNBFEQWVPJHAV");

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
    msg.setTimeStamp(0.9601711115327709);
    msg.setSource(61412U);
    msg.setSourceEntity(90U);
    msg.setDestination(61223U);
    msg.setDestinationEntity(120U);
    msg.timeout = 29705U;
    msg.lat = 0.8720057402526913;
    msg.lon = 0.884005516280761;
    msg.z = 0.4903892617366399;
    msg.z_units = 169U;
    msg.speed = 0.7090087799231022;
    msg.speed_units = 150U;
    msg.duration = 61739U;
    msg.radius = 0.06278791963961594;
    msg.flags = 177U;
    msg.custom.assign("JMOWRCQYCKIBGGGAEKWBQKYXQEMWTYSSMVURJXAOAVHECRYEXGFKYUGWJDEOLDPCKHTVSHZZIZURMNNSURLKHGQNTWQMCWTALNVXGXONVBBTLIMFRZOBILIADLIRDMHDOXPPKVZOUHXWAQQFIZHXPQGTADNEYLTCTWOFPHJLNPGJYTZIBFJNZUFRYZMPBDBQNQKNCSUKEBTLFBZIASECJWCUIDSUPKSYUJEL");

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
    msg.setTimeStamp(0.369818387166836);
    msg.setSource(38197U);
    msg.setSourceEntity(98U);
    msg.setDestination(61223U);
    msg.setDestinationEntity(110U);
    msg.timeout = 5449U;
    msg.lat = 0.09462877408849879;
    msg.lon = 0.4926830656380714;
    msg.z = 0.9541633090644916;
    msg.z_units = 73U;
    msg.speed = 0.8540257630927117;
    msg.speed_units = 247U;
    msg.duration = 4514U;
    msg.radius = 0.6861716243177454;
    msg.flags = 166U;
    msg.custom.assign("TSMBACXLPNDRYVXVNWFJ");

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
    msg.setTimeStamp(0.9926283781350749);
    msg.setSource(2610U);
    msg.setSourceEntity(181U);
    msg.setDestination(50313U);
    msg.setDestinationEntity(124U);
    msg.custom.assign("ULEDBFYOIXSHIANSKRLWPAFQNSKAKPOVAXKJLAAQVCGTFNRGZHCRPSZCIDQCUDZUHECRHZJMHWKDGPRBVKLDAETCTBKLONJEGFVQJDJTDURQXZCEHMXTIJMSVJBEEGJNFCKTUDNJVFSSVEOIMFYGEOTK");

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
    msg.setTimeStamp(0.3537292014733644);
    msg.setSource(40100U);
    msg.setSourceEntity(5U);
    msg.setDestination(42807U);
    msg.setDestinationEntity(20U);
    msg.custom.assign("RREXCFTHEJCMJCUDRWXXPFDWOEAGLXFSFRNNIDGEASJAAWNBVLQSBOZBELBXGVJQRZPRFTOMPUIKSWAHCCHHDUTNYGHWIYUBHUNYREFKKQNQNHLAIDYJKBZCTRSQZMNDIGYQKWCRQTZNGOIDVBELIKSQPFVLHTJKARUJUMLWFWLMYODOFPXSBTKIOTVMBGKEVFOAVUYPXJBCTZWQGXZMWVXIANDZPQGD");

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
    msg.setTimeStamp(0.12678710040553665);
    msg.setSource(63880U);
    msg.setSourceEntity(238U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("YFWVMEXMIDUOFNPQGMVCXXERXIGFLGNFDWTTKQLLWPRUHSPBNVNSSGVQZPDUZYIKIPUASRJIPOJWMPQYYTSIEHUDBVBTNSWIXSDHQYIZKVLGALCQTOQACNZJKHWKCXZTYEMXEXBBPARORSRWZJSLAHYKJAJLXBCZAVWQUFGUCQWGNJOJVJGFDOTKUUBYEZTDINRPMVKDKHFDHCGNKNOAGRFZLBRZYMAMEEXUJYVADMIFPHMCEOOWBCTEBQC");

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
    msg.setTimeStamp(0.2795316826533262);
    msg.setSource(35531U);
    msg.setSourceEntity(232U);
    msg.setDestination(63727U);
    msg.setDestinationEntity(101U);
    msg.timeout = 28808U;
    msg.lat = 0.8551566445493827;
    msg.lon = 0.483078574259067;
    msg.z = 0.245274904892955;
    msg.z_units = 158U;
    msg.duration = 64135U;
    msg.speed = 0.26260550485603384;
    msg.speed_units = 155U;
    msg.type = 52U;
    msg.radius = 0.6329657103925402;
    msg.length = 0.5230986875124595;
    msg.bearing = 0.7309734798710527;
    msg.direction = 103U;
    msg.custom.assign("QUTHSSJTTBOCKTADTGHFCRKDCWYTNIUCCRYWXEKNEADVENPIRUJF");

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
    msg.setTimeStamp(0.9076886100328658);
    msg.setSource(28675U);
    msg.setSourceEntity(46U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(52U);
    msg.timeout = 49408U;
    msg.lat = 0.9865839787127162;
    msg.lon = 0.955387677129803;
    msg.z = 0.8640881404090698;
    msg.z_units = 251U;
    msg.duration = 61175U;
    msg.speed = 0.9151582867200017;
    msg.speed_units = 90U;
    msg.type = 239U;
    msg.radius = 0.27447643254256926;
    msg.length = 0.22335380023049434;
    msg.bearing = 0.5300429924015244;
    msg.direction = 76U;
    msg.custom.assign("PNMUWVONAZKFFCMQXSVPIZTGATSYVBYAIKSOHBHTXUTSHK");

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
    msg.setTimeStamp(0.20961125981735873);
    msg.setSource(14377U);
    msg.setSourceEntity(247U);
    msg.setDestination(27738U);
    msg.setDestinationEntity(234U);
    msg.timeout = 13521U;
    msg.lat = 0.49087744267115807;
    msg.lon = 0.5019415502839136;
    msg.z = 0.968209271247216;
    msg.z_units = 123U;
    msg.duration = 52728U;
    msg.speed = 0.644490749304825;
    msg.speed_units = 100U;
    msg.type = 32U;
    msg.radius = 0.4475957956866248;
    msg.length = 0.934628885973889;
    msg.bearing = 0.06954526564197894;
    msg.direction = 105U;
    msg.custom.assign("KMCVYZVOHPONJSPUSNDAPWCBZYGJNHNCFITTUZDDWLUMSXE");

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
    msg.setTimeStamp(0.42052085928700234);
    msg.setSource(49040U);
    msg.setSourceEntity(28U);
    msg.setDestination(10130U);
    msg.setDestinationEntity(181U);
    msg.duration = 26676U;
    msg.custom.assign("BZTCWXRZUPLDKMLCOJDUASRPGRIZMXISVTWPGWTOWMUOHKNNPDAWYSDDQHRAJQTMLASEZFFUPOQOLEQNVITAWQOHVFUNXJMXOXFYGUXHVZCYMLEYXKWNNFSSQWENKTLFJWCBRZQYEMPBQZZMUHDPPEVKGSEVGCTFCDYKDOJAMUYBOAHLKVRTWQSARKKJGL");

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
    msg.setTimeStamp(0.4957875404406441);
    msg.setSource(31149U);
    msg.setSourceEntity(16U);
    msg.setDestination(25323U);
    msg.setDestinationEntity(107U);
    msg.duration = 56472U;
    msg.custom.assign("BQATWLOUEZOCXNJKSKVAZSBNMMU");

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
    msg.setTimeStamp(0.05571989706959424);
    msg.setSource(60017U);
    msg.setSourceEntity(165U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(46U);
    msg.duration = 45985U;
    msg.custom.assign("WDVOHLSUTSSXKKHOKWFXCSFEGDAFVZVVXUIJZGECGDVLTBBGYYOAPMSLKVEMANMSMYBEQPGZHKYVZRDFBAORCFF");

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
    msg.setTimeStamp(0.034249154258809256);
    msg.setSource(10431U);
    msg.setSourceEntity(114U);
    msg.setDestination(12380U);
    msg.setDestinationEntity(244U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.4200694518610868;
    msg.control.set(tmp_msg_0);
    msg.duration = 11168U;
    msg.custom.assign("MQONJPWFQBBSRVGPQQKBPLVXXUHJMONKJXFCTBXHZOWKEHITUWYIHQIEXZBCGYDYVGKNQENARVGHNSNRGDBZISURVAVMNTNQZPZMBRAAVLTFAXCCWUPUVUGCCAHAUQRGKWYQBOMPDVIOHLMAZNWJYLTUPRTSOELKFFYKCKBDXWSIDIHZPEJFGECRMSDWXIDMEPOMPMLKVIZZQSJJOWHLLEEYRGJTGTXZXAEWYFUSLSYFNDASJDDHOTKCTUIJ");

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
    msg.setTimeStamp(0.9702852252798484);
    msg.setSource(36091U);
    msg.setSourceEntity(55U);
    msg.setDestination(17731U);
    msg.setDestinationEntity(94U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.623712571403873;
    tmp_msg_0.speed_units = 108U;
    msg.control.set(tmp_msg_0);
    msg.duration = 21236U;
    msg.custom.assign("KFPNFWJZFPQFRRDPJMHXYHXWFVWABFXABLZOFLUVGURTMDXGQEYQCTIOGHYSKSNBVJLRKASJNKXXWAOBHJAMURFEDCBUTZMFKYRTDEHTECVKTTAGHKDRQKYDCGMWWOVMLQVGEZUTPCIXJIQBHVONJBOUXNZNYHKTACUCRLVQIJMSOOBXEWYIZBPSAVWTQPIEMUWAMZJGLLWLYY");

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
    msg.setTimeStamp(0.7155128880943322);
    msg.setSource(759U);
    msg.setSourceEntity(211U);
    msg.setDestination(45625U);
    msg.setDestinationEntity(32U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.846085959728188;
    msg.control.set(tmp_msg_0);
    msg.duration = 56936U;
    msg.custom.assign("MTLZFCZVYTOABUHYQQKXYGTZPLAPEUQVPJBLJNZCHSRHDNPCKJWBNOVDDGHREOBBFXOYSMPWLWFGAWMZGEMCKAEDFJUFMJWTQVFKRUDPTRJFISEOXSVZAQPKERZXOMKJDLATU");

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
    msg.setTimeStamp(0.5250675931627375);
    msg.setSource(17378U);
    msg.setSourceEntity(87U);
    msg.setDestination(11725U);
    msg.setDestinationEntity(8U);
    msg.timeout = 58435U;
    msg.lat = 0.4732983119466182;
    msg.lon = 0.19463031772336903;
    msg.z = 0.21627114913527223;
    msg.z_units = 123U;
    msg.speed = 0.1656581089267476;
    msg.speed_units = 126U;
    msg.bearing = 0.554615709566278;
    msg.cross_angle = 0.7589632671393115;
    msg.width = 0.5531470424166856;
    msg.length = 0.07427489171315216;
    msg.hstep = 0.2980010122482968;
    msg.coff = 56U;
    msg.alternation = 37U;
    msg.flags = 30U;
    msg.custom.assign("CMAJXRGDIOEBVXKRFDXQJBGXRLGZXAYBSRIETNEZMWJQHGDWALELQCNQPNCBLDKGXTUHRCSMJDWQVBPWLOKOQWLKBBYSUYZCZZOPHSSMVA");

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
    msg.setTimeStamp(0.12624911701143005);
    msg.setSource(27360U);
    msg.setSourceEntity(78U);
    msg.setDestination(9287U);
    msg.setDestinationEntity(51U);
    msg.timeout = 11171U;
    msg.lat = 0.591939311298701;
    msg.lon = 0.6425490097663944;
    msg.z = 0.00878112753733784;
    msg.z_units = 99U;
    msg.speed = 0.1645699992566304;
    msg.speed_units = 85U;
    msg.bearing = 0.0443829087739972;
    msg.cross_angle = 0.9331229693488113;
    msg.width = 0.2689505072080032;
    msg.length = 0.07896744117047294;
    msg.hstep = 0.17556621339092593;
    msg.coff = 233U;
    msg.alternation = 243U;
    msg.flags = 61U;
    msg.custom.assign("CTNHWNSVTEQCWFEGGLOM");

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
    msg.setTimeStamp(0.4805445286126938);
    msg.setSource(43909U);
    msg.setSourceEntity(107U);
    msg.setDestination(62460U);
    msg.setDestinationEntity(121U);
    msg.timeout = 11380U;
    msg.lat = 0.4843480977815656;
    msg.lon = 0.7609265882279065;
    msg.z = 0.5804408509445563;
    msg.z_units = 215U;
    msg.speed = 0.4213060684582993;
    msg.speed_units = 221U;
    msg.bearing = 0.5652620627901848;
    msg.cross_angle = 0.021724563267227825;
    msg.width = 0.43542879205496876;
    msg.length = 0.4305664228319658;
    msg.hstep = 0.6236790934119468;
    msg.coff = 192U;
    msg.alternation = 234U;
    msg.flags = 116U;
    msg.custom.assign("XLAUJNNIZCPCVMXJBMAWPEVIJHUKNDATPVTYMZAWJFBYPTYLVKISBTWQUYBATVWWYXAHDKHGOSDCKWQZSUILNYQPTHUHRJDXHRJLRHMSQKEOORCFDXOAESS");

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
    msg.setTimeStamp(0.48660038111955495);
    msg.setSource(15815U);
    msg.setSourceEntity(149U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(190U);
    msg.timeout = 48603U;
    msg.lat = 0.29244779883043914;
    msg.lon = 0.49160838507572135;
    msg.z = 0.33998601408199347;
    msg.z_units = 105U;
    msg.speed = 0.29064915571150907;
    msg.speed_units = 33U;
    msg.custom.assign("AEDEYULIMFCSJZXEJMRSDHZXHICRTGZLWFKNAKNYTJRAQHLUKWJJWLXTWBGRRMQVFVKJUERYWDVVYIHASDEDPPPEYLJNCOVZCPAOXNINFOFARGPYEIFMIGRPSJXJBPOCZGNBAQ");

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
    msg.setTimeStamp(0.9568274900105844);
    msg.setSource(22408U);
    msg.setSourceEntity(106U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(62U);
    msg.timeout = 61161U;
    msg.lat = 0.05954162654700146;
    msg.lon = 0.7404569074605666;
    msg.z = 0.9447457842066947;
    msg.z_units = 174U;
    msg.speed = 0.11368679856665054;
    msg.speed_units = 64U;
    msg.custom.assign("JCKYBAVEARLXZ");

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
    msg.setTimeStamp(0.8911688490195326);
    msg.setSource(1819U);
    msg.setSourceEntity(39U);
    msg.setDestination(25233U);
    msg.setDestinationEntity(151U);
    msg.timeout = 47437U;
    msg.lat = 0.045003978604328476;
    msg.lon = 0.028673970541185145;
    msg.z = 0.26735016192596894;
    msg.z_units = 162U;
    msg.speed = 0.2621399224926917;
    msg.speed_units = 3U;
    msg.custom.assign("BWSFOPLCIWHFCUBRKITWVMFLHCDWGQNNMZQQECGHPMSQSAISTRARBOKABJBSVHUVPQBDMVXJPEK");

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
    msg.setTimeStamp(0.6400562750316976);
    msg.setSource(50370U);
    msg.setSourceEntity(30U);
    msg.setDestination(24466U);
    msg.setDestinationEntity(52U);
    msg.x = 0.11826059740111683;
    msg.y = 0.3498465523965826;
    msg.z = 0.31901992611835106;

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
    msg.setTimeStamp(0.20338742959968192);
    msg.setSource(689U);
    msg.setSourceEntity(144U);
    msg.setDestination(40708U);
    msg.setDestinationEntity(60U);
    msg.x = 0.0386453425443376;
    msg.y = 0.35061799491156176;
    msg.z = 0.3848480710095932;

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
    msg.setTimeStamp(0.7350484161962787);
    msg.setSource(42883U);
    msg.setSourceEntity(226U);
    msg.setDestination(7486U);
    msg.setDestinationEntity(89U);
    msg.x = 0.5061031600574318;
    msg.y = 0.0998515365967454;
    msg.z = 0.08120659769673166;

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
    msg.setTimeStamp(0.48858163607459437);
    msg.setSource(44997U);
    msg.setSourceEntity(222U);
    msg.setDestination(45967U);
    msg.setDestinationEntity(184U);
    msg.timeout = 62988U;
    msg.lat = 0.03982243954382858;
    msg.lon = 0.9360441483313207;
    msg.z = 0.17858362024075114;
    msg.z_units = 42U;
    msg.amplitude = 0.8414159581062667;
    msg.pitch = 0.8381186547069162;
    msg.speed = 0.8743247198455212;
    msg.speed_units = 38U;
    msg.custom.assign("BLPSLXQISWOKTKWGFMNKFKYEVJHTIYXTMWDMPAYOMDNAUKUBWHLGVDGOFLRBJKCLXFEBERPPIEMFIFVOQGZHRCXRJWVVPAZEKDRDZADSXQUMCSMYLULEXIXGJWUTXQPORMUNQSHEDSIXCONTSBWYITFUYUCEUVOXPYLENHGMOIJRNUGTHLKZZJSTWFRCYGJCBZZHGRFGHHIBAWF");

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
    msg.setTimeStamp(0.8883115057908393);
    msg.setSource(32890U);
    msg.setSourceEntity(162U);
    msg.setDestination(29661U);
    msg.setDestinationEntity(186U);
    msg.timeout = 58124U;
    msg.lat = 0.5467403308201805;
    msg.lon = 0.7382875124289741;
    msg.z = 0.40596941394563446;
    msg.z_units = 16U;
    msg.amplitude = 0.6401893874742328;
    msg.pitch = 0.8252872773532983;
    msg.speed = 0.4248670382656823;
    msg.speed_units = 32U;
    msg.custom.assign("IMYCXWPQRJCLQTAXZLKRPTHITNBRYSNDMVFITISWMNJHMDXTNEXSJSATQBYNXUZFOVVAWLHKHBVJRFUBCXRVKWQLPJICOBXUKGGEDWVCZSFGQFREAWEABEJQKJDDMTCIWPAAADISLGMDSMEGUKHADJG");

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
    msg.setTimeStamp(0.9425918748662746);
    msg.setSource(30731U);
    msg.setSourceEntity(232U);
    msg.setDestination(50782U);
    msg.setDestinationEntity(107U);
    msg.timeout = 10939U;
    msg.lat = 0.00267042682809826;
    msg.lon = 0.3353850669447631;
    msg.z = 0.9926741759217331;
    msg.z_units = 67U;
    msg.amplitude = 0.6056676675242291;
    msg.pitch = 0.49725916562777905;
    msg.speed = 0.37568026803369436;
    msg.speed_units = 210U;
    msg.custom.assign("WHQXLUVKIPAEJUDOBUCDKGWMTZLFXRQJPLOICIGVUWQLDQTWRTSBDWTDEVFPQLIPXLFWWSLKGBCBATHCUCSKUIGEXRZYJQJUBIMTGNDYPAHOZPVNDALUYABTAXXZIFQRSRKWRCJESMGSMPAUNNNXNIGSOQKKYDMVZBZNJVMEIPMTXYSACFYWOCGRMEFBKNYJVZOGZMBQRPVFVYMJYHHDFZELJFCR");

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
    msg.setTimeStamp(0.730513323022118);
    msg.setSource(19334U);
    msg.setSourceEntity(206U);
    msg.setDestination(63736U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.9333204350300934);
    msg.setSource(2473U);
    msg.setSourceEntity(1U);
    msg.setDestination(3941U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.8253539361693827);
    msg.setSource(57088U);
    msg.setSourceEntity(128U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.7249829744716692);
    msg.setSource(56593U);
    msg.setSourceEntity(201U);
    msg.setDestination(34457U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.14772487389611544;
    msg.lon = 0.6188029761760623;
    msg.z = 0.17253597458995906;
    msg.z_units = 140U;
    msg.radius = 0.2867387875883506;
    msg.duration = 55071U;
    msg.speed = 0.5016602235107822;
    msg.speed_units = 166U;
    msg.custom.assign("FZONOTHTZAWOADGVFFSCYIDANYJLCTYUGLBXBFPISJKQLP");

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
    msg.setTimeStamp(0.4681348166230842);
    msg.setSource(52426U);
    msg.setSourceEntity(97U);
    msg.setDestination(20112U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.502132885072554;
    msg.lon = 0.814682880845867;
    msg.z = 0.7367497579899552;
    msg.z_units = 181U;
    msg.radius = 0.6420659467807256;
    msg.duration = 10846U;
    msg.speed = 0.12343473207121414;
    msg.speed_units = 163U;
    msg.custom.assign("YKURBFNMUBSAJDQRIEAUUMFDHZGTLTQLQKRJWXHPNALSSOIVMLOZHWGE");

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
    msg.setTimeStamp(0.3626302029040802);
    msg.setSource(45690U);
    msg.setSourceEntity(166U);
    msg.setDestination(49390U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.6475109165270136;
    msg.lon = 0.965100193232643;
    msg.z = 0.12578475396788125;
    msg.z_units = 83U;
    msg.radius = 0.5545423525999359;
    msg.duration = 10201U;
    msg.speed = 0.6121054140467039;
    msg.speed_units = 185U;
    msg.custom.assign("FEQIPWXODGKGCCLIQ");

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
    msg.setTimeStamp(0.2643224006744942);
    msg.setSource(46005U);
    msg.setSourceEntity(130U);
    msg.setDestination(39714U);
    msg.setDestinationEntity(198U);
    msg.timeout = 37001U;
    msg.flags = 82U;
    msg.lat = 0.11020465605716911;
    msg.lon = 0.28943387034448476;
    msg.start_z = 0.8313937298656414;
    msg.start_z_units = 135U;
    msg.end_z = 0.19562596092636753;
    msg.end_z_units = 156U;
    msg.radius = 0.2184749356195701;
    msg.speed = 0.922856500458518;
    msg.speed_units = 92U;
    msg.custom.assign("YUKPRRDBMIYAMBPUD");

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
    msg.setTimeStamp(0.07768821077995769);
    msg.setSource(7936U);
    msg.setSourceEntity(149U);
    msg.setDestination(18537U);
    msg.setDestinationEntity(176U);
    msg.timeout = 17587U;
    msg.flags = 238U;
    msg.lat = 0.48633614626517574;
    msg.lon = 0.37863975057073807;
    msg.start_z = 0.6787004481831205;
    msg.start_z_units = 60U;
    msg.end_z = 0.22678299526408152;
    msg.end_z_units = 27U;
    msg.radius = 0.035778754737601726;
    msg.speed = 0.48516363521035477;
    msg.speed_units = 178U;
    msg.custom.assign("BVNFEAPFIABVFSFFYVNYKJHDLDWBIWLAUHUWFKZRPKVVOWQBTJZQZMZ");

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
    msg.setTimeStamp(0.784943934019443);
    msg.setSource(17809U);
    msg.setSourceEntity(193U);
    msg.setDestination(9972U);
    msg.setDestinationEntity(112U);
    msg.timeout = 50547U;
    msg.flags = 170U;
    msg.lat = 0.7800686120907413;
    msg.lon = 0.07975082875601447;
    msg.start_z = 0.48421542823453345;
    msg.start_z_units = 200U;
    msg.end_z = 0.8885548128507282;
    msg.end_z_units = 21U;
    msg.radius = 0.8047066256433941;
    msg.speed = 0.26333922850104974;
    msg.speed_units = 121U;
    msg.custom.assign("QHKKAJAGVNFAHDCGNJJJHCXBVBMIKRTIYWKEAFBKNQJTZDZGGEQXJDYNSNFYYRBSUHOHDWRLMUIBZLGXTVVIHPBOTRQHPALFMAQPEKPDGMCUENOVSTVMLFUWXMQZBBKCAAIDSBDWPSFRPTEYOZFTLTOBNLAWJZQXFESMTFICUGDCQSPSCLUESZMYMEPR");

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
    msg.setTimeStamp(0.574717953544225);
    msg.setSource(32512U);
    msg.setSourceEntity(248U);
    msg.setDestination(37650U);
    msg.setDestinationEntity(87U);
    msg.timeout = 46643U;
    msg.lat = 0.740879881804588;
    msg.lon = 0.27256706147784426;
    msg.z = 0.026893646237323487;
    msg.z_units = 183U;
    msg.speed = 0.1746949159658755;
    msg.speed_units = 183U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1721311817650808;
    tmp_msg_0.y = 0.042657534695860866;
    tmp_msg_0.z = 0.8037528875129533;
    tmp_msg_0.t = 0.2288674872308185;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QIZNVADSIFOCRHCLLLTODKKYRGFWCXPBXHQLZRRYTIJJFRVFVLNEAIHBRYPVBZPSGJXDHHJYXEQMQLTOBHAPQIVJTXGPAOPDTLNIBUWNZMCZIWRPOMGNUFYMPZPIAGMQEEFVIXUYVCRZAXRUHKWCKNSDBWVSKEZGLSQJJFDHYBLEVNFYZFYNOQLDSRCGTASTTQSKOUUMWCMKNKEBUAAQOTUJIJGHDSXXEAWDMYGZKMOETH");

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
    msg.setTimeStamp(0.4010965412116616);
    msg.setSource(28848U);
    msg.setSourceEntity(152U);
    msg.setDestination(9695U);
    msg.setDestinationEntity(63U);
    msg.timeout = 9134U;
    msg.lat = 0.37484916919807687;
    msg.lon = 0.13176045950676618;
    msg.z = 0.8775334273462595;
    msg.z_units = 1U;
    msg.speed = 0.08818558237639917;
    msg.speed_units = 176U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.37665721009784214;
    tmp_msg_0.y = 0.4518812544400055;
    tmp_msg_0.z = 0.7303066060266246;
    tmp_msg_0.t = 0.7121310998146237;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PWGDWHDXBWGMYYFKXVYISVEULZEPQWIROLVYZMXUEQNWRXNMRPPSRTNUENFGCMLBUPOMTLMKQWPXAKLKZVPTTXIL");

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
    msg.setTimeStamp(0.6859553441320122);
    msg.setSource(58509U);
    msg.setSourceEntity(220U);
    msg.setDestination(49524U);
    msg.setDestinationEntity(40U);
    msg.timeout = 64862U;
    msg.lat = 0.12114487825703879;
    msg.lon = 0.6377173832341595;
    msg.z = 0.1092072079272085;
    msg.z_units = 90U;
    msg.speed = 0.42555864161936485;
    msg.speed_units = 141U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7790660177143032;
    tmp_msg_0.y = 0.6104740932411705;
    tmp_msg_0.z = 0.7470282343105444;
    tmp_msg_0.t = 0.7066798769913691;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BEIVZBNVNCELWKFHTTGZSKUVMXMCUQEGTFHUZFOWYNVJGBRUDQSMMALFSKLIQCQASWBGQTCCDLQHUYBLSIGYLZAPJFSDJCCSRMRTOJQTBVFXNYOURGVYEGZEHRAXSGDRTWNEEEAQHXNKCDVBEJMZJAPIMGUYKLIQRFNVNJZWEHFJOUWIB");

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
    msg.setTimeStamp(0.4397643611847746);
    msg.setSource(35212U);
    msg.setSourceEntity(157U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(171U);
    msg.x = 0.5480057722397021;
    msg.y = 0.884395997815234;
    msg.z = 0.5722203955089397;
    msg.t = 0.8218383045486543;

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
    msg.setTimeStamp(0.4144862806197731);
    msg.setSource(1350U);
    msg.setSourceEntity(122U);
    msg.setDestination(51232U);
    msg.setDestinationEntity(189U);
    msg.x = 0.49032738304112544;
    msg.y = 0.7701975650085732;
    msg.z = 0.16401199890178175;
    msg.t = 0.7656842613694165;

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
    msg.setTimeStamp(0.1122652364197323);
    msg.setSource(30776U);
    msg.setSourceEntity(2U);
    msg.setDestination(56577U);
    msg.setDestinationEntity(225U);
    msg.x = 0.41496890837197575;
    msg.y = 0.508436233156674;
    msg.z = 0.6023369915068179;
    msg.t = 0.5029095533318115;

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
    msg.setTimeStamp(0.8471620485362737);
    msg.setSource(65145U);
    msg.setSourceEntity(142U);
    msg.setDestination(16328U);
    msg.setDestinationEntity(106U);
    msg.timeout = 39140U;
    msg.name.assign("CGMDXQJZCMRRYACPFKWYWTOJEFKZELHFSALANRRITVUTQQXSTVSQBLHHZVXOBKYZWLMRBUDGFSIIXMJQZKVSORSMIJOPIJAFVUDBFSZJPWDJOJAUAUVEQGPOMDATZXEOGSONPEVWHUIMKWLDCCLTVYEPBBKNUZFYSTHGOHFLXKNXEXUYNBYIYTWWNVMZDHGNCFQBIRAQN");
    msg.custom.assign("RTXMOPXAFPZDRQHVCZBNGWKFRLHSXHJUEAHZKTDFBHSRMYNAOXQMCDJDCKENMVPEEXEWHGIAILWNOLLMADTAWCGXSAVLTKYUBBIYILNSDQJOIKQXMHJLUTMNXGLSTWVWZYWNCAPBVQTWAEJIYPOSPGPEVFSLOUPYZQPTEYIJMNGCGNWZBDKRDTUSRBJFUUXZZBDCCQIVQCOOZEBKRHUXNAIVUSYJMYJQBFFKRWJRMSFOFUIQKFHHGCPGLGOYZ");

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
    msg.setTimeStamp(0.4509187391174885);
    msg.setSource(56519U);
    msg.setSourceEntity(92U);
    msg.setDestination(18790U);
    msg.setDestinationEntity(40U);
    msg.timeout = 4924U;
    msg.name.assign("VEQLJSSHXTWSKHEILGGFUITZENUEYZGDLBAVVASIVOBNGEMFSHBDRJMPKEHAUHQLJLWQVCVFYJAILNAPKDZKDWBROKHYUFVLTYMDKCEYCJCQPZVXPEMTXQCDNOTANBFRHUPGDTJYQXNUOAXMPZNMYLCBWJROIWZSQHSCHTTRWSUHNJRDGMYVPSICZSPGBIOCFYBWXOMMKGGRNRPVFJIKTRQWRFJLGIYWBUZFXLAXZQPBXCKWOOIOETME");
    msg.custom.assign("ZSIVHAVIULIQJWSAQBNXULZWJPROXVOVEOUIVKEVPSAZKXKBWZTPDGAZYMTRDSGKCLQO");

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
    msg.setTimeStamp(0.39606910511106264);
    msg.setSource(56940U);
    msg.setSourceEntity(174U);
    msg.setDestination(54246U);
    msg.setDestinationEntity(78U);
    msg.timeout = 63051U;
    msg.name.assign("DTJWCOLABWZDCCHEMJWMSDUUHUUSYXGKDJWZAGYWFZZLYZXJONSPQZVLFSGHQRIZPGEFJLANVXAQUYMQBBNNITDGFLKTJJCEJITCPYNPWLVQLEWCBKKHBOKRDKAUQSNSAUIVKPWVVWOIYPKBOXFRXHTMRGOJBFMXMGCSI");
    msg.custom.assign("MLLCSUALOZOOPXJCKTGHIVZFVPUNKHREMXVYYDIEPNRFEDTIEMHYMGSOBZASBBNWCKDEIXJXSAMKKQYCVJQHAFETAKKHBJVEYRVIVJUVJWBWNFQWGVWGBSFARXFRUCNDPLGONOPGGLNTKDECZQMQZBGMQ");

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
    msg.setTimeStamp(0.6004897754435506);
    msg.setSource(13642U);
    msg.setSourceEntity(67U);
    msg.setDestination(58663U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.13373854455932133;
    msg.lon = 0.7492953220059708;
    msg.z = 0.25478185834455513;
    msg.z_units = 77U;
    msg.speed = 0.8019536474373137;
    msg.speed_units = 170U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6960689222075886;
    tmp_msg_0.y = 0.2801500121540281;
    tmp_msg_0.z = 0.17601953319492813;
    tmp_msg_0.t = 0.2654230045029303;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 16679U;
    tmp_msg_1.off_x = 0.02951997986541255;
    tmp_msg_1.off_y = 0.4801290385396908;
    tmp_msg_1.off_z = 0.7909618566712026;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.4411078593921445;
    msg.custom.assign("UGROZXMRTRDZEDPJAQODRGNNUEWOMXOENSAIFZPTVYIOIWFQEIQ");

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
    msg.setTimeStamp(0.058846555722817495);
    msg.setSource(34530U);
    msg.setSourceEntity(185U);
    msg.setDestination(678U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.02586879439269374;
    msg.lon = 0.7474623458329449;
    msg.z = 0.03309829092959349;
    msg.z_units = 11U;
    msg.speed = 0.42417009079080226;
    msg.speed_units = 178U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6087898770369905;
    tmp_msg_0.y = 0.2150405635375876;
    tmp_msg_0.z = 0.8745769293362892;
    tmp_msg_0.t = 0.8337292540400645;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9518456010489628;
    msg.custom.assign("QTWFHCJSURUMSPWYPNMKGKOAKJFWTHZRABQDLXLQYOLNDVNLXYGQHVZNBISKCTAAYIBZRCOESKXZXHVABQYZNOSYHXPDEAADNIBTSMCFVFOWCPMMTTERVKOR");

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
    msg.setTimeStamp(0.43350622721601295);
    msg.setSource(62364U);
    msg.setSourceEntity(144U);
    msg.setDestination(55144U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.8429373601113516;
    msg.lon = 0.7731976869944635;
    msg.z = 0.801024557908206;
    msg.z_units = 46U;
    msg.speed = 0.21260784502328367;
    msg.speed_units = 36U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9014015066365992;
    tmp_msg_0.y = 0.20950244211731284;
    tmp_msg_0.z = 0.030388493619000312;
    tmp_msg_0.t = 0.6189595927302871;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 63734U;
    tmp_msg_1.off_x = 0.6154120754015021;
    tmp_msg_1.off_y = 0.5273634617919309;
    tmp_msg_1.off_z = 0.08049213221599627;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7565760276011975;
    msg.custom.assign("GTTQRWLDARGSIJDXVMORPY");

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
    msg.setTimeStamp(0.28830247852686497);
    msg.setSource(37300U);
    msg.setSourceEntity(210U);
    msg.setDestination(36003U);
    msg.setDestinationEntity(246U);
    msg.vid = 33398U;
    msg.off_x = 0.6693775444329397;
    msg.off_y = 0.760160960644006;
    msg.off_z = 0.403866250458801;

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
    msg.setTimeStamp(0.8646693993368588);
    msg.setSource(43645U);
    msg.setSourceEntity(92U);
    msg.setDestination(43101U);
    msg.setDestinationEntity(99U);
    msg.vid = 14085U;
    msg.off_x = 0.0012876874881415645;
    msg.off_y = 0.9505463134933301;
    msg.off_z = 0.9969521416009169;

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
    msg.setTimeStamp(0.6980136568225122);
    msg.setSource(21161U);
    msg.setSourceEntity(12U);
    msg.setDestination(57189U);
    msg.setDestinationEntity(4U);
    msg.vid = 55775U;
    msg.off_x = 0.7402396676260169;
    msg.off_y = 0.49795096604672706;
    msg.off_z = 0.7788975114158952;

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
    msg.setTimeStamp(0.9173204195428895);
    msg.setSource(11164U);
    msg.setSourceEntity(55U);
    msg.setDestination(13018U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.029635437391716923);
    msg.setSource(62640U);
    msg.setSourceEntity(45U);
    msg.setDestination(10763U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.4423989346324667);
    msg.setSource(18596U);
    msg.setSourceEntity(211U);
    msg.setDestination(8853U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.8160130529184834);
    msg.setSource(49362U);
    msg.setSourceEntity(119U);
    msg.setDestination(4084U);
    msg.setDestinationEntity(229U);
    msg.mid = 29094U;

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
    msg.setTimeStamp(0.5065100380411665);
    msg.setSource(4917U);
    msg.setSourceEntity(226U);
    msg.setDestination(10420U);
    msg.setDestinationEntity(250U);
    msg.mid = 40591U;

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
    msg.setTimeStamp(0.8490929840205027);
    msg.setSource(20816U);
    msg.setSourceEntity(135U);
    msg.setDestination(9297U);
    msg.setDestinationEntity(109U);
    msg.mid = 59383U;

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
    msg.setTimeStamp(0.785327779167923);
    msg.setSource(16570U);
    msg.setSourceEntity(219U);
    msg.setDestination(7144U);
    msg.setDestinationEntity(50U);
    msg.state = 156U;
    msg.eta = 50236U;
    msg.info.assign("FARZJBHWLNPHOXGBGYIYEMCNSYZHSEYCHTTBCHTQWSHPEPZXCTKKZDEAE");

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
    msg.setTimeStamp(0.9634546691227049);
    msg.setSource(3598U);
    msg.setSourceEntity(20U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(27U);
    msg.state = 223U;
    msg.eta = 61510U;
    msg.info.assign("MDNQPDUYULATMXVCGRTOPTWHQDKPACZKNDIHAUEWYDLEKNVOQKXHOQULMIVRAKEJWYNYLSCJPGIPFXXOZKYUBZTPTSUWTCKQ");

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
    msg.setTimeStamp(0.5327861673637139);
    msg.setSource(5161U);
    msg.setSourceEntity(240U);
    msg.setDestination(28424U);
    msg.setDestinationEntity(150U);
    msg.state = 42U;
    msg.eta = 47332U;
    msg.info.assign("VPEKQLEFLXZWOKLDNDPJHBFJZASHLHATQSDNELCVODCKYFOWBQGGJGWMKRUEMAFUVKRZACYRRTAGYXZWIELYYGJTXNTCDSVQUMCEBKLMDBSBVNWMPVKYG");

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
    msg.setTimeStamp(0.3035120376022288);
    msg.setSource(23682U);
    msg.setSourceEntity(202U);
    msg.setDestination(28988U);
    msg.setDestinationEntity(115U);
    msg.system = 49681U;
    msg.duration = 6122U;
    msg.speed = 0.4729914395883753;
    msg.speed_units = 171U;
    msg.x = 0.27657731953099385;
    msg.y = 0.2980826640023889;
    msg.z = 0.5505558084722808;
    msg.z_units = 190U;

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
    msg.setTimeStamp(0.7355357100567883);
    msg.setSource(8664U);
    msg.setSourceEntity(73U);
    msg.setDestination(19951U);
    msg.setDestinationEntity(62U);
    msg.system = 40810U;
    msg.duration = 37840U;
    msg.speed = 0.6015662929862191;
    msg.speed_units = 222U;
    msg.x = 0.9791881405037042;
    msg.y = 0.28314428829002625;
    msg.z = 0.14494040786226392;
    msg.z_units = 23U;

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
    msg.setTimeStamp(0.40049056105646486);
    msg.setSource(37792U);
    msg.setSourceEntity(36U);
    msg.setDestination(62890U);
    msg.setDestinationEntity(175U);
    msg.system = 45134U;
    msg.duration = 62831U;
    msg.speed = 0.1420555978476753;
    msg.speed_units = 252U;
    msg.x = 0.9508078182376499;
    msg.y = 0.574928055516826;
    msg.z = 0.6311985028391986;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.512858921428076);
    msg.setSource(10972U);
    msg.setSourceEntity(156U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.796665846669917;
    msg.lon = 0.9428742432733016;
    msg.speed = 0.44808645241027845;
    msg.speed_units = 203U;
    msg.duration = 2599U;
    msg.sys_a = 20605U;
    msg.sys_b = 58333U;
    msg.move_threshold = 0.8384530820798328;

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
    msg.setTimeStamp(0.06984384133151555);
    msg.setSource(41982U);
    msg.setSourceEntity(79U);
    msg.setDestination(10413U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.4757058315351277;
    msg.lon = 0.5337925666439713;
    msg.speed = 0.5344183464761461;
    msg.speed_units = 30U;
    msg.duration = 51936U;
    msg.sys_a = 40531U;
    msg.sys_b = 31892U;
    msg.move_threshold = 0.5247528055754187;

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
    msg.setTimeStamp(0.10163322572473177);
    msg.setSource(13355U);
    msg.setSourceEntity(193U);
    msg.setDestination(12175U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.484472579776132;
    msg.lon = 0.673018683241843;
    msg.speed = 0.9058528274045976;
    msg.speed_units = 213U;
    msg.duration = 21146U;
    msg.sys_a = 39894U;
    msg.sys_b = 59874U;
    msg.move_threshold = 0.24614875177110995;

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
    msg.setTimeStamp(0.5113794332703193);
    msg.setSource(37490U);
    msg.setSourceEntity(54U);
    msg.setDestination(39090U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.7518116100013525;
    msg.lon = 0.22215217430554113;
    msg.z = 0.14470817051460672;
    msg.z_units = 164U;
    msg.speed = 0.5160036944781256;
    msg.speed_units = 185U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6532809227563008;
    tmp_msg_0.lon = 0.03476315166634225;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LCWRGLOERJOUHJGBEOBOXINNXJYUFFFXGMMNKTIRXFHVMZRBNUKVJGFJPHSEDQZTABYUQLSZKFAURLJDQGQIMONBKMJHWNWMBVEXVDNCZIGCPZSCBKDCCMNLJSEHDFLCEIOCXD");

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
    msg.setTimeStamp(0.15777231873298014);
    msg.setSource(50375U);
    msg.setSourceEntity(194U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.12285224877885459;
    msg.lon = 0.5138872339992728;
    msg.z = 0.7892241651810481;
    msg.z_units = 202U;
    msg.speed = 0.42292387155126787;
    msg.speed_units = 252U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5229653501649919;
    tmp_msg_0.lon = 0.4232721802276478;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CXXQDCNDFYSNVZMBQNXDCMWSIIKGMKBMNIVVCYFUPBMPUESJEQGSBOHUERHFCEGUTHDNKQLSJTXZEAQIJLUCYNLBWWSGYXOTZLF");

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
    msg.setTimeStamp(0.902177005792359);
    msg.setSource(2671U);
    msg.setSourceEntity(186U);
    msg.setDestination(47965U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.29240252401696465;
    msg.lon = 0.4858874523457576;
    msg.z = 0.891727876620972;
    msg.z_units = 157U;
    msg.speed = 0.8304161679068636;
    msg.speed_units = 242U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.03544843537803388;
    tmp_msg_0.lon = 0.48776288750054764;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DIWKTXZKBWVCVWISBURILDTSZKYNGHKFMFXQFQTIXW");

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
    msg.setTimeStamp(0.7203097800293773);
    msg.setSource(33388U);
    msg.setSourceEntity(81U);
    msg.setDestination(24697U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.04257539313789438;
    msg.lon = 0.608655870748958;

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
    msg.setTimeStamp(0.8040963806875667);
    msg.setSource(15170U);
    msg.setSourceEntity(85U);
    msg.setDestination(22724U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.996413905596097;
    msg.lon = 0.48967939267271554;

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
    msg.setTimeStamp(0.04571375417229384);
    msg.setSource(48625U);
    msg.setSourceEntity(254U);
    msg.setDestination(13286U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.8110094646962284;
    msg.lon = 0.18243646803423041;

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
    msg.setTimeStamp(0.8129560590003637);
    msg.setSource(21207U);
    msg.setSourceEntity(170U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(20U);
    msg.timeout = 24409U;
    msg.lat = 0.6092994383671676;
    msg.lon = 0.8972421318808146;
    msg.z = 0.7464097117802933;
    msg.z_units = 139U;
    msg.pitch = 0.28981516503188265;
    msg.amplitude = 0.47685258252385265;
    msg.duration = 58216U;
    msg.speed = 0.502594740175136;
    msg.speed_units = 139U;
    msg.radius = 0.00907363090710911;
    msg.direction = 77U;
    msg.custom.assign("ZLUHLSDZJCIJCKOFQJAMVBTMNPKNUMAKMAWISNRUZKXBQYRXHICFFVYEOQBESLHFIMDRDPMS");

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
    msg.setTimeStamp(0.17770123320723374);
    msg.setSource(5048U);
    msg.setSourceEntity(32U);
    msg.setDestination(59837U);
    msg.setDestinationEntity(239U);
    msg.timeout = 49789U;
    msg.lat = 0.6455316929921596;
    msg.lon = 0.19045201276986856;
    msg.z = 0.04315777064716586;
    msg.z_units = 145U;
    msg.pitch = 0.6027976058623771;
    msg.amplitude = 0.5980416240515611;
    msg.duration = 4907U;
    msg.speed = 0.8623044645949733;
    msg.speed_units = 34U;
    msg.radius = 0.7194696139719479;
    msg.direction = 36U;
    msg.custom.assign("BTDJWKYYJWDNGKGZVGONTTYLNPIGXAIKJUXVZFCQBGLDWQKIOHXBKHTWZNPHESQGRZJFAODFPZVADYZDOGMQCWORVNMRRBUTRUANELIWDEHQECICASAIDMQBMCYBVJUYVPWFSJOQJLRSPEMMB");

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
    msg.setTimeStamp(0.4098193816206538);
    msg.setSource(347U);
    msg.setSourceEntity(24U);
    msg.setDestination(33422U);
    msg.setDestinationEntity(128U);
    msg.timeout = 15944U;
    msg.lat = 0.5381479095685953;
    msg.lon = 0.5713929442760487;
    msg.z = 0.6695276272266995;
    msg.z_units = 252U;
    msg.pitch = 0.17365946803408494;
    msg.amplitude = 0.3977826765045578;
    msg.duration = 9775U;
    msg.speed = 0.5557459040422457;
    msg.speed_units = 101U;
    msg.radius = 0.35269239889157544;
    msg.direction = 14U;
    msg.custom.assign("QAGHRXYEINLDOJXFACQRUYLLBLMDRHTZOMEGBDP");

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
    msg.setTimeStamp(0.3201941539640545);
    msg.setSource(30321U);
    msg.setSourceEntity(253U);
    msg.setDestination(34169U);
    msg.setDestinationEntity(233U);
    msg.formation_name.assign("EVINQYEYXTABJIXOBFSTCVQWEGYWKABZKUIGECMAAYGKWYULXCMQQWXRGFUOAKTDRPLWPSNBCVGHEDELYOKWURZYHPUUVMFDBKIIZBFLVWJNDRXZZUPMHRHKOQQNYSRHTFSXWTHFRNBTTETIHZTIFPOSJUKZZVGMMHONMNWVDOQVSQXDNOPQZMGJTJPFCGBPHUIVWGEXFJLYARBEPAADOASNAIJD");
    msg.reference_frame = 248U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28111U;
    tmp_msg_0.off_x = 0.663620962021712;
    tmp_msg_0.off_y = 0.20023956632094386;
    tmp_msg_0.off_z = 0.9197212661989181;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SEXKWULNCDIEEQYXNGHRNCQXEMTSYONDNRXBUTTPDVIVIJWHMRCBUOQULMSYUILPTGBQNAKORGGPPLBVTDISCZGFHXQUQISOAOYSLBUNTBGKNJSVLALETKKAJIZFZFSAKTQSDTLBWPJHMVEKSJQJVZYNRGLAJRWLWZQXHKCEUWMYCBIJWYGMVHEZHQDXZXYHOTAHFBURAFVJFMCPOCVVOR");

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
    msg.setTimeStamp(0.26079592245885574);
    msg.setSource(56820U);
    msg.setSourceEntity(0U);
    msg.setDestination(49171U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("BZHBXMZKEAZVPFIYZWRVUJYTRIEQIMRNBJKXLHFHWLIVKPONCUWVSCFQPHMCLSSWYQQEAPBSYDGGXJBFGRJWQBIVOCWDAZKVHDAHQHJOSNDVKDQECRDSEJFDCXRXTIDKYZHCMFKYBMGSTGMKEOKASQYQUTAMLEJIXCNLJAKSPOGWTHHFONDBOTNSYPIZIWOXNUNMLR");
    msg.reference_frame = 206U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63171U;
    tmp_msg_0.off_x = 0.7291999878796134;
    tmp_msg_0.off_y = 0.7954903888542724;
    tmp_msg_0.off_z = 0.55408579753032;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BOIIFTBZSXBXVJKFCEKFFGQTKPGILSVSECEYHDGRVSDZWETATCQTTUFQHONGZJAORCMQXSKMOAMJQNLNCBFZJYOEDRIBTDBAANHZRLUMDBGPVIAMKUJZOJEGRLXKFVVUNKIYOEELLVVICLPPOSFOWNHYPHADSDISURVLJQLESGY");

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
    msg.setTimeStamp(0.8408167032198489);
    msg.setSource(752U);
    msg.setSourceEntity(182U);
    msg.setDestination(4516U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("FTVPTMNEGGEWBJGFOLUTQQNSIHVTYUFJCCAYXXVOACVKOQPKTUBYWNABCYVYEDKKUBWBXRPOTREGZGZRVUUBMKJRVSXSSGIGYNFFDRPMRDPIQJLJASEDC");
    msg.reference_frame = 122U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16472U;
    tmp_msg_0.off_x = 0.6066506805895573;
    tmp_msg_0.off_y = 0.005987124274353106;
    tmp_msg_0.off_z = 0.24630957274044374;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ITHOZFJKNYQMEPAYKHPOIJMXQAOEEFFORDDLNCZNAOMUKIPHWTMLNHYADJMCBVREBJXQUZCDXUVSRUZXTESVQOYIYERKBGDGRAVUIBFWLRVFISTBBEUVTGRKSLHDUGJQYGBPGSECRCOJYCIHFMSYTKNOYCTIHFZANSNFULUYPSSZEWQSKXCAIHZJHFLDNDW");

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
    msg.setTimeStamp(0.6178869657243413);
    msg.setSource(55725U);
    msg.setSourceEntity(222U);
    msg.setDestination(19690U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("VCAXWNYRBOJKGVUPQNEIYKMZALURSMFTMQLKOPGCDZFBTQOYJFINNAQLPTCEILZJZEBNHUBAODDICSACOZWBVMYENXFVAXLKTJQPGWETBZMWVKDKMOUDUTZJEVZMWXMJPFTYEUJFPLXCHOAHNGCLQUGSYUWDLIRJXDFQWXDPATWESZVOGSFLHJXIRHKDRHXCKAHBSBPIYERUDUGJMHTFCQVAIZGSRP");
    msg.formation_name.assign("UVYUWPNDSCFRNZVGYKWJQMGOJOQLGULAUCOQXATEFJLRPMXIDUPILIRTVPRSOKHPATATCBLYWOVWSADKJEKDVQPTSUVCAMFNPNEIZYJEVBCNZRXMZUPBGDFHDJMBHSBZAXCPJSRNAEHLHQCUKMHCTWZKVELMQQTLTOQZKRIHHXBMZEOSGGAWRFSWGXBFGTWKSIIUBMNTNKF");
    msg.plan_id.assign("OINMHNHEOGGZAPENXJAXYZSUSPPKDHELVSKQCMOUJVZWFKQQIPIBDPGCCKZBBYMXVRQSWGRWBDEHTFOSPBDVCBAWFYNENCOMUDBARTWRDXSDXHBLTLYVXLVINGAIFHIUQRJNVKULSSGTTWYHDBEFWIMXMFNZGUJJGQCKBIETER");
    msg.description.assign("QKDTLVWRLCMZOGOCBMEJDVMBEHXGNNQNVBSNRQFWCXYQUDCKAXHWMFVSWUFWTWTKIQONTXSGWJGSBNPONXHBJCHNRAPVQKKDOYLMTPEVPFCEEFRFOCQWUXUCYAAZWZJHPQDSSKBPYABKEZFPSQMDRJLAGCILU");
    msg.leader_speed = 0.5131238488868275;
    msg.leader_bank_lim = 0.3523194453303897;
    msg.pos_sim_err_lim = 0.25167699382554864;
    msg.pos_sim_err_wrn = 0.9572801038257749;
    msg.pos_sim_err_timeout = 55473U;
    msg.converg_max = 0.7911469848183883;
    msg.converg_timeout = 14159U;
    msg.comms_timeout = 11881U;
    msg.turb_lim = 0.03038140206727946;
    msg.custom.assign("RPVGOWLPMFEHIUJLZYLYLCNFVZBUSBACGXBOQMYYUOCZVWJGXWDJGAVKKTZSRPPKZETMPBCZQNAKLYRPOID");

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
    msg.setTimeStamp(0.3579260416986897);
    msg.setSource(37590U);
    msg.setSourceEntity(163U);
    msg.setDestination(48365U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("IQEZVGMHHOIPZDTAKNLWHLZGSDVYWGOGQDOVQGGQPUCLPSNJLDGJIKBSDRFTALBJCCLNXYGUETCNHQIGEHANWNKMHNBFBQSBBNRBSAMTJVLFIZUTAKMJOYZLHCEKXRKOCVYHXTGSPUSWXLKPUBCHHYI");
    msg.formation_name.assign("PDXBWYOSZQBWDKOPOMSHELZJYFTISLLZREKYCYULBCAAKXGALDYSHSKONIVTQGEVPEKNQIMROFPNUHXYDWTIIMGJYVTJQFBRAEHQRBUMFUVBMUPEJWXDCUIFSLWAKSKHDHVQHGSTDWTYDFAWGZKXEOZLIHOTUVFNTZYOLMWAFAREPXSICLJJCHJYBOAKXNERNRC");
    msg.plan_id.assign("SAVGHJKQJJCWPIBREWCLRLDPHQQQMZGGNKPFCKMEXAADVBSOHZXCNIDZUGPMUNCFLXVMOBKNZQRRTALLQDHTOOOEBJUOCGCZLFWHHFTQZOWKDPGIIYYXTCRPJGYLJLDEEYXFOXIU");
    msg.description.assign("EWTNTNWYWUVIZCPYBAFCSJJPIBEVGLMRHCRXBUYOKLMSINZGNCIGMHMAJPUDUQGOUBCTEZARNNXBHPTLDBQVAWBHHKQZHKANSERQDIVZNXFEFQWGQNGGQDFCXAMFYITAWATRYCWVPSOZJEPFWXUCFOMRHFHKVZDEJZIGLYLPKXTBYOIBQMPOJJULCWSAILJRYDLJSXOIUVOJROMUWCSDYSKMKNHLXXPVOVRKTFKQZHDDAP");
    msg.leader_speed = 0.860422370584605;
    msg.leader_bank_lim = 0.8815209190276199;
    msg.pos_sim_err_lim = 0.49253423724358414;
    msg.pos_sim_err_wrn = 0.9623203689959934;
    msg.pos_sim_err_timeout = 26979U;
    msg.converg_max = 0.9052745678248333;
    msg.converg_timeout = 41109U;
    msg.comms_timeout = 1502U;
    msg.turb_lim = 0.04690493969308396;
    msg.custom.assign("VOQKKCYJEQKKLLIJOOBYSRXDVCUALMGQ");

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
    msg.setTimeStamp(0.42425388644195483);
    msg.setSource(490U);
    msg.setSourceEntity(242U);
    msg.setDestination(26813U);
    msg.setDestinationEntity(0U);
    msg.group_name.assign("GHQFTSTAFGLUXSSFKZJZZEHEFARYXVONOAAMBCQPODCJZDTONUQRILHITCZBGGHPYHARUWGXFPMLLKPDWGQZTWEKNJIAOHDMDDXJFVCWORDOOVLRCKNXZEZTWVNFVKXHENTEICIM");
    msg.formation_name.assign("SJNALUBDPQCSUINHHODOXMALTYWBQJMBYFUCKSSOAJYMTFKGVGIFEIGRVZUEAEJMFUWOAVNTWCVXWFAYZYHWROTCWSMTDLKYUJVMNJRLJDUHJIGBOHQMUTDS");
    msg.plan_id.assign("QVLLDDEEUHWNJRZCUBXKPUHPHZRNUTNHRERZRKMRLTLTOQDIGYBXUPLCIWFHMGLDGCUHYNPZKAFPSQHIJYWYIUHHZCILBPOFJDNAYAACGZMCAGGXBYMIOXAMDXKEPXGRASQLTQWDTNDWNAZFVFHVEAMSZRAZBVQVYKUBQJWGGKDTFEXNVJPCO");
    msg.description.assign("FQEYHORQEMBYCEZLJYBNJSVTWKNHEOXZPDFSTBFHKVQXDECLRHIVLAMYTSFQBCNCRKIGDWCMNKKIQADBTBAVUVIRECEENZQXWMDLDUSUOVFMCXSYIRNZSLGIQZJKZQARIEKZROWHODGGYJWVWTUDTNLABXBXFGHYCFSKOAPLFVOMUPFJBKUJPLWMLACCKUAUVPOHLXHTRYPAHXJGTAUNDMBUXTZYYTXEGNQMSWJJGNSHJ");
    msg.leader_speed = 0.061162573114501684;
    msg.leader_bank_lim = 0.5409650661394476;
    msg.pos_sim_err_lim = 0.0830196414394293;
    msg.pos_sim_err_wrn = 0.6208592950161637;
    msg.pos_sim_err_timeout = 31358U;
    msg.converg_max = 0.4380610635480888;
    msg.converg_timeout = 51621U;
    msg.comms_timeout = 26011U;
    msg.turb_lim = 0.14793830461871205;
    msg.custom.assign("FDAQTINWHTAYDUVQGCWSAORJDMUBYFCSGLSSWHBOAMZFZURVAARZCMAATUSCFJVIPEOCTYOGJPOIJRZCENRVQXMHGLFUBFPEXEFEEIKVOGGHFWQLIBRDGOTNOLYZMNK");

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
    msg.setTimeStamp(0.5901879085323269);
    msg.setSource(11461U);
    msg.setSourceEntity(111U);
    msg.setDestination(11354U);
    msg.setDestinationEntity(16U);
    msg.control_src = 47753U;
    msg.control_ent = 181U;
    msg.timeout = 0.7654490824166335;
    msg.loiter_radius = 0.5030315786085524;
    msg.altitude_interval = 0.08948620113284977;

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
    msg.setTimeStamp(0.43821330374874934);
    msg.setSource(21088U);
    msg.setSourceEntity(161U);
    msg.setDestination(44262U);
    msg.setDestinationEntity(7U);
    msg.control_src = 23637U;
    msg.control_ent = 19U;
    msg.timeout = 0.7479646430900669;
    msg.loiter_radius = 0.8347937061122206;
    msg.altitude_interval = 0.8585475737435675;

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
    msg.setTimeStamp(0.39396159955545185);
    msg.setSource(47612U);
    msg.setSourceEntity(149U);
    msg.setDestination(25854U);
    msg.setDestinationEntity(139U);
    msg.control_src = 39113U;
    msg.control_ent = 7U;
    msg.timeout = 0.4953432449654509;
    msg.loiter_radius = 0.7174948215050525;
    msg.altitude_interval = 0.04135318501232932;

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
    msg.setTimeStamp(0.936040693999675);
    msg.setSource(11366U);
    msg.setSourceEntity(142U);
    msg.setDestination(23389U);
    msg.setDestinationEntity(248U);
    msg.flags = 8U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6498665934781287;
    tmp_msg_0.speed_units = 168U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.30514675883430953;
    tmp_msg_1.z_units = 214U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.16866757728694115;
    msg.lon = 0.736011381406012;
    msg.radius = 0.2676409235250202;

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
    msg.setTimeStamp(0.7436353293161646);
    msg.setSource(57281U);
    msg.setSourceEntity(108U);
    msg.setDestination(60441U);
    msg.setDestinationEntity(112U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1372878373456785;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.41566872526853216;
    tmp_msg_1.z_units = 181U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5826306961616723;
    msg.lon = 0.9314665215802729;
    msg.radius = 0.9984371239490137;

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
    msg.setTimeStamp(0.2547685012831722);
    msg.setSource(30655U);
    msg.setSourceEntity(180U);
    msg.setDestination(8237U);
    msg.setDestinationEntity(215U);
    msg.flags = 248U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.443217305937041;
    tmp_msg_0.speed_units = 138U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.29252125085048686;
    tmp_msg_1.z_units = 57U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9381619446783075;
    msg.lon = 0.405020611459154;
    msg.radius = 0.6242404798199191;

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
    msg.setTimeStamp(0.5775784717665564);
    msg.setSource(56937U);
    msg.setSourceEntity(71U);
    msg.setDestination(39955U);
    msg.setDestinationEntity(215U);
    msg.control_src = 32525U;
    msg.control_ent = 78U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 89U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.05421150016872578;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9953964508934507;
    tmp_tmp_msg_0_1.z_units = 76U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5860776884379391;
    tmp_msg_0.lon = 0.22492813121207922;
    tmp_msg_0.radius = 0.9345750755286779;
    msg.reference.set(tmp_msg_0);
    msg.state = 78U;
    msg.proximity = 57U;

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
    msg.setTimeStamp(0.07816981330557493);
    msg.setSource(19224U);
    msg.setSourceEntity(218U);
    msg.setDestination(53653U);
    msg.setDestinationEntity(21U);
    msg.control_src = 18395U;
    msg.control_ent = 214U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 209U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6267562224899142;
    tmp_tmp_msg_0_0.speed_units = 187U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6183280223877626;
    tmp_tmp_msg_0_1.z_units = 124U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.05528423266122784;
    tmp_msg_0.lon = 0.10808261254091767;
    tmp_msg_0.radius = 0.3848132515990208;
    msg.reference.set(tmp_msg_0);
    msg.state = 19U;
    msg.proximity = 214U;

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
    msg.setTimeStamp(0.9817602471005425);
    msg.setSource(62653U);
    msg.setSourceEntity(209U);
    msg.setDestination(52157U);
    msg.setDestinationEntity(172U);
    msg.control_src = 41938U;
    msg.control_ent = 49U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5583150853148181;
    tmp_tmp_msg_0_0.speed_units = 121U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.916540064717391;
    tmp_tmp_msg_0_1.z_units = 228U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8925531179728015;
    tmp_msg_0.lon = 0.18099779640616143;
    tmp_msg_0.radius = 0.6206828121061774;
    msg.reference.set(tmp_msg_0);
    msg.state = 244U;
    msg.proximity = 102U;

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
    msg.setTimeStamp(0.5345677791478322);
    msg.setSource(32407U);
    msg.setSourceEntity(157U);
    msg.setDestination(26414U);
    msg.setDestinationEntity(142U);
    msg.ax_cmd = 0.13179616572586417;
    msg.ay_cmd = 0.4555409719279675;
    msg.az_cmd = 0.3836288891227939;
    msg.ax_des = 0.43751473104483796;
    msg.ay_des = 0.540101820935512;
    msg.az_des = 0.6959085254739185;
    msg.virt_err_x = 0.6218359761022069;
    msg.virt_err_y = 0.5200738592671781;
    msg.virt_err_z = 0.531302724647019;
    msg.surf_fdbk_x = 0.2619674311348733;
    msg.surf_fdbk_y = 0.5556083686127071;
    msg.surf_fdbk_z = 0.0030214903521735836;
    msg.surf_unkn_x = 0.6796373030603466;
    msg.surf_unkn_y = 0.590068726277283;
    msg.surf_unkn_z = 0.31376691863820094;
    msg.ss_x = 0.9041595854984349;
    msg.ss_y = 0.2847927510966092;
    msg.ss_z = 0.48482665663569147;

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
    msg.setTimeStamp(0.3410631219156922);
    msg.setSource(58403U);
    msg.setSourceEntity(243U);
    msg.setDestination(57457U);
    msg.setDestinationEntity(80U);
    msg.ax_cmd = 0.05671714846489717;
    msg.ay_cmd = 0.19547794446156286;
    msg.az_cmd = 0.9028803209702786;
    msg.ax_des = 0.10779793411634986;
    msg.ay_des = 0.5789094195180929;
    msg.az_des = 0.3760354456356447;
    msg.virt_err_x = 0.05523446656793052;
    msg.virt_err_y = 0.4148272422340785;
    msg.virt_err_z = 0.5214460600055655;
    msg.surf_fdbk_x = 0.5896504739274172;
    msg.surf_fdbk_y = 0.536425226413241;
    msg.surf_fdbk_z = 0.5382017933757063;
    msg.surf_unkn_x = 0.8050366356795513;
    msg.surf_unkn_y = 0.9922999444204099;
    msg.surf_unkn_z = 0.17973111404624376;
    msg.ss_x = 0.12491794384605248;
    msg.ss_y = 0.9367469924166087;
    msg.ss_z = 0.29714442213232006;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IADUOUDBKXWJDHLZQYZXNEQOPAVFUWCAU");
    tmp_msg_0.dist = 0.04520710924107019;
    tmp_msg_0.err = 0.6325730451609793;
    tmp_msg_0.ctrl_imp = 0.6686577590545636;
    tmp_msg_0.rel_dir_x = 0.03178012619704895;
    tmp_msg_0.rel_dir_y = 0.5793387392129131;
    tmp_msg_0.rel_dir_z = 0.9160037601213294;
    tmp_msg_0.err_x = 0.6544851731203422;
    tmp_msg_0.err_y = 0.27351125765695816;
    tmp_msg_0.err_z = 0.2460773448337814;
    tmp_msg_0.rf_err_x = 0.677193076503441;
    tmp_msg_0.rf_err_y = 0.6396200883837003;
    tmp_msg_0.rf_err_z = 0.02157803246226686;
    tmp_msg_0.rf_err_vx = 0.37174487539452916;
    tmp_msg_0.rf_err_vy = 0.9313733793041518;
    tmp_msg_0.rf_err_vz = 0.1639801204941188;
    tmp_msg_0.ss_x = 0.18264868907764065;
    tmp_msg_0.ss_y = 0.8114686032611872;
    tmp_msg_0.ss_z = 0.270025753832836;
    tmp_msg_0.virt_err_x = 0.987316287959648;
    tmp_msg_0.virt_err_y = 0.6345234262269875;
    tmp_msg_0.virt_err_z = 0.9604829608708443;
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
    msg.setTimeStamp(0.7536744572295299);
    msg.setSource(29944U);
    msg.setSourceEntity(21U);
    msg.setDestination(22603U);
    msg.setDestinationEntity(183U);
    msg.ax_cmd = 0.028659303550553794;
    msg.ay_cmd = 0.3095431559348416;
    msg.az_cmd = 0.29985397216827236;
    msg.ax_des = 0.41825401748702096;
    msg.ay_des = 0.3319933396749942;
    msg.az_des = 0.44647905890878603;
    msg.virt_err_x = 0.6136082551060431;
    msg.virt_err_y = 0.7652873296809608;
    msg.virt_err_z = 0.2942738842214908;
    msg.surf_fdbk_x = 0.07707031072903814;
    msg.surf_fdbk_y = 0.36024413269934197;
    msg.surf_fdbk_z = 0.48893853978820445;
    msg.surf_unkn_x = 0.598273317604626;
    msg.surf_unkn_y = 0.284082702867119;
    msg.surf_unkn_z = 0.26673235962096675;
    msg.ss_x = 0.5526081232450814;
    msg.ss_y = 0.9010350283603942;
    msg.ss_z = 0.009639722077589452;

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
    msg.setTimeStamp(0.9883994421143294);
    msg.setSource(14065U);
    msg.setSourceEntity(250U);
    msg.setDestination(20712U);
    msg.setDestinationEntity(128U);
    msg.s_id.assign("SKXEQEGGNCKTZHKAMBDXKWPFYASV");
    msg.dist = 0.6637681004808239;
    msg.err = 0.5192028262938229;
    msg.ctrl_imp = 0.8677004490162961;
    msg.rel_dir_x = 0.7955392515924717;
    msg.rel_dir_y = 0.831280399624976;
    msg.rel_dir_z = 0.0677134918073169;
    msg.err_x = 0.7165627254939492;
    msg.err_y = 0.8899083931507954;
    msg.err_z = 0.0633365276579465;
    msg.rf_err_x = 0.3205280243692482;
    msg.rf_err_y = 0.37258456103422977;
    msg.rf_err_z = 0.6481131117853072;
    msg.rf_err_vx = 0.030334118263342535;
    msg.rf_err_vy = 0.24381589557862227;
    msg.rf_err_vz = 0.9558981444011335;
    msg.ss_x = 0.571622811954782;
    msg.ss_y = 0.1719130151895636;
    msg.ss_z = 0.1647007202876659;
    msg.virt_err_x = 0.27771161771340414;
    msg.virt_err_y = 0.5863997761891862;
    msg.virt_err_z = 0.11847322793395154;

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
    msg.setTimeStamp(0.45532062513972205);
    msg.setSource(37610U);
    msg.setSourceEntity(221U);
    msg.setDestination(9429U);
    msg.setDestinationEntity(122U);
    msg.s_id.assign("PBWLXGUZUGRFCTWRVVOXPNFBZVYIWQJDHBAYEJKSDUNJCYMBQMRCOZRRJILQAEFYPKKDQPOFOZQITDMHYNNQPAAOSUSECIXIRPUGGJHMAYOXEEVERNMTPHWMQDVFKDGTWKLCRTAJHJVRDULFJJXSKFSVCYKXJPNTCHPINQGCFHTT");
    msg.dist = 0.4705597247911857;
    msg.err = 0.989851680316574;
    msg.ctrl_imp = 0.08796896017069977;
    msg.rel_dir_x = 0.6898313232569004;
    msg.rel_dir_y = 0.00887054436125867;
    msg.rel_dir_z = 0.7522559784732464;
    msg.err_x = 0.25647411968321476;
    msg.err_y = 0.589828045750986;
    msg.err_z = 0.9637449650804626;
    msg.rf_err_x = 0.10209495906734234;
    msg.rf_err_y = 0.10155716300736328;
    msg.rf_err_z = 0.49730046158342867;
    msg.rf_err_vx = 0.4342269864127142;
    msg.rf_err_vy = 0.7776970163904023;
    msg.rf_err_vz = 0.213267111610707;
    msg.ss_x = 0.03686900407069793;
    msg.ss_y = 0.024778063256975513;
    msg.ss_z = 0.5834550203854625;
    msg.virt_err_x = 0.6317884927574686;
    msg.virt_err_y = 0.43237869672449547;
    msg.virt_err_z = 0.45358480874416296;

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
    msg.setTimeStamp(0.9553114306426499);
    msg.setSource(42461U);
    msg.setSourceEntity(248U);
    msg.setDestination(31917U);
    msg.setDestinationEntity(234U);
    msg.s_id.assign("MGRWCUIJKGFWZAIAQBTFFUIWKZSNSQTPCCGSAEUGCRXXBRJCOSCBOFNCASQRMEMVPDAPYBPDIOGHMRQVEUWNTDJOBBHFMHYHCLSUDDDOQXJVBZMHYHIZAZWLZHSJZGRUXFHHVUEIBLRJTKNEMOLDWQKYZGTLTAWGOBJKZVMIWKQ");
    msg.dist = 0.30544312833337905;
    msg.err = 0.7963868977011029;
    msg.ctrl_imp = 0.03467196441120546;
    msg.rel_dir_x = 0.8874787499604514;
    msg.rel_dir_y = 0.3978695273146611;
    msg.rel_dir_z = 0.3751200421413906;
    msg.err_x = 0.4793507541610855;
    msg.err_y = 0.12803975963271608;
    msg.err_z = 0.0667631811662529;
    msg.rf_err_x = 0.08043134353209835;
    msg.rf_err_y = 0.012090125198043644;
    msg.rf_err_z = 0.47180213367317436;
    msg.rf_err_vx = 0.5685107530563238;
    msg.rf_err_vy = 0.3840589970884716;
    msg.rf_err_vz = 0.095979113055923;
    msg.ss_x = 0.1504719373399016;
    msg.ss_y = 0.6383387154972073;
    msg.ss_z = 0.6525056100019169;
    msg.virt_err_x = 0.11073799413845298;
    msg.virt_err_y = 0.08962407464081834;
    msg.virt_err_z = 0.8152150868154874;

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
    msg.setTimeStamp(0.9974807040212177);
    msg.setSource(20278U);
    msg.setSourceEntity(77U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(251U);
    msg.timeout = 33868U;
    msg.rpm = 0.49269825230502406;
    msg.direction = 42U;
    msg.custom.assign("EZSDVZHIXLINXTSRMBBDXSSPLIHCVMWNEJPCKEKYLJVCZNKOQFUULOFTWDLSQRXYULJPWLBMAUXQMPYODUYQOIGKBGQJWRTEQCDUVOWHRJVBPQRRMKXTZBEPCZNUMFFTBKFFFXJIWVDIOPGGBEKCIGAOWFKCOGZMOVXAEHQUMSENDDDLUSEYSCWYFRUPKNAWTTRHVACHZHWONZMVJEPBDTXSSYFVHYPINZHAYAQGTJ");

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
    msg.setTimeStamp(0.407769214303928);
    msg.setSource(57280U);
    msg.setSourceEntity(45U);
    msg.setDestination(321U);
    msg.setDestinationEntity(61U);
    msg.timeout = 16589U;
    msg.rpm = 0.4280210408052413;
    msg.direction = 162U;
    msg.custom.assign("QCYOMPAFBOPRHGTMVKHPQJZEUJVPAVALALULNJBXBYBRXEDWLQFFNBBAWIZUFOCW");

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
    msg.setTimeStamp(0.4398154550073272);
    msg.setSource(53383U);
    msg.setSourceEntity(9U);
    msg.setDestination(31834U);
    msg.setDestinationEntity(118U);
    msg.timeout = 57917U;
    msg.rpm = 0.9748656424574099;
    msg.direction = 5U;
    msg.custom.assign("WCZISHYARIMQLNKFNCNEDPRKHTZOJVXTBZNNRAAKUSLEEZBZDKNJKSDFEVIDGOYRKWXORGUWAZMWODYWWLOBVMGGBJFAQRSELXNYZYXABPKLMZHF");

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
    msg.setTimeStamp(0.15786029353771935);
    msg.setSource(11700U);
    msg.setSourceEntity(178U);
    msg.setDestination(11485U);
    msg.setDestinationEntity(94U);
    msg.op_mode = 129U;
    msg.error_count = 37U;
    msg.error_ents.assign("FGSQXNWHTNLBDZGOGHIDPRILIAUVXQSLOAOCAKJSRYYCFMTZDFJWZMHVV");
    msg.maneuver_type = 883U;
    msg.maneuver_stime = 0.12576757699978036;
    msg.maneuver_eta = 795U;
    msg.control_loops = 189434346U;
    msg.flags = 10U;
    msg.last_error.assign("IDBXMFPEPTCATQFZPSTJDKFEIAZJWQKZUHGHTRRFZZIRWBNVUXJHDYSYIAVPCILPHSVSNZQWSKKJONGMXIFLXMJYQIDRGLCOHAKBZAQWIOINSRLYCXQWMVZOOMOTPQEJFYTDRPUKAJCLNMYGNMGYYNOMVEGUXHLFATYEDLBELXUDEMFSIOVGKEEAKFWCLUUONBXDRHJUGPHBSRUTQFHVWKWGQHCORBJDTBKTVNCZPRYPZAA");
    msg.last_error_time = 0.22323350034951117;

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
    msg.setTimeStamp(0.5108397910427358);
    msg.setSource(29594U);
    msg.setSourceEntity(43U);
    msg.setDestination(53479U);
    msg.setDestinationEntity(1U);
    msg.op_mode = 61U;
    msg.error_count = 209U;
    msg.error_ents.assign("JZMRRCKTPIPWUXFDGVJYBKXHRBCQZZSJSWZMBZICDENSTFPSTIOQSEG");
    msg.maneuver_type = 12844U;
    msg.maneuver_stime = 0.12553313215580808;
    msg.maneuver_eta = 17014U;
    msg.control_loops = 480734175U;
    msg.flags = 115U;
    msg.last_error.assign("MMJVINDKUUPWVUMLNZKGELUFLLEFEJJDAOBVEQFUNEUCHRCAKQCSOSGDWGTJILHPIRNUQDVFPOIPWHRTUGSH");
    msg.last_error_time = 0.44732942430485056;

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
    msg.setTimeStamp(0.34891645628018597);
    msg.setSource(31363U);
    msg.setSourceEntity(243U);
    msg.setDestination(43603U);
    msg.setDestinationEntity(242U);
    msg.op_mode = 92U;
    msg.error_count = 145U;
    msg.error_ents.assign("FSQJRQQGXQAMBLWHHXWBVJUUZKBTGAYRPCHOMBNIJNKHLZRXCEDNSXHSRDSOOLGEIETPIAVYFKTVDJYWFKHKSFFOEPRLLMHPTPUTYEWFMLOKWQBWPDTAJTNNFAAGZRXVSZMGSZHWITJBUKD");
    msg.maneuver_type = 65419U;
    msg.maneuver_stime = 0.6740889694692129;
    msg.maneuver_eta = 3693U;
    msg.control_loops = 3533662193U;
    msg.flags = 109U;
    msg.last_error.assign("VBWTQXOUKUQXHRNYLGBIVPISGFKKWJYXWPIATJGKEQVUAXONPFRKWJELOSGWQKPKHHCXDPUPZJMTFVDATNYOVQELCMVFTRQAIJRFURLWMOBYBENRPBCCZNRBTSSDSFHYJPQCELRDANXYHWUMRYTLXKCG");
    msg.last_error_time = 0.758846732903255;

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
    msg.setTimeStamp(0.4397386029194347);
    msg.setSource(1573U);
    msg.setSourceEntity(30U);
    msg.setDestination(26213U);
    msg.setDestinationEntity(207U);
    msg.type = 16U;
    msg.request_id = 11965U;
    msg.command = 169U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("FYZDKFCYSRGLPFPZHKITQWPXXQXPQQTLSKZLJRRMJVQBICILVBJGSCUUFMQSNNBJPSNGTAEJINQPOODZGDPUOJYULK");
    tmp_msg_0.formation_name.assign("QVKKUITBVLHEQADCSGFOCXUJRTDVKEWJWRWGWMRWGQOLAKDENEDEFGZYDFEPYTRIRFXOVWSAGOVREBYWQUBBGXCVUXCZIFYFMYHKACLOXZMTHXQNPUIOYCWJTGVMSJBWUPGXULRYRISORNGEQJXPMHQZYJJFBCAAMIZHTHJNFIOHCPMSSPLSIHNOSYMHNOTCSANJLLYKEGDXTZMUSBPAAQDXDL");
    tmp_msg_0.plan_id.assign("TSRLPVYGFZZBAXNEIXFSPFDGBAZNPJXQDEHAAEGOKHCXITOMUPZSEVYINORHNUEFJBBIAWKYLESFWUDQZRUXMPYTCKHYDQUSYKBTSMKDIVMPGEFHVVG");
    tmp_msg_0.description.assign("RFWNPZIDQGHXZTOQBYKHBCJETAMZNFCBXRRXUMBGLJFLOPZMLUDAQYCQVVRSRCDBNYDQWHJFVVPYQMPKKTRIBDLNLGQWNVRIFEVHOBGSXMDRYHHTECXXODGCLAYMZHUVZLHNHBMDXUWUOTPSFLJPJPTUUFFKABJOAYCOWZEGSUISRPEGWETETJIUXKGBKGNDLVPZVACINJSCCDSPQEXKS");
    tmp_msg_0.leader_speed = 0.9471218041170154;
    tmp_msg_0.leader_bank_lim = 0.1521126152557486;
    tmp_msg_0.pos_sim_err_lim = 0.462237335820886;
    tmp_msg_0.pos_sim_err_wrn = 0.7397704861681382;
    tmp_msg_0.pos_sim_err_timeout = 17445U;
    tmp_msg_0.converg_max = 0.3566562173864216;
    tmp_msg_0.converg_timeout = 24510U;
    tmp_msg_0.comms_timeout = 37344U;
    tmp_msg_0.turb_lim = 0.21555181850172667;
    tmp_msg_0.custom.assign("AQZTTBMOGGQGRNG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4320U;
    msg.info.assign("BDQWIDWZWQMEBHUZZFLKKOQMLTUEMJKBGECWSMCEQESJZKCIKDXVZSHYQIBXMPFGBTMNPFKYEGXANNYXGLWTAUIRLHSSWRGFYPDCVCDMHNBB");

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
    msg.setTimeStamp(0.40795075128498803);
    msg.setSource(18496U);
    msg.setSourceEntity(183U);
    msg.setDestination(33151U);
    msg.setDestinationEntity(123U);
    msg.type = 140U;
    msg.request_id = 26938U;
    msg.command = 171U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 57449U;
    tmp_msg_0.custom.assign("OBDSUQASQTQLHUCAEXZZNWWUKPKXFVQRYTLFKBNRELWNYBNUPEOGSJOTZTQJVPBMMMOWAOSHSRPECNILMVROKTFRDHOHAYUFBSZNFOKDHIZHLSEHBJWWYKMEXJGFERNJBIRKEQIUSCWXGIJZAZFYGVVXQGYDQVCMBWMNJAZA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16751U;
    msg.info.assign("QLPZNBDQAJTHNULQFJKHIYDZUY");

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
    msg.setTimeStamp(0.33007224775447774);
    msg.setSource(5172U);
    msg.setSourceEntity(59U);
    msg.setDestination(26946U);
    msg.setDestinationEntity(219U);
    msg.type = 85U;
    msg.request_id = 47675U;
    msg.command = 91U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 26654U;
    tmp_msg_0.lat = 0.06195533316990587;
    tmp_msg_0.lon = 0.6431001975478184;
    tmp_msg_0.z = 0.5065591669366416;
    tmp_msg_0.z_units = 200U;
    tmp_msg_0.speed = 0.24185311782628538;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.roll = 0.8891121112341651;
    tmp_msg_0.pitch = 0.022896048972698257;
    tmp_msg_0.yaw = 0.9235539581272408;
    tmp_msg_0.custom.assign("VSGYRELXTENHQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26675U;
    msg.info.assign("MTMJBAZBODNPNGQQFLAEVZVQRMPGFXZUTUQEOMYHGOYNLGWBEDTTZSKLSETAPNZECAGRKTBCOJHHYKYPEVIWBUNEFARXZLCLUDNFLFBZJCHPEOSQXOYVKVQOWNCVOKUWLTVZRIJKRFRVKULJIIJWAXFUKXHYNYCGUHZDFBQYCXSRDAMSXSGASIPPWHQULYDSDTPCTNQOJZRKIPMQFVRRMBWGJMILFEBDSBWNHPDEM");

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
    msg.setTimeStamp(0.08767184621297064);
    msg.setSource(54891U);
    msg.setSourceEntity(245U);
    msg.setDestination(35137U);
    msg.setDestinationEntity(137U);
    msg.command = 248U;
    msg.entities.assign("ZXGCSOSRXPAITMTDVUJPYNLZVUEANOKNJ");

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
    msg.setTimeStamp(0.006583700798610925);
    msg.setSource(46235U);
    msg.setSourceEntity(194U);
    msg.setDestination(24321U);
    msg.setDestinationEntity(143U);
    msg.command = 188U;
    msg.entities.assign("XFVAVRFXWGETKMXJIRLJSIMZBGLCXSISQSEGIHMKJUMQRDZFNKHLRYJWBWOOJQFPJKMZUZCBENEFGCRYBRENOYDGONWDGLUUYPAKXBSRHHKPUVBNGTUXSFVDJNTOVXCPCGGEMIPSALVHUIPXKRPATZDENEFOXKZQWIIPNELDCQMLBMOCHDWAQIPTCUMDYASAKRYCOVIQQTWHSVVTZXYDYTQLWZFHTPLAORSAEWHDWUCBZJFBOJ");

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
    msg.setTimeStamp(0.11470410241424178);
    msg.setSource(58274U);
    msg.setSourceEntity(254U);
    msg.setDestination(38435U);
    msg.setDestinationEntity(222U);
    msg.command = 12U;
    msg.entities.assign("JIETSNTKRBOCCPMGIBMWHLCHUYUXSCTIZOKIAPVPBVFSQIOXRBVLBUDIHZOXFGLWXEHZSKYRUZMSODREDDBZZTHCRHUFTWUFTPJIM");

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
    msg.setTimeStamp(0.17925507041025568);
    msg.setSource(15070U);
    msg.setSourceEntity(213U);
    msg.setDestination(53584U);
    msg.setDestinationEntity(169U);
    msg.mcount = 143U;
    msg.mnames.assign("UAGIWIFULVITWYWLZPWXKJKEEYDPGLRSRBUCUAZWJIKLXVSVPOSTXRWBVIEMIZVSWNKEUXVREPYGYVHZMJDODXARQTECOMBHNFMUNODJIXZEXNBISPDKPPTKQVLTFLBRCJLAVMOTNHQDUXP");
    msg.ecount = 63U;
    msg.enames.assign("YIMPBHTFCMCKHDJOZVATBCEYWXBTSDKKKRHVDETYTSLXPNOWNPLPONTXSTEPXGRBBOHLZFYCFVJXMTHCUWVOUFSPRNJEIWDZGWKCUWTQSNHG");
    msg.ccount = 235U;
    msg.cnames.assign("QKADVWQWIKKUHPDNAAFLSHEUXJSOTINHTIKURSVZVGGKPOAEIGMNLMAZWWDXHPUREDMYIPRRZGAHZCOPECNDK");
    msg.last_error.assign("EYJOVWICGFWLRZHLMRNRPGUDIIEATJUMHPKSHVSPKAEMWWVZQERXHZBZZXGCIWAVFHVLOJNSUCLECRBGZAVKPXMQUGLYSMEMPRUPPDFRCPTQKSGIQSFUVLQTYQZJEKDNYDUKFJSATKBMLOJOTSBHTEZFHJDSBBDCVKBUOYNNTWYWRDEXCFGTFIHJNLYFPTGIMODVWJLXAONDNQOYXQTQXAACJCBINZEAQRUDYOVBKYOPNWW");
    msg.last_error_time = 0.9580855980312764;

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
    msg.setTimeStamp(0.39288384549227684);
    msg.setSource(43651U);
    msg.setSourceEntity(20U);
    msg.setDestination(49638U);
    msg.setDestinationEntity(59U);
    msg.mcount = 193U;
    msg.mnames.assign("SGNVJNNXXACCHKTPHBMJYSRHXODDOQRCWJNGOHLWUBLLRFKBVYJUOODMIEEUCTTGWUXUKBFNQRQRSETGFZVERZDAPHQSTIEAHAXSMKEAJBDJIAWJYQWGFGMPYSBMWUDIVDYCMENKKHLBSDKOKIITXVKXFZYOCIRXZSPDGZAYCLSPZVBELFQRALNIGOZDOKYTMQXPRNWVJJVUPFAZNITILCMFLUSFWXGMWHM");
    msg.ecount = 1U;
    msg.enames.assign("WOXLSEQUFGYDHTPJUMGRMPVTXEDF");
    msg.ccount = 46U;
    msg.cnames.assign("GARLRAPOVSMTBYTXKZQCLQWQXOGFGRECJWUCBDEUIIAZNSQSPRAXBSTLVVFGNSHVTWCZOUYNRZLMMWJEIMPNENMBBNOPRGOEIMIWHCEXSKZLJFDBJT");
    msg.last_error.assign("QILVXOMKZOJOWPGCBJYWWKVMMRIUGGBULZDQBKAEMFARGUDCYUDYHZKAZSTIKPLAENMSNPSCDHMGFRGWLVYSEYQCDDJXQQMPJTJFSORVZNNXUKQVCSLGBJMAISKBSIQBSQWHUBXNHITJFTLMGXALEOKNRY");
    msg.last_error_time = 0.14569202839569262;

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
    msg.setTimeStamp(0.48722511446306127);
    msg.setSource(59522U);
    msg.setSourceEntity(250U);
    msg.setDestination(51110U);
    msg.setDestinationEntity(168U);
    msg.mcount = 194U;
    msg.mnames.assign("VZRGRJJWGTENTCFCIQZWNHJCLMTNJBQKPODQWTUIOGLNQAQTSTPURXHYUDDCZJBVWPMERYULTAYWMHCQVANXZXIGHLKLEYKTKXLOMVJBSSGPGSIFVHWNKDFIPLFNYEKXEQIEMVDLYRORVLDKHXERI");
    msg.ecount = 204U;
    msg.enames.assign("IACBSYDLUVRSSWULFGXIQPWRYQIMKVYDILPPEHCNCOUEKVSLQZQJYCYRPKHMIZTTOBRTMERORPWNNEULCPGNVSHHGVUQWBBWFBXNZSYQUZJGUQYGIZDJDTPLYDOFWEYCIXHRLFSFFEMDGTPKCHOGZD");
    msg.ccount = 83U;
    msg.cnames.assign("QTDRXATQEQNGJGMYEABWFSBPDHKHVANBSGRRINSVXZMTNQJYMPCNXCFOGUYZFTYAWVKSPCRDUICWJOHIDPESBZHIGJEFAAYXRAKCEXUZTOVXCVUALDNLFYDPGGLPZJASNOBPJREHFQUSYUTBUTNQIFLWBXMJEUURZRXRQLVCIWQA");
    msg.last_error.assign("UTTLMDYUGMASCBKICIUXMTASJQFTWFFGECJJSABXKCXNWSRENMPCBPCVYWWDYPXPKVINLVKDSVWEZHGRZOBHKMCOLKYOFMNJAMPUBDWNWQHOEHHGEITMBKEPYAYKDGJBNRBJCPESYIVVQQWMDUNHZN");
    msg.last_error_time = 0.03555137740397862;

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
    msg.setTimeStamp(0.9073303703473106);
    msg.setSource(37092U);
    msg.setSourceEntity(60U);
    msg.setDestination(9655U);
    msg.setDestinationEntity(143U);
    msg.mask = 185U;
    msg.max_depth = 0.7818967988178264;
    msg.min_altitude = 0.5038073091227789;
    msg.max_altitude = 0.1464939672186536;
    msg.min_speed = 0.1709784685234953;
    msg.max_speed = 0.8556346695277952;
    msg.max_vrate = 0.8957295438250391;
    msg.lat = 0.5275693541277585;
    msg.lon = 0.4962648681649059;
    msg.orientation = 0.09345850956182566;
    msg.width = 0.4474838110561492;
    msg.length = 0.4138934682176677;

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
    msg.setTimeStamp(0.8748547719128984);
    msg.setSource(16646U);
    msg.setSourceEntity(166U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(151U);
    msg.mask = 140U;
    msg.max_depth = 0.373225606654213;
    msg.min_altitude = 0.1877466203721696;
    msg.max_altitude = 0.21937152555708905;
    msg.min_speed = 0.49528665524684223;
    msg.max_speed = 0.8956367634232055;
    msg.max_vrate = 0.7683721231753077;
    msg.lat = 0.7472055610443461;
    msg.lon = 0.8830660008464646;
    msg.orientation = 0.08381000597778954;
    msg.width = 0.7877535457275843;
    msg.length = 0.5850692940613822;

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
    msg.setTimeStamp(0.37756132565060263);
    msg.setSource(9588U);
    msg.setSourceEntity(73U);
    msg.setDestination(41875U);
    msg.setDestinationEntity(76U);
    msg.mask = 15U;
    msg.max_depth = 0.890078483588314;
    msg.min_altitude = 0.6178479782408066;
    msg.max_altitude = 0.6296707299886958;
    msg.min_speed = 0.826027709923369;
    msg.max_speed = 0.72090507515198;
    msg.max_vrate = 0.7898208016135551;
    msg.lat = 0.82852106625407;
    msg.lon = 0.9268345174162445;
    msg.orientation = 0.23083351906691252;
    msg.width = 0.10356935099176179;
    msg.length = 0.1278949926271039;

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
    msg.setTimeStamp(0.84584374472707);
    msg.setSource(3969U);
    msg.setSourceEntity(58U);
    msg.setDestination(11320U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.9600343890548316);
    msg.setSource(51714U);
    msg.setSourceEntity(144U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.34145400081209454);
    msg.setSource(52911U);
    msg.setSourceEntity(68U);
    msg.setDestination(35149U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.609065520142269);
    msg.setSource(55638U);
    msg.setSourceEntity(177U);
    msg.setDestination(1689U);
    msg.setDestinationEntity(163U);
    msg.duration = 61014U;

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
    msg.setTimeStamp(0.28341704483212393);
    msg.setSource(62440U);
    msg.setSourceEntity(64U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(251U);
    msg.duration = 52366U;

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
    msg.setTimeStamp(0.9631860328993042);
    msg.setSource(62731U);
    msg.setSourceEntity(217U);
    msg.setDestination(336U);
    msg.setDestinationEntity(77U);
    msg.duration = 42468U;

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
    msg.setTimeStamp(0.8439474590933719);
    msg.setSource(4065U);
    msg.setSourceEntity(45U);
    msg.setDestination(57388U);
    msg.setDestinationEntity(59U);
    msg.enable = 254U;
    msg.mask = 3902675888U;
    msg.scope_ref = 1181057797U;

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
    msg.setTimeStamp(0.36849432523491366);
    msg.setSource(5887U);
    msg.setSourceEntity(119U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(117U);
    msg.enable = 81U;
    msg.mask = 2330624667U;
    msg.scope_ref = 3937778273U;

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
    msg.setTimeStamp(0.3897777465365013);
    msg.setSource(22578U);
    msg.setSourceEntity(145U);
    msg.setDestination(20339U);
    msg.setDestinationEntity(195U);
    msg.enable = 89U;
    msg.mask = 3474816055U;
    msg.scope_ref = 3389580385U;

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
    msg.setTimeStamp(0.0010417993488995858);
    msg.setSource(56432U);
    msg.setSourceEntity(88U);
    msg.setDestination(22749U);
    msg.setDestinationEntity(247U);
    msg.medium = 143U;

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
    msg.setTimeStamp(0.37339506561039126);
    msg.setSource(40917U);
    msg.setSourceEntity(247U);
    msg.setDestination(6805U);
    msg.setDestinationEntity(13U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.26461571750551927);
    msg.setSource(28254U);
    msg.setSourceEntity(180U);
    msg.setDestination(31032U);
    msg.setDestinationEntity(241U);
    msg.medium = 218U;

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
    msg.setTimeStamp(0.36049089729451633);
    msg.setSource(19049U);
    msg.setSourceEntity(131U);
    msg.setDestination(62162U);
    msg.setDestinationEntity(14U);
    msg.value = 0.7103342523125464;
    msg.type = 246U;

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
    msg.setTimeStamp(0.8668250007778889);
    msg.setSource(5437U);
    msg.setSourceEntity(167U);
    msg.setDestination(33984U);
    msg.setDestinationEntity(56U);
    msg.value = 0.1583457842213566;
    msg.type = 78U;

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
    msg.setTimeStamp(0.7680579058788406);
    msg.setSource(1933U);
    msg.setSourceEntity(143U);
    msg.setDestination(49526U);
    msg.setDestinationEntity(152U);
    msg.value = 0.24950020521370808;
    msg.type = 96U;

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
    msg.setTimeStamp(0.5763824763171379);
    msg.setSource(15643U);
    msg.setSourceEntity(26U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(112U);
    msg.possimerr = 0.7042782373254944;
    msg.converg = 0.4446646685839608;
    msg.turbulence = 0.6711890601686018;
    msg.possimmon = 178U;
    msg.commmon = 192U;
    msg.convergmon = 54U;

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
    msg.setTimeStamp(0.5005991319863877);
    msg.setSource(52269U);
    msg.setSourceEntity(237U);
    msg.setDestination(64115U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.10416055243592026;
    msg.converg = 0.4599815700426748;
    msg.turbulence = 0.35277265831448423;
    msg.possimmon = 29U;
    msg.commmon = 82U;
    msg.convergmon = 45U;

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
    msg.setTimeStamp(0.862881062784051);
    msg.setSource(21794U);
    msg.setSourceEntity(14U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.1923282235456253;
    msg.converg = 0.9624842162536711;
    msg.turbulence = 0.4726023737274674;
    msg.possimmon = 119U;
    msg.commmon = 239U;
    msg.convergmon = 242U;

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
    msg.setTimeStamp(0.35977031836903006);
    msg.setSource(36449U);
    msg.setSourceEntity(13U);
    msg.setDestination(15297U);
    msg.setDestinationEntity(15U);
    msg.autonomy = 159U;
    msg.mode.assign("LTRETPKYFOSRWAJGEKBTIRGBFSJYOUHVJGMLPGJDRQTSFEJHMHAGXDKPPQNRVXOUGMRZQQYMPPNVT");

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
    msg.setTimeStamp(0.10196162042884571);
    msg.setSource(62264U);
    msg.setSourceEntity(224U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(108U);
    msg.autonomy = 81U;
    msg.mode.assign("DWSHYVECHVPVJTMDYXGUNNRFLCRIHBKXFIOASIGOWZZXTYQEHGHUIGRXFZRSRAMGSMDPNMLNEYMEGTZYVVWMYSDOKFTXPOWTDUQLWBTNJCWCTMLPQMKYXLRFJBPIZQOHKKUHYJGAWDOAZOEGZGBQYECFVNWLSOU");

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
    msg.setTimeStamp(0.519750695966671);
    msg.setSource(1147U);
    msg.setSourceEntity(153U);
    msg.setDestination(51389U);
    msg.setDestinationEntity(138U);
    msg.autonomy = 83U;
    msg.mode.assign("DPGAQNHJUFXEIQTYRXOBQUWKJVWOHJAEO");

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
    msg.setTimeStamp(0.7132376481254981);
    msg.setSource(61463U);
    msg.setSourceEntity(13U);
    msg.setDestination(60221U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.9316724185475943);
    msg.setSource(58893U);
    msg.setSourceEntity(98U);
    msg.setDestination(49577U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.6144686848707046);
    msg.setSource(26162U);
    msg.setSourceEntity(85U);
    msg.setDestination(37797U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.9462745809255828);
    msg.setSource(50005U);
    msg.setSourceEntity(0U);
    msg.setDestination(41045U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("PQSQADRPVXAKNLKTFADYDHYTJFTBCLHZFEBDEFOWGZVDRKOLPZBRQBEASQPXZJUYHIXMAORCMIBMERCBQJE");
    msg.description.assign("KDKJSLHSJOOGMJHKQWGDKPGYKILNPOYZDROXDSCJZCNMBXCQTJXWYMUMNWWTKHEVUJMAPSIIGVTHQIOXRMLTPFBZJIAGNPFRLGNPSRJTFCVUYMQRUSITXEUXJLBBBNHLBKSFQKNKODTGZQDHIMFWUPRVTWUDQFDXWFBSSCEVFTESAYOTWARZNEANOEGZAZRYQOZVHYACQCHFXAFBYBM");
    msg.vnamespace.assign("TBPKSDULHRAWCOJNSYKAYVRLECPHCSVCHGWXHZPWJBGUPPGFOSVVKSBOPIBGEMWQEFAUYDGDBAZXZQYLIRJTKRXVIUKZMBTGYIYUETTUMDQKOSDNIJKGXGNQNLEVFHAAVEFABILBNFFIKLOWOBZXSPDZNXKXMAQZOEJJRMXUWLCLFLTXNJHIRJCHHREMHYYTQUZMCHXDCUAZDVORLVPMWTIBCMDWZGNKJCYDVPMRNFQG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QFRSCFYXFJEGSSTCHBTIJRSJDWFDTNZZRWPOAFZKRTUZGGXEWNIDJZJOUYWIIMXWBBEKBKXSPLIXAATEAKDFHCBORMGHQZXKLECSCYMLEJNZMPRHLOGKFGFVPATYQWDMUTQVOEAVWLSHJDPTD");
    tmp_msg_0.value.assign("UYJQVLJXRW");
    tmp_msg_0.type = 192U;
    tmp_msg_0.access = 104U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SWQFPFGZAKILTEXQVDQHBWHEOUWETXNCDPLTOULKAUPUEWIEGETIVNCWCCMBXXUHZIAKAOJOGKNJMZCDFYHTVUUTIIDNCLJBKVLYFYQMJFIIPXYSOOULWWLECGEZQVRQRTJOCBUXAKPMWHMSAGCAXRSPKLPSWIAHVZYRDLGKTMJYSGFTJKFVGZRQFYBMZDJSRQPMBRBWDNUEYBHROAHMMDCOHINSFYDAJHFYJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MTOIPMARCUIUJLDXAJZNUVTGQGBTYIGMBNHLWNJVTFGAQDKTLLFCN");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 3010U;
    tmp_tmp_msg_1_0.lat = 0.7738146134198356;
    tmp_tmp_msg_1_0.lon = 0.19719897093377792;
    tmp_tmp_msg_1_0.z = 0.44257355959932443;
    tmp_tmp_msg_1_0.z_units = 79U;
    tmp_tmp_msg_1_0.speed = 0.6444519716815845;
    tmp_tmp_msg_1_0.speed_units = 91U;
    tmp_tmp_msg_1_0.custom.assign("UCALSSDVUFMMNAUDDTMXUNYWGXNOJTRGJEZVSPWZBEZUIFQXSIJUJDFJLIHWXXBHBJCODOGRBFYNEKMCPJFBIKRCKEOHCPLXCAYCKWIRGMOCQZHVEWDQJXZHEVPGMSGYJVZYLFMNQVSGCVDTRGBKQRRTLSZHAIARQB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QSBRVDAHWVLTFTSKAUAPGNXBJY");
    tmp_msg_2.dest_man.assign("FQCATPFGIHXOTTOQXQTFPJLAGVNBCBQWXFODWPBLXHBSPLTERZKUAUMEJQPGPEWVGLSRHGKQGACKDOSCJBWNMAPQVKRFAGCSDQWGWYIYZKYZTHFSNA");
    tmp_msg_2.conditions.assign("WKPPFDGOZRWFNNHHHMOOTNXCWLLBTAAHEAKMUJEZFKNUZCTSDXBEYQOKBXSPKSCFBTJVGAUIRQLWLBMVJMIQBZFLUMRQMTJRQEEHLIWXDMOZHYKWAQVZTPUNQZMYGYBUAQAGTKEVRPEJRVSCHPJNBS");
    IMC::CustomManeuver tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 11974U;
    tmp_tmp_msg_2_0.name.assign("PETIDMQWACKZEZSDKFVYPJMBZMMPPHVOJRCPNJETQOLTLFTHAPOJCLSNUQVUMYWMBQENRCRRJQZXIFZXRWLVOUPKCNNYFPEYARJHWWBTDWQ");
    tmp_tmp_msg_2_0.custom.assign("BARNQMKLXQDCVUSYDTUXSNAWTPOBPJJMJUAGLQJWHSFAHEPINXWCORGPOJDCMDPNZCUSOIULHOQCDFKAHYEEZEZXKZWKRTKGYILQJZAPSYOONDVMYOYVGKNUDJFQNDSEWXHRBZSSFTGIYTBHCFEHJKSGXEWBXRVHVLLMQPLWAQQTKYRIBSUDFCHVBZZBGGAFUYEMAJYRAIUKOVINLBGTR");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::VehicleCommand tmp_msg_3;
    tmp_msg_3.type = 139U;
    tmp_msg_3.request_id = 43566U;
    tmp_msg_3.command = 179U;
    IMC::CompassCalibration tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.timeout = 55933U;
    tmp_tmp_msg_3_0.lat = 0.00484194591019127;
    tmp_tmp_msg_3_0.lon = 0.5411420753872478;
    tmp_tmp_msg_3_0.z = 0.6684803856611234;
    tmp_tmp_msg_3_0.z_units = 192U;
    tmp_tmp_msg_3_0.pitch = 0.8949650477708848;
    tmp_tmp_msg_3_0.amplitude = 0.4273401526833538;
    tmp_tmp_msg_3_0.duration = 5222U;
    tmp_tmp_msg_3_0.speed = 0.5944735189380768;
    tmp_tmp_msg_3_0.speed_units = 139U;
    tmp_tmp_msg_3_0.radius = 0.5446421915824219;
    tmp_tmp_msg_3_0.direction = 209U;
    tmp_tmp_msg_3_0.custom.assign("AFEXRMJDEXVULNCXHJHUQDRJRVLHDTVASTWEFYBYSSMZWOVCGWUWDZHWIJKGFEKYSIGDUFILVCMYEZHUOAAMNAPDNVOSBTKYCUOVQLTGPKRMZSYVYBFSF");
    tmp_msg_3.maneuver.set(tmp_tmp_msg_3_0);
    tmp_msg_3.calib_time = 63978U;
    tmp_msg_3.info.assign("TIRGBJYUVFSELYRTINAHXNNIAGYMMFLZLNGXQHLKKBCFXKLTLAQZJIHYQXPAENRZCMXIDSLSKUFMWVRQEXDJDYOEMWNWAVETCWOBFTTBDROXMQEYCOCFQSZDJIUQVQPETWYUACGVWVXPXRGOCKAOEYOKXNBYQOSJZDHVZUMJGWZAUYSJJBZTHPPMRVJWHOKNSTPBFH");
    msg.start_actions.push_back(tmp_msg_3);
    IMC::QueryEntityParameters tmp_msg_4;
    tmp_msg_4.name.assign("LZTFLNFKGONSVKPFEIOZJLBHJTJRPBUMWZVEVHAMORZHSNODKXBBFRCNGNIDWKQSBTFELTJRWIVQBLZXJSLKMPDEXPOBZMCOUYRUOKQGXHGUKEWXQNVYMFCJULVDAKTLIHJMYYEPAUKPACRZPXMLIZ");
    tmp_msg_4.visibility.assign("CSMKSXVHOJAFBIFECSQATORZSUORRQOVDPTODGSSELKXRGCDJVXUBTABVFEDGTRFZUGUYKPWQFKQMCIXWYLJEHNYLGVTQDIZMEPXENPAQGZWYGMPHOXLJZHUCNVBRZRSXYXYIKQDBEAMLHYZAPWUNEFMPAYNTQHEIWGLGLOXTUWIOZGJCBWPTVJWMEYRUDTTHUDKJJLWWMD");
    tmp_msg_4.scope.assign("UPZOEYLNDZWBHSXGXOROQKYKHEDBCPLMSMJFUVBKNGAAXLDJSTTBTUVZHARTECQGFAMJCHRCGSSOUQJCBYVMVDKEXYOILMHGHVRXLBFTAJVIWZIOZGQUPHUKPHJKNIFAYRTWXPTYZYIXPWJFWFDF");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.9514793567346395);
    msg.setSource(10336U);
    msg.setSourceEntity(94U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("DCEUJPXJFMHTIQYGOXMGLNKLYLKATCZTNJPVLFVGVBUMUORJWNJSWKESJTHSKRTMKBUNDWFGMSAJLKBHBNBYQXVVIWHHYOIWAVELLKFKOJPSUUVSWIASAEZXUMNDFYHDY");
    msg.description.assign("QLSQIXEZYZPBHSLUXBSNCDDUFYOMNMFMJZGCXIWOSKGLTNTZUDRMXGDHYQTOBJKOOVHACZDTMOITNKRFCFTXSKJRBSVIABPPQTFJWNVEXFSUZCYPYHUEJIMWKZHWWNGHWMQZJOLFBDUILYIRHNEDLTKCOKRGESRCAFJRIEJQCALFJGRTBEAULLKRWXXWVPKNUJHPPCRYVHIGAQZQBEQQHPDDNKDMMILMCOGXUW");
    msg.vnamespace.assign("TLVEYVSEUJLZRFGTOWAJZRHVMBCNODERMUKQYKNZEXIAWMINMAHBAIFOLTASQZXYRLJKUHBIHBCFGHWCTYDKVPPXDRZAGOEHIRHWLJOKVGHMSDFRCBXEBQUYONKSIUNVFOBXFIQCAFPRVQKG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VBKAVTLJGNXZXEMODRVTMWJCLTBILQIPKQFXSXAFHTNUOEJOVIESOSHORHFEZXVIEEKCUGXLGNYJNGKGNZTYYDLYJFNYJU");
    tmp_msg_0.value.assign("UMGVUBHZJQYUWNYEQYHHZOMVBCBWPBACBAKAJVFJNXUPDIMQEUADIZAFHFOSVKTCIEFGGEJTLUYNCQEWBNUTXLPTDDGYOIFXHFDVLNYUWSRQRN");
    tmp_msg_0.type = 121U;
    tmp_msg_0.access = 169U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PAZVXVBYDTFTUSUQTMOJJEOGHCKMIHEAWJZHZCWCNYGGDXKJFNKWPAGKPNEXQSAHWBWYMVWHKQTONIZZCPLVSOOUQGSPIYEYDJKZVYCCYDQXWELKXBHISGBLTDCUQXBCTRFNAPORLKZAHQSGDNCFFLEQRAPYFIMQYUJNDXENJIBREXAFWBUSPNMUTDBOMLEAASUBLHRRXRJUJWMDEZRTI");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WRJYSBJXHTHAFZNIZWKVIZLDTRPMFLRPPBLDRTDEDGKTPEUAWBCVCKOADDWAUDOOXXOEBFZPCESAEXSLLNWONZYBHQGKHQOSPYDQZSQGOFIJGGHIQEIFWYUETREURRACWPURIFBVJAKJNVIQSCVXYOZBFJBXAOCUIIGXJNSVPATHSLSZSMNCDUQUNMCMGKMMGYWZXHMFYIUYXXHZHCQVDTFLMOLMJCREMKTKU");
    tmp_msg_1.dest_man.assign("XEPYKQORVSFLZBWWVRVNHFDPOCLGJQUEMFTGZTSPERRWFRUIDAILLQNFEZQNOVZPHYJVKUBMYVHCTDPKZHBXAIJEKCVAF");
    tmp_msg_1.conditions.assign("RGTEEZZXTBJRUQNWMSLPWHLQZRRQRPHAFYCPFBRREHPYOUCEBDLMJAKTDWVUHDWOYJMPAGEXXWOFAUVCIOKVYHLDNTEAYNNPXJLQVCIMOFDAUHLFNDYFSCDZKTSOHRVCJVIGIWASQUX");
    IMC::EntityMonitoringState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.mcount = 182U;
    tmp_tmp_msg_1_0.mnames.assign("ITXWCLQCIPVNQXRPVKYRHUFWAOVTRSEUHIRA");
    tmp_tmp_msg_1_0.ecount = 253U;
    tmp_tmp_msg_1_0.enames.assign("GZLIVRQPYERCGBNNXSNPUCIZEDBKVFLVUHMDHLYLENKVOVQOMYOHMWSSGQNIQFBIJWNGWKCHYEVWUCLZXMWCODRHFZFPTGJAGTREQRMSVXJTNIXHYWPDJEXQYACHKXBOUHPPFIFLEIRGUAFTKIMSUHFPYRCOTBPQMFYOXEJOBZLLLGSQBKCNJAKLRZZUNUWXBIAAMSAVTOVKAZETBQJ");
    tmp_tmp_msg_1_0.ccount = 99U;
    tmp_tmp_msg_1_0.cnames.assign("URVTAHXGOJMUBQJFNROSEZKOSDAPPKNXBZQNFUQDZGHPZTGRHPQRCTKPNLIDENPGIIJLUVFCEPNYIBZYRQCXSMEAXQUGQVNJDEOBAXVZYCMCSEDGLTGEJHTZKPWCDHMANKJNYYTJKAGSYAVPWILDBMZXCPYWBUFWIDOJICMLQORVZLKNVHRWFWVLJ");
    tmp_tmp_msg_1_0.last_error.assign("KYNHJNZVAEIDZWZPXUOKIGJBAXNKDNLBXJQMYYAXEXQLDOBJSSHNQHBMKLAGJGYHNZBCJNLTLMPSIFDUVQAEQNUNDQUKCCBOHEGTPXTUKRZTQYIFDEQFDEMJTLUXDIRSMWTVRRVIWPRXCUDFJOFJUMZCFTZOFRPMSLHXOJHIHEWRSZQKAIWVGIGLAWWOFAYSYPSWKOPPVZENATFGHCVGRXYMSVZFCGBCDRYSWL");
    tmp_tmp_msg_1_0.last_error_time = 0.6062100941214417;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::LblConfig tmp_msg_2;
    tmp_msg_2.op = 105U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::TrexPlan tmp_msg_3;
    tmp_msg_3.reactor.assign("BJFHLKCRSFMZRLW");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.554620538719508);
    msg.setSource(50423U);
    msg.setSourceEntity(192U);
    msg.setDestination(20413U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("LKQOWIXEQXPBQCAIWDPQSMHPKZMSXQVABGODVMWRMGHAPFIESXYWWGBKHZPHOAPYXNQVNDTLYUSHGGJTDCVETWZRSQYEGVFYCUFPMTAFSJGDOULTJZJNNCWNBKCWYKIVONASCGJTHUWCOMENBPICIBLSJZLOEDBXSIKULIUUNRUFZPCFLZKAFQSDOZMVLKDMT");
    msg.description.assign("INETMQCFKUTWEJRESJDWISIAPKLUFRSWMBTATCABWGHOOLVGHYTTNDJVDKZROPLICAUPPGHZ");
    msg.vnamespace.assign("WBHAGZIZRIJSGSCSRBORAIUAOIAOZVYSOWRCGJETICTEJHUKWBMPXZUKSMKODEWHPEIOVQHUTMJYZJEZZEPYQCMQEJQBFGYXLYHXQKHJTXHPWSLYBDMUFU");
    msg.start_man_id.assign("XTKVPWRUGJMABZZJSJDGCLEFORHVHFPUGKPCYSMZTHREOMQFFTVUXLYQARYOOBKFMPDSQGRNFIDKEFSSAJZOBHWUCBJPNWRBXSVWUCRZCMNXXVMVRGOWSEKEMQOPLFHVDZBJZAMDIHLVYBJGYTLWUZKEI");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DRWTVLHCTJNXVRDERUD");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 3109U;
    tmp_tmp_msg_0_0.lat = 0.8124330047349306;
    tmp_tmp_msg_0_0.lon = 0.4167747959234228;
    tmp_tmp_msg_0_0.z = 0.2237347036844104;
    tmp_tmp_msg_0_0.z_units = 34U;
    tmp_tmp_msg_0_0.duration = 55575U;
    tmp_tmp_msg_0_0.speed = 0.41674730697132967;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_tmp_msg_0_0.type = 235U;
    tmp_tmp_msg_0_0.radius = 0.7135523706606104;
    tmp_tmp_msg_0_0.length = 0.9717666925326666;
    tmp_tmp_msg_0_0.bearing = 0.014318964884962648;
    tmp_tmp_msg_0_0.direction = 201U;
    tmp_tmp_msg_0_0.custom.assign("UMIWROLZCLQODAFGYEERGOZQWJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::ServoPosition tmp_msg_1;
    tmp_msg_1.id = 130U;
    tmp_msg_1.value = 0.3872236439611374;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.06790843883405218);
    msg.setSource(58799U);
    msg.setSourceEntity(149U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(5U);
    msg.maneuver_id.assign("DCUUWSXYWGHAZGHHWLOIPAFSFQVCIJZZJIBJISXLGBSAOFHDRJVDGVYWZOOKDITQROAVGLQFVCYJYBNNQGYTWAIEUJTRMTKFXUFWEKTS");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 8560U;
    tmp_msg_0.lat = 0.12281275726924146;
    tmp_msg_0.lon = 0.6413731993645346;
    tmp_msg_0.z = 0.2610429378321496;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.speed = 0.05543374818898572;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.bearing = 0.6894211873878702;
    tmp_msg_0.cross_angle = 0.4544466583990685;
    tmp_msg_0.width = 0.4017889273963897;
    tmp_msg_0.length = 0.010578950820081978;
    tmp_msg_0.hstep = 0.4824111211936626;
    tmp_msg_0.coff = 65U;
    tmp_msg_0.alternation = 236U;
    tmp_msg_0.flags = 154U;
    tmp_msg_0.custom.assign("SBGNPMXMIXGHVQFYTZMZUVQICSEYFDOMCCWTYYFZEWDQPLUWKNFPMZEPUZMOBPAEHTWVIJZVTEGLSGRQFGFDTATXNUREFAJKSHYPCAKLXP");
    msg.data.set(tmp_msg_0);
    IMC::SmsRx tmp_msg_1;
    tmp_msg_1.source.assign("ZQNUCEHZDCWVTOKAXAZNAMTGHPEVFDEIVACQPJGYGNOWTKCDIFXIRBXKDFQZUKDKWY");
    const char tmp_tmp_msg_1_0[] = {-105, 103, -83, 121, 86, 32, -40, -107, -89, 85, -49, 55, 118, 51, -77, -16, -75, 91, 17, 24, 41, 94, -83, 96, 5, 116, -121, -92, -45, -81, 30, 39, -115, 92, 115, 13, 77, -94, 6, -68, 62, -100, 102, 28, -90, 83, -13, -80, 7, 48, 41, -104, -80, 116, 68, 88, 118, 112, -26, -60, -11, -89, -105, -94, -60, -113, -44, 100, 90, -112, -86, -50, 125, -126, 0, -83, 64, -26, 78, -70, -123, -97, -34, -43, -120, -1, 51, -95, -82, 34, -72, -113, 92, -121, 55, -107, -62, -40, 100, 109, 93, 86, 123, 93, -45, 42, 98, 65, 121, -78, 55, -107, 7, 85, 0, 121, -16, 113, 16, -41, 64, -15, 88, 67, -7, -14, 21, 41, 100, 85, -44, 19, 0, -89, -26, -109, 43, 20, 27, -26, -15, -118, 95, 97, -21, 119, 89, -106, -34, -33, -62, -125, -58, 112, -4, -95, -109, -23, -114, -7, 29, -93, -5, -23, -121, 57, -66, 15, 113, 80, -44, -34, -111, 29, 106, 46, -121, 10, -77, -117, -115, -11, -24, -122, -49, -39, 38, -47, 33, 45, -22, 100, 121, 55, -98, 0, 126, -128, 11, 17, -40, 16, 99, 87, 33, 80, 93, 123, 43, -34, -13, 117, -65, 26, -83, 91, 80, -110, -9, 26, 18, 96, -33, 73, -40, -66, 47, -76, 84};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::RelativeHumidity tmp_msg_2;
    tmp_msg_2.value = 0.7012341568865089;
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
    msg.setTimeStamp(0.37514962099019766);
    msg.setSource(31876U);
    msg.setSourceEntity(213U);
    msg.setDestination(29326U);
    msg.setDestinationEntity(167U);
    msg.maneuver_id.assign("SVYRYTXVSLGOJBQJGAFKNFYPSQRUVSMIBZKFNHIAEPDBWNMWDVCCUFGEFANUUIFSRHGBAOWHOABXSPXJDFYLEVMUWVXENXSIUTIYINXYGJKLHLZAJKZDRWGIJNPKH");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.7103468874794343;
    tmp_msg_0.lon = 0.863054541661187;
    tmp_msg_0.speed = 0.07040671696019529;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.duration = 48520U;
    tmp_msg_0.sys_a = 65065U;
    tmp_msg_0.sys_b = 53740U;
    tmp_msg_0.move_threshold = 0.1709388286137924;
    msg.data.set(tmp_msg_0);
    IMC::MsgList tmp_msg_1;
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
    msg.setTimeStamp(0.07629863252018854);
    msg.setSource(22955U);
    msg.setSourceEntity(226U);
    msg.setDestination(49877U);
    msg.setDestinationEntity(96U);
    msg.maneuver_id.assign("ZTNYYRVGMZEWJPDFAHSDCCNJOKMGIOZXLXOJKEDFFHZYOEMSGRKYWBZNGIQNATVNRIXOZQYUWRYEOCSIPLNCISQNDAHPBPEUDCBRUXDVGIRQXUBYCQLXAQDVBGDWSWZBOXIGQWRYMSFVLXUFJEU");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 45093U;
    tmp_msg_0.rpm = 0.9504704057963936;
    tmp_msg_0.direction = 158U;
    tmp_msg_0.custom.assign("UPKRQJIHFZCPSPKBRZAUXPWSFONAFLXMYWHVTVZKOZCJGMJMZFFAGGVLJTGBQEREVMIOF");
    msg.data.set(tmp_msg_0);
    IMC::RhodamineDye tmp_msg_1;
    tmp_msg_1.value = 0.5977301486766725;
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
    msg.setTimeStamp(0.06569264362409322);
    msg.setSource(59259U);
    msg.setSourceEntity(228U);
    msg.setDestination(43656U);
    msg.setDestinationEntity(123U);
    msg.source_man.assign("OCDLSSIJALQTZYDPIIJHWAKTDDYKXWANNUPABSDLQXNUXYKLEIFIFVGZHGARTFCREXCVBOWZMUWRDGETJESFTVNZPTRJOYCHVUQKZXKAWDOMUCSHPJIOHXHZGURVFTZCVSGJRADIFCPHFMWSOQCRPBWRQBKMTLLCEGRAYGQPQBHYKUZEOWEABPBMEALVFMISGPDIGZLQKMLFYRONJWNNMJKGQIEQBDSTKVWNBFUJEXZHTYUM");
    msg.dest_man.assign("FDIQGLLBWCFTVPJHGPPCSQNCNENNBSJULUKGVKAHCESFXRVWAJOAWZAWGWYGRFGMLFJOMXDPZSGVQKZKFXUORCDMYHJQVGGMJZULJRYKFFOUUEPWRREXEYBOYFNDIQKGDEILMQDELOIXWDOZAUSAS");
    msg.conditions.assign("DBBRRFXKHORBLZQRCEGCSTCKVXMENLJQJYNPBARDPNVGMZZUFWZXEBDXWYFYOIIEDPNYWGAUVTLHFQJIEVECYKQQDGKOLCEMBFKBSNCTKJJAUESRFVLPXJQMYWZMUMKGZBGMVWDMGNAFRUSPADQBVNOGPTIDIGEIHOLOFSWWSKIHPAEXHLVIJHAY");

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
    msg.setTimeStamp(0.7160785212038167);
    msg.setSource(9410U);
    msg.setSourceEntity(84U);
    msg.setDestination(26295U);
    msg.setDestinationEntity(129U);
    msg.source_man.assign("HORIHJQCJRPXFVALKRSSRDQNVXJPODBCTCXLBOTOB");
    msg.dest_man.assign("EHIXGDDFGNATNOWCCKTCSQJANGZWVMTBBHBPLALJHHDFQCXPTFCQRUEYMDMIVPNEHZJSGEASYQLRSQTVGHBOBJQCGBORJSYAJZJXXYUUKTETAWJDXLMNFKTNYZWMWKSTEKRRNNOKEWUIVRMUMPCPJSDGTYIXXIDUFCRLXNZIEEAOIOQBULBFOGOLOHFFVVCQWMPURSC");
    msg.conditions.assign("WOBLLGMCELKQJFVHISSMSPISQXRTJXROKYSUKVJKNGOKVTNQAGCCNAYIHWTKGTUQDTGTKFZDARDMANQYCBHZORILZJPDLYWAOZEVCYOJALYBCMFOHPTIFDIAVSDOZXGKJNMGVXVUUPYGEWVFTUQHWZAWIXFEPCSCNBRBKEDEMRQDXXFUSKNOBRUMBOREZGQMIBWWQYNPULRZSHVARHHINYHACCVMXQZUUDELLX");

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
    msg.setTimeStamp(0.8499256759180558);
    msg.setSource(28769U);
    msg.setSourceEntity(144U);
    msg.setDestination(16102U);
    msg.setDestinationEntity(242U);
    msg.source_man.assign("MVNLGXTRBXAKHXXZRSPMYHJXARMBKQAHIDYEUPLSGUCMSFSOBHJVEHDMLWCLATGIOKDCIINEFPGUGXDXHCYEFUQDV");
    msg.dest_man.assign("MMFLNTZGCUSHYIY");
    msg.conditions.assign("NJYEMKSMTFYCLSDFFVUPZFRPGAPTPZMVQCOEDOSZJQDNZIRWBXVCDTEZWQZQQQUJCAFQPUXSBHROIVUQHUWRXQRRCNBNKXDOOVHFDIXUSDMEDCBTIKAURBKMOWSHOMTGALRGTABLOGSTAYWEAVZDUGFNGG");

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
    msg.setTimeStamp(0.7897460567638254);
    msg.setSource(974U);
    msg.setSourceEntity(117U);
    msg.setDestination(17731U);
    msg.setDestinationEntity(165U);
    msg.command = 235U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IZIDSPQROITDKSSFFJDGZVQJWMVZTQHAOJOBWR");
    tmp_msg_0.description.assign("AYDVVCIGJNTPVRYADIAMFHFRNDDPKDTJIIHVBGUKWZNLYVJCYWXETBCMSJJWGEPFKKYNGHZMFOVZXOMXSOQCAOWOMEDYRNGJNEUKEPTRTOLXTJIWLEFMFDXRVKIBBAQWFZOYZCYPEYQOQZBAWZQWHQSGKIUYRINXSMHVVHGFUCBGZHCCSPJZESXHGJTRMBGSNZUTOOALPAINXQ");
    tmp_msg_0.vnamespace.assign("GTYRLUSTDTSKPINCGREHLQBOJFPQURMEZVHIBEVONMBFREXQDWYMADRNWFCMHQG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DFGJWSFSSCDQPPPULVVXJUZDDWIWMUNZSPYBMQIIWUUTSTJYINATHFGHJYBINZDQJHMBTDGRLEAZFOGCIUGYZPEKLKRUXMVHJLEXVPBIHSTQLXFKCZLAZOBOEJUFVGYNCGWHMDGMQKMWKNIICXAVMERUZFVPTWMAEKEHJGNTBRCKTTBWRWYBIAOAXEBHXMLQFOXLNQPRLAHYSQRSJRXRVCZOAHFJPDCOVNCBOKZLWYYOESNDAOCXKURQF");
    tmp_tmp_msg_0_0.value.assign("TUUNCSEAOUFKXGQNEPACIRTKPSKSEEJYXMPAMTRLEHOUZTWESDAAKCGUWLNVCMVVFHRYWXUVMBMSPXZCGDHOKVGXYLNKTRJCTBZTWRHXCAIFJYVIMBCDPNUYPAQIZVDZJJQMURUYJNTDFODLHIBEKIUGZLWYLHHPVQAWMZJOBQQEBWXMJTIOXSSLGHOWPRQDNFEGKBCZZDFIJGKCWMXABVOLNOSFFBPKORX");
    tmp_tmp_msg_0_0.type = 121U;
    tmp_tmp_msg_0_0.access = 166U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BKANSKEDQZXTZLIYGYVSOAILBQGLWNLPTDCEQZTJIMNNJCEQNTMNDMKPOSRDWVWDSRPUVBYOXZLZEMPLDEPCNYBFAJBMIUQHTUIUXJFQODGXHUIPURMBGGTDIKWIPUEWXVSFWBHQXRFOCRBZNDKCXQTQRVHEEMKLEYHSPFJWHLVKJPCJRTUGRWKXRTXDILFABYZFANOUJMS");
    IMC::QueryLedBrightness tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("ENCJTTYNJDUROUZMLQIFHRKKAPSMPVMMYCFAGSIRNFEAQBTXUUDGAFVTETBAXRZOITHJPJBNNNEEMHOTWZZOJIPWIGWRPWDVYSXRQWJHQHSDDEFBEKDCCNTTGBKSXBPLJQMWZSNAXVLHIQKMMZKKBDVIURCKIPGMRQLMIGYFRSLOEDKWYPQDWZVVOTLHREL");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Target tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.label.assign("FUQTZQRGBGXXIBXBLFGCBUSQCWLYDRAZGQGSKXFNXRBFHEJUHMXKBVVECTUMHGOLBNLDLRKPHMOSPPYW");
    tmp_tmp_msg_0_2.lat = 0.9081946396468586;
    tmp_tmp_msg_0_2.lon = 0.20117311224092038;
    tmp_tmp_msg_0_2.z = 0.9381299116196654;
    tmp_tmp_msg_0_2.z_units = 172U;
    tmp_tmp_msg_0_2.cog = 0.8549807651007604;
    tmp_tmp_msg_0_2.sog = 0.5326157052600707;
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
    msg.setTimeStamp(0.7051687360559905);
    msg.setSource(10805U);
    msg.setSourceEntity(123U);
    msg.setDestination(2511U);
    msg.setDestinationEntity(149U);
    msg.command = 25U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JFWRMMEPYNXETKTPJLOAETKAVGMVSCJPWIIFGNDZHMZEYUKHAFWGWQANMWJOKCUMGJDHGWBWTYLADNVDPNKYAHHZXWVQOSFBFPGFLMIXJUAYKFJDXUTHERVLRDYNBRGNLSGTCLXVIHEQJBUQTJSZCGARELYADUBDVEQBG");
    tmp_msg_0.description.assign("IPNICOAAAFAJOFPQIYUYSKIXOVVXWJMHXDWWEWGEODLCWCTZBHAJZMCPIHBVRESYQOMDMLPLJRSRWYXZVJQITBGKEDONDQPUCUWSVNWBBTBFTQXPGKQNELYKUHNGOWTSKUKEBAJKMXWVFXTRKQSKVMALHTIZDCZQXGHAZYTRUXOACMUTLGSVHUMCYGNJQOSLRPRDLRURSFJNEGP");
    tmp_msg_0.vnamespace.assign("LQCDSDOMWSWJCJCISMNQWQVEBFOROVOSWUCVUADUNLCQNR");
    tmp_msg_0.start_man_id.assign("ILYGRKVJXSFJKQOQTDVPOMPZCSSTLZSQRRRWXDPJUTNQCLBXZPLAFXGSCOMUYQVDMDHOWJBAMYIFSTFWLXOOTQKWGKHRFKWWNLPPHJVUYKDCDQNCVZAFSQUVTDNHEPUJIQBNIAEWVANKAWRJIUEGBWEVLWRTROMZKNFXXXNHBOFUYAZBYLZHGEGFJGMPRHHNUZBYITEBIAMMADBCMKOZYVMSJGTQYGDBPGSHHTLE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KGXSLHNQIEXWCTGFHJANVZINSWYIPMVFYNYKFAATHYSMCBYRRDHTZVZFFJUSGUTUDRSLXOXXMDJOOYRGCQKDMFNSURYIZCABOLHQPVVRZKWESHNQJERBMONWEITIGOGWETILAXIXAWAPSBOMDDDWEOUZKBKPCQXYHIRAMEKCKVKBXZAYZUGUMJFSQELJOQJTOTJCPGVTDWBVGQHBCAJVNUVQCPEWMKQBHLFPRBLZGLUCFPDPIWT");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 54071U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.7568013774958285;
    tmp_tmp_tmp_msg_0_0_0.direction = 60U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FXKSMBWWPMHMHYVSTRFEYYQDMNJITLPGTJXYKXFNXVTPURPWOUZXIFOOUAMUDMRCEAQWLUDHIOMNPCWRADDSHZGMICREOZATHWBDKJOJILVESYSHTLOKDYQRCITFNQNMAVLBFDJNXUEPCJNZT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LblRangeAcceptance tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 248U;
    tmp_tmp_tmp_msg_0_0_1.range = 0.37894595981175305;
    tmp_tmp_tmp_msg_0_0_1.acceptance = 200U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::RestartSystem tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.059373169534572945);
    msg.setSource(6837U);
    msg.setSourceEntity(228U);
    msg.setDestination(38514U);
    msg.setDestinationEntity(15U);
    msg.command = 90U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZDTVNLWWCYRGHGQEDQPNYFXXFTFMBHASVKEDWDRCHSBPBAYKFNGDZSPUVXHVDQVBSTMQLWRTCCIAEDJSCOYRUXBZAIDWRMNWULPKRKSFUALANMWG");
    tmp_msg_0.description.assign("WOSOBCXQYJLDBMVMETQPCSOWSEABSQYFNWAILTFWBZALKIHTVRCSEYCLWEPOOAZIRMWKUPEDPFDTDZFWUBRNXTMQBTUNTFHFZXNFDXPOKVQEQYYKOKGSDQGIDILHCASGQGQBIVGLEMJTGXYXDLPYITVNJALQOCRPSFMKJCNLXBYJXNCUMVUJHWGVIEDVEPXONHHJUWRHWRJBUKZS");
    tmp_msg_0.vnamespace.assign("HERIFJHUDLJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XFEIMVVZXUMQHOCEPPBHAXIPSEPAIUTXLSOCSZCMKHMUBXLTJVYXHDWWFOZOTEQECBIQCURGEYOWHRUKTAYGDRSOBWJGTZMQVSRNHDKGPVJGSXC");
    tmp_tmp_msg_0_0.value.assign("MPYPOXLPQMBDIOBLKRMPXWPUGZSJAHHTUUTDIMDEZNWFSTVPQYIJRUNDKXAGHCURJAVAUPKWIZHZXXOXXOFBHNDQKLYAIOJYDRVAKNZFQNBNCLWVFIWTCH");
    tmp_tmp_msg_0_0.type = 52U;
    tmp_tmp_msg_0_0.access = 14U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ITNVYMUMEMOKWALOCENJGXAOPWNQJKQDINFHXABNKVMWTTOGYBMNQECSSZCXRDXFUFIXEWRTVKRKZLROHFTMYICSWJWUVCQFPLTSEAORKUGCCYPBZUNDWDXYSOJKHBISLAVDYMELOLQOXDIYCSYNGHGRXXUXAZJZIJLJQBIFPZYVFTJPWEGCPWQGTMHGBZSLMFZRDPSEAVRGQUBIGBAFL");
    IMC::SmsTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 1781533452U;
    tmp_tmp_msg_0_1.destination.assign("MSILVHETNWIJSUCZYCONVGOQYBMIEMEAATBGDFZRPTQSPJLZUHFXPVCOZXCFHJECDQAPXFYWHAHXE");
    tmp_tmp_msg_0_1.timeout = 49197U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-56, -101, -51, -112, -49, -53, 120, -3, -44, 1, 88, -106, -125, -76, -50, -57, 104, 54, 43, 118, -22, -12, 67, -117, -6, -110, -96, -102, -69, -42, -8, 36, -21, 62, 16, -96, -49, 64, -95, 13, -128, 0, 15, -45, 91, -116};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::AutopilotMode tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.autonomy = 34U;
    tmp_tmp_msg_0_2.mode.assign("XTIORYNADYEYDIJPURSFWPXHYSGSJXOHFPINZWQGHNLJIJFGXRLOTXLVYSUMDQEWKDWLAVHZTQDUIZOIQFJQAHHBMAPCGHDCNVLVKOHJDGTHOUEGPPMCUA");
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
    msg.setTimeStamp(0.5792828790858396);
    msg.setSource(53595U);
    msg.setSourceEntity(142U);
    msg.setDestination(42249U);
    msg.setDestinationEntity(59U);
    msg.state = 71U;
    msg.plan_id.assign("PCGYCCHBUSBZWSQOLGKYHSFDJKSQRHIYOZTSPPYKJKYQWBIWDTHMWZAHEMEFENQOSOJFODAATDTPIAPLFDYB");
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
    msg.setTimeStamp(0.27207081011160006);
    msg.setSource(29203U);
    msg.setSourceEntity(152U);
    msg.setDestination(16086U);
    msg.setDestinationEntity(137U);
    msg.state = 190U;
    msg.plan_id.assign("XOQKCMXZBNDSSNRUCCVGPAIFXUGWUWHKWRBPAQOROIHOWEGYUSMXPQUEFJTIYDFAKBIECHDSYJJKIIUZBMQYCRDSOWKUJXNYTOEUQUMWJFWLTLNKOFJTWIDAKKLFTANVHEZCYADYEITVHHGMHNJHLSJVYZB");
    msg.comm_level = 183U;

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
    msg.setTimeStamp(0.07608166078119383);
    msg.setSource(1538U);
    msg.setSourceEntity(50U);
    msg.setDestination(13274U);
    msg.setDestinationEntity(27U);
    msg.state = 74U;
    msg.plan_id.assign("RKLFQMLHPWQPXYCMNJARXWKIEQUNFCEDQUDTVEBSHOAXQDBZNILVWYNQTTYVNJVMZJBSKZZDYFXQVOBWRNFJSUMRIIAAZKLLWTCLSLSGJETHCXNPGXQYKEYWMGCOKFHOHVVMGWDXUOFYMUZENTOWUUKSPJEOGGRVBXJFJSLPIRQPDKAOXMEPBOUTYIDZAMESVUUFDRAHCTKGGI");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.2883852920422292);
    msg.setSource(59206U);
    msg.setSourceEntity(19U);
    msg.setDestination(30267U);
    msg.setDestinationEntity(215U);
    msg.type = 220U;
    msg.op = 242U;
    msg.request_id = 29397U;
    msg.plan_id.assign("CFRYINVPXKEAGPXJUVXBLUMLDEILZKALEHPPDROFAVAUXZWXBSJMPWYSHRZLUDYOTTFGONBEJNBCYWKSRSNWEMGWZQMVBSZINLOLTUIKDZAIGWCZHWYASEPFHCUTHKGFSXPRZMNJGEVMGNZJBGJJECDOIIMPBHABHQHETUAFCYKKTYYSNXGOOWVAXPSRKUIDCBXTQI");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 158U;
    tmp_msg_0.id.assign("TNLXYCWKZVLUPCOBDYXVUSCSINKUGKDQNQGGRAMIVABJEFULHGMBIQIQIRVOPFGMSKXXEHJYKMTJAQDBCYMRJLEWLGJPXOCBXAIPJWOUZNPLKCWQCVFPFJRKYZMVWKXOZFGAULZHUGEYSRJLHBESYTATZGOZRQUQPGOHAS");
    IMC::DataSanity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sane = 214U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BYSNAVEAOPPLLWAECVJNEKMISBIYRZKWFFDXMMKXPCQCJPOGIJFEUAXJFOSYKHFLWHTQBFBLWLMQSTRUXVRMUI");

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
    msg.setTimeStamp(0.5045995577983485);
    msg.setSource(13923U);
    msg.setSourceEntity(30U);
    msg.setDestination(21813U);
    msg.setDestinationEntity(77U);
    msg.type = 49U;
    msg.op = 153U;
    msg.request_id = 36803U;
    msg.plan_id.assign("PZEQBUUINHGSEFMZCXFNYPIKCNODXYCQBTOTPOFDTOKCAILZAXAQHTGHRNWHGJKMZVQQENBBGOJKXSJKAWLGBVNZQASXVHRNYHMBDUURWARXZMGQDWJOJDYIFFMHFEJLENONELRFWZ");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 72U;
    tmp_msg_0.mask = 3175917218U;
    tmp_msg_0.scope_ref = 3139874793U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LHIJFPMIVZBJAALBAFKJGXJGUWUEQTCRQCFBQQHOXBBTTXNBLZYHRZVJBHEEMYSNRVWLNUFDVUCDADINWXABOPMSLQ");

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
    msg.setTimeStamp(0.21986715259374978);
    msg.setSource(13324U);
    msg.setSourceEntity(121U);
    msg.setDestination(59656U);
    msg.setDestinationEntity(149U);
    msg.type = 41U;
    msg.op = 183U;
    msg.request_id = 60869U;
    msg.plan_id.assign("ROEUARUMEFCVNSHVICUZXHZTMUQMDDLGEWXXAYWHBPLZNFDXETQRSOMFXWPATZTAXBUQ");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("LGOMQQWPJFYWDICJSRAHLLHWERLNEEUPCXZOGSVCYFBQYJRUSDBAQSJRVBZPCHLEXTVPSSBWZQAHLQZQWPNNAYKDUBEVKYCNKOHWMKUOUHCXFSIAJQFPFAUYCBCSNWY");
    const char tmp_tmp_msg_0_0[] = {61, 5, -3, 13, -41, 99, -92, 7, -71, 2, 62, 52, -111, -32, -50, 81, -120, 98, -75, 86, 49, 125, 2, 59, 5, 78, -51, 19, -95, -41, -92, -54, -103, 44, -9, 43, 26, -32, -122, 95, -59, -121, 80, 94, 36, -115, 35, -68, -120, -61, 5, 123, 61, 91, -7, 90, -95, 120, -100, -9, 112, 36, 42, 97, 15, 23, 86, 2, 29, -80, 77, 120, 7, 115, -64, -102, -10, -63, -5, -91, 109, -118, 125, 22, 75, 55, 59, -100, -14, -27, -97, -93, -68, -113, 62, -72, 96, -58, -10, -73, -36, -87, -124, -73, 120, -66, -64, -37, 25, -97, 39, 117, -13, -49, 84, 75, -59, -82, -84, 52, -59, 31, -22, -102, 23, 54, -44, -69, 112, 56, -47, 108, 113, 83, -8, 18, 71, 119, -33, -82, -19, -85, -20, 74, 100, -92, -18, 82, -56, 90, -42, -113, -42, 108, 22, -68, -98, -15, 15, 24, -59, -89, -32, 55, -118, 82, -24};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GPCZHMVSIRXVKYPNGCLYQXDBBDQNIIRRVMEHFQUVROJJKPNAOBOOWTQHPDMBTMEXGXYPCYJHFZTUMIHZETATOWUMALHVXZKREHKLVUNQATGFFXDAVSEQBHJSOGGRLPZNDAIVSSOFHWXYXCCYBGWXDSLMKWANIVUAJDYAPDUIHLKMSLYTPMTJUKWKIQZJQCEVLCRGKQKCXCZOLZPPJNFRWOQDGJBUBRZEBLFSRFTEIDZECWSBYGNUEMFUTY");

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
    msg.setTimeStamp(0.2476225163964506);
    msg.setSource(59478U);
    msg.setSourceEntity(183U);
    msg.setDestination(13186U);
    msg.setDestinationEntity(64U);
    msg.plan_count = 16940U;
    msg.plan_size = 1479128051U;
    msg.change_time = 0.2727349275213481;
    msg.change_sid = 23896U;
    msg.change_sname.assign("LIZFXMSIGCNACLHFHHKUYFEPAUYJYKEJOIDOKOGSOQIUWQUNALUDXVVYCHROLQOMPVKSJOJPAMGGQEVIYQQQQWNHWSXWYVKPWTALABWBTNNAERBKGIVXDGHRCTZDSCSIEBHCJWMQTXZSPLLPXGVXMYFRUJUZFJRCTOFNOYXHFCKEYPMEIGPKMDZSNSFZZBNBHNGNRULZTLZPBXXDCTFDPQMTJSRWW");
    const char tmp_msg_0[] = {5, 107, -62, 11, 93, -28, -111, 11, 19, -77, -14, 95, -63, -83, 22, 115, -29, 77, -117, -74, 95, 26, -128, -69, 52, 79, 82, -62, 73, -123, 13, -106, -79, 98, -12, -37, 63, -120, 13, 94, 44, -11, -14, -54, -24, -4, -67, 70, -34, -21, -41, -70, -20, -18, -111, 86, -54, -98, -58, 2, 5, -6, 20, -14, 82, 99, -63, 105, 3, -61, -46, 52, -92, 9, -11, -38, 11, 72, -108, 66, 33, 23, -90, 86, 62, -54, 84, -42, -90, 82, -55, 23, 15, 35, 21, 36, 102, 85, -29, -67, -106, 13, -115, -86, 110, 61, -31, 45, 52, 70, 63, -124, -98, -73, -70, 77, 16, 81, 65, 97, 97, 81, 44, -80, -63, 116, 123, -7, 102, -59, -69, 70, -123, -15, -99, 59, 34, -105, -22, -85, 33, -53, 12, -121, -33, -78, 49, -89, 39, 14, 78, 87, -20, 50, 10, 46, 92, 70, -76, -39, 50, 8, 112, -32, -126, 41, 100, 94, 31, -91, -14, 23, 70, 118, -126, -107, -117, -43, 119, 14, -74, 101, -16, -7, -102, -7, 15, 108, -93, -88, 23, 46, 99, 84, 83, -70, 86, 39, 26, 32, 125, 3, 40, 24, 31, -9};
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
    msg.setTimeStamp(0.40863702615749764);
    msg.setSource(41613U);
    msg.setSourceEntity(114U);
    msg.setDestination(54251U);
    msg.setDestinationEntity(99U);
    msg.plan_count = 35130U;
    msg.plan_size = 1270896642U;
    msg.change_time = 0.925101348906002;
    msg.change_sid = 48269U;
    msg.change_sname.assign("MOTEMSKGYFFWRSCDNRUPWFWPLWHKDTRULULUSIPLBSGWOEMAGCCZGEVNZJVXJMTLDIBPTPXPUSKCCVMEQKHAMDGINCEQASNRBQJOHBHQVQOQRBIVXGJOUGYSDWCECOTKBUJNIDW");
    const char tmp_msg_0[] = {-96, 17, -100, -108, -74, 96, -125, -66, 77, -113, 84, -60, 47, -16, -20, 55, 1, 110, 70, -107, 42, 45, -90, 120, 121, 125, -14, -42, 46, 26, -107, 111, -95, -96, -82, -3, 36, 37, -2, 8, -40, -110, -82, -73, 30, 26, -112, 40, -78, -54, 124, 106, -49, 6, -46, -59, 85, 79, 24, -100, 113, 54, -64, -35, -79, -116, 48, 61, 13, 114, -76, 105, 3, -30, -114, -13, 94, -46, -71, 63, 68, -73, -65, -53, -32, 97, 57, -60, -27, -88, -26, 38, -12, 31, 72, 32, -28, 51, 47, -77, 64, 34, -6, -80, -128, -108, -5, -42, 39, 98, -103, -117, -107, -44, 105, 77, 33, -33, 94, 41, 37, 16, 86, -97, 100, -90, -30, -96, -4, -78, -35, -102, -56, 63, -22, 3, 31, 83, -125, 48, 97, -13, -16, 104, 37, -104, 32, 55, 105, 5, 20, 78, 82, 51, 73, -41, -64, 63, -68, -30, -54, 98, -60, -61, -41, 110, -82, 57, -101, -124, 45, 69, -46, -88, 68, 35, 106, -70, 19, 17, 87, -61, 29, 101, 12, -96, 37, -20, -80, -90, -67, 80, -90, -6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PSMUOASJCCKDITBHYXBACFDPMNDNMVEGFETWQJUNXWYSDXUHGAZCQZPMFJBGZPXTEDFWLLICGWMONEGFZPGZLZQSMRQTIIKBNRUZDJGJJLXBYLYPTLGUVDFHACHELHSWYYXVRCKVOXDVETNLWTCARPWQOSR");
    tmp_msg_1.plan_size = 28408U;
    tmp_msg_1.change_time = 0.2731167992759267;
    tmp_msg_1.change_sid = 7848U;
    tmp_msg_1.change_sname.assign("NQMMLUPZYFCXIGOBGBFEKBVNRDFFJCWOGOXTSXVWACKHDPSHZWLVFJWPIWXTOTODAJQHRLVDKASMYVTAAMTVGUEIRPUBMZSAWJVZNNXPYFNK");
    const char tmp_tmp_msg_1_0[] = {-53, 73, 7, 40, -34, -89, 90, 109, -63, -63, -97, -81, 109, -33, -24, -106, 30, -92, 108, 18, 40, 21, -56, -128, -67, -113, 103, -12, -21, -106, -49, 107, -119, -23, -100, 85, 57, 72, -59, 126, -10, 31, -95, -59, 100, 42, 11, -113, 55, 92, -65, 3, 111, -56, -85, -82, -121, 61, 47, 81, -93, 65, 26, -25, -123, 75, -12, -31, -76, -26, -25, 11, 106, -63, 52, -113, -60, -122, 3, 115, -103, 88, 113, 103, 81, 28, 50, -113, -24, 107, 5, -15, 103, 25, 17, 117, -73, 30, -16, 50, -98, -123, -83, 77, 25, 103, -116, -9, 22, 34, -84, 20, 85, 28, -92, -58, 73, -6, 25, 29, -115, 92, -128, 14, -100, 84, 27, -116, 39, 49, 85, -101, -19, 77, 62, -79, 23, -79, 42, 96, 81, 9, 57, -107, -45, -55, 97, 8, -44, 106, 43, -96, -117, -83, 92, 32, -111, -50, -55, -88, -88, 126, -50, 72, 107, -79, 107, -42, 96, -5, -30, 102, 34, -89, 87, 5, 32, -61, 61, 123, 85, -106, 28, -93, -37, -49, -3, -88, 117, 89, 75, -106, -41, 122, 114, 64, 65, -4, 21, -2, -44, 20, -15, -73, 32, 66, -32, 1, 15, 51, -34, -49, -105, -42};
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
    msg.setTimeStamp(0.8298701977950163);
    msg.setSource(33033U);
    msg.setSourceEntity(70U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(37U);
    msg.plan_count = 7776U;
    msg.plan_size = 3762649788U;
    msg.change_time = 0.8970037426016779;
    msg.change_sid = 28815U;
    msg.change_sname.assign("KGSSBGRLJKISEAPNTCWAIBZKVFGIZXEUXVEJQGVZEZHJXHSPIZDDPIQFSOBHVPFOWXMBURXRUCZCAIHWBJFFVYCPDEMEBFDXUJIZVNKJMYEYJOHUPWIBTKVQFFOOLMGLDQGXKYELNXTSTRCRNLYFTSANGPNGURODTK");
    const char tmp_msg_0[] = {-16, -90, 55, 41, -89, 68, 25, -88, 28, 39, 105, 123, 125, -80, 69, 9, -74, -9, -100, -47, 14, 30, -67, 51, 116, -46, 106, -58, -41, -32, -9, 2, 105, 20, -4, 114, -8, -12, 98, -23, 100, 13, 97, -89, -32, 26, -114, -127, 0, -120, 92, 101, -80, -51, -128, -83, -107, -43, 68, -16, 86, 8, -45, -63, -5, -6, 89, -23, -95, -48, 57, -63, -60, 96, -76, -125, -58, -31, 110, -43, -96, -5, 97, 25, -80, -42, 26, 110, 94, -25, -3, 94, -63, -21, -96, -60, 63, -79, -40, 58, 11, 27, -104, 94, 69, -121, 102, -78, 74, -95, -29, -35, 17, 28, 44, 3, -17, -122, -14, 37, 62, -101, 38, -59, 81, 121, -110, 80, 96, 49, 89, -27, -95, 47, 74, 99, 6, 8, -37, -75, 27, -67, 124, -20, 75, 93, -57, -57, -77, -66, 17, 71, -51, -2, -20};
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
    msg.setTimeStamp(0.946036986752901);
    msg.setSource(38859U);
    msg.setSourceEntity(26U);
    msg.setDestination(30637U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("WRJLVZCKSHBETUGBXTLVKXONWQZSOBPCWNCJLHOTNLCDWMVECQRYRRVOPNCTNKDPAUGBBBDUUKXAYXSIXPPIAOWLFSKNSFOQLGBUDSKRGA");
    msg.plan_size = 32639U;
    msg.change_time = 0.22717458359778897;
    msg.change_sid = 34971U;
    msg.change_sname.assign("YVITEOEYANWZAQLIQBKPKKNSURRDFBINREPNCURFBAKVXOILZGFJFGZQEZOJTHOEFMTNMBWUIWXSKJRLUDLKGUQEVIIXMHZHHLLZVNUDSXFFDILYOGKXDERXPDBABLMWYCHXCBGTKCUOKARYQHDMBSISOVDNFOVTJFIZPVBWCCMZPWWY");
    const char tmp_msg_0[] = {16, -39, 30, 77, -118, 113, 39, 37, -28, -41, -90, 5, -113, -47, -125, 112, 63, 30, -127, 52, -110, -120, -126, 124, 30, -87, -97, -31, 111, 125, -76, 1, 78, 77, 66, -100, 6, -72, 61, 12, -97, 39, -102, 106, -120, -42, 70, 47, 75, -116, 66, -68, 37, 27, 69, 45, 12, -62, 3, -27, 6, 25, -84, -60, -96, -53, 75, -73, -69};
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
    msg.setTimeStamp(0.9255341774317556);
    msg.setSource(10020U);
    msg.setSourceEntity(228U);
    msg.setDestination(47920U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("OLJFBQWLQMEAZIVHWEGCIXPNMWHHUFGXKNLJRYHQTKXLESLTECIMIIZULFFWFXPXCEKTPDQADBVQG");
    msg.plan_size = 65054U;
    msg.change_time = 0.8652800654518056;
    msg.change_sid = 18719U;
    msg.change_sname.assign("IUAICVPHEOISTFAMNPCSABAHKGKNFSWBCHEMJFVBCAHVYSBSAYPMTNDCTPUBOEHOXUBSRMIUNJKOYQZZNMXJ");
    const char tmp_msg_0[] = {110, 48, -101, 30, -4, -58, -90, -59, -28, 26, -86, -6, -67, 92, 63, 43, -56, 51, 125, 75, 65, 45, 53, 106, 43, 117, -42, 1, 70, 90, 110, 108, -9, -9, 97, 5, -31, 97, -126, -125, -27, 18, 116, 32, -55, 46, 44, -128, 34, -97, 56, -17, -95, 6, 72, 94, -58, -113, -102, -126, -97, -96, 109, 37, -21, 94, -47, 56, 66, 35, -54, -88, 98, -82, -105, 54, -32, 7, 9, 42, 20, -117, -82, -62, -10, -53, 118, 97, -126, -28, 14, 81, 31, -44, -25, -38, -79, 0, 21, -94, -65, -115, -33, -49, -53, -103, 101, 99, 80, 19, 87, -65, -24, -88, -90, -73, 79, 27, -81, 48, 18, -28, -77, -64, -48, -50, -46, -83, -47, 82, -25, 97, 75, -87, 111, -23, 7, -105, -15, 96, 11, 104, -94, -114, 17, -40, -7, 40, -19, 9, 67, 82, -91, 119, 89, -43, 53, 114, 61, -13, 67, -14, -13, 27, 50, -68, 81, -96, 123, -128, -98, 100, 18, -77, -3, -71, -41, 83, -9, 117, 123, 122, 68, -73, -74, 90, -48, 83, -35, -124, -48, 104, 57, -76, -6, 20, -100, -50, -101, 12, -97, 102, -103, -45, 109, -55, 52, -97, -74, 125, -84, 72, -95, 6, 63, 25, 60, 49, 67, 78, -106, -7, 101, -17, -111, 44, 42, -92, 2, -67};
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
    msg.setTimeStamp(0.3809985930010895);
    msg.setSource(55033U);
    msg.setSourceEntity(22U);
    msg.setDestination(64471U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("TMFBLQNNEGDQCV");
    msg.plan_size = 41310U;
    msg.change_time = 0.7758516119723609;
    msg.change_sid = 31190U;
    msg.change_sname.assign("PKOJMZDRVEYOCAUQDBIQAKSMWNBSSCYHJBNCGYFZMCNDYFWRTRWSOFTVU");
    const char tmp_msg_0[] = {-8, -111, 12, 18, 19, 28, -106, -97, -27, 113, 122, 101, -118, -62, 105, 63, 120, 47, 82, 101, 39, 48, 125, 83, -113, -18, 85, -23, -53, -60, -114, -95, 111, -9, -72, 15, 61, 77, -7, 27, -74, -110, -20, 112, 41, 25, -65, -113, -72, 41, -78, 56, 48, -72, -20, -94, -63, -62, 100, -116, 66, -76, 31, -68, -79, -10, 110, -101, -14, -42, 13, -100, 79, -127, 63, 120, -99, -19, 102, 34, 56, 28, 44, 4, -35, -61, 42, 2, -57, -85, 72, -41, -42, 29, -121, 90, -97, 6, -4, -114, -71, -26, 6, 87, -52, 93, -97, 62, -116, 124, 49, 21, -122, -12, 12, -43, -65, 100, -30, 28, -72, 69, -34, -51, 53, -100, -54, 109, -18, -78};
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
    msg.setTimeStamp(0.3084860801071093);
    msg.setSource(16537U);
    msg.setSourceEntity(55U);
    msg.setDestination(7422U);
    msg.setDestinationEntity(113U);
    msg.type = 232U;
    msg.op = 217U;
    msg.request_id = 53614U;
    msg.plan_id.assign("NRZIFMOKRHFCVAHYGSAPMXRIRTKZDTAOUILIOUKLDMELTIWJBLXFJNQWPTBRKGCQXTUGNLVGAODEYSYWVOQQFTZHGXXFJJXIISAUDHENPKIPCZWEFLMBSYYFUVWUWYHFWFCYWVBXSCZUSAXURBPHAADBCMYRAZDWTHPSVBWQSNCPHMGQPMOEHRNACEJMBYGOJVUE");
    msg.flags = 2004U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 51U;
    tmp_msg_0.htime = 0.792308910459498;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YNDPRUUBDVHIJQCESKXSHXLHNJMMKFZXIHWUIJWAEJFUTAGFWFVXSJBVLLENVJYJWUZIZULLGABKZSGLKDSEWTYKRNZSTABYKTOXDWGGXSSFPHTUZHMMFEJARFQNLFQMLEJPKMYQGAKPTLUOGFNOIPBCGDIJVBRGRYCQEQDFA");

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
    msg.setTimeStamp(0.06789509813158878);
    msg.setSource(63888U);
    msg.setSourceEntity(234U);
    msg.setDestination(22279U);
    msg.setDestinationEntity(40U);
    msg.type = 149U;
    msg.op = 114U;
    msg.request_id = 23005U;
    msg.plan_id.assign("OFKUNEINCGATZTHCXKITQUKLKYRMCNPEPKLMMTUCNBPWXQVFFCQYSVTXXAGKSHGDQAQETAHSZWXSWRWHQYGJFJOIORNUHSAFDOHBCENZGXGCLVQPTZF");
    msg.flags = 37803U;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 85U;
    tmp_msg_0.snapshot.assign("OOJMRRLGRKFYUNNLPFRBMJBYCCKBWNDWNRAGVIUJYWJZSGNAGETWQDUKWBILDMMTNCOEHUPAXGJQHULLJOBSXRDZEOAVSZIOMQJHPLPUFXMZNCVQITQLYZTEBCDFYODNXA");
    IMC::DevDataBinary tmp_tmp_msg_0_0;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-8, 33, -114, -105, -1, 70, 27, 52, -37, 90, 35, -45, 110, -41, -57, 15, -18, 106, -48, 5, -116, 71, -38, 24, -25, -48, 54, -74, -76, -61, 79, 24, 82, -121, 95, -97, 65, -99, 25, -66, -85, -97, -109, 77, -93, 44, 90, -56, -120, -44, -38, -46, 95, -46, -99, 52, 119, 71, 16, 71, -60, -109, -37, -96, 70, -57, 84, -56, 68, 75, 106, 38, -76, 126, -82, 118, 68, -77, 100, -90, 15, 10, -100, -53, 13, -23, -128, 27, -114, -82, 1, 28, -93, -14, -20, -114, -60, -70, 114, 107, -25, -118, -63, 21, 52, 115, -33, 100, 114, -19, -91, 65, -75};
    tmp_tmp_msg_0_0.value.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JAYJQXRGLEBBTGDDALGTFMSANXOKOOQDIRRHDUCUYWDCENMAIXSVPLDZRKTZOMFISUYSHSYBCJLHUQUKLZLNEWWMCYNDIUMATSGGPRXWTQTAXFNTCHPHOKAMQOIKRCJQBVQIHFQJWGHZVVJZDVCEGZHEKSEOZQYBBGXLNLYZPSXUWETQNFZXOFFIPEYHUPDIJMGJUYUOHNRJPL");

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
    msg.setTimeStamp(0.8385531247195736);
    msg.setSource(44475U);
    msg.setSourceEntity(188U);
    msg.setDestination(12067U);
    msg.setDestinationEntity(8U);
    msg.type = 241U;
    msg.op = 171U;
    msg.request_id = 42771U;
    msg.plan_id.assign("ZJMUFPUDVCJVE");
    msg.flags = 22625U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 19U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("LDFOHHAWRQUWMAJMGZOCQJOMKQSEAJIEZBUUZCAKNVQRZITUWAQTKJHFWRAJWYECLXMWIARYSKDPHGLYPESXIPNWUQCXEPVTQOOFZUZWLDMUVMIFIJQBQLVHKMROVXBDVAJOYBCSNLJGROCBTBYXNFENSQUFSJDNEYCILVXIWEXYTYFSHKOXPYBHPGKKFRCAGIXJKTTOHYXSGHVGPDPMGMRC");
    tmp_tmp_msg_0_0.lat = 0.44221021721072984;
    tmp_tmp_msg_0_0.lon = 0.6597635967678968;
    tmp_tmp_msg_0_0.depth = 0.8188280609628052;
    tmp_tmp_msg_0_0.query_channel = 149U;
    tmp_tmp_msg_0_0.reply_channel = 137U;
    tmp_tmp_msg_0_0.transponder_delay = 166U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QRXQGBSZTCVSNNHYPSIEHUYPRLTKFDBJGZAJZJZMJKLQRVTGCDXKZRLMLNXRQBINJMNGADVHRTCOOUBUMAITAQICSHSIJWXMFDPKREVSDKOSZGEZFEXFYRZDOIRLMEWBLNUCEPCTQBDNFPFDOBQBTRMYWFGUNQWVUTMKLYDIZHQGPIOGEGYTFUAAXHYKCUPAVNVWLOFJYOOPWHXLSXBWXWUIMKENMXFIAQKJHOE");

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
    msg.setTimeStamp(0.9363495680107642);
    msg.setSource(6640U);
    msg.setSourceEntity(63U);
    msg.setDestination(9573U);
    msg.setDestinationEntity(108U);
    msg.state = 251U;
    msg.plan_id.assign("DZHOGIJUDVGHRXWIBYTQIXZEISPXLGYYUVFOLFNJFSATEKJNSYBRKRTJMQKTADYBPEFKEQAMOSUKMKFYWCNRGHETJBGHXKVDBLF");
    msg.plan_eta = -1921604808;
    msg.plan_progress = 0.24435200122988843;
    msg.man_id.assign("SIEHMQLLHAWXMOZCYNJHZTXNMVIQBAFPBCXZHZBKVDPASSFRUUFFYGLDGHRNPBRMWVSGNDJRNHDXAOEYDBQAVEJNBRHXXGIQFGLEIKCEPTYPHXLURUUQONYDFJSOOTCZVIHJQZPAIKAFZEKMEBJWSGEQPNTKJZRYLKUIPRULEPLXOTYL");
    msg.man_type = 41943U;
    msg.man_eta = 887308744;
    msg.last_outcome = 139U;

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
    msg.setTimeStamp(0.9544048041910174);
    msg.setSource(43190U);
    msg.setSourceEntity(92U);
    msg.setDestination(52196U);
    msg.setDestinationEntity(83U);
    msg.state = 230U;
    msg.plan_id.assign("QDMGZJALLQXTOTSDVFJXUHHHDEOKJPIZGCESHWUZJYVNIRPAAJLCTMRRVDWOWAPJVLHYKYWXUBMKQLPXDKYZOCFCPZUXUMZURHWUFRUFNPLDTJLQXKVMBQDCNLNYISONCBQZIGXPNBAQFBZYWJFFFAT");
    msg.plan_eta = -1851350210;
    msg.plan_progress = 0.12158934263014998;
    msg.man_id.assign("HHHLURRGCBYVGNCLSYLGDZLZUBPBUFFIGJITPPJASJACYZAWXNHSZBKTZGUCQROKXQNOEBXDVSNDYDJKEJBWWQJKPZFAWTXYHRKEQAGPJTFQKDEJOLT");
    msg.man_type = 4429U;
    msg.man_eta = 1264627373;
    msg.last_outcome = 12U;

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
    msg.setTimeStamp(0.46473181602318037);
    msg.setSource(54756U);
    msg.setSourceEntity(98U);
    msg.setDestination(50312U);
    msg.setDestinationEntity(47U);
    msg.state = 228U;
    msg.plan_id.assign("KJEADDZENFXEMALFCPTROQRVDTAKHZFVDWBRKWGNJMCRQOSAKPNCRJEVNQQHZUSMKXLMNYLADKVPPULAKWLFSFJWWEEIIGNVMOPTGCCXATCIIGJFWHZNCVORHUFNZIZYDSI");
    msg.plan_eta = 1214363757;
    msg.plan_progress = 0.8990158077742493;
    msg.man_id.assign("VUPGDCPFBMISNMZWVWNEPMICLAVDNSBNHZXRZUJKFPBSNZGLDUJGSYLJHIRADCHMEPHSQZJIDXBVZCGUHMHXRTVBZALNKLABXCOTDETXMYULEQNS");
    msg.man_type = 48571U;
    msg.man_eta = 1507110949;
    msg.last_outcome = 80U;

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
    msg.setTimeStamp(0.8130382735002463);
    msg.setSource(19574U);
    msg.setSourceEntity(189U);
    msg.setDestination(1728U);
    msg.setDestinationEntity(49U);
    msg.name.assign("LQSFEHBOUMTMIWGVPCWYBIJCHQEPAGSJPQFZTOEZZKKZNYSAODRCTKJPWBXQUVALBFOYHQRIOLICXUBLIMUOFYRRKTSUDRHNARKTICLZVNDXFEJ");
    msg.value.assign("AWEQFEHNLCCRGZI");
    msg.type = 81U;
    msg.access = 100U;

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
    msg.setTimeStamp(0.2121644334671764);
    msg.setSource(34306U);
    msg.setSourceEntity(193U);
    msg.setDestination(3523U);
    msg.setDestinationEntity(73U);
    msg.name.assign("CKTGJAATUTSMSCXAVWFHQMLBPXBWMOLLEDEQIIKSKYFXVJPPOLLAJKXRNKIWIBFSUAFKSYMOA");
    msg.value.assign("OULHJTENRZPHAQTNCQUELMWMDMRMXQTXJKACOEMRPWCRVMBYBWNPUJRLEJVGQAIAAUGPNXVRVHLIQGBGCXGHAMINCKKSBRKMIQCCOGVSTYTADMVDBJAWHDLPYOUKCPWEYFEQXSQMVIQIZXFJATDJEULDZVONSXXDOHVWLSCGITNGNESWYGKTBHOLSRBDHIUBZUF");
    msg.type = 51U;
    msg.access = 50U;

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
    msg.setTimeStamp(0.9598456470785861);
    msg.setSource(33304U);
    msg.setSourceEntity(202U);
    msg.setDestination(52533U);
    msg.setDestinationEntity(195U);
    msg.name.assign("YRQHEBQGTNGRKFZEBPDYDXSDXHGZPQJJSXOMSAGNCMWCBYORQENRFMMDYXTVIKJTWGNYATWUVMDEFJBWPCMHHWDDZONIDJZBORSIKKLOSHETLAHQOLUGKVNPJKULVPEXSZXZAGTVPCBTIACEZWLRWKPNEIBBUIFQRIVUAOYJFNCQBJJSRPVMIUKALSMYOJVWGLDXPQRYLFFSAHQFMXKYHBPCOZSQTIWEALLXHFZHUXATZUCNVTYK");
    msg.value.assign("JODQWVNZZIXCFXBWFGEFEIIKNDYGQYBDUDLRFJPUKULJSAVIYXMNUCYILRPFOXPEVSDMCKCAHWXZKBQDWQAJGZABNMWKJUXWSSPGRIQMWHXTSBQYMTERSSNYCSGOALHPEVLZSTLEBQCJNRMRGVUWGQYERHMKFPZRBKPHIHBDVTOMTJOGJAOGZTTNUMH");
    msg.type = 101U;
    msg.access = 100U;

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
    msg.setTimeStamp(0.4913796444903856);
    msg.setSource(28381U);
    msg.setSourceEntity(30U);
    msg.setDestination(63229U);
    msg.setDestinationEntity(230U);
    msg.cmd = 53U;
    msg.op = 156U;
    msg.plan_id.assign("UEVDTVSZRU");
    msg.params.assign("HWUZOTMQGAVFVKVTZMYPKLVRWFGHQTISYUNEJXMAPAE");

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
    msg.setTimeStamp(0.14344679959970896);
    msg.setSource(14236U);
    msg.setSourceEntity(250U);
    msg.setDestination(60884U);
    msg.setDestinationEntity(245U);
    msg.cmd = 98U;
    msg.op = 28U;
    msg.plan_id.assign("DKQHMSXUVENTOJ");
    msg.params.assign("OLCQCZZKEANSMKVXYCEUKMZBGPWVBDHQENFGDXGRSQIZVSFYZLFOAMTCFBKOFTWOWSPNSHUTOCIYHROSMVKNMOKMQIFTAYDJRVTLXIFKOOONJDEXDPSMEALXARGKEXIGVHPFRTRKZPFGJDIQLPDPIJNDTZCLJQQTQJBIRVRYHVYBIQNWXGDAAGCUBKHLFZUTMYWCGDPYIQHAACSEAPUEYMNHJUBUNXXZWJZWBJTHULNJVGP");

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
    msg.setTimeStamp(0.2307865749378547);
    msg.setSource(16254U);
    msg.setSourceEntity(158U);
    msg.setDestination(54841U);
    msg.setDestinationEntity(222U);
    msg.cmd = 119U;
    msg.op = 64U;
    msg.plan_id.assign("FAFSUYPOCPJECZWENLWRUILDSXBJVVNKFQNHMOKSZUCAWIAPHNBVGEDV");
    msg.params.assign("ACZQNLLWKDGZFZCOZYUGIMCOMDFDYNAEJVLNTTPJVGYZNGRUTRXPDXWUAHOFMEGBQWNTFCEDIIAWCQDLSLD");

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
    msg.setTimeStamp(0.2419506852349137);
    msg.setSource(52144U);
    msg.setSourceEntity(224U);
    msg.setDestination(23239U);
    msg.setDestinationEntity(42U);
    msg.group_name.assign("LHZRXQTEQYVIDBMCOPEEBCRCKTIVGPJ");
    msg.op = 235U;
    msg.lat = 0.8122331962008854;
    msg.lon = 0.1426949351421256;
    msg.height = 0.3738226150976044;
    msg.x = 0.9588422848995825;
    msg.y = 0.6081107130246198;
    msg.z = 0.057355764237055684;
    msg.phi = 0.6661680940146134;
    msg.theta = 0.8338478636842751;
    msg.psi = 0.943932109181385;
    msg.vx = 0.327659455757878;
    msg.vy = 0.998698865253037;
    msg.vz = 0.10581625854119592;
    msg.p = 0.13442085940065607;
    msg.q = 0.43177513840093906;
    msg.r = 0.16198820384128443;
    msg.svx = 0.4710642670942429;
    msg.svy = 0.4209531928431609;
    msg.svz = 0.8769383711239165;

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
    msg.setTimeStamp(0.024403419765778422);
    msg.setSource(55789U);
    msg.setSourceEntity(235U);
    msg.setDestination(62243U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("RGFOQCQGUEYWESFZODABILVJJLWIIAPEGXDGTRSKBSCUW");
    msg.op = 3U;
    msg.lat = 0.4791373990973943;
    msg.lon = 0.6094902666248005;
    msg.height = 0.0738747194643492;
    msg.x = 0.3344705057655908;
    msg.y = 0.5046828006347469;
    msg.z = 0.1323496326121132;
    msg.phi = 0.5822749674241874;
    msg.theta = 0.25965652571131825;
    msg.psi = 0.08984723326495447;
    msg.vx = 0.7538168078461643;
    msg.vy = 0.11771197898887042;
    msg.vz = 0.37470710238027205;
    msg.p = 0.05486167652244189;
    msg.q = 0.8012076026486664;
    msg.r = 0.19685660773816527;
    msg.svx = 0.5802563685532744;
    msg.svy = 0.14328388455380647;
    msg.svz = 0.4629616521984621;

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
    msg.setTimeStamp(0.5366393988244498);
    msg.setSource(14580U);
    msg.setSourceEntity(174U);
    msg.setDestination(19499U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("BXGTVRPHLHRRYCENBWTAQYMNEBIYIKQYQZJBDOCIRMCQDGRFKHUWGDGITXSFJEDGABMAHFHKHFAVQNLDNMEIAVLAPJINTFMRMDAZCLZZTLACCPMOVZRTZPEAYEFLWPEMSJAUYUVXUXWUYTYSDRSMQXUVKDQYPWLUGQZTGQOYTFDSSRSJTJNIOFEXPKWWGUJNHIBCQFOOPVPELNLCKUCOCKOKVEDXNSBJ");
    msg.op = 194U;
    msg.lat = 0.625134132555659;
    msg.lon = 0.586317479122268;
    msg.height = 0.7577391530982309;
    msg.x = 0.1896829646441046;
    msg.y = 0.9414575973075818;
    msg.z = 0.22062532836656323;
    msg.phi = 0.8480648967013178;
    msg.theta = 0.15767114219188716;
    msg.psi = 0.30280734004302123;
    msg.vx = 0.43499743795259027;
    msg.vy = 0.7355196089350957;
    msg.vz = 0.6050283875826605;
    msg.p = 0.40323884143108313;
    msg.q = 0.25601550475459023;
    msg.r = 0.24673046993351222;
    msg.svx = 0.7660085493315253;
    msg.svy = 0.27306939676964137;
    msg.svz = 0.6296369855607926;

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
    msg.setTimeStamp(0.6186730300600867);
    msg.setSource(48368U);
    msg.setSourceEntity(46U);
    msg.setDestination(12309U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("KWZAVALWHFUDGPIKSTLFZTQBHVZOSGJCMXNJKAAEQTTECRLRVOSYSAJICKJLRMRIOHAKSIYTHSDLNHCCXETHWHBOIZZUTPQLVVSVXURYJTREZTMICSBKDHRXWWNMVDNFYDDLNPXKQGEZPCF");
    msg.type = 39U;
    msg.properties = 149U;
    msg.durations.assign("YTMYBQGUNRACAVNIBZXJKHJMSNBNBCWROFMDQAFQXXHPVZNREKJLMJSQFZQXVFGHUMHWQEOZNTPFISDMCPGSNOPVDTZFIJNGDQOEBCGARPPTEMWUPMYMBBGCUKGTLLTXXWXTQYKBVZNHZBEOTTFESWWHVAA");
    msg.distances.assign("MGLMLEMARURROZSJBEPCBRWHUWNWIHLCTRBSOTFQJDYXHVMARZCBPNPURGFIYJKIDBMCCOTOVTZFSNQCNFGUPYYFJNNLAGHIRAPAVKJWKETISGHUSHGTKCJUUPGPXNZAWAEKIKXHFXDUMDGUXPYKFYOZWDBTDXFRVMBLQOLPLCYEXAHRQYQAHIDQLVTYZXBKEHYQIZQJOMJEOKDDMSSWGBUVXJNVTFEQWVVIW");
    msg.actions.assign("JSJGTOGUVFWRUFUIYJRCRQNCFIAPQIBTPSXOQZCHXBTBZPQELURXUTYKKCXNIRPMEKCVCEMTADZOQOZYWXEDGHGWINRCZLKDZGDILHFAWNDZBLCYEJHDHVEOGUBFAAKQHLSUVMJLCFUONDGJXRDIOSQKAWALHGWKFYMUDTBKMUBTEVAE");
    msg.fuel.assign("AFVJDPRQUCNTSMHIVNLAYEFUXMBWRKIZOSXYSWNJQ");

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
    msg.setTimeStamp(0.560802544270183);
    msg.setSource(39368U);
    msg.setSourceEntity(105U);
    msg.setDestination(20284U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("QTGUFRJOBKIUZNGBMSPJBTZRDPGVEEWMIGJGQKSQAFCDXEYWLOBVHMNUUSBSQTNZPTHQAANORVFIICFAEHFNRALYVAEQIVKMSIPHNQIMSOTJOROVZFYVIAGGWTLDFYFRQBHYOXEQXCMWEHUWTXELOYGDODXIVGYKKKRRIPPBECWJXRZHVNJSYJYXNNPLAJTKMUOFUCB");
    msg.type = 33U;
    msg.properties = 143U;
    msg.durations.assign("DQSALZBGAKPJLPMGDUCSEYHSHWNKAIEDLAWZYFEYVFECABLQJYPUPDHDFVZURUCHXFRGJIICXEJAICETOTHORCYUPPVNYOZKWPKCFTBSUQBVKXQTTDNSEOYKBJNABOVWHUWQQVRDOMTKRNWFZTXURCBREHAOIVCLLVNSQSWXRLJTSJZUIANVIFZSKRLYYSWANMJFBPMCXINBEKDFGGGWXQXY");
    msg.distances.assign("GAWEMCFJRWYQGYWKAMZOZSAUWKEJERTCINEZDCVIUGLVSQCOPDFTDGTZOFNQBSFNEMUDDRFWJKWJWNEZOFPHGLVVHOMFMELTZBSCKHAIMGJRSGTLNDBSSBJNKDPAJEJWRHYANHESIBHODHRPAMFVOQXNXUUPQVJYLZTBQKXBJLIWQHQKPYRKIQOZYZODOYABSPCXBCBNYEXHGAYWYIRXNTZXCRXMLTMUVFLQLGIKVTUXCUUSVCXPGPUHTF");
    msg.actions.assign("BMJIQOCZIMVLKBNLDBRVJSTBGAPELXRVRUMCDCVXYWMQUKJUVSLZTUXEFUWGZRMTFGPCNCEPLWFVSWOEVTNGXTRYHWXFQTJGIOBOJNBAVOIPAGIZHZKAPEJDYLNXDHRQKBYPNDKUSQIGUESIMKBKHPICZGURRKNSIXFYXYQSFMLHPAGFACEWQHHLQNAHMLJRHTXVZPYSDOEBFWNEZYPCXNDCWATOAUURMFCTLJSGADZJSDZQOTBWFJ");
    msg.fuel.assign("ZTDGJLHDQMJTXPGBRCEEFGXXRNAOJLHQYFWQWNRWVCWFGOZKHRYYDQNWKOLWSACACEOZIHUVBNXUCMFUDOSMFEDEYYAGYOAXFSOPGFQXTZYPZZIHKOXTMSRIADJMDLUDKQSTGCBILKDBQJYTRGIZLZJARLWZTKPMNTJSFVGURDXMVLMPLKFVBPCVTUVSOSEPTNYFBBSSIEAMKXPZIOJJKWQNWJHLBUNCGMBHCRPQXNCHEBVNQIUHYHIIVEWVUU");

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
    msg.setTimeStamp(0.24670006635180597);
    msg.setSource(7451U);
    msg.setSourceEntity(212U);
    msg.setDestination(32951U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("BXAYMFVUVLPLWKBTTWJLICEHCSOQWSFJZCKWRONDOSLNMEEVPJLDAFOUMQLOAYYSIFGZLFHXVZIGCYUBHLGMQKPQKOEUSMHUNJYSAYVXDINWCIHGCXGSNTXJXTNJQFAZZTFPEKWINCYHTODWMCILPDIAERPQVJIEAQRCVBBHELTZSHURRNVPIPBDDXARGYZFNYTMMXKOBQOJMATPZKEVWCGHQDXRWUGQ");
    msg.type = 3U;
    msg.properties = 120U;
    msg.durations.assign("AGZVYLDKRWCNNLZKGTDI");
    msg.distances.assign("NDGSUSSTTUPUCMHWIPBVXXJMRBUKMVFLKGREUJBBJQFMOUBJXNXTJRSSEGSIXQZODQAHASXZGJUOORLNZKQQAPWGYXFFDMYIEHTWOIPIQIONZIBPYXAWVKRBHAHKVKZRZSSFNKRCWOFGCYHNDJDLMOYYRYMHWXNEYKYFSQCXGEGCNWJTD");
    msg.actions.assign("YDIRFNRKUCFUNXJWSXGJLIXOHABEXRLNVMNYFLFWDYSIHOQQOOBKBWAVJIWGUUVMPRLEGHDGSEOECNEUYFASLGQUNZTGBHJIDMPTRTJPUEOUVTWPG");
    msg.fuel.assign("VDMZQTKKAICPERDNFYSHLPIFJDTUXMGZVCEDEOTYSGVEWYNJNFFBCNMXINMLFSSIODTCMIEBPBLKLS");

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
    msg.setTimeStamp(0.4864945462912893);
    msg.setSource(21188U);
    msg.setSourceEntity(160U);
    msg.setDestination(34431U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.16267469229095444;
    msg.lon = 0.2768476241927603;
    msg.depth = 0.8444384365947014;
    msg.roll = 0.11367305591850263;
    msg.pitch = 0.83345487275494;
    msg.yaw = 0.46359997744332315;
    msg.rcp_time = 0.05801205282312116;
    msg.sid.assign("JLFWOFREKTEPCYBYYUZQGOYSD");
    msg.s_type = 50U;

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
    msg.setTimeStamp(0.6349162139313621);
    msg.setSource(8488U);
    msg.setSourceEntity(234U);
    msg.setDestination(5628U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.7315590681123114;
    msg.lon = 0.3385899953714526;
    msg.depth = 0.9722388562453934;
    msg.roll = 0.2571009373328529;
    msg.pitch = 0.18982129423847827;
    msg.yaw = 0.18958789313205704;
    msg.rcp_time = 0.2866402530756902;
    msg.sid.assign("FNLHSNHEJDZCCTQOQQWYTRTGBOMXGFCJISYDCAHQDXDCQWTGSWOYBUFUFODPRGZPZYLZZSTESJMTQDIEPAOFWAKRGMOHIHWVJEPZEUGXRFBMKYWBRFCBJJPWCKTOERLPJUUKGZKMPXCFXOKMMKSYWRNJRFBQVHANVKPJADOZHZBVBYEQAIM");
    msg.s_type = 163U;

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
    msg.setTimeStamp(0.5644552716230714);
    msg.setSource(582U);
    msg.setSourceEntity(141U);
    msg.setDestination(42034U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.7230599393212627;
    msg.lon = 0.395597351774705;
    msg.depth = 0.7111067590805291;
    msg.roll = 0.2682102622774595;
    msg.pitch = 0.6117113058734731;
    msg.yaw = 0.7464823638047265;
    msg.rcp_time = 0.47261002986697254;
    msg.sid.assign("KHXLSUKBTDLPYUOMTEEDQRMULLBKHOHTDSCZGOB");
    msg.s_type = 22U;

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
    msg.setTimeStamp(0.5870933112233064);
    msg.setSource(61904U);
    msg.setSourceEntity(22U);
    msg.setDestination(59458U);
    msg.setDestinationEntity(245U);
    msg.id.assign("GDDVRLJHUZFEDMWBGRTNPFVRIAVURYNZVFVHDAKGPLRIWKMQVEXIQHNSFKCQKJQQOOJQWOYMJHWCCUZSWPEYIBYXLLHGZSZYXWFCYCTHULJRDIGPUOSILKYMRBYWNZHGJYSKUXDLCUASJKVEBSNTLPMDZQAWMXBEZACVOORMUDMQMXSDCSIVABXLFECGFEWOZLNNQWNIGFKTHPETYRBJBSPTIUZTXOFJMEVAFJTNKDANQTXPA");
    msg.sensor_class.assign("ZURWLNGKWOCHAPRPEACTOJNOBQOFWBTWGPDBWGAMOGBZLRZZGWUKXCOXZMFHTJTXGPUMVPCQMINAHQLKINXKADQJJFPUATYLBMHLSTTYEHLSOHBNIYFWJBRVIITYMXIUFC");
    msg.lat = 0.7173305821406294;
    msg.lon = 0.0392376664837768;
    msg.alt = 0.6812220473093269;
    msg.heading = 0.42129628775517713;
    msg.data.assign("ORCHQUHVTRXLNPRVMRFYRUZHJKLYZQFZCGXXVYXDXSFFTOMPAANOMCPBAEWMEOCDSGZSOLUMKGCKEQJWGYWATAJECVXBPUPRFUIXWOCEBFKLDSJWJTNQTDORVBEJKWKUBHMNQBMWJXQPFHSAUAKVFSZAOIWHFIVMYBSQBWWPECZTTZGPDELDERNGEIYNIAORUHLPO");

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
    msg.setTimeStamp(0.5571756743245351);
    msg.setSource(45025U);
    msg.setSourceEntity(106U);
    msg.setDestination(47312U);
    msg.setDestinationEntity(253U);
    msg.id.assign("SXZDGUGGEWFNSTY");
    msg.sensor_class.assign("PZNWRNFKIDQEPTGPVQJBLVGTOTSNFFBPOKZEYKHNRJWBHWKYNIKZMBHOQGIFBICSUOXTJGEVLPVQGZWVEUWDLVJAERZMYCOLADSITZINRZQUECQSLMLCRMBEUAHUHXHRDSRDXQZGVGJFNOXXACYXXCGGUXABLSWTKTSAFSELAQMPYWPYCYYFBOUKHNDPNIRJNFMBRUQUJFIMUKOOHIVDDCEYAWEWHJWKMTGAIBCYDLZOTVJCLPZXR");
    msg.lat = 0.4419383100802934;
    msg.lon = 0.7622566985817455;
    msg.alt = 0.1563753410357318;
    msg.heading = 0.9044055859864252;
    msg.data.assign("KQYFHRIXUOQCOLDNZNENPWDQNUBHWBTLMFJSMKDVAYAKMVNJUUUGHJETZEBZHJZEFPLMSRSPSNQBNXWMVCIRNAXQXKUCWDFFDCYBCJRJZWEVEXJAJPSORVZTVTLYOVVFAFKAGBOGDBBRXTHOXNPSPFLEDGVBPPNRVMYOTGZSWGYHIYCLSPLYQDAEAUCPTHGITIMWSIEQFGGYZJWIHQICLFKCIGDQKRJIYUKLCDETRXQZHOTO");

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
    msg.setTimeStamp(0.16492213141114553);
    msg.setSource(26293U);
    msg.setSourceEntity(219U);
    msg.setDestination(44119U);
    msg.setDestinationEntity(181U);
    msg.id.assign("RRIEOAUHETUUUYZZVSSBGXZYKWBNFFCJMWGMUCHEREMFOTJIDDJDOBVONOPFTJGCZLXMQGYJTLSMADNC");
    msg.sensor_class.assign("JPDCEAFCEXKMEUTLVZMYBGVNJNGSKOVIBLNKFYHOAQXQTSCCKYQJOITRSDWPVBTADCCAMOXLMBWKJWBBQXKQEGJAGLUKSVRJRNOEYPVZXDIPDGSHETZIPVPHPDNRZNIK");
    msg.lat = 0.8486519185388266;
    msg.lon = 0.34324935563443315;
    msg.alt = 0.005123281427871329;
    msg.heading = 0.37390970047401695;
    msg.data.assign("AQOGYTXNKMVJZUCNNLFPCECMRDJKZBFWHLGJPWUVEBNGALBBEQQBLGSARTWHPXBMMGIJWCHCGLPSWJAJ");

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
    msg.setTimeStamp(0.7706719711210394);
    msg.setSource(15132U);
    msg.setSourceEntity(7U);
    msg.setDestination(33614U);
    msg.setDestinationEntity(229U);
    msg.id.assign("CWUISIJENLMJRKAPEDTSRYOLQRNZDBTPTXYDYNNXJSVIEOCJNUXPGZCCZVEZUHKZKQNIPBAQEVZEQNDJHKYMRUIOTQUBFTUEWFGPGFAXPMHXZYXQIGXVYLOBMOZIAOTNCRAKBMVMSTDUALFEGPJKOJWFQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GPHHSIYWZOOZXCNTMFVPJETRDVNNSOFEODFRSIPOJBGPSTNLNUFHGCDMVMXIBRAVLFVDBHGWTQUAATYDFJAAYEHWCQRWPCGBRZDGXURYVGMZIIJSGGJMJOETYULMNVTWIVAQWQBTXBQSEMILFZUNQSVPKRMLTLDWQKXBFPILJCYJNPXRBALBOUJUHYSTCFOKEEDSUZKRK");
    tmp_msg_0.feature_type = 185U;
    tmp_msg_0.rgb_red = 20U;
    tmp_msg_0.rgb_green = 200U;
    tmp_msg_0.rgb_blue = 104U;
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
    msg.setTimeStamp(0.8169443379212213);
    msg.setSource(61008U);
    msg.setSourceEntity(145U);
    msg.setDestination(31185U);
    msg.setDestinationEntity(118U);
    msg.id.assign("DGLXLHXSGLUVNZYVXCCNJFYHBVOFMIENGMEOJZHJDGKWNXJUNYBCHFSRLHZXTQDXCTMPOSTKXDKQQYYZOXUNNPPIWLIWTLASKSFBCJWOFZILOBVVATKQRPEQTDAIYBKRRYNDPIOVQZRDKXBMTSPVACWTHLUVZUIDVFFNAUOZJJOAYGHBRGKEGSRMJLHAHKYWQBWMWYRSDIPERETEPUQKXUIEVACBFPOQMNASZHJG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PSWNEUVCHHJIRYCDLBNKEEUIULLRBDVHFYEQAGRXVQFCCJBDDBZYGLAOXDTIRXSSRZZWFPRKGHGDQTFPAKFHSFHBCMYIZMOZGNATTVILCGJEDMGHNOFMOPXLEBQNYSAVAFOMHSWUQBPMWJMXQAXYSDRZZVTLXJQZRTPIYUYTEDWJSQTKIHCNSKEOAV");
    tmp_msg_0.feature_type = 234U;
    tmp_msg_0.rgb_red = 165U;
    tmp_msg_0.rgb_green = 205U;
    tmp_msg_0.rgb_blue = 1U;
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
    msg.setTimeStamp(0.35098534917002755);
    msg.setSource(59719U);
    msg.setSourceEntity(79U);
    msg.setDestination(59095U);
    msg.setDestinationEntity(191U);
    msg.id.assign("CVUGZZTPHMVGLIHFRPEYMAPSQUMORILJQTWZNNBOGFLKADYDOFEWZFOIQXSGMRFXIXTYFSLNOPMMSJWSEEJLQWJSKDKWRUHMCBYQMVIIEHIECZGPTBJOHVRAFXHUIPEQECBTCZKNOPTKDCEDUOKSJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NMQJLDVUTEOPSVQYTKNAKIPTFPSIFWDPMIVTUVEMUEUAXBOKMXHBGYIZZACMHWEDRCCVJOXRUSTOEZBZQQBBLTUTWLZYGINPYGSAESOTPCUSVRFCXCVBYVDSJJTDWJAHNEVWHPENGTWDRNAYHJQNLRMLFFGXXUHZFDNXFGRZOQMCHYKKMSOAXGAKIXYLECVBIADSUMHNGOSRYWKLJEDW");
    tmp_msg_0.feature_type = 1U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 7U;
    tmp_msg_0.rgb_blue = 165U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9970140579942258;
    tmp_tmp_msg_0_0.lon = 0.3950879571448155;
    tmp_tmp_msg_0_0.alt = 0.3811238630969921;
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
    msg.setTimeStamp(0.3201398175461213);
    msg.setSource(23926U);
    msg.setSourceEntity(155U);
    msg.setDestination(63741U);
    msg.setDestinationEntity(94U);
    msg.id.assign("GQKRASGFQBWDYYPSHDIUDVOQLYZJCNXBKCGFXDRYBBGNOARPWURYOMCUMQYAJNQLBEVPFZPETEAMENVBKHKWVXYNFZK");
    msg.feature_type = 241U;
    msg.rgb_red = 57U;
    msg.rgb_green = 130U;
    msg.rgb_blue = 196U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.011279122625379112;
    tmp_msg_0.lon = 0.9587385829511405;
    tmp_msg_0.alt = 0.6627476025516008;
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
    msg.setTimeStamp(0.7116560168637324);
    msg.setSource(25375U);
    msg.setSourceEntity(101U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(133U);
    msg.id.assign("COHWNGXLHPUZAOBEPVVKPRVOLBNYUITTNJJABYHUSBDEQASWKKTIPPKEYFAIDQRPSGICXKHSKFQSYBAJGZEBQEXRUDNLYDWLSQWTDICDTYIDDMGPMMCQJWXCOZZDLAKVNKJMUVLHNCFQAOJFPZZRVXFUGURJMQCVHMGPYEKRVWJQIYQZOMXVEOSXISTGYRPECXSMHNBFCWUUTZWTALFLGHCUTNGZFZJR");
    msg.feature_type = 200U;
    msg.rgb_red = 252U;
    msg.rgb_green = 71U;
    msg.rgb_blue = 136U;

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
    msg.setTimeStamp(0.4334376998594103);
    msg.setSource(30049U);
    msg.setSourceEntity(105U);
    msg.setDestination(47847U);
    msg.setDestinationEntity(79U);
    msg.id.assign("UQUVDZWHSKOPLGGXVEFOYUJXERTXKTQJWPDGRKDCZBHSANZPWHNQJFUFYFXLGXOWMWXTMMUMIUORFCYLTHEBSIRPXJVVRBGDGKECDSEVMWTBHHQMPQCKHSEMZLNNLNWCVXODAZTKUNJRCASBQMITGDYYHEKOQFNVELYNIAJZMOABVVTWJDHBFINPLSA");
    msg.feature_type = 121U;
    msg.rgb_red = 52U;
    msg.rgb_green = 69U;
    msg.rgb_blue = 182U;

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
    msg.setTimeStamp(0.7262116143479831);
    msg.setSource(61167U);
    msg.setSourceEntity(115U);
    msg.setDestination(30709U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.47445182260725294;
    msg.lon = 0.6135780793433928;
    msg.alt = 0.39882647068171373;

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
    msg.setTimeStamp(0.531429003105984);
    msg.setSource(30897U);
    msg.setSourceEntity(180U);
    msg.setDestination(40100U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.28561167018604905;
    msg.lon = 0.9671539260334621;
    msg.alt = 0.1903132483675265;

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
    msg.setTimeStamp(0.8006534785671922);
    msg.setSource(45908U);
    msg.setSourceEntity(137U);
    msg.setDestination(23290U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.997317728675422;
    msg.lon = 0.8618205373478439;
    msg.alt = 0.6653402339149977;

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
    msg.setTimeStamp(0.11161543455436784);
    msg.setSource(60964U);
    msg.setSourceEntity(162U);
    msg.setDestination(31052U);
    msg.setDestinationEntity(180U);
    msg.type = 179U;
    msg.id.assign("XAGGYYJFWTEDPJGUZEMBEFSDPPDOGRHXOCVFZHMDWNCULMGRFTEBWNGVXQHLZXDHLXYWLEAVSCCHRTNUZNZRTFOORPFTABKTQZWBZXCDAQELRWYGMPLNJUHEHKNNNKQDIQMYFIIFXSKSSUAEIFQIKEKMYCDPJYYLLIKJLBMMXUITVVQXIUWHJSIQSAJPUHVB");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1025662611U;
    tmp_msg_0.start_lat = 0.2587698531832192;
    tmp_msg_0.start_lon = 0.9355184872639664;
    tmp_msg_0.start_z = 0.14362408283845818;
    tmp_msg_0.start_z_units = 31U;
    tmp_msg_0.end_lat = 0.5834248732751296;
    tmp_msg_0.end_lon = 0.7964146431177055;
    tmp_msg_0.end_z = 0.3727157942452669;
    tmp_msg_0.end_z_units = 60U;
    tmp_msg_0.lradius = 0.9897451286350819;
    tmp_msg_0.flags = 205U;
    tmp_msg_0.x = 0.43932496972190416;
    tmp_msg_0.y = 0.012821618045073313;
    tmp_msg_0.z = 0.3583694548893642;
    tmp_msg_0.vx = 0.21618249786074895;
    tmp_msg_0.vy = 0.020217690235252994;
    tmp_msg_0.vz = 0.4970505561563847;
    tmp_msg_0.course_error = 0.8958506433790857;
    tmp_msg_0.eta = 13746U;
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
    msg.setTimeStamp(0.6996806310418571);
    msg.setSource(12718U);
    msg.setSourceEntity(96U);
    msg.setDestination(31109U);
    msg.setDestinationEntity(154U);
    msg.type = 36U;
    msg.id.assign("ENZPOMMLIPRWDSGLWWWSVJUGVEZIEAGWBJVYMCRDAXIFLLHTDPZCNFRHAPWASTAUKUJL");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 161U;
    tmp_msg_0.step_number = 247U;
    tmp_msg_0.step.assign("QPUZOKTJLNGILKZUGPPQCMWKWMLACCUBQUXVUAJVOTVAXPQTTOKRZSIDLPIETOKFGBCONUYOEADZWTCOESUVJXPHXRFKVEYEYRMFNWXWNZBCAIMLQELXHTMRJDIJVDSOEBQGQXLSDWHLSJGDBJQYDTRPZGFFMJPHLLTBCYAOSNNKCZSEGUFCZWYNUXIMNMSUAYARISBDRFOQMGHRZXPJMRHXBQAGK");
    tmp_msg_0.flags = 45U;
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
    msg.setTimeStamp(0.7923986787603787);
    msg.setSource(13653U);
    msg.setSourceEntity(56U);
    msg.setDestination(678U);
    msg.setDestinationEntity(155U);
    msg.type = 172U;
    msg.id.assign("UFTDLFVJEXHBDPGEGDLMGUISMJPLUJFSLZHCLKJRWBXYBWXFRTEWXORSMNGTEVGMQELZWPOQMAHPBMVCANJIILTSYSZYIRCYGZDVMWQDJBFZOXELOGKUKBXNNKOOLXSTBFYDTRVDKEHTNQSWCCDOWPIKCJFADRWHREUIEQCHNCEFHUVKYYTIVADANMTRGGUR");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.3249530389925894);
    msg.setSource(45810U);
    msg.setSourceEntity(78U);
    msg.setDestination(31792U);
    msg.setDestinationEntity(229U);
    msg.localname.assign("PYVSFGOTMVHWSXAYBHPCOPGQPPLKNBWYJKMORVSXFFMETYDPURGINWMEQGLLOSRPWFAEHDBHGACRSZTLLOKQVYCYSBNVKVHLXNAKECMKCDGTVOLBFUERNRTQAXIYUUZQMVSUQDOJGKWCAWJWVFJIHNJZOMELZNQYGQIKYEZJPDRFYBAWRCRHHBEASMDPUEZZZBKXQSJXCFOAIMTPDRDKDUISWTDOGJTAJVQZWIUXHTNEFU");

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
    msg.setTimeStamp(0.6136917108870618);
    msg.setSource(35924U);
    msg.setSourceEntity(112U);
    msg.setDestination(48957U);
    msg.setDestinationEntity(245U);
    msg.localname.assign("RTZBHEBLPORNFZHSILNIXACJSZHLGUYPTSGGOXBAXZFVJEVDHUCPBF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EQHZAOJJVBHWCKTXUSYUEMVQOCFYUYJNWFTCRYQTQRQTOKWBBENYOAKKGPUMPLPGOGSAUZZAXISZTDBSTRDKVHOWKFBUEPLYVMKEFZMMRWJGBDGYZSDVPRHKVEFDBDXNAXWFQDBCG");
    tmp_msg_0.sys_type = 197U;
    tmp_msg_0.owner = 5961U;
    tmp_msg_0.lat = 0.6809470921404083;
    tmp_msg_0.lon = 0.18269824785982924;
    tmp_msg_0.height = 0.9597829895777429;
    tmp_msg_0.services.assign("WNGBPAVADWPQHKEVZQSBCMWJURTYBQTGPOUDVRBSYXFFRJJANCMGZDOFGZBRCSRXVOLUALTBQTYCOUNHEJFZQTAGLIPLSIFWDBNFIGTGCDVJPEWWWXLUEEZZTVXXJDOOLCLHHQECVREQSXQSETTCOXWRMNXMMAYKKLKMIBJHPUHIDDIP");
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
    msg.setTimeStamp(0.5407433651800957);
    msg.setSource(38094U);
    msg.setSourceEntity(234U);
    msg.setDestination(6743U);
    msg.setDestinationEntity(245U);
    msg.localname.assign("FMNOHJHJDZYEEVPSNRGFSSBFOZHJRHAAMYJJAFHSWRLSZSMCXEZWUZGHOHYJTRRADXSXOMUFNVKKARMHQCNKVKLTOIOUAEGBNQZKEUWYIYTLNMAQMVGOJQXOIXGQLFTSLTQEQBDNJDUNLWXNGUQ");

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
    msg.setTimeStamp(0.87471288356279);
    msg.setSource(8358U);
    msg.setSourceEntity(168U);
    msg.setDestination(54280U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("PQEBQTBLJXAPVARXTFWCAHIZCORYWTDQRKVXQEDBGSTHXCDJPZSYJNKVPZNLCTMYYMBGUFZILZKIBQQJYTCYWAGWRNNUQCQCHPKGAVEDESNOPGLZBWZKVMXEYCNDGLSHQIOHIEHTASUHEFYRAWNVFMAOOBLVPMIJJXSRJZBZFUIUELSJSVRLCGYWGFHUKADTRUOWYODWDOEUMRALVTMB");
    msg.predicate.assign("GIVLDANLCMGPYKCOBUICIMLFRZMZFOHLVLAYZWKSHQDVREAGBZCDHRJWGUAZKBZBKJTFRHPXQKWNSNYQLETKXJQDUAHUYRCMFCNZQHMJTNZYBLCIYBIOWGEVNYEAKYECCBIONVRPDSFWYIPMSPETYSGSRREFKVSMDUHEUDVHTKOMPGQXIBVXKLQSQSWXNFDAJRHOFJWJZEAWGOXNPMRWIPFTNIJJBBGQSXXCOTGX");
    msg.attributes.assign("ALWNTLQTLPJFXCIUPAVTNMFAEFBTUKBZARWJIXLYNPWYHOHSIDAYIXXSBWLLSJWIZRZCUXYGXQAGDHQAYFEWVMHYNUMRBUBPLENDCSFHXXTWSBEJAVPZZMBEWZHBZQMRHCJALOVDNSFLQGDSQISEDGXYJDRPUCVOMMVEWUHKTZOYBZTOQFMDIUDQPDFKEEAPGLEVGKUGRGQKSCXTIRVWKFNIJCNKZTP");

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
    msg.setTimeStamp(0.3616748078505363);
    msg.setSource(41974U);
    msg.setSourceEntity(45U);
    msg.setDestination(32093U);
    msg.setDestinationEntity(128U);
    msg.timeline.assign("AHEPEYPXVCUESWOFMLKKXBXTPBZRJSVIM");
    msg.predicate.assign("JPWGITZMCBRGQJKLQRBHXRPNWEYZKFRVJJSIPZZXISNOJANTCHASEDDCUKKVROKEJDQQCGCLLUTVYJBWZUCYGALYKGSWFAJSFMKSXXEXSDWFNZUVELQYAEXEZOONRSIUUIAPP");
    msg.attributes.assign("VJYUHRILFZKLGXTRUFLYNYZOKOHBEARCPIDTPMBJHABXKBFMMTAKCBPKSFTBDPJYXCMILINCWOIDEHODWWHFIEWXEUPSTUQVRGAOKQAYRFTQAVJPFPDUSWZSRHV");

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
    msg.setTimeStamp(0.4655220176867858);
    msg.setSource(21930U);
    msg.setSourceEntity(71U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("VDBWCJGQEXSPENKPVRETLFQZIWHVLPPIZUOVOEJS");
    msg.predicate.assign("ZRMWXOLQSKWZXOEUJEFVNLMIWTYQTMVEPUI");
    msg.attributes.assign("VILWSXXTDFZTBRDJBJVRRPXVUTBKLARZCYQENEGQWLBFKHXSXZMBS");

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
    msg.setTimeStamp(0.8678634518702396);
    msg.setSource(37067U);
    msg.setSourceEntity(143U);
    msg.setDestination(7111U);
    msg.setDestinationEntity(213U);
    msg.command = 107U;
    msg.goal_id.assign("EIKZJSROBCKSJAHCDFYHCJGYDLQAFRREXJDABVFGUNVTJHYRRSTYVHQMHZKHOSGMANZALNJHYEIVTTPOVBRMQCEPQSJCDJEXLWCAMTZRGITLVPSDLDUXIEQASWKMKNYUKTDLFGVY");
    msg.goal_xml.assign("DFNFEINNAKRKMIWTPWMENTYSZZOMHUNSJWUEAZNYHAKDFFREYUPMABLTNCLAJCAKPYGYLGRWSMALPVR");

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
    msg.setTimeStamp(0.4639599332370503);
    msg.setSource(39145U);
    msg.setSourceEntity(150U);
    msg.setDestination(20348U);
    msg.setDestinationEntity(172U);
    msg.command = 238U;
    msg.goal_id.assign("OTVKADQBHZXBASYAFRXZLJHZUXGWXKHGAPMTBPQJJFHPTBSFOWWYTKQQSNBMOFI");
    msg.goal_xml.assign("QBDHLIIKJYJPFFCIPBHEIEMIYSJTYASFDKVDW");

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
    msg.setTimeStamp(0.6952042328890441);
    msg.setSource(46742U);
    msg.setSourceEntity(244U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(26U);
    msg.command = 135U;
    msg.goal_id.assign("IICJPOYLKXFKETOYUVNEQPQZEWQVSBGLVLUMSTBKJOUPLGWHSRZGFHVAWLHHMRZMAOTEUXTHYDBFWBTAAUNASDBZMYBFSFXEPVKJXBMWRARQAUEYSGTKRRRVQCGIIPOKJWPIYUNVMNYMDIFDMIDQTCZOIJSBQLNZZEMTPCMSFXENKXJHZXYCTZAGDPUCSJEFHA");
    msg.goal_xml.assign("NXXOPBRMDAPKDNFKQHXNVKGOWCFIGTNMIXJPTYGZLDDUFHETQNMGQKVORNGINPKBTNYLHLHARPJDJFTLYRJVQEVCIEDHBUPEDQSGLACCMOBKXSCMWMOQSFLIYVJIFZMBWZAFFWUUBSRSPYURAYGXXVMQIZOHTUZNJCDQRJZLALXZPLVTMIDYKDBPSCSKMHFWJXSGCAKLGSENIBQRWVIRYOUBTUJHQUVEFZJWEGTCVEOTKEZSBZA");

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
    msg.setTimeStamp(0.5318720988142224);
    msg.setSource(65344U);
    msg.setSourceEntity(13U);
    msg.setDestination(20411U);
    msg.setDestinationEntity(57U);
    msg.op = 28U;
    msg.goal_id.assign("SYHMLRWZOAFEFCOCARAKVKJTBOYXHIQGSGRKRIPNAVIUCILAMYFXWDSPNNTOIAWHDLWBEODJMEXCNEEFRYEHIEMKPVBUIMAZSFWHZIEJWDKZWSKQOQNFOZXJQVTSTJJLAKVSORLULTCWXSUBDDHVOYPQQVCGPECHVMNUPTTMXTCWZDBXQXNPTB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NKBVQIQHEZUYWSDTYJZIDEDQZWDGJUPQPFFZATIRCGAZQFDXBPBXQUDXSDPRVWRYKOSPJAZNONIPMCGLGMLLWUUJANIPWHHKEXXNXTXLVYJZYYFJHNVZGUINEVJTUUDQBTROCROSLSADFDEOYTWTRQIANREKIVICSSLWOKSKHKHLRHYHGGBEMRWAWUMQMGXFZSNOFM");
    tmp_msg_0.predicate.assign("NJGVAOZWBSRVXBCMJKUKPNXLWCCKXVPBAOGVMWQEAKMERDRFYDVAWQRHDNUFFTIMUENHBLRQBQYPIKRDVTALLBDHPIYLTFWMOEZRZUBXXCTJJKLOUOZZXUDKAFLMQWJVGEOSEHOLMXIGUPNIOORQYVWGUYUASEFSMKXHNHVZQTRFNSFJGJYBZECT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ACQDGSWYQGEECUSFRDTUKVNQHUXEIVICDHAYNIWDEUKKBXMJAOUPORXEBZSJGUGJYPITSAYZHRIERXGBIPBUNIZWZMINHDMYZPSSVRPBRUOPRPMMVFMSCQQJOXFFLHFEXICTCWJWFSEKCTOKFBXYCHAMNLWLQQHVHRSNOQB");
    tmp_tmp_msg_0_0.attr_type = 117U;
    tmp_tmp_msg_0_0.min.assign("TGDPNARVUDQAWJENZRVUOIZBFQNCJMUXLZXSQBTHVIKMYESPGEOXSMYUKJJNZMIUTLPSDMMFRDOONI");
    tmp_tmp_msg_0_0.max.assign("INGSMYDLDPDEKXEJGLKFCZMYYMRREVEHMRWWFTFWTXHIYBKFRHPVWMGOCBTOSIGKQZMPSJUBOYFLTXXSHEPAUOJFCTEKSAJMDLEPBKQBRXKHEZNVOBCALBQGZC");
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
    msg.setTimeStamp(0.7065719548197994);
    msg.setSource(53345U);
    msg.setSourceEntity(174U);
    msg.setDestination(63136U);
    msg.setDestinationEntity(59U);
    msg.op = 223U;
    msg.goal_id.assign("WZIABPEOOCJXEONXLSDJBXUKDSHLPBALGGDOUFOFTQWQGNFV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RMMELYLHYDBNQMHDPJPCBTFDSQFYYVDRCABTSWSFGQWVMMGOVGDJNNFPMWBLZHZHUYIZABUURALWXAIHTKRVWZZVXFIZKTFLWVPXBSRRMUJQDYWJOTKLKAXKZRABG");
    tmp_msg_0.predicate.assign("YKGQSPKYLUAAFJCXIQGAQPZBOFECTILXOEAVSZARMXXHXHPABPWGBJFVCZYOWCFHASCWFRGEMCQYBOWOJWV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WFFOEJIEUUUVNFGJTRNWDHDTYNMXXYINWRZOIOSUIAXFSODVQJTDJPRIOTBXCGAULXSKGXLNCKQRJPHILUZMTUFEJCQWZBFYYTYUBCGSBZXHCLS");
    tmp_tmp_msg_0_0.attr_type = 159U;
    tmp_tmp_msg_0_0.min.assign("PRGCQPHJXPWUKYOJMKLJCWSHAZIJNGOWVGJFJJINPPWTTBH");
    tmp_tmp_msg_0_0.max.assign("BUUABGAXEHRBNBACBWKLXRUOWVJUNJHDYQMGZF");
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
    msg.setTimeStamp(0.21408119321168917);
    msg.setSource(10279U);
    msg.setSourceEntity(218U);
    msg.setDestination(41424U);
    msg.setDestinationEntity(86U);
    msg.op = 239U;
    msg.goal_id.assign("BKNWAOJMFGJMJQYSWIKIZNDAPODMPYOZXOXDGVFPFCQPIHUQTQBRGZWRZFBXRWSTJPRZTWWQWCEUTTUPQFNWLRVDCOKAKLVXJLJZOSEHQNZNUMHNKSYSTSEPLLEZCXTQIIRBCMBYYIVCYGDEIMXETFLQCRUHJPSHGCTOKPAHELBVYRKABUNFZLNAUYCWHYZEOAROJBUVYUNBSHKSAFXVIIGVGMXJMUJLDRKGMX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PFWGBWAEJTZTQZCHBTOGXVXGKLRMQEKVQICJCNIHSPGWTUSEAUI");
    tmp_msg_0.predicate.assign("QVHOUKFAEUPRRPGTIBKJJTKZKFXYWGXNEQLSXVUFEHXODWEYRABPOIDYRHQGVMESEXOZYBNTMCWBJEAEZZABYRPAMTSDHAHVNIAKKTQIHZILTIPXOLHFQKRELJHRAYVSJSOGVZOLYOGFFJMPTHNPVRMWDIBVODCQZVSNDWCACXLQZFBGETZUUSJUGIWOBJUFKFBYSVNLJZPNWXDGCACLCSJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XVEYZWUUTQSGAIGTJALCVNQZBHOHMZXDRMLHCVPAWBJNDUBXHRAUYWHLGASJJRSGXPAZPGQQMQJZKJYQYTRKCRYTKWPIQINMFHQLXIEFCEFWYSBDWANUKVLHVCOFVPEGIYXPZ");
    tmp_tmp_msg_0_0.attr_type = 212U;
    tmp_tmp_msg_0_0.min.assign("MSYJTZXIZDNVQNFUBXYSOSHAQRKJSWCMDBWDFSNPHBQVRARRBOASTLGPAANHICTZQDMYGBGNCCYFLXXWIQLCOHSNLGCFCJRUQEIMMHIMXOJFYLFMHZGPWDVXBLJOZRWGWKUDYXZZBIFENWUETQEPOUUXUTKTOEEWKQPTAVRLHGMBNSHNFILWVRRZEVASRPFCTPMVJDVPZXUIYYQEZJNUGYDKHJJOWDHXYKLCATQKKA");
    tmp_tmp_msg_0_0.max.assign("HHKSZYIFQWBITBEPXWOHFSLMHUEIBKLVVCRYUHAASJKRZDANNFBQZTJUGWGCXHZVAYTECSAGL");
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
    msg.setTimeStamp(0.7170210385094095);
    msg.setSource(37248U);
    msg.setSourceEntity(174U);
    msg.setDestination(24924U);
    msg.setDestinationEntity(93U);
    msg.name.assign("HFECEUICIGHBWKYKQRTOYTWSBFXWEGPOFCQMSRRBWKCVLBHZXHFLYECBVZFREROBITAGXOMFYVKRAUDXVQBZPFLIAUGUUUKUSNHNHNYWHXVNMXATJYVKWTZREIDPFURACLYDMMIRPDZUOHAOASZOVCQGPQKZGATPSKHXJDVBMKEDWJJMHJSTLSWIQQS");
    msg.attr_type = 6U;
    msg.min.assign("ULQGNZHSFYJEPVU");
    msg.max.assign("HHDAETBPOFNJSPJTTQIOEFZITUOSMFVLPQSRFAGJYJEVNPJGTHAWFIGHQRGETZJDFXVMXUWADDZRNYUBAHGZIOCFVMNPAEUYXTBKGCYYKFXDREUMCHXVCFJNZGOWRBPRAUOWKMQQHEGMNIGWWCMWBIAXSJLTMZEKAPNZDVXETDCSIHOUQYWSRBNPQZLWXPWVVLEIYLPYXCGCNVOCKLKDSIUHLULKYKK");

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
    msg.setTimeStamp(0.03567645613294135);
    msg.setSource(51483U);
    msg.setSourceEntity(150U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(33U);
    msg.name.assign("CKVNMRJCUWVGUTMFTOXDGOIPGWCHXET");
    msg.attr_type = 175U;
    msg.min.assign("OKYMJVFXRNKMLNQCEPSRGLZJSZFJFUHSYTPFTUHQJSTWNVIYDWXVCCVXGBTMWSECDXBADFQEORZ");
    msg.max.assign("SPDRLLLCPHWBLMVKYMAWELFBTBOOBEFGXAMJDWLRUWREIQXDUHVJTKPQJEZWEKHROKEOPFSNPIAKHSVIMFSIGBOZPDXMDGAITKPDYDMQWWGZDYOVGAGEWWRQNSBTRNXXQJFLJTMUJXLPKKQVUFSYVIICCFSVEUPXXVYNNYCMLTFCCQHGBMKJNOQZWZJHCSOQCZGINTZDYRHACVXLAUFUUMIBAQCJZZNZNY");

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
    msg.setTimeStamp(0.25074382904373127);
    msg.setSource(56891U);
    msg.setSourceEntity(14U);
    msg.setDestination(37488U);
    msg.setDestinationEntity(223U);
    msg.name.assign("TCPSEJAROUHDWIJTQINQXYYSOXCOFKCGSLFIQCAXRZHPGWNJFIWMMHXQVYAECKRYDLTSXLZKRNVDPCYSOSRUDBVVRUTNHHSPBSLTMHZTHKMBWVYXZPCXDJLMHMQMDWNVDGUULPWHEQJWOZTYLZPSLTOEULCGTAGREVRQIFKJWBAVFOBJBZOGVYZGVPMYAAUFNFEEFHOBBMTXZDQCCAPFQKKIUWRORDINZFNDIPXUGKBQLEUINAEBI");
    msg.attr_type = 144U;
    msg.min.assign("IXWFFKFZRURHOGXRNGGKMCYSQUJZFPRRTRTELDIXTIKPEQYZHPEIAMBSSLJQUTVHYIXFSPGSCNVQIDWPBLKCVCLJBCMOAYCTSFIWEERZOBSRLBUTVDSVJZOJJMHHQPTWMMWRDTEENJGGZQJKZYPWWXAOUAMRYCUPVYVXBQHVFDOYOVFGMNGDNTLIPNKO");
    msg.max.assign("BCWWWPPRCEMXZDNLIJKMSHBGNVD");

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
    msg.setTimeStamp(0.7815050209848351);
    msg.setSource(54242U);
    msg.setSourceEntity(90U);
    msg.setDestination(58715U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("VKHJQSJHHBCXOJJYMDNZYSMIDBGXNWGFOPIXXUOCVMHNJEAPVYSSTKIEXRDSLBLFWSGFFTHTTWRYCMOUTDPUERQXWIVOZOAQJSBPCAOQIRVHFANSAUDJUFYEBWEBFYMLVKZQLSUANEHMCWOTLTOZDZZCFYHICGGQMDAJLHGUMICMEKL");
    msg.predicate.assign("ZQBYXNPKSOLZBLILFETOAABQNKKMIETGMKKMZFBAATCJSUIUJEWNRXXOUCBOFVCGDYEGVIFUSZFKBRQMOKCMVWBCWHTSSSWUEJZMKKAPVWDUPSBDPIEJVT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ILFPGXMRCYUWVBPLXXHHBSOXACHGPAGJJZVEEDWEUZFDOTKKOPNSNXTZRNYRDCONWEDQYKQKGATAWWRFGTYODKJYWCVVMCULNPIILZLLNSIEEZKCKTULCMJCRLEQJBBQTWYUBHXGQMRMTYYHYQWSBNZOIWQGBAZHLB");
    tmp_msg_0.attr_type = 55U;
    tmp_msg_0.min.assign("GPWORMYOHHNDP");
    tmp_msg_0.max.assign("KLIKXQSLNPWQORRHUPKNMCBYETRBQGIDIRQCAIDKXWUQ");
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
    msg.setTimeStamp(0.30577033025915457);
    msg.setSource(9657U);
    msg.setSourceEntity(2U);
    msg.setDestination(44560U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("MGARYLECQTKAARJNXAQQHCIFGSLMCJYGVVKZMXFXTCAUZNNGLCWGZVUIJJBHIHBHKJJDACMRIMOWKPHGZBWOR");
    msg.predicate.assign("BIJLJPWQNPLBWZWVJXEKNWYGCTPFUCZIPGOJMOWDJY");

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
    msg.setTimeStamp(0.2752292542745045);
    msg.setSource(18273U);
    msg.setSourceEntity(22U);
    msg.setDestination(4035U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("KBTIIRCBUEPWDUGZICXRSNPSGFGBKDFRAUOHYTFFXDRNYQAGWPXARQHTQOAEVNGXYRSWYQAVHJZSJRPUJIFDAYKFJ");
    msg.predicate.assign("XUCZMTGIGDPLZWOFEWKUOHHOQLJLFARTXLALIWWQRXKCSQDRYHCVMEGXZPKDTZUBFNQWLSHARXVGQXOBZXIJCXNVIBPIUCCPRQTVJBSXBVBVMSKYMKCVTRYNNEYSPKTFMYSHCJGPGHVDLINRWCKFIZPFRFRGMBPOFZYWQEXHUOQIOKDTYS");

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
    msg.setTimeStamp(0.4146265403338564);
    msg.setSource(22710U);
    msg.setSourceEntity(207U);
    msg.setDestination(8273U);
    msg.setDestinationEntity(34U);
    msg.reactor.assign("ZLJJTPFWSTPEVUUXNIEQYKBSQBXOGAGBZPGACPORMXYMFNCNBVMJYDTGDBJSYBXIAGGEVHWUFFNPYDOEJVVFECMKKIKDCFYTQWXRNTYDIJDKRCIIQQISPVVZCDJGLWA");

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
    msg.setTimeStamp(0.280638588377666);
    msg.setSource(37778U);
    msg.setSourceEntity(34U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(56U);
    msg.reactor.assign("KDDLPUWFZYFHQTKLMQNBAKIWQKDLBLSQWGTTWSPRGSWKLMHQVNLISOUXJYZNVHODYJRYKVRXOANUHCMCGAIZXCJOZKDXEJBQUVAYEITGPVMTSAAKFOFHVPWZBBAQR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WSATDFWRZQLXJQWHZYGDPNCCVSNJNVXZOTGIKVHFJRIIXNKMHZLWDKRQMPWNHKUIDBUCPJV");
    tmp_msg_0.predicate.assign("EHXQBNSJDDNACFNGCXNLVSQRBTZADQUXPMEELYZOPEMVALZVRYJTLRISWDPKYATIVWPQZSAHUAWCHKFOYFHTKABLCUFAQNJVNZNXPKIJWJUPJCTXMKVTMKBEGSIEGINSBKDIHWGEURCZQFVRFJCKMBLYZTCOOUCBRGGQZHUBVHPOPFJDIIWWDLVMAUCQOXFU");
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
    msg.setTimeStamp(0.04802861241098144);
    msg.setSource(26030U);
    msg.setSourceEntity(226U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(70U);
    msg.reactor.assign("UGFDWTMQVFBHZDHTQBAWASPWORSVLIBRSUEQWZZHOXIUOFQVKPZHJGVDGSCVWYJBTLLDGDPRCJSYCQXVAJNX");

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
    msg.setTimeStamp(0.9563118289629244);
    msg.setSource(42810U);
    msg.setSourceEntity(163U);
    msg.setDestination(9066U);
    msg.setDestinationEntity(181U);
    msg.topic.assign("AOVQGUGFOINDDIVUECIWMKWFMNTFKBZKQMIQOPKVHMMUURBJFXXCIVEMJXEKXQ");
    msg.data.assign("MPLFFDUISHRYQXWBFBQHXOHCKCSGWGTPQPQLRIOIFLUNGUDVQKGDHSAELVJJRPAINIHCXGJECU");

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
    msg.setTimeStamp(0.28780168061142486);
    msg.setSource(22357U);
    msg.setSourceEntity(162U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(225U);
    msg.topic.assign("ECGNYKTKBDOQTVAZXBYVMHSWMVISTQGHUODXOERTYEPUGWWLGDQKJILZSJUEJBMRDIOSLRHANVLFJEUDZGRQBTEKCIWFMXSDDXKTROKWJQEXMCFINBBHVQAZFANWNGCNRSPMZXFIMPACUBINMVXWQVCUPKICPSYYAOFSXZMVENOHATJLCLZHDDQTULBNGAHUYOFYZGQUKYZPFGFAYRRXLJPJBWVKTXWSUSCJCZ");
    msg.data.assign("UYAUDGDWIPSZGZRNEMHQSKSGFIJRKHEGILJIIQCRKCAXYHFWLJAJDWPHUKUFRDHVWVUEKJOBDUOSYJGRACWXHEWMTWNATLVLQXBNHQJPEPSLMPIBSDCKOBEETYEFXZEDDRBFFFSALWUPZGMMQKHVRSOMNAANGNKUZQJITOVCBIQNWLQ");

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
    msg.setTimeStamp(0.590510832329542);
    msg.setSource(46447U);
    msg.setSourceEntity(89U);
    msg.setDestination(64427U);
    msg.setDestinationEntity(33U);
    msg.topic.assign("AHISWBCTHYIZCHBJJMLTIRYBGDWEEIMZWABVKCHNISYGFOUKXDENVGKZJNEZMPQVCSVFOVDICUODCSEPQYZNAWAOGEZTPGEGIDXCLJUBIUFIVFZMASBHWME");
    msg.data.assign("ROVNWNMZHVGALXMMGQONXLBUUNUILXXNUESHAHJDFFUTBOOOPIVWWKLAGUNPVBJDVUTNVHAPYBFEMYTJLPJZZALUOEUXDNQRHXIWXKKMSIHOICPPIMABZCFOQYYRUYKWSWFRCXOSWCZQZMQXKOBCFYQKYZDEFYHRHEVIEZCPCKVIGATDICTTTHEJBARABL");

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
    msg.setTimeStamp(0.9630017166738658);
    msg.setSource(12850U);
    msg.setSourceEntity(54U);
    msg.setDestination(47111U);
    msg.setDestinationEntity(196U);
    msg.frameid = 208U;
    const char tmp_msg_0[] = {-116, 21, 45, -83, -26, -107, -60, 85, -17, 81, 50, -1, 116, -5, 81, -57, -98, -77, 51, -108, 9, -31, -40, 30, 48, -120, -120, 107, 54, 1, -118, 16, 101, 29, -88, 40, -101, -91, -63, 122, 108, -62, -126, 97, -128, 108, 20, 121, 72, 56, -4, -126, -29, -69, 2, 73, -123, -122, -49, 126, -36, -109, -87, 118, -24, -60, -79, 30, -24, -42, 10, -55, -13, -26, -54, -107, -82, -123, 55, 75, -5, 6, -125, -101, -44, 65, 91, 112, -61, 81, -124, -51, -112, 106, -46, -85, -104, -72, -84, -3, -4, 50, 26, -62, -128, 11, 101, -105, 49, 39, -102, 70, 17, 53, 13, 29, 122, 20, 44, 44, 0, 101, 112, 124, -90, 30, -51, 59, -75, 69, 86, 126, 90, -118, -48, -121, -31, 37, -47, 118, 59, -72, -9, 100, 44, -5, 24, 36, -122, 28, 120, 67, 7, -21, -118, 107, -108, 91, 61, -116, -120, 92, -97, 79, -119, -11, 21, 33, 30, 74, -6, 50, -28, 95, 23, 63, 110, 14, -105, 37, -114, -8, -85, -87, 93, 63, 20};
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
    msg.setTimeStamp(0.8117845590919074);
    msg.setSource(50227U);
    msg.setSourceEntity(72U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(138U);
    msg.frameid = 246U;
    const char tmp_msg_0[] = {-55, 91, -40, 31, -100, -73, -1, 74, -121, 64, 24, 3, 4, -75, -94, 116, -62, 37, -117, -124, 98, -117, -102, -34, 38, 113, -126, 110, 33, -79, -25, 92, 117, 96, 19, -46, 101, -91, 105, -77, -9, 103, -121, -3, -29, -35, -27, -38, -38, 24, 33, -72, -72, 82, -16, 52, -11, 95, -118, -22, -85, 19, 87, 50, 95, 28, 67, 11, -78, -90, 47, 76, 113, -39, 27, 4, 70, -38, -43, 116, 3, 40, -51, 63, -39, 47, 57, -103, -104, 70, 117, 38, -61, 0, -1, -85, -1, 68, -60, -55, -81, -120, -32, -92, -26, 51, -20, -64, 83, 91, -72, 44, -71, -52, 102, 14, 78, -29, -110, 99, 106, 76, 39, 98, 23, -72, 60, 110, -67, -41, -24, -66, -15, 87, 43, -4, -54, -109, 110, 101, -58, -39, -82, -121, -82, 43, -4, -86, 39, -53, 5, -125, -6, 71, 75, -36, 10, -125, -30, 52, 84, 44, -45, 126, 28, -81, -85, -98, -65, -105};
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
    msg.setTimeStamp(0.924968835882644);
    msg.setSource(39425U);
    msg.setSourceEntity(180U);
    msg.setDestination(52942U);
    msg.setDestinationEntity(155U);
    msg.frameid = 238U;
    const char tmp_msg_0[] = {-3, -52, 56, 97, 88, -80, -63, 79, -65, -78, -12, -27, -66, -31, -56, 102, -117, -93, -94, -38, -44, 57, 29, 123, 100, -58, -54, 48, -105, -45, 22, -70, -10, -96, -40, -37, -91, -128, 22, -32, 19, 97, 6, -73, 64, 2, -45, 11, -56, 4, -126, 18, -5, -126, 108, 20, -10, -106, 47, 67, 93, -76, -117, -106, 54, -98, -40, 81, -22, 81, 94, -16, 36, -85, 95, 44, -27, -80, 53, -66, -66, -14, 0, -24, 17, 80, 5, -65, 118, -79, -122, -97, -115, 23, 68, 37, 63, -6, 57, -48, -55, 0, 80, 20, 55, -48, 114, 15, -85, 120, 9, -95, 38, -51, 86, -5, 22, 6, -124, 113, -119, 106, -105, 12, 20, -75, 99, 8, -87, 2, 102, -107, -34, 26, 90, -6, 57, -17, -30, -94, -84, -10, 52, -44, -51, 43, -89, 84, 109, -62, 25, -61, -102, 103, 107, 60, -12, -113, 23, 96, -19, -15, -59, 44, -99, 43, 90, 65, 66, 15, 55, -33, 31, 52, -22, -128, 74, 88, -112, -39, 54, 34, -89, 23, -31, -5, 21, -53, 75, -126, -46, -75, -124, -102, 55, 107, -83, 1, 115, -34, 90, 86, -25, 27, 120, -71, 42, 7, -122, 21, 83, 6, -101, -118, -7, 35, -12, -45, -52, -112, 58};
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
    msg.setTimeStamp(0.6337180099508366);
    msg.setSource(50953U);
    msg.setSourceEntity(27U);
    msg.setDestination(50212U);
    msg.setDestinationEntity(208U);
    msg.fps = 254U;
    msg.quality = 191U;
    msg.reps = 3U;
    msg.tsize = 21U;

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
    msg.setTimeStamp(0.6576176456013861);
    msg.setSource(23636U);
    msg.setSourceEntity(73U);
    msg.setDestination(46268U);
    msg.setDestinationEntity(207U);
    msg.fps = 76U;
    msg.quality = 160U;
    msg.reps = 122U;
    msg.tsize = 125U;

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
    msg.setTimeStamp(0.12843049282157437);
    msg.setSource(6611U);
    msg.setSourceEntity(181U);
    msg.setDestination(53179U);
    msg.setDestinationEntity(127U);
    msg.fps = 113U;
    msg.quality = 204U;
    msg.reps = 90U;
    msg.tsize = 213U;

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
    msg.setTimeStamp(0.06887884517626164);
    msg.setSource(46065U);
    msg.setSourceEntity(59U);
    msg.setDestination(650U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.5968684957200178;
    msg.lon = 0.3878300939744612;
    msg.depth = 85U;
    msg.speed = 0.9746935423541034;
    msg.psi = 0.72255422856636;

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
    msg.setTimeStamp(0.13740093082321503);
    msg.setSource(62540U);
    msg.setSourceEntity(122U);
    msg.setDestination(2794U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.5263113597593438;
    msg.lon = 0.36206100599400726;
    msg.depth = 223U;
    msg.speed = 0.8346411752836191;
    msg.psi = 0.05797218911968338;

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
    msg.setTimeStamp(0.5435739706316696);
    msg.setSource(32406U);
    msg.setSourceEntity(210U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.8683838256187217;
    msg.lon = 0.8091894733486571;
    msg.depth = 92U;
    msg.speed = 0.7294819669510999;
    msg.psi = 0.7018742465013269;

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
    msg.setTimeStamp(0.043989733710032786);
    msg.setSource(52075U);
    msg.setSourceEntity(58U);
    msg.setDestination(4684U);
    msg.setDestinationEntity(192U);
    msg.label.assign("STGGHWGDMJGNKPXXDYOPFOEACFFMUUUUJJWWZFAEWJZBGRSRTLHHNCRKTRIOHBDIGLSSYCVPZNBHWWGNPJCNXQRSFYQTGHDVQMWARBLBNQMBYAXUBJPSIIUXJ");
    msg.lat = 0.3769093133104765;
    msg.lon = 0.12770795469000074;
    msg.z = 0.3781307146706655;
    msg.z_units = 184U;
    msg.cog = 0.054084393585099755;
    msg.sog = 0.6019738853021659;

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
    msg.setTimeStamp(0.2142392477310664);
    msg.setSource(50599U);
    msg.setSourceEntity(126U);
    msg.setDestination(2819U);
    msg.setDestinationEntity(190U);
    msg.label.assign("POGGFZPBOWCUQWVZOSFNTYQUISNIBDMNZDAJUGXKEBNGYTUQLEVSYNAXXCLAIHXDXVTKEBRIFGULWPAESSRQGFEIZDBGWNGLILRUTSEHYSIQEFKSYDWOFHRMQDLOMWKABHHCCMZZZXOCTPJTOAKSHRDGQRQTLUKYPRMVNPRFRQICM");
    msg.lat = 0.1607112920681375;
    msg.lon = 0.7773395846576642;
    msg.z = 0.17818041685778108;
    msg.z_units = 20U;
    msg.cog = 0.2743750483799646;
    msg.sog = 0.017520301572213293;

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
    msg.setTimeStamp(0.2868794286449027);
    msg.setSource(60322U);
    msg.setSourceEntity(196U);
    msg.setDestination(14479U);
    msg.setDestinationEntity(144U);
    msg.label.assign("DQGJXLZJJPERGSSVOZFVCUGTYZRTDZSOPGTVHSIYEZWIBFYFLBNKDXTJPEDTNOUCKPPPUXWQNXMHDCGWTQJRBIMWRVAAKQLHGRAMYCXAUPCOYTHLTPESUBVNXQOLOZEHIOWWVDSDLIYYTLLIJCNLFFKKWKOIRGFVBJRXXUMMJVAHHGIU");
    msg.lat = 0.6933630644080999;
    msg.lon = 0.12828589245764832;
    msg.z = 0.3043259150369716;
    msg.z_units = 55U;
    msg.cog = 0.2956104805428784;
    msg.sog = 0.7196888827450861;

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
    msg.setTimeStamp(0.21596630314491427);
    msg.setSource(39178U);
    msg.setSourceEntity(108U);
    msg.setDestination(57021U);
    msg.setDestinationEntity(194U);
    msg.name.assign("ORKYAOBTSLFJRWRZDSOPJTJZEVDXTDVXFTHDJMCHSPTQDDCXJZMYFUCVPCWOSKASMY");
    msg.value.assign("QELDWTAZTLIFMURORPZETXQXJFACIRKSIDYEBLWDGIUNDKBMSHNJOZYTOIAMYNXJCZQPBHQMWXUTDBXXSPNCBVQICWYLPZXNFEHFHSVHJMGUSCHMQEARVBPMBTOGYQGKUGRNJEWVGNHDIFJBFHWCGOAZTOUAVOGIKJKWJFBAPACKTOHRWURNTFKSPMAJYEY");

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
    msg.setTimeStamp(0.15257730296965477);
    msg.setSource(30811U);
    msg.setSourceEntity(35U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(60U);
    msg.name.assign("XORILAQTNYYKKVPZVBXLQZHMIIHDNSDDJEHFONZJUVEHKHGUOOKFSGTJLALLPQCXBVOCECCPXRLPURUWWSCFMDLZNABTTAMXZAFTNDEWCLQVGMDIEOSHUYPZWDXDWROBIUJICRJKAAZIOZEVKGMGFKSGNFCWVLUUJKNQBQUWWVYDFYFMSQDMCFCSJXYTJ");
    msg.value.assign("JHXVSHNJDWLGRHXKLABSEOEYQHVETJGRTLFSBCONTCVQLMZFTJTCCGJILWTWXWBBPANJNPXNCUPGLZQOJFNMABKOTSGIDARUUAFQYRPPTNDGWVLZUIUUYIFXSF");

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
    msg.setTimeStamp(0.9227985239165127);
    msg.setSource(62399U);
    msg.setSourceEntity(57U);
    msg.setDestination(50916U);
    msg.setDestinationEntity(238U);
    msg.name.assign("BRWYZHUVLJCPFMEXCSDGEGRMEVDZCKTBAVBUNMUGSLQFZQIORLFTHHQWSARQZKABKYPYNSXNUGMCSACXQBZVYFBOVWLIKWJWMFHNZUAGEOMJCKXIKCUIGURPMGXGPEYAXLGBSQHACRRLEWRBWBTXDWEOJYNKURHTPDPMPKQHDDXXMTWZTMFN");
    msg.value.assign("HYQPMCBHGFTUGEJFXRFNRBKQLUTGTPXKXG");

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
    msg.setTimeStamp(0.5792610893695406);
    msg.setSource(9242U);
    msg.setSourceEntity(38U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(49U);
    msg.name.assign("JLGNDCSPHOVZVKLQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HQZKCTYZYOAYB");
    tmp_msg_0.value.assign("ZOBYCGRZPAIFAJHOTYGKCWGSUZLQRJGXQZNBEYZBJYIH");
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
    msg.setTimeStamp(0.025700769540557666);
    msg.setSource(37575U);
    msg.setSourceEntity(211U);
    msg.setDestination(55841U);
    msg.setDestinationEntity(58U);
    msg.name.assign("VOVJTULWEMHFGJHYDDOMSACCIEVOVJQFTEZSEJRAAKXDPIFYZIKKPGHCUHMCGKZLPNAOREHYWGZIKFCZBQZBQNYENSPQPITNFGXUSRDIJGTOWELUCHMWXUVSKVZMMKECRVERHAYTXAYWTZBAFAFILIITSTNNGMHDLJJNCSCBGUQPHYDBTIXWUDUWEYKNJDQBPNOFUGHVUFAAMROVSPSMX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GZXRAEORIHZMONAIGMULLUCDPILXBVDM");
    tmp_msg_0.value.assign("LMOAYKECRYAYNEFFUSZYGURKKWWDZNUUXOTKQVXAHFNESBPBWBXI");
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
    msg.setTimeStamp(0.823396184281943);
    msg.setSource(58182U);
    msg.setSourceEntity(12U);
    msg.setDestination(33532U);
    msg.setDestinationEntity(59U);
    msg.name.assign("JMPQNUFXZTPSMRSFDADTFGHFKNQRWOESNTILPWAQIUNSAXFWMGHOQMBZIWEOVWCAXYDDVECULKPYRTKUFMVBEGTRRMANBQIXVTRYPEAUIFEZYYSBK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ATZXSHAMFLILNBGMSINHFWBPRMGFSBXUEZBFJQGMNVECFCDWQXMRQFYXDULCCWKBNDIIPLNBAGJKCHUEZQPLJIUVEOGFDHGFRPODVDAJZ");
    tmp_msg_0.value.assign("IKHDBUHPZVKOGINQEBEDPORIQUSIUBYZARRNJJPHKTQPTVRKBSHIVVGBNBOGVCSFGDNMQYQWSEVFSMVZMWKNRXSFAJKOAPTKABXAZWNGODCAKZID");
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
    msg.setTimeStamp(0.8143119515979917);
    msg.setSource(19555U);
    msg.setSourceEntity(202U);
    msg.setDestination(2113U);
    msg.setDestinationEntity(159U);
    msg.name.assign("BYGZERKQVZPNCLRWDTHSUSDEWIPAZRDKLPUMJZAIDUVOMZTEYVVDXNPHXBUMYXXHDLHGDIS");
    msg.visibility.assign("RZNRUOADBYCYKYNMVKRUBHPZRVPVVAJIGRMKQTNLBIAEPSQSSSQDLRQWGZTJLX");
    msg.scope.assign("LRSVWCPMVNZTLGSPDAWZHYNWWYMXMEZAZDTZSENDNLHSLGMKDCFRKBVGZQJHAFBCEYXBUUXAKGFIQHJPELOBVBCYVIOGTCLURFSXAZFOSUCMUYGFKPLEKACVIINMPLQEKJOKXOEOYTDUXRMMYJDXRECBJ");

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
    msg.setTimeStamp(0.11860828651338384);
    msg.setSource(39255U);
    msg.setSourceEntity(75U);
    msg.setDestination(2290U);
    msg.setDestinationEntity(89U);
    msg.name.assign("EDLPPDHHLYCLHMRDCWFJBLKCJIPHZFDOMNCIMSMJSYQSLOUDDKFRTQHGPDFNYZEPZPXMCNBRIEWIFXQTZAXAWIOWMJYEISQTFZBENJSADWLZRYPVBTFYMMXPTNNOIJWGACSQOEMGXNJTBUWJNZGKXHZBCRYKEPQCUSHQQFGTGJAKBKEUORCVUANXGKMVZTHVDUOIAWRSVEOVQRTRVYIGLOVGKULAFYBFXKKXASZA");
    msg.visibility.assign("ZGMCBIIOXUILIUGHCRYFLAQBEWIHAFZJQNLGIMOLNQTCPEPESZEXAPLTUN");
    msg.scope.assign("VRSKUDKIWVMDBPMXXGQGEFZ");

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
    msg.setTimeStamp(0.06733109377484614);
    msg.setSource(53602U);
    msg.setSourceEntity(189U);
    msg.setDestination(26270U);
    msg.setDestinationEntity(218U);
    msg.name.assign("JGRMBPGEZCAUAKRCGZXDPQFKUVGQLSVEUZJMHUGKINARIOCBLHHYKMGMUTIDNLZFGSDEWTEPZXDSQINISOOYJDSGLNBWLIFWBWOWBBTRCCYEZNXVQEPFNBNVROJXFQSXNMZPFJVUKWVMWDLJAKUTCZWCFOIYQKQNGVXUSLLRRHZTHMPALEFDBIRYEZYJYGTH");
    msg.visibility.assign("BWSAYAAAHFHCCFBDVJCVQXKQARYSVAZTTBTXITQFUSZVDXSUDCXPTEEORFWLQZWGJLKTBOHNLEHWBNRNOEXPIQNGMGQRGKBJUJLYFCMHIUJKCXKDIMPNFPFWVKNKZXPAUHPUVUUBMZZHEJIDTIGREFBUMODUCSXOKJXMGYGNCLIVRLDLNSWRMRGHVWQDYITYAYAJFLOPYHDVCKQNTEYBZZZP");
    msg.scope.assign("SJAVFEBVOBYCVPCKFATRSOQMLHINCVGALWXOTRXXVJXUMHECLQFJQOLOPQICCMVASWDNXWBNDTTGJUGQEKLQUIZDRKMZUDBIRPEMKUWDTDFBKTONQYJABYXABZOWDZYIXUVENWROFNNBRYIEWXMGPNSVPEFLGSPUDFZKFNHUMHMHSYYZGMRIYZHLGDHOJAPWXKKSZCLWTCRQTVURLDZBAH");

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
    msg.setTimeStamp(0.1501461770663951);
    msg.setSource(18444U);
    msg.setSourceEntity(129U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(24U);
    msg.name.assign("FEZFMONSJNVY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BHFZAFLXDKAYOIASKJWYPLITFVCEWAXNZPWDMUIFNTPXQVAJVGXMQLBIESRGGBTRADVSKZBWHIINTFTHHSXQPMZGARVGLPWBDFPJUXXOZMAUBR");
    tmp_msg_0.value.assign("VOWUFHTGJTCUANPQONMTBGOSZQPKAFLGPWGXNWTYCHSEPNNIQCQRHBOUAQKOPMIAWLDLPIKEABKSDOVMMMISZVTZHZGXKTTJSFAWFKBBJDONSZCSYAZYOPGFRZAIRSQXJRDBYYYWUJFEGWHWLMIDVMFICYRVHCHQ");
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
    msg.setTimeStamp(0.4863126001056113);
    msg.setSource(6312U);
    msg.setSourceEntity(185U);
    msg.setDestination(36895U);
    msg.setDestinationEntity(71U);
    msg.name.assign("PQWVFCCPTGSHVACLTVWFOYYGZRXWORKPVAVVOBTFEAWORZCBMTDVNFXIKHMSZZEJUJFAOSPEMPCKMVQHXDHLJMOUNJBSUQBEIOIRTZPDFACYEBDRYFRRHDLNAGYOGNNLLHVPIFQLKJUYECLCEJNNWAJXDIBHZGNYJQFLSULUKKXGGUQSDTZPESLDBMYGURSQZTMJAIMEUGWQOCNUIXVWTBPAWKXNKGXWQHHQBZRBWDSMDOYXEHIKMI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JRUPEQNFZPWBAVLQHHBULVEVIBBRYEDSTIWQFRSEBOIXC");
    tmp_msg_0.value.assign("NCZHOLIZOFETEHHEDGLWBXCYBANUNOHPUDNRQWYQESLSGTTTPRZLFKKWPEJIUFOEAMPVUIBZAOHTMRECBVZOWJUQWXCYJXUCOXADOBQMHXVUXBIRRVJVVSBFSZVGIF");
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
    msg.setTimeStamp(0.2996617055997016);
    msg.setSource(60248U);
    msg.setSourceEntity(103U);
    msg.setDestination(60544U);
    msg.setDestinationEntity(149U);
    msg.name.assign("HVDTRVLLEDMWEIBKMMYQFOALUAIJWMXFI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YKBNSHOJTEOXNAJWHCODQFDSPNETQTMUJCMQYUNJOROFYYBRGCPFEEEWAMUMRKULRCGLKNISTUTPMTB");
    tmp_msg_0.value.assign("ORGEFTBYDVNCPHEYVFBQPLFVXCUZAZULBCKKAMQCQYYWTNMEUNGXEHHQIBJQENBPSLVUHANASSBULGXWFLWWQQGZQWVEBDLPGYSILOHU");
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
    msg.setTimeStamp(0.43501369985659966);
    msg.setSource(46872U);
    msg.setSourceEntity(139U);
    msg.setDestination(11601U);
    msg.setDestinationEntity(118U);
    msg.name.assign("ALJVXMXBCYUTAYFUXGOGBGOCVXCGLWKNJNETPWLFFNNQFCMHUEQPNEOCRKIVGISADQAUPMWUPDGYJGIHFGEHWVREBMCTQRZDJMLPNYTKKHTDKIDFLYLYEPBDSEARIJBWS");

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
    msg.setTimeStamp(0.6738300603994211);
    msg.setSource(16032U);
    msg.setSourceEntity(175U);
    msg.setDestination(3569U);
    msg.setDestinationEntity(65U);
    msg.name.assign("PMDSTUXQAQOKZMJFQZMVVSJTMIDIWJGJOZDTETNGXOLCAHFUKTBCSXGHDZNOXHQHZUFUMJWCIEPHUYWYSWZYOBVVLYXEZFLCATAPLOBMANLYKZD");

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
    msg.setTimeStamp(0.5631994527286333);
    msg.setSource(2612U);
    msg.setSourceEntity(124U);
    msg.setDestination(28508U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JLBTUIEMHGQKXPFHWNVSGPYIVRIRPARHBKCEWAZ");

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
    msg.setTimeStamp(0.11734762957458345);
    msg.setSource(38306U);
    msg.setSourceEntity(134U);
    msg.setDestination(42144U);
    msg.setDestinationEntity(96U);
    msg.timeout = 35279177U;

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
    msg.setTimeStamp(0.5642360870657328);
    msg.setSource(34823U);
    msg.setSourceEntity(85U);
    msg.setDestination(45260U);
    msg.setDestinationEntity(36U);
    msg.timeout = 2992248887U;

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
    msg.setTimeStamp(0.3800540684123913);
    msg.setSource(31324U);
    msg.setSourceEntity(180U);
    msg.setDestination(49177U);
    msg.setDestinationEntity(204U);
    msg.timeout = 278582928U;

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
    msg.setTimeStamp(0.3965458698576697);
    msg.setSource(38494U);
    msg.setSourceEntity(2U);
    msg.setDestination(41890U);
    msg.setDestinationEntity(196U);
    msg.sessid = 3782418498U;

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
    msg.setTimeStamp(0.42145062080092366);
    msg.setSource(58834U);
    msg.setSourceEntity(24U);
    msg.setDestination(61473U);
    msg.setDestinationEntity(179U);
    msg.sessid = 2319156019U;

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
    msg.setTimeStamp(0.5274060833409282);
    msg.setSource(60788U);
    msg.setSourceEntity(206U);
    msg.setDestination(24003U);
    msg.setDestinationEntity(110U);
    msg.sessid = 3506820314U;

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
    msg.setTimeStamp(0.8497483036118999);
    msg.setSource(33071U);
    msg.setSourceEntity(216U);
    msg.setDestination(59678U);
    msg.setDestinationEntity(39U);
    msg.sessid = 816986324U;
    msg.messages.assign("TSVNUCBRIRZVKFUHLNJCYCLIPFSFWGBTOJBMHRXXZUAI");

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
    msg.setTimeStamp(0.28377964656260635);
    msg.setSource(61658U);
    msg.setSourceEntity(37U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(147U);
    msg.sessid = 608155964U;
    msg.messages.assign("OVRILFHZABOPWNVCELMYPWDTZFHPOHZEUKEYUESRMBUBZRSSYEJZEGTWETFFICVOASWPGENADNUKSFPJUNWIQYVZFDQUNCVSUDHOBOMHMSLBCJODHVRRZTGKJISKAQQYHKDXRBJYINFTTJSKCORVCLYBTDKQWNLUMXIGMZFGFRDXYJPAJPWTKKVOBNIIUEMCPLXCXXIDATLIXHKEFRW");

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
    msg.setTimeStamp(0.07228596971724677);
    msg.setSource(52305U);
    msg.setSourceEntity(74U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(73U);
    msg.sessid = 710262924U;
    msg.messages.assign("MSJZUBRCGSIFIQKEQVVELAKHZOTLHRFBWRGXABWQNCIALYODPFRSJOFZLUWUKBESPJPRQCLQVILPVYVWQAPADGPODWOKRUUQDDZPIGFBVTXMUYKMRKHBTEZNFCRJEZE");

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
    msg.setTimeStamp(0.6847752065034948);
    msg.setSource(31285U);
    msg.setSourceEntity(35U);
    msg.setDestination(40300U);
    msg.setDestinationEntity(150U);
    msg.sessid = 3948513394U;

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
    msg.setTimeStamp(0.9198099881544913);
    msg.setSource(58220U);
    msg.setSourceEntity(142U);
    msg.setDestination(46975U);
    msg.setDestinationEntity(8U);
    msg.sessid = 3668673723U;

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
    msg.setTimeStamp(0.39788511342404875);
    msg.setSource(56079U);
    msg.setSourceEntity(7U);
    msg.setDestination(39673U);
    msg.setDestinationEntity(182U);
    msg.sessid = 3153552480U;

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
    msg.setTimeStamp(0.11548656252381906);
    msg.setSource(61246U);
    msg.setSourceEntity(157U);
    msg.setDestination(32504U);
    msg.setDestinationEntity(218U);
    msg.sessid = 2484982444U;
    msg.status = 146U;

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
    msg.setTimeStamp(0.8128628950135761);
    msg.setSource(2186U);
    msg.setSourceEntity(73U);
    msg.setDestination(48336U);
    msg.setDestinationEntity(236U);
    msg.sessid = 2908085567U;
    msg.status = 213U;

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
    msg.setTimeStamp(0.2552171367498033);
    msg.setSource(34838U);
    msg.setSourceEntity(136U);
    msg.setDestination(37029U);
    msg.setDestinationEntity(214U);
    msg.sessid = 1467093029U;
    msg.status = 243U;

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
    msg.setTimeStamp(0.06907233148815906);
    msg.setSource(55624U);
    msg.setSourceEntity(120U);
    msg.setDestination(31028U);
    msg.setDestinationEntity(11U);
    msg.name.assign("RSBOIOYVSFEZQNSFLTBGYBQTQYQNDRRMUAGSTDFBEZJJUWTLIECIDVFKPXEYVVMNDZTPBUBDLFRAPNQBTPMLXIHVNWDPHWXVFYIIZRHDQKRTNCXNIWGASSOGUHXULAQJUFRBAPPJJHZWXDGJGKMSZZPSHUMKMSAPBLONHA");

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
    msg.setTimeStamp(0.7497162387779335);
    msg.setSource(32518U);
    msg.setSourceEntity(36U);
    msg.setDestination(63298U);
    msg.setDestinationEntity(168U);
    msg.name.assign("RDBNOOMVDKWNYPNCGZSAXMXNMVADKJYLTWFHOAGGFIRMNPOMDJHWIFIBHY");

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
    msg.setTimeStamp(0.17612011528705263);
    msg.setSource(53019U);
    msg.setSourceEntity(216U);
    msg.setDestination(63502U);
    msg.setDestinationEntity(208U);
    msg.name.assign("ZUVAEBHPWDZMJWZOYHVFBOLXKCSNGTUBXJPLPCJFTLZRYOGOSGNAPETMYSLCHAMZAISPFDJDMKUADPLAZNITNGBODCKVHANYNCWPKVQCUUTNQQKHVYBRSRBXXIWZVIIBJXRUESXDVKZXLFUHYGCWEMQRWICCGMKYBEFEZFJIJE");

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
    msg.setTimeStamp(0.10390477786069274);
    msg.setSource(32749U);
    msg.setSourceEntity(104U);
    msg.setDestination(55433U);
    msg.setDestinationEntity(149U);
    msg.name.assign("ABNZWYDUGULHSUKNFDXNBMMTIHKNGFUYHSJWQJXPXZIOIYFGBSAUQPESTVZOMUUNVEEMZQNLFOEDSBDWQPPHCXQAHLYKEWJCPDVFTVMDWRDFZKDVOAUHEKNOJLFPZLZWWBYGREOKJQRC");

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
    msg.setTimeStamp(0.8065168414843364);
    msg.setSource(4567U);
    msg.setSourceEntity(130U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(112U);
    msg.name.assign("YGPYABAUPVEGOUQTFMTGRDVJWIJMCMCRNRXOMWEGSYEEVNYYNFUULMKFBNJTSTDRZLIHNFXPSDXSJIXZOKGBSLOKFGBLSXIYAKSZUMJCVOHSUHTKECIFRZFUTZY");

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
    msg.setTimeStamp(0.8138180512730898);
    msg.setSource(29162U);
    msg.setSourceEntity(73U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(3U);
    msg.name.assign("AMHKYYHZMBPTNFNMDNVAVUTUZRFQUMXRFOKOEHIKXXIX");

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
    msg.setTimeStamp(0.05736361368544196);
    msg.setSource(6356U);
    msg.setSourceEntity(119U);
    msg.setDestination(15158U);
    msg.setDestinationEntity(248U);
    msg.type = 106U;
    msg.error.assign("POWGMHCSUQRAYJBGVIAOUVCILNXDYODMYIOUJWIDTTFKAEGZXFSQBFEKEZNDSXZOGCSUPQTFHQ");

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
    msg.setTimeStamp(0.7189351066897975);
    msg.setSource(17248U);
    msg.setSourceEntity(107U);
    msg.setDestination(18350U);
    msg.setDestinationEntity(41U);
    msg.type = 249U;
    msg.error.assign("QGWWFMTYBGQHEEFVQVWHTSNNGGEWOYVBIFTHUZDBOODUVQIDYPHTSRJAUSZHSXHATCCZAOTDMVJBGAGOZFXASUGUJJ");

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
    msg.setTimeStamp(0.6920018951875706);
    msg.setSource(7336U);
    msg.setSourceEntity(220U);
    msg.setDestination(34655U);
    msg.setDestinationEntity(149U);
    msg.type = 40U;
    msg.error.assign("UALQEIXCGKBVUSIYNHCOMMMZVJKZAXIQCPSLXXMIOUIYMEKIOAZNCQPVWNBFPFTVYAHGNBNXTI");

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
    msg.setTimeStamp(0.7501288730653758);
    msg.setSource(29106U);
    msg.setSourceEntity(197U);
    msg.setDestination(59665U);
    msg.setDestinationEntity(17U);
    msg.seq = 7327U;
    msg.sys_dst.assign("FLZHMAJBYOECRBZBTZWYKKVBEVTDZGTMCGVRMIYDWTWNZCDRQHGIUADZBJNTVBVNXFGKDXKPMIYYCZGUWOMENPLVMBUUUORMSCAAFZFOFLGRWUHXRCRZXXIULHZEYKMNJRIXSSQQHNQYOECEAHSWWFYTJPLFAAVKJ");
    msg.flags = 126U;
    const char tmp_msg_0[] = {-73, 3, 49, 97, -128, 62, -103, -49, -125, 65, 43, 31, 63, -13, 111, -22, 51, -118, -85, -9, -35, 93, 58, -48, -102, 9, 76, -65, 56, 86, 25, -76, -92, -20, 3, 111, -77, -105, 27, 24, 118, -114, -127, 7, -46, 29, -34, 98, 95, 27, -13, 110, 102, 11, -52, -107, 118, -43, 51, 48, 53, 82, -104, -121, -20, 53, 9, 59, -87, 76, -122, -76, 73, 53, -10, 30, -126, 39, 63, -15, 65, 22, 2, 121, -104, 53, -109, -8, 114, 1, -76, 47, -120, -95, -31, -125, -61, 82, -112, 40, -31, -46, 125, 118, -16, 20, 54, -64, 91, -50, 91, 5, 76, 91, 94, -50};
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
    msg.setTimeStamp(0.7119829986814178);
    msg.setSource(12034U);
    msg.setSourceEntity(147U);
    msg.setDestination(8900U);
    msg.setDestinationEntity(197U);
    msg.seq = 60442U;
    msg.sys_dst.assign("XMVDPCTCYKVRTIVUQNGDJRZNLNIMYSLEQFXVXNOJHHQRUZORLYPPRGERFFLZKIOUYSJTBYTVNTOQNTCGSWLKUAGUEGK");
    msg.flags = 167U;
    const char tmp_msg_0[] = {110, -34, -25, 19, 57, -94, -98, -81, -17, 126, -3, -13, 99, -8, 22, -90, -128, 76, 24, 91, -12, -93, -51, 72, 21, 60, -120, 103, -58, -2, 67, -5, 23, -35, 9, 31, -21, 67, 59, -99, 87, 43, -114, -115, 11, 105, -57, -66, 38, 22, 73, 55, 29, -48, -25, 32, -17, -21, -26, 82, -4, -73, -13, -98, 94, -87, -112, -22, -122, -57, -2, 114, 46, 120, -56, 34, -108, -51, -76, 95, -115, -44, -33, 35, 87, -120, 0, -14, -32, 90, 108, 116, 20, -50, -79, 27, 43, -88, 113, 115, 41, 37, -33, -34, 17, -44, -120, -34, 15, 63, -118, -123, 23, -75, 47, -21, -115, -117, -109, 46, -7, -72, -70, -2, -31, 65, -82, -115, 95, -1, -8, 65, -17, 116, 76, 55, 79, 100, -80, -124, 46, -22, 75, 2, 63, -11, 56, -35, 33, 108, -28, 124, -49, -25, -34, 95, 39, -39, -122, 118, -40, -65, -39, -58, 28, -79, 0, 88, -41, 59, 110, -99, -124, 5, 46, 47, 114, 109, -125, -79, -122, -88, -83};
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
    msg.setTimeStamp(0.1714604471943264);
    msg.setSource(33359U);
    msg.setSourceEntity(150U);
    msg.setDestination(59488U);
    msg.setDestinationEntity(21U);
    msg.seq = 5528U;
    msg.sys_dst.assign("JISAXEHQSOMFMTYGRXJGSVMQERKYMGWLFYYWIODUJWCHQPZPBWUVJPZQTTREUPJTTLTSRNPYMDFNURQNRTNDGGIOAGWCNEDXTAFHKSGXCCL");
    msg.flags = 92U;
    const char tmp_msg_0[] = {-59, 45, 107, 80, 77, -72, 123, -81, 85, 114, 1, -102, 124, -46, 47, -39, 126, -69, -21, 5, -109, 3, 92, 110, -91, -115, 94, -4, -128, -59, 64, -37, 34, 110, -29, -29, -58, -126, -40, -113, -124, -33, -27, 51, 65, 29, -54, 109, -42, 11, -107, -120, 64, 71, 37, 83, 75, -24, -50, -89, 54, 86, -126, -121, 25, 45, -107, 65, 90, -16, -79, -94, -5, 52, 64, -38, -93, 6, -1, 84, 10, -80, -57, 48, -102, 6, 18, -11, 83, 7, 7, -39, -83, -53, 22, 118, -113, 117, -37, -44, -22, 79, 80, -24, 79, -75, 83, -109, 54, 79, -51, 11, 73, 94, 20, 66, 70, 100, -21, 110, -13, 1, 48, -51, -115, 95, -111, -102, 51, 36, -2, -51, -23, -73, -104, -21, -88, -68, -57, 19, 69, 72, 118, -100, 37, -74, 101, -18, 29, -126, 117, 78, 22, 33, -111, 107, -23, -92, 56, 123, 84, -93, -91, -42, 106, 41, 84, 80, 121, 76, -62, 110, 69, -113, 99, 91, 5, 59, 83, -7, 73, 109, 47, 23, 90, -82, -67, 117, 24, -39, 31, 116, -80, -85, 78, -55, 118, 20, 25, -67, -90, -55, -6, 14, 62, -18, -45, 72, 16, 5, 11, -96, 26, 8, -13, -93, -128, -23, 103, 122, 78, -28, 24, -103, 34, 26, 63, 87, -49, 61, -67, 77, -51, 11, -23, -75, 0, 93, -91, 99, -48, -87, -120, 78, 103, 21, -64};
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
    msg.setTimeStamp(0.4460455963427674);
    msg.setSource(30989U);
    msg.setSourceEntity(94U);
    msg.setDestination(58127U);
    msg.setDestinationEntity(117U);
    msg.sys_src.assign("SHYOYZKZPEDDADHBNWWQFMQQYHBGILXCTAQFDICQXSPIPSOYEHYVYTNJUVKSRUFHZSKFURGLXDXZXSXPXCPBOQTNQJUVBPJJGLEBCHWNKNZSBDRONBYFPTUBSLKRWGCJMHIEOAIVFVDCGMUCOAQE");
    msg.sys_dst.assign("TWWIYINFKYSSUSHDIGWRWRJCLABFFMKZKZOHJIEUEGTSUPFIXYEWCMOMOXGDDLJNXRJDMCHDDNAVALPRXTJRPVLXXAZPZTHKQBGVQNTGKWBCGEARQSSULATIW");
    msg.flags = 65U;
    const char tmp_msg_0[] = {-27, 17, -128, 79, 53, 113, 111, 113, 111, 116, 27, 5, -50, -35, 76, 3, 98, 84, -68, 63, 31, -22, -30, 17, 68, 18, 107, 94, -43, -128, 60, 25, 106, -49, -16, 0, 14, -15, -70, -16, -32, 76, -30, 118, 24, -125, -115, -33, 118, -48, -78, 111, -37, -73, 7, 52, 72, 25, -111, -46, -16, -52, 60, 112, -61, -23, 66, 38, 7, 34, -39, 33, 69, -106, -106, -99, -55, -7, -28, -112, 39, 87, -42, -68, -37, -65, 15, 72, 45, -36, -33, -49, 70, 94, -73};
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
    msg.setTimeStamp(0.6584823515016833);
    msg.setSource(44036U);
    msg.setSourceEntity(119U);
    msg.setDestination(21308U);
    msg.setDestinationEntity(54U);
    msg.sys_src.assign("EVCSXSHPPVGRYXQPYKNASMMZFSBVVPASXAUJAGHHFDDNIFTUUQTDBAJXHUOEXLVLCCFSREORJGBOMNXNTYMTTLHAWTZWGRQZJDVMDCHNVSPUYONOTLPJAJULLWREGIERLIFQZLFNH");
    msg.sys_dst.assign("NMYNZSQGULNWPYWZCVEZUNLGHRIAKDK");
    msg.flags = 180U;
    const char tmp_msg_0[] = {-81, -59, -7, -102, 100, 63, -8, -48, -7, -96, 12, -93, -80, -62, -117, -42};
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
    msg.setTimeStamp(0.5994367382600481);
    msg.setSource(57876U);
    msg.setSourceEntity(98U);
    msg.setDestination(18086U);
    msg.setDestinationEntity(16U);
    msg.sys_src.assign("CNKGVEGFDEGQL");
    msg.sys_dst.assign("APHOXBZJMIIQEBXETJPZHGRIBOCLEPSAKMLROCMISMFGGHYFTDTJRYRQKMOWXCRQLLLBDHRMDQSIXOTCAEILCZUWATJIGGNNZNXRGOQNVR");
    msg.flags = 154U;
    const char tmp_msg_0[] = {-96, 56, -117, 12, 126, 76, -26, -87, 51, 15, -47, 58, 32, 4, 89, 43, 4, -4, 78, -109, -119, -112, 83, 75, 41, 72, 72, 41, 54, -48, -37, 98, -12, 100, 37, -47, -78, 110, 0, -32, 72, -122, -29, 15, 70, -6, 61, -3, 12, 79, -32, 87, 60, -15, -122, 54, 27, 69, 117, -87, -16, 94, 45, -4, -45, -17, 45, -37, 63, 59, 21, 12, 100, 105, -52, 48, -118, -111, -30, 38, -93, 4, -128, 43, 60, -97, 29, 0, 114, -17, 40, -40, 76, 41, 16, 35, -40, -97, 72, -5, -89, -120, 119, -22, 24, -105, 23, 109, -121, -57, -55, -94, 8, 97, 50, -89, -107, 48, 95, -57, -37, -28, -53, 59, -99, -102, -74, 31, -107, -8, 39, -85, 91, 88, 80, -34, 95, -43, -10, -67, 110, 72, 47, 11, -29, 72, -71, -71, 0, -54, -61, 123, -106, -114, 2, -40, -67, 25, 96, -121, 126, -14, 98, -99, 77, -55, -59, -45, -120, 73, -50, 89, 3, -8, -105, -102, 16, -25, 33, -100, 2, -29, -114, 121, -124, 122, 22, -7, -3, -20, 33, -22, 51, 24, 121, 91, 114, 51, -11, -50, 27, -54, 35, -82, 91, -47, 69, 29, -78, -73, 107, -112, 108, 15, -9, -67, -9, -10, 69, -107, -69, 91, -77, -95, 37, -45, 70, -29, -46, 107, -3, 88, 22, 48, -52, -1, 15, 72, 115, -110, 119, -27, 99, 25, -27, 69, 21, 68, 27, 27, 3, 1};
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
    msg.setTimeStamp(0.32379697801651985);
    msg.setSource(44911U);
    msg.setSourceEntity(104U);
    msg.setDestination(56464U);
    msg.setDestinationEntity(203U);
    msg.seq = 32553U;
    msg.value = 79U;
    msg.error.assign("RUIBZJKDMVQKRNJATPCGNUYHXUCYDBFHMBXZDPVCITKYEPJSAXXPIAPRHBPGNEIETOKMNWHDZHFZTRWROWXLKOBNRLOPTSXCENKBQJFLISGAXVSYHLSAEXREODUKCYUVATGSHALWQRIKFYEIVG");

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
    msg.setTimeStamp(0.5549927396996863);
    msg.setSource(39278U);
    msg.setSourceEntity(56U);
    msg.setDestination(6038U);
    msg.setDestinationEntity(65U);
    msg.seq = 26982U;
    msg.value = 240U;
    msg.error.assign("FAWDNVFAVCQYQYOTQIYKTNRJBYRXGFSHYOWIOGCDNDVYORIXHBQVFQWIKSQTEBHGCLQCATGUMNBVMNRJVIUAYZVREQTIGMRLVZEXSIXCBMLEYWWPBP");

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
    msg.setTimeStamp(0.903358781985274);
    msg.setSource(19942U);
    msg.setSourceEntity(10U);
    msg.setDestination(47245U);
    msg.setDestinationEntity(77U);
    msg.seq = 58650U;
    msg.value = 11U;
    msg.error.assign("CRGOBHPVWGWTZXGUUFPOCWHHSDQSFUNYVBDZJNXSIXZPNRYLTYHQSEZKBJXBWZILBVTPWYOTPNENVYFMISPMNDCUDLICXESMRWAJMITMCUHIWJMZGHCEEGSPUYIVQBKDAJDVQAGCVUALWKYXQTKWKOFERLLGKEKKCJSRSOOXPDZFQFFE");

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
    msg.setTimeStamp(0.3088854235297326);
    msg.setSource(24414U);
    msg.setSourceEntity(147U);
    msg.setDestination(6839U);
    msg.setDestinationEntity(23U);
    msg.seq = 20650U;
    msg.sys.assign("VCKJFSYJKBQDGPVAA");
    msg.value = 0.7347713740131163;

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
    msg.setTimeStamp(0.28274784486193216);
    msg.setSource(28277U);
    msg.setSourceEntity(108U);
    msg.setDestination(11747U);
    msg.setDestinationEntity(39U);
    msg.seq = 62365U;
    msg.sys.assign("VSUSOAUCIMYENKKFPSGRXXQXDMMTJVROIPFFMYPLTNDLOTJZWCJESPQVDHEILUDAMRGAUFYZIHHXDUGQDEHLAEXGOMLESTAPZSKZHCNVIXTXUOWGMIRBSSSGBKYMWBCXIFLNPWBROZWVZJHAOUOPRKXGZHWNQYTQJBNQRWULJOHRQYDTXPGENBNZFUMETMJKCIBVCHVSFKJITVYJEGYBGNYZCJTYIFNWQ");
    msg.value = 0.6265745439614608;

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
    msg.setTimeStamp(0.2963568725448916);
    msg.setSource(48611U);
    msg.setSourceEntity(191U);
    msg.setDestination(7337U);
    msg.setDestinationEntity(213U);
    msg.seq = 58002U;
    msg.sys.assign("RYUYEXWONUEFXLCBHIMTCMMRUGRRNSFHWFVSDPWVMTBNMV");
    msg.value = 0.9700246547167611;

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
    msg.setTimeStamp(0.9324328386130298);
    msg.setSource(40404U);
    msg.setSourceEntity(91U);
    msg.setDestination(54714U);
    msg.setDestinationEntity(117U);
    msg.action = 91U;
    msg.longain = 0.35988940388104984;
    msg.latgain = 0.8567927613387677;
    msg.bondthick = 2540903089U;
    msg.leadgain = 0.5635468035727857;
    msg.deconflgain = 0.5530403082738782;

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
    msg.setTimeStamp(0.4256685146776884);
    msg.setSource(42017U);
    msg.setSourceEntity(239U);
    msg.setDestination(45558U);
    msg.setDestinationEntity(204U);
    msg.action = 38U;
    msg.longain = 0.42902284278541813;
    msg.latgain = 0.06575070766317515;
    msg.bondthick = 2547163117U;
    msg.leadgain = 0.5336568381896838;
    msg.deconflgain = 0.02233740034962861;

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
    msg.setTimeStamp(0.7681083689236514);
    msg.setSource(41197U);
    msg.setSourceEntity(119U);
    msg.setDestination(61153U);
    msg.setDestinationEntity(218U);
    msg.action = 125U;
    msg.longain = 0.2903188221034845;
    msg.latgain = 0.16903206110193492;
    msg.bondthick = 3928932109U;
    msg.leadgain = 0.15429257335380853;
    msg.deconflgain = 0.9691010145356334;

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
    msg.setTimeStamp(0.7169489105007795);
    msg.setSource(37092U);
    msg.setSourceEntity(201U);
    msg.setDestination(43246U);
    msg.setDestinationEntity(110U);
    msg.err_mean = 0.022965887496596005;
    msg.dist_min_abs = 0.01071635795403214;
    msg.dist_min_mean = 0.06823323138576964;

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
    msg.setTimeStamp(0.336317818297885);
    msg.setSource(27601U);
    msg.setSourceEntity(59U);
    msg.setDestination(22612U);
    msg.setDestinationEntity(167U);
    msg.err_mean = 0.12069885123359603;
    msg.dist_min_abs = 0.21278471830336176;
    msg.dist_min_mean = 0.6753818155706499;

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
    msg.setTimeStamp(0.4258165513350243);
    msg.setSource(42842U);
    msg.setSourceEntity(221U);
    msg.setDestination(21521U);
    msg.setDestinationEntity(133U);
    msg.err_mean = 0.30631676505923155;
    msg.dist_min_abs = 0.7394502312447154;
    msg.dist_min_mean = 0.5685302270576317;

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
    msg.setTimeStamp(0.51817525591686);
    msg.setSource(10114U);
    msg.setSourceEntity(73U);
    msg.setDestination(58465U);
    msg.setDestinationEntity(30U);
    msg.uid = 151U;
    msg.frag_number = 113U;
    msg.num_frags = 162U;
    const char tmp_msg_0[] = {-92, 58, -44, -63, 105, -53, 80, -68, -72, -104, 116, -29, 14, 71, 61, -54, -117, -57, -10, -121, -28, 83, 113, 8, 25, 7, -64, 123, -118, -9, -95, 75, -77, 29, -44, 40, -56, -120, 116, 1, -68, 97, 87, 22, -68, 122, 110, -70, 42, 38, 58, 40, -73, 98, -58, 95, 104, -15, -70, 88, -43, -123, -59, -24, -119, -83, -75, -45, -37, -12, 6, -67, 119, 107, -22, -99, 11, -84, -121, -1, -110, -114, -17, -84, -32, 26, -63, 76, -3, -46, 49, -13, -23, -124, 15, 88, -121, -57, -22, 92, -6, -4, -108, -35, -63, 119, 118, -93, -121, -83, 87, 75, -11, -13, 66, -54, 50, -59, 7, 22, -51, 17, -109, 11, -4, 104, 98, 28, 102, 19, 41, 44, 51, 12, -114, 46, -85, 86, -20, 60, -3, -114, -36, 121, -7, 10, -97, -98, 99, -88, 93, -13, -119, -96, -53, 37, 68, 99, -87, 82, -115, -18, 96, 81, -117, -79, -61, -51, -10, -7, 74, 62, -126, -12, -59, 26, -34, 58, 45, 0, -75, 38, 3, -82, 7, -37, 43, 92, -61, 122, 17, 57, -14, 125, -47, -76, 33, 104, -32, -91, -80, -71, 119, -68, 111, 9, 16, -119, -16, -69, 74, -10, -55, -74, 64, -74, 21, 0, 59, -36, 105, -58, -110, 83, 116, 54, -36, 46, -20, -3, 62, -93, 65, 14, 74, -114, 55, 78};
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
    msg.setTimeStamp(0.38088391431304747);
    msg.setSource(18172U);
    msg.setSourceEntity(238U);
    msg.setDestination(15099U);
    msg.setDestinationEntity(30U);
    msg.uid = 28U;
    msg.frag_number = 127U;
    msg.num_frags = 70U;
    const char tmp_msg_0[] = {-45, -100, -125, -80, -27, -19, -89, 18, -42, 120, -101, 57, 87, 86, 27, 8, 83, -104, -122, 93, -26, -88, 85, -102, 59, 90, 109, -110, 11, -41, -77, -62, -82, 96, -64, -15, -36, -58, 2, -115, 61, -61, 25, -59, -113, 2, 89, 91, 76, 90, 78, -40, -112, 94, 97, -59, -107, -83, -94, -81, 102, -108, 86, 112, -46, -53, 12, -38, -57, -27, -127, -61, -68, -36, 98, 51, -128, 65, 20, 50, 103, -6, 56, 121, -85, 121, -29, -80, 81, -42, -118, -123, 87, 38, -101, -19, -7, 8, 7, -74, -11, -115, 75, 38, 50, 49, -35, -27, -83, -9, 21, 8, 83, -69, 44, 60, 26, -107, 105, -96, -68, 47, 108, -29, -31, -91, 80, -75, -114, 4, -111, 17, -11, -11, -14, -23, 20, -12, 39, -116, -43, 30, 74, -99, -69, 16, -106, -55, 28, -89, -27, 35, 113, 62, -4, -7, -10, -119, 10, -55, 112, 83, 72, -8, 64, 73, 89, 61, 118, -96, 98, 34, -2, 53, 50, 4, -30, -121, 8, -52, 4, 111, 51, -54, 51, 38, 43, 55, 77, -99, -52, 96, -112, 31, 61, -14, -113, -40, -32, 117, 12, -11, -102, -75, 87, 89, 24, -8, 31, 64, 3, 111, -24, -62, -120, 77, 48, -121, 91, 3, -92, -102, -64, 85, -20};
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
    msg.setTimeStamp(0.4271525848859904);
    msg.setSource(51265U);
    msg.setSourceEntity(141U);
    msg.setDestination(36663U);
    msg.setDestinationEntity(137U);
    msg.uid = 53U;
    msg.frag_number = 101U;
    msg.num_frags = 131U;
    const char tmp_msg_0[] = {-27, 12, 37, -109, 48, 120, 17, 95, 56, -59, 38, 3, 98, -116, -119, 83, -94, -35, -79, 19, -116, -77, 98, 16, 45, -104, 47, -6, 122, 2, 109, -128, 111, -27, -81, 1, -92, 79, -89, -109, 82, -33, 100, -51, -105, -25, 65, -120, -63, -53, 68, -85, -111, -78, 94, 23, -48, 83, 18, -95, -54, 47, -95, -31, -30, 42, 58, 112, 81, -113, -45, -118, 62, 108, -91, 23, 95, 19, -74, -122};
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
    msg.setTimeStamp(0.28942481974870526);
    msg.setSource(2495U);
    msg.setSourceEntity(215U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(162U);
    msg.content_type.assign("FEGMDYSLZBVRRUSDCKIEMDZGOAIHQHUYVGBTGSKANCPFJ");
    const char tmp_msg_0[] = {72, 77, 89, 16, -72, -43, 49, 105, 0, 23, 113, -104, 94, 19, 46, -5, 79, -107, -102, 67, 26, -7, 11, 54, -60, -13, -31, -11, 10, -122, 36, -67, 39, 37, -38, -93, -75, -12, -104, -105, 27, -115, -15, -125, 103, -105, 3, -77, 92, 1, 1, -127, 107, 93, -4, 75, -30, -65, -91, -124, 9, -37, -69, -96, -18, 124, -122, -61};
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
    msg.setTimeStamp(0.201928931125131);
    msg.setSource(5731U);
    msg.setSourceEntity(231U);
    msg.setDestination(57490U);
    msg.setDestinationEntity(60U);
    msg.content_type.assign("FTQPDBBEGDSXTVELIBCZLEAOGGWUFZCXSUIKUHVYJXQNEXYRQCJYKSLZPMYBVTWPAGFJCFZWSNAYMHOKLSAGFWVMKNMCOAMUBYPSBVNKQGRWCTXZBUSLLTHLYYUOPFOPGXXVTKWFJDMHODQKHVOPXTRDQJOBDDEJJEJRCOQAAEAJMMEWVIOISDRKQJUYSZLSFHLCQUKI");
    const char tmp_msg_0[] = {-65, -37, 118, 0, -126, 6, -4, -35, -55, -36, 40, 41, 38, 118, -119, 15, 6, 58, -20, 31, 97, -8, 71, 110, 115, 0, 70, 94, 102, -102, 11, 62, 125, -112, -46, -96, 84, -29, 13, 1, 78, -75, -92, -25, 18, -111, 40, 12, 14, -3, -108, 38, 118, 18, -116, 39, 49, -92, 101, -122, 77, -123, 17, 5, -10, 85, -16, -122, -106, 44, -94, -118, 120, -38, -70, 2, -96, -122, 8, 12, -48, -40, 66, -94, -97, 37, 0, 14, -68, -103, 47, 44, 2, -118, 1, -72, -116, 30, 73, -114, -42, 54, -79, 41, 75, -70, -56, 54, 9, 83, 45, -18, 111, -77};
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
    msg.setTimeStamp(0.20474515885597122);
    msg.setSource(13803U);
    msg.setSourceEntity(161U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(219U);
    msg.content_type.assign("CEGDWOZUVSLQNAJLBPOBVPLYEUFOOBGAUXHDDYJXINOEVBKRQAQHINRZOJZUPUMGKOMMAUNTZLXEFQHNYDRWKEVBKCTSXWPFCQSAMZRRICEJSEPMFPHMYTIFOANIBVWNGRYYHFRUTPGVAJSLVLMEQBSKXRKGGUGGXSRCIBHWXVDTUZPECFF");
    const char tmp_msg_0[] = {7, -56, 4, 22, 56, 75, -77, -114, -71, 42, -99, -126, -61, -124, 119, 35, 53, -109, -75, 6, 10, -2, 19, -72, -44, 15, 45, -120, -105, 113, 58, -115, -18, 32, -106, 1, 116, -90, 32, 102, 25, 0, 53, -20, 105, -29, -31, 94, -122, 45, 101, -33, -23, 110, 76, -99, 109, -24, -98, -123, -39, 36, 20, 99, 22, 68, 40, 124, -15, -85, 39, 78, -28, -43, -93, -25, -12, 90, -75, -83};
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
    msg.setTimeStamp(0.31162631748402536);
    msg.setSource(36501U);
    msg.setSourceEntity(123U);
    msg.setDestination(58242U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.4575642746706837);
    msg.setSource(36876U);
    msg.setSourceEntity(196U);
    msg.setDestination(59532U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.5133854884046762);
    msg.setSource(63525U);
    msg.setSourceEntity(214U);
    msg.setDestination(33738U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.6565910329777545);
    msg.setSource(52342U);
    msg.setSourceEntity(68U);
    msg.setDestination(16010U);
    msg.setDestinationEntity(69U);
    msg.target = 9770U;
    msg.bearing = 0.4675543897815214;
    msg.elevation = 0.6234115913627112;

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
    msg.setTimeStamp(0.8537263204547781);
    msg.setSource(22792U);
    msg.setSourceEntity(228U);
    msg.setDestination(22966U);
    msg.setDestinationEntity(212U);
    msg.target = 22721U;
    msg.bearing = 0.06476653271652799;
    msg.elevation = 0.875250745577862;

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
    msg.setTimeStamp(0.7381437598361535);
    msg.setSource(55647U);
    msg.setSourceEntity(160U);
    msg.setDestination(3448U);
    msg.setDestinationEntity(118U);
    msg.target = 10971U;
    msg.bearing = 0.9899841106913485;
    msg.elevation = 0.5282160264747803;

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
    msg.setTimeStamp(0.23346923886695037);
    msg.setSource(10895U);
    msg.setSourceEntity(40U);
    msg.setDestination(37738U);
    msg.setDestinationEntity(27U);
    msg.target = 16722U;
    msg.x = 0.1319692930518045;
    msg.y = 0.5737548878151861;
    msg.z = 0.5163374858779587;

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
    msg.setTimeStamp(0.5536226987337111);
    msg.setSource(43738U);
    msg.setSourceEntity(164U);
    msg.setDestination(64002U);
    msg.setDestinationEntity(65U);
    msg.target = 14368U;
    msg.x = 0.47116826219358865;
    msg.y = 0.399613734020964;
    msg.z = 0.21156507129174862;

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
    msg.setTimeStamp(0.09867057369188637);
    msg.setSource(64171U);
    msg.setSourceEntity(218U);
    msg.setDestination(63913U);
    msg.setDestinationEntity(76U);
    msg.target = 55005U;
    msg.x = 0.8061399255798224;
    msg.y = 0.9509360242766743;
    msg.z = 0.5745744002487543;

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
    msg.setTimeStamp(0.09989620635806262);
    msg.setSource(12163U);
    msg.setSourceEntity(64U);
    msg.setDestination(65380U);
    msg.setDestinationEntity(44U);
    msg.target = 56121U;
    msg.lat = 0.9933713857490738;
    msg.lon = 0.44508188938377125;
    msg.z_units = 137U;
    msg.z = 0.2137663455629225;

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
    msg.setTimeStamp(0.33958055094844175);
    msg.setSource(58312U);
    msg.setSourceEntity(150U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(164U);
    msg.target = 53567U;
    msg.lat = 0.369321230417073;
    msg.lon = 0.5261059364355297;
    msg.z_units = 162U;
    msg.z = 0.8932817920840825;

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
    msg.setTimeStamp(0.6557126163578659);
    msg.setSource(39692U);
    msg.setSourceEntity(107U);
    msg.setDestination(53602U);
    msg.setDestinationEntity(68U);
    msg.target = 47484U;
    msg.lat = 0.4676410671667599;
    msg.lon = 0.8828393835773793;
    msg.z_units = 220U;
    msg.z = 0.08879253876888071;

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

  return test.getReturnValue();
}
