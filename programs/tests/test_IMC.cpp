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
    msg.setTimeStamp(0.4287827927306903);
    msg.setSource(2582U);
    msg.setSourceEntity(75U);
    msg.setDestination(25815U);
    msg.setDestinationEntity(47U);
    msg.state = 124U;
    msg.flags = 229U;
    msg.description.assign("HCXNDVLPLDEJWQOHZYGMOHLJFPFVMVJYQHPOUIMBRUOFUGMNQTZBMIHPKQESUEZCHGUJKBETGFYIBWILBKOCCSKLQXVPHRFQQNUGLSZKGKQSAEMIVMDGCRANONLIUPMCDWSBXDWDHWECALWTNCUTTUXZJRRKAOXNLAXYYDCSZJTSNXEQIOGAKFXBNVHKQTWYPTPDZWSRGJVF");

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
    msg.setTimeStamp(0.8531685278830968);
    msg.setSource(41791U);
    msg.setSourceEntity(108U);
    msg.setDestination(4897U);
    msg.setDestinationEntity(98U);
    msg.state = 251U;
    msg.flags = 208U;
    msg.description.assign("VCTOOWBJYWQRHNLFNNNFDKBOAERAFXVOIDHYGEWPFMBVLCUBPPWNUSOJJTKIRAMYYGPQDCRIWBZDEZSEMORXFQCKSWOHLJUBXJHNZOMXEFKIZNPQAYRTN");

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
    msg.setTimeStamp(0.6672866202677764);
    msg.setSource(53673U);
    msg.setSourceEntity(51U);
    msg.setDestination(12687U);
    msg.setDestinationEntity(44U);
    msg.state = 145U;
    msg.flags = 1U;
    msg.description.assign("MSMYTVNELEBIKBUSBYLYWRAWXVDSYOJKZBXTASGQVORLHULETDVZXYHIJKMTWEYUFWRBIGCXJKKKTNAZWUEKQWUEOYHQVRWMOKPXNHLQAJTGNCTCDZQQJZDASAXAZPPTDEEBRQHOWRFFEIUVPCESZSJVCMGCHJHPUQZPHMFMPVLONWCXIGFDGYTGBLFBVFNDMDOIFJCAHJOALIOUNJCYWUHRPLSKI");

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
    msg.setTimeStamp(0.1493666369752732);
    msg.setSource(5554U);
    msg.setSourceEntity(61U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.0894576174872379);
    msg.setSource(61443U);
    msg.setSourceEntity(116U);
    msg.setDestination(2455U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.3739734800024628);
    msg.setSource(54564U);
    msg.setSourceEntity(30U);
    msg.setDestination(44981U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.12518612627814374);
    msg.setSource(64482U);
    msg.setSourceEntity(122U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(112U);
    msg.id = 203U;
    msg.label.assign("VVXXVIULMFAXWIENUMNPPCOPVRTPUNGSJJCTRADRLYHYZSAWEBWXMMOKXAZIDTIJYRZDWRPQDDHQSDGLWGHSUHDYENAZGQKN");
    msg.component.assign("NEEGLAMFSVLSSIRCPLLEUAZGPXOAHYXXFHHXOAIMZTDMPWMSTOFDKSYDTJGMVTRKTLJPFBXIHNDBEZVRDKUBHWEWFVBYFERWJCNBKZZCASPVGYOUWNDQPYTOGQNDNFCYRNXYPNDHXNIVQTYOAFKQZ");
    msg.act_time = 4064U;
    msg.deact_time = 36594U;

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
    msg.setTimeStamp(0.9671180037956565);
    msg.setSource(38035U);
    msg.setSourceEntity(182U);
    msg.setDestination(54082U);
    msg.setDestinationEntity(130U);
    msg.id = 165U;
    msg.label.assign("DMMCFYNYIXGTPKDWJPVJOEEQLNPYCCMSSUEFFIQNIOIGDQSWHHABJPFBWTZAGLKGXHSAALGUQFBBNRYNWZSNTZJHBFBXAXDIYMLDXOZSVVHTFNHUGJBOMCAGZUSYJEKQOTFPJKCHRAPRNYBQDTCVLNLIGOQERBFCJGO");
    msg.component.assign("VWRISBJVDPJIGZQRXCQEHKCMSQRKETTWUBPBBWHXHGIMJPELXPILSAJUGWIZKGMAPUUVJJIKIVSQQALSIZZANTFFZKYAFCWBCXZBYCSTHMDIRMSHWLWLKYNATH");
    msg.act_time = 22956U;
    msg.deact_time = 32233U;

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
    msg.setTimeStamp(0.02312256946511082);
    msg.setSource(17534U);
    msg.setSourceEntity(91U);
    msg.setDestination(16456U);
    msg.setDestinationEntity(91U);
    msg.id = 200U;
    msg.label.assign("VVCDSUGGXAGBURHPGKCZDKUBZTHNVJRGCABTEMKTJHCZRIFXYFBJMWPARGNDCP");
    msg.component.assign("HMLPGZBROGBRGPKHRFISJNOZIHXXSWNYPKLBQXZCFHBDICNZYSELDRCXGGYVVAQPFVOKWQBGOTPCSNBERTDXAZKIQX");
    msg.act_time = 9378U;
    msg.deact_time = 50602U;

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
    msg.setTimeStamp(0.1989472597769364);
    msg.setSource(301U);
    msg.setSourceEntity(146U);
    msg.setDestination(5345U);
    msg.setDestinationEntity(186U);
    msg.id = 110U;

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
    msg.setTimeStamp(0.133798756596322);
    msg.setSource(43889U);
    msg.setSourceEntity(70U);
    msg.setDestination(43552U);
    msg.setDestinationEntity(90U);
    msg.id = 190U;

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
    msg.setTimeStamp(0.5662667105469108);
    msg.setSource(40571U);
    msg.setSourceEntity(59U);
    msg.setDestination(7237U);
    msg.setDestinationEntity(2U);
    msg.id = 87U;

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
    msg.setTimeStamp(0.12421568536846495);
    msg.setSource(44793U);
    msg.setSourceEntity(222U);
    msg.setDestination(31739U);
    msg.setDestinationEntity(5U);
    msg.op = 252U;
    msg.list.assign("OZSEGDLCHXCONISITIZRLISKNGWMZDFEJRMATIOXOUVELNOPJZGEBQQNSPMWMSRCQCWTWHKBGGDAHVNPQGQIJLMZOGVHUBSRNSZDJVKKQSJ");

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
    msg.setTimeStamp(0.5122679356160703);
    msg.setSource(33756U);
    msg.setSourceEntity(193U);
    msg.setDestination(35534U);
    msg.setDestinationEntity(239U);
    msg.op = 117U;
    msg.list.assign("GCWTHZRMDCCQGSJLSKKHHBZNJWBPVEFPYDAQLYAGUDRCQOYMIFXXJBIUJVELXITAXIYUZFLPCGMDVMIEFVXRZHWUSKDHEGTVHEZECLDEPPBVPCWFIAWHDKLIBLQKVKNUNDNFOYUMKLXVQBWESKLZJAZXWRSHWFCSPNZOOQRRRXMGBTMAGXVOYHETCUFMAMPKNRIJSGNKOITSICBOQTQBELRUYOMRJYYQZF");

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
    msg.setTimeStamp(0.5604032083934972);
    msg.setSource(51222U);
    msg.setSourceEntity(79U);
    msg.setDestination(62444U);
    msg.setDestinationEntity(71U);
    msg.op = 224U;
    msg.list.assign("FKLFCEMYOTNZCYNBXRRBMPWNQKTHHBXWJLPITQCVONMNYDZZCCXPZSLBVNWRVQWKFHTRNIVZUNTOKEDWDHMUNXGAUOUUZIG");

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
    msg.setTimeStamp(0.3544685458134593);
    msg.setSource(43420U);
    msg.setSourceEntity(241U);
    msg.setDestination(52190U);
    msg.setDestinationEntity(152U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.3374345067131145);
    msg.setSource(36301U);
    msg.setSourceEntity(193U);
    msg.setDestination(23477U);
    msg.setDestinationEntity(86U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.6122606419520776);
    msg.setSource(5720U);
    msg.setSourceEntity(194U);
    msg.setDestination(13190U);
    msg.setDestinationEntity(34U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.8535104914949697);
    msg.setSource(24293U);
    msg.setSourceEntity(219U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(57U);
    msg.value = 115U;

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
    msg.setTimeStamp(0.08149505576450233);
    msg.setSource(59579U);
    msg.setSourceEntity(172U);
    msg.setDestination(23748U);
    msg.setDestinationEntity(228U);
    msg.value = 106U;

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
    msg.setTimeStamp(0.9866277134144158);
    msg.setSource(9026U);
    msg.setSourceEntity(2U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(250U);
    msg.value = 34U;

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
    msg.setTimeStamp(0.44885072429298534);
    msg.setSource(39907U);
    msg.setSourceEntity(9U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(145U);
    msg.consumer.assign("JZWOZBLHFJZXJQSYMOXCPHRPMAFDGDQMYJILCRBKVEOYGJKMXVNC");
    msg.message_id = 11692U;

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
    msg.setTimeStamp(0.44447513177240483);
    msg.setSource(25393U);
    msg.setSourceEntity(217U);
    msg.setDestination(31354U);
    msg.setDestinationEntity(86U);
    msg.consumer.assign("MEAXSKHXFDAZLXUEQQHUALCGLLXILCLPNMQEDAQZRLGPVWYZCAQYFMTDHJSVSVNTBKWIFVOZSEUSCCAWIHOUTHGONKEXOSTIFFJ");
    msg.message_id = 39727U;

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
    msg.setTimeStamp(0.8168452631787715);
    msg.setSource(7892U);
    msg.setSourceEntity(153U);
    msg.setDestination(18832U);
    msg.setDestinationEntity(131U);
    msg.consumer.assign("JIEABKIEIYYLCKVMBBBATGTCILLBPTDKUGMBDDQWQSHZAXJTWUXXNXOYPKRQWWSFKTWRLVZDCZLVADNEYWJKDEXHQAHEIGOSXZNLOEHNAPTCZKUQKNQSWEYIJMIPDRPVGDNDAYDMHPLFJLMHLVXONXUJGGSOMGPOJBJUSUNXVOVZBLJ");
    msg.message_id = 3702U;

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
    msg.setTimeStamp(0.15062726588891928);
    msg.setSource(46650U);
    msg.setSourceEntity(26U);
    msg.setDestination(26293U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.8368647848839886);
    msg.setSource(49307U);
    msg.setSourceEntity(211U);
    msg.setDestination(22880U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.6767999546759061);
    msg.setSource(19376U);
    msg.setSourceEntity(32U);
    msg.setDestination(20178U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.04581171691858399);
    msg.setSource(27635U);
    msg.setSourceEntity(63U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(199U);
    msg.section.assign("QQJVTXKHVNBTDSLLNWZCYIHPANYOYFRJIMQXSEVISJROHUUFRQYMCUAVQLSNXPDHAWZMBNFVGUBEJAXYLBDUEZKRPDAJQSWAPJULOIGZONYWTNIKJYMTCTHGOPJVNJEDXDACACZMETHBNTKYWWUDBEFCXHMGHWXLISXBDWMRKOZTZAJPUUEGORPFFFTIC");
    msg.param.assign("BCJREFRPNNLODBNFPOMVQGR");
    msg.value.assign("JFYAMACBPDTPNNQRJQMUOXNLFWSGVETHKALYUKUZDHLMXJFZQMSVGRYWEUYJIBLVYSLYOTHOJXIKZQOXTKPXBELOCLEUQABWJVXRIVUEYRLHYVJEPIUSKTNWESSFMWGKOCICZYRGFQSMCAZBJNDCGFNTBRFRTKGCDEPPEHPSHHVWCOCUIIQAUGPWUAHFTVRXWMMNRNIEABZXNOOLGAPMGYZLWDOPTKFAXHTVDHCKSFRWSQGJIQJKDQIX");

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
    msg.setTimeStamp(0.9810213025716261);
    msg.setSource(29287U);
    msg.setSourceEntity(184U);
    msg.setDestination(44845U);
    msg.setDestinationEntity(23U);
    msg.section.assign("RFELHWVFZFXWBZXMVTWQXFNVYKZLMVYRPZRMZDLECTATGKPZBOGPWLZCFWHJQAOMUIJAEPXOWBGMAZKPOYIQCEUAH");
    msg.param.assign("VWBOFXRVBDHOWUAWYBNELFANMTEKPVASAZRDMTWGSCIPYGNBEHJXYVLSQDSTNDZVUQKCIKMAGBHNICKFWDMPXIJYLEGCOZKCDHAOBILUAXRGCFPPVENFNLQEDUGXMPIC");
    msg.value.assign("OVTWOXNHKSO");

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
    msg.setTimeStamp(0.2168054058769453);
    msg.setSource(57662U);
    msg.setSourceEntity(56U);
    msg.setDestination(2943U);
    msg.setDestinationEntity(82U);
    msg.section.assign("OLQMMJQHDJBUIQOPFDWVNHBTWBJZSISKSFIFCMGRWJYRKRIUUYCLTVDNBRHGBGVIUBPRGJJFMTHVSSKKFMOVTGGYYLYZRHXGUDXFZSXOWEKEUYKXDPIYAZJNRUCAZVCMEAUQMQWLHTDNOYOWLZHIBDAPXZNVLLZBIIWISPSGTBYFVPVR");
    msg.param.assign("AVPFPXNZRZJHNXHABRNITSKNKBCACUMOHMMUJOGSOYXHZTWKBDFTGSZCRDBMQVZPHTGQKHKT");
    msg.value.assign("LAFNOZXLQIRTRPZIZFONNRNUOHDFCAUFDMUKOWLLVSHDYJZGK");

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
    msg.setTimeStamp(0.006806037942205245);
    msg.setSource(4133U);
    msg.setSourceEntity(95U);
    msg.setDestination(37371U);
    msg.setDestinationEntity(172U);
    msg.op = 92U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("EBEYAMCUOAYZYMDBTOKMOIYDMDXQFZRPTLNKZQWJKCBZHNFTCL");
    tmp_msg_0.param.assign("RYWQLRFAUFVICCGCUUJXGNJZGMAHCKIYEWSJFCNYJZZSEJXRKHAGQKOVNTPKXODRIAGFNMAVOSHXRFABOQTHBQVHVCTLKCISPVZSYWGYBITKEHLXTRWMQJIPRHJPVDDOYLSUSOMMMBABDEPKBRLNINOUUDPBZTNXAOZUGDZDAJLOHYPCTGZVPYMFETTHUDQWWIAGH");
    tmp_msg_0.value.assign("VXHEVBXNXKYDDANILAXMC");
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
    msg.setTimeStamp(0.4316519831025404);
    msg.setSource(54408U);
    msg.setSourceEntity(224U);
    msg.setDestination(55646U);
    msg.setDestinationEntity(92U);
    msg.op = 19U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("NRDQYMOUKLHDFSUZVZVDXOXRIFYBSQBIGJBVLNWWQFIFQVARWANNCWKJZJFNXSVOXRLBQAXOMRCRDFKWDRGERDEIFESVYKWARANXGDGTCJNXIYKDEAEEWBOAPGHYZJBLGKYPQRIJTLFVWXLITUCIMGPBOTSTSHAHKOYZOUACYTLUVHMMUZUQAUDMQ");
    tmp_msg_0.param.assign("ZXHXGRKRHVDLCCJFCEYRKZVIFDFGAANBIQRPZUZODYYQRCPEOLWXVMJMAEYAZCWMKZQBKETIPWCW");
    tmp_msg_0.value.assign("WWLGHBUEQPGIVBSOFSAKY");
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
    msg.setTimeStamp(0.48532457872685775);
    msg.setSource(23619U);
    msg.setSourceEntity(224U);
    msg.setDestination(41U);
    msg.setDestinationEntity(244U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.9218564336221755);
    msg.setSource(55181U);
    msg.setSourceEntity(240U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(14U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.02609316573425058);
    msg.setSource(56105U);
    msg.setSourceEntity(202U);
    msg.setDestination(32579U);
    msg.setDestinationEntity(80U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.5796599852262132);
    msg.setSource(52442U);
    msg.setSourceEntity(7U);
    msg.setDestination(60510U);
    msg.setDestinationEntity(31U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.7488227067480455);
    msg.setSource(65152U);
    msg.setSourceEntity(207U);
    msg.setDestination(20853U);
    msg.setDestinationEntity(30U);
    msg.total_steps = 29U;
    msg.step_number = 164U;
    msg.step.assign("LFWAMUZALITNLMFPUHVWYDDCXIXACDWTKGPVBPZERJLTSSXBEWQBVPUHZFGYVSODOIGEJGQGUJVNFLNKGNRDWKUYJQKCZDYTJIJSFCUNDAVZCMNBUPVXIAQPCJKXOFMYKSBVQBIMOHSXPNZAFOETIQHNXKYSYRZRBDAWYBUIANXZJKKDOPEHMHGQDCEEMGFENGVLTRBTLSRHTYUTCGFHPXWRHRAMQOWMLIJQCV");
    msg.flags = 40U;

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
    msg.setTimeStamp(0.3993144764563096);
    msg.setSource(33854U);
    msg.setSourceEntity(180U);
    msg.setDestination(47129U);
    msg.setDestinationEntity(137U);
    msg.total_steps = 237U;
    msg.step_number = 155U;
    msg.step.assign("BOYFAMJVHWBPEETWMWWWURKNHUGTFPTAOXTFPDVQSSVIJRHQECTVMZMVXPRUCLDGIUFLWIYUKNONKOHCJUYGQEJMFVZATNTBIJKVGNDMDGBHOURZXXSKLZKNXYQHMRXGYWVSTUAVAEYDKCEEGEYPNPLVCYJRUSJZDDRBISQGKQLAACFNLZXYBPPHJZBOLQDDOAEBPMQIXIZLRQFKQECXFXFOFOLINZHKTRNAJUPOZCWBCIJSWCGSHSAWBYR");
    msg.flags = 85U;

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
    msg.setTimeStamp(0.6542007375275103);
    msg.setSource(6873U);
    msg.setSourceEntity(63U);
    msg.setDestination(59341U);
    msg.setDestinationEntity(55U);
    msg.total_steps = 41U;
    msg.step_number = 146U;
    msg.step.assign("HKKFSFGSHN");
    msg.flags = 202U;

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
    msg.setTimeStamp(0.5185687697281244);
    msg.setSource(45172U);
    msg.setSourceEntity(40U);
    msg.setDestination(38721U);
    msg.setDestinationEntity(207U);
    msg.state = 184U;
    msg.error.assign("AGYSKANJHYNNFOPRRPTOGVDKUIUUXMYQKMXSWXKSCQKQWXEVHTRLIFFWIRXWZWQ");

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
    msg.setTimeStamp(0.7154634898277324);
    msg.setSource(15835U);
    msg.setSourceEntity(217U);
    msg.setDestination(53628U);
    msg.setDestinationEntity(217U);
    msg.state = 227U;
    msg.error.assign("LMNWJQZOALWCTZDUXIHORGPUWAZKCTWKZHELKGDVRWQUBMPUEJNWIIGWJYJQTVKMTMVKFINETKYXBQDISZREPAFFVULOCNMUXMHANCJKJFVVQQECWBXFMPATBBLXOGYGXRBQSCYODO");

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
    msg.setTimeStamp(0.06067245193482851);
    msg.setSource(32258U);
    msg.setSourceEntity(205U);
    msg.setDestination(60485U);
    msg.setDestinationEntity(106U);
    msg.state = 56U;
    msg.error.assign("SQJXSAZFDXWHGVNWHZWAUJPMJCQWROKNNMOYCLEEIRRGWDZHVHOZWGEGEBWRDEPGIWZGRMDBQOSDXFCDCK");

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
    msg.setTimeStamp(0.0324600378171509);
    msg.setSource(62003U);
    msg.setSourceEntity(95U);
    msg.setDestination(56159U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.06878242185635719);
    msg.setSource(18410U);
    msg.setSourceEntity(38U);
    msg.setDestination(49361U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.6245797187273979);
    msg.setSource(6919U);
    msg.setSourceEntity(77U);
    msg.setDestination(33728U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.38007926250663193);
    msg.setSource(39923U);
    msg.setSourceEntity(46U);
    msg.setDestination(25645U);
    msg.setDestinationEntity(123U);
    msg.op = 130U;
    msg.speed_min = 0.7189511033861571;
    msg.speed_max = 0.47784772425702593;
    msg.long_accel = 0.6018235162167017;
    msg.alt_max_msl = 0.3272753146228552;
    msg.dive_fraction_max = 0.6358099807310155;
    msg.climb_fraction_max = 0.6475823993171053;
    msg.bank_max = 0.9680877774120642;
    msg.p_max = 0.3775418617124784;
    msg.pitch_min = 0.38654482828522363;
    msg.pitch_max = 0.032281023061091596;
    msg.q_max = 0.5440631842895237;
    msg.g_min = 0.405165763763364;
    msg.g_max = 0.006880203003553076;
    msg.g_lat_max = 0.7075640733517767;
    msg.rpm_min = 0.9487011231567145;
    msg.rpm_max = 0.9917227299695864;
    msg.rpm_rate_max = 0.6302604954293457;

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
    msg.setTimeStamp(0.4702030226280961);
    msg.setSource(29784U);
    msg.setSourceEntity(194U);
    msg.setDestination(56260U);
    msg.setDestinationEntity(147U);
    msg.op = 192U;
    msg.speed_min = 0.9215910645354334;
    msg.speed_max = 0.4532989046938761;
    msg.long_accel = 0.4754568536473277;
    msg.alt_max_msl = 0.9402716029705177;
    msg.dive_fraction_max = 0.8766156692617564;
    msg.climb_fraction_max = 0.10126790554916565;
    msg.bank_max = 0.9337825159299834;
    msg.p_max = 0.06314922190174277;
    msg.pitch_min = 0.6211350380647989;
    msg.pitch_max = 0.22406051793002157;
    msg.q_max = 0.892147226968987;
    msg.g_min = 0.13671479136200526;
    msg.g_max = 0.38182680517538714;
    msg.g_lat_max = 0.21911199233736667;
    msg.rpm_min = 0.9734642593510925;
    msg.rpm_max = 0.14058708703212897;
    msg.rpm_rate_max = 0.33246503512966963;

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
    msg.setTimeStamp(0.6025219163245978);
    msg.setSource(31678U);
    msg.setSourceEntity(179U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(45U);
    msg.op = 127U;
    msg.speed_min = 0.2486641197189754;
    msg.speed_max = 0.5644703568409947;
    msg.long_accel = 0.7044476021880512;
    msg.alt_max_msl = 0.1950828730338331;
    msg.dive_fraction_max = 0.28367159284866306;
    msg.climb_fraction_max = 0.14223288263258216;
    msg.bank_max = 0.5905659215324393;
    msg.p_max = 0.04748065167185633;
    msg.pitch_min = 0.4979420496148709;
    msg.pitch_max = 0.07450234619322771;
    msg.q_max = 0.731000908170724;
    msg.g_min = 0.22006588279451467;
    msg.g_max = 0.6494694675083197;
    msg.g_lat_max = 0.7938926893921641;
    msg.rpm_min = 0.11649438466284989;
    msg.rpm_max = 0.10197590521314637;
    msg.rpm_rate_max = 0.48647245273273887;

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
    msg.setTimeStamp(0.3232640898148139);
    msg.setSource(45822U);
    msg.setSourceEntity(206U);
    msg.setDestination(22202U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.04700160313690582);
    msg.setSource(28328U);
    msg.setSourceEntity(107U);
    msg.setDestination(56752U);
    msg.setDestinationEntity(142U);
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 56U;
    tmp_msg_0.step_number = 169U;
    tmp_msg_0.step.assign("TQKRUJFBNFVOGDGEKMZXZZNNJRLIRGOEWATBBWQQNAZDWIRKEXJTFASALAIBFWGTTLODLUTJMGRPHFJPMCSNHALHOSHIRULRYMULACJUPWTBBERWEPGNWFPLSUQGIGVSKTDCUJDKXYPRBXCYQVTDCDVZIGVQQYFVAYWSECNLLXVNMFCHOSXHSVSYZEUMBZKUKQOCDFWPHZEOIXUMRJDAE");
    tmp_msg_0.flags = 244U;
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
    msg.setTimeStamp(0.6142158189597652);
    msg.setSource(5476U);
    msg.setSourceEntity(26U);
    msg.setDestination(19411U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.3881884900980408);
    msg.setSource(15438U);
    msg.setSourceEntity(74U);
    msg.setDestination(37980U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.8284672671746233;
    msg.lon = 0.3249904437073776;
    msg.height = 0.880670424156572;
    msg.x = 0.6142894420934115;
    msg.y = 0.17984934159807564;
    msg.z = 0.7877155428507114;
    msg.phi = 0.23134889875900289;
    msg.theta = 0.01871813585104576;
    msg.psi = 0.7186149777117883;
    msg.u = 0.9814217088689773;
    msg.v = 0.4058043659458205;
    msg.w = 0.1301276477423241;
    msg.p = 0.9201328770243482;
    msg.q = 0.25380935220325473;
    msg.r = 0.4384708279760483;
    msg.svx = 0.8453892329658571;
    msg.svy = 0.20308293620700735;
    msg.svz = 0.26679531910611465;

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
    msg.setTimeStamp(0.04901146731140782);
    msg.setSource(62065U);
    msg.setSourceEntity(198U);
    msg.setDestination(63769U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.6138891366570854;
    msg.lon = 0.1739623132928687;
    msg.height = 0.6695945239971924;
    msg.x = 0.3014844486894357;
    msg.y = 0.5307103054999202;
    msg.z = 0.09602412312295916;
    msg.phi = 0.656902288494302;
    msg.theta = 0.6925545512092965;
    msg.psi = 0.8499134742425797;
    msg.u = 0.9750740099384291;
    msg.v = 0.2760328664503926;
    msg.w = 0.31839002594556765;
    msg.p = 0.1658266317546161;
    msg.q = 0.0012133343119140605;
    msg.r = 0.9117572723139121;
    msg.svx = 0.4716695416301264;
    msg.svy = 0.026022592828873536;
    msg.svz = 0.9432885561970837;

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
    msg.setTimeStamp(0.6950636615830149);
    msg.setSource(51641U);
    msg.setSourceEntity(76U);
    msg.setDestination(51041U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.7319275658155051;
    msg.lon = 0.10328995978852462;
    msg.height = 0.9323713543124065;
    msg.x = 0.35903199259991825;
    msg.y = 0.49117493124618417;
    msg.z = 0.7613482205594021;
    msg.phi = 0.8266279314653533;
    msg.theta = 0.9481798624196722;
    msg.psi = 0.3220752025600684;
    msg.u = 0.3993784122128634;
    msg.v = 0.15286172051558056;
    msg.w = 0.23800134861961408;
    msg.p = 0.10960623806379732;
    msg.q = 0.07727827538828103;
    msg.r = 0.3510292119320455;
    msg.svx = 0.5899161908668282;
    msg.svy = 0.5749865445921455;
    msg.svz = 0.1784080662688866;

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
    msg.setTimeStamp(0.6100081616994629);
    msg.setSource(57568U);
    msg.setSourceEntity(69U);
    msg.setDestination(31561U);
    msg.setDestinationEntity(200U);
    msg.op = 55U;
    msg.entities.assign("ZHQWWXXALIZPPIYPLGUVHHSIZVYQAHLEOAYKRBNVBHXTMHRWGPDDDCMYSSDQXOHZBPZCFJPNJRQJUVOGBFJTWTFNIESSNECCEFREGQAWGXFUXJHTZAJKLKDWHKXYECTBNPZWIPOCBYQBGFMVDRYVSIVM");

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
    msg.setTimeStamp(0.5776024123990067);
    msg.setSource(20956U);
    msg.setSourceEntity(152U);
    msg.setDestination(10440U);
    msg.setDestinationEntity(60U);
    msg.op = 159U;
    msg.entities.assign("EDSHPOJQMGPPFZLSXTDQBGTPGIANCSEXAZFJGPC");

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
    msg.setTimeStamp(0.100149206417535);
    msg.setSource(52666U);
    msg.setSourceEntity(176U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(46U);
    msg.op = 1U;
    msg.entities.assign("LLIMGPQRTIJFLODXZQQYWABVRDZUWNKCYUAMGYNJGWAJAMVJZUQKG");

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
    msg.setTimeStamp(0.6722552673609229);
    msg.setSource(63216U);
    msg.setSourceEntity(59U);
    msg.setDestination(26883U);
    msg.setDestinationEntity(39U);
    msg.type = 39U;
    msg.speed = 53146U;
    const char tmp_msg_0[] = {-108, 13, 68, 2, -95, -92, 70, -28, 78, -88, 30, -78, 52, 7, -64, 54, -121, 23, 101, 58, -21, 86, -105, 58, -53, -3, -9, -125, -81, 99, -102, -81, 108, 108, -62, -18, -72, 34, 31, 114, -23, -3, -49, 93, 101, 43, 5, 85, -127, -55, 67, 103, 85, -98, 102, -42, 17, 27, 119, 82, -104, 60, -59, 102, 65, -56, -116, 19, 71, -78, 49, 123, -95, 51, -3, 117, -106, 90, 88, 7, 107, -57, -56, -85, -79, -11, -89, -117, 76, 68, -96, 16, -62, 17, -71, -56, -71, -8, 18, -67, -97, -67, 23, -70, 92, -61, 3, -119, 61, 96, 43, 53, -22, -13, 84, -16, 69, -83, -120, 17, 33, -3, 67, -117, -101, 25, 33};
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
    msg.setTimeStamp(0.4993184134772132);
    msg.setSource(47104U);
    msg.setSourceEntity(86U);
    msg.setDestination(40895U);
    msg.setDestinationEntity(157U);
    msg.type = 59U;
    msg.speed = 21948U;
    const char tmp_msg_0[] = {-103, -67, -61, -110, 4, -34, -9, -121, 23, -12, 54, 11, -76, -122, 88, -8, 67, 46, -113, 117, 102, -84, -19, -102, 57, -55, -71, -5, -28, -86, -20, -76, 68, 43, -48, 3, -114, -97, -56, 38, -21, -3, -2, 14, 11, -125, -128, -30, -44, 65, 6, 91, -118, -12, -25, -81, -127, 20, 98, -66, 37, 65, -19, 51, 90, -114, -32, 36, 31, -51, -97, 27, 83, -26, 86, -105, -16, -86, 35, -110, -46, -111, -80, -18, -94, 36, -70, -83, 29, -110, -2, -67, 120, -22, -97, -31, -34, -69, 35, -18, 126, 125, -7, 102, -40, 36, -59, 51, -62, 27, -28, 29, -56, -128, -36, -52, -70, -115, -102, -25, -24, 12, -38, -68, -11, -12, -90, 97, -114, -38, 38, -100, -89, -9, -68, 43, 89, 111, -91, -126, 43, 102, 1, 120, -116, -68, 85, -56, -67, 67, 81, -78, 47, 56, 11, 73, -34, -113, -39, 77, 68, 88, -55, -55, 39, -126, -85, -1, 86, -6, 35, -23, -95, 120, -37, 5, 114, 37, 55, 69, -2, -127, 121, 41, -42, 6, -114, -6, -65, 101, 88, -98, 36, 92, -98, -68, 77, -113, 63, 69, -5, -86, -126, 10, 46, 49, 75, 20, -42, 73, -50, 110, 55, -22, -101, 78, -59, 57, 94, -119, 109, -105, -120, 126, 19, 52, 116, 68, 6, -105, -54, 49, 48, 2};
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
    msg.setTimeStamp(0.5435113145396252);
    msg.setSource(34358U);
    msg.setSourceEntity(91U);
    msg.setDestination(25804U);
    msg.setDestinationEntity(155U);
    msg.type = 184U;
    msg.speed = 7067U;
    const char tmp_msg_0[] = {-49, -40, 44, 23, -51, 52, -87, -42, 95, -111, -64, 68, 34, 32, 27, 33, -98, 37, 38, 31, 48, 85, 73, -27, -60, -94, 115, 80, -9, -99};
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
    msg.setTimeStamp(0.4241133010777566);
    msg.setSource(18087U);
    msg.setSourceEntity(107U);
    msg.setDestination(13138U);
    msg.setDestinationEntity(143U);
    msg.op = 162U;
    msg.tas2acc_pgain = 0.7188511526438572;
    msg.bank2p_pgain = 0.13018964812652412;

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
    msg.setTimeStamp(0.28658029782463623);
    msg.setSource(1847U);
    msg.setSourceEntity(207U);
    msg.setDestination(64418U);
    msg.setDestinationEntity(248U);
    msg.op = 50U;
    msg.tas2acc_pgain = 0.9403400122422602;
    msg.bank2p_pgain = 0.5754212165051442;

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
    msg.setTimeStamp(0.5775139395447609);
    msg.setSource(28660U);
    msg.setSourceEntity(222U);
    msg.setDestination(29194U);
    msg.setDestinationEntity(169U);
    msg.op = 91U;
    msg.tas2acc_pgain = 0.20701395619382146;
    msg.bank2p_pgain = 0.012069379635081923;

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
    msg.setTimeStamp(0.3146638539413774);
    msg.setSource(36561U);
    msg.setSourceEntity(15U);
    msg.setDestination(15875U);
    msg.setDestinationEntity(46U);
    msg.available = 2959308498U;
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
    msg.setTimeStamp(0.9408247504706088);
    msg.setSource(18260U);
    msg.setSourceEntity(13U);
    msg.setDestination(3536U);
    msg.setDestinationEntity(116U);
    msg.available = 1253915081U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.467509830747044);
    msg.setSource(17710U);
    msg.setSourceEntity(164U);
    msg.setDestination(32878U);
    msg.setDestinationEntity(82U);
    msg.available = 2329963951U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.10571591370698019);
    msg.setSource(60142U);
    msg.setSourceEntity(102U);
    msg.setDestination(57486U);
    msg.setDestinationEntity(181U);
    msg.op = 63U;
    msg.snapshot.assign("MQTTTMLNHOMMGYZANNXXPBCBDACJDUQVDHEKLO");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7118386815407017;
    tmp_msg_0.beam_height = 0.7314999879650124;
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
    msg.setTimeStamp(0.8098780438299018);
    msg.setSource(40844U);
    msg.setSourceEntity(120U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(223U);
    msg.op = 254U;
    msg.snapshot.assign("LNUXNXVVOWKZQPNGSUKMTYZAOBJBBJXPROMGTHFRWRITLPJZEOQSGYAZRGKGLOLNSTBUFAUXHEZNAJIZKBAAGQYLDNWDHXTUJIVIDGFJUHICNZSSHEDEQSKFQMWMIRVPREFYRTBTUCGYDROHOKQPCSXCSXPWLIDXDYIMHMQGFPZZPHCEDPNEMVUMFY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JWTQGSBKYOIHZAMNADAPGDJTIMLPRELOLDSRXQWUPFJYODLQURIIRPVVNZHGDVEMKJGBNXSIIOUZCEPSASOUGUUJCFJZNJGKHWKHMIYJTIYLXHSOXFWEGBNVQGBAUPKRECNAEYIVLSKDQDUKPOGFQNHFBYCXM");
    tmp_msg_0.attr_type = 44U;
    tmp_msg_0.min.assign("UWOYBJXASNFCVJNQPWGOZDDTKCHYKYXSYBJYJOEPEPURGRIXJVVEXSSZKPAMNETWBYZSJNRDRBVBHGCINAPPMPKNHSOZFLHOWHDSTNYQVFHTEXCL");
    tmp_msg_0.max.assign("NPNHQUMDEMGCEMKURTMSFEJISPAPFJZLJKSFAGZRXRWKPIRXJOLUYGWBUFILWBISUJJXYTBBHZDNWXQHPMGLPMNPFZLWEXXYKIHNQVWQVTKFYFHESJESDKJNZCTVCVEZCXBRNCCOAQJRDQXFYSMGFYQVRZBPOTANHTHV");
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
    msg.setTimeStamp(0.7864278542104245);
    msg.setSource(3652U);
    msg.setSourceEntity(141U);
    msg.setDestination(18731U);
    msg.setDestinationEntity(238U);
    msg.op = 69U;
    msg.snapshot.assign("VZXLIGQVVEEFQQQADMHKKTRTXJZRDCPTPXJMBYKSFWOYJAMVNVUAOKYDWHXGZGWHYUDRBZLNEMLOAFNYGNLPGWCNHSJVEOPCIHOYEYHZCJHGRZVDNSKCMIGQBJEUOICIPNSKZLONJITOBKRUFBNEFUSPJRTEJZGRHLQ");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1863029588U;
    tmp_msg_0.value = 232U;
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
    msg.setTimeStamp(0.23629968062348983);
    msg.setSource(57879U);
    msg.setSourceEntity(2U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(10U);
    msg.op = 154U;
    msg.name.assign("PCOIAMXRSPNHWXWDRGIYTANQWPHVASEJYPDIUSUOSZZZKQEECVPBYZHPHOGLMTVNTPBMFVDVXGUSBKQYZPIJHBCFRKDHBWYULJMWGMGRITYQZNELMKYRKLNHFFRNRTFXMISDXJYHJJLGFXNRMTBODLOYECGMKUACXYKEWAEOAEJBCZOIKZNBEDQWNCTCKOAPVHHQVUGTOVQIQSZZGRIALUWOJGKWUN");

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
    msg.setTimeStamp(0.23953878456137956);
    msg.setSource(37948U);
    msg.setSourceEntity(160U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(119U);
    msg.op = 172U;
    msg.name.assign("ASYGJRDBCTJSHNKHQDFFTDZUFMHUOHZXGPKNJLRWSIBSXEBQFFKCBOIEGQZSRUEDQXJAR");

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
    msg.setTimeStamp(0.47655589578981017);
    msg.setSource(61381U);
    msg.setSourceEntity(122U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(171U);
    msg.op = 136U;
    msg.name.assign("VPNPRKKWQXCLGRAVKZCHXQDUDTWTSUGNOMOPMHYMQLZNCADKQNCOFBQBQAMPCAYLTHXJGOLZNDUEVVCUJULRRJWIQIODHRPTDIILVHMKTVMMZJLXYCKRWZFBZYWCJUIOPZTRTHWKONAPXIUJKTSOKUFFWUSRYSVEQDZPYYFIECTZHAHVIFFBEPIRFQBXNEALMFDGOGGQWLSCNKYVVAJTFSJHSSWJSDG");

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
    msg.setTimeStamp(0.5959755949770434);
    msg.setSource(13060U);
    msg.setSourceEntity(105U);
    msg.setDestination(15070U);
    msg.setDestinationEntity(226U);
    msg.type = 23U;
    msg.htime = 0.3067683904492642;
    msg.context.assign("LTKTEDYIISYRDBQFMUHBMUSROPVQGIDLAWEDYEWWOVTFDSCBNMTYNFKFSQWITIENPVPHZTYGQZWH");
    msg.text.assign("TJOOJPYNNVIESMPEVXGGCNTLIJPHTBHCOWDJDSCAXCFLHJRESZCOYBSVUFMGMTTHQBKMGXNZCSHHYIXCSCJLPUYKRLNUGZYTUFWZIDNLHWSZZBRQDAIKARBRQIGOYBLXDUZEXKOBDXYGQFBKPRQZFCJWAIWYNTLIXDFVRQEAIUSSRVSBMEGPKUQYVAPFTZOOYZD");

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
    msg.setTimeStamp(0.557728405105212);
    msg.setSource(19546U);
    msg.setSourceEntity(9U);
    msg.setDestination(37564U);
    msg.setDestinationEntity(236U);
    msg.type = 234U;
    msg.htime = 0.6108079761723154;
    msg.context.assign("VUHSMYVHBXKOHFFDTQETXCKNOWXJJORDLNWIWOWVTQAYJFKKHGFRUGHSFGSJMJLYHPGITEFRBTEUECKBYJHZLAJFGNFVDXISNYORQCTYOXIQEADXYMCCQMORXZNLPHSVVKVCZLFIDKMKOGZDPBPTXARQBQZBWQBJWLTNZZYKHCAGSDAGXTKRIEMVSRNPZWCGAQMCVUAZDYSVGIUANWPMSUPMJTDRLRQJDEBEBXPZ");
    msg.text.assign("FMSAVFVZZDGDOBRTBLNSYTYVSLJOYVRDCYHMLFMJJNLHGBFRSSRWHRHSFWVXLHWPZDNIQPQKQDOWUICDDQAKTPHYGYILIXZVKSCVGG");

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
    msg.setTimeStamp(0.14255466633001435);
    msg.setSource(59522U);
    msg.setSourceEntity(19U);
    msg.setDestination(30834U);
    msg.setDestinationEntity(59U);
    msg.type = 217U;
    msg.htime = 0.594221357905373;
    msg.context.assign("LQWHDIQJHFFPSJBPFLTFOMVWCSGSSJOICRSQJDMHMBKVJWKBKIYOTKGMMRPVPHQTQWORZLBEDYYWWBPOKFCSFIOQ");
    msg.text.assign("VCNGTJWPLXFPQUD");

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
    msg.setTimeStamp(0.481954845249293);
    msg.setSource(31356U);
    msg.setSourceEntity(86U);
    msg.setDestination(15517U);
    msg.setDestinationEntity(185U);
    msg.command = 231U;
    msg.htime = 0.7414292230213094;

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
    msg.setTimeStamp(0.7963340647761709);
    msg.setSource(23316U);
    msg.setSourceEntity(70U);
    msg.setDestination(1346U);
    msg.setDestinationEntity(48U);
    msg.command = 235U;
    msg.htime = 0.7396363598149843;

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
    msg.setTimeStamp(0.7868486539107354);
    msg.setSource(47106U);
    msg.setSourceEntity(126U);
    msg.setDestination(27504U);
    msg.setDestinationEntity(11U);
    msg.command = 78U;
    msg.htime = 0.15970927863480433;

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
    msg.setTimeStamp(0.5798838361331684);
    msg.setSource(53089U);
    msg.setSourceEntity(195U);
    msg.setDestination(64122U);
    msg.setDestinationEntity(147U);
    msg.op = 53U;
    msg.file.assign("ARVMUHOJWNEYEBWIQZVTSCGCYQMHTVWGKILDJTEWSPLBGAPNPQWWVSPEYAVEFJXTHMUVLFXLXMQAPCCHXKUSYNLOGROIXGHPZOIVEWXOKMDGPDNECOOMTVNFYJKCDHQFTZLBKYRMFVAFZKUTRBOHGZJJANTQURWHRZMRFZJBYQIYSJBWEKTMJIURUPSDGDCAQRIXJYHXKIHSSAAIILLUNNYBOGTBRDNDBXNZ");

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
    msg.setTimeStamp(0.5042978752829108);
    msg.setSource(21143U);
    msg.setSourceEntity(105U);
    msg.setDestination(6485U);
    msg.setDestinationEntity(179U);
    msg.op = 241U;
    msg.file.assign("EDGFDFASAWKV");

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
    msg.setTimeStamp(0.6839655786293132);
    msg.setSource(6670U);
    msg.setSourceEntity(29U);
    msg.setDestination(53310U);
    msg.setDestinationEntity(112U);
    msg.op = 179U;
    msg.file.assign("CMFPHZXKJGZESLCNNTMCXIHWCLGAJMTRBOZWOJMIHKBUGXWUMAKPMCTZJRYSEYBRFUAVGJONSURCYVEAEWXQSIVGOURJZFEHYADWWZEUMPOBSTXRIUYYXKLOTPQNMDPVIJZKVMLVANQREXHSJYCZQSYTBRINDPPTIZQCWHUHFIDBFVPLFBNGKSLQLT");

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
    msg.setTimeStamp(0.6635204437744678);
    msg.setSource(14633U);
    msg.setSourceEntity(120U);
    msg.setDestination(11789U);
    msg.setDestinationEntity(154U);
    msg.op = 95U;
    msg.clock = 0.06276807307023868;
    msg.tz = -89;

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
    msg.setTimeStamp(0.0462809455458717);
    msg.setSource(55112U);
    msg.setSourceEntity(173U);
    msg.setDestination(9805U);
    msg.setDestinationEntity(113U);
    msg.op = 150U;
    msg.clock = 0.6883144307248287;
    msg.tz = -98;

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
    msg.setTimeStamp(0.13720047791957146);
    msg.setSource(42326U);
    msg.setSourceEntity(100U);
    msg.setDestination(60544U);
    msg.setDestinationEntity(165U);
    msg.op = 74U;
    msg.clock = 0.7055945993148312;
    msg.tz = -106;

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
    msg.setTimeStamp(0.46762848936704915);
    msg.setSource(6004U);
    msg.setSourceEntity(211U);
    msg.setDestination(19007U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.9823675214328619);
    msg.setSource(44646U);
    msg.setSourceEntity(209U);
    msg.setDestination(21176U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.06343525817090645);
    msg.setSource(12288U);
    msg.setSourceEntity(22U);
    msg.setDestination(47929U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.9030046974915478);
    msg.setSource(48532U);
    msg.setSourceEntity(124U);
    msg.setDestination(26884U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("CRASIEWDTUINXSFMIIHUAVWSPFICWFHMDXPGVPUHUOSFFDWILUTJNZOAQRBGCJMSKXJVCKLLQQLVSYMGTQZCDAZHKLXCUNZWFKVLTUSVQEOXVIOYIRLOHMDZJBQKZPGWIPLXBWKJNTKVCCSLACOUETFVDAKZYJOPZEGEAFXHSIORBRTGKMPMBYXGEJYWGPTZMXEHZBO");
    msg.sys_type = 3U;
    msg.owner = 33327U;
    msg.lat = 0.8611064741795112;
    msg.lon = 0.2701806336472333;
    msg.height = 0.6415557042640145;
    msg.services.assign("AZABEZAMUPLHAGZBOVTNWSUEQLVHICARUYDNCRIPTNLLDPKLSRSFHLCMAJCPDBYDQIHYIHONRNPXSQ");

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
    msg.setTimeStamp(0.6733435567016796);
    msg.setSource(57927U);
    msg.setSourceEntity(92U);
    msg.setDestination(4710U);
    msg.setDestinationEntity(40U);
    msg.sys_name.assign("ESXRIKUVEKEPMVPNLIZR");
    msg.sys_type = 202U;
    msg.owner = 55568U;
    msg.lat = 0.28836195109749985;
    msg.lon = 0.4080367950017397;
    msg.height = 0.997515742221996;
    msg.services.assign("ARXIMWSQEMBPOOWVORIILPFDVEZKSGBIXSYGCTJLYCIMQWZHTFQGOMPAYAFVOHSSTLLRKPQKMVHCVXKDWQEQZWGBDZBAEUGOKEATJRNRUXKDNIRFWCMDQXNFINGZNW");

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
    msg.setTimeStamp(0.3420297880796608);
    msg.setSource(12882U);
    msg.setSourceEntity(116U);
    msg.setDestination(10338U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("ZAQNHHWRLKJGWEJPUPCBPGMXVFHSHJOQDRIVFOLCDUOLGVABXLOJZAAZXLRZMQWXCSUDPRZIAFEZYYTNQNSUNMURTOCUOIIZPWBVF");
    msg.sys_type = 163U;
    msg.owner = 50657U;
    msg.lat = 0.9665237433864308;
    msg.lon = 0.2626060500728541;
    msg.height = 0.6087406037676387;
    msg.services.assign("UMXODWMUWICTPETRTOHHBPKTFLPMGUYYKETJLKHNEIRFRTLBGORFWTTBOQPRSZENEZHUAJFAYQPIGGEVRREVCHQEIMNIGWJGXOIDVPOBMSGQDIXLXMNTAQYAGKXKHFWLLYWFVZSFTAXFAPRLYBDJUZACLIVRPZNWBKYZHFNMFBSQCNQXNBYCXUVOAEDOOKVMUBAMSDCUMLDHWWVJJN");

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
    msg.setTimeStamp(0.026487349630885504);
    msg.setSource(30265U);
    msg.setSourceEntity(53U);
    msg.setDestination(56072U);
    msg.setDestinationEntity(116U);
    msg.service.assign("KWSDOGZIBPHJBDRWIBZZUZIKGWOAHLSRWTDEOBZZIYGFSPCYWYKXTMQQZHCCKMGGEOTSHNWIQLPAXEABNYYYNVEMKMNYGCDHUIPWSMGRPHBIOINYMOJJJKBQPNTVTRSGQSVXQYXTFZQAFSWACJHVDFJISTYPNLUDTMEENLUOXOPQLSIPMUFJULHKOOKGCFLLUTAQXJVRFCMEVK");
    msg.service_type = 162U;

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
    msg.setTimeStamp(0.9480569482813369);
    msg.setSource(15216U);
    msg.setSourceEntity(247U);
    msg.setDestination(14687U);
    msg.setDestinationEntity(41U);
    msg.service.assign("HLHSRIEPIFJXPLTEGBVUNIUVVJSXCGHYVAGFGQERWMYEOABDYPBGENTPMWTQXSHGICAKNEKGRBFUERLYAYDUQSIHIHNVLWKHCTVEJDQQLBWVKCBWAYDKUUDWCZDZTHCJJRJFPWJMITKFDSMPOZQYKNCFRNGPOZDOATBXOLSZYZWHFOZJANBRBLSZPPXMZCNMIAFSXOUCVZTWTPIGBFKVLUNMYEYGDMUSOCUORJINERTXODAFAMXKQLQKW");
    msg.service_type = 21U;

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
    msg.setTimeStamp(0.7939442844106205);
    msg.setSource(23056U);
    msg.setSourceEntity(132U);
    msg.setDestination(49471U);
    msg.setDestinationEntity(57U);
    msg.service.assign("SGDAUBCQVFISZMBIAWAOXHKZUGLYQFCAFJMWIGXOTUVTQCPYHBZYXOXRVSSBTYNZFRIDQNYJBVZWSTJNMWHCLXBIZADDUFGKPNIUA");
    msg.service_type = 241U;

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
    msg.setTimeStamp(0.8714655571219315);
    msg.setSource(9836U);
    msg.setSourceEntity(38U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(96U);
    msg.value = 0.011400136171956454;

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
    msg.setTimeStamp(0.09136636955065491);
    msg.setSource(49529U);
    msg.setSourceEntity(196U);
    msg.setDestination(46411U);
    msg.setDestinationEntity(47U);
    msg.value = 0.05399567919144377;

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
    msg.setTimeStamp(0.5735371886932151);
    msg.setSource(27591U);
    msg.setSourceEntity(100U);
    msg.setDestination(20793U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6262857527145713;

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
    msg.setTimeStamp(0.04474488261124654);
    msg.setSource(62245U);
    msg.setSourceEntity(6U);
    msg.setDestination(53457U);
    msg.setDestinationEntity(157U);
    msg.value = 0.29482535150847133;

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
    msg.setTimeStamp(0.390088983852656);
    msg.setSource(65379U);
    msg.setSourceEntity(225U);
    msg.setDestination(64611U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7800326690719643;

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
    msg.setTimeStamp(0.4089353854161605);
    msg.setSource(26849U);
    msg.setSourceEntity(229U);
    msg.setDestination(19791U);
    msg.setDestinationEntity(209U);
    msg.value = 0.13706556955785;

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
    msg.setTimeStamp(0.7820587133828565);
    msg.setSource(4899U);
    msg.setSourceEntity(224U);
    msg.setDestination(45566U);
    msg.setDestinationEntity(0U);
    msg.value = 0.020046240374373414;

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
    msg.setTimeStamp(0.7202370821695822);
    msg.setSource(32899U);
    msg.setSourceEntity(146U);
    msg.setDestination(59448U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7697753945215127;

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
    msg.setTimeStamp(0.1448792104762484);
    msg.setSource(29573U);
    msg.setSourceEntity(150U);
    msg.setDestination(33524U);
    msg.setDestinationEntity(126U);
    msg.value = 0.13718792623616616;

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
    msg.setTimeStamp(0.3703152022137649);
    msg.setSource(29667U);
    msg.setSourceEntity(223U);
    msg.setDestination(11027U);
    msg.setDestinationEntity(152U);
    msg.number.assign("FGDNTBYCAZBCSZVHFHUYTUCOVADMGECRQVXVZPXRJFZQIMOGWPGPLRPENJKUOIZGPMQKYZQIJHHAHUWCHZMCHRV");
    msg.timeout = 29009U;
    msg.contents.assign("OIIPCLBIAOMXDPGCZBEFUXBTYJMXPLVBRDZJOHEBZEHJCYPSJZJQFHHAIWMHTKCEUUSNWCUEGABLKORRVGUGXGUXMTFUJKXREBFHGYSNRJTHNQANBMAMOWTYGOPSQWRPQVSLMIOQRKCNQSCWBLZKXIFTYKYRMYNVYYEVCDRE");

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
    msg.setTimeStamp(0.35210023840041316);
    msg.setSource(58550U);
    msg.setSourceEntity(230U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(241U);
    msg.number.assign("YRLQFXEDUQRPOALTTMBUIJTBQYWNWDKCMON");
    msg.timeout = 51958U;
    msg.contents.assign("CDDLSERNZKLPOJVLEMDGZPEBWINYYITUIRCFSDVCUALJPVGYPTUMDEZAHQRCXUACRHZHPWMCMCNEVYFKMZGFBJSXRYMAYAHWSDFN");

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
    msg.setTimeStamp(0.943357376614676);
    msg.setSource(19364U);
    msg.setSourceEntity(141U);
    msg.setDestination(13034U);
    msg.setDestinationEntity(28U);
    msg.number.assign("JXNJADTNZTPCMEXHUMUFJKLWXEHWGKPEACMNVOGQGTLQYOOHKOTGDWWSBZCWGARYFVNQXDBAYJIGDTUOSFHEZPDRIQVZPPCMCXWRGXXILLIRADDRMOEICBUFBBFLNKRIBSSDHKAEVRNNHPSPNUQBYUYHGCEWCQMVXGFJFZMOZIWJYMUYLRWLIDVEZRJUOSPKBJVUHPMJFVOZFLWKYCXTNXJPIAGNTIYAM");
    msg.timeout = 8867U;
    msg.contents.assign("PSHKOQBBPHNCNOJQTXGMXYNNTPSMBLZGSGFBDWBOOXHYJLSVXVRRZVLPVWOECLDRAWLNETSAPLYZNSJWTGZPGQUKLFFDIORZQYFHAJEEGMEXRJIZXCRUQQFDHML");

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
    msg.setTimeStamp(0.2357356256550277);
    msg.setSource(58413U);
    msg.setSourceEntity(236U);
    msg.setDestination(47672U);
    msg.setDestinationEntity(122U);
    msg.seq = 3929973781U;
    msg.destination.assign("WCRWUCIHAHMTWERFKPRUAKJYUACFZHZEDSFRFFBDAOKNQJDBJVPMMWEIVITAMBSXGMEDBPKYIQLPTKGNCXYLAJNRQXZBDYEYNOXCHCGVLQREHBELHRVKJSESXVSSXFSFDPBTMRIYGNJDYQQUQLIYTHOIUWTMJMGUFLPLHXKMGZZJIWRBCDHUDQNROVPISVOAWNMKYPPGEVOVAOOSSZGXUJQBGCTYBKCTWLTZXNXUEVIPZUWWTK");
    msg.timeout = 18054U;
    const char tmp_msg_0[] = {13, 41, 78, -2, 1, -28, -111, 10, 21, -5, 30, 58, -35, 51, -31, 69, -102, -121, 91, -54, -65, 56, 61, -22, -87, 26, -95, 83, -70, -8, 22, -21, 17, 70, -118, 110, 76, -72, 60, -71, -106, -30, -95, -23, -92, 85, 41, -78, -105, -113, -118, 17, -54, 18, 94, 5, -80, -107, -70, -95, 100, -127, -34, 5, -62, -108, -28, 64, 100, 79, -113, -103, -110, -58, 50, 81, -65, -79, -40, 22, 49, 27, -35, 52, -85, 88};
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
    msg.setTimeStamp(0.4760288499578683);
    msg.setSource(44341U);
    msg.setSourceEntity(222U);
    msg.setDestination(16687U);
    msg.setDestinationEntity(167U);
    msg.seq = 3112886995U;
    msg.destination.assign("NVSHMMXODOCMJHGITYGOXKLXKRYFFVPSVPRNHXBICDRJMYJROANEQQPKLBPILUTNIBBSFXUDYEZNCEVTBHCCSOPRSGSQSLNWHTRQJKARGTAMNHGZXXVSEMAFAYEADJPEQCRBRMOMKUDHOHEZXDYVZGALDKIIGCYIFPMAEZQQBZNEFWUWKVWWGJABOWJMYWIBZVIFDTZBCLKDXGATFUZQKCQLUUNUDZLPTCSORPGWXYPVQWJNJYW");
    msg.timeout = 43939U;
    const char tmp_msg_0[] = {-100, 49, -39, -112, 66, -94, -53, -17, -104, 102, -5, -9, 50, -52, -97, -2, -98, 58, 99, 58, 20, -45, -24, 91, 122, 83, 6, 55, 107, -50, -27, 106, 82, -14, 99, 83, 51, 96, -61, -73, -77, 27, -36, 106, 67, 76, 94, -116, -53, 28, -49, 91, 45, -52, -122, 81, -20, -47, 48, 116, -119, 58, -41, -46, -32, 27, 53, -92, 23, -37, 10, -114, 81, 61, -21, -11, 52, -34, -3, 98, 12, 103, 50, -50, -70, 106, -80, -19, -44, 53, -6, -27, -42, -38, -72, 94, 78, -46, -87, 41, 104, 97, -113, -5, 28, -44, 63, -73, -94, -22, -51, -54, -110, -118, 46, 113, 105, 96, 27, -115, -26, 118, -93, 12, 89, -77, -97, -79, 64};
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
    msg.setTimeStamp(0.11782987796220712);
    msg.setSource(39536U);
    msg.setSourceEntity(60U);
    msg.setDestination(58791U);
    msg.setDestinationEntity(252U);
    msg.seq = 2347111410U;
    msg.destination.assign("RHWEVKHIQSRCGRKLXHHSKJWPXEXIMEILMFUEMQDQLKGCLVEZJQGOSQPMUHVNYLZBCDLRWMAYAMCGIFFPBYJVSGDHOBTEXYKINHBJMAJSYJTTAPYQUSZKBQWBRSQSZFTOFEKTFIOPADWNISVATEUNNGUMDRWEYRCDCAJIODPPGZHVRZJTYYVVWDOOAACCOIPTTBQSUBNBLGPWNLYQXJWUKDXZNVHOBGZCGPW");
    msg.timeout = 56640U;
    const char tmp_msg_0[] = {-106, -103, -64, -87, -2, 6, -98, 1, 31, -57, -96, 85, -49, -106, -127, 97, -107, -14, 29, -62, -24, 41, -128, 65, -72, 13, -109, 7, -45, -77, -125, 126, 121, 100, -17, 99, 117, 117, -101, 108, -120, 66, -71, 108, -101, -63, 10, -119, 94, 38, -73, -47, 34, 114, 75, -93, -7, -106, 112, 83, -90, 34, -54, -31, -3, 33, 122, -116, -111, 4, -110, 55, 65, 6, 68, -126, -1, 59, 103, 28, -74, 90, -40, 80, 74, -2, 39, 121, -57, 96, 82, -90, 47, -75, -8, 93, -1, -106, -34, 86, 6, 111, -30, -119, 26, -95, -69, -30, -89, -53, -2, 86, -82, -121, 47, -86, 61, 77, 49, -5, 21, 22, 2, 82, -76, -51, 100, -36, -108, 73, 31, 125, -91, -67, 37, -89, 72, -49, -31, 13, 59, -6, -54, 55, 43, -65, 116, -43, -3, 4, 115, 115, 99, -18, 84, -62, 39, -76, -93, 14, -29, 48, 60, -111, -1, 68, -88, -122, -88, 125, -102, 30, 41, 27, -30, 32, -92, 5, 112, -13, 126, -34, -118, -6, -24, 1, -7, -48, -68, 93};
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
    msg.setTimeStamp(0.21571004080064637);
    msg.setSource(56657U);
    msg.setSourceEntity(199U);
    msg.setDestination(25742U);
    msg.setDestinationEntity(157U);
    msg.source.assign("XRPVPFMWALZKUMACSEDCVRXLBEIGPYYUOETGJWIFILVGZMTSYFXLUNUCANXHMXKJKZEAOSCEZFDGGNCFFJDQEBMBQPTRIHIJIBMHTVLIUNASKHEQASDOERJYDUATOSRHXIJFOBKONTWHGSDZMOUBSCCGYD");
    const char tmp_msg_0[] = {32, -1, -54, 42, 5, -41, 66, 75, 113, -1, -80, 92, -113, -63, -29, -65, -110, 24, -61, 2, 80, -27, 12, -4, 49, -18, 93, 86, 104, 104, 125, 87, -97, -52, -93, 15, -21, -92, -110, -52, -106, 16, 52, -54, -62, -74, 32, 123, 39, 0, -25, -109, 79, 72, 82, -77, -37, -81, 125, -102, 92, 39, 123, 103, 53, 33, 49, 73, 33, 24, 58, -77, -48, 80, 77, -35, 101, 19, 30, 64, 61, -78, -74, -45, 90, 43, 72, 99, 13, -101, -10, -43, -91, -57, -116, 92, 22, 29, 62, 44, 113, -109, -106, 26, -113, -12, 43, -2, 93, 57, -6, -122, -12, -21, 48, -88, -103, 26, 44, 34, -20, -62, -15, -76, 61, 101, 8, 72, -66, -20, -122, 62, -54, -87, 112, -123, 15, -82, -88, 39, 33, 93, -111, -8, 93, -114, 103, 9, 4, 79, -55, -93, 90, -39, -77, -54, -72, -75, -87, 3, 34, 87, -93};
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
    msg.setTimeStamp(0.21281532302029837);
    msg.setSource(22714U);
    msg.setSourceEntity(177U);
    msg.setDestination(73U);
    msg.setDestinationEntity(2U);
    msg.source.assign("HVPWIEXYKCAAWKQFGUYGRWVQQPI");
    const char tmp_msg_0[] = {-63, 65, -57, -73, 113, 96, -110, -22, -26, -11, -118, -48, 49, -119, 87, 53, -60, -29, -42, 113, -47, 39, 100, 122, 31, -104, -76, -82, 4, -117, -71, 87, -44, -83, -56, 47, -86, 10, -2, -109, 12, 39, -95, 112, -109, 86, 67, -118, 93, 25, 52, -4, 48, -101, -96, 19, 94, 65, -86, -78, 98, -42, 108, -115, -14, 31, -96, 66, 39, 18, -14, 116, 27, 23, -85, -50, 31, -113, -112, 126, 52, -127, -63, -111, 88, -34, -81, -116, -119, -73, -48, -126, 24, 31, 121, -59, -128, -18, -89, -1, 41, 84, 62, 27, 40, 35, -101, 70, 13, -27, 71, 27, 99, 8, -103, 71, 4, -53, -1, -72, 10, -59, -52, 76};
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
    msg.setTimeStamp(0.8772185318494922);
    msg.setSource(42287U);
    msg.setSourceEntity(120U);
    msg.setDestination(13038U);
    msg.setDestinationEntity(65U);
    msg.source.assign("TTXJYMACGWSSVCLNZYLPHWPALCVXWMLZIFETHCQM");
    const char tmp_msg_0[] = {20, 26, -53, -62, -121, 26, 68, 55, -90, 50, 53, 104, -68, -63, 109, 28, -35, -62, 84, -95, 116, -114, 90, 99, -20, 9, -81, -122, -29, 81, 90, -31, -113, 116, -23, -48, 65, -23, -123, -8, -46, 15, -128, -68, 17, -128, -117, -11, 64, -10, 72, -43, 50, 74, 76, -77, -115, -104, -126, 3, 35, 53, 20, -72, 4, -61, -33, -123, 0, -85, -115, 31};
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
    msg.setTimeStamp(0.9643695827801013);
    msg.setSource(48856U);
    msg.setSourceEntity(32U);
    msg.setDestination(60460U);
    msg.setDestinationEntity(219U);
    msg.seq = 3481315302U;
    msg.state = 235U;
    msg.error.assign("GUPFFGXIEYZXCSNBBEZEEIRBKKXTHGBCBIOHXKFCYLSXQKDNPZUWPWFTTVTRGLJSNONSAJSQEGAZVPIMHRDNTLLESQIFZWJKOMPTQYZGUARXVCOAEDPSPRVVSMMSFRPMJOBJBBVL");

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
    msg.setTimeStamp(0.16503006515195362);
    msg.setSource(63869U);
    msg.setSourceEntity(218U);
    msg.setDestination(7340U);
    msg.setDestinationEntity(18U);
    msg.seq = 2737263403U;
    msg.state = 187U;
    msg.error.assign("ZLYLZQPYMXSDJMENTPHOIDLDVNOEUPPBUDMKYTXAWWXBKSGVPLLFXWUDAYKPOIPERAURVTQWJFAAUJMINSQBVAVQYRXTZLJXIECNISSFYEHGUEJBQYGERSXSUFOARZTWRHSDCHKNKCCGEAIFQMWKOHBBBKZQJGLCPVINBTZSMWTMVJPSXZYDFKGFKGXOYLPFDCNTXRAHOVIZT");

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
    msg.setTimeStamp(0.5455492032407508);
    msg.setSource(19047U);
    msg.setSourceEntity(184U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(92U);
    msg.seq = 2581974057U;
    msg.state = 0U;
    msg.error.assign("NKSQUWSWIYYBBENJZNNFACBSCYAIZFDYSIXELJMECPOJWXBEIPWODZZYCSRBFPCNEB");

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
    msg.setTimeStamp(0.9294415111964817);
    msg.setSource(1231U);
    msg.setSourceEntity(147U);
    msg.setDestination(47819U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("ZFMQRGKFOIJEARKVEFSOCOBYEDDSAXPHQLNTGTIKJSCKQLTIWDIEPOYAIUAVPEXHGWHAHKQASEYOPFPPRFLLREJYHUCUMYHFZVPLCYANJXMBQNTVMJKQJWZKMMVXYXMKHUFYDUWIXOJDZAYGQPWLXUWZTJXRCITCBJJONVDBEMNDCWXZSEUKFZCLQEDONLBBZLGIKSTNUXBLIBPGUQVGAWSHVWCACTUBZSNZRR");
    msg.text.assign("KEOORGZRKDALSNEPMOHXODPLHITNINCVZBBKUDTDTVUJRTZSEPSAAVOHRUUPLZXCVKFVAGVNWKJHEQMLBMGXFTLYHXSIZBHRVCEWAXHGCFZXNOOSOWYUMLMCIZNKXWGWBOIQGWJORXTLJCDBAUGAIDQLUFGFBJTPSWYJEYWQVJTIDRDVRTKCVTPMEIZHIMQQYJXQMYRPYUADUQJWAFMCAYPNUDRKYMFJGZXISNCHELQPEZBNPCFSYSFSW");

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
    msg.setTimeStamp(0.6261993962737663);
    msg.setSource(58009U);
    msg.setSourceEntity(91U);
    msg.setDestination(13483U);
    msg.setDestinationEntity(72U);
    msg.origin.assign("BLAWTAJBLRYNLMNGIQAHWCEPUKURZFEMWYJEKRHYPMRZGMCTDNCHEBHISVWGNCQPWXJEKXUOVVYQ");
    msg.text.assign("HOKCIYTUOZCHZQEOSGLOXKTXPOAXOWSIGFKCQJNFBQE");

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
    msg.setTimeStamp(0.28678961687762317);
    msg.setSource(37764U);
    msg.setSourceEntity(206U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(238U);
    msg.origin.assign("GKMUYPIUZHTQVUJQINVGVDXLGTIRIGDXWNKMFXEYKASZCJOBGVYZTFZXNVCJWYAZNMLZBWZALTAUOEQDBERDEJDHC");
    msg.text.assign("EJQLKLTXMHDXTIRLRPEHRUZKWLMSKHTINRBGVHABXILODAJWPYIBLFITWGSZIWQETXUTGAUPXZJAGSVMVNFTPMUTFWYDJQXHBDODCKZOLGNEFJEKPUSUQNMZVYQWEMSHCHFNXLVOCJPWCJKWGZVCYNYHIDCADJKWOQLXBZFYDZSYCAMUBPXAPCVCYQEIRNBQOTHGFSNAKVZTEDYMBBQMVVNFGJEKGRRSZUKPASIRYFO");

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
    msg.setTimeStamp(0.9367850597288594);
    msg.setSource(58800U);
    msg.setSourceEntity(117U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(21U);
    msg.origin.assign("NOESIUTMKTNRIWNLILWOABMFEEFWTPFXTKRDPRSQQIJCEMGDGSMMUISOAKHLTLUDUSCWTZXOTPMNG");
    msg.htime = 0.8722954514219955;
    msg.lat = 0.24274825823734125;
    msg.lon = 0.4450184539680929;
    const char tmp_msg_0[] = {120, 101, -114, -115, 44, -110, 69, 108, 25, -119, 56, 54, 21, 49, -56, 77, 33, -126, 125, -88, -52, -52, 22, -38, -116, -32, 46, -89, -15, 124, 90, -124, 77, -103, -97, -116, -21, 104, 93, 80, 74, 108, -76, 3, -101, -4, 123, -92, 39, -68, 122, -47, -95, 4, 49, 60, -83, -94, -41, 100, -116, 57, -101, -56, 62, 116, -62, 93, -71, 102, -70, 17, 19, 13, -97, -126, -53, 14, -66, -16, 99, -114, -91, -111, -128, -56, -22, 29, -90, -77, -76, -97, 117, 95, 39, 93, -7, 54, -79, -124, 83, -31, 42, -80, -45, -92, 54, -75, 17, -37, 52, 8, 61, -35, -70, -16, 69, 123, 44, -52, 48, 37, -45, 8, 64, 82, 81, 100, 95, 17, 123, 21, 46, 28, -65, 31, -89, 103, 79, -99, -88, 54, -53, -41, -111, 38, -75, -85, 126, -107, 31, -99, -108, -65, -1, -27, -11, 32, 56, -92, 95, 12, 26, 8, 68, 47, 26, -116, -43, 46, 16, -19, -66, 39, 97, -103, 101, -91, 119, 126, -9, -27, -97, -71, -109, 5, -58, 69, -12, 122, 67, 22, -1, -121, 97, -120, 46, -38, -62, 77, 4, -125, -84, -94, -54, 99, 85, -90, -52, -7, -46, -95, 117, -88, -26, 124};
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
    msg.setTimeStamp(0.015843728464558837);
    msg.setSource(44436U);
    msg.setSourceEntity(185U);
    msg.setDestination(29454U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("MUBRQNNHXWKYZCYCELZAQFYIJTXVGTFJNMUQQKICQFNSGYVGFDXWIIIJGBOXSKYLPMUSXZGOBPSHPFQRVOBNCICBNXRTILLFDRMDMAPVYBCHRSWCLHCPEYCJGUVKNTXJAPKJJLLASHGEWHGCDWAQZI");
    msg.htime = 0.8385371232317268;
    msg.lat = 0.19267200109695848;
    msg.lon = 0.10009672837895256;
    const char tmp_msg_0[] = {71, 53, -34, 49, -47, -126, 78, 44, 29, 123, -40, -1, -11, 81, 4, 118, -39, 10, 78, -7, 12, 74, -3, -65, -102, -101, -33, -101, -84, -105, 126, -48, -78, 118, -57, -104, -84, -41, -121, -123, 85, -42, -119, -25, -53, -108, -124, 3, -116, -115, -39, -117, 92, 71, -30, 39, 85, -23, 61, -127, -17, -33, 29, 93, -92, 77, -15, 64, 59, -56, 31, -27, -92, -127, -72, -125, -120, 101, 54, -10, -116, 38, -102, 58, -64, 92, -10};
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
    msg.setTimeStamp(0.6205520267560938);
    msg.setSource(50948U);
    msg.setSourceEntity(102U);
    msg.setDestination(37651U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("DQSAFLQMJLNDBJGQWKJHHQVAGDAKQBTHZXRAOUVCOBJHFOKIKPUVREKYQUTYQRFCOGYCLCOHDGRZLLWLNIGXFSVYMOPGRWOTWZQCIEULGVQKKKNDTMUHPMVPEJSTWMPWHRVZAREC");
    msg.htime = 0.2556023468856621;
    msg.lat = 0.060053207786534446;
    msg.lon = 0.9299706308241636;
    const char tmp_msg_0[] = {0, -47, -29, -116, -5, -66, -123, -20, 30, -122, -61, 34, -31, 52, 27, -62, -40, -94, -32, 111, -107, -118, 40, 95, 91, 7, 24, -80, -19, -36, -104, 45, 75, 63, 98, -31, 9, -5, -39, -13, 38, -6};
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
    msg.setTimeStamp(0.3695735713691787);
    msg.setSource(52175U);
    msg.setSourceEntity(181U);
    msg.setDestination(57170U);
    msg.setDestinationEntity(123U);
    msg.req_id = 25369U;
    msg.ttl = 16203U;
    msg.destination.assign("WXCLNGKWWZIBEBTZUSMZVEROHSCNYQBWRJCRNATSUTEOLE");
    const char tmp_msg_0[] = {-55, 98, 118, 66, -97, -62, -66, -123, -31, -45, 46, 79, 17, -124, 108, -12, 47, 95, 27, -119, -99, 102, -82, 74, 46, -60, -128, -25, 105, -4, -3, -6, -6, 105, -2, -79, 56, 122, 122, 62, 90, -97, 13, -16, 96, 56, -60, 104, -100, 119, 16, 98, -25, 77, 97, -19, -90, -42, -40, 103, -107, -112, -50, -58, -97, -47, -31, -80, -107, 117, 26, -62, -40, -7, -101, -105, 66, 121, 29, 104, -9, 83, 29, -21, -124, 117, -111, 2, 72, 115, -32, -98, -94, -25, -31, 0, -101, 32, 113, -116, -24, 87, -17, 62, 116, 68, 77, -94, -16, -124, 96, 40, 16, 40, -4, -54, -33, -115, 32, 115, -97, 8, 40, -74, 104, -102, -103, 42, 56, -86, -94, 57, 105, -5, 120, -6, 87, -118, -3, 31, 7, -50, -94, 99, 126, -105, 43, 25, -6, 85, 96, 16, 96, -84, -24, 67, 118, 39, -100, 102, 55, -48, -20, 92, 59, 68, -102, -120, -11, -98, -95, 88, -78, 34, -11, 79, 62, 71, -60, 101, -8, -31, 87, -82, 13, 61, 12, 16, 18, -125, -74, -56, -9, -128};
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
    msg.setTimeStamp(0.07084300269246846);
    msg.setSource(38384U);
    msg.setSourceEntity(94U);
    msg.setDestination(12886U);
    msg.setDestinationEntity(206U);
    msg.req_id = 39328U;
    msg.ttl = 37463U;
    msg.destination.assign("HLMJUIHZOXKXIYIARVQJLDUZXGDYWXFJRJMBMHNRTGRZLMBJWGKTQOEHNUCQVKFLZUHXWQPMXUNYPSDDZGWDACDAFTLGKSIPIMVWOGNYNMGWCSOUX");
    const char tmp_msg_0[] = {21, 22, -114, -88, 48, 26, -37, -24, -58, 47, 113, -22, -111, 116, -115, -40, 108, 49, -98, -101, -28, -81, 55, -123, -112, 50, 73, 11, 13, 64, 39, -97, 117, -113, -22, -52, 120, 76, 60, -88, -12, -86, -54, -53, -54, 54, 46, -126, 25, -114, -24, -128, -34, -36, -105, 42, -55, -125, -9, 33, -75, 0, -17, -119, 85, -92, -10, 124, 66, 34, 19, 95, 30, 103, 112, -118, -74, -48, 56, -54, -105, 28, -107, -109, -62, -44, 1, -71, 92, -91, 76, 42, 60, -83, 70, -85, 20, 92, -32, 30, -45, 81, 49, 104, 83, -4, -13, 72, -90, 75, 26, 97, 66, 41, -9, -73, 106, 116, 122, 40, 86, 85, 55, -27, 13, 25, 98, -112, -73, 63, -122, -78, 1, 121, -86, -34, -107, 109, 62, 85, -86, 19, 37, -45, -72, -70, 52, -124, 115, -12, -119, -104, -22, 89, -55, -69, -2, 64, 53, 78, 117, -54, -71, -98, -78, -7, -95, -105, 2, -1, -110, 20, 49, 76, -11, -9, -66, -116, -111, 27, -85, 106, -58, 12, -91, -110, -50, -92, -37, -59, 38, -128, -100, 39, -95};
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
    msg.setTimeStamp(0.16496954533834496);
    msg.setSource(12251U);
    msg.setSourceEntity(183U);
    msg.setDestination(27875U);
    msg.setDestinationEntity(123U);
    msg.req_id = 48403U;
    msg.ttl = 41467U;
    msg.destination.assign("GHNOQTCBGQFSWBUDVHLCZBWFAMPZAIGSIZLEYSKBXNEQNTJPOBSXHDTLPUDFMCLWTPYYEINEWLJAQIXPPWYOXTCGJQPXHZRNKRMILKETCICBMZEMVUJHJVCIARGFVUSOFQWUDMINMYYVRTKMYSUQOLONRJN");
    const char tmp_msg_0[] = {-7, -65, -31, -4, 9, -121, 62, 40, 19, 91, 102, -5, -84, -13, 21, -36, -103, 1, 59, 3, -87, 106, 50, -4, 86, 11, 1, -39, 97, 63, -86, -96, -96, -101, 45, -59, 92, 37, -90, -64, -48, -126, 89, -55, -126, 8, 102, 62, -35, -94, -57, 8, -123, -108, -111, 6, 26, 16, 62, 64, -117, 74, -84, -85, 107, 55, -98, 123, 12, -52, -31, 82, 14, -103, 114, 59, -86, -120, -119, -80, 61, -60, -8, -113, -105, -52, 25, -60, 120, 120};
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
    msg.setTimeStamp(0.838362570839187);
    msg.setSource(51418U);
    msg.setSourceEntity(234U);
    msg.setDestination(47295U);
    msg.setDestinationEntity(200U);
    msg.req_id = 242U;
    msg.status = 231U;
    msg.text.assign("KRVFUCILRRLQTGGXBGOEPNPPRCUZYSBGOHUZJHUFKGPQMPESNZNTFFYXXXBFWEIYVGIDQDAFNOZMVZXXJUVBMCCCJIWCKWTQSWRTVTGERIMOILOXNGBVZQHVKAAZAVLEDOTISLLJCXBSMJWWLAZMEOMVTKIKYGMXGWENUPURJLHYORSHIKD");

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
    msg.setTimeStamp(0.6251636177218742);
    msg.setSource(23300U);
    msg.setSourceEntity(149U);
    msg.setDestination(9041U);
    msg.setDestinationEntity(59U);
    msg.req_id = 64747U;
    msg.status = 224U;
    msg.text.assign("SLXDOJTAWYDLHDNIBYZAPVJSEYQIFPIGVJEYGNRZQAZHSWXTPFEOERFCMMSUPQQHXLRYKIMEBKTRUICWCRVIUGGNMLCUOMQDXOTMBZJMVXDWHVPGQUNRXAXBCBOJKYZEPWOHFJYSRKASQGSFZPEBSGNEIFKSJAKLLTXARUNBLWBPUODFTCDFTKBRULWHDTVRJVEXWCYZTTHNVQZCGLOO");

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
    msg.setTimeStamp(0.2509155222513981);
    msg.setSource(28842U);
    msg.setSourceEntity(194U);
    msg.setDestination(6022U);
    msg.setDestinationEntity(235U);
    msg.req_id = 15121U;
    msg.status = 164U;
    msg.text.assign("NNAILXJHGXHVRQSOYHSWQNVGXESUZYEFRMBMDFVEULSXUOVEEKCARHNFKNIFGIAAWQXCZPGJUIYQBJEQRHYCHOLWNZMAJMRBKVWQAWS");

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
    msg.setTimeStamp(0.6766444941283378);
    msg.setSource(47525U);
    msg.setSourceEntity(141U);
    msg.setDestination(3569U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("XYBGKQNVHHVDNNXQKQZRZWMDPATOWXAYWJKPSVQKLALCJJXSVQBSEQSRGGDTLFCPTNMPCAZIFIESTOYGZYBNROCEPEQLRZULCTMKUKAIISVIPHNFFDJWKLREETTBPIKHERWYIMYGORABNBDKCSJMQVNJOCHIVRPAFFPIHNIHXFLOZJW");
    msg.links = 3056330663U;

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
    msg.setTimeStamp(0.733139151262);
    msg.setSource(24861U);
    msg.setSourceEntity(77U);
    msg.setDestination(63667U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("IDOBFTJLMRHGFGNGABCBEKURJMPTPXJXSPJTAYDEUCNITSLYJACEHQRMLGH");
    msg.links = 2782700358U;

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
    msg.setTimeStamp(0.07425607621598229);
    msg.setSource(59042U);
    msg.setSourceEntity(145U);
    msg.setDestination(443U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("IEPSJPJASTGCHWWAOGSONPUFASXS");
    msg.links = 3906691170U;

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
    msg.setTimeStamp(0.33295687435904076);
    msg.setSource(31189U);
    msg.setSourceEntity(202U);
    msg.setDestination(44275U);
    msg.setDestinationEntity(8U);
    msg.groupname.assign("RXBFNSBKQPDVNBPWHOGCXTLCHFGXRVYJWRAQYIQTKOXTVMUJGEZVAOZXYOZCJMYTOYMIGPYHDDTUBOUBILFUQKPSIYZOIMECJKGEWETLPAIS");
    msg.action = 239U;
    msg.grouplist.assign("LCEHONQFPSBCVPZFQAXZLDIDRNTDGANEEVWCYRSPSJEHUUBEXCRARNGRKQSGQHCUUSZHLYYHZFOTVALLDTFIDJTMWAXKDSAFWBMQBEGJFHJVQIWSDKTKNXFMPCHKBAJWWNQVURLEXASFIHOQNFOXBVDCYYYVBIXTYKPAYGYZZBWOHCJPIQVEYNVREIPMLIJMZNGVPMWULOMZZLFKT");

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
    msg.setTimeStamp(0.5489303908239856);
    msg.setSource(6831U);
    msg.setSourceEntity(107U);
    msg.setDestination(47433U);
    msg.setDestinationEntity(5U);
    msg.groupname.assign("RYOVIFQVOGSECTLYARKGCAJNRBTKNNGTSWFOSXXKEVIONZVIDYCZQTULVDWRVYBSNMCSFBCEGBQOFFAUYXOHCGXPLCKUDXQJMZZAAVUWLTTSZAKZNQXOYIQMZURLGUDGVWPJHPSEDIHIMWEBFLVWPDUYJJUGWI");
    msg.action = 211U;
    msg.grouplist.assign("WXYHPQBHYKVCIZUKDJTCQRUPVMJLHBDPRJEVZZLASEQMDCMNNIINCWDFTPHBCXKXWGERWFKBRNNTDAUPFATZOMIOSIKJEWAAZWQYSLLGOFXPXSTQQOXRJFBUVAMTCMTDZLJHMFIQYMLMNXGFURGQPRJUFSHIDONHPFLXSNKVAKCBRVDHHICGOLAEOGVBWGJJKBWHGSVIXTTQBNPLDBZVJGLXFDYVEKCZIYMEZRZWOEOYUAPSTRGU");

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
    msg.setTimeStamp(0.17601050679122243);
    msg.setSource(15411U);
    msg.setSourceEntity(82U);
    msg.setDestination(18088U);
    msg.setDestinationEntity(82U);
    msg.groupname.assign("BHBVBAIZTUENIFYLKAUTVSHFGRJSWKAWRXYILEEYFOOBQKZBMOXFUNQYHXQHEITMLQNRCBMQBYPVHFARLUTSSROCJZJONAFFTVGHRPMDNQIBKXPISLGAZWVNCEQWMDRREKKNNWUQXXVDGOEZEQJXGJFISJ");
    msg.action = 24U;
    msg.grouplist.assign("UCZBABAIHWETFDHYYMTEDAILVUFRUIAPBAIUKENULAMBJXLOFSMCHBWZREQXMVONGGZWLTIQEJPFCELJCWAKBDLKNOWRYZWFPSXZJOVOUTZCJSKCFGDNFPXJQNFKGUTXBAUG");

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
    msg.setTimeStamp(0.596015667406604);
    msg.setSource(15748U);
    msg.setSourceEntity(228U);
    msg.setDestination(55568U);
    msg.setDestinationEntity(107U);
    msg.id = 141U;
    msg.range = 0.4305787365399294;

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
    msg.setTimeStamp(0.8353873351684963);
    msg.setSource(55673U);
    msg.setSourceEntity(209U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(239U);
    msg.id = 95U;
    msg.range = 0.23369074678481427;

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
    msg.setTimeStamp(0.504294831829981);
    msg.setSource(35695U);
    msg.setSourceEntity(142U);
    msg.setDestination(9062U);
    msg.setDestinationEntity(38U);
    msg.id = 120U;
    msg.range = 0.7014760857728249;

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
    msg.setTimeStamp(0.3578224729477233);
    msg.setSource(27972U);
    msg.setSourceEntity(184U);
    msg.setDestination(22322U);
    msg.setDestinationEntity(47U);
    msg.tx = 37U;
    msg.channel = 103U;
    msg.timer = 63347U;

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
    msg.setTimeStamp(0.43967387792756407);
    msg.setSource(26354U);
    msg.setSourceEntity(190U);
    msg.setDestination(5564U);
    msg.setDestinationEntity(39U);
    msg.tx = 114U;
    msg.channel = 99U;
    msg.timer = 54247U;

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
    msg.setTimeStamp(0.5052118479684578);
    msg.setSource(33564U);
    msg.setSourceEntity(216U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(83U);
    msg.tx = 132U;
    msg.channel = 193U;
    msg.timer = 60414U;

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
    msg.setTimeStamp(0.1704675555017472);
    msg.setSource(23606U);
    msg.setSourceEntity(130U);
    msg.setDestination(28932U);
    msg.setDestinationEntity(151U);
    msg.beacon.assign("FONDQHVQPVVUBCEMZTOYUXVYFXKJWVNDOGDUMPVOJOCLUPQDRBGSXZAUTLNMTKJARXHZISOZYLBURGWGESBCSCPIEXSJDPMJWSYQHRMYCTXTXXRNFBARGZZOCEZAJYWTLVYHFQLPKTHFUWSWHKIKCEIQFUAFETDVVLBWZIIWHOCIGBEWZSIMFKTWLIOYGSHANPUYMEIVRGXLMNGQLZEDF");
    msg.lat = 0.796407284935421;
    msg.lon = 0.6478064177290551;
    msg.depth = 0.42880803416972413;
    msg.query_channel = 194U;
    msg.reply_channel = 220U;
    msg.transponder_delay = 191U;

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
    msg.setTimeStamp(0.12754711416288989);
    msg.setSource(24283U);
    msg.setSourceEntity(80U);
    msg.setDestination(336U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("GXKCOUENVTIZTMREHZRSMJHQGQYKBMNXCEVAVNMUA");
    msg.lat = 0.5026720093653153;
    msg.lon = 0.6112928769918092;
    msg.depth = 0.589057598458736;
    msg.query_channel = 225U;
    msg.reply_channel = 178U;
    msg.transponder_delay = 164U;

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
    msg.setTimeStamp(0.6892839288579741);
    msg.setSource(27371U);
    msg.setSourceEntity(214U);
    msg.setDestination(17028U);
    msg.setDestinationEntity(133U);
    msg.beacon.assign("HGTGOVWEFQPJNQBQOVIWXZQXAAKJWHCNVHWMBPYETYXNTJILLFNHUXFIQFPCWOMCATIPMFVYYQTRZCCTDPZNERZNPERPVUOVGWWUDSAUYCIKDEKHIHBSFUIKQCQXVXBRAJFHPZZAAZBESOL");
    msg.lat = 0.9157239723089659;
    msg.lon = 0.5979109188102972;
    msg.depth = 0.943427354474939;
    msg.query_channel = 58U;
    msg.reply_channel = 71U;
    msg.transponder_delay = 151U;

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
    msg.setTimeStamp(0.8947624834532373);
    msg.setSource(59093U);
    msg.setSourceEntity(205U);
    msg.setDestination(33955U);
    msg.setDestinationEntity(242U);
    msg.op = 51U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PTFKOJTZXPVVUHAUJLBDDORIPXGTOWSWHZIGOSGQKQFGCQKEGKZFQEXBBBIPNLYACFFHAHDQLVFQUDMXGIJSMCSBAMGMAR");
    tmp_msg_0.lat = 0.1810094467441783;
    tmp_msg_0.lon = 0.9900748011476641;
    tmp_msg_0.depth = 0.06787687088574224;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 66U;
    tmp_msg_0.transponder_delay = 1U;
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
    msg.setTimeStamp(0.3537632081167562);
    msg.setSource(25662U);
    msg.setSourceEntity(202U);
    msg.setDestination(34623U);
    msg.setDestinationEntity(138U);
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
    msg.setTimeStamp(0.39870896485174745);
    msg.setSource(29472U);
    msg.setSourceEntity(35U);
    msg.setDestination(30145U);
    msg.setDestinationEntity(133U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.24924227056303327);
    msg.setSource(59475U);
    msg.setSourceEntity(46U);
    msg.setDestination(14467U);
    msg.setDestinationEntity(59U);
    msg.address = 176U;

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
    msg.setTimeStamp(0.04468795128834824);
    msg.setSource(8506U);
    msg.setSourceEntity(230U);
    msg.setDestination(37560U);
    msg.setDestinationEntity(77U);
    msg.address = 100U;

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
    msg.setTimeStamp(0.7824300929688667);
    msg.setSource(36800U);
    msg.setSourceEntity(151U);
    msg.setDestination(14303U);
    msg.setDestinationEntity(97U);
    msg.address = 118U;

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
    msg.setTimeStamp(0.4346417917380474);
    msg.setSource(46129U);
    msg.setSourceEntity(120U);
    msg.setDestination(14445U);
    msg.setDestinationEntity(33U);
    msg.address = 222U;
    msg.status = 72U;
    msg.range = 0.457344854570779;

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
    msg.setTimeStamp(0.868918956671441);
    msg.setSource(17742U);
    msg.setSourceEntity(21U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(23U);
    msg.address = 46U;
    msg.status = 250U;
    msg.range = 0.710726272065796;

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
    msg.setTimeStamp(0.7558125686808519);
    msg.setSource(50413U);
    msg.setSourceEntity(65U);
    msg.setDestination(37283U);
    msg.setDestinationEntity(125U);
    msg.address = 116U;
    msg.status = 54U;
    msg.range = 0.904952713682277;

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
    msg.setTimeStamp(0.3372716413164041);
    msg.setSource(38353U);
    msg.setSourceEntity(52U);
    msg.setDestination(40055U);
    msg.setDestinationEntity(213U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 165U;
    tmp_msg_0.mask = 2741744350U;
    tmp_msg_0.scope_ref = 2842310754U;
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
    msg.setTimeStamp(0.9685548537030773);
    msg.setSource(29582U);
    msg.setSourceEntity(181U);
    msg.setDestination(34362U);
    msg.setDestinationEntity(103U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("TEJWCMURNBGFQIWUGUZYFHRATMUYAEQJQLRUZLTWSSXZGFDIJILGWBHMEPUXPQZJQCQWNHBZDRHVSLWJLVYQXDFTIKDOSBSSGXKZFBNYEETO");
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
    msg.setTimeStamp(0.7577338617367818);
    msg.setSource(62375U);
    msg.setSourceEntity(101U);
    msg.setDestination(36867U);
    msg.setDestinationEntity(119U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 33U;
    tmp_msg_0.error.assign("FVPQFMJDFDLFUORSLNSBVQMTGUBYSEGRDZHHTWDEFAXBYDJNTTHKEZZBQLPMSBIZIDGJNJBMUXVUWOZHGNMVXDUTBTJSEXLYOSCLCWFNUHADKLTRPHPWSPABNEKPHUWMSKIMORCBWWOGZYGOQFQXILFPWRYTKXPFGLNOJIN");
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
    msg.setTimeStamp(0.8945929285003216);
    msg.setSource(52588U);
    msg.setSourceEntity(236U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(65U);
    msg.enable = 110U;

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
    msg.setTimeStamp(0.2797842261517426);
    msg.setSource(58982U);
    msg.setSourceEntity(63U);
    msg.setDestination(178U);
    msg.setDestinationEntity(170U);
    msg.enable = 169U;

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
    msg.setTimeStamp(0.882249744447009);
    msg.setSource(24258U);
    msg.setSourceEntity(79U);
    msg.setDestination(6214U);
    msg.setDestinationEntity(163U);
    msg.enable = 112U;

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
    msg.setTimeStamp(0.5899457915996275);
    msg.setSource(28080U);
    msg.setSourceEntity(179U);
    msg.setDestination(15602U);
    msg.setDestinationEntity(243U);
    msg.summary = 100U;
    msg.level = 138U;

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
    msg.setTimeStamp(0.4767755899621493);
    msg.setSource(18282U);
    msg.setSourceEntity(61U);
    msg.setDestination(28026U);
    msg.setDestinationEntity(195U);
    msg.summary = 111U;
    msg.level = 214U;

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
    msg.setTimeStamp(0.22823992617811284);
    msg.setSource(47115U);
    msg.setSourceEntity(149U);
    msg.setDestination(61261U);
    msg.setDestinationEntity(137U);
    msg.summary = 122U;
    msg.level = 102U;

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
    msg.setTimeStamp(0.5728488460199572);
    msg.setSource(26654U);
    msg.setSourceEntity(14U);
    msg.setDestination(31921U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.3229141476824271);
    msg.setSource(53141U);
    msg.setSourceEntity(24U);
    msg.setDestination(11919U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.4184644957993461);
    msg.setSource(56856U);
    msg.setSourceEntity(74U);
    msg.setDestination(25163U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.24626057501966658);
    msg.setSource(46317U);
    msg.setSourceEntity(194U);
    msg.setDestination(34974U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.7902965017641872);
    msg.setSource(44471U);
    msg.setSourceEntity(114U);
    msg.setDestination(47034U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.7029178112952224);
    msg.setSource(51841U);
    msg.setSourceEntity(109U);
    msg.setDestination(62445U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.13246499494987474);
    msg.setSource(53101U);
    msg.setSourceEntity(191U);
    msg.setDestination(22115U);
    msg.setDestinationEntity(49U);
    msg.op = 135U;
    msg.system.assign("IMPVNVGLVOJVOJAGSTGGRXPBBATXYKPOZNKZWVPPNBDIICOFNLSHGXPKHZDGGRHLWCUGHQKWXXRQEJRACLTTTSUKQEJLYJDEMFIVQNMMNXFAYDLUSLXAMPBSVCOJKQSJQGMCCSHWZEOIWHELCCWTURNSUK");
    msg.range = 0.4406057654415314;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 215U;
    tmp_msg_0.htime = 0.17839455350062883;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 35U;
    tmp_tmp_msg_0_0.htime = 0.6347828902166781;
    tmp_tmp_msg_0_0.context.assign("XOOIECPUKAEZWQDTXDVPELSFZCFDVHOMYSOXHYICGLJCTCNYKOQLLTATECZVFOGJKHQUUJJIGRGGDDGTHJPKNRSKNBGGLBXKPX");
    tmp_tmp_msg_0_0.text.assign("SCVNSCWNZBINEWACERTOYUSUCDHUGVKEGAXXEZDTFDRBELJFTKCYIHDFXVMFOWAKEVJPUKXTZJPVILOJLWWWMLBCTKYJQICQQROAZWUGOHBXECMTYFENBBSJNVBMKXDGBVQIHKKIYEZXQDFCSDNHNSSJAJNGLGOARFYUATYPUEODIMDRIHHQDFMOHGWVMXYIZMPKSURPJQBOFYBZTLP");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.25934898824101815);
    msg.setSource(50528U);
    msg.setSourceEntity(108U);
    msg.setDestination(38372U);
    msg.setDestinationEntity(82U);
    msg.op = 50U;
    msg.system.assign("YEOSTNLJDOFYZRFKHPZIAVIZDNYWZUTBTKLMWHIDMJVAIYWBRENJAUUQXVVYWGDXEEOHQMYFTYNMGXBJSDHZUOASMZXOAWTPIHVEXGVCGLTQGSAALBNAZDXXRHKNHRBPKJUCYDFUPQPZGAEWTCKTUGSSIFELBKJCJFTSKZIDFEKMNRQV");
    msg.range = 0.9404917044847783;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09613838010504783;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 61098U;
    tmp_msg_0.custom.assign("KWUWSIUQFUIGLUIYOTJDKSYUVXJZTZEBRXGAOFCAPYWDNFLSEKYISKGPJLFZGGCLCRYLKJSSUVVBTDQDAKVGOHPJNPPVMBIGAOCZCHWEHNMBGKNNXOPAIZRXFTTKUJRZHORTMHIEETJCEAODWQMGVWJLEVVAPKPAXPBANCNYYRN");
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
    msg.setTimeStamp(0.9766740623192761);
    msg.setSource(22795U);
    msg.setSourceEntity(194U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(25U);
    msg.op = 12U;
    msg.system.assign("WTJOPRFJEISNQXMLJGKUSOUWUXOPYNZPZAJOSDKKTCROVRHDRVCIIVN");
    msg.range = 0.6507423473934542;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.7256015413654122;
    tmp_msg_0.type = 12U;
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
    msg.setTimeStamp(0.5070533720185486);
    msg.setSource(64158U);
    msg.setSourceEntity(8U);
    msg.setDestination(53185U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.41550326262358384);
    msg.setSource(5050U);
    msg.setSourceEntity(42U);
    msg.setDestination(35447U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.6475511067386972);
    msg.setSource(28317U);
    msg.setSourceEntity(224U);
    msg.setDestination(24708U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.4991555611956111);
    msg.setSource(11684U);
    msg.setSourceEntity(172U);
    msg.setDestination(53499U);
    msg.setDestinationEntity(150U);
    msg.list.assign("CDEFFTEBLPLYVIWIORYIUSZXZQZNFGUQQUZCOFAJPXARBCBD");

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
    msg.setTimeStamp(0.7383037748088408);
    msg.setSource(64867U);
    msg.setSourceEntity(195U);
    msg.setDestination(4884U);
    msg.setDestinationEntity(104U);
    msg.list.assign("FUZJZYUJXCTTTXDUPMWXEOJPWYZCJCMCQEJONUNSCAUKRGTPQYUDSVREWBGDPQVMNZDKJFOKKIYZWWHPNRBSVBLBBKNSLWCKPXQXMOBKLSONAMQGZMPXYFYEUFIFLCFWIVGUFDKVNKRILVMHOS");

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
    msg.setTimeStamp(0.49663587879995796);
    msg.setSource(61825U);
    msg.setSourceEntity(166U);
    msg.setDestination(54181U);
    msg.setDestinationEntity(190U);
    msg.list.assign("LNXIAAVUEADZBOZVQITTQYQTDEFDXECWSCEWEYPAXVZAJUOTKPKPKSCIOJUBYGLWVPSINQEXIJDBJINQIJKGUMDLPOOMCQDWFTZHRWHFUXUAXZXPEHNHGFYLMSBXUHGICAJJCLCOAYRTGEEOSTCFRMFWPMBMZDPVGVTVWSRWMDQYQLBRWJVGGSKMKUFOFCGCHBLNRBUMROLKYKFHNNHTQJBHLND");

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
    msg.setTimeStamp(0.19361529145266299);
    msg.setSource(52430U);
    msg.setSourceEntity(150U);
    msg.setDestination(1914U);
    msg.setDestinationEntity(55U);
    msg.value = -498;

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
    msg.setTimeStamp(0.6212835452906824);
    msg.setSource(20759U);
    msg.setSourceEntity(182U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(61U);
    msg.value = -16648;

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
    msg.setTimeStamp(0.3343727551113178);
    msg.setSource(701U);
    msg.setSourceEntity(192U);
    msg.setDestination(52533U);
    msg.setDestinationEntity(229U);
    msg.value = 140;

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
    msg.setTimeStamp(0.364906491024656);
    msg.setSource(6723U);
    msg.setSourceEntity(192U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(16U);
    msg.value = 0.45022017648319534;

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
    msg.setTimeStamp(0.917717116274552);
    msg.setSource(57846U);
    msg.setSourceEntity(109U);
    msg.setDestination(62037U);
    msg.setDestinationEntity(99U);
    msg.value = 0.3349420751795489;

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
    msg.setTimeStamp(0.25591248227927266);
    msg.setSource(7486U);
    msg.setSourceEntity(107U);
    msg.setDestination(26984U);
    msg.setDestinationEntity(244U);
    msg.value = 0.05531430118729097;

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
    msg.setTimeStamp(0.7560576525293754);
    msg.setSource(64815U);
    msg.setSourceEntity(179U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(4U);
    msg.value = 0.22933565040064174;

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
    msg.setTimeStamp(0.27233188784706264);
    msg.setSource(24014U);
    msg.setSourceEntity(189U);
    msg.setDestination(54455U);
    msg.setDestinationEntity(112U);
    msg.value = 0.17571676407983983;

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
    msg.setTimeStamp(0.041894977720451254);
    msg.setSource(48853U);
    msg.setSourceEntity(237U);
    msg.setDestination(22162U);
    msg.setDestinationEntity(133U);
    msg.value = 0.030088555172417153;

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
    msg.setTimeStamp(0.2908471950832775);
    msg.setSource(34433U);
    msg.setSourceEntity(95U);
    msg.setDestination(33342U);
    msg.setDestinationEntity(66U);
    msg.validity = 51263U;
    msg.type = 251U;
    msg.utc_year = 26811U;
    msg.utc_month = 14U;
    msg.utc_day = 193U;
    msg.utc_time = 0.23107124047647154;
    msg.lat = 0.652492140770546;
    msg.lon = 0.919824712477532;
    msg.height = 0.9309821569572589;
    msg.satellites = 26U;
    msg.cog = 0.9592729884055908;
    msg.sog = 0.5446450772130979;
    msg.hdop = 0.018682592748717308;
    msg.vdop = 0.915237494444403;
    msg.hacc = 0.6418950477028813;
    msg.vacc = 0.44088494722053406;

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
    msg.setTimeStamp(0.6841369417244217);
    msg.setSource(29260U);
    msg.setSourceEntity(201U);
    msg.setDestination(44026U);
    msg.setDestinationEntity(123U);
    msg.validity = 32747U;
    msg.type = 242U;
    msg.utc_year = 4538U;
    msg.utc_month = 249U;
    msg.utc_day = 219U;
    msg.utc_time = 0.8767245374949574;
    msg.lat = 0.3298776904167977;
    msg.lon = 0.6647983586677986;
    msg.height = 0.5662459183763535;
    msg.satellites = 245U;
    msg.cog = 0.5507397837235061;
    msg.sog = 0.21148733017681876;
    msg.hdop = 0.8980197474110788;
    msg.vdop = 0.13628413996284328;
    msg.hacc = 0.27541074971399104;
    msg.vacc = 0.6058585229468484;

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
    msg.setTimeStamp(0.8349494466806464);
    msg.setSource(13235U);
    msg.setSourceEntity(58U);
    msg.setDestination(65376U);
    msg.setDestinationEntity(31U);
    msg.validity = 51475U;
    msg.type = 135U;
    msg.utc_year = 29628U;
    msg.utc_month = 139U;
    msg.utc_day = 195U;
    msg.utc_time = 0.46754618449003027;
    msg.lat = 0.7760208496713412;
    msg.lon = 0.7288108626329717;
    msg.height = 0.12367951166259161;
    msg.satellites = 19U;
    msg.cog = 0.6754451404348123;
    msg.sog = 0.7287701190964448;
    msg.hdop = 0.5774536302214757;
    msg.vdop = 0.19827356086649794;
    msg.hacc = 0.252436469447639;
    msg.vacc = 0.25815342621975157;

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
    msg.setTimeStamp(0.9495712418185178);
    msg.setSource(62087U);
    msg.setSourceEntity(33U);
    msg.setDestination(46979U);
    msg.setDestinationEntity(181U);
    msg.time = 0.6135780297122074;
    msg.phi = 0.023578741872093745;
    msg.theta = 0.7286952419097961;
    msg.psi = 0.5923895169232127;
    msg.psi_magnetic = 0.3138168997521885;

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
    msg.setTimeStamp(0.6297537249262792);
    msg.setSource(46643U);
    msg.setSourceEntity(191U);
    msg.setDestination(3688U);
    msg.setDestinationEntity(34U);
    msg.time = 0.26861334292955696;
    msg.phi = 0.0211303270267561;
    msg.theta = 0.7778759333689996;
    msg.psi = 0.39750709419683894;
    msg.psi_magnetic = 0.009429316803650112;

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
    msg.setTimeStamp(0.845031501758864);
    msg.setSource(18476U);
    msg.setSourceEntity(125U);
    msg.setDestination(714U);
    msg.setDestinationEntity(46U);
    msg.time = 0.32151385435197377;
    msg.phi = 0.046983783320223016;
    msg.theta = 0.6849746814527734;
    msg.psi = 0.6112555887298142;
    msg.psi_magnetic = 0.9344878168557169;

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
    msg.setTimeStamp(0.44474280110824815);
    msg.setSource(57952U);
    msg.setSourceEntity(15U);
    msg.setDestination(19501U);
    msg.setDestinationEntity(143U);
    msg.time = 0.423855233269114;
    msg.x = 0.7755503946454105;
    msg.y = 0.6938951481626621;
    msg.z = 0.47206268759173964;
    msg.timestep = 0.8155890929701983;

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
    msg.setTimeStamp(0.37935448312528164);
    msg.setSource(54343U);
    msg.setSourceEntity(53U);
    msg.setDestination(26188U);
    msg.setDestinationEntity(20U);
    msg.time = 0.2894459711761772;
    msg.x = 0.9482755829795378;
    msg.y = 0.5049987275942257;
    msg.z = 0.029254712923573956;
    msg.timestep = 0.058944067473494566;

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
    msg.setTimeStamp(0.719875794202771);
    msg.setSource(46995U);
    msg.setSourceEntity(39U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(42U);
    msg.time = 0.07478689809363381;
    msg.x = 0.3107810293289638;
    msg.y = 0.07483900363637563;
    msg.z = 0.2767894812764037;
    msg.timestep = 0.02459779249913774;

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
    msg.setTimeStamp(0.41875234797524874);
    msg.setSource(39504U);
    msg.setSourceEntity(167U);
    msg.setDestination(4915U);
    msg.setDestinationEntity(21U);
    msg.time = 0.3959342487006162;
    msg.x = 0.9313599408807757;
    msg.y = 0.3412400296685122;
    msg.z = 0.1800242221213776;

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
    msg.setTimeStamp(0.13526362714063);
    msg.setSource(56294U);
    msg.setSourceEntity(125U);
    msg.setDestination(43381U);
    msg.setDestinationEntity(203U);
    msg.time = 0.8702484013127307;
    msg.x = 0.21590142208806495;
    msg.y = 0.6538863631553856;
    msg.z = 0.9736290479272387;

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
    msg.setTimeStamp(0.40209532690296956);
    msg.setSource(27747U);
    msg.setSourceEntity(236U);
    msg.setDestination(12402U);
    msg.setDestinationEntity(137U);
    msg.time = 0.2785059395007313;
    msg.x = 0.6770751535002953;
    msg.y = 0.8520586432455108;
    msg.z = 0.8262711238796774;

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
    msg.setTimeStamp(0.0717367171151817);
    msg.setSource(22333U);
    msg.setSourceEntity(232U);
    msg.setDestination(38500U);
    msg.setDestinationEntity(184U);
    msg.time = 0.6174882678486944;
    msg.x = 0.09867310098057513;
    msg.y = 0.3280600760384269;
    msg.z = 0.7123062637377647;

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
    msg.setTimeStamp(0.41253680723317776);
    msg.setSource(13985U);
    msg.setSourceEntity(124U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(48U);
    msg.time = 0.5138440845917687;
    msg.x = 0.33802858899367616;
    msg.y = 0.8009285600070429;
    msg.z = 0.9550192623015409;

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
    msg.setTimeStamp(0.07881497007849203);
    msg.setSource(45198U);
    msg.setSourceEntity(65U);
    msg.setDestination(18981U);
    msg.setDestinationEntity(243U);
    msg.time = 0.24571355834908626;
    msg.x = 0.2583588829063387;
    msg.y = 0.35115180208578356;
    msg.z = 0.1953081381203775;

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
    msg.setTimeStamp(0.6268300820070183);
    msg.setSource(20235U);
    msg.setSourceEntity(237U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(184U);
    msg.time = 0.9454622597215748;
    msg.x = 0.1888189146906173;
    msg.y = 0.8934261401430293;
    msg.z = 0.2685243357501208;

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
    msg.setTimeStamp(0.1463427186795534);
    msg.setSource(53938U);
    msg.setSourceEntity(231U);
    msg.setDestination(36815U);
    msg.setDestinationEntity(39U);
    msg.time = 0.07440604016227337;
    msg.x = 0.7364096654602156;
    msg.y = 0.38007715625525096;
    msg.z = 0.059493348939495094;

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
    msg.setTimeStamp(0.7823037829809484);
    msg.setSource(37846U);
    msg.setSourceEntity(74U);
    msg.setDestination(1566U);
    msg.setDestinationEntity(61U);
    msg.time = 0.3426674206165343;
    msg.x = 0.1371638261781024;
    msg.y = 0.6266314974875067;
    msg.z = 0.4337632929901295;

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
    msg.setTimeStamp(0.3652816167688675);
    msg.setSource(22684U);
    msg.setSourceEntity(246U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(251U);
    msg.validity = 13U;
    msg.x = 0.49375851356089573;
    msg.y = 0.09014289971291134;
    msg.z = 0.6372511551958525;

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
    msg.setTimeStamp(0.2504350722385541);
    msg.setSource(8965U);
    msg.setSourceEntity(246U);
    msg.setDestination(34129U);
    msg.setDestinationEntity(229U);
    msg.validity = 147U;
    msg.x = 0.4493461430862754;
    msg.y = 0.8549778096578237;
    msg.z = 0.7806570431170947;

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
    msg.setTimeStamp(0.5620878343048696);
    msg.setSource(58291U);
    msg.setSourceEntity(222U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(30U);
    msg.validity = 0U;
    msg.x = 0.8255109719969123;
    msg.y = 0.6220301392232482;
    msg.z = 0.12907688119372407;

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
    msg.setTimeStamp(0.5391414121855966);
    msg.setSource(65430U);
    msg.setSourceEntity(186U);
    msg.setDestination(45185U);
    msg.setDestinationEntity(230U);
    msg.validity = 248U;
    msg.x = 0.8559622459593309;
    msg.y = 0.3240782358016454;
    msg.z = 0.9304353114799769;

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
    msg.setTimeStamp(0.3980814393272071);
    msg.setSource(8819U);
    msg.setSourceEntity(145U);
    msg.setDestination(6229U);
    msg.setDestinationEntity(184U);
    msg.validity = 61U;
    msg.x = 0.018575516331134523;
    msg.y = 0.6340853345588026;
    msg.z = 0.5143689279352172;

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
    msg.setTimeStamp(0.6978070987347456);
    msg.setSource(57981U);
    msg.setSourceEntity(24U);
    msg.setDestination(15803U);
    msg.setDestinationEntity(243U);
    msg.validity = 217U;
    msg.x = 0.8822244126381301;
    msg.y = 0.27502077790158397;
    msg.z = 0.21126592638274133;

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
    msg.setTimeStamp(0.1447923846172211);
    msg.setSource(64300U);
    msg.setSourceEntity(69U);
    msg.setDestination(51650U);
    msg.setDestinationEntity(90U);
    msg.time = 0.5608099364798381;
    msg.x = 0.5751627080041508;
    msg.y = 0.741872514715114;
    msg.z = 0.40189123876920607;

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
    msg.setTimeStamp(0.6173205484190565);
    msg.setSource(25504U);
    msg.setSourceEntity(164U);
    msg.setDestination(47139U);
    msg.setDestinationEntity(234U);
    msg.time = 0.8559963576942805;
    msg.x = 0.005549236403232349;
    msg.y = 0.04520200467658375;
    msg.z = 0.9980216962429831;

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
    msg.setTimeStamp(0.8240950443119357);
    msg.setSource(56149U);
    msg.setSourceEntity(122U);
    msg.setDestination(49626U);
    msg.setDestinationEntity(228U);
    msg.time = 0.6843519404635693;
    msg.x = 0.30540696170684967;
    msg.y = 0.3550401046629056;
    msg.z = 0.5643406245542909;

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
    msg.setTimeStamp(0.45413440797066995);
    msg.setSource(41185U);
    msg.setSourceEntity(12U);
    msg.setDestination(27563U);
    msg.setDestinationEntity(49U);
    msg.validity = 135U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9588490169128374;
    tmp_msg_0.y = 0.3339861286289878;
    tmp_msg_0.z = 0.009704755449695956;
    tmp_msg_0.phi = 0.6886097512608585;
    tmp_msg_0.theta = 0.165472608041082;
    tmp_msg_0.psi = 0.1875413737396343;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.15021912472218146;

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
    msg.setTimeStamp(0.5764736544366496);
    msg.setSource(29774U);
    msg.setSourceEntity(204U);
    msg.setDestination(37242U);
    msg.setDestinationEntity(249U);
    msg.validity = 188U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9635232209341051;
    tmp_msg_0.beam_height = 0.6892869101605911;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9910310439826759;

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
    msg.setTimeStamp(0.2642378234173698);
    msg.setSource(45978U);
    msg.setSourceEntity(163U);
    msg.setDestination(45753U);
    msg.setDestinationEntity(165U);
    msg.validity = 42U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.24472096770867968;
    tmp_msg_0.y = 0.83804864136228;
    tmp_msg_0.z = 0.11179156449330818;
    tmp_msg_0.phi = 0.7289024169127364;
    tmp_msg_0.theta = 0.8265619698754828;
    tmp_msg_0.psi = 0.9047551371380431;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.534988023733221;
    tmp_msg_1.beam_height = 0.799829388285152;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5164443216237209;

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
    msg.setTimeStamp(0.6292436040804242);
    msg.setSource(9217U);
    msg.setSourceEntity(224U);
    msg.setDestination(42043U);
    msg.setDestinationEntity(188U);
    msg.value = 0.32858246243064104;

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
    msg.setTimeStamp(0.1594470850820029);
    msg.setSource(12274U);
    msg.setSourceEntity(46U);
    msg.setDestination(29401U);
    msg.setDestinationEntity(24U);
    msg.value = 0.88725722433281;

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
    msg.setTimeStamp(0.10843492465675397);
    msg.setSource(31685U);
    msg.setSourceEntity(230U);
    msg.setDestination(35263U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5259430900748122;

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
    msg.setTimeStamp(0.24603042261671637);
    msg.setSource(13117U);
    msg.setSourceEntity(28U);
    msg.setDestination(29139U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6230306466066866;

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
    msg.setTimeStamp(0.21869673374013865);
    msg.setSource(55894U);
    msg.setSourceEntity(43U);
    msg.setDestination(8231U);
    msg.setDestinationEntity(83U);
    msg.value = 0.34068141562328047;

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
    msg.setTimeStamp(0.0545342421233973);
    msg.setSource(17869U);
    msg.setSourceEntity(35U);
    msg.setDestination(21977U);
    msg.setDestinationEntity(7U);
    msg.value = 0.16397695125540368;

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
    msg.setTimeStamp(0.26749502391782365);
    msg.setSource(45124U);
    msg.setSourceEntity(108U);
    msg.setDestination(45196U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8990869154858356;

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
    msg.setTimeStamp(0.7485668725446951);
    msg.setSource(39968U);
    msg.setSourceEntity(53U);
    msg.setDestination(7687U);
    msg.setDestinationEntity(46U);
    msg.value = 0.0038438052244652576;

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
    msg.setTimeStamp(0.5240172826712018);
    msg.setSource(42988U);
    msg.setSourceEntity(74U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(248U);
    msg.value = 0.5469534550367178;

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
    msg.setTimeStamp(0.625051918323739);
    msg.setSource(59688U);
    msg.setSourceEntity(175U);
    msg.setDestination(38825U);
    msg.setDestinationEntity(17U);
    msg.value = 0.43405561295958695;

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
    msg.setTimeStamp(0.08037409178954469);
    msg.setSource(55357U);
    msg.setSourceEntity(97U);
    msg.setDestination(1728U);
    msg.setDestinationEntity(144U);
    msg.value = 0.054794800501628216;

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
    msg.setTimeStamp(0.7488448914251882);
    msg.setSource(25952U);
    msg.setSourceEntity(75U);
    msg.setDestination(15068U);
    msg.setDestinationEntity(16U);
    msg.value = 0.9209363164933936;

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
    msg.setTimeStamp(0.04926386280981199);
    msg.setSource(57492U);
    msg.setSourceEntity(171U);
    msg.setDestination(9154U);
    msg.setDestinationEntity(209U);
    msg.value = 0.775251042866604;

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
    msg.setTimeStamp(0.948359879976584);
    msg.setSource(49938U);
    msg.setSourceEntity(173U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(162U);
    msg.value = 0.8433622802462387;

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
    msg.setTimeStamp(0.5902297275427099);
    msg.setSource(32993U);
    msg.setSourceEntity(162U);
    msg.setDestination(7086U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7148561045886891;

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
    msg.setTimeStamp(0.5166757900173455);
    msg.setSource(18351U);
    msg.setSourceEntity(37U);
    msg.setDestination(38441U);
    msg.setDestinationEntity(85U);
    msg.value = 0.1389451445378973;

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
    msg.setTimeStamp(0.7736262967877724);
    msg.setSource(3090U);
    msg.setSourceEntity(245U);
    msg.setDestination(49816U);
    msg.setDestinationEntity(230U);
    msg.value = 0.06642827783928917;

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
    msg.setTimeStamp(0.31857745582643016);
    msg.setSource(26408U);
    msg.setSourceEntity(150U);
    msg.setDestination(41364U);
    msg.setDestinationEntity(45U);
    msg.value = 0.0736532559227282;

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
    msg.setTimeStamp(0.11551847913699587);
    msg.setSource(412U);
    msg.setSourceEntity(77U);
    msg.setDestination(26724U);
    msg.setDestinationEntity(15U);
    msg.value = 0.25517124830313176;

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
    msg.setTimeStamp(0.25810595582604945);
    msg.setSource(12511U);
    msg.setSourceEntity(146U);
    msg.setDestination(12611U);
    msg.setDestinationEntity(110U);
    msg.value = 0.6749029414494753;

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
    msg.setTimeStamp(0.523975864611849);
    msg.setSource(63003U);
    msg.setSourceEntity(226U);
    msg.setDestination(64766U);
    msg.setDestinationEntity(64U);
    msg.value = 0.10452927463881134;

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
    msg.setTimeStamp(0.8104635697824852);
    msg.setSource(64312U);
    msg.setSourceEntity(108U);
    msg.setDestination(57759U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7060826311926894;

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
    msg.setTimeStamp(0.22943166214153976);
    msg.setSource(61488U);
    msg.setSourceEntity(148U);
    msg.setDestination(35365U);
    msg.setDestinationEntity(174U);
    msg.value = 0.5267350640244857;

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
    msg.setTimeStamp(0.14893875275706825);
    msg.setSource(36630U);
    msg.setSourceEntity(252U);
    msg.setDestination(22946U);
    msg.setDestinationEntity(132U);
    msg.value = 0.2796420595730581;

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
    msg.setTimeStamp(0.642164954059255);
    msg.setSource(6624U);
    msg.setSourceEntity(235U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(186U);
    msg.direction = 0.1831831641280245;
    msg.speed = 0.3803281138690675;
    msg.turbulence = 0.03446020825181806;

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
    msg.setTimeStamp(0.5947757306962729);
    msg.setSource(45597U);
    msg.setSourceEntity(139U);
    msg.setDestination(27696U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.13789274440072974;
    msg.speed = 0.4239076286831408;
    msg.turbulence = 0.24980977961008932;

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
    msg.setTimeStamp(0.3950495470296991);
    msg.setSource(41487U);
    msg.setSourceEntity(216U);
    msg.setDestination(5900U);
    msg.setDestinationEntity(78U);
    msg.direction = 0.4628920824771158;
    msg.speed = 0.5236311435545817;
    msg.turbulence = 0.1553231337081844;

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
    msg.setTimeStamp(0.32563704840466334);
    msg.setSource(24266U);
    msg.setSourceEntity(180U);
    msg.setDestination(65187U);
    msg.setDestinationEntity(155U);
    msg.value = 0.930737458578581;

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
    msg.setTimeStamp(0.7271826349188971);
    msg.setSource(38475U);
    msg.setSourceEntity(254U);
    msg.setDestination(52730U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9524108991378095;

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
    msg.setTimeStamp(0.24235443964869785);
    msg.setSource(29510U);
    msg.setSourceEntity(27U);
    msg.setDestination(47460U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8785850406379487;

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
    msg.setTimeStamp(0.5416031391566177);
    msg.setSource(50611U);
    msg.setSourceEntity(187U);
    msg.setDestination(35993U);
    msg.setDestinationEntity(155U);
    msg.value.assign("HQJOUKGHZCBLNMOFVAQMFXSANXDPHSMMMSGUXKLOYSYGKCYNVEQEBEVRQTCYGVRNIFOHGACKYGTNBQUGEXJFXDPCUDIWMSADRNSMHDZGLIBMYHJTJVPNCKZHVUEKXLIXPFMLJPVOSKPANNLJTFAWZ");

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
    msg.setTimeStamp(0.26335120263315315);
    msg.setSource(40757U);
    msg.setSourceEntity(212U);
    msg.setDestination(48822U);
    msg.setDestinationEntity(67U);
    msg.value.assign("JPWYYKBONETVALVAXOGLDUKXTFGRQODZUXRXFTFNHTGVONRCYTBPLHHEWDHFQQDYOHIPIZHKLVSBROKJYTEMWCNZFIXKZVCSFVTGWGHRMMXAZYRYBSLHRPUJXQPIIGLOSNWCEETLIDJRQMKSKPNRDBNPBUPZSUVKDTGZWCSSCEMMZZFXKFLVMWQJEWAQJULJSNBIAYNBUOAJBPXFCYEMIVCAWAUXDBNPIIYSZEDUHF");

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
    msg.setTimeStamp(0.8541729795028209);
    msg.setSource(64213U);
    msg.setSourceEntity(246U);
    msg.setDestination(10997U);
    msg.setDestinationEntity(197U);
    msg.value.assign("SJYCBOERNSPPLKRANNGRWIDZYUKIWDHMXZNVBKFGQVZAFCMVEKIXNOYIXHQPSUDHMUUUJTHUJWVIGZZUHYJQTSYTLOZBDRQKEBBPMDKTDCBLFVEKGULNWFFLYFJSAACUEGAPAVGDPCHFWOQIWNHWXVLFFOPGSVHMQOFPCGQOAXXBTYEXBOBYVZJTNWLRMMRJMKHSILTDXPIYSSJWCEAHXO");

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
    msg.setTimeStamp(0.5264853688930574);
    msg.setSource(32002U);
    msg.setSourceEntity(224U);
    msg.setDestination(34405U);
    msg.setDestinationEntity(32U);
    const char tmp_msg_0[] = {-39, -82, -59, -65, -118, 13, 45, 94, -85, -80, 19, 119, -106, 123, 11, -31, 76, -54, -24, -103, -120, 28, -123, 54, -112, 108, -72, 87, 74, 114, 23, 9, -117, 98, 118, 102, 4, 95, 107, -35, 50, 103, -13, -24, 25, 15, 91, -25, -118, -25, 16, -37, -39, -19, -61, -107, 19, -122, -12, 66, -105, 68, -91, 84, -120, -33, -10, -37, 21, -57, 74, -49, -15, -18, -44, -91, -83, -82, -20, -79, -97, 59, -83, -56, 77, -12, 124, -37, 92, -92, 35, 51, -42, -7, 95, 38, 65, 99, 121, -64, -64, 67, -81, -83, -23, -63, -17, -65, 51, 115, -68, -43, 100, -40, 47, 18, -58, -60, -69, -113, -113, 116, -83, -96, -40, -41, -45, -29, -38, -115, 60, -27, -16, 121, -111, 50, -18, -119, -48, -72, 21, -36, -1, 40, -79, -20, -23, -41, -117, -57, 96, 111, 62, 56, -97, -102, 125, 119, -39, -43, 15, -92, 13, -11, -47, -35, 67, 112, 124, -122, 113, -63, 108, 21, -113, -14, 125, -65, 68, -71, -70, -58, 80, -73, 100, -127, 47, -81, -74, -9, -35, -118, 101, 35, -100, -104, 115, -85, 45, -48};
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
    msg.setTimeStamp(0.5002769351333711);
    msg.setSource(29266U);
    msg.setSourceEntity(66U);
    msg.setDestination(5428U);
    msg.setDestinationEntity(56U);
    const char tmp_msg_0[] = {-46, 76, 119, -105, 45, -95, -11, -49, 96, -102, -14, -46, -6, -110, -31, 75, -72, -100, 79, -61, -92, -13, -12, 110, 74, 16, 86, 40, 83, -92, -5, -12, -8, 107, 75, 5, 75, -110, -97, 124, 111, -16, 116, -109, 121, 118, -36, -21, 28, -6, -56, -79, 56, 81, -127, 90, -112, 59, -15, -73, 79, 16, 94, 55, -105, -103, -98, 95, -111, -104, -11, -115, 125, -47, -34, 41, -69, 55, 1, -121, -53, -62, 20, 11, 82, 85, -87, 74, 40, 39, 92, 77, -48, 92, -79, 28, 76, -82, -70, 89, 42, 69, -65, 57, -4, 94, 117, -33, 89, -31, -12, 61, 122, -21, -66, 8, -36, -73, -13, -85, -18, -86, 123, 110, -113, 57, 106, -2, 72, -57, -4, 20, -112, -113, 6, 54, -127, 94, -123, -126, -112, -109, -3, -63, 114, -25, -85, 0, -110, 85};
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
    msg.setTimeStamp(0.40980245639674173);
    msg.setSource(60145U);
    msg.setSourceEntity(63U);
    msg.setDestination(46413U);
    msg.setDestinationEntity(77U);
    const char tmp_msg_0[] = {47, 112, 44, 39, 96, 67, 55, -62, 49, -85, -54, 113, -68, -118, 64, -10, 36, -10, 81, 2, -71, -111, -48, -69};
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
    msg.setTimeStamp(0.8191431200653837);
    msg.setSource(39133U);
    msg.setSourceEntity(148U);
    msg.setDestination(337U);
    msg.setDestinationEntity(163U);
    msg.frequency = 987989216U;
    msg.min_range = 8752U;
    msg.max_range = 45261U;

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
    msg.setTimeStamp(0.15155904526739505);
    msg.setSource(20674U);
    msg.setSourceEntity(194U);
    msg.setDestination(38144U);
    msg.setDestinationEntity(117U);
    msg.frequency = 4040680014U;
    msg.min_range = 23583U;
    msg.max_range = 33621U;

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
    msg.setTimeStamp(0.4532976917415733);
    msg.setSource(17770U);
    msg.setSourceEntity(89U);
    msg.setDestination(21525U);
    msg.setDestinationEntity(249U);
    msg.frequency = 2552126178U;
    msg.min_range = 59271U;
    msg.max_range = 37712U;

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
    msg.setTimeStamp(0.015459909619492174);
    msg.setSource(58848U);
    msg.setSourceEntity(2U);
    msg.setDestination(21795U);
    msg.setDestinationEntity(197U);
    msg.type = 225U;
    msg.frequency = 2999730401U;
    msg.min_range = 40443U;
    msg.max_range = 37817U;
    msg.bits_per_point = 60U;
    msg.scale_factor = 0.3417719935276551;
    const char tmp_msg_0[] = {-107, 82, 38, 50, -46, 119, 106, 6, -69, 51, -42, -115, -73, -116, -29, -42, 79, -103, -16, -62, 18, -86, -3, -107, -109, -12, 107, 77, -74, -94, -80, -82, 19, -15, 34, 31, 123, -7, 115, 92, -31, 97, -23, 84, 34, 118, 71, -99, -7, -100, -86, -49, 53, -7, 108, 74, -68, 118, 122, -89, 76, 119, -100, -116, 19, 105, 81, -10, -82, -33, 28, -30, -111, -67, 4, -44, -127, -12, -37, -10, -46, -66, 23, -74, -59, 29, 53, -76, 101, -89, -54, 6, -117, 71, -44, 36, -35, 38, -83, 90, 70, -85, -87, -128, -54, -84, -103, -54, 85};
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
    msg.setTimeStamp(0.7892421904225696);
    msg.setSource(57757U);
    msg.setSourceEntity(237U);
    msg.setDestination(40460U);
    msg.setDestinationEntity(242U);
    msg.type = 150U;
    msg.frequency = 1238725209U;
    msg.min_range = 23433U;
    msg.max_range = 64644U;
    msg.bits_per_point = 11U;
    msg.scale_factor = 0.7531875754779456;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.22083969084323363;
    tmp_msg_0.beam_height = 0.41260862926790665;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-86, 122, 45, 37, -40, -20, -52, -55, -92, -67, -118, -23, 125, 46, -101, -74, 19, -65, -79, -10, -68, -108, -17, -97, 119, 102, -97, -106, 94, 25, 59, -115, 34, -105, 23, -60, 60, -123, 70, 123, 60, -124, 65, 73, -96, -125, -98, 75, -33, 94, -3, -96, 18, 91, 54, -94, -2, 33, 74, 107, 57, -97, -121, 115, -121, 2, 13, -126, 59, -104};
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
    msg.setTimeStamp(0.7014488017098216);
    msg.setSource(61057U);
    msg.setSourceEntity(203U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(244U);
    msg.type = 184U;
    msg.frequency = 1654502440U;
    msg.min_range = 56120U;
    msg.max_range = 55250U;
    msg.bits_per_point = 22U;
    msg.scale_factor = 0.9724164086298441;
    const char tmp_msg_0[] = {68, -62, 114, 93, -109, 5, 118, 82, 89, 94, 71, -113, 10, 65, -20, 73, -116, 27, 115, 119, -80, -91, -20, 72, -57, -104, -127, -61, 66, -30, -48, 118, 77, 74, -26, -84, 42, 78, 108, -124, 37, 33, 58, 75, -5, 107, -61, -55, 116, 55, -31, -111, -113, 106, 66, -50, -11, -23, -74, 10, -47, -35, -77, 10, 121, 2, 1, 72, -122, -113, 76, 111, -59, 42, 53, -46, -59, -20, 30, -101, -107, -99, 64, 114, -120, -38, -126, 103, 107, -7, -23, 23, 1, 35, -52, -2, 91, 81};
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
    msg.setTimeStamp(0.6224752184480247);
    msg.setSource(49920U);
    msg.setSourceEntity(207U);
    msg.setDestination(1055U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.24675950610920017);
    msg.setSource(44698U);
    msg.setSourceEntity(242U);
    msg.setDestination(46531U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.018698445448366297);
    msg.setSource(22744U);
    msg.setSourceEntity(119U);
    msg.setDestination(13576U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.2975049166750543);
    msg.setSource(9765U);
    msg.setSourceEntity(71U);
    msg.setDestination(19517U);
    msg.setDestinationEntity(169U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.1512052321951719);
    msg.setSource(41914U);
    msg.setSourceEntity(119U);
    msg.setDestination(45975U);
    msg.setDestinationEntity(145U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.29255265475276826);
    msg.setSource(30564U);
    msg.setSourceEntity(103U);
    msg.setDestination(14281U);
    msg.setDestinationEntity(247U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.5770385703791537);
    msg.setSource(6611U);
    msg.setSourceEntity(73U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(168U);
    msg.value = 0.031884907932682616;
    msg.confidence = 0.6732382971171128;
    msg.opmodes.assign("TQNTDXCCFANRAENQQSFPAQS");

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
    msg.setTimeStamp(0.55309398446718);
    msg.setSource(42141U);
    msg.setSourceEntity(144U);
    msg.setDestination(24451U);
    msg.setDestinationEntity(11U);
    msg.value = 0.17339316983722208;
    msg.confidence = 0.5164508757746042;
    msg.opmodes.assign("LSSUMVHITHAJNKZGXUWUGRVOBFWADBQZEIUUQVPJDCKJIGYMOZFHSAZKSRTMPVTJRRNDNHOISPDYOTKKYGUBNOFNBZCWSAGYZVPLOISRRCQQYQGMERAWOFPLYEGVPMNODIYLFEXHRFVLUZMVTRDPRACJCXMNUBUXHKONPATTHJWCYZQLOYEDWCJAEBABBFEXMCDWZUHCQYJQHKGX");

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
    msg.setTimeStamp(0.21500652295561773);
    msg.setSource(28678U);
    msg.setSourceEntity(163U);
    msg.setDestination(19323U);
    msg.setDestinationEntity(32U);
    msg.value = 0.17802027350835958;
    msg.confidence = 0.8656279122236585;
    msg.opmodes.assign("JCJUJCFPOLIXQYFJJLPKBGQTJEFXANVHUBPSHICTVAZEUTSSBMDAIRMSTUFRCXOTBHSNHBSPBFFGKOLKRGAHZUWNMXHVNEFODNBZTAYWLZSKRLUGQJDXZKPAXHYUMACOWNCEYPQQWVYMDNQFLDHQDVWTGKPXSZGIREARMPEOBACOOYPRQIGIRHTUIRKVYEDPLXJDYVCIMYCAVNGJONM");

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
    msg.setTimeStamp(0.43824871623001416);
    msg.setSource(48524U);
    msg.setSourceEntity(181U);
    msg.setDestination(5790U);
    msg.setDestinationEntity(89U);
    msg.itow = 156178299U;
    msg.lat = 0.14614125947583234;
    msg.lon = 0.7606000531482383;
    msg.height_ell = 0.6454295054509992;
    msg.height_sea = 0.0421089542103007;
    msg.hacc = 0.07224177023033418;
    msg.vacc = 0.5537934967671533;
    msg.vel_n = 0.5962127155321637;
    msg.vel_e = 0.5213843399761756;
    msg.vel_d = 0.4756007762174189;
    msg.speed = 0.0930181710140261;
    msg.gspeed = 0.9096297966410617;
    msg.heading = 0.7666310197723984;
    msg.sacc = 0.5595695771702964;
    msg.cacc = 0.9187997653119326;

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
    msg.setTimeStamp(0.26880735107707976);
    msg.setSource(33413U);
    msg.setSourceEntity(216U);
    msg.setDestination(19704U);
    msg.setDestinationEntity(193U);
    msg.itow = 2268882780U;
    msg.lat = 0.5460133262441151;
    msg.lon = 0.16816704172233532;
    msg.height_ell = 0.17336573670991384;
    msg.height_sea = 0.662008833561589;
    msg.hacc = 0.2724054972946838;
    msg.vacc = 0.2818926583303767;
    msg.vel_n = 0.3808186117624416;
    msg.vel_e = 0.816882114999297;
    msg.vel_d = 0.32997099582538325;
    msg.speed = 0.17605055304761374;
    msg.gspeed = 0.6475116340675775;
    msg.heading = 0.31548428265240513;
    msg.sacc = 0.24709495397288195;
    msg.cacc = 0.7279432355156188;

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
    msg.setTimeStamp(0.3188639368098726);
    msg.setSource(45496U);
    msg.setSourceEntity(208U);
    msg.setDestination(24461U);
    msg.setDestinationEntity(30U);
    msg.itow = 753286311U;
    msg.lat = 0.42630663503887944;
    msg.lon = 0.8681818076072225;
    msg.height_ell = 0.4049905171521847;
    msg.height_sea = 0.9663766994243403;
    msg.hacc = 0.388862793204506;
    msg.vacc = 0.4734393497508046;
    msg.vel_n = 0.8739925648932454;
    msg.vel_e = 0.2861506032143003;
    msg.vel_d = 0.9491118326041684;
    msg.speed = 0.20734484213026627;
    msg.gspeed = 0.7505337567454173;
    msg.heading = 0.08087738447978576;
    msg.sacc = 0.17927628941185414;
    msg.cacc = 0.7902169874088294;

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
    msg.setTimeStamp(0.15765723872979598);
    msg.setSource(36765U);
    msg.setSourceEntity(190U);
    msg.setDestination(38071U);
    msg.setDestinationEntity(41U);
    msg.id = 88U;
    msg.value = 0.7978707869178928;

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
    msg.setTimeStamp(0.7273712561256412);
    msg.setSource(63325U);
    msg.setSourceEntity(21U);
    msg.setDestination(16930U);
    msg.setDestinationEntity(68U);
    msg.id = 8U;
    msg.value = 0.9873582365687454;

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
    msg.setTimeStamp(0.13166333555473853);
    msg.setSource(36108U);
    msg.setSourceEntity(18U);
    msg.setDestination(22554U);
    msg.setDestinationEntity(213U);
    msg.id = 202U;
    msg.value = 0.7167350100883392;

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
    msg.setTimeStamp(0.16269218957191645);
    msg.setSource(35223U);
    msg.setSourceEntity(149U);
    msg.setDestination(44312U);
    msg.setDestinationEntity(49U);
    msg.x = 0.028412028210979323;
    msg.y = 0.41448787684200483;
    msg.z = 0.1786838832019536;
    msg.phi = 0.32877109115224035;
    msg.theta = 0.6315232639876963;
    msg.psi = 0.21383914190494302;

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
    msg.setTimeStamp(0.4598025923073029);
    msg.setSource(13007U);
    msg.setSourceEntity(221U);
    msg.setDestination(65416U);
    msg.setDestinationEntity(20U);
    msg.x = 0.07736135405684563;
    msg.y = 0.29085134173624205;
    msg.z = 0.30353709500505766;
    msg.phi = 0.3264042207555927;
    msg.theta = 0.7882285395230227;
    msg.psi = 0.5343287608675001;

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
    msg.setTimeStamp(0.9405286280761175);
    msg.setSource(34370U);
    msg.setSourceEntity(138U);
    msg.setDestination(34650U);
    msg.setDestinationEntity(23U);
    msg.x = 0.9055388777374546;
    msg.y = 0.5892096102955547;
    msg.z = 0.1518690886743489;
    msg.phi = 0.26708157621734496;
    msg.theta = 0.6935807041541308;
    msg.psi = 0.7840537157932334;

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
    msg.setTimeStamp(0.29796432457401834);
    msg.setSource(19769U);
    msg.setSourceEntity(130U);
    msg.setDestination(49649U);
    msg.setDestinationEntity(99U);
    msg.beam_width = 0.6434928656057489;
    msg.beam_height = 0.3846761837596032;

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
    msg.setTimeStamp(0.4577720987413303);
    msg.setSource(9483U);
    msg.setSourceEntity(110U);
    msg.setDestination(842U);
    msg.setDestinationEntity(13U);
    msg.beam_width = 0.09915812138934843;
    msg.beam_height = 0.05789528401983812;

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
    msg.setTimeStamp(0.5840598750246545);
    msg.setSource(56698U);
    msg.setSourceEntity(243U);
    msg.setDestination(41238U);
    msg.setDestinationEntity(58U);
    msg.beam_width = 0.9911796786051248;
    msg.beam_height = 0.22780078225098865;

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
    msg.setTimeStamp(0.10180986331135178);
    msg.setSource(54067U);
    msg.setSourceEntity(154U);
    msg.setDestination(21879U);
    msg.setDestinationEntity(231U);
    msg.sane = 160U;

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
    msg.setTimeStamp(0.21104463534443896);
    msg.setSource(50588U);
    msg.setSourceEntity(136U);
    msg.setDestination(56618U);
    msg.setDestinationEntity(192U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.11666940918429014);
    msg.setSource(48752U);
    msg.setSourceEntity(188U);
    msg.setDestination(5819U);
    msg.setDestinationEntity(162U);
    msg.sane = 74U;

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
    msg.setTimeStamp(0.29870639390223974);
    msg.setSource(20097U);
    msg.setSourceEntity(143U);
    msg.setDestination(30313U);
    msg.setDestinationEntity(81U);
    msg.id = 143U;
    msg.zoom = 38U;
    msg.action = 246U;

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
    msg.setTimeStamp(0.36051818165327754);
    msg.setSource(59723U);
    msg.setSourceEntity(53U);
    msg.setDestination(24991U);
    msg.setDestinationEntity(254U);
    msg.id = 189U;
    msg.zoom = 252U;
    msg.action = 51U;

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
    msg.setTimeStamp(0.25398717911376056);
    msg.setSource(14599U);
    msg.setSourceEntity(141U);
    msg.setDestination(45198U);
    msg.setDestinationEntity(99U);
    msg.id = 18U;
    msg.zoom = 30U;
    msg.action = 251U;

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
    msg.setTimeStamp(0.6363701735828038);
    msg.setSource(33610U);
    msg.setSourceEntity(235U);
    msg.setDestination(62407U);
    msg.setDestinationEntity(67U);
    msg.id = 134U;
    msg.value = 0.5742300133687769;

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
    msg.setTimeStamp(0.12425215922867228);
    msg.setSource(284U);
    msg.setSourceEntity(43U);
    msg.setDestination(25855U);
    msg.setDestinationEntity(37U);
    msg.id = 126U;
    msg.value = 0.6767745304486505;

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
    msg.setTimeStamp(0.8873207608107934);
    msg.setSource(6295U);
    msg.setSourceEntity(234U);
    msg.setDestination(16901U);
    msg.setDestinationEntity(199U);
    msg.id = 116U;
    msg.value = 0.14577803771620512;

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
    msg.setTimeStamp(0.6918776563729231);
    msg.setSource(50597U);
    msg.setSourceEntity(131U);
    msg.setDestination(38405U);
    msg.setDestinationEntity(242U);
    msg.id = 60U;
    msg.value = 0.15384174534273376;

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
    msg.setTimeStamp(0.9960932483656771);
    msg.setSource(47183U);
    msg.setSourceEntity(182U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(116U);
    msg.id = 115U;
    msg.value = 0.4172514484198686;

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
    msg.setTimeStamp(0.7784762757689944);
    msg.setSource(61654U);
    msg.setSourceEntity(175U);
    msg.setDestination(50594U);
    msg.setDestinationEntity(209U);
    msg.id = 91U;
    msg.value = 0.8200140132470249;

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
    msg.setTimeStamp(0.3376496311295967);
    msg.setSource(52917U);
    msg.setSourceEntity(135U);
    msg.setDestination(6094U);
    msg.setDestinationEntity(209U);
    msg.id = 104U;
    msg.angle = 0.7650154155596299;

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
    msg.setTimeStamp(0.9011909776912513);
    msg.setSource(5674U);
    msg.setSourceEntity(73U);
    msg.setDestination(39823U);
    msg.setDestinationEntity(121U);
    msg.id = 82U;
    msg.angle = 0.35041787680909897;

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
    msg.setTimeStamp(0.5887033629704269);
    msg.setSource(20337U);
    msg.setSourceEntity(139U);
    msg.setDestination(55263U);
    msg.setDestinationEntity(137U);
    msg.id = 23U;
    msg.angle = 0.6291584930762338;

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
    msg.setTimeStamp(0.6287148820919972);
    msg.setSource(37526U);
    msg.setSourceEntity(55U);
    msg.setDestination(19446U);
    msg.setDestinationEntity(196U);
    msg.op = 54U;
    msg.actions.assign("IPSHUIILDXSBAGAMQMNGLBIEJUNWPUHYLQYAEKDZLFJTBIYBXU");

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
    msg.setTimeStamp(0.995855196580117);
    msg.setSource(16422U);
    msg.setSourceEntity(166U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(241U);
    msg.op = 24U;
    msg.actions.assign("CSKPLKVSEYRMQTMXPGVIACLDJTGGF");

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
    msg.setTimeStamp(0.5820876738545943);
    msg.setSource(11660U);
    msg.setSourceEntity(121U);
    msg.setDestination(43331U);
    msg.setDestinationEntity(61U);
    msg.op = 252U;
    msg.actions.assign("BUPLGZRKVENRXYCGVSAMYLZAQVYUGTJIMIMVFZNRNPONHEPTFCJQHCTHWXJWRIPBQPVTDKAWXIUZQDDVZEGEWWOD");

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
    msg.setTimeStamp(0.5534398600252571);
    msg.setSource(33849U);
    msg.setSourceEntity(147U);
    msg.setDestination(22102U);
    msg.setDestinationEntity(142U);
    msg.actions.assign("HGRUWZYVJZFXNBQKCHECOLWEALKFROUXPUFSNXVPTSQNMNVQVMIEJIETBFTGSHTDRAJULUKBXWECCCFALWITRJPZOWVHSBXMKUZZGXNIBMAXVGIKDEMCFDGQEKJUTWYNDMEBAHIGBDXOLHUCNLZQYPTRTLYZKEDKCTQCWRYDPPKGSDOYSUSMGALQVPCNRFFVYQVJYIVAOYWZJWDLIEOTHJGNQQZSWABN");

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
    msg.setTimeStamp(0.2493793339388921);
    msg.setSource(41008U);
    msg.setSourceEntity(16U);
    msg.setDestination(57267U);
    msg.setDestinationEntity(16U);
    msg.actions.assign("YLHRNZOUQOBMPDEEVXJXBCSHYCPAWUYDTCFXMBPKAQRLGZWRWAJTZVARYOHDGUHSRIVMXIXNEADFNLBGEMAWNOAIFICIGA");

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
    msg.setTimeStamp(0.5424470147976069);
    msg.setSource(8102U);
    msg.setSourceEntity(86U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(171U);
    msg.actions.assign("JZZHWBBSCKWYMYLGIHHDDKEQLYFUSAMSRMQXTVPIRALEDIJPIJOGPDJVYVTPBGIZHTFDPHYTUZCGEQAXDDLQQUAJJLOKMOGCLIVCHUBWMRKYCSXTVZNKBHVRVHLXWWRQAREH");

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
    msg.setTimeStamp(0.6016328362078902);
    msg.setSource(2592U);
    msg.setSourceEntity(171U);
    msg.setDestination(802U);
    msg.setDestinationEntity(165U);
    msg.button = 51U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.9540550784958532);
    msg.setSource(29597U);
    msg.setSourceEntity(160U);
    msg.setDestination(37730U);
    msg.setDestinationEntity(57U);
    msg.button = 15U;
    msg.value = 203U;

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
    msg.setTimeStamp(0.12578797920593898);
    msg.setSource(11349U);
    msg.setSourceEntity(153U);
    msg.setDestination(58675U);
    msg.setDestinationEntity(41U);
    msg.button = 133U;
    msg.value = 92U;

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
    msg.setTimeStamp(0.6791692694079801);
    msg.setSource(29540U);
    msg.setSourceEntity(207U);
    msg.setDestination(63140U);
    msg.setDestinationEntity(65U);
    msg.op = 111U;
    msg.text.assign("EJURTDLYFVPHWTQEXAKWHWURMNXTGQYMZNMPCVWFNWGVWAFCIQLAKZOOXWCFTSLIDBUTBHQPJJNHEZZBNSXFBEVXJWNASHZURGVEVEYGXMXLKGKUTSLZUIRBJGWHLPMQNPEEJLQG");

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
    msg.setTimeStamp(0.4314861168068319);
    msg.setSource(39866U);
    msg.setSourceEntity(108U);
    msg.setDestination(60510U);
    msg.setDestinationEntity(26U);
    msg.op = 130U;
    msg.text.assign("BIMPNZHQBXPUNJZKPYWZVDFTDSKMVQWMGKVSAGAYOQGHIOWNCHLNUHFULWZPLPTGPOFCLYQJENNJVSJHHZDPTQXAIDQXATCDGQHBSIIBZCRBEWFYXJAWCEJYSDKABOTFOUEODOWRSQIIUGBVSYHICFXRKMWDTERMPKDXRZMIJUHFVOPACANYLPFLZEGCRVOVEWJCXSKKMNLEXTTBUHRGKNFQBZLOESYMGZUTMMKYVGJFLXJRTUAIVLBUYEDXR");

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
    msg.setTimeStamp(0.7429270663773224);
    msg.setSource(40728U);
    msg.setSourceEntity(213U);
    msg.setDestination(59623U);
    msg.setDestinationEntity(144U);
    msg.op = 159U;
    msg.text.assign("IPKHVFRKRJTKNZBL");

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
    msg.setTimeStamp(0.7020710879811262);
    msg.setSource(31708U);
    msg.setSourceEntity(36U);
    msg.setDestination(39240U);
    msg.setDestinationEntity(51U);
    msg.op = 160U;
    msg.time_remain = 0.5787221578172215;
    msg.sched_time = 0.5130547356672224;

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
    msg.setTimeStamp(0.12634057760162698);
    msg.setSource(50014U);
    msg.setSourceEntity(18U);
    msg.setDestination(14193U);
    msg.setDestinationEntity(28U);
    msg.op = 196U;
    msg.time_remain = 0.6241553368159605;
    msg.sched_time = 0.06824340331595269;

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
    msg.setTimeStamp(0.7116039077642378);
    msg.setSource(27061U);
    msg.setSourceEntity(146U);
    msg.setDestination(65256U);
    msg.setDestinationEntity(86U);
    msg.op = 252U;
    msg.time_remain = 0.9422329039442797;
    msg.sched_time = 0.04392146740883929;

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
    msg.setTimeStamp(0.8504807337579835);
    msg.setSource(37755U);
    msg.setSourceEntity(104U);
    msg.setDestination(18614U);
    msg.setDestinationEntity(227U);
    msg.name.assign("WLBQFECEJBKGTMHRSWXLYPAHOIZQFPOBUNHSWQXOXJDAKZFAGWLYFIHMDTAUDCRJELZSLDZWHLTNIOVYKRCFZQPQTGVALTEKFPPAYSDDBRMDGXGPNYCOEIVIHOIYIURFRMBRUBAQSNMKUNYCDKRGMRHTEQIYTJYTOZAASPXHOZQLHENFGKWPXNUCJBHIQJCTVDSWMNBQFVPWIGRTULJCZSMJWSZEECVAMMG");
    msg.op = 244U;
    msg.sched_time = 0.15394615344384333;

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
    msg.setTimeStamp(0.4650152630752631);
    msg.setSource(48947U);
    msg.setSourceEntity(250U);
    msg.setDestination(53378U);
    msg.setDestinationEntity(30U);
    msg.name.assign("KYYOFHDOUTTSXIOSZPCMBCKY");
    msg.op = 21U;
    msg.sched_time = 0.8235738454145076;

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
    msg.setTimeStamp(0.4240751302236212);
    msg.setSource(45910U);
    msg.setSourceEntity(9U);
    msg.setDestination(33923U);
    msg.setDestinationEntity(196U);
    msg.name.assign("MPFRFTGVJBPWAXTBUMVERLEJAGHAMTCROPAUWQXSTFQBVKOOPKWNZMZPKEYKESUXTSQIUYICZGIZDGLNNCNBKJYEKVIYEZ");
    msg.op = 252U;
    msg.sched_time = 0.7224601347435832;

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
    msg.setTimeStamp(0.662245909713548);
    msg.setSource(41416U);
    msg.setSourceEntity(146U);
    msg.setDestination(39249U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.3717835357013469);
    msg.setSource(43233U);
    msg.setSourceEntity(166U);
    msg.setDestination(5964U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.027588956544193577);
    msg.setSource(578U);
    msg.setSourceEntity(244U);
    msg.setDestination(9421U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.6283901675468563);
    msg.setSource(17232U);
    msg.setSourceEntity(226U);
    msg.setDestination(56217U);
    msg.setDestinationEntity(208U);
    msg.name.assign("UMHGGSZDZIHPZYITSCSNFZUHDXUIJ");
    msg.state = 17U;

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
    msg.setTimeStamp(0.347649900378186);
    msg.setSource(28244U);
    msg.setSourceEntity(130U);
    msg.setDestination(57804U);
    msg.setDestinationEntity(97U);
    msg.name.assign("SNKWMJIUGEAOKQOBGRDEUAHODEGMIPNCLXZOFZAZRHMSCDPEJLVNPXJQGSIUOFNYNJDZBYYTWXTUHSGAKXMBVTQSXSRGNAVWNKADBLTYRLZJQOWJBLUT");
    msg.state = 153U;

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
    msg.setTimeStamp(0.38221015842059014);
    msg.setSource(16555U);
    msg.setSourceEntity(253U);
    msg.setDestination(24029U);
    msg.setDestinationEntity(178U);
    msg.name.assign("NRABYJOZGOMEJUKWBCIQXBASEXSHPPHBXIMEMVPYNYRVXECGQHVKVTAWXFZBICSONLXJARGWJEDCLJW");
    msg.state = 189U;

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
    msg.setTimeStamp(0.4816648943253776);
    msg.setSource(32029U);
    msg.setSourceEntity(203U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(194U);
    msg.name.assign("WHMMKAHCFWCEPYKJBWEZLAYFPBNUDGGVGBGMEGDCIDPDQVVRUUYEXZNCYJZWTOTWFZJXAUXFNCTGPHRYHGMSHSOQAIBBACQAKGNJLEEWALQMPJKLMJZUPVXVCERPSORIXVFIQYKBKZXEMZDONSIYHRDWZDLXLMSKTOWLUTPPOUFQKWUTGRNFKDSQTZETVYLLYRLDSQNJQIBUXJFIHANFCEOOIHTZ");
    msg.value = 213U;

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
    msg.setTimeStamp(0.8699998939539789);
    msg.setSource(55337U);
    msg.setSourceEntity(153U);
    msg.setDestination(17152U);
    msg.setDestinationEntity(227U);
    msg.name.assign("TXPIZIVAAGSFGNJLFXBIIHXKSDIMKUXGEKRXEBVDLHFCBFNUUJYVXFCTUJLSWPQCLWMHJRH");
    msg.value = 243U;

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
    msg.setTimeStamp(0.2352668365492675);
    msg.setSource(59495U);
    msg.setSourceEntity(146U);
    msg.setDestination(44880U);
    msg.setDestinationEntity(68U);
    msg.name.assign("UEFUYRGLOXOLKJOLFPSNZTMWNIXIHCTBHLSEUVGVKHJJJPYDZD");
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
    msg.setTimeStamp(0.6088813201565295);
    msg.setSource(17334U);
    msg.setSourceEntity(93U);
    msg.setDestination(16983U);
    msg.setDestinationEntity(223U);
    msg.name.assign("FPGGKZDBZGUEADOMDHKRYYCVMWALBNSNPFFNLXXMZAKIQUUTA");

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
    msg.setTimeStamp(0.45249143086665056);
    msg.setSource(6117U);
    msg.setSourceEntity(62U);
    msg.setDestination(28751U);
    msg.setDestinationEntity(248U);
    msg.name.assign("VXIMTUYQURPLJLRSWFCZAUNPYZCQKLRJEYTIFGERYUQBEZHGMMSVCSOQUJVIFZYDOKKPTPSTDWFRCNDQWXGLKMYEJPOAWOEHDWWQGSILQZUUVIBDDOMCCENXMGMNPSEYIRBFXAGVXHFJHZDIMDBFSADBGC");

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
    msg.setTimeStamp(0.09621767967905948);
    msg.setSource(7028U);
    msg.setSourceEntity(168U);
    msg.setDestination(44960U);
    msg.setDestinationEntity(213U);
    msg.name.assign("GNTMHVBMEBYPROHADQIMLMSJHTTC");

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
    msg.setTimeStamp(0.6285968148679453);
    msg.setSource(31818U);
    msg.setSourceEntity(104U);
    msg.setDestination(6443U);
    msg.setDestinationEntity(113U);
    msg.name.assign("QGJBYRWIHPPAZRHNZMLDWGSCZHEIJCTNAMGDKFUDIIZSTJSSIYUYDPVHRQNJPLNNGWCPKFSMPHABTBMTWMCZIAKBXLUSHWQXQSPMZCCEIOTMNUAKUNYFQLAVPXXUAAWIUEEVJJCIMRQKWQ");
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
    msg.setTimeStamp(0.28327140921820027);
    msg.setSource(6827U);
    msg.setSourceEntity(15U);
    msg.setDestination(51806U);
    msg.setDestinationEntity(30U);
    msg.name.assign("GSXRZCSCLWYFOLFKQADPLIMRSCAHPHUSEBAWRCTBLRAOVGGIWDPBBTKOKJBAYAFRJYKHDINWYUTROJNOHJQXXNEMPVGSVUROKWW");
    msg.value = 101U;

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
    msg.setTimeStamp(0.28630959988646254);
    msg.setSource(28431U);
    msg.setSourceEntity(191U);
    msg.setDestination(20246U);
    msg.setDestinationEntity(14U);
    msg.name.assign("CFOBZAPMJMXBAFJPSUNNGZPKTKHMYKANQCGVBLJUXUETWFMIJVNLTPRECSCVUGAAQXHPPMOIXVYVTYWOMTJOXDKH");
    msg.value = 158U;

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
    msg.setTimeStamp(0.5660486640304939);
    msg.setSource(61801U);
    msg.setSourceEntity(107U);
    msg.setDestination(47523U);
    msg.setDestinationEntity(87U);
    msg.id = 156U;
    msg.period = 981145972U;
    msg.duty_cycle = 1369539286U;

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
    msg.setTimeStamp(0.6934950251207669);
    msg.setSource(36584U);
    msg.setSourceEntity(146U);
    msg.setDestination(42317U);
    msg.setDestinationEntity(52U);
    msg.id = 35U;
    msg.period = 1770141560U;
    msg.duty_cycle = 2102495374U;

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
    msg.setTimeStamp(0.4127262068587906);
    msg.setSource(57861U);
    msg.setSourceEntity(155U);
    msg.setDestination(49598U);
    msg.setDestinationEntity(40U);
    msg.id = 237U;
    msg.period = 2602674008U;
    msg.duty_cycle = 182990485U;

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
    msg.setTimeStamp(0.1362488486569069);
    msg.setSource(35008U);
    msg.setSourceEntity(234U);
    msg.setDestination(35028U);
    msg.setDestinationEntity(107U);
    msg.id = 93U;
    msg.period = 2526545661U;
    msg.duty_cycle = 1704991463U;

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
    msg.setTimeStamp(0.5967193648356034);
    msg.setSource(56068U);
    msg.setSourceEntity(31U);
    msg.setDestination(14451U);
    msg.setDestinationEntity(118U);
    msg.id = 220U;
    msg.period = 1209375540U;
    msg.duty_cycle = 4083634U;

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
    msg.setTimeStamp(0.8463726504137877);
    msg.setSource(38147U);
    msg.setSourceEntity(189U);
    msg.setDestination(32609U);
    msg.setDestinationEntity(28U);
    msg.id = 19U;
    msg.period = 2883296432U;
    msg.duty_cycle = 2378453278U;

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
    msg.setTimeStamp(0.7201919747003044);
    msg.setSource(17622U);
    msg.setSourceEntity(170U);
    msg.setDestination(53655U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.3449583322227924;
    msg.lon = 0.08260164632174283;
    msg.height = 0.7905623304952506;
    msg.x = 0.6342417827316801;
    msg.y = 0.8241571371600258;
    msg.z = 0.03318976653353822;
    msg.phi = 0.7915295068435453;
    msg.theta = 0.335630863161937;
    msg.psi = 0.05152507686943164;
    msg.u = 0.3746588798515825;
    msg.v = 0.34139311184143883;
    msg.w = 0.45297285085620675;
    msg.vx = 0.5951020737230255;
    msg.vy = 0.621904730171271;
    msg.vz = 0.7297257322540638;
    msg.p = 0.6878699445651004;
    msg.q = 0.7604921422512213;
    msg.r = 0.6535857991286491;
    msg.depth = 0.2735713671124037;
    msg.alt = 0.6277562685342014;

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
    msg.setTimeStamp(0.6004453913619896);
    msg.setSource(8621U);
    msg.setSourceEntity(225U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.8127784737304836;
    msg.lon = 0.8412266559554975;
    msg.height = 0.6276697381018014;
    msg.x = 0.05763882045680424;
    msg.y = 0.5898332246594694;
    msg.z = 0.0861549974204272;
    msg.phi = 0.734549162814809;
    msg.theta = 0.9421445298228766;
    msg.psi = 0.48910639705541614;
    msg.u = 0.7847250848212279;
    msg.v = 0.012474556458874408;
    msg.w = 0.7652479162323244;
    msg.vx = 0.38953748290295087;
    msg.vy = 0.06267855048267668;
    msg.vz = 0.5520242445837169;
    msg.p = 0.6058429253042354;
    msg.q = 0.7223169075630139;
    msg.r = 0.8377293771003379;
    msg.depth = 0.7643105986155544;
    msg.alt = 0.636362006319687;

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
    msg.setTimeStamp(0.1623139973062253);
    msg.setSource(49128U);
    msg.setSourceEntity(172U);
    msg.setDestination(12242U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.531107290631313;
    msg.lon = 0.3651729189400521;
    msg.height = 0.9221379782714129;
    msg.x = 0.1161836572071282;
    msg.y = 0.5892096228229062;
    msg.z = 0.6664969647345581;
    msg.phi = 0.8783944712553032;
    msg.theta = 0.8527400602098767;
    msg.psi = 0.23262641522074778;
    msg.u = 0.5122693154860253;
    msg.v = 0.3354925453753117;
    msg.w = 0.9893976024945573;
    msg.vx = 0.1230184760979296;
    msg.vy = 0.1755316910487763;
    msg.vz = 0.6731942027970718;
    msg.p = 0.5124317316684258;
    msg.q = 0.7706896833126045;
    msg.r = 0.5794300246163352;
    msg.depth = 0.23934592881410133;
    msg.alt = 0.2064497190806619;

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
    msg.setTimeStamp(0.28967779005471217);
    msg.setSource(30714U);
    msg.setSourceEntity(5U);
    msg.setDestination(24464U);
    msg.setDestinationEntity(139U);
    msg.x = 0.431487570109911;
    msg.y = 0.38224603812307156;
    msg.z = 0.5556226375127844;

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
    msg.setTimeStamp(0.27956960042024537);
    msg.setSource(51344U);
    msg.setSourceEntity(58U);
    msg.setDestination(58254U);
    msg.setDestinationEntity(177U);
    msg.x = 0.19294728809622874;
    msg.y = 0.1499131009480782;
    msg.z = 0.22804463445873702;

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
    msg.setTimeStamp(0.7741203371309243);
    msg.setSource(17386U);
    msg.setSourceEntity(211U);
    msg.setDestination(31263U);
    msg.setDestinationEntity(215U);
    msg.x = 0.08810547531092294;
    msg.y = 0.7951331224145153;
    msg.z = 0.39234096629775683;

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
    msg.setTimeStamp(0.9249611474007076);
    msg.setSource(2346U);
    msg.setSourceEntity(64U);
    msg.setDestination(1124U);
    msg.setDestinationEntity(59U);
    msg.value = 0.11910875127015552;

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
    msg.setTimeStamp(0.43952630260064307);
    msg.setSource(16384U);
    msg.setSourceEntity(244U);
    msg.setDestination(64840U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7653829441247272;

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
    msg.setTimeStamp(0.2148867596224191);
    msg.setSource(7586U);
    msg.setSourceEntity(49U);
    msg.setDestination(31134U);
    msg.setDestinationEntity(246U);
    msg.value = 0.06701110667972743;

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
    msg.setTimeStamp(0.3534740020135133);
    msg.setSource(11938U);
    msg.setSourceEntity(63U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(11U);
    msg.value = 0.0025008745626570184;

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
    msg.setTimeStamp(0.1526279398812581);
    msg.setSource(205U);
    msg.setSourceEntity(83U);
    msg.setDestination(15015U);
    msg.setDestinationEntity(130U);
    msg.value = 0.653074808972995;

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
    msg.setTimeStamp(0.6309903475395393);
    msg.setSource(14866U);
    msg.setSourceEntity(59U);
    msg.setDestination(29738U);
    msg.setDestinationEntity(18U);
    msg.value = 0.09833695837301848;

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
    msg.setTimeStamp(0.8688728554802457);
    msg.setSource(43219U);
    msg.setSourceEntity(205U);
    msg.setDestination(46492U);
    msg.setDestinationEntity(254U);
    msg.x = 0.6787664805663037;
    msg.y = 0.2510754098456388;
    msg.z = 0.8409852380104643;
    msg.phi = 0.7496007179428185;
    msg.theta = 0.9145796839444645;
    msg.psi = 0.06009610508581453;
    msg.p = 0.9875784411197245;
    msg.q = 0.8686439645987897;
    msg.r = 0.6562338473757185;
    msg.u = 0.8089625014557841;
    msg.v = 0.9485502918766316;
    msg.w = 0.06106905342605751;
    msg.bias_psi = 0.46161797219909906;
    msg.bias_r = 0.7038896961241065;

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
    msg.setTimeStamp(0.8812146732661965);
    msg.setSource(4069U);
    msg.setSourceEntity(92U);
    msg.setDestination(64549U);
    msg.setDestinationEntity(176U);
    msg.x = 0.8260167383339646;
    msg.y = 0.6533344749381677;
    msg.z = 0.6621480931576963;
    msg.phi = 0.1507468137280472;
    msg.theta = 0.29723701839306815;
    msg.psi = 0.5604660676824987;
    msg.p = 0.19510476022045764;
    msg.q = 0.9577051224794296;
    msg.r = 0.8886212170427022;
    msg.u = 0.1554566064722387;
    msg.v = 0.8313967787123203;
    msg.w = 0.11975893159871176;
    msg.bias_psi = 0.5061775935759846;
    msg.bias_r = 0.6427683456360422;

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
    msg.setTimeStamp(0.988876077080227);
    msg.setSource(4645U);
    msg.setSourceEntity(104U);
    msg.setDestination(25840U);
    msg.setDestinationEntity(37U);
    msg.x = 0.6360073080750499;
    msg.y = 0.42587239906309526;
    msg.z = 0.2967223962556621;
    msg.phi = 0.8386909025090756;
    msg.theta = 0.2743950922926608;
    msg.psi = 0.6476316615975816;
    msg.p = 0.5228089180732295;
    msg.q = 0.48870562575586207;
    msg.r = 0.8693788521581055;
    msg.u = 0.6082726997686997;
    msg.v = 0.9348645413802509;
    msg.w = 0.25219576538301813;
    msg.bias_psi = 0.19338723888603704;
    msg.bias_r = 0.3499410989564645;

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
    msg.setTimeStamp(0.7028530413886772);
    msg.setSource(2848U);
    msg.setSourceEntity(37U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(89U);
    msg.bias_psi = 0.3303702401091082;
    msg.bias_r = 0.1470078329960588;
    msg.cog = 0.14735367653485354;
    msg.cyaw = 0.6881272140679104;
    msg.lbl_rej_level = 0.21121006050645497;
    msg.gps_rej_level = 0.45160051786845024;
    msg.custom_x = 0.0370152014315247;
    msg.custom_y = 0.25290933859134523;
    msg.custom_z = 0.9678600750888227;

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
    msg.setTimeStamp(0.7734600384704181);
    msg.setSource(60319U);
    msg.setSourceEntity(54U);
    msg.setDestination(56055U);
    msg.setDestinationEntity(247U);
    msg.bias_psi = 0.6832140863602064;
    msg.bias_r = 0.19056259926870833;
    msg.cog = 0.7230101609162899;
    msg.cyaw = 0.7241098302501323;
    msg.lbl_rej_level = 0.30011807127123236;
    msg.gps_rej_level = 0.26543065640900954;
    msg.custom_x = 0.000921264021670809;
    msg.custom_y = 0.7894755674656857;
    msg.custom_z = 0.38084722842352703;

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
    msg.setTimeStamp(0.0776114318911737);
    msg.setSource(26419U);
    msg.setSourceEntity(219U);
    msg.setDestination(18477U);
    msg.setDestinationEntity(30U);
    msg.bias_psi = 0.6546026370763766;
    msg.bias_r = 0.9536214292961398;
    msg.cog = 0.7813199466647788;
    msg.cyaw = 0.9721637576301194;
    msg.lbl_rej_level = 0.31865453899886076;
    msg.gps_rej_level = 0.42633910561944866;
    msg.custom_x = 0.5817795597226569;
    msg.custom_y = 0.1296453652362174;
    msg.custom_z = 0.8959722443804103;

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
    msg.setTimeStamp(0.9459264909946742);
    msg.setSource(20479U);
    msg.setSourceEntity(104U);
    msg.setDestination(34628U);
    msg.setDestinationEntity(176U);
    msg.utc_time = 0.02578220633410233;
    msg.reason = 250U;

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
    msg.setTimeStamp(0.3626846229192259);
    msg.setSource(13656U);
    msg.setSourceEntity(152U);
    msg.setDestination(57689U);
    msg.setDestinationEntity(36U);
    msg.utc_time = 0.8774983737635813;
    msg.reason = 249U;

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
    msg.setTimeStamp(0.7792034082109668);
    msg.setSource(46638U);
    msg.setSourceEntity(149U);
    msg.setDestination(23287U);
    msg.setDestinationEntity(115U);
    msg.utc_time = 0.9656459358589725;
    msg.reason = 67U;

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
    msg.setTimeStamp(0.2504032337068922);
    msg.setSource(6687U);
    msg.setSourceEntity(1U);
    msg.setDestination(27900U);
    msg.setDestinationEntity(195U);
    msg.id = 95U;
    msg.range = 0.12086198552301342;
    msg.acceptance = 187U;

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
    msg.setTimeStamp(0.05894418839023485);
    msg.setSource(55297U);
    msg.setSourceEntity(190U);
    msg.setDestination(39392U);
    msg.setDestinationEntity(194U);
    msg.id = 84U;
    msg.range = 0.6507352798933091;
    msg.acceptance = 171U;

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
    msg.setTimeStamp(0.9874365817071419);
    msg.setSource(50680U);
    msg.setSourceEntity(121U);
    msg.setDestination(28384U);
    msg.setDestinationEntity(109U);
    msg.id = 135U;
    msg.range = 0.16095249893527663;
    msg.acceptance = 55U;

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
    msg.setTimeStamp(0.4779545559790058);
    msg.setSource(57786U);
    msg.setSourceEntity(249U);
    msg.setDestination(64421U);
    msg.setDestinationEntity(205U);
    msg.type = 104U;
    msg.reason = 80U;
    msg.value = 0.45492617855740014;
    msg.timestep = 0.8427689187752466;

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
    msg.setTimeStamp(0.7568680226568726);
    msg.setSource(30292U);
    msg.setSourceEntity(192U);
    msg.setDestination(30238U);
    msg.setDestinationEntity(194U);
    msg.type = 27U;
    msg.reason = 96U;
    msg.value = 0.2827575848093983;
    msg.timestep = 0.3700128675825356;

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
    msg.setTimeStamp(0.811812453617277);
    msg.setSource(49245U);
    msg.setSourceEntity(197U);
    msg.setDestination(61166U);
    msg.setDestinationEntity(246U);
    msg.type = 167U;
    msg.reason = 236U;
    msg.value = 0.1017117149811696;
    msg.timestep = 0.6693603574926664;

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
    msg.setTimeStamp(0.33455307623654007);
    msg.setSource(31112U);
    msg.setSourceEntity(219U);
    msg.setDestination(10577U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.11743261109186132);
    msg.setSource(7838U);
    msg.setSourceEntity(108U);
    msg.setDestination(50117U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.6161444168812052);
    msg.setSource(62599U);
    msg.setSourceEntity(210U);
    msg.setDestination(15706U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.6236295003223954);
    msg.setSource(60872U);
    msg.setSourceEntity(79U);
    msg.setDestination(49377U);
    msg.setDestinationEntity(46U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EGMUUTMYLNQDGTEEJBSAZVDKBZWZRJQPERIQJLIUYVULTFDSDGLMUQNXIFDCMUENFZNSGYGCYRAIOKFOBWNWASNRXXYJHQMNBYCKPIKQATAFDNRTEUSLMBXBBEFYFWLJCVDISJTSJFHCXHXPOTQBLFXKRUMRWOKHDOPTJHRZGPQCOXZBQWWKITCVYPAARNCJCHKVAUGMOTYSSRKYKEZH");
    tmp_msg_0.lat = 0.8916846322029118;
    tmp_msg_0.lon = 0.32833593170507547;
    tmp_msg_0.depth = 0.9438338301620968;
    tmp_msg_0.query_channel = 92U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 10U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6695792495704715;
    msg.y = 0.2962361131347222;
    msg.var_x = 0.3026569288140324;
    msg.var_y = 0.14825196746420544;
    msg.distance = 0.030481647136345935;

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
    msg.setTimeStamp(0.4221774586745656);
    msg.setSource(33389U);
    msg.setSourceEntity(2U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(21U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GUZUYPNXWYJZJRSDRTMWERYCBQAQIVLMKWOWYQMTBVDAXQYGFNZGGJWXHLOZVXHHDTJQOQMODELSRFPUKQUKZPYSNFKKCGTNPVQEMRJBPSTSSFYFTAJHRBHFLKQIHEHBKAPLPECBNZKLLOMSJJGLFIDWNEGWASROSQVSTYPNPDMXNUCIJLACMVTRIBRUGEWWTXXFICVRZNVKIWCFZCELTUEMIKUDHBVEXDHMBBIXO");
    tmp_msg_0.lat = 0.6997600069923426;
    tmp_msg_0.lon = 0.5767241659014809;
    tmp_msg_0.depth = 0.4866115559236369;
    tmp_msg_0.query_channel = 130U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 110U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8165014079871245;
    msg.y = 0.8214253543642432;
    msg.var_x = 0.9606124915955255;
    msg.var_y = 0.9995506247315965;
    msg.distance = 0.060355716382317626;

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
    msg.setTimeStamp(0.8148978364298775);
    msg.setSource(9938U);
    msg.setSourceEntity(159U);
    msg.setDestination(2544U);
    msg.setDestinationEntity(11U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OHOHRLGNGNPCZTLOWVSXKZUQGMCPRMRGTLEQSSNLFARAENZTPZTEDOIFYIQIAXHXEJPNCUAMWJPILICMGVUKLDMARIAQHVYDSUSXZMWSOZQALBXGHPDDDLZLRGQUYORZKFSMYISBTWGJBXCYSTINWUXWL");
    tmp_msg_0.lat = 0.2503899931248965;
    tmp_msg_0.lon = 0.8229841626287523;
    tmp_msg_0.depth = 0.1874469329205114;
    tmp_msg_0.query_channel = 1U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 150U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.13826038753163583;
    msg.y = 0.0909257814569967;
    msg.var_x = 0.5072914362961132;
    msg.var_y = 0.8495630405398339;
    msg.distance = 0.9278169506334787;

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
    msg.setTimeStamp(0.4604428064373519);
    msg.setSource(22890U);
    msg.setSourceEntity(46U);
    msg.setDestination(38650U);
    msg.setDestinationEntity(106U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.5966584984874279);
    msg.setSource(22906U);
    msg.setSourceEntity(241U);
    msg.setDestination(52866U);
    msg.setDestinationEntity(204U);
    msg.state = 89U;

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
    msg.setTimeStamp(0.29555645744855985);
    msg.setSource(35155U);
    msg.setSourceEntity(8U);
    msg.setDestination(26226U);
    msg.setDestinationEntity(158U);
    msg.state = 49U;

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
    msg.setTimeStamp(0.16887647764327407);
    msg.setSource(22138U);
    msg.setSourceEntity(250U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(22U);
    msg.x = 0.820004431659908;
    msg.y = 0.7500143169954666;
    msg.z = 0.8436805165943704;

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
    msg.setTimeStamp(0.19361382651590975);
    msg.setSource(55816U);
    msg.setSourceEntity(239U);
    msg.setDestination(33453U);
    msg.setDestinationEntity(133U);
    msg.x = 0.5158564121625194;
    msg.y = 0.870770975747836;
    msg.z = 0.911245937439597;

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
    msg.setTimeStamp(0.7078176325891145);
    msg.setSource(29063U);
    msg.setSourceEntity(110U);
    msg.setDestination(20484U);
    msg.setDestinationEntity(145U);
    msg.x = 0.528365379629016;
    msg.y = 0.3373605621302781;
    msg.z = 0.7703711514730827;

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
    msg.setTimeStamp(0.2216651921327477);
    msg.setSource(43666U);
    msg.setSourceEntity(254U);
    msg.setDestination(32985U);
    msg.setDestinationEntity(86U);
    msg.value = 0.3598765023433925;

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
    msg.setTimeStamp(0.7360145783491042);
    msg.setSource(53912U);
    msg.setSourceEntity(31U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(152U);
    msg.value = 0.20625389208145872;

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
    msg.setTimeStamp(0.08178235009806156);
    msg.setSource(33547U);
    msg.setSourceEntity(148U);
    msg.setDestination(36908U);
    msg.setDestinationEntity(150U);
    msg.value = 0.4362877216249854;

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
    msg.setTimeStamp(0.21016579761866505);
    msg.setSource(37430U);
    msg.setSourceEntity(197U);
    msg.setDestination(5309U);
    msg.setDestinationEntity(88U);
    msg.value = 0.6904998887031658;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.9309422834611645);
    msg.setSource(11479U);
    msg.setSourceEntity(55U);
    msg.setDestination(39303U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6893750739599779;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.5551076881576357);
    msg.setSource(41245U);
    msg.setSourceEntity(98U);
    msg.setDestination(22762U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9254731904379448;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.7622224785043106);
    msg.setSource(24119U);
    msg.setSourceEntity(172U);
    msg.setDestination(19604U);
    msg.setDestinationEntity(204U);
    msg.value = 0.05182535156695167;
    msg.speed_units = 37U;

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
    msg.setTimeStamp(0.8686987874556211);
    msg.setSource(32245U);
    msg.setSourceEntity(227U);
    msg.setDestination(21187U);
    msg.setDestinationEntity(140U);
    msg.value = 0.4484200723509224;
    msg.speed_units = 46U;

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
    msg.setTimeStamp(0.17163281662398078);
    msg.setSource(50126U);
    msg.setSourceEntity(184U);
    msg.setDestination(30536U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9913415814061624;
    msg.speed_units = 222U;

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
    msg.setTimeStamp(0.30688689003682224);
    msg.setSource(13166U);
    msg.setSourceEntity(184U);
    msg.setDestination(2372U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9908935789122616;

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
    msg.setTimeStamp(0.2962472220504103);
    msg.setSource(23900U);
    msg.setSourceEntity(126U);
    msg.setDestination(59179U);
    msg.setDestinationEntity(130U);
    msg.value = 0.3523288814506784;

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
    msg.setTimeStamp(0.11361322123719109);
    msg.setSource(18054U);
    msg.setSourceEntity(224U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(73U);
    msg.value = 0.9301519220535365;

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
    msg.setTimeStamp(0.8663484225702629);
    msg.setSource(1993U);
    msg.setSourceEntity(173U);
    msg.setDestination(35801U);
    msg.setDestinationEntity(135U);
    msg.value = 0.019252078453193322;

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
    msg.setTimeStamp(0.8991575233303736);
    msg.setSource(51215U);
    msg.setSourceEntity(169U);
    msg.setDestination(11627U);
    msg.setDestinationEntity(168U);
    msg.value = 0.678818606136793;

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
    msg.setTimeStamp(0.7132796398769675);
    msg.setSource(5846U);
    msg.setSourceEntity(3U);
    msg.setDestination(46588U);
    msg.setDestinationEntity(200U);
    msg.value = 0.9357932021509282;

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
    msg.setTimeStamp(0.11543727228931266);
    msg.setSource(16868U);
    msg.setSourceEntity(62U);
    msg.setDestination(16640U);
    msg.setDestinationEntity(168U);
    msg.value = 0.8867102735716017;

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
    msg.setTimeStamp(0.40671099507218944);
    msg.setSource(39045U);
    msg.setSourceEntity(42U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(21U);
    msg.value = 0.5284054628937461;

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
    msg.setTimeStamp(0.5581054305563454);
    msg.setSource(25911U);
    msg.setSourceEntity(105U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6355369139743463;

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
    msg.setTimeStamp(0.7963782808382307);
    msg.setSource(29200U);
    msg.setSourceEntity(163U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(163U);
    msg.path_ref = 276417370U;
    msg.start_lat = 0.5281269054436812;
    msg.start_lon = 0.28781066949902945;
    msg.start_z = 0.03219175710154043;
    msg.start_z_units = 102U;
    msg.end_lat = 0.48345914500367926;
    msg.end_lon = 0.2782056778563562;
    msg.end_z = 0.1641576848468641;
    msg.end_z_units = 28U;
    msg.speed = 0.07349946107398297;
    msg.speed_units = 14U;
    msg.lradius = 0.300567890090929;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.7643134859399332);
    msg.setSource(21495U);
    msg.setSourceEntity(245U);
    msg.setDestination(42380U);
    msg.setDestinationEntity(237U);
    msg.path_ref = 3307675040U;
    msg.start_lat = 0.7072355716763387;
    msg.start_lon = 0.27005528530603373;
    msg.start_z = 0.9364769360322085;
    msg.start_z_units = 174U;
    msg.end_lat = 0.8077258595632565;
    msg.end_lon = 0.13945172645712067;
    msg.end_z = 0.5735813216021628;
    msg.end_z_units = 124U;
    msg.speed = 0.9715207759075569;
    msg.speed_units = 39U;
    msg.lradius = 0.22853558865340196;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.2698502352964607);
    msg.setSource(13055U);
    msg.setSourceEntity(122U);
    msg.setDestination(1909U);
    msg.setDestinationEntity(89U);
    msg.path_ref = 2426085182U;
    msg.start_lat = 0.4146831294280635;
    msg.start_lon = 0.9163325042327269;
    msg.start_z = 0.09489500237129767;
    msg.start_z_units = 1U;
    msg.end_lat = 0.4462754953408913;
    msg.end_lon = 0.8900319242157798;
    msg.end_z = 0.6175879816950419;
    msg.end_z_units = 245U;
    msg.speed = 0.21538454366992033;
    msg.speed_units = 140U;
    msg.lradius = 0.06962448552892553;
    msg.flags = 107U;

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
    msg.setTimeStamp(0.834823031876815);
    msg.setSource(44060U);
    msg.setSourceEntity(88U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(21U);
    msg.x = 0.07605313781437772;
    msg.y = 0.8267946641327804;
    msg.z = 0.9532263422497762;
    msg.k = 0.8245111427195386;
    msg.m = 0.1914281689021866;
    msg.n = 0.05691826382815213;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.46855669814669265);
    msg.setSource(23192U);
    msg.setSourceEntity(218U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(221U);
    msg.x = 0.9079304680737715;
    msg.y = 0.7491817456382819;
    msg.z = 0.9103658176456407;
    msg.k = 0.5166909228765026;
    msg.m = 0.9652871677812489;
    msg.n = 0.9499903562715396;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.3771977136998911);
    msg.setSource(55946U);
    msg.setSourceEntity(161U);
    msg.setDestination(54995U);
    msg.setDestinationEntity(55U);
    msg.x = 0.9878579307362434;
    msg.y = 0.11479523605562592;
    msg.z = 0.9402336171538872;
    msg.k = 0.927950756265453;
    msg.m = 0.467898196424254;
    msg.n = 0.9325866246753821;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.18414766426954743);
    msg.setSource(4635U);
    msg.setSourceEntity(172U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(193U);
    msg.value = 0.8789114620246884;

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
    msg.setTimeStamp(0.31636372819550596);
    msg.setSource(54137U);
    msg.setSourceEntity(192U);
    msg.setDestination(61734U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7639905954502371;

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
    msg.setTimeStamp(0.6109329140410481);
    msg.setSource(58468U);
    msg.setSourceEntity(215U);
    msg.setDestination(62434U);
    msg.setDestinationEntity(119U);
    msg.value = 0.56672873674963;

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
    msg.setTimeStamp(0.6470792057827326);
    msg.setSource(19795U);
    msg.setSourceEntity(231U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(204U);
    msg.u = 0.5881835578532865;
    msg.v = 0.8451051738473283;
    msg.w = 0.28662047537832036;
    msg.p = 0.24763241176390283;
    msg.q = 0.4162915367129869;
    msg.r = 0.5645407629412295;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.8965907242712291);
    msg.setSource(29505U);
    msg.setSourceEntity(52U);
    msg.setDestination(36344U);
    msg.setDestinationEntity(200U);
    msg.u = 0.6938312435343781;
    msg.v = 0.24792983068322516;
    msg.w = 0.7215231550992244;
    msg.p = 0.741062149429744;
    msg.q = 0.8477057979636679;
    msg.r = 0.7820560632166531;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.13058426334290374);
    msg.setSource(8804U);
    msg.setSourceEntity(24U);
    msg.setDestination(40202U);
    msg.setDestinationEntity(197U);
    msg.u = 0.996799091462967;
    msg.v = 0.2017266580739282;
    msg.w = 0.7789287944890151;
    msg.p = 0.21363921116568818;
    msg.q = 0.7647510754181278;
    msg.r = 0.6464128820930294;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.17398547036094125);
    msg.setSource(44895U);
    msg.setSourceEntity(52U);
    msg.setDestination(63566U);
    msg.setDestinationEntity(71U);
    msg.path_ref = 2335949022U;
    msg.start_lat = 0.34792718010824575;
    msg.start_lon = 0.858382607885344;
    msg.start_z = 0.6152573032102039;
    msg.start_z_units = 130U;
    msg.end_lat = 0.9721054440636577;
    msg.end_lon = 0.5318152706611743;
    msg.end_z = 0.6730322635630832;
    msg.end_z_units = 214U;
    msg.lradius = 0.36081103027609607;
    msg.flags = 20U;
    msg.x = 0.7867210879503163;
    msg.y = 0.15759178188459788;
    msg.z = 0.371086215988119;
    msg.vx = 0.3176076696234501;
    msg.vy = 0.15323899674344932;
    msg.vz = 0.790321035027578;
    msg.course_error = 0.9520126041550852;
    msg.eta = 48162U;

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
    msg.setTimeStamp(0.361295361201459);
    msg.setSource(23059U);
    msg.setSourceEntity(39U);
    msg.setDestination(65238U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 55896274U;
    msg.start_lat = 0.49348296149286275;
    msg.start_lon = 0.08597647050339452;
    msg.start_z = 0.07710053136721284;
    msg.start_z_units = 159U;
    msg.end_lat = 0.42915142804931117;
    msg.end_lon = 0.12798708070924447;
    msg.end_z = 0.39597657635931294;
    msg.end_z_units = 119U;
    msg.lradius = 0.8601741158509704;
    msg.flags = 199U;
    msg.x = 0.6919318190333498;
    msg.y = 0.31675423489935883;
    msg.z = 0.6080163920446332;
    msg.vx = 0.6038925026088712;
    msg.vy = 0.40059090274344245;
    msg.vz = 0.026685299352184333;
    msg.course_error = 0.6740374290949759;
    msg.eta = 10633U;

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
    msg.setTimeStamp(0.6023699040611562);
    msg.setSource(61527U);
    msg.setSourceEntity(165U);
    msg.setDestination(40052U);
    msg.setDestinationEntity(186U);
    msg.path_ref = 3771061382U;
    msg.start_lat = 0.05462154993253632;
    msg.start_lon = 0.5071189289199988;
    msg.start_z = 0.6303491206572167;
    msg.start_z_units = 27U;
    msg.end_lat = 0.1186834024700284;
    msg.end_lon = 0.8194431452091462;
    msg.end_z = 0.5146541702270434;
    msg.end_z_units = 224U;
    msg.lradius = 0.5863867278622392;
    msg.flags = 68U;
    msg.x = 0.09235261777721326;
    msg.y = 0.48148013318373506;
    msg.z = 0.8776775556849534;
    msg.vx = 0.0063780602934314645;
    msg.vy = 0.5252168433152347;
    msg.vz = 0.8984344170121594;
    msg.course_error = 0.43632339063010084;
    msg.eta = 50589U;

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
    msg.setTimeStamp(0.2829966763442776);
    msg.setSource(3790U);
    msg.setSourceEntity(31U);
    msg.setDestination(31862U);
    msg.setDestinationEntity(219U);
    msg.k = 0.13056172740416683;
    msg.m = 0.8605016441617577;
    msg.n = 0.1419023750090036;

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
    msg.setTimeStamp(0.927506877668426);
    msg.setSource(32006U);
    msg.setSourceEntity(15U);
    msg.setDestination(49977U);
    msg.setDestinationEntity(104U);
    msg.k = 0.49310831170016345;
    msg.m = 0.6952882745604935;
    msg.n = 0.8013317669787752;

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
    msg.setTimeStamp(0.47772118489893856);
    msg.setSource(10083U);
    msg.setSourceEntity(216U);
    msg.setDestination(41050U);
    msg.setDestinationEntity(143U);
    msg.k = 0.7326515665702973;
    msg.m = 0.2518345737232509;
    msg.n = 0.9168178279692417;

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
    msg.setTimeStamp(0.29252094703239195);
    msg.setSource(61143U);
    msg.setSourceEntity(20U);
    msg.setDestination(41277U);
    msg.setDestinationEntity(166U);
    msg.p = 0.6930588829364344;
    msg.i = 0.5088373841624684;
    msg.d = 0.1154016483880016;
    msg.a = 0.6351463308919878;

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
    msg.setTimeStamp(0.23805977941075196);
    msg.setSource(29155U);
    msg.setSourceEntity(205U);
    msg.setDestination(16119U);
    msg.setDestinationEntity(8U);
    msg.p = 0.33830003523549435;
    msg.i = 0.5599425961344288;
    msg.d = 0.5113048427126815;
    msg.a = 0.4832878673776779;

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
    msg.setTimeStamp(0.3137120463065476);
    msg.setSource(51325U);
    msg.setSourceEntity(251U);
    msg.setDestination(21000U);
    msg.setDestinationEntity(252U);
    msg.p = 0.4854871022233517;
    msg.i = 0.6165308359004441;
    msg.d = 0.7431125989203051;
    msg.a = 0.8434505311401138;

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
    msg.setTimeStamp(0.25429752649412585);
    msg.setSource(23458U);
    msg.setSourceEntity(143U);
    msg.setDestination(27546U);
    msg.setDestinationEntity(179U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.31392034561751747);
    msg.setSource(40510U);
    msg.setSourceEntity(85U);
    msg.setDestination(30602U);
    msg.setDestinationEntity(63U);
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
    msg.setTimeStamp(0.06075599571612922);
    msg.setSource(53543U);
    msg.setSourceEntity(91U);
    msg.setDestination(2149U);
    msg.setDestinationEntity(195U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.502489469593845);
    msg.setSource(59881U);
    msg.setSourceEntity(246U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(98U);
    msg.timeout = 21227U;
    msg.lat = 0.3360736912350597;
    msg.lon = 0.9134578726608743;
    msg.z = 0.5550134271743962;
    msg.z_units = 84U;
    msg.speed = 0.46897600161108755;
    msg.speed_units = 68U;
    msg.roll = 0.0986812794923011;
    msg.pitch = 0.21184481297038982;
    msg.yaw = 0.11261213880150034;
    msg.custom.assign("GQMJLIKZGUKIXALQHNAJARQHCRDQXYTBVUSNJOIOBNHEDMAYDSSPABQWKECQHXVMTEZLSWTVKDYYXYUCOMEPPETSWFBDRMOICNLVYDHLYZSHPQFFM");

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
    msg.setTimeStamp(0.9977459684991019);
    msg.setSource(28966U);
    msg.setSourceEntity(96U);
    msg.setDestination(46849U);
    msg.setDestinationEntity(134U);
    msg.timeout = 21767U;
    msg.lat = 0.802457572602864;
    msg.lon = 0.19836902430351766;
    msg.z = 0.356635145338453;
    msg.z_units = 127U;
    msg.speed = 0.17758614291481656;
    msg.speed_units = 169U;
    msg.roll = 0.07836881466102241;
    msg.pitch = 0.5969125744960205;
    msg.yaw = 0.9821865848907974;
    msg.custom.assign("DTVKLVNNRRTAOMMIQJEBBXEONWUYWNRSRWPYKFMSTBEJOQIPKQQUFPFVXVVUDZLBSNSUEXNXJSNAATKVHGUFZPAZJKYDBPIIWYNMWYOOXNADHAMCLHKEUM");

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
    msg.setTimeStamp(0.8542130845808538);
    msg.setSource(59089U);
    msg.setSourceEntity(29U);
    msg.setDestination(30897U);
    msg.setDestinationEntity(216U);
    msg.timeout = 55375U;
    msg.lat = 0.4390674114557416;
    msg.lon = 0.5450397724990405;
    msg.z = 0.39934619096828583;
    msg.z_units = 198U;
    msg.speed = 0.20370394016449356;
    msg.speed_units = 56U;
    msg.roll = 0.2136833650047888;
    msg.pitch = 0.34541121840572564;
    msg.yaw = 0.5305721261587788;
    msg.custom.assign("PKMLMUNKSCBATNXEITZYHZYVOZSIKSJUIHAKIIZZJLYAJDRFSEWRQMWDRJFHWXUPNFRQELTOYWJHSYBTVQKWBGGLIRCBA");

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
    msg.setTimeStamp(0.7372251711860855);
    msg.setSource(19011U);
    msg.setSourceEntity(94U);
    msg.setDestination(61212U);
    msg.setDestinationEntity(220U);
    msg.timeout = 13641U;
    msg.lat = 0.3818169592923163;
    msg.lon = 0.3547085206173315;
    msg.z = 0.3927683536875708;
    msg.z_units = 146U;
    msg.speed = 0.5825724544231671;
    msg.speed_units = 138U;
    msg.duration = 24616U;
    msg.radius = 0.9824747407496219;
    msg.flags = 225U;
    msg.custom.assign("QPGZHJSXASDTZTPCTMHOFURBZCIVNGSOWTRDKEHPTWXYYWFBQIHVKZSMJAHAUPXHXGGUVFBSREJLYDTBODXMIEGIDEORUHRBCJFZQBSMNKEIQAVLNCPCLDTYJPBNRZPVFVEOYUNDONUFTTWGHAZIKANRIOLZXAWRQRDCEQXGMYPCIGSXBLOCMOEKSJEKZWEDGBJJVKYKIHQNLVFVALFYNWXRCIYLWPQLBQAZPMNFJQSLM");

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
    msg.setTimeStamp(0.16229865454276848);
    msg.setSource(4492U);
    msg.setSourceEntity(67U);
    msg.setDestination(15443U);
    msg.setDestinationEntity(24U);
    msg.timeout = 37156U;
    msg.lat = 0.9200523213567888;
    msg.lon = 0.6823718809952392;
    msg.z = 0.4336206962885649;
    msg.z_units = 20U;
    msg.speed = 0.018475388623129918;
    msg.speed_units = 75U;
    msg.duration = 50689U;
    msg.radius = 0.1740571887862351;
    msg.flags = 205U;
    msg.custom.assign("HYVSFFNTDVW");

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
    msg.setTimeStamp(0.24801367891669035);
    msg.setSource(34759U);
    msg.setSourceEntity(223U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(13U);
    msg.timeout = 6609U;
    msg.lat = 0.19151421031599025;
    msg.lon = 0.3542849979913042;
    msg.z = 0.37892771699872074;
    msg.z_units = 232U;
    msg.speed = 0.48590470190290047;
    msg.speed_units = 38U;
    msg.duration = 5634U;
    msg.radius = 0.3825399959599598;
    msg.flags = 191U;
    msg.custom.assign("OFGOLPMDXTNDMVCESEPXVVTJZRHTCFIKGGYTCNXFEJLKCBVJTUFXISCZLRLHSSOYNIBFUGFWVAKHWSPKWKZJIMVRYAWBQWANZOGHZEXMRKAYFYTHVYPYUNOWAOQMESJBXTNEZMGQLBJLDZDRWHPIVDVOQZUAMEWUHPUEYPGKNKJEJLPLBFRASTHAUGSXHNCUQDXYEQGGAOWRRFINJBMCM");

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
    msg.setTimeStamp(0.7503826746838025);
    msg.setSource(56220U);
    msg.setSourceEntity(77U);
    msg.setDestination(26992U);
    msg.setDestinationEntity(184U);
    msg.custom.assign("CSEQKRTCEXLQRCPXFUKZYRXGHJFNTOQBQNAIOWJCAIVKKVSNSIIJJDRDBIBXJPVVAMLZFRGMGYLRNNCLPUGMQTQHDGWUXKYAYYFVORHBQQEPEJWZHMRFHADWCFDMQSCDHMAIVZPGB");

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
    msg.setTimeStamp(0.052620121864746405);
    msg.setSource(9157U);
    msg.setSourceEntity(136U);
    msg.setDestination(2164U);
    msg.setDestinationEntity(124U);
    msg.custom.assign("VVMJYWRRBLT");

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
    msg.setTimeStamp(0.12346337068115198);
    msg.setSource(11829U);
    msg.setSourceEntity(194U);
    msg.setDestination(65211U);
    msg.setDestinationEntity(222U);
    msg.custom.assign("UGMYIPODBTEZSVRPNGEWRGIXBHCHBYNHMLMPIUSFKAYHGJNDSYMAFQULOQFWEEOIHHATAHDNDVCCNKIRNVIIFSTKUKRAPBJXYJOROMJGKMKXJXKUECNKHDJXTKTLBZSQPUTYLAEQREDBNLICJEZURZQWTPGEFACPX");

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
    msg.setTimeStamp(0.3408806025925871);
    msg.setSource(29224U);
    msg.setSourceEntity(121U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(138U);
    msg.timeout = 13060U;
    msg.lat = 0.49419481020546896;
    msg.lon = 0.9580132837551778;
    msg.z = 0.7472719338406035;
    msg.z_units = 208U;
    msg.duration = 30921U;
    msg.speed = 0.8171704684377586;
    msg.speed_units = 215U;
    msg.type = 177U;
    msg.radius = 0.0371169315556954;
    msg.length = 0.6782277028917028;
    msg.bearing = 0.7172273392595354;
    msg.direction = 145U;
    msg.custom.assign("XWWBUKXERNGQGAMMEJHWAJZZGZVUSWVVEDHPMQTUNLLKIUQKUVFYPHXYBHGHPOQGBKLJBHSOQCIWJPNBSUDEKQIFRDGIUBMDXNPQFPEXICFGRGQ");

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
    msg.setTimeStamp(0.9285612664304445);
    msg.setSource(53569U);
    msg.setSourceEntity(131U);
    msg.setDestination(4148U);
    msg.setDestinationEntity(217U);
    msg.timeout = 38797U;
    msg.lat = 0.8888402028619302;
    msg.lon = 0.17346782864566934;
    msg.z = 0.24410797345185054;
    msg.z_units = 240U;
    msg.duration = 43476U;
    msg.speed = 0.41056098610758385;
    msg.speed_units = 137U;
    msg.type = 132U;
    msg.radius = 0.4373108170510406;
    msg.length = 0.07804489554416638;
    msg.bearing = 0.1716740437817248;
    msg.direction = 241U;
    msg.custom.assign("HYSNGOSZWAMDJHADWAYLOGZXZBHCKXCVDPKAQZQHJPYOFBNSBZ");

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
    msg.setTimeStamp(0.4455350603594552);
    msg.setSource(30358U);
    msg.setSourceEntity(213U);
    msg.setDestination(23244U);
    msg.setDestinationEntity(254U);
    msg.timeout = 49948U;
    msg.lat = 0.21062928429629924;
    msg.lon = 0.5724657337571343;
    msg.z = 0.45270026838314525;
    msg.z_units = 49U;
    msg.duration = 60682U;
    msg.speed = 0.7271744758026921;
    msg.speed_units = 134U;
    msg.type = 169U;
    msg.radius = 0.2194251701021318;
    msg.length = 0.12784574003457494;
    msg.bearing = 0.32814385836444127;
    msg.direction = 195U;
    msg.custom.assign("NZHRPXQFPVEIVMCSPCZMKNRLAZTLXSQPJHKSVKVIUNMWJMNAQTUNETRFSGIKVLPUCHJBMFDFXJOFAOIXLCYDLWPUPGEYANGPRSOQMTAXZSNSZKWKCLTBTBOEFUMNBIGUZCJBKQQEQYFIJGXQDVLTFWWEODYFYQXYVXOZT");

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
    msg.setTimeStamp(0.239670754755963);
    msg.setSource(52740U);
    msg.setSourceEntity(251U);
    msg.setDestination(50338U);
    msg.setDestinationEntity(23U);
    msg.duration = 52654U;
    msg.custom.assign("YQVAYFGOTZVKMGWVFXBKFDSHSQJHCIBSIEZKIEILNKALOCLWLWSVENMRAQQMUHCKIURJWWJTAWXPXQPZWQVHHEQPVTQD");

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
    msg.setTimeStamp(0.5250341141890283);
    msg.setSource(13025U);
    msg.setSourceEntity(122U);
    msg.setDestination(3689U);
    msg.setDestinationEntity(137U);
    msg.duration = 23731U;
    msg.custom.assign("SYTCXZLZESSKGVHZBTXFWJIPGCQMFBAHUQYREFKZLEVAPNJWYJTCVVITBUZTULZEMRHAMXHBMOBRBHPQAWEGEFILDYJDFNXMLDGXAXHDMYKZSQSGWPJHGIUKOKUBMNTQSAHIYVPUYDMKVWJEZVNNLCSBJGRZBGIKIHWPNEA");

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
    msg.setTimeStamp(0.09356339395579494);
    msg.setSource(28589U);
    msg.setSourceEntity(189U);
    msg.setDestination(34315U);
    msg.setDestinationEntity(180U);
    msg.duration = 64940U;
    msg.custom.assign("DOYNCYNWWIVVRZHHTLGMNIVZHOTGWDJCJMKKRTUKTESDOBQLEXYMIKYICMJGXCPODKIQRLUBBAIUQDQNRSPWPHIKEQXIPJFVGERTUBLZJXLFUQEDDABTNKJSMOZZFQWLJGVJTVLOMGFNSIPGNUEYWZEZCXZLOFHAYQBYSPHNAFGJRHKURSVKXZWHXPMESXRJWALMBAKB");

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
    msg.setTimeStamp(0.7802031920997718);
    msg.setSource(50978U);
    msg.setSourceEntity(107U);
    msg.setDestination(47172U);
    msg.setDestinationEntity(109U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.4533445527115745;
    msg.control.set(tmp_msg_0);
    msg.duration = 51545U;
    msg.custom.assign("PQIQEDLDUJOBERZSBTKGGOUJRUEYTTQZDAZAEBNQHEWGRWYBNOCTCYDGNRKSWPUCDVMFYLCBPACQXPIXSKGPDQAHWQBZTVHFYSKJNYRPHUWOWUXHAIAQOFXUYGHFBBLXCLF");

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
    msg.setTimeStamp(0.6479358263043872);
    msg.setSource(57133U);
    msg.setSourceEntity(45U);
    msg.setDestination(65244U);
    msg.setDestinationEntity(175U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.39360796854576585;
    msg.control.set(tmp_msg_0);
    msg.duration = 3630U;
    msg.custom.assign("GCHJEVINTEQAFOYJXFZIBDZVYDGRLBAVIHKPJQLNMGGVVYAOYKRO");

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
    msg.setTimeStamp(0.450585537242401);
    msg.setSource(11201U);
    msg.setSourceEntity(177U);
    msg.setDestination(34930U);
    msg.setDestinationEntity(145U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4274601661U;
    tmp_msg_0.start_lat = 0.500124545496365;
    tmp_msg_0.start_lon = 0.5970526151797763;
    tmp_msg_0.start_z = 0.8016988935832082;
    tmp_msg_0.start_z_units = 56U;
    tmp_msg_0.end_lat = 0.29039431469195554;
    tmp_msg_0.end_lon = 0.47039466834691335;
    tmp_msg_0.end_z = 0.9082055066373983;
    tmp_msg_0.end_z_units = 178U;
    tmp_msg_0.speed = 0.17856318957906014;
    tmp_msg_0.speed_units = 52U;
    tmp_msg_0.lradius = 0.37252394857454496;
    tmp_msg_0.flags = 26U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17960U;
    msg.custom.assign("RSWJVWVNQKJUCCGAJZAXHGJPLKNVDVLNMCURBZWXDTXZYTCKGRPASBGZNBRSRHBHSSTBYYWHLBLDVHPTKEL");

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
    msg.setTimeStamp(0.3696600749185779);
    msg.setSource(34156U);
    msg.setSourceEntity(103U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(186U);
    msg.timeout = 35146U;
    msg.lat = 0.7079255997396432;
    msg.lon = 0.5827433543718562;
    msg.z = 0.5573451961935578;
    msg.z_units = 214U;
    msg.speed = 0.0649543370810941;
    msg.speed_units = 149U;
    msg.bearing = 0.4239046805802822;
    msg.cross_angle = 0.9207103766405657;
    msg.width = 0.5033437588663363;
    msg.length = 0.4872441363334036;
    msg.hstep = 0.16731296173624433;
    msg.coff = 73U;
    msg.alternation = 10U;
    msg.flags = 185U;
    msg.custom.assign("KSUNWDABUKWIKFDUCFRFYRKDMFHYGJDWOEBUELDBAYSQJQDMSKJYLGZATCZHTXGXUWAZTLQNZFJJNDZFCXCLNIOGZTOOZGNLQKVHGOCC");

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
    msg.setTimeStamp(0.7933203981939666);
    msg.setSource(33210U);
    msg.setSourceEntity(89U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(112U);
    msg.timeout = 46641U;
    msg.lat = 0.054125709527989785;
    msg.lon = 0.852158400909741;
    msg.z = 0.6362458602267816;
    msg.z_units = 142U;
    msg.speed = 0.39201198724984354;
    msg.speed_units = 30U;
    msg.bearing = 0.39384699274257007;
    msg.cross_angle = 0.4755805233447603;
    msg.width = 0.75413717345362;
    msg.length = 0.8658769479424452;
    msg.hstep = 0.5504977285772593;
    msg.coff = 239U;
    msg.alternation = 227U;
    msg.flags = 65U;
    msg.custom.assign("QQGCRBOBZBVMDZAVGSDYQNVXEVMHNFXBANMUTKGJFGWTQLLYKYPMPUZHWADMJSKNJTQTZMEJIHWPCWGGDDRAXFXYQUESPEPMWDBBIOXABRFMALRHNZYPIWLJSHNTGCUHKZOUQILWOAOFIDHXKJQJFTRTIZEAXSRQYFOHBHCYNVLOCVNL");

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
    msg.setTimeStamp(0.8120068030522679);
    msg.setSource(22878U);
    msg.setSourceEntity(185U);
    msg.setDestination(30495U);
    msg.setDestinationEntity(247U);
    msg.timeout = 37280U;
    msg.lat = 0.1746262079211306;
    msg.lon = 0.5559683564061401;
    msg.z = 0.44030889657617767;
    msg.z_units = 155U;
    msg.speed = 0.5452893073550482;
    msg.speed_units = 199U;
    msg.bearing = 0.5740139710894507;
    msg.cross_angle = 0.26531998044889826;
    msg.width = 0.3267268530433902;
    msg.length = 0.7808817237032573;
    msg.hstep = 0.44543162930430513;
    msg.coff = 78U;
    msg.alternation = 32U;
    msg.flags = 194U;
    msg.custom.assign("KAZENPDKVIIVAOVQJITEKDFASYBKWRCNZZMERFROZIZRQAIPGNJKZPMSLODNMWHEHHKBSATNXGDWKVDPNOJYBXOXYVWWUHNURVUCLXCCFXATOCTMLRZFRDYGMTYUEDRGIHSGQXXGOJQKOVAIYATSBMGYVTNJYUFX");

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
    msg.setTimeStamp(0.6718311769995867);
    msg.setSource(17199U);
    msg.setSourceEntity(232U);
    msg.setDestination(5823U);
    msg.setDestinationEntity(41U);
    msg.timeout = 39783U;
    msg.lat = 0.5585890802210264;
    msg.lon = 0.5281973566364436;
    msg.z = 0.3774208333321363;
    msg.z_units = 235U;
    msg.speed = 0.28230900709203044;
    msg.speed_units = 209U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.732608804549421;
    tmp_msg_0.y = 0.26385014506597415;
    tmp_msg_0.z = 0.9422977290030865;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KRXGNZBFWKQTWXTNWQQYSCOISFDRPALNVUWMNQVYQRYBYQAIBQFEGJWAYEJDUMTKPJQDIEAGZPPGFIAPNLHPLWYENUHQSEBMNDGFZBUCOFOUISTCAZHABZWZBTRZNSCTKWBMLKVXRRNFVLGFJCAJXFTOMXTGTEUKAUYVPGPMGCHDNVSMRUIOIJKZEJHHIQVMLXCODOZCEVFDRSJIKVXOPH");

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
    msg.setTimeStamp(0.5716264657019733);
    msg.setSource(3436U);
    msg.setSourceEntity(193U);
    msg.setDestination(41351U);
    msg.setDestinationEntity(62U);
    msg.timeout = 33105U;
    msg.lat = 0.71005083671438;
    msg.lon = 0.9137940760420162;
    msg.z = 0.24163937023505822;
    msg.z_units = 218U;
    msg.speed = 0.4313870152186985;
    msg.speed_units = 29U;
    msg.custom.assign("QLVFBSXMGBAAHILDCYDXIUSVLJCDZYAXDTBVMZEODIZUFVMRNRWUSSUVLTCPTLKHSYXAWKMZOJCYCQI");

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
    msg.setTimeStamp(0.7024672915296675);
    msg.setSource(37941U);
    msg.setSourceEntity(174U);
    msg.setDestination(20407U);
    msg.setDestinationEntity(166U);
    msg.timeout = 2823U;
    msg.lat = 0.264969847778075;
    msg.lon = 0.9031856865046584;
    msg.z = 0.3510386147160478;
    msg.z_units = 163U;
    msg.speed = 0.1346507810300449;
    msg.speed_units = 76U;
    msg.custom.assign("RKDPMQHNEPBJKJFLAKLSZRWXAPBQQEJOTHGZIFYWHFZOKADADFXQCGLXLIRMVRYWVTIBDVUALFTUKSCXJKHRAVFTKPMNLJPMOGHKUZCNWTIGDVIYMCCDFEICVEZMEJMSFRSCQIBSA");

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
    msg.setTimeStamp(0.892455331265839);
    msg.setSource(55486U);
    msg.setSourceEntity(188U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(141U);
    msg.x = 0.24486925463035913;
    msg.y = 0.29079619398333856;
    msg.z = 0.3019408388907595;

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
    msg.setTimeStamp(0.8212789311941305);
    msg.setSource(52738U);
    msg.setSourceEntity(169U);
    msg.setDestination(58040U);
    msg.setDestinationEntity(63U);
    msg.x = 0.0347230782065201;
    msg.y = 0.9733031810178038;
    msg.z = 0.02207205278779656;

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
    msg.setTimeStamp(0.5045874506787382);
    msg.setSource(33347U);
    msg.setSourceEntity(248U);
    msg.setDestination(59056U);
    msg.setDestinationEntity(170U);
    msg.x = 0.8216558866231315;
    msg.y = 0.504076940615646;
    msg.z = 0.9275313709778491;

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
    msg.setTimeStamp(0.8477454497429003);
    msg.setSource(12799U);
    msg.setSourceEntity(105U);
    msg.setDestination(11306U);
    msg.setDestinationEntity(130U);
    msg.timeout = 43823U;
    msg.lat = 0.2717899225749114;
    msg.lon = 0.7519575853077068;
    msg.z = 0.7734961380609305;
    msg.z_units = 109U;
    msg.amplitude = 0.9410462978798669;
    msg.pitch = 0.33598231569001724;
    msg.speed = 0.5021476783174366;
    msg.speed_units = 176U;
    msg.custom.assign("CKJEIZSPIRJWXYCNRGSXANEJXGNFOYWQKVLPGUNIMEQCRAKMHXQBHOTMRDFSICEUWPUFDJIFKGUPHQBSNETCVZDFCMZAXZAXBALYGOBHQALVJQMERTOZHLBWHXCKZVLOTWYQSDPEBYBIZSYHAFYJMFDTWMPRYHBIPFWJBRPBJITTVGRNFLSSVZVTQCJAHPNSYDQTGTIWKJFOURGMOMLXVWCMHDLGKADUNEUE");

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
    msg.setTimeStamp(0.7257776255295869);
    msg.setSource(34312U);
    msg.setSourceEntity(104U);
    msg.setDestination(59614U);
    msg.setDestinationEntity(245U);
    msg.timeout = 52088U;
    msg.lat = 0.7333396776040534;
    msg.lon = 0.2449871359033634;
    msg.z = 0.6870801886715828;
    msg.z_units = 179U;
    msg.amplitude = 0.04115802649910405;
    msg.pitch = 0.3725551156236827;
    msg.speed = 0.8072012575944314;
    msg.speed_units = 109U;
    msg.custom.assign("QLHVWSQAGHZXSOYGYRMKLFS");

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
    msg.setTimeStamp(0.13615953625916233);
    msg.setSource(11023U);
    msg.setSourceEntity(22U);
    msg.setDestination(57995U);
    msg.setDestinationEntity(68U);
    msg.timeout = 20473U;
    msg.lat = 0.8780285101306571;
    msg.lon = 0.9904677349057968;
    msg.z = 0.6355446836645056;
    msg.z_units = 67U;
    msg.amplitude = 0.9059024221368595;
    msg.pitch = 0.9928606254754829;
    msg.speed = 0.361859523558807;
    msg.speed_units = 224U;
    msg.custom.assign("CJXKCDZIMWGQYEQYCDWSKTIYZDFOLBBRPNFRGGZGRZXMQVKNXUGPOORNVTSPISIVKEPBYRHQKRCPLAOZDTATKBFSSJONWOVC");

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
    msg.setTimeStamp(0.5267064765528234);
    msg.setSource(22532U);
    msg.setSourceEntity(104U);
    msg.setDestination(65244U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.4354769478954512);
    msg.setSource(28215U);
    msg.setSourceEntity(70U);
    msg.setDestination(39473U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.8614861018626256);
    msg.setSource(61199U);
    msg.setSourceEntity(16U);
    msg.setDestination(37880U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.6973789338292683);
    msg.setSource(39586U);
    msg.setSourceEntity(67U);
    msg.setDestination(38902U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.35223017477017116;
    msg.lon = 0.6944867708782481;
    msg.z = 0.06978543454454034;
    msg.z_units = 63U;
    msg.radius = 0.6920462060368939;
    msg.duration = 51602U;
    msg.speed = 0.23552192445494036;
    msg.speed_units = 137U;
    msg.custom.assign("KQTIGCWXXOGBRQCTOUOQUDHVXTRYNEHRFRRMTWEFCSAWMMCGDXQOGENSJFRDHTSELCNTKIZOALRFPHKWLBYVLAVEAODEGQIVPWVZIUFKBLKTPTIYLEYDXADMZRSGOAEJQEWHVWRFNXHAIBNPGBHFKPJYPKOQLBBBZVUJJOQD");

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
    msg.setTimeStamp(0.7898578285008201);
    msg.setSource(64579U);
    msg.setSourceEntity(45U);
    msg.setDestination(1748U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.2619485911112722;
    msg.lon = 0.3878406743740247;
    msg.z = 0.0908395773951447;
    msg.z_units = 211U;
    msg.radius = 0.23325331959666729;
    msg.duration = 63299U;
    msg.speed = 0.05113474763836556;
    msg.speed_units = 237U;
    msg.custom.assign("OBVAEZBHJGQDXXNTLBTFTGPQEWQYDHUBSHUHKKESDPNVTJMITKZBAQREQCVTLYDRISOOBOFSGHEYF");

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
    msg.setTimeStamp(0.8626600633018252);
    msg.setSource(44158U);
    msg.setSourceEntity(42U);
    msg.setDestination(5045U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.3094218020646532;
    msg.lon = 0.9170139748245237;
    msg.z = 0.9065064178245141;
    msg.z_units = 111U;
    msg.radius = 0.9638399487972609;
    msg.duration = 54414U;
    msg.speed = 0.8304272694017836;
    msg.speed_units = 18U;
    msg.custom.assign("POQKOHHUVBKLTEAQZAJAWRCQEKFXSNDRSVMJWTHNPYAFTWUIUFUMAKHDAIPKGBNIARYNIDWXJOITHOCMJNADVXCOZYZJJYBGWDUMFTDOIXGHXDFSEUWODPBOCVFSRAYFSTPWTBXLXMZQNZGZRWLLJZCCRFYLBMCWSLJIHRFKTAIMHCSYSOETXLSITYXSEGRBGVBX");

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
    msg.setTimeStamp(0.7378340477866027);
    msg.setSource(6437U);
    msg.setSourceEntity(254U);
    msg.setDestination(1103U);
    msg.setDestinationEntity(147U);
    msg.timeout = 5591U;
    msg.flags = 82U;
    msg.lat = 0.4155302272095335;
    msg.lon = 0.27693151773434277;
    msg.start_z = 0.7787218264395523;
    msg.start_z_units = 60U;
    msg.end_z = 0.6064716021087477;
    msg.end_z_units = 142U;
    msg.radius = 0.8035694630391389;
    msg.speed = 0.46132309841054353;
    msg.speed_units = 244U;
    msg.custom.assign("HUNNXVPVLAJSCEJMBMNMYPXUTRMNQJHRBWUXZVZRASSAYKGYRIXBPYOOJZUHFKQKAMNVLMRTQDZHAUIOYEYUTBKHLXNHGKTDJKB");

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
    msg.setTimeStamp(0.08043023497125967);
    msg.setSource(46057U);
    msg.setSourceEntity(61U);
    msg.setDestination(62866U);
    msg.setDestinationEntity(174U);
    msg.timeout = 30550U;
    msg.flags = 54U;
    msg.lat = 0.12375430311453717;
    msg.lon = 0.37582158978397817;
    msg.start_z = 0.44788764679397475;
    msg.start_z_units = 154U;
    msg.end_z = 0.96575486045879;
    msg.end_z_units = 39U;
    msg.radius = 0.007055334196181984;
    msg.speed = 0.6169780199401858;
    msg.speed_units = 91U;
    msg.custom.assign("XWZOXHMQNDSWRRNZAVQHLDHJTFEDURMVUHCMUCEHDMWVPCRNJKKRESGQNJSUXKNFJOMJCHQOMIVPABWG");

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
    msg.setTimeStamp(0.46923726186433823);
    msg.setSource(21813U);
    msg.setSourceEntity(85U);
    msg.setDestination(34947U);
    msg.setDestinationEntity(12U);
    msg.timeout = 35616U;
    msg.flags = 73U;
    msg.lat = 0.9123531999574734;
    msg.lon = 0.3458751147428032;
    msg.start_z = 0.39061708594640243;
    msg.start_z_units = 187U;
    msg.end_z = 0.8633277566613002;
    msg.end_z_units = 70U;
    msg.radius = 0.584979295557391;
    msg.speed = 0.3199077959054647;
    msg.speed_units = 162U;
    msg.custom.assign("GRWJIORUFXOSOJOIPVDMLBKLFUBKBNHFPYMEIATSQIUKZURNHFTJNSZXZYJKDEMACKMTZRHCZOYWOLPEWXXKZWRHOBICQVTOXATLRMJCFYDPMAIPNQTKKDAXRAZQLXOUMMVNLLTFKJNJPDFSWCBJIESPEHENAYGRFBFEFSVTWUGLYUSMSJGTWVGYGCWHPX");

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
    msg.setTimeStamp(0.7923608699855185);
    msg.setSource(52306U);
    msg.setSourceEntity(234U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(37U);
    msg.timeout = 868U;
    msg.lat = 0.7141329910720626;
    msg.lon = 0.11986820132145504;
    msg.z = 0.8138864989002718;
    msg.z_units = 106U;
    msg.speed = 0.37358913837558116;
    msg.speed_units = 69U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.63304203022699;
    tmp_msg_0.y = 0.7454017732870637;
    tmp_msg_0.z = 0.46382657839353614;
    tmp_msg_0.t = 0.38268847394666283;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SYBGNIVGSPJHLDPYHKZXWLBEXLGOYLWAXTIMUEHDXNXGJOVXWQBDMDFBLTCDHUNNUXEIALKWEBXBNFQSEWJCXQPUKGANEPOWMECTAWOQDTSCYAYHZLRTSJQURVFVIOJRKMMDZRMIOIOGOR");

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
    msg.setTimeStamp(0.863828077824223);
    msg.setSource(15287U);
    msg.setSourceEntity(32U);
    msg.setDestination(58963U);
    msg.setDestinationEntity(189U);
    msg.timeout = 42929U;
    msg.lat = 0.4771942773301828;
    msg.lon = 0.608310337093742;
    msg.z = 0.19835102551230632;
    msg.z_units = 48U;
    msg.speed = 0.7495118485343929;
    msg.speed_units = 153U;
    msg.custom.assign("PABOWYXHDHOVFXMVSVIJRNSQMRQWBCNDWTXCFGVBSCIXJZOWYNEOIVRWBYEGASJUIPUFYBRFHVIARCUSXWYHGLPTNAQLCITZRZTFVVVLMMGEJGEZRUBLFGUXOLESFMSJVWQPAZIXYYLDBXHKZJPTFORLRQYKNOKKTNJEXNB");

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
    msg.setTimeStamp(0.8427498300988239);
    msg.setSource(33450U);
    msg.setSourceEntity(197U);
    msg.setDestination(64953U);
    msg.setDestinationEntity(174U);
    msg.timeout = 781U;
    msg.lat = 0.15097132357590026;
    msg.lon = 0.8349925274244624;
    msg.z = 0.9458935388607789;
    msg.z_units = 126U;
    msg.speed = 0.6321371872035251;
    msg.speed_units = 170U;
    msg.custom.assign("IEJPXEMXGJKRVNQUEZYOZCOECXGEFODADOGIYNYZCAEJAZBQAHFPWJQFGIRJVHLHS");

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
    msg.setTimeStamp(0.08692375776729044);
    msg.setSource(16452U);
    msg.setSourceEntity(236U);
    msg.setDestination(43377U);
    msg.setDestinationEntity(178U);
    msg.x = 0.060863229070274305;
    msg.y = 0.49356142190722874;
    msg.z = 0.7064912845296633;
    msg.t = 0.5267835850065677;

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
    msg.setTimeStamp(0.6423507570483374);
    msg.setSource(33046U);
    msg.setSourceEntity(106U);
    msg.setDestination(44358U);
    msg.setDestinationEntity(37U);
    msg.x = 0.7998787228638605;
    msg.y = 0.014266674338944352;
    msg.z = 0.4932392205679431;
    msg.t = 0.3885229197874971;

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
    msg.setTimeStamp(0.8136700939563228);
    msg.setSource(60039U);
    msg.setSourceEntity(236U);
    msg.setDestination(55208U);
    msg.setDestinationEntity(246U);
    msg.x = 0.606624774695157;
    msg.y = 0.760681726485974;
    msg.z = 0.5030096329160492;
    msg.t = 0.5760240131926525;

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
    msg.setTimeStamp(0.509257660716836);
    msg.setSource(28341U);
    msg.setSourceEntity(243U);
    msg.setDestination(22882U);
    msg.setDestinationEntity(192U);
    msg.timeout = 32621U;
    msg.name.assign("HKMHMZSYSLYEDVYTBKDDJTNFYRACMNVSHSJOEFGXAVVZJFZNXOWKKNWFHEIAIQCXBWDEKXTXQEQKRHMIPYMOVFPKPWKLOLQGMAULNBTNFAJGVGDIODEPHFDHDTFWVYJDBQQKTJYMMYCCNURPIOZCXIPFBR");
    msg.custom.assign("VMBDFARYNPZTRXQRGMXTFLIIEDSZITXOJUTCYTSZNXZIKTJBKPRRCLXMHLHHIYPAVNMMDNHDBJSOPCHGMLVBEOQCEKWVWGSUZFXNOTDEMGSBEPVOCQPEIQZIUAHX");

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
    msg.setTimeStamp(0.41309112261565006);
    msg.setSource(47583U);
    msg.setSourceEntity(202U);
    msg.setDestination(6857U);
    msg.setDestinationEntity(148U);
    msg.timeout = 19933U;
    msg.name.assign("PDKUWMOTKJAFQZXYZCZVBRTEEULWDEDDTCQPEUPZCNMDHZNQFPMKKPSWYVSICFOFXIRMBPGVVXHBZXRMIVXO");
    msg.custom.assign("CAIEWVQGDEBLNHEYEVYMKPJULPKVBOJXFWQHQXWRPSVAYIXPNTOHDAOETOWNDHCONHSPJT");

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
    msg.setTimeStamp(0.6514549925548756);
    msg.setSource(27828U);
    msg.setSourceEntity(119U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(187U);
    msg.timeout = 65197U;
    msg.name.assign("RTNVAELVGNPLBZLWJCRAGKATRGSANJFIKQYIKTEEYOCPXYCQCIAOAWGODTKYGMNPJUEUYDSXZWUMBUNSPAJGFVQZBQPUJVVMXAGTRZNBHCXKRIXDORHKYDWQEJTSJJNPHBSPJXIQLSWMNIDNLFIBVCMCKYVZWGZXWPQDYIFZFCSZJWQCLWHTEROLCOBEEHOUTIFMXQRUSWBMYHZUOS");
    msg.custom.assign("ZGBIYTNGTEWWHBWUFVOJUICXQSLLDBQWVWICUEYYLNCJUKDTDLOPGQYNGKGTUFTRNKTEUCQCHMYDVBBPLOJJVTEZYQWXWXOFJFOFQSNHMWBUHM");

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
    msg.setTimeStamp(0.5507806086689575);
    msg.setSource(33350U);
    msg.setSourceEntity(129U);
    msg.setDestination(64000U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.17740690901807155;
    msg.lon = 0.9973306947521634;
    msg.z = 0.215395693848356;
    msg.z_units = 1U;
    msg.speed = 0.012752783868428375;
    msg.speed_units = 171U;
    msg.start_time = 0.20181308617939464;
    msg.custom.assign("LTARJQQSFIIYNIXEKQDPMBMVEBLUOVEUMZJDINHBUVAEZMCFZDHPDNGFXUKFKLDWROFMYSTYYXYQKXNAYPVKLPSSDSSXNIVBWWGCKYDCGHUCWLGPEOCKUITHXYTHAFJSWGYOOLJNTGJPOJQTRGXKFHKBQZAJTOUOXNXPMVRWFPBQEIVLHJBIGUTGBCADEZMKDOFCLZQCZEJDVSLS");

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
    msg.setTimeStamp(0.09032850842348339);
    msg.setSource(17390U);
    msg.setSourceEntity(20U);
    msg.setDestination(10841U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.8936535579031115;
    msg.lon = 0.41876153159292795;
    msg.z = 0.6252926917025698;
    msg.z_units = 234U;
    msg.speed = 0.48369412391530686;
    msg.speed_units = 72U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34594U;
    tmp_msg_0.off_x = 0.6741310625868213;
    tmp_msg_0.off_y = 0.39598137808829614;
    tmp_msg_0.off_z = 0.3191356456907023;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5848921503576245;
    msg.custom.assign("VLEVLQOMXAJVRUHXOCUSPXMBYPTI");

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
    msg.setTimeStamp(0.13229672024064276);
    msg.setSource(47671U);
    msg.setSourceEntity(207U);
    msg.setDestination(3102U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.6590015988415351;
    msg.lon = 0.6947794278114133;
    msg.z = 0.8627420438652099;
    msg.z_units = 224U;
    msg.speed = 0.5092329378641508;
    msg.speed_units = 12U;
    msg.start_time = 0.7094728948990019;
    msg.custom.assign("GZKZDEQNFDAAYCEHLBHRJHERFIENYZOGWXAELIKNFPILSGALUOSXMGHSNKHUVUHGKIBOYPHPCBALUDPOKVTSTVIQEOWKQPJIUZRCRXVPBBERWWLNNHFFCWJMYXVVWSAJGDFGMVWZCHTCEUVMQBPQNFZJFJJDGXXZOOIEQTXKUWGMTCOTQWTUCBCDDOMPLAIUXMDSKBIEZLKOQN");

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
    msg.setTimeStamp(0.04380094647522992);
    msg.setSource(31905U);
    msg.setSourceEntity(98U);
    msg.setDestination(37845U);
    msg.setDestinationEntity(244U);
    msg.vid = 776U;
    msg.off_x = 0.964784191242753;
    msg.off_y = 0.0794373697630667;
    msg.off_z = 0.012879316964554688;

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
    msg.setTimeStamp(0.45560022964146984);
    msg.setSource(65114U);
    msg.setSourceEntity(13U);
    msg.setDestination(53404U);
    msg.setDestinationEntity(93U);
    msg.vid = 22017U;
    msg.off_x = 0.15444931846667176;
    msg.off_y = 0.43210035924402246;
    msg.off_z = 0.1768610694817695;

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
    msg.setTimeStamp(0.8862414490876236);
    msg.setSource(60525U);
    msg.setSourceEntity(194U);
    msg.setDestination(28908U);
    msg.setDestinationEntity(211U);
    msg.vid = 8648U;
    msg.off_x = 0.15522533700793717;
    msg.off_y = 0.3647575539582486;
    msg.off_z = 0.4965041427116966;

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
    msg.setTimeStamp(0.9112899497238117);
    msg.setSource(58065U);
    msg.setSourceEntity(34U);
    msg.setDestination(44792U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.3442580131804155);
    msg.setSource(53771U);
    msg.setSourceEntity(108U);
    msg.setDestination(42707U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.8165119976235741);
    msg.setSource(3120U);
    msg.setSourceEntity(152U);
    msg.setDestination(20919U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.6200576182030122);
    msg.setSource(13862U);
    msg.setSourceEntity(123U);
    msg.setDestination(178U);
    msg.setDestinationEntity(167U);
    msg.mid = 37215U;

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
    msg.setTimeStamp(0.41077337485265386);
    msg.setSource(59952U);
    msg.setSourceEntity(108U);
    msg.setDestination(739U);
    msg.setDestinationEntity(94U);
    msg.mid = 7768U;

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
    msg.setTimeStamp(0.3812896787364427);
    msg.setSource(19046U);
    msg.setSourceEntity(123U);
    msg.setDestination(38207U);
    msg.setDestinationEntity(147U);
    msg.mid = 24240U;

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
    msg.setTimeStamp(0.4057268551268025);
    msg.setSource(54252U);
    msg.setSourceEntity(64U);
    msg.setDestination(16838U);
    msg.setDestinationEntity(10U);
    msg.state = 187U;
    msg.eta = 49386U;
    msg.info.assign("BJWRYVOAQHHXRYBUXQZZKYLMOFHUETMMHRBENRZUSJLJVKKUVXGHOLJICFBFOWPITFLNXFGNCSTZLWDXTBFE");

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
    msg.setTimeStamp(0.5638263795159619);
    msg.setSource(47085U);
    msg.setSourceEntity(192U);
    msg.setDestination(37726U);
    msg.setDestinationEntity(171U);
    msg.state = 163U;
    msg.eta = 19698U;
    msg.info.assign("YOSNVSULRGCQSQHUPDBMKVSKNRYEFADEJXZODMQSSITGHZOGQVRXPTUNLOETYUNYIGWBFUHJDVNPRWLDFXBJWBNXTYPVACPZLPBGAEDYULEEIFFHYODXTCZTNZWWAMGKDHFMAPTTIVJCCAGKZEMNIZZKAQZCVFJDPZLJOJLFRISQHORRKHQBXVUIAKSWPMIMBBWWOITYCYGLWKYLF");

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
    msg.setTimeStamp(0.9829585012096801);
    msg.setSource(27945U);
    msg.setSourceEntity(31U);
    msg.setDestination(3474U);
    msg.setDestinationEntity(235U);
    msg.state = 41U;
    msg.eta = 6736U;
    msg.info.assign("JAENQJKQWERSELUCSHGTXAWJONBIJYUGZCCYIKWKEVSYNZJISLKZJHRRJOIBBAULTXPPX");

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
    msg.setTimeStamp(0.4027600972090458);
    msg.setSource(47167U);
    msg.setSourceEntity(9U);
    msg.setDestination(19745U);
    msg.setDestinationEntity(135U);
    msg.system = 18488U;
    msg.duration = 11063U;
    msg.speed = 0.8512495349826836;
    msg.speed_units = 164U;
    msg.x = 0.9579255643780202;
    msg.y = 0.2676386232492397;
    msg.z = 0.11159856714996774;
    msg.z_units = 139U;

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
    msg.setTimeStamp(0.08512686923160051);
    msg.setSource(20278U);
    msg.setSourceEntity(232U);
    msg.setDestination(10278U);
    msg.setDestinationEntity(136U);
    msg.system = 21050U;
    msg.duration = 5963U;
    msg.speed = 0.6364000477025319;
    msg.speed_units = 248U;
    msg.x = 0.5906649017378475;
    msg.y = 0.739808569046183;
    msg.z = 0.24112471825726567;
    msg.z_units = 73U;

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
    msg.setTimeStamp(0.9709749267933532);
    msg.setSource(41317U);
    msg.setSourceEntity(217U);
    msg.setDestination(14512U);
    msg.setDestinationEntity(68U);
    msg.system = 25263U;
    msg.duration = 59996U;
    msg.speed = 0.47537127263500245;
    msg.speed_units = 241U;
    msg.x = 0.02069022169861734;
    msg.y = 0.43207193343051464;
    msg.z = 0.848545735462128;
    msg.z_units = 92U;

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
    msg.setTimeStamp(0.5603023333552113);
    msg.setSource(52811U);
    msg.setSourceEntity(48U);
    msg.setDestination(10864U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.4673406533278063;
    msg.lon = 0.22722062951105837;
    msg.speed = 0.9085261737104644;
    msg.speed_units = 89U;
    msg.duration = 17139U;
    msg.sys_a = 27790U;
    msg.sys_b = 13141U;
    msg.move_threshold = 0.07737852264098832;

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
    msg.setTimeStamp(0.007290829804815657);
    msg.setSource(36750U);
    msg.setSourceEntity(199U);
    msg.setDestination(53729U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.1214571351424295;
    msg.lon = 0.7606108433863636;
    msg.speed = 0.8370565643690195;
    msg.speed_units = 214U;
    msg.duration = 36129U;
    msg.sys_a = 2341U;
    msg.sys_b = 59177U;
    msg.move_threshold = 0.13755125875969876;

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
    msg.setTimeStamp(0.8919727341290834);
    msg.setSource(42803U);
    msg.setSourceEntity(112U);
    msg.setDestination(40850U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.9941096887670414;
    msg.lon = 0.6055013109998396;
    msg.speed = 0.7287145659264805;
    msg.speed_units = 154U;
    msg.duration = 2419U;
    msg.sys_a = 9137U;
    msg.sys_b = 62913U;
    msg.move_threshold = 0.3174120326555554;

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
    msg.setTimeStamp(0.6275879692740453);
    msg.setSource(28449U);
    msg.setSourceEntity(34U);
    msg.setDestination(61870U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.5968053683144539;
    msg.lon = 0.8632679402671801;
    msg.z = 0.7556192016713628;
    msg.z_units = 208U;
    msg.speed = 0.7995672999056053;
    msg.speed_units = 26U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9107341467193677;
    tmp_msg_0.lon = 0.7107258552146286;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GLLXDUDHHVPRKEGIPQRRBQAREYOYPVRIXFROPGOYGMQIQBAIUCOZAUSGPDVLBCATWGJXHTLFVDEHAYDKPQNMFDKTSXCCRLBSHODMXZMJVWOBJUOCNTBIWTECSNVASYYZZKLMNRRAUQMBBKMVZVFHEIZJLEZJFUPTRXETBICZFYOVUDAOWAIGMVQFHJFDHZM");

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
    msg.setTimeStamp(0.6597848922933933);
    msg.setSource(59945U);
    msg.setSourceEntity(195U);
    msg.setDestination(10628U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.5548624119404767;
    msg.lon = 0.43899657286346094;
    msg.z = 0.9486022121542396;
    msg.z_units = 173U;
    msg.speed = 0.3318759427628857;
    msg.speed_units = 35U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.886428903681051;
    tmp_msg_0.lon = 0.15584544601154637;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BIESVXWNTPNFHVDSUJHSFUMBSQOUCDJURTZRADGXFBCEOLKTEPUKUIRIBQRDYMBHKELT");

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
    msg.setTimeStamp(0.740362949729437);
    msg.setSource(54244U);
    msg.setSourceEntity(110U);
    msg.setDestination(56931U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.21348148664111977;
    msg.lon = 0.19697602860728136;
    msg.z = 0.7236700985092983;
    msg.z_units = 190U;
    msg.speed = 0.7503693944645208;
    msg.speed_units = 156U;
    msg.custom.assign("WHUFHSYYTEOBTDEICUNKEQMCBHNHRNALNOQXVYJWXNGIWVZXDFZTXCFADZFTSYKFVHVUAJHBXNLXPWGPSSGDJDNSHRJPKUQOGIIMSXIEMFOYHGBUMIVADYQPWIGLDQBEEKJNASFRZCKRU");

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
    msg.setTimeStamp(0.39431279882146486);
    msg.setSource(37158U);
    msg.setSourceEntity(138U);
    msg.setDestination(49867U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.6203753375555101;
    msg.lon = 0.3104188475967181;

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
    msg.setTimeStamp(0.4859611158120636);
    msg.setSource(3213U);
    msg.setSourceEntity(239U);
    msg.setDestination(54894U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.4502497737249218;
    msg.lon = 0.4641899200162761;

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
    msg.setTimeStamp(0.5112572112163191);
    msg.setSource(37577U);
    msg.setSourceEntity(135U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.4697658488996499;
    msg.lon = 0.11229494630243242;

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
    msg.setTimeStamp(0.8295904683896198);
    msg.setSource(26651U);
    msg.setSourceEntity(92U);
    msg.setDestination(6375U);
    msg.setDestinationEntity(35U);
    msg.timeout = 61592U;
    msg.lat = 0.7769975033374126;
    msg.lon = 0.22302299918875323;
    msg.z = 0.9020035596365741;
    msg.z_units = 133U;
    msg.pitch = 0.053795669773556876;
    msg.amplitude = 0.33443698808212785;
    msg.duration = 6206U;
    msg.speed = 0.4487521977138563;
    msg.speed_units = 156U;
    msg.radius = 0.9386019053858499;
    msg.direction = 239U;
    msg.custom.assign("NJNNADNVYPWUYWELDMQKRJKWTJUHWDJXGGRUHDIKXRCVDWFOJBNUKXVEIVAZBSYBJBBLLXINRDIOGPYVHTIEXZAYKQZNCTCEISWJORMKVSIPEYMFWMXYIFWQPCMCKNZIXOJGDQMSTVPSMLTENUPRAUXSPHYCFZFCCMLOVRGTWWOXAGBEUGXIBTQQMSTCSFJMLOBLYHAVHZGFJAPFNHGHFLGOURFOSQQRBDEBYKDTSQPHZZ");

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
    msg.setTimeStamp(0.7809943653809928);
    msg.setSource(25101U);
    msg.setSourceEntity(8U);
    msg.setDestination(38562U);
    msg.setDestinationEntity(166U);
    msg.timeout = 53571U;
    msg.lat = 0.6848733203915293;
    msg.lon = 0.47263045485805266;
    msg.z = 0.719382407300692;
    msg.z_units = 235U;
    msg.pitch = 0.8897377737437512;
    msg.amplitude = 0.18454214155351234;
    msg.duration = 2517U;
    msg.speed = 0.6917877021481935;
    msg.speed_units = 24U;
    msg.radius = 0.37835185606685073;
    msg.direction = 175U;
    msg.custom.assign("PSAAKGAUPZZNBXTRKIWKRDANTLQHVMDESGRKBULWRWQZJIEIPXYBMWFMPFOZEGNDCZANKTZJZJLYPFSTFESMRCOLVOOOAUPLXGBNZDLSLYIHMTKVQXGHVOQPQVBRQYYCWBIIQMZCBVJCMEOFKGVFDPER");

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
    msg.setTimeStamp(0.6273395045452091);
    msg.setSource(15225U);
    msg.setSourceEntity(217U);
    msg.setDestination(38933U);
    msg.setDestinationEntity(74U);
    msg.timeout = 45768U;
    msg.lat = 0.3988137121544175;
    msg.lon = 0.46532139065221123;
    msg.z = 0.7724294458396244;
    msg.z_units = 212U;
    msg.pitch = 0.2257009889472601;
    msg.amplitude = 0.650216920986848;
    msg.duration = 44961U;
    msg.speed = 0.8031707495057796;
    msg.speed_units = 254U;
    msg.radius = 0.6655803447617973;
    msg.direction = 182U;
    msg.custom.assign("IOXNHMCMWGQYGMJSLUDTXOFZLBWZJAFHUOQTCALZKPXXUXGOZNRLYKVYCRSUBOLOBYCADTANFVCXTIIBMZHSEPRPSK");

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
    msg.setTimeStamp(0.5315508117402382);
    msg.setSource(19500U);
    msg.setSourceEntity(115U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("RTDMYLBGEOWKZSMGPTOVJWYVKLZGXHTCIDIVHVBHFLMUMPZCTQPWZSNBNUMMGZNQNNTUKQPYCUCSPTNLHDIOHQUCJHJCMQWIXKOLPARAIUGWKNWADAAPLYJXXYSFZQZRFJOBEVPOJQRJAIDOQGRDOVHGNKAUCRZFSDXUGFOCJEIKSBEMHLGVBXUXIYROIFPRYDEFSZIYQKAEHTDFGXDYWMACYQEVJXWLTNVSCNBHFLEKAWBKWJSTPXULBF");
    msg.reference_frame = 176U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4047U;
    tmp_msg_0.off_x = 0.8973702900900256;
    tmp_msg_0.off_y = 0.08424247864373513;
    tmp_msg_0.off_z = 0.5345151651118624;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DRGSUBDZXKYYNHKQOGQTEAEZCVISABRNFFWRBYCWRUWKZOYCERBVNNDTDRHYEBIVVRLNLPJMVJWGZQTUHWZJIIMOMVBFHOPZGJAJCHBOMGEXAHD");

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
    msg.setTimeStamp(0.8140719430569031);
    msg.setSource(3163U);
    msg.setSourceEntity(178U);
    msg.setDestination(5591U);
    msg.setDestinationEntity(223U);
    msg.formation_name.assign("PNUEBPGABKXVYFDNHFGMTBEHIRUHW");
    msg.reference_frame = 13U;
    msg.custom.assign("OGQJYJUMXEJRHJSXZPOPYCGTJQNXNKOJTKFEGHZSDGLUXHAHIOGLCLBLZMQCPJVEUUKGRBBDPFTPTPSOZDCQNAKSYIISKFZCHRWAYMBCUTETXWQFX");

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
    msg.setTimeStamp(0.9547742526777543);
    msg.setSource(60532U);
    msg.setSourceEntity(88U);
    msg.setDestination(53597U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("XDSQLLRZBTROQVEMVFSZDXQLWIMXVNDDTOIMWPNJUB");
    msg.reference_frame = 175U;
    msg.custom.assign("VOYQDLXOHRXYJETNZPUATIKYRFLGFCTGQSWMRPFCOYKQXPTDVHMADPCETGUBMZEWHZOGHJHVXDDPUMZM");

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
    msg.setTimeStamp(0.7407051794964693);
    msg.setSource(59221U);
    msg.setSourceEntity(5U);
    msg.setDestination(28825U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("UVHOHRQRVMETIQTJPTVA");
    msg.formation_name.assign("UWADYZMRTCRRWIBNJRCXETARSTCCHGUHTGFJFVNNGWBFEUJLZBYRIFJOMELYJPHZMKSMMAUWDWKECTIDSWSNVSGHCHVRGFICTBVXOYBLDXNLXCFMGYMKZKBEXQXWAAGIUVQPZBTUDABPMVCMEVPFXLQSLJMKPZSDYPEVKLAXHTFLZOEKOAOQLYIGFIIQHSOQSUBOXUJEZPWQRGOFQDCYQTNNRZNSKUKWPGVJPURA");
    msg.plan_id.assign("OFCFNOZXNMUBYMUXZRZQMFSESGYMONJTJYDCPUWZGAMWQGVBYPDDCUNNRPZNDSJTYDXJOXODBIHWVVVAHVOLGAKQCQLCSGGTQDIVCUSHQSITKEAZGMMRTTYBVFFCWHIIQHWSPTUAFOLWNWLORQIZXZVGPAMUVFELJNENUATVFFSGPKKEWSREKJQHKTDAKZBBBLNTBPPDIUHXJRXXRFZCRQCIEALHWJBPOEARRWYHXYGYDKKBXL");
    msg.description.assign("MRLGJITHLOTAUAETDVNLZHDXRVJQRWGQZIANSKVFIFPZCBDNCWGFAUMJCEFJQSIRBBTNTEGLVTZJXLLLFHYPVXTAYSHLKKMNZQDCXEDQMBIPBRZXDP");
    msg.leader_speed = 0.885082657853341;
    msg.leader_bank_lim = 0.1764329423529858;
    msg.pos_sim_err_lim = 0.3857471897391922;
    msg.pos_sim_err_wrn = 0.30296796827127304;
    msg.pos_sim_err_timeout = 60028U;
    msg.converg_max = 0.2464269375428475;
    msg.converg_timeout = 41650U;
    msg.comms_timeout = 28554U;
    msg.turb_lim = 0.37310771682387467;
    msg.custom.assign("DDVGVJNWMZZDOOMHAKNGIOUQLVGOSRWNWYKAKVKBDJDXIXCBMBPT");

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
    msg.setTimeStamp(0.2878019013776335);
    msg.setSource(55191U);
    msg.setSourceEntity(166U);
    msg.setDestination(19659U);
    msg.setDestinationEntity(26U);
    msg.group_name.assign("XCASVUXWDMIEBOABNNCGQQEPQMXIYWEGLOLXSUKTJBACHEQDKS");
    msg.formation_name.assign("KVTITJGLIPWDNJBMULUJMWNKMTPWJKSLBZJZGESLXPTPHFARQJMGGWDASYCDHXA");
    msg.plan_id.assign("CHUQHBYGNXWGJBEUPBZOHMPWNRETMEQPLQDYLYTCSADQAJGNLGAFFDIBIFVQBCANBJNMLKUZCZSHVJFKAFSVRBAXOZJPVALSVQYMJUGOSXILOSQCR");
    msg.description.assign("TASCIKWGAGVHCDRXTDMHYEWROPYQULVBBTELXGKRBZAJONTQERFEOPHMNUFGHKLLYNSMSAPNHIKKUWQLBICVRAQMUDCDNWAFNBWGXAJJGIKUPEZYJHTCESNYBJZURFNJUZDMTQZYDZXPSIZEYZRTIQKFQEDVUOQWSRWDQJCFCBKVOPEATFSYMZPCZFOBRNXOIYQVGLVVIXNMIPOJHMGOLA");
    msg.leader_speed = 0.5348427237694742;
    msg.leader_bank_lim = 0.2839847418738167;
    msg.pos_sim_err_lim = 0.7986214348257487;
    msg.pos_sim_err_wrn = 0.4398260442127738;
    msg.pos_sim_err_timeout = 63070U;
    msg.converg_max = 0.1571539736776445;
    msg.converg_timeout = 11493U;
    msg.comms_timeout = 55061U;
    msg.turb_lim = 0.36271988952201084;
    msg.custom.assign("EINJSWFFMXLAGFEIMBIZVJLHDHLEOYRPSCZVGCNIGFHVWMLKSJQTGUXIZHNCUPQHINGZFAVBRHPDHOLMABOKMZKNEXTHLRBYNVEEPDTWMZMDOUIJBXYJBQFFUCPZSYHBPZSIIAVCTDDQNHKWFYSNRJTYDVKT");

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
    msg.setTimeStamp(0.8396193868854875);
    msg.setSource(10832U);
    msg.setSourceEntity(201U);
    msg.setDestination(46430U);
    msg.setDestinationEntity(166U);
    msg.group_name.assign("BEAULCZJZFUOEQSVCSNLJHVSHTTBJOLKXQFSOROJLQMGZACNDWDZHOXATHPKXPZKGAKBAUSARJIMDNWGMSHWHQOCLJXBKKGFISVKHMGTHFRVYWVLUBXGMZKNRGWEJYDSWDMKOODQQFYZFPORIIQOEJFSSVMBNCZLZANEUCFABUPDPXWRUEPIUNYRGMEEXCIVBYERFCJXINZIBRQJVPXYXLDPYCLNHTL");
    msg.formation_name.assign("WESBPPMGLBOEVQJSBPVIAPLMJNBDLXHWGWTYVUUYQEHCXHHZCXPREEOINMRYZHAZZZNMWALUKYUHCYRRGTFQYECKSVDFCDRFQGOFXNZYSOKIISSEABTXJSXGIGNEKBTLDUKJTHKVSTTMMATCWSROPSBUFOQMIHNEGCANOGKDUCIMNZJAXVQMHPDUJOWZYFBYAADRQPJVNQHWROWNJGZLFQBA");
    msg.plan_id.assign("QKEMGVAEDQJDOFIMLSWAIRJHPIOCIUEHNGCYYJJQOLNTXDAIGOLKVNZDIIWINHLYBNSYODRBCRXOPGGTEFRTVXBVPQTOXBBKHUUSNDDSULYPKWGCTXDJYTFHXFROFSZVYHVVZFFAMTZREJYPEJGMZ");
    msg.description.assign("OIIXBCYACKSIIJQCVPLGTAHVEGZRVKZSCJLLICGIZOGWBWFEDHPUJYJUPHYRXFHCGXZWIMLNHAQEVBMXSMAMOJUZGIHOMOSLRRZHUKBSLEAXAEPNXKNWPUYJNROUQNFQUTFFZDIKDBBSLLJADKJB");
    msg.leader_speed = 0.6658454166933542;
    msg.leader_bank_lim = 0.20033616436675872;
    msg.pos_sim_err_lim = 0.7708661100464703;
    msg.pos_sim_err_wrn = 0.8918547514042592;
    msg.pos_sim_err_timeout = 29180U;
    msg.converg_max = 0.12358848232679509;
    msg.converg_timeout = 8921U;
    msg.comms_timeout = 24342U;
    msg.turb_lim = 0.3097096850112221;
    msg.custom.assign("AHLULKQNEXQPCKBJSUDJLSBQDHNDAUCRAHVAVRXUKZHGBQPXLMNRYMGOCNUTWWMIMRWIBAPHFXIMQRUPTWOOZJTCKYWHFMLALCBYSWDEASBRGH");

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
    msg.setTimeStamp(0.45469400126965553);
    msg.setSource(34999U);
    msg.setSourceEntity(41U);
    msg.setDestination(15547U);
    msg.setDestinationEntity(2U);
    msg.control_src = 51248U;
    msg.control_ent = 40U;
    msg.timeout = 0.8850059113326494;
    msg.loiter_radius = 0.5318414334320766;
    msg.altitude_interval = 0.7776100169974902;

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
    msg.setTimeStamp(0.4451205471310852);
    msg.setSource(46714U);
    msg.setSourceEntity(36U);
    msg.setDestination(9913U);
    msg.setDestinationEntity(200U);
    msg.control_src = 22906U;
    msg.control_ent = 37U;
    msg.timeout = 0.655325694255554;
    msg.loiter_radius = 0.7433552482481073;
    msg.altitude_interval = 0.4960356809038814;

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
    msg.setTimeStamp(0.7917325557372169);
    msg.setSource(57417U);
    msg.setSourceEntity(91U);
    msg.setDestination(5338U);
    msg.setDestinationEntity(153U);
    msg.control_src = 36072U;
    msg.control_ent = 150U;
    msg.timeout = 0.6020214543839473;
    msg.loiter_radius = 0.2151598380358697;
    msg.altitude_interval = 0.801229675073247;

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
    msg.setTimeStamp(0.8323598824160845);
    msg.setSource(64029U);
    msg.setSourceEntity(84U);
    msg.setDestination(48379U);
    msg.setDestinationEntity(47U);
    msg.flags = 192U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7496751048274255;
    tmp_msg_0.speed_units = 142U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5154757582459025;
    tmp_msg_1.z_units = 71U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8179003291866636;
    msg.lon = 0.30632391610377796;
    msg.radius = 0.5978222089574063;

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
    msg.setTimeStamp(0.05876628497734715);
    msg.setSource(34276U);
    msg.setSourceEntity(204U);
    msg.setDestination(35455U);
    msg.setDestinationEntity(212U);
    msg.flags = 55U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4300955085328574;
    tmp_msg_0.speed_units = 127U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3224011459178221;
    tmp_msg_1.z_units = 176U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.09034324028176688;
    msg.lon = 0.8038288934132232;
    msg.radius = 0.5595050409824209;

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
    msg.setTimeStamp(0.17209501004838068);
    msg.setSource(178U);
    msg.setSourceEntity(131U);
    msg.setDestination(27304U);
    msg.setDestinationEntity(154U);
    msg.flags = 58U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2973899544236398;
    tmp_msg_0.speed_units = 158U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4525511833001341;
    tmp_msg_1.z_units = 122U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6151881955861112;
    msg.lon = 0.013106719534845324;
    msg.radius = 0.576863779679475;

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
    msg.setTimeStamp(0.061327726673620186);
    msg.setSource(6115U);
    msg.setSourceEntity(202U);
    msg.setDestination(13011U);
    msg.setDestinationEntity(113U);
    msg.control_src = 2979U;
    msg.control_ent = 77U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 60U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4849799296559927;
    tmp_tmp_msg_0_0.speed_units = 181U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6412109186066688;
    tmp_tmp_msg_0_1.z_units = 87U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9386543151557853;
    tmp_msg_0.lon = 0.8095870381299776;
    tmp_msg_0.radius = 0.7423207307018775;
    msg.reference.set(tmp_msg_0);
    msg.state = 81U;
    msg.proximity = 82U;

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
    msg.setTimeStamp(0.13834053065276442);
    msg.setSource(14106U);
    msg.setSourceEntity(166U);
    msg.setDestination(38786U);
    msg.setDestinationEntity(159U);
    msg.control_src = 41216U;
    msg.control_ent = 177U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 54U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8942979239585283;
    tmp_tmp_msg_0_0.speed_units = 241U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.963966002454115;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2798625064862157;
    tmp_msg_0.lon = 0.48726983003123236;
    tmp_msg_0.radius = 0.10304744074567485;
    msg.reference.set(tmp_msg_0);
    msg.state = 25U;
    msg.proximity = 217U;

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
    msg.setTimeStamp(0.17616699386086165);
    msg.setSource(38257U);
    msg.setSourceEntity(149U);
    msg.setDestination(46006U);
    msg.setDestinationEntity(69U);
    msg.control_src = 34119U;
    msg.control_ent = 160U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 201U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5741995735471902;
    tmp_tmp_msg_0_0.speed_units = 32U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3358074517606455;
    tmp_tmp_msg_0_1.z_units = 14U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10912851558066816;
    tmp_msg_0.lon = 0.9456039627982626;
    tmp_msg_0.radius = 0.6700950407470053;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 15U;

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
    msg.setTimeStamp(0.8731268718831082);
    msg.setSource(43874U);
    msg.setSourceEntity(226U);
    msg.setDestination(63100U);
    msg.setDestinationEntity(225U);
    msg.ax_cmd = 0.1505972984548284;
    msg.ay_cmd = 0.22009430002669783;
    msg.az_cmd = 0.20980656424345312;
    msg.ax_des = 0.5500163147078508;
    msg.ay_des = 0.8169305301642994;
    msg.az_des = 0.5389434249875285;
    msg.virt_err_x = 0.2689676591655136;
    msg.virt_err_y = 0.5790837111205807;
    msg.virt_err_z = 0.2085594214102725;
    msg.surf_fdbk_x = 0.8671648806596058;
    msg.surf_fdbk_y = 0.3281321943567488;
    msg.surf_fdbk_z = 0.4013381094128762;
    msg.surf_unkn_x = 0.07802197373720787;
    msg.surf_unkn_y = 0.38060733266130664;
    msg.surf_unkn_z = 0.9952814841996519;
    msg.ss_x = 0.7154029394507642;
    msg.ss_y = 0.018781117903134192;
    msg.ss_z = 0.5759692002672521;

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
    msg.setTimeStamp(0.19087552905677974);
    msg.setSource(45400U);
    msg.setSourceEntity(18U);
    msg.setDestination(14680U);
    msg.setDestinationEntity(7U);
    msg.ax_cmd = 0.23006118479530946;
    msg.ay_cmd = 0.5160832959385837;
    msg.az_cmd = 0.48146075375116737;
    msg.ax_des = 0.7376985692979083;
    msg.ay_des = 0.5806675942712626;
    msg.az_des = 0.049464369909496764;
    msg.virt_err_x = 0.2712115491147128;
    msg.virt_err_y = 0.12222324579991795;
    msg.virt_err_z = 0.11495463282516327;
    msg.surf_fdbk_x = 0.46530835813967364;
    msg.surf_fdbk_y = 0.4404791047068646;
    msg.surf_fdbk_z = 0.8394018477884471;
    msg.surf_unkn_x = 0.8529769383879487;
    msg.surf_unkn_y = 0.18847846028048576;
    msg.surf_unkn_z = 0.9364186872348623;
    msg.ss_x = 0.5619993559728315;
    msg.ss_y = 0.3767911531235897;
    msg.ss_z = 0.6923994081262299;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NYNUGXQUQHEDPEASA");
    tmp_msg_0.dist = 0.37405979788794985;
    tmp_msg_0.err = 0.24046351795850052;
    tmp_msg_0.ctrl_imp = 0.4709192969444169;
    tmp_msg_0.rel_dir_x = 0.49400079569541056;
    tmp_msg_0.rel_dir_y = 0.7989290234004889;
    tmp_msg_0.rel_dir_z = 0.20966760183739974;
    tmp_msg_0.err_x = 0.04404487727660944;
    tmp_msg_0.err_y = 0.6870770868584802;
    tmp_msg_0.err_z = 0.6121258137383971;
    tmp_msg_0.rf_err_x = 0.907344186642431;
    tmp_msg_0.rf_err_y = 0.07843887458215548;
    tmp_msg_0.rf_err_z = 0.8383485457275321;
    tmp_msg_0.rf_err_vx = 0.9757552382617429;
    tmp_msg_0.rf_err_vy = 0.8463271397733944;
    tmp_msg_0.rf_err_vz = 0.268339311093297;
    tmp_msg_0.ss_x = 0.8922195968177713;
    tmp_msg_0.ss_y = 0.8337628297199691;
    tmp_msg_0.ss_z = 0.11029067712262686;
    tmp_msg_0.virt_err_x = 0.007842900025994748;
    tmp_msg_0.virt_err_y = 0.409118823083637;
    tmp_msg_0.virt_err_z = 0.2965597599152694;
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
    msg.setTimeStamp(0.8290196628205134);
    msg.setSource(28863U);
    msg.setSourceEntity(53U);
    msg.setDestination(21635U);
    msg.setDestinationEntity(62U);
    msg.ax_cmd = 0.03522399954288624;
    msg.ay_cmd = 0.8591526313260509;
    msg.az_cmd = 0.2973650914242343;
    msg.ax_des = 0.8672274900355808;
    msg.ay_des = 0.17669584843139963;
    msg.az_des = 0.8062385150868361;
    msg.virt_err_x = 0.9056894338897872;
    msg.virt_err_y = 0.806032631082504;
    msg.virt_err_z = 0.7335526239586521;
    msg.surf_fdbk_x = 0.42462929668681504;
    msg.surf_fdbk_y = 0.8100734368067671;
    msg.surf_fdbk_z = 0.4053810760801171;
    msg.surf_unkn_x = 0.4886903133508883;
    msg.surf_unkn_y = 0.08478112603608912;
    msg.surf_unkn_z = 0.7534923230605574;
    msg.ss_x = 0.8280612656579464;
    msg.ss_y = 0.10198587929770153;
    msg.ss_z = 0.48405112102264836;

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
    msg.setTimeStamp(0.708873913231059);
    msg.setSource(15734U);
    msg.setSourceEntity(119U);
    msg.setDestination(25836U);
    msg.setDestinationEntity(235U);
    msg.s_id.assign("QXQJTDISJIEUHSOOZMTWVFAWJSIAMVSIKRTYNVBCMGCYPHZAZXHTOQIECXWOOCLPGZYXZSVXEUIODTGWAHFAJXNGFELCWKLKYEYMPCIOPYZGAAURBCQDFDRRWSMMXELTBYLMFZXWRHDLFESXJIGXLBIJD");
    msg.dist = 0.4207463577032212;
    msg.err = 0.9471407462267473;
    msg.ctrl_imp = 0.4393411737177719;
    msg.rel_dir_x = 0.48940348426179847;
    msg.rel_dir_y = 0.39998178490821357;
    msg.rel_dir_z = 0.3569165730345122;
    msg.err_x = 0.305542282671728;
    msg.err_y = 0.05098231290193256;
    msg.err_z = 0.7668728360315615;
    msg.rf_err_x = 0.22543724982270352;
    msg.rf_err_y = 0.3926449458398795;
    msg.rf_err_z = 0.1348268831827626;
    msg.rf_err_vx = 0.16322772422130283;
    msg.rf_err_vy = 0.4973250255017241;
    msg.rf_err_vz = 0.7971320560909292;
    msg.ss_x = 0.8650243947662846;
    msg.ss_y = 0.28236556459935247;
    msg.ss_z = 0.4760887890100942;
    msg.virt_err_x = 0.497422340110655;
    msg.virt_err_y = 0.9401285875176949;
    msg.virt_err_z = 0.6096941552705597;

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
    msg.setTimeStamp(0.0632649426115548);
    msg.setSource(30293U);
    msg.setSourceEntity(110U);
    msg.setDestination(13565U);
    msg.setDestinationEntity(213U);
    msg.s_id.assign("DNVGRCXNMHIQFPTIIVYAXMZQMQWFIVJFONSNIHINCJBUEZEPQTZORMZODHQHVUSXPQKCPVTYKUEDOUAGGCBCFPKGBHNSTKTWAHRTUAUWMWUOLWVDKAMJJRQNJEFCQAGJWJOSLYCGJXSTYRIYDPAQMBULWSFBISSCYBLOORECFVZWZGPTWROXTGLKRNXBHXYYMSXLIEN");
    msg.dist = 0.8320779610092017;
    msg.err = 0.5634718366505662;
    msg.ctrl_imp = 0.7873767693042174;
    msg.rel_dir_x = 0.901493359746996;
    msg.rel_dir_y = 0.6839985141478973;
    msg.rel_dir_z = 0.8070826153138866;
    msg.err_x = 0.66669874572989;
    msg.err_y = 0.38566766821646514;
    msg.err_z = 0.5123059516835204;
    msg.rf_err_x = 0.422570685103419;
    msg.rf_err_y = 0.23124303552000747;
    msg.rf_err_z = 0.742154373815254;
    msg.rf_err_vx = 0.8092071783409261;
    msg.rf_err_vy = 0.7103535199100868;
    msg.rf_err_vz = 0.8448986360096348;
    msg.ss_x = 0.059131253190325195;
    msg.ss_y = 0.6262416931500706;
    msg.ss_z = 0.6367300378980018;
    msg.virt_err_x = 0.5686134863704657;
    msg.virt_err_y = 0.6502082846513176;
    msg.virt_err_z = 0.6759644803570156;

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
    msg.setTimeStamp(0.5939441728171987);
    msg.setSource(36336U);
    msg.setSourceEntity(143U);
    msg.setDestination(33349U);
    msg.setDestinationEntity(95U);
    msg.s_id.assign("IGZGCJATEAUFTCFJXNXRPPKGFNDXJSNFANBNRSTUXQWNFDQITUJVQWDEGWSDUXVJAIOZYNOAKVFUSZIYTXRKIGCOBIUMNLUMMGKHCWFRLPRHBIJKIEBZGUHRHVQKDDA");
    msg.dist = 0.43736760194115754;
    msg.err = 0.5917875832307342;
    msg.ctrl_imp = 0.9956046805355597;
    msg.rel_dir_x = 0.42036446442329534;
    msg.rel_dir_y = 0.1742942733634315;
    msg.rel_dir_z = 0.7668827647948017;
    msg.err_x = 0.6365444880541574;
    msg.err_y = 0.302078551149184;
    msg.err_z = 0.02566980915610184;
    msg.rf_err_x = 0.8894896705434612;
    msg.rf_err_y = 0.40732317599664836;
    msg.rf_err_z = 0.49496655066558626;
    msg.rf_err_vx = 0.619773419985199;
    msg.rf_err_vy = 0.34152912961785076;
    msg.rf_err_vz = 0.16620045967393238;
    msg.ss_x = 0.24514431403332793;
    msg.ss_y = 0.23475531456786713;
    msg.ss_z = 0.22304152846231595;
    msg.virt_err_x = 0.6560340126675681;
    msg.virt_err_y = 0.7978090842941582;
    msg.virt_err_z = 0.8389860904027558;

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
    msg.setTimeStamp(0.416892397574979);
    msg.setSource(53696U);
    msg.setSourceEntity(59U);
    msg.setDestination(51501U);
    msg.setDestinationEntity(30U);
    msg.timeout = 2342U;
    msg.rpm = 0.48114834570016407;
    msg.direction = 206U;
    msg.custom.assign("ZLFMSCGIKKPNJMIHPGDWVXZKQNCZLXOVLADESTJQYACOOWFAHXOEFWBTFFJWRQBTBBDBQDIVCGRJNZDSVQEZOLZLITRENGFUPDYYVAKOYUBXISGEOSLHKYHULGDOIOUNLUYMPBIPNHZDGFW");

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
    msg.setTimeStamp(0.5764976596241862);
    msg.setSource(25871U);
    msg.setSourceEntity(38U);
    msg.setDestination(46707U);
    msg.setDestinationEntity(124U);
    msg.timeout = 37398U;
    msg.rpm = 0.9278604629956192;
    msg.direction = 102U;
    msg.custom.assign("NTOHIOUVQNMMZQDPMJNENIJYJTCDGGWQGLAVGIRHMGSDWNHICOFOBVKSWJQUSYLFGDGSYTUERMXHCREOKPZYKUWTQRRJEOKNMSRBLREBXTYFFJLVEHFPVOMAHCPBDZNBKLDYVPVKRBPGVPKIFJTAEREBOKYVXYXISHJQAWBWSDULIZDUIZWLCHKCLEZMFLZANIXSZJYOAFHFZTYACXDBEPUUUWBZNDSJRTAWAXFCXWQCM");

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
    msg.setTimeStamp(0.5283855605417039);
    msg.setSource(22445U);
    msg.setSourceEntity(34U);
    msg.setDestination(46015U);
    msg.setDestinationEntity(224U);
    msg.timeout = 27289U;
    msg.rpm = 0.3601603747260258;
    msg.direction = 17U;
    msg.custom.assign("BPEOURRNXJORVDGNAHVGFSEQHPYMMPWKACVCGDKQICZWYMRBXWDTIGPUEZOMYHTIWGAVOHTTKLLHYSDLZJANNZFMUXXDXXDRDLEAAJTTOUUSQKSMBTGYTPBGCNBITEKNKVDEBJJWQBFVIOJWZPLADQSESKAFUFCYIROFAPFLTUYMMZLQBJNIWZRASNOPN");

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
    msg.setTimeStamp(0.5101433851373371);
    msg.setSource(51705U);
    msg.setSourceEntity(49U);
    msg.setDestination(3451U);
    msg.setDestinationEntity(61U);
    msg.op_mode = 196U;
    msg.error_count = 197U;
    msg.error_ents.assign("YHOCJOUALIKKXTNBMKUMFEHDCJIICTGSRRGEQPWYOLOVTWTGFERZKDYCKIEAQJJMUGAQHUXXZBOOSSCWWLLRYVCNLISRFDLEUZGPQWFFZSNF");
    msg.maneuver_type = 52310U;
    msg.maneuver_stime = 0.5209162625143926;
    msg.maneuver_eta = 48499U;
    msg.control_loops = 3396316956U;
    msg.flags = 214U;
    msg.last_error.assign("DMRJULJLFCTHVVIUSCAKLSKUIHXAKJYDWUOIEOVULWQTYQDGDYVDSCAFYSHZPMIQXYRYGXFRDQIOGKPOLIHZXWAKAMYYXNZAHYWYZIMMSFCWFUPOCAQWFQBAXXBNENHERXDLCVJVRLQEGEZJWNBBPSJGEUJBAXLORKNJEOIMWWEBSSRCMJPTOBPEZGXDKKTFB");
    msg.last_error_time = 0.9268866655516589;

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
    msg.setTimeStamp(0.6806852761146946);
    msg.setSource(29115U);
    msg.setSourceEntity(161U);
    msg.setDestination(49664U);
    msg.setDestinationEntity(106U);
    msg.op_mode = 197U;
    msg.error_count = 240U;
    msg.error_ents.assign("XFZLAKOOBLTTRHULWJNSPKVAZVNXEZMFBVPINQLZCYFGNIYERWOHIZYKEHXFNFLQIXPOXWOVQDACOLFSHSIHRWJNJKXWZQSBESKMITUCGTYCMVZBQBBISTGQRWDRDTGURUU");
    msg.maneuver_type = 46793U;
    msg.maneuver_stime = 0.7798440928862448;
    msg.maneuver_eta = 37454U;
    msg.control_loops = 2248120069U;
    msg.flags = 163U;
    msg.last_error.assign("OUOQOVWZZYQQBLCBVINJQ");
    msg.last_error_time = 0.755193849694329;

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
    msg.setTimeStamp(0.2571409523937137);
    msg.setSource(38284U);
    msg.setSourceEntity(24U);
    msg.setDestination(49851U);
    msg.setDestinationEntity(95U);
    msg.op_mode = 78U;
    msg.error_count = 123U;
    msg.error_ents.assign("QAEYNXPQWNXJCWKLPDGMDQJKUHBKGBNGBVGXVZQSWFMCKLVDRVGEIMCTGXHUPJOIFFTFNRRCROREYTTBDAVJYMJTJXMMKLPOLWVMAPKZRKQAAFTFUZVOUYHBFXNSFOAIYKOWBSWNQIOLRSZFEINKXCRVFEEMUWILHOPGZIUDCXLCZNQQOYDNCBLGYZDUXLABJZIQIXSGRJHPASWZUYSYQTBLHHADJSPHOUSYRPACHUHV");
    msg.maneuver_type = 61275U;
    msg.maneuver_stime = 0.6085344587872404;
    msg.maneuver_eta = 61377U;
    msg.control_loops = 2278620623U;
    msg.flags = 119U;
    msg.last_error.assign("DPWLKORLNDZKGXKWRGGJPBQBPNJMWFNVBGZSGJETYISKMRFHUKHCAXSAPSCJMXFVHREARIQHKCDVCKZEPELYXOYDVMGSFWCZLIOTPMLCGTQIWICXXHVGHPBOKIVMISBUBQJUXTTFQSTXDIPQASNLWDRJGZIXYFDCALSPFHWLYOQKWANYOHWDKNAZFIEEONJJYVTORCFNRNOHDMULZBRXQUANUTVLZTGJAB");
    msg.last_error_time = 0.13655906155753816;

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
    msg.setTimeStamp(0.6072791228974377);
    msg.setSource(45950U);
    msg.setSourceEntity(28U);
    msg.setDestination(41826U);
    msg.setDestinationEntity(102U);
    msg.type = 79U;
    msg.request_id = 52918U;
    msg.command = 82U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 51591U;
    tmp_msg_0.lat = 0.5724710151131346;
    tmp_msg_0.lon = 0.45485223296670774;
    tmp_msg_0.z = 0.8647759864400467;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.duration = 23951U;
    tmp_msg_0.speed = 0.29555571903051314;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.type = 140U;
    tmp_msg_0.radius = 0.27745335492320466;
    tmp_msg_0.length = 0.6335928033340651;
    tmp_msg_0.bearing = 0.14129898562574206;
    tmp_msg_0.direction = 103U;
    tmp_msg_0.custom.assign("DGBHDIPTIXPRWGUDIWHOHVOPRNLGNMJWUNMGSNGSOPKWLBIOEDKHRKZRZUKOTGFJXCXKDDCLAZSCRWTZQBJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7665U;
    msg.info.assign("UFWQJRGKQNXSCBURARANOKCUYAYHHWJXGYGZMENTBFPFMQPQDSQDMDIUXGWLGDCTXLUEHSAGJYYITARLVDFMIEINSPZBKYMEHKWWETAXVVIUUZZMTFZHQEWAWIEKVOIUDROZNDGNPEFJSPOSLOIXEMJGNYAQCCIPJACEOFPOJWXWJXBUWJFPHPVRXZOMLKPLBLYGKQCBQQCT");

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
    msg.setTimeStamp(0.8394189029382227);
    msg.setSource(11869U);
    msg.setSourceEntity(114U);
    msg.setDestination(24305U);
    msg.setDestinationEntity(191U);
    msg.type = 230U;
    msg.request_id = 1930U;
    msg.command = 152U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 56914U;
    tmp_msg_0.name.assign("YOEIODGXCBGLRSUUEFWTXNQKTQNOHCQTCPXHFQAHQMWJPUGTIOHGIKMUBIDANMSPCYBERWBRQHWSUPJWSDFADDVRRCPZNWKFZATWVQADULKRJMJBDVOMSTMUGZVLXIJUWTXXEOBYVEIZYSMYNVFVDRZQPGJZZXGLOMSFZBWYDOGPVGYHUCEILKRNKUPZTMYBSFODBYORFVFIATLAJKJLSNMELBTNCFCACERW");
    tmp_msg_0.custom.assign("JHBOLHMWBLMRREHUUKWKASEPNNQOQCLK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62776U;
    msg.info.assign("NMMKEFLXSRUFRTHQHPVIXEOXO");

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
    msg.setTimeStamp(0.7939874587370533);
    msg.setSource(59413U);
    msg.setSourceEntity(162U);
    msg.setDestination(52272U);
    msg.setDestinationEntity(145U);
    msg.type = 214U;
    msg.request_id = 20566U;
    msg.command = 252U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 59855U;
    tmp_msg_0.custom.assign("GNWUEUYISRNOGMMTHKJRDBGYZCKMXCBYWDTUEEGXWSZJLUBAKNRLHUHMGZHNKTZROYOLGWYMMDPENMFFVRFCTCCXTULQIBNRURWDLXBQYEVHJREFICDFIQVIUCQOMHCXCQGPPTKOLKUBJSXQBRAPQIJHVWLNGEKJOZAMSSFJEWLAZZVYRGBXVBZSZIAXFATIWCMVPDAHNSNATAWJOKUVFKSTFSPPWBQSYVOLDEIQYYTZPAPXHIDPQNGJEF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2926U;
    msg.info.assign("DWZOTYLOJNDIHEUUJYPGAJVQCQQHEPWGRFSCWRPFZTHCGESZDKDIGOMMMLQKYYRLSWJGMRSXWFCPKQL");

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
    msg.setTimeStamp(0.16267605005027885);
    msg.setSource(21268U);
    msg.setSourceEntity(233U);
    msg.setDestination(5290U);
    msg.setDestinationEntity(150U);
    msg.command = 24U;
    msg.entities.assign("WDEQZBBWGOAGMBNWCWYJIZGRWRXHLOLFLSQSSHPPKNKAOADHHUPJCOUXCSEYRZUNQQIOQJXKVTYSQCUPEOMEDQ");

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
    msg.setTimeStamp(0.6520480679388423);
    msg.setSource(14647U);
    msg.setSourceEntity(128U);
    msg.setDestination(37322U);
    msg.setDestinationEntity(13U);
    msg.command = 116U;
    msg.entities.assign("IFZIXCLEQZGIBEUMUWYPJHTNDQXCFYBEJRUQNPDCVBZZCYNDKXNUKAGKMVMOYGQWYGULKORUN");

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
    msg.setTimeStamp(0.4720076933074375);
    msg.setSource(1056U);
    msg.setSourceEntity(40U);
    msg.setDestination(23139U);
    msg.setDestinationEntity(216U);
    msg.command = 161U;
    msg.entities.assign("MIGGARIQZHTRJCBJPZETHO");

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
    msg.setTimeStamp(0.6242770889894548);
    msg.setSource(5575U);
    msg.setSourceEntity(14U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(227U);
    msg.mcount = 194U;
    msg.mnames.assign("UFKHMJTUAYYBBRZRLGFYGWNCUQUIVIBYTASOVTUXREVGFKFQGHVOSAMAKDCZRRAEMOURSJKGCOJFCWYTEOXBHPBLPWRCJJKNZCPHNIJUABDQGQWSONXLXTWDTJBZEPPCATMIYZVYLISQLEDZEMFMADROHWHEBETIKAIHGNOXNVFXPKUQUDKFYHPXZBUWAKSZQVEPQROTXICSFYQZOJIVTWBKNDSW");
    msg.ecount = 194U;
    msg.enames.assign("WWDVYVYYHKHRWALLJIWWIMEPPSPKTNCBLGEZSDJGRAVQJEQBAOIFATHNMROVGOLTDWZEUQRKTSQAF");
    msg.ccount = 176U;
    msg.cnames.assign("RYRWMYQMAUMNEBMJOSYCRMLNTPDRBDWNXLSXDGYDZRHDDWBZBYAWKFWAHFTYEVMTPJCL");
    msg.last_error.assign("FCDRHHGXLXUDBDWBRCEEAUWSIWUDNQUSCPTJM");
    msg.last_error_time = 0.43266334231864745;

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
    msg.setTimeStamp(0.8850204235336377);
    msg.setSource(53401U);
    msg.setSourceEntity(2U);
    msg.setDestination(22371U);
    msg.setDestinationEntity(166U);
    msg.mcount = 217U;
    msg.mnames.assign("CVHCMDWTRXJSAOKRBBXIQGZINEPWSUGMHFIGQBKNVRIUFAVPHXWGEDAERCYQLSBQECWOTVTHKWFDBWODRQMKSPNJJASNQINMXYKGMTEUPEUTRHBZCIFKTDLJJZYABLVGIYVNHVCUXLHEORYAZMQAYFIKSPSOQLVIVOBHCRUUNJJWTXLUGQHTNFPOONTGEQYSMSFBIWFYJCTLXJGRKXEMCZVUNOMFCRAYWXKGLLPZXDMZPPPDEDBSL");
    msg.ecount = 130U;
    msg.enames.assign("DGLLWDHPEI");
    msg.ccount = 163U;
    msg.cnames.assign("WEAUNJYJPCIKJBTCYZKKCMHSILSHHBUPXRBSZX");
    msg.last_error.assign("KZPZOFFRXMAVQCOWXHZUTOURAMSDPGINDMCHNYANZRLTLJFHZIPBGSAFUIASNBCVFCIQSKPLGJHYRBYHIJUPTLJMYRKSMXBQSXTCKVBCVMJMBHZHXDWHKCUOWYJUVTDIURAENKYESDTGAFCOIIOJDMRSQADGFZVPEHLMXOLBEKWRVNQXYJEUEFILETFASTQTBPPOEA");
    msg.last_error_time = 0.6220549975890469;

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
    msg.setTimeStamp(0.46924524824033464);
    msg.setSource(40583U);
    msg.setSourceEntity(222U);
    msg.setDestination(62439U);
    msg.setDestinationEntity(80U);
    msg.mcount = 131U;
    msg.mnames.assign("DDGMLFBPLTKEEUSRGQXPGJMHBSSTGBMGQSJZTRMUDFXLNVVOTKFXEWBTVNRVRSEARSNPFZPURHIVPUOCCROEIUJCTCLWJSEYBZNQCQQAPKBWXYRUZFZAFVIYGLOFHNZOWMUYCMHRMMISSVJLANGPKFLWBZYNXTILDDYKYHSWPQPYFDAAHKJGXBZLETZHICNGVIQWAKQKJOHHIMAJEGXXBCPYWZUAQTNEDBNK");
    msg.ecount = 135U;
    msg.enames.assign("ACRTXTURGVSODOLNJIEWQPZJLGDJFLMICYNNVSBPEIZXCYNFMTSEIUMQPQXPJBMKGWKRJRDVVMKFDDEUFFGQJNUZMHATRSVJCYAGTOPKPUTEHUSDWWDBAACXOTNWVCJXPQZFZPWNNBQGDIBRAKZZBCHIRIXKXRXJZHCYGYBOKGKVBAFNCOYSHPZEWOFTLEMDEWDLEYQXIMBYCWTRHSSIMXLRU");
    msg.ccount = 142U;
    msg.cnames.assign("SLCQWXXKAJYKXLSTMPDSEHBZCRHEDDMBKXBGBGSSEVTBTCANDQMEDNUUTGKQBAPVNYJLFCPIHQZSBNQKIDOFBUYHNVATYJRVNZXEJROIJLQFZBIECUCGEYIFYRYOTWRAAYULYLIHUU");
    msg.last_error.assign("TZXUPTFBNVKRVHMMTJHPEVIALQALDNWHNTYZNROISBXCOYBRSBPSEFECDFZBGIAAHSUSUKLATJCKEWIWCLZQQPDVUYXRAPELDOZBKMUSKQNKTWZJPMJ");
    msg.last_error_time = 0.5005353637682409;

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
    msg.setTimeStamp(0.16014689992030595);
    msg.setSource(48875U);
    msg.setSourceEntity(171U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(214U);
    msg.mask = 62U;
    msg.max_depth = 0.9257077617347886;
    msg.min_altitude = 0.9505857630335297;
    msg.max_altitude = 0.49947767669079346;
    msg.min_speed = 0.8190150888839213;
    msg.max_speed = 0.08504537587487448;
    msg.max_vrate = 0.816536505703013;
    msg.lat = 0.46233591911483296;
    msg.lon = 0.17999562292022409;
    msg.orientation = 0.04182806517875537;
    msg.width = 0.11028663765468028;
    msg.length = 0.9152673075002071;

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
    msg.setTimeStamp(0.6295918182138596);
    msg.setSource(62132U);
    msg.setSourceEntity(112U);
    msg.setDestination(20232U);
    msg.setDestinationEntity(130U);
    msg.mask = 248U;
    msg.max_depth = 0.05194149578890217;
    msg.min_altitude = 0.4965558263958746;
    msg.max_altitude = 0.9793618131013734;
    msg.min_speed = 0.19466197100217264;
    msg.max_speed = 0.7367123796379156;
    msg.max_vrate = 0.14506436723818683;
    msg.lat = 0.14237593483139255;
    msg.lon = 0.49038723242533566;
    msg.orientation = 0.7757503760272615;
    msg.width = 0.4761314895227352;
    msg.length = 0.1501004599323319;

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
    msg.setTimeStamp(0.15173858215799352);
    msg.setSource(65443U);
    msg.setSourceEntity(164U);
    msg.setDestination(8905U);
    msg.setDestinationEntity(23U);
    msg.mask = 185U;
    msg.max_depth = 0.4897114687712609;
    msg.min_altitude = 0.8221658793444144;
    msg.max_altitude = 0.19086856187765155;
    msg.min_speed = 0.3953172353892066;
    msg.max_speed = 0.1841853592708138;
    msg.max_vrate = 0.1282360995288384;
    msg.lat = 0.29453723389832176;
    msg.lon = 0.3218253730115237;
    msg.orientation = 0.9048726535010356;
    msg.width = 0.7585252488681228;
    msg.length = 0.5416115515361748;

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
    msg.setTimeStamp(0.8874308482098818);
    msg.setSource(56433U);
    msg.setSourceEntity(74U);
    msg.setDestination(45314U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.894285622456654);
    msg.setSource(37452U);
    msg.setSourceEntity(117U);
    msg.setDestination(62350U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.6557342063419267);
    msg.setSource(34431U);
    msg.setSourceEntity(21U);
    msg.setDestination(41379U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.732223018304874);
    msg.setSource(19747U);
    msg.setSourceEntity(129U);
    msg.setDestination(33100U);
    msg.setDestinationEntity(58U);
    msg.duration = 51083U;

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
    msg.setTimeStamp(0.8199158150279726);
    msg.setSource(12936U);
    msg.setSourceEntity(42U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(199U);
    msg.duration = 14771U;

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
    msg.setTimeStamp(0.07971333828495386);
    msg.setSource(46086U);
    msg.setSourceEntity(44U);
    msg.setDestination(25029U);
    msg.setDestinationEntity(162U);
    msg.duration = 9430U;

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
    msg.setTimeStamp(0.6705454249641728);
    msg.setSource(35670U);
    msg.setSourceEntity(20U);
    msg.setDestination(32540U);
    msg.setDestinationEntity(253U);
    msg.enable = 234U;
    msg.mask = 1723168975U;
    msg.scope_ref = 2112243917U;

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
    msg.setTimeStamp(0.667734308790871);
    msg.setSource(39004U);
    msg.setSourceEntity(70U);
    msg.setDestination(28288U);
    msg.setDestinationEntity(222U);
    msg.enable = 128U;
    msg.mask = 3460828982U;
    msg.scope_ref = 1884049325U;

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
    msg.setTimeStamp(0.21609474532498163);
    msg.setSource(46476U);
    msg.setSourceEntity(11U);
    msg.setDestination(52551U);
    msg.setDestinationEntity(210U);
    msg.enable = 100U;
    msg.mask = 1472981660U;
    msg.scope_ref = 3931947013U;

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
    msg.setTimeStamp(0.23046828792339524);
    msg.setSource(53888U);
    msg.setSourceEntity(153U);
    msg.setDestination(47572U);
    msg.setDestinationEntity(254U);
    msg.medium = 227U;

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
    msg.setTimeStamp(0.560870783791077);
    msg.setSource(1729U);
    msg.setSourceEntity(147U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(1U);
    msg.medium = 28U;

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
    msg.setTimeStamp(0.570166669536414);
    msg.setSource(46694U);
    msg.setSourceEntity(66U);
    msg.setDestination(44826U);
    msg.setDestinationEntity(241U);
    msg.medium = 231U;

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
    msg.setTimeStamp(0.30651561171244135);
    msg.setSource(42044U);
    msg.setSourceEntity(253U);
    msg.setDestination(62818U);
    msg.setDestinationEntity(39U);
    msg.value = 0.5727681689603704;
    msg.type = 78U;

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
    msg.setTimeStamp(0.9395192911474968);
    msg.setSource(27208U);
    msg.setSourceEntity(181U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(38U);
    msg.value = 0.2579803107422354;
    msg.type = 245U;

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
    msg.setTimeStamp(0.17940517859574046);
    msg.setSource(36119U);
    msg.setSourceEntity(110U);
    msg.setDestination(63388U);
    msg.setDestinationEntity(61U);
    msg.value = 0.49083108268821585;
    msg.type = 190U;

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
    msg.setTimeStamp(0.5684032203717894);
    msg.setSource(15058U);
    msg.setSourceEntity(231U);
    msg.setDestination(4649U);
    msg.setDestinationEntity(108U);
    msg.possimerr = 0.3538362560010453;
    msg.converg = 0.05943900032632676;
    msg.turbulence = 0.2917482392049482;
    msg.possimmon = 26U;
    msg.commmon = 82U;
    msg.convergmon = 129U;

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
    msg.setTimeStamp(0.15208583176161283);
    msg.setSource(52448U);
    msg.setSourceEntity(205U);
    msg.setDestination(44992U);
    msg.setDestinationEntity(108U);
    msg.possimerr = 0.23937873641741614;
    msg.converg = 0.271706942595731;
    msg.turbulence = 0.7478243288170103;
    msg.possimmon = 78U;
    msg.commmon = 0U;
    msg.convergmon = 235U;

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
    msg.setTimeStamp(0.41797890621164246);
    msg.setSource(2547U);
    msg.setSourceEntity(230U);
    msg.setDestination(51952U);
    msg.setDestinationEntity(82U);
    msg.possimerr = 0.7058266819595758;
    msg.converg = 0.6050746063041568;
    msg.turbulence = 0.22634731670691266;
    msg.possimmon = 216U;
    msg.commmon = 69U;
    msg.convergmon = 17U;

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
    msg.setTimeStamp(0.23200580071137955);
    msg.setSource(57780U);
    msg.setSourceEntity(160U);
    msg.setDestination(44596U);
    msg.setDestinationEntity(48U);
    msg.autonomy = 114U;
    msg.mode.assign("DFCQSJRQSZFSVXWYEVYWTIGUQFORCEGWBTNHFKRGLDJPDUJKKCSTZX");

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
    msg.setTimeStamp(0.09614240442627875);
    msg.setSource(20618U);
    msg.setSourceEntity(156U);
    msg.setDestination(32098U);
    msg.setDestinationEntity(187U);
    msg.autonomy = 140U;
    msg.mode.assign("ANHTNNMEGOIAYQZFHCTSFKVYXQMGWKJZPLVCOYFRUESDIHLFCUGDXLYSVUBMANRY");

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
    msg.setTimeStamp(0.9447217461734307);
    msg.setSource(26141U);
    msg.setSourceEntity(12U);
    msg.setDestination(45437U);
    msg.setDestinationEntity(141U);
    msg.autonomy = 164U;
    msg.mode.assign("YXQNQVKXEUZTJYMNVPUPPTFXMUJZKMQJFITAURVMVGZSJDEPIAVWAYAXIQBBYLLAUYEGKEXVSUBZXJREXBMCFNQZHOY");

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
    msg.setTimeStamp(0.844289871424652);
    msg.setSource(60732U);
    msg.setSourceEntity(202U);
    msg.setDestination(12877U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.047982239308803076);
    msg.setSource(3627U);
    msg.setSourceEntity(41U);
    msg.setDestination(63946U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.33012962037358295);
    msg.setSource(44731U);
    msg.setSourceEntity(92U);
    msg.setDestination(16489U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.20136414699023375);
    msg.setSource(47856U);
    msg.setSourceEntity(88U);
    msg.setDestination(58195U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("XOVVNMXNBWHBILBJHDMPLCNJILQZKRX");
    msg.description.assign("MWELHWBVHSCTNAZZLUPNHMKUKLEITKKXDLPDBMIMLVXGDCXKIXQSTVFDSVAVUEWYKHCPAFOIBSTBPJWSQMNCJVSAEYMEATRRRVOFFIIYFBQLYJJPOMYQTVSUANMPLUEJCEZOHZPZROIGXHWDBDSJWKTGHHUUQXBTUXWKTRGUCANNYZYNFNLLJOCWGXXGDQOEYJKDRIG");
    msg.vnamespace.assign("ZYBYQIOKYKFJUBLHRGYKGSFQGCUDNRTNGZWSFSNLITYWNMAVOYTRVBEURJDLNHQXZWLBRXJFUJIKZKPDAXHEDGGKWTMEPVZOPGZEHLLIMDVNAZTGHVCRCW");
    msg.start_man_id.assign("HPETPUKTYJIZWCDUHTUXJOSNLMUJEYGFQJTNQVMZTAOUDDMQIOEZAVOJSTIFBCGPWQPRMBKNGGIXEEOSENWSYNZEJRWWCWNFQZPYCVBTPRMKCBIBYKGPDHLZWXVOOKRKOQCXFASQAZNSIAYNYUDBQMSJVJEBCMSBKVWDV");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("KYKRHKSLGHLXFLJCIACJSPRZDMIMPYIIWDVWYETZRGEVGOQXMCRBHIJCIUMBZPPQQUSQSYZUODXVSWFUEQGEJTRZYGRGGMADEEHVZQHJXTCEUFTSKZAELKFITBDKPAKYOVVSNQOWKBIFGIVHZNWQWDXLPRDVJRTDNCCFAQPDYJOHCOCMWTMLPFSJFFVFNUBBHNTZRNBUXLKGMSUXAYPVNAXHUWJBYXGMLOI");
    tmp_msg_0.dest_man.assign("UVRWHLXAJIJVFWBTCKWMSGADVFUVQPNLWMGPDBICILRTTEEYOK");
    tmp_msg_0.conditions.assign("YBRUGHXDLZAJOYPNVWCLQFIGALYCRQXIPEVZEOMERNOBISAHUCJJUQSFARWQCDHDDZJRPMIEXMDLHGCMFVVSQDULMFEBQJYUUYKXHASAZSCYRRPJPEIRFLVQTEDXTIVWTZKQCPWHEASDWKTWHVNTMPCGONXPKLBYZGTYVBZZWBONTSGHVHMOBXYGFWWMXMBUHNNSIPJIMTFCNVJSAQJ");
    IMC::Temperature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7356159968750159;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::EntityParameter tmp_msg_1;
    tmp_msg_1.name.assign("WAKAUVAVCGIUBVU");
    tmp_msg_1.value.assign("LFPHQPHJYTDFHRXTNKREVOWZAEGQFUMJGWZZVCRGVKIXYIGXASVJWSWIMMDTKDRTOEUUIZLWYQWZCTLUNCDRLQJOPHOIEXHPYGTVFSEHBQDZXXOEGMVOMAWZYEBTGRSSKAZUFZSQCPISFLNBXPKOBURHPTM");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3670518466263898);
    msg.setSource(48855U);
    msg.setSourceEntity(74U);
    msg.setDestination(7686U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("ZAPGVPRYMAAACYDDXTRAYMMPTAHGPQIHNMYOHMXLLWHIDEUEJLCZGOZZBZHYISOHGVTLFODJSUKUHWBAPCGFNPNGXVOXKJJFONUIZJDPZZLCRFIBMFKJUKDKTESCWMYQGKXXEYWXWWODDDUQCLTBUZFKJTXRAHJRKNUMRNKJENYEVISV");
    msg.description.assign("QFDGJWMQNLFMIHIPDKUQWRGGSLYXTVYZSPJVOUZGWUHAEHJRKGUHCSUVXURQJWLSNPEWGSAVLEZXHBYCWKFETRKLOCXOYVMCDSUUPEAINUFOXYMKCFXTQZJHIGPANDVQBMFZOKZOBBADMZKXXBZMDJAJ");
    msg.vnamespace.assign("XIUIDXCSNPOCAMQCJFADULYWDQUAODGRYXPYZPFLOHPUKKWQXPOQXLBPEWVRDCXUWYQTRFMRFFAURMGLRWLOYVOGESGATPBBRXLKJZFNPVEUJLVTNDFIBOKLZISIHSHYKUQDLQPNZZDHMYTTBXYDTKCKHHRZNTZURWMSTFOWMWBHVNSVSNANCIGITMWKFOGNICTYDJBCANRUCVLAIQEJQJBGYEAEPEVVHQMHXBECBZJZSMZEMWSKOGGSXVJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QSXXMZJSMRPQJGFKMDEPJVKXIBVQCRUBSMOQTFGCXSAHRZVOIDSKLGAHRADEJXBWBVCLTJYPLABFYTMKTRYAWKMLZGMAOJLFVJZAOKXKELHLUCGNFGEVJCK");
    tmp_msg_0.value.assign("VBMDHYTVVTHCTMLVNAUALKUSYGMFFTWAIQPMUURFTNHXBKCNYQRFQHKDXIEMVFAKRHMGWFQOZWRXTEJSDDROWBLOBIAXWJVQIMJAWHNGEGKDMFGFPKCJDPABFIZRYLHZGJJZODVOVVBEUIWUEKPCQSDWGXYZZFRLSIHESTTMOUQONCBELOQRKTAPBKCOYTYQVHIGZGNXIJCWDSNIPPUAYLNCLK");
    tmp_msg_0.type = 169U;
    tmp_msg_0.access = 67U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OCJXBSUYKJMNRTQERDEPTNZWIIPTNHPISEJVBBRGBYZEUMKAOPFUGKGYDQDSKLTONETAYGBTCYXHDGJSQPJIXGLIHGFXSQUFMMQRRFEIYILDQLNABGJBNVIZZCPWXGSZXNHHKMHPOBWADWKOJXTRVOEQLBFKUSXUBUVHNAOPICWKHLLAHHYMJDDRLIMSVWDVGVAFXECZFWXCMJW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BLKKJKASARWZIEXBYYDIBRJDHFLMNNFMBAFSFJJXHEMGEKULDWBALYTLEBMIQPGYIPUWGPSNPJOQENQKPUFTXXIFGJQOAQSLZEOCAGSKLRMYYLMHCTJFZRVVUFAQOZUGECSWHWDSRFLGJICXRYJDOUGLTSYXHHXHVFBTSNHGTOIIXUICSTR");
    tmp_msg_1.dest_man.assign("OBTDOJMLZTDAG");
    tmp_msg_1.conditions.assign("ZPGKHDRCSCYGTSAKKRRLFBTTY");
    IMC::PWM tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 153U;
    tmp_tmp_msg_1_0.period = 3487490834U;
    tmp_tmp_msg_1_0.duty_cycle = 2519033166U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8811185287157053);
    msg.setSource(4451U);
    msg.setSourceEntity(190U);
    msg.setDestination(58257U);
    msg.setDestinationEntity(1U);
    msg.plan_id.assign("XKZMCLYBOVSHBSHJAFEYYJOGEGRTRVMJZGPHCXFHKYIGUCRPADHVESJHCJBJUIOWQKKUTTQSBQEJTFGGBSMMQBVGLIDZEDZBISNTWLNLSIFFHOTJDZCTNRXAYIAYTPUPHOCRSPEQNMUQCRVABCKFKXQMNLOZXHOKABLERYSDUHUVNPMIAVUUDPXEVFCXIWYNANCEBVODORWPLWJAZWKDKXXQZNRDAJWFUGWLZPNM");
    msg.description.assign("JQMYKMOSGOYTDAJZVMOHRA");
    msg.vnamespace.assign("CWZBZIZAPPVQSMDCSKSBXIQAVK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FUFRRFRZQTBAKUEWSPKXOKGLNDJXFJSOGWPWQWTJPUFQPXDEMOKRHATPBNENLJSVOJVQELTGRDYUYWKMCXSMNGXCVCEWEYCQOBKQIDZQPHVBLWIAMBSNCARROFEVEGDEZQSAUPUBDRXOJTQGYCYMF");
    tmp_msg_0.value.assign("XOWBVFDRELKWHOSRQAPCCEBXEQJBRKRPCDADKZDNECMOXEVVPYSNKYFMUMZPAUOEZWXHGZVXRUABDICITCTUCMNSMTZXP");
    tmp_msg_0.type = 145U;
    tmp_msg_0.access = 116U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HIDGBXARMLVOKBXMQNUWORWHEWUPKU");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IOLKWKTCGUCRCIUADSOHKDPCPJWRHJYBENYVKYCXTMBBQALIPFVPZUQWKOXQOLNDYLDGSJFVUSVGZKPWJVZEACCETHSVOV");
    tmp_msg_1.dest_man.assign("GROVHGWVGQVBVLGCDMPPAVZPZSUHIMCZKOCEUGLYXFAUUORSZWDCWBKLWTVJDADCVDBZIFXBSFGPUCTCRQSPYIQNQLQFOIPLHWHIRBTNNORSWUNSFTIJNIIMTMUNYZVTEITDEMYFBPAEVAXREHBMJHWFCFYUKYOKKPBHKLPQZOCDQDKHXGPSZXZYJQRCAJEMJNYAAQTJGBOWSKHL");
    tmp_msg_1.conditions.assign("RQTJIRLBHDGOVVZYZMUKFTHDEFOLHOVDWFVIWRXURLHMKSCUULQXBBTCGRMOQYCCGBWGKFRCZNQAWBBHYJUAAKMUZVBENGMXZQGDZFELCXOEOTCMNAYRSPOXJGZZHJZQMNUINYXDSNSTNQSDIEPMNKYFGESGCRIVCERXITYPLBVOKXGNTWJYNFSVPHAKLEWJLLAXESQPXHJSVOWHBPTIUCDDIRJYIYVZWIMKFTDWMAFPKDPFKSWUOJPTQQAL");
    IMC::QueryEntityState tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::RegisterManeuver tmp_msg_2;
    tmp_msg_2.mid = 24236U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.05059407071094346);
    msg.setSource(17668U);
    msg.setSourceEntity(64U);
    msg.setDestination(17713U);
    msg.setDestinationEntity(243U);
    msg.maneuver_id.assign("GGRURDOYAIHROZUVIQFDQMAHPBLLQPSESMJEJQCIUEYHWZWTEOJXYENDATWZRBKUANKMNIWBEGXMTFCLJWUCTKAGRQIIUTWZQKFHMDMBDJOQXWPNCYRQFBGSGAADVTCHNPPXXBKLQEOLONSGSLFBYXXERHYRRHTLJOOWZKFFTIECPNMMGUEHZLJJYLASZSBISYNPCJWVHNGTVPZIKFUXILU");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 31182U;
    tmp_msg_0.lat = 0.09412931168372363;
    tmp_msg_0.lon = 0.7240270855769678;
    tmp_msg_0.z = 0.3176515459981619;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.9709494333329943;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.roll = 0.4053654602393957;
    tmp_msg_0.pitch = 0.6324676503407959;
    tmp_msg_0.yaw = 0.8370830825984887;
    tmp_msg_0.custom.assign("KYFTWKXIFSCDVMOUGCYQJUMIRAKXOSYUXXCTJPDUWCGFHYEZLLOOLICVTZPZTNHPJYQITJZLFQDSGAONRHPOFTWXABHBTPUJJHJEABORVIKCVANYOAZKPPXWVDEASEIXYOMCGQGEMNLHAMZJOUPDNUVHBVFDHAVFXMRKIKQYNRUJRNZSWKRDC");
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
    msg.setTimeStamp(0.6199255114453778);
    msg.setSource(57808U);
    msg.setSourceEntity(208U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(188U);
    msg.maneuver_id.assign("TSQLTYUUFYFUBRZEKJUMXQMWEGXOPDLCCHPADTEQXKIHFTYWSAGONHWDJVTUMVYDIXNNPETVLNVXLMEKSYDXVMKISAJIGFNRAFFLDGYKIMRLZJSQRRUOTMJICUG");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 4657U;
    tmp_msg_0.lat = 0.26122879571567437;
    tmp_msg_0.lon = 0.13183752074498578;
    tmp_msg_0.z = 0.9252074278071956;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.speed = 0.4472709513935722;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.roll = 0.7856621169239665;
    tmp_msg_0.pitch = 0.1621178919431988;
    tmp_msg_0.yaw = 0.41148979623156345;
    tmp_msg_0.custom.assign("LPUHOQEVXHVZBTSQBNMUVURZKAPNOKDXPISZQTZK");
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
    msg.setTimeStamp(0.42886812204753955);
    msg.setSource(18783U);
    msg.setSourceEntity(94U);
    msg.setDestination(46782U);
    msg.setDestinationEntity(223U);
    msg.maneuver_id.assign("JHDSIFJCUAZOGUAHMIZSBQDSGLLONPQIKWJEVHPXEGOKIAPEYICVTRVLWYARJJGURLGXQITCOHNDNPNONDDRXFAMBDFWJIFSWVMATQXLBPIUUGCZIFWWMEAEYWRBNZLG");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 4546U;
    tmp_msg_0.lat = 0.6849160098628215;
    tmp_msg_0.lon = 0.4881043406497323;
    tmp_msg_0.z = 0.089399410982832;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.speed = 0.5699900541453472;
    tmp_msg_0.speed_units = 68U;
    tmp_msg_0.duration = 10307U;
    tmp_msg_0.radius = 0.6376323236072022;
    tmp_msg_0.flags = 174U;
    tmp_msg_0.custom.assign("VLLSORODSDTGMVKGWLVEAFCUPTMNJYLGEGNMZAJUYWSNHPMQIJEZMCDRSHYBIOIXINSCUXGRCWMENJZSDGELWKUZYVXDTFPKWXTEZKTTDVLLNXIOC");
    msg.data.set(tmp_msg_0);
    IMC::SoundSpeed tmp_msg_1;
    tmp_msg_1.value = 0.0879071013931092;
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
    msg.setTimeStamp(0.5740434052842077);
    msg.setSource(44334U);
    msg.setSourceEntity(84U);
    msg.setDestination(39145U);
    msg.setDestinationEntity(100U);
    msg.source_man.assign("FJTALVPMCGXOWVSNBSPVKUCVHZBTWXYDKUIXFKHE");
    msg.dest_man.assign("HOAHUKEHCONJKNUJRSSGTBPDRVYLQUTZHKCIPLDSFRWOBLHODENQKFZTGPHIHXBSOWODMSFEEUYNICEFWEWQQQNZQLYCVDJUPMTOVGLBMBMMIEZIIFVJKJXYAOSWUORIFWGNTYVRXG");
    msg.conditions.assign("ZXLZAGBUANQSECNDULCLVKLJWRGTJJDYRMZJZEEFVDFLISDPWYIZIPOOAYFWNJPHSCSOQGQRMMAPHXIIDCTBFTHOCXOGMNNBPBFVFWZESWUWLKJKAVZOCMKYDXTTQYQGRKUXQNQMAJUHNOEDWFLCHVFMQBYWHKQYSRDX");

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
    msg.setTimeStamp(0.48466171518323564);
    msg.setSource(30834U);
    msg.setSourceEntity(135U);
    msg.setDestination(64127U);
    msg.setDestinationEntity(153U);
    msg.source_man.assign("VMSYEQLFUQNXOEXZUSYHFLBLRCAPKVFYTWRNRWPBZWMBPQIHKSIFKHWTMVIKQGAKEDEVZENSYTMHRZYNWKBWUFZHDDMARGDAZOOZWTCCQENIM");
    msg.dest_man.assign("NTOSLIUXLUKYGNOIIJTPGRCADVLQFGNXXFRYSUVARFEBZXXGNQERMWWAZUXPWYPDTMJOIQLEIPWWIZEDAFEMSOQ");
    msg.conditions.assign("RCXIGRNOGFXSYMMJHLUWXNVPWXGTDFUCUFHNCOYTEKMPVQYHDKNDQPJECJDSPBIUKBRQAVMTBEKXEVYHBLUDWNMAULOQGLFACOIMSROKJIKZVPHIGBUKLREANGMUXROIYECBKEVDHLPUZIGHPXQZFYIAQTWAPBGMOZLOFVSCKJYCZAZRVPYWCIDGSHRVWRTDJNAMWVNESLXSJFZSZFICBMHWTTFQADLZLJNWU");

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
    msg.setTimeStamp(0.002222104904535227);
    msg.setSource(26416U);
    msg.setSourceEntity(222U);
    msg.setDestination(45106U);
    msg.setDestinationEntity(148U);
    msg.source_man.assign("WSKCMDHNQKLXARAECKUDRABKDSMZZVNYHTRZDALGZUUGSA");
    msg.dest_man.assign("OARNEVZTVIBZRGQONKJKXDNAFRCJNDRLPABLBUMCBQGFWKQMOPJPTNWDGPTAEVEEEQOKTSFNYCVLYITGWTYSBMWLCQZ");
    msg.conditions.assign("ZOQIZQOHJZNFTDJIFOZYWNYHUQYGPJRTBRVQYNZYMKUNMAQFFWJXSJSARNGGVHWMHYNEOAJUWETADPUZVHPALYALYIDSOXIDTIMXKFNVLSBMCDHCBOIIKVDGOQZDQG");

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
    msg.setTimeStamp(0.22144571098012755);
    msg.setSource(50284U);
    msg.setSourceEntity(98U);
    msg.setDestination(56256U);
    msg.setDestinationEntity(131U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KWWZXGAAACNCMFIXJCSMLIUKBRCIQBQFOTNYMFXOZWTZQFABBKLGVXKAMLDHPKEPLGQCYWDFUHEVYNNSOUDTCFLUEPENJREWIKXVMVYVYHYMPGOIRAOUDQJZZKGOQFNPRJOAHRCDWCDGXTEETMWITQJGZSNQVYTPDTSXJVGQFUIOHLDMHEEH");
    tmp_msg_0.description.assign("OQDMKOKYHYVQWASYVWSJZOTHKROHAATMIBZLRTBDAMHCQNGRNTIUAJSFEWFHMDNSLENIYIDPXRIXICWCCROGFMUCTDIPNPYWHHREXEJGSJDHCXKMFEWUTHB");
    tmp_msg_0.vnamespace.assign("QENDBQBFXBSFOHZZALEGNZXLMDTVJAUSAKMCXRRPSJGPBUPYIKEODKRLPTNCMCSSTNRUWPMUJDPEHQQGLDDGBYVOMVWGWYLKHOEYYGKWMZUMFNXLKCHICVFONRHHTVHRXREQWFZTOYANJMPENTEXNSUCQWAGOPEZRXSIXFJYZLDFDVHSUUAYTFTHHJYJLOVBGGKALSLAIQRIKGXITBQBJKV");
    tmp_msg_0.start_man_id.assign("NDJHWCZNHXJOLCJXLOEEPERZAJHIVFNCVFOASUIXT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TGEDPVOJLVJMZSMMXUEHGRULEGDBHXCPHXROJCJETVUUMOFXQDZRFDYORYKBCLUOWIRQWXYHCYFXNXCFQTDBDHKKQOPMQEPQYKJQLGZFYZGEAGVBKTRHXWC");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 52196U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("TGZMQHNEGSKYYBELPBEMICUMOFFEURZPOBNJSWWAFMUWMNGOKKZMDQDZWSUUVZOYLQBJORIUXMFUTHSKKXQEIGVOIHBYYLQGWVKOMOVJIXDJSLVALFAVZFDHRLXUVTXDDISPRBTELNHVGJTZQFPIPNARHWNLGSTTHFHNJXDCPPETEVZWHQCPNJJCCDIHYPASBKQLCMKWAT");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("PKQJUYSNYSIPQRKTMSWLUFAGWSAJUUAENCDEVNMOWKNXPDXSUFKC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::WindSpeed tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.direction = 0.7707142717927262;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.0775319470736392;
    tmp_tmp_tmp_msg_0_0_1.turbulence = 0.0899505846044979;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KPCBIEIATOVDOSEUTOPDAMCERYHHDKLPWYNNTUAFTQHDQQCYCDWZZMFWYOOXSYZTDERJLDOQBLASSMSYTQKEXIDGFKJPJUVDUABNBMBQPEBONHIRRGFEUVVZFLBCGZSPKGQFHUOMWNWAXRKTEINEBSJANYXICUPXNVAJNUKHZWRYSGGJRACTWGIHIWQGJFHGQAVOZKXLYCKVPSZJV");
    tmp_tmp_msg_0_1.dest_man.assign("ILKMITFPOCVCLTEWWQCUMSGRSRYGHHKTXCERFWIKBJLBFQBRYBQLHNNEYGXCOKQYIGWOKFCINYEAMTOAZPKDPOOIMIGTOFXJPUDHQXPUIWVLMQQKCSQVBDIZETFAJLYIJWUGUUPJBSVSHXYZETORZBOTDNNUMGV");
    tmp_tmp_msg_0_1.conditions.assign("RJVCHAULTVCJXZVUBOGCPYTNUFGSGHLBBQACLTYNUGEDDJQQZSXWQSWZJWSONPQYLFOXFLNHXSCVXWNGXRRVLQPUGWAMWIDXVAONHFMKOYWTKESMKJSTMKGMOBHMCJPWDBERDCMGRTXFBKUUTVOQLWDIUBJCNEXVIZKZIBLJFHIRCIPGQIAWPPEYEKTAAJDREDMFYZSRVOEBHOGPIFACFZNIUX");
    IMC::AcousticRange tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.address = 211U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LeaderState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.group_name.assign("KZYIDZWEYEFTUWQDQHAMMCAMMDPARFJTYGENGBBHJRECZYOTRGAJVCMLVHRFCWKLGFXQBRPNCDOIITVQZWHUIEKPSCVSDNUKYLZMMZXUSXMTNZIBZAQLUXIPSGJJFDUEYOQDPGERDFOSBBROPTPAQWLEC");
    tmp_tmp_msg_0_2.op = 233U;
    tmp_tmp_msg_0_2.lat = 0.550089641608504;
    tmp_tmp_msg_0_2.lon = 0.5892682508061258;
    tmp_tmp_msg_0_2.height = 0.9102840854319761;
    tmp_tmp_msg_0_2.x = 0.35584164785258443;
    tmp_tmp_msg_0_2.y = 0.30451179217481794;
    tmp_tmp_msg_0_2.z = 0.04518649318539292;
    tmp_tmp_msg_0_2.phi = 0.2420918217750493;
    tmp_tmp_msg_0_2.theta = 0.005605977524199113;
    tmp_tmp_msg_0_2.psi = 0.5603714142557675;
    tmp_tmp_msg_0_2.vx = 0.101962587494279;
    tmp_tmp_msg_0_2.vy = 0.543971237174703;
    tmp_tmp_msg_0_2.vz = 0.5410757869700089;
    tmp_tmp_msg_0_2.p = 0.7201355243806711;
    tmp_tmp_msg_0_2.q = 0.7907454418370656;
    tmp_tmp_msg_0_2.r = 0.9837326517375419;
    tmp_tmp_msg_0_2.svx = 0.04275096665037392;
    tmp_tmp_msg_0_2.svy = 0.37266024413108767;
    tmp_tmp_msg_0_2.svz = 0.11089361698080313;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::CompassCalibration tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 23196U;
    tmp_tmp_msg_0_3.lat = 0.9227404950606909;
    tmp_tmp_msg_0_3.lon = 0.9227876220502992;
    tmp_tmp_msg_0_3.z = 0.8782995402268826;
    tmp_tmp_msg_0_3.z_units = 23U;
    tmp_tmp_msg_0_3.pitch = 0.7851364686483826;
    tmp_tmp_msg_0_3.amplitude = 0.5701648262830374;
    tmp_tmp_msg_0_3.duration = 23428U;
    tmp_tmp_msg_0_3.speed = 0.28639463912327057;
    tmp_tmp_msg_0_3.speed_units = 130U;
    tmp_tmp_msg_0_3.radius = 0.7846640842336073;
    tmp_tmp_msg_0_3.direction = 227U;
    tmp_tmp_msg_0_3.custom.assign("CAVNBBWKNCCVDRTWISQDISKGSYHUEETKBUMZGYNUHYWSIALMVDPRNQHDFXOLABRLOAZUEQJAKPNJHJMIPYUMGFQYFEJETOBADSLEITURPIYZZDOGOFWLVRHWAKCZZKZBMUKWTEOJGOYEXTQYMXCXPDDFSCETEXMYQGODRFGRNUHBVQXLJVGPBULRLJFNV");
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
    msg.setTimeStamp(0.5034382436078798);
    msg.setSource(22940U);
    msg.setSourceEntity(208U);
    msg.setDestination(19251U);
    msg.setDestinationEntity(92U);
    msg.command = 14U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PWAQSEKXIQXFJXEDVNXRENWOLJYPQZKGBQKMNZHTXPKOHMJIIVYCVOMLDQKFFHPADTTDUFDBHFWFNDWRGFHUYUZVOHRNKIHYKEZCFGRXEUJVMSRODPLUYRWXTWESZQCBALYHIAGTMJUSAMQVVHSMRTPCRUNKWCJPTXLOAGUACSVWGGXMCZEKBQNLJXBRYSAZOFDUTWPLARBGVCSHIMTICDQJNWM");
    tmp_msg_0.description.assign("KDHKNZXHJUTUJMLIAVJBPQIBEVCESCBWJWGZZECWCASNLGQMTOQEFQXISBKPTOFNUGHVAFMUFHHPTXAJYLDEAOXPDJRWZYOXSKVIGWGFXCOYXZCKMESETHOYLDWHYOLIYOFIKMPQEVPRZHZIUEBLQRDVIPGJSLFWVZTJVRYNNICBNAKYDKZATJNVQVBSRTKMDCXWFJDUKRTUGAALLFQCDPCXMGUERAOBIUTGDSPZGOQY");
    tmp_msg_0.vnamespace.assign("EZNTBBTQJTEIATCPYIRYTSAIZJQFHALJNWMAEBGMMJOIUHGUMTNPEVDRUJTRSZXIISPXQCWNOEHVIODMKLJSCIXYHNPAHXSGDOTWQKDHDLPQVIZWQLOJUGAVSJAWVGEGQJKYVHSPXWMHCELMFNCAQYVFPPHDFKEFOGCLALWQTZWHLV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CBULMDEMSIFFNOXJRFISZVCOBGWRUJDBENXEYCFZDKOLTOMUYPFJEYSZKMAXLAOHDEGVYXCMDTECFGAUBUZUQWIKHBO");
    tmp_tmp_msg_0_0.value.assign("NNYOHHFFPRNWGREBFAVIAPSHEQTNFSKTKBNRUKDCKKKSCSNBEXJASEROUELTJOIFDDBXHVUHGMEJULFYCKTPFLIAMSMOTESNKVHICBLTHMPYXFWOOUTAEBCVNIW");
    tmp_tmp_msg_0_0.type = 72U;
    tmp_tmp_msg_0_0.access = 25U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RIBGMGQYABHFIRAMNTEDKODWAFXMLCYXOXHQPJNQHJQJGCZBJYCIGUUASPEVSLNYJMRLJGPFRSOZVFAWBVXONKAMKLV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JRVQABCOKAPMFEFEGQDOZDWBQUBKKGXPDFLYZHTJLFAEXWACXAUHMRHDJBKPQRVNZHSUBAJGYYBEUZPQKWMFYCIQLXTVXVRYQKTGHSPOHAGHPENKO");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("FJGMMCAFOTQDYNQEYGRDVJXZXJEJEVSDQPEYCSOIODAXJWBQZLBTGHKDDQHNYKFDITAWZPMHQTVQIWBXMXYUNMXSPNTWHLBRPGLOURYXGNLVTGXFAJSKSCOZWBAVMERIOSLZGGVVHFVZWHALBQFWMZPNMCLKKHERARYBWIWSJIJOIEKZACMKIUBUFDNOWNUXRCFQAPPTZPXVCEGHCRCPNTNJOKKOHDMYLRLQGUTEVFCBJIBEPSYUR");
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("LRNTLRQYGAJDMXTFTWZQJYRRPUFPBRICZFVMSNPPKTXUYOSQKR");
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("VIZDJKPBLTVCEJQEBETEIYMOCDABXAKCDVBCXGHTYLHCKPEYTIQXPWULKESXYINBXFQZXYNRH");
    tmp_tmp_tmp_msg_0_1_0.description.assign("FBTWJFRYUGICOTZWEQBKVEYZDNNKVTYFWMNTUWAMFWDRVFQJFPCIHXEENGXMJDOTBQNXASPVGPXRQKIUAEWVVKPLNTTVJSDBXWUGFYDOBVPMXBNSASEUPFMYRCJARMJQJBYLUZZLCLRSUEIGHRGNCHHYOZZQDLLEITBAOLXTHVZBYROQUKMWHWDPGZEVNHEJJKZWLSQNLUOMKMTHCQXYXGJHRZFDLIAIIMSAYODIUHRPSCCDGSOOBAKQXAC");
    tmp_tmp_tmp_msg_0_1_0.leader_speed = 0.5066339749226798;
    tmp_tmp_tmp_msg_0_1_0.leader_bank_lim = 0.5610907838695034;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_lim = 0.1439141476666458;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_wrn = 0.7225459046410865;
    tmp_tmp_tmp_msg_0_1_0.pos_sim_err_timeout = 9966U;
    tmp_tmp_tmp_msg_0_1_0.converg_max = 0.7331811046424174;
    tmp_tmp_tmp_msg_0_1_0.converg_timeout = 6225U;
    tmp_tmp_tmp_msg_0_1_0.comms_timeout = 54818U;
    tmp_tmp_tmp_msg_0_1_0.turb_lim = 0.1691731845374448;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XNQTXNSUMYWCCGETGQDYQHLPZOJXTLKPFTGYOEINZMCLPOAHVIUFVPXZQNDOOLNEDUYVRTTEIAPRLVGSGZGFJWBRGHPKAKLINYJQAEAQUJWRLZCKHBSHBGDURYRTXFSBZGVZNVZYMYWOEAQJOREIHWSZBKCLFACRDXDBIEHBKWWHKBBVMMNXSL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("UQXQRBWOBZUYTHWRCDYVLEABSAOJVFJTDHQAKMZHPNHGGGVHESNHMILHTNGCNSLDVWRRZDIEREOLEFBTOXORBQCCCSAPTVICMIMINERRYAWFDQGHWJLQZGTKVIXEJIQAAUTFRUZTSZSXSXFJDBOBXNZGQTPSL");
    tmp_tmp_msg_0_2.dest_man.assign("RSKWWGGXICYHBYCGSXEUIQOJNRBPCAKZJMIXBXQZECJEXTLUHYDHMCTLJGUQMADRBBFWQGXWQFHPDUQPFMSWLECVOOSLFAMJHQORVWHJGRINWZHTRLZNAPVDDCIMAPUDQOXEXVNYPYZGYXSABPJKVRFYHSEO");
    tmp_tmp_msg_0_2.conditions.assign("NVXVHIUTCQBMQSVTCMMRYWADPZUOWOBDGVXJBPBZFSQRCJFSLNSFUPMCSGPBUGJPLSIHSBQTHX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.28408860760573706);
    msg.setSource(19989U);
    msg.setSourceEntity(159U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(163U);
    msg.command = 211U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DYJRODKWSNJYKQJOSBVWHQOEZFGANGBTSXKZBDMVOEMLQLWFIANJZAZTUWVXHZN");
    tmp_msg_0.description.assign("UZEDBYQUJPFOBSQQHHDAFHFSYBVNIQBZFGAVVKLICJAWIGDUNJSOASZGTKOGRVNNZGNUIMSNXESMDXTAHDXKIYRBAZGRQHDZLQKHRZVLFECO");
    tmp_msg_0.vnamespace.assign("QZRBZYSPCJAKDENCMXCTUPBUEPXGEIZLINCVVPGKGJLDFBRAQJDDWNFGYEIUJDORAAUBGUZIHCSARQXNVUPRWMHFPHOGQZLVKYJHBJTPYBILYBNJBIVOFWYIUVZFNNMUOHOLESVKXTFZEPVFWGDQOVTJ");
    tmp_msg_0.start_man_id.assign("HQMNBKOQBGEOMWVUJQGOKJSIIWKLCEUEFHHKYDUVRGXMPYWBDPAOQFIHLJERUXNMXCLCBSTGAGVQLAZMHZBAXPNWNNBPXVYBPDCCSSHNARXHRZEFYZGZMEXMIINJQVLSTLGJWWFESMWPIDAOESXUMRYHKXAZSKMFBYWRDVTQKJKAZTPYTLHPWOIPTACZIDFFQRCUDDQYUNVECOFTANRDSCBQYSZGTRZICJJFVVKUIOONBVG");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("GVBJSPCWOQBNMJWUITKXFRMBOVIYVETJQJUDLKMPTEQKZAKMNAHLIDBCLZOPZWKZUBRGBUOUXEBNCIZKQESIDWKVEIPSASORZQCYITLCTCZHKGKHHSPYQMAJSDLRRCBVLUJFXFAFDITRHEZ");
    tmp_tmp_msg_0_0.dest_man.assign("REVDVZVDJFNMKJNZOUPESJDTNXIKOFMWVQAYNSCUJNWPIUGCQXGYFVIFPSFRASIOPRXSOWIJXHMLYGBZZQMEFYBEEGSZRIWEVWHCERLXBXAQEH");
    tmp_tmp_msg_0_0.conditions.assign("JHLVHPRHTBXNFMNCJEQPGRQUCZNXOYZCOUQLMQDTRGNTYBUXSPMAUVMUXJNZFXUZDTSBFTLWGGMFPCEJEIQIPTBYTRKCZORLGRZAMEWTGYKDMITHIMVKBYCFQLPSVHGLYVYSWVCDIWWKKCQEWKDLZYHUCJDQRJNGGDAHOAKKOEANEBLWBQYHXWFQGSBPUOSPAUHPIDEEJFEONNKDBOMVV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7077352768539472);
    msg.setSource(29967U);
    msg.setSourceEntity(21U);
    msg.setDestination(17560U);
    msg.setDestinationEntity(205U);
    msg.state = 59U;
    msg.plan_id.assign("FYALPHUVDQTQNEEXOMNM");
    msg.comm_level = 70U;

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
    msg.setTimeStamp(0.8731694708630661);
    msg.setSource(17428U);
    msg.setSourceEntity(46U);
    msg.setDestination(14994U);
    msg.setDestinationEntity(168U);
    msg.state = 68U;
    msg.plan_id.assign("QWIZKWTJUIBYREQQFWVJQQFJSMVKDJSTHCAJHDNORWVHCRFPIKCHPMLRZLKHUUYPTRZTAQGCDNYGFFCFVEMUYXTSDJMGGVPUAWULMHCXAMCTICZYHLSESPGYSGOYYNEXRCMOKGDPSFLNRWLNIXDPXESOHQVBXQROANALTZAETJGUXBRIMHYLPBDKUQAWUJK");
    msg.comm_level = 45U;

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
    msg.setTimeStamp(0.4565637747012674);
    msg.setSource(28536U);
    msg.setSourceEntity(143U);
    msg.setDestination(19292U);
    msg.setDestinationEntity(210U);
    msg.state = 249U;
    msg.plan_id.assign("KAIBHTAYYFHMBAMEQRMGIYFK");
    msg.comm_level = 83U;

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
    msg.setTimeStamp(0.41772858922002276);
    msg.setSource(33047U);
    msg.setSourceEntity(145U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(94U);
    msg.type = 196U;
    msg.op = 204U;
    msg.request_id = 10703U;
    msg.plan_id.assign("TJZTSYLAARJNHUJPJIWSDHHQFGRXIKZNGLKMZIAPLTNSIPNFOZHBXEPKFBTLZTPWAXDXKSOCNFEJPIWLDYNCZMXAFHEARUPCGCOIXZQCOYXMCRMGLYPYUDSPXNXGQJMOOSCESYKUIORYMCEHADD");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.2438076899804843;
    tmp_msg_0.y = 0.3012257496884082;
    tmp_msg_0.z = 0.5452342042278415;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NSXFQCNLZDGAKQQVYHPBWEYAWYWPZSGOMAIALWUAZFQVFXIJUHCBVIUMXTLMUJBDEHYXKISFFGKCBIJYTXMDEGTZQJLCWMLQOOCXDWNOMYDWZCGKMRSHENTVBA");

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
    msg.setTimeStamp(0.3243138966459683);
    msg.setSource(5449U);
    msg.setSourceEntity(43U);
    msg.setDestination(36739U);
    msg.setDestinationEntity(253U);
    msg.type = 243U;
    msg.op = 96U;
    msg.request_id = 5099U;
    msg.plan_id.assign("ZHLPPKAMMODGAVBNVJLGWEWQMTGLFBDPSYIXEQFCRTUHRDQZMIBNSZOHKIJMXGZZSXULGLLROESLESDPCVBUYIQVOTTYCYWNXDYBXDCXHWKUDAJNNFOMSQENASHUEYZVYOBJNHWCVWMWGRUUJXBIYXMEZGKJFONTEYPVEDYAOTKCXAWGQPRTBFAVBCSOQFHXRGNPTFUIUCKPTAZRVIQFKZFFDWHONHMKJASRCKL");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.17014237262603693;
    tmp_msg_0.speed_units = 189U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EPEVGIOQJCPBMFKACWHRNBRWMYISGYTZTTCWOUNBPFXZGDQHCPDRKFTKBMYUAJNSLLUVBPZYWLEAXOJATRPQYENDQCOTKZKIBWQSMIJLSOCXGNGPEVGWYYGOSYJAWQVOSAYSHKUKNUAFXMULXIZLJHQWDMNXQZRCJEOIGDK");

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
    msg.setTimeStamp(0.85605662275099);
    msg.setSource(50668U);
    msg.setSourceEntity(92U);
    msg.setDestination(11132U);
    msg.setDestinationEntity(231U);
    msg.type = 206U;
    msg.op = 210U;
    msg.request_id = 18786U;
    msg.plan_id.assign("RHBSHBYPMDWLDAWHEUJEZPADOHVHGYLEKXBWULQSFAJWDCZVGNTLCFJERRAOWQXLDIPMDTDRMRNPTGORPOTBRSBAQVQTYUXCUHGOQIMWTAECSEFLXZQTUDIHFZSNTYZXPMBBRZ");
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.042375311560381435;
    tmp_msg_0.ay_cmd = 0.846514050918843;
    tmp_msg_0.az_cmd = 0.7047414603900373;
    tmp_msg_0.ax_des = 0.9062642820522566;
    tmp_msg_0.ay_des = 0.0013827459570373568;
    tmp_msg_0.az_des = 0.3571921146296545;
    tmp_msg_0.virt_err_x = 0.37252145691297867;
    tmp_msg_0.virt_err_y = 0.3011993056686537;
    tmp_msg_0.virt_err_z = 0.15394728147043046;
    tmp_msg_0.surf_fdbk_x = 0.06820216144045599;
    tmp_msg_0.surf_fdbk_y = 0.07973208516030172;
    tmp_msg_0.surf_fdbk_z = 0.9504111131587004;
    tmp_msg_0.surf_unkn_x = 0.17417365786167682;
    tmp_msg_0.surf_unkn_y = 0.7203809758382982;
    tmp_msg_0.surf_unkn_z = 0.5632837911734897;
    tmp_msg_0.ss_x = 0.5571077621877869;
    tmp_msg_0.ss_y = 0.03262244644726986;
    tmp_msg_0.ss_z = 0.6651737689575689;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("VUVWQLWRSWBEBPFLHHBEMKIGEUADSUXNTYHUPGQOMXMKFSVRTXLCCQJBZVYZGVJELGCBUJBXIDONXCIITYGKXFCNZASCYFRZFWVCERJWUNLAHOVUQNMEEPDGOMRURPKDTHGCRVNPABVLYFBRDMWLUTSYYZ");
    tmp_tmp_msg_0_0.dist = 0.9304348170665407;
    tmp_tmp_msg_0_0.err = 0.7249839616079944;
    tmp_tmp_msg_0_0.ctrl_imp = 0.3321650938715879;
    tmp_tmp_msg_0_0.rel_dir_x = 0.13506752079953943;
    tmp_tmp_msg_0_0.rel_dir_y = 0.008067193421120722;
    tmp_tmp_msg_0_0.rel_dir_z = 0.32038683623910913;
    tmp_tmp_msg_0_0.err_x = 0.6135858676392465;
    tmp_tmp_msg_0_0.err_y = 0.7439884036018738;
    tmp_tmp_msg_0_0.err_z = 0.001267201165068843;
    tmp_tmp_msg_0_0.rf_err_x = 0.3871969954033868;
    tmp_tmp_msg_0_0.rf_err_y = 0.9076440987027012;
    tmp_tmp_msg_0_0.rf_err_z = 0.7716416380411705;
    tmp_tmp_msg_0_0.rf_err_vx = 0.4171361753358356;
    tmp_tmp_msg_0_0.rf_err_vy = 0.26125083303485563;
    tmp_tmp_msg_0_0.rf_err_vz = 0.013089354514426055;
    tmp_tmp_msg_0_0.ss_x = 0.2565354118141647;
    tmp_tmp_msg_0_0.ss_y = 0.6254307698588064;
    tmp_tmp_msg_0_0.ss_z = 0.42255637407587743;
    tmp_tmp_msg_0_0.virt_err_x = 0.7254117334119267;
    tmp_tmp_msg_0_0.virt_err_y = 0.2707120109518749;
    tmp_tmp_msg_0_0.virt_err_z = 0.3407715362490672;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EYRURPHDJBBQXVVCEXOYRDLULOFDUSMFUDI");

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
    msg.setTimeStamp(0.6973780271780048);
    msg.setSource(5517U);
    msg.setSourceEntity(44U);
    msg.setDestination(1784U);
    msg.setDestinationEntity(128U);
    msg.plan_count = 59474U;
    msg.plan_size = 1722737999U;
    msg.change_time = 0.8279732298099555;
    msg.change_sid = 30152U;
    msg.change_sname.assign("TQDYEXZGVUWXZWNUWTKZJJEMNBJUVFNHFTFNWVJANNXAMNMLXXBSLSGOHYJBPRFRTHLOEEJIOXMRTQOILTZQZUHLQVQUCHYOZXSPOBLLSOFYTCALIYHCYNVELUSCBKTJDIAIYCCJGQNWGLEQMEWRUXIICKAPKEJGSOHWOXCKVGRTARIMSGBOBFDMPFIPYVJDDAWQEKHZC");
    const char tmp_msg_0[] = {114, 26, -20, -28, 46, 122, -3, -50, -16, 24, -33, 47, 85, 78, 38, -127, 75, 45, -49, -93, 54, 50, -102, 23, -1, -7, 120, 90, -43, 27, -100, -2, 49, 79, -91, 51, -22, -53, 5, 79, -10, 5, 45, 40, 123, 67, 22, -127, 23, 119, 68, 73, 116, -9, -81, -21, -89, 61, 50, 104, -46, 88, -62, -76, 93, 89, 23, 73, 124, -69, -100, -77, -103, 55, -50, 9, -82, 116, 70, 120, 116, 38, -121, 67, 106, -89, 5, -16, -20, 117, -15, -30, -14, -45, 46, -9, 52, -36, 95, -29, -119, 78, -42, -61, 120, -116, -49, 90, 102, 63, -48, 9, -87, -53, -116, 48, 89, -60, 92, -48, -77, -22, 84, -115, 38, -56, 18, 68, -73, 117, -22, 62, 2, 95, -83, -15, 54, -64, 35, 24, -122, 34, -128, 70, 101, -16, -60, 58, 58, 81, 7, -12, 49, 102, 32, -107, 49, 24, -7, 37, -64, 86, -90, -108, 89, -78, -120, 28, -9, -30, -99, -11, -8, -82, 51, 27, 114, 5, -24, 9, -87, 82, 50, 52, 92, -53, -81, 121, 99, 0, 79, 8, 118, -82, -32, 89, 73, -22, 95, -12, -127, -48, -64, -93, -94, -19, -48, 24, 13, 38, -53, 10, 9, -126, -21, -97, 48, -50, -8, -36, 35, -92, 77, -24, -60, 60, -86, -99, -74, -4, -34, -61, -87, -3, -34, 61, -80, 28, 63, -33, 9, -9, 124, -26, 104, -92, -110, 5, 55, -5, -47, 15, -10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NLLCPXTSGBLEZSJPHPKONIVCCUEIHQJTHVWEVXRPAGZITVXSDZXOEVWUYJHYGTBBHATIAHUPBJABUKJOEDWERPTLFQMWUMQWRLMWRONXNUIVX");
    tmp_msg_1.plan_size = 11087U;
    tmp_msg_1.change_time = 0.4507346834489868;
    tmp_msg_1.change_sid = 22351U;
    tmp_msg_1.change_sname.assign("NREPSTZISGXCMYOK");
    const char tmp_tmp_msg_1_0[] = {-43, 104, -117, 32, 1, -41, -121, 91, 100, -93, 13, 51, -92, 121, -49, 67, 50, -4, -36, -35, 88, -85, -62, -50, -69, -77, -54, -89, 23, 41, 58, 45, 99, -77, 120, 54, -35, -28, 35, -43, 32, -6, 105, -124, 36, 14, -41, -105, -26, 123, 109, -76, 14, 3, 83, -61, 61, -37, -54, -75, -75, -33, -9, 29, -41, -67, -67, -9, -69, 41, 65, 37, 64, 58, -103, 100, 121, 29, -82, -105, -26, -56, -100, 69, 34, -90, 121, 47, -105, -14, -118, 92, -32, -50, -7, -36, -16, 48, -23, -14, 56, -118, -111, -48, -18, 109, 33, 25, 111, 45, -54, 43, -113, 40, 78, 26, -76, 122, -75, -69, 71, 59, -107, -103, 34, 71, 96, -29, 65, -10, 64, 96, 117, -85, 100, 18, 48, -14, 122, -100, 63, 86, -46, -46};
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
    msg.setTimeStamp(0.6921995905637967);
    msg.setSource(28241U);
    msg.setSourceEntity(201U);
    msg.setDestination(26028U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 40858U;
    msg.plan_size = 1573317915U;
    msg.change_time = 0.29870059232630486;
    msg.change_sid = 30573U;
    msg.change_sname.assign("AGNNJWBORKFWHZULDHORFRZZQNRKXFLLQNCGMSQCOQKAAULHZJONOYIYKGQBUGSCSPVJDXMZHELHITBSDOAUCICDREOWOBSQAEVDPHPMHPWNWNIWJTKYVY");
    const char tmp_msg_0[] = {-78, 92, 12, 112, -59, -121, -57, 118, -114, 16, 84, -93, 75, 52, 80, -14, 19, 60, 58, -61, -54, -8, 4, 107, 70, 13, -46, 100, -122, -51, 106, -4, 112, -75, -36, 90, 25, 112, 86, 77, 22, 45, 91, -107, -13, -41, 92, -95, -112, -45, -102, 125, 115, 87, 18, 76, -67, -127, -122, -87, 44, 70, -123, 109, 121, 10, -27, -22, 9, 27, -101, -111, 67, -112, 20, -110, -34, -112, 20, 75, -66, 44, 9, -11, -89, -128, -65, -61, 22, -39, -72, 65, -113, -65, -39, 12, 96, -102, -49, 90, 41, -128, -12, 78, -5, 105, -36, 30, -77, 5, 59, -111, -111, 124, 118, -121, -32, 70, 44, -35, -83, -83, 83, 12, 118, 0, -62, 43, -62, -113, -50, -37, -45, 81, -99, -72, -36, -24, -7, -106, -57, -126, -112, 38, 107, -62, -104, -60, 13, 80, -49, -49, 115, 74, 71, -25, -9, -106, 14, 91, 55, 17, 123};
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
    msg.setTimeStamp(0.5966449976156936);
    msg.setSource(26037U);
    msg.setSourceEntity(246U);
    msg.setDestination(44380U);
    msg.setDestinationEntity(225U);
    msg.plan_count = 2824U;
    msg.plan_size = 3201205262U;
    msg.change_time = 0.6438355724256939;
    msg.change_sid = 45931U;
    msg.change_sname.assign("EJXIOFNCSFENJDIZRYPBCNQRNCTGDBWYHLVDCEIKXMNO");
    const char tmp_msg_0[] = {-124, 77, 10, -125, -127, 53, -77, -79, 0, -17, -26, -78, -21, 44, -33, 4, -107, -114, -110, -32, -96, -32, 45, 94, 30, -74, 63, -41, 80, -74, -77, 96, 98, -7, -99, 12, -84, 84, 30, 80, -103, -108, 13, 7, -63, -106, -83, 56, 38, 76, -36, -59, -96, -31, -15, 74, 72, 125, 120, -28, -73, -72, 116, 66, -121, -119, -26, 43, -62, 27, 51, -76, 75, 93, 107, -44, 5, -72, 89, 10, 34, -9, -14, 8, 111, -51, 41, 81, 122, 73, -100, -68, 96, -125, -66, -103, 97, 18, -56, -22, -58, 32, -101, 72, -113, 28, -125, 103, -20, -20, -50, 123, -69, 65, 94, 120, -67, 27, -125, -56, -127, -96, -63, 110, -50, 2, 12, 109, 93, -49, 18, 100, 21, 19, -99, 66, -1, 15, -108, 126, -54, -106, 99, -104, -84, -73};
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
    msg.setTimeStamp(0.862539920887133);
    msg.setSource(20787U);
    msg.setSourceEntity(4U);
    msg.setDestination(59537U);
    msg.setDestinationEntity(109U);
    msg.plan_id.assign("MEKHQKHJFECPIRHTJCBKCCIYWSWHJZUVXZJEMHRKPJIOTSUBFPADZLRJVNHFEOSZDBVDBIKDCNLXXUUDFBSQGYQEVGXPEYWUNSWTKLJRZQLQPEYWVNOXNTWQWQYISMUMCFKGFXOLWUHGBHIZDPLGMPGXJOIQVNRVYAQNBRFAOACNPRABYAUWTVDQFGTMZNMIYMXLVGXOLALDKPTNOOOZPJDICKUFGRC");
    msg.plan_size = 32904U;
    msg.change_time = 0.4802161933580419;
    msg.change_sid = 18395U;
    msg.change_sname.assign("THSDGVRPOTXPXZNMZPTJBYOYIKXBHCIVJWLJZZNDTWRKQRNCBARKJVZFFMZUHDZWCTDPXNXSVAGOGUYIXYXFUADJWBAYKU");
    const char tmp_msg_0[] = {124, -94, 82, -118, 108, 111, -16, 99, 68, -62, 11, 111, -17, 72, -36, -53, 44, 74, 12, -128, 119, 96, 0, 68, 4, -57, 114, -3, 24, -37, -44, 28, 51, 11, -101, 27, -103, 66, 54, 73, 19, -20, -128, -11, 121, 3, 102, -94, 17, -13, -87, 73, -11, 66, -110, 43, 49, 81, -53};
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
    msg.setTimeStamp(0.4364804271122814);
    msg.setSource(7963U);
    msg.setSourceEntity(40U);
    msg.setDestination(45798U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("UVWWBUIAWMYKSORFRATTASPJIUYUCKRSJKLCEAZCLIMGFFNLVNQDWOKUJRCYDUBNQFTBEDKRRXGVBIACTYWYHVUJIXLKJHDCTNMBYGPLABNNZGASUKPDZJOESKJYDOHGJYCWIQBLHAZVNHTRZHUTXDNQAPOXTRHZFFIHBIWLRNBPEGCBRIAWZSGGGYHVIPLDMSMEFKVZCSDUPJTQZTQEPQYVXPENXWFDZQX");
    msg.plan_size = 29886U;
    msg.change_time = 0.49528149820848977;
    msg.change_sid = 64672U;
    msg.change_sname.assign("UMTQFDMWVVMPQDVO");
    const char tmp_msg_0[] = {-17, 29, -18, -29, 27, 124, -123, -97, -32, 76, -42, -121, 125, -39, 76, -40, 34, 67, 21, -28, 18, -7, 6, -38, -36, 84, 62, -29, 56, 92, -23, 121, -125, 100, 39, 105, -20, -16, 106, 112, 92, -45, 82, 69, -87, -69, -46, -110, -99, -24, -29, 47, 65, -109, -106, -127, -32, 12, 7, -119, -26, 110, 62, 72, -24, 46, -99, -11, -54, -58, 94, 27, 95, -61, 77, -114, -60, -19, -62, -116, -51, 7, -18, 111, -18, 84, -64, -31, -42, 20, -35, -75, 32, 25, -47, -87, -117, -36, 73, 54, 71, -32, 100, 63, 13, 88, -110, -38, -49, -40, -115, 65, -42, 88, 94, 87, 23, -6, 10, 99, -36, 26, -32, -2, -97, -66, 92, 82, 12, 68, -43, 109, 44, 74, 107, 16, -46, -37, 58, -2, -80, -125, 113, -55, -37, 55, 71, -118, 26, 52, -25, -99, 39, 56, -55, -53, 43, -90, 23, -97, -54, 1, -116, 55, 61, -65, 103, -47, 126, 101, 50, 30, -48, 11, 101, 113, -18, -72, 111, -31, 112, -120, -107, -67, 93, -41, 55, -5, 85, -32, 113, 64, -54, -121, 27, 35, 5, -76, -21, -85, 8, 115, -87, 60, 75, -120, -15, 89, 105, 98, -84, -89, 71, -7, -124, -77, -104, 100, 11, 79, 52, 33, 52, 92, -74};
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
    msg.setTimeStamp(0.015597825395504028);
    msg.setSource(39973U);
    msg.setSourceEntity(239U);
    msg.setDestination(8456U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("RMIUTRHAEHFXIMLDNCBN");
    msg.plan_size = 32296U;
    msg.change_time = 0.3480279050199555;
    msg.change_sid = 34981U;
    msg.change_sname.assign("RDWNHWFUCGLUIGAONJQUASXCJMMIULWEGDCSOWHJYVQRAQSDBODDXGHYWGBXSYSDZJMLDLQGVFPTIMSUKYNNOMZIDVBPMTCQVJEWBTHSKVZS");
    const char tmp_msg_0[] = {-93, 115, -26, -63, 77, 83, -67, 31, 51, 118, 0, 43, -92, 37, 28, -11, -68, 26, -91, 118, -13, 110, -91, -92, 5, 62, -32, 108, 3, -46, 39, 67, -127, -94, 3, 91, -109, 29, -10, 3, 60, 48, -51, -12, 104, -92, 51, -68, -66, -57, 81, -50, -113, 68, 98, 118, -122, 64, -107, -65, 36, -2, -121, 55, 10, -84, -64, -21, 125, 103, -92, -66, 14, -55, -105, 84, 64, 99, -44, 99, -45, 52, 40, -120, 4, 84, -86, -94, 17, -78, -61, 55, 16, 2, -54, -36, -17, 3, -61, -116, -102, -66, -122, -25, -5, 16, 27, 25, -91, 75, 20, -84, -72, -31, 80, -6, -116, -23, 87, 101, 82, 122, -100, 72, -5, 3, 80, -112, -40, 70, -41, 63, 33, -41, -12, 112, 94, 6, -14, 66, -55, 117, 74, -55, 75, 63, 48, 43, -42, 51, -13, 2, 115, 40, 116, 44, 107, -46, -79, 32, -107, 24, 13, -50, -72, -30, -5};
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
    msg.setTimeStamp(0.8684431596706648);
    msg.setSource(47616U);
    msg.setSourceEntity(229U);
    msg.setDestination(42323U);
    msg.setDestinationEntity(161U);
    msg.type = 250U;
    msg.op = 113U;
    msg.request_id = 14786U;
    msg.plan_id.assign("OYXRBPVLYHKHJYVGURGEOWDNBSCRXIKGZHWTFXRAYGISAHYMJZXGPQYDHLVQHEHAEFXCDI");
    msg.flags = 21506U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("OUBQYOCXQZOJLPZJBFJAXOSHUKOGQNBNLKSTWOQJVOAKNEYFGGTVWQVACAZJLIUDWFGPMXYRGJRLLVMVPWSXLKGZGTSNNFQLVERTMRWBFWEYNGAPEYPTUZMXOAQKVIFSPAUIDBDWDEMIYMQSSAXJTUKACVOTVHEPHQYHTUZUDHNLWENDHHGLIUQCSJVCMRFNOZYGPIAHXKECDFBPEXKRKMXZZHCBSRDNBPIYKMWDZFBX");
    tmp_msg_0.message_id = 45203U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YRGUKJZVURIE");

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
    msg.setTimeStamp(0.8768544206893354);
    msg.setSource(39409U);
    msg.setSourceEntity(185U);
    msg.setDestination(51618U);
    msg.setDestinationEntity(252U);
    msg.type = 40U;
    msg.op = 144U;
    msg.request_id = 21911U;
    msg.plan_id.assign("QYEMFZBMNGCLLBGJVDXAUEDXBMQIAGYBZKZJSMPLFAHZHMJSZSVPKOISGINYKJYYAATKICDHOHJWKTZSWXHYMQNJOBTCFNHVQZYSFGCGHRHOEJVUUVLPKNWUWCAPOAJFGNRMDRFIXRPVESTKRULDNCGZXSCFJLAWSKPWWNEXYTTQEHQ");
    msg.flags = 7618U;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 14246U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("THURDAZTQGISPZJAQVUGEUYEQCITVHJTJOWAMRDLYCPOWSFJLGAQHSWQVFYSNEZYWQPWRKWLJDHNIEIYNKCKXMVNINLCFBICGHTQDRKRDPOKUPEMCYSMILTGLLOPGOEXSXEZLKXZBFBCNJHORTXIMJLOXAVB");

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
    msg.setTimeStamp(0.06298536716957226);
    msg.setSource(52918U);
    msg.setSourceEntity(215U);
    msg.setDestination(32933U);
    msg.setDestinationEntity(52U);
    msg.type = 90U;
    msg.op = 119U;
    msg.request_id = 62228U;
    msg.plan_id.assign("ZKEGOBWWXMHGKIGTZXUTHLKSJRYFIXFDIKVKHNENPHBQZSVWZNCTXZTUSAPOMQTMPPMIUSTTKPGPRVEFPBJHEIKFQGYZRYEOBHVWJYQBLBFLTOYXAFACLJGSWODAOSYNURQZVGEXDOLKSUVPIAIRRFAYNLQM");
    msg.flags = 55251U;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("HJMHJVXUSDPBGBWPADAAFUECIEXRJEICJHUDLPISMLXSLWMYLBKFLFEKEGFORDKWHNHWBNQFBYZOISZRYTZWUPGXVTGWGFSACKUGUPHCOQCGYHMTFNJDALEZVMPYLVZHRKKBXBCZFZEMOUAOVNCRINXIDTQOQRTNSQBKAYWMOYQVOJCFWVNIULYMQEYTVPQVQASANLVRPHQZDKDSWCSUYUTFKZ");
    tmp_msg_0.visibility.assign("NGCFIIUEOTZLWDZEVZUBQZNIJFOETOCRPSORRTXMJJXRHAJSKLQHYADBUPCYPWLKLY");
    tmp_msg_0.scope.assign("CIDJPHYEKYDOYRLTEHXIOKNSCSETCRKZXPUKCAFMJNAIWQHVIVCGRNDWTHMTBIAGSRZZJBEYNYOAMWVMGVONNOPBQLPZJCLJVUZOYCYIKQGEXNQSBDMJTOOPQQCHWLJUPVRDNHUTDPABZWRQUWTXQEUUGYGKDXFPAQJWUAQGXSOLKJFBTGWMXV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YOTTEKXHVRPNMPGRRYBWSWCQZZIJHPLVGFEPSXCLBAUWQFOHQEHPNJPCRSDUGSAEKDZYQWVGAAPQRMANMITJRSIQXZUETVQIGYKFYKTLGJXBVRCENKMNWXIGYTLFCFKUSMBDEKILEIYVOLFVIJOZNUTHCCGOGARXFPRTLWSLWDBUDZQRYXUSAW");

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
    msg.setTimeStamp(0.9084488117233369);
    msg.setSource(20172U);
    msg.setSourceEntity(22U);
    msg.setDestination(17023U);
    msg.setDestinationEntity(104U);
    msg.state = 46U;
    msg.plan_id.assign("VWKDCIQDHSZUDWBCFASPCOEBRBYAAYBLOB");
    msg.plan_eta = -1788470570;
    msg.plan_progress = 0.38226234354875366;
    msg.man_id.assign("BHUDPRRZIJHSFKDQHOGDNDTKFEQYZTLCEKORUWKWEEBSCEZMOGVJSSZRTVWLDZUNXRWNQSJLM");
    msg.man_type = 40987U;
    msg.man_eta = -231612915;
    msg.last_outcome = 132U;

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
    msg.setTimeStamp(0.49460853179129627);
    msg.setSource(56491U);
    msg.setSourceEntity(34U);
    msg.setDestination(11416U);
    msg.setDestinationEntity(73U);
    msg.state = 49U;
    msg.plan_id.assign("ABFISWBLERTDIUISGVKEJGCNHJNKKHJYDBAEVQZRZDKOHHXLSFKBOQTCLDQXPIZJBJRKACHVNFOMRSTISBDFGF");
    msg.plan_eta = -460738555;
    msg.plan_progress = 0.6044195298221161;
    msg.man_id.assign("KAZYHMFBFPKRQYSUPVUELCCXREDDWZJZDIAMZGBIZTKDJDLNCMOPUKVIPDW");
    msg.man_type = 58512U;
    msg.man_eta = -1786229625;
    msg.last_outcome = 181U;

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
    msg.setTimeStamp(0.5234359115010736);
    msg.setSource(36863U);
    msg.setSourceEntity(171U);
    msg.setDestination(31443U);
    msg.setDestinationEntity(22U);
    msg.state = 34U;
    msg.plan_id.assign("EMTAHVLKOWNOJWSOHZILRTDIPFBMMTMNMOBUJTWUZDPNUDYCTWOUZTNRLDBGZAFGKRIVJFJKCVLSLRWYNDRXJZWTXNXVHIMDPBPQYOHMNRPIQFIGWYGGCNUS");
    msg.plan_eta = -1246601851;
    msg.plan_progress = 0.22559578763201982;
    msg.man_id.assign("TETLOCHPFFNRFLJFSAEOZUXDGUQSRIMFYXFSLNTSKJNGHUIOGMEDGJFLCVKAAOFZKWKWSMVXKXLTCPWIIBGSTMQLRYJDRHCDHHXJPATDMDXVULWEMZQEWYGERQKNZYAKBGQPDYNBIZTUMPZHOAQMSQHBZKNIOSUTJBLWCUVEYZVCCHM");
    msg.man_type = 57328U;
    msg.man_eta = -1343924120;
    msg.last_outcome = 159U;

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
    msg.setTimeStamp(0.9617554097616333);
    msg.setSource(27855U);
    msg.setSourceEntity(26U);
    msg.setDestination(40160U);
    msg.setDestinationEntity(35U);
    msg.name.assign("VVXNGDTTNTBBPQGWLAUMQYDGYUORWCRIOVSXOLWQFXARVHRBMNEQEXCZEDTAIYFGHXSKSKJMQGHZICHEBDPMDJMXFBKPNIZLYZYDTAECFRCECFRQOHSUXKNHWTGJFZOZLWJORKHZVBYGXJZIRUAUMZEGJVAIOSHWTQKDUZVIHULWXFKCSWCYJVFPONYSLTLXEPUIEACMRDLBFSPPY");
    msg.value.assign("BOJZJREOWJRERRHKAKONMYFZJWYQUSANNTKBNCGENPVBHTEODOUSPMCONQDIGWPOEQDYCRHKXIVJYTFYWNFIPMHZQKUSKBAZNURLTSCSLGHJPYKAXVGDUVWFEQGFHEVDDUYGBILLTNIZUXCAVMBPMFMLKXZBLIYYAZGJLXELFZMNIZQBAQDHGCOWTTIBTXECDU");
    msg.type = 117U;
    msg.access = 173U;

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
    msg.setTimeStamp(0.8407474357747992);
    msg.setSource(13331U);
    msg.setSourceEntity(254U);
    msg.setDestination(37065U);
    msg.setDestinationEntity(167U);
    msg.name.assign("LDAWMCNJUCUQFZVWVDKIYLJRIUPJVNZOUNJCFHRBQAVWERFKIMDFRFKWKUTKWXAZDSJNZAXBRMVBQHGBRSAYXIPHCTYHSM");
    msg.value.assign("YVNHSFVMWBNFSJFDSFLRTWIFNNDWWSOOVCHHJQZZKZQLACQILVLERYYBTHETALYUKVDMBDNRSSAGHRAWQDUZEQJJXNXWZHKCTCIMLZBEECTQLNOMGJMPOOMJUDKWWKKWXUAOGSJTPIKPYUIIESYTPRAAVBYEJXRXGUOUIPJBYLJGDCRXCARXGCTQZOVVUDHGDOZHNFFHIMPXCPUBYXGFNFSLGTZBEQIIMRCPNMUBRKDBKOMVZYEQHEFS");
    msg.type = 58U;
    msg.access = 216U;

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
    msg.setTimeStamp(0.541844870941021);
    msg.setSource(18041U);
    msg.setSourceEntity(211U);
    msg.setDestination(13616U);
    msg.setDestinationEntity(45U);
    msg.name.assign("PFPYKIJZPAVKTZNPEFVNCEMNWJFDTEGLCTNVNZYAJBYZAOWKANDGULYYASLNHFQBXUKRTKEPEGKJOOLJXHFRIZMFWBEEGINBLFAYPLMRTAJDXVIQQSPPCYVTWKBSTQOCBMVCSHWJFZDCXHHISBZOMIBUXDXYTIWJEQCGXRUJLDXQULMIGUSPIRCHPNKZVKRUZA");
    msg.value.assign("WYFFCABFGGAYECCMHDRPJJLKLOPWXCCTPAWXZCJDPZMPOCYUFZLXTGAQVBUJXNUFOALLNCMNAMATOWBESXVQESVZQOKOSZRPTRNQMSGXZARRYSWGPIELHPCNKEIWDDVTZZJEGQISKEGFXMVIDHBUEVIUMIIBUFPFVJVZSGOWMKQSYQDLRMKKILTTJEXYTBNZWDNY");
    msg.type = 148U;
    msg.access = 132U;

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
    msg.setTimeStamp(0.3927240137225164);
    msg.setSource(30961U);
    msg.setSourceEntity(41U);
    msg.setDestination(43040U);
    msg.setDestinationEntity(56U);
    msg.cmd = 2U;
    msg.op = 108U;
    msg.plan_id.assign("FDNHCXYKISIPEQJROESUFZOWCVBYDBDLBWJNVATMTDLCRDUPWJNQIEDXEOOTHYOXRXBIGL");
    msg.params.assign("MYUHUPTIFRCOMILJYAKUPFFUECLSTFPOUFWRJXCAHXWWQR");

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
    msg.setTimeStamp(0.1732591365882844);
    msg.setSource(1534U);
    msg.setSourceEntity(150U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(203U);
    msg.cmd = 68U;
    msg.op = 170U;
    msg.plan_id.assign("MTDTMGGMQWTMUMKXOFLWPEYEXTNPRJJNEIKAIIBLCLMKPGEIFVCUFMPFXXFA");
    msg.params.assign("HKEBJRLVLYVPRSZRSEEPWHJETKKAOXFWNKANNZBCHTFWXISRXUXQMEGAZDZBBUCUTOLCBG");

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
    msg.setTimeStamp(0.11864760871506519);
    msg.setSource(54335U);
    msg.setSourceEntity(241U);
    msg.setDestination(56227U);
    msg.setDestinationEntity(56U);
    msg.cmd = 250U;
    msg.op = 103U;
    msg.plan_id.assign("DHASTWJAKOTRQEYPRDQFUAUAVBJEDNGRJUEMXKBWPONNXEIRSHBCUGMLJCWQAVUSUSJBPPAXFVMGQFOUHZNOMDERLKYTNTBNNPAXXRPBKFAMGWCOMCYFHZRI");
    msg.params.assign("BGBKLBUZCSHEIRDWYFCBJPTVJQCASRSDOIWVGRATOZTLRYOJNDUCLEHZXWQIXATTQNRQFUSQCEHBFWXLEKNMFWTQYURBKNBNPOCWNZQXYIVIYBKPDHGRPVAIWRAXTMIPCUBUDXEULFMVXEKTGAHOZYSAHNFRCMGIZMEIAXSKE");

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
    msg.setTimeStamp(0.8898058994416118);
    msg.setSource(39396U);
    msg.setSourceEntity(103U);
    msg.setDestination(41493U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("WJBSPFSDPEMWUHEOKTNNQEICSYOLYNJKSUKYWQLOTMCRGYYRYOUDGHCQGMSLMCNZAXIRGXIWYXEYISKHQWMJFWDFBFAVQJRZILXKREUYNKIUAXTONVKQLAZWJFGXJBMCCCKPOBYBSDLVXIOASBMBIHOTABULHQLFJVXKVZWPRBVHMVPZWZTCUSGZJIMRACNRHAHJNEGDDOKZTDGEXMGEAPQZTP");
    msg.op = 58U;
    msg.lat = 0.9178499986213992;
    msg.lon = 0.9864027401779725;
    msg.height = 0.9929510982186837;
    msg.x = 0.8058903168101473;
    msg.y = 0.10924134120236506;
    msg.z = 0.8753218216910181;
    msg.phi = 0.5042142785564787;
    msg.theta = 0.4134987911784983;
    msg.psi = 0.8989757653571376;
    msg.vx = 0.0797544722211222;
    msg.vy = 0.13111735291780158;
    msg.vz = 0.6788794109340565;
    msg.p = 0.9915391106313702;
    msg.q = 0.4029278757722141;
    msg.r = 0.5218749131808327;
    msg.svx = 0.5074595473536606;
    msg.svy = 0.4982914724234975;
    msg.svz = 0.9707463384921968;

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
    msg.setTimeStamp(0.5315016057704126);
    msg.setSource(52726U);
    msg.setSourceEntity(81U);
    msg.setDestination(65005U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("DBHMQEMSNGZCPVUFBIZAEVOCHEEDFTUTXRGLWTXDHYMORTVBFKIUGXLVKHZA");
    msg.op = 131U;
    msg.lat = 0.7220965121492359;
    msg.lon = 0.3884761740968844;
    msg.height = 0.04953590485127102;
    msg.x = 0.2845566864041357;
    msg.y = 0.6908150572570902;
    msg.z = 0.8640549609812604;
    msg.phi = 0.03822946445094488;
    msg.theta = 0.10904602647200834;
    msg.psi = 0.5908897959488337;
    msg.vx = 0.19617682310726814;
    msg.vy = 0.5697598289869266;
    msg.vz = 0.2704084479192982;
    msg.p = 0.2405979845704771;
    msg.q = 0.320465391383967;
    msg.r = 0.241302853357524;
    msg.svx = 0.2666733949018737;
    msg.svy = 0.5080376183240001;
    msg.svz = 0.6831228487042266;

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
    msg.setTimeStamp(0.24075562848392495);
    msg.setSource(6108U);
    msg.setSourceEntity(188U);
    msg.setDestination(49956U);
    msg.setDestinationEntity(18U);
    msg.group_name.assign("CUYETDEOYXSMLGIY");
    msg.op = 142U;
    msg.lat = 0.13599668342548665;
    msg.lon = 0.06575099548290331;
    msg.height = 0.9434829972765013;
    msg.x = 0.5687024700839417;
    msg.y = 0.3462518199079554;
    msg.z = 0.8033296693769468;
    msg.phi = 0.5950697218204294;
    msg.theta = 0.6216592754030469;
    msg.psi = 0.6582464194863406;
    msg.vx = 0.09467566244622638;
    msg.vy = 0.7898959488972388;
    msg.vz = 0.7570174867305653;
    msg.p = 0.45505565961414207;
    msg.q = 0.34602412898793056;
    msg.r = 0.11385025390582315;
    msg.svx = 0.4783194112536805;
    msg.svy = 0.5706730569478095;
    msg.svz = 0.7679940743464602;

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
    msg.setTimeStamp(0.3115677780366847);
    msg.setSource(46898U);
    msg.setSourceEntity(1U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.06614554522305316;
    msg.lon = 0.4287654533672717;
    msg.depth = 0.6903079773869131;
    msg.roll = 0.4355491084893215;
    msg.pitch = 0.7319703908547622;
    msg.yaw = 0.320898158575153;
    msg.rcp_time = 0.5012599288917092;
    msg.sid.assign("LCZHDNBEBMHQKPTGRLKLRFXLBIMDUAYVZGQQMTXJIOZREIJWURTKBICFSNJOWDGMWJIQVDTVEMSZWK");
    msg.s_type = 212U;

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
    msg.setTimeStamp(0.7108099513051082);
    msg.setSource(3541U);
    msg.setSourceEntity(150U);
    msg.setDestination(54626U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.08757309546813763;
    msg.lon = 0.9929105661324529;
    msg.depth = 0.30948753219826786;
    msg.roll = 0.8956901316060246;
    msg.pitch = 0.5120447836835839;
    msg.yaw = 0.1984527721267716;
    msg.rcp_time = 0.3203648840206148;
    msg.sid.assign("SBQFTQDBPYYJVVSKWNIQAKGSCGUHPJLZIUOYHNWWMACLGTYT");
    msg.s_type = 191U;

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
    msg.setTimeStamp(0.8792217907837259);
    msg.setSource(4446U);
    msg.setSourceEntity(209U);
    msg.setDestination(13776U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.6398554825365906;
    msg.lon = 0.20752736510305192;
    msg.depth = 0.753741994956019;
    msg.roll = 0.013098492469265866;
    msg.pitch = 0.5217077925302245;
    msg.yaw = 0.0162652649734224;
    msg.rcp_time = 0.8197923934646533;
    msg.sid.assign("CSNPIKGVOZJGMJIPXORVLLHWDRUKCWHHPXICQNNGFJRGPATLXHSPURITMJWAHZXKLYVRUCSRRBOLYYIPDGSNZDANOVJBFGHLDMJBJOYMTGEZDVEHYYUNOHFXIEDFAYIKGAPSOILWMKTKQRLMXVAFKYULQCKEWPEGTCVNHZACBEFWMETVPSUEPQOUQUXMBDNNMJRQHWYQAZUNSYXDRFKWOJWZUFDXVBGFQQXCCZO");
    msg.s_type = 175U;

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
    msg.setTimeStamp(0.6851633181004368);
    msg.setSource(30033U);
    msg.setSourceEntity(74U);
    msg.setDestination(36802U);
    msg.setDestinationEntity(75U);
    msg.id.assign("COHRSXFWJIRYJXACBPODCEXYMBWEOBDVZGCWBLUBMVEFSLCOKSZPZGNVIMGIXDKBXXMPNADAYREKHOVDIUUJIMJHPNSFZWMAQLAQROSPBSJYGHJGXGFDLHFRJEZIIYSKTVQTHTAUPDQFRVFUPNIPNGKQILWINVWZULZHJQWRHBNFTUKEMZKGUTKZCWYFCMOGHYLDWNROV");
    msg.sensor_class.assign("XIRUIGNPKTFPJCJQFCGVYIEFWZVKBOAUNLTYIEJUPUVLCTEOWDJQWTRV");
    msg.lat = 0.5559804405402897;
    msg.lon = 0.6136847827978973;
    msg.alt = 0.9535624232718265;
    msg.heading = 0.981646677522029;
    msg.data.assign("EMKWJFBYQCOXLGKEGLTJKGGVCPVUUGSWIOJVENCEBRDSPAOCDHKYMOFBHLWOAZPINETWMBHNYMOFABUDHGNNHYWKJGBETLZYPPMIRDVRPCFEESJTRIHTSSKXANJXQNRQWU");

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
    msg.setTimeStamp(0.9766429929793168);
    msg.setSource(39145U);
    msg.setSourceEntity(93U);
    msg.setDestination(914U);
    msg.setDestinationEntity(2U);
    msg.id.assign("KEJYQOVPNYXIJQWTEJSIWDYHLCFXVHBDQPFNNGMJJRLLEGMLKTCFHSZAGQNMPESEWXIXRXPYTPVOMQKWKZKQBUDKPNVNHYYTQWRBFBBHGBWPKVRALLISKTUMYEIMHOLZNGSXXKEUFCLQPYUSXOAADWFZZUGVOTMRORCDVZBSJFDXCIEYDIBUNAQMOTECCVDBWOWRSGUJHGDKICV");
    msg.sensor_class.assign("BHIRHHKSAOBEEVIUSHGRUAXHECDZQMEQLLXLBIARSMVQDNMKOHAEWF");
    msg.lat = 0.494477506825736;
    msg.lon = 0.12840719386169197;
    msg.alt = 0.4333093070568308;
    msg.heading = 0.8490803258669665;
    msg.data.assign("ZOOHHDATQZISZHFY");

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
    msg.setTimeStamp(0.7982181558770232);
    msg.setSource(23865U);
    msg.setSourceEntity(103U);
    msg.setDestination(22526U);
    msg.setDestinationEntity(121U);
    msg.id.assign("FFTRPQZJRNKRWZSXWBDZLZBCJBERYLTJEIELLKKJZLRVSZOAXSNKQYKCLSJQMIFXQAQEVVQSHFJYOTAJZUGLBJWHICUPGGGKUIRAGYYNAUCKMMBPRWIGNSSDXCLDNUMDVMHSBZBEGQJCOXDZWPTATTVLEQMSAORDVBWZNC");
    msg.sensor_class.assign("VQQFLXPABPDRQURHQCZEMOJMNXVEPHSHZEITBVPWTCXKIGNCNSARLHCMWWFKGAJMEZROVUQDCUSKYBOBTWVONVSNMWPNLMXPRBCJBUVPPHDDGTCAAIANJXWYQEHKTKHCCLUFALMJXQFNMYLZTBIKWSSOAGHAOQGYXGVHUTOFIPINJUMFYNEWDEKZLWJRXHFBFFGSIQDGZSIYUKYYEXDTKVRRBJMBJAUGSYODLOSOKTRTELLDZYJQ");
    msg.lat = 0.3866833750373525;
    msg.lon = 0.24912703299599603;
    msg.alt = 0.2965842447128121;
    msg.heading = 0.7097886901703724;
    msg.data.assign("UIUBETMXHXOOVNJKQVYLITYMCHEWFRIGUUHPRYBDKEQQDDTAMZVQLZDOEWOAHDBWPFJLOJVTXKQRSRCKJRALKSLIWQRFVJZGASDKDRPVIFNGXFITPEANYVIJMHED");

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
    msg.setTimeStamp(0.40693664138975705);
    msg.setSource(19434U);
    msg.setSourceEntity(5U);
    msg.setDestination(60103U);
    msg.setDestinationEntity(36U);
    msg.id.assign("ETTOXQHTVFJESKZRCUSBWRMBVVDWCUIDXZCUGOCQVVYTNPRFDEEOJFKNMNI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BTKJDTMLCFQYJTICLRSHGJAYCZL");
    tmp_msg_0.feature_type = 47U;
    tmp_msg_0.rgb_red = 45U;
    tmp_msg_0.rgb_green = 62U;
    tmp_msg_0.rgb_blue = 139U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.06485899820031782;
    tmp_tmp_msg_0_0.lon = 0.0141562783799003;
    tmp_tmp_msg_0_0.alt = 0.5339257784479259;
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
    msg.setTimeStamp(0.24568198835880672);
    msg.setSource(46114U);
    msg.setSourceEntity(140U);
    msg.setDestination(45U);
    msg.setDestinationEntity(62U);
    msg.id.assign("KNVYVIYGXRUWAFJSVTMAVTNRIFROYZWMWYTJHFQDFGCFKLYNIWCZWPOYZKHECSIODJHFEPYSMQULXGBQXJEDABPNBLQGDQEVKJMZLMRUSIJLDZIXSPAWUTNQLGIWSLHPZMOQDAGEBUFHKHURYGQXQAOILBVWORHEKOJCZFLYPNZOXXMIULJCEKDTCDRBSHNAZANXYMGUNCPCDT");

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
    msg.setTimeStamp(0.6048761897853135);
    msg.setSource(47889U);
    msg.setSourceEntity(167U);
    msg.setDestination(37175U);
    msg.setDestinationEntity(158U);
    msg.id.assign("EXWTURLJDUYYGTPMBLUPHWOKVGIELSKCBEGHBSRGWIDKHDAKHXRBPMJCQOVUFKQXGOONJSIPITTDRSJHO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CVZJHHEPJGGIHLOIOMQRTGVNFUCDVGUWOAAYKWKXKWBEBVMCBMPTRYVVIQDPLCVUFIQXY");
    tmp_msg_0.feature_type = 135U;
    tmp_msg_0.rgb_red = 51U;
    tmp_msg_0.rgb_green = 207U;
    tmp_msg_0.rgb_blue = 33U;
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
    msg.setTimeStamp(0.10485134122042739);
    msg.setSource(21840U);
    msg.setSourceEntity(224U);
    msg.setDestination(7916U);
    msg.setDestinationEntity(180U);
    msg.id.assign("QQESZCKGLWIZOFCJUCTEUIHRXOEPPFDZZJKTZQHIFMDAOJANDEDBIQABDUHXXVCTGFHX");
    msg.feature_type = 97U;
    msg.rgb_red = 217U;
    msg.rgb_green = 7U;
    msg.rgb_blue = 162U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.08291050507647602;
    tmp_msg_0.lon = 0.13911259272673238;
    tmp_msg_0.alt = 0.5032537616589596;
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
    msg.setTimeStamp(0.03919952611590982);
    msg.setSource(19897U);
    msg.setSourceEntity(61U);
    msg.setDestination(24379U);
    msg.setDestinationEntity(243U);
    msg.id.assign("XKCQMESVFQUMYQJFDARVPYVUTHQEAEEOZHPDZGFEVXGIFSLHODJRDBIYPBTGEJNRXNKEYGLVWHJLRTMKINCAWKJKTCQSHOSKRTYFMHSISRXMPAZNIOXAKESZLX");
    msg.feature_type = 140U;
    msg.rgb_red = 137U;
    msg.rgb_green = 235U;
    msg.rgb_blue = 81U;

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
    msg.setTimeStamp(0.19618237044684395);
    msg.setSource(8205U);
    msg.setSourceEntity(227U);
    msg.setDestination(24659U);
    msg.setDestinationEntity(141U);
    msg.id.assign("CIFWYNSFQNOFEQBBGTPWQIBUVMTYJJKEJRQBERYACGYGPUIHWSULLCTLYWKVPKHXMIZSFRKNDYBNAQNWEZEPZHKTKNZHHVBOLZMKWOMBQRITDGK");
    msg.feature_type = 10U;
    msg.rgb_red = 43U;
    msg.rgb_green = 88U;
    msg.rgb_blue = 36U;

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
    msg.setTimeStamp(0.3386887633021217);
    msg.setSource(46154U);
    msg.setSourceEntity(84U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.4526939556104833;
    msg.lon = 0.7357303137145352;
    msg.alt = 0.15963135058378297;

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
    msg.setTimeStamp(0.19517883723382323);
    msg.setSource(45276U);
    msg.setSourceEntity(27U);
    msg.setDestination(60503U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.437484492429593;
    msg.lon = 0.6280820989679196;
    msg.alt = 0.6266655558667144;

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
    msg.setTimeStamp(0.9962352226063219);
    msg.setSource(54550U);
    msg.setSourceEntity(200U);
    msg.setDestination(51325U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.9036045374125113;
    msg.lon = 0.05761845387547593;
    msg.alt = 0.8783198255494303;

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
    msg.setTimeStamp(0.5079921619050829);
    msg.setSource(19045U);
    msg.setSourceEntity(187U);
    msg.setDestination(54631U);
    msg.setDestinationEntity(199U);
    msg.type = 29U;
    msg.id.assign("BIJYMVLWXTUJIGVFSUOLVPRSAKBDOSERFEBLZASUNNGHYYOJOQAXBQHIVKIPCODKZEXPJGNUQXQMGGLDXDEZRVWRAOHBECCGMNZYSUMTIDGMYBVZNPKQRJKTYVHCOOCIIRUCJFJDVTZFZBWLBKIFPVMAHPSMECMENPFATTSGBSEVDTENNLGPCBU");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.21869076160084888;
    tmp_msg_0.speed_units = 244U;
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
    msg.setTimeStamp(0.23309850289042555);
    msg.setSource(64123U);
    msg.setSourceEntity(10U);
    msg.setDestination(42193U);
    msg.setDestinationEntity(242U);
    msg.type = 138U;
    msg.id.assign("NUMXLLHVAMQOHWNLKCSVHNKRVBRMQGSUELGZRAIQLOOVTQFZLVILBMWKJRPXCWWENBCXBKKGMSKRYZMSJZIGICIGGTAOFYCUSFVPZDJPWPYDRSWAYTRFBDBDEAGSHOYTEXFUOQTJBXIUNIRGYEJFWMLWJUJYSJCEVOZZLPUDXKIXTIPHZWSWCTYVKUGHEOBDJHNNFJTDOXTKDPALPCHQVAFZMDCMHXNQAEERAPFRDMNOUKCQFQPBTYSINGAEY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TTUBTJANRZQTUINLWYASUFKTFHSOKLVGLWRCSLRPLIBMAHNDXBBSOESCVFMDDXXSGOUWGYPZHWNJXDYMYJCECGKZUXYHRPDQJJRXFAJIVCTGCAYEZHUGTVBRMUYDYVPVWBFRXSOWOLHUUEEPIPHGJQQPLKULGKBNEAASJOLBSCEQQXDMZITVDHK");
    tmp_msg_0.feature_type = 142U;
    tmp_msg_0.rgb_red = 207U;
    tmp_msg_0.rgb_green = 134U;
    tmp_msg_0.rgb_blue = 145U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.48581355812897464;
    tmp_tmp_msg_0_0.lon = 0.34938079343084505;
    tmp_tmp_msg_0_0.alt = 0.963938342259538;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.46946702219863945);
    msg.setSource(64017U);
    msg.setSourceEntity(108U);
    msg.setDestination(17998U);
    msg.setDestinationEntity(36U);
    msg.type = 238U;
    msg.id.assign("CRYGUOAXVWLPMEIXHKKSSQNCKHDQNMFCURPSHGGZPEZUGMEKPAWWVLEMFYIFRQWMQYSEFZUCEIBYFTJUTIGYAOOBVXHVXRYBHHBRAOOTTQPTAGMBOFMNIDHJVDF");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 204U;
    tmp_msg_0.range = 0.3697732650158363;
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
    msg.setTimeStamp(0.5076560475100911);
    msg.setSource(36971U);
    msg.setSourceEntity(181U);
    msg.setDestination(62350U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("THTRJFWSVCUNSKHMNKNZLDPENEZJGKJSEEBQPGRDBFAZFCLPORYNIJHLCNPBRFZEKTDUITCTJKRZYVTUHFTJQORICJVXFSAXUWEXWQLAUGHMQMRTHAVWYSADIYGWVDDZMIAMJR");

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
    msg.setTimeStamp(0.4113039632165578);
    msg.setSource(48482U);
    msg.setSourceEntity(99U);
    msg.setDestination(57010U);
    msg.setDestinationEntity(196U);
    msg.localname.assign("VPIMGZCQBDOTHOKOQXGUWPSARLBXWHTQTYSSKHVEPDREPQJLAYATNXYELFWOBJBTKOFJYIPNCOMWOFSJRNRUGVHNQEYQAGWURVXGVSYYUU");

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
    msg.setTimeStamp(0.47526746005602305);
    msg.setSource(2375U);
    msg.setSourceEntity(117U);
    msg.setDestination(35399U);
    msg.setDestinationEntity(50U);
    msg.localname.assign("DVVFBYRMKCMHNWDFVEEGQJQXVTTVVSYMJUKLMAOPNVJQAIUHOOWPFJNSSHJZQNRPTOXLEIKLAYBOJYRAFPZIYQVTLSQIAPBNYRPSZDPGXCBYSAWEEUXAGZRTFRPLTKXTDNXZWMZBKXILTIDIWYXMWZJIQCSEHMBEDOGTGFIRB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LYQGVFOOWHPY");
    tmp_msg_0.sys_type = 126U;
    tmp_msg_0.owner = 30966U;
    tmp_msg_0.lat = 0.39443337214110663;
    tmp_msg_0.lon = 0.64645211387862;
    tmp_msg_0.height = 0.385542376195936;
    tmp_msg_0.services.assign("EZVQTTXLEYOGUTEDMSIHXIJBOISCNAWTFMIGRBGULRNXNOZKMXSISTCLQJBPJEEACELONGUHWSPKNHVTCXPQXHHTFYUFOMHROZLFDQRJLEUWKUBADGBAKNOFCWRJTBVQQZJZUSLLBMPFJXFOWFCDOYAFPROMVAURPZQVXLNYVDYXCTTLSGBUFDPIBQHNWXZKIU");
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
    msg.setTimeStamp(0.8807870791967184);
    msg.setSource(44924U);
    msg.setSourceEntity(50U);
    msg.setDestination(14690U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("FANWVKTSNMZXUEFPHPONBRKXRBWKPPTYGWJQIUZMEQAXQIGUWOAPHFDYALOKLKSNQAAYDZKHYTLYEEFFDJZQYRHTDCGGPGCNSJZCVMYHVOSMEKISOXARLTJZDDLCSJLWUCWN");
    msg.predicate.assign("ZPBIXEQHQPQUZRMOZRKMTJUKFRLFPUSCDKAZSWCYUCLFTBUBWKIIBHAMRUXTPXOWHFJDTIEKNXHDQEGSAJEMJJPHDSCJBQCMOP");
    msg.attributes.assign("UNFLJNFPRONHVYQREVNAIFJLVQCMDXPDWXBUYXKABNBUZFYRTHPQSBFZQJPPQKNDITZZZFOSTULB");

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
    msg.setTimeStamp(0.11512224302656326);
    msg.setSource(3203U);
    msg.setSourceEntity(145U);
    msg.setDestination(38778U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("UYRMXQNWIGTQGBPJKOYRCWSZPVZTRGKSLAVDDNDAQQSBNHEALTCQEPKQVVXCFCJEQBOQANBWBZLHRRZHODNUXTEVFNKFAVPIHPSFULUMWWJEBXSUWTPQKUIXMJYHZBJGIOFWZURHPSPDTHVFCSGCYWJIKKDTCLLRFOZLLXDAGRCER");
    msg.predicate.assign("AULGRLMZEEOXTYPUNMNTZTJYQWGGPSXHZNVFMRQQHZMGISQTXGAUPCFAPFBJBKENXVBMNSFDIZXXKAYZLXFQEJSCRONWETOICRGWHLQNLQRCNSNUMOHYFPPDBPCVWSBEDIALMLVROPEYKRQTWEDUSJUGKWAVNDGJIACOGQUXATITGHOYKJIPKIHTOCPBCSYMWIKDVLYUDVJQRXLHVMSZJCFJKYDVWAZUZHDXZBYFTEABMHSHCKFK");
    msg.attributes.assign("RSIEZJWHHPJFYVEXYQMCREJYLAYAAZHJGURXIWNQVGTDIZIRXMAFFNLNAZDZYHTWSBWMYACVUYGVWLXCHOVPSUFGLOOLJLBEOKLTENWPUWIHNBPJAKSIBSMHTHTNJPWJXEKKJPDPOTCAITLT");

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
    msg.setTimeStamp(0.48212703124834966);
    msg.setSource(41324U);
    msg.setSourceEntity(30U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(116U);
    msg.timeline.assign("SFONEETMNUIFCDWEXYCMMHEFXLIAXGFEVBXOSUYQOFPPHVEJUKMVXJJGFPWHULT");
    msg.predicate.assign("OLHMDAKVZCIGHVZYRZGUUFXNNWJMWDNMAERDAVGWQWODXHBUYSZPQSXKAYEOQREIHSXRGXVNEOTSDWBKIHRRMQZBFXBKBLLQROGBTNUVLUDSAYOHJYCFZAATCLRSIFPUAENLQFFMFKYRTMKNUQIPLXVLDPYOCCJEHFNGGPEKCNDZTCRAPPIOXJYIBSEIVWGPZJV");
    msg.attributes.assign("KGRCCUFWTLRAABLTJJIKQYMEOAROUUBKGNXTWZDULCTBPSHCJUXPTJZANSALBYHEKMQIWGGOPGQQTUMYKLZZBYSESXPEFMOKRBJOHHFJFDKEDL");

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
    msg.setTimeStamp(0.2252986341437414);
    msg.setSource(19978U);
    msg.setSourceEntity(130U);
    msg.setDestination(52747U);
    msg.setDestinationEntity(73U);
    msg.command = 44U;
    msg.goal_id.assign("XNOUXRSVHPGQXETYEZMRDIAFCAXHWXMAVFJPTCWVDQNWIDKRDVNJOGTUTNUUAKYLENOQHJFDZKSLLSGVDWRAYXYJMRYREKEIFNFAHOIKPYBYCSTSNIVAPEICPLBBBKJLYGEMKMJJYOUNACEIFVZZCQLQCMMHJSOGKJDCSOAQOTVUWMIIQBWNZGZBT");
    msg.goal_xml.assign("HJPBSBFLMNVPKTFRWQXMTFQYZDSJREEWVPNLJSIQCNPRJQAOIDTLEFOCMCSCJADAPSGWXKMETOHKHRNIQAITWJMKHSXWPKVICBYVBGSBAHGZDJRQDLKXUEWNVSBDMCOUCIHAXDZNDKCZIUOHIJJUOIAEXX");

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
    msg.setTimeStamp(0.18375726777226653);
    msg.setSource(30202U);
    msg.setSourceEntity(158U);
    msg.setDestination(3050U);
    msg.setDestinationEntity(97U);
    msg.command = 146U;
    msg.goal_id.assign("DDYERZIDJVUQXEKGBBPLUNPVWC");
    msg.goal_xml.assign("IQWAPGOJGPCRXHDYPUJPHFEZAAEWHNUEWCQJSOKRYVZQTDQHKBSYMJMCKBKVLGYBQXPMDVIXNIMCAZDRLDOOKARCTFOUWADMPWYGNNRJGZLYVVBPLGFQFHMX");

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
    msg.setTimeStamp(0.21414701818213056);
    msg.setSource(25435U);
    msg.setSourceEntity(57U);
    msg.setDestination(61028U);
    msg.setDestinationEntity(247U);
    msg.command = 56U;
    msg.goal_id.assign("FZIHTHODMZANKKEIEFMWBPBYIWRPKVHMYNBFKIJPOXTLTEQILDEDYLUNKPAPXDMXKPLRTGLEQZBMCVRGJMEWNVSRTVZFQAIKQSQFVHLNBEFJBCXBRZFZBHCNXXEVCJVCSOQLMOOMPSEPWQKOJCTHNKPYGJCATAUUSGHXYQLEGOW");
    msg.goal_xml.assign("PYQYJYNJLGLXFMQHRPSZMZXPDZSYVYZDXQVJWOAMBIOZLIGNQIKGSUADDERXVECOCGCOC");

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
    msg.setTimeStamp(0.6728302264389173);
    msg.setSource(44721U);
    msg.setSourceEntity(172U);
    msg.setDestination(48997U);
    msg.setDestinationEntity(242U);
    msg.op = 193U;
    msg.goal_id.assign("GUKRJEJCMVDRVVMTHVDWOLOVFWHXGCYMWHHJNXZNTPZKYEPQBFSHRCNTIHTXWLUOMGGVEPACLQJHYRSMTKESBOMKYDRKKJLFXRUMFMQIAUZNZKL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ECVPANCDCRJKFFKKNYJUNKKNFQWV");
    tmp_msg_0.predicate.assign("RPSPNQTFHNXFXXCJMWMOAMUPXHEVRSOKMZUSSVCRXVGDYMTQIHUDIGBWMHFYFOKQFEOJIJUNWLXGGXQIVBUFWRXBATRVCPPOAWTHLVJHUIJDCDTLDERDEUZPBJQBZYMVRZBNJLKHCVZOKWDDHAWMIWMFENEYKLQUNSAQQWAQYXJIBUPLOOPISETZAYYNKFUGSZFFKHIMNHLBAKRCZLORLQXTCNNOCSVVCA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OWEPUBQZQYVAQRNQYRCKPPCLSYDKCVWTSOCYLAFEREJBTAQDDGTNZSDGWTDTEWRPDADCKNIZCHUJUHXFIJBZVWBLVAQBOTVSTXFIZAAULCVDSJJZOMXZFPWXLFJYNXBWLIIJZYWH");
    tmp_tmp_msg_0_0.attr_type = 241U;
    tmp_tmp_msg_0_0.min.assign("WVKKZMOHPKKKXDSLXMIBEZCJEQOBGETNJECHURCUXSXRYUAUIAQTHPXMDSN");
    tmp_tmp_msg_0_0.max.assign("SPCYFCRIEITSAAGMOIYGF");
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
    msg.setTimeStamp(0.8004411947382167);
    msg.setSource(12323U);
    msg.setSourceEntity(194U);
    msg.setDestination(5404U);
    msg.setDestinationEntity(220U);
    msg.op = 119U;
    msg.goal_id.assign("TKXLXQLLVIWZWPMFKTIGRRPXXRQNRWNYAUSYDNHJXHNYDPNFSBMDFLQNPTYBCHKYOIGBMLHDBIAXCMWSUGQSEAPKRBULVRPJANORBJZEMVMDSUPCVUUJAISLTDOWHU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GFVLGOFGHANQMDNEDFPISRHUTIQUJHKRCOU");
    tmp_msg_0.predicate.assign("BNUCVJYREVHKRGRIYZRZBLYZQNUSDTSWLJADZKSMGJFMDANVELWNKBISHUUZRUSREYFEAPAXIAWLOOXZGCAIHKQCHDRXBJWFUJXFCIQVCUVPMEQKMISEAFIHEEWHCZOWN");
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
    msg.setTimeStamp(0.601065878337358);
    msg.setSource(45788U);
    msg.setSourceEntity(31U);
    msg.setDestination(56316U);
    msg.setDestinationEntity(188U);
    msg.op = 27U;
    msg.goal_id.assign("NHULKNQHVFAVXHORBVRTIZAGAOZYXPITZAWFPFJMNYLVOUBUHWCVTDOMSHYIEGZGPICXMJSFLQSELCG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OEZHYJPAKINCCJCPD");
    tmp_msg_0.predicate.assign("CGTICYAVMIBXDLVMCSTWNOBVEYLWRZTZMSHYJWCCKIWDHKKYTYAFFDMUKDNXNECTAAWATGHBFFUZRULCAIPUTUSJGHZPQAJJBMHZPFRBXFIFKIQOFCPEJZGQRSPYEOGRDBVCGJSLQZWBNHHDWVSSIEZUAXXZCIEEYOGVYRUOOBJMOJNLAIKNNUROXYLEIWQYHPNUDDJVPWQTRXQLKMSZQBEVMNPQJNKEWGBTOGFRHVQ");
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
    msg.setTimeStamp(0.6422539263965078);
    msg.setSource(65442U);
    msg.setSourceEntity(70U);
    msg.setDestination(51918U);
    msg.setDestinationEntity(105U);
    msg.name.assign("CXILHVUZUOUFNXTVXEGYVNPWGFYTBLXDFGNZIKJDVITCMPYLWJOZBZGEABVDMPZIIECRXUXUIKLCJPYSJIKSNBYOFMNHBDQUNLZUKOOXTBMVPYJKQDKDJITPAJUXKWTRVTSCBHQAFFUFLSCROHQLEQFNPPGMNSTVAHHSJALQWJHENAVDREECORPBGNUHWKDSEWLROAYPHXTMHTWYCGBWMXFSYQQRVAMEDIJQAZB");
    msg.attr_type = 84U;
    msg.min.assign("CITMTJMQKBITXQIMJFAABACSEQYVEPZHMJSVZZBCYVOMKPPBXXCZRQPFBTUTGLNNDRVUPJNVZUMWCSDRXBYNMTTDGRTWWDVANWWAOAKRQDFMUPIWXKCXNKJUGWLEXEBXWRPSLQDOZDP");
    msg.max.assign("SLABIVNGUOTOQMFLWJGDLUZPAYMXSUTXDFJAGOUMCDVONPJGQB");

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
    msg.setTimeStamp(0.4786575447677035);
    msg.setSource(37627U);
    msg.setSourceEntity(30U);
    msg.setDestination(35639U);
    msg.setDestinationEntity(22U);
    msg.name.assign("PTALUEDHCLFIAIELBNDOGSVXQOBMIVQCYENELFRFIKBGCLMEBJVXHQFVRQWAZMMWJAKRLYGEDRFSJOYGDDNRUGRGHYTFMJIHSFFBZRRWSWPBNXYVZOWQNUZEJDTXATXSPBTSDQUYOBOUDHPZNBYJXWHKSTQCOLLMCRAVICTUEKJGLXUWWANLCIEJ");
    msg.attr_type = 233U;
    msg.min.assign("BVYVQMVHPAUFQFZCFMKLPSQBROQQPCEIRCPMYBFJADLMWYSLUTRGYGENZBLIRJJIKAQVHPXGVUDVDAXAVOFITNZWZVXESSDXZZYDWTKMLEUONGGYKUKWBCIWDUGNTRKIFHXANJOEFEOWZIJVRLPYRFBKOWIHNPTYDNNHLJUCVQQYTFKSMWX");
    msg.max.assign("WZRFRPVXGFRUKOGAOZDGHHEERFRWMSMUCHEGIYPLKLCDJI");

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
    msg.setTimeStamp(0.16434192124839897);
    msg.setSource(61074U);
    msg.setSourceEntity(49U);
    msg.setDestination(56627U);
    msg.setDestinationEntity(254U);
    msg.name.assign("PMPQEZNPOMAHYJGZMVOPHKLVOCYGAOFKCZXRTJDBDIPOTGKEKVDDMOELZELKUJJUHICJTLWHBYWZQMBMHJLYPXBGIJLXMND");
    msg.attr_type = 67U;
    msg.min.assign("VFGQBFTTKMUIMUISJFNZZLKBRLLTPZCSAQYHGODAJFXCYLWJMTEWYTGQVEJJVRRJLGBQXEOLKFPGIVCMSGDGIEXSJBAENFHYXOOMDS");
    msg.max.assign("JQSEGWFQVYLHMIWKWNSTCPKOUGVIYCGPVCMXFXZPUHIJTJDVRWQEXFAIPAJNXEWSBCTVRORXUNOQ");

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
    msg.setTimeStamp(0.019730303366888857);
    msg.setSource(19017U);
    msg.setSourceEntity(190U);
    msg.setDestination(14732U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("UPJXFZUBJEWQKQPFHCRRDZQNWGJBCHTRNEIONYXMATQFTPLMDKIGGQRLFUOWLILXEPHSZWONMGKSQOBOAKLYFHUZVTIPAPXKBHGKYITRUYSZUDHMDIJDMZCBAPCKJKAOTWYQTSYRPDWQQVDYWBXMUJNUYGLEGUSSFGWELAWISACNOTAVCJFRHMUDZVSEXKSHXEZERKOBTJEXPOIMCVVSHHQFIFYPJAZVNLDVNAJRCDRTBWBEYMNCXVBCZMXV");
    msg.predicate.assign("UUOJQSJAUG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZFAETWGYBSJBKNWREMTZPOLWCDLAMWFYJWKSDZQUZQIHSXNGYEXFRAODPYVIKUYXLIXJLIXHFODMQBHQRYDVNQGHZTUZCTNDFBOZXHGYERFBUOSSICVXEULMVHXNTHUNPGCXMRAYMTGGKMCGNXWARIFDYJILSJZYOOBVVFKBHJALGCPNPLMMBWCUPADUCVFVPSMTEIJLHTOJTAVRSFWQONUREDH");
    tmp_msg_0.attr_type = 44U;
    tmp_msg_0.min.assign("RWNMMRSMCJEZPOCLJITOWXYBOZIJIRBHBKHWUTOWQLNCRXPGSZPXUMFJHALKXPKTCDEKHEGVLQVJESODJBHHZWIREXEFFMZJIVSDGXQTIVAVBFADZFPKOXKKWCALMJLGEGOTFAIHUDMJYBHAYMSNDASDIQZBUQRPPBNIKNMQWYNQTKTGSVRRZFFGYXIFOWZNUNUEPUCUDCDVRNQ");
    tmp_msg_0.max.assign("ENTOLOGTRALCCQGNHJIIBTSONSZXIQVQSWMPCIRZBPKFYYZIKHCFNESPXZAKCTYRSDXPAFRENJEUVHRKENQDZCUFHPBWLIJWLWBZFJYXNTCDUECZXRBUBOAGXMDHYVGZOWKWLVLFVWJAOPYUVPEKQQCAVDATSEGMJDNLODSYUJXUPHLSMVIOVFXQFIMMQTIKAJPRBLMXEOMDWCPKXFAUZBWVHBSQQYUDSYGHWGHEGT");
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
    msg.setTimeStamp(0.22250414954203257);
    msg.setSource(52691U);
    msg.setSourceEntity(204U);
    msg.setDestination(29525U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("FPRWCAKELHRUKDVGSXXHIYMBQCPNJLSJAGSXJLRMEWKBFCWGBNZTRVYSBWWQTPENQCHUPUIHRSDNDMRUUMC");
    msg.predicate.assign("VFYAAXMBRCJMNFARKSDAZQBXISKPDLANNUXBNKLZSEQELTOGYLZGDTBTURMJQGIZEIXLAKHETRVYHFCXTSDALPOQHTJDQWKPJBYZXUUDKKWSCGMIRMIOFFWQIYGMQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BIMKUKLSJGYYSELVQANBXZMXXKAPWKPZYHAOEZDFKVBRBKWFBJBGPGGSVYIZSPHNETIHTBRLFIRWMRVUQUHASOGZAFGIEDKRFYDDLRUROVEATOXBUOOTBTEXCTEIXFXMDUMCZYZLMPJSCMLKHNHVYQVWRLKLNJFQNWDCZOKYLETOHPCIVDJGPQGCUANYQDIUUATTNRIXFSGXOWZAUBCEE");
    tmp_msg_0.attr_type = 159U;
    tmp_msg_0.min.assign("CJDIYRBZLEZOVZNVESWAECUYDAHTCLHMKZRUMRXOPSOBPVFQPCIFGTUEMQCEEPFTPGEBSZKJZNAHDBFTYNQWNPISYXGHXBTKOJDGRFWJMQSRTFIIRNYGGUBWDWNGASSPKBVIUFHNOOYIJMLLSJJVHBMJPWQ");
    tmp_msg_0.max.assign("QSUEKJQOZDVILLCQQ");
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
    msg.setTimeStamp(0.20688348025499204);
    msg.setSource(4978U);
    msg.setSourceEntity(86U);
    msg.setDestination(50107U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("OURELXWXDPVFMFNICXQNBVXTTVECGRNFTPQIUHHPOCWIZVOGYEGFRIKAJKUUXQTHHVRIQHSCYGNJXYDBLFJAQOLTLUKYRWPIKMYAPNUKJSLXMXLRTPDDXYRNKEKOEZVDJEDQZYCBESFPMZTAAZQUMVOAUFUAVBFGKSHWIWECRTCJGWSDKHSZMSOYYCQADXVAJMRGLKBS");
    msg.predicate.assign("TTEGNUTOJJLTUWIUEXQOASHGJUDHER");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SNYMNQGBCBXXTGPMXLFEWTRNDIYSAEGPZCDIFTUHCXYTRJOCSGGFNJUVOLYLEBAVHHOKIKFMDAQMDQZKEUNURGRVREHVBBVUQRCJLRKRZTMUWUPSLIDQTDMYVMEFIFUYVAPOPTOVXVJRXGODYDZFXZAAZHWMTZNQBCWUHZOJDQIZECFWQJWIYPSASJIFIAJMPWJRSODLA");
    tmp_msg_0.attr_type = 117U;
    tmp_msg_0.min.assign("TLNYHGWJWKRITJTBBMFBPCDZH");
    tmp_msg_0.max.assign("JJWNIPVLMJMRKVQHJLQVDVTVKBRZYQVHKZBTMXAHEUNFMZCVXRDKNKBFJQSNRIGGAEYJCOJHCOKMPDYSISAFFWVWXKIRFPOGACGTWLELBNUPXFESMCUHPGRHIBCBERHUJCAZLDPGQGOXSYINZQRSETFMXLPDIOWTUHSWAUIVLGQFAUTPJLCWBZCDWWFORHTMZUJYYDABUBYXGXRMDAZE");
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
    msg.setTimeStamp(0.40744948717688323);
    msg.setSource(16344U);
    msg.setSourceEntity(241U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(165U);
    msg.reactor.assign("UVGEWVETKCDKQLYKDJJSYUFF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UPMQEHXOEMLWNXGUQGKFCVLQRZSRBJOOZHXQKBMPGZKNJBXRIXSIYZUMZYJVLXEACLIQHSWROFVAPGRWKEWYCNWJPSIKGDPHUNTFZDYTHKDBHOZWJWELLMTTWXODQUENSVJAUOWBFZMLZTSIFTJAPVEMLFOAHCXYBVEAYAWGDTPSJDTGUQDVMSLCVYOFPNKQGCBMIN");
    tmp_msg_0.predicate.assign("DIWFDMCXZQNXJMLYIYSDQRQWXBVVRHJEJBXDSHFWUFLGFYAKVGYUFVZHSTKUOKSCSTRPTMQAJKSAAGIFNNNPCWPZCVDUUTCYXNOZJPUIFAGRRUTTUBWDHLJDQHMBKBVDNCQVLEHMQLBXTKKULUVXHOCQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZVHXYDYWHGWTXYBVZTMFRFUTICKTISHUEAGZXNXWUGAAGINIFJCJUJXVVFFUQDYOPAQSHQASJYMNVLTOCSKEYJFZZNTVZHLDRDCAKLOIQXRBFKCOBKTMECRGRVNWOQIDLEANHQBBHAMJWBPILXGJYOCPNERBKGHQAJYJYRQXEBYTLCVMQSPOWRUPVZNEMHMDASPFJHPCNZFGPIEOUUPSMXXZELKLISKGUM");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("EDNRGFYEZGZZSEXTROOKZKCCIYUWUKIREOTBNMMYCOQFXZMNPHRAHKYANNZKAFPFSXBLYLLYHBNSFCSAMJZTKSOTDCADEDLLHIBOJAPUBSADDXCWHUY");
    tmp_tmp_msg_0_0.max.assign("QJLWQFVDTVLGRNKIFHXRKDQKJYAPKVRYXNZSANQCLDRFEFTWFPTCCXBCWTAXKHACJOTEAXOGTGBDRMYAIDQFXNKTSPNYBWYV");
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
    msg.setTimeStamp(0.3830719233094172);
    msg.setSource(36007U);
    msg.setSourceEntity(25U);
    msg.setDestination(2568U);
    msg.setDestinationEntity(69U);
    msg.reactor.assign("MULUQIDKFBGZCMEJVVTXJOACUEYICRFMPMZGAMBJLSLLGSTHHIWRIUXFUACNEEWIQISYVZJDXYZTKMEGPBZMHSEOKQWGJHXTWUBOOLKTGFZLSBIIVPGXTNRJLKPOVLAKRE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NRHSDTSCPIQUMYXHCECNTARTJBRZPDZMWCQXWXDMYCLJLHOPDGPPZVQVGFAEWOWYQQVIHNYBSOGDFFKONHUQYZKNWUCKJYIZSYOXXFNSEFJMRPUDTTMEBZMPRBBTEALFSLWLJCWJVMZRPDGSFROVOHEIJNKGVXAWAFCVDGBRUIKFZEKXBQAVKBJTWQGBDPIUJKQNEJUZBUMHAINCTRQMILGKSTAXUHAFZYELXPWRTHVOYXIGEIONLSLCD");
    tmp_msg_0.predicate.assign("DGJXZSAVPVFREDTKJFYVZYAWCBWNKOYHUCGGGKSLVFWIRDQBBSBIITHWQZLGXNRYNJPCQHAJEEKAVTMNLRLTHZFAOIMPDWBGKPMAOMHCBPCIELKJERYNQEZSZFYJULMLSVFREQJWOP");
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
    msg.setTimeStamp(0.13515495902219543);
    msg.setSource(41894U);
    msg.setSourceEntity(72U);
    msg.setDestination(25614U);
    msg.setDestinationEntity(144U);
    msg.reactor.assign("PFOARMTRJLNVJNZHFJPUZXUZVWQDQBLWIWXBFWVLGUXHWFHZVYCEOROIRVKXOSFDMHQQIULKLTPFCJDWGKBMKOBRTGZWGATXCMWYTCSRUPUEGDKIHTLKVTNIAXXZIXUELIDREJCGNXQGHDXBDAYSAAGBLQNJOZYETNOBUVBPYTHYGNZZJRGKQMNPDERNNLVSIKQDFBJEALJKDIAMSAFCYZHVCCUAPHMEYSYOFIPSS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MKTIIBHOSCVUNBMC");
    tmp_msg_0.predicate.assign("UFBXPVUIYMDIUUFRNQSJYGSVJNXPCMBXYPCAWOXGEODVBKTJDWQTGOCIEDPMSTNLVMZIHOFAEKJOTXRAMFULDZLLNNRLGTJKSRDGBXJZPJIMSZRGWSHAZEWNKZGDUZQRXTWBIVMVXARKVSJPWDUKBCLFAMBZYRBHOQHVGXFEQMHHEAZNKSTEDMWNUANIQRRHJFHQLLCACKFNQCPX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WJFYGKEOFWDEXFZSFYHANPAPPPSOJNZLCETSPGXAXDGNHYFALSSFCJDZIUTNXRBALBVWYCTHSDBSVHUGBVAVNHKZPCQEQKDDZHATWEZDIQVBQCOFOKXJXPRJRIHVGZT");
    tmp_tmp_msg_0_0.attr_type = 214U;
    tmp_tmp_msg_0_0.min.assign("CLREQGJMLISSPFXXPUKZCEBKMKIPYOIRPZICFWVJKVAOIPOXSVGMEYJOVVDDKELLKWFGAJTDVAYMINGTRSUKSEEWCLBYDEHLYWQVATKPPKJQCOGSHUTPYICBQCXWMUFQRKLXBDRNQUOJRYDHOJGHWXHMNTJTZN");
    tmp_tmp_msg_0_0.max.assign("OMGFLSEIUNXXWKEEKHFNPUORJUPQPOBMCCGZIBZYRIAASDRKEMKKEOGPLDOKXZZMAMOTHJYRLNWHLAQSGYGBVJEHBPSWWNZNKBSDUEGQPVXZXPIQFVHTSDLFCBZUIWYHNLBIRQATJTJXLWXMABQBWSEPVVENDYTCGYGRUFJNZJVKCSPCQFCMYMDVRZMCDLWXVHQUOEUZPLKAAFDAMWXJFRJFIDTVTIXYCBRHNAHJHUCSTYOSONGDWLRU");
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
    msg.setTimeStamp(0.8448623651674555);
    msg.setSource(4249U);
    msg.setSourceEntity(133U);
    msg.setDestination(48723U);
    msg.setDestinationEntity(120U);
    msg.topic.assign("EKXTEUCYZQXIMLDJXVWXAODOKSHLIZTAJQHRTNERXLCOBRPOKTWDQSZSPDOZULHBOQYFLXAAJZUNUZBNMLWGRIPVRENJKLJAFMHHNWSPINQRFKXEWWLOYNTVBFOAVIVCFSXOAWPYGPUJVFIIUYOCBGMDTPBYXESUUVYDJGUFVCUBVMMHNKHEPJFBQQIKCPYYAIQRMGATGSDXQVDDGTGPJTECKYQSZHCRFJHSISKRWWGGZ");
    msg.data.assign("KBMDNEIDQAZSIMLXGVGXBPBCZMMWCRQOCSOATQOHAHNIBVXCNAAMHPKIHJLSLSESGRLHAJURWFKDZFHXIXGYTSFWJSYIXRVKBLMBIVJEDGQZLGANYLTQEHKWFDHUTTNDOXVPUCPMKTPGOHWXYPQB");

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
    msg.setTimeStamp(0.079170344429487);
    msg.setSource(35390U);
    msg.setSourceEntity(60U);
    msg.setDestination(40850U);
    msg.setDestinationEntity(150U);
    msg.topic.assign("MJCWEGCOGKHDDKQWFSOUEZUZDMKCVASFKEPOUSALJMQPAZYLBTRYKUYNMPPXSFIMVMWPELBUUCWFPXTHARQTEDPBLTQPIHPWEYJZNLSCIGVXREAYBLIXWLMIXNICWQAHASTOBPADILZGKYBJVFUFSORRJOGFJNVKBRZDSXSZGJ");
    msg.data.assign("ZTKCSPVDBYECDNJRTVWNWCLGEFADGDROPSQRFDNAWZDIFUTFSBOPBDQPZNKRVQKSLEXMMIJKVILSPSTVHPXFBWPEKOBUSXOUJKCXRLOHFNNYZNKYKCWTHKGATAHU");

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
    msg.setTimeStamp(0.5611173672898822);
    msg.setSource(53320U);
    msg.setSourceEntity(172U);
    msg.setDestination(20213U);
    msg.setDestinationEntity(131U);
    msg.topic.assign("CUZKMNVZSMOHFFHOKLGEZZTZFYINUEWVCXEWVNCHJQTLHWYBGLOLPPXZXSCBBQMPOUJNIMCNZNKEVKAZVHLJPTQWXDXJBQTOAYPYVDQSVQWEKXUVIIBEXRKIKYFGPHVLYCWR");
    msg.data.assign("GUVHTJXWDCOMINKWCNPEYAKTLCFJOCQLVWLBSSNPHQEPZWTRVSNCHPUBQULZFNHPARGOTAGSIKUXYMOWBPRETKVENEWRSDSW");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.08195671908059188);
    msg.setSource(18631U);
    msg.setSourceEntity(120U);
    msg.setDestination(59876U);
    msg.setDestinationEntity(28U);
    msg.id = 152U;
    msg.width = 11041U;
    msg.height = 36890U;
    msg.widthstep = 21635U;
    msg.channels = 106U;
    msg.depth = 70U;
    msg.finaldata = 22U;
    const char tmp_msg_0[] = {41, -75, -29, 6, 2, 83, -68, 122, -65, -43, -81, 124, 102, 62, 27, 47, -100, -80, 126, -64, 114, 21, 7, 80, 25, 108, -23, 92, 69, -51, -124, -87, -42, 12, -35, -27, 27, 59, 122, 42, 67, 108, 66, -110, 66, -97, -76, 76, -122, -124, 23, 80, 14, 126, -114, 113, -15, -51, 46, 20, -80, -124, -76, -71, 73, -12, -47, -81, -79, 45, -70, 28, -97, 60, 120, 42, -62, 90, 41, 123, 84, 119, 29, 48, 81, -49, 59, -36, 113, -107, 21, -126, 64, 78, 126, 44, -95, -54, -71, 39, 72, 95, 119, -65, 2, -90, 58, -116, -8, -98, 13, 74, 1, -1, -110, 83, 71, 55, -118, -97, 95, -6, 41, -93, -101, -118, 29, 18, -28, -111, 64, -84, -42, 104, -70, 82, -109, -10, 118, 49, 126, 6, -119, 49, 118, -74, -97, -109, 112, -37, 87, -126, 24, -21, -61, 68, 17, 39, 13, -8, -17, 60, 110, -48, 41, -2, 70, 46, 30, -16, 117, 5, -36, 74, 64, 71, 78, -9, 118, -48, -29, 104, 63, 86, 77, -68, 71};
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
    msg.setTimeStamp(0.2928371956685677);
    msg.setSource(59387U);
    msg.setSourceEntity(116U);
    msg.setDestination(3638U);
    msg.setDestinationEntity(197U);
    msg.id = 177U;
    msg.width = 61277U;
    msg.height = 43341U;
    msg.widthstep = 29999U;
    msg.channels = 215U;
    msg.depth = 75U;
    msg.finaldata = 11U;
    const char tmp_msg_0[] = {-34, -14, 47, 89, -105, 29, -99, -122, -81, 101, 112, 10, 86, 43, -103, -117, 107, -75, -33, -85, -21, 37, 55, 16, -106, 91, -93, -53, 11, 26, -99, -92, 111, 52, -115, -97, -81, 101, 11, -34, -48, -91, -73, -53, 40, -11, -109, 67, 80, 96, -34, -40, -17, -71, -125, -29, -111, -57, 10, 103, -113, -47, 28, 111, 5, -98, -101, 109, 56, 95, -77, 37, 63, -97, 101, -115, 15, 7, 104, -111, -7, 78, 55, -99, -3, 109, 87, -43, -27, 52, -102, -120, -17, 122, 65, -93, 65, -26};
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
    msg.setTimeStamp(0.9314151576128517);
    msg.setSource(26023U);
    msg.setSourceEntity(226U);
    msg.setDestination(7333U);
    msg.setDestinationEntity(100U);
    msg.id = 221U;
    msg.width = 21314U;
    msg.height = 5218U;
    msg.widthstep = 17595U;
    msg.channels = 93U;
    msg.depth = 206U;
    msg.finaldata = 217U;
    const char tmp_msg_0[] = {66, -65, 22, 111, 14, -128, 69, 93, 39, -99, -76, -66, -79, 19, -105, -89, -101, 39, 33, 86, 36, -76, -40, -67, -90, 31, 26, -51, 118, -96, -49, 53, -121, -12, 20, -66, 4, -22, 47, 88, 80, -28, -96, 1, 101, -101, -119, -73, 121, 63, -46, 68, 82, -106, -52, -112, 71, 90, 26, 58, 66, -15, 15, 24, -28, -27, -94, -4, 59, -113, -73, 87, 37, 84, -70, -117, -29, 78, 63, -25, 13, 104, 67, 20, -77, 82, -120, -26, 8, 27, -10, -63, 92, -14, -39, -77, 57, 70, 123, 119, -20, 107, 62, 71, 78, -83, -67, -74, 0, -24, -82, -105, -102, -35, -109, 10, -16, 53, -13, -59, 115, 87, 5, 32, 60, 79, 47, -30, -35, 64, 60, 98, 96, 92, 95, -43, 15, -24, -59, -79, 66, 40, -1, -110, -27, 62, -56};
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
    msg.setTimeStamp(0.22276394392661591);
    msg.setSource(17555U);
    msg.setSourceEntity(114U);
    msg.setDestination(62526U);
    msg.setDestinationEntity(192U);
    msg.width = 14105U;
    msg.height = 17069U;
    msg.channels = 104U;
    msg.depth = 179U;
    const char tmp_msg_0[] = {20, -61, 69, -113, -9, -116, -71, 112, -110, -3, -111, 43, -99, 73, -70, 103, -115, -97, -42, 41, 29, 115, 122, 46, 96, -85, -31, 90, -53, -124, -20, -86, -10, -57, -74, 34, 13, -81, 120, -38, -117, 124, 94, -25, 83, -64, 50, 21, -29, 109, 23, -71, 108, 51, 13, 30, 126, 57, -34, 37, -24, -110, 81, 4, 68, -124, -108, -72, 44, 14, -50, -127, -7, 53, -7, 69, 99, -22, -76, 54, -63, -3, 76, -86, -91, 93, -72, -96, -126, 57, -17, 54, -81, 115, -43, 31, -63, 55, -18, 4, 71, 44, 50, -72, 49, -28, -123, 67, -87, 21, 117, -113, 64, -124, 97, -26, -19, 123, 62, 68, 118, -8, 70, 48, 37, -91, 41, -89, 110, -51, 102, 94, -106, 63, -81, 78, 75, 102, -128};
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
    msg.setTimeStamp(0.14878631538703435);
    msg.setSource(24410U);
    msg.setSourceEntity(177U);
    msg.setDestination(56189U);
    msg.setDestinationEntity(203U);
    msg.width = 25269U;
    msg.height = 63053U;
    msg.channels = 243U;
    msg.depth = 61U;
    const char tmp_msg_0[] = {-2, -85, -126, 15, 45, -114, -19, 19, 75, 75, -61, -59, -62, 105, 33, 87, 91, 43, -95, 21, -123, -120, 43, 35, -43, -127, 121, 126, 62, 90, -122, -10, 78, 56, -56, 70, 14, -86, 125, 124, 53, 33, 42, -72, 14, -64, -41, 46, -37, 40, -36, 6, -122, -8, -41, 99, -12, -6, -79, -114, 35, 73, 92, -41, 2, 0, -122, 111, 74, 55, 40, -77, 7, 8, -123, -111, -24, -34, 13, 111, -69, 52, 75, -93, 28, 105, 88, -115, -109, 84, 55, 1, -69, -50, 85, 84, 80, -41, -93, 57, -33, 43, 86, -78, -23, -74, -26, -59, 16, -127, -95, 94, 11, 26, 34, 29, -93, 94, -72, -32, 115, -19, -44, 84, -99, 115, -2, -128, -90, 62, -106, 98, 89, 6};
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
    msg.setTimeStamp(0.2423901977792816);
    msg.setSource(58643U);
    msg.setSourceEntity(210U);
    msg.setDestination(37084U);
    msg.setDestinationEntity(94U);
    msg.width = 55197U;
    msg.height = 20033U;
    msg.channels = 81U;
    msg.depth = 190U;
    const char tmp_msg_0[] = {-91, -32, -15, -41, -127, -40, -104, 12, 111, 32, 81, 7, 77, 87, -29, -28, 35, -123, 96, 3, 113, -30, 84, 89, -50, 86, 21, 20, 103, 29, -127, -19, 49, 9};
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
    msg.setTimeStamp(0.6010353123007596);
    msg.setSource(12112U);
    msg.setSourceEntity(54U);
    msg.setDestination(44388U);
    msg.setDestinationEntity(128U);
    msg.frameid = 12U;
    const char tmp_msg_0[] = {8, -78, -9, 122, 112, -94, -104, 53, 96, 43, -10, -23, 66, -94, 95, 38, -84, 125, 5, 51, 9, 0, 49, 109, -69, 62, 94, -88, 63, 43, -18, 31, -97, 59, 114, -23, 13, 23, 27, -9, -79, 117, -117, 68, 86, -69, 121, -86, 21, -88, 101, 68, -68, 45, 125, -94, 96, -115, 71, 43, -107, 79, 120, 39, -123, -111, -59, -64, 60, 17, 47, 52, -120, 75, -7, 43, 51, 112, -120, -107, -114, -126, -40, -108, 61, -100, -73, 16, 36, -121, -71, 93, 44, -80, -58, 92, -71, 39, 98, -61, 2, -22, -2, 93, -16, -82, -59, 88, -28, -22, 2, 54, -15, 120, -82, -27, -109, 7, 116, -62, 94};
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
    msg.setTimeStamp(0.7957075375095161);
    msg.setSource(18896U);
    msg.setSourceEntity(98U);
    msg.setDestination(1106U);
    msg.setDestinationEntity(37U);
    msg.frameid = 217U;
    const char tmp_msg_0[] = {9, 82, -35, -32, 119, 97, -72, 30, 78, 5, 26, 8, 30, 72, -44, -47, 22, 16, -101, 45, -92, -30, 84, -33, -52, 6, 90, 108, 87, 27, -60, 71, -93, -39, -93, 105, -23, 59, 23, 25, -69, -36, -26, 85, -54, -103, 94, -62, 27, -60, 40, 84, 68, 69, -120, 5, -125, -37, 27, 21, 108, 101, -74, 115, -18, -65, 1, -65, -122, 89, -19, 53, 87, -104, -19, -86, 83, -63, 45, -37, 2, 47, 98, 42, -33, 47, 117, -19};
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
    msg.setTimeStamp(0.37768338552538416);
    msg.setSource(14295U);
    msg.setSourceEntity(26U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(10U);
    msg.frameid = 192U;
    const char tmp_msg_0[] = {30, -29, -105, 34, 103, 101, 48, 85, -113, 114, -37, 89, -113, 117, -20, -18, 66, -29, -9, -16, 75, -4, 47, -43, 123, -57, 78, -3, 57, -66, 70, 47, -12, 99, 61, 124, -98, 4, -71, -79, 24, 82, 13, -87, -117, -101, 108, 115, 36, -32, -9, 44, 43, 7, 126, 11, -80, 81, -101, 123, -52, 27, 97, -5, 21, -115, -59, 73, 93, -12, 63, 111, -56, -53, 126, 24, 48, -32, -80, 81, -86, 27, 72, 53, 106, 11, 55, -29, -70, -99, 37, 47, 8, 116, -44, -24, 65, 105, 27, -63, 113, -40, -90, 7, -9, -1, 115, 112, -27, -79, -63, -18, 125, 18, 81, 75, -116, -96, 19, -49, 81, -46, 80, -88, 24, -44, 105, 28, -87, 2, -69, -95, -61, 96, 3, 18, 94, -20, -113, -18, 35, 63, -78, 123, 38, 0, -62, 83, -119, -116, 112, 20, -128, -74, -87, -44, -112, -111, 45, -27, -59, 120, 83, 104, -84, -103, 27, 13, 2, -76, -11, 110, 89, -7, -113, 104, -52, 112, 60, -10, 70, 31, 14, -54, 18, -119, -95, -24, 55, -13};
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
    msg.setTimeStamp(0.011680721299679897);
    msg.setSource(55514U);
    msg.setSourceEntity(137U);
    msg.setDestination(52434U);
    msg.setDestinationEntity(69U);
    msg.fps = 101U;
    msg.quality = 206U;
    msg.reps = 149U;
    msg.tsize = 57U;

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
    msg.setTimeStamp(0.21782373265743527);
    msg.setSource(50727U);
    msg.setSourceEntity(33U);
    msg.setDestination(19584U);
    msg.setDestinationEntity(194U);
    msg.fps = 22U;
    msg.quality = 44U;
    msg.reps = 176U;
    msg.tsize = 214U;

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
    msg.setTimeStamp(0.9412332770343813);
    msg.setSource(61852U);
    msg.setSourceEntity(144U);
    msg.setDestination(2671U);
    msg.setDestinationEntity(34U);
    msg.fps = 195U;
    msg.quality = 93U;
    msg.reps = 173U;
    msg.tsize = 211U;

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
    msg.setTimeStamp(0.6619429606935674);
    msg.setSource(30773U);
    msg.setSourceEntity(4U);
    msg.setDestination(40732U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.3328929029205955;
    msg.lon = 0.5393523389492857;
    msg.depth = 174U;
    msg.speed = 0.4811110398546743;
    msg.psi = 0.30849281754953184;

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
    msg.setTimeStamp(0.615406904628801);
    msg.setSource(8000U);
    msg.setSourceEntity(48U);
    msg.setDestination(27438U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.025962023147189317;
    msg.lon = 0.20158082520716092;
    msg.depth = 189U;
    msg.speed = 0.8383992742458977;
    msg.psi = 0.8155414349302631;

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
    msg.setTimeStamp(0.010606909469172643);
    msg.setSource(28081U);
    msg.setSourceEntity(216U);
    msg.setDestination(55699U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.9481757346358155;
    msg.lon = 0.6710070885776722;
    msg.depth = 90U;
    msg.speed = 0.9258262572509748;
    msg.psi = 0.09884649629228437;

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
    msg.setTimeStamp(0.8780534687396846);
    msg.setSource(39206U);
    msg.setSourceEntity(235U);
    msg.setDestination(9102U);
    msg.setDestinationEntity(188U);
    msg.label.assign("QMWVCVQUMNPLHCSIVVRCYUGAEOYLBUDUBFSYPCPXTUXHBXACFVJXYZDWHOGFXJQAGOMNHREUCGPAKPWTKJENAQIQLMAREZA");
    msg.lat = 0.3775474602561616;
    msg.lon = 0.07263216069758727;
    msg.z = 0.6605981667713319;
    msg.z_units = 190U;
    msg.cog = 0.21138801940491458;
    msg.sog = 0.24395062661428368;

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
    msg.setTimeStamp(0.5824976250775573);
    msg.setSource(59451U);
    msg.setSourceEntity(134U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(241U);
    msg.label.assign("DCLXHSAIHWM");
    msg.lat = 0.9904956426764584;
    msg.lon = 0.00987296193963838;
    msg.z = 0.7351318283539159;
    msg.z_units = 253U;
    msg.cog = 0.2969193352814061;
    msg.sog = 0.31510875351655543;

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
    msg.setTimeStamp(0.48478185216872327);
    msg.setSource(33149U);
    msg.setSourceEntity(57U);
    msg.setDestination(34270U);
    msg.setDestinationEntity(167U);
    msg.label.assign("BOIULVCKPRVZHLDETWLBBVIQSMCOGK");
    msg.lat = 0.25090886108554733;
    msg.lon = 0.27172063828903725;
    msg.z = 0.1154094734554747;
    msg.z_units = 81U;
    msg.cog = 0.9833251575309064;
    msg.sog = 0.7690590600056779;

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
    msg.setTimeStamp(0.7129809686493312);
    msg.setSource(22429U);
    msg.setSourceEntity(147U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(77U);
    msg.name.assign("MUZEMMWRIJKWRLN");
    msg.value.assign("IMTKDQWDQLFIDHSSMDJJKWQRMWUEATCSJUXMSFKFGRGTIGXXPKNMBPRNZNBTICAOLWXGYDJTAQZLEULKZUHJIBGUXLEAVGLNCVEBTJHOQOGAWPNNWVYKOJYPSKUAQWYRCTLNIRYBZEDBFGHKHQCQMOVOEZDJASMOKVWIARHBYPHPEUYVCZLECFCSFKRPZQTDOAPINPOLFECSZUXEFGXGVFDVUPNHTXARWFUDM");

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
    msg.setTimeStamp(0.9774490114049175);
    msg.setSource(42812U);
    msg.setSourceEntity(46U);
    msg.setDestination(16236U);
    msg.setDestinationEntity(55U);
    msg.name.assign("VCFQYRWDBVCGWDLRYHMFIVGNVJOYGYZHDTULJPDWIOFZOAVROKEKRLEYHHQUPGILEFSYLNSEOQCNYKKSQZLWOHNHGUATUUREDTAACVOHRUTEAADWNIKBPUBZZQIMOLSBNWLEQJ");
    msg.value.assign("HCJBDFMWFKISJEAIKITDIAFUIUPWDPYPLYYZRLQBMPJQSMCRNRYLXGTICFIEJSZQBTKLFNANQTURZHHCAIPARSSAKUNNEIVCBQTCMZVZSPTUPMCEVGYEHKBVZPHWFLFLHEHGWWGMVHWLPNVOTWOEXXJUEKHTQLRBQBGCTTRYQQSOXODMYBSNOKDYOGXRNJWJXPKBXFYEVUGYRCVDZJVSNAVHZOCMDG");

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
    msg.setTimeStamp(0.5854411716396413);
    msg.setSource(52272U);
    msg.setSourceEntity(248U);
    msg.setDestination(40368U);
    msg.setDestinationEntity(52U);
    msg.name.assign("GZCFUFBRAYCMVDBLWVKYZGPTJVUTLELBHDZWDZAGADRCIONHYIMFNBNSODQQSUJUJLGVSYBMDEXXHEPEPFSYVXUGTAVQKHZZYMPUTFLZAC");
    msg.value.assign("VOQETBLCCYYBSFIPMUHOPIYHTTTRSMVIMHCFALACUSBVJEIMYGJSLZACQEKFNUSMQKLNZXYBPXULVTCKVALPHWDGBKAQFPXDDRRRFDPKCHWXBXBJRPGKBOACUYXOFZTDDUEXOYAPGLASMIQJNSKZRKGWPEMNGCVAYOYVJZLLQJFBHVQZUZTPEWTWJQ");

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
    msg.setTimeStamp(0.6209931659513492);
    msg.setSource(26743U);
    msg.setSourceEntity(5U);
    msg.setDestination(14419U);
    msg.setDestinationEntity(138U);
    msg.name.assign("HJWZHOWKIPAQKLGCRKIOADHHWJEUUXYCMVVPSKNEWOIEBULBTAFXAFDEZJDOQXEVZHALMQBVULIANLJJVTQKBPQPUYSXPCRDLNSWDLDHMWOYEYVVUONIYTSIGEKAYQQJGUFDPISFQNLJTCFHFORRCPBROGTUBWRMDYTRYGNTANLCNEMIOGTMDMGWAZHXJRNXGOFNXZECCTASKUPRIFZRBSXSMKKFHPBHCYEQ");

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
    msg.setTimeStamp(0.586286520005956);
    msg.setSource(46042U);
    msg.setSourceEntity(154U);
    msg.setDestination(54631U);
    msg.setDestinationEntity(102U);
    msg.name.assign("LBTKKFWHBYLZGIEKNRQYIVZDLFPNMHLBVGDQBPFYQQFFOGDLYIPJXHJTROHFJZLVOAOXRCGAOCYLURIOR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VYBECKMQZLKIAGCAKZIQYQOJGWIZZOIUXHXXCACRJEPBTFVVMKTMVDWJNDVDAPRUIHYVEHSLNJEFRURUGTLNKMGNSYOKMWHYSSTBRJQZSPMMWDYHGUZABIQBFNXZEGDNWKEWIQYHTGOFDLPDGCGOFLSUAYGWPUTEOABXHQE");
    tmp_msg_0.value.assign("MLNTTFOWQQHYJKMKYFYPDXOSTYTRTGUCNOXFQPGMXRAUJURWGXCMNFIRBKXCHJZSORTJDLIEUFWVPMXKNSTVBUIWAIDVPOBZMJPETSZBHBSZEANFQXYHJQCLUKKKEVJVYGRWABMCWD");
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
    msg.setTimeStamp(0.2436582277908128);
    msg.setSource(13474U);
    msg.setSourceEntity(115U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(35U);
    msg.name.assign("FFLRUQRUZUIAKXZOWEMUNPDOESKOPVMJJNRSOBPYVFTBGICNAXGDILEREJHEOJXUKHMUSSVTLJBGAGOQJTGKOHSCVJTJHDVKMDTWSA");

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
    msg.setTimeStamp(0.6355226477901771);
    msg.setSource(387U);
    msg.setSourceEntity(99U);
    msg.setDestination(28750U);
    msg.setDestinationEntity(110U);
    msg.name.assign("BACAJPBLNG");
    msg.visibility.assign("IOEPSBVUUPJTQXVDZAVMTMRGNEYIKCWJIQEGXRBSLSKWIMNYDJWZDBKIAQHDVIXQELRBCRFGFUKGBKWPGSFOOYYRNXLUPBHXFJRZBECTXARDOWNEQZVYHJVXADCHKPEQBSHIZGUQYAVCJFNDNHQCOKFXLYLPHWFYFJMOAUPMCOEMLVIMNVJPTNAOHSOHNP");
    msg.scope.assign("JVXTMNPGFVALRGVLVTXXPUYKGQKTJSXEDGZMKMAATWZLOYXPFYNHOOHJVZCBMVYUODERPSFTNWLZHDYKKMPDGGOYQFKCZUHDKJNSCIAMRURRBJSKAHQCDMIQCZWWLMHLXURIDVZJDBBAFXJNCSRKCBDUTXFQTQANEHLBNHANTQEEHYNBTPSZNVFUCCWPRQOTAFLQYXWOUKLYQCGDVGWPLPEJUBIZMSFIPFJVWOIW");

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
    msg.setTimeStamp(0.20901112228106022);
    msg.setSource(56884U);
    msg.setSourceEntity(49U);
    msg.setDestination(43975U);
    msg.setDestinationEntity(1U);
    msg.name.assign("CJMSUHTSVJUUOBQQAPYZLEDTSDAMUICKQNDXBJGSURENBXQXSZFHZRVXLOYBAJBLWODDDTBERLBJQGNCFILQLRIVHIXPMPAZBJQANMIJCCWVNEOTXZEMXYOMHLZOGTKCNYGEOSZKIYCBGQMYKTYHPOIJWWVTLCROEJPPWFPPFYUYPXHXUANRWAVHGKYDGHKUTIIUGMFLTZKDGFKPAGQ");
    msg.visibility.assign("HBDNAXDRLFVTEBXYVWCYVXFEFUHIVLWZPUJZYTXOHA");
    msg.scope.assign("QBQBJMWMGAWDSALXWZFUYGXISPBFGOAOOTLSMRSPWSYDGNHIHNEATWDYLROZHTXNFZMVFZAIRGNTWHQAEPVHRHCZVFZDOZXBNWAEMUTTLZSCJUJAQNCIDFHOKUKNQKUOGCXBRIIYZRKCEKYUUMWGVVDEPUFERHDOAJBCLYDPKPDYPAQTQXSXQPNVGIMJIJRRPVKVXFHXWYL");

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
    msg.setTimeStamp(0.38588881430268185);
    msg.setSource(47056U);
    msg.setSourceEntity(205U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(33U);
    msg.name.assign("RAYNLQOCXEWVDFHUAKXFGJJZDKARLFDNYQOBYKGSBCQXKBOEOYRPWXZEKYEIBPPRFGHTETMTDCAHKOIMWTJQZJVGDEWOKUUSNPBNSPNGCSMZEFSVZQCAALKCLJOXHKSDNUQPRBLKIGXVWASPSJQCBLTDSMVNVATQSNDMOZWPCGUXIDDLAUFEGWEHTHFTLXR");
    msg.visibility.assign("PCYXXTGVEUPWLTJKFRZSYSULRAKOQLQHFYMJYL");
    msg.scope.assign("KRMNGWQLBNJFASLEZNPRNXMDOVSXMAIRYTKZUCHMDRFTOZQFUAFBDQEXJRKLTZDUVOXONDJDIAFPPUZVBCKFUWWPWRSYIYLJJMXZITHNSMBVBOFGE");

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
    msg.setTimeStamp(0.36198612382711615);
    msg.setSource(10499U);
    msg.setSourceEntity(51U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(92U);
    msg.name.assign("XXNFOARJWVJNLNYYARVKSUATRFCKVSEDEUWJHSWXMYSAGPVHQNUBODAABMU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZEXQYSGWQAKPGZULVKGXLHOVMFBPDDHHMLSPONCTCWYTPVRLOGXIOXCQWUQXMILROWMJG");
    tmp_msg_0.value.assign("JBSYYTAERCFJGSYBYBXAUCSRMIZTWFOPKPWUJFUHSSJLLINGYWHTDAKQNGOOGHSIGJYXIKZEOXUCFPIMUVOQHHOCMOFMUWAIDAMQJLZCTLKDLWBAHMYSQPVJHPNQZQBEJSATCXGMWUBFVRFTMMEEJZKLNUTBAUJKSLBDYZQGEWCUQBNVWEXRNDPCHNIRRVKRYROZHVPEVCKVPACZLMPKDFNFRITBTDDEPEXGVDNIQORXKYSWGL");
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
    msg.setTimeStamp(0.16649584151463637);
    msg.setSource(22869U);
    msg.setSourceEntity(172U);
    msg.setDestination(22075U);
    msg.setDestinationEntity(241U);
    msg.name.assign("XMYRJNJMTCVYBLEHFXQSGJVMUPLIXFQKTIFIAZPDIGEMUQUBSZAVKXVFNAGCSVBJUOGHMGYPNWRHYFDDSJWBBUXCTKOGIHQWBBTSRYCAOTINKMDZACJCOAUIGWQFEYYOLVKFODRWLJHETLNYLELQPRNZKESHVDQVPJRRHLUZPQTKSVHFQWCGDZPDXWUOICNBSQKBZUCXZRDMEUAOWREYSALVSIOTAEDMTJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZZALEYIEVFLTSCBOXMCJFNUWLFJGMADMSBNSFL");
    tmp_msg_0.value.assign("YQVQUSSYDJLYQXGKJPGWZDZHSHUOUCEQEUBNSROTOYUTVXTQVQEHTXZAXIAYTKBIPFKFMPVOGSDYJOREKFHBTGRIZBLBLMCMAWMMEXPUKUPVMWWAWLTIQBBSLHXVHLSNLOQPEBYJDNPANCTTPAIFYHDWJZNJCZSJFFEXNRKGFLIRGINBCKHMAKKJSWIDUBHKOCD");
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
    msg.setTimeStamp(0.2729917783079071);
    msg.setSource(6536U);
    msg.setSourceEntity(106U);
    msg.setDestination(18392U);
    msg.setDestinationEntity(22U);
    msg.name.assign("AOMGBXRJTLJKBSSAWRBICKBLUZQGOKETCBCVTQZAICBFFUJZJSTKFVWOOOJXVYZUDCHDAFIVFNSKANNAQQXKHTQFCMPSYGLFYXIDJAVRPYHVKZPMIUEXIHPGYWOISUWEEZGLUMJYBENLWGDCLGZGAR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TCMJXHPNHLCLUYGLNIEBKBSPVXHFDUEWONXITYYREQIJYQPBYEPVMZOSEOLIMNUKLZRVXSTGTZTKJSBVACOICBFQBLQMPQERKFZHUANSTVXJTKI");
    tmp_msg_0.value.assign("SKNSRULUZITEQWYBMRNANNLLARUXPDHCYUIHSKQZSVCPOXYEHWEWFJNKVYPJPDJUIVZOEHVENKARRAIHBBYTPZBFTJVWYBRRXTMVIEQKDTPJJATODFFDIHRMFYTQCSZCETZCOKJUXIDMOVYMWCZOMQFIDJOULMNXXGDSNBLOGMBRILFRGHHGLPLWKFKSKFDKAAYWBGWVCPXUPHFBQTGGMELUOSNEZATQSVAZ");
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
    msg.setTimeStamp(0.724377310200991);
    msg.setSource(27703U);
    msg.setSourceEntity(55U);
    msg.setDestination(37631U);
    msg.setDestinationEntity(209U);
    msg.name.assign("HTKNXERDIKLBETPGDMRXUQDQELZVWZWVBBHXSQEFAICAJUHZSYFEFJJNXYACBITJDEZGRTGHCEVBYDWQQPUMYKONRWULXAVAWOGRZONWMDSFIGGTNLHFBXDORMUVPORKLCMSXLCZIMMOYZRCEKPOZBRKKAWVHHFYXQSSGJVALLUAGSTPYCVUJJUCFFBCNNIGTTXOII");

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
    msg.setTimeStamp(0.8581481026841462);
    msg.setSource(55227U);
    msg.setSourceEntity(59U);
    msg.setDestination(5529U);
    msg.setDestinationEntity(158U);
    msg.name.assign("MHQEGQCGNABPIVWFGDDWHRJYAOHKPTZYEQCWWXIMOPQHNOCPMLIENTZNDSMUNZQROBWERVWQTAJROLGSAOJJWFMLFICLJXPGERATYXIHJHAQBBHZYZTFPBJOJB");

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
    msg.setTimeStamp(0.3699859054510123);
    msg.setSource(47146U);
    msg.setSourceEntity(183U);
    msg.setDestination(816U);
    msg.setDestinationEntity(209U);
    msg.name.assign("ICMWOFMCYZYAJBYERDXSJEHQLEMWPCVQIMFIANXILSAIHZHLFXNRNNEJXGUAVONMKRETPTDMLBJYBPQMAOOVVCHGXOXMPLKCJJEGJNIKSUCGZOSXSPQHUGDVPFDANCUITWINDJRXHBKRSZYPQYGIOFEPKSRGJUEVUQAUC");

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
    msg.setTimeStamp(0.8572538131050184);
    msg.setSource(17196U);
    msg.setSourceEntity(245U);
    msg.setDestination(23528U);
    msg.setDestinationEntity(203U);
    msg.timeout = 2981243612U;

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
    msg.setTimeStamp(0.7783921595373818);
    msg.setSource(38346U);
    msg.setSourceEntity(225U);
    msg.setDestination(54136U);
    msg.setDestinationEntity(237U);
    msg.timeout = 2331220805U;

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
    msg.setTimeStamp(0.10638666259978513);
    msg.setSource(37976U);
    msg.setSourceEntity(147U);
    msg.setDestination(4617U);
    msg.setDestinationEntity(69U);
    msg.timeout = 4168899371U;

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
    msg.setTimeStamp(0.05349834508090734);
    msg.setSource(64412U);
    msg.setSourceEntity(136U);
    msg.setDestination(31405U);
    msg.setDestinationEntity(101U);
    msg.sessid = 3229337845U;

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
    msg.setTimeStamp(0.5891648670302965);
    msg.setSource(15113U);
    msg.setSourceEntity(176U);
    msg.setDestination(65355U);
    msg.setDestinationEntity(211U);
    msg.sessid = 2736916895U;

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
    msg.setTimeStamp(0.9769570670369071);
    msg.setSource(30295U);
    msg.setSourceEntity(207U);
    msg.setDestination(51544U);
    msg.setDestinationEntity(94U);
    msg.sessid = 3584732296U;

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
    msg.setTimeStamp(0.31550731771080776);
    msg.setSource(45932U);
    msg.setSourceEntity(1U);
    msg.setDestination(57828U);
    msg.setDestinationEntity(32U);
    msg.sessid = 3138732455U;
    msg.messages.assign("MCTTYEXJQDAXSZMWGVVGNNJAFPDETGFHEGPKSCQMTBCWHJCGRLKCLFGBT");

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
    msg.setTimeStamp(0.5092009717386056);
    msg.setSource(40885U);
    msg.setSourceEntity(21U);
    msg.setDestination(46784U);
    msg.setDestinationEntity(155U);
    msg.sessid = 993993149U;
    msg.messages.assign("BNVLKFLNMONWJHCTKPJDUSSDHXOJTRMCCWPXCAUTBDNLBWWKFZVEFRUXHPAXEQTDIIAOJIFHKGOVMPUUFCUWNKRFRZUGMADHERQSAVEID");

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
    msg.setTimeStamp(0.7453305758612776);
    msg.setSource(34874U);
    msg.setSourceEntity(190U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(64U);
    msg.sessid = 1828726569U;
    msg.messages.assign("ISLOJCMXYWACQVOPTRAG");

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
    msg.setTimeStamp(0.4453419476638829);
    msg.setSource(23096U);
    msg.setSourceEntity(47U);
    msg.setDestination(58619U);
    msg.setDestinationEntity(136U);
    msg.sessid = 3636699979U;

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
    msg.setTimeStamp(0.0604502411626453);
    msg.setSource(43062U);
    msg.setSourceEntity(100U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(12U);
    msg.sessid = 3379559170U;

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
    msg.setTimeStamp(0.4538456992071681);
    msg.setSource(19000U);
    msg.setSourceEntity(199U);
    msg.setDestination(10954U);
    msg.setDestinationEntity(49U);
    msg.sessid = 49512685U;

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
    msg.setTimeStamp(0.12501242535017565);
    msg.setSource(53675U);
    msg.setSourceEntity(40U);
    msg.setDestination(24663U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3519717631U;
    msg.status = 190U;

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
    msg.setTimeStamp(0.07417201682234542);
    msg.setSource(41163U);
    msg.setSourceEntity(67U);
    msg.setDestination(20083U);
    msg.setDestinationEntity(61U);
    msg.sessid = 933620674U;
    msg.status = 35U;

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
    msg.setTimeStamp(0.48145107413347066);
    msg.setSource(37586U);
    msg.setSourceEntity(145U);
    msg.setDestination(34974U);
    msg.setDestinationEntity(159U);
    msg.sessid = 3985523712U;
    msg.status = 205U;

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
    msg.setTimeStamp(0.01257885687368876);
    msg.setSource(18672U);
    msg.setSourceEntity(72U);
    msg.setDestination(18355U);
    msg.setDestinationEntity(221U);
    msg.name.assign("GUVMIQYQNWURAHXIODSWKFBBXANGANXNPKTZLCIGCUVAXNOIKWSDYTWIDRZSWGKQQAOYONXJKJMOHCFWVRSSRVEQHBXDIVSCVNYDETUBBGJQHGKTNCQMEKMKJZILOFMXPUZMCDECZMTLHZOZSORRGUTEIBPIJJZQMDBFFECPBTCYEHYLPJGOSDVLFKURFYXTDYWMAKRPTHNVLAYUIEVHJHSQCEZLNEWUPTWX");

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
    msg.setTimeStamp(0.9667396664707659);
    msg.setSource(55464U);
    msg.setSourceEntity(58U);
    msg.setDestination(51511U);
    msg.setDestinationEntity(201U);
    msg.name.assign("IYUXYQOOHCGKRSHZCJNFDMERNLQPIAFQGJAAEFUPSMEDULXWOJGUOZFWSJQDDMLWHALQKBTTKLAESXEGUBANCLJWMXCFSGVBOTFRDMC");

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
    msg.setTimeStamp(0.9329321718112296);
    msg.setSource(29081U);
    msg.setSourceEntity(53U);
    msg.setDestination(23331U);
    msg.setDestinationEntity(211U);
    msg.name.assign("JVAUZBXSTPYLTRSKRQBGSEGULQZUODKAJAOJTYTXGKIPLRTASS");

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
    msg.setTimeStamp(0.09108052608980732);
    msg.setSource(45353U);
    msg.setSourceEntity(176U);
    msg.setDestination(18869U);
    msg.setDestinationEntity(53U);
    msg.name.assign("SOSTGUWFPXRBPXOSZOKNZLDIHOQQRFIRPQFRUTNEKNEUVXCYEXZBDGLCYEFMDNIVMAUIOVBELTZWZOWGGNSLDEVWLHKLSJCUOPCYFZVBXTAKQBTEGBAWLJZUBKCLDOMOXLPJNVIKCKYAAHPYCMHWHBSUFIRNGMKZBEWHCZABTSXQYMEFKJACMXSDJDUNGVHGURQIIW");

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
    msg.setTimeStamp(0.39624596762617814);
    msg.setSource(14303U);
    msg.setSourceEntity(138U);
    msg.setDestination(53460U);
    msg.setDestinationEntity(203U);
    msg.name.assign("HCUUQIBLOJCLJRHKLHELLONBQVPIVPGMBKIGWFPQWMINYZJVMWSZKRWAUMHZMJSVXURSAZIARHFZGDOUNVTZCVIBXTNPDPQOJLLKQFRHJTBYAESFICTASMNNSUMUBACBRNWYXWXLSPXFDETQYZKUYXPMHEYGRFKMSEJHKWGQBQTKOGBZFVCWSLBOXZILAKVCTTWFEGRGTICJVQJAOGTXSEZGYNHFE");

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
    msg.setTimeStamp(0.11728979473225454);
    msg.setSource(54846U);
    msg.setSourceEntity(176U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(47U);
    msg.name.assign("RCFXFLPGRYEHHATCBBAZZPBQGPOEWMBRKGBFFQHTTWNGETQDUUUCKOWHVRNMDAFYIAZBIOHPJZJYKEMLKFWUZOBWJNM");

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
    msg.setTimeStamp(0.2181256273495893);
    msg.setSource(16058U);
    msg.setSourceEntity(237U);
    msg.setDestination(23561U);
    msg.setDestinationEntity(197U);
    msg.type = 69U;
    msg.error.assign("IGYXMBTGOKJMSDBHVZNKQIZISBVYKLMWVXRBURWHNAXGCJHOQARQITTIB");

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
    msg.setTimeStamp(0.3034686045941585);
    msg.setSource(19177U);
    msg.setSourceEntity(178U);
    msg.setDestination(35562U);
    msg.setDestinationEntity(70U);
    msg.type = 243U;
    msg.error.assign("RIOQQQMISBPVWZGRVITJEMEPRAFYMCZTSZRD");

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
    msg.setTimeStamp(0.07115752551170418);
    msg.setSource(26443U);
    msg.setSourceEntity(156U);
    msg.setDestination(48329U);
    msg.setDestinationEntity(62U);
    msg.type = 230U;
    msg.error.assign("JYRDEDDLBYUCQIRXCPH");

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
    msg.setTimeStamp(0.09667096963450128);
    msg.setSource(35180U);
    msg.setSourceEntity(181U);
    msg.setDestination(16240U);
    msg.setDestinationEntity(29U);
    msg.seq = 29408U;
    msg.sys_dst.assign("NOTGWLDVJKQBUVNBGMUEKGRRXAHHSBKOPFYZJYXUOKRZCFKFHZDACYUUWOIJYDVMGSEBYHKNNPEBQXLZYZPQKWPCRPTDEVDWMEERIWVNQZVLXC");
    msg.flags = 51U;
    const char tmp_msg_0[] = {13, 110, -26, -114, -85, 87, 30, 69, 36, -10, -13, -114, -100, -76, -123, -26, 120, -88, -74, -22, 95, 118, -63, 120, -74, -75, 101, -127, -59, -99, -48, 113, 92, 74, 71, 0, 119, 26, -122, -10, -80, 83, -95, -120, -110, 87, 106, 121, 0, -47, 2, -68, -67, 53, 74, -106, 108, -58, -22, -105, 107, 78, 5, 21, -65, -72, -52, 58, -92, 28, -36, -110, -23, -31, 18, 88, 79, -28, -49, 85, 20, 92, 64, -68, 20, 4, 105, 33, -110, -84, 11, -79, -14, -16, -74, 119, 119, -89, -114, -99, 118, 119, -5, 75, 61, 125, 3, -4, -125, -110};
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
    msg.setTimeStamp(0.7143175307248544);
    msg.setSource(30790U);
    msg.setSourceEntity(160U);
    msg.setDestination(42900U);
    msg.setDestinationEntity(212U);
    msg.seq = 14577U;
    msg.sys_dst.assign("CLWYJHSKZQUTCPWMJITAIXEMRVYDXXNWCSSNUTGPKDABTHWNQYEBAEEWMVKHOGWCIIXJOVTKLTDDJRVIERHSTPCBUUHDANXMXUFBZRRLZOOQOYJFPJVSZVSRYNUPSSMTFCVSBJRCSFFARWRGUGPPLH");
    msg.flags = 148U;
    const char tmp_msg_0[] = {-74, -69, -85, -92, 40, -128, -115, -81, 87, 101, -37, 56, -19, 108, 60, 56, 86, -86, 121, -100, -121, -48, 33, -127, 54, -1, 3, 56, -115, 109, -12, -52, 110, -1, -35, -18, 109, 22, 109, -102, 9, 49, -92, 109, -64, 101, 2, -24, -28, -5, 116, -59, 107, 35, -87, -85, 81, 56, -38, 65, -23, 96, 41, 95, -111, 72, -64, 108, -72, -99, 69, 92, -84, 20, 19, 70, 36, 8, -38, -3, -8, -49, 35, 79, -104, 104, -20, -104, -114, -103, -41, 82, -2, -38, 21, 82, 90, 110, 18, -12, 53, 43, 81, -93, 1, -10, -36, 14, 119, -31, 23, 106, 111, -12, 45, 79, 78, -16, -95, -31, -76, 33, -116, -101, -88, -45, 26, -49, 89, 48, 98, -2, -35, 68, 85, 120, -20, -42, -72, 42, -39, -84, 95, -22, 124, 9, -96, -119, -61, -17, -53, 49, 58, -106, 118, 90, -10, -61, -42, 99, -114, 46, 118, 17, -84, -38, -23, 27, -12, -112, -35, -109, 122, 99, -77, 27, 96, -63, -63, 126, 42, -8, 114, 104, -110, -60, -71, -75, 63, 77, 75, 22, -119, 87, 45, -115, 28, -21, -10, -96, -48, 70, 85, 18, -68, 119, 114, 45, 125, -91, -54, -109, -96, -52, 33, 32, -7, -8, -11, 104, -66, 114, -64, 24, -40, -19, 10, 67, -72, 84, 112, 91, -74};
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
    msg.setTimeStamp(0.8156687559811404);
    msg.setSource(8524U);
    msg.setSourceEntity(141U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(176U);
    msg.seq = 50023U;
    msg.sys_dst.assign("HEQJRFBVXREEDYAFQPLEULHHEOUDLOEYJDDPOMGMZXUSAOCMKCKZCLPYICIGS");
    msg.flags = 79U;
    const char tmp_msg_0[] = {-68, -56, -40, 16, -57, 45, -74, -100, 25, 22, -94, 80, 57, 103, 117, -108, -119, -94, -4, 27, -107, 76, 90, -86, 105, 58, -71, -11, -85, 101, -13, 91, -72, 92, 104, 82, 13, 52, 80, 111, -58, 108, 54, 95, -89, -43, 8, 23, -12, -103, -108, -96, 109, 97, -55, -38, -19, -94, -74, -49, 57, 15, 82, 113, 70, 40, -109, -50, 20, -82, 74, 61, 105, -53, 6, 100, 40, 118, 75, 125, 16, -61, -79, 12, -45, -90, -111, 48, -57, -73, -31, 83, -67, 103, 24, 92, -71, -121, -12, 53, 45, -1, 11, -75, 106, -90, -2, -3, 21, 120, -19, 8, 27, 77, -23, -2, -22, 55, 112, 86, 113};
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
    msg.setTimeStamp(0.29420614206935514);
    msg.setSource(4355U);
    msg.setSourceEntity(48U);
    msg.setDestination(53317U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("EDNNIKXGZKLFQLVYKYFKWINRHUAEOBTUODIYVYMKTJQPWFGMISVCYUEJRIMKGLMFJDEXCHTVLPAQBHJLZEUQQGVJCXOAVFSRHADUIOKCLDOHEWHWRMHWKNVKOGRRWOABCLTZAUNFBXUDDQAXTHFYZNNOJFXKA");
    msg.sys_dst.assign("SFQVGAZCLWSEJVNNJOJRWGVAQKCXGNHQFCGBAJMHPYJRXCYKQRSXODAUNUKEPKPQBRNCGFBXMNCPHMOPIXGRJXACTOEKICONIKYLEVMZ");
    msg.flags = 174U;
    const char tmp_msg_0[] = {-17, 31, 21, -124, 111, -7, 57, 3, 112, 56, 73, -7, 35, -63, -53, -126, 77, -90, -60, -20};
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
    msg.setTimeStamp(0.6204750495455154);
    msg.setSource(4365U);
    msg.setSourceEntity(252U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(186U);
    msg.sys_src.assign("LOEJCKBIWUJFDAIYOMTCQD");
    msg.sys_dst.assign("AYURVTFCZTDSXRZOBEJMEFYHTGAUDZQSLHQQYEBRXFPIAIMPVVFDCPMXOIJNQCWMYRNEHVXDKSGXTWVMSZJJKBLTBPPAFJOQGLWGVYRLAIKUGSKREEYWBUTBYHSFDECFHXMIURLLCDOOLUSZELIKROALXSWQZYNKRFSUIHOWVOGOJJNFOHYIBWNMCWEJDNSHTNZMKATBUIRVAVPXCQDPWPN");
    msg.flags = 144U;
    const char tmp_msg_0[] = {-100, -18, -126, -51, 113, 62, 46, -91, -63, -115, 84, -71, 96, -124, -102, 99, 31, -23, 11, -40, 92, -90, -80, -108, 120, -61, -19, -122, -48, 85, -93, 23, 105, 86, -120, 68, 22, 116, 101, 86, 23, 63, -77, -70, -59, 126, 88, -27, 6, 111, -121, 17, -68, 96, 26, 60, -112, 86, 107, 26, 18, -95, 97, -80, 99, 92, 58, -63, -53, 116, 55, -106, -1, 109, -77, -6, -116, -19, 7, -66, -120, 109, -104, -60, -61, 113, 113, 20, 69, -91, 51, 64, 20, -83, -123, -113, 6, 125, 10, -88, -70, 118, 83, 109, -53, 15, 68, -94, -78, 114, 67, -119, -93, -17, 46, 23, 40, 28, -5, -21, -123, -3, 72, 92, 55, 101, -46, -88, -27, -109, -31, -127, -81, -1, 98, 95, -66, 111, -73, 56, 57, 74, -92, 15, 31, -70, -77, -9, 33, -105, -26, -95, 14, 114, 75, -61, -13, -44, -123, 79, -10, 24, 93, 78, 125, 56, -118, -100, -63, -40, -118, 42, -39, -75, 65, -103, 48, 117, 86, 5, -70, -50, 79, -69, -120, -7, 91, -65, -16, 30, 56, -26, 9, -51};
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
    msg.setTimeStamp(0.09179333211512808);
    msg.setSource(38461U);
    msg.setSourceEntity(189U);
    msg.setDestination(25271U);
    msg.setDestinationEntity(236U);
    msg.sys_src.assign("XMHQBEBFXTRUOPYPWHEIXJCQHCREIYZLJDSJHUDVXIUBUNJGSYUKBZSPBQGUXCDL");
    msg.sys_dst.assign("CJIOHYWGJJFWKJQMVZJUZJJTNBTMGXGURRPXCMLJPARVVTIFIYOLCCMAYURVENVEELXLEDPHPZULPCYQAHNVEYWXSVFONSGMIFNNYSIBBDGYXFYGBREZGUXMRZPKAUPEECCHXLQNYQWNBJSXLQ");
    msg.flags = 57U;
    const char tmp_msg_0[] = {30, 63, 106, -90, -85, 94, -44, -82, -128, -76, -4, -89, 2, -56, -23, -102, -105, 1, 7, 85, -47, -72, -36, 86, 8, -55, -45, 115, -91, 53, -24, 123, -121, 18, 71, -97, -128, 28, 2, -31, -54, -20, -74, 11, -4, 88, -19, 1, 120, -39, 70, 95, -104, 124, -30, 7, -99, 33, -55, -35, -44, -104, -39, -53, -93, 43, -108, 14, -15, 84, 116, 29, -51, 42, 102, -97, 15, 41, 124, 93, -118, 3, 99, 100, -5, -110, -8, -118, -82, 20, -128, 81, -106, -109, -32, -70, 126, 112, 78, -89, -100, -23, -66, -34, 0, -38, 68, -52, -59, 117, -78, 31, 84, -59, -48, -78, 41, 2, 9, -43, -42, -5, 80, 7, -119, 116, -49, -2, -32, 45, -8, -46, -99, -4, 104, 23};
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
    msg.setTimeStamp(0.7198309844302442);
    msg.setSource(54604U);
    msg.setSourceEntity(244U);
    msg.setDestination(13134U);
    msg.setDestinationEntity(187U);
    msg.seq = 8411U;
    msg.value = 254U;
    msg.error.assign("RDNNAKKRCVCSLYRTAXGMVBFQUTEXOMCZZLUGFUOZYPDCIGBSTJRVANFFWDSLLRMTDJYBUGIAJYTGEPRYJV");

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
    msg.setTimeStamp(0.3110424240031652);
    msg.setSource(3226U);
    msg.setSourceEntity(236U);
    msg.setDestination(18400U);
    msg.setDestinationEntity(9U);
    msg.seq = 52400U;
    msg.value = 26U;
    msg.error.assign("QXBUWSVUISUVNGNWWTFYJYWIHWCZZDXBBCGJPLAQMSRFVQH");

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
    msg.setTimeStamp(0.6734467541131);
    msg.setSource(32166U);
    msg.setSourceEntity(150U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(207U);
    msg.seq = 45103U;
    msg.value = 36U;
    msg.error.assign("JEKNREFXBWJOPMTZCBJPVRXMMHHDCSZGCLLWIINUPEGLQCHQVNDSYYWUQCZASNKGKDXOWRJZSFPDQLEABJNXPLYIRGKLBWJYEHDTOCGXFDJRPPIDRYRZRCBZMQCHUGDULMSETYXHQYZUGAVZWOVFIOSQAWOAKQCHFZTSENBNPAZPJBARMOEMTYDSLQESXIWTUXFWTUXUAJFUIVNLOMOJXMSH");

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
    msg.setTimeStamp(0.06631617508433751);
    msg.setSource(11363U);
    msg.setSourceEntity(239U);
    msg.setDestination(50927U);
    msg.setDestinationEntity(186U);
    msg.seq = 53757U;
    msg.sys.assign("OZWDOGKRDFQIKSZHRTIUUJHAYXBYLMBJFXEPNJARMZDHZEWGAMCRXZLHMXWPBLPDKZLIUSSDCKMBIKEPLIZPPGVEJRCFMVNHNOIBAYXPXJSZSROOMEVFGTDQTGHXFDGIVYGTBGZQWAPCKWYDTSLJHYTRACRDRNUYCBUKSNBELVTQAYNMQNXUXNXUVEIVAFQHOJZFBJKCLVTUSHVYFIJ");
    msg.value = 0.2128140690542556;

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
    msg.setTimeStamp(0.09841475832931079);
    msg.setSource(26059U);
    msg.setSourceEntity(168U);
    msg.setDestination(33056U);
    msg.setDestinationEntity(175U);
    msg.seq = 7404U;
    msg.sys.assign("IOYYBVLRXMLCBNXCOMTLDOTJERWVGGELUVYZJWLVABXKFJPAKHEAUKSYRHUSHHJNZZXF");
    msg.value = 0.39634118757492454;

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
    msg.setTimeStamp(0.7312334204025096);
    msg.setSource(51512U);
    msg.setSourceEntity(201U);
    msg.setDestination(18808U);
    msg.setDestinationEntity(104U);
    msg.seq = 61562U;
    msg.sys.assign("CWRDZBEWOESESLFOBZNEPQCFAXBROGBGYKTRKAATECJACXPJIWFQSISPPUZWTHHYXTHMIVFUMXULZPCPYHZBYNVGSNAAZQYZHXUDFIMMIGMADMOGSEDJTFDQZUID");
    msg.value = 0.6282819462417144;

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
    msg.setTimeStamp(0.7693731892854532);
    msg.setSource(32505U);
    msg.setSourceEntity(55U);
    msg.setDestination(5760U);
    msg.setDestinationEntity(141U);
    msg.action = 108U;
    msg.longain = 0.774914282611989;
    msg.latgain = 0.10449169919215373;
    msg.bondthick = 2843132794U;
    msg.leadgain = 0.06816933959228655;
    msg.deconflgain = 0.3504124424495558;

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
    msg.setTimeStamp(0.4698207333484624);
    msg.setSource(5989U);
    msg.setSourceEntity(75U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(245U);
    msg.action = 24U;
    msg.longain = 0.16950347399706467;
    msg.latgain = 0.5748339558937655;
    msg.bondthick = 2323896251U;
    msg.leadgain = 0.6449241900738956;
    msg.deconflgain = 0.2370698828578638;

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
    msg.setTimeStamp(0.39055527054444117);
    msg.setSource(20678U);
    msg.setSourceEntity(214U);
    msg.setDestination(64852U);
    msg.setDestinationEntity(87U);
    msg.action = 86U;
    msg.longain = 0.8638867143034022;
    msg.latgain = 0.6547699295797351;
    msg.bondthick = 399213815U;
    msg.leadgain = 0.5453570026093938;
    msg.deconflgain = 0.7023409542852855;

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
    msg.setTimeStamp(0.31933941755014006);
    msg.setSource(8312U);
    msg.setSourceEntity(190U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(148U);
    msg.err_mean = 0.36157075464465227;
    msg.dist_min_abs = 0.17581004292999491;
    msg.dist_min_mean = 0.5496170256002907;

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
    msg.setTimeStamp(0.2394982139420999);
    msg.setSource(33605U);
    msg.setSourceEntity(67U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(110U);
    msg.err_mean = 0.09513793499740242;
    msg.dist_min_abs = 0.3706712581556264;
    msg.dist_min_mean = 0.44870265719134417;

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
    msg.setTimeStamp(0.6149406271754746);
    msg.setSource(16368U);
    msg.setSourceEntity(196U);
    msg.setDestination(58215U);
    msg.setDestinationEntity(175U);
    msg.err_mean = 0.8815796361527468;
    msg.dist_min_abs = 0.2483885626254161;
    msg.dist_min_mean = 0.6071483260126841;

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
    msg.setTimeStamp(0.8090390617726447);
    msg.setSource(37505U);
    msg.setSourceEntity(217U);
    msg.setDestination(2128U);
    msg.setDestinationEntity(109U);
    msg.uid = 87U;
    msg.frag_number = 143U;
    msg.num_frags = 126U;
    const char tmp_msg_0[] = {35, 47, -106, 29, -43, 10, -34, -43, 106, 12, 56, -122, -118, 26, 4, 38, 126, 56, 12, 44, -72, -121, 56, 15, -111, -24, 67, -79, -55, -126, -25, -123, -65, -82, 5, -128, -123, 114, 87, 106, 39, -23, -78, -16, 108, 67, -43, -98, 104, -27, -91, 85, -81, -28, 21, -85, 112, 14, 5, -52, 52, 2, -63, -26, 9, 110, 18, -25, 29, -24, -70, -67, 57, -91, 69, -33, 79, -94, 120, -30, 32, -3, -73, -68, -95, 84, 54, 112, 82, -121, -33, 66, -81, -4, 19, -91, -8, 67, -116, 18, 39, 18, -51, 99, 25, 7, -112, -6, 15, -8, -3, -9, -72, -7, 58, 100, 118, 109};
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
    msg.setTimeStamp(0.9371555070986765);
    msg.setSource(20887U);
    msg.setSourceEntity(29U);
    msg.setDestination(37773U);
    msg.setDestinationEntity(99U);
    msg.uid = 177U;
    msg.frag_number = 68U;
    msg.num_frags = 242U;
    const char tmp_msg_0[] = {-82, -1, 9, 62, 72, -120, -3, -69, 114, 18, -66, -116, 123, -106, 14, 95, -68, -72, 100, 120, 89, 57, -17, -88, -80, 48, -42, -120, -34, 41, -118, -106, 35, 122, -39, 7, -123, -89, -128, 36, 38, 118, 21, 67, -122, -7, 86, -81, -46, -125, 10, 60, 27, -112, -65, -30, 100, 43, 86, -96, -89, -16, -103, 66, 84, 66, -24, 18, -7, -66, 0, 62, -21, -79, 119, -110, -55, -3, 80, -39, -86, -84, -51, -93, -69, 5, -99, -109, -105, -91, -10, -57, -84, 119, -95, -80, 73, -122, 50, -18, 92, 102, 51, -118, 44, -15, 81, 73, 62, 82, -61, -109, 47, -116, -76, -61, 82, -113, 109, 42, 121, -40, 31, -6, 118, -3, -85, 91, 33, 8, -24, 118, 114, -103, -106, 61, -1, -106};
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
    msg.setTimeStamp(0.17242784992009486);
    msg.setSource(46760U);
    msg.setSourceEntity(152U);
    msg.setDestination(42184U);
    msg.setDestinationEntity(74U);
    msg.uid = 5U;
    msg.frag_number = 61U;
    msg.num_frags = 141U;
    const char tmp_msg_0[] = {20, -108, 113, -16, 99, 21, -22, 74, -75, 38, -115, -56, -46, 48, 124, 9, 108, -114, 120, 117, -98, -126, -113, 55, -18, -109, -104, 3, -73, -45, -63, -50, -2, 38, 3, 27, 93, -103, -102, -120, -125, 68, 45, -117, -69, -110, 26, 20, 81, 90, 31, 80, 64, 42, -78, -124, 118, 100, -54, 91, -45, -56, -26, -63, -33, 12, 104, -6, -41, 13, 0, 89, 26, 31, 54, -12, -3, 56, 5, 0, -50, -59, 111, -45, -68, -30, 94, -126, -6, 49, -14, -74, 18, 109, 104, -24, 27, -45, 28, 24, 58, 40, 75, 65, 94, -73, -13, 85, -17, 2, 114, 55, 40, 75, 32, -34, -19, -89, 121, -45, 1, -59, -106, 41, 125, -23, 93, -77, 18, -43, 99, -44, 108, 75, 46, -39, 83, 10, -53, 42, -9, 126, 94, 27, 124, -108, -29, 2, 10, -80, -77, -12, 111, -64, 84, -3, 91, -81, 85, -96, 10, -47, -15, 76, 28, 4, -48, 121, 106, -39, 34, -122, -18, 66, 93, -87, 34, -64, 57, 79, -44, 91, 93, -82, 97, -14};
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
    msg.setTimeStamp(0.606648806032308);
    msg.setSource(62259U);
    msg.setSourceEntity(101U);
    msg.setDestination(38732U);
    msg.setDestinationEntity(217U);
    msg.content_type.assign("ZDSRXSOLTEEOTBYYVQNPQYOHLJHUFFHYWPNUQPMHMICNSOGTWIMZHPRMQTPENNBDYKEWCCUXOZONGUQSCRKIGQNLAJOBJBPAOENZCNGDF");
    const char tmp_msg_0[] = {112, -79, 19, -108, 37, -7, 17, -111, -124, 91, -98, 119, 94, -92, 72, -32, 51, 56, -43, -67, 126, 28, 41, -54, 74};
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
    msg.setTimeStamp(0.21673828844647436);
    msg.setSource(43789U);
    msg.setSourceEntity(103U);
    msg.setDestination(31000U);
    msg.setDestinationEntity(75U);
    msg.content_type.assign("XTDGOURMHRDQCHOKEDVAPPUXKNDAFNQYSSNSYBHZRROARGXENWZTOKYINFXFONMOSRDGXLVQUDOPWQEBLSBTWLHYTTPZHKOYKXBSJYPIWIZZQVWAIZBEMEIJUHHNMAMCBGJGHMCGTFUMBGCCFFJSUELTCVLZBGHRBEWDCLZPZWNTVMVJIQYJJAFITDWKVDVYYECDLMWJXUHMPXCRZLKLIOVG");
    const char tmp_msg_0[] = {110, 63, 70, -77, -84, 18, 102, 34, 8, -128, 15, 46, 41, -44, 47, -5, -128, -10, 103, -121, -1, 61, -118, 123, -112, -105, -76, 75, -78, -25, -85, -24, 72, 46, 103, -114, 56, -73, -47, -43, 68, -92, -106, -39, -19, 68, 23, 14, 103, -52, -75, 51, 7, -91, 16, -126, 11, -86, 36, 96, 61, 71, -105, -6, -48, 93, 110, 27, 66, -34, -18, 48, 113, 83, -9, -33, -118, -53, 46, -125, -18, 0, -77, 55, -92, -50, 12, -24, 96, -2, -69, 42, 89, 40, -86, -47, -48, 56, 62, -91, 0, -84, -64, -83, -107, -19, 45, -30, 87, 47, -89, 108, 42, 110, 81, -19, 69, 57, -37, 22, 82, -39, 2, 44, 76, -83, -105, -36, 72, -1, -54, -125, -119, -117, 18, -28, -29, 48, -81, 63, 102, 90, -63, 37, 7, -112, -32, 57, 58, -116, 93, -99, -23, 22, 17, -78, 123, 65, -2, -53, -76, 90, -10, 60, 68, 84, 80, 108, 104, -6, 117, 91, 70, -118, -32, -12, -66, -63, -52, -88, -124, -47, -84, 34, 31, 116, -125, -44, -107, 91, -93, -25, 12, -109, -34, -30, 108, 30, 6, -6, 125, -1, -78, 41, -66, -33, 1, 107, -5, -117, 72, -3, -26, -114, -81, -107, -68, 96, 101, 7, -128, 92, -76, -15, 122, -22, 67, -58, 82, 40, -77, 34, -108, -6, -41, -35, 102, -126, 52, 116, -55, -101, -24, -42, -42, 97, 64, 113, -12, -55, 55, -97, -103};
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
    msg.setTimeStamp(0.8879346581734799);
    msg.setSource(42261U);
    msg.setSourceEntity(62U);
    msg.setDestination(50410U);
    msg.setDestinationEntity(83U);
    msg.content_type.assign("JORCFJJZBYNVZLCERIONGQEWUGULHAOPFTEMXSHBJJMMAHGYCPPCIIENGAWXAAZKDNZWMTQBLXYAZ");
    const char tmp_msg_0[] = {-121, -43, 111, 109, -112, 82, -11, -56, -25, 15, 5, 17, -49, -71, -10, -43, 76, 109, -116, 38, -117, 56, 77, 101, -112, -90, -2, -27, -49, 62, 40, 27, -43, -82, -72, -50, 106, -110, 103, 88, 122, 88, -46, -78, 82, 43, 97, -107, -115, 90, 11, 5, 83, 64, -28, -14, -86, -62, -3, 47, 69, 93, -106, -39, 80, -40, 36, 12, -43, -37, 118, -17, -34, -100, -110, -53, -77, 88, -5, 110, 50, 31, 118, 52, -106, -126, 15, -48, -19, -4, 61, -8, 104, -60, -68, 11, -62, -71, 105, 112, -101, 94, -33, -14};
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
    msg.setTimeStamp(0.9254038783873643);
    msg.setSource(2393U);
    msg.setSourceEntity(100U);
    msg.setDestination(56829U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.1819161178597306);
    msg.setSource(41588U);
    msg.setSourceEntity(132U);
    msg.setDestination(5686U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.5359189952317115);
    msg.setSource(15774U);
    msg.setSourceEntity(27U);
    msg.setDestination(57024U);
    msg.setDestinationEntity(76U);

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
