//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 4663673b775daaf6b93edc177859e286                            *
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
    msg.setTimeStamp(0.563029984354);
    msg.setSource(7297U);
    msg.setSourceEntity(20U);
    msg.setDestination(1823U);
    msg.setDestinationEntity(221U);
    msg.state = 3U;
    msg.flags = 165U;
    msg.description.assign("HWGAQCBMZCKFGIRTDWZVRAEVUGPPQGNTRVUOKJELNTUJHKQTTCJZGQXWKWLDOANYDFPVKXOHVFSSAPTYEJBCIWJBBFKCZPGCACZSQFRLBMTHEGRKXJPQFXOTMYXARNXLWOILSYYFZZPXLHBJXOHYSRNVNDADIEVEEIHBDDDKMIUJABWHDPFBPSFRVSUJEPQGJLCDQVMTWMUAYKEVMMEIYNSHTSZGC");

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
    msg.setTimeStamp(0.284947568616);
    msg.setSource(39594U);
    msg.setSourceEntity(164U);
    msg.setDestination(64027U);
    msg.setDestinationEntity(201U);
    msg.state = 80U;
    msg.flags = 92U;
    msg.description.assign("IWAKMCIEMLTIXJQBTKNEMXSGQCJBZQKZGUPFBKATZXNNYDBFHOLCRYNFRKEEPRMKGSMSYOQGTCOLQEVPIRAMXJCPVKGRJLNTXVDZXZMWYFOVSONHQHWDZJ");

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
    msg.setTimeStamp(0.662082603492);
    msg.setSource(55226U);
    msg.setSourceEntity(178U);
    msg.setDestination(18344U);
    msg.setDestinationEntity(227U);
    msg.state = 203U;
    msg.flags = 230U;
    msg.description.assign("NTZHSMJTUDLSDVWYSIFBNMNFJMXQDFUKNYNHNPRGUQSDJXLGJZAKQOLZLGCCISFEYWIPGAQLCMYCYUYRACWFQTAKCEVAPIZEGETHBEPMWQWRGVLHUAOZGEYIKVPDMVOSQXHBRWDIRJPEEVLYTBMSONJ");

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
    msg.setTimeStamp(0.773826521749);
    msg.setSource(2663U);
    msg.setSourceEntity(43U);
    msg.setDestination(28228U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.315002067037);
    msg.setSource(35652U);
    msg.setSourceEntity(204U);
    msg.setDestination(33169U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.112076264516);
    msg.setSource(61299U);
    msg.setSourceEntity(204U);
    msg.setDestination(52138U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.165494476722);
    msg.setSource(61727U);
    msg.setSourceEntity(160U);
    msg.setDestination(11394U);
    msg.setDestinationEntity(111U);
    msg.id = 61U;
    msg.label.assign("ADPEGRNHITGJBKPTSUQWMJWGKVNDNCWBKARZYDRVWAWMEPXPVDZFOXSDENJLRARXWSKKLOSIHGEZSTFHOLIHHG");
    msg.component.assign("SVOHVNZDDNBNSKUGQKPTRGGXGFMZODLTHEDWDUZZDUZCSAHYJAPYRUBMEFCNFXKDKFRUYFVX");
    msg.act_time = 46713U;
    msg.deact_time = 39726U;

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
    msg.setTimeStamp(0.0623219215303);
    msg.setSource(22773U);
    msg.setSourceEntity(96U);
    msg.setDestination(30262U);
    msg.setDestinationEntity(227U);
    msg.id = 186U;
    msg.label.assign("DUDZZMGBHUGNPADUPRUOHKTXFZSCXOGMASIWXLFDHDCVDKCNLRXKUAYQZLEINXZILROMTHBFDQOTEHI");
    msg.component.assign("OGBEWQXAEZHZFKJUNPZVSDPWRIIMYPBJHCDRQEHTUNNSENJCDJVCQGFAEOWLWKZCQCRTREZPQPQTBKFMDFGKCAGAXTXJMZUYTXWJBSDFIJVYBKNAVKITZXCRNVRTCBUVGMALLL");
    msg.act_time = 36387U;
    msg.deact_time = 6324U;

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
    msg.setTimeStamp(0.719188950254);
    msg.setSource(16021U);
    msg.setSourceEntity(254U);
    msg.setDestination(61027U);
    msg.setDestinationEntity(5U);
    msg.id = 9U;
    msg.label.assign("SFQFZGJKJDDFBRYVTOZYNBJJQLKKRRKNTLCVNYLRVAGVLIZACLHUBWMMVTWOXISOISREEWNANGBFUXAVQHZEOXXXJCEIYLZTKMJSDMGZPANRTNMYVXZCRQTCGIPQRCQMJORIYCGLNKZKSPKHLIOWSLALHUXPXABPSFWPFIKEZUGGJQVEWMTDBMHFCTSNHWODFNDYOACQJHOPKUDCDRFHTMPZJHWEDEBBDMYXSTWYEAWPOGBGXH");
    msg.component.assign("FVMGDQYERXQUIBPXHPYAFLEOZPTIBKHTKDLORCGCSFSXXQLQFRUXBWDNMKGOKHVDARFVNDYFASBFMTOVUZEAHLYNXZAIUMUPDWRPNYOCAVJ");
    msg.act_time = 15643U;
    msg.deact_time = 4625U;

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
    msg.setTimeStamp(0.0895942754482);
    msg.setSource(29734U);
    msg.setSourceEntity(76U);
    msg.setDestination(61130U);
    msg.setDestinationEntity(134U);
    msg.id = 80U;

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
    msg.setTimeStamp(0.36979179201);
    msg.setSource(33933U);
    msg.setSourceEntity(229U);
    msg.setDestination(19728U);
    msg.setDestinationEntity(200U);
    msg.id = 236U;

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
    msg.setTimeStamp(0.960629395458);
    msg.setSource(60862U);
    msg.setSourceEntity(133U);
    msg.setDestination(6771U);
    msg.setDestinationEntity(189U);
    msg.id = 203U;

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
    msg.setTimeStamp(0.307098929677);
    msg.setSource(21822U);
    msg.setSourceEntity(25U);
    msg.setDestination(43429U);
    msg.setDestinationEntity(163U);
    msg.op = 154U;
    msg.list.assign("JFGOEEHZXTSPUBJWNZUXWZUELKYRBHKGLXZORMXBVJKXPDTEYGAPYNNRGHDLXBUJWTCQWACEENJTBLNOFVGZTILYSJAOTZMVSUPVAQVMBRPBKJPCMNAULQRIMIDDOQXEUDQHYKRIFUABHHCFDGCSWCUWNPIVRPFSWGPTOOSOYGGDNISOCNZSLJHQKXFTMHMREMXCKZVIBMETVASDWIL");

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
    msg.setTimeStamp(0.210327937641);
    msg.setSource(50120U);
    msg.setSourceEntity(226U);
    msg.setDestination(61425U);
    msg.setDestinationEntity(88U);
    msg.op = 172U;
    msg.list.assign("KXVPGCTGEOKUTNYYKSVWNEKTDPFJQLOKXFOMSJYLOYNODMVZJISPWQXZVZBSQUUAGDEILAPMCBDZHBUQNTBSWKQILTXFHPMRHCJTGEKTJUJOOGRXCEVTVULCCZDHZMQXBMGQBPMUISWNTGXGDSIAMRZFCQWZWRVRCYINDMQLHRJFAYLHONEGQLUCALSHVIRAHYMNR");

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
    msg.setTimeStamp(0.1439185422);
    msg.setSource(7201U);
    msg.setSourceEntity(44U);
    msg.setDestination(59325U);
    msg.setDestinationEntity(28U);
    msg.op = 238U;
    msg.list.assign("RGBSENXGAPUCBOHCWGRWEUTEXXIYMDPCNIPOCWZVWLGPADPNBUTCMWRHLLAJTUKJFVTPFHXIXNFURKHKLXVQAEEPONTIBUCODDASXFFZVIDRQKMJXAOEZCKALRFMTDBYKTJYQYCFFMIGDPTEYRNZSHR");

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
    msg.setTimeStamp(0.776444226122);
    msg.setSource(24349U);
    msg.setSourceEntity(57U);
    msg.setDestination(48396U);
    msg.setDestinationEntity(105U);
    msg.value = 179U;

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
    msg.setTimeStamp(0.593140433924);
    msg.setSource(34783U);
    msg.setSourceEntity(199U);
    msg.setDestination(44452U);
    msg.setDestinationEntity(138U);
    msg.value = 239U;

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
    msg.setTimeStamp(0.729880740809);
    msg.setSource(50763U);
    msg.setSourceEntity(70U);
    msg.setDestination(11516U);
    msg.setDestinationEntity(221U);
    msg.value = 230U;

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
    msg.setTimeStamp(0.489918481533);
    msg.setSource(27687U);
    msg.setSourceEntity(41U);
    msg.setDestination(53008U);
    msg.setDestinationEntity(223U);
    msg.consumer.assign("ACAGNZEPRSLFDWULYMDKSGAOWISJKHERAXTDLSLJXZBTNWMEIPMRNCDNSBFUONUWWRDVYCXEIMWVILZHRZVMQPTCFHFOHAUGPHGQDPKQRGXYDSXGUFNOJYKDHLVNQKYUMTMZVEQNILIVOMZXFIWKWZFTEXLBCIQ");
    msg.message_id = 27254U;

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
    msg.setTimeStamp(0.310301088387);
    msg.setSource(65394U);
    msg.setSourceEntity(61U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(125U);
    msg.consumer.assign("FSFBXXAALVCOJTUJMWZHYLZINMWBPTLXYKWDIMFBPVJRNFYCFIQQAFJUTWKDFGCBQDLOQVHMRZXHZQLRGXCRLMADBIXIDVVUKOHELPZYKPSCRHHCIYCVWWWAXEVNWNGNZHDXSSXYEUPOJURGBHMCVYEBREJNCIZSKRQVYODGJPENAGPAJIYJOLGMZUKTNUPAQAQRJZTWEUUFSBSHFOEDBRMIWFNGKKZEEPDSVOCKMTTQUTD");
    msg.message_id = 30410U;

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
    msg.setTimeStamp(0.0770161079688);
    msg.setSource(65131U);
    msg.setSourceEntity(96U);
    msg.setDestination(6312U);
    msg.setDestinationEntity(109U);
    msg.consumer.assign("EIVBVKYIINLVBKLQEFXORINJUAOJPKDSFQQJMAEKLSRGCQWQOYVBAEDWJAQHRPUFWKIFPMMPEWROGP");
    msg.message_id = 42655U;

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
    msg.setTimeStamp(0.844019713374);
    msg.setSource(64266U);
    msg.setSourceEntity(127U);
    msg.setDestination(47619U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.398902228868);
    msg.setSource(3879U);
    msg.setSourceEntity(152U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.98526448351);
    msg.setSource(1820U);
    msg.setSourceEntity(39U);
    msg.setDestination(48124U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.773444790729);
    msg.setSource(19058U);
    msg.setSourceEntity(215U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(53U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.361216390661);
    msg.setSource(59383U);
    msg.setSourceEntity(134U);
    msg.setDestination(25539U);
    msg.setDestinationEntity(131U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.515930163112);
    msg.setSource(62710U);
    msg.setSourceEntity(200U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(13U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.756891758431);
    msg.setSource(10295U);
    msg.setSourceEntity(184U);
    msg.setDestination(5299U);
    msg.setDestinationEntity(124U);
    msg.total_steps = 53U;
    msg.step_number = 46U;
    msg.step.assign("COBUFGBREETVWTSOUSFTSJJQIMOQPWRLEJMHQYPPXHWOYEWFDXALERQGRUKTS");
    msg.flags = 114U;

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
    msg.setTimeStamp(0.873058711671);
    msg.setSource(17217U);
    msg.setSourceEntity(71U);
    msg.setDestination(59310U);
    msg.setDestinationEntity(36U);
    msg.total_steps = 195U;
    msg.step_number = 240U;
    msg.step.assign("MMQKQNIGMDLMIYODOSNSMTCWNVQXXYFEACUEAYRLBKLKXGLSUCEEZGTPDTIIOXDHSJJSMMBFXRSQHANQQGHHAYPBLZADCURLSQTGBAQNBPXTNOWKIBTWUXFRNCWPZDYATPFWZZJXRWRJFOUJIZPXVQANKXLLSWDWJHRJYGTWHEHNOOCIPODBBTVAGEVUHYMZFZFMKU");
    msg.flags = 67U;

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
    msg.setTimeStamp(0.696341140902);
    msg.setSource(41615U);
    msg.setSourceEntity(143U);
    msg.setDestination(54872U);
    msg.setDestinationEntity(16U);
    msg.total_steps = 35U;
    msg.step_number = 202U;
    msg.step.assign("LTNIQHDKRNXXNZEVOPAFNLUGMXQARLFEZXECYY");
    msg.flags = 132U;

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
    msg.setTimeStamp(0.290818044559);
    msg.setSource(21924U);
    msg.setSourceEntity(198U);
    msg.setDestination(13944U);
    msg.setDestinationEntity(171U);
    msg.state = 235U;
    msg.error.assign("BNAJGOENQVMYIKZJKMGHTXKFPYKCUMUJLQCWDFRDENXDAGWLOLWVWGWJHMIYCFPJGCQTECKCPUDSGZMDQRCHEOIGQQFLUVIONTFBWBFPSRUXRARECUNRVPJOTSUXUAZZDYHBFYNSBPLTAO");

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
    msg.setTimeStamp(0.977240889441);
    msg.setSource(21618U);
    msg.setSourceEntity(131U);
    msg.setDestination(49161U);
    msg.setDestinationEntity(107U);
    msg.state = 113U;
    msg.error.assign("XDNLJEUZAZDDAJUADB");

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
    msg.setTimeStamp(0.57372533146);
    msg.setSource(15204U);
    msg.setSourceEntity(200U);
    msg.setDestination(5844U);
    msg.setDestinationEntity(38U);
    msg.state = 157U;
    msg.error.assign("GCGDISHQFNWJCXTKRTTAIQ");

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
    msg.setTimeStamp(0.49920332493);
    msg.setSource(20368U);
    msg.setSourceEntity(225U);
    msg.setDestination(6104U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.91002498596);
    msg.setSource(26523U);
    msg.setSourceEntity(110U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.822428096511);
    msg.setSource(45922U);
    msg.setSourceEntity(60U);
    msg.setDestination(33907U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.316033864443);
    msg.setSource(49385U);
    msg.setSourceEntity(30U);
    msg.setDestination(40713U);
    msg.setDestinationEntity(157U);
    msg.op = 250U;
    msg.speed_min = 0.0906769909429;
    msg.speed_max = 0.260636439003;
    msg.long_accel = 0.957271808972;
    msg.alt_max_msl = 0.963214426232;
    msg.dive_fraction_max = 0.406670845268;
    msg.climb_fraction_max = 0.184549242917;
    msg.bank_max = 0.0305639318274;
    msg.p_max = 0.922176223143;
    msg.pitch_min = 0.0506512849315;
    msg.pitch_max = 0.876552510882;
    msg.q_max = 0.749233664206;
    msg.g_min = 0.401121266581;
    msg.g_max = 0.240990002701;
    msg.g_lat_max = 0.431555210375;
    msg.rpm_min = 0.377414977999;
    msg.rpm_max = 0.538918181004;
    msg.rpm_rate_max = 0.127903994389;

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
    msg.setTimeStamp(0.950529287004);
    msg.setSource(38750U);
    msg.setSourceEntity(166U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(36U);
    msg.op = 157U;
    msg.speed_min = 0.977856733705;
    msg.speed_max = 0.99905276656;
    msg.long_accel = 0.722365116223;
    msg.alt_max_msl = 0.374074063656;
    msg.dive_fraction_max = 0.340594170974;
    msg.climb_fraction_max = 0.407351184178;
    msg.bank_max = 0.188762085637;
    msg.p_max = 0.867482716469;
    msg.pitch_min = 0.653094161705;
    msg.pitch_max = 0.600277103793;
    msg.q_max = 0.860946970663;
    msg.g_min = 0.137614897035;
    msg.g_max = 0.111423815459;
    msg.g_lat_max = 0.525519490407;
    msg.rpm_min = 0.190044105815;
    msg.rpm_max = 0.207015216951;
    msg.rpm_rate_max = 0.511756867561;

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
    msg.setTimeStamp(0.0611333084899);
    msg.setSource(54796U);
    msg.setSourceEntity(226U);
    msg.setDestination(5878U);
    msg.setDestinationEntity(133U);
    msg.op = 88U;
    msg.speed_min = 0.0358363546961;
    msg.speed_max = 0.173556819986;
    msg.long_accel = 0.630654577698;
    msg.alt_max_msl = 0.882720460807;
    msg.dive_fraction_max = 0.874319106327;
    msg.climb_fraction_max = 0.21700229443;
    msg.bank_max = 0.199355345756;
    msg.p_max = 0.632482194613;
    msg.pitch_min = 0.0500247867863;
    msg.pitch_max = 0.00386961267092;
    msg.q_max = 0.288698697931;
    msg.g_min = 0.994683441545;
    msg.g_max = 0.301467173825;
    msg.g_lat_max = 0.695979537035;
    msg.rpm_min = 0.826327954664;
    msg.rpm_max = 0.230096465351;
    msg.rpm_rate_max = 0.632712678751;

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
    msg.setTimeStamp(0.518665693491);
    msg.setSource(35631U);
    msg.setSourceEntity(235U);
    msg.setDestination(33570U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.732095732739);
    msg.setSource(59302U);
    msg.setSourceEntity(157U);
    msg.setDestination(50816U);
    msg.setDestinationEntity(112U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("QYCGGMPPCPKQPVSOQWIGLQYLVLGHVABCSWEDDAYWEGICCRUFNAEBNSNUWBBSMNFBWYKKJEHVWAIOBAARRRKLIXXRAQYSJCZFRVYEZXZJCQTGLMZOZUZEMGXWETTZDHGZYOMJKBUHGUTBPKDYJJIDSFX");
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
    msg.setTimeStamp(0.379052250495);
    msg.setSource(17117U);
    msg.setSourceEntity(230U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.329423186717);
    msg.setSource(3064U);
    msg.setSourceEntity(13U);
    msg.setDestination(11694U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.115420637988;
    msg.lon = 0.841092351312;
    msg.height = 0.255499507982;
    msg.x = 0.209709332099;
    msg.y = 0.689752842671;
    msg.z = 0.0422776011198;
    msg.phi = 0.447500960646;
    msg.theta = 0.949732505184;
    msg.psi = 0.710170733653;
    msg.u = 0.303061877911;
    msg.v = 0.703868236555;
    msg.w = 0.381521306064;
    msg.p = 0.762682487569;
    msg.q = 0.753864709381;
    msg.r = 0.796442176116;
    msg.svx = 0.423502768698;
    msg.svy = 0.851580349845;
    msg.svz = 0.967942018519;

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
    msg.setTimeStamp(0.279464340392);
    msg.setSource(42655U);
    msg.setSourceEntity(35U);
    msg.setDestination(48485U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.0431965015062;
    msg.lon = 0.760240002464;
    msg.height = 0.38602588616;
    msg.x = 0.415566645406;
    msg.y = 0.833479519614;
    msg.z = 0.707813072629;
    msg.phi = 0.315018887686;
    msg.theta = 0.92054840192;
    msg.psi = 0.0619293136316;
    msg.u = 0.385226793743;
    msg.v = 0.692420373713;
    msg.w = 0.156526592651;
    msg.p = 0.198649100621;
    msg.q = 0.339144100882;
    msg.r = 0.563352752147;
    msg.svx = 0.89244716569;
    msg.svy = 0.984121056174;
    msg.svz = 0.272139773525;

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
    msg.setTimeStamp(0.860527526779);
    msg.setSource(58846U);
    msg.setSourceEntity(148U);
    msg.setDestination(9837U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.547676980709;
    msg.lon = 0.0955602967876;
    msg.height = 0.650045024644;
    msg.x = 0.996112990762;
    msg.y = 0.29366788031;
    msg.z = 0.854964899271;
    msg.phi = 0.914086301553;
    msg.theta = 0.822513195794;
    msg.psi = 0.18964171677;
    msg.u = 0.991822746628;
    msg.v = 0.609667019403;
    msg.w = 0.996113615938;
    msg.p = 0.461693028385;
    msg.q = 0.380733384307;
    msg.r = 0.842631734657;
    msg.svx = 0.560716140442;
    msg.svy = 0.465105669451;
    msg.svz = 0.704545165056;

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
    msg.setTimeStamp(0.324702195435);
    msg.setSource(59653U);
    msg.setSourceEntity(136U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(54U);
    msg.op = 167U;
    msg.entities.assign("RZSCUERHGQNWEZMILGSNOOMHZRAGMQWMQLCKAK");

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
    msg.setTimeStamp(0.767677756224);
    msg.setSource(29533U);
    msg.setSourceEntity(118U);
    msg.setDestination(28121U);
    msg.setDestinationEntity(224U);
    msg.op = 21U;
    msg.entities.assign("OYEMXTWCZAGCZFDKFJJIPUBSNZBDPIEUYUYQMPGXTPNVROUFIOAFYUJWVTRZKIJMHRZQIFKJOAVOPMVICEEWRQNEBPXMFLLGWIWYTDRAQSFQCHLXNKLSOBZWXVELJTVODVHZSDMACGHOGTGDLEHUXBFQXZBCVPBHNUTIFMUHGYWKLZXSYSVYRUIDLMCBHSENYVNHLXKTSJAKHKDCBPSQRLINTWAG");

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
    msg.setTimeStamp(0.424566615614);
    msg.setSource(49945U);
    msg.setSourceEntity(20U);
    msg.setDestination(48253U);
    msg.setDestinationEntity(98U);
    msg.op = 162U;
    msg.entities.assign("KSTDJUZNJNTMZIDISCFSEFALCMJJDBAQQYPZHV");

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
    msg.setTimeStamp(0.844464231275);
    msg.setSource(65499U);
    msg.setSourceEntity(251U);
    msg.setDestination(36740U);
    msg.setDestinationEntity(28U);
    msg.type = 212U;
    msg.speed = 42344U;
    const char tmp_msg_0[] = {122, 83, -116, 4, 114, -76, 61, -17, -47, 25, -30, 78, -69, 121, -94, -84, -53, -85, 70, -52, -52, 78, 62, -76, -36, -21, 9, -31, -24, -6, -15, 51, 100, -94, 70, 27, 74, -77, 28, 44, -120, -109, 115, 7, 10, 91, 37, 97, -87, -78, -29, -68, 76, 104, -112, -80, 70, -18, 91, 11, -106, 125, -121, 102, -69, 118, 39, -104, 27, -9, 61, 84, 76, 116, 47, -97, -72, -1, -46, 51, -31, -11, -5, -90, 89, 113, -47, -78, 101, 65, 23, -126, -19, 37, 81, 5, 71, -48, 40, -35, 36, 65, -119, -101, 89, -62, 114, 11, -110, 34, 123, 14, -44, -28, 24, -56, -19, 9, -25, -36, 70, -51, 122, 73, 123, 36, 107, -123, -104, -91, -27, 28, 97, -73, -59, -71, -128, -7, -110, 4, 65, 27, -35, 20, 19, 8, 76, 50, 60, 103, 79, 81, -95, 97, 93, 8, 59, -63, 93, 40, -51, 80, 109, 81, -43, 43, 120, -49, -123, -100, -46, 72, 3, 96, -70, 13, -67, 78, 75, -83, 0, -27, -74, -15, -15, -84, -70, -11, -48, -29, -7, -11, -34, -14, -72, -96, 65, -50, -25, 84, -6, 16, -112, -14, -47, -78, 61, -70, 117, 42, -67, -100, -3, -38, 66, -4, 72, -65, -46, -115, 115, 59, 13, -32, -112, 4, -78, -73, -15, 126, 29, 21, 51, -101, 35};
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
    msg.setTimeStamp(0.380412548752);
    msg.setSource(17924U);
    msg.setSourceEntity(209U);
    msg.setDestination(47794U);
    msg.setDestinationEntity(188U);
    msg.type = 62U;
    msg.speed = 62150U;
    const char tmp_msg_0[] = {118, -80, -124, 126, 82, -68, -72, -38, 93, 37, -21, -124, 97, 50, -67, 107, -126, -8, -95, 14, 53, -67, -8, -39, -10, 121, -109, -15, 13, 117, -113, 121, -19, -36, -21, 79, 65, -93, -49, 79, -24, 110, -1, 64, 36, 34, 73, 102, 22, -121, -81, -124, -50, -117, 17, 17, -112, -83, -99, -40, -93, -99, -108, -31, -79, -95, -115, 18, -103, 21, -121, 58, 105, -60, 83, 116, -105, 110, -88, 78, 56, -115, -74, -38, -54, -43, -65, 39, 83, -43, -128, -86, -121, 81, 12, 109, 69, 8, -107, 112, 115, 12, -17, 45, -121, 70, -6, -15, 97, 47, 96, 29, 36, 100, 80, -14, 21, 106, -79, -104, 8, 66, -16, 117, -8, 14, -48, -24, 106, -58, -90, 80, -106, -53, 55, 105, 116, 59, 90, 13, 20, -95, -61, -76, 37, -15, 31, 91, -60, -112, 92, -31, 114, 52, 58, 17, 13, -24, -84, 3, 90, -116, -113, -85, 24, 63, 121, -64, -115, -35, 79, -92, -88, -68, 111, 117, 85, -92, 119, 43, -12, 78, -22, 120, -77, 88, -75, -43, 100, -116, -12, 20, 106, 9, 47, -32, 104, 62, 114, -98, -46, 102, 84, 31, 82, -24, -89, 31, 80, -7, -24, 104, -87, -24, 109, 56, -102, 6, -44, -109, 76, 51, 98, -25, -42, 54};
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
    msg.setTimeStamp(0.689430302081);
    msg.setSource(42168U);
    msg.setSourceEntity(135U);
    msg.setDestination(33549U);
    msg.setDestinationEntity(206U);
    msg.type = 80U;
    msg.speed = 12155U;
    const char tmp_msg_0[] = {24, 116, -82, -8, 67, -117, 67, -63, 96, -109, -59, -38, -77, 46, -45, 50, 26, -41, -64, -46, 56, 45, -124, 89, -41, -56, 13, 22, -125, 76, 114, 36, -64, 58, 63, -25, -127, 53, -121, 28, -53, -78, -90, -59, -79, -11, 78, 76, -24, 36, -40, -101, 8, 107, -19, -11, -105, 49, -10, -92, 48, 124, -32, -17, -71, 6, 35, 96, 7, 18, 79, -67, 15, -30, 2, 126, -35, 70, -47, -25, -38, 51, 124, -21, 51, 11, 58, 25, 9, 74, 103, -118, -12, 52, -94, -61, 106, -50, -33, 120, 37, 5, 62, 2, -4, 108, 110, -56, -73, 105, -103, 47, -28, -57, -110, 68, 71, -51, -102, 101, -100, 53, 68, -105, -7, -100, -79, -101, 92, 83, 16, -63, 29, -77, 117, 116, 18, -108, 27, 71, -63, -35, -25, 39, 9, 48, 94};
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
    msg.setTimeStamp(0.099643520104);
    msg.setSource(63591U);
    msg.setSourceEntity(10U);
    msg.setDestination(15177U);
    msg.setDestinationEntity(193U);
    msg.op = 232U;
    msg.tas2acc_pgain = 0.639692240597;
    msg.bank2p_pgain = 0.166464997266;

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
    msg.setTimeStamp(0.691139626741);
    msg.setSource(18199U);
    msg.setSourceEntity(60U);
    msg.setDestination(60166U);
    msg.setDestinationEntity(139U);
    msg.op = 158U;
    msg.tas2acc_pgain = 0.54883343003;
    msg.bank2p_pgain = 0.137877540866;

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
    msg.setTimeStamp(0.288277366736);
    msg.setSource(30614U);
    msg.setSourceEntity(143U);
    msg.setDestination(45908U);
    msg.setDestinationEntity(130U);
    msg.op = 97U;
    msg.tas2acc_pgain = 0.102387121637;
    msg.bank2p_pgain = 0.795944103911;

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
    msg.setTimeStamp(0.936486844918);
    msg.setSource(14951U);
    msg.setSourceEntity(238U);
    msg.setDestination(9199U);
    msg.setDestinationEntity(186U);
    msg.available = 75058280U;
    msg.value = 75U;

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
    msg.setTimeStamp(0.0687507284651);
    msg.setSource(38251U);
    msg.setSourceEntity(21U);
    msg.setDestination(41527U);
    msg.setDestinationEntity(106U);
    msg.available = 2362517911U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.0997785441472);
    msg.setSource(35058U);
    msg.setSourceEntity(187U);
    msg.setDestination(58932U);
    msg.setDestinationEntity(175U);
    msg.available = 3468761582U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.40537048595);
    msg.setSource(56100U);
    msg.setSourceEntity(100U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(185U);
    msg.op = 150U;
    msg.snapshot.assign("MJBSLKKRVOGWESNITPGWZLVFTOKCYTNQZUCBXNXLVHCSRPZALOJKDEWIOAOIPUJWGRUPUXEJVAWYFYFSXZZYWZHTURHANIPBFMNOCPKHBMBRBGQVIHJTVYTYNEQBTCCBP");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 131U;
    tmp_msg_0.goal_id.assign("KTYMYZHBZWZCQJSIULSLACPVDFEODAJHHPGPBAGCYSBBRSKMZNBVNMWXLOJJPNRFEGGQGAKTDTWQUXGLHHWBSFHVOAQARFTNWQTVPKKIEOITXMKLCMUAPUHIJYNLIUCYDTRQKRZRSECVVUJEZSMPOHDIQQMYHFZUTGJRTPIKECEFCCLOJSTY");
    tmp_msg_0.goal_xml.assign("SHUYQOTMEDSQUMBAJVPCFPGBICTJQYZZPMDBFOOJSGJZHUQXLQQEUFAUSVCJTVZAURPQYRRFYRNFEIATLADXJWELTGCTZNQHDVVMARWNOENGPAOLSCVIWWGORHSKNJMHZGIOGFAJXIEMLUHPROUYNKYIBHKFMNLOZXZFDRLXNZCZDDTXGSBSWIRQ");
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
    msg.setTimeStamp(0.401481975325);
    msg.setSource(47553U);
    msg.setSourceEntity(129U);
    msg.setDestination(48371U);
    msg.setDestinationEntity(231U);
    msg.op = 88U;
    msg.snapshot.assign("IINDAOEOPWGZOPMQFNYKLLSBGLYFCMZHEHRIMXVBKXZKKIUDFEUURJJGSIJSFNCALXMXVPNLKMCXETNTBWWDWPTDYCRFPQUVEWTCQLSBCYKSIMYHBXQFRVSNGYWGNYOBBSHZYOOTAQNDOGNMXEDKGZQMSFMZOUCCWLPRVJUOBBYQVGWQLTAKXFRTPAZVQGCEZJTIHJWWFJVH");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.993884498527;
    tmp_msg_0.speed_units = 243U;
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
    msg.setTimeStamp(0.278783175456);
    msg.setSource(3943U);
    msg.setSourceEntity(138U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(101U);
    msg.op = 96U;
    msg.snapshot.assign("MQYIDZFOWZBNAQUVRELSNAJZYJUCUASWYLWFUPYOGDDGANTTPMJEDBJRMT");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 58U;
    tmp_msg_0.goal_id.assign("FOJJREHXYCRQSHUZOXCULKZALCQKXCWOMVPJDINRYUDYJBTZUOMVEJXAUSXZBQCCGUPDH");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("VPUVTNFWMBAEYCBUBFCTNEWNJYYZGU");
    tmp_tmp_msg_0_0.predicate.assign("TAHJRLEXDXLJXHVFCUTMYVNJYHOJAPZCBWTLPTCLYKFTOYBHQABWXDMNWJWDVHTMOBZLLKWGGWHQLUXWSYAKKUATQMTGBZQZCDPNNETIPGMUOAHVFYQMLYKPPMPVPAURZJCISI");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.725019226506);
    msg.setSource(11950U);
    msg.setSourceEntity(90U);
    msg.setDestination(21354U);
    msg.setDestinationEntity(40U);
    msg.op = 66U;
    msg.name.assign("CWRHYNGVKVBJRKJZZCUPIZTCFXGOSMLRCTFUYBCOBWZGWCRHWAQHHCPOVLVRLCBABZTAYAYGGMPHPQSFHTFPZITRM");

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
    msg.setTimeStamp(0.10411566528);
    msg.setSource(36218U);
    msg.setSourceEntity(145U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(72U);
    msg.op = 16U;
    msg.name.assign("CJIDMPZDMIVWOKGDRBHXQYBGVYJBQFTYBMKANBQKGPTKBALGMQMSTFMMVPCRIXUKIUIHOXRWWAJNNDRJ");

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
    msg.setTimeStamp(0.323502334835);
    msg.setSource(34238U);
    msg.setSourceEntity(131U);
    msg.setDestination(35368U);
    msg.setDestinationEntity(92U);
    msg.op = 239U;
    msg.name.assign("UAHMFSVNURVHRXKYPFYYRKESQOOEOOMTLHCDTRXKHBWWNLSOUQTFHRFNJIEPVZXQVBREVGMLRRDPZTGSPFCQINAFTAYAPDJDXWCLGQNPLCBAQEZTMGGUBGWQZPVCDZJPKLOSCLDTGWMDZTSAJDMIUOLHSZNXZBWJLCHUBKZNSCMWLAH");

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
    msg.setTimeStamp(0.421147214063);
    msg.setSource(46399U);
    msg.setSourceEntity(20U);
    msg.setDestination(38533U);
    msg.setDestinationEntity(79U);
    msg.type = 95U;
    msg.htime = 0.434808933708;
    msg.context.assign("ESILUIHTAAHRDCWCNFKQVJPYRZCRBZBYGKPEIDQYIEMOOLAWUBGXIAMTIGZKJWEWAFXTJMJTYSPUMFLZNKVLEPDHDWZUZWUTZTHLQHNDGFZDQMLTYRLETEYWUBPVYKCVMCUQOFQNYVLGOOOUTWGTAFNSGUBKQBESAH");
    msg.text.assign("HEXRGYLPWMTHGDKHCJFMYHMSHPQHYTIYCDAARCEYBSIGSWXEAMHC");

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
    msg.setTimeStamp(0.776568184727);
    msg.setSource(23058U);
    msg.setSourceEntity(56U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(158U);
    msg.type = 251U;
    msg.htime = 0.961656934889;
    msg.context.assign("UZTXRCJYYJZDEWMVRHDCWAGR");
    msg.text.assign("YQWNIFKOUIAOXKLXCNZFCMFRSHMRVICJHADPBOJNRGGPNBSFCPNMVUUIMNLAOXXEOE");

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
    msg.setTimeStamp(0.116733599385);
    msg.setSource(35230U);
    msg.setSourceEntity(61U);
    msg.setDestination(64317U);
    msg.setDestinationEntity(33U);
    msg.type = 220U;
    msg.htime = 0.083731808014;
    msg.context.assign("EIFHGYZEBMLSYANOJJMXTQCRBBXIAHWZEJQLBEPEFJWVGFIZCHSSDMUQVXHBFOUCGDSPHWQYKAVKLWINOLJCXJMIQLRKSBFSNHZXZAYWIYGJMBGITTQRNDBTPOUPUVPEBQSOWFXPSDEAELMLZI");
    msg.text.assign("IPDKYIKZBTQFQZGBOMHTAHRJSRECHDOKSDBBGLWJLMEMVOAAFGKKDNHXQXCTBBIRZVVMIEPXLJQWXENHYXKRHBHAAPFTYQBXSROUDZIWCVTSMWGFJQGALVAWCS");

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
    msg.setTimeStamp(0.927217251635);
    msg.setSource(56766U);
    msg.setSourceEntity(250U);
    msg.setDestination(64848U);
    msg.setDestinationEntity(78U);
    msg.command = 231U;
    msg.htime = 0.335059569147;

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
    msg.setTimeStamp(0.152574979153);
    msg.setSource(49164U);
    msg.setSourceEntity(92U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(196U);
    msg.command = 169U;
    msg.htime = 0.0989061125543;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 45U;
    tmp_msg_0.htime = 0.584769318962;
    tmp_msg_0.context.assign("YSDXDGINQQHFEWOELACPWDGXIXISRKYUNJAMXTOJBSBSVOVFWCKQKVDYLMVQYCRTWWHJRFXEZVLGAYNWGSFDYWJPPMXBNULFZGSJ");
    tmp_msg_0.text.assign("DJLZGOXVJBAJEBYSADHBGQWQMHTKXJXBEULJINSHKALXHVESAIARGZJQUWRNTJEETIZDYWCZRCOUKLSRLQUMPGHYWSLFGFPCEVVLTVPBUULITOOBGGVXNFSMFODANYRXCAXWCICIDNYNUQMPQHUCVKTNINWKLPRXUOOZDI");
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
    msg.setTimeStamp(0.0928549722591);
    msg.setSource(60114U);
    msg.setSourceEntity(185U);
    msg.setDestination(5525U);
    msg.setDestinationEntity(115U);
    msg.command = 67U;
    msg.htime = 0.878799712664;

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
    msg.setTimeStamp(0.318981568536);
    msg.setSource(64968U);
    msg.setSourceEntity(60U);
    msg.setDestination(16360U);
    msg.setDestinationEntity(15U);
    msg.op = 187U;
    msg.file.assign("VJIKATRLDZDCENOKGUYSUBISCHENRMSYSPRDGEALBLXNONRYILYCFXDTZGVKOVGYQFAUHJATQZLWVRGUKFQZKDIFCPFGTZPHSWKXD");

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
    msg.setTimeStamp(0.520629858749);
    msg.setSource(18092U);
    msg.setSourceEntity(76U);
    msg.setDestination(42744U);
    msg.setDestinationEntity(109U);
    msg.op = 22U;
    msg.file.assign("XPFDKMYPXXJUJKGUGOSRDXDEALEOKFTUHGYOHUMKYBXCNQCGSIGBSBDYAJCCMMVRBMKWHYPJRLRTPCXDREYNNVSEWHAIJLTZ");

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
    msg.setTimeStamp(0.387246108808);
    msg.setSource(28839U);
    msg.setSourceEntity(79U);
    msg.setDestination(46916U);
    msg.setDestinationEntity(180U);
    msg.op = 217U;
    msg.file.assign("CXSNIBEQXGRFEKAHWRPSYWUQMXXJKBWESJGLWBQCPMVNMEWSJJJXANSNVVVOTIMFGRHMPMLIUUBOFUCFOJHNKUAZPZVNNJAOQRYDIMWMCZJBYOTDILALOALHQTFDKVIPSYBIWFSOGCAIZTCLYKUF");

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
    msg.setTimeStamp(0.911094905389);
    msg.setSource(39645U);
    msg.setSourceEntity(84U);
    msg.setDestination(64690U);
    msg.setDestinationEntity(232U);
    msg.op = 132U;
    msg.clock = 0.914773425215;
    msg.tz = 83;

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
    msg.setTimeStamp(0.824299129132);
    msg.setSource(3324U);
    msg.setSourceEntity(122U);
    msg.setDestination(8794U);
    msg.setDestinationEntity(181U);
    msg.op = 230U;
    msg.clock = 0.102048589016;
    msg.tz = 24;

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
    msg.setTimeStamp(0.295930806402);
    msg.setSource(41184U);
    msg.setSourceEntity(119U);
    msg.setDestination(47446U);
    msg.setDestinationEntity(137U);
    msg.op = 59U;
    msg.clock = 0.199695700002;
    msg.tz = -81;

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
    msg.setTimeStamp(0.963344258337);
    msg.setSource(20430U);
    msg.setSourceEntity(217U);
    msg.setDestination(9519U);
    msg.setDestinationEntity(32U);
    msg.conductivity = 0.232161709227;
    msg.temperature = 0.402398433245;
    msg.depth = 0.0288494916874;

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
    msg.setTimeStamp(0.0580885411692);
    msg.setSource(25164U);
    msg.setSourceEntity(149U);
    msg.setDestination(26383U);
    msg.setDestinationEntity(68U);
    msg.conductivity = 0.705299230628;
    msg.temperature = 0.297853865779;
    msg.depth = 0.932038690485;

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
    msg.setTimeStamp(0.472511705807);
    msg.setSource(39902U);
    msg.setSourceEntity(4U);
    msg.setDestination(14000U);
    msg.setDestinationEntity(61U);
    msg.conductivity = 0.197692923548;
    msg.temperature = 0.343801797252;
    msg.depth = 0.901856178585;

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
    msg.setTimeStamp(0.905326570706);
    msg.setSource(61834U);
    msg.setSourceEntity(157U);
    msg.setDestination(17522U);
    msg.setDestinationEntity(188U);
    msg.altitude = 0.745478501863;
    msg.roll = 30508U;
    msg.pitch = 54711U;
    msg.yaw = 61363U;
    msg.speed = 14450;

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
    msg.setTimeStamp(0.956444989472);
    msg.setSource(43213U);
    msg.setSourceEntity(223U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(70U);
    msg.altitude = 0.279801294688;
    msg.roll = 57359U;
    msg.pitch = 61537U;
    msg.yaw = 7182U;
    msg.speed = 14095;

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
    msg.setTimeStamp(0.664964052417);
    msg.setSource(33353U);
    msg.setSourceEntity(150U);
    msg.setDestination(51298U);
    msg.setDestinationEntity(43U);
    msg.altitude = 0.768116247932;
    msg.roll = 5030U;
    msg.pitch = 2620U;
    msg.yaw = 4892U;
    msg.speed = -2816;

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
    msg.setTimeStamp(0.911825058885);
    msg.setSource(8891U);
    msg.setSourceEntity(84U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(111U);
    msg.altitude = 0.3395146062;
    msg.width = 0.969846683983;
    msg.length = 0.233449985463;
    msg.bearing = 0.0268878968426;
    msg.pxl = 2738;
    msg.encoding = 182U;
    const char tmp_msg_0[] = {13, 65, 20, -56, -32, -32, -63, -83, -40, -27, -31, -41, 87, 108, -93, 33, 38, 12, -62, -110, 69, -59, -34, -66, -45, -83, -95, 94, 96, -107, -41, 6, 81, -35, 1, -28, 19, -104, 123, -33, -110, -5, 92, -11, 80, -37, -120, 30, 79, 38, 92, 109, 54, -37, 30, 81, -61, -83, 60, 46, -74, -32, 34, 78, -73, -57, 11, 108, 50, 111, -10, -98, -116, -103, -105, 39, 96, 110, 23, 36, 121, -17, -96, -5, -80, 94, 19, 19, -62, -20, 45, 56, -111, 5, 119, 38, 107, -21, 15, 43, 50, 112, 123, -64, 109, 97, 65, 23, -23};
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
    msg.setTimeStamp(0.501407772955);
    msg.setSource(36651U);
    msg.setSourceEntity(204U);
    msg.setDestination(36501U);
    msg.setDestinationEntity(97U);
    msg.altitude = 0.323211368317;
    msg.width = 0.778131633353;
    msg.length = 0.749758996116;
    msg.bearing = 0.660609463662;
    msg.pxl = -31230;
    msg.encoding = 111U;
    const char tmp_msg_0[] = {-15, 78, 123, -67, -106, -37, 3, -26, 68, -86, -40, -7, 111, -91, -32, -88, -60, 84, 105, -11, -52, -90, -60, 112, 31, -75, 100, 18, -10, -103, 33, -1, 111, -34, -3, -69, -17, 27, 53, -7, -34, -88, -31, -50, -118, 31, 0, -93, 114, 52, 65, -73, 30, 56, 108, 123, 97, 30, 67, -31, 103, 64, 114, -99, -27, 36, -115, -21, 84, -6, -96, -20, -59, 52, 15, 78, -84, 110, -106, -42, 64, 61, -80, 57, -105, 35, -87, -103, 14, 45, 10, -89, 85, -104, 81, -84, -120, 28, -94, -117, 80, 125, 94, -71, -53, 107, -90, -59, 47, 44, -75};
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
    msg.setTimeStamp(0.744386815714);
    msg.setSource(62340U);
    msg.setSourceEntity(10U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.804149227465;
    msg.width = 0.107737069928;
    msg.length = 0.560633858299;
    msg.bearing = 0.324096289739;
    msg.pxl = -1815;
    msg.encoding = 50U;
    const char tmp_msg_0[] = {113, 25, 98, 95, 105, 75, -82, 44, 13, 125, -22, 120, 88, -93, -21, 40, -15, -51, 77, -69, -58, 125, -85, 44, 37, -101, 111, -47, 8, -9, 116, 31, -55, -38, 9, 81, -76, -48, -17, 98, 11, 76, -92, 14, 96, -53, -52, 15, -41, 31, -73, -102, -106, -125, 70, 76, 30, 88, 12, -4, 102, 55, 46, -11, 56, -46, -60, 15, -61, -24, -87, -61, -11, -62, 80, -114, -110, -37, -87, 68, -116, 83, 44, 101, 80, -108, -76, 124, -63, 62, 101, -33, 19, -102, 58, -2, -89, -11, 44, 119, -85, -15, -101, -15, -117, 50, 80, -122, -65, -105, 9, 104, -45, 4, 52, -84, -92, -32, 37, -45, 44, -126, -15, -126, 95, 67, 19, -42, 3, 91, -91, -2, -26, 10, 119, -25, 94, 47, -33, -46, 27, -90, 118, 85, -53, 107, -95, -92, 123, 33, -89, -13, -6, -122, -80, -107, -20, 94, 28, -46, -51, 54, -17, -47, 121, 106, 7, -4, -65, 62, 110, 107, 23, -120, 76, -34, 52, 38, 65, -70, -84, -17, 84, -103, 74, 73, 36, -13, -87, -56, -35, 30, -126, 37, -80, 125, 2, -8, 36, -39, 89, 0, -68, -69, 104, -87, 70, -49, 84, -82, -32, 81};
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
    msg.setTimeStamp(0.506131596882);
    msg.setSource(26055U);
    msg.setSourceEntity(64U);
    msg.setDestination(34849U);
    msg.setDestinationEntity(138U);
    msg.text.assign("WHBWVVAURFLFJMQOQSJIHHLSJMDSETRMXDRNWDYUONDVMWIXFFEMNEGGGZIZKQBPQMQOZBKRJIWZMWGAWCOVCAEPKDLIYBDXUDQCSYHCHVVMHDYXUGADOZFCEBELQLOHTJJIHJLFGURPUXZKSXOUIXTAIAOVAHNGPBBGYYXZCRWTCNQ");
    msg.type = 239U;

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
    msg.setTimeStamp(0.0758458380118);
    msg.setSource(13339U);
    msg.setSourceEntity(74U);
    msg.setDestination(34347U);
    msg.setDestinationEntity(102U);
    msg.text.assign("LXHXLCMKCOBGEJQWKDFARWBCLPUZYUPBVSIPBTMIIUFYHNLADQFSTQWOBKONSARWQDOZIKEVZEHBSILDFGUGYGAANOAHMUVMZXYTBJEQWRGZVLRLOHBDHYFSVSKFTUVRIEXQJWHZVAWMOHNKXJYRCGRSZERYKPSTPEUCPAUPNOIEHQTIXLGMZZEJRAWQKTPDVDNDDQYMNCFGPBCLIRNXYQKGCBITGMWD");
    msg.type = 13U;

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
    msg.setTimeStamp(0.912466314903);
    msg.setSource(30956U);
    msg.setSourceEntity(11U);
    msg.setDestination(37348U);
    msg.setDestinationEntity(146U);
    msg.text.assign("HLPFAFXMTEJDSBNLMOQJKEWJTHQCZSIBMWBJBDXVFOQRPOGYGHBRNRZPZSXKRQMHLYWOITNPADEINNDQFFMSMGMZWHXUVQXGWFGTRZWSJCCCPOXJQHBDAWPASEUVFYIYOUXUQMYGPLNTLEUOWNZCRTUEOIERRHJICUDGBJSKSVNWGHEAYDADVLMTBACIRGVHZQICKCXWXKOIQJKXCUAKEYFFIBEZPTLUPODLTSFVAVYKAMHYLTNS");
    msg.type = 218U;

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
    msg.setTimeStamp(0.676653201146);
    msg.setSource(9745U);
    msg.setSourceEntity(124U);
    msg.setDestination(3659U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.370575772081);
    msg.setSource(38992U);
    msg.setSourceEntity(197U);
    msg.setDestination(61965U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.912032838215);
    msg.setSource(20957U);
    msg.setSourceEntity(83U);
    msg.setDestination(64289U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.0738857344423);
    msg.setSource(20171U);
    msg.setSourceEntity(41U);
    msg.setDestination(52632U);
    msg.setDestinationEntity(91U);
    msg.sys_name.assign("EXDQFFXXYCDSOMXIDSWYPYGYAGPIAELNGSDEKNGZCEGFQYLFJXPCWQNVMBRGTWNTRGZWFSRBVBEUUXETICTDBQWJWJCGKTLFJTZYXYNIQSFUXBQIPKTHUAOKSSKQIOBZEHDJVMCWVJHGZRHKMBDAIPMTQUPMVMKCAONZVDCZLUROWOPSELRSEJVNOKRLAIJODKDCTRVZFMLESOYNUMURLXTGCWABKLBVHIBLFIXNMPRUHPHVHP");
    msg.sys_type = 61U;
    msg.owner = 15551U;
    msg.lat = 0.31833808034;
    msg.lon = 0.933142146122;
    msg.height = 0.125476885444;
    msg.services.assign("NQTAGERHDJBLMLDNTESTPFTBIKECKMOWTBASL");

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
    msg.setTimeStamp(0.144022563936);
    msg.setSource(48810U);
    msg.setSourceEntity(85U);
    msg.setDestination(21956U);
    msg.setDestinationEntity(200U);
    msg.sys_name.assign("QIMRWDAMSRAQHLLMXJOZJQWZONAQGPTLMJIIIMTFEQOKILBDDARUJYEYGNNKQSCARRZLAXXEKGHXMPYZGSQCTXZZNTUBUFOEOOEUIFWFHPUDGVGKHYAPSANSDVVJFSYXDPYTHWAPYJFWBNUQVCMTBPGJLVFZYOHRTXDUQESIJCQBUGBRJTO");
    msg.sys_type = 120U;
    msg.owner = 17980U;
    msg.lat = 0.974428861946;
    msg.lon = 0.0433761911122;
    msg.height = 0.492982094396;
    msg.services.assign("XIPLFEBVFUUHVMVEUVLWVCFIWRYDFJSYXXPXWEWWQINCKMVRJQPDUKRFOEQBGVWOWMKQTIMYRRPTKEZLBVSMTZUCDAQXJWTJSXQJKZPIMSFDTCLPGMPKBHIODTCGTIFUVACEBHDLEULNWOLGANBNGQGGHHKCEKLQMGZYQMHNHYOAZHSERKJCIYZAZFXXINBJORUAAZNSYYNYAFNBOS");

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
    msg.setTimeStamp(0.0146197051686);
    msg.setSource(24941U);
    msg.setSourceEntity(230U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(71U);
    msg.sys_name.assign("URHUHXCJLNPDIJWLIGINQXEXXGMSSTQKJXHRWBDHLZYUWZHGRMAYGCOQMRZLV");
    msg.sys_type = 4U;
    msg.owner = 63834U;
    msg.lat = 0.54974309977;
    msg.lon = 0.0471835080783;
    msg.height = 0.65524207271;
    msg.services.assign("YSLPAIPQKLRFRDAW");

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
    msg.setTimeStamp(0.542142326628);
    msg.setSource(20109U);
    msg.setSourceEntity(116U);
    msg.setDestination(27385U);
    msg.setDestinationEntity(173U);
    msg.service.assign("PGXVYBARFZWJSIIYYYMPEYZHFFQUPZEBODRISLYMNPVCWSUBVWOTUADGAUCQRENKKJLEJLBUGYDSQQWXEHSTMYNLTHANOCHVPKHUKECJNOLLEFDUXCPZQAQJUCRMFTNYQZVFPNOMIANEIPHCLLWBSDAGNMFZIBGRKSWTBTVC");
    msg.service_type = 215U;

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
    msg.setTimeStamp(0.0983222243947);
    msg.setSource(37378U);
    msg.setSourceEntity(127U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(156U);
    msg.service.assign("WYHRKDJMVOZJLBTZYLIGJHWDOPVKFIGEZSQAJWBDPPVRYJHQLXPYIMHLOWHAYHFXOHRWWTSCWFZQMOOXQMDRDEGJRWBXVSTLCOUFFQVYPZANSAXBNRIV");
    msg.service_type = 163U;

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
    msg.setTimeStamp(0.666978097686);
    msg.setSource(43417U);
    msg.setSourceEntity(208U);
    msg.setDestination(55499U);
    msg.setDestinationEntity(3U);
    msg.service.assign("UXEZGKEAYXKCOIUXECHYGMSPHRHVJLDPVKZOBLJNIIYFFWUZ");
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
    msg.setTimeStamp(0.133778428788);
    msg.setSource(50003U);
    msg.setSourceEntity(58U);
    msg.setDestination(12089U);
    msg.setDestinationEntity(201U);
    msg.value = 0.322642660246;

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
    msg.setTimeStamp(0.796613840359);
    msg.setSource(61614U);
    msg.setSourceEntity(204U);
    msg.setDestination(64643U);
    msg.setDestinationEntity(108U);
    msg.value = 0.475172684138;

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
    msg.setTimeStamp(0.363028846583);
    msg.setSource(25911U);
    msg.setSourceEntity(133U);
    msg.setDestination(63379U);
    msg.setDestinationEntity(133U);
    msg.value = 0.970418207974;

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
    msg.setTimeStamp(0.941867198703);
    msg.setSource(58573U);
    msg.setSourceEntity(87U);
    msg.setDestination(18921U);
    msg.setDestinationEntity(89U);
    msg.value = 0.398575255098;

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
    msg.setTimeStamp(0.0261414185633);
    msg.setSource(16867U);
    msg.setSourceEntity(236U);
    msg.setDestination(38054U);
    msg.setDestinationEntity(166U);
    msg.value = 0.183652789893;

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
    msg.setTimeStamp(0.0194079275705);
    msg.setSource(42946U);
    msg.setSourceEntity(90U);
    msg.setDestination(27176U);
    msg.setDestinationEntity(57U);
    msg.value = 0.226901493959;

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
    msg.setTimeStamp(0.949397630292);
    msg.setSource(18969U);
    msg.setSourceEntity(125U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(90U);
    msg.value = 0.561571812679;

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
    msg.setTimeStamp(0.965835644128);
    msg.setSource(53113U);
    msg.setSourceEntity(150U);
    msg.setDestination(15669U);
    msg.setDestinationEntity(40U);
    msg.value = 0.820249429392;

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
    msg.setTimeStamp(0.460268281634);
    msg.setSource(24885U);
    msg.setSourceEntity(251U);
    msg.setDestination(15073U);
    msg.setDestinationEntity(156U);
    msg.value = 0.686703505737;

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
    msg.setTimeStamp(0.413940563115);
    msg.setSource(37268U);
    msg.setSourceEntity(198U);
    msg.setDestination(22150U);
    msg.setDestinationEntity(174U);
    msg.number.assign("IUQOKTZSJCSYHXKGXPTBSBREDMTVGAJZDZFFVQRUYKTFGAVVKOANLEIMLWGTXXFPQBMQODWWSTRWAKJVNOQRALCEAIMQDWPLBECSNOCUPMWCZZUYRQUL");
    msg.timeout = 54582U;
    msg.contents.assign("ZODNSTOZFTWMDYSKGHJRTPAONFTHDTRCRXAKJYEMOJGUYHAWLIYMCRLROSTRLETFOEBUYJLSIVMDYUZBXSGSZNCEILBHHECUWUAVF");

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
    msg.setTimeStamp(0.44806860119);
    msg.setSource(7719U);
    msg.setSourceEntity(147U);
    msg.setDestination(38792U);
    msg.setDestinationEntity(145U);
    msg.number.assign("ALPMURQXKMFWINZMXMVZVJRFOKQOEWQYFBEKIOXNTJCHFQBPXPWOHKZSLXILJSUCZTOEUNVECTWSHMAQKUAUMGEBYNOLYGPZHIVQLDCMBJFMZJATOBHBZBATWXFNIRUDQSCHWDGDPYXNQGGXZGFATQQKRCJYSCUEIWRHVECRJURPKGBXLKOVUVOWKNROYIFLUYBK");
    msg.timeout = 65269U;
    msg.contents.assign("UDAEADGQFXUBYXZKMOMNTUKSLRPUPJIQNAZEJLSYRIEIZHZQKPSWSEIDGSFYIMHGOLBPLOLEJQQB");

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
    msg.setTimeStamp(0.179291535001);
    msg.setSource(31651U);
    msg.setSourceEntity(83U);
    msg.setDestination(41210U);
    msg.setDestinationEntity(73U);
    msg.number.assign("UWRSLFAQHCDT");
    msg.timeout = 62109U;
    msg.contents.assign("AGVJTIJLRHFHRARCZAPIFHBOWASDPMQOXQZBBJDBGCYFCFWQRIOMALMWDXVQZUEFHLNWPOKYXMEXQLXKDAAFFKOKQCUOHGIJTSMJKRMPBCJXDVXQNLGTNVVZBJNIPTONYUFYYHNEFSVYQKBGJUGIRTTIDCPDZSSLITGEWDIVOAEMKZSCLHZXBTKGJCCLSRWZPZJYUPDYVNBUHLVMXRGUEKRUDBXNUWMWYUHOSHNORVQPEIYMEWQCLTZAEWSKEP");

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
    msg.setTimeStamp(0.671747779329);
    msg.setSource(58711U);
    msg.setSourceEntity(86U);
    msg.setDestination(35478U);
    msg.setDestinationEntity(127U);
    msg.seq = 109757758U;
    msg.destination.assign("VERKJDVVLPQOVCAAXICOCTUZSQMRVXTINXYGKWMSJIKEDFOCWRBPOSBBGFUNUPOWWAAPZZGDYKXZPEJMCOZTXMAVZIQNWEGYXMTRLKSSVBUFILGQGHNSPDLIKQ");
    msg.timeout = 16619U;
    const char tmp_msg_0[] = {102, 99, 52, 36, -99, -23, 56, 60, 79, 89, -104, -93, 98, 75, -84, 41, 71, 43, -52, 117, 71, 72, 6, -97, 45, -67, 86, -109, -75, 51, 57, -91, 9, -61, 81, 109, 96, -13, 112, -28, 18, 69, -111, -66, 69, -102, -116, -1, -74, -11, 109, -49, 61, -74, -38, -117, 89, -91, 85, -79, 34, 67, 51, 17, -93, -17, -32, -3, -65, -84, -68, -81, 83, -44, 114, -20, 116, 45, 122, -103, -97, -22, 123, -127, 87, -127, -24, -25, -113, 70, -21, 80, 54, 49, 119, 126, -42, 65, 2, 106, 28, -50, -43, 58, -82, -71, 92, 72, -8, -15, -67, -2, 84, 95, -39, 48, 122, -107, 19, -29, 8, 110, -53, -61, 51, -55, 17, 85, -120, -8, -10, -48, -44, -33, -60, 4, 51, -21, -16, -20, 17, 118, 87, 44, 22, -47, 77, 4, -66, -10, 43, 33, -88, 38, 76, 36, -67, 75, -105, 2, -123, 53, -79, -117, 109, -20, 85, -28, -89, 10, -122, -127, 3, -94, -28, -7, -82, 76, 89, -36, 43, 13, 80, -6, 11, 100, 13, -51, 70, -32, -79, 11, 73, 17, -70, 112, -90, 126, -103, 16, -22, -62, 18, 16, -6, -57};
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
    msg.setTimeStamp(0.239581914037);
    msg.setSource(22159U);
    msg.setSourceEntity(116U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(148U);
    msg.seq = 1684640281U;
    msg.destination.assign("CGMWROVYDDGNOJCOIKBJLJNOJXUQ");
    msg.timeout = 13420U;
    const char tmp_msg_0[] = {-23, -31, -114, 109, -69, -41, 63, -102, -86, -66, -125, -35, 74, 104, -97, 11, -90, -60, -23, 122, 61, 46, 61, 91, 83, -75, -106, -50, 78, 45, -22, -32, -104, -64, 115, -58, 28, 12, 41, -50, 24, 67, 7, -41, -1, 50, 33, 91, -121, -22, 126, -127, 120, 10, -43, 117, 62, -116, 101, 94, -16, 11, 109, 53, 77, -85, 49, 99, -3, 36, -29, -1, -13, -20, 94, -11, -29};
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
    msg.setTimeStamp(0.326433939015);
    msg.setSource(33224U);
    msg.setSourceEntity(211U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(137U);
    msg.seq = 2314075917U;
    msg.destination.assign("TSEYKNIMYQWYGUNEJBEJDQUXRBAXJPHWCSJBQQYFYPGULZVVTCVZURSHLQUQAMWFDJGKZNUVKYXIISNBEXR");
    msg.timeout = 63609U;
    const char tmp_msg_0[] = {62, -16, -59, -15, -106, 40, -9, -57, 84, 76, 104, -14, 109, 28, 87, 105, -90, 126, 47, -102, -54, 102, 113, 58, -47, 84, -128, -42, -50, -9, 27, 15, 13, -75, -68, -21, 107, 17, -52, 124, 75, -110, 33, -86, -118, -66, 41, 123, 1, -9, -106, 27, 119, 118, -37, -35, -100, -37, -29};
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
    msg.setTimeStamp(0.113779604358);
    msg.setSource(6702U);
    msg.setSourceEntity(213U);
    msg.setDestination(22342U);
    msg.setDestinationEntity(100U);
    msg.source.assign("OSHBCJQVNSDVMGYBZLMRWOCJAATDLABFNWMGJNSJMUKWVCJDDRONEOOIZLKHPMYWQCZFVHBINCZHSDLWPIUKSQSRHGFTPAPROZKLJYITEDCSOLYNQR");
    const char tmp_msg_0[] = {-22, -123, -117, 4, -7, -95, 26, -40, -48, 125, -48, -3, 41, 6, -1, 22, 31, -26, 28, -103, 107, -111, -48, -25, 88, -111, -14, 73, 14, -104, 57, 25, -30, 39, 93, -66, 102, 57, -80, -18, 45, -88, 57, 26, 99, 27, -42, -95, 72, -37, -53, -123, -11, 100, -96, -70, -58, -115, 4, -10, -116, -67, 28, -128, 44, -27, -45, -107, 101, 55, 34, -10, 0, -93, 90, 119, 65, 61, -10, 63, -7, -112, -18, -120, -41, 102, -3, -85, -9, 114, -24, 109, 126, -41, -61, -87, 125, -7, -63, -68, 24, -62, 63, 120, -57, -65, -41, -27, -125, 17, -91, -29, 16, -93, 41, 124, 91, 50, 34, -90, 102, 43, -63, 11, 29, 60, 8, -20, -9, 79, 24, 53, 55, 59, -25, -67, 110, 46, -97, 120, -88, -68, 43, -128, -109, -72, -40, 57, 6, -15, -57, 46, 85, -71, 88, 65, 119, -2, -67, 56, 113, 80, 106, 52, 33, -66, 42, -62, 71, 125, -126, 34, -91, -123, -71, -75, 83, 27, 49, 114, -123, 123, -39, 119, 85, 116, -122, 66, 65, 92, 106, -87, 83, 115, 86, -83, 117, 16, -47, 19, -85, -21, -75, 47, 20};
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
    msg.setTimeStamp(0.626988361241);
    msg.setSource(58176U);
    msg.setSourceEntity(128U);
    msg.setDestination(28299U);
    msg.setDestinationEntity(201U);
    msg.source.assign("AOOJTISZAUOTXZUNKEXPMZRAPKPQLWWIBXKRKCARVDYXJSGEQLXSASUDGFCTPLNKSOWAJOHVMHBDMVWKJHKCJYQCOCREYXVHCLXJYGZCAVREYMQWHZMDIGSAWLTINFVPBVTSVPBFBRYOTNWSEDBNPZYLLNEEGBIIZTUQUHBUTHHREIRVIKIPFZAFLBTCNLUWFGGHOCPXHONAIDPSBYDGOMQUQFKMUGXDDFGEJXTYMDUQ");
    const char tmp_msg_0[] = {94, -52, -69, -57, -110, 23, 33, -58, -66, 111, 90, 28, 12, 92, 71, 65, -76, -70, -62, -2, 49, 64, 63, 39, -91, -18, -19, 74, 71, 35, -35, 19, -24, -72, 23, 4, 79, -11, 94, 5, -105, 54, 84, -110, 49, 77, -40, 109, 99, 92, 62, 50, 41, 56, 7, -38, 96, -20, -3, -60, 33, -57, 60, 122, 39, -18, 19, 126, -66, 89, -88, -56, 39, 14, 112, -41, -6, 48, 78, -120, -105, -7, -40, 92, -36, -63, -5, -109, 9, -42, -85, 90, -26, -120, 109, -93, -38, 70, -80, -45, 50, 16, 109, 13, -9, -85, -117, -89, -5, 57, 41, -105, 123, -117, -97, 61, 18, 17, 81, 4, 46, 51, 73, -2, -115, 125, -53, 54, -67, -33, 61, 66, 47, -81, 0, 19, 72, 101, -99, -12, 121, 69, -105, -104, 47, 13, -96, -10, -38, 24, -71, -36, -52, 0, -4, -20, -60, 30, -118, -44, -113, 89, -30, -128, -121, -46, 83, 20, 78, 29, 105, 51, 20, -103, 22, -107, 88, -43, 66, -32, 125, -31, -80, -71, -97, -103, 23, 47, 89, -70, -51};
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
    msg.setTimeStamp(0.175728737851);
    msg.setSource(41839U);
    msg.setSourceEntity(45U);
    msg.setDestination(6334U);
    msg.setDestinationEntity(172U);
    msg.source.assign("TYTAMBJRCVEEKFUUCSBVVBWUISAYXTTXFEZFSLZXUWZPWIPHMDMRHJFFGYSVDNLFBZQNUFDNVHIWEHNPOEWHHPPKY");
    const char tmp_msg_0[] = {-48, -41, 95, -25, 116, -66, -78, -68, 34, -113, 51, -102, 45, -112, -110, -1, -72, -11, 32, 62, 122, -53, 122, 109, 118, -72, -77, 99, -15, -21, -44, -113, 70, -109, 42, -125, -127, 41, 9, 34, 54, -78, 47, -29, 74, -80, 64, -110, -108, -46, -62, 64, -60, 21, -8, 24, 75, 8, 61, -1, 8, 46, -64, 61, -44, 99, -46, -80, -124, -23, 76, 64, -104, -55, -115, -103, -73, -99, 98, 88, -61, 91, -38, -22, -2, 114, -115, 41, -76, 27, 22, 57, -16, -19, 46, 27, -96, -114, -115, 14, -73, -124, -51, 7, -105, 49};
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
    msg.setTimeStamp(0.956116291366);
    msg.setSource(65048U);
    msg.setSourceEntity(172U);
    msg.setDestination(35497U);
    msg.setDestinationEntity(55U);
    msg.seq = 238635223U;
    msg.state = 184U;
    msg.error.assign("WPRLZWAZWUZIPPKAMTI");

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
    msg.setTimeStamp(0.119171224491);
    msg.setSource(57532U);
    msg.setSourceEntity(220U);
    msg.setDestination(364U);
    msg.setDestinationEntity(175U);
    msg.seq = 3214513784U;
    msg.state = 89U;
    msg.error.assign("KNLCTTBVUCWHCAFUWJXFWGKWTZIIHHRGNPNADSRKDEDVKMCBXOBQLPVMUIEXTTZPTSDVWHCDQCUJKYNAOYXHZOKUSGHODXZBJEWJYXVLMXASYKQLQBRTUNNLFGREVXGZMDIXTRHB");

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
    msg.setTimeStamp(0.484216689451);
    msg.setSource(29813U);
    msg.setSourceEntity(223U);
    msg.setDestination(5845U);
    msg.setDestinationEntity(197U);
    msg.seq = 2776442974U;
    msg.state = 178U;
    msg.error.assign("UMQLVVCZJSRAOODDDVKLMHITJKTCEWU");

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
    msg.setTimeStamp(0.291614618093);
    msg.setSource(15649U);
    msg.setSourceEntity(82U);
    msg.setDestination(45330U);
    msg.setDestinationEntity(211U);
    msg.origin.assign("FRBHTEMGCHTTRRSZPUUBRQYJUCBWIPNJSOLIATUEKAGVSIHBDLWEOFFZZHOPJUJGKLVJGBLEAVFANBQH");
    msg.text.assign("KZNXIHUEHRIPXHAKHXGYICTNDJUMJQTTLMRUJQSFIWRMEMEFCYJEKZSVTRLRSDXAPUZWDXKUYJUKQZQUEPOWCTBZFROQAYQNUWOYBOKNLLJBEIATWNIBFFDGCBDZPTGSDNGEFHSGBKHOZLDSONFXSQWCCGBPAIYRTVAMEODEPWOXWBVPKGLNTLVYPVMURAQS");

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
    msg.setTimeStamp(0.158254930523);
    msg.setSource(35285U);
    msg.setSourceEntity(144U);
    msg.setDestination(40059U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("SFLUUOTUGAGWPVMEXTTJAMCJMUNMBFQBIOYFVESQRMCLDHZIQIDDLKBSJLWDHLWGCWRSZENDRVHOCRGKJPZPFXTZTXREIFHZOPRKCASEYCWZQKOIXELILDSFZKSCPWIGYAFYJVAQOCYMTXHBAKAQPBIZMAHPCDQVNRJMOVPVRTHXPQUUKROSGXOXNSNBEVGHLJSUDJEXLEBYNPUYYNQFRWNHMZWYHQNTFDIXGYAJMN");
    msg.text.assign("LVMQTTPBGJJQFURNNGLMPOQVJZPRYGIBXPWLNNDSQEOZHXVQCKYVRTMNFYMFGTJIIDZWUAAODKKGAIRSUKFWKBECXVHEZWUHSCNXAJZQCAMMEHTOHELXJDJRNRXLSSUEFBCPFIPBBBNGIHLKVPY");

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
    msg.setTimeStamp(0.71609932659);
    msg.setSource(13157U);
    msg.setSourceEntity(141U);
    msg.setDestination(22101U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("TJZYNAFQZEBMQWKLGDCYPOSLLNUUDJADDTRDSRKUHNLNXZUKVBYLLVPKMMISRMYEJYPWXFIJICZRBCAVVOVCFJIVSLNLCTEUBSTHUZPDQJNXSHMCCGXZRYYKHPDXHZGRGOLNRWLIMOJTEGJZEEIEHUVTARFYKIWEWTPPAXAIUGXWQ");
    msg.text.assign("AWCJWOLBVGBMKTPEOABFNAZTREFSJXEHPILLZCHXQPAOZGFSQYSNXJFYHLENFYGXOSRICNPJVLGWSCYURRAEVDVHCUPFQPTSKQUHITNCRLHNXKOWCGZFVUKUGKJYGNWZFHOSRPWUEMYBWXONPDZMDVFLTSEVJSBEYCMZUCXCOAWQJXBTEABIQGMQAKLTPJUQMDJOKRVDTNYLKUYJXGRQVZMBMF");

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
    msg.setTimeStamp(0.743834336213);
    msg.setSource(53303U);
    msg.setSourceEntity(24U);
    msg.setDestination(1612U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("LXNCQEBJHOYHAUINQYUDTWSQZTHIWAIIYWJAYYHRYSFTDNTLFQCHPZAFRBVGWPDKDREVJUAMEOREPSA");
    msg.htime = 0.0533580404653;
    msg.lat = 0.203721155954;
    msg.lon = 0.45370782047;
    const char tmp_msg_0[] = {-61, 126, 75, -75, 37, -35, -41, 29, 88, -83, 10, -64, -105, 91, -108, 112, 78, 39, 59, -12, 29, 73, -63, 102, -28, 89, -123, -93, -81, 62, -41, 108, -83, 26, -34, 37, -87, 114, -98, -108, -113, -13, 126, -125, 67, -11, 71, 43, -39, -44, -56, -124, -57, 20, 80, -76, 81, 41, -13, -88, 15, 38, 14, 120, -68, -87, 49, 113, 69, 99, -126, 38, 33, -31, 7, -22, -72, 56, 122, 29, -117, -89, -56, 72, 57, -16, 65, -87, -46, 10, -5, 23, 76, -29, -62, 12, -87, -30, 78, -92, -77, -35, 97, 62, -96, 74, -7, 115, 90, -109, 57, 75, 57, 98, -42, 24, 80, 66, 66, 115, -20, 13, 86, -111, -21, 13, 73, 42, 58, 68, 51, -115, 45, 47, -44, 120, 117, 92, -25, -8, -44, -27, 0, -21, 12, 62, 115, 86, -46, 34, 101, 47, 20, 92, 118, -128, 24, 44, 120, -34, 36, -43, -118, -33, -58, -82, -25, 59, 105, -26, -49, 51, -32, -42, 84, -12, 67, 83, -71, -11, -119, -25, 99, -91, 78, -75, 74, 120, -70, 97, 28, -58, 12, 125, 44, 82, 4, 112, 90, 119, -17, -68, -39, 96, -126, 1, -21, -44, 38, 109, -41, 85, 16, -21, 7, -25, -118, 69, 9, 96, 79, 5, 119, 78, 106, -78, 16, 23, 100, 24, 74, -1, -46, -83, 72, 91, -92, -29, 3, -127, 55, -99, 38, 63, 51, -87, 77, 110, -54, -31, 64, 6, 109};
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
    msg.setTimeStamp(0.0882477190879);
    msg.setSource(57953U);
    msg.setSourceEntity(61U);
    msg.setDestination(54118U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("BLPTDAHVDWBRFWEEMBXFQOUYPBCLUBUOFIAUHVYACNOZTICKMDMCQLLLCVTXIXUJJUNPPORWDOQNPPSWGZDZAYEAFSJVJTFSSQMWSYGYXKKQWGVAUPAKBODGHHFYMKELQCAREVGBPUMJVRNYGXKOQXXNKIRTMMHTHBIZTJVFSSQHXUHUGOOZRLTEGIGFVKRCYXTJVBGQZZWERSQWMAMSWKIZFRDILCANYNEROENCJ");
    msg.htime = 0.5371598624;
    msg.lat = 0.160709495413;
    msg.lon = 0.402293042888;
    const char tmp_msg_0[] = {107, -74, -45, 103, -69, -103, 97, -39, 54, -66, -95, 58, 33, 73, -33, 75, 0, 43, 9, 22, 97, -20, -41, 54, -21, -90, 126, 109, -89, -125, 20, 31, -57, 24, -95, -101, 30, 11, 28, 72, -99, -47, 56, 97, 58, -17, 48, -56, -120, 49, -128, -96, 46, -8, 4, -65, -19, -61, -108, 32, 68, -97, 90, -47, -93, -51, 107, 103, 7, -82, 36, 65, -64, -28, -99, -33, 5, 17, -79, -102, 103, -84, -39, 48, 46, -46, -31, -128, -127, -89, -114, -27, 14, -35, 29, 31, -56, 59, -61, 87, 72, 31, -16, 63, 16, 56, -53, 15};
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
    msg.setTimeStamp(0.363587158764);
    msg.setSource(52295U);
    msg.setSourceEntity(215U);
    msg.setDestination(10743U);
    msg.setDestinationEntity(20U);
    msg.origin.assign("JXYDFKRSQEUAGPVMCHCCNEPZDIEBWOIVPSPFVGYHZOGTKTVQMOMBAGQYEVARKWBVAAKNAIXVCOLPUSGWLUKILQNRUHNTOTGZHJWIYNQPKEJWYOVAAVBKPEJRULYTCWMEGLFSFJ");
    msg.htime = 0.358511346858;
    msg.lat = 0.627961409027;
    msg.lon = 0.239260811148;
    const char tmp_msg_0[] = {-101, 39, 7, 65, 56, -52, -98, 93, -105, -36, 22, -25, -10, 51, 100, 28, 36, 60, 1, -106, 122, 108, 109, -12, -66, -46, -51, 36, -121, -60, -20, -34, 9, 72, -127, -76, -3, -76, -20, 105, -20, -33, -49, -79, -17, 23, 12, 75, -26, -5, -126, 75, -5, 102, 29, 90, -14, -39, 64, 95, -53, -29, -25, 1, -89, -51, 56, 35, 26, -119, -105, 17, 53, 62, -75, -8, -123, 57, -41, 65, 109, 121, 66, 46, 104, 23, -24, -70, -79, 77, 69, 21, -123, -52, 73, -18, -21, -7, 36, -67, 58, -85, -51, -71, -66, -76, 40, 86, 44, 26, -114, 20, 114, 13, -116, 33, 43, -30, 3, 93, 108, -114, 83, -60, 61, 35, -25, -116, 33, -19, -93, 53, -90, 16, 13, -45, 121, -4, 19, 126, 122, 106, -13, 15, -126, 98, 70, -23, 29, -100, 119, 0, 33, -71, 45, -116, 16, -60, 88, -103, 23, 124, -114, 65, 45, -123, 72, 86, -62, -4, 67, 24, 92, -102, -122, -74, 123, 14, -64, 34, 89, 91, -62, -92, -55, -117, 55, -37, 79, -95, -47, -1, 41, -28, 61, 23, -29, 68, 47, -66, 91, 45, -100, 21};
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
    msg.setTimeStamp(0.085193669221);
    msg.setSource(16322U);
    msg.setSourceEntity(93U);
    msg.setDestination(31288U);
    msg.setDestinationEntity(61U);
    msg.req_id = 24689U;
    msg.ttl = 36460U;
    msg.destination.assign("IHOOGMAKUWGXCRZZUZXFBNWQARFSCXIQUPKDSSRGZHECFVBIGQVWEMLDMZKLTOGAWOVIQHHADYFRPTWSDRPFWYVGBMUELCHNADXNBLNJSIQITJPQFKENKBHKPOMYOMYQACZPMSQOWJYFETIWKLOSAEKGFLDNB");
    const char tmp_msg_0[] = {-62, 28, -8, 24, 49, 116, 117, -89, 35, 8, -96, -106, 51, 90, -40, -44, -39, -111, -5, 117, 13, 9, -62, -5, -89, -78, -17, -104, -38, -112, -69, -9, -80, 78, -39, 8, 95, 71, -64, -114, 77, 65, -8, 64, 60, -62, 52, -125, 58, 112, 32, -106, 116, -96, -10, -72};
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
    msg.setTimeStamp(0.61121272528);
    msg.setSource(8037U);
    msg.setSourceEntity(199U);
    msg.setDestination(64185U);
    msg.setDestinationEntity(79U);
    msg.req_id = 43759U;
    msg.ttl = 27132U;
    msg.destination.assign("EXAKKMXDBGHPTMTIBFVVSMMDXYRJEJIFQVTJCTNNYDNHOAZWYZMWQJLYHNVWOMLEPYKRDNJXPQZQJODIAQYGVIKRNPD");
    const char tmp_msg_0[] = {-1, 19, -64, 68, 61, 103, -17, 61, 24, 85, 37, -46, -44, -88, -104, -48, -3, 43, -63, -88, -16, -21, 17, -99, 85, 11, -31, -86, 54, -87, 63, 17, 45, -126, 98, -96, 41, 33, 74, -60, 44, -35, -69, -59, 22, -55, 51, -14, -112, 72, 107, 7, -68, -90, -41, -110, 51, -120, 116, -64, -109, -73, 18, 2, 46, -104, 29, 117, 71, 37, 60, -115, -60, -95, 65, -53, -112, 45, 31, 43, -107, 44, -24, -49, -101, -41, -56, -86, 118, 25, -21, -27, -91, 99, -16, -79, -18, -57, 48, -9, 30, 122, -115, -10, -11, -84, 37, -49, 27, -33, -108, -39, 83, 16, -41, 3, 24, 61, -52, -34, -50, -33, -9, 85, -47, 49, -116, 117, -123, 19, 25, 101, 70, -94, 33, -42, -33, 57, -79, -103, 82, -68, -57, 0, -106, 95, 108, 98, 62, -12, 13, -99, -96, -66, -44, 17, 99, 32, 75, 112, 89, -102, 126, -46};
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
    msg.setTimeStamp(0.408715858214);
    msg.setSource(6590U);
    msg.setSourceEntity(184U);
    msg.setDestination(15884U);
    msg.setDestinationEntity(159U);
    msg.req_id = 64243U;
    msg.ttl = 21564U;
    msg.destination.assign("HTIHKYUZCFLKACWFCHQMBUVBLNYKYSRXCGZYXJOWOOVDSZOHDPGXJRYSIOWIHIVLUMBLTUPFJVTRXBEQFMQPZERNSQDIXNCAZLCRUPJNDKYTGUUHPNVPQHENUNJKWKKGPIYTUGWBESLXPAADAG");
    const char tmp_msg_0[] = {-57, 126, 111, 70, -81, 60, -13, -68, -95, 46, -83, -93, 124, -34, 108, 22, -61, 126, -63, -73, 71, 103, 101, -6, -34, -111, -24, -13, -57, -38, 118, 37, -91, -101, 41, 72, 87, -100, -107, 107, 10, 121, -126, 116, -87, 107, -1, 126, 107, -76, 93, -116, 40, 48, -101, 119, 69, 33, 39, -50, 40, 44, -13, -14, -84, -22, -28, -128, -15, -105, 84, -24, 22, 23, 64, 68, 126, -84, 112, 32, 48, 82, 86, 16, 31, -46, -98, 78, -108};
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
    msg.setTimeStamp(0.907886181899);
    msg.setSource(53807U);
    msg.setSourceEntity(126U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(105U);
    msg.req_id = 56119U;
    msg.status = 54U;
    msg.text.assign("UTIKJRSZTJZKCWVZUMFUHLBOMXICJCPLQAKFJNDNRXRHNHBYMCTHSNCKWSECEETOQWDSGGWEORBQZXVGFPZBLLNEWGDJHLAJUCARDHXQYYRVDSXHARLTTMQXEITDBYVGFIWPKGWNZDKDAEZAWQRFYMVFKUYGHAUTSOEXMYLSVDUIBTJXW");

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
    msg.setTimeStamp(0.244342373868);
    msg.setSource(26221U);
    msg.setSourceEntity(84U);
    msg.setDestination(57860U);
    msg.setDestinationEntity(197U);
    msg.req_id = 22589U;
    msg.status = 112U;
    msg.text.assign("TJTXJYUXBBWXOOIRATAWZREOKMZMHSVNPQVFKHZNFNQYKLXUNPTASOTBNLQCPDJFUKRVGUAHNULRUWIMHGFIRNUGAKLPPLXDRESLMCHDVQGOFZEGCHGZSBRNTZCEICYSIXTXJEGFUVTYQXBJWXBQHYYMYDZRQQ");

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
    msg.setTimeStamp(0.216057622421);
    msg.setSource(29948U);
    msg.setSourceEntity(131U);
    msg.setDestination(23507U);
    msg.setDestinationEntity(246U);
    msg.req_id = 14961U;
    msg.status = 156U;
    msg.text.assign("HGHXJNCHVGROHIHAMTGRWLTMRWSZMJYVELQJHVMJNCNCYBXDSDPPOWIPSJOUNGIESPVZKUAACFQFIBKKFHIMBPYKPILUHBFIYERTJPATHBZXQNRQBIVAJGDKKWQYZGBYOPBXWREZFUQVNYEFCMQGOSRZQXEWAMLJLUOWLKXOMUKXRZWCMNYXZDFEDXCSQJFTFNADOYDRC");

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
    msg.setTimeStamp(0.52606164713);
    msg.setSource(41480U);
    msg.setSourceEntity(97U);
    msg.setDestination(33770U);
    msg.setDestinationEntity(245U);
    msg.group_name.assign("GJRUABQYAOOBWCJJPANIXHIVIVBGZSZNALJLLHMICILOPNVENPTCNGZRHHOWZMWAINKIRTHTGBZLVMRCIHHJFIHTQHOSXSJXWKEWSQLYEWVXGYMLKZGPOMPSRFDLFMGNMEDYZPXZEQVCQEOAFBCUUKPJYYBFWCLRJKDRAHVOQPLRWUTQEXKFMWGTBCYPZBDFUECIAERTOSTUBKDYKRUKDOKSD");
    msg.links = 376705789U;

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
    msg.setTimeStamp(0.631503426384);
    msg.setSource(3815U);
    msg.setSourceEntity(220U);
    msg.setDestination(6751U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("NSIQEINATWXKUFGEHTUDACYBREAJYCXYKWFHMMDLUIVTBPVCJXUVXNGIBMNOHFPYDHEGAXYVHTOFPSZLLYJHSQLWXXITUAPYRKRPRMGVLCCHJODKFBISOOECATZGHQVKFPDZRZWQUWNJEQIYERLMJQBNRSQTATZKMXRLPMNFXQOAWDOCKKXUUFMCJHALPNKSCRBC");
    msg.links = 2655167816U;

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
    msg.setTimeStamp(0.374347348756);
    msg.setSource(6766U);
    msg.setSourceEntity(126U);
    msg.setDestination(41545U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("TSQDXBUEMTJNTRMTEFYJXCGMFJMHSNRPVONQAESDPVBKJQLJMUQAROGSZOLQZKBTOGPKVKXSDBXBPFWFTKRKHRRJVCFAHUEVBVGHYXYLDDIEQTSWIFLUUELZXNICGJHSQNAFLCSFAUTOEXPXYIV");
    msg.links = 3312767790U;

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
    msg.setTimeStamp(0.339311739535);
    msg.setSource(37690U);
    msg.setSourceEntity(113U);
    msg.setDestination(12978U);
    msg.setDestinationEntity(117U);
    msg.groupname.assign("JFDQEGGBZHUFWVTBP");
    msg.action = 241U;
    msg.grouplist.assign("VKLPLUGKNHWTLLCSCTCZYZVPMFDWXXXITDONRHOAJJRJQBYLZYERBSURNFBNJVGWTLZDXXJGUQAYHOEWKQMMFTZMRASVYBMUQRPGECKIHCCBP");

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
    msg.setTimeStamp(0.209483688097);
    msg.setSource(53324U);
    msg.setSourceEntity(20U);
    msg.setDestination(17242U);
    msg.setDestinationEntity(232U);
    msg.groupname.assign("NCQRQNVLJJXJMAZUJYTFFQHUYJNYGEXJOKHEKQOURFFDNCRSDLECGQMVSWRDSEGLXUKBATRXHIDAPMFVSBHMNNZPUEHFFSZTEUIKGLADKZRGBUZPLDYIUVQKWSLORQJULCGTME");
    msg.action = 55U;
    msg.grouplist.assign("IVQVMCXHGHWPVKPNYQBHJBAHXOTXKMVJFVOONSRCVBTAUKPANPRBWJPAZNUMMQWBLOLQNYOEUYKUJCEYTZCYPFBLIUSLWHBIMPAASJSHGWRPYEQEOEZULZXKOFUREVRJLLGYQTJLTQFSDZZWBJKINJEWCDNWSPFGHCPXMNFGDRDETTSITMVT");

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
    msg.setTimeStamp(0.861339722446);
    msg.setSource(57966U);
    msg.setSourceEntity(138U);
    msg.setDestination(39057U);
    msg.setDestinationEntity(74U);
    msg.groupname.assign("OQYNJDBTEHFDVMGIWDDFRZEODAJLSRSWHJVULJAMPVXCYTPLQOWRPCAWSRRRUADGXIMARGNPWXKWXUNMKYPSJTCUXEEQIHFLANQLXFEINVGBXHYEGNSIDWIQBESUYVSUVPVNKMHCOJZJBYGDSNKHRUCXHWIFATRYVCZ");
    msg.action = 109U;
    msg.grouplist.assign("KPJFFFBWNTTHWRDYLOJDALCDXEKPJFLNNWKXBAITMHOUAQKDGDIPBVDVFRJLTPYJNSOXCZXCWSVBMIQQGOKCBWMKXRBMQUZHFNQWYFCAMYTUFHRQEWJQLHAPQZONLGSSYEMKUIERCQYZAIDSVXRLNKTGKRGOOAPZ");

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
    msg.setTimeStamp(0.0628911251531);
    msg.setSource(65405U);
    msg.setSourceEntity(62U);
    msg.setDestination(63792U);
    msg.setDestinationEntity(116U);
    msg.value = 0.257605183299;
    msg.sys_src = 44494U;

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
    msg.setTimeStamp(0.139782965567);
    msg.setSource(29551U);
    msg.setSourceEntity(208U);
    msg.setDestination(3838U);
    msg.setDestinationEntity(188U);
    msg.value = 0.605543831601;
    msg.sys_src = 7652U;

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
    msg.setTimeStamp(0.53998775979);
    msg.setSource(21084U);
    msg.setSourceEntity(148U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(159U);
    msg.value = 0.52812884292;
    msg.sys_src = 34083U;

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
    msg.setTimeStamp(0.391780305697);
    msg.setSource(44105U);
    msg.setSourceEntity(125U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(60U);
    msg.value = 0.80590599755;
    msg.units = 142U;

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
    msg.setTimeStamp(0.409149105956);
    msg.setSource(16911U);
    msg.setSourceEntity(184U);
    msg.setDestination(54726U);
    msg.setDestinationEntity(230U);
    msg.value = 0.623575489542;
    msg.units = 166U;

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
    msg.setTimeStamp(0.880192923898);
    msg.setSource(54811U);
    msg.setSourceEntity(140U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(173U);
    msg.value = 0.894217371078;
    msg.units = 217U;

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
    msg.setTimeStamp(0.178280069058);
    msg.setSource(24635U);
    msg.setSourceEntity(162U);
    msg.setDestination(58873U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.907415034491;
    msg.base_lon = 0.106036730112;
    msg.base_time = 0.992549380661;

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
    msg.setTimeStamp(0.678062965521);
    msg.setSource(1221U);
    msg.setSourceEntity(211U);
    msg.setDestination(59577U);
    msg.setDestinationEntity(36U);
    msg.base_lat = 0.7457717859;
    msg.base_lon = 0.657809266022;
    msg.base_time = 0.140905617896;

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
    msg.setTimeStamp(0.621445587159);
    msg.setSource(11904U);
    msg.setSourceEntity(187U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.806405197879;
    msg.base_lon = 0.258423357211;
    msg.base_time = 0.798560085919;

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
    msg.setTimeStamp(0.252279169337);
    msg.setSource(43993U);
    msg.setSourceEntity(31U);
    msg.setDestination(65185U);
    msg.setDestinationEntity(224U);
    msg.base_lat = 0.940629887785;
    msg.base_lon = 0.998272592395;
    msg.base_time = 0.784327102856;
    const char tmp_msg_0[] = {-42, -110, 70, -28, -75, -60, -22, 9, 121, -105, 44, 103, -1, 8, -81, -106, -20, 39, 99, 45, -81, 30, 15, -10, 34, -29, -102, -27, -107, 9, -61, 94, -72, -32, -79, -44, 41, 66, 93, -102, -27, -62, 33, 6, 56, 23, 11, -79, -37, -85, -33, -92, -117, 67, 67, 108, 50, 93, -12, -14, -28, 122, -107, 45, 94, -15, 124, 3, -76, -128, 11, -114, -118, 63, 124, 108, -14, -12, -11, 91, -27, -48, 115, 14, 101, 24, 123, -103, -53, 22, -88, 82, -21, 112, 96, -90, -66, 63, -70, 87, 104, 38, 19, 14, -11, -67, -94, -3, 119, 37, 41, 30, -36, 30, 27, -53, -104, -48, 118, -22, 125, 20, 16, 97, -117, 54, -12, -78, -41, 113, 12, 0, -90, -64, -105, -60, 86, 119, -36, -43, -48, -73, 68, -13, -33, -21, -93, -82, -6, 84, -101, -4, -93, -27, -113, -71, 41, -107, 55, 42, -47, -9, -105, 38, -81, -60, -98, 30, -126, 40, -79, -121, -30, 23, -51, 36, 47, -92, -12, -41, -89, 41, 75, 3, 12, 57, 56, -20, -76, -86, 42, -39, 35, 6, 105, 41, 93, -119, -83, -92, -99, -10, 63, 116, -71, -8, -43, 112, 105, -62, -65, 31, 35, 72, 95, 4, 4, 124, -115, -27, -66, -92, 27, -86, 116, 15, -128, 99, -17, -37, 45, -58};
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
    msg.setTimeStamp(0.153595904801);
    msg.setSource(19774U);
    msg.setSourceEntity(218U);
    msg.setDestination(40882U);
    msg.setDestinationEntity(0U);
    msg.base_lat = 0.518238842881;
    msg.base_lon = 0.756955118159;
    msg.base_time = 0.386102987048;
    const char tmp_msg_0[] = {-11, 100, -104, 86, -40, -21, -67, -1, 55, 23, -42, 12, -4, -87, 105, -80, -79};
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
    msg.setTimeStamp(0.782928253867);
    msg.setSource(24458U);
    msg.setSourceEntity(86U);
    msg.setDestination(29090U);
    msg.setDestinationEntity(169U);
    msg.base_lat = 0.733626226679;
    msg.base_lon = 0.289860153728;
    msg.base_time = 0.19906803769;
    const char tmp_msg_0[] = {66, 67, 47, 96, -67, 90, -4, -65, 69, -49, 19, 51, -119, -70, 24, -22, -5, -52, 1, 108, -58, 32, 116, 69, 72, 16, 31, 104, -41, -113, -3, -91, 124, -121, 119, 49, 34, 104, -9, -35, -114, 17, -71, -114, -66, -38, 113, -19, 117, -28, 124, 73, -110, -32, 79, -98, 92, 16, 33, 41, -111, -17, -15, 91, -56, 20, -42, -27, -119, -87, 86, 117, -53, 9, -42, -10, -4, -128, -5, -35, -13, 21, -3, 11, -115, 57, 114, 102, 91, -124, -38, -8, -40, 85, -9, -102, -6, -77, -24, -67, -76, 4, 114, -105, 37, -45, 36, -33, 36, 120, 61, 111, 22, -1, -84, -63, 95, 123, -2, -111, 125, 58, -125, -63, -79, 101, -13, 124, 70, -56, 37, -10, -66, 42, 111, 121, 71, -109, 126, -95, 93, 80, 63, 85, -118, 102, 58, -6, 2, 54, -108, 25, -88, -99, -87, -75, 101, 74, 49, -110, 69, 18, 47, -118, 111, 4, 31, -6, 109, -79, 81, -28, 15, -39, 80, -126, -50, 118, -128, 61, -69, 0, 51, 39};
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
    msg.setTimeStamp(0.956460018464);
    msg.setSource(14132U);
    msg.setSourceEntity(9U);
    msg.setDestination(23584U);
    msg.setDestinationEntity(174U);
    msg.sys_id = 5628U;
    msg.priority = 18;
    msg.x = -6104;
    msg.y = 26655;
    msg.z = -8597;
    msg.t = 18234;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 48322U;
    tmp_msg_0.lat = 0.338619268827;
    tmp_msg_0.lon = 0.462125574487;
    tmp_msg_0.z = 0.740351807515;
    tmp_msg_0.z_units = 207U;
    tmp_msg_0.amplitude = 0.199880974589;
    tmp_msg_0.pitch = 0.907007729735;
    tmp_msg_0.speed = 0.578771720699;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.custom.assign("XDOJDISOJPKAVHVZKUDLJYKUIBHBYECJMHXAVMABXHZDAXYCMNCASWPWNISVPCYQVIMCXWGWLQKFWIANPEERCKHYOEQLNFAURWNGZLDPQIFDCOAUFOJNKXGEYANOZFZZXRMOEFHFHPTRGFPGYBDITZBTTKYWMJMGIEZHQDLB");
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
    msg.setTimeStamp(0.833190165717);
    msg.setSource(51998U);
    msg.setSourceEntity(183U);
    msg.setDestination(32418U);
    msg.setDestinationEntity(68U);
    msg.sys_id = 27534U;
    msg.priority = -128;
    msg.x = -1217;
    msg.y = 7822;
    msg.z = 10148;
    msg.t = 20630;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 191U;
    tmp_msg_0.range = 0.802497795768;
    tmp_msg_0.acceptance = 141U;
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
    msg.setTimeStamp(0.49587857082);
    msg.setSource(55458U);
    msg.setSourceEntity(26U);
    msg.setDestination(19891U);
    msg.setDestinationEntity(161U);
    msg.sys_id = 64306U;
    msg.priority = 85;
    msg.x = -20547;
    msg.y = -22666;
    msg.z = -22110;
    msg.t = 17199;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 744371123U;
    tmp_msg_0.destination.assign("UMTPMXFPKNHHCJQYQLFSANSXBRLLRMWWCTEJRDYCXI");
    tmp_msg_0.timeout = 37596U;
    const char tmp_tmp_msg_0_0[] = {-122, 126, 70, -65, 53, 1, 79, -80, 93, 119, 57, -20, -128, 19, -5, -12, -1, -5, 38, 9, 71, 46, -94, 119, 117, 81, -75, -77, -94, -42, -103, -11, 94, 36, 86, -127, -113, -116, -27, -18, 25, -37, 29, -86, -116, -47, -99, 77, 22, -33, 71, -16, 81, 57, 8, 94, -118, 58, -101, -42, 58, -90, -34, 123, -49, -56, 12, -118, -99, 28, -40, -65, -94, -121, 10, 97, 89, 60, -26, 108, -31, -98, 102, 75, -113, 116, -49, 43, -2, 40, -106, 15, 38, 102, -39, -117, -22, 99, -28, 88, 53, 85, 6, -53, -54, -114, 44, 49, -117, 31, 50, -94, -60, -88, -84, 24, -40, -111, -110, -119, -20, -123, 0, -70, 80, -97, 84, 65, 6, 47, 14, -52, 55, 23, 6, 47, -114, 83, 26, 116, -32, 78, -39, 86, 17, 53, -25, -127, 1, -3, -73, 74, 74, 74, -115, 10, -118, 94, -34, -66, -70, 22, -127, 46, 63, -3, 59, 92, 38, 77, -57, 103, 68, -63, -75, 34};
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
    msg.setTimeStamp(0.712580783352);
    msg.setSource(32748U);
    msg.setSourceEntity(48U);
    msg.setDestination(620U);
    msg.setDestinationEntity(156U);
    msg.req_id = 57085U;
    msg.type = 224U;
    msg.max_size = 42464U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.574876427952;
    tmp_msg_0.base_lon = 0.150862474834;
    tmp_msg_0.base_time = 0.730277736396;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 35306U;
    tmp_tmp_msg_0_0.priority = -85;
    tmp_tmp_msg_0_0.x = -5023;
    tmp_tmp_msg_0_0.y = 1645;
    tmp_tmp_msg_0_0.z = 20583;
    tmp_tmp_msg_0_0.t = 19089;
    IMC::DevDataText tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value.assign("ETVOQFMEBCNUUFUCZFJLJFIYEMNUHFFAHGMLTXUZJORWASCAJKGXGULSCNHQHIYNPABYLKLIBRAYPECCRHTLXDZN");
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
    msg.setTimeStamp(0.737790619803);
    msg.setSource(57630U);
    msg.setSourceEntity(128U);
    msg.setDestination(9155U);
    msg.setDestinationEntity(205U);
    msg.req_id = 65410U;
    msg.type = 162U;
    msg.max_size = 33953U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.620506593828;
    tmp_msg_0.base_lon = 0.762640723708;
    tmp_msg_0.base_time = 0.914310659816;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 221U;
    tmp_tmp_msg_0_0.priority = 66;
    tmp_tmp_msg_0_0.x = -19395;
    tmp_tmp_msg_0_0.y = 25766;
    tmp_tmp_msg_0_0.z = -2376;
    tmp_tmp_msg_0_0.t = 29979;
    IMC::EntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("RFASHGALTFFXIIDDTTVONUNTJMCOQPODREYXMKETHTXZKGYCGMMQMAAZWTZSVKNIIGEXYAXNWAVFLDBVMOTPRIDWUHCLXWCGFJGNSOCXERFJJRDPHQVHUAEWDSZPYMWQRABKLLBHYWPAPLDSKKJLNUBBTOBVUNUZVLBSEXHRKJISTBOYJYHWPVYGFMPBVOZGIUSNCYOQGD");
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.name.assign("QGEWZZRTXHLASIYDUHIZBDHOXROGEYZAWMOXQTENKMFQHNRXUWHZLFTVEBJZCVTUUMJJNTQPVOYLMODNPJDHMCRDCFVDKYEHUHBACFSSIAIFJROEDGDSBQWMYTZALKJWYQWTCXRGSFBNCPLKFANOBNSLMRSXHRWCUIS");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value.assign("RSAYSLOUENCFIMLUYWOFXDVORDUBUWVCMCZNEYKZGPNOHZLCGPVXNGYRDDNHRZDYVIHYTLMVJATJDDIXWYALPQTVEGXFUHEXW");
    tmp_tmp_tmp_msg_0_0_0.params.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.666332579156);
    msg.setSource(25974U);
    msg.setSourceEntity(105U);
    msg.setDestination(34794U);
    msg.setDestinationEntity(176U);
    msg.req_id = 60507U;
    msg.type = 53U;
    msg.max_size = 1926U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.205587765236;
    tmp_msg_0.base_lon = 0.544991358198;
    tmp_msg_0.base_time = 0.370142453733;
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
    msg.setTimeStamp(0.801979909248);
    msg.setSource(28615U);
    msg.setSourceEntity(249U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(129U);
    msg.original_source = 46169U;
    msg.destination = 7635U;
    msg.timeout = 0.518419235083;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("ZULQFRJTSEQODJWNYNTWUGQPXMLBCHKMSDSSIHUOLRTAOOPSUXVZNJVCVQIHXXGZRUAVYMGKRYABITNLDNEHPUSEVKGKMOGKUDCBCBWYLUVWRENAFJOFZLIFIBHVSIRCALGOMHLDCMAOFTWCXPBSYAITPVQFKHWTGHKW");
    tmp_msg_0.predicate.assign("NNBAHKBKZUAYRLZEBICAPXMMNBGRNPMFVSJWSPSFJYXDPTEVECQGQJNXZEEFYWBTZNFKXFUEMFPGNWPKKJJSWSVNLTLWDIULSZCEUQCRFSJROAAVUNEWSTZGBIYQMGOGBVYYBUYXZKETSOLJIXNCZUQGSIOBVM");
    tmp_msg_0.attributes.assign("QYOTLOMFBHJPFZWZVLLNUQHKZSRYCIICAAJXUVEKOGGMWHRZTEWXWBWDSGNJCOYKPXKUXAWTRAASQESQWJDTVJLPBSBTQQFYSLIHMFUDYSONTSGFGETRUVBDMDTNPIDIVARZZHECYMNPMXUHELMCKCQLPFXJNASUMSVJDOYWMXBX");
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
    msg.setTimeStamp(0.425984859532);
    msg.setSource(45205U);
    msg.setSourceEntity(10U);
    msg.setDestination(7947U);
    msg.setDestinationEntity(61U);
    msg.original_source = 7183U;
    msg.destination = 49997U;
    msg.timeout = 0.383816250697;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 13726U;
    tmp_msg_0.control_ent = 131U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 178U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.407035146788;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 208U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.675177199676;
    tmp_tmp_tmp_msg_0_0_1.z_units = 166U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.0147507839018;
    tmp_tmp_msg_0_0.lon = 0.677655847407;
    tmp_tmp_msg_0_0.radius = 0.173269123694;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 119U;
    tmp_msg_0.proximity = 132U;
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
    msg.setTimeStamp(0.174868877246);
    msg.setSource(33814U);
    msg.setSourceEntity(145U);
    msg.setDestination(24951U);
    msg.setDestinationEntity(52U);
    msg.original_source = 8291U;
    msg.destination = 28477U;
    msg.timeout = 0.109836790696;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.201576466053;
    tmp_msg_0.lon = 0.562744685005;
    tmp_msg_0.z = 0.211196518496;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.speed = 0.453900619365;
    tmp_msg_0.speed_units = 59U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.237981155052;
    tmp_tmp_msg_0_0.y = 0.000879486017453;
    tmp_tmp_msg_0_0.z = 0.208835669736;
    tmp_tmp_msg_0_0.t = 0.693457885611;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 4601U;
    tmp_tmp_msg_0_1.off_x = 0.43625390763;
    tmp_tmp_msg_0_1.off_y = 0.504579613561;
    tmp_tmp_msg_0_1.off_z = 0.488723235681;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.171538808483;
    tmp_msg_0.custom.assign("TAFEBZLVEOPQUZRWZYQPFCVIMOUOXIKEVEHHQHMPVNDYASUSLWOGKSTCHQRTY");
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
    msg.setTimeStamp(0.232536022633);
    msg.setSource(55628U);
    msg.setSourceEntity(35U);
    msg.setDestination(34631U);
    msg.setDestinationEntity(72U);
    msg.id = 116U;
    msg.range = 0.694163397187;

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
    msg.setTimeStamp(0.597222586114);
    msg.setSource(48057U);
    msg.setSourceEntity(243U);
    msg.setDestination(64505U);
    msg.setDestinationEntity(148U);
    msg.id = 13U;
    msg.range = 0.32277802237;

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
    msg.setTimeStamp(0.0535305233878);
    msg.setSource(50821U);
    msg.setSourceEntity(182U);
    msg.setDestination(32265U);
    msg.setDestinationEntity(19U);
    msg.id = 242U;
    msg.range = 0.59103583833;

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
    msg.setTimeStamp(0.475510669549);
    msg.setSource(55965U);
    msg.setSourceEntity(135U);
    msg.setDestination(44559U);
    msg.setDestinationEntity(192U);
    msg.beacon.assign("IMHMCUWFUIGLCMQBROIDSKBYPFBEVDXJPBXYKEJAMIQWLCVTCXBVWFMRGQ");
    msg.lat = 0.0215809156463;
    msg.lon = 0.907693099666;
    msg.depth = 0.0517304206665;
    msg.query_channel = 125U;
    msg.reply_channel = 146U;
    msg.transponder_delay = 182U;

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
    msg.setTimeStamp(0.526428766917);
    msg.setSource(13986U);
    msg.setSourceEntity(178U);
    msg.setDestination(27589U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("HRJUKWGMGFEYKXJSTNXBZVPAYIDIFZSKJQDICQIEYJBHYXSNGVUNDPKTECQNLRDWOZZUXSSCKEFBDPGZTDPLCBZUVLLRDAVWHAKXIQKYSFUUOTAUBPRHHAFLRXJTJARDXPGNQOCJBBFRSMGJPMVLXVWUYYENHBQHAFMPLJOQQLZRHMESNFWZQTBWAWOMCNEZAGOGCTIBKAUWPTCKYVFDMREMUZEQOOITXOGNGENS");
    msg.lat = 0.099037930972;
    msg.lon = 0.13175759947;
    msg.depth = 0.477547302906;
    msg.query_channel = 131U;
    msg.reply_channel = 67U;
    msg.transponder_delay = 133U;

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
    msg.setTimeStamp(0.150076993383);
    msg.setSource(449U);
    msg.setSourceEntity(223U);
    msg.setDestination(24422U);
    msg.setDestinationEntity(179U);
    msg.beacon.assign("GZNTTENFKPZKJIWZSMCLHKNALTEJMZPRJFELFAMQDMRQQ");
    msg.lat = 0.866598569378;
    msg.lon = 0.285325544579;
    msg.depth = 0.682410279483;
    msg.query_channel = 114U;
    msg.reply_channel = 134U;
    msg.transponder_delay = 218U;

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
    msg.setTimeStamp(0.122581088236);
    msg.setSource(52240U);
    msg.setSourceEntity(51U);
    msg.setDestination(29489U);
    msg.setDestinationEntity(119U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.812217733884);
    msg.setSource(31825U);
    msg.setSourceEntity(119U);
    msg.setDestination(16785U);
    msg.setDestinationEntity(1U);
    msg.op = 152U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SXXUPQITIBJRNKDKNWHVXNHNSFTGJQGPECPBCENMJVLNOUSIKXTSHFSFOWKNJFTQDZBUBDWFXEVOMRTUQWUHBPSFRIIBPWMZVVZPYQGXTGASRLHICBOTVMXJEGYCXILTCHWJZKQYGTZACAUGYXKHSNOTNNSLGEELCFRIRMKQVJRGYDLDLKDOA");
    tmp_msg_0.lat = 0.690366351723;
    tmp_msg_0.lon = 0.00944038924043;
    tmp_msg_0.depth = 0.687750251243;
    tmp_msg_0.query_channel = 42U;
    tmp_msg_0.reply_channel = 194U;
    tmp_msg_0.transponder_delay = 226U;
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
    msg.setTimeStamp(0.382606304514);
    msg.setSource(25290U);
    msg.setSourceEntity(133U);
    msg.setDestination(3584U);
    msg.setDestinationEntity(109U);
    msg.op = 188U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZQEBCFJVKOKIWWGDOKOYUCZXNEGNVMVZJRWVXTRGUTYQWDPESXZCYLMZYLHKJNSCWIBJBIQUXDJUASBWLEQODJCTJHKXHEKKHYSHUJBTLQAIRRFIZFDGOWRMVWVGUYHSRIQ");
    tmp_msg_0.lat = 0.109540238446;
    tmp_msg_0.lon = 0.919263776901;
    tmp_msg_0.depth = 0.774572555375;
    tmp_msg_0.query_channel = 229U;
    tmp_msg_0.reply_channel = 225U;
    tmp_msg_0.transponder_delay = 201U;
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
    msg.setTimeStamp(0.369299184334);
    msg.setSource(35643U);
    msg.setSourceEntity(242U);
    msg.setDestination(57448U);
    msg.setDestinationEntity(241U);
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.0274260925795;
    tmp_msg_0.roll = 22432U;
    tmp_msg_0.pitch = 50761U;
    tmp_msg_0.yaw = 46748U;
    tmp_msg_0.speed = 17456;
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
    msg.setTimeStamp(0.283556619305);
    msg.setSource(1510U);
    msg.setSourceEntity(112U);
    msg.setDestination(11595U);
    msg.setDestinationEntity(125U);
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 94U;
    tmp_msg_0.range = 0.0396225053832;
    tmp_msg_0.acceptance = 9U;
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
    msg.setTimeStamp(0.353696861674);
    msg.setSource(57989U);
    msg.setSourceEntity(27U);
    msg.setDestination(55652U);
    msg.setDestinationEntity(20U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XDMGDWBRYMYFRMRBMOTWIQHNQJKPEPGTOVFXATDPVJJBLSKZBYRZZIJNCPAQWSAAUAGYCFONKEHLIPJKVTUOYLVQDGFQHEGXMDIPUEKUBIXURCFJDSZJXLSHTYOPRNEACWDWVKKIYTELGHXZWUTFHCFBNEZCSNLXOSEDKVWNULFKQCVIMDN");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 56402U;
    tmp_tmp_msg_0_0.lat = 0.45958530535;
    tmp_tmp_msg_0_0.lon = 0.361026250558;
    tmp_tmp_msg_0_0.z = 0.0830884974525;
    tmp_tmp_msg_0_0.z_units = 23U;
    tmp_tmp_msg_0_0.speed = 0.672867567953;
    tmp_tmp_msg_0_0.speed_units = 178U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.600236103798;
    tmp_tmp_tmp_msg_0_0_0.y = 0.355528107004;
    tmp_tmp_tmp_msg_0_0_0.z = 0.45107857294;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("BJPBXEOCKXEUWKDKKCFZSBPXGITMUQCQFNGLHERVAJPAZAGNAXUEQIC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanDBState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_count = 58975U;
    tmp_tmp_msg_0_1.plan_size = 1921877897U;
    tmp_tmp_msg_0_1.change_time = 0.915116427945;
    tmp_tmp_msg_0_1.change_sid = 52995U;
    tmp_tmp_msg_0_1.change_sname.assign("FUCGAQJVLLWFMVOVQGDPCWHMRVIE");
    const char tmp_tmp_tmp_msg_0_1_0[] = {67, 38, -9, -79, -118, -79, 22, -32, -96, 73, -99, -96, 105, -34, -1, -123, 120, -126, 5, 104, -70, 58, 107, 48, 119, 52, -128, -111, 23, 110, -105, -34, 114, 114, -25, -71, -16, 29, -67, 13, -102, -66, -25, -53, -107, -117, -25, 82, 14, -86, 61, -108, 36, -12, -128, -6, 14, -67, 80, -69, -65, 23, 45, -81, 12, 67, 15, 79, 99, 8, -81, 104, -86, -81, -60, 22, 29, 95, -107, 92, -74, 71, -122, 55, -101, 109, -35, 69, -118, 59, 53, -123, -59, -44, -5, 55, 42, -2, 106, 37, 124, 0, 31, -4, -45, -47, 9, 79, -102, -80, 18, 110, -87, 115, -9, -54, -73, -39, -3, 103, -75, -94, -10, 43, -119, 15, 107, 90, 74, -5, 23, 126, -110, 82, 40, 15, -21, 81, -50, 4, 100, 108, -101, 60, 35, 41, -120, 36, -40, 38, 31, 38, -1, 3, 117, 17, -88, 85, 115, -66, -4, 95, -24, -127, -71, 117, 48, -127, -33, -9, 98, -118, -105, 70, 48, 73, -118, -107, 34, 54, -16, 70, 70, 63, 84, 31, 1, 126, 6, -87, 108, -68, 61, 124, 42, -63, 24, 103, -105, -90, 50, 89, 11, 92, -86, 43, -87, -88, 43, -74, 41, -125, 106, 53, -40, -46, 87, 119, 43, 86, 46, -103, -15};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityInfo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 125U;
    tmp_tmp_msg_0_2.label.assign("NITOAFFZFKPOKBADCGLLCXTOWPAEBCANAUDGEMPXXHPBJFAJZLHWWXFWJYSHFTISFYUMEFMTTSAEVHGQNIJOHNJBOBYSZUCZGWLKSNUHWCHVUENSYVGZSQNVXLMXPK");
    tmp_tmp_msg_0_2.component.assign("KEXWCHDUQRUATIIEEHLOBGFLVWRCEJUQWJHPUQLONMYERODMPHBCBVXTGCYIAMBHVAQZDHHI");
    tmp_tmp_msg_0_2.act_time = 48666U;
    tmp_tmp_msg_0_2.deact_time = 34819U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.00230090938914);
    msg.setSource(57526U);
    msg.setSourceEntity(232U);
    msg.setDestination(59044U);
    msg.setDestinationEntity(178U);
    msg.op = 7U;
    msg.system.assign("YHXPRPNIKHYEESCYFLBPUVGCBVVIJFZPXKMKEEVQLKBIZIZCHJLQYHJGJNICCEVBHMADFGUOVZDIQTOWHGQOAWRPKKAPKWAFBZVVLTAXTURDTVCDDLXCFRCOSKPMNNZS");
    msg.range = 0.250624697905;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.179992381697);
    msg.setSource(63795U);
    msg.setSourceEntity(151U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(201U);
    msg.op = 89U;
    msg.system.assign("OCSKZVZIIMHJTWLKCHLCOVZHEXYLKPBDUNFKANNTWPQGNUFZGSDXCTJUEQXTJAKYRDMMGRVETPBFKHSESTOBWNCKSALWQERVLVGFPGOVHXJCIMHFXPCDNATUFLVOYIAPAHOUEFWPEDLTBUXA");
    msg.range = 0.272792472779;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HSRPBKAKORWAWUSDHAYMOMVEMCGCDRTVZLGQXFNXDEQTOZRHANZIJATZJAOLGGOPIXPJLNHOSNRESUXIXCD");
    tmp_msg_0.value.assign("DCFRILTXSIGPLOQBHUKLEBPSKBUIOHRYNEQBGGZZNXCSBWVZLIKAYNHTBPKABJPMRSNQUCMAQROAWAOOSVYYQNXWLVHZBZGZXTGOXCFMHGREJHTCJIEGIPZSHTYXEJFADDEIBUCSXZPWWMOLSNWDTETVZZKQDCGAKONWVYBYFMILOKFECUVJNYFQEJRDWKLHYUJVLRSAFRHTJDJQVWOVYJMXUA");
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
    msg.setTimeStamp(0.362702049682);
    msg.setSource(46121U);
    msg.setSourceEntity(38U);
    msg.setDestination(59168U);
    msg.setDestinationEntity(177U);
    msg.op = 199U;
    msg.system.assign("JVUNZYXBPYLCZUVRIVQUTKRRCDWHDPPIXRJCDITPEWNIFAZYWCQGKEYBETUFDHWMQMSFXGJCHIWSOHINYFAPKENHVOXWZDLTRIRQKAPSAAQNECASVLFHSOJDQUYRMNGNLDPEOTLVKKKZLGQFDQJLOFRYFVSGXSBSBMMXKZNNDUSUOVM");
    msg.range = 0.296857813259;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.848557720738;
    tmp_msg_0.lon = 0.614051286903;
    tmp_msg_0.z = 0.395980932939;
    tmp_msg_0.z_units = 15U;
    tmp_msg_0.radius = 0.887521885606;
    tmp_msg_0.duration = 36880U;
    tmp_msg_0.speed = 0.472370697735;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.custom.assign("XRUUHZIGWVKOREHZOPUUCDJYQWPGKTFNIOZSNNRAFEKQNFNKDPCQOHMLNRYVECAZIPJCSVZTCDKDBVXTLCKBGUXONHLACBRZFMXAWCHLGFMPVIIUNJUGWHXSGBRAJJWSZFMJQBASMVVWOTERLXTACXPJLLMQKRSFYBPMLOBIKI");
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
    msg.setTimeStamp(0.204755188896);
    msg.setSource(55089U);
    msg.setSourceEntity(221U);
    msg.setDestination(29215U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.817611822083);
    msg.setSource(52749U);
    msg.setSourceEntity(128U);
    msg.setDestination(32779U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.884476878617);
    msg.setSource(61951U);
    msg.setSourceEntity(55U);
    msg.setDestination(34669U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.300695067671);
    msg.setSource(9177U);
    msg.setSourceEntity(121U);
    msg.setDestination(15983U);
    msg.setDestinationEntity(84U);
    msg.list.assign("IXSYYCUTTAZYNPAFPNDPYVJNJHKBGVETXGYDLSJWWMMCTSLPOVQLJFAKEVUDBAESLSEIXBJZZURQELSDUTKDNBRMMHCYUIGKFBQMHKEEKQMKWTZSFFREUWGIRJKCXZBONJXNVBVPQOWCPMTMCHXAQZODXOZWILHIWWHLPNOTYWRRFOWUYQBJVNHKGYAOFJBJKPGAMLGRDRGCFFCOHGNSDFTZI");

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
    msg.setTimeStamp(0.657755717749);
    msg.setSource(12000U);
    msg.setSourceEntity(87U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(203U);
    msg.list.assign("FWCSUDHASGGLWEVQWSDSGJDAZNUOSRPUPWTPJUANCLJMAUYVQQHPZFWWUYLLPKZOTBNHCICDADENBROMGRVAHRTXTKAQMNMFJGECPEFJRILVYTKRCWWUFCMBUKGCAHZHFUBINZHOXOVBBQDDRDVVIFDSYXTHITRRLMXVXKBZTQJJMNAEEKSJCQYPEHBYOECAOZOYMVOSITEYJPYISRWIXQBGXKQFIGEOVUFXGMDNWN");

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
    msg.setTimeStamp(0.62388361073);
    msg.setSource(10107U);
    msg.setSourceEntity(30U);
    msg.setDestination(41854U);
    msg.setDestinationEntity(52U);
    msg.list.assign("HVJBMZBASNXDALFXGYJLCDQHXCBLIYCTGEKCU");

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
    msg.setTimeStamp(0.558908322679);
    msg.setSource(48419U);
    msg.setSourceEntity(146U);
    msg.setDestination(20428U);
    msg.setDestinationEntity(227U);
    msg.peer.assign("AGTXYXQSBTQDWFLOVZNZBUGAMYFVBYXOIXHVCPTUYRPIUGAUEHSAHYHDNWEAHIRPCGEGEGRDRTVZJMLCPYIHMKXWOEOFQDVCPBUQDFZMEG");
    msg.rssi = 0.974008962816;
    msg.integrity = 1920U;

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
    msg.setTimeStamp(0.485403150188);
    msg.setSource(37143U);
    msg.setSourceEntity(97U);
    msg.setDestination(9550U);
    msg.setDestinationEntity(161U);
    msg.peer.assign("GYFOUGQZWUKWUXIQJURZGTPBRWNRVPAZBJGSAFJVICXJRXHXCAHEDYKSPIQDMPBATJSLMOJCZTXDNTPIAAEQHMCFALVVTNTJWXEOPYJOVXYUTAYMZDEYQFUWSRODRKCHXLSOMCMIRNLUEEZLOMHYPLWVMEBGAVZILUBUDKBKODBV");
    msg.rssi = 0.0293992266616;
    msg.integrity = 54725U;

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
    msg.setTimeStamp(0.0842165225181);
    msg.setSource(12019U);
    msg.setSourceEntity(225U);
    msg.setDestination(53087U);
    msg.setDestinationEntity(19U);
    msg.peer.assign("UGZYKHCJXHSSTACXLBKWVWIHEQVXIZZENTKNWSRGUPUIASQHVHSPFKDYQFKTJDHVVOOYTFIREQEURXLURKPPCOFLXMCRHXAMRKQHWKUFDXBBN");
    msg.rssi = 0.283146673923;
    msg.integrity = 49580U;

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
    msg.setTimeStamp(0.792671308205);
    msg.setSource(20732U);
    msg.setSourceEntity(77U);
    msg.setDestination(28495U);
    msg.setDestinationEntity(158U);
    msg.value = -8524;

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
    msg.setTimeStamp(0.762180145051);
    msg.setSource(50751U);
    msg.setSourceEntity(32U);
    msg.setDestination(48664U);
    msg.setDestinationEntity(15U);
    msg.value = 6279;

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
    msg.setTimeStamp(0.544233515396);
    msg.setSource(37121U);
    msg.setSourceEntity(220U);
    msg.setDestination(9189U);
    msg.setDestinationEntity(179U);
    msg.value = -29185;

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
    msg.setTimeStamp(0.746604559078);
    msg.setSource(26168U);
    msg.setSourceEntity(198U);
    msg.setDestination(44238U);
    msg.setDestinationEntity(211U);
    msg.value = 0.250955605938;

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
    msg.setTimeStamp(0.845533594561);
    msg.setSource(33859U);
    msg.setSourceEntity(64U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(216U);
    msg.value = 0.366656714105;

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
    msg.setTimeStamp(0.163389975736);
    msg.setSource(9604U);
    msg.setSourceEntity(38U);
    msg.setDestination(14096U);
    msg.setDestinationEntity(42U);
    msg.value = 0.613014266723;

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
    msg.setTimeStamp(0.409751003447);
    msg.setSource(27229U);
    msg.setSourceEntity(77U);
    msg.setDestination(10736U);
    msg.setDestinationEntity(136U);
    msg.value = 0.293317315957;

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
    msg.setTimeStamp(0.747198627789);
    msg.setSource(25129U);
    msg.setSourceEntity(123U);
    msg.setDestination(62346U);
    msg.setDestinationEntity(214U);
    msg.value = 0.126540933932;

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
    msg.setTimeStamp(0.782349269535);
    msg.setSource(29903U);
    msg.setSourceEntity(210U);
    msg.setDestination(44426U);
    msg.setDestinationEntity(122U);
    msg.value = 0.367571500672;

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
    msg.setTimeStamp(0.631890952534);
    msg.setSource(33474U);
    msg.setSourceEntity(24U);
    msg.setDestination(35351U);
    msg.setDestinationEntity(136U);
    msg.validity = 25593U;
    msg.type = 57U;
    msg.utc_year = 54206U;
    msg.utc_month = 52U;
    msg.utc_day = 202U;
    msg.utc_time = 0.421511063734;
    msg.lat = 0.487733039038;
    msg.lon = 0.719085871662;
    msg.height = 0.716269655195;
    msg.satellites = 24U;
    msg.cog = 0.571105527849;
    msg.sog = 0.399698685559;
    msg.hdop = 0.218115517554;
    msg.vdop = 0.337650869247;
    msg.hacc = 0.131670089803;
    msg.vacc = 0.540946021875;

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
    msg.setTimeStamp(0.761671655526);
    msg.setSource(56565U);
    msg.setSourceEntity(231U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(225U);
    msg.validity = 46762U;
    msg.type = 210U;
    msg.utc_year = 57885U;
    msg.utc_month = 75U;
    msg.utc_day = 128U;
    msg.utc_time = 0.991348240914;
    msg.lat = 0.876247439716;
    msg.lon = 0.982513551892;
    msg.height = 0.164420980116;
    msg.satellites = 67U;
    msg.cog = 0.594411584785;
    msg.sog = 0.592538731993;
    msg.hdop = 0.239974197393;
    msg.vdop = 0.48435060316;
    msg.hacc = 0.234080649525;
    msg.vacc = 0.808834602265;

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
    msg.setTimeStamp(0.982213130799);
    msg.setSource(35282U);
    msg.setSourceEntity(187U);
    msg.setDestination(40025U);
    msg.setDestinationEntity(96U);
    msg.validity = 57360U;
    msg.type = 81U;
    msg.utc_year = 44378U;
    msg.utc_month = 158U;
    msg.utc_day = 229U;
    msg.utc_time = 0.330836371638;
    msg.lat = 0.992414538332;
    msg.lon = 0.0491249929865;
    msg.height = 0.775848361314;
    msg.satellites = 53U;
    msg.cog = 0.965575040231;
    msg.sog = 0.638083758507;
    msg.hdop = 0.466635117309;
    msg.vdop = 0.480522735686;
    msg.hacc = 0.468108680856;
    msg.vacc = 0.911553778235;

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
    msg.setTimeStamp(0.0658984301935);
    msg.setSource(25587U);
    msg.setSourceEntity(209U);
    msg.setDestination(24921U);
    msg.setDestinationEntity(238U);
    msg.time = 0.275719219662;
    msg.phi = 0.771522402732;
    msg.theta = 0.414070350009;
    msg.psi = 0.987893293917;
    msg.psi_magnetic = 0.371793182703;

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
    msg.setTimeStamp(0.401273429479);
    msg.setSource(18726U);
    msg.setSourceEntity(233U);
    msg.setDestination(42557U);
    msg.setDestinationEntity(81U);
    msg.time = 0.385066660567;
    msg.phi = 0.0632798791508;
    msg.theta = 0.459090060473;
    msg.psi = 0.361936555827;
    msg.psi_magnetic = 0.723868803106;

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
    msg.setTimeStamp(0.0893173325148);
    msg.setSource(55027U);
    msg.setSourceEntity(40U);
    msg.setDestination(60178U);
    msg.setDestinationEntity(26U);
    msg.time = 0.0533293326658;
    msg.phi = 0.00269862419639;
    msg.theta = 0.0593714396991;
    msg.psi = 0.632063394832;
    msg.psi_magnetic = 0.572393837375;

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
    msg.setTimeStamp(0.795184195695);
    msg.setSource(49679U);
    msg.setSourceEntity(225U);
    msg.setDestination(59613U);
    msg.setDestinationEntity(244U);
    msg.time = 0.809656749802;
    msg.x = 0.607999028847;
    msg.y = 0.617910355305;
    msg.z = 0.960285110605;
    msg.timestep = 0.409676519173;

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
    msg.setTimeStamp(0.163891286879);
    msg.setSource(60379U);
    msg.setSourceEntity(98U);
    msg.setDestination(45776U);
    msg.setDestinationEntity(235U);
    msg.time = 0.000311763743945;
    msg.x = 0.681205168798;
    msg.y = 0.157818945421;
    msg.z = 0.23102220929;
    msg.timestep = 0.664566281428;

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
    msg.setTimeStamp(0.386129295);
    msg.setSource(35767U);
    msg.setSourceEntity(84U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(133U);
    msg.time = 0.0588229687347;
    msg.x = 0.164572608001;
    msg.y = 0.225925480768;
    msg.z = 0.247379460158;
    msg.timestep = 0.0559410060774;

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
    msg.setTimeStamp(0.393348825182);
    msg.setSource(36150U);
    msg.setSourceEntity(95U);
    msg.setDestination(43083U);
    msg.setDestinationEntity(137U);
    msg.time = 0.461275202891;
    msg.x = 0.381628355655;
    msg.y = 0.282404651753;
    msg.z = 0.934588681353;

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
    msg.setTimeStamp(0.779251631037);
    msg.setSource(56610U);
    msg.setSourceEntity(119U);
    msg.setDestination(3148U);
    msg.setDestinationEntity(203U);
    msg.time = 0.404960474167;
    msg.x = 0.886024024705;
    msg.y = 0.727949778387;
    msg.z = 0.882358121781;

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
    msg.setTimeStamp(0.794916582002);
    msg.setSource(52731U);
    msg.setSourceEntity(85U);
    msg.setDestination(32622U);
    msg.setDestinationEntity(91U);
    msg.time = 0.588472698099;
    msg.x = 0.0204129274362;
    msg.y = 0.464913534243;
    msg.z = 0.753336680212;

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
    msg.setTimeStamp(0.851825816846);
    msg.setSource(20812U);
    msg.setSourceEntity(15U);
    msg.setDestination(52259U);
    msg.setDestinationEntity(67U);
    msg.time = 0.789576127089;
    msg.x = 0.129985594927;
    msg.y = 0.999194294477;
    msg.z = 0.138961831858;

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
    msg.setTimeStamp(0.386067147419);
    msg.setSource(22592U);
    msg.setSourceEntity(187U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(135U);
    msg.time = 0.489516621461;
    msg.x = 0.238106568581;
    msg.y = 0.827458446418;
    msg.z = 0.384636860536;

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
    msg.setTimeStamp(0.601029934167);
    msg.setSource(5238U);
    msg.setSourceEntity(11U);
    msg.setDestination(6827U);
    msg.setDestinationEntity(192U);
    msg.time = 0.368827350479;
    msg.x = 0.95129214379;
    msg.y = 0.990707775956;
    msg.z = 0.367064821624;

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
    msg.setTimeStamp(0.360510671127);
    msg.setSource(17380U);
    msg.setSourceEntity(166U);
    msg.setDestination(810U);
    msg.setDestinationEntity(49U);
    msg.time = 0.309176160635;
    msg.x = 0.753013427495;
    msg.y = 0.725289667226;
    msg.z = 0.62102382871;

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
    msg.setTimeStamp(0.717483605687);
    msg.setSource(30516U);
    msg.setSourceEntity(155U);
    msg.setDestination(960U);
    msg.setDestinationEntity(226U);
    msg.time = 0.0767301551271;
    msg.x = 0.937101709333;
    msg.y = 0.988135420323;
    msg.z = 0.589046163671;

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
    msg.setTimeStamp(0.302263091849);
    msg.setSource(333U);
    msg.setSourceEntity(234U);
    msg.setDestination(46803U);
    msg.setDestinationEntity(139U);
    msg.time = 0.6133584448;
    msg.x = 0.350243929067;
    msg.y = 0.314307486327;
    msg.z = 0.459184827623;

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
    msg.setTimeStamp(0.0561507033563);
    msg.setSource(54262U);
    msg.setSourceEntity(233U);
    msg.setDestination(61038U);
    msg.setDestinationEntity(113U);
    msg.validity = 222U;
    msg.x = 0.0409621433114;
    msg.y = 0.770990511934;
    msg.z = 0.346753395343;

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
    msg.setTimeStamp(0.124088007658);
    msg.setSource(52625U);
    msg.setSourceEntity(126U);
    msg.setDestination(27531U);
    msg.setDestinationEntity(135U);
    msg.validity = 239U;
    msg.x = 0.511570057309;
    msg.y = 0.0120714516523;
    msg.z = 0.510776891489;

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
    msg.setTimeStamp(0.361710721432);
    msg.setSource(59332U);
    msg.setSourceEntity(162U);
    msg.setDestination(7342U);
    msg.setDestinationEntity(20U);
    msg.validity = 236U;
    msg.x = 0.455264725151;
    msg.y = 0.686452384733;
    msg.z = 0.0572507266298;

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
    msg.setTimeStamp(0.421050623062);
    msg.setSource(28562U);
    msg.setSourceEntity(154U);
    msg.setDestination(17876U);
    msg.setDestinationEntity(204U);
    msg.validity = 23U;
    msg.x = 0.821048352437;
    msg.y = 0.645980139871;
    msg.z = 0.528022387687;

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
    msg.setTimeStamp(0.398103216471);
    msg.setSource(53493U);
    msg.setSourceEntity(134U);
    msg.setDestination(47911U);
    msg.setDestinationEntity(125U);
    msg.validity = 27U;
    msg.x = 0.83336187318;
    msg.y = 0.80094402084;
    msg.z = 0.153982129523;

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
    msg.setTimeStamp(0.483676430523);
    msg.setSource(19589U);
    msg.setSourceEntity(166U);
    msg.setDestination(17317U);
    msg.setDestinationEntity(211U);
    msg.validity = 158U;
    msg.x = 0.499780609875;
    msg.y = 0.686311031038;
    msg.z = 0.427395145145;

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
    msg.setTimeStamp(0.622649651609);
    msg.setSource(25773U);
    msg.setSourceEntity(62U);
    msg.setDestination(1429U);
    msg.setDestinationEntity(214U);
    msg.time = 0.794775504452;
    msg.x = 0.0177841598922;
    msg.y = 0.750756285515;
    msg.z = 0.572123855634;

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
    msg.setTimeStamp(0.629478923498);
    msg.setSource(55021U);
    msg.setSourceEntity(210U);
    msg.setDestination(16137U);
    msg.setDestinationEntity(192U);
    msg.time = 0.541577150267;
    msg.x = 0.969810722175;
    msg.y = 0.00786640668963;
    msg.z = 0.892744453257;

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
    msg.setTimeStamp(0.898354808577);
    msg.setSource(5461U);
    msg.setSourceEntity(228U);
    msg.setDestination(18578U);
    msg.setDestinationEntity(177U);
    msg.time = 0.52612026552;
    msg.x = 0.855614786131;
    msg.y = 0.275299804937;
    msg.z = 0.594870036269;

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
    msg.setTimeStamp(0.355982542772);
    msg.setSource(19394U);
    msg.setSourceEntity(219U);
    msg.setDestination(6612U);
    msg.setDestinationEntity(187U);
    msg.validity = 95U;
    msg.value = 0.857116925298;

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
    msg.setTimeStamp(0.391886489204);
    msg.setSource(25395U);
    msg.setSourceEntity(183U);
    msg.setDestination(33859U);
    msg.setDestinationEntity(22U);
    msg.validity = 198U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.834601963647;
    tmp_msg_0.y = 0.749215240647;
    tmp_msg_0.z = 0.0897618728955;
    tmp_msg_0.phi = 0.747924048619;
    tmp_msg_0.theta = 0.0854588583655;
    tmp_msg_0.psi = 0.328496580319;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.275826643855;
    tmp_msg_1.beam_height = 0.769907326893;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.195064281745;

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
    msg.setTimeStamp(0.545056411585);
    msg.setSource(29705U);
    msg.setSourceEntity(99U);
    msg.setDestination(12958U);
    msg.setDestinationEntity(96U);
    msg.validity = 216U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.26548667418;
    tmp_msg_0.y = 0.838112302232;
    tmp_msg_0.z = 0.775164654275;
    tmp_msg_0.phi = 0.904989282117;
    tmp_msg_0.theta = 0.287555413585;
    tmp_msg_0.psi = 0.413578843312;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.529052226009;
    tmp_msg_1.beam_height = 0.157672976488;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.358974294062;

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
    msg.setTimeStamp(0.166598876661);
    msg.setSource(54309U);
    msg.setSourceEntity(85U);
    msg.setDestination(26841U);
    msg.setDestinationEntity(48U);
    msg.value = 0.271995395588;

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
    msg.setTimeStamp(0.727359645937);
    msg.setSource(58913U);
    msg.setSourceEntity(134U);
    msg.setDestination(53369U);
    msg.setDestinationEntity(131U);
    msg.value = 0.645929167748;

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
    msg.setTimeStamp(0.297877129224);
    msg.setSource(10103U);
    msg.setSourceEntity(79U);
    msg.setDestination(48882U);
    msg.setDestinationEntity(254U);
    msg.value = 0.843170106697;

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
    msg.setTimeStamp(0.727783009951);
    msg.setSource(43800U);
    msg.setSourceEntity(29U);
    msg.setDestination(32593U);
    msg.setDestinationEntity(92U);
    msg.value = 0.710904738366;

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
    msg.setTimeStamp(0.459457608978);
    msg.setSource(36334U);
    msg.setSourceEntity(167U);
    msg.setDestination(34254U);
    msg.setDestinationEntity(101U);
    msg.value = 0.160660013849;

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
    msg.setTimeStamp(0.97328251164);
    msg.setSource(24035U);
    msg.setSourceEntity(135U);
    msg.setDestination(25626U);
    msg.setDestinationEntity(195U);
    msg.value = 0.608827309033;

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
    msg.setTimeStamp(0.396805892108);
    msg.setSource(55055U);
    msg.setSourceEntity(10U);
    msg.setDestination(46418U);
    msg.setDestinationEntity(47U);
    msg.value = 0.483308404345;

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
    msg.setTimeStamp(0.781422752264);
    msg.setSource(52610U);
    msg.setSourceEntity(198U);
    msg.setDestination(4524U);
    msg.setDestinationEntity(53U);
    msg.value = 0.524171450031;

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
    msg.setTimeStamp(0.657905692169);
    msg.setSource(60648U);
    msg.setSourceEntity(161U);
    msg.setDestination(6211U);
    msg.setDestinationEntity(106U);
    msg.value = 0.145280278397;

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
    msg.setTimeStamp(0.786493866782);
    msg.setSource(28125U);
    msg.setSourceEntity(158U);
    msg.setDestination(36588U);
    msg.setDestinationEntity(66U);
    msg.value = 0.574736222257;

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
    msg.setTimeStamp(0.643436469678);
    msg.setSource(21064U);
    msg.setSourceEntity(88U);
    msg.setDestination(22784U);
    msg.setDestinationEntity(92U);
    msg.value = 0.0124836209725;

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
    msg.setTimeStamp(0.308006145807);
    msg.setSource(30028U);
    msg.setSourceEntity(109U);
    msg.setDestination(31813U);
    msg.setDestinationEntity(236U);
    msg.value = 0.391346928057;

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
    msg.setTimeStamp(0.366829708653);
    msg.setSource(50336U);
    msg.setSourceEntity(226U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(235U);
    msg.value = 0.210474709347;

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
    msg.setTimeStamp(0.638710261577);
    msg.setSource(51003U);
    msg.setSourceEntity(150U);
    msg.setDestination(50873U);
    msg.setDestinationEntity(1U);
    msg.value = 0.128671752374;

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
    msg.setTimeStamp(0.272011691078);
    msg.setSource(26942U);
    msg.setSourceEntity(52U);
    msg.setDestination(58813U);
    msg.setDestinationEntity(168U);
    msg.value = 0.332816867719;

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
    msg.setTimeStamp(0.0990682292824);
    msg.setSource(2846U);
    msg.setSourceEntity(20U);
    msg.setDestination(2720U);
    msg.setDestinationEntity(192U);
    msg.value = 0.967714438241;

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
    msg.setTimeStamp(0.239903511155);
    msg.setSource(47010U);
    msg.setSourceEntity(62U);
    msg.setDestination(16801U);
    msg.setDestinationEntity(128U);
    msg.value = 0.619670350376;

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
    msg.setTimeStamp(0.917750510069);
    msg.setSource(23785U);
    msg.setSourceEntity(128U);
    msg.setDestination(43239U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0689620438567;

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
    msg.setTimeStamp(0.447011882173);
    msg.setSource(3065U);
    msg.setSourceEntity(237U);
    msg.setDestination(55987U);
    msg.setDestinationEntity(197U);
    msg.value = 0.0266091090186;

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
    msg.setTimeStamp(0.324440070609);
    msg.setSource(4218U);
    msg.setSourceEntity(250U);
    msg.setDestination(51864U);
    msg.setDestinationEntity(80U);
    msg.value = 0.919100824356;

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
    msg.setTimeStamp(0.191664350539);
    msg.setSource(30138U);
    msg.setSourceEntity(148U);
    msg.setDestination(4685U);
    msg.setDestinationEntity(190U);
    msg.value = 0.795314245119;

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
    msg.setTimeStamp(0.919254808563);
    msg.setSource(12443U);
    msg.setSourceEntity(102U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(189U);
    msg.value = 0.996009721856;

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
    msg.setTimeStamp(0.597122550728);
    msg.setSource(38523U);
    msg.setSourceEntity(139U);
    msg.setDestination(1126U);
    msg.setDestinationEntity(140U);
    msg.value = 0.458683459766;

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
    msg.setTimeStamp(0.154334121741);
    msg.setSource(2151U);
    msg.setSourceEntity(169U);
    msg.setDestination(20531U);
    msg.setDestinationEntity(57U);
    msg.value = 0.990349755643;

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
    msg.setTimeStamp(0.237960954019);
    msg.setSource(3618U);
    msg.setSourceEntity(168U);
    msg.setDestination(10617U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.488979412002;
    msg.speed = 0.501443755586;
    msg.turbulence = 0.990479670599;

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
    msg.setTimeStamp(0.0889114525304);
    msg.setSource(15996U);
    msg.setSourceEntity(123U);
    msg.setDestination(1515U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.6735558485;
    msg.speed = 0.308803897306;
    msg.turbulence = 0.423904879063;

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
    msg.setTimeStamp(0.402265698782);
    msg.setSource(24721U);
    msg.setSourceEntity(226U);
    msg.setDestination(18068U);
    msg.setDestinationEntity(106U);
    msg.direction = 0.450870330685;
    msg.speed = 0.0433167134914;
    msg.turbulence = 0.917263369694;

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
    msg.setTimeStamp(0.439171745012);
    msg.setSource(36589U);
    msg.setSourceEntity(53U);
    msg.setDestination(3779U);
    msg.setDestinationEntity(119U);
    msg.value = 0.850026742728;

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
    msg.setTimeStamp(0.975888625973);
    msg.setSource(46094U);
    msg.setSourceEntity(110U);
    msg.setDestination(24926U);
    msg.setDestinationEntity(96U);
    msg.value = 0.0668918488825;

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
    msg.setTimeStamp(0.360440949464);
    msg.setSource(25020U);
    msg.setSourceEntity(30U);
    msg.setDestination(46701U);
    msg.setDestinationEntity(229U);
    msg.value = 0.539740082266;

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
    msg.setTimeStamp(0.014256715935);
    msg.setSource(51738U);
    msg.setSourceEntity(94U);
    msg.setDestination(24074U);
    msg.setDestinationEntity(67U);
    msg.value.assign("QOPSGUJRGWRBZWBLGUTDMHNIYJUMZOEOXELFLVPVHYJTNPUNAYPISAMXHCWVMOHCOJZRKHAVQGFSKVDFRKLPBSABDPXDLRUATWIMGEUONUGAODF");

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
    msg.setTimeStamp(0.462887304299);
    msg.setSource(58192U);
    msg.setSourceEntity(242U);
    msg.setDestination(43629U);
    msg.setDestinationEntity(103U);
    msg.value.assign("SCRFWTHPTGNWMLYVGRFLGMYYJUHNQCYBVFDXOZWXIIHIGCLQAZGVLLTAQZIUTZYMUSQADCDHEOOBNFOQXEVJMIXNKTSKTWHNKVWRVUBJOVODZQGPEMSPFHQIPYVMUAXJYXLIWRSSTEFJBQJBNKMZNEBAFUOTBNLKRKSMZMGICGDCEGVGELJCIKHUXXYWDKREBDIVYJRQ");

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
    msg.setTimeStamp(0.524551986339);
    msg.setSource(16546U);
    msg.setSourceEntity(87U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(224U);
    msg.value.assign("VXQHFJZLYJBROSVXMEHOAWRCKTORGRNMPTXJUJWUNGBXJYADLZMMFNNDDQJXFRSYCAJATZGTMOSVPN");

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
    msg.setTimeStamp(0.122419228033);
    msg.setSource(21654U);
    msg.setSourceEntity(151U);
    msg.setDestination(47933U);
    msg.setDestinationEntity(186U);
    const char tmp_msg_0[] = {35, 87, -102, -17, -53, -22, 110, 44, 35, -88, 93, -15, 39, -40, 32, -62, 70, -93, -68, -14, -10, -25, 73, 55, 6, -58, -5, -53, -56, 110, -10, 46, -76, 105, 62, 43, 108, 23, -73, 14, -60, -102, -115, 78, -17, 30, 30, 111, 73, -4, -111, 31, 96, -7, 96, 116, -91, -101, 2, 43, 37, -52, -22, -49, 32, 39, 119, 119, -18, -48, -93, -121, -81, 1, -11, -22, -33, -88, -48, -18, 93, -31, -18, 41, -78, 45, -124, -122, 91, -16, -109, 96, -73, -23, -29, 96, -95, 70, -12, -108, -12, -103, -50, -66, 119, -27, -99, -9, -13, -48, 57, 66, -2, -125, -16, -119, -106, -27, 106, -21, 69, -63, -38, 124, 59, 65, -105, 44, 54, -6, 5, 52, 60, -60, -123, 102, 16, 93, 3, -56, 1, 78, -128, 27, -1, -62, 17, -17, 108, 50, -91, 112, -15, -108, -25, 12, 39, 9, -118, 9, -37, -112, 38, 23, -1, -89, -80, 56, -55, 101, 20, 38, 98, 20, -123, 0, -95, -101, -54, -126, 30, 32, -115, -28, 95, 69};
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
    msg.setTimeStamp(0.836389278351);
    msg.setSource(30881U);
    msg.setSourceEntity(34U);
    msg.setDestination(51216U);
    msg.setDestinationEntity(165U);
    const char tmp_msg_0[] = {-8, -33, -12, -95, -20, -112, 19, -48, 1, -95, 87, 110, 27, -64, -85, -20, -71, -22, -119, -75, 67, 28, 64, -57, -90, 57, 60, -78, -80, -62, 49, 21, -81, 112, -5, 111, -83, -33, 24, -120, -87, -123, 75, -1, 32, -61, 82, 39, 10, -119, 126, 76, 59, -112, 14, -126, 111, -31, -122, 70, 32, 85, -4, 71, 105, -128, 117, 41, -22, 126, -67, -49, 67, -7, -98, -22, 97, 64, -123, 125, -47, -59, 109, -37, 110, 7, 35, -114, -119, 58, -35, 104, 77, 103, 19, -67, -39, -29, -112, 123, 25, 80, -71, -111, 117, 110, -27, -21, -56, -8, -28, -71, 102, 97, 68, -82, -85, -105, -9, -73, -31, -111, 80, -85, 114, 111, -73, 34, 125, 88, -92, 102, -86, 40, -72, 115, 92, 117, -126, -79, -104, 54, -6, -21, -85, -66, 51, -47, 108, -84, 97, -94, -19, -74, -93, 2, -100, -17, -96, -40, 64, -64, 58, 105, -30, 37, 50, -122, -16, 72, -4, 67, 10, -116, 98, 39, 126, -97, 22, 74, -108, -106, 78, 114, -34, -17, -31, 69, 89, 110, -12, -14, 15, 98, -17, -33, 85, -48, 6, -115, -109, 93, -10, -64, 6, -94, -123, 93, 16, -128, -102, -82, -123, 89, 23, -123, 77, -20, 5, -35, -36, -57, -92, -4, -89, -80, 78, 120, 47, 122, 6, -116, 52, -106, 53, 55, -76, -109, 96, 73, 33, -126, -68};
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
    msg.setTimeStamp(0.943588820266);
    msg.setSource(56365U);
    msg.setSourceEntity(120U);
    msg.setDestination(15357U);
    msg.setDestinationEntity(18U);
    const char tmp_msg_0[] = {42, -4, 106, 3, -63, -16, -125, 126, -81, 92, -93, -53, 105, 12, 121, 26, -103, -59, -60, 12, 24, -50, -28, 120, 10, 15, -33, -20, 98, 73, -11, -21, -45, -92, 9, -101, 4, 90, -122, -13, 74, 122, -23, 117, 118, 68, -36, -53, 39};
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
    msg.setTimeStamp(0.874328043651);
    msg.setSource(62695U);
    msg.setSourceEntity(126U);
    msg.setDestination(32456U);
    msg.setDestinationEntity(114U);
    msg.type = 58U;
    msg.frequency = 3501034801U;
    msg.min_range = 39583U;
    msg.max_range = 49505U;
    msg.bits_per_point = 151U;
    msg.scale_factor = 0.612249911916;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.102998094628;
    tmp_msg_0.beam_height = 0.820136273406;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-95, 27, 68, 19, 79, -47, -109, -75, -55, 104, -10, 38, 119, -76, 35, 93, -12, 118, 89, -46, 83, -14, 113, -34, -48, -60, -61, -119, -14, -45, 106, -24, -4, 74, 26, -31, -25, 33, -78, -96, 13, -128, 119, -121, -57, 9, 71, -40, 0, 16, -24, 91, -36, -115, 64, -65, 62, 77, -122, -91, -86, 33, 0, 8, 32, -122, 73, 26, 65, 72, -15, 65, 62, -97, 113, 110, 36, -84, -92, -70, 105, -92, -98, 69, -44, 94, 92, -26, -31, 82, 126, -18, -27, -106, 27, 120, -53, 116, -111, 11, -51, -6, 113, 90, -122, 13, 18, 16, 41, 77, -68, -93, -84, -120, 29, -50, -36, -27, 69, -17, 48, 17, 36, 8, 98, -81, 84, -103, 83, -89, 43, 23, 1, -100, 55, -92, -18, -23, -116, -109, -48, 70, -96, -97, -71, -116, 98, 0, -31, 39, -50, 45, -71, 92, -11, 31, 72, -110, 102, 78, -98, -23, 65, 96, -84, 30, 18, -85, 79, 120, 71, -93, -38, 67, -78, -113, 40, 48, -25, 36, 12, 73, 6, -53, 45, -49, 18, -72, 79, -57, 82, 57, 101, 21, -114, 84, -5, -28, -111, 91, 8, -59, 113, 123, -16, 18, -23, 56, 4, 5, -29, 99, -127, -119, 122, -32, -45, 28, 32, -99, 89, 120, -67, 119, -70, 85, -113};
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
    msg.setTimeStamp(0.816129501621);
    msg.setSource(30168U);
    msg.setSourceEntity(148U);
    msg.setDestination(555U);
    msg.setDestinationEntity(30U);
    msg.type = 196U;
    msg.frequency = 1916800075U;
    msg.min_range = 23532U;
    msg.max_range = 40366U;
    msg.bits_per_point = 97U;
    msg.scale_factor = 0.792685856367;
    const char tmp_msg_0[] = {119, 58, 120, -124, 61, 118, -57, 122, 107, -70, -11, 91, -29, 106, -77, 58, -112, 97, -88, -5, 50, 53, -26, -47, -95, -34, 81, 64, -20, 11, 16, 50, -115, 92, -12, 117, -115, -122, 52, 35, -122, -27, 21, 80, -79, -97, 116, 1, 61, -46, 64, 24, 27, 59, 6, -24, -102, -43, 17, -78, -121, 88, -98, 34, 1, 52, -1, -107, -95};
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
    msg.setTimeStamp(0.387139890719);
    msg.setSource(42824U);
    msg.setSourceEntity(131U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(222U);
    msg.type = 221U;
    msg.frequency = 2128304979U;
    msg.min_range = 52177U;
    msg.max_range = 3801U;
    msg.bits_per_point = 68U;
    msg.scale_factor = 0.305565315698;
    const char tmp_msg_0[] = {-97, 19, -16, -83, -81, 54, -119, 49, -81, 83, 10, 41, 66, 92, -34, -78, 102, 92, -59, -102, -25, -83, 23, 11, 106, 49, -79, 24, 122, 107, -6, 123, 103, 62, 79, -98, 43, -87, -93, 6};
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
    msg.setTimeStamp(0.713879931028);
    msg.setSource(43300U);
    msg.setSourceEntity(218U);
    msg.setDestination(20208U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.228246149837);
    msg.setSource(53963U);
    msg.setSourceEntity(170U);
    msg.setDestination(49725U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.30217541866);
    msg.setSource(7825U);
    msg.setSourceEntity(182U);
    msg.setDestination(24256U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.652322938697);
    msg.setSource(9073U);
    msg.setSourceEntity(53U);
    msg.setDestination(26232U);
    msg.setDestinationEntity(8U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.0733331113047);
    msg.setSource(43704U);
    msg.setSourceEntity(251U);
    msg.setDestination(35608U);
    msg.setDestinationEntity(209U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.805895132924);
    msg.setSource(49769U);
    msg.setSourceEntity(108U);
    msg.setDestination(39489U);
    msg.setDestinationEntity(217U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.594866476301);
    msg.setSource(18133U);
    msg.setSourceEntity(209U);
    msg.setDestination(8504U);
    msg.setDestinationEntity(48U);
    msg.value = 0.159467690074;
    msg.confidence = 0.969667165332;
    msg.opmodes.assign("OKQXGIGDREYLJLQBWVYQTTEMKDBNQXCHPXODYUVPPAXVRYAHHGAHIHRWFKJUIPMONSE");

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
    msg.setTimeStamp(0.924339014864);
    msg.setSource(2094U);
    msg.setSourceEntity(73U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(224U);
    msg.value = 0.632334497201;
    msg.confidence = 0.218614869579;
    msg.opmodes.assign("JBPRFWHVTDDRHOUGHDUVHLCOOEMYIWIXJGUNZOJOKMKPAFLXGLTDOWFQTCDRPDETJUASMBPIOMNYCBVSZMKUQZEEQBLEOFTXKAJSJQGSKIGTWGNJWPYXTBIEARAJNVAVXZKRYVZRXRVNEIFHWSKETASZLGWIHXYXJKYGPUCUIVCLFLBRPFRPWHLNGUSBQWB");

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
    msg.setTimeStamp(0.898927713673);
    msg.setSource(41008U);
    msg.setSourceEntity(37U);
    msg.setDestination(16557U);
    msg.setDestinationEntity(8U);
    msg.value = 0.976595361499;
    msg.confidence = 0.947943717061;
    msg.opmodes.assign("PSTLFANGQVJKGKWCEKPHOHWSMJHLFEXCXKNKCXJOMGXQSVGJSRIFBFOIXJQWDPCGZWSSMRWFKPMINFNBYQYJTCZAVOGUVTKYPUPZDZWOIDVACPNQPCZHYLBDGHRUURCITNZEZQKFPOCBTUNJYQBYJTKDHEEFLDZEVDKOLVFFCNLTBPLHOWRJOGZBDAYLERBIMRVVAJTSGWTWMUNEYSMIYLQRDQAMUXEIQXABNWUMSRUZXEROXA");

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
    msg.setTimeStamp(0.801926510153);
    msg.setSource(49311U);
    msg.setSourceEntity(40U);
    msg.setDestination(53658U);
    msg.setDestinationEntity(244U);
    msg.itow = 1807332107U;
    msg.lat = 0.506877981989;
    msg.lon = 0.0075202490006;
    msg.height_ell = 0.378305680281;
    msg.height_sea = 0.700558506399;
    msg.hacc = 0.100370014431;
    msg.vacc = 0.126989843569;
    msg.vel_n = 0.92332281067;
    msg.vel_e = 0.969098615931;
    msg.vel_d = 0.980419058248;
    msg.speed = 0.109849144259;
    msg.gspeed = 0.0103243840596;
    msg.heading = 0.55010671532;
    msg.sacc = 0.47141540905;
    msg.cacc = 0.687877764744;

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
    msg.setTimeStamp(0.184184362168);
    msg.setSource(14149U);
    msg.setSourceEntity(78U);
    msg.setDestination(4711U);
    msg.setDestinationEntity(196U);
    msg.itow = 2567157427U;
    msg.lat = 0.74158624549;
    msg.lon = 0.985390322637;
    msg.height_ell = 0.966477154192;
    msg.height_sea = 0.528443388407;
    msg.hacc = 0.581414932454;
    msg.vacc = 0.708885455949;
    msg.vel_n = 0.247710618783;
    msg.vel_e = 0.238884874923;
    msg.vel_d = 0.678331630436;
    msg.speed = 0.865600371177;
    msg.gspeed = 0.431571475266;
    msg.heading = 0.779775230685;
    msg.sacc = 0.420050893568;
    msg.cacc = 0.271150310787;

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
    msg.setTimeStamp(0.424390332728);
    msg.setSource(46545U);
    msg.setSourceEntity(213U);
    msg.setDestination(633U);
    msg.setDestinationEntity(218U);
    msg.itow = 624747096U;
    msg.lat = 0.365139115749;
    msg.lon = 0.923112118425;
    msg.height_ell = 0.391673159381;
    msg.height_sea = 0.176243352448;
    msg.hacc = 0.174167340023;
    msg.vacc = 0.859516613396;
    msg.vel_n = 0.972008096933;
    msg.vel_e = 0.968903724596;
    msg.vel_d = 0.00334835987446;
    msg.speed = 0.823415011129;
    msg.gspeed = 0.0980497481195;
    msg.heading = 0.00190182524576;
    msg.sacc = 0.940196588885;
    msg.cacc = 0.832660778717;

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
    msg.setTimeStamp(0.541508678012);
    msg.setSource(33288U);
    msg.setSourceEntity(27U);
    msg.setDestination(45448U);
    msg.setDestinationEntity(203U);
    msg.id = 109U;
    msg.value = 0.339479572845;

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
    msg.setTimeStamp(0.0499820350187);
    msg.setSource(15996U);
    msg.setSourceEntity(202U);
    msg.setDestination(9281U);
    msg.setDestinationEntity(79U);
    msg.id = 159U;
    msg.value = 0.628283776701;

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
    msg.setTimeStamp(0.542942192002);
    msg.setSource(7337U);
    msg.setSourceEntity(210U);
    msg.setDestination(8861U);
    msg.setDestinationEntity(188U);
    msg.id = 46U;
    msg.value = 0.858222676912;

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
    msg.setTimeStamp(0.0721136198696);
    msg.setSource(6396U);
    msg.setSourceEntity(150U);
    msg.setDestination(55684U);
    msg.setDestinationEntity(79U);
    msg.x = 0.626796967172;
    msg.y = 0.611513624657;
    msg.z = 0.840123874116;
    msg.phi = 0.668224073869;
    msg.theta = 0.929385639151;
    msg.psi = 0.409704299994;

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
    msg.setTimeStamp(0.651856844274);
    msg.setSource(4476U);
    msg.setSourceEntity(217U);
    msg.setDestination(3540U);
    msg.setDestinationEntity(16U);
    msg.x = 0.817285752362;
    msg.y = 0.216173469242;
    msg.z = 0.417759680757;
    msg.phi = 0.203566533065;
    msg.theta = 0.178713511154;
    msg.psi = 0.861018959116;

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
    msg.setTimeStamp(0.374456579991);
    msg.setSource(64476U);
    msg.setSourceEntity(164U);
    msg.setDestination(41427U);
    msg.setDestinationEntity(104U);
    msg.x = 0.764826980542;
    msg.y = 0.276266834056;
    msg.z = 0.952296515164;
    msg.phi = 0.932427160073;
    msg.theta = 0.0530518666929;
    msg.psi = 0.525000347367;

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
    msg.setTimeStamp(0.611930069438);
    msg.setSource(20337U);
    msg.setSourceEntity(247U);
    msg.setDestination(10540U);
    msg.setDestinationEntity(117U);
    msg.beam_width = 0.0599827057417;
    msg.beam_height = 0.345486330049;

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
    msg.setTimeStamp(0.108272784971);
    msg.setSource(12175U);
    msg.setSourceEntity(17U);
    msg.setDestination(8222U);
    msg.setDestinationEntity(64U);
    msg.beam_width = 0.899413154788;
    msg.beam_height = 0.647400030406;

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
    msg.setTimeStamp(0.117905537482);
    msg.setSource(7079U);
    msg.setSourceEntity(141U);
    msg.setDestination(9778U);
    msg.setDestinationEntity(72U);
    msg.beam_width = 0.591374819307;
    msg.beam_height = 0.491004832265;

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
    msg.setTimeStamp(0.523798587013);
    msg.setSource(21421U);
    msg.setSourceEntity(190U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(157U);
    msg.sane = 25U;

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
    msg.setTimeStamp(0.458002106628);
    msg.setSource(41405U);
    msg.setSourceEntity(153U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(90U);
    msg.sane = 189U;

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
    msg.setTimeStamp(0.625959148783);
    msg.setSource(25294U);
    msg.setSourceEntity(254U);
    msg.setDestination(29633U);
    msg.setDestinationEntity(63U);
    msg.sane = 17U;

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
    msg.setTimeStamp(0.48269129821);
    msg.setSource(25432U);
    msg.setSourceEntity(191U);
    msg.setDestination(11786U);
    msg.setDestinationEntity(207U);
    msg.value = 0.126760561936;

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
    msg.setTimeStamp(0.201704465612);
    msg.setSource(6887U);
    msg.setSourceEntity(237U);
    msg.setDestination(51449U);
    msg.setDestinationEntity(103U);
    msg.value = 0.461965937433;

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
    msg.setTimeStamp(0.618149274021);
    msg.setSource(38121U);
    msg.setSourceEntity(43U);
    msg.setDestination(1950U);
    msg.setDestinationEntity(89U);
    msg.value = 0.916443341198;

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
    msg.setTimeStamp(0.639500860473);
    msg.setSource(24442U);
    msg.setSourceEntity(165U);
    msg.setDestination(44361U);
    msg.setDestinationEntity(145U);
    msg.value = 0.609744604781;

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
    msg.setTimeStamp(0.889112221421);
    msg.setSource(17053U);
    msg.setSourceEntity(108U);
    msg.setDestination(49926U);
    msg.setDestinationEntity(21U);
    msg.value = 0.920443547461;

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
    msg.setTimeStamp(0.743391134602);
    msg.setSource(5212U);
    msg.setSourceEntity(253U);
    msg.setDestination(3453U);
    msg.setDestinationEntity(13U);
    msg.value = 0.622701837003;

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
    msg.setTimeStamp(0.870723428887);
    msg.setSource(899U);
    msg.setSourceEntity(28U);
    msg.setDestination(36038U);
    msg.setDestinationEntity(225U);
    msg.value = 0.797180925895;

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
    msg.setTimeStamp(0.0851516555287);
    msg.setSource(36383U);
    msg.setSourceEntity(224U);
    msg.setDestination(47094U);
    msg.setDestinationEntity(0U);
    msg.value = 0.935813212149;

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
    msg.setTimeStamp(0.726679263534);
    msg.setSource(14133U);
    msg.setSourceEntity(147U);
    msg.setDestination(50730U);
    msg.setDestinationEntity(55U);
    msg.value = 0.15814928684;

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
    msg.setTimeStamp(0.0519217247105);
    msg.setSource(65072U);
    msg.setSourceEntity(108U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(15U);
    msg.value = 0.944414605191;

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
    msg.setTimeStamp(0.1195342184);
    msg.setSource(26071U);
    msg.setSourceEntity(214U);
    msg.setDestination(30780U);
    msg.setDestinationEntity(251U);
    msg.value = 0.646378185663;

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
    msg.setTimeStamp(0.313035117955);
    msg.setSource(48403U);
    msg.setSourceEntity(108U);
    msg.setDestination(21745U);
    msg.setDestinationEntity(237U);
    msg.value = 0.621242574184;

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
    msg.setTimeStamp(0.625358862893);
    msg.setSource(55308U);
    msg.setSourceEntity(122U);
    msg.setDestination(3489U);
    msg.setDestinationEntity(33U);
    msg.value = 0.98068637149;

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
    msg.setTimeStamp(0.461540944472);
    msg.setSource(46510U);
    msg.setSourceEntity(57U);
    msg.setDestination(35278U);
    msg.setDestinationEntity(253U);
    msg.value = 0.308108714869;

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
    msg.setTimeStamp(0.173460428709);
    msg.setSource(30760U);
    msg.setSourceEntity(143U);
    msg.setDestination(1959U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0301636975595;

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
    msg.setTimeStamp(0.332690730372);
    msg.setSource(27190U);
    msg.setSourceEntity(165U);
    msg.setDestination(47623U);
    msg.setDestinationEntity(137U);
    msg.value = 0.810420153907;

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
    msg.setTimeStamp(0.295467337381);
    msg.setSource(31536U);
    msg.setSourceEntity(158U);
    msg.setDestination(49628U);
    msg.setDestinationEntity(156U);
    msg.value = 0.904736167997;

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
    msg.setTimeStamp(0.24790663357);
    msg.setSource(57269U);
    msg.setSourceEntity(230U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(128U);
    msg.value = 0.266971149837;

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
    msg.setTimeStamp(0.335949361388);
    msg.setSource(65238U);
    msg.setSourceEntity(47U);
    msg.setDestination(25504U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0412523363636;

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
    msg.setTimeStamp(0.0813062205523);
    msg.setSource(44957U);
    msg.setSourceEntity(96U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(247U);
    msg.value = 0.629614729746;

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
    msg.setTimeStamp(0.878521857854);
    msg.setSource(8602U);
    msg.setSourceEntity(73U);
    msg.setDestination(49356U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0183260748561;

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
    msg.setTimeStamp(0.571913567847);
    msg.setSource(60941U);
    msg.setSourceEntity(122U);
    msg.setDestination(57996U);
    msg.setDestinationEntity(92U);
    msg.value = 0.324021511375;

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
    msg.setTimeStamp(0.635603862087);
    msg.setSource(5333U);
    msg.setSourceEntity(41U);
    msg.setDestination(14500U);
    msg.setDestinationEntity(6U);
    msg.value = 0.684069500474;

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
    msg.setTimeStamp(0.525511227323);
    msg.setSource(31208U);
    msg.setSourceEntity(234U);
    msg.setDestination(6367U);
    msg.setDestinationEntity(65U);
    msg.value = 0.20384584839;

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
    msg.setTimeStamp(0.600806595017);
    msg.setSource(65527U);
    msg.setSourceEntity(7U);
    msg.setDestination(59033U);
    msg.setDestinationEntity(152U);
    msg.validity = 58719U;
    msg.type = 254U;
    msg.tow = 3207581005U;
    msg.base_lat = 0.304586873989;
    msg.base_lon = 0.903209554003;
    msg.base_height = 0.909258103925;
    msg.n = 0.802737989471;
    msg.e = 0.298126441262;
    msg.d = 0.885569830783;
    msg.v_n = 0.187445114791;
    msg.v_e = 0.653224486727;
    msg.v_d = 0.975811654276;
    msg.satellites = 201U;
    msg.iar_hyp = 4735U;
    msg.iar_ratio = 0.0238356483855;

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
    msg.setTimeStamp(0.114246850147);
    msg.setSource(9566U);
    msg.setSourceEntity(252U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(233U);
    msg.validity = 40294U;
    msg.type = 132U;
    msg.tow = 906582272U;
    msg.base_lat = 0.444515921122;
    msg.base_lon = 0.550525901147;
    msg.base_height = 0.401793876571;
    msg.n = 0.500318492575;
    msg.e = 0.675019872877;
    msg.d = 0.0627354680257;
    msg.v_n = 0.907357576495;
    msg.v_e = 0.147911822355;
    msg.v_d = 0.254695518953;
    msg.satellites = 29U;
    msg.iar_hyp = 58826U;
    msg.iar_ratio = 0.301395889186;

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
    msg.setTimeStamp(0.467786277811);
    msg.setSource(45357U);
    msg.setSourceEntity(68U);
    msg.setDestination(41575U);
    msg.setDestinationEntity(200U);
    msg.validity = 51445U;
    msg.type = 208U;
    msg.tow = 2594490035U;
    msg.base_lat = 0.0235311761026;
    msg.base_lon = 0.0216278254553;
    msg.base_height = 0.811482405513;
    msg.n = 0.735855405473;
    msg.e = 0.962020995587;
    msg.d = 0.0271426841681;
    msg.v_n = 0.442312056505;
    msg.v_e = 0.295131183389;
    msg.v_d = 0.296083433561;
    msg.satellites = 127U;
    msg.iar_hyp = 19905U;
    msg.iar_ratio = 0.540087211866;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.163414999145);
    msg.setSource(18709U);
    msg.setSourceEntity(135U);
    msg.setDestination(65022U);
    msg.setDestinationEntity(197U);
    msg.id = 86U;
    msg.zoom = 118U;
    msg.action = 247U;

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
    msg.setTimeStamp(0.393350137637);
    msg.setSource(57994U);
    msg.setSourceEntity(221U);
    msg.setDestination(59866U);
    msg.setDestinationEntity(102U);
    msg.id = 172U;
    msg.zoom = 138U;
    msg.action = 89U;

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
    msg.setTimeStamp(0.235681314483);
    msg.setSource(52272U);
    msg.setSourceEntity(151U);
    msg.setDestination(63467U);
    msg.setDestinationEntity(106U);
    msg.id = 156U;
    msg.zoom = 176U;
    msg.action = 120U;

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
    msg.setTimeStamp(0.786660326186);
    msg.setSource(43994U);
    msg.setSourceEntity(86U);
    msg.setDestination(28792U);
    msg.setDestinationEntity(142U);
    msg.id = 7U;
    msg.value = 0.284795244393;

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
    msg.setTimeStamp(0.744827999392);
    msg.setSource(988U);
    msg.setSourceEntity(76U);
    msg.setDestination(52926U);
    msg.setDestinationEntity(76U);
    msg.id = 27U;
    msg.value = 0.394620068986;

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
    msg.setTimeStamp(0.824709890687);
    msg.setSource(16135U);
    msg.setSourceEntity(153U);
    msg.setDestination(14910U);
    msg.setDestinationEntity(60U);
    msg.id = 211U;
    msg.value = 0.284892372605;

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
    msg.setTimeStamp(0.667813807396);
    msg.setSource(29865U);
    msg.setSourceEntity(181U);
    msg.setDestination(22451U);
    msg.setDestinationEntity(166U);
    msg.id = 246U;
    msg.value = 0.358219833408;

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
    msg.setTimeStamp(0.389881934324);
    msg.setSource(29040U);
    msg.setSourceEntity(53U);
    msg.setDestination(62174U);
    msg.setDestinationEntity(60U);
    msg.id = 147U;
    msg.value = 0.795266785356;

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
    msg.setTimeStamp(0.0140664053623);
    msg.setSource(18869U);
    msg.setSourceEntity(198U);
    msg.setDestination(1346U);
    msg.setDestinationEntity(79U);
    msg.id = 205U;
    msg.value = 0.359553534636;

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
    msg.setTimeStamp(0.525868923927);
    msg.setSource(5007U);
    msg.setSourceEntity(185U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(93U);
    msg.id = 109U;
    msg.angle = 0.714999652806;

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
    msg.setTimeStamp(0.79281593807);
    msg.setSource(63666U);
    msg.setSourceEntity(168U);
    msg.setDestination(47578U);
    msg.setDestinationEntity(128U);
    msg.id = 89U;
    msg.angle = 0.920151683802;

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
    msg.setTimeStamp(0.53022179209);
    msg.setSource(47273U);
    msg.setSourceEntity(172U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(25U);
    msg.id = 153U;
    msg.angle = 0.311597922708;

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
    msg.setTimeStamp(0.378654456117);
    msg.setSource(15535U);
    msg.setSourceEntity(151U);
    msg.setDestination(61602U);
    msg.setDestinationEntity(9U);
    msg.op = 30U;
    msg.actions.assign("ZAURJTUBYVKNYBSBRTFEFRHHFTGENELIIQNLSMZYUVKP");

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
    msg.setTimeStamp(0.638004551936);
    msg.setSource(32899U);
    msg.setSourceEntity(91U);
    msg.setDestination(28493U);
    msg.setDestinationEntity(204U);
    msg.op = 28U;
    msg.actions.assign("MJWRJFHJBYOXRIRVUTFZYP");

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
    msg.setTimeStamp(0.733469039648);
    msg.setSource(14787U);
    msg.setSourceEntity(172U);
    msg.setDestination(37340U);
    msg.setDestinationEntity(141U);
    msg.op = 101U;
    msg.actions.assign("MRXFQNNTUBOEVPPZIAVFLBKYUBUEHINRMKQONBHZLJEFZLVWHBVWWCDSJDSOZOQCSFNDQOWSKNWLVPFXWTQILXIFRBIXUCKERGYJLPMTKXGDDGVRNPZXFDGGTROQAYAIMYYTRXBMUJRHKYHCTGVDKZPOEKBWTZIUAGMBAUYRVOYLYSUTHESHLANHCMMGJULXPDJHKYIZQBCQVTXQ");

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
    msg.setTimeStamp(0.145847537726);
    msg.setSource(35515U);
    msg.setSourceEntity(214U);
    msg.setDestination(47267U);
    msg.setDestinationEntity(175U);
    msg.actions.assign("IBQDKGMHMCQXMFBEDDNBPYHTOHCGJXSOPQWDMYDNWOTMKIQSWOZJRZZFZTQCLAJMWAIZRDJVFXMZLEXMEZNYXZAUUAZPTRYTAKRGYFILFGCOHBVXAOLTGLXLVAVRVUKINOUBRULKQBHJIKHQAWGBBKSCQYUFRVIJDESUGTSWSJRVPWPPYGPJFAYNCCEXELENCFVBHOMDFBHVCKOKRTYISPQUJ");

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
    msg.setTimeStamp(0.193974182886);
    msg.setSource(19617U);
    msg.setSourceEntity(90U);
    msg.setDestination(7003U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("TLVQCAIWENPTVGUWMFRKZBAQTIWGHLGWPANHBDRCXZJLJWXPRIODWHSMRSOQCYZYCKBMVLBSVINHNTZRQZEEBFCFOXQRFFDXGMFBUJPCINEXMJWEKSODBDVBEIDWJYSEGTLDHYTDZGEXKXGHQBRUMKMTMKMGUSVISPLJASAJJYQRONPKBPYOKOTVSAUAXXQACPJHONCQFF");

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
    msg.setTimeStamp(0.124407658756);
    msg.setSource(55112U);
    msg.setSourceEntity(206U);
    msg.setDestination(31792U);
    msg.setDestinationEntity(159U);
    msg.actions.assign("XNWYBBMEBDTXDIZYGRUJCAMCYVCJWETAWKJUSIJYJRRNLHBNOUZIPXLDMQWQLHEIKZQBGBFNUPBVCVSPAGJDXPCFSOFUPMZNGFSJSVYGHGSNA");

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
    msg.setTimeStamp(0.725485948394);
    msg.setSource(41083U);
    msg.setSourceEntity(10U);
    msg.setDestination(34701U);
    msg.setDestinationEntity(116U);
    msg.button = 27U;
    msg.value = 104U;

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
    msg.setTimeStamp(0.0203198654567);
    msg.setSource(5160U);
    msg.setSourceEntity(238U);
    msg.setDestination(5384U);
    msg.setDestinationEntity(40U);
    msg.button = 156U;
    msg.value = 158U;

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
    msg.setTimeStamp(0.619381816349);
    msg.setSource(39764U);
    msg.setSourceEntity(116U);
    msg.setDestination(64337U);
    msg.setDestinationEntity(10U);
    msg.button = 222U;
    msg.value = 17U;

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
    msg.setTimeStamp(0.119591515268);
    msg.setSource(54910U);
    msg.setSourceEntity(7U);
    msg.setDestination(5087U);
    msg.setDestinationEntity(123U);
    msg.op = 164U;
    msg.text.assign("BBOIJQRMTRAQBTOFYILMWCYKPZVUZPPFVXQNFUKUPXDFTYKREVDSKOKODVBZTFLAIKMHRE");

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
    msg.setTimeStamp(0.391684167771);
    msg.setSource(48890U);
    msg.setSourceEntity(82U);
    msg.setDestination(55810U);
    msg.setDestinationEntity(166U);
    msg.op = 40U;
    msg.text.assign("DESWORFCAUGKWSJSSGTSPQOIEDH");

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
    msg.setTimeStamp(0.208082961255);
    msg.setSource(52692U);
    msg.setSourceEntity(44U);
    msg.setDestination(42562U);
    msg.setDestinationEntity(63U);
    msg.op = 162U;
    msg.text.assign("AHDASCCYWJQVSACBYXXRYTZBDOEQJLBUGOYLHXNTHUMKEOQRJTDJHJZWTPAAUQFRQVYGAIEBWENNJGLAWWUWSQRORAKDLMIUYZCVZYCPKZOVBMFDGKHUWLWDXGUEXFTCZSBOQDFCFHHSEDNTNVVTUOXLGMQINTLKKCSILGWSVIDPKRBNHQORPXPSZPYMJPA");

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
    msg.setTimeStamp(0.524559660963);
    msg.setSource(41126U);
    msg.setSourceEntity(80U);
    msg.setDestination(16141U);
    msg.setDestinationEntity(140U);
    msg.op = 156U;
    msg.time_remain = 0.718899275077;
    msg.sched_time = 0.344261821692;

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
    msg.setTimeStamp(0.540501401544);
    msg.setSource(21787U);
    msg.setSourceEntity(130U);
    msg.setDestination(62063U);
    msg.setDestinationEntity(94U);
    msg.op = 107U;
    msg.time_remain = 0.490941571461;
    msg.sched_time = 0.558436820615;

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
    msg.setTimeStamp(0.0820640388705);
    msg.setSource(16487U);
    msg.setSourceEntity(161U);
    msg.setDestination(40004U);
    msg.setDestinationEntity(112U);
    msg.op = 218U;
    msg.time_remain = 0.107103813357;
    msg.sched_time = 0.452325896348;

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
    msg.setTimeStamp(0.392048556403);
    msg.setSource(6667U);
    msg.setSourceEntity(239U);
    msg.setDestination(27312U);
    msg.setDestinationEntity(24U);
    msg.name.assign("XSPCVODCWNZMSCQIEQBHDHKNJKHNTWYILKGDVEWKLOVCGVIQZZMNESBXOXENYNLVJFOSGUUWKRHYRLHVMFUYSJYPYFCXMVXXMUIXDLRQTTBUKCIFRAEMREBOIAMRITKQXUAGMEJQPCVSCOBDBYNWBCELAJUNHBKMTPZTSHFGLFRJPPMSB");
    msg.op = 136U;
    msg.sched_time = 0.568325846982;

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
    msg.setTimeStamp(0.91822654546);
    msg.setSource(17716U);
    msg.setSourceEntity(137U);
    msg.setDestination(29935U);
    msg.setDestinationEntity(32U);
    msg.name.assign("JKSMVGITFWZCKGYODAHFEKQVDTCJIUIVNAMFJUOHBSPRFAVVPFTRWXYPLEQMMAYJRZQUVSONEQVUN");
    msg.op = 135U;
    msg.sched_time = 0.802777910526;

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
    msg.setTimeStamp(0.894370472531);
    msg.setSource(8079U);
    msg.setSourceEntity(117U);
    msg.setDestination(10672U);
    msg.setDestinationEntity(250U);
    msg.name.assign("RGALCUKGCDHCSKAVQUXOPJTNLOAFGEKJNKMKWONBAEFKTCCGPJTXVEHJCWYIKQCDIRQRWROZRAQRBAQZVAEXIDYIJIFWPUWJZSGSTKYLKXRKYQPVEBDLLMUVBPMT");
    msg.op = 158U;
    msg.sched_time = 0.943247800524;

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
    msg.setTimeStamp(0.967169343693);
    msg.setSource(65019U);
    msg.setSourceEntity(52U);
    msg.setDestination(37428U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.326478674855);
    msg.setSource(3673U);
    msg.setSourceEntity(214U);
    msg.setDestination(33480U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.111673382237);
    msg.setSource(60486U);
    msg.setSourceEntity(3U);
    msg.setDestination(9577U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.42594165451);
    msg.setSource(13991U);
    msg.setSourceEntity(24U);
    msg.setDestination(23541U);
    msg.setDestinationEntity(69U);
    msg.name.assign("BSYGFBLOAGMNZMYYNQWISLKEBRXEQFGHZOCSEMHEKUR");
    msg.state = 249U;

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
    msg.setTimeStamp(0.75352964135);
    msg.setSource(3534U);
    msg.setSourceEntity(115U);
    msg.setDestination(15582U);
    msg.setDestinationEntity(215U);
    msg.name.assign("AJZYJZIMBKXVYSRTPNPMBNXWRZPQIOBPGNKTDBXECCSWKSLFPNQDWDWHNWJEAJUKDLVSQAWHFRVEIXG");
    msg.state = 131U;

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
    msg.setTimeStamp(0.378395294802);
    msg.setSource(40583U);
    msg.setSourceEntity(252U);
    msg.setDestination(57904U);
    msg.setDestinationEntity(134U);
    msg.name.assign("USDASQJJKCOUVKJZZRDONZADCGVNZVVTTSMBNPAOPHXKJGBTOQRYGYGNWEAEFSBKJUEAQFYWFXXCIYLWHNUVJZQNDSYDFPCILZHMGREPAGWDXVVTNKFSPNULUEEZNPMQBTDMYWMRQLATALMPQMXUPOVBXUTKEOJWEOSBFTRWRGINFGWRPHYCMQXBTTIARFULSIBBBZCLCRFJJVGPOQMHCFJKCHVIHIZXQIKAXOOHILWDHMKDRYXCEYSHL");
    msg.state = 123U;

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
    msg.setTimeStamp(0.886852276784);
    msg.setSource(48728U);
    msg.setSourceEntity(79U);
    msg.setDestination(61794U);
    msg.setDestinationEntity(107U);
    msg.name.assign("SPIZBGSVVIPZIXYRYNPRYULOCUWZFDTKSQSOJMGUNGFIPWQCXTHQJJSLOWORXWVUDSZFRCKREKYKKORTPWDMMLQQTYDEMBNDDUAMVKCGRBIXAZFZBKYRINNVXVHIULGJVAZFOAYPBJLMFIMHAEWJGVHTPEASLXQOJQXQHBPGHRYUQEPEUGS");
    msg.value = 199U;

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
    msg.setTimeStamp(0.0735373785834);
    msg.setSource(61489U);
    msg.setSourceEntity(63U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(96U);
    msg.name.assign("YTVDUOCRPUXEBILQRQJZVJQTOILCQPRHEDCMJILQJUFTZLAZFTIAWSRDSBUWWVXFLIDZYCPMSBZLIOMVBFYDUPCNACVXIHCTBMNQGHDOOHTGXNUFULYCJCOHLFIAPYIDZGMMOAHAQBMHYWXTNJKJNGPENSKDJGEKWBJXMLGZWXSXRGZOZKAEDWVUSESYBBARVEUHFONSQGVJVKTFN");
    msg.value = 66U;

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
    msg.setTimeStamp(0.127967708806);
    msg.setSource(54500U);
    msg.setSourceEntity(78U);
    msg.setDestination(62393U);
    msg.setDestinationEntity(154U);
    msg.name.assign("ZVFXIVJLHNKUOGLETYICMLDMFZFLSVZVFNROYNJBIOGAANARQETHRBOXOORGLDHWVESPKTPSVHZKPPDVRFEYHVSINTESTFQDHLCCATZETDSBRQMEWONZCUMYMAPVAURBLHNWXSHHGJCKFDICPAWWCQXUXNPQBILCMUQEORZOZLQKSDMUMJMYRIEFKSKWYKUKGXCNGMQZPAJBXJVE");
    msg.value = 76U;

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
    msg.setTimeStamp(0.189773866809);
    msg.setSource(24578U);
    msg.setSourceEntity(175U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(73U);
    msg.name.assign("INNFOOHILPNPRXYKLIUCBMAEFUITWUJAIPDFZOXOLHWVOFBNHBXLFGTZVKOTKAEXHCYJRJVSAPSCMKCQXGZKIHXSRUXJPDCWQKQABPCERYJUOBKLHGYSPOGEYYVAQYBZFMYDSBTZMHRUIZZCBDSURKJHPLGMFZTSJWJTNHRAHVLNIEVWPLEEUXGWPTDKJWOLQFMUXFVZZQDNXTWINFGBAYWMSGTUD");

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
    msg.setTimeStamp(0.314415283373);
    msg.setSource(44869U);
    msg.setSourceEntity(106U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(64U);
    msg.name.assign("PRBFSJSUHIFRYWDUQBGZCGWZNFYYYSOPUOAZLPPQMHJRVWCCNXEJRYPQKBCMOHCGRVTPKORQXZVVTXUGKJIBBAJHWQNLNWLKUHAQBTNLESJVIXEFSTLSRKIMTXCWINVMZOUZVKXTH");

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
    msg.setTimeStamp(0.372722027244);
    msg.setSource(38113U);
    msg.setSourceEntity(247U);
    msg.setDestination(5973U);
    msg.setDestinationEntity(40U);
    msg.name.assign("GLKGRKUKMIDDAQOLEJUTZYAZJKEVMOZIDYDCLABHHRKUHXACEGYWPZXOKPYJPSNRDRYEAVCGUDTZOKQVFLZSMPKEFMYTZXZESNRGPYWXUFTQDJXSENVBHMHVQRAVJUHWNGHQMSBCOUESWGNYFSQFNQCOVICBVGXZBQFJBUCREZWMYNKDXPROXJXIBLWWHJPINKRTNFLQFXCJTGBVRBTSVWSNFMOMGPDYWEMBLLTWCUCTDASOOLUIAIA");

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
    msg.setTimeStamp(0.553004463541);
    msg.setSource(32721U);
    msg.setSourceEntity(234U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(197U);
    msg.name.assign("UVPUNSHSDJJRTGWIDCCGCQLNRZJBSGLTFBVNHHLUKWOUUZKYSIZQOIPXCBAUIWAVJEIJHFYLNGHMCFURPRPLMYZTKSOPBBJXCUPEG");
    msg.value = 143U;

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
    msg.setTimeStamp(0.926518275805);
    msg.setSource(64246U);
    msg.setSourceEntity(7U);
    msg.setDestination(44627U);
    msg.setDestinationEntity(108U);
    msg.name.assign("FFMALIBJIEWYUGUQLMJYZJNPXTQUNRSOGDYBNWCQLBJLCGKLYTCJVNWTWYSWGUEMZPOPDOCICHDTGNSLRQFQMIOIZNJNDEEZKAKTBZABRTLHGSSYFZMUHNQAALZBXGQUTKWLFVWDSOQDPRVQRZAKTUEPETGHKQRCIXXYVBA");
    msg.value = 119U;

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
    msg.setTimeStamp(0.401186849269);
    msg.setSource(43038U);
    msg.setSourceEntity(35U);
    msg.setDestination(59001U);
    msg.setDestinationEntity(20U);
    msg.name.assign("HTYUSNOQZIROEMQURSXMVNSDMSTVDGPBXAQLJGPBYDBAINCMCYFHJWIDOGMGTRYLZVAFUNQATNQZACPLZZKXKNYZTAEEANDYQDOFKDVXRYWXHNRARMUGCMSPQPABOWXVLFQKKHIUPEWFXNDKTBJFDXLFIKKQOROMCVJJLIEKCGTFTGCSIURRCZYXKWUEBWWOLFJBHEUOEWEUWJYMILJWHZSTPYPSHHFCEDBVRMJZ");
    msg.value = 27U;

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
    msg.setTimeStamp(0.249893374707);
    msg.setSource(20787U);
    msg.setSourceEntity(250U);
    msg.setDestination(42370U);
    msg.setDestinationEntity(158U);
    msg.id = 147U;
    msg.period = 2574618734U;
    msg.duty_cycle = 606948887U;

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
    msg.setTimeStamp(0.306630401797);
    msg.setSource(30005U);
    msg.setSourceEntity(65U);
    msg.setDestination(8649U);
    msg.setDestinationEntity(229U);
    msg.id = 52U;
    msg.period = 3473958319U;
    msg.duty_cycle = 2384241523U;

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
    msg.setTimeStamp(0.945968887172);
    msg.setSource(50847U);
    msg.setSourceEntity(191U);
    msg.setDestination(32530U);
    msg.setDestinationEntity(41U);
    msg.id = 90U;
    msg.period = 4174260101U;
    msg.duty_cycle = 2553709973U;

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
    msg.setTimeStamp(0.404219550571);
    msg.setSource(37259U);
    msg.setSourceEntity(102U);
    msg.setDestination(11450U);
    msg.setDestinationEntity(228U);
    msg.id = 162U;
    msg.period = 2372588507U;
    msg.duty_cycle = 1955197791U;

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
    msg.setTimeStamp(0.926407126332);
    msg.setSource(29144U);
    msg.setSourceEntity(95U);
    msg.setDestination(29072U);
    msg.setDestinationEntity(104U);
    msg.id = 226U;
    msg.period = 2233530150U;
    msg.duty_cycle = 3652221306U;

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
    msg.setTimeStamp(0.240251623478);
    msg.setSource(26721U);
    msg.setSourceEntity(58U);
    msg.setDestination(33687U);
    msg.setDestinationEntity(92U);
    msg.id = 153U;
    msg.period = 1798179333U;
    msg.duty_cycle = 950292310U;

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
    msg.setTimeStamp(0.697924426091);
    msg.setSource(26581U);
    msg.setSourceEntity(78U);
    msg.setDestination(31869U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.628283386096;
    msg.lon = 0.5446972101;
    msg.height = 0.404649931326;
    msg.x = 0.689572259527;
    msg.y = 0.0808348484344;
    msg.z = 0.00662109622841;
    msg.phi = 0.361729710146;
    msg.theta = 0.199406542147;
    msg.psi = 0.846562851502;
    msg.u = 0.663773040633;
    msg.v = 0.802509174819;
    msg.w = 0.0321862402975;
    msg.vx = 0.420000190406;
    msg.vy = 0.203645696784;
    msg.vz = 0.0248107034729;
    msg.p = 0.578933393994;
    msg.q = 0.330292962909;
    msg.r = 0.24536038192;
    msg.depth = 0.549594336368;
    msg.alt = 0.725130968795;

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
    msg.setTimeStamp(0.567170758942);
    msg.setSource(8452U);
    msg.setSourceEntity(236U);
    msg.setDestination(2671U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.658940883668;
    msg.lon = 0.568862981203;
    msg.height = 0.035669785731;
    msg.x = 0.205265765102;
    msg.y = 0.467625417886;
    msg.z = 0.0796587434981;
    msg.phi = 0.255121542736;
    msg.theta = 0.439828809386;
    msg.psi = 0.352916763445;
    msg.u = 0.853672575682;
    msg.v = 0.39641025533;
    msg.w = 0.335983516055;
    msg.vx = 0.36092226085;
    msg.vy = 0.0281264986905;
    msg.vz = 0.443420245803;
    msg.p = 0.435085448947;
    msg.q = 0.171482113056;
    msg.r = 0.516032393521;
    msg.depth = 0.585472142798;
    msg.alt = 0.000127770518825;

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
    msg.setTimeStamp(0.267303806577);
    msg.setSource(4742U);
    msg.setSourceEntity(127U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.0951343945606;
    msg.lon = 0.666549112277;
    msg.height = 0.790689144524;
    msg.x = 0.807070112914;
    msg.y = 0.0745853939589;
    msg.z = 0.341264787901;
    msg.phi = 0.536967669933;
    msg.theta = 0.953616432226;
    msg.psi = 0.786130903141;
    msg.u = 0.585697973235;
    msg.v = 0.405484794912;
    msg.w = 0.122728105532;
    msg.vx = 0.235709231562;
    msg.vy = 0.743254732097;
    msg.vz = 0.488207001401;
    msg.p = 0.983397358588;
    msg.q = 0.911441222096;
    msg.r = 0.644729289595;
    msg.depth = 0.604697021513;
    msg.alt = 0.613312675468;

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
    msg.setTimeStamp(0.673104106338);
    msg.setSource(37698U);
    msg.setSourceEntity(245U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(78U);
    msg.x = 0.550765677325;
    msg.y = 0.138086920289;
    msg.z = 0.992351160763;

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
    msg.setTimeStamp(0.276478713806);
    msg.setSource(49U);
    msg.setSourceEntity(144U);
    msg.setDestination(25059U);
    msg.setDestinationEntity(93U);
    msg.x = 0.467405049299;
    msg.y = 0.584758525816;
    msg.z = 0.971716222051;

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
    msg.setTimeStamp(0.255561982628);
    msg.setSource(53207U);
    msg.setSourceEntity(249U);
    msg.setDestination(49414U);
    msg.setDestinationEntity(156U);
    msg.x = 0.945047409285;
    msg.y = 0.0551460283733;
    msg.z = 0.761139662824;

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
    msg.setTimeStamp(0.769274296392);
    msg.setSource(15882U);
    msg.setSourceEntity(234U);
    msg.setDestination(47341U);
    msg.setDestinationEntity(112U);
    msg.value = 0.613063909746;

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
    msg.setTimeStamp(0.685548708147);
    msg.setSource(166U);
    msg.setSourceEntity(32U);
    msg.setDestination(40844U);
    msg.setDestinationEntity(222U);
    msg.value = 0.545076464149;

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
    msg.setTimeStamp(0.0668253084942);
    msg.setSource(26111U);
    msg.setSourceEntity(18U);
    msg.setDestination(21365U);
    msg.setDestinationEntity(147U);
    msg.value = 0.964904349896;

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
    msg.setTimeStamp(0.231659828086);
    msg.setSource(62235U);
    msg.setSourceEntity(120U);
    msg.setDestination(39505U);
    msg.setDestinationEntity(154U);
    msg.value = 0.302796719461;

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
    msg.setTimeStamp(0.858250059495);
    msg.setSource(57104U);
    msg.setSourceEntity(204U);
    msg.setDestination(55719U);
    msg.setDestinationEntity(87U);
    msg.value = 0.747363432598;

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
    msg.setTimeStamp(0.305752187921);
    msg.setSource(52315U);
    msg.setSourceEntity(35U);
    msg.setDestination(49019U);
    msg.setDestinationEntity(140U);
    msg.value = 0.696645623502;

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
    msg.setTimeStamp(0.538666783242);
    msg.setSource(38230U);
    msg.setSourceEntity(67U);
    msg.setDestination(10329U);
    msg.setDestinationEntity(13U);
    msg.x = 0.197791477686;
    msg.y = 0.533537384811;
    msg.z = 0.446454095134;
    msg.phi = 0.657174895124;
    msg.theta = 0.77233834207;
    msg.psi = 0.418280627944;
    msg.p = 0.617923208629;
    msg.q = 0.436994638995;
    msg.r = 0.0978336554834;
    msg.u = 0.894395781456;
    msg.v = 0.18939654055;
    msg.w = 0.26331033546;
    msg.bias_psi = 0.197885806468;
    msg.bias_r = 0.163699287913;

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
    msg.setTimeStamp(0.105487215365);
    msg.setSource(45263U);
    msg.setSourceEntity(254U);
    msg.setDestination(63653U);
    msg.setDestinationEntity(212U);
    msg.x = 0.0543747488825;
    msg.y = 0.931021977733;
    msg.z = 0.974566579508;
    msg.phi = 0.426937687671;
    msg.theta = 0.949046738483;
    msg.psi = 0.100707759975;
    msg.p = 0.234324661409;
    msg.q = 0.9249092301;
    msg.r = 0.994526038862;
    msg.u = 0.877727855341;
    msg.v = 0.947966104;
    msg.w = 0.233249993535;
    msg.bias_psi = 0.62536500687;
    msg.bias_r = 0.503446011884;

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
    msg.setTimeStamp(0.690564871334);
    msg.setSource(26420U);
    msg.setSourceEntity(205U);
    msg.setDestination(17147U);
    msg.setDestinationEntity(112U);
    msg.x = 0.157409910605;
    msg.y = 0.793662913482;
    msg.z = 0.139188011699;
    msg.phi = 0.142970013678;
    msg.theta = 0.817049750864;
    msg.psi = 0.608885581906;
    msg.p = 0.229554442845;
    msg.q = 0.645480837356;
    msg.r = 0.828744343012;
    msg.u = 0.738166849144;
    msg.v = 0.608793922272;
    msg.w = 0.0355323907942;
    msg.bias_psi = 0.340636790284;
    msg.bias_r = 0.57141876761;

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
    msg.setTimeStamp(0.3346024546);
    msg.setSource(45647U);
    msg.setSourceEntity(110U);
    msg.setDestination(24689U);
    msg.setDestinationEntity(115U);
    msg.bias_psi = 0.83859562862;
    msg.bias_r = 0.540327774143;
    msg.cog = 0.296192640226;
    msg.cyaw = 0.51046676094;
    msg.lbl_rej_level = 0.341328706463;
    msg.gps_rej_level = 0.0769739985961;
    msg.custom_x = 0.401699703067;
    msg.custom_y = 0.325364734829;
    msg.custom_z = 0.853724441189;

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
    msg.setTimeStamp(0.816375735338);
    msg.setSource(51822U);
    msg.setSourceEntity(187U);
    msg.setDestination(43132U);
    msg.setDestinationEntity(253U);
    msg.bias_psi = 0.852003696155;
    msg.bias_r = 0.577766508001;
    msg.cog = 0.139637442183;
    msg.cyaw = 0.666236929619;
    msg.lbl_rej_level = 0.790745001541;
    msg.gps_rej_level = 0.539330863585;
    msg.custom_x = 0.680624908343;
    msg.custom_y = 0.471582507575;
    msg.custom_z = 0.524591040222;

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
    msg.setTimeStamp(0.414663994073);
    msg.setSource(16006U);
    msg.setSourceEntity(149U);
    msg.setDestination(50259U);
    msg.setDestinationEntity(108U);
    msg.bias_psi = 0.559908902528;
    msg.bias_r = 0.106172200955;
    msg.cog = 0.195329055639;
    msg.cyaw = 0.254591421337;
    msg.lbl_rej_level = 0.0210725696991;
    msg.gps_rej_level = 0.3649640662;
    msg.custom_x = 0.287385810379;
    msg.custom_y = 0.840946750126;
    msg.custom_z = 0.635733792815;

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
    msg.setTimeStamp(0.8753541499);
    msg.setSource(61682U);
    msg.setSourceEntity(8U);
    msg.setDestination(65290U);
    msg.setDestinationEntity(133U);
    msg.utc_time = 0.746944426833;
    msg.reason = 71U;

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
    msg.setTimeStamp(0.551632618141);
    msg.setSource(51060U);
    msg.setSourceEntity(152U);
    msg.setDestination(63926U);
    msg.setDestinationEntity(112U);
    msg.utc_time = 0.58600498678;
    msg.reason = 131U;

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
    msg.setTimeStamp(0.797600412458);
    msg.setSource(4211U);
    msg.setSourceEntity(18U);
    msg.setDestination(61336U);
    msg.setDestinationEntity(73U);
    msg.utc_time = 0.134026509299;
    msg.reason = 182U;

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
    msg.setTimeStamp(0.160823774905);
    msg.setSource(61272U);
    msg.setSourceEntity(98U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(74U);
    msg.id = 8U;
    msg.range = 0.605778272392;
    msg.acceptance = 73U;

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
    msg.setTimeStamp(0.541469146472);
    msg.setSource(584U);
    msg.setSourceEntity(218U);
    msg.setDestination(64043U);
    msg.setDestinationEntity(83U);
    msg.id = 6U;
    msg.range = 0.0684782216954;
    msg.acceptance = 130U;

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
    msg.setTimeStamp(0.0269570292394);
    msg.setSource(18104U);
    msg.setSourceEntity(129U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(79U);
    msg.id = 107U;
    msg.range = 0.472679802343;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.561448048739);
    msg.setSource(10953U);
    msg.setSourceEntity(101U);
    msg.setDestination(30340U);
    msg.setDestinationEntity(29U);
    msg.type = 157U;
    msg.reason = 150U;
    msg.value = 0.533705500983;
    msg.timestep = 0.438760415067;

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
    msg.setTimeStamp(0.0117876338311);
    msg.setSource(38890U);
    msg.setSourceEntity(36U);
    msg.setDestination(51163U);
    msg.setDestinationEntity(11U);
    msg.type = 106U;
    msg.reason = 141U;
    msg.value = 0.889193505365;
    msg.timestep = 0.652519329964;

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
    msg.setTimeStamp(0.13097268273);
    msg.setSource(231U);
    msg.setSourceEntity(83U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(178U);
    msg.type = 244U;
    msg.reason = 248U;
    msg.value = 0.230368053177;
    msg.timestep = 0.38577027761;

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
    msg.setTimeStamp(0.348153760302);
    msg.setSource(52609U);
    msg.setSourceEntity(150U);
    msg.setDestination(53220U);
    msg.setDestinationEntity(73U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DNJZDKRCRZSJCGQDRFBOBSRQUTGJLXSHIMIUOFRHYOYSWKLEYFKPGOIPUNMJAKEBFZDVELPWOOUYELXKQBQPCVPNUHCVTEUCBSPVSZUXWOGFQGTRVCRHUXQEYKCARAZAOIFDGXWNTMWGGZBG");
    tmp_msg_0.lat = 0.695983938907;
    tmp_msg_0.lon = 0.466986851691;
    tmp_msg_0.depth = 0.328819649378;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 202U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.804970791972;
    msg.y = 0.356757072676;
    msg.var_x = 0.147747902379;
    msg.var_y = 0.124437718436;
    msg.distance = 0.379380910549;

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
    msg.setTimeStamp(0.697015917712);
    msg.setSource(26483U);
    msg.setSourceEntity(170U);
    msg.setDestination(51855U);
    msg.setDestinationEntity(198U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DPJIPOJCHZOWIRQGZBKESNYUTKEQKHYBSCBI");
    tmp_msg_0.lat = 0.330023984587;
    tmp_msg_0.lon = 0.972145274346;
    tmp_msg_0.depth = 0.347726752753;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 231U;
    tmp_msg_0.transponder_delay = 90U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.25688528594;
    msg.y = 0.887377582207;
    msg.var_x = 0.536694798806;
    msg.var_y = 0.780652935841;
    msg.distance = 0.987614361008;

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
    msg.setTimeStamp(0.174470873079);
    msg.setSource(15259U);
    msg.setSourceEntity(165U);
    msg.setDestination(7129U);
    msg.setDestinationEntity(2U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RJREEUNVFATPZBKBYLXWIHVEJKRJFXLADUMBVBYSXHVHJELUIROXILGZWTXESEPKMXKSDWSMUSCVOAPQYCYGWBZOJICINCDGJNADXDGZTWFZFWSRDLWNFIJCKWPQFLHZTTUKCFHYIORWBMGVONTIKFZEBANDQTRYVSJAXDNIYMMZUBWMKJNGDUPYEHEYFBXMCRQKUHDGVCSYPOGNAUTBACPIHLRCGQZQAGLHAZSTSRXVOMQTQOL");
    tmp_msg_0.lat = 0.921465749559;
    tmp_msg_0.lon = 0.798868385916;
    tmp_msg_0.depth = 0.0157993145984;
    tmp_msg_0.query_channel = 176U;
    tmp_msg_0.reply_channel = 146U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.244757003037;
    msg.y = 0.462570288388;
    msg.var_x = 0.133092182316;
    msg.var_y = 0.837723557762;
    msg.distance = 0.255148940327;

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
    msg.setTimeStamp(0.953612515283);
    msg.setSource(25870U);
    msg.setSourceEntity(186U);
    msg.setDestination(54086U);
    msg.setDestinationEntity(39U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.827560796763);
    msg.setSource(7634U);
    msg.setSourceEntity(60U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(95U);
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
    msg.setTimeStamp(0.268231700697);
    msg.setSource(43084U);
    msg.setSourceEntity(186U);
    msg.setDestination(59842U);
    msg.setDestinationEntity(102U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.73998183607);
    msg.setSource(51345U);
    msg.setSourceEntity(225U);
    msg.setDestination(53419U);
    msg.setDestinationEntity(5U);
    msg.x = 0.778593905373;
    msg.y = 0.526329349342;
    msg.z = 0.000310337064768;

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
    msg.setTimeStamp(0.0481584780884);
    msg.setSource(8614U);
    msg.setSourceEntity(237U);
    msg.setDestination(17017U);
    msg.setDestinationEntity(115U);
    msg.x = 0.682059685037;
    msg.y = 0.191358697949;
    msg.z = 0.518185793751;

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
    msg.setTimeStamp(0.558944483542);
    msg.setSource(48687U);
    msg.setSourceEntity(184U);
    msg.setDestination(29947U);
    msg.setDestinationEntity(147U);
    msg.x = 0.916962897412;
    msg.y = 0.615924463288;
    msg.z = 0.141193561599;

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
    msg.setTimeStamp(0.847566959026);
    msg.setSource(42166U);
    msg.setSourceEntity(126U);
    msg.setDestination(8118U);
    msg.setDestinationEntity(77U);
    msg.va = 0.0627812540705;
    msg.aoa = 0.65602858361;
    msg.ssa = 0.696559896301;

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
    msg.setTimeStamp(0.487759089567);
    msg.setSource(44591U);
    msg.setSourceEntity(154U);
    msg.setDestination(2046U);
    msg.setDestinationEntity(223U);
    msg.va = 0.821152713527;
    msg.aoa = 0.535472102242;
    msg.ssa = 0.0286639029641;

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
    msg.setTimeStamp(0.91646487571);
    msg.setSource(41805U);
    msg.setSourceEntity(58U);
    msg.setDestination(54178U);
    msg.setDestinationEntity(98U);
    msg.va = 0.0334681201946;
    msg.aoa = 0.164268518242;
    msg.ssa = 0.154950287724;

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
    msg.setTimeStamp(0.0858520584436);
    msg.setSource(35991U);
    msg.setSourceEntity(2U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(41U);
    msg.value = 0.0571594357719;

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
    msg.setTimeStamp(0.703427965295);
    msg.setSource(52547U);
    msg.setSourceEntity(21U);
    msg.setDestination(37230U);
    msg.setDestinationEntity(60U);
    msg.value = 0.609996938496;

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
    msg.setTimeStamp(0.115902246748);
    msg.setSource(8052U);
    msg.setSourceEntity(119U);
    msg.setDestination(36293U);
    msg.setDestinationEntity(113U);
    msg.value = 0.0950993337616;

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
    msg.setTimeStamp(0.876198556983);
    msg.setSource(38496U);
    msg.setSourceEntity(215U);
    msg.setDestination(59351U);
    msg.setDestinationEntity(11U);
    msg.value = 0.310392882897;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.848577933815);
    msg.setSource(1074U);
    msg.setSourceEntity(116U);
    msg.setDestination(8207U);
    msg.setDestinationEntity(117U);
    msg.value = 0.797990830725;
    msg.z_units = 243U;

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
    msg.setTimeStamp(0.0591656051549);
    msg.setSource(8886U);
    msg.setSourceEntity(48U);
    msg.setDestination(18309U);
    msg.setDestinationEntity(31U);
    msg.value = 0.79302420166;
    msg.z_units = 85U;

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
    msg.setTimeStamp(0.464659582381);
    msg.setSource(21240U);
    msg.setSourceEntity(59U);
    msg.setDestination(45723U);
    msg.setDestinationEntity(140U);
    msg.value = 0.491205308157;
    msg.speed_units = 40U;

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
    msg.setTimeStamp(0.327151608631);
    msg.setSource(41528U);
    msg.setSourceEntity(54U);
    msg.setDestination(2631U);
    msg.setDestinationEntity(211U);
    msg.value = 0.632502620246;
    msg.speed_units = 54U;

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
    msg.setTimeStamp(0.775511519379);
    msg.setSource(48086U);
    msg.setSourceEntity(70U);
    msg.setDestination(52608U);
    msg.setDestinationEntity(64U);
    msg.value = 0.243416757723;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.0953303879512);
    msg.setSource(8779U);
    msg.setSourceEntity(25U);
    msg.setDestination(9341U);
    msg.setDestinationEntity(247U);
    msg.value = 0.0725805030042;

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
    msg.setTimeStamp(0.689297879172);
    msg.setSource(11802U);
    msg.setSourceEntity(175U);
    msg.setDestination(56508U);
    msg.setDestinationEntity(82U);
    msg.value = 0.742076302845;

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
    msg.setTimeStamp(0.887253520255);
    msg.setSource(43566U);
    msg.setSourceEntity(177U);
    msg.setDestination(40472U);
    msg.setDestinationEntity(10U);
    msg.value = 0.245003103679;

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
    msg.setTimeStamp(0.800500297151);
    msg.setSource(11100U);
    msg.setSourceEntity(245U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(205U);
    msg.value = 0.047976276503;

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
    msg.setTimeStamp(0.383688144817);
    msg.setSource(27949U);
    msg.setSourceEntity(129U);
    msg.setDestination(47773U);
    msg.setDestinationEntity(152U);
    msg.value = 0.758075082117;

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
    msg.setTimeStamp(0.404089932498);
    msg.setSource(34388U);
    msg.setSourceEntity(17U);
    msg.setDestination(53276U);
    msg.setDestinationEntity(100U);
    msg.value = 0.456618146146;

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
    msg.setTimeStamp(0.823570795388);
    msg.setSource(60427U);
    msg.setSourceEntity(14U);
    msg.setDestination(27479U);
    msg.setDestinationEntity(81U);
    msg.value = 0.453911269871;

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
    msg.setTimeStamp(0.48257881326);
    msg.setSource(11788U);
    msg.setSourceEntity(32U);
    msg.setDestination(14756U);
    msg.setDestinationEntity(75U);
    msg.value = 0.509836679535;

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
    msg.setTimeStamp(0.362442633035);
    msg.setSource(58839U);
    msg.setSourceEntity(26U);
    msg.setDestination(47124U);
    msg.setDestinationEntity(87U);
    msg.value = 0.754576502605;

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
    msg.setTimeStamp(0.774558852367);
    msg.setSource(59473U);
    msg.setSourceEntity(85U);
    msg.setDestination(15146U);
    msg.setDestinationEntity(171U);
    msg.path_ref = 1159207189U;
    msg.start_lat = 0.783354036484;
    msg.start_lon = 0.709186143351;
    msg.start_z = 0.11148172503;
    msg.start_z_units = 222U;
    msg.end_lat = 0.506144206105;
    msg.end_lon = 0.00562180678319;
    msg.end_z = 0.707648185958;
    msg.end_z_units = 139U;
    msg.speed = 0.397465982716;
    msg.speed_units = 52U;
    msg.lradius = 0.75475490995;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.0462541527296);
    msg.setSource(19633U);
    msg.setSourceEntity(128U);
    msg.setDestination(18510U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 285013161U;
    msg.start_lat = 0.0483536252279;
    msg.start_lon = 0.0737987652897;
    msg.start_z = 0.708241286248;
    msg.start_z_units = 48U;
    msg.end_lat = 0.135028278235;
    msg.end_lon = 0.804530684984;
    msg.end_z = 0.216498014404;
    msg.end_z_units = 134U;
    msg.speed = 0.237140591465;
    msg.speed_units = 215U;
    msg.lradius = 0.14387401837;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.37709500638);
    msg.setSource(10879U);
    msg.setSourceEntity(234U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(34U);
    msg.path_ref = 654456087U;
    msg.start_lat = 0.306623998333;
    msg.start_lon = 0.369932078167;
    msg.start_z = 0.859986856814;
    msg.start_z_units = 34U;
    msg.end_lat = 0.906986974196;
    msg.end_lon = 0.780317027367;
    msg.end_z = 0.707232457562;
    msg.end_z_units = 9U;
    msg.speed = 0.270179921062;
    msg.speed_units = 116U;
    msg.lradius = 0.792778273062;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.190870070943);
    msg.setSource(13851U);
    msg.setSourceEntity(35U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(101U);
    msg.x = 0.876938813407;
    msg.y = 0.744021409274;
    msg.z = 0.390170574228;
    msg.k = 0.99011589234;
    msg.m = 0.801319824687;
    msg.n = 0.308438430067;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.836766350282);
    msg.setSource(37680U);
    msg.setSourceEntity(141U);
    msg.setDestination(12912U);
    msg.setDestinationEntity(235U);
    msg.x = 0.0522663176581;
    msg.y = 0.723300808979;
    msg.z = 0.752477971814;
    msg.k = 0.054943971564;
    msg.m = 0.947078969302;
    msg.n = 0.12332098729;
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
    msg.setTimeStamp(0.75514680635);
    msg.setSource(3593U);
    msg.setSourceEntity(65U);
    msg.setDestination(21499U);
    msg.setDestinationEntity(236U);
    msg.x = 0.756495504074;
    msg.y = 0.523793691159;
    msg.z = 0.577710703982;
    msg.k = 0.521262970337;
    msg.m = 0.00386916760981;
    msg.n = 0.487391761013;
    msg.flags = 15U;

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
    msg.setTimeStamp(0.576264305662);
    msg.setSource(61293U);
    msg.setSourceEntity(251U);
    msg.setDestination(61738U);
    msg.setDestinationEntity(198U);
    msg.value = 0.224477977345;

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
    msg.setTimeStamp(0.972919326495);
    msg.setSource(12180U);
    msg.setSourceEntity(30U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(74U);
    msg.value = 0.384368008004;

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
    msg.setTimeStamp(0.490682883738);
    msg.setSource(31597U);
    msg.setSourceEntity(145U);
    msg.setDestination(18891U);
    msg.setDestinationEntity(230U);
    msg.value = 0.52720459626;

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
    msg.setTimeStamp(0.138880983705);
    msg.setSource(22835U);
    msg.setSourceEntity(164U);
    msg.setDestination(13289U);
    msg.setDestinationEntity(200U);
    msg.u = 0.235189332543;
    msg.v = 0.613836582065;
    msg.w = 0.866074055497;
    msg.p = 0.463536912295;
    msg.q = 0.853723212751;
    msg.r = 0.585169320813;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.38548400955);
    msg.setSource(17530U);
    msg.setSourceEntity(72U);
    msg.setDestination(22352U);
    msg.setDestinationEntity(167U);
    msg.u = 0.807119005363;
    msg.v = 0.896154710292;
    msg.w = 0.529574094784;
    msg.p = 0.512799109583;
    msg.q = 0.834400135221;
    msg.r = 0.471682615163;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.906583731483);
    msg.setSource(32659U);
    msg.setSourceEntity(116U);
    msg.setDestination(19816U);
    msg.setDestinationEntity(53U);
    msg.u = 0.80861153532;
    msg.v = 0.36796332396;
    msg.w = 0.207876109432;
    msg.p = 0.345330617184;
    msg.q = 0.894176988555;
    msg.r = 0.111805582384;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.620719448358);
    msg.setSource(24497U);
    msg.setSourceEntity(13U);
    msg.setDestination(22932U);
    msg.setDestinationEntity(92U);
    msg.path_ref = 3892126925U;
    msg.start_lat = 0.646975306882;
    msg.start_lon = 0.0349009042722;
    msg.start_z = 0.98308549563;
    msg.start_z_units = 167U;
    msg.end_lat = 0.94054885768;
    msg.end_lon = 0.0751098865331;
    msg.end_z = 0.71617800105;
    msg.end_z_units = 144U;
    msg.lradius = 0.882847183187;
    msg.flags = 173U;
    msg.x = 0.998796662392;
    msg.y = 0.121616347634;
    msg.z = 0.470427581431;
    msg.vx = 0.245938380596;
    msg.vy = 0.0326283727782;
    msg.vz = 0.603409227551;
    msg.course_error = 0.0493627767981;
    msg.eta = 18534U;

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
    msg.setTimeStamp(0.0649378465006);
    msg.setSource(65000U);
    msg.setSourceEntity(119U);
    msg.setDestination(44285U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 1387963159U;
    msg.start_lat = 0.0742739000051;
    msg.start_lon = 0.0185311516031;
    msg.start_z = 0.58377434146;
    msg.start_z_units = 54U;
    msg.end_lat = 0.0898802814871;
    msg.end_lon = 0.860427397184;
    msg.end_z = 0.119585372883;
    msg.end_z_units = 207U;
    msg.lradius = 0.415173974593;
    msg.flags = 153U;
    msg.x = 0.497692997926;
    msg.y = 0.92965246461;
    msg.z = 0.143002562454;
    msg.vx = 0.725412904175;
    msg.vy = 0.451035422012;
    msg.vz = 0.999051075094;
    msg.course_error = 0.424035445488;
    msg.eta = 1569U;

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
    msg.setTimeStamp(0.805065548089);
    msg.setSource(56995U);
    msg.setSourceEntity(170U);
    msg.setDestination(17613U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 1284763752U;
    msg.start_lat = 0.541742470561;
    msg.start_lon = 0.330771997042;
    msg.start_z = 0.254827595821;
    msg.start_z_units = 168U;
    msg.end_lat = 0.897030252901;
    msg.end_lon = 0.866252627911;
    msg.end_z = 0.831942164782;
    msg.end_z_units = 175U;
    msg.lradius = 0.639920572301;
    msg.flags = 155U;
    msg.x = 0.251081077224;
    msg.y = 0.518684228314;
    msg.z = 0.585556986838;
    msg.vx = 0.315677514823;
    msg.vy = 0.708820397946;
    msg.vz = 0.855188319966;
    msg.course_error = 0.949807711887;
    msg.eta = 129U;

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
    msg.setTimeStamp(0.387043770374);
    msg.setSource(21658U);
    msg.setSourceEntity(123U);
    msg.setDestination(17695U);
    msg.setDestinationEntity(14U);
    msg.k = 0.882952390714;
    msg.m = 0.702986923817;
    msg.n = 0.697764010477;

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
    msg.setTimeStamp(0.952219027753);
    msg.setSource(16672U);
    msg.setSourceEntity(129U);
    msg.setDestination(15739U);
    msg.setDestinationEntity(239U);
    msg.k = 0.637877662414;
    msg.m = 0.656595995072;
    msg.n = 0.350231128756;

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
    msg.setTimeStamp(0.049236299218);
    msg.setSource(62153U);
    msg.setSourceEntity(223U);
    msg.setDestination(24714U);
    msg.setDestinationEntity(136U);
    msg.k = 0.0956285422466;
    msg.m = 0.768028065325;
    msg.n = 0.143700898303;

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
    msg.setTimeStamp(0.901408948069);
    msg.setSource(45382U);
    msg.setSourceEntity(62U);
    msg.setDestination(49215U);
    msg.setDestinationEntity(121U);
    msg.p = 0.108089098379;
    msg.i = 0.304656125637;
    msg.d = 0.213905441161;
    msg.a = 0.22251155498;

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
    msg.setTimeStamp(0.264223087391);
    msg.setSource(3562U);
    msg.setSourceEntity(181U);
    msg.setDestination(48887U);
    msg.setDestinationEntity(251U);
    msg.p = 0.918889156683;
    msg.i = 0.488444571799;
    msg.d = 0.888191917006;
    msg.a = 0.311980618659;

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
    msg.setTimeStamp(0.622739003406);
    msg.setSource(36544U);
    msg.setSourceEntity(1U);
    msg.setDestination(13618U);
    msg.setDestinationEntity(19U);
    msg.p = 0.291617547131;
    msg.i = 0.2572496386;
    msg.d = 0.230407895802;
    msg.a = 0.788640501573;

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
    msg.setTimeStamp(0.930912556514);
    msg.setSource(43233U);
    msg.setSourceEntity(148U);
    msg.setDestination(60150U);
    msg.setDestinationEntity(161U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.107687061502);
    msg.setSource(30759U);
    msg.setSourceEntity(89U);
    msg.setDestination(29417U);
    msg.setDestinationEntity(217U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.871562217159);
    msg.setSource(53790U);
    msg.setSourceEntity(126U);
    msg.setDestination(37U);
    msg.setDestinationEntity(133U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.783493506754);
    msg.setSource(2014U);
    msg.setSourceEntity(217U);
    msg.setDestination(30734U);
    msg.setDestinationEntity(91U);
    msg.x = 0.40735978775;
    msg.y = 0.0915255819687;
    msg.z = 0.585900672708;
    msg.vx = 0.132969825345;
    msg.vy = 0.642658655344;
    msg.vz = 0.178952429063;
    msg.ax = 0.481060372555;
    msg.ay = 0.919598585378;
    msg.az = 0.405484077349;
    msg.flags = 58355U;

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
    msg.setTimeStamp(0.337662859262);
    msg.setSource(48450U);
    msg.setSourceEntity(142U);
    msg.setDestination(8405U);
    msg.setDestinationEntity(213U);
    msg.x = 0.735278791587;
    msg.y = 0.851171330232;
    msg.z = 0.282453086165;
    msg.vx = 0.38291599825;
    msg.vy = 0.164984856586;
    msg.vz = 0.485338987157;
    msg.ax = 0.628967845935;
    msg.ay = 0.902541204659;
    msg.az = 0.302963597396;
    msg.flags = 45764U;

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
    msg.setTimeStamp(0.538776200866);
    msg.setSource(51769U);
    msg.setSourceEntity(139U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(98U);
    msg.x = 0.895212381449;
    msg.y = 0.516064663529;
    msg.z = 0.465850500118;
    msg.vx = 0.442338656523;
    msg.vy = 0.0313559353852;
    msg.vz = 0.351825894575;
    msg.ax = 0.314279826999;
    msg.ay = 0.176211479514;
    msg.az = 0.187182600458;
    msg.flags = 9892U;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.572885202321);
    msg.setSource(45385U);
    msg.setSourceEntity(38U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(231U);
    msg.timeout = 15179U;
    msg.lat = 0.982315319657;
    msg.lon = 0.932780537285;
    msg.z = 0.900253826625;
    msg.z_units = 251U;
    msg.speed = 0.876439278716;
    msg.speed_units = 66U;
    msg.roll = 0.270947756329;
    msg.pitch = 0.386318823335;
    msg.yaw = 0.86201053152;
    msg.custom.assign("MRBFWXWCSJBTDXZBGOQBZPQSZJLNMLHYEOYBTRJTNQGBDKDHNLGIKVCRENXCYPZXVSRJNTCEXIURHJRVAFYJDMQPZVFVMUEKBBUDBZLXAFJPAGVNXXLIODUZCORDTMKUTAJFTLWCJQUIYNEPAANTEEQOSEEDHHWLEHXWKCWYSHKHIOYZSMVGLGZDSHQWVARYGROAPHNMCMXPVWKALUFSTMWOFOZTDRFIKYKVGJUWIAMQQSP");

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
    msg.setTimeStamp(0.0593758155785);
    msg.setSource(24636U);
    msg.setSourceEntity(203U);
    msg.setDestination(2690U);
    msg.setDestinationEntity(142U);
    msg.timeout = 21136U;
    msg.lat = 0.886529777264;
    msg.lon = 0.190207599356;
    msg.z = 0.157761973334;
    msg.z_units = 109U;
    msg.speed = 0.815763228617;
    msg.speed_units = 67U;
    msg.roll = 0.975678595147;
    msg.pitch = 0.611679957399;
    msg.yaw = 0.506398158451;
    msg.custom.assign("KYCKDBPHABVEHMYIVYNFAQGMUNAFDZXAUOPDAPFTTVQQBALWRWULNTMEFODJSZYDXMVCFYBVDIETSWJIKSSVCMOICMMUATWGEP");

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
    msg.setTimeStamp(0.980621031438);
    msg.setSource(26192U);
    msg.setSourceEntity(180U);
    msg.setDestination(24324U);
    msg.setDestinationEntity(10U);
    msg.timeout = 11623U;
    msg.lat = 0.711293794408;
    msg.lon = 0.401741459432;
    msg.z = 0.592143831887;
    msg.z_units = 156U;
    msg.speed = 0.232867900657;
    msg.speed_units = 175U;
    msg.roll = 0.460046368076;
    msg.pitch = 0.953947564847;
    msg.yaw = 0.240062907168;
    msg.custom.assign("LHVOJSGIGYOUEBIYFSKORJJTHIKBRBWWQXGEXZGGLVEC");

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
    msg.setTimeStamp(0.672584305533);
    msg.setSource(1136U);
    msg.setSourceEntity(208U);
    msg.setDestination(25589U);
    msg.setDestinationEntity(212U);
    msg.timeout = 40U;
    msg.lat = 0.953975393;
    msg.lon = 0.201166351029;
    msg.z = 0.0923707483969;
    msg.z_units = 125U;
    msg.speed = 0.545831098403;
    msg.speed_units = 199U;
    msg.duration = 33969U;
    msg.radius = 0.413979128533;
    msg.flags = 192U;
    msg.custom.assign("XRCFIBYWOLQSWFKAHCKORDDUTVLTBNRYUTVNZEZWFECFSXXSJRJZGBCRPJIIUANYOAEICFTTHVTGKZHSTHAADHQNTYVOMPZSWJWMYMXDJZEIUKBQBGHQUGWKYPOLBXLKGJAGFVMWBVXDUJYPQB");

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
    msg.setTimeStamp(0.825494829281);
    msg.setSource(54720U);
    msg.setSourceEntity(136U);
    msg.setDestination(3647U);
    msg.setDestinationEntity(113U);
    msg.timeout = 42635U;
    msg.lat = 0.157373583416;
    msg.lon = 0.637832631953;
    msg.z = 0.773371169713;
    msg.z_units = 31U;
    msg.speed = 0.0526800959367;
    msg.speed_units = 217U;
    msg.duration = 48915U;
    msg.radius = 0.203137564386;
    msg.flags = 125U;
    msg.custom.assign("XGTEAVERMYBKZWJQTPUEDAZKTJNXYEGMZNKFMYDNZMWFVSHQWGUFCXBIJILLNGOIRBXWLYNEQPLZHHEZUXQMBDCKMMGAYSUQQZPFTTWZUYHACKEAWJTPDY");

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
    msg.setTimeStamp(0.241698574517);
    msg.setSource(5589U);
    msg.setSourceEntity(65U);
    msg.setDestination(24752U);
    msg.setDestinationEntity(7U);
    msg.timeout = 8214U;
    msg.lat = 0.941362965782;
    msg.lon = 0.972466010416;
    msg.z = 0.814648286121;
    msg.z_units = 1U;
    msg.speed = 0.882466127951;
    msg.speed_units = 153U;
    msg.duration = 31322U;
    msg.radius = 0.595160176384;
    msg.flags = 208U;
    msg.custom.assign("WXDKNWBGFKJGYYHNQGKQYXSCIRSNHNOUSOFBRHHXOVZDFOQZXGAOZSJRFSPBDZIAKERDNAQTMDYFJIQURXEVJPLBIWUHLPCMKLLOPEHAAVIPDIJHRDZGRYTNTXKMNAU");

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
    msg.setTimeStamp(0.631304048736);
    msg.setSource(7179U);
    msg.setSourceEntity(216U);
    msg.setDestination(15441U);
    msg.setDestinationEntity(185U);
    msg.custom.assign("DKNOFQGYUYVMSMXUDHAODWBZLUNYRGZUXPWVXAIVSOGIIUKZPAFBHMCVVDQHIKKTSJRIMWJQPWYMLXWSPETPFSUFREATZEZQLWITYFZJHVYBZSQRRDOYARBWIGWSJFKCDCXWOZQDLGTDXOGEIOGJCFDNPVRKCQLHEGRHHIMNSCHUWHENK");

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
    msg.setTimeStamp(0.73647374913);
    msg.setSource(29024U);
    msg.setSourceEntity(237U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(32U);
    msg.custom.assign("OMYEIKUADTSSQOZFVONMLNSKQBVCPE");

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
    msg.setTimeStamp(0.295673609026);
    msg.setSource(52524U);
    msg.setSourceEntity(201U);
    msg.setDestination(55639U);
    msg.setDestinationEntity(164U);
    msg.custom.assign("XENEKLYUGICALELDPLOXDZSPDUVVUVEIAGSHKJIMUDLYZLPQFZXTJKBAJVSLXHPXFIVQKKFRCEWWEYBUZZCWOCNLRTDXTAWVXJAGJCWFGEGDOSKTAQYHR");

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
    msg.setTimeStamp(0.0578559456521);
    msg.setSource(8355U);
    msg.setSourceEntity(237U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(183U);
    msg.timeout = 35425U;
    msg.lat = 0.612172707146;
    msg.lon = 0.268463915378;
    msg.z = 0.479967840966;
    msg.z_units = 92U;
    msg.duration = 60430U;
    msg.speed = 0.505057414159;
    msg.speed_units = 223U;
    msg.type = 214U;
    msg.radius = 0.44218856405;
    msg.length = 0.898397750299;
    msg.bearing = 0.211766840351;
    msg.direction = 81U;
    msg.custom.assign("FCVZRSEGEINGVXLDSIWVZPQIYZGCXLAPLDHUNWQPBPJSYSJPRZDVOEWXYGNAEVGJHEINYKFMOPMYZQHMHBUMDHTLCNEOQXFFYKTMJQYFOFUZOKHOQJDRDITYOTWJJSQHCNTKHRVJKVUSMNSXPJGWADINGTGPTKXMYUSINUYOLQZBWFMKSDQLSMQNXXTJRCARAWMBILACFAVKWVUDRFCLRETBFWUAHBBECCPXRKRTZGHZPXVO");

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
    msg.setTimeStamp(0.384077870891);
    msg.setSource(48324U);
    msg.setSourceEntity(187U);
    msg.setDestination(40138U);
    msg.setDestinationEntity(104U);
    msg.timeout = 34689U;
    msg.lat = 0.585650916129;
    msg.lon = 0.656106035049;
    msg.z = 0.596686533742;
    msg.z_units = 198U;
    msg.duration = 2735U;
    msg.speed = 0.212690857612;
    msg.speed_units = 48U;
    msg.type = 24U;
    msg.radius = 0.647611878377;
    msg.length = 0.961764084645;
    msg.bearing = 0.162097993562;
    msg.direction = 130U;
    msg.custom.assign("QRKSGHJFXJGNUVMTMYCVLTKSAYPNBXGLJMPMBURIYQBHDMSOLYAINUZFQAZIAEVOHRWWOTARPPXNYQIGRLHLFSECPXGHSNYHGFSPUCRIOKHCXZUWFXJHVVKSJCPSJMJANKWBLYDNEFTRQATYZFAKCCDOVWRLQ");

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
    msg.setTimeStamp(0.143312701805);
    msg.setSource(21810U);
    msg.setSourceEntity(69U);
    msg.setDestination(45743U);
    msg.setDestinationEntity(69U);
    msg.timeout = 32142U;
    msg.lat = 0.373508785437;
    msg.lon = 0.92066739429;
    msg.z = 0.380940408073;
    msg.z_units = 107U;
    msg.duration = 51760U;
    msg.speed = 0.780848743521;
    msg.speed_units = 249U;
    msg.type = 149U;
    msg.radius = 0.919455782611;
    msg.length = 0.724423954395;
    msg.bearing = 0.846923349089;
    msg.direction = 142U;
    msg.custom.assign("XNTQEBGXSTUPOHFKQNALYCOPQ");

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
    msg.setTimeStamp(0.934462363504);
    msg.setSource(3122U);
    msg.setSourceEntity(149U);
    msg.setDestination(43683U);
    msg.setDestinationEntity(210U);
    msg.duration = 17276U;
    msg.custom.assign("XQYUYVORXNLRHXBAXLVHHECOOMOSOGZASRCOURBNPWVBYDQEZNBACAGKLNUSMSIEQBLVMTJTDVUVFQJ");

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
    msg.setTimeStamp(0.482363650017);
    msg.setSource(62340U);
    msg.setSourceEntity(209U);
    msg.setDestination(49837U);
    msg.setDestinationEntity(70U);
    msg.duration = 52013U;
    msg.custom.assign("KEBDGCTLUHFEMQDEWIQHFTAZUMINPXETLGEUNTMIWCJUKZVMRYOCVNVZCXQRNGARGARUELMOWYZQDIZLYWHSKSUFKBHQQCFLJJZLOVAXGRPJPBANWQPFZTYCWRZOPYEDMDYIKTQEOBOBJSBXSUCJRSZXFJAXMVPYKPDGKMVIARHRSTBS");

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
    msg.setTimeStamp(0.280922340775);
    msg.setSource(7526U);
    msg.setSourceEntity(168U);
    msg.setDestination(61887U);
    msg.setDestinationEntity(48U);
    msg.duration = 60512U;
    msg.custom.assign("ECFRVQLUHHCHLQHQAOOYFMYTZPYLBPIVMIQHIRRBXKFDJTEIIGATEVVZKTSNWSOSCWXZHGXWFRTRLJYXMIPCXPDNWVIRPCQJJQNXUJVDFGD");

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
    msg.setTimeStamp(0.724757662776);
    msg.setSource(63449U);
    msg.setSourceEntity(56U);
    msg.setDestination(59853U);
    msg.setDestinationEntity(89U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.895327667743;
    msg.control.set(tmp_msg_0);
    msg.duration = 50719U;
    msg.custom.assign("CWKQSJXRCAPZBVKLFQWHHKPRFUFFDGHGKJZRVGEPNBZEMSCHDWIMJEXTDPMFVTPOQYWSOLAWIDSWXESUNIZTQVISRRNTOBAEGBUFEMHZYZVGBWTSGNCQYLTWOAPHZOJKMRLULFXXFMHZMIVMNKZKOYCMRHXZQCOVWODPKABJBQULLWGIQXDNPAQVDTUEUJHX");

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
    msg.setTimeStamp(0.773813046247);
    msg.setSource(3616U);
    msg.setSourceEntity(185U);
    msg.setDestination(64131U);
    msg.setDestinationEntity(69U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.330982533297;
    msg.control.set(tmp_msg_0);
    msg.duration = 31763U;
    msg.custom.assign("RKYQNFQIMCAZXASBMWQ");

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
    msg.setTimeStamp(0.600951592523);
    msg.setSource(46812U);
    msg.setSourceEntity(8U);
    msg.setDestination(51268U);
    msg.setDestinationEntity(138U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.739207123968;
    tmp_msg_0.z_units = 133U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47989U;
    msg.custom.assign("XIQDGMRTFVZGYWOFNVAPHTGAGSJLXVPNZFCHKNQUUZEDCZUHSNQCGWGEUKXIPPUYVNXLEMIAZTBULSKAURLMSSCHKPIDTZVHJGEBBVCEBQNSBJAPNAHMRRMIERMFIQFBEDRKDKQAXX");

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
    msg.setTimeStamp(0.23633742116);
    msg.setSource(23177U);
    msg.setSourceEntity(73U);
    msg.setDestination(9274U);
    msg.setDestinationEntity(218U);
    msg.timeout = 13321U;
    msg.lat = 0.818147150672;
    msg.lon = 0.385713751269;
    msg.z = 0.155135609617;
    msg.z_units = 105U;
    msg.speed = 0.467002763928;
    msg.speed_units = 29U;
    msg.bearing = 0.5561075208;
    msg.cross_angle = 0.216647854108;
    msg.width = 0.121570474973;
    msg.length = 0.747792857613;
    msg.hstep = 0.107599387417;
    msg.coff = 229U;
    msg.alternation = 94U;
    msg.flags = 181U;
    msg.custom.assign("MWYTXBJSMIFSKXFDBKCHAGKCSWWPLIVWNEMLLNYGTDDQRIHLNJXAUVPFMUMHNK");

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
    msg.setTimeStamp(0.871897551664);
    msg.setSource(33215U);
    msg.setSourceEntity(3U);
    msg.setDestination(1167U);
    msg.setDestinationEntity(68U);
    msg.timeout = 2350U;
    msg.lat = 0.0465237555039;
    msg.lon = 0.0417801826977;
    msg.z = 0.332299645763;
    msg.z_units = 62U;
    msg.speed = 0.97809548479;
    msg.speed_units = 125U;
    msg.bearing = 0.630078830767;
    msg.cross_angle = 0.724839817087;
    msg.width = 0.939053038829;
    msg.length = 0.224662565561;
    msg.hstep = 0.111653703083;
    msg.coff = 125U;
    msg.alternation = 239U;
    msg.flags = 11U;
    msg.custom.assign("PFLDQOCXAWTQZVXUPFPDNSULFGTJVHSYZUTHGWPXXQCVFGGMEETBKQHJXYBSLLBVUTIKXAIIKMJFUSYCOUAHHJMBOICVTKSMQNUENFKAQUPIMPNKVZOSIYNBCDWASIKCPMREAHFPJFRODEMZGLGRRLYQFWUGARHOZDNTEDLQVWBPBNGGHEVXWRCHJWZWELYXVDDEIODUXGCYZNLLTECJCORRVNKXANFB");

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
    msg.setTimeStamp(0.648009509914);
    msg.setSource(34633U);
    msg.setSourceEntity(132U);
    msg.setDestination(7905U);
    msg.setDestinationEntity(95U);
    msg.timeout = 29246U;
    msg.lat = 0.400476482376;
    msg.lon = 0.727868209309;
    msg.z = 0.917150379352;
    msg.z_units = 159U;
    msg.speed = 0.384731463623;
    msg.speed_units = 217U;
    msg.bearing = 0.886544622201;
    msg.cross_angle = 0.58282163644;
    msg.width = 0.61518696492;
    msg.length = 0.420791146464;
    msg.hstep = 0.323298302967;
    msg.coff = 224U;
    msg.alternation = 161U;
    msg.flags = 97U;
    msg.custom.assign("AIIRJNNGQEQWCVAZDWXVCLUVDAKFYKHRAEBPGHZXMIEBCCHFDXRZSAAUQYPTNBUXIBCAZRXHPICOGJSICDRYZQSDHGYZNWLCTUCVSWEOBFENHQTPLWSDFVZDFTQUSARFMLASNGVSYUYPKQMYOVIKTXJEUEGNWCVTBKOLDN");

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
    msg.setTimeStamp(0.800300855961);
    msg.setSource(27972U);
    msg.setSourceEntity(223U);
    msg.setDestination(56384U);
    msg.setDestinationEntity(11U);
    msg.timeout = 52651U;
    msg.lat = 0.189670908329;
    msg.lon = 0.366838808824;
    msg.z = 0.668226163413;
    msg.z_units = 27U;
    msg.speed = 0.167095692079;
    msg.speed_units = 187U;
    msg.custom.assign("MFVSMOPZGDLBQDJGZHDRTRESRJVMCWHRXSCIKGFUZFGAOILXKJNUZSANVWIHPJVMEBXFJYDMCOKVVGICTOLRYGBNJVRQLOSNWIMXTYDITSPYCPQNVWMCATMJDLESXBLHQZXAJCAOXNKNDYAKTTZFEZNGPELZNUULPFKPUQEHHHYBSCBXHHTWBIAAIOXRHPTWQYRORKWFYUMMOCZQLLDUACEDSYPYUWFEQUQISQWEAWNPXKGBJVKV");

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
    msg.setTimeStamp(0.441218888162);
    msg.setSource(42563U);
    msg.setSourceEntity(63U);
    msg.setDestination(56582U);
    msg.setDestinationEntity(13U);
    msg.timeout = 39744U;
    msg.lat = 0.93286612104;
    msg.lon = 0.199708074004;
    msg.z = 0.724918702399;
    msg.z_units = 128U;
    msg.speed = 0.962684934646;
    msg.speed_units = 114U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0836862237922;
    tmp_msg_0.y = 0.420474072887;
    tmp_msg_0.z = 0.530757983386;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HPAIGSBSOPQOMMHZDWVDJMVLTKOIRUMQNOIPGQGGXCMECLVAOPCKYRKULXTGGSFFQEBQBUQMBUHJLBIICEFBLDDYFPUYJJWVEFDRXZRUDVWLMHJLWBFZVQWDLKZRYHSHNSZNDBEYTBHUZOAAOZTGNXNESDAXRWKVAMNCSRHCKFWNTFIJGWXMOPZXIFLJHCRITHNQMTIZWPPYEEQFYZXTXPAUVEKQYTJAXJTRSCOGNNUS");

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
    msg.setTimeStamp(0.661397864706);
    msg.setSource(32285U);
    msg.setSourceEntity(126U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(88U);
    msg.timeout = 46495U;
    msg.lat = 0.783726742599;
    msg.lon = 0.409773418954;
    msg.z = 0.177146530737;
    msg.z_units = 221U;
    msg.speed = 0.177117045496;
    msg.speed_units = 180U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.863787988847;
    tmp_msg_0.y = 0.908497543913;
    tmp_msg_0.z = 0.683420143453;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZFDOOTWADYOEZCIHFPYURFSYNAWLVKRURSKUHINSELJZYRKZQVNMCTQOQHMZDEWINVGNNAMPLKMAJCQTBJJKRATMWRIPEJZXLU");

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
    msg.setTimeStamp(0.493405476738);
    msg.setSource(22190U);
    msg.setSourceEntity(99U);
    msg.setDestination(56387U);
    msg.setDestinationEntity(113U);
    msg.x = 0.646859725448;
    msg.y = 0.155166032123;
    msg.z = 0.322684368367;

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
    msg.setTimeStamp(0.101447289294);
    msg.setSource(43517U);
    msg.setSourceEntity(217U);
    msg.setDestination(31735U);
    msg.setDestinationEntity(102U);
    msg.x = 0.883123775085;
    msg.y = 0.0791394208396;
    msg.z = 0.778984064865;

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
    msg.setTimeStamp(0.434817231974);
    msg.setSource(43993U);
    msg.setSourceEntity(222U);
    msg.setDestination(6048U);
    msg.setDestinationEntity(111U);
    msg.x = 0.660114362727;
    msg.y = 0.233921565933;
    msg.z = 0.626895177329;

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
    msg.setTimeStamp(0.653945369054);
    msg.setSource(18904U);
    msg.setSourceEntity(122U);
    msg.setDestination(1330U);
    msg.setDestinationEntity(210U);
    msg.timeout = 39533U;
    msg.lat = 0.577578033029;
    msg.lon = 0.13558538904;
    msg.z = 0.444529768619;
    msg.z_units = 149U;
    msg.amplitude = 0.0400025615092;
    msg.pitch = 0.45026012493;
    msg.speed = 0.580255661454;
    msg.speed_units = 139U;
    msg.custom.assign("RRGBCFFTGMYXSQFBWQYCSTNGKNRIORHQKBOBKHAREAZJDIECJXJDYFURNLVAPJYHJTYPSBLMNFMEYQMSNNJXFPPIVLEMXSUIRVWTGNXQLAGOWYZECWUYCZKVKZJSOWZKVULGIDQELVYGQJPUEBKEMCTRBDDC");

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
    msg.setTimeStamp(0.480750741998);
    msg.setSource(39699U);
    msg.setSourceEntity(150U);
    msg.setDestination(3601U);
    msg.setDestinationEntity(170U);
    msg.timeout = 23614U;
    msg.lat = 0.486320968815;
    msg.lon = 0.550009784612;
    msg.z = 0.962991420222;
    msg.z_units = 242U;
    msg.amplitude = 0.46180660065;
    msg.pitch = 0.232831003918;
    msg.speed = 0.409173503387;
    msg.speed_units = 9U;
    msg.custom.assign("VKASQZHYYUOHDFTFSYADDBLEAJKLWUFKWCFHVAEWPXEVONYUDQFJXVIECEEMYPCNXRIMSVNJCOACMBSETXOVBMARSWSPOOIOSIAEJGOLEJTDUAZNZTRFPYWMXNHRFQTCUTKIHFFSLWCIKPPBCFWGHMDCWLNSQMBWOYVMWGYHBQPQRMZLPMRZRNQKLVXGYJHLTUIXULQXZVAGDJNCIZJTNZHUQTKBIPHGJUDYPIJ");

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
    msg.setTimeStamp(0.308800805655);
    msg.setSource(45592U);
    msg.setSourceEntity(133U);
    msg.setDestination(8921U);
    msg.setDestinationEntity(170U);
    msg.timeout = 8119U;
    msg.lat = 0.474004461432;
    msg.lon = 0.1454702398;
    msg.z = 0.894938105344;
    msg.z_units = 90U;
    msg.amplitude = 0.341762169794;
    msg.pitch = 0.422352960081;
    msg.speed = 0.0437281721685;
    msg.speed_units = 97U;
    msg.custom.assign("DEMJJFTDFQYTBYVNSHXKNLWZXBLPG");

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
    msg.setTimeStamp(0.78396480609);
    msg.setSource(14195U);
    msg.setSourceEntity(28U);
    msg.setDestination(5117U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.857897857391);
    msg.setSource(15603U);
    msg.setSourceEntity(88U);
    msg.setDestination(57833U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.817774817336);
    msg.setSource(33258U);
    msg.setSourceEntity(237U);
    msg.setDestination(44104U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.752831817771);
    msg.setSource(27413U);
    msg.setSourceEntity(195U);
    msg.setDestination(52575U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.888265741543;
    msg.lon = 0.775980294651;
    msg.z = 0.275859535876;
    msg.z_units = 31U;
    msg.radius = 0.499670035077;
    msg.duration = 30638U;
    msg.speed = 0.449097941914;
    msg.speed_units = 161U;
    msg.custom.assign("TLXZOTWTRJGGSGNQMUSJYVUYHOVEBMHOCLVHSUYYZCDPKLMTBZFMDGWJFCKFOOIDWVXTGMFNQHKSUYRXVFPDCPCVPIAVBRPDSSROQHUMKISJGIGQKBZIUXQBAYDOEVIBMFLCQRRYJLXDKFJLUUGUOZERLNLFLMXPEXHPIWCYJDKSGOHXPBJANNHZEGASVTQZICJKMAHZTCZWAEXEWIREKATYNFMRNKWIRTQQXVFPNEDBQLBEHASOU");

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
    msg.setTimeStamp(0.486246651011);
    msg.setSource(55367U);
    msg.setSourceEntity(238U);
    msg.setDestination(64089U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.710266376395;
    msg.lon = 0.515156486032;
    msg.z = 0.642422403287;
    msg.z_units = 216U;
    msg.radius = 0.131361229241;
    msg.duration = 28585U;
    msg.speed = 0.245819482908;
    msg.speed_units = 208U;
    msg.custom.assign("ZFDRZHYUWMWBDABWJZRMRLVZGPDTQSEYXQPRVEJDSUAINKYHJOIIPTIBXKTCSVGFSFNTBXQGUGICLMQRKOUTHWDNQFVAZXUACJNLXSKVPPMDOAAHNRMNPTIDHGHJEBGTERVTZCMHKGJELOKSSIYQONONMIWEYZCQEXCU");

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
    msg.setTimeStamp(0.301676062841);
    msg.setSource(32837U);
    msg.setSourceEntity(93U);
    msg.setDestination(10464U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.385630901669;
    msg.lon = 0.195461623113;
    msg.z = 0.28571411824;
    msg.z_units = 16U;
    msg.radius = 0.721081112554;
    msg.duration = 27675U;
    msg.speed = 0.44235817755;
    msg.speed_units = 86U;
    msg.custom.assign("YHUCCMTOZXPZBPLVDGKKZNPJXRIEPMWTHDLBXPAHECNYFMIVDVELCJMXIVATGBEANTIKBIRGRDUOBJLWHGEEXKBPPHWEWAELDPQGRLSUMYTACAYFVLTUZFWXYFQFZJSZQXOZJICCTTDNFMWSGQIKKIURH");

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
    msg.setTimeStamp(0.177523869659);
    msg.setSource(60391U);
    msg.setSourceEntity(227U);
    msg.setDestination(29933U);
    msg.setDestinationEntity(141U);
    msg.timeout = 2209U;
    msg.flags = 161U;
    msg.lat = 0.807918244171;
    msg.lon = 0.705438300556;
    msg.start_z = 0.328465519418;
    msg.start_z_units = 131U;
    msg.end_z = 0.562480799675;
    msg.end_z_units = 57U;
    msg.radius = 0.410996791206;
    msg.speed = 0.878361099841;
    msg.speed_units = 46U;
    msg.custom.assign("VPDKRPXTCQLWHGITHMVLXUCBIMVWTGJVSXWHVSOMKZODNYQKSOADAGWQKVGNSPEIQCIWYMNKPETFNOQGXKXUXPGL");

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
    msg.setTimeStamp(0.898935616392);
    msg.setSource(32215U);
    msg.setSourceEntity(233U);
    msg.setDestination(2700U);
    msg.setDestinationEntity(44U);
    msg.timeout = 40591U;
    msg.flags = 89U;
    msg.lat = 0.0435517740053;
    msg.lon = 0.457620015607;
    msg.start_z = 0.293313590417;
    msg.start_z_units = 30U;
    msg.end_z = 0.651816747238;
    msg.end_z_units = 239U;
    msg.radius = 0.809051519723;
    msg.speed = 0.97412437157;
    msg.speed_units = 8U;
    msg.custom.assign("XDGRAEVOCEAUXLQYFZRRTEJMHIFHSNLCTIKYPSSAMBWWCHWAHYTDYVLUODEDUYKUYGOGVHFSNPSMCYPXITXKFPVWWKEBNEKCZODIQFOWUPSHKCWAGNITDEDOXQLFXAAZTUBAPJOMSTWXHLZOTBSDIEZJNVCNTBNEJIKDHQMJAHPYVUHENQPBDGOCAQGBXPMKZRCIYQUWFJKPZ");

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
    msg.setTimeStamp(0.749118950766);
    msg.setSource(9860U);
    msg.setSourceEntity(125U);
    msg.setDestination(24061U);
    msg.setDestinationEntity(149U);
    msg.timeout = 34621U;
    msg.flags = 39U;
    msg.lat = 0.944186065349;
    msg.lon = 0.905511648786;
    msg.start_z = 0.456736617386;
    msg.start_z_units = 160U;
    msg.end_z = 0.923294706511;
    msg.end_z_units = 138U;
    msg.radius = 0.946408588641;
    msg.speed = 0.91059636557;
    msg.speed_units = 124U;
    msg.custom.assign("IMESOQAGGHYIQHTTGLNKFPWNAAWLBSRBOCDXTFNPUSICVCCBJURYDOHDNZQZNEPVVLYIMITRYQHWGTLPVFBAJWUDDBBDEFRWIAKGLCGTXVMRRXJHJPKYNUOQSCIAKTJOKPTBBMHSGOAQGHRSFESVSEBEKUDFJZZIYMCRKWMXYMQUZVHTEPCNOCAPWUHBLFLPKRXVSU");

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
    msg.setTimeStamp(0.740131606392);
    msg.setSource(31259U);
    msg.setSourceEntity(188U);
    msg.setDestination(45525U);
    msg.setDestinationEntity(117U);
    msg.timeout = 7194U;
    msg.lat = 0.814112827658;
    msg.lon = 0.182151359601;
    msg.z = 0.703853315335;
    msg.z_units = 224U;
    msg.speed = 0.624953921987;
    msg.speed_units = 87U;
    msg.custom.assign("XKMAWQIDXQTZNTJCDYBQGXMJFWPJLTDSATLRFXSOGLOVRVNNCIRDBNXSMUEIVAIDCQFIHQUAUILGQEPBMSJEAVHQYDZORNQCHZYEOUEISJSFEWQMFTVWOSCCGJHGBBNJFBVBKANXUCCGKXZLIRMTBEYVGZJGYBYYNOHTUCPKRDTEBVLPMUDZHLMQTMYOKKVOWUMPXWSCAGUFSKRXKDVWELSTWWEWYFYDRORLNPHGPJIKJZZFKRPZFXPLANZO");

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
    msg.setTimeStamp(0.514314475635);
    msg.setSource(47771U);
    msg.setSourceEntity(200U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(191U);
    msg.timeout = 26614U;
    msg.lat = 0.377601394058;
    msg.lon = 0.773074955925;
    msg.z = 0.530566588896;
    msg.z_units = 88U;
    msg.speed = 0.134684262122;
    msg.speed_units = 106U;
    msg.custom.assign("KKZVMQZOPHSIGWXVIVYEMUGNULDMAZPJBEKVJZSAKELCHELCSDILERDQZSYCPNHVFYJUXDAYXUZNGZPLHTHWTAOJFEOBORFMPZSWCIMDEQLFETMSDXRGHQUECDMXZWOCTXLYIQCTAPHKDHANOGYSXOHJPVQCEFYCQPGUFXDORRUWRGYPLH");

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
    msg.setTimeStamp(0.160761645423);
    msg.setSource(16035U);
    msg.setSourceEntity(68U);
    msg.setDestination(13376U);
    msg.setDestinationEntity(139U);
    msg.timeout = 44476U;
    msg.lat = 0.127018737923;
    msg.lon = 0.796508472304;
    msg.z = 0.37821095161;
    msg.z_units = 116U;
    msg.speed = 0.157507014759;
    msg.speed_units = 254U;
    msg.custom.assign("YZAQQVZLMMLSXYAGRPHNVOXSQYTVOCDOCVOUXFAXDVJKCKPBNOMMWUSGLSHUPBUEEBWMEDELOPEVUXRYMICHGGALQDVWFYHYKPRMGDJTIDZQANNAJBNIYXSIESRSJJDAHLGJQTOSTONKFEVYLMRTIBEXWHZPQUFPDZQRCUBLFCSTIMURPWTFTZFJCLIOCTWTQIHPLWBGKCEO");

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
    msg.setTimeStamp(0.940319369756);
    msg.setSource(1667U);
    msg.setSourceEntity(205U);
    msg.setDestination(42747U);
    msg.setDestinationEntity(192U);
    msg.x = 0.122653156991;
    msg.y = 0.562516783258;
    msg.z = 0.359400857478;
    msg.t = 0.475822217556;

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
    msg.setTimeStamp(0.694725301921);
    msg.setSource(7253U);
    msg.setSourceEntity(2U);
    msg.setDestination(62109U);
    msg.setDestinationEntity(167U);
    msg.x = 0.800798042586;
    msg.y = 0.926859147994;
    msg.z = 0.641291718238;
    msg.t = 0.365539034793;

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
    msg.setTimeStamp(0.30332502907);
    msg.setSource(62581U);
    msg.setSourceEntity(160U);
    msg.setDestination(9369U);
    msg.setDestinationEntity(67U);
    msg.x = 0.613214822193;
    msg.y = 0.116819644247;
    msg.z = 0.826184449187;
    msg.t = 0.536788443205;

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
    msg.setTimeStamp(0.292080806777);
    msg.setSource(26051U);
    msg.setSourceEntity(140U);
    msg.setDestination(57012U);
    msg.setDestinationEntity(88U);
    msg.timeout = 58807U;
    msg.name.assign("LXTDFMDYKHEHRKGNWPCCVFGCBHUEIWDIM");
    msg.custom.assign("LLXAJUGWVXCQVXYOZYEXKJEGRQXDVHQPJRKEQVPSQTBFZPSFWJRWLGZMYBOOAHAMH");

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
    msg.setTimeStamp(0.0993803572907);
    msg.setSource(19178U);
    msg.setSourceEntity(176U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(181U);
    msg.timeout = 731U;
    msg.name.assign("RANPZTXXALSJCBWMOVPYTGU");
    msg.custom.assign("ZUJJZLUMDZQSLPWVXBSXYYRUEGUYZEOYOCKRCJXBKXHQLWLNMIPMVOSCFEFBFANBCKNAQLLGDFQNTVKDZNGMEN");

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
    msg.setTimeStamp(0.442077256312);
    msg.setSource(12916U);
    msg.setSourceEntity(71U);
    msg.setDestination(6361U);
    msg.setDestinationEntity(161U);
    msg.timeout = 28661U;
    msg.name.assign("OLPSQQEDGCKFLDGVAVFAMIOASRRXUKPZNDYGYSWBIJHWJLJCLYOBCKRYHYOHSSJMTRZZBMFTJJDNIUNDAUMKPTPGWJSJGENKCYZVWBDJNTVMNMKMBXEWPHRASIRHWRKRSUQQIQELOUYDVHAUOKRBEWRZBEKFCMHCYTOXFDFB");
    msg.custom.assign("GCELHZJOQVDZLTSNCGHBFBGLSYTMJJBOQQKKBTOERYSPBUUDUPAQVFPQUOFVQALWEMRWHGZSLUIPHTMOVENOAPGEXZRRZJ");

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
    msg.setTimeStamp(0.754099955337);
    msg.setSource(54492U);
    msg.setSourceEntity(7U);
    msg.setDestination(46501U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.341547022064;
    msg.lon = 0.652744705025;
    msg.z = 0.302642700389;
    msg.z_units = 10U;
    msg.speed = 0.704416807436;
    msg.speed_units = 223U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9491978142;
    tmp_msg_0.y = 0.706685447906;
    tmp_msg_0.z = 0.822314064706;
    tmp_msg_0.t = 0.542898738034;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.472942954666;
    msg.custom.assign("QGYTYMJWZUYBXDIQKJPVBXAERRSDVCMLFOEJMPTYZNHIUVWLBJBPUBOJKDHJAESSTDWMCGEKCGOXZYFGPEK");

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
    msg.setTimeStamp(0.678260817291);
    msg.setSource(56732U);
    msg.setSourceEntity(84U);
    msg.setDestination(2333U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.107455063555;
    msg.lon = 0.399293737139;
    msg.z = 0.363892208665;
    msg.z_units = 114U;
    msg.speed = 0.698736888844;
    msg.speed_units = 83U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.665935732009;
    tmp_msg_0.y = 0.6129210618;
    tmp_msg_0.z = 0.335351250814;
    tmp_msg_0.t = 0.891564538133;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 56834U;
    tmp_msg_1.off_x = 0.0908202206941;
    tmp_msg_1.off_y = 0.254325902077;
    tmp_msg_1.off_z = 0.198136435952;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.683834733123;
    msg.custom.assign("QOSGPYYJLJJPATDFCBMEKULKBPWESDOHNARVJXBOBIRSDRAQHQJBZRNDIGTIPVVXDSWPCXGUWOTMFQKMQCYXCZGTTZBKOZMGMSBNWQSHWRABXVJEZDUHRHERZMZWGXIEOUASFSWEDUVVCFUAFEYHWSYSBIEUKYNQBKIL");

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
    msg.setTimeStamp(0.0568543406333);
    msg.setSource(40141U);
    msg.setSourceEntity(60U);
    msg.setDestination(38228U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.920579787298;
    msg.lon = 0.383413315558;
    msg.z = 0.136271131412;
    msg.z_units = 151U;
    msg.speed = 0.678458443584;
    msg.speed_units = 2U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.769919665066;
    tmp_msg_0.y = 0.860195264152;
    tmp_msg_0.z = 0.17046884141;
    tmp_msg_0.t = 0.493228094198;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 6977U;
    tmp_msg_1.off_x = 0.359381975899;
    tmp_msg_1.off_y = 0.281216160795;
    tmp_msg_1.off_z = 0.661152854873;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.966642836197;
    msg.custom.assign("ADCTNQXUCUFVYPSOKJUVXHAYJNLDHB");

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
    msg.setTimeStamp(0.389064434826);
    msg.setSource(10096U);
    msg.setSourceEntity(8U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(110U);
    msg.vid = 50491U;
    msg.off_x = 0.644172558467;
    msg.off_y = 0.928764101767;
    msg.off_z = 0.595413362374;

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
    msg.setTimeStamp(0.894772447223);
    msg.setSource(31494U);
    msg.setSourceEntity(95U);
    msg.setDestination(22642U);
    msg.setDestinationEntity(191U);
    msg.vid = 39560U;
    msg.off_x = 0.79081772717;
    msg.off_y = 0.94138997508;
    msg.off_z = 0.413605092869;

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
    msg.setTimeStamp(0.930824728971);
    msg.setSource(64644U);
    msg.setSourceEntity(185U);
    msg.setDestination(2599U);
    msg.setDestinationEntity(101U);
    msg.vid = 13950U;
    msg.off_x = 0.0925845711165;
    msg.off_y = 0.8600769245;
    msg.off_z = 0.761551681561;

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
    msg.setTimeStamp(0.0124880123477);
    msg.setSource(63903U);
    msg.setSourceEntity(171U);
    msg.setDestination(53684U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.762416493927);
    msg.setSource(31634U);
    msg.setSourceEntity(238U);
    msg.setDestination(21881U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.286922842894);
    msg.setSource(59757U);
    msg.setSourceEntity(137U);
    msg.setDestination(41682U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.0352542757409);
    msg.setSource(46075U);
    msg.setSourceEntity(166U);
    msg.setDestination(44113U);
    msg.setDestinationEntity(133U);
    msg.mid = 34913U;

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
    msg.setTimeStamp(0.643649300701);
    msg.setSource(7787U);
    msg.setSourceEntity(206U);
    msg.setDestination(64947U);
    msg.setDestinationEntity(168U);
    msg.mid = 12768U;

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
    msg.setTimeStamp(0.000381135170496);
    msg.setSource(20307U);
    msg.setSourceEntity(25U);
    msg.setDestination(18401U);
    msg.setDestinationEntity(15U);
    msg.mid = 7039U;

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
    msg.setTimeStamp(0.218699146386);
    msg.setSource(39523U);
    msg.setSourceEntity(52U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(223U);
    msg.state = 40U;
    msg.eta = 55522U;
    msg.info.assign("QZXPNRNYPOBJZEQXWATRMRUTLVFZHLFQDMKAFUMYNICMZWIOVYKUIWMUGGSDXHEOUBKGLSDXNZFBFSKHGJDPNVBZEBSQWHTZYTJEDHPYLTVOKRJZECPQVDHVEILKNQXCJBCCT");

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
    msg.setTimeStamp(0.51327828959);
    msg.setSource(50931U);
    msg.setSourceEntity(14U);
    msg.setDestination(22472U);
    msg.setDestinationEntity(127U);
    msg.state = 42U;
    msg.eta = 41057U;
    msg.info.assign("RYALNCXNLMIJCANCFSPJMVQUHKREUOCGFIQIRKJMXOELLLKTVERJVFBOWBJJQIDFNODHWHWVCZSYOZVUDGZPKIZSWECGPQMGSTZHKGTVUVURAGZACAXEQXMOWYVAADNJYRPMXNQMYTEXDKXWJDDUMGKDRZOGCZXYHAOHCHTHOVRQBFFIQ");

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
    msg.setTimeStamp(0.505224236334);
    msg.setSource(9541U);
    msg.setSourceEntity(109U);
    msg.setDestination(17501U);
    msg.setDestinationEntity(244U);
    msg.state = 60U;
    msg.eta = 62823U;
    msg.info.assign("OHBROLQHCGHDDAYBLNCFHWKUOHAMURILXQYRZFZMGNSXVYLXKBCCUZJJJBYPHIOCEBJODIVZKQKEGPUJORTOPZSFGTQSLJNWIKPWGSXZOHCGWZYTURPANGJFLUMWLFSCQHYGZQTPCKAWUALMOTWVRMRETDMVGWQKCUSVFEDVYRCSIXPFSTEJFHVITBDQBEBWVGYIAXEFUHRNKNPWUMQESPXIEIBPILVNJTBEN");

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
    msg.setTimeStamp(0.216318267441);
    msg.setSource(56648U);
    msg.setSourceEntity(73U);
    msg.setDestination(53587U);
    msg.setDestinationEntity(82U);
    msg.system = 62557U;
    msg.duration = 23110U;
    msg.speed = 0.375557980708;
    msg.speed_units = 159U;
    msg.x = 0.90463798929;
    msg.y = 0.387825662587;
    msg.z = 0.246420411047;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.92663412869);
    msg.setSource(50575U);
    msg.setSourceEntity(95U);
    msg.setDestination(6089U);
    msg.setDestinationEntity(230U);
    msg.system = 41067U;
    msg.duration = 137U;
    msg.speed = 0.324741209028;
    msg.speed_units = 142U;
    msg.x = 0.0719874561024;
    msg.y = 0.121439823968;
    msg.z = 0.4000789544;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.0577628754758);
    msg.setSource(60854U);
    msg.setSourceEntity(41U);
    msg.setDestination(50884U);
    msg.setDestinationEntity(149U);
    msg.system = 40021U;
    msg.duration = 18223U;
    msg.speed = 0.0667671416021;
    msg.speed_units = 70U;
    msg.x = 0.428327045271;
    msg.y = 0.484109472262;
    msg.z = 0.631389328372;
    msg.z_units = 171U;

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
    msg.setTimeStamp(0.292671100907);
    msg.setSource(57780U);
    msg.setSourceEntity(230U);
    msg.setDestination(42015U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.473977995685;
    msg.lon = 0.572995312426;
    msg.speed = 0.27050414512;
    msg.speed_units = 32U;
    msg.duration = 54718U;
    msg.sys_a = 27140U;
    msg.sys_b = 29877U;
    msg.move_threshold = 0.75639857611;

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
    msg.setTimeStamp(0.275554289511);
    msg.setSource(37898U);
    msg.setSourceEntity(152U);
    msg.setDestination(18306U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.673307651196;
    msg.lon = 0.751140480549;
    msg.speed = 0.971947373037;
    msg.speed_units = 253U;
    msg.duration = 47934U;
    msg.sys_a = 27542U;
    msg.sys_b = 16711U;
    msg.move_threshold = 0.861807771095;

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
    msg.setTimeStamp(0.65196177938);
    msg.setSource(57462U);
    msg.setSourceEntity(197U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.309540015197;
    msg.lon = 0.133010924338;
    msg.speed = 0.403082074676;
    msg.speed_units = 246U;
    msg.duration = 61554U;
    msg.sys_a = 45652U;
    msg.sys_b = 61485U;
    msg.move_threshold = 0.829005682883;

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
    msg.setTimeStamp(0.71941954683);
    msg.setSource(8928U);
    msg.setSourceEntity(249U);
    msg.setDestination(63248U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.274912983748;
    msg.lon = 0.863727123815;
    msg.z = 0.26859754933;
    msg.z_units = 68U;
    msg.speed = 0.329496267358;
    msg.speed_units = 139U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.610516041886;
    tmp_msg_0.lon = 0.17200980923;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GJFIUIOOCGZHPSXMXRPKUFQLZBSWOXQCVBFNUORBGJNAADNMYZGZJKIARCRZFVIMLNVQIJJYXOFTDSCWUPMGQEBBPHEQXPHUEGMOHDUTWYT");

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
    msg.setTimeStamp(0.0797372799729);
    msg.setSource(37561U);
    msg.setSourceEntity(87U);
    msg.setDestination(54992U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.831120823248;
    msg.lon = 0.971294020783;
    msg.z = 0.715591106305;
    msg.z_units = 169U;
    msg.speed = 0.64443252031;
    msg.speed_units = 148U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.876884921605;
    tmp_msg_0.lon = 0.469266589262;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OOZXMZJNHNRTGPNHTZSUMPZTDGVWVTEXHKWICDMINJRANUBARPBSKNEAJFUGTRPYIQBIXPCPLHNTFYHOUKJJSYDHEOCFIWJMZURTULZUPMJWFXHWIKXSQYRLBTBBIYVORSZLJVQVRQSEJYGSIUFLCFUCGQIQDYFWHZAJLKNAAUCBCDNGMQGSVTMDNQLVCX");

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
    msg.setTimeStamp(0.301319100927);
    msg.setSource(26163U);
    msg.setSourceEntity(76U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.808721581728;
    msg.lon = 0.0623523506023;
    msg.z = 0.0537391294033;
    msg.z_units = 190U;
    msg.speed = 0.870981094254;
    msg.speed_units = 7U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.715643531154;
    tmp_msg_0.lon = 0.118817715293;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HQCJRWZUHGWKRABNIQDKSYFPDNTSAVSNDVEWHDKATMGQVMXPQYNPUETGUADKPWCLDXBGMTDMPAPAUYLFGEPBFYIEFKWVZJWXLXSTVLBYQGHITVANMLUZOQBHNGOJMVKGZYVSNKFJRJMKQZITWOOHCZICJBHRPXDNRAWTPLUBSCLGEXMZCUIYOOJYNCXHQXVPEUYZVFOGIEBICUFOXRLFHAJRSOKTSZMRCUXTAIQQBSIKRDCJOSDLJY");

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
    msg.setTimeStamp(0.40986835688);
    msg.setSource(11195U);
    msg.setSourceEntity(124U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.386118532276;
    msg.lon = 0.603892949065;

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
    msg.setTimeStamp(0.796053230504);
    msg.setSource(36235U);
    msg.setSourceEntity(6U);
    msg.setDestination(30450U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.269503097652;
    msg.lon = 0.188960163454;

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
    msg.setTimeStamp(0.147480305925);
    msg.setSource(33548U);
    msg.setSourceEntity(118U);
    msg.setDestination(4855U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.434558585646;
    msg.lon = 0.818092266369;

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
    msg.setTimeStamp(0.883725703439);
    msg.setSource(25364U);
    msg.setSourceEntity(91U);
    msg.setDestination(22625U);
    msg.setDestinationEntity(223U);
    msg.timeout = 30871U;
    msg.lat = 0.0949455111769;
    msg.lon = 0.0452583585918;
    msg.z = 0.876258862897;
    msg.z_units = 49U;
    msg.pitch = 0.964689587502;
    msg.amplitude = 0.858126667483;
    msg.duration = 58825U;
    msg.speed = 0.742258453644;
    msg.speed_units = 63U;
    msg.radius = 0.685053406482;
    msg.direction = 174U;
    msg.custom.assign("CSVQWIVCSQAXNDJJTBDEPKAGAMJPBCEVRGFPSXZOKETRWDWVRWRRQXMTGUPOHUPTDMACNTJHXOJCMTFHSXERBLZNMQXIYDFGOKSIOILHIMVVOQNNFQRLZHHXNJLQMGBCHULRZPRREKAKEEXEXNJGSKFGJLBYLQBFYHHKFPUAFVAKUZQMEITAGAISUUPDNZSTUSTMPWKDFZYYCLWL");

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
    msg.setTimeStamp(0.933568331928);
    msg.setSource(64480U);
    msg.setSourceEntity(179U);
    msg.setDestination(40705U);
    msg.setDestinationEntity(249U);
    msg.timeout = 57623U;
    msg.lat = 0.797622031537;
    msg.lon = 0.623770486114;
    msg.z = 0.9650182617;
    msg.z_units = 136U;
    msg.pitch = 0.738108015108;
    msg.amplitude = 0.380797284376;
    msg.duration = 35392U;
    msg.speed = 0.880925077041;
    msg.speed_units = 111U;
    msg.radius = 0.14092872312;
    msg.direction = 215U;
    msg.custom.assign("LWYMLPVXEXSLNBYWAYBWW");

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
    msg.setTimeStamp(0.387541965212);
    msg.setSource(12863U);
    msg.setSourceEntity(159U);
    msg.setDestination(19745U);
    msg.setDestinationEntity(86U);
    msg.timeout = 63281U;
    msg.lat = 0.382196337619;
    msg.lon = 0.907012219114;
    msg.z = 0.230609152963;
    msg.z_units = 146U;
    msg.pitch = 0.717360004102;
    msg.amplitude = 0.258171605558;
    msg.duration = 548U;
    msg.speed = 0.398180574157;
    msg.speed_units = 53U;
    msg.radius = 0.676972990368;
    msg.direction = 84U;
    msg.custom.assign("LKVLSDPGLNGOVCHWCRUURSNBVTTPUQLFRAKJLVSXLINKHOLPBZXQQSSIIPHYGMJLGYZXZEWCFFTFOSDVNQSQYYWBSUBGFABEHYWSYLDIDAVAUKRUYVZRHRHJOXQAYCOMBGDVTTKAWMUJEFCZTMPSQFEMCNDXTCAPFIAENRKECBNTPTMRDVXUXROOMJDHFZBBLNQWQGHRPXKUOPXQ");

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
    msg.setTimeStamp(0.105857638774);
    msg.setSource(29061U);
    msg.setSourceEntity(46U);
    msg.setDestination(49043U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("ELWOBYKJJSZGUBNPPEXLBRGYVQDJWGDJNUMZBJCGGSVZPRFNWJHTHMFVTVXFIKSXRBAYDSAZRTLOMDBVALOCDOKDXTLEZGXAUOBCFMZCTSQGWXAIGSPEEKUEWIPXINURMDPKPWADUHKEOSPMNIWQHTOHFXYGZLIWOOJDLKVOZQRRJUESLBTYYJLKHSQXKWNNYTYJHCXPYTRCSAQMYACUMZVRCFNVIZIQENKFVHLHBFCDFFRUAMBMEQ");
    msg.reference_frame = 130U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8314U;
    tmp_msg_0.off_x = 0.837857932676;
    tmp_msg_0.off_y = 0.922420537632;
    tmp_msg_0.off_z = 0.0471932149678;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("AXFNVWIHSNILUTSCUMSQMGCRSWACIWPHZANTNLER");

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
    msg.setTimeStamp(0.939195972777);
    msg.setSource(28532U);
    msg.setSourceEntity(30U);
    msg.setDestination(3080U);
    msg.setDestinationEntity(182U);
    msg.formation_name.assign("ERVOEXHEXDJAGFWRBJCQMPXZBZBIWLALGQXRFHFCKALCNFWBISNIEWTTLGUKTVXNTCXXRQCUPLGQOMEAXPZAEBTKRDKUFKNPCSURUMYXYWTVUSSGQBKVLDSHKFMZHOIYOADHWYBCYVMDUIYPJOLDTRHVJSYNVPQBDGJQPIPVZOICMGGMSRLJMJYXNTPMWHNHVINMPELJNORDOCGSQDWWSGYUAB");
    msg.reference_frame = 85U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32174U;
    tmp_msg_0.off_x = 0.326325409401;
    tmp_msg_0.off_y = 0.0292778658068;
    tmp_msg_0.off_z = 0.597063224189;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FMYBUNQVEMIYKROMVTGMRXRNPEBEGPECQBVGJRNNIPWYPFUMORMVZRLFKZLAUO");

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
    msg.setTimeStamp(0.123325221264);
    msg.setSource(13639U);
    msg.setSourceEntity(154U);
    msg.setDestination(1989U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("PNOYYLFQHFRUOZRQDRHXIEQQTMQHXMRVQEIGWMATCMNSLJYVSKRZJEZBOUTHPYZVBUDWTYAGIGSSNMMHGGCEWEGSJMEKFZPBRCWQIHCLEKNCRVTACSHNGLVLLKTNOUPJ");
    msg.reference_frame = 230U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42027U;
    tmp_msg_0.off_x = 0.0691087161269;
    tmp_msg_0.off_y = 0.551164486573;
    tmp_msg_0.off_z = 0.729272812981;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UKAFIOYELGCEYYZQWVIKVIPAJPVNWOIFGLHDMZSWLOHKHHNNDLFZXOSVIHOVRLNJTQYPZVJHIJKCLKDGJBRCXXTFSFVMQMNEAEPPTTWENCAILBGDBSEL");

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
    msg.setTimeStamp(0.879731987904);
    msg.setSource(13818U);
    msg.setSourceEntity(195U);
    msg.setDestination(17582U);
    msg.setDestinationEntity(203U);
    msg.group_name.assign("AWNOFGERZBDYEQNLFXICHOAUNKAPHBXBFCECJHJBAOODBZUKQVKSXTG");
    msg.formation_name.assign("OEMBUDUOCGUNDJHMMDESLFWFDDIQSPCQNNRGKWVRMWKBFRNPURXVSPAGVNRHHAYFCZAXZHIOTQ");
    msg.plan_id.assign("RYPNDHLUGTQKZXKFZMFJNMQOORUBDYECMESPOUBRYERVBUQNEWYTNGWSGAWXITLBNDRVCOMEGXURRJITWNVNGKMLPKQAOAKTCFDHCKHYZPJBBNQUQDZQSYZMXVKOQGFSYFLLECJRSSTHNJSXLSAGVIPXDWABHITFIDFHHSMXZWULQJULLEIWONCQVJGRAHTAPDAEVHWMXKDTUMYMVPEFJICCOGPHCCYEXWJBGPLFZUTODZVZIKVPOSIWYFBR");
    msg.description.assign("OTBCLQSENUQFFKKDPLJOGN");
    msg.leader_speed = 0.211497259372;
    msg.leader_bank_lim = 0.988929663901;
    msg.pos_sim_err_lim = 0.279800934255;
    msg.pos_sim_err_wrn = 0.732037402159;
    msg.pos_sim_err_timeout = 11218U;
    msg.converg_max = 0.753524092775;
    msg.converg_timeout = 41752U;
    msg.comms_timeout = 21839U;
    msg.turb_lim = 0.330976889449;
    msg.custom.assign("GKSRORCGTGNTIZRJKZQUQZHHMLIOQIVTBYQZMNXZPBFENXNSBKYYPHTPVJFZSLYCUVVDOFABWUMGUWZYRIQOFHTWMBPGZDAJUXEWHIZFJYDAGMOCFUAYTBBOWPUDIGLKTHMLJUUKJPMLOGRHYDJNQXVNKIRPQPBIICETXJOHPMNELCFYVDEASEOD");

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
    msg.setTimeStamp(0.0851090031132);
    msg.setSource(63966U);
    msg.setSourceEntity(115U);
    msg.setDestination(8652U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("BZLWGLFSJTDLHLEYWXNFJZZMXMGXBEINCXEPMKEOBHGOWPCFPKZSKAYJLDUFKTFVXOBPMDDWUMCOUIXQFIBJYGODDCEKEMFPFCHRVRFNWQVRNJVZJQODQNIANSPUUQWCDZMOTCIIVTVGXTAGRGLAULWZASHEOWXCDR");
    msg.formation_name.assign("XUQVJFCPHKJYYSYKPBUFWXBSOVGALAJEIACXPFZEOZTAAHGIFFCBOLWVBEPOKBIJLDSLKDABHIGTUKYCUJCYPMTRVIIQIMQDJZMIDGXTGOQUWSQRHTNXVKCRCJZKNTHARPFLYGOOUAOODWRZUANOMCSFQSEZJGMVEJKVUSDRGWXTUXIVSBQ");
    msg.plan_id.assign("FGQIBBGJMRLILYAXABNMWRHJJCSVSFPMVYAIPVSTNUPOGINMWLKPQJPBNCEMTMCWYCVHTBKYCAXXBTFICSJIUTRDVEAHKIWSDRTPEDZUFQONZGWZKLEHCYNIEKFTFGXCFXHZUTLQSDNYAYXAOHLYGDGBPUUOLNVFOSFLOKQRHZZXXDIWJEVBZYESEWTQTREGVFLHGUKOHSQBWUHEXDCMSRODUIVWMQYPNZJRQWOLPK");
    msg.description.assign("XXKWZOFPJAICZUUJDWXDTYSOTLONDRKCAVWZGUGUZXPMILRHRCKVFSCNQLNJAANOUEVIQTIBKKEMDZGLWXDYTBQZDYPIYLREYTGBWNMAYSZBALHYHAHCSMQDLIZJICWRNFRGUDWRGXQVEEASDPHVYHBHFIOQXHTGKPJUSWVIDEEGFGPNWFBVVWXPLUIHLTMVGAKMUNTNCRRZYMBVMBSOHCJKQKEPJPNQQELBQXSFSTMXFOCKJFJOJZAYO");
    msg.leader_speed = 0.811083149873;
    msg.leader_bank_lim = 0.729391843358;
    msg.pos_sim_err_lim = 0.468187888197;
    msg.pos_sim_err_wrn = 0.794291674648;
    msg.pos_sim_err_timeout = 16510U;
    msg.converg_max = 0.0488529603079;
    msg.converg_timeout = 8903U;
    msg.comms_timeout = 24149U;
    msg.turb_lim = 0.729261185268;
    msg.custom.assign("FTTGYUBUFJEIDWVYHZIUEIOPIHDESBQMFWSMWADPEETNFDTGTSKVHBYDACQFBSMLPTUMOJSSRO");

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
    msg.setTimeStamp(0.276468892145);
    msg.setSource(40816U);
    msg.setSourceEntity(5U);
    msg.setDestination(37051U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("QFQNIOEVWTFDSLAMZKQQLPDWSJFTBNHRUXKJJVHKBTUJJAVKMOAFDYBPCFCBPMUZJGOQXGVRHOOZXLPTSEVSAERNSYPTKGKTVEONMSXCRMELXYBTDIIPZVIVKIUHOOIBBEMNYVHPFXNHIYEWSNOFIWZWAJARDVLDHWWUCLCUMZXMQDIAGQXCGRRJXUZABZMQFPKZBLCUF");
    msg.formation_name.assign("FUVDZNURPTCJFAIASHLQOSVQSILRXQBAOKJPVWYFEYMLOWXQLDYFBDNKWZOUGEAUVMUSFGUKGFEWOZSUKIHTOZOXRCMGLCAWDTJGTPKAIFZIKGMWJKHZGBVOVZYGQQWMSHKMSSZULENEPXMJHDEXPVARPRNBNEGIXQWLEYTODQTTWPDSDEFUNWIKJXRTIJRBBHUDYHJNDBIGNHFYMLNMCCXXACLQMRPIYRNBJACTVRHCCJQBVYYLTKPVFOAH");
    msg.plan_id.assign("LJYWJZUOHJDBIGFKIQHBIVCJZQLSDOWKMMDXDYGLYATEMNKYFRINCNAVDBOCLTAECVQJOIHRYOUBFGEWMXSUPLKPCYWDPUEHABFFYTXAIUHKIHQLYYSAMSOPOVXAZSNVGVGFFDRVUBCJXGDKJKKMNIOWRCPWILAZFZFPBGA");
    msg.description.assign("XISYVXDFUYLUAUJACFDJYAVOLZLOVPPBRCGZBRSXLYWTTYGJJPWAIDRHOVLFVNQOXDQSKZEVOBQRBNWYHENAUXQQURFPTNOSLUFFJWEMSOQWMIDIGGZVSPCLNKNFGRIYEIAQHYSAVIPCNEJEDONSPHSPKUUZMKTAUBZFUBCMHRFF");
    msg.leader_speed = 0.592915991168;
    msg.leader_bank_lim = 0.129029270025;
    msg.pos_sim_err_lim = 0.536216134614;
    msg.pos_sim_err_wrn = 0.997762245197;
    msg.pos_sim_err_timeout = 11571U;
    msg.converg_max = 0.730581655954;
    msg.converg_timeout = 27210U;
    msg.comms_timeout = 54478U;
    msg.turb_lim = 0.677852990463;
    msg.custom.assign("KWKLBOMVIUBWJZGLXDYNMZXFAUMTBTADQLPZJKGEDNGVWTFYA");

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
    msg.setTimeStamp(0.922640571856);
    msg.setSource(42437U);
    msg.setSourceEntity(45U);
    msg.setDestination(21274U);
    msg.setDestinationEntity(210U);
    msg.control_src = 546U;
    msg.control_ent = 213U;
    msg.timeout = 0.222406185698;
    msg.loiter_radius = 0.887785794873;
    msg.altitude_interval = 0.851142544681;

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
    msg.setTimeStamp(0.711353591384);
    msg.setSource(12290U);
    msg.setSourceEntity(52U);
    msg.setDestination(14568U);
    msg.setDestinationEntity(55U);
    msg.control_src = 55028U;
    msg.control_ent = 104U;
    msg.timeout = 0.856758187148;
    msg.loiter_radius = 0.0859018795205;
    msg.altitude_interval = 0.446018903161;

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
    msg.setTimeStamp(0.361251615024);
    msg.setSource(35655U);
    msg.setSourceEntity(235U);
    msg.setDestination(50071U);
    msg.setDestinationEntity(136U);
    msg.control_src = 21040U;
    msg.control_ent = 11U;
    msg.timeout = 0.205577753539;
    msg.loiter_radius = 0.21633789686;
    msg.altitude_interval = 0.711901776903;

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
    msg.setTimeStamp(0.630581790246);
    msg.setSource(3499U);
    msg.setSourceEntity(48U);
    msg.setDestination(1385U);
    msg.setDestinationEntity(248U);
    msg.flags = 108U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.190490777191;
    tmp_msg_0.speed_units = 121U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.900526943119;
    tmp_msg_1.z_units = 13U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.88753291576;
    msg.lon = 0.808133089188;
    msg.radius = 0.893057505369;

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
    msg.setTimeStamp(0.707926338098);
    msg.setSource(52620U);
    msg.setSourceEntity(111U);
    msg.setDestination(21387U);
    msg.setDestinationEntity(61U);
    msg.flags = 49U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.449303653608;
    tmp_msg_0.speed_units = 14U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.55423515327;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.998605128999;
    msg.lon = 0.776626147497;
    msg.radius = 0.683449404678;

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
    msg.setTimeStamp(0.454949206526);
    msg.setSource(59179U);
    msg.setSourceEntity(184U);
    msg.setDestination(49914U);
    msg.setDestinationEntity(138U);
    msg.flags = 77U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.681166489599;
    tmp_msg_0.speed_units = 159U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8076324229;
    tmp_msg_1.z_units = 6U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.649880357258;
    msg.lon = 0.44583891369;
    msg.radius = 0.158282115591;

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
    msg.setTimeStamp(0.473733806114);
    msg.setSource(61122U);
    msg.setSourceEntity(182U);
    msg.setDestination(55926U);
    msg.setDestinationEntity(127U);
    msg.control_src = 23950U;
    msg.control_ent = 121U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 4U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.682449419009;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.184539592913;
    tmp_tmp_msg_0_1.z_units = 222U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.603037572337;
    tmp_msg_0.lon = 0.090634759766;
    tmp_msg_0.radius = 0.673419459818;
    msg.reference.set(tmp_msg_0);
    msg.state = 40U;
    msg.proximity = 183U;

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
    msg.setTimeStamp(0.37947688228);
    msg.setSource(6839U);
    msg.setSourceEntity(77U);
    msg.setDestination(10692U);
    msg.setDestinationEntity(40U);
    msg.control_src = 49245U;
    msg.control_ent = 24U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 19U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13747936749;
    tmp_tmp_msg_0_0.speed_units = 151U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.701083912973;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.111936817925;
    tmp_msg_0.lon = 0.973513496041;
    tmp_msg_0.radius = 0.900719829693;
    msg.reference.set(tmp_msg_0);
    msg.state = 97U;
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
    msg.setTimeStamp(0.184059786582);
    msg.setSource(5356U);
    msg.setSourceEntity(116U);
    msg.setDestination(60855U);
    msg.setDestinationEntity(117U);
    msg.control_src = 57490U;
    msg.control_ent = 35U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 216U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.785471670036;
    tmp_tmp_msg_0_0.speed_units = 237U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.429516619082;
    tmp_tmp_msg_0_1.z_units = 125U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.584909942453;
    tmp_msg_0.lon = 0.0807046561691;
    tmp_msg_0.radius = 0.561030918965;
    msg.reference.set(tmp_msg_0);
    msg.state = 205U;
    msg.proximity = 115U;

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
    msg.setTimeStamp(0.731510970541);
    msg.setSource(20405U);
    msg.setSourceEntity(160U);
    msg.setDestination(14406U);
    msg.setDestinationEntity(100U);
    msg.ax_cmd = 0.118273026791;
    msg.ay_cmd = 0.405339536296;
    msg.az_cmd = 0.357435169647;
    msg.ax_des = 0.890796876671;
    msg.ay_des = 0.930123555408;
    msg.az_des = 0.645788659465;
    msg.virt_err_x = 0.611006683835;
    msg.virt_err_y = 0.755371716309;
    msg.virt_err_z = 0.784754420988;
    msg.surf_fdbk_x = 0.154637600908;
    msg.surf_fdbk_y = 0.951085898043;
    msg.surf_fdbk_z = 0.429797141211;
    msg.surf_unkn_x = 0.704797385698;
    msg.surf_unkn_y = 0.55898015309;
    msg.surf_unkn_z = 0.288159825304;
    msg.ss_x = 0.0903787599664;
    msg.ss_y = 0.965384704676;
    msg.ss_z = 0.024289449397;

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
    msg.setTimeStamp(0.874391393217);
    msg.setSource(65130U);
    msg.setSourceEntity(148U);
    msg.setDestination(42701U);
    msg.setDestinationEntity(199U);
    msg.ax_cmd = 0.943491853793;
    msg.ay_cmd = 0.180363606417;
    msg.az_cmd = 0.0245132321726;
    msg.ax_des = 0.940091135831;
    msg.ay_des = 0.90160405962;
    msg.az_des = 0.254668837551;
    msg.virt_err_x = 0.807483128278;
    msg.virt_err_y = 0.980571871;
    msg.virt_err_z = 0.776829985932;
    msg.surf_fdbk_x = 0.249467737276;
    msg.surf_fdbk_y = 0.755615149424;
    msg.surf_fdbk_z = 0.353095331449;
    msg.surf_unkn_x = 0.444321176825;
    msg.surf_unkn_y = 0.638915213978;
    msg.surf_unkn_z = 0.981279464784;
    msg.ss_x = 0.176494304757;
    msg.ss_y = 0.180919607719;
    msg.ss_z = 0.191946263242;

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
    msg.setTimeStamp(0.845089572411);
    msg.setSource(5497U);
    msg.setSourceEntity(252U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.326826773974;
    msg.ay_cmd = 0.0216502740192;
    msg.az_cmd = 0.387050166898;
    msg.ax_des = 0.183086818463;
    msg.ay_des = 0.0847488449628;
    msg.az_des = 0.722210057995;
    msg.virt_err_x = 0.537153118117;
    msg.virt_err_y = 0.61992062391;
    msg.virt_err_z = 0.250027065167;
    msg.surf_fdbk_x = 0.681942451492;
    msg.surf_fdbk_y = 0.789575918746;
    msg.surf_fdbk_z = 0.494541288935;
    msg.surf_unkn_x = 0.217438119001;
    msg.surf_unkn_y = 0.731072907218;
    msg.surf_unkn_z = 0.399197616431;
    msg.ss_x = 0.653532210102;
    msg.ss_y = 0.836953623967;
    msg.ss_z = 0.798165499106;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OQEFTBBHXZGFK");
    tmp_msg_0.dist = 0.462617048291;
    tmp_msg_0.err = 0.733093681466;
    tmp_msg_0.ctrl_imp = 0.830000302379;
    tmp_msg_0.rel_dir_x = 0.818747219849;
    tmp_msg_0.rel_dir_y = 0.721338318917;
    tmp_msg_0.rel_dir_z = 0.379618241127;
    tmp_msg_0.err_x = 0.139916752062;
    tmp_msg_0.err_y = 0.984904977559;
    tmp_msg_0.err_z = 0.641530010424;
    tmp_msg_0.rf_err_x = 0.908150629222;
    tmp_msg_0.rf_err_y = 0.390145406334;
    tmp_msg_0.rf_err_z = 0.573293872895;
    tmp_msg_0.rf_err_vx = 0.0500471130105;
    tmp_msg_0.rf_err_vy = 0.0501392807316;
    tmp_msg_0.rf_err_vz = 0.548992020892;
    tmp_msg_0.ss_x = 0.329960050877;
    tmp_msg_0.ss_y = 0.475925933771;
    tmp_msg_0.ss_z = 0.949767239187;
    tmp_msg_0.virt_err_x = 0.167223567141;
    tmp_msg_0.virt_err_y = 0.00815471430703;
    tmp_msg_0.virt_err_z = 0.893762517066;
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
    msg.setTimeStamp(0.0816252501896);
    msg.setSource(34452U);
    msg.setSourceEntity(178U);
    msg.setDestination(44346U);
    msg.setDestinationEntity(102U);
    msg.s_id.assign("ZHZGSBQCSNWSUADPZAZMYRKABANWEZAVHJRCCPSVPBYKLPOHPDWEYUEZKMSOKNXQXRUTUXJNWVCQPJFEHWYVMRSISIHHLJXJSRBLBNFUOTTOGOFJRHICWGBKWXVFOOQMERDGOPUTAFLPNTVCYWQQTGEVKJGZTMIAUYXQSXYTIFDAUKLGDTYMPECDECIABZNEBXYRBRIOVOMQFPIUEJAILYD");
    msg.dist = 0.723842221494;
    msg.err = 0.424630102242;
    msg.ctrl_imp = 0.156235526748;
    msg.rel_dir_x = 0.453181973237;
    msg.rel_dir_y = 0.575305639037;
    msg.rel_dir_z = 0.183292832622;
    msg.err_x = 0.811546525674;
    msg.err_y = 0.882517387888;
    msg.err_z = 0.0513955640195;
    msg.rf_err_x = 0.412215510245;
    msg.rf_err_y = 0.799284694191;
    msg.rf_err_z = 0.689389588941;
    msg.rf_err_vx = 0.279936348861;
    msg.rf_err_vy = 0.723056274734;
    msg.rf_err_vz = 0.671458925258;
    msg.ss_x = 0.928443147546;
    msg.ss_y = 0.575904152953;
    msg.ss_z = 0.949183355481;
    msg.virt_err_x = 0.974074255351;
    msg.virt_err_y = 0.366484641642;
    msg.virt_err_z = 0.109454564264;

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
    msg.setTimeStamp(0.798481351839);
    msg.setSource(20587U);
    msg.setSourceEntity(34U);
    msg.setDestination(21165U);
    msg.setDestinationEntity(195U);
    msg.s_id.assign("AXTRCPWLIFYPFNFGAMXHLMRZTJWIBCULKVZHSJRBANYHYRCVIFMXNYTYCBIQOTKLVEPQHUIAXITNBDRYGGHPLFQFDMNEEBEHXCMLJGSMUJUOZTJKQVZNQQGOEREWOWNGRDIDOHURRXYDCFBFPAMVWBUJBNAXCSWIJJZDOHOKLVLZITBDWVKCFEZEOMEXKGTOMWJTEHZKCMIKCHAUXADUQSLSZRDVQSSGVTYPS");
    msg.dist = 0.48801678507;
    msg.err = 0.449951180107;
    msg.ctrl_imp = 0.804886468247;
    msg.rel_dir_x = 0.622715374796;
    msg.rel_dir_y = 0.704801892557;
    msg.rel_dir_z = 0.471524080932;
    msg.err_x = 0.637202002594;
    msg.err_y = 0.440379469942;
    msg.err_z = 0.145562681849;
    msg.rf_err_x = 0.650906467425;
    msg.rf_err_y = 0.446789345447;
    msg.rf_err_z = 0.646322077068;
    msg.rf_err_vx = 0.903334985061;
    msg.rf_err_vy = 0.92210599611;
    msg.rf_err_vz = 0.333796467736;
    msg.ss_x = 0.523252723145;
    msg.ss_y = 0.314901393366;
    msg.ss_z = 0.684823569167;
    msg.virt_err_x = 0.894098410102;
    msg.virt_err_y = 0.70787310709;
    msg.virt_err_z = 0.0572459045714;

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
    msg.setTimeStamp(0.771628214512);
    msg.setSource(36436U);
    msg.setSourceEntity(40U);
    msg.setDestination(15491U);
    msg.setDestinationEntity(182U);
    msg.s_id.assign("SAPWKEYRJWLSJAEHUKZGSBMIYETFUXILTBEVRTDNHCKFPCJJHSRCWXUECWPKBRNPAZYBAJQHHWPFAYOTUGABLWRFAWEXJTZCSDJFFNRTNQMDDSGOEKHOFLYMMQRMINUVSWKQPUNUGIIIMVXGOLNNCXZWERVVMHVZKGZLLCETBV");
    msg.dist = 0.403431576707;
    msg.err = 0.570837745878;
    msg.ctrl_imp = 0.191895454782;
    msg.rel_dir_x = 0.934745562805;
    msg.rel_dir_y = 0.793414036201;
    msg.rel_dir_z = 0.528532221826;
    msg.err_x = 0.852273345114;
    msg.err_y = 0.125296259441;
    msg.err_z = 0.939172114949;
    msg.rf_err_x = 0.883013563838;
    msg.rf_err_y = 0.477893537013;
    msg.rf_err_z = 0.869120941221;
    msg.rf_err_vx = 0.165104233233;
    msg.rf_err_vy = 0.613917001179;
    msg.rf_err_vz = 0.162361642199;
    msg.ss_x = 0.211852590272;
    msg.ss_y = 0.489588364528;
    msg.ss_z = 0.362418415487;
    msg.virt_err_x = 0.172949122996;
    msg.virt_err_y = 0.514023423361;
    msg.virt_err_z = 0.493326454103;

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
    msg.setTimeStamp(0.70665599481);
    msg.setSource(58591U);
    msg.setSourceEntity(220U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(29U);
    msg.timeout = 57480U;
    msg.rpm = 0.00825459023319;
    msg.direction = 177U;
    msg.custom.assign("VFLCPWPPSNJFGVXMBMPFVWMTKGALHTULFBXAFJFWWWKUJYJEOQGZFTENLKMGAKZG");

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
    msg.setTimeStamp(0.850668996719);
    msg.setSource(64326U);
    msg.setSourceEntity(248U);
    msg.setDestination(11825U);
    msg.setDestinationEntity(147U);
    msg.timeout = 39161U;
    msg.rpm = 0.224206389154;
    msg.direction = 239U;
    msg.custom.assign("TTOVADWDYAFFCWKUHWSUSFXEVMISVNQLIEWYXVFSCKVUBYSECFFMNIOWMPKHDKURNIEUYGTJBYRZELOSCMJOJYBZJYZQLCQDRLBIAVYLTTXNGGHLNHEDXPDTSTNHMPNIDLJWCBOXWB");

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
    msg.setTimeStamp(0.776079191625);
    msg.setSource(64068U);
    msg.setSourceEntity(99U);
    msg.setDestination(36329U);
    msg.setDestinationEntity(104U);
    msg.timeout = 26608U;
    msg.rpm = 0.960226890732;
    msg.direction = 125U;
    msg.custom.assign("ZYLIFCPJMGOBNUOXXHHEKJDGMDZEFWAQOAQJXEVRKEUFUZEWGYVZLDORVJIGYMTVWFARFLGWKPTQXCVXVQHDRZDLAFYHONKMBCTYRJ");

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
    msg.setTimeStamp(0.00500174811702);
    msg.setSource(8568U);
    msg.setSourceEntity(102U);
    msg.setDestination(26846U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("TMZBESZVOXYFBLXBBVEFIJGKUHXVYMKWUOYTKANDAQNTUYSPLYFZNDMHMFBVQQLTWUQVXPKYGWIKHQDMAECCLEGTWVWUUAQSJTTHMIIHAVMNMIRUMENOBCDSNOFCEOGJZERPZOBGXCDPCLRPZWKXMVCEJOPUWAZIOHSAKPPCSLYTRAGXGJBHXIVQHDLJSKLWPJYOCVPZQDIJNDAFGOUKTCBRWDSZYYHRGNNRFIL");
    msg.type = 70U;
    msg.op = 11U;
    msg.group_name.assign("ZBLTGNIEUMLVRNOIDANPXJQODIBVHGOMZDRHBHXFTPUEQYTWJOPFZSCCFKQSWAVRAWFHZAONYAEUWOJNRHHXUSYJDGDCNBRQWMNSIHGCEDUFZRIUCLZEQMPKJPLKXYWGZII");
    msg.plan_id.assign("RBSBBNVEBCVDMKIGQLVNRQBTSOSRKZBUILNTAGWKUIMPQLUUIYGPZFOLHNLQYQDEJSWGXOHFELQTPYMYDXGHPFAVCUMCPLHIKXPMDQEMPQSNYADCVDFIKZCNLJBAZSYHESCCOFZGJJSWOJXGTWBJTHEVBHXSRXUYFQFOKUXUWUZFFVAWTOYRDFCKPWVCWADVDANLERPGKKTNNIHJTXRWPJXLCMMEAOIOZAR");
    msg.description.assign("CXVABVGAWWZLZHGVRZBFDPGMUQYLLKSPQENNOAMBXUYYF");
    msg.reference_frame = 214U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43699U;
    tmp_msg_0.off_x = 0.98335257621;
    tmp_msg_0.off_y = 0.385951218979;
    tmp_msg_0.off_z = 0.741951601997;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.67502183918;
    msg.leader_speed_min = 0.868138046501;
    msg.leader_speed_max = 0.788961472238;
    msg.leader_alt_min = 0.52217867372;
    msg.leader_alt_max = 0.399721970389;
    msg.pos_sim_err_lim = 0.0257870409573;
    msg.pos_sim_err_wrn = 0.517228755007;
    msg.pos_sim_err_timeout = 36050U;
    msg.converg_max = 0.270123071056;
    msg.converg_timeout = 14036U;
    msg.comms_timeout = 25180U;
    msg.turb_lim = 0.783400342094;
    msg.custom.assign("KWQFOGQSJWLKDIFPUJYHXTPCRXDQPWPEEBVKBEQNAVZTHHFLLBXLDZECVKCUWIAP");

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
    msg.setTimeStamp(0.206834708813);
    msg.setSource(17925U);
    msg.setSourceEntity(21U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(72U);
    msg.formation_name.assign("KJUBTVJOGWMGZMKQCDSQQQWFURBGDQVHHKZRXVGAZY");
    msg.type = 196U;
    msg.op = 124U;
    msg.group_name.assign("HVCSUPKNLOSEQZNDPCCBXDFFSL");
    msg.plan_id.assign("AGRFVBJARGQKSKDATGXJHEZFRDPEZCYHAFQVVCXSBPMLOYYIUIQWXDIXCXDMIVNBIMSZAKTWKXBKTEISCGVALZYRWEMNRKMEFVNSUOLWDHBSHQOUOYXGDYHSNEXKEJTTUHYXGPCHNZQPIZTAARJANURQWFPTJBSZBUCYHSHDCLLOMLQOJMNZVOMCUFSUCINOMKJGWERQJPVC");
    msg.description.assign("GJLUFHTDTBJXMNDSUIMPYVQTLRECHZJIKPQUEIAAKMXRFCLDDIKUXBNSAMEPHSPXJUICBPJBHKZEZWDUUUWYYNVAAOVMTSCXYKRISWBVOGRXWSORMSXPITNTWBFEDHDNJFWZZBEHNFCMRGLVSOGBUTHYNULDLAQPLVSWEIMARYEWVDWZGFVGCTTECOLHEQNF");
    msg.reference_frame = 29U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15829U;
    tmp_msg_0.off_x = 0.638757805715;
    tmp_msg_0.off_y = 0.155530619771;
    tmp_msg_0.off_z = 0.696363539031;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.460823473221;
    msg.leader_speed_min = 0.503944419964;
    msg.leader_speed_max = 0.168599727911;
    msg.leader_alt_min = 0.829820099962;
    msg.leader_alt_max = 0.536083199648;
    msg.pos_sim_err_lim = 0.63713620105;
    msg.pos_sim_err_wrn = 0.45962058267;
    msg.pos_sim_err_timeout = 57564U;
    msg.converg_max = 0.174785032658;
    msg.converg_timeout = 29944U;
    msg.comms_timeout = 59742U;
    msg.turb_lim = 0.291769210885;
    msg.custom.assign("VHBXWHFYHIODFARNAZIRBRLNJGEMTDVXELGRQTHRSCTSXZJJJMEHFCZDJKOVYKPHNSIUPTGSZCCPITZEXBOKBCRQVHAIYBPWNMSWUGOVGJGWNLQXONQUOUFVSYTJAMXU");

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
    msg.setTimeStamp(0.499716684388);
    msg.setSource(36851U);
    msg.setSourceEntity(229U);
    msg.setDestination(58334U);
    msg.setDestinationEntity(168U);
    msg.formation_name.assign("GVKKTMEFPOUWXKHRQQJUSTGNZCXQLVTDCWOOQGJODLRNZUZKSKITQEZJHHCRLBBNNFZACKJULSSYDYIJVEJDXXIX");
    msg.type = 158U;
    msg.op = 37U;
    msg.group_name.assign("SJPIQFGAQRDUHFAJWITVYWETGRCDJYHNDDJONJBFALCYHCOSIPMCXCUCDELQHFGXRJATLHLGGSKLCVBIEPDOYVOWTZRMDIPOGEDYZEAUVVUXKAYMQPUJHSHEKMTNNTEXWWWONULZCJQTVBMWARSUNXBKJPSXRUGKVKPZSOFSNQGQTFQPBMLEFV");
    msg.plan_id.assign("KTQSPJLVCUJMVPENVHGBVGFHLMEDJXBEVUFALYJTXDIWIMCWFBFZPJFQWNVUURTQKJNQAEAOFPWMHJWUCCEXDHBBDONORDUYHGAAAFIGXQCCKITRYWQFQEEZFTYLRIXROKPSIMSOXGACVWRAPXBSGIGMYLKIRWFPBURNNMUWSVKUXIHZGCLZM");
    msg.description.assign("JUNLEXREXXOPABBVSJRMSOTXPXKXNOELMEZVUOTZCTRMGDNJINBGHZHBRFNAENYKJMTNKGOMNRYNIYJFZAICQSWMUEGVOSCJTJGLDHF");
    msg.reference_frame = 57U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28257U;
    tmp_msg_0.off_x = 0.723104916113;
    tmp_msg_0.off_y = 0.398468038054;
    tmp_msg_0.off_z = 0.0601122417266;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.26093301249;
    msg.leader_speed_min = 0.288831163505;
    msg.leader_speed_max = 0.0498758568318;
    msg.leader_alt_min = 0.615746739777;
    msg.leader_alt_max = 0.758166082523;
    msg.pos_sim_err_lim = 0.84079475657;
    msg.pos_sim_err_wrn = 0.943737763449;
    msg.pos_sim_err_timeout = 2377U;
    msg.converg_max = 0.649055694715;
    msg.converg_timeout = 12163U;
    msg.comms_timeout = 43666U;
    msg.turb_lim = 0.445855866689;
    msg.custom.assign("XVDOXYGPZNO");

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
    msg.setTimeStamp(0.312678961924);
    msg.setSource(10400U);
    msg.setSourceEntity(156U);
    msg.setDestination(65012U);
    msg.setDestinationEntity(121U);
    msg.timeout = 30238U;
    msg.lat = 0.992615249576;
    msg.lon = 0.901467225541;
    msg.z = 0.16312951221;
    msg.z_units = 215U;
    msg.speed = 0.403722986939;
    msg.speed_units = 211U;
    msg.custom.assign("WTNJHFUOPLSJTQIFJSGELPSZEJQHMRCXAMFNMVFBUEGRQGXAIIHTPEFZMWLJJZZATESAAJAQONDEAXUARLYSPWNIPFOKVEWCDVXDCBGAKHMRKLBSZIJNQQCKRTSYBBYPYZXEWZUOLGPTCWEFZJHRRXLEOOODVVAYWNUKNFIBVDI");

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
    msg.setTimeStamp(0.358461628132);
    msg.setSource(44637U);
    msg.setSourceEntity(26U);
    msg.setDestination(36995U);
    msg.setDestinationEntity(79U);
    msg.timeout = 48494U;
    msg.lat = 0.970976501471;
    msg.lon = 0.328252177203;
    msg.z = 0.328232808219;
    msg.z_units = 121U;
    msg.speed = 0.0691644054687;
    msg.speed_units = 177U;
    msg.custom.assign("HTRKYHFREFWXWRMZPSNTJTQCFVBWDEAGHEYJFSMRAHJGQHOOADIPKPBVOSRCPWHJHBPMIUKUZYDUOSXRRTZLKLBNLYLXYGYNJZNSHDOFXPVYZCSECLVLFVTVZTURACYIHMZDQFQIGNWGDGAYWIEUVPXLOJXLKDOLVJMQMNRIDJZCPAONDEIQKNCEWKPXSQIMIEOIOAQXZBRBNGWCZUUAGFCXQQWLGDFTJEEF");

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
    msg.setTimeStamp(0.855931889165);
    msg.setSource(10311U);
    msg.setSourceEntity(59U);
    msg.setDestination(35582U);
    msg.setDestinationEntity(228U);
    msg.timeout = 62585U;
    msg.lat = 0.137656468048;
    msg.lon = 0.722361980761;
    msg.z = 0.483730263046;
    msg.z_units = 39U;
    msg.speed = 0.508703550824;
    msg.speed_units = 222U;
    msg.custom.assign("VWIYVSEINQRDCCBRZCDSCOFKBIHDHRPVYLXOYRFQ");

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
    msg.setTimeStamp(0.482139247346);
    msg.setSource(36497U);
    msg.setSourceEntity(224U);
    msg.setDestination(42953U);
    msg.setDestinationEntity(232U);
    msg.timeout = 62345U;
    msg.lat = 0.546887527856;
    msg.lon = 0.714602857226;
    msg.z = 0.736471743865;
    msg.z_units = 208U;
    msg.speed = 0.27085140659;
    msg.speed_units = 154U;
    msg.custom.assign("EUVIDTBWFVCRGIDJUXIBSFNMAONMUBFROXHMFAWRBBORFWPNUHGPQXURVLJYMHOTXGNSAFEPGSSMQSGYVBNMKLYURAENODJZSFZWGJFJEUPHTCPHTGVOXLYCKDBZVMTQOWKYKWPTPISRQMZVCXQHNDYZJBTDWJVVHRIFMYKIJZDXNPLAOJCLVXRYDYRZQKQWCLUKAFQCSNZ");

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
    msg.setTimeStamp(0.224797376395);
    msg.setSource(461U);
    msg.setSourceEntity(191U);
    msg.setDestination(10836U);
    msg.setDestinationEntity(53U);
    msg.timeout = 24101U;
    msg.lat = 0.432586392194;
    msg.lon = 0.657484471628;
    msg.z = 0.526964330769;
    msg.z_units = 253U;
    msg.speed = 0.581531868093;
    msg.speed_units = 78U;
    msg.custom.assign("NCJIQKAXCJMVSOQIDVZWSIHUWQGWDQHSXLOHAYYEBCLMONZFRSGPIZWNWSRGCQBATXTNUMUBFIBQBYLBYXDZYGSNPNZYHCHGFMLURHVRFBEXJXDGVWIYRHZOXRUGDDFXKDTHXZE");

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
    msg.setTimeStamp(0.123775607);
    msg.setSource(41751U);
    msg.setSourceEntity(247U);
    msg.setDestination(30727U);
    msg.setDestinationEntity(140U);
    msg.timeout = 18383U;
    msg.lat = 0.451607886164;
    msg.lon = 0.852833395078;
    msg.z = 0.381710674285;
    msg.z_units = 125U;
    msg.speed = 0.0358506895425;
    msg.speed_units = 160U;
    msg.custom.assign("XRRPLITLZDEKPJGDBHECAWATKUJDRBTXELNAIHZSVLIJUQAWXRCIWTOXFSNLMVDNQNYRWPCSPOEFAUAAFLFFKCH");

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
    msg.setTimeStamp(0.909831387601);
    msg.setSource(18027U);
    msg.setSourceEntity(219U);
    msg.setDestination(7982U);
    msg.setDestinationEntity(8U);
    msg.arrival_time = 0.855493238706;
    msg.lat = 0.793308865744;
    msg.lon = 0.326076899693;
    msg.z = 0.949370981738;
    msg.z_units = 95U;
    msg.travel_z = 0.0839774365821;
    msg.travel_z_units = 140U;
    msg.delayed = 219U;

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
    msg.setTimeStamp(0.442227036446);
    msg.setSource(33182U);
    msg.setSourceEntity(215U);
    msg.setDestination(11323U);
    msg.setDestinationEntity(49U);
    msg.arrival_time = 0.906038865258;
    msg.lat = 0.720638051762;
    msg.lon = 0.807768995599;
    msg.z = 0.0419246242927;
    msg.z_units = 62U;
    msg.travel_z = 0.477559682;
    msg.travel_z_units = 146U;
    msg.delayed = 246U;

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
    msg.setTimeStamp(0.78367801277);
    msg.setSource(30859U);
    msg.setSourceEntity(58U);
    msg.setDestination(4202U);
    msg.setDestinationEntity(161U);
    msg.arrival_time = 0.993812536414;
    msg.lat = 0.0636936765342;
    msg.lon = 0.343038263242;
    msg.z = 0.132136858611;
    msg.z_units = 132U;
    msg.travel_z = 0.694246932465;
    msg.travel_z_units = 11U;
    msg.delayed = 238U;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.497413833167);
    msg.setSource(41457U);
    msg.setSourceEntity(99U);
    msg.setDestination(32880U);
    msg.setDestinationEntity(249U);
    msg.op_mode = 62U;
    msg.error_count = 56U;
    msg.error_ents.assign("VLZNIRFCRAXJGGLAJCVVMSPOTGETESFFZKKLJGNEYXWUJPRSTPVQANFTZEWKGSQARONLBSBBTNRCKYXXIMJGJGLHHJILVUILQO");
    msg.maneuver_type = 36137U;
    msg.maneuver_stime = 0.0306609099879;
    msg.maneuver_eta = 3103U;
    msg.control_loops = 1440152343U;
    msg.flags = 86U;
    msg.last_error.assign("RBOTUQLUXDJKEJHTPGFMYAYKZNGXVJRKXRJARLXJVHAVOATBQRPNECPMMLIKFROEUFOBPLTCXMLGWKVSQODUZCUGDNYDZSTFDXQPYWQQESSDTRIBVQSFQHLNBPWWHQNHVEFLIANBJFXOLHYJZMCXGVXIKZPIEDJIDRFZCCUOOVDGBTZAMYNAIEHYSSGKEAMZLSRHUMOCHLNVTZIPYEYWCRKINSECUHGWACFDPUNXWKJBTIJMQB");
    msg.last_error_time = 0.818025615929;

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
    msg.setTimeStamp(0.0566549464265);
    msg.setSource(43607U);
    msg.setSourceEntity(106U);
    msg.setDestination(54849U);
    msg.setDestinationEntity(6U);
    msg.op_mode = 191U;
    msg.error_count = 119U;
    msg.error_ents.assign("JBRVQPZLVHCXMQMIWOMLCPPSESVUIOUASOLLJMXNJXEUAGBPLUYYYCCWLHKKORTWQENKMWGDXOJZGBNOFFBSRWWNZMTVSNVIAFDVLJSXTNEMPEYKZXBHOGHFCUUTNVYEJSIDYK");
    msg.maneuver_type = 44529U;
    msg.maneuver_stime = 0.652080405965;
    msg.maneuver_eta = 3632U;
    msg.control_loops = 1648320024U;
    msg.flags = 59U;
    msg.last_error.assign("EHMCNVXLXYCOCNPAHDOQMTFMQYNGUTZXSRCOXGQLBRASATIAKEDWHGDMSPFAVBKLZBFFRNJNIPUOYFJLZKAPIWSTKLJZWTOUIFYQVHPCRQGZJWJEEUCNBEOKYHVJUDXRMBTDVRZSHGSJIKIYAMKEPRPBSIMJVBOCWOFKEQWYXTFMCVY");
    msg.last_error_time = 0.146410963574;

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
    msg.setTimeStamp(0.93678207997);
    msg.setSource(19819U);
    msg.setSourceEntity(152U);
    msg.setDestination(54108U);
    msg.setDestinationEntity(58U);
    msg.op_mode = 10U;
    msg.error_count = 149U;
    msg.error_ents.assign("YAKJZNBFEBYFHVCLGWLTDGYRQKPXUJWYQAUSCZLRLETNWJQNFDVNXMOBXGDVDTLJWXNZGOADHEGXBFRGJOPYMQRZSDTQPUQEZKKUYVSLOIRSBFVZLFRGAILHVIWPSQCKGUVXEHTGNSHQYHWCVODPPWTWCCAXJUCAKAUMBNRZESVJPIGRPOMCMBZHYIYIOKPEAZXZNJRXSQCPLQTHDSOJHWDFFUTOUKIEDXLUIVWKMMB");
    msg.maneuver_type = 9668U;
    msg.maneuver_stime = 0.0393624871002;
    msg.maneuver_eta = 49104U;
    msg.control_loops = 2023759560U;
    msg.flags = 152U;
    msg.last_error.assign("LBHQLYHANCMVPECARVVVXMVXZINRPOVQKDDFWBPLUBPRDCPTNUBOUKWGJLZXSSUEKCIXEZZCFGMZMHGFJKKRSJQTFYBJXVQAPEHPYSAOOYTFXBROEVYITIIBCFHEOGUWKQNNEDWNTBGUMOEVDRKEYAYSLHSAGITIMYWJQGJTZWNJGCWXOPMEFNYKHJZLMSLASVDCGZDNMXORAQPCUWGASHQATFLRUJFTZIDPHQWYIKBJ");
    msg.last_error_time = 0.48502342995;

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
    msg.setTimeStamp(0.597932703125);
    msg.setSource(40149U);
    msg.setSourceEntity(113U);
    msg.setDestination(7759U);
    msg.setDestinationEntity(139U);
    msg.type = 67U;
    msg.request_id = 51916U;
    msg.command = 85U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0550500961368;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 56406U;
    tmp_msg_0.custom.assign("AZUEZUBAGLNZIAGNWEUBZMFOCQENYKGDSDWLANZLIABCHGVKPHRFXSYUWKTFVTQQJVJLMXDVZSMCHRGOQUICVOIGJEFNNRBTTYZZDTMBJMYRCGLYWJWPMFTXFWJLYVNRVWJIKYXBWABEODDZEKY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37715U;
    msg.info.assign("CVWFLNJRNIEYITHEVOXNYECNDBGLFDURYLRFGMQQLNZTDGIBIVZTYCMEYDSDXZMWOESRKZYNMEHJWPSXALHDWNLZYIAVCFNRDFVKQMOVCWUILSGJAFCCLOTBASFFKVPLZDPYHQUWAXKZMPGXCBRBOYPSVWGQITFOAFOUXDRMQHWMIERTACDKEGGTYVGPO");

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
    msg.setTimeStamp(0.380604493339);
    msg.setSource(16068U);
    msg.setSourceEntity(206U);
    msg.setDestination(8575U);
    msg.setDestinationEntity(114U);
    msg.type = 165U;
    msg.request_id = 30367U;
    msg.command = 178U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 59389U;
    tmp_msg_0.lat = 0.837995169109;
    tmp_msg_0.lon = 0.858545070964;
    tmp_msg_0.z = 0.426323260291;
    tmp_msg_0.z_units = 176U;
    tmp_msg_0.speed = 0.549270784042;
    tmp_msg_0.speed_units = 126U;
    tmp_msg_0.custom.assign("DOJHNLXHMLVXOYUOTVUZY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19129U;
    msg.info.assign("QTGQNUZQBWIBOZMYCCSCKAXZFDWEFYSVYINOJBDIBKKHPWMSXQFUKEJRCIZTOOERZVITPBGNPRCNPJFIYMJLLHADGXYSHDWDZVUKAGMXUNLHRUQLMFGMRTUORZBZXFJGJMVETEDDTATYYYHWLPUG");

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
    msg.setTimeStamp(0.165850174205);
    msg.setSource(29090U);
    msg.setSourceEntity(197U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(58U);
    msg.type = 221U;
    msg.request_id = 8285U;
    msg.command = 181U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 59797U;
    tmp_msg_0.custom.assign("YDKNAEJKQEGDIRULUXQQZNLVIVFHXMOIXNYEYJTRBBUGDVQBWAZGHWFALOPEZUKOYNPPYIGTTCQVHSRHIEJYTPNSBIFJEXOPGJEPVLOKUMFTUSXKKBRAYMRZSEHHAMERYCDUQLNDMQZWNBWJLMWCL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63430U;
    msg.info.assign("UVCHJYJXXPLTASVWZRPVLJKBENERVMPGONZQHKOJQMWEDZGZXKZQXINZYHAGBKMVSZFBCTYWXEYDTRND");

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
    msg.setTimeStamp(0.133465031815);
    msg.setSource(11431U);
    msg.setSourceEntity(165U);
    msg.setDestination(50873U);
    msg.setDestinationEntity(182U);
    msg.command = 40U;
    msg.entities.assign("ZZOYCCIZAXUKSDMECWQKDNVHGDIDPPKGSOORNEJKTPOUJAXWBTHUMGX");

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
    msg.setTimeStamp(0.36326051478);
    msg.setSource(36138U);
    msg.setSourceEntity(97U);
    msg.setDestination(1353U);
    msg.setDestinationEntity(162U);
    msg.command = 26U;
    msg.entities.assign("GAHJEZHEDRUCDYMXBJDLVBWZAVYHMORWCZPAFBPCSIMFEJESVGNWQSVLXIMDQWVHLJUDENECRAWMYBLIGAPBOIZVDUKYLDCAIYJJOAVFNBQXZBEVUBPFXSGUPOOTHQQQNNRQIZGOTLOCVKYRGWLQPSYYHCSPXCTHMNRSKYRUEKWIJFHXJFVGSXLLKGPWUPCAZXRBTKWORMDMIEXZZUFTPQKTKFNTIWHASKMTFOCXAU");

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
    msg.setTimeStamp(0.835687041291);
    msg.setSource(6711U);
    msg.setSourceEntity(41U);
    msg.setDestination(23988U);
    msg.setDestinationEntity(42U);
    msg.command = 147U;
    msg.entities.assign("HSHDDIGTTEKHQIUXXNMKUNVSLPXESTQGXAQNRYQRESZBUTYCKUSDPVJKFLFEWYLOIKAGFWCVGBIQWAVYWDNAOFZAQRVUMRKZMVMDMCTOPGLHHKXR");

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
    msg.setTimeStamp(0.154780154743);
    msg.setSource(11894U);
    msg.setSourceEntity(115U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(87U);
    msg.mcount = 95U;
    msg.mnames.assign("QDVRYWKZLCIXNQWDN");
    msg.ecount = 3U;
    msg.enames.assign("IFUJDFKHVFFZIWZKTNXDFBJGKBWOAMZRTEOTOGGCHGKLASPSSZPGANQLHPEAMQDGHTCDFBPCIVSVXTEQIFEDKSZUXDBQNEYNRJCVTIPVBWDADXUYQUEPMURYJVNYCWBKOVVHWGNQFSLGLRKCSWYOMRGMCHDUOEMNIRJAYVXUVMSHYEXXIPMEKOPIBCJUZFMAOHLRMTRQJTCQPULQLOILSPNAWLDWZNGEFJOIXWTYARKRJHYZBBXTHUNZY");
    msg.ccount = 64U;
    msg.cnames.assign("WYYOJGIEJPXZATMASMEQGIUPNKFIKNOPHRBXDDPNQHSDOJMGFMWVIBBHJGOBJYZOCILAEQTSLBJIKECMTDXDQUSRMUCTHVNSFLXKRYSDBRHQNLZKDLWOGOAFVVYBHEWEEUKAXUSSMCCLYBACOWZZQWKNFQNZXIDQZJUTVMRDFEPCCGZXWPOZPNRFCNIFLVWSFYLKRIUAUBFNGITHASOXLVZDJQHAERPGYUBTATVCKJLPHJWTYGVHKRWXP");
    msg.last_error.assign("YUTQWPCSUQTNNYWGYDSKTYYUOIBCGLSJKGLKFQHCUSGNVVSYUEJFNJNKLXLALHCPGVRBILP");
    msg.last_error_time = 0.451012174093;

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
    msg.setTimeStamp(0.502496153979);
    msg.setSource(50704U);
    msg.setSourceEntity(122U);
    msg.setDestination(24990U);
    msg.setDestinationEntity(104U);
    msg.mcount = 108U;
    msg.mnames.assign("WBCEWWJPBLJZAOQHLDKFVTVACIRVSTTWXYDDCQJQFFRMUJVBJPNKCWQOGMHPYLXRSDCNHPJUB");
    msg.ecount = 197U;
    msg.enames.assign("GZHPTLOSRVXWRGRCYDAKWIEKTEITYLUXDTLZOACQNCMUCFGJZUTFDZBPVMBWTJDXCQGHMFZEWDZNHYGPNVKHLXXNQYBIEJCZOIJVABOGBMDWOGOKNIXYYWKWJUSLSQJKVMFBULSCSMTKTAYHSDTERUGJFKYQLHHVZAFDFNMEEAQRRNRVVWURHBU");
    msg.ccount = 188U;
    msg.cnames.assign("LQJPUTJBMMANWRJNUNVKRCOUVYDCKHIIRYWJVRASUGJRGPXLNIOKYUXNSOJJDXSZUXLVBKSSDDFDCTPMBEYMEWDXRYCUPKXWATHFPQAASIBKJGZCEBQNOYYIRZVSFEJAN");
    msg.last_error.assign("NHSXHNWBVCIIWFEJOOBDWZKQOGMHYIQAYFSEKTGIEBHDHBPZDXTGGQFPPMCJKEXAHCUKTQCZDXDRKXQFHEWAVZJLXKCMOLURFMVQGHINMVFFZVBIXZSYZVJLBKRBGPWLRLNSWGMEBTVQRHTXOU");
    msg.last_error_time = 0.736453295949;

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
    msg.setTimeStamp(0.760353268037);
    msg.setSource(38582U);
    msg.setSourceEntity(189U);
    msg.setDestination(46514U);
    msg.setDestinationEntity(101U);
    msg.mcount = 64U;
    msg.mnames.assign("EUSLJOUYSLLSXTGBWOKTUSLKMRGILQBHBINYFOTEQMOVFMWZND");
    msg.ecount = 124U;
    msg.enames.assign("ZSCPGBIJLRFNCUDIPIQGASX");
    msg.ccount = 95U;
    msg.cnames.assign("VIBYLGGSQQPXMGNWPFTFQUFWENBUIMKBLW");
    msg.last_error.assign("OHACDWUSYNERWATETHVFTRVBQYCYTRJIHTOBCSHLSYUSVMUMNSMJPZMACPNQFMRCKXFFVGQWPEXDMWUIJLVAWDPKIYGCJBZOTAFJAEHKYUUSWLASUTXIJSKPUJGXKETFHGKSLVLYIYZJRLARDDX");
    msg.last_error_time = 0.571550295309;

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
    msg.setTimeStamp(0.647447350481);
    msg.setSource(20878U);
    msg.setSourceEntity(29U);
    msg.setDestination(14387U);
    msg.setDestinationEntity(41U);
    msg.mask = 0U;
    msg.max_depth = 0.596436618173;
    msg.min_altitude = 0.115850539132;
    msg.max_altitude = 0.1626318374;
    msg.min_speed = 0.606283339857;
    msg.max_speed = 0.399671535273;
    msg.max_vrate = 0.716418804613;
    msg.lat = 0.24057996123;
    msg.lon = 0.335145146337;
    msg.orientation = 0.446533783314;
    msg.width = 0.260816667733;
    msg.length = 0.230728151735;

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
    msg.setTimeStamp(0.726192124747);
    msg.setSource(52405U);
    msg.setSourceEntity(25U);
    msg.setDestination(4937U);
    msg.setDestinationEntity(97U);
    msg.mask = 86U;
    msg.max_depth = 0.329317097976;
    msg.min_altitude = 0.708559812639;
    msg.max_altitude = 0.0571574930066;
    msg.min_speed = 0.512317994645;
    msg.max_speed = 0.620196323852;
    msg.max_vrate = 0.347639765698;
    msg.lat = 0.984088112499;
    msg.lon = 0.775227494866;
    msg.orientation = 0.277270172184;
    msg.width = 0.551742792115;
    msg.length = 0.95667720368;

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
    msg.setTimeStamp(0.651796312089);
    msg.setSource(40766U);
    msg.setSourceEntity(55U);
    msg.setDestination(28219U);
    msg.setDestinationEntity(102U);
    msg.mask = 117U;
    msg.max_depth = 0.14417527095;
    msg.min_altitude = 0.90926001216;
    msg.max_altitude = 0.648322881702;
    msg.min_speed = 0.0347423629319;
    msg.max_speed = 0.749183242272;
    msg.max_vrate = 0.29531041197;
    msg.lat = 0.843362507601;
    msg.lon = 0.200348489749;
    msg.orientation = 0.859514872865;
    msg.width = 0.585874872073;
    msg.length = 0.434318364053;

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
    msg.setTimeStamp(0.527791615187);
    msg.setSource(60204U);
    msg.setSourceEntity(224U);
    msg.setDestination(23009U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.271996609998);
    msg.setSource(48574U);
    msg.setSourceEntity(155U);
    msg.setDestination(3140U);
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
    msg.setTimeStamp(0.509078854651);
    msg.setSource(22862U);
    msg.setSourceEntity(136U);
    msg.setDestination(50039U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.188635669051);
    msg.setSource(42897U);
    msg.setSourceEntity(214U);
    msg.setDestination(6462U);
    msg.setDestinationEntity(210U);
    msg.duration = 6732U;

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
    msg.setTimeStamp(0.599730575784);
    msg.setSource(16709U);
    msg.setSourceEntity(95U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(70U);
    msg.duration = 8939U;

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
    msg.setTimeStamp(0.849781453863);
    msg.setSource(55000U);
    msg.setSourceEntity(201U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(120U);
    msg.duration = 21807U;

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
    msg.setTimeStamp(0.0450524365755);
    msg.setSource(46241U);
    msg.setSourceEntity(160U);
    msg.setDestination(32930U);
    msg.setDestinationEntity(74U);
    msg.enable = 29U;
    msg.mask = 1781697582U;
    msg.scope_ref = 3854276611U;

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
    msg.setTimeStamp(0.369612205291);
    msg.setSource(11489U);
    msg.setSourceEntity(251U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(57U);
    msg.enable = 178U;
    msg.mask = 3702158357U;
    msg.scope_ref = 840586305U;

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
    msg.setTimeStamp(0.800919557823);
    msg.setSource(55699U);
    msg.setSourceEntity(224U);
    msg.setDestination(15559U);
    msg.setDestinationEntity(88U);
    msg.enable = 246U;
    msg.mask = 2528124838U;
    msg.scope_ref = 4009892141U;

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
    msg.setTimeStamp(0.403838624836);
    msg.setSource(52455U);
    msg.setSourceEntity(121U);
    msg.setDestination(28346U);
    msg.setDestinationEntity(76U);
    msg.medium = 120U;

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
    msg.setTimeStamp(0.372448002172);
    msg.setSource(24905U);
    msg.setSourceEntity(50U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(196U);
    msg.medium = 9U;

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
    msg.setTimeStamp(0.356258634786);
    msg.setSource(57574U);
    msg.setSourceEntity(119U);
    msg.setDestination(23811U);
    msg.setDestinationEntity(47U);
    msg.medium = 30U;

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
    msg.setTimeStamp(0.448975168377);
    msg.setSource(32207U);
    msg.setSourceEntity(107U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(229U);
    msg.value = 0.470866974443;
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
    msg.setTimeStamp(0.483804328913);
    msg.setSource(19396U);
    msg.setSourceEntity(28U);
    msg.setDestination(28686U);
    msg.setDestinationEntity(203U);
    msg.value = 0.420156648703;
    msg.type = 222U;

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
    msg.setTimeStamp(0.89484870083);
    msg.setSource(19942U);
    msg.setSourceEntity(109U);
    msg.setDestination(27219U);
    msg.setDestinationEntity(140U);
    msg.value = 0.263679458822;
    msg.type = 170U;

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
    msg.setTimeStamp(0.879373860841);
    msg.setSource(4929U);
    msg.setSourceEntity(168U);
    msg.setDestination(3538U);
    msg.setDestinationEntity(191U);
    msg.possimerr = 0.0462514401054;
    msg.converg = 0.775431975602;
    msg.turbulence = 0.176300624139;
    msg.possimmon = 41U;
    msg.commmon = 151U;
    msg.convergmon = 188U;

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
    msg.setTimeStamp(0.204878337252);
    msg.setSource(53060U);
    msg.setSourceEntity(170U);
    msg.setDestination(54338U);
    msg.setDestinationEntity(48U);
    msg.possimerr = 0.365104182302;
    msg.converg = 0.216744689958;
    msg.turbulence = 0.35105209987;
    msg.possimmon = 178U;
    msg.commmon = 101U;
    msg.convergmon = 130U;

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
    msg.setTimeStamp(0.978143390152);
    msg.setSource(56365U);
    msg.setSourceEntity(91U);
    msg.setDestination(54183U);
    msg.setDestinationEntity(207U);
    msg.possimerr = 0.576018742451;
    msg.converg = 0.755442921994;
    msg.turbulence = 0.357725678936;
    msg.possimmon = 222U;
    msg.commmon = 27U;
    msg.convergmon = 30U;

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
    msg.setTimeStamp(0.38057386398);
    msg.setSource(9335U);
    msg.setSourceEntity(33U);
    msg.setDestination(18995U);
    msg.setDestinationEntity(94U);
    msg.autonomy = 18U;
    msg.mode.assign("KDZTJLBCTXLDAPICAUUKNQCLDZYAXJGBEOWNFUDFZCMWSLLKIWXAZDQRNDEBVWKRCQKQZPKOMWLHOYOPNBDIEGLCHYSEVMIRUPDFXTYJTVOCPMXHRQTDJANYGYCTZSERGXUJMHUPFSHTAVJZCHYRYGEMOGNYFHUBOUXPIMGKUOPCEQPMHEEPE");

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
    msg.setTimeStamp(0.119169558603);
    msg.setSource(53739U);
    msg.setSourceEntity(183U);
    msg.setDestination(63264U);
    msg.setDestinationEntity(99U);
    msg.autonomy = 201U;
    msg.mode.assign("DXNPIMHFYKAVPBZSAAYRQNKXHOHCCUONPRDEGJZSLKWSKZVPLRBVYBKEZNLURFFFVCXWODKJMJBFZQUMBLWDSDHIIYGSBOVAGFDUIUUZHNXWNSKVHFVWAOTFQL");

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
    msg.setTimeStamp(0.0541555967116);
    msg.setSource(12847U);
    msg.setSourceEntity(251U);
    msg.setDestination(39679U);
    msg.setDestinationEntity(42U);
    msg.autonomy = 187U;
    msg.mode.assign("IUQAEPMDNKXILXKIRWJMYCHIKDBQVARQUGCYHHCDMQLVZENBMJEFPJMBJDCQMXNVFUGTGBMXHPNVSJADKZTQHOZRLLYHNOVXBKRDTJSIQUCLVFASCYFFATUGTPYNJGQZODEGZIWWALWUURIHPOSVYZJWYFXJEAGMELNRHDVXCEZBIXPZUFPFMXLZAWSVOGWOLKNTXPBOFTOKKQNY");

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
    msg.setTimeStamp(0.033694243301);
    msg.setSource(20154U);
    msg.setSourceEntity(173U);
    msg.setDestination(63338U);
    msg.setDestinationEntity(104U);
    msg.type = 159U;
    msg.op = 46U;
    msg.possimerr = 0.982315845244;
    msg.converg = 0.0943571569969;
    msg.turbulence = 0.0109440513494;
    msg.possimmon = 47U;
    msg.commmon = 151U;
    msg.convergmon = 145U;

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
    msg.setTimeStamp(0.890489713439);
    msg.setSource(28591U);
    msg.setSourceEntity(18U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(77U);
    msg.type = 155U;
    msg.op = 151U;
    msg.possimerr = 0.343449721939;
    msg.converg = 0.765279395437;
    msg.turbulence = 0.435903151692;
    msg.possimmon = 115U;
    msg.commmon = 29U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.368538163194);
    msg.setSource(5923U);
    msg.setSourceEntity(115U);
    msg.setDestination(48932U);
    msg.setDestinationEntity(6U);
    msg.type = 176U;
    msg.op = 138U;
    msg.possimerr = 0.812263817728;
    msg.converg = 0.979857963277;
    msg.turbulence = 0.0633445018546;
    msg.possimmon = 208U;
    msg.commmon = 155U;
    msg.convergmon = 62U;

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
    msg.setTimeStamp(0.151065491483);
    msg.setSource(36788U);
    msg.setSourceEntity(218U);
    msg.setDestination(59853U);
    msg.setDestinationEntity(116U);
    msg.op = 203U;
    msg.comm_interface = 242U;
    msg.period = 36063U;
    msg.sys_dst.assign("ILNDGPACNDMQJNMZKL");

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
    msg.setTimeStamp(0.571606673198);
    msg.setSource(34799U);
    msg.setSourceEntity(184U);
    msg.setDestination(9876U);
    msg.setDestinationEntity(166U);
    msg.op = 106U;
    msg.comm_interface = 176U;
    msg.period = 49576U;
    msg.sys_dst.assign("QKNFZLPZZJITNOZVRCKYHWOPZNTRNUMXFVQDSWCVFLVRAYXFCXFOLGHMSPJGAHOOYQQJEKWIEPLPKVVUKGGRNDNN");

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
    msg.setTimeStamp(0.30190758038);
    msg.setSource(5104U);
    msg.setSourceEntity(50U);
    msg.setDestination(44174U);
    msg.setDestinationEntity(134U);
    msg.op = 113U;
    msg.comm_interface = 58U;
    msg.period = 34108U;
    msg.sys_dst.assign("ZJVYVCXIKUUEGCYBBACBMOVOLPIRJPQHPARBTSLLLHVRVLSRSGXUZESTLBDDXJPMIDRXQHUNAXKIUMNULWXNIFFVOMFYSOZKDOWELWHHAVJQNLKALNJIKOXADWRFKDYQBIJQROGCUGYMOWZWNEZNJXSYNWIVGCTGYSCNMXFHUSMZGAQEHYCJDTTSASECTNTMKRTDXYUDRHCGPEPWQGPPQTAF");

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
    msg.setTimeStamp(0.877111159219);
    msg.setSource(1448U);
    msg.setSourceEntity(111U);
    msg.setDestination(52551U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.310975712446);
    msg.setSource(8178U);
    msg.setSourceEntity(96U);
    msg.setDestination(35392U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.579741026638);
    msg.setSource(37139U);
    msg.setSourceEntity(32U);
    msg.setDestination(27803U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.940200596141);
    msg.setSource(58576U);
    msg.setSourceEntity(133U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("UCGAHHZJMOILEEXETVRSVOFYZTIDUWNTXIWAMNQVZQPKJLOVSMMOZLUSLYQDJWSKFESXFIYJZOOOCDYGFARRSPHDOBALWJGMPPNKWZQJNBBKRBLSOQXBYNRFESMIYMHACKWZFDVDAGRUBLDUKUCJVRQITXPFTDIHSECKYJUCQTAAVUZBEXAYXKYFPHMKBCTWNECLLRDGVTZVGTRMHKWOVLQJNCPMNBPIPDXFWIGEYUGISZCGHJPTAWNEUGF");
    msg.description.assign("RQXYOVMZMTRSDGWNVIDZPHUXECZCHAXWLDPSMJIZFYIWDHZV");
    msg.vnamespace.assign("HUVVMAHZHQWRVDLZNPTWORRMJAMEHMZYWCPYEWDARESKGWLKGSBICGFXJZANCOCPGRBHFOWXSTQAZZYYWLZEQVTJMUFJMNXQAOXDNHEOURTFPBDKKSQBKAXAJCTXQGLCCMWNIBZGLECIEFUUWNOBTVDVXLPBRLINSTKRSFALFQX");
    msg.start_man_id.assign("GPMODBIWKJRWGYDKJYDALKEMYZUERCWILATDWMJMUFOGJGJVRXNWZZXURCMHHISCHAFNLGZYTQCICVTXNXJBNPEQRDTZUDOFNENOGHKUOWWKVTEXZVRNGFJEVEXYCMVYYFHACACVZPSUBQQPFJPROHHNOJIRYZUQSBBMGXQKQLPCMRABSBDOMQSHSIKOWDBKGLSKIFECUEUUAEXFLRJXBNLVQGYTWFXZIITVY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TASJDXEUBUQYUMFBCLXWPHDBZOLL");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 60032U;
    tmp_tmp_msg_0_0.lat = 0.171923532771;
    tmp_tmp_msg_0_0.lon = 0.689579987965;
    tmp_tmp_msg_0_0.z = 0.397278690256;
    tmp_tmp_msg_0_0.z_units = 84U;
    tmp_tmp_msg_0_0.amplitude = 0.0288423343159;
    tmp_tmp_msg_0_0.pitch = 0.419221333368;
    tmp_tmp_msg_0_0.speed = 0.925241045584;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_tmp_msg_0_0.custom.assign("BHHDMKPNVAAJCXZGJLQYRJHZMPYIZSFFNLHSQOJKOEGXQRJTMIFLZAQZABCEIQPBYKOOHDFWEINGBLSYTHTIPWQTAKSCEFMLPJYWIKMNZGTKRWVLUVF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ReportControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 220U;
    tmp_tmp_msg_0_1.comm_interface = 184U;
    tmp_tmp_msg_0_1.period = 42347U;
    tmp_tmp_msg_0_1.sys_dst.assign("MMZRBISCNDOBCQTUEJXHMIVHKRRRQDTUWUEQKYHQJRIYLJMESYWUJTH");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.303731935041);
    msg.setSource(129U);
    msg.setSourceEntity(29U);
    msg.setDestination(63183U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("LDVOEUIYZHPXQIWRYLUCGGTYPZNXKSWPFDJNBCKKWUZQVGLFIBXZTXEVLCUJCDUSTMNGELVOOAJNGHPZGPGETWBTIHJNMUOFFWZYMSAPEYRCILJHDQZXOVWSWCQJTPRAGKIYYAQFTQOUTXBRZAFMIVQBDFPYKMFHEEOBQZXHCTRVILGRVPHHBAF");
    msg.description.assign("MIDOMQSXONKRNEZNGAWCDVOKTUHUYKJXKHGYWDFARDQBRXMJRWVMBGZFUTTUOURNPFCSVKQBNATPWVMASBCBCFCLIUZAHXBIYGTSYPVILYJROHNVVBRIQBHOMDRVVQJOSXPEPZEZXWBIOXCWDYAMNDYGSUFQFHPAUVFZLIWFEGJCLJHEKCLALJXPINKHSGMOAKPAWNXSZKZRMDHFZFTLWQTISLSHQQDZTYECUUCIJXLQGDJTGB");
    msg.vnamespace.assign("EIWLFMVLAKWPPHXWYFMIJKVGSN");
    msg.start_man_id.assign("ZUCTZDMCKAPZVLKUMSSWQKFVNURWXFJXAHNUGFCUKSHVQEYAFQJPSSYLZXZDPQBWDFFWUWRRTCLEEYTJODTBQKNGEZSUMZCZQIUGJLFIIKNALCWAHTDJETOQNJGRXXVYVYAPAMIMNAQPTLNGRUQEHHEWUMKIBCPXRNTFWOVJIZJHSVZYHBYCRHGBKLTOMHDAMVYFYINXOBQOSIEVGLWWBDLLIHXTDRDXCKR");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.465030954116;
    tmp_msg_0.z_units = 203U;
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
    msg.setTimeStamp(0.712176939514);
    msg.setSource(50176U);
    msg.setSourceEntity(43U);
    msg.setDestination(40322U);
    msg.setDestinationEntity(1U);
    msg.plan_id.assign("SMTUEYURARBTQVMNNICOSEJVXMBXRAWUXQYCYTYGMRCOVULOHAPWNICQZPMQFRVQZHZJZHBQFPPITPBDNIKKTQIEXSAHWVGOLOTAIHLDBWLVDAFLCIGKFYMEXCUVPFMOJXQDVNWXUSGRCEEZYIKNUAITTSXLFYZFKNFKXRGOLBLZKFFMYHSGICRBA");
    msg.description.assign("FHOUKRHYMNTOZEZQYCGJVNCXOFTUUIFHMCPSRFELJOQAYMBQOCNNUFSHJAJUVMJEDNLBYLYQSJIGACYSXSIBTPJDBPLBVFXTRDKGDUKMBHVBSHGFMPWKZOBREMYFWEIMPT");
    msg.vnamespace.assign("UGEVIMOPLHQQOAFHDBZXNOJSTWEBKNNUAJEWHDGVAAYOMQOUYNTBXGBOSWCEMLQJFLBQJMAPJZEDZKRTWCVCINEPPVYYPJYNJWUVXYZRRRCDSULFHTVRWAYVIUBCGCQISRNQMTQIBSMHZTMTPOZGYKLPWOMHE");
    msg.start_man_id.assign("HULOBOPPAHIBCYAOFYBAYNSNIWWKIIZRFMCGWAETWVTSFZREDVQLWKZCUJBRYZXIGCEWSBFVKYGUJQTVPMRSGHOXJZPGXHVOFOMPXFUKDTSLXSPPSDJYJUARBQQKZNXJTNTMLCFAYUCQOCNVWQKBLLCHQZWQLSGXIJNROEQDTMPULHMVNLDRYRHXXPIHSHIPGBAUJTNDFMC");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PXDEYEUQMLOWOTZFKLJOZHJRHBRTATAXFLPROAWHOJLIYDVBKPHCDICTUGOGXUSSVBWEAYCCLUR");
    tmp_msg_0.dest_man.assign("JLBUMYIQSPMRXHJERWZFOISQVKNLSBSUNCGKZACWVTFTRWUMNZAVRDTWDOPLHHXNQQYZPDOTEELOWPNYSVYPLWULPAFJRFAJWLZIDMWYJGTUCVGBMFDHUEEFJYCCISXPBGSVNDQ");
    tmp_msg_0.conditions.assign("QLSXTQJDKEXAPLLXIUPTOPEBDRFKRAAVJDRWBWNFGPKTGJZZOCRDGDSCMGYLYES");
    msg.transitions.push_back(tmp_msg_0);
    IMC::QueryEntityState tmp_msg_1;
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
    msg.setTimeStamp(0.995121190538);
    msg.setSource(63451U);
    msg.setSourceEntity(92U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(58U);
    msg.maneuver_id.assign("HCKZMDJBOUWCFEDYPUNQAKCDRITCGEJMYBQGWWIYWUZFFOTVECJBRGRXENUKBHFVRJHZGYAPKBOSHMPNYBQSTSAFWTRPDDNRLLDBDSQASUJIGMNXKOZHXABWBSZSRICGKZ");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 1704U;
    tmp_msg_0.custom.assign("CEBVKKTJPBZQDKVFGRJVRKJESYAALZWYLLEPCIZMWHAFQTVVQHLABWDDURDEWTIPRRCXDXXUVUBEHFSSEBNSOAMONHQEYTOEBAHSGNCAXJOQWAWCHZVPDGY");
    msg.data.set(tmp_msg_0);
    IMC::Turbidity tmp_msg_1;
    tmp_msg_1.value = 0.356204513348;
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
    msg.setTimeStamp(0.061766209005);
    msg.setSource(59978U);
    msg.setSourceEntity(116U);
    msg.setDestination(55526U);
    msg.setDestinationEntity(91U);
    msg.maneuver_id.assign("KEXNBOVQLQNKMCTRNBEBSXCWSSVKHCVHIJTIEWROFGRMNJPBSJUKBVKPSDABKKPFJMXNJYMYAFRLIFURRRTHMUDNAYINGSMQBIOJCGQ");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 23381U;
    tmp_msg_0.lat = 0.653808009613;
    tmp_msg_0.lon = 0.645230035476;
    tmp_msg_0.z = 0.30244635346;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.113875410692;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.duration = 56757U;
    tmp_msg_0.radius = 0.641389448644;
    tmp_msg_0.flags = 121U;
    tmp_msg_0.custom.assign("ZVSJELJCLNEAOORPBOTBCAXDMEQWBIVGMSHGKMCFHVGNUZZBKKPJXLGQIHNAXAHAIMCZGLPNWSISDQTEKHQFFXOSDMLPBOWDWTFOSPDINUNUTTLIXU");
    msg.data.set(tmp_msg_0);
    IMC::MessagePart tmp_msg_1;
    tmp_msg_1.uid = 234U;
    tmp_msg_1.frag_number = 111U;
    tmp_msg_1.num_frags = 94U;
    const char tmp_tmp_msg_1_0[] = {79, 35, -83, 104, 45, -31, 74, -18, 76, -91, -126, 1, -48, 97, 12, 26, 36, 88, -111, 121, -15, -89, 18, -106, 63, -31, -119, -119, 4, -100, -48, -115, 12, -65, 68, 79, -100, -28, -38, -35, 42, -8, 56, 71, -85, 28, 9, 48, -74, -86, 79, 58, -55, 62, 107, -114, 55, 25, 9, -74, -92, 37, 120, -15, -21, 71, 46, 51, 57, 68, -97, 105, 85, 73, -33, -107, 83, -106, 104, -127, -104, -53, 79, 117, 53, -20, 44, -30, -16, -7, 23, 29, -46, 103, 119, 76, 6, 100, 14, 44, -114, -118, 50, 93, -43, -18, 18, -34, 22, -84, 93, -2, 34, -42, -62, 19, 35, -121, -77, -97, -70, -58, 70, -118, -19, 44, 115, 124, 5, -53, -20, 4, 110, 46, 77, 3, 91, -70, 43, -102, -23, -29, 71, -107, 83, 124, 56, -18, 10, 64, -124, -25, -70, 71, 98, 46, 79, 103, 2, -114, 33, 82, -103, -117, -90, 41, -93, -79, 58, -127, -12, -122, 5, 84, -1, -2, -82, -47, -9, -109, 16, 53, 124, -42, 58, -93, -81, -58, -89, 11, 97, -100, -77, -44, -74, -84, -12, 71, 116, 68, -117, -71, -113, 94, -33, 66, 40, 109, -5, 123, 44, 24, 99, -83, 79, 16, 22, 118, -79, -46, -121, -30, 31, -49, -64, -71, 103, 124};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.578373962603);
    msg.setSource(55721U);
    msg.setSourceEntity(165U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(98U);
    msg.maneuver_id.assign("TLEVDMVWNERTDKTGOSMPMYWHXECHDGUYZZWQWMXBRHUMBRRHNOJUJUWHDXSJAYINUGOWPNNZOGATPOCPEMFZFRPXFKQWJYGMMWLLFDVBWBYBNFSTVNLIEHDSMBGZFQJTKYICVNEXILYICQSLFKFPVCCMBIIAPBFGRKBSAOPS");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 13612U;
    tmp_msg_0.lat = 0.50578489165;
    tmp_msg_0.lon = 0.942834480916;
    tmp_msg_0.z = 0.710558143876;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.speed = 0.712182984979;
    tmp_msg_0.speed_units = 223U;
    tmp_msg_0.custom.assign("XXCZMPFSKDVCETMMEDCGHJWCIUCKVQNMIHXOCWIUSLZMGASZJGJRAHDTFRNZEAPHCMAOFQYIWKUKDQVUFLXAFVEUGKLBP");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.89365116966;
    tmp_msg_1.y = 0.228918638883;
    tmp_msg_1.z = 0.578752347852;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SessionSubscription tmp_msg_2;
    tmp_msg_2.sessid = 292882123U;
    tmp_msg_2.messages.assign("WMFDYKJNEUAYDLTQMMFKXPQBJJYJDPVGZHVOJOXUYEZZIBXNRLDMQJTATMYPITRXDWKGEPAYELUEIHHSFZHPEVPYXSOEOOLUVBMMTXRQKCVYFQHGUDRBPICDDWLAGEBSSKSIMBRONTXJVHZLUGVFKCQQHGKNVOURJAUTDETWPHLZVWQIMZSFAOANFCSGUFPRGSOJWGCTC");
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
    msg.setTimeStamp(0.0154421364276);
    msg.setSource(16257U);
    msg.setSourceEntity(226U);
    msg.setDestination(41015U);
    msg.setDestinationEntity(4U);
    msg.source_man.assign("MYNLXDPBMAFIGNMUZLNWJYKNVYCZSJGHSKBLPXJWNUDRZCHKVSZSVUESZFLEMFKIFQGVETXBAVMAQOBQYCWIOXPNHBRXPOFREJMMWUUKBHZDFKUUVTGKRACJXYNSVDCGLEUMPQZUPKTCOIWDZASRLIIIDOAJTCQRJNOLWPSPMDPOEFDTBNOQRXTTTWJZXLHMZGEHCVFQGQGEHGALPQJABEBFXYCTKDOOSADCWLYRWGNRIWY");
    msg.dest_man.assign("TKZRFWOAHGETNPLGUEHPCFQIZNMUQQCHDFYKHGSUPPSARNEIOAIUCPVVHEAYILWXOTMRWCJXZXUHLROVFPUTDMDJRWEPYEDYWEJZFKLJXHDRVFMDSGSQSZPSCDZMRIIEVUUQSOOIYFGD");
    msg.conditions.assign("IRSKLYUNAFIGITYIKOYYLXTCHVEIADJBTVHDWONHFCTOGKFQXEWIEAJUIMUZGOHJACFJVMMGJBLSZQWTYFSMQFGHNFPULRJBQDPCNPE");

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
    msg.setTimeStamp(0.865013097217);
    msg.setSource(61029U);
    msg.setSourceEntity(135U);
    msg.setDestination(29932U);
    msg.setDestinationEntity(119U);
    msg.source_man.assign("JNOMXDMTGABSAULJGVVMZBZOIUQCQRBWWNRDSKKHSHIKV");
    msg.dest_man.assign("TOCRWBPNJYCEYTDAPLGUXSBEZEHUILVJDXWOXFADNDUYLWHWVKQOIPQAHJJKNGJROGERVUCDJAHMSLEZN");
    msg.conditions.assign("IBILPSYUAPSBLWAGRQ");

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
    msg.setTimeStamp(0.989452470733);
    msg.setSource(63550U);
    msg.setSourceEntity(86U);
    msg.setDestination(62734U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("GCYXKDYRPRCGJIQSCWUFLOZUTLQVBZJSCERDSLHLKVSNNUWRCGIXMBKQYQRNKEENVEOJ");
    msg.dest_man.assign("CBVVHFYKMBGEHFSJANODIHFFPWAJNDUVDLLDQPRKMZMXKUTXCXNEXWMWRXKYKTIJ");
    msg.conditions.assign("BAOCATLQJHMLFGORNUIJVVCGEWYROKJICIRVISFHPZOONBQLYBQWEIEJRMALPDVCRGDEOALMEVHGTXPNIPDZGAYWBXZHPHASFNWEZHXNDMXFKQRRPUYTFZYZWUWGCJVJCBUCPQTQOPLYXBBQKZZMAIVZLXUSFTSCKTKYNTMUYLOUSECKAIAUDFEMVMRBSUZPLGSXTIDFEXMFUA");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 87U;
    tmp_msg_0.error.assign("IBJMLCJEMYPQRYVHUCBSSCRLOMTBFXFVPRPFMGYLCEMHAWCXXHXONYNAVLXVXVDRWDDIDAZAOEVIHWHEWKCOYTAROLQPISXYOCDWCZPVTBPQUEOHSYYZFLWUFFDRRGQQSQBWQQFUVCOGIAXTYUGCMOKDMJNSWBKTUJNIADKTRUSNFGNMYVQZPUUGBKHW");
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
    msg.setTimeStamp(0.194954595155);
    msg.setSource(8664U);
    msg.setSourceEntity(13U);
    msg.setDestination(21296U);
    msg.setDestinationEntity(35U);
    msg.command = 56U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JPAQWLOBSCVPKWBUOSRMKBINMLMASYCSMZMZJZRAMIQUDXAVNIYVMUQLIGFBDRYEXCXBEWDPZPRIWALFEIGNAFBFEOCCNRPKENEOERCHHZGVBHUQKHKFQLJTKYBKLFVTQDYWFPSIJSCXLABFVKUNTENKJYJCMJVHVMZOAUUEALNDNOTWPELBIQDTVYCLDXYGGDTFXRXJGPXXSZVOQGKZQGJWUQIWITRNPDAGDHPUOOHTTSHZW");
    tmp_msg_0.description.assign("XNAXMJWQWOMBHUZRGOC");
    tmp_msg_0.vnamespace.assign("LTUUPFPEYPGOJJGDSXNVSJUCCOGLRBSVVVTYBOTICGRXOUKCEAXKTQAZSSJHVFQZXMYFWOORKCEOQUNMDDZIXXYHKPKDSYQLNHEXTZETENILWWUOGDEPYCRFETHCHLMJVPFBDJWBYOGISHUZWHVFIHNABRNRZIMZILLWWSFDAB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TAEVLDNPEJHIRAFNXFVGTFKQBBBBRDSYUFAMDPTNHVCIRQKKHVQENMYSDBJXDVCJNPGFWYCZRESUTJKFLEBYCOJRAIVVGYHVULRXNOWOGNQLVSKEDGBIMLKSOEQERXZQCPDIIHPSNJFDT");
    tmp_tmp_msg_0_0.value.assign("KCFIPWVWAMBEYENZUYDPDLYLWJLGOMGMWMCCJXNQRPWLXBRZXRFNTZNPGCZAKSOUGMZLRBGGZOFJZGFVVTDVGTSDFMJHXBGSIVASQDIHQAUWSPHCJJNQIVQNXFLHBSIMKJFSQOJQRRIRCGXIITYESYHREYYNZFLACZQVAWHWUQZVBLUUAKJBK");
    tmp_tmp_msg_0_0.type = 151U;
    tmp_tmp_msg_0_0.access = 62U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GHUZQXIZEQXFEKRLOSPEBPEPRAEOJWTZCLAOLGJQSVSMWIYMAFXRKPJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BLDWAXLYNMAAJQUREXOBWPMPVBGNWQAUAJRIQOKDJANKNQFSEGGWQUIYOEMILLZDRQXAZHKHEZWD");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0467264397521;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.98788075646;
    tmp_tmp_tmp_msg_0_1_0.z = 0.552782854679;
    tmp_tmp_tmp_msg_0_1_0.z_units = 165U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.954410972513;
    tmp_tmp_tmp_msg_0_1_0.duration = 27423U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0859932504058;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 48U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KGBVPQCCIMPVCEZQNEIRRZRAOONIYRDETAVICWPXYOGZBSLTVJGXGBWEEMQIANMQGLSWKFVIGFRZWDAUSQXLCCJSDDRWOSJFEQUUBR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FormationMonitor tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.ax_cmd = 0.298551836034;
    tmp_tmp_tmp_msg_0_1_1.ay_cmd = 0.404357416808;
    tmp_tmp_tmp_msg_0_1_1.az_cmd = 0.677454380264;
    tmp_tmp_tmp_msg_0_1_1.ax_des = 0.697812070483;
    tmp_tmp_tmp_msg_0_1_1.ay_des = 0.608555373984;
    tmp_tmp_tmp_msg_0_1_1.az_des = 0.227274486038;
    tmp_tmp_tmp_msg_0_1_1.virt_err_x = 0.446851449433;
    tmp_tmp_tmp_msg_0_1_1.virt_err_y = 0.228424515358;
    tmp_tmp_tmp_msg_0_1_1.virt_err_z = 0.170175358747;
    tmp_tmp_tmp_msg_0_1_1.surf_fdbk_x = 0.0775407379969;
    tmp_tmp_tmp_msg_0_1_1.surf_fdbk_y = 0.824302857182;
    tmp_tmp_tmp_msg_0_1_1.surf_fdbk_z = 0.845960455482;
    tmp_tmp_tmp_msg_0_1_1.surf_unkn_x = 0.649953462001;
    tmp_tmp_tmp_msg_0_1_1.surf_unkn_y = 0.180772821403;
    tmp_tmp_tmp_msg_0_1_1.surf_unkn_z = 0.481640579168;
    tmp_tmp_tmp_msg_0_1_1.ss_x = 0.798445880189;
    tmp_tmp_tmp_msg_0_1_1.ss_y = 0.288936082421;
    tmp_tmp_tmp_msg_0_1_1.ss_z = 0.0774692603792;
    IMC::RelativeState tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.s_id.assign("BOGPHIIISZUBAHGAYLVCWNPHEMOWQATLIJPNFADXZFSKQMREKJKUJTPEQROPUIETVAARCZSCYZFXHDDHIXUDUHMSYWVQKIQLXQRNYNLLUSJVPBRPEMBOGVMYMYVDFILYUNKPFRXFWCZXTTGBRJOUXHALVBNKQMZMDOQWTSPKJO");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.dist = 0.207491534308;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.err = 0.451368784471;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.ctrl_imp = 0.894389073323;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rel_dir_x = 0.0306939815443;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rel_dir_y = 0.94644509701;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rel_dir_z = 0.651029100884;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.err_x = 0.00678511279572;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.err_y = 0.828028110097;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.err_z = 0.523801831539;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rf_err_x = 0.684980716223;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rf_err_y = 0.224600369357;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rf_err_z = 0.964352180078;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rf_err_vx = 0.666478704516;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rf_err_vy = 0.432889962756;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.rf_err_vz = 0.641474908777;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.ss_x = 0.337553767395;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.ss_y = 0.913838614929;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.ss_z = 0.934311215453;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.virt_err_x = 0.783307319941;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.virt_err_y = 0.212924142461;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.virt_err_z = 0.947968324957;
    tmp_tmp_tmp_msg_0_1_1.rel_state.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Rpm tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 26300;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("IKHWJYQTHAHORECCBPAXFFUONXOGCJXDYBXIIBFXZRJNMHEMZUFJWOUNKNPVRRHZYKNZEBDGSAQDFDOAEZLGGVIIABSSPBQINUYEZZEHLPLUFWOMBXDTJDSILCWCSPRWMOGAYLOKQZCXQKKGCIRMKFRXLEQVTXACNNQEZIQSHEUPJPDLMGLVQEBWGKDZWRUTMVYRPVYUNTHTJAOVBVLXFKKIS");
    tmp_tmp_msg_0_2.dest_man.assign("INDQOJHBLOPYDSGZXUBLTHNUWQKGUHQORAKSMQYSILVMVQTNBYASJLSSHKQVOPRTBEXWORFINWWZCJETKLAFYYHCCGNCTNCESIVAZEZZNZLSWEHPLYLLXKHEMYIXIZSQAUCBEPBVGOMFGXGEFFJEXJYMKKZBFVTUGAQCQJDGFDJTKJODTLWIHQWOMAITZRDAVXCBFPNP");
    tmp_tmp_msg_0_2.conditions.assign("FEAQUMZJOTSCKBDDQPUNGIJDY");
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.original_source = 3906U;
    tmp_tmp_tmp_msg_0_2_0.destination = 59477U;
    tmp_tmp_tmp_msg_0_2_0.timeout = 0.606671364212;
    IMC::AngularVelocity tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.time = 0.244119515208;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.x = 0.80274301904;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.y = 0.719449290269;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.z = 0.509795710038;
    tmp_tmp_tmp_msg_0_2_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredRoll tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.826699073266;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::HistoricCTD tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.conductivity = 0.240008054787;
    tmp_tmp_msg_0_4.temperature = 0.789532660713;
    tmp_tmp_msg_0_4.depth = 0.125157157299;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.450602690541);
    msg.setSource(27224U);
    msg.setSourceEntity(39U);
    msg.setDestination(7802U);
    msg.setDestinationEntity(34U);
    msg.command = 237U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IYJKCZVZAAWHDUYODBDQWQBYMETOFVXZFDYORUVXTKJNQOYLSMHHTKUAZCFUYNFRSMLHQMLSWVORFSXPNRCJPMVBWRAVGQNZCIIZMFYUCTNEHIOOOINCIDYZRLVNRFFQPHKHTIMTLBOSPKXVCXASGPQWBJLOLXDKVTRCXLHGRDNQKESIGXEJQ");
    tmp_msg_0.description.assign("ETBKJHABOHLSKINVBDWODNOAGPFMXCEFPJKFHHPPBINOHXIJPSBRWDMPCAI");
    tmp_msg_0.vnamespace.assign("SBHUKCOJHGIIYEBQZHGJVWQBBKBWTSYBLCBTHPRRJRJGXVQBVYTCGAROIEDWMGHATYYIUSWASURXSNQULFWTLSLFYSIHKERFIWEMNCHXEZG");
    tmp_msg_0.start_man_id.assign("YNRGEQYFYUJFRDQFRNLQFIKZDSZCZFWBHATQICMOJTADIHVAHLLITYPAVQCYVEMZIPMCSLSVKLXGUUPHPKLUTZWKLXKMAOPSQYSIAGFTUTDXXMFHKZDGEQOXEMVYIOSNCOTYGWMFLLOKZREMHOKBBSUDCFUJXHPXRWCZGVG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QPHGGJXTZUYT");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("EHVQNWVPZOCVXSCJLNWCAWSOKDSDTUFDEVIRDESQYXAEWUTHKFZDJFWVXBQVIZTKCBYDZXZYGBRHLEIOJTBUXWMNYURRBPLZTOSFIPFIUVMAHPVNRFEDSGUJVAMBRNXYYQXENCKIJMDIGEGBKSNLXPXZPKBHKHKGCGQYYQLOTASTLGLMPNLRPPYEUHMPSITZQJFAMGDZTUGQJKOMZCJURAQOBWLRTHCISHFAHDWMNLJOMEOA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::MsgList tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RSDYOBPBHZHGFSQUDJOZJTUUJHWGZSMFGRPAHBYHMQLFGKPEWCPINASGTTCPUFSJIVXQQJCRTHXYUDIFEHMENGVMEXZGKQXVBTVRDPMOZHOXBRZLBFAAMEJQJXTRIBCVLNJQSYCKSVUZWV");
    tmp_tmp_msg_0_1.dest_man.assign("YRWXJWVDLFDHJBTYJTSIJAHZQBEYXGZBCMYGGQUPKCONSINSBORCAKVJWFOEGXVJM");
    tmp_tmp_msg_0_1.conditions.assign("YBFHSEJSZDXTJGTMLNHHKVWJWQDWANMPTBAUDCVBZGGFMILSIUCQJMLQIPUMWHRGSRAYXEGDYPZWYIKSBBJIVAFXFROCALHUUXAOKWRTHLBGEWKQVZLEVLTXILRNHZNRGTDYVPNBEHFOYNPOSPQPJNWIPNCFKOZSXGKKRJUDAGBKUDTOACCWMFRNYZOVD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CacheControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 57U;
    tmp_tmp_msg_0_2.snapshot.assign("YAGOYLDKMOMWXQUSRIEBEVYESCGPNKFXHOQDWJTYADALGJTAHHLZJRBGMADQOJVKPNKHREACEKSQNUVZFJLZFABRROFVFVTRDBQDYTBCLZUKCPUTDXYMOGWCOSJHUHMFBWEIIAFDIVPGAQVVSBVOREYOPFPFCSQZNJLCULMUTTPDXEPWNHMLIIIZZRUWNHHNSBMHNZGYTWBXMLSBWWLRFU");
    IMC::UamRxFrame tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sys_src.assign("PRMEEMGFKVSYQABORAXCZPMGSWHUMBJCNTVQATQJEHWBOXPWZRJNQEWAXYAVOIBPXRSPBQBXWRHYTNCGMSCGAPXIUDNXCYVUUNNPFFTEBVLKKBOYZYZJTWRWAQBLKCSFGTWNVJGAJQOKITFWTKHZDVCEIUIUKBDLHUEYDADEMLUOONGMZMSLNSRDCFEMQIYQHHCDOFLPSVPCMUVILXJZRHQKZRNGOYADHFIIZSWDJPGLXKJSGTEFVI");
    tmp_tmp_tmp_msg_0_2_0.sys_dst.assign("SZIQARRXVMFEGQVCQMSAVBVUGNNOLLOKUYGHFYEUOPJJXITUIANLRXXVYQZFZLVBCEEZTJKCAUDKYMCMTYVGLPIJLWITDSVMROSQMHUZDQDKKIJDXWOUHSWTOEYOZDNBHJMNCYZNVAKIWEDXXQGTFWIEFPG");
    tmp_tmp_tmp_msg_0_2_0.flags = 59U;
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {0, 4, -117, 31, -102, 113, -81, -27, -65, -94, 99, -77, -91, 103, -103, -39, 124, -65, -13, 71, -9, 89, 15, 32, 113, 15, -1, -125, -12, -118, 45, 94, -25, 0, -6, -43, 67, -127, -58, 103, 78, -94, -26, -51, 99, 61, 40, 98, 15, -14, 56, -53, 120, -25, 45, -45, 28, 73, -119, -4, -93, 100, -33, -88, -56, 88, -123, -11, -73, 37, -60, -103, 83, -8, -40, -38, -104, -41, 62};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.message.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Event tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.topic.assign("QCYSJYQOSBSUHBKXBKAPAPWO");
    tmp_tmp_msg_0_3.data.assign("GKEKPVBVOCTFQTSZLDAWZWEFPQIIVUREZAGWNXHNCIOLKLBUH");
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
    msg.setTimeStamp(0.172605193518);
    msg.setSource(41159U);
    msg.setSourceEntity(130U);
    msg.setDestination(7320U);
    msg.setDestinationEntity(163U);
    msg.command = 146U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TSGCXRPCFCJCZWKNEGYKJZXLPPVNMPEWJVYIDITTATRVCMPAIWLMUFMIBFWAVQUHUYIJQAUQCVCYXOMBQQDDBSRETAYONOZGMSKSKFDHRGKNZSTUZAHCWNQHAEGIHDQWSTUWFABLRM");
    tmp_msg_0.description.assign("DNSLKWRSGYDGNXLWXRELZSRDDXFBWHIMPFYOWHVWIYUESUKIMIYIZCFXMHJBPAKBZYVAQNWRRXVLENQTSNPERICXGWVMCDWFRJHUEVXFTOCQUAOQZJHJALLCMJ");
    tmp_msg_0.vnamespace.assign("BFFSYNXQHYMLVQGKFIODUIWVERSBURJCYQBOHOXVTBQNKGJOGYMIVWDETKVZYABSTZOREOYRHDZTGQGXJWVLKLFFOGKNRPFRCHGYAUPDFZII");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PETRLKZEYSPJHXHOWZTHDEJEVJEASJPJZNDXBYWOCBUDANFXZIKMSUATTHPQUBBIUDFDMQYFVGNRWPZGUDNLWVBTYIRKJOSQPEPSVNHGEHLSVVEKRHULJOYVMCRTLINFJ");
    tmp_tmp_msg_0_0.value.assign("WIMYQPUPPROZLFRGTBBMLOSSKJQCYAIVGDNPDAPXSCQGDXMWOJXFTNVNENXJFVTGQSLHJLYWJOFQAMUBFIVQFICDTKHRAZJKISMAYNVZRGYXPTLFZEWZFGMIDRWUEYEWHQZAOLXNACSOUNYFESSOIGVGHHZPMKHDJKJRIHRMMDRQCJOJEXBCRKTKDNHTTBHYPRSPQ");
    tmp_tmp_msg_0_0.type = 5U;
    tmp_tmp_msg_0_0.access = 149U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IDJUJODQOVVLWTBHTXTRHHGUWOXRMDECEAYOVEIQDACGMYQSTURQUNWCIJHSRHTXLPQBKNWPGOQGZRWBSVITGXUJKMOIGINDSNLDSZLIQXFLTVAZSNFAAAKCVMZLUTXCXPRMEYYJQEVBDJLMQOJPYVCMXQZJKMMFFGBLAFEDFCKSKWYXVOJSHERNDWHAIYPSNPZIUNCBYKTCIWYRWZEBNTZUL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TPCHJHDBLWZCEULTKSXFCPQQZWMMQVAJZAPUYTYAAQJQODRSOXFZBJNOGFCNKTDUWTMPVSBYUCGFGZTIBRFSUBWNFNRWWRMZRIKDDZIEJHSKJDQNXAIYBLVVELYSQVPSURIVDYQTHMRTSOKGGFHMMLRG");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 48921U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.880033931837;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.123475594438;
    tmp_tmp_tmp_msg_0_1_0.z = 0.551498547968;
    tmp_tmp_tmp_msg_0_1_0.z_units = 207U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.465928201558;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 214U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.735809890548;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.930196349676;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.87153206514;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UMRVAKLKGIPPFQZVRQYJZUSHITHBGTDYVNBHPDLLCDOIWQFEWTUIXFMJTMO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.718534778178);
    msg.setSource(42394U);
    msg.setSourceEntity(242U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(222U);
    msg.state = 33U;
    msg.plan_id.assign("YCJKDWCXIYTDYEMATVDAQHXOQAWDGKCEPRNBNQAZYDQKABHCVUQRREPJWKSBRRZFPFQLMMZLEEMFJBCSLIFDRUDECJIJZNQYUJYSUTGKNIGZETLYPQHSUOLRYXSELBPIQKUFFCQOMWVJGXHZBFDVMIGSAPYFCNPJDGRBLVHOXTHHULEASEWOUWLKWVZHVPNRHZZICOXMOAVIUSTILXVXNGFSCXZWAPMTNWTKRU");
    msg.comm_level = 140U;

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
    msg.setTimeStamp(0.690064053031);
    msg.setSource(42009U);
    msg.setSourceEntity(54U);
    msg.setDestination(5096U);
    msg.setDestinationEntity(59U);
    msg.state = 89U;
    msg.plan_id.assign("BBFRRIALKFTPHNLWESOKBMCRMVUWFTZSYYVEQAGULZHSHAKSOHBCYIECMYGQPBKZAOAAPCWTKKHATFDUWBIVOWZNJRMKOGBXNJNGGC");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.82105230935);
    msg.setSource(37401U);
    msg.setSourceEntity(152U);
    msg.setDestination(45032U);
    msg.setDestinationEntity(113U);
    msg.state = 139U;
    msg.plan_id.assign("HPZQBVICSHOGFJWHMPQUXADVOIETXLQCNZCBOTGXMSWBAKWZKKGMNYISPJCUAYUAKJRDZHPGYAGZRZMIRDXFHIZWCJLCFRLKVAARNNRUTFSHWTFPPMEMPKUFJSMNEEHZOSQVWMCFYWHEWWUVJATMJIFOQJVYZDKLPVFBIQWLPKRIXAHKVBONJNBLSQJDSTGVMDUBPORSLUAGXNGYINHSTEOCXE");
    msg.comm_level = 215U;

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
    msg.setTimeStamp(0.947116654311);
    msg.setSource(17858U);
    msg.setSourceEntity(163U);
    msg.setDestination(63880U);
    msg.setDestinationEntity(84U);
    msg.type = 37U;
    msg.op = 121U;
    msg.request_id = 55895U;
    msg.plan_id.assign("SAVVAQODOUADQWIILOOERQUXSVXYIGIKLPCYBZCCEPOCZRIIRBYZYHKFIWJJPMKGPDUUSZXKCPXMUQGNOFXUYEWGFVLMIQQCNBAFLMXUWVACZFBTOFYHZEUTZHHTTRWPMTOWKOPLSDVLZBNMDNATNSTCBVHELJ");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 19956U;
    tmp_msg_0.x = 0.183527964227;
    tmp_msg_0.y = 0.158547037977;
    tmp_msg_0.z = 0.903716370634;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QRZGAHFDQPNNFSWYXROQPAEFEVJBCNZIMVSLEKROJNGKMRXOLHHCSQSWMXXRDZZLQXYWABJIKPNULALCWZJGWORQJMVVNXYGCGIEEQAPRSKCVAUMPAQEIDHUCYBIJFPMCLHYTBSGRUQSSSNLO");

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
    msg.setTimeStamp(0.692180003278);
    msg.setSource(64597U);
    msg.setSourceEntity(240U);
    msg.setDestination(10819U);
    msg.setDestinationEntity(160U);
    msg.type = 171U;
    msg.op = 206U;
    msg.request_id = 43698U;
    msg.plan_id.assign("CRRWJQQIYGPQKVHKMDDRSIPBOWSBZUYIAZMYHYTAYTFGRZCLTHMLLMYBFNOUIHBMWPVTVDBYNJTOCNNCZHIBDCOOTABDXYPURV");
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("RYHKNOABYRQXPZVKJCZAALRZMSDWIGADEQUVDECSWPWSMGAKRGTJMOITGQUXUPJSEOECBATFVUABVSJOIBOLRDDSYVOLFCFROOXBDMACMUVZWYQXSYKDIMHYCPLPDBKZNDNEZQNKBIGXRZLRRYXFUUWOQTTMEHEGIPZKGGUIVTQMHM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZBZNAXQWVENFMVJLRZARIBPECVAMPPUQCARWGKVTWJFVKLQWXMFYLLLUFSADJJFYKWCLUREOYILMTDLYWYHXYOGIDJXORAUZVKBXKKENWWANZSBDIRDAXPHYTUQSXITYUTHNHGIEETDOGQFEEX");

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
    msg.setTimeStamp(0.851806909773);
    msg.setSource(35474U);
    msg.setSourceEntity(129U);
    msg.setDestination(21357U);
    msg.setDestinationEntity(98U);
    msg.type = 106U;
    msg.op = 196U;
    msg.request_id = 5475U;
    msg.plan_id.assign("XYQCFKPFQCLCEROLSLLTOWOEXWZPBFFNUILHRYUKHXSBXQKTCYVQRUUNAGBLVTZWKZKOEWDUSBDJX");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 44431U;
    tmp_msg_0.type = 220U;
    tmp_msg_0.max_size = 29816U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.142165028521;
    tmp_tmp_msg_0_0.base_lon = 0.316469362565;
    tmp_tmp_msg_0_0.base_time = 0.828183940108;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QTIZVOIVRAMQWDAKIZWZIZDHCQYOSAFUXXNFCPWSDVVHURMNCVQIKRYLCOFWIAKBVBKGWX");

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
    msg.setTimeStamp(0.559338166419);
    msg.setSource(63745U);
    msg.setSourceEntity(40U);
    msg.setDestination(47891U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 351U;
    msg.plan_size = 940654238U;
    msg.change_time = 0.705165882596;
    msg.change_sid = 53717U;
    msg.change_sname.assign("EISYBQJNPWOEUASPROQBYDWRGZWRXXGXAEAIGDOZAKNHVFWSCUQXKAKPTLEODFJZZOPFKYTBSJBGYKRPMOYKDSPGTHNHLWZJCLTTRLWTINFDT");
    const char tmp_msg_0[] = {-65, 121, 0, 27, 52, 76, 33, 26, 73, 83, -101, 106, -126, 70, -61, -9, 88, 107, -32, 2, -78, 94, -123, 101, 102, 19, 118, -41, 111, -101, 33, -111, 74, -10, -4, -91, 40, -78, -8, 70, -55, -105, 115, -33, -68, 0, 64, 71, -122, 86, -39, 20, 17, -116, -19, -76, 104, 84, -20, 80, 46, 7, -40, 45, 120, 20, -21, 25, 49, 93, -109, -34, -94, -90, 18, -78, 124, 73, 103, 61, -38, 14, -100, -119, 37, -101, 95, -76, -124, 57, 84, -127, -36, -4, -34, 16, -1, -68, -126, -127, -100, 33, 106, 7, 59, -93, -95, -40, -35, 62, -112, 64, 16, 79, 6, 70, -88, 99, -69, -50, 70, -69, 69, 116, 123};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WNVTSOTTRXSTCAIONQZLRGSYPEWEXIXKCW");
    tmp_msg_1.plan_size = 54033U;
    tmp_msg_1.change_time = 0.68084834262;
    tmp_msg_1.change_sid = 17698U;
    tmp_msg_1.change_sname.assign("SLKGNMRLBAYUEIYHCZOBDPVCSGXDXNCBRTPPUGFWWICMCGMMAIZSKKI");
    const char tmp_tmp_msg_1_0[] = {-51, -109, 55, -80, -66, -62, -119, -114, 45, -79, 36, -58, -14, -44, -81, 28, -99, 91, 85, -63, -60, -87, 69, 55, -6, -67, -29, 23, 39, 124, 23, -123, 49, -119, -69, -26, -92, 80, 94, -3, 89, -78, -7, 43, -69, -4, 71, 48, 83, 1, 101, -13, -5, 112, 29, -94, -73, -65, -115, 57, 90, 47, -111, -38, 80, 46, -12, 63, 39, 86, -70, -119, -45, 18, -58, 93, 63, 16, -76, 34, 114, -38, -96, -118, 57, -54, -31, 124, -123, -120, -72, -117, 125, 96, -49, -95, 54, 60, -117, -49, -107, 122, -83, 76, 6, 57, -57, 10, -71, -31, 103, -90, 78, -28, 16, -66, 25, 116, -94, 4, -67, -32, 125, -76, 85, 54, 50, -61, 112, 122, -101, 39, -120, -85, -56, 54, -121, 110, 74, 38, -91, -88, 110, -27, 50, -34, 96, 124, 49, -50, 66, -90, 6, -91, -97, 46, 66, -1, 119, 54, 27, -61, 94, -51, 17, 34, 89, 21, 13, -23, 105, 124, 88, 83, -99, 70, 82, 56, 85, 16, 7, -14, 73, 83, -14, 120, -45, 120, -126, -97, 120, 52, 10, 1, -11, 12, -93, 23, -91, 117, 38, 11, -35, -39, 98, -112, 35, -33, 64, -80, -25, 106, -63, 122, -31, -5, -95, -100, 67, -34, 23, 53, -84, 60, -120, -32, 63, 110, -94, 97, -64, 85, -25, -48, -12, -37, 26, 95, -124, -4, -84, 5, -50, 4};
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
    msg.setTimeStamp(0.168221909214);
    msg.setSource(26872U);
    msg.setSourceEntity(97U);
    msg.setDestination(56830U);
    msg.setDestinationEntity(140U);
    msg.plan_count = 40952U;
    msg.plan_size = 3759116578U;
    msg.change_time = 0.770529659184;
    msg.change_sid = 16191U;
    msg.change_sname.assign("XQAFZGXJCDHLJVCRYDWPFUTHLPXIZMJ");
    const char tmp_msg_0[] = {-126, -123, -43, -38, -82, -42, 58, -7, 61, 67, -34, 59, 29, 29, -85, -2, 76, -33, 5, -83, 118, -104, -12, 1, -58, -95, 27, 27, -49, -21, 100, -76, 61, 126, 61, 5, -21, 89, 88, -94, 89, 74, -63, 122, 10, -62, -1, 125, -85, -38, 68, 115, 71, -99, 60, 77, 65, -113, 57, -116, 3, -54, -51, -124, 80, 98, 13, -64, -31, 35, 121, -57, 19, 101, -70, 90, 11, 99, -33, -66, 12, -75, -23, -110, -109, 67};
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
    msg.setTimeStamp(0.492346291745);
    msg.setSource(51372U);
    msg.setSourceEntity(190U);
    msg.setDestination(58053U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 36610U;
    msg.plan_size = 392929265U;
    msg.change_time = 0.717490851166;
    msg.change_sid = 32836U;
    msg.change_sname.assign("IVRBJCFGNENKZPLYSREXTDKLNZUYUIBNLIHYMEQZGGZBJCLDTPJLXDZFWQDROUPUNEMAAQEAOZB");
    const char tmp_msg_0[] = {-124, -63, 100, -104, -60, -29, -48, -43, -10, -28, 11, 118, 2, 77, 64, 111, -2, 71, -119, -116, -114, 29, -84, 1, 103, 39, -56, -19, -90, 45, -27, -11, -43, 65, -67, -107, 112, 22, 3, -125, -94, -52, 40, -28, 112, -109, 54, -102, -105, -39, 122, -15, 125, -98, -15, -96, 62, -81, 86};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HJMVIWZELPVOOIMDUGQPWZPABSCMXYZPFWVIVQG");
    tmp_msg_1.plan_size = 47913U;
    tmp_msg_1.change_time = 0.0605319928858;
    tmp_msg_1.change_sid = 17557U;
    tmp_msg_1.change_sname.assign("ATZIBNLDEWRZNZHWVDGYDNYOFXSRFGASMPOXHHIDMKZOUKGWEMTUIACFBEOQABXZCUQHNJGPESXLPDOFJJZXTMPBWJVVSZS");
    const char tmp_tmp_msg_1_0[] = {67, 40, -5, 81, -120, 68, -56, 45, 106, 80, 5, -19, 36, 100, -69, 69, 11, 17, 88, 90, 80, -85, 67, -31, -80, 37, -98, -71, -11, 102, -108, -70, 20, 81, 80, 53, -66, 21, -112, 51, 116, 89, -67, 101, -116, 29, 85, 116, 88, -16, 65, -119, 47, -34, 84, -14, -125, -121, -37};
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
    msg.setTimeStamp(0.83214050261);
    msg.setSource(53561U);
    msg.setSourceEntity(217U);
    msg.setDestination(23397U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("RBUACOAZJRPZEZOWBAHGXSUBKPEKOKGPNQOJAWWKQRKDMPNTYRNZIVVYNVKUPWYLXSFVGWVFPCHRCHNIDWFWTLEHTBTSHLNIGUJB");
    msg.plan_size = 17472U;
    msg.change_time = 0.943879207274;
    msg.change_sid = 42817U;
    msg.change_sname.assign("AXTNURFPBYUKAUEDMTRXFDYMPXYUHFOTLTNBGUWDGMGQSLZZTIQMWUEEXZPCQAWYPJRFJTKLENTVNVQNGGQADICWGPKVWTEJHJEVDCHCCHSYAORUIQYCMAPYHSEZEVRIKNVQOJXSRYZEDVMTUYNLVABALVXLSPIGBRSKJEOIZMHLAFZKTRFQ");
    const char tmp_msg_0[] = {-75, -91, 27, 27, -11, -86, 88, -82, 19, -87, -73, 12, 110, 100, 30, -17, -72, -53, 29, 12, -94, -72, 34, -25, -23, 124, -74, 34, -74, -89, -114, 44, 32, 108, 13, -38, -32, 14, 22, 118, -80, 58, -19, -21, 126, 93, -18, 23, -98, -30, 6, -9, -96, -71, 110, -124, 43, -44, 54, -123, -27, -7, 57, 106, 14, 76, -44, -17, -15, -89, 30, 93, -17, 100, 22, -12, -101, 110, 117, 115, 19, 90, -2, 117, 3, -70, 93, 25, 37, 126, -43, 22, 106, -33, 93, -106, -106, -119, 88, -52, -47, 98, -19, -8};
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
    msg.setTimeStamp(0.0175726188631);
    msg.setSource(4630U);
    msg.setSourceEntity(220U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("NIXKRSPJICSGDMWIKSHIEABACIDDDNEMYJRZOAHOAAUMTGYZQWPKVBJLCFDFYVSGHTPFVOVUCSRFMYCZRHDFZPSQDBJELQWTCQITYRTEGIKQPQWIUKPRRDJMLRFOFTBSZMP");
    msg.plan_size = 57144U;
    msg.change_time = 0.838996379294;
    msg.change_sid = 44568U;
    msg.change_sname.assign("XWLLBVTOOZAGVQKGEXGSUBWQKKFJIPOZDQOADJQSNHSQCVVWNBECZXWCCHLQREUPPRIGZKNDNYRCXTJRFIKVXEJAUFYMERELGFXRADTUEUQLBJDAJJXUMDOLFPHPFZSLYZMIGCKQTERWPHFBRGHUOFYWTJYNNEHZOBTVLGRIXZUKDXLJJHWSYIEYWPTISIPSIZUDZGTTOCAVKACVMFMPNVYAANQYNXNPMVQOHD");
    const char tmp_msg_0[] = {25, 38, -98, 94, -52, -57, 88, 113, 109, 0, 91, -48, -49, 17, 26, 57, 16, -85, 34, 16, -71, -77, -120, -69, 80, -22, -86, -3, 62, -29, 37, 80, 13, -34, 32, -1, 112, 71, 90, 41, 100, 81, 64, -18, 46, 125, 89, 66, -125, -115, -83, 19, 10, -106, -1, -56, 24, 11, 73, -108, 45, -72, -42, 48, -125, -75, -59, 1, -101, -81, 42, 100, -13, -76, 42, 83, -14, 54, 106, 25, -45, 104, 112, 53, 52, 94, 33, -75, 71, -13, 85, -96, -127, 103, 5, 15, -11, 97, -20, 74, -52, 100, 33, 54, 47, -61, -51, -92, -19, 71, -23, 23, -51, -41, 92, -19, -60, -37, -75, -123, 119, -112, -6, 62, 7, -17, 111};
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
    msg.setTimeStamp(0.471681784715);
    msg.setSource(36081U);
    msg.setSourceEntity(7U);
    msg.setDestination(25025U);
    msg.setDestinationEntity(199U);
    msg.plan_id.assign("QEXZPUHALWDMAROLQVBRNUAIXLXAZNMDSNDDQVJYJQTJFKSYVRYGHIJLGHAZYBVFBWVDCJSLTTUWDQUKHWZIHAPMIVWEOETAXPFUKNIMBKTCCCEVSRGQIUEMAO");
    msg.plan_size = 865U;
    msg.change_time = 0.134787529927;
    msg.change_sid = 23437U;
    msg.change_sname.assign("ALZNBSKFNHBHOLXYIIBZWPXRHVDZCOMJLYOOEGCIMXVXMTPQSEFWWDSDXESUUGVSQGZOAELWNGQMWBUPZJUYEPKATDKBRURNCPWCYZLGIOFMTNNECRBXZJBYUKEIWNQKHMRTTANOJQFJJVHHBRLRKJYGRDIHLMDYXCBXCCVDPEPCAFISOA");
    const char tmp_msg_0[] = {-24, -25, 44, 91, 25, 74, -126, -105, -74, 21, -78, -47, -25, -116, -39, -35, 20, 60, -74, -22, 88, -39, -80, 0, 54, -71, 126, -84, 12, 102, -123, 115, 64, -89, -49, 63, 64, -95, 51, -17, -26, -67, 97, 64, -34, 17, -86, 45, 56, 38, -126, -1, -111, 14, 124, 10, -88, -124, -13, -25, 51, 95, -116, 120, -2, -21, 48, 99, -103, 112, 15, 55, -69, 58, -80, -55, -103, -88, -114, 58, 41, 80, -100, 76, 37, 29, -45, 101, -103, -103, 103, -116, 125, -93, -25, 105, -19, -15, 126, 121, -91, -50, -90, -17, 104, 28, -111, -103, -105, 45, -76, 0, 46, 113, -63, -45, -51, -32, 93, -72, 91, -79, -77, 52, 18, -62, -104, -66, 125, 106, -96, -3, 112, 55, 39, 31, 56, 34, -8, -18, -81, -51};
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
    msg.setTimeStamp(0.425416853066);
    msg.setSource(65488U);
    msg.setSourceEntity(133U);
    msg.setDestination(8760U);
    msg.setDestinationEntity(34U);
    msg.type = 4U;
    msg.op = 92U;
    msg.request_id = 21329U;
    msg.plan_id.assign("HJVPNAEJTWTPLFSJDYYGAJWYTDGMOJRXZMXZWIKLGKXCEOKUBPKRYFCXACMHVPHDPKEJGPLTSLQJEZOTKIHGZOZMXDZNZVOSLOKSYFWBHVDHZYQNXRJEBMAQXNANGDNTDFUVIWCDJNWEMYXDEGSUSQLLLFBDQIIBEVJFHQKAEVPRWZXNXISARGEAZAGIFC");
    msg.flags = 62455U;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.945207959335;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SECGQEYZKMHSEBWPBPYHLNJFGNQBAOCISUIFISKABMXBUFGXOITTZMLPZJMHYZXEOYDPMUALJVCLWLCPUYUAOIMXPLJKWNSKDFIDBQHTOKZGMDVTKNCGAPQYRTFCVQPUVIEQVGOCHFVABQJWZARBRQNVNFIVEUSINZVNZYAHTUUERMMCBRTLTRPXOZLTHORXHQASCUSJKDXRX");

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
    msg.setTimeStamp(0.669279925465);
    msg.setSource(25734U);
    msg.setSourceEntity(124U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(89U);
    msg.type = 14U;
    msg.op = 8U;
    msg.request_id = 3629U;
    msg.plan_id.assign("DFXPDZWVYWPIEYEUIVQEXJAYJDUKOIBNGPOQYAKZKEFLRTKNKAINLNUYFDHTTIHOLRGOILRKCANXOHTJSRSVQCCJVPQPZRJFDSXUFGNDXQTRGULSBGUMOZFZOETSOQXBAKLMLQQCWHEPMNJAQWBWEXJQVCWLGD");
    msg.flags = 45769U;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.744031526434;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IISKZRYLOAXAXQWRDVLQONJRPRQZDTJZKSOBUGKFZBGYNHNXDDYYNXCMZKKRYEPELFPTFMETFEZUHWTNQASMCPYUYQQVRNHJMIRUVHJDSOITANOGDSYOEVBUGIFJFTMCWAJIZLAUBMWOUXK");

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
    msg.setTimeStamp(0.0790592929278);
    msg.setSource(51315U);
    msg.setSourceEntity(158U);
    msg.setDestination(31954U);
    msg.setDestinationEntity(187U);
    msg.type = 84U;
    msg.op = 19U;
    msg.request_id = 32198U;
    msg.plan_id.assign("ANGGTGHWEPLFYUZHJECVSNZVBATUANIPBFZVMXAVCOXEMYQRJTKXGOYBZGMFCQDKHLORHNHTEKDDBVOVSIXWLANBWTFMSBSHWYMGWNIIWTOTWUFPEVFRJIOUICUMDDOLJMKPXKSPZCFUALSCYXNJQPGBBPUMMITHYUYACZHZQEFWPYJRXWJAXKEXYSFLTSNOKGKRRREDLGQAQRUJQWIISEZXRJIUCZCLOHBDPQLVQJ");
    msg.flags = 54270U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("RLBFAKLSOVHRXMEYXGPMFSHRRESVTCFZRQYWIXIMHIEMVQJEQRBCAGYPSVTXXDVYGLHQBUYAJVTCCLUCHUUDOZFEWONAIHDQEZMGHFIQIZZWKZSXJBTIKOWEWBCCUGBQTSZFZBHTLALPYNDSOWMRNEWXXYFFHUUNGKXPZUNLOIGMDGIYPYDJSVKPNOKTBNEKTMMNTBFUGSHXLNTLRCJJDAQCDVPYQAO");
    tmp_msg_0.lat = 0.281609181232;
    tmp_msg_0.lon = 0.0685618934074;
    tmp_msg_0.z = 0.424192920081;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.cog = 0.563415609311;
    tmp_msg_0.sog = 0.387716902311;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LEVQNZUVKUCESCWBKLUOJNAEDIHUHVGKPR");

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
    msg.setTimeStamp(0.91249139951);
    msg.setSource(51816U);
    msg.setSourceEntity(130U);
    msg.setDestination(6380U);
    msg.setDestinationEntity(1U);
    msg.state = 134U;
    msg.plan_id.assign("HHPRWHMYAGBICYZJUHKJWHLHUPCEJWQNPSYQAVQOKTYTNVQJYXVTBQYNSDCLKZIOCITCWKTCFMBRARFNOZDDFSVBCAXPW");
    msg.plan_eta = -1492616165;
    msg.plan_progress = 0.0763926784555;
    msg.man_id.assign("DXCTTZOBBBTLUCYARKTFRFJLNSVSVSAVVODXMQFIYUXQPVXGYGQPIEMMWSQXZJZGEIIAWHJDWJTKLLIMGUYFDXKYANVVHCNDVCCGPBIONZWFERCNMEMFRITNDHPHSLIOWBUZBWMKOIMAIYZGPZLOQJCUQUSJEEEOSTOWSJVVUMKUYKPPQNNLDAHMRKUPXKUHODHFX");
    msg.man_type = 23058U;
    msg.man_eta = -1456876806;
    msg.last_outcome = 124U;

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
    msg.setTimeStamp(0.0485935579418);
    msg.setSource(62394U);
    msg.setSourceEntity(209U);
    msg.setDestination(35262U);
    msg.setDestinationEntity(13U);
    msg.state = 32U;
    msg.plan_id.assign("QUJPYMUWSYSOBKIBKGLAHMSTZXORKEPHNLUGZROUUJDXHBGCZQVZYQXVAVZXOJCDKSGRSEHBVEHLIMVUDRAZMOQJTHXAPNYROXGENWNHQXLKFMVOMYPFPTKJWZPYPDUCYRSSTZEXDZIMKHMACQCNCYWWNBFYYTOSVARGDGFRSCEDGOPANLDJERWIPLIXZXPD");
    msg.plan_eta = 678139931;
    msg.plan_progress = 0.828394437421;
    msg.man_id.assign("ZDJDEPYHTJGWDXIYAIIEOMAHLCYAWVWXWIFENUQUAQQSFQJWKIDUYGBGHKSDAKLZJGAWNBOXHTQJWUHFFSSRQEZAWDVHAXKJCEXUVKVPFBXYRYCMLPOTVBBRFCMESMOLPOR");
    msg.man_type = 19230U;
    msg.man_eta = 741606588;
    msg.last_outcome = 96U;

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
    msg.setTimeStamp(0.691593969348);
    msg.setSource(50682U);
    msg.setSourceEntity(172U);
    msg.setDestination(24513U);
    msg.setDestinationEntity(152U);
    msg.state = 239U;
    msg.plan_id.assign("SEMVHMGYBGVTAKMCWNCBJJVQEPLMJLKDFPZJEIVETAZNLCXLEGSJKEXUFXFSXFBUJRWKSUATMZCFGFLURDTGDDMKOFCJFSXJHDMUYHWQUOVLVYUGVQZEESBTHYRNWRBMWZTXWHKVRKCUIPRNCYGNHUAYQOJIPNAZPOGRXPCHOQGIWQNZXPAROBXVNHONAWBBIVCTZEOBJDYEQTHISKIMPSQRRCILZKWOILI");
    msg.plan_eta = -804914581;
    msg.plan_progress = 0.132513637999;
    msg.man_id.assign("IBMDUEGQNRADHPFRPVZHHKKXMKBQNBDNFTIHJYPAQWNYOOJEOVADLQPYRAEIJVZVUXSUBPGLEAOSZWTZCTILOMEKYKNLWRAPHUNCRXMYPNETOGZSJVAZGAQCJPSJWKFYYKOBFKLLKXTFVWMLWYBQWCDUJSXBDCZGSUROXFSYEOKIRDUCAMWRHGSJEVXJBNTIPCZAZWUGDSUUFVSIYVLPMTIFMO");
    msg.man_type = 21919U;
    msg.man_eta = 1664571580;
    msg.last_outcome = 66U;

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
    msg.setTimeStamp(0.15334688762);
    msg.setSource(44714U);
    msg.setSourceEntity(84U);
    msg.setDestination(43750U);
    msg.setDestinationEntity(140U);
    msg.name.assign("ZCYJLQGTDOZEDOBPFXAGTKWRHMEGSFAPRIPHENKMXUWFAMBBORGHJPWWGYNNDFDYUSXVYBOJCDQCVIIDYRMJCZCKBSKPUJSYOXKHUHLMROTVIPLGTAEUFSEDASMALJQYDWLQPKZMIFOPCEEPNMKOCDZSXN");
    msg.value.assign("CDBXHKKHAQIULFTSPEBQAVAIOUWLJCCCVPFMXYICRZYASUKCKWQTYJFLEAULDGMALGWRMHEAERJUGMRQFZHHRNNSXGNXWGUVRLFMX");
    msg.type = 35U;
    msg.access = 57U;

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
    msg.setTimeStamp(0.120521842579);
    msg.setSource(5709U);
    msg.setSourceEntity(62U);
    msg.setDestination(40098U);
    msg.setDestinationEntity(64U);
    msg.name.assign("NIHWJPTOXPTJVXTMHVHHTWNDKYJQISBOAVGBAXSCBREVVSVDCQDBBQYKLTKIFKOGJOGSIVVJ");
    msg.value.assign("HDLRSUZPEAQQWMOBCWAJSEFSECNGIGSPVVCHVGTEFXPRLOFRBQBMETCOTQQJCBLFLESYIYBFUNPEAEDXPKLSZWVTOIXSYOMDILNDZBROEXTGVQXCYKQRXPTWIMBOJFWOAGWNWTRJYDKVIZBSPITGLUADGYIVALERWOZFHUXDRQDSATGBCMHCYDN");
    msg.type = 180U;
    msg.access = 35U;

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
    msg.setTimeStamp(0.75125219404);
    msg.setSource(52277U);
    msg.setSourceEntity(247U);
    msg.setDestination(45432U);
    msg.setDestinationEntity(163U);
    msg.name.assign("KKXUHLNHDGHADSIVQARCEQPXXBBOUYNKMHCOTGGYAPUAATFBMPOJSTLDYBGDJYSTXVUFTTRLEOLGLOCHNWZSPHPDZNPUFPDSZBMFNFGJIBCXWXRMUXVCMGQVJZNQPTEQR");
    msg.value.assign("SXNFBALSOIAXZYGAFIRRBAVWPIIJUDQOKINQTKJEBETITWYUCHPQOMQMZHEXMQHVJBHGDYFJCNQULDEVLNUUAIOWZYWLJHRCMNCVLIVKVXDXQNHMGXCWSFHZGB");
    msg.type = 95U;
    msg.access = 150U;

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
    msg.setTimeStamp(0.329673733086);
    msg.setSource(56877U);
    msg.setSourceEntity(188U);
    msg.setDestination(40353U);
    msg.setDestinationEntity(223U);
    msg.cmd = 73U;
    msg.op = 38U;
    msg.plan_id.assign("KOFLBQOTRCIIHRBJITPXPBCNLVPMYOKZKXAYKBAPSAZXEOWZZJFWSTNOJTSGGDCMXVVUHEMVDMVRINUPEWLERODRQYVJS");
    msg.params.assign("FLSYEHQJWNXRGCPRJPDCTPNTBMXZTRQYBCVPRARZNZFOOLUEMEVIGLMVTCOCNPYKAJLNMPQSZWUYXTBQXKQRTSLKMHNVCBZFUITJHRUVJFZODDEDFHKLAPIEXYGHEDQHUKWEYSSMXBWMOXPUJLUGWSYZDERKDIDQKZHIGJTBTNBJFBUWKHVALOFBLDAFXEHGWSWQIOWCXSDUYMHRABIMN");

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
    msg.setTimeStamp(0.600423988253);
    msg.setSource(44332U);
    msg.setSourceEntity(58U);
    msg.setDestination(33961U);
    msg.setDestinationEntity(168U);
    msg.cmd = 91U;
    msg.op = 117U;
    msg.plan_id.assign("TZYWZRCKKEVLCKLXBLXJJPKOSIVVBWGFEPPXXNYAOZTETWFULICZJIUDUBNLPBJTGNWQLQSMGLGEWNGFBDMOXZAQAJIDHUOWIHRHDFLVQSSJYNJKRQKYIZVHXZIGXPNUKRGAPWMRWZTOELOUKEAF");
    msg.params.assign("ESGSOWNSBTYZVGTVEONKLUYAFDMHUQQVUTAXTWVRLGBEYNDIVXZQBVKMUCQLPINZWTQFAPFSRLEQC");

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
    msg.setTimeStamp(0.757728818311);
    msg.setSource(36350U);
    msg.setSourceEntity(147U);
    msg.setDestination(1604U);
    msg.setDestinationEntity(241U);
    msg.cmd = 44U;
    msg.op = 26U;
    msg.plan_id.assign("ICAAWUPYKFJDHLVSVYQNPQEDJSCQZGFBSOICALIXKYDMXKPPJROYHHDKMMWYPGLJFCJEXHOOAZUSIFDNNWVVIUNDPXPHYMPHBTBXLBZQMEUUTOWVZWMBGIITVTRGRIFAGDNWFYLTRHJUJOETGEVPQREZHQGQKFXLXQSKCKRDELTBXMJQYKMSHSPOFMTU");
    msg.params.assign("SJXWQZBMCGZYCJBVHQOOIKLMSSKJUHHUBZRVTDPGLKRGYPGOYMDPGRVWQQTUIQITAPTXFNACPQRBNZWOXMXMVYYIINTAWAACJJIYMEDFJGWNLDZKZMJHEIKUKLVCRPCFTNUGVYLZOMCORMIFDEXGOYVRPJFBDEJUOCQLQWNANQUYTETQTZNSFWJCXSLUERKBFMOBSKSHWXPBPXSHIVEVHEHFGSNNLIHAOLAAUXZBGFFCKKDVWLPRXTRZYDBE");

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
    msg.setTimeStamp(0.332112892144);
    msg.setSource(49654U);
    msg.setSourceEntity(160U);
    msg.setDestination(28198U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("RMJBILNHJDDNOCWIMWAZAKHMTPGSSYSFWYHKHSTKRRBTVPXCSPLGJZAPTGLOCMZYTHNCMRBHLETUDSQOOXRPBAVIJHNGUKNUKVAMQWXBZPIZXMIJNYKFIFYFURVKJMUTAQVDCPJLPAEBXMFTQWZGOCFGCIYIZGSDXZGYQVQTNIBLPBQOGBPRBYDAQQEVTOHUSFNWKORRFWUEW");
    msg.op = 35U;
    msg.lat = 0.09050381638;
    msg.lon = 0.915888407483;
    msg.height = 0.739063851269;
    msg.x = 0.265565177977;
    msg.y = 0.0904515168858;
    msg.z = 0.802160502877;
    msg.phi = 0.150244911157;
    msg.theta = 0.0175872171096;
    msg.psi = 0.422671789151;
    msg.vx = 0.307790213152;
    msg.vy = 0.178920957641;
    msg.vz = 0.339753949469;
    msg.p = 0.703976270652;
    msg.q = 0.874242516745;
    msg.r = 0.738052887057;
    msg.svx = 0.527659177142;
    msg.svy = 0.685551134754;
    msg.svz = 0.68574608531;

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
    msg.setTimeStamp(0.206194844009);
    msg.setSource(39285U);
    msg.setSourceEntity(72U);
    msg.setDestination(16862U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("JIXKOCHPUCKXCRQQVUOWIDDKAZRZKMDLOYNXGEBNSSUCJKZDLGMRHJUGVDPQSCJISLXJHBLENJDKMUJULYIHXUSYNRQPLRFAEWCFZTYNZKMQOSEDEVFSSLMONYPICRGGQRATAPRRVDYFWXAZTPZXXKHVXAEYXTYLBNWBIVTPJLVQMTIQHBJEMQYJGCTBGDAFNFITQNLVFOZSGMTKOOHAVWHWWGWEM");
    msg.op = 35U;
    msg.lat = 0.881566232104;
    msg.lon = 0.07605953741;
    msg.height = 0.409884513709;
    msg.x = 0.528257226868;
    msg.y = 0.0590841009677;
    msg.z = 0.861044467454;
    msg.phi = 0.74580287487;
    msg.theta = 0.29525593765;
    msg.psi = 0.448417097624;
    msg.vx = 0.308980051561;
    msg.vy = 0.491441974646;
    msg.vz = 0.872107591304;
    msg.p = 0.809374468931;
    msg.q = 0.221265217912;
    msg.r = 0.600212210498;
    msg.svx = 0.248418979877;
    msg.svy = 0.409379013212;
    msg.svz = 0.818098744359;

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
    msg.setTimeStamp(0.13235565236);
    msg.setSource(53015U);
    msg.setSourceEntity(140U);
    msg.setDestination(2500U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("AHVYNVTDKPBBTBAYOOAYPQRZNTEXWWLHUWFGFIUJCKAJCYGOQMTZXLPNUXEJHAXAGBACBVKMGDIQIWUNNDSRQCUFSXOKCNQVXRDMWSPRSZVRFTUKILQJPFSKOHRZDXLYMBEJISBEJTJEJUAARCNKPMRQOCFICWOVUPVSLFKOPUDQSMMVZMLTYZDXNLIELJEVDQTMEXPLWGFHKSVILRGZIBYUZKXHPONBSHMGZQCYROEBDHGJGZCWYTIGWNEDT");
    msg.op = 199U;
    msg.lat = 0.844080958467;
    msg.lon = 0.0270329277077;
    msg.height = 0.783814556345;
    msg.x = 0.0414861214514;
    msg.y = 0.00858234433804;
    msg.z = 0.0979952087926;
    msg.phi = 0.942670572766;
    msg.theta = 0.61146445443;
    msg.psi = 0.488146909919;
    msg.vx = 0.249151063647;
    msg.vy = 0.151994801794;
    msg.vz = 0.187162798603;
    msg.p = 0.100499630012;
    msg.q = 0.0846236636004;
    msg.r = 0.422104282174;
    msg.svx = 0.22080418025;
    msg.svy = 0.266022458774;
    msg.svz = 0.463913889805;

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
    msg.setTimeStamp(0.573143797601);
    msg.setSource(34339U);
    msg.setSourceEntity(63U);
    msg.setDestination(10272U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("XOPLGMUJPLEAYTKSWRIPZXKUFSJMKZSWCYHOWYEJYJHCQOPFPFWWLKWASEJMTIKMACTUDNWGRJNXQCFEXRROJHQGDZVYSKQDZABYUNWVFVNEZXUIVGHA");
    msg.type = 40U;
    msg.properties = 205U;
    msg.durations.assign("ZFJLCSMCRMHBYHURUTGJPDCWKUDOSFYDUCFSCHHELZJWCKVKNVKZZTPAIAVFXEVQFNCXPXQABRZJGYZIHDOPYIIOUXXOYGAIYMSUT");
    msg.distances.assign("ZZGTPPWJKISYRDWTTHMUHESWRRDPYYKLBJGUMCJMFHYISLMSOYAOKUREHDWPLQFWVXNUNHNKGHKJMVJOZJFXNWRYKUXTOLQXMCCGTRWQQECIOEDCOJEMIABBNWATGVCOI");
    msg.actions.assign("OBFLGWSBKIJYSEMUYILIXSDIMQJCMGVFBQVLFBRBCVLRVDBJWYIEPLONKSAMVXUKSDSOXUFMZHQRCRUPWNVVJYNTOOXZRTSKLOJPGXMCHTHYXMXUERFX");
    msg.fuel.assign("VYCIMOTLJBACINHLIZDBJMNRDWTDFFGHFNPHOSZVFBYHEFPNLVKZBSZKVGWVVGLJFNTMVZUQDQVURWMPQPVHCE");

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
    msg.setTimeStamp(0.655938216185);
    msg.setSource(37181U);
    msg.setSourceEntity(171U);
    msg.setDestination(11949U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("YIRAQOKMUSDTRETLCHTPJKEGBCRDOBRUCSXJQYMCOGTXNWYVUROWOWZYUAOVNKFUFMPXIDZBPZPYUVWKOSPWDFMELIQSPABPVKCRJEPELHGLMFSVYKNQZHVDZPIKIEJTUNLRFTCXHGIXNJHXEDEACFMHKSBLULVSZLJHWYXZKIETPDQTVJRISJAMJNBCQCDFAHKGGQYWIOGZRNL");
    msg.type = 244U;
    msg.properties = 196U;
    msg.durations.assign("EATZLQESGUQYXSNHJVKRBFRDMFOELKWZAJGAAGWEQRCLCMWZXDPHPXJGETCSYFWCNSQISLQOCBWOAVQUECJMBMHDVNBXADOUVOOIRXVPDKJDFPNZNHSTZIXTZUBNIPATDCGIJBRWLVLGFWPVUTHOORAPKUZDQDKZRIMRCSXEYYFJXYEUIWWRMOJPKLAEGHSKGVBXPTBVYQEHYTNKDJIFNZFNKLYSZULNCYRQBMHHOITKVH");
    msg.distances.assign("XCUUVGRUWNAAKETQRLDMSJBPAPWIKYHICQSQXKKJZDFGQODDNDSUCEVCGLLGHIZXBKBUZXZPQRZEMIYIJBMWUWTLVLEOPQAAJBRWMUYUKOEJVMZJEI");
    msg.actions.assign("KHLQHYQTFYPWPGSNPYMKCPEYDJSKZDXOAXRZDRZXITFCSMGQKKQVYIVRSKCJOJHHYBENMLSXURIMZYZMGPLGWSNPTWJFATGWBESAORLQWMKUHIQDXQWTPHCAOEGBFCXNIPEVURZOGHDJGVZFNKKTCAACZMEBRIWCLRTQMBDJBUUNLY");
    msg.fuel.assign("VEINHWYHPUWXCSBIYBZQGJPJBREYWNKGMMCIKPKZVBRBNIXLKUGFZZUNOOLMYGARKFAOTDPLLTOEKHABTPVSECGODRTNURHCYIFXEHFGRVGSWJHLPRXANUQTMSMBHADVTWRTFJBXRFVXDUOXCZTNZOEBCIMJKZTKNMSCQWLUEHOCQQFWALJZPDJDOWASVWMOEFNHSPLDCYAXZZIGTYYQQJIVYWKDPHPAGEFYSGQSJRDIKMQBMUJXIDLFC");

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
    msg.setTimeStamp(0.29387759423);
    msg.setSource(18597U);
    msg.setSourceEntity(75U);
    msg.setDestination(47976U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("YWPVUFVGNQCXXOHBXTOSILASQXRVGDTGSRNVSUPFJVUBEABDDDZQHTVIEDAGYFXOQNTZDOFDAUERMVBSWEYCQGBXRMTICPBYEWHLJXFUWVFPWZZJJYJPOJOCBMCGIUPINCHPTIHMMOJDQWQRNKKVMABKTDCCLTTWJBDEQSAMEE");
    msg.type = 129U;
    msg.properties = 117U;
    msg.durations.assign("GIQDYWNJOGZSBWYDZMEVATIFQKZVDZBLPUPTSFFMPJOYMJJRIULRNMWDYTBLKBYDRHBRFDJKTQSUAWMHYMNGGZQWWEGNHELCAIJIOZOOLUTNONXYLWPMTHBOFNASJSZHPWVQJD");
    msg.distances.assign("QWKMOIPFWKSZHVYIUMXHMHZSFZFUDFNHXXGHDXTOPLGXCATJFQTCATQOCPONGRBAHLSELWYRQGRXTOURELVYNOTUYECUYIBEPUQQANVWBJWSKDZZBLMMJISJNZBCLKRIMNYHEAZHRFDBXGDAOJHPJRPNXREJJSPECYAYFEWGSJLAWYOADWD");
    msg.actions.assign("IJNCVXCBNFBJAWRRHLDDSWEH");
    msg.fuel.assign("TPFVOQZBUPJTYCJFADBSTYHJCXPDMYUNOQTTVLIDGAVOJMEBEQUKGSGVXVHBDJNYDGJFXVIZNSKXGHBZKFSIKY");

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
    msg.setTimeStamp(0.165268284633);
    msg.setSource(58211U);
    msg.setSourceEntity(187U);
    msg.setDestination(20834U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.533069224922;
    msg.lon = 0.550524654348;
    msg.depth = 0.133956865205;
    msg.roll = 0.361934228821;
    msg.pitch = 0.821309952849;
    msg.yaw = 0.691228551473;
    msg.rcp_time = 0.458861469155;
    msg.sid.assign("FAXECFQUJKPLMWCBAXFIIXGZLOGEDYSEEIRHOQUKRNBKXHOPDRMYQBUNDKUKFMPSFVUGTZVCMVFRHJWDJETQHZVDXTSJQPAOYJVBJPRONCCGLOFJDWGHTLJNXBWVKSLTBHZXLYNRIOCSEBOJIHGXMAPMZSWYGAPVUDUPSCWTGNVQTZTDLWAUQYLZSUKODBNIFCYZOILNMVWSIMFEAWZPGAIRHMWEPLTBRECQNXHMNYYUKKHEXC");
    msg.s_type = 251U;

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
    msg.setTimeStamp(0.761668127514);
    msg.setSource(64734U);
    msg.setSourceEntity(111U);
    msg.setDestination(2887U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.00423993690756;
    msg.lon = 0.528912061234;
    msg.depth = 0.584047304716;
    msg.roll = 0.00792303985705;
    msg.pitch = 0.0200653853664;
    msg.yaw = 0.789056895282;
    msg.rcp_time = 0.900671090155;
    msg.sid.assign("FDNUAENZOZHQGBVXYZYLMPLQGRFNQKIIMVWEXRTAQBACORYZSJMNZDHWDMILCMGUWRRTDWGKERPQHXCNGBVIYFBXOYKDONPUTUVAXCCKEFYJVXRRKHCZPSQWZIEHBEIOMSBDMSGSFUUZOPUFPVIJCTQGANLUSFSHKHQJBZVUJPABTJQMJAWOCCWMPDXKNTAOBXYMESLK");
    msg.s_type = 158U;

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
    msg.setTimeStamp(0.845900691067);
    msg.setSource(47344U);
    msg.setSourceEntity(34U);
    msg.setDestination(38722U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.487736872912;
    msg.lon = 0.243642901931;
    msg.depth = 0.932045945342;
    msg.roll = 0.61443164735;
    msg.pitch = 0.542350381057;
    msg.yaw = 0.801175848358;
    msg.rcp_time = 0.546538903046;
    msg.sid.assign("KURQHVVTAADCDAWYKULJPJTPIYCLCKRKSRTPQVZSFKQYDFLGEVQOBXQRWHQMAJWURIXNZAWWPLPGMVXEVQRVXYPTXKAZIWGFMWSIFHYFNOBSAYKLJDXHBLGQPUTVYNPIDPDUCSMMBJNUXYHXZU");
    msg.s_type = 108U;

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
    msg.setTimeStamp(0.218267783241);
    msg.setSource(18978U);
    msg.setSourceEntity(25U);
    msg.setDestination(30696U);
    msg.setDestinationEntity(142U);
    msg.id.assign("LYRKGGBVNFUHGBVXRPQPRKXJPAUCJOZDSATEQESBYHUXFWFRTVVLIMGFDQVOKVCBAMVDUKKNNNWRFEHJFVLSNILBKTZRECEJLDWJETZOIMBQYWLZEWUCGAZEHQHGWIYSPYKXMQXQETICYNCKLGYHJPTOLXSYXIYQSSPFTGFCHHYVZSWBUAJBFDSPCICDAIPORDXQGTZDVPBHJKWMIPNC");
    msg.sensor_class.assign("QVIEUIZZPNUWENFMDVWFV");
    msg.lat = 0.692523437411;
    msg.lon = 0.0903118960623;
    msg.alt = 0.0205243671769;
    msg.heading = 0.530835459479;
    msg.data.assign("JZDXJNGKEHNLFDXKHPMOGKKRAAEPGQLEYJHHPRCPLCRSDTNVUPIRLNVQMXESNTZXDXBACDRVYTHRXUJFOSJVBMZCDMTDEDYTYMKBGFAQKXXJOYVLPCHMVKGLSAT");

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
    msg.setTimeStamp(0.302446967026);
    msg.setSource(31748U);
    msg.setSourceEntity(221U);
    msg.setDestination(30898U);
    msg.setDestinationEntity(17U);
    msg.id.assign("RWNUNOMLFUWTTXUHTEMNE");
    msg.sensor_class.assign("CSMMLEUZEFGWOLTEYSMJQQLVXAPPEVDHSVWMNJZLCXKRQEQGKPIJXZFUBYWBRSOMHHGYBDJLDRCMFGZXDIJYHUWINHZVZHVUXAGJQTJLKEOSCLLXIJXWIOFYSARACTFETXABGIELGBZPNIQHVSKE");
    msg.lat = 0.100740688754;
    msg.lon = 0.0812049748976;
    msg.alt = 0.794114180645;
    msg.heading = 0.632526710863;
    msg.data.assign("HJOWFHFWYTBLLQIWESJFZYCFTXXRPBXMQCYUIIOLLUQMUGPTCNVQBSHAHMEJPCQHQTLLBRCAMLGCNMEKLERCDSQJRUOPPYOVDZQWFIQDSMZNDAZCUJWAKXPPYLEDDOVGFYXRNIFXUNGGKBIPBSHUNNVGTIKZNMYAYVFJTEWRGUECHIHTAZYBUSKWICE");

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
    msg.setTimeStamp(0.661645738769);
    msg.setSource(19194U);
    msg.setSourceEntity(238U);
    msg.setDestination(48265U);
    msg.setDestinationEntity(163U);
    msg.id.assign("GRMORAXDYRYWHRAWBPPFBCCCYZGBHUGQQSELPVYGTDYOUCUEAOYZHIRUNFAPUYAXAZDZSQZIFIQKMZIKSWOXACZADSRBVLEKHPUMDXPYQLJNFYUMZIGFXMGMNTRXHDDLPQUPNCKMTCAVDNLKKMQOWROUHXSJTIBDGUTGKXYESCOVIVTWJLFEWBTQHRKBEGFOPNTVRJFVZNJKFEWICTGEIAKETOBJPBVNZ");
    msg.sensor_class.assign("WYCDTBKMHMWUOEUTXERBWTIXWEMPBILCDATTVPJQEQVEOBQIKIAWOPSBDOOJDLOEVZRJKQOZFLEWVHQJVCUHNNCJJISXZWGYIXKFYKDFHSNCISTPLDBFSMGFUDZVMGQEFVQJMLTFVGQJJ");
    msg.lat = 0.212617862405;
    msg.lon = 0.426604638052;
    msg.alt = 0.193747007842;
    msg.heading = 0.196076082599;
    msg.data.assign("YMYBHGHFGJEQNOUBHAZITNTRZYZTLDLACZXEJELIMPKJSPPNOSUIEANJBBKTVTEJDWBDHEAONAWNKXPCYJHFAMWLSQXCATVKHCKCBMNFCEXSPFMJXZZUODVKBMSQTIRDHRSNKUWVPXSZGBOYEFPQYLDHLPIXOGVZITKPFLPRUWCVTJRZFRFVGMGLTWUWQHKRCDQRLIUGVIDQAYWJCWONVCFUAORIZYAFRDIQJGXSYOGM");

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
    msg.setTimeStamp(0.356991044676);
    msg.setSource(3192U);
    msg.setSourceEntity(55U);
    msg.setDestination(2883U);
    msg.setDestinationEntity(37U);
    msg.id.assign("UIVSSJPMTAHXSFGEUHYQLCNZSHBJTTSHIWGXHOYZQUCZCGBZVNTQPGOXDPQGXODSBZUDXYVTPUSHMIXLSTJVDNECIVFORTQEMKYPZRRNPOXUMBCDOMBRXAUBAVELAZKJHCXKBPKNNVA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JBHHRWLHVKCSOVZDOAADECQTAQFBC");
    tmp_msg_0.feature_type = 193U;
    tmp_msg_0.rgb_red = 40U;
    tmp_msg_0.rgb_green = 43U;
    tmp_msg_0.rgb_blue = 95U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0844328630829;
    tmp_tmp_msg_0_0.lon = 0.935743258839;
    tmp_tmp_msg_0_0.alt = 0.34294129541;
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
    msg.setTimeStamp(0.442428468389);
    msg.setSource(28505U);
    msg.setSourceEntity(173U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(82U);
    msg.id.assign("FSXKBEXKLUYDDSJCXMOHGQHZUJREZYABZOAVIYTAYKMVZAZSCVZCJNPRYSIPHRUBPGDAYTKJENJBQEGXASVQMQTOTGCPXJUACPOMQWBCXYNTRLWLWUCNALRRGYFUHCZUSRMWAVLSDSOLBEWQHZOTDNVZDSTEPKQKWMJZGVIWEITNGIMXOPNLJDHNIFDJUOBGLFRWISKYAGUNHJFLDIFHCMTQFPTYFWHBEMVPVL");

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
    msg.setTimeStamp(0.310879730655);
    msg.setSource(56374U);
    msg.setSourceEntity(99U);
    msg.setDestination(29818U);
    msg.setDestinationEntity(160U);
    msg.id.assign("NHUUNLQSTOGRYQQOTBYEKWJVXRIBCWJMPQVGFUCKBKOOJEJMZLWLYICZMKGAOGNMVBAZIOZXLCBIFANHVRXLDSHAXUPPWHTZSQFCFSKGUFKDEFVTXLYGQVRVACU");

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
    msg.setTimeStamp(0.468239674226);
    msg.setSource(58425U);
    msg.setSourceEntity(130U);
    msg.setDestination(9012U);
    msg.setDestinationEntity(194U);
    msg.id.assign("ZGNFXSNDPYVWRVKTGINBDJQJRCXDHMIJLROGNPLUTAIGIOKQSSFPSBTJJXVWMRBQNFYOTAFXMPHZOWHBDDNHBPQNZPORZMERLDTVIHCRHBCBEQJSRLKIPZNMBUW");
    msg.feature_type = 253U;
    msg.rgb_red = 59U;
    msg.rgb_green = 124U;
    msg.rgb_blue = 169U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.90265525504;
    tmp_msg_0.lon = 0.0442863331793;
    tmp_msg_0.alt = 0.332091193502;
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
    msg.setTimeStamp(0.751889361035);
    msg.setSource(38125U);
    msg.setSourceEntity(184U);
    msg.setDestination(26554U);
    msg.setDestinationEntity(110U);
    msg.id.assign("YREKOTGCRBDBOEIBVEYOKWORXFQIPROSJTQCCL");
    msg.feature_type = 234U;
    msg.rgb_red = 145U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 231U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.877558129554;
    tmp_msg_0.lon = 0.396374910173;
    tmp_msg_0.alt = 0.241416515567;
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
    msg.setTimeStamp(0.156071289651);
    msg.setSource(11902U);
    msg.setSourceEntity(177U);
    msg.setDestination(46716U);
    msg.setDestinationEntity(20U);
    msg.id.assign("OYFZTANPGFBRHRMMWKOZIHNJRTBUPPQAEIAGKCMSNONVCSKGO");
    msg.feature_type = 140U;
    msg.rgb_red = 191U;
    msg.rgb_green = 66U;
    msg.rgb_blue = 137U;

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
    msg.setTimeStamp(0.547632088211);
    msg.setSource(37011U);
    msg.setSourceEntity(191U);
    msg.setDestination(17476U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.482787440464;
    msg.lon = 0.151504090334;
    msg.alt = 0.339603922885;

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
    msg.setTimeStamp(0.336798359065);
    msg.setSource(40115U);
    msg.setSourceEntity(50U);
    msg.setDestination(47494U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.458622584478;
    msg.lon = 0.514909127939;
    msg.alt = 0.641825124079;

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
    msg.setTimeStamp(0.138672720302);
    msg.setSource(56207U);
    msg.setSourceEntity(33U);
    msg.setDestination(33403U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.863752966033;
    msg.lon = 0.74538969336;
    msg.alt = 0.0738834619809;

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
    msg.setTimeStamp(0.524964827196);
    msg.setSource(31126U);
    msg.setSourceEntity(42U);
    msg.setDestination(57916U);
    msg.setDestinationEntity(22U);
    msg.type = 39U;
    msg.id.assign("YCWSTRJEPEGEVLVBIJAHUIFPZNWPEYYIZKSXHRTIWVXDAGGOEBXQYYLRZWPLCTZJQEAPDSOGLSKREQMXSFNQMKTPYGCKHWJAUMTOJINMVJYKOYCLXPBTHCDTXBBSGKFJHDMS");
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 130U;
    tmp_msg_0.op = 184U;
    tmp_msg_0.possimerr = 0.938711541949;
    tmp_msg_0.converg = 0.85877101697;
    tmp_msg_0.turbulence = 0.511042985289;
    tmp_msg_0.possimmon = 138U;
    tmp_msg_0.commmon = 55U;
    tmp_msg_0.convergmon = 178U;
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
    msg.setTimeStamp(0.824655203347);
    msg.setSource(55530U);
    msg.setSourceEntity(249U);
    msg.setDestination(62014U);
    msg.setDestinationEntity(99U);
    msg.type = 105U;
    msg.id.assign("DMKEBASUAUFFILMAFPUWLMNRRDXCVDDLOBYJNTXMMEVSBZPQOESLLCDGGTKZUIKRUZWPKRIQEXXJMYCZHCPGYCPHKQJRACKXCUVNYHNZZBDDWGJUBRGHRLKFVYBJSSLC");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.0713875128261;
    tmp_msg_0.y = 0.454813480143;
    tmp_msg_0.z = 0.693862379891;
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
    msg.setTimeStamp(0.919094767284);
    msg.setSource(64610U);
    msg.setSourceEntity(43U);
    msg.setDestination(45826U);
    msg.setDestinationEntity(155U);
    msg.type = 30U;
    msg.id.assign("BFCZPMOMQGGQRUTXSFPHAZTWYCTKEDMRKFSEQOXDGPHSNGHEGEIWRZPIIAKATF");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.593844505828;
    tmp_msg_0.speed_units = 148U;
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
    msg.setTimeStamp(0.231137662055);
    msg.setSource(17895U);
    msg.setSourceEntity(53U);
    msg.setDestination(52096U);
    msg.setDestinationEntity(176U);
    msg.localname.assign("MMMKVRBZJOYOJPCCMUWQDPTKUYVTWFSQFWWKEBIAZRTH");

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
    msg.setTimeStamp(0.177993599965);
    msg.setSource(36291U);
    msg.setSourceEntity(188U);
    msg.setDestination(3060U);
    msg.setDestinationEntity(35U);
    msg.localname.assign("OAYECZBABSEQIQOZNMKEXXKJHFZNEIGKRNRKWXDMCUGFUETWDSQRCJURPXIASTOQQMXDFDMOURUDUEQYERSRTQIVVLVZYGQCCSHHGKOHSNWVBTKRCHAONOIAZTVOYTYKZPAGLLNIYRLCWKWVMHFAPUFGIEAKSTNIGPV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VVSOXPWZUUENRZVFMX");
    tmp_msg_0.sys_type = 90U;
    tmp_msg_0.owner = 58784U;
    tmp_msg_0.lat = 0.650351746744;
    tmp_msg_0.lon = 0.805629842235;
    tmp_msg_0.height = 0.753549308782;
    tmp_msg_0.services.assign("VZEBIMBPAMXZTFPDZKQSERWRWQJSHODXVCFPDNALWDUCZOUWJAPFTDPYTVDQELNUOXJIVKHUVSZLQIHMGKWPKYSAOXYBCUXPNGFBCEK");
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
    msg.setTimeStamp(0.607330393934);
    msg.setSource(57653U);
    msg.setSourceEntity(231U);
    msg.setDestination(49730U);
    msg.setDestinationEntity(94U);
    msg.localname.assign("BIKQRSNEHBWXKDPHAVZXKLCJCOBEGSYEDBRVOSTIWZCFBYIWUXFMMECGQSYUEGVMJJSLUMJXUUNCOYBFPAOZPURTTB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GHFWAVJHLQGLGMBFFKPSURQNCKEGSYYFORVDCIILJYJJXEPFAHJKUVVQMPKPBBACRTGXNPSNBSWUDBSFZNWXIWSKDCTJTBCRLTJEIFFQOYRSCWOHSDAQNXLFRKWGZMBZBQITGVIPXCZRTANKUCCFQSNLEXYWZPMXEZKHUYYMIDYPYMNTOXYUMD");
    tmp_msg_0.sys_type = 162U;
    tmp_msg_0.owner = 35131U;
    tmp_msg_0.lat = 0.430180389659;
    tmp_msg_0.lon = 0.352650434686;
    tmp_msg_0.height = 0.688340815934;
    tmp_msg_0.services.assign("HRKKPILQLPNSYLKNRMMVPSEVRTZNZTJHVAAIWWHTDSLINZQWFZUWCARQBBPEKQHTBDQGRXMTMOBUVADMZDKPFSHDOAIPVJOBIGQCZMFGVHOLMCXNFCYBSHXTJXNFKAUYXNGTHXFEAGCHEJQUY");
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
    msg.setTimeStamp(0.76354093352);
    msg.setSource(53308U);
    msg.setSourceEntity(239U);
    msg.setDestination(18005U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("UISOKQZONFLGIOPPKBRCHFKMTCLPSLLSKUWFUNPCLXLEJTGUUAEBDYDJNNPYSHMYOYVBVDMAUAGKOEFTLFBPJEZALJBFFPNKBWOGAMMTGVDTZSJQJZTCWMWQWIRKDQCIYJPQCMMXHBRAGWSVSCYSVEVENTRMHAOBARVZQUEDNLQIJNZRHIO");
    msg.predicate.assign("ECAKUHIHKRWOCAUNNOOAWDJEPPYZSRIDLQOAQEBMKUKTQSRWBZDNFRPYJWGXJISLZGVPAEPEXIFIBPMDCVZMDNRFIGSJUJTKHATZSUCQQUODHLXYUDDEJLWVNPHTCLXREGPGVEOHFZMCWGTYSECBQTGNQZLMQWNU");
    msg.attributes.assign("WNQTADOFSZYBREOXHTSPAWNSGZNYYIYVDBCWSPDSGIVUHRQEAZPSEIFDMNFMQDLZAJATMGUYSVBRUPBCZJSUTOZOYEEOMDMHVCKBAAPPZOQWQFKVLVTBQHPJHKMFQWUTXDURKAKJVALGEMBJXHDOCKWETFHYPVITHHKGIDSIGDGJ");

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
    msg.setTimeStamp(0.357858866605);
    msg.setSource(32827U);
    msg.setSourceEntity(154U);
    msg.setDestination(32427U);
    msg.setDestinationEntity(112U);
    msg.timeline.assign("VFJMZCASSRIVBNSJLKKPZQMFF");
    msg.predicate.assign("RYLWWTVALIFKBJVPSREUCDSPOZNPRCQCOUZCNLSDHVAAPXBOHUMQNMGJXDQFTAEBQLHSHIDGNMQMBGADCAPA");
    msg.attributes.assign("ZSYAELBGMJGQJMTAFDUIZTSKCOIFHDJWMXSJKCGYYOJOTDPEPBOLSFECZKFPULERBVYDGU");

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
    msg.setTimeStamp(0.287638822528);
    msg.setSource(50288U);
    msg.setSourceEntity(124U);
    msg.setDestination(11775U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("ANUKLQTLCZOTLNSFVWPZFNYMPCYEUDMRSWQBJPNXQFHJAVTBXLYCUWWLOGXPWQNZIFUOANVBBSJBIEZCVTIMJKUUSDLYPKGUYWRHAQRTTPCMAOGSXXGHIHMCOSOYQMTCBADXEIFRZZXNMHEDNAEEXNUGZIDAVEKRSKRCHVCGQFTKFWSENQBRJDMGEDLMFGBOMRTOFRODXJVUQPSYHJGKABGCZYIKLWVKKSYLIPIWRHFIQBJ");
    msg.predicate.assign("NXJQQDOEEJPYCIXPBJQYFBARSSWRAAHNZTJTODYTBVMXYNVLIYXHHZR");
    msg.attributes.assign("XWNGLTEUPYASQNPXESEYIFCOMDWATLDOYQQJKTYWKZSJXRLHVDPBEHEAZZPQWQUZULMBIAGFBRAPTHPYNNHBADUDSMSDCOCMJXPYLGWUZIKFNTEBCJSQQIULLLDIVCC");

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
    msg.setTimeStamp(0.936213693631);
    msg.setSource(42969U);
    msg.setSourceEntity(128U);
    msg.setDestination(40047U);
    msg.setDestinationEntity(69U);
    msg.command = 50U;
    msg.goal_id.assign("ZINDXAAPXYUKQNBADIBHEJWSRQEDNXZXXIXYZJTWRHUCYHPNGAOAGNYSEMARPGYLDPSK");
    msg.goal_xml.assign("BUKLPSXXDVRAXGWOBHQBRDFCENSGJCWRXIIUPJCFMWYFRPKPRGIILDWTPWQTQHBLAZZRNNYSIKYWDNTNZHKAUMFPRLHYCGKVOIAJXEEYMBHHHSLGQHLNNZITSBHPSMOSGMFQUXEZATFMYUASCLVJTDCCPJDCVEMVQJAEOUVTUQDEEXTITQFGDHLJCOROPVZKGNAYMRGEBX");

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
    msg.setTimeStamp(0.633328199777);
    msg.setSource(39753U);
    msg.setSourceEntity(94U);
    msg.setDestination(41428U);
    msg.setDestinationEntity(157U);
    msg.command = 226U;
    msg.goal_id.assign("KPZEDGSZFUCMSJBQDGEBURVGHNIHCRLFPXAICWHTWOAYJNEXRYMMBJTLHFZTFDSEYEHZPNALNYPTRIXZWZIQUALCQGPOZVWYDXDBMNRUEOGTOZQKPVBNTJOEFOFFRCDHLXUKISYFJEKUJNRMGQDCKOGUOKBLZNTULXERUBIHLVECWBCVIDJQBK");
    msg.goal_xml.assign("QGPIZXRHFIRGZ");

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
    msg.setTimeStamp(0.760362530942);
    msg.setSource(23158U);
    msg.setSourceEntity(114U);
    msg.setDestination(36342U);
    msg.setDestinationEntity(228U);
    msg.command = 151U;
    msg.goal_id.assign("LAOWXDQLYQETRJXRQVOANIOCRMVXBRFKNFQCSLAWGFUSUOAKTPAWBOBLPSCEGLTTXQZVRTMLSVQFIONHHUTMYWCXZXLMYNFNDAEJQZJXYPEZAXSHSVCRIWRCKFPLBWKLCZFESUNJFGDBNHGMCZMUYHNZUIMOJGRQDFBKJEERBZDRTZHWYYYVJVWPBIPUGBWKFPSSDKKMHTHJGVMBYDUJPTHWI");
    msg.goal_xml.assign("QWNMYSTTYQMVIWLRUAIFCRTGRVPLNXHZNCVVLZASCOMXRGHEAODWOIUCUNZUYAEBTCJYVWILKHPSLGDNHSAESANUGQHFVKLBYNSFZQGHFBRQCPPVJGIEKQAPIDYMBMDJVKIRZUOWTJZGTARVWPKBDHQQDFETCPKFLJSEUZENXCSTXIXFHNPDJRBMKXFMOMBGWCSDXWEUBTWQXJSLJJIYH");

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
    msg.setTimeStamp(0.0851829839287);
    msg.setSource(43435U);
    msg.setSourceEntity(56U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(77U);
    msg.op = 236U;
    msg.goal_id.assign("KBZGUQZYXIOKUTJQEWVQYMNLDRZDMFFQYUACULXWWKVJTBZJOTVLRNOPQXHMLFFQILRVBGIFLCFGOIBGJERFRMMZSWIFKMPRYITWCBLYCSCKEPSQKEORMKWXLUEXSYQTSND");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FQJGSPWRQMGVOVBGLYVVBJBIPOSAPSGOPZEALGQKMICWMVXNTIIIZLRSZCWENIKJBWQMXDUDCBUCZKNRPCYDEXVBKROAOQZZNHJAGWBCR");
    tmp_msg_0.predicate.assign("NMOWJBBGQGWCCLFNTSBVRKGHOPJNXUPMRFJIVLDRKCHEMZDRTTRSXDKYFHCJZXPHZTMFWXIAEIILYUMDWGIDCAXJQWYCUXOO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MSVSSKGGRYKVYJLJFHAVLLLWJEEZKPYNKWVZRDCQPOUBGPSDWBFDFQWHJWNKFPBBURMWISWATSZONHVLXHXOEQZACOMAKPCQCDHXBIPILSUBUEUDPCIRTUTQLKCEVAKDLAFEHGQ");
    tmp_tmp_msg_0_0.attr_type = 176U;
    tmp_tmp_msg_0_0.min.assign("HEJCMHCLSJAMDRGEJFAABFIFLGUNQRIELUMJGGYQSVQOLUZZZIYEFSAUSW");
    tmp_tmp_msg_0_0.max.assign("GQMOWPETMNJXTPXFMBPCRVYEEYWZTIVVMWSXRPXBIMEEQSNYAKJZXWPGCBQZTCYHBNHBWESKNEFZOYRZVTVORDPUCRLGSBLLGLCWOUCHKTMLXQASPMGITHPPUIWGMFTSLYASVFCWNZRDHYNGXAKJRLQQDKLOYFBWFKJIQHPNUOFYSRMAJXACXQYDBREUZXLZGIRUOHVFKJ");
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
    msg.setTimeStamp(0.330507936089);
    msg.setSource(39978U);
    msg.setSourceEntity(127U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(9U);
    msg.op = 243U;
    msg.goal_id.assign("BAQGVRTCFYIUNXXNWDOEEIETHPUMSFUOWSVPDEAKSZQHHIOFRHRCUQNNRWFJMGVZBXVNKABJBYTYTXLHWSKHEWJAUOMENXKUQLQUQCMDWMTKRZALNYMEVLYQID");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DBMNKYFOMYRYTVPCTIXNSMVREDIVSDNWPJIZDZIUXPCJVECUUHOBYYFULKPTAARMUFOKFGOMAEAOOQHGUDXVVBTGFQXJFXJ");
    tmp_msg_0.predicate.assign("AZEHTWXPSMKZSIOUVBDUZMDOFMUZSXOQAVZFZXHNRDSZFPCNUDDNXYYYNLBXWAODTROKPEGTHUGRQLJIHEEMLTNCCISKRTLNX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJRRJJFNTNBZGVLDETOTSQSVURMFQHBZUQIVPICOLQDYDQUYXTNEHY");
    tmp_tmp_msg_0_0.attr_type = 169U;
    tmp_tmp_msg_0_0.min.assign("UVEMBWKFIENJNHIJLFFFCJPUGJCAIHFRQODXETDYEOHYHKQGMBRUASGHDGULSDETUSNSYXMICYQAOCMHDYPIVH");
    tmp_tmp_msg_0_0.max.assign("CQLFUYGAEZWFMYTSKJVZJZSDC");
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
    msg.setTimeStamp(0.929695535717);
    msg.setSource(48359U);
    msg.setSourceEntity(113U);
    msg.setDestination(44841U);
    msg.setDestinationEntity(248U);
    msg.op = 116U;
    msg.goal_id.assign("PSAJBKQTORNRDXKTNHJUZAZUDERPJCURMVOAFQMWAXLNZRGBCFMHVEPQNDMDKERYKFEWSPIZFYJMNJKTXOODPQOECDCSXTCVQG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KCRIEQAYTRCDMWKYHHOFVYPNBEZTTAPRLBFOZBNEBXMFWOJVRYWKCTNUUOPWNWPUDLGGERVULETJDBAQXCFAURDXSNXFQLWHDZGXDEFANIGOMVSXKEMILWISBXJTABKJCTIMQKSYXJMQZNCZGJUDMEIXJHZRRHJPVQDEYBTSVYRLIXQNOOAIWAMCVPZ");
    tmp_msg_0.predicate.assign("JQSZPFTCZIRMLTPXLZVPLUSJLBRVIOOCGTHWGLVACEQPPHANCHAUJIKBRKRMSOXJJQNPPETQWFJMAYQHTGCLRYUYHUFIHDLKCPDDHLTQOBFIIDHOAOSMKTOZQSVMEBPTWBJYNEEBRHACGDHQSWZBKIPMOMUNMVDGCLWEEVOBINXGYVYDXEWFZSRZKDGQJNNNLVFWVSGYTUGZFOMFKX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BGASUMRECXGKPZCHKBNJKMJWJOFSEHKCMQVSKRIRFZVUNQQDHGASHYXZRQZPZKRCNVYWNUDOVBPGDNJTBVWYJZTIQYMNMLTXOGKIWMKXURTXZSJEIWUJBFDFCOHLTHXBBTFYBELDATLDIKFLAXWKDBPAPYYCSSJPMLZWEISPIMWURAQLEIUXAQPGYOFA");
    tmp_tmp_msg_0_0.attr_type = 129U;
    tmp_tmp_msg_0_0.min.assign("EOIFSIXNLMXOBUXKDQLPVUGFHQAYDSXERZYZCPLIOPVTZBCRYVUTCANMKHZGQNIDCNJHRLEJUGGBETRRNKFDFAZQXAAQOTTCDUNVDFUSSOGPEVULWJRSDBEYJBNBXMOKPGNPJIQFIKUYVYCHVFTWOTJSZNSAWOLXWDIXLZBYKQRGOHKKBHAVKGDMXMQNHFQESEAJZAMWPVWHRBYFWMVWPWQALFMOYTUHJZXICMSLSHL");
    tmp_tmp_msg_0_0.max.assign("MFYNEOYJWJKMRFZBXKUWSZDZOQZILCCYLSMBMZZXFPYRUOTLDRHXAWLZZFCGHDDFCQBVADUEGXELSORHSPRXCVOSNYJRPNLKJASQTPEISIQHIBOTHJJIDOSEZNYUAY");
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
    msg.setTimeStamp(0.736738886571);
    msg.setSource(36096U);
    msg.setSourceEntity(218U);
    msg.setDestination(8765U);
    msg.setDestinationEntity(48U);
    msg.name.assign("LGDUJEWQUOOKMMOCZUNKALEFROAMWQLNLYOZRDTVICPEETYUNMWAVDSHLRPASMGFSBRVXFJLYCOPZLMCSBE");
    msg.attr_type = 114U;
    msg.min.assign("EYUCLBUJLCHATVRNHTQPTJINRJDXQWKAESNFMNRNQRXTGPWHWPCGZZBKGWRYGXDYKFOACFJVPHBCVAXVLWZXNWUVBMCDZQSGKDHROBBXKTJKGONZRLXZKDARWUSUXBEVSLQUEPWIAQUQXMFMYZCBTLETOQLXOJSDU");
    msg.max.assign("JXOJDJGWNDZIBEXZLMQIUDLFZXGGQKMUZBUSIBOOCIMWOXWCZDYGETHSYSNAVLCQWDMTXCPFOKQAZRHKEIHGPNBVFPXQVRWMAAHZJMPOFRUZUSRT");

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
    msg.setTimeStamp(0.778121229516);
    msg.setSource(27561U);
    msg.setSourceEntity(163U);
    msg.setDestination(33128U);
    msg.setDestinationEntity(221U);
    msg.name.assign("HGCUNQALXUYCXANDSYYEUHVUZNQAGUXCQQZDEYJOFZKFBKORDSXONCWMTJJGVLODQIBHCCAASZHHZPKPDLRWVCXCGFQMRXEMHJPKFSXKISVEDNTSSZYXPJMWTIPGKRLTTNISEFYJRUVFJHKQVLOTIXZDZ");
    msg.attr_type = 125U;
    msg.min.assign("KJCRXSWRBKKVIAOQDXSPFAYDTOBLSQGGHQHVCTJLFWKAYJEGPPXCCXOMBHWZSZSCVJBNTZOEEVXQONLFQKOIAIZNDPMINTVDYQWTGMFVFNEAULPXYDYTPJQLZKSZSIAJVBEBOBSHIVMUUHJRUTNERORYGRKUPBCZHFGNFMADLKLCUEYWIOUH");
    msg.max.assign("DHJCQBLJYYIMXFRAXGCKLTGMHTSF");

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
    msg.setTimeStamp(0.0822506685339);
    msg.setSource(37419U);
    msg.setSourceEntity(24U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(169U);
    msg.name.assign("QLNACGSQPRHHCMQIBUVUDXIWPHTXYCERFQ");
    msg.attr_type = 113U;
    msg.min.assign("UZXSKOYLPGKZKINMFSOHZIKKJWDUGSVHGIBGPJKBBYMRSYRZJSERLEXJVCJCYUEJXVUNXHBLOAMRAHJMQQZRCAWHIRCIDZRAQYFTNKDXIUPHELTWNUSVWTNUPGQYHVHCVWUXRAHSTWQLECRIFNMDFIOFZLO");
    msg.max.assign("DDOHGYQFIKICUIEMOPYFFNYMYWKZENKSZUYMWATISOBQHITXHLBGBEUACLCRLNDDXEXXZYPJQFGWLKHVUNOEWSWOBRHPWPQRBJJVSEWFNFRMHXXLKGLXKYZRIQPZFVXDUADKHAGPFMZMHAERJOIGTHJOOTVQVCFLGYNBVCABBEDRPNCWGSZUADYSVPJJJMPOVNUZSSA");

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
    msg.setTimeStamp(0.206809212923);
    msg.setSource(9336U);
    msg.setSourceEntity(170U);
    msg.setDestination(26366U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("NRPTQACIFDWXKPALQFCYYOIZWTHTKHOTCXYWXVTFSWSYWLPXTQBNYLLMNVJKUHJDLYSCERMAXASOIUNXZDGMGGUFDYKOMDX");
    msg.predicate.assign("LAGYJNKAGZOVWJVBWHNHNPQGKYFDVQVSHZTRPWPEUCQZSIJTYBBIFUKEMKKENIDMPSVSMOUWLWMRHLZBSSRXEEPPQGTJHCNCFVEAYXTENZXUYFRTLUKOBJUDMODLCDXZHMAZVDZVCFQE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JYHZYJYDMCNAYDVPCOZBGIBKGIKTNHKHYQSAYEDWLRKHBAIUGUDJVUXUSQWVEHPUWTGZVMEBIZOKIIMGFQRDSWYWDFWTAETAGPFLAMPLTGQAHRCQLZEYAZEOIOGNVDTULIIBNUPPCJLTJLESUSFRZLSCDXRFWCXFRGOAFOSXOFXTGINKXFMNOYYPJLCZENECMJDHQCHMWLXVXNVBWVVNJBNZQOSHPBQ");
    tmp_msg_0.attr_type = 56U;
    tmp_msg_0.min.assign("HQGLGLZLNWLSBUDQCPBNMXYVLQVWKYKCVFXHLTQBMBMCMHNIDQOBZWSDYTNEJXSBUU");
    tmp_msg_0.max.assign("KHELSGVWZGPGVAZINMNNAOCUKODUXGLZLTJPQWRMJBDJOLXWGMCXDYFZUUYQRBHYFHSMYAHQTZXMTYIMSQCKPTBHCCSENUAFEDRVULPFJQWYRRSEDVBBFHYYTAIMNKFNGFDKOVLHTQOIUHSIPZLXVXNSAODCRZGQPGWDKTACWGKFLXOTSJR");
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
    msg.setTimeStamp(0.192240583214);
    msg.setSource(52005U);
    msg.setSourceEntity(3U);
    msg.setDestination(14298U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("ZCXXOYEREBUQTXUDTWWFEKJWQTXAUTCMLJOACPTJLIUKWDQSYMGCLCQPOOBRNIRUDGLOZCYRYYREFSQYUFHBVOSBLBRKQAGVSJJVWMCRCDLINIVNGXMLICHBWYGWXMFKAEEJFJFHXYPUWWQZNZMGLBFININSQK");
    msg.predicate.assign("PCVYHQGTWJVXCYMMDMYCPDOHLUOEVFQZIIWOESCXMGNZTGQUKDVWIWHLXRYOBBWQRAEFIKFBDDAVDGWJPQVKOETPKSJKMSYMLOHXVBLFVSDCQWZZGTIRHIPUFYYAJNRKNMKZUFUMSLSCNVOLLXXIEDB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QOEBRCKWVIORJFIRLCYQUXSADMHWFYYGWSHSRYNONUVLXIYVSOTDEFALMRKVOQWYPUWBDFEUYVUSAUUCGRNYFZSJCOLTNEGCZQFTCFIMUPJTOWTPMXRKQLZRRFPKGNBK");
    tmp_msg_0.attr_type = 116U;
    tmp_msg_0.min.assign("KTSYHDVNURTBKICUCLTWKYFPACBOCQLN");
    tmp_msg_0.max.assign("ERUQICKSYYBTVJBZJNHINYCAOMINXEQOYHEGQBAUBLWAPOUHZJDESVHYWTBOFUKVMGCVLLNRMRLAMHHIFGPXTBXKSTXNMMJSFGUVKQLHASFEASVUVGQPNRCODOCUSIAZNBJJIERJVDGZRDKBEGHQLPSFGXYDQPCWTWNJXLILHBEEIUOWWQPJAOCKFXSGTTNYFCWZRKZBCMWUCWKYIZRJZZOPTIKDVOSDTLXW");
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
    msg.setTimeStamp(0.134247473251);
    msg.setSource(11822U);
    msg.setSourceEntity(143U);
    msg.setDestination(1510U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("WFBYYLTSSZVREUZUDGXAOMLLXWLFJOSEQBKYFKZTAHCFWIVGZLTCUQANUWTUHTWCYBBIJEMAYCDCJBNPJEOAXWFDYTRYGRHQBUMVGDWIBSPMKUZNMIBSQVZLLODXMGSNCWHHNMMMFCNIJCOJFOGATQWEWSTRVGVBOKFHUAYPVUPOBPXLAGVLNKVZXRDFXPQQJDRDKJRRIOOTCJKHDGXPSEADQJPNPNSKRKISNYQGHEMPEIFXC");
    msg.predicate.assign("EMJHTNRPVGFJQDPDBUURYAXEZXFOVMCWFEXYMXZHMCWPJKEIKZCESBTJUOORBVEOMQPLHINVGDPMLYRCJGIQHPEWAVHOLARPOUIDTKVPCSLAWSXNWZWZCUJXOTNDRZFUZLZRCYGYBHQFUVAIXKMFWIAVNFPWQSLKLBEJIAWXVVCGBJYKCZBF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ACBYBYTSNMDSFNKYUKTZWFVMVCQP");
    tmp_msg_0.attr_type = 161U;
    tmp_msg_0.min.assign("FEPFBZIZHSQQLZUMRSNRLGWOL");
    tmp_msg_0.max.assign("FYUJNMNZPWEFGIASCAVAKJBIIFZPVECTWDORGHVFYJNAQUZIOBHZBEHZ");
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
    msg.setTimeStamp(0.837447997942);
    msg.setSource(35272U);
    msg.setSourceEntity(141U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(221U);
    msg.reactor.assign("AOZLGEIWSWLYAFLAXHYJCCAVEFSUKGDAOPJHAUDSOHSNREQVBSPMPPSLZQJVHHC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DOYSQESQMVLOWHLMVKDUHUHPVZLSWNWGKWBZCHASRPUGTBAWVDXXNYMEFUYASWBGMKURAPOGTIDQWSVJPFYJKEBDPTEARCNGCDBAIQGOHXAMRZLOTXLIMIZ");
    tmp_msg_0.predicate.assign("JMPNHJOYRYHVVUXZVKUHCYMNPTIDXZSMCHQQGHFYPTGQUBRMBLNSTEKKWHGRRDKAGKEPVDIBESMLSCNYD");
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
    msg.setTimeStamp(0.201943181295);
    msg.setSource(32995U);
    msg.setSourceEntity(253U);
    msg.setDestination(45872U);
    msg.setDestinationEntity(33U);
    msg.reactor.assign("XOBVYKSFYSGWDNFZGDMDXLPZUDTQOIQXWTWEONATQPUKYDPFNWNWAQDLBYABVMHZFHBTGLPCVHAXYLZUCLWSECOJFEFKIGGEOVPOIVQRYZUADWBZTJPFNBHBEIUSMVPHWBQEIXVRLLSEXJGJRIAKVG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ADCFSVVGEMTHAYUXDUCVRBGUQCNSWJMUHJZJNVYHXWKZFLIBSJZOEITHEPSMM");
    tmp_msg_0.predicate.assign("EVKUEDDGUHNRMZKUBQAICRMGNIOYZYPSZTJPAHSXIGIMNSECXTJJNPUYEWSBTFNSALGZMTQNXQZGGHZLKBTCFDOUCKKREBFMQXEOLJBBZJMGGRRELWJOZQELSUCOWMIWFHHNVSFTCEUIHYPBYZWYPRELITBXCWYYDYMTVFMALXAPSXAHUPLOMKKCFVAQYFCQRLKUPWLORFQWADKWIIW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FRZOUNIYDQAXGMNNJRDLEXACDYEWNHOSLNIBENVVAXQHPBIGGGNERHSHMFRRDLJHMVENADPHJXBJCWDTNXOUAPLCUUOULJYLTVMIKTSKOWHILFDSTOVYSWPKAJWZIQXQDPOFOUZNLZTQKXYSBIQZKGWMVFUMMMZRFUXOVYLCAJPCTXPGREDEZACGTSABKIMBVLYHGKEOTWVEGRD");
    tmp_tmp_msg_0_0.attr_type = 217U;
    tmp_tmp_msg_0_0.min.assign("PMFTUJLGXTACZBWDNXYDIWX");
    tmp_tmp_msg_0_0.max.assign("NZAENLLCQKHQIPNHJNIVTMMLJKOMYKOWUACCFHRXIJEMWTASRZSLFDYRJIXZPQJEHPPXSJU");
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
    msg.setTimeStamp(0.606901385926);
    msg.setSource(41070U);
    msg.setSourceEntity(229U);
    msg.setDestination(63288U);
    msg.setDestinationEntity(66U);
    msg.reactor.assign("OWGHRPFMLGZBWJFPUKODVJJRUMVQLETUDJEXQDKGZBLSXFSEYWMLQJKXSYFHGAOIXPEQJIPEVGNLNGGTAVHUDTNKSWBAIHHRLULIQFQ");

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
    msg.setTimeStamp(0.601145750662);
    msg.setSource(54477U);
    msg.setSourceEntity(105U);
    msg.setDestination(40838U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("HBPZDHVJDKZKEUWPRJHKRSSTZTHRQHWMKNBSXLIXEVXVCGQDSBUOACRAFYEJZPKQVWSYXECATLLZNRVNOOFXEYLPWJP");
    msg.data.assign("GGIQBHQAQGPNCOCUKOCUQMSQMKWBKZWTOWXRLAJXYPWHGMHTZILLFVGVLLDMUKOKTFBXUDAGLTNTRZEQDRKHSHFDLIJAKXAZRKELYFJCBGFSAHCIJNIIEYQDPYBJVTROKFFJZBNXPSZXDFECTWBYPCTYMDOZEBYESAORJEBJOURVVADAHUSURZVNBVWNGZMRPPJOXXPQZUGNQMYVGCMINYR");

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
    msg.setTimeStamp(0.371228825495);
    msg.setSource(31989U);
    msg.setSourceEntity(45U);
    msg.setDestination(34963U);
    msg.setDestinationEntity(45U);
    msg.topic.assign("MMXLPWARJUEFOWWJLABATQEWVFGJZOVXRBDMXMRHLWFJHESMQFVQQPNNWZKCZUDCDQRKHBPUKOYBUTIRWIIPBSIULCVPSOD");
    msg.data.assign("DKUSYDJLBDEOUXHYKGEOTQNBVKTMWIKUSNEMFAQBQSPRSDBDCNQUYVEWVCZLFFPWKRINCQSEGOPHXSXIOXXAOJNAVRBJHTEIUJIBEHZYZCUETGLICPGHJAPKPFTQHWZVLNMAYJVIMNFLGMPXIIEWOSMAXQFBTFMRFPHKNDCGHRHRRCTVKYZMJAWZ");

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
    msg.setTimeStamp(0.69690757115);
    msg.setSource(17080U);
    msg.setSourceEntity(118U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(101U);
    msg.topic.assign("RICCDEIJEDMXKYBGSASCKRNIHGVSMMQJEXFPWUUJKJYZAPGNYDSGMDHOGRLGAQATCBLQIPOULKXQWODOZXNLQSLLJWIVHRHVEKYBWFZFRVUSDOPFCEHTKNBIZBTKVAOUHNMJVIPSUCTQGNYLXFBYGAKHQEEULPSQWLFKPKMZ");
    msg.data.assign("VUQWRJUPHVDHBQGEDWKRSTIOLMCTCZWSHTNOJCGYLXODBIZJIVCEDRYGVUSFQMVBWJLXXOTMZEAIBUKUUNJPMWOYAOSFNDWKGPZIABYWFYWBDSGVAPSDYFOSTFHFGCLGEQALZFACRMMCZLZTYJBUEPNRHTYBVIPLHQRQQHERIOYRUMESEBVCAXKTRJXWOKFDJTNQKIYXTMFSPHGXDAJUHNZJXZWKMCXNMKUNOIPVNGXABSHICFKE");

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
    msg.setTimeStamp(0.804993005876);
    msg.setSource(39940U);
    msg.setSourceEntity(241U);
    msg.setDestination(5737U);
    msg.setDestinationEntity(201U);
    msg.frameid = 206U;
    const char tmp_msg_0[] = {-77, -116, -81, 77, 120, -115, -76, -50, 50, 8, 50, -55, -57, 86, 96, 119, 64, -56, -55, 66, 48, -124, -75, 85, 0, -100, 85, 124, -57, 73, -92, -13, 121, -48, -61, 72, 86, 85, -41, -87, 66, 57, 75, -37, -61, -52, 5, 101, -124, -105, 72, -110, 77, 85, -83, 19, 37, -88, 2, -106, 68, -26, 18, -51, 20, -9, -116, 105, -16, 10, -118, -109, 125, -82, -115, 107, 72, -11, 57, -102, -15, 19, 44, 4, -111, 109, 53, -105, -81, -38, 78, -99, 15, -112, 61, 28, -43, -11, -39, -80, 38, -80, 23, 58, 36, -26, -23, 8, 7, -47, 18, 60};
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
    msg.setTimeStamp(0.0502845577217);
    msg.setSource(35985U);
    msg.setSourceEntity(70U);
    msg.setDestination(32420U);
    msg.setDestinationEntity(146U);
    msg.frameid = 186U;
    const char tmp_msg_0[] = {-100, 48, -18, -88, 101, -63, 45, 85, 71, -83, -25, 103, -49, -65, 53, -36, 40, 45, -8, 6, -5, 54, 68, -65, -70, -111, -21, -94, -76, 34, 49, -39, -81, -21, -49, -65, 72, -87, -66, 113, -8, -125, 107, 19, -87, 10, -44, 41, -125, -67, -18, -41, -26, -74, 102, -59, 50, -109, -117, -7, -66, 62, 17, -5, 61, -46, 89, -109, -107, 21, 15, -88, 2, 61, -15, -128, 91, 11, -57, 80, 110, 109, -18, -49, 63, -80, -80, 112, -19, 23, 76, -117, -79, -111, 0};
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
    msg.setTimeStamp(0.713329235794);
    msg.setSource(3392U);
    msg.setSourceEntity(54U);
    msg.setDestination(52109U);
    msg.setDestinationEntity(102U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {1, 22, 100, -36, 77, -41, 17, -99, 19, 115, -128, 58, 44, 87, -81, -104, 87, 15, -117, 72, 110, 11, 90, 93, -38, -80, 60, -69, -109, 120, -76, -114, 95, -73, -99, 19, -53, 73, -63, 111, -49, 111, -25, -78, -116, 34, -41, 62, 82, 117, 53, -69, 54, 99, 102, 9, -105, 98, 11, -104, -71, 84, 90, 46, 24, -109, 64, -36, 106, 89, 72, 28, 16, 44, -76, -10, 110, 42, -96, -66, 9, 105, -80, 118, -29, 7, 72, 43, -32, -119, -94, -7, 122, -16, -81, -58, -123, -55, -89, -16, 74, 46, -125, -34, -45, -116, -82, 19, -37, -124, -52, -97, 38, -15, -86, 71, -41, -125, 38, 29, 108, 62, 58, -108, 8, 42, 69, -66, 12, -116, 101, -31, 51, -113, 13, 92, 86, -61, -77, 64, 114, 69, 10, -48, 41, -127, 11, 83, 114, -6, 36, -81, -24, 39, 91, 29, 5, -66, -33, 90, -106, -30, 36, -1, -28, -56, -18, 70, -41, -38, 32, 95, -61, -3, 92, 27, 96, 67, 110, -10, 29, 6, 52, -61, -84, 63, -98, 38, 95, 90, -22, 65, 0, -67, -12, 95, -71, -22, 60, -2, 20, -61, -19, -11, -83, 59, 99, 51, 101, -3};
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
    msg.setTimeStamp(0.43968359726);
    msg.setSource(32503U);
    msg.setSourceEntity(119U);
    msg.setDestination(4496U);
    msg.setDestinationEntity(225U);
    msg.fps = 177U;
    msg.quality = 134U;
    msg.reps = 143U;
    msg.tsize = 175U;

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
    msg.setTimeStamp(0.990650034936);
    msg.setSource(24166U);
    msg.setSourceEntity(25U);
    msg.setDestination(44009U);
    msg.setDestinationEntity(86U);
    msg.fps = 254U;
    msg.quality = 231U;
    msg.reps = 156U;
    msg.tsize = 123U;

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
    msg.setTimeStamp(0.219134274682);
    msg.setSource(9810U);
    msg.setSourceEntity(64U);
    msg.setDestination(50376U);
    msg.setDestinationEntity(66U);
    msg.fps = 211U;
    msg.quality = 9U;
    msg.reps = 116U;
    msg.tsize = 74U;

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
    msg.setTimeStamp(0.0957598620408);
    msg.setSource(65526U);
    msg.setSourceEntity(57U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.355114548189;
    msg.lon = 0.693131650967;
    msg.depth = 12U;
    msg.speed = 0.338819814844;
    msg.psi = 0.166067538608;

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
    msg.setTimeStamp(0.940406355561);
    msg.setSource(45593U);
    msg.setSourceEntity(212U);
    msg.setDestination(53502U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.630734246963;
    msg.lon = 0.726822954179;
    msg.depth = 109U;
    msg.speed = 0.96115930363;
    msg.psi = 0.697531261759;

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
    msg.setTimeStamp(0.990364385052);
    msg.setSource(41032U);
    msg.setSourceEntity(79U);
    msg.setDestination(42510U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.577391641322;
    msg.lon = 0.397356053716;
    msg.depth = 7U;
    msg.speed = 0.183507098853;
    msg.psi = 0.627753817608;

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
    msg.setTimeStamp(0.705128887215);
    msg.setSource(46229U);
    msg.setSourceEntity(141U);
    msg.setDestination(59564U);
    msg.setDestinationEntity(181U);
    msg.label.assign("LZZBDFHWUCRBCMKVDPVQNLURMOWDVIOHLCGVUEKQYCAWWIQJXZTLKJPIOUNJTEOWRSDSGCXMZCPUFKYQEZLMBATQ");
    msg.lat = 0.336387362136;
    msg.lon = 0.709059988832;
    msg.z = 0.524330441046;
    msg.z_units = 159U;
    msg.cog = 0.9125466372;
    msg.sog = 0.553843125491;

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
    msg.setTimeStamp(0.17057629222);
    msg.setSource(38662U);
    msg.setSourceEntity(246U);
    msg.setDestination(24568U);
    msg.setDestinationEntity(178U);
    msg.label.assign("VVJWRCTMUXXVEMUKLFENFZNCMNPRVFISCBRJYAEZQDFJXVXIRYYRBJIHQZUQIMOPJLDKYDAXFVWNLDHLSUDQTOHLQPSHAZKDLIRTPYBZBSBTSLVWJIBPBASWLFCXWVWAGGQVNOZOSOATTZKFHMHCBDKXNTTRJNMZVBQMHYQPLAYLDNECUEOCCHQABJWEUMPUGWAFOUIPQSEYGEGXFWKKDUOPYGATUXTR");
    msg.lat = 0.716514548534;
    msg.lon = 0.558514255984;
    msg.z = 0.817501308242;
    msg.z_units = 49U;
    msg.cog = 0.739312466757;
    msg.sog = 0.0470269362838;

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
    msg.setTimeStamp(0.999719887205);
    msg.setSource(29976U);
    msg.setSourceEntity(146U);
    msg.setDestination(25521U);
    msg.setDestinationEntity(61U);
    msg.label.assign("LOSRCDYOKQGYERTSPFMBDHXVICZJNFDHGUIBOMPRQJQGFBXMDAPXXFSVIWYWDXBSXCFRYXQJPECCDIFEQNRTDLIUXDOQACMGGO");
    msg.lat = 0.117933095488;
    msg.lon = 0.384718909861;
    msg.z = 0.30686539894;
    msg.z_units = 220U;
    msg.cog = 0.776243285054;
    msg.sog = 0.577317909856;

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
    msg.setTimeStamp(0.396050703923);
    msg.setSource(13102U);
    msg.setSourceEntity(214U);
    msg.setDestination(27598U);
    msg.setDestinationEntity(86U);
    msg.name.assign("KHBYCWRHESRDZMCOEJZKXHFLXWMSVCYEBSHFSQUPINCXOTQIQEKFGGNXVIFWSRDRNOYRJSVKQLHZMTATHSPHUDXVERKOXDQTERZCZBRNUAYFPPAYQDDLITCJOFHWCNNNHVOQDONBVUIX");
    msg.value.assign("RDZHTPYHWNEPCYVVVJRMHVYXEJLLFRNTNFNOZGOLVQZBNMZTVZJDPSGOVQKYZCUCIWROXWNMIINNEALFXQAXFUEXOQCETROMJLZDXPGSGRKETJLIAUQWTHASBVGKSTJOZPSXKDVCHBFZPJKSUHHDDQMYYBGIDAWCTGPPGAUDJHWOQMUYKPPNOBA");

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
    msg.setTimeStamp(0.218556288799);
    msg.setSource(59973U);
    msg.setSourceEntity(38U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(207U);
    msg.name.assign("PDZZTMHFDULUAOUVZYQWCWVNWVPDJTGKSRMYFKANTODFIUUTVUHHXUOYSASMPWCNXHVGOJALDVYYQTJZXDUXTMLIPRMYWQZRLWCRQSDTCBBCHGEOECSKBEFJSEBQROPUODGLJEREHISJVRYPRDXQWFGPWCXEAXCXYIGIZJPIABYNIZMTEPBLEXKRH");
    msg.value.assign("UQPNTROSODJCPZGBXSUEZFAMMQLLCQCXFADARNOUFXPJHOIVLLTVUWSZODYQNSAWNNGBLEFNPMSTIOLGGOUWBRIHZEYOTTGMFURHMXHBXRGKJVPZQHYXNTQKKOQUJSCUHHYUBYYDSWJYBVNALGGADCDHCIKTPAJNWCCQXKBJECTKFBAMTXIBWIVVJYEQRZVSTZCPFMKWEKJWRRGR");

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
    msg.setTimeStamp(0.0786067084498);
    msg.setSource(50985U);
    msg.setSourceEntity(88U);
    msg.setDestination(59696U);
    msg.setDestinationEntity(65U);
    msg.name.assign("YNZDVGTCXWGGRVZRTGADDFOTUHLCQYTMDHMIBYPXCNXDRBNCAZOUJVLMXNTKWKIONKYVPPGCDCPXHJSLZLZDJOCBAIDEBNSQJWKUXOVGYYQEIEVPBSUFAFFWQROEKZWRQBRSE");
    msg.value.assign("GNCREQEDPFEIDHNDSAEYTZALPZHZGMCIA");

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
    msg.setTimeStamp(0.676646364917);
    msg.setSource(62569U);
    msg.setSourceEntity(64U);
    msg.setDestination(10341U);
    msg.setDestinationEntity(220U);
    msg.name.assign("DKOJWRBTEVEFJHR");

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
    msg.setTimeStamp(0.779880556373);
    msg.setSource(16286U);
    msg.setSourceEntity(34U);
    msg.setDestination(3134U);
    msg.setDestinationEntity(54U);
    msg.name.assign("MOFNDFBOMIRGYQYTYLZAJXEBZPTCSLBYBPGRLXHSITWRMVNSNJGGUQEPPKTMYGFKCSBNRQERIQAGZFJQIIKGETOCZMWAUNXOEURPRXZOHSHEOWIKHFFAYEWNWTLXEKYOBDHKWLALYYGUJIHZJMBLHTHXKAJDJQHSODUVVCZWMLKFVXAZPYTRSKGHVTBDEPMDAJMCBUUVXUIVPUDATCCLSKFIQCQFSRNDQNVEPXZQJJOMDNWLZACDG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LOUBNXIKILIFXCZYXNQMLSPYGFJCDQQUMDISBWCAKDQNJTIMPJHBLKJNGNUOOHHBTYVMITVEYDURWEDKCGPUZTYFTCNZTZGOLBQZWLJAB");
    tmp_msg_0.value.assign("HCQYSMNWZFWMMKRSDHTNOZDXCEUYYITM");
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
    msg.setTimeStamp(0.0159461959787);
    msg.setSource(56318U);
    msg.setSourceEntity(155U);
    msg.setDestination(25223U);
    msg.setDestinationEntity(13U);
    msg.name.assign("WFBKUZZHAMYXIGJJLPHAWIXAJRDCQTXWNSBSNUFSQUGBCPOPQZXGXJKDMFNJNGILMLKJHYCJNBLSXBETZPHPREQJEXXTTDZZYHWDIMFPMTWPEBAXNVEOINFKMGAEKIPDBCACTWYFUTJCSLUVOUFMHOYSEPRKVADFQWFY");

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
    msg.setTimeStamp(0.911012505338);
    msg.setSource(48384U);
    msg.setSourceEntity(174U);
    msg.setDestination(2064U);
    msg.setDestinationEntity(23U);
    msg.name.assign("MWCLSTDNWUILYBNFCGENMQZJGJUBYKUOQHTXRKJYPJGCZDUSBTHNYNMRYT");
    msg.visibility.assign("UPHUUPSWNXGNIPYCRDZSINGZLMNAOQCZQYESMUBKQEUXBONPGISQDPOXMYDOQUKFHJAVXECFKAOHZZFCXXDPTJHEUOERJJBFDOSKRFLIBOBAEIYHITUWZNRFGSDIRCFVTMBCMPYLWXFZYTVRGRVTEKDCILMTYGGKVAPATYCLWTKFOHUAMAEQVEGYQJTDUXMRTCNOAQIXYNZJQBJXZSSLVHCZV");
    msg.scope.assign("BLMZJKOGZXFGDOXTQBHQMBALADRSNQSNNZOPLXYAVYNVUSWEPSQIRANFUHYZBQCDDMEZREUVSMMSLREHXGWLGPKRNUFJWTYLSSUYWXPOPUHEFJOXYKNCATFZQLAZJJKITIWBF");

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
    msg.setTimeStamp(0.720507578147);
    msg.setSource(17374U);
    msg.setSourceEntity(176U);
    msg.setDestination(2591U);
    msg.setDestinationEntity(88U);
    msg.name.assign("PSJBXOFXUQWHIKXPTOIFXLQEQZSPYXGGLUARRSQVQUZHYDVGESGHMTWTQCOGNNCJDJ");
    msg.visibility.assign("KRIYVIWBILYMOOVSGBEZFBEPUWCIXHANTFHZLWUYBGQGJQYTWKEAJFANFGLLPBRUEEAA");
    msg.scope.assign("MZXJKNOSODQNHLYFRRGWHRVNTODDLUCQURFDBXKAMRQEXMJAWWTQPTUBGWHIZGHDSVQISRMZKBNXWRGNXNVCZTDQNSZWBCWKXJVSLEZFEOTZARTXKULKPFUFSLCPCYPUTMJWKVGCFYSEAUENMX");

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
    msg.setTimeStamp(0.513220465691);
    msg.setSource(63634U);
    msg.setSourceEntity(15U);
    msg.setDestination(17842U);
    msg.setDestinationEntity(234U);
    msg.name.assign("YNYNQDTDGTRVRALMIUDNZMFCZFURSROTDXFHYOQGGNNJEWQYMTCGGGCBSQWTZFLEPIHXLOTXKUKZDVJCBYAXAHDFSPELLXQKPVR");
    msg.visibility.assign("EEKSREUWVGJQFXZNYJUAMLPORNWADIXGXCBGAANRCWFWPVZWBUYTBSWYPCRBDXCFJUFJURGZJDAMEWPTQGXDZJNIXHETINYKRITQBIROKLPOAFKIAVHQCJDHCUCSNEVSYOHSGTAQMQFOVKGVBKLBPTGMCRDDSBGYOPWKILKSJXTLEJLKFJVOZGIVEAZQOQYFQXMHPVSUIMQZFDESTUVNLZXYIFXZNZRMWPSMNRUTW");
    msg.scope.assign("BNHFPUKWFWKIHNLAGWYCPGJEVNTROYDIHMBVYAIKCOZQRTLAGKJKZVZORQUSABFWPXARMYFNCPPEUXXQUXHMJZCNDJDFSKNQJYDLPQLMQFQZREYIQ");

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
    msg.setTimeStamp(0.554881771357);
    msg.setSource(53809U);
    msg.setSourceEntity(43U);
    msg.setDestination(3602U);
    msg.setDestinationEntity(89U);
    msg.name.assign("THMHBWOYNPQEBXAKRGUHFWVSNCVRYBGMIFJCHOCNKVXNBRWMOTQTVGFNODRUVWQYGFNGNTPEXEQIDMOENDJAEFVXUXESOMIYYKRDBRQLJIHSMSVIUAESAFEJVIUPXQAUBOZDYMTWZFCEZRGZPJCCUZHPLDZLNCLZSLSYJHZDOBIYPOKWBLLXJTXHQQUBIJMILPDGZLTYFHARVWAPMLDETKSQPTKJ");

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
    msg.setTimeStamp(0.0473692014411);
    msg.setSource(21966U);
    msg.setSourceEntity(186U);
    msg.setDestination(16776U);
    msg.setDestinationEntity(83U);
    msg.name.assign("GSFEQQVCMCWMMOUVAWJAOSJOPIRSSQRVSGLWPNNXIGHZPPGNWWCBBFDOOFAUQKWHIKZUIFSIJYDJYZTGIQEIFDHYFVUVCCBPTTYUXFLRLECYFZHKRMQDLZRGELXABDGDXAVZLPEBPSWBJXCKVTEESKEMOUXDYPACBMDIXJJHPRZMHYTGAREEMOROSRQBSNJMYCUUBUWNYTVLWBXFIXTGAUANCVNHYAQOFOIKPTMKZHRWK");

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
    msg.setTimeStamp(0.213336142656);
    msg.setSource(31099U);
    msg.setSourceEntity(175U);
    msg.setDestination(36649U);
    msg.setDestinationEntity(34U);
    msg.name.assign("JAQZYCUCEEPW");

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
    msg.setTimeStamp(0.874303838536);
    msg.setSource(14020U);
    msg.setSourceEntity(133U);
    msg.setDestination(58340U);
    msg.setDestinationEntity(50U);
    msg.name.assign("MSZUZAFUMCSIQTGDCSMLYBPIBWQCOGWLLPYFWOTFQCZISGZUENAOHKOUREPYMDEAAYFDQSVFDHFNVCJZVFSISGRRTFJKOGCPUSDNBXJDVBBQWFBEZEDMIJNYBZYOXKAAPVWZIUJBTTHPLTLMTUHHWBLXRSJXENHQHIJMMPCWEQOQEIVMPGULSRQXEVX");

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
    msg.setTimeStamp(0.10796353367);
    msg.setSource(30805U);
    msg.setSourceEntity(229U);
    msg.setDestination(33165U);
    msg.setDestinationEntity(220U);
    msg.name.assign("RCUJFPZXBCNVMWEUCCKIGVNTPZUJPAVRFRBHHXRNKNMKVODMCYFHSLDIOOKRSQZPGVILYFZQUPCVCTJLLQXMVSZMRYYKNDSJGBNPALRBOGUFPWWAMMSFYRWXMRJULFTVFWCOLMNQUWGTXY");

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
    msg.setTimeStamp(0.9747425414);
    msg.setSource(18510U);
    msg.setSourceEntity(154U);
    msg.setDestination(44968U);
    msg.setDestinationEntity(235U);
    msg.name.assign("TMPQORAZZWWTCRPXJGLSROKFTJERDBHTHNJYRCNSTSRLRYXPHUDXMVVEJNAGEIQGDBPTCVUXINEHVDWZOZSMRMFYUIISWCNFJIXDQUADYTMMLGQUMPCUNREAXKDNKHDYEYNSNUVMJJCZKVLVBFGOWNABVHLSVKSSKFGBEZOXTDWKXCOPPOQOBIQIXPBQLWMACFKWYAHLUEFIMPOYWKQAUTCIGQBFSJGZC");

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
    msg.setTimeStamp(0.319136488882);
    msg.setSource(21694U);
    msg.setSourceEntity(110U);
    msg.setDestination(42418U);
    msg.setDestinationEntity(97U);
    msg.timeout = 1562116611U;

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
    msg.setTimeStamp(0.530329152142);
    msg.setSource(59142U);
    msg.setSourceEntity(30U);
    msg.setDestination(19018U);
    msg.setDestinationEntity(90U);
    msg.timeout = 2664085300U;

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
    msg.setTimeStamp(0.100744412961);
    msg.setSource(12807U);
    msg.setSourceEntity(143U);
    msg.setDestination(10275U);
    msg.setDestinationEntity(187U);
    msg.timeout = 3506331218U;

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
    msg.setTimeStamp(0.849167984197);
    msg.setSource(31724U);
    msg.setSourceEntity(99U);
    msg.setDestination(65120U);
    msg.setDestinationEntity(132U);
    msg.sessid = 61043201U;

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
    msg.setTimeStamp(0.414495371976);
    msg.setSource(11761U);
    msg.setSourceEntity(246U);
    msg.setDestination(64897U);
    msg.setDestinationEntity(19U);
    msg.sessid = 1399409425U;

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
    msg.setTimeStamp(0.246125032044);
    msg.setSource(51654U);
    msg.setSourceEntity(89U);
    msg.setDestination(57843U);
    msg.setDestinationEntity(134U);
    msg.sessid = 3162088569U;

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
    msg.setTimeStamp(0.913477475766);
    msg.setSource(45986U);
    msg.setSourceEntity(132U);
    msg.setDestination(13879U);
    msg.setDestinationEntity(128U);
    msg.sessid = 614268966U;
    msg.messages.assign("UEMCUTQOODHYMVIZZBUVBCUGNAXDEDJZFYTNZUJKQDFJJFODVEYJXNPHRMHUEVMRETSHCPBAKRJZXTJKPUWEHVSBHESAGHCVZSKQHNIHCALQSULXGZLKIDBQNEYLLOIADNWCNOJTVXQYWWCKFGQPYYNYJTCIKAGWDZYAWGGKYPXFZOIOWQTRPEKMXTBIHVSRPCWBTMBUMSRDK");

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
    msg.setTimeStamp(0.259591838419);
    msg.setSource(57858U);
    msg.setSourceEntity(109U);
    msg.setDestination(36632U);
    msg.setDestinationEntity(147U);
    msg.sessid = 3211207989U;
    msg.messages.assign("LQQYMCWYCPEZRCMHQCZTIMIJLJILJAHYKVIZXVFFUOTRCUSLCZABEVNLDOMUVFGTEJDWDGKUGLZFBGJKINOSNRLZTVGBYAQZPFTYEUHSAMJDBWIOTXKOXLCKCHVRRNVDRQ");

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
    msg.setTimeStamp(0.886424524065);
    msg.setSource(49367U);
    msg.setSourceEntity(162U);
    msg.setDestination(55356U);
    msg.setDestinationEntity(79U);
    msg.sessid = 2741693108U;
    msg.messages.assign("IDEUWHSCFOPWPGBUYQDRSJQFAG");

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
    msg.setTimeStamp(0.35017501854);
    msg.setSource(3820U);
    msg.setSourceEntity(2U);
    msg.setDestination(56504U);
    msg.setDestinationEntity(19U);
    msg.sessid = 3644439369U;

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
    msg.setTimeStamp(0.178451844664);
    msg.setSource(35989U);
    msg.setSourceEntity(209U);
    msg.setDestination(38185U);
    msg.setDestinationEntity(140U);
    msg.sessid = 1368519877U;

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
    msg.setTimeStamp(0.0481325441792);
    msg.setSource(451U);
    msg.setSourceEntity(21U);
    msg.setDestination(37857U);
    msg.setDestinationEntity(81U);
    msg.sessid = 3415685277U;

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
    msg.setTimeStamp(0.308181326927);
    msg.setSource(36606U);
    msg.setSourceEntity(149U);
    msg.setDestination(48688U);
    msg.setDestinationEntity(14U);
    msg.sessid = 1754032947U;
    msg.status = 49U;

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
    msg.setTimeStamp(0.166957336162);
    msg.setSource(29073U);
    msg.setSourceEntity(245U);
    msg.setDestination(21385U);
    msg.setDestinationEntity(166U);
    msg.sessid = 1882633075U;
    msg.status = 235U;

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
    msg.setTimeStamp(0.973994004103);
    msg.setSource(20099U);
    msg.setSourceEntity(41U);
    msg.setDestination(51984U);
    msg.setDestinationEntity(30U);
    msg.sessid = 2705101242U;
    msg.status = 149U;

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
    msg.setTimeStamp(0.568038310511);
    msg.setSource(3959U);
    msg.setSourceEntity(213U);
    msg.setDestination(32839U);
    msg.setDestinationEntity(162U);
    msg.name.assign("EWHAILBQKFWRVXAWYMKEROBXDTJQRKKCZPIATCDJSGXKIYXUQJRGBLOZYUCHJHNUNVNNRETYFGUKZIYPYEXLJBXELAOVZZBMTYRDEUVIKOODPLQQNMCSQUDCJFTFI");

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
    msg.setTimeStamp(0.438883273066);
    msg.setSource(32701U);
    msg.setSourceEntity(32U);
    msg.setDestination(39263U);
    msg.setDestinationEntity(204U);
    msg.name.assign("ABEYVVESNE");

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
    msg.setTimeStamp(0.635590772739);
    msg.setSource(56038U);
    msg.setSourceEntity(58U);
    msg.setDestination(25302U);
    msg.setDestinationEntity(47U);
    msg.name.assign("BPALCBHTZNW");

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
    msg.setTimeStamp(0.0844063879719);
    msg.setSource(30721U);
    msg.setSourceEntity(52U);
    msg.setDestination(50550U);
    msg.setDestinationEntity(183U);
    msg.name.assign("BCDVRFVZQOBZLHSDWAAHKPCKTKIGJNJUFGCDPCEYRTFUNNCQPRUIVOMBXOIPLCRHYEBNCXRHZEOAGSMU");

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
    msg.setTimeStamp(0.340881850476);
    msg.setSource(39269U);
    msg.setSourceEntity(143U);
    msg.setDestination(16607U);
    msg.setDestinationEntity(21U);
    msg.name.assign("DUYYFRVTPZJMGPXCHUAQIQAZUJXUCAVKCDMLBDJPGHUUNOAMMMYKOILAVJIESIMXOHGPHUXONYZFVIJT");

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
    msg.setTimeStamp(0.690560694265);
    msg.setSource(21101U);
    msg.setSourceEntity(148U);
    msg.setDestination(38999U);
    msg.setDestinationEntity(21U);
    msg.name.assign("UNZBALFYBICGXIZQETWOEQPJWABYYJJNSGVLREMEUOLPHRTQHSJPGDJHSTYXXYHIRARFVWMTQAYHDFUEXZQTFHOMPJYLZPBWBDFSIKKVDGILHGVXTYVXKDLKZCSSIFANRHNOAQFSZRVNOYJZUTCKWVROMKURENUPDCFBXGMZODEMMIUHXVLMACZIUQYJWUCSDZITKWNPGFAOVXIEWFGGQNNPLEWEMR");

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
    msg.setTimeStamp(0.36578703655);
    msg.setSource(8514U);
    msg.setSourceEntity(140U);
    msg.setDestination(7890U);
    msg.setDestinationEntity(151U);
    msg.type = 197U;
    msg.error.assign("DVUCOQNMQUDXBOIYZTQJPHBTYKOBPJRZPTXKWAUBUECAVAHMOOAIQHWJNAJKUYRKCDQPJRMICIHWSLFKQFQFDNEPWHQTVDVVOFPQGZZONVFZDXICHRNVSEBJUXMAGJWYZYXPRZCGSPIGBCLUMODITTYWVGXLBONXVRJEZLKWPZKGHMBXCZTKINFYSLSYSLRDTRWMHDEIPWGTAFJNKUEMMIJCDAVBFFCFLNXSGRLSEKUEQLWLEB");

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
    msg.setTimeStamp(0.453313290341);
    msg.setSource(16374U);
    msg.setSourceEntity(200U);
    msg.setDestination(2284U);
    msg.setDestinationEntity(167U);
    msg.type = 77U;
    msg.error.assign("ORQQSUXDYIRVAXQJNOHEQXSQHZATJXGCVRUUQIWLATPIVPVKEWOJDLHLIYQJZDWEDFSHSBLBJKRHUGRYVJXIRUFUFVCKIMQWOPDCYBPKNFNGJGYOOTPVYASCKWHMKRVVMNTZJMXZTZKCZEZFSBCTEFYQLSCZDLSFYSOCMKETOHZFAAPXJUABMYMEGDKFLCXCPUBHGWONSBEIQLOALVUXUERNRGGGTI");

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
    msg.setTimeStamp(0.424763501438);
    msg.setSource(40079U);
    msg.setSourceEntity(222U);
    msg.setDestination(41815U);
    msg.setDestinationEntity(236U);
    msg.type = 141U;
    msg.error.assign("JEXDDTLPPTVGARY");

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
    msg.setTimeStamp(0.597774495242);
    msg.setSource(48005U);
    msg.setSourceEntity(162U);
    msg.setDestination(43798U);
    msg.setDestinationEntity(213U);
    msg.seq = 37486U;
    msg.sys_dst.assign("EAQFKBIHMHKBJIJSGLKNIHXQPGKGLBQDDIJVVAFGMCQGFTTFHOKKWDBZDYMMCZGMYLOGLJJSQGTQAPUOFAHVAWBJFDCDOWUINVEMTAWBHXUOVCDIYZBASKPLRNZEFPNWZPEA");
    msg.flags = 197U;
    const char tmp_msg_0[] = {107, -10, -53, -62, -61, 73, -87, -108, -120, -91, -69, -33, -57, -50, 102, -75, -123, -12, -52, -98, -96, -47, -90, 81, 75, -88, -98, -109, 120, 1, 35, 13, -86, -65, -101, 1, 112, -118, 89, -106, 70, 14, -56, 21, 88, -88, -27, 94, 125, -58, 60, -83, -17, -2, 23, -86, 58, -19, -49, -111, -15, 21, 0, -86, -107, -76, 116, 56, 3, 61, 70, -73, 79, -45, 16, -119, -18, -83, -78, 14, 97, -104, 102, -58, 113, -32, -33, -126, -75, -82, 80, 108, -59, -75, 68, -27, 41, -100, -10, 43, 13, -59, 97, -125, 45, 49, 59, 21, -55, -34, 121, 77, -77, 18, -37, -50, -6, 99, 66, -26, -93, 3, 16, 82, 59, 73, 81, -85, 66, -58, -26, -58, -113, 6, -47, -112, 38, -59, 85, -65, 53, -70, -62, 40, 27, 58, -14, 44, 58, -51, -117, 96, 64, 65, -95, 16, 106, 122, 40, -96, 98, 62, 0, -25, -10, -116, 110, 22, -86, -96, -30, 65, -44, 114, 35, -1, 85, 63, -112, -68, 107, 12, -77, 106, -87, -12, -5, 18, -79, -28, 84, 109, 98, 39, 80, 125, 6, -66, -79, 83, -120, -31, 78, 103, 17, -6, 115, -4, -31, 105, 61, 53, -25, 47, 32, 97, 20, -4, -93, 24, -34, -57, 104, 43, 65, -23, 81, -113, 55, -77, -69, -99, -89, -15, 78, -63, 113};
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
    msg.setTimeStamp(0.332753347402);
    msg.setSource(10058U);
    msg.setSourceEntity(240U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(101U);
    msg.seq = 62976U;
    msg.sys_dst.assign("LPUJZOUKNLNACOYUAMMXLTFFZRMPVXCHEPJLGQYNRBGJXHBQWTYZGPBJIDGLDNZVCEKOJEOBHNKVZYWFIRBSPUFATAVEXPHJSLTHXISDKOSWGQJI");
    msg.flags = 189U;
    const char tmp_msg_0[] = {60, 43, 54, -80, 96, -105, 27, -62, 66, -127, -128, 28, -19, -32, 94, -99, -17, -10, -122, 100, -121, 65, -125, 19, 49, 18, 42, -98, 88, 19, -96, 38, -90, 100, -24, -99, -30, 2, 73, -9, 26, 88, 24, -122, 36, -7, 112, 17, 112, 24, -75, 116, 98, -7, 122, -63, -5, -25, -111, -75, -78, -90, -1, -93, 73, 30, 113, -42, -8, 46, -18, -37, -12, 89, 59, -70, 41, 111, 80, -31, -15, -9, -11, -67, 28, 110, 76, 115, 45, -97, -51, 21, 33, -122, 93, 120, -82, 125, 12, -98, 29, -120, -40, 94, 74, -54, 39, 37, -125, 69, -92, 32, 108, -15, -68, 48, -88, -105, -17, -1, 110, -31, -126, 85, 46, 111, 68, 14, -116, -124, -17, 15, -24, 43, 37, -117, 92, -95, -102, 88, -11, 67, 16, -109, -61, 28, -73, 67, 66, -23, 23, -69, -52, -51, -111, 33, 42, -70, 79, 40, 80, -101, -88, 96, -84, -5, 105, -10, -14, 104, -56, -36, -83, 31, 32, 55, 50, -122, 118, 81, -69, -50, -97, -13, 27, 8, 95, 60, -40, 97, 32, -88, -91, 73, -67, 118, -4, 69, 51, -70, 46, -32, -120, -32, 36, -87, 84, 20, 1, -95, 77, 52, -7, -87, 51, -109, -67, 112, -78, 13, -24, 40, -60, 96, -62, 36, -128, 89, -62, 124, 58, 36, 75, 109, 122, 16, 99, -114, -25, 111, -80, -98, 25, 47, 97, 61};
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
    msg.setTimeStamp(0.479630116953);
    msg.setSource(21977U);
    msg.setSourceEntity(215U);
    msg.setDestination(38962U);
    msg.setDestinationEntity(149U);
    msg.seq = 7131U;
    msg.sys_dst.assign("NCTSELQOHCIZ");
    msg.flags = 94U;
    const char tmp_msg_0[] = {83, 51, -104, 110, 96, -112, -112, 37, -19, 68, 32, 114, 84, -36, -36, 75, 25, 13, -67, -123, 1, -8, -47, 83, -84, 70, 62, -108, -105, 101, 82, -6, 111, 5, -110, -100, -99, 116, 44, -102, 41, 13, -101, -90, 111, 62, 2, -4, 122, 22, -83, -8, 9, -109, -105, -101, 103, -101, 90, -32, 120, -3, 9, -106, -109, -37, -38, -11, -29, -128, -121, 59, -7, 23, 120, 126, -55, 114, 63, -109, 89, 73, -61, 92, 6, 88, 41, 45, -110, 54, -76, -85, -54, -86, -109, 111, 1, -123, -125, -37, -98, 92, -11, -8, -73, 93, 39, -77, 62, -22, -62, 38, -28, -111, -37, 88, 19, 104, 34, 30, 105, 64, 72, 107, -51, -70, -93, -100, -89, -104, -6, -96, 81, -100, -17, -1, 23, -97, 97, 58, 98, -52, 117, -107, -13, 60, 59, -56, -26, -70, -14, -86, -36, -95, 9, 92, 59, -17, -60, 103, -101, -27};
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
    msg.setTimeStamp(0.340056267488);
    msg.setSource(12233U);
    msg.setSourceEntity(61U);
    msg.setDestination(57894U);
    msg.setDestinationEntity(239U);
    msg.sys_src.assign("UYABLOVJTSRHLHZWKAGUJLWNDUJXPWBPPNLSZVHPOJTYOIUBYTQNSYMIEUJMNWGZVIMKTDVYKIMBKXPXKYERR");
    msg.sys_dst.assign("KFHOOCYXZPUWARKZUTHVKXFWQEPJEBGNSIPXCTXCXKMRDSFUTZBVTWLFGILGKJTGGKEHWJOOFUZUSADBEDUAARIGNLFAIYVXTNDDCMYMSWHTDNNZJIXOKJKQSRVGHODTBPYBQWAHIRZQOKDZBNNYSWQFEWARRLB");
    msg.flags = 22U;
    const char tmp_msg_0[] = {81, 68, 53, -64, 118, -64, -36, -17, 84, 93, -54, -40, 122, 100, 100, -37, 14, 95, 47, 107, 50, 68, 100, 85, 44, -1, -40, -38, 8, -14, -109, 110, -1, -71, -47, -127, 32, -114, -19, -11, 47, 37, -104, 23, -17, -109, 48, 28, -36, 17, 93, 62, 30, 77, -115, 18, -12, -91, 74, 113, -56, -17, -99, 83, 91, 6, 113, -36, 98, -33, -82, 111, -2, 17, 41, -114, 47, 65, 18, -46, -83, -110, -57, -42, -118, -3, -125, -71, -53, 107, -32, -92, 16, -47, -118, -18, -92, -84, 19, -114, 26, 103, 118, 126, 71, -95, 62, 59, 59, 70, -92, 24, -62, 115, 101, 124, -54, -122, 64, -4, 109, -7, -44, 64, 96, 16, 108, 4, 96, 63, -90, 104, -85, -99, -3, -5, 102, -32, 75, -21, 73, -5, 19, 42, -118, 53, -62, -61, -111, -26, -54, 54, 80, 5, -46, -111, 18, 74, -47, -40, -30, 0, 95, -127, -73, -40, -11, -27, -103, 118, -62, 91, -112, 101, -126, 49, 59, -96, -17, 93, 67, 68, -9, 100, -94, 109, -31, 81, -50, -88, 54, 28, -118, 69, 124, -75, -73, -99, 38, -46, 95, 13, -116, 61, -27, -98, 37, 35, 5, 9, 23, -108, -103, -60, 26, -34, -30, -7, 44, 115, 108, -49, 5, -82, -122, -112, -7, -26, 44, 61, -32, 124, 37, 35, -110, 114, -84, 125, 12, -124, 106, -28, 56, -41, -81, -48, 113, -87, -1, -43, 64, -13, 113};
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
    msg.setTimeStamp(0.405379509303);
    msg.setSource(23523U);
    msg.setSourceEntity(77U);
    msg.setDestination(17953U);
    msg.setDestinationEntity(171U);
    msg.sys_src.assign("PVDHJOCJHTSCONYLNLDWXGKVUKBKSVLUUAWYPNHUVKNZJVGBFJOGFJWWKOKIGFEAXZZFYNQDARGXSIKVSUIQDMRCQTCJFISKINATOFQWBLYATARJMXUBRLPXZBVDZYXMUODIIIANXOPFKUDDAFMGNSMEGREWVLTOPZQTZGCBPERPHW");
    msg.sys_dst.assign("JWLBMMZEOYCAHHMFIBRRDBGBQZYAQSGMHAE");
    msg.flags = 181U;
    const char tmp_msg_0[] = {2, 68, -112, 28, 50, 21, -61, 95, 9, 56, 25, -101};
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
    msg.setTimeStamp(0.023911563756);
    msg.setSource(30475U);
    msg.setSourceEntity(19U);
    msg.setDestination(50052U);
    msg.setDestinationEntity(187U);
    msg.sys_src.assign("OFHVTEHKQQULFTEDVXBZJMENSUMTQXKWNIBHYKSFCHWJOHCVOSYSXFLMYTJPOTVQPATGEEKEBPAGPRDEAQNODOOCRFWCJGLICIDWFJLRWURGKCVUTIBNKAKGLTWMXRUSQBYPJGNNSHYPYBUNDJKHFYVYHRXGEEZLQCZZIJODRSFKJCUZNXPMILFQCSQOMVMUHBNRB");
    msg.sys_dst.assign("MFCYRXDWJUJGCLAQVGXUQTMULZZBJLKNYOJCIDXOBJSDDXABWWMGTFPKHFNXJXFRBUBFLPPESPIYHREVXIIRVYPX");
    msg.flags = 221U;
    const char tmp_msg_0[] = {123, 52, 43, 116, 5, -101, 35, 60, 106, -11, 83, 25, 74, -97, 7, -125, -78, 114, 9, -91, -72, 7, -30, 35, 94, 88, 6, 5, 66, 36, 100, -60, 114, 29, -91, 77, -112, -85, 77, 98, 15, -76, -7, 8, 22, -112, -69, 37, 57, 73, -50, -128, -26, 92, 126, 114, -83, 78, -58, 75, 113, 9, -26, 119, -36, 123, 1, -113, -75, 69, -99, -59, -2, 126, -78, -1, -18, -105, 20, -71, -78, -85, 53, -81, -111, -104, -123, 37, -78, 86, -43, 70, -43, 1, 44, 47, -94, 68, -68, 16, 59, -110, -28, -83, -56, -124, -82, -21, 54, 48, -122, 81, 11, 18, 61, 45, -84, -94, 23, -125, 89, -12, -29, 115, -9, 61, -64, 25, 58, 115, 83, 99, 64, -29, -101, -59, -46, -62, 108, -4, 11};
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
    msg.setTimeStamp(0.467287005139);
    msg.setSource(50033U);
    msg.setSourceEntity(127U);
    msg.setDestination(8620U);
    msg.setDestinationEntity(224U);
    msg.seq = 308U;
    msg.value = 250U;
    msg.error.assign("TFRBHDUBLOXMWZVSWCSYGFRNQFXLWPUJEGAAEUBSAGGMZVPKQNTILKYIMUOYATPBXQLLMNEIORJQOFTFOQXUTZZOORPLEJOTNVRPHXAQWIZTCESMRSLQPGQFVVCINYIVKYJHXHYCNWKWEKBKSRCKHJWBRSABGLHQNKIMVSEAWFYVIATJDENSBDPDIHFMDFOJURHZXOGMUEZASDPNWHCBGQMZTCPMRDZCCPUJHJKJKLY");

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
    msg.setTimeStamp(0.319932010049);
    msg.setSource(57214U);
    msg.setSourceEntity(211U);
    msg.setDestination(15515U);
    msg.setDestinationEntity(21U);
    msg.seq = 14957U;
    msg.value = 48U;
    msg.error.assign("VZWPCOYHNVXUHUOSHFAEVUAZKHZQXFGYCA");

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
    msg.setTimeStamp(0.619544683849);
    msg.setSource(21905U);
    msg.setSourceEntity(177U);
    msg.setDestination(56806U);
    msg.setDestinationEntity(91U);
    msg.seq = 17440U;
    msg.value = 188U;
    msg.error.assign("DWOCJNCWSJQHCNCXYECVRQDSTGYTYEVMYLQFVRPZHEMDLFNAFMHTAWVPXWIPIEBIMWEFJNTGBAQFSRUVKOQAZNKGFRPEBVEWXIJPWSDFRICXBVNHIOCJXYWZUVSYSTLMDGYLSOSRFHRYZKAGNZSIHGGKJTQBJHMWHTEKVDOPQO");

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
    msg.setTimeStamp(0.77229143286);
    msg.setSource(42381U);
    msg.setSourceEntity(67U);
    msg.setDestination(37310U);
    msg.setDestinationEntity(189U);
    msg.seq = 28529U;
    msg.sys.assign("XURXILHQKPHDEMWNQMZXIZLIQLHOTYUMZIXGCZEMOIEVQSGHRMXBPDXYZPXWRUIFEFPGMBEDTIQNCXFZCKLFYYFUJOWWVRPHRSMRGGACJKDAOGJCHUYMGKSREOQDJKWZVAZYVUASNCTYHHLSOALBFVDTMVANOSJLMRKK");
    msg.value = 0.545519503839;

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
    msg.setTimeStamp(0.486659051178);
    msg.setSource(65514U);
    msg.setSourceEntity(244U);
    msg.setDestination(31398U);
    msg.setDestinationEntity(13U);
    msg.seq = 41499U;
    msg.sys.assign("WTMMVGPLRHTQCYHRHQEPAAHBYBXGGETFVZSISDFJWOCJOXXMXOWIWNCPNEMTHYJJEQZGPDVCWUOSNXGAKEMJBQDFYCSGDVZ");
    msg.value = 0.610076393797;

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
    msg.setTimeStamp(0.184381140934);
    msg.setSource(20567U);
    msg.setSourceEntity(85U);
    msg.setDestination(48908U);
    msg.setDestinationEntity(173U);
    msg.seq = 34668U;
    msg.sys.assign("ALVTSPEQERVFHMWOYZPZHAHEHDLPCXYOIAE");
    msg.value = 0.855453984902;

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
    msg.setTimeStamp(0.112094193401);
    msg.setSource(12927U);
    msg.setSourceEntity(183U);
    msg.setDestination(52488U);
    msg.setDestinationEntity(113U);
    msg.action = 232U;
    msg.longain = 0.550036180144;
    msg.latgain = 0.508607480547;
    msg.bondthick = 723233402U;
    msg.leadgain = 0.652513298526;
    msg.deconflgain = 0.13686801538;

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
    msg.setTimeStamp(0.412682972073);
    msg.setSource(27630U);
    msg.setSourceEntity(252U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(14U);
    msg.action = 190U;
    msg.longain = 0.350974500591;
    msg.latgain = 0.230833926345;
    msg.bondthick = 3003893865U;
    msg.leadgain = 0.387445076042;
    msg.deconflgain = 0.401983969871;

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
    msg.setTimeStamp(0.920709304801);
    msg.setSource(13658U);
    msg.setSourceEntity(65U);
    msg.setDestination(12446U);
    msg.setDestinationEntity(181U);
    msg.action = 112U;
    msg.longain = 0.558684825719;
    msg.latgain = 0.0475789805375;
    msg.bondthick = 3910107799U;
    msg.leadgain = 0.100787271517;
    msg.deconflgain = 0.622550639092;

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
    msg.setTimeStamp(0.321154620985);
    msg.setSource(5641U);
    msg.setSourceEntity(65U);
    msg.setDestination(54499U);
    msg.setDestinationEntity(91U);
    msg.err_mean = 0.819547099706;
    msg.dist_min_abs = 0.192424443741;
    msg.dist_min_mean = 0.395965587224;

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
    msg.setTimeStamp(0.886765455883);
    msg.setSource(53031U);
    msg.setSourceEntity(41U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(30U);
    msg.err_mean = 0.182896562537;
    msg.dist_min_abs = 0.918247931268;
    msg.dist_min_mean = 0.0858410330563;

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
    msg.setTimeStamp(0.726931183339);
    msg.setSource(1672U);
    msg.setSourceEntity(204U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(251U);
    msg.err_mean = 0.114602461794;
    msg.dist_min_abs = 0.096002566687;
    msg.dist_min_mean = 0.280078698808;

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
    msg.setTimeStamp(0.889339611051);
    msg.setSource(57413U);
    msg.setSourceEntity(33U);
    msg.setDestination(37505U);
    msg.setDestinationEntity(253U);
    msg.action = 165U;
    msg.lon_gain = 0.542232520247;
    msg.lat_gain = 0.294151675674;
    msg.bond_thick = 0.610750599684;
    msg.lead_gain = 0.547446660388;
    msg.deconfl_gain = 0.195156660161;
    msg.accel_switch_gain = 0.885512280888;
    msg.safe_dist = 0.186950332299;
    msg.deconflict_offset = 0.666695763712;
    msg.accel_safe_margin = 0.542687455089;
    msg.accel_lim_x = 0.654368463552;

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
    msg.setTimeStamp(0.111966752147);
    msg.setSource(5864U);
    msg.setSourceEntity(94U);
    msg.setDestination(10934U);
    msg.setDestinationEntity(140U);
    msg.action = 14U;
    msg.lon_gain = 0.311266641402;
    msg.lat_gain = 0.912977227083;
    msg.bond_thick = 0.822225455776;
    msg.lead_gain = 0.426589158323;
    msg.deconfl_gain = 0.824036233785;
    msg.accel_switch_gain = 0.452316322189;
    msg.safe_dist = 0.126146445615;
    msg.deconflict_offset = 0.391560484182;
    msg.accel_safe_margin = 0.315819362601;
    msg.accel_lim_x = 0.948154947853;

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
    msg.setTimeStamp(0.551997258524);
    msg.setSource(28053U);
    msg.setSourceEntity(94U);
    msg.setDestination(48233U);
    msg.setDestinationEntity(162U);
    msg.action = 167U;
    msg.lon_gain = 0.318303584253;
    msg.lat_gain = 0.0260208759835;
    msg.bond_thick = 0.25853418995;
    msg.lead_gain = 0.793297074757;
    msg.deconfl_gain = 0.925845928688;
    msg.accel_switch_gain = 0.153006025848;
    msg.safe_dist = 0.0727895312046;
    msg.deconflict_offset = 0.627290544986;
    msg.accel_safe_margin = 0.540622983742;
    msg.accel_lim_x = 0.398142954307;

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
    msg.setTimeStamp(0.631751818305);
    msg.setSource(17273U);
    msg.setSourceEntity(226U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(232U);
    msg.type = 130U;
    msg.op = 85U;
    msg.err_mean = 0.604180861675;
    msg.dist_min_abs = 0.345300368599;
    msg.dist_min_mean = 0.326790707439;
    msg.roll_rate_mean = 0.661808807137;
    msg.time = 0.167056359977;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 12U;
    tmp_msg_0.lon_gain = 0.0309905640878;
    tmp_msg_0.lat_gain = 0.666246072402;
    tmp_msg_0.bond_thick = 0.432395545426;
    tmp_msg_0.lead_gain = 0.36196586346;
    tmp_msg_0.deconfl_gain = 0.531556699843;
    tmp_msg_0.accel_switch_gain = 0.831934555495;
    tmp_msg_0.safe_dist = 0.86815931051;
    tmp_msg_0.deconflict_offset = 0.595245353473;
    tmp_msg_0.accel_safe_margin = 0.497294998976;
    tmp_msg_0.accel_lim_x = 0.629210388304;
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
    msg.setTimeStamp(0.649462004795);
    msg.setSource(54445U);
    msg.setSourceEntity(63U);
    msg.setDestination(60844U);
    msg.setDestinationEntity(215U);
    msg.type = 226U;
    msg.op = 68U;
    msg.err_mean = 0.481451470558;
    msg.dist_min_abs = 0.580758837527;
    msg.dist_min_mean = 0.0815023535975;
    msg.roll_rate_mean = 0.94990454875;
    msg.time = 0.034382071424;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 13U;
    tmp_msg_0.lon_gain = 0.640777695731;
    tmp_msg_0.lat_gain = 0.808417399931;
    tmp_msg_0.bond_thick = 0.515214048638;
    tmp_msg_0.lead_gain = 0.961090685876;
    tmp_msg_0.deconfl_gain = 0.601194488651;
    tmp_msg_0.accel_switch_gain = 0.909305344415;
    tmp_msg_0.safe_dist = 0.418697982328;
    tmp_msg_0.deconflict_offset = 0.178841657548;
    tmp_msg_0.accel_safe_margin = 0.983761665399;
    tmp_msg_0.accel_lim_x = 0.432276634725;
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
    msg.setTimeStamp(0.883031643941);
    msg.setSource(17261U);
    msg.setSourceEntity(106U);
    msg.setDestination(7943U);
    msg.setDestinationEntity(187U);
    msg.type = 148U;
    msg.op = 116U;
    msg.err_mean = 0.603657811634;
    msg.dist_min_abs = 0.925706374105;
    msg.dist_min_mean = 0.492728165127;
    msg.roll_rate_mean = 0.908648129461;
    msg.time = 0.317934838938;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 170U;
    tmp_msg_0.lon_gain = 0.851539502119;
    tmp_msg_0.lat_gain = 0.685007926108;
    tmp_msg_0.bond_thick = 0.866984795333;
    tmp_msg_0.lead_gain = 0.529371876959;
    tmp_msg_0.deconfl_gain = 0.224345543538;
    tmp_msg_0.accel_switch_gain = 0.691560971873;
    tmp_msg_0.safe_dist = 0.411808781615;
    tmp_msg_0.deconflict_offset = 0.422802002331;
    tmp_msg_0.accel_safe_margin = 0.521827181402;
    tmp_msg_0.accel_lim_x = 0.60829580221;
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
    msg.setTimeStamp(0.334011081771);
    msg.setSource(9110U);
    msg.setSourceEntity(205U);
    msg.setDestination(62676U);
    msg.setDestinationEntity(226U);
    msg.uid = 111U;
    msg.frag_number = 94U;
    msg.num_frags = 244U;
    const char tmp_msg_0[] = {-98, 84, -54, -90, -15, -103, 27, -90, -62, -15, -98, 76, 100, 108, -2, 56, 109, 48, -11, -64, 40, 1, -69, -44, 82, -87, -105, -98, -25, 0, -100, -60, -8, 120, 17, -52, 114, -24, -31, -124, -9, -112, -41, 76, 37, 69, -13, -59, -7, 46, -39, -51, 18, 27, -86, -120, 69, 57, 38, -102, 67, -11, 66, -21, -96, 79, 56, 106, 16, 107, -45, 69, -93, 44, 71, -21, -126, 103, 38, 121, 62, -22, -92, -69, 9, 1, 70, 115, 81, -34, -40, -51, 58, 11, -63, -78, 39, -104, -74, -95, -84, -34, 5, 50, -65, 67, -13, 75, -65, 106, 40, -60, -12, -56, -48, 20, -86, 38, -65, 18, -10, -89, 34, -26, -37, 24, -62, -46, 96, 77, 70, -91, 41, 94, 74, 22, 17, 48, 15, 23, -111, -108, 44, 71, 35, 75, -56, 21, 50, -29, -12, 63, 3, 61, -100, -126, -71, -72, -45, 99, 69, -31, 82, 24, -114, 68, -47, -11, -11, 125, 95, -21, 106, -103, 55, 32};
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
    msg.setTimeStamp(0.536633088273);
    msg.setSource(28561U);
    msg.setSourceEntity(166U);
    msg.setDestination(3959U);
    msg.setDestinationEntity(42U);
    msg.uid = 66U;
    msg.frag_number = 130U;
    msg.num_frags = 82U;
    const char tmp_msg_0[] = {-36, -62, -92, 26, -76, -112, -38, -41, 107, 21, -113, 44, -2, 22, -3, 111, -112, 22, -52, -56, -61, 69, -81, -120, 102, -11, 81, 43, 62, 29, 119, 79, 41, 75, 99, 37, 95, 79, -95, 103, -103, 59, 9, 122, 86, 110, -51, -27, 59, -63, -43, -42, 84, -97, -56, 64, -58, 23, -43, -56, -3, 13, -105, -26, -119, 71, -26, -104, -91, -19, -77, -56, 17, -125, -39, -92, 100, 84, 58, 71, -19, -94, 109, -120, 19, -104, 55, 42, 72, -10, 22, -124, -82, 11, -45, 49, -106, -81};
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
    msg.setTimeStamp(0.733801682177);
    msg.setSource(48337U);
    msg.setSourceEntity(104U);
    msg.setDestination(19468U);
    msg.setDestinationEntity(200U);
    msg.uid = 150U;
    msg.frag_number = 74U;
    msg.num_frags = 230U;
    const char tmp_msg_0[] = {-50, -62, 20, -66, -10, 62, 14, -77, -78, -18, -122, 116, -77, -61, 25, 56, 43, -84, 12, -124, 117, 126, -104, 66, 104, -103, 111, 48, 93, 108, 48, 118, 47, -60, -1, -94, -89, -70, -7, 9, -93, -47, -16, 72, 125, -39, -27, -116, -28, -127, -46, 89, 75, -45, -104, 64, 22, 36, 92, 41, 18, 3, 71, -43, -54, -23, -26, 3, -36, -49, -93, 28, 83, -7, -110, -90, 119, 12, 66, 108, -15, -24, 4, -101, 102, 73, 18, 2};
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
    msg.setTimeStamp(0.622668386869);
    msg.setSource(20604U);
    msg.setSourceEntity(253U);
    msg.setDestination(33457U);
    msg.setDestinationEntity(219U);
    msg.content_type.assign("PWCNFVYOHLDNYQFHWSSSUHGYMGKBFTTMRHJYUGHNPRADLPZMZDDNOOURKBEZNRDRSFXJLDPCTVKZQOGPYCISRRENUMYGAJYLWFBCSDBLJTNPWLFALPIASFHEXWXZNIRUCYOLMTSMJEQRTUCCABQYWQKMZVGDMXEAFIXKXUBEONVIDNDECZIVCOBUJLIHMWKPCQISIJKUOKJWGGHA");
    const char tmp_msg_0[] = {68, -115, 8, -1, 27, 88, 50, 19, -98, 97, 66, -38, -36, 94, 78, 98, -116, 28, -38, -85, -44, -22, 0, 95, -2, -74, 65};
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
    msg.setTimeStamp(0.964889492292);
    msg.setSource(18500U);
    msg.setSourceEntity(68U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(24U);
    msg.content_type.assign("WKALPHBMFTUYTYBOVLRDTAXOXJPDFGCSGSFPUIMPJAOCYQFMJOTQDEJSVASLWUFCLOYSBSRSMESTDCYFBNZIVQQJTXEHDHRGXNXNPWCJDAUCRZHOUEQDYGZWIFUTHEOICHPXQLMNRFGRBAEKV");
    const char tmp_msg_0[] = {32, 94, -1, -108, -64, 29, -51, 33, -4, 29, -64, 90, 28, 126, -89, -81, -112, 8, 42, 34, 13, 101, 56, -22, -40, 90, -121, 59, 35, 51, -90, -92, -121, 61, -49, -28, -98, -8, 51, 28, -22, 111, 117, -51, -42, -26, -8, -69, 25, 34, -39, 76, -102, 19, 39, -97, -111, 0, -64, 116, -53, -25, -50, -87, 91, -128, -70, -86, 111, 64, -7, -60, -126, -15, 45, 110, -25, -80, -100, 30, -124, -105, -53, 35, -99, 45, -112, -29, 68, -12};
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
    msg.setTimeStamp(0.862412229381);
    msg.setSource(53257U);
    msg.setSourceEntity(171U);
    msg.setDestination(58348U);
    msg.setDestinationEntity(182U);
    msg.content_type.assign("MYBRUHDYARXMVMANDCTUGSTYKWFCXOHPMLJOFKFQMUTLFSUTGLVRPJOBYXQAJZJUGDNTPREIQGXAUEFLMPLXEYHVESQTKAI");
    const char tmp_msg_0[] = {69, -118, -116, -22, 81, 42, -82, -10, 14, 81, 6, 84, -80, -40, 49, 126, -44, 41, -2, -65, -41, -19, -61, -122, 25, -100, 117, 59, 91, -113, -46, -9, -104, -22, 52, 48, 120, -87, -65, 108, -126, -1, 13, -86, 73, 76, 83, -33, 84, 62, 115, 89, 76, -78, -93, 30, -43, 117, -112, 20, 56, 73, 67, -117, -26, -64, 20, 104, -5, 73, -40, 79, -80, -8, 85, -126, -18, -17, -22, -37, -73, 6, -58, -14, 48, 20, -67, -63, 36, -82, -61, -7, -110, 120, -82, -123, 115, 76, 110, -88, -119, 123, -15, -78, 67, 95, -28, -81, -125, -94, 5, 41, -117, -32, -61, -80, -89, -106, 63, 55, -90, -1, 16, -128, -21, -18, -93, 56, -100, -30, 52, 58};
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
    msg.setTimeStamp(0.833023270508);
    msg.setSource(19452U);
    msg.setSourceEntity(146U);
    msg.setDestination(39674U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.940334810203);
    msg.setSource(5754U);
    msg.setSourceEntity(154U);
    msg.setDestination(29815U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.000684616780518);
    msg.setSource(4646U);
    msg.setSourceEntity(141U);
    msg.setDestination(16666U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.624309923624);
    msg.setSource(64966U);
    msg.setSourceEntity(78U);
    msg.setDestination(52999U);
    msg.setDestinationEntity(178U);
    msg.target = 21495U;
    msg.bearing = 0.106472070772;
    msg.elevation = 0.127352489079;

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
    msg.setTimeStamp(0.814231817559);
    msg.setSource(2416U);
    msg.setSourceEntity(52U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(225U);
    msg.target = 12459U;
    msg.bearing = 0.0343428534535;
    msg.elevation = 0.888698750537;

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
    msg.setTimeStamp(0.152298720478);
    msg.setSource(16107U);
    msg.setSourceEntity(34U);
    msg.setDestination(14210U);
    msg.setDestinationEntity(94U);
    msg.target = 15857U;
    msg.bearing = 0.468629361018;
    msg.elevation = 0.96083597563;

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
    msg.setTimeStamp(0.367058953286);
    msg.setSource(35813U);
    msg.setSourceEntity(90U);
    msg.setDestination(41583U);
    msg.setDestinationEntity(69U);
    msg.target = 34929U;
    msg.x = 0.173413465907;
    msg.y = 0.0121691324759;
    msg.z = 0.613463272337;

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
    msg.setTimeStamp(0.685076202927);
    msg.setSource(36169U);
    msg.setSourceEntity(236U);
    msg.setDestination(44212U);
    msg.setDestinationEntity(8U);
    msg.target = 58101U;
    msg.x = 0.527154883571;
    msg.y = 0.0461934835337;
    msg.z = 0.57073778538;

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
    msg.setTimeStamp(0.477421483439);
    msg.setSource(28073U);
    msg.setSourceEntity(156U);
    msg.setDestination(27393U);
    msg.setDestinationEntity(1U);
    msg.target = 37728U;
    msg.x = 0.581961207577;
    msg.y = 0.773680420853;
    msg.z = 0.585882743682;

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
    msg.setTimeStamp(0.463455208745);
    msg.setSource(15031U);
    msg.setSourceEntity(59U);
    msg.setDestination(64673U);
    msg.setDestinationEntity(32U);
    msg.target = 11787U;
    msg.lat = 0.187699994343;
    msg.lon = 0.330926891633;
    msg.z_units = 108U;
    msg.z = 0.114887103593;

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
    msg.setTimeStamp(0.639188213829);
    msg.setSource(29343U);
    msg.setSourceEntity(175U);
    msg.setDestination(34330U);
    msg.setDestinationEntity(109U);
    msg.target = 45203U;
    msg.lat = 0.657275306457;
    msg.lon = 0.0540596493389;
    msg.z_units = 162U;
    msg.z = 0.503742658786;

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
    msg.setTimeStamp(0.489485589183);
    msg.setSource(34030U);
    msg.setSourceEntity(234U);
    msg.setDestination(39760U);
    msg.setDestinationEntity(138U);
    msg.target = 55525U;
    msg.lat = 0.210739760997;
    msg.lon = 0.00340494737553;
    msg.z_units = 208U;
    msg.z = 0.778112940435;

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
    msg.setTimeStamp(0.669905182856);
    msg.setSource(32210U);
    msg.setSourceEntity(126U);
    msg.setDestination(51181U);
    msg.setDestinationEntity(117U);
    msg.locale.assign("TUELUUEJABPEXWEIAMQVZGCSRYMOZTBBPK");
    const char tmp_msg_0[] = {-97, 118, 79, 93, 97, -71, 91, 99, -77, -42, 82, -36, -86, -15, -47, -117, 48, -54, -58, -108, -34, 27, -72, -67, -59, 46, -14, -112, -81, 89, -19, 119, 89, -36, -66, 1, 84, 49, -38, 62, -23, -111, 29, 94, 65, 55, -12, -88, 10, 126, -52, -52, 5, -84, -4, 93, 13, -116, 61, -28, -47, -123, 105, 103, -98, -5, -43, 31, 69, -39, -114, -80, -5, -33, -111, 56, -108, -58, -71, -76, -15, 80, 125, -83, 5, -13, -55, 101, 105, -104, 21, -71, 29, 52, 121, 124, -71, -39, -37, 100, -96, -58, 112, 27, -23, -75, -72, 57, -37, -103, 10, -79, 2, 113, 11, -112, 79, -82, -9, 23, 125, -28, 31, 114, 0, 76, -34, -26, -29, 29, 98, -78, 68, -76, 17, -103, -63, -56, -125, -113, 28, -98, -114, 55, 12, 7, 95, 84, 100, 17, -1, -61, -113, 30, -114, -42, 32, 68, -38, 5, 8, 82, 53, 49, -45, -98, 58, 107, -10, -112, -72, 36, -82, -67, 55, 47, -58, -18, 93, -90, -31, -49, 38, -92, -97, 88, 36, 7, -108, -109, -36, -4, -106, -32, 110, 97, -105, 101, -20, -6, -9, 82, -54, -52, 90, -24, 72, -30, 20, 47, 93, 15, 31, 33, 17, -25, -125, -102, -41, 91, -12, -54, -20, -116, 106, 50, -12, -116, 69, -108, 101, 101, 46};
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
    msg.setTimeStamp(0.56625975406);
    msg.setSource(11919U);
    msg.setSourceEntity(23U);
    msg.setDestination(64501U);
    msg.setDestinationEntity(119U);
    msg.locale.assign("YHRYPCFWDEXBTJHDXQYKDMEHAERKLBHUIDPPNSMPDFFPEYTZUYTOZVOQWVFYZNTAKSCOIZACCDLUXTSSXJQHKVHMGFKPZSRTDCTKEUPGAUZYHTEVCYOZIFWSXXQNOMAAWWZGIWUHMNNOARJUQBVXIRLZVGRXAROAWLANSYMGMIDYCOGMVBWKJNKNVCDESGFULPEQQWLKISPWBULFJVVFDBHFLNXJBLOBRIRSQLXTMGQTKQPBJEI");
    const char tmp_msg_0[] = {-93, -22, -104, 27, -75, -74, -7, 36, -57, 72, -32, 2, -6, 69, 1, -93, -50, -61, -88, 109, -90, -70, 106, 52, -69, -38, -33, 91, -30, 8, -7, 86, -35, -39, -15, -121, 70, -34, 126, -119, 97, 23, 0, -39, 5, 124, 18, -76, -15, 72, -106, 58, -106, -73, 98, 54, 112, 49, -107, 56, 117, -110, 79, 85, -120, -45, 44, 28, -75, -92, 69, -125, 10, -41, -118, 64, -30, -44, -56, 48, -43, 47, 81, -113, 82, 44, 54, -9, -113, -77, 28, -59, 66, 86, -117, -118, 120, -37, -16, 76, 13, 68, -3, 55, -38, -99, -41, 109, -5, -38, 110, 60, -65, 38, 88, 48, -14, -31, 107, -28, -77, 45, -93, -42, 51, -83, -61, 38, 48, -55, 93, 61, -8, -30, 13, -54, 67, 61, -68, -33, 83, -7, -1, 53, -50, 30, -76, 126, -80, 118, -104, 81, -76, -92, -69, -29, 106, 87, -21, 21, 60, 111, -60, 76, 105, -114, 123, -94, -50};
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
    msg.setTimeStamp(0.820256076103);
    msg.setSource(47867U);
    msg.setSourceEntity(195U);
    msg.setDestination(21282U);
    msg.setDestinationEntity(111U);
    msg.locale.assign("GEADMKACGOKRNPSLBYHWQIJMKQUSOHLKQVFOGQTLUXNEZCUSFFVCEQRJCKQOPDCTZQRJAXUMPGUFGOBVIISXUZROSBDIPWPUTBHTDKHWZBSNVMLUHYERXPFOWWTFLTVVMAVGFWOJDDTYKGCESWAHVZWAMDBPIPNEYZBUOFYJXJDLIYNFXHCNGJNAHITRTVBQRWSIGMRDISZ");
    const char tmp_msg_0[] = {-92, 115, 121, 5, 111, -14, 42, 24, -39, 66, 32, -61, -66, 119, -89, 38, 74, -101, 15, 101, 117, -118, -68, -41, 111, -112, 12, -12, 9, -50, -102, 54, -107, 68, 113, 96, 12, 106, 66, -6, 116, 10, 60, -69, -10, -43, -106, -94, 10, -31, 23, 11, -96, -46, 65, 109, 126};
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
    msg.setTimeStamp(0.91427248034);
    msg.setSource(6430U);
    msg.setSourceEntity(0U);
    msg.setDestination(9381U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.0679489835276);
    msg.setSource(22945U);
    msg.setSourceEntity(180U);
    msg.setDestination(19663U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.369931014296);
    msg.setSource(5720U);
    msg.setSourceEntity(221U);
    msg.setDestination(16738U);
    msg.setDestinationEntity(132U);

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

  return test.getReturnValue();
}
