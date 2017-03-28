//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 0a8e4d9f66cf472c35c9abd3c58fd140                            *
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
    msg.setTimeStamp(0.970246493594);
    msg.setSource(14706U);
    msg.setSourceEntity(16U);
    msg.setDestination(12133U);
    msg.setDestinationEntity(253U);
    msg.state = 227U;
    msg.flags = 154U;
    msg.description.assign("MTUOMETLZDQLQEYBYWCGOFNIIYVAOPBVOVYKWSWJGTX");

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
    msg.setTimeStamp(0.640284214199);
    msg.setSource(35923U);
    msg.setSourceEntity(179U);
    msg.setDestination(61517U);
    msg.setDestinationEntity(15U);
    msg.state = 165U;
    msg.flags = 194U;
    msg.description.assign("GPYOCICSLMESOWGRXFIFEXMUICUPQCIXHMWCAQKMBHBJJWZLYSKHAEBBYNDVOPBGBOOODNOUDMTNWCLMANAOXUPQREFLKBDJGQVYZSVHHGWPTXUSCLUBGXZIOSVDPLRZIDTSQYCMCLELAJCFLAZGHNPEDRPWQWHTFTAVRFUKSYVPMQJKAOXJSIVDUTJHUWMQNPNRGAZZENIRQFEKJVGYRJBXKTDSTLNZYFZIEWH");

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
    msg.setTimeStamp(0.0552511898789);
    msg.setSource(41742U);
    msg.setSourceEntity(10U);
    msg.setDestination(47220U);
    msg.setDestinationEntity(119U);
    msg.state = 164U;
    msg.flags = 83U;
    msg.description.assign("OYCVWXMUHNQVPJYJSZNDYMGLQBFHBHTWGHRTOHQRVFXXUDQDRHCVPCFQGYAFBJGOFJLPZEHZDTIIOCSPUYOUVMJLKGAGNFKPJDWVWNCSXUA");

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
    msg.setTimeStamp(0.190066000738);
    msg.setSource(22035U);
    msg.setSourceEntity(102U);
    msg.setDestination(10035U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.988983300328);
    msg.setSource(44313U);
    msg.setSourceEntity(235U);
    msg.setDestination(12498U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.977608863008);
    msg.setSource(14799U);
    msg.setSourceEntity(115U);
    msg.setDestination(11524U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.837576808275);
    msg.setSource(12923U);
    msg.setSourceEntity(20U);
    msg.setDestination(53744U);
    msg.setDestinationEntity(164U);
    msg.id = 115U;
    msg.label.assign("ERXECPMJPLKDYZHDVNUFFUHBYHYVGDNPQTXTTOFQSUJDFUMMDQXIBCALTWFKXSOSLKH");
    msg.component.assign("ZOSDORQHFIUFOVTOVANLWFCMFYQKMRCQEUAOISCXPWEAHGMRFITPPJYLFPHXNRZBMPTFRVBNYVSZOXCBJLIKXKBEEKDFVGSVIOZNAWAHJSXJJZWGUMOQDBIUGDAIITIBFCCKSNDXWKSABZ");
    msg.act_time = 61251U;
    msg.deact_time = 22478U;

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
    msg.setTimeStamp(0.141818655879);
    msg.setSource(38542U);
    msg.setSourceEntity(161U);
    msg.setDestination(45704U);
    msg.setDestinationEntity(9U);
    msg.id = 198U;
    msg.label.assign("OHZULPPUAIXCHMXEVYSV");
    msg.component.assign("DKZHAQUSMLDHGZBPWMRDTHHETWSDNXEUXJRAJLSOKRXWLEZTKFFROBBZAXPUTPNFQYPMTZRJEPCHFGKIVCBSIBCNKIKQBJJNOUADDRICQAVVHLVCTKZFZUYOQPOWCXZUHOXEXAVMMNYWYVLBLHMDPONSPONFQRUCODSUKJEUCRJWVZGIBQAIKTXPWIMUSRSATQMFELYYMWIYBIYRXNHGTYGKWGJCGEJDFLQSAVSFJBETL");
    msg.act_time = 41683U;
    msg.deact_time = 44380U;

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
    msg.setTimeStamp(0.241944041048);
    msg.setSource(51488U);
    msg.setSourceEntity(151U);
    msg.setDestination(45404U);
    msg.setDestinationEntity(94U);
    msg.id = 8U;
    msg.label.assign("ARJPQSYEYHWWXWAAXAXTDXIOEZWKRFFKQMLKUHWY");
    msg.component.assign("XGHWUCJPBSECRCNATYTWPHGVBXTYUKSHHAXTRVWVXROSLJZSMIPNBKUHGQJFXFGIDIJFEXOISJLQARHVHIWLSIGXZPPKFMMKWXPEZHOCOENBQYJLYEBZQTSLFVFCPWMYGSFBDXASZKCD");
    msg.act_time = 1024U;
    msg.deact_time = 20677U;

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
    msg.setTimeStamp(0.75024240229);
    msg.setSource(13500U);
    msg.setSourceEntity(179U);
    msg.setDestination(43U);
    msg.setDestinationEntity(239U);
    msg.id = 88U;

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
    msg.setTimeStamp(0.837581845502);
    msg.setSource(46597U);
    msg.setSourceEntity(228U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(245U);
    msg.id = 228U;

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
    msg.setTimeStamp(0.206188597658);
    msg.setSource(8604U);
    msg.setSourceEntity(229U);
    msg.setDestination(54114U);
    msg.setDestinationEntity(29U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.281585825815);
    msg.setSource(36125U);
    msg.setSourceEntity(41U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(224U);
    msg.op = 73U;
    msg.list.assign("HYADAEXOPQVARVXJRLHEKJFIORSTMGMNCVNJXPDKPLQYLSPNFNXSYACVXRZBCSFQCGECYAZWMHMEFYLZKZSZKEDPQMVHFPQGMWTGRSORSHTUZXDKMHBEKSQLBIWQCVZWBREJPOUIBVKSITQNGGERWGYROIEFNDMUMNGHBHTBAUVT");

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
    msg.setTimeStamp(0.869469339543);
    msg.setSource(46163U);
    msg.setSourceEntity(115U);
    msg.setDestination(3322U);
    msg.setDestinationEntity(63U);
    msg.op = 116U;
    msg.list.assign("EFSHIMFGVPEYFUJYSZDVMWXHNBLZGCTWBFTMNQYKTYDPNIPOOZQTIUTRXKHSJZTMCDIWZANRUIQAOJDVSKBXGZLHVJCRMGJXJOWERRIPNZPAMBGLRCTBOPUCBMMHWBBDLGSFDLVSDFWQVNSNPYOKUCEQQOAWQHEYMREJJIDCOXLFDABIOZVDKKEGFEYXHUPLMTASZLQQGRSKRH");

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
    msg.setTimeStamp(0.768798961441);
    msg.setSource(37247U);
    msg.setSourceEntity(212U);
    msg.setDestination(8858U);
    msg.setDestinationEntity(25U);
    msg.op = 233U;
    msg.list.assign("ZLTGUMVJPAEOWXAZXFZSRRUHEEZBCQEDWFGDOALPRVZRGJCCIRRCKEOMJQUGIHTMSVUQTDPLWWKPCAYSFZSMGJSJTYNHPQUWVFWIJBFAOVQFNTKLHWDPTZDKRQYLKYMFQVNEIPIPNXIQOADBNZXJFYXHCNFEBRMLAJSLUUTSQKKOIXJNDXDPGHAYELQUBRMMVNNLWYCYSWHBHVOXRZXLFOTKDSGGKMTAIBZYXEOIKMOU");

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
    msg.setTimeStamp(0.30962291227);
    msg.setSource(38250U);
    msg.setSourceEntity(201U);
    msg.setDestination(23185U);
    msg.setDestinationEntity(247U);
    msg.value = 142U;

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
    msg.setTimeStamp(0.360581648467);
    msg.setSource(22717U);
    msg.setSourceEntity(105U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(164U);
    msg.value = 221U;

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
    msg.setTimeStamp(0.812024510397);
    msg.setSource(62487U);
    msg.setSourceEntity(16U);
    msg.setDestination(35734U);
    msg.setDestinationEntity(104U);
    msg.value = 166U;

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
    msg.setTimeStamp(0.24567932119);
    msg.setSource(47197U);
    msg.setSourceEntity(62U);
    msg.setDestination(4610U);
    msg.setDestinationEntity(230U);
    msg.consumer.assign("TTNEVCXATKWSDHWGKRUSS");
    msg.message_id = 29721U;

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
    msg.setTimeStamp(0.527080106276);
    msg.setSource(46934U);
    msg.setSourceEntity(46U);
    msg.setDestination(42494U);
    msg.setDestinationEntity(20U);
    msg.consumer.assign("ZZHHSZYXDFNBDCMPTANZKGHXOJRDQWSZQACQNCWRETMSDKBUYEOWAPVDIMLVABYGCENFKSSKAGLEGTJMWUYVWCHETOCL");
    msg.message_id = 33316U;

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
    msg.setTimeStamp(0.335581873241);
    msg.setSource(41010U);
    msg.setSourceEntity(21U);
    msg.setDestination(40520U);
    msg.setDestinationEntity(76U);
    msg.consumer.assign("WOFCQVJZAULRDTIDVVGMZAECALJSXHVRRVWZJKDQEJAIKNWBDSUEOAFZRLHXQANOQBRMTETBKICSKCLBXZCPJIXPAPPBZJGFHEUYNBJBIBKCGCKLNOQYKMLQTDGCGPYIUVFHRIXUUSDEODLYTFDSHPFMRDHOBZEKPUFJWWFPGMOJWBFJIAOSMRGNREYXNY");
    msg.message_id = 23223U;

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
    msg.setTimeStamp(0.208148135378);
    msg.setSource(32232U);
    msg.setSourceEntity(224U);
    msg.setDestination(34455U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.46961270987);
    msg.setSource(64248U);
    msg.setSourceEntity(117U);
    msg.setDestination(41868U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.18950518025);
    msg.setSource(43939U);
    msg.setSourceEntity(183U);
    msg.setDestination(57756U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.979753352089);
    msg.setSource(30539U);
    msg.setSourceEntity(89U);
    msg.setDestination(17517U);
    msg.setDestinationEntity(51U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.491597080581);
    msg.setSource(44762U);
    msg.setSourceEntity(16U);
    msg.setDestination(38550U);
    msg.setDestinationEntity(119U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.475089539684);
    msg.setSource(3439U);
    msg.setSourceEntity(130U);
    msg.setDestination(51763U);
    msg.setDestinationEntity(172U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.456000425825);
    msg.setSource(27827U);
    msg.setSourceEntity(76U);
    msg.setDestination(60375U);
    msg.setDestinationEntity(243U);
    msg.total_steps = 19U;
    msg.step_number = 17U;
    msg.step.assign("RMUQULUEJGCJJXOKRXGTQDBCYMYJUYBACUDAWFSAVZQTYEKCVGZDONURVWHWLTPKFCGAPNGXSYQBSOPFAVDVNKEXPBQHAAWZKINBZOPSWLPYEMMWEDGTDMLGBLVQZNHRHHQNRLHDCIRZTXDWIBDEIVOEFJMWXPMOTQUCWUQNHKVYBMNCHATNLBTAXPSXXZTYJKIRRCGSZLPPWHQLRNCJSZUSAOFORIKOIEISI");
    msg.flags = 134U;

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
    msg.setTimeStamp(0.622830267537);
    msg.setSource(51877U);
    msg.setSourceEntity(250U);
    msg.setDestination(14448U);
    msg.setDestinationEntity(1U);
    msg.total_steps = 119U;
    msg.step_number = 102U;
    msg.step.assign("ARYGTHXFSSKVBNIPRFEIOYWGLSKPRQWLINEVFUQLZKPJJCDCARVOHVOBYHVGNQXBLFFSIPGEYSNDEITXRCP");
    msg.flags = 29U;

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
    msg.setTimeStamp(0.641542168077);
    msg.setSource(53146U);
    msg.setSourceEntity(39U);
    msg.setDestination(58844U);
    msg.setDestinationEntity(121U);
    msg.total_steps = 139U;
    msg.step_number = 199U;
    msg.step.assign("JBBDEFYGHLKIKTSYIPBFNRNJGTWYOOOCKLQUTLWPXUEELDBRVXATJZQT");
    msg.flags = 149U;

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
    msg.setTimeStamp(0.936890724627);
    msg.setSource(41193U);
    msg.setSourceEntity(232U);
    msg.setDestination(13194U);
    msg.setDestinationEntity(209U);
    msg.state = 31U;
    msg.error.assign("OMRENDCPBMEUWOYGJLXPWIXOEMEDOFKBCSYUTMZP");

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
    msg.setTimeStamp(0.108762929639);
    msg.setSource(1067U);
    msg.setSourceEntity(99U);
    msg.setDestination(32051U);
    msg.setDestinationEntity(124U);
    msg.state = 33U;
    msg.error.assign("JVYJXJTEPWVYZSLOXVQALCSRCLCCYAGJNZFSQXQLRSQTQRVODXUOPYTPGWCUCMEKFIGOBGKQIHMTBPCWOITZD");

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
    msg.setTimeStamp(0.483112637586);
    msg.setSource(30861U);
    msg.setSourceEntity(215U);
    msg.setDestination(52804U);
    msg.setDestinationEntity(172U);
    msg.state = 99U;
    msg.error.assign("ATGZQPRAPASYBJHNMFNVLFDSXWCEBWBUTGNNOUFOZRMSQBVVTBHGHWGMHPVICFSPIWLQAMYASQZTUUHVLNECAJEWRWOYFXNKHEGCQRSXDDJMEMVTNNSXMLCWSCRBVEST");

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
    msg.setTimeStamp(0.0554523568491);
    msg.setSource(39826U);
    msg.setSourceEntity(232U);
    msg.setDestination(3675U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.178061645876);
    msg.setSource(11721U);
    msg.setSourceEntity(248U);
    msg.setDestination(40578U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.400680468258);
    msg.setSource(44924U);
    msg.setSourceEntity(130U);
    msg.setDestination(46242U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.944933070566);
    msg.setSource(15157U);
    msg.setSourceEntity(228U);
    msg.setDestination(9912U);
    msg.setDestinationEntity(7U);
    msg.op = 204U;
    msg.speed_min = 0.839345377147;
    msg.speed_max = 0.128360512886;
    msg.long_accel = 0.851512934819;
    msg.alt_max_msl = 0.378699438561;
    msg.dive_fraction_max = 0.302360793297;
    msg.climb_fraction_max = 0.443199707757;
    msg.bank_max = 0.607868955523;
    msg.p_max = 0.126977674586;
    msg.pitch_min = 0.97189058697;
    msg.pitch_max = 0.442293568243;
    msg.q_max = 0.784046858766;
    msg.g_min = 0.834458005194;
    msg.g_max = 0.763032432682;
    msg.g_lat_max = 0.444490854278;
    msg.rpm_min = 0.23980823268;
    msg.rpm_max = 0.130249531966;
    msg.rpm_rate_max = 0.437515184311;

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
    msg.setTimeStamp(0.232411182971);
    msg.setSource(17448U);
    msg.setSourceEntity(212U);
    msg.setDestination(2160U);
    msg.setDestinationEntity(41U);
    msg.op = 73U;
    msg.speed_min = 0.157796306841;
    msg.speed_max = 0.549602847636;
    msg.long_accel = 0.913120500533;
    msg.alt_max_msl = 0.795766160717;
    msg.dive_fraction_max = 0.33299880308;
    msg.climb_fraction_max = 0.146684839005;
    msg.bank_max = 0.458595366213;
    msg.p_max = 0.310877553852;
    msg.pitch_min = 0.218530241024;
    msg.pitch_max = 0.359250386983;
    msg.q_max = 0.059634284721;
    msg.g_min = 0.940743427034;
    msg.g_max = 0.319386201461;
    msg.g_lat_max = 0.701953727242;
    msg.rpm_min = 0.804597915114;
    msg.rpm_max = 0.0280387312042;
    msg.rpm_rate_max = 0.270731331477;

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
    msg.setTimeStamp(0.104763314694);
    msg.setSource(10763U);
    msg.setSourceEntity(13U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(129U);
    msg.op = 253U;
    msg.speed_min = 0.817296541709;
    msg.speed_max = 0.396298737429;
    msg.long_accel = 0.238350341411;
    msg.alt_max_msl = 0.990983268492;
    msg.dive_fraction_max = 0.494917691522;
    msg.climb_fraction_max = 0.360578418909;
    msg.bank_max = 0.778747258732;
    msg.p_max = 0.684699744114;
    msg.pitch_min = 0.135935758956;
    msg.pitch_max = 0.771767346823;
    msg.q_max = 0.0591921626168;
    msg.g_min = 0.383327902644;
    msg.g_max = 0.838010188917;
    msg.g_lat_max = 0.825167461365;
    msg.rpm_min = 0.240951718934;
    msg.rpm_max = 0.811645927902;
    msg.rpm_rate_max = 0.199142172652;

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
    msg.setTimeStamp(0.351047804666);
    msg.setSource(18107U);
    msg.setSourceEntity(69U);
    msg.setDestination(48950U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.242613717986);
    msg.setSource(64363U);
    msg.setSourceEntity(234U);
    msg.setDestination(28582U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.476009949693);
    msg.setSource(18879U);
    msg.setSourceEntity(224U);
    msg.setDestination(690U);
    msg.setDestinationEntity(10U);
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.318131288111;
    tmp_msg_0.time_next_service = 0.880654406646;
    tmp_msg_0.time_motor_next_service = 0.108119889742;
    tmp_msg_0.time_idle_ground = 0.719989024374;
    tmp_msg_0.time_idle_air = 0.407483720833;
    tmp_msg_0.time_idle_water = 0.369980464301;
    tmp_msg_0.time_idle_underwater = 0.552144850622;
    tmp_msg_0.time_idle_unknown = 0.20703798264;
    tmp_msg_0.time_motor_ground = 0.370526412522;
    tmp_msg_0.time_motor_air = 0.16475743075;
    tmp_msg_0.time_motor_water = 0.00421357283924;
    tmp_msg_0.time_motor_underwater = 0.435694071231;
    tmp_msg_0.time_motor_unknown = 0.655055956401;
    tmp_msg_0.rpm_min = -23198;
    tmp_msg_0.rpm_max = -12244;
    tmp_msg_0.depth_max = 0.343105614377;
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
    msg.setTimeStamp(0.294130751299);
    msg.setSource(48063U);
    msg.setSourceEntity(28U);
    msg.setDestination(11810U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.0330572033182;
    msg.lon = 0.370898051716;
    msg.height = 0.565258935891;
    msg.x = 0.526691196348;
    msg.y = 0.240989503141;
    msg.z = 0.149964773534;
    msg.phi = 0.522022536083;
    msg.theta = 0.632456640065;
    msg.psi = 0.244011588405;
    msg.u = 0.390123888051;
    msg.v = 0.237846332581;
    msg.w = 0.438801649648;
    msg.p = 0.113106851908;
    msg.q = 0.604146439961;
    msg.r = 0.950042395375;
    msg.svx = 0.722282487953;
    msg.svy = 0.445764155377;
    msg.svz = 0.938586689181;

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
    msg.setTimeStamp(0.981836560717);
    msg.setSource(21375U);
    msg.setSourceEntity(137U);
    msg.setDestination(59115U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.955213931558;
    msg.lon = 0.666416823422;
    msg.height = 0.215857516061;
    msg.x = 0.800481016627;
    msg.y = 0.824818717243;
    msg.z = 0.789712098059;
    msg.phi = 0.119931187951;
    msg.theta = 0.664796317711;
    msg.psi = 0.325369805451;
    msg.u = 0.921323720769;
    msg.v = 0.151952446128;
    msg.w = 0.143678436556;
    msg.p = 0.410637241781;
    msg.q = 0.192703627221;
    msg.r = 0.149329813464;
    msg.svx = 0.236459521558;
    msg.svy = 0.836905803875;
    msg.svz = 0.0287269381917;

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
    msg.setTimeStamp(0.117401655031);
    msg.setSource(33838U);
    msg.setSourceEntity(20U);
    msg.setDestination(44331U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.614244460787;
    msg.lon = 0.0916288695352;
    msg.height = 0.923040272031;
    msg.x = 0.457851907729;
    msg.y = 0.340999203613;
    msg.z = 0.572765667124;
    msg.phi = 0.154199649637;
    msg.theta = 0.675296347863;
    msg.psi = 0.235409407953;
    msg.u = 0.59620462173;
    msg.v = 0.960302767321;
    msg.w = 0.425724101259;
    msg.p = 0.969220572414;
    msg.q = 0.966772116611;
    msg.r = 0.168099714953;
    msg.svx = 0.953457577139;
    msg.svy = 0.0677961991549;
    msg.svz = 0.105598955866;

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
    msg.setTimeStamp(0.286181661723);
    msg.setSource(3356U);
    msg.setSourceEntity(98U);
    msg.setDestination(51937U);
    msg.setDestinationEntity(150U);
    msg.op = 237U;
    msg.entities.assign("QMRZCWEOIEYVDTFAHWXUYFMIVEORXKUYCHDJRLQDQBEPJHPHZMTLPBAOELBWTJKXOZHFLYPXKJINXOGDAGNLGVMOQJACUVFCMVBDYRFXWX");

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
    msg.setTimeStamp(0.914217799292);
    msg.setSource(64443U);
    msg.setSourceEntity(136U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(158U);
    msg.op = 171U;
    msg.entities.assign("HELEWSFOASTNXLULOVPWZLXMPQMDGGXEWKHIQJPBMRDFNUYVJODANNRNZPLNLYFJSVHEUTHYYMTNYEYKPNQSPMGWQMYKVXCWCSKEWAZWBHUQGEFBZIQISXFOCKRFBYVRUVVXURZRZFTGJRBCORZKZOPHSWTDCBWBJZL");

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
    msg.setTimeStamp(0.328909148193);
    msg.setSource(859U);
    msg.setSourceEntity(78U);
    msg.setDestination(1016U);
    msg.setDestinationEntity(54U);
    msg.op = 104U;
    msg.entities.assign("FIUEBOYQMYYCAABIMDADVKBPURKWNBJGDWCVGBRESEXMNPHVISUAYALSSQLVXSZBTNFRVEDJYPX");

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
    msg.setTimeStamp(0.32361376264);
    msg.setSource(12263U);
    msg.setSourceEntity(233U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(223U);
    msg.type = 98U;
    msg.speed = 64301U;
    const char tmp_msg_0[] = {-53, -5, 16, 106, 47, 19, -90, 72, -104, 123, 108, 28, -39, 84, -44, -105, 73, -52, 57, 10, -3, -51, 81, 94, -8, 53, 47, 82, 58, 104, -47, 58, 71, -34, -85, -12, -53, -72, -126, 65, 55, 91, -96, -63, 41, 102, -97, -49, -29, 59, -20, 46, 93, -92, -101, -8, -76, -32, 73, 17, -102, -19, 87, -95, 77, -14, 122, -67, 17, -87, -76, -86, -9, -112, 12, -28, -34, 29, 41, -96, -73, -3, -63, -67, -113, 98, 42, 49, 45, -10, 11, 123, 84, -47, -18, 4, 41, 9, 51, 9, -123, -9, 24, -5, 44, 58, 100, 51, -85, 70, 19, -84, -61, -20, -88, -95, 119, 0, -29, -89, 58, 35, -106, 19, 67, -83, -44, 91, -44, -66, 116, -60, 101, -92, 41, -89, -109, 4, -85, 86, -110, -58, -37, -65, -41, 13, -94, 83, -32, -31, -68, 90, -93, -32, -89, 100, -98, -115, 122, 11, -22, 51, 29, 109, -118, -96, 46, 25, 22, 125, -65, 105, 57, -10, -91, -91, 4, 116, 4, -124, 51, -24, 102, -126, 80, 89};
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
    msg.setTimeStamp(0.622763999605);
    msg.setSource(51196U);
    msg.setSourceEntity(103U);
    msg.setDestination(28833U);
    msg.setDestinationEntity(248U);
    msg.type = 152U;
    msg.speed = 27241U;
    const char tmp_msg_0[] = {-127, 27, -42, 111, 75, 44, -58, 44, 43, -108, 57, 33, -56, 66, -115, -109, -112, 121, -110, 14, -69, -66, -21, -93, 93, 110, -18, -96, -122, 95, 120, 1, -92, 70, -28, 65, -63, -90, -64, -49, -54, -37, -90, 80, -124, 54, 72, 16, 12, 118, -73, 26, -89, 71, -25, 118, -93, 89, -24, 56, 67, -15, 11, 50, -70, -2, 96, 28, -43, -68, 1, 33, -3, -25, 100, -87, -66, 7, -86, -6, -43, 119, -7, 95, 65, -63, 94, 65, -113, 71, -108, 10, 21, -126, 29, 2};
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
    msg.setTimeStamp(0.680192098944);
    msg.setSource(5358U);
    msg.setSourceEntity(3U);
    msg.setDestination(45413U);
    msg.setDestinationEntity(88U);
    msg.type = 183U;
    msg.speed = 31161U;
    const char tmp_msg_0[] = {-55, -68, -14, 103, 12, 54, -97, 26, -68, 93, -82, 115, -55, -113, -51, -65, -15, -100, -88, 66, 90, 19, -80, 52, -2, -18, 43, 101, -33, -9, 18, -19, -38, -43, -26, -91, -10, 91, 37, 71, 98, 36, 29, -127, 15, 37, -36, -75, -113, -74, 14, 125, 2, 2, -101, 67, -46, -93, -76, 35, 65, 51, 1, -40, -89, -79, -52, -122, 65, -42, -49, 58, -86, -76, -57, 27, 15, -37, 88, -113, -103, -99, -90, 18, 36, 93, 22, 126, -79, -55, -67, -5, -128, -15, -102, -29, 1, -62, -57, 76, -26, -107, -88, 85, -34, 57, -46, -7, 91, -52, -58, 34, -43, 25, 27, 100, -47, 44, -32, 18, -30, -29, 98, -4, -113, 62, -88, 15, -107, -92, -127, 23, 110, -80, 84, 81, -118, 114, -80, -91, 113, -93, -91, 7, 89, -21, 70, 47, -59, -56};
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
    msg.setTimeStamp(0.95195196926);
    msg.setSource(3130U);
    msg.setSourceEntity(106U);
    msg.setDestination(30630U);
    msg.setDestinationEntity(189U);
    msg.op = 59U;
    msg.tas2acc_pgain = 0.662557363361;
    msg.bank2p_pgain = 0.688926875411;

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
    msg.setTimeStamp(0.606483855572);
    msg.setSource(33079U);
    msg.setSourceEntity(16U);
    msg.setDestination(8840U);
    msg.setDestinationEntity(48U);
    msg.op = 68U;
    msg.tas2acc_pgain = 0.412307461787;
    msg.bank2p_pgain = 0.229520295068;

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
    msg.setTimeStamp(0.51608415837);
    msg.setSource(6100U);
    msg.setSourceEntity(104U);
    msg.setDestination(18377U);
    msg.setDestinationEntity(247U);
    msg.op = 224U;
    msg.tas2acc_pgain = 0.807551851703;
    msg.bank2p_pgain = 0.32359456704;

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
    msg.setTimeStamp(0.775302862517);
    msg.setSource(27334U);
    msg.setSourceEntity(225U);
    msg.setDestination(59067U);
    msg.setDestinationEntity(23U);
    msg.available = 1595775194U;
    msg.value = 202U;

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
    msg.setTimeStamp(0.919157862377);
    msg.setSource(24121U);
    msg.setSourceEntity(11U);
    msg.setDestination(48708U);
    msg.setDestinationEntity(221U);
    msg.available = 1656554602U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.694218303574);
    msg.setSource(24530U);
    msg.setSourceEntity(238U);
    msg.setDestination(4416U);
    msg.setDestinationEntity(195U);
    msg.available = 1602544121U;
    msg.value = 6U;

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
    msg.setTimeStamp(0.234911184295);
    msg.setSource(63104U);
    msg.setSourceEntity(200U);
    msg.setDestination(27209U);
    msg.setDestinationEntity(61U);
    msg.op = 85U;
    msg.snapshot.assign("TCGQWABHPIHPSW");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0602977035892;
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
    msg.setTimeStamp(0.527282365102);
    msg.setSource(62769U);
    msg.setSourceEntity(220U);
    msg.setDestination(52758U);
    msg.setDestinationEntity(239U);
    msg.op = 175U;
    msg.snapshot.assign("KQABICCYHMYALNZFAYAHENOTKMZLLWTQIQBKRAPHYBJXUUQFNLGSJTCMELEEQRFCTUSMXQXUSVXLUFGVTGTCXAXBSKDNRCHPDEUSOSCSLOSNYYPJVQXWQHKPOVWVVJRZZYZCJJCHTILKWMAXED");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.197537793812;
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
    msg.setTimeStamp(0.30304347942);
    msg.setSource(42458U);
    msg.setSourceEntity(104U);
    msg.setDestination(65313U);
    msg.setDestinationEntity(200U);
    msg.op = 251U;
    msg.snapshot.assign("PIQYLWJVFBTNXEEJWXDMFMASWBCGJPOQUIDSSYJQQNRRPQTSKJFHMCYBGJRCEXKOHDVFZGFSIYVDFWXWXQGQZBOUERNZSHBMWMHAFQPRCLFZKOYGLUBXTRVEPMCZQAURRTYRTPVVNNLIGBSZPVTBFFDNTWMKAWBKYZLJYJV");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.54886417992;
    tmp_msg_0.beam_height = 0.28776763155;
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
    msg.setTimeStamp(0.661142468187);
    msg.setSource(8330U);
    msg.setSourceEntity(215U);
    msg.setDestination(19294U);
    msg.setDestinationEntity(223U);
    msg.op = 232U;
    msg.name.assign("YBGJCEFISKKHSNZWRLWVBCCVRXPNHOITQZOGGVCHKIOAIUVHCQDVBXNZBBDVRACKTNISVZQHGLRSRLWKFVCYTAXCNQMJWPEMZQJSWJEOLNNCEFUHATKTXRNDMYZFQTMP");

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
    msg.setTimeStamp(0.0651970746878);
    msg.setSource(37711U);
    msg.setSourceEntity(70U);
    msg.setDestination(62186U);
    msg.setDestinationEntity(232U);
    msg.op = 81U;
    msg.name.assign("TQBWHLZUTIQCWGTISXZNSOLQLUGYRLFDOFLCTGBMBDKHFTARJLMJJKSYOIMGVGXPXYKEJDZPDHLEBEPOEECXIAULWPUYTSTVICGYRCKYOOBTJCLTNDZBWOJEOFVEXGIWRWCKHBAKAMVEHDQSXRNVAURSNVZXBUNAJSDALQWQSKNKIGHWGNXHDHWIBYCESNCMFFDVPVUOZJQAMQFRRFCGR");

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
    msg.setTimeStamp(0.185169127429);
    msg.setSource(13245U);
    msg.setSourceEntity(113U);
    msg.setDestination(4789U);
    msg.setDestinationEntity(245U);
    msg.op = 0U;
    msg.name.assign("BNKEGKXSVQJQMPY");

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
    msg.setTimeStamp(0.219330472526);
    msg.setSource(1089U);
    msg.setSourceEntity(104U);
    msg.setDestination(36770U);
    msg.setDestinationEntity(185U);
    msg.type = 55U;
    msg.htime = 0.275764060859;
    msg.context.assign("LHYYUBJTOGZGXDSUAMWQCNFRYMSMNQKTMKGXRXYCUUSQNEXPBAFTYRVFOHHHOFSPDMKOXWJDZDGIQFEAHBKERBWSJZDQOWHNSOVLILKIYRUHLHJWFQBCL");
    msg.text.assign("QDOZRIMIHOSHCZGMPWVYZZCLDPEPPUXGQFMMWRDWXEKFKKTHAQNJIF");

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
    msg.setTimeStamp(0.722138425926);
    msg.setSource(3498U);
    msg.setSourceEntity(87U);
    msg.setDestination(51332U);
    msg.setDestinationEntity(201U);
    msg.type = 230U;
    msg.htime = 0.673395530661;
    msg.context.assign("ILKJWXLGSDBSQCOUVTXTYQGBNNYCTKTDHSRYPOKPPKIMJBICJHRNFBMLLVZXYNKUEFVMQSECPWQDNEFMONFGJUSFNELZRFIWZARWSYJHXFMAWRIJH");
    msg.text.assign("ULQXGYXRDZXWDZEVUCHVMMOSPKWCFGQPQEFGTODAGXAVNLXPXSZGYZAYNURURCRHEYKQOTOESMUXYPZIPECGBLFVBR");

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
    msg.setTimeStamp(0.808657888466);
    msg.setSource(64554U);
    msg.setSourceEntity(251U);
    msg.setDestination(6658U);
    msg.setDestinationEntity(136U);
    msg.type = 9U;
    msg.htime = 0.264941015632;
    msg.context.assign("KAJCSQJFKQJMSLIYHHVTLYKDQPEBVMIXBDZFRJDFWPUWXCYILDRXPGUAIPQJZXVXZUVAVGKOZFUZOPJLXVXZFLJDMRCMINRHOFKTWY");
    msg.text.assign("APDRPICYKVTWCLXTBUFDFVAROGFYORVHTMQSJCNXUUBKUGETXPSISDQGBADGIJWGFRSXKZUBAFHSVCWEEBFMWOENMHPKHDMCIZOMRPPWJCLXINMESFRBLLWKLNVTRZPZXOUABK");

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
    msg.setTimeStamp(0.225845880892);
    msg.setSource(46350U);
    msg.setSourceEntity(247U);
    msg.setDestination(31245U);
    msg.setDestinationEntity(247U);
    msg.command = 92U;
    msg.htime = 0.355969212774;

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
    msg.setTimeStamp(0.734513822476);
    msg.setSource(22788U);
    msg.setSourceEntity(66U);
    msg.setDestination(10932U);
    msg.setDestinationEntity(149U);
    msg.command = 240U;
    msg.htime = 0.460757510582;

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
    msg.setTimeStamp(0.897269577983);
    msg.setSource(21589U);
    msg.setSourceEntity(187U);
    msg.setDestination(21346U);
    msg.setDestinationEntity(83U);
    msg.command = 51U;
    msg.htime = 0.431107408941;

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
    msg.setTimeStamp(0.063745285649);
    msg.setSource(42493U);
    msg.setSourceEntity(233U);
    msg.setDestination(20974U);
    msg.setDestinationEntity(99U);
    msg.op = 150U;
    msg.file.assign("IQXKCNIAEXHKMJTWNYNJVLQSBECTGJCKDXHEQWMYDFUZQIWTEHOFEMDVLTYPBJZHRLQYTFAPHIYAPGDFJRENSGZBBKSDRQLSJXLYSQBR");

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
    msg.setTimeStamp(0.508612478068);
    msg.setSource(9225U);
    msg.setSourceEntity(215U);
    msg.setDestination(21279U);
    msg.setDestinationEntity(96U);
    msg.op = 227U;
    msg.file.assign("XSRUVJPWAYKLWNVPDRJBIVRBAXYUPEAJHQATFBBAGAISIDCIOGLKQBUVPGZKWQZTUQQRWMNNDDFPJECNEICVCQVAVFYWGYTAMETYHZQPKBLJWVTHFDIYEDOSYFOJVXRCLASZFNWSBOTNXDTBKZFOLKWMZELHWPUNJBHERFGLFSLNUIIQGGVRSOCZTSLBETJRDSPMRWOHNS");

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
    msg.setTimeStamp(0.601611099925);
    msg.setSource(18617U);
    msg.setSourceEntity(102U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(166U);
    msg.op = 188U;
    msg.file.assign("AEFKQIUPJFAWDKTLOOCMNHPGADXOXASFZDKRMJVCAKWMVXZNLURDJEWLFXHTVVDFOYNKYHKULRZBMCXSWSBQYCJPRLNQVPAUICROGMBGPJYPAXSYYHSLHTXSEVYLRLLNCWRQXVSHIZQAJROJOPWEMMPOTBVUCVTUGKHQUFCBIIWNBHOWTGCJMKAZKCQTZGNBTDPIDGIYUNJWENMERDJZBTSRY");

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
    msg.setTimeStamp(0.430335911035);
    msg.setSource(62823U);
    msg.setSourceEntity(59U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(2U);
    msg.op = 199U;
    msg.clock = 0.987753427236;
    msg.tz = -123;

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
    msg.setTimeStamp(0.971923138938);
    msg.setSource(61849U);
    msg.setSourceEntity(115U);
    msg.setDestination(46177U);
    msg.setDestinationEntity(91U);
    msg.op = 162U;
    msg.clock = 0.242763593944;
    msg.tz = 55;

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
    msg.setTimeStamp(0.14860737825);
    msg.setSource(50318U);
    msg.setSourceEntity(58U);
    msg.setDestination(24819U);
    msg.setDestinationEntity(243U);
    msg.op = 69U;
    msg.clock = 0.286334932565;
    msg.tz = -56;

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
    msg.setTimeStamp(0.404983297996);
    msg.setSource(54423U);
    msg.setSourceEntity(229U);
    msg.setDestination(35953U);
    msg.setDestinationEntity(150U);
    msg.conductivity = 0.0420349968763;
    msg.temperature = 0.729626732699;
    msg.depth = 0.225538704804;

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
    msg.setTimeStamp(0.196654414586);
    msg.setSource(8567U);
    msg.setSourceEntity(117U);
    msg.setDestination(5084U);
    msg.setDestinationEntity(110U);
    msg.conductivity = 0.220929417631;
    msg.temperature = 0.507618892342;
    msg.depth = 0.996086022587;

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
    msg.setTimeStamp(0.344859580158);
    msg.setSource(10679U);
    msg.setSourceEntity(46U);
    msg.setDestination(49532U);
    msg.setDestinationEntity(234U);
    msg.conductivity = 0.958170866158;
    msg.temperature = 0.319962450438;
    msg.depth = 0.567068203102;

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
    msg.setTimeStamp(0.214786066555);
    msg.setSource(4579U);
    msg.setSourceEntity(105U);
    msg.setDestination(6170U);
    msg.setDestinationEntity(233U);
    msg.altitude = 0.0875932817608;
    msg.roll = 42598U;
    msg.pitch = 57953U;
    msg.yaw = 24912U;
    msg.speed = 24693;

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
    msg.setTimeStamp(0.453358056639);
    msg.setSource(12751U);
    msg.setSourceEntity(47U);
    msg.setDestination(5974U);
    msg.setDestinationEntity(53U);
    msg.altitude = 0.924176121322;
    msg.roll = 44628U;
    msg.pitch = 56768U;
    msg.yaw = 43323U;
    msg.speed = 23184;

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
    msg.setTimeStamp(0.133523337);
    msg.setSource(51597U);
    msg.setSourceEntity(55U);
    msg.setDestination(24051U);
    msg.setDestinationEntity(62U);
    msg.altitude = 0.97266573519;
    msg.roll = 4525U;
    msg.pitch = 41608U;
    msg.yaw = 51558U;
    msg.speed = 4187;

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
    msg.setTimeStamp(0.558085124266);
    msg.setSource(26033U);
    msg.setSourceEntity(169U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(71U);
    msg.altitude = 0.472826116122;
    msg.width = 0.168133241293;
    msg.length = 0.566615137147;
    msg.bearing = 0.343278520645;
    msg.pxl = -30855;
    msg.encoding = 150U;
    const char tmp_msg_0[] = {-49, 118, 9, -53, -29, 99, -105, -3, -40, -64, 53, 8, 82, -108, 40, 10, 92, 103, -19, 61, -16, -45, 46, 61};
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
    msg.setTimeStamp(0.828905609385);
    msg.setSource(24172U);
    msg.setSourceEntity(41U);
    msg.setDestination(63421U);
    msg.setDestinationEntity(1U);
    msg.altitude = 0.0513669190829;
    msg.width = 0.465042213643;
    msg.length = 0.751356448933;
    msg.bearing = 0.422764359011;
    msg.pxl = -1529;
    msg.encoding = 68U;
    const char tmp_msg_0[] = {-19, 120, -95, 73, 113, 97, 47, -108, -102, -30, -47, 48, -96, 115, -38, 85, 79, -13, 109, -24, 105, 51, 68, 61, -127, 94, -80, 42, 68, 112, -98, -119, -121, -96, 58, -122, 123, 104, 80, 73, -96, 22, 85, -108, 72, -59, -21, 30, -29, -102, -84, -127, -104, 12, 93, 50, -122, 41, 74, -12, 51, -42, 50, -123, -15, 113, 115, 90, -15, 68, 0, 2, -88, 0, 44, -69, -62, 120, 81, -101, -85, 77, -49, 82, 71, 86, -127, -52, -62, -126, 28, 30, -83, -23, 36, 111, 26, 79, -68, 49, 36, 117, 7, 122, 118, -96, 2, -82, 29, 12, -46, 90, -34, 84, 45, 69, 47, 30, 102, 124};
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
    msg.setTimeStamp(0.496395433932);
    msg.setSource(63657U);
    msg.setSourceEntity(249U);
    msg.setDestination(48708U);
    msg.setDestinationEntity(188U);
    msg.altitude = 0.383893870799;
    msg.width = 0.820150701269;
    msg.length = 0.592318947382;
    msg.bearing = 0.729476820022;
    msg.pxl = 14583;
    msg.encoding = 206U;
    const char tmp_msg_0[] = {-30, 123, -30, -29, -24, 9, -66, 17, 1, -69, -121, 46, 69, -102, 101, -28, 26, -59, -61, 57, -121, -65, 82, 47, 69, -4, 49, -89, -92, -37, 66, 108, -117, 76, 29, -61, 64, 121, -20, 23, 50, 96, -68, 6, -109, -127, 14, -27, -3, -41, 46, 105, -93, 4, 65, -87, -14, -66, -14, 113, 63, -43, 77, -6, -70, 88, 9, 38, -19, 0, 98, -84, 92, -117, 4, -84, 77, 6, -91, 86, 104, 110, 17, 6, -42, -39, -32, 124, -56, 24, 8, -74, -99, 122, 27, -78, -31, -93, 87, -110, -96, 35, 37, -126, 106, 79, -102, 26, 22, 56, 68, -88, 89, -60, -26, -105, -111, 114, -112, 13, -95, 59, 42, 2, 52, -56, 94, -21, 47, -72, 104, 61, 64, -53, 55, 66, 64, -57, -84, -74, -20, -117, 32, 68, 91, -83, 70, 95, 45, -51, 76, 9, 70, 13, -87, -70, 37, -111, -69, 102, 54, -56, -116, -30, 62, -124, 83, -80, -108, 23, -38, -69, 54, 8, 97, 89, -70, -31, -69, -30, 109, -24, -118, -90, -37, -48, -79, 21, 30, 112, -56, -55, -120, -17, 98, -5, 88, -69, 76, 39, -113, -77, -23, -53, 95, -101, 3, -25, 45, 0, -50, 123, -56, -76, -39, 82, -24, -92, -82, -128, -13, 71, 73, -117, 106, 45, 36, 22, 16, 30, -49, -76, 79, -23, -28, -99, -106, 12};
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
    msg.setTimeStamp(0.676977048826);
    msg.setSource(32711U);
    msg.setSourceEntity(152U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(41U);
    msg.text.assign("PFFCJCPENTKFPJIKAIWODTVAZQFUYHOWPSNQXSQWGAJEZMYOUYGGXUWBKLFZMHNSFTHUKDYLTGERPIOCUYCWAROFTXBSODQTLCNEQVQVGDRBTSZASCJXLXFHDKEOCKISWREIXASWIODGXNIMXHJHDAMEWZIJKVLMWLNAKZPJLYEVTQRLOVMEPVVXMJD");
    msg.type = 161U;

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
    msg.setTimeStamp(0.219092716331);
    msg.setSource(20080U);
    msg.setSourceEntity(18U);
    msg.setDestination(52349U);
    msg.setDestinationEntity(140U);
    msg.text.assign("COALVUFNHIMAZPMIWNJPKYCLRQLSMDSMOQGRKZJFNBNRCZSYR");
    msg.type = 235U;

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
    msg.setTimeStamp(0.439724010563);
    msg.setSource(23061U);
    msg.setSourceEntity(140U);
    msg.setDestination(1843U);
    msg.setDestinationEntity(138U);
    msg.text.assign("FLJNNWBHPMYTDKLWSIHBWWIWHGZEOYZIKNQUJQLIDBISGZAOIRTXQENVZYGWZDUPWZMFRPOCG");
    msg.type = 232U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.701713534793);
    msg.setSource(27861U);
    msg.setSourceEntity(158U);
    msg.setDestination(60740U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.513807346173);
    msg.setSource(47442U);
    msg.setSourceEntity(125U);
    msg.setDestination(37646U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.36274666839);
    msg.setSource(30237U);
    msg.setSourceEntity(168U);
    msg.setDestination(25478U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.613794811979);
    msg.setSource(56977U);
    msg.setSourceEntity(58U);
    msg.setDestination(56036U);
    msg.setDestinationEntity(122U);
    msg.sys_name.assign("UMKUJTAXMEEQIKBBSTJPSXFGHIVHFQLNUOZEMJODBYHNTJBJJUGYHBGEFDAYXOGJEAQQPDBUSQPMTOFIBXSWLZLZEZBQFNANURJXCDCGVPORJPSXIOTVWLOCPDAKTVZNDIGZRHEDQGGIIBSARXKGYCFURKMCIPNODRBMS");
    msg.sys_type = 60U;
    msg.owner = 44194U;
    msg.lat = 0.89776856422;
    msg.lon = 0.502760249763;
    msg.height = 0.916344422263;
    msg.services.assign("VYQNAHBUMCSOEUSRGGPQSFUUYKZBIXIHMYJZSUQJTWJSGFDMEXDJVWPQBFLUIMDXEGAVPAXIWZQOLUTLIZZLQVJNXHKUODNMPZRUEGKDNOSLVAAYZRVR");

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
    msg.setTimeStamp(0.347743317765);
    msg.setSource(46152U);
    msg.setSourceEntity(215U);
    msg.setDestination(18204U);
    msg.setDestinationEntity(241U);
    msg.sys_name.assign("CLJSTLQUMSBKJCTIHQIRJPCQMNXEGDYFBFISWYXPCAZZQJWYFBFBUXMBBLCSBPMGNFGGCAUMRSPUXLHWGXRWSIAVLKKRWUIIPSNPOZQZRVCEDEVXKVUVREXQFLNHIJDQJVYCBUWXZTJPAKHPWEWOTNRDAFOZDFIML");
    msg.sys_type = 229U;
    msg.owner = 8152U;
    msg.lat = 0.436649968376;
    msg.lon = 0.571732763533;
    msg.height = 0.41187123786;
    msg.services.assign("EPWZKKTJHBFRITATADJUXZBHUHB");

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
    msg.setTimeStamp(0.93051192929);
    msg.setSource(15371U);
    msg.setSourceEntity(117U);
    msg.setDestination(46806U);
    msg.setDestinationEntity(215U);
    msg.sys_name.assign("DHNZXQSJTDMZZOQTWISDYAFUPKIBRDNCHOVMPGZQCIWXRGTJLJWKDVJLJHVFBFLIZPVPIYETQYRQMYHXKDDXRJGNBFDMCLHAKEZBMILXHYOUUEWABZTWECTNAHNDQLFVSJFVVRUWMBKQEXPUQHFPOJCACKRNZFXCTVYJEURZGAROAKOQTYUYNSEKOXYNGSREFNLGKAHIBUGOWT");
    msg.sys_type = 139U;
    msg.owner = 56982U;
    msg.lat = 0.143267502257;
    msg.lon = 0.0336980340762;
    msg.height = 0.214751278584;
    msg.services.assign("YLXBVLUZSBWEBIRASBXPLWYSUOESHFQUKUUGXQRYXBXHNAYDSSBRUWCPVOANLXQTKTGPA");

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
    msg.setTimeStamp(0.707721393993);
    msg.setSource(48724U);
    msg.setSourceEntity(234U);
    msg.setDestination(24072U);
    msg.setDestinationEntity(217U);
    msg.service.assign("NSOWZCPEWWRJFFUTTISJRBJQEYPRGSHFSVACDCSXYVZHOFLDIBCJUPOAVEBTFZZMDPNLESIMOTELCPDMGYHOXABWHYVLCYQDVBGQZVISSITODFKRUJOPMGKOMILWQJVLIATKWPGKWYNFAURDRMOJJXATGNMTABXPKLXEXBYCXMWTOXKKE");
    msg.service_type = 19U;

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
    msg.setTimeStamp(0.24493993292);
    msg.setSource(20381U);
    msg.setSourceEntity(118U);
    msg.setDestination(23110U);
    msg.setDestinationEntity(55U);
    msg.service.assign("WLVDSEGTSTSEU");
    msg.service_type = 152U;

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
    msg.setTimeStamp(0.983928000674);
    msg.setSource(29319U);
    msg.setSourceEntity(36U);
    msg.setDestination(53992U);
    msg.setDestinationEntity(87U);
    msg.service.assign("NKSLZMIFGGRJJHXUCFQMXYAWAWDUHHUSODQSOVYMZPTDJRILLIIPJUOOTDQPWTHWC");
    msg.service_type = 173U;

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
    msg.setTimeStamp(0.3175480702);
    msg.setSource(50240U);
    msg.setSourceEntity(242U);
    msg.setDestination(38549U);
    msg.setDestinationEntity(148U);
    msg.value = 0.967017661644;

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
    msg.setTimeStamp(0.695153844687);
    msg.setSource(8620U);
    msg.setSourceEntity(220U);
    msg.setDestination(2800U);
    msg.setDestinationEntity(231U);
    msg.value = 0.211565511999;

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
    msg.setTimeStamp(0.759690933716);
    msg.setSource(21265U);
    msg.setSourceEntity(221U);
    msg.setDestination(40285U);
    msg.setDestinationEntity(75U);
    msg.value = 0.404865082927;

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
    msg.setTimeStamp(0.594687560002);
    msg.setSource(38194U);
    msg.setSourceEntity(84U);
    msg.setDestination(55503U);
    msg.setDestinationEntity(252U);
    msg.value = 0.627419138117;

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
    msg.setTimeStamp(0.71830547514);
    msg.setSource(60906U);
    msg.setSourceEntity(243U);
    msg.setDestination(19804U);
    msg.setDestinationEntity(213U);
    msg.value = 0.0368556191523;

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
    msg.setTimeStamp(0.795758546683);
    msg.setSource(58219U);
    msg.setSourceEntity(176U);
    msg.setDestination(4880U);
    msg.setDestinationEntity(244U);
    msg.value = 0.627487097209;

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
    msg.setTimeStamp(0.425429274229);
    msg.setSource(43423U);
    msg.setSourceEntity(145U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(135U);
    msg.value = 0.31085747917;

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
    msg.setTimeStamp(0.592169124996);
    msg.setSource(5597U);
    msg.setSourceEntity(55U);
    msg.setDestination(3749U);
    msg.setDestinationEntity(125U);
    msg.value = 0.251001030228;

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
    msg.setTimeStamp(0.498089722154);
    msg.setSource(12911U);
    msg.setSourceEntity(107U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(136U);
    msg.value = 0.882549022312;

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
    msg.setTimeStamp(0.455828563223);
    msg.setSource(36873U);
    msg.setSourceEntity(149U);
    msg.setDestination(40011U);
    msg.setDestinationEntity(218U);
    msg.number.assign("RFSKLDQJRYTUCZXIGCVCWLPMSZOYOWAYFTVPVICPAAPISZEGDPJQUPZXMDNRSGDJFYYTGFRKNWHNHKZCMUSJOBBRVMENTWOLKTARJTVHWXPZDQZRIGNHIOTFPGIODNBVOYEFJDWLFUOGEVYMUAOQIXXQUBCLMTIHFKAWKMKDHSBMERZYWNJXDSTMXVQQYVAUBFGCDUL");
    msg.timeout = 39469U;
    msg.contents.assign("VCIUUZZSHZJBWUVLNLMDBKEOZCXCFXWQHZHDYTVAHRSKSOYPEFHBFYUBEQPQCZXKQYTPFYOJLSXVRIFSQAEYZGHPJSFULSCHMNNTWRLHOTIXERFCBNDOKIZQGVGABISRGOMAUWBJDMJTGGLEPZSTJPYVTDQXBVLDRXYKHADAQQOGBWENVWARJLDXMVUKCUCOKGLFGNEFRQBNJMIIWYJNTIWI");

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
    msg.setTimeStamp(0.609469196218);
    msg.setSource(14021U);
    msg.setSourceEntity(181U);
    msg.setDestination(47779U);
    msg.setDestinationEntity(199U);
    msg.number.assign("GWACFGPHKTRVAUPYUIMVQXLPTYRUQXPCBQFNBAWHFDRDDZEJLMJYITBZHEOYGBNSFCBSPURNWGMIBTKEDZUUMKJBQQDSMVNXPBOIZHKGHCZCSJLVOYKKQUOERZAXWPVSYCJEIKXRFSELGBHFCAWGYNZOOUQTXFSAFZTRELSXSWUILXOVIJMNVCXWOMMTDETBWJJHPJNAOM");
    msg.timeout = 63153U;
    msg.contents.assign("MLHQQZDVPECJMRSXUTSHQXSIZCQUPODZRMYFWNLYMKDZGTBFOZYDKOCFRJVBJHYGSNZJUJCIVOLFIRMNADNMTIHVAWHTOHFAYPXRSO");

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
    msg.setTimeStamp(0.649563315906);
    msg.setSource(51213U);
    msg.setSourceEntity(150U);
    msg.setDestination(45642U);
    msg.setDestinationEntity(237U);
    msg.number.assign("GEGDARJDQDHUDQHGNGGRHXBONOAMSLVGVIUHPTIAPLZFOBJROJTKWXPVILSTQZUWTQAZUSLAXYFADBIEQYEKNDHSKQREURYCTSUWJHICTMROTZCUTFNVEROSRXEVQOMFVYXTMLBCNZZVPHUULAXDICZEZPWGFKLXYNEOIQECMGFEUYXMBBDPFNPSDJMLPJRWKFHGWYWWVOJVJFPTBCPNZJQQIJXWI");
    msg.timeout = 10617U;
    msg.contents.assign("CMQTWIUWIXCPGMDLCFWELQTKSZEHJYNKOAOOKHGGBDUVSENAXSIUSIFOSBZMIKDCMFBCIXFMCRQLUNUUDDCNYDMXVGZTQNFZDKJYONQPOWBRTTAOAWZINKRGGCSTVS");

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
    msg.setTimeStamp(0.0865166463317);
    msg.setSource(37173U);
    msg.setSourceEntity(139U);
    msg.setDestination(15678U);
    msg.setDestinationEntity(86U);
    msg.seq = 3610734547U;
    msg.destination.assign("ZSZKVTIPTHKXNPHPODHVYQBFOSLEUGHBDSKIIWOMNWJSUMRRBDXYHWAAGSMBKDNTZCBGQYQDWWWOHVAUBVJXICPOLJWJDZOHJXECUVELTTBTNSOBNDTCUKLGWBAIJIAYUMGMAXAQTPEXLQTYMKZEFYFOMUGIQRHKXLRNKAZFLEFMQSCVENPJQESTPKWNPKVDFQDLXSMVYXJMRRBEFRLIZPJRWHUIXZNYIQGFV");
    msg.timeout = 26861U;
    const char tmp_msg_0[] = {-5, -114, 21, 109, 68, -101, 76, 94, -122, 18, -111, 85, 93, 44, -48, 30, 13, 36, 22, 101, -103, 51, -92, 89, -60, 77, -103, 3, 17, 116, -95, 15, 22, 8, 50, -125, 93, 34, 30, -75, -27, -31, -62, -92, -6, 112, -70, 2, -95, -62, -102, 11, -100, -61, -76, -17, 3, 82, -105, 76, 49, 97, -42, 73, 78, 64, 1, -97, -127, -95, 4, 102, -82, 1, -29, -73, 13, -76, 51, -58, -109, -78, -11, -69, 77, 5, -101, 71, 30, 28, 106, 97, 95, 25, 110, 51, -16};
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
    msg.setTimeStamp(0.21473927961);
    msg.setSource(28742U);
    msg.setSourceEntity(84U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(0U);
    msg.seq = 1333768934U;
    msg.destination.assign("KDWNZQQEOCJJLSFEWTKKTFVTBACGJTE");
    msg.timeout = 19450U;
    const char tmp_msg_0[] = {-108, 116, -116, 99, -84, 123, -100, 29, -7, 28, -99, 84, -19, 6, 23, 92, 65, 8, 78, -77, 111, 5, -113, -42, 34};
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
    msg.setTimeStamp(0.957196065444);
    msg.setSource(62647U);
    msg.setSourceEntity(10U);
    msg.setDestination(42809U);
    msg.setDestinationEntity(38U);
    msg.seq = 1788891179U;
    msg.destination.assign("PSSOEBQGPIVFYARSWNQJPIEVEKBDERFWLBHHVOYXNERFGCBBTIXTD");
    msg.timeout = 9991U;
    const char tmp_msg_0[] = {13, 98, -69, -12, -59, 51, -72, 50, -76, -107, 12, -25, 123, -12, 113, -44, -37, -50, 60, -56, 71, 85, -58, 63, 79, 31, -78, -109, 27, 113, 79, -11, -65, -40, 0, 73, 94, -8, 116, -48, 122, -70, 67, 86, -98, -52, -50, -55, 119, -8, 5, 0, 56, 119, -78, 122, 77, -66, 51, -83, -106, -62, 30, -84, 106, 62, -27, 86, 51, 56, -98, -83, 94, -110, 6, 93, -39, 11, -70, -100, -52, 119, 88, -118, -63, -122, 30, 71, 29, 91, 51, 109, -39, 93, 97, 16, 1, -54, -89, -80, 28, -43, 100, 35, -84, -14, 121, -123, -36, -48, -14, 3, -63, 8, 111, 75, 6, 83, 54, -1, 92, -56, -82, 106, 57, 18, 4, -102, -105, 57, 30, -84, 124, -73, 125, 25, 126, 34, -128, 52, -89, 106, 118, 9, -22, 21, 100, -32, -1, 74, -54, 70, -57, -24, -9, -3, -59, -28, -63, -90, 83, 76, 10, -53, 51, -1, 101, 10, 15, -69, -93, -90, -103, -124, -26, 84, -32, -49};
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
    msg.setTimeStamp(0.382741084486);
    msg.setSource(7249U);
    msg.setSourceEntity(232U);
    msg.setDestination(62658U);
    msg.setDestinationEntity(115U);
    msg.source.assign("BKSCLSAUCLHOIWFQTYYTFIKSMZDLIRYLIQTQUHWZEGGWTHMESJPWQEDPKOYWKGRXYJIBN");
    const char tmp_msg_0[] = {63, 33, -9, 15, 9, -38, -101, 2, 15, 106, -49, -41, 126, 70, 73, -56, 122, 97, -95, -102, 70, 61, 117, 82, -8, -41, -126, -127, 119, -12, 108, -22, 45, -27, -36, -23, -76, -79, 30, -71, -90, 80, -15, 70, -77, -12, 0, -22, -75, -93, -33, -89, -58, -90, -17, -108, -24, 83};
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
    msg.setTimeStamp(0.939625562218);
    msg.setSource(56163U);
    msg.setSourceEntity(11U);
    msg.setDestination(5384U);
    msg.setDestinationEntity(46U);
    msg.source.assign("YDXBQLTZUDSEIAICXUWRFAUEIAJPHGJXJPSMUNEDLSEHUIGMXBZZUAKOXX");
    const char tmp_msg_0[] = {19, 104, 125, -84, 109, 123, -115, -124, -106, -64, -45, -86, -6, -110, 62, -51, 97, 44, 55, -34, -2, 72, 41, -122, -62, 46, 9, -110, -8, -71, -100, 10, -116, 7, -39, 30, 92, 40, -42, 66, 32, 65, 7, -51, 62, 35, -125, 102, -93, -118, 106, 80, 64, -34, 92, -18, 117, 113, -25, -78, 41, -65, 24, 2, -53, -12, -62, -51, -117, -96, 81, -81, 20, 101, 31, -118, 93, 123, -59, -128, 96, -118, -28, -23, -27, 98, 89, 22, -16, -38, 12, 113, -16, -38, -3, 76, -15, -15, 10};
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
    msg.setTimeStamp(0.722525327138);
    msg.setSource(58579U);
    msg.setSourceEntity(127U);
    msg.setDestination(6479U);
    msg.setDestinationEntity(107U);
    msg.source.assign("RZIWOMPUNIYQXSNNFSAIQEDSAJNGXGACWXFMEGOCMJSDEKHMMARLZ");
    const char tmp_msg_0[] = {-119, 7, 12, -15, -102, -114, -85, 8, 125, 27, -39, 53, 36, 114, 22, 42, 31, -53, 99, -112, 116, -20, -111, -1, -2, -121, -97, 124, -90, 81, 87, 120, 62, -52, -35, -114};
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
    msg.setTimeStamp(0.527078919431);
    msg.setSource(40628U);
    msg.setSourceEntity(54U);
    msg.setDestination(64398U);
    msg.setDestinationEntity(226U);
    msg.seq = 718218034U;
    msg.state = 81U;
    msg.error.assign("OJDACEKKEESNXZGKRJKBLRWBADGGOMTCYTWPOTGEJDATUPOMYCMODQTODRFXJHHVFUSEPJKYNDCQJAVCZHCLPUBZNZRFXFLLYTKIYHGNMFYCUXVXLVGXKIGTVI");

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
    msg.setTimeStamp(0.0194676101021);
    msg.setSource(18338U);
    msg.setSourceEntity(242U);
    msg.setDestination(60189U);
    msg.setDestinationEntity(150U);
    msg.seq = 938513290U;
    msg.state = 247U;
    msg.error.assign("ADTDZSTIZQFRLRAJHWWWEMBGHXGGXGLBQTVGTIVYVYTHQUSMUXPJKDIAJUNPAQKKOZFKCCIVXPSXJGFHTXLCRPQBWZWYCMCGDXOAVCEXPEDEFYSLIHDMITHOOOOVQXLHBEVM");

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
    msg.setTimeStamp(0.815418115796);
    msg.setSource(22065U);
    msg.setSourceEntity(188U);
    msg.setDestination(22995U);
    msg.setDestinationEntity(167U);
    msg.seq = 4153173208U;
    msg.state = 85U;
    msg.error.assign("WYHIOUEGXDRDXKLXJPHMRCJUVJKTDUHHHVKVUPEA");

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
    msg.setTimeStamp(0.0981301925053);
    msg.setSource(58713U);
    msg.setSourceEntity(76U);
    msg.setDestination(19320U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("KRLYUPBUMZQCUOTUFQXWJCAPRTIRZOVZZXOJUTPJDQQPDBAEOJJHUSXHLDXTAZBEJWYJYJNCEEDHKRYTNWYPITMBMMHEWNXGFTZWLUVYGSKFANCPNKLFIGQZDLUIREOAOFXAZTVRWXBCPFAKMHPPMQLPAOWQAGQS");
    msg.text.assign("KLEUUBJUXEGBOYDFSNUYEIZJMNFCQFXIHWFUAACORQIOSDBXAOBYCJWLUVTVDFVUGBRXCNDNYFLOOXPEUPNQEIWKCZZDHRSZHLNTSBPKXFLSAODMCHJZWWZTAXFLIPOHTLLTGYREVMBRMAVYGGWTSQVISAMKFVMWDPZEIREDGGVJPRQPOUISMKZIHZNDAQPHIDPEJTYBLK");

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
    msg.setTimeStamp(0.329261272819);
    msg.setSource(51818U);
    msg.setSourceEntity(97U);
    msg.setDestination(17171U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("TUWRHTDXAKWMTHVUCIVICRPRFZXERHXXCEJUSGPYTFIJLMHNKGMQBNLMKQYDFWQIJGFVAPHHCUIJBKFAPLPWDZBCECBGULMRYBYIXIDTLMRBZIVAMFZSCXDSAANHXOASQ");
    msg.text.assign("WQDZDHYJKSLYPOGFHEHVCMRCRCQIOMNERCWHQYPUSTTRRNUCPEUGTQPSICIALXSUBUXGOHUZYJXJEPYLMBKVIJLZQPZHACXDDWIMGJMFXTMBJVXHJZWNPEZFTJEONFGPSOAHCAVKUKDSUWIRABNDD");

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
    msg.setTimeStamp(0.895585664458);
    msg.setSource(54679U);
    msg.setSourceEntity(83U);
    msg.setDestination(38791U);
    msg.setDestinationEntity(80U);
    msg.origin.assign("FYSNVBYFXGHXOUQLEHTMNXAQDUYKJSOWGOSJJYVRRXINIZBGFKMXNGTTIPBTAYMARNWWDLKCOQEERZWNKLIPBHQRXDAGVERLZOHVOWSMFSSREYRVCJOUBEDASWVEOPTZTUXSWVEMYQCLAIOMZLPUKHWLIACNKNPDCHNECQ");
    msg.text.assign("LPGBYWLTMSEOOWGGOFSJMYHYVCGZUNXZLDWWPXVUEQZIZWDRTKSMCHZWKABEVBFJXPFFDOCTCAAKEIWTKEALMMZNGMHIYJUBWHAVYMKBTSMPSXADDDDNDMCVONJYCPUBJIPQGZRRLXTHEKFVKHANRSGLUAYRKTYYNKJFIRGQFHLKQUVZPBGOCNVETRICQLSVBONWXQZU");

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
    msg.setTimeStamp(0.627945658576);
    msg.setSource(6246U);
    msg.setSourceEntity(144U);
    msg.setDestination(45541U);
    msg.setDestinationEntity(71U);
    msg.origin.assign("WCTZHCMICRLAMNRVGXDUHNFAFFUIRAZJPSPTDSNQWJ");
    msg.htime = 0.538543013923;
    msg.lat = 0.395368401363;
    msg.lon = 0.313298789647;
    const char tmp_msg_0[] = {6, -61, 114, 77, 28, -66, -91, 74, 13, 9, 98, 119, -104, -22, 56, 71, -4, 80, -121, -41, -27, 98, -61, -39, 126, -97, -50, 110, 96, 108, -76, 15, -120, -6, 111, -55, -6, -41, 123, -65, 70, 79, 106, 8, -94, -29, -59, -44, 60, -21, -123, 48, -62, -85, -70, 43, 48, -72, -83, -26, 7, 84, -46, 45, -28, 103, 16, 111, -126, -42, 119, -77, 106, -17, -2, 52, 27, 8, 108, 125, 26, 118, 44, 88, -40, -113, 28, 85, 66, -66, -78, 68, -15, -49, -118, -123, 103, 30, 46, -90, 104, 93, -101, -88, -11, 1, 25, 13, -102, 114, 26, -31, 45, 44, 82, -26, 22, -4, 116, 23, 94, -114, 39, -40, 38, -90, -28, -85, -3, -52, -55, 110, -20, -95, 38, 50, -85, -25, -57, 80, -62, -63, 6, -103, -26, -79, -95, 119, -118, -115, -64, 81, 24, 113, -30, 83, -39, 109, -36, 2, 44, 10, 86, -28, -47, 74, 4, 44, -49, 43, -98, -87, 78, 61, 106, -20, -72, 104, 21, 57, -102, 65, 3, 45, -75, -125, 99, -80, -72, 105, 7, -102, -128, -80, -57, 73, -91, -1, -115, 4, -47, 32, 70, 56, 76, -40, 118, 60, -68, -26, 34, -12, -111, -21, 78, 24, -66, -39, 121, 68, 20, 113, -39, 85, 97, 81, 120, 50, -81, 67, -83, -82, -5, -67, -59, 99, -90};
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
    msg.setTimeStamp(0.943377731943);
    msg.setSource(33768U);
    msg.setSourceEntity(122U);
    msg.setDestination(46170U);
    msg.setDestinationEntity(179U);
    msg.origin.assign("OPABKAHUPFNYXDQVPDOICMWWTGVIGHGVWESMEIFDJLIPUYPHKPQFFAHHQMRQNDWKYOULKYHXQEHQBXULKTYBNOHUNRSRWCCZVZTCRGOOQXDDFSLZGGXZLTEVAMGVIAYNXKSCRIMQMCBPJJATAYDKWEQWIWCNTJFLTONZHLERDNUDGV");
    msg.htime = 0.0214484476817;
    msg.lat = 0.129972310055;
    msg.lon = 0.480017873209;
    const char tmp_msg_0[] = {31, 113, 35, 58, -57, -120, -108, 50, 117, 78, -48, -123, -81, 14, 106, 13, -125, -39, 33, 58, 60, 113, 35, 70, -100, 113, -48, -122, 37, -79, -114, 30, -111, -105, 87, -96, 6, 74, -53, -124, -35, 44, -40, -41, -3, -12, 87, -76, -84, -65, 20, 108, 95, -71, 53, -42, -11, -59, 112, -31, 125, -46, 90, -46, 80, 1, 90, -123, -94, -83, 105, -111, 96, 69, -42, 79, -103, 87, -108, 84, -36, -32, -56, -106, -31, -28, 4, 114, -105, 75, 100, 45, 87, 11, -69, -33, -104, -92, -50, -92, -55, 40, 115, -98, 20, -115, 67, -13, 111, -67, 91, -75, 84, -2, -57, -19, -94, 1, -65, 121, 23, 9, 52, 100, -44, -34, -23, 108, -78, -105, -99, -18, -107, 64, -61, 33, 30, -87, -70, -35, 53, -123, 55, -16, 48, -32, 124, -81, 69, 122, 110, -50, -18, 1, 96, 61, -88, -118, -57, -111, -58, -84, -53, -41, -113, 45, 42, 23, -125, -98, 7, -33, -19, 18, 27, 7, 84, -15, 40, -25, 15, -95, -104, 83, -94, -92, -87, -5, 87, 33};
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
    msg.setTimeStamp(0.711833792662);
    msg.setSource(2042U);
    msg.setSourceEntity(184U);
    msg.setDestination(65190U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("HNINAJHMCTPJDVYYJTWUAREXNQZBHADBASFADDPUUKWKONZXIZLVKKFWRBTLLEUBRSFKTECGIXLCYACJSVTGEKOSLRNCSSNIAWDUGUGOTOEQYYYQFWJRTCPJXQDSPHOBDNMGHVFSXIAEPGGFUZOHJYCSPGRIZIMQNXJTRKONQUZSOIWCRMOLDHPVYAPEWXVPCPMXILVYGWMZLJJ");
    msg.htime = 0.691820286857;
    msg.lat = 0.04172854594;
    msg.lon = 0.0571855458002;
    const char tmp_msg_0[] = {-45, 121, 122, -48, -17, 57, -32, 50, 45, -73, -41, 14, -105, -108, 56, -56, -91, -3, -30, -30, -23, -127, 38, 25, 111, 7, -59, -121, 79, -71, 64, -70, -39, 79, 96, 31, -119, -52, -67, 0, 77, 55, 10, -122, 58, 11, 38, -125, -89, -53, -35, -77, 123, -19, -34, 22, -29, 21, -54, -50, -121, 110, 24, -65, 28, -122, -105, -24, -54, 67, 18, 17, 34, -31, 103, 29, 103, -10, 3, -45, -63, 53, 99, -9, -21, 44, -38, 37, 96, 110, -93, -80, -33, -42, 122, -60, -114, 120, -27, -86, -126, 73, 18, -19, -83, 46, 61, -75, -16, -62, 57, -21, -34, -120, -84, -59, 37, 92, 91, 12, -70, -26, 0};
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
    msg.setTimeStamp(0.872675200535);
    msg.setSource(9662U);
    msg.setSourceEntity(223U);
    msg.setDestination(38847U);
    msg.setDestinationEntity(189U);
    msg.req_id = 50685U;
    msg.ttl = 12519U;
    msg.destination.assign("HAWRERXGRQCHTSXUEGAQXNCWQNXGHVZBFTBBWPQJNFBCODYFKQQMBSCOMVZALAJNCSJUIHNGXIOVBJSMYEUODNAHKYOFXMEFSFGIUFRCPUSDADZTSBGKPQGHPQPNWZICMVZGJCLHZMWRCXDKLLABLWQMGLTSTXEUYTX");
    const char tmp_msg_0[] = {94, 76, -76, -83, 66, 2, 1, 24, -14, 2, 33, 27, 117, 1, -52, 122, -3, 113, 98, 79, -128, 36, 91, 55, -90, -60, -72, 48, -6, -5, -86, 87, -78, -37, 73, 72, 71, 115, -31, 77, -96, -67, -122, 61, -126, 122, 56, -28, -75, 96, -71, 114, -6, 108, 39, 44, -62, 21, 7, -91, -58, -119, -70, -8, 92, 87, 45, -126, -5, -92, 85, 105, 41, 84, -44, 21, -53, -13, 58, -19, -54, 111, -26, 73, 120, -128, -84, -118, 106, 84, -43, 29, -16, -96, -28, 94, -45, 14, 71, 94, -90, -93, -40, 121, 0, -106, -117, 124, -9, 123, 21, -23, -46, -51, 47, 99, -20, -53, -112, 46, 9, 69, 73, 52, -90, -28, -94, 83, 109, 51, -65, 61, -117, -24, -50, 66, 33, 113, 4, -20, -93, -34, -61, 6, -61, 15, 5, -104, -111, -95, -15, -2, 111, -47, -39, -10, 18, 25, 35, 76, -95, 77, 119, 66, 58, 32, 42, -6, -101, -104, 106, -3, -111, -36, -87, 116, -24, -120, 52, 28, 126, 87, 122, -37, 89, -82, -44, 13, -15, -81, -1, 103, 80, -44, -124, 37, 24, -6, 64, -109, 34, -98, 16, -116, 14, -35, -30, 64, 66, 50, 86, 35, -53, 4, -16, 94, -86, -52, 89, 53, -122, -72, 120, 18};
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
    msg.setTimeStamp(0.0875754366931);
    msg.setSource(16275U);
    msg.setSourceEntity(86U);
    msg.setDestination(49499U);
    msg.setDestinationEntity(200U);
    msg.req_id = 36966U;
    msg.ttl = 18283U;
    msg.destination.assign("OVMAUAYIVCFHWVWRGXODPBWPZQTZHFHSSJGJBCVGRSUCINWNQVTGEOUKLUOMDYKEQKWBQLARIDBEFHYHUYDHSAMEHAUHODKMDAZBRWPOWJEKEWECLKYMPQWDKQOBYIACLGFMRVIKNDSTTCHRPPMJICZQFRZLMPSORGGXXQMUXGAXCAVZNTU");
    const char tmp_msg_0[] = {97, -19, -90, -66, 50, 125, -39, -99, -88, -9, 24, 38, -72, -66, 105, 83, -39, -2, 82, 118, -33, -126, -82, -46, -113, 35, -54, 14, -15, -104, 80, -58, -52, -38, -52, 66, 77, -53, 105, -91, 83, -95, 50, -38, -55, -71, 54, -13, -123, -14, -90, -96, 104, -70, -85, -81, 20, -79, 18, 116, 24, -36, -71, -27, -85, -127, -127, 32, -41, -104, 34, -42, 37, 82, 92, 102, 46, 125, 30, -80, -72, 13, -43, 52, -83, 54, -101, 55, 79, -66, 109, 81, 13, 120, -77, 62, -46, -5, -123, -116, 107, 91, 121, 83, -10, -24, 31, 39, -22, 25, 47, 32, 22, -117, -67, 60, -57, -6, 83, -45, 34, -107, -43, -99, 46, -69, -56, -67, 104, 83, -118, -72, 73, 88, 7, -14, -25, -124, -9, -110, 74, -95, 56, 115, -63};
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
    msg.setTimeStamp(0.785134381602);
    msg.setSource(58824U);
    msg.setSourceEntity(167U);
    msg.setDestination(9686U);
    msg.setDestinationEntity(81U);
    msg.req_id = 18533U;
    msg.ttl = 64927U;
    msg.destination.assign("QSEBERLYLAMOSDZKCUW");
    const char tmp_msg_0[] = {15, -38, -123, 91, -14, 79, -70, -1, 84, -45, 101, 101, -27, 13, -77, 19, -101, 99, -88, 9, -91, 77, 20, -86, -35, 100, 46, -47, -70, -69, -93, 44, -63, 105, -86, -64, 90, 77, 76, -9, 92, 56, 112, 73, 26, -100, -114, -13, -36, 62, -2, 55, 13, 47, 74, 52, 19, -27, 5, -56, -96, -62, 62, -76, -69, 87, -59, -120, -125, 93, -35, 4, 74, 47, 81, -104, 119, 104, 50, -117, -71, 29, 109, -43, 62, 92, -33, 2, 35, 48, -23, -122, -82, 81, -59, 92, -96, 34, 59, -77, 102, 23, -88, 27, 83, 99, -27, 102, 96, -4, 67, -99, 26, -109, 120, -43, -59, 96, 50, -27, -120, 18, -124, 93, 3, -55, 5, -7, -88, -14, -16, 25, 30, -31, -127, -23, 39, 40, 84, 116, 119, -99, -74, -93, -77, 70, -105, -81, -54, 13, -127, -67, 0, -52, -125, -90, 8, -90, 22, 19, 102, 35, 37, -62, 51, 28, 69, 113, -57, 34, -87, -96, 126, -94, -112, -60, 10, 58, 72, 116, 67, 37, -24, -42, 113, 15, 71, 13, 46, 29, 107, -51, 52, -86, 37, -89, 110, -39, 49, -39, -68, 115, 35, 120, 14, -79, -107, 66, -113, -82, -84, -23, 68, -19, 24, 18, 63, -87, 13, 86, -20, 113, -11, -103, 46, 13, 90, 118, -106, 51, 67, 38, 69, -87, 54, -73, 16, 74, 108, 2, -63, 13};
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
    msg.setTimeStamp(0.98487357687);
    msg.setSource(48874U);
    msg.setSourceEntity(153U);
    msg.setDestination(43494U);
    msg.setDestinationEntity(26U);
    msg.req_id = 33128U;
    msg.status = 98U;
    msg.text.assign("LHYAKIRJNKHJPCLWLWGJDFWOIUXKSYEQKLUBMPCHWQXNOQKLRABYIVHHAQZXAMTARRIJROTBSCADWTEIRXZUQDFKCWBSOKAXOQRVDHGLFJZNDVSNKCIGUDVSAJBCGGPNFPZMGZQXHZIMYYGFRJJNOILUEUDTBNENFETPYJUCAPPOHZVYTIHGOIYTTUCOZF");

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
    msg.setTimeStamp(0.683538347449);
    msg.setSource(17500U);
    msg.setSourceEntity(112U);
    msg.setDestination(39409U);
    msg.setDestinationEntity(140U);
    msg.req_id = 58244U;
    msg.status = 188U;
    msg.text.assign("PLWORORMMQWCUFZMNYDYAFJRBFCQYETKUQGKPFJGCAHOCQLSUMQVQINXBEQXNKEVMCHSYJDGRBBXWBDGBWZIUZSQRXIXJVYAPMHXUMLASNPFKKLPMOIVHSOAHIAITFFJYSJLEGBNYKGBGLOTEXVHEOCFITRRTLNIWWTBZFCETCGDRR");

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
    msg.setTimeStamp(0.963539883367);
    msg.setSource(54013U);
    msg.setSourceEntity(209U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(148U);
    msg.req_id = 17075U;
    msg.status = 23U;
    msg.text.assign("LRPXZWQVXHAXUMZTOEFQSAMATBIFVZLJKMMASGOIWB");

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
    msg.setTimeStamp(0.940327785505);
    msg.setSource(59595U);
    msg.setSourceEntity(40U);
    msg.setDestination(38688U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("VYHICWPIZFILRFLMGAGOGBSHBVMNCTXZMBTYKENNOHPLLFTOTUHJOSVVXRPZWMIHYAQCXQCYMGCEEIZTTRQAKNMTDWTCISRVFOQBVKWVPJDXANAJHGOUCZQFWPLNDMBEWMXLENGA");
    msg.links = 3971572451U;

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
    msg.setTimeStamp(0.804810213135);
    msg.setSource(37500U);
    msg.setSourceEntity(210U);
    msg.setDestination(17177U);
    msg.setDestinationEntity(127U);
    msg.group_name.assign("FMRWNHKXBYSDZGDBVKUMBPOWOKTPIXGRUYIOMGCINHLOYSTLZQRUCQAVIOAYJJZZCHNDPUQHMLRNXXRHOEPFYIRFYMCSSKH");
    msg.links = 3071282131U;

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
    msg.setTimeStamp(0.731345355611);
    msg.setSource(16403U);
    msg.setSourceEntity(111U);
    msg.setDestination(3379U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("HPURARMLDDCQXZTKAZJBMCSCFAZXJUFAHAHWGUNEJRRMXCNHYPFGQFOWKAJVYKNODAIURSGIGYUSONEYVMJEOLTTVLERQIGPRZLFJMPJLSZIGPLWRIPHQITOIDOOCXWDWLZSQCEEGBTNTFBCWHASBFBHKRQYNKVQGPATOMOLIMVXZVUGQQYYCBFKUTSMWJPXPJLSHINRKXDESDKFUWBXDZMEUNKONJQMEEVTZYVABW");
    msg.links = 704611324U;

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
    msg.setTimeStamp(0.31255298259);
    msg.setSource(23249U);
    msg.setSourceEntity(6U);
    msg.setDestination(34192U);
    msg.setDestinationEntity(242U);
    msg.groupname.assign("PJBLVQNVFVFHMYEKRDVSIISBCJPMCQAACYEGFAAPASBKQCRUXKNAJPZGZZPDTWKXYGRZOYWBILLFEWHUOGCFJOAUHSTPZGKBPJXOHEKQX");
    msg.action = 184U;
    msg.grouplist.assign("JDKTJOOHBSLCZFZCDSFSVGZLYQMHDLWKJSWQGRVMHSNNWUHPBGVQOPXDTXKEPKF");

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
    msg.setTimeStamp(0.266944589708);
    msg.setSource(47477U);
    msg.setSourceEntity(137U);
    msg.setDestination(36068U);
    msg.setDestinationEntity(113U);
    msg.groupname.assign("IKSEWLPYCQHZHRTNQLUUHTRQWJVVPNQMUFCCAOZBKDDWXGEDUGVGSOHZXIFCTTALPJABGFMBLMJADOTHITWYTOVCNWSSVPYLIOBHQDXQHHCPKAYJITIYWXZDSXNWSMZGFCIRMFMPEYLO");
    msg.action = 173U;
    msg.grouplist.assign("EZUDMPSKKOADAMUUKDS");

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
    msg.setTimeStamp(0.681621365762);
    msg.setSource(63250U);
    msg.setSourceEntity(176U);
    msg.setDestination(28493U);
    msg.setDestinationEntity(204U);
    msg.groupname.assign("ZNZCFCHSEVJZDRFQKIFHKMNCBAXPDZBLVCUKRWXXTJFUOTEYETUHYYVRXWAVTICQRPQNFSUWELZCBXWEKBWJAXAHLMEZLVNLRGJNDCGUUOKQZOEXFQGTERWMTYGDVMVJQANOLJBYNPLANSMATYDJBFMETTQKSOPRALHKDHRPPINMAVVHBBZPIKEFVUPRIDYDSZHQOZUSPJXOFIXG");
    msg.action = 170U;
    msg.grouplist.assign("CSXBGKFAHJRQ");

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
    msg.setTimeStamp(0.340521154238);
    msg.setSource(21295U);
    msg.setSourceEntity(180U);
    msg.setDestination(23061U);
    msg.setDestinationEntity(93U);
    msg.value = 0.443545072089;
    msg.sys_src = 17336U;

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
    msg.setTimeStamp(0.00734928805458);
    msg.setSource(13106U);
    msg.setSourceEntity(95U);
    msg.setDestination(56602U);
    msg.setDestinationEntity(7U);
    msg.value = 0.116968870176;
    msg.sys_src = 51695U;

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
    msg.setTimeStamp(0.703083084992);
    msg.setSource(62402U);
    msg.setSourceEntity(253U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(219U);
    msg.value = 0.707114740695;
    msg.sys_src = 21613U;

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
    msg.setTimeStamp(0.301512196345);
    msg.setSource(14737U);
    msg.setSourceEntity(79U);
    msg.setDestination(8018U);
    msg.setDestinationEntity(84U);
    msg.value = 0.568590340709;
    msg.units = 61U;

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
    msg.setTimeStamp(0.788658820693);
    msg.setSource(4519U);
    msg.setSourceEntity(164U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(197U);
    msg.value = 0.313451717688;
    msg.units = 83U;

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
    msg.setTimeStamp(0.362820204862);
    msg.setSource(45128U);
    msg.setSourceEntity(181U);
    msg.setDestination(60371U);
    msg.setDestinationEntity(10U);
    msg.value = 0.620539412433;
    msg.units = 246U;

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
    msg.setTimeStamp(0.608294043636);
    msg.setSource(4044U);
    msg.setSourceEntity(5U);
    msg.setDestination(62593U);
    msg.setDestinationEntity(181U);
    msg.base_lat = 0.570486762628;
    msg.base_lon = 0.839624276325;
    msg.base_time = 0.781833174009;

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
    msg.setTimeStamp(0.975096105399);
    msg.setSource(12926U);
    msg.setSourceEntity(106U);
    msg.setDestination(25353U);
    msg.setDestinationEntity(56U);
    msg.base_lat = 0.892057959235;
    msg.base_lon = 0.411255092764;
    msg.base_time = 0.893477241791;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 48010U;
    tmp_msg_0.destination = 36667U;
    tmp_msg_0.timeout = 0.750021356466;
    IMC::EulerAnglesDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.651808002095;
    tmp_tmp_msg_0_0.x = 0.654920361973;
    tmp_tmp_msg_0_0.y = 0.236212990733;
    tmp_tmp_msg_0_0.z = 0.230364102345;
    tmp_tmp_msg_0_0.timestep = 0.268006689557;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0337594952741);
    msg.setSource(6845U);
    msg.setSourceEntity(76U);
    msg.setDestination(31130U);
    msg.setDestinationEntity(245U);
    msg.base_lat = 0.405858552415;
    msg.base_lon = 0.826777319344;
    msg.base_time = 0.503148342165;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 37640U;
    tmp_msg_0.priority = 6;
    tmp_msg_0.x = 14822;
    tmp_msg_0.y = 10170;
    tmp_msg_0.z = -10366;
    tmp_msg_0.t = -24672;
    IMC::GetParametersXml tmp_tmp_msg_0_0;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.728542488795);
    msg.setSource(21395U);
    msg.setSourceEntity(76U);
    msg.setDestination(37339U);
    msg.setDestinationEntity(94U);
    msg.base_lat = 0.262687655702;
    msg.base_lon = 0.413435944334;
    msg.base_time = 0.834984946403;
    const char tmp_msg_0[] = {-126, -15, 8, -11, -19, -93, -9, -11, -126, 17, 39, 116, 105, -43, -111, -75, 56, 6, 106, -77, -92, 82, 24, -52, -120, 113, -3, 66, 19, -50, -119, -65, 80, -76, 32, 5, 89, 60, -105, -29, 11, 106, -83, -98, 126, -19, 46, 32, 15, 70, -7, -42, -39, 33, 46, 19, 24, -12, -56, -40, 2, -76, 22, -95, 21, 19, -123, -45, 46, -117, -19, 2, 75, 11, 38, 115, -12, -36, 52, 71, 31, 47, -38, 103, -113, -74, 2, 63, 94, -26, 21, 43, 81};
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
    msg.setTimeStamp(0.55318244826);
    msg.setSource(8261U);
    msg.setSourceEntity(228U);
    msg.setDestination(54434U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.404268298653;
    msg.base_lon = 0.876800931278;
    msg.base_time = 0.618217626322;
    const char tmp_msg_0[] = {-5, -104, 89, 65, -74, 22, 79, 24, 73, -38, 10, 31, -111, -108, -68, -63, 53, 15, 43, -65, -66, 25, -89, 13, -98, -98, -40, 42, -30, -83, 111, -74, 75, -101, -107, 87, 75, -13, -82, 126, 59, -23, 41, -22, -64, 125, 15, -27, -13, -111, -99, -30, -86, 115, 102, -89, -18, -105, 82, 10, -95, -69, 92, 35, 44, -57, -41, -68, -119, 97, -58, 66, -58, -27, 104, -13, 61, 52, -118, 111, -117, 112, -18, -22, -30, -13, 108, 65, 123, 82, 21, 11, -32, 11, 35, -66, 67, -55, 33, -12, -105, -8, -10, -102, -95, -12, -104, -116, 0, -105, -9, -94, 0, 13, -102, 62, -58, -104, -55, 121, -82, -87, 100, 80, -89, 80, 52, 118, -118, 55, 109, -71, 83, 99, 18, 17, -25, -74, -18, -78};
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
    msg.setTimeStamp(0.552289924228);
    msg.setSource(32105U);
    msg.setSourceEntity(215U);
    msg.setDestination(60610U);
    msg.setDestinationEntity(90U);
    msg.base_lat = 0.507763580534;
    msg.base_lon = 0.0390032266949;
    msg.base_time = 0.671688961167;
    const char tmp_msg_0[] = {-98, 102, 101, -87, -127, 68, 33, 64, -11, 24, 53, -76, 0, 40, -38, -124, 59, -91, -25, -67, 44, -43, 71, 115, -75, -16, 61, -122, -64, 97, -106, -60, -20, 16, -96, -11, 38, -38, 56, 87, 58, 31, 107, 36, -126, -74, 105, 125, 117, -79, -56, -21, 105, -85, 56, -121, 107, -24, 88, -9, 82, 7, 95, -94, 47, 120, -77, 96, -64, -122, 121, -115, 43, -67, -34, -16, -74, 67, -126, 54, -100, -112, -81, -13, 69, 91, -75, -65, 10, 2, 101, 14, -62, -60, 62, -11, 45, 23, -50, -4, -8, -62, -33, 100, -80, -123, 79, -108, 108, 55, -31, -97, 63, -9, -26, 108, 126, -58, 95, -55, 16, -121, 111, 33, 68, 121, 21, -59, -99, -44, 81, 11, -28};
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
    msg.setTimeStamp(0.146603916719);
    msg.setSource(8455U);
    msg.setSourceEntity(113U);
    msg.setDestination(40254U);
    msg.setDestinationEntity(98U);
    msg.sys_id = 23332U;
    msg.priority = 65;
    msg.x = 5966;
    msg.y = 32143;
    msg.z = -32352;
    msg.t = 278;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("VPRXBFINCXVEUXPPBXQYIVLOLWMSUEVKJJFBIGUJUAQHJBFDZCHWHUQNHOKGMAWVPTBKSSJIYDRAEZEMCPOYZMZQUAOEXIWGDDRDNEPFYUTTKQNKBVGCAHTLTLWXLZNKSDXYYXRCSEZHSYFIVGYJWZBYOHQAWGFOAYTTGRXTMLWNURCJDMVFSQLPLVBTEKRNZISUZADCJMQOJKLBDHNIFRKMCIPATUQGABVSMGGINOZEJELOCRNOWCPP");
    const char tmp_tmp_msg_0_0[] = {-91, 30, -125, 75, 107, 94, -104, -7, 76, 92, 9, 63, 74, -93, 50, 83, 73, 110, 84, -23, -14, -53, -59, -101, -57, -57, -27, -18, -17, 6, -77, -42, -2, 60, 27, -85, -42, -20, 48, 48, 47, 32, 59, -110, -77, -52, -114, 62, -103, -119, 98, 30, -80, -16, 103, 4, -76, -53, 66, -16, 20, 47, -49, 7, 64, 80, 73, -92, 107, -39, -92, -89, -64, 36, -3, 95, 17, -1, 113, -113, 58, -37, 29, 26, 95, 109, -9, 87, 124, -52, 29, -105, -62, -45, -53, -55, 96, 26, 3, -14, 36, 6, -117, 29, 33, -53, -73, -100, 2, 75, -60, 30, -6, -112, 126, -10, 65, -126, 41, 4, 38, -3, 80, -106, -57, 112, -27, -127, 7, 0, -31, 52, 71, -19, 68, -100, 65, 73, -7, -1, -47, 8, -80, 86, -22, 68, 15, -96, 20, -127, -73, -76, 87, 51, 126, -5, -50, -40, 11, 78, 71, 47, 72, -15, -46, -46, -89, -123, 68, 81, -108, -51, -56, -16, 0, 125, -50, -4, 81, 6, -105, 3, -109, -103, 88, -4, -26, 67, -40, -120, 10, 97, 111, 37, -44, -85, 6, 108};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.814139648092);
    msg.setSource(42494U);
    msg.setSourceEntity(88U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(228U);
    msg.sys_id = 13360U;
    msg.priority = 40;
    msg.x = 11453;
    msg.y = 11140;
    msg.z = 20994;
    msg.t = -14225;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 26U;
    tmp_msg_0.system.assign("KGUIEDIUVVAZFGWMHMDXNSQJPSNOIQAFDAPOCSXLLVCKD");
    tmp_msg_0.range = 0.995008596301;
    IMC::VehicleMedium tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.medium = 242U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.507627405669);
    msg.setSource(17800U);
    msg.setSourceEntity(170U);
    msg.setDestination(7257U);
    msg.setDestinationEntity(6U);
    msg.sys_id = 32697U;
    msg.priority = -92;
    msg.x = 24094;
    msg.y = 25977;
    msg.z = -12168;
    msg.t = 23276;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1906499382U;
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
    msg.setTimeStamp(0.189466840217);
    msg.setSource(30164U);
    msg.setSourceEntity(177U);
    msg.setDestination(10658U);
    msg.setDestinationEntity(251U);
    msg.req_id = 37693U;
    msg.type = 7U;
    msg.max_size = 11763U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.484572632157;
    tmp_msg_0.base_lon = 0.746800663648;
    tmp_msg_0.base_time = 0.97301686672;
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
    msg.setTimeStamp(0.288093705886);
    msg.setSource(49133U);
    msg.setSourceEntity(33U);
    msg.setDestination(29920U);
    msg.setDestinationEntity(166U);
    msg.req_id = 41584U;
    msg.type = 171U;
    msg.max_size = 49249U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0264779294404;
    tmp_msg_0.base_lon = 0.303017056907;
    tmp_msg_0.base_time = 0.950999279297;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 24983U;
    tmp_tmp_msg_0_0.destination = 10870U;
    tmp_tmp_msg_0_0.timeout = 0.703663884225;
    IMC::SetControlSurfaceDeflection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 12U;
    tmp_tmp_tmp_msg_0_0_0.angle = 0.828163904687;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.975311537935);
    msg.setSource(21104U);
    msg.setSourceEntity(61U);
    msg.setDestination(42773U);
    msg.setDestinationEntity(42U);
    msg.req_id = 2654U;
    msg.type = 88U;
    msg.max_size = 59047U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.808014085771;
    tmp_msg_0.base_lon = 0.497361600611;
    tmp_msg_0.base_time = 0.897536630354;
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
    msg.setTimeStamp(0.408510971459);
    msg.setSource(47520U);
    msg.setSourceEntity(100U);
    msg.setDestination(18817U);
    msg.setDestinationEntity(157U);
    msg.original_source = 64167U;
    msg.destination = 36809U;
    msg.timeout = 0.0826355415503;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 41905U;
    tmp_msg_0.status = 32U;
    tmp_msg_0.text.assign("XCFZXJZFSXKUBMFDFOJUFANHUBTJKSRRVWENMZVLMUAHNDWDEYSOAOQZAMZCOMPBCNGHRHRPKIRQCXRWQONZYSGKEBBTACTVQWAEQFCYMCGHBIMPEFHJZXQGTTOKPMTZWWFUYWNJLSYIAPPVKDVVPKDWOQVKQLQRXONGULUAYAJKRGSSCBIITIXHYDBIXFLDRNJOEWVNGZTGBULESRJPJSPLEPYHEUJNDV");
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
    msg.setTimeStamp(0.565855463122);
    msg.setSource(43125U);
    msg.setSourceEntity(215U);
    msg.setDestination(29047U);
    msg.setDestinationEntity(121U);
    msg.original_source = 29728U;
    msg.destination = 35540U;
    msg.timeout = 0.898050148084;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.866279783156;
    tmp_tmp_msg_0_0.lon = 0.0791853734411;
    tmp_tmp_msg_0_0.height = 0.0372802350678;
    tmp_tmp_msg_0_0.x = 0.505597207123;
    tmp_tmp_msg_0_0.y = 0.967141476906;
    tmp_tmp_msg_0_0.z = 0.744292274703;
    tmp_tmp_msg_0_0.phi = 0.480691746527;
    tmp_tmp_msg_0_0.theta = 0.999007398515;
    tmp_tmp_msg_0_0.psi = 0.655609810808;
    tmp_tmp_msg_0_0.u = 0.752487050806;
    tmp_tmp_msg_0_0.v = 0.644968645762;
    tmp_tmp_msg_0_0.w = 0.249139852261;
    tmp_tmp_msg_0_0.vx = 0.275567211277;
    tmp_tmp_msg_0_0.vy = 0.226645016807;
    tmp_tmp_msg_0_0.vz = 0.0722312052722;
    tmp_tmp_msg_0_0.p = 0.38444371698;
    tmp_tmp_msg_0_0.q = 0.521021677476;
    tmp_tmp_msg_0_0.r = 0.893512690853;
    tmp_tmp_msg_0_0.depth = 0.477952425261;
    tmp_tmp_msg_0_0.alt = 0.240209877;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 225U;
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
    msg.setTimeStamp(0.395600424931);
    msg.setSource(46293U);
    msg.setSourceEntity(207U);
    msg.setDestination(3433U);
    msg.setDestinationEntity(73U);
    msg.original_source = 64599U;
    msg.destination = 43617U;
    msg.timeout = 0.536618582537;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 51878U;
    tmp_msg_0.lat = 0.336905694359;
    tmp_msg_0.lon = 0.111261822746;
    tmp_msg_0.z = 0.914597452394;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.22059608994;
    tmp_msg_0.speed_units = 249U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.162105755231;
    tmp_tmp_msg_0_0.y = 0.0266806634005;
    tmp_tmp_msg_0_0.z = 0.880017907958;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SVMXUBDASANDRNJOQYIXMELLCXAZPBFSJQTKWEEUHDOHDBZUSHWZAXRLGNHZKEZRQRGJFYSKQWWPBHNNKHTFCRPSYEKNBNDFXWAHXWVLVATKJ");
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.957208223939);
    msg.setSource(5937U);
    msg.setSourceEntity(25U);
    msg.setDestination(57850U);
    msg.setDestinationEntity(2U);
    msg.id = 169U;
    msg.range = 0.246575213293;

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
    msg.setTimeStamp(0.852140946669);
    msg.setSource(25293U);
    msg.setSourceEntity(139U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(65U);
    msg.id = 149U;
    msg.range = 0.0198546140147;

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
    msg.setTimeStamp(0.77958874657);
    msg.setSource(46826U);
    msg.setSourceEntity(117U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(210U);
    msg.id = 223U;
    msg.range = 0.29812032745;

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
    msg.setTimeStamp(0.384461381606);
    msg.setSource(16343U);
    msg.setSourceEntity(127U);
    msg.setDestination(45716U);
    msg.setDestinationEntity(106U);
    msg.beacon.assign("WJUJRKNILJOCHMPOFMIIHDJAADYLBADWRICVYXOZIBVHQPXYP");
    msg.lat = 0.798629386769;
    msg.lon = 0.193446857503;
    msg.depth = 0.22249736051;
    msg.query_channel = 106U;
    msg.reply_channel = 204U;
    msg.transponder_delay = 73U;

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
    msg.setTimeStamp(0.437263743002);
    msg.setSource(36589U);
    msg.setSourceEntity(30U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(193U);
    msg.beacon.assign("BLLLXEPWEWHOWRHHDADOUQVUZNJCI");
    msg.lat = 0.547528200224;
    msg.lon = 0.914618416011;
    msg.depth = 0.975330953302;
    msg.query_channel = 24U;
    msg.reply_channel = 39U;
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
    msg.setTimeStamp(0.222965316008);
    msg.setSource(62424U);
    msg.setSourceEntity(48U);
    msg.setDestination(15406U);
    msg.setDestinationEntity(53U);
    msg.beacon.assign("VKTFJSJDBMBGOMN");
    msg.lat = 0.90115768499;
    msg.lon = 0.801878182801;
    msg.depth = 0.200507404082;
    msg.query_channel = 173U;
    msg.reply_channel = 151U;
    msg.transponder_delay = 239U;

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
    msg.setTimeStamp(0.506522797742);
    msg.setSource(7024U);
    msg.setSourceEntity(74U);
    msg.setDestination(24200U);
    msg.setDestinationEntity(128U);
    msg.op = 89U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SWJVKHSFBKWAYDSIOXAEHTADMYPHRISQTVPPRGIG");
    tmp_msg_0.lat = 0.719703106651;
    tmp_msg_0.lon = 0.0298733352004;
    tmp_msg_0.depth = 0.37780050393;
    tmp_msg_0.query_channel = 169U;
    tmp_msg_0.reply_channel = 191U;
    tmp_msg_0.transponder_delay = 205U;
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
    msg.setTimeStamp(0.895945135509);
    msg.setSource(44893U);
    msg.setSourceEntity(33U);
    msg.setDestination(34874U);
    msg.setDestinationEntity(223U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.0485261817946);
    msg.setSource(1332U);
    msg.setSourceEntity(84U);
    msg.setDestination(44054U);
    msg.setDestinationEntity(234U);
    msg.op = 97U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WTZHPCIAMUVBYFNMMUPFZHTBBTVLFNSFYACHITOXSIRDRDGIFDWQFZFOCAOXAHJKVWCWZLLSLYXLKXQOGLJQAWVKPDSMYPMGPXNJMNUIMZKCODUYJPEUTRTRPZONJKCRVQXNPMFNHJNVJKTRYWQEEXVETYXSQXVGQMS");
    tmp_msg_0.lat = 0.457238827693;
    tmp_msg_0.lon = 0.102891897076;
    tmp_msg_0.depth = 0.130794340756;
    tmp_msg_0.query_channel = 76U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 85U;
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
    msg.setTimeStamp(0.486063579102);
    msg.setSource(3314U);
    msg.setSourceEntity(218U);
    msg.setDestination(43486U);
    msg.setDestinationEntity(219U);
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.0207063988886;
    tmp_msg_0.time_next_service = 0.361374958816;
    tmp_msg_0.time_motor_next_service = 0.996178164231;
    tmp_msg_0.time_idle_ground = 0.927834481492;
    tmp_msg_0.time_idle_air = 0.552742614779;
    tmp_msg_0.time_idle_water = 0.978087226123;
    tmp_msg_0.time_idle_underwater = 0.416738333176;
    tmp_msg_0.time_idle_unknown = 0.516097729933;
    tmp_msg_0.time_motor_ground = 0.819574963825;
    tmp_msg_0.time_motor_air = 0.671388500711;
    tmp_msg_0.time_motor_water = 0.425412500939;
    tmp_msg_0.time_motor_underwater = 0.399908362921;
    tmp_msg_0.time_motor_unknown = 0.175920558238;
    tmp_msg_0.rpm_min = -30350;
    tmp_msg_0.rpm_max = -24701;
    tmp_msg_0.depth_max = 0.256418762359;
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
    msg.setTimeStamp(0.714341084268);
    msg.setSource(52871U);
    msg.setSourceEntity(239U);
    msg.setDestination(59102U);
    msg.setDestinationEntity(20U);
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -32727;
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
    msg.setTimeStamp(0.591857133485);
    msg.setSource(48879U);
    msg.setSourceEntity(226U);
    msg.setDestination(45480U);
    msg.setDestinationEntity(103U);
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 55U;
    tmp_msg_0.speed = 61668U;
    const char tmp_tmp_msg_0_0[] = {-98, 0, -28, 57, -116, 73, 61, 30, 58, 50, -35, 17, 89, 125, -82, -84, 115, 59, -50, 30, -34, -30, -3, 2, -8, -117, 36, -119, -53, 74, 90, 113, 116, 60, 54, 74, 14, -28, -105, -123, -108, -121, 70, 41, 59, 112, 50, -43, -75, 25, -45, -26, -121, 40, -115, 27, -1, -63, 126, 30, 76, 56, 88, -1, 112, -53, 92, 102, 90, 60, 69, -7, -21, -45, -78, 52, 62, -116, 104, -94, -82, -76, -108, 32, 126, 7, 60, -88, 31, -78, -114, -42, -26, 91, 95};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.619131199001);
    msg.setSource(64234U);
    msg.setSourceEntity(117U);
    msg.setDestination(51781U);
    msg.setDestinationEntity(47U);
    msg.op = 72U;
    msg.system.assign("BFPUZCEOISMLLHVEUVXKLFTAXMOSZMCJUQMINZKWBQDSDPJOXAUNTHKKYHCCIUVRBSOCYUGIOZYNYILIXLNMMQWAAQARNHGIJQNFHXJAXDDSVRPONQUOASHMPFFRTVLGFMTUATMPNYKORBQTOXI");
    msg.range = 0.360287143707;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("YCXIQGSDMXUPKMTCLMHUYOWGZNYNKHVMZJMBXUGOTEBEXTVSVPWYIQKZHBIIFJYNOKRBBUGRQBFWVVYZWIQSJYELQJGDXPAADOPUYFGRVVAPIESMHDQARDLOPHUNKLUFHPC");
    tmp_msg_0.lbearing = 0.297315141863;
    tmp_msg_0.lelevation = 0.349261520271;
    tmp_msg_0.bearing = 0.157109798889;
    tmp_msg_0.elevation = 0.0385202540519;
    tmp_msg_0.phi = 0.26398077263;
    tmp_msg_0.theta = 0.153265555134;
    tmp_msg_0.psi = 0.0463197789711;
    tmp_msg_0.accuracy = 0.190067711465;
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
    msg.setTimeStamp(0.404022651691);
    msg.setSource(33352U);
    msg.setSourceEntity(52U);
    msg.setDestination(26871U);
    msg.setDestinationEntity(103U);
    msg.op = 157U;
    msg.system.assign("FVVAONEPYIOHGSALGDBPFLCPVCHUYTMJLWQWENCYKMHXSFCHIKPTXTBJMSUYQZFVZXJZWXJKRDYOART");
    msg.range = 0.715840932811;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 53047U;
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
    msg.setTimeStamp(0.879970810274);
    msg.setSource(52734U);
    msg.setSourceEntity(142U);
    msg.setDestination(29951U);
    msg.setDestinationEntity(37U);
    msg.op = 6U;
    msg.system.assign("HDVOVZQTWBSIQBARLWBNJMEJCIRCJNKGOHDTWGJUZFQAPFAVDFGBURMMIWXIXEOMKPXKNZTYTHWWHUNVGPBLEYKUPQHXGQMURKLINRUVCJCSNXAYBYBIMCXSSCLYDBCIBBOWNRECSWFPIKLGSOOZGYHDL");
    msg.range = 0.826844219642;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 10613U;
    tmp_msg_0.name.assign("ODTHNQGNUQNRHAYGIBBFZZTSLJNJONPYIJCEEUXYVWORRKAMDOSFUYVKHFWJKDAGWTFYXNVWBDQKISSZZACHFBPHMCSQAOCTPDUDQMIBIJAXFGHXNIPAYICFVKCFMWVQEHEZZBEKBSUTDMSULFWLLVGQLXGJ");
    tmp_msg_0.custom.assign("VTREJHPKGOLPAOTEYWXGZJXCTVBXRIUWMDOAHMLKBQSILGTFSRMHZFULOSQPYQPMDBKSZYHMHFNQGZBQWHBFDUWMTXLVQYVNNITFJKIYNMUMSYPNWTCZWHGWKRPI");
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
    msg.setTimeStamp(0.759765868754);
    msg.setSource(2125U);
    msg.setSourceEntity(126U);
    msg.setDestination(12396U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.284654977734);
    msg.setSource(11850U);
    msg.setSourceEntity(248U);
    msg.setDestination(20452U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.459238150829);
    msg.setSource(39722U);
    msg.setSourceEntity(11U);
    msg.setDestination(63545U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.325588443687);
    msg.setSource(10993U);
    msg.setSourceEntity(47U);
    msg.setDestination(56762U);
    msg.setDestinationEntity(36U);
    msg.list.assign("TRXKJWRFNMTRKHWHZGOKADNBFJQKNJTLFCJTQCDYZZFMEKOYVSGIISTPODARMRDPVDIILMHOHWDIRJNPQBIULUYNWAEHQXXJRCYXUZLXTIJPFTIBGMCGGOWFWLTUVVAXQSULFJEIUPGVZVUAHKBHDQGNFKLFXKWNSBKPCLCATSSBVYERHPXETMHAJC");

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
    msg.setTimeStamp(0.635996898359);
    msg.setSource(47069U);
    msg.setSourceEntity(38U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(206U);
    msg.list.assign("FMYXDIIEUQSGHDXNDOGBUSCLPNYWGPQAKQHVXZZMTEFAMCHLCWRPRXYEBQPEQTEVRHSZCRYWYFZGGZBJCNBBEJRYLOLAMDFPCWAVCDYGFJZNKWDMXJHCB");

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
    msg.setTimeStamp(0.0222828040885);
    msg.setSource(17635U);
    msg.setSourceEntity(65U);
    msg.setDestination(48117U);
    msg.setDestinationEntity(170U);
    msg.list.assign("AMAIFFOIBDOWMVMOGNCJYTEZVUSJHQLDRIBYYYSHTNYDWSVGTRGDWPMRLFZBWEKAMLVLUSVNCMIOGJUXJPUUEDVMZIPNFWFHTUTREJKLTZXCGZOSWGSWQZX");

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
    msg.setTimeStamp(0.266911766048);
    msg.setSource(6266U);
    msg.setSourceEntity(107U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(212U);
    msg.peer.assign("FKIWMQCGCYXIDTXHYEPBRSGMYQPMTDLHNRCAZFAGJTNEFMIWVEBOK");
    msg.rssi = 0.675557460578;
    msg.integrity = 27752U;

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
    msg.setTimeStamp(0.254126547782);
    msg.setSource(51558U);
    msg.setSourceEntity(189U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(182U);
    msg.peer.assign("IUAZPMMMCMGYCHGUSKJSMPHLJPELVTEMQGFVZUXCQWTXHLAMAHBCTNSZQYWNTYAZDULIEIQDNQPWBBBUZXYOBLRKSFCKEFYEGCIQKWBOTRXRDUBSVZIITRGIHJJPRRCGNRLQXKOWDZSANEFNDUJHTUZPIWFOUXYKKJNOTGXOUK");
    msg.rssi = 0.796122347192;
    msg.integrity = 63213U;

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
    msg.setTimeStamp(0.916733163133);
    msg.setSource(59058U);
    msg.setSourceEntity(95U);
    msg.setDestination(56713U);
    msg.setDestinationEntity(10U);
    msg.peer.assign("RMJHRKZXZEIVYZHBVKYSEYDBVWPTGOYQSEQZWUNVWAKDYXVCHLCMRGLOQRAZORIMKZXFDJPKJWKDLELJTCKGJLPFYWKGWWZBCMBVNAQPICIHHDVFKFOXTQESJRHJANXZFAFHDNJOLNCXBOXLESXNDGNOEHSCGMUPIOYRJUAESPCOEBYMS");
    msg.rssi = 0.18815050637;
    msg.integrity = 23905U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.907455081142);
    msg.setSource(53841U);
    msg.setSourceEntity(23U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(97U);
    msg.value = 19110;

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
    msg.setTimeStamp(0.211897912221);
    msg.setSource(59841U);
    msg.setSourceEntity(242U);
    msg.setDestination(16281U);
    msg.setDestinationEntity(100U);
    msg.value = -9174;

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
    msg.setTimeStamp(0.906693242225);
    msg.setSource(2961U);
    msg.setSourceEntity(41U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(17U);
    msg.value = -15934;

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
    msg.setTimeStamp(0.026975012098);
    msg.setSource(38462U);
    msg.setSourceEntity(173U);
    msg.setDestination(18631U);
    msg.setDestinationEntity(22U);
    msg.value = 0.406258460264;

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
    msg.setTimeStamp(0.447094386118);
    msg.setSource(51190U);
    msg.setSourceEntity(90U);
    msg.setDestination(48822U);
    msg.setDestinationEntity(9U);
    msg.value = 0.17655503514;

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
    msg.setTimeStamp(0.512453274982);
    msg.setSource(11934U);
    msg.setSourceEntity(235U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(109U);
    msg.value = 0.47018438287;

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
    msg.setTimeStamp(0.162164589828);
    msg.setSource(58482U);
    msg.setSourceEntity(225U);
    msg.setDestination(23612U);
    msg.setDestinationEntity(254U);
    msg.value = 0.724249891724;

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
    msg.setTimeStamp(0.820714446372);
    msg.setSource(46492U);
    msg.setSourceEntity(174U);
    msg.setDestination(25495U);
    msg.setDestinationEntity(251U);
    msg.value = 0.576621161315;

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
    msg.setTimeStamp(0.0488224705497);
    msg.setSource(9405U);
    msg.setSourceEntity(66U);
    msg.setDestination(9800U);
    msg.setDestinationEntity(134U);
    msg.value = 0.309061190622;

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
    msg.setTimeStamp(0.823815434324);
    msg.setSource(44039U);
    msg.setSourceEntity(3U);
    msg.setDestination(44812U);
    msg.setDestinationEntity(243U);
    msg.validity = 7678U;
    msg.type = 77U;
    msg.utc_year = 38601U;
    msg.utc_month = 237U;
    msg.utc_day = 4U;
    msg.utc_time = 0.21622248957;
    msg.lat = 0.202110509306;
    msg.lon = 0.228633865191;
    msg.height = 0.755254004605;
    msg.satellites = 225U;
    msg.cog = 0.609575801573;
    msg.sog = 0.799936263801;
    msg.hdop = 0.916846135732;
    msg.vdop = 0.308871541362;
    msg.hacc = 0.300354982904;
    msg.vacc = 0.681768897138;

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
    msg.setTimeStamp(0.811135059742);
    msg.setSource(41892U);
    msg.setSourceEntity(35U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(253U);
    msg.validity = 18994U;
    msg.type = 194U;
    msg.utc_year = 2058U;
    msg.utc_month = 230U;
    msg.utc_day = 56U;
    msg.utc_time = 0.836864706651;
    msg.lat = 0.541693952783;
    msg.lon = 0.32870554908;
    msg.height = 0.250271621143;
    msg.satellites = 159U;
    msg.cog = 0.206013830867;
    msg.sog = 0.915529186362;
    msg.hdop = 0.336421457312;
    msg.vdop = 0.107994010448;
    msg.hacc = 0.00886784152302;
    msg.vacc = 0.287611543979;

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
    msg.setTimeStamp(0.629729829834);
    msg.setSource(7817U);
    msg.setSourceEntity(248U);
    msg.setDestination(18283U);
    msg.setDestinationEntity(40U);
    msg.validity = 64026U;
    msg.type = 197U;
    msg.utc_year = 34890U;
    msg.utc_month = 236U;
    msg.utc_day = 161U;
    msg.utc_time = 0.344439484738;
    msg.lat = 0.147139087514;
    msg.lon = 0.569427833663;
    msg.height = 0.502080777941;
    msg.satellites = 69U;
    msg.cog = 0.430786286752;
    msg.sog = 0.867424982254;
    msg.hdop = 0.822876821796;
    msg.vdop = 0.498026105683;
    msg.hacc = 0.149096557399;
    msg.vacc = 0.51984322622;

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
    msg.setTimeStamp(0.110519767709);
    msg.setSource(37096U);
    msg.setSourceEntity(200U);
    msg.setDestination(34615U);
    msg.setDestinationEntity(203U);
    msg.time = 0.442837623291;
    msg.phi = 0.735865590678;
    msg.theta = 0.344894398968;
    msg.psi = 0.73006320476;
    msg.psi_magnetic = 0.284305037442;

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
    msg.setTimeStamp(0.0474820643565);
    msg.setSource(36118U);
    msg.setSourceEntity(75U);
    msg.setDestination(16788U);
    msg.setDestinationEntity(136U);
    msg.time = 0.640727058601;
    msg.phi = 0.934727357934;
    msg.theta = 0.673443703146;
    msg.psi = 0.507086128556;
    msg.psi_magnetic = 0.245430377968;

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
    msg.setTimeStamp(0.0241714731986);
    msg.setSource(18518U);
    msg.setSourceEntity(154U);
    msg.setDestination(30452U);
    msg.setDestinationEntity(243U);
    msg.time = 0.690903271361;
    msg.phi = 0.758816021873;
    msg.theta = 0.0174448605188;
    msg.psi = 0.294191637617;
    msg.psi_magnetic = 0.914520716198;

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
    msg.setTimeStamp(0.40231215746);
    msg.setSource(13036U);
    msg.setSourceEntity(83U);
    msg.setDestination(58641U);
    msg.setDestinationEntity(13U);
    msg.time = 0.900499487029;
    msg.x = 0.339194300631;
    msg.y = 0.249401034156;
    msg.z = 0.712067296957;
    msg.timestep = 0.5095271071;

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
    msg.setTimeStamp(0.416298965533);
    msg.setSource(21305U);
    msg.setSourceEntity(179U);
    msg.setDestination(29802U);
    msg.setDestinationEntity(177U);
    msg.time = 0.817389246112;
    msg.x = 0.319471822009;
    msg.y = 0.442299984732;
    msg.z = 0.828301098561;
    msg.timestep = 0.82785154252;

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
    msg.setTimeStamp(0.230078712361);
    msg.setSource(25739U);
    msg.setSourceEntity(13U);
    msg.setDestination(15524U);
    msg.setDestinationEntity(167U);
    msg.time = 0.229878408712;
    msg.x = 0.905629354328;
    msg.y = 0.445005582791;
    msg.z = 0.881123292461;
    msg.timestep = 0.781885727309;

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
    msg.setTimeStamp(0.859383648554);
    msg.setSource(28520U);
    msg.setSourceEntity(144U);
    msg.setDestination(11601U);
    msg.setDestinationEntity(110U);
    msg.time = 0.0570686605354;
    msg.x = 0.326663037244;
    msg.y = 0.556708083468;
    msg.z = 0.525979654882;

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
    msg.setTimeStamp(0.679583491453);
    msg.setSource(46666U);
    msg.setSourceEntity(206U);
    msg.setDestination(17085U);
    msg.setDestinationEntity(106U);
    msg.time = 0.249041246278;
    msg.x = 0.0305880750878;
    msg.y = 0.318564260783;
    msg.z = 0.0919086022972;

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
    msg.setTimeStamp(0.00534823487354);
    msg.setSource(47525U);
    msg.setSourceEntity(160U);
    msg.setDestination(5961U);
    msg.setDestinationEntity(40U);
    msg.time = 0.593438205893;
    msg.x = 0.591151254412;
    msg.y = 0.0503909143445;
    msg.z = 0.487660404908;

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
    msg.setTimeStamp(0.756582443415);
    msg.setSource(17072U);
    msg.setSourceEntity(106U);
    msg.setDestination(59746U);
    msg.setDestinationEntity(153U);
    msg.time = 0.159489780798;
    msg.x = 0.982769058823;
    msg.y = 0.886602826599;
    msg.z = 0.920221339782;

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
    msg.setTimeStamp(0.0682339346787);
    msg.setSource(57366U);
    msg.setSourceEntity(237U);
    msg.setDestination(783U);
    msg.setDestinationEntity(191U);
    msg.time = 0.656750488715;
    msg.x = 0.974542558726;
    msg.y = 0.355072309176;
    msg.z = 0.579057310772;

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
    msg.setTimeStamp(0.759731281639);
    msg.setSource(5265U);
    msg.setSourceEntity(220U);
    msg.setDestination(20234U);
    msg.setDestinationEntity(81U);
    msg.time = 0.578247441115;
    msg.x = 0.486593713593;
    msg.y = 0.224365932736;
    msg.z = 0.0634356723136;

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
    msg.setTimeStamp(0.57874643957);
    msg.setSource(18436U);
    msg.setSourceEntity(182U);
    msg.setDestination(59218U);
    msg.setDestinationEntity(146U);
    msg.time = 0.785747154098;
    msg.x = 0.588245948244;
    msg.y = 0.356288714965;
    msg.z = 0.203020354066;

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
    msg.setTimeStamp(0.841405535689);
    msg.setSource(25634U);
    msg.setSourceEntity(74U);
    msg.setDestination(10888U);
    msg.setDestinationEntity(10U);
    msg.time = 0.496930132302;
    msg.x = 0.333593043392;
    msg.y = 0.460485295792;
    msg.z = 0.130838472853;

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
    msg.setTimeStamp(0.366386679485);
    msg.setSource(51259U);
    msg.setSourceEntity(128U);
    msg.setDestination(35892U);
    msg.setDestinationEntity(139U);
    msg.time = 0.840920487397;
    msg.x = 0.4038987511;
    msg.y = 0.657170299006;
    msg.z = 0.899484125123;

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
    msg.setTimeStamp(0.50043711646);
    msg.setSource(8079U);
    msg.setSourceEntity(142U);
    msg.setDestination(59319U);
    msg.setDestinationEntity(176U);
    msg.validity = 77U;
    msg.x = 0.525096930702;
    msg.y = 0.997400034222;
    msg.z = 0.0210322935993;

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
    msg.setTimeStamp(0.755194576429);
    msg.setSource(1965U);
    msg.setSourceEntity(92U);
    msg.setDestination(45840U);
    msg.setDestinationEntity(156U);
    msg.validity = 157U;
    msg.x = 0.767359802069;
    msg.y = 0.450380386396;
    msg.z = 0.922015364367;

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
    msg.setTimeStamp(0.731122742034);
    msg.setSource(3798U);
    msg.setSourceEntity(180U);
    msg.setDestination(8763U);
    msg.setDestinationEntity(51U);
    msg.validity = 252U;
    msg.x = 0.789623734953;
    msg.y = 0.714889071073;
    msg.z = 0.527981016177;

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
    msg.setTimeStamp(0.451451478396);
    msg.setSource(43144U);
    msg.setSourceEntity(219U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(32U);
    msg.validity = 179U;
    msg.x = 0.31450137489;
    msg.y = 0.398607782407;
    msg.z = 0.623497941031;

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
    msg.setTimeStamp(0.942462189793);
    msg.setSource(54371U);
    msg.setSourceEntity(40U);
    msg.setDestination(5464U);
    msg.setDestinationEntity(76U);
    msg.validity = 233U;
    msg.x = 0.100316488008;
    msg.y = 0.725318285083;
    msg.z = 0.671087831968;

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
    msg.setTimeStamp(0.0887844941458);
    msg.setSource(20917U);
    msg.setSourceEntity(78U);
    msg.setDestination(63813U);
    msg.setDestinationEntity(196U);
    msg.validity = 222U;
    msg.x = 0.0186190482164;
    msg.y = 0.3642936954;
    msg.z = 0.105781153839;

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
    msg.setTimeStamp(0.0983051443479);
    msg.setSource(18066U);
    msg.setSourceEntity(223U);
    msg.setDestination(28359U);
    msg.setDestinationEntity(66U);
    msg.time = 0.942494887246;
    msg.x = 0.664045767783;
    msg.y = 0.0894554438816;
    msg.z = 0.0913374797675;

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
    msg.setTimeStamp(0.5741744202);
    msg.setSource(41898U);
    msg.setSourceEntity(119U);
    msg.setDestination(6641U);
    msg.setDestinationEntity(127U);
    msg.time = 0.56343353591;
    msg.x = 0.208134239118;
    msg.y = 0.521407642472;
    msg.z = 0.0346901433763;

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
    msg.setTimeStamp(0.561263290816);
    msg.setSource(15864U);
    msg.setSourceEntity(32U);
    msg.setDestination(13699U);
    msg.setDestinationEntity(251U);
    msg.time = 0.31486190078;
    msg.x = 0.919966430169;
    msg.y = 0.497307178545;
    msg.z = 0.115988478315;

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
    msg.setTimeStamp(0.0593313310066);
    msg.setSource(25089U);
    msg.setSourceEntity(184U);
    msg.setDestination(3984U);
    msg.setDestinationEntity(246U);
    msg.validity = 243U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0400421181417;
    tmp_msg_0.beam_height = 0.544202574056;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.777836670487;

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
    msg.setTimeStamp(0.15217699425);
    msg.setSource(50214U);
    msg.setSourceEntity(240U);
    msg.setDestination(22265U);
    msg.setDestinationEntity(105U);
    msg.validity = 181U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.955348072971;
    tmp_msg_0.y = 0.183549431308;
    tmp_msg_0.z = 0.89722080652;
    tmp_msg_0.phi = 0.274949008596;
    tmp_msg_0.theta = 0.0919201228343;
    tmp_msg_0.psi = 0.137174612674;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.48513637374;
    tmp_msg_1.beam_height = 0.474954213777;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.430706037908;

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
    msg.setTimeStamp(0.977865947282);
    msg.setSource(41658U);
    msg.setSourceEntity(148U);
    msg.setDestination(49399U);
    msg.setDestinationEntity(170U);
    msg.validity = 72U;
    msg.value = 0.579002892069;

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
    msg.setTimeStamp(0.171652813154);
    msg.setSource(56374U);
    msg.setSourceEntity(61U);
    msg.setDestination(65137U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0543764104719;

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
    msg.setTimeStamp(0.224445292236);
    msg.setSource(12598U);
    msg.setSourceEntity(138U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(77U);
    msg.value = 0.342313829872;

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
    msg.setTimeStamp(0.0752608406974);
    msg.setSource(997U);
    msg.setSourceEntity(42U);
    msg.setDestination(34092U);
    msg.setDestinationEntity(224U);
    msg.value = 0.669228224474;

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
    msg.setTimeStamp(0.00057863047689);
    msg.setSource(59458U);
    msg.setSourceEntity(48U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(204U);
    msg.value = 0.102251483015;

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
    msg.setTimeStamp(0.226547564871);
    msg.setSource(40264U);
    msg.setSourceEntity(13U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(15U);
    msg.value = 0.928800679911;

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
    msg.setTimeStamp(0.222804754193);
    msg.setSource(61309U);
    msg.setSourceEntity(56U);
    msg.setDestination(7861U);
    msg.setDestinationEntity(161U);
    msg.value = 0.505192681782;

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
    msg.setTimeStamp(0.350551962557);
    msg.setSource(34534U);
    msg.setSourceEntity(122U);
    msg.setDestination(17464U);
    msg.setDestinationEntity(182U);
    msg.value = 0.293916949479;

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
    msg.setTimeStamp(0.298959836915);
    msg.setSource(13996U);
    msg.setSourceEntity(29U);
    msg.setDestination(50766U);
    msg.setDestinationEntity(216U);
    msg.value = 0.434796017084;

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
    msg.setTimeStamp(0.214388438474);
    msg.setSource(56051U);
    msg.setSourceEntity(103U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(99U);
    msg.value = 0.92140308678;

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
    msg.setTimeStamp(0.432394896202);
    msg.setSource(63189U);
    msg.setSourceEntity(146U);
    msg.setDestination(14188U);
    msg.setDestinationEntity(181U);
    msg.value = 0.273029494356;

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
    msg.setTimeStamp(0.701571100187);
    msg.setSource(25627U);
    msg.setSourceEntity(119U);
    msg.setDestination(55932U);
    msg.setDestinationEntity(183U);
    msg.value = 0.466526831474;

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
    msg.setTimeStamp(0.634974606876);
    msg.setSource(63614U);
    msg.setSourceEntity(73U);
    msg.setDestination(61238U);
    msg.setDestinationEntity(169U);
    msg.value = 0.752693833868;

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
    msg.setTimeStamp(0.612806647541);
    msg.setSource(57411U);
    msg.setSourceEntity(44U);
    msg.setDestination(63544U);
    msg.setDestinationEntity(51U);
    msg.value = 0.215539390251;

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
    msg.setTimeStamp(0.649956030116);
    msg.setSource(29847U);
    msg.setSourceEntity(38U);
    msg.setDestination(42243U);
    msg.setDestinationEntity(238U);
    msg.value = 0.283129443369;

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
    msg.setTimeStamp(0.876840627072);
    msg.setSource(28426U);
    msg.setSourceEntity(214U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(196U);
    msg.value = 0.491594260678;

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
    msg.setTimeStamp(0.182375937068);
    msg.setSource(27613U);
    msg.setSourceEntity(61U);
    msg.setDestination(17740U);
    msg.setDestinationEntity(79U);
    msg.value = 0.176612497864;

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
    msg.setTimeStamp(0.796172380675);
    msg.setSource(11882U);
    msg.setSourceEntity(180U);
    msg.setDestination(15858U);
    msg.setDestinationEntity(183U);
    msg.value = 0.297653880646;

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
    msg.setTimeStamp(0.758813900034);
    msg.setSource(4279U);
    msg.setSourceEntity(51U);
    msg.setDestination(42721U);
    msg.setDestinationEntity(84U);
    msg.value = 0.970091327291;

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
    msg.setTimeStamp(0.752212358424);
    msg.setSource(35447U);
    msg.setSourceEntity(19U);
    msg.setDestination(2947U);
    msg.setDestinationEntity(127U);
    msg.value = 0.701909946;

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
    msg.setTimeStamp(0.979177827315);
    msg.setSource(28435U);
    msg.setSourceEntity(43U);
    msg.setDestination(58651U);
    msg.setDestinationEntity(207U);
    msg.value = 0.311813840967;

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
    msg.setTimeStamp(0.697421857002);
    msg.setSource(18354U);
    msg.setSourceEntity(248U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(66U);
    msg.value = 0.797657517638;

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
    msg.setTimeStamp(0.968143242873);
    msg.setSource(29979U);
    msg.setSourceEntity(214U);
    msg.setDestination(6089U);
    msg.setDestinationEntity(47U);
    msg.value = 0.336779035414;

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
    msg.setTimeStamp(0.801205956604);
    msg.setSource(42408U);
    msg.setSourceEntity(17U);
    msg.setDestination(53492U);
    msg.setDestinationEntity(232U);
    msg.value = 0.061614965862;

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
    msg.setTimeStamp(0.650037377319);
    msg.setSource(17892U);
    msg.setSourceEntity(240U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(205U);
    msg.value = 0.849154820551;

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
    msg.setTimeStamp(0.0623576250547);
    msg.setSource(5708U);
    msg.setSourceEntity(91U);
    msg.setDestination(20386U);
    msg.setDestinationEntity(9U);
    msg.direction = 0.587754433151;
    msg.speed = 0.952164674808;
    msg.turbulence = 0.8441278111;

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
    msg.setTimeStamp(0.753751767497);
    msg.setSource(23343U);
    msg.setSourceEntity(213U);
    msg.setDestination(57227U);
    msg.setDestinationEntity(9U);
    msg.direction = 0.419991806618;
    msg.speed = 0.784706167116;
    msg.turbulence = 0.834621984659;

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
    msg.setTimeStamp(0.368935389921);
    msg.setSource(9222U);
    msg.setSourceEntity(94U);
    msg.setDestination(48311U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.655268310162;
    msg.speed = 0.0480252521364;
    msg.turbulence = 0.926792900403;

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
    msg.setTimeStamp(0.123060020992);
    msg.setSource(50219U);
    msg.setSourceEntity(128U);
    msg.setDestination(4412U);
    msg.setDestinationEntity(37U);
    msg.value = 0.345616836036;

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
    msg.setTimeStamp(0.652800433099);
    msg.setSource(1738U);
    msg.setSourceEntity(46U);
    msg.setDestination(41580U);
    msg.setDestinationEntity(224U);
    msg.value = 0.872574315347;

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
    msg.setTimeStamp(0.609088615773);
    msg.setSource(41204U);
    msg.setSourceEntity(91U);
    msg.setDestination(45813U);
    msg.setDestinationEntity(120U);
    msg.value = 0.403199566752;

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
    msg.setTimeStamp(0.712671576122);
    msg.setSource(15548U);
    msg.setSourceEntity(105U);
    msg.setDestination(24622U);
    msg.setDestinationEntity(134U);
    msg.value.assign("ZWINHFUXBRDFRUDZSZEEZBGWLDITALHPPYRYMBQVOTUJQDRZBVXIRBGFNCSQWQOXEPAYHZUVZNVBWCSMVGWOPYEUCXCIAQLYTAQKFMFYOOJOADOLUKVRHJRGFIEPBGIMBDCECRLLHNJVOIWMAKNWAGUKQLAXZHJZYJKGLCXTRKEW");

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
    msg.setTimeStamp(0.131721832845);
    msg.setSource(17475U);
    msg.setSourceEntity(3U);
    msg.setDestination(43529U);
    msg.setDestinationEntity(180U);
    msg.value.assign("XSXUWVLUQCDWURYGSZUCZHKESZOUOIFPDMBWPMRIUGYAZHQTSESQSININVWBJELBAZVGHBFTMSVSVGPYLOHQLMBYGNRNDYONUUBHCRGJHGXEUQJVVPATTXMEAJKXXDFLPTZVCQGAKYCHKIWZXWGCEWBFQXPKBWAJFCAIYJJERKAZKLARDQCBJOTXINPFAULLCSLFZPMERSDNPOONJIRZTYLVFWDTQCOMRXJMRFPHWT");

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
    msg.setTimeStamp(0.275892868127);
    msg.setSource(2741U);
    msg.setSourceEntity(15U);
    msg.setDestination(18803U);
    msg.setDestinationEntity(228U);
    msg.value.assign("WVMIOHBNAGBJWVYGQCXUTNGGLKWYROBYRKSMLRTNEYQXJKJIDVKAFAWUQORNCCZMLGKJTNYTZFQOIFOQVMTOG");

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
    msg.setTimeStamp(0.538179936646);
    msg.setSource(2677U);
    msg.setSourceEntity(30U);
    msg.setDestination(51444U);
    msg.setDestinationEntity(151U);
    const char tmp_msg_0[] = {-116, 17, -57, -42, 38, 47, 75, 72, -89, 40, 70, -11, 68, -38, -64, 15, -81, 54, -45, -97, 37, 51, 48, -22, -114, 47, 98, -22, -11, -89, -55, 117, -58, -38, -119, -87, -72, -65, 80, 76, 81, 83, 95, -70, 66, -5, 73, 118, -99, 15, -24, 96, -104, 64, -67, 7, 59, 52, 115, 74, 104, 97, 91, -57, 39, -86, 78, 23, 12, 8, 54, -116, -39, 108, -114, -13, -59, 102, -125, 24, -58, -24, 101, 88, 46, -99, -71, 57, 92, -48, -28, 57, 40, 1, 57, -41, -47, 61, 26, -6, -58, -122, -4, -14, -8, 57, 43, 1, 81, -80, -44, -62, -34, -4, 117, 50, 58, 5, -113, 117, 114, -1, 67, 123, 41, 20, -109, -36, 8, -17, -99, -73, -94, -61, 97, 10, -17, 52, 90, -100, 97, 50, -23, -127, 86, -15, 21, 100, 19, 76, -109, 58, 12, -104, -40, -2, 42, -54, 122, 43, 101, -36, 21, 9, -90, -22, 69, -125, -84, 115, 30, -65, -92, 107, 96, -98, -92, -40, 104, -114, -29, -27, -18, 70, -6, 45, 73, -94, -32, -34, -41, 51, -39, -115, 121};
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
    msg.setTimeStamp(0.115417227411);
    msg.setSource(60999U);
    msg.setSourceEntity(228U);
    msg.setDestination(34088U);
    msg.setDestinationEntity(239U);
    const char tmp_msg_0[] = {126, 52, 76, 1, -35, -71, -27, -20, 97, -37, -101, 18, -117, 110, 56, -36, -80, 79, 31, 60, -51, 55, 61, -60, 36, -114, 65, -24, -88, 99, -3, -86, 85, 97, -57, 50, 102, -27, 116, 114, -22, -55, -47, 69, -63, 119, -28, -116, -25, 63, -23, -3, 85, 69, -70, 95, -124, 87, 78, 125, 3, -59, -77, -26, -126, 96, -97, -116, 12, 7, 124, -71, -9, 53, 79, 7, -24, -91, -1, -45, 28, 23, -72, -98, -48, 71, 2, 117, -106, -114, -15, 76, 48, -16, 76, 51, -109, -4, 45, 54, 98, 125, -68, 81, 107, 109, -53, 44, -4, 55, 95, -57, 27, 43, -99, 104, -11, -38, 0, 12, -67, -114, -117, -42, 20, 0, -43, -33, -67, 103, 77, 52, -79, -85, 33, 42, 18, 74, -71, -26, 100, -53, 29, 89, 30, 118, 36, 33, 115, -1, 13, -110, -25, 75, 55, -101, 56, -124, 75, -108, 30, -47, 73};
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
    msg.setTimeStamp(0.592946727879);
    msg.setSource(27056U);
    msg.setSourceEntity(203U);
    msg.setDestination(11611U);
    msg.setDestinationEntity(53U);
    const char tmp_msg_0[] = {28, 51, -89, 58, -72, -34, 22, -115, -24, 106, 89, -20, -8, 16, -124, -124, 123, -91, -66, 125, -107, -53, -127, -90, -28, -74, -10, 52, 122, 6, 88, -40, 59};
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
    msg.setTimeStamp(0.711996218879);
    msg.setSource(19738U);
    msg.setSourceEntity(212U);
    msg.setDestination(11225U);
    msg.setDestinationEntity(128U);
    msg.type = 222U;
    msg.frequency = 4122535177U;
    msg.min_range = 7486U;
    msg.max_range = 10286U;
    msg.bits_per_point = 88U;
    msg.scale_factor = 0.516792981758;
    const char tmp_msg_0[] = {-6, -65, -124, 117, -112, 65, -50, 41, 31, -52, -21, 99, -85, 66, -37, 76, 87, 74, 51, -127, 23, -28, -65, -80, -71, -73, 125, 50, 58, -18, 9, -99, 125, 114, -15, -119, -54, 97, 45, 25, 116, -27, 40, -28, -7, -41, -57, -25, 66, -84, 36, -79, 77, -115, -32, -42, 30};
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
    msg.setTimeStamp(0.270452887347);
    msg.setSource(37911U);
    msg.setSourceEntity(185U);
    msg.setDestination(30369U);
    msg.setDestinationEntity(146U);
    msg.type = 66U;
    msg.frequency = 1342822811U;
    msg.min_range = 18900U;
    msg.max_range = 41292U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.612467500438;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.661780900648;
    tmp_msg_0.beam_height = 0.0300976237183;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {121, 16, -2, 39, -96, 101, 68, 100, 95, -81, -67, 113, 9, -76, -86, -27, 96, 31, -37, 34, 25, 42, 118, -3, -82, -37, 11, -38, -2, -71, -64, -121, -72, -75, 122, -30, -38, -66, 110, -34, -74, -19, 110, 54, -67, -27, -59, -105, 26, 64, 98, 53, 8, -105, -54, -12, -106, -125, 20, -56, 65, -117, -78, 5, -111, -102, 2, -101, 70, 39, 95, -62, -114, -61, 45, 69, 51, 3, 87, -120, 113, -24, 84, 50, 65, -73, 94, 73, -69, 50, 108, 118, 55, -47, -79, -24, -17, -30, 81, 79, 20, -89, -53, -36, 30, -14, -36, -81, 39, -5, 26, 106, -116, 39, -106, -73, 45, -32, -104, -42, -4, -116, 2, 39, 41, 93, -120, -69, -98, 121, -120, 113, 9, 83, -55, 71, -81, -126, -92, 114, 37, 10, -38, -19, 115, 66, -126, 87, -52, -76, 51, -109, -7, -41, -38, -109, -5, 85, 57, 111, -41, 22, -93, 75, -35, -12, 56, -108, -78, -84, 21, 87, -115, -104, -23, -20, -78, -28, -36, -98, -76, -107, -45, 9, -56, 106, -120, -115, -33, 43, 91, -95, 62, -28};
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
    msg.setTimeStamp(0.756440735866);
    msg.setSource(33138U);
    msg.setSourceEntity(78U);
    msg.setDestination(31390U);
    msg.setDestinationEntity(96U);
    msg.type = 98U;
    msg.frequency = 3142389769U;
    msg.min_range = 60049U;
    msg.max_range = 43657U;
    msg.bits_per_point = 20U;
    msg.scale_factor = 0.922016317802;
    const char tmp_msg_0[] = {100, 89, -67, -106, -68, -20, 33, -23, 50, 1, -19, -113, 89, 75, 3, -42, -87, 109, -23, -11, -121, -123, -78, -13, -36, -56, -103, 59, -83, 78, 111, 7, -109, 58, 0, -109, 126, 36, 77, 118, -111, -79, 107, -18, 87, 125, -24, 17, -19, 58, 7, 108, 53, 56, 105, 40, -63, -23, 44, 98, -36, -35, -28, 15, -43, -109, 63, -35, 20, 117, -68, 36, 22, -91, 43, 13, 7, -11, 92, -1, -40, 89, -41, 99, -18, 82, -23, -60, 79, -105, 4, 34, -33, 45, 13, 33, 75, 38, 72, 59, 55, 106, 45, 98, -117, 3, -123, -114, -123, -26, 70, 31, -57, 2, -91, -66, 90, -114, 115};
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
    msg.setTimeStamp(0.465413776597);
    msg.setSource(638U);
    msg.setSourceEntity(179U);
    msg.setDestination(39752U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.194989152459);
    msg.setSource(54597U);
    msg.setSourceEntity(199U);
    msg.setDestination(60820U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.195248124529);
    msg.setSource(65095U);
    msg.setSourceEntity(22U);
    msg.setDestination(77U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.636935322566);
    msg.setSource(31914U);
    msg.setSourceEntity(199U);
    msg.setDestination(46874U);
    msg.setDestinationEntity(137U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.320449842062);
    msg.setSource(38474U);
    msg.setSourceEntity(32U);
    msg.setDestination(58870U);
    msg.setDestinationEntity(144U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.578132657479);
    msg.setSource(28371U);
    msg.setSourceEntity(19U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(79U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.10218226279);
    msg.setSource(31600U);
    msg.setSourceEntity(133U);
    msg.setDestination(38085U);
    msg.setDestinationEntity(163U);
    msg.value = 0.742154389785;
    msg.confidence = 0.458684033601;
    msg.opmodes.assign("HHYCMBAULZJCPRQVCUQJXTHQJBTLESLLJPI");

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
    msg.setTimeStamp(0.251892736537);
    msg.setSource(47387U);
    msg.setSourceEntity(44U);
    msg.setDestination(40847U);
    msg.setDestinationEntity(112U);
    msg.value = 0.819400397022;
    msg.confidence = 0.610308232176;
    msg.opmodes.assign("ODONBKYSBVXVROHKKGEABKUWXAQPZRINDDHYLAUDMIVJZSCJJHYECIVFQWDOIMPAEJVANWCMECYZMKGALCLYQFXICAUNXIVZSFDNGGRZWODWAVKUQQOFGDCWPNTVFWHSLRFQNFWZXHYEUVPNJBXROENWDUXTRGTUTRHRYNQJFPKDIMPHBVSFIPELYJLTGBSSHYPHBMOU");

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
    msg.setTimeStamp(0.38849651598);
    msg.setSource(2710U);
    msg.setSourceEntity(235U);
    msg.setDestination(45764U);
    msg.setDestinationEntity(20U);
    msg.value = 0.410190143749;
    msg.confidence = 0.910826174082;
    msg.opmodes.assign("FRQFSEYULGGWZYABTEEIJQZTZBZFHARFLCTUFBFMJJEGMODVKGPWPHIPEGMKUAXYGFEAKHJOTHYWNUKNICXIZWDRTKKKLSWCDLUPPSQAMXHOOAO");

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
    msg.setTimeStamp(0.195357551475);
    msg.setSource(53165U);
    msg.setSourceEntity(114U);
    msg.setDestination(38160U);
    msg.setDestinationEntity(110U);
    msg.itow = 1943993635U;
    msg.lat = 0.439734457683;
    msg.lon = 0.480572049403;
    msg.height_ell = 0.939016253936;
    msg.height_sea = 0.751129367031;
    msg.hacc = 0.631242088666;
    msg.vacc = 0.318838981187;
    msg.vel_n = 0.67342325255;
    msg.vel_e = 0.997697710658;
    msg.vel_d = 0.588847427567;
    msg.speed = 0.734808915499;
    msg.gspeed = 0.147015100415;
    msg.heading = 0.143016072091;
    msg.sacc = 0.999113619591;
    msg.cacc = 0.865413738807;

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
    msg.setTimeStamp(0.0115666475341);
    msg.setSource(39208U);
    msg.setSourceEntity(2U);
    msg.setDestination(29929U);
    msg.setDestinationEntity(69U);
    msg.itow = 3600949158U;
    msg.lat = 0.483947310597;
    msg.lon = 0.586870038426;
    msg.height_ell = 0.402050145174;
    msg.height_sea = 0.676552227968;
    msg.hacc = 0.667796181189;
    msg.vacc = 0.744762774711;
    msg.vel_n = 0.70688770561;
    msg.vel_e = 0.918415390986;
    msg.vel_d = 0.988505529223;
    msg.speed = 0.176329469858;
    msg.gspeed = 0.302182348599;
    msg.heading = 0.964343696561;
    msg.sacc = 0.85575569584;
    msg.cacc = 0.476205761677;

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
    msg.setTimeStamp(0.62256940618);
    msg.setSource(21939U);
    msg.setSourceEntity(106U);
    msg.setDestination(8491U);
    msg.setDestinationEntity(106U);
    msg.itow = 4028749396U;
    msg.lat = 0.643794943719;
    msg.lon = 0.273645979831;
    msg.height_ell = 0.523938071076;
    msg.height_sea = 0.351717710866;
    msg.hacc = 0.469894088566;
    msg.vacc = 0.601603570418;
    msg.vel_n = 0.909440410891;
    msg.vel_e = 0.685291769235;
    msg.vel_d = 0.673573119916;
    msg.speed = 0.617412406602;
    msg.gspeed = 0.735804882535;
    msg.heading = 0.352861430229;
    msg.sacc = 0.378481459019;
    msg.cacc = 0.27510297081;

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
    msg.setTimeStamp(0.652146289464);
    msg.setSource(2508U);
    msg.setSourceEntity(100U);
    msg.setDestination(119U);
    msg.setDestinationEntity(213U);
    msg.id = 143U;
    msg.value = 0.0943827120686;

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
    msg.setTimeStamp(0.13214698577);
    msg.setSource(57959U);
    msg.setSourceEntity(166U);
    msg.setDestination(56734U);
    msg.setDestinationEntity(128U);
    msg.id = 96U;
    msg.value = 0.389447355461;

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
    msg.setTimeStamp(0.0373693903983);
    msg.setSource(4704U);
    msg.setSourceEntity(162U);
    msg.setDestination(11103U);
    msg.setDestinationEntity(203U);
    msg.id = 184U;
    msg.value = 0.59374804438;

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
    msg.setTimeStamp(0.971145590987);
    msg.setSource(61729U);
    msg.setSourceEntity(64U);
    msg.setDestination(53226U);
    msg.setDestinationEntity(241U);
    msg.x = 0.717057694919;
    msg.y = 0.120348896373;
    msg.z = 0.601636734072;
    msg.phi = 0.862402525609;
    msg.theta = 0.0105387054635;
    msg.psi = 0.581460527773;

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
    msg.setTimeStamp(0.38331810415);
    msg.setSource(45228U);
    msg.setSourceEntity(5U);
    msg.setDestination(7399U);
    msg.setDestinationEntity(211U);
    msg.x = 0.18287660305;
    msg.y = 0.425869059125;
    msg.z = 0.717316262167;
    msg.phi = 0.417804287655;
    msg.theta = 0.869523961565;
    msg.psi = 0.390805966223;

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
    msg.setTimeStamp(0.813625802012);
    msg.setSource(49864U);
    msg.setSourceEntity(95U);
    msg.setDestination(34773U);
    msg.setDestinationEntity(35U);
    msg.x = 0.606333344283;
    msg.y = 0.842682557603;
    msg.z = 0.43623777534;
    msg.phi = 0.204931777971;
    msg.theta = 0.114592783866;
    msg.psi = 0.171040729728;

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
    msg.setTimeStamp(0.34734830181);
    msg.setSource(30720U);
    msg.setSourceEntity(252U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.69259681056;
    msg.beam_height = 0.43817517963;

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
    msg.setTimeStamp(0.104776719886);
    msg.setSource(34840U);
    msg.setSourceEntity(216U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(36U);
    msg.beam_width = 0.683926359295;
    msg.beam_height = 0.72722750024;

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
    msg.setTimeStamp(0.49746884665);
    msg.setSource(51381U);
    msg.setSourceEntity(150U);
    msg.setDestination(19052U);
    msg.setDestinationEntity(200U);
    msg.beam_width = 0.709550898361;
    msg.beam_height = 0.604456615132;

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
    msg.setTimeStamp(0.113832860972);
    msg.setSource(16365U);
    msg.setSourceEntity(10U);
    msg.setDestination(28368U);
    msg.setDestinationEntity(44U);
    msg.sane = 32U;

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
    msg.setTimeStamp(0.794107354382);
    msg.setSource(59647U);
    msg.setSourceEntity(176U);
    msg.setDestination(873U);
    msg.setDestinationEntity(182U);
    msg.sane = 105U;

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
    msg.setTimeStamp(0.0416831521254);
    msg.setSource(42893U);
    msg.setSourceEntity(158U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(125U);
    msg.sane = 147U;

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
    msg.setTimeStamp(0.758234925587);
    msg.setSource(51871U);
    msg.setSourceEntity(82U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0343966854241;

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
    msg.setTimeStamp(0.017908689616);
    msg.setSource(24241U);
    msg.setSourceEntity(148U);
    msg.setDestination(44523U);
    msg.setDestinationEntity(128U);
    msg.value = 0.300453529968;

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
    msg.setTimeStamp(0.127667088561);
    msg.setSource(50712U);
    msg.setSourceEntity(68U);
    msg.setDestination(62643U);
    msg.setDestinationEntity(217U);
    msg.value = 0.965980695159;

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
    msg.setTimeStamp(0.804018882731);
    msg.setSource(57400U);
    msg.setSourceEntity(99U);
    msg.setDestination(27024U);
    msg.setDestinationEntity(72U);
    msg.value = 0.514791963903;

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
    msg.setTimeStamp(0.413519455596);
    msg.setSource(54022U);
    msg.setSourceEntity(240U);
    msg.setDestination(61581U);
    msg.setDestinationEntity(37U);
    msg.value = 0.0477779315874;

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
    msg.setTimeStamp(0.0727934324632);
    msg.setSource(14435U);
    msg.setSourceEntity(104U);
    msg.setDestination(17413U);
    msg.setDestinationEntity(78U);
    msg.value = 0.602211643377;

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
    msg.setTimeStamp(0.904501337959);
    msg.setSource(56628U);
    msg.setSourceEntity(155U);
    msg.setDestination(40051U);
    msg.setDestinationEntity(29U);
    msg.value = 0.56556610809;

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
    msg.setTimeStamp(0.392104376143);
    msg.setSource(47891U);
    msg.setSourceEntity(161U);
    msg.setDestination(25830U);
    msg.setDestinationEntity(160U);
    msg.value = 0.0935239998284;

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
    msg.setTimeStamp(0.74246063237);
    msg.setSource(1853U);
    msg.setSourceEntity(218U);
    msg.setDestination(50087U);
    msg.setDestinationEntity(145U);
    msg.value = 0.92307074749;

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
    msg.setTimeStamp(0.0102742415192);
    msg.setSource(42032U);
    msg.setSourceEntity(181U);
    msg.setDestination(21463U);
    msg.setDestinationEntity(230U);
    msg.value = 0.718997207259;

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
    msg.setTimeStamp(0.651562116833);
    msg.setSource(50936U);
    msg.setSourceEntity(75U);
    msg.setDestination(49781U);
    msg.setDestinationEntity(201U);
    msg.value = 0.724792292004;

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
    msg.setTimeStamp(0.316042849034);
    msg.setSource(36961U);
    msg.setSourceEntity(76U);
    msg.setDestination(9322U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0288237613792;

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
    msg.setTimeStamp(0.915166443201);
    msg.setSource(48123U);
    msg.setSourceEntity(100U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(239U);
    msg.value = 0.943867884983;

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
    msg.setTimeStamp(0.923911465553);
    msg.setSource(20096U);
    msg.setSourceEntity(32U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(228U);
    msg.value = 0.635520941324;

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
    msg.setTimeStamp(0.264935967559);
    msg.setSource(64248U);
    msg.setSourceEntity(167U);
    msg.setDestination(37810U);
    msg.setDestinationEntity(212U);
    msg.value = 0.193543462566;

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
    msg.setTimeStamp(0.806163161378);
    msg.setSource(4963U);
    msg.setSourceEntity(68U);
    msg.setDestination(10009U);
    msg.setDestinationEntity(165U);
    msg.value = 0.292247929388;

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
    msg.setTimeStamp(0.245695478589);
    msg.setSource(12537U);
    msg.setSourceEntity(134U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(188U);
    msg.value = 0.398461265231;

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
    msg.setTimeStamp(0.378958710784);
    msg.setSource(55117U);
    msg.setSourceEntity(15U);
    msg.setDestination(33320U);
    msg.setDestinationEntity(32U);
    msg.value = 0.390688620119;

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
    msg.setTimeStamp(0.0646434176535);
    msg.setSource(15964U);
    msg.setSourceEntity(86U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(156U);
    msg.value = 0.736017847211;

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
    msg.setTimeStamp(0.31797312695);
    msg.setSource(60271U);
    msg.setSourceEntity(118U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(171U);
    msg.value = 0.52100743201;

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
    msg.setTimeStamp(0.98309178784);
    msg.setSource(49944U);
    msg.setSourceEntity(166U);
    msg.setDestination(39175U);
    msg.setDestinationEntity(236U);
    msg.value = 0.326675973229;

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
    msg.setTimeStamp(0.359967998206);
    msg.setSource(10942U);
    msg.setSourceEntity(100U);
    msg.setDestination(17284U);
    msg.setDestinationEntity(159U);
    msg.value = 0.97140555748;

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
    msg.setTimeStamp(0.773756320154);
    msg.setSource(16558U);
    msg.setSourceEntity(224U);
    msg.setDestination(54301U);
    msg.setDestinationEntity(229U);
    msg.value = 0.91543313466;

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
    msg.setTimeStamp(0.53475922907);
    msg.setSource(38914U);
    msg.setSourceEntity(155U);
    msg.setDestination(53074U);
    msg.setDestinationEntity(167U);
    msg.value = 0.584859482845;

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
    msg.setTimeStamp(0.176780714721);
    msg.setSource(61973U);
    msg.setSourceEntity(93U);
    msg.setDestination(2675U);
    msg.setDestinationEntity(176U);
    msg.validity = 3283U;
    msg.type = 160U;
    msg.tow = 4277573875U;
    msg.base_lat = 0.775320449266;
    msg.base_lon = 0.659724061789;
    msg.base_height = 0.684401412773;
    msg.n = 0.921981687522;
    msg.e = 0.694053227968;
    msg.d = 0.40058907308;
    msg.v_n = 0.116341430927;
    msg.v_e = 0.754936545501;
    msg.v_d = 0.955425378146;
    msg.satellites = 147U;
    msg.iar_hyp = 32733U;
    msg.iar_ratio = 0.454907508039;

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
    msg.setTimeStamp(0.757007892444);
    msg.setSource(28329U);
    msg.setSourceEntity(64U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(117U);
    msg.validity = 29930U;
    msg.type = 176U;
    msg.tow = 3595515062U;
    msg.base_lat = 0.531962239678;
    msg.base_lon = 0.700403938513;
    msg.base_height = 0.288625548277;
    msg.n = 0.831441801256;
    msg.e = 0.238036477228;
    msg.d = 0.0362127941641;
    msg.v_n = 0.7360161598;
    msg.v_e = 0.41691320038;
    msg.v_d = 0.692620033387;
    msg.satellites = 216U;
    msg.iar_hyp = 47328U;
    msg.iar_ratio = 0.876094680499;

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
    msg.setTimeStamp(0.813724335143);
    msg.setSource(12118U);
    msg.setSourceEntity(86U);
    msg.setDestination(63116U);
    msg.setDestinationEntity(242U);
    msg.validity = 61876U;
    msg.type = 100U;
    msg.tow = 3097262885U;
    msg.base_lat = 0.0160911604927;
    msg.base_lon = 0.960008239133;
    msg.base_height = 0.23221767462;
    msg.n = 0.305292160924;
    msg.e = 0.117532947718;
    msg.d = 0.949216035965;
    msg.v_n = 0.853426763354;
    msg.v_e = 0.0844124704104;
    msg.v_d = 0.479071819951;
    msg.satellites = 78U;
    msg.iar_hyp = 57644U;
    msg.iar_ratio = 0.424438037782;

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
    msg.setTimeStamp(0.684438628518);
    msg.setSource(7965U);
    msg.setSourceEntity(150U);
    msg.setDestination(18153U);
    msg.setDestinationEntity(95U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.438696251247;
    tmp_msg_0.lon = 0.79849160535;
    tmp_msg_0.height = 0.555353311719;
    tmp_msg_0.x = 0.960087232917;
    tmp_msg_0.y = 0.392372857031;
    tmp_msg_0.z = 0.948869253992;
    tmp_msg_0.phi = 0.00787322318946;
    tmp_msg_0.theta = 0.112133925959;
    tmp_msg_0.psi = 0.0536856193978;
    tmp_msg_0.u = 0.0198254623481;
    tmp_msg_0.v = 0.302972530062;
    tmp_msg_0.w = 0.238825309899;
    tmp_msg_0.vx = 0.396367828973;
    tmp_msg_0.vy = 0.571000152266;
    tmp_msg_0.vz = 0.538006836685;
    tmp_msg_0.p = 0.969464243365;
    tmp_msg_0.q = 0.826688758719;
    tmp_msg_0.r = 0.00116254262435;
    tmp_msg_0.depth = 0.464317354866;
    tmp_msg_0.alt = 0.213057902984;
    msg.state.set(tmp_msg_0);
    msg.type = 110U;

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
    msg.setTimeStamp(0.0840672394573);
    msg.setSource(43570U);
    msg.setSourceEntity(108U);
    msg.setDestination(52556U);
    msg.setDestinationEntity(112U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.984534040934;
    tmp_msg_0.lon = 0.219984529228;
    tmp_msg_0.height = 0.572879492382;
    tmp_msg_0.x = 0.913528028265;
    tmp_msg_0.y = 0.854596144501;
    tmp_msg_0.z = 0.0289552310354;
    tmp_msg_0.phi = 0.673783664551;
    tmp_msg_0.theta = 0.282530800854;
    tmp_msg_0.psi = 0.0856833628741;
    tmp_msg_0.u = 0.242303432225;
    tmp_msg_0.v = 0.468310603792;
    tmp_msg_0.w = 0.508197953672;
    tmp_msg_0.vx = 0.962482953819;
    tmp_msg_0.vy = 0.915106092147;
    tmp_msg_0.vz = 0.172343024028;
    tmp_msg_0.p = 0.685884531356;
    tmp_msg_0.q = 0.521288617209;
    tmp_msg_0.r = 0.686806461544;
    tmp_msg_0.depth = 0.921115859728;
    tmp_msg_0.alt = 0.383567083543;
    msg.state.set(tmp_msg_0);
    msg.type = 104U;

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
    msg.setTimeStamp(0.699474951761);
    msg.setSource(62846U);
    msg.setSourceEntity(25U);
    msg.setDestination(34421U);
    msg.setDestinationEntity(7U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.801745633251;
    tmp_msg_0.lon = 0.493815940105;
    tmp_msg_0.height = 0.578886376132;
    tmp_msg_0.x = 0.666444535421;
    tmp_msg_0.y = 0.0490207737233;
    tmp_msg_0.z = 0.0352950873478;
    tmp_msg_0.phi = 0.105283059555;
    tmp_msg_0.theta = 0.590851086929;
    tmp_msg_0.psi = 0.976770536809;
    tmp_msg_0.u = 0.947974721493;
    tmp_msg_0.v = 0.000219040206609;
    tmp_msg_0.w = 0.52381849086;
    tmp_msg_0.vx = 0.76013462318;
    tmp_msg_0.vy = 0.136207124413;
    tmp_msg_0.vz = 0.45047891566;
    tmp_msg_0.p = 0.0403920601335;
    tmp_msg_0.q = 0.641748860447;
    tmp_msg_0.r = 0.333565485034;
    tmp_msg_0.depth = 0.796909100182;
    tmp_msg_0.alt = 0.0117182154263;
    msg.state.set(tmp_msg_0);
    msg.type = 107U;

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
    msg.setTimeStamp(0.544740433442);
    msg.setSource(17451U);
    msg.setSourceEntity(242U);
    msg.setDestination(65278U);
    msg.setDestinationEntity(185U);
    msg.value = 0.142000270101;

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
    msg.setTimeStamp(0.511485786244);
    msg.setSource(56568U);
    msg.setSourceEntity(168U);
    msg.setDestination(54077U);
    msg.setDestinationEntity(8U);
    msg.value = 0.779702922349;

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
    msg.setTimeStamp(0.894771997138);
    msg.setSource(4946U);
    msg.setSourceEntity(128U);
    msg.setDestination(57967U);
    msg.setDestinationEntity(173U);
    msg.value = 0.949475787937;

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
    msg.setTimeStamp(0.387207923175);
    msg.setSource(55837U);
    msg.setSourceEntity(57U);
    msg.setDestination(44878U);
    msg.setDestinationEntity(189U);
    msg.value = 0.141252576183;

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
    msg.setTimeStamp(0.775555430666);
    msg.setSource(22999U);
    msg.setSourceEntity(141U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(67U);
    msg.value = 0.593264514739;

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
    msg.setTimeStamp(0.379364154819);
    msg.setSource(36500U);
    msg.setSourceEntity(200U);
    msg.setDestination(60696U);
    msg.setDestinationEntity(239U);
    msg.value = 0.257249591013;

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
    msg.setTimeStamp(0.111574951163);
    msg.setSource(46032U);
    msg.setSourceEntity(45U);
    msg.setDestination(60376U);
    msg.setDestinationEntity(189U);
    msg.value = 0.258958841812;

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
    msg.setTimeStamp(0.157466128183);
    msg.setSource(42769U);
    msg.setSourceEntity(164U);
    msg.setDestination(13620U);
    msg.setDestinationEntity(89U);
    msg.value = 0.319941710423;

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
    msg.setTimeStamp(0.267980142264);
    msg.setSource(49958U);
    msg.setSourceEntity(134U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(27U);
    msg.value = 0.941220513183;

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
    msg.setTimeStamp(0.977582003706);
    msg.setSource(37893U);
    msg.setSourceEntity(154U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(153U);
    msg.value = 0.637260916108;

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
    msg.setTimeStamp(0.873449704438);
    msg.setSource(8442U);
    msg.setSourceEntity(5U);
    msg.setDestination(1449U);
    msg.setDestinationEntity(183U);
    msg.value = 0.273839232615;

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
    msg.setTimeStamp(0.00487386219182);
    msg.setSource(30963U);
    msg.setSourceEntity(142U);
    msg.setDestination(855U);
    msg.setDestinationEntity(76U);
    msg.value = 0.168961825035;

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
    msg.setTimeStamp(0.117363100065);
    msg.setSource(55388U);
    msg.setSourceEntity(222U);
    msg.setDestination(17513U);
    msg.setDestinationEntity(49U);
    msg.value = 0.973084661468;

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
    msg.setTimeStamp(0.501819738359);
    msg.setSource(22407U);
    msg.setSourceEntity(243U);
    msg.setDestination(30178U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0606047229494;

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
    msg.setTimeStamp(0.495925093487);
    msg.setSource(62809U);
    msg.setSourceEntity(98U);
    msg.setDestination(5996U);
    msg.setDestinationEntity(237U);
    msg.value = 0.216464873396;

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
    msg.setTimeStamp(0.355325391708);
    msg.setSource(35224U);
    msg.setSourceEntity(141U);
    msg.setDestination(36402U);
    msg.setDestinationEntity(21U);
    msg.id = 47U;
    msg.zoom = 55U;
    msg.action = 29U;

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
    msg.setTimeStamp(0.84155425863);
    msg.setSource(40024U);
    msg.setSourceEntity(173U);
    msg.setDestination(64673U);
    msg.setDestinationEntity(223U);
    msg.id = 110U;
    msg.zoom = 245U;
    msg.action = 27U;

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
    msg.setTimeStamp(0.271323597523);
    msg.setSource(57854U);
    msg.setSourceEntity(76U);
    msg.setDestination(58207U);
    msg.setDestinationEntity(25U);
    msg.id = 113U;
    msg.zoom = 177U;
    msg.action = 87U;

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
    msg.setTimeStamp(0.350392644106);
    msg.setSource(56038U);
    msg.setSourceEntity(163U);
    msg.setDestination(31345U);
    msg.setDestinationEntity(69U);
    msg.id = 23U;
    msg.value = 0.506667926577;

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
    msg.setTimeStamp(0.64320130685);
    msg.setSource(46446U);
    msg.setSourceEntity(87U);
    msg.setDestination(59544U);
    msg.setDestinationEntity(36U);
    msg.id = 49U;
    msg.value = 0.646811469175;

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
    msg.setTimeStamp(0.279023954578);
    msg.setSource(24649U);
    msg.setSourceEntity(12U);
    msg.setDestination(59299U);
    msg.setDestinationEntity(81U);
    msg.id = 147U;
    msg.value = 0.139567491982;

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
    msg.setTimeStamp(0.437042523732);
    msg.setSource(23586U);
    msg.setSourceEntity(90U);
    msg.setDestination(56814U);
    msg.setDestinationEntity(127U);
    msg.id = 98U;
    msg.value = 0.342122344487;

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
    msg.setTimeStamp(0.471915075493);
    msg.setSource(42750U);
    msg.setSourceEntity(219U);
    msg.setDestination(44214U);
    msg.setDestinationEntity(29U);
    msg.id = 52U;
    msg.value = 0.132754713201;

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
    msg.setTimeStamp(0.0472842374885);
    msg.setSource(10943U);
    msg.setSourceEntity(253U);
    msg.setDestination(54839U);
    msg.setDestinationEntity(102U);
    msg.id = 243U;
    msg.value = 0.89405899406;

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
    msg.setTimeStamp(0.406455946713);
    msg.setSource(27476U);
    msg.setSourceEntity(70U);
    msg.setDestination(44116U);
    msg.setDestinationEntity(47U);
    msg.id = 63U;
    msg.angle = 0.616160296482;

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
    msg.setTimeStamp(0.713791085449);
    msg.setSource(6618U);
    msg.setSourceEntity(31U);
    msg.setDestination(10029U);
    msg.setDestinationEntity(222U);
    msg.id = 64U;
    msg.angle = 0.846120468275;

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
    msg.setTimeStamp(0.338187127402);
    msg.setSource(28679U);
    msg.setSourceEntity(55U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(56U);
    msg.id = 239U;
    msg.angle = 0.33764443304;

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
    msg.setTimeStamp(0.571702354069);
    msg.setSource(61781U);
    msg.setSourceEntity(70U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(135U);
    msg.op = 186U;
    msg.actions.assign("NAWBGSXFIVTRRAVFBZQWTJZDCSMBPYGLVIITECIIDOCMKPUXDMUYXKWOMJGCLFUOGNMZQNZFFEWCWKKFCGAOJSKYLRLALVNIAMAVQQE");

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
    msg.setTimeStamp(0.235404653839);
    msg.setSource(28650U);
    msg.setSourceEntity(227U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(194U);
    msg.op = 190U;
    msg.actions.assign("ZLAKMJEEHUIPPGVIUKLUNIXZLHQEJPRAUTRGBXALGOHTOJXLERQWXTGYADWUGECIKTJZZTEVJMMQCWDIKCCNPAKZFDOKGCBBYXLVXDVCMTHVOMJWAPSIVKBPVFHEAHFCDWZDRMROAFNJWVRHUQSYKFNBSNWDUIOTOMBJNFCQYYSLMYLWGDASZRZWXUHZROHQPXFYVIKLSKHTDX");

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
    msg.setTimeStamp(0.713456949142);
    msg.setSource(19007U);
    msg.setSourceEntity(174U);
    msg.setDestination(18632U);
    msg.setDestinationEntity(113U);
    msg.op = 242U;
    msg.actions.assign("BQPVGKNNONEKGDYWGUEENXUFBLOQMFVYVVRJMBFJITLCPOWZJRUBJWEPCNAFBSTEVSFCTABGSYUQVQCNFIXINAZVRBRPYDJCIKQIRYRFYRXMHNQIJOOHHPPTARCKBUTLFQULJOHJ");

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
    msg.setTimeStamp(0.289569648185);
    msg.setSource(56429U);
    msg.setSourceEntity(34U);
    msg.setDestination(64378U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("LSKGUDOQRW");

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
    msg.setTimeStamp(0.523842757744);
    msg.setSource(22607U);
    msg.setSourceEntity(185U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(65U);
    msg.actions.assign("DHRZZIFNQKYXINWQEMIMHPDAKEOBCGVZAPUQNMIEDELLBJAYYUKTDGTMBDKNCFSSJXDVGYIOSFRMEVUNAVYCUUKUVCXOVVJFPETLNDHPSNQXZQPKSGPWXAONXAITLCSFLQTRMHVRW");

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
    msg.setTimeStamp(0.673911697235);
    msg.setSource(6183U);
    msg.setSourceEntity(78U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(100U);
    msg.actions.assign("PPSURPIUJQPQVCUEEKCHRAWHYDLROBHKOMCZDYTPIMVKDBCGZYKBONJXQHCEVWCZHBMYKDFF");

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
    msg.setTimeStamp(0.808369962388);
    msg.setSource(5446U);
    msg.setSourceEntity(218U);
    msg.setDestination(49693U);
    msg.setDestinationEntity(36U);
    msg.button = 11U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.373585617391);
    msg.setSource(44663U);
    msg.setSourceEntity(9U);
    msg.setDestination(53401U);
    msg.setDestinationEntity(46U);
    msg.button = 201U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.12941781705);
    msg.setSource(47130U);
    msg.setSourceEntity(240U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(251U);
    msg.button = 99U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.147568141549);
    msg.setSource(39790U);
    msg.setSourceEntity(125U);
    msg.setDestination(27321U);
    msg.setDestinationEntity(87U);
    msg.op = 71U;
    msg.text.assign("LEQSRDLBRTUWPXQKSFQMITGFISVLMHOWUDHNJCPGHBGHNZQFCBKCANEVEOOTZMYMCWXWDOOQWJVMJFIXOYBUZFWNJTFXVEBXTVARSPXLKZOQVXPDABOKKDXAPGYSKXTHQMHOZNCIDJL");

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
    msg.setTimeStamp(0.243134611674);
    msg.setSource(17506U);
    msg.setSourceEntity(211U);
    msg.setDestination(54348U);
    msg.setDestinationEntity(200U);
    msg.op = 32U;
    msg.text.assign("HIMRJDHTZLVLVSPXXRAFMHIBRVLFWIYHVB");

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
    msg.setTimeStamp(0.375627085155);
    msg.setSource(7528U);
    msg.setSourceEntity(40U);
    msg.setDestination(32132U);
    msg.setDestinationEntity(240U);
    msg.op = 22U;
    msg.text.assign("XSCVFASJXVJFDWJOIARWPWCZNGQBONQMALFMBZYDBQZAHQDUADNWNPKAJEKIFEBGGTSQTGFLMUVBQXSJEDZXGOPKRBPOVBECPPLRHMNQDRWEVAJLRDKJXHVC");

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
    msg.setTimeStamp(0.503020546385);
    msg.setSource(32365U);
    msg.setSourceEntity(39U);
    msg.setDestination(41446U);
    msg.setDestinationEntity(97U);
    msg.op = 15U;
    msg.time_remain = 0.916189000984;
    msg.sched_time = 0.136047222617;

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
    msg.setTimeStamp(0.163001211764);
    msg.setSource(57406U);
    msg.setSourceEntity(202U);
    msg.setDestination(59973U);
    msg.setDestinationEntity(248U);
    msg.op = 99U;
    msg.time_remain = 0.609627998536;
    msg.sched_time = 0.0157622808613;

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
    msg.setTimeStamp(0.728416175271);
    msg.setSource(13134U);
    msg.setSourceEntity(220U);
    msg.setDestination(40862U);
    msg.setDestinationEntity(126U);
    msg.op = 79U;
    msg.time_remain = 0.208643537294;
    msg.sched_time = 0.433244587271;

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
    msg.setTimeStamp(0.548814043608);
    msg.setSource(35084U);
    msg.setSourceEntity(175U);
    msg.setDestination(13575U);
    msg.setDestinationEntity(163U);
    msg.name.assign("RTQXAZPAHTFSCWRTACCWAVNUFYMTSRZSJJWWXQYBJHJMKGJROPWH");
    msg.op = 135U;
    msg.sched_time = 0.620797511246;

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
    msg.setTimeStamp(0.0320292167151);
    msg.setSource(62600U);
    msg.setSourceEntity(161U);
    msg.setDestination(37947U);
    msg.setDestinationEntity(210U);
    msg.name.assign("WZDFYEPEMMQVMNHCATIKMPGLKZBSDSVOPOHIARCXRDBZJOEWSNCKYQWKFJXBVNEVROTOZZIDXMNRUNGKOIGPLYFHNUOTWIZHVRGUMWFPWUQTSTPDAQLUAJQZJGFVXAQTVMUWLKLSVRXXYFJCGDBIACNNFMHTLXICAUUOINMHQTZQZTBEKBBSRPWPUXATRPWKBEFYYLCJHEGPGQYEUAJAHELDSCXSCVZGEFMYLJRKBLJDJDYVICSNDGSHBFRH");
    msg.op = 70U;
    msg.sched_time = 0.335423770509;

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
    msg.setTimeStamp(0.191414033018);
    msg.setSource(16543U);
    msg.setSourceEntity(240U);
    msg.setDestination(53798U);
    msg.setDestinationEntity(27U);
    msg.name.assign("YCRHWWFGLBCPLTZXWDBBCKSCXQIYABXYZTCTPUPUAESQOGCVABYTTEFVXXYLYTPLBQARPEVOHUGFJJULDEONUFSSUWSWKFSUJAXIVOXRZZRDZILFEIWNEIRHFSWKAXJPMMGOHBIHJDZUQKYGVLUNGUABBRIBOWZRGSDHQMNGDTEALKQQYVYMVMOEJFPMI");
    msg.op = 204U;
    msg.sched_time = 0.439685898245;

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
    msg.setTimeStamp(0.498308243306);
    msg.setSource(16547U);
    msg.setSourceEntity(103U);
    msg.setDestination(10721U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.634793437421);
    msg.setSource(32634U);
    msg.setSourceEntity(224U);
    msg.setDestination(41666U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.734154745919);
    msg.setSource(8915U);
    msg.setSourceEntity(69U);
    msg.setDestination(63290U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.321991010724);
    msg.setSource(57284U);
    msg.setSourceEntity(216U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(120U);
    msg.name.assign("KFCXHVGPMTNUQIAOTMWAOJYQGJHWDVRZKPMLSAKMYFNQSMWFDKNFLYTIRTYPJEEOFLOMBNGCXDLMHSWWNHPGIHLQS");
    msg.state = 207U;

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
    msg.setTimeStamp(0.252185845577);
    msg.setSource(42404U);
    msg.setSourceEntity(52U);
    msg.setDestination(517U);
    msg.setDestinationEntity(118U);
    msg.name.assign("AIRKVIKOKYJYYPJHEOXAVKZARLZXDHHLLJBCRXZOPIHUSNSCO");
    msg.state = 91U;

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
    msg.setTimeStamp(0.14426082779);
    msg.setSource(56085U);
    msg.setSourceEntity(120U);
    msg.setDestination(22271U);
    msg.setDestinationEntity(203U);
    msg.name.assign("ZYCLMSXKOIQFTOVWAOYSLFIDYVUKITLAICMURFAOYDGMEAWHOJZHTIIWCJHFZYKBMLSDVYQDDNNBPYNUBVTEAQPLJWFPPFUZGXFVYJTNNJZVGMJXPCDFCHURHYEOBTQCJNWLDPESJZRCJXQBKCZKNSUSRPEVRKGOAKNPANLEJSXBGKTZGBFQHDUUQWHIWQMHWKSNGOGXUFXTRHRCRKIXALQBMCMETBYSVZWGISDOTAVL");
    msg.state = 78U;

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
    msg.setTimeStamp(0.202567327465);
    msg.setSource(63851U);
    msg.setSourceEntity(31U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(249U);
    msg.name.assign("EDPVTCULWDQMUGAQGUXR");
    msg.value = 215U;

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
    msg.setTimeStamp(0.17415571404);
    msg.setSource(6571U);
    msg.setSourceEntity(189U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(197U);
    msg.name.assign("WJMIUGNXKHCLSGVMQNMJPYKGDYLBQYRAZZHYYZBOPMPFVLFTNUWEUEVRSEKRBQJJURVWQBXZIOQAQPTGDVSYVZHRGYHCSBKXMJWRKVPFNDUXEDZJOOLISSKKJALBUGDWCSYTDQBNXNBDOTWRBAIFHURIPVYGIMITRDSDCEBOWMPAQCUEFACCZVVNIFWPITGMLHOMHEJFXDLINFUZRA");
    msg.value = 105U;

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
    msg.setTimeStamp(0.316353616392);
    msg.setSource(34752U);
    msg.setSourceEntity(147U);
    msg.setDestination(9291U);
    msg.setDestinationEntity(22U);
    msg.name.assign("BGRDGLSAYRFVZGWBVCZCFJDNNTDKJNNRYWVLOIAXPF");
    msg.value = 44U;

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
    msg.setTimeStamp(0.105966731761);
    msg.setSource(60322U);
    msg.setSourceEntity(243U);
    msg.setDestination(62369U);
    msg.setDestinationEntity(82U);
    msg.name.assign("KKQGYFSPUNBWYOWSAULVWXEBGUAQIDGIBVWIICCDOHKQFUJYMCZDSFUHPKKZWDJJGCJAWXBIQERKXTLOIAEOPFRKBABANVFDMZTIRPGWJBLFXVWPJPXCUOMMHERTXAEHSGOQEPGITVGZWMHMZPQBZCNEXSSYJTVDTFQFVIYNTHEWYNNPQBKUUJGMY");

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
    msg.setTimeStamp(0.254864832876);
    msg.setSource(63145U);
    msg.setSourceEntity(29U);
    msg.setDestination(15138U);
    msg.setDestinationEntity(196U);
    msg.name.assign("WTBCLBXZZWONISLKAEHWUWVQBMECOHNGAWQRTZIAIJLRXNLPVXVUFJTRBXYSMNSYUCMFCLKGDCXVREQTFZZSWIAYICSHYSUOUUTNJWTAFRDARXXLPMFHPOMW");

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
    msg.setTimeStamp(0.679044491047);
    msg.setSource(50444U);
    msg.setSourceEntity(48U);
    msg.setDestination(23327U);
    msg.setDestinationEntity(242U);
    msg.name.assign("JTHTUZEJBOGXZEFPIISBGXJMDRYHVIGVDNOKCELZDTWLAONORFPGANSELLCTHEAHFDNMRYBRDBGOIJGPSPLKBVZWGXVJYLVBVWKHFKPZAMBZCRQYLTYCMXSPNBCFAAVXOTDPQWZNRKRHUQBRYLRXXZAOCTGQMWRUQHSHHUNOSXIEFWZE");

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
    msg.setTimeStamp(0.408905264387);
    msg.setSource(57278U);
    msg.setSourceEntity(242U);
    msg.setDestination(28970U);
    msg.setDestinationEntity(246U);
    msg.name.assign("RJABWSKAREWLWAKBEMKXWDSZUFBEBLIHMQPDAKUHZKQLJTFJUIXADEWOERVHVINLBBRCMJDDPOZMSLHTULZOHZITXMDFTAQCFYJZCPLSKEGHBQULNDRXXFMCHWCKNOXGIPONSYYEKQZRFPBPPPSQCRCPGOVYBVGIDIMWEOMWAYZBHYNVICFOFDGTSRNMTARWNC");
    msg.value = 161U;

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
    msg.setTimeStamp(0.595966289224);
    msg.setSource(51633U);
    msg.setSourceEntity(156U);
    msg.setDestination(64817U);
    msg.setDestinationEntity(67U);
    msg.name.assign("HSUZNYEZYGDGNGWXDXLDRSDFITWMTSBUYIVYGTBLOPXMWSOOSRDHPABPDOUBTFFWLVIGKFAIUJFQPGGHTJBIRCGJNKFCULKSQBJLSIZIRAQIREZKJUSRYHUCTFKZBKOPCAXJQTSMNNGXUXEHKAVQYMTLKVMFRWVQBPYUOPEZAEKSQLZQBXNVAPYCAWCKDVVINPMXGXDCEEHWVOMCFTFNHQMQZLDJJCOZWAWODRN");
    msg.value = 71U;

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
    msg.setTimeStamp(0.371856636793);
    msg.setSource(30167U);
    msg.setSourceEntity(224U);
    msg.setDestination(15439U);
    msg.setDestinationEntity(58U);
    msg.name.assign("IYPEYHUXIOQRJONQAKXUCHKHJDNKTSPWGETYPGCFHLVRACPSJXVYEJVVIDBCZODFUILMFHGLBMNKPOHEUIPNYUXCYGQBFQEZCVDZJZHLKCQNAIRVMARERQDPKTNLEZZNADKXQDMQROLWMGAFEGLZLTSWIUYGUIWSLVOMAUGTBFSDWBRAFHXKYPLNXFSAXREUYNK");
    msg.value = 46U;

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
    msg.setTimeStamp(0.423632491335);
    msg.setSource(21478U);
    msg.setSourceEntity(81U);
    msg.setDestination(57343U);
    msg.setDestinationEntity(122U);
    msg.id = 242U;
    msg.period = 3640903019U;
    msg.duty_cycle = 1247392785U;

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
    msg.setTimeStamp(0.594505104204);
    msg.setSource(17335U);
    msg.setSourceEntity(186U);
    msg.setDestination(11443U);
    msg.setDestinationEntity(63U);
    msg.id = 231U;
    msg.period = 1606592865U;
    msg.duty_cycle = 2934553365U;

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
    msg.setTimeStamp(0.0664520633343);
    msg.setSource(43439U);
    msg.setSourceEntity(230U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(120U);
    msg.id = 47U;
    msg.period = 2088279634U;
    msg.duty_cycle = 1264896279U;

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
    msg.setTimeStamp(0.0567949950312);
    msg.setSource(11834U);
    msg.setSourceEntity(44U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(172U);
    msg.id = 159U;
    msg.period = 2028372137U;
    msg.duty_cycle = 3871439326U;

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
    msg.setTimeStamp(0.0032757630015);
    msg.setSource(62558U);
    msg.setSourceEntity(234U);
    msg.setDestination(41335U);
    msg.setDestinationEntity(185U);
    msg.id = 25U;
    msg.period = 1378507777U;
    msg.duty_cycle = 3172594669U;

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
    msg.setTimeStamp(0.333674060096);
    msg.setSource(13003U);
    msg.setSourceEntity(8U);
    msg.setDestination(62394U);
    msg.setDestinationEntity(114U);
    msg.id = 184U;
    msg.period = 2906364958U;
    msg.duty_cycle = 3330477408U;

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
    msg.setTimeStamp(0.232848175198);
    msg.setSource(9639U);
    msg.setSourceEntity(75U);
    msg.setDestination(40787U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.976372939075;
    msg.lon = 0.10051212914;
    msg.height = 0.591005119505;
    msg.x = 0.924418572966;
    msg.y = 0.100687612474;
    msg.z = 0.698665718471;
    msg.phi = 0.0580276178938;
    msg.theta = 0.0802425514341;
    msg.psi = 0.233241429005;
    msg.u = 0.602637103163;
    msg.v = 0.32348246791;
    msg.w = 0.779154239662;
    msg.vx = 0.680059922076;
    msg.vy = 0.758551646401;
    msg.vz = 0.0766550592028;
    msg.p = 0.790179042575;
    msg.q = 0.666767478167;
    msg.r = 0.3422860842;
    msg.depth = 0.113307183168;
    msg.alt = 0.819984468934;

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
    msg.setTimeStamp(0.722426960641);
    msg.setSource(6622U);
    msg.setSourceEntity(49U);
    msg.setDestination(51664U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.603565345142;
    msg.lon = 0.832995156757;
    msg.height = 0.949819501244;
    msg.x = 0.706910139708;
    msg.y = 0.878076962875;
    msg.z = 0.806870682801;
    msg.phi = 0.891870583008;
    msg.theta = 0.928543611156;
    msg.psi = 0.67998327327;
    msg.u = 0.710062873058;
    msg.v = 0.545126654498;
    msg.w = 0.928729439747;
    msg.vx = 0.190191812285;
    msg.vy = 0.842163326832;
    msg.vz = 0.116123679181;
    msg.p = 0.600244587656;
    msg.q = 0.834494726149;
    msg.r = 0.0682948355486;
    msg.depth = 0.331767059223;
    msg.alt = 0.965271239576;

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
    msg.setTimeStamp(0.143780371093);
    msg.setSource(32636U);
    msg.setSourceEntity(187U);
    msg.setDestination(64860U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.663374286081;
    msg.lon = 0.261524879757;
    msg.height = 0.263383435643;
    msg.x = 0.67360205566;
    msg.y = 0.374807494449;
    msg.z = 0.0562865262762;
    msg.phi = 0.183083641386;
    msg.theta = 0.403593580519;
    msg.psi = 0.393586500586;
    msg.u = 0.481970841409;
    msg.v = 0.380065109249;
    msg.w = 0.567747331967;
    msg.vx = 0.573792971155;
    msg.vy = 0.159755531536;
    msg.vz = 0.994620735336;
    msg.p = 0.609272303263;
    msg.q = 0.474104659037;
    msg.r = 0.424200083985;
    msg.depth = 0.117595144555;
    msg.alt = 0.152078879602;

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
    msg.setTimeStamp(0.717903606681);
    msg.setSource(64342U);
    msg.setSourceEntity(37U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(223U);
    msg.x = 0.108713412217;
    msg.y = 0.54255269146;
    msg.z = 0.703644179883;

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
    msg.setTimeStamp(0.639086921169);
    msg.setSource(20498U);
    msg.setSourceEntity(158U);
    msg.setDestination(14259U);
    msg.setDestinationEntity(85U);
    msg.x = 0.0407118167523;
    msg.y = 0.0960792230134;
    msg.z = 0.979933972666;

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
    msg.setTimeStamp(0.843041845783);
    msg.setSource(9434U);
    msg.setSourceEntity(154U);
    msg.setDestination(48578U);
    msg.setDestinationEntity(195U);
    msg.x = 0.452310828977;
    msg.y = 0.756902257085;
    msg.z = 0.845432024092;

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
    msg.setTimeStamp(0.909827636469);
    msg.setSource(41758U);
    msg.setSourceEntity(177U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(173U);
    msg.value = 0.330469059655;

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
    msg.setTimeStamp(0.185261592654);
    msg.setSource(15803U);
    msg.setSourceEntity(215U);
    msg.setDestination(21169U);
    msg.setDestinationEntity(160U);
    msg.value = 0.722366462936;

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
    msg.setTimeStamp(0.925895997923);
    msg.setSource(48900U);
    msg.setSourceEntity(11U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(185U);
    msg.value = 0.546148913936;

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
    msg.setTimeStamp(0.630282495234);
    msg.setSource(51995U);
    msg.setSourceEntity(61U);
    msg.setDestination(40431U);
    msg.setDestinationEntity(8U);
    msg.value = 0.108305730993;

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
    msg.setTimeStamp(0.422065112764);
    msg.setSource(57452U);
    msg.setSourceEntity(21U);
    msg.setDestination(43227U);
    msg.setDestinationEntity(249U);
    msg.value = 0.543670368199;

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
    msg.setTimeStamp(0.986056174913);
    msg.setSource(43219U);
    msg.setSourceEntity(20U);
    msg.setDestination(8404U);
    msg.setDestinationEntity(52U);
    msg.value = 0.455673235163;

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
    msg.setTimeStamp(0.772081157377);
    msg.setSource(2175U);
    msg.setSourceEntity(229U);
    msg.setDestination(42443U);
    msg.setDestinationEntity(154U);
    msg.x = 0.735256195065;
    msg.y = 0.860756315015;
    msg.z = 0.416528079688;
    msg.phi = 0.755722457841;
    msg.theta = 0.215368766443;
    msg.psi = 0.865803165321;
    msg.p = 0.406634065349;
    msg.q = 0.921043033278;
    msg.r = 0.161977984087;
    msg.u = 0.630683409528;
    msg.v = 0.220804526045;
    msg.w = 0.137262610792;
    msg.bias_psi = 0.99841590711;
    msg.bias_r = 0.00314885429382;

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
    msg.setTimeStamp(0.500185492454);
    msg.setSource(56458U);
    msg.setSourceEntity(148U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(122U);
    msg.x = 0.386159146008;
    msg.y = 0.454887223659;
    msg.z = 0.0626013297017;
    msg.phi = 0.349984511207;
    msg.theta = 0.914775112955;
    msg.psi = 0.22297155398;
    msg.p = 0.157245433911;
    msg.q = 0.151179457937;
    msg.r = 0.992445247498;
    msg.u = 0.0914333311474;
    msg.v = 0.530350015861;
    msg.w = 0.176528262508;
    msg.bias_psi = 0.48778225967;
    msg.bias_r = 0.925982925256;

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
    msg.setTimeStamp(0.481316195621);
    msg.setSource(60008U);
    msg.setSourceEntity(1U);
    msg.setDestination(54464U);
    msg.setDestinationEntity(244U);
    msg.x = 0.116288607281;
    msg.y = 0.958996846356;
    msg.z = 0.259086400354;
    msg.phi = 0.370518305215;
    msg.theta = 0.154752570804;
    msg.psi = 0.942492715013;
    msg.p = 0.527926330752;
    msg.q = 0.58169296847;
    msg.r = 0.599989573119;
    msg.u = 0.756749056672;
    msg.v = 0.0493627108232;
    msg.w = 0.83820283697;
    msg.bias_psi = 0.646237762297;
    msg.bias_r = 0.641990918972;

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
    msg.setTimeStamp(0.939764346906);
    msg.setSource(44840U);
    msg.setSourceEntity(63U);
    msg.setDestination(22851U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.774083350785;
    msg.bias_r = 0.204998242041;
    msg.cog = 0.161174745061;
    msg.cyaw = 0.591505602594;
    msg.lbl_rej_level = 0.863264791265;
    msg.gps_rej_level = 0.658619149555;
    msg.custom_x = 0.808340766641;
    msg.custom_y = 0.559686051835;
    msg.custom_z = 0.0755563762675;

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
    msg.setTimeStamp(0.217002910607);
    msg.setSource(34208U);
    msg.setSourceEntity(186U);
    msg.setDestination(25033U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.347092695584;
    msg.bias_r = 0.941868869776;
    msg.cog = 0.5179434076;
    msg.cyaw = 0.436955118913;
    msg.lbl_rej_level = 0.644977619185;
    msg.gps_rej_level = 0.0960479720134;
    msg.custom_x = 0.846080739255;
    msg.custom_y = 0.937240114486;
    msg.custom_z = 0.282974524232;

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
    msg.setTimeStamp(0.967731665548);
    msg.setSource(34529U);
    msg.setSourceEntity(74U);
    msg.setDestination(59169U);
    msg.setDestinationEntity(75U);
    msg.bias_psi = 0.371303269107;
    msg.bias_r = 0.00575470789705;
    msg.cog = 0.445691815321;
    msg.cyaw = 0.319361208665;
    msg.lbl_rej_level = 0.0575543185301;
    msg.gps_rej_level = 0.0635922061206;
    msg.custom_x = 0.944312833813;
    msg.custom_y = 0.671938814025;
    msg.custom_z = 0.728457279185;

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
    msg.setTimeStamp(0.427160488439);
    msg.setSource(22624U);
    msg.setSourceEntity(32U);
    msg.setDestination(18839U);
    msg.setDestinationEntity(4U);
    msg.utc_time = 0.581529257126;
    msg.reason = 22U;

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
    msg.setTimeStamp(0.157377263013);
    msg.setSource(55663U);
    msg.setSourceEntity(248U);
    msg.setDestination(40544U);
    msg.setDestinationEntity(71U);
    msg.utc_time = 0.201920489765;
    msg.reason = 83U;

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
    msg.setTimeStamp(0.174745913799);
    msg.setSource(25835U);
    msg.setSourceEntity(119U);
    msg.setDestination(64375U);
    msg.setDestinationEntity(176U);
    msg.utc_time = 0.692990326627;
    msg.reason = 120U;

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
    msg.setTimeStamp(0.820676061193);
    msg.setSource(19317U);
    msg.setSourceEntity(82U);
    msg.setDestination(22520U);
    msg.setDestinationEntity(195U);
    msg.id = 141U;
    msg.range = 0.676547092423;
    msg.acceptance = 135U;

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
    msg.setTimeStamp(0.0505148846504);
    msg.setSource(37305U);
    msg.setSourceEntity(170U);
    msg.setDestination(9981U);
    msg.setDestinationEntity(130U);
    msg.id = 56U;
    msg.range = 0.160627357444;
    msg.acceptance = 252U;

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
    msg.setTimeStamp(0.772438591715);
    msg.setSource(62290U);
    msg.setSourceEntity(167U);
    msg.setDestination(34790U);
    msg.setDestinationEntity(105U);
    msg.id = 136U;
    msg.range = 0.297225053261;
    msg.acceptance = 214U;

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
    msg.setTimeStamp(0.826450502735);
    msg.setSource(47306U);
    msg.setSourceEntity(107U);
    msg.setDestination(43300U);
    msg.setDestinationEntity(137U);
    msg.type = 198U;
    msg.reason = 194U;
    msg.value = 0.488986150502;
    msg.timestep = 0.248796117303;

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
    msg.setTimeStamp(0.212103916145);
    msg.setSource(58825U);
    msg.setSourceEntity(138U);
    msg.setDestination(24155U);
    msg.setDestinationEntity(50U);
    msg.type = 200U;
    msg.reason = 20U;
    msg.value = 0.722321595832;
    msg.timestep = 0.271414953768;

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
    msg.setTimeStamp(0.520159465547);
    msg.setSource(43095U);
    msg.setSourceEntity(82U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(122U);
    msg.type = 233U;
    msg.reason = 11U;
    msg.value = 0.147140673804;
    msg.timestep = 0.000756211820494;

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
    msg.setTimeStamp(0.958015408071);
    msg.setSource(31614U);
    msg.setSourceEntity(97U);
    msg.setDestination(26122U);
    msg.setDestinationEntity(123U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("URIBHLQUFCNOLFQEJXNLFRDINYSWWPDJLSVUTKNKDMEPVCZNZXFYRGBSSMHRHMOYDMLBSXAZSGVPVEHEFMBQGPBUOKMTGWFOEGLSSOKBQSNHPFTAZCJIACDJOAADAQYUVZHZTKRYXWYLGLJIN");
    tmp_msg_0.lat = 0.570865001282;
    tmp_msg_0.lon = 0.186780800069;
    tmp_msg_0.depth = 0.811988600682;
    tmp_msg_0.query_channel = 125U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 25U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.457126598977;
    msg.y = 0.533563743262;
    msg.var_x = 0.422094099417;
    msg.var_y = 0.95031970259;
    msg.distance = 0.995783172808;

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
    msg.setTimeStamp(0.855141994895);
    msg.setSource(41352U);
    msg.setSourceEntity(134U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(138U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XTYDRCPDZEFSIGKUJYNAOMHADJZYHVUTLOFAIKHEPYECKESVFBPCUAGSIKMCROUUIWQPZMSDOWECNYLWEQFBNVDO");
    tmp_msg_0.lat = 0.931090007669;
    tmp_msg_0.lon = 0.712609422735;
    tmp_msg_0.depth = 0.932246147712;
    tmp_msg_0.query_channel = 183U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 70U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.905951913083;
    msg.y = 0.167888377673;
    msg.var_x = 0.952108263925;
    msg.var_y = 0.884606838721;
    msg.distance = 0.184232895509;

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
    msg.setTimeStamp(0.757009068106);
    msg.setSource(57954U);
    msg.setSourceEntity(251U);
    msg.setDestination(60794U);
    msg.setDestinationEntity(4U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EKUMUWYRJJZTQKOCHCPSAAYRVKKMBQFUKJSQYHJJVTBMJNGCGZYBJTDIXFLBZXWESYCLRNFKSRIPXATRVDNMFPHINFSVDETLZAIWLXDJEUGVMBFZWNHBXDGZDSMDPXGWMRHUWOYMHXKVAGGCWLAWHDNCKVRXQLSKDCPIPVHCZUDOLQGBZHEQMWAUQAVTPTFSGORV");
    tmp_msg_0.lat = 0.806930869655;
    tmp_msg_0.lon = 0.435636343698;
    tmp_msg_0.depth = 0.0353360160956;
    tmp_msg_0.query_channel = 252U;
    tmp_msg_0.reply_channel = 155U;
    tmp_msg_0.transponder_delay = 24U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.353385048306;
    msg.y = 0.579642123697;
    msg.var_x = 0.253324470612;
    msg.var_y = 0.901960727239;
    msg.distance = 0.558369433444;

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
    msg.setTimeStamp(0.43636931866);
    msg.setSource(64358U);
    msg.setSourceEntity(241U);
    msg.setDestination(25741U);
    msg.setDestinationEntity(208U);
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
    msg.setTimeStamp(0.857607069222);
    msg.setSource(16420U);
    msg.setSourceEntity(28U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(26U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.203863256682);
    msg.setSource(17076U);
    msg.setSourceEntity(251U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(53U);
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
    msg.setTimeStamp(0.393326995847);
    msg.setSource(54069U);
    msg.setSourceEntity(162U);
    msg.setDestination(1884U);
    msg.setDestinationEntity(121U);
    msg.x = 0.272322646776;
    msg.y = 0.225655488569;
    msg.z = 0.347738743238;

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
    msg.setTimeStamp(0.363522171326);
    msg.setSource(61685U);
    msg.setSourceEntity(170U);
    msg.setDestination(40187U);
    msg.setDestinationEntity(239U);
    msg.x = 0.897378920411;
    msg.y = 0.742904550691;
    msg.z = 0.364081979024;

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
    msg.setTimeStamp(0.124860823171);
    msg.setSource(61436U);
    msg.setSourceEntity(60U);
    msg.setDestination(31530U);
    msg.setDestinationEntity(134U);
    msg.x = 0.406413718726;
    msg.y = 0.216239742788;
    msg.z = 0.779294889661;

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
    msg.setTimeStamp(0.615254567599);
    msg.setSource(9615U);
    msg.setSourceEntity(173U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(91U);
    msg.va = 0.83272055078;
    msg.aoa = 0.948703848517;
    msg.ssa = 0.304658642697;

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
    msg.setTimeStamp(0.0873661643431);
    msg.setSource(13220U);
    msg.setSourceEntity(127U);
    msg.setDestination(52994U);
    msg.setDestinationEntity(9U);
    msg.va = 0.692753261399;
    msg.aoa = 0.0955759306238;
    msg.ssa = 0.526065836714;

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
    msg.setTimeStamp(0.821336993317);
    msg.setSource(30499U);
    msg.setSourceEntity(120U);
    msg.setDestination(18740U);
    msg.setDestinationEntity(254U);
    msg.va = 0.356116281509;
    msg.aoa = 0.0273213342672;
    msg.ssa = 0.85418882473;

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
    msg.setTimeStamp(0.989305779608);
    msg.setSource(41644U);
    msg.setSourceEntity(185U);
    msg.setDestination(14404U);
    msg.setDestinationEntity(25U);
    msg.value = 0.79841383918;

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
    msg.setTimeStamp(0.542723220153);
    msg.setSource(13447U);
    msg.setSourceEntity(183U);
    msg.setDestination(40032U);
    msg.setDestinationEntity(249U);
    msg.value = 0.857363241959;

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
    msg.setTimeStamp(0.196832887326);
    msg.setSource(15260U);
    msg.setSourceEntity(133U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(243U);
    msg.value = 0.499410416731;

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
    msg.setTimeStamp(0.856019261567);
    msg.setSource(12244U);
    msg.setSourceEntity(228U);
    msg.setDestination(22081U);
    msg.setDestinationEntity(238U);
    msg.value = 0.926326589852;
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
    msg.setTimeStamp(0.52157000863);
    msg.setSource(54698U);
    msg.setSourceEntity(162U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(247U);
    msg.value = 0.218940570645;
    msg.z_units = 244U;

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
    msg.setTimeStamp(0.115391112214);
    msg.setSource(10192U);
    msg.setSourceEntity(57U);
    msg.setDestination(38007U);
    msg.setDestinationEntity(214U);
    msg.value = 0.914544797273;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.151972255893);
    msg.setSource(9960U);
    msg.setSourceEntity(129U);
    msg.setDestination(23696U);
    msg.setDestinationEntity(26U);
    msg.value = 0.947691435472;
    msg.speed_units = 160U;

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
    msg.setTimeStamp(0.924396275485);
    msg.setSource(60902U);
    msg.setSourceEntity(233U);
    msg.setDestination(30327U);
    msg.setDestinationEntity(58U);
    msg.value = 0.351594603715;
    msg.speed_units = 123U;

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
    msg.setTimeStamp(0.988504858976);
    msg.setSource(9436U);
    msg.setSourceEntity(204U);
    msg.setDestination(24840U);
    msg.setDestinationEntity(28U);
    msg.value = 0.160266933083;
    msg.speed_units = 9U;

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
    msg.setTimeStamp(0.211897458567);
    msg.setSource(43945U);
    msg.setSourceEntity(196U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(17U);
    msg.value = 0.391542045529;

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
    msg.setTimeStamp(0.564659560628);
    msg.setSource(63045U);
    msg.setSourceEntity(37U);
    msg.setDestination(8226U);
    msg.setDestinationEntity(111U);
    msg.value = 0.15849409003;

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
    msg.setTimeStamp(0.888078012303);
    msg.setSource(39764U);
    msg.setSourceEntity(153U);
    msg.setDestination(48566U);
    msg.setDestinationEntity(133U);
    msg.value = 0.381674364766;

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
    msg.setTimeStamp(0.03427026844);
    msg.setSource(55379U);
    msg.setSourceEntity(214U);
    msg.setDestination(2391U);
    msg.setDestinationEntity(244U);
    msg.value = 0.988544028293;

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
    msg.setTimeStamp(0.156085547728);
    msg.setSource(58901U);
    msg.setSourceEntity(12U);
    msg.setDestination(28479U);
    msg.setDestinationEntity(208U);
    msg.value = 0.266118409721;

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
    msg.setTimeStamp(0.516222734532);
    msg.setSource(31011U);
    msg.setSourceEntity(135U);
    msg.setDestination(22169U);
    msg.setDestinationEntity(224U);
    msg.value = 0.837742776295;

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
    msg.setTimeStamp(0.585972503748);
    msg.setSource(28283U);
    msg.setSourceEntity(226U);
    msg.setDestination(47492U);
    msg.setDestinationEntity(126U);
    msg.value = 0.682190401785;

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
    msg.setTimeStamp(0.944687556743);
    msg.setSource(32112U);
    msg.setSourceEntity(45U);
    msg.setDestination(12180U);
    msg.setDestinationEntity(78U);
    msg.value = 0.638678332467;

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
    msg.setTimeStamp(0.196056060436);
    msg.setSource(14823U);
    msg.setSourceEntity(202U);
    msg.setDestination(12140U);
    msg.setDestinationEntity(103U);
    msg.value = 0.489949040015;

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
    msg.setTimeStamp(0.417247680052);
    msg.setSource(48618U);
    msg.setSourceEntity(85U);
    msg.setDestination(12681U);
    msg.setDestinationEntity(201U);
    msg.path_ref = 3853134268U;
    msg.start_lat = 0.387628016169;
    msg.start_lon = 0.00179318977716;
    msg.start_z = 0.658961500452;
    msg.start_z_units = 84U;
    msg.end_lat = 0.766774564794;
    msg.end_lon = 0.813608051569;
    msg.end_z = 0.483920430097;
    msg.end_z_units = 159U;
    msg.speed = 0.0964319602244;
    msg.speed_units = 18U;
    msg.lradius = 0.399925636489;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.711535457888);
    msg.setSource(61458U);
    msg.setSourceEntity(16U);
    msg.setDestination(18446U);
    msg.setDestinationEntity(161U);
    msg.path_ref = 2573878217U;
    msg.start_lat = 0.146574373379;
    msg.start_lon = 0.218955029615;
    msg.start_z = 0.153263118991;
    msg.start_z_units = 238U;
    msg.end_lat = 0.0644280165777;
    msg.end_lon = 0.13035648091;
    msg.end_z = 0.471952138357;
    msg.end_z_units = 69U;
    msg.speed = 0.668762155919;
    msg.speed_units = 133U;
    msg.lradius = 0.909699999325;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.38949666846);
    msg.setSource(7910U);
    msg.setSourceEntity(154U);
    msg.setDestination(27702U);
    msg.setDestinationEntity(31U);
    msg.path_ref = 1283501649U;
    msg.start_lat = 0.367463433357;
    msg.start_lon = 0.096177078767;
    msg.start_z = 0.90281933419;
    msg.start_z_units = 225U;
    msg.end_lat = 0.0240461282672;
    msg.end_lon = 0.639918267839;
    msg.end_z = 0.396118245108;
    msg.end_z_units = 26U;
    msg.speed = 0.944924727204;
    msg.speed_units = 214U;
    msg.lradius = 0.680997357889;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.447818773252);
    msg.setSource(17549U);
    msg.setSourceEntity(220U);
    msg.setDestination(20086U);
    msg.setDestinationEntity(157U);
    msg.x = 0.333978182837;
    msg.y = 0.203567317687;
    msg.z = 0.785197198179;
    msg.k = 0.86819641538;
    msg.m = 0.533972632512;
    msg.n = 0.621457288289;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.0826183234259);
    msg.setSource(33797U);
    msg.setSourceEntity(164U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(48U);
    msg.x = 0.839996171582;
    msg.y = 0.723108978007;
    msg.z = 0.233731604279;
    msg.k = 0.880629472925;
    msg.m = 0.248483445541;
    msg.n = 0.341227058084;
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
    msg.setTimeStamp(0.485276342337);
    msg.setSource(46048U);
    msg.setSourceEntity(188U);
    msg.setDestination(45955U);
    msg.setDestinationEntity(233U);
    msg.x = 0.33869939744;
    msg.y = 0.838199548326;
    msg.z = 0.736263077742;
    msg.k = 0.33366542141;
    msg.m = 0.289353375583;
    msg.n = 0.858975556562;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.929328116376);
    msg.setSource(45191U);
    msg.setSourceEntity(208U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(78U);
    msg.value = 0.81013287521;

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
    msg.setTimeStamp(0.249527692674);
    msg.setSource(65093U);
    msg.setSourceEntity(181U);
    msg.setDestination(20752U);
    msg.setDestinationEntity(160U);
    msg.value = 0.853851650535;

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
    msg.setTimeStamp(0.423502053382);
    msg.setSource(16960U);
    msg.setSourceEntity(159U);
    msg.setDestination(31064U);
    msg.setDestinationEntity(233U);
    msg.value = 0.878771001588;

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
    msg.setTimeStamp(0.794555609696);
    msg.setSource(6774U);
    msg.setSourceEntity(90U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(183U);
    msg.u = 0.138792594401;
    msg.v = 0.698455062568;
    msg.w = 0.729941580318;
    msg.p = 0.0623809678586;
    msg.q = 0.587909084433;
    msg.r = 0.725506636215;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.140596950123);
    msg.setSource(17923U);
    msg.setSourceEntity(98U);
    msg.setDestination(28525U);
    msg.setDestinationEntity(43U);
    msg.u = 0.55946238764;
    msg.v = 0.408131690625;
    msg.w = 0.894306963892;
    msg.p = 0.729275844;
    msg.q = 0.826118544738;
    msg.r = 0.757774284816;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.493206705709);
    msg.setSource(6115U);
    msg.setSourceEntity(170U);
    msg.setDestination(25088U);
    msg.setDestinationEntity(231U);
    msg.u = 0.715812301515;
    msg.v = 0.357571104765;
    msg.w = 0.138305304439;
    msg.p = 0.124408424644;
    msg.q = 0.361346754557;
    msg.r = 0.400595151373;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.846397950755);
    msg.setSource(59324U);
    msg.setSourceEntity(45U);
    msg.setDestination(65280U);
    msg.setDestinationEntity(176U);
    msg.path_ref = 504161366U;
    msg.start_lat = 0.551030038656;
    msg.start_lon = 0.102448979379;
    msg.start_z = 0.843079448854;
    msg.start_z_units = 20U;
    msg.end_lat = 0.177917589597;
    msg.end_lon = 0.575259456189;
    msg.end_z = 0.285766986012;
    msg.end_z_units = 210U;
    msg.lradius = 0.209502558439;
    msg.flags = 67U;
    msg.x = 0.770856435836;
    msg.y = 0.00405626106191;
    msg.z = 0.0239737962187;
    msg.vx = 0.983614292321;
    msg.vy = 0.850937065137;
    msg.vz = 0.948987109329;
    msg.course_error = 0.744127344989;
    msg.eta = 17598U;

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
    msg.setTimeStamp(0.024241240908);
    msg.setSource(25828U);
    msg.setSourceEntity(12U);
    msg.setDestination(25215U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 109785858U;
    msg.start_lat = 0.724324608032;
    msg.start_lon = 0.226240994861;
    msg.start_z = 0.135058087272;
    msg.start_z_units = 21U;
    msg.end_lat = 0.801070190311;
    msg.end_lon = 0.856237336214;
    msg.end_z = 0.488927262772;
    msg.end_z_units = 166U;
    msg.lradius = 0.480113527315;
    msg.flags = 250U;
    msg.x = 0.398136717056;
    msg.y = 0.890120123303;
    msg.z = 0.0734449513369;
    msg.vx = 0.676043851655;
    msg.vy = 0.697280636754;
    msg.vz = 0.747467430272;
    msg.course_error = 0.635899639224;
    msg.eta = 32822U;

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
    msg.setTimeStamp(0.74631096306);
    msg.setSource(58247U);
    msg.setSourceEntity(68U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(75U);
    msg.path_ref = 635787697U;
    msg.start_lat = 0.300809418446;
    msg.start_lon = 0.19869625728;
    msg.start_z = 0.932136722881;
    msg.start_z_units = 104U;
    msg.end_lat = 0.826554939035;
    msg.end_lon = 0.442966355583;
    msg.end_z = 0.736774643684;
    msg.end_z_units = 208U;
    msg.lradius = 0.703361122565;
    msg.flags = 91U;
    msg.x = 0.852068989682;
    msg.y = 0.349069900278;
    msg.z = 0.0874269832793;
    msg.vx = 0.805327380579;
    msg.vy = 0.550677014569;
    msg.vz = 0.323306342188;
    msg.course_error = 0.545323748764;
    msg.eta = 4906U;

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
    msg.setTimeStamp(0.50558507947);
    msg.setSource(20632U);
    msg.setSourceEntity(237U);
    msg.setDestination(56469U);
    msg.setDestinationEntity(83U);
    msg.k = 0.347444048796;
    msg.m = 0.131616115043;
    msg.n = 0.20053059886;

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
    msg.setTimeStamp(0.228012321456);
    msg.setSource(17009U);
    msg.setSourceEntity(99U);
    msg.setDestination(16528U);
    msg.setDestinationEntity(46U);
    msg.k = 0.192878602467;
    msg.m = 0.733476320553;
    msg.n = 0.779287901922;

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
    msg.setTimeStamp(0.943843431979);
    msg.setSource(56040U);
    msg.setSourceEntity(147U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(233U);
    msg.k = 0.132657254141;
    msg.m = 0.489226761534;
    msg.n = 0.350769885568;

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
    msg.setTimeStamp(0.0609071395499);
    msg.setSource(5327U);
    msg.setSourceEntity(182U);
    msg.setDestination(1954U);
    msg.setDestinationEntity(25U);
    msg.p = 0.952223064357;
    msg.i = 0.809590910464;
    msg.d = 0.529715048037;
    msg.a = 0.321962814344;

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
    msg.setTimeStamp(0.433349521768);
    msg.setSource(43610U);
    msg.setSourceEntity(251U);
    msg.setDestination(49915U);
    msg.setDestinationEntity(195U);
    msg.p = 0.576476976982;
    msg.i = 0.879523188229;
    msg.d = 0.792192607856;
    msg.a = 0.556120604485;

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
    msg.setTimeStamp(0.17236818544);
    msg.setSource(20616U);
    msg.setSourceEntity(23U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(224U);
    msg.p = 0.725952659952;
    msg.i = 0.789291178574;
    msg.d = 0.7384208916;
    msg.a = 0.55055823926;

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
    msg.setTimeStamp(0.100922653435);
    msg.setSource(28239U);
    msg.setSourceEntity(238U);
    msg.setDestination(37857U);
    msg.setDestinationEntity(171U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.926571718865);
    msg.setSource(1229U);
    msg.setSourceEntity(34U);
    msg.setDestination(59419U);
    msg.setDestinationEntity(203U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.878705731517);
    msg.setSource(36078U);
    msg.setSourceEntity(34U);
    msg.setDestination(871U);
    msg.setDestinationEntity(238U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.579272189517);
    msg.setSource(105U);
    msg.setSourceEntity(189U);
    msg.setDestination(23999U);
    msg.setDestinationEntity(111U);
    msg.x = 0.842905533393;
    msg.y = 0.394258879142;
    msg.z = 0.300763439564;
    msg.vx = 0.654013784872;
    msg.vy = 0.376828139262;
    msg.vz = 0.685506603591;
    msg.ax = 0.083637293072;
    msg.ay = 0.872673544658;
    msg.az = 0.331112016031;
    msg.flags = 6211U;

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
    msg.setTimeStamp(0.174910464);
    msg.setSource(39248U);
    msg.setSourceEntity(118U);
    msg.setDestination(2459U);
    msg.setDestinationEntity(97U);
    msg.x = 0.627338099227;
    msg.y = 0.560880152487;
    msg.z = 0.908324479759;
    msg.vx = 0.898724979108;
    msg.vy = 0.423519088191;
    msg.vz = 0.223607352635;
    msg.ax = 0.845197686903;
    msg.ay = 0.509611157609;
    msg.az = 0.56966935324;
    msg.flags = 43548U;

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
    msg.setTimeStamp(0.158576579914);
    msg.setSource(6746U);
    msg.setSourceEntity(11U);
    msg.setDestination(50412U);
    msg.setDestinationEntity(105U);
    msg.x = 0.984548472703;
    msg.y = 0.94911466619;
    msg.z = 0.987214116863;
    msg.vx = 0.0241035081366;
    msg.vy = 0.799695945146;
    msg.vz = 0.56749827363;
    msg.ax = 0.418206151526;
    msg.ay = 0.0347943177769;
    msg.az = 0.149757057584;
    msg.flags = 58791U;

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
    msg.setTimeStamp(0.859194015622);
    msg.setSource(20324U);
    msg.setSourceEntity(79U);
    msg.setDestination(7161U);
    msg.setDestinationEntity(103U);
    msg.value = 0.85549002717;

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
    msg.setTimeStamp(0.473623320844);
    msg.setSource(4426U);
    msg.setSourceEntity(7U);
    msg.setDestination(17450U);
    msg.setDestinationEntity(197U);
    msg.value = 0.0893019366991;

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
    msg.setTimeStamp(0.795911859149);
    msg.setSource(47164U);
    msg.setSourceEntity(182U);
    msg.setDestination(14306U);
    msg.setDestinationEntity(204U);
    msg.value = 0.159443713435;

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
    msg.setTimeStamp(0.491493367923);
    msg.setSource(23177U);
    msg.setSourceEntity(73U);
    msg.setDestination(56368U);
    msg.setDestinationEntity(1U);
    msg.timeout = 57589U;
    msg.lat = 0.897858716037;
    msg.lon = 0.029129958483;
    msg.z = 0.195118285599;
    msg.z_units = 19U;
    msg.speed = 0.157440431662;
    msg.speed_units = 14U;
    msg.roll = 0.0604223092437;
    msg.pitch = 0.573086241631;
    msg.yaw = 0.308603963998;
    msg.custom.assign("QAOSLKFJRREDCSFXTMYCLWHVJQIOCOEMRGGRUBBCDVKVTNYRZICPGFNYPPDYDPZDQYSIKVAUBBHOHJMPIP");

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
    msg.setTimeStamp(0.634167740399);
    msg.setSource(37457U);
    msg.setSourceEntity(243U);
    msg.setDestination(14859U);
    msg.setDestinationEntity(153U);
    msg.timeout = 39545U;
    msg.lat = 0.0930690566989;
    msg.lon = 0.177137544142;
    msg.z = 0.497936659142;
    msg.z_units = 140U;
    msg.speed = 0.980876355119;
    msg.speed_units = 19U;
    msg.roll = 0.548830653602;
    msg.pitch = 0.160623018748;
    msg.yaw = 0.048721015615;
    msg.custom.assign("EMZVHYUPNAYKAITUSAYOGHRAQ");

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
    msg.setTimeStamp(0.233878425252);
    msg.setSource(34657U);
    msg.setSourceEntity(240U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(205U);
    msg.timeout = 9103U;
    msg.lat = 0.620869991201;
    msg.lon = 0.222857972564;
    msg.z = 0.425783993383;
    msg.z_units = 176U;
    msg.speed = 0.186848587835;
    msg.speed_units = 194U;
    msg.roll = 0.785818233953;
    msg.pitch = 0.0181417411972;
    msg.yaw = 0.203700828359;
    msg.custom.assign("LOSNVLDTLIBQBKIQBDMIXFGEVYOGVTMZNAVVEXKCCUKRSCJZPEXMAXNTYUPZCHPGAVULVJSPUPOPIYWBBGWHULIAXRFOEFFAGCWRNARQDBRLDZPTHYFJOZJMDVLUMEYYOWTSKFWIWTHICJQMGMUINSMATNVQTQONJEVDATZSZHBGYRFCRQSJESCLPYWHOXZKUQLBKDPMBQKYZIPAOOESKXHJJEGHGKCNAGU");

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
    msg.setTimeStamp(0.772573143893);
    msg.setSource(64224U);
    msg.setSourceEntity(3U);
    msg.setDestination(11117U);
    msg.setDestinationEntity(102U);
    msg.timeout = 41169U;
    msg.lat = 0.883007402866;
    msg.lon = 0.0335953288718;
    msg.z = 0.988016116147;
    msg.z_units = 16U;
    msg.speed = 0.422741996482;
    msg.speed_units = 61U;
    msg.duration = 9613U;
    msg.radius = 0.678010330016;
    msg.flags = 89U;
    msg.custom.assign("WDTVCNRBSJ");

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
    msg.setTimeStamp(0.38802264359);
    msg.setSource(6470U);
    msg.setSourceEntity(24U);
    msg.setDestination(54135U);
    msg.setDestinationEntity(108U);
    msg.timeout = 3072U;
    msg.lat = 0.2779469983;
    msg.lon = 0.630372966247;
    msg.z = 0.523887619259;
    msg.z_units = 244U;
    msg.speed = 0.386603920241;
    msg.speed_units = 81U;
    msg.duration = 44297U;
    msg.radius = 0.89409422662;
    msg.flags = 28U;
    msg.custom.assign("TTBYXDFSGJDINAZQNDLUQWGCIYXAAYEXKVLWWSVEXSOOTRPBYFZOKRDMKMNMPOTNFLLRRAAZSJFITEQUFKWAMRJZNDHTIFZDMHKWV");

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
    msg.setTimeStamp(0.72864862988);
    msg.setSource(30764U);
    msg.setSourceEntity(96U);
    msg.setDestination(19868U);
    msg.setDestinationEntity(11U);
    msg.timeout = 15534U;
    msg.lat = 0.716247531392;
    msg.lon = 0.104519674205;
    msg.z = 0.153694590543;
    msg.z_units = 16U;
    msg.speed = 0.464009375961;
    msg.speed_units = 148U;
    msg.duration = 8880U;
    msg.radius = 0.867833542865;
    msg.flags = 210U;
    msg.custom.assign("LFRHNJVUVTMHVIBYBDGUJZVMXHSVECSIJIBZQWSOFHORAXHLXWXAIDUQUBPXDYIRZSXLDNLEMCYMNIODLEXUDKDRNOTYROWSMTEJKJIRHXNRKKLDYNMCQNSDZVAGRJGAYAPPQFJAFSEMCVCCCBPVMBEOTPOLMONCTSCOQWGDREJWKIJCYVKHAGPZXGIAETGYZPTRBOWBTZZFUFUZTEQWPUZKNSGKQMQFXJNAYPFQIHAGQYWEUWVBLKWGB");

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
    msg.setTimeStamp(0.860961887339);
    msg.setSource(4748U);
    msg.setSourceEntity(35U);
    msg.setDestination(4330U);
    msg.setDestinationEntity(191U);
    msg.custom.assign("ZJAZMXLATPKOEDIDMTVNPCKHLVQKJWGYJADNVFFSRSTKRNVFDZZYGHBOGIFRJFSDNJCDNBATKHSOPPQOWYQUDPUCTURFRXYTFWSZMXPKUENIHYMMHYGEPBUXBVNIVIHAJYCHNQSYKYUROMCJHEGQZELFOXELMBVXNAIHTJQOAELDLJPISRUEBMDWXILI");

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
    msg.setTimeStamp(0.249941047864);
    msg.setSource(12731U);
    msg.setSourceEntity(185U);
    msg.setDestination(51659U);
    msg.setDestinationEntity(47U);
    msg.custom.assign("HDYDXSTQSKZWFHCMMBLEBPRCIGZIZBPVHRNVUZUTNGBFMXKXJHBWPYIANFBYTPUSYMEOEOLRDMQAMKQIGQLFNUNPXYAQCSHKPSOJIDAXWXAYNSFCLRWAECVGPOVPJJRQGCIOQTZANLRKWKATVVIVOCUYHYEUKEIGUXTPOYJRQETCSE");

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
    msg.setTimeStamp(0.658115635168);
    msg.setSource(696U);
    msg.setSourceEntity(26U);
    msg.setDestination(4832U);
    msg.setDestinationEntity(248U);
    msg.custom.assign("AMRCJHZNPXSJZZOVAYWBUKQXULWFBOWLGPKIDEIMNTYFEJOVJQACFUSZSXSHGWLWOGFCAMUCHBSXXTODPZNJTSIXJEFVCYDBZVTKTBQGIOBIFGJTYKKQGMCQQYUDVNEFQLEXCPBHLBTFUDNRYLATVLRNOAKHGWCJNIEOHAMRXTHDWNQBDKYWFRZDSMZEPPAPV");

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
    msg.setTimeStamp(0.855385338677);
    msg.setSource(230U);
    msg.setSourceEntity(217U);
    msg.setDestination(39643U);
    msg.setDestinationEntity(8U);
    msg.timeout = 58867U;
    msg.lat = 0.264290955877;
    msg.lon = 0.415708526262;
    msg.z = 0.254322998082;
    msg.z_units = 206U;
    msg.duration = 6630U;
    msg.speed = 0.632555436165;
    msg.speed_units = 79U;
    msg.type = 73U;
    msg.radius = 0.597940896707;
    msg.length = 0.921535868611;
    msg.bearing = 0.969296538689;
    msg.direction = 236U;
    msg.custom.assign("IBEBDLXMDHIIVBQEJCPEOGRQZKNOLSYUFEGCHAAXQZHNOPLMGMXDSJUTODMRXWLCVNZTIBHIXQJYKWAOLPBECJFFMBTWWURFAVFYUKSNVCYFHTSHBGQHFPCOTUHWBXOMWDRVPKWVGCEFMQFOXGPXFNJMALPDPAPWRZGETCRYASRRMTDNDVJBTXUYJOIDILKBIUSQOKSKKTYJNGRVRHINJKYZUWZVCYLZGZHXQMSWAISUVCDTAKZ");

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
    msg.setTimeStamp(0.378703698236);
    msg.setSource(4924U);
    msg.setSourceEntity(175U);
    msg.setDestination(69U);
    msg.setDestinationEntity(159U);
    msg.timeout = 10154U;
    msg.lat = 0.642892191209;
    msg.lon = 0.270066449405;
    msg.z = 0.363873489175;
    msg.z_units = 6U;
    msg.duration = 21911U;
    msg.speed = 0.626569433723;
    msg.speed_units = 71U;
    msg.type = 181U;
    msg.radius = 0.614576658339;
    msg.length = 0.969133190964;
    msg.bearing = 0.23551800579;
    msg.direction = 157U;
    msg.custom.assign("ZXVBGXBLWDFQQWHITRVHEFVQENDXSROWYAGMSPYVNSJJRNJBBMEWGIZBPKDKNWHGIYXRIQMBQPARVKLYFLZFC");

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
    msg.setTimeStamp(0.337776305551);
    msg.setSource(51556U);
    msg.setSourceEntity(213U);
    msg.setDestination(32916U);
    msg.setDestinationEntity(134U);
    msg.timeout = 43621U;
    msg.lat = 0.820535372791;
    msg.lon = 0.542254032619;
    msg.z = 0.534861870189;
    msg.z_units = 52U;
    msg.duration = 52439U;
    msg.speed = 0.265173432201;
    msg.speed_units = 38U;
    msg.type = 99U;
    msg.radius = 0.628026859413;
    msg.length = 0.472853730693;
    msg.bearing = 0.924049247842;
    msg.direction = 169U;
    msg.custom.assign("SHZLBODYAFCYTFEIFRZDNXOZDSDIIGOXCWXSSMRVAMIFGTLUEXQEOPQFWGBZOGWFXWHTUXDBPCQYHTLGLJEEZKPVNJKTWRRHFMFVNKWRHRVBYIIGTLYXPMVWXDTUFUKKYNKAQPPLPVQNCQJBTRBMQAPIJUBACZVRMVMEGHCMLOCYHHNXPIZWHSODCDYMNUEGJKKMNUJQOIG");

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
    msg.setTimeStamp(0.753701399034);
    msg.setSource(34010U);
    msg.setSourceEntity(234U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(178U);
    msg.duration = 28129U;
    msg.custom.assign("WWZZLMTLZHOSPFTNAQJGSOQMFJVBYCEZOSEQQYMZYEANZXSEAWTXPNLJGJSAGOFAKFJVLZGOOGCNDXSNZWNOFVRUVNNHLAMKBUYUBHTKBBSDCCUCRHDJRRCYPAMPRHAJKYKQIXENQVWXBKOIXPFRJCHBMFHQFHIWRFMNTPXEPYGQBODWHYAUGXDSGVKCKCULRXWRE");

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
    msg.setTimeStamp(0.520988820179);
    msg.setSource(25271U);
    msg.setSourceEntity(5U);
    msg.setDestination(21534U);
    msg.setDestinationEntity(19U);
    msg.duration = 50274U;
    msg.custom.assign("LZGNGBLSHZUSYWRTZTEIRVHKYACEQMTVOGKDPELTNCFIKVXMKBPIIXTWUQCMOEBRHLWUKXMSYBNAQVJJJGOUGVZCSPIPYAWDESXRWHTOQFUBLKSSVRYRXCGBEWBCMXROANRIUFMAFGHYABEQHWDZLCPLDZFZIWVVPXPCUPDYARPJFLTHQFWLNUFWUYDKITHHMJHDSFKPCVSYZBTAOEDFMZLNDJSEJAOYRJKKQQUT");

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
    msg.setTimeStamp(0.894961328563);
    msg.setSource(21396U);
    msg.setSourceEntity(22U);
    msg.setDestination(33361U);
    msg.setDestinationEntity(160U);
    msg.duration = 29481U;
    msg.custom.assign("ADEKQHAYFTBJRCTOXMCFUGFPQXPDHCPKVLBOG");

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
    msg.setTimeStamp(0.18870685849);
    msg.setSource(19119U);
    msg.setSourceEntity(238U);
    msg.setDestination(63552U);
    msg.setDestinationEntity(127U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.983672366563;
    tmp_msg_0.speed_units = 101U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23745U;
    msg.custom.assign("UKVSVUAFVPRLXFSGGRYYDKMXSOQNVAGQZFQQNGHBUWEFHABLUTTNSSIIBYJSLPOVDYJPLHMEGBIIFKVFJILEZDVDCUWDQAJBSTKZALCWTSPOZCTOZCE");

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
    msg.setTimeStamp(0.551973663837);
    msg.setSource(32735U);
    msg.setSourceEntity(163U);
    msg.setDestination(9871U);
    msg.setDestinationEntity(208U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2538669342U;
    tmp_msg_0.start_lat = 0.932315055069;
    tmp_msg_0.start_lon = 0.360106797811;
    tmp_msg_0.start_z = 0.16010757129;
    tmp_msg_0.start_z_units = 131U;
    tmp_msg_0.end_lat = 0.866153957026;
    tmp_msg_0.end_lon = 0.511168372325;
    tmp_msg_0.end_z = 0.309198541871;
    tmp_msg_0.end_z_units = 80U;
    tmp_msg_0.speed = 0.18229671335;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.lradius = 0.582548327548;
    tmp_msg_0.flags = 91U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3539U;
    msg.custom.assign("IDMFLURNBGJFHLJOOTEBRBFNGUELYCWLZPGQQVPAHEMENKDLUMOUKOSQUCNVWGWMNMDPXQV");

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
    msg.setTimeStamp(0.975470031906);
    msg.setSource(52457U);
    msg.setSourceEntity(79U);
    msg.setDestination(23643U);
    msg.setDestinationEntity(186U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.401585856653;
    tmp_msg_0.speed_units = 35U;
    msg.control.set(tmp_msg_0);
    msg.duration = 56511U;
    msg.custom.assign("GDHIKWFADXYITYDSRDTUKVPNWVHCLLJOFGLJPEKEWIAFPKNGQMZQTVVCCPLOQBXGCOGSNOMTBRUJOULODUEKIBJHBBZQJLSMUXNFREUXRRLYOSPJODBTGEQHZEVDJYALNIRYIPGYHISPNATYTMVEFZHNIKYHMOLFMOTSFBAMKJUBKRXEVQBCQYJEUDAYWQUHJVXZRTTRBZWEWICNXFPGDNXVM");

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
    msg.setTimeStamp(0.749861941382);
    msg.setSource(54240U);
    msg.setSourceEntity(229U);
    msg.setDestination(29524U);
    msg.setDestinationEntity(131U);
    msg.timeout = 4297U;
    msg.lat = 0.61940225309;
    msg.lon = 0.713568593711;
    msg.z = 0.164427995151;
    msg.z_units = 147U;
    msg.speed = 0.545883844496;
    msg.speed_units = 179U;
    msg.bearing = 0.706944139385;
    msg.cross_angle = 0.0667731013281;
    msg.width = 0.145066756843;
    msg.length = 0.958936520188;
    msg.hstep = 0.839006376829;
    msg.coff = 94U;
    msg.alternation = 248U;
    msg.flags = 199U;
    msg.custom.assign("PUJUCNJXMOGHTRVSHSZKFOXQDTRCJPFDGGIUOVTDRMEPHKPLNDSQMLCSQVGMETSFFUOMETAFPWBCLNUYTQYBIRNTBAFUVTBAZXYWAEXOYDBRMINGCIIREJWAHVZTZFVYKKLDWEMSILHYCGLACZHVFZNBQKIRUJMHYPBTWLRNEDSWRPGMKAFHGQIDMZCPJQKLNVPXQAKOWYUDLWNZKSEXVG");

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
    msg.setTimeStamp(0.244755509647);
    msg.setSource(62616U);
    msg.setSourceEntity(26U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(202U);
    msg.timeout = 52457U;
    msg.lat = 0.367286934132;
    msg.lon = 0.630717701182;
    msg.z = 0.144159946211;
    msg.z_units = 223U;
    msg.speed = 0.528988550455;
    msg.speed_units = 3U;
    msg.bearing = 0.362905339194;
    msg.cross_angle = 0.39073342671;
    msg.width = 0.881895687202;
    msg.length = 0.0777068798577;
    msg.hstep = 0.0598549354381;
    msg.coff = 125U;
    msg.alternation = 184U;
    msg.flags = 185U;
    msg.custom.assign("DDIOXTMXWKCSTZDQPAONQFXHDLFLOKVWCJRRPVPFBMTYWXFCUAQTAMNOZXKBJJGLHDDKLOVYNJHHIGTGQUGVFYYCFELGFSTTRYAFMIPQGSNUSQCJZDEZMKSRBWAUHSRVANIRXWWXLSCCYIZOYHVYHPKEFQBEVRJRPQKXEKKZZWLMUYGYZDUEIVANEPBSP");

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
    msg.setTimeStamp(0.585195433653);
    msg.setSource(46878U);
    msg.setSourceEntity(127U);
    msg.setDestination(51376U);
    msg.setDestinationEntity(87U);
    msg.timeout = 11409U;
    msg.lat = 0.0848088440985;
    msg.lon = 0.705964576577;
    msg.z = 0.882156521804;
    msg.z_units = 217U;
    msg.speed = 0.761752784852;
    msg.speed_units = 204U;
    msg.bearing = 0.394982039899;
    msg.cross_angle = 0.611569146461;
    msg.width = 0.79185981971;
    msg.length = 0.363065331264;
    msg.hstep = 0.691072584912;
    msg.coff = 225U;
    msg.alternation = 210U;
    msg.flags = 92U;
    msg.custom.assign("EPKMGOQAWNWZPTQWLUOXVUUVVTXYDJOIBPWFLRDAFATYWBJBEZXSSAUNGMLBFJLHRUELSVEDFRXAOJUJREYYQPHIPBQICDJOUVKRFCELBUZLAHTQYWVZZIZGPGEICXKLNQHQNGHDFMHYBECIIAYVGJSCHNWMTCKBPGMPDTKQSBOMELYOQSQOGCCTTMXSGIDDAMSPMEOLVCRXTURNSFN");

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
    msg.setTimeStamp(0.825014299553);
    msg.setSource(46768U);
    msg.setSourceEntity(235U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(212U);
    msg.timeout = 55522U;
    msg.lat = 0.0761467720372;
    msg.lon = 0.486943068518;
    msg.z = 0.558185391048;
    msg.z_units = 221U;
    msg.speed = 0.379591352475;
    msg.speed_units = 108U;
    msg.custom.assign("XSFERJRJYQJEVTEFGFGMRIALHKQGTVKJASUPVIDGSLWVQEEOOTDVRKOAFIBXRKWTSBCDKOYHXZOTFPAJYKBEGUJHQKDHDLWJTMONAPZHFCICWXNLLIIMHGFDMWJIUUZCYMWOBWPRTDHWMBPNDQIRXMSZANUQIRBZPCAFBACTBYOIBPRPRMVYALYCSNVFVDLATWQGGCQKW");

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
    msg.setTimeStamp(0.695918368378);
    msg.setSource(57889U);
    msg.setSourceEntity(78U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(220U);
    msg.timeout = 12514U;
    msg.lat = 0.887710419144;
    msg.lon = 0.776492116941;
    msg.z = 0.014733329292;
    msg.z_units = 202U;
    msg.speed = 0.170554677085;
    msg.speed_units = 30U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.12720916709;
    tmp_msg_0.y = 0.223543135412;
    tmp_msg_0.z = 0.366273680862;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LAJKYXQAWWTDYIWEYDNCHSZVDGFBSMNLSWYQRYAJUTFIHVSZGDRADERRIJQLDIPKOXIURHGWVXJXSKGPVACSOKTOEEOMNPCVMZTVNCBQDQBQLNEIXKFYOLFVXQMMMDUGXOQGCTMAUNJHRZKIFPMKCNFGPKFXLPZFXBRQZFJBVPPRLDJISGAYBWKDAEZTALBHOIBOB");

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
    msg.setTimeStamp(0.571567820578);
    msg.setSource(45605U);
    msg.setSourceEntity(17U);
    msg.setDestination(2757U);
    msg.setDestinationEntity(138U);
    msg.timeout = 47268U;
    msg.lat = 0.851673330917;
    msg.lon = 0.57305659279;
    msg.z = 0.803500642112;
    msg.z_units = 8U;
    msg.speed = 0.346214195816;
    msg.speed_units = 107U;
    msg.custom.assign("AHGULFIUGSBMOBKGZVXXMNILIKJFVPBFORCFHYWNAHHUTMVXSY");

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
    msg.setTimeStamp(0.137513564608);
    msg.setSource(4514U);
    msg.setSourceEntity(6U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(109U);
    msg.x = 0.909276487446;
    msg.y = 0.79244140686;
    msg.z = 0.0891879976688;

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
    msg.setTimeStamp(0.268025431052);
    msg.setSource(29936U);
    msg.setSourceEntity(44U);
    msg.setDestination(35411U);
    msg.setDestinationEntity(84U);
    msg.x = 0.934873384609;
    msg.y = 0.983889978989;
    msg.z = 0.277951551793;

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
    msg.setTimeStamp(0.160470801846);
    msg.setSource(9303U);
    msg.setSourceEntity(223U);
    msg.setDestination(18190U);
    msg.setDestinationEntity(248U);
    msg.x = 0.421949099487;
    msg.y = 0.952821216617;
    msg.z = 0.894641765733;

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
    msg.setTimeStamp(0.557945554989);
    msg.setSource(2688U);
    msg.setSourceEntity(60U);
    msg.setDestination(18193U);
    msg.setDestinationEntity(8U);
    msg.timeout = 62234U;
    msg.lat = 0.443885162121;
    msg.lon = 0.467380575108;
    msg.z = 0.684567030674;
    msg.z_units = 130U;
    msg.amplitude = 0.886758914536;
    msg.pitch = 0.626345748185;
    msg.speed = 0.194822343294;
    msg.speed_units = 178U;
    msg.custom.assign("DWRTFZWPQLARMBJAIDLPXPMPNQUHEFSQYPNHIYYZFYAMAHENOUIPCKXSPVGHUBWCEAVRHLBNFVZWZAXOQOYVCFDMCYRFYDLYAGSVEGDHJLCBTUHZMMSEEGWQOZCWDKKJJTSRRUOLDQJZAKOBQZKUZWMLZILNTEFSKAHFCVXJYHEHNUVJDJSUMXOBXLNMXSXQYEBVWUTMICVD");

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
    msg.setTimeStamp(0.546091682394);
    msg.setSource(19862U);
    msg.setSourceEntity(115U);
    msg.setDestination(33051U);
    msg.setDestinationEntity(62U);
    msg.timeout = 55846U;
    msg.lat = 0.562343228805;
    msg.lon = 0.260563859257;
    msg.z = 0.54963872891;
    msg.z_units = 15U;
    msg.amplitude = 0.36908078263;
    msg.pitch = 0.226351741165;
    msg.speed = 0.922774303263;
    msg.speed_units = 67U;
    msg.custom.assign("KKVMXALPRLAPDDTSQLTWXBUQMHVBLTMCHRBBJXZVFGRMXYUPRKJESKMGFGKPMLHHJPDGSIESQQDZXUYKLCQNNYONEVCRFH");

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
    msg.setTimeStamp(0.3956273013);
    msg.setSource(13302U);
    msg.setSourceEntity(237U);
    msg.setDestination(6850U);
    msg.setDestinationEntity(220U);
    msg.timeout = 20147U;
    msg.lat = 0.677372668634;
    msg.lon = 0.0440592203048;
    msg.z = 0.883077221873;
    msg.z_units = 252U;
    msg.amplitude = 0.676486659547;
    msg.pitch = 0.600021804003;
    msg.speed = 0.860273083659;
    msg.speed_units = 76U;
    msg.custom.assign("AHFNYXIHQKJDBMGQADZUPOGCLMPBZUDJGRAECWKFASFMEHGGTUSTCRQBSKMMOUSIAQFAESILYHWEIOTC");

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
    msg.setTimeStamp(0.822907039858);
    msg.setSource(61610U);
    msg.setSourceEntity(250U);
    msg.setDestination(16744U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.517834913142);
    msg.setSource(29402U);
    msg.setSourceEntity(101U);
    msg.setDestination(10926U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.287025954181);
    msg.setSource(15280U);
    msg.setSourceEntity(185U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.218727261582);
    msg.setSource(5652U);
    msg.setSourceEntity(131U);
    msg.setDestination(53299U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.0236986773119;
    msg.lon = 0.714068601546;
    msg.z = 0.374132843572;
    msg.z_units = 154U;
    msg.radius = 0.332622569716;
    msg.duration = 36942U;
    msg.speed = 0.775209283067;
    msg.speed_units = 165U;
    msg.custom.assign("UJYVNPJCSDGVUCIYDVQBZOSOKGFGZLQOVJBGYYOFCXHUFGLDVMUSNAQQOXLIEZWTYEBSLRDJHEPQEVTUHBZSTEFZWRMDTQOPXNAHDJLBTBSCPIPKGVKKRAKPUQGUNEHNAETLCAMRCGBKCSMUMLYHFWZIKTZXMFKFHNDVJWKFCOTAEDWKXMRWIAFYGUYPXYLASYSRIJIWPJHRJZHIDMOBPMFTIEXNAOIMZLBNWXUJEDLGV");

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
    msg.setTimeStamp(0.768668061742);
    msg.setSource(4933U);
    msg.setSourceEntity(249U);
    msg.setDestination(4454U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.177388573249;
    msg.lon = 0.0737428408575;
    msg.z = 0.915136847052;
    msg.z_units = 150U;
    msg.radius = 0.215549820139;
    msg.duration = 55877U;
    msg.speed = 0.606120086521;
    msg.speed_units = 250U;
    msg.custom.assign("JRFIYGJBRXBKQBVNCOYRNWYYWAJSRZEPROWVCFDUXNZWBEXMKAOXJTSTFXIMMWLBYHHHPHTDHPLDINMNCGKWRTALYDFADYXPKLUVGIVGMYQZUWZKCFMAOYBKHRTNXIIQISOEKLVZUBIGJNZVGEEIAQUOCOSRQBVIHWFJOXRN");

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
    msg.setTimeStamp(0.361912102174);
    msg.setSource(49831U);
    msg.setSourceEntity(25U);
    msg.setDestination(33026U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.033761482881;
    msg.lon = 0.121796467654;
    msg.z = 0.255481106361;
    msg.z_units = 46U;
    msg.radius = 0.643440735741;
    msg.duration = 2126U;
    msg.speed = 0.248925607896;
    msg.speed_units = 100U;
    msg.custom.assign("NSSYRCLUZOHPNCOPDUXKPFEZTJEDBBFJGWBAHGRCIFPMFQDUMAHQKATTBUYZUFAFTNZKWRZTTXZAVFNVEFBEVOXOTANYLIIOBYZMHDVHVYGQXGBMJWWPMCHKIWJLCJIPSQSHDWLEUODMUYSRKERSBJBGSSWUMKGNGKTNPQALGIKNJGQLHIERDY");

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
    msg.setTimeStamp(0.200243852875);
    msg.setSource(4343U);
    msg.setSourceEntity(101U);
    msg.setDestination(50550U);
    msg.setDestinationEntity(159U);
    msg.timeout = 48684U;
    msg.flags = 208U;
    msg.lat = 0.315251073391;
    msg.lon = 0.380575313711;
    msg.start_z = 0.907803511586;
    msg.start_z_units = 23U;
    msg.end_z = 0.994252705832;
    msg.end_z_units = 118U;
    msg.radius = 0.485447868558;
    msg.speed = 0.243837613914;
    msg.speed_units = 253U;
    msg.custom.assign("IQTEZLUZXSDGGIFULMSHY");

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
    msg.setTimeStamp(0.169537019504);
    msg.setSource(6654U);
    msg.setSourceEntity(215U);
    msg.setDestination(35821U);
    msg.setDestinationEntity(36U);
    msg.timeout = 54830U;
    msg.flags = 82U;
    msg.lat = 0.350419701879;
    msg.lon = 0.963629036541;
    msg.start_z = 0.534153414601;
    msg.start_z_units = 183U;
    msg.end_z = 0.084835745134;
    msg.end_z_units = 119U;
    msg.radius = 0.803433397656;
    msg.speed = 0.713229353849;
    msg.speed_units = 30U;
    msg.custom.assign("UUUEPXJVRVZIRVNWUQDLPOERCSSBNAGUDEPNBFEFWZGEWZTWKXHJTKGNJZKHPHRRAGKWYFHNBRIRKKARAMGXBDOGQYMXMTOAAVUTSILNDSHFBJVGVJXVUSQFGZMYQLSPJGPTWGVYYZZBWLTVPMOKNEHZOLHXACISBTJJB");

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
    msg.setTimeStamp(0.662976542991);
    msg.setSource(18869U);
    msg.setSourceEntity(8U);
    msg.setDestination(24783U);
    msg.setDestinationEntity(199U);
    msg.timeout = 7050U;
    msg.flags = 16U;
    msg.lat = 0.25742137275;
    msg.lon = 0.727583225812;
    msg.start_z = 0.502844304939;
    msg.start_z_units = 22U;
    msg.end_z = 0.873071331612;
    msg.end_z_units = 27U;
    msg.radius = 0.953715942609;
    msg.speed = 0.0620933678668;
    msg.speed_units = 206U;
    msg.custom.assign("WWKOPEPREATSQVDFORMCGDTCYIFSRKIQRCQD");

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
    msg.setTimeStamp(0.235515601604);
    msg.setSource(251U);
    msg.setSourceEntity(97U);
    msg.setDestination(61703U);
    msg.setDestinationEntity(20U);
    msg.timeout = 12251U;
    msg.lat = 0.868253730506;
    msg.lon = 0.971550873476;
    msg.z = 0.530977807545;
    msg.z_units = 137U;
    msg.speed = 0.790049831814;
    msg.speed_units = 209U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.182859523007;
    tmp_msg_0.y = 0.67575931971;
    tmp_msg_0.z = 0.531347806616;
    tmp_msg_0.t = 0.232986742124;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DZRVEPRMMBJSNZAML");

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
    msg.setTimeStamp(0.350606768262);
    msg.setSource(19253U);
    msg.setSourceEntity(49U);
    msg.setDestination(20115U);
    msg.setDestinationEntity(13U);
    msg.timeout = 39060U;
    msg.lat = 0.854165969851;
    msg.lon = 0.282160465442;
    msg.z = 0.882952145707;
    msg.z_units = 31U;
    msg.speed = 0.263735626139;
    msg.speed_units = 215U;
    msg.custom.assign("XCABEXFMSELDRJPUHXYFDYPHPVRZCISYHMWOQCOEPKQFLQDZSZTAKNGUEZCTGRNOTUAQQIAJTBLVXVTVKYKJIIOESFIONMRPHXWGQOIHANNL");

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
    msg.setTimeStamp(0.372134823471);
    msg.setSource(29297U);
    msg.setSourceEntity(101U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(117U);
    msg.timeout = 40167U;
    msg.lat = 0.471833768089;
    msg.lon = 0.769955196145;
    msg.z = 0.175483520529;
    msg.z_units = 189U;
    msg.speed = 0.247746478176;
    msg.speed_units = 30U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.103325739934;
    tmp_msg_0.y = 0.661625062922;
    tmp_msg_0.z = 0.359129161177;
    tmp_msg_0.t = 0.0912865247677;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("THXPHCQMGSBWBHNPPUAFLEBSYVLGNHJVAKHLRSTRNZXQIDPDPVFIQIJOFCLDINZMWMBLWUDJCNVEVKGDZANWOGNRUIDXZFDCYCYKODBXTEMOPEJZOZKBHOKQTQCJZPQMAEIZYWYHBUVBSBHXLGNAGCCLWEOKIRDS");

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
    msg.setTimeStamp(0.61567326289);
    msg.setSource(18495U);
    msg.setSourceEntity(172U);
    msg.setDestination(31242U);
    msg.setDestinationEntity(63U);
    msg.x = 0.900326690962;
    msg.y = 0.0953928967555;
    msg.z = 0.329008406225;
    msg.t = 0.0970173549986;

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
    msg.setTimeStamp(0.76452505611);
    msg.setSource(38447U);
    msg.setSourceEntity(61U);
    msg.setDestination(37816U);
    msg.setDestinationEntity(64U);
    msg.x = 0.867452865618;
    msg.y = 0.0265036479778;
    msg.z = 0.819298530669;
    msg.t = 0.415073923144;

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
    msg.setTimeStamp(0.689529075469);
    msg.setSource(11479U);
    msg.setSourceEntity(173U);
    msg.setDestination(2929U);
    msg.setDestinationEntity(225U);
    msg.x = 0.239854587705;
    msg.y = 0.753527530179;
    msg.z = 0.164057673601;
    msg.t = 0.958932064871;

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
    msg.setTimeStamp(0.0248497007838);
    msg.setSource(3775U);
    msg.setSourceEntity(125U);
    msg.setDestination(27836U);
    msg.setDestinationEntity(183U);
    msg.timeout = 19683U;
    msg.name.assign("YLFAJWEELPYXUUUJKFURJSSQGTONEDUMXLLEFPIF");
    msg.custom.assign("CNJFTYHWNGWKQEQSMLHWTOMUYYTENRQPFJLUSDWWJLILOSRXRVBJNSOYKPNQSKDKZIQAHPBXPOAERUGIGAVDYBSADWQZECXFHVBTTAQPCZYEEPCHVFJNFUGDGPBZJIGVLAYVPODTHZHBIXORSVAKB");

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
    msg.setTimeStamp(0.736992420509);
    msg.setSource(48402U);
    msg.setSourceEntity(106U);
    msg.setDestination(59058U);
    msg.setDestinationEntity(222U);
    msg.timeout = 41816U;
    msg.name.assign("PRRFVVUTJEDWLWMLWCZBAHNADQDKQUBBVXIXDHZKETRRRZPVBSWSXTENOUGLOCCMUDVKKTFUOJDHMSOZEWXXXYAQWVGQFZZODZYYCINQDEGEMG");
    msg.custom.assign("UGVDSGGTVCFYSISOYEIOIQAFARRMKZQUYKWUDPIPZBGJGBLAYMXSPDGWBFODPMLOWJUXYESGJUQKNYXOIRKZFMBLIWDHHENMJKROTKDYDHUUXJOJVFXBDCPGDLYGQVBHCRUEZNALXAVIHBQPMOTKKZHVCQVMQCLJKCMNGNAELC");

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
    msg.setTimeStamp(0.179712883457);
    msg.setSource(38428U);
    msg.setSourceEntity(119U);
    msg.setDestination(47407U);
    msg.setDestinationEntity(174U);
    msg.timeout = 63382U;
    msg.name.assign("NBGAEGEISGBMQPRPNZTVUAUOEEPKOOCIDZXHAWYJRLKCTRZCLIFWHVMYIFLJQQHIMKQQCRAMZDHMHAPSJPEMFTQAYTJTKJWNNXSTOOROJUMCMPIDTYNEWLNMILDSKSKYKZSYBXPAQZDUFCVDHGLXCHDNUUXVLHWTPOVBVNVNJZWOSFWXJESVBKRSDFEHDJVWTFIXOYGBBYDUBLOBCNIGZXRYSKGAUWACYQPRRUBG");
    msg.custom.assign("QBVAWOGNGMFRYSQVPVHDUKDULGXZMUUDFJQSLTCIIMZ");

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
    msg.setTimeStamp(0.995840751253);
    msg.setSource(26207U);
    msg.setSourceEntity(149U);
    msg.setDestination(12935U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.393992296267;
    msg.lon = 0.684255421172;
    msg.z = 0.552278450164;
    msg.z_units = 235U;
    msg.speed = 0.722854958231;
    msg.speed_units = 75U;
    msg.start_time = 0.940958519093;
    msg.custom.assign("TXSNIDREUMTGFAZQCZUEIRNLFPBFVPKJSJTCMDWLUWLVHOENCCKSRLSRPXKBKMHVAHKIIWNOQJSFHMQAUUQDBLYPWNJGONTPIWFXEBMCZGTYJYOWNJINBHVVQFAHVTDKTBFRUY");

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
    msg.setTimeStamp(0.530844497111);
    msg.setSource(24955U);
    msg.setSourceEntity(183U);
    msg.setDestination(53595U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.689082730353;
    msg.lon = 0.32737185167;
    msg.z = 0.222099090802;
    msg.z_units = 164U;
    msg.speed = 0.219361283602;
    msg.speed_units = 101U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.00687390869167;
    tmp_msg_0.y = 0.74472131617;
    tmp_msg_0.z = 0.268191573582;
    tmp_msg_0.t = 0.974883709548;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 487U;
    tmp_msg_1.off_x = 0.480439616147;
    tmp_msg_1.off_y = 0.973365997622;
    tmp_msg_1.off_z = 0.062107399908;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.563197634833;
    msg.custom.assign("EIYFVTEWZFMKRJPAYLTNHOHFVZBEAEMIUBLQWBWLUOGXOAQSYNVYCHCNAJMBFRUIGYPVULVMQJHVKWSMULNWAZBTZFHJIKFIUZDPSBSQIEJOAHDHSTRGXNRIGBRFJSYRITRXSKFDPDKAFRDZWCXPIPPTGJXBQRZDHLUJEWGWVYQSXMJ");

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
    msg.setTimeStamp(0.714092230675);
    msg.setSource(16330U);
    msg.setSourceEntity(40U);
    msg.setDestination(64422U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.851607015541;
    msg.lon = 0.384327154637;
    msg.z = 0.230235827647;
    msg.z_units = 132U;
    msg.speed = 0.828153325402;
    msg.speed_units = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5182U;
    tmp_msg_0.off_x = 0.905190921637;
    tmp_msg_0.off_y = 0.187112651126;
    tmp_msg_0.off_z = 0.0617645428411;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0328775668612;
    msg.custom.assign("VDGUBZHZQOCDDXHTXCHIFBDDVTJFVSWOSEWNWZEQQFFYPWDTLSSICDRSZROXICFBJSXCZYJLLLPZPIGFGOHDMKWHKKVEKAZAEBVROBDLGCGCNVYXMXEYOZEKCFBQSMMIREUZRICNLKOHUAEJKOUWTS");

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
    msg.setTimeStamp(0.360777421203);
    msg.setSource(2228U);
    msg.setSourceEntity(109U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(29U);
    msg.vid = 37682U;
    msg.off_x = 0.929283508353;
    msg.off_y = 0.181435530916;
    msg.off_z = 0.612798095165;

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
    msg.setTimeStamp(0.651504708729);
    msg.setSource(32440U);
    msg.setSourceEntity(63U);
    msg.setDestination(23323U);
    msg.setDestinationEntity(46U);
    msg.vid = 59574U;
    msg.off_x = 0.263852412239;
    msg.off_y = 0.260870769696;
    msg.off_z = 0.319327335041;

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
    msg.setTimeStamp(0.0991681958028);
    msg.setSource(65366U);
    msg.setSourceEntity(56U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(172U);
    msg.vid = 46064U;
    msg.off_x = 0.967536054905;
    msg.off_y = 0.226251298162;
    msg.off_z = 0.0082407408949;

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
    msg.setTimeStamp(0.0137662104022);
    msg.setSource(27150U);
    msg.setSourceEntity(45U);
    msg.setDestination(26989U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.64670154297);
    msg.setSource(30096U);
    msg.setSourceEntity(33U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.560177920026);
    msg.setSource(12516U);
    msg.setSourceEntity(42U);
    msg.setDestination(5115U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.376529267085);
    msg.setSource(22488U);
    msg.setSourceEntity(184U);
    msg.setDestination(49883U);
    msg.setDestinationEntity(216U);
    msg.mid = 20040U;

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
    msg.setTimeStamp(0.617325555942);
    msg.setSource(11248U);
    msg.setSourceEntity(195U);
    msg.setDestination(9309U);
    msg.setDestinationEntity(166U);
    msg.mid = 35976U;

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
    msg.setTimeStamp(0.128057776749);
    msg.setSource(58178U);
    msg.setSourceEntity(171U);
    msg.setDestination(16277U);
    msg.setDestinationEntity(140U);
    msg.mid = 48350U;

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
    msg.setTimeStamp(0.289337706769);
    msg.setSource(48037U);
    msg.setSourceEntity(153U);
    msg.setDestination(9529U);
    msg.setDestinationEntity(224U);
    msg.state = 110U;
    msg.eta = 36290U;
    msg.info.assign("ZGJDXATMHYLQNMJXEBFNDQQBHQQDUZBUVTGJIZSJNBRRHLKWGGYNCXJZFSPOBTYJKNMKRDXVXUFMNYCOESBABF");

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
    msg.setTimeStamp(0.987820539613);
    msg.setSource(14861U);
    msg.setSourceEntity(130U);
    msg.setDestination(11695U);
    msg.setDestinationEntity(58U);
    msg.state = 46U;
    msg.eta = 52119U;
    msg.info.assign("JCHQOLLMCGJBEIIKCACEANKPXMDFCJQHTNJZOCIOBDVJWPNFGGIZNIUPJNSGOIRRHHLPTLVEEYZRKOZFJOUZQBSARYYGHWFEYFMYGPSFLKPABXMYUTSNXOAINSRXH");

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
    msg.setTimeStamp(0.175040339349);
    msg.setSource(40145U);
    msg.setSourceEntity(134U);
    msg.setDestination(58206U);
    msg.setDestinationEntity(254U);
    msg.state = 253U;
    msg.eta = 12246U;
    msg.info.assign("LAHUZUMZCJGDRVLZADKPPJQLPKGYWTXGYDSUMZQENJATHGVGPBVMTSNYTIIUYXWMCFCCONNWJWBTQGOYLQHEFBPMFRBSVJPRASBAFYMRLNVYDWJDOEEHHPUXBOHIKHZXDMNYBZSWRXASWJNMKLOWKDWPSVKEDMERFARUGLNEPFGOHBKQVATNW");

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
    msg.setTimeStamp(0.820481474018);
    msg.setSource(63471U);
    msg.setSourceEntity(197U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(176U);
    msg.system = 11677U;
    msg.duration = 33475U;
    msg.speed = 0.566828965914;
    msg.speed_units = 206U;
    msg.x = 0.553844185525;
    msg.y = 0.0739568446434;
    msg.z = 0.368435889355;
    msg.z_units = 62U;

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
    msg.setTimeStamp(0.11025833603);
    msg.setSource(4859U);
    msg.setSourceEntity(20U);
    msg.setDestination(34203U);
    msg.setDestinationEntity(147U);
    msg.system = 39819U;
    msg.duration = 28981U;
    msg.speed = 0.683232949126;
    msg.speed_units = 253U;
    msg.x = 0.964633524935;
    msg.y = 0.15944377518;
    msg.z = 0.89405228581;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.382575649626);
    msg.setSource(26669U);
    msg.setSourceEntity(79U);
    msg.setDestination(64201U);
    msg.setDestinationEntity(196U);
    msg.system = 64957U;
    msg.duration = 32751U;
    msg.speed = 0.562311142566;
    msg.speed_units = 111U;
    msg.x = 0.783883850371;
    msg.y = 0.377619481855;
    msg.z = 0.690279380852;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.0734813386402);
    msg.setSource(3151U);
    msg.setSourceEntity(230U);
    msg.setDestination(48192U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.18788065828;
    msg.lon = 0.54749641124;
    msg.speed = 0.822820508509;
    msg.speed_units = 88U;
    msg.duration = 49524U;
    msg.sys_a = 32358U;
    msg.sys_b = 14791U;
    msg.move_threshold = 0.600648132406;

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
    msg.setTimeStamp(0.866953029853);
    msg.setSource(37921U);
    msg.setSourceEntity(230U);
    msg.setDestination(50686U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.0407724613453;
    msg.lon = 0.146010884007;
    msg.speed = 0.0659622754565;
    msg.speed_units = 73U;
    msg.duration = 43444U;
    msg.sys_a = 49518U;
    msg.sys_b = 44678U;
    msg.move_threshold = 0.542463904172;

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
    msg.setTimeStamp(0.891272236407);
    msg.setSource(37787U);
    msg.setSourceEntity(133U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.0259961170353;
    msg.lon = 0.544573395088;
    msg.speed = 0.450047190719;
    msg.speed_units = 77U;
    msg.duration = 49731U;
    msg.sys_a = 7970U;
    msg.sys_b = 52946U;
    msg.move_threshold = 0.0851848532603;

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
    msg.setTimeStamp(0.905198150461);
    msg.setSource(51677U);
    msg.setSourceEntity(40U);
    msg.setDestination(20220U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.582501786598;
    msg.lon = 0.892833972489;
    msg.z = 0.341561149825;
    msg.z_units = 108U;
    msg.speed = 0.096868492606;
    msg.speed_units = 245U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.913698307356;
    tmp_msg_0.lon = 0.301844874894;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HQCTOMQOZWLMLTYWRETODHKNKXUGGLSSRYZTDZDSRPWPUVQFPEDHMVSGPNQOCKQHLUXQXJLYVCOWIIDWNIXGPYFHBMDUZUIEECXABJVHJHNBYEFJ");

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
    msg.setTimeStamp(0.568362154577);
    msg.setSource(61614U);
    msg.setSourceEntity(18U);
    msg.setDestination(60730U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.406030250328;
    msg.lon = 0.219845462279;
    msg.z = 0.854879975738;
    msg.z_units = 198U;
    msg.speed = 0.276163651563;
    msg.speed_units = 100U;
    msg.custom.assign("PCEYLQZKNBFKV");

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
    msg.setTimeStamp(0.0767890857295);
    msg.setSource(11536U);
    msg.setSourceEntity(58U);
    msg.setDestination(49206U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.298674789358;
    msg.lon = 0.637830537771;
    msg.z = 0.481133595697;
    msg.z_units = 14U;
    msg.speed = 0.552251588789;
    msg.speed_units = 80U;
    msg.custom.assign("MXJBWFUJKBIAAEPWKXXNWJCSLIHFUSEKDZXVDTDZQRTNSPXEBAWZHMKWKXPTKEFSSYBZFUAGOPNFCPWVFIJCQWDJYJUKDLBOOZJUVVTTOABVHPHXCHNTLXCNCGRNUNNRZRMPQJBGJFYYVRLFEGDWIAQGIIHBXZFECUROLIIOQTOLEGVU");

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
    msg.setTimeStamp(0.152992585336);
    msg.setSource(32216U);
    msg.setSourceEntity(83U);
    msg.setDestination(17658U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.522213253459;
    msg.lon = 0.300813711011;

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
    msg.setTimeStamp(0.385604389686);
    msg.setSource(59057U);
    msg.setSourceEntity(86U);
    msg.setDestination(11029U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.698703187488;
    msg.lon = 0.169944678189;

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
    msg.setTimeStamp(0.167284621782);
    msg.setSource(17257U);
    msg.setSourceEntity(114U);
    msg.setDestination(56053U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.34766905498;
    msg.lon = 0.311981176907;

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
    msg.setTimeStamp(0.162939760864);
    msg.setSource(61088U);
    msg.setSourceEntity(58U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(228U);
    msg.timeout = 45299U;
    msg.lat = 0.659641466955;
    msg.lon = 0.00928994980162;
    msg.z = 0.18094311576;
    msg.z_units = 13U;
    msg.pitch = 0.396417576114;
    msg.amplitude = 0.694281871829;
    msg.duration = 12101U;
    msg.speed = 0.900652457714;
    msg.speed_units = 37U;
    msg.radius = 0.563948634324;
    msg.direction = 192U;
    msg.custom.assign("XHAFICRNRWAVNEJICSDSBMGFWLDMXPFULDTSDHRSXEWVXZBMJKFTYEYECJTLUBMPOKHQRXVIAOZROHDUOZLEVSPAFJX");

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
    msg.setTimeStamp(0.577470811463);
    msg.setSource(14712U);
    msg.setSourceEntity(221U);
    msg.setDestination(47324U);
    msg.setDestinationEntity(123U);
    msg.timeout = 15281U;
    msg.lat = 0.221100302128;
    msg.lon = 0.464777436897;
    msg.z = 0.0235396112542;
    msg.z_units = 192U;
    msg.pitch = 0.567658701313;
    msg.amplitude = 0.338022787138;
    msg.duration = 14953U;
    msg.speed = 0.649494793491;
    msg.speed_units = 75U;
    msg.radius = 0.542573768151;
    msg.direction = 91U;
    msg.custom.assign("TXJXGDDZXHNGQIQMRVRRTGXZIGGOCRUAWDAEMASTAAIPBRQYIFHMDPYZEFYGMTNPFSCHVDJKUIXRHANSDTOMEWCGJSIAHONMMCFYRQGKSGMEXLNUJACHULRCONHWFQAYVSTBECYBWJNVUWWKTHKXNQUTSOBAWZXGBXJWVPFDOLSLWWZDEKL");

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
    msg.setTimeStamp(0.789959232879);
    msg.setSource(61363U);
    msg.setSourceEntity(142U);
    msg.setDestination(52211U);
    msg.setDestinationEntity(128U);
    msg.timeout = 46430U;
    msg.lat = 0.472593928053;
    msg.lon = 0.425509472733;
    msg.z = 0.305437097414;
    msg.z_units = 97U;
    msg.pitch = 0.251737116237;
    msg.amplitude = 0.325632174414;
    msg.duration = 55162U;
    msg.speed = 0.367123286926;
    msg.speed_units = 91U;
    msg.radius = 0.115154199463;
    msg.direction = 217U;
    msg.custom.assign("FLJFBCOGWAJCQPNQNJYWEBTPZSJKEIIVFVZRXYBHUYCJMVABXVUDLACFKHZWOMSRDRWSSDDCKCNWIMAHXHONNUBEPAKHBPFTIWWADNEJLMYKGOZVDRGTQTLTVFDLFVILHNOSZBKYGJMEXJOZUPUZKCVOTVBEOGJUXRZISTKGBPHAQMDYMTYJUXZRWAEXGQOFWLZTGC");

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
    msg.setTimeStamp(0.269340331435);
    msg.setSource(11959U);
    msg.setSourceEntity(18U);
    msg.setDestination(37997U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("ZMAKFNUHOBEXYHOEJLGJOBNJGUMGZWUSPMNVIEFAGGYG");
    msg.reference_frame = 103U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10393U;
    tmp_msg_0.off_x = 0.0189595216401;
    tmp_msg_0.off_y = 0.621225216698;
    tmp_msg_0.off_z = 0.442293441522;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WBDXFEAODJCGCAUIVPKLFLJRZCKMOWYXEILPCCPWXGUOTDTZUQXEHNCIGXJUGDKMCHISHKZVHQMEZNPPCSKMXHBOAOBAVBQRVUKIQETTDOUPRQEZUEOLRZSUQGVMNJYQTKXGFSJVYSWEUPSYOMRPYWGXRVVGINQIABIADCBDATPZLUQWLDQMGFNJNOFYLTJIMWFFWAHARLRNHKFFSVETLSSJYOSIBYAHGTZHJNKWBMDP");

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
    msg.setTimeStamp(0.21202806722);
    msg.setSource(31748U);
    msg.setSourceEntity(70U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(188U);
    msg.formation_name.assign("RFAGVVFUSDMFVKIAUXQCWFKOJBSTVJCKJGFPTMDTCZLWMWLWTUMQWGKWOEXEKTWMIDQKUYRORBSUGMEVOOJFJXUMNQRREZEDPXPDTBLTFKRNNSDLPSEIIWPSSNAAYSCAQPBIIPAZCZIUQAANHCJXUZYHCGOREORZECTXDJKAKAXCBJGHVQMCBPSXBHVQTVDZJZBLHBBONYIJTNUSLGNPYYLKDNHFYPMIZROUGHXHXMVEYDWIHOLHGRY");
    msg.reference_frame = 180U;
    msg.custom.assign("INYVDSGPUUGAKWYBCCYAGSLHXTWYRFCTLOJGMDIPJLAQMMEIWQJSKCUZIZQERXPGOXDYGNGNWDPMLOLWJFHFVGWYDANVBHCMMMJKUQREPONPPF");

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
    msg.setTimeStamp(0.715475342139);
    msg.setSource(39969U);
    msg.setSourceEntity(29U);
    msg.setDestination(33115U);
    msg.setDestinationEntity(8U);
    msg.formation_name.assign("SOOZFPIDPBYPGWJXUCHTUQMLOKZKRBVCBJBFUNBWRZDHXSWHKBUETYJQWMAJEIXIY");
    msg.reference_frame = 8U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 47074U;
    tmp_msg_0.off_x = 0.437282727259;
    tmp_msg_0.off_y = 0.548597071134;
    tmp_msg_0.off_z = 0.0851437336827;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VUJFUFQDIBUDLFKMNPRTJBQQTDKYHBVVARVJPBCCHQYUEIOUUFOPAAOEQKZFYWCQRBHDYDEICXRSIKELKTGENMBSESAZDVPYUTNGKSLSL");

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
    msg.setTimeStamp(0.326296842148);
    msg.setSource(58650U);
    msg.setSourceEntity(34U);
    msg.setDestination(24740U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("BXPKYYJMYZVRONJDTKRWGBVPEADYWFLADVIRQRQIJXVMVEQXIUETGGPLOEUQRICCAGGPTMWUQRFZRHENNNOFOHKOBIWMSLZCIVAKLYAXDWZKOCFSYUFPOHUDMQFTRJBUNMHEWSDWSNEMMZADHJEBQLKQYMCKFCZBGZDBGXHVHBSNIQZGNZDTATPXPWXMYEJXURTJUHSCYDVPAKVIUVBYCSTFLATOCPEXWBONJLFLLSJLNSJRIHKTQGOF");
    msg.formation_name.assign("JJRNJEKCLTXMNKZWAXDTHXPZUWVQUUMHOMEMRGANZTAUSZRFLZVPCKPLRBNDUCNBOBOXYMAXLZUPYGEDYSQHCPQPRHIVZQXXJDJKDUIJHECOGGEXMXGRSGATAWMCLWFBQZYVSLDNVMBFIGJACKYCOHGRTPUFCIOOOCKPILFWTFWARESVYTIMIHNHNVJYYVOYWSKBQFHWQFDNNVFEZBSBLKKAKDTQ");
    msg.plan_id.assign("LSNPMZUQVZCNDQFTVPZROYGQJUERBXDGCXFOFIPTROJBSMHCWZHAITEYWTAHSRAUEQLZCVRCWBHMJUDKKNADMMWSQLIDOLPWKOODGZDKBLRLIMGJYNJZMXBHKNCFUJTLRRUNHFSNSAWISCVPGLEAWONVXITBPBLIKPIYHEVBYQ");
    msg.description.assign("NDOKRXTJZNNWCGOKTZJRFRLKXIYQCBHEXDUYLKGJQKAQWTBHMPLWCIRCIYUDFHBGEWYKXTFBSEAZLODFFOESCRIAWBHESFJOJWGYOPBYNXYLYNPCPGAE");
    msg.leader_speed = 0.171072968041;
    msg.leader_bank_lim = 0.609828652499;
    msg.pos_sim_err_lim = 0.680024652501;
    msg.pos_sim_err_wrn = 0.107278980821;
    msg.pos_sim_err_timeout = 52665U;
    msg.converg_max = 0.397085342963;
    msg.converg_timeout = 33706U;
    msg.comms_timeout = 159U;
    msg.turb_lim = 0.331639802777;
    msg.custom.assign("VHPYXMMAUVKDXTDMPRDXIPHYBBZDTLOZKPWTTBUYAEOUOMELOMVCJRWNQVQLAFTNJEGLNVJTEEICOZGSFAUWJWCGBNKQJZHNWMDXCXXSZRGYIOZLRGOXEMJAAGPSPLMOKJYFKTRQUJRYTGZMSLBNAEUXHAYGUVQDOCELNMISWKCHLDCGBRFKVHGHBECEFIWBRPABDYA");

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
    msg.setTimeStamp(0.432621914501);
    msg.setSource(64694U);
    msg.setSourceEntity(254U);
    msg.setDestination(19751U);
    msg.setDestinationEntity(195U);
    msg.group_name.assign("EUVAHYEBJSIMQDDEEDRRMBZYAWIYBKRWSFUFVYOXFZDNUYRATGVQMTCGUPHNOYKXZUKHHHRBELYIZKFOLMJZTNGINLXMORNCSGSWHLNTKDCVRUPWHJWXXSBMPTWHACJDLMDOESKCUCXQGWAZIPGIJDE");
    msg.formation_name.assign("SACOYZFDUKRSDRSPBMVTJPCRQJXSKGOZOFWABWNJGQXGMRHATPEMIKJJFQCCIKOZSNZYLBVMCXXCJUQXIKFEXUEFQOOMVRWDQZUDVTTVZFIBPXGPKYTDCYGAUCHHJBHWIRDVFAVGEJYIWLLAHZEJLGKSTXFRINWQOYMSVKENDOLKMYBYEBEHTPDNSQYUTHIUHEADXLNTBGMAUMRCPFDTWBGUCPIEWH");
    msg.plan_id.assign("AJKXEIOVTLRGMWLOPKWMMCFBKFNMBVQMARKZKDCISGKQBAXIWYFWLVLRDMEIGW");
    msg.description.assign("WGWEJRYPRSOCPVSHJXRUSMZHLVJSIGUFIMXKOKDPVNDICHLZYHEVWZBATWQCPAPAOLOOXIDGIFQCIKZGMEHZRKYBDYHZPNKTQWACHLTUVLFITRBAMVTJCDOZOLOUYWTKTDSZBHWMBSUUOQIEJPGSVMJXEHJTNOZNLGFFDPNFHJEWQKVMPFDFNQDRXJRGPAGEM");
    msg.leader_speed = 0.524719097582;
    msg.leader_bank_lim = 0.377631917007;
    msg.pos_sim_err_lim = 0.204705202872;
    msg.pos_sim_err_wrn = 0.154384103693;
    msg.pos_sim_err_timeout = 30678U;
    msg.converg_max = 0.902368008729;
    msg.converg_timeout = 62670U;
    msg.comms_timeout = 15348U;
    msg.turb_lim = 0.953503867538;
    msg.custom.assign("MHNDFVDAYHJUMXYNSENBIQZYRXEUIALLCGPHEOUPTJQZQ");

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
    msg.setTimeStamp(0.783941194162);
    msg.setSource(39723U);
    msg.setSourceEntity(41U);
    msg.setDestination(59547U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("LLROBQMSWJMCPQCAXMRKTGRMRWBZVDOGBEXKHGWDBNGVHCESTZGXZFXXQTVCBIKJFSONFEQWAPCNLDDAOGRRUXHVZTPGQPWHFLXYDPWLEXYIRMUJISRPYETANSYPBEFAUAOJJSYFJYIUSOTWOLBUMILVCUUOCV");
    msg.formation_name.assign("ZHJYLYUMGTXZBTPMGLGWHFVUKIXOUOVDONHTAQEXUFSIJMNPGEFUCPKLSXDHQJNQVDBEHWGWYKQXHVRBMROAWLACPIUHKILTGNCPRZVJYSUPJQWLVVUGASSMVLLSZMENTWDMCKTRYXBNIZOYRAWKAFJYIHVJSLXIPGKCQKEWBBTXOPD");
    msg.plan_id.assign("RRYEGPLFFUXYITVAZBEEKVFIDQRQLFONDYCJT");
    msg.description.assign("GFYNKRDLIFBYMCAJHFBQTGFLXUCNCJXZQZYUDWJKXBJTBNDLMTRIFBJXKHVGHQDMNESHXMXLDPAPMAOIXDAFZBVBTLMCCOWVRUAWIAOGPEJSGZFZZBZXMNVUEIJJRBGDJYZGYQIQCEPIOITEAURNJCCLWQOMLOMINMTFQBPHVKSHPGPTTGERKGLKSZWKQHNEVKCNOVAEQWWETHYXARZSKRVHXOCUSOYSLSPUSWRFSNQHWFEUYA");
    msg.leader_speed = 0.250419374121;
    msg.leader_bank_lim = 0.751585201612;
    msg.pos_sim_err_lim = 0.0604172150707;
    msg.pos_sim_err_wrn = 0.853395525662;
    msg.pos_sim_err_timeout = 60074U;
    msg.converg_max = 0.525178830893;
    msg.converg_timeout = 34568U;
    msg.comms_timeout = 54743U;
    msg.turb_lim = 0.138508304491;
    msg.custom.assign("TICXMGGFWNRYNBPVDVLYRKWXNAHFDKZAGNMVEHAKPGLOCSDVDAGRSSQMJMXMNHWVJHUZSYLAKDSMEQUZDPBHFUKTIXPOQYFFHSHJKGIPBWXIQMOZDALYXWVBUVQNKPLVWJWVDINZISMTGAOWJYPQZLXFUCMFHOZJIYFYTXZBUETBHEBJOBBKEAQSQVGERZJGECDPNMCCAJEHABRKEOCXCNRUJCILFTGCLERRWSXTKLOIIYDZQSULT");

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
    msg.setTimeStamp(0.395454501887);
    msg.setSource(29571U);
    msg.setSourceEntity(168U);
    msg.setDestination(922U);
    msg.setDestinationEntity(55U);
    msg.control_src = 43333U;
    msg.control_ent = 72U;
    msg.timeout = 0.613259342344;
    msg.loiter_radius = 0.177376951377;
    msg.altitude_interval = 0.0953901233122;

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
    msg.setTimeStamp(0.137446643177);
    msg.setSource(47739U);
    msg.setSourceEntity(92U);
    msg.setDestination(18417U);
    msg.setDestinationEntity(199U);
    msg.control_src = 28277U;
    msg.control_ent = 85U;
    msg.timeout = 0.416249096498;
    msg.loiter_radius = 0.385895139572;
    msg.altitude_interval = 0.673692548746;

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
    msg.setTimeStamp(0.44261241377);
    msg.setSource(22732U);
    msg.setSourceEntity(193U);
    msg.setDestination(22612U);
    msg.setDestinationEntity(37U);
    msg.control_src = 28203U;
    msg.control_ent = 101U;
    msg.timeout = 0.912274961481;
    msg.loiter_radius = 0.0884494738587;
    msg.altitude_interval = 0.0049890367412;

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
    msg.setTimeStamp(0.0988288848426);
    msg.setSource(12339U);
    msg.setSourceEntity(133U);
    msg.setDestination(2562U);
    msg.setDestinationEntity(137U);
    msg.flags = 46U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.533100966806;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.920179085244;
    tmp_msg_1.z_units = 83U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.780947291203;
    msg.lon = 0.761797713591;
    msg.radius = 0.28620129468;

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
    msg.setTimeStamp(0.936567456097);
    msg.setSource(3709U);
    msg.setSourceEntity(209U);
    msg.setDestination(52203U);
    msg.setDestinationEntity(194U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.595037816211;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0750357904465;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.174714172641;
    msg.lon = 0.367785160268;
    msg.radius = 0.106341743777;

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
    msg.setTimeStamp(0.536886125488);
    msg.setSource(26517U);
    msg.setSourceEntity(238U);
    msg.setDestination(24161U);
    msg.setDestinationEntity(76U);
    msg.flags = 114U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.53362106529;
    tmp_msg_0.speed_units = 18U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.897188884675;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.762389156759;
    msg.lon = 0.276290400841;
    msg.radius = 0.166228524363;

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
    msg.setTimeStamp(0.17913496365);
    msg.setSource(23418U);
    msg.setSourceEntity(230U);
    msg.setDestination(21871U);
    msg.setDestinationEntity(53U);
    msg.control_src = 7415U;
    msg.control_ent = 47U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 169U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.989725672818;
    tmp_tmp_msg_0_0.speed_units = 22U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.02626288292;
    tmp_tmp_msg_0_1.z_units = 67U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.930364188906;
    tmp_msg_0.lon = 0.286346885521;
    tmp_msg_0.radius = 0.350790760371;
    msg.reference.set(tmp_msg_0);
    msg.state = 98U;
    msg.proximity = 155U;

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
    msg.setTimeStamp(0.325081702999);
    msg.setSource(39214U);
    msg.setSourceEntity(223U);
    msg.setDestination(25143U);
    msg.setDestinationEntity(134U);
    msg.control_src = 4860U;
    msg.control_ent = 163U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 136U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.372215680827;
    tmp_tmp_msg_0_0.speed_units = 170U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.622502699806;
    tmp_tmp_msg_0_1.z_units = 156U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.734785366272;
    tmp_msg_0.lon = 0.929585131392;
    tmp_msg_0.radius = 0.596510775223;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 51U;

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
    msg.setTimeStamp(0.984540244862);
    msg.setSource(47719U);
    msg.setSourceEntity(217U);
    msg.setDestination(28317U);
    msg.setDestinationEntity(234U);
    msg.control_src = 20484U;
    msg.control_ent = 216U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 96U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.606499827327;
    tmp_tmp_msg_0_0.speed_units = 45U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.406908178406;
    tmp_tmp_msg_0_1.z_units = 230U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.406626731034;
    tmp_msg_0.lon = 0.689215284925;
    tmp_msg_0.radius = 0.778068758365;
    msg.reference.set(tmp_msg_0);
    msg.state = 96U;
    msg.proximity = 214U;

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
    msg.setTimeStamp(0.868532321778);
    msg.setSource(48309U);
    msg.setSourceEntity(76U);
    msg.setDestination(24888U);
    msg.setDestinationEntity(122U);
    msg.ax_cmd = 0.945772118005;
    msg.ay_cmd = 0.274697155929;
    msg.az_cmd = 0.0512944902514;
    msg.ax_des = 0.145471958629;
    msg.ay_des = 0.132796309376;
    msg.az_des = 0.966677587931;
    msg.virt_err_x = 0.433840535746;
    msg.virt_err_y = 0.235695222794;
    msg.virt_err_z = 0.370511105009;
    msg.surf_fdbk_x = 0.193383676535;
    msg.surf_fdbk_y = 0.800259761457;
    msg.surf_fdbk_z = 0.724652648586;
    msg.surf_unkn_x = 0.94733464131;
    msg.surf_unkn_y = 0.324001617295;
    msg.surf_unkn_z = 0.954822327974;
    msg.ss_x = 0.696571322896;
    msg.ss_y = 0.261115020799;
    msg.ss_z = 0.483524681773;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KFNUCHBMCYHNBCOZZSNAZFNTGPILBSVWWVAXXAGMRJZQUDSQTREVBRFXILVABMBZTUQYBIUVYOCUFCKLJEPVZOKRHWZLAGLXJAJSUTIGUDDJDISXKHNRDTHTFNBUVYIMYMOCPHRPQIAYHLFET");
    tmp_msg_0.dist = 0.315888921868;
    tmp_msg_0.err = 0.533573424469;
    tmp_msg_0.ctrl_imp = 0.155768521265;
    tmp_msg_0.rel_dir_x = 0.522411890822;
    tmp_msg_0.rel_dir_y = 0.726084147123;
    tmp_msg_0.rel_dir_z = 0.111986962739;
    tmp_msg_0.err_x = 0.989735094857;
    tmp_msg_0.err_y = 0.673812270664;
    tmp_msg_0.err_z = 0.903924553887;
    tmp_msg_0.rf_err_x = 0.702133782162;
    tmp_msg_0.rf_err_y = 0.698414503079;
    tmp_msg_0.rf_err_z = 0.768336037446;
    tmp_msg_0.rf_err_vx = 0.71060398997;
    tmp_msg_0.rf_err_vy = 0.55024236887;
    tmp_msg_0.rf_err_vz = 0.253109347935;
    tmp_msg_0.ss_x = 0.181851436259;
    tmp_msg_0.ss_y = 0.568027399835;
    tmp_msg_0.ss_z = 0.959007950696;
    tmp_msg_0.virt_err_x = 0.154116401612;
    tmp_msg_0.virt_err_y = 0.521660177456;
    tmp_msg_0.virt_err_z = 0.317118449229;
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
    msg.setTimeStamp(0.791183975044);
    msg.setSource(56499U);
    msg.setSourceEntity(143U);
    msg.setDestination(17392U);
    msg.setDestinationEntity(184U);
    msg.ax_cmd = 0.626650319519;
    msg.ay_cmd = 0.12226294216;
    msg.az_cmd = 0.609740025824;
    msg.ax_des = 0.16416771937;
    msg.ay_des = 0.22533590959;
    msg.az_des = 0.467803326196;
    msg.virt_err_x = 0.957753585712;
    msg.virt_err_y = 0.833688174361;
    msg.virt_err_z = 0.646957570456;
    msg.surf_fdbk_x = 0.432558135817;
    msg.surf_fdbk_y = 0.240734712446;
    msg.surf_fdbk_z = 0.848313021933;
    msg.surf_unkn_x = 0.569829860754;
    msg.surf_unkn_y = 0.24681377192;
    msg.surf_unkn_z = 0.332947551555;
    msg.ss_x = 0.307156275831;
    msg.ss_y = 0.35279035993;
    msg.ss_z = 0.22425837886;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RXEQZCVHWMTWPVCUGFEORSVPEQBSFCUGSGUCTLMGBHJGFLEGNMOBZONPYJSCIUAZBCGPRKEFRJUNXOVTZZEIIEZBIDAAKKMKXKLLFBEBZATTIAHVOLOFKYYXXZQBJXANTAUIDNYETPIDYSSRLIYIYIWPOUKNZBSDMHKJDQV");
    tmp_msg_0.dist = 0.418204781033;
    tmp_msg_0.err = 0.191122412222;
    tmp_msg_0.ctrl_imp = 0.564537643832;
    tmp_msg_0.rel_dir_x = 0.326995509946;
    tmp_msg_0.rel_dir_y = 0.393033749366;
    tmp_msg_0.rel_dir_z = 0.489736916046;
    tmp_msg_0.err_x = 0.575862718335;
    tmp_msg_0.err_y = 0.445860291268;
    tmp_msg_0.err_z = 0.131589317173;
    tmp_msg_0.rf_err_x = 0.665700862364;
    tmp_msg_0.rf_err_y = 0.0502566678909;
    tmp_msg_0.rf_err_z = 0.858890249564;
    tmp_msg_0.rf_err_vx = 0.292675051808;
    tmp_msg_0.rf_err_vy = 0.343341092332;
    tmp_msg_0.rf_err_vz = 0.494838161849;
    tmp_msg_0.ss_x = 0.663525325138;
    tmp_msg_0.ss_y = 0.00604794645131;
    tmp_msg_0.ss_z = 0.72309404855;
    tmp_msg_0.virt_err_x = 0.223359017137;
    tmp_msg_0.virt_err_y = 0.209979090347;
    tmp_msg_0.virt_err_z = 0.76577330538;
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
    msg.setTimeStamp(0.499377793883);
    msg.setSource(33502U);
    msg.setSourceEntity(147U);
    msg.setDestination(57689U);
    msg.setDestinationEntity(84U);
    msg.ax_cmd = 0.616847294577;
    msg.ay_cmd = 0.327402272505;
    msg.az_cmd = 0.392521366932;
    msg.ax_des = 0.668032088328;
    msg.ay_des = 0.555031388275;
    msg.az_des = 0.2691765947;
    msg.virt_err_x = 0.191873842593;
    msg.virt_err_y = 0.838389163376;
    msg.virt_err_z = 0.318352339772;
    msg.surf_fdbk_x = 0.338412463158;
    msg.surf_fdbk_y = 0.978922666396;
    msg.surf_fdbk_z = 0.165132570004;
    msg.surf_unkn_x = 0.367339191119;
    msg.surf_unkn_y = 0.481490526724;
    msg.surf_unkn_z = 0.128222255558;
    msg.ss_x = 0.215165971691;
    msg.ss_y = 0.299202496224;
    msg.ss_z = 0.585548842891;

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
    msg.setTimeStamp(0.525733805382);
    msg.setSource(42982U);
    msg.setSourceEntity(147U);
    msg.setDestination(49030U);
    msg.setDestinationEntity(180U);
    msg.s_id.assign("ERQDRLWEPRXCJEBILHFGAXJSLYHFZHAALEDX");
    msg.dist = 0.541672585278;
    msg.err = 0.102429987335;
    msg.ctrl_imp = 0.357664419992;
    msg.rel_dir_x = 0.632839126178;
    msg.rel_dir_y = 0.301463590595;
    msg.rel_dir_z = 0.912866082147;
    msg.err_x = 0.190447716105;
    msg.err_y = 0.146300858872;
    msg.err_z = 0.562486847193;
    msg.rf_err_x = 0.0421454103962;
    msg.rf_err_y = 0.922124091679;
    msg.rf_err_z = 0.977020783993;
    msg.rf_err_vx = 0.856551623612;
    msg.rf_err_vy = 0.661324942153;
    msg.rf_err_vz = 0.773332764941;
    msg.ss_x = 0.659413960233;
    msg.ss_y = 0.38882521802;
    msg.ss_z = 0.92495918217;
    msg.virt_err_x = 0.486823287689;
    msg.virt_err_y = 0.378410661127;
    msg.virt_err_z = 0.752499058136;

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
    msg.setTimeStamp(0.969659790097);
    msg.setSource(54619U);
    msg.setSourceEntity(210U);
    msg.setDestination(34901U);
    msg.setDestinationEntity(121U);
    msg.s_id.assign("YWOINZJEUQMHLDKZPGGIXTBAIYWLARFDUCDLLKHANGTTWQHPZWGADGORCMRSBDUAZKXKYIRBXCPIBNEYBRSVPPXLNOJWSYJAAZPARMNEALNMITVDKIEOJGQYKRKNPDUMCQXYYVBMJQIUPQMOSVGJFVOHRFULNENBGP");
    msg.dist = 0.286642834248;
    msg.err = 0.996572750488;
    msg.ctrl_imp = 0.994428141999;
    msg.rel_dir_x = 0.133620423404;
    msg.rel_dir_y = 0.621564333258;
    msg.rel_dir_z = 0.350992195966;
    msg.err_x = 0.572152192736;
    msg.err_y = 0.520652049955;
    msg.err_z = 0.540628917826;
    msg.rf_err_x = 0.403021272519;
    msg.rf_err_y = 0.0467306676648;
    msg.rf_err_z = 0.94765792425;
    msg.rf_err_vx = 0.739964807357;
    msg.rf_err_vy = 0.639711185633;
    msg.rf_err_vz = 0.621863635964;
    msg.ss_x = 0.317312366782;
    msg.ss_y = 0.0717982692311;
    msg.ss_z = 0.530849981955;
    msg.virt_err_x = 0.685680101299;
    msg.virt_err_y = 0.440975371024;
    msg.virt_err_z = 0.449656228758;

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
    msg.setTimeStamp(0.648104255801);
    msg.setSource(58699U);
    msg.setSourceEntity(218U);
    msg.setDestination(41284U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("CJOIIXYZODUTAGFODUSWMYOQMUQDZONEBPPJRFVYGEFJLCHJSTQWCMZAYYDLKLKNPIEDOKBHJFXLJGPVQFQUVQVAZLXEUEOMOKKTCNHICHCDMEBMEAD");
    msg.dist = 0.397846517395;
    msg.err = 0.871852639509;
    msg.ctrl_imp = 0.965337145658;
    msg.rel_dir_x = 0.977591251511;
    msg.rel_dir_y = 0.921036663974;
    msg.rel_dir_z = 0.902438775241;
    msg.err_x = 0.211132434468;
    msg.err_y = 0.78929879601;
    msg.err_z = 0.701419914667;
    msg.rf_err_x = 0.836579348335;
    msg.rf_err_y = 0.479645655559;
    msg.rf_err_z = 0.962540935688;
    msg.rf_err_vx = 0.550670163149;
    msg.rf_err_vy = 0.238754013614;
    msg.rf_err_vz = 0.618835547531;
    msg.ss_x = 0.954554425585;
    msg.ss_y = 0.0663216305695;
    msg.ss_z = 0.419651638973;
    msg.virt_err_x = 0.618983916235;
    msg.virt_err_y = 0.148050704829;
    msg.virt_err_z = 0.102353493576;

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
    msg.setTimeStamp(0.975486565098);
    msg.setSource(11008U);
    msg.setSourceEntity(122U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(7U);
    msg.timeout = 37543U;
    msg.rpm = 0.492026346098;
    msg.direction = 74U;
    msg.custom.assign("NSQGEBUFJUAOELNDFAHKZOABPDMARGFBSWSLEPNJFKPEIVDOGYUHXUMJTONYYGITGDIEQAMKWAKNYJHCLXIJSMARRQLXSPEKOXABNQQEFRDXLVWMXDCIMDVZTRWFGHJAYZBOKEFUYXFXXSIFZEYCCBTYIHPVXZQQZPLTBMOGVPBUNVSJZSHUCTVYLZJPTBKLIUQMLQPWQFDGSOLRRIVGZNDTRNRWJOGR");

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
    msg.setTimeStamp(0.566263101413);
    msg.setSource(59483U);
    msg.setSourceEntity(109U);
    msg.setDestination(1606U);
    msg.setDestinationEntity(89U);
    msg.timeout = 38330U;
    msg.rpm = 0.201472729187;
    msg.direction = 104U;
    msg.custom.assign("DJMRWJLNXGAYGLMCRJFZIQVYJTSLMODESHNUFUEZEPBJQXXWSSHLIBVOASZBPCRQPHKGROSGSEMMDYTDOAMNYVHFLWTWXQLYYDBCVUNXMKKFGIUTCTIFWMBPZAGIDUVZNZDVYKKFHDRFFTMLHTZHCKWFXJXHRDSVXCTAUKLREEGNVIGEKJCZQQOIDAOXYOAFJTL");

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
    msg.setTimeStamp(0.812831957678);
    msg.setSource(58888U);
    msg.setSourceEntity(78U);
    msg.setDestination(12518U);
    msg.setDestinationEntity(127U);
    msg.timeout = 45916U;
    msg.rpm = 0.748447162312;
    msg.direction = 18U;
    msg.custom.assign("XYDPULVLVJKDZUAWRABXHDVBJCSWZLVSDARTQMYQYWEASGXMJODZLCHNCPNPSRXRIGYVFFFRVKNCELLYGTOQGQNPMOQKLLVJCXDQCZITQTPGJUXXOWZAYSCCKJUAPKFSHMYVUINRZMBMFFGUIIOEMTWDMZJEHBDTAYMDAEVCUUSOE");

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
    msg.setTimeStamp(0.915224340973);
    msg.setSource(28626U);
    msg.setSourceEntity(231U);
    msg.setDestination(61428U);
    msg.setDestinationEntity(145U);
    msg.formation_name.assign("LJBTMEPFROTGPFWSVRWNRDGXAFDJTCNRPZBRYGZQIGXIONLW");
    msg.type = 158U;
    msg.op = 254U;
    msg.group_name.assign("YSAEHQDPADYGHUVPAKJAOCQWIKLVVFRXIVTRKANDTSZKGULUSPCTHXNNCOCTLMQQUKOWJROTRFXXQMHOEQDCWLXIUFWPLZYMPMMSVEGTEQMCQDKBRGHVISCZLBCEILRYFEJBDNWUAMZPBB");
    msg.plan_id.assign("QYSMUBZDNHIUEEXWEWAYMOQNVIVDFLBRUAAKDJXWUQKIRIZQPVTYGOCPAFVKASTWFMLHXCAVBXEHVYRZQNDHMJF");
    msg.description.assign("WFSNEOCCHRPALMOKTSANTGUZKFJSCQLSXXDJXVBHYBIJABOMRWQUQFQNHMUSHJWPVDSLRGIBVRQBVPPWLPKHAOLYMJZRVYNZTOBMMCFVCMLTCDBHAYJQKDOGNIEAWWDZATWSUHLGWPKIXRMFULIJFGOEDYXQJIYHHJKNBZPTUGWETOYCAVOTUSYDNVFEZFBBDGMKWRZIZEUK");
    msg.reference_frame = 92U;
    msg.leader_bank_lim = 0.242147494001;
    msg.leader_speed_min = 0.23740437884;
    msg.leader_speed_max = 0.616307964977;
    msg.leader_alt_min = 0.13788361945;
    msg.leader_alt_max = 0.789554232164;
    msg.pos_sim_err_lim = 0.178277182684;
    msg.pos_sim_err_wrn = 0.369748808989;
    msg.pos_sim_err_timeout = 31876U;
    msg.converg_max = 0.845532130064;
    msg.converg_timeout = 29531U;
    msg.comms_timeout = 50763U;
    msg.turb_lim = 0.427316703705;
    msg.custom.assign("RJUFMYHDNRJSQVUJADDUXTFFGQRXQNZQFWIPGHTOGAZMSVPWJOQFUQSDCIHKUJVACFAYUIOAIWPREIIXWYSXTNYQBSTMLXVNHYEXKZVJOMHVAJCBBPPDIULNWHCMZMDPWKZLCAMCEDYFFTBWLHGHNGQELUCOSTAPBLKDESCLDO");

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
    msg.setTimeStamp(0.704347531537);
    msg.setSource(59475U);
    msg.setSourceEntity(94U);
    msg.setDestination(22887U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("JDEFCSJWOJRWQYUNBBGUXWPKHIUGGKNLKPDOKFZGFTQSFRYAAEPESMTSWNCLQETKPQUVAIXMCUISQZLCKXWOHUXICBZZYNXXNTZJPTRHA");
    msg.type = 196U;
    msg.op = 209U;
    msg.group_name.assign("XJGKIWAVKHLVFOAYTFELXHIEYEOUVGQPPYWGHDEEKRVOQFZKOFWDEFNFOTDCBIUBJMKMWKRUZWMYDAAAZZOCLRZTJHEWWGIENTMBRDWPKTJLVIAHCNSXJMJXRDIVZSSMTOTVJFFLSCGUAUGKXVOXSUGPDTCPTNQMTGKQBJWNVUDLRNJZX");
    msg.plan_id.assign("YWAVHGTCLICKZM");
    msg.description.assign("WAYAVTMTBYRMORQRHZHXCNOAWKCANDUGDLFXBNYPXTVBXNVMUFLIDXWBADTKJOGYQWIYKQZLYFXUSVKZZTWO");
    msg.reference_frame = 183U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18550U;
    tmp_msg_0.off_x = 0.662547064608;
    tmp_msg_0.off_y = 0.898156114605;
    tmp_msg_0.off_z = 0.0600809382812;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.151347385865;
    msg.leader_speed_min = 0.783076815165;
    msg.leader_speed_max = 0.150924642472;
    msg.leader_alt_min = 0.802349713758;
    msg.leader_alt_max = 0.862849090872;
    msg.pos_sim_err_lim = 0.449376003649;
    msg.pos_sim_err_wrn = 0.369282478205;
    msg.pos_sim_err_timeout = 64255U;
    msg.converg_max = 0.0481878884198;
    msg.converg_timeout = 50505U;
    msg.comms_timeout = 12120U;
    msg.turb_lim = 0.190039473437;
    msg.custom.assign("YULAUCGZTXRSIBWHVFROZXLANEFWXCAPFDXEZXYUBKINVVEPQUGUDFABAJPLIZOOWEYAHWPJGEYVDSOVPFKEYFIBTDQRYGRICZMBNJKTTMKBOCGQFEJTRFEDVPIMQDEXXMGBWKBPZUMODBGQNGLKQHZCCHATWOHTLUYDQZTPJKROWMSSNMPZLSALTUIXPAGWRHMHKHQNNCHJHELSFSWCWLIDTJMVKYOC");

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
    msg.setTimeStamp(0.880810994364);
    msg.setSource(12185U);
    msg.setSourceEntity(102U);
    msg.setDestination(416U);
    msg.setDestinationEntity(127U);
    msg.formation_name.assign("FZVXTLEHGBOCLUYCTRZOATSANTLNBRCYGNFQOEJPCVFWCO");
    msg.type = 217U;
    msg.op = 46U;
    msg.group_name.assign("TBZFTMUOTUKXEHMGPLPMSPQGTVWEYCNWQVMJXKJTBLSSVKBNRXWOVDKBHUKQLUUQRSQLHIQUFCVBANWAAFKSJZBGGKTJVXTRHDKMCDXDAYDMCKSHDNOLZXVEIOSNMLXZIJNQCGZLATSXCFFJZNREGXCQKMTOOVHCNJRLBEIGSWFTPFYIZNZCJFYMFHWQBRYHRDRPPBHIUJDWDMHEGPYGJOLAWALUYOOAROEVQYCPXVFIYNPEIGSYIR");
    msg.plan_id.assign("QDYKOLRHXFCGNEGLUSQMPCLBZSYZRWCYOIQVUJWZWHZKDNLATPIURXXLSIOLXHFQHBUWUPKZANSKMGCFLCISDZFUJQMEAAGRDLVVYMKTOMXNYNWPRDONXETPJTJNIMKABNRHGETFFVNVDPBWGECQDHPYAHHTZQXBGYJEOKYMWZFVBQCBKTWLX");
    msg.description.assign("JJLMHQQNNNLCZNOHOEYCXZDATCMVHZUNSEXARZLEUTWZRKJPLQZCEFMRQLPBNSEJXJYQBLSFFIANCAKFWAVYGVHMBGDOTXPDBFVUSQAYYWZFGWCGYHWLKPVIRV");
    msg.reference_frame = 128U;
    msg.leader_bank_lim = 0.402109955277;
    msg.leader_speed_min = 0.24565734308;
    msg.leader_speed_max = 0.563329260086;
    msg.leader_alt_min = 0.459592900474;
    msg.leader_alt_max = 0.0350027031369;
    msg.pos_sim_err_lim = 0.263363047546;
    msg.pos_sim_err_wrn = 0.482612776271;
    msg.pos_sim_err_timeout = 30219U;
    msg.converg_max = 0.377234490382;
    msg.converg_timeout = 39128U;
    msg.comms_timeout = 27327U;
    msg.turb_lim = 0.459768466762;
    msg.custom.assign("PMHPDSVLUKQDNBKQAFWDCJWAYEGTYJTGSOCVOPGUDYBMTEXVNNSEEBSZKWUQXORPUCAOTRRCLWHPVVJGHLFRTOZUBFIIVALDHGGYOBDFVKREZBIEFRZCZSITWXNHRFQCWJDXTNRCKRLZMLWBBMXQNZIHVKNJIQEQO");

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
    msg.setTimeStamp(0.464524542166);
    msg.setSource(61248U);
    msg.setSourceEntity(27U);
    msg.setDestination(8406U);
    msg.setDestinationEntity(52U);
    msg.timeout = 37387U;
    msg.lat = 0.722756569475;
    msg.lon = 0.828009424484;
    msg.z = 0.431180210271;
    msg.z_units = 50U;
    msg.speed = 0.556016347056;
    msg.speed_units = 13U;
    msg.custom.assign("UWXBAMGFAVZYABEVPYLPXTWUBVFHVTOJWOTQDNJECSEOWTCBKIMHLWTWYJLJQSUGNLVXHFCRZTVXOWHYPNMAZXCKBAPJZFSGKXQIKAMYUUYKEQUITGMMYEJSNUFUNBGRHCPNWZXZUQPCMHVBIQEJSISRIJCHFLILQCTEBPRFRADNEKTERYJLEBCPDZXGFDRZNAPSSWQOLORGUZHXBVDORFNMTHQZYSDY");

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
    msg.setTimeStamp(0.10292026904);
    msg.setSource(59839U);
    msg.setSourceEntity(248U);
    msg.setDestination(13573U);
    msg.setDestinationEntity(3U);
    msg.timeout = 4367U;
    msg.lat = 0.632662596394;
    msg.lon = 0.378467469089;
    msg.z = 0.740330955743;
    msg.z_units = 154U;
    msg.speed = 0.466141178903;
    msg.speed_units = 219U;
    msg.custom.assign("CORCPQQEJXFDQXXPPXUOSKXWMOCCOZOWJNMHLKGZWFGSPBWJVTDXDNCLFHHYBWIEJSIYNUNBYSCKZXWLTEZRHIKKD");

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
    msg.setTimeStamp(0.0285149011036);
    msg.setSource(20572U);
    msg.setSourceEntity(252U);
    msg.setDestination(30008U);
    msg.setDestinationEntity(219U);
    msg.timeout = 15890U;
    msg.lat = 0.802797961191;
    msg.lon = 0.382647411234;
    msg.z = 0.917696650967;
    msg.z_units = 163U;
    msg.speed = 0.518520378366;
    msg.speed_units = 11U;
    msg.custom.assign("BDTTHANQJASUYCVSPYGFGLWQW");

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
    msg.setTimeStamp(0.997592777593);
    msg.setSource(8460U);
    msg.setSourceEntity(39U);
    msg.setDestination(7765U);
    msg.setDestinationEntity(26U);
    msg.timeout = 11420U;
    msg.lat = 0.917622477928;
    msg.lon = 0.0625763454921;
    msg.z = 0.528684629179;
    msg.z_units = 126U;
    msg.speed = 0.452774960089;
    msg.speed_units = 175U;
    msg.custom.assign("PMJEAVLFHASYVCEPJRHSWDRHUQPYGQFMBOXUASZNXDKOIVCTWZASLTOJGXKVTSCCKATWTTEOMIUFJSXPPIHOCPAIHBAWZYGFMOPXSGOZIKWZMRTNKNKEYRBVDYIBNLBRZCFTGSTQUAVKKHNRBMBMQJQWZBVGGVBUXSPMMGYFLLRXFNKLGNLSEDQLUWXPHYUCEHQDONWXJQRMZUCDIAOZNDJVEBFPRYYWQKDNWEIDHJJEIGZLDFORLQEU");

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
    msg.setTimeStamp(0.65452808836);
    msg.setSource(25292U);
    msg.setSourceEntity(230U);
    msg.setDestination(9316U);
    msg.setDestinationEntity(216U);
    msg.timeout = 29238U;
    msg.lat = 0.94606186049;
    msg.lon = 0.275686516344;
    msg.z = 0.962478033997;
    msg.z_units = 142U;
    msg.speed = 0.79795526107;
    msg.speed_units = 131U;
    msg.custom.assign("WXTGWOQFPKTHBIBJEQOWOZGWREZMGIMJYNCAAXLTOZDVDEZYQGJEPYBMIOSKLPAARYXEPBWYDKUYBLBGNBIKOSADIRQZHFVYCFVGDQVJHMARZPMBURERKMTNXMIOGSKPHCLONZJQUXAUHFRKYHXEMUDRNKPNDVCUEXCZTTJRLNOWLJIZHLQTAESMS");

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
    msg.setTimeStamp(0.850163254021);
    msg.setSource(36779U);
    msg.setSourceEntity(24U);
    msg.setDestination(59220U);
    msg.setDestinationEntity(36U);
    msg.timeout = 31282U;
    msg.lat = 0.315783400981;
    msg.lon = 0.746343541189;
    msg.z = 0.358336664038;
    msg.z_units = 173U;
    msg.speed = 0.404273999724;
    msg.speed_units = 225U;
    msg.custom.assign("UPMJOAJKOQFQEWKFEAYZYHGVLYJBZAJFCQUOMATBKUDSUOCZPYBQLPNHSSQIRDSHDCYZTLASDRWNNOR");

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
    msg.setTimeStamp(0.0825528380167);
    msg.setSource(9999U);
    msg.setSourceEntity(232U);
    msg.setDestination(42551U);
    msg.setDestinationEntity(190U);
    msg.arrival_time = 0.693581466906;
    msg.lat = 0.795834247842;
    msg.lon = 0.203223809669;
    msg.z = 0.779696972607;
    msg.z_units = 77U;
    msg.travel_z = 0.737085861846;
    msg.travel_z_units = 214U;
    msg.delayed = 23U;

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
    msg.setTimeStamp(0.444087140011);
    msg.setSource(3358U);
    msg.setSourceEntity(67U);
    msg.setDestination(64583U);
    msg.setDestinationEntity(58U);
    msg.arrival_time = 0.230458746128;
    msg.lat = 0.110327138206;
    msg.lon = 0.34882382813;
    msg.z = 0.0823429699469;
    msg.z_units = 5U;
    msg.travel_z = 0.691109167646;
    msg.travel_z_units = 222U;
    msg.delayed = 95U;

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
    msg.setTimeStamp(0.229061194815);
    msg.setSource(12861U);
    msg.setSourceEntity(148U);
    msg.setDestination(25561U);
    msg.setDestinationEntity(138U);
    msg.arrival_time = 0.727870499113;
    msg.lat = 0.680851499575;
    msg.lon = 0.131851803186;
    msg.z = 0.0879971037268;
    msg.z_units = 204U;
    msg.travel_z = 0.015941020172;
    msg.travel_z_units = 235U;
    msg.delayed = 144U;

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
    msg.setTimeStamp(0.329668719262);
    msg.setSource(161U);
    msg.setSourceEntity(181U);
    msg.setDestination(7248U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.315066099849;
    msg.lon = 0.194446834191;
    msg.z = 0.835119162049;
    msg.z_units = 4U;
    msg.speed = 0.0658239488678;
    msg.speed_units = 166U;
    msg.bearing = 0.978619597042;
    msg.cross_angle = 0.535165451233;
    msg.width = 0.0216558461357;
    msg.length = 0.459292493787;
    msg.coff = 200U;
    msg.angaperture = 0.0971382155278;
    msg.range = 23047U;
    msg.overlap = 174U;
    msg.flags = 195U;
    msg.custom.assign("EUWQDUMRVGJWXUINFUDXCEHYELEGLIOJBJZNCYMYZJKVDGZOHECFMFGZVTZXHWCKSOVZWBKQLUQUJTDBYYPRWXDLSXGAFKXBQIHCOPWCUAAFIJADNYVFGUQJLYBRPXQNZWAQREDRJGXZTSOBSXPMHUDHITTTMPIAEMVOLRIOGJGAUV");

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
    msg.setTimeStamp(0.88637365332);
    msg.setSource(24578U);
    msg.setSourceEntity(159U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.632412055546;
    msg.lon = 0.0845468912511;
    msg.z = 0.15786313193;
    msg.z_units = 154U;
    msg.speed = 0.502362841653;
    msg.speed_units = 134U;
    msg.bearing = 0.398879145367;
    msg.cross_angle = 0.403641322688;
    msg.width = 0.778553986763;
    msg.length = 0.28841360697;
    msg.coff = 153U;
    msg.angaperture = 0.619808731893;
    msg.range = 60199U;
    msg.overlap = 149U;
    msg.flags = 145U;
    msg.custom.assign("RODHDXYMLPKSWFNVLRODHMUHCDRPSJRTALQEXVBAWZIDLZQPFNVYTUELWADJUJURWEVIOQHOVHCHYZYGAIMZN");

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
    msg.setTimeStamp(0.761547324226);
    msg.setSource(27750U);
    msg.setSourceEntity(221U);
    msg.setDestination(32155U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.0108569785115;
    msg.lon = 0.843896667591;
    msg.z = 0.930649041748;
    msg.z_units = 104U;
    msg.speed = 0.0932555900147;
    msg.speed_units = 6U;
    msg.bearing = 0.87103422782;
    msg.cross_angle = 0.423255455879;
    msg.width = 0.559198329371;
    msg.length = 0.880034179233;
    msg.coff = 96U;
    msg.angaperture = 0.478493969829;
    msg.range = 17874U;
    msg.overlap = 240U;
    msg.flags = 111U;
    msg.custom.assign("EDYUCJPPSLMVGCKVNCNAXZVDPOPFXRGPDKXHOMQKHXWTWIEHGKGIJBIBFEKLGICQXDITAETRUJUPCMVDUJROUSISWZQWUVXSACUKAVKZQHRMGJLRMGYKLUOACHZJCMWEVXHLOWLBMPUENSBEJZXEONKRNFMSAYFNAYQISLYVJXQWBNXFYSVHF");

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
    msg.setTimeStamp(0.325647155179);
    msg.setSource(19278U);
    msg.setSourceEntity(52U);
    msg.setDestination(50586U);
    msg.setDestinationEntity(96U);
    msg.timeout = 34755U;
    msg.lat = 0.980491501727;
    msg.lon = 0.99037386866;
    msg.z = 0.750407015977;
    msg.z_units = 121U;
    msg.speed = 0.74550183175;
    msg.speed_units = 68U;
    msg.syringe0 = 205U;
    msg.syringe1 = 60U;
    msg.syringe2 = 51U;
    msg.custom.assign("ZLDJMCVCRBIJMDIALSUFPVKTEADVOGUEGXIMKICUVANERNTKZCPSUIETGRGSPPWVFWOJHNDYSHAUDCCOSQQQNXEMXPHQZUMCOLNBYYXUAWBAHYEDKNGJWKXSMFSEFJLWTJINXUMZBLWVXAPMIEJQLNNVOOOERYKLYHSXJLHHCDAIAFRIYFAMXBPGOYQCZFFVYKTRDHGEKQRVTZBBPTQOFWJZGCWDVUIKHZLBBZRYZBWTHWMRGNXTPJSGL");

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
    msg.setTimeStamp(0.0871920911903);
    msg.setSource(22171U);
    msg.setSourceEntity(44U);
    msg.setDestination(19155U);
    msg.setDestinationEntity(106U);
    msg.timeout = 15849U;
    msg.lat = 0.936755741066;
    msg.lon = 0.807475561428;
    msg.z = 0.88512881733;
    msg.z_units = 202U;
    msg.speed = 0.611176005921;
    msg.speed_units = 159U;
    msg.syringe0 = 130U;
    msg.syringe1 = 143U;
    msg.syringe2 = 17U;
    msg.custom.assign("CWHVQXKHTIBCMXVLUIKWVFJWSYGNOGUVKSEWRTTFVSSXZIAEYTXSPCMDKIOHJBARTLWINBBAJARSZTTAMVZEJYRKCXVPFXPJJHQXBFQPFEZNCYQIDZDFZNUNPDYLWCMDLLGEVLXJZATGGISKRFCAYKMAMGHOZBDPWERDGDQNSTQNXDMYHSQMIKPLWOGOHCKUQLUBGWONAICRNJHYOUUUXNEPMLQFUBR");

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
    msg.setTimeStamp(0.530009360366);
    msg.setSource(25896U);
    msg.setSourceEntity(152U);
    msg.setDestination(54099U);
    msg.setDestinationEntity(13U);
    msg.timeout = 34661U;
    msg.lat = 0.886344374497;
    msg.lon = 0.287631843725;
    msg.z = 0.556141659741;
    msg.z_units = 150U;
    msg.speed = 0.58922340031;
    msg.speed_units = 186U;
    msg.syringe0 = 16U;
    msg.syringe1 = 246U;
    msg.syringe2 = 15U;
    msg.custom.assign("XZWMDLBKXZOHEEJDYKCZVXUTDTSQBASJCBJPCUMOGSGPQLARTZSMACLKFMOEZFVITCRYFYLJLRWRLHVXBVJHIBDBBYWYWQMMQKCIUHPETNDLVNMRGUHOKNVGIFDSQFXTFNWEDGWSKCQOQVPSDQJRYBAYIFHQINONBPTEZZIUSEYWXMPOHUCBW");

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
    msg.setTimeStamp(0.617152027341);
    msg.setSource(6598U);
    msg.setSourceEntity(45U);
    msg.setDestination(1292U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.293441381962);
    msg.setSource(60679U);
    msg.setSourceEntity(146U);
    msg.setDestination(20737U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.4333324155);
    msg.setSource(65232U);
    msg.setSourceEntity(204U);
    msg.setDestination(39013U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.972747422243);
    msg.setSource(35608U);
    msg.setSourceEntity(203U);
    msg.setDestination(24789U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.886702620929;
    msg.lon = 0.862835178359;
    msg.z = 0.260621570561;
    msg.z_units = 43U;
    msg.speed = 0.3006153152;
    msg.speed_units = 183U;
    msg.takeoff_pitch = 0.397749609562;
    msg.custom.assign("WSPJHFOGUBVUXPZDUMMPWGETFUACBEXEXOSUOCRGBJGCMZUKTLSOATUVDASTGCCAIKPSVEQQFK");

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
    msg.setTimeStamp(0.914150487771);
    msg.setSource(32510U);
    msg.setSourceEntity(220U);
    msg.setDestination(11640U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.0476233484484;
    msg.lon = 0.19189584337;
    msg.z = 0.0364794115618;
    msg.z_units = 178U;
    msg.speed = 0.84742118176;
    msg.speed_units = 101U;
    msg.takeoff_pitch = 0.413653192567;
    msg.custom.assign("HNLUAKWSPTOVEIDGEXBWZKVRRQPCJJORQGOCVYFEVFMNLXSNNQSYKDVLSETJMYJAWEDOHMUVARQMREFUWQARBQSGKAI");

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
    msg.setTimeStamp(0.0747321314554);
    msg.setSource(47209U);
    msg.setSourceEntity(9U);
    msg.setDestination(6692U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.306113727144;
    msg.lon = 0.00206458192555;
    msg.z = 0.235373316759;
    msg.z_units = 186U;
    msg.speed = 0.996177287322;
    msg.speed_units = 6U;
    msg.takeoff_pitch = 0.871149294149;
    msg.custom.assign("MJQDNWNBFVCGZFDGCOBIOGMPYIVKYCORPXSSHJUYUSBFHBAWOTAKLSIFJRAOAHLLTDEECBFKDFQDMQJVAJVSSMBFYTMRUQENNZZXPTZKXEJGJMANLIAYQPIIBEPFXOACJECZMWYHUWVPMGIQNNZRBITXZLAUPHVFQSXTOPQWZHMOXFWTWZHOHGYLMGJUBEUUOZDVTGUTCRLUJXPNEC");

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
    msg.setTimeStamp(0.330129916456);
    msg.setSource(4875U);
    msg.setSourceEntity(76U);
    msg.setDestination(62748U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.867775503306;
    msg.lon = 0.195175159569;
    msg.z = 0.261114450077;
    msg.z_units = 66U;
    msg.speed = 0.112575496021;
    msg.speed_units = 229U;
    msg.abort_z = 0.164158748649;
    msg.bearing = 0.464849400608;
    msg.glide_slope = 138U;
    msg.glide_slope_alt = 0.785495339194;
    msg.custom.assign("JHUSOERFUOXCZHGTD");

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
    msg.setTimeStamp(0.386112916176);
    msg.setSource(737U);
    msg.setSourceEntity(222U);
    msg.setDestination(61832U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.942808575118;
    msg.lon = 0.965632205886;
    msg.z = 0.294807535918;
    msg.z_units = 56U;
    msg.speed = 0.733759116106;
    msg.speed_units = 183U;
    msg.abort_z = 0.867449619976;
    msg.bearing = 0.378557587234;
    msg.glide_slope = 109U;
    msg.glide_slope_alt = 0.237500243318;
    msg.custom.assign("GWYPIJJNLTCSKCLZZNHUDURZHSWBNFCYRYVXPLHTVBPUEHETXGLJSSVLTFIRDOQOALQYUXMEPSHWTIBBLDYTKCKBRBUZSQDVWUVKMOMOAOHUCMHBKVDOAWGYJ");

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
    msg.setTimeStamp(0.27492037284);
    msg.setSource(15038U);
    msg.setSourceEntity(71U);
    msg.setDestination(8576U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.0689961857117;
    msg.lon = 0.697466689472;
    msg.z = 0.688380110075;
    msg.z_units = 251U;
    msg.speed = 0.632694798647;
    msg.speed_units = 100U;
    msg.abort_z = 0.131598915732;
    msg.bearing = 0.110866544692;
    msg.glide_slope = 173U;
    msg.glide_slope_alt = 0.154823982352;
    msg.custom.assign("KWKEUGCQZHEEIKMDBJURVOYBYJTVWIUMZDIMLSWZTSGTPRCSNEFOOEUPBZQMDLDGPKOPPARRCLXFQGVFQYDCNWBIUNHVNBXCPTOAIJZNWXAKELXVQLKCUAIYHANOCRVHA");

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
    msg.setTimeStamp(0.238539093287);
    msg.setSource(14329U);
    msg.setSourceEntity(123U);
    msg.setDestination(8064U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.943747550184;
    msg.lon = 0.526629052347;
    msg.speed = 0.788381386117;
    msg.speed_units = 252U;
    msg.limits = 238U;
    msg.max_depth = 0.379750295312;
    msg.min_alt = 0.397291930837;
    msg.time_limit = 0.380196088368;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0543298492114;
    tmp_msg_0.lon = 0.322922788943;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("WCGEOCCRSDETUWYUIECXCFIDHQKYWM");
    msg.custom.assign("SZAYRLGXFQQKYIZCFCOIPGULBYZVBPCKEKEYPOFEPUMTBHUHWZGQDAAXPNSNDNJLGJCMHQGZRXLXFWLHPYVXQUJMRTMAPAXMLNQZRJTDNWDYKWFNVGSJP");

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
    msg.setTimeStamp(0.649276510482);
    msg.setSource(41047U);
    msg.setSourceEntity(150U);
    msg.setDestination(31643U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.360839590693;
    msg.lon = 0.612661006291;
    msg.speed = 0.561651692664;
    msg.speed_units = 31U;
    msg.limits = 122U;
    msg.max_depth = 0.158504277317;
    msg.min_alt = 0.0422771251049;
    msg.time_limit = 0.541624448458;
    msg.controller.assign("PSGWBUBBFYNHICRQBFBTJLRUBSOEQDZMBTFPI");
    msg.custom.assign("VICSKFWSKWRFIRNHMAUUICAOJHEPHBMWHCXZOOVQZSAJAOKCRZFGPEDMDTXEUTGBCNVMBUIHADLDGAZUORSJJFYEAINMIUPZRQIXTMEYLZRSNXFGXONMWB");

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
    msg.setTimeStamp(0.187274645601);
    msg.setSource(63969U);
    msg.setSourceEntity(4U);
    msg.setDestination(44560U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.393147686839;
    msg.lon = 0.609750075984;
    msg.speed = 0.909049769219;
    msg.speed_units = 126U;
    msg.limits = 30U;
    msg.max_depth = 0.717101457157;
    msg.min_alt = 0.778878999;
    msg.time_limit = 0.465616423386;
    msg.controller.assign("YNEDSHRKCJHGHKYAHOYNLLJXBIEWFVINGAFKWUGVSARNJQPNZKEGKCQIXLFXBMUGXKJZNXRTVGCMHCLWOSGFWDXIMTLCWFAMZNUMDDAAIDQQKQPUWQYSMXBSAFDLGJOLVSYOQZHJGUWUANYTEVNSBRFRVCPHTVBYYTEBWONZRPZJMQPUPQSJOTDEPTBRBDXWCZEZBOFTJSRTMDWFXFMZPBAJODPKELZUERKAMSTVQCYICHHIOVEUGIIKYRCVPL");
    msg.custom.assign("LHTTJHZCSXUBBDYKEADPOKWCJZXJQIFAEUHSDWAPHUGFDSMBKUTJIYQAPLQBIYRWOTIYTDCSMJTKQONEPLGHEMNUBEYLZSUVYN");

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
    msg.setTimeStamp(0.672037042754);
    msg.setSource(46568U);
    msg.setSourceEntity(113U);
    msg.setDestination(29392U);
    msg.setDestinationEntity(45U);
    msg.target.assign("HISZVCBYPNTTNWWRQRQWDWZGRPREMANTQJBVWACGADOEZACOCQKLOPHAJHKMUUYMHMDTTRIXLKEWZLIVYUDUELRCEVMDGDUGSZIQZBAKYIMXQHFTGF");
    msg.max_speed = 0.54917000676;
    msg.speed_units = 137U;
    msg.lat = 0.18411278096;
    msg.lon = 0.318334246289;
    msg.z = 0.0495633457726;
    msg.z_units = 204U;
    msg.custom.assign("ZSPLLGMARRDKBBPMGKJYTUL");

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
    msg.setTimeStamp(0.328467342492);
    msg.setSource(63140U);
    msg.setSourceEntity(19U);
    msg.setDestination(18939U);
    msg.setDestinationEntity(97U);
    msg.target.assign("MGFOYSYHARAGDPWXIOAWDWNHPPO");
    msg.max_speed = 0.192861761115;
    msg.speed_units = 158U;
    msg.lat = 0.258783174117;
    msg.lon = 0.60734224632;
    msg.z = 0.751274796225;
    msg.z_units = 57U;
    msg.custom.assign("QIZTJBZFFOBOLNGXJRIVLMFNEUWKRGOYAHRQSXIRDAACGANPKWGMNHICKRMGXRYWWTDEHFBFCNVBPEOXBEZWUCSYCQHMHWJSELUZLOYMRFLVPBTWJNNAZBPADFLPTOAVIUMKTKXHTOZMNDYHGXVD");

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
    msg.setTimeStamp(0.409084314714);
    msg.setSource(4860U);
    msg.setSourceEntity(197U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(139U);
    msg.target.assign("WHXVTRFAUPLBWCUPFHOYDNLVCABOMFARJJRJNVNIHAIFUYBTCMXXKREENOFSPSXNJBUSMDDLPNIEYUPESCMZZESAZWYMYXQIWCMGVQSRDNBEWBHAZRNTJ");
    msg.max_speed = 0.464632830994;
    msg.speed_units = 70U;
    msg.lat = 0.258290712683;
    msg.lon = 0.745254870409;
    msg.z = 0.952683413096;
    msg.z_units = 93U;
    msg.custom.assign("TZAYDMETAGZLTFXZOYBAFOBCUEVEIVATBUVXPPTRVUYWCNRWSRHWSFJWADZH");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.690772783073);
    msg.setSource(52937U);
    msg.setSourceEntity(8U);
    msg.setDestination(41020U);
    msg.setDestinationEntity(214U);
    msg.op_mode = 240U;
    msg.error_count = 39U;
    msg.error_ents.assign("MYSTYYSKYIDOLPXRHEFTUURJLZFDTHXWYNISVUCJTLDEFQMIEKXEGYQWOZAPKLWQHLBCIBLGBOGUYCTVKZAYRPDLNQWFJZETYGNZQXAOFAONUNAHHIWXCXSEKSIJUSKIVGAVDLFMTDWF");
    msg.maneuver_type = 33100U;
    msg.maneuver_stime = 0.297266085074;
    msg.maneuver_eta = 26038U;
    msg.control_loops = 2854189272U;
    msg.flags = 18U;
    msg.last_error.assign("GYTMAGODYLZILBVXEPRBTNLREDJNPNSWJMTQVILVTFQLODKZROGZHGGRUJTVUNCKPZVCOCAEFUWYBTHANXQVQDSB");
    msg.last_error_time = 0.727552689559;

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
    msg.setTimeStamp(0.302358000519);
    msg.setSource(28394U);
    msg.setSourceEntity(223U);
    msg.setDestination(63832U);
    msg.setDestinationEntity(6U);
    msg.op_mode = 251U;
    msg.error_count = 217U;
    msg.error_ents.assign("JHLQFWKPYDRTNMFVKQGXXAXLQONAWVKPWPRFUXHONTWJZIKLNDZRFUKEMZCRMAZYFOFSNVSWCGZGYDSMOEQAAQBXSCIEFNDFFUUSVYCCKNIEQBKVDETVHXCJGWAHMZTRXZOTTPUHUJIHJITRNSPETOUIADEWBPMMQJXDMRWVILQZJLGJHFVZKJBUOYPKPRAHRZLCIUTPLDQHBBEYA");
    msg.maneuver_type = 62862U;
    msg.maneuver_stime = 0.995841150444;
    msg.maneuver_eta = 45007U;
    msg.control_loops = 1523830339U;
    msg.flags = 128U;
    msg.last_error.assign("SBRYFZMNMZKTVGDVRWCJBQOKNULLGAIJNTKJATQWVDFKMWGUPRELVOTIZNIMHWWQDHHOYEERGXXBVUZNOAMDXEYMLGDTUKSIHHISTAOFNEPSTZRCBHXYYCWLDZQUPOXZJKWVEIDCFYQTKUDVKNBGIJWZHJHXYEGAEADTCCYMNFRUXOJPXQGQMEBVNSIJRBVLFALYKPJIWXWUFHPLRIQCHPB");
    msg.last_error_time = 0.354258560429;

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
    msg.setTimeStamp(0.754109190682);
    msg.setSource(5333U);
    msg.setSourceEntity(182U);
    msg.setDestination(10070U);
    msg.setDestinationEntity(116U);
    msg.op_mode = 220U;
    msg.error_count = 252U;
    msg.error_ents.assign("GANXMSQGMVGMGBTVXZJCXDRIERVPQOEMFMOSWTKRNIHRAFQROMDPPSZBAONDQLAJQAHXOUDFHCLLTWPWTPMVGFIYWZKJUPTQCUAKTIXH");
    msg.maneuver_type = 19503U;
    msg.maneuver_stime = 0.70550422938;
    msg.maneuver_eta = 27510U;
    msg.control_loops = 3545556892U;
    msg.flags = 237U;
    msg.last_error.assign("TGNCTYBIHVOUKYOBCJSIAHNWVEEKLNXVWQLUMIQCGMHMMETTVCUUOMHPHFOJVDGPQRXDJSITKLTYOGMCIJUNHUXACWTTZBL");
    msg.last_error_time = 0.881941575567;

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
    msg.setTimeStamp(0.594728952552);
    msg.setSource(64769U);
    msg.setSourceEntity(115U);
    msg.setDestination(15771U);
    msg.setDestinationEntity(120U);
    msg.type = 196U;
    msg.request_id = 56730U;
    msg.command = 226U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.572519641747;
    tmp_msg_0.lon = 0.922950853281;
    tmp_msg_0.z = 0.121170752265;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.speed = 0.20383283606;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.takeoff_pitch = 0.709971758387;
    tmp_msg_0.custom.assign("ZYMMWKXQEVTNUHVSLMWLHEBTDSC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56130U;
    msg.info.assign("GBZHFBKLMKCEVYCEAZKDJXDAIHFMUKBTPUECHCQYUNDHINRGQOMKQXKFAMSIYWEIVYIZLPQDNVUTKKDVKADVSFOERVZSCANZPJQEQOAHFUUSCRRGLOSZHGJMNLTOTJXUDASTFJLYSHBXICQGAYWUWMGATMTLJVXNBWXLRWROQJQPKJDYAWWFPXEIBICHOYYNWZJZDLRWODMNLGEPMFBTXSZ");

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
    msg.setTimeStamp(0.396498914144);
    msg.setSource(25957U);
    msg.setSourceEntity(6U);
    msg.setDestination(23389U);
    msg.setDestinationEntity(95U);
    msg.type = 209U;
    msg.request_id = 33361U;
    msg.command = 189U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35230U;
    msg.info.assign("QCANQAHZTXNVYGQYJXZFLTHSNOFPCRKRKDHDOLHUVNEIRPBVDOWZWBVQOYRYGKPMXVXGRPDLCAWMSILTAEHJXOURJZJMPJWMPEHIJYSMDTBPUKTXDBFEJQMJVCQPABSANZSFC");

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
    msg.setTimeStamp(0.119070658626);
    msg.setSource(47881U);
    msg.setSourceEntity(144U);
    msg.setDestination(46973U);
    msg.setDestinationEntity(242U);
    msg.type = 131U;
    msg.request_id = 8809U;
    msg.command = 144U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("AUKICJDFSYMTPSHQDSFJGUHWZIWYNZXKXSREHOLHFKRICWDGJNZLLVFBVIAHEOJVXBSUWMYISMCKPMHPHGABZOTNLDSPYAMJVUIK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25973U;
    msg.info.assign("BLADOSAHDNTAIKVPOPCJTDAPPJHZZFYYGZNRJAFEMSPFZPOZTOOQJIUAVBUMNZLIIMWBGXCGSRTALSDWY");

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
    msg.setTimeStamp(0.718946035171);
    msg.setSource(50352U);
    msg.setSourceEntity(233U);
    msg.setDestination(37571U);
    msg.setDestinationEntity(97U);
    msg.command = 58U;
    msg.entities.assign("QWQVUJDELXORHFIALSSKMMYRIBOVJOCXPRYIHWEGQMERGQAONHOBYUFCTBRHNJDRDNPHZHVADOIKZGVXBDONQDSDFQFOWFUSQZPTTUZCMLJOAEJXCVOAXEZKULXJFDQXKVITLMPNKPXXPTKLBHBNCAMLGBIURWLADAJCVIETEKYUYVMFWSQCRGUZSHSFAUMYIHVIZETNPQYYTMJLNJWUTGCRWXFMDCPGWEJECKTGVYLISZASBZ");

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
    msg.setTimeStamp(0.162927315676);
    msg.setSource(34786U);
    msg.setSourceEntity(127U);
    msg.setDestination(56157U);
    msg.setDestinationEntity(172U);
    msg.command = 116U;
    msg.entities.assign("GNCZVRDVTCBNYZPJVWTHVYJKMGESIIMORP");

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
    msg.setTimeStamp(0.208705786448);
    msg.setSource(6278U);
    msg.setSourceEntity(133U);
    msg.setDestination(28073U);
    msg.setDestinationEntity(161U);
    msg.command = 233U;
    msg.entities.assign("FNONLXUHRDKHVEBTQZJRKPCPSCCZIXQJXCQTMUKBDQZLOARSSPMBMRBDVGVWEITRUQOOQBQKNLUJVFHXPLXETLTLSDFFTRBOHFUZYGBYGRLNWGAMFGMVWXWWZIDKKMCAATIYPPSCNWEFCELYJEVZRMLKIRYUKTKQHVDFCAPJSYOIOASGJAJFJWTJUI");

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
    msg.setTimeStamp(0.279728575404);
    msg.setSource(39019U);
    msg.setSourceEntity(214U);
    msg.setDestination(51621U);
    msg.setDestinationEntity(110U);
    msg.mcount = 54U;
    msg.mnames.assign("NMRPNYFASRURDTGKUBYZJFMWSHILTLWVQUHEBJOATSGVVINYFLCWBKFGPBUZXJNJSZXDI");
    msg.ecount = 243U;
    msg.enames.assign("UOTMMKFLPDRUWFGTUKDQIZKZJEPYXDDSFZZPZOMJQBNGQKSLBBDGLFUJBEAAUQRAJKWUPGWFFPCNSKXQWLSETAVKYMBFVHDNLVLSAGRIAXIXBJDRXHYVUQVMSJWGXXRIMAOWHNOLTBXYOCESTPFRHNTDJIHEY");
    msg.ccount = 246U;
    msg.cnames.assign("EZVGDDWETOVJLKG");
    msg.last_error.assign("UDJVSNMWHAZWXLXHAIXLGWKPVTLPZESVBWPQ");
    msg.last_error_time = 0.358009457364;

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
    msg.setTimeStamp(0.976061903552);
    msg.setSource(49727U);
    msg.setSourceEntity(42U);
    msg.setDestination(27486U);
    msg.setDestinationEntity(226U);
    msg.mcount = 33U;
    msg.mnames.assign("HFZUFYCKGBXAUQSTWDBAXTGCZTIKKQTIQWHIRPWLIMBDUZMPVZTKBYOOPBLVKADDVENULGDTSLHANWGFCFJRGOJWAPICUWJXNZSKNIXQRGFSYNJABRRMOMJHHFSUEPMYPSOHLMORXQ");
    msg.ecount = 132U;
    msg.enames.assign("WRGTOPNZLALRAVHMUZCHRXGYRTIXDIFVQFBIOPSGASZAZKLOTXMCQPWXCJJQDWOSOJNUTVTGTJSWDSRZUGKEKWYHQKEOVXYQFTUXEPPLAOJBMHVNDSZBJJVYTYRCYAMKXUDZMMYNPRJACEEBEUHOFAYGHXCWMKYKIUDNFIDPDIMWEIVIEG");
    msg.ccount = 11U;
    msg.cnames.assign("JQQGTPEYTDAHWCTHWWWAGHEFWSCCRHHMFQBFUSSIGYBMQXCHFBTRAOFYLKNQHVGVMPBPXQMANIZEZVYFCVPISTXFZUYNJFOKMPRFGMRSKDZRLTOBKRHPSKVTZUAADBIRZRAVZSLKCYLWBJLGNNHGDYIVDJMP");
    msg.last_error.assign("ADOWTTBOKMXEHXU");
    msg.last_error_time = 0.450330990206;

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
    msg.setTimeStamp(0.160939829179);
    msg.setSource(32359U);
    msg.setSourceEntity(196U);
    msg.setDestination(9836U);
    msg.setDestinationEntity(167U);
    msg.mcount = 223U;
    msg.mnames.assign("EBLPNNKNTVABJHIRQFGNCSYLKUEPUEYSYDGTVOMEOITGJKHZXVBGCZSFRCEOTCMKEDQAIMTKBIPJXSMAKKQLJPYMIUFACHUVRONQZUHXORSFIUHPMWPNQFZLNCQOOKZLSWLVRAWOZJRCNQHOAHDHFMXVYFPWESTKTXGJEJYXZCIZLURYBOPAMNUDBRXPTTDBGPAXZLIWVWGFZJEBMJ");
    msg.ecount = 204U;
    msg.enames.assign("AYQZZQOFLROCIREFEATENYTDQFJNIYPCYDCXAUPILGGODICGXRLDLWEPRRWUGABYHBLUMSLIXMCGZECXXMYMHHWZFRQSSMINXWADAGZXEJBOWNBDWVTHVKBUTVHDJEWOSKFSTVSSZFPUNTPOKHUBBAVDJOSQHCGCPMBRPNKUVQRYQUGQFJIOAZNPMZNOLJKVRCGEEHLTXSDWWOKHMMHVUJIIFKPETXZCNPJFLMIDKJRB");
    msg.ccount = 36U;
    msg.cnames.assign("TDJUWYJBLCEPBWFULTNFTVUGQIQHHKCXBRRGIVGADOMNZIMMLMTFEHRAPHXXJWIKLYKVEEJSMPXROCXHPPJUGQWHQNBFFQCUFSXOUBUPHJZLRTHQYKGIZANNKIYOPEQXWDSNYGFEDSPPDDTLMEQCPQRDDZSZ");
    msg.last_error.assign("YLMIROPNVZMZFMVQPZPEJQOMBQMUTVPUZQUKUZZHDDONIUWAIBQCPCWBUFAHAOOJSNCGGEXSDAHAKQGZYERLFYRROSRUWFJMXLVCPDJJWGIYAWWKYBHBXSSTVCKYXTRKBLAGVDXEMELNIHSVDXRIXKEPQKIBLYZAWMRWSHQCTOIZWGTMBNLGOIJYNSKWHFUFYHPRYFDTGUXOTFKFFRSJOJJTTNNDBLTZSCLCVBMINH");
    msg.last_error_time = 0.424819078323;

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
    msg.setTimeStamp(0.693470525115);
    msg.setSource(59224U);
    msg.setSourceEntity(213U);
    msg.setDestination(42997U);
    msg.setDestinationEntity(240U);
    msg.mask = 138U;
    msg.max_depth = 0.363233441446;
    msg.min_altitude = 0.500362820935;
    msg.max_altitude = 0.695671423328;
    msg.min_speed = 0.0957258576722;
    msg.max_speed = 0.842136060945;
    msg.max_vrate = 0.466918778401;
    msg.lat = 0.913957113125;
    msg.lon = 0.598877421442;
    msg.orientation = 0.0287162096296;
    msg.width = 0.577392117975;
    msg.length = 0.206228863052;

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
    msg.setTimeStamp(0.898195539381);
    msg.setSource(16458U);
    msg.setSourceEntity(142U);
    msg.setDestination(5696U);
    msg.setDestinationEntity(74U);
    msg.mask = 150U;
    msg.max_depth = 0.401531050137;
    msg.min_altitude = 0.775078221281;
    msg.max_altitude = 0.0305473033744;
    msg.min_speed = 0.150093729677;
    msg.max_speed = 0.952358880662;
    msg.max_vrate = 0.968817155957;
    msg.lat = 0.467966670232;
    msg.lon = 0.35680360769;
    msg.orientation = 0.680912689735;
    msg.width = 0.583322911834;
    msg.length = 0.95050690223;

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
    msg.setTimeStamp(0.283583715125);
    msg.setSource(63040U);
    msg.setSourceEntity(137U);
    msg.setDestination(18433U);
    msg.setDestinationEntity(82U);
    msg.mask = 107U;
    msg.max_depth = 0.980704527304;
    msg.min_altitude = 0.522240358355;
    msg.max_altitude = 0.462847894183;
    msg.min_speed = 0.121046346717;
    msg.max_speed = 0.928922718179;
    msg.max_vrate = 0.143049898002;
    msg.lat = 0.0384103744003;
    msg.lon = 0.02639190392;
    msg.orientation = 0.729683347868;
    msg.width = 0.923749892985;
    msg.length = 0.155455322392;

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
    msg.setTimeStamp(0.094973188445);
    msg.setSource(59562U);
    msg.setSourceEntity(136U);
    msg.setDestination(59900U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.579732552226);
    msg.setSource(17279U);
    msg.setSourceEntity(176U);
    msg.setDestination(62172U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.0374675998349);
    msg.setSource(33514U);
    msg.setSourceEntity(130U);
    msg.setDestination(56558U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.584993429662);
    msg.setSource(50877U);
    msg.setSourceEntity(220U);
    msg.setDestination(19673U);
    msg.setDestinationEntity(171U);
    msg.duration = 54025U;

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
    msg.setTimeStamp(0.0847713397536);
    msg.setSource(1210U);
    msg.setSourceEntity(150U);
    msg.setDestination(30842U);
    msg.setDestinationEntity(103U);
    msg.duration = 34047U;

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
    msg.setTimeStamp(0.632226213759);
    msg.setSource(60018U);
    msg.setSourceEntity(50U);
    msg.setDestination(19678U);
    msg.setDestinationEntity(71U);
    msg.duration = 58825U;

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
    msg.setTimeStamp(0.213006734732);
    msg.setSource(42431U);
    msg.setSourceEntity(116U);
    msg.setDestination(39918U);
    msg.setDestinationEntity(17U);
    msg.enable = 241U;
    msg.mask = 3958800238U;
    msg.scope_ref = 3937155592U;

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
    msg.setTimeStamp(0.909808701513);
    msg.setSource(61963U);
    msg.setSourceEntity(167U);
    msg.setDestination(5128U);
    msg.setDestinationEntity(226U);
    msg.enable = 202U;
    msg.mask = 2278051972U;
    msg.scope_ref = 2994832388U;

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
    msg.setTimeStamp(0.39303276146);
    msg.setSource(43788U);
    msg.setSourceEntity(191U);
    msg.setDestination(10131U);
    msg.setDestinationEntity(242U);
    msg.enable = 192U;
    msg.mask = 142349469U;
    msg.scope_ref = 255146891U;

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
    msg.setTimeStamp(0.494037407145);
    msg.setSource(43912U);
    msg.setSourceEntity(157U);
    msg.setDestination(15607U);
    msg.setDestinationEntity(53U);
    msg.medium = 22U;

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
    msg.setTimeStamp(0.191437496777);
    msg.setSource(38336U);
    msg.setSourceEntity(40U);
    msg.setDestination(24516U);
    msg.setDestinationEntity(20U);
    msg.medium = 246U;

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
    msg.setTimeStamp(0.298188062961);
    msg.setSource(7664U);
    msg.setSourceEntity(5U);
    msg.setDestination(42135U);
    msg.setDestinationEntity(26U);
    msg.medium = 177U;

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
    msg.setTimeStamp(0.599459572428);
    msg.setSource(19471U);
    msg.setSourceEntity(128U);
    msg.setDestination(23816U);
    msg.setDestinationEntity(216U);
    msg.value = 0.804179769493;
    msg.type = 185U;

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
    msg.setTimeStamp(0.187506382735);
    msg.setSource(12092U);
    msg.setSourceEntity(76U);
    msg.setDestination(48616U);
    msg.setDestinationEntity(47U);
    msg.value = 0.857786912504;
    msg.type = 184U;

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
    msg.setTimeStamp(0.238647935015);
    msg.setSource(48648U);
    msg.setSourceEntity(5U);
    msg.setDestination(16403U);
    msg.setDestinationEntity(209U);
    msg.value = 0.107900682546;
    msg.type = 146U;

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
    msg.setTimeStamp(0.945549486825);
    msg.setSource(44888U);
    msg.setSourceEntity(18U);
    msg.setDestination(15906U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.785134972733;
    msg.converg = 0.971402224204;
    msg.turbulence = 0.308309497293;
    msg.possimmon = 141U;
    msg.commmon = 163U;
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
    msg.setTimeStamp(0.291638904633);
    msg.setSource(1527U);
    msg.setSourceEntity(245U);
    msg.setDestination(16454U);
    msg.setDestinationEntity(73U);
    msg.possimerr = 0.0263459321637;
    msg.converg = 0.998979997911;
    msg.turbulence = 0.670736775044;
    msg.possimmon = 66U;
    msg.commmon = 22U;
    msg.convergmon = 171U;

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
    msg.setTimeStamp(0.508638246692);
    msg.setSource(57335U);
    msg.setSourceEntity(75U);
    msg.setDestination(21415U);
    msg.setDestinationEntity(180U);
    msg.possimerr = 0.833723742227;
    msg.converg = 0.986964407598;
    msg.turbulence = 0.717000153238;
    msg.possimmon = 42U;
    msg.commmon = 220U;
    msg.convergmon = 122U;

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
    msg.setTimeStamp(0.332846294266);
    msg.setSource(20362U);
    msg.setSourceEntity(75U);
    msg.setDestination(27224U);
    msg.setDestinationEntity(46U);
    msg.autonomy = 88U;
    msg.mode.assign("AZFIZJBLJJRHNQVYGRNYPVUOTLXJHIJ");

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
    msg.setTimeStamp(0.861767544271);
    msg.setSource(22516U);
    msg.setSourceEntity(28U);
    msg.setDestination(48515U);
    msg.setDestinationEntity(52U);
    msg.autonomy = 128U;
    msg.mode.assign("RQJTJXSQQTRSDPZJWVIYHPINVHZENNMUIZUVJIULHWSFWOXTTSOKAFLKZVZOWFBSKWBFCZPGNJOZPVNEKTGAFYQODWIWJFXCPQUMCIXAMZSUNEZLSBJKHBUNETEFGWMTQQRJVMAOHGQGIYLBDDQRKMDVYRATQMPWIJFUZPYGVLXBYDINCGYSNCAIDCVPCRATXFRXCYHAXVOEDRLPHWUYFKRKRMKBESXUTAEHLLXMMH");

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
    msg.setTimeStamp(0.468999265636);
    msg.setSource(53946U);
    msg.setSourceEntity(251U);
    msg.setDestination(26139U);
    msg.setDestinationEntity(224U);
    msg.autonomy = 183U;
    msg.mode.assign("CEPUFMXBJWXEWXNSTWOYKMGHYAXTRDZFRJKUQWVVCRWPWEHVGGQHYOAGUCQHDPPEYBZNBGILCPORDTIMTKEHMJSNHFEWHNBDXAXTULKZDDJOBLKZTHFINETDKLADULNZVSOVZYYLQNRSQEHGJILSXIUNKUAUGOMJVFZSAINMONXGPEBAPFWMTRGSPERWJQCMBPCZQIIYVSSMBTRQRAALYIOAUYFCFRLF");

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
    msg.setTimeStamp(0.398209308477);
    msg.setSource(18344U);
    msg.setSourceEntity(43U);
    msg.setDestination(42401U);
    msg.setDestinationEntity(62U);
    msg.type = 101U;
    msg.op = 12U;
    msg.possimerr = 0.311861725501;
    msg.converg = 0.0795586982475;
    msg.turbulence = 0.102066753117;
    msg.possimmon = 157U;
    msg.commmon = 165U;
    msg.convergmon = 75U;

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
    msg.setTimeStamp(0.346411276974);
    msg.setSource(34212U);
    msg.setSourceEntity(244U);
    msg.setDestination(22583U);
    msg.setDestinationEntity(70U);
    msg.type = 125U;
    msg.op = 18U;
    msg.possimerr = 0.11935668551;
    msg.converg = 0.543628500267;
    msg.turbulence = 0.328667972867;
    msg.possimmon = 245U;
    msg.commmon = 9U;
    msg.convergmon = 58U;

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
    msg.setTimeStamp(0.313860330453);
    msg.setSource(26345U);
    msg.setSourceEntity(206U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(7U);
    msg.type = 194U;
    msg.op = 137U;
    msg.possimerr = 0.664076694719;
    msg.converg = 0.47396388055;
    msg.turbulence = 0.228785642191;
    msg.possimmon = 212U;
    msg.commmon = 178U;
    msg.convergmon = 108U;

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
    msg.setTimeStamp(0.351565914791);
    msg.setSource(29210U);
    msg.setSourceEntity(28U);
    msg.setDestination(34596U);
    msg.setDestinationEntity(57U);
    msg.op = 210U;
    msg.comm_interface = 179U;
    msg.period = 46716U;
    msg.sys_dst.assign("HICXFEWEZMBUQHKUIGTJJZSRRZRNQHEJJKJUHARDLUIOKYZIXYBSPZDYAWOOWTLWCPUVIZDYHXXUTVKCHETSFVEHJPVGBOTKBLPEGBBSBMMQVYEMQAPUYGUDKBKUTMLJNVSDLXSSRJJNWXGLOYAMWOHMZGFEFLCHQOHILDQWBO");

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
    msg.setTimeStamp(0.944741538941);
    msg.setSource(49310U);
    msg.setSourceEntity(113U);
    msg.setDestination(11315U);
    msg.setDestinationEntity(110U);
    msg.op = 1U;
    msg.comm_interface = 219U;
    msg.period = 34887U;
    msg.sys_dst.assign("XVZJFOBHUBFQOYYHQJMKARWHEZGSTXKCMFSYLGLCSRXBGIYGSCOUDTWOWANHVYUSGYAUZCDLHJNTMDTBXJYRVAGQ");

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
    msg.setTimeStamp(0.0798649037907);
    msg.setSource(55667U);
    msg.setSourceEntity(91U);
    msg.setDestination(58560U);
    msg.setDestinationEntity(47U);
    msg.op = 60U;
    msg.comm_interface = 1U;
    msg.period = 55990U;
    msg.sys_dst.assign("MDVDVYTEDAMWKOTHDNPJPUUPCRONEONALBHRWOFFDWTJUWZMXQLSSAQYNFJMKZIIOVYNUPACXISFBRSIJCKVWJIMKTGKEBGFQJZYKZEFEZBAFPOCMLSHWJKGEGITFLXGZJWWIVTQGXCQFIHYMZUXKMYPBYEXEDIWQNMM");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.322249366851);
    msg.setSource(4142U);
    msg.setSourceEntity(188U);
    msg.setDestination(3033U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.965431890398);
    msg.setSource(35890U);
    msg.setSourceEntity(62U);
    msg.setDestination(52319U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.584228372628);
    msg.setSource(62724U);
    msg.setSourceEntity(185U);
    msg.setDestination(14657U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.351645473117);
    msg.setSource(39147U);
    msg.setSourceEntity(118U);
    msg.setDestination(48730U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("CEOEPACZDHJYFKTZCELIUXWYZVEMUWNRWTDIHJBVRMYTTVQAKYMKNQRRKZIQ");
    msg.description.assign("PTLLOLFZRVHAPOUWNDMEOVWLIMEYPZBPTIHYHYIMKHDILAVZWUCVDUYBLSSQXBVHXGRCKXPRVSAOCMYFMXIFLMOKBEATMNVCYIPRRTRUOISWEAWQYMGIOXEFUURVNLTHSGXTJCEDYSRJDFBCGQMJOZTQCNDPYCJUGUAXLGXPDPKFBHRBGJYDJXQONNRIKWCWVVNUQKWPSFHGNHGBB");
    msg.vnamespace.assign("FBPKJLCHRYCFBDYTTRWMATCWRJWQHXTGMPIZWFPGTFLJNNNOYUSNIYDNRSIANVOXJHVHKZBYFBXLWJJVIZVJVDHGQOVUDACOPTXQEZUTPHSSPKNXMSOQNMBIXBNOIECEIXEFZTJYPGIXZ");
    msg.start_man_id.assign("CWPKEIRBJZBIROYNKSAQXIGZLIQJUFDM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ASEAEYLIHNIXDZOUARRSZOFHRFYFJQPXZUVPNPIYDIPCDVVAKXQWDGNXBWOEMVGKGTRKQRTBXLTELEJGQFVHMASFNYAAWOEZFQLANBSTDTVQDGKKYKQPIGCVMZIJCWIKLJBTFXWQVZU");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 29852U;
    tmp_tmp_msg_0_0.lat = 0.112907733929;
    tmp_tmp_msg_0_0.lon = 0.651734987033;
    tmp_tmp_msg_0_0.z = 0.132792215496;
    tmp_tmp_msg_0_0.z_units = 154U;
    tmp_tmp_msg_0_0.speed = 0.948791795644;
    tmp_tmp_msg_0_0.speed_units = 171U;
    tmp_tmp_msg_0_0.bearing = 0.774049856513;
    tmp_tmp_msg_0_0.cross_angle = 0.254970149125;
    tmp_tmp_msg_0_0.width = 0.674078838845;
    tmp_tmp_msg_0_0.length = 0.973994014436;
    tmp_tmp_msg_0_0.hstep = 0.984262229753;
    tmp_tmp_msg_0_0.coff = 47U;
    tmp_tmp_msg_0_0.alternation = 82U;
    tmp_tmp_msg_0_0.flags = 133U;
    tmp_tmp_msg_0_0.custom.assign("TYELVEDCSOEBAKAHQGCEGKYIHXLPYAXQGZRJODQOZPPRWSNLBWDBRWTJYGTJDZLIMMCHZVQRNAPRCQOFAKNJUHSFIQTFGDKAWSHMYOJOQPFUBWXWBUUBCKVQSUHTMMXFEEAAGARUTCLBNDS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EntityState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 171U;
    tmp_tmp_msg_0_1.flags = 187U;
    tmp_tmp_msg_0_1.description.assign("UELCBOZORN");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityInfo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 11U;
    tmp_tmp_msg_0_2.label.assign("MUIWSVNBOJJNPKLDCFFZDRASHZFFJHKNXWCCBPWHYAPTPFZREZDIGOMQOWJUBTTJIHXVKKKOXNPHPKHLLBYAVVS");
    tmp_tmp_msg_0_2.component.assign("OZQZGSPXFURJOUDZZMCYUHTAYGEBICBGQYZNWWIIVPTWXFQHCAOKNFWSVHUIMZNIQEKYT");
    tmp_tmp_msg_0_2.act_time = 57676U;
    tmp_tmp_msg_0_2.deact_time = 14439U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EWRLAMQDIAJRFYHGGJTDHJBLFKQWDORLFNGFCZCUKLMYYVAPAFQTEEZVWKQOYRRHIOMHXCVEXTTENIPOLRVPWZKAXSHBQIIEXVLGNCDADKYZCPSGJPFZZWWFNUGQOXTMMUCTLCQPHCHUCFCDASPJKBVZQPYUMXJNBBGRJRIINSOQPYBNHNDKYUYTHVNVZPBMLBZUJTF");
    tmp_msg_1.dest_man.assign("JLEJRRYHNVKBNRNNPAFQYWHUWVEKLQDBNDRNCVTECMBOZGWCJDIXKXDL");
    tmp_msg_1.conditions.assign("BDBUUKXXIRORMJULOLVRNZKRGHTEWUAXMQSUAOKSVKLUKAVSIJZFWKPGDFJHLNQLYADTXTIXFLWHFOMFJFYFTPCADTNAEO");
    IMC::GetOperationalLimits tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.83057654541);
    msg.setSource(27918U);
    msg.setSourceEntity(133U);
    msg.setDestination(7207U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("QFDNYBRCQGXZTVAZDJCNAHNQKYOEUILPALWRUQJPJGVBUCAFOWRAVMTRRHOTL");
    msg.description.assign("EOUJBFDVNRFKBQ");
    msg.vnamespace.assign("WGMRLMLEOMTURKGSAUNIJFWYWFNPJFZQIPCATUOYHZCVKTEBOMZKCLMFSBVVEDVXGANIGDLQYDAOVTKFSHBWSZHQCFSWRHZOLLVKUMNSUPJVNVCGDLIUECXQSXWBEGPMBKYFARHXQBNQJIMFDOARTPYTQCRTRAPEXUDLKEODKTYHCBNZUZJBIRFRUWGE");
    msg.start_man_id.assign("GEZXGBITWKTJIJTNIKFBHGHONWVDYRFO");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("WOVTNDKQOXCZZEIGMERPMGOTZSLOCMVDZXKJWYZQHUZUKEGGUBNRQSYDVHOEMYPBPCPSRBJDJFWHXOXSFABTNNDWLHIETWNXFPRILODBSGJCMFDLXYJUIJKHLAEVQHPYQWSQNHVSKALJUPAQDTXWAAPRTHFNWCXOMZKGVHJAJINLUDESKNUVGFEVRBGBIGXBGLVLTRCAUNHAKSCMEYFFMPEOYRIKUXI");
    tmp_msg_0.action = 81U;
    tmp_msg_0.grouplist.assign("HRVESWGJPQQWTVLAZDOWFSMMBLYAYTTOIGLPPTQXKVMJPNPYTBOGXVTNDWHUIBPGQQSSLNERROBCSSAACIKLBEURJPQLWIFNFFZFLKFZEYZYUAELMQMDCRUKVNDSNCOYNRYWBDOFVKGXKDOIFATCILEZCKHNWBADMYBUUHI");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.77755503069);
    msg.setSource(23909U);
    msg.setSourceEntity(25U);
    msg.setDestination(42008U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("XHRNKXDUHUUQCETFNVNGWPMFPYSKYJDZNJUVJVODSMUAOAKTKMFSFCOWJYNQLSBZABQMDYVPLYZQPRSBAXZTMKCCOTUPHYVZIJXJIITEYGLHOWBIABGKLHMJSIIVSDZPSHQGXZVHGTFSDQGDDRQRFXRLZETTQAEHEYRQJCRIIFUKWZEWLKUWBCQPJTGWPFOWDAGLGZFRNVVPCYEMCNINHEXENMRXUXOCBOBKYLVJFE");
    msg.description.assign("BTKCJXRLPFKDOBGZWMIOTXLGATXXDHUDWHLSYQJGGMVKRJZCNCISYEHUZLVRLEYVNADRPRNVGKDNQMXRZOSQPEAOCRHBHIYVWVMGHYRATPTUBQDUYNCPFSKJOUMXZVWJPOQHPSXROMDNNTHWYZJFWCIMSBFXBJAUFGCKVWCLPTYKCHLZFTUMDOMBEJNKID");
    msg.vnamespace.assign("PCYLYXUJVPTGZCHWVOIIFLTKOTZDDBRMJMDXRSXTDLSUPFHALLXAEEBQZQZGTCRHZKYNSSGMVYENWEAAHSPNNUUYHTSKRMRXKZKBHPIHBODSAQIOGCVBZCULXGPVIAAJGRWZDNMCJTPHFCLUJICAHFOJBFEMBOWSCQAQUAKWNYGFDZDNIEMMIWBEFTSYJFLMJJXXIZNYWRPKXCEQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JIJUZATMSBYLIVLNSUDVBWNBUGNSAFWKUKCACCYQGWCBEVPMOZLELWHQGCQMJIOYP");
    tmp_msg_0.value.assign("TZSFJZNRFIZJVNDGBNRNUXMXZHGRQUQGPPRYRWHILIOUHUTWKLFCYQXYRUOWBMTCJOHXFBVLGJJZXGBKUGHPOKAJWTOVHCPFATYQTMJEYQSVLBDGCMZLYIUPKDBEHRFPGOPMNSAWMSTJKSYDLKTOETPMDMAXQNAWWFIEESXLGYDZTEMENQUGCOFMAEHINJXKNIFHQNAVJUBSWFWRQKCVZLVOHCAYBLRVASUDXYLWABCRS");
    tmp_msg_0.type = 201U;
    tmp_msg_0.access = 7U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IVYOKWYQFNBFJTBBIISDNUOJRFEHDGVLWGVRBEMDXQIENDMZNIOBWZXWKTHCCKLMUFKFEMEQEH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PMFMNNWJGVXHYUQFECHCWBIWELSMDAWZEERIRCLWZFJQKAFFSHRNLMUSJKZLFEENWGXGQZUDSUOKQVPNAIYYQAMJTJMZKXSUBOFFTJIEPT");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 25193U;
    tmp_tmp_msg_1_0.lat = 0.475834581125;
    tmp_tmp_msg_1_0.lon = 0.112881609805;
    tmp_tmp_msg_1_0.z = 0.236533411625;
    tmp_tmp_msg_1_0.z_units = 11U;
    tmp_tmp_msg_1_0.speed = 0.595894565767;
    tmp_tmp_msg_1_0.speed_units = 125U;
    tmp_tmp_msg_1_0.bearing = 0.841204326072;
    tmp_tmp_msg_1_0.cross_angle = 0.637258560919;
    tmp_tmp_msg_1_0.width = 0.986766412762;
    tmp_tmp_msg_1_0.length = 0.345820346398;
    tmp_tmp_msg_1_0.hstep = 0.769852723524;
    tmp_tmp_msg_1_0.coff = 24U;
    tmp_tmp_msg_1_0.alternation = 33U;
    tmp_tmp_msg_1_0.flags = 253U;
    tmp_tmp_msg_1_0.custom.assign("XWXFTUJNPOPUEJANYVMZXBQWQCIYAADMKRXCEOZLXWTHCAVIZNGPLIYXRCUUEFKIEZMALVTNNQESNB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("BBADOWNFZJREAQFUFOKMFKPVNIAHWWTJYLBVKOWQANVVILZOTUVPKUVTQOYYFRMGWFGGSUQGMSXUWGXKNHQGDMLHVZPLUFMRHTORPCMGREAMOLKHESBDQGBCYWTUTIZDURBYOYRLYTMNSIKNOQEYSNEGCYSKUJSCPWNNYOPCAVDDXIITXJCZEBRLBJPXQMCFFIHEWHJNFCK");
    tmp_msg_2.dest_man.assign("JWUOSWCBJCLQFZJSNYBMZZDQUPOMFFKFVBAOQYMVGFNEQVXINFFOPDPKSYKAISCTDIHXHXHUPZKRWSVTUXLORYFMNQDCNDAYCEGRIGJMPXYINDGCWJBHYLXKRRRATIBEWAQAWVKMOPDRAIQGLB");
    tmp_msg_2.conditions.assign("TAKXNMAFZBDOCIDCQESSGCYCHVNULGATJGBURWFFISRMMTZAIWYVDERYKIZQQWWENRQEZJNLOOJHIBRPBVVUWNTTDXJFPLACLHYLKGXUHEGXKJCPMNZTYNUPECDVOEPBOWRONXLLSIJSPOVSYLUNDGJTTEJQADCMBWZHBDLRKHJFJOVWMETCXOYYMZWAGBLDNSUFHAVDPZPXZSFXVXHPRWKQMUEUQKPKUOAFSHIFHGRZKF");
    IMC::ControlParcel tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.p = 0.234135602686;
    tmp_tmp_msg_2_0.i = 0.840865719926;
    tmp_tmp_msg_2_0.d = 0.887851522424;
    tmp_tmp_msg_2_0.a = 0.162914966786;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::Dislodge tmp_msg_3;
    tmp_msg_3.timeout = 19753U;
    tmp_msg_3.rpm = 0.178353643393;
    tmp_msg_3.direction = 164U;
    tmp_msg_3.custom.assign("XLWXQRAZRIDLOZQHLYYVNBBEMEJUVPEVYNQHRNSNXBMTCDQJXETHHFBIIXYJAHCGASFNPAJRGFPKJUALUKBDPGZBPLYOTFACRIUOLKOVEWWSMBERUTPJBOGIDODVJCPCTTVKVNQXQMWIEJDANDTIHFQZCKCL");
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
    msg.setTimeStamp(0.807362488773);
    msg.setSource(50188U);
    msg.setSourceEntity(225U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(85U);
    msg.maneuver_id.assign("RWPEBLSGXRYDYHWMGFLNXWGWICMBJANPOVYDMXTJWEVUMDOHSCPPSEQITZIYMPCIKWZZBUADCFTVUFPJHAGCKYUXNIKAXHBQWBOTCGOFNOQDHUNWBFVAFCVYKZXYSARBPENKDATLEJFQOJVDSLUHVGUXHH");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("ZEHIIFPRLYZYGRIHEHPSZTDEKKKKMLKFSKDXFACTDMOYOXSYZCFLNUMPJIJFPGRNGVEXLESFCWQQJMOODTWZZEJMJBBHCQXGSPNIOOAVQKMXNYPJAXMLUVNPDCSVAJTDYPZWMRCUSBNZULSVGUXNRSHHMVGGBJBMWKWUOESTBUUDATHWDEDIXUOYKFQIOQYZLRRRRUVZ");
    tmp_msg_0.formation_name.assign("JISISTUKDIEUQMTQCTKRVVJKJOKHFLSMDSCLUNOGZFWEEMNPWNYXRYAFBXXBVFZVPUNJVDLWLCKCPJYBXPEWPHNDCBYBVMUYUJEGORCFZSCOAGYYIJTGQYZLGTWUBUWKLPAFHGD");
    tmp_msg_0.plan_id.assign("VDAQSLWQKTOKFUMYEFUDTBVBJOHPYMOUPIVCKFYNGQSGEXWGAWSMZ");
    tmp_msg_0.description.assign("XGCDHVDARXVLWNRPZKWMZXRPEIKTLVHFJQUKUFLWIVHBEQVLHCUJNEEVMCUKCGXBPLAZSTSFRNUYFJYGJKXVMHGJIELVITAPBWXZR");
    tmp_msg_0.leader_speed = 0.84744558872;
    tmp_msg_0.leader_bank_lim = 0.104765757868;
    tmp_msg_0.pos_sim_err_lim = 0.328694049774;
    tmp_msg_0.pos_sim_err_wrn = 0.815264239042;
    tmp_msg_0.pos_sim_err_timeout = 47296U;
    tmp_msg_0.converg_max = 0.500808582197;
    tmp_msg_0.converg_timeout = 35851U;
    tmp_msg_0.comms_timeout = 19279U;
    tmp_msg_0.turb_lim = 0.917472972645;
    tmp_msg_0.custom.assign("DAOHBAROGBAYJTYFWQMJ");
    msg.data.set(tmp_msg_0);
    IMC::IridiumTxStatus tmp_msg_1;
    tmp_msg_1.req_id = 2647U;
    tmp_msg_1.status = 253U;
    tmp_msg_1.text.assign("USAHTGRNJGJXMCUPBDDMOWSUAAEFGUTVEMHPKJBAYAOWKWSQDYHWFIRGZBNNQZMMVPTYXXCFCFYRZREICEDVWNLAFXJAJPYZSLVPRDTTTJCRNZZXVORXKOMGVSJVSRZEIEINPOWQYWLJPLKKMQTTVMWBYKRIIEGILNCDBUBNHJRQELFAEUQYSXBTMUFKCOLBEDTYSYNQGVZOFACHCDBOX");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.750884771748);
    msg.setSource(44992U);
    msg.setSourceEntity(217U);
    msg.setDestination(32476U);
    msg.setDestinationEntity(181U);
    msg.maneuver_id.assign("RYOMUVCPIGLXWPJHKPXCLQIVTZLBXABNQZFDHVPCIVGAQUPFSSSXGKZVEIAMRGELZNQNYLQTBPZJUNUKLRYEROXWYOTKBODRICFUNTFUJGNVYPBMLCHOJWGICHXVVBFOHVQH");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 58190U;
    tmp_msg_0.rpm = 0.663336709323;
    tmp_msg_0.direction = 192U;
    tmp_msg_0.custom.assign("PHRZFXOIIADEUHVACIGFJGVSKMAOHQBXMQIZXZZURVMVKYFNEBMRFABBKNLXTTFJFJZCASZPPMBLTKDNCIVOECOCTSFVILXECYHGNRNQWKIHHRXUWNNQQUMDILZACLBMSUMUFPTGTTRRJDGZOUP");
    msg.data.set(tmp_msg_0);
    IMC::CoverArea tmp_msg_1;
    tmp_msg_1.lat = 0.821731673416;
    tmp_msg_1.lon = 0.731142120294;
    tmp_msg_1.z = 0.864896253442;
    tmp_msg_1.z_units = 176U;
    tmp_msg_1.speed = 0.0217398741114;
    tmp_msg_1.speed_units = 37U;
    IMC::PolygonVertex tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0499363368536;
    tmp_tmp_msg_1_0.lon = 0.0501247280673;
    tmp_msg_1.polygon.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.custom.assign("PSDANEVAMXLUCKXCDNZNGOLYDHDDCNQRQFNPQTJJURXXWWHNNRJAKMZBIOYWHYTSGLIYXCKWVBFUIYECYOGUXPABKKTOPXEMIUTQHMVVPFLHFO");
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
    msg.setTimeStamp(0.74009637601);
    msg.setSource(56267U);
    msg.setSourceEntity(194U);
    msg.setDestination(15056U);
    msg.setDestinationEntity(74U);
    msg.maneuver_id.assign("FFHSDWNLCKRWEBNZTNFNPXVUPWQSDCVMWRHDEYZWQMECBTPYOJRHQGXHSOBPODSQXBRCUULJEIORIMJJVTITKOFYANBXRHAOMCYZMKAXJICFZWVFKZYDXGINKXZBCYGJTXJUGRIGGYKHLVLXWZROGSQACTEJSOIWBPSWGZZMMDLLTGZLQPIDIEATMYJVVRSCKNPVEBJVQTEUHUOFEPMHQHESCIDFLULKXBQORAAPNAYSUNYAUPTWVDKHFLDN");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.998633203518;
    tmp_msg_0.lon = 0.0895022357334;
    tmp_msg_0.z = 0.616579123174;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.speed = 0.991949027622;
    tmp_msg_0.speed_units = 155U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.787989976959;
    tmp_tmp_msg_0_0.lon = 0.280378206925;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ZLRRWQBFJHZODXZAEYVMQTSZONPOMDJIUTCWOLBSNSYXIFWRMWBRNHDPALQGJVUDFZCEEDNRIVJVAFZGBHEGEPL");
    msg.data.set(tmp_msg_0);
    IMC::PlanControl tmp_msg_1;
    tmp_msg_1.type = 83U;
    tmp_msg_1.op = 118U;
    tmp_msg_1.request_id = 1687U;
    tmp_msg_1.plan_id.assign("ZIFOIZOPRRREQHMVTHMCKQUBKBHGOFZEATUAHNEWAMCXSFPPAJDLK");
    tmp_msg_1.flags = 43390U;
    IMC::AlignmentState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.state = 43U;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("KAOWGAONTKCFAEVQSJZJQAODZSBEGCGDRMLXFFEURSGWMRNVPJZCYAEJKPGJHLNXEHNTDBDHTMUNVVLZZDCKEWPMFTLZBKAOPIUAYYRUTGVTYIICQTOIPBVQZHBRZFVZVJTWXEPDAABIUHWGUUTXNKJDHSPSVBBXLILBMIOKURICSYLSJDZMHOKFPXDCXKQYEQFRFOOQWGQYXCEBJJNRWXHQULNMLGPYMCTW");
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
    msg.setTimeStamp(0.201447690824);
    msg.setSource(44408U);
    msg.setSourceEntity(132U);
    msg.setDestination(41153U);
    msg.setDestinationEntity(27U);
    msg.source_man.assign("KXQMOPPGXKUJAFXRGCUZWMXHWQRCSXAKNCUJMSBTXSBJEDOKLQBSAJZAIRVLOPVSFWYWYCAIZZJRDFOLZGLQTQWJODTVUVZCYBFBNQUQNKCEDMGLVDBWFBCPYBXCUIRTUVHOMHRXRJEYTHVWKNMIGJPSIOUFXIMGPUSAMNQNMMYUYFNRHOTEPRZTERNITLDHWFGJGDNEYEKZEND");
    msg.dest_man.assign("KDPBZZDOPHUFZLYMXMSFGQYRLKGEBIELETEXRCDHLVLJTVBCDZCOPNNJWTFWMRAPCBGODIWKSPBJQOGLLUSUWKNAZXWIIQVTJJFSXSXGIGIYSWCQCGAPTMYXLPDLDAMWUOWNHIHHJHGASZBZNNIQYVRCDAPEULDXHYOSHIYOYEWOJQEPZFTAKQUAVCBRTMETMBEAPK");
    msg.conditions.assign("ETOQQMSUEEBQSJGXZOFLUSFRJGHQSQYSFEJGCRWWRUJCDXDUNMTYYAMTV");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("RJGNSPSOQJFTVWKLRJYFDIEEZSGKYHAZMXXEKCXBUMWFFZKMJLDTILWGGQDSCHDBQEKNVQHDGQEADCFCNLJIXPAEPQILNQUDOUZRGIAAWHMPBDSGSPBYRVFUTOMYOZSFVJXRCNQPIHLRNAKOYBYCZIXKEOLEHJLJX");
    tmp_msg_0.value = 140U;
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
    msg.setTimeStamp(0.0601076568354);
    msg.setSource(21586U);
    msg.setSourceEntity(195U);
    msg.setDestination(119U);
    msg.setDestinationEntity(152U);
    msg.source_man.assign("NBHVWVNARHBQTJLPQACOYOYMSNURFWKTLRPRFEFNXSGEYAJMENMPY");
    msg.dest_man.assign("KLLMRDZDKUJDITVBCEOJSXSVCBTNHMKWHSNVNYZZJDIVCXNMPWPCLNCAWJR");
    msg.conditions.assign("TDKFPBVARIZTXBCRCWFOSDTMJJFHYTNAQRDZKRQQXIYF");

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
    msg.setTimeStamp(0.225933664663);
    msg.setSource(3168U);
    msg.setSourceEntity(176U);
    msg.setDestination(52580U);
    msg.setDestinationEntity(236U);
    msg.source_man.assign("IWHVKCYWHHRMASVPEMPDNOFKTBFARMFOWGOBZFXFMJXBKENFAQIZYWFJLLEFNXOKFLACZXTVIWYVBUGVQLWTICVWKCMSNCQECEASMGPHZXVUIOPMRQODXCIPQWUDBUGBLXKRRWRSLPLTIEUXUGGYDJAEABHDRZYDCDLTSBQJVFNRGLJHPMLCPKNIZUSUQAXYPZSTBUQT");
    msg.dest_man.assign("OHQTTAAWAUJFWZOGWCMYEMXCUCRSXYKYPRMMITGVXETYPFPAN");
    msg.conditions.assign("TKOFFBWGJEPQNVHQOTRYUWTLQLNIYXCLKMTSXVKADXDUBSYZINWEUTZUWPIMHLTIGBYQUGLQTFLEZVNEFHKFXICNQWBOPPVMGAFOPRZMJVSIWOUOYLARBARKYPQYTVSRMXCJXJ");

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
    msg.setTimeStamp(0.649569906337);
    msg.setSource(6436U);
    msg.setSourceEntity(197U);
    msg.setDestination(36651U);
    msg.setDestinationEntity(32U);
    msg.command = 80U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OEUTKGEOBNBRLJKHLNCFRBAYTJTZJGGIAXSFRPHRRPOFQDGYYYGXVOLDNXGWOKKMNRAEPHFPZQFPWJVZLDTTPULYXBJWNWVWSLMLUUBVUZMVKHBMVSCSTHRTUOQICYLQEOEWAJDWRJNJWQVYOXGQBVZ");
    tmp_msg_0.description.assign("RRGVIVSVSHQPQJXKBYPJJRPFHTVAOTIDCFOMQOLYLBCZNOEAQKESUZTURCNNRGKROTLLFKAPIOGAEXTFDAECHBWMOLMGYRTZRJJBTHUSCXUTPQMRKYDOGYNZZMFVUNZJILHXWTXWSOYCMZWGL");
    tmp_msg_0.vnamespace.assign("YBDMBHFEIOQROWUZGKKWWTLSIUJOBBLRNLILLGQVWMEWRNMOHXDKNTTUQNXXPNGNFLFTATUAMEGQYDCZSXUMVZJTBTHHFHAVXVJVJCVGIYKOURCYCAJCBOWNTIZDGGIXWMESCJHCKQXWPKAGTVOYPPIHYSUSFEFZHJAURBNDIEYGVZQERXOBDJPQSSRPEQSSIIZMSFDCBEVYMKKZPYNF");
    tmp_msg_0.start_man_id.assign("TNOXWUXGGQHBUXECUANOHCDKLCTBMMYDFVAZPHFYEVKAODPEFFOVASQDCATESIDGEZZMJHBIUKNXRKMLRTWVGYYBEWXINXSSQKISLCAIMRHWYFAJSSFXYVPETJOMPMTNBSMUJGGQKGCSQJILMXWUHNDQQOKZYGJAFBZJVZPRWPKNWZXBVVAENFRROIGKEWCVNTPWNPWITDGCOOLZLHYILHTLPK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AEUOOVIHBLOHUWRWIRNPKQSTVBOUMJZKSVXHYMPYJKXQNZJCFHZQDDDICIITVFLDFHAFZDMKEHICJWXUCAALCVPMNTERWFQEGQSSZUBKTWMCPOIKVKMGWWRSGHKIW");
    IMC::FollowPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("HFHSWGOECBAZUZKVORYETYFURNSCLQEQJSEYYWINCODZRUKTSRGVAHYNNBRWUGHAHSGKJYEMUQXCPBSDQGQUXQIJQBXNIUKIAUXTWEPVICPRDNHNFLDRKFASAXVHLXXQOSMTEXCQYTKVCMJTJNAUDDIBELMTBMIHOMPVTKAIYJDENLMLBAMIJOFDNVLGOPGWKKHPFZWMOBZAYXZGTFWKPJFZYCWODS");
    tmp_tmp_tmp_msg_0_0_0.max_speed = 0.471679144293;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 3U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.28470960614;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.482437406051;
    tmp_tmp_tmp_msg_0_0_0.z = 0.28215344444;
    tmp_tmp_tmp_msg_0_0_0.z_units = 195U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DMVXDCYMMCJKZULQNIPNHPRSCPTRVKSOZGCVYBPJKBGEQLAFBZVGHUUECPFGALSLJYKFNVDFJHQFLUSJUPQELOYBRPXKQIWTIGAZHZSGMTNXATLMRISEIXVEOBIQWCDRGUAAXWVSSUROFHHQNTVDBZGBNNTFLBZPFPNQYRCXOWPAWXFMAJKUHRMRIJSKGFWYGIHZDROOYOVLZBYTCHBYXTCEMJDUEWWY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanDB tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 61U;
    tmp_tmp_tmp_msg_0_0_1.op = 66U;
    tmp_tmp_tmp_msg_0_0_1.request_id = 63484U;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("AXHLNKWJYZGOSWSMXDKMTJDDTCEDOBBEIPLLAMCHHXSINMGJYQVZKBROGBZUHHSREUJTRJHGLPBLEMTSTEISVCDJWQKCQBFNXLCUCZHDTCNFFNEQRTYYQCAICQEKAPSLRBBGOOPXNUAUGGZUYFPPFIQHETASSVNMQGRIXZIGABBWOXUPOVFRXYUJOHSFAOMNXUPIWZQTAUTCOKFKWMRZEPNMKLHMVARIYYNVDWIWKZZYDLQRFLEJWPXVKJ");
    IMC::HistoricData tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.base_lat = 0.451975566029;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.base_lon = 0.989892276554;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.base_time = 0.932550639241;
    IMC::HistoricSample tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.sys_id = 15977U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.priority = 73;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.x = 5037;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.y = -16799;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.z = -20604;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.t = -22531;
    IMC::GetOperationalLimits tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.sample.set(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0);
    tmp_tmp_tmp_tmp_msg_0_0_1_0.data.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0);
    tmp_tmp_tmp_msg_0_0_1.arg.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.info.assign("ASBKHESRNUQOOMZBAWYWHSLJOUCAWULVUMLRJCKCZJSYUPWPBTRCIXOQUYHNVVPYKZXJTWMSYEGLPLTYWBJFFENXBRMITIMDROMUAOHAKHWDGHTKMOPFPPBDGQTNEGIFERSFXPIGHRAGGJDKOZFNLJFLIF");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ALWJVLXRGDZBZQAULWLGQJTKYMMOOKFOCMAVLUUTNORPMCROTDYQKSNHHPTFNDOWKPSRMLXJHPTRJNGFNGISOCEIRLJWSEVETUVLADQJDXBCWSWUCRNRQBNSCIIFBQKZYCVBYTWGXHCVE");
    tmp_tmp_msg_0_1.dest_man.assign("DGBSGWNVEVBFVQGNSTBWBFPSPNHWJXRWXUCMDPKHXYJQQEVSZQRNDLQRPKMLJUSBACHKAGHCOUIARFVZWFYOPYRXAYHXHXGMQQJGVJKDWINNVWAAOBVRKLSBMYEMAZTKTAJUKLPMCNZYWTEGDEPLNXIIECCWITVJKMXIIZLLJYQTSTB");
    tmp_tmp_msg_0_1.conditions.assign("TDXMXPVNQSZAKZESFHMFHESARRZKRKQDKZWSUDUXRTGWMIDJZLDJAAFOJPQYAQHPUVCVXNMQBEELSXCXGAPKZNAWWI");
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
    msg.setTimeStamp(0.101092604599);
    msg.setSource(50720U);
    msg.setSourceEntity(119U);
    msg.setDestination(55460U);
    msg.setDestinationEntity(227U);
    msg.command = 169U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LJDNAZIULZCACDHFBLLDIGGAXTPOQWQHFYIHIBBBWOJNIPZ");
    tmp_msg_0.description.assign("KUTQVCWAWTSNDZOBYZLPGSHKNJDOEVPKEJKWXTOXEEFQZJACWBRHBDZFDRWN");
    tmp_msg_0.vnamespace.assign("TIWDAFNGWETKVESKXORKIMYQPKGZNZIYITNOZHXJDMMDRBLZGJHOYMRXSWIJPSJALMFEJJPWIQOXQBLECAAJOCONKRBSDNVBZEPMTARCCPCOSHQSBTRXDYGPFWHPVNSGGDQTLVTTQLHFSQBUZQWIIC");
    tmp_msg_0.start_man_id.assign("HVWJLLVQFDOTIXQFTFXAITDVTUGTYQZURZYBVEEZRZANDOYEHYTGCKAMWJOUSPVUQLWCGCDELVFXZBQAKWKNLAQHJFKMGZYUJLUYHXFDUKLXTNHRBGDQJSDANNOWSVZCBFIJZTRXDMFOMJUAMDWAFVBAGQSIJSPRMLBKWXHINONPP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IYGORPLKPYRVICGPRTQDRKWQOLGFIKDFEOOVNOAKVHECTGXZULDJWBMYXPAJTXGJLDSCLATDXYIQBFSKBHSJIACUAWMUSSHIBZWIIFBPXANOMGWJHFTZSJSYZNJUSMITPGZHWCAVGURERFXMKRNRYWPBMXXLVVQZVUKNJBKZCAJQCFHAKPMEVQWME");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 924U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0616871784133;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.470816602769;
    tmp_tmp_tmp_msg_0_0_0.z = 0.856216165005;
    tmp_tmp_tmp_msg_0_0_0.z_units = 233U;
    tmp_tmp_tmp_msg_0_0_0.duration = 36593U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.664188043997;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 106U;
    tmp_tmp_tmp_msg_0_0_0.type = 253U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.803515815802;
    tmp_tmp_tmp_msg_0_0_0.length = 0.609117172854;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.0846484629667;
    tmp_tmp_tmp_msg_0_0_0.direction = 79U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MGUWLFFQFBLQTMSASWTOERLAFXIOIMRZEAPYJOINKYXYZSDJXZICYGEVBPJEMUZDTTCVGDIGEKRTJBKNWYDLVREHLUUVWHXMHXOBKNNXYRVSPOUGTXDFZEHXWLHLZMDZSMOPBQNJQBYNALRJSPWMTBNFAJCRCNUTKYLZCKGYAHCWPJSIJVRCUOHOUFTK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Rpm tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = -14209;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.343088486725);
    msg.setSource(24855U);
    msg.setSourceEntity(131U);
    msg.setDestination(56030U);
    msg.setDestinationEntity(52U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IIJWALITFAMECYCWRNOQORXE");
    tmp_msg_0.description.assign("UMYPPXXVBCGKJZLYKJKCEWQFVWGAAUMACQZUUHDXUSRHGDMGIPAO");
    tmp_msg_0.vnamespace.assign("FXULAAZUHNGHWDQWLCKKULQBCMMNYAWSTLHOQEXIPARBVYBXWASNSTGJYIIEYTRWKOVVJWOCBXOEZLPOWULCQRWBHXFMJRENBZIDVNRKHFLQQPSOSYHTPKMMPBXRZITJSDPTSIFREGYJLDSCPYECDIAGWPVI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JDVSPHDWNPYTNAGFBLISMJZOYIJIWQFTQNETBBCLPJJRSPKNTKMXNVZOMRQPMFCRBGPRVHIVLUTELZXWKDGBYBQCLOMMSIUEERIYIRLEDSKMXUKEWOXGFVWUQYRABYXARXCSSIZAWOJEYVXNVOYHCGCHHQEFUHZBZBFJM");
    tmp_tmp_msg_0_0.value.assign("WAOTKDIKIYIMGUJSNZOTPFTOHVACJ");
    tmp_tmp_msg_0_0.type = 175U;
    tmp_tmp_msg_0_0.access = 97U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BTDARHIJCVIWHUILPBJPZWFWXAEFCCUOU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("GUILZRRHFZYUVGTNKLESFQFRFWVUDLSNGAACYEPIISBNBWOEZCJCMUZIIJCKHMQTZASLDIPDTJVONECCJCDKPXXNYHZSKOPGPBAXHQHYHNJQWXWYDDXXQYERPKMOULLXMAXUOGUIHFAAGPDWSDOOYCQKEDZCVPBLOGCIEMGTHKBYHWLTVUMX");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 9910U;
    tmp_tmp_tmp_msg_0_1_0.flags = 165U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0441537413884;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.583030805408;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.418044224515;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 95U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.0295492857345;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 63U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.79475617162;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.163645219349;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 214U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TSIQVKYFJLXCPCHFKBQGJCMVUEOEWQVIYJERQKZXDLZGVPATWNTUAKFDLAPLDJIXUTDSICHTJGTZBAMRUYKGXBGAABNIPHOIREBBJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.108375487956;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.402496074597;
    tmp_tmp_tmp_msg_0_1_1.z = 0.0896872970395;
    tmp_tmp_tmp_msg_0_1_1.z_units = 71U;
    tmp_tmp_tmp_msg_0_1_1.radius = 0.541097066731;
    tmp_tmp_tmp_msg_0_1_1.duration = 33340U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.674749632481;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 243U;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("CIYRWGBFLYOWJGPAYFWSCHPNAXEGLKUIYOVEURVVCFGYKUSGTGDDAGMKHUURSWDEICBTCONTBHXMKXVITNJZZTUEQVQTOAEUQBUPDQEJPVYMODOXBDHRYHWYWMFFYHDZZJIQQCAMPOSFPWOLAZJIQPHHFSTOXTUZNCNXRBKADMMCPKVGKJMKC");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SetLedBrightness tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("WUHCLAIUZSLBPBZKRXYCCVQDYVEKFIPDESQCFXPAIOXXDQZGKONMWCJMJDATRHNPMHEANROVIBPYPPFVSMWHFDOMBVMUFCCLTSTBPQNGGZOOWRENSUFXLKFNLRGYAQNB");
    tmp_tmp_msg_0_2.value = 115U;
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
    msg.setTimeStamp(0.652573795524);
    msg.setSource(34535U);
    msg.setSourceEntity(4U);
    msg.setDestination(22770U);
    msg.setDestinationEntity(192U);
    msg.state = 212U;
    msg.plan_id.assign("GASGIWNODTIFHBTZPXENJXBQFCIHDDOAVKLDHXXBWQMISEEQPSFVDPQWGZMXJEZVFSYTWRPALXGPKJYOHRGHSYQMEPBSAQPWTRLGQRVBXWYZBOQARRINNDUUWZLRPTPXEYQKSFA");
    msg.comm_level = 248U;

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
    msg.setTimeStamp(0.828267809554);
    msg.setSource(11880U);
    msg.setSourceEntity(230U);
    msg.setDestination(24138U);
    msg.setDestinationEntity(65U);
    msg.state = 105U;
    msg.plan_id.assign("EXHCCETCTUMSYTWNRDDLFBXTUAJDZVNNVRPOV");
    msg.comm_level = 12U;

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
    msg.setTimeStamp(0.164052556479);
    msg.setSource(37797U);
    msg.setSourceEntity(20U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(2U);
    msg.state = 238U;
    msg.plan_id.assign("AJKBVATCLTABSTSWEAKOZRFCEJWEFATUQCMYHHQHUWWMHQEVFKWQBPVIXLWQOSXDLLFRGHPKSIUGKJVZRUYLGCKDCRUXTYOEXNRTIMOEZZOXHXXOGQBPDBDYSIIGBCGETOYP");
    msg.comm_level = 188U;

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
    msg.setTimeStamp(0.496065884509);
    msg.setSource(22099U);
    msg.setSourceEntity(174U);
    msg.setDestination(2438U);
    msg.setDestinationEntity(86U);
    msg.type = 4U;
    msg.op = 1U;
    msg.request_id = 64981U;
    msg.plan_id.assign("RDQRICSSGODMVKJBROEQGEGATFEGXMBLJKESFZBIHBYPHBJUEQMADMVXUMDTWTJRIWCFNSFIMIUSJNAKPANMDIKXLATHQSJTFXPJYKZJZLHIZLCLHNOVWDYWGVQRVFENSHGKQCPUSLOLKPENQYIUCAFZWQYMUBBAZGVCCTAJXNKOPPRRWTQJDWAWBCXPCTNU");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 120U;
    tmp_msg_0.goal_id.assign("UYAGATFLEMHZYCTCLJDHJKWUCYUWWVTCFOHLRYRUFOPNKENTSHZQWNTMKESBCJTHQJXPGXSXBMIGULQLBAKVFOJFZYWPHEWZFUGPYNPEJNBXBLKKWOQNZJRLMNKTNSDFMEKCFBBDPGAMKIXOWV");
    tmp_msg_0.goal_xml.assign("JOVTKBKFIDFFUCQOWHQTKPUUOBCYSRWSQSRMOPEZMWABDAQMNDRSKBEZSTXRWPPKHDWJPENWQUHYHSQBARLYXIXOUVTIXGIJCKRGCAGHPIIXMNMUNRMABUNVWYQVGJGZEOMCZTICSPTXLEAOGWZBLWKJLFJNVVQODNJDMNZSCHQZODYTOMUATZGLZKBTHLDFMFYLHVXRFPJHXYEERRNUVAYXJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DOPXCCFMKILKEDTYRHZNISVFYMQZSLNCGYXJBWDTDWSYXNOEZQRCVQCKFALNHKRLCIOIABXRQTHFHDHRKNVHAAHVDQYJUPOJFOUKYHEUZUITZSASICNQKHPMUPJRSYALUWMKXUVPJFWBNZUAPEJTPOIMTRDBNRFYCALXCTZJYIXBZQVBTVGWBOTRQVGBMIWTEDJFFEBOLA");

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
    msg.setTimeStamp(0.253877976904);
    msg.setSource(48616U);
    msg.setSourceEntity(85U);
    msg.setDestination(14408U);
    msg.setDestinationEntity(73U);
    msg.type = 39U;
    msg.op = 140U;
    msg.request_id = 58200U;
    msg.plan_id.assign("VFMEXYGNBQPORANDUZLQSRCWLBLGFJHUIKDBPTXYLDNCMDFRPTWBDTMSWHVBVYMZGNZIQXKSDEUQYTCAXQTRMOQKRPUXUAUJKDJWHMNHPDIMZVZIVDXGBZWPGCSFJVYFQUIETVTLOVNWFZSK");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.711559551135;
    tmp_msg_0.x = 0.365764770577;
    tmp_msg_0.y = 0.498646357629;
    tmp_msg_0.z = 0.026844060918;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHMPRAUPBKCIUZOSWPTOGZYCGHKWVLGBTILWHFYFWHMEZMBVDXKELLFQDNKIKZXYYFMKRDIOCRAWXGUNQJOZK");

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
    msg.setTimeStamp(0.0421025107618);
    msg.setSource(39759U);
    msg.setSourceEntity(188U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(225U);
    msg.type = 178U;
    msg.op = 96U;
    msg.request_id = 932U;
    msg.plan_id.assign("AUSJLRMOMAWLPXUIWYPKSESHBOTBTDVFPRTRNBUFWJCFFCBMDFWCIVWOBPEGTYCQMRIMAQNZRPXZDZGTKDRN");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 65078U;
    tmp_msg_0.lat = 0.735881126637;
    tmp_msg_0.lon = 0.875180515595;
    tmp_msg_0.z = 0.0865346861072;
    tmp_msg_0.z_units = 244U;
    tmp_msg_0.speed = 0.770210053883;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.bearing = 0.257911472516;
    tmp_msg_0.cross_angle = 0.177660002212;
    tmp_msg_0.width = 0.663218738331;
    tmp_msg_0.length = 0.696248297505;
    tmp_msg_0.hstep = 0.523057305396;
    tmp_msg_0.coff = 20U;
    tmp_msg_0.alternation = 254U;
    tmp_msg_0.flags = 81U;
    tmp_msg_0.custom.assign("TEJXYMDGEDYXYFQMEQJGCLRZKHRODPNFURKQYNTIIQAWCSQPBDNJSMAIPMOEDTDHEUEMNHJLWKLGDADZBYWESFPSRCQUYVKOAHTHXNTYJWFKZXBCZCNNMJLMPUEBAVGUXGTORVUJGRFHXLOAGFSOMWPERXCRUKQBMBJLUQJQTRSBDOHCUWCSNWBBCIYFKAGVJPZVZIVTMXZXPPVDHHPFZSYQISWKIB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DVBUSCPXWNOJFMGUSPGLZFRYJZZNNUWNJSTYJPCGLFSKDROTRIKDMQCEVCQUNHGYVEHWIHOKLAQSKIAFXOCVOKCJIMDRFRBBSTHDJFMTZDTDKU");

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
    msg.setTimeStamp(0.48588893026);
    msg.setSource(8102U);
    msg.setSourceEntity(71U);
    msg.setDestination(52024U);
    msg.setDestinationEntity(151U);
    msg.plan_count = 34125U;
    msg.plan_size = 4150705789U;
    msg.change_time = 0.986049516256;
    msg.change_sid = 7140U;
    msg.change_sname.assign("EAVDRMEIGEUYGVYACMMYFZSVQDRKZJPWCVNBWFPXFCEZOCAOIZAGJWXQGTPVIQLULVUFLXJYHWKATNKHECMBUHWQYALHOPBRXITIMSOCPXDCSCKWTRJHYSY");
    const char tmp_msg_0[] = {63, -47, 105, -94, -109, -6, 62, -29, 13, 13, 80, 59, 83, 25, -41, 99, -68, -102, -83, -91, -31, -87, 56, 76, 87, 20, 69, -119, -88, -30, 21, 121, -54, 76, -43, -55, 45, 82, -77, 68, 83, 78, 23, -20, 86, -20, -70, 96, -81, -127, 64, 89, 95, 94, -24, 113, 8, -99, 109, 45, 97, -108, -107, -90, 41, 116, 121, -27, 84, 95, 66, -15, -114, 5, 59, -104, -98, 12, -107, 22, -26, 31, 114, 80, 118, 85, -71, 22, -70, 64, 78, -83, 12, 7, 95, -112, -98, 60, -51, 43, 45, -95, 108, 43, 63, 30, 125, 15, -16, -27, 13, 44, 105, -77, 93, 81, -107, 34, -39, -7, -65, -44, -123, -14, -127, -39, -128, -20, 83, -63, 40, 92, -27, -100, 116, -97, -85, 114, 112, -95, -127, 88, -67, 122, -113, -35, 80, 19, 81, 3, -66, -74, -83, -41, 71, -89, 66, 53, -64, -48, 82, 49, -62, 64, -74, -123, -79, 63, 125, 52, -126, -106, -4, 117, -20, -7, 17, 63, 104, 105, 114, 25, 76, -111, 53, -128, 117, -16, 101, 125, -35, -124, 123, -103, 50, -118, -3, -44, 66, 122, -126, -82, -96, 22, 120, 52, -30, -17, -45, -5, -70, 49, 20, 121, -99, 57, 4, 10, 4, 103, 117, 91, 5, 60, -43, 98, -80, -13, 17, -57, -104, 70, 9, 104, -102, 16, 4, -8, -101, -78, -64, -81, -28, 6, 120, -123, 125, 106, -70, -59, 24};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PHQEIKQUPWPUIEXJBNIDCPPJTWRKDSUCEMXZFPMFQNYFFWTWYCAQXPESVMWKLJZKBSETFYBBIJUUPAHYIBRKGUECHHAFMTSICYFZTDAIJOVKKEBVLYBHWVQHTAZXVQNRGDUZNUCXDMNOBGOHMRKLMKZZSXGVLIDCWIRVDDWZLXGEFQKGMXCAWAR");
    tmp_msg_1.plan_size = 54323U;
    tmp_msg_1.change_time = 0.432338633436;
    tmp_msg_1.change_sid = 11326U;
    tmp_msg_1.change_sname.assign("AXDEHSISNDPPIPMJTSYYXMHDKBYAPETXRUMGLSLEAQNNNRDVQOYEKWONOJFFZHHDCCUBQGNLRFXPIACLBUWLKNXDKSEKVWMAWLWPGCTMUPTJKQJLXLZEVOSJYUAQZIOHUKZQPJ");
    const char tmp_tmp_msg_1_0[] = {-7, 33, -39, 15, 70, -37, -29, -118, 85, 81, -114, 30, -128, 40, 77, -23, -74, 77, -1, -18, 66, -14, -113, 8, -54, 89, 27, -75, -1, 53, -43, 68, -92, -72, 82, -116, -90, 93, 49, -124, 25};
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
    msg.setTimeStamp(0.422878694491);
    msg.setSource(5254U);
    msg.setSourceEntity(43U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(53U);
    msg.plan_count = 56841U;
    msg.plan_size = 294581148U;
    msg.change_time = 0.225290100845;
    msg.change_sid = 42105U;
    msg.change_sname.assign("OIGMGWKSPNTHUVCVQAKEKWZWDVMFJGIPFOBRQLWXMMDYGPIKLEAKLBTSFQXPZPVRAJSNXOUWMTSNZAIDVGMPSQJULAMDHXFWYSVJSUHXRZCMNJETVYFGXUZKIEYYNGNKDAZRDPETBDQJWYHCONGMFXVEYRNTAOTELFKABWSQCUQJFPLXBQIIOVSBRLNKB");
    const char tmp_msg_0[] = {18, 37, 74, -24, -46, -92, -91, 85, -26, -126, -100, 16, -50, -85, 50, -87, -113, -28, 120, -42, -127, 74, 36, -64, 34, 21, -74, 24, -91, -57, -95, -84, -77, 22, -114, -67, 43, 50, -6, 80, -112, -22, -5, -121, 51, 125, 97, -89, 10, -12, 79, 1, 47, 72, 123, 8, -124, 32, -89, -65, 107, 2, 98, -69, 124, -114, -46, 17, 40, 50, 20, 27, -3, 99, 80, -9, 94, -66, 54, 87, 124, -94, 0, 99, -47, -26, -102, 2, 75, -92, -82, -75, -52, -105, -26, -8, -121, -124, -19, 107, 8, -34, -117, -6, 20, 93, 43, 111, 73, 119, 35, 0, 27, 20, -29, 50, 52, -61, 68, -90, 80, -71, -113, 103, 54, -1, -36, -97, -116, 117, 78, 53, 95, 115, 20, 65, -20, 84, 15, 106, 120, 94, 71, 75, 92, -49, 103, -125, -57, 48, 113, -20, -120, 126, -22, 20, 8, -87, 56};
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
    msg.setTimeStamp(0.373394614025);
    msg.setSource(57902U);
    msg.setSourceEntity(113U);
    msg.setDestination(13863U);
    msg.setDestinationEntity(179U);
    msg.plan_count = 10650U;
    msg.plan_size = 1311110508U;
    msg.change_time = 0.686266102639;
    msg.change_sid = 52679U;
    msg.change_sname.assign("HEBLYTYVMYTWJAWSECJAXHWNNDFMCVJJTSZRYAPTSSUKRFGFBENMXDRNWIURKSXLSONLJYCHUUWDOAUUBHLQECYHAIZMVCOBQIUWLYAKXTLJPKGDTVGUPMZNOAYXYZYRKNALPETWCRSEEMBPHESGSPZMRJITJGIBDQVRIHZOKVGQNXHLMFDOVFVPGQBBQVRAIQWNTDHL");
    const char tmp_msg_0[] = {30, 91, 74, -122, 18, -54, 112, -9, -104, 19, 92, -88, -24, 62, 28, -30, 81, -89, -64, 107, 116, -90, -13, 108, -89, 110, 69, -123, 56, 6, 82, 120, -125, 81, -11, 36, -16, 13, 111, 51, 82, 20, 87, 75, 109, -55, 67, -22, -87, 34, -113, -120, 116, -52, 93, 81, 54, 22, -74, 59, -32, 110, -75, 44, 114, 15, 74, 20, 46, -37, -49, -49, 86, 9, -107, -96, -20, 64, 83, 109, -115, 27, -124, 84, 86, -5, 63, 88, -82, 23, 31, 53, 124, 92, -2, 1, -120, -13, 31, -52, -106, 98, -83, 69, 115, 103, 74, -113, 106, 98, -35, -34, 38, 98, 36, -122, -62, -95, -27, -117, -71, -6, 123, 112, -57, -58, -4, -108, -118, 47, 52, -31, 30, 85};
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
    msg.setTimeStamp(0.676711438257);
    msg.setSource(64776U);
    msg.setSourceEntity(138U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("CHBERSTWPAQOAYZLPPXNAFRVVJRFRWXXTWUFYYLBZIHKVOEDMZMRCTZHOMSQZQJGYYONIMRLXXLUPBZJAAYATGYJHHRANJFULOTWVMUNZDRQCSWKIPNOGSQGIYBSYMBESDVZONKLVLVJOIULGDAKHKEHRGCWUCBCGCTOVQKAESJPZGDXDPKITBDCPONCQWXXH");
    msg.plan_size = 62176U;
    msg.change_time = 0.989352146332;
    msg.change_sid = 12497U;
    msg.change_sname.assign("CJVPNCTGRUIRTUKDLZPQSEKOFCHXIPNSJVADMKVZANWDJIICPEQWVWHQUZCOLZYRWVZYIWHPOUJDEFBIMWVOGKPSAEQXCBFKATYSJTGJOGVIKMXEUBOWK");
    const char tmp_msg_0[] = {-118, -96, -34, 112, 85, -14, 86, 13, -9, -91, -6, -54, 13, -117, -89, -81, -58, -88, -52, 116, 3, -118, -103, 101, -32, -101, -114, 5, 125, 66, -56, 84, 19, -123, -107, -71, -79, -113, -61, 32, -61, 50, -41, -70, 65, 20, -36, 104, -2, -89, -35, 32, 8, 59, -55, -72, 97, 65, 70, 31, -91, 79, -72, 104, -124, 114, -59, 57, 60, -91, -98, 98, 46, 51, -34, -41, 25, 80, 88, -121, -128, 48, -54, -92, -29, -69, 53, -100, 86, -111, -20, 70, -65, -84, -55, 37, 89, -114, -81, 83, 21, 57, -63, 118, 123, 124, 29, 51, -15, 29, 117, 28, -23, 46, -63, 42};
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
    msg.setTimeStamp(0.434749648666);
    msg.setSource(1909U);
    msg.setSourceEntity(124U);
    msg.setDestination(8887U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("SOPFGDZQZRYEMNUSFUUMAYGBXKIAACVYAEAFLQQBZWZIYTDDFPKFKLPWPRVXZHTNAOEKIOLSSWDPXXRICPUHRUHHLOVGXJWFDBETYBIDWFNWJMQOABGZJKSCJJBZXISCMHDIPBEGVRTQMHVKGBCGHKMRNLKEXMELGXEUXMJAJQJZYEHLPZPVHWUGBLTVYKNNSSRCJNFDOIRCYXMPOZVLCMLCUTFDUSRNWTFBQQWTNTUOTVYIQQCSOAGKJI");
    msg.plan_size = 43848U;
    msg.change_time = 0.526167166781;
    msg.change_sid = 20902U;
    msg.change_sname.assign("ZUSOKLMZWOMSAYBSD");
    const char tmp_msg_0[] = {-126, 97, -118, 84, 120, -3, -61, -98, -30, -60};
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
    msg.setTimeStamp(0.359810973696);
    msg.setSource(1139U);
    msg.setSourceEntity(139U);
    msg.setDestination(65280U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("MPFZSHFQLSUUEQYNOLRWMLBBSZYCSOMRAMYOLWDOGKUDXPUFCVACHXKPXMDDHGNNTHVGKJNDYSMKFJQJFTKWIGJROJEWAVLMPZRNGQLIJIYQVEHTTEUJLRCYIODPUQSAMCIFPUHYNZKKXGVBUIKBXET");
    msg.plan_size = 3792U;
    msg.change_time = 0.926138659147;
    msg.change_sid = 21521U;
    msg.change_sname.assign("UFSQIHPKFAEFNBQOQELAIZNKTENXEXSGMNPJTVRZOKPJHOYBU");
    const char tmp_msg_0[] = {99, -63, -128, 105, -99, -54, 119, -25, 101, -95, -10, 86, -48, 75, -19, 121, -123, 92, -41, -4, 3, 2, -16, -89, -18, -67, -65, -124, -122, 21, 38, 34, 99, -74, 48, -113, 38, 37, -6, -17, -110, 10, -22, 31, -78, -57, 78, -42, -82, 46, -125, 119, 87, -4, 79, 56, 27, 82, -104, 14, 94, -124, 34};
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
    msg.setTimeStamp(0.264757576414);
    msg.setSource(8893U);
    msg.setSourceEntity(127U);
    msg.setDestination(23755U);
    msg.setDestinationEntity(252U);
    msg.type = 193U;
    msg.op = 95U;
    msg.request_id = 54811U;
    msg.plan_id.assign("BNDDDRALGMULVCTFBNODOYOQSSPPHWSNIVYPRJTYCHMOPHGRULCEJICKDUJBUQRVDBHNEWFFNTLNKAAHXNMSGIMXTBQRFIFZFPNHSLLFIOEJCBKGYHWWCGWURZURYRGEHAVGTVILESXZEMQOQBIJ");
    msg.flags = 65181U;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.385456940181;
    tmp_msg_0.y = 0.979822004714;
    tmp_msg_0.z = 0.630600182254;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GTNPVQYBYEJUTCWICKAOWHJEHFQDTHLLCHEYRLXFXFWYNSVHJWEKFPSIPZIANFGEK");

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
    msg.setTimeStamp(0.662824483744);
    msg.setSource(29940U);
    msg.setSourceEntity(239U);
    msg.setDestination(53390U);
    msg.setDestinationEntity(226U);
    msg.type = 177U;
    msg.op = 199U;
    msg.request_id = 60400U;
    msg.plan_id.assign("GWGOZECTOKQFLUYTECHLBIKNPQLPJNZARBNCXDDNESFBJGUOGGDMHUUUNQSLRSTIOGWPGNZAXWJYYXNPCBTWORKXDETFHVUVSVCZCZEMOFFMXWJDHUZHAIKETYMJVKLBZXTRALITVAVSYQVPNSEFIBGIFP");
    msg.flags = 56631U;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 36906U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ATTOJFPALBJVPKCYAYERJGNPXIENCKULMFGPHLOUVXMAFXXGGWOMMTJVHJDJTNULBFIILOZKYQPKBTEEBUOPKAVQZRVXDWLZCKGZCSSZNWQLMRLMSOWFRRSOAWTMDTDTDUFPBIYRZYNHNYRXARNBJUEQJMEXNLVWOXDVRFUQCDZKIMDBUYQWU");

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
    msg.setTimeStamp(0.369569832183);
    msg.setSource(63883U);
    msg.setSourceEntity(8U);
    msg.setDestination(41409U);
    msg.setDestinationEntity(126U);
    msg.type = 164U;
    msg.op = 224U;
    msg.request_id = 5739U;
    msg.plan_id.assign("BTMXDMZDWFZAPEHUYWOCNEPZMGKDSLCESMDIIKOYYAXDVCHFXVKNYJOISQPBWYEHZRUXZCQXZUIKFBAGODYGS");
    msg.flags = 34746U;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.239678499387;
    tmp_msg_0.confidence = 0.30011612025;
    tmp_msg_0.opmodes.assign("UUMLXTNCXJVBFZCGJYSFPRWKCXAWZLGYNIMEGHVICCVTDFDIPPZZPFWITNDBMMMQNRQFLIOHNPVQVBZHUFYDVWSGMURRSZAQLGBWJFXDMXJFROEHPSUCJTSORUEEENVYMWRNPBGAQGABHTBXOCDHGYOAXPXIAOQEJBRVKZDOKLDIDKHJTCAHKOLGLFSSZIGVIVKMBUESYX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ACNIUATKFINONQXWNRXHBTWIDLPGXHXKBOVGEKGVYYYAKFTYGOVAERZGRJDYNDMSSVSBCCSCMUAZWWWVFXEJSDQYYDJKAPVZJYBBFAPBPFOZZXZDLRPUONGUVCCEHTMLSUWHQHUWLIQQVKERWTYQCIUDIONZHCWWLPXQXVMLQEZSUKMJOFSICTKRCIINEQVLTJRROMFTHBPH");

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
    msg.setTimeStamp(0.459199175446);
    msg.setSource(5716U);
    msg.setSourceEntity(194U);
    msg.setDestination(29735U);
    msg.setDestinationEntity(225U);
    msg.state = 85U;
    msg.plan_id.assign("NADPESSZVLXGNPZEHZXDPLNWVJWWJMKWDYFGXKRTOSRHIZBTKJFYQPWFDBNUDEOAZXXVMNFLZSHTYVUBFKXRWMUVJKYAALRPUICMSUFRJLLBLONMXPLFDRHSIOVEKSOLJMBFUWHBDJH");
    msg.plan_eta = -1530310124;
    msg.plan_progress = 0.21889484782;
    msg.man_id.assign("EGUIYCCNAGIYYQQOFNMSUSSLYQTPEXVTKBAWRTRHXHYBKVEQRHIWLEODODUQNGYEGTPNWLUSIHMVPAGIPRWKYLAXVDMZMCCWVTSWJFPIDDRJYFNEKRAQUBQOJIAWRUSLZGNOXWBOMYLVFJJFJLPZJHCCGFXHVOJGHBNCAYRKQOHUNMPBLUBHZLPIAXVHUJCPMSVTZRTSVAKZXWWGGCRKBKUZTJETZXEMKEDFB");
    msg.man_type = 48581U;
    msg.man_eta = 1641437165;
    msg.last_outcome = 219U;

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
    msg.setTimeStamp(0.407073329018);
    msg.setSource(30585U);
    msg.setSourceEntity(73U);
    msg.setDestination(14879U);
    msg.setDestinationEntity(239U);
    msg.state = 207U;
    msg.plan_id.assign("GQWWBWNVPFEMWIPGNEXZJYOVVBUVZNSOZGQRASTEPKNTTODRXTGMMMAHEYGJNDPMXZ");
    msg.plan_eta = -1235180126;
    msg.plan_progress = 0.214731962215;
    msg.man_id.assign("WWUJAIJVZWYKPBIQBGRIARRJQTQKSPSADNNEPEUSEJVPMNOXZFRHVRDZKIILOGFGYSYWGISZMTPTBTMUOUBRVDRXUGWPUBXZTAEFTWOSCAZNFESHJXSDCOZWKXCBLITPCMDPMDMCPJCGMKGVXHBYYKQWAGLXLYENOVFYXFFMHHTHYKXLEEHZROJOJQXJTTBOUHUVUDANQYKCDQLJPV");
    msg.man_type = 61388U;
    msg.man_eta = 2094895712;
    msg.last_outcome = 75U;

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
    msg.setTimeStamp(0.617320843688);
    msg.setSource(2078U);
    msg.setSourceEntity(234U);
    msg.setDestination(24203U);
    msg.setDestinationEntity(83U);
    msg.state = 250U;
    msg.plan_id.assign("YOUFHXFKFEMJSIUQPILTSVFVPWLKHQJXSRCEDLXBHWXKIGOEZWINYDQDWPUGNPTKIJTEXNMUYGMXRAAYELLVZZDNMYZGJHOIABHYOXSPPSLZFTVFBZMBAQDURBPZWMFCPLL");
    msg.plan_eta = 879569348;
    msg.plan_progress = 0.699438094341;
    msg.man_id.assign("BQLEEAVFOENBEDKEIWJBGBRDRCJNPBZULCGLXLKGKDFRICHQFZTTPNORMOYVLMRXUDPXYYFUXJHYVEHQWHXIAVIEKPJ");
    msg.man_type = 63758U;
    msg.man_eta = -948017552;
    msg.last_outcome = 182U;

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
    msg.setTimeStamp(0.81535290334);
    msg.setSource(48031U);
    msg.setSourceEntity(25U);
    msg.setDestination(54606U);
    msg.setDestinationEntity(11U);
    msg.name.assign("JOFHQXJNIAZRTOUFWEDURAPNSIKMRHAEMJBYJVGFMDBGAMUIXLRZUDZXPYZKONBPATHAFWOJKGEMFLQDWELYEWVOISDZJZTKXKBOFMBLQQNNTSHTXXUANUWPCHZGUCPNBW");
    msg.value.assign("NYIKVRHVUTZZNABHDPPKGQHPXBGCWVBNYYPWXULQWNTKJDKHLKTKQPIHWUROSLDAFENUJLXGQMUFXMLVRCJEHIIDFATBRFEFMFNIVOMXCEJYDAFJMESBMXUJUCBOYWRGIELNMJTQRIYCVEYIZLWFNHRWBZQ");
    msg.type = 248U;
    msg.access = 82U;

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
    msg.setTimeStamp(0.560634345456);
    msg.setSource(38724U);
    msg.setSourceEntity(51U);
    msg.setDestination(52648U);
    msg.setDestinationEntity(172U);
    msg.name.assign("LLPRVWVWRCNGONZKAPGTEUDIOPYIQFMRKSVQEYLCXEUXTEDBTYHOQPWMAJYJZXVKESMINPHHWHULUJANCRBMLGQXMTBIYLNFAAYOZAVZSYHQHGXXSTOFJWSFCKNXPWZDTUJFVDHGNAABGIPNPOUKTVBCQMRERMZIKBRSWYXQRJFGMDCGWFWJZMFDTSBVDXUEOVYEBUHLGFWNRJCNKCBOSOSMC");
    msg.value.assign("EWDPOURUHYHBGYNYNJDYDGSUPOWGAQCZUSJVRSUCKMRDGBFCLSIWTZBEWJFTVFQEDQFDMANRBUPVWVRNEKKATCAYEPFHEZZLYDIAFAJAJKGMHRSOVNVSMCXXPBCLODBKRVGUQFJETVMMPMMWUCWGTJZOKONUXITXDNPJQWINHIIGQXKTNYIOZHKQZWQXWTCJMHTKMCJLPVSHVTZAEXLOPYRXZPCYEBKOHLHIALZIBAOF");
    msg.type = 110U;
    msg.access = 208U;

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
    msg.setTimeStamp(0.214221967256);
    msg.setSource(30561U);
    msg.setSourceEntity(234U);
    msg.setDestination(2597U);
    msg.setDestinationEntity(222U);
    msg.name.assign("WESYEPEDJFYJLZTATXRVINLRKEODVKAVYBAWRJITGRBPAACPDSZMIHXPSSBDMKRQPZOUSTUXNUHSFIDWZBDAOXGSLNPKUCFOVGIQWRIGEMYMWZNLIMKLUXCON");
    msg.value.assign("UNAOCEQPKGIFYHBSVTYVLPLYKWJCJPIOZGDXEHOXCZJGVUWUVIVLCEMURFAHQSGMGAZWJWXT");
    msg.type = 28U;
    msg.access = 107U;

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
    msg.setTimeStamp(0.423713717017);
    msg.setSource(11962U);
    msg.setSourceEntity(36U);
    msg.setDestination(49250U);
    msg.setDestinationEntity(160U);
    msg.cmd = 85U;
    msg.op = 224U;
    msg.plan_id.assign("BCBDAFIPDKHMVYXQGJOUHAXMXHYBEYFNJOYCPOCVSWAKKAMUQWOLTERUOBKZSQXNNVQRMUSYCTTWZJTLSMALSUERJZBVXIKLTNKIAWVLJZW");
    msg.params.assign("PWQMLLYNUIECODPPXODAJLDPISMOGTVFIIESMPYJUEKTFXVRHMZRZJNBQWXTOCIVGRHKHPYZUBNNZGXHQQXYRDKCZGYXVSKGCLCSAFLBNPMCIRSHVGLRZPMEIAUE");

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
    msg.setTimeStamp(0.0897495070619);
    msg.setSource(41887U);
    msg.setSourceEntity(52U);
    msg.setDestination(29439U);
    msg.setDestinationEntity(188U);
    msg.cmd = 85U;
    msg.op = 229U;
    msg.plan_id.assign("IHHMSXNQZLRQPLOFLRZVIXBDHFINTGCNKVRSVZOMGARFICLHIBZZEOCPSTAATUJOQFCXGAVKKISISIMHVLRYEDPDLWDGUCEYUJWPZJVLTDRWMOKOAYNTSLUKYDMZNEQJXIJAAGQYSXYZODQNBFJBKUWDLJHNMFOXHABKHCWJPRSDFRNMGBULAXNPTGETQVQINBHXCYYGWHKSZVPMCMXBREUVFTPEPYYUOQSEAVJ");
    msg.params.assign("XPQTFXVWFPMUYQPMJUFCGJVOKPQVZHZOMEUJOGZDEQFNTIQSYRHAEYNCXTZMBVAWNWKFXWPSXOBIJIUGFVYUSVSZNFDUEAACWEKZLKHIDYJOGRHKUBFSCARRBIXESVHVGLSBMZCIHQOHWJEDJZNMJAKUSIPSIFXMOZLDGTCRXBRROMLCGALTTYNQKCEBLLVTPDCMPAXCGWLWSODVUHNBTDXNWLQRYHKKDJLUDZYKRIIOQEHGNTGYJPEA");

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
    msg.setTimeStamp(0.576035978797);
    msg.setSource(34338U);
    msg.setSourceEntity(200U);
    msg.setDestination(41039U);
    msg.setDestinationEntity(103U);
    msg.cmd = 227U;
    msg.op = 175U;
    msg.plan_id.assign("FCHKLQDDKRRVDWTXUMUHOJNGPABOWVSCTFBLVWFNRIDVEOAHVSYPPOSPNGRIBJLLICEMPWXVFATCBCKAEONMSUOWGZBBRRLZINRUXFEEMOFOIXVPEMTAWEGKBFHCIECWJHNSJWSKVITCTZGXCYKAMMMHQYLZODRRFBQNPNHOXSYYLGZGGTXUJTQNJUNZDWZMZUJFDUEYKZLPQJBRVHVMPYBE");
    msg.params.assign("ZTJWLDJIAXQVFMUGYRQQARVOPYGSUXSLAFVCGUAGISKGHYTNWYATQZHPYHXEPANJDBFYGMBWESLXLKPUEGDKICKYEPHVSCVZIMRIWXIRPFOJAXPVANUOIOSQNHMKKHJHAQVLRLTFMVDJEORJPSDNLZRBNXMEJUPUJMNWFOTDWBEYMWQTHZEUXFMZWGBKNGOZTZCZVCCBFMLLLTNSRCDKOIBSESKRCBXJZOTHYDTFWXHNFPYQUQDQERIBCIKADB");

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
    msg.setTimeStamp(0.169735133902);
    msg.setSource(26008U);
    msg.setSourceEntity(102U);
    msg.setDestination(11155U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("ACEYEPZTETFWYDMNWPPQBJVUZOURZYSSTQGOKAFMNJIKQHVUYRECCBGZSZLZKILFBGJQWXBN");
    msg.op = 190U;
    msg.lat = 0.373449189537;
    msg.lon = 0.0401604558426;
    msg.height = 0.329666713468;
    msg.x = 0.297266553936;
    msg.y = 0.875028891817;
    msg.z = 0.289161693263;
    msg.phi = 0.511967239928;
    msg.theta = 0.772696052438;
    msg.psi = 0.467584940859;
    msg.vx = 0.124080965263;
    msg.vy = 0.331158768637;
    msg.vz = 0.0258017262964;
    msg.p = 0.389323552214;
    msg.q = 0.310888260545;
    msg.r = 0.116106979139;
    msg.svx = 0.187134768946;
    msg.svy = 0.158655423251;
    msg.svz = 0.66715855428;

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
    msg.setTimeStamp(0.997991695611);
    msg.setSource(19331U);
    msg.setSourceEntity(72U);
    msg.setDestination(26994U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("ZBKAOXBWBEZDSJRGGNXIZLLIBFXGQDRJTOIRCWMZQHYKBRQYTNPIOATRYHUOGYYIWLTUSJOFXHVMDLZCVFREJOMDMPUUGFHNYL");
    msg.op = 238U;
    msg.lat = 0.031012745572;
    msg.lon = 0.0211608165328;
    msg.height = 0.819489439459;
    msg.x = 0.350781483757;
    msg.y = 0.991763518457;
    msg.z = 0.0160277648476;
    msg.phi = 0.885797231224;
    msg.theta = 0.303043528919;
    msg.psi = 0.676493839824;
    msg.vx = 0.660356170333;
    msg.vy = 0.395858667583;
    msg.vz = 0.336695904008;
    msg.p = 0.368634489612;
    msg.q = 0.499039695489;
    msg.r = 0.521140846011;
    msg.svx = 0.300466484688;
    msg.svy = 0.329042746829;
    msg.svz = 0.459472329005;

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
    msg.setTimeStamp(0.208563095104);
    msg.setSource(65507U);
    msg.setSourceEntity(141U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("NFHAXZNYHELBTXTYZPVWBKBLXHVXEQQTRGWCMXRPRTEBWCJFZPNMDOAVTFYQETIPPMFYQLSBVQQLLJNLICMIYNMSOULDOEVLWJPDOXIGDXAIGNHBVWUFGFZIHSKSHSHNRMBGZOBOUYJYYKSOFBJKSKBHUDTRSJEKCCWVWOOTRUQKZQTAELRAVSJAHUZPWIUAECNRQUAVMNKWCFRTGKXZFDPJVGIZJMZDCPYOLIYUMGG");
    msg.op = 29U;
    msg.lat = 0.180800617667;
    msg.lon = 0.607223178767;
    msg.height = 0.92787555573;
    msg.x = 0.722555479915;
    msg.y = 0.256674246941;
    msg.z = 0.554334126683;
    msg.phi = 0.322714876931;
    msg.theta = 0.838140568504;
    msg.psi = 0.761666784216;
    msg.vx = 0.839470472211;
    msg.vy = 0.888155792656;
    msg.vz = 0.164465370991;
    msg.p = 0.0412217084918;
    msg.q = 0.600838437969;
    msg.r = 0.473733610414;
    msg.svx = 0.633507713485;
    msg.svy = 0.520096292002;
    msg.svz = 0.793624250931;

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
    msg.setTimeStamp(0.741035725511);
    msg.setSource(23536U);
    msg.setSourceEntity(82U);
    msg.setDestination(65050U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("SPFFEWPDCLLNCPBCOYFTYVYHTTLXACYIGUKKBGXWCYQUVBHLQHHNEZJZHRXNFORKPQKSDRAPCPANYYKRDHZPLZVMWFAEGDFMASJZOSOZDJGTIZTNKEZQTGKEFKXZGTIJVSLTQIOHMMQUSGVVQRURMUXKRJPRLRXUXOXIMTGIBYBNNBFQEYBOMJSZPDWBIOCCCJTIASDY");
    msg.type = 235U;
    msg.properties = 56U;
    msg.durations.assign("NGTSZHSEQVRASFWBETNENGIVBPCSQJQEAYMDVLJHUPUKYKPJBGZVYDABXWSSCZWYGUPAVLPKHFXWGEYDUMRPNDRLRIHKXZVQOAVOFAYUJJBCPAZXXKBDHFJWCLPOFTTCXZIIZMNTIAQDGZMNHCLINRWERKEIKZFRODBOUVKUPBGSOUYURSCLTJLQWNEWSWZFMHDJ");
    msg.distances.assign("VCNARRSMGGWYQEOJMNATMNUDWFAQVMNGDQHVBPXDFUXTFIAPUSSECRUHNMXWTKHDUBHBEZLVHRCJBIIGDMSASJZLFXKEUBMLYKLGTEZQAIDNNGKOTFDCOBUNGWJPPWOEWGURIHZZLVKXMPJAYXABQCLZROYOFXBAYGGMKJJBPFQZKFKUFIHYSXCQDOAIVVPYSLJBHXLTEOZWLCPQSYSTJDXRUZICYNIWSRRWKEVCTIZPOTQYKQ");
    msg.actions.assign("HHASKPOADLKCEBRQYFCJFHETACZYBIIDTVWFGGCXNCBVCOZNUJUEBXFPHWYJMTQGBWGAORDONQB");
    msg.fuel.assign("EWTYKAXPJVJAAXFGQTRAXTLHCXIURTPLKWEBFOPTZUORSNVIFRELUASDVQHMDXKGWKRAZDFBNQLBLFWYYPJVSEDSYMMVXQUVCJXZHMMBIETQPDOOEJYCPRZHRGBUZSWMQMKFMPLBCVYXLQNSIXSZYJAKF");

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
    msg.setTimeStamp(0.775567961816);
    msg.setSource(18151U);
    msg.setSourceEntity(121U);
    msg.setDestination(25475U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("UCMRRLEYONQNJYOSMCQTDNGCJDEOWXJVDQGAOWYFLSQIYUVTUXR");
    msg.type = 148U;
    msg.properties = 176U;
    msg.durations.assign("XOPPZJXQOUJWKOWQNQELBVTWJZDQJMXQGTAEFOUFTWUPEKSCUMUDVOARRVCYTYYNBBMYNMEXGZWFKGXIQCM");
    msg.distances.assign("LBZPUZMKMJQGVSFKLUSZMLMVEIKCKEQSQMYXBCZYPATKJTXUCDRREWXJNURMUDPOJQAGYDZDZGDBNZYOMPPSPJ");
    msg.actions.assign("LDATAZOWNWKWQMQQLJLKWRMYPZVPVSBNNKCOZQPXLXCRQYFGPTYSTUGXDNJGIEEVDGFNUWZMT");
    msg.fuel.assign("LGEYQOXDPLMUPIBCKXVUIWISJOXRBAZXHWIBKGFXZTRPRFJDTVFFDBZJGZQGOBUCMYTUKHSODYJOMQCZSJSYUHZGCOBABVQVGBEKWEYVYEKWUALMNVWWFFPNWKGLKHJRTYMHZQUXJHBJVSNKRWFQKSDJEXPXIRTAPXIPMOQHRNENFRILVUHTWACHEFYVCLN");

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
    msg.setTimeStamp(0.0296676137388);
    msg.setSource(55184U);
    msg.setSourceEntity(104U);
    msg.setDestination(52755U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("LZGXMWSEVNDKQATDOUVSJEUDRIFWUPSVXYOQYERSTACJGNUP");
    msg.type = 106U;
    msg.properties = 51U;
    msg.durations.assign("XNMLCLDETGBZEODSWNQNYOPCEEYFBVAEENNYSGRVTEWMXS");
    msg.distances.assign("ZCJARNUYIPFHHDVGJQBPXWYASIYWBTLYROSIDSTNDFLTWDEPKGKWLOULFEHSAFUMWPNKUMJAYVOILWCHUMVXYJZQJBNVBYKHOOYFHVTNTBTZBZGATRSSETISBGZGLMUEIRAZIQXEF");
    msg.actions.assign("MMIKCGUSRDRZRYYQFNWWTXOVDYFYEUAPRNHNVHXLKQULFCZWIYHMHPEWNYBTWAFLGLOGYMGKICMDCBLSJMPMODBVJUQNBHUQCZSTKVAHUEVOEIZLTBQCFIFXTFWUDSVYZDHLAATOEXLCSPZJQZVGWWNFHTKROPRKSXZJICOAUBECDSIAGGSIRWGBBV");
    msg.fuel.assign("VZVZDVBRETCOXXFERAMFIWGSLOBBLTHSHHEVDZWOQUKKGTPWMZHBRZOIHFJMNOJFLDDGPPUVKDGEWSXYJKB");

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
    msg.setTimeStamp(0.456517953992);
    msg.setSource(53111U);
    msg.setSourceEntity(217U);
    msg.setDestination(36272U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.336146183524;
    msg.lon = 0.412921093589;
    msg.depth = 0.208712232599;
    msg.roll = 0.522034735803;
    msg.pitch = 0.862612423941;
    msg.yaw = 0.212097887934;
    msg.rcp_time = 0.174193994117;
    msg.sid.assign("ESYXOXGQYISXWFNEYZHFFFXDTJGZVNWOPOEIOGBNASXLEULCKQAACAVCWNUPDNAQZSYNWYATHZOUUWBPQSPBWJFKRPCJRERZNDTMBODKNXJTHICMHSEFVLEMVOXVKPFOMDTWQILBXKRGUPMKMZRAGYGHIJFMBFWHLIRRDEBCOHYJUVCAVXSYUVQLCG");
    msg.s_type = 64U;

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
    msg.setTimeStamp(0.614671076721);
    msg.setSource(3324U);
    msg.setSourceEntity(244U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.115547231034;
    msg.lon = 0.380289140017;
    msg.depth = 0.360163525245;
    msg.roll = 0.280537425002;
    msg.pitch = 0.24599402331;
    msg.yaw = 0.981123263527;
    msg.rcp_time = 0.388682864482;
    msg.sid.assign("ECFCCALMRIDQIZUBEHIVMCOQEFVPXKGKMEGPPAGKIKYBZNCBICQEMGYJGDZDSIWGFAPGAXBONRZREJZLKLIKOFVYTDXYDQNDOMXSMRSZJPUHYDUHXDSUOFSVZJESUAEWUUBVHSQQTPONNCAWXYWQOYWTHTTBCLNFILAJOBCSRWNLHGUXUOVQRVPEMDBLQABKYJDTVSJKGGEPXWQZHKWTPFSVJZTMJKNTLFPLIHA");
    msg.s_type = 196U;

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
    msg.setTimeStamp(0.179582488555);
    msg.setSource(49969U);
    msg.setSourceEntity(103U);
    msg.setDestination(27096U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.682368395079;
    msg.lon = 0.677277752337;
    msg.depth = 0.143227479542;
    msg.roll = 0.290905955102;
    msg.pitch = 0.284810079813;
    msg.yaw = 0.300268727426;
    msg.rcp_time = 0.520257146911;
    msg.sid.assign("ARGEPTUFYPAYNHOIVYTHYGQNPSVSKMKLSANCPTTCKWJQQWZHEBIURHMHOKEIETGXUHQMDSWVNGEOGMSBZAZQWVAFLYQMCTBNRBVTCIEEWFOHLDYUAYBIAPDRQOLLHJVDTOLXGUPXCIXKFCIRTODSARODMLZKJZLRXZYUCT");
    msg.s_type = 253U;

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
    msg.setTimeStamp(0.78327704734);
    msg.setSource(64971U);
    msg.setSourceEntity(69U);
    msg.setDestination(55802U);
    msg.setDestinationEntity(9U);
    msg.id.assign("GFPGCUANIRSMUHBESTWNUTQHAHENRLKDZIROFYLHLOLDMKCKYVEKPGZNQIXWSIXORYRJFWUFNUYFVFMHFUUZTQRQNPLMBZCBGXQOXMOJDRHBJBWGZTKTNVXLPPHCMPZOJFWVAMYMQFDP");
    msg.sensor_class.assign("GWLHXQMMUCOOXZYIAOQDMSZVPKGODKJEPNQCASAGFKFLEMSWZXTSGOGSJPYGFIBFUDLMANOPWXKWEBYBDBTUJYDNUVPQFLJJCYDLYCLGKIOAZWRHHGYTAJZVHUHREMTFITZPMZNVNIZDIABRCWLYZNBVFNTBQKQUSDUHROGKEKNFQSJWRPELYBHRBJTHTPVJUGSEXWIMSCXBMVCLME");
    msg.lat = 0.918315146189;
    msg.lon = 0.0760140672846;
    msg.alt = 0.949496035491;
    msg.heading = 0.0767761529194;
    msg.data.assign("WHNGJZRQQVDNVNOYWVYDZUBATTWCEORKYFJDBLZUGESTSZVXWQRBXSVPYJMEUQVFLKDARRYIMGILUNVBPLXMPOLNTHSHTEESKZBXZCGXOYNGCS");

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
    msg.setTimeStamp(0.714350343688);
    msg.setSource(60958U);
    msg.setSourceEntity(3U);
    msg.setDestination(8997U);
    msg.setDestinationEntity(182U);
    msg.id.assign("ABZFNORILCEBKLVLYRCVAZNILRWIIWPAHINGGVGOTGTYFPDZIYCWAXWEBZTPXVXCXSXSVMPMDQGPYGIMMSTTRQSVKFNKUCXJPDORDUKRTBVWELLLRIMJLTKJQIHSMLGHKOVHHUUZIFDZSNXVDCEBGGGUNMKSOPYEWBDQYFNEWCFJBFOFMFDZEYJOAJFSLDBSDANZOKYZQEHPQCRWKYUWTYQJP");
    msg.sensor_class.assign("JNLGCVYIXHPCRDMNSQRIXGFGKPKHKMJOUVHONJWZBJBWIBFKEMIXWDBTHGVCNZLXFFHNYAGQKSWOPUCQYRVVRXXWBGPWQLYYSJCCHCPJAEEJORYTLGBNMGUORTCP");
    msg.lat = 0.628010693413;
    msg.lon = 0.623025859722;
    msg.alt = 0.343253187693;
    msg.heading = 0.658129839621;
    msg.data.assign("TAJGGMPHCAABJZVGMCBUOUNISTRHTXHISJPXBKVPMNNHFRSJMHSJEDVSNZEXVYCROIVFCXDAYAYQGHMIUQFUPYXLWRHBUIEDTCETBVGBKYFMPQBZNGZZLLKLTFLFOPNLPXYYDYXIWZWUICCSLIJMMJWAQKBXDQPOXHRBCZWQWYWDGKAOIWALKKLPBVQLSQRHUMEJNVSNOCEIUEEFK");

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
    msg.setTimeStamp(0.141090237304);
    msg.setSource(54393U);
    msg.setSourceEntity(167U);
    msg.setDestination(53550U);
    msg.setDestinationEntity(94U);
    msg.id.assign("CCRTIYGZONKVAQNNDHQJJDPJGNFXMCSFLUKXJUMFPQIWDHLJZQGWGRAYIULLODLGVPIEOJXMQBGUAICEXMVXIHDCDOXYUOWRHRVQBBFSSKESRMLKKWQZRYTFGGXVBXHPLOAUTVBDBTKFAMRDCJEZKXHIONURYAYVPCTNZKJDXAMWHONWFMYPLQWQPYENYIGABEIULRUWFLVGSTHOZFZJVSBOTSATSTEVBZIUJHPQEYS");
    msg.sensor_class.assign("NJEVKREBNSWSCQOVSPGKRZGEFYIWGJLP");
    msg.lat = 0.770206532218;
    msg.lon = 0.207469257394;
    msg.alt = 0.490451074434;
    msg.heading = 0.722618201903;
    msg.data.assign("MJWMMSNOHXFBHPSKKWJIHVTYNLQFXJHILVALYITVXKUFSNERTYACPKPMBFGPLOQSATOERDVLTNTSXSYHQGZDMZPIAKZRQNCOUWHBIVDQEDUDOEAEERJZHDWURCQIPBGDJWHXVWBBDCFIDSRREYZZDPKMRAWOAXUYCLKFCGNLICOJBPNANRZHFGAKGUJNOTEBUBUWMVYLSGJPJQ");

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
    msg.setTimeStamp(0.852284552145);
    msg.setSource(1284U);
    msg.setSourceEntity(215U);
    msg.setDestination(21964U);
    msg.setDestinationEntity(110U);
    msg.id.assign("BYIJOVEYXYKJBWGVFGTQBETZAAARKQEMXSRDVLPKEDFRUHCDZNDCNORCAESJABWBKZGOPCSHXQSZVNCPAGRFTOGQFWTZPNLIMBLQTIYZONPDUECURXUBMJBSHVMDPOFHJWAELMXSAXIHARQHKWHWYYCGSCSZZMVBOYIWWITFFFDYTWVPPFJSDCVJLSMMUB");

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
    msg.setTimeStamp(0.55405089487);
    msg.setSource(57945U);
    msg.setSourceEntity(200U);
    msg.setDestination(31513U);
    msg.setDestinationEntity(214U);
    msg.id.assign("FLQZCPBODBTGBPMBXZMHMWIETSHVUBHGZWNXZMGMXLNCJIWIOQIWZEFECXBNAHRECVDUXVTGBHNDHNBUXEEORSHG");

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
    msg.setTimeStamp(0.667381440158);
    msg.setSource(51192U);
    msg.setSourceEntity(147U);
    msg.setDestination(53046U);
    msg.setDestinationEntity(0U);
    msg.id.assign("LYONFQYZHCYBSLUCCQLVPBQLVFVPSKQTZIEBGDCDPXURLOZREHDZRPWEWZLTDZBRJWBKKFJJOOMSIEGVORIPEMMHLCVGJUQNMDIMWTAYBGPZGULSFUYNHEYWCWQWEKJFSYWTCHAEUNHVKMTUXNTAYKHNRIZMQJASBTXPLSVFTOUIYAAKFTBJQIHNAXVRFRDGCPXAICDTD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JDNWAVNIISKFKYJMGUEEQPIEPDWFRUQKNFZGHEDNCTATVGRFGSOWCXTVOAGJLAUOWLQQDFMTFOOOYVDBPCHMGBIFKLFSALATPPQWBAMOESKYXMUPIZGINZRLCIKCQDXYXCRAKTUUCWPQGJHYBEMMLQSVVZSCUEVIHJHSNHLVKHJZETTQAGFDYRAJPREBEWRBMLVYINRBTDOQKNSCVBJ");
    tmp_msg_0.feature_type = 202U;
    tmp_msg_0.rgb_red = 97U;
    tmp_msg_0.rgb_green = 229U;
    tmp_msg_0.rgb_blue = 246U;
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
    msg.setTimeStamp(0.926227380095);
    msg.setSource(62445U);
    msg.setSourceEntity(43U);
    msg.setDestination(13825U);
    msg.setDestinationEntity(144U);
    msg.id.assign("HLVEHPDVXXITQFBBSIWVTYXWJFHCUUNYACSYTOBMXJJVKJNMFGACWHQCUESPEPPBZUVVRDKIROBXBTNGWUOJXERKGOKYYVZQDMDMKCBANHIILDCYXLUEYHQISEGRWRUIMHFKIVAVDSKOCOZFTQXTNKAXCWPLJHBMENLLERKZLFJ");
    msg.feature_type = 22U;
    msg.rgb_red = 218U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 199U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.388464254263;
    tmp_msg_0.lon = 0.567342363056;
    tmp_msg_0.alt = 0.649194569671;
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
    msg.setTimeStamp(0.929599207406);
    msg.setSource(32385U);
    msg.setSourceEntity(2U);
    msg.setDestination(41209U);
    msg.setDestinationEntity(104U);
    msg.id.assign("UPTZXBATBAMKRDWVSGZVUQQPHXDEFOXEFBHFWJVSATBEIXONJBILHKMIGGOMXOFVBSIGGQTVODKNTZZACRRRIIFCJLXFWBKWDWLQUJVTHPJMMZEONYQRCNYJUYLAUNAFNLIYPSTEXFFSTDUPTZRMODKNEYKKJARUVMKVGVXDLYPEHSENRLKRADQSSEDZGHGJOGAAO");
    msg.feature_type = 195U;
    msg.rgb_red = 84U;
    msg.rgb_green = 221U;
    msg.rgb_blue = 55U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.719355975642;
    tmp_msg_0.lon = 0.0531327377248;
    tmp_msg_0.alt = 0.967026635144;
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
    msg.setTimeStamp(0.0480739976873);
    msg.setSource(54339U);
    msg.setSourceEntity(31U);
    msg.setDestination(42319U);
    msg.setDestinationEntity(97U);
    msg.id.assign("IHJGCGRWZQWRCKVHSBNCUUZFYLGABUFTXUISNRVOWIAHHPJYLDIDEFQSMHKQNWPOQVDVQTXOJJDJXHJGTEJYULX");
    msg.feature_type = 222U;
    msg.rgb_red = 47U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 25U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.44022534404;
    tmp_msg_0.lon = 0.759722428663;
    tmp_msg_0.alt = 0.254122489503;
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
    msg.setTimeStamp(0.123007438489);
    msg.setSource(48199U);
    msg.setSourceEntity(83U);
    msg.setDestination(44595U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.570505903175;
    msg.lon = 0.271072407731;
    msg.alt = 0.680098626847;

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
    msg.setTimeStamp(0.00251105401881);
    msg.setSource(19321U);
    msg.setSourceEntity(181U);
    msg.setDestination(250U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.960108609736;
    msg.lon = 0.135174375292;
    msg.alt = 0.352575676848;

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
    msg.setTimeStamp(0.743161842394);
    msg.setSource(26412U);
    msg.setSourceEntity(40U);
    msg.setDestination(39271U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.6558710359;
    msg.lon = 0.995485526862;
    msg.alt = 0.0306621789143;

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
    msg.setTimeStamp(0.447726141144);
    msg.setSource(36464U);
    msg.setSourceEntity(241U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(104U);
    msg.type = 40U;
    msg.id.assign("ODNINYPGLWHEBWJMCIVPGAUPEVWXSTTHRYSTQOACQVUVNRHZURMHYKCXNFNSXWPWHILDAFFFMRTGDLPWJD");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3942204199U;
    tmp_msg_0.value = 177U;
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
    msg.setTimeStamp(0.24855305155);
    msg.setSource(39504U);
    msg.setSourceEntity(225U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(2U);
    msg.type = 77U;
    msg.id.assign("VFAFTDDQFILINCUAQENQEFYCPRBKEAMXWPXHHCGQLAKITMDGZNDKLGUASFPGYYAVPSAAFMITTXYAERYCTHWLKOFPPGBHVHRHXFZLLNUSMMDRTBKDRTRXQSOQFLIFYMEKSCCZJQXSVDCYZBVORKOOAWDPBNBVUUBWGZPBWJOWLMPHIJJHOMKSVTTEWGWQNX");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 213U;
    tmp_msg_0.speed = 8242U;
    const char tmp_tmp_msg_0_0[] = {-107, -110, -105, -53, 86, -66, -110, 108, -120, -77, 12, 17, -1, -7, -18, 54, -120, 39, 37, 101, -74, 92, -93, 33, -18, 57, 109, 65, -29, 52, -115, 78, 118, 94, 116, 33, -12, 18, -52, 47, 72, 123, 8, 53, 102, -70, -121, -12, -25, 104, -100, -119, 73, 73, -9, 46, 52, 110, 39, -19, 99, -8, 103, 81, 50, -96, -50, -87, -76, -96, 37, 66, 122, 17, -31, 49};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.640158198317);
    msg.setSource(47832U);
    msg.setSourceEntity(61U);
    msg.setDestination(8552U);
    msg.setDestinationEntity(184U);
    msg.type = 218U;
    msg.id.assign("LFGSVQFQHWORNKBJGYCDRMUZPISYTGZYWZNZPZAQDMKWDSUWHPTZDYLBFQSUIJXHTABWSGVVJEAKECGAWNHHTVFBEXJCZOSWCYOPRKXTTKCLXPPFOKMHMMCQGLCMZDINIXXNIUEUPEVYS");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 14U;
    tmp_msg_0.op = 138U;
    tmp_msg_0.request_id = 56085U;
    tmp_msg_0.plan_id.assign("GPCSKQGKRASBIBWCPSPZBUWRWBORJTLMPUNHAFHBLRZVWOTLUIDWIUUTDGLEDZJRECINPEBSKMPXHJFFFAMVVDYRADVGZQSHIQTYITQGOABIEWPSKT");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 58380U;
    tmp_tmp_msg_0_0.lat = 0.688839567427;
    tmp_tmp_msg_0_0.lon = 0.848029210865;
    tmp_tmp_msg_0_0.z = 0.727979116486;
    tmp_tmp_msg_0_0.z_units = 247U;
    tmp_tmp_msg_0_0.speed = 0.174022898728;
    tmp_tmp_msg_0_0.speed_units = 181U;
    tmp_tmp_msg_0_0.roll = 0.638305262855;
    tmp_tmp_msg_0_0.pitch = 0.622901733196;
    tmp_tmp_msg_0_0.yaw = 0.376500207796;
    tmp_tmp_msg_0_0.custom.assign("VJVVROKJYSUEWIJNFVRCHQBZOHZMCONHJFWXAVOUWDVPGXTLB");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("GAPIATHNQTRVKTSLFFGMGILQEOMSYPMQEENZJTLKTKCFXUKOIWYPBPBQJTHKISVPRGXPRYFULXIXJBICSZWWVNLDWPPBBCIAMEVYDHOCTEFWNSMURRDDCSYOYYRJNZQOHFSPDEUCVLYWQXAHWRLACIKZMIUYFZDXWMMNWJDCOSTUAONFXENLJHGSKQSHZMWKAKXZRDBKUAGAZLDUOHQPJNBQXTEGNVARHGVURCOXVJCGVUBIHEBODBT");
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
    msg.setTimeStamp(0.0959428815197);
    msg.setSource(35370U);
    msg.setSourceEntity(253U);
    msg.setDestination(53579U);
    msg.setDestinationEntity(209U);
    msg.localname.assign("AGKKGZTYSDCZPXMKCEM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TQWBSBFJAIUJEDZTLJVLSHFJWHNBLXDHQWSNUGFPCBKVPMELTCSGPDZGEUWCIZIOFWIVGURIEVYNBPKSJXLTIXBQYOTAARULHBDOKPVDDGQZXZMTRKWMIOOSGEANQYKAMSSTXWVNXCJZUITQPOGDOEEJUNGW");
    tmp_msg_0.sys_type = 5U;
    tmp_msg_0.owner = 32277U;
    tmp_msg_0.lat = 0.217575560112;
    tmp_msg_0.lon = 0.375390785142;
    tmp_msg_0.height = 0.188568623178;
    tmp_msg_0.services.assign("NJWMTAJQMCBBHJPPEUZCKHMJAXTBOCIQNFFPVONMREAZEDUMGLNMRKDAZGUNSYLNSTHJFFIVFSNNEIBHJPZRYLRIDJCNLOYJKCDAWDVGZSWHFMACIQDFQSQIGXPGYEXQWQCXVWXPBQKYWOGBQATWZIOZSZQOAXGHRGUUTRRKYXGVWPIJESFOOMUTDKBPKRSEWVVEOMJYOVZCDULRGFPKMHTAY");
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
    msg.setTimeStamp(0.437519018916);
    msg.setSource(64000U);
    msg.setSourceEntity(63U);
    msg.setDestination(20154U);
    msg.setDestinationEntity(64U);
    msg.localname.assign("CAONXIBFKKDZQXIUMOQBOFYQJOSCZNXJYTHZZFYHIFVSBFSUKMLSXLEPKLGEIYJUBGRLEKDGSZYXLEWABNJVFYRSURUGXLSDNETEEEENWACYCRCPQNRWPODDVTOHBBFYQPKJPWVGCUYAIBNHJTIHLCFMHVHODAHSDAQDWQGTRHIQDGVTBZEKTIQMPLXCSABVUJNGYOTUSDARNCPXKUMJXZXOVJMRCGAHPFRPTTMVGKVWIMAIQZJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RSTHYRNBMEGTHCWYMNXOYWZCFOJJOQPCLRJUOZIDDFVXPXBZAVEUFLZJOTLACHGNBHMQNYBRDDBFNFDOHCRJJP");
    tmp_msg_0.sys_type = 15U;
    tmp_msg_0.owner = 52035U;
    tmp_msg_0.lat = 0.863567630275;
    tmp_msg_0.lon = 0.230058914049;
    tmp_msg_0.height = 0.981593289809;
    tmp_msg_0.services.assign("VRUWMPDSNFKPQUOEYFBXKJUGJYGKCNQTIJSFJHQMXBWRMICKKDZUEMSYOBRZPCRJYHWQYQBKDETLMCSMEGFYZCAXNKUJZPMALMDQZWUDBHLLBGOCOGVTAKJHDFFNOLUXPILKVYSQJCNRPYTBOFOTSHPVRATSIDSDROHWEVNRNAIABTUMYPZVNXQWIWCZGCUFOWJLXQELTZVHLVAKXIEHFTR");
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
    msg.setTimeStamp(0.137819016714);
    msg.setSource(23870U);
    msg.setSourceEntity(30U);
    msg.setDestination(20958U);
    msg.setDestinationEntity(130U);
    msg.localname.assign("WVSXCKUBEGSSIKMPGPBIZFQUVAVZROIGLKLDHPYNRAJNTLOBBHJEZKSDDISRPTGHKUPZECNYOHIIXQUUZTLFSTGIJKXWWMASXLQTIQACGVFDQUVUNBRZONTQJCSQMMCKTDYDNXPGTTXHMLBAPJPFUBFAHKRWWJNLDVZJXOALYOCFVTYWSWEFVRP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LEPFFRYIDIHDSOBPOBMZLVGUQPRKCFHAVWTNRMJEIMYHQTIFBGDKUKCEOTAPOYJULXUGJPEZYHIBCVIAMCIILBNKAUOHGKWWNGXNHNBFGNRMKLOQEFYEUTMJSWOJECXVKMLNX");
    tmp_msg_0.sys_type = 60U;
    tmp_msg_0.owner = 21559U;
    tmp_msg_0.lat = 0.953925884607;
    tmp_msg_0.lon = 0.202888331508;
    tmp_msg_0.height = 0.248029996924;
    tmp_msg_0.services.assign("JWDYVTBDZTXUHEDAKSQVCWXXTNGDMLMCUHZIUEKSIUVFTBHSQKKEQIUOIRUZBGYRJVCAZIWUVMSFIGDLEMJOZONSKYXSOMAPVYALPXKFQJVBHXDWWNCZQTVAGQRKSYDPEXKERLH");
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
    msg.setTimeStamp(0.667883643286);
    msg.setSource(40154U);
    msg.setSourceEntity(141U);
    msg.setDestination(52416U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("EMRLEXHKKAZYAVHSMQRNDANJHCUAXUEUWXDKSDOLMQTGYOIMHRGWGSLVPLWLRSWZBXYNLIVNBBXCFFEYKTUGKGFDCJTICOBGBARWRNWYWAZ");
    msg.predicate.assign("RCZOEUYXKKIHSQTDXIVQZYXBCCDJWSPRGCTMBAUGGUZOHXUFMQAGBHOIWMFDXMCMPFNRLUJGWKMJKEFQWACDNAFPIEJYJHH");
    msg.attributes.assign("WWNFGMUJJPAXEOYXTCYSSHRSBCQGWVHBFCCTXRQNLVKXUIRVKSUAZPPHBLSHRXQYFNZPGODONLKVVEMFWNVGQOSCVPJQHYYDENFBYUBGZNPLDXEJJITHHMNLZZJVGQKKTDMGOAXPFLYFKSOIIZFAGOXKIANOSTWUZUYMDQBTREUXICJBVGEWIEKHE");

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
    msg.setTimeStamp(0.537617819659);
    msg.setSource(54419U);
    msg.setSourceEntity(250U);
    msg.setDestination(31094U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("OEIVYOMGKPTDH");
    msg.predicate.assign("QLRWRAGALTJSTIDZTAMJDEEUJQZMRVXZQYORHSBVGG");
    msg.attributes.assign("AKCSBGFEWOWXMIMYGXSLVNRGAWUPTHEXPJQKQEZHUCXONJLZP");

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
    msg.setTimeStamp(0.126435638318);
    msg.setSource(551U);
    msg.setSourceEntity(211U);
    msg.setDestination(14548U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("WFHCWTZPJKDAFOQYBNUBDTKLWAIEPUEMZFASCECSSGTXSABPAIDSYSDRQOKUTOQBNTKONGLUMDNQLKZTVICKTJREAWLQSPBJOFEIYQVRYYLWCRRCFIFNJWHFAOXHIMTMXJOOIVXGPMRAEOPJEVNMDZUSQHLLDNZHPMVLJHVNAZGKGVYZMBUMJISRBPXRXIDHZBWYKUYEBUNHQ");
    msg.predicate.assign("JXULGUSZCHIZYOSHZTFIATZCGNRRQQJXSWPDZGDBNVECWOHGLWWOXKRFXMDFGEQYSX");
    msg.attributes.assign("DGQQQYBKMVGSWVTVTSPLXSNKYHFOIZYRJVEOOCEUZVXWINFAQCDKGZWPZOCLLPSITKEMHUJXJTZTQBPMNRKIDAHEGQMRXOEDAD");

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
    msg.setTimeStamp(0.302447051889);
    msg.setSource(64189U);
    msg.setSourceEntity(90U);
    msg.setDestination(65404U);
    msg.setDestinationEntity(73U);
    msg.command = 131U;
    msg.goal_id.assign("EFHHFARZWHRYVGYGDBCLDVOOSWOLHCUXCHXKQTCYNUCXFZATMCZYJSPMASDWGNGDGYTOHQYAEKFYAENMCKLRABXVWHVDFVRTANDOITSAJWSDQITNFUQJYMQUVQZVWGGZFBZPKLWCJQBSNNXNGPLIDTRWSRJEKDIEIFPZXPVKEKHOKTRUEMBWFDRBZULSOBNIJQMJCVIRTEJZMFYPKJCBWBLHUUXOMZLELOUMXAKTUSPMPPEIJXGOPLNSIQHXQ");
    msg.goal_xml.assign("MWAGROQDXCSDJTEVZXTKPAYQPIFFGFEVSVWUBMYEEQONXXCGKZULNVYXIKINCLHNOWVSASROBTIGRKSKJHJAYJRCPETHABBRJENZPXDAUDLHCFMIDMSOWKUFIUTPV");

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
    msg.setTimeStamp(0.737556186287);
    msg.setSource(34425U);
    msg.setSourceEntity(108U);
    msg.setDestination(41694U);
    msg.setDestinationEntity(209U);
    msg.command = 86U;
    msg.goal_id.assign("AJBPVJBXFVEUUFWXOXMCXGOQKJWLXYDNQOMOWZGYGBRTQSKFGUPTSTSYZAFLEL");
    msg.goal_xml.assign("FRQZPDLWYMDDIIVVCIBOHUJSAAHKJABSGVYOGNKBZQNMSFWCXWNXZHFNDRTUOTOBWXEHPJKICMUFEJRZKJIYOSGZHMPXTGUHYWYEBEPWAYOSJUEAHZDTGBMGLRBRVPYLCYVXUQNOFCBDXGDMZODMFCLLDLMUIRZXZDTLEPUULS");

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
    msg.setTimeStamp(0.90391657998);
    msg.setSource(50134U);
    msg.setSourceEntity(16U);
    msg.setDestination(40034U);
    msg.setDestinationEntity(50U);
    msg.command = 218U;
    msg.goal_id.assign("JONTAXNYCOMRFFOVDIHTWEQPCUCGQFZKZFLZRKFRXMRDSZVCAGFGAWPJYJNLPHOPOKEHJXOVDCDMSMIWIYVBQTXGYBGFNKBHXKJJXCYTQCEKNUWUHWPRSIOMQBOYOLLORRTRXNDTMNAYUQURXWCLVLUZXSBSDSMTNUQLZNBCEKBQUZJLSQVEIXEDWUHJTJTKMKWEAIIYP");
    msg.goal_xml.assign("DMBDPDUZKWDXWNROEVUSYZTYOHNCLTMAPAOGMTQAGGGKSVNWRBFJDSBCILGVJGORFQLKEWEISIQITYRINUAXESBO");

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
    msg.setTimeStamp(0.913105521942);
    msg.setSource(20810U);
    msg.setSourceEntity(250U);
    msg.setDestination(36914U);
    msg.setDestinationEntity(200U);
    msg.op = 233U;
    msg.goal_id.assign("HIOLCOYFQLBAVQBQKLTRRHZIGMBIGMUTUSGJNYWCVPKMDGNAEZBFURFISHAXKIQCRVJOVGALPWIMJRNOACJDCBXDGSLQPCDCJXLMPRPLQTVWXXCDFIHDYWXTZSTHUEKJTZCPHEYFTJYBVQKAGNKOVELBZZXSOWXZN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UNGEONDNMIPAJWPTUZAYOMJQSLIZGUJXPQFFJRUDNWVJXFOBBXLOGKEHWWTAQYDLHECOQFWRBPXCROSUKRIAYFRWWTGSPLYRAWNVKNCBMIIBJSVKCQSNSHETRLGUMXIZUTKBTQGGFTEIABJPGRLZVUVQZHLSDFAVKEIE");
    tmp_msg_0.predicate.assign("XJQZLNPISOAAAKYKMKORBUWDMSFJHCGNZTUGO");
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
    msg.setTimeStamp(0.698594320312);
    msg.setSource(43604U);
    msg.setSourceEntity(74U);
    msg.setDestination(48964U);
    msg.setDestinationEntity(149U);
    msg.op = 44U;
    msg.goal_id.assign("CNYAWAQCRDKLJIUWRKYANBBQLRHRMHEVCUXHFVFUFBPGVLGBMJCDNIYPOYKQAHLIYL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RSWMLNSFIYQYNRLDLBSAKSORPQGATCPDXJMWQHQLIHIOYDHXLTUSZMOVLARSXZYPGJMVKCFNDFHWMFLXKTFUYECRDOCZWKIICQWKKHZTGKJAPUWOEAQBMOBUAWPGVJCVDVNZXNVSIGXMKAJGJFEEPBUIPNRMADZOUXEFSVXECGHTHDPFQLPBOFOEBYMAGWAFRZYWDVHGHLKHE");
    tmp_msg_0.predicate.assign("YWGKTAMPPIBANKBBWEDJHMBIQMVHVADYYYYLZXVWYDRTJNSBUWLPSFCNEHNKIIZICNBGUTVRPNXMCNJOZTALQRXOTJIOYFURVNNVLKWOUWJFDGQCISRXLIEKHETEDSEPVMCUPSGAEEZMGCURHUEXADPDQPSVDIKWOHMLKOXSUAOVNIBXFKQRTFJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AMSGTUMIQFWWPJGWEFKUQAKMGTPMKTXIMFTIKERXSQBJOVONFTRLCHTLTLEEZEZLIVMOVXXXOCFYPORPLXQOAONSHRYSBWDREFYPEKIJZGFCUXUANCKGNWSZCUMAYXPNHHKZBHWYVBKID");
    tmp_tmp_msg_0_0.attr_type = 136U;
    tmp_tmp_msg_0_0.min.assign("NALYIXUBREZVWCVUBWWPYZQHBRURYPZJPKWNKLVXQBCJRGXSCNFEYFGWGLNOPWMKINAGPAOXHRKQAQBJCTWLROMHDRIVHTMLMDBPPAHFYIOMJEOOUGLVUSVUFXKIUGQZZNEYXCZTHRVETZEAJDXKHQZTVWKFBOESSYFCIPNDTGNSWLSCHTERT");
    tmp_tmp_msg_0_0.max.assign("XOTBPJIWWPWXJBQOQUPQGKMHVKPDROPHCHRSGYMNBNZIMXAELFOHAKLWVNFBERWIRQCCBZDXCOJXADSIUZUGKJTKZDNMLILWSTNZDBGDETUIDEYFMUEVSKQNLGWQTHNQRYFYAQVDXVKTAOTBXV");
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
    msg.setTimeStamp(0.434436548514);
    msg.setSource(13613U);
    msg.setSourceEntity(202U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(13U);
    msg.op = 183U;
    msg.goal_id.assign("HOPDEISDCKNXAKJCGCCDCAZLNIOOCWWJUTCAVEOQKABHZBMMDGUWPPNNIELXDWJNZLQRESERFVGYVZWHBRZQYODVYECRFUYABSTGDRXILQXNLPFLPSGIRQKAMDSJJORMEKWFPPTRTJIXBGXGADMKFEPAUHFFJZMNCLAYFHNUIHVPVBPIYSOFQMXAWTVUBKZWXQVBJTUKCSRYLOJOZZEMHNTMZHXVGQXMNSTLWYVSFWBUUGRUIYKBHYDSJI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HTFBDJJYCLUDOYRQGOWZKYONCTUIJXFXWPDULEIZLAHGMRBEVWHCQKVQPPMJCKECFDVLSPIQKQBSSRUBMIFISPPFRXQOAZXDNKEKYAERQUKFLWOTDNOBJHDOXASGMWKXFWHUHKDTGEXNMSYCGVABYAYF");
    tmp_msg_0.predicate.assign("UAZGILBTXAB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RXOFAXJPAVETFAZTJGVYLYGUCFRMJIBSDTYIHZKQWQJUGKUSIMMKHGQSBGTQAUTHCABHUXLFGWAHXKGUNXIVTJDFZDDYJREQWAXEVTLQQSHHNTFUYEOYQASLQVLMQZTCSMMDIHBSNEOKNEWMWPZENCVKZORXXJCGIYRKNLRFPIBRDPPMDFNEOHINFKATNUVZCDXWJBCPSMFJRZURYJBAOYKCWOMPBPRVOWXLOLSZOVPYLHEUKSPB");
    tmp_tmp_msg_0_0.attr_type = 203U;
    tmp_tmp_msg_0_0.min.assign("FUQCOIKGWRGLDMRVKMMEIZGYVTLVTWFKRTXTAHGPSFPJVJTMQEHLSNYOELMQZYUWZOWQJBFKONEICQWGGCJAUKZBFMIAQGOXQKICXXMEJTNEGXVDPOVBSSWZPYKBWTNHWRNWOAUOYLASJGGPUMCSBNFHUHNUYUXISCMURFBHYHYFAXMJUJPLFZXZACSDP");
    tmp_tmp_msg_0_0.max.assign("LJRCAZOUTSYOGIWUKSCYJYVYQFTDGLDQQARZINPDDHRIESSXCBYUEWYYUOPVTAULHNCETHMGEXVCOPMLKNAAVGOZABFDXTZSQKJTEBQPISDIXNXSGOFIHSPHKPWEHGLNMSWMFVQOTRJLVIUKKMMZNPREZLQRAGNUEKXBMCWFQGNZFKJWVZOXTAYABNEJFBKXGJUFIJJRRQWUHCRQMRIPDKCCBBIVOLPFUSDHMVLBWJTEMY");
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
    msg.setTimeStamp(0.0644354813624);
    msg.setSource(43757U);
    msg.setSourceEntity(225U);
    msg.setDestination(27286U);
    msg.setDestinationEntity(151U);
    msg.name.assign("TWGBJWYCNJURKJJXJDNUOGOMDEOIYVFYHQDVJLQHEPCBTFSDXTVMNPCKOAZYRALBXFUFWLAFVBWPPTZZUCGRRYF");
    msg.attr_type = 124U;
    msg.min.assign("GINFDRUTGZNMVCUHAXIJBIJNNBHUICSPNJJLZOZCPXEZQATCBIDPZOFOCOXHLFOFWOGCLEXSIRUCLUYWLZHPUDQSLHYVBDGWPVTITYXTVAHOJKNBUJBNFITOEBSBEWWWPZCGMRJCPSYZKKXAQRTKIQMUMHHEWEGVMKTYRMYWGXNFXSKLRXQLUVORWQQLGFVAIEQDFKSRMACVK");
    msg.max.assign("AEHCHQFBVWTAMNVMODOMXPQVTBSSLVMQBXRPJSUQJONMPIYGYVXBLCFGFADPCYXRRMPMZZMLBLERBJWJAFITVONISOQGHTHSQKBZCUTFBDIJFMYDHGJIEHLVXAYGNOMKXXKGRYHIWLPLKSQJZCVFGIUDDCRTQUEPWOZZYFZSWPEKEFKWTNBYPXHHNIQHEFUNETLKUAVEUONUTELA");

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
    msg.setTimeStamp(0.0696107202224);
    msg.setSource(11211U);
    msg.setSourceEntity(12U);
    msg.setDestination(27715U);
    msg.setDestinationEntity(35U);
    msg.name.assign("LFVXEKFZJKZRBCKIPIYCSAXDDRKLINDNHTULDYTTGPQOAQWFHIBLBMIVOYTRSGTKCIHTWWRBWHCMLBKGRXAIXNFQMTVHYOLMOOEYYDGQEYLQKSCRQVVWKYVAQLHPMDEJCGEJBERKSZWNLBJFUPGAZOXZCCPNMZFMAFCDTZMJEUQKVZUNVVDWXHPBUHSPWHINWGRFJOAUNAWMTGNMOXPCTIPNSOXZFZAUEQYUJAGJSYJPB");
    msg.attr_type = 203U;
    msg.min.assign("NMEPCDJKWICLYRHWNXSBWSDYYMIGPAPBAHHSQBTWOUDCZPVMEEILIXORRMBAIENJIGJFTMRSAQZHNKOKONUFWBUDBGMFCTBVILDVUIKSSKVVAEJRLDSQNFEAHUFRCLMVONBUFCPEVYQAKIZFLWRT");
    msg.max.assign("TFCFNWHTQCYDQSVHXTTALSFROXDVJGTHVCWJZIJLOTDAMTOPMNZGEPSHYDPSPAHVPXBLEKGENNOUACKQFLIHULYVOBGPIVMBBKBQKYFRQFAKQZEPECWKFCZLRXQUUBW");

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
    msg.setTimeStamp(0.703576768383);
    msg.setSource(7086U);
    msg.setSourceEntity(16U);
    msg.setDestination(9224U);
    msg.setDestinationEntity(89U);
    msg.name.assign("EWKBTEJPCKVIOMVCPHAKCJCGORRGNPDRTJQFZWTBZVDKCFIIZSJLLMIEADRFYIFLJUOSXTMIHJVXEHBFVADLKQAGNWMLNXDOMYWMDQLGQGUANTVBQANWPUUREGRMYBQYAEJXSXGWSYQHEYKWYOEXUOJAYNEBLOKNTLIIMCPCFDPIHHSUZQSJVUFPITRRTCAUEFVSPDRAFUNWDLROZQHL");
    msg.attr_type = 195U;
    msg.min.assign("SXDCDHINTQLSWHBIOQJGZSWNKSBRXMPZGARTAEYAPBXCBPNBETJMBWZURPBHXAQDTLVDEJROVRQYVJAORGIEISDZULMYQEFFDOAYZCYSXLNQREVIPIHOWBCTKKSXUWGN");
    msg.max.assign("HUVJRCOZEGIRRKKMLF");

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
    msg.setTimeStamp(0.569640039339);
    msg.setSource(46299U);
    msg.setSourceEntity(183U);
    msg.setDestination(57474U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("QIRJIMCGWUSVEJTGYZDDCBYZRANASDIBMCHOKQBSPZWEPOWPJXLBXOXJFKLZEYKDRYEOXGUQGIMGMAWJZGWONMWRJDMUKAHEPJWUREMSPHEAFTATYYXOSGPQNVHAXOIVLPQHORVCNWVTLZSSDLFLIFKUWCCQQKEJRDRRFMFDTFYVUKBBVONMP");
    msg.predicate.assign("HUEWPEEMPCMQXXHIXZZBIZRYOBWFCGOFPVDHGONXBJGSYNSBBRMDLPEDIQHJLNWYNIJTPRFMKONXCTQWFVRHKVDWYSFRZATKMZDRVTHAVNVWQLHTSLIYODSTVEZPWIYCGYLSYZQKSFKO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ENYSMVDRCYSYEZREDKFNYNABJNOIEPLBXHEKWCSUNXQPZEGLYBUMQJIBQJKUIFXTBEVOHLWJWMW");
    tmp_msg_0.attr_type = 135U;
    tmp_msg_0.min.assign("PMKYLBAIHJKNKNCBQYQQVLOLGGJTTQSXHFDLPCCPDOTWTSARUTZFPRHRFKYWEFZQHMTICUZGCASWRIZUUFWUJWHBFG");
    tmp_msg_0.max.assign("CZXMMSPSXOFEAUUFYJGQRYRITWSNPPTOCLYHWAAWKEGEJTDKDIGTHWCVXWGXNOWBVKMUJAKGBXQSYNARLQDQJIMBVVLMYIXJFXEMMLTAIVIRCBLEJUJBAXZNMBSQDHSANGOTZPVTOARJKUPPSKFVSSZQXLNZYEHDCLPUWILOLAFQGRWRRCBRFVTFHKZQWTDCEZDDFPKFOHYYIQKVCNO");
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
    msg.setTimeStamp(0.46829919777);
    msg.setSource(48045U);
    msg.setSourceEntity(32U);
    msg.setDestination(30305U);
    msg.setDestinationEntity(39U);
    msg.timeline.assign("QKOSOKUZUGWIUVQMKEVMSGJVBAIZCTBKRFSUAHYJXOCBFGICUNDOHIVACIJCMHFBWQOPXYWJPTYOQWNROQMJFAMVZLRGXYTELIHFDIWAKCBHLTUNBYYUERVELPMGRXDDDQRZMZJKSTSCOCXQWJKFZPEOBEIBLSTIZD");
    msg.predicate.assign("NHMXBRQJEAKBKTILOLTJTCHNXQHKHRBVGNYWTZPAQSPNAZMRTQWRGUBPMTCBOUYIXBSSAIUYMVFIRJSHFSNOMESOUAFDVWMUHIFSTXIQXGAFGC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QPNSCHIFKKQYJGJC");
    tmp_msg_0.attr_type = 105U;
    tmp_msg_0.min.assign("SADDPFJGSJITMOOZZQNZBOYEXXVYTHLPJRSWJEICYZPYTTONYUQHEYYGHPLJMMYTTXOKAWVGLHFNIQVNVPHKHTMQCLDYFILBWBIBOXKIXZDVSZBNEERGHWIMXWNSBZNDCXCALUQCF");
    tmp_msg_0.max.assign("VPTODIVRAIMFWQSXCUJUSWMEJJJAFGYQHZYBQVTGILQGMPRJUNPLLPVHHETCDDKIZYKVDVLXCCPUEBQBBXRZPVSFOCFCGDJUUXEIKEFNMRJLLATEZJCOIUBZWOYONLEXHFHWAEHLWBYBSPNSCHDXZTJARWRXCNVGCLQMOIGHSGBRTNMKWQFWMZUSNKNYZISDHINYMYPSBXHQGQDQAEYOBWG");
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
    msg.setTimeStamp(0.74153695021);
    msg.setSource(39481U);
    msg.setSourceEntity(147U);
    msg.setDestination(63501U);
    msg.setDestinationEntity(110U);
    msg.timeline.assign("BTKWIAVOXRKRHSIJBZHXJAWWRPMVZJLWQGIFELWLRUGTQHFUDZQTHMWOLGDRECKLMLIJPTVBFLVHGCOZETWNHTQVUVHYJJNYGFDVMBXPNSOIADFBSRDPWVJEBSBNKWNGEMCFAPIQDLEYXTNBGASCAGFYDFPEJPUUTKHCBEYRPSXMIXUDFSNKZDCGXPYXQEOQNQUMFJTCM");
    msg.predicate.assign("OGGOOTKBPIUMXBANWIKEKSRPEJDETQAVOBJWKLQWWYYZKKSLRLZDAJGMHP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QWUUZFANLAZPWCWSPUAIBPBVJMTHPKDKBYOPJATXRBHQVGGMBSIPYDIJFKTSOPXQBOJDVYXHTFXDXIXZGHCIHNXFDKFUNMF");
    tmp_msg_0.attr_type = 91U;
    tmp_msg_0.min.assign("HGVJBXVICGZQGKLHCEODKZWPOFJAOXBZELSNGOVXJIIXZVRDNUUNIFPREBTJEVHDCGRAEOJGBZTSZBQGSTQDDXPPCQDFYQPUUTCXUMLKSMTIUTWIDNELSJFMVQVKUVCYMYPYKSYYTGXAHOIMRWHFHDTSMBERNVWKAEAAWYBIFSFLFMLUWKXFHZPHSQPHHVLBRRTTCPOQAGAWGUCZZQFULCWXRNYOMYNWNXPN");
    tmp_msg_0.max.assign("HEBGMQBFQBIDINYNQPGBIEWSGBCLTAESRBRCQRKTWTUGRIKFSVQHVQPZUKLLEBHCOXZTYNFRZLOXEEANKCBVZJZZOHUOAWHMINLTPRULOZAFPENKGSCWIEOIPWRFYKLYPDBPNIOTZJANJFVCVRHDMZJOQKFGZJGLNMODYDJIVTHOXQCVTYHSXDFCCYSSFJTWI");
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
    msg.setTimeStamp(0.369791507412);
    msg.setSource(27177U);
    msg.setSourceEntity(18U);
    msg.setDestination(21219U);
    msg.setDestinationEntity(20U);
    msg.reactor.assign("YOPIWCVJKPMXOXWD");

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
    msg.setTimeStamp(0.278688763839);
    msg.setSource(25523U);
    msg.setSourceEntity(218U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(162U);
    msg.reactor.assign("MWONZWAHQAEBIEIMGSJABMTMDLSSLLDWDLGWXODMIQYTFRQFXZBYCQYJYAGRJKEGRPZNJYNPUTJTIRBBCTZOSEICYUXAUIHFCYYQKPJLVS");

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
    msg.setTimeStamp(0.316173836332);
    msg.setSource(19358U);
    msg.setSourceEntity(254U);
    msg.setDestination(39154U);
    msg.setDestinationEntity(73U);
    msg.reactor.assign("VQUFEURMBWICWDVLEREEVGESBOXIU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WHJIXHLTXOBSPQZCXEAZGEEUIZVVTXSEDXISRSIAHMYWVPZBMX");
    tmp_msg_0.predicate.assign("BAQPPYZHHUWVZRAHFTCBQYYWIHTXGMDOKPVJRJXHAFLCMXEWOVBIJCGJTTMNZHSPEZYGGJGDSISEIXTTNHLDUMUMDHKYKBSKDZXNCCSUGPQMQL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BCWNWSKNUFMMGBTXRHHTFFELDVAQUMYLMWLATQCNABHM");
    tmp_tmp_msg_0_0.attr_type = 179U;
    tmp_tmp_msg_0_0.min.assign("QNWABDOUAETKFOBKDUZIWRIYSKDOPCMEZHMAIOTFLSDZEAWVKVIGYYKNZWUBCXQZFSWCQHWLJNFIRGEHHWECLWOGJKDYPOFDYHLDGRUFRTLHNFCYEEXRXENLZKSRZTLDMTBXZKGPLBFPJAMYVCZU");
    tmp_tmp_msg_0_0.max.assign("FXIVKRSMMUSDYNNXAQWBPSGTDVXYCYTKCUVHFVDRDJWNAPFUCWZFHIXSIGGKVAPBXAXHBVIWFBPOMCQMOOEHUJBNCRKGZYTHFEKLFQTDPVCSJPTAIRAGHFY");
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
    msg.setTimeStamp(0.499348195124);
    msg.setSource(28707U);
    msg.setSourceEntity(30U);
    msg.setDestination(30328U);
    msg.setDestinationEntity(202U);
    msg.topic.assign("VHQSLRMAPEMVWFKUAX");
    msg.data.assign("JSNXZUJSHOINRAPFFIRMWJKQKXABDQHBYVRJGCCOTGOLTEFODISYWTGYNBVSHWKRTBWSPDBKOLCQDFC");

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
    msg.setTimeStamp(0.409273676194);
    msg.setSource(57067U);
    msg.setSourceEntity(113U);
    msg.setDestination(9703U);
    msg.setDestinationEntity(138U);
    msg.topic.assign("QBGRPGDXVUQVXUCEEJLONBL");
    msg.data.assign("HQCDCUDBEEFJJIYUNXJGSARCLIPLRZJJSCANTWHICLWTZYYCREYJTEPNMXDRKMZLRXZXFZHMFXHJKQWSONHAFKMVFDFTQWIWDURBQMTPMLNWALJPZOSBSBJNAEXWIHPAPYGTFKVSTCAOIUGPKLZMDCXNQFBHK");

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
    msg.setTimeStamp(0.346983075839);
    msg.setSource(16650U);
    msg.setSourceEntity(19U);
    msg.setDestination(55390U);
    msg.setDestinationEntity(210U);
    msg.topic.assign("MCQJKXQPPBGCVVWHUCCUTDSOEODNBDSWXHBFLVAMKHGZINZXAHX");
    msg.data.assign("IKQUGVJGIUJWZWTEWAZLJLYNOOXSIWUXOKQDZTVVQXNHKZXLYCUVHNRRPDLOTGQ");

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
    msg.setTimeStamp(0.531048660215);
    msg.setSource(39015U);
    msg.setSourceEntity(111U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(188U);
    msg.frameid = 188U;
    const char tmp_msg_0[] = {74, -40, -10, -31, 41, 4, 14, 79, -45, -16, 28, 34, -66, 110, 24, 87, 34, -15, -42, -106, -95, -109, 97, -104, 54, -11, 31, -38, 113, -39, 102, -54, 104, 47, 11, -13, 17, -61, -89, -49, 109, 96, 63, -80, 44, -75, -74, 102, -19, -1, 74, 25, 51, -101, 104, 63, -4, 20, -77, 54, -8, 124, -103, -80, 60, -9, 103, -72, -104, -112, -121, 52, 118, -49, 38, -44, 63, -119, 110, 103, 22, -18, -18, 74, -48, -84, 68, 9, -106, -59, 89, 23, 34, 46, 86, -12, 71, 23, -96, -64, -27, 73, -90, -90, 64, 41, -70, 79, 16, -19, -85, -70, 33, 124, 91, -73, 35, 88, -41, 44, 60, 93, -28, 3, -57, -99, 34, 18, 54, 120, 58, 34, -28, -44, -2, -69, -116, -113, -121, -103, 113, -86, -80, -68, 74, -121, 81, -30, -18, 59, 125, -50, 106, 33, -19, 59, 64, -94, 31, -121, 106, -105, 29, -7, -48, -2, 0, -102, -8, -37, 2, -70, 0, 29, -27, 76, 104, 87, 102, -47, -26, -69, -66, -71, -107, -71, -29, 47, 20};
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
    msg.setTimeStamp(0.953390641385);
    msg.setSource(60354U);
    msg.setSourceEntity(172U);
    msg.setDestination(28592U);
    msg.setDestinationEntity(161U);
    msg.frameid = 7U;
    const char tmp_msg_0[] = {-63, 48, -100, -62, -117, 91, -36, 32, -32, -26, 68, 114, -26, -124, -41, -72, 95, -7, -127, -13, -88, -102, 68, 81, 59, 101, 82, 53, -121, -57, -26, -75, 65, 126, -93, -7, 100, -25, 51, 29, -80, 93, -91, 101, 55, -80, -20, -35, -13, -46, 34, 5, -76, -36, -109, 2, -14, -8, -49, -95, -88, -81, 46, 43, -125, 4, 78, -82, 61, 17, 92, -80, -115, 66, 35, -88, 117, 111, -101, 57, -12, -53, 57, 42, -127, 79, 62, 49, -66, 26, -85, 37, -40, 45, 32, -25, 112, -1, 3, -50, -30, -98, 117, 55, -80, -79, 108, 126, -122, -18, 43, 83, -37, -19, 107, -111, -58, -39, 98, 69, -101, -116, -72, 32, -19, -118, -90, 53, -66, -26, 76, 32, 114, -69, 40};
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
    msg.setTimeStamp(0.504901933678);
    msg.setSource(34276U);
    msg.setSourceEntity(137U);
    msg.setDestination(27738U);
    msg.setDestinationEntity(87U);
    msg.frameid = 170U;
    const char tmp_msg_0[] = {106, -34, 34, 85, -94, 9, 99, 17, 99, 69, -98, -76, 82, 66, -40, -65, -116, 8, -59, -2, -20, 120, 123, 63, -65, 99, -38, 98, 3, 5, 30, -5, 42, 63, 114, -86, 0, -67, 34, 112, 112, 66, 126, 104, -38, 73, -60, -110, -42, -2, 102, -19, 3, -86, -114, -32, 47, 57, 62, 82, 99, -50, 99, 86, 118, 72, 86, 18, 2, -96, -6, 107, 7, 115, -83, -28, 61, -126, 8, 87, 55, 66, 48, 96, -87, -115, -75, -12, 75, -84, 75, -108, -117, 126, 2, -109, 41, 96, -64, -127, -100, -121, 75, 42, 60, 51, 113, -106, 10, -49, 3, -17, -109, 25, 35, -93, -8, 52, -104, -59, -5, -72, -78, 11, -44, 107, 72, -127, 115, -51, 29, -48, 94, 105, 44, 53, 90, -14, 36, -71, -16, -76, 89, 120, -66, 33, 23, -78, 28, -15, 45, -95, -56, -43, 65, 19, 16, 111, -86, -16, -88, 51, -37, 63, 21, 54, -128, -96, 47, -3, 92, 75, 41, -112, -40, -40, 81, 55, 91, -59, -9, 102, -45, -118, -103, 6, 108, -95, -48, 77, -7, -31, 60, -76, 7, 74, 79, -114, -2, 82, -59, 125, 74, -90, -100, -48, 23, 80, -128, -53, -28, -59, 101, 91, -118, -123, -63, 64, 16, 86, -21, -96, -45, -18, -67, 37, -104, -63, 95, -87, 83, -110, 35, 73, -115, 81, 0, -39, -83, 21, -50, -8};
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
    msg.setTimeStamp(0.0442276840688);
    msg.setSource(4713U);
    msg.setSourceEntity(198U);
    msg.setDestination(18630U);
    msg.setDestinationEntity(114U);
    msg.fps = 224U;
    msg.quality = 250U;
    msg.reps = 77U;
    msg.tsize = 108U;

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
    msg.setTimeStamp(0.860792616083);
    msg.setSource(35517U);
    msg.setSourceEntity(62U);
    msg.setDestination(25269U);
    msg.setDestinationEntity(71U);
    msg.fps = 47U;
    msg.quality = 109U;
    msg.reps = 120U;
    msg.tsize = 162U;

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
    msg.setTimeStamp(0.616443853949);
    msg.setSource(18715U);
    msg.setSourceEntity(163U);
    msg.setDestination(56816U);
    msg.setDestinationEntity(3U);
    msg.fps = 172U;
    msg.quality = 54U;
    msg.reps = 109U;
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
    msg.setTimeStamp(0.955427180989);
    msg.setSource(2653U);
    msg.setSourceEntity(85U);
    msg.setDestination(7460U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.0773844627452;
    msg.lon = 0.539764113579;
    msg.depth = 138U;
    msg.speed = 0.546836177485;
    msg.psi = 0.644549142746;

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
    msg.setTimeStamp(0.734018809308);
    msg.setSource(5373U);
    msg.setSourceEntity(166U);
    msg.setDestination(6461U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.241928477825;
    msg.lon = 0.706484625327;
    msg.depth = 28U;
    msg.speed = 0.920403340313;
    msg.psi = 0.0541789985338;

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
    msg.setTimeStamp(0.315700208134);
    msg.setSource(38028U);
    msg.setSourceEntity(183U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.47776708547;
    msg.lon = 0.697717293382;
    msg.depth = 48U;
    msg.speed = 0.00831571551125;
    msg.psi = 0.800045347704;

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
    msg.setTimeStamp(0.874819671918);
    msg.setSource(34638U);
    msg.setSourceEntity(242U);
    msg.setDestination(40454U);
    msg.setDestinationEntity(95U);
    msg.label.assign("IDMHCELCMMUBHXMVUKGWEVXQALJUZJWKSLSJFZYXXZSPGUTORFNAOSKBOGRTVUMJQQ");
    msg.lat = 0.982469362927;
    msg.lon = 0.666951853798;
    msg.z = 0.0666199198808;
    msg.z_units = 127U;
    msg.cog = 0.0297828930195;
    msg.sog = 0.332839007764;

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
    msg.setTimeStamp(0.384603336356);
    msg.setSource(6199U);
    msg.setSourceEntity(213U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(75U);
    msg.label.assign("KQLROXWHNNZZBLQHTXNMYTYQNCRZKFQYDEZTTCXGAHWJSUSILPCSBQWQNHXLREDMVTYVUCGGJRMYBJKTIVERYAHKHFVAXMSRAIMHXYXXDAYUBWCUNWOJZLOERFOOBKZVBZJVLISOJABVTONMUKSIJFJLP");
    msg.lat = 0.40613436416;
    msg.lon = 0.663049253387;
    msg.z = 0.155622901483;
    msg.z_units = 240U;
    msg.cog = 0.889766061752;
    msg.sog = 0.856978567747;

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
    msg.setTimeStamp(0.284249472758);
    msg.setSource(22379U);
    msg.setSourceEntity(135U);
    msg.setDestination(54811U);
    msg.setDestinationEntity(103U);
    msg.label.assign("MSJAGWXYZXQYOJYQMFLVGGAXONAAHUYWBBKCDGMAKXRKWSYBGUVRFLRTGIDRPEPNEYVMHEIBKUSNJYILFQVHPHQGSPRFHB");
    msg.lat = 0.35947239799;
    msg.lon = 0.817086265905;
    msg.z = 0.608700724885;
    msg.z_units = 167U;
    msg.cog = 0.0616865542528;
    msg.sog = 0.953023833213;

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
    msg.setTimeStamp(0.543666576722);
    msg.setSource(60421U);
    msg.setSourceEntity(192U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(143U);
    msg.name.assign("OXEYYWYWREHWSVLKWGYTNFAWZDPKWKWFQGGRDSJCERRNMBIAUSIZTXZRIEJQXBTBGPYMCQIRXQTKAOQXMLPVABRNOEKLUNECNJPMSUUNAYMBHCTFHDBUKZJIYVHAAOGLZLKIZZBVQPQPKHVNFDJVLCSMVUTOCHUYUCMDPHMEFCZEHTBQZEDFIGISJKMSIBCJORFCWSLZUIPETROFJRAYTOXDNASBSXOGDQXVFDHNLNAQMPUJFV");
    msg.value.assign("GMZLSJETSVTNTONLQAITNMYGYRLFIUCNCMXXLEJGYBNYGGFCRBEHWSQJWZOUZMMPSWTJCKKZVZCBJAGBFXUWRMSRIEBCOITYZMNDOHQNRIEPOKCGVUHVYDIGFPABVVAYJPTAFGIAHVBQTTEHARWMEDPKKXWSSXDUFXMLVCDFNXYJBPSRZPWVOFOHROULEUQHENDNXUIDLWQTWSYMAQKWCBDHFZZKGAPIUCHKVLIQK");

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
    msg.setTimeStamp(0.0458126659211);
    msg.setSource(4798U);
    msg.setSourceEntity(11U);
    msg.setDestination(22309U);
    msg.setDestinationEntity(128U);
    msg.name.assign("CDBVELHKOZXEMZHZFEVDLALROVODGLLIJVTIFIQPAQSPHCSUYDHSXRHKALYLNBYHENWUPHUFAMWDWIVPUKJAY");
    msg.value.assign("MXSJDYHYMSGODCPCVEFRVNKYWJWHNWYGAJAMQFDUXQWKENQWZZVCLHIOVOJPOQJIYWYUQBSFMURBAMPZNMASTDEKJPSDN");

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
    msg.setTimeStamp(0.0229165065469);
    msg.setSource(1472U);
    msg.setSourceEntity(254U);
    msg.setDestination(13667U);
    msg.setDestinationEntity(127U);
    msg.name.assign("DWLOGWXQHYFSNHNZIQLGPQRWSBHNAXGKHDCXHZNDELXJWYPWCPEZBLMIRMIOBDDCXSOPEGHAUVVTQVRHEEOWAVBIBICRXBTSJCDSEMSWALWSKJITQQIZJHQOTKJPZYSALTJURPAIUMNVKBGTGUAXWKO");
    msg.value.assign("TDOPYGQUJNSVSYWVBYXKMITSNITGGPINZBJIWNFWHJAHRKMGCTYLTNMNAGYCEXXDQEKSCYJHOYGPRHALSJDTZDZPSMIHFFFPTQLAPCFWOAFMTJOMKAGWDZLKZVVEUCKKQBLWAWUERT");

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
    msg.setTimeStamp(0.810483379191);
    msg.setSource(32094U);
    msg.setSourceEntity(147U);
    msg.setDestination(32314U);
    msg.setDestinationEntity(179U);
    msg.name.assign("ZOLMPSSWWEEJSAXMSGWDOMUBARHUCHVZDYBAWJPLATXEZJLYYDHCQIZIMQTRBXBUSFKKONYFECKINDJQQQDPDTXNFBGPRUFJLLZYLCIQGHHXISUVGNJDIHKOWEJFABPDYZWHSMBGPCPEKLGTUXCMXRCAUNKNHKLTZETFVFFGRSWNKHZDSVNQPYE");

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
    msg.setTimeStamp(0.297409350724);
    msg.setSource(28043U);
    msg.setSourceEntity(252U);
    msg.setDestination(8661U);
    msg.setDestinationEntity(24U);
    msg.name.assign("HYXEPPZNCZEIOLODVSSMZOYTLZBHHCGTEXMSSBKBZITXSPDWASAUOGMXUNQLKOOMIFLGDRJHNARWAAYLDDMTONJKUXEEJLBQEBRBVKQVWJLOUNCZGFFHTCYXCQYAYBNRZZYPSTZNJNRWJKTDJQMCYFUSNVKQURVPOPIGBB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GBMZIKFLWCCABSBESRGKQWCZNTIZDZDTFIGUWPERNQXWMEYLLSPTUKSRXCPUEPDSDUGQOXTUZJEZBHYERQGJAEIYHMNAOMBPDPYJFDQMWRGNSJHMIVPUIWXKQMONARZKOUILIDWOF");
    tmp_msg_0.value.assign("GZVSPOKYSFNEQDECHZBYKCPOTOBHXWNQADRNIJZTZSZKGQVMJCNFWMHFWBJOVPPYAFKTR");
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
    msg.setTimeStamp(0.626657009957);
    msg.setSource(11233U);
    msg.setSourceEntity(177U);
    msg.setDestination(13159U);
    msg.setDestinationEntity(233U);
    msg.name.assign("DFGVJAPXQABIRVVHRJFVWZYCBSZTMZOPKHSQMMLTH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HYHIXZHOTPCRKAOPRVJCEDTZEFZBCUGXNSCQMPRPBMFNKQJMUQWMDEFPTUXVZYUFJWZHIGTPVAVEITQEGNNNTBRHCNIBSIDWOREQF");
    tmp_msg_0.value.assign("VLXMREDRCEARZDCBGQPGPUBWDOKXRZHAVUZVJDSELMFERTTHQIHLBJ");
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
    msg.setTimeStamp(0.31017116041);
    msg.setSource(44144U);
    msg.setSourceEntity(146U);
    msg.setDestination(27229U);
    msg.setDestinationEntity(199U);
    msg.name.assign("GKRHTLPZLCFMKTEGZXEMYXMVOAXFYVJNJKBTHFWMGCLXLXOFWQYZABZVKXLIR");
    msg.visibility.assign("QJQBHGXWGMVEHIAGFKYXABLJPNPOFCSMYREQZKNCRKJHDHSZOVYGHVIEBZMWQVMJBYUFOLHVQZUZUBSIGPWJKUVWITDDPSMCTMLWNAWFEYDBQDFNNNGIXFTINRLVXFPHDZPVYOWPAYUZCRKHMTQVTPDJSLXKTWXFKFGMTLSQOATSUBJANRCEFRCEIOBEIKJIEZYPWXNHLWZBJYCGADQTBLGSVRKRGTHESLXOJMUYNIUMRCZO");
    msg.scope.assign("ZLDONUFVRSGZEXXWLRHCHASRSBXKLQATYOBS");

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
    msg.setTimeStamp(0.977455522178);
    msg.setSource(59788U);
    msg.setSourceEntity(63U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(86U);
    msg.name.assign("TSFHRUBIVNBXQUKJYALYJOIMKECWNHTVTUJWBOEXRLMLGDPAWKRHFDXAOHZVERVIPYNNPZMVPQSEOCSPXUYWLPRENDRZNDLMGGZCGIDWKVXRMSWXALTBCJSYXNTCBVHBUGAHHTWEJIU");
    msg.visibility.assign("NWPDSGMFCKGSCFQJMVGADDNXQJCXOJBLUZRBJXCUEHKHDNTIZGZXXOJPUVSXNWFAVKAUEBOHWIVGTFZB");
    msg.scope.assign("GLJPYBDPGNXNTWAFLSNFGPQELUESCNTRTCPNUKSDRATOZEYYCCQTKWYENAOBLYNUKZKCIMEDOJSZOOMGKMDDUEPVQXCLQIZPOOSGWQECGAIANZQHLILXFIRNFCBZWKGAVMEEVVGYKULFJHOHXPDFXXVBEQKWVBIVJPVBUYHOQVRMBGFM");

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
    msg.setTimeStamp(0.0843515971008);
    msg.setSource(55558U);
    msg.setSourceEntity(95U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(44U);
    msg.name.assign("DWFXESNOZSAUMTWWYIBCVACCDWC");
    msg.visibility.assign("VYDWCOJVAVMOTZHAJKCZFBNEPRKLDQIOWAI");
    msg.scope.assign("NYQLTDFKEFJVRWTCOBHQOOCDKCSCLSQTMQASPUIQEKPVTGBYSOTI");

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
    msg.setTimeStamp(0.593284034146);
    msg.setSource(23439U);
    msg.setSourceEntity(194U);
    msg.setDestination(20140U);
    msg.setDestinationEntity(30U);
    msg.name.assign("FNKPNISWYTJZTXEATQOSVFLGVVPELJNCIIWJBKBTLZRZYXMAYPKGAXMQHEXVAUSWNJAJNCRMMUFNTXJKWAOXBQEFQSRLORDOSGUHFZCMWAIMXLCPMSRXZPUQUYGIPMMFBLYCHZUGVIDEBCVSKFADDJBXRJUEVLGYVDKINVWEQPPYKHHAW");

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
    msg.setTimeStamp(0.946324345469);
    msg.setSource(25352U);
    msg.setSourceEntity(212U);
    msg.setDestination(65285U);
    msg.setDestinationEntity(196U);
    msg.name.assign("QAYEJEBSUIHXFXXRXWALGHYLFWLIGJUSIKMTCTMHBFUQGJCWGBZFOZBVWKITJUPYVNROTPCAUGQZSOZSDHIMOSLRKWXTBDYMZNXPSWCVDWXNKHQEJRQLOVNJYEDEIVLZQANALIDKTRDFMUPBOGNUXELDJIRPPHRSQWRVBUIQMZFTYCVHXISUNRHAPPAUBKJFWCSCGDMCJFKACMEONVWO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ICVYVLBKLZDTAIWHFKGEBQNATXLMDQDFBZLGOFXSRUGHBKGWEZCWLXJTHQSRKXJDJUHRJNMDHJWFXUMOLAWRSARALKQIAGSCBGGJIZPCWDLSNXKWPKQEGCEJTCMTYMJDEZRXCYZTKUCFPOETPIOPULVUSMMMQACBOIVUWBFBMQPRHJAXEKOXPDSSKNYNYPMGUW");
    tmp_msg_0.value.assign("RXIOILXVZAEETFFWOZUZKYTVNTFVJEKMSYAYNUIBUAKCCIGDLQDLPSXPTRHQQSVTVUSNQFWJVNMQFBAKJLJFLEXCUXIXHGBHJVVGMXMRKOMMLUPAMHWWKPFQRLOYDGMZBKYOJFKGHSLBVUWOTPIYZEZQNBVODGNOYSCRJTRZAZMBZXPDYHBGHKCCYPF");
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
    msg.setTimeStamp(0.2825840027);
    msg.setSource(17349U);
    msg.setSourceEntity(77U);
    msg.setDestination(11595U);
    msg.setDestinationEntity(124U);
    msg.name.assign("VCEVOESXZDKUGEBKIUCXUJLDXFJVLDVZBQVNRJDAKAUKXDPQTBJDEWWRSHCLUNSRGPTOMNYHPMGAWHFKNYOAPEAEXHFHXYTJSGLYYTYZBIQM");

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
    msg.setTimeStamp(0.0285381077865);
    msg.setSource(4205U);
    msg.setSourceEntity(168U);
    msg.setDestination(18397U);
    msg.setDestinationEntity(123U);
    msg.name.assign("LFTGEIHODODNYERT");

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
    msg.setTimeStamp(0.323432130892);
    msg.setSource(13342U);
    msg.setSourceEntity(183U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(59U);
    msg.name.assign("WAODCVNOWHZAFBPELYQDFBRXUTISPDVLONUAJVSIOSJCMYMCBGFUCZXTRMVEILMDFUUPIPFXGBJEHZMPWRISHQHKGVSNUVRDQLUVFZQWHEEQCTMRDWAHXTKJQXRY");

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
    msg.setTimeStamp(0.464327112562);
    msg.setSource(59624U);
    msg.setSourceEntity(59U);
    msg.setDestination(12187U);
    msg.setDestinationEntity(122U);
    msg.name.assign("ZZFMIUCTVELQZJATSUGNOBVEJAPMHAVNVDUWPGKUNPCLDTDFDUKGOLSGICYBEYKHDXFYGPUMRHRVHLTARSJG");

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
    msg.setTimeStamp(0.84306651402);
    msg.setSource(44629U);
    msg.setSourceEntity(171U);
    msg.setDestination(31478U);
    msg.setDestinationEntity(243U);
    msg.timeout = 2911577569U;

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
    msg.setTimeStamp(0.561718357726);
    msg.setSource(62063U);
    msg.setSourceEntity(130U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(37U);
    msg.timeout = 2793370691U;

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
    msg.setTimeStamp(0.0749121010456);
    msg.setSource(7075U);
    msg.setSourceEntity(222U);
    msg.setDestination(8956U);
    msg.setDestinationEntity(110U);
    msg.timeout = 2838090880U;

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
    msg.setTimeStamp(0.0486656998195);
    msg.setSource(55377U);
    msg.setSourceEntity(254U);
    msg.setDestination(2791U);
    msg.setDestinationEntity(20U);
    msg.sessid = 2357007267U;

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
    msg.setTimeStamp(0.663873923391);
    msg.setSource(25051U);
    msg.setSourceEntity(226U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(203U);
    msg.sessid = 656609724U;

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
    msg.setTimeStamp(0.583097524148);
    msg.setSource(11450U);
    msg.setSourceEntity(174U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3539717921U;

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
    msg.setTimeStamp(0.0645523216385);
    msg.setSource(49560U);
    msg.setSourceEntity(221U);
    msg.setDestination(5219U);
    msg.setDestinationEntity(80U);
    msg.sessid = 1799771050U;
    msg.messages.assign("TISIPBQFCYXQBXWHFMJFNWIYFJTVNGLMABSGZWOBIDYFGUUZNPZBSDMYHOEAOSTWXHHJMGKZQKXJCRYMRQPCTFNLUXHOESICDSKP");

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
    msg.setTimeStamp(0.449821507173);
    msg.setSource(2017U);
    msg.setSourceEntity(87U);
    msg.setDestination(4326U);
    msg.setDestinationEntity(39U);
    msg.sessid = 1862493107U;
    msg.messages.assign("PYWAACGLMURACWOXMRAQICGRSMNVMVLIFMVQBBKGCHLVXZBJIVUVYNMSMWPQRFFICKZBTJRHQXGPVOJHUNBUUSLQNRBNFHNYTVXIGDSTBWTHLRXFDJEPCTDXLATCWASPEAQYFQFSJEKHSIBLDBFOXPWWATOJNOBSKANUEMOHPZGDQGRCTPTKLDDFKFOLEWHZDTNOPNIJWZKC");

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
    msg.setTimeStamp(0.0767546500404);
    msg.setSource(19667U);
    msg.setSourceEntity(28U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(168U);
    msg.sessid = 1529253128U;
    msg.messages.assign("VRODBLDVSKTJDXDLRFHWJSYZOHPYOUCVILFNUSMYBTPILKHXLAJHMWKEWOAZJQJGQIIYBDTCPDMXYCFIAQZUNXFOYEEMBGTHVKZUESTIEEPWOKDADVNHFFHRN");

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
    msg.setTimeStamp(0.110694386636);
    msg.setSource(40925U);
    msg.setSourceEntity(37U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(140U);
    msg.sessid = 3984756575U;

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
    msg.setTimeStamp(0.224524344237);
    msg.setSource(6053U);
    msg.setSourceEntity(31U);
    msg.setDestination(3335U);
    msg.setDestinationEntity(9U);
    msg.sessid = 34831111U;

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
    msg.setTimeStamp(0.107499279268);
    msg.setSource(64741U);
    msg.setSourceEntity(178U);
    msg.setDestination(35699U);
    msg.setDestinationEntity(145U);
    msg.sessid = 3311986805U;

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
    msg.setTimeStamp(0.236418115289);
    msg.setSource(55163U);
    msg.setSourceEntity(11U);
    msg.setDestination(43915U);
    msg.setDestinationEntity(172U);
    msg.sessid = 1250934521U;
    msg.status = 27U;

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
    msg.setTimeStamp(0.54956297259);
    msg.setSource(25712U);
    msg.setSourceEntity(199U);
    msg.setDestination(77U);
    msg.setDestinationEntity(187U);
    msg.sessid = 150742025U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.494988480684);
    msg.setSource(57659U);
    msg.setSourceEntity(55U);
    msg.setDestination(54565U);
    msg.setDestinationEntity(221U);
    msg.sessid = 1940698800U;
    msg.status = 214U;

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
    msg.setTimeStamp(0.482159308889);
    msg.setSource(21999U);
    msg.setSourceEntity(62U);
    msg.setDestination(7503U);
    msg.setDestinationEntity(234U);
    msg.name.assign("OYKIBYONUCMFMMJNJFQKDWEQGAXADUETKMXTQXGUJIGVNWOHLZKZAOOUDCFZKVRTEKEUBFHWVWSLWTZXTZXNUPEUDRLBYVGSIXFKSVLKBLWVMMLINJFHYQDXXIGIABGREJDAGPSADBPKZOTNGDCLYYRYHPGWFUTQAZDJUCXROOYRIJVTZACSTBIHQTBJHPCUQCRNKSHRPMI");

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
    msg.setTimeStamp(0.103853936603);
    msg.setSource(37148U);
    msg.setSourceEntity(155U);
    msg.setDestination(37455U);
    msg.setDestinationEntity(197U);
    msg.name.assign("RDIUGKOSJQGJZZXNHCPIIDFWMYWOEHJGGKYJQRRDULAROYXBNZXAXOPBHBRMVPDRADMCFGFTIFCCWKRDFDMASBIASVYLIDLQUHXSDSTQLMMKHLZABJSGPARKPTBJJQZEHYAHQYZGBCPTFESXEIXKPUVIUQEOLSVOJNHQFRTWYWTLYWVBHSULKBGWXWENCOMKNYVNTICVHEMRCUCUVAQ");

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
    msg.setTimeStamp(0.438121506905);
    msg.setSource(14504U);
    msg.setSourceEntity(121U);
    msg.setDestination(3592U);
    msg.setDestinationEntity(66U);
    msg.name.assign("TUKMRTZJMHYMZWYVGZTMUVVAPFVSIQEAWWSPYUSWKLEZCLQUBYSFDJVCCWEBXMNQJWEUEPLCJAHZPRDQHTBOXOIYKMLUZKLKYIXCRCNPWLFLZBDQUUISOMTHSRDFMJDRXYQRKAEKAROIJNMASJFNMAJLIJZNCGDDFYRJWTAQOKYEOBOBHHPUXUFXVOXGQAIXGGLVGPHCFDOOXHNHVDKGKSRBVVYSDBGGPNPSNGXZFWENICQLQTBIWICE");

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
    msg.setTimeStamp(0.619010207898);
    msg.setSource(48180U);
    msg.setSourceEntity(187U);
    msg.setDestination(41642U);
    msg.setDestinationEntity(102U);
    msg.name.assign("NHSNWEORCXLPGIGEPLQTSEQOPGEPPADIMUHDANMSGFRTVSLBEJZXQDPWYSKCAZMBUMJKBJIKHYBLFXUKIMDRTJMRCMJYVQNRDHCTLEZPOTVJGKYYYNZQROBVOCXJZANYZCUHQXSAXUFCOTPRKSQBIDJQSLMCHOUSNFTWBXPCZLQWOVJGATDEXZSUKAAIFRVEWBNKAD");

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
    msg.setTimeStamp(0.655511344154);
    msg.setSource(44270U);
    msg.setSourceEntity(152U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(7U);
    msg.name.assign("GCKFBZLPJIIDYHKFNZFPHXKCUCMNEUUJIHGWXRLDIPLA");

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
    msg.setTimeStamp(0.431393199218);
    msg.setSource(34506U);
    msg.setSourceEntity(27U);
    msg.setDestination(16702U);
    msg.setDestinationEntity(125U);
    msg.name.assign("YUASRJOWUCFXORPVVWMDNGUYYHCZZUAFCSMIYIEZWWHYAVFHRNPD");

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
    msg.setTimeStamp(0.990650703972);
    msg.setSource(52862U);
    msg.setSourceEntity(139U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(37U);
    msg.type = 34U;
    msg.error.assign("OVEKLYYCETRMFDLVZGUSQKKHPBCLYUASMWRFAOYUSESWIBTYKJNHNVJKOHNGPOENDEBFZVBNLCLXPFPNVMGGQBIUVFSTXYGUUXBBOWTSNPWCGIKCTLYDKWZKZSQJMRPDIPFS");

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
    msg.setTimeStamp(0.907769401735);
    msg.setSource(41471U);
    msg.setSourceEntity(178U);
    msg.setDestination(18301U);
    msg.setDestinationEntity(233U);
    msg.type = 38U;
    msg.error.assign("CFGDKSNWRNTPQHQTULUAINNWJXEXXNBHNPSMIEPBVWQVOWTHCLXMCMZYUGERGDVTRQZTTJQJBJXUYEISFXDFWDLJAOKVQPHGGMTXBUERQAIONODGMZNXTAXWHJLVGOUYZFCKWHOPFYBDREHZPHAJKVUDYXW");

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
    msg.setTimeStamp(0.229861051775);
    msg.setSource(34383U);
    msg.setSourceEntity(195U);
    msg.setDestination(40619U);
    msg.setDestinationEntity(241U);
    msg.type = 201U;
    msg.error.assign("NACBETOTPZBMLZSENPRRRCXXEFUOIFEVEWHAOFKCAHPWDWGHVSCJVGGONUKTIEZSLOTJBYUOTKZKDBCWINYHRVGXRAWXKAKSXXYQUYTSWJSVJJYCKUHFTMUOBKEZQSYLEIMQMTPEVRGJFRFUSVJQVPGQLXAMIZDOUGLBGLMNFUYKAGJPQY");

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
    msg.setTimeStamp(0.928504244555);
    msg.setSource(32029U);
    msg.setSourceEntity(92U);
    msg.setDestination(4951U);
    msg.setDestinationEntity(217U);
    msg.seq = 40213U;
    msg.sys_dst.assign("QCHRMIQCZNNEXBTWNFELDPCEKGDUZDYUWSFJXNYRCXVSGTPHDMOUCPKZQQDRJCMXHJGRSJWRBIHKDWPQYROIGAABMNTBOIEGMLOSWNGVQIYIJFSWOLUBDVXKCGLYLLDKHCVYATJFRTJOVUEHLEERXOVHZDYPJOSSFZUSMCLTWPIKTQNTIAKWPLQGJRQYGBIVENVXOF");
    msg.flags = 223U;
    const char tmp_msg_0[] = {-100, 75, -37, 108, 40, 122, -106, -59, -50, 46, -27, 0, 15, 8, -20, -45, -2, 108, 69, 90, -82, 3, -21, -93, 25, 100, -91, 16, -111, -112, 109, -87, -89, 54, -76, 54, -113, 15, -32, -79, 92, -104, -22, 101, 53, 126, 104, 96, -29, 113, 94, -99, -119, 78, -45, 61, -75, -42, -63, 37, -126, 21, 42, 109, 56, -26, 45, -95, -74, 6, -100, -73, -15, -53, 25, -68, -78, 25, -78, 111, 51};
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
    msg.setTimeStamp(0.931489230617);
    msg.setSource(63160U);
    msg.setSourceEntity(230U);
    msg.setDestination(47852U);
    msg.setDestinationEntity(170U);
    msg.seq = 3364U;
    msg.sys_dst.assign("VEIYVTLQPHFOBDDFNWPEVDCEOVRMCIGKIUSKSMMUNFTOUIMCDIOHFDYTGARKPNBJHGBPEALHHCRUYSZOAQIJREWQTIYZUMJTWJYFCWOBUJOJLNVEZZSGSVKXGJBHYKHRPKGYEXLYSORDTIEQGXZPSJPZDWFCLBGZADTPOVLMFNYYISJMHHBAWKKMJTDIXAXVOXWQNMNCCUPCBLXXACWEAAFXQHXQWVZRARUSERNZVLQ");
    msg.flags = 245U;
    const char tmp_msg_0[] = {-39, 14, 1, -106, 52, 35, -14, 28, 37, -3, -8, 83, 55, -18, -126, -95, 6, -84, -39, 4, 47, 5, -29, -113, 94, 66, -46, -125, -102, -124, 16, 53, 104, 8, -23, -105, -35, -53, 97, -6, 110, -38, -36, -34, 124, 75, -92, 20, -74, 19, -98, 61, -102, 55, -77, -10, -49, 106, -36, 5, 19, 107, -41};
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
    msg.setTimeStamp(0.690290763797);
    msg.setSource(38602U);
    msg.setSourceEntity(76U);
    msg.setDestination(16573U);
    msg.setDestinationEntity(20U);
    msg.seq = 5239U;
    msg.sys_dst.assign("QYPKAALPNXNFESGZYTZQIPTYKCOJKQXWDKIXMHALWKTXMFHBHHNEOMUUKIVTRCSFADLOUFLEBMYVPWAIIKVWVJNUMKIZLDFVCFNJXNEZNUEVRDGUBPGSBWZAUGCUBCYGWWZFPWHNCIDHNAYTRSLQTNXQKOPMSPVYYMSECQWBJTDBRZGBJLGYTDHQJELPZRSMRXFPJUBVQOMGAXAXGHRTGROJESLSMHIEOUVRYTAJFZ");
    msg.flags = 143U;
    const char tmp_msg_0[] = {25, -86, 71, 47, -104, 22, -21, -75, -47, 15, -3, 15, 104, 97, -10, 7, -122, -79, 50, -95, -16, -54, -27, 68, -48, 61, 77, -43, 112, -21, 23, -75, 32, 9, -41, -4, -63, 4, -119, 78, 66, 73, 109, 100, -76, -123, 101, 126, 88, -112, -22, 82, -117, 49, -39, -38, -32, -104, 84, 37, 25, -82, -72, -22, 88, -85, 66, -120, -107, -10, -96, -99, 78, -87, -118, -88, -106, 9, 43, -99, -26, 65, -69, -28, 14, 74, 49, 64, 90, -33, -24, -63, 61, -49, -108, 125, -76, -26, -44, 33, 47, 45, -23, 85, 56, 3, -79, 85, 57, -54, -9, -12, 75, -125};
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
    msg.setTimeStamp(0.701598993107);
    msg.setSource(46146U);
    msg.setSourceEntity(168U);
    msg.setDestination(19674U);
    msg.setDestinationEntity(104U);
    msg.sys_src.assign("EEJGGSXKRMREGVGRASHUBNWXCAVQKGVSRHBKSCENBIFYDPRBAHCTYKUTQAPNQGWMVOHMNWVIWESOYICKFHNGBQPEDSZPXZQXFLIZUOYXFRCAYZVYYVCFQB");
    msg.sys_dst.assign("QSGFXHWDHCTOUGNFSAPFWTBORXHCBVLHXRVPFIKSPYLYXDUBNPMZJJXLYBLWZHQUNFWSTNRWQNMACEHOUAEYLGWSIPQSZNDIOMTNELKDPPXPVRCKMJKOMKOARAZZ");
    msg.flags = 174U;
    const char tmp_msg_0[] = {89, 37, -55, 70, 124, -108, 14, 8, -87, 104, 90, 49, 63, 82, -57, 113, 8, -79, 99, -33, 41, 82, 35, -1, -23, -6, -127, 0, -95, -11, -54, -89, -126, -58, 26, -41, 86, -1, -108, 111, -72, 24, 123, 85, -89, 28, 48, 4, 86, 64, 107, 29, -76, 112, -82, -2, -116, -126, 49, 49, -51, -17, -95, 85, -108, -110, 119, -22, -117, 105, -27, -54, -61, 74, -31, -121, -65, -52, 125, -94, 25, 39, 5, 40, 108, 88, -5, 65, 87, -33, -31, -54, -99, -17, 77, 25, 3, 61, -45, -1, -112, 58, -2, -54, -39, -61, 115, -2, -116, 83, 16, -105, 65, -72, -104, -115, -51, 108, -57, -80, 97, -29, -106, -12, 111, -31, -84, -123, 9, -37, -31, 94, -3, -124, 57, -56, -36, -123, 15, -81, 94, -95, -59, -15, -51, -61, 104, -33, 32, 118, 0, -69, 30, 18, 28, 27, 52, -45, -122, -102, -78, 79, 48, 96, 120, 50, 89, -80, 109, -108, 27, 113, 16, 101, -124};
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
    msg.setTimeStamp(0.769866280791);
    msg.setSource(9965U);
    msg.setSourceEntity(135U);
    msg.setDestination(16750U);
    msg.setDestinationEntity(101U);
    msg.sys_src.assign("SZUKOUWREEPCWEHBNGZSBAHLFQURVGOUDDDQPLNZYSMGKXBFPOFARYOESFBGBZVRJAOFVWIXLPNSKPQCHMAEYYRGYINXKTTZVSOASJWBMUVYJIILMYDMPMBHSLAKCLHIXOXPSLJCQFAJJTQZCTEBVOWHIDXPUAONMWWYLTGRJVWJLZG");
    msg.sys_dst.assign("WELLPTNBVHPBJNNYYMYKLTGEZWFWJSACBPCUSXZIJZWWEGELRUCEAYPOLCTJDZUFUAKFOEDBSKVZLQTQQIBKZAZBHXSAXJUOPIOGVDNUHJGYKVZXWE");
    msg.flags = 186U;
    const char tmp_msg_0[] = {-35, 94, -65, 23, -73, -82, 2, 49, 43, -86, -93, -29, -27, -93, -110, -100, -16, 71, -8, -34, 78, -30, 0, 85, 93, 37, -126, -29, 122, -65, -19, 78, -115, -12, -118, 69, -15, -36, 18, 21, -91, 61, 63, -16, 12, -75, 2, 96, 73, 2, -90, 93, -118, 118, 110, -56, -112, 64, 50, 19, -9, 51, 2, 89, 39, 3, 0, 81};
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
    msg.setTimeStamp(0.253009210795);
    msg.setSource(28160U);
    msg.setSourceEntity(198U);
    msg.setDestination(17638U);
    msg.setDestinationEntity(105U);
    msg.sys_src.assign("GATMTPUXVRJDRIJKBIWUERVWAZQBRVKGJCPHKLYSVNLPDMNWTMOZKFSDLWHDKXHWYYVIBFCDBQDDHXWTVAXRUGICUFTSHHJCZWKMKJOCDFEBUFLOJPAZAYGOGSWKNXMBBEGGKHDCSYSBSJQITWPXYQQBTYINUNEEZQISORHNAANXEXRCEULLSVZIMAMZLLHGNIZKQJFWTTZAERQENYROBPQNMYOCPHVMOFTCGULJYJGAFPEXRQULDOPZ");
    msg.sys_dst.assign("SBCPKRQAVPUJFXZWJMNGRZVNIIFLMPUEFCSYSCXJDAYCJEJOKOPLGZZOVTKBUMKYZZVQSEQGDCCPTDDIDUWJHKWMPEENWLFDIMVOTAQNUKFLSBAPTHYPNGAMMRDNJKXFUKHDTMQSTRJUYWSQBRIHVHLUHITILWECGYWWAZRWZBURIGIHCNVMSOLYMOXNEQHWQDHVCTGEBGRVUEKYGFFFOKLJRXNXASYLAZQPOOFTZRDGYAPXBHQX");
    msg.flags = 100U;
    const char tmp_msg_0[] = {93, -104, -51, -113, 12, 48, -54, -45, -37, 15, 93, 27, 120, -58, -122, -120, 81, -72, 111, -21, 29, -128, 73, 63, 102, 107, -68, 4, 94, 125, 60, -77, -15, 115, 61, 106, 79, 71, 115, 43, -111, 9, 30, 104, -97, -54, -56, 10, 62, -108, 108, -51, -118, -79, 83, 63, -75, -66, 21, -90, 123, -24, -59, -118, 125, 40, -36, -44, 4, -75, 71, -90, -13, 31, -119, 87, 87, 80, -4, 35, -62, 46, 82, 39, 109, -120, -27, -70, 124, 70, 100, 82, -100, 38, -115, 45, 109, 65, 115, -34, -22, -9, -28, 54, -48, -126, 22, 31, 66, 3, -64, -120, -50, 67, -81, 90, -38, 21, -50, 60, -62, -8, 53, 109, -22, 61, -58, 85, -30, -63, -106, 9, -55, 13, 111, 7, -85, -46, 70, -77, 112, 84, 24, 113, -18, -15, -70, -51, -67, 92, -82, -48, 85, 20, -52, 5, 64, 26, 57, -52, 126, 124, 11, 126, -95, -62, 49, -38, -28, 109, -77, 93, 38, 101, 37, 30, 62, 43, -71, 23, 60, 76, 38, 27, -42, -46, 68, -72, -92, 51, -120, -27, -46, -35, -50, -26, 93, -11, -36, -45, -8, 95};
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
    msg.setTimeStamp(0.61924845472);
    msg.setSource(17260U);
    msg.setSourceEntity(59U);
    msg.setDestination(36250U);
    msg.setDestinationEntity(101U);
    msg.seq = 54765U;
    msg.value = 186U;
    msg.error.assign("CKENARRAGHEOCSSMKTETFPTTNMUZHMSJAZTDRSLSXBGDKRAVKFQUYYFOFRFRUFOOAZVVPSDKJIPEFMQZHTRCLSZOOGDBDBGWAZICXPVJQUSPVQWWRCMJWCGXEVZOYJYQYNIGNXQUAENRIMAXBGOJQVWVUMVCECOESOBIPLUPMTNIHDUYNUBLJVDKFUWLSFQFGQIHKPTJZWHXENGXXLMAAPBMBBIYBI");

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
    msg.setTimeStamp(0.631239013987);
    msg.setSource(19338U);
    msg.setSourceEntity(183U);
    msg.setDestination(7129U);
    msg.setDestinationEntity(202U);
    msg.seq = 1287U;
    msg.value = 247U;
    msg.error.assign("IOFSIRBESPFMHATWJLAPLMUCM");

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
    msg.setTimeStamp(0.316466621515);
    msg.setSource(14413U);
    msg.setSourceEntity(224U);
    msg.setDestination(48654U);
    msg.setDestinationEntity(7U);
    msg.seq = 38804U;
    msg.value = 222U;
    msg.error.assign("TUTNTIIBCIJYDZKCLGTEIMFGSVHUGEXPICROWPRMPTODWFKCKZMOUYQROQRQAYTDILUPQJWZPFBDUZKIAHYDMGRHRTKJDWOLSYNLNGDVKSPZCOQCWAEEFWYHMCEPVYJNZPYMAXXUBVYVOJHUQXRMWGFJNSGXAXIABNSZOERGXPVTTJHLSXMQMQIBHFGUKDKBAUFNESJCGRYFFKZXAAOLQWWDMHTJXHBWOSFBBBRAJQZSHNCLEZCVLSE");

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
    msg.setTimeStamp(0.0637786319412);
    msg.setSource(48979U);
    msg.setSourceEntity(10U);
    msg.setDestination(51531U);
    msg.setDestinationEntity(154U);
    msg.seq = 10750U;
    msg.sys.assign("HOGWMXDGWKGCHNJZSRMYXJEUSIPZZUIXIXAZGFBQLLXSFLNHGWBZTKYQTHJQTVPWQSYJMYRAFMMKSFVFWHIELEPZAMCBXYUUOPEKSKJINTNVOFDPHWXMPCCBCBNXAOEIFUURJALSAJFUJCJTVNFEVGQNDIPBGPEKZRTQAZNYMVACIPG");
    msg.value = 0.468864627656;

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
    msg.setTimeStamp(0.708214886128);
    msg.setSource(25242U);
    msg.setSourceEntity(59U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(28U);
    msg.seq = 49925U;
    msg.sys.assign("FJRQELBAEHWVYMIZCFYIBBTQOOBZNOATSQXJGSIWCOXXCXHFJQEMOKIFMSWDMPMDHGULYXJKGOTKCFEHNXPTDNXVPKLOVEHVXAAFMJLJUTMDBARVXVVUKGPAPFYGLINGFYIRGPIBSOXMOCVUEQRECWLDZKFJLCGEZJNUPHQUCBYILESPDBSVTWZNRKSZBMVTERQFYTZHQKPTINCLZRUWYKNWDQNSZKDMAWRGRYAUWYO");
    msg.value = 0.96155253587;

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
    msg.setTimeStamp(0.778415688628);
    msg.setSource(44813U);
    msg.setSourceEntity(197U);
    msg.setDestination(7491U);
    msg.setDestinationEntity(115U);
    msg.seq = 26702U;
    msg.sys.assign("DBYVKTJAEEYLAWRILECMCKOGBHKFXZYUYMQQADVEHOWYPOVCVITLEJLCTWLBKXPZCFKBJXPFRTMZXDNMERSVTIYDRVBURGIXYLNXTOJHWMZJDKNCYAKOQVLAXFMQMBPUWAISUOSNPAUUWLOVJDIOUFQIOHDNSQTNHSTQRJWIMJWQBPGUG");
    msg.value = 0.837546722279;

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
    msg.setTimeStamp(0.781496301661);
    msg.setSource(19834U);
    msg.setSourceEntity(123U);
    msg.setDestination(55975U);
    msg.setDestinationEntity(171U);
    msg.action = 201U;
    msg.longain = 0.736455601789;
    msg.latgain = 0.916732743225;
    msg.bondthick = 2884169015U;
    msg.leadgain = 0.261906611395;
    msg.deconflgain = 0.105626732802;

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
    msg.setTimeStamp(0.282720526856);
    msg.setSource(42211U);
    msg.setSourceEntity(236U);
    msg.setDestination(54978U);
    msg.setDestinationEntity(143U);
    msg.action = 116U;
    msg.longain = 0.621720372097;
    msg.latgain = 0.663135820035;
    msg.bondthick = 927172001U;
    msg.leadgain = 0.289146374354;
    msg.deconflgain = 0.478107815967;

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
    msg.setTimeStamp(0.574015593018);
    msg.setSource(2070U);
    msg.setSourceEntity(173U);
    msg.setDestination(42899U);
    msg.setDestinationEntity(179U);
    msg.action = 34U;
    msg.longain = 0.00983970193679;
    msg.latgain = 0.405525255868;
    msg.bondthick = 2434017014U;
    msg.leadgain = 0.400038272716;
    msg.deconflgain = 0.363277214101;

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
    msg.setTimeStamp(0.46924594605);
    msg.setSource(56788U);
    msg.setSourceEntity(136U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(225U);
    msg.err_mean = 0.146550378385;
    msg.dist_min_abs = 0.197897150359;
    msg.dist_min_mean = 0.0497697792543;

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
    msg.setTimeStamp(0.494426185054);
    msg.setSource(49701U);
    msg.setSourceEntity(207U);
    msg.setDestination(23761U);
    msg.setDestinationEntity(239U);
    msg.err_mean = 0.790783686765;
    msg.dist_min_abs = 0.543075833293;
    msg.dist_min_mean = 0.60125678186;

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
    msg.setTimeStamp(0.340503984695);
    msg.setSource(2005U);
    msg.setSourceEntity(224U);
    msg.setDestination(57873U);
    msg.setDestinationEntity(148U);
    msg.err_mean = 0.20384726376;
    msg.dist_min_abs = 0.228856144182;
    msg.dist_min_mean = 0.743617742186;

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
    msg.setTimeStamp(0.851866889887);
    msg.setSource(55575U);
    msg.setSourceEntity(22U);
    msg.setDestination(47477U);
    msg.setDestinationEntity(1U);
    msg.action = 35U;
    msg.lon_gain = 0.473779844631;
    msg.lat_gain = 0.160502579503;
    msg.bond_thick = 0.335468514259;
    msg.lead_gain = 0.124726769812;
    msg.deconfl_gain = 0.889971958477;
    msg.accel_switch_gain = 0.922266052856;
    msg.safe_dist = 0.178324532463;
    msg.deconflict_offset = 0.700682447906;
    msg.accel_safe_margin = 0.618473517895;
    msg.accel_lim_x = 0.532463311999;

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
    msg.setTimeStamp(0.966952012183);
    msg.setSource(28566U);
    msg.setSourceEntity(6U);
    msg.setDestination(55239U);
    msg.setDestinationEntity(142U);
    msg.action = 22U;
    msg.lon_gain = 0.601622534694;
    msg.lat_gain = 0.4204628193;
    msg.bond_thick = 0.205394596883;
    msg.lead_gain = 0.989564592354;
    msg.deconfl_gain = 0.592058960935;
    msg.accel_switch_gain = 0.317628547982;
    msg.safe_dist = 0.0436962787109;
    msg.deconflict_offset = 0.30275191258;
    msg.accel_safe_margin = 0.893087793144;
    msg.accel_lim_x = 0.339076853449;

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
    msg.setTimeStamp(0.72410333245);
    msg.setSource(2197U);
    msg.setSourceEntity(67U);
    msg.setDestination(38355U);
    msg.setDestinationEntity(247U);
    msg.action = 249U;
    msg.lon_gain = 0.423462978474;
    msg.lat_gain = 0.256855833467;
    msg.bond_thick = 0.824306542595;
    msg.lead_gain = 0.535412652652;
    msg.deconfl_gain = 0.381896547853;
    msg.accel_switch_gain = 0.297074283534;
    msg.safe_dist = 0.12188815278;
    msg.deconflict_offset = 0.172044196566;
    msg.accel_safe_margin = 0.572314084131;
    msg.accel_lim_x = 0.00115141936076;

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
    msg.setTimeStamp(0.0798349264987);
    msg.setSource(13398U);
    msg.setSourceEntity(146U);
    msg.setDestination(26273U);
    msg.setDestinationEntity(83U);
    msg.type = 34U;
    msg.op = 224U;
    msg.err_mean = 0.790967126941;
    msg.dist_min_abs = 0.442103557909;
    msg.dist_min_mean = 0.640507496136;
    msg.roll_rate_mean = 0.614615879512;
    msg.time = 0.576344383218;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 235U;
    tmp_msg_0.lon_gain = 0.345485033677;
    tmp_msg_0.lat_gain = 0.586762669561;
    tmp_msg_0.bond_thick = 0.744971778046;
    tmp_msg_0.lead_gain = 0.333012057304;
    tmp_msg_0.deconfl_gain = 0.909992475409;
    tmp_msg_0.accel_switch_gain = 0.59463147783;
    tmp_msg_0.safe_dist = 0.229354065869;
    tmp_msg_0.deconflict_offset = 0.0243143158742;
    tmp_msg_0.accel_safe_margin = 0.423126929434;
    tmp_msg_0.accel_lim_x = 0.298887562561;
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
    msg.setTimeStamp(0.765502857266);
    msg.setSource(20843U);
    msg.setSourceEntity(39U);
    msg.setDestination(61089U);
    msg.setDestinationEntity(104U);
    msg.type = 161U;
    msg.op = 184U;
    msg.err_mean = 0.145916040314;
    msg.dist_min_abs = 0.501687578251;
    msg.dist_min_mean = 0.869806949981;
    msg.roll_rate_mean = 0.354793697627;
    msg.time = 0.296501574543;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 59U;
    tmp_msg_0.lon_gain = 0.730068222247;
    tmp_msg_0.lat_gain = 0.0890461875088;
    tmp_msg_0.bond_thick = 0.683076886538;
    tmp_msg_0.lead_gain = 0.735848123583;
    tmp_msg_0.deconfl_gain = 0.203360355832;
    tmp_msg_0.accel_switch_gain = 0.130987757544;
    tmp_msg_0.safe_dist = 0.299037697147;
    tmp_msg_0.deconflict_offset = 0.151875368875;
    tmp_msg_0.accel_safe_margin = 0.385409614331;
    tmp_msg_0.accel_lim_x = 0.400795589143;
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
    msg.setTimeStamp(0.070018017352);
    msg.setSource(22927U);
    msg.setSourceEntity(39U);
    msg.setDestination(47114U);
    msg.setDestinationEntity(173U);
    msg.type = 127U;
    msg.op = 25U;
    msg.err_mean = 0.301208591926;
    msg.dist_min_abs = 0.543074845615;
    msg.dist_min_mean = 0.680247767223;
    msg.roll_rate_mean = 0.0182251455447;
    msg.time = 0.622227022467;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 148U;
    tmp_msg_0.lon_gain = 0.429211025648;
    tmp_msg_0.lat_gain = 0.502797175899;
    tmp_msg_0.bond_thick = 0.483075899335;
    tmp_msg_0.lead_gain = 0.750712446802;
    tmp_msg_0.deconfl_gain = 0.889765540981;
    tmp_msg_0.accel_switch_gain = 0.858238318001;
    tmp_msg_0.safe_dist = 0.480956201547;
    tmp_msg_0.deconflict_offset = 0.835073970405;
    tmp_msg_0.accel_safe_margin = 0.206172284755;
    tmp_msg_0.accel_lim_x = 0.740820402836;
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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.895858003894);
    msg.setSource(53055U);
    msg.setSourceEntity(76U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(177U);
    msg.uid = 74U;
    msg.frag_number = 55U;
    msg.num_frags = 216U;
    const char tmp_msg_0[] = {62, 14, -118, 116, 87, -87, -15, 99, 83, 75, -17, -66, -33, 85, 46, -11, 65, -113, 48, -32, 91, -105, 121, -72, 2, 96, 19, 95, 87, 5, 4, 93, 36, -106, -7, 13, 116, -69, 89, 113, 39, 124, 86, 12, -46, -51, 25, 44, 35, 89, -41, 77, 89, 13, -4, 52, -70, -117, 121, 49, 4, -99, -69, -74, -72, 90, -81, 85, 10, 97, 124, 35, 35, -65, 12, -118, -122, 86, -110, 88, -39, 112, 68, -54, -48, 78, 77, -126, 126, -6, -121, 82, -65, 77, -123, 100, -44, -60, 56, 92, 87, 91, -109, -24, 94, -30, 99, -101, -62, -117, 81, 88, -15, -127, -19, 95, 115, 47, 16, 77, -51, 99, 40, -119, 2, -56, 55, -7, 93, -124, 27, 46, 53, -44, 122, 97, 88, -76, 105, -63, 12, 66, 90, -6, -28, 33, -106, -28, 102, 54, -36, -121, -119, 14, 79, -105, -40, -93, -57, 15, 22, 36, 87, 111, 84, 38, 91, -22, 89, -4, -35};
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
    msg.setTimeStamp(0.88381925475);
    msg.setSource(44333U);
    msg.setSourceEntity(195U);
    msg.setDestination(10899U);
    msg.setDestinationEntity(200U);
    msg.uid = 48U;
    msg.frag_number = 38U;
    msg.num_frags = 201U;
    const char tmp_msg_0[] = {-35, 32, -84, -117, -31, 69, 59, -81, -7, -83, -25, -54, -106, -104, -28, 12, -79, 9, 83, -68, -95, -94, -76, -108, -1, 39, -124, 30, -29, 96, 121, 99, -38, 40, -76, 41, 9, -60, -76, -71, -16, -6, -117, 84, 116, -116, -93, -31, -110, 69, -75, 26, -21, 18, 90, -53, -27, 85, 8, -95, 94, -10, 94, -89, -85, 111, -33, 83, 9, 1, 116, 73, 94, -117, 37, -124, 31, 3, -14, 99, -21, 95, -68, 23, 52, 107, 84, 37, 4, 0, -125, -35, 99, -31, 25, -97, -123, -75, -94, -6, -99, 67, -51, -87, -54, 43, 19, 116, -83, -44, 28, -115, -86, 37, -117, 55, 114, 0, -124, 69, 59, -41, -126, -7, 110, 122, -96, 68, 37, 102, -33, -95, 33, 112, -66, -89, 120, 57, -24, -80, 34, -109, 59, -115, -77, 57, -41, -39, -9, 29, -77, -51, -82, 38, -39, -109, -119, 53, 27, 36, 38, -117, 104, -90, 23, -110, -96, 65, 48, -128, 94, 29, 115, 105, 101, -57, -92, 21, -60, -16, -60, -16, 60, -115, 105, 116, 47, -62, -41, 86, 117, -89, 97, 33, 30, -17, 16, 101, 5, 17, 91, 41, 77, 67, 8, 38, 91, 68, -91, 47, -14, 29, -28, -87, 37, -47, 53, 10, -51, -44, 52, 70, -80, -100, -81, -14, -109, -93, -21, 75, -20, 15, 18, 85, -50, 108, 94, -13, 38, -14, -90, -123, 102, -71, 28, 67, -64, 106, -1, -116, 94, 108, -87};
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
    msg.setTimeStamp(0.273199806944);
    msg.setSource(47769U);
    msg.setSourceEntity(140U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(138U);
    msg.uid = 227U;
    msg.frag_number = 235U;
    msg.num_frags = 70U;
    const char tmp_msg_0[] = {8, 108, -35, -49, 38, 86, 51, 28, 60, 58, 57, -64, 14, -25, 115, 0, -31, 44, 55, -20, -96, -53, -37, 76, -127, -55, 87, 18, 95, 24, -12, -75, 113, 112, -8, -124, -71, 99, -34, -59, -63, 87, -122, 46, -124, 95, 10, -55, -107, 112, 52, 21, -30, -55, -39, 120, -63, -119, -81, -68, -59, 90, 28, 21, -18, -11, -24, -74, 116, 44, -49, -101, -73, -84, -124, -61, -80, 119, 28, 65, -32};
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
    msg.setTimeStamp(0.623834159826);
    msg.setSource(20431U);
    msg.setSourceEntity(155U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(155U);
    msg.content_type.assign("JKFNHXEATIXDDKGTXLLXMKSXUINPOQEHJHZBSLKABMWRJNZFYJPAWHLAZQIRSIESVLTOGQFKBWGDOQWYHHSMFOMQZYUJOBTRLBJYSVMFJXKDEXPRUHIKUDFZASPNHRNTWVZIICMMVYRXURRHZRCZMOPKWNGLY");
    const char tmp_msg_0[] = {-37, -57, -79, -75, -112, -65, -36, -56, 64, 64, -70, -82, -98, -68, -100, -86, 73, 29, -107, -27, 107, -122, -63, 96, -83, 99, 8, -11, -116, 96, 14, 80, 30, -23, 126, -97, -104, 6, 54, 18, -26, 40, -25, -78, 15, 126, -105, -13, 81, 35, -123, -85, 11, 80, 61, 14, 73, 102, 120, -11, 120, 48, 116, -14, -71, -28, -108, 43, 50, 70, -123, 72, -52, -55, -16, -107, -118, 111, -47, -58, 51, -80, -23, 31, 32, 12, 24, 79, -113, 47, -67, 81, -64, 27, 25, -78, 93, -55, -95, -86, -41, -73, 10, 72, -112, 35, -87, 19, -64, 108, 5, -20, -103, -115, -109, 48, -123, -26, -12, -67, 4, -5, -56, -46, -46, 125, 70, -54, -59, 24, 103, -125, -20, -72, -27, 100, -69, 6, 38, -17, 21, 60, -66, 95, -44, 22, -64, -106, -85, 112, -101, 47, -18, 67, 62, -114, -62, 84, -57, -65, 19, 56, 39, -53, 97, -13, -35, -12, 65, 4, 111, 30, -121, -80, -96, -13, -22, 104, 113, -35, -70, 26, 110, 16, -112, 106, -111, 73, -65, 17, -96, 115, -127, -9, -7, 118, 101, 122, 37, -84, -10, -115, -41, 114, 113, 68, 106, 94, 42, 43, 80, 40, 96, -77};
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
    msg.setTimeStamp(0.379366584319);
    msg.setSource(32151U);
    msg.setSourceEntity(87U);
    msg.setDestination(7268U);
    msg.setDestinationEntity(119U);
    msg.content_type.assign("JTDGWALUKUESYRTDUPHNTQKUCYLRRBCRBZAUBXWLWESWBIBWFOMKQIQXII");
    const char tmp_msg_0[] = {-39, 114, 119, -99, -123, 9, -99, -13, -3, 48, 99, -81, 111, -87, 18, 83, -73, 22, 37, -10, 13, 104, 99, -12, 114, 105, 82, 53, 69, 30, -41, 36, 55, -21, 109, -117, 47, -62, 62, -15, -86, -8, 66, 34, -76, 47, 50, 70, -16, 114, -49, -39, 7, -56, 0, 98, 53, -13, 88, -124, 100, 6, -4, -20, -93, -111, -37, -125, -45, -42, 118, 103, 10, 12, 88, -8, -92, 41, -40, -84, -79, 39, -123, 87, 18, -118, -63, -6, 10, 51, 99, -24, -31, 112, -9, -98, -30, -62, -38, -99, 47, 100, -67, -114, 69, -58, 20, 57, 83, -30, -116, -25, 66, 86, -48, 111, 122, -110, 12, 80, -17, -119, 41, 26, -8, -97, -124, 118, -94, 110, 23, 79, 58, -51, -81, 66, 92, 26, -36, -30, -16, 115, -78, 41, -126, -24, -39, -79, 37, 98};
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
    msg.setTimeStamp(0.526852414242);
    msg.setSource(58041U);
    msg.setSourceEntity(151U);
    msg.setDestination(51397U);
    msg.setDestinationEntity(101U);
    msg.content_type.assign("QVEDTCIJZCPZABWXITFJYLOPUXVXJVMZDSRZEUEARBJKTUHXXVSORMPYYHXYBBTUFRUMCHPM");
    const char tmp_msg_0[] = {-64, -48, -94, -29, 43, 49, -123, -88, -39, 20, 55, -87, -10, -117, 59, 108, 78, -74, 15, -24, -60, -114, -79, 0, -5, -121, -88, -55, -15, -67, -60, 29, 66, -9, -50, 109, 58, -78, -115, -87, -35, -37, -123, -110, 2, -13, -53, -90, 14, -5, 78, -78, 20, -69, 125, 39, -82, 116, 99, 2, -86, 108, 92, -39, -78, -38, 105, 17, 47, -26, -90, 105, -100, 91, -52, -24, 36, 94, -101, 59, 68, -89, -13, -87, -19, 52, 107, 44, -87, 119, -18, -3, -97, -88, -59, -5, 66, 110, -40, 94, -35, 98, -46, 53, 126, -126, -68, -39, -68, 103, -69, 77, -61, 54, -63, -59, 49, 23, -9, -102, -38, -5, -126, -115, -122, -56, -8, -73, 13, -94, -78, 74, -27, -90, 84, -8, 53, 113, 31, 111, 119, -118, -98, -45, -48, 65, 106, 38, -12, 78, 106, 91, -38, -38, 36, -104, -81, -98, -97, -63, -119, -22, -68, 91, 68, 108, 49, -123, -47, 46, 40, -104, -51, 1, 15, -91, -30, -112, 62, -21};
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
    msg.setTimeStamp(0.550551382936);
    msg.setSource(45670U);
    msg.setSourceEntity(64U);
    msg.setDestination(52896U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.583442589216);
    msg.setSource(58366U);
    msg.setSourceEntity(198U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.484484374264);
    msg.setSource(58798U);
    msg.setSourceEntity(143U);
    msg.setDestination(10018U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.251042390042);
    msg.setSource(19706U);
    msg.setSourceEntity(131U);
    msg.setDestination(6187U);
    msg.setDestinationEntity(18U);
    msg.target = 6202U;
    msg.bearing = 0.546293361075;
    msg.elevation = 0.484038077862;

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
    msg.setTimeStamp(0.855234390954);
    msg.setSource(54618U);
    msg.setSourceEntity(204U);
    msg.setDestination(6607U);
    msg.setDestinationEntity(111U);
    msg.target = 25024U;
    msg.bearing = 0.969599758926;
    msg.elevation = 0.934194252909;

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
    msg.setTimeStamp(0.0271035291307);
    msg.setSource(30304U);
    msg.setSourceEntity(31U);
    msg.setDestination(24787U);
    msg.setDestinationEntity(95U);
    msg.target = 40958U;
    msg.bearing = 0.57659332108;
    msg.elevation = 0.79125891734;

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
    msg.setTimeStamp(0.021099646253);
    msg.setSource(28791U);
    msg.setSourceEntity(181U);
    msg.setDestination(32110U);
    msg.setDestinationEntity(10U);
    msg.target = 3028U;
    msg.x = 0.262557245118;
    msg.y = 0.670981977703;
    msg.z = 0.388350256081;

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
    msg.setTimeStamp(0.340654726641);
    msg.setSource(29834U);
    msg.setSourceEntity(254U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(97U);
    msg.target = 2592U;
    msg.x = 0.499684966875;
    msg.y = 0.680790988714;
    msg.z = 0.522276283442;

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
    msg.setTimeStamp(0.719895333689);
    msg.setSource(35631U);
    msg.setSourceEntity(168U);
    msg.setDestination(8756U);
    msg.setDestinationEntity(111U);
    msg.target = 46113U;
    msg.x = 0.509695890892;
    msg.y = 0.221810910968;
    msg.z = 0.600432452693;

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
    msg.setTimeStamp(0.363347010404);
    msg.setSource(63619U);
    msg.setSourceEntity(135U);
    msg.setDestination(9215U);
    msg.setDestinationEntity(27U);
    msg.target = 63415U;
    msg.lat = 0.620636532121;
    msg.lon = 0.456662935433;
    msg.z_units = 62U;
    msg.z = 0.950651248209;

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
    msg.setTimeStamp(0.915484329854);
    msg.setSource(42784U);
    msg.setSourceEntity(18U);
    msg.setDestination(49863U);
    msg.setDestinationEntity(68U);
    msg.target = 50562U;
    msg.lat = 0.554264990692;
    msg.lon = 0.782002937671;
    msg.z_units = 180U;
    msg.z = 0.985498466246;

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
    msg.setTimeStamp(0.207012835156);
    msg.setSource(64868U);
    msg.setSourceEntity(81U);
    msg.setDestination(59472U);
    msg.setDestinationEntity(251U);
    msg.target = 31063U;
    msg.lat = 0.78298742032;
    msg.lon = 0.374171854236;
    msg.z_units = 74U;
    msg.z = 0.467406503377;

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
    msg.setTimeStamp(0.629700955117);
    msg.setSource(62019U);
    msg.setSourceEntity(148U);
    msg.setDestination(34353U);
    msg.setDestinationEntity(24U);
    msg.locale.assign("WOUFMGKILIVVWZOXTCHUGZOFEETIAVMPWHRMFIZOBTNDXBGYVPNPXXBYOEGSYVETITWDJXLNDVPAAMJMFQEPCDLSIO");
    const char tmp_msg_0[] = {80, -66, 10, 101, -128, 6, 5, -10, 112, 39, 85, -89, 67, 113, 45, 54, -120, 54, 52, 55, -48, 88, 34, -122, 117, 115, 7, 26, -45, 109, -63, -110, 96, 40, 11, 35, 67, 3, 18, 112, 32, 104, 36, -12, 31, 32, -60, -94, -87, 113, 96, -119, 28, 111, -117, 44, -46, -121, 12, 48, 63, -59, -127, 56, 94, 14, -113, -84, 47, 52, -59, -127, -104, -43, -83, 28, 36, 19, 81, -116, 10, 33, -36, 15, -113, 52, -124, -49, 10, -89, 92, -102, -122, 91, -75, -87, 43, 36, -111, -49, -98, 104, -19, 50, -7, -100, -54, 66, 54, -46, 95, 19, 122, 53, -15, 44, -82, 15, 24, -23, -33, -12, -123, -119, 67, 59, -24, 52, -98, -37, 42, -42, -86, -95, -59, -127, -26, 120, 98, 79, 105, -107, 89, -9, -19, -33, 50, -22, 73, 63, -98, -12, -91, -55, 39, 93, -8};
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
    msg.setTimeStamp(0.212106074366);
    msg.setSource(64489U);
    msg.setSourceEntity(153U);
    msg.setDestination(55700U);
    msg.setDestinationEntity(221U);
    msg.locale.assign("WIGBROHWOXHRWYUKMHAXZWBNJOIYQJKEBXAIFKHFLBOOYMXVVEBFDIYJAMNQOAXCGRCKNXHNVZAPZGLIJCFTQVRIXOYSHBDAMTMWATLQSCAGGOWN");
    const char tmp_msg_0[] = {78, -33, 52, -29, 35, 92, -78, -98, -122, 80, -77, 96, 118, -16, 35, -106, 40, 39, -93, 66, -48, -54, -8, -114, 24, 117, -58, -102, 69, 117, -1, -57, 81, -126, -19, 89, 19, 91, -6, 19, 54, 61, 37, -62, -45, 107, 47, 49, 15, -95, 11, -84, -28, -56, 103, 6, -118, 99, 28, -24, 14, 90, -103, 44, 68, 83, -105, 1, -58, 60, -91, 52, -24, 107, -19, -49, -79, -65, -93, -54, -87, 74, -123, 1, 91, 31, 92, -120, -11, 77, 41, -120, -105, 53, 15, -118, -32, 112, 27, 39, -82, 110, 3, 28, 58, 87, -47, 36, -123, -64, -74, -5, 37, 37, -60, -73, 29, 62, 3, -110, -74, 42, -51, 1, 29, -8, -79, 20, 121, -8, 37, -64, -88, 86, -80, -111, 9, 30, -71, 83, 64, 16, 124, 119, 96, 117, 10, -62, 53, 5, -23, -68, -41, 82, -79, 68, 126, 53, -20, -87, -6, -5, 0, 11, 65, -68, 105, 91, 37, -83, -83, -36, 70, 106, -18, 50, -112, 81, -41, 26, 74, 6, -55, 85, -41, 2, -83, 104, -15, -119, 119, -25, 47, 106, -78, 93, 77, 2, -24, -41, -115, 105, -29, 38, 93, 23, -91, 97, 42, -99, -59, 88, 77, -47, -98, 35, 79, -39, 16, 76, 84, -63, -78, 123, 53, 11, -1, -30, -24, -80, 58, 49};
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
    msg.setTimeStamp(0.703090182631);
    msg.setSource(56708U);
    msg.setSourceEntity(174U);
    msg.setDestination(8593U);
    msg.setDestinationEntity(207U);
    msg.locale.assign("MPJQMOGTNEXESYPGINLLAEQLWAMKHAODXOOCLMLTZTGFNEUIEHBJCVCLWWKVGHRQYTRDEWKFFOIBRYJQXPPUEDVSTXVDBXOPFALHZJJVZPGJNKUCQGAMCJBNHOMDTZUDGZRYSKIQJREEKSSTHOXKBLMEUSRAJWIY");
    const char tmp_msg_0[] = {66, 19, 15, -27, -123, -24, 22, 59, -49, -22, -15, -112, 100, 11, -52, 1, -103, -109, -81, -102, -76, 88, -11, 90, 62, -121, 27, -44, -49, 101, 122, 107, 87, 112, -4, 39, -7, -42, 16, 101, -23, 98, -69, 37, 96, -43, 18, -68, -13, -74, -57, -77, 100, 24, 50, -37, -122, -75, 5, -100, -21, 78, -121, -17, 31, -79, -25, -66, 115, 36, 31, -126, 6, -13, -110, -114, -73, 122, 58, 96, 28, 15, -80, 30, -33, -20, -13, 2, 35, 35, 100, -63, 97, -81, -94, -58, 29, -93, -88, -16, 76, -91, -32, 28, 31, -46, 38, 8, 105, -97, 50, -86, 36, -18, -32, 2, -99, 80, 93, -110, -91, -116, 4, 12, 66, 117, -98, -32, 116, 6, 81, 22, 62, 18, 48, -85, -108, 70, -108, 21, -105, -124, 111, -95, 123, -39, -96, -10, 72, 97, 59, 119, 22, 118, 52, -56, 4, 31, -18, -82, 47, -31, 13, -50, -30, 61, 30, -61, 18, 6, -46, -26, -72, -84, -98, -13, -93, 112, -16, 70};
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
    msg.setTimeStamp(0.826129154056);
    msg.setSource(38371U);
    msg.setSourceEntity(120U);
    msg.setDestination(50634U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.288624720994);
    msg.setSource(17765U);
    msg.setSourceEntity(5U);
    msg.setDestination(64143U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.910716690827);
    msg.setSource(36418U);
    msg.setSourceEntity(136U);
    msg.setDestination(42943U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.838108466607);
    msg.setSource(43401U);
    msg.setSourceEntity(191U);
    msg.setDestination(22610U);
    msg.setDestinationEntity(67U);
    msg.camid = 127U;
    msg.x = 51607U;
    msg.y = 57618U;

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
    msg.setTimeStamp(0.585347309624);
    msg.setSource(55746U);
    msg.setSourceEntity(250U);
    msg.setDestination(25868U);
    msg.setDestinationEntity(132U);
    msg.camid = 12U;
    msg.x = 7500U;
    msg.y = 12228U;

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
    msg.setTimeStamp(0.316680608256);
    msg.setSource(30079U);
    msg.setSourceEntity(144U);
    msg.setDestination(37300U);
    msg.setDestinationEntity(236U);
    msg.camid = 136U;
    msg.x = 44603U;
    msg.y = 50984U;

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
    msg.setTimeStamp(0.115419439009);
    msg.setSource(54361U);
    msg.setSourceEntity(53U);
    msg.setDestination(52098U);
    msg.setDestinationEntity(116U);
    msg.camid = 82U;
    msg.x = 51548U;
    msg.y = 52096U;

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
    msg.setTimeStamp(0.834130024955);
    msg.setSource(40207U);
    msg.setSourceEntity(19U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(85U);
    msg.camid = 21U;
    msg.x = 11697U;
    msg.y = 21526U;

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
    msg.setTimeStamp(0.458005213266);
    msg.setSource(21088U);
    msg.setSourceEntity(107U);
    msg.setDestination(39602U);
    msg.setDestinationEntity(188U);
    msg.camid = 187U;
    msg.x = 41751U;
    msg.y = 58880U;

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
    msg.setTimeStamp(0.167299661107);
    msg.setSource(30305U);
    msg.setSourceEntity(131U);
    msg.setDestination(6594U);
    msg.setDestinationEntity(119U);
    msg.tracking = 197U;
    msg.lat = 0.191276271131;
    msg.lon = 0.0979867112952;
    msg.x = 0.582769604383;
    msg.y = 0.839577666046;
    msg.z = 0.275079190309;

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
    msg.setTimeStamp(0.573747482944);
    msg.setSource(62614U);
    msg.setSourceEntity(82U);
    msg.setDestination(34112U);
    msg.setDestinationEntity(109U);
    msg.tracking = 104U;
    msg.lat = 0.537828696528;
    msg.lon = 0.481813172805;
    msg.x = 0.0722837895055;
    msg.y = 0.352149876822;
    msg.z = 0.780096316686;

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
    msg.setTimeStamp(0.138029587705);
    msg.setSource(46338U);
    msg.setSourceEntity(184U);
    msg.setDestination(40252U);
    msg.setDestinationEntity(179U);
    msg.tracking = 55U;
    msg.lat = 0.435095837706;
    msg.lon = 0.538710101709;
    msg.x = 0.630815732632;
    msg.y = 0.204929040624;
    msg.z = 0.641207198955;

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
    msg.setTimeStamp(0.242797276203);
    msg.setSource(55716U);
    msg.setSourceEntity(215U);
    msg.setDestination(3745U);
    msg.setDestinationEntity(71U);
    msg.target.assign("AJCOVRQNBFLSTGVGCYGUMDGRTBQSSMANAEBYKEGNHJLXTIXTSXAQHKRWQFZMZCLUJAUEDNHPBBOUEZYITALSMCMKKWJISNXWLCXOPPRLCDBBZAEXPWVIPKNDIFKAMZWOXYEBOVNWGHSG");
    msg.lbearing = 0.110841067948;
    msg.lelevation = 0.347201277658;
    msg.bearing = 0.433836818894;
    msg.elevation = 0.262586546503;
    msg.phi = 0.888714817287;
    msg.theta = 0.0355084439583;
    msg.psi = 0.478878655353;
    msg.accuracy = 0.259676737023;

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
    msg.setTimeStamp(0.238243425989);
    msg.setSource(42250U);
    msg.setSourceEntity(114U);
    msg.setDestination(3409U);
    msg.setDestinationEntity(254U);
    msg.target.assign("BPXRVWMJWAOSKNHJOWVAGQLNOUKGXYRWVYFPEJFSCSHHNHGFT");
    msg.lbearing = 0.117432979014;
    msg.lelevation = 0.757588069203;
    msg.bearing = 0.926499715138;
    msg.elevation = 0.90057976509;
    msg.phi = 0.963265430302;
    msg.theta = 0.271602955672;
    msg.psi = 0.290743619698;
    msg.accuracy = 0.338765626926;

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
    msg.setTimeStamp(0.424306542281);
    msg.setSource(53925U);
    msg.setSourceEntity(40U);
    msg.setDestination(57827U);
    msg.setDestinationEntity(28U);
    msg.target.assign("HXWIERTCVGUUKOHTQZZRVIAYTJYHQBZYMBTLEIILJXHRQRDOEOFKLPSGNQNGOZPBOBEULEMSNOLKTVXZYXHREAMLPZAWSZGVUBRWNLBSNPRWEXNHSPWYFFIWBBFFGCYNRYEGKQQYCVNQLHMKUGPOITCJVGNXVJZIYKMAUNDMUHHKCZREADDCSGVESLFMBJQFDMULXTWRPATTOUSSIJJWDQIAJADKHF");
    msg.lbearing = 0.944746010786;
    msg.lelevation = 0.670114338251;
    msg.bearing = 0.0186804326957;
    msg.elevation = 0.366119958326;
    msg.phi = 0.486622114885;
    msg.theta = 0.572873703401;
    msg.psi = 0.584957362844;
    msg.accuracy = 0.829297037211;

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
    msg.setTimeStamp(0.94744622957);
    msg.setSource(36588U);
    msg.setSourceEntity(130U);
    msg.setDestination(35985U);
    msg.setDestinationEntity(7U);
    msg.target.assign("VFDCUHCSJHZVPBGRLTRKPZMGCRTVFWQXOCKBLOAWGVZZXGCXBXQDEEZDTUXHCRBTKQWNBRVFOPXMSHGWIBQLRMGRUHWBILPWKARDMEQCUJFAEIALUZSAWNUYDNLXEACDSIOYUSMOFIATZTTKJSZFXEUEFCX");
    msg.x = 0.666722486523;
    msg.y = 0.0612926043557;
    msg.z = 0.456026774596;
    msg.n = 0.811449707795;
    msg.e = 0.159890890303;
    msg.d = 0.439844129116;
    msg.phi = 0.464075405569;
    msg.theta = 0.987500389153;
    msg.psi = 0.782620779144;
    msg.accuracy = 0.443078697441;

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
    msg.setTimeStamp(0.807516720238);
    msg.setSource(37243U);
    msg.setSourceEntity(55U);
    msg.setDestination(46931U);
    msg.setDestinationEntity(135U);
    msg.target.assign("TYHPILHWQOMFTUVVZPWNAZHRBQCHDEBWGQC");
    msg.x = 0.41841918723;
    msg.y = 0.254617560185;
    msg.z = 0.275005050628;
    msg.n = 0.0117754853455;
    msg.e = 0.884531428369;
    msg.d = 0.630251556944;
    msg.phi = 0.00838247377127;
    msg.theta = 0.187223740692;
    msg.psi = 0.229164862901;
    msg.accuracy = 0.119625433659;

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
    msg.setTimeStamp(0.0146934564543);
    msg.setSource(60030U);
    msg.setSourceEntity(234U);
    msg.setDestination(35366U);
    msg.setDestinationEntity(214U);
    msg.target.assign("UPMEYSWIRXSAKCBYLRKPZDDBHVOZJQYUEIONKQXIUVSSOTFSCBPZEFWZMPHWQCVVDHCTDAJDMWAPHNKKJWDQHUALALQGNJPZJRIRPWHNLGYBAKMMIYVVLNBYSTKHHNNESZGSRQJTANBELXXMFGFEMAZCGEXTGQGWXVJBDLGDMJDXXPYRBAITTYOQZFLYOJFIJFSXWFCCAIPKUKWEUNUBTUVLZRYTMIGCSRXPRRHMLBFVZDFCWQOUOGQOEKCOUI");
    msg.x = 0.0609067251909;
    msg.y = 0.818014102865;
    msg.z = 0.927917309473;
    msg.n = 0.432179233964;
    msg.e = 0.566760455945;
    msg.d = 0.254174336569;
    msg.phi = 0.96588626822;
    msg.theta = 0.641265418617;
    msg.psi = 0.00662338628232;
    msg.accuracy = 0.385160868717;

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
    msg.setTimeStamp(0.263396805573);
    msg.setSource(5080U);
    msg.setSourceEntity(193U);
    msg.setDestination(36226U);
    msg.setDestinationEntity(114U);
    msg.target.assign("DXUOGXALTGQQZHNTJASMCDTXOEQVNPLNSFWCEMGRFGKOEXMMUUWTDGYZUBIOVTSFATTHPSYSSYJRYMGHHCDMZUEWVXAOHABCKLIPBVOIWIUPBSCTZCYZZRFJQKLAZNCWW");
    msg.lat = 0.77004578568;
    msg.lon = 0.87411615479;
    msg.z_units = 86U;
    msg.z = 0.910814591033;
    msg.accuracy = 0.193139788528;

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
    msg.setTimeStamp(0.96181457173);
    msg.setSource(28162U);
    msg.setSourceEntity(13U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(61U);
    msg.target.assign("PBTVOQXFIVRTJUPETUSWMJOPWSKDVQIRXHBJBVSLOGDROSKLLINNCBHQYNWHYTMCZFVQYINKYHPUQNYDAQKFDDGODPWDYBWHETRVIZMNUCSEIMBDKBIESPZULMMMXLFHUCRUAEZQSKGBXKYWJKALZAGZSCWILXFRKZAWVRIRAFFNCGCCYHWORDUXOCVVAUZKMQTPA");
    msg.lat = 0.701194890929;
    msg.lon = 0.904141394099;
    msg.z_units = 89U;
    msg.z = 0.173586233528;
    msg.accuracy = 0.416311446198;

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
    msg.setTimeStamp(0.487271215538);
    msg.setSource(22445U);
    msg.setSourceEntity(56U);
    msg.setDestination(60523U);
    msg.setDestinationEntity(239U);
    msg.target.assign("QLSPMTJDUZCQSBKMSFCCNCMTUGOSKDMFELRVRUHXPETXQINICYTUMFPYWNDDZWSCODHJEXVKFBVTMCPANYQFOBXXGWYQKNHRRAWOGFMTVPAFJSJXLRQEGQYZVRWABOBIGMCRXKZWVCLGIYFNHPGMTIHANAZTWGCOSYRQYPMZWEEFYBPUVSOAUDBRLKHE");
    msg.lat = 0.996097531594;
    msg.lon = 0.790062354292;
    msg.z_units = 83U;
    msg.z = 0.131867093466;
    msg.accuracy = 0.875718408286;

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
    msg.setTimeStamp(0.314688061204);
    msg.setSource(35022U);
    msg.setSourceEntity(99U);
    msg.setDestination(46107U);
    msg.setDestinationEntity(237U);
    msg.name.assign("COTRXDKHZHATCH");
    msg.lat = 0.405418940117;
    msg.lon = 0.809623728138;
    msg.z = 0.365373965885;
    msg.z_units = 81U;

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
    msg.setTimeStamp(0.488621866576);
    msg.setSource(888U);
    msg.setSourceEntity(127U);
    msg.setDestination(33446U);
    msg.setDestinationEntity(4U);
    msg.name.assign("XTRWBOSUTDBGJPRIHEJJNVDLSHPQFHMMPPJREUOQMNGGCGDPYJOMVSDQQMDUTZYAAYIMLSXIZMCNTXYZKVVWDQGBRDSOOYCVKYIEORJXZEHWTWTPLXUVETNOCQFZGNPAWDABJICWUIOKJFGRTXFAXLZEJFNUAIMJVKMBXSANIEPGLKYVEFCFUNFQRHRIZDQBPMSLHAHLYOFLBNKUHKOQWSTLGGWCUHZWRPXRUFQEVCAHLXBA");
    msg.lat = 0.431403548718;
    msg.lon = 0.782026807708;
    msg.z = 0.347341878642;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.52683815287);
    msg.setSource(52149U);
    msg.setSourceEntity(207U);
    msg.setDestination(46225U);
    msg.setDestinationEntity(178U);
    msg.name.assign("WRDJIRJVREDCALBMOWHSJFQXVCHDBAVYYGBXHAQVPFHOAALTYYIEPKEHLSQNDNEFSZOXZYJULSUUCNWFVFOGFTPDNRARYIEVSTCPGSLLEXRQJOPIZXGGPCOAUKNHRNDJAMVWNVJYWLVFXKHUKSTWCHQRTULYWYIKMBBCKIGIBHCXILZABNZUXJTXQGPBZSDQQWEZOFBKSIE");
    msg.lat = 0.551391427915;
    msg.lon = 0.9065948977;
    msg.z = 0.532511434675;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.892917707158);
    msg.setSource(6213U);
    msg.setSourceEntity(35U);
    msg.setDestination(2700U);
    msg.setDestinationEntity(217U);
    msg.op = 98U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MVNAJEXPHNONXPBXTFYTMYLYPKUKCNCXOJQBXYBDLLGBEGWESQDOCUVHEWHGHDRPSXUPDWDTPAKZPRWRSI");
    tmp_msg_0.lat = 0.174924858118;
    tmp_msg_0.lon = 0.492073954844;
    tmp_msg_0.z = 0.88367836277;
    tmp_msg_0.z_units = 97U;
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
    msg.setTimeStamp(0.478802886074);
    msg.setSource(38381U);
    msg.setSourceEntity(249U);
    msg.setDestination(42868U);
    msg.setDestinationEntity(54U);
    msg.op = 24U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("DLXORTASEQPSLKMJOPNTPGAHGOABAGIELRXQETTCRHFXHJUCBYEHYURXUNCBEVGMKRQPD");
    tmp_msg_0.lat = 0.648951335458;
    tmp_msg_0.lon = 0.495047470267;
    tmp_msg_0.z = 0.794457666319;
    tmp_msg_0.z_units = 219U;
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
    msg.setTimeStamp(0.221968203608);
    msg.setSource(63099U);
    msg.setSourceEntity(39U);
    msg.setDestination(40120U);
    msg.setDestinationEntity(92U);
    msg.op = 60U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SOCBMHHQYPELIWKPDZRDNCJOLCPIKXOUNZNDVADFVPWJGBMYRQSECLGFAFMUWMFKUDVRHTCAFNYKAJRNHIWOWNEFSSOUTOGKHFXNCBNKKDOTEMXEIPNJUEQIXJYPJZDTSUEUTACWZVHZQFBLRQKVOATOUYMCDQXWUXSZQAPWMMBIGRGXRUQZSBVAXDGJ");
    tmp_msg_0.lat = 0.285455698303;
    tmp_msg_0.lon = 0.604402012248;
    tmp_msg_0.z = 0.145736608659;
    tmp_msg_0.z_units = 175U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0553959100308);
    msg.setSource(30969U);
    msg.setSourceEntity(195U);
    msg.setDestination(55252U);
    msg.setDestinationEntity(35U);
    msg.value = 0.244396762966;
    msg.type = 50U;

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
    msg.setTimeStamp(0.934222923685);
    msg.setSource(64782U);
    msg.setSourceEntity(208U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(198U);
    msg.value = 0.554552692909;
    msg.type = 58U;

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
    msg.setTimeStamp(0.424536165444);
    msg.setSource(52526U);
    msg.setSourceEntity(165U);
    msg.setDestination(23116U);
    msg.setDestinationEntity(165U);
    msg.value = 0.00894685308149;
    msg.type = 140U;

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
    msg.setTimeStamp(0.548190087613);
    msg.setSource(2448U);
    msg.setSourceEntity(118U);
    msg.setDestination(50424U);
    msg.setDestinationEntity(20U);
    msg.value = 0.412611490745;

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
    msg.setTimeStamp(0.552327281094);
    msg.setSource(41720U);
    msg.setSourceEntity(79U);
    msg.setDestination(37026U);
    msg.setDestinationEntity(228U);
    msg.value = 0.425945750842;

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
    msg.setTimeStamp(0.920154926226);
    msg.setSource(11276U);
    msg.setSourceEntity(195U);
    msg.setDestination(7925U);
    msg.setDestinationEntity(124U);
    msg.value = 0.128840879095;

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
    msg.setTimeStamp(0.880366418719);
    msg.setSource(51444U);
    msg.setSourceEntity(228U);
    msg.setDestination(22202U);
    msg.setDestinationEntity(152U);
    msg.timestamp_last_service = 0.962411363049;
    msg.time_next_service = 0.71962477178;
    msg.time_motor_next_service = 0.647176834158;
    msg.time_idle_ground = 0.418699940098;
    msg.time_idle_air = 0.948296202798;
    msg.time_idle_water = 0.7473317251;
    msg.time_idle_underwater = 0.775818880996;
    msg.time_idle_unknown = 0.685783608284;
    msg.time_motor_ground = 0.888870272679;
    msg.time_motor_air = 0.793778034429;
    msg.time_motor_water = 0.751520973548;
    msg.time_motor_underwater = 0.544239979643;
    msg.time_motor_unknown = 0.174504659513;
    msg.rpm_min = -6257;
    msg.rpm_max = 14717;
    msg.depth_max = 0.447152054166;

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
    msg.setTimeStamp(0.518156179878);
    msg.setSource(58162U);
    msg.setSourceEntity(218U);
    msg.setDestination(12907U);
    msg.setDestinationEntity(26U);
    msg.timestamp_last_service = 0.993522261785;
    msg.time_next_service = 0.811246151701;
    msg.time_motor_next_service = 0.147999904493;
    msg.time_idle_ground = 0.702345593193;
    msg.time_idle_air = 0.199254159264;
    msg.time_idle_water = 0.484804409456;
    msg.time_idle_underwater = 0.715080248943;
    msg.time_idle_unknown = 0.140638293512;
    msg.time_motor_ground = 0.888842959943;
    msg.time_motor_air = 0.542884997461;
    msg.time_motor_water = 0.161203242759;
    msg.time_motor_underwater = 0.064097316946;
    msg.time_motor_unknown = 0.929725622522;
    msg.rpm_min = 10926;
    msg.rpm_max = 28704;
    msg.depth_max = 0.796424709786;

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
    msg.setTimeStamp(0.466985482664);
    msg.setSource(19933U);
    msg.setSourceEntity(63U);
    msg.setDestination(2447U);
    msg.setDestinationEntity(134U);
    msg.timestamp_last_service = 0.878197552856;
    msg.time_next_service = 0.544822123282;
    msg.time_motor_next_service = 0.449952688958;
    msg.time_idle_ground = 0.534940322112;
    msg.time_idle_air = 0.0231071073279;
    msg.time_idle_water = 0.545402622944;
    msg.time_idle_underwater = 0.298108330968;
    msg.time_idle_unknown = 0.964591669755;
    msg.time_motor_ground = 0.354987414758;
    msg.time_motor_air = 0.232018076427;
    msg.time_motor_water = 0.892150131095;
    msg.time_motor_underwater = 0.528593865326;
    msg.time_motor_unknown = 0.874980761497;
    msg.rpm_min = 5791;
    msg.rpm_max = -3494;
    msg.depth_max = 0.0236900198716;

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
    msg.setTimeStamp(0.890626869256);
    msg.setSource(63057U);
    msg.setSourceEntity(119U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(228U);
    msg.severity = 118U;
    msg.text.assign("BLECECNZGQEIDBRJQVZRHPEBOYASPKAEAMUKGXGXDTWEJRBMXWMTAVSHUQVXKYMWQVQNBQKPAJJIJTBIOGYMQDVVSYAOHQONLRWFIPYTSGFMZYDLPPJDTKISFZTOGFMWCHNDBNZGSCZWSKDGYFIHFAZREJDCIHHUTNAOEJGRHBMLAXISWYTCMTHTEYQXUWGKNRFWVBZBOZCMRURUFCULLQVNFXLXSOJCLVHKWFUOSPCPVUL");

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
    msg.setTimeStamp(0.303065896046);
    msg.setSource(12214U);
    msg.setSourceEntity(125U);
    msg.setDestination(7880U);
    msg.setDestinationEntity(70U);
    msg.severity = 135U;
    msg.text.assign("ZDNZCCQAMPRVIKCLTRNMIOACLIUWBAQGBBDFCNYKUQUUEJYIXNQWBYGMWBCVPKQPHPMOATKEHZJPYEZNFCRLXHHATLXXDG");

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
    msg.setTimeStamp(0.38938978785);
    msg.setSource(64085U);
    msg.setSourceEntity(3U);
    msg.setDestination(14242U);
    msg.setDestinationEntity(56U);
    msg.severity = 35U;
    msg.text.assign("SYMNFKRFGRBAIDHOSJLXHBKPDNWTNJLCBXAZQWVJKDRGSZVFHDXHCWDWSUNBZTWLCILSYJOEQPYAENQAGYJERCPEKFEMBTJVMDOUZOQFIQTYPVUXXCANGIXLHUWDDHNCIOKPKPBFJPPGLAVQRQXHNXRTTKYZLVTWECZCWBEQREMDSQVADQOAVRXUUKFZJYHVPTMMTBSJ");

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

  return test.getReturnValue();
}
