//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 8329ee899adddc2a2c6f267307dcd115                            *
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
    msg.setTimeStamp(0.5099887781488208);
    msg.setSource(30507U);
    msg.setSourceEntity(85U);
    msg.setDestination(60815U);
    msg.setDestinationEntity(211U);
    msg.state = 217U;
    msg.flags = 44U;
    msg.description.assign("FPUXNXSSCJJYHWJEWODSLRQOANGMARTZEDKGBOUNLMQWYRMGDLILDTNKYQRZXBCAITIJUYWBPEWYPTDKQHZVPGDUELIQCKEJXOIVYGZGCKHWQTKZOMJBHCHDGVMUHABZIQNS");

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
    msg.setTimeStamp(0.5869930796980775);
    msg.setSource(14640U);
    msg.setSourceEntity(67U);
    msg.setDestination(43080U);
    msg.setDestinationEntity(238U);
    msg.state = 156U;
    msg.flags = 49U;
    msg.description.assign("UPRMKUJCAPHBZFPSGTYXOPFWAAZBYHDIGOKSIRFNOAGILMCZUNBAFWFNSRBQYJPJSAYVWDLDMABHVJCCEERIADIWHDXPOVRVHVBRYFYGTLMETLCABQXKFSYTKIBFNXCBKSWUOPQUDLVGWGLQIZORRRUWNESJUHXAKCTO");

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
    msg.setTimeStamp(0.2654436142023938);
    msg.setSource(32696U);
    msg.setSourceEntity(201U);
    msg.setDestination(63743U);
    msg.setDestinationEntity(38U);
    msg.state = 11U;
    msg.flags = 23U;
    msg.description.assign("PRBXQYJFNNVQQIKJQUBRQKMOCYLMXQLHBGARFTHGQAXNGMYKZDPHYZBYMINHANLIRIOTAROTHWKAUJISLCRXEBDZGUWONCLZUMWPXHEBOWDZOCMJOFGATYENNKTAOVKDFGDRTWWTXPHMSKVBIECSGQJUTEVIPHSEOMCYUVZTERMIQZEPZ");

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
    msg.setTimeStamp(0.530754662896248);
    msg.setSource(57088U);
    msg.setSourceEntity(222U);
    msg.setDestination(29357U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.6245659552987596);
    msg.setSource(56170U);
    msg.setSourceEntity(69U);
    msg.setDestination(61324U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.9728422660990733);
    msg.setSource(32184U);
    msg.setSourceEntity(52U);
    msg.setDestination(48345U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.47042909353844364);
    msg.setSource(27881U);
    msg.setSourceEntity(129U);
    msg.setDestination(28035U);
    msg.setDestinationEntity(113U);
    msg.id = 49U;
    msg.label.assign("ZYIIJWVMVHFMG");
    msg.component.assign("ZPJYUILPCVHJPXWDEAPTKSJKVYWTDGROIZHVBJMRENSSDICVZQHLPEIAXYQXXJMFZDVMIHGFMNGUBEWLXRQSLCRK");
    msg.act_time = 43612U;
    msg.deact_time = 63978U;

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
    msg.setTimeStamp(0.6019057869959379);
    msg.setSource(65240U);
    msg.setSourceEntity(215U);
    msg.setDestination(10371U);
    msg.setDestinationEntity(150U);
    msg.id = 192U;
    msg.label.assign("CGISSPBAWCSZWSXADAKLXMAXWIPMHIGDXVKZPJMTQGNWOMXUFOWYWGASUJRKIFMPRXMUXVOVREFD");
    msg.component.assign("SBMYNSXZYBYKWJXCORTRGPCQVNBKRUNYDPNCJEDPMXEKAQOZHTFJJAJMGTFHQLQGHKEZWFICUOABCFJJBQSMFWQHRAQIXOFAWLNHZSKHXVHORVAIRWUORZNZLKZOTBGMCDYXTGDLALDOLUJ");
    msg.act_time = 7263U;
    msg.deact_time = 5664U;

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
    msg.setTimeStamp(0.013229483873646974);
    msg.setSource(2606U);
    msg.setSourceEntity(15U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(28U);
    msg.id = 164U;
    msg.label.assign("FMZZRPNACIIPWINHFSJMNHRUKQJYYUSYADQCAWZMHBSEBHRZOIZXSQOPSLTIOYECSWLTEXNEZJCBIPUWAORIAUEWOVUDDRMIVTJFEXYODUHKNULOLFWVBPGDYNWKDVAZKKJMBUSTJMPCBWIMJXAYRQHXVLHFTGXHMLHWGLZSOKGOKAFDPBSMCKGIYFPQTWXYPHZUETEAKBRCQDXLXGEADFUGDCGTYGKNQQVTNLT");
    msg.component.assign("ADFXJNFBFCPVNQTHRRLKEVLXNYPRNKBHTYEZWSMIQXP");
    msg.act_time = 28576U;
    msg.deact_time = 59756U;

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
    msg.setTimeStamp(0.9859535305017775);
    msg.setSource(54368U);
    msg.setSourceEntity(233U);
    msg.setDestination(65038U);
    msg.setDestinationEntity(4U);
    msg.id = 106U;

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
    msg.setTimeStamp(0.4950367970813728);
    msg.setSource(18764U);
    msg.setSourceEntity(245U);
    msg.setDestination(21801U);
    msg.setDestinationEntity(143U);
    msg.id = 90U;

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
    msg.setTimeStamp(0.8620390184896976);
    msg.setSource(55351U);
    msg.setSourceEntity(247U);
    msg.setDestination(22596U);
    msg.setDestinationEntity(1U);
    msg.id = 69U;

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
    msg.setTimeStamp(0.601262553070615);
    msg.setSource(38213U);
    msg.setSourceEntity(178U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(104U);
    msg.op = 5U;
    msg.list.assign("TQMCOJOIMCDYWFMOHINSAKBZYFNRCEWQAAHSCZJXLCUXSJADDTGFJIYBGCURNMLEZEINRZZSYQAHWVYLETEGIRPXSBZKYABNXAGTDFSQXQWCEJFZLWBRDLQOMVPSPPUTOHTMJX");

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
    msg.setTimeStamp(0.223873090084301);
    msg.setSource(9842U);
    msg.setSourceEntity(103U);
    msg.setDestination(37812U);
    msg.setDestinationEntity(161U);
    msg.op = 5U;
    msg.list.assign("CZJBIJGDIVRWYVUFVYWCGMVLWMDODHEFOUEBLTWZMEUNDXRNRUUZTPIKABHNYQPCAKYNTZVQWILDGGWUPPEEIRSCWQDXMCGYOTLZOHQMMR");

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
    msg.setTimeStamp(0.7801713029906528);
    msg.setSource(15881U);
    msg.setSourceEntity(241U);
    msg.setDestination(48906U);
    msg.setDestinationEntity(59U);
    msg.op = 73U;
    msg.list.assign("QKPOBFSQFGHEBFOUFVZDNMVQZICERCZVLPLXUIFGSZZHSKSISDXPUBPYVQTXYPBJOGAGTWTFYEBTQRZCWDYYUGCVYIDKJXKABISGRROKLNXWMMJXRNMBNWIAXJGAHHUUDYDASEIQFCALWLSKVPRHNMEZRCJXUYYEHKPJJRCHSTCOWFJHQLQMGDHVFVLOAYERMAADTCPVLXUUQZVUMNJKBKEEXWNETZIOLFAZHOBBIPQNPNNMDWOT");

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
    msg.setTimeStamp(0.7660604883847456);
    msg.setSource(32607U);
    msg.setSourceEntity(191U);
    msg.setDestination(51944U);
    msg.setDestinationEntity(120U);
    msg.value = 72U;

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
    msg.setTimeStamp(0.9622727765877579);
    msg.setSource(21873U);
    msg.setSourceEntity(201U);
    msg.setDestination(2470U);
    msg.setDestinationEntity(23U);
    msg.value = 198U;

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
    msg.setTimeStamp(0.3525371512040649);
    msg.setSource(17903U);
    msg.setSourceEntity(221U);
    msg.setDestination(63856U);
    msg.setDestinationEntity(168U);
    msg.value = 21U;

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
    msg.setTimeStamp(0.48422709315479306);
    msg.setSource(57330U);
    msg.setSourceEntity(215U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("MSUYUDMCKEZBGRNSNZWITPJDXYZBJXNUHLRKODZFXWIHMEEHWEFWATSVOPYUQZFSYAQXWNUSETZIOSPKBGYQCRWCKXVTXGHJLYMKVCLOTIBHEHXATLDTHNODGJARMCWNFVTDUEHKXVJRLPZTZQ");
    msg.message_id = 9611U;

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
    msg.setTimeStamp(0.7629725868294437);
    msg.setSource(39481U);
    msg.setSourceEntity(138U);
    msg.setDestination(44645U);
    msg.setDestinationEntity(33U);
    msg.consumer.assign("SCJNZMNVEZJQDWNHQOWKFSYVVALBDPIFMOZUAMKDCJKQUYFEMNSKUFTNNDSTANEBAGSPCOYCSFFBQETGBZLKSLI");
    msg.message_id = 23550U;

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
    msg.setTimeStamp(0.2953186043945484);
    msg.setSource(38886U);
    msg.setSourceEntity(11U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(79U);
    msg.consumer.assign("OIWESZFBCFPFVLJNBEOBZJCLYKWISFDMUCZYBXKJHNILQLESOOIECMBXSRCGTNQQBKHJTVQHDWKMIDEAOXGGLWWUQFWAIICNJHVVAAWWDOXXLHRKFTLJWISOTJPXRYGRFHHBYXGDQGPZGKSTUVICKRPGJDNYUZBYDNBAUMCTLFETQXUMMPIZJKPXAAMAGLPRKMRHQGWRVFSSZQFTYZOCSOMONVJHRKQEZCPYYNEDHTRMEVP");
    msg.message_id = 4563U;

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
    msg.setTimeStamp(0.5042505050953086);
    msg.setSource(41150U);
    msg.setSourceEntity(138U);
    msg.setDestination(31128U);
    msg.setDestinationEntity(114U);
    msg.type = 104U;

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
    msg.setTimeStamp(0.08119603816463439);
    msg.setSource(55497U);
    msg.setSourceEntity(152U);
    msg.setDestination(58408U);
    msg.setDestinationEntity(107U);
    msg.type = 103U;

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
    msg.setTimeStamp(0.6617861098903072);
    msg.setSource(25886U);
    msg.setSourceEntity(236U);
    msg.setDestination(14128U);
    msg.setDestinationEntity(16U);
    msg.type = 44U;

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
    msg.setTimeStamp(0.481280566476571);
    msg.setSource(35750U);
    msg.setSourceEntity(119U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(199U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.4193195512855036);
    msg.setSource(11753U);
    msg.setSourceEntity(82U);
    msg.setDestination(17106U);
    msg.setDestinationEntity(144U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.2924379921530048);
    msg.setSource(19952U);
    msg.setSourceEntity(30U);
    msg.setDestination(65158U);
    msg.setDestinationEntity(98U);
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
    msg.setTimeStamp(0.7246009311383063);
    msg.setSource(60998U);
    msg.setSourceEntity(151U);
    msg.setDestination(13909U);
    msg.setDestinationEntity(56U);
    msg.total_steps = 40U;
    msg.step_number = 122U;
    msg.step.assign("YCXPGYKJJZTUIMJLHWMGZHLASQIQDIHUULCGWWCEUTPRWUQUNPAOHNKZAYGFPHONOEPMIEKDXENFKJSDOGRDVROEJPVXSSKFIPPVNBSJDXMVKLZQSYLCABAJEYWLHHWODMMQJDTUBCFGGDFTKWPAZMYTDHZCOIVVVBIMNWTVFFTROYZNHTYNCEBBLGSMFALBROQAVKBTEYEUZGMAXSFSUBHCSCIRLXNXTYZQXGJREPXIVWNJURRAOR");
    msg.flags = 243U;

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
    msg.setTimeStamp(0.41277811830736433);
    msg.setSource(28889U);
    msg.setSourceEntity(83U);
    msg.setDestination(27674U);
    msg.setDestinationEntity(213U);
    msg.total_steps = 162U;
    msg.step_number = 134U;
    msg.step.assign("OFEWTVGXPFUDMYBZWMCWFRRGDRDXCQBFFDHNOSAISTLUNLZZCOQTXHRGCOSYBDDYLAANBJSCPQPKEHKSWRBUEMJHDDOASDFGWZGBWLZTX");
    msg.flags = 70U;

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
    msg.setTimeStamp(0.8345634951385311);
    msg.setSource(26318U);
    msg.setSourceEntity(137U);
    msg.setDestination(57127U);
    msg.setDestinationEntity(79U);
    msg.total_steps = 55U;
    msg.step_number = 208U;
    msg.step.assign("QKHPSJLSDYGCHFMVEKGXLFJGLBKAMRTMXHMIATGVLOIYKIHEQLZMIJKQKXCEDUCZHUCFNARJUBDTOFWFVUNUIIIPPKAATRUDVLONVSSVDOGPRBPLBZSOGDAAYJCCWMMCKFCWUQPFPMMEDWRQBVJHNURPEFZYLKZAHEESHWPJQNWNBVXIQIYJOFWVYTGQNOZXTWENXRGSNSJQCHULDBXQTOYXBGYYBXFBHPDZXREAAZZTSDZWJNMOGOEYT");
    msg.flags = 72U;

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
    msg.setTimeStamp(0.24050628449050448);
    msg.setSource(4247U);
    msg.setSourceEntity(17U);
    msg.setDestination(3452U);
    msg.setDestinationEntity(242U);
    msg.state = 3U;
    msg.error.assign("YYNFLUPIQYWFQBUBQGBRDSOGQPTHPDSFNSKJXRGSALNUWIVAPVVWVNWHMJEHGHSBNURGTGISLIBNAAEHPAXUBZCAUISNCXVYBSPMLF");

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
    msg.setTimeStamp(0.6128738135217374);
    msg.setSource(17686U);
    msg.setSourceEntity(42U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(99U);
    msg.state = 92U;
    msg.error.assign("OCYZJCOHTLABJFDJLPYDHMIORZSTPKVWXFACWKCZUWGFHSCOJPSFNNVYOIMRPEQKFACSEZANIJMTDYTBUNYSKUXTKIJLUIQLSEUKZFBFPHQQIYMRHIGAPPHETGDHNZMWXJIYOVCTXVLVOLNSBAFDWBM");

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
    msg.setTimeStamp(0.8375171390165075);
    msg.setSource(17976U);
    msg.setSourceEntity(144U);
    msg.setDestination(56878U);
    msg.setDestinationEntity(167U);
    msg.state = 16U;
    msg.error.assign("DHZVNWYGRIRVDWGHLBEXJBEAARBLAPYOQNRLGUIWVCKCCDAEUPTNNOEQKZZWWCEGQTMEZKXWMZRXMTXFEMBXCVSCKDMDHKXYYSQGNZQIISIKOAJPXIFHWHOUXOHGOAUB");

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
    msg.setTimeStamp(0.47768944701319793);
    msg.setSource(41135U);
    msg.setSourceEntity(113U);
    msg.setDestination(3642U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.01249442518175714);
    msg.setSource(34968U);
    msg.setSourceEntity(178U);
    msg.setDestination(65374U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.00997821113414088);
    msg.setSource(42284U);
    msg.setSourceEntity(15U);
    msg.setDestination(28755U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.2513342285667799);
    msg.setSource(13637U);
    msg.setSourceEntity(228U);
    msg.setDestination(43810U);
    msg.setDestinationEntity(224U);
    msg.op = 14U;
    msg.speed_min = 0.14423003070380935;
    msg.speed_max = 0.6859717826504681;
    msg.long_accel = 0.5392419599876013;
    msg.alt_max_msl = 0.3856012803523897;
    msg.dive_fraction_max = 0.8677304718685558;
    msg.climb_fraction_max = 0.04389897651001273;
    msg.bank_max = 0.2594707522108167;
    msg.p_max = 0.29209615825678115;
    msg.pitch_min = 0.2840537850083763;
    msg.pitch_max = 0.2385840488795361;
    msg.q_max = 0.9654216742945296;
    msg.g_min = 0.6381023102737352;
    msg.g_max = 0.8734755938220614;
    msg.g_lat_max = 0.21517221230548866;
    msg.rpm_min = 0.7805825592967126;
    msg.rpm_max = 0.48480687191110616;
    msg.rpm_rate_max = 0.49921713018490466;

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
    msg.setTimeStamp(0.43531412220199617);
    msg.setSource(2744U);
    msg.setSourceEntity(136U);
    msg.setDestination(11108U);
    msg.setDestinationEntity(164U);
    msg.op = 2U;
    msg.speed_min = 0.7507206406045337;
    msg.speed_max = 0.7400966709162108;
    msg.long_accel = 0.686071545885327;
    msg.alt_max_msl = 0.3034572992988108;
    msg.dive_fraction_max = 0.9197187998045893;
    msg.climb_fraction_max = 0.840528350420436;
    msg.bank_max = 0.7102658044273269;
    msg.p_max = 0.4803883366072599;
    msg.pitch_min = 0.5063507711915015;
    msg.pitch_max = 0.988960824847502;
    msg.q_max = 0.6209130564974109;
    msg.g_min = 0.08702601386892228;
    msg.g_max = 0.3943825485058595;
    msg.g_lat_max = 0.45058136440801866;
    msg.rpm_min = 0.9705165880933672;
    msg.rpm_max = 0.798000825729275;
    msg.rpm_rate_max = 0.5804729222049035;

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
    msg.setTimeStamp(0.33916438979142915);
    msg.setSource(55369U);
    msg.setSourceEntity(88U);
    msg.setDestination(58080U);
    msg.setDestinationEntity(135U);
    msg.op = 52U;
    msg.speed_min = 0.8458816049519449;
    msg.speed_max = 0.5020663316535269;
    msg.long_accel = 0.3303227179727878;
    msg.alt_max_msl = 0.9343112318740407;
    msg.dive_fraction_max = 0.44985604143581104;
    msg.climb_fraction_max = 0.3600108356281111;
    msg.bank_max = 0.3872984808269039;
    msg.p_max = 0.23896600785921907;
    msg.pitch_min = 0.42724075713705456;
    msg.pitch_max = 0.6177119051484581;
    msg.q_max = 0.8317661935909412;
    msg.g_min = 0.2353671439408579;
    msg.g_max = 0.2962109053837595;
    msg.g_lat_max = 0.4538424019158688;
    msg.rpm_min = 0.7527645159009362;
    msg.rpm_max = 0.279128955835258;
    msg.rpm_rate_max = 0.4712286348900816;

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
    msg.setTimeStamp(0.09772710306171406);
    msg.setSource(44513U);
    msg.setSourceEntity(92U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.18148260997827548);
    msg.setSource(65418U);
    msg.setSourceEntity(33U);
    msg.setDestination(64836U);
    msg.setDestinationEntity(75U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7613805719040797;
    tmp_msg_0.speed_units = 122U;
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
    msg.setTimeStamp(0.8259644034262085);
    msg.setSource(38746U);
    msg.setSourceEntity(181U);
    msg.setDestination(4653U);
    msg.setDestinationEntity(178U);
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 48U;
    tmp_msg_0.flags = 37U;
    tmp_msg_0.description.assign("TYMLCLPDAZFPUAGSSOFTJZLURKAIDHMSVAXHGHNBPWVYWFYTJMDPXRCRXYWFSXXIGNNIQPJALLDVIBZZRGEQLUGDMGUECNDZPYXBPAVGSLCWQOHLSXVSPVCWXROIREDJJKKSNDJZENYFIBFKUBKKQZTJFHVLZWNFFWVMMTRPQPCJEN");
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
    msg.setTimeStamp(0.07142926045219677);
    msg.setSource(43856U);
    msg.setSourceEntity(78U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.47784226145391306;
    msg.lon = 0.40806568760527306;
    msg.height = 0.709781298612423;
    msg.x = 0.7767175666499985;
    msg.y = 0.051902687661444014;
    msg.z = 0.6939017354811966;
    msg.phi = 0.597212186793282;
    msg.theta = 0.5780151059393813;
    msg.psi = 0.21064003248971586;
    msg.u = 0.4408659789939361;
    msg.v = 0.2824754961711783;
    msg.w = 0.7331830696713623;
    msg.p = 0.7823274984352401;
    msg.q = 0.812156809996333;
    msg.r = 0.5349831407958423;
    msg.svx = 0.4575603315041923;
    msg.svy = 0.8888841147880319;
    msg.svz = 0.004662392219175082;

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
    msg.setTimeStamp(0.08883382537963502);
    msg.setSource(37083U);
    msg.setSourceEntity(241U);
    msg.setDestination(54116U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.25078945983194756;
    msg.lon = 0.868589542415161;
    msg.height = 0.9413642843002046;
    msg.x = 0.32946732082799746;
    msg.y = 0.6728436336267214;
    msg.z = 0.2383541822147729;
    msg.phi = 0.22057033813440896;
    msg.theta = 0.006992535609029238;
    msg.psi = 0.40441444461849574;
    msg.u = 0.1610620974211313;
    msg.v = 0.14313155989512627;
    msg.w = 0.7642357856800243;
    msg.p = 0.36157386859202423;
    msg.q = 0.8954280657648382;
    msg.r = 0.04986077087644036;
    msg.svx = 0.9799595202812095;
    msg.svy = 0.715970676625099;
    msg.svz = 0.40715664829232323;

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
    msg.setTimeStamp(0.5367930851107962);
    msg.setSource(3209U);
    msg.setSourceEntity(162U);
    msg.setDestination(37164U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.38799108155772777;
    msg.lon = 0.8402889897681375;
    msg.height = 0.03956550642896761;
    msg.x = 0.7100695971519629;
    msg.y = 0.5333690818504113;
    msg.z = 0.38866192920202847;
    msg.phi = 0.7535745548399698;
    msg.theta = 0.9203535557553326;
    msg.psi = 0.8415279687938175;
    msg.u = 0.41019995334358506;
    msg.v = 0.13140684279594328;
    msg.w = 0.6747259346114134;
    msg.p = 0.8507463951616457;
    msg.q = 0.7455284050881705;
    msg.r = 0.21219110194300095;
    msg.svx = 0.02052762695187793;
    msg.svy = 0.48724048674801856;
    msg.svz = 0.5475765483320253;

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
    msg.setTimeStamp(0.1612019396058202);
    msg.setSource(61167U);
    msg.setSourceEntity(107U);
    msg.setDestination(21303U);
    msg.setDestinationEntity(70U);
    msg.op = 136U;
    msg.entities.assign("CICAPZUTHUUQPLLWSC");

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
    msg.setTimeStamp(0.21003677834928947);
    msg.setSource(61684U);
    msg.setSourceEntity(167U);
    msg.setDestination(9820U);
    msg.setDestinationEntity(15U);
    msg.op = 154U;
    msg.entities.assign("LEWJUWBCDGEGGJYCOWRJMIEINROPVKAZBRTMFFKWSZZMZJIKQLULMKOWFQPAUBLOWJPCHVTASFDFITDNSBHBFLC");

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
    msg.setTimeStamp(0.505916876663044);
    msg.setSource(38494U);
    msg.setSourceEntity(128U);
    msg.setDestination(40750U);
    msg.setDestinationEntity(26U);
    msg.op = 202U;
    msg.entities.assign("BYAGRQFPGZXHZPTXSOMADDOSEMWPNKFZKZLUTMOCUFUYZJKLIZHVNKBIPFBHEHIYYBDBJOKEFCMWIZHLCPCBWAGOLOWBPSEPANJWREZGFIOQDCDRQVBRRQXSHUYZSDHUVKNKYWXWMJGTJKMMTVGMLYTUXOFDLQCNAESCVMENGXQIYVRJRVLNYTUG");

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
    msg.setTimeStamp(0.5936153383599164);
    msg.setSource(17309U);
    msg.setSourceEntity(85U);
    msg.setDestination(13912U);
    msg.setDestinationEntity(228U);
    msg.type = 108U;
    msg.speed = 48276U;
    const char tmp_msg_0[] = {-50, 126, 50, 60, -68, 27, 36, 93, -86, 25, -48, 6, -48, -38, -57, 40, 52, 114, -53, -20, 53, -18, -29, -7, 90, -35, 11, 26, 3, 62, -100, -62, -122, -11, 125, 6, -62, 94, -53, -84, 20, -84, 26, -71, -26, 71, 5, -109, 21, 71, 121, -34, 73, -108, 102, -8, 23, 6, 65, 105, -96, 110, -115, -48, -103, 49, 106, -122, 112, 48, 6, 109, 41, -53, 0, -67, -61, -17, -31, 78, 114, -42, -53, 53, -27, -82, -64, 108, -80, 46, 117, 7, 100, 57, -2, -52, 50, -90, -65, -21, -118, 38, 75, -114, -3, 42, -25, -45, -121, -82, -58, 21, 6, 124, -62, -42, -107, -27, -127, -91, 91, 117, 125, -37, -17, -44, 35, 95, -48, 39, 80, -30, -51, -118, 77, 112, 96, -32, -46, -37, 11, -8, -45, 9, -96, 14, -32, 18, -63, 109, -58, 9, -49, -121, 10, -121, 60, -84, -6, 45, -15, -126, -34, 65, -49, 66, -3, -20, -80, 63, 31, -44, 46, 76, -77, 47, 105, 91, 118, 41, 110, 13, -65, 80, -97, -91, 124, -83, 12, -4, 27, -70, 80, -42, -69, 58, -103, 83, 39, -10, -64, -5, -127, -66, -119, 23, -120, -125, -8, 68, 26};
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
    msg.setTimeStamp(0.554118965118499);
    msg.setSource(18193U);
    msg.setSourceEntity(145U);
    msg.setDestination(48578U);
    msg.setDestinationEntity(81U);
    msg.type = 48U;
    msg.speed = 3269U;
    const char tmp_msg_0[] = {-16, -49, 77, 115, 116, -59, 121, 3, 113, -84, -64, 125, 122, -107, 105, 122, 120, -104, -30, -81, -98, 81, 83, -14, -100, 119, 68, -103, 32, 104, -91};
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
    msg.setTimeStamp(0.29241397414394144);
    msg.setSource(11614U);
    msg.setSourceEntity(147U);
    msg.setDestination(31447U);
    msg.setDestinationEntity(62U);
    msg.type = 140U;
    msg.speed = 1574U;
    const char tmp_msg_0[] = {25, 106, 82, -19, 43, -32, 4, -121, 71, 67, -48, -6, 98, 66, -47, 19, -6, 43, -113, -124, -95, 15, 65, -44, -16, -93, -114, -22, -12, 87, 113, 5, -101, 89, 82, -111, 21, 90, -53, 11, 78, -122, 94, 108, -84, 47, 44, -88, 76, 101, -48, -108, -116, -64, 22, 68, 6, 120, 72, -1, 106, 36, -19, -58, -99, -26, 68, -102, -90, -127, 82, -50, 105, 97, 70, 100, -21, -66, -58, -13, 77, 12, 37, 37, 58, 20, 103, 26, -82, 30, 30, 106, -95, 82, -74, 34, 2, -121, 123, 60, -40, 13, -87, 114, 119, 49, -56, 120, 79, -104, 101, 65, 56, 43, -86, 119, -52};
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
    msg.setTimeStamp(0.2499210729403012);
    msg.setSource(19758U);
    msg.setSourceEntity(239U);
    msg.setDestination(35152U);
    msg.setDestinationEntity(98U);
    msg.op = 95U;
    msg.tas2acc_pgain = 0.7288723355586403;
    msg.bank2p_pgain = 0.5831885008156836;

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
    msg.setTimeStamp(0.32664424648810175);
    msg.setSource(28752U);
    msg.setSourceEntity(230U);
    msg.setDestination(32942U);
    msg.setDestinationEntity(236U);
    msg.op = 51U;
    msg.tas2acc_pgain = 0.7215954013899701;
    msg.bank2p_pgain = 0.7867102683499474;

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
    msg.setTimeStamp(0.44917077041503406);
    msg.setSource(20115U);
    msg.setSourceEntity(72U);
    msg.setDestination(47235U);
    msg.setDestinationEntity(200U);
    msg.op = 190U;
    msg.tas2acc_pgain = 0.9113475356798498;
    msg.bank2p_pgain = 0.9131708693480012;

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
    msg.setTimeStamp(0.04451123318708616);
    msg.setSource(54140U);
    msg.setSourceEntity(176U);
    msg.setDestination(44400U);
    msg.setDestinationEntity(238U);
    msg.available = 3333969678U;
    msg.value = 159U;

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
    msg.setTimeStamp(0.16443104409047982);
    msg.setSource(21391U);
    msg.setSourceEntity(24U);
    msg.setDestination(62157U);
    msg.setDestinationEntity(35U);
    msg.available = 2177151965U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.9920278115514128);
    msg.setSource(50578U);
    msg.setSourceEntity(123U);
    msg.setDestination(30865U);
    msg.setDestinationEntity(206U);
    msg.available = 777747727U;
    msg.value = 148U;

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
    msg.setTimeStamp(0.5435295569084821);
    msg.setSource(11935U);
    msg.setSourceEntity(19U);
    msg.setDestination(1130U);
    msg.setDestinationEntity(34U);
    msg.op = 8U;
    msg.snapshot.assign("LAAGFYQQFQSNOPJVPOXPETXKYYVZTEQNFCSCGZMVFXJLJDRKSDVRRLBMXAIUHTRYWBAJZKHCQVSHHHOQRVWZORWPLGLDUSXUNEKZQDRATIDBCUOIPABDPWBWZRLDBSOQIYWPUKCILYHBIZGSFUKKUNMLNJCEXHJGTMLXVGBZLXXEICZKAEFGGMFYOYHEAWBQWJMSEUIAEDYDMMVUDSGPTFJIVNTJWGHNHTFV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27648U;
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
    msg.setTimeStamp(0.4885492841302973);
    msg.setSource(21562U);
    msg.setSourceEntity(215U);
    msg.setDestination(43096U);
    msg.setDestinationEntity(126U);
    msg.op = 122U;
    msg.snapshot.assign("WMIRMXKUGYOHYXEOWGKINGNSVOFWDISWJJPBCJLZHOIIMBJKGDKSVMNFYGAFBFNTFZPLKOHLDMECGANKMBDDYYCNESENKGTATBQFTEEZZTUXQZISJWUQAOCNQFHCSWDZQSXYXXPJTJCIUHERTQPUJBVGHOSCRAPUUACLL");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("ILWHCUBEBUDJHTKCAQREYAGYM");
    tmp_msg_0.dest_man.assign("ULJHPTQAGGQFWXHUOWZQSVICWAGKHDBMXJBNT");
    tmp_msg_0.conditions.assign("NWXYDFVZHUSVBWRPBJQCAPXFIPKTIHUDZEUNAWBXCMQZDNKRJZWNAXKOLZFTPTGMYBRRDSVOKXZOSLNVAWJBQKVFXHKYMUNWNKIRVEWQGDFOSNSJPQZTDGTITETTHFRIAKMBJQERJGGCMCDPQEOSYEFEZHFZAULSIYLETIBLJQWUIUYXXHUBKEAMVOYACMAGLHHRSLRCTQFRGOQZNVOBDEFCOPLLGCIPHLYPJDDC");
    IMC::SessionSubscription tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 3044362939U;
    tmp_tmp_msg_0_0.messages.assign("KJZPXBOOCUAYPGKNIVHFGKODBMRSMBPPQHICWCXZUWKNVEOQCFJRNJNXDRPMKDMREAVRXNPUCYDNAKLWUVQUHUIMQVFYHHTWVIRJYPZFFSBXSGLIYSBVHOMXAPUUXWZMBVBEVTKYNTEJIGIYXMA");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0002830259922566025);
    msg.setSource(47903U);
    msg.setSourceEntity(191U);
    msg.setDestination(24624U);
    msg.setDestinationEntity(173U);
    msg.op = 38U;
    msg.snapshot.assign("SOKLRKRVHCIJBORZAMBDVDZBGLDEZKWBAJNNYTLSVXWZDRGKKNAYYBVNWQOLUMIPDLTPFTTISQKTXVURRZ");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 136U;
    tmp_msg_0.value = 0.6883505502600601;
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
    msg.setTimeStamp(0.7766587176821435);
    msg.setSource(1332U);
    msg.setSourceEntity(5U);
    msg.setDestination(9814U);
    msg.setDestinationEntity(186U);
    msg.op = 191U;
    msg.name.assign("OEYVKMWQXHMOGUJZYFTQKJKLXTGZLDOYGJJQJVQWJTCFIIQVWADUPFRHDPUCBGFXTTPDZDWEXVHBLBNACSFBSKOFUYMHTWWRZPARLMEDYZEXGTSWIALJNIVAEWEUBYHNCMRSZMOFEIIQLHSIZQLQCHOVGRRZNFPYHNPXPGDCUNHAKZEYAQKVEMWDTKBB");

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
    msg.setTimeStamp(0.08004470629625227);
    msg.setSource(54475U);
    msg.setSourceEntity(248U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(234U);
    msg.op = 74U;
    msg.name.assign("JSIXRADWALNENGKEMPZVICZJSPHFONZ");

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
    msg.setTimeStamp(0.49781942491423437);
    msg.setSource(29551U);
    msg.setSourceEntity(210U);
    msg.setDestination(10868U);
    msg.setDestinationEntity(108U);
    msg.op = 197U;
    msg.name.assign("CWBLENAEJNEJPWZGYIRKBGCQKYCMEILOALOJTXBVOSKVKFWHOPXFVPMUNKVQVUIVVDCFDMIJQBVBAGUQWBOULEQXZXDDFWHHNHKNSDGHMYZYQRTIPQDSCLRSBBGONFBLWYCBFCUGMRYSHRNRQGUTJYVCWMLJOTPUAIRYHPEPARTKDTUPLAUXXTXMOSFRLLKQHXWACSGFEDEZMZZOEZJDPWPAVDZQKAKXNZFTI");

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
    msg.setTimeStamp(0.27404105471065243);
    msg.setSource(32824U);
    msg.setSourceEntity(170U);
    msg.setDestination(59813U);
    msg.setDestinationEntity(132U);
    msg.type = 174U;
    msg.htime = 0.9275390580438615;
    msg.context.assign("FBYJUIVMQWHMJHNEFTSGSCVZXADCOOOUUPWCJANATWECYXFPITCGEPRVREJADCUTBDBUJTQAAUSFBVOZLDVLKSRCNIWBATOOYEMFIYXKDDLYPZVNXROMSSEAAWPPGOHLFUCRZDFHX");
    msg.text.assign("KUCRTLHWZZJJNWMJHNCOIUFROCE");

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
    msg.setTimeStamp(0.3746598191895735);
    msg.setSource(6599U);
    msg.setSourceEntity(152U);
    msg.setDestination(3115U);
    msg.setDestinationEntity(186U);
    msg.type = 244U;
    msg.htime = 0.4604227244734498;
    msg.context.assign("EDKQMVKVVTHGYDOTGOKSUNBVYIXUKNAZIPMPIDBPNGSHHKLSWWOELYIMHTULWSUEOTQNURUBNBCZBQGVCXEZCSLHIAFAYZYZFAOULJTFTODLNCTAEUWOPKWABRIEQKIMCOSARFYFCQCPYXZLTWRIXTHJVFZJOLNZJDRHLGDVYPCUPNJPERQQGXVXMJXHWWXSBFGOPYCBESVRGRMMAPKSRGHEMESQJUBXQABD");
    msg.text.assign("EMQYLHTPGLUVTRTNPSLSZKVLXZDAYFLUBXKKNCZUMEQTBCADIMLDHXRDKZVUJIOSEPYNWCGIZPWVUWRKQPHANHVJUGZGQHMLMKPACHTJDMYXDXFSYNGIHVTJEUXEQIMLFVGPSPSRORDKOEDSYAFWUVEROAQCONUNNOFRSKTFTWLOFNSWIDTYJAJVPKKQCXGOAJLBJPZORXJMMUIRGBHBBQVHZHWCMYFDR");

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
    msg.setTimeStamp(0.29580446671896055);
    msg.setSource(14665U);
    msg.setSourceEntity(53U);
    msg.setDestination(52338U);
    msg.setDestinationEntity(190U);
    msg.type = 250U;
    msg.htime = 0.47223473663503923;
    msg.context.assign("HTAFZKWMGJPUEOSZVFMEDGVIILPGVWRQZQYXQMAKJKPJBYRZTAAXWFQIGEKUQNTFCNTCXSJCHRUVGETMDY");
    msg.text.assign("PMWKLPDWXOJOXYCUPGSXNVDKZEQZNAHAUYEPRXBNKEJWVGUFOBGZEMWVDPHRFYOKWAWDNYDCJVIZVUSWDMUIFTPMDGNROPQICSLFEBQSRSKUMNQCAJLSKESBCFRLRBTGQGBADYOILDYLNAKXPLCLDZFOBTVSQGTFTATBLCGVZGXRNOJYYVZXBJAIHEHH");

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
    msg.setTimeStamp(0.582185806947183);
    msg.setSource(41304U);
    msg.setSourceEntity(43U);
    msg.setDestination(59524U);
    msg.setDestinationEntity(76U);
    msg.command = 224U;
    msg.htime = 0.9381735456049067;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 176U;
    tmp_msg_0.htime = 0.1493073038910001;
    tmp_msg_0.context.assign("RKEWFTJUIYOVCXMHKATRJYQLXEDOBNUUZGARPDCYLAISVZMGGBLJXCATBVEHEXHDNVYFUEL");
    tmp_msg_0.text.assign("DIQFUHRUUMPQBPDYKTSADYWORRBVNRTISKGMLMCMDQXRLZSZAHQICVRJFCPWINUEEXXMTEIMVOJZRTAFYAHWGTLGYFYOI");
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
    msg.setTimeStamp(0.17812176715452344);
    msg.setSource(1212U);
    msg.setSourceEntity(1U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(6U);
    msg.command = 219U;
    msg.htime = 0.4845177765303228;

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
    msg.setTimeStamp(0.5451595264253536);
    msg.setSource(54030U);
    msg.setSourceEntity(3U);
    msg.setDestination(60665U);
    msg.setDestinationEntity(87U);
    msg.command = 242U;
    msg.htime = 0.33556079742384815;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 166U;
    tmp_msg_0.htime = 0.0815142355192563;
    tmp_msg_0.context.assign("MJELYTORLYWFKTQONBTVHTPHASUBYTDTASSAZXPUKZLRDEGIENSRJZUUTUBNEQSPIKXGBCMJZRTRAJFUOBHVNWJQOSIEXGDRAYXDVNONLGJMVQCGHBHKHVMWFPLNSMFEMQPCCFJLPXBWDKWWFCBDENKFQLQUMGUUFOZRAGARKGEYRAIGNXWIHXHYBI");
    tmp_msg_0.text.assign("DFGQJCAEHPGRHGRSZKIOGWXSSDSLGBWKXDGQJJ");
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
    msg.setTimeStamp(0.30459909222464654);
    msg.setSource(56147U);
    msg.setSourceEntity(110U);
    msg.setDestination(47843U);
    msg.setDestinationEntity(89U);
    msg.op = 81U;
    msg.file.assign("FSFBMNETSZUMLEHGBIORRHJFDWWTQSXIZWKHMPKAPFHEWOEUUCZCDNTBPIWIUUMEHKWRGYVAUASDHOO");

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
    msg.setTimeStamp(0.31072863651281346);
    msg.setSource(51845U);
    msg.setSourceEntity(23U);
    msg.setDestination(46217U);
    msg.setDestinationEntity(215U);
    msg.op = 128U;
    msg.file.assign("VGQKIPUQZUODLVKFPSPRZLBNDDHDBPBGAJKJYLJXFIEXGZTVSNXNJGPHSUZZVDMXVKSYUGHOMIAEUOHISCRKSGZGOWUBTYFCESMQKWNTBCWTXNLDKDJHQLNQEXNAKBWGWEIJERTFRHDCYERUGXLZQNQFTCTCCHMQLXPFDCYO");

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
    msg.setTimeStamp(0.4009230604346762);
    msg.setSource(41230U);
    msg.setSourceEntity(133U);
    msg.setDestination(457U);
    msg.setDestinationEntity(16U);
    msg.op = 119U;
    msg.file.assign("DICVKGQGVJAZRSVALIVAPBGUEIUPNYIXOKDKDMXTERDOTHHPTBYEQEXMSKLZKUMUBXMKBXCRTHOLDSSKEBGPKEPAYHQOWRHQSUCPPIAVGXDRCZNETNVYUZHXUCARDQWFGYQILVNVKLYJQZZXUQATCEYNLHMIVGTLYWWYJTIISHSFOAUDPFZNNHMVRBOFYJGPAJWQJQMFO");

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
    msg.setTimeStamp(0.4402566210553981);
    msg.setSource(14673U);
    msg.setSourceEntity(4U);
    msg.setDestination(39497U);
    msg.setDestinationEntity(59U);
    msg.op = 221U;
    msg.clock = 0.44836130540165475;
    msg.tz = 72;

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
    msg.setTimeStamp(0.7524822441461179);
    msg.setSource(9596U);
    msg.setSourceEntity(241U);
    msg.setDestination(28256U);
    msg.setDestinationEntity(171U);
    msg.op = 185U;
    msg.clock = 0.5308978758436884;
    msg.tz = 110;

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
    msg.setTimeStamp(0.3541750493541528);
    msg.setSource(63360U);
    msg.setSourceEntity(75U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(110U);
    msg.op = 181U;
    msg.clock = 0.09866330161477843;
    msg.tz = -21;

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
    msg.setTimeStamp(0.3032892367290718);
    msg.setSource(32703U);
    msg.setSourceEntity(196U);
    msg.setDestination(32404U);
    msg.setDestinationEntity(93U);
    msg.conductivity = 0.7730741896264004;
    msg.temperature = 0.16882211764411248;
    msg.depth = 0.38738848339292764;

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
    msg.setTimeStamp(0.6012264264911191);
    msg.setSource(14181U);
    msg.setSourceEntity(76U);
    msg.setDestination(64505U);
    msg.setDestinationEntity(137U);
    msg.conductivity = 0.2774893391808245;
    msg.temperature = 0.07615306327807803;
    msg.depth = 0.37303620248564184;

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
    msg.setTimeStamp(0.9462809717653471);
    msg.setSource(14597U);
    msg.setSourceEntity(53U);
    msg.setDestination(17402U);
    msg.setDestinationEntity(188U);
    msg.conductivity = 0.8345982949146106;
    msg.temperature = 0.06926564280621317;
    msg.depth = 0.08592178966945119;

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
    msg.setTimeStamp(0.5427614733990495);
    msg.setSource(8902U);
    msg.setSourceEntity(51U);
    msg.setDestination(60571U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.9366577830846289;
    msg.roll = 17297U;
    msg.pitch = 53455U;
    msg.yaw = 55559U;
    msg.speed = -16661;

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
    msg.setTimeStamp(0.9616219992174432);
    msg.setSource(17123U);
    msg.setSourceEntity(232U);
    msg.setDestination(10302U);
    msg.setDestinationEntity(125U);
    msg.altitude = 0.08417473581961399;
    msg.roll = 48121U;
    msg.pitch = 30449U;
    msg.yaw = 37774U;
    msg.speed = -1791;

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
    msg.setTimeStamp(0.6871590078869128);
    msg.setSource(34080U);
    msg.setSourceEntity(136U);
    msg.setDestination(30130U);
    msg.setDestinationEntity(240U);
    msg.altitude = 0.8506219439546081;
    msg.roll = 44768U;
    msg.pitch = 24514U;
    msg.yaw = 12212U;
    msg.speed = -32168;

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
    msg.setTimeStamp(0.6139524616728503);
    msg.setSource(11123U);
    msg.setSourceEntity(166U);
    msg.setDestination(3514U);
    msg.setDestinationEntity(71U);
    msg.altitude = 0.9108128649029116;
    msg.width = 0.12116481183010241;
    msg.length = 0.46868391736399484;
    msg.bearing = 0.030731032573668604;
    msg.pxl = -6607;
    msg.encoding = 9U;
    const char tmp_msg_0[] = {-122, 2, 6, 106, 67, 73, 58, 53, 66, 47, -85, -101, -31, -29, -125, -88, 96, -100, -85, -31, -127, 1, -107, -16, 121, 2, 112, 10, 5, -71, 11, -53, -7, -34, 105, 23, 125, -18, 104, 33, -64, -44, 42, -44, -31, 29, 28, 73, 58, -39, 56, -103, 82, -19, -78, 35, -117, 116, 28, 19, -124, 41, 18, -107, -78, 111, 82, -82, -38, 96, 75, -92, 19, 92, -56, -95, -47, 124, -94, 82, -57, 40, 96, -4};
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
    msg.setTimeStamp(0.7165694327142372);
    msg.setSource(31009U);
    msg.setSourceEntity(233U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(231U);
    msg.altitude = 0.8950207207655072;
    msg.width = 0.7127746379551607;
    msg.length = 0.5815684855544513;
    msg.bearing = 0.5413621324274487;
    msg.pxl = 26304;
    msg.encoding = 151U;
    const char tmp_msg_0[] = {74, -12, 113, 27, -75, -14, -3, 11, 100, 42, -11, 45, 17, 45, -103, 93, 10, 60, -1, 120, 1, 14, -12, -97, -97, -96, 92, 126, -22, -2, -53, -109, -21, -105, 62, 57, -106, 126, 7, -13, -75, -121, -9, 3, -127, 11, 105, -57, 64, -57, 18, -81, 79, -5, -64, -109, -17, -18, -92, 4, 102, 32, -90, -119, -109, -5, 46, 103, -84, -6, 102, 25, 61, -72, 67, 33, 61, 52, 105, 30, 40, -43, -86, -115, 1, 87, 110, 87, 22, -69, 7, -122, 108, -5, 107, -103, 104, 72, -32, 82, -75, 82, 18, -101, -97, -127, -58, 83, -54, 5, 1, -84, 47, -63, 78, 77, 89, 33, -67, 8, 123, 47, 63, 67, 57, -114, 17, -25, -47};
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
    msg.setTimeStamp(0.44963056681074576);
    msg.setSource(1568U);
    msg.setSourceEntity(21U);
    msg.setDestination(14856U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.784165200905577;
    msg.width = 0.6952502871458485;
    msg.length = 0.1771783693353478;
    msg.bearing = 0.1912666997254553;
    msg.pxl = 25282;
    msg.encoding = 24U;
    const char tmp_msg_0[] = {33, 71, 25, 51, -95, -38, 24, 60, -67, -104, -106, 88, -32, 100, -70, 110, -90, 22, 87, -95, -107, 121, -45, -108, 20, -95, -102, -55, -16, -31, 28, 72, -107, 78, 74, 77, 102, 33, -53, -22, -94, -75, 81, 46, -72, 26, -99, 68, -85, 60, 82, -22, -67, 28, -30, -34, 21, -51, 115, 99, -71, -125, 89, 13, -119, -99, -48, -121, 44, 78, 90, -5, -103, 46, -110, 4, -65, 32, -107, -72, -55, -87, -47, -57, 37, -128, 44, 49, 77, 101, -91, 53, 121, -23, 67, 28, 45, -69, -68, -69, -88, -4, 38, 33, -34, 101, -23, 89, -31, 108, 87, -117, -78, 60, 76, -80, 82, -39, -4, -73, -41, 56, -74, -5, 78, -40, 103, -40, -98, 120, -113, 35, -9, -74, -68, -104, -118, -2, 12, 16, 41, -41, -19, -97, -108, -91, -90, 27, -31, 32, 42, 33, 9, -2, -8, 13, 110, 91, 112, -115, 84, 74, 61, -113, 39, -46, 111, 67, -7, 86, -49, 31, -50, 93, 125, 12, -73, -66, 0, 83, -34, 61, 45, -116, 103, 0, -43, 107, 89, 91, 5, -72, -65, -120, -106, 13, 32, -69, -32, 13, -52, 47, -13, -104, 67, 60, -33, -51, -26, -12, -87, -78, 17, -16, -18, 86, -90, -84, 63, 63, -17, 56, -33, -93, -128, -117, -74, -92, -42, -30, -3, -50, 76, -3, -93, -84, -88, 74, 23, 110, 113};
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
    msg.setTimeStamp(0.41699659027663394);
    msg.setSource(14026U);
    msg.setSourceEntity(15U);
    msg.setDestination(11129U);
    msg.setDestinationEntity(233U);
    msg.text.assign("FCSUMAEALBWTUMUPAQLQVMBHCVYTXIEQSODRIHQDXBDHXJCWLDWJSBOPKEBIELFNJORNCIMMXFHJBUIWMFKSFFZHSJLAATAOTVRRTWIRTVOYWXGWRSGMHOMJCPLICWEDJMMNICHQPKBUYNUJYADPXQDUSXXZKOOUFGCEWKNHUJGZBANJRVYZQLGBGGDPVYSKLNWNPPZTVGZFZCKVPVKSCZYLETI");
    msg.type = 84U;

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
    msg.setTimeStamp(0.32581484871413124);
    msg.setSource(35356U);
    msg.setSourceEntity(162U);
    msg.setDestination(50541U);
    msg.setDestinationEntity(14U);
    msg.text.assign("JPOKAOWUTXVZENOPCQCGUIWXYRQUYLLCHJDSLGLPDABPQVIDMYBNIUNTDZHQOAZVKKJHEACPVHOGLWEFSPHBMTMORSGVYFEEMFMVERIISVIRURBKXGTZDUZATWTEPCEKPSMXHFBYGXRLUZIDWATJSBCTJKJYYROQTVBKMNQVKASLNSWRCQEFFUUHHJKBFMAZBICFQMWOJIZNFUXLASRCKXDX");
    msg.type = 157U;

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
    msg.setTimeStamp(0.30335498970806585);
    msg.setSource(54171U);
    msg.setSourceEntity(5U);
    msg.setDestination(46180U);
    msg.setDestinationEntity(32U);
    msg.text.assign("MWHVIAJLOEBOPCVQXCIHRFTNXACYYECLBQGNUCWAAEB");
    msg.type = 68U;

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
    msg.setTimeStamp(0.1994506871100422);
    msg.setSource(30308U);
    msg.setSourceEntity(67U);
    msg.setDestination(11341U);
    msg.setDestinationEntity(67U);
    msg.parameter = 245U;
    msg.numsamples = 44U;
    msg.lat = 0.06803593404995356;
    msg.lon = 0.8392118068471132;

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
    msg.setTimeStamp(0.8521254033534004);
    msg.setSource(63120U);
    msg.setSourceEntity(136U);
    msg.setDestination(7833U);
    msg.setDestinationEntity(57U);
    msg.parameter = 86U;
    msg.numsamples = 28U;
    msg.lat = 0.34471326245560163;
    msg.lon = 0.9574050476677258;

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
    msg.setTimeStamp(0.885819934409381);
    msg.setSource(15200U);
    msg.setSourceEntity(213U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(206U);
    msg.parameter = 228U;
    msg.numsamples = 186U;
    msg.lat = 0.26106881928777315;
    msg.lon = 0.40214063331670846;

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
    msg.setTimeStamp(0.6592486338620812);
    msg.setSource(15300U);
    msg.setSourceEntity(156U);
    msg.setDestination(2890U);
    msg.setDestinationEntity(244U);
    msg.depth = 64936U;
    msg.avg = 0.48210709274884034;

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
    msg.setTimeStamp(0.10225768480180808);
    msg.setSource(44887U);
    msg.setSourceEntity(183U);
    msg.setDestination(44086U);
    msg.setDestinationEntity(60U);
    msg.depth = 19840U;
    msg.avg = 0.681188745017524;

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
    msg.setTimeStamp(0.17122078452349765);
    msg.setSource(39201U);
    msg.setSourceEntity(245U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(22U);
    msg.depth = 9899U;
    msg.avg = 0.17275185487279265;

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
    msg.setTimeStamp(0.13978713961693678);
    msg.setSource(38580U);
    msg.setSourceEntity(72U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.1714958117455735);
    msg.setSource(32529U);
    msg.setSourceEntity(115U);
    msg.setDestination(11348U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.6724102750373337);
    msg.setSource(8095U);
    msg.setSourceEntity(42U);
    msg.setDestination(19756U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.2193183667709302);
    msg.setSource(60075U);
    msg.setSourceEntity(248U);
    msg.setDestination(18803U);
    msg.setDestinationEntity(36U);
    msg.sys_name.assign("URYWBUWQCMIURSTVJGSLVNSXVHFLHOMSUWYWPHJHOZPWZHJPLEUZKNNQYKPMKFXMBNFULGZGXLZDDAQACIUDENXBGVIPRCSHCWPERFSJRHFEZTCIBGXFEQRNYFNXSOAPER");
    msg.sys_type = 116U;
    msg.owner = 4472U;
    msg.lat = 0.11328485620050832;
    msg.lon = 0.8867368945570843;
    msg.height = 0.624194899763168;
    msg.services.assign("AGVFGEFLOGILDEWMBWHUTJAJBCFJ");

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
    msg.setTimeStamp(0.5463730071333276);
    msg.setSource(15688U);
    msg.setSourceEntity(110U);
    msg.setDestination(45970U);
    msg.setDestinationEntity(30U);
    msg.sys_name.assign("RAUPXCEGHQSJEAYNNKNOWBLDQUCGKREFUMSSXMPTZFXKUXGGFFKKYVINLUGFVHKWPTQMBUUWJEMWKBXRJZCCXZPIYBOIZIMHVFYODQAIDYBREVSYREITGZXSJYFZAHQPK");
    msg.sys_type = 34U;
    msg.owner = 38952U;
    msg.lat = 0.8591570757471558;
    msg.lon = 0.7723117260317509;
    msg.height = 0.6669828358269315;
    msg.services.assign("EHOIOEJPMYSMFQTVWEZFDVXUJZXQPRSTCGRLCIEWGIPFBFEAZYDDFQNKOZBASZHTAGXCAAUJJKDUJRSQLEQQDVBLLFIYZAMGHVKSGUZUTEPNLWVPKIAUEKDYAMXJINLWYCKVPHYRDNJNOOGUTZTLSWMBGJJQKHVZNSQOXXCRFNIRIBYVBDWVPWQWFRRGZMOCAINXABHKHB");

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
    msg.setTimeStamp(0.007069712652554183);
    msg.setSource(50151U);
    msg.setSourceEntity(201U);
    msg.setDestination(19289U);
    msg.setDestinationEntity(37U);
    msg.sys_name.assign("ZEPPTKUIMQMNBKBTVYJVHMUDXTYJWOAANGEELCOCZJZPGDLHROLDKJWOERGAHVXBIGJNXKHVUUUXFHCANGQCMWQXEDNSRBOSWGWLWPCWIOLJPZTBNSOSOOQXMANKTUKDDAFHEDJUELFQNIIWGLSHMYDLFSWZZRRYHYICYVHAAFPBUEQKKUJMXEPTUWRXJGTDRBYOKFQPYVTVSRGTVPBRIIVPZMMCIHKCFCLECGXJTFBIRMQFZDQFNZSZYBAL");
    msg.sys_type = 219U;
    msg.owner = 65431U;
    msg.lat = 0.6264486148670287;
    msg.lon = 0.14744085044574917;
    msg.height = 0.926252169905169;
    msg.services.assign("WMMEJRYGINJFTBNZJQEJQOKPOFXULOPVZPNRFGYGEYGUCYOBZTJRIEYEIKDBZFLUMAIMMACWUBDLCQKTMRQKORMPPSCJKVDWVBRUBQKILJMOULDKRENKITTDHDZNYYQQDGCNTVT");

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
    msg.setTimeStamp(0.9663423116575657);
    msg.setSource(52972U);
    msg.setSourceEntity(48U);
    msg.setDestination(14049U);
    msg.setDestinationEntity(85U);
    msg.service.assign("QDFHXAFJVRWBGRZXYNHPEUAIOLOXXCTLEIHMCOFHIALUICJALSDQTIUTQNTWYKSMMHMEVMZWHUCPWTBCSULZRFKBWDEDMZHETEFFGGLQJGXOZSYBGJYNARMGBFWXQRRIYWKJDXBCHNJQINYZZPDRFLKPVOOBEKVAVEHKSSNGIRBTFLOAVVFOTLWVXUQYDZOCYNIKJXDU");
    msg.service_type = 90U;

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
    msg.setTimeStamp(0.4271718887024104);
    msg.setSource(16182U);
    msg.setSourceEntity(159U);
    msg.setDestination(54732U);
    msg.setDestinationEntity(185U);
    msg.service.assign("UMPMMLVFBJKLVVYSBACCLAQIWXBHQTGAHQAEEZGEYOTDSLESBHEVWCCRRWKWTVPHAONXPMSVZ");
    msg.service_type = 64U;

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
    msg.setTimeStamp(0.9451258015163737);
    msg.setSource(14084U);
    msg.setSourceEntity(90U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(142U);
    msg.service.assign("ISUETPHRWMJCJHBUPGDQGNLPGTDFNPZBFRBUMYVQCWBGARXCZVQVSZXKHVWRQDPOCHYTZOSKKHDPYGILJAZVDMJGNLYINUJTUOXQQJMVTWZBPSQUZSTE");
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
    msg.setTimeStamp(0.6082885887144498);
    msg.setSource(62819U);
    msg.setSourceEntity(96U);
    msg.setDestination(8007U);
    msg.setDestinationEntity(86U);
    msg.value = 0.1391797499568218;

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
    msg.setTimeStamp(0.7559329366834515);
    msg.setSource(34501U);
    msg.setSourceEntity(96U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(242U);
    msg.value = 0.2064125528556089;

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
    msg.setTimeStamp(0.7005194271464653);
    msg.setSource(15548U);
    msg.setSourceEntity(26U);
    msg.setDestination(25793U);
    msg.setDestinationEntity(183U);
    msg.value = 0.08897894436560572;

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
    msg.setTimeStamp(0.12982854345223627);
    msg.setSource(48272U);
    msg.setSourceEntity(51U);
    msg.setDestination(12904U);
    msg.setDestinationEntity(9U);
    msg.value = 0.6907985237778239;

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
    msg.setTimeStamp(0.5492201477165041);
    msg.setSource(39436U);
    msg.setSourceEntity(123U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(44U);
    msg.value = 0.5259418901880463;

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
    msg.setTimeStamp(0.28724356186389743);
    msg.setSource(62433U);
    msg.setSourceEntity(47U);
    msg.setDestination(42704U);
    msg.setDestinationEntity(86U);
    msg.value = 0.9019109902063105;

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
    msg.setTimeStamp(0.4422993509271207);
    msg.setSource(52046U);
    msg.setSourceEntity(42U);
    msg.setDestination(30670U);
    msg.setDestinationEntity(85U);
    msg.value = 0.01956088697013103;

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
    msg.setTimeStamp(0.647860852070412);
    msg.setSource(10373U);
    msg.setSourceEntity(249U);
    msg.setDestination(11074U);
    msg.setDestinationEntity(47U);
    msg.value = 0.35876835445323363;

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
    msg.setTimeStamp(0.2088257624758354);
    msg.setSource(51888U);
    msg.setSourceEntity(62U);
    msg.setDestination(53264U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7544968623480975;

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
    msg.setTimeStamp(0.3285856028670562);
    msg.setSource(51081U);
    msg.setSourceEntity(117U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(239U);
    msg.number.assign("ZOYTGHSZYRIKJYXMGPQFLRBLKXDNYSYAFBVNOQISHZIJWOHYEDICKOLOCAZIFBSSULZPDCDCMZTJUCTJAMEEBAUMDFIJQAIMXNFRMBSKZFTTPVRRKBHNBJAXUZSDHGGXQHGMYICQTBTOVFXWNKWMHXMOLELEYQYCWGPVKEYCDGNNNEGRASEPASLDVOXWVCVOKPWNDZLQPRUIVTWFGGAKSCWFUTWXDMVWJPBAREQFBJUZHNXQJKPOIJLRQPHUE");
    msg.timeout = 2081U;
    msg.contents.assign("CQFKZHIZPPVBGKUEAKIWSCUSMERRHWEYYNONXQNSDAFMLYHIDYXHDHTLFKOJPBNKOGBUOTGWVPCKU");

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
    msg.setTimeStamp(0.8941299232622758);
    msg.setSource(25195U);
    msg.setSourceEntity(172U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(80U);
    msg.number.assign("ICGQPVPIIRNLOVRTVRWGHHUFKLWFEGJWPYOJZBEDMZLGJRWSKYYQYVWZIRWLASDTWLMCEORYMTHPNXVJXTDADCBZXECIIHANEIUQKUOFJAGDTREX");
    msg.timeout = 31482U;
    msg.contents.assign("UJXFUJBLUHYKOMLGETEBTOZUDZCRZCFPMQFSGFKIDENDMOOQTBXUXSDWPJVQMDMWFEJNSKTGNHSAGIKAVPMZITDDAXBYJRCVATCKXYZYLSASZRHHFXVHBCID");

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
    msg.setTimeStamp(0.2952079989842359);
    msg.setSource(48570U);
    msg.setSourceEntity(68U);
    msg.setDestination(57421U);
    msg.setDestinationEntity(186U);
    msg.number.assign("YWMXVVLKMCSFQMJFHIIVEKBJQKKNTPKUZMHMFAGZIPPJSRZWWMNOSHNGXYXCPYODYPMGAATZVLGADEYACKMEHAKFLMKQNADOOHJRCZUBRPZOJNEEYXQXIBQLVECJIEDXIISTBDSXUVPTGUPUNAHLNJNBNDGFLOBSBIHPGTORSLVZVFWZGKBAODYKFDJSTCLRYJHYZJBFIQSFHUTYRWOX");
    msg.timeout = 18302U;
    msg.contents.assign("JWRQPEKRFXMQDJQIOGOSALQGMZUVODZEOXMPRVWZHDMJWXIZBICKOOPHYNKITZOMXCSLTEFRPVAHVKNGBJHXAYUF");

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
    msg.setTimeStamp(0.7614419391995938);
    msg.setSource(34329U);
    msg.setSourceEntity(79U);
    msg.setDestination(36092U);
    msg.setDestinationEntity(123U);
    msg.seq = 3335474478U;
    msg.destination.assign("JOECSGJGFTYDDZEBFHAZOUIRTCRBTXCSICXZIZRHRERIWYIBHNOWJMEBUTVXVJAHOFUJWORQUNKAOFQQWTKLSZVCTSUFIYPBYPSKPGHXLVQWFUGOCDWKVYMERJTWNLSSHKQIJRXZMQWMOUAMEMEPILLADMJKMWHZHSVZGXRALCXPPVJGZWLPFNDTLQTJ");
    msg.timeout = 39633U;
    const char tmp_msg_0[] = {-18, 31, 26, 15, 67, -19, 111, 106, -41, -100, 75, 53, 17, 75, 116, -19, -4, 63, -11, -111, -59, 107, 93, -25, 14, -46, 68, -64, 95, -59, -73, -92, -23, -48, 53, 55, 86, -75, 72, -125, 58, 2, 13, -125, 9, -5, -77, 79, 124, 91, 44, 86, -69, 65, 96, -10, 35, 41, 104, 125, -70, -75, -3, -111, -101, -85, -64, -14, -62, 15, -125, -95, 113, 22, 53, 116, -89, -59, -43, 38, 15, 96, 17, -11, 69, -29, -55, 55, -37, 86, 22, 94, -81, 80, -29, 59, 7, -118, -17, -122, -116, 21, 94, -42, 82, -74, -62, -3, -18, 106, -127, 44, 96, -62, 31, -17, 67, -36, 114, 52, 30, -34, 58, 60, 64, -6, 36, 21, -85, 24, 81, -61, 15, -128, 86, -61, -27, -42, -108, -122, -70, 12, 43, -113, 24, -17, 125, 89, 7, -118, 20, -94, 58, -45, 70, -1, 8, -52, -27, -82, -127, 109, -75, -122, -93, 2, -88, -39, -39, 26, -90, 3, 25, 104, 17, -89, 22, -8, 41, 113, 28, -18, 65, -105, -60, -93, -111, 101, 14, -118, -4, 81, 26, -7, 106, 84, -105, 31, 115, 7, -12, 39, 5, 47, -114, 2, -93, 88, -119};
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
    msg.setTimeStamp(0.752122136103661);
    msg.setSource(30735U);
    msg.setSourceEntity(59U);
    msg.setDestination(50858U);
    msg.setDestinationEntity(164U);
    msg.seq = 1013738123U;
    msg.destination.assign("KWBEFOYTLZPOBZCGRZCIPKORXTZNJPIT");
    msg.timeout = 38905U;
    const char tmp_msg_0[] = {62, 0, -89, -106, 36, -126, 81, -46, -100, -74, -48, -73, 12, 46, -110, 91, -42, 125, 35, 86, -49, 48, 16, 37, 92, -47, -12, 73, -60, 110, 107, 69, 93, -3, 30, -9, 69, -68, 38, -112, -29, 13, -44, -61, 1, 51, 3, -116, -73, 72, 34, -126, 16, 54, 0, 90, -78, 94, -82, 28, 118, -126, -19, -67, -115, 24, 82, -88, -41, -82, -6, -97, -107, 14, -51, 90, 87, -92, -26, 25, 22, 93, -31, 123, 89, 27, -88, -92, -123, -40, -4, 95, -100, -41, 92, -107, -5, 62, -42, 85, 44, 13, 7, -63, -82, 72, -8, -20, -52, -4, 56, 52, -1, 6, 41, 70, -26, 124, -30, -122, -54, 96, 83, -72, 37, -72, 77, 29, 50, -19, 105, -116, 69, -84, 65, 61, -27, -118, 31, 79, 86, 119, 10, 9, -86, 67, 76, -54, 114, -21, 94, -2, -114, -67, 58, 108, -76, -118, -55, -98, -108, -62, -91, 37, -72, -100, -112, -4, 64, 103, 100, 31, -5, -72, 1, 94, -51, -5, 108, -56, -111, -85, 12, -76, -69, -35, -18, 89, 29, 120, 110, -113, -84, 2, -36, 20, -108, 105, 19, 109, 3, 17, 118, -41, -100, -112, 98, -35, 106, -114, 22, 82, -82, 72, 103, -77, 104, 73, -84, -75, -114, 53, -29, -12, -48, -29, 77, 100, -105, 3, -14, 106, 69, 87, 84, 71, 34, -63, 54, 106, 69, 124, 1, 96, 28, -59, -114, 48};
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
    msg.setTimeStamp(0.9681061517160522);
    msg.setSource(56971U);
    msg.setSourceEntity(114U);
    msg.setDestination(9148U);
    msg.setDestinationEntity(126U);
    msg.seq = 3954370598U;
    msg.destination.assign("YVEBMQFNPLGUUNIJOCVCCWFBOTLFVZABYDMZCQJUJNTIEIEJOSWXLZPXPUFGHHYTCDKHNPECSFGVCIRARLYFOXTWURPQWWESXUOVSZMQRITXRDBZZPIDUSOKNQ");
    msg.timeout = 41905U;
    const char tmp_msg_0[] = {79, 122, -79, -40, 27, -75, 47, -21, -106, 115, -22, -102, -74, -108, 109, -53, -126, 123, 104, -106, 71, -43, -20, 9, -56, 112, 58, 35, 24, -91, -114, -15, -44, -50, -109, -41, 66, -43, 119, -97, 121, -32, -5, 117, -25, -69, -66, -99, 98, 51, -24, -121, 33, 5, -82, 22, -2, -85, 91, -79, 51};
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
    msg.setTimeStamp(0.9907752770415739);
    msg.setSource(5630U);
    msg.setSourceEntity(7U);
    msg.setDestination(49322U);
    msg.setDestinationEntity(31U);
    msg.source.assign("LVARKYQMYOZYKJQHJOKMXMBOWNXBADCWIBPLBTRMPZNXAHJNIDPIOPSEADOHUNTKVHI");
    const char tmp_msg_0[] = {-127, 73, -9, -62, 59, -13, 87, -13, 102, -125, 62, -94, 71, 72, 110, -70, 107, 94, 5, 85, -30, 8, 92, -6, -87, 87, 31, -96, 40, 126, -117, 24, 126, 96, -38, 54, -38, 32, -106, 36, 7, 18, -111, 44, 98, 125, 35, -36, -46, 96, 96, 57, -80, -11, 6, -4, -72, 19, -44, 59, 28, -80, 73, 2, 15, -62, 68, -37, -118, 117, -4, 12, 72, 40, -95, 126, 75, -101, -53, -19, -10, -93, 16, 63, -62, 20, 47, -46, -107, -28, -26, 16, 83, 56, 23, 38, -78, -58, 73, -120, -61, -20, 9, 13, -19, 86, -88, -32, -104, 110, 44, -16, -26, -76, 55, 8, -122, -24, 92, -125, 11, -102, -9, -94, 125, -116, 49, 93, 37, 122, -103, -114, -75, 119, 84, -91, -46, -73, 103, 10, 65, 0, 57, -97, -66, -98, 90, -33, -60, 114, 106, 70, 120, -18, -94, -6, 96, -54, -51, -52, 24, 88, 107, -44, 40, 10, 8, -63, 22, 100, -84, -120, 6, -24, 70, 64, -83, 56, -45, -88, -87, -74, 31, 120, -82, 79, -92, -79, -10, -119, 13, -108, 75, 50, -88, 39, -62, 16, 100, -74, 104, -13, -50, -87, -96, 50, -89, 123, 8, 40, 85, 87, -50, -116, -93, 108, -54, -65, -19, 118, 105, 97, 14, 69, 39, -8, -89, 11, -48, 123, 71, -105, 0, -87, 54, 112, -16, 82, -4, -46, 83, -72};
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
    msg.setTimeStamp(0.6244508283073527);
    msg.setSource(48111U);
    msg.setSourceEntity(111U);
    msg.setDestination(4501U);
    msg.setDestinationEntity(191U);
    msg.source.assign("CEWSUGVZASDMCJMFIMRKAFHOINYKPOHVRPWOVHCCLXSLMVVVXIKJHNCMYWIDPSRTLHYKTKRZXQJCJKEHEFOSWTXNBTCJKWDIZPCTLTUDAUDFUXJVYSRGQQQYZQYGRWWYAEAFAZBFMHEGANVHBIPTJYZDJTWRIDEDZOLMAUODRVNGQNJPOEKBBRUQYCFPXLOOCGYZLEMNBEOHLGGUHTBNVXJRXWQXSGNFPIKLUL");
    const char tmp_msg_0[] = {-51, 26, -66, 121, 117, -75, 59, 7, 31, 81, 61, 61, -97, -77, -54, -89, -52, 87, 79, 44, -46, -31, 77, 23, -26, -43, -64, 53, 43, 84, -82, -41, -84, -69, -82, -44, -108, -11, 41, -9, -43, -26, -112, 23, 10, -71, -105, 25, -51, -49, 19, -110, 47, 93, -16, 84, -9, -67, 121, -57, -20, 11, -5, -57, 124, -75, -51, 106, 72, -108, 36, -94, 106, 4, -21, 20, -7, -86, 41, 113, 110, 106, -90, 105, 96, 35, -59, 53, -55, 34, -15, 74, -113, 85, 86, -81, -29, 117, -77, -101, 59, 11, 28, 126, 44, 20, -125, -103, -25, -33, -28, -54};
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
    msg.setTimeStamp(0.3686325518190068);
    msg.setSource(56921U);
    msg.setSourceEntity(117U);
    msg.setDestination(44503U);
    msg.setDestinationEntity(175U);
    msg.source.assign("TRJSDCLHAOKJVZISGVKEWOXPHQBBFTWZWMQVWRHANJHIECLYFGIBJRTUXAVYZPUOMGUDHDMYEELDGUERIXJWEOCGGIRPBBVZAUMSVDDNLHMWSRKJTXCRZNILSTPBMGAOUIPNCTYFUFAKQFLNHZUTGKFQKIRVQTKACPYCQAWAYLBXYZNVQSCJJUSVFKMDUXYRCOIELNPVYXMHOKOOANGQFBYNEFXTWLFKHNLZSEMZGWQBZM");
    const char tmp_msg_0[] = {5, -58, -45, 112, 42, 99, -64, -32, -14, -92, -52, -45, -38, 26, -1, 7, 104, 123, -109, 12, -119, 32, -44, -77, 90, 97, -93, -6, -20, -48, 56, -114, -40, 59, -38, 101, -14, 63, -64, 114, -108, 74, -26, -6, 62, 94, -6, 50, 125, -99, -126, 8, 23, 19, 32, -122, 19, 29, -4, -112, -76, 9, -59, 48, -64, 60, -87, 7, 79, -74, -126, -113, -30, 29, 23, 76, -5, 81, 71, -16, 37, 12, 70, 114, -33, 44, -116, -54, -40, 45, -14, -3, 36, -20, -96, -81, 36, -12, 28, 120, 82, 29, -55, 85, 42, -21, 104, 23, -69, -90, 61, -50, 20, -14, 34, 93, 121, -7, 119, 121, -101, -27, 121, 52, -46, -103, 99, -122, 80, -103, 21, 107, 96, -43, 4, -49, 53, 64, -92, -64, -113, 61, -71, 34, 120, 86, -24, 7, 93, 108, -113, -62, -21, -99, -54, 59, -106, -68, -56, 68, 17, -85};
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
    msg.setTimeStamp(0.41894419252267767);
    msg.setSource(34349U);
    msg.setSourceEntity(15U);
    msg.setDestination(27352U);
    msg.setDestinationEntity(10U);
    msg.seq = 4227089649U;
    msg.state = 244U;
    msg.error.assign("WRJZZCRHQBFQQGNOOZCSRPNUMVHWFUDWCSYBUUPHLBNEVXJGMGLDMAKSQDYBYCBZHECNHEKPBPUPJGGJSFEQLDLZXHYISRPIXMPHGVYQRJOHAHNUWATVAOUDNG");

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
    msg.setTimeStamp(0.11542351587275379);
    msg.setSource(61027U);
    msg.setSourceEntity(68U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(67U);
    msg.seq = 3698811527U;
    msg.state = 188U;
    msg.error.assign("TGDOXPHVPJSCXAIPXLGMBPRDVYKLNXRCBPBQUGNZSCOGEZTNKHYEVMUSBSYRQPHPEQEZMLENFDTFXTTJAMFCZDUFTIDUNVHOINUAZFZYQXWSMJFKTJVCJIJBIWHMAUWATQQMYCYMFGENKBLWVSBWZIXQPFZNLYZVJTVCOBHRUIUKS");

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
    msg.setTimeStamp(0.08861044243981053);
    msg.setSource(15832U);
    msg.setSourceEntity(240U);
    msg.setDestination(6401U);
    msg.setDestinationEntity(22U);
    msg.seq = 2149141070U;
    msg.state = 1U;
    msg.error.assign("NDKARHEVMTLRZGMGNWXXPHQRRXFLBCZAMCFAISJGISHGEOAKVMFQNIOJUZBDWLXQLUSBZFVFCOPBDWEPBUOWMMJWWWMGBPPZDBGHFDCDR");

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
    msg.setTimeStamp(0.5722915977083673);
    msg.setSource(52574U);
    msg.setSourceEntity(89U);
    msg.setDestination(34821U);
    msg.setDestinationEntity(56U);
    msg.origin.assign("FNAJUEVLZLTMJVIANJXNFLCWPKYWPBHCVMTNHAYPHKTTDPDGEUAOXQEDZR");
    msg.text.assign("NAKLMXREXXCVQAQYFHTANIFNSHKSCDKSPUHEHYZWGEMQJLBNANLVKFRVQAPDRWCOLTRXBPSKBLOIWMLRWUPLXSAHFYIRTJANYJTOGFLZXFNMMZZVTAPQFPZOWIZCJHYINMMHTLSDDJZEIUBDPHNGUEOCBJTDWUTXYMDCGVXXETEGWBWOCJIIYGFJZUFORKRICUZNKYQEUMDHIDVKKOQUJBQYFGMWPVDCTPLOSVUEBRXASBGGYVV");

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
    msg.setTimeStamp(0.5116594205829161);
    msg.setSource(58876U);
    msg.setSourceEntity(176U);
    msg.setDestination(40208U);
    msg.setDestinationEntity(162U);
    msg.origin.assign("UPLOEHDQFXWUGVVCRZVJXRHFLYKYKEXDWMAJTYXIRBNJVRTWMFRIUCPVUWF");
    msg.text.assign("URGNMYEQGLVLEGWOKOUMIIHYVTFVDLBDTJRHWQSHXSZHBAGBQJLKYAYJCOQLEDCMHQSVWDQFWQDESTTIXMUZKOGIWNSGZKNOYPXTXXRMLSXZFBWRXABFPIHJPOVWLHLHSNYVKXCQPNKPBGPKSCAGVXOMZBFIGCPEUARAYSCFKNBUNNRPAEJMTRREADULJVIKEQFIMNKODEHOMLWCJTCPG");

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
    msg.setTimeStamp(0.8586059547382231);
    msg.setSource(40815U);
    msg.setSourceEntity(251U);
    msg.setDestination(18407U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("YKUBAHIDBFFDRIMTNGCRYPCJVWLIEZXPKZIXMCVULKOKFDONLBJNTBBHSHIOSVOREKGCTVUNMDUQJWHPHGSRSUFEJPQXFBEWLLAQSKPMHLICZGNRGUYFDXCTAILLJKPPJGIFYXAEVYVQRMOSHRUFPEZCCUALVWQTAPUZXPOAJNDVWLNTCQWQOBUJEZSZZDARGOHHI");
    msg.text.assign("HMDGIUZAYRISEYHPXARUWYHTDIATBBXLIDNLVLQFCCYHFCAMFEPYBRHU");

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
    msg.setTimeStamp(0.2871631896395206);
    msg.setSource(43344U);
    msg.setSourceEntity(110U);
    msg.setDestination(2324U);
    msg.setDestinationEntity(225U);
    msg.origin.assign("MWQMIXTTUFWHAKVKKELQFHCVWBDVNKIFZFIQVOSXMGSFBYYFDZLLYLYZJJRCK");
    msg.htime = 0.21737658154618822;
    msg.lat = 0.3987980330357501;
    msg.lon = 0.778258783039763;
    const char tmp_msg_0[] = {66, -89, -25, 120, 36, -110, -112, 87, -98, 13, 67, 30, -93, 76, -27, 12, -37, 108, -97, 92, 85, -118, 19, -74, 58, 98, -54, 86, 126, -109, 29, -114, -28, -48, 99, 67, -127, 118, -8, -3, 68, 100, 117, 69, 21, -114, -64, -86, 27, -6, 88, 49, -33, -103, -86, -12, -18, -38, -37, 59, -72, 110, 40, -126, 66, -25, 10, 101, 99, -85, -95, 0, -54, -115, 58, 85, -71, 33, -60, -118, 97, 101, 45, 98, 102, -31, -72, 68, 5, -81, 16, 12, 22, 43, 125, 72, 121, -18, -101, 64, -121, 26, -74, -11, 0, -82, 55, -26, -84, -19, -4, -93, -116, 36, -28, -79, 90, 97, 65, 31, -13, -21, -125, 87, -110, 48, -2, -89, 118, 88, 22, 51, 87, 108, 37, 54, 43, 54, 55, 18, 77, -97, -88, 19, -87, 26, 110, 41, 58, 64, -114, 121, 69, 49, -57, 29, -47, 78, -30, -15, 103, 61, 8, 83, 125, -5, -25, -91, 2, -12, -68, -24, -45, -71, -19, 15, -105, -122, -56, -68, 101, 105, -100, 4, -12, -20, 39, -115, 28, 63, -64, 78, 35, -73, 123, -61, 121, -47, 118, 88, -120, -16, -19, 52, -84, 113, -15, 61, -38, -86, 35, -73, 77, -99, 99, 60, 69, 53, -5, 42, 13, -13, 32, -104, 38, -17, 116, 64, 98, -37, -28};
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
    msg.setTimeStamp(0.11594612443655195);
    msg.setSource(46848U);
    msg.setSourceEntity(198U);
    msg.setDestination(64200U);
    msg.setDestinationEntity(146U);
    msg.origin.assign("DRRJSLTLCDCJOAMKH");
    msg.htime = 0.4239549903435127;
    msg.lat = 0.783137409385324;
    msg.lon = 0.9527385700359976;
    const char tmp_msg_0[] = {-89, -113, -91, 116, 24, -37, -17, -40, -110, 16, 35, -31, 60, -73, 46, 110, 121, 79, -25, 107, 40, 60, 44, 83, -77, -48, 96, 34, 60, -34, 37, 30, 70, -6, 119, -114, -20, 40, 14, 29, -60, -76, 96, -32, -89, 125, -124, 21, 122, -19, -68, 43, -12, 49, -22, -46, -78, -77, -95, -59, 11, -54, 15, -120, -100, -112, -74, 19, -72, -44, 51, -52, 47, 6, 78, 26, -102, -59, 15, 76, 100, -61, 114, 3, -33, 99, -127, -32, -103, -69, -11, 54, 54, 4, 96, 47, -60, -122, -4, 34, 52, 123, 124, -2, 30, -128, -5, 59, 123, -1, -24, 116, 49, 8, -56, -12, -125, 82, -116, 82, 6, 7, 26, 123, -124, -105, -39, -118, 45, 110, -26, 112, -41, -93, -79, -36, -66, 92, 20, -84, -123, 79, -122, 0, 63, 31, 118, -29, -113, 56, -69, -121, 32, 67, -74, 86, 76, 121, -90, -95, 123, -49, 60, 48, -26, -34, -3, 16, 106, 44, -50, -60, 65};
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
    msg.setTimeStamp(0.9891115379846499);
    msg.setSource(54254U);
    msg.setSourceEntity(90U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(146U);
    msg.origin.assign("XOTMNDFGIUQNWMHLGQTYCXJAMJITPSZJEDJXEPPCBIPDRTJMAZITYCQIJFSNOBWQECETWUHNYGJEYNWKNQOOVITHXJVXVYKRAZZRMHFSWWBSAKLOESQUZYOYNVUAQNPUUODABUAMOXSHQGTHCFWUQDTGLTABGLKDLLFDSCULRDFDLEICVOZHNEURNIKGGYY");
    msg.htime = 0.028973765754441994;
    msg.lat = 0.18618533534154524;
    msg.lon = 0.05517289931476255;
    const char tmp_msg_0[] = {-116, -33, -99, 23, -73, 28, 8, -69, 86, -71, -61, -81, 13, 102, -108, -100, -50, -55, 15, 110, -16, -83, -107, -86, -126, 34, 52, -13, 57, 43, 26, -48, 39, 46, 86, 124, 8, -91, 97, -53, -7, 95, 85, -13, 35, 109, 87, 9, 99, -98, -29, 41, -38, 93, 90, 56, 47, -118, -2, 7, 100, 50, 41, -74, -60, 62, -66, -114, 57, 26, 82, 99, -1, 12, -115, -32, -57, 120, 46, -41, 71, 92, 77, 80, 115, -6, 65, 120, -109, -113, 50, -1, -55, 41, 43, 36, -48, -7, 51, 115, -25, 79, -111, -102, 85, -87, -1, 76, -89, 6, 11, 40, -108, -25, -30, -115, -8, 36, 24, -40, -14, -16, -69, 4, 35, -104, -106, 11, -11, -113, -106, 11, -17, -9, 40, -118, 6, 85, 121, -114, 64, -10, -112, 35, -20, -16, 5, 10, 15, 60, -52, -47, 92, 6, 110, 107, 87, 81, -104, -104, 61, 44, -13, 104, -116, 63, -121, 88, -59, 37, -28, -49, -52, 16, -4, -20, -25, 12, -35, -5, -120, -74, 1, -89, -20, -97, -93, 12, -105, -43, 125, -11, -116, 87, -47, 18, -29, 16, -60, -110, 47, -6, -67, -19, 85, -35, 60, -55, 118, -106, -50, -93, 125, -77, -51, -41, 84, 88, 115, 22, -93, -81, 118, 19, 54, 19, 91, 66, 121, 38, -15, 37, -62, 3, 21};
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
    msg.setTimeStamp(0.9060068071382714);
    msg.setSource(55350U);
    msg.setSourceEntity(130U);
    msg.setDestination(26844U);
    msg.setDestinationEntity(66U);
    msg.req_id = 6443U;
    msg.ttl = 2518U;
    msg.destination.assign("VBEXHYOQFNSANGRMJBMXTMDIUJYCTFOSAAKAEPMEQGUQPZUQKUKBPNXMAZRSREEAIUOPHWLQGXPLPDHDFSMHOGES");
    const char tmp_msg_0[] = {77, 92, 94, -52, 109, 113, 101, 4, 124, 114, 12, -11, -91, 65, 22, 13, -89, -77, 119, 7, -44, -107, 90, 79, -108, 105, -22, 41, -86, -48, 7, 99, -47, -10, -53, 39, 84, 105, 2, 113, -14, 94, 97, 69, 50, -57, -22, 101, -31, 6, 4, -4, -49, 12, -116, 61, -67, 27, 85, -57, 80, 41, 14, -53, -45, -95, 46, 83, -33, -68, 105, -28, -47, -64, -84, -17, 112, -13, 41, -113, 124, -13, -74, -90, -57, -29, 90, -59, 46, 70, -91, -82, -50, -59, 120, -23, -99, -101, -121, -14, 61, 112, -34, -9, -16, 2, 59, -77, 1, 118, -58, 28, 14, -117, 77, -94, 51, 11, 39, -123};
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
    msg.setTimeStamp(0.7324467870849037);
    msg.setSource(22152U);
    msg.setSourceEntity(204U);
    msg.setDestination(26117U);
    msg.setDestinationEntity(179U);
    msg.req_id = 25117U;
    msg.ttl = 63130U;
    msg.destination.assign("TXUSYSWJOHOAEZPOSJFROFJDVJTHPLSARMHQJVBMQGGREWSCR");
    const char tmp_msg_0[] = {51, -99, 39, -91, 62, -115, 120, 52, -25, 118, -47, -35, 12, -66, 101, 49, 60, -14, 26, -59, -79, -71, 100, -77, 71, 112, -9, 91, -38, -71, 22, -30, -28, -98, -14, 10, 96, 22, -116, 69, -118, 89, -6, -108, 90, 105, 75, -127, 48, -55, -24, -110, -23, -57, -87, 27, 63, 24, 35, 101, -74, -103, -78, -117, -8, 83, 99, -46, 57, -44, 50, -33, 63, -54, 7, 36, 69, -99, 3, 120, -128, -16, -122, -117, -59, -50, -102, -48, 38, -51, 68, -41, 125, -21, 68, 13, 21, -8, -125, -36, -41, 67, -92};
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
    msg.setTimeStamp(0.24736121598157979);
    msg.setSource(12231U);
    msg.setSourceEntity(5U);
    msg.setDestination(50066U);
    msg.setDestinationEntity(29U);
    msg.req_id = 31758U;
    msg.ttl = 37985U;
    msg.destination.assign("FRSIYVUJMJJCBNKVTVMGKXBNHEJREBKFKAJSNDOEYLRZLVDFEBMPJEPJXNLATQLMUDCFRPTFDRKHBZCGQQAHSFUKGLXUULDQZDPAKHYEISMAPZSOQOWMJEREGXNGZJCYKKNETVGXWVQIPXKURAYMFWIAGAYIZT");
    const char tmp_msg_0[] = {94, -126, -12, -29, 124, 15, -119, -8, -124, -44, 89, 97, -76, 125, 67, -58, -61, -103, 23, 75, -58, 84, -14, 115, 99, -6, -46, -118, -23, 111, -55, 105, -50, -89, 116};
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
    msg.setTimeStamp(0.33683093692628785);
    msg.setSource(11535U);
    msg.setSourceEntity(202U);
    msg.setDestination(24656U);
    msg.setDestinationEntity(233U);
    msg.req_id = 46508U;
    msg.status = 39U;
    msg.text.assign("LFBUKXJIORPEBIRDJIWYMRBTOZUFKYODVBXJSOIRPXYKPIBXGVVITLXILHIFCNANFBEWRWRGQTZVQOHECTKXAAEMZSCLQWGJACVGDIOVSLQSEYURSHGFDZTYNSPNDKCPUTWMYQQAHBOBHNSSUYDUZMTKOQMJDPHAMFWKVCN");

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
    msg.setTimeStamp(0.003768817126799884);
    msg.setSource(40403U);
    msg.setSourceEntity(178U);
    msg.setDestination(58382U);
    msg.setDestinationEntity(185U);
    msg.req_id = 5989U;
    msg.status = 20U;
    msg.text.assign("LPXDGLUKIFNLIFFSQPMIJNLFZYEQYAPDCTQJKUVEQTKHRKGNBSRSZDQKFWHDNJZVIYQWBUMWTKBRCEEXTZRJOICFUASEEMTSOCB");

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
    msg.setTimeStamp(0.8145167463348877);
    msg.setSource(64555U);
    msg.setSourceEntity(23U);
    msg.setDestination(14711U);
    msg.setDestinationEntity(187U);
    msg.req_id = 31084U;
    msg.status = 166U;
    msg.text.assign("GTGERFEXQMPNRABFMIPEOADFPVNONAL");

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
    msg.setTimeStamp(0.8868522320219692);
    msg.setSource(29189U);
    msg.setSourceEntity(117U);
    msg.setDestination(19266U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("NABOVSRHYLCBAXLYMGDRWKOWDQTTUPPNYKOMFHJSBIEQFGZPBQRBPNEFHNFXSLLVSIKMRWYXCYWXPDQKWVSUGUVLFNGIBBUSQXBHNEYVCDGIUUJXIUXYFLYTWXTVMDATUTEJACOWDJQSVOOOICHZAEHRFWAYOGZMMGWLUZFTFJFWEORCKEMRHPEIIYMEJANBGZCZQSVZCPJ");
    msg.links = 3556189955U;

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
    msg.setTimeStamp(0.4612901623810166);
    msg.setSource(7267U);
    msg.setSourceEntity(108U);
    msg.setDestination(5198U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("JYUUMJNILTFKVCHALLEYREOVPSFDGQYTQBOLJVNLKCPNZZFBFCTNJPJPPEVVNFKHHPNYHXDNGCMMUMJIBTRJWOWTQYZMRASODV");
    msg.links = 2451843816U;

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
    msg.setTimeStamp(0.14389665192238643);
    msg.setSource(48350U);
    msg.setSourceEntity(215U);
    msg.setDestination(16272U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("TFYEJYZYOJPHEAIDDNUZWJRTPIJMXLCDIDPSAXIVIFYMPRGGWPJJFGQROUXNCYCQAVFUIVNBEDZPSBUHVIELKNLTVHPEGSOABQMWPAGHNREOKCSZQTANNGXWBZYBWKSKCQMCRBXDVAVMDNBDWRFCRFVXLRKWHJOODZEKORLICUTGQOIFUZXIAWKUFDURBQYVWKGTWYUCEQKSSTKAHOYQSMMLMMJMZNZYP");
    msg.links = 558430494U;

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
    msg.setTimeStamp(0.3475214153315338);
    msg.setSource(21710U);
    msg.setSourceEntity(217U);
    msg.setDestination(48921U);
    msg.setDestinationEntity(150U);
    msg.groupname.assign("NEUHUXZXLGQCUAXPRYDCVECBBLDDJRTTKUSMWGDMJZRQKVJYOTVHK");
    msg.action = 199U;
    msg.grouplist.assign("UQAWAWMJVRCOEXVXYOZQXHDYHELPRSMGTORXCIZVRWMKNCZIQAXXPELNNRIQTQGUUVDQUBVTOTGNFVDTRIXKAGZPYRNDYQGULMZDSUEXGPPJWGHFNWZJIKHKWOPBCCTPAETYWSMFBPJJEZLIKLWQDSKUWORBJOCASBJOEKSYGDNUSVLHRYLJGIJENTLFDFEWCMFZPMFHVTHZYVEINSFCZTKSNYFVBMCSLHAIABGAMXUOQHHAYUCOBBQLKXDIP");

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
    msg.setTimeStamp(0.5354640639997238);
    msg.setSource(49193U);
    msg.setSourceEntity(140U);
    msg.setDestination(13443U);
    msg.setDestinationEntity(25U);
    msg.groupname.assign("JIXDASMQVHJFCGKVWZFBNQXMBDLLOTIYENQQLHGRGSYRCRZYNWXBXOELSNREWRGIPBETIZWWREMSHFRCVVOAUUKVQYYGDFBEGASBFUNCDZCPKVHEUFBWTYTLJUQJHMKMJOWKCYCBSGFOKPAWJXOLPZSCJGJKNWXAMGFPZLQRZEUPBZLTPANADDQVVMZHKPOPLTAKVUXDUMDTCRDVUGSINXXANYFZWTAHXOISHBIHEIYTPTNOKQYUJQLIS");
    msg.action = 247U;
    msg.grouplist.assign("WHXVZPYYNBEK");

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
    msg.setTimeStamp(0.3404611324182195);
    msg.setSource(49948U);
    msg.setSourceEntity(241U);
    msg.setDestination(29538U);
    msg.setDestinationEntity(45U);
    msg.groupname.assign("BDFAPXJYXBKZUDCMKEGGVSIMDGBQNREHLEWWUPQ");
    msg.action = 98U;
    msg.grouplist.assign("BXQAKEVRZWXJNJGBUUWODYPCAZGZVFZBJNRQBIFJXJWBRMNAUYCZDSWCXPPSODSGSTKFQDRPMBREPAFSGUZIWCCAUTSZMFIGRQITEFFQZNKYSJODRXYKTGITQMOMEHVRWBIVOEYUMTKLWMUOSCYBKCTNQAOGYPHMDJTXKCLVIOHFKGHLDEQQXBLWDVHGKTPPAERZFVJNWFCINYDOZOUEAED");

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
    msg.setTimeStamp(0.1352895502660213);
    msg.setSource(34051U);
    msg.setSourceEntity(243U);
    msg.setDestination(29497U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7570783953443097;
    msg.sys_src = 43147U;

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
    msg.setTimeStamp(0.7098845442743786);
    msg.setSource(32462U);
    msg.setSourceEntity(245U);
    msg.setDestination(27573U);
    msg.setDestinationEntity(237U);
    msg.value = 0.31043594952277853;
    msg.sys_src = 32797U;

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
    msg.setTimeStamp(0.5262638859543726);
    msg.setSource(5417U);
    msg.setSourceEntity(49U);
    msg.setDestination(9357U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7602680933416516;
    msg.sys_src = 61852U;

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
    msg.setTimeStamp(0.2986154255826251);
    msg.setSource(14181U);
    msg.setSourceEntity(11U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7352802952710861;
    msg.units = 9U;

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
    msg.setTimeStamp(0.09678743040907722);
    msg.setSource(7025U);
    msg.setSourceEntity(45U);
    msg.setDestination(56219U);
    msg.setDestinationEntity(69U);
    msg.value = 0.6746300138417581;
    msg.units = 153U;

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
    msg.setTimeStamp(0.08653075051706194);
    msg.setSource(61560U);
    msg.setSourceEntity(250U);
    msg.setDestination(29780U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6328354782224952;
    msg.units = 58U;

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
    msg.setTimeStamp(0.1364647362005389);
    msg.setSource(52310U);
    msg.setSourceEntity(130U);
    msg.setDestination(64661U);
    msg.setDestinationEntity(104U);
    msg.base_lat = 0.3476622745400657;
    msg.base_lon = 0.6710033288252504;
    msg.base_time = 0.29697735854287277;

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
    msg.setTimeStamp(0.4909304917456555);
    msg.setSource(46332U);
    msg.setSourceEntity(220U);
    msg.setDestination(44020U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.6159717004437197;
    msg.base_lon = 0.16503065604964862;
    msg.base_time = 0.9895038731121284;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 38571U;
    tmp_msg_0.priority = 13;
    tmp_msg_0.x = -9833;
    tmp_msg_0.y = -17096;
    tmp_msg_0.z = -32362;
    tmp_msg_0.t = 6068;
    IMC::FineOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.32801974442329773;
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
    msg.setTimeStamp(0.8781685593122438);
    msg.setSource(48740U);
    msg.setSourceEntity(82U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(227U);
    msg.base_lat = 0.5720916203662819;
    msg.base_lon = 0.16651807087028436;
    msg.base_time = 0.5714356308387037;

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
    msg.setTimeStamp(0.4568756421791542);
    msg.setSource(49702U);
    msg.setSourceEntity(24U);
    msg.setDestination(15030U);
    msg.setDestinationEntity(207U);
    msg.base_lat = 0.2020580771912701;
    msg.base_lon = 0.19936753455125356;
    msg.base_time = 0.9246296143582604;
    const char tmp_msg_0[] = {84, 73, -120, 35, -92, -108, -65, -40, 44, -65, 14, -100, 23, 116, 126, 108, -118, 95, -20, -115, -10, 46, -64, 110, -96, 107, -113, -67, -100, 49, 91, 8, -42, -6, -101, 58, -15, 75, -80, -83, -85, 121, -5, -126, 101, -117, -9, 120, -76, -39, 90, -44, -120, -72, 2, 55, 19, 79, -90, 49, -124, -16, -19, -91, 0, -16, -23, 27, 62, 26, -108, -78, -105, 83, 94, -7, 56, -116};
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
    msg.setTimeStamp(0.7547997306264395);
    msg.setSource(4802U);
    msg.setSourceEntity(79U);
    msg.setDestination(38815U);
    msg.setDestinationEntity(244U);
    msg.base_lat = 0.10467515101966163;
    msg.base_lon = 0.49206038841490374;
    msg.base_time = 0.5936749898659947;
    const char tmp_msg_0[] = {-50, -41, 84, -126, 54, -47, 18, -91, 21, -63, -42, -108, -99, -8, 73, 106, 93, -65, -52, 100, 85, -63, -31, 22, 84, -28, 99, -33, 29, 40, -50, 67, 7, -3, -1, 46, -84, 37, 23, -102, 120, 14, -71, 18, -42, 100, -27, 92, -80, -109, 87, -34, 20, -89, 83, -17, 90, 22, 75, 46, -45, -32, -40, 40, 73, -25, -18, -92, 39, 32, 75, -58, 68, -17, 43, -128, 9, -112, -30, -6, -123, 89, -44, -15, -23, -69, 77, -13, 4, 50, -85, -106, -27, -121, -6, -47, -44, -55, 120, -64, -5, 22, 119, -122, -123, -68, -6, -86, -23, -124, 111, 52, 11, -123, -80, 90, 57, -89, 59, -91, -106, 45, -79, -8, 111, -69, -109, -66, 23, 20, 24, -48, 23, 108, 99, 103, -57, -128, -83, -58, -50, 35, -107, 20, 48, 73, -24, 95, 86, -17, -48};
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
    msg.setTimeStamp(0.26573071818791283);
    msg.setSource(25999U);
    msg.setSourceEntity(152U);
    msg.setDestination(14867U);
    msg.setDestinationEntity(14U);
    msg.base_lat = 0.16613900673019322;
    msg.base_lon = 0.4031783942220821;
    msg.base_time = 0.21913456891837424;
    const char tmp_msg_0[] = {1, -30, -119, -45, 90, -34, 49, -78, 88, -47, -53, 43, 111, 21, -7, -73, -24, 102, -61, 125, 86, -121, -9, -70, -122, -105, -107, 0, -121, 41, 84, -110, 22, -12, 59, -11, 16, -63, 18, 42, 6, 35, -13, -44, 63, -65, -67, -5, -36, 95, 77, -88, 38, 59, -104, -11, -92, -4, -36, -34, -13, -61, -26, 79, -123, -95, -100, 107, -82, -127, 3, 104, 77, -2, -5, 59, -31, -42, 0, 85, 125};
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
    msg.setTimeStamp(0.6937742775041286);
    msg.setSource(49168U);
    msg.setSourceEntity(178U);
    msg.setDestination(8741U);
    msg.setDestinationEntity(207U);
    msg.sys_id = 53814U;
    msg.priority = -35;
    msg.x = 2925;
    msg.y = 551;
    msg.z = 29864;
    msg.t = 22502;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6794539886421619;
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
    msg.setTimeStamp(0.6335454155178283);
    msg.setSource(57052U);
    msg.setSourceEntity(90U);
    msg.setDestination(24415U);
    msg.setDestinationEntity(207U);
    msg.sys_id = 2162U;
    msg.priority = -57;
    msg.x = 5547;
    msg.y = 3014;
    msg.z = -31087;
    msg.t = -3948;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 210U;
    tmp_msg_0.value = 0.7720743413328819;
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
    msg.setTimeStamp(0.18882099800469965);
    msg.setSource(23518U);
    msg.setSourceEntity(154U);
    msg.setDestination(43178U);
    msg.setDestinationEntity(238U);
    msg.sys_id = 61733U;
    msg.priority = 22;
    msg.x = -25086;
    msg.y = 5883;
    msg.z = -9528;
    msg.t = -27562;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.7886178001126132;
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
    msg.setTimeStamp(0.025478999188412343);
    msg.setSource(25814U);
    msg.setSourceEntity(106U);
    msg.setDestination(31877U);
    msg.setDestinationEntity(30U);
    msg.req_id = 43890U;
    msg.type = 156U;
    msg.max_size = 64416U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6085928497910894;
    tmp_msg_0.base_lon = 0.35496393060528486;
    tmp_msg_0.base_time = 0.972228682672314;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 58616U;
    tmp_tmp_msg_0_0.priority = 47;
    tmp_tmp_msg_0_0.x = -19901;
    tmp_tmp_msg_0_0.y = -1375;
    tmp_tmp_msg_0_0.z = -8683;
    tmp_tmp_msg_0_0.t = 1523;
    IMC::EmergencyControlState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.state = 252U;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("NKCUBSRWXLBMIONSXGZSNJIYJLSMVYSTAFZASDDTNHYPASQLGQDNEFILYVRHFHXKQFIBXQQJTFVROEMNTLTXPEVZEBWCLGLMHOTARDBHVCDLDVXODWAXHZZQCYWXUMQKUIWGTPUDGURXBMATLGKIBPPFFEEWMWRPPJHUOMZGEFWBJQKCUEVFOFNUMKHZHNOAQJPYCSDNRADYKWOSRIGNYSJCPKZYEVRBIWKE");
    tmp_tmp_tmp_msg_0_0_0.comm_level = 144U;
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
    msg.setTimeStamp(0.729817460190108);
    msg.setSource(48010U);
    msg.setSourceEntity(113U);
    msg.setDestination(7500U);
    msg.setDestinationEntity(189U);
    msg.req_id = 40039U;
    msg.type = 203U;
    msg.max_size = 49315U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.19034098953104073;
    tmp_msg_0.base_lon = 0.3550306796764723;
    tmp_msg_0.base_time = 0.10074294219370228;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 64027U;
    tmp_tmp_msg_0_0.priority = 5;
    tmp_tmp_msg_0_0.x = -5194;
    tmp_tmp_msg_0_0.y = 11066;
    tmp_tmp_msg_0_0.z = 5462;
    tmp_tmp_msg_0_0.t = -1606;
    IMC::VerticalProfile tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.parameter = 65U;
    tmp_tmp_tmp_msg_0_0_0.numsamples = 7U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.307411924663589;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9397521851652547;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4218482551131286);
    msg.setSource(10554U);
    msg.setSourceEntity(164U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(52U);
    msg.req_id = 59389U;
    msg.type = 26U;
    msg.max_size = 63607U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.34561956681242045;
    tmp_msg_0.base_lon = 0.7315197899244517;
    tmp_msg_0.base_time = 0.7859567838266127;
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
    msg.setTimeStamp(0.2173178409468901);
    msg.setSource(4954U);
    msg.setSourceEntity(2U);
    msg.setDestination(9960U);
    msg.setDestinationEntity(142U);
    msg.original_source = 17992U;
    msg.destination = 31568U;
    msg.timeout = 0.02613840050159666;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.6660060907423546;
    tmp_msg_0.lon = 0.5422673311509169;
    tmp_msg_0.z = 0.24433720820780935;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.14525485264340887;
    tmp_msg_0.speed_units = 165U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.45001999892064193;
    tmp_tmp_msg_0_0.y = 0.05045313355449943;
    tmp_tmp_msg_0_0.z = 0.31110880273579655;
    tmp_tmp_msg_0_0.t = 0.8683225312741594;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.36600072102253733;
    tmp_msg_0.custom.assign("HNGAWXIMSLHRMEQDGETZTAZQUAJKUUWWYPIJTTMKKSZZHNVLQDEJLUBGYRGYSTEPAQTCXECYFTAGHTKFZBFYDJGQSEPOCDEWXMQZFVPWPPDEFJAMHRBGYTCVXPKKDWNXMJUSVVJLCXDICXCEKRL");
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
    msg.setTimeStamp(0.8307902187381362);
    msg.setSource(48870U);
    msg.setSourceEntity(35U);
    msg.setDestination(23261U);
    msg.setDestinationEntity(202U);
    msg.original_source = 28459U;
    msg.destination = 50982U;
    msg.timeout = 0.943806245017486;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("FBZKTRSYHXZRAKEELFXVYHMETBYBAGYWDSLBZNVHAYTPQSMUNNLYVEHVJWABXDLREFGEKJJGNVHFWRSPUUKGXHQBQZPFJESGPWABCIATTHDIOPMCGDYXVDBHGQCCUDAZOZPMCWGEHXJUIMFJOECQFIPDMFDQLVWMYQIMTLEAJTUNITONKSTNCOOZXZBFTNVUUNSIOKSNLKWGOIBJZQWVOZFCQVSDCLRPYGRLROUMJSDURCKARXWPRM");
    tmp_msg_0.rssi = 0.4727186544296751;
    tmp_msg_0.integrity = 22714U;
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
    msg.setTimeStamp(0.5387244705298019);
    msg.setSource(33703U);
    msg.setSourceEntity(153U);
    msg.setDestination(1364U);
    msg.setDestinationEntity(123U);
    msg.original_source = 20775U;
    msg.destination = 60714U;
    msg.timeout = 0.757448729790901;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 91U;
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
    msg.setTimeStamp(0.2692639688445778);
    msg.setSource(16245U);
    msg.setSourceEntity(98U);
    msg.setDestination(11828U);
    msg.setDestinationEntity(251U);
    msg.type = 13U;
    msg.comm_interface = 52787U;
    msg.model = 52906U;
    msg.list.assign("ZPSCXTXRZKIDVFYZQLHQFXWHPJSZAKSHSUPQNMUTFPPRCMDHOWLNWNYATLMTUMTBFXWORADIYW");

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
    msg.setTimeStamp(0.6922754800485993);
    msg.setSource(26669U);
    msg.setSourceEntity(170U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(230U);
    msg.type = 1U;
    msg.comm_interface = 52692U;
    msg.model = 34931U;
    msg.list.assign("WZZCBWNZMNVAQJWHCSKOYSUEMETTMVUGYMBFERCVRLJPJDHHCCHYKENACXXHDPCFTBPSIROZWQHXH");

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
    msg.setTimeStamp(0.455966262863459);
    msg.setSource(49813U);
    msg.setSourceEntity(40U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(128U);
    msg.type = 149U;
    msg.comm_interface = 10989U;
    msg.model = 32394U;
    msg.list.assign("DWTUCTWSBEPJQBIWAHWNRYCOHTZLFIKUGVASUKXLGBVCSMKZAMQSQOPFSIGRVRENHJNJVKPDEZIXKRJTUZSESOKMYKIFQXMLHZXMLCUBDYSNLYSQVIIQNINPMHQBUEFWEHCDRTUTVPYZXXITCGPEANWCXMDWG");

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
    msg.setTimeStamp(0.3995398966441931);
    msg.setSource(59621U);
    msg.setSourceEntity(85U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(31U);
    msg.type = 38U;
    msg.req_id = 679115216U;
    msg.ttl = 26498U;
    msg.code = 73U;
    msg.destination.assign("EKDYENJSTNJVGFBXCUTUUOEGLLSARHWZXGENIUVUWQJJDORCNTHEARVYYQBGYYFWNVRWKWSBQPDYOQTWBPCVTGFYBDFIWNFGHGTYDSPCFMRPAZOKWSKMOQBWUOOKMHJQZFVAHGMBTEJCREATPCQLADLMTPDXJUNCCZXLIQXVSKEVSCPUZOJEGLZAEXXYIRYIQMJBAXZBXPLMSGAKH");
    msg.source.assign("FDDDWJBBEOOGZWBPFLETLQXQFUNGGYOUICBFOSUXVSRWZQQHCGWZMPTAJLEYGQQDGFYDVJUUTUUSPMAAKGCXODSWHVYPGKEYXWOSNESFIQNFNHHHNMVETCKAVNACHPCTSLXXDWMYXKFBLVAVNPRPJMYLMPVWHZLJOPOBRRDTSLIBTDCMEUZRGUNARFJKKZICALBN");
    msg.acknowledge = 189U;
    msg.status = 138U;
    const char tmp_msg_0[] = {104, -101, 23, -12, -67, 49, -26, 79, 112, -99, -19, 71, -111, -22, -16, 116, 24, -104, -104, 30, 33, 10, -102, 14, -69, -3, -106, -126, 35, 90, -3, 58, -30, 86, -112, -2, -124, 70, -64, -116, -61, -56, -47, 15, 31, 110, -102, -102, -92, 47, -28, -95, -9, -5, 28, -26, 43, 52, 41, -5, 94, -46, 53, 100, -50, -22, -84, 55, 91, -127, 10, 100, -12, -49, -74, -109, 73, -29, -39, -58, -68, 126, -16, 81, -51, 25, 64, 117, 6, 5, 10, 15, -45, 15, -84, -17, -54, -8, -74, -41, -28, -12, 18, 13, -39, 101, 12, 47, -101, -93, 32, 94, -52, 89, 72, 98, -24, -59, 0, -73, -80, -74, -9, -16, -114, -108, 96, -75, 80, 14, -63, 35, 62, 41, 37, 26, -121, -35, 91, -31, -15, -29, -56, 95, 83, -76, -18, 89, -87, -96, -49, -65, -48, 42, 65, 4, -110, 101, 32, 56, 41, 53, 114, 70, -123, 31, -78, 2, 10, 101, 78, 18, -24, -37, 15, 21, 42, -62, 85, 68, 99, 37, 35, -92, -69, 71, 65, 16, 78, 2, 30, 87, 6, -69, -4, -74, 32, 63, -37, -24, 34, -27, 48, -10, -57, -32, -113, -91, 110, -8, 2, -87, -124, -111, 108, -46, -43, 125, -33, 115, -104, -126, -81, 89, 44, 20, 22, 68, 78, 95, -22, -54, 110};
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
    msg.setTimeStamp(0.6798075038621508);
    msg.setSource(64122U);
    msg.setSourceEntity(28U);
    msg.setDestination(56886U);
    msg.setDestinationEntity(103U);
    msg.type = 122U;
    msg.req_id = 4236737796U;
    msg.ttl = 53876U;
    msg.code = 105U;
    msg.destination.assign("PONYNVGOJADFKYCPPTYPMBDBJEBJBRCOZQHESYRHMTEABXKCLCFXKMIVVOJJZQZWWDJZHGAQNAYQSQXWIURGUWRFWUXYBOXWMIEETADDMOVMMANLTCOBQFYTZFIHZUTVCJTZHFLSUFQSDYWIPORNWBSXEVLIKQJESKADH");
    msg.source.assign("CGLRHOVPJGNSNKPQIQYYPPCLOJDVPGTTWVENZFUPUWJZQPHOYQMCOSEVYNKQHUGIKLNKWZULFAMGNBUBZKTQIIXANTRBZEEWFEIBVPXCQFHRORMSMSZWUABYGDVAYDYLVYDEBJDQUVSKQCBHTZSA");
    msg.acknowledge = 160U;
    msg.status = 109U;
    const char tmp_msg_0[] = {51, 3, 98, -121, 71, 18, 12, -82, 111, 14, -2, 119, 33, -86, 108, -85, 4, -42, -38, 22, 32, 46, 49, -45, -12, -124, 119, -105, 47, -34, 9, -95, 92, 7, -53, -112, 114, -7, -30, -85, 19, -59, 49, 51, 108, 55, -25, 23, 119, -72, 30, -42, 82, -19, -6, 12, -120, -70, 48, -120};
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
    msg.setTimeStamp(0.07876847542158305);
    msg.setSource(50377U);
    msg.setSourceEntity(107U);
    msg.setDestination(31872U);
    msg.setDestinationEntity(237U);
    msg.type = 41U;
    msg.req_id = 2020025746U;
    msg.ttl = 3881U;
    msg.code = 151U;
    msg.destination.assign("GFYPHORSCOKQFLVWUCWEYNPMYFWPLHBNWJOQRZKQPNCYWDYZJKOGJPUBXNCLDWPCIJQTEVXMXKDAWQCAASGIMZTERWIDVOZSTTIVIOVSNLFLMSTHHJBRKGAWLDQKQAVWVURJHQFRAMZEINBBLULIASTGZKEZUEVAQZUYTTJXUBPYENDEPTKHRFXRJIDJKAGLGQTVSMSCHDMDXHMBXIJP");
    msg.source.assign("GVAWCPNQQSWARXGDDLBPVBNSODVBGYGTCURBKPPRKYJYZBRQSTOWQZRMXAEWZMQMHUBVGNJOLUEFSZHJJEIPHHCFFFTSNNZGQQVTUVXRNCWMCKVHEOIYKCSDSTIGISUTWRIHOYFIZLKZOJKZIMHHMNMXKOIQIKDLLEEYEUTJTPVRJTGGLAYUHMBZUFWDRVLLDOSF");
    msg.acknowledge = 211U;
    msg.status = 5U;
    const char tmp_msg_0[] = {-9, 96, 47, 118, -96, -117, -77, -121, -90, 26, -41, 124, 5, -45, -86, -91, 82, 99, -91, 51, -86, -49, -59, 90, -89, -102, -48, -102, -94, 14, -118, -121, -57, -96, -19, -77, 35, -64, 121, 58, -108, -67, -54, 52, 61, -73, 36, 47, -65, -97, -110, 90, -65, 54, 105, 5, 81, -72, -14, -26, -89, 60, 106, 5, -56, 99, -119, -124, -11, -119, -31, 107, -80};
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
    msg.setTimeStamp(0.13483848019909006);
    msg.setSource(45343U);
    msg.setSourceEntity(167U);
    msg.setDestination(21178U);
    msg.setDestinationEntity(35U);
    msg.id = 138U;
    msg.range = 0.8329695247795272;

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
    msg.setTimeStamp(0.672358687140711);
    msg.setSource(2352U);
    msg.setSourceEntity(159U);
    msg.setDestination(54787U);
    msg.setDestinationEntity(63U);
    msg.id = 245U;
    msg.range = 0.09609362414770073;

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
    msg.setTimeStamp(0.6610199286826758);
    msg.setSource(39801U);
    msg.setSourceEntity(220U);
    msg.setDestination(59276U);
    msg.setDestinationEntity(253U);
    msg.id = 152U;
    msg.range = 0.5316383684033257;

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
    msg.setTimeStamp(0.7179750358059803);
    msg.setSource(6677U);
    msg.setSourceEntity(131U);
    msg.setDestination(5734U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("BZXVFFJAMILHLBPFCDYISFBFRUXOTNQOUSJMXVFLKEGGBOZTXWWYRAHOSBSHWFRPZFVSFTZCEYEWODAIAVESEWRKVPBKVWGFYYOQCUGBGAMDNERCENOJOMQHPCUJIAMAKONQDEJYQBPXZDYQNOMXCUKLYIRGITNVTXRGKHNIIHJJVZSANHLDLQQNLGPRNWIDCJLRIZUXHLALZVSSEWTUCBYMDXHPCUJADMKEYQPRMTBU");
    msg.lat = 0.04381887363821879;
    msg.lon = 0.40805467456619837;
    msg.depth = 0.0563087741179763;
    msg.query_channel = 132U;
    msg.reply_channel = 185U;
    msg.transponder_delay = 225U;

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
    msg.setTimeStamp(0.05814603933609608);
    msg.setSource(52743U);
    msg.setSourceEntity(58U);
    msg.setDestination(55871U);
    msg.setDestinationEntity(127U);
    msg.beacon.assign("AFHGPDHXJHTJLGLNQWGDBOMSYUAACXIISMZFOZHZSTJKTLFIQZODHJGSTLWUYBQDYICSUZAMTNKITXHOWKULEBMEYEJSGKNBOQVEGOWNUUDAEVQYMCIHZUFJAXXZV");
    msg.lat = 0.06408778943865923;
    msg.lon = 0.4972222814928794;
    msg.depth = 0.06569960305866895;
    msg.query_channel = 91U;
    msg.reply_channel = 200U;
    msg.transponder_delay = 89U;

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
    msg.setTimeStamp(0.5843408428493723);
    msg.setSource(29461U);
    msg.setSourceEntity(72U);
    msg.setDestination(47297U);
    msg.setDestinationEntity(129U);
    msg.beacon.assign("OIADBMXXAREJKPGCHOTUDCZWJIQTRGGBDJZHJGCQENFSWFLPYANUONLAHLNHDCYUPXRKCGFJSMVLMNDQOJVTPMARREWRVVLFTCBOCQHFJBAPWUDTJYWYZBPVEIYWFKMMXXIEWEOLQSXTYPOHQNWZGQYIBJOZRCMUBREVLTHUSSPDHWBIMKKDNPFZGKSOHGS");
    msg.lat = 0.32769912871947415;
    msg.lon = 0.7238755886483661;
    msg.depth = 0.2975706863011083;
    msg.query_channel = 119U;
    msg.reply_channel = 0U;
    msg.transponder_delay = 46U;

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
    msg.setTimeStamp(0.38259000328024495);
    msg.setSource(53532U);
    msg.setSourceEntity(202U);
    msg.setDestination(22602U);
    msg.setDestinationEntity(193U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.1661800305246598);
    msg.setSource(46629U);
    msg.setSourceEntity(46U);
    msg.setDestination(25077U);
    msg.setDestinationEntity(99U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.438258289967013);
    msg.setSource(26669U);
    msg.setSourceEntity(154U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(88U);
    msg.op = 120U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUVELHZTTBFGSQVDWETNRPKZEQMQXBKZWBLIWPVGKMCTHSOMPHAYNQULNJFKIEWDWYMDUYCHACGPBJGNWSMFBMJQIXQDSWVROTOVIRBATXOUKEISOHLLDZIRTVMKSKGETPGSPSFAZFTMGUYLXDZALNUXBHNHPIJJGRRZQIXRWWLXVAKUAARXHQNTYHQX");
    tmp_msg_0.lat = 0.8592493657483655;
    tmp_msg_0.lon = 0.7720944643719747;
    tmp_msg_0.depth = 0.5532324439103963;
    tmp_msg_0.query_channel = 129U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 157U;
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
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.18828899755441542);
    msg.setSource(37240U);
    msg.setSourceEntity(217U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(90U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 48226U;
    tmp_msg_0.type = 211U;
    tmp_msg_0.max_size = 1747U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.6965472374838478;
    tmp_tmp_msg_0_0.base_lon = 0.7699717549712575;
    tmp_tmp_msg_0_0.base_time = 0.2851799801712982;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8966025113376356);
    msg.setSource(38192U);
    msg.setSourceEntity(216U);
    msg.setDestination(29910U);
    msg.setDestinationEntity(184U);
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.546566194354452);
    msg.setSource(39843U);
    msg.setSourceEntity(141U);
    msg.setDestination(35031U);
    msg.setDestinationEntity(51U);
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("CZEFRIUHQPOIOSMXOGEFPJXDAOZWLJQTXDITXWJMULSKPRMAJMZADUTBIZEVSSUJQOKGHBRCVXETFDCPLQDKYBZLNCWYXANMOJQFOSKJDNOPCHRIWBFYXGRQHDRBRKWLQSHTZTNSEHGQZUFWZDKBAAJXP");
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
    msg.setTimeStamp(0.45029758364344274);
    msg.setSource(58327U);
    msg.setSourceEntity(61U);
    msg.setDestination(58537U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.5202451342122529;
    msg.lon = 0.31328390991539334;
    msg.depth = 0.28211830771590096;
    msg.sentence.assign("MVFCOGCIJOTETYRVJXLILXRPCHPDUXCPDJVVSRXGSIMRLCAZEZUNZQBZXUPMIBCXPXVXTKUPOBOTEBAGWSPCFOPLKUNTJYXYYZTFGNYOMFFRAAACKUHXHIZJONWQYQMJFRWGMKYHBUOJNKAKVOGOANBHPDIHVUGNLTEZGFRFESMKQTSHIJBKDHSQWWEYDSLHULLGJV");
    msg.txtime = 0.9477583444760058;
    msg.modem_type.assign("VMYLEUAOKHNXLYICZMCNJBKVEAKZZJFQODOETXHNHQFJHCGGFNKQSXKUPKHDWHSVZJCABPOQTESGBDSWOTHBMIRJPMMNMWLYQCLFRKVXIIZEJVJXTGYXCRVMFSIODPVEUWLNARJQSLBGWZNRIQDCGYZCUMDIFVAZDMFGPSKLOTDUCIXPEEWEONUNRZSKNFBWXBRYFWTLBDZOYIAGUUYMPSTBJURFTGQGCTJYKVHQPVETWHDAIRP");
    msg.sys_src.assign("YQUTEKGUEWWLBDSQQYOSNGZAHAVSTOCZCUBEKDTOXAFAEHCPHJPTCTBJNHLDQNRJTLETTURSLJRSQZSQXVFZEVDPSEPONKJZFRWMKFMZGMZNUIRYTXKMAHXOIXOFZPLKDWPWVZNMHMIFMWRQVWKJBGACEOIQYXGNPIKWRMPFOYUGDOLYIHVGQUEDKCARNJVCTASVJNSDJLNMIBFISLXBWHVGBECOGWDACHKZFAYGULYCBDVXRYUPQYXL");
    msg.seq = 46255U;
    msg.sys_dst.assign("QAQRCNIMZJSEGFAAUPQFKRXWLKGJBIKGGIVFWBVNSYNLSXLBESNMHYLHXJYXX");
    msg.flags = 253U;
    const char tmp_msg_0[] = {-56, -92, 110, 118, -101, 2, 27, -15, -7, 100, 55, 61, -19, -69, 125, 18, 121, 80, -8, -16, -17, 55, 31, -88, -61, -30, -37, -12, -91, -22, -11, -12, 29, 74, -61, 101, 29, 107, 110, 59, -35, -86, 33, -92, 70, -5, 66, -44, 96, -49, 91, 26, 113, 95, 69, -19, 26, -40, 57, -21, 84, -8, -85, -109, -80, -96, -17, -40, 19, -68, 102, -93, 52, -78, -18, 37, -14, 32, 91, -21, 41, -120, 25, 114, -99, 125, -109, -126, -61, -128, 60, 14, 20, -127, 26, 122, 35, 20, -28, -71, 104, -20, 10, 8, 83, -82, 85, -68, -32, -112, -122, -61, -114, 91, 121, -84, -43, -128, -64, 11, -120, 49, 72, 115, -60, -4, 70, 26, -43, -86, -100, 31, -37, 111, -6, -11, 108, -3, -28, 62, -127, 81, -63, -1, -110, 40, -22, 85, 7, -118, 101, -27, -103, 2, 9, 75, 95, -11, 12, -72, -59, 20, 7, -126, 58, 117, 16, -73, -39, -89, -59, -114, -85, 87, 53, 25, -7, 73, -17, -96, 86, 76, 55, 97};
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
    msg.setTimeStamp(0.18438605959540655);
    msg.setSource(48885U);
    msg.setSourceEntity(10U);
    msg.setDestination(49457U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.1552703611616595;
    msg.lon = 0.13766598261121965;
    msg.depth = 0.16169477098890594;
    msg.sentence.assign("XTCRKSTVOMAHFDRCQDYUELCSRIBDFNXCYBLHENAXGBBJCQDPVZKTXNPCLEFOYSUZEKIGMQGTJRPAMFCVYYGDKXWMDHPKOHOVHTCXHMQOAJTRGBJIKZVMKMNGEQXRMASVFAKCFTNOSFHVYBANHWEVFFPDQLEUUJLGRLJVOIJQCYGSTSBFWZNANUWBWJHWBURXJLSOLWLUYZNORAIUJVYNUYZWEHGKELMWQZIPADRGDIUMIPPPSQKWB");
    msg.txtime = 0.41840238429828025;
    msg.modem_type.assign("AXJNSDTHMEDMOSIAGUSXLKFQHJZRQXOGCUDHARYYXBFITFQJEJZNSFPLHADEYRGTAGOICKLEQCYOYNVFRNFHGARRCFJSSRPQAVBIWUNULDHDHKCYBKTTVJKQORMPZMETEXGPKUDQIPKZWAJPVCWMX");
    msg.sys_src.assign("WZAYPSYYPSRSPVIIVLDENPNAVVFRHFJZBVFEUTOXUBATSGZZNHMVBBIWUNYBCPWFCWAAOEDXZEIWLKTJQSSFYVQDOOYPVKTZXZOXJNJSRRFNCIGXAWJZFNF");
    msg.seq = 58866U;
    msg.sys_dst.assign("PNEBNVOZPTHCQTMXFQYOBFVCOGQTIJJPSQHRVFHBYSBDBWOVZEDJPKSHGNJZLSSEXETGMSPHEGZRXEDYLPRYOKNRNUVGRYIFPTEFOIXAVARWULALKSIGNGADJAQZDFPRLXNJMLKHCNQUKKATHXLIUCMWWGUFUCEYAJAVMBPVBZLXZTEHNHWDOQTQLXLDZSTWYADWTRICMWDGMZZCBMYJCFFOHYPRDNKUOSMOXFYRKBIKBCEVIWWJCUGJIQIX");
    msg.flags = 19U;
    const char tmp_msg_0[] = {118, -4, -23, -128, -118, -124, 30, -120, -47, -128, 122, 29, -76, 64, -79, 48, 125, -89, 95, -97, 18, 55, 12, -121, -31, 73, 42, -86, -50, -115, 80, 39, -92, 36, -105, -39, 25, -82, 17, 1};
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
    msg.setTimeStamp(0.16616632076213467);
    msg.setSource(35917U);
    msg.setSourceEntity(73U);
    msg.setDestination(50127U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.7525223801707034;
    msg.lon = 0.041051730719501967;
    msg.depth = 0.9081330093597799;
    msg.sentence.assign("OZZBTXSRAZJCTPMSJLYDEFTOLNMLGALVBXDXOHECMOJZQXXUJDUDPKIGQYANFCGDIHBKYHRHNWHHFSCYVVGAMDGXBNRLSUHIDCVEUFHUKGCPTIWFYPIVMCYSNOGQWFNLQNLWCLWTUQBWWYTEZDBZPJTWNNUPJUZKGXFZETYJMJSQXTQPFXRADYYBACQZ");
    msg.txtime = 0.3607756375647986;
    msg.modem_type.assign("PLMWIMRFHGWYZDAQDFICRCKXMWHYQMKEECZJXNPF");
    msg.sys_src.assign("PONTDUYJYMYEQWLOPVFNUPNSAYUZEMVQJIIAXLAKEQVZBHWYIXFLLNGTNVJCAZXQFFKWGRBLHSPGAMUITFEVGZOOWCZMQKWWGXSPCJXEEMPZCOJGYPOHRIDRMXOHBHFQORUQBPGYVSKCDTAPSJBWLDKIVSFKZRGYJHSQBWQNNUHBBCIRBGCDAUCDMWYVXESWAKZKDLTYUFRSXA");
    msg.seq = 14013U;
    msg.sys_dst.assign("UVTNLIPQOECGRHLKSKXPSFBEHVYYHXRGBDPTVMGCXSYPOFBTVQOJQHPBKHBIMVIOFDKYBRMAOTDFLCVFRHPLGHNLWEUYUQZWXXJKUGKUGRBKZBIXTROEIEDJLSDSAUMCWJWFWXQRXZVYSJRZFUPNNHEJBFQTGPTCJEDIKAUSPQWUAHAVNMKZMFAL");
    msg.flags = 221U;
    const char tmp_msg_0[] = {-81, -68, -59, -103, -104, 10, 93, 62, 118, -74, 88, -87};
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
    msg.setTimeStamp(0.9516698782233359);
    msg.setSource(43552U);
    msg.setSourceEntity(13U);
    msg.setDestination(30433U);
    msg.setDestinationEntity(101U);
    msg.op = 169U;
    msg.system.assign("LNPNWODDJKFHRZCCYMEEFZJTPEGHVQJJADAXPSZVJBHDAFPXUPBJKWCQRAEMWZBIRAQFERQMHBGOIUTMXLLJDEOWSCNUSSMPSETCMKTZNADSBZUVTLVCLYWFBRNNKDOEXOTKKGMTSFDRQVOMFDXIIAICLVJQGYFQL");
    msg.range = 0.5160165743378494;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("EWCFEEYZZNMCMGLIRDEULSPWRXRKMRBRXRHXUJUCUXOBUPVDCABMKXOC");
    tmp_msg_0.op = 146U;
    tmp_msg_0.lat = 0.5900680366184885;
    tmp_msg_0.lon = 0.8837085711861682;
    tmp_msg_0.height = 0.7794084524592126;
    tmp_msg_0.x = 0.49495986390895075;
    tmp_msg_0.y = 0.40363921549159754;
    tmp_msg_0.z = 0.6259184709468925;
    tmp_msg_0.phi = 0.6702293216330705;
    tmp_msg_0.theta = 0.7182468152727334;
    tmp_msg_0.psi = 0.8895985532651356;
    tmp_msg_0.vx = 0.41569659377656765;
    tmp_msg_0.vy = 0.2981214927014758;
    tmp_msg_0.vz = 0.7816159640801291;
    tmp_msg_0.p = 0.020602241604584015;
    tmp_msg_0.q = 0.9455114361586785;
    tmp_msg_0.r = 0.5554904495807418;
    tmp_msg_0.svx = 0.8300786730146813;
    tmp_msg_0.svy = 0.6159203136934013;
    tmp_msg_0.svz = 0.5673482696207337;
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
    msg.setTimeStamp(0.1785803268987609);
    msg.setSource(4391U);
    msg.setSourceEntity(135U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(31U);
    msg.op = 192U;
    msg.system.assign("EHATUNLYUNSCJSGWRYPMTVOBLAJTSCPDKEISYAXYHZGDBRAYLRJPGPFAVIUVSWFXRFPDJHHHTBQWWZPKORJFWXDBKQLGAGEZ");
    msg.range = 0.917374834765535;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.049499403236833106;
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
    msg.setTimeStamp(0.9239376206874009);
    msg.setSource(54465U);
    msg.setSourceEntity(107U);
    msg.setDestination(57545U);
    msg.setDestinationEntity(1U);
    msg.op = 177U;
    msg.system.assign("VGYFYTPKSUDAQWDZMAWCDSLUGWXHOBZWSHTGNJHZVXPCMKLFJQQCMAYJDXFUSGZATFQCMEGEHGQTQYLREWBHOINIQXJFVOROXECOKGZZXWSYIBBMBCCQDWXSUIYKEA");
    msg.range = 0.8948543540367513;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 15048U;
    tmp_msg_0.bearing = 0.749525840902608;
    tmp_msg_0.elevation = 0.6770296300406901;
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
    msg.setTimeStamp(0.1418731866114703);
    msg.setSource(44982U);
    msg.setSourceEntity(66U);
    msg.setDestination(13090U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.3916771729224341);
    msg.setSource(40088U);
    msg.setSourceEntity(41U);
    msg.setDestination(15264U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.5107169947190198);
    msg.setSource(36750U);
    msg.setSourceEntity(57U);
    msg.setDestination(5288U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.8873419390843023);
    msg.setSource(9769U);
    msg.setSourceEntity(147U);
    msg.setDestination(2189U);
    msg.setDestinationEntity(12U);
    msg.list.assign("AORWRCAUASQGZSEFXXDYUANLTTSBINBMMNBZHORCPRPDEVSKKOLRFZMXOHVJOGLESMUXBODJEAOJREJQSGYHPBFRBV");

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
    msg.setTimeStamp(0.14031085398027376);
    msg.setSource(49578U);
    msg.setSourceEntity(241U);
    msg.setDestination(59003U);
    msg.setDestinationEntity(186U);
    msg.list.assign("SEDYXJWSNUKZUQILNGWPAJSAURWGNDOYHCMFXPOIIANSYHCGLUKDVXSQQMFIOHZRJBXPFAHFFMTXKWWBFRILOBWSNUFLRGGMUXIMDCOCKPVKTHTPRHVBJUHDEPNRZMKYSABJFYDTYLFQOCEZSUAOJGLVEPCSGDJIJZBMT");

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
    msg.setTimeStamp(0.29894996882041247);
    msg.setSource(3449U);
    msg.setSourceEntity(132U);
    msg.setDestination(49740U);
    msg.setDestinationEntity(43U);
    msg.list.assign("FHNRQUNGTBVAPXAANVGABWAFCMESFTEDVBWRSYAXZJQYHSGJCJFZAJZLQNCLULZEYDWXHODAQOPRIOWBAOWSFLPYEWDNYNWKTHRPTALKJRENPXHPFYEIGGIEWNQQJTVUOVSYOFGZITXPXXODTFCQOIXUKVTGBKYZSODJVJIDUHDBVIHMBQLGWBHTELGVXFDKMYHPGMRUMXJRQSRUMDSUCMCBCRNKBUPZEYMZNVCUCLKICLSMIJQ");

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
    msg.setTimeStamp(0.16864367864038976);
    msg.setSource(39237U);
    msg.setSourceEntity(155U);
    msg.setDestination(34796U);
    msg.setDestinationEntity(227U);
    msg.peer.assign("NWQXSPXBRQUKVPWWSQMKOSUJYSFLTKLYOCBDIQEYHTDXBBEDNLCMGFAZEQAPVCYLWSIWFZLDTJEAJLPQDAHMXRJSRJJZPAAVNIBLNRVYILPRUZNWJUWQIZZLSKSTBXGCCQV");
    msg.rssi = 0.22291798398604;
    msg.integrity = 19053U;

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
    msg.setTimeStamp(0.36810488395433294);
    msg.setSource(56709U);
    msg.setSourceEntity(103U);
    msg.setDestination(64950U);
    msg.setDestinationEntity(157U);
    msg.peer.assign("KUZLVVVXTAQKXRMUQQDZOFJHUUEDFCWMCTUAPOMXGDGBOLUEFXSKJKCZVBKSCFAQPKPUSKMBJGZQXFPWHDIRZRHQMLZCWNLVOBTTVH");
    msg.rssi = 0.1033773785790919;
    msg.integrity = 50133U;

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
    msg.setTimeStamp(0.6451867889106685);
    msg.setSource(23994U);
    msg.setSourceEntity(51U);
    msg.setDestination(60125U);
    msg.setDestinationEntity(120U);
    msg.peer.assign("VGAOFVDDBJSJUPCGTYSIMGIFIIXYRXTOQEVHHXYZSAKNGKKHSDCNTKMHUOAHVIMVOGLJPAFBZADCWYFMMKWCRYNROTKUPZBTQUMINHCUKAXDLDOODZQEIPZRFCGDRPTGBZVCLWBEPTPSYWCCNWKPLGOWKIRHQMNWGSYQLLEPQSEZULJWXUSOMXZANQUVCEERQJPANUFFYJQMRLYJVLEHIOFXDEGBBRXAWAXISWMDJVJBQFVSNULTNRBXTYZ");
    msg.rssi = 0.9974440038901486;
    msg.integrity = 8067U;

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
    msg.setTimeStamp(0.5528604602513624);
    msg.setSource(22609U);
    msg.setSourceEntity(228U);
    msg.setDestination(41830U);
    msg.setDestinationEntity(208U);
    msg.req_id = 25016U;
    msg.destination.assign("MEVEEIUBYUIOHYGKDKSIALQMQMFKNIXPOJVESKVGSHEUFAZIULHQOKSRBPAIPBQSPUDOIJTOALTJEONFEXBNXXSYQCCMRVUPTEWIDWEDV");
    msg.timeout = 0.06391389724879715;
    msg.range = 0.4882529478458084;
    msg.type = 146U;
    IMC::SonarPulse tmp_msg_0;
    tmp_msg_0.frequency = -1146502712;
    tmp_msg_0.pulse_length = -1392733347;
    tmp_msg_0.time_delay = -2111826261;
    tmp_msg_0.simulated_speed = -108935967;
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
    msg.setTimeStamp(0.15565500735507642);
    msg.setSource(4435U);
    msg.setSourceEntity(89U);
    msg.setDestination(25931U);
    msg.setDestinationEntity(146U);
    msg.req_id = 1225U;
    msg.destination.assign("RSVZDVJHBQYOEGYXUREFJSCWGCZQPHHRQSWGCNIEDAZNIIQNDLFKKIHYGXPJQTQFZDVJRGYKSCRYPMPAZCIERMMNLVIJNJLKBGFLXKJATRHXYFWJCXVSJRUWLOLTVNENUELPVOLDQOHZYWAFEBLTXMMCABBCZUHHONIBFOYRKXTAPVMLWUAXKNPMUMSOMIGDDQHIIKJZGDZECSSVVBOTPNBAFWAHKKAUZYWPEXMRGDQUBXOOTUT");
    msg.timeout = 0.5182849857540445;
    msg.range = 0.5594780904731395;
    msg.type = 8U;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 54568U;
    tmp_msg_0.x = 0.14859152109221985;
    tmp_msg_0.y = 0.4606007018150521;
    tmp_msg_0.z = 0.5889390971477348;
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
    msg.setTimeStamp(0.48460500963815545);
    msg.setSource(1281U);
    msg.setSourceEntity(86U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(147U);
    msg.req_id = 8928U;
    msg.destination.assign("IEOAHUYQRDGKJRZXBEIKNXLGLSJQELNRDVMJAAFKQYBNLZNWUIQMMPZBTYTYXBXHRTEASDGPHIJYKDHHWNYWCUFGFWGUDEBDXNLVITMKQEMWFLWNMIUTDFPVVQZSLVMIVGXMIHUKZFRCJUCJCFAKGYHQEAFVJICYOLNOZHGTMXXPVPNPVOBBYKBCOWPIWXSHTMAYPUHSKNTADDRSJBZQDSQTGUOWSR");
    msg.timeout = 0.33858170853366754;
    msg.range = 0.20490930674821328;
    msg.type = 177U;
    IMC::WorldModel tmp_msg_0;
    IMC::GeoFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.feature_id = 28267U;
    tmp_msg_0.geo_features.push_back(tmp_tmp_msg_0_0);
    IMC::CoverageState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.feature_id = 19622U;
    tmp_tmp_msg_0_1.state = 21U;
    tmp_msg_0.cov_states.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.8863625402688098);
    msg.setSource(11047U);
    msg.setSourceEntity(130U);
    msg.setDestination(46911U);
    msg.setDestinationEntity(117U);
    msg.req_id = 40441U;
    msg.type = 110U;
    msg.status = 106U;
    msg.info.assign("QSXJZYOFHWRGVWOOACCMINPTFFSPLQDZTWGEEUVGEFBKBVDGDZQZPIKHHUTOYEJCOYKURIZGGRCQZIHZDMIEFSGLMDBFYXMWGYGNCJRXHOHLAKFMKJRTYSNSPQXJAMVBDVLHEBWXIMLVEYB");
    msg.range = 0.35468247084840787;

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
    msg.setTimeStamp(0.14422052091770632);
    msg.setSource(51947U);
    msg.setSourceEntity(87U);
    msg.setDestination(39079U);
    msg.setDestinationEntity(229U);
    msg.req_id = 6823U;
    msg.type = 75U;
    msg.status = 66U;
    msg.info.assign("VBBFDVKSWGPLWLJMCPOERUQLCKUUNIOWEAZXVGGXMZBHJGORYFYVHYLZQCQGCAJJTNWMRKDTAFGKATYPJOPZSMZIGWJZSWCKFMIPTBMBYEQIIPDYTEKHQVURQCUNJDTGDAEWEISLXMTDNURQYNJZLNEHQMZRLRNUKHZAXEYIROVVHFEMAUOBKDDSKACGXXXSUCTNPXWFBRTOTVSBBCOHYFIUVSSAFQDEOI");
    msg.range = 0.5764696295025943;

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
    msg.setTimeStamp(0.8239664587107126);
    msg.setSource(4512U);
    msg.setSourceEntity(173U);
    msg.setDestination(54617U);
    msg.setDestinationEntity(142U);
    msg.req_id = 30944U;
    msg.type = 61U;
    msg.status = 189U;
    msg.info.assign("GDTRRNZBAXFDTREJSWTCEQYQCTNVZOLQWYFBBUFYVMMQPLHHTOWIGJGGWSPTDRWOAZUQXXKTVHVSPNRDHWWVEPNGGMVYAXINBZOUYPUMPFNYQCZZCPKSESISAHMCGTRLLKOGZITCABQAJJNQSHRHKORJKAEJXIBYDEMJFNEYCDORNVHCUKJLSDZCOEPFUKKEUKUMWXHIBLMOFABTXWXMVAUPDIEIFQDXXPLZKFMFILNOZDYG");
    msg.range = 0.6262676717828101;

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
    msg.setTimeStamp(0.1584711599188099);
    msg.setSource(8018U);
    msg.setSourceEntity(203U);
    msg.setDestination(24612U);
    msg.setDestinationEntity(97U);
    msg.value = 19467;

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
    msg.setTimeStamp(0.7860183649339417);
    msg.setSource(51452U);
    msg.setSourceEntity(40U);
    msg.setDestination(6507U);
    msg.setDestinationEntity(148U);
    msg.value = -23825;

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
    msg.setTimeStamp(0.07378720087569057);
    msg.setSource(12303U);
    msg.setSourceEntity(243U);
    msg.setDestination(7633U);
    msg.setDestinationEntity(223U);
    msg.value = -26951;

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
    msg.setTimeStamp(0.7850298619986312);
    msg.setSource(44315U);
    msg.setSourceEntity(178U);
    msg.setDestination(1407U);
    msg.setDestinationEntity(61U);
    msg.value = 0.13818741278753854;

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
    msg.setTimeStamp(0.18002161291514895);
    msg.setSource(63656U);
    msg.setSourceEntity(58U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(91U);
    msg.value = 0.13347420354605333;

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
    msg.setTimeStamp(0.013582173780675832);
    msg.setSource(53496U);
    msg.setSourceEntity(64U);
    msg.setDestination(5666U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5098861496284274;

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
    msg.setTimeStamp(0.15660083793578794);
    msg.setSource(13389U);
    msg.setSourceEntity(152U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(177U);
    msg.value = 0.34094889911231296;

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
    msg.setTimeStamp(0.05489815619768734);
    msg.setSource(44111U);
    msg.setSourceEntity(133U);
    msg.setDestination(7U);
    msg.setDestinationEntity(196U);
    msg.value = 0.31478728841307013;

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
    msg.setTimeStamp(0.8945369355728301);
    msg.setSource(63690U);
    msg.setSourceEntity(110U);
    msg.setDestination(23516U);
    msg.setDestinationEntity(57U);
    msg.value = 0.22405091795640608;

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
    msg.setTimeStamp(0.39627566548965865);
    msg.setSource(15629U);
    msg.setSourceEntity(0U);
    msg.setDestination(56943U);
    msg.setDestinationEntity(146U);
    msg.validity = 6362U;
    msg.type = 27U;
    msg.utc_year = 17940U;
    msg.utc_month = 196U;
    msg.utc_day = 94U;
    msg.utc_time = 0.8251604531236927;
    msg.lat = 0.0464199494780404;
    msg.lon = 0.5158278699990303;
    msg.height = 0.8940722906693154;
    msg.satellites = 161U;
    msg.cog = 0.3762769994128552;
    msg.sog = 0.665481596138449;
    msg.hdop = 0.4224473807849254;
    msg.vdop = 0.040436544804060004;
    msg.hacc = 0.12044544347511443;
    msg.vacc = 0.5474603860577238;

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
    msg.setTimeStamp(0.6538897628780228);
    msg.setSource(64631U);
    msg.setSourceEntity(181U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(123U);
    msg.validity = 17614U;
    msg.type = 38U;
    msg.utc_year = 33978U;
    msg.utc_month = 236U;
    msg.utc_day = 221U;
    msg.utc_time = 0.17218437411634724;
    msg.lat = 0.360419470505591;
    msg.lon = 0.7145739879941919;
    msg.height = 0.5036942462288471;
    msg.satellites = 128U;
    msg.cog = 0.5286021081097835;
    msg.sog = 0.33906074829631505;
    msg.hdop = 0.5317181254993064;
    msg.vdop = 0.35060242070410963;
    msg.hacc = 0.9716836709012644;
    msg.vacc = 0.3113894808185549;

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
    msg.setTimeStamp(0.40474599499894015);
    msg.setSource(57369U);
    msg.setSourceEntity(13U);
    msg.setDestination(35717U);
    msg.setDestinationEntity(92U);
    msg.validity = 52100U;
    msg.type = 58U;
    msg.utc_year = 3436U;
    msg.utc_month = 11U;
    msg.utc_day = 183U;
    msg.utc_time = 0.31980901646663895;
    msg.lat = 0.30434434037329294;
    msg.lon = 0.53425693723759;
    msg.height = 0.3075707387455331;
    msg.satellites = 59U;
    msg.cog = 0.38194563196025644;
    msg.sog = 0.36804493026272034;
    msg.hdop = 0.0799560173722399;
    msg.vdop = 0.35876134488212297;
    msg.hacc = 0.5057818660692134;
    msg.vacc = 0.013280492488140672;

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
    msg.setTimeStamp(0.8643626541946211);
    msg.setSource(46792U);
    msg.setSourceEntity(230U);
    msg.setDestination(54365U);
    msg.setDestinationEntity(167U);
    msg.time = 0.6395197485744019;
    msg.phi = 0.5757119437085596;
    msg.theta = 0.5818356066203928;
    msg.psi = 0.007987760144068212;
    msg.psi_magnetic = 0.26887279724976587;

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
    msg.setTimeStamp(0.9279723768678223);
    msg.setSource(19694U);
    msg.setSourceEntity(199U);
    msg.setDestination(1081U);
    msg.setDestinationEntity(81U);
    msg.time = 0.8913323973177071;
    msg.phi = 0.8152591616565785;
    msg.theta = 0.0031622666378439135;
    msg.psi = 0.830535278404077;
    msg.psi_magnetic = 0.14217030626408966;

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
    msg.setTimeStamp(0.6882654553632778);
    msg.setSource(33831U);
    msg.setSourceEntity(39U);
    msg.setDestination(27652U);
    msg.setDestinationEntity(242U);
    msg.time = 0.4317584053183109;
    msg.phi = 0.8846280429987445;
    msg.theta = 0.6378359703634213;
    msg.psi = 0.9037207942725328;
    msg.psi_magnetic = 0.7946294839166912;

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
    msg.setTimeStamp(0.28258367326503675);
    msg.setSource(12115U);
    msg.setSourceEntity(187U);
    msg.setDestination(20640U);
    msg.setDestinationEntity(151U);
    msg.time = 0.006442995650614236;
    msg.x = 0.2074947621511013;
    msg.y = 0.41392821685979;
    msg.z = 0.6929140327317398;
    msg.timestep = 0.8946706353127807;

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
    msg.setTimeStamp(0.9427577725406179);
    msg.setSource(49130U);
    msg.setSourceEntity(174U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(21U);
    msg.time = 0.005858831662932884;
    msg.x = 0.82912837812289;
    msg.y = 0.7449868937833773;
    msg.z = 0.7603270079994668;
    msg.timestep = 0.9228753420674835;

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
    msg.setTimeStamp(0.8921996123173183);
    msg.setSource(38473U);
    msg.setSourceEntity(253U);
    msg.setDestination(43681U);
    msg.setDestinationEntity(217U);
    msg.time = 0.5197749204026819;
    msg.x = 0.7979587717434418;
    msg.y = 0.43033521546411413;
    msg.z = 0.12027972287606004;
    msg.timestep = 0.374627203323295;

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
    msg.setTimeStamp(0.424822689603368);
    msg.setSource(39498U);
    msg.setSourceEntity(190U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(93U);
    msg.time = 0.09799428095618556;
    msg.x = 0.8460407373601114;
    msg.y = 0.07486765978421073;
    msg.z = 0.32724065345911524;

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
    msg.setTimeStamp(0.3159886437116197);
    msg.setSource(38588U);
    msg.setSourceEntity(48U);
    msg.setDestination(36963U);
    msg.setDestinationEntity(117U);
    msg.time = 0.2073566292307759;
    msg.x = 0.8664692909130637;
    msg.y = 0.5946754713111033;
    msg.z = 0.045779901602986395;

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
    msg.setTimeStamp(0.6509988127314584);
    msg.setSource(25325U);
    msg.setSourceEntity(236U);
    msg.setDestination(24986U);
    msg.setDestinationEntity(125U);
    msg.time = 0.31772939199698247;
    msg.x = 0.19566832594313288;
    msg.y = 0.3375862574046171;
    msg.z = 0.6956933993867359;

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
    msg.setTimeStamp(0.03484040042394965);
    msg.setSource(35614U);
    msg.setSourceEntity(4U);
    msg.setDestination(26633U);
    msg.setDestinationEntity(164U);
    msg.time = 0.7433154788330386;
    msg.x = 0.28352887157804296;
    msg.y = 0.44778077719982523;
    msg.z = 0.1676105148656184;

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
    msg.setTimeStamp(0.8988575855032961);
    msg.setSource(3841U);
    msg.setSourceEntity(158U);
    msg.setDestination(6074U);
    msg.setDestinationEntity(246U);
    msg.time = 0.1680683131432189;
    msg.x = 0.6980097531530741;
    msg.y = 0.19704211361964685;
    msg.z = 0.9840845300212158;

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
    msg.setTimeStamp(0.6383168103446363);
    msg.setSource(4318U);
    msg.setSourceEntity(186U);
    msg.setDestination(1976U);
    msg.setDestinationEntity(69U);
    msg.time = 0.04645451141230095;
    msg.x = 0.8270899029125299;
    msg.y = 0.1323461636402231;
    msg.z = 0.3597392137677765;

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
    msg.setTimeStamp(0.3658732071797943);
    msg.setSource(64995U);
    msg.setSourceEntity(47U);
    msg.setDestination(21581U);
    msg.setDestinationEntity(224U);
    msg.time = 0.7677019650685174;
    msg.x = 0.8833172017484137;
    msg.y = 0.5985752115067884;
    msg.z = 0.5970686873750124;

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
    msg.setTimeStamp(0.7454152486608423);
    msg.setSource(11178U);
    msg.setSourceEntity(147U);
    msg.setDestination(46896U);
    msg.setDestinationEntity(38U);
    msg.time = 0.9714711790092567;
    msg.x = 0.5434647912424923;
    msg.y = 0.46700510537082596;
    msg.z = 0.28345389290850054;

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
    msg.setTimeStamp(0.991421324992504);
    msg.setSource(37780U);
    msg.setSourceEntity(248U);
    msg.setDestination(19412U);
    msg.setDestinationEntity(140U);
    msg.time = 0.06142887025735344;
    msg.x = 0.0334471988805799;
    msg.y = 0.34884056815924125;
    msg.z = 0.7757899223149951;

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
    msg.setTimeStamp(0.7398013535325902);
    msg.setSource(259U);
    msg.setSourceEntity(43U);
    msg.setDestination(31475U);
    msg.setDestinationEntity(178U);
    msg.validity = 35U;
    msg.x = 0.9706484066883229;
    msg.y = 0.01120522913025801;
    msg.z = 0.6892451968298553;

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
    msg.setTimeStamp(0.8511156637525931);
    msg.setSource(40485U);
    msg.setSourceEntity(253U);
    msg.setDestination(22314U);
    msg.setDestinationEntity(50U);
    msg.validity = 193U;
    msg.x = 0.34590312809271795;
    msg.y = 0.8095190835343352;
    msg.z = 0.7238084860685301;

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
    msg.setTimeStamp(0.25898952569568734);
    msg.setSource(3094U);
    msg.setSourceEntity(202U);
    msg.setDestination(51752U);
    msg.setDestinationEntity(53U);
    msg.validity = 213U;
    msg.x = 0.5487681132984624;
    msg.y = 0.3347762786149545;
    msg.z = 0.6882705415837284;

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
    msg.setTimeStamp(0.33222665201366774);
    msg.setSource(36980U);
    msg.setSourceEntity(143U);
    msg.setDestination(8561U);
    msg.setDestinationEntity(164U);
    msg.validity = 212U;
    msg.x = 0.5339013454055478;
    msg.y = 0.8609724896530933;
    msg.z = 0.45305575823986133;

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
    msg.setTimeStamp(0.5858067156062782);
    msg.setSource(22165U);
    msg.setSourceEntity(44U);
    msg.setDestination(55844U);
    msg.setDestinationEntity(161U);
    msg.validity = 173U;
    msg.x = 0.1334718297125359;
    msg.y = 0.4524381198047478;
    msg.z = 0.5241477589262912;

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
    msg.setTimeStamp(0.07951710773019571);
    msg.setSource(26857U);
    msg.setSourceEntity(24U);
    msg.setDestination(4325U);
    msg.setDestinationEntity(169U);
    msg.validity = 167U;
    msg.x = 0.7912392313021073;
    msg.y = 0.17987094967246053;
    msg.z = 0.9316046842240854;

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
    msg.setTimeStamp(0.38421136184488147);
    msg.setSource(43085U);
    msg.setSourceEntity(79U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(183U);
    msg.time = 0.4302079021224978;
    msg.x = 0.9078657204154166;
    msg.y = 0.800929832313176;
    msg.z = 0.7986781218298562;

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
    msg.setTimeStamp(0.8455729177149715);
    msg.setSource(1583U);
    msg.setSourceEntity(235U);
    msg.setDestination(2636U);
    msg.setDestinationEntity(234U);
    msg.time = 0.6832486212922627;
    msg.x = 0.6708635488437609;
    msg.y = 0.2737519637408148;
    msg.z = 0.031116485158075413;

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
    msg.setTimeStamp(0.5858776152433097);
    msg.setSource(38758U);
    msg.setSourceEntity(173U);
    msg.setDestination(54869U);
    msg.setDestinationEntity(206U);
    msg.time = 0.7770240440429411;
    msg.x = 0.007483808218499366;
    msg.y = 0.12826382910696832;
    msg.z = 0.9205671138014849;

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
    msg.setTimeStamp(0.17234416071768355);
    msg.setSource(11117U);
    msg.setSourceEntity(224U);
    msg.setDestination(14930U);
    msg.setDestinationEntity(212U);
    msg.validity = 18U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7438168869597807;
    tmp_msg_0.y = 0.14933744415527062;
    tmp_msg_0.z = 0.2008759289863702;
    tmp_msg_0.phi = 0.09461455170393962;
    tmp_msg_0.theta = 0.3467342362851171;
    tmp_msg_0.psi = 0.9053178215967718;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8337764956202057;

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
    msg.setTimeStamp(0.3217931643031309);
    msg.setSource(62471U);
    msg.setSourceEntity(1U);
    msg.setDestination(64972U);
    msg.setDestinationEntity(105U);
    msg.validity = 74U;
    msg.value = 0.6405789015681815;

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
    msg.setTimeStamp(0.9635532909638228);
    msg.setSource(50452U);
    msg.setSourceEntity(26U);
    msg.setDestination(52366U);
    msg.setDestinationEntity(155U);
    msg.validity = 232U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8947073028163871;
    tmp_msg_0.y = 0.9583480379120135;
    tmp_msg_0.z = 0.0652479322113122;
    tmp_msg_0.phi = 0.47284619568665076;
    tmp_msg_0.theta = 0.7502634146333965;
    tmp_msg_0.psi = 0.9383911987298124;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5045222411648728;

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
    msg.setTimeStamp(0.5546536229374619);
    msg.setSource(2483U);
    msg.setSourceEntity(143U);
    msg.setDestination(27807U);
    msg.setDestinationEntity(164U);
    msg.value = 0.22919708211239054;

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
    msg.setTimeStamp(0.475992313722043);
    msg.setSource(61540U);
    msg.setSourceEntity(206U);
    msg.setDestination(15029U);
    msg.setDestinationEntity(239U);
    msg.value = 0.001403347647166986;

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
    msg.setTimeStamp(0.6273490522663482);
    msg.setSource(2142U);
    msg.setSourceEntity(106U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(168U);
    msg.value = 0.8973543263341532;

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
    msg.setTimeStamp(0.9023014895711399);
    msg.setSource(1353U);
    msg.setSourceEntity(6U);
    msg.setDestination(340U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8021986483121194;

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
    msg.setTimeStamp(0.957398916228549);
    msg.setSource(26307U);
    msg.setSourceEntity(127U);
    msg.setDestination(38123U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8958225253984886;

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
    msg.setTimeStamp(0.7647707847919586);
    msg.setSource(65215U);
    msg.setSourceEntity(101U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(215U);
    msg.value = 0.8021401539884628;

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
    msg.setTimeStamp(0.04603023472830303);
    msg.setSource(28781U);
    msg.setSourceEntity(117U);
    msg.setDestination(58359U);
    msg.setDestinationEntity(166U);
    msg.value = 0.26041282901995544;

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
    msg.setTimeStamp(0.2642618077169152);
    msg.setSource(7130U);
    msg.setSourceEntity(168U);
    msg.setDestination(32512U);
    msg.setDestinationEntity(91U);
    msg.value = 0.08461370260391843;

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
    msg.setTimeStamp(0.36328918447166714);
    msg.setSource(29303U);
    msg.setSourceEntity(86U);
    msg.setDestination(63610U);
    msg.setDestinationEntity(177U);
    msg.value = 0.804076072041114;

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
    msg.setTimeStamp(0.525249341277971);
    msg.setSource(42902U);
    msg.setSourceEntity(14U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(199U);
    msg.value = 0.05280931982254544;

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
    msg.setTimeStamp(0.4845580276955497);
    msg.setSource(1875U);
    msg.setSourceEntity(71U);
    msg.setDestination(19939U);
    msg.setDestinationEntity(95U);
    msg.value = 0.5981801447739735;

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
    msg.setTimeStamp(0.4202971176931102);
    msg.setSource(51622U);
    msg.setSourceEntity(212U);
    msg.setDestination(42007U);
    msg.setDestinationEntity(99U);
    msg.value = 0.06446711188203869;

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
    msg.setTimeStamp(0.9474929713811895);
    msg.setSource(36353U);
    msg.setSourceEntity(76U);
    msg.setDestination(696U);
    msg.setDestinationEntity(26U);
    msg.value = 0.3920419667429702;

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
    msg.setTimeStamp(0.7751566668256032);
    msg.setSource(20857U);
    msg.setSourceEntity(101U);
    msg.setDestination(49277U);
    msg.setDestinationEntity(132U);
    msg.value = 0.2775801058754255;

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
    msg.setTimeStamp(0.6062318015411666);
    msg.setSource(22778U);
    msg.setSourceEntity(28U);
    msg.setDestination(54734U);
    msg.setDestinationEntity(180U);
    msg.value = 0.7638509140927308;

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
    msg.setTimeStamp(0.34201968318921694);
    msg.setSource(44699U);
    msg.setSourceEntity(135U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(162U);
    msg.value = 0.7722817808424518;

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
    msg.setTimeStamp(0.8017027857659547);
    msg.setSource(23906U);
    msg.setSourceEntity(10U);
    msg.setDestination(27939U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7640744711554053;

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
    msg.setTimeStamp(0.9890459612479037);
    msg.setSource(40698U);
    msg.setSourceEntity(6U);
    msg.setDestination(23601U);
    msg.setDestinationEntity(202U);
    msg.value = 0.14729555391660154;

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
    msg.setTimeStamp(0.9288891151594456);
    msg.setSource(1455U);
    msg.setSourceEntity(204U);
    msg.setDestination(3660U);
    msg.setDestinationEntity(10U);
    msg.value = 0.043872178518819416;

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
    msg.setTimeStamp(0.3470172965477064);
    msg.setSource(4484U);
    msg.setSourceEntity(50U);
    msg.setDestination(55594U);
    msg.setDestinationEntity(108U);
    msg.value = 0.07220932794391932;

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
    msg.setTimeStamp(0.7421984562056717);
    msg.setSource(63125U);
    msg.setSourceEntity(6U);
    msg.setDestination(29298U);
    msg.setDestinationEntity(249U);
    msg.value = 0.3095857027448995;

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
    msg.setTimeStamp(0.3204256309268967);
    msg.setSource(10045U);
    msg.setSourceEntity(156U);
    msg.setDestination(41289U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7955521211929507;

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
    msg.setTimeStamp(0.08322363327679527);
    msg.setSource(65412U);
    msg.setSourceEntity(37U);
    msg.setDestination(9195U);
    msg.setDestinationEntity(72U);
    msg.value = 0.48946820672174896;

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
    msg.setTimeStamp(0.5299371982924732);
    msg.setSource(45757U);
    msg.setSourceEntity(182U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5086646982042796;

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
    msg.setTimeStamp(0.7479514174215365);
    msg.setSource(19656U);
    msg.setSourceEntity(80U);
    msg.setDestination(57295U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.84769129431978;
    msg.speed = 0.7840965081537506;
    msg.turbulence = 0.8613248257838529;

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
    msg.setTimeStamp(0.8049949050275922);
    msg.setSource(5192U);
    msg.setSourceEntity(112U);
    msg.setDestination(10442U);
    msg.setDestinationEntity(188U);
    msg.direction = 0.5404615247094049;
    msg.speed = 0.5770011639409636;
    msg.turbulence = 0.5440076810208125;

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
    msg.setTimeStamp(0.7115379145626975);
    msg.setSource(23230U);
    msg.setSourceEntity(178U);
    msg.setDestination(6141U);
    msg.setDestinationEntity(123U);
    msg.direction = 0.4323756128623052;
    msg.speed = 0.3967247399865559;
    msg.turbulence = 0.7816616879001544;

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
    msg.setTimeStamp(0.5115197991944737);
    msg.setSource(60998U);
    msg.setSourceEntity(58U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8306478574261068;

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
    msg.setTimeStamp(0.7253703541154526);
    msg.setSource(7717U);
    msg.setSourceEntity(94U);
    msg.setDestination(59658U);
    msg.setDestinationEntity(91U);
    msg.value = 0.9729409446990281;

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
    msg.setTimeStamp(0.35355755629375996);
    msg.setSource(25090U);
    msg.setSourceEntity(47U);
    msg.setDestination(53008U);
    msg.setDestinationEntity(62U);
    msg.value = 0.5145519660346001;

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
    msg.setTimeStamp(0.738525642893325);
    msg.setSource(22678U);
    msg.setSourceEntity(94U);
    msg.setDestination(59021U);
    msg.setDestinationEntity(73U);
    msg.value.assign("XFDORHZSHBTWKEFYTZBEWPSRDOODMDCEJGSB");

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
    msg.setTimeStamp(0.7004796344268829);
    msg.setSource(9755U);
    msg.setSourceEntity(201U);
    msg.setDestination(21256U);
    msg.setDestinationEntity(53U);
    msg.value.assign("HFHSTHGNLXQMIEWRBZDDFGDSIIBYWRFYUNRKQWOYGUWIKEVWVCPIIADKXXLEDTNWXLYIXHTAFOJQWBXFLZPMWSZNABMLUIMGEAJKFHGQSRGTKZNCBBGZXKHKMSLSRQEUBJIBMTEMRVTVVRQYVLBPNUIYNNVJHSODGQPOOUPZFCKPCADPJTXUCALZCQUNWCHLSDPRCWFAMPTYQHTEB");

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
    msg.setTimeStamp(0.08594729460081774);
    msg.setSource(49246U);
    msg.setSourceEntity(111U);
    msg.setDestination(109U);
    msg.setDestinationEntity(99U);
    msg.value.assign("LGETTKWYLCVTLGOOIAEDPNCWFJLROMCLYYEKWHGQWXDOZFFSQTCQXOYGVTYUTXSRVFZHZDAKEWJULIUGVJKXBNDRMJYYOWAEDTHSTHNNPUXOFWWWASGOSAGDRKURVCNVDRNCAFUFBPRBLMBIJKQMEEOMPKHICVYMUHIKXZSQAAKMBHSIHSENYMDJSCAXBICPXBNZFGELJQWD");

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
    msg.setTimeStamp(0.6619335455410239);
    msg.setSource(50974U);
    msg.setSourceEntity(195U);
    msg.setDestination(21672U);
    msg.setDestinationEntity(187U);
    const char tmp_msg_0[] = {82, 96, -12, -82, -32, -74, 1, -61, -49, -120, -36, -44, 16, 59, -31, 58, 123, -53, 48, -1, 56, 22, 83, 118, -99, -52, 110, 22, -120, 32, 102, 104, -111, 27, 106, 109, 20, 75, -25, -59, 34, 25, -57, 77, 61, 92, -77, 13, -54, -51, 60, -57, 86, 96, -7, 59, 118, -41, 122, -10, -125, 4, 24, 16, -127, 1, -81, -69, 59, -2, -122, -47, 104, 93, 77, -22, 29, 99, 19, -56, 107, 21, 78, -123, 46, -73, -11, 29, 58, -52, -64, -50, 120, 123, -14, -75, 12, -96, 49, 36, -80, -13, -120, -28, -105, -91, -93, -2, -30, -123, 89, 78, 102, -45, -65, -52, 70, -127, -65, -100, 31, 76, -82, -121, -2, -112, 15, -93, -32, -83, 62, -31, -113, -102, -65, -105, 122, -117, 34, -93, -108, 98, 14, 52, -115, -107, -66, -57, 45, -46, -73, 55, 105, 43, -16, 63, -87, 22, -26, 82, 75, 108, -1, -102, -79, -33, 101, -98, -89, -54, -25, 73, 24, 88, -29, 59, 126, -64, -34, -16, 113, 120, -51, 101, 86, 30, 96, 31, 99, -40, -117, 45, -31, 77, -48, -38, 28, -125, -51, -60, -7, 38, -117, -52, 32, 25, 33, -94, 77, -89, 50, 84, -93, -80, 110, -77, 115, -62, -119, -115, 12, -63, -109, 114, 115, 103, 15, -102, -65, 43, 76, -109, 117, 87, -33, -52, -50, -12, 94, 101};
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
    msg.setTimeStamp(0.35190963620074467);
    msg.setSource(18U);
    msg.setSourceEntity(159U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(241U);
    const char tmp_msg_0[] = {83, -104, -48, 19, 61, 119, 3, 53, 48, -40, -45, -72, 109, -121, -122, -36, -35, 94, -10, 103, -28, 68, -5, 117, 88, -69, 15, 103, -64, -27, -5, -19, -9, -95, 46, -56, 123, -25, 29, -86, 46, 72, 106, -38, -5, 61, 36, 102, -107, -82, -35, 38, -68, 120, -103, -78, -9, -45, -79, -49, -52, 83, -72};
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
    msg.setTimeStamp(0.04999591045478413);
    msg.setSource(61885U);
    msg.setSourceEntity(207U);
    msg.setDestination(55591U);
    msg.setDestinationEntity(226U);
    const char tmp_msg_0[] = {95, -73, -30, 66, -36, 93, 93, 1, -128, -51, 37, -52, -18, -8, 87, -8, -78, -35, 87, 106, -52, -85, -1, -84, 7, 12, -52, 109, 10, 109, -6, 58, -31, 19, -75, 39, 119, -17, 113, 104, -35, -105, -48, 78, -50, 66, -58, 60, 23, 95, -46, -15, -94, -116, 117, -60, 42, -52, -27, -73, -47, 10, -99, -112, 5, -36, 116, 50, 27, 96, 106, -100, 108};
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
    msg.setTimeStamp(0.7443790474879516);
    msg.setSource(522U);
    msg.setSourceEntity(206U);
    msg.setDestination(54194U);
    msg.setDestinationEntity(228U);
    msg.value = 0.4085138732155086;

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
    msg.setTimeStamp(0.6647617596770393);
    msg.setSource(12457U);
    msg.setSourceEntity(211U);
    msg.setDestination(12792U);
    msg.setDestinationEntity(83U);
    msg.value = 0.42037324454156444;

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
    msg.setTimeStamp(0.9487692958367631);
    msg.setSource(64544U);
    msg.setSourceEntity(57U);
    msg.setDestination(39834U);
    msg.setDestinationEntity(24U);
    msg.value = 0.42194798617933216;

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
    msg.setTimeStamp(0.5444631388950398);
    msg.setSource(52158U);
    msg.setSourceEntity(152U);
    msg.setDestination(24155U);
    msg.setDestinationEntity(37U);
    msg.type = 198U;
    msg.frequency = 2002878662U;
    msg.min_range = 21672U;
    msg.max_range = 3256U;
    msg.bits_per_point = 21U;
    msg.scale_factor = 0.5678255344271985;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9985939802364534;
    tmp_msg_0.beam_height = 0.28800324745876027;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-1, 94, 61, -77, -59, -20, 97, 49, 28, 0, 40, -52, -76, 98, 96, 89, 0, -26, -34, -46, -55, 78, 8, 8, 46, -9, 24, 36, 109, 25, -19, 94, 17, -111, 110, 63, -30, -116, 8, -102, -24, 92, 18, -73, 73, -96, -74, 12, 120, 17, -11, 103, 121, 122, 99, 1, 38, 96, 31, -28, -25, -20, -103, 92, 40, -70, -98, 18, -62, 115, -97, -4, -117, -39, 0, 0, 84, 11, -31, -87, 6, 13, -75, 21, -113, -19, 72, -87, 70, -107, -56, 81, 16, 7, 48, -51, 63, 17, -101, -26, -104, 8, 105, -82, -110, -79, -42, -40, -89, 60, -107, -12, -87, 124, 71, 9, -84, 109, -99, -36, -40, 63, 85, 68, 62, -122, -52, 16, 6, -103, -37, 113, -117, 59, 57, 85, 91, -85, 117, -123, -67, -76, -1, 125, 3, 23, -89, -52, 115, 82, 14, -51, 67, 38, 108, -124, -22, -45, 123, -117, -108, 46, 99, -32, 16, 5, -71, 23, -120, 81, -93, -49, 8, 47, -7, -14, -113, 86, -124, 28, 2, -4, 64, 70, -54, 73, 45, 123, -28, 34, -1};
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
    msg.setTimeStamp(0.30639933546810016);
    msg.setSource(22203U);
    msg.setSourceEntity(232U);
    msg.setDestination(49594U);
    msg.setDestinationEntity(39U);
    msg.type = 90U;
    msg.frequency = 4078776312U;
    msg.min_range = 18409U;
    msg.max_range = 6840U;
    msg.bits_per_point = 199U;
    msg.scale_factor = 0.766908678837753;
    const char tmp_msg_0[] = {-71, 25, 9, -112, -67, 107, 83, -7, -53, -49, 86, 56, 67, 100, -64, 79, 126, -109, -87, -70, 71, -42, 73, 61, -8, 46, 106, 88, 62, 53, 126, 83, -119, 101, 41, -19, -96, 62, 3, 106, 54, 103, -7, 4, 120, 0, 44, -82, 84, -33, -77, 112, -37, -38, -13, 20, -115, 53, -21, -84, -14, 35, -11, -56, 10, 41, 79, -102, -2, -36, 88, 103, -47, 24, 90, 81, -45, -46, -21, -73, 3, -82, -81, -35, -14, -67, 110, 31, 111, -113, -80, -115, 0, 59, -55, -66, 90, -108, -15, 39, 85, 11, 21, -34, -126, 96, -113, 99, -74, 115, 58, -2, 89, 105, -81, 14, 122, -11, 57, 111, -28, 88, -97, 56, -113, -26, 25, 43, 106, -41, -65, -90, -125, 108, -91, 49, 43, -15, 33, 99, -114, -87, 41, 79, 36, 69, -39, 103, -37, -111, 17};
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
    msg.setTimeStamp(0.015880045141530408);
    msg.setSource(17324U);
    msg.setSourceEntity(226U);
    msg.setDestination(36624U);
    msg.setDestinationEntity(153U);
    msg.type = 33U;
    msg.frequency = 1810686222U;
    msg.min_range = 45550U;
    msg.max_range = 964U;
    msg.bits_per_point = 156U;
    msg.scale_factor = 0.62123987448345;
    const char tmp_msg_0[] = {39, -54, -94, -64, -28, -13, -81, 27, 125, -60, -59, 93, 123, -73, 20, 112, -63, -79, 118, -61, 125, -122, -54, -113, 15, 19, -77, -17, -24, -7, 51, -124, 119, 23, 88, -71, -57, -114, -65, 43, 97, 91, -109, -56, 22, 6, 4, -46, -43, 57, 0, -77, -5, 41, -88, 55, 114, 1, -124, -116, -74, 12, -59, 59, -16, -123, -22, -120, -44, 31, -124, -11, 102, 44, 107, 21, 104, -77, -122, -21, 78, -55, -12, 118, 118, -66, -39, 29, -25, -18, 73, 97, -44, 96, -53, 106, 4, 70, 7, -31, 117, -86, 45, 48, -37, 7, -85, -95, 57, 119, -21, 53, 101, 64, 43, -101, -66, 24, -14, -98, -41, 31, 124, 50, 24, 97, 74, -43, -3, -41, 72, 83, 121, 115, 108, 110, -19, 84, -87, -38, -44, -84, 59, 88, 49, 92, -78};
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
    msg.setTimeStamp(0.7014729246669842);
    msg.setSource(19969U);
    msg.setSourceEntity(10U);
    msg.setDestination(54354U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.7803069713260814);
    msg.setSource(9757U);
    msg.setSourceEntity(246U);
    msg.setDestination(32948U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.3023992084956644);
    msg.setSource(52132U);
    msg.setSourceEntity(158U);
    msg.setDestination(29403U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.3675873607138359);
    msg.setSource(51692U);
    msg.setSourceEntity(230U);
    msg.setDestination(1107U);
    msg.setDestinationEntity(194U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.3761076518437402);
    msg.setSource(35466U);
    msg.setSourceEntity(232U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(55U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.4958047498896113);
    msg.setSource(49865U);
    msg.setSourceEntity(252U);
    msg.setDestination(2905U);
    msg.setDestinationEntity(9U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.1703442923591788);
    msg.setSource(51125U);
    msg.setSourceEntity(224U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9953035807777172;
    msg.confidence = 0.5016088310114003;
    msg.opmodes.assign("WEKCTWVYCHKRATRQAJHXNMRYJUKEHWZSUOGZLDJSUDDPTRWADKUKVDCEZJEALVIAMLWYKVFWPEVPHEBJQMBBNGYUSGHQTPTALRIYSRSTGPNIHQUYCDIMOXQBTLMOOBZRUCGFBLNQFIBJNDMWRSEA");

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
    msg.setTimeStamp(0.9388097959193262);
    msg.setSource(15728U);
    msg.setSourceEntity(217U);
    msg.setDestination(49296U);
    msg.setDestinationEntity(2U);
    msg.value = 0.2590448457685891;
    msg.confidence = 0.10037630635692651;
    msg.opmodes.assign("YEZHPQXSAWJMVZSUOHGKSOSKBUANKWKVMVMNFMYVRGAQTDZFOUQLXRSWNIFOCBYLTPYWSXCHRATLFQMIPPSXKJVTINBIQDFYBPGOCTCQZDGJYHGITYMEWSZJXXWOUIGHVYOCENRXLLAEMPJOHDHWZJEAUJKYUBUDSVCRDIHFVTIDAEJKFPCAJCNLQHNBDKOUXQEWGRFWTMNLTRCUBLPETZJ");

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
    msg.setTimeStamp(0.8724087425733036);
    msg.setSource(12159U);
    msg.setSourceEntity(0U);
    msg.setDestination(64082U);
    msg.setDestinationEntity(18U);
    msg.value = 0.788065306324364;
    msg.confidence = 0.46855566659504466;
    msg.opmodes.assign("ZEUZDDNFNWWWOFOPEIDAPVBKLXKNVQRXZPVLIQDYFOHKBXFLYZQWNGXRARRSUDDMMPTVCSRMUIWAAQLNTJAXNTZVQQZJLKLTJSWNMKSSZJZGECJTVQPTUCYKAJOYCUSCEMPOGEMVRUNEHCXTJFOQWMAGCZEYSTHGCBXLDHETUYASTOHCMEHVIFDOGOYPRDGIWMPBYIECXSFLRBJLBQXKBGJSYDLGFFHIAYIRIBGNKRXMHUPHJNB");

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
    msg.setTimeStamp(0.6446736542714209);
    msg.setSource(41400U);
    msg.setSourceEntity(188U);
    msg.setDestination(63541U);
    msg.setDestinationEntity(5U);
    msg.itow = 939123731U;
    msg.lat = 0.9925711699076712;
    msg.lon = 0.25939973073122247;
    msg.height_ell = 0.04477340282135378;
    msg.height_sea = 0.1778778729343483;
    msg.hacc = 0.6663542419647248;
    msg.vacc = 0.8241523422563344;
    msg.vel_n = 0.3154315765017268;
    msg.vel_e = 0.9577997694560403;
    msg.vel_d = 0.5158435929383653;
    msg.speed = 0.260631674034419;
    msg.gspeed = 0.22002499554962207;
    msg.heading = 0.08162854289629773;
    msg.sacc = 0.3202106325125471;
    msg.cacc = 0.08988150121757144;

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
    msg.setTimeStamp(0.17858713475418564);
    msg.setSource(37692U);
    msg.setSourceEntity(192U);
    msg.setDestination(25645U);
    msg.setDestinationEntity(16U);
    msg.itow = 853013215U;
    msg.lat = 0.3422633457502958;
    msg.lon = 0.6816033837427279;
    msg.height_ell = 0.3390873598370374;
    msg.height_sea = 0.018380647820127827;
    msg.hacc = 0.0005880012693044723;
    msg.vacc = 0.7223977485916958;
    msg.vel_n = 0.9968826000075287;
    msg.vel_e = 0.5542376993810422;
    msg.vel_d = 0.26642149453412156;
    msg.speed = 0.8797672933847591;
    msg.gspeed = 0.9422412407191277;
    msg.heading = 0.17802854058587358;
    msg.sacc = 0.3453147424709686;
    msg.cacc = 0.9613954615432486;

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
    msg.setTimeStamp(0.11082653271191378);
    msg.setSource(26614U);
    msg.setSourceEntity(76U);
    msg.setDestination(12091U);
    msg.setDestinationEntity(75U);
    msg.itow = 3593998004U;
    msg.lat = 0.2007780962974871;
    msg.lon = 0.870362726424298;
    msg.height_ell = 0.04977547608063426;
    msg.height_sea = 0.29277404535826046;
    msg.hacc = 0.9282309607422136;
    msg.vacc = 0.02766647712103576;
    msg.vel_n = 0.21294056247448534;
    msg.vel_e = 0.826835460513868;
    msg.vel_d = 0.856186473047713;
    msg.speed = 0.9719492420234926;
    msg.gspeed = 0.014234931103223936;
    msg.heading = 0.49875946726787845;
    msg.sacc = 0.6667618516041148;
    msg.cacc = 0.08143271076552394;

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
    msg.setTimeStamp(0.8253150063403396);
    msg.setSource(32233U);
    msg.setSourceEntity(6U);
    msg.setDestination(15695U);
    msg.setDestinationEntity(0U);
    msg.id = 43U;
    msg.value = 0.36671467434499205;

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
    msg.setTimeStamp(0.9374272294561179);
    msg.setSource(47734U);
    msg.setSourceEntity(172U);
    msg.setDestination(34907U);
    msg.setDestinationEntity(242U);
    msg.id = 194U;
    msg.value = 0.476791775945819;

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
    msg.setTimeStamp(0.9953122483020278);
    msg.setSource(38434U);
    msg.setSourceEntity(149U);
    msg.setDestination(17515U);
    msg.setDestinationEntity(29U);
    msg.id = 212U;
    msg.value = 0.9776724487650122;

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
    msg.setTimeStamp(0.4289745513371266);
    msg.setSource(21745U);
    msg.setSourceEntity(82U);
    msg.setDestination(26815U);
    msg.setDestinationEntity(181U);
    msg.x = 0.8156281854685397;
    msg.y = 0.6283225687838324;
    msg.z = 0.8367211062751998;
    msg.phi = 0.8729626426951496;
    msg.theta = 0.5175679936235773;
    msg.psi = 0.9293186148562786;

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
    msg.setTimeStamp(0.4030386920452902);
    msg.setSource(39377U);
    msg.setSourceEntity(125U);
    msg.setDestination(46147U);
    msg.setDestinationEntity(177U);
    msg.x = 0.055347578155191424;
    msg.y = 0.4736686870467628;
    msg.z = 0.7516103615540415;
    msg.phi = 0.42818694339849106;
    msg.theta = 0.1633062914479041;
    msg.psi = 0.44287869603166863;

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
    msg.setTimeStamp(0.7881097510585945);
    msg.setSource(24274U);
    msg.setSourceEntity(30U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(145U);
    msg.x = 0.2131622082554998;
    msg.y = 0.8683843685011728;
    msg.z = 0.33983612148426945;
    msg.phi = 0.10199512286336188;
    msg.theta = 0.8123721506914839;
    msg.psi = 0.5469343378900478;

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
    msg.setTimeStamp(0.28908220171885);
    msg.setSource(24334U);
    msg.setSourceEntity(159U);
    msg.setDestination(53256U);
    msg.setDestinationEntity(166U);
    msg.beam_width = 0.36041058939555204;
    msg.beam_height = 0.6659355062254873;

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
    msg.setTimeStamp(0.29325519519026266);
    msg.setSource(39467U);
    msg.setSourceEntity(147U);
    msg.setDestination(38747U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.46406145722626513;
    msg.beam_height = 0.5869318604153242;

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
    msg.setTimeStamp(0.378502275041272);
    msg.setSource(20439U);
    msg.setSourceEntity(154U);
    msg.setDestination(4496U);
    msg.setDestinationEntity(56U);
    msg.beam_width = 0.05897679086821617;
    msg.beam_height = 0.04031306425331771;

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
    msg.setTimeStamp(0.8046806160561141);
    msg.setSource(5736U);
    msg.setSourceEntity(70U);
    msg.setDestination(20097U);
    msg.setDestinationEntity(186U);
    msg.sane = 3U;

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
    msg.setTimeStamp(0.839056245787934);
    msg.setSource(46880U);
    msg.setSourceEntity(187U);
    msg.setDestination(44078U);
    msg.setDestinationEntity(136U);
    msg.sane = 184U;

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
    msg.setTimeStamp(0.14905627591302695);
    msg.setSource(52680U);
    msg.setSourceEntity(120U);
    msg.setDestination(47150U);
    msg.setDestinationEntity(191U);
    msg.sane = 163U;

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
    msg.setTimeStamp(0.5777061206293678);
    msg.setSource(18784U);
    msg.setSourceEntity(99U);
    msg.setDestination(41147U);
    msg.setDestinationEntity(95U);
    msg.value = 0.27496553178937444;

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
    msg.setTimeStamp(0.6183179729290765);
    msg.setSource(19687U);
    msg.setSourceEntity(64U);
    msg.setDestination(27174U);
    msg.setDestinationEntity(252U);
    msg.value = 0.2564984968885635;

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
    msg.setTimeStamp(0.6518447714202669);
    msg.setSource(52887U);
    msg.setSourceEntity(176U);
    msg.setDestination(16515U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7256217678601022;

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
    msg.setTimeStamp(0.47958570792630295);
    msg.setSource(43046U);
    msg.setSourceEntity(104U);
    msg.setDestination(57418U);
    msg.setDestinationEntity(72U);
    msg.value = 0.4396486165551716;

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
    msg.setTimeStamp(0.43072007578461335);
    msg.setSource(45082U);
    msg.setSourceEntity(80U);
    msg.setDestination(64821U);
    msg.setDestinationEntity(127U);
    msg.value = 0.33181702869225227;

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
    msg.setTimeStamp(0.9484839303401229);
    msg.setSource(28930U);
    msg.setSourceEntity(48U);
    msg.setDestination(27700U);
    msg.setDestinationEntity(208U);
    msg.value = 0.48614504946736903;

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
    msg.setTimeStamp(0.7981369620028148);
    msg.setSource(42591U);
    msg.setSourceEntity(148U);
    msg.setDestination(32399U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9948714692724981;

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
    msg.setTimeStamp(0.5219349858135184);
    msg.setSource(2573U);
    msg.setSourceEntity(43U);
    msg.setDestination(61636U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7436851907692971;

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
    msg.setTimeStamp(0.042725606818106);
    msg.setSource(28838U);
    msg.setSourceEntity(209U);
    msg.setDestination(1522U);
    msg.setDestinationEntity(40U);
    msg.value = 0.6376315052513434;

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
    msg.setTimeStamp(0.014884436191542338);
    msg.setSource(4149U);
    msg.setSourceEntity(66U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9990917292917002;

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
    msg.setTimeStamp(0.6966393245160247);
    msg.setSource(29858U);
    msg.setSourceEntity(6U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(176U);
    msg.value = 0.9076846533447697;

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
    msg.setTimeStamp(0.06657938687275311);
    msg.setSource(13292U);
    msg.setSourceEntity(51U);
    msg.setDestination(3128U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6873663844734335;

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
    msg.setTimeStamp(0.2596345761776183);
    msg.setSource(32675U);
    msg.setSourceEntity(119U);
    msg.setDestination(36652U);
    msg.setDestinationEntity(75U);
    msg.value = 0.5817313580952508;

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
    msg.setTimeStamp(0.7032340750853155);
    msg.setSource(41977U);
    msg.setSourceEntity(186U);
    msg.setDestination(5868U);
    msg.setDestinationEntity(173U);
    msg.value = 0.5391951108952405;

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
    msg.setTimeStamp(0.6370294149225141);
    msg.setSource(25017U);
    msg.setSourceEntity(212U);
    msg.setDestination(1922U);
    msg.setDestinationEntity(113U);
    msg.value = 0.49985406791356257;

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
    msg.setTimeStamp(0.9838867205108257);
    msg.setSource(59078U);
    msg.setSourceEntity(222U);
    msg.setDestination(47762U);
    msg.setDestinationEntity(17U);
    msg.value = 0.9001434014719044;

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
    msg.setTimeStamp(0.36869240072867615);
    msg.setSource(8289U);
    msg.setSourceEntity(84U);
    msg.setDestination(49542U);
    msg.setDestinationEntity(142U);
    msg.value = 0.22474566649637728;

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
    msg.setTimeStamp(0.6330312835186968);
    msg.setSource(52151U);
    msg.setSourceEntity(217U);
    msg.setDestination(19659U);
    msg.setDestinationEntity(126U);
    msg.value = 0.5233891685949444;

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
    msg.setTimeStamp(0.3984087340186192);
    msg.setSource(25359U);
    msg.setSourceEntity(222U);
    msg.setDestination(1125U);
    msg.setDestinationEntity(17U);
    msg.value = 0.11873195537119641;

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
    msg.setTimeStamp(0.7454969483386336);
    msg.setSource(28142U);
    msg.setSourceEntity(3U);
    msg.setDestination(1U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7149841937901623;

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
    msg.setTimeStamp(0.9686104100029914);
    msg.setSource(23268U);
    msg.setSourceEntity(96U);
    msg.setDestination(1183U);
    msg.setDestinationEntity(121U);
    msg.value = 0.510113693808853;

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
    msg.setTimeStamp(0.38791708034811634);
    msg.setSource(41383U);
    msg.setSourceEntity(147U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(73U);
    msg.value = 0.8644957210433616;

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
    msg.setTimeStamp(0.8079933554837613);
    msg.setSource(21451U);
    msg.setSourceEntity(47U);
    msg.setDestination(23789U);
    msg.setDestinationEntity(162U);
    msg.value = 0.229301854820272;

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
    msg.setTimeStamp(0.6191989186643042);
    msg.setSource(11469U);
    msg.setSourceEntity(97U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(194U);
    msg.value = 0.04865309539041962;

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
    msg.setTimeStamp(0.683574057832781);
    msg.setSource(50396U);
    msg.setSourceEntity(249U);
    msg.setDestination(13448U);
    msg.setDestinationEntity(11U);
    msg.validity = 24387U;
    msg.type = 156U;
    msg.tow = 2137789360U;
    msg.base_lat = 0.6921192746339065;
    msg.base_lon = 0.16344248078622525;
    msg.base_height = 0.08475610967380898;
    msg.n = 0.9129719033650003;
    msg.e = 0.3193285292247805;
    msg.d = 0.18202916762517818;
    msg.v_n = 0.1383313934583038;
    msg.v_e = 0.8884249433401;
    msg.v_d = 0.4827430878306066;
    msg.satellites = 238U;
    msg.iar_hyp = 59706U;
    msg.iar_ratio = 0.9058250033869445;

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
    msg.setTimeStamp(0.8502412535293182);
    msg.setSource(60050U);
    msg.setSourceEntity(24U);
    msg.setDestination(20564U);
    msg.setDestinationEntity(118U);
    msg.validity = 12067U;
    msg.type = 15U;
    msg.tow = 312660372U;
    msg.base_lat = 0.37545033406320183;
    msg.base_lon = 0.9601515736680014;
    msg.base_height = 0.9829675790571568;
    msg.n = 0.6720828953228354;
    msg.e = 0.1927055979648158;
    msg.d = 0.725773504567275;
    msg.v_n = 0.7412931926542841;
    msg.v_e = 0.14192445995072567;
    msg.v_d = 0.44428212971599057;
    msg.satellites = 163U;
    msg.iar_hyp = 60999U;
    msg.iar_ratio = 0.1745072025271639;

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
    msg.setTimeStamp(0.9987109456527807);
    msg.setSource(30054U);
    msg.setSourceEntity(128U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(177U);
    msg.validity = 11193U;
    msg.type = 200U;
    msg.tow = 2492170065U;
    msg.base_lat = 0.22419275947932626;
    msg.base_lon = 0.9229404960376089;
    msg.base_height = 0.6430414630110795;
    msg.n = 0.7254006198529733;
    msg.e = 0.2289619981776656;
    msg.d = 0.6998064092397657;
    msg.v_n = 0.9398783919292202;
    msg.v_e = 0.0479091770343294;
    msg.v_d = 0.9892140805458056;
    msg.satellites = 24U;
    msg.iar_hyp = 39286U;
    msg.iar_ratio = 0.2266084199511461;

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
    msg.setTimeStamp(0.6725788776545873);
    msg.setSource(12819U);
    msg.setSourceEntity(251U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(51U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4808423943222425;
    tmp_msg_0.lon = 0.21049373213116607;
    tmp_msg_0.height = 0.1629154085629636;
    tmp_msg_0.x = 0.9405393775259998;
    tmp_msg_0.y = 0.8566228666974472;
    tmp_msg_0.z = 0.9216254752700105;
    tmp_msg_0.phi = 0.6947497156574577;
    tmp_msg_0.theta = 0.12735249424399153;
    tmp_msg_0.psi = 0.673440856335088;
    tmp_msg_0.u = 0.569249774948702;
    tmp_msg_0.v = 0.8375406548913469;
    tmp_msg_0.w = 0.14249633175337184;
    tmp_msg_0.vx = 0.03667499702970001;
    tmp_msg_0.vy = 0.06576425684861387;
    tmp_msg_0.vz = 0.12478493176524141;
    tmp_msg_0.p = 0.14887528528570393;
    tmp_msg_0.q = 0.5934847314189089;
    tmp_msg_0.r = 0.09535025231283778;
    tmp_msg_0.depth = 0.17260977128815147;
    tmp_msg_0.alt = 0.4541949130836139;
    msg.state.set(tmp_msg_0);
    msg.type = 104U;

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
    msg.setTimeStamp(0.15513262148019835);
    msg.setSource(28770U);
    msg.setSourceEntity(8U);
    msg.setDestination(2466U);
    msg.setDestinationEntity(200U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.19647757304705926;
    tmp_msg_0.lon = 0.7196462382728765;
    tmp_msg_0.height = 0.8067496532542029;
    tmp_msg_0.x = 0.3423638016091719;
    tmp_msg_0.y = 0.30525348476808223;
    tmp_msg_0.z = 0.29871324457606063;
    tmp_msg_0.phi = 0.9397628899902359;
    tmp_msg_0.theta = 0.15313743373567423;
    tmp_msg_0.psi = 0.21605603580051846;
    tmp_msg_0.u = 0.5371809835547166;
    tmp_msg_0.v = 0.42915108446603867;
    tmp_msg_0.w = 0.15607396559077813;
    tmp_msg_0.vx = 0.5034731166197686;
    tmp_msg_0.vy = 0.4521822602952362;
    tmp_msg_0.vz = 0.5624639713487928;
    tmp_msg_0.p = 0.1565998624778191;
    tmp_msg_0.q = 0.8147362889080432;
    tmp_msg_0.r = 0.34779943635701804;
    tmp_msg_0.depth = 0.6259825530154843;
    tmp_msg_0.alt = 0.13119873282332495;
    msg.state.set(tmp_msg_0);
    msg.type = 173U;

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
    msg.setTimeStamp(0.9927718362388843);
    msg.setSource(30281U);
    msg.setSourceEntity(147U);
    msg.setDestination(36156U);
    msg.setDestinationEntity(239U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4241670489926873;
    tmp_msg_0.lon = 0.0541927254838348;
    tmp_msg_0.height = 0.8529961744054504;
    tmp_msg_0.x = 0.9195035078510237;
    tmp_msg_0.y = 0.4343777849020145;
    tmp_msg_0.z = 0.045945386197556504;
    tmp_msg_0.phi = 0.7532790664127631;
    tmp_msg_0.theta = 0.333636553369127;
    tmp_msg_0.psi = 0.7987447115217284;
    tmp_msg_0.u = 0.6186127150419634;
    tmp_msg_0.v = 0.9607201352692161;
    tmp_msg_0.w = 0.1483827364863085;
    tmp_msg_0.vx = 0.23895371100701457;
    tmp_msg_0.vy = 0.039346527959819966;
    tmp_msg_0.vz = 0.9303095598825747;
    tmp_msg_0.p = 0.10256010595611909;
    tmp_msg_0.q = 0.3564764656141811;
    tmp_msg_0.r = 0.7649322539544232;
    tmp_msg_0.depth = 0.8515659334533072;
    tmp_msg_0.alt = 0.4638353324822405;
    msg.state.set(tmp_msg_0);
    msg.type = 175U;

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
    msg.setTimeStamp(0.28253675676403434);
    msg.setSource(63390U);
    msg.setSourceEntity(111U);
    msg.setDestination(12305U);
    msg.setDestinationEntity(195U);
    msg.value = 0.9998014304061652;

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
    msg.setTimeStamp(0.6485884520553131);
    msg.setSource(30300U);
    msg.setSourceEntity(143U);
    msg.setDestination(60729U);
    msg.setDestinationEntity(155U);
    msg.value = 0.7255345863197737;

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
    msg.setTimeStamp(0.3863303147298418);
    msg.setSource(39867U);
    msg.setSourceEntity(109U);
    msg.setDestination(47784U);
    msg.setDestinationEntity(69U);
    msg.value = 0.2969661596434646;

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
    msg.setTimeStamp(0.09318593229157512);
    msg.setSource(61274U);
    msg.setSourceEntity(56U);
    msg.setDestination(60763U);
    msg.setDestinationEntity(198U);
    msg.value = 0.288690208702984;

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
    msg.setTimeStamp(0.8004501055752905);
    msg.setSource(46948U);
    msg.setSourceEntity(14U);
    msg.setDestination(32471U);
    msg.setDestinationEntity(127U);
    msg.value = 0.1417141874083564;

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
    msg.setTimeStamp(0.9067574206307518);
    msg.setSource(5179U);
    msg.setSourceEntity(203U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6837813913867073;

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
    msg.setTimeStamp(0.5208922507309574);
    msg.setSource(32499U);
    msg.setSourceEntity(80U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(71U);
    msg.value = 0.31168367333013414;

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
    msg.setTimeStamp(0.5825459386233339);
    msg.setSource(8340U);
    msg.setSourceEntity(7U);
    msg.setDestination(4139U);
    msg.setDestinationEntity(148U);
    msg.value = 1.700327980724836e-05;

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
    msg.setTimeStamp(0.504248804746353);
    msg.setSource(48663U);
    msg.setSourceEntity(81U);
    msg.setDestination(52865U);
    msg.setDestinationEntity(26U);
    msg.value = 0.34067106021173976;

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
    msg.setTimeStamp(0.0616833379948345);
    msg.setSource(17325U);
    msg.setSourceEntity(60U);
    msg.setDestination(13488U);
    msg.setDestinationEntity(27U);
    msg.value = 0.21821999519642132;

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
    msg.setTimeStamp(0.4791560805481353);
    msg.setSource(4369U);
    msg.setSourceEntity(4U);
    msg.setDestination(4711U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5178845033847537;

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
    msg.setTimeStamp(0.6041273376585822);
    msg.setSource(12043U);
    msg.setSourceEntity(63U);
    msg.setDestination(17644U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8171484778964502;

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
    msg.setTimeStamp(0.9845496856914024);
    msg.setSource(11517U);
    msg.setSourceEntity(59U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(161U);
    msg.value = 0.7023037164199102;

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
    msg.setTimeStamp(0.5580777692016048);
    msg.setSource(24896U);
    msg.setSourceEntity(88U);
    msg.setDestination(47820U);
    msg.setDestinationEntity(242U);
    msg.value = 0.16198630137080172;

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
    msg.setTimeStamp(0.9061092350191439);
    msg.setSource(39962U);
    msg.setSourceEntity(186U);
    msg.setDestination(38368U);
    msg.setDestinationEntity(79U);
    msg.value = 0.06741383278718271;

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
    msg.setTimeStamp(0.828141139550025);
    msg.setSource(27663U);
    msg.setSourceEntity(178U);
    msg.setDestination(6642U);
    msg.setDestinationEntity(74U);
    msg.id = 197U;
    msg.zoom = 57U;
    msg.action = 138U;

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
    msg.setTimeStamp(0.7490046475231386);
    msg.setSource(23064U);
    msg.setSourceEntity(62U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(41U);
    msg.id = 77U;
    msg.zoom = 49U;
    msg.action = 146U;

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
    msg.setTimeStamp(0.05945002966316304);
    msg.setSource(65449U);
    msg.setSourceEntity(11U);
    msg.setDestination(63574U);
    msg.setDestinationEntity(195U);
    msg.id = 116U;
    msg.zoom = 188U;
    msg.action = 29U;

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
    msg.setTimeStamp(0.1315116760788141);
    msg.setSource(28806U);
    msg.setSourceEntity(0U);
    msg.setDestination(54215U);
    msg.setDestinationEntity(131U);
    msg.id = 226U;
    msg.value = 0.037064503216616584;

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
    msg.setTimeStamp(0.6689128745570693);
    msg.setSource(12647U);
    msg.setSourceEntity(115U);
    msg.setDestination(14307U);
    msg.setDestinationEntity(36U);
    msg.id = 32U;
    msg.value = 0.20166854018334035;

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
    msg.setTimeStamp(0.4811725603315037);
    msg.setSource(12769U);
    msg.setSourceEntity(16U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(54U);
    msg.id = 254U;
    msg.value = 0.2419350913265652;

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
    msg.setTimeStamp(0.4214341301829987);
    msg.setSource(42734U);
    msg.setSourceEntity(182U);
    msg.setDestination(62457U);
    msg.setDestinationEntity(147U);
    msg.id = 87U;
    msg.value = 0.31797703432867597;

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
    msg.setTimeStamp(0.6927480106783847);
    msg.setSource(4939U);
    msg.setSourceEntity(53U);
    msg.setDestination(14903U);
    msg.setDestinationEntity(247U);
    msg.id = 96U;
    msg.value = 0.48717865182290676;

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
    msg.setTimeStamp(0.34005506600949886);
    msg.setSource(28993U);
    msg.setSourceEntity(211U);
    msg.setDestination(57611U);
    msg.setDestinationEntity(145U);
    msg.id = 155U;
    msg.value = 0.19407858316991566;

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
    msg.setTimeStamp(0.2466636468114186);
    msg.setSource(62206U);
    msg.setSourceEntity(241U);
    msg.setDestination(64879U);
    msg.setDestinationEntity(183U);
    msg.id = 91U;
    msg.angle = 0.704197137436395;

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
    msg.setTimeStamp(0.6921840659766346);
    msg.setSource(1899U);
    msg.setSourceEntity(136U);
    msg.setDestination(28882U);
    msg.setDestinationEntity(240U);
    msg.id = 253U;
    msg.angle = 0.5010227312239133;

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
    msg.setTimeStamp(0.6918653588831116);
    msg.setSource(38805U);
    msg.setSourceEntity(171U);
    msg.setDestination(43760U);
    msg.setDestinationEntity(14U);
    msg.id = 107U;
    msg.angle = 0.936427667225144;

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
    msg.setTimeStamp(0.9464773730264353);
    msg.setSource(52005U);
    msg.setSourceEntity(210U);
    msg.setDestination(16316U);
    msg.setDestinationEntity(233U);
    msg.op = 81U;
    msg.actions.assign("STCQHZRIQBUJUPIWYWIZQQTSZNEIRKMSIESRJWUQNYXVREXOBZVCJSZJPZAORPPDUCLBRHLHDGGEUMORTVWNMOOLQOTPPDSENJFJAUVXBGBXEXYFGYKIXFMFMAYIKMTTFNGGCZACQDCLFMMNAEBKMVVCXZDYEADOWFWNRYTADBQD");

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
    msg.setTimeStamp(0.10298268681678946);
    msg.setSource(26096U);
    msg.setSourceEntity(235U);
    msg.setDestination(41550U);
    msg.setDestinationEntity(60U);
    msg.op = 3U;
    msg.actions.assign("JAWMXVFRYCIZPLWGMEGKYVMNUOAAQTQXCCSWWWLSBCUXDLLJNIOJRBONXQMTIBBDXUNBRNQURNGKDGPCINMXQLHXISTWOFDFKVWZASLPBJKTTSIYSSYHJOFVSRKTIRIXJUQRTZQDOHFZUFHKDVPXHDPEPCYOFELHVYCCAQPKCATVVUONKWHSWZJIICTBZEMY");

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
    msg.setTimeStamp(0.3660813128308136);
    msg.setSource(37042U);
    msg.setSourceEntity(106U);
    msg.setDestination(49837U);
    msg.setDestinationEntity(67U);
    msg.op = 189U;
    msg.actions.assign("YWEXPQBVMCARBHWBJZOTFNRWEWCXUPAGUIAWKYHVLCDEZBSMLFAUZQOHZKQPZDJCVKTJSZMGFBFKRIIODBPHTSWAYIXWWNXQTCGARZUHJNHIT");

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
    msg.setTimeStamp(0.16546822482263668);
    msg.setSource(63820U);
    msg.setSourceEntity(63U);
    msg.setDestination(11922U);
    msg.setDestinationEntity(7U);
    msg.actions.assign("YHEVJAMQKMVIGQYIVXHPOHQLDSLFRGMYHJKZQTITETLCCGCFZDCYLXAAFBUVXVKLRLXHXINLJBYODKBBDYVUUIBWOAZTVWBZNODAIJEWEKWEMUGBFAPUJSSPIEHGGKPNNOCDTZTYQKVESUPQEPSWCWFKQXCPRDSAWHPQEEFUJTZSTBCNYJZQFJMKRSLNRNGTYAMFAPURZMSHZCLNAKVWDXIHYGONFORRZOLHGWVFJNUDIRWPOIDTJXC");

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
    msg.setTimeStamp(0.46636532373515593);
    msg.setSource(14656U);
    msg.setSourceEntity(12U);
    msg.setDestination(30497U);
    msg.setDestinationEntity(120U);
    msg.actions.assign("QFTQUCPONKGXUUJWASNETTTJSFIAZFODHC");

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
    msg.setTimeStamp(0.8025263214262159);
    msg.setSource(13199U);
    msg.setSourceEntity(52U);
    msg.setDestination(28431U);
    msg.setDestinationEntity(233U);
    msg.actions.assign("FTISPJPOHZWBFJOKWCYBBLKYQJSMAULXQYVMTKJRUZYIFMEKDDXRMUQGVQXJCRNJEAUDCWCMLEAAILMYAFPWNWYFXLPDKTZBLBTSICSEWNWXGZSQGEGFFHIDHOLFBWCVPKXAGSDYWAUPKRVNTNKGUQZAFSJETHXIUDZHNQBLOSMCPONIGHSBCVXRXEEJNOGAVTYVTZHQVQVKDJRLHZIEORGAXHIOTY");

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
    msg.setTimeStamp(0.7649017497877515);
    msg.setSource(43487U);
    msg.setSourceEntity(170U);
    msg.setDestination(18816U);
    msg.setDestinationEntity(106U);
    msg.button = 27U;
    msg.value = 15U;

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
    msg.setTimeStamp(0.3222597863780211);
    msg.setSource(31097U);
    msg.setSourceEntity(34U);
    msg.setDestination(7952U);
    msg.setDestinationEntity(0U);
    msg.button = 151U;
    msg.value = 64U;

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
    msg.setTimeStamp(0.2903564901662372);
    msg.setSource(55904U);
    msg.setSourceEntity(127U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(7U);
    msg.button = 97U;
    msg.value = 231U;

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
    msg.setTimeStamp(0.3937821663125656);
    msg.setSource(93U);
    msg.setSourceEntity(140U);
    msg.setDestination(62369U);
    msg.setDestinationEntity(194U);
    msg.op = 253U;
    msg.text.assign("UXMVOHYGQKUUCYJXJVCVWEEPPTNCXTBOWNFDSOSWLHSCEBHZLLCFHKZYQINVGHNXWFCWJOBFEXTITXRLRNYMFRSLBHIDCUJEBFIYTKJOXPLYGLVKAPEXPDFQQPMIJODONZRVHAWRZGNLGWZAGETQAFIUMUKSDSYURXTUMDBHDPEQQSDAPBMVYOZPKPAR");

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
    msg.setTimeStamp(0.10897080759187783);
    msg.setSource(3296U);
    msg.setSourceEntity(178U);
    msg.setDestination(12130U);
    msg.setDestinationEntity(233U);
    msg.op = 193U;
    msg.text.assign("STYMQKODCAZFFLWHEPUPSWMLZNCGLGKVTCCSAGJHOTUHDDAVVRIHSJJPEMPZURYXWMRASNNXVUAHPUZHLMCLLFBMXYQPQZKWBWYYYOCXHAXPIETYBWRJJGEFUSAOOSBOTWURBHWMIVGFFGSNCFJVGKQJQXQDYKNADTBRVCHIEYAJDCNNUDRHPGLUWTUZMQCVFOEK");

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
    msg.setTimeStamp(0.8276458280252518);
    msg.setSource(33320U);
    msg.setSourceEntity(48U);
    msg.setDestination(24343U);
    msg.setDestinationEntity(170U);
    msg.op = 215U;
    msg.text.assign("BWWGGPSYDMIJZIVOFGMEXCNQBQEUTRKLQFNVZOUEUIFQOVKUELMQSWXARGURXHHVMTJUGGCJDQVVLNZBYYBKJVYWENLBMKQKPRBLJTCWQDPNCIZZDHBSNPBZDXUEZFSETYHFGRXICNUWMKQODIOOUZTEFDXXDSYAGSNRTAKWRHBOL");

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
    msg.setTimeStamp(0.8725085878072655);
    msg.setSource(52791U);
    msg.setSourceEntity(14U);
    msg.setDestination(7388U);
    msg.setDestinationEntity(172U);
    msg.op = 201U;
    msg.time_remain = 0.9587934239662641;
    msg.sched_time = 0.8629529547630036;

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
    msg.setTimeStamp(0.05433546535070566);
    msg.setSource(18414U);
    msg.setSourceEntity(127U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(153U);
    msg.op = 216U;
    msg.time_remain = 0.014044897519397304;
    msg.sched_time = 0.2458891554884619;

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
    msg.setTimeStamp(0.6880674013565188);
    msg.setSource(11842U);
    msg.setSourceEntity(119U);
    msg.setDestination(8707U);
    msg.setDestinationEntity(11U);
    msg.op = 188U;
    msg.time_remain = 0.767799817108395;
    msg.sched_time = 0.07557056184803179;

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
    msg.setTimeStamp(0.045543801869388445);
    msg.setSource(34300U);
    msg.setSourceEntity(196U);
    msg.setDestination(14186U);
    msg.setDestinationEntity(97U);
    msg.name.assign("XNRDBNYOUKXHSELZINHNLOYLVISGDHGPJFPBWINBCDZNMLSPKGYCROZNRIZXOJHYXPFGVWERDQWKQWJWABVRDQAUGCDDUTFJOKSXLRZRULXUQWJMTPJHCGVLHAATXTDPLVRBMMGNWUYVTMO");
    msg.op = 28U;
    msg.sched_time = 0.8318386519207513;

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
    msg.setTimeStamp(0.6333195593034361);
    msg.setSource(3525U);
    msg.setSourceEntity(104U);
    msg.setDestination(22932U);
    msg.setDestinationEntity(49U);
    msg.name.assign("LGVPDPGWLLTUMZLVJQCESMTFTAFINBKNQPBVIUMVEIRDZXIKTZZJQRMQDUUUXSURKDWJWABRPKNMHGWHZKWNLELHWHUFOPQCPRUISXCFTPVIVAXGYNDEXFSYOYAJJQQOVSWNZPLCDPWCQRAKOACYZXRUVZMNAYEGLYSIFCDAOGJVSGKHSMIBRHHFFTUTJBYGLLNBWEKDPZMISODMBOEIEYGERJYXEJFTKYFCBTMNHWQOXOHZBJOKRQAGTCC");
    msg.op = 233U;
    msg.sched_time = 0.13671884748705387;

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
    msg.setTimeStamp(0.04567676291110545);
    msg.setSource(37387U);
    msg.setSourceEntity(61U);
    msg.setDestination(40166U);
    msg.setDestinationEntity(187U);
    msg.name.assign("CKRAHIXILTYFQOBBUMZCNIZNAUAFTILRSEZLVKJQDIJ");
    msg.op = 238U;
    msg.sched_time = 0.7923000148939954;

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
    msg.setTimeStamp(0.8774639174074712);
    msg.setSource(1032U);
    msg.setSourceEntity(160U);
    msg.setDestination(57608U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.006652076668912987);
    msg.setSource(15575U);
    msg.setSourceEntity(223U);
    msg.setDestination(44798U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.7191455087848482);
    msg.setSource(52505U);
    msg.setSourceEntity(90U);
    msg.setDestination(25167U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.6248537418636935);
    msg.setSource(64071U);
    msg.setSourceEntity(17U);
    msg.setDestination(40236U);
    msg.setDestinationEntity(26U);
    msg.name.assign("XGLMPVBODLGOMVUYMMYMOHDOPXNQAAYKTSXRFDNZCKJCEGLDSEGBTKIPRXJZYQAWNBMGUG");
    msg.state = 87U;

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
    msg.setTimeStamp(0.9080966403373104);
    msg.setSource(10958U);
    msg.setSourceEntity(164U);
    msg.setDestination(17753U);
    msg.setDestinationEntity(109U);
    msg.name.assign("SSRZBEACISGTEONOUGTISJJADUFZJIRUFTPMHNMZKANHKSJNSAHLOEIPOSXKTCEWCJHQXVRYXCZGHAGCYBNBFPBIMMAWAZJWKBRKUIWDHQDLLHZHMCRKEYGFOIRJENVDVFDPCGXZVLDYCQDGOCISYXKKEBURGOETSRDVP");
    msg.state = 200U;

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
    msg.setTimeStamp(0.298658473171457);
    msg.setSource(21231U);
    msg.setSourceEntity(203U);
    msg.setDestination(44399U);
    msg.setDestinationEntity(93U);
    msg.name.assign("MJAXTIVNHKGGPDABFQKVZTOEBYRKQTKSUUWNDJFBNACLRRZTFMXVEXUGISLGHSUPSGANQYMAIFSXORRXHDCZQIOWYWBWI");
    msg.state = 19U;

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
    msg.setTimeStamp(0.5658401077327355);
    msg.setSource(25219U);
    msg.setSourceEntity(104U);
    msg.setDestination(242U);
    msg.setDestinationEntity(254U);
    msg.name.assign("GPSAJHEHNCKELNMYLWQDNJIMXDGHFTNYULXUZJVADVBKWZXEZYBQERFOJFYZORTCKOLDLABBFMQROUKPXSAIWFKVSUCGRRHFPNVQZCTFEZNWPJKTGEWNTPQIYESQICMBNHWVNTPKDYILOLAREEVFIHRIHJCSHBU");
    msg.value = 211U;

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
    msg.setTimeStamp(0.04609532895057711);
    msg.setSource(30470U);
    msg.setSourceEntity(157U);
    msg.setDestination(29932U);
    msg.setDestinationEntity(81U);
    msg.name.assign("CKCUABKTIGPAQRRGWOPJJOMHNOTUDAXNVPMHHFHFGUZRFIXHXBBLGBYEXZQSWOPWCDGLCLRXRKNJSERKZIWZJINMKDICPYSSQJVXWAGDHDHDPWNSVDXBRUSFYHKPBKBSTNQUEDMZDOBGMYNSFLPXTCZZLKUGSUQXEEATEUMJVV");
    msg.value = 24U;

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
    msg.setTimeStamp(0.36542177490431704);
    msg.setSource(25399U);
    msg.setSourceEntity(51U);
    msg.setDestination(29694U);
    msg.setDestinationEntity(64U);
    msg.name.assign("VYWKIKXCPKMTZSLENSEJADMJGJCAQJNYELDWLGVCUMVEZSZTTPMQXONIFUSBLEXQBVJFDPVUVBKWBBFHYXZUWIYRZSFGFKIOHUDFUCWNVYDEUNCHLRQMP");
    msg.value = 227U;

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
    msg.setTimeStamp(0.12509802523327695);
    msg.setSource(26920U);
    msg.setSourceEntity(3U);
    msg.setDestination(50133U);
    msg.setDestinationEntity(134U);
    msg.name.assign("QUUVHBSZJVHJCSSALBFFNKGKDTIQAXKMLYUTJHWSNHTOELGBDKYFGZIDNCWPDWROXQENDWXSYQEKPVSPMRDIFZWMAMHGNQVDEXEIRUJWGNLNWXQR");

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
    msg.setTimeStamp(0.5519704559168949);
    msg.setSource(6533U);
    msg.setSourceEntity(99U);
    msg.setDestination(43892U);
    msg.setDestinationEntity(183U);
    msg.name.assign("GQNJHRHEARLJQWNJSHEBUYOTMQMVXNIGSFJDHKRNQAGEHDBAWIHVFDYOWDKBGDMYOUMOBKCNGKUIGWWOKWNTPXAFETMIXSPBJIPJOEYWHYISCXJFAATLLERUMZKXORSZAWMGZWYBKQCCQIFCLLT");

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
    msg.setTimeStamp(0.7069100910944693);
    msg.setSource(5743U);
    msg.setSourceEntity(100U);
    msg.setDestination(430U);
    msg.setDestinationEntity(112U);
    msg.name.assign("GGFDORYNRAVBUNUCJRGUMYDLGEYWKCOMAWDLYQRZSRIZPRWFKUOFRHBLDIKHNNMXNHWNQBLTCXNGLNZYMVBWJGTESPWTNCJUDSQFFVVGUFAXYPESKDMZYOVHBTVEEIMBOEZPBLBDSKMTXSQPACOHGIXLVKIMZZLATPHVLIZEIAWXJEPJYQACJUJYPYJUVZASWMIWHJWXQIAQPQEITSLCGHOM");

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
    msg.setTimeStamp(0.724873046237498);
    msg.setSource(1164U);
    msg.setSourceEntity(60U);
    msg.setDestination(15515U);
    msg.setDestinationEntity(218U);
    msg.name.assign("XKQNZNOYTUPVIHKBNDXFNYLACGXZMJCWFXVZOVLEVFUNGMMQLAODSIYITLUUGAPXLOMEWANPZZUTDRROJTKBEFWLPKKYHBRPJU");
    msg.value = 87U;

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
    msg.setTimeStamp(0.27477493505517214);
    msg.setSource(40771U);
    msg.setSourceEntity(76U);
    msg.setDestination(25082U);
    msg.setDestinationEntity(23U);
    msg.name.assign("VKPFOZIAGUDOOWOZGAFQPACDHPEWVQRTEPLJQXIJURBMUQUKEOBFEBASQYIKSNDQTPHFYFWTBUXGKJLTPCLVJHRMPMODYLBNYOHNBPQV");
    msg.value = 22U;

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
    msg.setTimeStamp(0.5842415461152665);
    msg.setSource(17049U);
    msg.setSourceEntity(160U);
    msg.setDestination(48454U);
    msg.setDestinationEntity(254U);
    msg.name.assign("KVRXQHPPYCRDEVDRRPGUNMEPLPWCJNAPFTDVYSGPIVSVSUCYGAWIUCSTXDYBOEJMIPXEQEKERWXONJLDDTWCZULZIAMWFMTXXMPNUBFDQQIJALGLTHMOQYJCYROEQBLPHBTVGKBGXXQQYRDTFJIZGZMVRZWDOQCSGMWFHCFBSZVAQVBBN");
    msg.value = 36U;

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
    msg.setTimeStamp(0.5144090626284743);
    msg.setSource(14041U);
    msg.setSourceEntity(153U);
    msg.setDestination(21407U);
    msg.setDestinationEntity(21U);
    msg.id = 234U;
    msg.period = 338363737U;
    msg.duty_cycle = 353679540U;

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
    msg.setTimeStamp(0.6323337736876362);
    msg.setSource(16251U);
    msg.setSourceEntity(72U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(123U);
    msg.id = 32U;
    msg.period = 389154714U;
    msg.duty_cycle = 132053056U;

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
    msg.setTimeStamp(0.7796947167561685);
    msg.setSource(6610U);
    msg.setSourceEntity(142U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(250U);
    msg.id = 58U;
    msg.period = 2763381377U;
    msg.duty_cycle = 450870368U;

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
    msg.setTimeStamp(0.9617391289678827);
    msg.setSource(57237U);
    msg.setSourceEntity(234U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(73U);
    msg.id = 71U;
    msg.period = 3331610360U;
    msg.duty_cycle = 1103910982U;

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
    msg.setTimeStamp(0.003738594615682489);
    msg.setSource(51367U);
    msg.setSourceEntity(195U);
    msg.setDestination(58556U);
    msg.setDestinationEntity(85U);
    msg.id = 108U;
    msg.period = 1355699186U;
    msg.duty_cycle = 2363330015U;

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
    msg.setTimeStamp(0.1372889620979122);
    msg.setSource(50862U);
    msg.setSourceEntity(126U);
    msg.setDestination(29649U);
    msg.setDestinationEntity(179U);
    msg.id = 244U;
    msg.period = 2692376478U;
    msg.duty_cycle = 1482706330U;

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
    msg.setTimeStamp(0.7815129879667443);
    msg.setSource(25218U);
    msg.setSourceEntity(115U);
    msg.setDestination(4950U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.6796575798993323;
    msg.lon = 0.765762273151936;
    msg.height = 0.9235089960957367;
    msg.x = 0.651982486128527;
    msg.y = 0.6349087381564722;
    msg.z = 0.09568865913334224;
    msg.phi = 0.9968755563212257;
    msg.theta = 0.26429507125622864;
    msg.psi = 0.1326627800418222;
    msg.u = 0.6942800168913452;
    msg.v = 0.9517334476278135;
    msg.w = 0.7022634079838269;
    msg.vx = 0.44719939157827693;
    msg.vy = 0.4565540853449178;
    msg.vz = 0.41084772985647144;
    msg.p = 0.43504775566321585;
    msg.q = 0.16768435647982105;
    msg.r = 0.28964606424964967;
    msg.depth = 0.7091015146451873;
    msg.alt = 0.5489504043972893;

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
    msg.setTimeStamp(0.5802580143630137);
    msg.setSource(50214U);
    msg.setSourceEntity(246U);
    msg.setDestination(59579U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.15702934701443982;
    msg.lon = 0.27734687962879;
    msg.height = 0.4904292891725678;
    msg.x = 0.4855236121157107;
    msg.y = 0.6878044134014974;
    msg.z = 0.6565281894920156;
    msg.phi = 0.9706576035666145;
    msg.theta = 0.3266524634364819;
    msg.psi = 0.04698327989478923;
    msg.u = 0.6328761345886029;
    msg.v = 0.5596641911479545;
    msg.w = 0.5636518775941344;
    msg.vx = 0.8667329424343492;
    msg.vy = 0.612365700201426;
    msg.vz = 0.5002145788166993;
    msg.p = 0.48961805486295595;
    msg.q = 0.7201946913754222;
    msg.r = 0.1275758666395772;
    msg.depth = 0.42534334601910606;
    msg.alt = 0.624216293953433;

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
    msg.setTimeStamp(0.18955222818421846);
    msg.setSource(47742U);
    msg.setSourceEntity(49U);
    msg.setDestination(38001U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.5052927775164678;
    msg.lon = 0.2757668259584949;
    msg.height = 0.9491752325328314;
    msg.x = 0.09084861606551908;
    msg.y = 0.04397267027354168;
    msg.z = 0.8381276505267643;
    msg.phi = 0.014038459507302758;
    msg.theta = 0.24867202749031636;
    msg.psi = 0.8419428865622717;
    msg.u = 0.11698725625347273;
    msg.v = 0.6504800580715583;
    msg.w = 0.056513675742670855;
    msg.vx = 0.5299520197556152;
    msg.vy = 0.15108139956254385;
    msg.vz = 0.3257249739969269;
    msg.p = 0.7221839123414889;
    msg.q = 0.7634307822924966;
    msg.r = 0.6672442902747574;
    msg.depth = 0.9305586784195551;
    msg.alt = 0.925776270439017;

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
    msg.setTimeStamp(0.5142950377316698);
    msg.setSource(31504U);
    msg.setSourceEntity(110U);
    msg.setDestination(62530U);
    msg.setDestinationEntity(245U);
    msg.x = 0.7198928635546813;
    msg.y = 0.20293574596448882;
    msg.z = 0.8585265904977303;

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
    msg.setTimeStamp(0.14828811698899325);
    msg.setSource(6055U);
    msg.setSourceEntity(211U);
    msg.setDestination(12220U);
    msg.setDestinationEntity(130U);
    msg.x = 0.6052507988700526;
    msg.y = 0.5450684410717126;
    msg.z = 0.14454878157592221;

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
    msg.setTimeStamp(0.1931450884310657);
    msg.setSource(64650U);
    msg.setSourceEntity(2U);
    msg.setDestination(42972U);
    msg.setDestinationEntity(168U);
    msg.x = 0.7439616739962307;
    msg.y = 0.3806913979568298;
    msg.z = 0.522706762368659;

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
    msg.setTimeStamp(0.1776035275655078);
    msg.setSource(12194U);
    msg.setSourceEntity(87U);
    msg.setDestination(4713U);
    msg.setDestinationEntity(120U);
    msg.value = 0.10751429084362729;

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
    msg.setTimeStamp(0.30448095154089194);
    msg.setSource(1677U);
    msg.setSourceEntity(238U);
    msg.setDestination(15666U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5239015925025328;

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
    msg.setTimeStamp(0.39408345942868794);
    msg.setSource(15021U);
    msg.setSourceEntity(137U);
    msg.setDestination(11474U);
    msg.setDestinationEntity(50U);
    msg.value = 0.9065503445922377;

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
    msg.setTimeStamp(0.9953696684087243);
    msg.setSource(22604U);
    msg.setSourceEntity(27U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5155157658985168;

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
    msg.setTimeStamp(0.17933707635621032);
    msg.setSource(17512U);
    msg.setSourceEntity(194U);
    msg.setDestination(21706U);
    msg.setDestinationEntity(183U);
    msg.value = 0.4804503976832927;

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
    msg.setTimeStamp(0.5290791909264323);
    msg.setSource(17335U);
    msg.setSourceEntity(67U);
    msg.setDestination(23599U);
    msg.setDestinationEntity(41U);
    msg.value = 0.8550364636931935;

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
    msg.setTimeStamp(0.860788342415826);
    msg.setSource(65292U);
    msg.setSourceEntity(18U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(29U);
    msg.x = 0.5476796055635952;
    msg.y = 0.6187375633826013;
    msg.z = 0.47065487751720403;
    msg.phi = 0.5528502777021201;
    msg.theta = 0.7644650027293659;
    msg.psi = 0.9169851740990831;
    msg.p = 0.06576735736514983;
    msg.q = 0.9778003610557768;
    msg.r = 0.6674467368000907;
    msg.u = 0.8025471611098173;
    msg.v = 0.08119143805047746;
    msg.w = 0.046642892624601084;
    msg.bias_psi = 0.14572254033271315;
    msg.bias_r = 0.149767943399167;

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
    msg.setTimeStamp(0.5030062191698331);
    msg.setSource(55449U);
    msg.setSourceEntity(131U);
    msg.setDestination(16081U);
    msg.setDestinationEntity(115U);
    msg.x = 0.33300530755745616;
    msg.y = 0.017306297714944407;
    msg.z = 0.4912892579923074;
    msg.phi = 0.3798690918184112;
    msg.theta = 0.12461869177423979;
    msg.psi = 0.36936515326264885;
    msg.p = 0.8063536861745644;
    msg.q = 0.371004346074296;
    msg.r = 0.146560977176304;
    msg.u = 0.13612002172442672;
    msg.v = 0.6328240025854068;
    msg.w = 0.25171290898009635;
    msg.bias_psi = 0.9204196675688825;
    msg.bias_r = 0.2812911611422897;

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
    msg.setTimeStamp(0.46500049697685);
    msg.setSource(12034U);
    msg.setSourceEntity(58U);
    msg.setDestination(62842U);
    msg.setDestinationEntity(117U);
    msg.x = 0.48207788731267587;
    msg.y = 0.6349546521734922;
    msg.z = 0.10011814763437499;
    msg.phi = 0.508014696132629;
    msg.theta = 0.635829691490222;
    msg.psi = 0.530899697744556;
    msg.p = 0.6749689157862123;
    msg.q = 0.9135295530883141;
    msg.r = 0.11736503414895272;
    msg.u = 0.10267246713346789;
    msg.v = 0.7362680483163423;
    msg.w = 0.06336018115112141;
    msg.bias_psi = 0.32378818410332944;
    msg.bias_r = 0.42165744376951075;

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
    msg.setTimeStamp(0.11445974145808846);
    msg.setSource(53425U);
    msg.setSourceEntity(232U);
    msg.setDestination(23524U);
    msg.setDestinationEntity(60U);
    msg.bias_psi = 0.05712741894776363;
    msg.bias_r = 0.20880460128600986;
    msg.cog = 0.6846074371889515;
    msg.cyaw = 0.40352344576606913;
    msg.lbl_rej_level = 0.9060984597205577;
    msg.gps_rej_level = 0.5417186307033061;
    msg.custom_x = 0.39625911511282075;
    msg.custom_y = 0.838796555640435;
    msg.custom_z = 0.1548258336558873;

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
    msg.setTimeStamp(0.8280807092459915);
    msg.setSource(15321U);
    msg.setSourceEntity(53U);
    msg.setDestination(39813U);
    msg.setDestinationEntity(5U);
    msg.bias_psi = 0.2951433641333788;
    msg.bias_r = 0.3811730300732413;
    msg.cog = 0.2897497114811406;
    msg.cyaw = 0.5045255007498994;
    msg.lbl_rej_level = 0.8198476713150488;
    msg.gps_rej_level = 0.23855771985941587;
    msg.custom_x = 0.14847800031482739;
    msg.custom_y = 0.7104894794006447;
    msg.custom_z = 0.8541245115199212;

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
    msg.setTimeStamp(0.6501003506708334);
    msg.setSource(26917U);
    msg.setSourceEntity(235U);
    msg.setDestination(49882U);
    msg.setDestinationEntity(122U);
    msg.bias_psi = 0.5291342088904809;
    msg.bias_r = 0.9827696159301373;
    msg.cog = 0.12697662364420625;
    msg.cyaw = 0.7827336142332916;
    msg.lbl_rej_level = 0.2026023943916886;
    msg.gps_rej_level = 0.8923266568415987;
    msg.custom_x = 0.6517206062864451;
    msg.custom_y = 0.11577111839064558;
    msg.custom_z = 0.026699716515042216;

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
    msg.setTimeStamp(0.7173504965667404);
    msg.setSource(16255U);
    msg.setSourceEntity(105U);
    msg.setDestination(33502U);
    msg.setDestinationEntity(169U);
    msg.utc_time = 0.778223126575472;
    msg.reason = 202U;

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
    msg.setTimeStamp(0.003884755027732889);
    msg.setSource(4165U);
    msg.setSourceEntity(142U);
    msg.setDestination(37699U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.9422972784116501;
    msg.reason = 231U;

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
    msg.setTimeStamp(0.5656109658055531);
    msg.setSource(47067U);
    msg.setSourceEntity(110U);
    msg.setDestination(63595U);
    msg.setDestinationEntity(221U);
    msg.utc_time = 0.5670045551538931;
    msg.reason = 118U;

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
    msg.setTimeStamp(0.8940749794766152);
    msg.setSource(26379U);
    msg.setSourceEntity(137U);
    msg.setDestination(12547U);
    msg.setDestinationEntity(144U);
    msg.id = 188U;
    msg.range = 0.2226574170921437;
    msg.acceptance = 71U;

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
    msg.setTimeStamp(0.32774461914037);
    msg.setSource(41907U);
    msg.setSourceEntity(97U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(101U);
    msg.id = 61U;
    msg.range = 0.914245874116747;
    msg.acceptance = 211U;

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
    msg.setTimeStamp(0.05540327833137204);
    msg.setSource(65059U);
    msg.setSourceEntity(115U);
    msg.setDestination(22492U);
    msg.setDestinationEntity(182U);
    msg.id = 245U;
    msg.range = 0.3184680887182064;
    msg.acceptance = 218U;

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
    msg.setTimeStamp(0.8099113803596254);
    msg.setSource(28249U);
    msg.setSourceEntity(24U);
    msg.setDestination(49655U);
    msg.setDestinationEntity(125U);
    msg.type = 156U;
    msg.reason = 44U;
    msg.value = 0.40263495220667067;
    msg.timestep = 0.1553719208434462;

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
    msg.setTimeStamp(0.989262456774386);
    msg.setSource(9312U);
    msg.setSourceEntity(156U);
    msg.setDestination(30390U);
    msg.setDestinationEntity(13U);
    msg.type = 15U;
    msg.reason = 84U;
    msg.value = 0.44480925485732437;
    msg.timestep = 0.8440886907797477;

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
    msg.setTimeStamp(0.4841982493202177);
    msg.setSource(52381U);
    msg.setSourceEntity(138U);
    msg.setDestination(31231U);
    msg.setDestinationEntity(132U);
    msg.type = 147U;
    msg.reason = 217U;
    msg.value = 0.7176210870822561;
    msg.timestep = 0.25373096580847865;

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
    msg.setTimeStamp(0.20317516563933402);
    msg.setSource(63862U);
    msg.setSourceEntity(81U);
    msg.setDestination(36618U);
    msg.setDestinationEntity(123U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EXKFGAWWKAIGXYFTHCBUNNEQJDJHCLIUSSQIXJMVSDYDTMHFQBVVLCZIDFIGKRDAHQQVPPPZMZGEYWLVZSBYYLCRZMBKAWWOJTBQJCUPWGKOLUFIOMJKIYCYBOZ");
    tmp_msg_0.lat = 0.3286162549872763;
    tmp_msg_0.lon = 0.4557636721312446;
    tmp_msg_0.depth = 0.7085439148107379;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 189U;
    tmp_msg_0.transponder_delay = 122U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4078500642919498;
    msg.y = 0.05700424344650157;
    msg.var_x = 0.023108120631877394;
    msg.var_y = 0.49082715483743145;
    msg.distance = 0.5808766304171218;

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
    msg.setTimeStamp(0.9954854712642379);
    msg.setSource(50799U);
    msg.setSourceEntity(20U);
    msg.setDestination(42276U);
    msg.setDestinationEntity(235U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CYNIRUDLFPXRWZESVVPGFYIHJCLMFJEPVRJQFSQFXWGKPVADALRJKCDQBNUTOQAPOTELGMGBNXZZGBHCDOSBTJAIBVUZDDNQNUXXZCXRDCSDSKT");
    tmp_msg_0.lat = 0.009161851387058828;
    tmp_msg_0.lon = 0.47547846969772756;
    tmp_msg_0.depth = 0.38640052892910215;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 191U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.11857440925533247;
    msg.y = 0.21582950479186547;
    msg.var_x = 0.44443004980776324;
    msg.var_y = 0.08080760978750501;
    msg.distance = 0.9135582962577682;

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
    msg.setTimeStamp(0.35981775738376365);
    msg.setSource(8088U);
    msg.setSourceEntity(161U);
    msg.setDestination(26135U);
    msg.setDestinationEntity(166U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NGFBZZCEPAADQOKSEUTAOTGIAXDXWZKJYJOUVIMHFMMBCKTQLPHQXWPWSQXKULUTJ");
    tmp_msg_0.lat = 0.28012913460104494;
    tmp_msg_0.lon = 0.05788399811927336;
    tmp_msg_0.depth = 0.20421120437243767;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 100U;
    tmp_msg_0.transponder_delay = 209U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8684682842535213;
    msg.y = 0.09541588984464555;
    msg.var_x = 0.012293971292341332;
    msg.var_y = 0.28478485265782183;
    msg.distance = 0.05232147104110951;

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
    msg.setTimeStamp(0.31465530415397214);
    msg.setSource(46800U);
    msg.setSourceEntity(189U);
    msg.setDestination(48430U);
    msg.setDestinationEntity(147U);
    msg.state = 145U;

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
    msg.setTimeStamp(0.017367300560360843);
    msg.setSource(26835U);
    msg.setSourceEntity(115U);
    msg.setDestination(31877U);
    msg.setDestinationEntity(58U);
    msg.state = 141U;

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
    msg.setTimeStamp(0.7266217126304004);
    msg.setSource(11417U);
    msg.setSourceEntity(0U);
    msg.setDestination(15912U);
    msg.setDestinationEntity(182U);
    msg.state = 161U;

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
    msg.setTimeStamp(0.8034713286564394);
    msg.setSource(37017U);
    msg.setSourceEntity(25U);
    msg.setDestination(44267U);
    msg.setDestinationEntity(40U);
    msg.x = 0.9448060312499389;
    msg.y = 0.7081000382787015;
    msg.z = 0.03980737663884926;

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
    msg.setTimeStamp(0.7323162134486226);
    msg.setSource(55244U);
    msg.setSourceEntity(231U);
    msg.setDestination(38390U);
    msg.setDestinationEntity(228U);
    msg.x = 0.8598812617967408;
    msg.y = 0.7862441437085352;
    msg.z = 0.2582729407775167;

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
    msg.setTimeStamp(0.20458784755060833);
    msg.setSource(51730U);
    msg.setSourceEntity(31U);
    msg.setDestination(27396U);
    msg.setDestinationEntity(32U);
    msg.x = 0.835485917708014;
    msg.y = 0.5438403649165691;
    msg.z = 0.8570384784887574;

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
    msg.setTimeStamp(0.05135630067447772);
    msg.setSource(19683U);
    msg.setSourceEntity(225U);
    msg.setDestination(28092U);
    msg.setDestinationEntity(214U);
    msg.va = 0.6119293139887658;
    msg.aoa = 0.5577993246930597;
    msg.ssa = 0.19617020578505473;

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
    msg.setTimeStamp(0.9873835222253022);
    msg.setSource(51797U);
    msg.setSourceEntity(205U);
    msg.setDestination(37104U);
    msg.setDestinationEntity(59U);
    msg.va = 0.9453318474332572;
    msg.aoa = 0.3787718758700398;
    msg.ssa = 0.9615911910003891;

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
    msg.setTimeStamp(0.15089937665747122);
    msg.setSource(59741U);
    msg.setSourceEntity(21U);
    msg.setDestination(15060U);
    msg.setDestinationEntity(185U);
    msg.va = 0.4466518512498997;
    msg.aoa = 0.9656048772617749;
    msg.ssa = 0.12823324699745053;

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
    msg.setTimeStamp(0.8002442627297146);
    msg.setSource(20283U);
    msg.setSourceEntity(247U);
    msg.setDestination(17806U);
    msg.setDestinationEntity(225U);
    msg.value = 0.395856054822217;

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
    msg.setTimeStamp(0.9190262250658467);
    msg.setSource(6619U);
    msg.setSourceEntity(128U);
    msg.setDestination(51026U);
    msg.setDestinationEntity(36U);
    msg.value = 0.3045426841513291;

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
    msg.setTimeStamp(0.2659932668479086);
    msg.setSource(47456U);
    msg.setSourceEntity(182U);
    msg.setDestination(27528U);
    msg.setDestinationEntity(38U);
    msg.value = 0.7972423990338354;

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
    msg.setTimeStamp(0.6916687064339359);
    msg.setSource(32686U);
    msg.setSourceEntity(32U);
    msg.setDestination(46520U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7931719490596547;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.4966742235840439);
    msg.setSource(14256U);
    msg.setSourceEntity(252U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(249U);
    msg.value = 0.09240251492700235;
    msg.z_units = 171U;

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
    msg.setTimeStamp(0.5381392570315323);
    msg.setSource(47275U);
    msg.setSourceEntity(173U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(201U);
    msg.value = 0.3364560518330084;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.11822921363488781);
    msg.setSource(59328U);
    msg.setSourceEntity(150U);
    msg.setDestination(18343U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9451834129414349;
    msg.speed_units = 183U;

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
    msg.setTimeStamp(0.59574914571395);
    msg.setSource(31944U);
    msg.setSourceEntity(157U);
    msg.setDestination(62394U);
    msg.setDestinationEntity(86U);
    msg.value = 0.42361877197388376;
    msg.speed_units = 225U;

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
    msg.setTimeStamp(0.9322723662504113);
    msg.setSource(14819U);
    msg.setSourceEntity(209U);
    msg.setDestination(52381U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8796652762584318;
    msg.speed_units = 56U;

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
    msg.setTimeStamp(0.1506375591238044);
    msg.setSource(45993U);
    msg.setSourceEntity(247U);
    msg.setDestination(36174U);
    msg.setDestinationEntity(31U);
    msg.value = 0.610981811863123;

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
    msg.setTimeStamp(0.2961166294447569);
    msg.setSource(14896U);
    msg.setSourceEntity(201U);
    msg.setDestination(44887U);
    msg.setDestinationEntity(69U);
    msg.value = 0.7945518922926887;

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
    msg.setTimeStamp(0.6022152199823354);
    msg.setSource(43282U);
    msg.setSourceEntity(109U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(144U);
    msg.value = 0.438819504048499;

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
    msg.setTimeStamp(0.33129173546282387);
    msg.setSource(54239U);
    msg.setSourceEntity(253U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7812872544369375;

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
    msg.setTimeStamp(0.10785703136198399);
    msg.setSource(54011U);
    msg.setSourceEntity(221U);
    msg.setDestination(54083U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7553067989254495;

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
    msg.setTimeStamp(0.7183690584915632);
    msg.setSource(64857U);
    msg.setSourceEntity(104U);
    msg.setDestination(19919U);
    msg.setDestinationEntity(211U);
    msg.value = 0.4429315279233179;

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
    msg.setTimeStamp(0.086444432601265);
    msg.setSource(58337U);
    msg.setSourceEntity(214U);
    msg.setDestination(64883U);
    msg.setDestinationEntity(203U);
    msg.value = 0.8560480291216599;

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
    msg.setTimeStamp(0.4174777897402763);
    msg.setSource(30228U);
    msg.setSourceEntity(184U);
    msg.setDestination(1137U);
    msg.setDestinationEntity(90U);
    msg.value = 0.2838423645357757;

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
    msg.setTimeStamp(0.9521555177178911);
    msg.setSource(17874U);
    msg.setSourceEntity(219U);
    msg.setDestination(25485U);
    msg.setDestinationEntity(203U);
    msg.value = 0.42154579317010865;

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
    msg.setTimeStamp(0.3108528341832294);
    msg.setSource(45705U);
    msg.setSourceEntity(41U);
    msg.setDestination(30422U);
    msg.setDestinationEntity(7U);
    msg.path_ref = 287323475U;
    msg.start_lat = 0.5119142298174983;
    msg.start_lon = 0.008732515241901218;
    msg.start_z = 0.398064712341196;
    msg.start_z_units = 33U;
    msg.end_lat = 0.21934688849825734;
    msg.end_lon = 0.7863920058519145;
    msg.end_z = 0.5440161877975135;
    msg.end_z_units = 5U;
    msg.speed = 0.8943430168809755;
    msg.speed_units = 183U;
    msg.lradius = 0.4859873106583189;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.540641625448363);
    msg.setSource(9408U);
    msg.setSourceEntity(47U);
    msg.setDestination(49548U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 1390814590U;
    msg.start_lat = 0.3839621300853333;
    msg.start_lon = 0.9864337361872113;
    msg.start_z = 0.7886734838344155;
    msg.start_z_units = 249U;
    msg.end_lat = 0.7346414288515957;
    msg.end_lon = 0.1334604687633597;
    msg.end_z = 0.1291099542545856;
    msg.end_z_units = 91U;
    msg.speed = 0.5101642528828872;
    msg.speed_units = 6U;
    msg.lradius = 0.9931070163035597;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.9161586364405511);
    msg.setSource(20978U);
    msg.setSourceEntity(36U);
    msg.setDestination(40971U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 2941878833U;
    msg.start_lat = 0.07796250919533854;
    msg.start_lon = 0.8646408773428587;
    msg.start_z = 0.4670331439430304;
    msg.start_z_units = 52U;
    msg.end_lat = 0.4581448233778236;
    msg.end_lon = 0.9665672721257365;
    msg.end_z = 0.547963071243157;
    msg.end_z_units = 217U;
    msg.speed = 0.006926648588187478;
    msg.speed_units = 27U;
    msg.lradius = 0.18761145486351682;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.9701842969718573);
    msg.setSource(29334U);
    msg.setSourceEntity(179U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(105U);
    msg.x = 0.7712829242368049;
    msg.y = 0.7707410388762524;
    msg.z = 0.5023514317072787;
    msg.k = 0.2199136441326106;
    msg.m = 0.6453332929584307;
    msg.n = 0.7925558319127542;
    msg.flags = 211U;

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
    msg.setTimeStamp(0.34070909521760917);
    msg.setSource(57896U);
    msg.setSourceEntity(223U);
    msg.setDestination(46443U);
    msg.setDestinationEntity(50U);
    msg.x = 0.13196344741460353;
    msg.y = 0.5601125211415429;
    msg.z = 0.7429809009226457;
    msg.k = 0.9109192753850105;
    msg.m = 0.28258245359759004;
    msg.n = 0.008766117325572309;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.4953641257252399);
    msg.setSource(20948U);
    msg.setSourceEntity(165U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(37U);
    msg.x = 0.7596983877124946;
    msg.y = 0.2966208539645855;
    msg.z = 0.3203149578454638;
    msg.k = 0.8625808310422127;
    msg.m = 0.3192875848297567;
    msg.n = 0.3785852220824877;
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
    msg.setTimeStamp(0.8693016905286549);
    msg.setSource(59500U);
    msg.setSourceEntity(42U);
    msg.setDestination(4050U);
    msg.setDestinationEntity(228U);
    msg.value = 0.7029851310168984;

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
    msg.setTimeStamp(0.9383596038320574);
    msg.setSource(3436U);
    msg.setSourceEntity(151U);
    msg.setDestination(24934U);
    msg.setDestinationEntity(84U);
    msg.value = 0.49435272128036745;

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
    msg.setTimeStamp(0.8774571627483431);
    msg.setSource(26862U);
    msg.setSourceEntity(17U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(88U);
    msg.value = 0.35282496825141896;

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
    msg.setTimeStamp(0.0325300317802899);
    msg.setSource(29597U);
    msg.setSourceEntity(74U);
    msg.setDestination(57149U);
    msg.setDestinationEntity(22U);
    msg.u = 0.8060567142693271;
    msg.v = 0.3874500679635282;
    msg.w = 0.44965225773331574;
    msg.p = 0.8360375073653294;
    msg.q = 0.7154946601422734;
    msg.r = 0.2347934097870783;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.4395741060314181);
    msg.setSource(47955U);
    msg.setSourceEntity(160U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(118U);
    msg.u = 0.3850645080330769;
    msg.v = 0.3104946621049325;
    msg.w = 0.7793436302631371;
    msg.p = 0.7508957799594737;
    msg.q = 0.4164572021364483;
    msg.r = 0.77650852094146;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.7137440320332443);
    msg.setSource(64710U);
    msg.setSourceEntity(168U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(252U);
    msg.u = 0.6723865007652217;
    msg.v = 0.07782661986183992;
    msg.w = 0.08185413826161259;
    msg.p = 0.1709355628021778;
    msg.q = 0.5457926711624935;
    msg.r = 0.4832433510841543;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.2964096970771465);
    msg.setSource(51823U);
    msg.setSourceEntity(98U);
    msg.setDestination(39585U);
    msg.setDestinationEntity(53U);
    msg.path_ref = 4169944386U;
    msg.start_lat = 0.8028084546855375;
    msg.start_lon = 0.18496613197680212;
    msg.start_z = 0.7306797467378746;
    msg.start_z_units = 213U;
    msg.end_lat = 0.889418686378295;
    msg.end_lon = 0.22237104805611219;
    msg.end_z = 0.4692160493903832;
    msg.end_z_units = 49U;
    msg.lradius = 0.9752875930627506;
    msg.flags = 88U;
    msg.x = 0.2795238874240856;
    msg.y = 0.9010264176698088;
    msg.z = 0.20135572279864733;
    msg.vx = 0.6673581088066384;
    msg.vy = 0.8123599402898516;
    msg.vz = 0.20202434279577686;
    msg.course_error = 0.15394509817926216;
    msg.eta = 61091U;

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
    msg.setTimeStamp(0.5074353815087238);
    msg.setSource(42771U);
    msg.setSourceEntity(189U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(210U);
    msg.path_ref = 1326665404U;
    msg.start_lat = 0.40913669218265036;
    msg.start_lon = 0.3509254098206146;
    msg.start_z = 0.7290412536050975;
    msg.start_z_units = 75U;
    msg.end_lat = 0.7666940407987376;
    msg.end_lon = 0.4861558011890007;
    msg.end_z = 0.21393522556040134;
    msg.end_z_units = 131U;
    msg.lradius = 0.34687227058467274;
    msg.flags = 39U;
    msg.x = 0.21975913670928138;
    msg.y = 0.6417078231606248;
    msg.z = 0.11233173876947278;
    msg.vx = 0.576481086392098;
    msg.vy = 0.7226267459351133;
    msg.vz = 0.4396103575506696;
    msg.course_error = 0.40908385362992195;
    msg.eta = 25538U;

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
    msg.setTimeStamp(0.44805448413082205);
    msg.setSource(53889U);
    msg.setSourceEntity(109U);
    msg.setDestination(63370U);
    msg.setDestinationEntity(50U);
    msg.path_ref = 1034457138U;
    msg.start_lat = 0.2202202603332012;
    msg.start_lon = 0.9114654747569375;
    msg.start_z = 0.6412578574726269;
    msg.start_z_units = 187U;
    msg.end_lat = 0.4008968350222174;
    msg.end_lon = 0.31348456921123935;
    msg.end_z = 0.3265603540605695;
    msg.end_z_units = 217U;
    msg.lradius = 0.1599214583906312;
    msg.flags = 208U;
    msg.x = 0.9658486610400134;
    msg.y = 0.8801792212693528;
    msg.z = 0.4470803521621163;
    msg.vx = 0.9959237319670438;
    msg.vy = 0.5175474720821626;
    msg.vz = 0.3833362130123379;
    msg.course_error = 0.9435448736334927;
    msg.eta = 7500U;

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
    msg.setTimeStamp(0.34420922333169846);
    msg.setSource(18503U);
    msg.setSourceEntity(224U);
    msg.setDestination(34053U);
    msg.setDestinationEntity(220U);
    msg.k = 0.772603622474136;
    msg.m = 0.8196369472760353;
    msg.n = 0.14989229805808546;

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
    msg.setTimeStamp(0.26159818804033486);
    msg.setSource(19776U);
    msg.setSourceEntity(121U);
    msg.setDestination(36167U);
    msg.setDestinationEntity(117U);
    msg.k = 0.36814283624539057;
    msg.m = 0.9037063533965464;
    msg.n = 0.8759369409218004;

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
    msg.setTimeStamp(0.5807030446100511);
    msg.setSource(41893U);
    msg.setSourceEntity(16U);
    msg.setDestination(24289U);
    msg.setDestinationEntity(145U);
    msg.k = 0.8860882096066276;
    msg.m = 0.04927500830021059;
    msg.n = 0.7688051355651466;

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
    msg.setTimeStamp(0.15929807229347337);
    msg.setSource(10992U);
    msg.setSourceEntity(12U);
    msg.setDestination(35180U);
    msg.setDestinationEntity(214U);
    msg.p = 0.15207576147022228;
    msg.i = 0.8170719841835307;
    msg.d = 0.7277548339111763;
    msg.a = 0.643964567716207;

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
    msg.setTimeStamp(0.18254743142483443);
    msg.setSource(33210U);
    msg.setSourceEntity(183U);
    msg.setDestination(15192U);
    msg.setDestinationEntity(178U);
    msg.p = 0.9528894171815919;
    msg.i = 0.6260576393082785;
    msg.d = 0.841580498243377;
    msg.a = 0.5126783342212697;

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
    msg.setTimeStamp(0.07230524735734833);
    msg.setSource(9151U);
    msg.setSourceEntity(240U);
    msg.setDestination(32011U);
    msg.setDestinationEntity(149U);
    msg.p = 0.46112630879098526;
    msg.i = 0.16008412623791712;
    msg.d = 0.3502195069336562;
    msg.a = 0.2996721454324548;

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
    msg.setTimeStamp(0.8952449671587737);
    msg.setSource(55223U);
    msg.setSourceEntity(155U);
    msg.setDestination(8682U);
    msg.setDestinationEntity(29U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.3215826894618997);
    msg.setSource(40053U);
    msg.setSourceEntity(147U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(228U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.5075591790204094);
    msg.setSource(43840U);
    msg.setSourceEntity(124U);
    msg.setDestination(25392U);
    msg.setDestinationEntity(235U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.1383613649594274);
    msg.setSource(48374U);
    msg.setSourceEntity(107U);
    msg.setDestination(56254U);
    msg.setDestinationEntity(19U);
    msg.x = 0.4334399310488557;
    msg.y = 0.3095570804301574;
    msg.z = 0.8893021490306094;
    msg.vx = 0.12506844287279884;
    msg.vy = 0.9831364882644915;
    msg.vz = 0.10596292785738248;
    msg.ax = 0.8668010140802963;
    msg.ay = 0.055028982580631824;
    msg.az = 0.6469274380462801;
    msg.flags = 57012U;

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
    msg.setTimeStamp(0.053977103588062514);
    msg.setSource(21042U);
    msg.setSourceEntity(185U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(192U);
    msg.x = 0.7617449368044045;
    msg.y = 0.1284273416642283;
    msg.z = 0.12068227620367789;
    msg.vx = 0.8911238576467478;
    msg.vy = 0.6801544419770531;
    msg.vz = 0.30939437081330123;
    msg.ax = 0.26803280452325007;
    msg.ay = 0.39934543125607835;
    msg.az = 0.1741836829841077;
    msg.flags = 48418U;

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
    msg.setTimeStamp(0.4363901258707825);
    msg.setSource(46865U);
    msg.setSourceEntity(89U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(182U);
    msg.x = 0.01901593901363441;
    msg.y = 0.9181144418473324;
    msg.z = 0.27433036794070575;
    msg.vx = 0.8234006917744864;
    msg.vy = 0.10316956315837666;
    msg.vz = 0.4190873733845414;
    msg.ax = 0.7166548183985739;
    msg.ay = 0.17106381083736544;
    msg.az = 0.761049578251871;
    msg.flags = 50133U;

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
    msg.setTimeStamp(0.49449342978537425);
    msg.setSource(14153U);
    msg.setSourceEntity(140U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(55U);
    msg.value = 0.40554189265220153;

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
    msg.setTimeStamp(0.9602652985084578);
    msg.setSource(65169U);
    msg.setSourceEntity(171U);
    msg.setDestination(4157U);
    msg.setDestinationEntity(68U);
    msg.value = 0.8378819329382589;

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
    msg.setTimeStamp(0.005902914340432663);
    msg.setSource(9663U);
    msg.setSourceEntity(66U);
    msg.setDestination(58472U);
    msg.setDestinationEntity(120U);
    msg.value = 0.13228282009592318;

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
    msg.setTimeStamp(0.5226355844399887);
    msg.setSource(13796U);
    msg.setSourceEntity(173U);
    msg.setDestination(63093U);
    msg.setDestinationEntity(190U);
    msg.timeout = 39899U;
    msg.lat = 0.36233443099077856;
    msg.lon = 0.21275364004115216;
    msg.z = 0.6874256932812509;
    msg.z_units = 156U;
    msg.speed = 0.78015263156878;
    msg.speed_units = 162U;
    msg.roll = 0.7414342046171861;
    msg.pitch = 0.4964865985825867;
    msg.yaw = 0.18887908957445254;
    msg.custom.assign("WWZCHYAXMFRAWRBGTUTPYUKQRTUFKWLTVYFCBARANYPOIMVIHEHEGHJPDSARIDJNUQCGONOFKMPERMBWFVLYMQCOBTGEBPQFTWJZDLNTGIKOJDKQJDKNDZZSCJQUKWBJKZSFJHASREHHCDAGXYKRSJPMGUXDPWBWLMBEOYEXDYXFRICGLBQLFPIIHUGA");

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
    msg.setTimeStamp(0.90037105141845);
    msg.setSource(44159U);
    msg.setSourceEntity(201U);
    msg.setDestination(25941U);
    msg.setDestinationEntity(52U);
    msg.timeout = 43063U;
    msg.lat = 0.31508238902490604;
    msg.lon = 0.04119976588429164;
    msg.z = 0.7422105021961478;
    msg.z_units = 48U;
    msg.speed = 0.46274559079953226;
    msg.speed_units = 216U;
    msg.roll = 0.19744192931632787;
    msg.pitch = 0.05130332463735354;
    msg.yaw = 0.9800803371713955;
    msg.custom.assign("DVDJHQBGFDVRDMYPZMVODQUZNXNTJJLTLINLUOWQW");

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
    msg.setTimeStamp(0.5288869822164265);
    msg.setSource(52035U);
    msg.setSourceEntity(236U);
    msg.setDestination(50667U);
    msg.setDestinationEntity(9U);
    msg.timeout = 7661U;
    msg.lat = 0.9021196228170454;
    msg.lon = 0.3898193888391557;
    msg.z = 0.3745466771838043;
    msg.z_units = 235U;
    msg.speed = 0.5485243355514396;
    msg.speed_units = 78U;
    msg.roll = 0.8583158007405376;
    msg.pitch = 0.984766230567628;
    msg.yaw = 0.8325301233144791;
    msg.custom.assign("NYZNQCGVNHSQSQILUEDVCBOVXNWPNKBKLPDETCICXCLVFFOOWYIWXHMTOFAJQPFTKCBXOHEWBEZNUCMPIPLYXEDBPRLEJELLZIRORQNVKCJDYPTUVNSMAKDLPXLPGAJAISJKWYZVFMSTTWBGKYSMQHFYTUWTIYVZGQIYSGQJMREDLMMZJDZSRJJAWMCHWRBAUJFNDQFSHAUYABTHXTGOAGFKZQGSXX");

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
    msg.setTimeStamp(0.45668245016142306);
    msg.setSource(25418U);
    msg.setSourceEntity(198U);
    msg.setDestination(18860U);
    msg.setDestinationEntity(43U);
    msg.timeout = 20838U;
    msg.lat = 0.7157951170952183;
    msg.lon = 0.065229159473837;
    msg.z = 0.9059121044389696;
    msg.z_units = 197U;
    msg.speed = 0.9975772024499967;
    msg.speed_units = 125U;
    msg.duration = 2020U;
    msg.radius = 0.16529885158082946;
    msg.flags = 244U;
    msg.custom.assign("GJCFDMUXWZRCZLEFLGFFNINKSPYPHJJSUCIYWQLASWEXXZMDQQIDVGHMKFFZLEUKKVWRKAKMEYUXVIPJTZLNRNAEEFRBAEHTWGJPODKGNQOMXPDBGERFLUTUKQMWXHSHFIHJOCTTVNDHIVOPTBJTKIDMVYAAJRWHVSQIBFMRSSTOWNAPNRCBQMOBAWDBUPNUZTVYZOSVZYAYDZJLGPZMCGBGULHXSCRWYXLOIRYBNACUPHQK");

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
    msg.setTimeStamp(0.47427420194278247);
    msg.setSource(21158U);
    msg.setSourceEntity(172U);
    msg.setDestination(64940U);
    msg.setDestinationEntity(64U);
    msg.timeout = 46662U;
    msg.lat = 0.3285884822395405;
    msg.lon = 0.14101413916399275;
    msg.z = 0.7271149566909622;
    msg.z_units = 30U;
    msg.speed = 0.18791465791975037;
    msg.speed_units = 245U;
    msg.duration = 13686U;
    msg.radius = 0.626443698405159;
    msg.flags = 59U;
    msg.custom.assign("FZKVTFBSCZXBRFBRSFDOAKVWJRUNWLIEIALUMWGDELLTSSHLJCDZXCWOPMVPTAFCQCCNMTUHGXJOJYWKHORCDQWXYGSNJZXBMNATUHFNTZCFSFOYXUBPJGVKYISJQVGTUYWPUJZGAXHLTLXBDMPYYCSNZOPHADQEMIKBUXILJBGQBPRIRVDIHDEEOEMWJSEYAZXOKRUPNEYF");

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
    msg.setTimeStamp(0.1487880760701359);
    msg.setSource(12616U);
    msg.setSourceEntity(188U);
    msg.setDestination(56423U);
    msg.setDestinationEntity(193U);
    msg.timeout = 3828U;
    msg.lat = 0.7879648102331033;
    msg.lon = 0.6315482680073057;
    msg.z = 0.0929923567125116;
    msg.z_units = 112U;
    msg.speed = 0.9583658483783081;
    msg.speed_units = 51U;
    msg.duration = 60873U;
    msg.radius = 0.2513183263886082;
    msg.flags = 83U;
    msg.custom.assign("VGUVHSNQZBBXYKKRZOTEDJDNKCJMISFWCZFEGVIJLFQALPSTCGCPPRRMBTNSJQEATHIUZCVFPKXYVWCYZTHUEBGFVDFEWXRDVXYYYWTEALUDGIQALTFLAIVRSGMCTYEEULPXDZQWZWMRONRUWMMHBUGKJFKXIPCVXSWDOJVSPDMBXTQBTLYKJKNUPYHJGZHUJEHCOHOO");

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
    msg.setTimeStamp(0.7451993386167377);
    msg.setSource(6404U);
    msg.setSourceEntity(177U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(77U);
    msg.custom.assign("BSLHPDMIMVSHKRIOAKCJODJZCFJXQZHBPIILZJQFKALFRNRVLACVEPADAVQXXGWBSJPXJTVYNGCUPBKIBKHAACMDVYBWEJBJNTATNUZRSLIRKBQWTZXHEJXVNJKSZEGOPVWLDWVGNMITILYYUOCZNKEQZRMNHEOLTXMUPUCZUZWVRFGASTYTOQNDESWLGCGEDFSROEFQCAUFOMPXSTYS");

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
    msg.setTimeStamp(0.4012464788058536);
    msg.setSource(53162U);
    msg.setSourceEntity(173U);
    msg.setDestination(29180U);
    msg.setDestinationEntity(88U);
    msg.custom.assign("IAOKWTNZZKYXVZSWWCLHDDWKZFRVSJVRZJYCYLWAWDNBEUJACSIPUDEIFI");

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
    msg.setTimeStamp(0.4166080980705871);
    msg.setSource(33851U);
    msg.setSourceEntity(199U);
    msg.setDestination(10461U);
    msg.setDestinationEntity(140U);
    msg.custom.assign("KGLBAXANVTHEHBQSSSLIOURGYKSTMOXWXUTPKEJNFFINNJKEVIUXDFDVZUEO");

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
    msg.setTimeStamp(0.5473055562137156);
    msg.setSource(20439U);
    msg.setSourceEntity(74U);
    msg.setDestination(866U);
    msg.setDestinationEntity(85U);
    msg.timeout = 11184U;
    msg.lat = 0.6767078064400189;
    msg.lon = 0.4543685580404292;
    msg.z = 0.056845785262560455;
    msg.z_units = 211U;
    msg.duration = 13770U;
    msg.speed = 0.09779695854964143;
    msg.speed_units = 116U;
    msg.type = 8U;
    msg.radius = 0.9708625309140981;
    msg.length = 0.7711068760956182;
    msg.bearing = 0.27400649828686996;
    msg.direction = 243U;
    msg.custom.assign("YQXQQKVQKNCHJSZZRGYXTNTMDEELPGYMIZCOBAXOLZPJJVWYUNJHERAKLTMGIFBYUVCVQDEBJFPVGOMBJKAOZJIHRMXSMTOIPIAYVGMXZCNOYGFADSRXFWHBKGCAELEHPNDAXNTWTRTRSNNNGXUMIFLOBMBUDADHASGFDKVIZBQTLQMUCSCHVQYJRFZISOYVLGTKEKY");

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
    msg.setTimeStamp(0.39471041823614483);
    msg.setSource(12361U);
    msg.setSourceEntity(107U);
    msg.setDestination(24469U);
    msg.setDestinationEntity(43U);
    msg.timeout = 22100U;
    msg.lat = 0.45908157473327227;
    msg.lon = 0.43058366460862507;
    msg.z = 0.19146111205228988;
    msg.z_units = 139U;
    msg.duration = 39487U;
    msg.speed = 0.07312915029804479;
    msg.speed_units = 33U;
    msg.type = 186U;
    msg.radius = 0.7332438944515554;
    msg.length = 0.6268663174439268;
    msg.bearing = 0.6255939087642424;
    msg.direction = 201U;
    msg.custom.assign("NUVMCMZDAPXKQSBBFRJJGOJWFRPVRRQBKSXSJUTDBCGYVWEQZJICDXLAZJIHRULTPHNWCLSJVGSPUAABTLECDKDFEPWTNJFYFKDLYRSQRZVWIEMKKXCVWHXNNOEOCYTPDHGZIRIPXKCVYUG");

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
    msg.setTimeStamp(0.6315938464800254);
    msg.setSource(30945U);
    msg.setSourceEntity(99U);
    msg.setDestination(49050U);
    msg.setDestinationEntity(84U);
    msg.timeout = 18301U;
    msg.lat = 0.9150165849144195;
    msg.lon = 0.783434598684767;
    msg.z = 0.709489073658226;
    msg.z_units = 241U;
    msg.duration = 62320U;
    msg.speed = 0.40732439796288344;
    msg.speed_units = 175U;
    msg.type = 34U;
    msg.radius = 0.74240406667535;
    msg.length = 0.7607985716388793;
    msg.bearing = 0.024939462667440848;
    msg.direction = 103U;
    msg.custom.assign("EHSOKESYBOADNETLLVRZZKKOWKVZFPFDQOXGEIQOXYICARXCPEDWIUYKJRBHAWBVPRENJLESADTUTVAQEMTIHDPCGISOFVVXDDBVAALHZCLSXAWFQCIBSIQYMGNJXGNRDNRTQJMLBYCHUMCYRVPOFSSWMKAULGYFBPPFSRPNOCKJXUJWZKZMBGJXLFWPHQLOIMUIWUBJXTNZQYETUNFPYMEWH");

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
    msg.setTimeStamp(0.8490210703443257);
    msg.setSource(53882U);
    msg.setSourceEntity(53U);
    msg.setDestination(58376U);
    msg.setDestinationEntity(140U);
    msg.duration = 54616U;
    msg.custom.assign("APXTNDUTJLVYIZKETMXZCNAFWBKSNSHKMYABBHFUJNNMXJTVZBCFPWUTKRPRLYRDAIWKVYQCTWQUINYVWBRZISHXJOJPBODYVLRKGBSOPWHQFHQHZWJMXNUOBOMNCAZKUSSQLKHGXDJHETPLVQEKQGEZAGCDYGWLGLHOWCGKBUQXPMFOIGNRVZTIVAXNVOZHUOCDJL");

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
    msg.setTimeStamp(0.37783675191960653);
    msg.setSource(3622U);
    msg.setSourceEntity(181U);
    msg.setDestination(33379U);
    msg.setDestinationEntity(178U);
    msg.duration = 25162U;
    msg.custom.assign("CJSHUVSAZUPVRVFKXTIFMNMMFIZJEONAMCTWOENNPGGBDVMGBHZQOSSOPTZMFFSEOHHKJFVEKYTHSCRHXJOQEYWWEKGRVIRMIFOQGUVXRREZJCUKLBSLIMQUPNEKAYXDAGTQYXKRMLPUSODHRELDBLCGCNWYTZBLCWX");

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
    msg.setTimeStamp(0.18183342521830825);
    msg.setSource(9348U);
    msg.setSourceEntity(212U);
    msg.setDestination(53885U);
    msg.setDestinationEntity(7U);
    msg.duration = 2201U;
    msg.custom.assign("MWKGJFHOGVBPXHZQJHNYWWVRJCPVIBOGFVPFBRTMIVQWZZGEXAGMUJMCFQMDOSYHKQDHSZGLHCJRFFSXEJAUWBAADMYPFTIKKBBWANIKXCRTRXSIKLQTTORTQQINDNAEN");

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
    msg.setTimeStamp(0.01583717690855846);
    msg.setSource(23747U);
    msg.setSourceEntity(145U);
    msg.setDestination(58624U);
    msg.setDestinationEntity(27U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3674278215U;
    tmp_msg_0.start_lat = 0.638443907790179;
    tmp_msg_0.start_lon = 0.7021213703402011;
    tmp_msg_0.start_z = 0.46841127037270325;
    tmp_msg_0.start_z_units = 61U;
    tmp_msg_0.end_lat = 0.03518384912015404;
    tmp_msg_0.end_lon = 0.7263945687520653;
    tmp_msg_0.end_z = 0.5054651531524654;
    tmp_msg_0.end_z_units = 8U;
    tmp_msg_0.speed = 0.015270407606029157;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.lradius = 0.5933698406361344;
    tmp_msg_0.flags = 114U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45819U;
    msg.custom.assign("KRMOQEREAOVPZIYGSWDSJCCFNPQFCLMZJOSPMVPAYVVTTMWSNIX");

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
    msg.setTimeStamp(0.541704042996228);
    msg.setSource(6856U);
    msg.setSourceEntity(23U);
    msg.setDestination(27331U);
    msg.setDestinationEntity(249U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.45276730221371286;
    msg.control.set(tmp_msg_0);
    msg.duration = 27449U;
    msg.custom.assign("TUVICHKORSCWTELJIGUDFMOJSBYXZUYZIQOWUQZBXCRWOKJALXDBDHHZBRRNTAEDLOPTBXVIAJMNMBMIHQRTOEBYFFSJFHOCGLQMJVHKVTQBYHXSURKSOWVPGVDTLRVKEZXDKGXENYZAIVBNTRFCQLSXTJDENMQEYSNGCAJSWMCVQUGYUIURDPWWZN");

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
    msg.setTimeStamp(0.5319841262319719);
    msg.setSource(55325U);
    msg.setSourceEntity(21U);
    msg.setDestination(18278U);
    msg.setDestinationEntity(57U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4952196538526137;
    tmp_msg_0.speed_units = 233U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23172U;
    msg.custom.assign("YVZPIMNKFMSYZQYXOTXZAFBXZYGENTDGEMDQHXTARBBNHDNSLHJVLAJLUISIIZWWUAYKWHXCOFPRVNIHYJTNPCOMVABHSGCJOVVMCBIKBQVRKSIBLGOIDAHCXWOAOUEXLEKWJJENUHEUXTNOTSPBCDZLVDYJKWQPZMJSONHSTQ");

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
    msg.setTimeStamp(0.858457020069507);
    msg.setSource(61509U);
    msg.setSourceEntity(225U);
    msg.setDestination(26514U);
    msg.setDestinationEntity(172U);
    msg.timeout = 57284U;
    msg.lat = 0.09648091417923155;
    msg.lon = 0.9248632393086278;
    msg.z = 0.30457291687098553;
    msg.z_units = 97U;
    msg.speed = 0.08649070091146038;
    msg.speed_units = 134U;
    msg.bearing = 0.5974049098178947;
    msg.cross_angle = 0.6693139031156464;
    msg.width = 0.9168182855990441;
    msg.length = 0.2121272384711832;
    msg.hstep = 0.4772606480598357;
    msg.coff = 54U;
    msg.alternation = 72U;
    msg.flags = 29U;
    msg.custom.assign("MWNZICPEIKBQOBXDMFXHAVSYTAJQDYSCPNOSJCLTITWYURTUDILYKLYKXUICRQFPGOKYZNBMPSWXWDKGVMMBVWAMMUAMRVTPAIHRRUVYCNOKQJNUJHQVSCPDIKBNEAZJROEBWUHRJEJT");

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
    msg.setTimeStamp(0.7818529872539275);
    msg.setSource(42046U);
    msg.setSourceEntity(77U);
    msg.setDestination(47012U);
    msg.setDestinationEntity(158U);
    msg.timeout = 21059U;
    msg.lat = 0.8190512623008007;
    msg.lon = 0.6018277675478538;
    msg.z = 0.7685638606582408;
    msg.z_units = 196U;
    msg.speed = 0.6073267542421522;
    msg.speed_units = 168U;
    msg.bearing = 0.23360623965068983;
    msg.cross_angle = 0.3310422792710812;
    msg.width = 0.5682388123942747;
    msg.length = 0.760073533361457;
    msg.hstep = 0.4271679343839697;
    msg.coff = 31U;
    msg.alternation = 112U;
    msg.flags = 96U;
    msg.custom.assign("IVLJOCQIVOSLWTEGPUAZKZMRAZTKDXUTUHDSYJJFMTKWXYOWFSMFBNECXAKUEKDOIRJDKBSBUOUJFCVTVAYHTKP");

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
    msg.setTimeStamp(0.769481517733483);
    msg.setSource(30979U);
    msg.setSourceEntity(222U);
    msg.setDestination(31365U);
    msg.setDestinationEntity(84U);
    msg.timeout = 51564U;
    msg.lat = 0.28895730192707947;
    msg.lon = 0.8129239762059033;
    msg.z = 0.510882808348048;
    msg.z_units = 248U;
    msg.speed = 0.8635040329092116;
    msg.speed_units = 49U;
    msg.bearing = 0.5126056974442023;
    msg.cross_angle = 0.06220630221466039;
    msg.width = 0.7688086538043295;
    msg.length = 0.7151456077709689;
    msg.hstep = 0.3833911991336991;
    msg.coff = 194U;
    msg.alternation = 47U;
    msg.flags = 202U;
    msg.custom.assign("BUIRJWLMGBSDSQCYWTONUZVMRDCUENWBQJZUOKIKZSQGATWDBNHBAFJECVXDBGYZXPRRTZPSZAFPPRMCZNHPIYOCFJFXKTJFKENLSFNHTCBEXQXBTEATFVADSILVMWUUBYIKGVXAGSHUGLHRDDPOMAEITVYQW");

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
    msg.setTimeStamp(0.02680683027900732);
    msg.setSource(39354U);
    msg.setSourceEntity(101U);
    msg.setDestination(40969U);
    msg.setDestinationEntity(71U);
    msg.timeout = 42962U;
    msg.lat = 0.1287572683046253;
    msg.lon = 0.6085919461517739;
    msg.z = 0.23347674897418347;
    msg.z_units = 177U;
    msg.speed = 0.3899093338058479;
    msg.speed_units = 75U;
    msg.custom.assign("WBOSEEOTQZMIHDFYYAYAAQFWLSJPSYZABCNHLCTRPKZNISIJEHBUDYOPWPLJR");

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
    msg.setTimeStamp(0.7269829539118471);
    msg.setSource(1495U);
    msg.setSourceEntity(246U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(92U);
    msg.timeout = 29494U;
    msg.lat = 0.3399817231668337;
    msg.lon = 0.3471471010928482;
    msg.z = 0.3456153886137773;
    msg.z_units = 159U;
    msg.speed = 0.9730511743634261;
    msg.speed_units = 11U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.733099260100774;
    tmp_msg_0.y = 0.896633977527341;
    tmp_msg_0.z = 0.889183973982076;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CNKZLFIKIWUCGTYSPMPHABQJVOLEVRIIGKPDNAHDNORHZJGOGKHKTFVQQOIMJUWQQJRGXNMDDEFBYAQQMTUIKFHVTCSVZTLCUNTIIOUVOUFSAELFYJEBYXOPRVXJXXYRGAEDXZPPATQJCRBXWSFFXOXDCMHSHYCAZLPQNOEUUSZBVWVRCYENYSECLZSOLDWLSNNMZYAGWIYKPVKZMWZRXNAIUTFT");

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
    msg.setTimeStamp(0.620200419746023);
    msg.setSource(34718U);
    msg.setSourceEntity(119U);
    msg.setDestination(10778U);
    msg.setDestinationEntity(141U);
    msg.timeout = 51101U;
    msg.lat = 0.5887613565013737;
    msg.lon = 0.9695148458932371;
    msg.z = 0.9975294322729014;
    msg.z_units = 247U;
    msg.speed = 0.48481650364504125;
    msg.speed_units = 247U;
    msg.custom.assign("BLMIOOWSOHLRPUEJWAYORQKKHEISYABNIEANMAPGZTQJTTLCPQHFYQWFMIQJFQUYOBLUIZEYWKUXRPLSGDKEFWCJENRFDTUPDVVZSTRNMZJNVHBGTCXNRHZDMIPXXKSVCPXCDUEVBDNLOBOEIQHACYKLQWARBKUEXLBDVXGWFFKMMKXGTSVWZJNVGYENUFHJZTXIGLYQOWCALPRKSFBPFCHJDCJDGITPYUZVZCYGJBOADASSMZ");

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
    msg.setTimeStamp(0.3257480904308028);
    msg.setSource(7515U);
    msg.setSourceEntity(157U);
    msg.setDestination(26813U);
    msg.setDestinationEntity(89U);
    msg.x = 0.26237213428909967;
    msg.y = 0.691850448732706;
    msg.z = 0.857743048962861;

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
    msg.setTimeStamp(0.9163918431599681);
    msg.setSource(11329U);
    msg.setSourceEntity(71U);
    msg.setDestination(729U);
    msg.setDestinationEntity(31U);
    msg.x = 0.6713140408179037;
    msg.y = 0.5553591834616003;
    msg.z = 0.4542054034246845;

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
    msg.setTimeStamp(0.7143446533089253);
    msg.setSource(3721U);
    msg.setSourceEntity(122U);
    msg.setDestination(26727U);
    msg.setDestinationEntity(155U);
    msg.x = 0.14351144706716534;
    msg.y = 0.47825212027333375;
    msg.z = 0.1051123389926234;

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
    msg.setTimeStamp(0.21672284165754896);
    msg.setSource(47912U);
    msg.setSourceEntity(111U);
    msg.setDestination(53581U);
    msg.setDestinationEntity(1U);
    msg.timeout = 57725U;
    msg.lat = 0.4195362211843846;
    msg.lon = 0.08256066371600856;
    msg.z = 0.17643666703795957;
    msg.z_units = 53U;
    msg.amplitude = 0.4286333981146293;
    msg.pitch = 0.5472841666838408;
    msg.speed = 0.8226128304881603;
    msg.speed_units = 168U;
    msg.custom.assign("ERDXQCHBTKXKMZRWFFUBBFQOPPXMDWTCUOJXKNTFNFJVUXZSSEABKOXIQKDZBLNUETYGCGYQCKNQTINOZGGBOVTZHSSGDZMAJEDQAJIEJWVIFCUVHHWPWGQTMIWTCONRVLWUTKYSYFJWRSRSLECZIINYRSLGPVYWQUOKYRJIJ");

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
    msg.setTimeStamp(0.033843782413635615);
    msg.setSource(50376U);
    msg.setSourceEntity(8U);
    msg.setDestination(4540U);
    msg.setDestinationEntity(38U);
    msg.timeout = 24812U;
    msg.lat = 0.5676623476985948;
    msg.lon = 0.7028266479146951;
    msg.z = 0.17093681711674213;
    msg.z_units = 117U;
    msg.amplitude = 0.10497774000669735;
    msg.pitch = 0.8682664308162716;
    msg.speed = 0.15849903049048386;
    msg.speed_units = 185U;
    msg.custom.assign("HUKGBQUNWCNTFWJAEGMORDSIGZAAQMKDDMIBMQ");

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
    msg.setTimeStamp(0.5815497634335816);
    msg.setSource(26304U);
    msg.setSourceEntity(180U);
    msg.setDestination(60640U);
    msg.setDestinationEntity(249U);
    msg.timeout = 42456U;
    msg.lat = 0.5073147760671687;
    msg.lon = 0.34212618343434686;
    msg.z = 0.3181557209649112;
    msg.z_units = 157U;
    msg.amplitude = 0.471305293600922;
    msg.pitch = 0.6681265699973074;
    msg.speed = 0.09245482774371327;
    msg.speed_units = 250U;
    msg.custom.assign("ZDHJEGKEBEESUJXGIEVQTSMLMKAYLUDILRXVZJIRXKCNCTVONKAGWRNAVP");

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
    msg.setTimeStamp(0.49034642642602855);
    msg.setSource(21970U);
    msg.setSourceEntity(25U);
    msg.setDestination(27378U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.5577792504172653);
    msg.setSource(17156U);
    msg.setSourceEntity(226U);
    msg.setDestination(73U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.26933456020969004);
    msg.setSource(13764U);
    msg.setSourceEntity(152U);
    msg.setDestination(25264U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.08360578721360967);
    msg.setSource(17545U);
    msg.setSourceEntity(81U);
    msg.setDestination(6766U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.49664639335197036;
    msg.lon = 0.34913568278452267;
    msg.z = 0.8559841147093685;
    msg.z_units = 162U;
    msg.radius = 0.044932913810595165;
    msg.duration = 24107U;
    msg.speed = 0.4648126453995478;
    msg.speed_units = 167U;
    msg.custom.assign("DSAFLFISOHPSUFFECKRTCMQCGNTNHGWGNOBIBAZPQNPFZYTHXMHDKXJMHMGXJCDBZRXKPEKKJKNWJTEEOIKZXGHIQSOXMUJILOPOGXAGQWFBKQNIYSODDSYOIBMHZKLEG");

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
    msg.setTimeStamp(0.15975103497150556);
    msg.setSource(37459U);
    msg.setSourceEntity(106U);
    msg.setDestination(35397U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.8175541034272685;
    msg.lon = 0.15505569579880418;
    msg.z = 0.6432792693668163;
    msg.z_units = 25U;
    msg.radius = 0.9537267832304871;
    msg.duration = 4297U;
    msg.speed = 0.10344251706190866;
    msg.speed_units = 161U;
    msg.custom.assign("MCWYRBBESUYOSQBJZFC");

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
    msg.setTimeStamp(0.6965409518039287);
    msg.setSource(21611U);
    msg.setSourceEntity(83U);
    msg.setDestination(21989U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.4027014611532377;
    msg.lon = 0.614195034892444;
    msg.z = 0.7182377266219983;
    msg.z_units = 11U;
    msg.radius = 0.23037888378625104;
    msg.duration = 64937U;
    msg.speed = 0.24342723241391506;
    msg.speed_units = 145U;
    msg.custom.assign("GJFVPCYSCWLAMNAQYGQUTOHAXSFIYILPJSYLDDZTPHRVJEVMFPMNEZKJLFETGNDMHGRWEIXXOIMOZFOCBXMWMNQWFKETUCSUZQODDWWQZYX");

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
    msg.setTimeStamp(0.3664766080872882);
    msg.setSource(49784U);
    msg.setSourceEntity(235U);
    msg.setDestination(52824U);
    msg.setDestinationEntity(150U);
    msg.timeout = 52949U;
    msg.flags = 228U;
    msg.lat = 0.20293514858669282;
    msg.lon = 0.07664106787985236;
    msg.start_z = 0.24665571578978707;
    msg.start_z_units = 68U;
    msg.end_z = 0.39799177964905574;
    msg.end_z_units = 224U;
    msg.radius = 0.5138832878696488;
    msg.speed = 0.4079310475705501;
    msg.speed_units = 115U;
    msg.custom.assign("FHCSWHPCDHESVPCKTKBTBMNDOBFXZWXBDOHMQRVLFRNUKFBEERNDATQMJAWOUPWLBTJAAMUSVLUNLFZRNZKCDJPEQTMDKGMMVPSPFNORCMGZLDAJDBUHQDVAWQGWFVYYLOZZJITTGKYSBGRRIELHJIVGON");

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
    msg.setTimeStamp(0.7824409802904746);
    msg.setSource(28766U);
    msg.setSourceEntity(134U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(150U);
    msg.timeout = 47066U;
    msg.flags = 100U;
    msg.lat = 0.12904686223374529;
    msg.lon = 0.2136764829627037;
    msg.start_z = 0.44408480924921356;
    msg.start_z_units = 36U;
    msg.end_z = 0.16127648300945385;
    msg.end_z_units = 123U;
    msg.radius = 0.17112267797581193;
    msg.speed = 0.5808281647446085;
    msg.speed_units = 184U;
    msg.custom.assign("FEBXQTEPCKDUZAMKTVAYHGCOJAPYESJQWFUSVNVOVDPQLHQJWSDBVVEYPSZWLBIIPDAMDSXIERURIJGKEOAYGATVMYPOMOLNDQFDQGLXJSPWKLSMSUZFKVTIIRSUXKWKNKGC");

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
    msg.setTimeStamp(0.627904405946281);
    msg.setSource(29106U);
    msg.setSourceEntity(169U);
    msg.setDestination(11406U);
    msg.setDestinationEntity(120U);
    msg.timeout = 19375U;
    msg.flags = 50U;
    msg.lat = 0.34222528950592856;
    msg.lon = 0.3782869639817852;
    msg.start_z = 0.3983987572298324;
    msg.start_z_units = 99U;
    msg.end_z = 0.39541736465316224;
    msg.end_z_units = 5U;
    msg.radius = 0.9162531281610276;
    msg.speed = 0.5744327793304087;
    msg.speed_units = 27U;
    msg.custom.assign("ZGMEGULWXEVGKVEIVMYKCDMHHSYPTAGCINUWOOSXGQRWZBNNPLHAZQRAQJZPDHNROFBLRMYSCSZLQAFEYVZWOTUDUXTHTEOAZKJFSAETLNQCVRLBMKSWPKUFAU");

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
    msg.setTimeStamp(0.5288689774673777);
    msg.setSource(17083U);
    msg.setSourceEntity(241U);
    msg.setDestination(4139U);
    msg.setDestinationEntity(236U);
    msg.timeout = 46801U;
    msg.lat = 0.8941917573164433;
    msg.lon = 0.931856992436024;
    msg.z = 0.754523236468006;
    msg.z_units = 102U;
    msg.speed = 0.23517967143308294;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.392149654566191;
    tmp_msg_0.y = 0.5477394409981352;
    tmp_msg_0.z = 0.3548698252477511;
    tmp_msg_0.t = 0.14238431343161728;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VDVIWQJFWGBUTOMQHGSCJWCQJGGSCSCMRZAGYPFQGAZ");

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
    msg.setTimeStamp(0.7201957911894563);
    msg.setSource(3017U);
    msg.setSourceEntity(111U);
    msg.setDestination(711U);
    msg.setDestinationEntity(140U);
    msg.timeout = 58805U;
    msg.lat = 0.6324224426785446;
    msg.lon = 0.031053030635310175;
    msg.z = 0.09803802670417083;
    msg.z_units = 123U;
    msg.speed = 0.45521520547826144;
    msg.speed_units = 47U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6305180790037124;
    tmp_msg_0.y = 0.8865930981982624;
    tmp_msg_0.z = 0.8554724963567276;
    tmp_msg_0.t = 0.5178351908802077;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UHBITNDYOKNAIFRMFTATLKXAHCLYOXCUXJCSHQODIEOPDKPPVRWGMVHOVVLWHEGQIDWKUQNAWQSCXYYZJNZRJQZQYBJWUUQSNRLTMLTWKGLCXGMXLYGGKCPVFDDVIAYKHPEMBYXJTNCDSXXBWSZAFVPRRBJOJKJDRAWWKHBMSLUPBS");

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
    msg.setTimeStamp(0.2922757208435084);
    msg.setSource(11519U);
    msg.setSourceEntity(58U);
    msg.setDestination(34214U);
    msg.setDestinationEntity(245U);
    msg.timeout = 4551U;
    msg.lat = 0.9978036880177228;
    msg.lon = 0.36220985259981076;
    msg.z = 0.2893222578790712;
    msg.z_units = 106U;
    msg.speed = 0.37560902248536887;
    msg.speed_units = 205U;
    msg.custom.assign("TIEGCLUWSOUDDKUSECYZBUJPRDHJEJLJVEKCDA");

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
    msg.setTimeStamp(0.9250307687296812);
    msg.setSource(8161U);
    msg.setSourceEntity(143U);
    msg.setDestination(44956U);
    msg.setDestinationEntity(224U);
    msg.x = 0.28281797906387385;
    msg.y = 0.41620114972757727;
    msg.z = 0.3935911150934358;
    msg.t = 0.7856709117313536;

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
    msg.setTimeStamp(0.8619795820474512);
    msg.setSource(17212U);
    msg.setSourceEntity(239U);
    msg.setDestination(45588U);
    msg.setDestinationEntity(144U);
    msg.x = 0.9571977632628967;
    msg.y = 0.3070574001827019;
    msg.z = 0.7701482418128652;
    msg.t = 0.4622381242821658;

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
    msg.setTimeStamp(0.23937981733953273);
    msg.setSource(15333U);
    msg.setSourceEntity(254U);
    msg.setDestination(16917U);
    msg.setDestinationEntity(4U);
    msg.x = 0.13950659632654794;
    msg.y = 0.11551328422470686;
    msg.z = 0.46371181056477473;
    msg.t = 0.42682727642895546;

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
    msg.setTimeStamp(0.7041060249667844);
    msg.setSource(46374U);
    msg.setSourceEntity(5U);
    msg.setDestination(57723U);
    msg.setDestinationEntity(76U);
    msg.timeout = 49681U;
    msg.name.assign("FDVNRLGLPKYKEUTJPWKAXRDSKUCWDFTRWMIRBKFQPXLYOQUCZFHUSRZUFZQPMEZPADWXGLSWOOOEOFBQZBJVNFIZAXEIBEVBXPPNAHQJTPRVBXWSTMVXITSITJUYHEECSYA");
    msg.custom.assign("OFOHVKHSUMHDFZZFNWZOHMKVTFPVDEYZXPPDWDRGQTDMSEXAWAMFXLDGGSYTULFBDERPEOUXAITIBXQJSRJFZCNRICJBIWQPOWLOYARYIHUYKBAWGLBCXMJQGZVUJCSGHOMPFEIRNUEKHKOQKUULSWAEMNIQOKBTVDOA");

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
    msg.setTimeStamp(0.7990037922441453);
    msg.setSource(29127U);
    msg.setSourceEntity(219U);
    msg.setDestination(36189U);
    msg.setDestinationEntity(81U);
    msg.timeout = 42506U;
    msg.name.assign("VUNWWQKSIQYOACVECDGMPXPSJXOBLUFQCXRPFPBDFDTDSHOYNLY");
    msg.custom.assign("WHMUJGMDXUFSPSOMEZLTWKNSNMXOERYBJJBLSZQTKLNIDRJVNXLQURJGQGGVUFRLNKYOEVITSIDFIKAEHQZRMXITOVAITPEPJGXODCNVDPPYEGBDQWYZXFOMXHBKZWYYLDIJCMHMLKCXDUFEUTHYXSSCYRYFMRJLWKUWQRWDGFBHMCHTOTAABWAZZGUHEOHAJVIVCAYALPSGKQRNXIQCVQZKARUOSJFAVBPITCBKOCBZ");

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
    msg.setTimeStamp(0.23574714290819054);
    msg.setSource(60150U);
    msg.setSourceEntity(90U);
    msg.setDestination(32606U);
    msg.setDestinationEntity(241U);
    msg.timeout = 17498U;
    msg.name.assign("HINKFQBGSCDCTBOZVBBPPFALHTHMMWRFNEKBVDIHZDEWRTPUKBJTSLYWPJJOHTFAMVXSQXLWNARGGQVZLZ");
    msg.custom.assign("CVSXRXEVOCJELKPPFWSAYMJIRLVVGEMRNYGLHRXJLLKPDRKYDHLDBNBCZZINFWJZHRFTGWZWTIAJMHUKVDWSFCDZVUMANNSQDINMNWURHXGPTGVBLPBNKMYHCKQAELGGPUBERUEVBMKAOI");

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
    msg.setTimeStamp(0.9748913235698876);
    msg.setSource(11024U);
    msg.setSourceEntity(114U);
    msg.setDestination(23475U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.895438427991437;
    msg.lon = 0.320571647279534;
    msg.z = 0.5552563102288679;
    msg.z_units = 161U;
    msg.speed = 0.6145222593252774;
    msg.speed_units = 233U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.530232456383121;
    tmp_msg_0.y = 0.27260708759965635;
    tmp_msg_0.z = 0.6816751680313763;
    tmp_msg_0.t = 0.05392338310060685;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.07052297847592448;
    msg.custom.assign("EGCXHMVIGFPQUCRAKUNVZLTCPPOZZXBJTDNYOIIYFEOXRDPVRWCUIWJPZJHPYDRLOAGQBSI");

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
    msg.setTimeStamp(0.8495206266412281);
    msg.setSource(41024U);
    msg.setSourceEntity(222U);
    msg.setDestination(4894U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.009102699590572638;
    msg.lon = 0.37478021148424445;
    msg.z = 0.44519736166877144;
    msg.z_units = 106U;
    msg.speed = 0.22894207387243648;
    msg.speed_units = 125U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64125U;
    tmp_msg_0.off_x = 0.4852143248087828;
    tmp_msg_0.off_y = 0.5625708563029469;
    tmp_msg_0.off_z = 0.08005245270974126;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.1832471995373639;
    msg.custom.assign("AXHVIHCGXRNSQWAJZEXOMNNFABCTLBYEXRBCDKRXGIULQSIBBBPFETEIZDCISHBHOOYEUMCSKOLPKKPUTPRCQWPSAGRIJDJVAMYZASQSJZXJZQTLDVKDZNZAUOSCUTZHCNHVFLCOWUOIFTRYWYNLTVDFYYVMJMMVFVAGTKGOKEBEOJDFGWGALZEPHFDEVXISKMDWYAFRHQVWQUBJWGTIRUSNWQDLXKMYHXEGCXPLIBRGNWLJURQHNMPK");

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
    msg.setTimeStamp(0.48462855986301945);
    msg.setSource(32395U);
    msg.setSourceEntity(20U);
    msg.setDestination(61735U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.29401006849422673;
    msg.lon = 0.38333538683636637;
    msg.z = 0.6892150943133092;
    msg.z_units = 171U;
    msg.speed = 0.2294484320997816;
    msg.speed_units = 227U;
    msg.start_time = 0.7644204722081475;
    msg.custom.assign("MIYMZMXEVQMMZTNNKPACISNITBYMCLOZEATQFQFPZXKOFDZZQGLVOOZRJJKRMHATNQCJEGUGXHZAOBLTNQPYPIEDYYWNRBFCDCFQNBORIAFWVWIQTFHRZRDEDLHLKLIWUNHHUSBLSEEKCTSGRSODIAIHNBOV");

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
    msg.setTimeStamp(0.6853898719025393);
    msg.setSource(36422U);
    msg.setSourceEntity(157U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(212U);
    msg.vid = 7194U;
    msg.off_x = 0.25875949742530147;
    msg.off_y = 0.9787004660830426;
    msg.off_z = 0.444332319219899;

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
    msg.setTimeStamp(0.8096230551281368);
    msg.setSource(33887U);
    msg.setSourceEntity(20U);
    msg.setDestination(44390U);
    msg.setDestinationEntity(101U);
    msg.vid = 47886U;
    msg.off_x = 0.4815443400780568;
    msg.off_y = 0.6519973193486744;
    msg.off_z = 0.5688385139472387;

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
    msg.setTimeStamp(0.42014878459302196);
    msg.setSource(54851U);
    msg.setSourceEntity(79U);
    msg.setDestination(26220U);
    msg.setDestinationEntity(155U);
    msg.vid = 7125U;
    msg.off_x = 0.29273537384817994;
    msg.off_y = 0.10349596010414608;
    msg.off_z = 0.16124662362293263;

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
    msg.setTimeStamp(0.6865223969732023);
    msg.setSource(17936U);
    msg.setSourceEntity(7U);
    msg.setDestination(47163U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.90944547640999);
    msg.setSource(23359U);
    msg.setSourceEntity(116U);
    msg.setDestination(58171U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.5281212525379319);
    msg.setSource(20281U);
    msg.setSourceEntity(149U);
    msg.setDestination(2651U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.15986505334103085);
    msg.setSource(14820U);
    msg.setSourceEntity(97U);
    msg.setDestination(47635U);
    msg.setDestinationEntity(250U);
    msg.mid = 64382U;

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
    msg.setTimeStamp(0.5618610234825351);
    msg.setSource(10517U);
    msg.setSourceEntity(135U);
    msg.setDestination(59893U);
    msg.setDestinationEntity(101U);
    msg.mid = 7448U;

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
    msg.setTimeStamp(0.5794671433967717);
    msg.setSource(42694U);
    msg.setSourceEntity(111U);
    msg.setDestination(11034U);
    msg.setDestinationEntity(168U);
    msg.mid = 37706U;

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
    msg.setTimeStamp(0.5466953471477878);
    msg.setSource(5000U);
    msg.setSourceEntity(184U);
    msg.setDestination(31641U);
    msg.setDestinationEntity(49U);
    msg.state = 45U;
    msg.eta = 19973U;
    msg.info.assign("QEPVBQOCBFPICVUPAMHPZUBYKZBEZ");

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
    msg.setTimeStamp(0.1859751754089588);
    msg.setSource(23145U);
    msg.setSourceEntity(127U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(120U);
    msg.state = 139U;
    msg.eta = 52144U;
    msg.info.assign("KBIRQMJZOQOPIFMMUXRJSSGSGVNPRTVVPJMCLAIBHKZXKKEDPXWWHPHYSBLEWXSJFWILVDPYUIZEJXFJUNBURCRTSYNEJBONBRXBGMHZYQDBTTKCHQGKVWCXUOZCCIHYPTDDOANHGHUHQKNQAGFGZQ");

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
    msg.setTimeStamp(0.19571129056421133);
    msg.setSource(22634U);
    msg.setSourceEntity(56U);
    msg.setDestination(24787U);
    msg.setDestinationEntity(199U);
    msg.state = 126U;
    msg.eta = 27907U;
    msg.info.assign("ZAACXHVGDBNKJTISBGIDWEBMLJSDTHCREZIIBVIDZAMSJBGZBEWDRCONAPYCLWVSXPGFAHPLCYNOHGBKIKDCSVKRRJFCMMSXLAPTIUPEDJJORAOLNIBUZXUTKYIOLMNEUEMFLFVNRJCQQQPQNUEVSHOFNWTGVWZRWHVXXXSWYDPENFYALYDZQTVZRPUOYLFMYGJTTRHAPXWFQQYFKQDGGMEHQKHRKBG");

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
    msg.setTimeStamp(0.5423202922502329);
    msg.setSource(29332U);
    msg.setSourceEntity(231U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(228U);
    msg.system = 55067U;
    msg.duration = 63854U;
    msg.speed = 0.08855657202408551;
    msg.speed_units = 157U;
    msg.x = 0.052229879590979356;
    msg.y = 0.9167119460175089;
    msg.z = 0.2490325136295839;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.5090082181544184);
    msg.setSource(5443U);
    msg.setSourceEntity(193U);
    msg.setDestination(17529U);
    msg.setDestinationEntity(216U);
    msg.system = 32706U;
    msg.duration = 35760U;
    msg.speed = 0.8704693225809894;
    msg.speed_units = 21U;
    msg.x = 0.3678922520767699;
    msg.y = 0.864611455957614;
    msg.z = 0.7210417076176782;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.521309509885925);
    msg.setSource(17915U);
    msg.setSourceEntity(62U);
    msg.setDestination(22347U);
    msg.setDestinationEntity(227U);
    msg.system = 27682U;
    msg.duration = 52534U;
    msg.speed = 0.22480710004569981;
    msg.speed_units = 202U;
    msg.x = 0.4838987485741413;
    msg.y = 0.5104725095622598;
    msg.z = 0.6704196737747998;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.21061888838541842);
    msg.setSource(10306U);
    msg.setSourceEntity(206U);
    msg.setDestination(43392U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.9978436648031223;
    msg.lon = 0.049136514019203825;
    msg.speed = 0.8547323906168235;
    msg.speed_units = 71U;
    msg.duration = 34467U;
    msg.sys_a = 34466U;
    msg.sys_b = 48250U;
    msg.move_threshold = 0.11305519381046159;

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
    msg.setTimeStamp(0.676448304996146);
    msg.setSource(35264U);
    msg.setSourceEntity(101U);
    msg.setDestination(28478U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.2412635804668044;
    msg.lon = 0.5675890469105135;
    msg.speed = 0.44100841530167767;
    msg.speed_units = 111U;
    msg.duration = 13391U;
    msg.sys_a = 37578U;
    msg.sys_b = 16832U;
    msg.move_threshold = 0.6580528461108252;

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
    msg.setTimeStamp(0.7633780096435203);
    msg.setSource(34574U);
    msg.setSourceEntity(131U);
    msg.setDestination(3853U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.6396492881593309;
    msg.lon = 0.06878206667702902;
    msg.speed = 0.12293480224751607;
    msg.speed_units = 149U;
    msg.duration = 44496U;
    msg.sys_a = 44051U;
    msg.sys_b = 54015U;
    msg.move_threshold = 0.6894189775339342;

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
    msg.setTimeStamp(0.6491675980475802);
    msg.setSource(1165U);
    msg.setSourceEntity(208U);
    msg.setDestination(14788U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.2186749761696355;
    msg.lon = 0.3024490043587761;
    msg.z = 0.9186215419603087;
    msg.z_units = 115U;
    msg.speed = 0.7699319090444756;
    msg.speed_units = 132U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5444379989986348;
    tmp_msg_0.lon = 0.5237633848080082;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QUAXGBMKXKEKSQPESBAZGAHSRWBUMBFBMLRXPJZKKJGHRVBPEIHSHZRLEVPVKFUUZIBBJTFDRVTSEOTAYVWDCATRAKTINYHVHFNXQORWIUIAZWHECZDWYCEGFNEXJQSYXVZNBIAOIJPDOTNHCLCCRJSWDMOVLXCYBLINPCSLQTOXMYVVMOUUETFCGGYRWNJ");

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
    msg.setTimeStamp(0.7015201403229241);
    msg.setSource(34478U);
    msg.setSourceEntity(27U);
    msg.setDestination(10087U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.9968637244874322;
    msg.lon = 0.22935243936152783;
    msg.z = 0.151882934305543;
    msg.z_units = 111U;
    msg.speed = 0.3132331529065152;
    msg.speed_units = 207U;
    msg.custom.assign("XPGRFHFIVISVSWMQPLRZFKYZERPEAUGSHWCMQEZCQCUQWQYAFJGFHUUWMKXJMDBCUUNTJNCWCNFUGVTSVEWSLBDHAYJXLMNQHQLBBMUTOKZIYGHEIAZLAQNPIRBNTOGCAYTLPNDJXAROOGPOTMHZGSBNKIABRQCEGXEYPRDVUFSZMJDEVCSBSEXXXWRDPVBKGNKZTACZIBJJVDYWHMOYDIJLFAIYL");

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
    msg.setTimeStamp(0.13540385414239864);
    msg.setSource(16777U);
    msg.setSourceEntity(173U);
    msg.setDestination(43886U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.5390159443835101;
    msg.lon = 0.9124671916228306;
    msg.z = 0.25719417347594953;
    msg.z_units = 228U;
    msg.speed = 0.2876051551253488;
    msg.speed_units = 32U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5896999583061868;
    tmp_msg_0.lon = 0.7474188307203155;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VFMHUUBOLHLDMRZGAWZUTCKNTJTQPOOURIJKCAHBYQFQTNEEWZUPVBCWMAYXCLNDYDIKOPRZTZXYFBSXKMFAHVMCHYXEHLUGLGYQTMTKPSIUNEZSSPATHVPBYCBZCXAQKLBWRGQJFOFBUZITNAFSSLNWLECMZVMCOOVKUOBVXNVKSJPGWPDEJNGDJSGRUMJILSONDYVJFPLEEHXGYBHIEAJIXZDQRANDIQEAXKWCJIHFRTRKVWYMQPXISODQWR");

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
    msg.setTimeStamp(0.32265379859882004);
    msg.setSource(45693U);
    msg.setSourceEntity(16U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.15987205844558716;
    msg.lon = 0.8840920709940209;

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
    msg.setTimeStamp(0.16996271648264127);
    msg.setSource(51098U);
    msg.setSourceEntity(117U);
    msg.setDestination(33565U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.6742088631752453;
    msg.lon = 0.9723214970383269;

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
    msg.setTimeStamp(0.8398488707334775);
    msg.setSource(11402U);
    msg.setSourceEntity(3U);
    msg.setDestination(51348U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.620547994319658;
    msg.lon = 0.41365114337759945;

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
    msg.setTimeStamp(0.47729068598359203);
    msg.setSource(64139U);
    msg.setSourceEntity(122U);
    msg.setDestination(34761U);
    msg.setDestinationEntity(219U);
    msg.timeout = 58331U;
    msg.lat = 0.7401675273884573;
    msg.lon = 0.4391762244349764;
    msg.z = 0.6465472253444872;
    msg.z_units = 204U;
    msg.pitch = 0.19283973138795885;
    msg.amplitude = 0.3214447127988035;
    msg.duration = 56649U;
    msg.speed = 0.39233053299921583;
    msg.speed_units = 127U;
    msg.radius = 0.060219596184110324;
    msg.direction = 102U;
    msg.custom.assign("TCCHZQDKRIDNOLBMQBAKVILTJVBQHVGQVVBQYBNUNDRLLCVDBISTTFZMNZDKCSAOPBPZAJYGZVEDBWXAICSSUKLEYOSUEOIRMOKSVWMQJCTSGPMJHKFGHUXUWRAEYF");

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
    msg.setTimeStamp(0.9597237765241127);
    msg.setSource(56592U);
    msg.setSourceEntity(199U);
    msg.setDestination(13188U);
    msg.setDestinationEntity(246U);
    msg.timeout = 61003U;
    msg.lat = 0.29113792145665596;
    msg.lon = 0.18121702908551285;
    msg.z = 0.15217189167049483;
    msg.z_units = 134U;
    msg.pitch = 0.6182211041870552;
    msg.amplitude = 0.19158846338599667;
    msg.duration = 31653U;
    msg.speed = 0.22724280416378095;
    msg.speed_units = 54U;
    msg.radius = 0.9720828612003071;
    msg.direction = 37U;
    msg.custom.assign("PTATMUKUJRZUSRRMTOBMIJZLHNXZLVLBJROVFCZIY");

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
    msg.setTimeStamp(0.03497665638603498);
    msg.setSource(38455U);
    msg.setSourceEntity(86U);
    msg.setDestination(2349U);
    msg.setDestinationEntity(170U);
    msg.timeout = 63729U;
    msg.lat = 0.4067402350852387;
    msg.lon = 0.14326863573482773;
    msg.z = 0.5313456680100741;
    msg.z_units = 253U;
    msg.pitch = 0.8070773476590668;
    msg.amplitude = 0.6619404585639499;
    msg.duration = 56064U;
    msg.speed = 0.03925942308003538;
    msg.speed_units = 233U;
    msg.radius = 0.46680283298344394;
    msg.direction = 130U;
    msg.custom.assign("SQEICLKTRHUXFAKIDIPKK");

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
    msg.setTimeStamp(0.3972028842999118);
    msg.setSource(61333U);
    msg.setSourceEntity(65U);
    msg.setDestination(7024U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("IWNCLRIKUFEFZCBWJSMIHADLTJSKQMEOBXCUNEQVAGHISGJKPJPBJHPTQBGALGARDYBXVMSNWBYPTLKHZFWCYZKUREXVZPYLOCRDYUJQBSAIPCAVBE");
    msg.reference_frame = 134U;
    msg.custom.assign("XPRNONFAHZZOOHMDOOWDWCUBTBTSVKMVWPYMPQNVPJDCJYURBVOXJBYSTJYLBKGMRKGRPSZBCSFQDPKYQKUWGUZNAIBARWKHPYFZUBLTIMCOEBAADQRQNJJWVXUEEQDCXHIZLAMCVPNMISSJIQICXHHLSQQDICFEXMZYKGGV");

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
    msg.setTimeStamp(0.9349319211434575);
    msg.setSource(15510U);
    msg.setSourceEntity(162U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(51U);
    msg.formation_name.assign("GOABXEWPUUKGAIEUINJNFKZZPJHSEFKZTCUXPPRXYOIOUYZJSJKZQTTBFQJGJBCVPQGVYMCPBFWBOAGOWBZKOVSZMKKRSQFDVOVQKRQAWHESRLSHTAEKWMLAFDCGVVYIXHFIIOTXRVUSEJLGMFHYGITJWXYEHFHRTQQSNTPLWNTPMODHUZADSNIDZYSCLWQLWRDWLMLBIRQJAGVNDDTDCLYNLBX");
    msg.reference_frame = 215U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2917U;
    tmp_msg_0.off_x = 0.22872109153352216;
    tmp_msg_0.off_y = 0.2880501249750439;
    tmp_msg_0.off_z = 0.6687599475590852;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QYHXNJXGEBLJDDTNTBJHRRPFUMNRHNNVYOQDVEFAWTKQTEXBCJSXNUDLNWCMIRHXLSHMOLFTDVUJYUUVBXRWUUJQRJXSSMJATIPVNAZBXLKQOPQOWWOAKDZVPBOCRZPSCGXVJ");

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
    msg.setTimeStamp(0.6894438700979741);
    msg.setSource(41094U);
    msg.setSourceEntity(33U);
    msg.setDestination(17781U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("KJBGJBKXMZOXAGOLBRCUMHBTNSFGOMBQXZRXVDTNSMEJYZJLYARFLVGJPWQGHIBCGIUYCWGAESWNYVMFKYNTORUHACAVHXNJRHVXPFTQWCHIZYDTPWYLZGKUPHURDOQINEMBKFTZDHWTTOQWNORBTPLQVSYLSDN");
    msg.reference_frame = 118U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24523U;
    tmp_msg_0.off_x = 0.19356714820136056;
    tmp_msg_0.off_y = 0.8887318381443817;
    tmp_msg_0.off_z = 0.23625658659128024;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AIDTWMTWEUPLDKOXSGJHDAWUNFXWMKAIHPBOCJTYXQKRWTYUWMGBNPQLZNOBDSTHZVBGLZFZNOHJXYYPQDMHELKTRIJEIKAFZMWSRLYRAVDNZCHUCDKMCLIYIVBUFCYJUVMLQVBYDUHHCSFSJOWNLMCGGEEZVNSMUTXBVGZRYFIXSSHWIFQGIVPROJRXCEBNU");

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
    msg.setTimeStamp(0.04197900789856979);
    msg.setSource(53179U);
    msg.setSourceEntity(62U);
    msg.setDestination(48822U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("TRBARNKWDAJSATYNNCDORJQDTZFWRZHVOOXUVUYFHHAICPLPXTISWTNGOJTBKVNMBVXSLFRQIXGBIKBOOXOXKUAVNAWNFHWYCQKJPMXQDOMUHKSHGTRPWEDGITZPDFHKGJZTEYMELPGDYMJCCBOGJWVKHRNBOXYPLLD");
    msg.formation_name.assign("FVNJATSGPISEZKOEOWBNQKKUKMQOIEYUXHXXNKRZAMAPTTJAZFMOCOBUAUBLBAYWAOPWDUGRSEXKMBFEYECGSC");
    msg.plan_id.assign("CUNHRBPFEGXNTDPSURMHKALUFQKZENOCSYYIWARLJUVCAHDFHOTEZQGRPWXOEKGHFZTZKASKUQIBJTPQRVTVAVHDWMFSABHRIOTPMYFFLGEGBBLOREOEMKKDCSBVEDXMZDXNIVBMDNTJHUVJMWYKAGQSPMYPXUVLIWCXLGGIWNBOSLDYTAJQSIXZVDYXYJJJFICQMPIEZBTQMOCNOACGGWSLTANCQLCPZIOUNDWKWZZJXYHSB");
    msg.description.assign("FTSNHQDBERNBJINMBOSXDXLMUOR");
    msg.leader_speed = 0.4424035243249437;
    msg.leader_bank_lim = 0.7788202511372044;
    msg.pos_sim_err_lim = 0.8043281987364345;
    msg.pos_sim_err_wrn = 0.7262763802732093;
    msg.pos_sim_err_timeout = 10023U;
    msg.converg_max = 0.2459619998503666;
    msg.converg_timeout = 36337U;
    msg.comms_timeout = 49417U;
    msg.turb_lim = 0.6422431633029472;
    msg.custom.assign("LFNETDRXODAULPPKUZXQHCQXZFOTXYLAVVROPNLEBBCEHGGEFCWJQXTSIFUDKDWBPKMO");

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
    msg.setTimeStamp(0.7769444548968395);
    msg.setSource(12891U);
    msg.setSourceEntity(225U);
    msg.setDestination(16089U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("JPNHHIDJXTLZOZRHLVFFUXSXVSICDEJKPYDRCPDRGRTMRCGRNYWVAMFULJERNCPPTKKOOLCVKUJCUSVHNRMPYGLPXAESQBGVDBYONQXGK");
    msg.formation_name.assign("TDROJCIBLMEFDKWLHWFXDCPLZPCRMEYGUESRCVUSPXTQDYOBPWWIKJDGQLBQLCRNTUNEAXXALTVKLMVRJI");
    msg.plan_id.assign("EOEHNKCMOQZTVGUAPDATRCDPSJYOMRODFQILPXVMGMUNZJMUOAQXBE");
    msg.description.assign("KXGSHFBQMUDHSLDWSYCGUPYGVIMQMQFKXGSXXLCIBWWQQIDESAHVANDVZKKODYIPFUASYTELBZVRKEWSAFZNHTLKYZIHAGOWHLUEQZNULRRVCOZTYGFEIJGHMSC");
    msg.leader_speed = 0.026311729414083773;
    msg.leader_bank_lim = 0.5570185171854118;
    msg.pos_sim_err_lim = 0.7008825950493778;
    msg.pos_sim_err_wrn = 0.1772107117084768;
    msg.pos_sim_err_timeout = 3384U;
    msg.converg_max = 0.9407494856802455;
    msg.converg_timeout = 63229U;
    msg.comms_timeout = 9869U;
    msg.turb_lim = 0.4020695576708341;
    msg.custom.assign("IOEKWHGPHMUXJBWCEQRYTUTQPHDVXWIZCDQXCERNLABVUZAXFVJGNTUXSCJKABZBLTUJFLHDYCWBJKYKXDJSA");

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
    msg.setTimeStamp(0.2934160484107544);
    msg.setSource(28011U);
    msg.setSourceEntity(115U);
    msg.setDestination(56527U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("WXMXYPTEJHBDRXADQVFWTUJRONKMHYPBKZPYGYWQXTDJBIHUQUBFKSUKFADTWOIYLCMNCALAXEKXVKVJLOEPWNHIFDPGQFSAODMGUUWXQNLGEKIVXUAMLCDRYWJZFKUGPGYSUXERNLLJTPKLIQFASQLMCNMZEVILTVCVIHWWPHHCZVISV");
    msg.formation_name.assign("UNBJIWSUVMXUHNWESYRKRTJLKYREOESBKRACOYXBDHZGWLFBGYD");
    msg.plan_id.assign("WXAWCYSJDFEPBZFCMNOHWZKDRDPZSCBKYITUFZCJWULRZNLWF");
    msg.description.assign("ACQEVTSMFGBJBOZDPSKGKEGWCNJABMAZPZOHUDWNSPYRNNVPWOISYZNFSGAVXLUSWWRMZEIOZXYPCNQRBXITJFDHSW");
    msg.leader_speed = 0.2500658789212573;
    msg.leader_bank_lim = 0.09601847667399921;
    msg.pos_sim_err_lim = 0.038904143670144054;
    msg.pos_sim_err_wrn = 0.6712109987552888;
    msg.pos_sim_err_timeout = 32764U;
    msg.converg_max = 0.23996886025833652;
    msg.converg_timeout = 27509U;
    msg.comms_timeout = 18115U;
    msg.turb_lim = 0.5783335290550926;
    msg.custom.assign("BCPUZZKTASKCWAGVVWVMECCNRDPXDYQIBGBEEPZXQXFCTQDAUASNJCAVKXCFLAARSUOJJOXRGPIYGHTBFVDBXMXMVZFWKLNCZEUJULYFFHRBLIUKGNSYQNPKLREQZTZNUWTBFFWCSDYUDMHVJUOKHMHDIOOEZSPGPRAXMJPWWBMGJOVJVBPAHJYHLGSSMRDAUTL");

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
    msg.setTimeStamp(0.7919394624911255);
    msg.setSource(34814U);
    msg.setSourceEntity(119U);
    msg.setDestination(20768U);
    msg.setDestinationEntity(106U);
    msg.control_src = 55238U;
    msg.control_ent = 246U;
    msg.timeout = 0.5768488474350159;
    msg.loiter_radius = 0.3195293614544851;
    msg.altitude_interval = 0.0965206143813675;

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
    msg.setTimeStamp(0.24058752625566582);
    msg.setSource(17883U);
    msg.setSourceEntity(194U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(47U);
    msg.control_src = 1379U;
    msg.control_ent = 105U;
    msg.timeout = 0.784113491443869;
    msg.loiter_radius = 0.9621248860170892;
    msg.altitude_interval = 0.5461040663202653;

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
    msg.setTimeStamp(0.759663862345871);
    msg.setSource(12414U);
    msg.setSourceEntity(6U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(169U);
    msg.control_src = 32868U;
    msg.control_ent = 235U;
    msg.timeout = 0.7458942231502507;
    msg.loiter_radius = 0.26392886505750013;
    msg.altitude_interval = 0.9679817225606079;

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
    msg.setTimeStamp(0.6978212956471078);
    msg.setSource(17288U);
    msg.setSourceEntity(81U);
    msg.setDestination(7151U);
    msg.setDestinationEntity(120U);
    msg.flags = 89U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9029098956875639;
    tmp_msg_0.speed_units = 5U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3032005279956629;
    tmp_msg_1.z_units = 123U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.298861988376932;
    msg.lon = 0.14725866462318415;
    msg.radius = 0.9533651136396742;

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
    msg.setTimeStamp(0.21956090387103144);
    msg.setSource(13936U);
    msg.setSourceEntity(153U);
    msg.setDestination(37546U);
    msg.setDestinationEntity(0U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7116000140518359;
    tmp_msg_0.speed_units = 240U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.530556753692379;
    tmp_msg_1.z_units = 250U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.22288608947028454;
    msg.lon = 0.7170952300188687;
    msg.radius = 0.14242263650808396;

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
    msg.setTimeStamp(0.5710441677547706);
    msg.setSource(4968U);
    msg.setSourceEntity(233U);
    msg.setDestination(10989U);
    msg.setDestinationEntity(17U);
    msg.flags = 145U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1689810108638622;
    tmp_msg_0.speed_units = 214U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17926368778955581;
    tmp_msg_1.z_units = 240U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5021212149256071;
    msg.lon = 0.3288648930006085;
    msg.radius = 0.9307710285348996;

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
    msg.setTimeStamp(0.009753416736064335);
    msg.setSource(12469U);
    msg.setSourceEntity(38U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(9U);
    msg.control_src = 34648U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 166U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7119638581362635;
    tmp_tmp_msg_0_0.speed_units = 101U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5514098045326264;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6447834345462251;
    tmp_msg_0.lon = 0.950051422645045;
    tmp_msg_0.radius = 0.7358864185260069;
    msg.reference.set(tmp_msg_0);
    msg.state = 63U;
    msg.proximity = 3U;

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
    msg.setTimeStamp(0.7664742443706865);
    msg.setSource(28938U);
    msg.setSourceEntity(104U);
    msg.setDestination(43330U);
    msg.setDestinationEntity(66U);
    msg.control_src = 28751U;
    msg.control_ent = 49U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 49U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2697410966550574;
    tmp_tmp_msg_0_0.speed_units = 83U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6043200510851379;
    tmp_tmp_msg_0_1.z_units = 186U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.749088983743253;
    tmp_msg_0.lon = 0.6027891663236746;
    tmp_msg_0.radius = 0.7472086577896784;
    msg.reference.set(tmp_msg_0);
    msg.state = 54U;
    msg.proximity = 115U;

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
    msg.setTimeStamp(0.5824307681037767);
    msg.setSource(10308U);
    msg.setSourceEntity(248U);
    msg.setDestination(37107U);
    msg.setDestinationEntity(100U);
    msg.control_src = 42190U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 204U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.015418857142227349;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2107547584148387;
    tmp_tmp_msg_0_1.z_units = 190U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.31046736853532364;
    tmp_msg_0.lon = 0.20159676082984945;
    tmp_msg_0.radius = 0.5925837264885602;
    msg.reference.set(tmp_msg_0);
    msg.state = 38U;
    msg.proximity = 71U;

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
    msg.setTimeStamp(0.7191307238527912);
    msg.setSource(1000U);
    msg.setSourceEntity(43U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.3662172587924737;
    msg.ay_cmd = 0.11146295430511777;
    msg.az_cmd = 0.3087792387875441;
    msg.ax_des = 0.6987607318893715;
    msg.ay_des = 0.2112907515662219;
    msg.az_des = 0.834026192596523;
    msg.virt_err_x = 0.10795293711149667;
    msg.virt_err_y = 0.5487990741163795;
    msg.virt_err_z = 0.36172971433407997;
    msg.surf_fdbk_x = 0.467339423173349;
    msg.surf_fdbk_y = 0.6999120940796502;
    msg.surf_fdbk_z = 0.5785137012522391;
    msg.surf_unkn_x = 0.745345090511606;
    msg.surf_unkn_y = 0.9486835794867982;
    msg.surf_unkn_z = 0.15349979738812536;
    msg.ss_x = 0.3554413165623741;
    msg.ss_y = 0.924990043299301;
    msg.ss_z = 0.35085219321304495;

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
    msg.setTimeStamp(0.6297313171189666);
    msg.setSource(34264U);
    msg.setSourceEntity(73U);
    msg.setDestination(65306U);
    msg.setDestinationEntity(143U);
    msg.ax_cmd = 0.06671440859624334;
    msg.ay_cmd = 0.40728464727066604;
    msg.az_cmd = 0.5256524331666657;
    msg.ax_des = 0.11512948026667891;
    msg.ay_des = 0.6571055900519855;
    msg.az_des = 0.909447883603184;
    msg.virt_err_x = 0.2202226081222841;
    msg.virt_err_y = 0.138243810202335;
    msg.virt_err_z = 0.28263407165763066;
    msg.surf_fdbk_x = 0.6908425075060464;
    msg.surf_fdbk_y = 0.33789249362051743;
    msg.surf_fdbk_z = 0.4824343358855858;
    msg.surf_unkn_x = 0.3117121631632128;
    msg.surf_unkn_y = 0.16515433123329148;
    msg.surf_unkn_z = 0.9034525189123505;
    msg.ss_x = 0.06890564813879341;
    msg.ss_y = 0.7675604348585416;
    msg.ss_z = 0.6555034615721478;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SLUCIDKNICQWVXGLVYUUVNNDFSXPDNEMEEDQCPEGRJBCSEXLQLXBXVJDBQIWNAO");
    tmp_msg_0.dist = 0.46444798026473966;
    tmp_msg_0.err = 0.5123746910225176;
    tmp_msg_0.ctrl_imp = 0.8138791266116555;
    tmp_msg_0.rel_dir_x = 0.38509749079245925;
    tmp_msg_0.rel_dir_y = 0.5009273546286166;
    tmp_msg_0.rel_dir_z = 0.9846312947267597;
    tmp_msg_0.err_x = 0.5198999340986232;
    tmp_msg_0.err_y = 0.10962929629310558;
    tmp_msg_0.err_z = 0.009846339645573021;
    tmp_msg_0.rf_err_x = 0.9793546255217667;
    tmp_msg_0.rf_err_y = 0.4050803502977479;
    tmp_msg_0.rf_err_z = 0.3555955690827822;
    tmp_msg_0.rf_err_vx = 0.39650070954791705;
    tmp_msg_0.rf_err_vy = 0.8596618805386016;
    tmp_msg_0.rf_err_vz = 0.9123671097592916;
    tmp_msg_0.ss_x = 0.8930846109349052;
    tmp_msg_0.ss_y = 0.5427463223603444;
    tmp_msg_0.ss_z = 0.46167260700007884;
    tmp_msg_0.virt_err_x = 0.4195808196343833;
    tmp_msg_0.virt_err_y = 0.93128748125616;
    tmp_msg_0.virt_err_z = 0.46420455248556347;
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
    msg.setTimeStamp(0.7750603443932106);
    msg.setSource(5464U);
    msg.setSourceEntity(184U);
    msg.setDestination(36957U);
    msg.setDestinationEntity(187U);
    msg.ax_cmd = 0.6275940077499208;
    msg.ay_cmd = 0.9387099635824845;
    msg.az_cmd = 0.9673909766657701;
    msg.ax_des = 0.22676350954344482;
    msg.ay_des = 0.23689854387111842;
    msg.az_des = 0.7076135453833189;
    msg.virt_err_x = 0.7193174153262606;
    msg.virt_err_y = 0.413587028047235;
    msg.virt_err_z = 0.982896216442786;
    msg.surf_fdbk_x = 0.8650285618786074;
    msg.surf_fdbk_y = 0.3889338800877853;
    msg.surf_fdbk_z = 0.16849811976680518;
    msg.surf_unkn_x = 0.015941622259932675;
    msg.surf_unkn_y = 0.36145577078595115;
    msg.surf_unkn_z = 0.9239589262516454;
    msg.ss_x = 0.22186578945844615;
    msg.ss_y = 0.5424812698277838;
    msg.ss_z = 0.33280601670995813;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HUSQWYGGNPBJNJNWXMRVWHEQZKVVDYBIDEHAXVQOKIXHTGBONCXJVTLLFBHBOPOGVHMNIJYOFDQLIYLURKRXNDFVSQWLTVSIQIDDPRWSQJBKXVZGALZDXHUENALYMPMCUBMJGSDGEWAOSDZFOFPYATAIEEVRZNTKGNCBIMLIBZXZCGCYCPLLSRMCPJYXRUCUOCUTNYWQSX");
    tmp_msg_0.dist = 0.3863733429281172;
    tmp_msg_0.err = 0.9389733803235542;
    tmp_msg_0.ctrl_imp = 0.5976952125283316;
    tmp_msg_0.rel_dir_x = 0.482405357012048;
    tmp_msg_0.rel_dir_y = 0.5291101147130485;
    tmp_msg_0.rel_dir_z = 0.06719892873542377;
    tmp_msg_0.err_x = 0.9290505439207531;
    tmp_msg_0.err_y = 0.7810682738705167;
    tmp_msg_0.err_z = 0.006801456841133424;
    tmp_msg_0.rf_err_x = 0.8414434146203791;
    tmp_msg_0.rf_err_y = 0.7370061381482349;
    tmp_msg_0.rf_err_z = 0.35581679033664404;
    tmp_msg_0.rf_err_vx = 0.5828595320883554;
    tmp_msg_0.rf_err_vy = 0.17907198596402008;
    tmp_msg_0.rf_err_vz = 0.14924557994098175;
    tmp_msg_0.ss_x = 0.5359670314605428;
    tmp_msg_0.ss_y = 0.8552177554000997;
    tmp_msg_0.ss_z = 0.13766192821550238;
    tmp_msg_0.virt_err_x = 0.5063141213894645;
    tmp_msg_0.virt_err_y = 0.2756949219732783;
    tmp_msg_0.virt_err_z = 0.1368422317925675;
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
    msg.setTimeStamp(0.5023115409110779);
    msg.setSource(31892U);
    msg.setSourceEntity(192U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(12U);
    msg.s_id.assign("JKGIRGKPCMJMJFISLNPDSBDQYBXDLVKPDDXQCANBECYCMVKLZVFAHQEOSPACOCTQYBHZEUSWOWINWNIFNIAOBLMRGNXESRFNBGSDZCZKLLXKHJIFVYSFKATIUJWGNTJUOHKGBXHPGBCNSBYUPTYEY");
    msg.dist = 0.3524378969432812;
    msg.err = 0.3073404081606963;
    msg.ctrl_imp = 0.9405148072831708;
    msg.rel_dir_x = 0.3821669686179402;
    msg.rel_dir_y = 0.7944191377140043;
    msg.rel_dir_z = 0.39157412399447455;
    msg.err_x = 0.2752936359559752;
    msg.err_y = 0.5815469376231344;
    msg.err_z = 0.7034633792395926;
    msg.rf_err_x = 0.9981086846541538;
    msg.rf_err_y = 0.9225830465655094;
    msg.rf_err_z = 0.4744042398398969;
    msg.rf_err_vx = 0.3645124129069428;
    msg.rf_err_vy = 0.18281045367027016;
    msg.rf_err_vz = 0.8760726031800639;
    msg.ss_x = 0.9868661847887129;
    msg.ss_y = 0.7960651576617233;
    msg.ss_z = 0.7011871423101174;
    msg.virt_err_x = 0.7481293319715225;
    msg.virt_err_y = 0.9075983922628363;
    msg.virt_err_z = 0.6276897135202738;

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
    msg.setTimeStamp(0.671928246327571);
    msg.setSource(53467U);
    msg.setSourceEntity(120U);
    msg.setDestination(17947U);
    msg.setDestinationEntity(167U);
    msg.s_id.assign("XRWEPWBAUSMFNJUNWMCQDJNKJNUOVHLDTYVKGARUJFPHDKDWMZGTMKOITRYLS");
    msg.dist = 0.6028101269390671;
    msg.err = 0.7986873521038061;
    msg.ctrl_imp = 0.16946123659328705;
    msg.rel_dir_x = 0.6649469423577665;
    msg.rel_dir_y = 0.27517431528531344;
    msg.rel_dir_z = 0.4751186900345422;
    msg.err_x = 0.05406224274609317;
    msg.err_y = 0.7177791239051348;
    msg.err_z = 0.5414490994474083;
    msg.rf_err_x = 0.25846757090705297;
    msg.rf_err_y = 0.5239043259908455;
    msg.rf_err_z = 0.2753303414405702;
    msg.rf_err_vx = 0.48490282599702306;
    msg.rf_err_vy = 0.36737656476601754;
    msg.rf_err_vz = 0.7768440607169032;
    msg.ss_x = 0.9434904755874132;
    msg.ss_y = 0.7864738074849351;
    msg.ss_z = 0.3982009671295691;
    msg.virt_err_x = 0.04400066820924986;
    msg.virt_err_y = 0.906474900512678;
    msg.virt_err_z = 0.5754209345592441;

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
    msg.setTimeStamp(0.25158262043715796);
    msg.setSource(49650U);
    msg.setSourceEntity(180U);
    msg.setDestination(59041U);
    msg.setDestinationEntity(161U);
    msg.s_id.assign("WCNMPRVDDVAMIHWYYKXLUJDEOZUDZZCMBILHBYRLLFRQCUCSVGJOGJIKCVSIUAAMARNWWTBJVOKINLJJWFKHOXDFGFLHEXTQYHFGUWPDYMITKKXVEDBXTTGIQSSSPYNMURPZTOJKAHSVZIRKVQLUG");
    msg.dist = 0.29940762039179014;
    msg.err = 0.4611136955650672;
    msg.ctrl_imp = 0.3364780615351185;
    msg.rel_dir_x = 0.014006512518426106;
    msg.rel_dir_y = 0.4852869283966117;
    msg.rel_dir_z = 0.2976704005275954;
    msg.err_x = 0.8298545403061577;
    msg.err_y = 0.2515225896789314;
    msg.err_z = 0.41771701279071516;
    msg.rf_err_x = 0.7355989440567362;
    msg.rf_err_y = 0.3506091980829805;
    msg.rf_err_z = 0.1090667648416106;
    msg.rf_err_vx = 0.31973694466794267;
    msg.rf_err_vy = 0.10228479132873114;
    msg.rf_err_vz = 0.10808159671400674;
    msg.ss_x = 0.07010437983419149;
    msg.ss_y = 0.9722774025389492;
    msg.ss_z = 0.10391624675619593;
    msg.virt_err_x = 0.5317988272350261;
    msg.virt_err_y = 0.06545263380269117;
    msg.virt_err_z = 0.6230542106055318;

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
    msg.setTimeStamp(0.461036127042619);
    msg.setSource(58076U);
    msg.setSourceEntity(148U);
    msg.setDestination(16727U);
    msg.setDestinationEntity(246U);
    msg.timeout = 16407U;
    msg.rpm = 0.5475632247983367;
    msg.direction = 12U;
    msg.custom.assign("HAJFKWSTZCQHSERRMSIXZIFUHIDGEDOKPFBDNELIVXIKTRTBZKUGUUOVMVLDQZEZNSEOUPOILWPXSVNTGUGPUAARKUYUQCMXSXTENYAGHHLDBWTMBGKVVVRCCHZYSSRFTANFFLANNGYJMWQDABYKQTMWIXDBCLNOOYEYATS");

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
    msg.setTimeStamp(0.04767824871267645);
    msg.setSource(51354U);
    msg.setSourceEntity(135U);
    msg.setDestination(40603U);
    msg.setDestinationEntity(253U);
    msg.timeout = 18977U;
    msg.rpm = 0.8177221739609211;
    msg.direction = 42U;
    msg.custom.assign("FULBLQHTPTXMWRONRKDRNLTQTWIPAVKCEZOVHFEMPKZUKNXYIDNTOGPLWLGUETEIRSYIXCKVXLCYYTFREOABNDGNXBGMLAXSPHPUJMVMDKCIUVAAGQJFDQWNOPOKFTBGFEOFHLZDBUSHLQSNSEJUWIBYDIJMGKFYZWORLCDBUMXMBMXIICXBZJZDCSVJJDGJPSZFSAHRHGGHJECYYVQFRKVWQQAVWIHAUOZCRPOWBYJKTECHAQZ");

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
    msg.setTimeStamp(0.42801922055001773);
    msg.setSource(33502U);
    msg.setSourceEntity(143U);
    msg.setDestination(12736U);
    msg.setDestinationEntity(109U);
    msg.timeout = 6964U;
    msg.rpm = 0.7821654792198938;
    msg.direction = 77U;
    msg.custom.assign("KCPJWCARQFULZJFXWURPUEZQRNBXLZRPOGKMSAOXGBBNNGIYJVLAPSPKSPSJEHOXOCQAKECUJWCTLTWKWKYVAAVUHRETSMJFGFBYKIZBBYVQNNZNEOQGKUUHXSVTC");

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
    msg.setTimeStamp(0.598019455775635);
    msg.setSource(5372U);
    msg.setSourceEntity(251U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("NBEHDRABCLSPDUOHYMBNFAFSWOSYJXTFLZGWNPCZFDSVNRQCZYQNOXKLOTUXKUKXSJFZTBUCSJLXCFOCBEPIZHEMDOQIKJWMMIHFUKASNDDCIGVYGWGKGTVVP");
    msg.type = 7U;
    msg.op = 139U;
    msg.group_name.assign("BBIEAZCJLRNREYJKXVIJJPYOSCGXBBLRRCPBDTQQKNOZUDVABACFJEPRFNEXFVKZNMODAOXSWHTAKUMBWNHQOLGULOYWNEARSQWHYHSMSPHGREWZKXCWIDCQCFZVOBJVSYVDZYEVPEJTUQZYKDIDBCOIMGGTMLTMXMZWRFQPUTAHTXXIYKIHPVNUXTIPMVGXGLDZRWQNURZLLODJHNCK");
    msg.plan_id.assign("IHRTPARCXZSHSZBIKQHFLPWOLCNFUIGJTXEXEAWLKVJJCLZMELBBWYWDNEBFLYAFWKOCO");
    msg.description.assign("BHSPSTMJMLBAUOFMTPOXCRXKKZOFUKGARXXCTKEJHJVOCKFFGFDCHS");
    msg.reference_frame = 135U;
    msg.leader_bank_lim = 0.09604749418802017;
    msg.leader_speed_min = 0.5753174345536675;
    msg.leader_speed_max = 0.5545618924894462;
    msg.leader_alt_min = 0.30880711399123095;
    msg.leader_alt_max = 0.3510560091619199;
    msg.pos_sim_err_lim = 0.8210084403830579;
    msg.pos_sim_err_wrn = 0.5170743138865762;
    msg.pos_sim_err_timeout = 30088U;
    msg.converg_max = 0.034964405447103775;
    msg.converg_timeout = 27203U;
    msg.comms_timeout = 2106U;
    msg.turb_lim = 0.1129016770851613;
    msg.custom.assign("NGYEIQAUWBARMZZXDFVLLOBMISMZTCRSOLVMTGOMUFXEUVAKZBDRBULNJPLXWFFHAFJWNCFGKHDJHERXCPXNRP");

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
    msg.setTimeStamp(0.4199080271418256);
    msg.setSource(37761U);
    msg.setSourceEntity(168U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(125U);
    msg.formation_name.assign("KMYGFJWMVKXEVXXDGNLLDYBTASRVOTCHCQVENCPBWIGNLZPBUHNLGSICEPPMMHZOMRKHARHZOYHSFHZGJDHDUUOXUSQSJFXWBQCWASLETOBCXTUYSQVTFJGQKRIOPDBNPPTJTOMPDAHMKBFVEVFXREMWAMGRXKIDOKULBUK");
    msg.type = 191U;
    msg.op = 242U;
    msg.group_name.assign("EQJRVNAYPYGDIMHNIVLENPRMWJQSWVQLOLAFSOSOERSUFDVKXCGYFOHZXNNDXZFNVQUPXWLHIAUWENZITEJQRLPZTUUJTQHKYWDPLKLVWSBQTCDFOLJOFYHCMTZKOEBVJDKKTCUARPBMPYOTNGFHSLAY");
    msg.plan_id.assign("IXAKRARXRSOZJYQHFOMPGTZSNLJJZWAIVAFGXNGCKTBFZBFMDSVEDPBHBRGHHKKWHPWRIDPCOAXVYDJXVBVMZEWLPQBKHDDSHGYF");
    msg.description.assign("ABFFJXHFMDHEWGJIKGHQIWUZWKVMLTWGBZJRDJYYDVR");
    msg.reference_frame = 200U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44292U;
    tmp_msg_0.off_x = 0.2617363054788696;
    tmp_msg_0.off_y = 0.7553433107929872;
    tmp_msg_0.off_z = 0.2913068476518069;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.6054199780655881;
    msg.leader_speed_min = 0.5741082568093832;
    msg.leader_speed_max = 0.17522887919828856;
    msg.leader_alt_min = 0.7538368881216608;
    msg.leader_alt_max = 0.45185235854712513;
    msg.pos_sim_err_lim = 0.09944655117816048;
    msg.pos_sim_err_wrn = 0.9000757487671034;
    msg.pos_sim_err_timeout = 18813U;
    msg.converg_max = 0.7895688263194593;
    msg.converg_timeout = 64457U;
    msg.comms_timeout = 12098U;
    msg.turb_lim = 0.6214046426964942;
    msg.custom.assign("WLHOQGJQMOHWJMFPIVUKCRBODMTIRGKGDXSCSGSMCMOQJRATBNLQYNULYHMLKLHHBRA");

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
    msg.setTimeStamp(0.10192096275324958);
    msg.setSource(54449U);
    msg.setSourceEntity(209U);
    msg.setDestination(461U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("LKXNBIBRWJWUFUQMNJFAVWBPNAEREAWHFVRDZFBELTGCLIRGSNUXHVQCEEKLCVYGLSRSZPOIYAXJCXBWQBZHKFNGIHDSCGPQJ");
    msg.type = 76U;
    msg.op = 99U;
    msg.group_name.assign("SXLBYJDKHQBRBHGEAJEMWWWBFPEHHMURSOGOWDXAIRDXGXNGENKHIML");
    msg.plan_id.assign("CCTJPJJSOQNUMKSXHZOEVLWMJSGXQESFUZOWKRQXKSXVSYSHTMYSQAODMPTEUXIRCHMRBCKNFQCDHFVVUSNZWGMAIAZCIUGEOACOGAQEDEWPXHZFVGIKNTLQXXBWWATYNQZXBPMDAOZDWOORWFYUPDE");
    msg.description.assign("YBNAACWYDEIPETWSPGYBGBNCICLURIAJEXCLUFHQPHVRTZAQGJKROLMEQVSROAGSLMIFTUBQQEUTKQYVHULOYGLYKMXRSFPJAJZJASKDOXPYWAVQZMBPVWRLTWHJTXTFPIFDOUWBWYCDDDLZROBDBWFXGXNQDHNZNJHCJNKFFMMKIFARDSGXKKNSCVWMNBRINQVNUEUTOGVEYRQMEJPBZPSKIHIKPZDMLXZFTHE");
    msg.reference_frame = 211U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51503U;
    tmp_msg_0.off_x = 0.405919354386281;
    tmp_msg_0.off_y = 0.9324125942839825;
    tmp_msg_0.off_z = 0.4435432117417134;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7264657807553613;
    msg.leader_speed_min = 0.8445249694679814;
    msg.leader_speed_max = 0.2674325412538189;
    msg.leader_alt_min = 0.5716365469932323;
    msg.leader_alt_max = 0.31031313355795764;
    msg.pos_sim_err_lim = 0.12994894652161693;
    msg.pos_sim_err_wrn = 0.8276842853326307;
    msg.pos_sim_err_timeout = 59825U;
    msg.converg_max = 0.44315818895245207;
    msg.converg_timeout = 31448U;
    msg.comms_timeout = 2069U;
    msg.turb_lim = 0.4324928062046064;
    msg.custom.assign("DDQMCWSAUHDXYPJBXCNMRPXJVWRTTTNVXZDVEHLMKDQJHBWWAOLCKRPAFIUQFFZFBSYILXCYKZBOCIXGDUSWJGPRQSZFCFBRTMQUCXNIDEZWSYEWMNVLF");

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
    msg.setTimeStamp(0.6921090625254828);
    msg.setSource(30839U);
    msg.setSourceEntity(131U);
    msg.setDestination(50073U);
    msg.setDestinationEntity(115U);
    msg.timeout = 16811U;
    msg.lat = 0.36783625226243666;
    msg.lon = 0.7165305468769586;
    msg.z = 0.8186729977111357;
    msg.z_units = 110U;
    msg.speed = 0.6473258502596683;
    msg.speed_units = 51U;
    msg.custom.assign("UCTKWHTPTOOBERSWUJENRGMZHRLDJMNJPN");

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
    msg.setTimeStamp(0.42174108745868133);
    msg.setSource(54409U);
    msg.setSourceEntity(87U);
    msg.setDestination(42477U);
    msg.setDestinationEntity(17U);
    msg.timeout = 3990U;
    msg.lat = 0.051101377797270864;
    msg.lon = 0.30290963364952717;
    msg.z = 0.7137211458141043;
    msg.z_units = 165U;
    msg.speed = 0.4774753110412616;
    msg.speed_units = 143U;
    msg.custom.assign("EOKWMFDIUCNYASWKCHNHEWOHRLGWXDVBUVUZHFFOZIMVZXZCASIDS");

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
    msg.setTimeStamp(0.5240362886552428);
    msg.setSource(46431U);
    msg.setSourceEntity(31U);
    msg.setDestination(22051U);
    msg.setDestinationEntity(113U);
    msg.timeout = 30845U;
    msg.lat = 0.7979846485673512;
    msg.lon = 0.2517981338669115;
    msg.z = 0.28669724076393577;
    msg.z_units = 147U;
    msg.speed = 0.3055496002618815;
    msg.speed_units = 14U;
    msg.custom.assign("NRXKJSNSUCCUXQIBMQRZYXZKAEATVLOZHWMYMVDZFHQNSVONIYIKWVDSYDKCNAHUIETGQFCHEGUGAT");

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
    msg.setTimeStamp(0.8324204976374197);
    msg.setSource(7376U);
    msg.setSourceEntity(147U);
    msg.setDestination(27692U);
    msg.setDestinationEntity(16U);
    msg.timeout = 57272U;
    msg.lat = 0.759824796006865;
    msg.lon = 0.867277736162961;
    msg.z = 0.9996953926414397;
    msg.z_units = 140U;
    msg.speed = 0.010929308799538018;
    msg.speed_units = 25U;
    msg.custom.assign("UQVZGMYYVOMEZSFKPUEPBXSXCGHRGTOYXVHRMCLKNG");

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
    msg.setTimeStamp(0.17482989079608768);
    msg.setSource(19801U);
    msg.setSourceEntity(223U);
    msg.setDestination(20481U);
    msg.setDestinationEntity(106U);
    msg.timeout = 7081U;
    msg.lat = 0.08617964655711785;
    msg.lon = 0.35275333981542634;
    msg.z = 0.48233369212775057;
    msg.z_units = 242U;
    msg.speed = 0.9421890224309448;
    msg.speed_units = 117U;
    msg.custom.assign("DXBMXFNUEGDVWNPOYYMDCBXDJLKFDMDWHUSGCWAHXLDCLCFKFOWKLSTLXEUQYTTTEYVAQFBXIURXDKUNRPIZLAQNFUSGEQWZHTGQTFOVIKJIHWECXA");

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
    msg.setTimeStamp(0.4906279088358866);
    msg.setSource(1231U);
    msg.setSourceEntity(0U);
    msg.setDestination(28735U);
    msg.setDestinationEntity(87U);
    msg.timeout = 38529U;
    msg.lat = 0.9211761203304313;
    msg.lon = 0.8814079894089722;
    msg.z = 0.32297783622477216;
    msg.z_units = 201U;
    msg.speed = 0.5941900695469761;
    msg.speed_units = 72U;
    msg.custom.assign("DPXIKHHLUCDRLIWVYTJDRRSHIJXETFRBFOJBQUCRGRDANYGHYHFMKNHXQVECQFUWLGCWKMAPOCGOQZBSYCSQPBTSUSKPPBNWMHKYIXBELGKZALTYNRKHJTMZMVSFDEOEEWYALLYMOKUQLWUCRVZUTTWCJEQAOFDKUXMQVLBGFJAAZDDFCJXGOYJHALVMYJUSOBOSINHPCIFXNAWGUWZVNNZIJZNGTDGDPXBF");

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
    msg.setTimeStamp(0.2099557515232383);
    msg.setSource(3207U);
    msg.setSourceEntity(54U);
    msg.setDestination(29188U);
    msg.setDestinationEntity(58U);
    msg.arrival_time = 0.8335010830612856;
    msg.lat = 0.1892656699747084;
    msg.lon = 0.3603546109624789;
    msg.z = 0.7806078171275334;
    msg.z_units = 240U;
    msg.travel_z = 0.3459548907231682;
    msg.travel_z_units = 45U;
    msg.delayed = 65U;

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
    msg.setTimeStamp(0.29584850958451625);
    msg.setSource(22390U);
    msg.setSourceEntity(219U);
    msg.setDestination(28805U);
    msg.setDestinationEntity(194U);
    msg.arrival_time = 0.16267363233594112;
    msg.lat = 0.8733988522802939;
    msg.lon = 0.7602361419202409;
    msg.z = 0.2942144856237524;
    msg.z_units = 235U;
    msg.travel_z = 0.05381687512027422;
    msg.travel_z_units = 27U;
    msg.delayed = 158U;

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
    msg.setTimeStamp(0.4517796897988503);
    msg.setSource(16191U);
    msg.setSourceEntity(215U);
    msg.setDestination(11213U);
    msg.setDestinationEntity(39U);
    msg.arrival_time = 0.5403107099393982;
    msg.lat = 0.36832543130221385;
    msg.lon = 0.35055834601144953;
    msg.z = 0.17541544787391083;
    msg.z_units = 111U;
    msg.travel_z = 0.34466171473618756;
    msg.travel_z_units = 81U;
    msg.delayed = 222U;

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
    msg.setTimeStamp(0.6294588885300929);
    msg.setSource(61671U);
    msg.setSourceEntity(72U);
    msg.setDestination(44229U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.9267169151540096;
    msg.lon = 0.9890845960468516;
    msg.z = 0.21833624797262174;
    msg.z_units = 226U;
    msg.speed = 0.9065795114512706;
    msg.speed_units = 106U;
    msg.bearing = 0.20348361956369077;
    msg.cross_angle = 0.04546990474549262;
    msg.width = 0.3172201205963546;
    msg.length = 0.8236573191182596;
    msg.coff = 140U;
    msg.angaperture = 0.11852176685310267;
    msg.range = 60979U;
    msg.overlap = 194U;
    msg.flags = 69U;
    msg.custom.assign("MDNSJLGHVWAVBYZKRUWULCDZMEGIRVHTGAHYJBQQNSOJVFOLWUAIUCJLGFJSPTKENLPHHNZPOMAKDYHXRSJSEDMYGXDXVZAQKQCG");

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
    msg.setTimeStamp(0.5949964233496738);
    msg.setSource(30439U);
    msg.setSourceEntity(148U);
    msg.setDestination(15324U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.9496087123355501;
    msg.lon = 0.05136851187030855;
    msg.z = 0.9149320404963371;
    msg.z_units = 241U;
    msg.speed = 0.7720595209867654;
    msg.speed_units = 60U;
    msg.bearing = 0.33959513005444786;
    msg.cross_angle = 0.9186651313445426;
    msg.width = 0.222974804503696;
    msg.length = 0.04000273562071155;
    msg.coff = 193U;
    msg.angaperture = 0.30478521345120635;
    msg.range = 6261U;
    msg.overlap = 4U;
    msg.flags = 27U;
    msg.custom.assign("CLMMXLMZNBLONUUQVNTNOTYHTSWNNOARYSWUEEWPBZVGZHSKIDRXXFSTTRKIAYFADCYD");

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
    msg.setTimeStamp(0.8872764917750847);
    msg.setSource(9408U);
    msg.setSourceEntity(169U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.8731926173712251;
    msg.lon = 0.219868395710193;
    msg.z = 0.4746394888291824;
    msg.z_units = 133U;
    msg.speed = 0.4820702721715159;
    msg.speed_units = 154U;
    msg.bearing = 0.20815647359754608;
    msg.cross_angle = 0.95134506275567;
    msg.width = 0.5474835281946954;
    msg.length = 0.09113801388917209;
    msg.coff = 103U;
    msg.angaperture = 0.3677654824033647;
    msg.range = 1912U;
    msg.overlap = 107U;
    msg.flags = 191U;
    msg.custom.assign("MFVQVLEANHZEGWCNQBKZKXANJOGRZDHYPJZFAKUWBKPSEJGMMEPMQYOVRJEIZOACBXGYSBVWADWCGCEXLBHWOSAECALUMZDUFFNVKTDFYTUBOZBNXKCWSHILIDJMYMKEFGCUHJQRTYAXMWNLGSTRCT");

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
    msg.setTimeStamp(0.9416706104875978);
    msg.setSource(422U);
    msg.setSourceEntity(46U);
    msg.setDestination(7263U);
    msg.setDestinationEntity(77U);
    msg.timeout = 60675U;
    msg.lat = 0.2762365773344585;
    msg.lon = 0.9321497702559357;
    msg.z = 0.8765216405535029;
    msg.z_units = 127U;
    msg.speed = 0.12244685694216473;
    msg.speed_units = 75U;
    msg.syringe0 = 199U;
    msg.syringe1 = 60U;
    msg.syringe2 = 107U;
    msg.custom.assign("JSYZTELSKVZXXYQSTLGVGIONCSNCUBJTILSADEOLGBYQODFHTTLUNAURJXWMFVJQRBVLPYGHPSKJHJYWNUCAPBCEMCBPXFBDHOUQKMPZJLDOSOWMCMBQFLRIYWIMXTJOHVWGUDUWDMECLNAKFDZQGEZNSTKRPQKGZVRICDKJESKOWONMXWN");

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
    msg.setTimeStamp(0.7104342161768501);
    msg.setSource(35563U);
    msg.setSourceEntity(242U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(118U);
    msg.timeout = 45804U;
    msg.lat = 0.5335050145964435;
    msg.lon = 0.5575290691612732;
    msg.z = 0.4201668757184229;
    msg.z_units = 145U;
    msg.speed = 0.04606054157928985;
    msg.speed_units = 77U;
    msg.syringe0 = 151U;
    msg.syringe1 = 166U;
    msg.syringe2 = 232U;
    msg.custom.assign("TOBNFRXJSZIFUGDMULXLRDKVVWFGODELIUSWTGJPVHRYBUHFWXOZKFRMMUPQYBFSQLPVIUOTUPAQTWVIMO");

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
    msg.setTimeStamp(0.7918531112232066);
    msg.setSource(59019U);
    msg.setSourceEntity(54U);
    msg.setDestination(46996U);
    msg.setDestinationEntity(239U);
    msg.timeout = 18721U;
    msg.lat = 0.37568368747727876;
    msg.lon = 0.04030112478216441;
    msg.z = 0.5488293236593064;
    msg.z_units = 222U;
    msg.speed = 0.8493644291946704;
    msg.speed_units = 244U;
    msg.syringe0 = 122U;
    msg.syringe1 = 167U;
    msg.syringe2 = 71U;
    msg.custom.assign("SYJHLLNXUVZOZIXPHUEYCOYGNCEKDVAZLPHUBJAQFANWTOIMGJAPDSMMPKNKZITXZTAFLGFVMRLFQBKISVSCZROCDTDDFNSCQTCLYTGMWIGBSXWVEVGRICMRFBJWFAPRONBHZKGSPZXHTGDKRKPWYATXSEIHY");

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
    msg.setTimeStamp(0.4282816682257611);
    msg.setSource(13112U);
    msg.setSourceEntity(23U);
    msg.setDestination(44200U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.6265308878744483);
    msg.setSource(13144U);
    msg.setSourceEntity(103U);
    msg.setDestination(9986U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.7736559848432835);
    msg.setSource(54094U);
    msg.setSourceEntity(36U);
    msg.setDestination(38429U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.3886447200977009);
    msg.setSource(6723U);
    msg.setSourceEntity(236U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.6165298084771274;
    msg.lon = 0.3263797116720206;
    msg.z = 0.7811152118359429;
    msg.z_units = 37U;
    msg.speed = 0.0021653806472384796;
    msg.speed_units = 221U;
    msg.takeoff_pitch = 0.7887540261251955;
    msg.custom.assign("SQVYICYLAAGKKTITBWHPILZQSWAPN");

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
    msg.setTimeStamp(0.29224520838404155);
    msg.setSource(43473U);
    msg.setSourceEntity(69U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.3310399114595921;
    msg.lon = 0.8689804269595783;
    msg.z = 0.7866453233810279;
    msg.z_units = 66U;
    msg.speed = 0.5807924277547214;
    msg.speed_units = 210U;
    msg.takeoff_pitch = 0.416723016231787;
    msg.custom.assign("BLHATONGPYGSIXPNTITIYCLSANVQKDQZAACWLHWZTVBVYUNPUFZOXNRJALBZDQRASYGFTUOLMJXEMLCYNLQGXBTKSWHQXSPYRUQIIQVMFBXMHOWJMEERMDWYZUGECPYSRBWTGFEKRMEUJSLFKVMKGFFPTWJOVBIKSKHJAQMDATVDJZECOHUIDDIXKOAWOPBEJPFGEZFEGVRHHBSAYCO");

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
    msg.setTimeStamp(0.1259632765607699);
    msg.setSource(64992U);
    msg.setSourceEntity(100U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.14169846015547682;
    msg.lon = 0.5690169484512652;
    msg.z = 0.5915099235362596;
    msg.z_units = 143U;
    msg.speed = 0.7885013713289569;
    msg.speed_units = 148U;
    msg.takeoff_pitch = 0.5608844075817432;
    msg.custom.assign("IRRKHGNBQTSVAIFPXKZECROGFWTOUBFECWLBJYDEMFGXZIBXJOICKADPDIVBYNXTAIOVFBKROWCXRHMLVRTMIMKNGYJAOLWDYPTUEMEPCTQBLHSDADIBDOYOJSSNTQYJLZMMKNXZPLAYHU");

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
    msg.setTimeStamp(0.90970183384676);
    msg.setSource(11634U);
    msg.setSourceEntity(202U);
    msg.setDestination(36897U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.7671906879104013;
    msg.lon = 0.32705004483021516;
    msg.z = 0.14548682167415106;
    msg.z_units = 30U;
    msg.speed = 0.3252110414492442;
    msg.speed_units = 159U;
    msg.abort_z = 0.9355990361681077;
    msg.bearing = 0.9698382096807534;
    msg.glide_slope = 221U;
    msg.glide_slope_alt = 0.6562428405726176;
    msg.custom.assign("CKNOBLSDYXZRVZVKMJMKRQWISVGVWVXJHNADZWGUZOFFKNGYGFMKAGSQABIUYZITSXZLKEDJYEFVHIXYJCWWUYICUULPWIWLGTPMUFMGVRQPSFBBJOZALSYUZKLOHQALPORXUSANCTIDEJRWANLDHDIPSNXMXWHXTCPYJBUEHUBOCBAQRMJ");

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
    msg.setTimeStamp(0.26800243150137293);
    msg.setSource(37135U);
    msg.setSourceEntity(73U);
    msg.setDestination(2134U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.907503846960465;
    msg.lon = 0.0165107295895629;
    msg.z = 0.7734251818917565;
    msg.z_units = 251U;
    msg.speed = 0.2404377954756277;
    msg.speed_units = 182U;
    msg.abort_z = 0.5092718484352463;
    msg.bearing = 0.8350705490012909;
    msg.glide_slope = 93U;
    msg.glide_slope_alt = 0.44336466604047564;
    msg.custom.assign("GDDBYSSTLOFFERCZQKASHQLSHVYRSVNUQNNVJMBXDPZIJXQLXNE");

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
    msg.setTimeStamp(0.6177964215473455);
    msg.setSource(7640U);
    msg.setSourceEntity(100U);
    msg.setDestination(26132U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.9351130446073261;
    msg.lon = 0.7685701730355456;
    msg.z = 0.5888989173828324;
    msg.z_units = 44U;
    msg.speed = 0.5443333960993111;
    msg.speed_units = 1U;
    msg.abort_z = 0.8693963088870884;
    msg.bearing = 0.2595069623613637;
    msg.glide_slope = 148U;
    msg.glide_slope_alt = 0.3145002773815614;
    msg.custom.assign("BNOZIZBKMYEEZTMQVKXCMSKPGPQYRYTZQMXVVTFOXDGHCLXWCVLKT");

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
    msg.setTimeStamp(0.38419563964814274);
    msg.setSource(46345U);
    msg.setSourceEntity(79U);
    msg.setDestination(893U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.10741251117029027;
    msg.lon = 0.9369492350529812;
    msg.speed = 0.8256303551620046;
    msg.speed_units = 163U;
    msg.limits = 251U;
    msg.max_depth = 0.6336938187112894;
    msg.min_alt = 0.9241829608022795;
    msg.time_limit = 0.3888583455255562;
    msg.controller.assign("HFUNUSXRIPIACZWOQK");
    msg.custom.assign("MDIECYZMBFJBLZQNTSAWDZZEL");

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
    msg.setTimeStamp(0.8527241853019446);
    msg.setSource(63451U);
    msg.setSourceEntity(148U);
    msg.setDestination(59159U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.31600553730666714;
    msg.lon = 0.954086197178868;
    msg.speed = 0.7857180299636745;
    msg.speed_units = 72U;
    msg.limits = 242U;
    msg.max_depth = 0.6169599027245373;
    msg.min_alt = 0.7109124585233209;
    msg.time_limit = 0.07724238138246531;
    msg.controller.assign("OLWLXJIBZENWDOPMLKSTUGCYBCQFNHEEHYXREHWLXMXDSARSJBMOXLQADXYRDVAAZNTVUTZLNEOUWGOGCYKORNXBKCLJGDFFVMZIFPIINKVRGF");
    msg.custom.assign("RSZPPATFJKXVWYYGIRYZMTHDDWELYWJTTDNVGKCOAPNMBHFILKZBORKDXFYCWNGGCUKJRDBGXQHBFJGPUCWSBAMOYJXSOQDIOXBCKCQDEBWNTUNLLPTURAGJCHVLDFOWIIDMUAQCQQEZUCNAKXPMVTMSZXEHIXUJLZGWOAGVZQKNV");

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
    msg.setTimeStamp(0.7704106699584171);
    msg.setSource(63848U);
    msg.setSourceEntity(238U);
    msg.setDestination(11622U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.9516939301256597;
    msg.lon = 0.21796065402450415;
    msg.speed = 0.10674976667929892;
    msg.speed_units = 187U;
    msg.limits = 182U;
    msg.max_depth = 0.821611374552682;
    msg.min_alt = 0.5935301931367291;
    msg.time_limit = 0.2242900604117578;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5267076394708119;
    tmp_msg_0.lon = 0.9347410919217126;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PPVRNYYVRQTOKQBLGRQQUUHIVMWOJNWAEVLFKENTSSEIDNFAJMPJKCAMIMMUYFGEOOKDSQOSHWZZKHFWNAEBHULTWGCR");
    msg.custom.assign("YHOQSEHUPKMVGVLLWFKOWTENUQVPRNNJGKGSYXALPOORASNYWTLZSYVDAACQXXDOKYKQEPAANPCBUBXXJBJIHJHMFWMTFEMIQOKKCYEMQLQCDCIMGYVPFRHNOFJMDBPZJAXJKTXRMGVYJEEDBSZXHZDZORWLVJCAHCGZRUYRCUVAZBUUW");

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
    msg.setTimeStamp(0.30740092708501765);
    msg.setSource(46607U);
    msg.setSourceEntity(179U);
    msg.setDestination(20237U);
    msg.setDestinationEntity(194U);
    msg.target.assign("QGKAERPOAKSMJEGHRITZYOVGLBXUJABNUSYICOVLHKGGOMXMWZHHQAPKYPDLFUQWTJWRNKBVDCCVBFCNGMCTHBWNFXJHRRQEPTDUXQOGHRHEIUNHFVBXODOGSAKELLKLMEZXFOIDMBSINYAORNXZTYETUSYIPARKYLPENLMMFVZLMIJZQWISSUPABWPIPCCBTSC");
    msg.max_speed = 0.34910310321671045;
    msg.speed_units = 174U;
    msg.lat = 0.4302529957785103;
    msg.lon = 0.07984176004006127;
    msg.z = 0.7313659845456307;
    msg.z_units = 146U;
    msg.custom.assign("GDJPVPSDKLXQFTCULRRNYZCCDNDHTWKOELVAFBVZZGDIQCKXMGPZMSGLIPSYN");

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
    msg.setTimeStamp(0.6013801894172071);
    msg.setSource(10723U);
    msg.setSourceEntity(130U);
    msg.setDestination(37436U);
    msg.setDestinationEntity(110U);
    msg.target.assign("UIOKCATVHKDCCOCIVTZSLUFNSDGGNIVAXHZDGCQHFBPXQFGSECXKWJOTSRSMUAVDFNPOTBMMYIOUBLCFRLWFRQHJNWIZDMWRLJYBYQUOQM");
    msg.max_speed = 0.7058385085407289;
    msg.speed_units = 105U;
    msg.lat = 0.3892722120177635;
    msg.lon = 0.9427650020198368;
    msg.z = 0.6275145349334089;
    msg.z_units = 121U;
    msg.custom.assign("EVQUXWRWBRVRYOYRVHMPTQIUXPFTCBGKMDGHDOQCKWCALZKMQZTLZXHRCFOBNBQCBUMSSJYRBAVNOSDWOHMAEAKAZXDWYSVDIVMVJTNYZCIAVBTCGNIWYFJLFBZFAREGLPYHPVXBUMLFUIWKSWEFMNCPWUCPAQYMFTDYEDGSQKZDKXNCKAFTJPOJUZUZDHXENI");

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
    msg.setTimeStamp(0.9336247954684433);
    msg.setSource(64194U);
    msg.setSourceEntity(94U);
    msg.setDestination(13126U);
    msg.setDestinationEntity(136U);
    msg.target.assign("JMVWTNEXIOWYBLFKRAJGGSRYYDHIWKXRUDAIGMXTGXUFHMKPBPHQBPMZCVHTGMGSICZOMQEOHRKCXRNTQYMXBDOZIWDZHULQSMDBIEVVKLDWAXMXRAQOONNIIRLUWNUSCOGPEJSWJWBAJZBSFKBLYCTKTWPPG");
    msg.max_speed = 0.3329819862836745;
    msg.speed_units = 41U;
    msg.lat = 0.36089940342259785;
    msg.lon = 0.5266792442864844;
    msg.z = 0.5725865721423697;
    msg.z_units = 157U;
    msg.custom.assign("TZDSRXYDNBIGT");

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
    msg.setTimeStamp(0.6061991716489383);
    msg.setSource(41626U);
    msg.setSourceEntity(169U);
    msg.setDestination(61631U);
    msg.setDestinationEntity(252U);
    msg.timeout = 25499U;
    msg.lat = 0.896567425589154;
    msg.lon = 0.4951371075350839;
    msg.speed = 0.25809460861362865;
    msg.speed_units = 7U;
    msg.custom.assign("RFBEQIWOXMNGINRGSLQJWUCIRVZPCMKNCDHYGQCYLFSQKMMRBUESUVOOAVHVPVFDHDVJFHDUEXZHUPJWUJENAXXFVZALPGDNQTMCMTBWBULBIOMIJOCKOOYPZOYAOBZYBFEHGYXJXVEYGKTXXZJMDOWSAHWKKCNQNMCPZPPNGZTDRBHBEYKHFNFNUDIKAWALUITVITQGZJWZEKPLQULIGRCGTSMTQAFALAWRXSDEYRBCRLISSVFSDYS");

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
    msg.setTimeStamp(0.05033621632173224);
    msg.setSource(62827U);
    msg.setSourceEntity(11U);
    msg.setDestination(38835U);
    msg.setDestinationEntity(176U);
    msg.timeout = 39618U;
    msg.lat = 0.3188920599000822;
    msg.lon = 0.22949473341467452;
    msg.speed = 0.3143303559626628;
    msg.speed_units = 244U;
    msg.custom.assign("KCILNQDETUSJHDUTFKIVGHZTTQXDPZEALOZDQAVHWBEGKRNRKTIWOIIQLXIKRHTCWNBKQNTYBDDBYWJXNTHBHBUTOYTAOAMCOCFBRUJZPLQVGNAAFDJHGKEUHWNH");

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
    msg.setTimeStamp(0.8116121368352663);
    msg.setSource(44358U);
    msg.setSourceEntity(60U);
    msg.setDestination(29321U);
    msg.setDestinationEntity(73U);
    msg.timeout = 43821U;
    msg.lat = 0.8754081324960792;
    msg.lon = 0.4316946125015525;
    msg.speed = 0.07757148572875516;
    msg.speed_units = 48U;
    msg.custom.assign("LSYLQMKEELMJCDNZCUDXIKDLBDLRHTILMHCSJLCFBIPLXHCQVRGXDYASRXKDSVIAZPAZIMNGSUHOQTWNAUDWNZWTFTPJBVFSFELZDUPPRNIFMEFOOSQXIWRYPGFUOHKECNBZBQVXVOCQBSNQMTTHXWJBWUOWRBJTVZIKBYPWWAUSMAEKVJXPWRATVKMLAIYCPGXRQBJYOHROUEJRFIUODYQAMDNUNVKJGGSMEYEGGGZFKFGYKTQZOXPH");

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
    msg.setTimeStamp(0.09055137136403713);
    msg.setSource(8973U);
    msg.setSourceEntity(86U);
    msg.setDestination(10864U);
    msg.setDestinationEntity(46U);
    msg.control_src = 59581U;
    msg.control_ent = 68U;
    msg.timeout = 0.7619781740098985;

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
    msg.setTimeStamp(0.30062538632673663);
    msg.setSource(18687U);
    msg.setSourceEntity(153U);
    msg.setDestination(13553U);
    msg.setDestinationEntity(217U);
    msg.control_src = 50117U;
    msg.control_ent = 26U;
    msg.timeout = 0.76334388862087;

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
    msg.setTimeStamp(0.45073012075253693);
    msg.setSource(8253U);
    msg.setSourceEntity(249U);
    msg.setDestination(52154U);
    msg.setDestinationEntity(37U);
    msg.control_src = 13720U;
    msg.control_ent = 232U;
    msg.timeout = 0.03822415280395397;

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
    msg.setTimeStamp(0.38713097189619505);
    msg.setSource(35478U);
    msg.setSourceEntity(91U);
    msg.setDestination(8511U);
    msg.setDestinationEntity(139U);
    msg.flags = 0U;
    msg.speed = 0.5952424299952962;
    msg.z = 0.4283885100749948;
    msg.heading = 0.3999063354802662;

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
    msg.setTimeStamp(0.5436941780264419);
    msg.setSource(27757U);
    msg.setSourceEntity(99U);
    msg.setDestination(46033U);
    msg.setDestinationEntity(198U);
    msg.flags = 85U;
    msg.speed = 0.8707095510150943;
    msg.z = 0.03646822803199112;
    msg.heading = 0.15458045573313917;

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
    msg.setTimeStamp(0.0847758288245909);
    msg.setSource(54113U);
    msg.setSourceEntity(180U);
    msg.setDestination(60105U);
    msg.setDestinationEntity(53U);
    msg.flags = 88U;
    msg.speed = 0.07269514914054909;
    msg.z = 0.25655896473270523;
    msg.heading = 0.5919397151307034;

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
    msg.setTimeStamp(0.27762579597751547);
    msg.setSource(27628U);
    msg.setSourceEntity(71U);
    msg.setDestination(57228U);
    msg.setDestinationEntity(167U);
    msg.control_src = 29312U;
    msg.control_ent = 153U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 138U;
    tmp_msg_0.speed = 0.8222910619107489;
    tmp_msg_0.z = 0.5614823007406312;
    tmp_msg_0.heading = 0.2391707945820567;
    msg.command.set(tmp_msg_0);
    msg.state = 82U;

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
    msg.setTimeStamp(0.3101586143218784);
    msg.setSource(31060U);
    msg.setSourceEntity(176U);
    msg.setDestination(9977U);
    msg.setDestinationEntity(53U);
    msg.control_src = 42928U;
    msg.control_ent = 218U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 180U;
    tmp_msg_0.speed = 0.6722554458709711;
    tmp_msg_0.z = 0.4525187938474693;
    tmp_msg_0.heading = 0.38842675474558563;
    msg.command.set(tmp_msg_0);
    msg.state = 38U;

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
    msg.setTimeStamp(0.10111293916537534);
    msg.setSource(24526U);
    msg.setSourceEntity(147U);
    msg.setDestination(47578U);
    msg.setDestinationEntity(236U);
    msg.control_src = 27061U;
    msg.control_ent = 34U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 187U;
    tmp_msg_0.speed = 0.34649284193590735;
    tmp_msg_0.z = 0.346735279103644;
    tmp_msg_0.heading = 0.48696508710435504;
    msg.command.set(tmp_msg_0);
    msg.state = 223U;

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
    msg.setTimeStamp(0.29584978161567965);
    msg.setSource(3182U);
    msg.setSourceEntity(181U);
    msg.setDestination(54066U);
    msg.setDestinationEntity(98U);
    msg.timeout = 54738U;
    msg.lat = 0.4556999941468117;
    msg.lon = 0.2765464627110452;
    msg.z = 0.7011618667299954;
    msg.z_units = 138U;
    msg.speed = 0.4395872516934155;
    msg.speed_units = 64U;
    msg.bearing = 0.09897761374173963;
    msg.width = 0.7545858418474876;
    msg.direction = 109U;
    msg.custom.assign("VCZWACGMLYGRNNEJCACPUAJGRZMTWRS");

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
    msg.setTimeStamp(0.9124142479888943);
    msg.setSource(23836U);
    msg.setSourceEntity(10U);
    msg.setDestination(21424U);
    msg.setDestinationEntity(219U);
    msg.timeout = 42297U;
    msg.lat = 0.22054662203662712;
    msg.lon = 0.9647510395406291;
    msg.z = 0.9675608620585944;
    msg.z_units = 242U;
    msg.speed = 0.560485830753119;
    msg.speed_units = 7U;
    msg.bearing = 0.4816775910827379;
    msg.width = 0.7479059483592572;
    msg.direction = 116U;
    msg.custom.assign("JFYXALPDVZWNOUZMNEWRPREFQOQDHDVNYWYESSBSYXNEKRCBQCUGTCOVJFGVVWUZQOFXEPZYGGXBBRMBJLNHNRBDFHLMOSHEJLGTFGYOWPOYILPTGVYGQWMDMKRAJUHJOQYSPMLDXDZDAOTUHRVFCUNDMIARKKISTJMIBVTNBQEWIRHSDQAEHGORUCACYFSKWFBST");

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
    msg.setTimeStamp(0.1935333294969347);
    msg.setSource(55831U);
    msg.setSourceEntity(15U);
    msg.setDestination(10414U);
    msg.setDestinationEntity(83U);
    msg.timeout = 19833U;
    msg.lat = 0.0330912307401412;
    msg.lon = 0.31798541965713445;
    msg.z = 0.3605651007355183;
    msg.z_units = 110U;
    msg.speed = 0.8759945143581843;
    msg.speed_units = 67U;
    msg.bearing = 0.04663827984713176;
    msg.width = 0.5051035224057474;
    msg.direction = 58U;
    msg.custom.assign("QHELFWCXVIDANRAYMTWVGYCPDXMBYEMZCBDQTUBUVHRHLJBYAXGADKJCHBWTXQBUGRIJAKUSJOBFWQXYFINTZLDTDPQVWMOGCKFUFODYZGENORBNBRHELGGVNILDNMRLODL");

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
    msg.setTimeStamp(0.5442419443273716);
    msg.setSource(8474U);
    msg.setSourceEntity(101U);
    msg.setDestination(49336U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 24U;
    msg.error_count = 46U;
    msg.error_ents.assign("NUXNNJSHQLCFLWIPASWVXGOXBJYJNGEBWOMZGDDAHMSUQPFWVMYRABAPPMDZOYXUBESFYOKZQEVAXKDYPRJTIYMGXKXSEQLKDZWIUMSFVKIGFJKPAWNLCLDOUYIUVKMSUMKVWQHSZANEWZJJ");
    msg.maneuver_type = 43303U;
    msg.maneuver_stime = 0.4606716602638403;
    msg.maneuver_eta = 15345U;
    msg.control_loops = 1065384114U;
    msg.flags = 87U;
    msg.last_error.assign("TALHVGXQPGJILLSPDXOUEVZZNKYPNGYCUIOFXLSRQDGJROSQMEWJINOFYNBVATJKSSBVYDQUBIFZUPBWTSAFDWTYMKXPAEPUDBHERWXLQMVXHRZEKYYTFIVJKMYCMFHHVECICLKZWOEHIABTVLJEGCPWDOXRLTZNPGODUAGGAHDQBJMMLRYQWQCMXCRKGBAJDVFMKBJTOTGCPIRZMENHFJBOIORKSIRZSAAPXVDWEUCZWYCS");
    msg.last_error_time = 0.0004210090560703428;

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
    msg.setTimeStamp(0.07653743379586275);
    msg.setSource(42816U);
    msg.setSourceEntity(243U);
    msg.setDestination(60031U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 202U;
    msg.error_count = 91U;
    msg.error_ents.assign("BRHZJEYXVXLZVTPVTWMBHXWBSRLYLUGHHOOYWSBEJIVBGGBLMJKKMTNDIPGJYVZCRQSYSUFIFVKLOQUPJSERAUEWHOUTLEAAKKMJTWAOBDBKI");
    msg.maneuver_type = 33947U;
    msg.maneuver_stime = 0.6698217073239134;
    msg.maneuver_eta = 199U;
    msg.control_loops = 280076351U;
    msg.flags = 253U;
    msg.last_error.assign("BSFJDZJUYDFPCXLUDTOBQXTBFZBLMPTOYHLWUCGHAXUVJQEIOIJFOHNLWVNMEOASEQQONVAFKWGDARTVNDSRUPMKALUMYYIATJFXUOPIVKVJSDGTMEQVXTSBSLLASFCZIIREQNHCOJLYBRZNZZWC");
    msg.last_error_time = 0.7519577139268508;

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
    msg.setTimeStamp(0.3618506381487111);
    msg.setSource(53313U);
    msg.setSourceEntity(151U);
    msg.setDestination(60307U);
    msg.setDestinationEntity(134U);
    msg.op_mode = 232U;
    msg.error_count = 111U;
    msg.error_ents.assign("DYKFJKAWVEXYUMKEXNHDMXUHRMTLBPJWNZSWZKTOCSDUFYASFZUJNODHNPCBRQIOAOAVVXPCCQZQMDECFCRNZTQYJWMCSUJLQMVRSJZVWBPHTQEIQYEBAWROJBBZAIGYRNLVPINABRQAGGIILTHQPUFRCKDZSWHFDVMSYQFRAMVDHMRIEU");
    msg.maneuver_type = 5602U;
    msg.maneuver_stime = 0.9027578940906411;
    msg.maneuver_eta = 47391U;
    msg.control_loops = 432565269U;
    msg.flags = 119U;
    msg.last_error.assign("EAPXECXQFJSWUZZNYRCSXNXAWBTZXIRCOIHMEIOOWSXGGESOVDMLZUMJPKTWZRBLQCOVABUKQDMGYFTIVDFYIIQMIPFPSZARXRUDGIADPLHINWLQAJSMVHUGEUTYMRSAAUXKLTTBBVBZRHZJJJTPNLBITSBCGKDPYOKYKR");
    msg.last_error_time = 0.005982926204681105;

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
    msg.setTimeStamp(0.9837594468435175);
    msg.setSource(22831U);
    msg.setSourceEntity(189U);
    msg.setDestination(47261U);
    msg.setDestinationEntity(30U);
    msg.type = 60U;
    msg.request_id = 19674U;
    msg.command = 119U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 55768U;
    tmp_msg_0.lat = 0.928633181796145;
    tmp_msg_0.lon = 0.6841322475750194;
    tmp_msg_0.z = 0.05624095044275301;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.speed = 0.28342592038920333;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.syringe0 = 39U;
    tmp_msg_0.syringe1 = 211U;
    tmp_msg_0.syringe2 = 145U;
    tmp_msg_0.custom.assign("UHQGFAIVBHDJLMRLBAJSXWMFJQROXCKCGNCOBKDNCIIWOXRBXZFDHHGXSCTNPGUYJIYLXPDCBDMZKONAIKBRAWIQVKHUZQCEFMLVHKPOUUSZVCVYTPQWOTVHJTKZAHZBWTYJMNRVESNYQMWSSORGDLIFEOBZETQNDFSDYVXAMENESEGEFB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46094U;
    msg.info.assign("ZKDSJDSNLMWTCBPZLIAPSHKCYZPJVVTUYAHZSEDDMAEDIXEIBKFJVQLKXRTWCOZVMTUDRGYBLQDWETLXJABFQXHRRPSGLKWYTOCNYIXOTQOCFKSUKZUILQWKEQEGTOVRLAVEABWJBMMJINJGELHPAWCAHSPHRMYXUQNUSPXCNNUBRLMYIGINHMAFDFUMBORWFORDOUVFWOYJGCGYTKHKYEBGCFBIXJF");

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
    msg.setTimeStamp(0.18673297655063892);
    msg.setSource(58120U);
    msg.setSourceEntity(245U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(245U);
    msg.type = 36U;
    msg.request_id = 27894U;
    msg.command = 123U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 42147U;
    tmp_msg_0.rpm = 0.3162655505312404;
    tmp_msg_0.direction = 89U;
    tmp_msg_0.custom.assign("XNNVSPTJFXHFOLUGZSGXYQFRURHMGBJBCOFREEYJGKSHBLVOIWCWUSMCYOBCPGDWEPXVVFDMCTFLUTZZCPAGJQTTBKUXJSWTSWDYNWJWTKZKAQDEBPAGPKYAAFBCJCVAJQXDMOMIMQOZRNVYLWNKHALIRERRFMFVRRNZXP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32765U;
    msg.info.assign("RQZVMQIIPWQTWJHATFNWJIOVJCIWSIOSAYVYPZCFEFRREOERETDEVWVRKMYXIGSANHQQUTYTWONGJGFHTYXNOKAZDSTQQBWCZHFNBDOMCBSPHWJVBLMCQZUEZGEPCHKBDAXXALSKVMYAKZSBTKUOMJXPISWGLQFTIZLXALNGPSGUMULXRALCZRNDYGHIDBKFBGVFLMDKPNJHUUJMPUAMPSECHLCNDPKXONOTREZXFQUKYWLBYRUXOHV");

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
    msg.setTimeStamp(0.5056467592519949);
    msg.setSource(3411U);
    msg.setSourceEntity(246U);
    msg.setDestination(17141U);
    msg.setDestinationEntity(61U);
    msg.type = 225U;
    msg.request_id = 19920U;
    msg.command = 158U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 33267U;
    tmp_msg_0.name.assign("OAZSKYJDKTSDEIPIPFBEPTSFYNPGGBZIZDWUCCZLDJHXAHKITOGTAGXYYVINXVQKUKXHVCXLDMTMEUHDNPWTIJMLALEMPKUCXGRZLRBLRPJWSDJLFIFQKHUCYFEQAZVOXKPCANORSFMEVRGQWHUMKGJGOFCTR");
    tmp_msg_0.custom.assign("YBOUKFZQMOVLHEZUKAZJMGWDVKBUXNCSKXIAPBEAIDPXXAMFSNHTUYGHVMQOLJTPDJBQWOZURYCVWNDJSLLVWQHYFSDCTFIJTBYDCLLSSCGGPWFBCRXKADLGQEWMLIZWXSOUBKFJPGVMCSRKMVDRAJSTZECTFLEGZYDNJNQHXZKOJFZIYWDBHHAKNOUENTWJFGIQAILNPIUNPARUGM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28267U;
    msg.info.assign("PSVBWGZIWSFBOAHRDAELVVRVEMNQAYEBMRHIRUBACBAYCILYGJGYLECIZCNPWHFZATCJDOXEMUYTSPUQUQLSJR");

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
    msg.setTimeStamp(0.7124950823673281);
    msg.setSource(7301U);
    msg.setSourceEntity(253U);
    msg.setDestination(39320U);
    msg.setDestinationEntity(231U);
    msg.command = 70U;
    msg.entities.assign("EULSWLECIHUVKYPZTRZPNBIBGXNHYCIRTYIRQKHQWMKMAJTOPMWURCGYQENHKALESBMDEZZBDXSPYYKATFUJLZRZAGROOWTDMUNFQLQGPSYJAB");

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
    msg.setTimeStamp(0.7390296488892921);
    msg.setSource(14758U);
    msg.setSourceEntity(188U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(90U);
    msg.command = 183U;
    msg.entities.assign("AZEZSQSFVUQPBNQLSOCBPDRVKFIYVAQKVGXPVKXLHZZVBUYTVJDXEFCQCOCFXCORMBXTGQACNGYSPXKRWSMNIYYPFXJJUYHHZBEFONTTPWZGKOALKJWWAP");

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
    msg.setTimeStamp(0.455041410883696);
    msg.setSource(8605U);
    msg.setSourceEntity(132U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(215U);
    msg.command = 247U;
    msg.entities.assign("BSDIVWADJMGTEVOJTANDWWUVASSEYVZNQMPULJQAOIXMHKYDUUQGUFMTVBIKZVFBCYJRDLFLEAWILJBAZAIRZPXAZHUYPQNQLRRDJNHRNNWCSIZOYWOGKBAEFNGBEFTQHEHTXOSJHIEKEQURHXBNASGBOSCTBTRIGGEDZVXZRRWSYSHHLBKTYCYPLXPLKVOGFJPKMLCVVGTODJPFFQNHUPUKPXDLGCWYOMMOIMFUEMFCKIPNSZ");

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
    msg.setTimeStamp(0.0986464929506744);
    msg.setSource(52535U);
    msg.setSourceEntity(13U);
    msg.setDestination(46558U);
    msg.setDestinationEntity(203U);
    msg.mcount = 2U;
    msg.mnames.assign("YBDHPXSZSOFHRSCTBGEWUFMGZSBQSFYYIFOLXEWBRMZHXBNDALDEWPIDGFCMIEKOAULZMOHDGZNLCIAFOWGJXMGTTODTYIHOVXZRKRNNRNDL");
    msg.ecount = 90U;
    msg.enames.assign("FUFBXZMZZRXOSTZVSKPWUKNDZNHKSGEFTJZUHIWZHEXLRABASYBFWNHQLRAJBUFRLRBXTVPDVUZXLJHDVKXKURBMVVKTDFJAJPSAKBEEATQGVHLHQCOYYFLQMUYMKGDMMLINQDGHPMBLPWHRWNBQKSERRCEQOOFFXAIFGISNMIXCIPCEEOOZCDYKJSIQPTIOEJYRLNNWZWIJDTUYCOGXPAY");
    msg.ccount = 169U;
    msg.cnames.assign("NTVHOCKRCFLBHKKKJZMFGPJDTNWOBVMEAJDRLYVGLAYXAKFNNPXRBPWPRSIZSRSBOTWIFBGVDIIUBUTLQTICIMVGEZXTZDQPZAHZZZNOXUKXZUEQIHEENAWJJUCDBHJXCKAERW");
    msg.last_error.assign("GAAASWBOGFXSRYCHGNGGIKTGHRBQXHXBKEZLCWUNDBPGDQOBGFNIMETBLTWNMEILONOORJZ");
    msg.last_error_time = 0.23434005733243068;

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
    msg.setTimeStamp(0.5567814042567693);
    msg.setSource(36522U);
    msg.setSourceEntity(87U);
    msg.setDestination(61708U);
    msg.setDestinationEntity(204U);
    msg.mcount = 159U;
    msg.mnames.assign("EPHZXXLTJCKQJMUZARWRLEIHIGNVFYVZKFWHIHAZNPDWOTKSUGITQEQXTYYJFILWHJGZTKAGOCTKDMENCINRSQNLGB");
    msg.ecount = 17U;
    msg.enames.assign("BPHBWHPESVOHVLCFMZIQNRLRVOWKTFJQIICGAZAAGSHWIARYAKKTTBXBORSQVFYRHJFVXBFBTUOVDXFZGEUWVJEPHDPJIGUOCKSRYZNSXNOBLECPAMASCBPTKIVJYXREQGQTUWFYJHTHMWWLMSNOBLIZCQEXPBHS");
    msg.ccount = 56U;
    msg.cnames.assign("TXQYUBTSPRBRWVRXFXTVVMSGIIBLCIAXKQXDBIMDDEKYNQZUIZQATZAAGPPNMWLHAJROPYMAWYOGLONWSUNWFUCLGSAJHFHZQUNJBHSEYKEKCMSJKZJVEVHMXHNAOEFPWCNXLULQCTFYECPAHZUNFOLUDOPLGBQVGPETFVOYJBYJLEZMPFPEAGXTJRCICDHJBYVYMLKRTQDKKNBRMZSXQIDWFIDCMODWNSHGIRRTKSHBOUJUDQXGWSIGFKR");
    msg.last_error.assign("RJQHCFQDNTUIELLZSMHVNERIUYP");
    msg.last_error_time = 0.04163569879031048;

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
    msg.setTimeStamp(0.42557055563888835);
    msg.setSource(48889U);
    msg.setSourceEntity(228U);
    msg.setDestination(49923U);
    msg.setDestinationEntity(51U);
    msg.mcount = 124U;
    msg.mnames.assign("CMZDRJFAQDTDIYHIEYXMXHPXFAIGUWFSLSUAAJQBWUWSJSIJEHVLOZTGLVYETLIIAYOALCSIMRPNYWQMPPXENHVGKBWHZHGYOVPUCRLXREDDZVGBONGNEFKDSJFWFZJFOMCXKWBRICKSMNKLWCDNFBVUIBMSRJTTFYATTZGHZULSKONTARMLLPJOVQRBXYZIVJQBPYGBUNNDZDDG");
    msg.ecount = 138U;
    msg.enames.assign("UBOMFNHXGLCSZLNDBHIGYEFMZGTNOIRLKTMXKYEDVJDUJPBOWYFQXRKTIIGWUPAIMOJYJFLRSDNSQIGUJOVOMFZXKZUQQLMUGWGLAJRQCPSWCYUOKXYJHXZDSIFYALSDCVBWXMJFZCEBDAAPEGXRWARJHETBVTIZZSOUYOVWLAHNDAKMTHKTNRCFQHPELTVQIT");
    msg.ccount = 26U;
    msg.cnames.assign("CLNFUNEBBYJUUSBGUOCXZFVURCIOPHQYNKKLMHOFEIBSGOOPNKESSJTDIRHUBFXZPKHEGLCDNCLLKMBYZTSBSQVLAHPMOZYJQAICIKMJTHESILXZTQQTXWWYACPRUGZKLEWWUJMYVTFRERJGUZBHAFJFUCTHKVABNPAWXQWMADFDXMRPP");
    msg.last_error.assign("UPPYNKGJVBPFIVNVEXYXSQBMCPGBNSKKRPHJYOMCWDXMJZDTQXFGODZDJDNQMEWUNSCZCID");
    msg.last_error_time = 0.7914395035389227;

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
    msg.setTimeStamp(0.28533168920766927);
    msg.setSource(24683U);
    msg.setSourceEntity(14U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(225U);
    msg.mask = 209U;
    msg.max_depth = 0.8616968765110842;
    msg.min_altitude = 0.6621408830210919;
    msg.max_altitude = 0.4290910369408003;
    msg.min_speed = 0.5096257058118436;
    msg.max_speed = 0.03389854672697956;
    msg.max_vrate = 0.4206189525925724;
    msg.lat = 0.15525686363097568;
    msg.lon = 0.19192930534308095;
    msg.orientation = 0.5109383746982227;
    msg.width = 0.3428520410504734;
    msg.length = 0.25152883532722214;

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
    msg.setTimeStamp(0.4834330642398076);
    msg.setSource(43740U);
    msg.setSourceEntity(20U);
    msg.setDestination(12220U);
    msg.setDestinationEntity(156U);
    msg.mask = 254U;
    msg.max_depth = 0.8764092673082073;
    msg.min_altitude = 0.3624121720603768;
    msg.max_altitude = 0.1196194477547563;
    msg.min_speed = 0.7721223761696783;
    msg.max_speed = 0.15509534351170695;
    msg.max_vrate = 0.6650657773341064;
    msg.lat = 0.3344571840846102;
    msg.lon = 0.5196607467642543;
    msg.orientation = 0.40797218803320645;
    msg.width = 0.5624127703020975;
    msg.length = 0.280063799752966;

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
    msg.setTimeStamp(0.5470835446772054);
    msg.setSource(6955U);
    msg.setSourceEntity(137U);
    msg.setDestination(58278U);
    msg.setDestinationEntity(9U);
    msg.mask = 104U;
    msg.max_depth = 0.08621112473427661;
    msg.min_altitude = 0.49052322596424625;
    msg.max_altitude = 0.06369857655740818;
    msg.min_speed = 0.17471160371878214;
    msg.max_speed = 0.6149495261314938;
    msg.max_vrate = 0.25378825709534425;
    msg.lat = 0.6622491488513397;
    msg.lon = 0.6763881046673499;
    msg.orientation = 0.9660613761860155;
    msg.width = 0.5609779651761047;
    msg.length = 0.11028050402585232;

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
    msg.setTimeStamp(0.34110370387900735);
    msg.setSource(15610U);
    msg.setSourceEntity(67U);
    msg.setDestination(9536U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.3197673162380803);
    msg.setSource(34824U);
    msg.setSourceEntity(145U);
    msg.setDestination(29846U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.7378633516201203);
    msg.setSource(50452U);
    msg.setSourceEntity(25U);
    msg.setDestination(7342U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.6748347989039238);
    msg.setSource(39649U);
    msg.setSourceEntity(190U);
    msg.setDestination(28220U);
    msg.setDestinationEntity(209U);
    msg.duration = 28682U;

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
    msg.setTimeStamp(0.45567353394311283);
    msg.setSource(3735U);
    msg.setSourceEntity(120U);
    msg.setDestination(52556U);
    msg.setDestinationEntity(207U);
    msg.duration = 4606U;

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
    msg.setTimeStamp(0.7332712108466083);
    msg.setSource(23399U);
    msg.setSourceEntity(157U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(192U);
    msg.duration = 24185U;

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
    msg.setTimeStamp(0.1693398287955329);
    msg.setSource(39998U);
    msg.setSourceEntity(54U);
    msg.setDestination(12100U);
    msg.setDestinationEntity(179U);
    msg.enable = 146U;
    msg.mask = 1862761452U;
    msg.scope_ref = 2802446623U;

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
    msg.setTimeStamp(0.6125469294810884);
    msg.setSource(55409U);
    msg.setSourceEntity(205U);
    msg.setDestination(44173U);
    msg.setDestinationEntity(17U);
    msg.enable = 234U;
    msg.mask = 4130224369U;
    msg.scope_ref = 3652403084U;

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
    msg.setTimeStamp(0.716265434190748);
    msg.setSource(23218U);
    msg.setSourceEntity(93U);
    msg.setDestination(47809U);
    msg.setDestinationEntity(75U);
    msg.enable = 155U;
    msg.mask = 3195320456U;
    msg.scope_ref = 2515047208U;

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
    msg.setTimeStamp(0.09433211837645383);
    msg.setSource(12398U);
    msg.setSourceEntity(172U);
    msg.setDestination(54799U);
    msg.setDestinationEntity(1U);
    msg.medium = 68U;

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
    msg.setTimeStamp(0.5102730789364684);
    msg.setSource(49293U);
    msg.setSourceEntity(143U);
    msg.setDestination(259U);
    msg.setDestinationEntity(192U);
    msg.medium = 121U;

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
    msg.setTimeStamp(0.43347087398145234);
    msg.setSource(44781U);
    msg.setSourceEntity(234U);
    msg.setDestination(25134U);
    msg.setDestinationEntity(236U);
    msg.medium = 228U;

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
    msg.setTimeStamp(0.802129395881178);
    msg.setSource(51100U);
    msg.setSourceEntity(170U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8109410216671123;
    msg.type = 16U;

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
    msg.setTimeStamp(0.9370388695247819);
    msg.setSource(31890U);
    msg.setSourceEntity(133U);
    msg.setDestination(25356U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8560350604887115;
    msg.type = 53U;

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
    msg.setTimeStamp(0.9313478842031859);
    msg.setSource(53172U);
    msg.setSourceEntity(93U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(241U);
    msg.value = 0.19678071002113973;
    msg.type = 77U;

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
    msg.setTimeStamp(0.9043709389689075);
    msg.setSource(6306U);
    msg.setSourceEntity(98U);
    msg.setDestination(45979U);
    msg.setDestinationEntity(53U);
    msg.possimerr = 0.5615417609348572;
    msg.converg = 0.2106028361423562;
    msg.turbulence = 0.4009515471497118;
    msg.possimmon = 69U;
    msg.commmon = 68U;
    msg.convergmon = 105U;

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
    msg.setTimeStamp(0.32454291623935005);
    msg.setSource(48508U);
    msg.setSourceEntity(160U);
    msg.setDestination(54536U);
    msg.setDestinationEntity(94U);
    msg.possimerr = 0.7551114714083202;
    msg.converg = 0.5094725076495359;
    msg.turbulence = 0.04846418733182223;
    msg.possimmon = 242U;
    msg.commmon = 215U;
    msg.convergmon = 86U;

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
    msg.setTimeStamp(0.6486829516262066);
    msg.setSource(36702U);
    msg.setSourceEntity(227U);
    msg.setDestination(40444U);
    msg.setDestinationEntity(34U);
    msg.possimerr = 0.8518439902956794;
    msg.converg = 0.25369292558270196;
    msg.turbulence = 0.920597724324742;
    msg.possimmon = 239U;
    msg.commmon = 254U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.2657858492951407);
    msg.setSource(17415U);
    msg.setSourceEntity(24U);
    msg.setDestination(2463U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 112U;
    msg.mode.assign("BREUCXUOHVVAIKDIKPORZMIKRDITKEJXXUIUUUCEYMOTCRHCBQBXVALHJWNNBANEWLPCJALLPRTHSRZDWBHOCFTPGNJMGDTWGJRXVPGEZOQYLRJVTGXMXYTJSMSFZPDOYYDWULNXWGEJBSUMIUFDMWHPWZKQKGQSCLYOYGKMOFJAFYLENKGGKHVHNSASHIXXZACZEPNPKZDPMJENCOVRBFZQHRABVN");

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
    msg.setTimeStamp(0.14458460783802818);
    msg.setSource(15987U);
    msg.setSourceEntity(7U);
    msg.setDestination(32203U);
    msg.setDestinationEntity(251U);
    msg.autonomy = 50U;
    msg.mode.assign("JNIMUSDGYQQRQTUVUVKBSKUADWZDWFOO");

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
    msg.setTimeStamp(0.9587797963989254);
    msg.setSource(7927U);
    msg.setSourceEntity(190U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(111U);
    msg.autonomy = 203U;
    msg.mode.assign("HFJWMEZKNRXEJGVHOXQFMWJLDCMMFXXXROBPSEEGRMLGPPKERJSIAGSXPPWTQGJTLJITBOQLUFCQMSTRSLAAQVUESLGEDSYLQJOROPTNNGUNYOGTZRYNBKWWBFIYTFZIUAAMFUFADDOVJYKUOKPVUDEZUXUCDBKFCWTWXHWMXIYYUBCMKNLDHJNHCVVKHIQANB");

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
    msg.setTimeStamp(0.7515518254032156);
    msg.setSource(34598U);
    msg.setSourceEntity(18U);
    msg.setDestination(64710U);
    msg.setDestinationEntity(75U);
    msg.type = 111U;
    msg.op = 231U;
    msg.possimerr = 0.8216052042943047;
    msg.converg = 0.12876471430201242;
    msg.turbulence = 0.3056717271134155;
    msg.possimmon = 227U;
    msg.commmon = 14U;
    msg.convergmon = 104U;

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
    msg.setTimeStamp(0.10189670768348436);
    msg.setSource(53601U);
    msg.setSourceEntity(80U);
    msg.setDestination(7398U);
    msg.setDestinationEntity(225U);
    msg.type = 32U;
    msg.op = 147U;
    msg.possimerr = 0.26266301570179773;
    msg.converg = 0.164081841694526;
    msg.turbulence = 0.7632529683070982;
    msg.possimmon = 242U;
    msg.commmon = 173U;
    msg.convergmon = 249U;

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
    msg.setTimeStamp(0.09712581402233567);
    msg.setSource(43044U);
    msg.setSourceEntity(172U);
    msg.setDestination(63498U);
    msg.setDestinationEntity(76U);
    msg.type = 81U;
    msg.op = 130U;
    msg.possimerr = 0.25140418005692833;
    msg.converg = 0.9337379808346832;
    msg.turbulence = 0.18575922643836018;
    msg.possimmon = 170U;
    msg.commmon = 244U;
    msg.convergmon = 208U;

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
    msg.setTimeStamp(0.8851941603932308);
    msg.setSource(29681U);
    msg.setSourceEntity(145U);
    msg.setDestination(30030U);
    msg.setDestinationEntity(216U);
    msg.op = 114U;
    msg.comm_interface = 1U;
    msg.period = 9351U;
    msg.sys_dst.assign("BOXCTHVRLXRATURIDUKHPFILUBVIOLQJJJHWEQEWAZBDVMGFKWCWITGTMTQSEBSYPONUKNEDQMISYTLJZLMQDBZCKXUJDVBZECOIJMYZENHAXYHTPGVVOJEYNACKIHJVRYHJUBNKFFDSNWQRHFDFY");

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
    msg.setTimeStamp(0.6037460637442448);
    msg.setSource(47766U);
    msg.setSourceEntity(94U);
    msg.setDestination(36472U);
    msg.setDestinationEntity(33U);
    msg.op = 104U;
    msg.comm_interface = 217U;
    msg.period = 55056U;
    msg.sys_dst.assign("UYZYCTFTGOIEXMZOJM");

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
    msg.setTimeStamp(0.26430123997182897);
    msg.setSource(14707U);
    msg.setSourceEntity(57U);
    msg.setDestination(3467U);
    msg.setDestinationEntity(53U);
    msg.op = 105U;
    msg.comm_interface = 23U;
    msg.period = 44835U;
    msg.sys_dst.assign("RCZJVQOXEZCVONETXDGRNHBGDQYEUQYFHTFLMSDIZDKBLOXFPYDYB");

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
    msg.setTimeStamp(0.5280952747353287);
    msg.setSource(36600U);
    msg.setSourceEntity(13U);
    msg.setDestination(26161U);
    msg.setDestinationEntity(194U);
    msg.stime = 337458459U;
    msg.latitude = 0.29583752688314413;
    msg.longitude = 0.8095254458970225;
    msg.altitude = 59644U;
    msg.depth = 12444U;
    msg.heading = 3685U;
    msg.speed = -27466;
    msg.fuel = 14;
    msg.exec_state = -128;
    msg.plan_checksum = 63446U;

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
    msg.setTimeStamp(0.945786973536492);
    msg.setSource(31137U);
    msg.setSourceEntity(71U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(152U);
    msg.stime = 2163563633U;
    msg.latitude = 0.19781963355249055;
    msg.longitude = 0.41559842833897453;
    msg.altitude = 55327U;
    msg.depth = 29933U;
    msg.heading = 30185U;
    msg.speed = -6821;
    msg.fuel = 27;
    msg.exec_state = -2;
    msg.plan_checksum = 33994U;

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
    msg.setTimeStamp(0.5591954464389065);
    msg.setSource(24594U);
    msg.setSourceEntity(86U);
    msg.setDestination(28059U);
    msg.setDestinationEntity(30U);
    msg.stime = 2966669786U;
    msg.latitude = 0.600907719756969;
    msg.longitude = 0.3222886104744055;
    msg.altitude = 22655U;
    msg.depth = 8072U;
    msg.heading = 3546U;
    msg.speed = -24724;
    msg.fuel = 109;
    msg.exec_state = 48;
    msg.plan_checksum = 29046U;

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
    msg.setTimeStamp(0.5397405604982964);
    msg.setSource(4616U);
    msg.setSourceEntity(200U);
    msg.setDestination(51732U);
    msg.setDestinationEntity(173U);
    msg.req_id = 49754U;
    msg.comm_mean = 139U;
    msg.destination.assign("SASKNFDVMTIOSSLCPDNJBTMJAFMDPQZWDONDKTHXGRYBLTKYCBHPXKUFKWQJXLUNCFIHGRZZYYCJRPUQUXDHCYNUJOGSVMVATZIHSQLWYEABQLCQGQDQHATESGLHDTXBAMQBRSUXKYCKUXOQKBEPRYOEAZEMCJPF");
    msg.deadline = 0.8034181736519173;
    msg.range = 0.9456010940993588;
    msg.data_mode = 13U;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.20623664619796178;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZXSAJWREXGBOYFYHIMAVVJXDUKIADWKRTKGABGFHTCIWAINSZXKEHTDYEPMDROUSZOTTBSBGLZDNEJCQSGIFXIKULJBXTVEFRHYMBOXRUDLYGTRBRNJLHVAYUJQCWQIQLYMPWCQZG");
    const char tmp_msg_1[] = {69, -56, 78, 78, -59, 21, -16, 62, -31, 49, 115, 19, 63};
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
    msg.setTimeStamp(0.01582757216112174);
    msg.setSource(45789U);
    msg.setSourceEntity(82U);
    msg.setDestination(17647U);
    msg.setDestinationEntity(195U);
    msg.req_id = 21929U;
    msg.comm_mean = 233U;
    msg.destination.assign("DKYHQDHNKGMKLUTYJBNQTOVYIRZKMVZPFRGECYYDWLHLDOOUEKZSHNSFFFALEXIWGXEOLXALSHDJGQXGPSWGPAFYRNTTKLCPQAMQRPUFUGJIRT");
    msg.deadline = 0.4353776602110633;
    msg.range = 0.7359372217900713;
    msg.data_mode = 123U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 77U;
    tmp_msg_0.speed = 0.2569449980908015;
    tmp_msg_0.z = 0.26307755733332006;
    tmp_msg_0.heading = 0.9384092945022552;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CICEGDMHUFIKCVDWRXPMWFQQZXEUQJYGOCZWRGLVSSLEXPNIAWBHBZJHJXXFYNMPKVIKQNKTOFAY");
    const char tmp_msg_1[] = {92, -11, 6, -44, -121, -52, 52, -116, -12, -104, 75, 114, -38, -69, 1, 92, -119, 12, 119, -30, -60, 95, 109, 4, -4, -115, 17, 47, -44, 54, 49, 118, -6, -97, -122, -111, -72, 56, 26, -14, 73, 8, -7, -76, 45, -24, 29, -73, 88, 51, 49, -126, -111, -88, 30, 40, -105, -7, -19, 124, 123, 33, 28, -77, -10, -58, -20, -73, 118, 103, 110, 90, 84, -34, 45, -76, 72, 118, 96, 111, 52, -66, 67, -34, -73, 33, 103, 65, -92, -83, -92, 67, -13, 54, -120, -96, -115, 113, -13, -34, -81, -5, -9, -91, 73, 71, -15, -98, 17, -88, -92, 65, -125, -22, 116, 20, -99, -110, -115, -70, 91, -64, -113, -53, -90, 114, -8, -47, 107, -73, -29, 64, -33, -95, 18, 71, 97, 18, 2, 108, 100, -111, -39, -125, -60, 74, -14, 106, 13, 39, 6, 89, -52, -24, 124, -18, 94, -54, 10, 2, -61, 73, -65, 19, 85};
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
    msg.setTimeStamp(0.6102470018511053);
    msg.setSource(47329U);
    msg.setSourceEntity(117U);
    msg.setDestination(37001U);
    msg.setDestinationEntity(220U);
    msg.req_id = 29310U;
    msg.comm_mean = 46U;
    msg.destination.assign("MXGTFPIAODMXLATGOYFOKONYWAIMRLQPBQUVUHJORIOBTYMHQXGBUWATNYEGZVWIMOAIISWPMUSPFGTERFJLOVDPSQFTGJSXNXVRTVTXKBNVZDJAYZECSETBFFAKUKNUQSJRQICMDVQZRWDFAHLDOBC");
    msg.deadline = 0.5981111551948693;
    msg.range = 0.7458937796088558;
    msg.data_mode = 195U;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.4459990260702771;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YCAOITRGCUVINSHOYMEGV");
    const char tmp_msg_1[] = {-68, -20, 123, -51, -60, 64, -101, 64, 112, -71, 113, 126, 77, -33, 40, -41, -81, -83, 46, -50, 31, 43, -13, 63, -112, -37, -73, 113, -64, -127, 15, -92, -93, 49, 26, -12, 118, -8, -10, 16, 93, 61, 101, -13, -64, -110, -43, -12, -56, 83, 75, -91, 14, -77, -105, -128, -16, -101, -43, -104, -101, 120, 8, 54, 62, -54, -39, 99, -122, -50, -16, -69, -82, -83, -42, -3, -89, -92, -45, -59, 107, 126, -120, -28, 45, -27, -51, -119, -125, 116, 0, -73, 100, 34, -31, -83, 43, 18, -3, -52, -93, -25, -13, -16, 43};
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
    msg.setTimeStamp(0.925927752208929);
    msg.setSource(24881U);
    msg.setSourceEntity(10U);
    msg.setDestination(3284U);
    msg.setDestinationEntity(31U);
    msg.req_id = 59585U;
    msg.status = 55U;
    msg.range = 0.2895915240585357;
    msg.info.assign("SUATIZFVJXTFHLNFMNXQSZYRZERINXLIQSZGPRMFUYLQHPYZHRWSUDDCGNGLEJAXOFABATEORYKOZMINKYADCGPFHKREFEFBXBT");

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
    msg.setTimeStamp(0.8795453908988043);
    msg.setSource(36847U);
    msg.setSourceEntity(48U);
    msg.setDestination(36365U);
    msg.setDestinationEntity(6U);
    msg.req_id = 24840U;
    msg.status = 1U;
    msg.range = 0.23497617198156762;
    msg.info.assign("LFHFDSGRFCBLOYHRDBWRKUJJAUBZORUVDIWNIUHQZVXSFREKVZFJPSWQTSIBPKTCTMEKAAGDMHTQFIQIETJNOFPYPLQHSGWENZDVNSAXJQHUQMQXBVLZASKRKGBHFXCKBOUORMVOUHXEMDF");

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
    msg.setTimeStamp(0.5732284651450475);
    msg.setSource(44763U);
    msg.setSourceEntity(117U);
    msg.setDestination(4571U);
    msg.setDestinationEntity(36U);
    msg.req_id = 38310U;
    msg.status = 207U;
    msg.range = 0.6800461041646967;
    msg.info.assign("ZSXHZVEOUWRGFVTQDKOJUTLNIWQHCALDXX");

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
    msg.setTimeStamp(0.30333402194125014);
    msg.setSource(25768U);
    msg.setSourceEntity(130U);
    msg.setDestination(54492U);
    msg.setDestinationEntity(19U);
    msg.req_id = 52372U;
    msg.destination.assign("WHMSYSHINEHCJGWEGFTIBECORISZKRZUIUMGTJXSZGCMAYGFNJJKDCQOVKHZJULSNMEQQFRWCQQIVAPBFHRXFPCFUHZODBKWGWNDHWOKKCMVBUBYSXODLZFOPHWSYNFBDBANLEISWDLYUCADXUBYXCLTQLWTGYRAIMSJTTWAMKMXLQANOZXNYETVELZPGIHPNZRVEOXRNJTP");
    msg.timeout = 0.4885735268449036;
    msg.sms_text.assign("ZTCLICQRMABVQXNXTVNRYOIHRWSQAHWWIHKYPLCOMWVFBJWSMDZGKVJCQXEKNDROLWLYPOZDLIZKTXZRZAOIAEDHBUEFIDZPEKRBVUJQNEHHVCKDJQVMYMDUTTIL");

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
    msg.setTimeStamp(0.9169555016552796);
    msg.setSource(30838U);
    msg.setSourceEntity(71U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(19U);
    msg.req_id = 47329U;
    msg.destination.assign("XQSYWYNBGBFVXDHOYDZGRSGJBGZCZITSDEHJHOHTENBREHLPTJYEMFPWPLOMTLQXFNSWUOLMUEAARSDNAZPCBCRDGTSOVIGFUJJPHANBRVBWESIORIMLZIDKNUNGTJXDAIJRKHQPYOTAMOWFDOAPJLGVOMRMGFWIWUBUHUTPQLXICCKZKKZXUVLXESPCVBXRVWSPLKYXSIFYFQKK");
    msg.timeout = 0.004320885303262245;
    msg.sms_text.assign("SGLUPAMDCMQSDEWKBZULWPHCZKAMOAZLZFDNCRNSJYSGQYQVCMYOYTEWBHDLUJSGJIHBNLCXRXIRSOY");

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
    msg.setTimeStamp(0.047977514805010224);
    msg.setSource(62469U);
    msg.setSourceEntity(114U);
    msg.setDestination(49742U);
    msg.setDestinationEntity(103U);
    msg.req_id = 36308U;
    msg.destination.assign("OWZAXYWSAPFJKXRRFBOGZQGNCWDGDEOHCLOJFZUTHOHQMEKGTAOMZHAKELSUZJWCFPSDEUWRTAFBFKJCMQICGGDGZIBSKXRWUWFPGPQTIPSYYDMTVCQYPERH");
    msg.timeout = 0.11954381781739631;
    msg.sms_text.assign("WLFDZZDBOEFHBVYQJLIJALOHGCYWFTDHUPDDLWAYIWQRVKPKCKYMBVBXDNPPXYTFWRZOINCOWJJVNTIWHKNZHCLGQMMXOGGNZJIQVZTERPUUHZTNIPQPRSGORMXDAJAGQYUMPJNKTMBWOVPQJLBDSKXKVLUFQMQWIESTRELBSFHSRESFCEASWJAADHPVRGGCFVNOCSYFUYSMEUKTXRI");

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
    msg.setTimeStamp(0.7590989991973319);
    msg.setSource(28929U);
    msg.setSourceEntity(127U);
    msg.setDestination(28708U);
    msg.setDestinationEntity(161U);
    msg.req_id = 48278U;
    msg.status = 172U;
    msg.info.assign("BYMBCIWIDBJAQUNHZTGHCETVMDLTPEEDCENKQDJFCQOKAZTCRHLVEPOFJOSZCYWPUAABVBBFSSISBKUWTLTGREHIONMUYYZNTVZVMRYVCHPLARLHXLUNXWFJYAJMJTAVSXCAELNHTWDDKVNWFUIJAOKKMEJUFRRXYIXOUWUZPPSDXJQFTMPFVIHIGGWBCUXHAMSNNXGLHCVGBQRRKIGOSGXZDKOFZNYKQQJSDEOS");

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
    msg.setTimeStamp(0.7205620848263035);
    msg.setSource(60035U);
    msg.setSourceEntity(56U);
    msg.setDestination(15674U);
    msg.setDestinationEntity(90U);
    msg.req_id = 176U;
    msg.status = 218U;
    msg.info.assign("MKLJQFSHZHPWWLLGCINGGUPGBXWGKPEBKEKBOYKKFJEEATKQKBXHC");

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
    msg.setTimeStamp(0.9724035157501065);
    msg.setSource(12288U);
    msg.setSourceEntity(214U);
    msg.setDestination(13017U);
    msg.setDestinationEntity(155U);
    msg.req_id = 29266U;
    msg.status = 114U;
    msg.info.assign("ZWUYRTPBXRYVBQMARSFYXOPJUMWCUVUIMTCFNCQGFCHJDVKHHOZFNSWGBYUWLUZQWITMZ");

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
    msg.setTimeStamp(0.5558021623278323);
    msg.setSource(49067U);
    msg.setSourceEntity(248U);
    msg.setDestination(20328U);
    msg.setDestinationEntity(64U);
    msg.state = 27U;

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
    msg.setTimeStamp(0.4853159968760875);
    msg.setSource(58157U);
    msg.setSourceEntity(135U);
    msg.setDestination(26881U);
    msg.setDestinationEntity(67U);
    msg.state = 186U;

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
    msg.setTimeStamp(0.3529525725230358);
    msg.setSource(58318U);
    msg.setSourceEntity(76U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(51U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.3942072270163445);
    msg.setSource(58593U);
    msg.setSourceEntity(211U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(139U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.5633885184410555);
    msg.setSource(17243U);
    msg.setSourceEntity(176U);
    msg.setDestination(12945U);
    msg.setDestinationEntity(130U);
    msg.state = 20U;

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
    msg.setTimeStamp(0.6750998097669286);
    msg.setSource(1473U);
    msg.setSourceEntity(138U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(191U);
    msg.state = 130U;

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
    msg.setTimeStamp(0.7666233129827105);
    msg.setSource(56207U);
    msg.setSourceEntity(173U);
    msg.setDestination(25099U);
    msg.setDestinationEntity(142U);
    msg.req_id = 14897U;
    msg.destination.assign("NPUKZBDAAUODRHOOCCISRRJHPYDXVSQFWQZJJZDYVSVKNBIFQQLOPMGRYOCSXGQQNV");
    msg.timeout = 0.19956176892628008;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.32587016873779984;
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
    msg.setTimeStamp(0.06328848771071427);
    msg.setSource(8677U);
    msg.setSourceEntity(185U);
    msg.setDestination(49360U);
    msg.setDestinationEntity(52U);
    msg.req_id = 47341U;
    msg.destination.assign("EXPHIKRLVGXJJJEMHSR");
    msg.timeout = 0.30011622646993674;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.07052732465200262;
    tmp_msg_0.lon = 0.4077191757332558;
    tmp_msg_0.speed = 0.971758298913333;
    tmp_msg_0.speed_units = 3U;
    tmp_msg_0.limits = 41U;
    tmp_msg_0.max_depth = 0.761113927038824;
    tmp_msg_0.min_alt = 0.7907631077437359;
    tmp_msg_0.time_limit = 0.003444153497642155;
    tmp_msg_0.controller.assign("KNFVVRCQAPUHSUSMCMRPYGZJTQOIIZPSKJCOHZZTNOIQZREEAPUSKKDIYOSLIXWYYRIISNJGFAKCHZNVDTSYATOGQMIHUCWZZQWOKCPSDFJOPEQBDFDYLEVACUGBBGMBVLAHHPKUDUDWYLBXFMETPUNYXPQQXARAGZVMPEGNTDHRTKMCTCNNJGLAWGJXJJJHLXGFXWHBEMKIWBX");
    tmp_msg_0.custom.assign("KTFHDVAVGXEOKOOTYMABVGQDKUYKBCUZFDEJHGWHXOISVLUYPZABQYFJPEIRNIDQPCVQZGSWNJMRERQFEDNYIZNUFABKTMJUYGWJVTUXWYCGBRMAJLMQLZHOXDTFNIHYFKZDFCJLBRWNHVZCANZXOEPGRYSCRJVOTHSWMUTIFRXBJCXAILHYLQWXSLJSZTEPRVQHMPUAMEQCASGPZEUWDSRMNKXMDBLCIHOETOWKFPDISBONG");
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
    msg.setTimeStamp(0.11196179207756207);
    msg.setSource(45838U);
    msg.setSourceEntity(235U);
    msg.setDestination(17521U);
    msg.setDestinationEntity(36U);
    msg.req_id = 28376U;
    msg.destination.assign("HCXIKMCJQMQVIUNKMFUFQONACRAPOKYHVXFNEWFHZBAVULWJUZNPBOBYIMLHNTLXPNZVSOQSGQRELPMJKGYJRQZMOWBOIHAFIBMLTEHWGXZJGJPGECEWRSSXRPNTFPVCOZQKKJGVFDFKADDNDBRO");
    msg.timeout = 0.7860577202779822;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 55230U;
    tmp_msg_0.lat = 0.4572941847509877;
    tmp_msg_0.lon = 0.8084266009914332;
    tmp_msg_0.z = 0.24582788107712594;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.speed = 0.8252815293038362;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.custom.assign("EUIPOZHOWHRDQASIRJRAVHEPTGORPDWLTYYSSI");
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
    msg.setTimeStamp(0.3024626873339733);
    msg.setSource(29759U);
    msg.setSourceEntity(112U);
    msg.setDestination(18447U);
    msg.setDestinationEntity(26U);
    msg.req_id = 31737U;
    msg.status = 213U;
    msg.info.assign("AKQUSTSCKQDFOGCILILCYUFGOJPNBFJUYZADMUKFJLFPPYHKHPQDRSWTBSPBYPRXVMLHNCLLKQTVEELBHRYEIXXAKXGLATFBRJKOHOWVMKUDFQUIHNQVKRWMHXAPEIZJGPDKOZNVVZPXHZJEJSOBLRVRSIMGTN");

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
    msg.setTimeStamp(0.49346668014840744);
    msg.setSource(5997U);
    msg.setSourceEntity(145U);
    msg.setDestination(5281U);
    msg.setDestinationEntity(1U);
    msg.req_id = 40744U;
    msg.status = 70U;
    msg.info.assign("BTWDTEGWSJSSYPRKRLGMQYDXMNPYVPYMXPEZCENVNASDPFECVZSUJIDKAZIWSJZDCBYYLULGWVTRCFVIIZMJXBBDYONBHMMQEGAIMVRLAZFRHEFCJASWKUXSWYHUOVJOWGONTPHYAGOPJGERFHH");

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
    msg.setTimeStamp(0.1665176035101692);
    msg.setSource(11153U);
    msg.setSourceEntity(132U);
    msg.setDestination(63169U);
    msg.setDestinationEntity(37U);
    msg.req_id = 10981U;
    msg.status = 212U;
    msg.info.assign("PSOPYTPZYOMJDEYIGWKULQHBJLEMIGWBGFDRNOTMPJISPLYRSZDJEUTCHDAHWMNTAODZDZMGUGYUGWQOPBHOSVLZYDBPKMIZFFCCNWBTTAFJQAVAQICHLREJYXZUQRFSRGXSNUHIMFKVBSAE");

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
    msg.setTimeStamp(0.6405188913600178);
    msg.setSource(14833U);
    msg.setSourceEntity(165U);
    msg.setDestination(5821U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ZOJXJOAGBGQPVZBHYFATUNXAPZICSKCTDIZMMDBBVPDTHUFWEORITBVYYDSIGMYYXFLJNTLQRCRSGLUAJFEYEFSUIZEWLCVLRQQQOSJHZFYAWUIQKNGUZZXUMBMTUXDONH");
    msg.report_time = 0.04058051905874205;
    msg.medium = 198U;
    msg.lat = 0.699758619699988;
    msg.lon = 0.781548325247936;
    msg.depth = 0.8118349401873027;
    msg.alt = 0.2847698583983441;
    msg.sog = 0.5459631962943663;
    msg.cog = 0.9153503716673507;

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
    msg.setTimeStamp(0.3299083893791761);
    msg.setSource(31561U);
    msg.setSourceEntity(103U);
    msg.setDestination(44026U);
    msg.setDestinationEntity(247U);
    msg.name.assign("DCLKZOFRUWMXGPSDTYGOXIIQWYKPNKEEFFVUKYCBQMKZTTBSVPTVEZZGQPZLENAGHYMLCKUJBFAHILLARAONTHLEGVVQZPNWHDIIHVNCKUEGYCNCXJKCILHSUMIZSYJVWIYTIYBMCZAWOCLMWAWSADPFKJHXFWRKLOJERJDISNSFJALURWFTRVT");
    msg.report_time = 0.14869785703240423;
    msg.medium = 173U;
    msg.lat = 0.9973998063111107;
    msg.lon = 0.3804263231007863;
    msg.depth = 0.25662105654335476;
    msg.alt = 0.046063794302569794;
    msg.sog = 0.733958512784574;
    msg.cog = 0.694957445489629;

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
    msg.setTimeStamp(0.009066483725692409);
    msg.setSource(58211U);
    msg.setSourceEntity(89U);
    msg.setDestination(57475U);
    msg.setDestinationEntity(138U);
    msg.name.assign("JNVFEXRPZTUFRIHGSHUPBSGBFKHNEPAULZZBCXQAUCTDEATUVDVSCNEMCCQ");
    msg.report_time = 0.9044881459568194;
    msg.medium = 238U;
    msg.lat = 0.30715220808697064;
    msg.lon = 0.36736321128187455;
    msg.depth = 0.6834561365831199;
    msg.alt = 0.611726145338221;
    msg.sog = 0.5240507692289375;
    msg.cog = 0.8178825151051757;

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
    msg.setTimeStamp(0.7672537284467169);
    msg.setSource(5610U);
    msg.setSourceEntity(149U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.49747787758684325);
    msg.setSource(9257U);
    msg.setSourceEntity(44U);
    msg.setDestination(18325U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.5804950452016526);
    msg.setSource(47680U);
    msg.setSourceEntity(248U);
    msg.setDestination(32221U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.2164390468386379);
    msg.setSource(39556U);
    msg.setSourceEntity(247U);
    msg.setDestination(31681U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("HIXNTQBQFSQPJXEOTQKSIDGHTXPACDZRZARTFMFUJLIAMSZUYKWLYVUJNCVOOUEUPRXHZNGFYIKTVUNRMXGIFVJXPZRJXCNSLLFWWTFSSGNNEBCNCBNZBLOMDAATDLHKOVJJEVLWM");
    msg.description.assign("LIPBIJAAHNHOOVMMHOMLKVSCSJJJPELJKZECZIXW");
    msg.vnamespace.assign("ZMEWYXGPRBHMJSMUIUDSCLUVWKFDYDFZCYEZJIDAKZALNEQLKNPTBCSJVYFPHGXRFDOPHCCWPQBGSPNDAQNDGVCUDZWATLUNKEMDTRUAQJHAEREBHOYXOYRPNWZXS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TVDQNOLBHZIFTVGMGHDKTPAMKWOHAVCRNRCBKFCREJLDLECLOEXKPNMFPNLXXYMRMICAWKMUFXMGETEJEERLSVKFTLSEDWFBBKMYGLOZFPAEPRJSDGIVBQHRAWJAU");
    tmp_msg_0.value.assign("FCKWURPDQUIWNQGTNIMPGIKOJYVOUXTIFDLHTKADWPYBXCEJJKLOYQZEVZHPMDRVMC");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 19U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("USJYTOADZDHQGNPWLCIYBZVMJXCVBIDFRPOSYQKYNJLCOVCSMMRWHOLTGAYTUDVWYKZXMSGTMMHCUGEQEADABZNOILKIZKFBCGREOKWNHDNERSBUIKSJWUCIGGPYKYFFWEOIRHMRZAAQXRHFAVDIMJSBUNZYZDEPUXTPLJBKASIS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MAXFGPACPFVWPYUWRMPSANEGCDNLOVGZTJHCFRLEROFIBWCXSHLSUIJWBYCUYALXZXBLFZLAYYDQWKWIHFXMRUVUQVXDZQDHIHVMKCGNNXKWELRWFMRQAMXMIETAJZOGETZKYTNXBCGUDRJVPRNIVCJAQHNTBPXSKJKTTTFDIKODOQWMYHLESIBDOYJEGQZGKQGUVZSMCKJNNYPSLTAOBCMSSURAKVRFJGYIEFVZBHBNQELUWIJ");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 45907U;
    tmp_tmp_msg_1_0.lat = 0.8204059936723476;
    tmp_tmp_msg_1_0.lon = 0.4352284832259351;
    tmp_tmp_msg_1_0.z = 0.0630174370589871;
    tmp_tmp_msg_1_0.z_units = 79U;
    tmp_tmp_msg_1_0.speed = 0.21011468228066643;
    tmp_tmp_msg_1_0.speed_units = 249U;
    tmp_tmp_msg_1_0.duration = 54957U;
    tmp_tmp_msg_1_0.radius = 0.3923035918233383;
    tmp_tmp_msg_1_0.flags = 65U;
    tmp_tmp_msg_1_0.custom.assign("WRTKGCKAULGHSPMBETMQVDLXSJPURWGMWQWQNELSXGBWDJXLICIJSYLPDRANLHHVLNOIMLCSTOKRXIETTNYCQJNLYJQSSZRMUBTUPADRWYZDRQXZJHZFOFRXMHPEVDEYFDPJQTOFIFVOPYTCDVSKIEBOUAHKNZBBGZPCUEFHIAYNSOFJICFISMBZFLAVOZXDQBDMUCOGJHXQKVWKHRAWUBENGZFMAPVUYEHTIVEQKRWGUYMXZKJTCOGYPBXA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CpuUsage tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 151U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9754155372907676);
    msg.setSource(30407U);
    msg.setSourceEntity(22U);
    msg.setDestination(39046U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("MPPRXHEPITYFCZNRDOSGFKNVUSSGFDBWWZPEMQEINKLGSOXISVIREVJSVMNXTANHFNTXYTKUGRBWAVHWTJEKCHFSTBYYUDBDQMPETGDAKZORUPEDUMSHMHJJRCWZNCZOUTLJTFZQJVXXMPPMFDAGQYOQLCUILGCYLLYWDRO");
    msg.description.assign("EXWGTIRFBQ");
    msg.vnamespace.assign("FUVSANCKTLSTIPHNDGZFQTZOOCRMRKZPVRRMEYFFZHEACYUKZOKHWBAUOEQMAFEWJOJFBRLTXLUFGOIYMNZYQAWDMELNNLWTYLUXCRREVDIYJPPZMMHCEDYSSCOXMJQF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XQHZLOHSOBWPOKUGTWBRPCYHHLYTJSFNEBYFLLHGBLFGVWYPPLJMXRWEQYLTT");
    tmp_msg_0.value.assign("JHCPYCHLJYBHRXXBLRFOSZERVXACYVIVOVJAIHUMETSAFDPYPHGDHCJSTQXEURGZXEKKILWYIXXWXLQAZMGWWRQZUCKYMBOONHKLOTNIFNPZFGDUPYHNYFRFIDMSTTNZOJMALPCSRVUONLHUOIIQCQGGLZMEAHNBZTGMEOVQVRKDTDSXWEKSGRAFOZVPDSESKMWBWJYJCXPVAZNBJBGMJFDMDW");
    tmp_msg_0.type = 40U;
    tmp_msg_0.access = 94U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RDVHJIQYVSTGNMJKBIDCUUXIKWSGWYVNHDZDMRYUYNWFZPLZXAHXGMMKFTKDDQQXVUOCZZEJNQRKDCYVLTIKYSBJJEFXJHOSZNUKVJHTVZHGRAAELIBOHIISQYCQBBCMLMNAEOPJKLXYSAQUMTKDEEBFVNQCAHBRPFWHWMGNAFEOVXFKC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YEARLTYBFBVNDKZGGADGNBUAFCZAMFQHYSNUZXXLVBHLKHPYMAJPPCUDJCHLXWKQSMKRUUTOREZOKGCZNQLMFPWSAJELJVDWFPIBWZYKOJJONTVDVTUXIVPVXYAUGKNZQJQYGIWAMTSOSEFBPMBLBFSTFMBNAZXMRDUWGRAXGEVB");
    IMC::FollowPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.target.assign("RBBTHPAPRDKIPPVWCRWQBMAQVHFLQGGKZGOAUPYDNVFANCTZFJCVVLNFMEUWVEHTMTTJBCSOQNEESQPXOEXQUVLXURKCKTFBMCU");
    tmp_tmp_msg_1_0.max_speed = 0.7688872882743412;
    tmp_tmp_msg_1_0.speed_units = 186U;
    tmp_tmp_msg_1_0.lat = 0.05370894235268331;
    tmp_tmp_msg_1_0.lon = 0.1070332348963452;
    tmp_tmp_msg_1_0.z = 0.810605655649679;
    tmp_tmp_msg_1_0.z_units = 215U;
    tmp_tmp_msg_1_0.custom.assign("UMJNCVZONQNHFLKMSMWIIDGVFTCQJXEJXZZRLNRCCFBSCKNAZSVWRZUQUPUVKIBGGAQMPTZUMBDTWPCBKZUAWHKGEJLPVSRKRQISCDYENSJITLNQDZJRQOIPOTLYHVATKJIDLYEKOXVFWSXEAJFJFWYTMYOYNFRUVWITDOAFCYWDGXEMGDYPLLLMCVPIUETHISHGOBHRDXBPMWHRFPLHBXNQQEEXAGOKHJUXKSAGYQRZBMOBBXAVE");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DissolvedOxygen tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.4088964508051127;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::ImageTracking tmp_tmp_msg_1_2;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TBLJMXYHXUFSLQHWPLELUKWPYHRBBRCPNCXXAIJVOVSRLHIPBFRVEAYWKSNKEDFTGJOMZQBXIPGPSHJITUIBCYUNEQHKIWZGNGYNOQTSAMCRCKOYTURQDFETFWIJJNEVGZBALDGUWZDPKXPAASDBXFPWYLTQFTGSLKMSZMGREWMYFMFVPBHCNBYVZXIK");
    tmp_msg_2.dest_man.assign("AMAAQCLOSEIQMUCTUXTGNHEFOKRKMZDJRJVHSUWOAICJJRXFATOECZRUFKHTHLZVDSGSGNUYQNEMREQVIDDUXPGRKPLKJNSFTOPFSWCMMPORJBXQBDBVMLVNQBHEYSXJEOZDIRJDUMNSVXJFTILYWVBYHXMIPIPWZPSSOO");
    tmp_msg_2.conditions.assign("HDFGGHXKSPWMBSRSWMQFHDEUYAWOQGAOQIBBXTOFHDRNIZCZBTKSJEASIYNTVEDGCKEAMOJNZVTRBOSGFRDEPZZIYDKNNTMTHEYVMIBWQLSCBGFCFJPLHJDZKRBFUXMWLYUPHNUOEZWLADNBDQVRNVUJIXMIRSCYQDWAGKGYRYJQHUKLWQLOCIXVTJXVXFSXCUZXGTUNL");
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
    msg.setTimeStamp(0.3772100328252156);
    msg.setSource(35417U);
    msg.setSourceEntity(225U);
    msg.setDestination(20781U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("WTFHMOOHHVNGTVKTOMCVNPLYXRRZFBBIFEJXKDFTZKGCHBKXSFTATUMSACONTZIUVEPIVTCEVDQULKJINJWLESKDZWAHJIJXPDGIYARKLCNNSYKLJUVPLWSAMMRYMSOCIKZNBDQSIWRHEIOVUTYZFEQGCORMNIPAMUQFXDSJJHDTDQXVZENEBSJXZASRGBGCQAANWWUFHQGGLWVUZLLPOGRMUOHELPODURHJZYBFPYFWCXYKAPPEDCMX");
    msg.description.assign("ZUFHICJHBLSNINSVEQCHEVKQFUXBVRTFLYDMRJKQQNUVPJOYPKWSKSMQYUMMQQECFFOULHOFXVZBHPXPBMYCZFXTABUZKKLOWRXAGJDGGBDYVNEOPWZSWZAHJLSGIWEUYAVSBCCZODAEHOHTMIXLDGRYNQMZTWYYUISNPHCTAHXWJJDRXAYEXLPAVARNIGXZPIRRGKWSMFGPOGBMRETC");
    msg.vnamespace.assign("IUNNSAYZILQABBBVFNVRZGIYZEKRVFTVKWK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QOCJSRXKKDWUOYJNXVMIJOTROERDVUZQ");
    tmp_msg_0.value.assign("OKXOECDIHYAXRDOYWYEXAPGALMNHPVSYDLFSWTTRJ");
    tmp_msg_0.type = 19U;
    tmp_msg_0.access = 192U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TBDJRVAFONGCDQUZNOIOJUACEMMNFCCQGQGNTYPDZDZXXACOXXIRYHKANAIEUFCXJHRLHEVZBYXYWEVULIBJMCSAHTESBRKJMOTFPMGDZEOHHTYMFLNAGF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZYVXIYOAQHBMTGDWUAXEZABHGULBUBFLSERVAKTDNOACWNPRMFRAC");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 13611U;
    tmp_tmp_msg_1_0.control_ent = 179U;
    tmp_tmp_msg_1_0.timeout = 0.24933496932540378;
    tmp_tmp_msg_1_0.loiter_radius = 0.17448895020401534;
    tmp_tmp_msg_1_0.altitude_interval = 0.24584349041988363;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Alignment tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 31433U;
    tmp_tmp_msg_1_1.lat = 0.9833862596096781;
    tmp_tmp_msg_1_1.lon = 0.42275737940267866;
    tmp_tmp_msg_1_1.speed = 0.7904449115459404;
    tmp_tmp_msg_1_1.speed_units = 88U;
    tmp_tmp_msg_1_1.custom.assign("FUUMKFILAQCPEONHVUEAFUBRLYDIHXVZQUBPWSJAMRBDKANEPSLQIRDODTCSGEBFDVCRYRTZZTTRZBNHHAHFKBGIVMBGEPTGJPJKEKYGIMXYMSTF");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::CoverageState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.feature_id = 29920U;
    tmp_tmp_msg_1_2.state = 26U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7613850586943299);
    msg.setSource(35248U);
    msg.setSourceEntity(68U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(212U);
    msg.maneuver_id.assign("KHVKSTLZDBPNCSLYLVHBGYMQFCAVMNDHHSVQFRSCFVLAJDUIBBKTWIMTOBMTOZWFOTNFVJCANEADMZDRUSYNOPGYJULUDYZWGSTYBCXUAORCTJLPEGJLNUSJRYGJHQUO");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.3560757516913424;
    tmp_msg_0.lat = 0.3635862670074619;
    tmp_msg_0.lon = 0.9984951990393925;
    tmp_msg_0.z = 0.8561093041893664;
    tmp_msg_0.z_units = 52U;
    tmp_msg_0.travel_z = 0.47761489624875497;
    tmp_msg_0.travel_z_units = 186U;
    tmp_msg_0.delayed = 139U;
    msg.data.set(tmp_msg_0);
    IMC::Rows tmp_msg_1;
    tmp_msg_1.timeout = 47184U;
    tmp_msg_1.lat = 0.3490580841348615;
    tmp_msg_1.lon = 0.16799545505106883;
    tmp_msg_1.z = 0.4954873583328748;
    tmp_msg_1.z_units = 194U;
    tmp_msg_1.speed = 0.76232110462453;
    tmp_msg_1.speed_units = 173U;
    tmp_msg_1.bearing = 0.3109676604515591;
    tmp_msg_1.cross_angle = 0.6578843179797634;
    tmp_msg_1.width = 0.9053053028823561;
    tmp_msg_1.length = 0.6895646329857437;
    tmp_msg_1.hstep = 0.7475585079294571;
    tmp_msg_1.coff = 101U;
    tmp_msg_1.alternation = 145U;
    tmp_msg_1.flags = 145U;
    tmp_msg_1.custom.assign("RKYCWNKZHEHTNBINKCBRWXOKGYAMVYMYJOIDUKIMLKGBNJGOGPAWQVRFDQMLMVDHHQHIKVNRIPYHBUSIPRDUHEEVMDSKFLWNCSVVQZOXCOIWSJJLAQRTYEWAJMEOSLXYZPBOBUBQTSXXCQLUGXCLEFMJMNUTJSCLCEHRTCOQJUQWBPHAAIVYSBTFOPFDIJIOFPGZAUHEVFGAQAFFLTZWDEZYMZXDXKSD");
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
    msg.setTimeStamp(0.26987027410913966);
    msg.setSource(54504U);
    msg.setSourceEntity(4U);
    msg.setDestination(2836U);
    msg.setDestinationEntity(191U);
    msg.maneuver_id.assign("KKISCPWEWWMQALKEMAEDFJRHOIGNKZSXCXWQIXGXAYLSUFOVNNNDLIGACFFXHIXHYPMRBYROMCZRIOVWDEFANPBNTJLQYUFYBPCEIAFZNLQQPOYZLBYYNKCPB");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.9139286530624703;
    tmp_msg_0.lon = 0.5913794201159879;
    tmp_msg_0.z = 0.31940489453324694;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.speed = 0.831693749997762;
    tmp_msg_0.speed_units = 103U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.22827713876522904;
    tmp_tmp_msg_0_0.y = 0.5304512699774857;
    tmp_tmp_msg_0_0.z = 0.49580425317049315;
    tmp_tmp_msg_0_0.t = 0.18955275615676337;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 51436U;
    tmp_tmp_msg_0_1.off_x = 0.06806270903688316;
    tmp_tmp_msg_0_1.off_y = 0.2995402580911116;
    tmp_tmp_msg_0_1.off_z = 0.5553089416217089;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.10871722683747409;
    tmp_msg_0.custom.assign("VMRUMGZWLFZYUKYXVVMECHROQPXJUYVTIBBAEDHDKZPLGBJGJSUONLOMEDCWOHNPWWGBQRRUOUUOM");
    msg.data.set(tmp_msg_0);
    IMC::EntityMonitoringState tmp_msg_1;
    tmp_msg_1.mcount = 69U;
    tmp_msg_1.mnames.assign("EWGLKKHPQSBDUYVRTEPVWNVUBJONAJIGACRTHTFNSYGHKJLDNSXGFRJVLQMQOVCWTXYXUJNQIHVVBQZTYHFCMPCRHABKJXSULKCAFAFXCJFTTTQAMKTKLDCPYYDIOLAIEOFPWMKCPJOESOASJGKZHSUQRMEMVWSWGPUDUXGDDFQSSIBZXGONXFUD");
    tmp_msg_1.ecount = 40U;
    tmp_msg_1.enames.assign("QYQIALQYBPNRXKVHATKLUURYRCJDWVGTXKWOAAFHXBBZEQVHWSVGPWMXBSYEMETUILNSIZCMBMODHMXRUBPNDXQPXRVXYYNFQXUJVLYRCSPQO");
    tmp_msg_1.ccount = 227U;
    tmp_msg_1.cnames.assign("ZGAQAYXHGRIAWWGPPOMDDTLLVYKLMZMHLBXBNCHUTTLROKVWWDARNFWEOGWNJFLKVBCWZAPJOUQNNEOMFESISYIUTCRAJX");
    tmp_msg_1.last_error.assign("BDAWTKQDBJXEGADKARJXOWLSNBSOCRBLKQVJYFYLFLZUBURJVTLLWAJQTDTYTQNSNCIFDVECLPGCFOUZWUEGYGHAIPGIGHHMRDGGFTXOXEXANEGIPMASBQWKXWUFDEOEOIJZWNLRUXOHRSNXA");
    tmp_msg_1.last_error_time = 0.42445469494827837;
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
    msg.setTimeStamp(0.3638503250321016);
    msg.setSource(53249U);
    msg.setSourceEntity(38U);
    msg.setDestination(51664U);
    msg.setDestinationEntity(16U);
    msg.maneuver_id.assign("KNJEGHRFEHBBFLMYCSZPKXBOPUORXWWVXFPLNZAUIYJVYIIBXLVDMBKYEPKGXOFQYZNDABYQULEDQAVNZEFWRNDJOJIEBAKULMXCEEKSLNCIDOTATEOSQFMTFLSCWMOUTXGSCHPHXRXSGNAMRJCYOQTSSZNPQKHGLT");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.7380567403314992;
    tmp_msg_0.lon = 0.5321485228071234;
    tmp_msg_0.z = 0.5253537816266173;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.speed = 0.2036815285553818;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.start_time = 0.6662562206501988;
    tmp_msg_0.custom.assign("WMBXDXFFQMLYEOIPGVODTUYMLPSUTPNQIARMOHZCNDRRRPHLBZFXRXMLHFYDYHCPXEGXTRIFTFBZCUUAVKDSXPEWVKCFXSKGAUKRUWMBDRWKENAUCKBQJZAQOYNOOBLNICMVEJYSCZGXIAZKEBTPKYRIWGJPGWSVGMHLIVJMPWEZSLQAVSJLSDWJN");
    msg.data.set(tmp_msg_0);
    IMC::PathControlState tmp_msg_1;
    tmp_msg_1.path_ref = 2551645846U;
    tmp_msg_1.start_lat = 0.4273182400827096;
    tmp_msg_1.start_lon = 0.019387884712867898;
    tmp_msg_1.start_z = 0.8425475029984902;
    tmp_msg_1.start_z_units = 45U;
    tmp_msg_1.end_lat = 0.23365303331401355;
    tmp_msg_1.end_lon = 0.29021899955296515;
    tmp_msg_1.end_z = 0.40089971094911947;
    tmp_msg_1.end_z_units = 167U;
    tmp_msg_1.lradius = 0.9464588812553201;
    tmp_msg_1.flags = 37U;
    tmp_msg_1.x = 0.1270587667358657;
    tmp_msg_1.y = 0.36969563777661396;
    tmp_msg_1.z = 0.9026183842358982;
    tmp_msg_1.vx = 0.3997927763559509;
    tmp_msg_1.vy = 0.6460953825071662;
    tmp_msg_1.vz = 0.06856000673149654;
    tmp_msg_1.course_error = 0.13637695661967708;
    tmp_msg_1.eta = 44207U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FollowSystem tmp_msg_2;
    tmp_msg_2.system = 46314U;
    tmp_msg_2.duration = 3496U;
    tmp_msg_2.speed = 0.15142107027737006;
    tmp_msg_2.speed_units = 100U;
    tmp_msg_2.x = 0.9682947963971691;
    tmp_msg_2.y = 0.11490161594693526;
    tmp_msg_2.z = 0.03367257248604505;
    tmp_msg_2.z_units = 221U;
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
    msg.setTimeStamp(0.5301741208526035);
    msg.setSource(49023U);
    msg.setSourceEntity(160U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(41U);
    msg.source_man.assign("ZAKTLMBPLTMMSUCCBWRCYKWVBQDEZEYCQPUPCFRJSYQLUVOXGHGVWDRZCJHHSWSVXNYRABMHKSPSPHCKGDNQQRTNAGOQYWJUBABYUOZPLXAIMYRKNVACCFQIXJDVUAHQTOKHGAVOQUHJBZTFIMXMIZW");
    msg.dest_man.assign("OJDUKWOCUKCIQQPXJZXRBFLBMULNSZKBVGJKTSXCFERLYMZANSANSLXHRJYLTRTUSUVEKFVRZLQTONVAFFMIGKBCTHYGFSIAQGXVPXDOKAYXJOJGIEIGICBDOPZBUYCPWWW");
    msg.conditions.assign("HIOCYGXGLEPIJFZUPARHWJEDVNBRPEBSFIHALUTEOCNPOXIFVNVIAJAALQJJHLCLWBGZISGPMAIUDDJSZSQNDFQXYOGERAMMFRDTLUHOGTBWOSRXAFAPXCCPJBHIJMHUMMYYQXLXZZEMYRVAXYXVBIKPESSZKDTNKLQBWWWCRPZYBYHFERNVVZFDVKNZGSFUOQVNNKTZBRWQV");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 78U;
    tmp_msg_0.tas2acc_pgain = 0.9250461890042871;
    tmp_msg_0.bank2p_pgain = 0.39104890084575017;
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
    msg.setTimeStamp(0.3259698673139455);
    msg.setSource(62558U);
    msg.setSourceEntity(245U);
    msg.setDestination(44743U);
    msg.setDestinationEntity(228U);
    msg.source_man.assign("ADWHRPKIGQQBBRYOYTIUDLYYWJOCZDWFMDROJ");
    msg.dest_man.assign("LTICPTDYWSSDNXYDESPTXHJYZHOGSPHYGBNWFRDBZCCIKHKGRUYGFIXWWKUVVVBICCFRSEKONXAUPTOQMZEKBEGFYMKBJDYYNQAPZKEDWIUGQFLYIZWKZLUZMPAHTVRBXRRAVESQHDWWEFVQVPXYDTTZJQSQOOOLCJAXTNXHXIDEBQP");
    msg.conditions.assign("HNULCVGICPTMFGBDSJVVZOZXJAF");

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
    msg.setTimeStamp(0.7660918294841194);
    msg.setSource(14884U);
    msg.setSourceEntity(30U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(251U);
    msg.source_man.assign("ZZOPMYPZJTNXISJXCYDEQFCZKHOBCRTCYIHGGXLHC");
    msg.dest_man.assign("KFZKUJDYVGOOSWOWBWVATGOICYLABAZSJFTXFZJPLGJIMUKGYHVHKUATMOFDPFKOGPFQXZLZEUCJXHBHAHSBMHVCNAEVMTNZUTCRIOWTYICXNRMDINIQJNQMGYBRSXBSHTAXIHSPTVPOFLQNPLKZM");
    msg.conditions.assign("GEVCHFZWAKQMAISAYLNSUSXOSYMBWOWMDUHPIXOFZLTNNHFZJINVGPHLLSZRJVSPGWVRCARFLZVZOGXTNFTTQGKAXWPRPSXKQXAHHUCEBDTNBWKDLCYVZLTJHAEGMRKPJSODAJEZBGIRJJRYZQXKWYHUDFVNNHPDVEITUECBQTMWCOBYWEUST");

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
    msg.setTimeStamp(0.20238199059410933);
    msg.setSource(48325U);
    msg.setSourceEntity(30U);
    msg.setDestination(55362U);
    msg.setDestinationEntity(50U);
    msg.command = 118U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SXSGNBZFPFMOIZTWYDEIUCVAOAXDNHGXAXELKMURIKRHRQTRQOHJUF");
    tmp_msg_0.description.assign("EJIYPNCSJMEMGPKBZMTMHLXMVAYYOXOXUVTPKWEGKKLTIPNXWDZEXBVRVBNLVRHTOQNRNNHPXTKTYCOG");
    tmp_msg_0.vnamespace.assign("KMCSFCUWNRRQMVATFZGZNHJLSXVXNXTOZMBOGYGBXWILOEPSHOPFIYFKELSBXTVFWOJUHKIHDRNGZLXFYYVZUGKKYJPBHHIRSKIEDGFRMPICBBGPZBQCUHDNYIXLSOCGCTRQDASAUTNEQHIOXRFVBRMQRMSNJFOMLGJEIKKJPYCZOWVZHQUMSACYCBERAYVAATMLWPDNVULZVTWWJSLXYL");
    tmp_msg_0.start_man_id.assign("TJHNMOVNAYYEHKFUM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FSRXOKILFBVGZLKAUTSLYGNPFUTHLHXQGLVQSLBPCOEMPFIHOCNWEKBUWXINUAEHUQTPVNIVEQTJASMQROQVPFCTCUWEIXGVDDYXYZZAYCUXJXEJMAOGDHMDJHOIPDAGEZJESOKSPFQGCNNJRZPQZKZMOCUKWRXARQCWBHNFTXBSRGYITXMHBYLVBTKSORAUFIUVMYJQDIRMOWGVKBYNKHDDDJYJHJPCTFBSMVWGLNNPWLCEWWADEKMFZRAZY");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredPath tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.path_ref = 3722094500U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lat = 0.13083848077771243;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lon = 0.4478315345047682;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z = 0.5539048384931541;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z_units = 14U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lat = 0.8422638867096829;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lon = 0.4596826323561721;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z = 0.8181594878529556;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z_units = 235U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.6886384856862562;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 131U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lradius = 0.97109509304201;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 194U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 62638U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OTMOWESNILQTGWBAPSERQXVLAYTUIUFQMNKSERCRAWWUBWTZKKYWIJQSXJXGHVFZNMBCIFYOSXRCJTQSWJFLFYLIOHJJZZCXFTKGHBOFPZRGIWMZMAMNVJZTHTLEKDRLFAUBCGHENKZWYVVPQNYCPALQPHMBOXLKDOYIIDYFXUDTZOVNRPJBCDVJZYHBUHBDUYRAPEHCVASWACQRAQDMRKQEVXUITDKGSIENJXMUK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::RegisterManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.mid = 1245U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HSMOOXOJRWKTVXSJLJHRTVYMUMZKTN");
    tmp_tmp_msg_0_1.dest_man.assign("BGIAQVEOGAZJOPMPDLNJMYJMVCGBCLBNRYPACILHSEMPMNXFQVWHC");
    tmp_tmp_msg_0_1.conditions.assign("XPZKNVRNCAKJLXHKYUHKESGIWZBFHAMSYISCFBIQYDFRDAYKNHJOXUJZTOHJHVXPWMRLMWYXNBBBFGWBHCALLZQOWXAWJIEKNDZFJFAXDQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.6942381479543347;
    tmp_tmp_msg_0_2.speed_units = 108U;
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
    msg.setTimeStamp(0.786507015096402);
    msg.setSource(26557U);
    msg.setSourceEntity(112U);
    msg.setDestination(18920U);
    msg.setDestinationEntity(151U);
    msg.command = 82U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OIAQSUDLFVHRYMCWUGJBTZXXQUUBYZDVWVRQUHRPHBTSSJHQANVINFHMJPPULINEMLZVNGQXKOKYYJWTPEDNBOBLRUUETKMMOGIKJRGWECKFMRDXTBSBJYSHEYZAITGKPOQEVQJIINISOEHFOLKFDCZXFYMRYXGGHYFBDEVAMUUEROPPWOIWALD");
    tmp_msg_0.description.assign("EPCCFBUVZFMGYSXDPLDOWFXKPKBBFAPNPONZTJHNRPSZDDZSKYWMKQBAQWBTDUMVSGGZOBBEHIENYCHXGKWLJZAJVRWLMTLIRWIQIYCAOPDIVIIVYOKQQVJXJSEPHFEKCEXRJFHDVWCGYFGLYUANSNWCGXNSYTMZNFKCCRRFADHGUTIXDLXJROATQJVVMOIKUTRMLOXUAPLUELBNOY");
    tmp_msg_0.vnamespace.assign("ACKTHBABAUUOGMQVWHQCFQXXXKYTSROMLGWOEKFQUEQAINNIYHUYOANDLMJMHMWOSITMOELKRIGDCZDPKNJCHPDFVFZUAXHWFYPLVKPSSXBHLFVIATZVDCQEVUZNDKXSYZLWMGXZXFZRCPEQJCJBDRJHYYRETWDSMQXESJBWGVFYTPJRNENOGRTQ");
    tmp_msg_0.start_man_id.assign("DUNUHQMOGLVDQRKZJXDQSBIQNTTDNLNBOUOFJBPXYZBKCKPTLVLMCERHRWUTYEBJZFDZSLEIODNGEBGQOPQMDNPHYZAIFSOHHN");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WZKYAYWZFPHYUIFBSEGNUDKLIQHMSTDFVROPLDXCLSODNLXRAJRHNG");
    tmp_tmp_msg_0_0.dest_man.assign("ELPXSFRPWMTJRVDQATCZUGTVMAXILKYBENZSFSPPNOOOVPDKUMYERDWNXALHTJXKJJCLEGIJWOPHLFOTYBRLGYNMYIZNCKRMCAHPSFMKDUHPTQKVUAXFQDJZCBBPRCOGUWIQQEANIXKNGJWMGRBZIMNELHVDIZLFBQAIYWOXVCMIYXOKFDHHGMAFSVZYZUNWPSOBHUQ");
    tmp_tmp_msg_0_0.conditions.assign("LSXRSHFBDPDCTWJZPRLDMYWYMQHONECINKPRDREFHAASUGNVFOVCWEXIWIJKLJZSZGQEGIBBAUUHOAIRSUPNGFHPSMURLWZUOYPGZXZTTOBDVJFKQPGGRKYTKUXMXVZQQQCCFVYYTWMRYKAOVXUNGYBEECTJJNDILEKSYKQNPSSBNJZOGDHLAUIXICBZBRHMWATBRKZFVFMDQWMPADLHOCKHXGFWBJJFWPEYVXNNTHA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SonarData tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 155U;
    tmp_tmp_msg_0_1.frequency = 3972994906U;
    tmp_tmp_msg_0_1.min_range = 6439U;
    tmp_tmp_msg_0_1.max_range = 36881U;
    tmp_tmp_msg_0_1.bits_per_point = 87U;
    tmp_tmp_msg_0_1.scale_factor = 0.6059419584949405;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-49, 102, -60, -37, 83, 29, 67, 122, 124, 5, -116, -115, 80, 78, -64, -51, -75, -113, 62, -125, -81, 29, 109, -92, -73, 49, -50, -123, 12, -122, 103, -87, -94, -23, 14, 121, 38, -126, 50, -109, -90, -82, 79, 118, -79, -100, -15, 83, 91, -87, 108, 86, 6, -30, -108, 80, 87, -25, -58, -72, -63, -115, -10, 71, 51, 84, -71, -10, 106, -42, 16, -61, 76, 87, -120, 117, 87, 119, -72, -38, -121, -101, -121, 117, 19, -13, 45, -77, 46, 58, -92, -9, 50, 94, -98, 101, -89, 62, -89, 101, 103, 0, 47, 87, -20, 74, -119, -114, 42, 56, -51, -3, -108, 52, 119, -29, -92, -118, -75, -33, 79, 104, -4, 56, 27, -86, -39, -63, 10, 14, 22, -113, -11, 125, 114, 122, 15, 24, -23, 99, -16, 14, 18, -103, 2, 30, -98, 20, 74, -63, -22, -97, 14, 118, 7, -30, 16, 116, 52, 76, 69, -19, 119, 15, -68, 42, 47, 16, 76, -61, -81, 58, 50, -99, 105, -2, 7, 41, 39, 7, 3, 96, 111, -93, 15, 23, 99, -35, -23, 7, -92, -2, -51, -84, -101, 86, -3, 115, 18, -19, 3, 48, -75, -75, 15, -18, 116, -68, -24, -78, 84, -29, -112, 97, -108, 114, -114, 118, -72, 29, -54, -11};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
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
    msg.setTimeStamp(0.2572448731259023);
    msg.setSource(53882U);
    msg.setSourceEntity(88U);
    msg.setDestination(44436U);
    msg.setDestinationEntity(104U);
    msg.command = 75U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EMNCGBOKDZLICTKDAFLKNKPQYPPYCYSSYHQAGYAEXCVGQ");
    tmp_msg_0.description.assign("YRXTQQBKIBZELKLDGYOOXNUYUYDWPIXBAADFMFCVAEMZZNEZEGFYIJVNWHPNNVZLMYGLEXDKKPRIUICTTFUMZXODRKSRLORHWPXRFFOBTMMQQVTOLFHTIHPCMBBUMFQCGENGXWSECUZKRJRJUPYJAQSBOLEGLUJVAUSANOBJQLEXTXAZSSQCTHZKOYCKHWWWNLSHJMHWCCSVPWYSIBZVSTTVF");
    tmp_msg_0.vnamespace.assign("ZOJJEOILYTVPEVXLICSYTDBWFPWHFGSYLCGYDPGCKCRGZBVBMSSABJIAQMHZXGIJNRVFCOZJJNRNUYVBNRRYQUUUEHJRHOIQFUCOBKXAAOFAJHENQGHITKMOUTATKEYBPWNSRKLFDDVEFHTAMQNFPGSKIAGKNPUQXHMXXPKR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YSDQDVFRSJGAJZPLBOOITRLPCVKMWYUNAPPBWVIUJHSYZJCSVATEJHXQAERNSDMMBUVQGJADUZIOMMGQMDHWRGZVIUIYLELWQXZAHPNETHZRWOZHZWZNYXJTBEDSLXUICOVBLJGSIEEYVOHYBOTKSCYZPGFDPGSFKTEKTNXASHKGNBTEJPFJACCPUDRWEQROX");
    tmp_tmp_msg_0_0.value.assign("ZXGUWPWSBHIFSNSSOGQZIBVHXTQDUAMHKEEVDNLTUWJXTKSMMQIADXVHCEOFCGRSUGCIPJLIGYH");
    tmp_tmp_msg_0_0.type = 139U;
    tmp_tmp_msg_0_0.access = 182U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ORGJGWQFUDPKSLAKLDRBGVTJXTKDKCZCQQXLDGELQUGC");
    IMC::UASimulation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 154U;
    tmp_tmp_msg_0_1.speed = 16828U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-81, 114, -29, -76, -90, 42, 66, 34, 67, 118, -68, 123, 21, 66, -98, 87, -38, -111, 11, -71, 12, 74, -108, 56, 64, -95, -74, 77, 58, -52, 55, 82, -25, -55, 33, 66, -64, -85, 33, -128, -87, 62, -37, -100, -108, -62, -84, 77, 103, 1, 6, 12, 110, 47, 75, -106, 126, -60, 63, 63, 88, 89, -6, 111, -113, 115, -14, 101, -64, 62, -27, -87, 12, 49, -14, -92, 87, 100, -97, 123, 37, 35, 79, -108, -106, 113, 29, -35, -18, -60, 34, -120, -41, -85, -95, -77, 125, 124, -78, 91, -27, 60, -20, -54, -93, 96, -126, -117, 112, 83, 28, -73, 87, 20, 36, 79, 71, 103, 41, 27, -36, 22, 109, 44, -80, 75, 123, -112, 88, -26, -35, 124, 109, 102, -22, -58, -58, -69, 124, -89, 115, 18, 100, -96, 21, -67, 6, -23, -62, -112, 39, -46, 4, -84, 23, 53, 94, 68, -78, 53, -87, -70, -2, -128, 89, 110, -61, -45, 101, 125, 43, 29, 120, -42, -103, -63, -102, -128};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::RSSI tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.0663269777734129;
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
    msg.setTimeStamp(0.6730241042149941);
    msg.setSource(31448U);
    msg.setSourceEntity(99U);
    msg.setDestination(52035U);
    msg.setDestinationEntity(208U);
    msg.state = 220U;
    msg.plan_id.assign("XGOOLGSTMYBCDNLCYWOEVTVL");
    msg.comm_level = 39U;

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
    msg.setTimeStamp(0.8148612547787417);
    msg.setSource(6560U);
    msg.setSourceEntity(172U);
    msg.setDestination(63617U);
    msg.setDestinationEntity(25U);
    msg.state = 22U;
    msg.plan_id.assign("SVBGNTZDPQFQVZ");
    msg.comm_level = 244U;

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
    msg.setTimeStamp(0.30618834145815976);
    msg.setSource(11497U);
    msg.setSourceEntity(166U);
    msg.setDestination(9550U);
    msg.setDestinationEntity(198U);
    msg.state = 218U;
    msg.plan_id.assign("BETJKEYZVWYSCWCCJXYEVPGBXQBCKMWHQRRZSURXEQXFUGVYRDHPRNTXYVVOCTNCZNIQXAAYMCQKJBLYUDSTPVOAMBLYBSVSQDKJAYTPTDDRWPBUHJASUNGGZBTIDHFFTZQPXFPHGGMRQMGIUNWSDCUVAJBKMGAIZMLHEOXQYPFVU");
    msg.comm_level = 235U;

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
    msg.setTimeStamp(0.09649808279123773);
    msg.setSource(40810U);
    msg.setSourceEntity(145U);
    msg.setDestination(29303U);
    msg.setDestinationEntity(122U);
    msg.type = 145U;
    msg.op = 222U;
    msg.request_id = 50724U;
    msg.plan_id.assign("XFBYTWTBPAMZGHWKBLWBMRAPCASXVDCEBLMOSMFQAUUNUBGSFDXJIYQCWNYHORYGUQMPHWYXHRQPMITTJQXKAYOFCOBAJDTNDZKJROSXVDRZPV");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BWPTLHRNGLLBACRHHTGVQKNSZUCJYVUBKWTFJJGDEBPGGWCUPXSCDYDYAHDAATOZEQRXESOFBKHBPCYBXUWBNZCPPZEEXGVHJXPZYWMNMPMYSRFFJMQEMALIXYXIJUSLROCAKRCMFNOJFDUGEADAHQSTIOQLHNGMOSDQXUXPYLIKTIUTNLHZWVFXRVOSOJMWKTYKOKVVQRLPVGCIIJSIZOUEFZWNVKQ");
    tmp_msg_0.value = 166U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RRETNTNKWKPEGZSXYLARHWNLKNWYSKUXCQFCJQPRZOFTQHXWVBWMWQKEMEPSJ");

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
    msg.setTimeStamp(0.1281766552841006);
    msg.setSource(46241U);
    msg.setSourceEntity(191U);
    msg.setDestination(10500U);
    msg.setDestinationEntity(135U);
    msg.type = 217U;
    msg.op = 68U;
    msg.request_id = 24871U;
    msg.plan_id.assign("FSPRXDHUOHAVGXGSVWLVREZHVKQVUQQFPPENXQCTTSJTUUBJPXJCBNYOGBANXGAYJOIUBTNDYUMNGIVVPWEJMPMEWTTRBTGFCILQMVZYDECAFCYKRZZAVW");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 59872U;
    tmp_msg_0.lat = 0.8539447877500542;
    tmp_msg_0.lon = 0.8701923309450386;
    tmp_msg_0.z = 0.35721339482365955;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.amplitude = 0.2831569835469604;
    tmp_msg_0.pitch = 0.06179014832882379;
    tmp_msg_0.speed = 0.2733725251763397;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.custom.assign("FEFQFSHLJGZJBXHZKXALACLPBXWYIJPMLBUKFXICIWMCWJVVOMQSOPZHBTGYVJNSPLQYYKPHZEITHYINQGXMMTEFTESRIHFUYXXRJHGWCXNLZMKGPRBQVKGAPVNPWODRLSYEDRWKENUWCYBOSNWKHATTREZJQPIOSBUXGDZCDA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WMBGZWDATCQYKPNIPNNRKVUYCQRXMLLOVGHAWYIPXLFZNWSDOUIBNKSRODYJLDAKZQBKBJWLEGTETDYITWHIOSOCFMHVBPVGQTPJWQCEMRTSGHOQDFPOIKJCUIGYFEPSRPXUTEQWAVXTELMFAMETYBSNUZIRJCKRBJPQSEOXG");

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
    msg.setTimeStamp(0.7495700945433824);
    msg.setSource(32325U);
    msg.setSourceEntity(215U);
    msg.setDestination(37822U);
    msg.setDestinationEntity(6U);
    msg.type = 1U;
    msg.op = 157U;
    msg.request_id = 50412U;
    msg.plan_id.assign("EGMLSGJSKERMCIMYEBKQYKSVSWSEBDQCCSDVCPCRYLIMOKTRVDQAWZIBPFXDIJCPYITZRWAFQPRNEUINDWDNXHWECRHYEQPQOVJRMVBUIUNIVAFSMTBXUHETDOFFLONVLXHTWHSZTAZGSCUDHFHCAEZJVYIMLBJOEJYNYBZXWOZWQJGOWFTMYDTJMNIAXLOGUDUYUPGXBFBGOVFXTLUCZBPAMGWHVKRQLGT");
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 17U;
    tmp_msg_0.ncells = 80U;
    tmp_msg_0.coord_sys = 238U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.9801977328768617;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.05237703368930613;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.1229691814707613;
    tmp_tmp_tmp_msg_0_0_0.cor = 177U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CLZLFHVKYGJQAJTNNIOSJRWDXGUIYFHAPMRLDOBVVWTSEHTOBQFJDLBPUQARHYGHKZZQETDHRMUSZELVRTNIWXSYKOPYTEWKIXXKGBACCDVOHDVRTKEWQUPCZALWMCUSTKBO");

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
    msg.setTimeStamp(0.2737820214602844);
    msg.setSource(15055U);
    msg.setSourceEntity(218U);
    msg.setDestination(12087U);
    msg.setDestinationEntity(169U);
    msg.plan_count = 1636U;
    msg.plan_size = 2164534878U;
    msg.change_time = 0.45898792428475144;
    msg.change_sid = 20433U;
    msg.change_sname.assign("DWHGWZMYRLBFPNJRYDGHEYDVZXRCVBMNKQROJRETPTWXPVTPHTGYVOHMTIFUGTKNNJEJBSKTIHFEMMBLZPCHGZAILZLNOVYOIOAIDOMTFZUQYAYCJAHKWJEPIUIOEZSNSVYAIMPQXLRSJYJDISXKXBFRRFQTVLGQZRWZMMNKQCECWULJCTREVLGSFUDAGWCWDBKXSNCUD");
    const char tmp_msg_0[] = {-56, -113, 110, -102, -49, -21, -103, 47, 96, 13, -53, -19, -126, 101, 1, 46, 47, 111, 43, -23, -6, 64, 1, -52, -60, 121, -13, -115, 60, 46, 26, -23, 93, 17, 41, 87, 124, 64, -105, -9, -4, -74, 78, -58, 55, -68, 24, 107, -37, 94, -43, -113, -46, -8, -52, 37, 119, 100, -117, 48, 28, 92, 69, 86, 46};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MDHJTIJAVUXGEWGMGUFPJLKWBAXYMMTATZZDCGFBZOBIXVGIPLCNFKYBUINBRLXNMVRVZOKJWLBYNRQOOUGYAMHSRHZJEHQLKHYFZGBMJTEJBQSMKYDDUCQLWMRAFSLOETJIDIGSOUKWSANATZXCTNPMXPVDBKHPRHFWXFDYGQNVUQQFRENEJDACUHFCVPTYSGNVIAPZSSOTLKVYCCNPWKXOIQQKHXRUXLRSEPQHWIBCTLJZIZWDOOCUEYWP");
    tmp_msg_1.plan_size = 63173U;
    tmp_msg_1.change_time = 0.24802082494333344;
    tmp_msg_1.change_sid = 12881U;
    tmp_msg_1.change_sname.assign("TAIXMJSURZMTQPGMEFXYADHKHGBVJCBNPTTAZNZFNEOXJISVVMAGFJOMIWDYQDRYSMSEUVUSWXYLOUGTWONEZLLCLTBNKROJIBWWULSZEUDUWCPNADPPJLEXVHSVKQXESQAISTYIMRJPWHLILPCU");
    const char tmp_tmp_msg_1_0[] = {81, -58, -67, 103, -30, 120, 117, 75, 37, -41, 49, 11, 41, -5, 49, -17, -7, 62, -7, 117, -22, -101, -77, 88, 4, 23, -116, 94, -119, -49, 66, -26, 98, -64, -81, 68, -78, 95, 99, 34, 78, 40, -71, 126, 125, -14, -22, -34, 75, 19, -33, -88, -118, -110, 46, 51, 95, -77, -55, 91, -63, -109, -121, 37, 90, -36, -96, -117, -48, 35, -33, 35, -110, 125, -2, -8, 23, -22, 111, 34, -70, 38, -30, -103, -33, -6, 70, -43, -96, 48, 117, -74, -13, 78, -71, 4, -17, -119, -8, 44, 123, 107, -121, -76, -99, 59, 116, 75, 94, -126, -102, -86, 88, -103, 20, 54, -121, -111, -16, 60, 39, 40, -57, 1, -70, -14, -87, -1, 61, -18, 109, -101, -108, 113, 6, 40, 121, -29, 89, -68, 44, -91, -100, -77, 90, -117, -81, -71, 102, 3, -46, -64, 46, 71, 21, 7, 0, -35, 36, -115, -33, -97, -11, 45, -5, 119, 70, -30, 111, -56, -58, 12, 48, 107, -23, 119, 101, 55, 50, 25, 41, -5, 71, -62, 95, -31, 60, 56, 38, 94, 80, 82, -90, -24, 36, -46, 74, -15, -30, 41, 93, 12, 8};
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
    msg.setTimeStamp(0.4585136833038903);
    msg.setSource(994U);
    msg.setSourceEntity(99U);
    msg.setDestination(7554U);
    msg.setDestinationEntity(58U);
    msg.plan_count = 49208U;
    msg.plan_size = 1951604075U;
    msg.change_time = 0.5288803969881618;
    msg.change_sid = 64055U;
    msg.change_sname.assign("GXZMQOFHMLM");
    const char tmp_msg_0[] = {-96, -59, -34, -113, -2, -119, 58, -83, 16, -48, -75, -112, -26, -116, -119, -70, 20, -58, -97, -24, -14, 25, 38, -96, 26, -63, -54, -96, -112, 126, -77, 32, -121, -94, -61, 4, 59, -126, -117, -101, 28, -8, 51, -108, 30, -100, -75, -39, -73, 107, -57, 35, 30, -109, 14, 61, -65, 107, 106, -102, -81, -82, -113, -94, 126, 38, 9, -41, 103, 65, 74, -53, -30, -15, -14, -98, 33, 27, -116, 1, 19, 70, -26, 56, 99, -127, 99, -112, -27, -67, -65, -23, -23, 73, -112, -124, 70, 10, 99, -39, -120, 60, -4, 119, -56, -115, -89, 22, 17, -113, -81, -112, 30, -4, 8, 42, -70, -118, 46, -86, -33, 106, -81, -12, -6, 32, -104, 72, -101, 82, 43, 7, -108, -35, -66, -23, -67, -78, -107, -91, 79, -60, -112, -47, 111, 108, -119, 37, 4, 14, 69, 13, 120, 109, -48, 122, -54, -64, -52, 99, -5, 104, -16, 90, -26, 90, -91, -34, -2, -7, 8, -88, 5, 121, -20, 39, 43, 122, -47, 116, 37, -38, 3, 48, 17, 124, -22, 54, 89, -60, 114, 17, -1, -89, -88, -28, 126, -44, 8, 39, 80, 106, 98, -4, -96, 7, -125, 72, 119, -23, 99, 65, -120, -9, -82, 50, 50, -57, 25, -62, 113, -61, -49, 79, 46, -39, 122, 19, -44, 55, -48, 31, 21, -87, -28, 1, -39, 10, 85, 46, 74, 76, -8, 25, 21, -27, 109, 36, 81, 13};
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
    msg.setTimeStamp(0.6666411786165122);
    msg.setSource(8726U);
    msg.setSourceEntity(161U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(40U);
    msg.plan_count = 60935U;
    msg.plan_size = 1829079420U;
    msg.change_time = 0.28231017938952585;
    msg.change_sid = 62205U;
    msg.change_sname.assign("AIDGKJMXOQACNRUTYXONZFSXZFSJTTPPOPRWWQWNGJNUAZHVGKYJUXVVMHJZHGFGRKLIGNGVWMMFURRSAJEBIEMQIAXCUQVXETLWSUNXCVXUHLILNSZMWBWCDADDJBJAKMCMCZX");
    const char tmp_msg_0[] = {-92, -20, 31, -84, -6, -97, 29, -29, 6, -114, -31, 40, -19, 107, 10, 83, -46, 26, 73, 110, 71, 107, 64, 10, 122, 20, 103, -62, -64, 53, -127, 111, 35, -72, -88, -53, -51, 15, -64, 116, -107, -47, -26, 122, 18, 44, -83, 21, 93, 67, 57, -22, -25, 86, -14, -116, 23, -38, 88, 100, -5, 33, -107, -101, -108, 36, -63, 53, 91, 9, 49, -60, 83, -20, -108, 107, -5, 113, -68, -9, 2, -13, 125, -125, 105, -39, -2, -78, -58, 83, -44, -109, 11, 105, -24, 55, 6, -100, -14, -104, -37, 67, 95, 41, -108, 125, 87, -22, -61, -78, 82, 87, 96, 45, -85, -31, -40, -68, 2, -106, -93, 4, -18, 2, -56, -2, 59, -40, -17, 100, 22, 36, -10, -84, -101, -7, -43, 98, 59, -88, -12, -68, -32, -67, 17, 13, -27, 73, 40, -75, -109, -115, -116, -44, -113, 1, -108, 42, -25, 3, 24, -121, -14, 0, 15, -126, 1, 33, 21, -32, -37, -70, 113, -60, -125, -37, 67, -49, -80, 53, -28, -86, -52, -20, 32, 82};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NQNQYLKDQHDOCLYISMUKSROATFACNRANOHBYFXIYGCPCLYEBPJOXOWOIVWJVULABIIWDTWHWCBEAMKRVYERVODYTGTFZSMXMPEWKGJOSPKZVQJMEKBYRKBPEZETQBADCMKZGJOZHJKFVNITVUPYXINRFIDTJMPNUAOJXHX");
    tmp_msg_1.plan_size = 4555U;
    tmp_msg_1.change_time = 0.061376592873102376;
    tmp_msg_1.change_sid = 18202U;
    tmp_msg_1.change_sname.assign("ALJRGFEEURSLEADMTFIVABWCJ");
    const char tmp_tmp_msg_1_0[] = {37, 108, -34, 2, -65, 105, -60, 10, -114, -78, -29, 52, 31, -110, 14, 15, 75, -45, -89, 62, -117, 35, -71, -67, -27, 47, 27, -119, -116, 114, -3, -39, 41, -53, -80, -123, 100, -89, 44, -45, 104, 68, 106, -109, -15, -46, -105, -82, -63, -96, 105, 34, -23, 79, 66, -117, 103, -85, 74, 100, 91, -26, -125, -102, -26, 102, -47, -100, 6, 117, 78, 100, 103, 0, -112, 16, 49, 47, 117, 79, 96, 47, 12, 6, -118, 14, 55, 89, -66, -97, -13, 12, -6, -33, 107, 69, -85, -29, 7, -2, 81, 85, -12, 115, -6, -51, 47, -49, 14, 62, 0, 117, -87, -110, -119, 70, 66, -111, -45, -52, -75, -72, 29, -58, 71, -21, 15, 17, 82, 89, -11, -72, -87, -40, -71, -78, 112, -109, -108, 17, -72, 109, 19, 65, 33, 95, 124, 89, -95, -14, -24, -86, 10, 78, 100, -99, -125};
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
    msg.setTimeStamp(0.8266778570823656);
    msg.setSource(42712U);
    msg.setSourceEntity(75U);
    msg.setDestination(54177U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("GSXLCRONLOENZCXXSDPBDMVCQGJLRSPGVRANRGXFYVAQDEEQEVIZIWXRDSUJUKSLBKRCWMOYZEUTVGTY");
    msg.plan_size = 2249U;
    msg.change_time = 0.449605929395006;
    msg.change_sid = 24912U;
    msg.change_sname.assign("ENZJFZROQGDTJCYMSRTINXZGVGNAOHAXTMQWIIWYNVOABLAGVHWNDESCIRSPWNFCXLFVUTDGQJMWODUIFKVAURCGLWBIIQBMULOYYPNAXHRBMDDNHDKZKEDBXUEQCSWZHCKTVHLYOFVUTWBYBESQRWMEHSJAPJXVPPUPKRGXONKBMDLJSYJVCCIWLKPQRSHKCHOAKGPVOZJURLMTYPJTSFUDCNELXZOGBYASZJAHXUF");
    const char tmp_msg_0[] = {13, 43, -7, 1, 120, -53, -108, 108, -92, -35, 14, -118, -100, -119, -32, -2, 75, -89, -29, 11, -11, -88, 116, 56, -106, 100, 17, 53, 7, -57, 91, 25, 59, 16, 55, -44, -21, -1, -64, -111, 3, 72, -104, -110, 117, 123, 96, -97, 107, 70, -104, 39, 79, 69, -100, 111, -55, 41, 99, -54, 20, 49, 50, 59, -82, -18, -89, -1, -10, -118, 72, -103, 62, 71, -68, -73, -67, -67, -86, -72, 62, -121, -80, 97, -57, -32, 9, 72, 37, 104, -78, 88, 74, -100, 106, -41, -26, 47, 106, 91, -84, 91, -86, 33, -82, 126, 32, -114, -56, -64, 111, -105, -75, 56, 58, 16, 116, -114, 90, 51, 94, 87, -73, -10, 27, 73, 1, 58, -22, 109, -24, 126, 16, 27, -59, -78, -12, -117, -67, -10, -122, -30, 44, -72, -28, 65, 107, 120, 95, 117, 35, 41, 57, 112, 80, -115, -120, 37, 21, 31, -108, 120, -31, 99, 90, 52, -17, 12, 40, -35, 77, 95, 71, -70, 21, -98, -25, -108, -60, 73, -40, -51, -59, 38, -11, 7, -32, -29, 28, -26, 4, -4, -65, 33, -21, -105, -100};
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
    msg.setTimeStamp(0.24825041694844185);
    msg.setSource(20971U);
    msg.setSourceEntity(3U);
    msg.setDestination(43917U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("NQXMTBRARSINUHSATZILZVARBRXQLUKIGBJVKSYEGBSUJWLXONTKMQBWLPNTXXDKEMVDHEHKYQFFDRUOLGYWCHCPWFQCHEKULKMISVXOZUJQHWOIJQXLVOJAMNYLWMZUZWSCEBJEWODZLRCU");
    msg.plan_size = 4369U;
    msg.change_time = 0.5193839785408373;
    msg.change_sid = 58901U;
    msg.change_sname.assign("ZXOYPEPVGJXBWOOKWURWPFKDITJYUOWTIELVANVKUTHFEAGCRRESTNYHDVTQXAZPADYJDYNFTGTPFKIXRYWJLAHIYEPPZRHCXCTDMMOHHGGVZKSNXQMQAMEMLMQXDSAIEEIYCJWQXBUJBGXWUQLMCEKBOYRIRSFWQNZZKQBDVNBMHKBICFO");
    const char tmp_msg_0[] = {-67, -67, 72, -78, -67, 7, -3, -53, -113, 95, -46, 113, -60, 65};
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
    msg.setTimeStamp(0.08842163209938536);
    msg.setSource(23235U);
    msg.setSourceEntity(139U);
    msg.setDestination(44497U);
    msg.setDestinationEntity(169U);
    msg.plan_id.assign("RTFHEEVZGIYTIZVBTLUJYDMGYOEZCJAEAYJHGRQSHMFLFTZIYTXIYVPGSAJWVYKUHYBHMRXCNPS");
    msg.plan_size = 12563U;
    msg.change_time = 0.11904915920560233;
    msg.change_sid = 6799U;
    msg.change_sname.assign("FMDNINECXYPUOEMBRZREMYUNHGTLBDCBWDDWLPXOUADZOKSUILRWBXKXQAPCUBTQHNMEAIJOHKJXDBRQJWHOKAHVQYIKVJGKFFNCI");
    const char tmp_msg_0[] = {70, -45, 74, 38, -128, 10, 125, -12, -79, -58, -67, 8, -99, -44, -119, 123, -72, 40, -4, -6, -2, -108, -60, 31, 88, -50, 56, -60, 110, 101, 105, -53, 108, -119, 65, -18, -49, -38, -117, -20, 52, 107, 92, 27, -79, 103, 95, 36, -6, -65, 30, 114, -20, -55, 47, 94, 116, -53, -28, 67, -72, 24, 43, -108, -63, 105, 8, 83, 28, -88, 61, 37, 94, -110, 122, 93, 65, 101, 25, 62, -67, -102, -62, 108, -98, 16, 94, -22, 29, 55, 112, 94, 9, 11, -61, -26, -125, -41, -91, -53, -112, -6, 123, 43, 14, -103, 122, -114, 70, 56, -3, -76, -114, -70, 11, 24, 25, 36, -117, -116, -60, -57, -36, 98, 52, -49, 61, -33, 83, -40, -74, 68, -113, -85, -51, 60, 81, -49, 93, -37, -16, 4, 13, 60, -111, 112, 51, -44, 66, 115, 17, -40, -73, 72, -18, -44, 120, 97, 27, -36, -107, -117, 44, -116, 85, 92, 40, 100};
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
    msg.setTimeStamp(0.9363686107961391);
    msg.setSource(21460U);
    msg.setSourceEntity(245U);
    msg.setDestination(50422U);
    msg.setDestinationEntity(105U);
    msg.type = 136U;
    msg.op = 145U;
    msg.request_id = 600U;
    msg.plan_id.assign("NOJEBIIHBBFNXAP");
    msg.flags = 63801U;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("EAKFATFHVXUMDEKSLIANZGDNTXPDPGFXJ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("TTROPYCVZLLBDYWKLYQECLXLPJFGNHDQAEAIZR");
    tmp_tmp_msg_0_0.predicate.assign("ULYJMSQVMVLYRWYZLJNGVXTKOSFTVJTYNXPDXQNFFLICLFBLVEOQWEHWKUUXPOXVYNTKTESZSALJWPGGPIDBMOWEQBCMERDTHOEAMIZQOOUERMNBOAWZMGQHZJIHDSZBKNVKGHRRQTQVKHPHXKJIDIPCCYGHCASVPINZMPCCEBYHGUWTFHRARDZXFABLUOBX");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("WGXPQLCZJSHPIOQGMMASZSIOEKPRPTBROSZCODUTWWYHNXNIJAZRSJUBSNDXGVCLSNYEFWEVWFIFYRAKIZQMGRLNZGVBXHTQTUJCZAGXRMEYKARKUAMMTQUQAOQLNJHFRIVWVVCHNTBYXXCADAIJVOCGPLLXYBTDKVQMGMJIJSCQKXHCRJPTBZODDKDSOWLHEYNNEDUYEELPBUMJYKXHDQRFVFUHZKOBFHDGFIEFTMFTCZWBPLPWOU");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 250U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("MYNORAYKACSFWACRNLLVJWIVCEVTNWDUZRLNKMALHVAIESVYDLGCWBDSONBFDZQXLEIDYFZIBLFOCDBIJIZYUECGVGJXPJHNYTWSVSHTSEWKRUCSNEOJXXRXFCXHYPFQJBPBIAUKWJGIMAQBTKJTMFSMROPPQDPGTXKHKRGTQAMOLBZYYUXTZZXGSHMZPQWDHNEWQNOMCBRUWNVJZMAROKGJO");
    tmp_tmp_tmp_msg_0_0_0.max.assign("FXUAQEEWBPDHLBEZBUKRTLLGRAQCKZSRLJMQCDNBMJPXYEBUJRJHVSEYVYDIOAWQFAZZVMFZPWCWFOGACBVNKSGPOKXEKW");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YAXOHFCEHRHUENSJPKAKUYJRWISVZPXENMYTTDYMCLNLZUDAAICFROGSAUKG");

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
    msg.setTimeStamp(0.42535044122829835);
    msg.setSource(65371U);
    msg.setSourceEntity(190U);
    msg.setDestination(53586U);
    msg.setDestinationEntity(82U);
    msg.type = 114U;
    msg.op = 94U;
    msg.request_id = 42208U;
    msg.plan_id.assign("FYKTNGSVTIDIMHAKHGQCGFAWTNYHRPK");
    msg.flags = 24937U;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.8599218641138111;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YEVVWXDHXJHJFDUFLBZOGQIPATBBJZNTBINMZCGKVUFNDATRMFXLPSCOEVHDPGEWLSAQJBLINFZOHPXHLYUCXYKZUEWQBEOMNOVMKOTUSANSMIYWETIDPHLQJUQHLFSWVVIETHAWTMNQXNSSTXOKRJCMKBHYQZRKKTCDPIB");

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
    msg.setTimeStamp(0.048557874434545734);
    msg.setSource(65341U);
    msg.setSourceEntity(167U);
    msg.setDestination(9509U);
    msg.setDestinationEntity(58U);
    msg.type = 151U;
    msg.op = 70U;
    msg.request_id = 34840U;
    msg.plan_id.assign("HZVADDOBEEGQLFCXSIDVECMQMTKTFJMCMTAKLHTX");
    msg.flags = 9795U;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 194U;
    tmp_msg_0.frag_number = 156U;
    tmp_msg_0.num_frags = 134U;
    const char tmp_tmp_msg_0_0[] = {-103, 94, 56, 43, 12, 52, 14, -57, -24, -38, -114, -66, -120, 28};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PXBHFIAGCDEHPWRTBYJVNBLWDDOQUALKEQWBKXHUJAUSUNQPJPFKJXNLTMKSOKSNCVIIVJHYXURBOCSDTXLFOYKSBTMRHPPFXDLESMSNVWQIWZEOVOCYREMFGOEDIEHKMIUDDGRGGJWQVYQYAC");

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
    msg.setTimeStamp(0.41988158270498044);
    msg.setSource(42843U);
    msg.setSourceEntity(59U);
    msg.setDestination(8300U);
    msg.setDestinationEntity(156U);
    msg.state = 204U;
    msg.plan_id.assign("ZTVYIBQWGSYFNYDTBRYAQHUDFDFGIQNRDNRRKJJNZIVFKOXWEEWAHVLENIUWGEALGIARPTEAKELICZLYUSCHBTXAOJFMBKTTNGXZPSMORGROFPVMTABPVJZSOJDYMWAVSWJRZYVHXCHOHSZPZJMBSUGMORQUBVTNPUUECNNDMFGPELIDDQLNKLCXBCHQPLZJXWLKIXUJMPBXEYVXSTSK");
    msg.plan_eta = -744435691;
    msg.plan_progress = 0.44752033364154875;
    msg.man_id.assign("RYKUWYPPHTUQDANBWHMQXCDVFGNRAEXZRFKCYJSPEXJNGIDYSDFHRLBAWBGKENWLPENETPXJHXNOZBMOTBDUZHKTCSJENOIUIBGVYAFHDNMRODGPDWTLSYIRVVGJCJMQVSHVODSBBOMLGKZJWUIQSQZO");
    msg.man_type = 65187U;
    msg.man_eta = 1925040901;
    msg.last_outcome = 85U;

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
    msg.setTimeStamp(0.9880514689160149);
    msg.setSource(57675U);
    msg.setSourceEntity(134U);
    msg.setDestination(21632U);
    msg.setDestinationEntity(75U);
    msg.state = 5U;
    msg.plan_id.assign("ETTNZKZMHNJZLUEROZYSVUJCSNQWSBNSIDSVTFDHFTWFVRXLEUIKZAHMDMMEWRBJQMGDLWPAXHSYBLBHMBITEFMVKUXDGLYDQRVGTPVLUUBFROHTJORALDZCPFRKKCNUHXIKWIGTCQETILWEOBXOWOISPGPKQ");
    msg.plan_eta = 770464274;
    msg.plan_progress = 0.13377101302976724;
    msg.man_id.assign("OVCUBKIATNGFNCGDUEIBHDVQHISFFXGPFOLQHFJXMEZNVXWRXYQHQKBCYQQENTYLXJDZMOIMKQVAPRHPICKKWTLXBVQMKWMJGILPNODSBRWPSDZYBVAVHKISAGE");
    msg.man_type = 40862U;
    msg.man_eta = -835215256;
    msg.last_outcome = 77U;

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
    msg.setTimeStamp(0.3514550969568906);
    msg.setSource(61863U);
    msg.setSourceEntity(194U);
    msg.setDestination(39677U);
    msg.setDestinationEntity(46U);
    msg.state = 121U;
    msg.plan_id.assign("GGZHOGWWVQZLPUMPMESIYZQORMWVLXLDSJSCUCVFVEQWTAJRLWLIDKXTCZZINYYGFQIOEFKRDBDCBYQCKXZDQPEPKHNVYMAZKFIRICEERSIWARJAQCXMUQFPWEMRJUTUBNRQUPJALDDAHYSABTNTHENOHLZJZRSCYNGOU");
    msg.plan_eta = -1014664183;
    msg.plan_progress = 0.5501941952939955;
    msg.man_id.assign("NWKJLFOQSTFJLGWNTAQRPTQYBCPSVWCKMVYRSVNUFRGJOYSMQXVLCAIZJQWSJWZRBASYFQXOKHGGKOIYNIPROZYZUMJXJRZVBTUAIADXMTHTNNCCITNTTKIAVVVMECAZSTHKIOHGPUUHMCBQJUSELKLDKWHUEQZG");
    msg.man_type = 18060U;
    msg.man_eta = 737396000;
    msg.last_outcome = 32U;

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
    msg.setTimeStamp(0.9742371623728984);
    msg.setSource(13489U);
    msg.setSourceEntity(153U);
    msg.setDestination(22186U);
    msg.setDestinationEntity(234U);
    msg.name.assign("LURNSHEJPARWMDYICNHJAFQUQOBHRPVZFUCZZSWWFQSTBKUYMLFSCMOFTIOZA");
    msg.value.assign("YQQFFWBBZAKPKJEHRADOAIMYKCHUIRPJONDWUXUFKVEZTHYBXPOAGLUNBRISMOQBBFLDVXRNFCQLIBGKOJTMTHZHCSWBMGXAGXYAIYNWVUWCRDORJHMXELTTUCWSYJNJFLCHGMOKHVXGVLQQPTNETWAPGJCVFEHSDPIECPCUZVZZGAHXOSIEM");
    msg.type = 10U;
    msg.access = 156U;

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
    msg.setTimeStamp(0.9135877116940968);
    msg.setSource(41973U);
    msg.setSourceEntity(65U);
    msg.setDestination(2925U);
    msg.setDestinationEntity(5U);
    msg.name.assign("JQFNULQRONVRPLZCZLZHBMYZBUTKMTSIKGISFPSYDFVNWCBVFRHGIXEMVZAIOHYEYKJCSDOSDPBXRHJUOGOPKKBXDMWCGWDTHEJZQJACNVIMVEQYQCQYSKSQIBUTRAUEFLLBGAFAIFXSOKNATNULAIOJDGEPPTKMDYCYPNRUTISEXOQGCEAGXXNOQHDASWXRHKMXVRFUJNVLCLZMWARWWVEFKTZDMRPWFHZGBJB");
    msg.value.assign("SFLJVOFTXLCYHDDOYELUGEPOUICFLVRYBCWLMMPXRLRTQDKEEEJANVQSFLDORTZGTBPNYLCZUIDHKBCVHJUXQNAYWHXJATSTOHDGXIVAGWFLUIJRHSDEAQXWOZRYKEZSMWTVUZQNJANTVUVMQRWRVZSYMOFKGKGDFKZHEMABHJBSPQDCJUIFQMSFHOOWBVKKJSRIGFXWEAXG");
    msg.type = 46U;
    msg.access = 23U;

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
    msg.setTimeStamp(0.7191424758459338);
    msg.setSource(52387U);
    msg.setSourceEntity(230U);
    msg.setDestination(17822U);
    msg.setDestinationEntity(198U);
    msg.name.assign("IQKXVASZFYUUYMJKJKTNJREFVCWHPIBODSAEUJLZVABONWFEZTAHTBIDIAGQKLJHNAHQWOULFGCYUVKFXYXAZJPJSLZCEMZIANISTLFSECLROTPPDHGHXQGZJRPTURHTFNTDQWXHXDVSQXQSBOENYGGEGDSREPWPXDKMQNMDEXWFGQTPAOBUKQFZYOVCVVOOBJCFIJLEOKYSRDRHBLWBCYXGMSGMRCRLVMWTMYCHZNMNIZLCUIUVBK");
    msg.value.assign("UDKMFKWFOYUVLGUNXYVFPLVASTOEGWHKHTNWAEKGIOYRJDUSYQHQRMJUZRAKILWDCDDBVPENQPPLAGGLRHWSQAJMEYLLBBQCNCUJZU");
    msg.type = 179U;
    msg.access = 201U;

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
    msg.setTimeStamp(0.5224022497924795);
    msg.setSource(59772U);
    msg.setSourceEntity(228U);
    msg.setDestination(760U);
    msg.setDestinationEntity(159U);
    msg.cmd = 142U;
    msg.op = 235U;
    msg.plan_id.assign("GZGCMNWRVKINNYWAAOTYNYXWHKRKUBDCAQMNPOOBSDOGLAHJZXKWUJMMBLCXJVKWUJSIXIIRCQSECIWKGBEUFIUSKDRNOQBAXOFTAHYQMJFT");
    msg.params.assign("TWKPYNTRZSSDXASWOOSZHGBAUZKZPCQRQZMRVME");

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
    msg.setTimeStamp(0.2704199130276197);
    msg.setSource(23683U);
    msg.setSourceEntity(49U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(113U);
    msg.cmd = 94U;
    msg.op = 191U;
    msg.plan_id.assign("IRCLUZDHFZUZFVBUOAKLKDXIETWBIATHCQCKYZTBGRYWNWTSANOPQBAEPPXOERTIYSQALWMSJQFLSDIENHVGIXOSXPSGBROVDRZYMUQNMYZUFKKWCTCNHYCBEFHWPPS");
    msg.params.assign("IATAZJCRFFXTVUEIREBVFTUNWALEQNYXVKITIOXIBSLQGTNPWARQCYHXRUFINDVPMYASCQXQSWVOQEMXPBWSLCLMGSJKKQHBOSRWGVFCEZXDWZMOSUKNWPTDPCWRMNOOTUQYENOYCYFGEJLIBUWJBTQHISHPHFPZACMYEKFPHHQSGGZBZHGYEABSUWVLJVFFUZDZJDNTRMCLOYUDKBEXGXYDDVPKT");

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
    msg.setTimeStamp(0.9671044855300436);
    msg.setSource(35487U);
    msg.setSourceEntity(245U);
    msg.setDestination(48347U);
    msg.setDestinationEntity(220U);
    msg.cmd = 97U;
    msg.op = 247U;
    msg.plan_id.assign("WCIYPBFZIHQFAJXGTFYHINJBAQZYHJSKGRQDJYRJTABSGCJUTEYYKHMRQEAGBHSCWDPTBWTLHTZXEYVXKGUMJXMNEOXUROAVCFMQPDPXTHOVCVNITVLMVIVULUQMKRDWBLZRRAAXBGMOEESQRDOXDAIOPANJHYWKISBNBHLRPFQFTNKLVHMVUULDWEPCOKGWXWQLASZZQFODNEWSNCDZMZBSJR");
    msg.params.assign("PAFWVKJQTRHPCHTOEAYDGIHKUWSVBFTDMEKIJMZAYZWRSEVLPXBHCQHHEJKNFOZPXKVJXFEEAC");

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
    msg.setTimeStamp(0.7393222175230323);
    msg.setSource(64924U);
    msg.setSourceEntity(26U);
    msg.setDestination(21480U);
    msg.setDestinationEntity(246U);
    msg.group_name.assign("UEXMWAHYZECYSYBPUOWUQHIUEJDDRDLGLGJKAUYHQFCTLPQVZNCRBPOOIARMFPPBLHGKZPQENDTVXNDJCSEMWXIKHQNJWLJS");
    msg.op = 78U;
    msg.lat = 0.09032706741469343;
    msg.lon = 0.6467765405546165;
    msg.height = 0.4746814773620881;
    msg.x = 0.92106279651617;
    msg.y = 0.47942280420902084;
    msg.z = 0.761991650596835;
    msg.phi = 0.5177006115374306;
    msg.theta = 0.4593604595696861;
    msg.psi = 0.289573519087717;
    msg.vx = 0.9086763185341389;
    msg.vy = 0.718232192374505;
    msg.vz = 0.7016291293607815;
    msg.p = 0.23023891570282484;
    msg.q = 0.8925785671591989;
    msg.r = 0.6364168246089605;
    msg.svx = 0.9436312953238235;
    msg.svy = 0.014963039725873872;
    msg.svz = 0.6467103031839837;

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
    msg.setTimeStamp(0.22827663083521643);
    msg.setSource(24937U);
    msg.setSourceEntity(63U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("NXSSJBELPUZWKAGQTQOUBMADT");
    msg.op = 140U;
    msg.lat = 0.05259192917253663;
    msg.lon = 0.24289754122221463;
    msg.height = 0.9922646116368317;
    msg.x = 0.10561240771277225;
    msg.y = 0.11378440100989495;
    msg.z = 0.3641492835788618;
    msg.phi = 0.715374562872974;
    msg.theta = 0.06315272374635073;
    msg.psi = 0.07873766170723051;
    msg.vx = 0.2783729342316622;
    msg.vy = 0.7311571208068051;
    msg.vz = 0.3659596056300878;
    msg.p = 0.1489965951777148;
    msg.q = 0.41158033584466014;
    msg.r = 0.345147493318799;
    msg.svx = 0.802469048274011;
    msg.svy = 0.06400208051533618;
    msg.svz = 0.081351640369828;

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
    msg.setTimeStamp(0.7865859022300535);
    msg.setSource(16069U);
    msg.setSourceEntity(55U);
    msg.setDestination(55589U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("UPQIBQTSGOSTQGOAYDVQIXDYUBJTKLFYHSOJUKFTIKAPMFWTODQVZKGENVIDUTNZUABQRNSESZNNNHHHPJRMJXWOJCKCFKMQFIGDCHHTWERHGVPPLXRZHOEMBDRZNHPTCOQPVPAVLWETEAJHFCUAEWFBCWYCUCDIVDVURYNLKPGSJKXJXYYLCGEOLRWATDXLYGJOIWFMVGIYABRWMRGVB");
    msg.op = 194U;
    msg.lat = 0.6623015237023343;
    msg.lon = 0.3404685228891393;
    msg.height = 0.3080790399163028;
    msg.x = 0.3473614614255245;
    msg.y = 0.8232764577561755;
    msg.z = 0.2318440733498488;
    msg.phi = 0.12484583285804518;
    msg.theta = 0.8898262977486036;
    msg.psi = 0.8423655346940625;
    msg.vx = 0.639310474275273;
    msg.vy = 0.2511974329312151;
    msg.vz = 0.14021457032680373;
    msg.p = 0.5162153340002577;
    msg.q = 0.9793981267306541;
    msg.r = 0.024985822902602095;
    msg.svx = 0.8058182804815919;
    msg.svy = 0.9476654900548945;
    msg.svz = 0.3191567529810877;

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
    msg.setTimeStamp(0.5572333001480626);
    msg.setSource(61121U);
    msg.setSourceEntity(244U);
    msg.setDestination(23333U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("MHBFSQDEHRYBWDPOKFVGQZNUGMQFWOQCSTODAUNHNINEJDVBYHLIZLJEZGQIYQEEPJTKSSSOHYYBGFFLHXMPRQVWPGVUMBSVIZRFJBSCWJUXLZRSJJWOWYYLMOBOUQDIZQWKNARKUCRXEGAKGUYXAGFXKEZPXRZKPTDCNUPVWTNBKIFHYSJVUJLODZKTXATFKVCOTSHRHBCWAMHGVNELBJPADILNCILFXAEMTCVYTXXM");
    msg.type = 36U;
    msg.properties = 193U;
    msg.durations.assign("CZAMWZPRLJYKTGANVESHVEGUVCUCSJDYDRZWKARPRLTWIUKGQMFLLEPXEVIOVPPCVUDGGOETFBFBKFYPJBQNJDEGQRBSUDXGCWXWUFGAPJIINHOKFXIHJCBXLFGHBHSNZVSYSOHELTKREJQHSITTBSNTOQSOZBOPTYUXXWLNYLMNYAYVUZTMFQWZAQZJNDUAMKKRWQAAYIXHAIHEDCOQPWMKGJNWUKFVJM");
    msg.distances.assign("VYVNOUPXDVNBXLSLOWZLEVXGNHZIQOMFOCIFXKWNGPYBLAFTRLCVBELLRFIPSBKQCNYA");
    msg.actions.assign("YQOTEAUIMHVXRGZWXVPSMUDDCQGGXQNQFKSIFXBDDIONPHETFPLATTAAMPWGWXWCVJSDWIGFUEZNFJRYZOLLHCYLNFVIQDMYLJJBLCKSGNPGZERNSPKHEBVWZJWKJSRUVVGQXHERCZQFMUUNXMLTOYJGXAKRTBWBHNZIEIYQXKCOUTKOOPKOSPAAOHEXPHCCWDCITTFRAIDYGABSOMPTIFMMCQFJYZNKDVYSJDBVQMSKYJRBWHUUZNRRHE");
    msg.fuel.assign("ELUETIJGZXGATTBDHQPIYOLZWTPOFCZVANXYYKNRWSZIWZBOWNHBQMZNIQSXQSVBJHKKBOMSICXIDTULTYALG");

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
    msg.setTimeStamp(0.081497235585972);
    msg.setSource(6030U);
    msg.setSourceEntity(78U);
    msg.setDestination(34523U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("JQAYJSDDALWQJUQUNAOQEGFXFSZTFZIIUIOBBAXKRXKLPVMEQHSKRTAUDNRGDMEWMYLEGUPHMOWKJPHZTDDGYVOVSQYSQLJIRQBJFBSOIYMRWPHNMNYQOBTEAGCEQGWVDFTGZWUXNNYKJIOVZRILVXPIKUTJHKXAWVDOMSKAHYRHJTNGXYZVVYXHRULBWCCZIBMMEDNAWFPTHRCHTUCCJL");
    msg.type = 171U;
    msg.properties = 81U;
    msg.durations.assign("CGUVYBQONHXXKQNEJTVVHBZGJAXKJYZQQEWUZUDCKLZ");
    msg.distances.assign("QLBMWXJMSALMRJZGSEGGXMECJFQRNMPCINUBJQWXCLIHOCDQZPPEKQKSPWZLKGTZKEAFAZULDEHRSS");
    msg.actions.assign("JACCIWMUKYTPWRYYMTWVLGHEUEKTIQTMWMSUUNZYYJKSCZSPRXOQSAYCNLZFWZTHSUWSASRXNVJMGBSTQDQGFFKEVVPHCTAERWDBWEPABPXHCGXCDITGKFARLUKIHLJUKOFZKRTGIBVOJJZQINSQPDXEHHMFXILDLYSIZNTPGOCRLBGERZOPJVFJKWAHJDLXKLPIMGABYMAYNEXUJMFUNNOBDZMOVEDXHQVAZYRGQLBVFPIDWVOCUNERHCBXB");
    msg.fuel.assign("PYHHDKHYCONDDZYQQDJUYKZYRNXEVQXJSWCQOLLWIXQPSVHRSPBTQPTNJYRXSGVTZELWPOFFPTGZCLYEHEMFNMHCDIYULVASKFMQ");

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
    msg.setTimeStamp(0.6873219088663158);
    msg.setSource(24332U);
    msg.setSourceEntity(62U);
    msg.setDestination(13992U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("XHCAPTRBXSTBVMXRSPAUUUNGXMCSUCWOADAMLLIBHERGCDPPDQOPIFVCEMGAYXY");
    msg.type = 47U;
    msg.properties = 32U;
    msg.durations.assign("OTJTVXQSXRJGUXREEXVQNJLYIHDLMKQIFRDPYUFJAZKPBCNINKNAELMWGHKHBNDNAIEHZMGMBRFPLCOV");
    msg.distances.assign("GICDKESVMGXJTTOADVXSLTIXNBPQTWOHFPMRGYBYGHVXSIZNROUXKQUAIPPUAAJEUGWZZQPZSXHMGHYHLJOCCDCEVRSIUZWRBUBBRWKGWNYMNBQCIWYOKYCLRWTJDKTSMCQBVJCTITKUQJIVVQENOVIARYQVYRKHDFWOJMOYRSGVIJPMOZKCFNXFZFLWYSXLKSZPPAABEFNMDEENHFSMBHDMTJDFNEDUEGXJHWGNHAPALULLQZPL");
    msg.actions.assign("CGPKYAJIXIRUAUHOTEHKOOEGYWWUZQIAMXQDCHHNQAVOLPLGGPLDPNDSMOB");
    msg.fuel.assign("JURDLECNOAXQZNNBWGFUHWMJNVPYKLLHPHCXGYYQOAUVRI");

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
    msg.setTimeStamp(0.7390393040607388);
    msg.setSource(36908U);
    msg.setSourceEntity(61U);
    msg.setDestination(7886U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.0028860531280233692;
    msg.lon = 0.7931310168149701;
    msg.depth = 0.08734003653044042;
    msg.roll = 0.9704262306255065;
    msg.pitch = 0.9224437809610095;
    msg.yaw = 0.3298504233945856;
    msg.rcp_time = 0.6350463196818421;
    msg.sid.assign("PTMJBCQUROFCIKXIAVFPIMEWBFBTUWTCMOXVDYZILFXZJKWONNYEIJKGWGYBRWBQNCRTSVDADHIXUVLVKSUETXIRFSVSNRJWBHJKKGV");
    msg.s_type = 82U;

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
    msg.setTimeStamp(0.8589044677899744);
    msg.setSource(44779U);
    msg.setSourceEntity(5U);
    msg.setDestination(19942U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.10825786427259743;
    msg.lon = 0.36892257652508986;
    msg.depth = 0.2823909710610406;
    msg.roll = 0.18862045316853926;
    msg.pitch = 0.26550970704104027;
    msg.yaw = 0.6821412371353064;
    msg.rcp_time = 0.7503506869320568;
    msg.sid.assign("QWHAQMBKGBVGZWJTTXUNYAUEGLRXANPVWFHONYJFZRHEFMPXOZNVHQLLSBUNPNYLQMVFUBGKMKAYALIBQEOGSEFBILJQKZKGSRVYIJAQCOXUNDPHRFCVSJDNZOTDRKIAPVTLCHGYAMCKGXWULIHWJUDDTPLBERMKQRXDDGPXFSTNXEIUVQIYCDYFETZOPH");
    msg.s_type = 38U;

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
    msg.setTimeStamp(0.32018628570768315);
    msg.setSource(42833U);
    msg.setSourceEntity(227U);
    msg.setDestination(56862U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.011661544098404475;
    msg.lon = 0.6665971052746105;
    msg.depth = 0.4522548447670526;
    msg.roll = 0.020120466500011647;
    msg.pitch = 0.3115449402065339;
    msg.yaw = 0.2575073514111057;
    msg.rcp_time = 0.376943238760423;
    msg.sid.assign("OQKBKVDNVMWHYUCJRMVYUXIPQDPWLTSUYHQMLDZQLSXZJIKXRJHRCRVMILZGJJKHDZANZAYCOJHMGTEPGTERDFTDDTUVQKULADBZGVNFWAURIPQOUPJVEJCSWFECKWJBIVMNWFZHEWOETCMXCPTRLILGDOOZISYNHNLVHGBWRYYXGSAZOXGK");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.1996052614992696);
    msg.setSource(58301U);
    msg.setSourceEntity(147U);
    msg.setDestination(15458U);
    msg.setDestinationEntity(88U);
    msg.id.assign("GYTXRGVKFSIKKYKNUWWGHHNHDFPNSJOMBKULBXLJAOXRHDMVAWUEFAEOETZYNVQZQJPCJYVDPAUSPRRWOWARVTHVJGBMQNXDEGXMHLFUZXELQTURGRPQJBQQBDGCMEVJBIOYNYXLUJOCKHISLZAIFTFZXBSWMMGLSOZPSWD");
    msg.sensor_class.assign("UZSDDBXPRGEQSPLUVFCKCDNFGYZCOQHIBJFAOCYAIVOABYFUPUDLANHBJENJZBBIIRQVGNRRBKXGJFCYCGPZGPQTNJDXWEWMQUMSRMPLRZNBIOJMLKNSLKVLWGTMOGLZPOWWKCOVVQVLVPTCTOZSFMYMADGFAGHETIIOVQXSWHSWIWEBEALYQXKWDXQDHRHUEERWMIZTRDYRHXCJJPHUHPSKYUJNTNHAFZMTFS");
    msg.lat = 0.9295734901370039;
    msg.lon = 0.099789681529033;
    msg.alt = 0.723162270955515;
    msg.heading = 0.9112809661169944;
    msg.data.assign("LKUJJWFVTAHQFYUGZAMARGJPEOGMIZADZSOZAXPMNSFDNBRYPUPBNWZXVWPBWBLKQFHLHJYVEIXIEZGTNELUTMQHJCYPXRKWUZKSMONTONWULYQDLVDSUJLPGGCXGKISXBJVBLASQZWTFKJUWPCNDWPOTMVRDNHVIXFYCDMFDRTONJBEHRIPVQHEKMODB");

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
    msg.setTimeStamp(0.7451492600951078);
    msg.setSource(57905U);
    msg.setSourceEntity(52U);
    msg.setDestination(53216U);
    msg.setDestinationEntity(249U);
    msg.id.assign("GQZAIIGIDUSSIGHPYMBBQVGQLBUUBRTZXJZYASHQDXLUKMEYYHJMIGPGGQSRDLXIOLLQAJGYTCZEHWOFJOQKNECIMFMSROCJUYAWQVPJTKXFESXMVWLWOCDIJST");
    msg.sensor_class.assign("XTZBVKJZOYROMNLAGBNGQVXFDMLXBHDPIGTHNDTLSOYHUKJYDAQUFQEHQTODLGIRHGFCXYCFUAJJEDKKMCKVKXSSEYWZBPAKHBHCSAHIYLMPCJRZMMYVWQDBZAIGJFSSUDQVVSDZSOJXXWWIPVTPFEBVYTLEWPPIRXZZSUEVQI");
    msg.lat = 0.30206924964340875;
    msg.lon = 0.5145205682567361;
    msg.alt = 0.5543334060030025;
    msg.heading = 0.6646502135067466;
    msg.data.assign("HLYFCBWMJIBRTYQVXKFXXRVBAZFRGVSOIPWXVSEPLHOKDRCVZFUZEEPQKHPARGPKNFVSINJCLBRLDKRJWQJCDBAJWZOADSWTICBSUWGLTNGMMFMFIWHSAMIHTATPPZELUZRKNSYODCHUJEVGYAXEQEWMKCSKLWUMCGAEEZYDYDMAFQHMIEHOQZFUBVUDUTTCBOOQTIWOOTCGAINNNQFPUNQORDLJNHZUBJSSTGYPPRLN");

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
    msg.setTimeStamp(0.38913367076784544);
    msg.setSource(1143U);
    msg.setSourceEntity(95U);
    msg.setDestination(59523U);
    msg.setDestinationEntity(198U);
    msg.id.assign("BHCFFTXKLXJTOUHYWRNPEJDSHPYVGFKAPSNRFYDBZTKFZSWMXPBNUWMQCVOEAPBECPYUOONBHUKBZMZXQIZGSECVWMRZPKTAGVVYFYCXBFLCEJSKUTVTERUUIWQQJMRUNWJKDOSXSEXYVWLGHNBKIJYLWMVPIJIORTDLGCSENHXLAMIWODFCRECKBQZALDLMPYGDPZYISNHTJOKFBQTHRAHAIONMF");
    msg.sensor_class.assign("MTHOLSGJJXGDBKNGZUEALQFVPYFDLPWYSICQHFJJBVBUKXOFMIEUHGDNSHDQHWROPILXGBTEXZVJTHTEWUHDBHSEPYBJZMWWOSKXHYCXZXONDIBBXQE");
    msg.lat = 0.777674602303021;
    msg.lon = 0.8218148334569695;
    msg.alt = 0.6053260678237513;
    msg.heading = 0.661368728699011;
    msg.data.assign("BTTEFSHJESNCWMZDXKJOSVBDXLJXKPPAVKIJZVNNJFKHOEHTEGBFFLORLRUZCIIUSIXYZOOVTRWRXIQKFCIAMSXCLQZVYCJWGZBTDAQNYYABYBDELJXHWTNMEMPFWVLRUCLPUQZGAX");

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
    msg.setTimeStamp(0.6893731349809692);
    msg.setSource(8140U);
    msg.setSourceEntity(190U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(76U);
    msg.id.assign("LWMJAKLPTBFCQJHFSQCWARNXAWTSLYAGCDSJXLEAAWCBBKLOMCHJXOHRTMLFDGZEXJKKJKCITKDXLEJUEFSFIMEHUPVOGUINTINZPYOQAZXROMEYFHZNYFGSKKXGCSVVHVDTBTBVQZGVFJAOYAXBRXYLDPYQDBPCTSCVLOSE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NEMUQNDOBXIECCHFBFVPSQFZOTUEBVXLPOBRJOWWEJDYFSEJTOTTCFMZVEPEDPBDODHTPOWPXOLMXTUHN");
    tmp_msg_0.feature_type = 73U;
    tmp_msg_0.rgb_red = 179U;
    tmp_msg_0.rgb_green = 104U;
    tmp_msg_0.rgb_blue = 189U;
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
    msg.setTimeStamp(0.420253783150897);
    msg.setSource(64354U);
    msg.setSourceEntity(133U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(99U);
    msg.id.assign("ZJFDTCDMFYGECJBCSBAZTTSRRPYYHWJUZLMAHTKXINWWAGCHQUNBALWQUKFQMYFHMBMPISEPVNMYHQQPINAKGCCZLCUTTZWUWVSIEXLGJRDAVONXSBPYRQBWE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RNILIRAWCPWNXHXMZTWCUEYZKQSKHEPUEWZQPIPOPTFLYPYDDRMSXDGOVDVNORQWYTFHYPUMCSZAEXVLRHHKJHSDWCGJSOOEUQEYUYKOEVTVVLZLBSWMMCUMBRXQJNOPFAXIRMPOQGJQZFRFWJPRFDIJJKNXBDGKACUDMNVUQSALGQTVBYEAWBZGCEGOLQECLTVYIFXGJIUJHBONBFANLZFKAWZLMBSXNVHK");
    tmp_msg_0.feature_type = 146U;
    tmp_msg_0.rgb_red = 203U;
    tmp_msg_0.rgb_green = 90U;
    tmp_msg_0.rgb_blue = 228U;
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
    msg.setTimeStamp(0.3155207757228261);
    msg.setSource(51798U);
    msg.setSourceEntity(251U);
    msg.setDestination(39742U);
    msg.setDestinationEntity(179U);
    msg.id.assign("LIAQUXSNFSNALIZTFLQCGBBWQCDAPCBRVLWAALJHEXIEWTEMYLCKLJXKZNRNDJKFVJWGZTYHKOWIGKQJMZKPUHFCMKKHTLGYDHHTZAPJDAYGQZJAONONFXWUBYDXEVPBDLNRERTMCNRKYVXVVSMXHOACHWNYBTEQYHRFLOPGMEDTOWFUSC");

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
    msg.setTimeStamp(0.48398226816925394);
    msg.setSource(58013U);
    msg.setSourceEntity(114U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(221U);
    msg.id.assign("YRIEXNOYLOHJQFTNRXLQZWIIDFSWDTTAPJGWGEAYIOGYLTNUYIEPXZYRTFOLKAPESWQYFSKAPZCQHCLFKNWUEUOEPMBQODHNRQOZXXXJLGMFYBSAKRGTBDVCCZKC");
    msg.feature_type = 236U;
    msg.rgb_red = 183U;
    msg.rgb_green = 224U;
    msg.rgb_blue = 232U;

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
    msg.setTimeStamp(0.44818328384592576);
    msg.setSource(51607U);
    msg.setSourceEntity(139U);
    msg.setDestination(41577U);
    msg.setDestinationEntity(77U);
    msg.id.assign("DGJYONJHCNCTFHRGMQVJLIHVMJLMOYEZEZYWCEFKARUBWSKVOTSYBXIEHUZWBVQLZJTVUDMYTZZWTMVCJFRVWEGXKRPBIUIMIFRIVOXARNSNZXVATPDAGGLSFJYGTRHJFCCPKHYUSQEXDCFRZAXOBXDLGJPMFNMLSXYHKLHEPDTEOXDLNWPHQUYEZBQAUCMJNSNIYAA");
    msg.feature_type = 76U;
    msg.rgb_red = 143U;
    msg.rgb_green = 27U;
    msg.rgb_blue = 101U;

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
    msg.setTimeStamp(0.8607692272818314);
    msg.setSource(52349U);
    msg.setSourceEntity(25U);
    msg.setDestination(527U);
    msg.setDestinationEntity(157U);
    msg.id.assign("WTKOLLXPWHMHTAJARQBHQWFZONPYNEWIPOYASHYGDIBFYSPKDJSWVBOYUVMTZQLVDGMHEVFRXYEZWVEDRIGTYONQRFIIJDWZVXBGAFTMONMUDUUXCUELKRJJIMNNCFEPBSOCUSUQXRPOVFYTJBTQQEDSVFGJAPIANUMNHXZMBY");
    msg.feature_type = 229U;
    msg.rgb_red = 216U;
    msg.rgb_green = 242U;
    msg.rgb_blue = 232U;

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
    msg.setTimeStamp(0.9107775299609974);
    msg.setSource(46766U);
    msg.setSourceEntity(153U);
    msg.setDestination(19201U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.36475704134449727;
    msg.lon = 0.45565640818200615;
    msg.alt = 0.44915437180090945;

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
    msg.setTimeStamp(0.0011867553824117527);
    msg.setSource(5491U);
    msg.setSourceEntity(193U);
    msg.setDestination(61332U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.7590504443190508;
    msg.lon = 0.6233516348516973;
    msg.alt = 0.04264478747552658;

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
    msg.setTimeStamp(0.6090584768719864);
    msg.setSource(2933U);
    msg.setSourceEntity(33U);
    msg.setDestination(13278U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.1983381681543812;
    msg.lon = 0.2067684543451288;
    msg.alt = 0.10456189579444419;

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
    msg.setTimeStamp(0.01374449009318468);
    msg.setSource(14405U);
    msg.setSourceEntity(19U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(124U);
    msg.type = 62U;
    msg.id.assign("XBLWQXCHLRYLITQMOJSCJWVZWNADSBYCCPBTNGDDKWAKDLOLQYJMKGOFSETALGZQADIFSWKXXZTRVVKYOQGSUCUJXCXEOAZGYBIJZQVGNSJTEVVHLLNWBAKRTQFJCNHHEVUAUIMPUDVQUIBPHTAMFZNVISTHSKMAQETEFEDJCPTWIPBHJWZKMMKXOYNYRRLCPPEOGQZGDGBYORDNE");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 128U;
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
    msg.setTimeStamp(0.23104007877736166);
    msg.setSource(61716U);
    msg.setSourceEntity(234U);
    msg.setDestination(5159U);
    msg.setDestinationEntity(182U);
    msg.type = 107U;
    msg.id.assign("ZEWMKZIPWCRNJWAZYJFKHRCVUTSQNDBDYXLCWMRDMDZVARHWRIHFRJDHOAEXUFNRFCKPONLEYKSTEIDROXBCTWLOIPFVIQLEVETKOXXHSLKNGSUOTXQZLGTDZFMQPCXVQGSJUM");
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 142U;
    tmp_msg_0.ncells = 214U;
    tmp_msg_0.coord_sys = 40U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.9984679846524085;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.3727853836502222;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.757625645219814;
    tmp_tmp_tmp_msg_0_0_0.cor = 213U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9598895683658115);
    msg.setSource(37092U);
    msg.setSourceEntity(252U);
    msg.setDestination(4889U);
    msg.setDestinationEntity(154U);
    msg.type = 227U;
    msg.id.assign("UMKEMNGAVJHJXOJXHZGY");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("OZUTHDTMJFYLXOSZYOTBMTHXWXIQFEWOJYMAUTVRKGRNAFTYFNSBDPMKYRMJZRBRPSPWUSEM");
    const char tmp_tmp_msg_0_0[] = {56, -87, 118, -24, 33, -14, -1, 38, -128, -76, -114, -10, 109, -108, -109, 0, -6, 48, 46, 9, -80, 93, 38, 12, -24, 69, -80, -85, -41, 44, -118, 31, 31, 47, 68, -74, 90, 80, -8, 104, 1, -22, -126, 79, 62, -60, -100, -125, 78, 22, -72, 31, 75, -85, -57, -16, -71, 113, -113, 39, -71, -67, 106, 10, 54, -104, 116, 106, 36, 41, 100, -23, -9, -45, 87, -66, -33, 124, -106, -104, 111, -110, -15, 113, -37, 100, -85, 98, 106, -65, 122, 95, 27, -79, 3, 124, 92, -12, -75, -31, 0, 42, 105, 99, -101, 68, 44, -70, 44, 30, 93, -83, -97, -14, -55, 47, 56, -20, 23, -59, -41, 0, -118, -83, -50, 68, 24, -42, -106, -48, -7, 32, -29, 46, 88, 119, -25, -41, -61, 28, -90, -23, 103, -119, 8, 91, 94, 58, 90, -80, -47, -120, 94, 44, -17, -91, 35, -51, 53, 16, -29, -44, 9, -119, 59, 16, -126, 80, -9, 79, -42, -50, -17, 27, 50, 24, 111, -66, -41, 20, 41, -62, -81, -5, 38, 7, 118, 42, -31, -123, -118, 67, 0, -125, 61, 29, 33, -54, -3, -53, -24, 16, 6, -41, 30, -19, -26, 71, 0, 57, 67, -102, -117, 57, -58, -93, -52, -101, 106, 90, 122, -47, 93, -95, -8, -37, -28, 107, -82, 44, 92, 26, -62};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.26789576026061623);
    msg.setSource(11552U);
    msg.setSourceEntity(167U);
    msg.setDestination(35515U);
    msg.setDestinationEntity(195U);
    msg.localname.assign("UFIYJGFBGYKZTDZFVSVZPPWDDUGRYYVQMNMOUKMEGSAZWYBSZIHALXLFXEHJVOCSQLQAZYZTENEUTNMBHCPNLSMIVGNGPPUJNKFTKFNKFRHMHAQHJMCVVOPSWAFQENGNVBJAOPUEY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IQAJINGNOEWXAHDOCIHCNJTQBXNOBAHMPCZVKWRTRGKHYKOZJDSSHBWYJUUUQMKAIURZGZOZFGBTK");
    tmp_msg_0.sys_type = 78U;
    tmp_msg_0.owner = 15045U;
    tmp_msg_0.lat = 0.8059920202878921;
    tmp_msg_0.lon = 0.9805949391235789;
    tmp_msg_0.height = 0.5138034136135968;
    tmp_msg_0.services.assign("HHEIUWGVNFZPORDISGQVYFXZDLKCAAMBFUPMOODERXWPAUPVTCXJKTWHBY");
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
    msg.setTimeStamp(0.038579760609011804);
    msg.setSource(50887U);
    msg.setSourceEntity(22U);
    msg.setDestination(13430U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("TUHCQIDIOPSLMGZLWTVS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OZELTQKPQRDG");
    tmp_msg_0.sys_type = 58U;
    tmp_msg_0.owner = 39665U;
    tmp_msg_0.lat = 0.06055610043599802;
    tmp_msg_0.lon = 0.4515467147839437;
    tmp_msg_0.height = 0.755227724980789;
    tmp_msg_0.services.assign("MPOIRYAJAUDJBSPQUUMCPOIGUPVFYSQEKIBTTYWZXIBDRJOIEFDTAHJLDHAPSGYHYLWRMXZWUKOMPEBHBDSGXYSQXGTZAJFARCXQMNTMQNZCRAVNGTINHJNLNULKBMOZRSPKRLHEYOIHUKYESCDQYDEDOFWSNCNNGXAVENLXSWVTGPMKEWVEFPFBWGLZRAIFJSATVDXQVLUCIJKTVQRBM");
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
    msg.setTimeStamp(0.6488620127495014);
    msg.setSource(1364U);
    msg.setSourceEntity(201U);
    msg.setDestination(49590U);
    msg.setDestinationEntity(100U);
    msg.localname.assign("RLCZZKVIPZQFWTXIIKQBCVNTQDJZDBEAPFUKJEAFWNMYWMFOTYBHBMKCJBQRIASBLKXLEXSETHCBPRFEDCPTFKODBJAIXMNJICLPHVNNNNLRBPEDTCYBDVHSSXQDWJOZOWFWRUYGASIZQ");

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
    msg.setTimeStamp(0.34748870612428184);
    msg.setSource(57763U);
    msg.setSourceEntity(209U);
    msg.setDestination(27651U);
    msg.setDestinationEntity(55U);
    msg.timeline.assign("LQATSDPKZLKOJPSHOVSIWJZHRRMDWRFZBFYZHRNKPKTAZWWEEMKHZQTVQOWRZMGNBYMZPAGLQUGMJCOYCJEUCLMINNUYYADUJUSIDAZCBKYHOMDXLGJEANJSOQENRCQIBWTSVXTUKDNWCRGFUQTSB");
    msg.predicate.assign("MWBVZDXGQZOORMHTUVNKLKBSLFXYPUNEYCFUANWLIBUURJNRNOSBGSWORAQCCIJESWGVKUICPPHPLULVJTDXCTSZHWPFCGGJRKDNHZCDVDSEDYZFTKDQHXQHINHJZITZMNIMKJVSZOUELQTYMMGJGLUCHRQQPAXMJAFEBPEOIVMPABHFKWHIQZGYLYELVOIYXXEWYBFCSRWOBGWADXLTADWQYUATNXDKMQSBRNRVOIOJPRTPXMSFAF");
    msg.attributes.assign("YAJMJJQXMMMBMFTSAFUJNFHNWPEZKGYPCAOGNMNCFDE");

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
    msg.setTimeStamp(0.02286148928328724);
    msg.setSource(7246U);
    msg.setSourceEntity(132U);
    msg.setDestination(32129U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("YUGSLDUXYRLOHVLYSDIJJBT");
    msg.predicate.assign("DXSXLQIRNRUFYTJFZERBCBCPLJLDDZQNJWHPYMSHPTGYQJJXGSCCPQBGWUVWLKDATDSNJUMNFGWSAODSRPMAIOQG");
    msg.attributes.assign("JBBHHAAEAOZOOHQGQWUGJPBAJMKSPTKEJEBXIQGZYNGXNFXZXREDBTMFCZBVXPWKSITRRQPCFFDTGUCKRSQLHSLANZNPRCSXSIYEXRTTTHXMPWFWFVUDGVNZIQEDWSFRAOYLEDRFAVZFQOPSYMTVONUGJKUVVNIPLLMRQLCTMMSCCIIOJKALGUBTIWFSYIJJWKYJCHZUPCNWDGOHDDLKCNHBDGMYOLVEKERVPHWIKYQWQXJNZLZ");

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
    msg.setTimeStamp(0.8706580870074371);
    msg.setSource(3U);
    msg.setSourceEntity(33U);
    msg.setDestination(19571U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("UOWOAEPGVYDHFOGSRRACUQVOFCSDEC");
    msg.predicate.assign("BXIIUUNKZWFMWKNTGUSCAGPYNBYZCFBUOLW");
    msg.attributes.assign("MYFNAGVIUSUTBDZHFBMWDEPAYQJBGSPEMJQWBCYOLJCWECZRDAFXCGZAWMGFXAGLQWPVZZTADROALIQFUMNRCNIJIZVHKVIIUMJV");

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
    msg.setTimeStamp(0.710740600331714);
    msg.setSource(63288U);
    msg.setSourceEntity(97U);
    msg.setDestination(40037U);
    msg.setDestinationEntity(152U);
    msg.command = 83U;
    msg.goal_id.assign("AATPEUODTIFJRJPNKTYSVSPZZIWICALQIXBRZFKWQKNTBPWGSMQEXMVWIGUQNVJIKNDBWPKBFGEUAFMZBRPXXXETZYQHMPHDFJNCDCEAFCOSHJIOIRKVOQOJWKAQSLGFTMOVQBYFUTDZLRURTUSVZBUHAMFSDEHRMLRLHCOGYQUVYEDHDINVEQKLGGBNZAXJZYTMGXALHFNMNBKTUOWCG");
    msg.goal_xml.assign("QAPEMMIAVBHLHDKFUCCDZCKKOJBKASXTGYLMCTAJDMEQDGJPSKNWEKBMZCEZQGIXGVXXITEUCHJPUDSRYTBZJRZDROYTRFQCZUTNXS");

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
    msg.setTimeStamp(0.24318519193537413);
    msg.setSource(54167U);
    msg.setSourceEntity(45U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(116U);
    msg.command = 239U;
    msg.goal_id.assign("ATIAFMZQEJWHXMZPNMWCQCCUTJSJOMVDDJHPHIALXFMHBOUWSGTXKWTDTRQSNIXPOKWZKOLJGQFEJFRCGKAHR");
    msg.goal_xml.assign("YUNXVKGPKSVKBZELFMZJQXAVJKASYNDZVTGGJOJHBQZQTAZJSOGVBPCHARVETZPBNQELEMXFXHOMLJWBIWYBJZKBOEWTLLXGZCFRIICCKMDHHNNLHLMFWUYYRMHUDGJRWQKPZKYGPJZXQFUUSORXWKBOUYDDUACIYDGWQF");

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
    msg.setTimeStamp(0.9986768601024669);
    msg.setSource(58518U);
    msg.setSourceEntity(28U);
    msg.setDestination(62605U);
    msg.setDestinationEntity(204U);
    msg.command = 37U;
    msg.goal_id.assign("VOEMQFRBNRSZRFZDJKKFTGNAJCEPDYBFVYUJQCBGZDUHUYLCZHWDQWEBXAQEOUIASPQIBCKJDOLBSDIVRBGHTMPLHCFFZUCYMBJZXQAVR");
    msg.goal_xml.assign("BVVDUXNNXQEOMUSHPXTB");

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
    msg.setTimeStamp(0.9110757964412257);
    msg.setSource(27707U);
    msg.setSourceEntity(224U);
    msg.setDestination(53940U);
    msg.setDestinationEntity(133U);
    msg.op = 237U;
    msg.goal_id.assign("DOGXUHKCRPSFIOCXLXARPKVFMJZIGCVXQOLBBRNGSUPGMCENLFGPSPHARFPNYQFDUCFNQQAASHHEDKJVWDYARMWYVTWOQZEAOQMDEMHIJRVDXZSUKEFZKTWHLEUUBQGYICSNKPBKORVPGTTXLLOIZSFHFKQCBZJDFTJBGIBXQJMYJMIHPIGWXHLWTNWJGWTJUNANBTSZTOMZSXEMR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ENREXLOEXVFFTRRQOUDAZCJRKTLUWZKRHVMFYLEXVJVALVNDMWKSZDLDJYWUAIKIVSYIN");
    tmp_msg_0.predicate.assign("TSGSNOUEYDCZEKPZBBHEHLWYERZZEGAELTUBVHSKMTFGDHVQGXGAKSLJIKGABLKXMRMRUMTHLWPJLZGFSOJPOPIQVNCWHMYLYRBDMICSTSZIJZDMNZFVIMRCQULYNNARTRAYFWGIOUIKOJNLRODQBFGAKCMYXTDWQOBSFWNXMKNKPXHXFHNETPUCAVIVROYBNDIJAFEDWAE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JISKZGALCOYGFZZEYGMXBMSKNFJVGLTZTWZVNQNBCIHDQEDROAXOSROLYSDKMSVTITRBLYKYMHQUUONPYSCDXJZIRFBETWVSJHNEFBDRFPHTNEPVNIPZPOAQMWPJHPKGWIOLKEQQRUTAXOTMULZWWRJBCKXMKAXBZDIIRXXTXMVNFJAQLMDYRVWHFBWWVUHPPKIBGVFSSDCELJHOFCJCGEOPAIQATKJUVGAUMYWULGCERD");
    tmp_tmp_msg_0_0.attr_type = 78U;
    tmp_tmp_msg_0_0.min.assign("CHZTAXELFITVPYANPJ");
    tmp_tmp_msg_0_0.max.assign("SGNYLNTAPFZWMYIJZDVSOYDPFAGAUOBRABEVVTWFGJQWFYYJVJTPYJKHXCNYUFCBMNCVTWZNZTENBSZKQSXFBCKZFRHRAOXKSZTQEIRJSTRGRTSQXMDEIAHA");
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
    msg.setTimeStamp(0.8184387270421372);
    msg.setSource(13593U);
    msg.setSourceEntity(203U);
    msg.setDestination(55739U);
    msg.setDestinationEntity(19U);
    msg.op = 214U;
    msg.goal_id.assign("APDALFHRVAANYJVDZTYIYXZKDGEVSLNZRGNJSRPJEGOCEBMMHSHIKKMNWOJRNOJLOB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LIQVNJEQHFPOLSKPRZUJNTNLNXUFAFKIBWHWXPZADCHDPVD");
    tmp_msg_0.predicate.assign("RGCEQNKZLHXYCDYHPQHZIUTVJQVTJURMKCAXMJOOFYBDJLVYDQTZIZPNVEWGVPS");
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
    msg.setTimeStamp(0.5940334338950212);
    msg.setSource(17302U);
    msg.setSourceEntity(117U);
    msg.setDestination(38007U);
    msg.setDestinationEntity(98U);
    msg.op = 104U;
    msg.goal_id.assign("XYDTZWVSSBLESGXPZUCGMOXPZJAPVMNRHUHXDJOFHXJYMWPUEWVNTUCRCJYPCVYIEWCJURKTUSOJZIBHAZDIAQSLBFKWWFWYBNRDDIAKFVINUBIRMYQPJEGSNR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SNKJVWLWFLBMUXHTRJCIKIDWZBPDHJVZAZMHTSOLDXUPITWXCR");
    tmp_msg_0.predicate.assign("MKMJXAPYOALSGBKCQBFPGWEQVRLTUAJXDRTWWLBHPEITVNMNJRDDSCMILPUFOUUMQ");
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
    msg.setTimeStamp(0.46336335442863286);
    msg.setSource(3807U);
    msg.setSourceEntity(217U);
    msg.setDestination(17878U);
    msg.setDestinationEntity(195U);
    msg.name.assign("BVHOXYKNNNNMCFHPGDYHHMLPBUGHTHGVVAHBWCNFAGFUQUDMTIXQGCINTMOMXEUVZAPTWUJFGPMGLWAYKHWQIUQLZSEYWWZRRXVKFKBGLPBERYZZIYFJSSQMBANPKODEXKFHSTUQOJHLINVODARCOFVJYJASLWKIQRCPMSTTYSIPCDQSVOY");
    msg.attr_type = 41U;
    msg.min.assign("GSXQESDFZGQZHYVAFYBRRHEBVBVGIAFPWPUYCMARMBAOAKGEFDQLGSJZPMJYZFRHJSAJUVYVOKSZSFQLKXKONLBGLWNFMXDTKHQAPQMHATSFQVLUZHIHHWL");
    msg.max.assign("KGDWKPYFLNF");

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
    msg.setTimeStamp(0.12111223404856186);
    msg.setSource(36129U);
    msg.setSourceEntity(104U);
    msg.setDestination(21457U);
    msg.setDestinationEntity(107U);
    msg.name.assign("MZXXMDBLHQRCHZYSCKWMQVFBUZFLYVADJTGNBFITITVOBHORO");
    msg.attr_type = 123U;
    msg.min.assign("VZUMDZELFGOPIVBRSQOLCPBXAHJMWDSDOCLWNLPZYDUSBCGOGSOXQJUUDASKNRHQGPEMQBVZYAGIAINLKIJMVGLEPU");
    msg.max.assign("GSURAJLAUNIUGHBZAWJARGIZWGKEFLVOOVNSSPVNSPRSMRZRMMYOXNFCFTETZGUVEDFCITBWENOIJQMHBAYPJIORHCSLODDPSDXUWBUHLVXKKD");

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
    msg.setTimeStamp(0.7398117306286597);
    msg.setSource(12106U);
    msg.setSourceEntity(156U);
    msg.setDestination(39592U);
    msg.setDestinationEntity(151U);
    msg.name.assign("TGTDSXXQHCKBJPEYWHXAWPRQRVPUWQDLQMLMSHELDMVROGNPGCMWXETCQLBMQKDOVMVLFOTKSZKDJELBIBYZAVORZCCIGIPTFUGNSBAFVBMWHFWYORINMF");
    msg.attr_type = 79U;
    msg.min.assign("ZNHAMTJJYJRQXEVGBNIMYRLGHUZUVUQPBOYW");
    msg.max.assign("VHMCSLYGZJEGPBQDDOFFOFTIWZTJNLTBMMBXOUYVIXKFQXJWLAQXLKVOYABINYPKPPAWJPSDKUVNEQNMTXJUXLQZIMEHNCBDOHIPLDYCBRSRRILKQWHGZTHWHPZUKIYAEARYUCZCGSFLNUUWJLETTECZSSDRQFRZNGYZHFGUPCUMLTIF");

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
    msg.setTimeStamp(0.27189665412706876);
    msg.setSource(54104U);
    msg.setSourceEntity(210U);
    msg.setDestination(34775U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("WQDZLMULUPZHNLRYCJWLKYTKEOOSCVBWGKAFADYXOQHUDHMNPGENXQSMBTSPQGYJVWFZIRHRDHFJEVZQBLOWUFHJCQVFMEPUGIGMJSPBHUHDVVDCRNGZELAOYADPK");
    msg.predicate.assign("JSUJTTLOEEGQLOBVSQOJIAQSZXXLDLKNVYVWVLXHEANVEFP");

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
    msg.setTimeStamp(0.3316577372763425);
    msg.setSource(64685U);
    msg.setSourceEntity(212U);
    msg.setDestination(16604U);
    msg.setDestinationEntity(184U);
    msg.timeline.assign("CTMRQHXMBYMJAYUGJOMCUS");
    msg.predicate.assign("KPJTCWDPFASTJLJGXIQXRNZJQJZNDORBQPEGAWJNLGEFUBPDUKKYMDJZJBOVGQLMNGFZXZQIROYCDMAUSHSNZAYGAKQEEOHOFKBPHIDZIVCTVIFUFHSTUHQKBOEFMFRYVXOTVSDXBKPCRVAWXPVCLWHHPJNJUWGTLALLGZAKNDHMRRCYXUTBMMOHCCOVFUBETOWCSZNTQYMVNDXEIUWEIKDVHWIIPMSLYMG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ULJBCXRWFNHKDQLCHFYHOPIJKEYMZMRKPRHFCFCPUZYTISTUTVPOJFNWOBAYIWCKUWEOWZZIPAHKHGRVWMMJXXOQTUBDZCQIDSXFIELKMQHKYVTGJSIENNSVLCMWNRMUSLQYBGGEOTXXYZWOZRQBKVGDPJQYAEATBOHDHOMVWJGDFGWBCANEAQZRNXSDYUAGKZUFNNDBPPMCDHEMGKEVVIFGUZVLTIBRBAQTUX");
    tmp_msg_0.attr_type = 191U;
    tmp_msg_0.min.assign("WFQGFLDEDVQGFKCLKMMJKRUTJQGEXZSNUFCTCBRRMDQMAXMIUDKAGPVVUTAVWPQNRZMPWHFELRSZWHBJSBZZLODTQSIMFOYVSELMDTZKXZWGAZWZIVHUBWIHXJTKVJGAEPOWXJPIXYVRYPPYTYIOILLTKSJQENQNOXSGCDBLIDXUALBBIGRJKLFTDCYNHNQUZNBVSECYCNJHAQOIYHHOPRMWSGHTGCFEXFKAAAUNRFOBROXNEKBMYUVCEJDHS");
    tmp_msg_0.max.assign("OXJBFNCMDIKAWHZKKWP");
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
    msg.setTimeStamp(0.2939500193500395);
    msg.setSource(19940U);
    msg.setSourceEntity(26U);
    msg.setDestination(38249U);
    msg.setDestinationEntity(152U);
    msg.timeline.assign("IYYIHPIJSAZGWNHDQGYKQJPWCWCMMFDGLWVG");
    msg.predicate.assign("VJFFDAHOGSPMFGZLWETXONGZVVJRNSMUBXUDNAFNRAVKSXMY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KKXZLFMWIRUUCPJMXARTJPGYFHQQBQURDZWNJWDBVLSYPBBESJBAUOEUDTZUZBXPMEOCEKKVHSCVKMXHGYWQAL");
    tmp_msg_0.attr_type = 171U;
    tmp_msg_0.min.assign("PLAORBFDYLUDQVSTBNHRZMGIWPOCKZCMCVCNMGJVOOFSZSSOJYTTLWXIXPWNWFHQZGDEDYSQSCJZFYZKVXPHOXHU");
    tmp_msg_0.max.assign("BEJGELHCSPIWVBWIXLWERKTGTBFVSKQXHHOXMOKPHKGHVYAYZRZIQWOMGORJLCSTRHTWFQTJQVJDZSAQAPUNKOBWBKBPFWNCVCNKZEDXCLXHKSNDVUEPZMCDSZFXHWJEFHEEAPPONJIZSYTTJYNQCNDELYMRIOIURZYGGIYADIJQFYTJTLUCOMQUBGYCXTOVXUBRCAUQLUPKZOGMFAMDLYHEFPXNN");
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
    msg.setTimeStamp(0.8080054548020178);
    msg.setSource(33758U);
    msg.setSourceEntity(210U);
    msg.setDestination(11816U);
    msg.setDestinationEntity(22U);
    msg.reactor.assign("EMZOAXNKDSEVNCUQZZVPSKAFXCCJYAGDFCTWGTZNYAWDARILEVNFGDHEXSILKWNRGJSYFJLVIMBALMBCWFXTZETRGPWH");

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
    msg.setTimeStamp(0.34127759773689614);
    msg.setSource(62959U);
    msg.setSourceEntity(175U);
    msg.setDestination(33525U);
    msg.setDestinationEntity(41U);
    msg.reactor.assign("XVLYPQKQKYEASVZCVOFSLHEMADZRDXKRECEJAVHGYYXYLEKLRSJUBWONBGQEGFMTINJMHMCRDWWHNBLHNGPDFHJLQZCNCWPDSUWDGBFJGLJIMKZUPCFNFJTCSAXLBRLCWMODRCQFIPIMVGNVWOLINGROSPXDXSTOFPEZOUIORCWJVZITGBHHTAMWDAXEJPBIOXXZUPYDZVSBQTKAQXHZVWUSITFYKKZHYURKANMNYUPF");

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
    msg.setTimeStamp(0.4560103183752654);
    msg.setSource(59394U);
    msg.setSourceEntity(192U);
    msg.setDestination(64830U);
    msg.setDestinationEntity(46U);
    msg.reactor.assign("SJLBRYBNLWOONSCVMCADRFDONYWZGDLQKOCOPGMRCSWSXHFLQXCIFXTQVZWEHFPYTSYWLEAXNIPCDOHTPTYMWYGABGHETYGQOJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PRKUFYXSFENUQSWRIHMFQGCSWFKAWHLLLESHJXOYSMUIPPISMWGIJXIMSUGDWFGKCAJFNOLBFJYPBUVTITJHKW");
    tmp_msg_0.predicate.assign("APCVHPITPSRIRLYLAO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EXLZNHGTRTGFYAUGUQYOFFLLVRCTXJHKZIQYPIPGBYLIRDVHRFYAZELUJENAXTXOVUORACEHWACCGSVVLPBUDCZISGNQEOLQECCWMWSARNHKJXDFYBWWGUSRCBQOKZBPEDQROWHZVBGMAFXDFMPYXDNWPGOTDMSIKJDIQXMMZWQME");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("NQUKIKZZCYPTBONGMDQHIPIKNULLGTIKQPBTGDXPTLPBFUQSIMKFJLFRAKOXJFAIJYODSMRYRSJBXNHNCCNWHRCBYOMTVJWGXXQDPCZEULWRZLBWECESEHPHHTRVSEVNUHVGHVZHJZQESEKNMROGZVRMGCDPGDDWARGXTVXYOFQELPCUALKYXPJKETCAUUVWNTBYSDYYYUUBFNREAMIDASMJTHAWCXDZXOWIFIOSAIVASVBM");
    tmp_tmp_msg_0_0.max.assign("CZDDFWKTPVESDIBGUIDDCKAQOOEQOWSXQKPTSANZHITLMKBPKVBYFPJYFEQRSKCOVNJYIGYZVOVQGRIFNGZUQXNTJRUBZAGSLMUNEOYTUUSMIPLYZOSGLBFSFEUNAMMEOCGLXWERWDMHTWIEQWNAMHKZZHIVPLCUBXLT");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.831014281886171);
    msg.setSource(48304U);
    msg.setSourceEntity(238U);
    msg.setDestination(57727U);
    msg.setDestinationEntity(110U);
    msg.topic.assign("XPIDDOXLUHJMZSDUGJQOCVNRQEKBICJFBVFMJEBZJBSKEDKYLYRQPWDYRTUACYZAOBIXDRVSRGCCCCFXTMMHKMKUVLKBN");
    msg.data.assign("LQEKYNGOMQROKMRGARILFCUZKTGIRPIVBHPICMUBVBXXWHUN");

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
    msg.setTimeStamp(0.1544448866394038);
    msg.setSource(48196U);
    msg.setSourceEntity(161U);
    msg.setDestination(56078U);
    msg.setDestinationEntity(101U);
    msg.topic.assign("NVIBJZWIVGIGVENHHAQJXPEPYHZYHIAOXVQSVNPUUJISDOPYXTUPXWTIGOTHQARYJHFKSSNERILWILTFABWTCQOVKMJGBGDFFWRRCJEWDWLUEAHCOTMRSIBHGUKXTEFWMJZXACRMXXDYENUMQOFGSOOHKJRBUVAMUYCBRLYBAXPRQKLIKZYVVPPYCCPSMWQ");
    msg.data.assign("VRUSGEZNFFAXWNJJFUSSIZPVZRPRQVPAUYXUEBNIYNGQTIILWAJSURFMMFVOKQQLTLSBHCSLBMKAEQTZPZGFUZJHWBIYWMXAICMYLWMAAYRZZLSTWMBFTXPJQRXEOLSHGKNSDUOHFWXBXPVCLJKLHMKMHCVNCIBTCYDIGDMKNDPNHZYKYREAJPOCGKGVITNCSGPHDOTOVXEIRTPFOCQBOJHGQDKQAKNODFDUCVQWHDTJLVR");

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
    msg.setTimeStamp(0.9777194464113907);
    msg.setSource(56458U);
    msg.setSourceEntity(188U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(222U);
    msg.topic.assign("JPQPDGBBCNBZIPMFOVXCFDHSSFLRNDZTZWUCHSNRSAMNSUPIUKYRFABMNXOSJKWZUCJTPTZECLMGEDWMSWAQUOGEUEQFIFGQLRZBHVYBRDWXDYUQPIIYHOILAUVICWNQCIWIXXTRKLKXOYBPHDVSQAJYWMXGJTWAZEEVGGNVJKHIFBAADKLTVGAONQZUYQHHKJGHOHEOJZVDQFKPSRJMYZBYEMBJLCGER");
    msg.data.assign("XGOKMYWUJPNSZNMDSZMTNFVORZUTALLJGYZVSLEXXUPRHQAJFGEQDMJLITYXBFKBRJBQJQZKRDMCKBHGLMGMNXFFUWVSDCROIZZFJUGYXCTRHKUUWAPBECTSZIGQLLWFVDCGHDEBHEXDRAGAYFEZRAGMIIBTMBDKBPKEXEJROTONDZYKVWLQJMVXVQENHUIFHYWVYCDOXSLSALAFIJIVYCNCSHQVPPKPOBQHUNYPPOCANWOW");

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
    msg.setTimeStamp(0.42727144297457553);
    msg.setSource(57538U);
    msg.setSourceEntity(97U);
    msg.setDestination(455U);
    msg.setDestinationEntity(194U);
    msg.frameid = 113U;
    const char tmp_msg_0[] = {39, -67, 50, -74, -6, -43, -116, 109, 21, -90, 19, 81, 26, -75, -35, -69, 109, -27, -77, -120, -38, 60, -28, 123, -7, 71, 91, -41, -34, 4, 65, -54, -34, -90, -13, -123, -84, -61, -101, -29, 101, 107, 119, -14, 113, 58, -62, 54, 21, -61, -14, -117, -51, -49, -2, 37, -37, 39, -39, 103, -88, -123, -4, 0, -5, -83, 1, 78, -34, -37, -107, 12, -113, 55, -30, -60, 34, -26, 35, -68, -125, 34, -32, 124, -26, 23, -31, 49, 8, -24, -8, 123, 40, 74, -8, -43, -122, 66, -9, 47, -89, -37, 123, 44, 86, -56, 18, -35, -128, -128, 78, 81, 45, 38, -100, -6, -41, -46, -57, 85, -13, 53, -28, -68, -44, 119, -122, 28, -118, -34, 103, -65, -23, -45, -95, -60, 32, 35, 66, 64, -81, -91, -17, -71, -34, 51, -5, 33, 17, 56, 78, -106, 2, 116, -2, -42, 85, -24, 26, -38, -123, -72, -23, 18, -82, 39, 94, -89, -17, -111, 1, 30, -88, 55, -10, -16, 29, 48, 75, -119, 108, 79, -98, -55, -80, 53, -45, -78, -6, 14, 15, 28};
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
    msg.setTimeStamp(0.6926958570041901);
    msg.setSource(51186U);
    msg.setSourceEntity(137U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(118U);
    msg.frameid = 126U;
    const char tmp_msg_0[] = {99, 4, 79, -8, 26, -14, 73, 14, -111, 47, 43, -104, 70, 39, -117, 30, -2, 32, 103, -43, -123, 39, -105, -93, -78, -44, 76, 95, 84, -38, 87, -64, 17, 91, 65, -113, -19, 82, -23, 55, -30, 7, -43, -35, -22, 1, -78, 85, 7, 5, 68, -101, -110, -55, -27, -91, -84, 46, -103, -13, 111, 20, 94, 57, 6, -71, -88, 9, 3, 63, 95, -26, -35, -87, -40, -61, 97, 104, -102, 118, 19, -121, 27, -122, 53, 73, -76, 90, -87, 20, 53, 92, -104, -26, -25, 18, 34, -6, 19, 101, 121, 102, -16, -64, -59, -28, -112, -113, -102, 103, 94, -10, -30, -69, 76, 63, 15, 92, 18, 45, 20, -6, -40, -18, -20, 56, 26, -127, 84, 95, -117, -28, -105, 67, 107, 39, -1, 95, -92, -97, -123, 94, -92, 101, -27, -83, 122, -100, 30, -29, -28, 104, 38, -83, 93, 63, -88, 14, 60, -15, -26, 9};
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
    msg.setTimeStamp(0.39791239902309405);
    msg.setSource(25922U);
    msg.setSourceEntity(34U);
    msg.setDestination(10147U);
    msg.setDestinationEntity(228U);
    msg.frameid = 30U;
    const char tmp_msg_0[] = {-85, -2, -33, -22, 13, 47, -97, -75, -108, 58, 32, 91, -66, -77, -84, 33, -2, 18, -74, 96, -24, 102, -56, 126, -115, 85, -126, 118, 42, 36, 111, 13, -82, -57, 99, 60, -97, 2, 104, 58, -39, -69, -57, -19, -28, -56, 17, -61, -38, 95, 35, -80, 12, 30, -15, -92, -63, 43, -46, 37, 52, -116, 112, 107, 33, -57, -95, -118, -15, 19, 9, -114, 52, -32, 23, 12, 56, -56, 7, 124, -93, 27, 52, 28, -48, 12, -2, -64, 18, 38, 115, -80, -40, 22, 2, 60, -79, 106, 49, -99, 36, 3, 57, 123, -121, 96, 75, -24, 5, 27, -128, -86, 59, -96, -70, 14, 58, -93, 37, -59, 60, 25, -23, 25, 11, 44, 106, 74, -44, 109, -20, -12, -1, -82, 25, 8, -48, 123, 30, 125, 30, -15, 16, 34, 101, -9, 59, 3, -66, -94, -25, 59, 90, -36, -103, -7, -73, 6, -68, -128, 124, 57, -8, -75, 79, 75, -120, 38, -43, -87, -44, 44, -50, 31, 61, 37, -107, 49, 69, 16, 14, 23, -109, -83, -52, 41, -35, -127, 120, 121, -24, 6, -23, -127, -95, 2, 74, -75, -122, -30, -27, 87, -120, 79, -16, -65, 66, -41, 75, -60, -75, -84, -59, -43, -85, -58, -27, 81, -11, -48, -25, 7, 59, 68, -128, -14, -93, 4, 106, -105, 93, -76, -36, -86, -72};
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
    msg.setTimeStamp(0.9471244502341513);
    msg.setSource(21088U);
    msg.setSourceEntity(226U);
    msg.setDestination(46506U);
    msg.setDestinationEntity(232U);
    msg.fps = 29U;
    msg.quality = 32U;
    msg.reps = 152U;
    msg.tsize = 4U;

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
    msg.setTimeStamp(0.049383651380839555);
    msg.setSource(41173U);
    msg.setSourceEntity(116U);
    msg.setDestination(4573U);
    msg.setDestinationEntity(131U);
    msg.fps = 109U;
    msg.quality = 80U;
    msg.reps = 150U;
    msg.tsize = 5U;

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
    msg.setTimeStamp(0.4907480251637222);
    msg.setSource(18476U);
    msg.setSourceEntity(208U);
    msg.setDestination(29403U);
    msg.setDestinationEntity(208U);
    msg.fps = 98U;
    msg.quality = 47U;
    msg.reps = 27U;
    msg.tsize = 252U;

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
    msg.setTimeStamp(0.41211679306639193);
    msg.setSource(53862U);
    msg.setSourceEntity(230U);
    msg.setDestination(23159U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.9557337644186399);
    msg.setSource(58863U);
    msg.setSourceEntity(239U);
    msg.setDestination(60337U);
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
    msg.setTimeStamp(0.7328688600720558);
    msg.setSource(29422U);
    msg.setSourceEntity(78U);
    msg.setDestination(63638U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.6378239812569512);
    msg.setSource(25542U);
    msg.setSourceEntity(158U);
    msg.setDestination(43149U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.2510008621008508;
    msg.lon = 0.23973768808767526;
    msg.z = 0.5967525557192832;
    msg.z_units = 110U;
    msg.radius = 0.07319264649941759;
    msg.duration = 10923U;
    msg.speed = 0.9189561140389286;
    msg.speed_units = 167U;
    msg.popup_period = 54363U;
    msg.popup_duration = 32106U;
    msg.flags = 53U;
    msg.custom.assign("NVLUCSHGWKALGWXXVLHYLAANSWJQLPJTJXVNUFGUKFHHPFISJGBEQTDBFIIFZMWFXVCKBPKAKCOMDMOJKYBUYAOZSBZQBVPNMAIRPTUURMKVPMTFBQUYCTEDVRHDWTUYHXDGMFHRANTXEIQPPTO");

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
    msg.setTimeStamp(0.9280718701898975);
    msg.setSource(27346U);
    msg.setSourceEntity(102U);
    msg.setDestination(14766U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.9663351378823081;
    msg.lon = 0.625586540310047;
    msg.z = 0.3942276365173215;
    msg.z_units = 116U;
    msg.radius = 0.48882833757929545;
    msg.duration = 50153U;
    msg.speed = 0.4466050217926145;
    msg.speed_units = 28U;
    msg.popup_period = 27674U;
    msg.popup_duration = 40524U;
    msg.flags = 198U;
    msg.custom.assign("JPSIKWIVTFAHLAFYURAOQHMNGSZYTRZEDRKM");

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
    msg.setTimeStamp(0.6816338123917751);
    msg.setSource(19303U);
    msg.setSourceEntity(199U);
    msg.setDestination(53494U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.846824538190837;
    msg.lon = 0.671386178087304;
    msg.z = 0.024125605625618607;
    msg.z_units = 119U;
    msg.radius = 0.9294796536903321;
    msg.duration = 3965U;
    msg.speed = 0.20066384623267708;
    msg.speed_units = 77U;
    msg.popup_period = 25418U;
    msg.popup_duration = 25851U;
    msg.flags = 29U;
    msg.custom.assign("AKGJUYIJOUFVUOXNAPFINKTOCQYOUSPREWCQNHZTQSUXWUIOMPCLBQLXMRPDMYTVMNAKDELFWVCEWPVYBGFDFOXOUJSNUAWDCEAJFBXVPULVSWGEGQYYLNJSQUFORESGHLCVICVZTBVDRNXHMDSRFWDBBHALERQZRYZBTMJKKLKTIGTYGCHLFJQMZVPJSZFXTHGNAHEJKXRTYIGORHCSEBAKBWCDIZGDZMBEKZIKHDZXTQPMSON");

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
    msg.setTimeStamp(0.7415419747014684);
    msg.setSource(53234U);
    msg.setSourceEntity(124U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.6282857372196206;
    msg.lon = 0.6387864138174421;
    msg.depth = 168U;
    msg.speed = 0.31195039642684763;
    msg.psi = 0.5313370546764046;

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
    msg.setTimeStamp(0.5468098752838434);
    msg.setSource(23312U);
    msg.setSourceEntity(12U);
    msg.setDestination(26397U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.008091949218342442;
    msg.lon = 0.27268823866687;
    msg.depth = 73U;
    msg.speed = 0.3396020991797438;
    msg.psi = 0.3822410489211394;

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
    msg.setTimeStamp(0.04553274529819484);
    msg.setSource(9397U);
    msg.setSourceEntity(134U);
    msg.setDestination(51665U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.4904992294748779;
    msg.lon = 0.47047099909322987;
    msg.depth = 3U;
    msg.speed = 0.47942864062652424;
    msg.psi = 0.05604919122358287;

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
    msg.setTimeStamp(0.0024713439310958263);
    msg.setSource(11962U);
    msg.setSourceEntity(30U);
    msg.setDestination(60866U);
    msg.setDestinationEntity(28U);
    msg.label.assign("VDXRXGITGWZRTFKDZLFYRCWPQTVICLRALSAHBGKXYOTJFEDXJYKPSRBFRQHIODMHSWDKQSEXLYANTZCUVHZONYWATJFDQNXCJHHASNWKIIPFCRMLHRQJZBAWYOANEENIGSAGKZIDBQMPXPSUBPHCXVRBZKWBOOIZLMQGTPYLDNUZBIYPVWLUGZMGPJVJNCFDKOJWYOTBXQEHKT");
    msg.lat = 0.312217760869844;
    msg.lon = 0.9902693047393717;
    msg.z = 0.844548204361129;
    msg.z_units = 206U;
    msg.cog = 0.11905680868266222;
    msg.sog = 0.29577212291066335;

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
    msg.setTimeStamp(0.6313458424446063);
    msg.setSource(13468U);
    msg.setSourceEntity(223U);
    msg.setDestination(13488U);
    msg.setDestinationEntity(131U);
    msg.label.assign("YRFORYTAAIONPLSWCOIGBTOEKJUWRWBAAIXWVJGUETJDMGF");
    msg.lat = 0.6003021943658893;
    msg.lon = 0.09117286216515141;
    msg.z = 0.8045293393466612;
    msg.z_units = 123U;
    msg.cog = 0.25328970776231585;
    msg.sog = 0.30264727005078196;

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
    msg.setTimeStamp(0.7287464621681511);
    msg.setSource(15617U);
    msg.setSourceEntity(114U);
    msg.setDestination(13594U);
    msg.setDestinationEntity(1U);
    msg.label.assign("PPRYALKATYHQVFBWYWXDDDEUDIZELUCWOQMXOOMNUTBKETOIKNMKRZYAJUPVMURRYYCOPJKDAJBKSIV");
    msg.lat = 0.5828820185043023;
    msg.lon = 0.7177597384526611;
    msg.z = 0.6717034562154642;
    msg.z_units = 246U;
    msg.cog = 0.16322027729648214;
    msg.sog = 0.21654573257874155;

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
    msg.setTimeStamp(0.3579485536800088);
    msg.setSource(17434U);
    msg.setSourceEntity(164U);
    msg.setDestination(65278U);
    msg.setDestinationEntity(107U);
    msg.name.assign("YEJQZDOTVYAXNUMKPNCMHDOYAMNUBTGXRAQSRJJNKVMFFIMYCWYWDOCKXEKFXJLNBLPIZTIZBVIQPEILLOXNLRAUSGSSIIOLTHGYHNYDSDPOLVKPNBKXLZBCTWMDAZKVAVQQVVTXHAUSKRZQXDDWTEJLBWUZJQMYBIFPHGBAHCERSQFARSEWWHMVYZOPNECZRUDGCFGRBWUNPQWKYEHCTMKFGQGJAITDPHRSZTPBJOUGCJFLEXFIE");
    msg.value.assign("KBZBTFQVCZPXYGSRACRDPKTMFXXBLIETDQCWISGUEUBLNGXJWXHQYZMPQEYWWUJNHMD");

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
    msg.setTimeStamp(0.5120859556715849);
    msg.setSource(40390U);
    msg.setSourceEntity(9U);
    msg.setDestination(29516U);
    msg.setDestinationEntity(136U);
    msg.name.assign("THPOMLTDWHBAGAAOCWXGUZSCNOOKRYXKELUQYZQSUVAIAGYFKYOJCCVPGY");
    msg.value.assign("QSLTJAVQTQAUJEWDEWZLVTQUFPUFZFZWXICWJISHYPBKEFKRGHGABABOAQLWODHNBOMKSDPXUQQUVURTIAMSIWROAWDTCFMSEFNZZSEFWLY");

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
    msg.setTimeStamp(0.273681045725786);
    msg.setSource(15957U);
    msg.setSourceEntity(97U);
    msg.setDestination(9010U);
    msg.setDestinationEntity(223U);
    msg.name.assign("ZSWICANGFKRIBOUYQFVGWAYRSLETWQHGMAWYJNKGCRXJMSYZWLAJSY");
    msg.value.assign("VWICHCCKKZHBYESZAOYVENSOOKDRQOWHZQXOSAFGYGKKEGMDDKSHWTXWLADOLVNJHVNAHCTDITCKMPEBVQAUILIRHFXEGNFXTFJKMIBPLDRPFPWQYHFWXBFKLQRQJJJCZJGJRGTZIPUKJUODMUVIIGYAAPZZUBWSOJBGSCQNYXUEVNXUWLHOYBYOQWLRFEPZTXENMEDM");

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
    msg.setTimeStamp(0.07112710514295228);
    msg.setSource(3654U);
    msg.setSourceEntity(75U);
    msg.setDestination(18142U);
    msg.setDestinationEntity(43U);
    msg.name.assign("KDSVONLVLHZRPHUENAAIXDUGJQKIYRZCYSVJOLWCMBLWXAXMEOQEDUCXPGAFUILRQOGAQYHXYXYGGCHEOBDZRIKIGGQRMSXNFFPKUURIVHWBJYDMJKBJUPFKQFP");

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
    msg.setTimeStamp(0.8316319369288906);
    msg.setSource(30223U);
    msg.setSourceEntity(88U);
    msg.setDestination(15803U);
    msg.setDestinationEntity(83U);
    msg.name.assign("SGZSRMMWGZRAIMZYPCXXZXBNXXFRGBWEOYCGAKBNOUGXZRTVJRLFGAMLWVMLDOIFOYBUDEBBLHPKWFEIRKSPUTGJHEDRCCDTAIVFRDLYNODTOKRLBSQNIKITAUQHDJQW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GUDMTDSOPSOBWLUCKRGYSSPLBBFRRJIZCSFHGKAWDIVDFLJIGZGJVDXLBJBQEKYCNTZJLWHSWHXDVSUDFNCQVREGFUHVZXTYALPSHJMAFMNPAQMBFKOXAOXPCTQMYWXHYYKXERULPRGAWOUEWVGEVNDXFCESCQUPNVNLDLMKSKEPNUKOBOYETYQQQVKIRTZVXZHZPBM");
    tmp_msg_0.value.assign("FLIKNHTPTRAAWEPGLTQYYYPHQEVHZKZFJFZPLSMKLUGBTURTJQWJCXYBRMXGANBJIQBNWMCUHJSIUBGVENGJWDPIWFAXQNOUEXHZSPOWOTCANFWD");
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
    msg.setTimeStamp(0.4391067811324876);
    msg.setSource(22225U);
    msg.setSourceEntity(85U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(166U);
    msg.name.assign("MJDHGTKTBCRXDBNGHQTODEDBNJNZCNOVCYQIXEAPTZNDXWRUTAUO");

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
    msg.setTimeStamp(0.9109339658016423);
    msg.setSource(51889U);
    msg.setSourceEntity(2U);
    msg.setDestination(35388U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FNLYINLONTSHVVRUHZUHWEBJWPDWGHYCLYDTZESLGDUCEBBXPIUBVPGLKOGLDCFHLRLSJIDFTQYFEBPNEOSVAMRRAAZXESZMMGJJAWTKSDQUNSVCZ");
    msg.visibility.assign("ABGQQYCLJUWCACEOVROWWSTNQHVLBBRGDQUYYZYJE");
    msg.scope.assign("UQWZXLULLZSBBEOJEICLAETZJJTBHTIGKYJZQCMNMQFRR");

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
    msg.setTimeStamp(0.6104974802393186);
    msg.setSource(15939U);
    msg.setSourceEntity(66U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(209U);
    msg.name.assign("KKXGBZUCMSNWRVYFLWJNZGH");
    msg.visibility.assign("BNCGVCUTMQWB");
    msg.scope.assign("TJTLUKNIVMGABSIHDPOYGGZTRQVLERYMLHLECFAECUKTLEZNDTREOEYBAKAEZNIIKUXRDRFTOJWFXNSYZADCQXAPALNTDVMISMYVQBNJRRJGTYDBKJMYXBMYXQBIXDHQVECWAUGVGDRDEJFBOVWCXCZQFOFHSSPSHFKCUQXFCGQJKAMMNAWVUKOLJOLYCORHHMHIJPIHCJKPLUMSEVSHKLPWWQQNFYUTUBWOGZIDIUGWSZSVNXGBPNP");

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
    msg.setTimeStamp(0.27554182771920577);
    msg.setSource(41560U);
    msg.setSourceEntity(247U);
    msg.setDestination(57601U);
    msg.setDestinationEntity(14U);
    msg.name.assign("EMOJQYGANNCDPJZRWZDYAZLYHMDGMMOVJSDMDTMNNSIUWVPTRFWERJSCIEXIGOC");
    msg.visibility.assign("YCYBSIGFVVVGZTWBJXRJZQSRHIVSZJRTUHOINTRFOCTBIPEANLZJYNOEYWJJWRHLGGUQMUFLROXXAGKV");
    msg.scope.assign("PXVDMZLWCQYUHFVMZQCOGHFKMIFNFJDUIVMRZDIKROXZTBPHBKKPXWDZQAOYSLNPCKGTAWIDOSDNJKFKCAEWODABHZXHEVFFFMAYQYJDCUTBGHJQPWBZXUWQQLAWUVQEYTFTPNUUGUAWVEULHRWIRVJKNSOSHRRWARILHKLGRYINEEOIYVVCNLCKBPESNBZMOLHRXQB");

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
    msg.setTimeStamp(0.03315921720305992);
    msg.setSource(36516U);
    msg.setSourceEntity(2U);
    msg.setDestination(34085U);
    msg.setDestinationEntity(61U);
    msg.name.assign("AMTARTKBWKPUEZUOEDDUNCZPGUJSXCXHODWWPFIEBFBLMQXSQZTIQCOXRFVTSFOHVIMFSLLKWTEUGRJEKZMDBSVXAKNVEOWEXCOETUIWBLFCHNQBHEYIFNWEZAZVGYYSYXVGXANLJUCINJRHMOCIRQSNWUGJFJHHALLTSMPYZKTCLKSP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CIWYBQUGYVYCQOBSEPHPTZQRKCDYIURHPGALOMAEPHUMRVPHRRFKVTXKZQTWKZGDGAFWZGFSMHDSUALWFTGOSHFDNDSYCBWBHBNIRVGVCXZWMRJ");
    tmp_msg_0.value.assign("CEAITVULSQMMJLTYXOWDKHNCOCTYQJYKQB");
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
    msg.setTimeStamp(0.5703008787888686);
    msg.setSource(45523U);
    msg.setSourceEntity(211U);
    msg.setDestination(24783U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GZHFUKEFZBYCYIEGXLOVJWEOXNWHWMZWXRTTNBAPCKIXDULMEWFLJIKJFSNDDCHLOMJIHALYSZZAAPGFBFTLBXUJTSZPMEHDMNURUGSKSGDCO");

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
    msg.setTimeStamp(0.5388243755772059);
    msg.setSource(65132U);
    msg.setSourceEntity(199U);
    msg.setDestination(29084U);
    msg.setDestinationEntity(90U);
    msg.name.assign("QBSCPFBGZITXGEHXOKKROXUYLMGXZTCFBRXLCJDVTUYJZKKENBXCDI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("COJKWKWITTAOTVBUQTNWNWGDOWGEKFFUEXZXNCAJPAVMKHZZZUEMQJETYFUPZXXMCLMBGIAYKISUFODBIHHRLADJOPZIZRPAGYVNYBUIFGSBDJTPGTSBERLRQWESBYPJVZXFCGYKEPDNBTD");
    tmp_msg_0.value.assign("FLMKKVJHWNLHZMGAYCXEQRUAUIKOSGVXIWAQOKUSZWJYJDDFBOIBFBENPKYMHKDLRHDVZDSMSMQJTISZGAKBULVKBBUFXYOLGDDRRWZEXPAQVASPYJPHVCQTSMNKJFBYURYQDEFLYNTTHSZHCILFGPYUGWFWLEMYPWZOCTQXIPUADJFRNW");
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
    msg.setTimeStamp(0.14546257490837755);
    msg.setSource(51642U);
    msg.setSourceEntity(220U);
    msg.setDestination(37722U);
    msg.setDestinationEntity(194U);
    msg.name.assign("PPUIGBBZGZAVCVHHUCEEVZIYWSTARTRIJDAKHFCXMLVNUSXXSZ");

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
    msg.setTimeStamp(0.07825119530729541);
    msg.setSource(40047U);
    msg.setSourceEntity(8U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(201U);
    msg.name.assign("NOODGDQEPCJRKKOGTRASAALZTCNMOFTIKSTWPPESELIOXHIQEDRSYEARNJGHQEOADXTFKRPBZBXSDZHMBCJMWRXIOMNWVZYCZFBQIUNHMINXFACAUIUHNKWAUBFQKBGSOJBJWKUXLNQXIPDSHVTBGGYVCEIUTZTBVKYUVKXFCUJPLAOZSFWBMFLZJHWSTFJQGOYLMVEXEJYKZYAJTCEVMXWDRDGPUDGRQVGRH");

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
    msg.setTimeStamp(0.7128220258584127);
    msg.setSource(50190U);
    msg.setSourceEntity(23U);
    msg.setDestination(18943U);
    msg.setDestinationEntity(192U);
    msg.name.assign("QFXCWQXZVBWXUIOCRBHTFSACUYESWUCSMNJRCPGNFRMUHILNLYDPCPODFFUIFBFEKBXUHKKAOWSVCXNTNIAYMVODZZYVPOSQRRMWUPPKNBIENWGNRRNWHJHTLFYIXGKGHEAZLQZGJJSODKDRKGXTVARMAQFDXEXQITUVLQUWQUSMYQVCPMDXJTSODFCJDEL");

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
    msg.setTimeStamp(0.37068002096791575);
    msg.setSource(43236U);
    msg.setSourceEntity(113U);
    msg.setDestination(39750U);
    msg.setDestinationEntity(231U);
    msg.timeout = 222506386U;

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
    msg.setTimeStamp(0.12689257680071508);
    msg.setSource(44575U);
    msg.setSourceEntity(73U);
    msg.setDestination(15831U);
    msg.setDestinationEntity(3U);
    msg.timeout = 2283851444U;

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
    msg.setTimeStamp(0.1666240872764596);
    msg.setSource(32580U);
    msg.setSourceEntity(129U);
    msg.setDestination(23110U);
    msg.setDestinationEntity(237U);
    msg.timeout = 664274511U;

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
    msg.setTimeStamp(0.5295599211842555);
    msg.setSource(45197U);
    msg.setSourceEntity(4U);
    msg.setDestination(1261U);
    msg.setDestinationEntity(49U);
    msg.sessid = 522527781U;

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
    msg.setTimeStamp(0.7846728873411496);
    msg.setSource(20797U);
    msg.setSourceEntity(86U);
    msg.setDestination(30273U);
    msg.setDestinationEntity(194U);
    msg.sessid = 1581038745U;

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
    msg.setTimeStamp(0.08705754985395908);
    msg.setSource(26472U);
    msg.setSourceEntity(213U);
    msg.setDestination(27173U);
    msg.setDestinationEntity(228U);
    msg.sessid = 691510897U;

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
    msg.setTimeStamp(0.8173961729641221);
    msg.setSource(62607U);
    msg.setSourceEntity(87U);
    msg.setDestination(48163U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3478411180U;
    msg.messages.assign("OGPPBSERDVEODTJFQETEHMZTDQDRRUVHNIUSVZBAATHDFSTENFJENPANVOKGBPWBT");

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
    msg.setTimeStamp(0.17006178908964364);
    msg.setSource(1068U);
    msg.setSourceEntity(1U);
    msg.setDestination(52648U);
    msg.setDestinationEntity(104U);
    msg.sessid = 275086303U;
    msg.messages.assign("KLPQYRDLSXHIICNTTEWNRPKZYDQEBYGPHECHFPCAMVOPWLXKFRLGVMBFTZWKQJCKXLUTCFVZRCYNZDBTUMMQOHSNOAABZDQBOQKASUEKNXXTPNXHNDKTRRP");

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
    msg.setTimeStamp(0.09889718205811016);
    msg.setSource(11099U);
    msg.setSourceEntity(18U);
    msg.setDestination(34305U);
    msg.setDestinationEntity(177U);
    msg.sessid = 2032949620U;
    msg.messages.assign("IJOKMSKBKHDRQOYHKTLXV");

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
    msg.setTimeStamp(0.7821719671092447);
    msg.setSource(32933U);
    msg.setSourceEntity(94U);
    msg.setDestination(20703U);
    msg.setDestinationEntity(60U);
    msg.sessid = 166610618U;

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
    msg.setTimeStamp(0.7844485566355301);
    msg.setSource(44719U);
    msg.setSourceEntity(90U);
    msg.setDestination(23518U);
    msg.setDestinationEntity(61U);
    msg.sessid = 4060369485U;

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
    msg.setTimeStamp(0.5700250918641108);
    msg.setSource(41383U);
    msg.setSourceEntity(122U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(42U);
    msg.sessid = 1711420444U;

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
    msg.setTimeStamp(0.38453856894184013);
    msg.setSource(38372U);
    msg.setSourceEntity(65U);
    msg.setDestination(41652U);
    msg.setDestinationEntity(91U);
    msg.sessid = 2787547386U;
    msg.status = 248U;

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
    msg.setTimeStamp(0.36290824130630184);
    msg.setSource(28351U);
    msg.setSourceEntity(81U);
    msg.setDestination(22921U);
    msg.setDestinationEntity(42U);
    msg.sessid = 715669393U;
    msg.status = 122U;

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
    msg.setTimeStamp(0.08739698585737266);
    msg.setSource(65030U);
    msg.setSourceEntity(107U);
    msg.setDestination(37236U);
    msg.setDestinationEntity(195U);
    msg.sessid = 3347748500U;
    msg.status = 220U;

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
    msg.setTimeStamp(0.032384253611026814);
    msg.setSource(28840U);
    msg.setSourceEntity(225U);
    msg.setDestination(2698U);
    msg.setDestinationEntity(47U);
    msg.name.assign("PPRXZATPXQGDKDFDNVKPUWXGCVSCSLUMLQSSOSQRVUTKEHPMTLOUYHZUVHIZHGOXQDKMNHGSKIFQXNWOFCQWSBEFVYADBTAWZOLCYYJJYKLJNULNAIIFDTRUGWZTJRHNAIHPZWYBPQPTCZVEJYSMBOLBTDRRSFSRYJBOKPJCKZMOZLVAKMZRCFHVBXTYJOWWJETNNDUIOHQEMMIAXKLEGWNHDU");

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
    msg.setTimeStamp(0.7730726975617151);
    msg.setSource(60895U);
    msg.setSourceEntity(219U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(185U);
    msg.name.assign("TLUNCSEGWXOPE");

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
    msg.setTimeStamp(0.30473651381290734);
    msg.setSource(11741U);
    msg.setSourceEntity(131U);
    msg.setDestination(65434U);
    msg.setDestinationEntity(207U);
    msg.name.assign("QZYDLTKEFPVKAETCSJKEFDZDULMYJCTQRGFPEHIWZIRKEAVXOSORVCUAWWRTW");

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
    msg.setTimeStamp(0.06066241931609995);
    msg.setSource(34443U);
    msg.setSourceEntity(53U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(222U);
    msg.name.assign("OTNRHGWPGOAUKQYAVSJIE");

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
    msg.setTimeStamp(0.20939054558587356);
    msg.setSource(38013U);
    msg.setSourceEntity(1U);
    msg.setDestination(44085U);
    msg.setDestinationEntity(28U);
    msg.name.assign("BYZJHGKAJJCRWYRBICIZAMYZKAMTQMVOFPHPGFALJSXYCEEOVUUVDNXXLXWUKTQORUHFMRUNRJGFDYQBTDVOBDVMCCHW");

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
    msg.setTimeStamp(0.26505531582571373);
    msg.setSource(175U);
    msg.setSourceEntity(42U);
    msg.setDestination(53152U);
    msg.setDestinationEntity(57U);
    msg.name.assign("FMLLPLQNCKEUAORSXMHHIVZSFKYVYDDYDINMXQOYGMIGJOZVEFGRRHJYLSAFBSB");

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
    msg.setTimeStamp(0.8507869032313393);
    msg.setSource(3452U);
    msg.setSourceEntity(134U);
    msg.setDestination(51932U);
    msg.setDestinationEntity(18U);
    msg.type = 36U;
    msg.error.assign("ZCQSRIUTEKCDRPNPTWLRXGNGHLOYEDFFCYTOQVYIUPGIOIHTFMOGISKINMNJGZIMVJARBDYWZDDZAGNJZDHFRJINLUKBYXQPAXJXIVCRYUXXLHKEMCATXSLSMUHPXODEYWPZKZHRQWBFWBKL");

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
    msg.setTimeStamp(0.2886347329588481);
    msg.setSource(23145U);
    msg.setSourceEntity(196U);
    msg.setDestination(64882U);
    msg.setDestinationEntity(36U);
    msg.type = 79U;
    msg.error.assign("GLSIHRXIULKYLNKMUMPOBLXTIZZASEKIFMMYCUXWDXYPUZJAHNXBJMDQESHBDUUPOWFGKGBAVQOSMQKMSWANAPCWMYFRMTHPFLFOVVGEBVKKPQCTRPVHWPLVQJOOANZJFQGXIIIKFUIJQEENANLIHYCCNRNWVGZTTLGWZEPZARDDOJASHZIZLNVRJOSXUGTDEZBWCVFBYTSCQRRTNHBFDDY");

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
    msg.setTimeStamp(0.86749644563838);
    msg.setSource(43048U);
    msg.setSourceEntity(193U);
    msg.setDestination(39410U);
    msg.setDestinationEntity(49U);
    msg.type = 178U;
    msg.error.assign("QAOKOJNTASRONUYWSVZHBKMPXXQAASRKFRBFQLGDGMMUHDNVLXLXAWFHJDHOHJQIRGCBHIJIKHPELGU");

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
    msg.setTimeStamp(0.20162962478421265);
    msg.setSource(64721U);
    msg.setSourceEntity(236U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(183U);
    msg.seq = 38712U;
    msg.sys_dst.assign("ZTXEKFTWNJKCAQSYATGYDPPSICIAAHMVWMTWUQPLZONUDMYRFPMOFHIBCNYFNASUZDGISHZUJOFVHFGJXXNQFLGGQDRHDMHCCBTVMJCYPUXSCUOKXWYXPVHPAHSGSVLXBZEUCEBEAQLELWOKNBZYVLMKVWTGD");
    msg.flags = 134U;
    const char tmp_msg_0[] = {-23, -26, -33, -86, -119, -109, -24, -67, 80, -123, 113, 54, -114, -26, 40, 123, -52, -87, 83, -66, -38, 14, 108, -38, 98, -96, 12, 11, -112, 116, 25, 113, -113, 70, -64, -77, 51, -85, -19, 89, 73, 31, 17, 51, -1, 26, 28, 0, 14, -101, 103, 49, -97, 19, 89, -19, 76, -98, 65, -42, 106, 49, 59, 71, 18, 98, -9, -92, -24, 67, -124, -101, 92, 121, 5, 14, 42, -79, -50, -50, 97, -112, -7, -2, 52, 46, -61, -50, 104, 73};
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
    msg.setTimeStamp(0.3671422840276982);
    msg.setSource(25876U);
    msg.setSourceEntity(110U);
    msg.setDestination(54756U);
    msg.setDestinationEntity(54U);
    msg.seq = 8848U;
    msg.sys_dst.assign("BGMOQGJYHXPLSRZMRLTGECDQKPHDJCJIYNZZOFIBKRSBJXPNJVFAUSZKFMPQEYOVUKIITOFYIGKMQWTTUVAJRRBNEISOHLYYNLTZPIPCCNBRSCCIADLMASBXJULOTJFOWNB");
    msg.flags = 92U;
    const char tmp_msg_0[] = {105, -1, -74, 66, 59, -125, -110, -83, -46, -91, -90, 96, 33, 63, -54, -25, 117, 84, -94, 18, -10, -11, 107, 14, -20, 98, 118, 123, -19, -109, -113, -15, -62, 30, -10, 27, -4, -67, 36, 74, -14, -23, -99, -63, -23, 98, 58, -98, -100, -28, -100, -92, -42, 3, -39, 24, 84, -88, -90, -100, 11, -7, -35, -117, 71, -110, 39, 114, 85, -11, 8, 47, -40, 49, -118, 83, 55, 92, -1, 43, -87, -100, -20, -88, -23, -73, 63, 38, -122, 21, -20, -14, 12, 56, 24, 86, 23, 105, 92, -84, -35, 48, 46, 113, 122, -42, 78, -90, 28};
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
    msg.setTimeStamp(0.7900219547112063);
    msg.setSource(7170U);
    msg.setSourceEntity(16U);
    msg.setDestination(454U);
    msg.setDestinationEntity(224U);
    msg.seq = 4570U;
    msg.sys_dst.assign("QPAGCJWPYUAOOOIKYQIQLTYBLHCGPFRPASVTFDB");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-35, 69, -100, -89, 46, -2, -29, 19, -70, 30, -70, 33, -20, 85, 38, 46, 33, 2, 27, -128, -117, 77, -26, -113, 25, -40, -78, -70, 42, 8, -121, 90, -73, 35, 122, -123, -19, 96, 87, 65, -84, 95, 6, -39, 113, 78, 6, 79, 58, -9, -124, 50, -73, 77, 107, 56, -112, 7, 68, -29, -4, -98, -47, -107, 89, 98, 13, 108, -80, 3, 23, -104, -44, -90, -49, 78, -33, -6, -71, -72, -97, 123, -10, -90, -39, 113, 7, -24, -20, 66, -65, 125, -55, -73, 70, 87, -6, -4, 12, 94, 79, -102, -100, -111, -91, -32, -108, -81, 121, 106, 103, 38, 120, 39, 34, -111, 52, -74, 34, 80, 28, -4, 31, -44, -3, 66, -32, -87, -31, 49, 25, 38, 7, -1, 75, -37, -36, -19, 117, 93, -38, 120, 109, -36, 8, -16, 27, 21, -1, 85, -21, 85, -61, -60, -12, 45, 35, -58, 25, -111, -34, -118, -73, -70, -80, 12, -53, 40, -43, -77, 17, -6, 54, -93, 74, 56, 26, 115, 87, -86, -32, 75, -42, -22, 18, 117, -118, -40, -116, 40, 111, 70, -14, -38};
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
    msg.setTimeStamp(0.5618160851912745);
    msg.setSource(870U);
    msg.setSourceEntity(192U);
    msg.setDestination(9483U);
    msg.setDestinationEntity(210U);
    msg.sys_src.assign("WTDFNTHKMIJZLYYWXUCDSLMLLXTBTHTPESVDNMITOKJUFEDKRAGNZWQWJENMQAWLNJDTAGZFHPIJZXPOPDQDVGSKVCWEPCKDRKSZPUCXLQRIVOPZGHSYTGEVUJFBPBIFCVALAMTFQBEKJYXSDYVEMPLKJYISRZNNKVHRIEYNYMQRCANXOVO");
    msg.sys_dst.assign("XXLMQCTOUWLHLKFMEUEVQMNKRJBTFTBOPNELKWJAUOUVCIVNYPDWMVIAAQPCQDFKITQLZHEPRJUEJTQGLCSGFYSHDWNMOPTB");
    msg.flags = 150U;
    const char tmp_msg_0[] = {-6, 39, 88, 109, 11, 89, -91, -5, -91, -102, 109, -44, -15, 122, 54, -93, -88, 11, -42, 56, -89, -94, -75, -120, -115, -127, 108, 14, 104, -74, 117, -103, -11, 70, -100, -28, 105, -76, 97, 2, -117, -11, -108, 78, -52, -78, 110, -48, 48, -57, 100, 116, 99, 41, 51, -38, 61, 14, -21, -126, -28, -27, -63, -104, -21, 125, -66, -95, -119, -92, -87, -124, -32, 49, -25, 60, -24, -106, 34, 69, 14, -48, -117, -32, 125, -95, 47, -45, -117, -9, -43, -87, 18, -44, 85, -29, 36, 84, 40, 118, 38, 113, -110, -70, 94, -34, -20, 25, 11, -92, -37, 118, -31, 110, 9, -13, 31, -107, 104, 56, -76, -110, -26, -2, 103, 106, 19, -3, -86, -45, -65, -65, 104, -38, 73, -116, 81, -68, -24, 109, 75, 78, -27, -99, -28, 5, -118, -91, -8, -36, 123, -6, -12, -37, -105, 20, 16, 26, 98, -80, 8, 74, -125, -107, 13, -103, 105, -110, -8, 63, 24, -100, 104, 5, 23, 120, 59, -109, -55, 50, -5, -18, 63, -51, 26, 92, 33, -128, 65, -104, -10, 118, 100, 108, -59, -110, 107, -90, 61, 118, 17, -16, 85, -49, -76, -104, 48, -98, -23, 66, -69, 31, 16, 9, 81, 55, -111, -108, 126, 22, 70, 74, -20, -126, 15, -65, 90, 74, 116};
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
    msg.setTimeStamp(0.7675984541130233);
    msg.setSource(16650U);
    msg.setSourceEntity(209U);
    msg.setDestination(45069U);
    msg.setDestinationEntity(182U);
    msg.sys_src.assign("ONPNUBEEASLXPBGTFVGFBDQCNUITZUCEYGVLTYDLHMH");
    msg.sys_dst.assign("JSPETNYTSVZNNMXIBZMETGRPZGRZXSEVUAMXDSPDZVHHKCDMSPRIUNOLWQSWKUYORJDFCYUQXXWCCEUXVOCGKTOIEEGIFPXOMSHFHWZMSDULMDVDMQXALJPISPVCNOLKBQPHHKJHYBEYDLJQDYSFTGGGRYAJLITVFHUCGWKRWRFFIUZQZFERPJJYUWQQVIOFNI");
    msg.flags = 179U;
    const char tmp_msg_0[] = {87, -23, 95, 68, -18, -97, -112, -79, 17, 95, -33, -124, -18, 38, 82, -119, -100, -11, -28, 16, 78, 53, 82, 60, -109, -69, -74, -41, 91, 110, 83, -52, -30, 13, -115, -42, 110, -30, 118, 110, -113, -28, 35, -24, 32, 115, -26, -28, -29, -78, -115, 4, 80, -14, 115, -111, -66, -87, 70, -85, -14, 115, -67, 119, 111, -117, 80, 92, 59, 85, 57, 30, -87, 45, 33, 114, 51, -41, -6, -65, -17, 46, 126, -63, -79, -13, -24, -27, 103, 81, -9, 66, -27, 52, 6, -17, 6, 42, -53, -6, -78, 61, 54, 33, 29, -26, -63, -125, 10, -48, 14, 68, 106, -34, 96, -114, -9, -72, -67, 50};
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
    msg.setTimeStamp(0.3769735579376817);
    msg.setSource(62256U);
    msg.setSourceEntity(182U);
    msg.setDestination(55745U);
    msg.setDestinationEntity(115U);
    msg.sys_src.assign("BBDOAITJSZHJRRIURVAUIJYNFUENMJ");
    msg.sys_dst.assign("GPCXKWGNDGHFUBBWAQYNWSJUBZEUYYLEWQWLXOMJZMZIHGRNSOVJKUXXGOMHWQKLKBDCATTDAMMFGXTDFQFSRLKXVZSTGPONFNKZIAPEUTWZWHIMAGGHPSTVYRTKOCKMJSUJEIIRLBXNWUPIQMYHMBA");
    msg.flags = 215U;
    const char tmp_msg_0[] = {125, 58, -6, 95, -54, -18, 85, 3, -84, 118, 53, -1, 13, -7, -90, -68, 55, 15, -108, 107, 33, 58, -117, -82, -10, -93, -66, -127, -39, 43, -126, 115, -51, -123, -11, -2, -4, -15, -64, -55, -57, -96, -41, 46, 105, 13, 75, 57, -113, -24, -42, -63, 98, 87, -40, 117, 40, -104, 53, -97, 0, -101, 76, -57, -91, -105, -111, -107, -20, -56, 103, -104, -91, -61, 89, -102, -5, -45, 16, -21, -58, -39, -44, 47, 115, 49, 83, 22, 18, -27, -106, -57, -75, 125, 72, 82, -56, 100, 66, -122};
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
    msg.setTimeStamp(0.9875576921209797);
    msg.setSource(60205U);
    msg.setSourceEntity(199U);
    msg.setDestination(41139U);
    msg.setDestinationEntity(163U);
    msg.seq = 11167U;
    msg.value = 152U;
    msg.error.assign("USQHSYUZGWKEJJORUFBSBVCXTNSNRHGWZNZJGDUZCUBKYIKDPVOWYKXDLPUTNBSFOHYEFWKKIWQQTVCEGJLTRSTVLAKAMOYXZCRNNKONVUCZPMFNMVLSAHFUMWQNJPEMMCPALIHRBQDBXCQSHDEOTYGXTLQMIAPZRHQGDE");

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
    msg.setTimeStamp(0.8646974978627727);
    msg.setSource(42194U);
    msg.setSourceEntity(154U);
    msg.setDestination(11615U);
    msg.setDestinationEntity(187U);
    msg.seq = 19194U;
    msg.value = 72U;
    msg.error.assign("SYCDFFXAJDTALPEMHBNXDZXIGVDHSXIZPCEUWGLVREBLTIZJPNGWIFCWVJKAIPZRVTUHXTNHQCUMGXICHSWDYOQLDJTGWMXEVBGHKOYGSFCNMPYUFKQBEHNJYKEWMGLHDMATKPVXIJOUAKWJBXXNHLYAWBKOQZUWODFVHTRSYSRVGTTJQQZZABJKDNNGFUBYZUWCCESOPCALELQRYBVMUZPSOKTOZIFENKEYMPBLRRCFAMQORIAJQNODL");

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
    msg.setTimeStamp(0.8564200244260444);
    msg.setSource(47733U);
    msg.setSourceEntity(238U);
    msg.setDestination(18580U);
    msg.setDestinationEntity(55U);
    msg.seq = 32290U;
    msg.value = 55U;
    msg.error.assign("YVTJLQFDQRGZIUMPUPUKCWKMZFRROSLTLHVDNDQHJHVTGFYMMFQQANWSEXFCUOQTKXOXVXNNVNEISABGCMQLEORPCURQXSEWEZQWMNDDJKNTSEPOAGKQHXUJEXJDLHJSFDYJWPKXFVZWBIKLZXCZLBVVUGMIIMNOYZIADWFCPHHSLBJARJCMOTZWPABJZSABTZAYBYGSHWIKRAPGAWUSTEBRYOEPHKIYCGYMIRNBREIBGCFUUPVC");

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
    msg.setTimeStamp(0.9027265867652999);
    msg.setSource(52012U);
    msg.setSourceEntity(162U);
    msg.setDestination(11646U);
    msg.setDestinationEntity(28U);
    msg.seq = 44957U;
    msg.sys.assign("STTOWCZQCRGPCNMQONKELUXPDBDFXMLPPAJHBLEXVSWIZGNXUYUWEYMFUIMKJAZKZZEJBLFPMUGDQOTEQBBFEKDRDIQUIDARIBFJVCDFBMYXMVICRTACYOPVGBQXWRWGPZEVYT");
    msg.value = 0.9073034142009193;

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
    msg.setTimeStamp(0.37320220673225546);
    msg.setSource(51733U);
    msg.setSourceEntity(113U);
    msg.setDestination(2619U);
    msg.setDestinationEntity(114U);
    msg.seq = 42440U;
    msg.sys.assign("TDAWAOIRRHFPDPHHXXHEKGACANTPGWZFQOGNWJFWUDTRDIUUOUCIVYWAOKQTQNUGYKBGDMCDAFVVQTSMHAXCXZHEBOWYVFCKYNRSAZFPWXDCTSXUSYXFCMBODWBHYQRPXMGBUGHZVLBJIMFJOEURIZ");
    msg.value = 0.09355434307790522;

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
    msg.setTimeStamp(0.7305072953107572);
    msg.setSource(59127U);
    msg.setSourceEntity(121U);
    msg.setDestination(63476U);
    msg.setDestinationEntity(79U);
    msg.seq = 35886U;
    msg.sys.assign("QEUOGTSYXQVFJFYKGEZKDAHOTWRSBNZOYDMINDWESMHJNWADFSSCLAPGHVBVABYSJJCCEKGXCPCQXEXHFSCLTNQGCBAIUEMTFPCLKAOAJLMXRQDUWAZTXPKPOGZGCPZIVDBRUEFOOZLEJBDNOTUVDWHPTUZZRLHIIRGUKTQIYNIDSWMJPMIRTBYQZRVKWJUN");
    msg.value = 0.933666734235156;

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
    msg.setTimeStamp(0.33754256118802095);
    msg.setSource(33618U);
    msg.setSourceEntity(21U);
    msg.setDestination(48938U);
    msg.setDestinationEntity(144U);
    msg.seq = 5727U;
    msg.sys_dst.assign("HWQYDTMWCKXXBLZKIBIVPUWHJNHKYBATNEREGDHKTUEIJWMXAFTJLKGCAUSBOQACTVCQJQBDPYFSPEQRVIKUQEMSLBW");
    msg.timeout = 0.5365383741965135;

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
    msg.setTimeStamp(0.17671814622136972);
    msg.setSource(59999U);
    msg.setSourceEntity(180U);
    msg.setDestination(57159U);
    msg.setDestinationEntity(75U);
    msg.seq = 30062U;
    msg.sys_dst.assign("RVVZOCDZQYPEGSDOLRZAYRZRQNATFETVPKICHMXXMQAYJSQLSWUTAHLYFECJUTCYFBMFNNJKNWPMPDLGDNSTYWWINDGFCFIORNJVKWDESZZEXIHKQONVBWWQTXETQIHGISOYPVOBVUSHWENFLPBWAJRSXQLBCFHFSUDIZLBXOMQKGOCCCMKHQBTEHJOIJAOKUHIKRXPEUXAUGPABYLPBHPJLMCKDDSMYKMVJNABZIYRRZGDL");
    msg.timeout = 0.5716638297574392;

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
    msg.setTimeStamp(0.6119780635623561);
    msg.setSource(47657U);
    msg.setSourceEntity(39U);
    msg.setDestination(41645U);
    msg.setDestinationEntity(210U);
    msg.seq = 8981U;
    msg.sys_dst.assign("KUONLBTXPCILZPHMORBCRUVIKFQKPCRVRBYTVXDRHEJWRKVQLKPJDDYXPXXDZWZNUXUFIKPRVNBWNFCHHALDNXAVUSTZMIGXCMGBLORJQAJWUCZCOJYPJCTMTIIE");
    msg.timeout = 0.5452374714485847;

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
    msg.setTimeStamp(0.9657031360063646);
    msg.setSource(20491U);
    msg.setSourceEntity(95U);
    msg.setDestination(39709U);
    msg.setDestinationEntity(29U);
    msg.action = 81U;
    msg.longain = 0.2214689622024606;
    msg.latgain = 0.2466289547787015;
    msg.bondthick = 3182697883U;
    msg.leadgain = 0.351031665078646;
    msg.deconflgain = 0.11295401327567267;

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
    msg.setTimeStamp(0.32762434432295906);
    msg.setSource(30776U);
    msg.setSourceEntity(66U);
    msg.setDestination(1214U);
    msg.setDestinationEntity(194U);
    msg.action = 216U;
    msg.longain = 0.3696196760837317;
    msg.latgain = 0.895618078489762;
    msg.bondthick = 101928054U;
    msg.leadgain = 0.3564477709431423;
    msg.deconflgain = 0.1607389523526651;

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
    msg.setTimeStamp(0.19120217912068227);
    msg.setSource(16746U);
    msg.setSourceEntity(41U);
    msg.setDestination(28591U);
    msg.setDestinationEntity(37U);
    msg.action = 1U;
    msg.longain = 0.04330661107928613;
    msg.latgain = 0.8945950811695043;
    msg.bondthick = 656244060U;
    msg.leadgain = 0.6291534687342965;
    msg.deconflgain = 0.5427507199045661;

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
    msg.setTimeStamp(0.8616786801981833);
    msg.setSource(27856U);
    msg.setSourceEntity(169U);
    msg.setDestination(32071U);
    msg.setDestinationEntity(159U);
    msg.err_mean = 0.6601509912874677;
    msg.dist_min_abs = 0.003186736321303507;
    msg.dist_min_mean = 0.7760457572664113;

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
    msg.setTimeStamp(0.984675153499579);
    msg.setSource(40442U);
    msg.setSourceEntity(46U);
    msg.setDestination(4713U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.02652874749033618;
    msg.dist_min_abs = 0.3366723899352856;
    msg.dist_min_mean = 0.05128496213224443;

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
    msg.setTimeStamp(0.7832182814896738);
    msg.setSource(43408U);
    msg.setSourceEntity(43U);
    msg.setDestination(31730U);
    msg.setDestinationEntity(18U);
    msg.err_mean = 0.11608864265049534;
    msg.dist_min_abs = 0.6658540383140907;
    msg.dist_min_mean = 0.45920069373872885;

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
    msg.setTimeStamp(0.33259080933177154);
    msg.setSource(4712U);
    msg.setSourceEntity(60U);
    msg.setDestination(6312U);
    msg.setDestinationEntity(20U);
    msg.action = 84U;
    msg.lon_gain = 0.924319064109597;
    msg.lat_gain = 0.03107896693482981;
    msg.bond_thick = 0.3549330928689036;
    msg.lead_gain = 0.5233741376559289;
    msg.deconfl_gain = 0.8148455624574991;
    msg.accel_switch_gain = 0.9507273596647579;
    msg.safe_dist = 0.9175888770645247;
    msg.deconflict_offset = 0.8369877068628352;
    msg.accel_safe_margin = 0.2925667543316053;
    msg.accel_lim_x = 0.44637601180902986;

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
    msg.setTimeStamp(0.04430820952528769);
    msg.setSource(48484U);
    msg.setSourceEntity(132U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(55U);
    msg.action = 69U;
    msg.lon_gain = 0.38747216261408757;
    msg.lat_gain = 0.13995612060505513;
    msg.bond_thick = 0.056642435377400324;
    msg.lead_gain = 0.06934757691023796;
    msg.deconfl_gain = 0.7837307961983853;
    msg.accel_switch_gain = 0.30254762399463186;
    msg.safe_dist = 0.03478343244802484;
    msg.deconflict_offset = 0.4572209638974082;
    msg.accel_safe_margin = 0.1680678846635193;
    msg.accel_lim_x = 0.6538951633913149;

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
    msg.setTimeStamp(0.3081246998566518);
    msg.setSource(33468U);
    msg.setSourceEntity(11U);
    msg.setDestination(32448U);
    msg.setDestinationEntity(28U);
    msg.action = 99U;
    msg.lon_gain = 0.001192324057639027;
    msg.lat_gain = 0.5474675145736785;
    msg.bond_thick = 0.532081501484747;
    msg.lead_gain = 0.15870286779511866;
    msg.deconfl_gain = 0.4637907263448051;
    msg.accel_switch_gain = 0.1622579590670894;
    msg.safe_dist = 0.4601391278594451;
    msg.deconflict_offset = 0.025921466392263892;
    msg.accel_safe_margin = 0.9921277540209865;
    msg.accel_lim_x = 0.6444593982030523;

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
    msg.setTimeStamp(0.18939935252033102);
    msg.setSource(11529U);
    msg.setSourceEntity(185U);
    msg.setDestination(41592U);
    msg.setDestinationEntity(104U);
    msg.type = 199U;
    msg.op = 204U;
    msg.err_mean = 0.24764398768185447;
    msg.dist_min_abs = 0.2209667772051478;
    msg.dist_min_mean = 0.4518624042930579;
    msg.roll_rate_mean = 0.6496590816814606;
    msg.time = 0.12487558033809387;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 211U;
    tmp_msg_0.lon_gain = 0.4597306242170107;
    tmp_msg_0.lat_gain = 0.5496916653800011;
    tmp_msg_0.bond_thick = 0.7497487646376715;
    tmp_msg_0.lead_gain = 0.07438336153162517;
    tmp_msg_0.deconfl_gain = 0.7810519911147128;
    tmp_msg_0.accel_switch_gain = 0.8650664693050253;
    tmp_msg_0.safe_dist = 0.07278322050455999;
    tmp_msg_0.deconflict_offset = 0.8784780218427604;
    tmp_msg_0.accel_safe_margin = 0.6912752307744664;
    tmp_msg_0.accel_lim_x = 0.28648830048676743;
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
    msg.setTimeStamp(0.9959069278349906);
    msg.setSource(34109U);
    msg.setSourceEntity(74U);
    msg.setDestination(44105U);
    msg.setDestinationEntity(240U);
    msg.type = 242U;
    msg.op = 137U;
    msg.err_mean = 0.03252417580281852;
    msg.dist_min_abs = 0.3788570540703702;
    msg.dist_min_mean = 0.4257503507939181;
    msg.roll_rate_mean = 0.8363486336267836;
    msg.time = 0.250172135681589;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 231U;
    tmp_msg_0.lon_gain = 0.11132310706182458;
    tmp_msg_0.lat_gain = 0.9909250031449801;
    tmp_msg_0.bond_thick = 0.8787927430378557;
    tmp_msg_0.lead_gain = 0.9131574193533557;
    tmp_msg_0.deconfl_gain = 0.50944426614323;
    tmp_msg_0.accel_switch_gain = 0.5918909633310622;
    tmp_msg_0.safe_dist = 0.7356663335719844;
    tmp_msg_0.deconflict_offset = 0.02350373951958551;
    tmp_msg_0.accel_safe_margin = 0.46249916268785374;
    tmp_msg_0.accel_lim_x = 0.43936242709331896;
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
    msg.setTimeStamp(0.7664699949918462);
    msg.setSource(9748U);
    msg.setSourceEntity(176U);
    msg.setDestination(65487U);
    msg.setDestinationEntity(194U);
    msg.type = 137U;
    msg.op = 115U;
    msg.err_mean = 0.5134059093548222;
    msg.dist_min_abs = 0.7969347577954201;
    msg.dist_min_mean = 0.39431951707045076;
    msg.roll_rate_mean = 0.7528615587835797;
    msg.time = 0.12246548994241313;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 61U;
    tmp_msg_0.lon_gain = 0.6308134658590983;
    tmp_msg_0.lat_gain = 0.7382885606800657;
    tmp_msg_0.bond_thick = 0.6587346988970466;
    tmp_msg_0.lead_gain = 0.6804927801866134;
    tmp_msg_0.deconfl_gain = 0.16452485537367234;
    tmp_msg_0.accel_switch_gain = 0.09601292880861734;
    tmp_msg_0.safe_dist = 0.455473060030692;
    tmp_msg_0.deconflict_offset = 0.45758617432937976;
    tmp_msg_0.accel_safe_margin = 0.14109537787972026;
    tmp_msg_0.accel_lim_x = 0.6712067934774247;
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
    msg.setTimeStamp(0.8184213384547907);
    msg.setSource(48658U);
    msg.setSourceEntity(20U);
    msg.setDestination(27735U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.4078291647970864;
    msg.lon = 0.18750896342944123;
    msg.eta = 1103916288U;
    msg.duration = 55862U;

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
    msg.setTimeStamp(0.8129733796113771);
    msg.setSource(60113U);
    msg.setSourceEntity(234U);
    msg.setDestination(18719U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.8062976068399658;
    msg.lon = 0.21822181723968959;
    msg.eta = 4241189930U;
    msg.duration = 60007U;

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
    msg.setTimeStamp(0.8865775857957588);
    msg.setSource(1694U);
    msg.setSourceEntity(197U);
    msg.setDestination(7166U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.11153619790755553;
    msg.lon = 0.9621247532490589;
    msg.eta = 3795519190U;
    msg.duration = 59787U;

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
    msg.setTimeStamp(0.27452470600749135);
    msg.setSource(18871U);
    msg.setSourceEntity(193U);
    msg.setDestination(3042U);
    msg.setDestinationEntity(9U);
    msg.plan_id = 43659U;

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
    msg.setTimeStamp(0.09177947603017145);
    msg.setSource(20048U);
    msg.setSourceEntity(14U);
    msg.setDestination(43671U);
    msg.setDestinationEntity(147U);
    msg.plan_id = 1907U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8138862753056866;
    tmp_msg_0.lon = 0.02344629765459383;
    tmp_msg_0.eta = 4121259832U;
    tmp_msg_0.duration = 25941U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6003288349468917);
    msg.setSource(9876U);
    msg.setSourceEntity(135U);
    msg.setDestination(46106U);
    msg.setDestinationEntity(1U);
    msg.plan_id = 14772U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.027141361769295935;
    tmp_msg_0.lon = 0.730814219258324;
    tmp_msg_0.eta = 3058911719U;
    tmp_msg_0.duration = 7296U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4994422736897949);
    msg.setSource(38855U);
    msg.setSourceEntity(168U);
    msg.setDestination(42112U);
    msg.setDestinationEntity(29U);
    msg.type = 47U;
    msg.command = 232U;
    msg.settings.assign("HVVBLOVCXQOQKJZGKGPINTMDX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8872U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QHBYROQIINCMXEIIZFYMIGRGXCCXKNZRJTJZOWJAEBUVYOYWQUGJDPOEFUCVDEEFEHTPRFCLTRGFIUSOKSUYWADTXVCTMLVFOPMOTNNAGZPSTJXIGHSYRTYMGKKCSQVBBLAMENQWARTSEABIQJKHMPNKGZXW");

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
    msg.setTimeStamp(0.6431273766109359);
    msg.setSource(41363U);
    msg.setSourceEntity(164U);
    msg.setDestination(9135U);
    msg.setDestinationEntity(211U);
    msg.type = 81U;
    msg.command = 3U;
    msg.settings.assign("LQMVVWVXGWSVBTRKZXKPDPTJLHZSXGOULWTHJMOYISKMZMXYHSMUNQKBTIVKJUSJKCKPJZYECOICAFNOWYYLSOZPCFRWUTYEONXRZPJZQOHARHQDUOFILGOGGFXDAVUQGESEIFWUXGLRGCKNBSHBX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 1473U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5915791836445087;
    tmp_tmp_msg_0_0.lon = 0.4908810338093158;
    tmp_tmp_msg_0_0.eta = 2741647357U;
    tmp_tmp_msg_0_0.duration = 21809U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YXTCJVKIYZCVAALGWCBQKPEJDTYMSRHBHYVWDRUVSZMOHBURUMPIBRETAIRULGYKXDSLISGXWYNDQMSYEEAHJZFCFUEBIXSQFCCKEPTWKNQWKAPGYEMGXGIGCGUVRCROIWHOKUULNTRJZNAGTMNSPBDFLFAWY");

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
    msg.setTimeStamp(0.3606862166906545);
    msg.setSource(1143U);
    msg.setSourceEntity(60U);
    msg.setDestination(50401U);
    msg.setDestinationEntity(130U);
    msg.type = 241U;
    msg.command = 171U;
    msg.settings.assign("ABOYQHCFVNLZJGLDQZEINUZMWKTUGWLXCDOEVXHGAVTKJQJSSYVLRTCFYZCLCAKMHRRTHPHLFFXWPYWBUNUSTWPMRXQKEMGVBRFQCVYKXEJAJIPEZINITZQKEHWIXNJKCUZBFSOXEOXNSRDGNJMBUFLLSBSGTPWDDAAYJUNCPYOQFZDMTOUCXGVYBMQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 49226U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.13129924023687178;
    tmp_tmp_msg_0_0.lon = 0.738154129677011;
    tmp_tmp_msg_0_0.eta = 1164324105U;
    tmp_tmp_msg_0_0.duration = 59805U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LPFCPKNCMSIZWERNTWDYNDXVLIZROIACZTDODPXAPMWQCGTZQQDBSJDPMQHVUGNLUYYBWJMYWLULCQKHVXGDOXJVULCSQHMGJVZKLAZNBZEVRCRHTOLMEVNLXQOTURKHUIYYFOXPJQNZSJAXKBPOHYAFTYTFYPEGCWIHEUJSJWVG");

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
    msg.setTimeStamp(0.20595344654372372);
    msg.setSource(41789U);
    msg.setSourceEntity(146U);
    msg.setDestination(19041U);
    msg.setDestinationEntity(56U);
    msg.state = 202U;
    msg.plan_id = 44322U;
    msg.wpt_id = 205U;
    msg.settings_chk = 12158U;

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
    msg.setTimeStamp(0.43231401291492977);
    msg.setSource(58728U);
    msg.setSourceEntity(94U);
    msg.setDestination(41115U);
    msg.setDestinationEntity(144U);
    msg.state = 207U;
    msg.plan_id = 55214U;
    msg.wpt_id = 208U;
    msg.settings_chk = 7686U;

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
    msg.setTimeStamp(0.2828901655812749);
    msg.setSource(23446U);
    msg.setSourceEntity(15U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(53U);
    msg.state = 9U;
    msg.plan_id = 46683U;
    msg.wpt_id = 100U;
    msg.settings_chk = 15126U;

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
    msg.setTimeStamp(0.20867040618610733);
    msg.setSource(31960U);
    msg.setSourceEntity(29U);
    msg.setDestination(24198U);
    msg.setDestinationEntity(97U);
    msg.uid = 67U;
    msg.frag_number = 122U;
    msg.num_frags = 127U;
    const char tmp_msg_0[] = {21, -26, 63, 91, -65, -74, 124, 40, 30, -100, 1, -35, -68, 106, -48, 110, 79, -46, 84, 104, 21, -117, -61, -38, -56, -114, -104, 13, 62, 112, 63, 61, 45, 85, -115, 32, 14, 36, 8, -95, 0, 1, -45, 103, -65, -111, 126, -2, 48, -113, 60, 116, -69, 111, -56, -124, -95, 90, 0, -11, 61, 116, 100, -19, -12, -74, 84, 42, 81, 39, -31, 59, 117, -41, -27, 13, -127, 23, -53, 59, -76, 16, -85, -109, 0, 115, 4, 29, -109, 8, 5, 0, 25, 47, -121, -89, 63, 77, -27, -99, -123, -7, -42, 43, -34};
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
    msg.setTimeStamp(0.9299514575623832);
    msg.setSource(26739U);
    msg.setSourceEntity(186U);
    msg.setDestination(15871U);
    msg.setDestinationEntity(79U);
    msg.uid = 5U;
    msg.frag_number = 249U;
    msg.num_frags = 147U;
    const char tmp_msg_0[] = {-116, -107, 101, -106, 42, -89, 62, 70, 69, 12, 36, -103, 42, 44, 117, -52, -61, 88, 96, -96, -20, -37, 104, -76, 100, -7, 82, 77, -18, -18, -30, -120, -42, -120, -119, -13, 18, 86, -17, 126, -23, -97, 5, 123, 56, 87, -66, -125, -61, 116, 38, 81, -124, 63, -50, -11, 38, 80, -111, -25, -89, -50, -69, -93, 60, -46, -40, 111, 92, 24, -88, -51, 49, 49, -29, -23, -72, 9, -42, 106, 51, -69, 92, 71, -37, -123, -92, -34, 82, 25, 13, 22, 49, 62, 101, 77, -90, 5, 112, 50, 26, -73, 22, -73, -21, -41, 1, -51, -20, 122, 77, -7, 0, 17, -57, 111, -81, -2, -13, -63, -28, -52, 99, -81, -47, 59, -128, 74, 123, -59, -47, 88, -14, 50, 91, -100, 65, -10, 53, 45, 107, 82, -103};
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
    msg.setTimeStamp(0.5821430125306303);
    msg.setSource(59082U);
    msg.setSourceEntity(108U);
    msg.setDestination(36343U);
    msg.setDestinationEntity(184U);
    msg.uid = 222U;
    msg.frag_number = 12U;
    msg.num_frags = 180U;
    const char tmp_msg_0[] = {119, 14, -108, 99, -59, 97, 56, -85, 53, -92, -49, 119, -74, -29, 61, -124, 35, -45, 11, -63, 40, 50, -58, 105, 38, 2, 112, 15, 49, 21, -97, -39, -37, -23, -41, -39, 70, -38, 87, -75, -60, 105, -69, 47, 13, -119, -38, 35, 86, -88, -91, -112, -63, 36, 96, -30, 67, 32, -61, 21, 88, 14, 73, -11, 24, 39, -55, 62, 63, -6, -122, 8, -80, -9, 96, 106, -6, -17, -30, 94, 85, 32, -56, 106, 102, 110, 30, 53, 6, -61, 62, 45, -105, -73, -73, 120, 80, -56, -13, -11, 45, -91, 112, -110, 2, 124, -26, 8, -23, 89, 57, -70, -35, 0, 111, -119, -104, 30, -84, -72, 113, -115, 69, -122, -91, 119, -82, -127, 31, -85, 67, 81, -28, -98, 104, 62, -9, -61, 13, -69, 89, -102, 53, -3, 74, 8, -87, 17, -14, -125, -47, 58, -77, -90, 3, 70, -30, 117, -57, -57, -27, 64, -67, 59, 104, 60, 115, 44, 56, 65, 118, 50, 56, -8, -7, 30, 53, 89, -73, -45, 42, -56, -16, -19, 59, 7, -15, -20, -55, 28, -119, -34, 26, -63, 120, -59, -1, -40, 124, 124, 23, 108, 112, 83, 75, 101, -126, 110, -24, 126, 112, 114, -73, 90, 47, -88, 90};
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
    msg.setTimeStamp(0.35302842544721735);
    msg.setSource(26974U);
    msg.setSourceEntity(145U);
    msg.setDestination(13648U);
    msg.setDestinationEntity(170U);
    msg.content_type.assign("NVYUCTBCICXOPHZOBIDAOTFJGTCKZGBYHPRAPYRKVMROPFCWBBZAFFLRIQYTZXNGNHJWNPLINTEWXYNLXFOTVJJVZEKMDYJSGOUCCMAIPYVSLVZSVZOPGKYEHVUTVYRSSWIWRHRDPDR");
    const char tmp_msg_0[] = {-65, 74, -26, -110, 97, 57, 11, -24, 44, 118, -29, 39, -34, -43, 97, 33, 94, 5, -62, 72, -120, 117, -9, -125, 34, 6, -28, -24, 67, -11, -45, -124, -59, -40, -104, 38, -96, -46, -13, -63, 34, 112, -43, 11, 9, -98, 40, -90, -67, -102, -108, 124, -90, 34, 20, -23, -42, 122, -5, -72, 95, -22, -1, -2, -110, 41, -114, -11, 28, 18, 55, 25, -12, 21, 22, -97, -92, 54, 103, -35, -93, -128, -54, 103, -128, 45, -125, 70, -12, 49, -3, -99, -122, 108, -39, 28, 102, 22, 43, 21, -33, 54, -80, -87, 111, -100, -96, 46, -18, -57, -4, -39, -84, 109, -20, -8, 88, 94, -45, -14, 15, -116};
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
    msg.setTimeStamp(0.7482927585184433);
    msg.setSource(13201U);
    msg.setSourceEntity(10U);
    msg.setDestination(21289U);
    msg.setDestinationEntity(93U);
    msg.content_type.assign("ZSWNBBRJXPEFBERWZGDQCKYKDPRWARCIZGOEMVKRJRUIMCBTJPFUGDFXENVNLFKJALBACTYSLAWGSUVNVOTTFFLCGVVRMIOVPQM");
    const char tmp_msg_0[] = {-98, -101, -100, 53, 97, -80, 40, 29, -38, 8, -48, -102, -123, -99, 83, -33, -84, 69, -73, -104, -34, -12, 11, -55, 92, -102, -121, -60, 76, -88, -115, -66, -9, -80, -21, -114, -115, -17, -121, -66, -38, -126, -24, -17, -65, -28, 46, 38, -46, 78, 79, -78, -6, -22, -121, 120, -22, -105, -126, 68, 39, 95, -104, -71, -93, 29, -125, 126, -98, -126, 17, -82, 106, 3, 40, -35, -77, 90, 38, 63, -92, -64, 116, -77, -22, -88, -58, -77, 117, -78, -37, -58, -46, -3, -61, 7, 113, -113, -54, -91, -33, -90, 46, -113, 23, -13, 66, -118, -97, 52, 16, 116, 74, -114, 57, -96, 41, -90, 72, 9, 45, 40, -128, -8, -107, -77, -81, -26, 125, 57, 20, 98, 96};
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
    msg.setTimeStamp(0.49856289084317273);
    msg.setSource(27967U);
    msg.setSourceEntity(246U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(96U);
    msg.content_type.assign("FVWDQNBUNRVLZNXYMZMRESOMIKPVDTAJOLSSJVXKLKSBMPZBEPDGYWUGAHNCVKGPEXJOBDLVKAISGQZVIHDHIFCHFRGMODMFYITGLOJKXCAUIRZTYSQBNXPOWQQQPZPHSYCYEEVUHNJLAKBEFIITCHQPNHOMARFAJZIPLRJNCJRWADEQLKSOWSXRCWE");
    const char tmp_msg_0[] = {48, 105, -20, 75, 103, 55, -10, -49, 39, 42, -24, -5, 89, -51, 31, 11, 42, 114, -68, -100, 1, -7, -44, -64, -71, 55, -118, -84, 39, 19, 26, -68, 110, -66, -95, -48, -14, -78, -9, -123, -7, 76, 110, -22, 105, -10, 79, -128, 73, 52, -41, -73, -90, -112, 29, -91, -61, 33, 46, 65, -11, -59, 63, 124, -65, 49, -73, -44, 93, 46, 64, -110, 118, -112, 107, -62, 65, 33, -93, 70, 16, 50, -99, -102, -75, 90, -121, -16, 40, 98, -123, 106, -114, 26, -63, -6, -1, -93, -46, 95, 20, 87, 119, 107, 57, 32, -52, 30, 99, 113, 67, -68, -117, 34, 107, -81, -77, 45, -20, 30, -127, 46, -39, -34, -102, 27, -111, 60, -73, 116, -25, -56, 99, 39, 125, 74, 4, 118, 95, -44, -126, 0, 122, -110, -57, 100, -98, 65, -19, 85, -74, 4, 126, -28, 123, -116, 103, 47, 2, 120, -62, -78, -8, 31, 49, 4, 24, -30, 36, -17, 20, 73, -28, 121, 30, 93, -18, 79, 51, 34, -98, 75, -94, 82, 96, -109, -16, -2, 92, -84, 22, 105, -126, 61, -70, 106, -23, -15, -37, 126, -30, -67, 39, 118};
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
    msg.setTimeStamp(0.9955759315798113);
    msg.setSource(64822U);
    msg.setSourceEntity(250U);
    msg.setDestination(64698U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.911465314245194);
    msg.setSource(55442U);
    msg.setSourceEntity(161U);
    msg.setDestination(59453U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.5432976784391046);
    msg.setSource(31047U);
    msg.setSourceEntity(110U);
    msg.setDestination(33663U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.0489766385813285);
    msg.setSource(47449U);
    msg.setSourceEntity(125U);
    msg.setDestination(26575U);
    msg.setDestinationEntity(35U);
    msg.target = 17235U;
    msg.bearing = 0.148989856551331;
    msg.elevation = 0.015305870594543247;

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
    msg.setTimeStamp(0.43828601571579606);
    msg.setSource(65317U);
    msg.setSourceEntity(30U);
    msg.setDestination(51337U);
    msg.setDestinationEntity(199U);
    msg.target = 5969U;
    msg.bearing = 0.13510305063532235;
    msg.elevation = 0.6797995604990824;

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
    msg.setTimeStamp(0.5733406626200209);
    msg.setSource(9783U);
    msg.setSourceEntity(146U);
    msg.setDestination(1654U);
    msg.setDestinationEntity(190U);
    msg.target = 55337U;
    msg.bearing = 0.9522648390834574;
    msg.elevation = 0.7026962959833923;

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
    msg.setTimeStamp(0.9871786545179647);
    msg.setSource(34213U);
    msg.setSourceEntity(154U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(205U);
    msg.target = 35628U;
    msg.x = 0.2950683402429948;
    msg.y = 0.7769232417918986;
    msg.z = 0.9175662464392832;

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
    msg.setTimeStamp(0.7908499458008902);
    msg.setSource(40959U);
    msg.setSourceEntity(224U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(210U);
    msg.target = 26365U;
    msg.x = 0.7079344662295719;
    msg.y = 0.09691843726202509;
    msg.z = 0.5689875087812856;

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
    msg.setTimeStamp(0.789163188734333);
    msg.setSource(53705U);
    msg.setSourceEntity(70U);
    msg.setDestination(37616U);
    msg.setDestinationEntity(125U);
    msg.target = 31385U;
    msg.x = 0.7681820118243081;
    msg.y = 0.1294982749646223;
    msg.z = 0.48886473405726183;

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
    msg.setTimeStamp(0.16154502366522894);
    msg.setSource(38376U);
    msg.setSourceEntity(183U);
    msg.setDestination(35215U);
    msg.setDestinationEntity(210U);
    msg.target = 39982U;
    msg.lat = 0.2997095231857696;
    msg.lon = 0.18207743068371685;
    msg.z_units = 34U;
    msg.z = 0.4728189630953411;

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
    msg.setTimeStamp(0.8521965890203171);
    msg.setSource(52007U);
    msg.setSourceEntity(123U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(166U);
    msg.target = 60020U;
    msg.lat = 0.6103393989530426;
    msg.lon = 0.6478236463066976;
    msg.z_units = 79U;
    msg.z = 0.5592268071395607;

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
    msg.setTimeStamp(0.38502644228966454);
    msg.setSource(45422U);
    msg.setSourceEntity(174U);
    msg.setDestination(8530U);
    msg.setDestinationEntity(109U);
    msg.target = 59740U;
    msg.lat = 0.8916026625468615;
    msg.lon = 0.31069995987194166;
    msg.z_units = 158U;
    msg.z = 0.8073701866808829;

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
    msg.setTimeStamp(0.2822453663877096);
    msg.setSource(31061U);
    msg.setSourceEntity(13U);
    msg.setDestination(7606U);
    msg.setDestinationEntity(18U);
    msg.locale.assign("BQNOMGTEREOSWQCGBJZIWFCXSRILKBNFKIMHMMIKRXVXMWLMTSXNYJPHCNESIPUFFCJOSOQBYKBFWGVVRTQEJRUDRTADWQMZKUXQKPUURWGNCDKZGLBMEBAOHNJUKODUTHXNBZGYFODIWAKHGZYSUPFZEEHUJYPEOIVJAGLVRACYVLAASOHJCBPVHXUQGJTNCQATZLWDEQVYMPXVZCNEWPLITXYDZXTAFHYDSRRYLCID");
    const char tmp_msg_0[] = {-55, 96, 19, 94, 42, -79, 66, -14, -80, 33, -2, 58, -12, 9, -73, 69, 25, -27, 88, 17, -55, 62, -31, -52, 112, -27, 126, -43, 95, 61, 109, 47, 31, 25, -59, 96, -71, 84, 83, 96, 91, 34, 10, 56, -81, 89, -67, 13, -97, 23};
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
    msg.setTimeStamp(0.5798522288645752);
    msg.setSource(53132U);
    msg.setSourceEntity(15U);
    msg.setDestination(4656U);
    msg.setDestinationEntity(239U);
    msg.locale.assign("QOXUBIMHRWEWNAQHDZXKFESVOXBTOAKECFVRTNNDSJTVGJWWXZYSYREMRJNSXJZCAJXLFNVCJFZKPHUSXMJCHDQDJYORAAGUCWATTPOPDEFUMULHVLQPUGKDZOKPZTJBLGAXPRSECDHVNUHIKWWBJVSQIYKDEFRSGCBAUIIYVWLGETLRPFITBGVFABLFQDNGPSGINFPHKYIPMNLH");
    const char tmp_msg_0[] = {23, -23, 71, -54, 66, 8, 114, 120, -5, 72, -116, -57, -90, 126, 37, -39, 124, 20, 104, 18, 14, -39, 95, 41, -14, 24, 74, 106, 108, -1, 119, 17, 27, 106, 112, -95, -87, -65, 75, 68, 10, 117, -124, 35, -34, -7, 43, -53, -90, -5, -60, 23, 36, -30, 92, -113, -104, -117, -18, -102, 26, -66, -89, 41, -101, 80, -97, -37, -7, -67, 98, 4, -1, -7, 126, 54, -88, -91, 108, 75, 86, 15, -72, -54, 51, 122, -98, -21, -44, 98, 104, -65, 95, 69, 28, 78, -32, -4, 61, -116, 92, -97, -33, -48, 80};
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
    msg.setTimeStamp(0.818317171887572);
    msg.setSource(37835U);
    msg.setSourceEntity(78U);
    msg.setDestination(37138U);
    msg.setDestinationEntity(45U);
    msg.locale.assign("HKOGSTOQQNUFNDMWIVLGGXGYIBBEYTIHOSBYTFXAQMNIPBAEETUCRMZCBCKKXJWTTSMGBAVSRSDVXWURUAJKHYINZDXYWUXCFSJRLXYIVXZDZPYCSVSYKOMPAQWVQH");
    const char tmp_msg_0[] = {-52, -16, -74, 13, 48, 102, 60, -124, 7, -50, -30, 12, 45, -93, 68, 58, -28, -120, -104, 99, -12, -95, 68, 80, -105, 38, -44, 31, -127, 8, 121, -28, 76, 64, -30, 68, 42, 126, 31, -44, 118, 103, -3, -81, 69, 126, 25, -116, 94, 11, 7, 52, -41, -31, -43, -40, 15, -20, -64, 114, 10, 89, 69, -6, -47, 108, -75, -64, -9, -48, 99, -49, 58, -21, 6, -82, -126, -47, -62, -81, -44, 45, 10, 95, -93, 85, -113, -80, -31, 1, -95, -63, -70, -65, -119, 122, 67, -119, 110, 116, -29, 38, 21, -61, -17, -9, 60, 120, -98, -69, 73, -89, -48, 118, -19, -87, -84, -35, 80, -23, -80, -71, -47, -26, 17, -46, 46, -48, -66, -69, 92, -106, -75, 6, -126, -124, -48, 53, -47, 54, -57, 30, -5, 2, -86, 66, -61, -114, 120, 5, -89, 35, 81, -11, 71, -53, 14, 28, -104, 28, 85, -104, -71, 46, 59, 34, 7, 119, 31, -48, 110, -94, 95, 80, 22, -1, 77, -114, 19, 113, -52, 99, -82, -93, -5, -118, -6, 23, -1, -85, -86, -24, 115, 87, -113, 89, -49, 65, -65, -56, 45, -94, 97, -4, -35, 5, 124, 29, 31, 45, 39, -9, 74, 15, 57, 62, 1, 47, -35, 84, 2, 112, -22, 117, 38, -65, -104, -47, -57, -92, -34, -19, -102, 122};
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
    msg.setTimeStamp(0.48923573914380714);
    msg.setSource(32204U);
    msg.setSourceEntity(221U);
    msg.setDestination(26557U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.4402007258463163);
    msg.setSource(54991U);
    msg.setSourceEntity(77U);
    msg.setDestination(54861U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.32287143975343346);
    msg.setSource(25284U);
    msg.setSourceEntity(119U);
    msg.setDestination(40053U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.7583150704777872);
    msg.setSource(1132U);
    msg.setSourceEntity(218U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(148U);
    msg.camid = 183U;
    msg.x = 806U;
    msg.y = 56448U;

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
    msg.setTimeStamp(0.6496411509476332);
    msg.setSource(23279U);
    msg.setSourceEntity(69U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(27U);
    msg.camid = 74U;
    msg.x = 28215U;
    msg.y = 62429U;

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
    msg.setTimeStamp(0.10981645989960998);
    msg.setSource(51468U);
    msg.setSourceEntity(119U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(1U);
    msg.camid = 192U;
    msg.x = 33210U;
    msg.y = 6177U;

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
    msg.setTimeStamp(0.38660202262199084);
    msg.setSource(58675U);
    msg.setSourceEntity(57U);
    msg.setDestination(63633U);
    msg.setDestinationEntity(252U);
    msg.camid = 169U;
    msg.x = 37234U;
    msg.y = 23936U;

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
    msg.setTimeStamp(0.42120796633830593);
    msg.setSource(22340U);
    msg.setSourceEntity(191U);
    msg.setDestination(23462U);
    msg.setDestinationEntity(198U);
    msg.camid = 196U;
    msg.x = 53143U;
    msg.y = 30347U;

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
    msg.setTimeStamp(0.8085997776848431);
    msg.setSource(47952U);
    msg.setSourceEntity(59U);
    msg.setDestination(45496U);
    msg.setDestinationEntity(105U);
    msg.camid = 221U;
    msg.x = 51060U;
    msg.y = 55420U;

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
    msg.setTimeStamp(0.4140165387668484);
    msg.setSource(55698U);
    msg.setSourceEntity(203U);
    msg.setDestination(65496U);
    msg.setDestinationEntity(184U);
    msg.tracking = 104U;
    msg.lat = 0.3209730834620582;
    msg.lon = 0.9192512362660383;
    msg.x = 0.42860888455166335;
    msg.y = 0.22040397249428334;
    msg.z = 0.8777248167637806;

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
    msg.setTimeStamp(0.8838998815468534);
    msg.setSource(64661U);
    msg.setSourceEntity(216U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(226U);
    msg.tracking = 37U;
    msg.lat = 0.3976845238382606;
    msg.lon = 0.7648501927633569;
    msg.x = 0.5968588555977051;
    msg.y = 0.8101538392987531;
    msg.z = 0.8870734901743607;

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
    msg.setTimeStamp(0.18573933249297514);
    msg.setSource(14136U);
    msg.setSourceEntity(105U);
    msg.setDestination(27613U);
    msg.setDestinationEntity(45U);
    msg.tracking = 182U;
    msg.lat = 0.21131930985796343;
    msg.lon = 0.21815010602676554;
    msg.x = 0.39208672223613794;
    msg.y = 0.30181818367241287;
    msg.z = 0.6325044340017172;

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
    msg.setTimeStamp(0.6075147129127496);
    msg.setSource(62552U);
    msg.setSourceEntity(57U);
    msg.setDestination(52717U);
    msg.setDestinationEntity(125U);
    msg.target.assign("TMDYDWOLHQLZGZTYOVWGGFACFKFJUKYHJTEYWYOKCFLIHIQJNIIVVEQKNDXIKYEQJDFLXGRBZRSMJLPWRKVVEWXDTTAGGBPZEAWYJNHXDAZTFSJZCNWUYMNAAEQAXMDFUICGEBHBXUBHNSFGNCSXSBPMOXAQZVQURSKBLROKHCSBPIROKYPVXRCQGUWZZRFQRKJEJZCLGLVOUXUTMCTOWNONHPVIISTMMSBN");
    msg.lbearing = 0.24753428640716413;
    msg.lelevation = 0.24749033241039076;
    msg.bearing = 0.7989982504144952;
    msg.elevation = 0.13965195666508812;
    msg.phi = 0.7442987906144974;
    msg.theta = 0.18224601775608396;
    msg.psi = 0.5106113441058593;
    msg.accuracy = 0.6127406858391404;

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
    msg.setTimeStamp(0.09348404056174742);
    msg.setSource(65508U);
    msg.setSourceEntity(122U);
    msg.setDestination(21907U);
    msg.setDestinationEntity(98U);
    msg.target.assign("AWRZMFAYNPOCHVTISSXUAGQDTQDWTOBJZESOAJAMTBBAWWZLTVOQGLGVNMKXOZGZMKORKHHCPLDDVBNIJXLXAQHCCXKEECNPKRWGUHPCRSJTLJBKMEZUIFTSDYGWZJWMCSNDUPMUZWGIQQBVSJXUKABBCPRVKJKDEPUFDPF");
    msg.lbearing = 0.8017913411750263;
    msg.lelevation = 0.29735423412411666;
    msg.bearing = 0.5417131490576101;
    msg.elevation = 0.5742423861137165;
    msg.phi = 0.2512355567885517;
    msg.theta = 0.9045900811331743;
    msg.psi = 0.873970817158327;
    msg.accuracy = 0.5084384777031054;

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
    msg.setTimeStamp(0.7688422388236226);
    msg.setSource(32043U);
    msg.setSourceEntity(164U);
    msg.setDestination(22335U);
    msg.setDestinationEntity(239U);
    msg.target.assign("YHLAWEJXUAWCFIGZWSDBKWISZACWBNGXQGDDJJHARCLOTPIMMQGEULTLBCPYIZARGBAQSHCCWCNUOLKEXLOYCJJFPMEVAKIIWYBWDEKBFNURVRKOVDXUORGEZXZIKNFKRJJWXVR");
    msg.lbearing = 0.2714089207654893;
    msg.lelevation = 0.6599615097987467;
    msg.bearing = 0.6816934653092511;
    msg.elevation = 0.9449301851889358;
    msg.phi = 0.9664046238038221;
    msg.theta = 0.8579404394533311;
    msg.psi = 0.8783449629380357;
    msg.accuracy = 0.19985483353811873;

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
    msg.setTimeStamp(0.6256467903833178);
    msg.setSource(45308U);
    msg.setSourceEntity(67U);
    msg.setDestination(22002U);
    msg.setDestinationEntity(209U);
    msg.target.assign("BRYRLSXJDYUGBBUFNESGYNCOGVIXNVNLMQQREXVXPJOPJOXBUCRAPBTHFOIVZXLXTUXHKGVMAZMRHHDLSCZAHIEMIVVMPHWWGNTUCSJWOKJCWZNLZNVSSFATYHKQTREAFIQZIJTKOTMFYQLSGBIDUDGAEPFUJBMKWNYXUYIZAFDREWBTKNAJCQJKYEEQDZ");
    msg.x = 0.5221294688079607;
    msg.y = 0.26725642525403115;
    msg.z = 0.19568912869008526;
    msg.n = 0.40668145668998235;
    msg.e = 0.5603978323840697;
    msg.d = 0.31430472533363374;
    msg.phi = 0.38564664687399575;
    msg.theta = 0.6555172437046782;
    msg.psi = 0.6683756055458493;
    msg.accuracy = 0.6976196730478926;

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
    msg.setTimeStamp(0.8148930309429652);
    msg.setSource(20206U);
    msg.setSourceEntity(2U);
    msg.setDestination(25611U);
    msg.setDestinationEntity(9U);
    msg.target.assign("IVYTUQBVKGHKTDHCWKRYNSJLWSJPDABVDONAJQRIWEAGFYWJSCZMGVFYMJGUMHWZAONTPRSFPEVYGABIWLUXTDSRONAZFXGYWHYKFBRBVBOXLCMSHPNRPDHWEFDELEHLNKUIQAIZBUSONCTMAUGTZHRMZTBVQEQYOTIKAUNIDMQXFXPZJQOMHREYOIXVJTAICLMQKJPKCVGEDKPUQOXGZZRXXLZUSF");
    msg.x = 0.7557666020698259;
    msg.y = 0.9286348524998859;
    msg.z = 0.3761512906920941;
    msg.n = 0.3114501536243576;
    msg.e = 0.3840144795666559;
    msg.d = 0.45630171950503884;
    msg.phi = 0.11163701935277781;
    msg.theta = 0.8699153052920346;
    msg.psi = 0.018601346900563476;
    msg.accuracy = 0.9490219123539789;

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
    msg.setTimeStamp(0.7468463506776015);
    msg.setSource(41630U);
    msg.setSourceEntity(228U);
    msg.setDestination(41331U);
    msg.setDestinationEntity(121U);
    msg.target.assign("AZDMPUQABJTYLPNNYNUOIOUGWXSEITQQUOZSWRSMPGRMSAYTYXGCWGTNCPADDOGVJMGEJVEPFDYXMNXUNJGWXTZFCRQDKTOSFJJBEQZHREBBKYHLZLXWNCIKTCEVFMOBVHELEWWUXPWRFOKABIVIQRYVIGKBRCFVAUKLCQBHVHPRUDSAXXEEFROOLPCTUHZUHZKKQPJIQTNHLBLXGFJMWCQJBYVFKYL");
    msg.x = 0.8498027919242299;
    msg.y = 0.583549136530806;
    msg.z = 0.6452749866444838;
    msg.n = 0.4848549886437855;
    msg.e = 0.39754345878236264;
    msg.d = 0.8498184460814471;
    msg.phi = 0.7864147186191612;
    msg.theta = 0.6320910475776719;
    msg.psi = 0.165332680315339;
    msg.accuracy = 0.17509556167349827;

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
    msg.setTimeStamp(0.36688023884525967);
    msg.setSource(50118U);
    msg.setSourceEntity(19U);
    msg.setDestination(62987U);
    msg.setDestinationEntity(197U);
    msg.target.assign("PPBHRZMOBLQABJMAWXWKIHEWIJYWBCVJOGVBZTOLDUCYSTRFYCKVDUDVXGXOALFVSKGNLQXMWGHORKCAWTUICUVHDYUYAPQCZUFJPSAWK");
    msg.lat = 0.2683964796331094;
    msg.lon = 0.09186387485297953;
    msg.z_units = 111U;
    msg.z = 0.7779110690006515;
    msg.accuracy = 0.8387475308209076;

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
    msg.setTimeStamp(0.8748802068909507);
    msg.setSource(47250U);
    msg.setSourceEntity(198U);
    msg.setDestination(23787U);
    msg.setDestinationEntity(107U);
    msg.target.assign("HXLFJSUCSTWNVKCZBIMRKBZCDNVZGWYWXGSVEPDVQFQFLNLZEEPLBYZONNGIDLRVAESKYVISCHTUXGMTIPXAPLMXNXIOPNTPBHBCHQFJZKYAUKDVWVDCPUYRTYTZKOEWUSUBA");
    msg.lat = 0.7786892190612126;
    msg.lon = 0.24394001139914112;
    msg.z_units = 219U;
    msg.z = 0.22156757334110588;
    msg.accuracy = 0.6393977455945153;

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
    msg.setTimeStamp(0.03192102483486525);
    msg.setSource(37640U);
    msg.setSourceEntity(110U);
    msg.setDestination(36828U);
    msg.setDestinationEntity(245U);
    msg.target.assign("TDGHEUQAKPEOGWCVFERPDEFSNEVVFNHZXDTPOGQNUBWJXDQECSNMQSRBSRXPFMMTUAIMBYAFLZTBQYLQKYOBCSVAZDNX");
    msg.lat = 0.015911280401925243;
    msg.lon = 0.8735496992128041;
    msg.z_units = 250U;
    msg.z = 0.8689220486542489;
    msg.accuracy = 0.2125988864820989;

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
    msg.setTimeStamp(0.2926450833775468);
    msg.setSource(31891U);
    msg.setSourceEntity(185U);
    msg.setDestination(42154U);
    msg.setDestinationEntity(233U);
    msg.name.assign("LZRXFLBEUXWPXUCLKSJFYOQGAWWYMWTHMZHJHCMXDSKJAUIRVAOFRFDDKQENDCWSFPDOHVLYSDGBWUGIJJTUGQVWPKGNQAWYEETVGAHTAZIANAEDXLNOLNKPYVPMLBJIHZKNYFNBPHCSKPBJRPGVBUSWVUXTOXBISZTTCQRKTIBREQPFROGHYULFMCYMJYFQCDDZOWSOJQDMTBEEXUQEOIVHNIGMZPVENAVRZFXYRTSCICLXIGAZBLMSNCHK");
    msg.lat = 0.6778217525762511;
    msg.lon = 0.1693245332203367;
    msg.z = 0.2264348600379512;
    msg.z_units = 72U;

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
    msg.setTimeStamp(0.9394122749488623);
    msg.setSource(17484U);
    msg.setSourceEntity(197U);
    msg.setDestination(12702U);
    msg.setDestinationEntity(229U);
    msg.name.assign("MNVGRJXFKIOCSFVAHYQBLKXPMDVEPHFTAIQLQXJCTFGZUQZULHUGFJQNABYUTXODFWUCGRJRISETMVBQOAWWOTQNYAPCVMNGJARLEZPLOVDDYYEUTPBTFCOOKWYHZSTNDFXDBYZKZZESHPNEJSSTDJWWMKIDPWJ");
    msg.lat = 0.9954117685115051;
    msg.lon = 0.6175271558920418;
    msg.z = 0.7799973925777901;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.2538352034289122);
    msg.setSource(53735U);
    msg.setSourceEntity(215U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(36U);
    msg.name.assign("GWALRCPBJVRTGVFSAKORVRCAJPSLIOWRHQLSLFRYDDHMDELWTYFPGHMLXICDOIZMHNNDSAULJSGHOZHZXIMMJKNAWXTEQBWNLERQQEKSNKCPOOXXQURMIHXFECKSMXETBPJOLFFGYBTYYYVWICGBUDYCNCKNJUHJCVXTPZUSAVMGFOBNAQSZDNETIYUIWMPTZBJWHPGEUZKBZKXVVUEYUQNHBGRKWFZZOR");
    msg.lat = 0.9015325856899801;
    msg.lon = 0.2728389052937171;
    msg.z = 0.9030148249981469;
    msg.z_units = 71U;

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
    msg.setTimeStamp(0.29334588220430635);
    msg.setSource(37776U);
    msg.setSourceEntity(117U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(138U);
    msg.op = 183U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VULDLNERMKYISEZTDCPDGZFVNCWBNTAIKLKLCLIYNSYZERQUTAOHFGWBNGMPKXINGZOXXBQIDDWUXPCNRGBIU");
    tmp_msg_0.lat = 0.3629009941707736;
    tmp_msg_0.lon = 0.4499755664417542;
    tmp_msg_0.z = 0.6619512761093228;
    tmp_msg_0.z_units = 204U;
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
    msg.setTimeStamp(0.18390988425754462);
    msg.setSource(14709U);
    msg.setSourceEntity(224U);
    msg.setDestination(8904U);
    msg.setDestinationEntity(200U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.7065292644017475);
    msg.setSource(52448U);
    msg.setSourceEntity(43U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(161U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.6040479229963525);
    msg.setSource(17010U);
    msg.setSourceEntity(14U);
    msg.setDestination(56708U);
    msg.setDestinationEntity(180U);
    msg.value = 0.7208579769067399;
    msg.type = 192U;

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
    msg.setTimeStamp(0.788077612224859);
    msg.setSource(9474U);
    msg.setSourceEntity(232U);
    msg.setDestination(30458U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7698194830349379;
    msg.type = 27U;

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
    msg.setTimeStamp(0.11705038263361489);
    msg.setSource(38910U);
    msg.setSourceEntity(170U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(215U);
    msg.value = 0.07000751613584344;
    msg.type = 160U;

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
    msg.setTimeStamp(0.5717903517220941);
    msg.setSource(35743U);
    msg.setSourceEntity(234U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(67U);
    msg.value = 0.3751526929699478;

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
    msg.setTimeStamp(0.6046533558859178);
    msg.setSource(58904U);
    msg.setSourceEntity(92U);
    msg.setDestination(41765U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6840287979353316;

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
    msg.setTimeStamp(0.3662551663638204);
    msg.setSource(29243U);
    msg.setSourceEntity(204U);
    msg.setDestination(52759U);
    msg.setDestinationEntity(55U);
    msg.value = 0.08342414168321399;

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
    msg.setTimeStamp(0.4648090002176033);
    msg.setSource(2703U);
    msg.setSourceEntity(194U);
    msg.setDestination(17356U);
    msg.setDestinationEntity(38U);
    msg.timestamp_last_service = 0.4011535492773679;
    msg.time_next_service = 0.7839741957349992;
    msg.time_motor_next_service = 0.3035552123007301;
    msg.time_idle_ground = 0.7409665951888965;
    msg.time_idle_air = 0.9465092467149243;
    msg.time_idle_water = 0.4891170455108468;
    msg.time_idle_underwater = 0.28882266697009584;
    msg.time_idle_unknown = 0.9108755835263336;
    msg.time_motor_ground = 0.06868392807188117;
    msg.time_motor_air = 0.5073044139540809;
    msg.time_motor_water = 0.28708153364053146;
    msg.time_motor_underwater = 0.7706165359818896;
    msg.time_motor_unknown = 0.7612432640037925;
    msg.rpm_min = 30539;
    msg.rpm_max = 14709;
    msg.depth_max = 0.6749825300336391;

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
    msg.setTimeStamp(0.11218430121050238);
    msg.setSource(50846U);
    msg.setSourceEntity(21U);
    msg.setDestination(58389U);
    msg.setDestinationEntity(161U);
    msg.timestamp_last_service = 0.566349257561005;
    msg.time_next_service = 0.8911311095067224;
    msg.time_motor_next_service = 0.6783786653779176;
    msg.time_idle_ground = 0.9378235068893425;
    msg.time_idle_air = 0.900718621493467;
    msg.time_idle_water = 0.5722055786058233;
    msg.time_idle_underwater = 0.7269120429549459;
    msg.time_idle_unknown = 0.6595181194073487;
    msg.time_motor_ground = 0.19758585415073726;
    msg.time_motor_air = 0.32215551211372206;
    msg.time_motor_water = 0.0635225493328;
    msg.time_motor_underwater = 0.7326472188552741;
    msg.time_motor_unknown = 0.007873077274105134;
    msg.rpm_min = 13376;
    msg.rpm_max = -5860;
    msg.depth_max = 0.551798313012441;

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
    msg.setTimeStamp(0.6714863095226765);
    msg.setSource(2938U);
    msg.setSourceEntity(150U);
    msg.setDestination(48945U);
    msg.setDestinationEntity(61U);
    msg.timestamp_last_service = 0.06655830277258834;
    msg.time_next_service = 0.2833869744272055;
    msg.time_motor_next_service = 0.46528050995890224;
    msg.time_idle_ground = 0.6715693848514267;
    msg.time_idle_air = 0.14405622768085002;
    msg.time_idle_water = 0.43162516314091326;
    msg.time_idle_underwater = 0.0061154210009617405;
    msg.time_idle_unknown = 0.8341340885356331;
    msg.time_motor_ground = 0.4887129034851123;
    msg.time_motor_air = 0.7652146905403773;
    msg.time_motor_water = 0.43335204131130733;
    msg.time_motor_underwater = 0.22685451446378602;
    msg.time_motor_unknown = 0.4415365542477472;
    msg.rpm_min = -30446;
    msg.rpm_max = -3705;
    msg.depth_max = 0.0843108223843525;

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
    msg.setTimeStamp(0.5708789931738935);
    msg.setSource(37326U);
    msg.setSourceEntity(85U);
    msg.setDestination(52136U);
    msg.setDestinationEntity(225U);
    msg.severity = 3U;
    msg.text.assign("IXHYZEILFHQUKEQMOCMQKBLKLHCHECVXOZUZANZRYPAAVYJJNVVYLRXHTNASMFUKQFSXQMHFGMGXLZTWGDXTSIAEZMNBIRVFMWPQKURCRRKFBTDWROJNPJPRDDOYVELGQUB");

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
    msg.setTimeStamp(0.6009562811717782);
    msg.setSource(11578U);
    msg.setSourceEntity(147U);
    msg.setDestination(35828U);
    msg.setDestinationEntity(202U);
    msg.severity = 34U;
    msg.text.assign("TEKQYTRUWWKQHBRSOAWIMXVHDLGBFKHYSMRJPHJQGNWINDLBEJHUYSRXDIJREAPQKXAIWUXFPDJSIIYQESPCCVPQQPFFVBQHITZPOTOSNKFOBXFKKSLVMZCNUAINHRBMOEGFUNVORJLZZZDVAGCXZHDPLLLHYJORIMSTMCVNXJCUZMZBTOSEFDUKXVVAPITYGURDACUAXSCVLMGZLMJWALGUEGWGCBHQGZWYKRWDOTQN");

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
    msg.setTimeStamp(0.7886102927621773);
    msg.setSource(43164U);
    msg.setSourceEntity(149U);
    msg.setDestination(4841U);
    msg.setDestinationEntity(49U);
    msg.severity = 54U;
    msg.text.assign("YLRAEHEORDGVXFJTPGTSNGRYUCZHALNQZOSMWSAOPZTJQXHOAIQZCNYCDJDWKZUOLIISSNCXEWIHWASSYWQTTKSKFGFHGPUBJPUHUVJXEIASIANFVLIDEGQNXOZRPDJVTZLUVIHAYKFRMXBMLKJJWHFOMTGOWW");

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
    msg.setTimeStamp(0.8302963477282552);
    msg.setSource(56347U);
    msg.setSourceEntity(89U);
    msg.setDestination(23235U);
    msg.setDestinationEntity(104U);
    msg.channel = 95;
    msg.value = -16967108;
    msg.gain = 174U;

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
    msg.setTimeStamp(0.9110474253805945);
    msg.setSource(25625U);
    msg.setSourceEntity(216U);
    msg.setDestination(18153U);
    msg.setDestinationEntity(102U);
    msg.channel = -24;
    msg.value = -765828773;
    msg.gain = 175U;

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
    msg.setTimeStamp(0.5775946665420201);
    msg.setSource(28895U);
    msg.setSourceEntity(159U);
    msg.setDestination(54080U);
    msg.setDestinationEntity(124U);
    msg.channel = 117;
    msg.value = -283354655;
    msg.gain = 150U;

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
    msg.setTimeStamp(0.10625015864833398);
    msg.setSource(35542U);
    msg.setSourceEntity(101U);
    msg.setDestination(52882U);
    msg.setDestinationEntity(84U);
    msg.ch01 = 0.7102367018939705;
    msg.ch02 = 0.431155755750564;
    msg.ch03 = 0.14951825293697585;
    msg.ch04 = 0.7787549993551395;
    msg.ch05 = 0.11010075028209598;
    msg.ch06 = 0.014760892078520604;
    msg.ch07 = 0.8085987377815493;
    msg.ch08 = 0.9124487493798704;
    msg.ch09 = 0.10702246070935006;
    msg.ch10 = 0.12456962342899058;
    msg.ch11 = 0.6253406460752517;
    msg.ch12 = 0.21102715366817248;
    msg.ch13 = 0.34875334574161376;
    msg.ch14 = 0.702681642778071;
    msg.ch15 = 0.14254397650767392;
    msg.ch16 = 0.9558982787938742;

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
    msg.setTimeStamp(0.9966741648871423);
    msg.setSource(64228U);
    msg.setSourceEntity(213U);
    msg.setDestination(38428U);
    msg.setDestinationEntity(93U);
    msg.ch01 = 0.012454894362697755;
    msg.ch02 = 0.6260201431219784;
    msg.ch03 = 0.6577693756144888;
    msg.ch04 = 0.6448848676497997;
    msg.ch05 = 0.6327074473946376;
    msg.ch06 = 0.7590698878247678;
    msg.ch07 = 0.39568027962125774;
    msg.ch08 = 0.8852044906185644;
    msg.ch09 = 0.7500512165856671;
    msg.ch10 = 0.9401888745137379;
    msg.ch11 = 0.6513219316289758;
    msg.ch12 = 0.34048964826455663;
    msg.ch13 = 0.8955043248787334;
    msg.ch14 = 0.08250841671611597;
    msg.ch15 = 0.5110944651357872;
    msg.ch16 = 0.22165080093430234;

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
    msg.setTimeStamp(0.07508146762711565);
    msg.setSource(37835U);
    msg.setSourceEntity(50U);
    msg.setDestination(17509U);
    msg.setDestinationEntity(153U);
    msg.ch01 = 0.18375823999165553;
    msg.ch02 = 0.3327815157376014;
    msg.ch03 = 0.030579320541863186;
    msg.ch04 = 0.6277699786685659;
    msg.ch05 = 0.24749308101959022;
    msg.ch06 = 0.11003782636307613;
    msg.ch07 = 0.29839915534358397;
    msg.ch08 = 0.7077487160461741;
    msg.ch09 = 0.632377921980485;
    msg.ch10 = 0.2883099189462154;
    msg.ch11 = 0.9844111869249688;
    msg.ch12 = 0.5378540712346296;
    msg.ch13 = 0.12457142751232986;
    msg.ch14 = 0.13007571546508256;
    msg.ch15 = 0.6590583960161986;
    msg.ch16 = 0.4605761666622582;

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
    msg.setTimeStamp(0.8715589309960504);
    msg.setSource(18179U);
    msg.setSourceEntity(77U);
    msg.setDestination(32822U);
    msg.setDestinationEntity(54U);
    msg.op = 194U;
    msg.lat = 0.9995076800156905;
    msg.lon = 0.5241878238178118;
    msg.height = 0.5233193618777815;
    msg.depth = 0.3342610158919822;
    msg.alt = 0.5689534387590348;

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
    msg.setTimeStamp(0.6165070142335163);
    msg.setSource(17533U);
    msg.setSourceEntity(144U);
    msg.setDestination(50024U);
    msg.setDestinationEntity(148U);
    msg.op = 66U;
    msg.lat = 0.47234033059009506;
    msg.lon = 0.5018265687255274;
    msg.height = 0.9144417525375281;
    msg.depth = 0.8851110643493612;
    msg.alt = 0.43372407225726683;

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
    msg.setTimeStamp(0.6271382248707416);
    msg.setSource(5193U);
    msg.setSourceEntity(250U);
    msg.setDestination(2996U);
    msg.setDestinationEntity(153U);
    msg.op = 42U;
    msg.lat = 0.2266913929030394;
    msg.lon = 0.5235832572987331;
    msg.height = 0.1376170654191614;
    msg.depth = 0.7208161475158239;
    msg.alt = 0.8292359653570043;

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
    msg.setTimeStamp(0.7999614200637593);
    msg.setSource(20011U);
    msg.setSourceEntity(149U);
    msg.setDestination(40663U);
    msg.setDestinationEntity(139U);
    msg.nbeams = 177U;
    msg.ncells = 57U;
    msg.coord_sys = 212U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9166057278969688;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.21279151369336624;
    tmp_tmp_msg_0_0.amp = 0.8223588303043508;
    tmp_tmp_msg_0_0.cor = 18U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8963533928469681);
    msg.setSource(30853U);
    msg.setSourceEntity(58U);
    msg.setDestination(41598U);
    msg.setDestinationEntity(181U);
    msg.nbeams = 92U;
    msg.ncells = 120U;
    msg.coord_sys = 74U;

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
    msg.setTimeStamp(0.5877968270012388);
    msg.setSource(35445U);
    msg.setSourceEntity(141U);
    msg.setDestination(10283U);
    msg.setDestinationEntity(227U);
    msg.nbeams = 103U;
    msg.ncells = 225U;
    msg.coord_sys = 233U;

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
    msg.setTimeStamp(0.7498014193032674);
    msg.setSource(27687U);
    msg.setSourceEntity(143U);
    msg.setDestination(52128U);
    msg.setDestinationEntity(139U);
    msg.cell_position = 0.616485816056492;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3739720493755143;
    tmp_msg_0.amp = 0.5402858835420898;
    tmp_msg_0.cor = 77U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7692253446796106);
    msg.setSource(48412U);
    msg.setSourceEntity(13U);
    msg.setDestination(62664U);
    msg.setDestinationEntity(169U);
    msg.cell_position = 0.25851319666044814;

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
    msg.setTimeStamp(0.4659451626949579);
    msg.setSource(25932U);
    msg.setSourceEntity(138U);
    msg.setDestination(11814U);
    msg.setDestinationEntity(30U);
    msg.cell_position = 0.8569199821202206;

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
    msg.setTimeStamp(0.34724802421646217);
    msg.setSource(56108U);
    msg.setSourceEntity(233U);
    msg.setDestination(11138U);
    msg.setDestinationEntity(211U);
    msg.vel = 0.01805434411488871;
    msg.amp = 0.6727785990814684;
    msg.cor = 31U;

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
    msg.setTimeStamp(0.5440866104046943);
    msg.setSource(28790U);
    msg.setSourceEntity(80U);
    msg.setDestination(33219U);
    msg.setDestinationEntity(131U);
    msg.vel = 0.6119398474913647;
    msg.amp = 0.332492357576194;
    msg.cor = 174U;

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
    msg.setTimeStamp(0.8604948193343331);
    msg.setSource(47934U);
    msg.setSourceEntity(136U);
    msg.setDestination(50935U);
    msg.setDestinationEntity(53U);
    msg.vel = 0.9772351550266872;
    msg.amp = 0.453029854421363;
    msg.cor = 136U;

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
    msg.setTimeStamp(0.43366342532275215);
    msg.setSource(21457U);
    msg.setSourceEntity(23U);
    msg.setDestination(1009U);
    msg.setDestinationEntity(250U);
    msg.name.assign("FHWVDYRBSWTYUBYGJPRFW");
    msg.value = 6U;

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
    msg.setTimeStamp(0.12590160220120905);
    msg.setSource(11178U);
    msg.setSourceEntity(63U);
    msg.setDestination(59097U);
    msg.setDestinationEntity(92U);
    msg.name.assign("XPSPTRHWWIVWYWXXAPNJPBPEZGFNJGTWAKWMSYUQAMMBFQLINDRXFIEFCOYDTASKMRETBSBZSYQSPNKNWHDLERBJEMYIDBPMAHTYRWLONBQJMSRXGDIBD");
    msg.value = 143U;

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
    msg.setTimeStamp(0.5667245559525226);
    msg.setSource(20175U);
    msg.setSourceEntity(230U);
    msg.setDestination(35814U);
    msg.setDestinationEntity(107U);
    msg.name.assign("CXNXVPAFFFKQLIHGVUEGDEMQVVUJWPSEHQVRFEAREHOKMARYRUTKJLQCGAXWZCOCTZVNPZOQHPIHCTBKYVNBBZMADFDUBCIZCSIXJMORMAQUKWTTSBHKSMITXSVXZUJYSDHSQJQTOQRD");
    msg.value = 112U;

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
    msg.setTimeStamp(0.11615074185238028);
    msg.setSource(48683U);
    msg.setSourceEntity(129U);
    msg.setDestination(49808U);
    msg.setDestinationEntity(77U);
    msg.name.assign("QEEXAXZSDLLJWESHYMVZEPWOSMDIKRDMUYBDUUQIORHRTLYHGPCKCYLELPQAFTASTLEAFFIUXWTPOANYOQXKVIJZARVQTHBMLWZGNCTXUKV");

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
    msg.setTimeStamp(0.5803823565489746);
    msg.setSource(58962U);
    msg.setSourceEntity(87U);
    msg.setDestination(43677U);
    msg.setDestinationEntity(0U);
    msg.name.assign("BAVSCCXFWKOTCUBGRKLBKFLVRKICQZAENJMWMPQOWPVYHPZISQVBOBNJAFENDYUBANOHAUJOPMIILLLGJSYIONVAUMPTOZYEWEHFGADBDYXTVXWDGRTXWJDSMZJFWXIZMSULECLUTXQNYPQKWEGCLEVSKUPIZOOPEDCGMJYNCKKKFIRZSRNHB");

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
    msg.setTimeStamp(0.7531379928580515);
    msg.setSource(52806U);
    msg.setSourceEntity(45U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(167U);
    msg.name.assign("IGFPBUWRITHPQMAEOHQBROLXBVIDFNNFOJLHOMILTLOUMYQIJMSFCNGECWWISQDBCXAJVAJVNPLISZYFEKYPECMUTSTDTUFWPTPJAGSMGDBCAZAOWKOPQBXVHZHRXCVMNESVWMPSXWRTHWHXOKOXNNLFCJQFZKDJFZDD");

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
    msg.setTimeStamp(0.5698610571611136);
    msg.setSource(26241U);
    msg.setSourceEntity(77U);
    msg.setDestination(5157U);
    msg.setDestinationEntity(142U);
    msg.name.assign("EMNACRMQAKOUZEQFFDGKGZMQADJPTFKSVPWDWLYIPNULXEVIILJQYSEPHEDBSOBWULLKLTNCHJOBUQOCUMSEHYUFWRHIJXYQCGCCMPGNTUQGHSXHBZNNYFTMJPZVFLSVOFIMUGBBDVRAITCYKNTZIPWWOUXXLVJEAOAFACHXAEUTPRVZQNC");
    msg.value = 59U;

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
    msg.setTimeStamp(0.982767441414298);
    msg.setSource(7678U);
    msg.setSourceEntity(162U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(36U);
    msg.name.assign("ITRYNYMOAPPJCNHIEADADLNXPOAAMXKQMDZYZVEWAKLFPGLEIONDSRGCWJNYUKHCKOGWEIUQLPWIRLZKBPMGUUDQTJVVCUTMHFVIYPEDVCEQLFCGAYPBWM");
    msg.value = 79U;

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
    msg.setTimeStamp(0.07278471374776074);
    msg.setSource(18696U);
    msg.setSourceEntity(10U);
    msg.setDestination(34442U);
    msg.setDestinationEntity(30U);
    msg.name.assign("NJZTRGFGFFZFDTVZUYEOQEWQXGZEOVEWGESXWELBLQJPZMEDGCAIROEVIQSOUMDARIKTPQLERJGIAGANHJRQYKPBTLHQVVJBRZKVCTHDLUNIFKXDAZPOLLSCIWTXXYICSMPFUXDSBVSOQSSWUHXJARYACKZKVKYLCY");
    msg.value = 230U;

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
    msg.setTimeStamp(0.9493991177720342);
    msg.setSource(6457U);
    msg.setSourceEntity(217U);
    msg.setDestination(48925U);
    msg.setDestinationEntity(26U);
    msg.value = 0.1340664205097375;

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
    msg.setTimeStamp(0.7769459705973446);
    msg.setSource(41569U);
    msg.setSourceEntity(110U);
    msg.setDestination(61484U);
    msg.setDestinationEntity(122U);
    msg.value = 0.380838827560945;

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
    msg.setTimeStamp(0.9588870860038039);
    msg.setSource(50032U);
    msg.setSourceEntity(223U);
    msg.setDestination(8032U);
    msg.setDestinationEntity(203U);
    msg.value = 0.09579463756181716;

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
    msg.setTimeStamp(0.798216710257291);
    msg.setSource(38076U);
    msg.setSourceEntity(117U);
    msg.setDestination(63732U);
    msg.setDestinationEntity(4U);
    msg.value = 0.08762674580118313;

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
    msg.setTimeStamp(0.0015893684666751229);
    msg.setSource(50598U);
    msg.setSourceEntity(73U);
    msg.setDestination(13089U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8362753225391061;

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
    msg.setTimeStamp(0.9342800750563933);
    msg.setSource(18214U);
    msg.setSourceEntity(185U);
    msg.setDestination(65385U);
    msg.setDestinationEntity(248U);
    msg.value = 0.2487376244692303;

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
    msg.setTimeStamp(0.485082049823613);
    msg.setSource(29740U);
    msg.setSourceEntity(238U);
    msg.setDestination(45540U);
    msg.setDestinationEntity(142U);
    msg.req_id = 64775U;
    msg.ttl = 27967U;
    msg.expiration = 2845631076U;
    msg.destination.assign("OPBLTASSERMDOIZEBVUQZRJLGPHWNDOKBXISGKNJEPSWNECFWRGMSTGJNXGFOLOOEIPBASLRLHCIXRPLYFMPETLCPVQFOBKHZYSXLCUNVYCBVPTNWYVMKWOYDQQQZGGVNBKEORUQCQZRIFXPEKDZBSYKDAFHICMUVWFAOTFRWULUZKH");
    const char tmp_msg_0[] = {90, -115, 72, 34, 84, 88, -9, -88, -5, -3, -17, 24, -83, 45, -85, 86, -13, -61, -35, -123, 60, -50, 13, -60, 75, -38, 3, 58, 8, 50, 61, -92, 14, -33, 8, 30, -111, -90, -70, -25, 125, 99, 54, 23, 50, 89, 73, 70, 45, -21, -75, -42, 111, 64, 85, 122, -128, 61, 84, -89, -64, -60, 19, 46, -10, -123, 76, -79, 79, -59, -99, 101, -79, -59, 50, -38, -30, 33, 26, 40, 98, 61, 31, -101, -75, -80, -1, 72, 27, -113, -101, 51, 44, 48, -59, 33, 22, 80, -78, 36, -78, 86, -126, 112, -32, -62, 110, -92, 97, 51, -30, 13, -103, -45, -120, 0, 50, 109, 91, 97, -51, -25, 126, -122, 122, 45, 4, 13, -15, 110, 60, 48, -105, -38, 90, 60, 27, 71};
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
    msg.setTimeStamp(0.4732945201997044);
    msg.setSource(38805U);
    msg.setSourceEntity(29U);
    msg.setDestination(37345U);
    msg.setDestinationEntity(45U);
    msg.req_id = 28676U;
    msg.ttl = 12747U;
    msg.expiration = 1032822762U;
    msg.destination.assign("ALXJPANLSJKRQTRZYYWCCPSCIHUSIYKUGQIFZMDCQNUQQHBOMTHHPCWAFGCSSXQVFVDRZEKYNMYGVBVCLBOFDFLFTCKNRPTXEDOAXCTDNWLRDXUIMATOEIVBJDVXREWSBPUWWHF");
    const char tmp_msg_0[] = {58, -74, -24, -47, -94, -37, -70, -44, 70, -57, 107, -122, -69, -95, -30, -85, 33, 17, 46, -48, -43, 102, -80, -60, -52, 35, 97, -123, -39, -7, -118, -53, 117, -21, -87, -118, 122, 104, -55, -117, -83, 73, -38, 40, -113, 7, 109, -49, 99, 86, 125, -44, 87, -107, 54, 84, 66, -21, -35, -33, 106, -90, 122, -10, -2, 19, 46, 29, 35, -33, 54, 16, -59, 12, -10, -86, 19, 34, -111, -54, -80, -99, -4, 119, -126, 49, -122, 80, -127, -114, -58, 31, 61, 95, 106, 112, -42, 34, -80, -90, 52};
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
    msg.setTimeStamp(0.24346298534935318);
    msg.setSource(24044U);
    msg.setSourceEntity(110U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(163U);
    msg.req_id = 18173U;
    msg.ttl = 9833U;
    msg.expiration = 1217412951U;
    msg.destination.assign("EJGIHRZWSBWUROTDNLQYIPCSIANNDGWEDHRIHVGIUCPMMEJSZKSYFMQAGLTYVHFKMGLYTKHEJRDDIRGJVTDXUVTJFBVZIWFQACUNIYPXZLDFSKKCOUVDEOYCYQVBLSCEYXUPSHUNQKMWMRFKZMIHCCWRZXKMTOJLLXTFFOCAZJBBMGVBOSRHWESTN");
    const char tmp_msg_0[] = {112, -83, 66, 118, 61, -113, -1, 83, 40, 12, -22, 121, -13, 83, 53, 26, 119, 99, -93, 92, 12, -60, -45, 114, -115, 121, -70, 95, -95, -32, 5, 78, -1, -38, 24, 28, 50, 20, -22, 83, -39, 27, -100, 74, -21, 58, 18, 89, -99, -55, 105, -89, 20, -94, 99, 71, 53, 92, -51, -50, -52, -30};
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
    msg.setTimeStamp(0.8333790269089684);
    msg.setSource(17599U);
    msg.setSourceEntity(22U);
    msg.setDestination(61356U);
    msg.setDestinationEntity(157U);
    msg.value = 0.8863506749985081;

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
    msg.setTimeStamp(0.10103015307900043);
    msg.setSource(17619U);
    msg.setSourceEntity(65U);
    msg.setDestination(13019U);
    msg.setDestinationEntity(145U);
    msg.value = 0.747753346935505;

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
    msg.setTimeStamp(0.7890918365219843);
    msg.setSource(50779U);
    msg.setSourceEntity(222U);
    msg.setDestination(10531U);
    msg.setDestinationEntity(209U);
    msg.value = 0.16936708543582557;

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
    msg.setTimeStamp(0.32075002495204263);
    msg.setSource(20060U);
    msg.setSourceEntity(134U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(66U);
    msg.type = 180U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 83U;
    tmp_msg_0.op = 50U;
    tmp_msg_0.request_id = 46357U;
    tmp_msg_0.plan_id.assign("UQSITWYQEDGZSYFINAOSAW");
    IMC::QueryPowerChannelState tmp_tmp_msg_0_0;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("OWDAKXHPKLJAQIFSWRZJPLJQNIGPXJFLGGFSVNVHHIGDRVUCKHLBZFSGHOPESFRTYQCJMBIOGTCTRPOKVDOPWIWKNDKUBM");
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
    msg.setTimeStamp(0.8231689096515759);
    msg.setSource(35428U);
    msg.setSourceEntity(64U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(207U);
    msg.type = 49U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 117U;
    tmp_msg_0.op = 148U;
    tmp_msg_0.request_id = 58001U;
    tmp_msg_0.plan_id.assign("GVSVVRIRYFQG");
    IMC::IoEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 121U;
    tmp_tmp_msg_0_0.error.assign("EMSKLIZWOBKHRHCVVGQMTXRIQVOHBNFESIWGLRJSARAPQHYWVUGKBCGLFZBCAUXAWMVAFKUTVLPUDOTYHKFPOZBEWCBWBNSOIKEYLRGXSDEYZUIRMARUXXEKDSCIQVOHDDUAYRVBUJGASMKFNLPOBMDQHQRHJEFEZYSFTJNLQGXQGPNYXPTHLDHYTUVEFIMNTLZINSCNTJDJLG");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("STZUBJMNPAJGIXWHOZKCVXUIDMWASROEIQBJEAVHCUBXFMAURVWPTSOLWNBRIPLZKTCMGHCIPXOIQGSSANLKQBMNOSWBNZWCLPPMZKLJGDRVOAUVFCFGNRNGJWZRKCPYJYAXUTHDDEZMRCEWKTOEAQFIBUSXXQSTOFBYEMSFHUCNHJTRNLZTHPJG");
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
    msg.setTimeStamp(0.8499691664383304);
    msg.setSource(4713U);
    msg.setSourceEntity(186U);
    msg.setDestination(14790U);
    msg.setDestinationEntity(87U);
    msg.type = 157U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 159U;
    tmp_msg_0.op = 86U;
    tmp_msg_0.request_id = 34416U;
    tmp_msg_0.plan_id.assign("WOFCRMMMREMKHLBUCKGVHMEAQCQAMZWSXFBCNZRJDYORLSSTNRDXMWQHGITIARRFHZVULDBLNTUFLTVFCLSLWTWBVNZQUKMDZOMEXCE");
    IMC::CapabilityAreaSurvey tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sensor = 91U;
    tmp_tmp_msg_0_0.resolution = 0.5406149899348911;
    tmp_tmp_msg_0_0.res_bathym_factor = 0.7596486002407298;
    tmp_tmp_msg_0_0.cov_rate = 0.6523350583937351;
    tmp_tmp_msg_0_0.cov_bathym_factor = 0.7108531910080675;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("QHWIMTJAZLPFFXJNCBTUJGYNGIEXIDPQCVAJ");
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
    msg.setTimeStamp(0.6179261477052673);
    msg.setSource(65073U);
    msg.setSourceEntity(210U);
    msg.setDestination(34582U);
    msg.setDestinationEntity(40U);
    msg.name.assign("SCUBKOPRLUHUPPLOTJKVERYMAJBQMXDPMHAQGXIQQHRLUFLEIACFPUZPTNEFCMQLSQWLIUKKFVTSLYRQOWDGOKBYSHNAIQBJMXGZAZNVERJEFMSHTFYAKJUGDICYMKXZEWVDHZCQ");
    msg.type = 179U;
    msg.default_value.assign("PLJKXZFHFSTFNIYLFOXFKUGYOYPEISIIWIJNEKTMRWBOMDPDDMVCYBKXGQAHXBGIWRGIFEMQSZNAPPEVRIBUBKLZZSUVYLVNGFANZOQPAHKWAKYVXJUVZHUROYNZLQHIVLUBZKQWQJGJQGHWCCWCPVTKOBPYWNJMBEUZOVOPWFAQSGTHUQYCDBLWSLSHELBJAAMNTVJRRTSDHXTXPR");
    msg.units.assign("CZYUTBZHPDDOJEWKSLBYAPXSWYFTXRORNKONJEBKSWWVJTBUVDXVMFILKRAMBGYQTGXIPADBGCHJQIYQPSISYAVRQEGL");
    msg.description.assign("OPRPFIVEAJPCDXQPFFYKNYQIZMLDRJBXDWNWUDOHZTKQKMWZZGCZLHNEWSGGOHFSAPBXKLQEAVJIGTBQFZBESIOOKUCFNAXURGDCUNAEBNPISGWKQCQPFXYOQAXYBJRYLQMPXSOLUJDTTIVOMWPCISMCHXRTYROAVHFBLKGCANDJEULNTTVWHVVZGLMKCRYULJWXXQMWVSMSHMGBZBVHSMUKTNNURSYGDJIJRAWEDUJPCOYHEAIZFVYZRHF");
    msg.min_value = 0.4345409477999945;
    msg.max_value = 0.4007610179200416;
    msg.list_min_size = 4195206879U;
    msg.list_max_size = 1060984765U;
    msg.visibility = 35U;
    msg.scope = 129U;

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
    msg.setTimeStamp(0.625589841237608);
    msg.setSource(38030U);
    msg.setSourceEntity(118U);
    msg.setDestination(11633U);
    msg.setDestinationEntity(173U);
    msg.name.assign("KDNLEESDLTGJAQUAQUOJHWNIRKHVQGYTINRBVVGMEFDVFHBTTMISPXVRIAYAGNICSYZDGLBWNZBOMQPYADZZDOBVMHCYFZPONZIJJUS");
    msg.type = 41U;
    msg.default_value.assign("FHXHQCZOAOYQSTEYVZEEANVCVBHEIKFRBWXVUXPIZ");
    msg.units.assign("TEBHALVLUGFPOWIBWHITNZDDEJJKFE");
    msg.description.assign("IZUZLTZFDWCIVQAFHROCVRXDH");
    msg.min_value = 0.5388663829321304;
    msg.max_value = 0.08247989259690447;
    msg.list_min_size = 2049568748U;
    msg.list_max_size = 2803127051U;
    msg.visibility = 239U;
    msg.scope = 18U;

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
    msg.setTimeStamp(0.9833707769083846);
    msg.setSource(42219U);
    msg.setSourceEntity(30U);
    msg.setDestination(48234U);
    msg.setDestinationEntity(240U);
    msg.name.assign("VEJFOCQLJVXAEKVKCGDFKUIFOAVUADMIPXYCR");
    msg.type = 250U;
    msg.default_value.assign("ZPBWKCQJEJGACTFUGLWEHUOTSD");
    msg.units.assign("OKXZMEKZHYIXORLHQRGMAKADDBDYBQFOGDZNBINMXYVTBPZCFPJGZTLSXOLVSELLGMKAUDYSMBOHPWWVKOSXBMFHYMTCFAWDPCWNWTNIEBUWRANURFRVQXUMCDHDUNENWMPSPKEHOFQIIZKUVDPSRETOIUQUQCQKBYSTTQYOCTGFQKGATNJAARSACZHIXWJJCLGFSWDXAVEBCGRJRVPUEVEJLKLCZNTGZHPFJOLFEQPVJXIYSYXJBGNRI");
    msg.description.assign("XRLELQVDRAJYIDBUEFUNFRNLAWJIDQRRKYICFDSYUBRLOFTNLTHYTDUQNAGHUOVLETMSPGTKALSPJNKOSMYOCZEMVWXSDVBQIPYFCTNVRRARGFGXBHMTLIMFZZZWPOAKWAJXPX");
    msg.min_value = 0.49127702401159923;
    msg.max_value = 0.10582493765602963;
    msg.list_min_size = 2489565093U;
    msg.list_max_size = 898019270U;
    msg.visibility = 47U;
    msg.scope = 157U;

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
    msg.setTimeStamp(0.8367696225107627);
    msg.setSource(9171U);
    msg.setSourceEntity(54U);
    msg.setDestination(15204U);
    msg.setDestinationEntity(222U);
    msg.op = 85U;
    msg.request_id = 965098034U;
    msg.entity_name.assign("BGDZAJQCWEUCRTNPOMOHLGPJDFSAMKELMZTYUVIKQZJHWRDQCNQVNQCBNDVPJWSAKUDGFSMYSXEONGPPBRGJSCPAMBKCFNNRFEPXXWIYKXBMOKTJVXVPJLZKVGOAEMDHWIQAAKAGEXCHBHVALKSYEIDUFBUCUCKQMBSPLPZYIUIHXRICQJMSTRTOFSLZIRHTVFYLZBOZTRUGA");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SIWKSMKTYPNSVOIBSEXEMDMDDORNMCYYKOZZHUAKZANFQWQQKRBQDLVNALGJETPXPTJZIYNHVQTWDIJLLLIZRCUVWHDPTUZUBHUAOVPXJATSACXFFJRNKBJGEJUSGFLYEHRTFXCXTUCVFAGQWGHBPVZCYNMWJJRPCNSIILFGCKRARKFLEDNXBSZOWOVWMFROBLXJSVKGUOTYEM");
    tmp_msg_0.type = 191U;
    tmp_msg_0.default_value.assign("RPSAVTRTXYSWGKVGOOBYMNDRJCBQJXXAPQVTCXBOIFCJFUPZPHRJPHUUUTVQPGRRZGNDHULFGRIEHQVLGPLWWOJGGXUBLLFEIEBCNETTEUZMXYJBUPCROKFECSNJAGASYJSMFWDPLFAFAW");
    tmp_msg_0.units.assign("VGQLHAYBOTMDGPQLNLASREMNGEQEADTYNPHRYNZUTXIJUCPOYACBTTUQRKDMWRFQBTJLYGSWUHQNWVSBDMSHSVYHZ");
    tmp_msg_0.description.assign("ZLWEDXHKHKSMMNYHTQUECNWWAEOIGCAYDILMNVUKANIBBNEHMAIPGXMUZPUCRHPAFJZSOEOKKXAQFBJOQP");
    tmp_msg_0.min_value = 0.8869229626214746;
    tmp_msg_0.max_value = 0.08350552248716203;
    tmp_msg_0.list_min_size = 1162805991U;
    tmp_msg_0.list_max_size = 10992486U;
    tmp_msg_0.visibility = 105U;
    tmp_msg_0.scope = 92U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.34638430006167087);
    msg.setSource(20015U);
    msg.setSourceEntity(127U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(71U);
    msg.op = 151U;
    msg.request_id = 2404751713U;
    msg.entity_name.assign("HNFVSJVSRPCJAYTZEMTOROLBEWELKLXONOKIDQXQNNHWPWHHZXJBXAHMWJRZNRDYFISTFEYCPHCPFAHBFIMCQGHZMEERPKKRPHCEBDOMTEFOUZGQXWQLFFKYPSXIMNRVUDYECJMGLQIBQJWBYVRSJDWGGVJVKGSDAUVISUNZQLLLMJXPLUSTYGKFCOQQEUOXDBUUWGWXBTUDAMYASVT");

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
    msg.setTimeStamp(0.8848113926279645);
    msg.setSource(59335U);
    msg.setSourceEntity(50U);
    msg.setDestination(29424U);
    msg.setDestinationEntity(186U);
    msg.op = 205U;
    msg.request_id = 2770340822U;
    msg.entity_name.assign("EECIUKVSXNDWVGYDKQKJXANDHLPXGYATLZYENNOSGPFJXHMDOQXLBKRVMRLNUSIFTRWTREUFQAEXYZQHJWTEHHPWYBECZHISPSNKUMASRJLCYIJAOHYRFJGNGMNDCVCDEWFXIMVSRLBPDWCJJKVURYIPLAUYFBQIOSSLGUCFGXTTAIXEUOIHOMVCVFBRNUBMBYNGKQZBZDWOTPMGKLQAKHWPW");

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
    msg.setTimeStamp(0.11187126065918962);
    msg.setSource(60766U);
    msg.setSourceEntity(92U);
    msg.setDestination(28837U);
    msg.setDestinationEntity(194U);
    msg.restriction = 227U;
    msg.reason.assign("GAEPGYJYVNMLWZJZDYACVYYRYMZXLWMTPOOYAFQSHHUDPFDPUMTIMEXACANPZGDBOR");

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
    msg.setTimeStamp(0.977492411421139);
    msg.setSource(45914U);
    msg.setSourceEntity(218U);
    msg.setDestination(41097U);
    msg.setDestinationEntity(224U);
    msg.restriction = 129U;
    msg.reason.assign("AOZHDKTZPSCYRUAVZGGGEZCWVLJPKNJJOVQSVSRQUHZVUFINLXYKLDYJIFLDBSQ");

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
    msg.setTimeStamp(0.9558092961291877);
    msg.setSource(34748U);
    msg.setSourceEntity(191U);
    msg.setDestination(10822U);
    msg.setDestinationEntity(211U);
    msg.restriction = 57U;
    msg.reason.assign("FQRRPIWUMVRQCPSTXTKCHUAMVQOJQMTUKRVNBRDNJORHBUSZKYLGXEZSCESAHLYAQUDCZLQFTFCO");

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
    msg.setTimeStamp(0.4600411571583818);
    msg.setSource(18558U);
    msg.setSourceEntity(123U);
    msg.setDestination(47239U);
    msg.setDestinationEntity(191U);
    msg.mac.assign("NSKTXRQOZJCMKLGOGQLCAVLWRPAVTAEOTIARFDGFFW");
    msg.ip.assign("STVYJIECPPJFAPQRBNNVVNBRLFZFUIOITUHJVNTEBSLHMDYSZJZEYMLWQDBAYCATJVTWPYBZQOLFAMGOPUUIXMLNMQKYNQGBKDHC");
    msg.ccq = 196U;
    msg.noise_floor = 24387;
    msg.signal = -772;
    msg.rssi = 32605U;
    msg.rx_rate = 27424;
    msg.tx_rate = 8596;
    msg.tx_latency = -2102;
    msg.tx_power = -31204;
    msg.rx_count = 1144451396U;
    msg.tx_count = 2127576831U;
    msg.distance = 32034;

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
    msg.setTimeStamp(0.7813058734815584);
    msg.setSource(64000U);
    msg.setSourceEntity(194U);
    msg.setDestination(42092U);
    msg.setDestinationEntity(116U);
    msg.mac.assign("PABQBYUCKSXVHNQFTRFVVAXDMKRZJKYXDLPZXGRKHGTVLJGBPJYIYZNTZICWNAPWLWSFDCEDDUHNLCVFKHZGYEMYSBOKOTFIGPQIIFIXFULCTVKRWMOGQAWSLSEEPHOVYNHQWYLLIHRCMUEXZWGKCWLSEGDFTWZUPGJR");
    msg.ip.assign("TYZWMKCQXHJFWBIROVZMXBDTAOQARXREYBZSGFFNHBMWCON");
    msg.ccq = 88U;
    msg.noise_floor = 27284;
    msg.signal = 3195;
    msg.rssi = 61091U;
    msg.rx_rate = -32322;
    msg.tx_rate = -16761;
    msg.tx_latency = -14548;
    msg.tx_power = 1735;
    msg.rx_count = 1119694378U;
    msg.tx_count = 796942605U;
    msg.distance = 17441;

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
    msg.setTimeStamp(0.09502657176422502);
    msg.setSource(30505U);
    msg.setSourceEntity(134U);
    msg.setDestination(4986U);
    msg.setDestinationEntity(226U);
    msg.mac.assign("XFBSMZNGOPPNQPZSKUPZCGXXJYHQUZKQJAYIOJDSXDKJOLZBKFICDVGUTLXWFAPMDNEXVAXWDSLLGBKKRBOFCEPRVAABJPUEO");
    msg.ip.assign("KCVIDSJSYIYGAXIFJLNZAVUJTYCUABMUJE");
    msg.ccq = 251U;
    msg.noise_floor = -25156;
    msg.signal = -30134;
    msg.rssi = 45615U;
    msg.rx_rate = 14200;
    msg.tx_rate = -20360;
    msg.tx_latency = 16338;
    msg.tx_power = 10934;
    msg.rx_count = 3863658551U;
    msg.tx_count = 386872529U;
    msg.distance = 17854;

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
    msg.setTimeStamp(0.520232255496758);
    msg.setSource(3656U);
    msg.setSourceEntity(56U);
    msg.setDestination(3079U);
    msg.setDestinationEntity(220U);
    msg.essid.assign("FWQCVOVHZRYGBASEWGTOLCYFKNDWLGYIPPILXXHYLBNZTDJ");
    msg.mac.assign("ZTUQMQITYXOPBWCTGRIZRLJEBOIRDARCXNGAGBBVNMAISEFSMQERYHLVNXAKLZYJXETAOYGJTCMLVHJDFYBJLWQZEWDGETVOGHVIJXZSDDIKOVNGPIPOKYJFDTORWTSSQZQABCSNFLKEUYDHFMCIAXLVNBQQNPKDVCGCWWYNMMUEEUSOYFQMYKJFAPPJMOMAHDZUFUUHIZXBRCOHVUJZWHWNPBWI");
    msg.signal = -8081;
    msg.noise = 22193;
    msg.ccq = 52;
    msg.channel = 101U;
    msg.freq = 0.22169811992427935;
    msg.security.assign("NHQAQCFKMDLTFOIXYBEGUPDELNBCHLWZIVQTDJOKHGRDRDAEJJJISZCSRAKH");

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
    msg.setTimeStamp(0.5390341681462503);
    msg.setSource(31359U);
    msg.setSourceEntity(0U);
    msg.setDestination(48620U);
    msg.setDestinationEntity(57U);
    msg.essid.assign("FATIJZVENUPOUQJCJVDYHBYEWMAPHFFVPWVFGKPCXTPDEYCYTIAIIBQXYPBHGWOKEBWTVUMERUSIBKRFLGIDWDOSRGUDARYLQJT");
    msg.mac.assign("BQKXOZIXMEORAZKPTXEUZIPJBMTCPWVOHULGVMJYPISSHKUBPFTWAAFGGVXTYYJYFGRDHOMARVEZJVZUCPCDFQGSCPIQLEQLUTJCYWUHDJYKCKTVFHOXEOULCMWWFUXMSZWIAIPKNOQQNEAODIQJBXLMNOYJYXYMEPGDLMUS");
    msg.signal = 20371;
    msg.noise = -10906;
    msg.ccq = -124;
    msg.channel = 252U;
    msg.freq = 0.24206044608702426;
    msg.security.assign("TIUIFCUBAWXGSOLTXRWBUKBYYIVCQPLZTGNWRYBWSZPZGASBZMHCIIPNGUBWPXEVULKJSQAFHZFCHKNMEJZBFYPOZXVJELLESYRHNDJGKDRWGRTSONQLBMXODITPPDVXCVUJVRMNXKQO");

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
    msg.setTimeStamp(0.2896498882613736);
    msg.setSource(25195U);
    msg.setSourceEntity(5U);
    msg.setDestination(53955U);
    msg.setDestinationEntity(37U);
    msg.essid.assign("RRXIGYOGYLJDCOETBICZGVZXBPNYSGVSMOAKCUDUNANLZBKOKWSHKLILIMQILRUXDWDRETFWUASKTHGWHAZVAUJWQPMJXRESRXQBJREQRUSZAOTGYTLCEHDUNMSXFV");
    msg.mac.assign("VBROWVIEAZECGNGMF");
    msg.signal = -735;
    msg.noise = -13046;
    msg.ccq = 111;
    msg.channel = 158U;
    msg.freq = 0.6906787045173165;
    msg.security.assign("NLBGNDWSRLJFGZOQLRIVIGCAJXYFULKFZXLHTPPJWCSXISMYIAQPUAELWDOQQIEVHJCHADTCFZYSWTBVKVMXKRHSYBWMWJMAWXUTGRP");

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
    msg.setTimeStamp(0.7432054971170492);
    msg.setSource(35673U);
    msg.setSourceEntity(240U);
    msg.setDestination(43773U);
    msg.setDestinationEntity(70U);
    msg.frequency = -870469801;
    msg.pulse_length = -1203129239;
    msg.time_delay = 1609078510;
    msg.simulated_speed = 79744710;

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
    msg.setTimeStamp(0.6209360221355215);
    msg.setSource(5946U);
    msg.setSourceEntity(251U);
    msg.setDestination(22167U);
    msg.setDestinationEntity(176U);
    msg.frequency = -744342562;
    msg.pulse_length = -1678169352;
    msg.time_delay = 550263652;
    msg.simulated_speed = -1562293506;

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
    msg.setTimeStamp(0.7721013557366907);
    msg.setSource(53586U);
    msg.setSourceEntity(113U);
    msg.setDestination(57908U);
    msg.setDestinationEntity(89U);
    msg.frequency = -588348779;
    msg.pulse_length = 1033120876;
    msg.time_delay = 1937797196;
    msg.simulated_speed = 904075969;

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
    msg.setTimeStamp(0.3406045298680329);
    msg.setSource(8463U);
    msg.setSourceEntity(68U);
    msg.setDestination(3252U);
    msg.setDestinationEntity(81U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 22113U;
    msg.geo_features.push_back(tmp_msg_0);
    IMC::CoverageState tmp_msg_1;
    tmp_msg_1.feature_id = 48492U;
    tmp_msg_1.state = 13U;
    msg.cov_states.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8255803005319462);
    msg.setSource(10848U);
    msg.setSourceEntity(211U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(250U);
    IMC::CoverageState tmp_msg_0;
    tmp_msg_0.feature_id = 57315U;
    tmp_msg_0.state = 32U;
    msg.cov_states.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9507217994698002);
    msg.setSource(35212U);
    msg.setSourceEntity(71U);
    msg.setDestination(20221U);
    msg.setDestinationEntity(35U);
    IMC::CoverageState tmp_msg_0;
    tmp_msg_0.feature_id = 15383U;
    tmp_msg_0.state = 201U;
    msg.cov_states.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.14427229644289308);
    msg.setSource(27411U);
    msg.setSourceEntity(64U);
    msg.setDestination(62819U);
    msg.setDestinationEntity(110U);
    msg.feature_id = 28631U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.03270055633011382;
    tmp_msg_0.lon = 0.6021957593882579;
    tmp_msg_0.alt = 0.3395246639613918;
    msg.points.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.30083301899955617);
    msg.setSource(59176U);
    msg.setSourceEntity(184U);
    msg.setDestination(38303U);
    msg.setDestinationEntity(165U);
    msg.feature_id = 59108U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8823618198425282;
    tmp_msg_0.lon = 0.022451191736158282;
    tmp_msg_0.alt = 0.43563178505593003;
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
    msg.setTimeStamp(0.7210231786120899);
    msg.setSource(45251U);
    msg.setSourceEntity(227U);
    msg.setDestination(57106U);
    msg.setDestinationEntity(162U);
    msg.feature_id = 52005U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.21709995539178295;
    tmp_msg_0.lon = 0.1065833713040708;
    tmp_msg_0.alt = 0.21416351430700953;
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
    msg.setTimeStamp(0.6718586494582207);
    msg.setSource(4379U);
    msg.setSourceEntity(1U);
    msg.setDestination(54585U);
    msg.setDestinationEntity(157U);
    msg.feature_id = 16572U;
    msg.state = 26U;

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
    msg.setTimeStamp(0.4169987484121169);
    msg.setSource(24363U);
    msg.setSourceEntity(148U);
    msg.setDestination(15564U);
    msg.setDestinationEntity(248U);
    msg.feature_id = 7426U;
    msg.state = 127U;

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
    msg.setTimeStamp(0.6003661989842195);
    msg.setSource(49500U);
    msg.setSourceEntity(175U);
    msg.setDestination(60581U);
    msg.setDestinationEntity(198U);
    msg.feature_id = 41139U;
    msg.state = 199U;

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
    msg.setTimeStamp(0.7762869184590714);
    msg.setSource(59315U);
    msg.setSourceEntity(103U);
    msg.setDestination(18496U);
    msg.setDestinationEntity(166U);
    msg.tid = 28506U;
    msg.op = 47U;
    IMC::SurveyTask tmp_msg_0;
    tmp_msg_0.task_id = 64873U;
    tmp_msg_0.feature_id = 41809U;
    tmp_msg_0.sensor = 230U;
    tmp_msg_0.resolution = 0.030077157337848104;
    tmp_msg_0.deadline = 0.5351244644276573;
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
    msg.setTimeStamp(0.2841629264254085);
    msg.setSource(15972U);
    msg.setSourceEntity(244U);
    msg.setDestination(10097U);
    msg.setDestinationEntity(250U);
    msg.tid = 33507U;
    msg.op = 227U;
    IMC::TaskStatus tmp_msg_0;
    tmp_msg_0.task_id = 51501U;
    tmp_msg_0.status = 103U;
    tmp_msg_0.progress = 208U;
    tmp_msg_0.quality = 86U;
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
    msg.setTimeStamp(0.11531393490231356);
    msg.setSource(64758U);
    msg.setSourceEntity(229U);
    msg.setDestination(17650U);
    msg.setDestinationEntity(191U);
    msg.tid = 21243U;
    msg.op = 244U;
    IMC::MoveTask tmp_msg_0;
    tmp_msg_0.task_id = 57839U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.88382617219535;
    tmp_tmp_msg_0_0.lon = 0.23049459563342378;
    tmp_tmp_msg_0_0.alt = 0.8965310054215739;
    tmp_msg_0.destination.set(tmp_tmp_msg_0_0);
    tmp_msg_0.deadline = 0.5225060609185836;
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
    msg.setTimeStamp(0.32229746482421817);
    msg.setSource(12740U);
    msg.setSourceEntity(14U);
    msg.setDestination(33830U);
    msg.setDestinationEntity(71U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.6148613327254541);
    msg.setSource(17093U);
    msg.setSourceEntity(62U);
    msg.setDestination(57172U);
    msg.setDestinationEntity(233U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.994350389910172);
    msg.setSource(65042U);
    msg.setSourceEntity(59U);
    msg.setDestination(30656U);
    msg.setDestinationEntity(203U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.8011054371685673);
    msg.setSource(27640U);
    msg.setSourceEntity(240U);
    msg.setDestination(7338U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.1187112503811788);
    msg.setSource(58885U);
    msg.setSourceEntity(95U);
    msg.setDestination(58419U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.4622570917040424);
    msg.setSource(4974U);
    msg.setSourceEntity(78U);
    msg.setDestination(56550U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.023753332839480334);
    msg.setSource(1314U);
    msg.setSourceEntity(187U);
    msg.setDestination(10712U);
    msg.setDestinationEntity(183U);
    msg.sensor = 203U;
    msg.resolution = 0.10928383679252485;
    msg.res_bathym_factor = 0.3540500715790216;
    msg.cov_rate = 0.7259987957893502;
    msg.cov_bathym_factor = 0.4914758333777638;

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
    msg.setTimeStamp(0.5773208330338534);
    msg.setSource(56418U);
    msg.setSourceEntity(171U);
    msg.setDestination(54189U);
    msg.setDestinationEntity(228U);
    msg.sensor = 159U;
    msg.resolution = 0.5022847864995624;
    msg.res_bathym_factor = 0.8741556852689917;
    msg.cov_rate = 0.3382261211884602;
    msg.cov_bathym_factor = 0.4324264436757934;

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
    msg.setTimeStamp(0.5540037718950572);
    msg.setSource(1914U);
    msg.setSourceEntity(52U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(249U);
    msg.sensor = 158U;
    msg.resolution = 0.2617527111819955;
    msg.res_bathym_factor = 0.9554436104746212;
    msg.cov_rate = 0.1856089678354479;
    msg.cov_bathym_factor = 0.3887633883466769;

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
    msg.setTimeStamp(0.2714934129084918);
    msg.setSource(33088U);
    msg.setSourceEntity(250U);
    msg.setDestination(7625U);
    msg.setDestinationEntity(190U);
    msg.sensor = 179U;
    msg.resolution = 0.3820998859956385;
    msg.duration = 0.8360093284863429;

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
    msg.setTimeStamp(0.43138649773079885);
    msg.setSource(37471U);
    msg.setSourceEntity(7U);
    msg.setDestination(23228U);
    msg.setDestinationEntity(229U);
    msg.sensor = 27U;
    msg.resolution = 0.987079203272603;
    msg.duration = 0.2874139212281286;

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
    msg.setTimeStamp(0.0494873293993382);
    msg.setSource(42924U);
    msg.setSourceEntity(194U);
    msg.setDestination(61730U);
    msg.setDestinationEntity(136U);
    msg.sensor = 36U;
    msg.resolution = 0.6103635406238243;
    msg.duration = 0.7151089761391412;

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
    msg.setTimeStamp(0.14748562959916234);
    msg.setSource(19822U);
    msg.setSourceEntity(254U);
    msg.setDestination(52104U);
    msg.setDestinationEntity(161U);
    msg.speed = 0.00624869931206129;

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
    msg.setTimeStamp(0.475097743568219);
    msg.setSource(17419U);
    msg.setSourceEntity(233U);
    msg.setDestination(14577U);
    msg.setDestinationEntity(62U);
    msg.speed = 0.7978096235417451;

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
    msg.setTimeStamp(0.7244282294706106);
    msg.setSource(9458U);
    msg.setSourceEntity(201U);
    msg.setDestination(58835U);
    msg.setDestinationEntity(171U);
    msg.speed = 0.32246780557511223;

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
    msg.setTimeStamp(0.9948633434155816);
    msg.setSource(6605U);
    msg.setSourceEntity(183U);
    msg.setDestination(62878U);
    msg.setDestinationEntity(152U);
    msg.task_id = 57723U;
    msg.feature_id = 40849U;
    msg.sensor = 119U;
    msg.resolution = 0.6227594192854145;
    msg.deadline = 0.28257577426796165;

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
    msg.setTimeStamp(0.7591343526725537);
    msg.setSource(43110U);
    msg.setSourceEntity(168U);
    msg.setDestination(11600U);
    msg.setDestinationEntity(197U);
    msg.task_id = 62266U;
    msg.feature_id = 17448U;
    msg.sensor = 185U;
    msg.resolution = 0.9493789777158985;
    msg.deadline = 0.549046384365401;

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
    msg.setTimeStamp(0.5700567677400685);
    msg.setSource(50954U);
    msg.setSourceEntity(197U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(6U);
    msg.task_id = 11646U;
    msg.feature_id = 46858U;
    msg.sensor = 151U;
    msg.resolution = 0.284571278515376;
    msg.deadline = 0.6552414483039718;

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
    msg.setTimeStamp(0.6174018972700159);
    msg.setSource(5803U);
    msg.setSourceEntity(199U);
    msg.setDestination(23731U);
    msg.setDestinationEntity(236U);
    msg.task_id = 22392U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.09554436191145377;
    tmp_msg_0.lon = 0.30132674044819674;
    tmp_msg_0.alt = 0.965149868359603;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.7014701279793719;

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
    msg.setTimeStamp(0.7991316671358785);
    msg.setSource(37051U);
    msg.setSourceEntity(175U);
    msg.setDestination(5644U);
    msg.setDestinationEntity(225U);
    msg.task_id = 40075U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.447334779118316;
    tmp_msg_0.lon = 0.9567205805735493;
    tmp_msg_0.alt = 0.1370478764955616;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.24264282883873567;

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
    msg.setTimeStamp(0.846051210482181);
    msg.setSource(61931U);
    msg.setSourceEntity(14U);
    msg.setDestination(38521U);
    msg.setDestinationEntity(240U);
    msg.task_id = 3401U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.43655773671175124;
    tmp_msg_0.lon = 0.5345624798798921;
    tmp_msg_0.alt = 0.4694184862550863;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.2181915399502491;

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
    msg.setTimeStamp(0.4135437353674829);
    msg.setSource(33803U);
    msg.setSourceEntity(72U);
    msg.setDestination(10294U);
    msg.setDestinationEntity(28U);
    msg.task_id = 7392U;
    msg.status = 122U;
    msg.progress = 248U;
    msg.quality = 149U;

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
    msg.setTimeStamp(0.13998365869102558);
    msg.setSource(35370U);
    msg.setSourceEntity(158U);
    msg.setDestination(55844U);
    msg.setDestinationEntity(243U);
    msg.task_id = 52080U;
    msg.status = 203U;
    msg.progress = 196U;
    msg.quality = 146U;

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
    msg.setTimeStamp(0.9446813300922067);
    msg.setSource(17327U);
    msg.setSourceEntity(178U);
    msg.setDestination(4692U);
    msg.setDestinationEntity(25U);
    msg.task_id = 13621U;
    msg.status = 178U;
    msg.progress = 133U;
    msg.quality = 121U;

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
    msg.setTimeStamp(0.17216299733238594);
    msg.setSource(14541U);
    msg.setSourceEntity(182U);
    msg.setDestination(55791U);
    msg.setDestinationEntity(70U);
    msg.task_id = 15262U;
    msg.feature_id = 53990U;
    msg.time_window = 13637U;
    msg.deadline = 0.22331885070550395;

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
    msg.setTimeStamp(0.30104593294149373);
    msg.setSource(21823U);
    msg.setSourceEntity(73U);
    msg.setDestination(32109U);
    msg.setDestinationEntity(210U);
    msg.task_id = 12250U;
    msg.feature_id = 47993U;
    msg.time_window = 37684U;
    msg.deadline = 0.19137857065628816;

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
    msg.setTimeStamp(0.5977522424551148);
    msg.setSource(49879U);
    msg.setSourceEntity(103U);
    msg.setDestination(14424U);
    msg.setDestinationEntity(183U);
    msg.task_id = 36578U;
    msg.feature_id = 23346U;
    msg.time_window = 36767U;
    msg.deadline = 0.5399481810281433;

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
