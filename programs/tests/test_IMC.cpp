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
// IMC XML MD5: ba628e85d287ddf4f0efda7ce5610501                            *
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
    msg.setTimeStamp(0.426628052301);
    msg.setSource(8344U);
    msg.setSourceEntity(134U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(52U);
    msg.state = 104U;
    msg.flags = 94U;
    msg.description.assign("JFNQHJZSNZXCNBBOPKKNJPMXLAHSGAMFSAMF");

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
    msg.setTimeStamp(0.382299125796);
    msg.setSource(56195U);
    msg.setSourceEntity(130U);
    msg.setDestination(4430U);
    msg.setDestinationEntity(180U);
    msg.state = 15U;
    msg.flags = 169U;
    msg.description.assign("ZPSGQTWWYDJCNMFFMJRIAEAUUSXUFRLERIZTORPHAINSTDIAHBLPCWKRYWXUATYDCREXOILHVBMCITVLYNSJLHLGLWEJIUAYHXOFPSSMOKGDXZBCPYTKGPMQUPFMNVLBC");

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
    msg.setTimeStamp(0.933043403904);
    msg.setSource(24072U);
    msg.setSourceEntity(253U);
    msg.setDestination(50495U);
    msg.setDestinationEntity(198U);
    msg.state = 14U;
    msg.flags = 79U;
    msg.description.assign("LXRLMBKNQWGNUQCTJJTMIHJSMUCUIKVVEYABKSZBKBSSXNEFYPXQREHQMYBQJNWVUDYRLSDZMSCZCJYPAOYJXBQTJNEULGQVFKADNCRSTWHCXBFPHHCPOHWDVSXXOU");

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
    msg.setTimeStamp(0.444477577853);
    msg.setSource(51389U);
    msg.setSourceEntity(234U);
    msg.setDestination(37197U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.911087672235);
    msg.setSource(55802U);
    msg.setSourceEntity(98U);
    msg.setDestination(29401U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.875628189709);
    msg.setSource(32672U);
    msg.setSourceEntity(94U);
    msg.setDestination(27257U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.596037914186);
    msg.setSource(56203U);
    msg.setSourceEntity(3U);
    msg.setDestination(31875U);
    msg.setDestinationEntity(118U);
    msg.id = 231U;
    msg.label.assign("QMHEJYOXYJLVRNFKLF");
    msg.component.assign("PSQPLOPLCYPDFUUERMEBRHQTNTJYMDBGAVOVUODRVNZLXMNEEHBQYFWFMCXJDNCUFWTDXTZQQJMUTUACSKKOYSKXKZFOOGLECGKSSVOBJBTPMYLVGWWVLICHSATHCFJRHYWSTNOHTWAFEDFVUPNTXVQQJCAGYBOJIFCLGKPGDXZARXUMZLRHVQPRIRAGQDBK");
    msg.act_time = 20805U;
    msg.deact_time = 4081U;

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
    msg.setTimeStamp(0.0785760520436);
    msg.setSource(1888U);
    msg.setSourceEntity(189U);
    msg.setDestination(30223U);
    msg.setDestinationEntity(155U);
    msg.id = 118U;
    msg.label.assign("QSTDSFYTOJBHXQCINDHFYEXHPNSXMQCPPRCAAONQKBVHFILQIIJKHJCGYTEYQEGPRJZLD");
    msg.component.assign("UVYSVTRTCZZWDDGUQKQBBOUQJRPYYHCETMNWMXHNXUEWIEJRGEJFSVSBFPIAFYUPVNWVRWCWJEJDKNTEZNMFAEMAHWGQFFLXYBIDUJMDAONDOLRTCCGVPTUXETRPJCDBPSDLGHRZAOTQBUKLTCQZPTWIKJO");
    msg.act_time = 41535U;
    msg.deact_time = 25535U;

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
    msg.setTimeStamp(0.88934653148);
    msg.setSource(42655U);
    msg.setSourceEntity(195U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(89U);
    msg.id = 116U;
    msg.label.assign("WATFWVKUGSEDIPAFSTTECUO");
    msg.component.assign("OTTGLRQLZIHGVLVIZXHUKMGDKRHBSBKQJYXKDTEPVAMMTYTQAILJHXBROFYRRJLLOZUBXASVNCZVWWHTNANVHJWWLKAGZCCQZIOUFEPYTHYFMLMFCDXHNWMCUQPNMBSCEIDJAEFBWJONFQPXEOVAIPZQWPYSUHYOFSRDKNHPBGKNZSIXTQRGIOQJMYJEDNUPRCAEG");
    msg.act_time = 37890U;
    msg.deact_time = 59550U;

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
    msg.setTimeStamp(0.0279977855065);
    msg.setSource(49408U);
    msg.setSourceEntity(158U);
    msg.setDestination(61746U);
    msg.setDestinationEntity(9U);
    msg.id = 254U;

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
    msg.setTimeStamp(0.651408252805);
    msg.setSource(29017U);
    msg.setSourceEntity(163U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(129U);
    msg.id = 26U;

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
    msg.setTimeStamp(0.276245321076);
    msg.setSource(56075U);
    msg.setSourceEntity(235U);
    msg.setDestination(56717U);
    msg.setDestinationEntity(157U);
    msg.id = 225U;

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
    msg.setTimeStamp(0.748840111236);
    msg.setSource(40368U);
    msg.setSourceEntity(138U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(231U);
    msg.op = 196U;
    msg.list.assign("KDDHPZGOPJZLNXUWQMTAPTMQWNTARIQSJFBLHDAYEBVIGNYEVVRBDNAWKLASMSDQCYQAJXCYGRHKXKFVPGOCNIJFBIZWCRUJICMUAZTKHXHWVBOLDPSTBBSYZMNCSKUSWEXVTXIPPFHJUWYOYEQOGDKKBQNRUJVDXOQNISMMYZOERHOIVROURLRZCXGIKMSFLZYDHWBARXXQIVQWYCFJTGPNMHTLTLUETEEC");

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
    msg.setTimeStamp(0.394394923924);
    msg.setSource(25533U);
    msg.setSourceEntity(64U);
    msg.setDestination(27653U);
    msg.setDestinationEntity(204U);
    msg.op = 146U;
    msg.list.assign("HKVCLFRPQUSSEBRAIJBGYIVVJDNXRRZYXHRKVOQZOVCITEXRGVJUYNDJFYHIBXOAPOAHMNMTLZFDMVGVOTHTQABZTQAZKDGOOBAALIXTWNXUZEYYNFLICHHQDKINTUZURYVQEZKLVCXSSUQDRWUCBWLUPLSEPWJMCGRMCHJBIPMSPHQFC");

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
    msg.setTimeStamp(0.41358749501);
    msg.setSource(61027U);
    msg.setSourceEntity(5U);
    msg.setDestination(35659U);
    msg.setDestinationEntity(216U);
    msg.op = 50U;
    msg.list.assign("ZVDLVEUCJQSKHEMEQFGBLVQIANOFJWBPUIVBHRQNHOBTEANFQUTKDETFIKWKDAXOPJJTAVPSBNRDHXSFAWOHOMPUGIGYSXOIFDRJMRCYBDHUZYXZIWRIPIYCQZNPWRLVTBUBXAXUMKMZLCWUPHMGKSCHLTEGVJNXGRGRFMQXJAOP");

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
    msg.setTimeStamp(0.250301288177);
    msg.setSource(45364U);
    msg.setSourceEntity(0U);
    msg.setDestination(15647U);
    msg.setDestinationEntity(137U);
    msg.value = 71U;

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
    msg.setTimeStamp(0.00495585728865);
    msg.setSource(25590U);
    msg.setSourceEntity(222U);
    msg.setDestination(62063U);
    msg.setDestinationEntity(207U);
    msg.value = 136U;

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
    msg.setTimeStamp(0.195314926485);
    msg.setSource(46068U);
    msg.setSourceEntity(57U);
    msg.setDestination(60534U);
    msg.setDestinationEntity(202U);
    msg.value = 98U;

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
    msg.setTimeStamp(0.557449810265);
    msg.setSource(5722U);
    msg.setSourceEntity(127U);
    msg.setDestination(60096U);
    msg.setDestinationEntity(17U);
    msg.consumer.assign("PQSWEJGXLJSOZEXUKRCSTNEKMVLBVTQESNQJIUTLUOAVAYNJCQSHHYYHKXUTQIXLWMBQIDRNZQDIAYMAITBUEQISQTPRILAYXHVPGBVUMGGCCCWDGOYGWODRPPPMRILHWFBWZOAGDEBVPNGZFTEPAPJSUNJOLXCTLCDYFKZZHKTMJYXFSFQVFISIRBXCRODDDAPCOMWO");
    msg.message_id = 19707U;

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
    msg.setTimeStamp(0.77116532257);
    msg.setSource(38549U);
    msg.setSourceEntity(39U);
    msg.setDestination(50311U);
    msg.setDestinationEntity(146U);
    msg.consumer.assign("RSWFMLJPPLNSOHZARMVRIRDQPEGUOFVLUUDOPOXBHWYGSDRVWZFCPBIXXEXFBWTLKYJJW");
    msg.message_id = 26713U;

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
    msg.setTimeStamp(0.0459284338765);
    msg.setSource(36550U);
    msg.setSourceEntity(3U);
    msg.setDestination(9924U);
    msg.setDestinationEntity(157U);
    msg.consumer.assign("VFRYMBYNCBCKZKZWWKGOZSQRJIRCCUZTPFSFLJYMQOCUVHIJBWNDVJLKDTAHJGALPEGRNRGQPRRATTVILCLQBGQODRNXDMIYSUPOKBIHLHBFIDMTAYWJUEHBQDWJWOSMEKDFYDXOXNUXNGBEYMYACIFLQXNAQQHFCTEDH");
    msg.message_id = 35662U;

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
    msg.setTimeStamp(0.0714533156606);
    msg.setSource(24007U);
    msg.setSourceEntity(90U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.975532144373);
    msg.setSource(37353U);
    msg.setSourceEntity(156U);
    msg.setDestination(25264U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.561475216417);
    msg.setSource(51558U);
    msg.setSourceEntity(4U);
    msg.setDestination(8504U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.403245706843);
    msg.setSource(36145U);
    msg.setSourceEntity(19U);
    msg.setDestination(18558U);
    msg.setDestinationEntity(18U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.202393287656);
    msg.setSource(48948U);
    msg.setSourceEntity(182U);
    msg.setDestination(35572U);
    msg.setDestinationEntity(96U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.979875227074);
    msg.setSource(23993U);
    msg.setSourceEntity(152U);
    msg.setDestination(2984U);
    msg.setDestinationEntity(12U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.244540475548);
    msg.setSource(22946U);
    msg.setSourceEntity(93U);
    msg.setDestination(27460U);
    msg.setDestinationEntity(240U);
    msg.total_steps = 53U;
    msg.step_number = 34U;
    msg.step.assign("EJWAUTLAJDAVELDDLIMQLUQRTZFHTFICXNPFGTYQTMVKBWCCQKFTWDIXDNXLWIOKKJVSFSXJRXMOIHMHEFRCORUZPVHNAJRXVSHGZCZEXUJRVQLFVTMZPWQLAKABJLUAYMGOCUPQMESMCBPIYGJKHSKPYUWBIEYZOVISDWAPZBNHGTXNROSDSLKKBLYECFVUMDFZWCPEMRDHRZTQJBXUXNGHANYOGNVNYJOFGBORINGKQDYWWZPEPHGTQBIS");
    msg.flags = 28U;

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
    msg.setTimeStamp(0.743066335264);
    msg.setSource(15033U);
    msg.setSourceEntity(203U);
    msg.setDestination(47154U);
    msg.setDestinationEntity(42U);
    msg.total_steps = 93U;
    msg.step_number = 75U;
    msg.step.assign("FIPMIDREJTQHRMGNDUTLFXTALFZRLOCKDSYKOXBMJCEFOKRIIYSDDJZNDCUXVQRSNPBYCNZYWPSPDQKHKEHIXHULAYBDOGSUIBPNVZBDEYIWGVJSXTOESVGAGXKUTNIYOPATCZCFSFUNIMELNGQUHCGHYMALX");
    msg.flags = 34U;

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
    msg.setTimeStamp(0.082702843962);
    msg.setSource(42623U);
    msg.setSourceEntity(69U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(72U);
    msg.total_steps = 68U;
    msg.step_number = 152U;
    msg.step.assign("ZOJWXYDVMLUEEPRGFVWVBCGEAVUHLPLISKIRMEUUMFPPTIMQTLDBAXX");
    msg.flags = 192U;

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
    msg.setTimeStamp(0.145446398069);
    msg.setSource(54191U);
    msg.setSourceEntity(208U);
    msg.setDestination(47812U);
    msg.setDestinationEntity(199U);
    msg.state = 85U;
    msg.error.assign("LFEPPRPTIHVUYMAVUNJMZIPEYCXPCGZWSLWZSBPVNC");

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
    msg.setTimeStamp(0.0384110874973);
    msg.setSource(46185U);
    msg.setSourceEntity(3U);
    msg.setDestination(15101U);
    msg.setDestinationEntity(120U);
    msg.state = 214U;
    msg.error.assign("JHOIIEOWQIYNSA");

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
    msg.setTimeStamp(0.492005777218);
    msg.setSource(49651U);
    msg.setSourceEntity(249U);
    msg.setDestination(61230U);
    msg.setDestinationEntity(237U);
    msg.state = 220U;
    msg.error.assign("NHBSEFMMNYSOQOZXHHQJKWPKXTZLSMRCDXDUQRDNTFPLGFEQMJQYWLLVIAEUKKIBIVYVSRPJDRPBOYCTEVHIECQXVCROYEISAGOQLCSCJNMIDPVPNHEIUEEOGAADNKSMLTCMPAGXCURLGRDBHRWUWCYMFZFJLHHYFWQTWGVSJEB");

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
    msg.setTimeStamp(0.571619848471);
    msg.setSource(41906U);
    msg.setSourceEntity(230U);
    msg.setDestination(38763U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.384260868466);
    msg.setSource(15456U);
    msg.setSourceEntity(203U);
    msg.setDestination(22113U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.98349260866);
    msg.setSource(41124U);
    msg.setSourceEntity(199U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.916190211207);
    msg.setSource(61738U);
    msg.setSourceEntity(79U);
    msg.setDestination(36112U);
    msg.setDestinationEntity(15U);
    msg.op = 227U;
    msg.speed_min = 0.910661715292;
    msg.speed_max = 0.406182525661;
    msg.long_accel = 0.39764530011;
    msg.alt_max_msl = 0.391258458411;
    msg.dive_fraction_max = 0.0487774022501;
    msg.climb_fraction_max = 0.872085473747;
    msg.bank_max = 0.553732537787;
    msg.p_max = 0.858615117289;
    msg.pitch_min = 0.0123041619255;
    msg.pitch_max = 0.639900711781;
    msg.q_max = 0.281928442688;
    msg.g_min = 0.780896094372;
    msg.g_max = 0.775532243332;
    msg.g_lat_max = 0.523302764493;
    msg.rpm_min = 0.987970390677;
    msg.rpm_max = 0.825278340954;
    msg.rpm_rate_max = 0.869869537375;

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
    msg.setTimeStamp(0.399521009416);
    msg.setSource(23678U);
    msg.setSourceEntity(213U);
    msg.setDestination(37611U);
    msg.setDestinationEntity(22U);
    msg.op = 203U;
    msg.speed_min = 0.359015599443;
    msg.speed_max = 0.948339784371;
    msg.long_accel = 0.464276629322;
    msg.alt_max_msl = 0.847121844046;
    msg.dive_fraction_max = 0.360492090714;
    msg.climb_fraction_max = 0.836515978031;
    msg.bank_max = 0.348918645888;
    msg.p_max = 0.640207685131;
    msg.pitch_min = 0.473404688358;
    msg.pitch_max = 0.149428613097;
    msg.q_max = 0.263704274655;
    msg.g_min = 0.968049390827;
    msg.g_max = 0.426100902993;
    msg.g_lat_max = 0.992005816694;
    msg.rpm_min = 0.356607787768;
    msg.rpm_max = 0.269654940101;
    msg.rpm_rate_max = 0.700978209713;

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
    msg.setTimeStamp(0.0683392265265);
    msg.setSource(40907U);
    msg.setSourceEntity(36U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(208U);
    msg.op = 113U;
    msg.speed_min = 0.0750452621774;
    msg.speed_max = 0.697058521904;
    msg.long_accel = 0.91973182971;
    msg.alt_max_msl = 0.102717456593;
    msg.dive_fraction_max = 0.891412931032;
    msg.climb_fraction_max = 0.303113088607;
    msg.bank_max = 0.792073388887;
    msg.p_max = 0.985662684029;
    msg.pitch_min = 0.10487598662;
    msg.pitch_max = 0.405892169824;
    msg.q_max = 0.625855048001;
    msg.g_min = 0.132467898122;
    msg.g_max = 0.563700503188;
    msg.g_lat_max = 0.203724152702;
    msg.rpm_min = 0.223546645941;
    msg.rpm_max = 0.729848605801;
    msg.rpm_rate_max = 0.316868609061;

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
    msg.setTimeStamp(0.214469477116);
    msg.setSource(29866U);
    msg.setSourceEntity(89U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.207635823054);
    msg.setSource(60330U);
    msg.setSourceEntity(115U);
    msg.setDestination(27962U);
    msg.setDestinationEntity(21U);
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FLIONJDYXWIATEZZBKATYCWWVPOFPTTYIVLSHHHGWDGINXIFDFLVQAQBFLXCWVBPOLLKPDDABRSOUJZSPOPBUWJXJDZNEQAKERGVQRCEPMMNMGCBQBROTSRNAYWWZFYHODPHQUXFGOEMGJHJSLSCXFHT");
    tmp_msg_0.predicate.assign("WQQFCIPSWSZORXRJDVJBUTCIYAHXYLJURPDRWNWNRLLDUVDSYXUKUVEUHGKLRHVFGBSILGCDUXKXWEVBPWMBXTEVMGYOPGZKTZQFAZGOKJRATAWXMTSJBGDENWOFNTBLHJGFAPMUQNCNHRYFVOLHOIFMEENCIIKTHCGLQBHEDAKQVFSYNQN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SAJAVKOYENQACDCEBSMFIIUVOGEBTERXPQWVPYGQRCLBMHEHCCTUXIYFXXWCQWDKYUMNVLBOWAEHFJILQGJSUERIHWCTWCGQZZBLOVTXJTZDRWZGKLOJTMREPGDNMAJWZGNPDTNYRBMFVBSIANKNYOCCJUKKVUJDOAZTNDGLHQKQXTN");
    tmp_tmp_msg_0_0.attr_type = 74U;
    tmp_tmp_msg_0_0.min.assign("YUGJHEEZCXXKLLWNMGYHLIMYZGREHHAEWBGTOJFMZRUQUSQINDWNCJRHXLZHSPBYAALGSXBIWNBXAXUERWTLWKVHTIGEFNLJUPVJFMDEDAXJEENDCPYOFBQRILEYSIAKWYFVFUUPCAWNOGOXDHHBIZZZSKCYM");
    tmp_tmp_msg_0_0.max.assign("MAAKOBLYFISXDQQDUTRXSSNUZQNMFKRZYDKGEORWREFYTCVLHFQPPTCMJVNCQGMTQVAGDZPMYWUFHNPPDYNXUGJHFUUREKPGOIEBQXOIHYNWSKWTYQQEELULLVALXADIZCZWDHYPNHNBUKCIDKZCBXPLLOJDVOFBVJBEROOKHGSWSZFUGBVAZHVCLCSTQYOGXJHEORWSBABZKJEIXNM");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.972900901051);
    msg.setSource(41700U);
    msg.setSourceEntity(83U);
    msg.setDestination(40196U);
    msg.setDestinationEntity(95U);
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 249U;
    tmp_msg_0.max_depth = 0.898000097459;
    tmp_msg_0.min_altitude = 0.306233935136;
    tmp_msg_0.max_altitude = 0.246541974437;
    tmp_msg_0.min_speed = 0.170617694646;
    tmp_msg_0.max_speed = 0.514538669296;
    tmp_msg_0.max_vrate = 0.741943697956;
    tmp_msg_0.lat = 0.662899954948;
    tmp_msg_0.lon = 0.960192898844;
    tmp_msg_0.orientation = 0.810615617281;
    tmp_msg_0.width = 0.122394241278;
    tmp_msg_0.length = 0.565520337377;
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
    msg.setTimeStamp(0.162287116676);
    msg.setSource(27189U);
    msg.setSourceEntity(210U);
    msg.setDestination(37944U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.309619691484;
    msg.lon = 0.584935767679;
    msg.height = 0.524163545656;
    msg.x = 0.692304914782;
    msg.y = 0.627400710241;
    msg.z = 0.342279774952;
    msg.phi = 0.273927609448;
    msg.theta = 0.966971517297;
    msg.psi = 0.21779304527;
    msg.u = 0.085814495978;
    msg.v = 0.422047494209;
    msg.w = 0.71875768588;
    msg.p = 0.470342886278;
    msg.q = 0.243298799512;
    msg.r = 0.800013682799;
    msg.svx = 0.655631752414;
    msg.svy = 0.209682517035;
    msg.svz = 0.595536788971;

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
    msg.setTimeStamp(0.225586175515);
    msg.setSource(59477U);
    msg.setSourceEntity(11U);
    msg.setDestination(11341U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.41403962845;
    msg.lon = 0.466101590388;
    msg.height = 0.107743004505;
    msg.x = 0.890499961493;
    msg.y = 0.497884589432;
    msg.z = 0.648120596318;
    msg.phi = 0.873715766354;
    msg.theta = 0.871674363641;
    msg.psi = 0.771456411124;
    msg.u = 0.593304454376;
    msg.v = 0.425487777933;
    msg.w = 0.897152195748;
    msg.p = 0.00441973205007;
    msg.q = 0.431239036682;
    msg.r = 0.739077051121;
    msg.svx = 0.91878224959;
    msg.svy = 0.47470147428;
    msg.svz = 0.100220117314;

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
    msg.setTimeStamp(0.248371844407);
    msg.setSource(38598U);
    msg.setSourceEntity(38U);
    msg.setDestination(65099U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.22196443897;
    msg.lon = 0.487919723347;
    msg.height = 0.853386369075;
    msg.x = 0.45751935528;
    msg.y = 0.241637477478;
    msg.z = 0.376861453339;
    msg.phi = 0.18974590271;
    msg.theta = 0.560542191831;
    msg.psi = 0.332680607107;
    msg.u = 0.196626613902;
    msg.v = 0.20255116126;
    msg.w = 0.56221690651;
    msg.p = 0.013622264721;
    msg.q = 0.58539807428;
    msg.r = 0.548508417466;
    msg.svx = 0.448237819297;
    msg.svy = 0.186243213036;
    msg.svz = 0.0191584154159;

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
    msg.setTimeStamp(0.66794936107);
    msg.setSource(23989U);
    msg.setSourceEntity(72U);
    msg.setDestination(8953U);
    msg.setDestinationEntity(146U);
    msg.op = 243U;
    msg.entities.assign("IWWJXIGNBGAODKIVUDQMKODPGOGWRTWPXGGSKUSVECKESSMCIPRLTLEDJOANSMUTBTWOEISNLAZYRWMDBUIFZXHLZYATRCWXGAPH");

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
    msg.setTimeStamp(0.882486544418);
    msg.setSource(54189U);
    msg.setSourceEntity(148U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(110U);
    msg.op = 122U;
    msg.entities.assign("EQUXAXGTJLLXOVDXJIWZJDNBOWXTBBCEKNHSYWURFITYIDGWCWIMIHYAEPTKSXLUPRBNWYHAFENTMNGEPKEWBMLDPLEHLWK");

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
    msg.setTimeStamp(0.112346726838);
    msg.setSource(42231U);
    msg.setSourceEntity(76U);
    msg.setDestination(56432U);
    msg.setDestinationEntity(0U);
    msg.op = 147U;
    msg.entities.assign("AKYKLNQLPCCCTAJEOESNZYVXONIJGJQPSTXFHGBIOYANOCYQCBNKDHUTRBYKEQBRPSSTBVRMUEJJIMQERHHSGKFKEGJPOWSTWXPXMZLSAXNFVRBUUKWPFTRNLNLDGOFLGWHXWZVECPWAVQIUAHCJIXETFODHRCODWYLLZRJXDWZJOYZQIUZPEUBISYFEMDWRGGMDMQXNHVZGMCS");

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
    msg.setTimeStamp(0.27863880677);
    msg.setSource(52227U);
    msg.setSourceEntity(184U);
    msg.setDestination(30177U);
    msg.setDestinationEntity(216U);
    msg.type = 237U;
    msg.speed = 54268U;
    const char tmp_msg_0[] = {68, 112, 98, 76, 118, -123, 112, 112, -25, 81, -23, 32, -121, -118, -122, -45, -36, 108, 49, -49, 49, 72, -112, -7, -38, 34, 113, 72, 124, -38, -107, 25, -33, -19, -47, -32, -105, 89, -11, 19, 85, -98, 29, 69, -111, -113, 27, 82, 37, -85, -107, -38, 71, 56, -6, -26, 44, -107, 123, 9, 5, 115, -83};
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
    msg.setTimeStamp(0.664681382658);
    msg.setSource(17677U);
    msg.setSourceEntity(251U);
    msg.setDestination(15988U);
    msg.setDestinationEntity(157U);
    msg.type = 57U;
    msg.speed = 23278U;
    const char tmp_msg_0[] = {-4, 78, -96, -72, 16, 53, -60, 41, 20, -86, -103, -116, 83, -67, -3, -57, -10, -117, 25, -67, -19, 57, 94, 28, -46, 50, -9, -119, 87, -39, -127};
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
    msg.setTimeStamp(0.296852878551);
    msg.setSource(28896U);
    msg.setSourceEntity(13U);
    msg.setDestination(34590U);
    msg.setDestinationEntity(194U);
    msg.type = 22U;
    msg.speed = 57475U;
    const char tmp_msg_0[] = {-58, 125, -111, -26, -44, 119, -98, 62, 35, -104, -38, -50, -23, 50, -115, 113, -11, 116, -7, 87, -19, 100, 88, 78, -24, -62, 18, 6, -113, 52, 3, -111, -108, -37, -85, -41, 90, 113, -125, -70, 120, -69, 22, 77, -106, 34, -80, -49, -30, -38, 23, 49, 49, -102, -7, 41, -90, -24, 93, -50, 50, 106, 93, 37, 8, -22, 75, -108, 19, 59, 47, 124, 36, 95, -6, 3, -15, -103, 12, -75, -56, 73, 101, 80, 115, 94, 126, 60, 1, 21, 27, 95, -75, 19, -118, -29, 124, 112, 110, 25, 16, -121, -32, 43, 1, -95, 112, -71, -6, 69, -2, 32, 89, 94, -89, -92, 72, -17, 38, 57, 99, -27, 12, 95, 83, -49, -9, -35, -124, -84, 51, -79, 71, 17, 103, -28, 112, 17, 109, 25, -115, 123, 43, -109, -57, -35, 106, -70, 42, -124, 106, 16, 15, 118, -48, 85, -117, 42, -42, -16, -127, 98, 44, -40, -9, -120, -24, 44, 19, -112, 1, 54, -104, 49, -39, -31, 93, -120, 42, -106, 114, 76, 120, -37, 64, -105, -26, 88, -127, -79, 58, -99, 5, 48, 43, -73, 59, 75, -51, -63, 12, 39, 17, -42, 53, -109, 120, -101, -90, 40, 63, 40, -60, -45, 87, 102, 88, -25, -36, 10, 118, 3, -2, 111, -36, 112, 63, -43, 123, 2, 46, -55, 117, -97};
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
    msg.setTimeStamp(0.803910277926);
    msg.setSource(62029U);
    msg.setSourceEntity(198U);
    msg.setDestination(41960U);
    msg.setDestinationEntity(210U);
    msg.op = 251U;
    msg.tas2acc_pgain = 0.931652901058;
    msg.bank2p_pgain = 0.270360501604;

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
    msg.setTimeStamp(0.151208594216);
    msg.setSource(18594U);
    msg.setSourceEntity(27U);
    msg.setDestination(19816U);
    msg.setDestinationEntity(199U);
    msg.op = 97U;
    msg.tas2acc_pgain = 0.224587891637;
    msg.bank2p_pgain = 0.833739159585;

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
    msg.setTimeStamp(0.0593519483313);
    msg.setSource(1571U);
    msg.setSourceEntity(229U);
    msg.setDestination(32414U);
    msg.setDestinationEntity(35U);
    msg.op = 153U;
    msg.tas2acc_pgain = 0.460064793241;
    msg.bank2p_pgain = 0.695183438648;

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
    msg.setTimeStamp(0.565978809148);
    msg.setSource(2942U);
    msg.setSourceEntity(119U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(15U);
    msg.available = 470493842U;
    msg.value = 83U;

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
    msg.setTimeStamp(0.795062675371);
    msg.setSource(43182U);
    msg.setSourceEntity(182U);
    msg.setDestination(36144U);
    msg.setDestinationEntity(44U);
    msg.available = 1021615437U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.900599977222);
    msg.setSource(38265U);
    msg.setSourceEntity(88U);
    msg.setDestination(54184U);
    msg.setDestinationEntity(95U);
    msg.available = 3878108309U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.944023501744);
    msg.setSource(24329U);
    msg.setSourceEntity(225U);
    msg.setDestination(34319U);
    msg.setDestinationEntity(125U);
    msg.op = 155U;
    msg.snapshot.assign("FXBXWRGMJGDMNMGEHLADLETTTGZRPKRKUMIEOJYEITOFMNLIVNHUHOQQYPIWHYPEICEJSSFDWBGNIAYJDZSFYUBPAUUKQGNQYUGLVXJAQNULZSRWJVRZDECBSVVEAHCYAZKIKBWTKTOFLFAOULHQGLQSXBYKXRSXWCQOVCATO");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.229792800609);
    msg.setSource(25023U);
    msg.setSourceEntity(90U);
    msg.setDestination(51083U);
    msg.setDestinationEntity(55U);
    msg.op = 56U;
    msg.snapshot.assign("DOPURWWKKFWDVQJQCKSYAYSBAOURXAGCDHFTAPMMJZRJIBVUQLEYTAHXMEYOVVMMRTLXVEZSDJPQNNOBCXZRIIGXTJUZOGUNYATDMPITIWYMHOQKTFBQRJXRAIFYEENVYRQD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CJJBSLTRPQJVFJGAQSNFJINOUTEUTNWKRJCXEDASJHITUICOFPPYYVFEZLVSDDVNUKLBCSFXSHSPQMDSFRERQZXBDJGRWKHEIWBNMRYPDCTJUTQBQMCPUIKQYKFWLEVHWKOGMGPPBILZVYQEVSUTFOAMDRBZOPXANPTMWNYAZAOOWMZCZCKBVGXFWTDRAEOXIRDKLGY");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 40034U;
    tmp_tmp_msg_0_0.custom.assign("QOFBRSNAVETMAXXKK");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::HistoricEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.text.assign("KFHXHLZSQGKMAGNRAYXMNFRLETJPTLHENZFBETTGHWRLOHBPIBUNFDDCUBJWYZNDYCSXUKBAIIAOQUTNLMIROXXDZXVAKVKEJQCWOOSXKJCWORBVWHPDQDGDQCTESMAJYPWWPBUMAYLGNGYLWQPVOSOBGQSMNLQFXRIABQF");
    tmp_tmp_msg_0_1.type = 219U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.715407027612);
    msg.setSource(48566U);
    msg.setSourceEntity(230U);
    msg.setDestination(33550U);
    msg.setDestinationEntity(126U);
    msg.op = 98U;
    msg.snapshot.assign("MOAVMJGNAGGDKFBDWUQTLYXSFVZOQJQOHEGDRVIEHRSIBYJDKTBFXKNYSOYZXDFUJJPCNZVTPDIUKRDUYHGELMAUXCHIWCTWXCRYCJEGZHPEFQDWVDVKZWXYADWUHBBOWJLCYVEVLPXTTOBGNWCGQZXLBQNMTQTOXOASIUSQLGIZAHLURHKZPEOARFCVHXQZMYQZGAFNNSKIYJISAWMKPF");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 439172131U;
    tmp_msg_0.start_lat = 0.0763654178566;
    tmp_msg_0.start_lon = 0.224319136329;
    tmp_msg_0.start_z = 0.16311389262;
    tmp_msg_0.start_z_units = 36U;
    tmp_msg_0.end_lat = 0.543455389887;
    tmp_msg_0.end_lon = 0.734550152308;
    tmp_msg_0.end_z = 0.756610285834;
    tmp_msg_0.end_z_units = 136U;
    tmp_msg_0.lradius = 0.701745776548;
    tmp_msg_0.flags = 171U;
    tmp_msg_0.x = 0.314217901376;
    tmp_msg_0.y = 0.196900336092;
    tmp_msg_0.z = 0.00762510936496;
    tmp_msg_0.vx = 0.977519443727;
    tmp_msg_0.vy = 0.646971455396;
    tmp_msg_0.vz = 0.289304463899;
    tmp_msg_0.course_error = 0.232155485974;
    tmp_msg_0.eta = 38825U;
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
    msg.setTimeStamp(0.945834303284);
    msg.setSource(57946U);
    msg.setSourceEntity(59U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(213U);
    msg.op = 120U;
    msg.name.assign("ANRZLCTLQPVGKYESMPEOWUGYTSNAWHKANEMUVQYXZOBAFQQNQDTMRIKEVRHLFWPIMHNYDXJKFSOZXILCHRBUXECELPSORPZCHYWIUMSJZKZTYXIQHWFOCAYKPYFVTMXCBBJZVAQDPUNRGWVXNEUHRWORJVJHHVITLMPCZIABDTGJSXFBWEIUFUGFINBZNZDTBAOQMEMXRLGXBSRKAFDSQBAEPHJQ");

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
    msg.setTimeStamp(0.670630835067);
    msg.setSource(15927U);
    msg.setSourceEntity(229U);
    msg.setDestination(15292U);
    msg.setDestinationEntity(54U);
    msg.op = 50U;
    msg.name.assign("TNDQSEQWXELITEKYVHLMRBXJWAZAJUTHJHSHZQIFAXQGHAURONGFFYSODCLZWUKGRVPMJIFILEXFPVEZYQCZWIZIKV");

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
    msg.setTimeStamp(0.702734637252);
    msg.setSource(22242U);
    msg.setSourceEntity(249U);
    msg.setDestination(19213U);
    msg.setDestinationEntity(250U);
    msg.op = 241U;
    msg.name.assign("UXKXQCSHXYDHZYKCVVGHPLHGUYKTDZENBJYXBICXRHMEXBGUTFDWJXGJEAKHOWWWOTRNDVRIAPOPBSRSGTOCQJHMADLNNWCVLBSTZNQADCPZIZOFFJRUVVSINFVFELVRNLAKTLZKSMINCVMJJZGHCHZRDNQFUQBYCXFISSUIYEPTSEJIOMRAEUKDUBGMYBTWZICEQGUOAJQFPXDLHPVMEFMRQ");

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
    msg.setTimeStamp(0.626229308813);
    msg.setSource(53055U);
    msg.setSourceEntity(80U);
    msg.setDestination(36372U);
    msg.setDestinationEntity(177U);
    msg.type = 227U;
    msg.htime = 0.886752128869;
    msg.context.assign("VKLQYZJTXOSCQXTZNLGJZULCDWCKHCURGPUXGGGRMAYCQNVTEOPQEWZDXGUOQYRYEMHYVDBNARCRDAFAQQVPLOZTYMKZXASEOHKVLYGSCLBWRAKTDXIAXYZKSMDIIAJFIBLHYJNI");
    msg.text.assign("HZXCMUUTYZBCTNQEVNLCGYNSVJJPHLBUAWEHOTFDDWABSPCWGRRSAUGZNIIBRXGDQBJKMXTVOCXKYLQIPFLSOFXPWKEEFNMGHMZZIVDDNWCRQGHOLIXYGVCUJLLAFOLPZJYATQTWIIHLGZUAHXISNEEOMMGUGZEKZXTKUNYAYBFCPOJAEIJOVRAJVDZFNTQEVYNTQMBRKXWMMQWOYJBKDBBFHOKSHRWCFSLRDKUPRVPIFQP");

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
    msg.setTimeStamp(0.171447992897);
    msg.setSource(18330U);
    msg.setSourceEntity(209U);
    msg.setDestination(25148U);
    msg.setDestinationEntity(70U);
    msg.type = 124U;
    msg.htime = 0.338472662011;
    msg.context.assign("XPNMEWGOSPEEQQUYCYXBNDZYUYGAPZIVTPIDQVYGTQTLEFMGPFHTYDKIFVPOSRDCKCBKTPVASHBASAGHGSERHUWIAJIULCWHKZJTXBEGQESIHZDLMAFLRZZZXYLWWLPUSJOVDRDJDUKLXJVICSLACQZHDKTMSHAQXMEFNYKIERJRIROBTXQJLVOHPY");
    msg.text.assign("BDEDXBTEEAYISUNTXUTHUHKSGCKOCUWAUBFVASDSRSBYBUTXPMBOLDLPLRCRGMRGAXIVEIPKQTJVLXIACTSPLMXIFRNOCVXKVJPMAANTEGMVKNBDHYJFNEFEWHWQAVCJMNKKUQDCTXZCZFRGQPGPMLWNNQPYYOUULKZQFGHZWDSJHWYVWRVWMIFMWJMQZKLPHNLRIZOGCFBEYFSIREUTZGQHDDOJBJETFZZOZNAWCY");

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
    msg.setTimeStamp(0.223780149348);
    msg.setSource(52108U);
    msg.setSourceEntity(249U);
    msg.setDestination(19235U);
    msg.setDestinationEntity(89U);
    msg.type = 155U;
    msg.htime = 0.851218333987;
    msg.context.assign("AYUIVJYFMULPQETQPVXHJZBWQNOAKOGIKOPMUCSSWTDSTGQDVECMFWEOJLTTOHNPBZLMLKTQVVIAWUETPLWKIXMXBMYLBZSCHC");
    msg.text.assign("RGGCNRLEWNHGRIMOZAPAQJHFYTZDOXOFEKBYIYAV");

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
    msg.setTimeStamp(0.206187988682);
    msg.setSource(7579U);
    msg.setSourceEntity(29U);
    msg.setDestination(50456U);
    msg.setDestinationEntity(29U);
    msg.command = 4U;
    msg.htime = 0.19175287117;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 117U;
    tmp_msg_0.htime = 0.936868299102;
    tmp_msg_0.context.assign("EKYYNNFECCSZGIOLEMDJXPROZHHVXTVOIOYIWXHWDEGRLKDHZMPHTBDQQHBCAJQJEPSVIEQXKWEYVWKNUUUKMBUHRVUTTNB");
    tmp_msg_0.text.assign("ALMOYCOVJJS");
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
    msg.setTimeStamp(0.185252168118);
    msg.setSource(49699U);
    msg.setSourceEntity(252U);
    msg.setDestination(32587U);
    msg.setDestinationEntity(101U);
    msg.command = 203U;
    msg.htime = 0.661124359201;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 181U;
    tmp_msg_0.htime = 0.662550652232;
    tmp_msg_0.context.assign("HBEYZMUUHTXPFMFWASMWCYJFIVJQXPTKGAEVKYHCRCWVDTRDGAAXDGMLDLPMYYJNEFDRMDNFSQVTNDSZUIWBPRBJMGGWQWOITBXV");
    tmp_msg_0.text.assign("PYPFJNVROKMAGTNSPBSIDPIVDHF");
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
    msg.setTimeStamp(0.529827167747);
    msg.setSource(34601U);
    msg.setSourceEntity(191U);
    msg.setDestination(48931U);
    msg.setDestinationEntity(68U);
    msg.command = 6U;
    msg.htime = 0.383701486417;

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
    msg.setTimeStamp(0.360745311654);
    msg.setSource(18109U);
    msg.setSourceEntity(124U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(226U);
    msg.op = 162U;
    msg.file.assign("PVESWBCTJAZZPXARQAPLOZELUEPAMRTNGOFGMYDJNSIHAQFPKFGHUWGYLPOIDRHXCYASDKBHPOUKESZGHVORMOQ");

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
    msg.setTimeStamp(0.65318898806);
    msg.setSource(13353U);
    msg.setSourceEntity(232U);
    msg.setDestination(2206U);
    msg.setDestinationEntity(135U);
    msg.op = 84U;
    msg.file.assign("TXAHGZNWWEO");

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
    msg.setTimeStamp(0.886905865953);
    msg.setSource(46833U);
    msg.setSourceEntity(180U);
    msg.setDestination(16799U);
    msg.setDestinationEntity(198U);
    msg.op = 81U;
    msg.file.assign("YOXHKWHTNKHOZWWZOVWYJQRUEUTZTPXBODORLOWYCIFSIZBKQSYPLUCIIGJNIKVNBRAYDPSVMDUVSWISNZCBQXJMTFTUMHXQOKCFOAFZYLVCQAUXZFVMDAAXNUEVDSHLKPAPBMGUCLLGGZQXLIADCHJIPRGXAKRWXGLLBSDHXDYNTFWDGFKZMIAEBGMJHMVQPTYRENJMZJQRLTOKQCFRP");

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
    msg.setTimeStamp(0.446762268219);
    msg.setSource(25705U);
    msg.setSourceEntity(47U);
    msg.setDestination(62020U);
    msg.setDestinationEntity(54U);
    msg.op = 107U;
    msg.clock = 0.319311609451;
    msg.tz = 45;

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
    msg.setTimeStamp(0.89391358134);
    msg.setSource(27938U);
    msg.setSourceEntity(213U);
    msg.setDestination(20204U);
    msg.setDestinationEntity(207U);
    msg.op = 175U;
    msg.clock = 0.0985351046867;
    msg.tz = -88;

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
    msg.setTimeStamp(0.412015862664);
    msg.setSource(50282U);
    msg.setSourceEntity(211U);
    msg.setDestination(30923U);
    msg.setDestinationEntity(59U);
    msg.op = 237U;
    msg.clock = 0.376451642188;
    msg.tz = 119;

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
    msg.setTimeStamp(0.802805370016);
    msg.setSource(22857U);
    msg.setSourceEntity(140U);
    msg.setDestination(29280U);
    msg.setDestinationEntity(175U);
    msg.conductivity = 0.0264805219475;
    msg.temperature = 0.643214084318;
    msg.depth = 0.664933960915;

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
    msg.setTimeStamp(0.580140056409);
    msg.setSource(39556U);
    msg.setSourceEntity(59U);
    msg.setDestination(19067U);
    msg.setDestinationEntity(45U);
    msg.conductivity = 0.118913326726;
    msg.temperature = 0.66975924802;
    msg.depth = 0.273778391695;

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
    msg.setTimeStamp(0.0424549102829);
    msg.setSource(65359U);
    msg.setSourceEntity(237U);
    msg.setDestination(20025U);
    msg.setDestinationEntity(52U);
    msg.conductivity = 0.901080297006;
    msg.temperature = 0.384052875057;
    msg.depth = 0.881286436433;

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
    msg.setTimeStamp(0.558680404086);
    msg.setSource(34392U);
    msg.setSourceEntity(71U);
    msg.setDestination(29879U);
    msg.setDestinationEntity(190U);
    msg.altitude = 0.542083497064;
    msg.roll = 62069U;
    msg.pitch = 40277U;
    msg.yaw = 22805U;
    msg.speed = -8748;

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
    msg.setTimeStamp(0.537903566719);
    msg.setSource(54552U);
    msg.setSourceEntity(177U);
    msg.setDestination(64775U);
    msg.setDestinationEntity(163U);
    msg.altitude = 0.746767726861;
    msg.roll = 56531U;
    msg.pitch = 8452U;
    msg.yaw = 35515U;
    msg.speed = 16756;

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
    msg.setTimeStamp(0.734475182461);
    msg.setSource(28898U);
    msg.setSourceEntity(138U);
    msg.setDestination(17880U);
    msg.setDestinationEntity(132U);
    msg.altitude = 0.218739266969;
    msg.roll = 44825U;
    msg.pitch = 62527U;
    msg.yaw = 23683U;
    msg.speed = 27724;

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
    msg.setTimeStamp(0.961320798586);
    msg.setSource(39203U);
    msg.setSourceEntity(72U);
    msg.setDestination(57236U);
    msg.setDestinationEntity(144U);
    msg.altitude = 0.211997795566;
    msg.width = 0.93684206017;
    msg.length = 0.0540030539102;
    msg.bearing = 0.597823308291;
    msg.pxl = 26576;
    msg.encoding = 119U;
    const char tmp_msg_0[] = {21, 46, 100, -57, 27, 68, -128, 4, 20, 60, -8, -3, -46, 41, 85, 103, 15, -127, 118, -19, 22, -43, -100, 43, 23, 85, -84, -4, -121, -10, 92, 26, -103, 103, -14, -49, -27, -89, -97, 126, -79, -92, 13, 79, -2, -5, -46, 52, 79, 87, -65, -121, -119, 24, 1, -23, 54, -121, -79, -120, 98, -95, -49, -80, -32, -11, -47, -73, -33, -70, -95, -50, 31, -24, 9, 99, -59, 114, -75, 45, -80};
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
    msg.setTimeStamp(0.542852889727);
    msg.setSource(2059U);
    msg.setSourceEntity(94U);
    msg.setDestination(30240U);
    msg.setDestinationEntity(213U);
    msg.altitude = 0.876441432568;
    msg.width = 0.0927824313346;
    msg.length = 0.0762670600133;
    msg.bearing = 0.614061384242;
    msg.pxl = 29433;
    msg.encoding = 8U;
    const char tmp_msg_0[] = {102, -53, -122, 62, 75, 68, 56, 112, 111, -23, 26, -92, -23, -92, 62, -61, 66, -115, 38, 16, 15, 59, -72, -78};
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
    msg.setTimeStamp(0.325858973243);
    msg.setSource(18280U);
    msg.setSourceEntity(42U);
    msg.setDestination(47090U);
    msg.setDestinationEntity(172U);
    msg.altitude = 0.715948681766;
    msg.width = 0.461855568176;
    msg.length = 0.061184543804;
    msg.bearing = 0.698284195443;
    msg.pxl = -29732;
    msg.encoding = 2U;
    const char tmp_msg_0[] = {48, 116, -15, 62, 4, -57, 43, 75, 74, 83, -75, 46, -44, 91, 17, 16, 30, -53, 46, 94, -31, 14, -21, 109, 49, -49, -10, 1, 49, -2, 108, 108, -7, 22, 41, -64, -109, 32, -74, 38, 27, 106, 22, -108, 60, -62, 51, -77, -22, 10, -10, -33, 17, -109, -53, -93, -63, -118, 2, -29, -38, -71, -76, 71, -78, 76, 11, 5, -25, -13, 67, 26, -123, 122, 18, -89, 43, -40, -85, -10, -66, -94, 27, 52, -68, 90, -84, -22, -10, -5, -8, 22, 33, 90, 58, 71, -110, -63, -6, -30, 10, 116, -106, 14, 40, -46, -15, -102, -46, -7, 31, -68, -18, -96, 37, 81, -4, 52, -2, 111, 57, 16, -89, -48, 24, 47, -6, 115, 78, -119, -20, 23, -22, -32, -86, 96, -58, 12, 40, 47, 2, -102, -26, 58, 47, -64, 30, -69, 36, -92, -11, 48, 78, 113, -57, -127, -51, -18, -25, 74, -64, 99, -37, -43, -12, -5};
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
    msg.setTimeStamp(0.39111443241);
    msg.setSource(12922U);
    msg.setSourceEntity(132U);
    msg.setDestination(26444U);
    msg.setDestinationEntity(126U);
    msg.text.assign("IKDMOVCOFAAOETVUPQDPNWOHHGAFWDMJBVAPMNTICKELILRQJWMUDWHSLBW");
    msg.type = 41U;

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
    msg.setTimeStamp(0.749274488563);
    msg.setSource(15524U);
    msg.setSourceEntity(134U);
    msg.setDestination(55133U);
    msg.setDestinationEntity(141U);
    msg.text.assign("KBWRNOFLAVZNYXXEEIFDDKSMPOJHQTQZJIPEUAFIQXWWDLMXSSYCWTXAYTCLJGDYDOYCBRGLZZVFAQHAPLKUOKHGSUTFMMZAHQTXYQZGPVXPSRYWUOSTMMNVIABEOAEOJXWACRGHTMFVPJPYIEOUZIRSRPQIRIPVLFPZJN");
    msg.type = 178U;

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
    msg.setTimeStamp(0.610260916664);
    msg.setSource(18162U);
    msg.setSourceEntity(159U);
    msg.setDestination(54741U);
    msg.setDestinationEntity(231U);
    msg.text.assign("HJBJGVPBCYVANUVASZXYNDTEPTZZEFTKQLRFEWAFWPJIQRJOTP");
    msg.type = 177U;

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
    msg.setTimeStamp(0.989839604562);
    msg.setSource(65287U);
    msg.setSourceEntity(208U);
    msg.setDestination(32599U);
    msg.setDestinationEntity(116U);
    msg.parameter = 143U;
    msg.numsamples = 253U;
    msg.lat = 0.251374959124;
    msg.lon = 0.964064109062;

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
    msg.setTimeStamp(0.546909397531);
    msg.setSource(14297U);
    msg.setSourceEntity(106U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(78U);
    msg.parameter = 252U;
    msg.numsamples = 43U;
    msg.lat = 0.454554770702;
    msg.lon = 0.74411547051;

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
    msg.setTimeStamp(0.841931159891);
    msg.setSource(47700U);
    msg.setSourceEntity(107U);
    msg.setDestination(44693U);
    msg.setDestinationEntity(177U);
    msg.parameter = 104U;
    msg.numsamples = 99U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 17298U;
    tmp_msg_0.avg = 0.370304156068;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.767914854908;
    msg.lon = 0.269065793767;

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
    msg.setTimeStamp(0.952939062222);
    msg.setSource(30374U);
    msg.setSourceEntity(72U);
    msg.setDestination(24956U);
    msg.setDestinationEntity(103U);
    msg.depth = 44353U;
    msg.avg = 0.3897404061;

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
    msg.setTimeStamp(0.311839090502);
    msg.setSource(41754U);
    msg.setSourceEntity(154U);
    msg.setDestination(42291U);
    msg.setDestinationEntity(77U);
    msg.depth = 34525U;
    msg.avg = 0.829999436953;

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
    msg.setTimeStamp(0.263998270664);
    msg.setSource(53888U);
    msg.setSourceEntity(117U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(127U);
    msg.depth = 44669U;
    msg.avg = 0.649996987382;

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
    msg.setTimeStamp(0.549006460106);
    msg.setSource(25422U);
    msg.setSourceEntity(0U);
    msg.setDestination(23038U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.142661932522);
    msg.setSource(16147U);
    msg.setSourceEntity(106U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.422312435045);
    msg.setSource(10247U);
    msg.setSourceEntity(190U);
    msg.setDestination(12524U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.510768978905);
    msg.setSource(32027U);
    msg.setSourceEntity(8U);
    msg.setDestination(8699U);
    msg.setDestinationEntity(111U);
    msg.sys_name.assign("ODTKVIXFMWCASBPTUNLQOHOZKZPWMSEMNICQEXTDPNEAVITPRHSRHLNBGXACWQJYGFWMWSVMUJUPTRTZDCZXGARLICVCBQWIZDVSGELRKAPXVIUVLQOBCIXVABNIAHEZJUMWLCYBKJJGZXEYORAFOBMJJKKJGGDPDNUPBRHEYAPOQZPDD");
    msg.sys_type = 0U;
    msg.owner = 35182U;
    msg.lat = 0.0906822336156;
    msg.lon = 0.22762091238;
    msg.height = 0.835844948864;
    msg.services.assign("JIUAKNIVFSHNDDGKRQDUDRSCUPOKOALACPQQTKXEMOBSQWLIQZYXEOZQFAXPRMTJWHHNCZECUFWTZPTCVZYXMAKYFKGBMBOSXPCF");

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
    msg.setTimeStamp(0.889340520658);
    msg.setSource(20165U);
    msg.setSourceEntity(149U);
    msg.setDestination(4791U);
    msg.setDestinationEntity(180U);
    msg.sys_name.assign("LCHYVSLSHHVXCTJOHRJZVBQSTQFJNWYKQIHLHTUQMUKXSDNFBFAHWNOBKPMPLJJDTDAIMJNKNESOFPBZCSESEFPTGKULIGPZFVIAXIAGXJXCUB");
    msg.sys_type = 233U;
    msg.owner = 62869U;
    msg.lat = 0.0996128888701;
    msg.lon = 0.405809759912;
    msg.height = 0.124535396969;
    msg.services.assign("BEJPNJWOMQDKBSTYQHHXLMACUSUNVHFLFIHYYIAYMSSNCZEXKVYAELNXSJFGOFHIBTNXHRUQCUZEPRFMDXNQICKPKAAGSDYJJKXKUCJPRVPUKDVKBLHVCAVFMCMSLU");

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
    msg.setTimeStamp(0.447809039682);
    msg.setSource(32714U);
    msg.setSourceEntity(144U);
    msg.setDestination(51213U);
    msg.setDestinationEntity(68U);
    msg.sys_name.assign("SXMBDEOCAJJGCSYY");
    msg.sys_type = 176U;
    msg.owner = 28363U;
    msg.lat = 0.991706591175;
    msg.lon = 0.157680060972;
    msg.height = 0.366128545398;
    msg.services.assign("HDIDLHOWVARDTGRANCSFKHOKLDCORMCLGBAPHZGCJJPRPKSQQSUHZCGOHVTZUDVUYKPWFYSJQJCXFEWDXM");

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
    msg.setTimeStamp(0.563962528045);
    msg.setSource(290U);
    msg.setSourceEntity(85U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(207U);
    msg.service.assign("EWMJYOICYKFVUDILAXGZXMRNRRLUXCMSZWPKEEJNAJAZEWPFOEZDBCTTBADAFSPBHXDYHXEMTHBWGUJTTYLFQQWGLXMUUKCSDXQRIIZQHLQXLIIUZRIVXLADEPFSZZNEQPRNIQTLKOQNVRVIWACJWSOBPGBXBSEDKCNGYDNZBOCSUKSNBIMHBGJMJEVYHKOROMPDK");
    msg.service_type = 99U;

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
    msg.setTimeStamp(0.434666124101);
    msg.setSource(49515U);
    msg.setSourceEntity(234U);
    msg.setDestination(12713U);
    msg.setDestinationEntity(32U);
    msg.service.assign("PVADEONRMAPFUBHAZFSDPHSOYPGWCRCEIGHKSLXOCYCFNVWMFBTJEZRNDFZBMXEFJULFUIIOUMAVXWHXCK");
    msg.service_type = 169U;

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
    msg.setTimeStamp(0.699860742756);
    msg.setSource(12791U);
    msg.setSourceEntity(167U);
    msg.setDestination(26031U);
    msg.setDestinationEntity(6U);
    msg.service.assign("DNKLCBKPWQJSJPROYWXYLCICWLOUZHIWQHKJFDPGNGDHXHPVGDMPBZVEIJQGKIALOFFMCBMEAFKRLOJBUVEKQESSLRMLCQLOBZNNPTGTPDWUVRRBMMCFYOIEYAEBSBUXROSRFVFSAVWFAQIRBQXZIXZTHDKNKKFXRGHLEYAIODYGJRZVSYOVNIBWUNGDTXMZZJQQFIMZTM");
    msg.service_type = 15U;

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
    msg.setTimeStamp(0.234307282012);
    msg.setSource(31558U);
    msg.setSourceEntity(158U);
    msg.setDestination(40158U);
    msg.setDestinationEntity(250U);
    msg.value = 0.806757243879;

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
    msg.setTimeStamp(0.711154955787);
    msg.setSource(1200U);
    msg.setSourceEntity(45U);
    msg.setDestination(8343U);
    msg.setDestinationEntity(241U);
    msg.value = 0.599252597177;

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
    msg.setTimeStamp(0.589918014738);
    msg.setSource(41189U);
    msg.setSourceEntity(9U);
    msg.setDestination(16263U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0118359097842;

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
    msg.setTimeStamp(0.79261561827);
    msg.setSource(47357U);
    msg.setSourceEntity(193U);
    msg.setDestination(1326U);
    msg.setDestinationEntity(162U);
    msg.value = 0.651927705745;

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
    msg.setTimeStamp(0.651159154471);
    msg.setSource(27536U);
    msg.setSourceEntity(194U);
    msg.setDestination(32204U);
    msg.setDestinationEntity(161U);
    msg.value = 0.592773064114;

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
    msg.setTimeStamp(0.693145067129);
    msg.setSource(13952U);
    msg.setSourceEntity(161U);
    msg.setDestination(30899U);
    msg.setDestinationEntity(119U);
    msg.value = 0.423080223629;

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
    msg.setTimeStamp(0.0436653366922);
    msg.setSource(30142U);
    msg.setSourceEntity(140U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(221U);
    msg.value = 0.440288931244;

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
    msg.setTimeStamp(0.254881247939);
    msg.setSource(61969U);
    msg.setSourceEntity(162U);
    msg.setDestination(34654U);
    msg.setDestinationEntity(196U);
    msg.value = 0.653465369173;

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
    msg.setTimeStamp(0.309383840264);
    msg.setSource(64120U);
    msg.setSourceEntity(157U);
    msg.setDestination(49148U);
    msg.setDestinationEntity(50U);
    msg.value = 0.644187189652;

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
    msg.setTimeStamp(0.873330243413);
    msg.setSource(38685U);
    msg.setSourceEntity(48U);
    msg.setDestination(14801U);
    msg.setDestinationEntity(99U);
    msg.number.assign("OPYIJKZBGEMWPXSJJXEBHZFIGJHKVMORUQGYLWCMQJBMIDJDXCHDONJSLNGMEGLLHRXEGIRBNTWDZFR");
    msg.timeout = 18077U;
    msg.contents.assign("HSUJLIJHSXRUJDJCOSYEOZPEIQGOSSLCFYSRTNVWBDXCDVVLPCPENKCYIJFCYSDVHHGWHDNRLADDGZMZOMAPMUQBYUGIWKMGCLQAKFXEJEPPKBQXEFBTGMVITLVMYZRKGZDFJOVMUEZTSXVUNILPLSMMCGOZTNSTW");

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
    msg.setTimeStamp(0.175879107745);
    msg.setSource(22998U);
    msg.setSourceEntity(126U);
    msg.setDestination(6501U);
    msg.setDestinationEntity(70U);
    msg.number.assign("LFSLHGVYKYBHMZMKTTVWQRVCLERDUEJETUOAJCUDIEACTDPZMTGDNKBLEBPGXQZJLFGFDPOBQECJMZHTP");
    msg.timeout = 28835U;
    msg.contents.assign("WNYAUGCWJYLUPWHVODRGLQDTLETOPPVXXORFEGSBPVXCNRDBHMNXSUZKAUATESSDAAGQKZLRX");

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
    msg.setTimeStamp(0.248904243228);
    msg.setSource(19511U);
    msg.setSourceEntity(52U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(26U);
    msg.number.assign("RMOCXTNILAFXIGUCBZLWAZOVPGLZNPWHEUFBQVKIUSPLEYZMJHRLXDSOUHHACFNCOICOGAOARGUCVRUCQVOLDBJEKIRVJAPJFWVVFQQJAWLWRETHTOSGFVSETIUDDANMPPENFPZEYPDSRLKQXTBUXHZKMOTYNBXMNYKXSPGNDTWTOJEAUDBUWIVIKGFDDBYRMVMJIFYHQKIJHLYWGKQHJPBCQZMDBSTQNMZTRSWGYRS");
    msg.timeout = 42253U;
    msg.contents.assign("ZBPGOJXQGIOADGXCIOPONYRFZLLRYQPJYUHMTFSJKJWVDGNVVPQTQBZDJLEGSEVWVUESALNVLCKHFOMXPSYLDUFCWHIOEZIHNADJCOOQHNUQEFICMWVRBBNEXWENPYZAFZIVGFEDBMHSKUGVMI");

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
    msg.setTimeStamp(0.831653324647);
    msg.setSource(20011U);
    msg.setSourceEntity(252U);
    msg.setDestination(49832U);
    msg.setDestinationEntity(182U);
    msg.seq = 198286779U;
    msg.destination.assign("MKWXUDJXEIFAVZG");
    msg.timeout = 31933U;
    const char tmp_msg_0[] = {117, 81, -87, 1, 119, -5, 101, -107, 48, -21, 75, 11, 92, 20, 90, -58, 39, 93, 21, -73, -37, 126, 6, 44, 50, -73, -36, -45, 72, 78, 81, -75, 91, 70, -30, -118, 111, -90, -79, -37, -1, 8, 52, -1, -62, -28, -86, -89, 64, -116, -37, 29, -21, 37, 73, 20, -52, -50, 6, -28, -74, -81, 106, 23, -88, -48, -42, -51, -79, 81, -102, -65, 90, 29, -4, 116, 52, 7, 120, 112, -68, -5, 75, -25, -2, -10, 52, 90, -120, -59, -82, 18, -120, 72, -24, 105, 109, 65, -18, -14, -54, -125, 94, 99, -81, -77, -1, -34, -31, 99, 102, 49, 123, 103, 105, -45, 115, 22, 51, -72, -49, 81, 7, -31, 11, 49, -28, -96, 89, 62, -50, 113, -88, 101, -119, 65, 115, -107, 3, -119, 106, -62, 86, -109, -123, -106, 125, -33, 52, 7, 87, 69, -28, -63};
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
    msg.setTimeStamp(0.795306824329);
    msg.setSource(27008U);
    msg.setSourceEntity(122U);
    msg.setDestination(3029U);
    msg.setDestinationEntity(67U);
    msg.seq = 8882169U;
    msg.destination.assign("JRFCTALOQXAUMIAWHBMBYVFMUDEAIKYPWXENNXSBRSEGDRZPBPAUOCBWOHYCCDPOIPQULIJNSAKBRQTQMOTPJKLSIBZTRRXWKMVMHSNEFFHHFIGVIIUOCLTCMZVFXUDQEZGARDGUPGMKWSLQNQHJVDESRJTDOTHXYWNOJBYYXKKZXPCLJTZWYKJOGCZEHIVFW");
    msg.timeout = 52601U;
    const char tmp_msg_0[] = {38, -60, -1, -60, -95, 84, 42, 121, 52, -74, -88, -74, 76, -31, -93, -13, -75, 61, 34, -103, -5, -128, -101, 31, -66, -123, 92, -53, 67, 37, -125, -67, 108, -15, 68, -96, -104, 116, 104, 113, 10, 102, 97, -4, 33, 83, -17, 94, 112, 74, 78, 19, -24, 118, 59, 67, 69, -78, -11, 48, -12, 3, 10, 9, 116, 56, 114, 91, 125, -102, 124, -113, -51, -21, 21, 94, 44, 14, 39, 18, -79, -103, 87, -21, -89, 8, 11, 33, 108, -118, -102, 28, -31, 26, 87, 11, 62, -86, 118, 47, -128, -74, -17, 40, 125, -27, -2, -5, -68, 16, 35, -68, -6, 125, 31, 12, -102, 100, -40, -21, -68, -91, 2, -14, -54, 8, 56, -23, 47, -80, -42, -86, 0, 40, 59};
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
    msg.setTimeStamp(0.665343350299);
    msg.setSource(18182U);
    msg.setSourceEntity(19U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(110U);
    msg.seq = 546968371U;
    msg.destination.assign("GYMNAARVPMVZHATCXFXPURBOJCTOKLEISHSKGAQZWZJNJMLUGKXYBKXVCJKBQUOGWJZIQNZQD");
    msg.timeout = 34338U;
    const char tmp_msg_0[] = {71, -62, -117, -107, -7, 61, -9, 16, -50, 125, 118, 118, 75, -124, 60, -80, 83, -115, 23, 95, -43, 120, -110, 79, 1, -106, 5, 58, -11, 46, 90, 124, -100, 17, 9, -74, 17, -91, 19, 83, -19, -98, 34, -97, 83, -45, -58, 67, -15, -22, 108, 35, -100, 25, 20, -14, -56, -38, -82, -20, 39, 37, -76, 36, 112, 101, -116, -46, 3, 94, -21, -16, -64, -75, -69, -76, -6, 19, -56, -88, -126, -22, -111, -40, -19, -106, 15, -117, -64, -125, 2, 2, 113, -14, -27, 47, 86, 17, -78, 110, -71, 2, 4, -77, 89, 6, 99, -102, 9, 34, 83, -87, 16, -115, 31, 69, -22, 115, 61, 70, -68, 27, 116, 87, 43, -22, -84, 62, 99, -66, -72, 68, -60, 12, 21, -91, -122, 64, -79, 76, 66, 16, 38, -75, 31, 36, 33, 103, -64, 51, 67, 87, -106, 106, 16, -110, -48, 70, -94, -119, 2, 9, 91, -71, -24, -42, -81, 77, 119, -18, -37, -126, -97, 76, 5, -121, -46, -38, -49, 25};
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
    msg.setTimeStamp(0.300048514579);
    msg.setSource(2511U);
    msg.setSourceEntity(59U);
    msg.setDestination(5767U);
    msg.setDestinationEntity(79U);
    msg.source.assign("GGXMJEAZSBWDHVSUAXKCKUSISJYN");
    const char tmp_msg_0[] = {80, -54, 70, 120, -97, 107, -77, 62, 85, -116, -36, -4, -123, -103, -11, -80, 103, 56, 14, -16, 84, 62, -30, -40, -47, -52, 60, 123, 104, -7, -112, -20, 112, -47, 121, -50, -70, -76, 2, -11, -51, -15, 63, 35, -72, -107, -69, 48, -42, 113, -36, -109, 15, -85, 90, 81, 121, 81, -102, 10, 58, -18, -97, 89, 80, -35, -93, -74, -74, -8, -41, -101, 81, -57, -23, 110, 2};
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
    msg.setTimeStamp(0.150419709838);
    msg.setSource(15147U);
    msg.setSourceEntity(157U);
    msg.setDestination(25404U);
    msg.setDestinationEntity(163U);
    msg.source.assign("HRDRTCUZKANCQCGKFICTZUBHGNYQAJZPCRNEAYHHEFDMXAAMNJRIFCRNPZVAGGFYGSBTIYITBGGSVSQHMLQWFODFWIOKCXIMPWLHXBKBCOSJOWJRIVKQZZHEDJPVSEXDKLXRTLQOKSFNQRBPXPKVSGDWLETWGCELYFVQUSZUUBMOWKSQMVXOCJBDEYXYFMPYHPULNTBGVLAURPHYVMTQEZYNEXKJIVLA");
    const char tmp_msg_0[] = {108, -123, -103, -1, 75, -125, 27, -19, 48, -25, -53, 34, -118, -21, 23, 63, 50, 52, 86, 59, 10, -68, 66, -124, 120, -107, 82, -77, -104, -24, 103, -4, -35, 43, 26, -84, -25, 43, -52, 69, 75, -98, 31, -41, 84, 93, 46, -111, -32, 10, -1, 6, -75, 98, 81, 75, 36, 12, 102, -119, 60, 72, 71, 111, -94, -61, -1, -38, -22, -43, 86, 102, -81, -112, -84, 17, -72, 84, 122, 126, -120, -77, -64, -108, -61, 100, -30, -100, -94, -110, 44, -73, 77, -28, 50, 16, 122, -78, 35, 70, 115, -18, -119, 114, 96, 64, 76, 124, 27, 102, 1, -40, -101, 94, 50, 28, -111, -40, -54, -84, -52, -58, 94, 119, 116, 91, 29, 58, 33};
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
    msg.setTimeStamp(0.406139013993);
    msg.setSource(53732U);
    msg.setSourceEntity(108U);
    msg.setDestination(40965U);
    msg.setDestinationEntity(11U);
    msg.source.assign("IWSYDXUCNUJLBMDBJYALOTNVXTSTGSBFQLRATRRKFKWWDPQECMVBHMBYCGOGZVNAZIUNAMHKQXPGWFCXKJJQKKOYSLUWQROHMFHVPPSFEHVRJENNEGHFEAXJXQCTWDSKAOJKTFTBEIDBPWYOHIAZFYVYRNSSLEDVCVUHJIWS");
    const char tmp_msg_0[] = {-14, 102, -63, -71, 118, 10, 82, -15, -91, -113, -42, -56, -118, 15, -34, -1, -112, 65, -59, 96, -3, 7, 118, 104, 75, 74, 53, -64, -14, 71, -43, -68, -100, -76, 73, 4, 116, 95, 113, 40, 47, 2, -93, -21, -69, -89, -105, -88, -39, 6, -30, 103, -98, 110, 5, 6, 11, 99, -88, -128, -47, 69, -35, 86, 122, 57, -56, 41, -32, -28, -57};
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
    msg.setTimeStamp(0.285871340023);
    msg.setSource(1663U);
    msg.setSourceEntity(63U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(244U);
    msg.seq = 3714874105U;
    msg.state = 179U;
    msg.error.assign("QSWEXXDFFZCCWVKPBUCJMVTTVUFAPXLUKZYWSRNDXHLYYBLPHCGGAOSRMEUYDNDKIODNWAQIALEEQFJOTZSNCJZBPDSVNCOTRTIRIBWCRFJMENYXXMERHHGLLRQUVYBTIWAABJAKRJQIRYKEGGOXJOZXDFTNKMPMQMSHSQUKMEBZWPUXJZEIAQUALHYKOMVSDWNXZYR");

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
    msg.setTimeStamp(0.531413609114);
    msg.setSource(26001U);
    msg.setSourceEntity(56U);
    msg.setDestination(50981U);
    msg.setDestinationEntity(93U);
    msg.seq = 1428529200U;
    msg.state = 127U;
    msg.error.assign("UEWFDRKHJBCEOVDKPCMVBOTRWHQKFVNKBZYRFOSCTINYRMXDYNLOOGCH");

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
    msg.setTimeStamp(0.944921252255);
    msg.setSource(12299U);
    msg.setSourceEntity(40U);
    msg.setDestination(18956U);
    msg.setDestinationEntity(237U);
    msg.seq = 821822050U;
    msg.state = 161U;
    msg.error.assign("PSOBQSUCRRPASHLUHWYXGGQHPJNNKLQHPRZEYIBWWLTBQCBWKDFRJOREYTZSTBXXXAZZJAZDLWMDRUSKEPSIHYFUDTMCKKYPBGYTNFCSCJKUCCOMLNVTMZNNSWRTHVHAVEOMBDPFEQQVTIGNCIYLVBIVRIGMLZTLWMZDBRSJUZELAAHPEVOEAWIMUAOEPTDUD");

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
    msg.setTimeStamp(0.168774923766);
    msg.setSource(13839U);
    msg.setSourceEntity(177U);
    msg.setDestination(43640U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("TURUBJQFZFBOZMNSBERMAMOUEXPXLXHWGXOGPCJDZOCCUSCFZRRBHTJAGGSCLKRDKRSZIQOIHNNEOEFLUJKIJIPHOQVLWTGJKULLUTZHCGMXVPPSBSLLEQYMHAVWTEGEQSBAB");
    msg.text.assign("BURPTADELHGHRMBKSWQOZAVZDZDDNWBEGNFEQVDTQQRIIPGUKJLCXLUSRIYDN");

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
    msg.setTimeStamp(0.537271275123);
    msg.setSource(35115U);
    msg.setSourceEntity(104U);
    msg.setDestination(8798U);
    msg.setDestinationEntity(85U);
    msg.origin.assign("FKKXWUVJGMXSNZYJHYQXIKUGGEYAZWNOIGDYAPMHREPSWZKOBQSGVMATXUTMNPSTHYVEQOZGRWALIPTGYCOWZJPFZBLGRBQNADTBRLGNTPVYKVONPUHQUNEKLZBCDYHIBEVFOMBMKNFXLVXUCZNJDRBKBXSFEWFRBOHXDTJED");
    msg.text.assign("YFKVASAYQIOIQMSZXJNUCDVQGKXHGSQCHZRDSQOZBVBTHCQJOHUTGIZXPAGRUXLPOEOXXWWOEORAZXDRVWESKXRPDLDDXRYFFSSKBPALYESIDTUVIMBMIKNFMCIOMPQOLPTMWCZYDYNDUPTKYVZFEBMTWWBFSJINNJBCRRCBFPREGUNRLEELKUXAFMZWWNANJHYKAJECNLJLQTHUHVQJLHJGPZGGYFBFVTATMIHPVGUKTYWUNHCBZJIQOCL");

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
    msg.setTimeStamp(0.216741121865);
    msg.setSource(14449U);
    msg.setSourceEntity(207U);
    msg.setDestination(51692U);
    msg.setDestinationEntity(76U);
    msg.origin.assign("XCPKOISSIHXMGREVZARMXEOJJNKSQXELBGCWWZNOBLLPBWUJNULBIWNYFTDKCBNHOKUAFDGHGVEEAPYUWSWJXXKHVFAMGVDQFMRQEQLVWYPFSMGQIZTDMEFNK");
    msg.text.assign("GUYLTIREATNNNVFUUNOUVMDRYILEAXDFXOQLGZHHLZSARKHPCOGBTRAJFKSEEDCBYPHCOUBZDHQLGXTUPCIHTGHQSZOZOGMWCEWFINMNRFDWXMPLLMPNKZOJFRRRCRCVXTKNOELBF");

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
    msg.setTimeStamp(0.223322697657);
    msg.setSource(3825U);
    msg.setSourceEntity(178U);
    msg.setDestination(30097U);
    msg.setDestinationEntity(85U);
    msg.origin.assign("CVNPGPKROFWZNOTMCWRERIBDEXRBHIXHYPGJSMVZOKAPEBQVWJHRFNACHXUMSFO");
    msg.htime = 0.642626342529;
    msg.lat = 0.871371301563;
    msg.lon = 0.243912002352;
    const char tmp_msg_0[] = {-98, 50, -58, -10, -78, -50, -11, -3, -112, -35};
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
    msg.setTimeStamp(0.983617073649);
    msg.setSource(51181U);
    msg.setSourceEntity(118U);
    msg.setDestination(60513U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("TAIRGBJLZAZCRCOVVQNQFHYZKNVBAXUYJLPPUGWAYADHAMVQXYBSOKXPUVGQQZEAGEPLMWSTPDLWDYLAOZUDNTPFGBJBWRSEEIQLCJMEMTKMEHRFWNRSFYVONNXXEMIUENGBODJHTTOEVRSWICPICFFGRPYZFAODRJBOLSTZUXOUVSYBQHDSJEXOJQBVDRJXZHTLYBHMITIUMTKDGCIIWYWJFCGVQFSAXLHWCKGSUMKRUCKNNMZ");
    msg.htime = 0.907317336434;
    msg.lat = 0.631737343377;
    msg.lon = 0.16819828774;
    const char tmp_msg_0[] = {-89, 43, -63, -83, -97, -75, 62, 13, 29, -31, 67, 36, -57, -62, 104, 23, -93, 50, -31, 15, -100, 99, -115, -38, 20, 30, 44, 64, -29, 44, -124, -82, -128, 68, -111, -80, 6, 55};
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
    msg.setTimeStamp(0.568627297709);
    msg.setSource(53474U);
    msg.setSourceEntity(100U);
    msg.setDestination(61521U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("MEOSDJEYNJPLKIRWBMHLTRMRFYCYXECYWTBTREUPCLWNZAOBAZLDGQPLHOUGEAIIUVKPUDNGHNOLSKHTWGRKWSHKOSMNCDRQEBRPAQKFDZMKQLFVDLPEGMCZHRTCCTFWBHJFSVIIDHTZZVCPIOEYFGMFWXFZMXUUQLRMVAJBNYOQNKC");
    msg.htime = 0.327411001597;
    msg.lat = 0.968491107537;
    msg.lon = 0.355729754814;
    const char tmp_msg_0[] = {-37, -71, -127, 116, -41, -23, 44, 15, 126, -92, 33, 3, -51, 9, -104, -47, -6, 78, 107, -29, 69, 103, -110, -126, 46, 22, -67, 0, -68, -105, -12, 37, -41, 114, 62, -23, -21, 96, -16, -80, 70, 96, -93, 111, -66, -7, -22, 42, -72, -122, -60, 73, -102, 24, 46, 5, -115, -61, -123, -88, 124, 57, 100, -46, 73, -70, -56, 117, -104, -111, -127, -118, 120, 84, 85, 24, -66, -97, 49, -80, -13, -46, -14, 51, -90, 85, -96, -90, -123, 32, 12, -114, -98, 36, -44, 93, 121, 115, 120, 24, -12, -35, -68, 123, -58, 72, 11, -77, 59, -24, 73, -128, 13, -35, -69, -79, -76, 67, -120, -77, 104, -59, -94, 50, -76, 101, 28, -102, 68, 12, -113, 25, 126, -1, 33, 3, 36, 20, -82, -102, 30, 12, 30, -43, -122, 102, -118, -7, 86, 111, -108, -25, -60, 20, 14, -70, -71, -45, 28, -112, 8, 20, 107, 11, 30, 0, 10, 115, 64, 2, 95, 110, -113, -27, 101, 35, -79, 122, -13, -88, 37, 41, 60, 115, 87, -91, 63, -120, 120, -14, -72, 51, -90};
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
    msg.setTimeStamp(0.15299564005);
    msg.setSource(19709U);
    msg.setSourceEntity(206U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(2U);
    msg.req_id = 38634U;
    msg.ttl = 7000U;
    msg.destination.assign("AHTTPCPTFJHZIPOVOMMMTOUBBJWXCNZSGFHBEJZWGWLQKRINYPJRHXPODRUZWNLITQDRANGYFOIXSVTAFZZQGBVKHVSGXMMRSZFXRSROKH");
    const char tmp_msg_0[] = {122, -95, 56, 94, -82, -65, -50, -90, -124, 25, -117, -82, 0, 32, -6, 97, -76, -37, 80, 49, 33, 80, -91, -9, 112, 2, -117, 118, -123, 51, -17, -21, -9, 8, 50, 97, 73, -25, -88, -106, 95, 19, 63, -65, -124, -111, 50, 102, 100, 16, -100, -109, 36, 36, -125, 123, 85, 47, 103, 85, -46, -15, -67, 126, 88, -72, -118, -35, -41, 5, -81, 75, -107, -83, 25, -25, 80, 29, -61, -9, -74, -2, 74, -83, 87, 7, 1, 81, 55, -119, 56, -81, 95, -101, 89, 49, 61, 32, -61, 40, -64, -117, 65, 27, 19, 57, -11, -76, -47, -99};
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
    msg.setTimeStamp(0.371146433843);
    msg.setSource(46293U);
    msg.setSourceEntity(247U);
    msg.setDestination(20135U);
    msg.setDestinationEntity(157U);
    msg.req_id = 19249U;
    msg.ttl = 54766U;
    msg.destination.assign("SLPFXVLRGSFEGPAYBMKQPHNAHWGVQETVTZTCJRGGKWDRYMJQFGIVYGOWBZYSZSNOMOZEYODZIYQPLZIUWEDFQKWYXMSWRYNVDPAFILMQBBNHYOSMBPZNAKKHTVTCAXCWUFOPUDBETUASALCWWUSTUTUUCEHZEDLGQBINTEOAPRYOXXHRJRNCCDMLNXKBEQVVXJ");
    const char tmp_msg_0[] = {116, -21, 32, -34, -56, 62, -13, -25, 112, 87, -91, -67, -110, 84, -40, -26, -63, 120};
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
    msg.setTimeStamp(0.89022802491);
    msg.setSource(38237U);
    msg.setSourceEntity(190U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(63U);
    msg.req_id = 57160U;
    msg.ttl = 29855U;
    msg.destination.assign("IVJBZKTCPVAVMNFXYZHLTRUXFZVOIWPRIDTRDFVSHPPSBLETKVEWJIDDUBRCKYJNNCKGHQAPGRYUEFRNLSTBYACGRKDLIXQJW");
    const char tmp_msg_0[] = {-82, 10, -20, -45, -119, 24, 9, -102, -93, 35, -118, 4, -3, -74, -106, -52, 25, 60, 79, 32, -42, 12, 67, -20, 104, -95, 73, -62, 94, -8, 92, 94, 70, -37, -108, 120, -94, 84, -35, -34, 124, -47, 52, -36, -125, -114, -54, -117, 14, -98, 11, 117, 76, 86, 42, -123, 71, 88, 86, 34, 10, 51, 114, 61, -86, 4, -14, 9, 72, -123, 102, -62, -19, -32, 45, 79, -106, -19, -109, 45, -90, 69, 57, -25, -62, 80, -50, 56, 37, -21, -62, 81, 85, 37, 14, -98, -79, -7, -52, 59, 83, -98, -104, -62, -110, 98, 59, -100, -122, 72, -2, -109, -23, -70, -90, 45, -5, -21, -13, -105, -74, 36, -29, -7, -40, 68, -122, -23, -100, -104, 75, -70, 26, 110, -21, -99, 63, 29, 106, 48, -107, 3, -113, 94, 75, -123, -66, 11, -26, 72, 17, -89, 81, -46, -110, 112, -33, -39, 80, -116, -99, -70, 11, -75, 101, -43, 68, -115, 117, -108, -105, -34, 47, 34, -110, -68, 70, -128, 3, -99, 73, -116, 81, 2, -29, 8};
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
    msg.setTimeStamp(0.170111740219);
    msg.setSource(36626U);
    msg.setSourceEntity(227U);
    msg.setDestination(62607U);
    msg.setDestinationEntity(198U);
    msg.req_id = 26326U;
    msg.status = 68U;
    msg.text.assign("AOCFBALSCKNVHTDGFYYNGHWAKNZORUFPSJCQURGTTKUPXJVOZYMMFIFIWQQDLKSVJBSNLOCPZAAJ");

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
    msg.setTimeStamp(0.765679865647);
    msg.setSource(55454U);
    msg.setSourceEntity(101U);
    msg.setDestination(56505U);
    msg.setDestinationEntity(171U);
    msg.req_id = 14796U;
    msg.status = 148U;
    msg.text.assign("JCRFLMZHKHUWERDDSYQDXEKIPHKKPIFYPVDMTJMKLRBDEGBUWTLOKMBSLGWXYFDCJJYWXGXQOHTKUAKQXCJIGZSQPLNSVQIJOXSNHPXCSJQXMPJZMWPYUTSUQLLEYWVIIAPGRRGGDTNCAETTUKAQBACONVZYYLLDNE");

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
    msg.setTimeStamp(0.976435098026);
    msg.setSource(27560U);
    msg.setSourceEntity(134U);
    msg.setDestination(37358U);
    msg.setDestinationEntity(200U);
    msg.req_id = 5510U;
    msg.status = 57U;
    msg.text.assign("RNCZTWRMUFUIYQCJAREEIKQWEXFIWWOLEOPZCBYCGDMHFDENLKCCYCLFLSTLTZWULANQHNMZQPDIFWDPHUMHXVFMQTKNGFGSJZMHJRSZWAIDJDAGBAJGIXYKKGTYXEMBNBROXVKXZIETJWGXACMDYBRVCTQQRSJYLNEPAKOFLCUAHPAOTSUSWVVMLLXPOEJQDGGJHIOURSKIYTIVSNVD");

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
    msg.setTimeStamp(0.196685402547);
    msg.setSource(54707U);
    msg.setSourceEntity(35U);
    msg.setDestination(47321U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("JCHOGHXAFBLGEEWEDGIVKZZBGRPDGBYIWKTOJPRRMVWPPEFLPQIIATARKXZLBGDXBOKYQXRYSIUYLAXDNSYVXIZJDYFWVTXVFFRHWJGBRRZMVLQCAMUCNGHPKELFZHOKWQZZAUOJLMQOYRSPLPZECCNKWSKEMNHCMNDSWNLBDVTUVUCVJCQDDOFMIEMSBINTACFUOSDSHAJIKYNQTMMRIVYOGTFCSSAPNQHWNOYTB");
    msg.links = 207216377U;

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
    msg.setTimeStamp(0.830609481477);
    msg.setSource(1264U);
    msg.setSourceEntity(239U);
    msg.setDestination(9643U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("BJSXCUNQAYDHAUBOPMTDGENBJSOVRQBKGXFZPCLOEBLSOINVOGJEAXZNQWGZNSZBSWQYPIODUFEDYDDQZZFWKEPNRICSATCOMTFVCURAEOMFSJGMFDMRFJKMLIVYJLKKVFDARMWZLDHJIWQGMWLWNKHLQWVXY");
    msg.links = 587737553U;

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
    msg.setTimeStamp(0.539634814775);
    msg.setSource(36590U);
    msg.setSourceEntity(204U);
    msg.setDestination(60050U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("PCUHARLMXOTTXUYAAYJJEVWCYYFILGKRMNSVFGBKZQMIFPMNFVSCDGEJKDQTZMIQBIBFOTXYSPXDQJUSTKYLFXRGWIPLDVRXYMAOIZWRFOTAJE");
    msg.links = 3408990079U;

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
    msg.setTimeStamp(0.0266264075909);
    msg.setSource(15253U);
    msg.setSourceEntity(175U);
    msg.setDestination(65427U);
    msg.setDestinationEntity(12U);
    msg.groupname.assign("CWHTQGRWAQXGWK");
    msg.action = 70U;
    msg.grouplist.assign("IMBGHWCEWVLTLVHWZXLAMMVDQCEIERODJADQZXNOKGRRVDAFMNJJSYBFJGAXLODPAJFOCIYEZUSTBKJMPUKNDEIISTVAWIGVURKPECCLTRBDGUTNRXCCCPXBXVZSCBMMNZFNYWVHFWQHTLBOOJUGYMBYYDASDRJZOHH");

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
    msg.setTimeStamp(0.0724066797504);
    msg.setSource(49592U);
    msg.setSourceEntity(91U);
    msg.setDestination(27594U);
    msg.setDestinationEntity(209U);
    msg.groupname.assign("IDAIOSGRMCPKUVRSLTPPWLLUJLHOBZOHINDSYOTYWKOQBCDHIPWQKXXJLOHALFBFXIEBUTHCHWMIKGWZUZDGJQHMWUOGANVEKSHFVRRXNLDTIJGIRHXVMYQPXBJTVBEVFZFEXMUSDDDEKMPHWYAYLZCXQRTXKONLCERZFBCUABCGKSGWVBPPMVTERYFNGTSZONY");
    msg.action = 9U;
    msg.grouplist.assign("KCLZOKIKFIEBAFLJCSXLUUJMEHTNBFISRDMILVYHSGZISAQOLZXECQGGRUXVSD");

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
    msg.setTimeStamp(0.282011754972);
    msg.setSource(45120U);
    msg.setSourceEntity(144U);
    msg.setDestination(37163U);
    msg.setDestinationEntity(64U);
    msg.groupname.assign("WMTDABURZJGUCGEGPGXVLUQHSJMLWKMLDSSEIELKXLYCXUEHLQRSNHJWPMHVQNJSFZDKGJZPMPNVBNIGBXZILVLRMECXUAJFCFWKTRRZDEMSWYLRYBOKCPYDOZHWZXTSIINOHPSJFAEMTHUVQGTDPEDBAIAOBSCHQRPTRTNRQFHUYNBYQBJDAFKGOGVCXACWUKT");
    msg.action = 38U;
    msg.grouplist.assign("CSJUBGEDIDEYRQMEQCAEZKNSIMXILHMEBIGDJIKNLHXFDHPHVKJSFWWRGTNNNPKPWUVVQVVQYADVTCEFJCXJFIUTHMWOWSWSHQDAXYLOIPWZNQKPKLYVCMBGRXSZOCXXYVKMTALGJQRHKZPUBSQJGAOF");

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
    msg.setTimeStamp(0.569869277353);
    msg.setSource(39916U);
    msg.setSourceEntity(157U);
    msg.setDestination(5612U);
    msg.setDestinationEntity(28U);
    msg.value = 0.676633919535;
    msg.sys_src = 58964U;

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
    msg.setTimeStamp(0.558042641277);
    msg.setSource(24719U);
    msg.setSourceEntity(231U);
    msg.setDestination(24718U);
    msg.setDestinationEntity(7U);
    msg.value = 0.828570928136;
    msg.sys_src = 22873U;

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
    msg.setTimeStamp(0.552586428812);
    msg.setSource(55480U);
    msg.setSourceEntity(66U);
    msg.setDestination(36962U);
    msg.setDestinationEntity(234U);
    msg.value = 0.750881125036;
    msg.sys_src = 43750U;

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
    msg.setTimeStamp(0.0201598263498);
    msg.setSource(58493U);
    msg.setSourceEntity(172U);
    msg.setDestination(42374U);
    msg.setDestinationEntity(71U);
    msg.value = 0.40360359815;
    msg.units = 164U;

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
    msg.setTimeStamp(0.64663545618);
    msg.setSource(16448U);
    msg.setSourceEntity(167U);
    msg.setDestination(34340U);
    msg.setDestinationEntity(218U);
    msg.value = 0.910185902918;
    msg.units = 136U;

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
    msg.setTimeStamp(0.194996963341);
    msg.setSource(18374U);
    msg.setSourceEntity(211U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(247U);
    msg.value = 0.921997323403;
    msg.units = 76U;

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
    msg.setTimeStamp(0.301914940835);
    msg.setSource(51231U);
    msg.setSourceEntity(212U);
    msg.setDestination(8991U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.0934053638547;
    msg.base_lon = 0.968941695245;
    msg.base_time = 0.0723070331727;

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
    msg.setTimeStamp(0.290222057362);
    msg.setSource(22673U);
    msg.setSourceEntity(171U);
    msg.setDestination(7421U);
    msg.setDestinationEntity(170U);
    msg.base_lat = 0.597251693517;
    msg.base_lon = 0.511985438332;
    msg.base_time = 0.318107867054;

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
    msg.setTimeStamp(0.260538516254);
    msg.setSource(25044U);
    msg.setSourceEntity(24U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(208U);
    msg.base_lat = 0.464328625663;
    msg.base_lon = 0.939125186085;
    msg.base_time = 0.631996344485;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 56225U;
    tmp_msg_0.destination = 30679U;
    tmp_msg_0.timeout = 0.470439517452;
    IMC::Turbidity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.678502914284;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.528293685033);
    msg.setSource(6509U);
    msg.setSourceEntity(160U);
    msg.setDestination(28834U);
    msg.setDestinationEntity(107U);
    msg.base_lat = 0.909673116849;
    msg.base_lon = 0.625149525734;
    msg.base_time = 0.724806063258;
    const char tmp_msg_0[] = {-34, 85, 25, 126, -36, 61, -111, -64, 58, -27, -117, -23, 89, -75, -51, -84, -120, -25, 54, 32, 70, -1, 99, -112, 109, 5, 33, 31, 12, 91, 51, 23, 23, 34, -117, 88, -2, -21, 80, -78, 18, -21, 109, -29, 16, -86, -8, -58, -70, -73, 6, -58, -32, -71, -8, -39, -66, 7, -116, 95, -118, -36, -84, 25, 92, -58, -103, -35, -9, -33, 12, -82, -37, -31, -119, -3, 64, -45, -109, 69, 50, 21, -7, 72, -65, -119, -1, -49, 20, 33, 95, 75, -112, -94, 106, 100, -92, -5, -119, -46, 71, 61, 110, -127, -83, -119, -127, -106, -38, -54, -69, 99, 49, -41, -37, -103, 17, -16, 89, 100, 123, -122, -112, 43, -8, 53, 38, 94, -36, -7, -88, -79, 10, -80, -78, -119, 74, -12, 118, -123, 35, 102, 7, -2, -20, 54, -113, -46, -23, 49, 98, -78, -39, 27, 80, 6, 58, 90, 60, 28, 126, 10, -123, -57, -42, -55, 45, -82, 87, -78, -30, 86, 76, -18, 66, -60, 6, 123, -79, 41, -88, -8, 73, -51, 72, 85, 107, 6, -97, 123, 28, -56, -38, -28, -33, 63, -78, 8, -108, 84, -110, 13, 101, -42, 8, -19, 5, -54, 75, 88, -57, 6, -82, 8, 23, -70, 17, 103, -89, 98, 111, 108, -31, 8, -56, -120, -4, 112, -81, -52, 22, 126, -90, 113, -52, -117, 15, 41, 37, -121, 41, -104, 8, -54, -19, 14, 52, 24, -50, -119, 41, -89, 14, 16};
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
    msg.setTimeStamp(0.347583722345);
    msg.setSource(40043U);
    msg.setSourceEntity(101U);
    msg.setDestination(12528U);
    msg.setDestinationEntity(227U);
    msg.base_lat = 0.609898771968;
    msg.base_lon = 0.963351364485;
    msg.base_time = 0.000410441961493;
    const char tmp_msg_0[] = {-114, 30, 74, 112, -74, -29, 101, 19, 71, -22, 46, -115, 120, 82, 18, 30, 8, -55, 63, 17, 25, -15, -115, 106, 76, -70, 109, -121, -23, 80, 122, 81, 79, -2, 58, -37, 72, 53, 113, -52, -8, -89, 71, -107, 56, 117, 7, 24, 106, 23, -86, 43, -101, -83, -60, 116, 58, -57, -58, 52, -16, 11, 26, 125, 108, 20, -20, 87, 111, 77, -106, 0, 103, 117, 35, -26, -96, 65, 109, 114, -5, 42, -60, 1, 76, 35, 16, -62, -41, -9, -34, -15, 79, 79, -14, 50, -77, 91, -21, 42, 32, 34, 123, 122, -26, 4, -12, 114, -68, -94, 80, -113, -28, 94, -45, 30, -127, 61, -42, 77, -126, 7, 43, -48, -68, 33, -72, -18, -11, -13, 61, -78, 93, -68, -88, -84, 27, -68, 76, 3, 90, -41, -86, -115, -74, 54, -80, -70, 60, 29, -45, 39, -14, 92, -20, 3, 7, -52, -82, 15, 89, -97};
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
    msg.setTimeStamp(0.840946875469);
    msg.setSource(21583U);
    msg.setSourceEntity(96U);
    msg.setDestination(37376U);
    msg.setDestinationEntity(153U);
    msg.base_lat = 0.547751710439;
    msg.base_lon = 0.565317632054;
    msg.base_time = 0.91432802562;
    const char tmp_msg_0[] = {9, -119, 7, -80, -110, 77, -78, 63, 70, -28, 122, -117, 117, 87, 111, -48, 49, 85, -24, 11, 105, -102, 25, 73, 4, -34, 35, -70, 101, -52, -79, -76, 80, -19, 83, -83, 21, -36, -88, -107, 81, -53, -93, 45, 92, -36, -24, 113, -126, 126, 75, -102, -68, 23, 86, -22, 60, 12, 12, -99, -81, 28, 41, 10, 14, -41, 44, -71, -15, -120, -66, 1, 76};
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
    msg.setTimeStamp(0.406639711541);
    msg.setSource(52992U);
    msg.setSourceEntity(67U);
    msg.setDestination(24230U);
    msg.setDestinationEntity(238U);
    msg.sys_id = 17774U;
    msg.priority = -43;
    msg.x = -4139;
    msg.y = 16781;
    msg.z = -17414;
    msg.t = 16603;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 44872U;
    tmp_msg_0.type = 186U;
    tmp_msg_0.utc_year = 35727U;
    tmp_msg_0.utc_month = 151U;
    tmp_msg_0.utc_day = 146U;
    tmp_msg_0.utc_time = 0.602176276664;
    tmp_msg_0.lat = 0.539545844752;
    tmp_msg_0.lon = 0.651709575885;
    tmp_msg_0.height = 0.396079846733;
    tmp_msg_0.satellites = 110U;
    tmp_msg_0.cog = 0.420134852525;
    tmp_msg_0.sog = 0.506699071856;
    tmp_msg_0.hdop = 0.0459102278777;
    tmp_msg_0.vdop = 0.145347221733;
    tmp_msg_0.hacc = 0.50476627914;
    tmp_msg_0.vacc = 0.381848237578;
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
    msg.setTimeStamp(0.152248379707);
    msg.setSource(13864U);
    msg.setSourceEntity(87U);
    msg.setDestination(29986U);
    msg.setDestinationEntity(172U);
    msg.sys_id = 51066U;
    msg.priority = 76;
    msg.x = 21140;
    msg.y = 9308;
    msg.z = 31838;
    msg.t = -32120;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 41042U;
    tmp_msg_0.lat = 0.433461525336;
    tmp_msg_0.lon = 0.381531292822;
    tmp_msg_0.speed = 0.677208543467;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.custom.assign("MEZKHYSSQLHIJXJKPMDDBYSXJDZEMUJFTZWPSZDITGUBGFJZMCFNBNORCCXWDLCYKDGXTBIGQHYBPBPEIHAQEFN");
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
    msg.setTimeStamp(0.0570191185843);
    msg.setSource(15365U);
    msg.setSourceEntity(233U);
    msg.setDestination(6736U);
    msg.setDestinationEntity(214U);
    msg.sys_id = 4525U;
    msg.priority = -114;
    msg.x = 30544;
    msg.y = -3968;
    msg.z = 14557;
    msg.t = 19431;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.873456766861;
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
    msg.setTimeStamp(0.565865839797);
    msg.setSource(50156U);
    msg.setSourceEntity(118U);
    msg.setDestination(48584U);
    msg.setDestinationEntity(212U);
    msg.req_id = 40832U;
    msg.type = 71U;
    msg.max_size = 32559U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.974191173139;
    tmp_msg_0.base_lon = 0.215998360364;
    tmp_msg_0.base_time = 0.623984405083;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 2381U;
    tmp_tmp_msg_0_0.priority = -125;
    tmp_tmp_msg_0_0.x = -1777;
    tmp_tmp_msg_0_0.y = 1426;
    tmp_tmp_msg_0_0.z = 26583;
    tmp_tmp_msg_0_0.t = 4126;
    IMC::ButtonEvent tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.button = 5U;
    tmp_tmp_tmp_msg_0_0_0.value = 56U;
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
    msg.setTimeStamp(0.780971849921);
    msg.setSource(53106U);
    msg.setSourceEntity(247U);
    msg.setDestination(2129U);
    msg.setDestinationEntity(221U);
    msg.req_id = 63370U;
    msg.type = 15U;
    msg.max_size = 61637U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.736882722765;
    tmp_msg_0.base_lon = 0.64597523333;
    tmp_msg_0.base_time = 0.879199658636;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 9633U;
    tmp_tmp_msg_0_0.priority = 45;
    tmp_tmp_msg_0_0.x = 31213;
    tmp_tmp_msg_0_0.y = 23482;
    tmp_tmp_msg_0_0.z = 25251;
    tmp_tmp_msg_0_0.t = -13520;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.301624683736;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.812614353439;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.26700607045;
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
    msg.setTimeStamp(0.19551628657);
    msg.setSource(43780U);
    msg.setSourceEntity(92U);
    msg.setDestination(60303U);
    msg.setDestinationEntity(183U);
    msg.req_id = 7698U;
    msg.type = 201U;
    msg.max_size = 42754U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.81834015212;
    tmp_msg_0.base_lon = 0.76729843787;
    tmp_msg_0.base_time = 0.232063472688;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 44668U;
    tmp_tmp_msg_0_0.priority = 41;
    tmp_tmp_msg_0_0.x = -29773;
    tmp_tmp_msg_0_0.y = -32686;
    tmp_tmp_msg_0_0.z = -7630;
    tmp_tmp_msg_0_0.t = 29674;
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("FUIFIVMLJKWQDMXZFSBQVEURZJDMTOGBURHFGGMWKTPAMCQFCNUOBPZSGNZCRJTUDWNFMBPEVAENJVCSHKRSTSOXPEWRDUJSBEOVGYZBKRWBXYVWIPSZSYHOQLOJZRAKEPXNQGNXHNVAMCTGPIXBAQVXGIKIDNFUGYLFUQUCYYGFNHRCTIYKIHWUNHDEC");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 192U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("OFOTBRIFEOZFLJZACHGYOUNEMLBADJFIPZPVTNPDKPDHEUCDWIQDAMARPFWNUELTYNLDSEZBGEFJVKQ");
    tmp_tmp_tmp_msg_0_0_0.max.assign("ZDFWPCSUPFDEDMPOPYDRUKQXFRTRLHHYCQEAONKCFESCJVNMLOPZKBYEDXBXLLGMOUUBXEYTZAXCMCJHIMBOHIZMNTGOQRNBWWRUTIASJPPXBVVTMAHYISMDIKJSLOUWANVQFQTAJOHKJNMYFTHVFCFPBDLZGWISUNKRADGRRRJSEILVTIPQR");
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
    msg.setTimeStamp(0.145340903916);
    msg.setSource(53263U);
    msg.setSourceEntity(47U);
    msg.setDestination(1237U);
    msg.setDestinationEntity(163U);
    msg.original_source = 37156U;
    msg.destination = 43813U;
    msg.timeout = 0.980340594759;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.92848559767;
    tmp_msg_0.speed_units = 172U;
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
    msg.setTimeStamp(0.765895826779);
    msg.setSource(54336U);
    msg.setSourceEntity(245U);
    msg.setDestination(48295U);
    msg.setDestinationEntity(218U);
    msg.original_source = 6731U;
    msg.destination = 19093U;
    msg.timeout = 0.795651802803;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("ONWLHDFBXKVSQGEHLZAEEGTYVUTPVYHPYPXNPUTQLSFWKCZPMSVKKGKNOGVUIKCJGUORCRJBNXCODXOVPCWSTQNRHFQCLHRXLYMALBXMZYKVSXIIZGLZEYDHGJDMTESMJZRHLDCHOACZBWWFQEYWRFZIPXEKJUIAHKZOFAY");
    tmp_msg_0.message_id = 33606U;
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
    msg.setTimeStamp(0.218628237356);
    msg.setSource(31274U);
    msg.setSourceEntity(72U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(28U);
    msg.original_source = 11530U;
    msg.destination = 9379U;
    msg.timeout = 0.944371845507;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 46007U;
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
    msg.setTimeStamp(0.436814614778);
    msg.setSource(42661U);
    msg.setSourceEntity(245U);
    msg.setDestination(36500U);
    msg.setDestinationEntity(33U);
    msg.id = 63U;
    msg.range = 0.55442511091;

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
    msg.setTimeStamp(0.0308848461712);
    msg.setSource(6480U);
    msg.setSourceEntity(238U);
    msg.setDestination(6053U);
    msg.setDestinationEntity(168U);
    msg.id = 235U;
    msg.range = 0.261050188551;

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
    msg.setTimeStamp(0.804664471436);
    msg.setSource(62755U);
    msg.setSourceEntity(38U);
    msg.setDestination(58815U);
    msg.setDestinationEntity(87U);
    msg.id = 97U;
    msg.range = 0.482208132612;

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
    msg.setTimeStamp(0.188372696036);
    msg.setSource(32944U);
    msg.setSourceEntity(243U);
    msg.setDestination(46361U);
    msg.setDestinationEntity(102U);
    msg.beacon.assign("HJQNWDBRRNOPDCSVFXH");
    msg.lat = 0.387667954001;
    msg.lon = 0.498231893638;
    msg.depth = 0.38264536794;
    msg.query_channel = 153U;
    msg.reply_channel = 213U;
    msg.transponder_delay = 80U;

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
    msg.setTimeStamp(0.00951836188361);
    msg.setSource(31327U);
    msg.setSourceEntity(18U);
    msg.setDestination(26925U);
    msg.setDestinationEntity(55U);
    msg.beacon.assign("HHHUVEJSLBEQMQAOKMTHUWAKLPGNCNFIVNLCSIANBGNUHJXDHYVLYRMGGUZPTORCAECJYXWFDAKSEJXTAUAXYWBJHIIFWILSBRCULAFRRZBDJUREPWDMWZQXMESXUFGW");
    msg.lat = 0.803081736547;
    msg.lon = 0.0816756874705;
    msg.depth = 0.0510283849911;
    msg.query_channel = 84U;
    msg.reply_channel = 218U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.696449092041);
    msg.setSource(31166U);
    msg.setSourceEntity(26U);
    msg.setDestination(11936U);
    msg.setDestinationEntity(116U);
    msg.beacon.assign("QRMVFMUZNBEGQDIW");
    msg.lat = 0.995678340543;
    msg.lon = 0.26823122517;
    msg.depth = 0.0443132918053;
    msg.query_channel = 179U;
    msg.reply_channel = 19U;
    msg.transponder_delay = 52U;

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
    msg.setTimeStamp(0.00158437916805);
    msg.setSource(57914U);
    msg.setSourceEntity(58U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(69U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.769755565848);
    msg.setSource(30279U);
    msg.setSourceEntity(1U);
    msg.setDestination(25068U);
    msg.setDestinationEntity(244U);
    msg.op = 76U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VTIXCRYZELCNGFWNGESYUCRSQGUXLJMZXKYSFNQJCLCRTBXWSGBQBDEGXMP");
    tmp_msg_0.lat = 0.88681630429;
    tmp_msg_0.lon = 0.281692123719;
    tmp_msg_0.depth = 0.0801576350832;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 138U;
    tmp_msg_0.transponder_delay = 66U;
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
    msg.setTimeStamp(0.214863947232);
    msg.setSource(31165U);
    msg.setSourceEntity(234U);
    msg.setDestination(35634U);
    msg.setDestinationEntity(201U);
    msg.op = 98U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NBFQLOOBWOQRESNHQCOMBVXAKHHWRIAZTFEPTPFGGPURBTLSYTYKDSEGZQKLTKTIVDQALPUPOJHDNUWXUSRBAJYXAFQYMZSVSDYMNLCMUPPNGFIWELRM");
    tmp_msg_0.lat = 0.440515799495;
    tmp_msg_0.lon = 0.429218116625;
    tmp_msg_0.depth = 0.539812110345;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 36U;
    tmp_msg_0.transponder_delay = 223U;
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
    msg.setTimeStamp(0.676590976883);
    msg.setSource(26604U);
    msg.setSourceEntity(230U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(0U);
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 49U;
    tmp_msg_0.text.assign("ACZSPXRMEOKALRDUJKGYSWLOCVHNPHBBXIWVTFOYPCOSJTSMQLLXGKUQVBHNZATRXVTDFWPHGKCDHLIYAIFBXTDZTZNMNBQEZBNIIFUDSOEPLIRWHEIGECKXKMORQUDMRFJJCKASUCJPWJBGHPBZMQAHDHJOPSVWTWADVBXNJNXDIOGLGJKYWECMDUENRASECYTXFFEUGAYRQJPYAUKYSGILTLVVMEFBFCNSRLTRQWMFHUQPIWMYOXGUVOZQZ");
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
    msg.setTimeStamp(0.776027018958);
    msg.setSource(52428U);
    msg.setSourceEntity(90U);
    msg.setDestination(47797U);
    msg.setDestinationEntity(253U);
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 37U;
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
    msg.setTimeStamp(0.423168812606);
    msg.setSource(16572U);
    msg.setSourceEntity(23U);
    msg.setDestination(11866U);
    msg.setDestinationEntity(80U);
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 18U;
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
    msg.setTimeStamp(0.873775554948);
    msg.setSource(11611U);
    msg.setSourceEntity(204U);
    msg.setDestination(55236U);
    msg.setDestinationEntity(127U);
    msg.op = 145U;
    msg.system.assign("KMFOIPFGDYFAHLYECPWMSKMEAQQGTSXEGNQSFTRHVMKULGDJALJFQAGOD");
    msg.range = 0.609217733024;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 153U;
    tmp_msg_0.htime = 0.381354245051;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 61U;
    tmp_tmp_msg_0_0.htime = 0.520154037151;
    tmp_tmp_msg_0_0.context.assign("OGHNNKXCLFXTLPPTYALJUQEFYEODHUAIAJYKYPCRFQDCWUQPVEKSDRLOHRJWRIVYMSKPCBWPCLGHMDMODGQRDVVMJBXZNCIZYXTWUYRPOSFNCKPZTTEMVUVOVRQADQARZWAOKZLIYJSSBBDBSNYGOHRWUXNMGSEVGJKWKNZFIUJBQSICINFZUISMXABPIWRGEFAZAVBXHBEQNIEXQHFDZKMVEWWBQCJLTGXHLHUKOJYLN");
    tmp_tmp_msg_0_0.text.assign("RMCDFAPVSGVEJIQXGUIAJXGJLSPTEPMZVKGDQKUDWRFFRPXIXGZSGYIYYQIKUORJBUWOJKZOJMYTKCNMTGEMYVABXQWCBRGZHWFEPOECRENKSTIDBJZPLANBYQNKIAKWVYXHTLOFUVSAVR");
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
    msg.setTimeStamp(0.286701149901);
    msg.setSource(8320U);
    msg.setSourceEntity(41U);
    msg.setDestination(32191U);
    msg.setDestinationEntity(117U);
    msg.op = 145U;
    msg.system.assign("FERGZRDUZNYJIDUSFGUFCIPWXBBYIHSHKFSZVHQVNOYTVIOZWOYDVWYGWLMKHXNWWXPLNUPAXHULUBFAEPBZLMSZKWDBCKSGTQQVVCMWUANBZXOBSSHCUXRTDLXPKZJVIHOVTGREOOPRDZFCMRLDYJYNYSHEFJQJCQ");
    msg.range = 0.983031316755;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 120U;
    tmp_msg_0.htime = 0.423534414691;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 205U;
    tmp_tmp_msg_0_0.htime = 0.773115229974;
    tmp_tmp_msg_0_0.context.assign("LSDVRSYQBZAXFHWLVFNNNUKADQDPEKPHEPAZILEYWFFONQTBOEKRPTYCTURGKSODHBQJVKGFRHMSKTFITUPYOCEMWSFHJIQIUEYGMTBTPCHDABTSZSRERCMJVRUVDJXIQYGVVHFOICZJFZYKIIZGWGAJSZXGXSZWXOGNGCSLOJRWDIXAPUQNQU");
    tmp_tmp_msg_0_0.text.assign("NSRLZXLOPNWVJHWCYRNZIVUSIRGNEOOYSAQKXZWSGCVAGPTERLYMMUJVPBCOLTIQDACVBKHCDHWPCUNXQPVRCEFGLMQFDQBYWSIZAEWQAARIFFGYFKUGUODMLVOIBSDTZOWMFXBHXDZEGEKXKUUOXGIFECHLZYDANHTDYFTATTJCKUJVRSRBLKRWNEHCAIHOZPGX");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.281278739725);
    msg.setSource(46642U);
    msg.setSourceEntity(190U);
    msg.setDestination(54234U);
    msg.setDestinationEntity(196U);
    msg.op = 201U;
    msg.system.assign("DUCBTFCBCCPTWGYOOLAGZWKGMZPEWBADJEQKOAAHXCYMK");
    msg.range = 0.964736756553;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 85U;
    tmp_msg_0.htime = 0.0923738745066;
    tmp_msg_0.context.assign("MGANLPZWCSHNWOHBKVZJJWSBRSRWDVRKXEKJTMAZYGXURTEKLXUEGFNZYEHGPFCJMYNBCOSNCCDDLKAKOBRZUIDRGWYGVEYVQBZHNTPBCIVIFIQTHUVTQWMMVUAOYMSJDWRUQOHQLMOEWKNBYPSTQPLTQJACQOYRAMGXIIHPJAKISBUXFXJSUCPDJLZB");
    tmp_msg_0.text.assign("UWPQDZMOVAQRMNIZRVAEGAIYMUAKVZXOPWYKYHOMJLDQCZRTXLTLJIUE");
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
    msg.setTimeStamp(0.402032758299);
    msg.setSource(41420U);
    msg.setSourceEntity(53U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.209409028573);
    msg.setSource(646U);
    msg.setSourceEntity(209U);
    msg.setDestination(52963U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.419488876466);
    msg.setSource(13004U);
    msg.setSourceEntity(87U);
    msg.setDestination(25382U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.55482481204);
    msg.setSource(17442U);
    msg.setSourceEntity(119U);
    msg.setDestination(15257U);
    msg.setDestinationEntity(5U);
    msg.list.assign("SXGHLJXHUAVEPZIHFHAIWRTDWDPIJRFSCDGLYFGFYBHUIYOGEJQNFZVKWRRAEIDQZBYTCVTTXAQWNNBMENQVEUGVFXJFTBUQFZZBOLXSUVTSRQPEFJWUXIIAKWCMK");

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
    msg.setTimeStamp(0.240154015022);
    msg.setSource(3228U);
    msg.setSourceEntity(216U);
    msg.setDestination(29075U);
    msg.setDestinationEntity(109U);
    msg.list.assign("ZINMHZURDVTZOXITPPCVZXHWMEKMNIPOWZYLHGLTGMQKXASAFLIOUXRBCIMOSDGDBPYVCGLQHWQYJMZCKNLLHJEIFKRSABJQEUIBBZCULEHSHBJGKQYCEBXNQVDDJFIJGXAAPRKTQREXMJUDXTDJUNKYWQRCQXDWBOPFEFYTTYNAFOLAEDWVLOWYUGSGHNQXRHVCZHSRTFPNPJEGUNRRSKMYBTFVZWEOTAUWIMPCAGPWJVNFMCSO");

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
    msg.setTimeStamp(0.126165829341);
    msg.setSource(4692U);
    msg.setSourceEntity(50U);
    msg.setDestination(19190U);
    msg.setDestinationEntity(189U);
    msg.list.assign("KMDNRLESXXFHLAZTFAKLYXPJKNIHNCZGQQYDWAKHROVACSTITCZVTPVOESSNZDSTTLCLXBFLIDUQBBLPNPORADHUVBHYCDSMECSAQFKWFXKRVHVQUJVAQOXLWLYGDNTQKORKRYNGWFIWBTGPBDXUGZFOVYUIZHGWMNBTVQJDBOIZHJYCW");

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
    msg.setTimeStamp(0.949977359216);
    msg.setSource(1490U);
    msg.setSourceEntity(222U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(221U);
    msg.peer.assign("UPRKNOCJIKNCFFTRPQKGGVPYQKVSMFECCTPUPHCYOSTVNMUVNDGNJLJYERMBFPKGHYPLRBOYKVIGKIZUJABWISIUDLWLQGSFUZQTFTEMGDZPIIDELAOEFAVXLHTYGIEWJFMBBVAYHMEXABDQAOCVTAQFYUPHSNZODZJKYGRAXIWNJXISKAODHJQNOTQEBWXMOUVEXXBRZUVQMCNATQOMBLLXJBRDCCUHGFJHZWYWXLLNSZRPKSZHH");
    msg.rssi = 0.293745912436;
    msg.integrity = 56963U;

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
    msg.setTimeStamp(0.0867182795313);
    msg.setSource(29787U);
    msg.setSourceEntity(109U);
    msg.setDestination(2677U);
    msg.setDestinationEntity(200U);
    msg.peer.assign("BOPLDPWIZJHHZMMIHNSRGDAUCPJXJKKCQEWFWTCBUJOCBDPQOLVSGMRBDNLNCHGURLAGNIMTYXOWXRQYSMUVQPPPKXYTSHYKXLAJGZYSCEFSDFYDCXPQAADELIUCIANNPINXURJCGHSNWEBUBJXKODVHJXAVVBCVYWLDRBMZFRSXGZVNEBGSQJZVNTATILFTOFGEWU");
    msg.rssi = 0.682675211727;
    msg.integrity = 15998U;

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
    msg.setTimeStamp(0.878990434135);
    msg.setSource(26407U);
    msg.setSourceEntity(143U);
    msg.setDestination(61642U);
    msg.setDestinationEntity(64U);
    msg.peer.assign("XXSRYFQPKPQZPWYAQZSYNDLHKDQRLUWBAQNGKVUVPBNTDGKEVKRYOGWJPAHXTERCMFXWECMCDWTTASCVLWKJ");
    msg.rssi = 0.0554551015298;
    msg.integrity = 57823U;

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
    msg.setTimeStamp(0.52568257589);
    msg.setSource(4618U);
    msg.setSourceEntity(59U);
    msg.setDestination(6407U);
    msg.setDestinationEntity(211U);
    msg.value = -8800;

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
    msg.setTimeStamp(0.176011556045);
    msg.setSource(18174U);
    msg.setSourceEntity(194U);
    msg.setDestination(65098U);
    msg.setDestinationEntity(140U);
    msg.value = 6596;

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
    msg.setTimeStamp(0.941531733511);
    msg.setSource(12685U);
    msg.setSourceEntity(151U);
    msg.setDestination(674U);
    msg.setDestinationEntity(123U);
    msg.value = 31481;

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
    msg.setTimeStamp(0.760589581161);
    msg.setSource(31533U);
    msg.setSourceEntity(33U);
    msg.setDestination(20284U);
    msg.setDestinationEntity(3U);
    msg.value = 0.0343809207564;

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
    msg.setTimeStamp(0.819834977152);
    msg.setSource(13219U);
    msg.setSourceEntity(7U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(8U);
    msg.value = 0.362542769273;

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
    msg.setTimeStamp(0.493212857233);
    msg.setSource(20394U);
    msg.setSourceEntity(154U);
    msg.setDestination(20213U);
    msg.setDestinationEntity(61U);
    msg.value = 0.119713481625;

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
    msg.setTimeStamp(0.722122753868);
    msg.setSource(1823U);
    msg.setSourceEntity(239U);
    msg.setDestination(39470U);
    msg.setDestinationEntity(193U);
    msg.value = 0.252513571082;

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
    msg.setTimeStamp(0.517092502347);
    msg.setSource(40994U);
    msg.setSourceEntity(90U);
    msg.setDestination(56109U);
    msg.setDestinationEntity(206U);
    msg.value = 0.844197139948;

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
    msg.setTimeStamp(0.331000354432);
    msg.setSource(9290U);
    msg.setSourceEntity(142U);
    msg.setDestination(28531U);
    msg.setDestinationEntity(89U);
    msg.value = 0.167688027951;

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
    msg.setTimeStamp(0.959001695259);
    msg.setSource(56113U);
    msg.setSourceEntity(116U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(212U);
    msg.validity = 14283U;
    msg.type = 207U;
    msg.utc_year = 10496U;
    msg.utc_month = 7U;
    msg.utc_day = 149U;
    msg.utc_time = 0.635494552387;
    msg.lat = 0.905316758215;
    msg.lon = 0.561988101438;
    msg.height = 0.494534971473;
    msg.satellites = 0U;
    msg.cog = 0.0303714784145;
    msg.sog = 0.827561270027;
    msg.hdop = 0.632655615506;
    msg.vdop = 0.264429679404;
    msg.hacc = 0.190467167361;
    msg.vacc = 0.849939401801;

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
    msg.setTimeStamp(0.881639816616);
    msg.setSource(25313U);
    msg.setSourceEntity(51U);
    msg.setDestination(45360U);
    msg.setDestinationEntity(253U);
    msg.validity = 40621U;
    msg.type = 31U;
    msg.utc_year = 38006U;
    msg.utc_month = 185U;
    msg.utc_day = 185U;
    msg.utc_time = 0.792781067273;
    msg.lat = 0.0943871727946;
    msg.lon = 0.588985834041;
    msg.height = 0.521233748981;
    msg.satellites = 148U;
    msg.cog = 0.977869656266;
    msg.sog = 0.288070054232;
    msg.hdop = 0.745400461283;
    msg.vdop = 0.312078139827;
    msg.hacc = 0.543261555909;
    msg.vacc = 0.38464703036;

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
    msg.setTimeStamp(0.254125660519);
    msg.setSource(51381U);
    msg.setSourceEntity(89U);
    msg.setDestination(34881U);
    msg.setDestinationEntity(192U);
    msg.validity = 11070U;
    msg.type = 40U;
    msg.utc_year = 64488U;
    msg.utc_month = 134U;
    msg.utc_day = 37U;
    msg.utc_time = 0.068185615646;
    msg.lat = 0.947536017592;
    msg.lon = 0.768351380555;
    msg.height = 0.460345242751;
    msg.satellites = 212U;
    msg.cog = 0.85893674536;
    msg.sog = 0.552075871871;
    msg.hdop = 0.775818586042;
    msg.vdop = 0.14470414562;
    msg.hacc = 0.410117058262;
    msg.vacc = 0.319277041638;

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
    msg.setTimeStamp(0.244492272602);
    msg.setSource(32332U);
    msg.setSourceEntity(72U);
    msg.setDestination(36746U);
    msg.setDestinationEntity(182U);
    msg.time = 0.307323212981;
    msg.phi = 0.302763805242;
    msg.theta = 0.974142081038;
    msg.psi = 0.176525063929;
    msg.psi_magnetic = 0.674709870627;

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
    msg.setTimeStamp(0.775183137415);
    msg.setSource(4908U);
    msg.setSourceEntity(143U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(110U);
    msg.time = 0.625472286473;
    msg.phi = 0.253052498892;
    msg.theta = 0.512285981697;
    msg.psi = 0.480757119033;
    msg.psi_magnetic = 0.170219930696;

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
    msg.setTimeStamp(0.379779841773);
    msg.setSource(49837U);
    msg.setSourceEntity(158U);
    msg.setDestination(50904U);
    msg.setDestinationEntity(245U);
    msg.time = 0.407375663084;
    msg.phi = 0.178108070265;
    msg.theta = 0.544543036395;
    msg.psi = 0.597759619512;
    msg.psi_magnetic = 0.464241101688;

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
    msg.setTimeStamp(0.488512829024);
    msg.setSource(17020U);
    msg.setSourceEntity(53U);
    msg.setDestination(60993U);
    msg.setDestinationEntity(155U);
    msg.time = 0.448125888391;
    msg.x = 0.44216260053;
    msg.y = 0.332395335748;
    msg.z = 0.959442057866;
    msg.timestep = 0.314281530899;

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
    msg.setTimeStamp(0.649364763476);
    msg.setSource(12977U);
    msg.setSourceEntity(171U);
    msg.setDestination(6423U);
    msg.setDestinationEntity(164U);
    msg.time = 0.146084124662;
    msg.x = 0.897428168964;
    msg.y = 0.124561797885;
    msg.z = 0.74713354655;
    msg.timestep = 0.18208269183;

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
    msg.setTimeStamp(0.80195377967);
    msg.setSource(27416U);
    msg.setSourceEntity(231U);
    msg.setDestination(488U);
    msg.setDestinationEntity(16U);
    msg.time = 0.991868116259;
    msg.x = 0.814159030202;
    msg.y = 0.416071366434;
    msg.z = 0.817112365631;
    msg.timestep = 0.955522487323;

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
    msg.setTimeStamp(0.548215012738);
    msg.setSource(2128U);
    msg.setSourceEntity(190U);
    msg.setDestination(50561U);
    msg.setDestinationEntity(198U);
    msg.time = 0.162192099393;
    msg.x = 0.42360247315;
    msg.y = 0.0785202004279;
    msg.z = 0.0767573308482;

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
    msg.setTimeStamp(0.656409181948);
    msg.setSource(52295U);
    msg.setSourceEntity(45U);
    msg.setDestination(49623U);
    msg.setDestinationEntity(217U);
    msg.time = 0.15355242422;
    msg.x = 0.0910064267548;
    msg.y = 0.621304957649;
    msg.z = 0.171031537212;

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
    msg.setTimeStamp(0.585230236616);
    msg.setSource(65149U);
    msg.setSourceEntity(9U);
    msg.setDestination(33664U);
    msg.setDestinationEntity(239U);
    msg.time = 0.457256187941;
    msg.x = 0.711760603304;
    msg.y = 0.343272075118;
    msg.z = 0.641313126069;

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
    msg.setTimeStamp(0.182425576249);
    msg.setSource(41127U);
    msg.setSourceEntity(189U);
    msg.setDestination(42988U);
    msg.setDestinationEntity(88U);
    msg.time = 0.739807461445;
    msg.x = 0.334294293658;
    msg.y = 0.113004211051;
    msg.z = 0.10957170437;

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
    msg.setTimeStamp(0.899702836465);
    msg.setSource(33593U);
    msg.setSourceEntity(79U);
    msg.setDestination(33793U);
    msg.setDestinationEntity(30U);
    msg.time = 0.193720943186;
    msg.x = 0.293789607009;
    msg.y = 0.912183209456;
    msg.z = 0.397496836311;

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
    msg.setTimeStamp(0.813680502452);
    msg.setSource(38142U);
    msg.setSourceEntity(198U);
    msg.setDestination(13854U);
    msg.setDestinationEntity(224U);
    msg.time = 0.943460944976;
    msg.x = 0.885298250948;
    msg.y = 0.813718385139;
    msg.z = 0.0474187706418;

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
    msg.setTimeStamp(0.985830485517);
    msg.setSource(39181U);
    msg.setSourceEntity(109U);
    msg.setDestination(53603U);
    msg.setDestinationEntity(83U);
    msg.time = 0.894068774017;
    msg.x = 0.801015468631;
    msg.y = 0.607927833177;
    msg.z = 0.536484927809;

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
    msg.setTimeStamp(0.967614236368);
    msg.setSource(20445U);
    msg.setSourceEntity(76U);
    msg.setDestination(813U);
    msg.setDestinationEntity(111U);
    msg.time = 0.750954253853;
    msg.x = 0.870830416267;
    msg.y = 0.000135289351501;
    msg.z = 0.333009621071;

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
    msg.setTimeStamp(0.445556712161);
    msg.setSource(14785U);
    msg.setSourceEntity(25U);
    msg.setDestination(19822U);
    msg.setDestinationEntity(74U);
    msg.time = 0.431006990711;
    msg.x = 0.703044719292;
    msg.y = 0.242951409523;
    msg.z = 0.986246830793;

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
    msg.setTimeStamp(0.840454934675);
    msg.setSource(65026U);
    msg.setSourceEntity(67U);
    msg.setDestination(65422U);
    msg.setDestinationEntity(149U);
    msg.validity = 228U;
    msg.x = 0.472790769806;
    msg.y = 0.795131875359;
    msg.z = 0.460419744971;

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
    msg.setTimeStamp(0.228745973507);
    msg.setSource(5561U);
    msg.setSourceEntity(117U);
    msg.setDestination(42933U);
    msg.setDestinationEntity(46U);
    msg.validity = 133U;
    msg.x = 0.133791883107;
    msg.y = 0.664289168194;
    msg.z = 0.375855967;

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
    msg.setTimeStamp(0.927351226427);
    msg.setSource(61495U);
    msg.setSourceEntity(0U);
    msg.setDestination(35405U);
    msg.setDestinationEntity(170U);
    msg.validity = 184U;
    msg.x = 0.83902193713;
    msg.y = 0.334733282317;
    msg.z = 0.303890772225;

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
    msg.setTimeStamp(0.114051524748);
    msg.setSource(57114U);
    msg.setSourceEntity(115U);
    msg.setDestination(17053U);
    msg.setDestinationEntity(111U);
    msg.validity = 142U;
    msg.x = 0.126771740919;
    msg.y = 0.946471552496;
    msg.z = 0.900832105515;

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
    msg.setTimeStamp(0.017004826204);
    msg.setSource(29970U);
    msg.setSourceEntity(40U);
    msg.setDestination(11839U);
    msg.setDestinationEntity(34U);
    msg.validity = 12U;
    msg.x = 0.814631574554;
    msg.y = 0.098355118645;
    msg.z = 0.309441409348;

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
    msg.setTimeStamp(0.515855872473);
    msg.setSource(61041U);
    msg.setSourceEntity(4U);
    msg.setDestination(42370U);
    msg.setDestinationEntity(150U);
    msg.validity = 51U;
    msg.x = 0.76665742208;
    msg.y = 0.117182128426;
    msg.z = 0.14301710347;

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
    msg.setTimeStamp(0.548588569628);
    msg.setSource(38622U);
    msg.setSourceEntity(55U);
    msg.setDestination(45952U);
    msg.setDestinationEntity(69U);
    msg.time = 0.689583557397;
    msg.x = 0.719178747531;
    msg.y = 0.0302814992279;
    msg.z = 0.573874048115;

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
    msg.setTimeStamp(0.404778137814);
    msg.setSource(7984U);
    msg.setSourceEntity(4U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(16U);
    msg.time = 0.510777482335;
    msg.x = 0.541690004744;
    msg.y = 0.160525242221;
    msg.z = 0.576618516322;

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
    msg.setTimeStamp(0.0483943892261);
    msg.setSource(29066U);
    msg.setSourceEntity(173U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(5U);
    msg.time = 0.326061177497;
    msg.x = 0.251616060021;
    msg.y = 0.219752519647;
    msg.z = 0.535222575269;

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
    msg.setTimeStamp(0.452442882433);
    msg.setSource(49767U);
    msg.setSourceEntity(217U);
    msg.setDestination(23653U);
    msg.setDestinationEntity(35U);
    msg.validity = 58U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.537687307139;
    tmp_msg_0.y = 0.0252369617209;
    tmp_msg_0.z = 0.498475742966;
    tmp_msg_0.phi = 0.456723629508;
    tmp_msg_0.theta = 0.784571227701;
    tmp_msg_0.psi = 0.492910274868;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.260419995589;

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
    msg.setTimeStamp(0.921931193815);
    msg.setSource(1793U);
    msg.setSourceEntity(192U);
    msg.setDestination(9159U);
    msg.setDestinationEntity(246U);
    msg.validity = 86U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.937714723526;
    tmp_msg_0.y = 0.0332434753685;
    tmp_msg_0.z = 0.161053310734;
    tmp_msg_0.phi = 0.565744837983;
    tmp_msg_0.theta = 0.583306783572;
    tmp_msg_0.psi = 0.65957824518;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.615224266379;

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
    msg.setTimeStamp(0.0760338885119);
    msg.setSource(7696U);
    msg.setSourceEntity(66U);
    msg.setDestination(54616U);
    msg.setDestinationEntity(73U);
    msg.validity = 74U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.491330733723;
    tmp_msg_0.y = 0.0632812945972;
    tmp_msg_0.z = 0.349229417712;
    tmp_msg_0.phi = 0.0129685494497;
    tmp_msg_0.theta = 0.740547054036;
    tmp_msg_0.psi = 0.181888579351;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.517134033635;

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
    msg.setTimeStamp(0.433362153727);
    msg.setSource(47937U);
    msg.setSourceEntity(4U);
    msg.setDestination(42006U);
    msg.setDestinationEntity(58U);
    msg.value = 0.777209885516;

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
    msg.setTimeStamp(0.431840118945);
    msg.setSource(44170U);
    msg.setSourceEntity(214U);
    msg.setDestination(39700U);
    msg.setDestinationEntity(59U);
    msg.value = 0.841774964894;

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
    msg.setTimeStamp(0.847207019428);
    msg.setSource(34437U);
    msg.setSourceEntity(135U);
    msg.setDestination(1688U);
    msg.setDestinationEntity(204U);
    msg.value = 0.410566921949;

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
    msg.setTimeStamp(0.949475660022);
    msg.setSource(4591U);
    msg.setSourceEntity(91U);
    msg.setDestination(53850U);
    msg.setDestinationEntity(83U);
    msg.value = 0.0609698531464;

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
    msg.setTimeStamp(0.263209589888);
    msg.setSource(40502U);
    msg.setSourceEntity(233U);
    msg.setDestination(64077U);
    msg.setDestinationEntity(165U);
    msg.value = 0.855411223566;

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
    msg.setTimeStamp(0.459592404551);
    msg.setSource(48744U);
    msg.setSourceEntity(238U);
    msg.setDestination(34549U);
    msg.setDestinationEntity(37U);
    msg.value = 0.668307722912;

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
    msg.setTimeStamp(0.853787139259);
    msg.setSource(49726U);
    msg.setSourceEntity(85U);
    msg.setDestination(23673U);
    msg.setDestinationEntity(22U);
    msg.value = 0.651712621141;

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
    msg.setTimeStamp(0.629567477622);
    msg.setSource(48163U);
    msg.setSourceEntity(52U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(121U);
    msg.value = 0.671326648113;

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
    msg.setTimeStamp(0.333621825466);
    msg.setSource(27057U);
    msg.setSourceEntity(99U);
    msg.setDestination(18960U);
    msg.setDestinationEntity(252U);
    msg.value = 0.280301356561;

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
    msg.setTimeStamp(0.523158785053);
    msg.setSource(39798U);
    msg.setSourceEntity(106U);
    msg.setDestination(47762U);
    msg.setDestinationEntity(39U);
    msg.value = 0.416820964741;

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
    msg.setTimeStamp(0.555338925883);
    msg.setSource(44879U);
    msg.setSourceEntity(7U);
    msg.setDestination(8725U);
    msg.setDestinationEntity(14U);
    msg.value = 0.924564058803;

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
    msg.setTimeStamp(0.541067428123);
    msg.setSource(25402U);
    msg.setSourceEntity(137U);
    msg.setDestination(662U);
    msg.setDestinationEntity(136U);
    msg.value = 0.485391715222;

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
    msg.setTimeStamp(0.830277186004);
    msg.setSource(18573U);
    msg.setSourceEntity(23U);
    msg.setDestination(46034U);
    msg.setDestinationEntity(242U);
    msg.value = 0.712893720243;

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
    msg.setTimeStamp(0.629514583176);
    msg.setSource(37399U);
    msg.setSourceEntity(6U);
    msg.setDestination(64371U);
    msg.setDestinationEntity(216U);
    msg.value = 0.679515109435;

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
    msg.setTimeStamp(0.806454719359);
    msg.setSource(59147U);
    msg.setSourceEntity(217U);
    msg.setDestination(44983U);
    msg.setDestinationEntity(82U);
    msg.value = 0.400266719084;

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
    msg.setTimeStamp(0.676568108567);
    msg.setSource(55497U);
    msg.setSourceEntity(184U);
    msg.setDestination(34006U);
    msg.setDestinationEntity(156U);
    msg.value = 0.260985470208;

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
    msg.setTimeStamp(0.652539747698);
    msg.setSource(32816U);
    msg.setSourceEntity(67U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(126U);
    msg.value = 0.142710675095;

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
    msg.setTimeStamp(0.22494523195);
    msg.setSource(63217U);
    msg.setSourceEntity(114U);
    msg.setDestination(26751U);
    msg.setDestinationEntity(45U);
    msg.value = 0.577152113746;

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
    msg.setTimeStamp(0.38554922486);
    msg.setSource(2964U);
    msg.setSourceEntity(54U);
    msg.setDestination(58559U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0673274753006;

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
    msg.setTimeStamp(0.00820066652181);
    msg.setSource(3620U);
    msg.setSourceEntity(111U);
    msg.setDestination(16990U);
    msg.setDestinationEntity(195U);
    msg.value = 0.992522779026;

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
    msg.setTimeStamp(0.139937426064);
    msg.setSource(27910U);
    msg.setSourceEntity(133U);
    msg.setDestination(31937U);
    msg.setDestinationEntity(40U);
    msg.value = 0.781188000401;

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
    msg.setTimeStamp(0.35050304652);
    msg.setSource(59118U);
    msg.setSourceEntity(236U);
    msg.setDestination(29177U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0532914806581;

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
    msg.setTimeStamp(0.181080830621);
    msg.setSource(44449U);
    msg.setSourceEntity(177U);
    msg.setDestination(38913U);
    msg.setDestinationEntity(25U);
    msg.value = 0.604179969862;

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
    msg.setTimeStamp(0.690750670201);
    msg.setSource(48268U);
    msg.setSourceEntity(115U);
    msg.setDestination(31498U);
    msg.setDestinationEntity(100U);
    msg.value = 0.0387254846825;

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
    msg.setTimeStamp(0.383583433646);
    msg.setSource(57876U);
    msg.setSourceEntity(12U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(52U);
    msg.direction = 0.860148583899;
    msg.speed = 0.236868230155;
    msg.turbulence = 0.861791810994;

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
    msg.setTimeStamp(0.084337366055);
    msg.setSource(4690U);
    msg.setSourceEntity(142U);
    msg.setDestination(14554U);
    msg.setDestinationEntity(215U);
    msg.direction = 0.835653968823;
    msg.speed = 0.256040502202;
    msg.turbulence = 0.152125331391;

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
    msg.setTimeStamp(0.408324771042);
    msg.setSource(23764U);
    msg.setSourceEntity(133U);
    msg.setDestination(64123U);
    msg.setDestinationEntity(192U);
    msg.direction = 0.352498762459;
    msg.speed = 0.770023864276;
    msg.turbulence = 0.464906178405;

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
    msg.setTimeStamp(0.615858211476);
    msg.setSource(58405U);
    msg.setSourceEntity(144U);
    msg.setDestination(33923U);
    msg.setDestinationEntity(56U);
    msg.value = 0.653087554465;

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
    msg.setTimeStamp(0.830890308979);
    msg.setSource(2695U);
    msg.setSourceEntity(243U);
    msg.setDestination(46794U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0870502385855;

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
    msg.setTimeStamp(0.51349208518);
    msg.setSource(16350U);
    msg.setSourceEntity(205U);
    msg.setDestination(27793U);
    msg.setDestinationEntity(240U);
    msg.value = 0.405092776924;

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
    msg.setTimeStamp(0.674106864889);
    msg.setSource(16581U);
    msg.setSourceEntity(69U);
    msg.setDestination(38730U);
    msg.setDestinationEntity(121U);
    msg.value.assign("LBXJSFHNZMKASNZPKVSAXSRRROUPPHOKIDDFIAMWOFYUQPJVDIWXFSGHOIVEEAFDCQQMGPOCTBIAOLWCLUTNDWVGCAHVTKIAQTZGATWNKNPZUDJLCGYGHYHNWUNUYDYRMFBBVFJJVLSRJULZIYRMMANNILQHBFOGQYBECEDBKJRLDVEAZTSEKPSCZQGTOBKHQFPTEQJRIVYDXPMCTXOXXSLWWBNXCKOMJHFKUVUZECJWISRGWXRYBM");

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
    msg.setTimeStamp(0.409066110464);
    msg.setSource(38270U);
    msg.setSourceEntity(134U);
    msg.setDestination(22492U);
    msg.setDestinationEntity(96U);
    msg.value.assign("RJODVATABDRVVGFJQAKKKUPIQQJSPHAXOWIOPWZOYJFRIBNCHMGMGRMZIGJHRQJHLCWSQKOMCUTPRNNQIWUBMBTSVALLTQDHRFKSTZIOONCEQGANLNPGKORHFBJSYLWHNXDWTBLYCSFGLRYXZUEMBKAXUPBTPAFWFUWEJMZMGHELRBVDCZ");

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
    msg.setTimeStamp(0.485276637109);
    msg.setSource(62359U);
    msg.setSourceEntity(75U);
    msg.setDestination(40078U);
    msg.setDestinationEntity(108U);
    msg.value.assign("JWZTEIOBPJBFQOTDXVFAOUOIQRZHFFMKRIIMGCGJSQXIRDVEABPLDMLHLBLHYMBRSSNQWHMZYEVAFITHAUOCALDRPKNPZKEVWOQJZKCECKSAPOPAWUNJLZQQTTUTIAOCPZGRGLHUTXBCXDUFCYVGXFGCVQZCBPKFJBKIJYSVFWMRQKSPPNULHHETKMDBY");

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
    msg.setTimeStamp(0.992822372445);
    msg.setSource(63784U);
    msg.setSourceEntity(59U);
    msg.setDestination(44908U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {94, -14, 67, 42, -53, -127, -24, 112, -87, 41, 115, 93, 64, 91, -41, 31, 78, -39, -116, 10, 54, -95, -4, -71, 24, 2, 5, -52, 39, 88, 0, 17, 7, 70, 55, 95, 88, -109, 102, 113, 26, 19, -94, -105, 28, 56, -82, -25, 52, 90, 110, -123, -77, -36, -17, -126, 80, 122, 8, 80, 55, -54, -45, -105, -46, 112, 105, -95, 114, -15, 20, 5, -15, 55, 31, 46, 64, 36, -58, 120, 34, -48, 38, -50, 29, -42, -125, 27, -76, 18, 28, 75, -119, -61, 5, 76, -108, 62, -124, -44, -4, -71, -128, 0, 97, 27, 85, -102, 71, -55, -122, -109, -70, -40, -48, -80, -76, -102, 104, -105, -35, 38, 119, -92, 77, 36, -93, 9, 6, -19, 22, -1, -32, 66, 31, -35, -82, 22, -96, -83, -14, -64, 81, 125, 90, 49};
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
    msg.setTimeStamp(0.6930894758);
    msg.setSource(15118U);
    msg.setSourceEntity(203U);
    msg.setDestination(31867U);
    msg.setDestinationEntity(215U);
    const char tmp_msg_0[] = {89, -49, -102, 44, 63, -3, -80, -115, 124, 112, -54, 25, -74, -23, -110, 25, -7, -93, -110, 75, 117, 60, -11, -35, -100, 103, -30, 102, -43, -88, -70, 93, 96, -13, -23, 5, -55, -49, 11, -115, -127, 118, 19, -68, 48, -73, -10, 26, 73, -116, 33, 0, -93, 75, 0, -114, -31, -45, -74, 90, 48, -51, -16, 9, 121, 82};
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
    msg.setTimeStamp(0.0844951513931);
    msg.setSource(64894U);
    msg.setSourceEntity(19U);
    msg.setDestination(13758U);
    msg.setDestinationEntity(175U);
    const char tmp_msg_0[] = {10, 22, 23, 72, -84, 86, -18, 68, 103, -64, 104, -34, -122, -115, 98, 72, -18, -59, -69, 93, -91, 6, -57, -30, -124, -77, 65, 18, -29, -58, -66, -83, -54, -89, 7, -5, 115, -28, -37, -65, 4, -88, 69, -69, 71, 11, 29, -82, -124, 4, 18, -86, -111, -119, -123, -34, 11, 70, -4, 35, 5, -1, 73, -51, 43, 60, -116, -7, -93, 37, -52, -7, 108, -79, 103, 122, 55, -48, -5, 33, -33, 6, 6, -17, -64, 75, -58, -112, 120, -23, -58, -55, -61, -79, 29, -87, 74, 118, -62, 18, -29, -86, -100, -86, 51, 105, -48, -38, -116, -20, 86, 21, 50, 49, -49, 29, 64, -64, 89, 63, -84, -87, -36, -32, -29, -41, 95, -112, 57, -117, 62, -60, -97, 122, -122, -60, 57, -121, -89, 7, -74, -98, -80, -11, -103, 119, 55, -84, -109, -23, -72, 59, -30, 94, 49, -39, -38, -97, -48, 20, -27, -104, -104, -14, -39, 59, 59, 30, -58, -39, 114, 34, -53, 111, 121, -108, 37, 24, -2, -119, -79, -115, 64, -62, -118, 84, -66, -22, 78, 51, -9, 107, -33, 75, -9, -72, 29, 48, 56, 79, -37, 51, -11, -17, 113, 28, 5, 12, -77, -12, -2, 26, -9, -103, 71, 51, -46, -45, 110, 27, -69, 62, 98, 17, 124, 56, -102, -99, 28, -27, 108, -4, 30, 83, 38, -95, -106, 64, 80, -120, 17, -37};
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
    msg.setTimeStamp(0.155234970653);
    msg.setSource(10583U);
    msg.setSourceEntity(124U);
    msg.setDestination(20046U);
    msg.setDestinationEntity(249U);
    msg.value = 0.560511761644;

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
    msg.setTimeStamp(0.109729134632);
    msg.setSource(65382U);
    msg.setSourceEntity(41U);
    msg.setDestination(9076U);
    msg.setDestinationEntity(85U);
    msg.value = 0.709661816526;

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
    msg.setTimeStamp(0.447861283573);
    msg.setSource(41775U);
    msg.setSourceEntity(13U);
    msg.setDestination(52633U);
    msg.setDestinationEntity(171U);
    msg.value = 0.558177388303;

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
    msg.setTimeStamp(0.974730252003);
    msg.setSource(61618U);
    msg.setSourceEntity(168U);
    msg.setDestination(12149U);
    msg.setDestinationEntity(23U);
    msg.type = 245U;
    msg.frequency = 3833159916U;
    msg.min_range = 11150U;
    msg.max_range = 12312U;
    msg.bits_per_point = 148U;
    msg.scale_factor = 0.857418523048;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.641597338382;
    tmp_msg_0.beam_height = 0.803545165241;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-12, -7, 1, -44, -10, 69, 122, 102, 123, 30, 66, 23, -81, -32, 62, 120, 20, -117, 15, -44, -11, -111, 106, -77, -12, -77, -83, 57, -127, -53, -45, -7, 72, -79, 68, -84, 66, 56, -60, 46, 103, -109, 54, -42, -125, -11, 84, -95, 89, 101, 26, -5};
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
    msg.setTimeStamp(0.872514387265);
    msg.setSource(51477U);
    msg.setSourceEntity(230U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(108U);
    msg.type = 243U;
    msg.frequency = 4043796122U;
    msg.min_range = 15680U;
    msg.max_range = 17280U;
    msg.bits_per_point = 129U;
    msg.scale_factor = 0.0036416748096;
    const char tmp_msg_0[] = {-12, 76, -15, -65, -43, 53, -60, -17, 95, 57, 49, -50, 114, 89, 27, -126, 54, 21, -22, -94, -120, -71, 100, -39, -4, 57, -72, -85, 100, 53, -4, 55, 83, 36, 97, 68, -92, 30, -49, 102, -25, 50, -97, 25, 61, 48, 54, -30, 13, -21, -115, -15, 3, -16, -117, 78, 96, 44, 42, -76, -96, -25, -12, 32, -113, 53, -128, -113, 125, -118, 19, 91, 50, 8, 110, -69, 24, 101, -98, 39, -43, -3, -84, 83, 45, 69, -3, -128, 31, 34, -93, 94, -54, -55, -52, 109, -58, -47, -31, -73, 33, 28, 74, 88, 97, -72, -17, 4, -20, -68, -26, 78, 4, 93, 49, -61, -121, -72, -106, -113, 23, -15, 102, 15, -73, -45, -6, -85, 70};
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
    msg.setTimeStamp(0.607305185875);
    msg.setSource(40442U);
    msg.setSourceEntity(103U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(39U);
    msg.type = 210U;
    msg.frequency = 3377917869U;
    msg.min_range = 25992U;
    msg.max_range = 47444U;
    msg.bits_per_point = 201U;
    msg.scale_factor = 0.433503249969;
    const char tmp_msg_0[] = {-84, 108, -61, 121, 4, 120, 97, -19, 92, 27, -39, 22, -101, -69, 25, 77, 88, -12, 33, -41, 12, -49, -12, -108, 10, 106, 53, 75, -93, 80, -105, -74, 48, 10, 85, 126, 45, -57, -36, 72, -26, -94, 101, 102, -110, -125, -115, -103, 74, -9, -62, 86, 85, 47, 118, -42, 95, -65, 11, 51, 33, 75, -47, -38, 120, 66, 96, 19, -26, 88, -109, 56, -81, 37, -89, 12, 79};
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
    msg.setTimeStamp(0.844155856459);
    msg.setSource(32115U);
    msg.setSourceEntity(50U);
    msg.setDestination(25203U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.13537153461);
    msg.setSource(21033U);
    msg.setSourceEntity(118U);
    msg.setDestination(32741U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.139820564213);
    msg.setSource(61801U);
    msg.setSourceEntity(195U);
    msg.setDestination(24581U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.0765281345605);
    msg.setSource(15783U);
    msg.setSourceEntity(132U);
    msg.setDestination(60550U);
    msg.setDestinationEntity(39U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.799834930615);
    msg.setSource(40461U);
    msg.setSourceEntity(132U);
    msg.setDestination(47760U);
    msg.setDestinationEntity(73U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.00655474698075);
    msg.setSource(1629U);
    msg.setSourceEntity(238U);
    msg.setDestination(22935U);
    msg.setDestinationEntity(136U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.240208329316);
    msg.setSource(37041U);
    msg.setSourceEntity(112U);
    msg.setDestination(14559U);
    msg.setDestinationEntity(200U);
    msg.value = 0.44416141518;
    msg.confidence = 0.0935326712648;
    msg.opmodes.assign("RLKWQOWKRJMUXMJAOATJMKLPEZFZTDQGXKTLDFDOGFTGATYHNXAWQLMJBAQNUVJQHZLXFARSHNDPSRGBRDUKLNHLKXYLFKYMYBYPCVUCOSTFIYIEHPJDGMSCZRSEIRASDCNZTUHDT");

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
    msg.setTimeStamp(0.488472106074);
    msg.setSource(35324U);
    msg.setSourceEntity(205U);
    msg.setDestination(14444U);
    msg.setDestinationEntity(9U);
    msg.value = 0.750067900146;
    msg.confidence = 0.205031022996;
    msg.opmodes.assign("DXQOYCWDVAFZGAGPFGBKBAAPYBVRDONWOTQHQWMIZBHKYIGIUGCZLKPMVJLSPAJUFNEDCRBFYFRZOGNQRYTMPLSOHTBCFIFNALKEXGVCXJPCRPPEYQBWLOVOQIXKJCRFWIUOKJEXVVNHBSSMDZNURWHSJBLMZL");

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
    msg.setTimeStamp(0.59605708195);
    msg.setSource(50386U);
    msg.setSourceEntity(207U);
    msg.setDestination(17946U);
    msg.setDestinationEntity(205U);
    msg.value = 0.316152652975;
    msg.confidence = 0.488172974754;
    msg.opmodes.assign("ZMCNZKWHMRHKLCWXTNQTVTBUGNNRKBNQBBDXFFPUJGYGPDTHNZJVIIEFNYTXISXQUEEILHBOPGNFYTMCACMOTFZTRRKLGAWEDILCOPROOJZHFAVGOQBRVYYSSGWZOBJPFHAOAQMJUZXJOICTEYWLVFAZHKXVBDPIXIYMRHUPFL");

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
    msg.setTimeStamp(0.310265330933);
    msg.setSource(16936U);
    msg.setSourceEntity(190U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(209U);
    msg.itow = 3669613429U;
    msg.lat = 0.988035041203;
    msg.lon = 0.451858635662;
    msg.height_ell = 0.0533407424052;
    msg.height_sea = 0.502762184809;
    msg.hacc = 0.324926355598;
    msg.vacc = 0.0651627355715;
    msg.vel_n = 0.552048288167;
    msg.vel_e = 0.49187827893;
    msg.vel_d = 0.15690344039;
    msg.speed = 0.384497743418;
    msg.gspeed = 0.389835269137;
    msg.heading = 0.995154047606;
    msg.sacc = 0.42188183226;
    msg.cacc = 0.642245734186;

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
    msg.setTimeStamp(0.604383036734);
    msg.setSource(25924U);
    msg.setSourceEntity(71U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(99U);
    msg.itow = 443199278U;
    msg.lat = 0.129882249621;
    msg.lon = 0.738745508192;
    msg.height_ell = 0.882834944496;
    msg.height_sea = 0.0651356207689;
    msg.hacc = 0.147596057724;
    msg.vacc = 0.0184726027813;
    msg.vel_n = 0.22190831986;
    msg.vel_e = 0.304268730065;
    msg.vel_d = 0.940500188079;
    msg.speed = 0.570666811094;
    msg.gspeed = 0.839792465406;
    msg.heading = 0.105601604132;
    msg.sacc = 0.830178256054;
    msg.cacc = 0.693263787247;

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
    msg.setTimeStamp(0.994872453328);
    msg.setSource(37303U);
    msg.setSourceEntity(200U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(143U);
    msg.itow = 2010219272U;
    msg.lat = 0.600798583105;
    msg.lon = 0.234120256327;
    msg.height_ell = 0.712638039221;
    msg.height_sea = 0.375736772507;
    msg.hacc = 0.982187789856;
    msg.vacc = 0.869377192663;
    msg.vel_n = 0.87854966067;
    msg.vel_e = 0.671205834594;
    msg.vel_d = 0.286049139245;
    msg.speed = 0.0155149928364;
    msg.gspeed = 0.301188770231;
    msg.heading = 0.0675277460629;
    msg.sacc = 0.301770024669;
    msg.cacc = 0.852631590376;

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
    msg.setTimeStamp(0.447241519441);
    msg.setSource(10643U);
    msg.setSourceEntity(171U);
    msg.setDestination(55435U);
    msg.setDestinationEntity(183U);
    msg.id = 64U;
    msg.value = 0.500827371434;

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
    msg.setTimeStamp(0.804200079139);
    msg.setSource(9183U);
    msg.setSourceEntity(152U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(237U);
    msg.id = 246U;
    msg.value = 0.782381322819;

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
    msg.setTimeStamp(0.459374399613);
    msg.setSource(65475U);
    msg.setSourceEntity(213U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(22U);
    msg.id = 59U;
    msg.value = 0.0108916066585;

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
    msg.setTimeStamp(0.626439709995);
    msg.setSource(55239U);
    msg.setSourceEntity(246U);
    msg.setDestination(16731U);
    msg.setDestinationEntity(123U);
    msg.x = 0.787763611645;
    msg.y = 0.326096201161;
    msg.z = 0.641068447368;
    msg.phi = 0.735443111572;
    msg.theta = 0.00556871717319;
    msg.psi = 0.136541868253;

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
    msg.setTimeStamp(0.0256530073962);
    msg.setSource(54890U);
    msg.setSourceEntity(141U);
    msg.setDestination(25796U);
    msg.setDestinationEntity(31U);
    msg.x = 0.226105693833;
    msg.y = 0.063970045916;
    msg.z = 0.41878048799;
    msg.phi = 0.949293154285;
    msg.theta = 0.252740751745;
    msg.psi = 0.867975716635;

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
    msg.setTimeStamp(0.362514381434);
    msg.setSource(43222U);
    msg.setSourceEntity(108U);
    msg.setDestination(44015U);
    msg.setDestinationEntity(202U);
    msg.x = 0.168240598812;
    msg.y = 0.889502796171;
    msg.z = 0.533009463648;
    msg.phi = 0.89997708955;
    msg.theta = 0.211925336888;
    msg.psi = 0.58523470201;

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
    msg.setTimeStamp(0.262525244854);
    msg.setSource(45690U);
    msg.setSourceEntity(83U);
    msg.setDestination(48725U);
    msg.setDestinationEntity(47U);
    msg.beam_width = 0.406052694834;
    msg.beam_height = 0.942905312981;

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
    msg.setTimeStamp(0.950198261247);
    msg.setSource(51809U);
    msg.setSourceEntity(32U);
    msg.setDestination(59827U);
    msg.setDestinationEntity(139U);
    msg.beam_width = 0.679063612445;
    msg.beam_height = 0.558345798727;

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
    msg.setTimeStamp(0.910184084291);
    msg.setSource(64918U);
    msg.setSourceEntity(123U);
    msg.setDestination(59978U);
    msg.setDestinationEntity(234U);
    msg.beam_width = 0.947233832274;
    msg.beam_height = 0.316317962141;

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
    msg.setTimeStamp(0.351795914937);
    msg.setSource(9511U);
    msg.setSourceEntity(228U);
    msg.setDestination(2952U);
    msg.setDestinationEntity(200U);
    msg.sane = 60U;

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
    msg.setTimeStamp(0.27101293805);
    msg.setSource(45489U);
    msg.setSourceEntity(3U);
    msg.setDestination(2240U);
    msg.setDestinationEntity(95U);
    msg.sane = 0U;

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
    msg.setTimeStamp(0.129931559755);
    msg.setSource(11420U);
    msg.setSourceEntity(22U);
    msg.setDestination(39657U);
    msg.setDestinationEntity(124U);
    msg.sane = 164U;

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
    msg.setTimeStamp(0.137152920115);
    msg.setSource(18377U);
    msg.setSourceEntity(250U);
    msg.setDestination(19548U);
    msg.setDestinationEntity(194U);
    msg.value = 0.585399207377;

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
    msg.setTimeStamp(0.262901376014);
    msg.setSource(61120U);
    msg.setSourceEntity(201U);
    msg.setDestination(32257U);
    msg.setDestinationEntity(92U);
    msg.value = 0.711962391106;

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
    msg.setTimeStamp(0.434364537149);
    msg.setSource(60482U);
    msg.setSourceEntity(35U);
    msg.setDestination(2510U);
    msg.setDestinationEntity(101U);
    msg.value = 0.682882269569;

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
    msg.setTimeStamp(0.277974369337);
    msg.setSource(34522U);
    msg.setSourceEntity(221U);
    msg.setDestination(45498U);
    msg.setDestinationEntity(150U);
    msg.value = 0.291349995355;

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
    msg.setTimeStamp(0.240884054234);
    msg.setSource(53498U);
    msg.setSourceEntity(246U);
    msg.setDestination(18997U);
    msg.setDestinationEntity(189U);
    msg.value = 0.121961114914;

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
    msg.setTimeStamp(0.165664853176);
    msg.setSource(36178U);
    msg.setSourceEntity(108U);
    msg.setDestination(49097U);
    msg.setDestinationEntity(59U);
    msg.value = 0.329912293933;

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
    msg.setTimeStamp(0.204868189421);
    msg.setSource(12935U);
    msg.setSourceEntity(203U);
    msg.setDestination(33357U);
    msg.setDestinationEntity(199U);
    msg.value = 0.463479890287;

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
    msg.setTimeStamp(0.915496576452);
    msg.setSource(22225U);
    msg.setSourceEntity(196U);
    msg.setDestination(42235U);
    msg.setDestinationEntity(184U);
    msg.value = 0.553280998;

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
    msg.setTimeStamp(0.250323261738);
    msg.setSource(33054U);
    msg.setSourceEntity(179U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(166U);
    msg.value = 0.264565095683;

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
    msg.setTimeStamp(0.846890773915);
    msg.setSource(9316U);
    msg.setSourceEntity(240U);
    msg.setDestination(63180U);
    msg.setDestinationEntity(191U);
    msg.value = 0.59816054801;

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
    msg.setTimeStamp(0.0795957096551);
    msg.setSource(48967U);
    msg.setSourceEntity(252U);
    msg.setDestination(21945U);
    msg.setDestinationEntity(213U);
    msg.value = 0.976856042303;

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
    msg.setTimeStamp(0.960965902104);
    msg.setSource(11723U);
    msg.setSourceEntity(191U);
    msg.setDestination(38790U);
    msg.setDestinationEntity(237U);
    msg.value = 0.614639613635;

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
    msg.setTimeStamp(0.33937434405);
    msg.setSource(8129U);
    msg.setSourceEntity(65U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(230U);
    msg.value = 0.476128397476;

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
    msg.setTimeStamp(0.00782067816486);
    msg.setSource(47923U);
    msg.setSourceEntity(199U);
    msg.setDestination(23607U);
    msg.setDestinationEntity(197U);
    msg.value = 0.310451660323;

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
    msg.setTimeStamp(0.266576667321);
    msg.setSource(21104U);
    msg.setSourceEntity(27U);
    msg.setDestination(756U);
    msg.setDestinationEntity(253U);
    msg.value = 0.000981587004568;

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
    msg.setTimeStamp(0.293754538615);
    msg.setSource(64505U);
    msg.setSourceEntity(17U);
    msg.setDestination(18054U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0420965794661;

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
    msg.setTimeStamp(0.278811160561);
    msg.setSource(24032U);
    msg.setSourceEntity(15U);
    msg.setDestination(57485U);
    msg.setDestinationEntity(157U);
    msg.value = 0.805579523055;

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
    msg.setTimeStamp(0.207412992136);
    msg.setSource(35508U);
    msg.setSourceEntity(119U);
    msg.setDestination(46432U);
    msg.setDestinationEntity(89U);
    msg.value = 0.00373177208028;

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
    msg.setTimeStamp(0.468966051547);
    msg.setSource(49722U);
    msg.setSourceEntity(45U);
    msg.setDestination(33542U);
    msg.setDestinationEntity(239U);
    msg.value = 0.974314272692;

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
    msg.setTimeStamp(0.952848188988);
    msg.setSource(13033U);
    msg.setSourceEntity(4U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(166U);
    msg.value = 0.47167810368;

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
    msg.setTimeStamp(0.669266811959);
    msg.setSource(56136U);
    msg.setSourceEntity(59U);
    msg.setDestination(40165U);
    msg.setDestinationEntity(247U);
    msg.value = 0.65458422904;

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
    msg.setTimeStamp(0.269828448186);
    msg.setSource(27355U);
    msg.setSourceEntity(33U);
    msg.setDestination(35186U);
    msg.setDestinationEntity(109U);
    msg.value = 0.686478956548;

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
    msg.setTimeStamp(0.927601950218);
    msg.setSource(50302U);
    msg.setSourceEntity(1U);
    msg.setDestination(42679U);
    msg.setDestinationEntity(190U);
    msg.value = 0.473230735239;

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
    msg.setTimeStamp(0.337891698589);
    msg.setSource(36106U);
    msg.setSourceEntity(225U);
    msg.setDestination(65514U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0754269962593;

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
    msg.setTimeStamp(0.527563492006);
    msg.setSource(18662U);
    msg.setSourceEntity(58U);
    msg.setDestination(57218U);
    msg.setDestinationEntity(106U);
    msg.validity = 55061U;
    msg.type = 186U;
    msg.tow = 590286574U;
    msg.base_lat = 0.133394901808;
    msg.base_lon = 0.51475205619;
    msg.base_height = 0.216640634365;
    msg.n = 0.237354217911;
    msg.e = 0.785532859061;
    msg.d = 0.678283520928;
    msg.v_n = 0.221013094118;
    msg.v_e = 0.266136370239;
    msg.v_d = 0.525958737108;
    msg.satellites = 194U;
    msg.iar_hyp = 19893U;
    msg.iar_ratio = 0.945030035636;

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
    msg.setTimeStamp(0.0589510931419);
    msg.setSource(18186U);
    msg.setSourceEntity(112U);
    msg.setDestination(42134U);
    msg.setDestinationEntity(155U);
    msg.validity = 7889U;
    msg.type = 171U;
    msg.tow = 4131024040U;
    msg.base_lat = 0.603008892437;
    msg.base_lon = 0.101024624303;
    msg.base_height = 0.35008470981;
    msg.n = 0.1169926113;
    msg.e = 0.676291161831;
    msg.d = 0.168433512757;
    msg.v_n = 0.391691055867;
    msg.v_e = 0.731454808524;
    msg.v_d = 0.756217276381;
    msg.satellites = 143U;
    msg.iar_hyp = 64141U;
    msg.iar_ratio = 0.948355296995;

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
    msg.setTimeStamp(0.679469767624);
    msg.setSource(43973U);
    msg.setSourceEntity(99U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(45U);
    msg.validity = 8585U;
    msg.type = 142U;
    msg.tow = 3251171698U;
    msg.base_lat = 0.4040214157;
    msg.base_lon = 0.689129591941;
    msg.base_height = 0.443312314353;
    msg.n = 0.429337307794;
    msg.e = 0.230306529954;
    msg.d = 0.598587047773;
    msg.v_n = 0.029266855182;
    msg.v_e = 0.355018094153;
    msg.v_d = 0.0133498542121;
    msg.satellites = 44U;
    msg.iar_hyp = 8867U;
    msg.iar_ratio = 0.79080416274;

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
    msg.setTimeStamp(0.0572429500394);
    msg.setSource(29317U);
    msg.setSourceEntity(37U);
    msg.setDestination(7430U);
    msg.setDestinationEntity(123U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0787792795801;
    tmp_msg_0.lon = 0.862281851329;
    tmp_msg_0.height = 0.266628749297;
    tmp_msg_0.x = 0.06423855527;
    tmp_msg_0.y = 0.240635962584;
    tmp_msg_0.z = 0.474632755352;
    tmp_msg_0.phi = 0.193406483865;
    tmp_msg_0.theta = 0.163770764216;
    tmp_msg_0.psi = 0.292131477256;
    tmp_msg_0.u = 0.085012773866;
    tmp_msg_0.v = 0.541436237308;
    tmp_msg_0.w = 0.816913477561;
    tmp_msg_0.vx = 0.846218407487;
    tmp_msg_0.vy = 0.352726263711;
    tmp_msg_0.vz = 0.724196177729;
    tmp_msg_0.p = 0.478108413257;
    tmp_msg_0.q = 0.0560041790986;
    tmp_msg_0.r = 0.301239628805;
    tmp_msg_0.depth = 0.848332840177;
    tmp_msg_0.alt = 0.979660026805;
    msg.state.set(tmp_msg_0);
    msg.type = 89U;

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
    msg.setTimeStamp(0.399394524445);
    msg.setSource(23521U);
    msg.setSourceEntity(149U);
    msg.setDestination(37447U);
    msg.setDestinationEntity(145U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.29193093688;
    tmp_msg_0.lon = 0.882717035239;
    tmp_msg_0.height = 0.0121288348517;
    tmp_msg_0.x = 0.70024664418;
    tmp_msg_0.y = 0.160593027122;
    tmp_msg_0.z = 0.527048260423;
    tmp_msg_0.phi = 0.836030846966;
    tmp_msg_0.theta = 0.233391230121;
    tmp_msg_0.psi = 0.0785620975851;
    tmp_msg_0.u = 0.888596249595;
    tmp_msg_0.v = 0.396962998648;
    tmp_msg_0.w = 0.125221644776;
    tmp_msg_0.vx = 0.757561925603;
    tmp_msg_0.vy = 0.11807199182;
    tmp_msg_0.vz = 0.609166979567;
    tmp_msg_0.p = 0.902638415894;
    tmp_msg_0.q = 0.197825038021;
    tmp_msg_0.r = 0.766535081518;
    tmp_msg_0.depth = 0.251851455886;
    tmp_msg_0.alt = 0.847168855062;
    msg.state.set(tmp_msg_0);
    msg.type = 19U;

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
    msg.setTimeStamp(0.825710600501);
    msg.setSource(58990U);
    msg.setSourceEntity(14U);
    msg.setDestination(25904U);
    msg.setDestinationEntity(227U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.891227723706;
    tmp_msg_0.lon = 0.534229224048;
    tmp_msg_0.height = 0.97036428176;
    tmp_msg_0.x = 0.460254291979;
    tmp_msg_0.y = 0.4001848505;
    tmp_msg_0.z = 0.75395119968;
    tmp_msg_0.phi = 0.847108718047;
    tmp_msg_0.theta = 0.1110206638;
    tmp_msg_0.psi = 0.820026302502;
    tmp_msg_0.u = 0.366422978853;
    tmp_msg_0.v = 0.234229110106;
    tmp_msg_0.w = 0.639573695886;
    tmp_msg_0.vx = 0.848962887357;
    tmp_msg_0.vy = 0.4578708136;
    tmp_msg_0.vz = 0.186763710501;
    tmp_msg_0.p = 0.892052318375;
    tmp_msg_0.q = 0.43266229548;
    tmp_msg_0.r = 0.723993349209;
    tmp_msg_0.depth = 0.152692419812;
    tmp_msg_0.alt = 0.517577193424;
    msg.state.set(tmp_msg_0);
    msg.type = 61U;

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
    msg.setTimeStamp(0.276324815194);
    msg.setSource(40334U);
    msg.setSourceEntity(1U);
    msg.setDestination(10568U);
    msg.setDestinationEntity(137U);
    msg.value = 0.622459517681;

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
    msg.setTimeStamp(0.502754868141);
    msg.setSource(61763U);
    msg.setSourceEntity(213U);
    msg.setDestination(31303U);
    msg.setDestinationEntity(36U);
    msg.value = 0.889722709545;

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
    msg.setTimeStamp(0.961611836517);
    msg.setSource(63388U);
    msg.setSourceEntity(79U);
    msg.setDestination(64542U);
    msg.setDestinationEntity(224U);
    msg.value = 0.301146173388;

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
    msg.setTimeStamp(0.781159314043);
    msg.setSource(56619U);
    msg.setSourceEntity(224U);
    msg.setDestination(13046U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0370684367297;

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
    msg.setTimeStamp(0.63887661552);
    msg.setSource(24761U);
    msg.setSourceEntity(102U);
    msg.setDestination(10021U);
    msg.setDestinationEntity(12U);
    msg.value = 0.723425484832;

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
    msg.setTimeStamp(0.286417793333);
    msg.setSource(27073U);
    msg.setSourceEntity(88U);
    msg.setDestination(57888U);
    msg.setDestinationEntity(16U);
    msg.value = 0.99261156402;

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
    msg.setTimeStamp(0.343197005393);
    msg.setSource(45935U);
    msg.setSourceEntity(161U);
    msg.setDestination(20090U);
    msg.setDestinationEntity(11U);
    msg.value = 0.0141292108121;

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
    msg.setTimeStamp(0.323174627189);
    msg.setSource(39123U);
    msg.setSourceEntity(35U);
    msg.setDestination(63391U);
    msg.setDestinationEntity(252U);
    msg.value = 0.222017242293;

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
    msg.setTimeStamp(0.223819216729);
    msg.setSource(14015U);
    msg.setSourceEntity(92U);
    msg.setDestination(38840U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0973943455002;

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
    msg.setTimeStamp(0.511708324796);
    msg.setSource(16975U);
    msg.setSourceEntity(214U);
    msg.setDestination(16329U);
    msg.setDestinationEntity(192U);
    msg.value = 0.769359804593;

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
    msg.setTimeStamp(0.983553579825);
    msg.setSource(58589U);
    msg.setSourceEntity(108U);
    msg.setDestination(34130U);
    msg.setDestinationEntity(166U);
    msg.value = 0.948549128395;

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
    msg.setTimeStamp(0.641774161763);
    msg.setSource(19331U);
    msg.setSourceEntity(116U);
    msg.setDestination(42149U);
    msg.setDestinationEntity(141U);
    msg.value = 0.535196098281;

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
    msg.setTimeStamp(0.657608818186);
    msg.setSource(46349U);
    msg.setSourceEntity(36U);
    msg.setDestination(29300U);
    msg.setDestinationEntity(200U);
    msg.value = 0.503772265747;

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
    msg.setTimeStamp(0.88276886914);
    msg.setSource(14266U);
    msg.setSourceEntity(2U);
    msg.setDestination(15602U);
    msg.setDestinationEntity(15U);
    msg.value = 0.72461373872;

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
    msg.setTimeStamp(0.592080012451);
    msg.setSource(61896U);
    msg.setSourceEntity(230U);
    msg.setDestination(25211U);
    msg.setDestinationEntity(128U);
    msg.value = 0.473508387581;

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
    msg.setTimeStamp(0.793357410094);
    msg.setSource(9275U);
    msg.setSourceEntity(152U);
    msg.setDestination(22264U);
    msg.setDestinationEntity(110U);
    msg.id = 99U;
    msg.zoom = 235U;
    msg.action = 108U;

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
    msg.setTimeStamp(0.792848474911);
    msg.setSource(28152U);
    msg.setSourceEntity(87U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(220U);
    msg.id = 0U;
    msg.zoom = 19U;
    msg.action = 188U;

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
    msg.setTimeStamp(0.836134806356);
    msg.setSource(37667U);
    msg.setSourceEntity(176U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(72U);
    msg.id = 223U;
    msg.zoom = 5U;
    msg.action = 97U;

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
    msg.setTimeStamp(0.498295505868);
    msg.setSource(24430U);
    msg.setSourceEntity(80U);
    msg.setDestination(56788U);
    msg.setDestinationEntity(180U);
    msg.id = 247U;
    msg.value = 0.00727372194125;

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
    msg.setTimeStamp(0.428434752594);
    msg.setSource(58361U);
    msg.setSourceEntity(26U);
    msg.setDestination(38159U);
    msg.setDestinationEntity(145U);
    msg.id = 17U;
    msg.value = 0.547116704413;

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
    msg.setTimeStamp(0.559518539534);
    msg.setSource(29301U);
    msg.setSourceEntity(218U);
    msg.setDestination(15751U);
    msg.setDestinationEntity(129U);
    msg.id = 138U;
    msg.value = 0.300729003984;

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
    msg.setTimeStamp(0.455498104223);
    msg.setSource(29427U);
    msg.setSourceEntity(143U);
    msg.setDestination(36838U);
    msg.setDestinationEntity(75U);
    msg.id = 229U;
    msg.value = 0.214376405772;

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
    msg.setTimeStamp(0.725794932678);
    msg.setSource(17306U);
    msg.setSourceEntity(216U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(33U);
    msg.id = 56U;
    msg.value = 0.784890510817;

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
    msg.setTimeStamp(0.748402598153);
    msg.setSource(38286U);
    msg.setSourceEntity(141U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(239U);
    msg.id = 86U;
    msg.value = 0.795685339038;

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
    msg.setTimeStamp(0.152804092623);
    msg.setSource(47888U);
    msg.setSourceEntity(37U);
    msg.setDestination(35824U);
    msg.setDestinationEntity(114U);
    msg.id = 82U;
    msg.angle = 0.827224240799;

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
    msg.setTimeStamp(0.399095754533);
    msg.setSource(9278U);
    msg.setSourceEntity(220U);
    msg.setDestination(32630U);
    msg.setDestinationEntity(47U);
    msg.id = 103U;
    msg.angle = 0.684444244861;

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
    msg.setTimeStamp(0.637922687676);
    msg.setSource(24149U);
    msg.setSourceEntity(138U);
    msg.setDestination(47774U);
    msg.setDestinationEntity(221U);
    msg.id = 137U;
    msg.angle = 0.489809601188;

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
    msg.setTimeStamp(0.506652587784);
    msg.setSource(44719U);
    msg.setSourceEntity(135U);
    msg.setDestination(13602U);
    msg.setDestinationEntity(73U);
    msg.op = 201U;
    msg.actions.assign("RLYCIBQKFISXUTTRJCWVVETICGLFZFAKSZWLDKBHZD");

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
    msg.setTimeStamp(0.311708130968);
    msg.setSource(52297U);
    msg.setSourceEntity(150U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(12U);
    msg.op = 192U;
    msg.actions.assign("MXGLRAPZYNBLDQSDWNZNQHNGIWKCKKZGVHUZQTFCPJGRUQFGYICXAPWJIEMAXONQPLFLRCJUBAMTMEBLSFKIYUARHVWXBBDEYOLQAXWVDXZKECZYPSVHKOMLPDEASDHCAHWSKTVXUMDOTBGCYKHUVVBBNWKNWIJOEZCIPJNMXJZNGDTJLUYTITSHFMRMOPRQAISMLYTRRIAEZXVYNTJQQSESCCXVJEZRFOBH");

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
    msg.setTimeStamp(0.601795592227);
    msg.setSource(27704U);
    msg.setSourceEntity(253U);
    msg.setDestination(22663U);
    msg.setDestinationEntity(227U);
    msg.op = 200U;
    msg.actions.assign("TEUAELPKTDNYTZXYGUHEMRPKOZXMYXIEGSNOUTVGVGIKIBRXZUZGCFLSYBORFZCYHVGDLHVPDFAHYAEWOBYWVNZQWANSEBVQESFWHUVGELDPSCTOBKTWBPUFSDMILUQBYTRFJHSZQILEPJIYXTCGAHFIHIAMRJBFYTKWWJFAZFCOOQGRROQOHJJCMEDSMKAVNVAXQNWKPJD");

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
    msg.setTimeStamp(0.841286669202);
    msg.setSource(14078U);
    msg.setSourceEntity(37U);
    msg.setDestination(27980U);
    msg.setDestinationEntity(228U);
    msg.actions.assign("DPCEHKGRQQWXOZYGGVRNHIVNNDPHYYJXYLWUOPWLJBEIIIYDGEROKHVUIZHOWCTKABOOAGRZMESMTA");

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
    msg.setTimeStamp(0.357807674959);
    msg.setSource(44116U);
    msg.setSourceEntity(160U);
    msg.setDestination(50893U);
    msg.setDestinationEntity(254U);
    msg.actions.assign("OOVSLGGFWQTFXYSVXWVFDJMEHOPVLLWNYWMJLMXMYQRIPFSSPCZXIXFUQTQUICDFYHRIKKTBNQQYSLCDQRZJZGVCHIRLEUUXPDWXEYLSJBAUGZFCEXBYVHAMNUONFHFBMOATDPWSNWRBKSIZEZZBAYLIDNRHRHMTYTVQJHTGTLSVPA");

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
    msg.setTimeStamp(0.549448783259);
    msg.setSource(43937U);
    msg.setSourceEntity(92U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(94U);
    msg.actions.assign("IIUFGJQPTRTVIBMYMRLRUGRGWCKJFMCJUBHSDBWAFNVSQLSNNTYWFFWDOKNPYSXIEUJJQESSPGCQZAQBZK");

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
    msg.setTimeStamp(0.0201158648433);
    msg.setSource(15554U);
    msg.setSourceEntity(232U);
    msg.setDestination(43867U);
    msg.setDestinationEntity(227U);
    msg.button = 228U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.282040198199);
    msg.setSource(11563U);
    msg.setSourceEntity(195U);
    msg.setDestination(13588U);
    msg.setDestinationEntity(119U);
    msg.button = 79U;
    msg.value = 227U;

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
    msg.setTimeStamp(0.816676702285);
    msg.setSource(42423U);
    msg.setSourceEntity(127U);
    msg.setDestination(60558U);
    msg.setDestinationEntity(202U);
    msg.button = 248U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.668974908293);
    msg.setSource(17869U);
    msg.setSourceEntity(236U);
    msg.setDestination(23555U);
    msg.setDestinationEntity(253U);
    msg.op = 4U;
    msg.text.assign("HBTXXJIWTIIPYQLYQXQEAZWGKZMBFKJNFTMNKFHLTBOOSIQNRVYYFZQGMFTRSVJUYCCDZXOUKGQEHMDPLOOSTLKBDRQCOWVBMUDWTTVFLXMDPDYLGARKCYOJZVCEAHNSZGWOIEMFYPHICZWHULMVERNBAJBMIZPTTPHFSBLZEVWNJCSQKNDHESBLRPYAOAGVRFXIXPAGHAA");

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
    msg.setTimeStamp(0.116519689663);
    msg.setSource(56847U);
    msg.setSourceEntity(103U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(17U);
    msg.op = 48U;
    msg.text.assign("HPQTOCLNYJXSGOSUCJKDUTHAUAXOXKZWZWDBNEGTPDBIWSTPQZGKRULUZMAXAWWXBCINEVFAWZPYCTYJHTCPJYFZAHYBQBYZFVPLEREONQIJMGMNYVLEQAGUQPMNWALTJDHQZECNQEVXKXIIIRRCKZESRYMFPMOJIVOGRSDAFILKNKXUQIEBZEBGTGLGDA");

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
    msg.setTimeStamp(0.340364169569);
    msg.setSource(43203U);
    msg.setSourceEntity(127U);
    msg.setDestination(13477U);
    msg.setDestinationEntity(244U);
    msg.op = 254U;
    msg.text.assign("KUGAEIQCGVYSGCSHSZWNRXDBBQQKRVGRJZWWYSACLRWOPZPLEGANOOXVBFAMQMZESDETSTDMNFDQZOPVSVJLEEFKOAYYAUTFHKILMHAUTRFUTQOTNRLXPFIHUNILHZBNPTDOFRXYJKPPSVCBUNUAYHXJMHISKQWDDBJPWGODOXRBXJFWZQCEIFEPFTIWKYIJKYLVHUNIGCLANYUUMCRDKZACXMGWZENHW");

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
    msg.setTimeStamp(0.260338641171);
    msg.setSource(2126U);
    msg.setSourceEntity(155U);
    msg.setDestination(49318U);
    msg.setDestinationEntity(44U);
    msg.op = 17U;
    msg.time_remain = 0.805898576477;
    msg.sched_time = 0.489124703134;

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
    msg.setTimeStamp(0.582805656885);
    msg.setSource(58167U);
    msg.setSourceEntity(216U);
    msg.setDestination(28516U);
    msg.setDestinationEntity(141U);
    msg.op = 187U;
    msg.time_remain = 0.621517565271;
    msg.sched_time = 0.535590476882;

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
    msg.setTimeStamp(0.223973088773);
    msg.setSource(33760U);
    msg.setSourceEntity(121U);
    msg.setDestination(2976U);
    msg.setDestinationEntity(162U);
    msg.op = 99U;
    msg.time_remain = 0.540703134778;
    msg.sched_time = 0.721453966809;

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
    msg.setTimeStamp(0.752355137471);
    msg.setSource(25548U);
    msg.setSourceEntity(107U);
    msg.setDestination(34011U);
    msg.setDestinationEntity(196U);
    msg.name.assign("ZENFEGPXTQYBZTK");
    msg.op = 27U;
    msg.sched_time = 0.298759789387;

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
    msg.setTimeStamp(0.865595206012);
    msg.setSource(42027U);
    msg.setSourceEntity(120U);
    msg.setDestination(2754U);
    msg.setDestinationEntity(49U);
    msg.name.assign("LNQQWDLQFWSGSZYGYQN");
    msg.op = 127U;
    msg.sched_time = 0.0334893162955;

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
    msg.setTimeStamp(0.505406449508);
    msg.setSource(45936U);
    msg.setSourceEntity(228U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(127U);
    msg.name.assign("AGMRFKYAECNEPVACLEJSZYRQQUOCVAOFAANIXOGRIRCINHMKGPYHLZKWWGOKGHDUNLRSEKFWMIDZSXBLGCXCQVZDKJNOHRELLSEDLPOSZEFRQUBUXYBZIXMPNWWWDXGZCXYVMBADJKIZHCBOUTTBBSSTMJRV");
    msg.op = 126U;
    msg.sched_time = 0.762524345555;

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
    msg.setTimeStamp(0.447032317521);
    msg.setSource(9911U);
    msg.setSourceEntity(234U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.783323107061);
    msg.setSource(26026U);
    msg.setSourceEntity(126U);
    msg.setDestination(38894U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.160354271878);
    msg.setSource(38472U);
    msg.setSourceEntity(237U);
    msg.setDestination(56146U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.64244971463);
    msg.setSource(6183U);
    msg.setSourceEntity(243U);
    msg.setDestination(21909U);
    msg.setDestinationEntity(176U);
    msg.name.assign("XTZTZCEHJWLSGBJRDKPQGQBVQUGYXHJLCCUHWREKXRMIQUJPDCNXROILXOLHFNWZKZBENTCAZVAXEUZAAXVFAIOJJSYGF");
    msg.state = 124U;

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
    msg.setTimeStamp(0.930999774628);
    msg.setSource(55356U);
    msg.setSourceEntity(216U);
    msg.setDestination(58935U);
    msg.setDestinationEntity(0U);
    msg.name.assign("NGZZHOUEKXYIBLMSLOZZHYMQLNWLZIKXPODGP");
    msg.state = 105U;

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
    msg.setTimeStamp(0.214169238082);
    msg.setSource(63719U);
    msg.setSourceEntity(28U);
    msg.setDestination(33622U);
    msg.setDestinationEntity(191U);
    msg.name.assign("CZNOTGVMYPNFIGIHTZLEATNRQQZSJDWTXYARIEGJIWYGYQMEXYXHXPDKPNWMSIBUFFVEJUDXVFWPYZPSZXOZYHLLDKHNHHUBDBRXOSCZLBJWRGUIKJOMUQCIEFQKTDXVSFZUMKSYZVGKWQLOOCJIEGAXPVIHHYXKUCTVCTWLBYUWANACDSWNQRDQDMCSNKN");
    msg.state = 2U;

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
    msg.setTimeStamp(0.113650733828);
    msg.setSource(13870U);
    msg.setSourceEntity(93U);
    msg.setDestination(28768U);
    msg.setDestinationEntity(209U);
    msg.name.assign("MGVNDSJIGFMQERVIXJFITZEHKFQZAQIVIGZYZKTOSVATMQPNSPAGVSUDGZMDKEJHJMDTBJRHHRONNDWTYVVYQRFLQIXHLBNAXAEKWDZLZKOFJCIQSVRPLYXAGKVCRFTHDHNYWMTMCJNGGOLAXRPIBEMCPMZWKVKLYCUYBEUUWPJCBEUKBSEATYWXNFTSUOEOYOAWPOSHRBCITDCKUWL");
    msg.value = 253U;

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
    msg.setTimeStamp(0.558679565604);
    msg.setSource(4891U);
    msg.setSourceEntity(4U);
    msg.setDestination(30609U);
    msg.setDestinationEntity(199U);
    msg.name.assign("YUACIDTCETNMJIFADJTDMTFFNOKTWWEHUXJ");
    msg.value = 216U;

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
    msg.setTimeStamp(0.825458017551);
    msg.setSource(52201U);
    msg.setSourceEntity(59U);
    msg.setDestination(23591U);
    msg.setDestinationEntity(190U);
    msg.name.assign("HNKHNOTELCEDRKPJAXYGSPLOEDNLQZBTWEJPKEMU");
    msg.value = 101U;

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
    msg.setTimeStamp(0.245893764509);
    msg.setSource(25727U);
    msg.setSourceEntity(26U);
    msg.setDestination(20092U);
    msg.setDestinationEntity(154U);
    msg.name.assign("EDZEKXQTBLCYLRBDDFGZPLPBXIENUEKNINWABYQMSJHTFJZKAVDWIQERGJFDZDYEMIHEUMSGNMBYRVLOTHIORA");

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
    msg.setTimeStamp(0.49812788018);
    msg.setSource(2614U);
    msg.setSourceEntity(71U);
    msg.setDestination(62751U);
    msg.setDestinationEntity(143U);
    msg.name.assign("LILBWAKOWSEGLONTYVECZWEDBFXGTNZZMDPPRYVUUUJXNUOSHMTCKLBQGJWZTBJGKYZYPPSSQETJSQFWCQVLCNVJPONERKXGIEBWKHFBVSVULAXHTYRZOACOIGJSFQUZUFRUDXEMUKYSYRGIJOHGBFQNXGDYCTOVDEMRTFXNHDMXA");

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
    msg.setTimeStamp(0.329338695544);
    msg.setSource(51760U);
    msg.setSourceEntity(174U);
    msg.setDestination(60495U);
    msg.setDestinationEntity(250U);
    msg.name.assign("YTMMSVAJROETEKLXHKMPMVGDOINUPBBVIQNAZKLARTHNDDBEKQIMFNYMUDLVMJUGOIWKYDJIQCQCSYIRWRHOARKNXGDVIJOFWZKJPZHUAYCUWBESVTECZFGLYPBIHKSAZDRQYXVNDWSVFRDUSZGBXHCGUXXCEB");

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
    msg.setTimeStamp(0.773180803978);
    msg.setSource(43896U);
    msg.setSourceEntity(161U);
    msg.setDestination(40801U);
    msg.setDestinationEntity(218U);
    msg.name.assign("XLQIMJTUNSIGSYGNXIDCEMZIQYCAOWZDBZNHMEALWLDVVXOFGCJTXESJMLOWNFQM");
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
    msg.setTimeStamp(0.508661137537);
    msg.setSource(65411U);
    msg.setSourceEntity(204U);
    msg.setDestination(32514U);
    msg.setDestinationEntity(29U);
    msg.name.assign("TMDXPMSYYBAUAHQGGXBTKXWIQYWLKQVOROEKKWJIROWTCAZCNEIRSHERCLFMIOPFXRXFRYINDTMSQGQTODJMBNZZFLUMMZFHUQKVZPAQIHACNVHOELDXASYLKXUKWJCTRABGPWDPSZVYROGPBBAFFWVNLQXEKVJJDGBLVOBNDFYVOZG");
    msg.value = 65U;

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
    msg.setTimeStamp(0.89019714542);
    msg.setSource(15703U);
    msg.setSourceEntity(197U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(12U);
    msg.name.assign("MXLYEUWNFTYFNRCAPQBSLRZQ");
    msg.value = 203U;

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
    msg.setTimeStamp(0.901809160422);
    msg.setSource(18233U);
    msg.setSourceEntity(143U);
    msg.setDestination(392U);
    msg.setDestinationEntity(141U);
    msg.id = 159U;
    msg.period = 491652673U;
    msg.duty_cycle = 526759358U;

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
    msg.setTimeStamp(0.849584807317);
    msg.setSource(33049U);
    msg.setSourceEntity(180U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(9U);
    msg.id = 85U;
    msg.period = 3107125876U;
    msg.duty_cycle = 3645233670U;

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
    msg.setTimeStamp(0.856359734379);
    msg.setSource(4472U);
    msg.setSourceEntity(161U);
    msg.setDestination(58720U);
    msg.setDestinationEntity(63U);
    msg.id = 94U;
    msg.period = 946775254U;
    msg.duty_cycle = 4159411914U;

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
    msg.setTimeStamp(0.400664114009);
    msg.setSource(1219U);
    msg.setSourceEntity(103U);
    msg.setDestination(5632U);
    msg.setDestinationEntity(190U);
    msg.id = 169U;
    msg.period = 387455411U;
    msg.duty_cycle = 1492237575U;

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
    msg.setTimeStamp(0.807485266538);
    msg.setSource(59441U);
    msg.setSourceEntity(192U);
    msg.setDestination(24078U);
    msg.setDestinationEntity(128U);
    msg.id = 125U;
    msg.period = 2630701047U;
    msg.duty_cycle = 2088070645U;

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
    msg.setTimeStamp(0.733401163361);
    msg.setSource(61043U);
    msg.setSourceEntity(145U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(123U);
    msg.id = 104U;
    msg.period = 380248610U;
    msg.duty_cycle = 3246123928U;

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
    msg.setTimeStamp(0.538298330809);
    msg.setSource(23208U);
    msg.setSourceEntity(0U);
    msg.setDestination(59864U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.268037869891;
    msg.lon = 0.224653251271;
    msg.height = 0.0508126276282;
    msg.x = 0.812129834574;
    msg.y = 0.548159253511;
    msg.z = 0.519716335777;
    msg.phi = 0.419914418852;
    msg.theta = 0.0586252568813;
    msg.psi = 0.837970337285;
    msg.u = 0.526040626498;
    msg.v = 0.228447915469;
    msg.w = 0.328476577117;
    msg.vx = 0.730569558042;
    msg.vy = 0.597123668736;
    msg.vz = 0.838789621247;
    msg.p = 0.0485205849159;
    msg.q = 0.684178656768;
    msg.r = 0.956145988088;
    msg.depth = 0.617335150962;
    msg.alt = 0.467362078577;

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
    msg.setTimeStamp(0.577762103548);
    msg.setSource(14567U);
    msg.setSourceEntity(185U);
    msg.setDestination(59441U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.252385133387;
    msg.lon = 0.127269844373;
    msg.height = 0.887212931273;
    msg.x = 0.841460378345;
    msg.y = 0.066109741384;
    msg.z = 0.485183543047;
    msg.phi = 0.0569127336452;
    msg.theta = 0.975684102913;
    msg.psi = 0.635451704098;
    msg.u = 0.819556361972;
    msg.v = 0.33884202542;
    msg.w = 0.881354120066;
    msg.vx = 0.811284027359;
    msg.vy = 0.00127576397713;
    msg.vz = 0.794058123377;
    msg.p = 0.868117863797;
    msg.q = 0.366383638854;
    msg.r = 0.814895232396;
    msg.depth = 0.421838899412;
    msg.alt = 0.530400311301;

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
    msg.setTimeStamp(0.186317511231);
    msg.setSource(37881U);
    msg.setSourceEntity(69U);
    msg.setDestination(37958U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.896304020822;
    msg.lon = 0.322804928946;
    msg.height = 0.923306078214;
    msg.x = 0.730900861081;
    msg.y = 0.282051165868;
    msg.z = 0.424250703603;
    msg.phi = 0.601830967494;
    msg.theta = 0.705384919994;
    msg.psi = 0.486334534508;
    msg.u = 0.77069425533;
    msg.v = 0.251441539405;
    msg.w = 0.495271554913;
    msg.vx = 0.410198932163;
    msg.vy = 0.737783184765;
    msg.vz = 0.706674442101;
    msg.p = 0.216947194283;
    msg.q = 0.715441948421;
    msg.r = 0.954106980754;
    msg.depth = 0.783578956849;
    msg.alt = 0.171953923571;

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
    msg.setTimeStamp(0.265895027246);
    msg.setSource(28251U);
    msg.setSourceEntity(188U);
    msg.setDestination(20576U);
    msg.setDestinationEntity(155U);
    msg.x = 0.761489076437;
    msg.y = 0.776496802289;
    msg.z = 0.910401881371;

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
    msg.setTimeStamp(0.224364991496);
    msg.setSource(27549U);
    msg.setSourceEntity(73U);
    msg.setDestination(61914U);
    msg.setDestinationEntity(222U);
    msg.x = 0.537201238354;
    msg.y = 0.68657946092;
    msg.z = 0.707371701379;

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
    msg.setTimeStamp(0.47563505699);
    msg.setSource(43052U);
    msg.setSourceEntity(85U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(106U);
    msg.x = 0.221636379602;
    msg.y = 0.333463766797;
    msg.z = 0.572101265595;

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
    msg.setTimeStamp(0.62196215787);
    msg.setSource(7809U);
    msg.setSourceEntity(5U);
    msg.setDestination(14228U);
    msg.setDestinationEntity(251U);
    msg.value = 0.591590164613;

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
    msg.setTimeStamp(0.603145824871);
    msg.setSource(10130U);
    msg.setSourceEntity(214U);
    msg.setDestination(52519U);
    msg.setDestinationEntity(82U);
    msg.value = 0.348500679247;

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
    msg.setTimeStamp(0.36221511003);
    msg.setSource(59214U);
    msg.setSourceEntity(251U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(225U);
    msg.value = 0.639316484962;

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
    msg.setTimeStamp(0.330322972212);
    msg.setSource(19814U);
    msg.setSourceEntity(15U);
    msg.setDestination(36277U);
    msg.setDestinationEntity(235U);
    msg.value = 0.444504171065;

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
    msg.setTimeStamp(0.786899822771);
    msg.setSource(17538U);
    msg.setSourceEntity(83U);
    msg.setDestination(48296U);
    msg.setDestinationEntity(135U);
    msg.value = 0.742182655494;

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
    msg.setTimeStamp(0.787843449707);
    msg.setSource(8834U);
    msg.setSourceEntity(197U);
    msg.setDestination(44895U);
    msg.setDestinationEntity(192U);
    msg.value = 0.616406557723;

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
    msg.setTimeStamp(0.0241232476224);
    msg.setSource(1482U);
    msg.setSourceEntity(185U);
    msg.setDestination(9999U);
    msg.setDestinationEntity(134U);
    msg.x = 0.093113595827;
    msg.y = 0.408890716515;
    msg.z = 0.81805670692;
    msg.phi = 0.230054573221;
    msg.theta = 0.613824001745;
    msg.psi = 0.51660042382;
    msg.p = 0.131704991065;
    msg.q = 0.3351968513;
    msg.r = 0.902471974567;
    msg.u = 0.855541198447;
    msg.v = 0.0587731984576;
    msg.w = 0.659057655651;
    msg.bias_psi = 0.795929006839;
    msg.bias_r = 0.784912145597;

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
    msg.setTimeStamp(0.465433926339);
    msg.setSource(52211U);
    msg.setSourceEntity(4U);
    msg.setDestination(14520U);
    msg.setDestinationEntity(216U);
    msg.x = 0.358574882626;
    msg.y = 0.914619452703;
    msg.z = 0.0349294655926;
    msg.phi = 0.405490502553;
    msg.theta = 0.712197450788;
    msg.psi = 0.0020096935998;
    msg.p = 0.708821144528;
    msg.q = 0.432301170565;
    msg.r = 0.703008418642;
    msg.u = 0.115013274474;
    msg.v = 0.644774471436;
    msg.w = 0.208202070908;
    msg.bias_psi = 0.394389648416;
    msg.bias_r = 0.231151939486;

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
    msg.setTimeStamp(0.278777706742);
    msg.setSource(6418U);
    msg.setSourceEntity(1U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(85U);
    msg.x = 0.305770359956;
    msg.y = 0.834277986151;
    msg.z = 0.685577394768;
    msg.phi = 0.520306778843;
    msg.theta = 0.918597880689;
    msg.psi = 0.106467792164;
    msg.p = 0.119936312368;
    msg.q = 0.917627742665;
    msg.r = 0.193348204421;
    msg.u = 0.424244502817;
    msg.v = 0.902148007744;
    msg.w = 0.79393340313;
    msg.bias_psi = 0.649782560695;
    msg.bias_r = 0.130657726359;

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
    msg.setTimeStamp(0.401561677487);
    msg.setSource(51386U);
    msg.setSourceEntity(3U);
    msg.setDestination(41978U);
    msg.setDestinationEntity(141U);
    msg.bias_psi = 0.432083769757;
    msg.bias_r = 0.669120247253;
    msg.cog = 0.885029892217;
    msg.cyaw = 0.451948555516;
    msg.lbl_rej_level = 0.384527079545;
    msg.gps_rej_level = 0.661712526172;
    msg.custom_x = 0.710029768578;
    msg.custom_y = 0.294926996915;
    msg.custom_z = 0.843861606481;

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
    msg.setTimeStamp(0.339691214093);
    msg.setSource(22854U);
    msg.setSourceEntity(244U);
    msg.setDestination(48899U);
    msg.setDestinationEntity(222U);
    msg.bias_psi = 0.308577247856;
    msg.bias_r = 0.782381413072;
    msg.cog = 0.72120252457;
    msg.cyaw = 0.672535696832;
    msg.lbl_rej_level = 0.240890553891;
    msg.gps_rej_level = 0.364842182012;
    msg.custom_x = 0.420986510257;
    msg.custom_y = 0.0105734778596;
    msg.custom_z = 0.0903104516289;

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
    msg.setTimeStamp(0.36007047768);
    msg.setSource(41768U);
    msg.setSourceEntity(242U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(191U);
    msg.bias_psi = 0.43722087113;
    msg.bias_r = 0.417663435301;
    msg.cog = 0.225541076391;
    msg.cyaw = 0.556578951672;
    msg.lbl_rej_level = 0.409263829875;
    msg.gps_rej_level = 0.269144952684;
    msg.custom_x = 0.60612217007;
    msg.custom_y = 0.823042779089;
    msg.custom_z = 0.566067276805;

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
    msg.setTimeStamp(0.374936894971);
    msg.setSource(7295U);
    msg.setSourceEntity(60U);
    msg.setDestination(22114U);
    msg.setDestinationEntity(105U);
    msg.utc_time = 0.649840960013;
    msg.reason = 36U;

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
    msg.setTimeStamp(0.502871729673);
    msg.setSource(7807U);
    msg.setSourceEntity(160U);
    msg.setDestination(19131U);
    msg.setDestinationEntity(211U);
    msg.utc_time = 0.284750245755;
    msg.reason = 93U;

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
    msg.setTimeStamp(0.968055535409);
    msg.setSource(29833U);
    msg.setSourceEntity(138U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(55U);
    msg.utc_time = 0.279075942273;
    msg.reason = 191U;

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
    msg.setTimeStamp(0.138434362722);
    msg.setSource(44331U);
    msg.setSourceEntity(138U);
    msg.setDestination(29174U);
    msg.setDestinationEntity(183U);
    msg.id = 134U;
    msg.range = 0.837833738969;
    msg.acceptance = 14U;

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
    msg.setTimeStamp(0.707810736529);
    msg.setSource(29085U);
    msg.setSourceEntity(27U);
    msg.setDestination(52768U);
    msg.setDestinationEntity(142U);
    msg.id = 131U;
    msg.range = 0.284959629147;
    msg.acceptance = 105U;

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
    msg.setTimeStamp(0.804372571462);
    msg.setSource(54931U);
    msg.setSourceEntity(186U);
    msg.setDestination(10881U);
    msg.setDestinationEntity(240U);
    msg.id = 233U;
    msg.range = 0.502848120754;
    msg.acceptance = 177U;

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
    msg.setTimeStamp(0.903837349667);
    msg.setSource(59198U);
    msg.setSourceEntity(181U);
    msg.setDestination(64002U);
    msg.setDestinationEntity(246U);
    msg.type = 43U;
    msg.reason = 151U;
    msg.value = 0.94160291362;
    msg.timestep = 0.752819171438;

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
    msg.setTimeStamp(0.351943103524);
    msg.setSource(16352U);
    msg.setSourceEntity(174U);
    msg.setDestination(22318U);
    msg.setDestinationEntity(150U);
    msg.type = 228U;
    msg.reason = 9U;
    msg.value = 0.636231852257;
    msg.timestep = 0.961673776448;

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
    msg.setTimeStamp(0.172331826405);
    msg.setSource(15105U);
    msg.setSourceEntity(105U);
    msg.setDestination(34574U);
    msg.setDestinationEntity(228U);
    msg.type = 249U;
    msg.reason = 135U;
    msg.value = 0.95055976843;
    msg.timestep = 0.451968320629;

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
    msg.setTimeStamp(0.607671596002);
    msg.setSource(36509U);
    msg.setSourceEntity(47U);
    msg.setDestination(47584U);
    msg.setDestinationEntity(163U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IMIFLICZBPIXUMJXTOAVEOHQMYYRDIFDSLAFLVUXPQYHKXVKHANOSDJICFVASQLTNLMZHECLJSWNLBVYFRBGAEQCXPPNCWOGNCNMBBZIBXTNAEDJUXKYZNRVNSQDPRQVOFYOOMTPUMUESXKGAWICUFJDPZOVRKQKFWGHMQOJRKBOTUTLMHZTURYTKJCKMIGGZTGDEWYIBXEGHFLDRTBAVQSYGAPYSESVRHFPBZDWUKRUNWSG");
    tmp_msg_0.lat = 0.108388845158;
    tmp_msg_0.lon = 0.287585174128;
    tmp_msg_0.depth = 0.82279329101;
    tmp_msg_0.query_channel = 227U;
    tmp_msg_0.reply_channel = 55U;
    tmp_msg_0.transponder_delay = 18U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.70969654699;
    msg.y = 0.217480409554;
    msg.var_x = 0.0810853946954;
    msg.var_y = 0.583572961653;
    msg.distance = 0.457830813616;

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
    msg.setTimeStamp(0.221152253081);
    msg.setSource(6345U);
    msg.setSourceEntity(178U);
    msg.setDestination(25162U);
    msg.setDestinationEntity(240U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZMSGMHLIQZOIETTLHMXWXPNCOMFULULCNJRZADELNWWAYJMXKIVKJWFJVYFYOEUZBQPKLZSHFBKUMYVESLKVVQGFGSTTXPFZHRSUCFHWGLBGUCKCM");
    tmp_msg_0.lat = 0.78304155123;
    tmp_msg_0.lon = 0.838933299003;
    tmp_msg_0.depth = 0.608583529097;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 54U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.26780312729;
    msg.y = 0.0744127764123;
    msg.var_x = 0.998704452626;
    msg.var_y = 0.790046719029;
    msg.distance = 0.191842333554;

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
    msg.setTimeStamp(0.0642613897856);
    msg.setSource(44020U);
    msg.setSourceEntity(206U);
    msg.setDestination(45947U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ALNAJDRGGEXNCANUINHPKRXYQXRPSGQGZSAIVOEKUANWRPZPNIYRLMQSWZCEWSFQSLTJYXUHHOODBDLGDNMUYVFSJFWSGUCNFRVIZFVUBTEIIUMBTLQNPKTEVYZYHFFOAMOVTJFPMZWDDGHAACJQYPSOXLISWOLBXLTKKEBXRDNDIESMHKMJKAJOCOZYXROYWVCPUBJHMXWCMLCRDCUCGEXYTTBWFPALIGQZFKWIBKE");
    tmp_msg_0.lat = 0.0209148513522;
    tmp_msg_0.lon = 0.861887685604;
    tmp_msg_0.depth = 0.293540428233;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 77U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.654329100096;
    msg.y = 0.436157597052;
    msg.var_x = 0.854001720903;
    msg.var_y = 0.224632231802;
    msg.distance = 0.677914727501;

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
    msg.setTimeStamp(0.826439834705);
    msg.setSource(3709U);
    msg.setSourceEntity(5U);
    msg.setDestination(21536U);
    msg.setDestinationEntity(48U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.929887549032);
    msg.setSource(56030U);
    msg.setSourceEntity(152U);
    msg.setDestination(38034U);
    msg.setDestinationEntity(53U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.200481754966);
    msg.setSource(26266U);
    msg.setSourceEntity(124U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(160U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.555763538461);
    msg.setSource(16886U);
    msg.setSourceEntity(6U);
    msg.setDestination(12120U);
    msg.setDestinationEntity(74U);
    msg.x = 0.606775808908;
    msg.y = 0.852815471322;
    msg.z = 0.342499051728;

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
    msg.setTimeStamp(0.830832266842);
    msg.setSource(46910U);
    msg.setSourceEntity(10U);
    msg.setDestination(47527U);
    msg.setDestinationEntity(26U);
    msg.x = 0.412304039096;
    msg.y = 0.73138085856;
    msg.z = 0.183207458083;

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
    msg.setTimeStamp(0.421481280313);
    msg.setSource(37312U);
    msg.setSourceEntity(94U);
    msg.setDestination(60580U);
    msg.setDestinationEntity(34U);
    msg.x = 0.00661179116298;
    msg.y = 0.925877976744;
    msg.z = 0.183691402408;

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
    msg.setTimeStamp(0.240018932796);
    msg.setSource(55061U);
    msg.setSourceEntity(87U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(148U);
    msg.va = 0.0641553733304;
    msg.aoa = 0.0154328897886;
    msg.ssa = 0.801717025886;

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
    msg.setTimeStamp(0.380041662669);
    msg.setSource(6382U);
    msg.setSourceEntity(76U);
    msg.setDestination(45196U);
    msg.setDestinationEntity(190U);
    msg.va = 0.779547289551;
    msg.aoa = 0.614846263917;
    msg.ssa = 0.426087928236;

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
    msg.setTimeStamp(0.162218630224);
    msg.setSource(10262U);
    msg.setSourceEntity(166U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(141U);
    msg.va = 0.147170318679;
    msg.aoa = 0.232030061993;
    msg.ssa = 0.141070925133;

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
    msg.setTimeStamp(0.350044117917);
    msg.setSource(47122U);
    msg.setSourceEntity(235U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(32U);
    msg.value = 0.819484247554;

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
    msg.setTimeStamp(0.771835736);
    msg.setSource(63628U);
    msg.setSourceEntity(211U);
    msg.setDestination(8179U);
    msg.setDestinationEntity(62U);
    msg.value = 0.861580021256;

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
    msg.setTimeStamp(0.91948201966);
    msg.setSource(49796U);
    msg.setSourceEntity(176U);
    msg.setDestination(41657U);
    msg.setDestinationEntity(53U);
    msg.value = 0.666246392135;

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
    msg.setTimeStamp(0.947080572415);
    msg.setSource(16525U);
    msg.setSourceEntity(182U);
    msg.setDestination(29827U);
    msg.setDestinationEntity(135U);
    msg.value = 0.910615072475;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.203657729119);
    msg.setSource(41933U);
    msg.setSourceEntity(152U);
    msg.setDestination(64198U);
    msg.setDestinationEntity(38U);
    msg.value = 0.025435012181;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.397709685605);
    msg.setSource(33618U);
    msg.setSourceEntity(233U);
    msg.setDestination(20959U);
    msg.setDestinationEntity(168U);
    msg.value = 0.519089667038;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.347934371309);
    msg.setSource(50969U);
    msg.setSourceEntity(178U);
    msg.setDestination(4331U);
    msg.setDestinationEntity(96U);
    msg.value = 0.0997937123749;
    msg.speed_units = 117U;

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
    msg.setTimeStamp(0.590759360326);
    msg.setSource(13927U);
    msg.setSourceEntity(87U);
    msg.setDestination(64910U);
    msg.setDestinationEntity(141U);
    msg.value = 0.054982023827;
    msg.speed_units = 40U;

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
    msg.setTimeStamp(0.44200986977);
    msg.setSource(7161U);
    msg.setSourceEntity(5U);
    msg.setDestination(48236U);
    msg.setDestinationEntity(36U);
    msg.value = 0.29632439914;
    msg.speed_units = 177U;

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
    msg.setTimeStamp(0.300223930256);
    msg.setSource(62599U);
    msg.setSourceEntity(184U);
    msg.setDestination(50524U);
    msg.setDestinationEntity(196U);
    msg.value = 0.895867662343;

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
    msg.setTimeStamp(0.351835645612);
    msg.setSource(17693U);
    msg.setSourceEntity(238U);
    msg.setDestination(22942U);
    msg.setDestinationEntity(38U);
    msg.value = 0.883422644029;

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
    msg.setTimeStamp(0.222294055445);
    msg.setSource(61983U);
    msg.setSourceEntity(199U);
    msg.setDestination(48164U);
    msg.setDestinationEntity(79U);
    msg.value = 0.103802850417;

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
    msg.setTimeStamp(0.711025492733);
    msg.setSource(59214U);
    msg.setSourceEntity(157U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(80U);
    msg.value = 0.219525539464;

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
    msg.setTimeStamp(0.781654691921);
    msg.setSource(30265U);
    msg.setSourceEntity(218U);
    msg.setDestination(30353U);
    msg.setDestinationEntity(29U);
    msg.value = 0.900185288615;

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
    msg.setTimeStamp(0.604793639546);
    msg.setSource(53912U);
    msg.setSourceEntity(31U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(58U);
    msg.value = 0.605393729598;

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
    msg.setTimeStamp(0.165320052185);
    msg.setSource(39477U);
    msg.setSourceEntity(224U);
    msg.setDestination(4208U);
    msg.setDestinationEntity(30U);
    msg.value = 0.950435677065;

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
    msg.setTimeStamp(0.876134125025);
    msg.setSource(59618U);
    msg.setSourceEntity(177U);
    msg.setDestination(23951U);
    msg.setDestinationEntity(249U);
    msg.value = 0.651932530911;

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
    msg.setTimeStamp(0.374183710093);
    msg.setSource(5261U);
    msg.setSourceEntity(252U);
    msg.setDestination(37473U);
    msg.setDestinationEntity(164U);
    msg.value = 0.224961246453;

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
    msg.setTimeStamp(0.509610741557);
    msg.setSource(51830U);
    msg.setSourceEntity(41U);
    msg.setDestination(33861U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 1562408639U;
    msg.start_lat = 0.236113287404;
    msg.start_lon = 0.210117888484;
    msg.start_z = 0.908293105012;
    msg.start_z_units = 226U;
    msg.end_lat = 0.691222812054;
    msg.end_lon = 0.916148421063;
    msg.end_z = 0.0548681920088;
    msg.end_z_units = 190U;
    msg.speed = 0.132972650683;
    msg.speed_units = 59U;
    msg.lradius = 0.406832893223;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.176531244025);
    msg.setSource(37349U);
    msg.setSourceEntity(242U);
    msg.setDestination(11409U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 2632147319U;
    msg.start_lat = 0.911707170083;
    msg.start_lon = 0.375518955263;
    msg.start_z = 0.668572964852;
    msg.start_z_units = 140U;
    msg.end_lat = 0.316654057546;
    msg.end_lon = 0.34397347607;
    msg.end_z = 0.108082893757;
    msg.end_z_units = 231U;
    msg.speed = 0.721020580891;
    msg.speed_units = 73U;
    msg.lradius = 0.720881458918;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.721725063439);
    msg.setSource(58707U);
    msg.setSourceEntity(111U);
    msg.setDestination(44844U);
    msg.setDestinationEntity(51U);
    msg.path_ref = 1135166720U;
    msg.start_lat = 0.242219737958;
    msg.start_lon = 0.324637663637;
    msg.start_z = 0.247653939378;
    msg.start_z_units = 232U;
    msg.end_lat = 0.766988974255;
    msg.end_lon = 0.520652462614;
    msg.end_z = 0.59811910462;
    msg.end_z_units = 9U;
    msg.speed = 0.125107835501;
    msg.speed_units = 146U;
    msg.lradius = 0.385080478164;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.639564273421);
    msg.setSource(11934U);
    msg.setSourceEntity(76U);
    msg.setDestination(51749U);
    msg.setDestinationEntity(198U);
    msg.x = 0.120000217607;
    msg.y = 0.247624401949;
    msg.z = 0.0516529948916;
    msg.k = 0.450890530794;
    msg.m = 0.603059416114;
    msg.n = 0.889060524247;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.605366287753);
    msg.setSource(38190U);
    msg.setSourceEntity(93U);
    msg.setDestination(24028U);
    msg.setDestinationEntity(87U);
    msg.x = 0.0426868438422;
    msg.y = 0.283815667995;
    msg.z = 0.582881515016;
    msg.k = 0.338957822828;
    msg.m = 0.371519653755;
    msg.n = 0.616655802474;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.504054232614);
    msg.setSource(19715U);
    msg.setSourceEntity(246U);
    msg.setDestination(20939U);
    msg.setDestinationEntity(194U);
    msg.x = 0.276217883487;
    msg.y = 0.0278188358245;
    msg.z = 0.233800366721;
    msg.k = 0.216401335395;
    msg.m = 0.60228300361;
    msg.n = 0.861120796739;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.49746045847);
    msg.setSource(57898U);
    msg.setSourceEntity(108U);
    msg.setDestination(942U);
    msg.setDestinationEntity(173U);
    msg.value = 0.129852117054;

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
    msg.setTimeStamp(0.201712461496);
    msg.setSource(31882U);
    msg.setSourceEntity(34U);
    msg.setDestination(30790U);
    msg.setDestinationEntity(196U);
    msg.value = 0.604393737809;

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
    msg.setTimeStamp(0.843769607488);
    msg.setSource(50840U);
    msg.setSourceEntity(188U);
    msg.setDestination(9520U);
    msg.setDestinationEntity(168U);
    msg.value = 0.270824932975;

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
    msg.setTimeStamp(0.365625530044);
    msg.setSource(60603U);
    msg.setSourceEntity(7U);
    msg.setDestination(49688U);
    msg.setDestinationEntity(70U);
    msg.u = 0.261279925166;
    msg.v = 0.255451562983;
    msg.w = 0.789741750075;
    msg.p = 0.0490905381116;
    msg.q = 0.670951545288;
    msg.r = 0.147921924598;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.956463592989);
    msg.setSource(58992U);
    msg.setSourceEntity(17U);
    msg.setDestination(10549U);
    msg.setDestinationEntity(139U);
    msg.u = 0.898283989513;
    msg.v = 0.73435750934;
    msg.w = 0.491821633059;
    msg.p = 0.300595976723;
    msg.q = 0.825584869524;
    msg.r = 0.711038679718;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.64928495466);
    msg.setSource(20926U);
    msg.setSourceEntity(219U);
    msg.setDestination(29966U);
    msg.setDestinationEntity(76U);
    msg.u = 0.00269075534841;
    msg.v = 0.533602692848;
    msg.w = 0.936811359625;
    msg.p = 0.953501760504;
    msg.q = 0.665433301339;
    msg.r = 0.507869606989;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.247959014097);
    msg.setSource(33979U);
    msg.setSourceEntity(82U);
    msg.setDestination(55666U);
    msg.setDestinationEntity(98U);
    msg.path_ref = 3224519536U;
    msg.start_lat = 0.484078286236;
    msg.start_lon = 0.103004013054;
    msg.start_z = 0.740804609361;
    msg.start_z_units = 249U;
    msg.end_lat = 0.0995517868121;
    msg.end_lon = 0.385249939173;
    msg.end_z = 0.272378378971;
    msg.end_z_units = 214U;
    msg.lradius = 0.387057315815;
    msg.flags = 88U;
    msg.x = 0.107311945277;
    msg.y = 0.60218069949;
    msg.z = 0.0398683801256;
    msg.vx = 0.324205812698;
    msg.vy = 0.595020200772;
    msg.vz = 0.300639574403;
    msg.course_error = 0.0875346053108;
    msg.eta = 37961U;

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
    msg.setTimeStamp(0.0603248638869);
    msg.setSource(15774U);
    msg.setSourceEntity(77U);
    msg.setDestination(62735U);
    msg.setDestinationEntity(15U);
    msg.path_ref = 419453765U;
    msg.start_lat = 0.821116405295;
    msg.start_lon = 0.680277264801;
    msg.start_z = 0.29238984931;
    msg.start_z_units = 175U;
    msg.end_lat = 0.732217168481;
    msg.end_lon = 0.343359587164;
    msg.end_z = 0.144413589981;
    msg.end_z_units = 54U;
    msg.lradius = 0.0805095521064;
    msg.flags = 188U;
    msg.x = 0.357810826507;
    msg.y = 0.457456778355;
    msg.z = 0.870048366847;
    msg.vx = 0.0169614627994;
    msg.vy = 0.897235737294;
    msg.vz = 0.335925421437;
    msg.course_error = 0.118570111845;
    msg.eta = 18235U;

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
    msg.setTimeStamp(0.105279392348);
    msg.setSource(4822U);
    msg.setSourceEntity(171U);
    msg.setDestination(27885U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 2830191215U;
    msg.start_lat = 0.509511926712;
    msg.start_lon = 0.149965145198;
    msg.start_z = 0.186807202006;
    msg.start_z_units = 101U;
    msg.end_lat = 0.131481338726;
    msg.end_lon = 0.139009459722;
    msg.end_z = 0.494645284848;
    msg.end_z_units = 19U;
    msg.lradius = 0.692026572098;
    msg.flags = 111U;
    msg.x = 0.0748077138579;
    msg.y = 0.00999898652388;
    msg.z = 0.343507919948;
    msg.vx = 0.790529832662;
    msg.vy = 0.783593220687;
    msg.vz = 0.0525433196523;
    msg.course_error = 0.974578386899;
    msg.eta = 23070U;

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
    msg.setTimeStamp(0.392260913469);
    msg.setSource(34188U);
    msg.setSourceEntity(193U);
    msg.setDestination(6962U);
    msg.setDestinationEntity(238U);
    msg.k = 0.269953963141;
    msg.m = 0.789071062564;
    msg.n = 0.750479587836;

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
    msg.setTimeStamp(0.195784666205);
    msg.setSource(24424U);
    msg.setSourceEntity(139U);
    msg.setDestination(1583U);
    msg.setDestinationEntity(179U);
    msg.k = 0.579374484885;
    msg.m = 0.246880142448;
    msg.n = 0.858328300057;

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
    msg.setTimeStamp(0.524724929899);
    msg.setSource(33691U);
    msg.setSourceEntity(158U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(60U);
    msg.k = 0.318951828028;
    msg.m = 0.0529086729055;
    msg.n = 0.873050813146;

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
    msg.setTimeStamp(0.568466405981);
    msg.setSource(46446U);
    msg.setSourceEntity(223U);
    msg.setDestination(50519U);
    msg.setDestinationEntity(125U);
    msg.p = 0.491711596948;
    msg.i = 0.652330752454;
    msg.d = 0.206850957473;
    msg.a = 0.679417638077;

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
    msg.setTimeStamp(0.240097855332);
    msg.setSource(13722U);
    msg.setSourceEntity(3U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(228U);
    msg.p = 0.731178478699;
    msg.i = 0.130406370371;
    msg.d = 0.873254750989;
    msg.a = 0.755509188375;

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
    msg.setTimeStamp(0.191131315758);
    msg.setSource(6752U);
    msg.setSourceEntity(87U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(3U);
    msg.p = 0.977389397379;
    msg.i = 0.227199296271;
    msg.d = 0.134228579933;
    msg.a = 0.525443257275;

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
    msg.setTimeStamp(0.710346442115);
    msg.setSource(16889U);
    msg.setSourceEntity(238U);
    msg.setDestination(20968U);
    msg.setDestinationEntity(201U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.0667334505754);
    msg.setSource(45907U);
    msg.setSourceEntity(38U);
    msg.setDestination(14554U);
    msg.setDestinationEntity(225U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.98427081545);
    msg.setSource(34784U);
    msg.setSourceEntity(16U);
    msg.setDestination(50831U);
    msg.setDestinationEntity(21U);
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
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.612920945493);
    msg.setSource(42601U);
    msg.setSourceEntity(162U);
    msg.setDestination(20651U);
    msg.setDestinationEntity(130U);
    msg.x = 0.524134340991;
    msg.y = 0.993436665123;
    msg.z = 0.919989311992;
    msg.vx = 0.564353919885;
    msg.vy = 0.919150861026;
    msg.vz = 0.801762484325;
    msg.ax = 0.660671439678;
    msg.ay = 0.558889454498;
    msg.az = 0.184546151687;
    msg.flags = 44474U;

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
    msg.setTimeStamp(0.787576219612);
    msg.setSource(11958U);
    msg.setSourceEntity(211U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(186U);
    msg.x = 0.669479055277;
    msg.y = 0.212873664382;
    msg.z = 0.959488502949;
    msg.vx = 0.46560732474;
    msg.vy = 0.358470745245;
    msg.vz = 0.448363552385;
    msg.ax = 0.463703887072;
    msg.ay = 0.97448125308;
    msg.az = 0.832177639793;
    msg.flags = 35559U;

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
    msg.setTimeStamp(0.753719378118);
    msg.setSource(62456U);
    msg.setSourceEntity(76U);
    msg.setDestination(27739U);
    msg.setDestinationEntity(240U);
    msg.x = 0.720617905771;
    msg.y = 0.246054176226;
    msg.z = 0.851155151794;
    msg.vx = 0.279732074552;
    msg.vy = 0.598830286571;
    msg.vz = 0.171604259239;
    msg.ax = 0.0335013017653;
    msg.ay = 0.304220109682;
    msg.az = 0.696460925231;
    msg.flags = 22918U;

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
    msg.setTimeStamp(0.311378678404);
    msg.setSource(3844U);
    msg.setSourceEntity(33U);
    msg.setDestination(10114U);
    msg.setDestinationEntity(175U);
    msg.value = 0.168455590519;

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
    msg.setTimeStamp(0.550400606552);
    msg.setSource(60083U);
    msg.setSourceEntity(164U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(130U);
    msg.value = 0.689909309511;

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
    msg.setTimeStamp(0.723656274208);
    msg.setSource(61788U);
    msg.setSourceEntity(205U);
    msg.setDestination(63482U);
    msg.setDestinationEntity(131U);
    msg.value = 0.810781485807;

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
    msg.setTimeStamp(0.875272094369);
    msg.setSource(36979U);
    msg.setSourceEntity(128U);
    msg.setDestination(22073U);
    msg.setDestinationEntity(1U);
    msg.timeout = 52898U;
    msg.lat = 0.540790236529;
    msg.lon = 0.0932585981259;
    msg.z = 0.314260541999;
    msg.z_units = 9U;
    msg.speed = 0.753485576794;
    msg.speed_units = 92U;
    msg.roll = 0.199229493354;
    msg.pitch = 0.992511459545;
    msg.yaw = 0.100511229081;
    msg.custom.assign("IDTPMSHAWDNUEEJHTMWMSFKOMWTSGDNCKAJRZJBALQQMFLNCORIHHVTXFSXGGZCLXTERZYZYTNRDSDRKDDINQOAPJTMKKBISFUSJYGWAPHYJQTTIZVYLFRVVEYXWACQEGXMWLXBPMQELBJOCPUBEIWUKPBZESZSZARJBVNACKMQMPWEUYWVAR");

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
    msg.setTimeStamp(0.825956580458);
    msg.setSource(13258U);
    msg.setSourceEntity(197U);
    msg.setDestination(46373U);
    msg.setDestinationEntity(151U);
    msg.timeout = 28062U;
    msg.lat = 0.775786571988;
    msg.lon = 0.520619854733;
    msg.z = 0.823465425116;
    msg.z_units = 171U;
    msg.speed = 0.388384981029;
    msg.speed_units = 72U;
    msg.roll = 0.464391722786;
    msg.pitch = 0.994618152538;
    msg.yaw = 0.281096481197;
    msg.custom.assign("GMCKUVHTTSKBPLTLQWOKYGPWCZVWRMFEZUKFUDWHSSFBBKDKONWXPTBTZJXNAFYNKQLOJAGDWSMOHAMRDJHLBIEIDEYRCCJGEXJHQAKTQJHLBIUJUSQISIPRITXAORCZNHEEQUFGHVFLMAEZPYYRZHEUJCDTBTGCARNSHPDMMXDZYXORGZOFUKTLNYQXGKFOFSPIUPQRWCLBFNEGWXMYU");

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
    msg.setTimeStamp(0.0693358412198);
    msg.setSource(3430U);
    msg.setSourceEntity(85U);
    msg.setDestination(48305U);
    msg.setDestinationEntity(126U);
    msg.timeout = 45388U;
    msg.lat = 0.716940887061;
    msg.lon = 0.000321383497438;
    msg.z = 0.476879630167;
    msg.z_units = 196U;
    msg.speed = 0.329743867038;
    msg.speed_units = 195U;
    msg.roll = 0.339129812793;
    msg.pitch = 0.476009054058;
    msg.yaw = 0.558356052255;
    msg.custom.assign("AXGIXUOIRQZBBDVABMSSPARMDJUWCOIFLKBRYEADFPTQNKYTPGVXVWQCHYCYKRKDLNERIUEQGUSNCBVEYPYIEHWUSXTWZZXIKGMHMTJZDEOPAXFAGLJTALHCNIKPRQWSLUXFEFNJZLKBIVROAMEHDINUCSVYWYGEQSHLZJFDWHLJAJZGPVNMTSTCHOOW");

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
    msg.setTimeStamp(0.270403249445);
    msg.setSource(14754U);
    msg.setSourceEntity(113U);
    msg.setDestination(19799U);
    msg.setDestinationEntity(172U);
    msg.timeout = 40952U;
    msg.lat = 0.482407893101;
    msg.lon = 0.989028334704;
    msg.z = 0.712389614728;
    msg.z_units = 242U;
    msg.speed = 0.504480788719;
    msg.speed_units = 81U;
    msg.duration = 7902U;
    msg.radius = 0.730355696173;
    msg.flags = 157U;
    msg.custom.assign("LXFPDCLQPXDHWKIGOPQBZOJKFGTDYYLCITNQLXNJFVHWSRKDDTFNJUGYWEIACPTVGMCBALRCXDXBSNJRSEQGVBYLJGREUTXNSAEMPWWIRTKWZUKVDRKRIJIFRZHHGBNZOEYGGYMTVSUMEULZSSCXZDUMHQABONMUOOJFBNIZPFXAKZVPIAVJHYQNMCROABSEQOMTASHUGFTKMYZHJOXYPVWVDSQHJPWCVOBET");

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
    msg.setTimeStamp(0.79631667001);
    msg.setSource(55493U);
    msg.setSourceEntity(103U);
    msg.setDestination(39470U);
    msg.setDestinationEntity(201U);
    msg.timeout = 21372U;
    msg.lat = 0.827911600892;
    msg.lon = 0.274873487099;
    msg.z = 0.866729436888;
    msg.z_units = 53U;
    msg.speed = 0.0365302822852;
    msg.speed_units = 174U;
    msg.duration = 10232U;
    msg.radius = 0.0201377389751;
    msg.flags = 202U;
    msg.custom.assign("PLJLOFEQSDAEGHTXMPGEQURSHJMPAYQBDZAAJRKBEQCFBYZXUPDZONGEGZQHVJCPPCEOAIOOTXVGLVSVIHSXXUH");

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
    msg.setTimeStamp(0.195132312467);
    msg.setSource(48094U);
    msg.setSourceEntity(109U);
    msg.setDestination(2048U);
    msg.setDestinationEntity(82U);
    msg.timeout = 33069U;
    msg.lat = 0.307122738854;
    msg.lon = 0.534071031738;
    msg.z = 0.857577327488;
    msg.z_units = 92U;
    msg.speed = 0.616335069182;
    msg.speed_units = 172U;
    msg.duration = 62474U;
    msg.radius = 0.677722108144;
    msg.flags = 62U;
    msg.custom.assign("DSRWSXXETPAFPBTNFVRULFIOLTTKGMMCGNXFVUVUGMDBFNNKAIYSXFUCVBGQOJXIMNQANVNKDJJMZFLBBQSLIFMYHFTKOSIJECDZAJZCKAPUOOKWZMRSLEY");

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
    msg.setTimeStamp(0.538478217734);
    msg.setSource(21384U);
    msg.setSourceEntity(101U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(107U);
    msg.custom.assign("DFLKCSNERRRBOTPXJMTLPGSNOMJTDHUCNXABAGBVPSQHWBLFYGFUZLHTCNDJQJTLSHXOTRYVPYOPFCKCYRHSDMIDHOMPXYIUCDUGAWBIZNCEUEJBZDAFKCFQITXSBSVMXHWZ");

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
    msg.setTimeStamp(0.325464446931);
    msg.setSource(6784U);
    msg.setSourceEntity(221U);
    msg.setDestination(5377U);
    msg.setDestinationEntity(167U);
    msg.custom.assign("LWRKZIXCIDOMLQGSQXDHXYVZGAFGFQOPUTHXBWILLSCQKAQCHMDACPUSHWKPXYRSKEEVYRNHNRTJOLJSQFFFZWUESHTBBELPVDEMJSHMHONJUYPDIWRMDGFGYUFOCWXUMMKAAOSYTWRMPEBDYFNPUTOUOEZGZVMJONECYTZWBTKJUXKAJOFRPIWAHTIRVABZULNSMPGDVQIXZZZKVGCTNCJBLTXJKPWGQDRYQNLYCXRNB");

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
    msg.setTimeStamp(0.913032622005);
    msg.setSource(7549U);
    msg.setSourceEntity(166U);
    msg.setDestination(35321U);
    msg.setDestinationEntity(20U);
    msg.custom.assign("TWANHIIKPVYPGOQPURPRGIAUOCIFZWKOSIEEXSBSASJJKNETXCYZKUZFXALJEGTRLZOYZTPJSWVCOPDCMHDUTWNMCRGYOFOXYJFSWDIDORHKQPGBFKJIJABQBMQYNVHQQVKAXJOQDLFBDVAQUVUMSLWVEBUURUXJQ");

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
    msg.setTimeStamp(0.147071426926);
    msg.setSource(61684U);
    msg.setSourceEntity(109U);
    msg.setDestination(764U);
    msg.setDestinationEntity(96U);
    msg.timeout = 38438U;
    msg.lat = 0.277546054998;
    msg.lon = 0.361390248675;
    msg.z = 0.0910539077724;
    msg.z_units = 252U;
    msg.duration = 36554U;
    msg.speed = 0.286543266219;
    msg.speed_units = 179U;
    msg.type = 126U;
    msg.radius = 0.802472059789;
    msg.length = 0.657085884168;
    msg.bearing = 0.305499803668;
    msg.direction = 66U;
    msg.custom.assign("ACHIEFAUAKMRRZOTLMKNFYBSBNYRJLFEZACBCISDXFJTXZDYEGEJRUFNDKZZARHSCUFQDBUEGNGZGWLJZPDEPOUGGQYXWGBLIH");

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
    msg.setTimeStamp(0.736317764993);
    msg.setSource(16609U);
    msg.setSourceEntity(20U);
    msg.setDestination(25274U);
    msg.setDestinationEntity(48U);
    msg.timeout = 38307U;
    msg.lat = 0.725872048406;
    msg.lon = 0.24878681862;
    msg.z = 0.954004549353;
    msg.z_units = 141U;
    msg.duration = 1977U;
    msg.speed = 0.888606224935;
    msg.speed_units = 9U;
    msg.type = 50U;
    msg.radius = 0.953202429026;
    msg.length = 0.606112721104;
    msg.bearing = 0.780871332074;
    msg.direction = 211U;
    msg.custom.assign("OEUUXBEVRLBUILFGFFBFXVODSHVMKFGTNZBTLJYMHSTBCHSCAMOQXTGIURBIRNZEAIMHPHXLURUAKVYTLOYXUPGCNWEPTZMOLIHJIOTAKRX");

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
    msg.setTimeStamp(0.396339011263);
    msg.setSource(46266U);
    msg.setSourceEntity(194U);
    msg.setDestination(36899U);
    msg.setDestinationEntity(26U);
    msg.timeout = 13848U;
    msg.lat = 0.953409562501;
    msg.lon = 0.347110308565;
    msg.z = 0.263207997982;
    msg.z_units = 197U;
    msg.duration = 48408U;
    msg.speed = 0.903479180928;
    msg.speed_units = 199U;
    msg.type = 44U;
    msg.radius = 0.602123270065;
    msg.length = 0.662091467463;
    msg.bearing = 0.851257007389;
    msg.direction = 91U;
    msg.custom.assign("SMFYBZKVLVAYWKGWUEXVGJCHXOINRCQMMBWHEBFQHZISVXTNTNQMOZIIIDBVWTCFBZREPPXVCPFRGYOSXTIGQCYALXWJMRJJYQJDFTQDVAROJLBTLAODXNIOZUUJIHMRHGTOEZSYTFKWDSFZRYKJDTNMORKDUPNZMVDKYFBNSPLWCHCGGHKAVGSEOCQZMQUQPYN");

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
    msg.setTimeStamp(0.604344099252);
    msg.setSource(40165U);
    msg.setSourceEntity(210U);
    msg.setDestination(8961U);
    msg.setDestinationEntity(119U);
    msg.duration = 44538U;
    msg.custom.assign("HAVABLHNKXIBVKLLNHRTKKYTFSRYMKDTUMFHBUMBXACKRELNSZVEMVAPOLNFNUJHZDXCPEDWQFGIJNOGMJRSSHJCGDXKWSQKAOOYXQGOEHMGOIICOWALJ");

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
    msg.setTimeStamp(0.575476786205);
    msg.setSource(5821U);
    msg.setSourceEntity(85U);
    msg.setDestination(39212U);
    msg.setDestinationEntity(58U);
    msg.duration = 31005U;
    msg.custom.assign("FEFIFRZZQHHXOUADHUZSDDPCPJJGGERHAMTQQOOISLNJIRUWTWSPNDWCYNUUQYFBEPFVSNXAPYIBCBDYQKHSPYZLVGEARYEIORCBRVXVIEILTCVJONUTWHHZOJDBGAFSYLWYBMGHHJWDJMRMETQFKZGUVUPLRMCIYNZPMWQXUKETBDVOXJDTPKFGBLGSDVVZEWLXNCMKXCXAYONMKJALWQBAPBSASXGLS");

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
    msg.setTimeStamp(0.40660727731);
    msg.setSource(33800U);
    msg.setSourceEntity(76U);
    msg.setDestination(25962U);
    msg.setDestinationEntity(5U);
    msg.duration = 35506U;
    msg.custom.assign("HDDZLHBJKXXCDDUAEPILKXKRCMULYNVSFTFIMIPTEDDIKJHWERPONCJBVMIFUBBUUEPOJVGNAOMORKZCZIJTISAUXMYUIYEYESYEZQCXXRNGHLSWVYNJUSBPRPGBRBLADKTOLPWTMFAGEOHHLZLCYOVNPGWMCBKFVPAWVZSYFOQIALWFTKXQFODQZWQWZXGCJQYVMHQJQACAWSJ");

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
    msg.setTimeStamp(0.566330228744);
    msg.setSource(33562U);
    msg.setSourceEntity(55U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(109U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.409228325096;
    msg.control.set(tmp_msg_0);
    msg.duration = 23333U;
    msg.custom.assign("ZHYYRFIUGMCRNVEAUCUOTQWPVSINBDMDSLXQJGTOBUAMVQJOZUZCQTCACHOPKVNNGRQHAGETQZWUFABOLBCXEVFBKSWGOPBBVHYPMCREJSZHHDYISEPHKIEDJWILNMEQQFAYEKYLRWOXMMMEHJVUFRNNHSLPRTTFDPWXARBTWKKGWZCBIXJLWMZGUKFIFWCQIPLNARDQDYTNZBKIAUOYMIXJTYCUGJJPGSLKVFXDRXDPZJTYSVGLAH");

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
    msg.setTimeStamp(0.38588426968);
    msg.setSource(45227U);
    msg.setSourceEntity(157U);
    msg.setDestination(48612U);
    msg.setDestinationEntity(165U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.643116812615;
    msg.control.set(tmp_msg_0);
    msg.duration = 37303U;
    msg.custom.assign("DVUPSSCQVNUNVHIINMAJPWSUNTMFZYZUJJJLTLIBOMARXLHRGRZKXOSKZVNPSDZBIDHUSUAOWZEJKWOFKGKVYPEPTMRMKSHTWTYQDEQFEYXAFKDHXFEWCGTVIESARBDUJZILSHVCSOLFYYHVEQFDJAOBCBMGKMEBIBYQXNPFMXCILAGJG");

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
    msg.setTimeStamp(0.610795424503);
    msg.setSource(31132U);
    msg.setSourceEntity(26U);
    msg.setDestination(25271U);
    msg.setDestinationEntity(103U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.83627716541;
    msg.control.set(tmp_msg_0);
    msg.duration = 22658U;
    msg.custom.assign("XUGKTHZCRDTWCPWEQB");

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
    msg.setTimeStamp(0.826032200908);
    msg.setSource(31057U);
    msg.setSourceEntity(36U);
    msg.setDestination(3413U);
    msg.setDestinationEntity(229U);
    msg.timeout = 19546U;
    msg.lat = 0.365454118736;
    msg.lon = 0.17401004578;
    msg.z = 0.925831785227;
    msg.z_units = 126U;
    msg.speed = 0.391889806209;
    msg.speed_units = 73U;
    msg.bearing = 0.755686514156;
    msg.cross_angle = 0.448016327736;
    msg.width = 0.309533021344;
    msg.length = 0.19166065025;
    msg.hstep = 0.913279498298;
    msg.coff = 215U;
    msg.alternation = 181U;
    msg.flags = 11U;
    msg.custom.assign("ZRHNMIREXHYPHWXKZOJSEPOHORAVQCUMBRLQUSAWQTWYFGZORBNJKGTMIIYCKIZJKDYCABWPZOMWDXRCNEXMHWILJKRDZQHY");

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
    msg.setTimeStamp(0.907723897674);
    msg.setSource(48889U);
    msg.setSourceEntity(114U);
    msg.setDestination(50048U);
    msg.setDestinationEntity(174U);
    msg.timeout = 50568U;
    msg.lat = 0.492097530557;
    msg.lon = 0.0650147863616;
    msg.z = 0.963712107416;
    msg.z_units = 68U;
    msg.speed = 0.0999580865676;
    msg.speed_units = 158U;
    msg.bearing = 0.849554465941;
    msg.cross_angle = 0.935848628917;
    msg.width = 0.434220096344;
    msg.length = 0.0543766131323;
    msg.hstep = 0.371107674623;
    msg.coff = 51U;
    msg.alternation = 74U;
    msg.flags = 223U;
    msg.custom.assign("FNQPKLMXXRGCQJYSARYSIPIVWHEPULFWGRNENEADLGLDITYEBXNSHOCAJRNJYEFUDADKUVZ");

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
    msg.setTimeStamp(0.476078105022);
    msg.setSource(41060U);
    msg.setSourceEntity(67U);
    msg.setDestination(6575U);
    msg.setDestinationEntity(152U);
    msg.timeout = 45133U;
    msg.lat = 0.963016643384;
    msg.lon = 0.834769752401;
    msg.z = 0.150479639826;
    msg.z_units = 203U;
    msg.speed = 0.486228741787;
    msg.speed_units = 118U;
    msg.bearing = 0.69848663321;
    msg.cross_angle = 0.908281065308;
    msg.width = 0.564126156023;
    msg.length = 0.819223992603;
    msg.hstep = 0.567258431298;
    msg.coff = 244U;
    msg.alternation = 101U;
    msg.flags = 115U;
    msg.custom.assign("UTBPTBNQRNFCHSDDUUTVYKIUDLJOBPOBBXFKXIEKHDPGEGPEMJMWNXDSEAJFQKIWNXHXBOOVJHPZSQSQJVBHHUAIIWURUELBTMTQYPEWZGQJQGNSCKWLVWHMGKNENLKOXSLNNSDWTRZIIOFEGCDLKITTRIJAZRHGNMDCOFLIEQVJSMCHYRTVXRWAYWFMSYFQAFZPUAFRGZCMLYAUPZZKCMJHOUYWYAZAFGVQKBCRXZSJMGCBDP");

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
    msg.setTimeStamp(0.0369302350438);
    msg.setSource(60518U);
    msg.setSourceEntity(239U);
    msg.setDestination(17857U);
    msg.setDestinationEntity(212U);
    msg.timeout = 4435U;
    msg.lat = 0.061097849272;
    msg.lon = 0.666139166499;
    msg.z = 0.246720098991;
    msg.z_units = 21U;
    msg.speed = 0.122288559641;
    msg.speed_units = 232U;
    msg.custom.assign("GSBSXINVOFIYFUWDIIPOVQLPRPOEDPZYKZRWBZYNEGIMMUVFBGMSDWTNQZCWWXRKJJVEKUAERTDSFSPSBANJMCPWMJDAYYSYJPSHMTDIFTHKHWXSZMMFIZUXQF");

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
    msg.setTimeStamp(0.455454413296);
    msg.setSource(16781U);
    msg.setSourceEntity(1U);
    msg.setDestination(11944U);
    msg.setDestinationEntity(53U);
    msg.timeout = 15379U;
    msg.lat = 0.827636690392;
    msg.lon = 0.587040287836;
    msg.z = 0.594660380617;
    msg.z_units = 2U;
    msg.speed = 0.5505555954;
    msg.speed_units = 198U;
    msg.custom.assign("IIYSXWFXHKGKLMCGACNQDDPIIWKKYEERDMIJMFUJSCTPQMJOPMGOETSGUYSPLGZBIOHJLXFVDLTPBIXKBFESBPRAFBUEPUNAQBCZRPVVHDWWJFXDBQDNHJZGSYQSEWRVHROYMOTVPWTOAXUHVO");

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
    msg.setTimeStamp(0.387779794186);
    msg.setSource(14613U);
    msg.setSourceEntity(116U);
    msg.setDestination(37646U);
    msg.setDestinationEntity(2U);
    msg.timeout = 60543U;
    msg.lat = 0.222531886047;
    msg.lon = 0.734870975443;
    msg.z = 0.0716126210707;
    msg.z_units = 248U;
    msg.speed = 0.0753132848385;
    msg.speed_units = 123U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.917544921933;
    tmp_msg_0.y = 0.936991106393;
    tmp_msg_0.z = 0.520718099365;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HPOYUXCGAGOLGCXIYZZWKTHOKLILIOYURZRUCHCSFQJHINJMPRQDEWFVYQZVQPIAGHUGKLLSDYGLVVAFZCYVWCKGSOPFCEJPJRBSPENFKLDKRNHXKTNMDXDJFWITIBIFVSGDDORVCOAMMWMABXNQBBMFSEKTYNHNGEUHHDXJCBRJWPPZM");

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
    msg.setTimeStamp(0.0110214207687);
    msg.setSource(36261U);
    msg.setSourceEntity(5U);
    msg.setDestination(21439U);
    msg.setDestinationEntity(238U);
    msg.x = 0.190271971431;
    msg.y = 0.192396396307;
    msg.z = 0.882086448931;

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
    msg.setTimeStamp(0.910313000403);
    msg.setSource(21256U);
    msg.setSourceEntity(219U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(73U);
    msg.x = 0.515696688725;
    msg.y = 0.615143570902;
    msg.z = 0.122884638518;

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
    msg.setTimeStamp(0.377955028916);
    msg.setSource(48856U);
    msg.setSourceEntity(44U);
    msg.setDestination(35913U);
    msg.setDestinationEntity(80U);
    msg.x = 0.868956818234;
    msg.y = 0.947201869619;
    msg.z = 0.211784908051;

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
    msg.setTimeStamp(0.0878168407719);
    msg.setSource(17662U);
    msg.setSourceEntity(159U);
    msg.setDestination(3949U);
    msg.setDestinationEntity(196U);
    msg.timeout = 43025U;
    msg.lat = 0.0806796461674;
    msg.lon = 0.316741409962;
    msg.z = 0.670841105087;
    msg.z_units = 76U;
    msg.amplitude = 0.743303743723;
    msg.pitch = 0.345101150253;
    msg.speed = 0.833013782999;
    msg.speed_units = 224U;
    msg.custom.assign("XTICMQKDBLYBNVEGWORFIDJZYVVFMUIHIRDHJKVASRMTONMPRILQMMOXOFYSXJUSYXHBOWJROLMLTDVDYJHSAJQGTUFTGRBDANYHCBOHPAXGHGLSIAPSKMFRZGPTUQRIDLGSCVZQOHCWAFTUBJCUZQBELMKNJPCGCECTKCXEVXXDPODYBAUUZICEEGFVNEJAARFZIWSNNYIKQPVTNYHZZUWWP");

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
    msg.setTimeStamp(0.434243379575);
    msg.setSource(2521U);
    msg.setSourceEntity(12U);
    msg.setDestination(34050U);
    msg.setDestinationEntity(119U);
    msg.timeout = 2261U;
    msg.lat = 0.669730282026;
    msg.lon = 0.283210511276;
    msg.z = 0.50298477078;
    msg.z_units = 75U;
    msg.amplitude = 0.0557906518438;
    msg.pitch = 0.847786146243;
    msg.speed = 0.28833051974;
    msg.speed_units = 49U;
    msg.custom.assign("KLKNRLYKDUBACSMESLIIVPMMFKKTXPFQERPTIWKBDILURBBLBXIRDJZMDACWNPPCJVDZUGOWJJSYOEGYXFUWNKPXSMNJVIOSCTORGXFUHTSMOFEWAJFHYBZAAESHKUZHBWVVOATB");

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
    msg.setTimeStamp(0.327668181781);
    msg.setSource(56365U);
    msg.setSourceEntity(37U);
    msg.setDestination(29264U);
    msg.setDestinationEntity(205U);
    msg.timeout = 6372U;
    msg.lat = 0.250164144553;
    msg.lon = 0.420028287967;
    msg.z = 0.100093023415;
    msg.z_units = 240U;
    msg.amplitude = 0.224948564412;
    msg.pitch = 0.0999399546625;
    msg.speed = 0.369116157286;
    msg.speed_units = 82U;
    msg.custom.assign("MVDNMBRMCIKEIQXNNZYAZLYTDVCSNLUITQIBJNCIAXPOORNGSEZFSVNMCPXDRLDBUQTRREQTVEUEXGJZACTJZSLPJFPZBWLJGTGAUCBHAFYUGCEAWHKOUWOBSPBFJVYRAKGEKSYWLKSZVIMJOH");

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
    msg.setTimeStamp(0.967867747256);
    msg.setSource(30502U);
    msg.setSourceEntity(88U);
    msg.setDestination(12554U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.0136699819628);
    msg.setSource(44637U);
    msg.setSourceEntity(166U);
    msg.setDestination(55063U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.00154100415408);
    msg.setSource(20235U);
    msg.setSourceEntity(216U);
    msg.setDestination(48694U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.163007170209);
    msg.setSource(37575U);
    msg.setSourceEntity(11U);
    msg.setDestination(10378U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.161705631801;
    msg.lon = 0.581595690919;
    msg.z = 0.426649172248;
    msg.z_units = 14U;
    msg.radius = 0.959388446951;
    msg.duration = 4808U;
    msg.speed = 0.197675030829;
    msg.speed_units = 93U;
    msg.popup_period = 62270U;
    msg.popup_duration = 28092U;
    msg.flags = 137U;
    msg.custom.assign("VYGHQJWHZVLOGBAKGJCUOXEOHBNYMNUVOSVLQKNOEXSTXVYCRBEHXYJPJHPRMMBFCSYZUBWUTWVLDHTVYRYIXJKMPAZGKOPWUTDJBDIPAFAYVGTPTCJRPFCSICFHEFQSSWODNFBGXXLENZBKUTRJHRNEMEIILZHQPLILGOQLEKAAIUHFIVCRBCTONXCBKMDKGXLYULFRPEDYSFWS");

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
    msg.setTimeStamp(0.381634127367);
    msg.setSource(29874U);
    msg.setSourceEntity(229U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.745284205141;
    msg.lon = 0.131474201897;
    msg.z = 0.724814419559;
    msg.z_units = 59U;
    msg.radius = 0.705113881597;
    msg.duration = 49335U;
    msg.speed = 0.123556038153;
    msg.speed_units = 24U;
    msg.popup_period = 58483U;
    msg.popup_duration = 65481U;
    msg.flags = 245U;
    msg.custom.assign("EBDTKWSULRKTLYUFIHGCTGQZKGCDXXOIOFNNPZCAHDHFNHNZJXFKTRQWVTKPRZXBVVEGGKHGFMGWXTBHDY");

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
    msg.setTimeStamp(0.652164683598);
    msg.setSource(61007U);
    msg.setSourceEntity(208U);
    msg.setDestination(51025U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.137595989678;
    msg.lon = 0.0833377889183;
    msg.z = 0.675908491656;
    msg.z_units = 88U;
    msg.radius = 0.656979000321;
    msg.duration = 1170U;
    msg.speed = 0.517690883943;
    msg.speed_units = 240U;
    msg.popup_period = 8759U;
    msg.popup_duration = 19434U;
    msg.flags = 105U;
    msg.custom.assign("ZFEQZGKMOWLTSMVJUJIEWSIBKZHIBHBAAWZBPYPLQZXWDBPUYFAHIQVRBHEXUNCPIARMRPYYUNOWLMQGJEDFTKYPLRKYYUDRKXIHXFAVWFEJSJAEFVAIHHOYODOVWTQWDNLSOBUYMAGXCXMUDGOJOMZUOQKTRGCVITTPWOSLRLQEUBPTKIJCGFHESLALNESCXCEPZZNMSCYZDNCDJARJHRC");

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
    msg.setTimeStamp(0.890723155949);
    msg.setSource(34457U);
    msg.setSourceEntity(249U);
    msg.setDestination(25905U);
    msg.setDestinationEntity(20U);
    msg.timeout = 14260U;
    msg.flags = 169U;
    msg.lat = 0.0762847186594;
    msg.lon = 0.0334205390065;
    msg.start_z = 0.891611251805;
    msg.start_z_units = 72U;
    msg.end_z = 0.82161250568;
    msg.end_z_units = 54U;
    msg.radius = 0.633658337839;
    msg.speed = 0.564817764969;
    msg.speed_units = 28U;
    msg.custom.assign("QLEYWXGISEOGEMYJTTAGEUFZTKMPJVARNYOINQLZSOMVJAQTVDBHDVPFXQHSLBCQUYCODSINIRSIULACAVSEFMBUSGOZOLRWXJUAJMHPWFFUXJTNYCTMXTYCPDUCKHGAIZGGFBHUXXPKEYYESMRWVXKGNK");

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
    msg.setTimeStamp(0.854342950248);
    msg.setSource(52079U);
    msg.setSourceEntity(139U);
    msg.setDestination(64445U);
    msg.setDestinationEntity(92U);
    msg.timeout = 23978U;
    msg.flags = 109U;
    msg.lat = 0.162427442185;
    msg.lon = 0.660756428155;
    msg.start_z = 0.748894704349;
    msg.start_z_units = 217U;
    msg.end_z = 0.482213657185;
    msg.end_z_units = 141U;
    msg.radius = 0.931622252416;
    msg.speed = 0.742369022031;
    msg.speed_units = 97U;
    msg.custom.assign("ZEUXWGDERPKPHXATGFCYVYDHIMVZQCBUQOYFBGGZHDTCNPCNBCCJTBISRFPDPOWSFKLFSBNNXBFYSKJLIILYDDBKQUKWZVQZKJPIUEEMJHOPJVNIYEQGGUQRJOEHZNAJSQCRFGKMTHOTJPHSVERZNLWWXTCYNOVQMKIULBAHSSYVWZZWBGETZACHYSXGWKALMXYTAJLKUUFDOVAHRXF");

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
    msg.setTimeStamp(0.985701834573);
    msg.setSource(47735U);
    msg.setSourceEntity(122U);
    msg.setDestination(32679U);
    msg.setDestinationEntity(109U);
    msg.timeout = 37305U;
    msg.flags = 235U;
    msg.lat = 0.922759130314;
    msg.lon = 0.926100457051;
    msg.start_z = 0.127960949203;
    msg.start_z_units = 67U;
    msg.end_z = 0.297291845073;
    msg.end_z_units = 182U;
    msg.radius = 0.0737232253654;
    msg.speed = 0.269762265701;
    msg.speed_units = 211U;
    msg.custom.assign("XXPIFNOOCVIZMSMCXATVUHQEFYXASBJYKNJOAKOKTPMTYRROZQPAXUWHUAZQRDWTCTTNRWBMCUIXJNCSCKHJETLRJBFNCEQQIOUHFVIOQTKDBNJSGJWKMBOUDVFGWPLYDRDBSN");

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
    msg.setTimeStamp(0.870697550839);
    msg.setSource(18736U);
    msg.setSourceEntity(51U);
    msg.setDestination(12143U);
    msg.setDestinationEntity(211U);
    msg.timeout = 36662U;
    msg.lat = 0.324635187358;
    msg.lon = 0.956450569706;
    msg.z = 0.442246408991;
    msg.z_units = 110U;
    msg.speed = 0.489505240133;
    msg.speed_units = 116U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.700966703955;
    tmp_msg_0.y = 0.157787133088;
    tmp_msg_0.z = 0.898451151594;
    tmp_msg_0.t = 0.0292749472271;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UIBBTMKKQZYVBOYNBYBTWNMGWXKQCETEBPNUKWXAZFWOGMAVRLFHXYCZSIALNDAOVSUMEGYJFSUVYSVEHOURZAEJCFMAEVJOFZLTNZKCKNCQULXWDDCSVZHDQUKGHTDSPHASLQPYMFMBCJFRXHYINPFRIDCEKOTJWVYIOQAMNALBXZHPHGXJKAWPHXUUNZOPRJTUSIIXDSQLJRLDLWKBGTJVXPRTRGCRSDJNFIWDGH");

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
    msg.setTimeStamp(0.00383863402123);
    msg.setSource(60987U);
    msg.setSourceEntity(120U);
    msg.setDestination(60419U);
    msg.setDestinationEntity(15U);
    msg.timeout = 2960U;
    msg.lat = 0.196126102251;
    msg.lon = 0.0161628296752;
    msg.z = 0.451508148589;
    msg.z_units = 193U;
    msg.speed = 0.157571277798;
    msg.speed_units = 165U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.849468428662;
    tmp_msg_0.y = 0.859609975225;
    tmp_msg_0.z = 0.0564458175571;
    tmp_msg_0.t = 0.319424577282;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AJWUBAIUCICOMMSLUYHOKTPNMVBWUTEQSRDLQLTCRMMFEJFJDUAQSTASXBZDGLQCCYJXBFYVRFYDZQAQKK");

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
    msg.setTimeStamp(0.605322474202);
    msg.setSource(54050U);
    msg.setSourceEntity(55U);
    msg.setDestination(17180U);
    msg.setDestinationEntity(63U);
    msg.timeout = 25548U;
    msg.lat = 0.26852890698;
    msg.lon = 0.671742443541;
    msg.z = 0.0985542020314;
    msg.z_units = 186U;
    msg.speed = 0.823526896818;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.67044973799;
    tmp_msg_0.y = 0.284673890332;
    tmp_msg_0.z = 0.135355362229;
    tmp_msg_0.t = 0.15520314655;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TYQNYZYZKYWJXRSCVF");

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
    msg.setTimeStamp(0.485574807761);
    msg.setSource(55326U);
    msg.setSourceEntity(2U);
    msg.setDestination(787U);
    msg.setDestinationEntity(190U);
    msg.x = 0.856328340964;
    msg.y = 0.0844168967634;
    msg.z = 0.84525553787;
    msg.t = 0.536732827832;

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
    msg.setTimeStamp(0.193918843807);
    msg.setSource(43754U);
    msg.setSourceEntity(179U);
    msg.setDestination(1272U);
    msg.setDestinationEntity(188U);
    msg.x = 0.888158121238;
    msg.y = 0.260755410552;
    msg.z = 0.0592821092887;
    msg.t = 0.787550862605;

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
    msg.setTimeStamp(0.29083553785);
    msg.setSource(44636U);
    msg.setSourceEntity(20U);
    msg.setDestination(58496U);
    msg.setDestinationEntity(8U);
    msg.x = 0.509371758467;
    msg.y = 0.0119340615896;
    msg.z = 0.607488383254;
    msg.t = 0.359691852715;

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
    msg.setTimeStamp(0.437316024792);
    msg.setSource(8061U);
    msg.setSourceEntity(142U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(108U);
    msg.timeout = 59767U;
    msg.name.assign("GMLGWJSARUNTWUAANTHYPXELLPTZZJLPPOTJMLSJIVIYNERWFOPITSKSVQZMPJJUQNOBHLWUUDNKHQZWCHFVDFBRKEYVDRNQCYOCJWTUGCLMFBXMQUGXXPTIVMJYZETLHRCDQXDIAIKQXYAMUQBCVVOEN");
    msg.custom.assign("KNHSKDKDWFEGTAWFYIRGSBGRPLCIZUNAMNTZFFGQPGJMDDXRDFVWYFYEESHXANPVQDOMWTZKUDMLWVXQWZTBVQHOUOSEIETRJLMQCUIIDXUFXTZLLASEYIVXYMJTXAJAJYTZESVPCSQCBFMYFEHZKZLIYPKHUAPJBMDVPOVEOOQTWSNQMGPALNRVDBIUROKXYRCXRB");

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
    msg.setTimeStamp(0.569558776687);
    msg.setSource(12655U);
    msg.setSourceEntity(238U);
    msg.setDestination(10982U);
    msg.setDestinationEntity(186U);
    msg.timeout = 54861U;
    msg.name.assign("LXAAKXKMCOMLCWYFTIG");
    msg.custom.assign("SJUKJBQSYREKTLNMJRHLAPPXOXGGTASYCLDGASVOWJBIZTMDFYVPAIHNKVKEPJNXZUGSVLQMHMXICAUHBBHAQGXDWXMTULFPLYYFIRHCONYIUEOVQUGDZHITBYZVQQVOTZXORGEOCNRTZLCXVAVBEKMXCSKWWWUPROCLIAWTRIJSNKHNZFRBUDGKTYFWWAZKCBRBLJZFECQHFEGAWSLREDHSOPIYJMIDDMFNYUSNDMECQQFONBQPMZKW");

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
    msg.setTimeStamp(0.789489782069);
    msg.setSource(51222U);
    msg.setSourceEntity(186U);
    msg.setDestination(41328U);
    msg.setDestinationEntity(105U);
    msg.timeout = 38906U;
    msg.name.assign("NJDICXEHMELRHKBLYDOQVZTWBDFHWPCUFAQSNCQGQTTZCUMHEWOKMYIGDWJPPLVTPKTMEBOPHGSRFJATOXSMLSSQHRQCLYTDNBQRYEGOZFTHNAWPNWRNYBKEDJWFZSXCPDCTRYIUPAVIAIIQPQCYUZIUTRSIUJRZVNDNSKXFOAGJSZLOEXJBPUQFVLRBSMFBXZAALI");
    msg.custom.assign("CQMRAYKCEKQZKDNJYRREVPLQCDTUPHVOWVBJKFXFAFDXDANFFXLMHJWUIRWSPGBILLZZIDEXFOMWYCCABAVECESHVKPTTGBGXDOWNKTVLTRNLPHMPNEYKHGIGOKIVTDMGIFXPZEFSBQLUBQQYHHETWGZZXROALSZUJUATNCCTRSMCHHJHWZOUTOWYCVKMIYNVLRUYDSKDXGWQPUEFXSNGEUVMB");

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
    msg.setTimeStamp(0.0717443940828);
    msg.setSource(61409U);
    msg.setSourceEntity(7U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.55696396109;
    msg.lon = 0.00232263905745;
    msg.z = 0.814912960422;
    msg.z_units = 236U;
    msg.speed = 0.695640928292;
    msg.speed_units = 238U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.730658344571;
    tmp_msg_0.y = 0.754665444682;
    tmp_msg_0.z = 0.78793289988;
    tmp_msg_0.t = 0.378976941655;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 34207U;
    tmp_msg_1.off_x = 0.907273310634;
    tmp_msg_1.off_y = 0.439792320302;
    tmp_msg_1.off_z = 0.97288223786;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.549121507743;
    msg.custom.assign("QZYJQBDKJGKQLPMMEKKKTMUEUWWPVJTKEVYBYCIVLSJYHMQFYYXPGZXZCSQKABYIFPFXCID");

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
    msg.setTimeStamp(0.0365263352343);
    msg.setSource(29916U);
    msg.setSourceEntity(163U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.0353430672408;
    msg.lon = 0.72919632155;
    msg.z = 0.109016727717;
    msg.z_units = 198U;
    msg.speed = 0.96891226093;
    msg.speed_units = 167U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23058U;
    tmp_msg_0.off_x = 0.845907582271;
    tmp_msg_0.off_y = 0.023757052832;
    tmp_msg_0.off_z = 0.401109919141;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0250805143655;
    msg.custom.assign("WKNHMYPINRSMOISVHKHYYFWUWFJSFJUBTMOODILKYCEPRTYHQRVLXAGQSCCUYPMXDDVAJWHLTESVDQQXGKYJRTOFWDQUWSHECTRNTJBPORNGZZLALOBBTDGWCSJOFKAGOZKBNPBDBTVZMUKRGIMUDTIFGFTXBPNLEQQ");

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
    msg.setTimeStamp(0.692213818395);
    msg.setSource(37433U);
    msg.setSourceEntity(30U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.495607827813;
    msg.lon = 0.369162250315;
    msg.z = 0.415007971081;
    msg.z_units = 224U;
    msg.speed = 0.746786173256;
    msg.speed_units = 140U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.063097623966;
    tmp_msg_0.y = 0.554907472671;
    tmp_msg_0.z = 0.957579181589;
    tmp_msg_0.t = 0.0330011639204;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0795980316128;
    msg.custom.assign("JOETEXFRHAVQWJOLLTVIEZSWENKCQOPBFYISQAZVITDKVNBGCRJWPGKVSNLXPPLVKXLXHNCLKYTMAQFUMXEADPMWKZQPUIRINGBYQCJZJMDERXJUBTIYWHMOAUZEHUDZTBOFGGGHKBHALEYLLYIFRBQHQASSRPQXLITTPDCHZDSVFFSKGGZGWOPEIOOJN");

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
    msg.setTimeStamp(0.86657793026);
    msg.setSource(16638U);
    msg.setSourceEntity(158U);
    msg.setDestination(22298U);
    msg.setDestinationEntity(199U);
    msg.vid = 35266U;
    msg.off_x = 0.0793329152578;
    msg.off_y = 0.78698326593;
    msg.off_z = 0.266998155467;

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
    msg.setTimeStamp(0.24562029623);
    msg.setSource(43491U);
    msg.setSourceEntity(162U);
    msg.setDestination(8508U);
    msg.setDestinationEntity(156U);
    msg.vid = 41095U;
    msg.off_x = 0.664553117197;
    msg.off_y = 0.760927952297;
    msg.off_z = 0.799625782234;

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
    msg.setTimeStamp(0.903299913721);
    msg.setSource(40402U);
    msg.setSourceEntity(52U);
    msg.setDestination(23736U);
    msg.setDestinationEntity(52U);
    msg.vid = 46721U;
    msg.off_x = 0.102613348223;
    msg.off_y = 0.675554713324;
    msg.off_z = 0.0292625326981;

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
    msg.setTimeStamp(0.428919948506);
    msg.setSource(314U);
    msg.setSourceEntity(64U);
    msg.setDestination(48462U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.995765068274);
    msg.setSource(48933U);
    msg.setSourceEntity(93U);
    msg.setDestination(314U);
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
    msg.setTimeStamp(0.426485209937);
    msg.setSource(4456U);
    msg.setSourceEntity(245U);
    msg.setDestination(17455U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.7791808374);
    msg.setSource(57830U);
    msg.setSourceEntity(91U);
    msg.setDestination(38847U);
    msg.setDestinationEntity(155U);
    msg.mid = 33739U;

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
    msg.setTimeStamp(0.558681643571);
    msg.setSource(51615U);
    msg.setSourceEntity(31U);
    msg.setDestination(22542U);
    msg.setDestinationEntity(101U);
    msg.mid = 3171U;

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
    msg.setTimeStamp(0.198260078042);
    msg.setSource(56667U);
    msg.setSourceEntity(65U);
    msg.setDestination(12339U);
    msg.setDestinationEntity(40U);
    msg.mid = 5338U;

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
    msg.setTimeStamp(0.911688041834);
    msg.setSource(59072U);
    msg.setSourceEntity(55U);
    msg.setDestination(7472U);
    msg.setDestinationEntity(202U);
    msg.state = 61U;
    msg.eta = 41779U;
    msg.info.assign("PINHAFXDISQFIJAFVKGGAZJWUNNAOOTDWUUBGEXMRYYHOKUFCPYZWBRALOLVQLAEZIDMTHHDWJIHDXLSYFJONKTZOYQVVEZVWUDXZQSXCIFECNEXJ");

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
    msg.setTimeStamp(0.878965328369);
    msg.setSource(23502U);
    msg.setSourceEntity(142U);
    msg.setDestination(39398U);
    msg.setDestinationEntity(200U);
    msg.state = 141U;
    msg.eta = 41616U;
    msg.info.assign("NEKJOIJNGXSG");

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
    msg.setTimeStamp(0.365259941066);
    msg.setSource(14185U);
    msg.setSourceEntity(84U);
    msg.setDestination(4056U);
    msg.setDestinationEntity(17U);
    msg.state = 166U;
    msg.eta = 44763U;
    msg.info.assign("EIBTLCXLXSYFNXZKXEFNLAKKUMYSTCXJNQAEPMSJFLSQGFTCCGSXDVQYBVFBLTYEPYNWYZWUPPWBHPRPQGAKICTWKRAPKQMYNFGDRLIHMEEBMDEPLIUKDAUHDGXUZOJORUHZFQVGMALHVZKJWWBPCKZTMNHYIEBHVODMJWXSTZNVDAFUDAZETVJIWXRXPRBBHIYUARLSMNICUDCGVSOHDJNHKIOSOYJNGQQTGFO");

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
    msg.setTimeStamp(0.684665738783);
    msg.setSource(37214U);
    msg.setSourceEntity(79U);
    msg.setDestination(45728U);
    msg.setDestinationEntity(206U);
    msg.system = 35649U;
    msg.duration = 2957U;
    msg.speed = 0.795827703337;
    msg.speed_units = 36U;
    msg.x = 0.490930904307;
    msg.y = 0.780589875942;
    msg.z = 0.102841414824;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.984527040907);
    msg.setSource(12525U);
    msg.setSourceEntity(54U);
    msg.setDestination(48997U);
    msg.setDestinationEntity(96U);
    msg.system = 7848U;
    msg.duration = 34483U;
    msg.speed = 0.378493612139;
    msg.speed_units = 16U;
    msg.x = 0.510112965413;
    msg.y = 0.162783839697;
    msg.z = 0.210003699102;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.212214608757);
    msg.setSource(38030U);
    msg.setSourceEntity(28U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(91U);
    msg.system = 51818U;
    msg.duration = 6561U;
    msg.speed = 0.357685796833;
    msg.speed_units = 201U;
    msg.x = 0.187949933912;
    msg.y = 0.363224191442;
    msg.z = 0.928500088264;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.064289498897);
    msg.setSource(41642U);
    msg.setSourceEntity(95U);
    msg.setDestination(54331U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.00297898784414;
    msg.lon = 0.507405744844;
    msg.speed = 0.636788278624;
    msg.speed_units = 82U;
    msg.duration = 34960U;
    msg.sys_a = 17606U;
    msg.sys_b = 22094U;
    msg.move_threshold = 0.303426082084;

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
    msg.setTimeStamp(0.203619224915);
    msg.setSource(20895U);
    msg.setSourceEntity(165U);
    msg.setDestination(54580U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.575886235638;
    msg.lon = 0.874255867605;
    msg.speed = 0.340191347773;
    msg.speed_units = 52U;
    msg.duration = 61403U;
    msg.sys_a = 54028U;
    msg.sys_b = 32859U;
    msg.move_threshold = 0.185847772745;

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
    msg.setTimeStamp(0.249484361721);
    msg.setSource(34102U);
    msg.setSourceEntity(249U);
    msg.setDestination(38858U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.19541889815;
    msg.lon = 0.727001048484;
    msg.speed = 0.043924068472;
    msg.speed_units = 98U;
    msg.duration = 49207U;
    msg.sys_a = 41955U;
    msg.sys_b = 21974U;
    msg.move_threshold = 0.122219975781;

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
    msg.setTimeStamp(0.50668935217);
    msg.setSource(60686U);
    msg.setSourceEntity(94U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.367393126406;
    msg.lon = 0.978995525086;
    msg.z = 0.262556755962;
    msg.z_units = 180U;
    msg.speed = 0.855373705288;
    msg.speed_units = 244U;
    msg.custom.assign("LUXTGJGJYZMTKSNUEVWUHUAAENYOZVZILSOFBUPBEMKJGFEPHYNVCFZVERLYYNBQWIPBCDADCHSUNAHOODOWFXXIZFCHXDMQNPKPMKHVZUXTGGSIUTTVRCDYVIWP");

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
    msg.setTimeStamp(0.80057260493);
    msg.setSource(5357U);
    msg.setSourceEntity(201U);
    msg.setDestination(17862U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.876794917928;
    msg.lon = 0.993344268066;
    msg.z = 0.881669936036;
    msg.z_units = 159U;
    msg.speed = 0.148541167225;
    msg.speed_units = 132U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.698714919994;
    tmp_msg_0.lon = 0.59141596506;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DXCQAOVIWQCBFBZPOGHHDGYNWNRAXYDQEYSVMHKXUWZCAFLIHOXIWDEXUONGOCIDIKHDEXTZUMMQNTCLLWFBUVHMSMRGXIZUADDPBRUYTJLWCUEIENPSCKKDBPKSXVZVNAJUGZYGGQHYRITQJMZROAPFGOBTFISMBPQEFJVBVZLUHPVQ");

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
    msg.setTimeStamp(0.811371107053);
    msg.setSource(27129U);
    msg.setSourceEntity(0U);
    msg.setDestination(1647U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.440476103694;
    msg.lon = 0.817801571642;
    msg.z = 0.60298440853;
    msg.z_units = 193U;
    msg.speed = 0.724406691852;
    msg.speed_units = 101U;
    msg.custom.assign("OYCSQOOPXLIGRQYBTMCFTBHCXAERFKVCIRMBHDSVSPIJSWKNUXEHHUTQNOCKASASZXMWXJZABHPGMNONSSCPKTQQHJWDFBODZDXRRGDBARLUZNGUTYJHASKKTGAGMLFIQFJMUEYNZAVYRQPWTXOIINGRIFABXVKVQYUPKVELAREJOWJIHGQWXWUEMZIYVFPVYFDFMYLWXTCSUELWZT");

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
    msg.setTimeStamp(0.770907530153);
    msg.setSource(51626U);
    msg.setSourceEntity(119U);
    msg.setDestination(48082U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.29762994812;
    msg.lon = 0.176124847221;

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
    msg.setTimeStamp(0.696919533091);
    msg.setSource(28502U);
    msg.setSourceEntity(144U);
    msg.setDestination(935U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.666691372291;
    msg.lon = 0.611061543981;

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
    msg.setTimeStamp(0.495754570922);
    msg.setSource(24721U);
    msg.setSourceEntity(136U);
    msg.setDestination(45314U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.175584542611;
    msg.lon = 0.144381435472;

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
    msg.setTimeStamp(0.846528613862);
    msg.setSource(14058U);
    msg.setSourceEntity(14U);
    msg.setDestination(53675U);
    msg.setDestinationEntity(55U);
    msg.timeout = 43547U;
    msg.lat = 0.677673321018;
    msg.lon = 0.896387433413;
    msg.z = 0.990066445622;
    msg.z_units = 183U;
    msg.pitch = 0.86531284814;
    msg.amplitude = 0.123997197171;
    msg.duration = 60135U;
    msg.speed = 0.391761786328;
    msg.speed_units = 155U;
    msg.radius = 0.286596872071;
    msg.direction = 186U;
    msg.custom.assign("BYMMHJLEDCKKYZNZNGBBRSXVNBUSWRYVMKKGNHAYXGZMECOCQEYEFIEZTKHYB");

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
    msg.setTimeStamp(0.275559503376);
    msg.setSource(49478U);
    msg.setSourceEntity(125U);
    msg.setDestination(20830U);
    msg.setDestinationEntity(112U);
    msg.timeout = 5117U;
    msg.lat = 0.969586947981;
    msg.lon = 0.632652587031;
    msg.z = 0.314983581025;
    msg.z_units = 46U;
    msg.pitch = 0.782208259272;
    msg.amplitude = 0.94426503336;
    msg.duration = 56276U;
    msg.speed = 0.314964052192;
    msg.speed_units = 172U;
    msg.radius = 0.877995172187;
    msg.direction = 164U;
    msg.custom.assign("IBXYZKARCOKLGVOAXMDZRNQVKBYMEPRJSNBFTNJGWYWMHYMQMODUFTPNNADKPGSLTHVZIBVTKUHRHBHXLONXWIKMAFCOQHKCCGDIWZSSEJYJVPZJTGIEUPGAYMXLIIQZHNDRFESYTCNRQMUECUOVBRWFUFKQWQDEZVSHTXKPXWAEPMAAYCTYLMGZJUCDKWDDBFRDO");

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
    msg.setTimeStamp(0.142854810221);
    msg.setSource(52122U);
    msg.setSourceEntity(126U);
    msg.setDestination(44959U);
    msg.setDestinationEntity(12U);
    msg.timeout = 62445U;
    msg.lat = 0.6636959589;
    msg.lon = 0.598769826871;
    msg.z = 0.227604694464;
    msg.z_units = 44U;
    msg.pitch = 0.631642843823;
    msg.amplitude = 0.847510791632;
    msg.duration = 51739U;
    msg.speed = 0.0625926007327;
    msg.speed_units = 182U;
    msg.radius = 0.414309498921;
    msg.direction = 205U;
    msg.custom.assign("GNSYJEVRAMCTXOQDPSHZKNTXHGFPNHRDNRFUCXSUXRYUHWZGZPDNSGFHQHOCQMFKBVOVRVOKIAUWUNWKSDQEPRJSKGXTVOFMFAZWYGHXDFOAOUBZLGMEXGBBMTSESYMCFUYOKOPNTLBJVCGNDEQABVTKRVKWTPJTXVJUICUELICMMQEDPBZPQIIHWFAXLZ");

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
    msg.setTimeStamp(0.278635855173);
    msg.setSource(33317U);
    msg.setSourceEntity(128U);
    msg.setDestination(63191U);
    msg.setDestinationEntity(62U);
    msg.formation_name.assign("ISZXEIZGQKUPFAONGWEPPQVWWWQAJMLBSHUIWUZBIQNVEPXKZQOYOJGFKOVJMEAXGRHSHTZSMDPQEUFUEHOBODCSVNXJCGRAYLQJDMXWGZUNILMPLHXNMBOYNPZVZDDOVWCBNFPTYXTEKMZQRJKRABIRTSTHKFGKYTVLJRAQDKNJPUSGCCKLEWSMFMAUTVLUCIYIDBXMFHHYCOVBSHJUDBYQNHCFAKWLCNLWYRTR");
    msg.reference_frame = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26751U;
    tmp_msg_0.off_x = 0.345968679385;
    tmp_msg_0.off_y = 0.231601970552;
    tmp_msg_0.off_z = 0.53214547991;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DGKSHYOJOUWEXKZBIIIOQBGVEEPKILTZTDQZGILWHCFJXYAWDTTAUMCGJRTMUSVENCUBWCFITELDAJITRNFPWGOHJECXHAPMPWGMZGHPKCMBHQKLXI");

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
    msg.setTimeStamp(0.361521164777);
    msg.setSource(14358U);
    msg.setSourceEntity(179U);
    msg.setDestination(351U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("RJLHRJDQRZCZXUAYIYTFMVRHVLKVPOORKTNKPKYCSSWSAGRNZUEPGETZTLWOSQTOYVFBSFIMFHXUEGXGQMTSPWDJEQUUFMLLGOKPUMJONDJJWYAARIQSOZAMAGLCPESZFBRAWOVITGUHVSWBIJFQQEBVRHOLGLPUNYICQFEXNCZNKKJHCDUBCFFQDOGXMMYDNAHIWMQGIWVPLYJDHN");
    msg.reference_frame = 70U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39598U;
    tmp_msg_0.off_x = 0.754029587178;
    tmp_msg_0.off_y = 0.409217663886;
    tmp_msg_0.off_z = 0.887142827153;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QOTUCPKUXXXQIFZHHGIRYCLXCPNFIPVASQJOGB");

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
    msg.setTimeStamp(0.503728899608);
    msg.setSource(17250U);
    msg.setSourceEntity(116U);
    msg.setDestination(27287U);
    msg.setDestinationEntity(9U);
    msg.formation_name.assign("GUQYLEYHPZCYKVLHHTRJBAGXAASXWDHBYLFWIKCKCRZOIVXBPQIVRFYNNNLJGXUCJBZWQWETFAIEBREEWXFFEMBNGGKMXSFTRHKDSIUVWQHGTYRXOVNALTPWYBZETLVHOUIJNSTMMETFXADJSCVGNHJJOYVRMCPAWPZFLYOIISRQDUDPQSODJOKDQHZZUKVUMOLJOFECNNUUSQHCWSADKDGQPGXMP");
    msg.reference_frame = 120U;
    msg.custom.assign("LIWMEQUXEBMPFQOBAVZWPXOYOGMPAWPNDADCDFOIJMTVGRSRZRSYLNTXBLEZYSGVOJAYZLAXTDSOFMHIQEPVTRAZTTHQUUBXQNSKRQOIUEVHRNRJLUEFCNDWPHJDKVMNCEDYVPVUTRKKICDOLFWACJBDTJJORNTRHYBCSSZEXJUWAHSYMFOELGA");

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
    msg.setTimeStamp(0.274306507819);
    msg.setSource(5581U);
    msg.setSourceEntity(78U);
    msg.setDestination(15750U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("GONVFSLUBWUCAVLQNQIVUJEOZLRFQXTJACGGJJTDIYXBTWSUWXVWFL");
    msg.formation_name.assign("QXETUSDCGMRWVZUCRXKIDKSWOJRTIUTGNYVZGVYEIMGCZIVGMQXRDBUQNJCUYHYKJRQLJODHQJYJAJQAATNICIZSOWODMBHRTLSMUONMSTWPWGGFTPYIXWIZLCXXMLLNVAERLUXYYBPTGYWBHBENRDFKVPUFCFVPHBEDLPENHWEBQFUJFZSKFISXNXOQLCTKVHBTZBGDNQHSFDQEAKORJYP");
    msg.plan_id.assign("WWPRRLXPPXJGAHYCJMGQKTLYCGZPYIVVGDITEFKWDQJOEZYQWZXYRXFBACEYNGTDGUFCFOUYRQZGQNPDESXKEZBQCNAFFKGWCQKLVDVNWJKSMJQURHNGPOPPZRLHOHTCNUDIEJUUIASHTSMAJEKVBOLTZJWB");
    msg.description.assign("AECFLITVTHUVIVLJEZXKJNYNYROASUBEJOCQNYPKHOJZESAOOGERLALKNVYLMCTAPHELWQMHUGDVZXLPUKWLKHQBSBRXBQDTKSPQLCTGANBBDDUBI");
    msg.leader_speed = 0.25899089939;
    msg.leader_bank_lim = 0.0450018233917;
    msg.pos_sim_err_lim = 0.174401876852;
    msg.pos_sim_err_wrn = 0.24753798358;
    msg.pos_sim_err_timeout = 62120U;
    msg.converg_max = 0.12271464871;
    msg.converg_timeout = 42206U;
    msg.comms_timeout = 46550U;
    msg.turb_lim = 0.35537002597;
    msg.custom.assign("YHKBJZHYIHWFPZEPDPGKPQUEBXUSKCFQSYNROUYHUAQUCOBESUSHGKROMNHLUFVOFAMIFBJXWAEBQYCVZMWNLNDNSPIFREFDTKCCXYWMOQDBHVVEAJGVOWZMKIRIXVKLLDCHSWZYKJBAW");

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
    msg.setTimeStamp(0.195000544707);
    msg.setSource(10681U);
    msg.setSourceEntity(119U);
    msg.setDestination(31202U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("SNIPACDSPCEOUFHNLYGVEZLCZQSNFKEACGFJUOZXDKUPUEGXBNQBEGYMRAKIYHBWLMFBNOFEOBPVRVKXJKNQJKRLTGKZDOTWZHMGMKDMAILETMWJBCEWYAHIFTC");
    msg.formation_name.assign("JOTJHFOHOTMNUDUKNURBXIRBPHVDUWALZJYZTJTQVTYFWDNFVEKJZMBKLXKLLEMLDWIKOPZGSFPXHRCMOPWHLNXFPDYCODLBEISHPUYPFGPRGQADTUYBRGTQAOSWFCWGACKGISOOLIEEAJRXQQVQELNIMSXTDYNEBRRJWMFNOTJQTNZAPSFZAIMSDKMQLACNWCHPHRVXCSCZYWCABBGFMUIEZVKKUXISYZVRXHHMVGYNGQJUVXAEVBBCK");
    msg.plan_id.assign("USELOTYUTLWZRNSNTIWPYVHFDSTUHQDWCXEMVTOFYNSAXJXBWCEAEFUMBTQ");
    msg.description.assign("BHBDLBNTZQBEJMZNTVDYSKWBZIOURPVBSHCGLQQBDHWEJDFZUCLWUJDTNXCCGAFREOVQPQHNCJAOPVYXUN");
    msg.leader_speed = 0.723165480455;
    msg.leader_bank_lim = 0.610679119075;
    msg.pos_sim_err_lim = 0.178649250802;
    msg.pos_sim_err_wrn = 0.676911263698;
    msg.pos_sim_err_timeout = 56292U;
    msg.converg_max = 0.334043515413;
    msg.converg_timeout = 23776U;
    msg.comms_timeout = 30819U;
    msg.turb_lim = 0.826645718957;
    msg.custom.assign("BUOQZEYKNVEFBXYGCNBHFEHFUZNYMNEGZVQQYUAKTNZNAURPVFZTILVBLBHOOASMRXZMHRCTCISSDQOLTNDXXJABOXHSLXWEMYPGSPWGAOYBNFHJZYEIPFWLVLFIIAAPSDQ");

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
    msg.setTimeStamp(0.235094105885);
    msg.setSource(12870U);
    msg.setSourceEntity(77U);
    msg.setDestination(32335U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("SQYEGXIJFNQSUUCMUNHNDEKHYZVZMOWBUWLATRVYYPSBYHYSIZECGDWDONBWUPQXLADJJQDSVYWEQFLGSTVPMRZHCPGAJNHBWPZFR");
    msg.formation_name.assign("JYPLKRZTVUPCGDYCREJLCGDOFWUGBVWZENSKNMJVAOSCAKFJKMPWBWUTFSAINIHHHFEKAZCZIU");
    msg.plan_id.assign("NJRWYQGDKSFHABAKTOXIHCESGLXJXLRAZQNXAUSUYBFFBIXJSVVZWLPYOUPCUKJOMEWQCFUSVBWQBWGAPNFZRVYPNKEPDICAMJYQLXHSEYTNEEDSMMENQFCITJUIVCVTSGUARYBIRZVFBLMUZOQHVHTOSIODQZJKRPHLCFPTZIDAEKBRXDKBEMMRNK");
    msg.description.assign("QHPIVIVKKWDGWTFXWSXJRFMKQRTIZGLBOYUISCZENMPUQMT");
    msg.leader_speed = 0.947247105347;
    msg.leader_bank_lim = 0.85451411639;
    msg.pos_sim_err_lim = 0.730281281016;
    msg.pos_sim_err_wrn = 0.505852394146;
    msg.pos_sim_err_timeout = 14014U;
    msg.converg_max = 0.758319174557;
    msg.converg_timeout = 25877U;
    msg.comms_timeout = 33643U;
    msg.turb_lim = 0.553340459226;
    msg.custom.assign("HFWBEMLYLPHRBPLCWRIZLVTLGOHNNQSTSXMXDYSFUWQEIRWEYNDAMPYHAWKCWI");

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
    msg.setTimeStamp(0.530396578647);
    msg.setSource(16463U);
    msg.setSourceEntity(114U);
    msg.setDestination(26164U);
    msg.setDestinationEntity(52U);
    msg.control_src = 9561U;
    msg.control_ent = 67U;
    msg.timeout = 0.165538866247;
    msg.loiter_radius = 0.412437161468;
    msg.altitude_interval = 0.208634802073;

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
    msg.setTimeStamp(0.454766930813);
    msg.setSource(18078U);
    msg.setSourceEntity(82U);
    msg.setDestination(34712U);
    msg.setDestinationEntity(251U);
    msg.control_src = 49031U;
    msg.control_ent = 228U;
    msg.timeout = 0.623244590859;
    msg.loiter_radius = 0.832430535366;
    msg.altitude_interval = 0.251649039532;

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
    msg.setTimeStamp(0.655549340722);
    msg.setSource(12637U);
    msg.setSourceEntity(117U);
    msg.setDestination(58482U);
    msg.setDestinationEntity(31U);
    msg.control_src = 7624U;
    msg.control_ent = 222U;
    msg.timeout = 0.193479553142;
    msg.loiter_radius = 0.836528865936;
    msg.altitude_interval = 0.226887874237;

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
    msg.setTimeStamp(0.864668008221);
    msg.setSource(57591U);
    msg.setSourceEntity(12U);
    msg.setDestination(27255U);
    msg.setDestinationEntity(232U);
    msg.flags = 111U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.557419462073;
    tmp_msg_0.speed_units = 55U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.975757738255;
    tmp_msg_1.z_units = 2U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.855014892183;
    msg.lon = 0.0806031034113;
    msg.radius = 0.674216060471;

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
    msg.setTimeStamp(0.913801499557);
    msg.setSource(7390U);
    msg.setSourceEntity(152U);
    msg.setDestination(3945U);
    msg.setDestinationEntity(58U);
    msg.flags = 75U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.540685100528;
    tmp_msg_0.speed_units = 55U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.883168635237;
    tmp_msg_1.z_units = 143U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0457934963374;
    msg.lon = 0.171301892306;
    msg.radius = 0.125337688811;

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
    msg.setTimeStamp(0.999541271908);
    msg.setSource(4212U);
    msg.setSourceEntity(110U);
    msg.setDestination(17640U);
    msg.setDestinationEntity(132U);
    msg.flags = 162U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.246863433487;
    tmp_msg_0.speed_units = 162U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.158973907202;
    tmp_msg_1.z_units = 146U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.195655428231;
    msg.lon = 0.184943062443;
    msg.radius = 0.0265388394559;

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
    msg.setTimeStamp(0.762996948472);
    msg.setSource(57329U);
    msg.setSourceEntity(101U);
    msg.setDestination(47918U);
    msg.setDestinationEntity(202U);
    msg.control_src = 43247U;
    msg.control_ent = 50U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 6U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.171553405389;
    tmp_tmp_msg_0_0.speed_units = 169U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9582459225;
    tmp_tmp_msg_0_1.z_units = 192U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.203696629385;
    tmp_msg_0.lon = 0.0672997962465;
    tmp_msg_0.radius = 0.268051345582;
    msg.reference.set(tmp_msg_0);
    msg.state = 151U;
    msg.proximity = 28U;

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
    msg.setTimeStamp(0.628145839799);
    msg.setSource(48051U);
    msg.setSourceEntity(62U);
    msg.setDestination(46600U);
    msg.setDestinationEntity(132U);
    msg.control_src = 4836U;
    msg.control_ent = 21U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 228U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.175323560288;
    tmp_tmp_msg_0_0.speed_units = 144U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.663833410711;
    tmp_tmp_msg_0_1.z_units = 129U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.276264864589;
    tmp_msg_0.lon = 0.0736948726298;
    tmp_msg_0.radius = 0.215855307172;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 237U;

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
    msg.setTimeStamp(0.73824794649);
    msg.setSource(59895U);
    msg.setSourceEntity(250U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(132U);
    msg.control_src = 14940U;
    msg.control_ent = 174U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 178U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.725941119529;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.325099280871;
    tmp_tmp_msg_0_1.z_units = 98U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0467731753961;
    tmp_msg_0.lon = 0.425190131229;
    tmp_msg_0.radius = 0.0158178104407;
    msg.reference.set(tmp_msg_0);
    msg.state = 12U;
    msg.proximity = 120U;

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
    msg.setTimeStamp(0.0657209067815);
    msg.setSource(32255U);
    msg.setSourceEntity(244U);
    msg.setDestination(63200U);
    msg.setDestinationEntity(180U);
    msg.ax_cmd = 0.0707191928918;
    msg.ay_cmd = 0.8616407885;
    msg.az_cmd = 0.273437671248;
    msg.ax_des = 0.756497134753;
    msg.ay_des = 0.245935691873;
    msg.az_des = 0.259810812408;
    msg.virt_err_x = 0.162671007696;
    msg.virt_err_y = 0.801495306836;
    msg.virt_err_z = 0.856483510189;
    msg.surf_fdbk_x = 0.1449187784;
    msg.surf_fdbk_y = 0.323255798381;
    msg.surf_fdbk_z = 0.604378126221;
    msg.surf_unkn_x = 0.167460693922;
    msg.surf_unkn_y = 0.269130649948;
    msg.surf_unkn_z = 0.0284768379959;
    msg.ss_x = 0.0085274123477;
    msg.ss_y = 0.923392256035;
    msg.ss_z = 0.863343034461;

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
    msg.setTimeStamp(0.166651329318);
    msg.setSource(53795U);
    msg.setSourceEntity(130U);
    msg.setDestination(24094U);
    msg.setDestinationEntity(158U);
    msg.ax_cmd = 0.642552901571;
    msg.ay_cmd = 0.740032935282;
    msg.az_cmd = 0.3449012452;
    msg.ax_des = 0.0864137922098;
    msg.ay_des = 0.321447311671;
    msg.az_des = 0.78266028766;
    msg.virt_err_x = 0.624727013532;
    msg.virt_err_y = 0.713174480014;
    msg.virt_err_z = 0.480827883312;
    msg.surf_fdbk_x = 0.675874658074;
    msg.surf_fdbk_y = 0.404647395698;
    msg.surf_fdbk_z = 0.894021401202;
    msg.surf_unkn_x = 0.394905902825;
    msg.surf_unkn_y = 0.757517148486;
    msg.surf_unkn_z = 0.415814897859;
    msg.ss_x = 0.00307941721318;
    msg.ss_y = 0.0491043974482;
    msg.ss_z = 0.644705455977;

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
    msg.setTimeStamp(0.678082888934);
    msg.setSource(13428U);
    msg.setSourceEntity(59U);
    msg.setDestination(20665U);
    msg.setDestinationEntity(214U);
    msg.ax_cmd = 0.812614678826;
    msg.ay_cmd = 0.521815206472;
    msg.az_cmd = 0.942279496367;
    msg.ax_des = 0.882723308095;
    msg.ay_des = 0.76794376122;
    msg.az_des = 0.506742362956;
    msg.virt_err_x = 0.497245216347;
    msg.virt_err_y = 0.0356933992789;
    msg.virt_err_z = 0.00195692966399;
    msg.surf_fdbk_x = 0.682721036054;
    msg.surf_fdbk_y = 0.997806363596;
    msg.surf_fdbk_z = 0.877229003795;
    msg.surf_unkn_x = 0.338196979106;
    msg.surf_unkn_y = 0.462659637156;
    msg.surf_unkn_z = 0.800320259182;
    msg.ss_x = 0.671781327828;
    msg.ss_y = 0.482515202966;
    msg.ss_z = 0.207746501286;

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
    msg.setTimeStamp(0.470606516022);
    msg.setSource(34729U);
    msg.setSourceEntity(131U);
    msg.setDestination(30912U);
    msg.setDestinationEntity(22U);
    msg.s_id.assign("CFHNTNPLEWNHTTXXGEHTHNVKURVPJGWZ");
    msg.dist = 0.624694968507;
    msg.err = 0.794543430648;
    msg.ctrl_imp = 0.295290068718;
    msg.rel_dir_x = 0.373219873797;
    msg.rel_dir_y = 0.162413783982;
    msg.rel_dir_z = 0.259073389111;
    msg.err_x = 0.902792422732;
    msg.err_y = 0.111061434217;
    msg.err_z = 0.796232688688;
    msg.rf_err_x = 0.517245387087;
    msg.rf_err_y = 0.268454337146;
    msg.rf_err_z = 0.0972502062563;
    msg.rf_err_vx = 0.870239167373;
    msg.rf_err_vy = 0.260108443124;
    msg.rf_err_vz = 0.0659581626547;
    msg.ss_x = 0.956818046691;
    msg.ss_y = 0.604184605138;
    msg.ss_z = 0.71966777886;
    msg.virt_err_x = 0.404329281721;
    msg.virt_err_y = 0.578750989364;
    msg.virt_err_z = 0.90856109866;

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
    msg.setTimeStamp(0.837183482981);
    msg.setSource(25931U);
    msg.setSourceEntity(232U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(174U);
    msg.s_id.assign("XPVFAUWDAEFWMCKAPIKOSCSESHNSURQWAFXQDQPKUFRKGIBZOGNCBVVNELXPXBGZUEJGHKZKHCPTWRLWWYXDDUJUQDLAAOPBHIIHGEGRTQPZASGMXWDEXLICONUFXJLCUMEBXNHYSIMSOHWQTVY");
    msg.dist = 0.0132233546977;
    msg.err = 0.994194702693;
    msg.ctrl_imp = 0.922539586389;
    msg.rel_dir_x = 0.636785118508;
    msg.rel_dir_y = 0.991726647597;
    msg.rel_dir_z = 0.696241589271;
    msg.err_x = 0.850000458669;
    msg.err_y = 0.297559993415;
    msg.err_z = 0.102971686903;
    msg.rf_err_x = 0.583857821851;
    msg.rf_err_y = 0.337329750759;
    msg.rf_err_z = 0.0534374369344;
    msg.rf_err_vx = 0.398209636591;
    msg.rf_err_vy = 0.855212537451;
    msg.rf_err_vz = 0.44306351073;
    msg.ss_x = 0.404352548724;
    msg.ss_y = 0.205430946261;
    msg.ss_z = 0.948822513984;
    msg.virt_err_x = 0.114418710551;
    msg.virt_err_y = 0.607826420955;
    msg.virt_err_z = 0.434338314758;

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
    msg.setTimeStamp(0.871474807652);
    msg.setSource(30483U);
    msg.setSourceEntity(140U);
    msg.setDestination(33195U);
    msg.setDestinationEntity(182U);
    msg.s_id.assign("QKDPKAKOCZBXRYWOWNBEKIGWSMURTVPVWADCNRYBMOHEJFJLHSLFOMELCPGFZVQXZUGMGMDQVJXBHMZ");
    msg.dist = 0.266819950826;
    msg.err = 0.696102792124;
    msg.ctrl_imp = 0.522319763663;
    msg.rel_dir_x = 0.970236193558;
    msg.rel_dir_y = 0.837008973217;
    msg.rel_dir_z = 0.332582972495;
    msg.err_x = 0.336994775729;
    msg.err_y = 0.01318332829;
    msg.err_z = 0.236523187305;
    msg.rf_err_x = 0.610530576797;
    msg.rf_err_y = 0.213280083413;
    msg.rf_err_z = 0.828687387574;
    msg.rf_err_vx = 0.359463610024;
    msg.rf_err_vy = 0.655485313393;
    msg.rf_err_vz = 0.341547801466;
    msg.ss_x = 0.533327204928;
    msg.ss_y = 0.00198574932313;
    msg.ss_z = 0.0818328190453;
    msg.virt_err_x = 0.879440659201;
    msg.virt_err_y = 0.697383437396;
    msg.virt_err_z = 0.12222726853;

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
    msg.setTimeStamp(0.820509585517);
    msg.setSource(21121U);
    msg.setSourceEntity(144U);
    msg.setDestination(12904U);
    msg.setDestinationEntity(177U);
    msg.timeout = 2211U;
    msg.rpm = 0.507453320131;
    msg.direction = 199U;
    msg.custom.assign("JNPARTRYIWMGCUBVJOCWEWFIFMFFHDYVDGRUIQO");

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
    msg.setTimeStamp(0.447263598432);
    msg.setSource(27022U);
    msg.setSourceEntity(210U);
    msg.setDestination(58501U);
    msg.setDestinationEntity(95U);
    msg.timeout = 15618U;
    msg.rpm = 0.0306112998345;
    msg.direction = 103U;
    msg.custom.assign("WIKXSCSYMCYDIYIVMGSUDOCSYXNPJCGCPXESKCPVOORIALFQDSTWJEZJWOIKBTAJQMLEPOFKJXTGAVQWJWEXQBJEPEURBAQALTRPHZFBFMEOPYIHMWTNZDYDWCZJWBUXHUHLAAVMANMPOENRLGTHRNBBKFQVJXUSGRFZINTGLKUXIDMHFQZDTRLUCRXWONYTOWHUV");

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
    msg.setTimeStamp(0.314766597418);
    msg.setSource(33508U);
    msg.setSourceEntity(174U);
    msg.setDestination(33889U);
    msg.setDestinationEntity(53U);
    msg.timeout = 40570U;
    msg.rpm = 0.786552230382;
    msg.direction = 170U;
    msg.custom.assign("GTUMAQAVJRQXRVDLSFTBCRPFMNNPYWGJOBCTJZABSNYRNSBRBZSUATGJDXAZZOITFJQMNJXDFCWADKOMSGMYCQHAYUHDNSYDLRXETVOBUGLQIKLCKUEALIUBKSTMBJPEXHIMPHEDOYPLWHCMXJWVQSIK");

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
    msg.setTimeStamp(0.0642564164438);
    msg.setSource(43219U);
    msg.setSourceEntity(87U);
    msg.setDestination(37474U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("WENDZZLFRXCUHKKWZLKMLGTOHRRJQNCONIECQYJAYJXPJAMWGBOUMKDSBNRWOEBIYOUSSGDFJFXTWDZDRROTSVDOGPGECPGZTMVATWUNJWBSBACVNVLAINHTWEYRCAPEFFXYGEKJBFLXZXFUIYQIAHBNUSXHMAHIYHZQJWAZWMRT");
    msg.type = 158U;
    msg.op = 84U;
    msg.group_name.assign("KKNKFQOZUYFVDPFDDHEQGEDBTMHWTQLIJNSFIWMYCHOSJEVCTZMJUPMCWVANABBKODBCWYJVZIVQNRCIAQMZEPOTGQUGJFFELQPXUDELTGQQXPNHFQBPICYUZBGGBPKLIZLYGLDAELORZZMHSVNPAUEZYGXKPRRCSNMJKWWDWFWDFRRLEWOGXASCHKUNKURNAFTXAVLSSBEUJORJJYPYOZBIXSVBRHGKYSTWDMTORTXSICJNUTMAX");
    msg.plan_id.assign("PVRIRCVZPJTMEZIWFMQWOYTQOPYIKRLCWWKQWFJUAYIWDBITGUCYOYZGVIPUOQTETRKSAEDNDAXGLNAKDRJL");
    msg.description.assign("TDGXUVNMHSXQGADFWRIHXZCXKLKILJLSMURKHNFACYOQWJIPBXDWKDGOGSMGKUPFSGZRHYNOSTKMQXZSSIPDNTMBBVCEBWUKKZXPJBTOIIRPDIDAEZQSUVYVDQRFNMPZCYAVQEHCLZJOWUBXAWBMNXRJZTTQT");
    msg.reference_frame = 213U;
    msg.leader_bank_lim = 0.628295173905;
    msg.leader_speed_min = 0.537119005203;
    msg.leader_speed_max = 0.490608546956;
    msg.leader_alt_min = 0.930687103072;
    msg.leader_alt_max = 0.192560711883;
    msg.pos_sim_err_lim = 0.370214278269;
    msg.pos_sim_err_wrn = 0.0678866418739;
    msg.pos_sim_err_timeout = 13394U;
    msg.converg_max = 0.748307617222;
    msg.converg_timeout = 46459U;
    msg.comms_timeout = 39623U;
    msg.turb_lim = 0.00211636730444;
    msg.custom.assign("VZGPCTCSLXNHCZFRNWFLRNKUSAOLFNHGXIKEIHEVZYTDJAKQXWWGNFKVHQMBTJPBFYQQPAXUNVSVP");

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
    msg.setTimeStamp(0.690139413367);
    msg.setSource(49110U);
    msg.setSourceEntity(139U);
    msg.setDestination(37796U);
    msg.setDestinationEntity(13U);
    msg.formation_name.assign("YENWFJCLUXBJLMZOUYEIURENWYMBUVQEJPTOVXEHAOKVWEKAKDXRNWBSVQFPFEOWGOEQLYSSYVGDPGUWNQHDTMMBZWVEMTTPOGSQZHXFOTARPGIWENFBKCQQJKVPRJYFCTOWNXVCAPRIXAZUDBMQDJYIGQKLLCNUGHLRAZKMLIPXHIASZCGRDZSTYHJRJBYVMCLBNHHRPXVRZXBWDFIDU");
    msg.type = 19U;
    msg.op = 85U;
    msg.group_name.assign("RNPNEFMGHMDCYWTAGUCHPAIGUUQKXPNUFLMWXUKIZEHRKISQUWUWTBJKANSVVJDSGBRTBIBZMPISZDUHJIAVAPSTTEMRQSXEVOGJEVELYVKPYNIOGCPEHCEQFA");
    msg.plan_id.assign("JXSGHXRWKNEISEDCODBVIYKPKVDLBNEPBIXBXBUGPKRYPNWQMOGOLFAJECDHBTQNECXPZYEOGBPVJFMRHJSLRABDSXFLEVYXBTATUFAELZYQSJNMVUCXHQCOPFYFMHVWVNWZYSANSODKSTRDNLKZNQZOPPCSCYGIKIMOFQKTUCVMFAFZJDYZVRRUQWAMQMAXHTEHQLTHZJUOSZPIDTOWMWLLYNGRWGUEJBTWXACHTHCUGIVRIRDM");
    msg.description.assign("NBFKGUKMHUFHDNJWUXIUSJEYAVLDZCROGTZSKHOBABRPOYLQUVNVJFGZNPVXZASQJ");
    msg.reference_frame = 133U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53158U;
    tmp_msg_0.off_x = 0.220445854301;
    tmp_msg_0.off_y = 0.387310166486;
    tmp_msg_0.off_z = 0.357264932322;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.352807598303;
    msg.leader_speed_min = 0.246603557229;
    msg.leader_speed_max = 0.0495973794227;
    msg.leader_alt_min = 0.0062628571109;
    msg.leader_alt_max = 0.21439467657;
    msg.pos_sim_err_lim = 0.393605685176;
    msg.pos_sim_err_wrn = 0.624496847874;
    msg.pos_sim_err_timeout = 25398U;
    msg.converg_max = 0.629369261575;
    msg.converg_timeout = 32916U;
    msg.comms_timeout = 55413U;
    msg.turb_lim = 0.870743941692;
    msg.custom.assign("HNVZVAXVNNMBAQRJHWAXTOPBGWCVCBDXSWRMKFOGITZKPTCTC");

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
    msg.setTimeStamp(0.369120843145);
    msg.setSource(20966U);
    msg.setSourceEntity(178U);
    msg.setDestination(19967U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("KXTSBBSAEORTOBEYFHXQBCVQKSCZLDIQCHKUUFHDAMCYNPYFVNJLXJGNGHIZGKBAFZTNGWOULWLEAXZYTSLVQNECRLSPINERLTQQQIMZUZDROXGJLW");
    msg.type = 163U;
    msg.op = 242U;
    msg.group_name.assign("KORROINGCDBASVDCQFSUJYQVDGLYOKQWVIIHTSXNPSKJEFCPITDMWKREAWTBWOUSOYKFRAPKELMT");
    msg.plan_id.assign("BDGCVXYUZBGVMQRTLAWLLRWLNHDOKTNJIFZLVVFZYXRKZDFTOKVPACNKLOODTCNICELECHZXMQYZPRNAIOMSWJGVKQIGPBXRQDPDYGYUHVHUUNGQNKJGGANGEQOARZUPVDEIDCNHOQABJPOA");
    msg.description.assign("DXENDNROGLGYCPBLJSGDZCSXVNZLPTWEXMMJCQPAOIFRVKYBUMFUKBPHZBJXYWNDUSBBVNOIDOQRLTSNKEWIPYKSLUHWJCJYKKHYQHATKUDHLAFTPAAIRHSVGZFMIVBKTVCZMFOZDZTYNOIQGXFGXLEYVEQHAMUSRVLVPJXNLHBIWCCROZQWJIFMUYXLIDEDHJHCBWCPZTEWKSKN");
    msg.reference_frame = 108U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7295U;
    tmp_msg_0.off_x = 0.286757112129;
    tmp_msg_0.off_y = 0.195057152838;
    tmp_msg_0.off_z = 0.942437450611;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.951151100679;
    msg.leader_speed_min = 0.869828160636;
    msg.leader_speed_max = 0.0101966176629;
    msg.leader_alt_min = 0.0993939088175;
    msg.leader_alt_max = 0.0493161870769;
    msg.pos_sim_err_lim = 0.660273508888;
    msg.pos_sim_err_wrn = 0.667192599791;
    msg.pos_sim_err_timeout = 35876U;
    msg.converg_max = 0.712824706582;
    msg.converg_timeout = 24202U;
    msg.comms_timeout = 50888U;
    msg.turb_lim = 0.598460429903;
    msg.custom.assign("FTOVFVRVHAKNCEGQWXHCIMT");

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
    msg.setTimeStamp(0.0892200381315);
    msg.setSource(7583U);
    msg.setSourceEntity(25U);
    msg.setDestination(448U);
    msg.setDestinationEntity(246U);
    msg.timeout = 1439U;
    msg.lat = 0.0795800960468;
    msg.lon = 0.590332383481;
    msg.z = 0.715332165926;
    msg.z_units = 16U;
    msg.speed = 0.0863140292557;
    msg.speed_units = 30U;
    msg.custom.assign("QRDEFUDULDSZUAVHCJDFXGLNRYQBQXDPKJTCEAHGFKYWUPIRGTFIFCAUJBJMECWYPQWRVIIWQUBZOUEORSDXJKQBVCOGVPHEKOIHHPSOFNNKWMIKETZATFNVMTBMVPTEMMLZBZK");

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
    msg.setTimeStamp(0.102431679066);
    msg.setSource(25004U);
    msg.setSourceEntity(109U);
    msg.setDestination(6091U);
    msg.setDestinationEntity(94U);
    msg.timeout = 58226U;
    msg.lat = 0.715669370412;
    msg.lon = 0.104560123937;
    msg.z = 0.82231189725;
    msg.z_units = 254U;
    msg.speed = 0.866883672445;
    msg.speed_units = 153U;
    msg.custom.assign("OVUSTURLYVSPKVEHNBDBLZMHNQROFDERWUQCXGFXLLPRGFTXRAKAIVXEKLORWEROXOFFXYBXJVQMDCZLNIESWTIZDSFWHGPEQSAOVHFIWAQNWBNPMTDBYZFYJWOKANFPWZJMAUWP");

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
    msg.setTimeStamp(0.891617371191);
    msg.setSource(63750U);
    msg.setSourceEntity(247U);
    msg.setDestination(25823U);
    msg.setDestinationEntity(90U);
    msg.timeout = 10225U;
    msg.lat = 0.361313249942;
    msg.lon = 0.0838405545039;
    msg.z = 0.633885836012;
    msg.z_units = 220U;
    msg.speed = 0.939646262743;
    msg.speed_units = 119U;
    msg.custom.assign("MLPQTHUPTZZERXHARUIVVCQIHWJYNEDBINGQMLJABFUBSEBAJNIMYQOVSZPKVGVSFOWTYLADQAMRJSDKKCUKMCWKKDIOKRABYPROFKGJFRSPZTEDWXXGBFFHJWONSBEPTUUICOCXQUMQYLXKLFVEEFHRAXCINPGXDTJBHONMWGZQYLUWVSJIXCJOPUNRKYABCCAXDZMLTRMDYSTOHGZFJXEZWRLWATP");

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
    msg.setTimeStamp(0.27210396366);
    msg.setSource(23127U);
    msg.setSourceEntity(126U);
    msg.setDestination(12912U);
    msg.setDestinationEntity(204U);
    msg.timeout = 18176U;
    msg.lat = 0.628313651602;
    msg.lon = 0.800540206004;
    msg.z = 0.746962795069;
    msg.z_units = 202U;
    msg.speed = 0.420519286931;
    msg.speed_units = 141U;
    msg.custom.assign("JOUBNDUASSARQUZKIYGTNPXEUKIPNEWXSWJKINUZJROXCZRIPTHPBDKBQQCGEVZWHEMVLHLBYTBSTAZSNQEMGLVTXJFPVNFVMOJAJECAHJKKFSBUYPYKEKAXWHHPFDYGPQLYAMUB");

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
    msg.setTimeStamp(0.53844474743);
    msg.setSource(22907U);
    msg.setSourceEntity(173U);
    msg.setDestination(43045U);
    msg.setDestinationEntity(253U);
    msg.timeout = 8561U;
    msg.lat = 0.0684943357396;
    msg.lon = 0.0393794690921;
    msg.z = 0.620352196087;
    msg.z_units = 50U;
    msg.speed = 0.409428797127;
    msg.speed_units = 56U;
    msg.custom.assign("ZGFHKCUGRYNUWIORPOUNINFUGBMYLWIWAPUIHLHDRSUMTZOBYYHNAVLEBXJTMTJWPENLPGDGNCIGUFAHKSYXFIYXATQCMXQWBCUMVHVFOLHIDPVLSLMPCXEMMZXRFTWKFDKK");

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
    msg.setTimeStamp(0.555957836543);
    msg.setSource(9563U);
    msg.setSourceEntity(85U);
    msg.setDestination(44881U);
    msg.setDestinationEntity(18U);
    msg.timeout = 52153U;
    msg.lat = 0.26846499987;
    msg.lon = 0.894911932775;
    msg.z = 0.499603869922;
    msg.z_units = 171U;
    msg.speed = 0.520385016701;
    msg.speed_units = 186U;
    msg.custom.assign("GRMALCLGEEXXXPEHBWLTZBMJHRFPVJYZLEYMPLQYVR");

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
    msg.setTimeStamp(0.45212135343);
    msg.setSource(9557U);
    msg.setSourceEntity(89U);
    msg.setDestination(58030U);
    msg.setDestinationEntity(91U);
    msg.arrival_time = 0.279030696651;
    msg.lat = 0.0414682441305;
    msg.lon = 0.722429613275;
    msg.z = 0.29269338274;
    msg.z_units = 159U;
    msg.travel_z = 0.584291085443;
    msg.travel_z_units = 73U;
    msg.delayed = 13U;

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
    msg.setTimeStamp(0.241771932849);
    msg.setSource(60975U);
    msg.setSourceEntity(95U);
    msg.setDestination(23885U);
    msg.setDestinationEntity(158U);
    msg.arrival_time = 0.398123528596;
    msg.lat = 0.980214154153;
    msg.lon = 0.0967986976839;
    msg.z = 0.707208508937;
    msg.z_units = 91U;
    msg.travel_z = 0.288155980349;
    msg.travel_z_units = 167U;
    msg.delayed = 227U;

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
    msg.setTimeStamp(0.402815086365);
    msg.setSource(60166U);
    msg.setSourceEntity(158U);
    msg.setDestination(15199U);
    msg.setDestinationEntity(245U);
    msg.arrival_time = 0.714458101711;
    msg.lat = 0.316770855966;
    msg.lon = 0.790522206952;
    msg.z = 0.525486632627;
    msg.z_units = 231U;
    msg.travel_z = 0.620193059037;
    msg.travel_z_units = 134U;
    msg.delayed = 83U;

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
    msg.setTimeStamp(0.409503438447);
    msg.setSource(13766U);
    msg.setSourceEntity(25U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.571008120425;
    msg.lon = 0.543450756849;
    msg.z = 0.617083328117;
    msg.z_units = 156U;
    msg.speed = 0.821661661553;
    msg.speed_units = 5U;
    msg.bearing = 0.139725439956;
    msg.cross_angle = 0.979345998363;
    msg.width = 0.10573832244;
    msg.length = 0.0815230615025;
    msg.coff = 175U;
    msg.angaperture = 0.880330320703;
    msg.range = 9110U;
    msg.overlap = 37U;
    msg.flags = 218U;
    msg.custom.assign("KBTHXXVFFVRESCBYHZQEVPVXUMINHFRXPWTCZWAFMCESEXRRZDBZDCFMTWAOSKQDWPNOEGRBAMILWZIDAJDAXDYWRWVYIQLXAVCGLCLIUFGLBBRJSQMTHEJZTQIOPSHSUMEYDNZHKODAKXCYPLMCYWORJEYSUBGSNXTGNPSPSTUGOOFLJIJEVYGLZYMRDPVRBODILTNZKNFOG");

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
    msg.setTimeStamp(0.496937152536);
    msg.setSource(31124U);
    msg.setSourceEntity(76U);
    msg.setDestination(39523U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.665927344192;
    msg.lon = 0.501498074338;
    msg.z = 0.745309529868;
    msg.z_units = 58U;
    msg.speed = 0.57916257965;
    msg.speed_units = 32U;
    msg.bearing = 0.944330220154;
    msg.cross_angle = 0.799918038802;
    msg.width = 0.783030027764;
    msg.length = 0.498352957823;
    msg.coff = 101U;
    msg.angaperture = 0.318176179001;
    msg.range = 8058U;
    msg.overlap = 152U;
    msg.flags = 138U;
    msg.custom.assign("SPOYZGUUCPMJXTEUYHPJEIWUSBBOEBMYJRLIZMFUFLEZFDNUDGGDRCKCFYCJBSQXKGROIREFJDQCLCVCWPFJATQLGMKDHGTFHZGQMONHJEIEUKSHRYIBXMYSVQPLW");

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
    msg.setTimeStamp(0.626700801303);
    msg.setSource(41412U);
    msg.setSourceEntity(233U);
    msg.setDestination(9737U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.957271387541;
    msg.lon = 0.433023852216;
    msg.z = 0.913418560354;
    msg.z_units = 207U;
    msg.speed = 0.292093057696;
    msg.speed_units = 145U;
    msg.bearing = 0.364091342067;
    msg.cross_angle = 0.62232519834;
    msg.width = 0.290520283255;
    msg.length = 0.412985536351;
    msg.coff = 5U;
    msg.angaperture = 0.384872912242;
    msg.range = 4167U;
    msg.overlap = 109U;
    msg.flags = 40U;
    msg.custom.assign("LOCYRUTLIWGQBYBRLILLVNMYNTRWXXLOKAEPZBTDDUTXLANWGCQMFOANXMVEVBHWNQDUWGSKQDGRHMUMWAXZPOMEMPHLFPAZATSCXCIBBCRFEVSXDHJURHTDFJOVJHTMJSPVRZBKZERCUQIWKTYCASSSCIGJQNZYKEOEXHJNOY");

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
    msg.setTimeStamp(0.706713811698);
    msg.setSource(30854U);
    msg.setSourceEntity(186U);
    msg.setDestination(43525U);
    msg.setDestinationEntity(237U);
    msg.timeout = 9513U;
    msg.lat = 0.81900394853;
    msg.lon = 0.951956128434;
    msg.z = 0.448620307192;
    msg.z_units = 27U;
    msg.speed = 0.000502627754675;
    msg.speed_units = 20U;
    msg.syringe0 = 157U;
    msg.syringe1 = 185U;
    msg.syringe2 = 123U;
    msg.custom.assign("LYWIZJWURPHSJDHDTNRRLFZIJYXANDLTVAXCIKPXRFCIITRBSHUQVLTYYHWNJEKIRAQUBCPOYLDUYDZOSLSSUGDTKNMJKSEUOGCZYQVQHMMZXEFYFCTKXFJDRZFJGFX");

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
    msg.setTimeStamp(0.787818745289);
    msg.setSource(46352U);
    msg.setSourceEntity(143U);
    msg.setDestination(36600U);
    msg.setDestinationEntity(37U);
    msg.timeout = 34318U;
    msg.lat = 0.926989099019;
    msg.lon = 0.989207386299;
    msg.z = 0.127297950396;
    msg.z_units = 164U;
    msg.speed = 0.472132323009;
    msg.speed_units = 30U;
    msg.syringe0 = 101U;
    msg.syringe1 = 217U;
    msg.syringe2 = 242U;
    msg.custom.assign("KULOHCUGIGETWBBDHRTYJGOKCVMXLGLWUEUWISXAQNCCPYFNBPVIRJSJBNQHMFMDEZHOHATCNFUEDRTNECXFJLNELDGOFFPMKYWXTXUFVAIQZBVLBGNTWRADEZAHQXFBKSLOCZFYPWDDUYYCVIONMFKNDOPCI");

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
    msg.setTimeStamp(0.788156248703);
    msg.setSource(38018U);
    msg.setSourceEntity(53U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(145U);
    msg.timeout = 11422U;
    msg.lat = 0.552260147645;
    msg.lon = 0.627103934262;
    msg.z = 0.983823582011;
    msg.z_units = 227U;
    msg.speed = 0.513115229762;
    msg.speed_units = 45U;
    msg.syringe0 = 65U;
    msg.syringe1 = 179U;
    msg.syringe2 = 247U;
    msg.custom.assign("DPAAVXWQCYJVOJGEMFHSLHLOZEGNEXQARJMJWPCAWNPQBUEKXYPVQTKPFYKWBUBMHLHANDEOKHM");

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
    msg.setTimeStamp(0.108264267497);
    msg.setSource(38258U);
    msg.setSourceEntity(20U);
    msg.setDestination(14061U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.972932733798);
    msg.setSource(64949U);
    msg.setSourceEntity(47U);
    msg.setDestination(38023U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.896406613686);
    msg.setSource(28128U);
    msg.setSourceEntity(44U);
    msg.setDestination(6095U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.360971171989);
    msg.setSource(23999U);
    msg.setSourceEntity(9U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.6183826551;
    msg.lon = 0.0399156577021;
    msg.z = 0.939610409492;
    msg.z_units = 248U;
    msg.speed = 0.115762726481;
    msg.speed_units = 238U;
    msg.takeoff_pitch = 0.828447926609;
    msg.custom.assign("YHMAZDSPHFPEBSRDBTWAJFQGGGPSUMFIILICNEDYWEOTNYFARXKSVIMBVRWAGIPDIZBHMFAQJZLYIBIAZTCPIOLWTABM");

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
    msg.setTimeStamp(0.7501504115);
    msg.setSource(16465U);
    msg.setSourceEntity(131U);
    msg.setDestination(53039U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.983912696396;
    msg.lon = 0.357964339434;
    msg.z = 0.394577054095;
    msg.z_units = 244U;
    msg.speed = 0.0340585498144;
    msg.speed_units = 221U;
    msg.takeoff_pitch = 0.523933802379;
    msg.custom.assign("LRBJVLELDOHITTTXPSUFUDQBMTRARUYIFYSLSFVYEVQXTJNRSENYWAWIYUBZJKGJGOWHAQPHCNSVOEOVISWXKSELBIFHPBWUQWMCMKNJGPOYFZNHVNGQDWQLGHIIVDHRWCZCZMAOIXNKPZVUAOOGZZDLIUCHHPMBLPYTITTDGDDUBRCOKKYUCGNBPSFLEXHXVAECDFJRLBXWXVFCKFRTEGUADACNGKKFPJMZZ");

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
    msg.setTimeStamp(0.554913901988);
    msg.setSource(14912U);
    msg.setSourceEntity(5U);
    msg.setDestination(9238U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.380024353201;
    msg.lon = 0.835428557662;
    msg.z = 0.405648294911;
    msg.z_units = 232U;
    msg.speed = 0.0925841952778;
    msg.speed_units = 67U;
    msg.takeoff_pitch = 0.784336948748;
    msg.custom.assign("LIEBWTHMZCIKXBCPQHOVNNYFDVIRMBZTUKOGOYWPDDDSCYMNSNWPHAZQKRAMIRJCRFQKOFISQOFNZGNAEYPXFXSODSDIRSVGLXGAIGWOPYBZRLWYMTJYFIQSCTXJTOKBRUDVNSHPNCLHFOBLMJVPKBEHBRFKK");

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
    msg.setTimeStamp(0.393563244471);
    msg.setSource(29336U);
    msg.setSourceEntity(63U);
    msg.setDestination(41431U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.77295260782;
    msg.lon = 0.823877290124;
    msg.z = 0.808512270874;
    msg.z_units = 119U;
    msg.speed = 0.501165396873;
    msg.speed_units = 15U;
    msg.abort_z = 0.517761568084;
    msg.bearing = 0.896246744073;
    msg.glide_slope = 152U;
    msg.glide_slope_alt = 0.399981431646;
    msg.custom.assign("WNOHAUHHYFSENGSMWMMVCROOZXUZTTABFWKRLDIPEQYWNQKYHLRCFHPFFUDKLDSIUCKDGLOIWULJNJA");

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
    msg.setTimeStamp(0.132521176819);
    msg.setSource(54717U);
    msg.setSourceEntity(58U);
    msg.setDestination(61755U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.660011291867;
    msg.lon = 0.585611274669;
    msg.z = 0.206179560208;
    msg.z_units = 99U;
    msg.speed = 0.46809056868;
    msg.speed_units = 43U;
    msg.abort_z = 0.293854387307;
    msg.bearing = 0.537399214456;
    msg.glide_slope = 67U;
    msg.glide_slope_alt = 0.986917115471;
    msg.custom.assign("IFUVPZHSHMIVBERKAOSEQYRQBGLIDGWEVDBWCAYDOLGVKCZTSDOBDETQADKFSWJZVPSQCUVZZJVJARZZHZWTBKCPIMCWALEIWNREACRJVBUMMXRKVIIBKHWUCHENHGMTXBJQFJTQLOJGPTSUXLZUSGFYOXOUTFBFNXFJPNSTRRXIMXNZWUNXKFMKLLIGRTHAHNYDPCERYQUPNEHYAAFJPTBMSXOPXOGYQDWCLSNLYDLMY");

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
    msg.setTimeStamp(0.26000693638);
    msg.setSource(45349U);
    msg.setSourceEntity(165U);
    msg.setDestination(61154U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.0858250102308;
    msg.lon = 0.181011361217;
    msg.z = 0.228164952223;
    msg.z_units = 57U;
    msg.speed = 0.936421049183;
    msg.speed_units = 229U;
    msg.abort_z = 0.944385389224;
    msg.bearing = 0.68319026598;
    msg.glide_slope = 32U;
    msg.glide_slope_alt = 0.475400406246;
    msg.custom.assign("FRYNHZUQUDVHKLZAKUGJKUQCYEOQRTFRIPDQBSVLUSKZDBKFCNVDRMFNWFAJHSXNAENSJYEDIJVWAPLMEICPJRFDALRJLQGXMNBKDO");

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
    msg.setTimeStamp(0.8523583434);
    msg.setSource(45431U);
    msg.setSourceEntity(206U);
    msg.setDestination(16591U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.968548332482;
    msg.lon = 0.709759481277;
    msg.speed = 0.481074335973;
    msg.speed_units = 210U;
    msg.limits = 113U;
    msg.max_depth = 0.433408805548;
    msg.min_alt = 0.59977265738;
    msg.time_limit = 0.110473400119;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.482089095489;
    tmp_msg_0.lon = 0.382780020548;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TCZZYLYUYKKWWVSXKQJVLEREGHTBMPRXTJUNLTSLJCUVEOZDQRCUHWWZKDHWLSNQNBMMYANPEMOHIZQBNXRRSYKNEGJQDXLLTIDFTAKDUDGABJGIFQJHCVPKJAXTUGBSTCVAOIDUDRWYPSIVWSMVBOXVRCCCMYHZAGIZEHAIFVGNFKYNZTBDHXMROYWFFEQFNOWJHVOGFQTXPPLWZSJQIJBPOFMELAMKERRGOEMCKS");
    msg.custom.assign("IFLRLVMFFRSYCMDCCLBOWHJGBGRSXLUVURDFHXOUJBIMDTZQWLMENFDGPJPGVSGTRQESEVZBGEQFXHNUNYAVRHPOSEGJQLOYLWKPD");

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
    msg.setTimeStamp(0.550193316305);
    msg.setSource(62971U);
    msg.setSourceEntity(61U);
    msg.setDestination(12887U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.855464523801;
    msg.lon = 0.571514009933;
    msg.speed = 0.42656588806;
    msg.speed_units = 70U;
    msg.limits = 200U;
    msg.max_depth = 0.445001365531;
    msg.min_alt = 0.237535457115;
    msg.time_limit = 0.240840481083;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.711311660069;
    tmp_msg_0.lon = 0.800429965001;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EHRXLWIZYLRFJJJRNYDSTXITHRSLLXVZEPVUOMGFKMSYEPKFSUJIBCFPCCKOEFEJFOQHJAQRPCUJKQAASPTBGPLQYOABADQZJBWXDIAQPNCXUSWHMQAGHATYZGHPDCQBHRXKOTOMVXCGHIIZETWZGKDEYMWFVDTCOFTZRVXCYZLPXOWKKYAREDLDRIQZUN");
    msg.custom.assign("BKTIRCTNZSTQFTUQXEPDGFJVSXWYMBGNHGQCOPHRNBAZALQILQLWNVROPSPRVWXWXNPXIKTQDWMTDQBCZAKIXEUEWJCZDVKQGYDGCOLAFALUZETHUIVSKJBVZHBXIFSOUYFKOILJYYP");

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
    msg.setTimeStamp(0.120766219479);
    msg.setSource(42773U);
    msg.setSourceEntity(91U);
    msg.setDestination(21414U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.73597459163;
    msg.lon = 0.940123725354;
    msg.speed = 0.648058198625;
    msg.speed_units = 195U;
    msg.limits = 132U;
    msg.max_depth = 0.83634851763;
    msg.min_alt = 0.412018812978;
    msg.time_limit = 0.33267254289;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.278670777532;
    tmp_msg_0.lon = 0.363995871331;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("STQIVYBCJOQRWRPLAVPNBOMCPOOXGBJRYFYOLZHPMPBQYGJ");
    msg.custom.assign("UNNAQHJYSKUBWIYTBZFVHWZDLJKAMWIGSZTFM");

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
    msg.setTimeStamp(0.867534953971);
    msg.setSource(45131U);
    msg.setSourceEntity(200U);
    msg.setDestination(2586U);
    msg.setDestinationEntity(126U);
    msg.target.assign("YABDGJMVFKSGRLZYLSCVCPQNOVBMJRXUAHZEQTVYPXSZYUAFCBKRXCRLOANQMSBUQLFMEAGTGQBJXHBRVDZPETHUDFCUKJIGFGPIOSAAUFZYOKHVXORNDANORTFWBJPLBJMQIOMVRCHHERNPAIZNYWNLLCKPWTLTEWHWEHKIIDWHKOUISICWWXTJUPRMUOESYTFVIXMFXHJUSAVCNFLYPXQDKZTDSOPJIBSQDKGMZLDYBNZDYGXGCQGVEQKEW");
    msg.max_speed = 0.458949537737;
    msg.speed_units = 189U;
    msg.lat = 0.0467914219011;
    msg.lon = 0.0361957245367;
    msg.z = 0.873615546114;
    msg.z_units = 62U;
    msg.custom.assign("WXVACKTKXUTHJLAMZECAHSRDOKYGQVTGTYTOHQYIZPESRRTEQKYEPSMKFPPNCSRQC");

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
    msg.setTimeStamp(0.0719591891729);
    msg.setSource(23963U);
    msg.setSourceEntity(87U);
    msg.setDestination(42499U);
    msg.setDestinationEntity(111U);
    msg.target.assign("SNXCXSVYHSDJBSQMWBIHBGIRUGVKYRZMKAGQPTDWDSQFNXUQEXLZAMOGLJFJIQDBVEYRQZYKBYTGPTYJODETCYIFMWPDQGZOQRVKSUHKPUWAC");
    msg.max_speed = 0.5940946535;
    msg.speed_units = 189U;
    msg.lat = 0.246043765933;
    msg.lon = 0.599134793245;
    msg.z = 0.334789283038;
    msg.z_units = 88U;
    msg.custom.assign("GRGVWYDRHSIBNNCSXTLPTPATCTQELPJSUNMNUDMOQYTCBJGMJCPRVUSAIXJTKAIFEYKNKHPRFLWYIWEMLOBAYCYWFJRVXDHSZGUULGQLJLCXQKYBQDZVZUXIODYESHQSEKAGTKSMTFJIOBFGBTLZQAWP");

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
    msg.setTimeStamp(0.587204145755);
    msg.setSource(7331U);
    msg.setSourceEntity(43U);
    msg.setDestination(950U);
    msg.setDestinationEntity(127U);
    msg.target.assign("KBDVNOHWYGNHTYOTSZJFIOWIKXRIUTAFFBANDVNYJTNDGNRGQDNELIZDZYKHQKHPPUKEEYNVLAZHKPIYTOSLLPXJAUTQXERJGEPCDMEWXRKEPMCFDWFMPOBCKTJBRVUQSJAEFURFMCYKOQCIZBHMLQAEXULFGUBCFIMTFUVUSR");
    msg.max_speed = 0.551290174821;
    msg.speed_units = 101U;
    msg.lat = 0.453007443613;
    msg.lon = 0.707083691141;
    msg.z = 0.855238667292;
    msg.z_units = 100U;
    msg.custom.assign("BXJYNQFCQWNIKFMLHWFLZKLJLMEYDGCPUIATHKBJYGTTSTHSJWLAXGUGNCBJPURXWDCAHPLVOADBKGJFVJHTSINEXBUVKHCSZBHEAAUVIRSBETYAJOFFCMGYUGTELTDEIVDMNSTIQWDQXB");

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
    msg.setTimeStamp(0.528969553502);
    msg.setSource(62740U);
    msg.setSourceEntity(7U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(254U);
    msg.timeout = 17746U;
    msg.lat = 0.828310296359;
    msg.lon = 0.519368791803;
    msg.speed = 0.339088076504;
    msg.speed_units = 177U;
    msg.custom.assign("MZGHMGVYPLUWEJZTEGPQMQZPUEORGBRQMTFMEBUMQWVLEIOCZVYLPJIXQGTVCOUCKIDTHARBWONRSZGOIARCHFGHGYDTRSBNFCNRVYFTXXVYBVTJFCEXWPQGNPEQRACAXLWKLLKNWONDHWZ");

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
    msg.setTimeStamp(0.229876046913);
    msg.setSource(17819U);
    msg.setSourceEntity(85U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(0U);
    msg.timeout = 18441U;
    msg.lat = 0.799503092536;
    msg.lon = 0.98851551138;
    msg.speed = 0.580368603956;
    msg.speed_units = 192U;
    msg.custom.assign("KCZISLDPQZWISWWZHIXFTFSVEZTSESQHXKDOPVJZZKMMOBJAAFBNAMGKMTGTCYUNWCRWJHBGHRLUGRYVJTFNVBAVCSOGLUPVQDUYUBKXWUYTBELAPAFQHIOMQQRZRGLUXMSTAOHVZPXWNEECNNGQSSYOABGNTKECZWMGUIFCKDRCRDFOQDQOAPYKNLEIMJKBCXUPWROCNYDFHWXLRVJVPMTOXIELALPUIIL");

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
    msg.setTimeStamp(0.115697230821);
    msg.setSource(15748U);
    msg.setSourceEntity(55U);
    msg.setDestination(17476U);
    msg.setDestinationEntity(55U);
    msg.timeout = 15403U;
    msg.lat = 0.549657898361;
    msg.lon = 0.233616534161;
    msg.speed = 0.94642752379;
    msg.speed_units = 215U;
    msg.custom.assign("DZELPWWTIEPLVCSKUPFKCJYGQNMRAM");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.896752757967);
    msg.setSource(25205U);
    msg.setSourceEntity(211U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(170U);
    msg.op_mode = 117U;
    msg.error_count = 159U;
    msg.error_ents.assign("LSCETMGGYCHKOTTATRRJOMNGPAFCDMNNZAHBHYUZMSEVCNICUZSZBUDDCFLLQDQYSYIYBPLEQRIJHWXSRWULGPSWXFZDSYHYODORFQRFUFNJZAYUOLRCAXMVFDJWGVPMUIOQLQGLJCKFPMVESSKTNZWMMXOC");
    msg.maneuver_type = 108U;
    msg.maneuver_stime = 0.489586332458;
    msg.maneuver_eta = 33128U;
    msg.control_loops = 183066340U;
    msg.flags = 101U;
    msg.last_error.assign("JAIDECZTIV");
    msg.last_error_time = 0.668196876085;

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
    msg.setTimeStamp(0.211676417539);
    msg.setSource(58351U);
    msg.setSourceEntity(115U);
    msg.setDestination(21674U);
    msg.setDestinationEntity(83U);
    msg.op_mode = 58U;
    msg.error_count = 196U;
    msg.error_ents.assign("NPKAZMHDLDWIBBRZTNAPPLZTPNXYHFGV");
    msg.maneuver_type = 25043U;
    msg.maneuver_stime = 0.717531409592;
    msg.maneuver_eta = 40609U;
    msg.control_loops = 572790946U;
    msg.flags = 100U;
    msg.last_error.assign("CDMXQSLFFDWFFWGNIEXWHSYGLQFEJZBULJPPDRXGOYWUPOZKIMOHGKTHLZUDBKESPIOGYBABVTTZOWBAKIARPZYNSUMDEQLONHKGKADXMXZJYUIVEHLJLVCPQUFSBXCSCRHKEVWFAFWKJNNBVRITCEAHMVVLNQCZAGJYPQESVWQFGAYHKHACRSSNZ");
    msg.last_error_time = 0.964346270531;

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
    msg.setTimeStamp(0.153822823995);
    msg.setSource(53494U);
    msg.setSourceEntity(116U);
    msg.setDestination(20568U);
    msg.setDestinationEntity(253U);
    msg.op_mode = 63U;
    msg.error_count = 56U;
    msg.error_ents.assign("SSLTABVVQFHLIRKRXBEHHZBTSVLDQREQJRFJJIGTXLUTNCHCYXMMIVEWWXAANFDNRAFUITLBPOYWAWZFWCYBZNYKJYOPFONMVLPROBSDZGNGKUIOIIUBGRKMFAEHWOXMMKEURGHQS");
    msg.maneuver_type = 39309U;
    msg.maneuver_stime = 0.590311225602;
    msg.maneuver_eta = 24187U;
    msg.control_loops = 4224926030U;
    msg.flags = 122U;
    msg.last_error.assign("UKFOYNHIVARABLSCZVKZBHDKVFOUFYOLRSBSLMCAEGONBDYWBYLHSTEEKQIQXYCPDOHCHDBUUXNNZUXOWTGNZJXSTEBTIVZLVPENPMYOJSNPEYHKMGGDNDFLJFWJCHFKIOQQJGLMITRIPTGRTBIIDSORORCMAVSPEDVXGCJVXA");
    msg.last_error_time = 0.254817772508;

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
    msg.setTimeStamp(0.648254099931);
    msg.setSource(23791U);
    msg.setSourceEntity(173U);
    msg.setDestination(62337U);
    msg.setDestinationEntity(249U);
    msg.type = 182U;
    msg.request_id = 28482U;
    msg.command = 52U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.595028384753;
    tmp_msg_0.lon = 0.463776923911;
    tmp_msg_0.z = 0.799940717299;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.speed = 0.222662289586;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.custom.assign("KZRHKTFPPUFYZIHZUKRTBOVDGHBZTRSDNUXDRHQMORWNQIZFWXJTGLGGYJEMXWSIKPXRICZXCSIAFOWHABWPCQPFFNYOMUMLJBWFJDNEDETHYRPJVAWRATMLDPIUCMOBAKQAKKSALTUTVPMGDPFYTJMWHWMVEWCSQVUBSRCYSAUKECZHVKJGYJNBQVUVOGTIBEQHXSYDORK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7587U;
    msg.info.assign("TGNHXLRFUBAMYRVEQHSYLUPZUNILPTKYXAUTYFGYJZUXMQHFUVSBCHDPALMVJBIVOIBMKXXDROMVDYALEILRKCNGDHHJZTJAOK");

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
    msg.setTimeStamp(0.535531559677);
    msg.setSource(34693U);
    msg.setSourceEntity(146U);
    msg.setDestination(56294U);
    msg.setDestinationEntity(197U);
    msg.type = 21U;
    msg.request_id = 17706U;
    msg.command = 196U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.667325007687;
    tmp_msg_0.lon = 0.591870970419;
    tmp_msg_0.z = 0.238467278728;
    tmp_msg_0.z_units = 130U;
    tmp_msg_0.speed = 0.0980103286632;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.bearing = 0.353501310779;
    tmp_msg_0.cross_angle = 0.541045785912;
    tmp_msg_0.width = 0.974135851592;
    tmp_msg_0.length = 0.469864291873;
    tmp_msg_0.coff = 126U;
    tmp_msg_0.angaperture = 0.0914783695414;
    tmp_msg_0.range = 33211U;
    tmp_msg_0.overlap = 28U;
    tmp_msg_0.flags = 147U;
    tmp_msg_0.custom.assign("VUAHFDNJCUGZBLIWPXKFIHMSEHYXKNBOLYWHMRCCYASKYFDKIAAXNLHIEIRPLPVYIPPXQSDVTDYLDPFVGKEFBWINBROAEGZTNEHTWRA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61261U;
    msg.info.assign("ZCNEHEYGTCUBPFEFRJSA");

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
    msg.setTimeStamp(0.788558705088);
    msg.setSource(4101U);
    msg.setSourceEntity(178U);
    msg.setDestination(24798U);
    msg.setDestinationEntity(29U);
    msg.type = 254U;
    msg.request_id = 30250U;
    msg.command = 126U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("ASXSUBHWPBWNFNJKRMMQRKCBQCLDHDAFRFXROSPPOROMIGOARRGPBECKAQJZAZIZYLJYJPNBSOEXZVNKAKOULWIZOKHLGKVTYJJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41171U;
    msg.info.assign("ONDDNNOFPECAEGBHIJVYECWCHCUIURCWNVWLBZYIXNHQHRGGXXZPYRBICMJPXJIYMLADRGPOBUZWOBLILMRTCQDNDUJMVJBFBWYLEGSTOVSXAZTYUGEQMWXZZDSWNADSUHEJINSZKDFSAVUVVBRKCPEVHJCAUSMQXSPOAPGFKRHPFTLPZMGMQDRTNMTANBXDHCJQIJZFAWOOTTQVVLYMQKBKFEUKEIYOQJKHLRPFSXWKTXRIKUOFGYHTQSZ");

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
    msg.setTimeStamp(0.248577093755);
    msg.setSource(1219U);
    msg.setSourceEntity(193U);
    msg.setDestination(14122U);
    msg.setDestinationEntity(138U);
    msg.command = 9U;
    msg.entities.assign("GSNTCDYDOWLLTNEZKUYJHWHAEEZPPTWDSRRAFJKDHGMWBNYXSHDWKAOBABREESNLUPEHVFJZ");

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
    msg.setTimeStamp(0.71970452796);
    msg.setSource(31112U);
    msg.setSourceEntity(33U);
    msg.setDestination(4119U);
    msg.setDestinationEntity(122U);
    msg.command = 44U;
    msg.entities.assign("NCSZTGHPUVHXTWSYWIDSYCMORWYTSNROLUQLNRBKUYCITZEOORUMLTVEBAVBPNMCWCGKYDPSAMPWHLKAAKMTFEBOPFRKFFAGLYSBIFQIVDGIASGQJQEZXWTCPYADJCSJADQGCLUDEWZLUNVRXVJIZUMYFNJVHPTXYMHBBLXCWNPLNQGJLXX");

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
    msg.setTimeStamp(0.523413022061);
    msg.setSource(43117U);
    msg.setSourceEntity(78U);
    msg.setDestination(28831U);
    msg.setDestinationEntity(130U);
    msg.command = 216U;
    msg.entities.assign("LHDPACWMHAAGDYWFQOEAMGNZRNUHBUBNSDISKVWRERGPVYGKEZPDTLTBYDFGPDYOPAPQVAOHL");

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
    msg.setTimeStamp(0.462863124255);
    msg.setSource(1814U);
    msg.setSourceEntity(208U);
    msg.setDestination(31933U);
    msg.setDestinationEntity(69U);
    msg.mcount = 179U;
    msg.mnames.assign("GGDYQDNAPQMKNYFZRHLWISVIFKENRPQHYOZLOQFMQUVJFHJAZPSIXTDNSLOVHCLFGYDRWFXNM");
    msg.ecount = 115U;
    msg.enames.assign("GRPQVYRZODSUTEJQCJFTOQRLBQSPZXWUQYWIRIZYICPGBBTTEMWDZEQGFFBWSZVRUYFXTZUBEBRJCRWXVPOLCMLVWCEFVOYJGTUIVKALAIXM");
    msg.ccount = 201U;
    msg.cnames.assign("TSOYGJWZHNLYQMCFPLBXBGNDJFEGFPWVIHZTNVODMYTFIXHKIANAVQZIRCZWYPXARPFHCUOKGQXHAQKRDSKEHOLKRYYOGNOFBIMPMEZVXFGPUEWEAVWJIJZTYUWKJYKSYCTPZVQKMMQDXCLASXLCOUBRJTJDCNHLULEEXPRARDWSGNWAPHFTZLJZVCIUKULFBSODCPLSXAWBDGST");
    msg.last_error.assign("PRMVTXTFMVFIJCHQWAGYDLMXEJDCIKPLRPJGKHXGNDZ");
    msg.last_error_time = 0.815509907775;

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
    msg.setTimeStamp(0.377257145789);
    msg.setSource(50333U);
    msg.setSourceEntity(114U);
    msg.setDestination(47595U);
    msg.setDestinationEntity(233U);
    msg.mcount = 75U;
    msg.mnames.assign("NGNOONIZBKSSIIVJFDRCKERAENEUCQVHQLQKNLAAZVMFUMLIKNEGWIRIGWOTYVBMYYJEGADWAXZGEYCLRHPPJPUELYOVTVMUJ");
    msg.ecount = 4U;
    msg.enames.assign("UZFRKRVHHYEQMXWLRXPFRKCWUEBDZYILWFSROIZYSJSZQFHHYALSDTHYOMCNSOECGUTVRGJMPTNBDGKWPMNUQKATQMJLABIGBAICLLINFKJOWDTBUMNZUKLPFVZEGM");
    msg.ccount = 101U;
    msg.cnames.assign("IXWNXMTEOARYXLZUIGIGJYJURSJOKMVTKBAWPYQIOFUJK");
    msg.last_error.assign("LYIEGDUHJCCERNHLMIBBKJNXGDYLGLPQZMEKEVLRKTQHRXEASDRNIRYVHLJTKOHZEC");
    msg.last_error_time = 0.830285719576;

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
    msg.setTimeStamp(0.147632050018);
    msg.setSource(42410U);
    msg.setSourceEntity(69U);
    msg.setDestination(50735U);
    msg.setDestinationEntity(170U);
    msg.mcount = 230U;
    msg.mnames.assign("MLTDQHYKAYBDQMULYGHNFIAGKIYZHPALVPIGFLXBSLCFMAJFORKIOHXQGVZIJEWEXXBEBSKYVDUSNFGHQAUSWMNRKWTECOPNOUPLCETYFIMZCEEBXNEIPZANZRJLHQNNPLWUTXSOCOCXJ");
    msg.ecount = 122U;
    msg.enames.assign("ONQJFZBDTHYIVADLHZWDXTJITBBTLIVYSXVOJ");
    msg.ccount = 99U;
    msg.cnames.assign("DRGTLIWBSTNJMGQMDQDBZQJAJFXBIXMKZLNSHQSRLOIHNYFCLAWUPVEKFPQHTXPJSEMZOYGUVUCZBJZACVXEECAIQQANFSFOBBWBUDEYTFREGTPZJ");
    msg.last_error.assign("NFBQEZHDHVGFHGEOSOIXAXBDTRSBSDWNPJHYQOKMHGZXMULIYBGHJNSSWHWOOMZWZEIJRPCQLNZJRJKPUOXWAISGDYVQWEFICJGRRJAOFHFQHILDQJCMFTKGNWYBSHLQFRXATBDCPUVXPIBWPNDKMWNXSACPZSWGXPPCAEZSDEAZCKKVDQQTLYTTJTJBDYAYEEKFRLVMAMYNYUNZCVLUMULRVEUAEMXOGLCTBX");
    msg.last_error_time = 0.666081679912;

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
    msg.setTimeStamp(0.899974408003);
    msg.setSource(13661U);
    msg.setSourceEntity(5U);
    msg.setDestination(65095U);
    msg.setDestinationEntity(215U);
    msg.mask = 158U;
    msg.max_depth = 0.542101033502;
    msg.min_altitude = 0.325275191671;
    msg.max_altitude = 0.424674749168;
    msg.min_speed = 0.427812816439;
    msg.max_speed = 0.864460908119;
    msg.max_vrate = 0.616240253209;
    msg.lat = 0.0959562707836;
    msg.lon = 0.2983589632;
    msg.orientation = 0.644568283415;
    msg.width = 0.652990555917;
    msg.length = 0.742319085215;

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
    msg.setTimeStamp(0.079989042934);
    msg.setSource(64438U);
    msg.setSourceEntity(2U);
    msg.setDestination(44002U);
    msg.setDestinationEntity(200U);
    msg.mask = 16U;
    msg.max_depth = 0.756249680787;
    msg.min_altitude = 0.558969113305;
    msg.max_altitude = 0.497392551489;
    msg.min_speed = 0.177207847286;
    msg.max_speed = 0.828201189012;
    msg.max_vrate = 0.892807054489;
    msg.lat = 0.428572786569;
    msg.lon = 0.662935996115;
    msg.orientation = 0.879133305508;
    msg.width = 0.867502699649;
    msg.length = 0.371089126608;

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
    msg.setTimeStamp(0.361752276139);
    msg.setSource(22460U);
    msg.setSourceEntity(4U);
    msg.setDestination(29659U);
    msg.setDestinationEntity(82U);
    msg.mask = 178U;
    msg.max_depth = 0.674680094006;
    msg.min_altitude = 0.738557367126;
    msg.max_altitude = 0.844690852005;
    msg.min_speed = 0.252972588443;
    msg.max_speed = 0.547267764248;
    msg.max_vrate = 0.65396031104;
    msg.lat = 0.0888300423093;
    msg.lon = 0.0112845658844;
    msg.orientation = 0.841609371235;
    msg.width = 0.310975654839;
    msg.length = 0.572230551324;

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
    msg.setTimeStamp(0.522559049868);
    msg.setSource(28829U);
    msg.setSourceEntity(94U);
    msg.setDestination(5373U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.198529965167);
    msg.setSource(846U);
    msg.setSourceEntity(122U);
    msg.setDestination(59131U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.929348360485);
    msg.setSource(23565U);
    msg.setSourceEntity(184U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.479790195912);
    msg.setSource(38594U);
    msg.setSourceEntity(101U);
    msg.setDestination(32106U);
    msg.setDestinationEntity(230U);
    msg.duration = 33625U;

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
    msg.setTimeStamp(0.193950919578);
    msg.setSource(38515U);
    msg.setSourceEntity(75U);
    msg.setDestination(10448U);
    msg.setDestinationEntity(75U);
    msg.duration = 13297U;

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
    msg.setTimeStamp(0.491085024086);
    msg.setSource(14580U);
    msg.setSourceEntity(54U);
    msg.setDestination(4173U);
    msg.setDestinationEntity(62U);
    msg.duration = 34482U;

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
    msg.setTimeStamp(0.314535267226);
    msg.setSource(5696U);
    msg.setSourceEntity(171U);
    msg.setDestination(9401U);
    msg.setDestinationEntity(66U);
    msg.enable = 6U;
    msg.mask = 690147109U;
    msg.scope_ref = 3025102458U;

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
    msg.setTimeStamp(0.0848023214298);
    msg.setSource(16117U);
    msg.setSourceEntity(76U);
    msg.setDestination(36419U);
    msg.setDestinationEntity(89U);
    msg.enable = 47U;
    msg.mask = 3691996781U;
    msg.scope_ref = 482142555U;

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
    msg.setTimeStamp(0.657663777889);
    msg.setSource(46975U);
    msg.setSourceEntity(176U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(130U);
    msg.enable = 171U;
    msg.mask = 952876719U;
    msg.scope_ref = 1078611915U;

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
    msg.setTimeStamp(0.992144794892);
    msg.setSource(44021U);
    msg.setSourceEntity(91U);
    msg.setDestination(23852U);
    msg.setDestinationEntity(119U);
    msg.medium = 17U;

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
    msg.setTimeStamp(0.687082753489);
    msg.setSource(56198U);
    msg.setSourceEntity(129U);
    msg.setDestination(27746U);
    msg.setDestinationEntity(1U);
    msg.medium = 174U;

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
    msg.setTimeStamp(0.333033161554);
    msg.setSource(45767U);
    msg.setSourceEntity(183U);
    msg.setDestination(28611U);
    msg.setDestinationEntity(32U);
    msg.medium = 55U;

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
    msg.setTimeStamp(0.157206300133);
    msg.setSource(29020U);
    msg.setSourceEntity(54U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(5U);
    msg.value = 0.813601143035;
    msg.type = 35U;

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
    msg.setTimeStamp(0.461310299257);
    msg.setSource(24385U);
    msg.setSourceEntity(65U);
    msg.setDestination(53452U);
    msg.setDestinationEntity(40U);
    msg.value = 0.700747577851;
    msg.type = 211U;

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
    msg.setTimeStamp(0.786953423702);
    msg.setSource(16467U);
    msg.setSourceEntity(18U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(118U);
    msg.value = 0.356273284445;
    msg.type = 80U;

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
    msg.setTimeStamp(0.8417477263);
    msg.setSource(7680U);
    msg.setSourceEntity(157U);
    msg.setDestination(5572U);
    msg.setDestinationEntity(160U);
    msg.possimerr = 0.00295380868941;
    msg.converg = 0.441442331944;
    msg.turbulence = 0.275091539587;
    msg.possimmon = 77U;
    msg.commmon = 51U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.286145085336);
    msg.setSource(10268U);
    msg.setSourceEntity(140U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(146U);
    msg.possimerr = 0.544853335338;
    msg.converg = 0.972883618975;
    msg.turbulence = 0.154509006048;
    msg.possimmon = 219U;
    msg.commmon = 51U;
    msg.convergmon = 165U;

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
    msg.setTimeStamp(0.628404530452);
    msg.setSource(47784U);
    msg.setSourceEntity(83U);
    msg.setDestination(31067U);
    msg.setDestinationEntity(37U);
    msg.possimerr = 0.493626703542;
    msg.converg = 0.649694538337;
    msg.turbulence = 0.742256415914;
    msg.possimmon = 45U;
    msg.commmon = 237U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.195376176429);
    msg.setSource(63395U);
    msg.setSourceEntity(149U);
    msg.setDestination(21692U);
    msg.setDestinationEntity(127U);
    msg.autonomy = 65U;
    msg.mode.assign("ZTFECPKSIYSCOOLVXAPHWHXEYWDRIFJHDDMREGSWZVJOMSLTOBRNOUNEBYCPFQTJWUPGBMXGWPKNLNUGHKZEHGOULWVCGINSKTMDMRSTWYQZXTJREIQNFMANOXLDUVTMBJYFZYPWSFDMRSBLPGJYBEHBOVCBLXZCBKDCAAKJKUJGOVUNYVIILWNYZQJAWAXEKBVEZHVIMDPXPHRFXILQUQQDQVECSUA");

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
    msg.setTimeStamp(0.0915847348571);
    msg.setSource(38853U);
    msg.setSourceEntity(135U);
    msg.setDestination(19724U);
    msg.setDestinationEntity(227U);
    msg.autonomy = 168U;
    msg.mode.assign("KIMIUFZVGFATEUWJRQKVDFGMNCZPGJETMQTXTFCYSPEWWOIRGLIBMASZGOUPLRXANPWHRMAPXNLJXTKEWBSMDODMRKVQAVKIPZBUYYOVDYIWYKDYBDBELXSTNKYATARQQZDMHQJLHIGGYVBFBVAL");

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
    msg.setTimeStamp(0.698947133133);
    msg.setSource(48517U);
    msg.setSourceEntity(231U);
    msg.setDestination(17185U);
    msg.setDestinationEntity(191U);
    msg.autonomy = 100U;
    msg.mode.assign("VIXEKBOGICHTOQNFTFGTBFGOIJQEAKRIYQXPHNOIUSDLJVTDTLUROWNM");

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
    msg.setTimeStamp(0.1359183679);
    msg.setSource(60714U);
    msg.setSourceEntity(226U);
    msg.setDestination(11957U);
    msg.setDestinationEntity(244U);
    msg.type = 245U;
    msg.op = 216U;
    msg.possimerr = 0.356311814579;
    msg.converg = 0.660084531866;
    msg.turbulence = 0.398121004287;
    msg.possimmon = 127U;
    msg.commmon = 34U;
    msg.convergmon = 38U;

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
    msg.setTimeStamp(0.821299319773);
    msg.setSource(33605U);
    msg.setSourceEntity(107U);
    msg.setDestination(34622U);
    msg.setDestinationEntity(196U);
    msg.type = 118U;
    msg.op = 247U;
    msg.possimerr = 0.69838468668;
    msg.converg = 0.78751467796;
    msg.turbulence = 0.245122369535;
    msg.possimmon = 81U;
    msg.commmon = 235U;
    msg.convergmon = 2U;

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
    msg.setTimeStamp(0.076169776631);
    msg.setSource(21357U);
    msg.setSourceEntity(179U);
    msg.setDestination(400U);
    msg.setDestinationEntity(86U);
    msg.type = 43U;
    msg.op = 123U;
    msg.possimerr = 0.680227521206;
    msg.converg = 0.541651572118;
    msg.turbulence = 0.0870330730207;
    msg.possimmon = 39U;
    msg.commmon = 171U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(1.16976866661e-05);
    msg.setSource(51333U);
    msg.setSourceEntity(85U);
    msg.setDestination(19571U);
    msg.setDestinationEntity(253U);
    msg.op = 90U;
    msg.comm_interface = 214U;
    msg.period = 36060U;
    msg.sys_dst.assign("NVWHECQKIJVGYRINU");

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
    msg.setTimeStamp(0.419220160683);
    msg.setSource(15135U);
    msg.setSourceEntity(145U);
    msg.setDestination(11904U);
    msg.setDestinationEntity(59U);
    msg.op = 250U;
    msg.comm_interface = 228U;
    msg.period = 35550U;
    msg.sys_dst.assign("KYZNCMCGSKVTYBEWGZNOSWEEXYTXBKBFFGZUEQEWDJQWVRKTVMZPILXTOQYLXCGROEUQLVAJNNWSVIRNRZOUDHEBJTYSGPYMHFSQJNWDZIATNCTWWMCLCSKKADFAHLVUUJBMTDRHHRVERDKODTPPASGQYQAGYGGVQUGBJQIOZJCPOPXZKBFWHHNVFLLVJPHSUZCHNSZYHIJFUWOMFXXUMXXTPIAFBIDBAMIOAEPESDACNFKODRPKRILILY");

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
    msg.setTimeStamp(0.966779046219);
    msg.setSource(58469U);
    msg.setSourceEntity(58U);
    msg.setDestination(18492U);
    msg.setDestinationEntity(83U);
    msg.op = 228U;
    msg.comm_interface = 80U;
    msg.period = 5169U;
    msg.sys_dst.assign("YOXHDUOWFXVQBGCMXTPWTSVJHSSARHHQWAVJCBPSGLYUIVNWTNFLTYEWFOVJDRXCCRHFTYELHGGJMLLXKFNPICQGPKKAIHOKEJFUJEXBANIWCQQWSFNNUQVEUAMQARRXBDKDXGRUSYEJGOXKBYTDRYCZDVAZRIJIOVYGPMRKJLLQMRFMAPTTOEHAO");

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
    msg.setTimeStamp(0.226465353449);
    msg.setSource(61033U);
    msg.setSourceEntity(120U);
    msg.setDestination(37805U);
    msg.setDestinationEntity(246U);
    msg.stime = 848598570U;
    msg.latitude = 0.423816061408;
    msg.longitude = 0.706489180289;
    msg.altitude = 60914U;
    msg.depth = 30787U;
    msg.heading = 9684U;
    msg.speed = 15587;
    msg.fuel = 77;
    msg.exec_state = -91;
    msg.plan_checksum = 26163U;

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
    msg.setTimeStamp(0.621289382325);
    msg.setSource(43757U);
    msg.setSourceEntity(1U);
    msg.setDestination(56620U);
    msg.setDestinationEntity(172U);
    msg.stime = 33324328U;
    msg.latitude = 0.148003741173;
    msg.longitude = 0.436044671429;
    msg.altitude = 19897U;
    msg.depth = 23374U;
    msg.heading = 29333U;
    msg.speed = 5817;
    msg.fuel = 115;
    msg.exec_state = -108;
    msg.plan_checksum = 214U;

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
    msg.setTimeStamp(0.629261445013);
    msg.setSource(34362U);
    msg.setSourceEntity(204U);
    msg.setDestination(33629U);
    msg.setDestinationEntity(115U);
    msg.stime = 3726806834U;
    msg.latitude = 0.923460524629;
    msg.longitude = 0.626569437229;
    msg.altitude = 41621U;
    msg.depth = 48983U;
    msg.heading = 49870U;
    msg.speed = 24897;
    msg.fuel = 55;
    msg.exec_state = 81;
    msg.plan_checksum = 54210U;

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
    msg.setTimeStamp(0.47733853814);
    msg.setSource(40018U);
    msg.setSourceEntity(146U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(233U);
    msg.req_id = 21895U;
    msg.comm_mean = 196U;
    msg.destination.assign("CMGLCHVOILBRZDNCZNTXLIQWBK");
    msg.deadline = 0.11241873013;
    msg.data_mode = 73U;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 45U;
    tmp_msg_0.name.assign("VKHQZDGRHIIJLWUKRX");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MWFIQFEOCLPUKEBWZN");
    const char tmp_msg_1[] = {44, -100, -76, -59, 122, -54, -123, 16, 21, 24, -118, 2, -18, -1, -34, 39, 83, -2, -107, 51, 31, 38, -34, 32, 75, 79, -22, 111, -14, -27, -118, -110, 80, 80, -127, 13, -91, 67, -92, 65, 48, 23, 42, -16, -109, 98, -75, -38, -42, 114, 59, -94, -52, -64, -98, 66, -125, 110, -117, -84, 117, -38, -39, -7, -92, -2, 44, -48, 15, 45, -72, -68, -91, 58, 24, -104, 7, 75, -91, 64, -17, 71, -97, 65, -109, -8, -107, -35, -77, -42, -74, 105, 73, 37, 28, 74, 49, 112, 107, 8, -19, -63, -28, 18, -124, 115, -66, 12, 77, 6, 67, 56, 6, 12, -85, -46, -57, 63, -49, -78, 90, -128, -15, -61, 103, 32, -17, -52, 9, -122, -62, -78, -63, -29, -87, -116, -17, -58, -56, -22, -71, 61, 48, -33, 103, 62, 80, -117, -53, 11, 56, -36, 114, -89, -102, -11, -117, 31, -105, -60, -107, 20, -38, -117, 7, 6, 1, -70, -91, 70, -53, 15, 12, 33, 81, 46, -104, -58};
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
    msg.setTimeStamp(0.662863057331);
    msg.setSource(31199U);
    msg.setSourceEntity(119U);
    msg.setDestination(23165U);
    msg.setDestinationEntity(16U);
    msg.req_id = 16754U;
    msg.comm_mean = 132U;
    msg.destination.assign("XLEZOMRVHWSTTNFUMGPJRANXAXHDTWOENODBPVVCVSNJVEKLNXLHKRDSGBWNOYAPLWRTWBMTKVIUZIHUVIIDPUJWJARIBCSIMXZEKTJYONFUGBWPSCLYZLBAQRQEZU");
    msg.deadline = 0.205913965;
    msg.data_mode = 52U;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.683280414113;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RTSJDVLMRZQPQZCAAMPPPKCWARHBSNIPFORUIFJOTRLRBENYUWSQEYVDQIYOWPAZNCWODGRHKVTYAGWXIHMLWZAJGKFGNWMLXKFONTJJ");
    const char tmp_msg_1[] = {53, -119, -69, 100, 18, -70, 119, -17, 18, -99, 15, 18, 77, 11, -78, -45, 60, -44, -15, -29, -88, -60, -26, 78, 29, 87, -39, 116, 31, 34, 8, 124, -42, -83, -77, -108, -12, 11, -30, 45, -122, 116, -75, 118, -85, -23, -76, -49, -93, -83, 51, -4, -28, -93, -118, -110, 113, 55, -116, -116, -128, -53, 21, -119, 53, -37, -25, 126, 121, 107, -67, 55, -89, 53, -45, -111, 51, 86, 41, -118, 2, 15, 36, -56, 108, 57, -7, -14, -5, -40, 32, -84, 39, 75, 47, -97, 50, 58, 64, -79, 12, 67, -81, -64, 59, 53, -64, -107, 116, 87, 47, 81, 16, -65, 120, -82, -65, 24, 1, 112, 17, 123, -117, 43, 60, -31, -31, 62, -61, 33, -68, 32, 30, -39, -40, 116, 111, -52, -13, -121, -128, -98, -18, -98, 107, -113, 11, -76, 34, -56, -1, 108, -56, 21, 5, -89, -13, 62, -126, -66, -61, -113, 60};
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
    msg.setTimeStamp(0.883981271058);
    msg.setSource(40944U);
    msg.setSourceEntity(210U);
    msg.setDestination(15984U);
    msg.setDestinationEntity(140U);
    msg.req_id = 62453U;
    msg.comm_mean = 222U;
    msg.destination.assign("NPGHPCTMHEOFLEBHRXMWEPSYZVWKMGTMSCOZFNEIWTXLJSEXVPMABWUKWWABRNJJFMRJVQXMIQQOEZJJUPTFGAMWVYKQBCNLWGNJHTOQFLEKRUKYBUDYVODVSBGOPRYNXI");
    msg.deadline = 0.586022438357;
    msg.data_mode = 41U;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 188U;
    tmp_msg_0.error_count = 118U;
    tmp_msg_0.error_ents.assign("UAENBOXMTUWWFCOFKFRXJFSQNVPPKXLZXVXWSWBBNDZSIWAYUCSJAYZLVEEMQYDXLGJMJDCAPDTUCOGRQQUWRDFNNMCVVBJEEZAWPLVYQNDQROXLTKBPOUHNTCYJLKYSYNBGEUTZSRGPCHGZGOKBYIDHCZPIKRTTSDEJPLVRBQGOZGWOIIYVPFOMTGREMJNBAIYHFSHHMCUDIKVCERANL");
    tmp_msg_0.maneuver_type = 35807U;
    tmp_msg_0.maneuver_stime = 0.297746084551;
    tmp_msg_0.maneuver_eta = 31424U;
    tmp_msg_0.control_loops = 3557068337U;
    tmp_msg_0.flags = 12U;
    tmp_msg_0.last_error.assign("PBESZEKTOPMDKAMLNFSNUPTHOQOGYCYJUFRYCOBRTESGLXXQIIKRHUBGDUWLIZHYUNNBVPWTUONYWUZNGVEHTMDQARRXVMQLEQKPSZXJYKYJQTWAISKRRGTMMTKIZPJHF");
    tmp_msg_0.last_error_time = 0.551643035557;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OLCKOKTEYRPTVDPMKJWTUUIAQQBELOEVWNRNBCFRZSMKJUDIEDFFJJKPDXWIKSFDRMNSURBBKZFBPDDIFOHGORVKBRUFZJANTTVYQILHRZLLFRNATDPBGYLSXSQRIVKAGGZOYEYABGJFMUQVWJCETHMIALXYSOJCNYMIPTQCVYWDOOSEWXAAXXUCUFZNZTYXJBHWPXVUOMLQXJPQPXGQIECVSHDMZVSHYSGMCILNCWBGUNLAZHMKCQAGGZH");
    const char tmp_msg_1[] = {101, 25, 89, 11, 16, 32, 36, -52, -104, -1, -100, 34, -99, 86, -50, 123, 66, -70, -3, -68, 4, 109, -96, -98, -99, -99, 9, 104, 26, 42, 83, -42, -56, 120, 45, 28, -75, 52, 13, 49, -68, 68, -8, 126, 38, -44, -1, 99, 14, 116, 12, -72, 12, -76, 95, 110, 107, 22, 106, -58, 54, 67, 63, 57, -12, 79, 38, -7, -6, -99, 107, -27, -66, -1, -127, 39, 69, -95, 69, -106, 66, -116, -115, 40, -60, -112, -122, -32, -124, 103, -116, -76, 101, -82, -27, -51, -127, -64, -32, 70, 52, 50, 46, 119, 30, 40, 52, -18, -86, 11, 69, -79, -3, -45, 60, 105, -31, 73, -11, -20, 75, -83, -6, 112, -81, 56, 114, -48, -59, -81, -56, -107, -121, -98, 112, -16, 30, -10, -106, -121};
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
    msg.setTimeStamp(0.299731020106);
    msg.setSource(43454U);
    msg.setSourceEntity(45U);
    msg.setDestination(52465U);
    msg.setDestinationEntity(176U);
    msg.req_id = 24823U;
    msg.status = 91U;
    msg.info.assign("XVFWBLGZOKNYQYGBWRFTRULE");

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
    msg.setTimeStamp(0.0172792215709);
    msg.setSource(15309U);
    msg.setSourceEntity(199U);
    msg.setDestination(41741U);
    msg.setDestinationEntity(181U);
    msg.req_id = 46633U;
    msg.status = 104U;
    msg.info.assign("GWBRUCNLGMDFZWCKMLGUPN");

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
    msg.setTimeStamp(0.585486477038);
    msg.setSource(31671U);
    msg.setSourceEntity(246U);
    msg.setDestination(53269U);
    msg.setDestinationEntity(174U);
    msg.req_id = 26723U;
    msg.status = 22U;
    msg.info.assign("IOVDBJTAQSKSCZFQLFHUKZYBFCWPWTGBYPROGATAHSIHRYDPDZYLZFNCZPOTGJLHO");

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
    msg.setTimeStamp(0.677513848398);
    msg.setSource(55834U);
    msg.setSourceEntity(128U);
    msg.setDestination(56510U);
    msg.setDestinationEntity(95U);
    msg.req_id = 32940U;
    msg.destination.assign("LPOQBSSZPEDUUANDKWSSPVRBTEXFWFIFRWOQCYZZSHFHRMYCKIKRBREKIJCLSETLYMHDEXLNJXDSXYRGDKPZMUQTUVCQMFGCCFOJGQXVBEUJRJOJGTTNYYLAAHPNPXOFSBORSUZMTFGWYHIZPCNCQQBKKYZXIBUWWOAPRJVOCPFOTCXHZNAGHUDEVMRNHAIVKUSDVNTOWHNLPY");
    msg.timeout = 0.255834039947;
    msg.sms_text.assign("FPEDSQXCCOWGFOITEZXNGFNZAWWTSPMMUMDAZWLUXTQTKHLIYOXPYZMEYLOOURAJARXHEJOQLKOIRRIVUMHXDZYIMDVKCRWCKDPNPUGBSVBBZHXFDMRTQWYGALKJPDSZLBWYNOMTBOJAEXREJTKNUNLQVMSGFVSLYBTCKJSHWTWKBPIBUJELBNSQGMPHVDHYFJPVFFCCXNVUEDKOGEATGZVXAAHFIHBQGSC");

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
    msg.setTimeStamp(0.195692002071);
    msg.setSource(7233U);
    msg.setSourceEntity(166U);
    msg.setDestination(18502U);
    msg.setDestinationEntity(243U);
    msg.req_id = 55957U;
    msg.destination.assign("HBDWYEMHTQPXFKVRCECUHEDSZUYOON");
    msg.timeout = 0.0711168230146;
    msg.sms_text.assign("ARBQXITFCGZXNAINGZUNRQHRNYLWJDADCBLFXQGDMPEMVTYDGFWIXLPSIKWBUZAEBKTHZNQNECTOXYBOOKJHNKRBGTVJNGYKHFVPFLVJJEGXTMORCLMUBBYHFWGIOEKYDBUCZHRPDUPRCOWCAGQGFQZUPMSAHPSHUJWICXELNVAYZIWRQEDWSLSCMUJYMUABPSYSOLXSDFXRLIQTKJHMVFFYTJEWZJEPZWZKUSQSARVOLVP");

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
    msg.setTimeStamp(0.727504141552);
    msg.setSource(34218U);
    msg.setSourceEntity(14U);
    msg.setDestination(50202U);
    msg.setDestinationEntity(10U);
    msg.req_id = 53607U;
    msg.destination.assign("EIBQLAXLJQYPTLYDYBXLDIPBDNDNPTHHEHLOZDDDVQZKQLLPPQRKFMBAGERITJPIOMJFWSCWBKGCXGLEMVOSCHNORICWOIRZZWEAMAOZETKBBXSMYQMYQAYXPWKQJNAVBDFOEGCWMOJJESNGSNHUZKCBGLDJIESHFTYUCDSFPVVVTIYZARUXVWQHMXUXRJNNESFKIG");
    msg.timeout = 0.255417526899;
    msg.sms_text.assign("ZKIFQCCUSOUWHXLSMUREUWMHZQAYUGEINVALREHQZWJLPDPFSGNNJIAKKZHHBCPUSMEFAXCBBYEVSCVVBJFZKTOZYMIOXRJJIIEBXCW");

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
    msg.setTimeStamp(0.271746227841);
    msg.setSource(56639U);
    msg.setSourceEntity(218U);
    msg.setDestination(1360U);
    msg.setDestinationEntity(75U);
    msg.req_id = 30150U;
    msg.status = 123U;
    msg.info.assign("QFRRGKVQYUCIJYYVGAEFVJSCHNVPYXYOKEAVIATEMKZNLDHIIOFJNZIMWKGVMNWPTDPYWQIBINVHEEKFB");

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
    msg.setTimeStamp(0.743984935924);
    msg.setSource(50185U);
    msg.setSourceEntity(14U);
    msg.setDestination(24185U);
    msg.setDestinationEntity(160U);
    msg.req_id = 62382U;
    msg.status = 132U;
    msg.info.assign("AQMQUIMAPGOZIBIVVVCSWNQBTVXWAVRTFPCQXXNLOGHRRLHXGHRNYDVWEEJDTKPKDZMTYASEIVFLKMQLGSARCXTASOZQJRWKRAUJLDJEXSKKFZBDDQOBJZHXDVRXUPYMJSFGEZGBSMYWTBWOUTYUVYUQBKULKEJAFHLQTCGJZCDOFYTAQWPOPBDOSTNMMSSLNHFRKYJPKJNCGIMXEINFIBEZWVLZNIURCGIUIPFPGOECH");

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
    msg.setTimeStamp(0.96301458919);
    msg.setSource(19726U);
    msg.setSourceEntity(124U);
    msg.setDestination(30491U);
    msg.setDestinationEntity(31U);
    msg.req_id = 35116U;
    msg.status = 75U;
    msg.info.assign("CDBJHPZBJAXOIOLXFAGBYCMCLIZLKLUFDDPRKYKUSBMYACTDSJFSGHQGQKCSMSBRPZWBPIREXMVVLFZFORUZNACVXLGOVJFVGYMSXFIZKTRDLIGAJGYBOPNDWCENNMEGSNQHZQBCFNCSDIAIQHDNJXUYJOZWQUVEJOSBPVLMWYNWKOYRQHNWUAJHNXRPDITTQUHZQVGEXIAYLHBKAUKX");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.0132306172343);
    msg.setSource(21753U);
    msg.setSourceEntity(246U);
    msg.setDestination(13500U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.0576818553064);
    msg.setSource(57876U);
    msg.setSourceEntity(25U);
    msg.setDestination(33021U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.868444722496);
    msg.setSource(64060U);
    msg.setSourceEntity(107U);
    msg.setDestination(20222U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.886361549977);
    msg.setSource(45589U);
    msg.setSourceEntity(135U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("SPJHPNJOXOENXUOSQNINIURBFEZCMYSEUIRIRYCZDEEVJKSJRZYAGFGYL");
    msg.description.assign("BRITTOEHQIBCKTUKALGCYSWPEZWEUPNDGDSWUVOJEZOQQZJCTXPZVIRPVMHNXKDUGADFRNFKLKSXSDDZRVTPFBOEOZKHB");
    msg.vnamespace.assign("MXBHDPVMKU");
    msg.start_man_id.assign("GORAMLRPDGUHUBFHWMAEEWCCYEWFPJVSNLYHJXALTMNIPYNF");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XSBIPQUIGJUOLKOVYMQFSTNZJK");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 26381U;
    tmp_tmp_msg_0_0.control_ent = 78U;
    tmp_tmp_msg_0_0.timeout = 0.455760284622;
    tmp_tmp_msg_0_0.loiter_radius = 0.544155435928;
    tmp_tmp_msg_0_0.altitude_interval = 0.986117377327;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DynamicsSimParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 56U;
    tmp_tmp_msg_0_1.tas2acc_pgain = 0.254161802286;
    tmp_tmp_msg_0_1.bank2p_pgain = 0.15211041086;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.10690018415;
    tmp_tmp_msg_0_2.speed_units = 195U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YSXHIGGOKTPSTZAPDXLFZGQLIJPHMUIBOZNUFQVLWSMCELMGIMEUROEOXBYEDBWQ");
    tmp_msg_1.dest_man.assign("VRTKSXHMUNPAMWMDPTOSLGJBHRQQENELFIUJYVWPHTKOMGRBTSNRCOMRULRMWZMDZVAC");
    tmp_msg_1.conditions.assign("AYRENWNWROKYLOSSHCPJSQCSTPOEHHKQXHNDWVKYJEAHZOLVRSUOQQNSRAEOLTQXDXZCCIKIPFLXGDLLJFGWCHFXTBTDBGHLBVNBJJSUEQKOIYNIJZZGUXUINLUIZKEQBGNMGRNVEZYVFBKIZHDPMJKVPEMUBAIKAWTMBWXZUMLQTJNPJDYJPTFMYRFGFUYRWVHREACLBIMVGECQXGDX");
    msg.transitions.push_back(tmp_msg_1);
    IMC::SetThrusterActuation tmp_msg_2;
    tmp_msg_2.id = 126U;
    tmp_msg_2.value = 0.0467437041668;
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
    msg.setTimeStamp(0.954616054981);
    msg.setSource(316U);
    msg.setSourceEntity(99U);
    msg.setDestination(38662U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("CDSDODHYKSOATWQHVNRFBNFCLUTGQOLSLIZPAJTHOYAGJGBRJEZUAPINXQTXWYHSFEEKKYMRIAEXUBUEDRLQOITKIPDUOJDNCPFWCCMTGXZHNHOQDGMRVQTHICXHUPMKETHIKASY");
    msg.description.assign("EZBWGWSNCOLNMXPYGSCPRFKZJGFQKHNXIUOVTHUHCHH");
    msg.vnamespace.assign("BCEUXNXTUKZHJSQDJGDEKLLLTRKDHOXRFCNWOIRDZGKVKFXGVECMQBYSYGQTZOGHWHRDTPGTDNJYJGICNXYWIEUOWMZPAIABMKPSTYEEVBFBDPQFUCUPLMRHAHLWLDNQQWVFBMACESYAGRVKLQWADAXXSLRDOVZSIOFJUGBIZVN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JCCNZSHUPOPEWMFDFWWLGCHXHVZSUMPCWOLVPXJGPPMXQURZGABTCGNKIFQDRYRMDNBZMBPZKKLAHANHTEJYLFHDHKVBKOLWJAIW");
    tmp_msg_0.value.assign("XMSKLDAFAFPJNZKDSXGSYXJFXYAEZILPJRZGEONTZSQCCJUWTPMWDUGLHRCTIGGMFCVKEARWVDJVSRYOTINCLMUFVTFKHQIUVNNYIQXWOLDNJNHGWLHKUQTBBBPZVXWYMGSKAPODOORYNOWMZQRHWBIAZBEGLPVUIFYXMIKCXDJCHBWETTKQBOUHXMREZIPBGVKCYQSSQEQZVWYPPEBJLSBRORLAEYACHNHUFJJQOALDMMGHFU");
    tmp_msg_0.type = 49U;
    tmp_msg_0.access = 144U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ONITCNYYVFFNHTPDEXPQPSIQOJRFYDDFDDL");
    IMC::TransportBindings tmp_msg_1;
    tmp_msg_1.consumer.assign("QXGNSITVITWTNIOVDAAWQOGPHWOJHMUITNOWYVAQDZNTSXJBRUYJZCYYHXSRHQGKSFWPWCNERBLXUKTBQJXKNSFGGXOXURZCSETUEPUVYLHAJMLRBFIIFLZLKECQABQJVJRGYKRDTLQZCLIG");
    tmp_msg_1.message_id = 23792U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SetImageCoords tmp_msg_2;
    tmp_msg_2.camid = 231U;
    tmp_msg_2.x = 45165U;
    tmp_msg_2.y = 35894U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.212180578525);
    msg.setSource(60030U);
    msg.setSourceEntity(168U);
    msg.setDestination(55723U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("MTBJELMHCZUMPFDZXWHJBIAFXTNTQELEXSDQQVTFMTUKJLKVAVNYPEMJIXQBVOHUXVNHRKQSNXHJJNKCGYKHJSQKSGZSAVGMTGSQIVBALRRCFAOPKALBTHYRXIZPOAWYMBWRWYMWNLAFDUUBRUDTGEGWVZEESYZLQIDKCNCEOIXLJCCIUHGFRPSUIBDOGHRCJRDQNFECYZOJPWAFYZ");
    msg.description.assign("AVUBEXMPDKQGZVESPBKJVCOCVIDMIMMOCTGQHULNYPPWKFXUSOXFMBUZDEHIHEAYAGYHQGKNYOFIZCHBMPISSTJDSROGXALQRXZTRILZBQFNPVOUHWRJXKFIEFONIMMSUU");
    msg.vnamespace.assign("ITYRYBWWVHCXRESENRPGQMFVNEBKDJVEKDHRNWJVYQJITZZOAGJOQTRRCFHEGXHOYADJNZFIPUOWOZUQAMQCZBPGLYPBFXLTFNEJMKUSKACXIUVWJVLXXSPMBDRWGCSAANUKUVVNZEDLMMSEADDZMTMOWBAOLXRUIQOHJVXPFHSCPBGRQBQSGGMJSLFCIPEPLLIEOAHKYZDWUFTMIFRJWNDNOXNBKQSCYTHXSKIVTYDZACH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CPDCSRDOKAYMYGTYSAXXJOTCPXKHHMQAJBUCJDJMSRPVWZLMDSQPVYTOFQHIEUPZTNTTKMCSFIYAWFHHWYPZBTVZBWYVGSEGGCFNBEKWEOIGRHSEHCOXABUSFDSOZRXKVNEILRDOZMWPGCBXAXEUD");
    tmp_msg_0.value.assign("HYRLAGIULXCPVIOBOPZLLZECLGCZCUXCNAYTPYBAHOMQQPFUZRFSKGUMEMKSWFQXKVDDNTTUHXRYNALUPOPYVSYSAKBAFLTNEHMDKNZRWTWXIZQEFNDIXHIGOJSGVUJALK");
    tmp_msg_0.type = 147U;
    tmp_msg_0.access = 199U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NCWHSQFTRLILEZZJEPTWZQYRFIEBDBBQYYGDKBWXXEJRNLIVHGSEIZVSPGWZFDMHUKRRPVSGFCRMLSGWLUAPVLJCSJWVNIBBYLSYDFXVNODKTTUZCCAQPFTEXLDEKUJONQUMMDNTFPWYTQYGAGDAOMKZKCNZQGVQOFHSATG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("SXAYALROADTVPCFTICFXMGBYILWVGXSGEQTMXRPQB");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 60906U;
    tmp_tmp_msg_1_0.lat = 0.741096920956;
    tmp_tmp_msg_1_0.lon = 0.412044746216;
    tmp_tmp_msg_1_0.z = 0.933301092253;
    tmp_tmp_msg_1_0.z_units = 173U;
    tmp_tmp_msg_1_0.amplitude = 0.345659866183;
    tmp_tmp_msg_1_0.pitch = 0.555611642087;
    tmp_tmp_msg_1_0.speed = 0.547001029465;
    tmp_tmp_msg_1_0.speed_units = 186U;
    tmp_tmp_msg_1_0.custom.assign("DRLBYIGNQQJZYQNSBSGYAHULGRQMTXBXFNMRRYLSKPRTQKYCUHHAITCJJHYYKMSQVXHWUUFJUDTMBPDPLCMZFCWOWOPFJBCURYZAFLXFUKSPBMVSK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::HistoricTelemetry tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.altitude = 0.12183762388;
    tmp_tmp_msg_1_1.roll = 11228U;
    tmp_tmp_msg_1_1.pitch = 36940U;
    tmp_tmp_msg_1_1.yaw = 57191U;
    tmp_tmp_msg_1_1.speed = -12924;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("FTFXRRYNSRYSJOEFWOWTPNPVFVAILHGXPDKNKNXFOYSUMLIRGQGRSDCNGWAEBBSDPNAXWROPMTVXUSDEVBTFLIJDXTBNJBVQOPIEAOBYZZVECPNUHGZVHDWCBYQITLCIMGPDLHHVJHUYWSYCZEMCFWYCMTBDJLLHJPEGFAASKUBXVAJOXHWBGMMZMNRQYAZDIMTJQEOOLWYVHUSFKAZRROMIQGCQLCILGTKAUKDNQ");
    tmp_msg_2.dest_man.assign("EIQJNLDJHTMBVKFPNRRXCKALQZSGHBZZYXWBEYPSUNTTBQMHTVAFLFKBCPKLEMOUMSCDNLXJSFMYWXQLWLIDNUXHLIGIJWIGMAOAOSIHVDJIQGNAIZR");
    tmp_msg_2.conditions.assign("JUPZTLFHJVQKROHQIYNKLWBBFIURBAWNRXOLUWSBEXQXUFAVRABBFJVSXUKYKIRXWMSPKWJMETAJTFHLACNEGUCGIOURUVMXLFOEQFNTVIZADQCWGDIRLFDFZSYHKZCYJYDGGMVETINBBNTNJAKMQBJSQAGPRNGWXYZGAWVLDIGGESJHHOMYTOESOFDZWCCKTPEPWYQSDCSSMPCMQZTP");
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
    msg.setTimeStamp(0.385370352223);
    msg.setSource(28285U);
    msg.setSourceEntity(202U);
    msg.setDestination(48916U);
    msg.setDestinationEntity(38U);
    msg.maneuver_id.assign("IEXCHBTHSIXISEOSVHZKBKKCJJMCZNOADUTPRPTFGYWILYBLEPWJLGNLDWGUFLFCCWKENWWPREUXAGYBRKQMXAQMNYVQAWENLDHTXFZHGKQVFGUMBMZFCCORIURBYBOJ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.279012373866;
    tmp_msg_0.lon = 0.21193078507;
    tmp_msg_0.z = 0.727517158734;
    tmp_msg_0.z_units = 109U;
    tmp_msg_0.speed = 0.335914721283;
    tmp_msg_0.speed_units = 137U;
    tmp_msg_0.custom.assign("ELZFYLDTDWITBSCKYVWPRPNSZSAIBGTVGAXNLDXROIJTAONBQYDUMSUEENXISMXHWWJCRQMFQZWWLBCTFQHYAXJCNZMAOGULVLIQISLHMSKNOUANWGVTVRDSXCQJLTBYWJGKQQULJCHGXPHKKPQSRTJVAHOJEPXPCFZRZDZXBOKHJRVNHMYQPJUAYVFGHMFELIGRIEABKIZOPEBDZEIKYHKUG");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("AFBZVVOKGWKMPKLWEZOXIGQEBXOOVRNGUGURPERTLXQHEXBHMMJTZTGIQDYFYBKMPNCIBRENRCFDBTIOQUXCUGBECAACFPWXJODWCXQJST");
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
    msg.setTimeStamp(0.0751200407164);
    msg.setSource(45220U);
    msg.setSourceEntity(51U);
    msg.setDestination(249U);
    msg.setDestinationEntity(78U);
    msg.maneuver_id.assign("OQDBYITRPXWWOIBJJAWGOHOAVOHNLEUUFKUYEIIVJGAXHCPGPCXHXLSBPPRLJRHFWZJBYNJZVFSBYMTPZCPCLMTSCNJDKXHWIPOMGJWBTMQAMGTKBZUEAEEQMMSENRCHQRUSIDUAYTTOARW");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 46428U;
    tmp_msg_0.lat = 0.25975781375;
    tmp_msg_0.lon = 0.623335285494;
    tmp_msg_0.z = 0.567967442668;
    tmp_msg_0.z_units = 221U;
    tmp_msg_0.pitch = 0.351911761499;
    tmp_msg_0.amplitude = 0.535972249118;
    tmp_msg_0.duration = 11922U;
    tmp_msg_0.speed = 0.70348628942;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.radius = 0.142301624315;
    tmp_msg_0.direction = 196U;
    tmp_msg_0.custom.assign("QQICREZCSRVQBU");
    msg.data.set(tmp_msg_0);
    IMC::WaterVelocity tmp_msg_1;
    tmp_msg_1.validity = 110U;
    tmp_msg_1.x = 0.291892004788;
    tmp_msg_1.y = 0.303147704315;
    tmp_msg_1.z = 0.00111029345359;
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
    msg.setTimeStamp(0.0280348097259);
    msg.setSource(56887U);
    msg.setSourceEntity(48U);
    msg.setDestination(3061U);
    msg.setDestinationEntity(239U);
    msg.maneuver_id.assign("POLMHIHWWWYFOSQZV");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.149134896278;
    tmp_msg_0.lon = 0.849377626811;
    tmp_msg_0.speed = 0.854068293314;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.duration = 16188U;
    tmp_msg_0.sys_a = 13172U;
    tmp_msg_0.sys_b = 48441U;
    tmp_msg_0.move_threshold = 0.459567961555;
    msg.data.set(tmp_msg_0);
    IMC::LblRangeAcceptance tmp_msg_1;
    tmp_msg_1.id = 149U;
    tmp_msg_1.range = 0.519077638661;
    tmp_msg_1.acceptance = 121U;
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
    msg.setTimeStamp(0.863333885799);
    msg.setSource(12332U);
    msg.setSourceEntity(154U);
    msg.setDestination(22298U);
    msg.setDestinationEntity(134U);
    msg.source_man.assign("VHUYKNLZRPWPEZFCFCENPCQHHIEYCZFZSQWXLYJJUELRKKGPOBWPMESJZCQXMDLAVVNZLZILKXUYDSYITFXMXYCPWMAQDEBOQHDEQRVGILFVKMRAOJVGHQTIBBTJESBSURRYPFNROWRGUXFEMCODUNTFTWOBXDKKXMHOGUWWSFUAKJIPFARUZVNLCASYOCVDACTSBZBINIGKJJGBJLPDQTXJVHDNKYQRYSOWTUABTHGSXLVZGWGPIMD");
    msg.dest_man.assign("PEZAWNBNDXLFWQRCXZUKHTVKPDHCPJSBAIETFHOSQSHOERMDFUGA");
    msg.conditions.assign("IAAPQBJHONUBWGMTRJWXEFRDTYSFJIKOPZKKKTBFEUTMTZSAJKEZBEFPUFNMZVUNUBAKDIOYQMBVXXDLCSTWTRXWGACKRQNVWRXPQOPUCQUZHFYNOLWLGMNOHOLHRDYALXBFXNNPHZCZQLOBJSBEMVIEXEXQLPJLGGQJCIESWGKVPHYQIKJY");

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
    msg.setTimeStamp(0.129186041852);
    msg.setSource(22573U);
    msg.setSourceEntity(179U);
    msg.setDestination(7916U);
    msg.setDestinationEntity(38U);
    msg.source_man.assign("KLEGBXEMUMYJTUOETVQYNQKFGDPLYGBAMXKZXYEVGFSWFRNBANDBLCAZVXHYXJWSZEWJRXBKXVXDXOUGAZLUFISDSENQNRHXZOPPLGRIPYSTVJDDAGZCJUMBQTJIUIYTIMRWLCRHSFBQSVDWFEUWKAHBIDIBRVVZCSNPEDKNGAMWTHHNEPLLSKQGTLJENCCPCWJHPDOOTOINKOZCHPAOMJFQCAGIT");
    msg.dest_man.assign("PPMMATOTQUHPBZKJCBKNMPPKWNHGVYLKMYQDEUONBHGLTIAJQFGJWYDMGRVXOAMXEGAJOWSQSLXHFIEGRZEBDOTFGHUNWMUIYEOBCVXKUKSLTXIBDHZYNXNCVHPXDCYACCRFQJBUIQXUPDXYPZKZFIGIRCKDQTHMFZSJCWJJHZMBRWANSESLEPIHAQNCQFPUKNVFSLVIDRYTIDZASRLGLOEVAREZUWWWFZOJG");
    msg.conditions.assign("EHQHSJLRDVEHBODKLCNSZSWVUDPCAGSTMOBKMNTSQUSPDCXHMPGAGOQZQQOAIYQBRN");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 51U;
    tmp_msg_0.zoom = 2U;
    tmp_msg_0.action = 210U;
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
    msg.setTimeStamp(0.621349029681);
    msg.setSource(29945U);
    msg.setSourceEntity(50U);
    msg.setDestination(34605U);
    msg.setDestinationEntity(140U);
    msg.source_man.assign("WVGSHQROOVPPSLPVVUMGAJDALFTYXSKRDWLMCNYLJWZEQXFPTLGBATHIROMXPKFFZZURETVIUREZTCBDTRYSVZPRKWSVAXQMNGMCDARHUKBMYJCBTKNDFJRYJZQBPHXLCJCOWWPBNUZFWBFPAXOHTSAGDTAXHXLUJXNWEUYJOCXEEFAOHPSQDSAIBNMUUEZDC");
    msg.dest_man.assign("YKHPTDCNQJFAZBKAPTHYEFZMNAYPVYRWMIJUHDJBUHGSULBXRSTTYYWARGWAZBIXTJVWEUELOX");
    msg.conditions.assign("LOSZTNXRHAMHFXOJNBYOKSQTNCPCHYWAIZYGRJRDODEEDPLXFIWMREONKGMDUJJQXISODYEVGFKIWVWBCJEUVESKQPAAFPQICJNVPMUXLTZQTEFKTOSSGCTBVUSUKQJFFZWGZDYATSLKILNPOHPCHXVGZBDGNRTCUIKOLXUAZNMQDENZGFYSHZCMLMYBITMVHQVXG");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.0192021135199;
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
    msg.setTimeStamp(0.364028560964);
    msg.setSource(25142U);
    msg.setSourceEntity(199U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(111U);
    msg.command = 164U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IHDDDUSJHYVA");
    tmp_msg_0.description.assign("GYMNJVCTNMJEVZBQEHUXDEEIYJLQQSUIRZXDSOKTMLRQKCIQGWFBZPLDTHUNAJDVUSOUMFJHJRVUGFBAUVPODAWLKCLXHLZIPDRMNIWYAKWFOAILMIGXRLHYXCRBWQKZXAZZAHVNQDEUJTGDSWDSYCKUZTHPBDGXPCNWYMPJFOKECBIOXCNMLOWGOIMRSRZPKEJMHTNSHEPNNAUBGYTSPTYBIBJFGCQGZAWECVXVOYXVSKTFEWF");
    tmp_msg_0.vnamespace.assign("ZSSEZWMNWPHNWQSTANITNMLYCYMBXOAHDEGFZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QJSKYUXJQKPFGGUGBEEFRVPMGP");
    tmp_tmp_msg_0_0.value.assign("XPNWBUIJGWRDNYRTSWXOAIXOJKGCQPHKLZAGWHNYQXMHUIBOZJXRCVCFPAGWENMYMLKKSEXJQYQIDOZTQFOPBJRLUCOLQCJVNVCGDVBXUYRVPULFJEBTYETSKIIRFNXDIHZKI");
    tmp_tmp_msg_0_0.type = 8U;
    tmp_tmp_msg_0_0.access = 180U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FKGRXZJKPBJEWNRHIRZIQRZVQLAYFXPDNOXBUQJSWBWGBWLKHDCZOZOWXJMTINBDNBVIFGSVDVMUEMTXOS");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MQXHGNTUOUDVSRLLWCZEGJGBTTAVGVXCQMNPHACFKHMDIYMPZIDHWZEKMFCNTGRIGOPBVQJPKNYAYVOTWCPXPFXSFULMRLZCDABOHSQTKIRNWYJAZCOWNJBMQZVLGMFDSPAEOYCEKOWWTSALDLRZTFDRUYBYFQSWQWPRBAMLHJYVU");
    IMC::Launch tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 50908U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.312559137202;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.287910018851;
    tmp_tmp_tmp_msg_0_1_0.z = 0.0383088419604;
    tmp_tmp_tmp_msg_0_1_0.z_units = 231U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0673878349347;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 184U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("DEVMXNJDHSIOOIMNGGDFMCDHANVHRUBKPRGWHODUPNFWUMFVBTAYPIZS");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::UamRxRange tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.seq = 19514U;
    tmp_tmp_tmp_msg_0_1_1.sys.assign("RDWAUMWRHVYPKKSGDFZBIXDLZPIKYQHOVMURPNUKQZGPGDXDXKELDTNANHEQHFFMKJSVLVELXNBYAMTOSGJSOQJPITCOFYNMASTIBYYPHLRG");
    tmp_tmp_tmp_msg_0_1_1.value = 0.604965245043;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("AALMNJPERWRBKCXGKQTBSZWCWAZBRGFQJASBGWINNPCJQYYOMMJHFTGJOLUUMOCEIQYVKASMOPPPLFGCIJUMHTFAXSUWGPZHIGVXDIYSRZEFLTHNMBDUFFLOVBJODGOMUURHXZBCXPWOZITTXTYXZCKQUJDQMRVWFEDNVERY");
    tmp_tmp_msg_0_2.dest_man.assign("VFDCMBVAAPWSMHIUJMSUOTPWYDVGEFGTRXQRVGLBBXEZHRALHKFONPXJXEVWYLBZAOFLTBKSRJCJIJZDUFQFMCOQGMHKYPPKWSUECXLZZGNMVITWJOEJCMYDRYTEIMBOUIZCLEJPNMYSDRORZYJSDLEQEXZXTBPFXVNAUIZILOISGHEZNBQVQHCWYXSLHCGAAYMKPNTNBDHUNCQUWKG");
    tmp_tmp_msg_0_2.conditions.assign("FUZFVOBCELTROXIDIAPOJXMYFDXINEONIKWZZGNUMD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::LblEstimate tmp_tmp_msg_0_3;
    IMC::LblBeacon tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.beacon.assign("AFCQUXVSWGSHORLXOKBIWETOLUVTLRMTPCVYAFDMXWZFNIKVEIRKOBIMBGAJHEUOSRKTAELWBQGKXQBWJMOPYLJQTUSATNFZERIDLUNPMKLTVJAJSTOQNIDZHVCKMQZDANCP");
    tmp_tmp_tmp_msg_0_3_0.lat = 0.877947783294;
    tmp_tmp_tmp_msg_0_3_0.lon = 0.0880195403306;
    tmp_tmp_tmp_msg_0_3_0.depth = 0.313740747946;
    tmp_tmp_tmp_msg_0_3_0.query_channel = 234U;
    tmp_tmp_tmp_msg_0_3_0.reply_channel = 227U;
    tmp_tmp_tmp_msg_0_3_0.transponder_delay = 84U;
    tmp_tmp_msg_0_3.beacon.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_tmp_msg_0_3.x = 0.642551956358;
    tmp_tmp_msg_0_3.y = 0.495014675601;
    tmp_tmp_msg_0_3.var_x = 0.320827114672;
    tmp_tmp_msg_0_3.var_y = 0.597127138895;
    tmp_tmp_msg_0_3.distance = 0.458674401046;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.279305779308);
    msg.setSource(56526U);
    msg.setSourceEntity(128U);
    msg.setDestination(39643U);
    msg.setDestinationEntity(109U);
    msg.command = 87U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CIQSXXPCYNALNZXTIFZKOMCRQCIEBOYVCVLAINXTYDFURQNKVLDWKFGHWOKXGDZCJTHGERMQVYPRLCMXAZOZJPFWNGATTDUMOWUYZBMPUPFBSTROJWSNESQGQSEJDGRIPFUHHFTROCYBQJUPDMJMTMRLUDIZABSBAXTTKAOELBYQHJMJSPUMXYGEVSNIEKFYVWHLPPAZIVNJQV");
    tmp_msg_0.description.assign("OPGEBESFNZSXZSWVQCDSIIEMNF");
    tmp_msg_0.vnamespace.assign("VDZDMDLRMBZVWDLKUMAQSQKOUZRPLNUSSNGWICVESEHTAZAQBGJAXIRBWYKLTLWZIHCFOIBLTRFAFONIKLXDUFAWUGRXHBEOVUXB");
    tmp_msg_0.start_man_id.assign("BQXSVHKIODKMQFDKGAWXZSHIAJNSYLEHOBFVOMWJBGLZXOUQGHSZUDKAFMRMOECUIWMZIPBYZGJTINIRRHUWENTLWUSMFRIAXCPECDCEBUDPSTJELUGQTRIXGRDQFYKDRLEQPPVJGJJGPOQZJCYODFAVUCAFKKNGBORKDTXPFTLJWYCNTIQAZJIAX");
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 3194U;
    tmp_tmp_msg_0_0.lat = 0.703502142258;
    tmp_tmp_msg_0_0.lon = 0.522762607915;
    tmp_tmp_msg_0_0.speed = 0.763499066034;
    tmp_tmp_msg_0_0.speed_units = 46U;
    tmp_tmp_msg_0_0.custom.assign("JLQIMIQDXJEOXSTQZEFVIEWHCUYMGGKZEMFSSSCHLRJKPPACNKZRSPRCCXKKKLJTKVSLVPFALHTRIUUERQJNHPPNGBYVXOMDPXQRYZUUEVODVQWFKFBGXNCNGWUFIMXYIORZRGPWHJADYTTFCWJIALBCYDBYPQGNEKWBDSNDMXMREPTZULCAJVXINADAUTJHLLTQOWBTRDUCWZFOVLASGVFVHBDAQY");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.132573687527);
    msg.setSource(5160U);
    msg.setSourceEntity(205U);
    msg.setDestination(33518U);
    msg.setDestinationEntity(158U);
    msg.command = 21U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BDRZRNVNZVHVVURYLSKZAIUTRHDWOZYEAPXNYVXJNGPKBIAIXYMYVDFMJMOJLLBWNTDBQFWBILIIKFZQTHEPWONMLJIBKZXXNWKUXERLEQPFGGSRDSPADCEKOELLGLJRWMPYZHIBUMSASOICUJFJTGPHTDKUTCAYVKQJONVUEFFJMUSXMZRCIOTPDBVDTVWXAGGHRPQXXWQHSUOCZTEYEWGZMBKCFAGTQGYRWOQKASAHBSOUJMYFQCH");
    tmp_msg_0.description.assign("RQRVIXBPACSJYQAIMCWFMTQGEFRFMQGIBVQXRIQOWUCKYENYZDWNOSLYQWNTHDAMOUSUVVSBOEHAQTCFELOLNTFLRFGJVOXTVUJVQNBXTXUZHBLORYYWDYRUEPSRKUQUBDACPAFSVGHKREXJSIBLHSYVEWKTCJWKZKT");
    tmp_msg_0.vnamespace.assign("JPFUDPKYDQOBRCXQHUANLBHALBEBURMFLCBWMBYXECWIMQKVKQLDJWOAAOLIRTORUTGGPAFQZFWVEBEZSGYCXEQVBFVNVWNLDPEOPWEEFKPIGPTCL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VVBQMFMZIBZAUVPWNSIAKDNEFUFVHRDINMTBOGGFUYSSDWHJKYXJSMRFNNRKTDKWOKWLPYEAEHGYIECJGOJZSTJYULYOJLWDZTNUESCVTCZLOHWAODADDBERYDBACYMTUOXJORYMTRKQXKQQHGUPWZCBAZFRGQFMGLRJWHVIBMKEPNIUTIWXSPBMACXZVCSBPKLG");
    tmp_tmp_msg_0_0.value.assign("FZVYUQWTFLNSFPVDDEDZRVTMKLPWKNBALEKLU");
    tmp_tmp_msg_0_0.type = 122U;
    tmp_tmp_msg_0_0.access = 218U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MLEUAXCCIWDTRMEOGXHMHPGGGKUEJABMLHVNGQQJCPFFVQZYZHELWXJJL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("XWPRKEIEAVFKIEMGQIVLSNHBLALTKSLFECVZKIYREAYFGXGSMZLWACNJVQDTMQUVOMRXOWLYNJSGFFKIWPRYPQUORUDHCYSWBCXWHKZUSDHNKDBAQPGDODZJVUQOYAMKTZWOCIFRYWPBJYQTZDVIUVBUVBHPAHPGOSTIRCSFJUFJEETWRCHDDQBBOCMEKZUIPXLHNQNORNVAUJXGGGPABCHMXRLA");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KOGAQEFDQKCKSHVKRWPUQBCR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::UsblFixExtended tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.target.assign("VHDTUEGTLBOCYITCOJNRSQWIEKXLBMJBMFAGBONGEOHPPFGLFCXTKVNPNH");
    tmp_tmp_tmp_msg_0_1_1.lat = 0.389908149805;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.21612882291;
    tmp_tmp_tmp_msg_0_1_1.z_units = 33U;
    tmp_tmp_tmp_msg_0_1_1.z = 0.567065196915;
    tmp_tmp_tmp_msg_0_1_1.accuracy = 0.56767817301;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SystemGroup tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.groupname.assign("VXQRFFBJEKODUKBALXYOTRYRWUCCHNOZGZFWUGUWPYVKQMTBUZMJQSCLJCSGDNLMDFRIQBBEGXKYCSITJJLRMDNHFRQLJJOPQKLVCGPFSHNZWEEKZPGEQWUHNOTOPKZFZXQYAMGIIMYSRJKAO");
    tmp_tmp_msg_0_2.action = 70U;
    tmp_tmp_msg_0_2.grouplist.assign("DPQHEZVNLLZWPBMGIUCVYRMSJMQXREGVYFDKWJPINPOS");
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
    msg.setTimeStamp(0.311239652557);
    msg.setSource(38893U);
    msg.setSourceEntity(17U);
    msg.setDestination(22908U);
    msg.setDestinationEntity(181U);
    msg.state = 68U;
    msg.plan_id.assign("YCCUHVVUSBDZTPDJUEBHUNBACJOYEUXJZSQUBMFDIKGYGLSKBRRUTEPOZCJGGMQVYUWIGTCSRWNEXGLJNONMNAFKKWNHYPRLRFQDOXSQBOIIXNACMDK");
    msg.comm_level = 10U;

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
    msg.setTimeStamp(0.565762768957);
    msg.setSource(31236U);
    msg.setSourceEntity(72U);
    msg.setDestination(55734U);
    msg.setDestinationEntity(63U);
    msg.state = 99U;
    msg.plan_id.assign("ILUBZONWJASEIRMPEGYHBCJYNWTXVCRDMQPLLHELO");
    msg.comm_level = 42U;

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
    msg.setTimeStamp(0.209119090651);
    msg.setSource(38615U);
    msg.setSourceEntity(234U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(53U);
    msg.state = 158U;
    msg.plan_id.assign("KNFVOLOZMAJGDDLQSINDFTDAMQAHMVSGTJSUTRCFWBZRQIDTTSXJVNMLN");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.360599380032);
    msg.setSource(33760U);
    msg.setSourceEntity(97U);
    msg.setDestination(49612U);
    msg.setDestinationEntity(227U);
    msg.type = 90U;
    msg.op = 213U;
    msg.request_id = 2774U;
    msg.plan_id.assign("GMHQLBFMMXKJKVVRVMXZUDPQXZBEDTHPC");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.374819742257;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FOJWPGUTMBDPIOYHIEGYDAUODQDIZTRKCFFFYSAVVPQMKAJVPAKNVYNJOIGNDBWGWOCYYUUDPROHGWXSHZNRTEHVLKSFTGZREYBHQARYCOBUPZFXCEPIZXIRWYQIAJTNTZCDZPEVQJKULVAMPMSWXHRGACJQLEKOYHKRBQDTMXMGFCBZLJTPXLJQIUWNACLIUQSWKLMHEHKRSSNCXAIVXZOSWFXUQKTJDENLMBW");

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
    msg.setTimeStamp(0.453243749628);
    msg.setSource(18966U);
    msg.setSourceEntity(234U);
    msg.setDestination(52365U);
    msg.setDestinationEntity(51U);
    msg.type = 191U;
    msg.op = 175U;
    msg.request_id = 12106U;
    msg.plan_id.assign("KHWFWNVQDQIAVKSKRAQBZJEUEVCUKDNMMCFDOAOMVRRZULBSTYKHSWIDBVDKPTCYVBMXYRDSBLXIFDJBNLJVXGTAMUALZSIJITWFWWUYMLTOQGENZEXNOFHYSOFJO");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 19684U;
    tmp_msg_0.control_ent = 102U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 64U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.717720624934;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 240U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.506916271692;
    tmp_tmp_tmp_msg_0_0_1.z_units = 81U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.00770468984084;
    tmp_tmp_msg_0_0.lon = 0.32865438034;
    tmp_tmp_msg_0_0.radius = 0.689672124747;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 179U;
    tmp_msg_0.proximity = 98U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDPBHLQEIHMBDVKEBJMVOIVNODOQFMMEMXFCIQNPWCZVJSAEPVLTBGAJODVKATE");

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
    msg.setTimeStamp(0.971936974954);
    msg.setSource(48262U);
    msg.setSourceEntity(220U);
    msg.setDestination(35323U);
    msg.setDestinationEntity(142U);
    msg.type = 149U;
    msg.op = 58U;
    msg.request_id = 53863U;
    msg.plan_id.assign("RTWVHPFBJIUMNJWXZADOUNLZQSPZCOJJNFQZGOHFBXIKAGDITHQQOEIDACKUHMMYBJXPZXLVGWEVWWNXLJQJV");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.875286118972;
    tmp_msg_0.dist_min_abs = 0.225332391958;
    tmp_msg_0.dist_min_mean = 0.835574250607;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CMXLCOFHTSUGLGLBBBMHNQVRISNBODKCXADXKARQEFVIJKITZJLVZRNUZWBEKTMOOMCARQDKSOLGKCUWMCGGMMDLPABGVPRJVRAFUN");

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
    msg.setTimeStamp(0.828617557738);
    msg.setSource(44186U);
    msg.setSourceEntity(1U);
    msg.setDestination(53827U);
    msg.setDestinationEntity(207U);
    msg.plan_count = 63968U;
    msg.plan_size = 1719335533U;
    msg.change_time = 0.275344994063;
    msg.change_sid = 62676U;
    msg.change_sname.assign("FHTIYOPSULJDHPIVGGJOXYLPVNIVCXQZPJEHYRCEWNUDNVVVFFMGINTLSKRHARUXQHMC");
    const char tmp_msg_0[] = {-58, 73, -23, -35, 7, 112, 109, 12, -40, 99, 118, 75, 36, -106, -24, -3, 78, 9, 65, -121, -12, 59, 116, -53, -126, -8, 45, 82, -69, -75, 41, 114, 76, 33, 2, -25, -13, -6, -77, 100, -24, 118, -72, -22, -24, -65, 124, 8, -126, 90, 27, 123, -5, 108, 117, -105, -23, -115, -89, -44, 44, 100, 10, -109, -17, -126, 103, 16, 79, -61, -35, 39, -93, -72, 43, 15, 55, 109, 49, -36, -51, 74, 92, 72, 44, -1, 106, 126, 91, 47, 29, 73, -89, 11, -36, -88, 17, 3, -121, -102, 122, 97, 72, -9, 50, -20, -64, -28, 61, -85, 87, -23, -24, 31, 35, 40, 53, -58, -123, -71, -100, -126, -67, -15, -115, -36, -88, 2, -7, 28, 87, -114, -63, -12, 74, 82, -72, 125, -61, 14, 42, 10, 17, 8, -70, -55, -123, 38, -18, 125, -121, 73, -83, 77, -47, 69, -7, -111, 46, 102, 11, -104, 25, -115, -29, 41, 46, -51, 125, -14, -30, -35, 80, 90, 46, 27, 96, -96, 23, 78, -4, 87, 69, -95, -51, 32, -123, 92, -8, -64, 100, -65, -113, -30, -23, 114, 86, -122, -52, 18, 100, 85, 118, 103, -52, 47, 120, -81, 21, -45, -30, 112, -39, 42, 42, -11, 97, 118, -109, -34, 113, 87, -70, -46, 93, -120, -120, 116, -68, 78, 29, -16, 41, -74, -21, -4, 120, 114, -49, -18, 67};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KCJWKZZMKJKBFAOSQXJHLVVUIOWULIFRIFYMNIOMPINYMQCCICRPGNZBPRHRANWHBOMCWTEMPDDESUDIYBZTBJYQZXSSCZHAWOXFXXHLNBIATULCYTZFZNWXMUGLPDNRUEOXVEYNSVDCHXVYOXGSLLPVJJWUDHYJEMOVYNFPVUQQRTPDAPECTHCJHRIAVQGSKBVQSRGWMRSETIMOAKOKTGDULWTPZJURGADWDAXFGQEYFE");
    tmp_msg_1.plan_size = 33798U;
    tmp_msg_1.change_time = 0.198907277621;
    tmp_msg_1.change_sid = 13152U;
    tmp_msg_1.change_sname.assign("BJLKJIHJVQGKURDKUCPWUBYCGHWWTMXZKTBEFOPDEDENHPZYAHAINQPIQUXZIXNNLILUWTMWSDQFGZPKKENZVZOIJGYATOICWVUHEXTRCQFQOBSPFKOPMSSCLHNXIAGVRBGTGOBQHHBXAYLYDXXBNTYQZYWVNWJOGVFRCDUIEXSCKSOMRBUSNTYFLTMLJGISRFMJRAV");
    const char tmp_tmp_msg_1_0[] = {-112, 77, -20, 116, -127, 91, -118, -116, 28, -86, 98, -20, -35, -63, -65, 14, -95, -26, 23, 4, -124, 47, -40, -18, 51, 102, -103, 0, -97, 63, 11, 40, -98, 11, 1, 12, -80};
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
    msg.setTimeStamp(0.322209601344);
    msg.setSource(52397U);
    msg.setSourceEntity(4U);
    msg.setDestination(56616U);
    msg.setDestinationEntity(42U);
    msg.plan_count = 21159U;
    msg.plan_size = 4231402812U;
    msg.change_time = 0.00847323735553;
    msg.change_sid = 17115U;
    msg.change_sname.assign("CQQBIABUZKTGXKSLMVSVNMEBLMUIRYUGKDBDXWQVTRYFQECVTXVAPTFVKPJRJQQYXWWQXVGWIVFTDNRTGZYZXHLHFJWHMNLZMUABANNYAXUWDRSJAEWZBARKEOPRVZLSDKGMRMCUZNXTZQLIAVHLMCZNCANFYEO");
    const char tmp_msg_0[] = {-62, 55, 68, 83, 99, -14, 93, 93, 43, -74, -104, -56, 54, 102, 101, 4, -32, 48, 12, 12, -105, -71, -115, -37, -1, -82, -100, -102, -101, -123, -105, -73, 51, 75, 108, 118, 54, -25, 42, 80, 106, 84, -33, 84, 11, 106, -46, -11, 62, 74, -99, 44, 37, 64, 56, 23, 29, -11, 34, -111, 113, 76, -103, 48, 44, -28, -99, -84, -1, -108, 45, -64, -34, -71, 67, 21, 15, -72, -88, -40, -27, 122, 33, 20, -67, -68, 40, -25, 64, 111, 88, -19, 49, 91, -100, -97, -99, 124, -126, -128, -3, 108, -90, 23, 27, -80, 40, 27, 88, 125, -60, 94, 103, -21, 124, -40, 88, 41, 27, -95, -124, 16, -109, -67, 64, 52, -35, -108, -74, 61, -6, 62, -18, -96, 117, -83, -67, 122, -72, -121, -95, 49, 94, 109, -78, -47, 14, 84, -80, -40, -126, 33, -47, 69, -51, 31, -12, -85, 118, 117, 8, -54, 90, 106};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WKNIKICJHGQWGLKUCVEQTYZXVCZSRBJAOHRMGYNHOKWUEDSCGHRYUUMRADNBPBAITYSHGIQMFVTPUCWUZNOEQBWASZXDHXABSTDUUFKF");
    tmp_msg_1.plan_size = 4752U;
    tmp_msg_1.change_time = 0.87021451919;
    tmp_msg_1.change_sid = 28315U;
    tmp_msg_1.change_sname.assign("UXCTDKMNHUEADLROOTJGJMPYTDPDRUFCREDLKVCESLYWPBXDERYALKSLUJRPALTBQEXVZYLTMDNQWFESOSIYXCOEFHMFJFSXSGSBVJCGTLQHQKPOCNSGGOUYZQMOZXJMZQFHLNTTFHHVJYAVHLWVAKRYKUPMQIAFPOZAMYXUOVRFGWCGXHIXZCK");
    const char tmp_tmp_msg_1_0[] = {-22, -25, 23, -68, 40, 21, 112, 70, 4, -88, -20, 108, -123, -128, -101};
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
    msg.setTimeStamp(0.642522743916);
    msg.setSource(42628U);
    msg.setSourceEntity(199U);
    msg.setDestination(8980U);
    msg.setDestinationEntity(13U);
    msg.plan_count = 47149U;
    msg.plan_size = 4237965083U;
    msg.change_time = 0.28106909006;
    msg.change_sid = 5644U;
    msg.change_sname.assign("SDIVRBEWEUNZIYAOVHRCKDVSFWLXQNOEUHROCGFNBVAQSYJDGXDVVHVABNDTSZLWEKTAPJGPGNFLQINCUKPFCRTQIIYODJGVBXSSMHLMKTFOTCHQQCDNZPWJDGQGMKWEFISUOCOMNJLYXUFZGAMFQ");
    const char tmp_msg_0[] = {93, 126, -10, -35, -14, 28, 40, -48, -93, -117, 55, -73, 47, -67, -119, 87, 9, 25, -76, -59, -114, -29, -107, 9, -23, 70, 95, -73, 79, -118, 5, 112, 7, 105, 23, -52, 37, -113, -81, 51, -28, 122, -96, -69, 79, -128, -18, -117, 70, 48};
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
    msg.setTimeStamp(0.333938849495);
    msg.setSource(12240U);
    msg.setSourceEntity(178U);
    msg.setDestination(48692U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("VKUIHHJMADNNSCRHHQLVNXPMYHWGNLSIRLQBSMSABFXILCGZTXYMVYWZGLDMVZYUTZBUSNEKZUXFHGRFSKTWZPCFCJGYJIAGOTPYEEDLDPTQUOBDOSQAWFPWGWUGHYPXCKWZFKKTTWSNEQBCEMNBKBYUQRBEEIXPJHXIVGDNURDQQMODZPAZRODTFHAEWKVYLPIFIAWSANOJEZFRNDXQKOVJCMUAVYJBVXEOBRLLXTISIJRJFACM");
    msg.plan_size = 27254U;
    msg.change_time = 0.831602687152;
    msg.change_sid = 16607U;
    msg.change_sname.assign("RGEJTJCGMKQXFFPGBNOREQHTAHEBYBPXCOFOXVLGECI");
    const char tmp_msg_0[] = {-33, -69, 7, 72, -85, 3, -2, 92, 88, -36, -5, -39, 93, 116, -66, 28, 113, 22, 100, -63, 45, -31, 55, -56, -28, -69, 109, 125, 99, 10, 101, -109, -78, 81, 107, -61, -94, 11, 24, 84, -62, 72, -99, -59, -7, 105, -34, -102, 32, 42, -44, -8, -63, 15, 74, 59, -76, -75, -92, 74, 46, 4, 113, 114, 2, -17, 19, -105, 104, 104, 119, 34, 107, -80, -96, 52, -126, -29, 105, 34, -70, -77, -67, -49, -16, 120, 2, 97, 13, 46, 109, 46, 14, 1, 115, -14, 79, 85, 119, -103, -78, -33, 93, -83, -89, 60, -51, 82, -18, 108, 116, -59, -61, 1, -123, 123, -78, -36, 92, -11, -15, 54, 22, -121, -21, 54, 109, -113, -86, 17, 98, -38, 21, -1};
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
    msg.setTimeStamp(0.00189361370604);
    msg.setSource(37743U);
    msg.setSourceEntity(196U);
    msg.setDestination(36238U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("IONTDIXRERGRZACWLQSDFOKJHJQCPEKLELYKBKHZYIAJZSGQJMHJTWGNHCDZUMDTSEMAWZAPDGLVQFJOYGPUJFJFEFGNOFCZVKNABDCSJKGKORNSKITOMYSCTBFSLBBUWAXWIDUFMCALFEXSAENVHGVHNQMHBUXIZXQLMSYWNXDCGKPLIVOZMBROOFQNPYHOGCIDDPXSQUYVZPXRXURTPLWVZQWHMLQXVRIUTRUNPRJB");
    msg.plan_size = 32348U;
    msg.change_time = 0.190287771419;
    msg.change_sid = 63303U;
    msg.change_sname.assign("ZZOUVTCUVLZQDSPGPVOPHKSCNVKIMODPMPIUFVNYTCJPDLSWAGWZHOKFUWFYDULYFKBNUAWERCAQXLSMMCYHWDXCRLMHRCDNIJOUIOBJBSAXJJAEMHISQRTSZEDTFGBYEDJXVWFTWHA");
    const char tmp_msg_0[] = {3, -14, 2, -101, 29, -128, 7, 74, -84, -94, 93, -77, 55, 84, 82, -10, -102, 48, -46, -117, -14, 116, 87, -107, 89, -53, 45, 41, 47, -126, -21, 95, -77, 90, -23, -61, 93, -3, -58, -100, 6, 43, 37, 11, 118, 70, 9, -25, 65, -14, 80, -65, 68, 59, -16, 72, -103, -20, 56, 28, -85, -33, 124, -108, -35, 110, -31, -100, 87, -92, -114, 112, -121, -23, 62, 34, -10, 66, -101, 13, 21, -46, -104, -118, 70, -96, -4, 64, 99, -117, 32, 30, -66, -109, -69, 100, -95, 114, 91, 29, 111, 113, 121, 75, -91, 85, -56, 118, 15, 54, -105, 106, 78, -43, -111, -32, -13, -67, 66, 99, -117};
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
    msg.setTimeStamp(0.359937545168);
    msg.setSource(38034U);
    msg.setSourceEntity(215U);
    msg.setDestination(65311U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("SQSTGHHXMCGFMDOQNJILGAASZYLNWRJGZQLRWPZFTVKBSWCKNCPPQDLPOYJNDVABXDJRFEHQZLKUHGXQNEJPVFCYCHFIEMTISQKMBPYF");
    msg.plan_size = 22523U;
    msg.change_time = 0.544364192696;
    msg.change_sid = 4006U;
    msg.change_sname.assign("JXXRIHSVZWAPHHRNEWVDZYFVMWFO");
    const char tmp_msg_0[] = {111, -14, -80, 51, 25, -77, 44, 121, 65, 92, 40, 9, -32, -29, 79, -77, 124, -123, -125, -39};
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
    msg.setTimeStamp(0.210380721165);
    msg.setSource(144U);
    msg.setSourceEntity(2U);
    msg.setDestination(1713U);
    msg.setDestinationEntity(13U);
    msg.type = 23U;
    msg.op = 202U;
    msg.request_id = 39685U;
    msg.plan_id.assign("PJUGGJCADGIQZGDRFVWDPXXHTVQTCIVDGPNCWZYIFMWMTMBLUSEFGCLSCEFVSKVJNBPIJFDYGA");
    msg.flags = 42647U;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 238U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZIMVXROGWMSSJPGUPAXTUTAKHOVBMWNZUGWSJVCWGENEOUWYQNRTOZHCLREBDSVHSYHAFPNDFCXUQPNWTKFEJPMJNDYLLIQSPWJXQX");

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
    msg.setTimeStamp(0.929435086106);
    msg.setSource(20027U);
    msg.setSourceEntity(77U);
    msg.setDestination(37580U);
    msg.setDestinationEntity(130U);
    msg.type = 74U;
    msg.op = 200U;
    msg.request_id = 24806U;
    msg.plan_id.assign("CJZKWIKLTBWQJGORJFYOEDPXQRDFTXWVBNLXLXREKKNGPOIATABTFWZOVWVLXLBVHZKZWVYVUPFHUHUFSELGNRIGMZQOXWNBYCIDFBYPFUYUDQKQXAESVXACZDBCTXSSHNOBNHOMDEHGBXSPZUFOQJUFMMWSMZEELTOTKNHCNRUPQMGCMMRITYSEDGKVQCUMPDIPLNAZIRGQLRKQYCZLSYJJRGAANIPJWJYSPEAFHCHBTMOTEJDVASYIJGCWU");
    msg.flags = 28582U;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("JBAWTOGPXKUMAGMPIDVZEXZDIAKDHGNCEYSHTBVQJLTELLJOYJIWLCWGFBRNWFZJUBUMZPDDFHUNUSQQHURJBGWGKSHAQHWJETPRNMWEXKBXFNSAIICUTBBECZPPOXKIQNEMNVOODHTWFKWNVQKAHZFQGXTRIVOFUYHFIHBYNILARYNQYY");
    tmp_msg_0.dest_man.assign("PDGCFUXXHVWAZOMVDSL");
    tmp_msg_0.conditions.assign("BUKPJWXKEQDZDGHFMNOGBMCTNZWPCFSSYOYRRXUXZGHYKBWIKGVBZGQXZDMHRNBYMJVRYDKCXWLDTAICUOFUWQBFNICENSQLNRVWRLZIANRXTMTOAPVKTMQBFIUTZCLCVKUK");
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.124858539083;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MWDTYZWFOSCYQBCJRVLINUHKH");

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
    msg.setTimeStamp(0.259597920067);
    msg.setSource(33357U);
    msg.setSourceEntity(235U);
    msg.setDestination(45672U);
    msg.setDestinationEntity(46U);
    msg.type = 154U;
    msg.op = 246U;
    msg.request_id = 20828U;
    msg.plan_id.assign("USUEOXOKWSKIQZPQFDBMXEPESUANEVMIIUHSKCSMRJNTEFRDOOPNZMOMPPBGHLHALMBFVWBEMWWQPLJYLIHCIQDXZRYBRBHYGDZRAFMBUXQPKZIOHZQOXDCWQOXTWZLDHNGACJWNAZDIVL");
    msg.flags = 19610U;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.834126989739;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RIXZPZNDFSFLYGVSZTOXZU");

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
    msg.setTimeStamp(0.3797851746);
    msg.setSource(44703U);
    msg.setSourceEntity(133U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(107U);
    msg.state = 129U;
    msg.plan_id.assign("YLGINNEWYBDYIRXKJOOMCTOYKJZFFAKAWFXSXLSOHWWXGGECQXCLJATLQUSJQQZEBFVABKEJVFHTFGTQPKVVGTMTBAPYLIAVRTLZLWXMJJTFIKJGMQNHDRBFLQGYPTRY");
    msg.plan_eta = 808310626;
    msg.plan_progress = 0.819933817628;
    msg.man_id.assign("SJMFMSEWNOFBHUOSFCBTXJHRLRPDVMQLIANYWAPEVTCTJMUOLSSKLLEKIQBEOUJKDNOVKEBNMDGDVYCKPBVNZRSIEHHXGULGWBKLGDRKPZAGKCWNNGTNVMZGSTXFUYSMQZBIOJNFWIEHEJPTHAPRWONKRRXADHZPHIYVSIMIYQXLUHZFBCYAUM");
    msg.man_type = 60188U;
    msg.man_eta = 1947676563;
    msg.last_outcome = 130U;

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
    msg.setTimeStamp(0.60842771581);
    msg.setSource(16667U);
    msg.setSourceEntity(48U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(68U);
    msg.state = 232U;
    msg.plan_id.assign("JNZXIXHFWBEGEAKHIWRNJVTRWZYEQQXPCXJKDCDDORYGKHJVTCNAASQVLPSZFEVXGMUTDPWYUGWHLLJXPVKYCXPPDLUVAZZRGFJBQHMCXDBIBPAUJBRTNUJMZQYAHEEPITJREINOWBGDCLFVQKWRLBICBBTGQXNWHKKSEVMMOVWPRDHHZOITFAQUCDESAFGRXKPFFOJSONOUTLWNSKLGZQKMSTYUN");
    msg.plan_eta = 848924692;
    msg.plan_progress = 0.183621604331;
    msg.man_id.assign("LWHSDKJRXCLXJZJZCTZKDBLPTLIOVAPJHEMYNVGAGPKOLIUJZKUQJKMRJQWUIGBYYOTPRCVAVFBBNSRIZXYCXCRBDDXPYAFISEASYOEFTXWGDXDGTONXBEKTTMMHHINMEWXEVGMIOETFNWYLKTMHFADUMAASSGVQZOIQNTWKQCUAIPAVQSFCWNRKZMRWEIZVRELFDNUJMSQQJUKZBQVSLEQNLGBCSBWLPYBURHGFCUH");
    msg.man_type = 57701U;
    msg.man_eta = -407233659;
    msg.last_outcome = 191U;

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
    msg.setTimeStamp(0.683024322954);
    msg.setSource(50395U);
    msg.setSourceEntity(12U);
    msg.setDestination(15732U);
    msg.setDestinationEntity(122U);
    msg.state = 61U;
    msg.plan_id.assign("CPKVCDUJALWWJHUFGTJYMMIHDXRSFGCWRGKOAJKUIFPIBXUKAQTOOLPESWLPSSHGCGBZPWIWUVQJFQOMWVEVPSUAIYOHNRNZLRQXVKTXREDMYXXCNOTCGLRYONZNAXIJKBFYDOIDUPHLBJKLNIETZBECRFZMHOZQTVHUVCXLDQEMTMETJAGRXQSZBHUMLSMYGKBAACEYRWVZNDKJUDAIILOZSEDMBVYPZWFSFCWTBKHGRPYYNJQ");
    msg.plan_eta = -1870989209;
    msg.plan_progress = 0.440772427307;
    msg.man_id.assign("PNSSFBPANKMAHCBOZIIIQLNFMYKDQSQAWVZUGXKBFMUYWXZSSRKZXGVYNATQDPXQPLBZRQFLNYPPITLBTHDAJKZUGFENGRIFZAKYDQYGJY");
    msg.man_type = 30042U;
    msg.man_eta = 1031895322;
    msg.last_outcome = 228U;

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
    msg.setTimeStamp(0.827678533363);
    msg.setSource(6864U);
    msg.setSourceEntity(200U);
    msg.setDestination(62213U);
    msg.setDestinationEntity(242U);
    msg.name.assign("UDUMWRQYGSJNGGTBUXXIRRZQYSFHHBJHEXWYVXJUZMAFDLONEUXKVCTUGIPUOWORZJHHOGCYXDLZZAQELYZRAPXKXHMFYMKITNVRGQLZBYLAPLDFSPKRBJLNVCBOFBHLNFNRNBPIWXIFXAYTGJYNSPQCLWIWDEUMJWSDMAWUPMACMSJIMOQECWRCOAVKTKSZAWVVKODGPKQHPJSTDCSBYNGIIKTFQVEAECD");
    msg.value.assign("ZZORFJRVMBZLUWQZJSSVETZSRNKPEUNOCYGNDGMNTCHPUYUIGMKMGUODQRCAFDKQAKGOPYXJDMAUNNQLQDGOVCRYVNWQWIZTJFLMEHYCKMXKYKWPZAMZJVQTBYWRCBHFLXWJSLMXLJPFZHDYMCGWPSEBDUITOLTACIJAEFLGBBSREDEIAUPBNOFSHRUGRPQVKQKEPLPKXVCOHWVDJDTSVAIZYYBXVTXURNQBLSXBTNOE");
    msg.type = 249U;
    msg.access = 75U;

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
    msg.setTimeStamp(0.071192998574);
    msg.setSource(28610U);
    msg.setSourceEntity(246U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(69U);
    msg.name.assign("JNAGHXTXYENIGCFZASPNJHTCHDIFRLCIMGZOAKSVUKICDDARTCRLRPSASBSYFOZLKZTLESJJPHEGNPQVJQPDBWLWWTVHFWCKOEUOWTVPRKVWEDDZYFZKMVFYEQDKTFEPHNFRYZMIGOGVPUTZFVQAMBBKJIMYARNHGXDOXMLBXPMBQOWPBUHLDBWMUJNAUOXIXUBI");
    msg.value.assign("BCAVKCSUNDQERBJDEFANCUFQJTRGJYTK");
    msg.type = 127U;
    msg.access = 17U;

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
    msg.setTimeStamp(0.083953939579);
    msg.setSource(49078U);
    msg.setSourceEntity(191U);
    msg.setDestination(63991U);
    msg.setDestinationEntity(17U);
    msg.name.assign("BZLWZHWVIADAFJF");
    msg.value.assign("DQJKNUGJNBOASJXOSWELCTLCQQDUYGZPXVNQJUPXWNIVPLZBEGBQCXVZMIETGDWTRKBURFKRAMOUHFDSZYEKXXAKULSGYSONTANXRMDAAAWCQSTBHOHFEEOQYMHALZWEIEIOYARUHFRZJZZEHRLTNMFKLJVINVQIXYPPPZYOTDUIYXDCLWCUGAPSPVRCBCLQSRGN");
    msg.type = 184U;
    msg.access = 94U;

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
    msg.setTimeStamp(0.529617670073);
    msg.setSource(37011U);
    msg.setSourceEntity(52U);
    msg.setDestination(57237U);
    msg.setDestinationEntity(93U);
    msg.cmd = 177U;
    msg.op = 34U;
    msg.plan_id.assign("GMILCEWHYQJUQZNOAQPNZLLJVZTBAZARDCYSRYSITWAJIIITTKEUCGFBEVDSJVNEZUGPVGHO");
    msg.params.assign("WBODONLWMYXHQNYYHRQMTZNLOVMQJNUVECUOTGPGMVERGVNXLLZKRIDJAHEHAGFBNUGFSHXRYXOIHSYXIVXZZLRLRQQBFVJHJYBKTDBZVPAYCPEMQIDEDDVBBRFOKOBKGTCJPESWCIHJIZPMFTUKATPAZFJLRQWUCMXAMEPYZDJQOJFASHNWWSELKCOTCIUCNGTSUBQHWSCAUFWQSIIAGPELBCYJVNXK");

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
    msg.setTimeStamp(0.692655004038);
    msg.setSource(6318U);
    msg.setSourceEntity(110U);
    msg.setDestination(9861U);
    msg.setDestinationEntity(237U);
    msg.cmd = 33U;
    msg.op = 84U;
    msg.plan_id.assign("LVSCGONCKAPNBCGRRMSVNPLMCOIMBNJKQAHLQTPWEXMDGCYHRSJKFIKVOJFKWSXAHYLLOFJPBTTPKRMNHHWVYURZUSAXFEFEAVRFZZXTPQWFXPWCEKOQEZAHPCFZRITBLBEXWSZOJUTDGMYUCBQG");
    msg.params.assign("EQSWQYDNCPIXPKZXGYYHYAOSGXTTHOOAUHSKDBHUFGAAXFJZGJOKRVMKOHKLQYPITKALCGUFHMGCQIKWRISXLEUDIPYVAVNTPRMZNUFLTOVYEOBLLPTDTDTAGNNXQHEIPSJBZTRJUMGBKPJOSXRRZDREWFHUWVQMIKNVGCVUVFWLQJHCWAWRTHYSEVFCPCFWXRBDFJJZXUGAZIZJCYBFEIRBCK");

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
    msg.setTimeStamp(0.303894240478);
    msg.setSource(54958U);
    msg.setSourceEntity(215U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(1U);
    msg.cmd = 79U;
    msg.op = 251U;
    msg.plan_id.assign("GANRVZYZHVMXLRHMQPHYBEAGPSZDJRZPFEIMSFLUQMWIFRPNTATVBQKBCWBWIAIPNFLLUA");
    msg.params.assign("HUIGWPUQSULXHMJRZAGYRHQBQTJAJXVEMHPVPSDQRVZBLLXCBUMGNUZUOWTCTECGTJUMBKSSOAWMYIMOTCTODIIZFGNZTXPCNVRKICPJEAYHFAHEJOTHCKGNKGAALEEDYYOHFDCFYXSIQHDBKJSIKJBZPZYXIKNEQ");

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
    msg.setTimeStamp(0.0508969964488);
    msg.setSource(50287U);
    msg.setSourceEntity(251U);
    msg.setDestination(32291U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("UUMVWIHGZJHJXMIUALMNYAIXWLHKNRONYEYQODTTOVIJTKTMZOFZNXBLEFDKSLZVV");
    msg.op = 51U;
    msg.lat = 0.892834224543;
    msg.lon = 0.0642077151767;
    msg.height = 0.888734348338;
    msg.x = 0.402027771252;
    msg.y = 0.303837708776;
    msg.z = 0.017336078733;
    msg.phi = 0.119873380768;
    msg.theta = 0.136761412762;
    msg.psi = 0.446191091682;
    msg.vx = 0.16014605461;
    msg.vy = 0.469732864987;
    msg.vz = 0.76120412425;
    msg.p = 0.318599994707;
    msg.q = 0.68574091765;
    msg.r = 0.617158702195;
    msg.svx = 0.547115902588;
    msg.svy = 0.791639124921;
    msg.svz = 0.26744878952;

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
    msg.setTimeStamp(0.612122403047);
    msg.setSource(20728U);
    msg.setSourceEntity(232U);
    msg.setDestination(51155U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("PMQALJOYGABQQOYSTONSKVFTXCKHDCVOXRKZGIZNNZUUCFSAAXCFPNPLERHYFSBUEXDAPUBHYWPPOWJKODLKGDWFZWRZQKRFCORACUHZMVLKFAZGMMLOUQUDHXBMYLKJGDFNGXLIHEETSJMHWIJCVT");
    msg.op = 33U;
    msg.lat = 0.865932075596;
    msg.lon = 0.35934528183;
    msg.height = 0.675952790385;
    msg.x = 0.734793039257;
    msg.y = 0.651703898794;
    msg.z = 0.691341272533;
    msg.phi = 0.976558832509;
    msg.theta = 0.760290654688;
    msg.psi = 0.842912782184;
    msg.vx = 0.353360284219;
    msg.vy = 0.516685694352;
    msg.vz = 0.721395011454;
    msg.p = 0.569296972931;
    msg.q = 0.161177316978;
    msg.r = 0.384950098715;
    msg.svx = 0.595826068376;
    msg.svy = 0.587778125597;
    msg.svz = 0.273411162092;

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
    msg.setTimeStamp(0.359099384421);
    msg.setSource(29648U);
    msg.setSourceEntity(44U);
    msg.setDestination(22110U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("APBLLFUZORWRIICJWBPVGVFHOMGSQDIXKIUZIYSBPYYNJUAKSXDSBGCQPFTAEWGHJHQCFCOCIVFVDFPUNZHKSTXVNQNTWIGGSMVTEBRNDYHEETLFXJZUJWEAOJOLDZZFSAKAVEKJTQADNJUMSPVIRPRYMMRPSMQWDTCRKQ");
    msg.op = 105U;
    msg.lat = 0.590432481337;
    msg.lon = 0.936882198783;
    msg.height = 0.584757744309;
    msg.x = 0.181993700603;
    msg.y = 0.530953900574;
    msg.z = 0.705548010346;
    msg.phi = 0.131987181118;
    msg.theta = 0.851804707299;
    msg.psi = 0.158633426974;
    msg.vx = 0.587073958736;
    msg.vy = 0.180328709521;
    msg.vz = 0.944073606287;
    msg.p = 0.343992651694;
    msg.q = 0.879293758421;
    msg.r = 0.94972151073;
    msg.svx = 0.46955159835;
    msg.svy = 0.0856295505708;
    msg.svz = 0.222642464442;

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
    msg.setTimeStamp(0.728971709938);
    msg.setSource(20623U);
    msg.setSourceEntity(202U);
    msg.setDestination(55252U);
    msg.setDestinationEntity(7U);
    msg.plan_id.assign("RXNKZSTJKSGCKJJLGKFIZIWNSFZOCGIGVBGRORXOPASQZDEJAQTRMOFWOHFYUYODFBEBDUNUBXMZZZJLPVYVWDODWEBEXEWURLFVNKPCFRQRHMNHDQLOXAQYJRVMPHLDTG");
    msg.type = 12U;
    msg.properties = 42U;
    msg.durations.assign("YUGCVMLNHZUHLZJLTTHVAWKYGFFYAGOVNFIPKOOITIWEGJTHOYWQEHUDRUELFPTJHPBBZDGBDIXJCZEUB");
    msg.distances.assign("SFUDNFCNZAERDWHKTYZESLOVGBVZOZW");
    msg.actions.assign("VRSZXEXFJDDDJLJFFBOVLHDVLFMZSZCRGODKSLYFVQNKSPHBHUCKCUSNGEQVDWKXRTNKFXWTZYMGPIUQMHPUBAIWLJBYQJNHZQPTOYERSNSMYNHXURLIOILTTPMAEBYUMLEAXNYPJOKYDKWWHHNNNRAIWECUTIKVISBXACQOTXJIZPBMPYKEBRGAGMOQOQZHXSVZFACILFACCSUBDJXGWWBZELCVAQTAEFGQIREVRJHYTJFO");
    msg.fuel.assign("GKCFFLXHDEQMPWMKRYFLXPJGOIMCQINGDDHDEJDKIWLHHLXSUVUWMXAVJJKIBPQGMAEURYOIQBDQDZLUVYBGKAYAPCMHGFIYSVTHPLJUTRSBVRWSTYGTENBBAMR");

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
    msg.setTimeStamp(0.359042915544);
    msg.setSource(55293U);
    msg.setSourceEntity(155U);
    msg.setDestination(16373U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("ARRXVOFQMCKKWWOWVOTVABQVIMQSYODWIUEZAIFCTRPSTEYWEXYSQMJJEYXXNWMPNXTEMFFCSQMBUJNLDSZDIBZBQGSSUEJOCUZOSXKZZKAUSQNF");
    msg.type = 223U;
    msg.properties = 73U;
    msg.durations.assign("TJEAFMTKRKVTAFSBCPDCRAOHHJHXRPKYNYOYMWFAVOMDVOCTLGNGICQJZKMZUJMYWYHMUPFJENZTVELUSZPUKFRMSAIOLYDJOOEHWJAZUGHGAXRMQMCIXNGYDNBMCGAKJLHOXPZSRILDTWTQEQWSQUWDUBIKIFTFRUJCIOLENCPOQJHBSNPXSYRFTDBBLSZBGWU");
    msg.distances.assign("YHXRUDBSGVYKXNRIWMQKHYJNLZOZSBBOSEOUWQUOKSATSLICKBGCQWWXLKBEENKFQQVMPJROGHJDRVTXPXJPLAYSWUNNGJVZUMWGIIPADLZPBQXLGCAJAQUE");
    msg.actions.assign("KDDQFUNBZGJPTRBRFFUUPXOHFOQWLVABSTNNZAWGJNXNOMVGVPFAKIQJRPMEZLUGHEIUCMXEDFMJXJLWEYIDAWXCTUOAXIFTMIXGCYTXQHRUGHPTPCWECNWYCMQASKIMDKSSLHQUVLYMOSRHGWTCKHMTYOFSILHKEBFS");
    msg.fuel.assign("LJOXHFGWQKADDUDDZWBSBKFEUPEAPLLMOHIDXCLIEHVBZRTWRGXWRWGBFKPZRMMSVUAIVDKMZGAUXKIATGUSIXJJUKATXHGUMCNYOJXCWLOMFST");

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
    msg.setTimeStamp(0.887460923804);
    msg.setSource(38040U);
    msg.setSourceEntity(130U);
    msg.setDestination(45558U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("BMSHBYFHFYVCFBERPLNVQBENRRYVYLQMJSUXCMJKJOTTXBBCXOLUIBPCHKBWXIJOQWKDMPIAOXZJEIMFNWKGLCPCTPPUXYTTJZBNAOIDUMGZLOGZDGQUDDQZGVQXWOSAUYHMCERNRGHJTMQVASYLSCQZNFPWXYOONEDFLGLDNDEIVDFRIEJKWUHRTVZCTSAHHYSKVTAGPHFSCWTQNHLLVSQIUFIAMEDZEI");
    msg.type = 138U;
    msg.properties = 125U;
    msg.durations.assign("XDMTVGHLQNCZMVIHKWPSMAFTMHWBGFMRZZSLSFPQKWKRNTNEOYGDVYNSVMTWFZHQAXMJYDKSGXCIHPJURXRVVAYGURUUSKGULOOAWAKJBTZFQDDXYZUSYOGDPHVPOXAPAMICOIYTDUGYNEULEPZIDP");
    msg.distances.assign("BEMRTJZCNTCAQYYFQHNEMCQMQZGKPAEKRPTDIAZKISAGISYMECLRBZNFEKZOWJVDDFKJFOOTVYKSYGYPLRUGIGNTBYBAGKLJQIQDTHGLJWPWXSJBURLRVROTOHLAUONNRHGYHOWQJEIXEPUHZGPWCABDHLQWCVVMJFQITNAVXZFUIKTWJOIISVCDMJTWKSHNZXU");
    msg.actions.assign("CIJAOLPNELSTVYWYYINFLHSENZXNQWDHDMQPJOTEGDHJHJCYYWRTSLSVFQQPQIZHRFNAUMPCXTMMTMAPATLSQJAJEKVXKFUQXCCBKROCLULDDODJUDQNVUZZXIRVOBFCWLSZHRCBGKBRZPOKIIOWOBVDAUMHTSEHAIKMUYCIHGBGVWKDRZZJENQXMBFTPVIETEMEUEKWRWNVKGIAFGYBZHGWBP");
    msg.fuel.assign("AVRHZEKPSIIEUDLMMORAPSPIIUDNOIZOTACMOVCNLRVROYJDUTYUJTOCPEGTWTMYVHVSZHWRFWHWZVIOFXRBDKKDLQAOXRCFTJHRYUECPSXYSZLFNOMRPBOWCGSIYMWVUYFSHJQQBBKDKIZZK");

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
    msg.setTimeStamp(0.0321164193385);
    msg.setSource(29764U);
    msg.setSourceEntity(77U);
    msg.setDestination(7656U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.997632875591;
    msg.lon = 0.844054267138;
    msg.depth = 0.438114504916;
    msg.roll = 0.0922242190277;
    msg.pitch = 0.604180689758;
    msg.yaw = 0.94636115252;
    msg.rcp_time = 0.325661039069;
    msg.sid.assign("NDYZANSASDUHDNSVXTLGGZCQLCIKHKBGHX");
    msg.s_type = 66U;

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
    msg.setTimeStamp(0.550696399964);
    msg.setSource(25351U);
    msg.setSourceEntity(63U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.621190713249;
    msg.lon = 0.115059614218;
    msg.depth = 0.0582731615643;
    msg.roll = 0.749879073019;
    msg.pitch = 0.772602945213;
    msg.yaw = 0.0915154341304;
    msg.rcp_time = 0.280394983199;
    msg.sid.assign("BXARMVOHGTDAHNZVJRBDAAQTUWHZZPRTFFLFMMIOMLWDOPROKKJCVQIKEUVEVYCLJRUWQSSAJFPOXNBLNOTIDBEPRSOGLSABNIQIUQEIDVUYITQSMLGVSNZEZOSWCTYASRWKSFNDBPYDXOCEHXLEWUVHOBWYJCVLHGWCYNEPHYGAKBFZBIGWDCSFJRHYHTJZKQEUUTWDFQTIPAAXXLCNJUKGMRXDLPZPMPQ");
    msg.s_type = 215U;

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
    msg.setTimeStamp(0.133579275967);
    msg.setSource(15714U);
    msg.setSourceEntity(68U);
    msg.setDestination(23951U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.279167110876;
    msg.lon = 0.739925684576;
    msg.depth = 0.119241455921;
    msg.roll = 0.235659856235;
    msg.pitch = 0.996475933517;
    msg.yaw = 0.975093847454;
    msg.rcp_time = 0.714630396993;
    msg.sid.assign("LXREACJBBFVXTULMTAIZTETFJZQLTNAMELPTOOCOGAQSUMUNOWBUIRXJPMYMWKHEGMHLJQFPOYXYZCUCWYNNHJKPVZEKBSSLMBJYHHZIZQYRMEPQPFUXGSAVZLDONNEGDPIRAXOVFVKHASFEDPLNXSHNQPVTEXZKMBBFJCHCAI");
    msg.s_type = 48U;

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
    msg.setTimeStamp(0.13759715139);
    msg.setSource(7162U);
    msg.setSourceEntity(228U);
    msg.setDestination(58273U);
    msg.setDestinationEntity(160U);
    msg.id.assign("HFRDCNHXPYBLMZPRFKYCYUEYUFWQXUJKNXALTKJSHOOILQBNJNHTIUATNSRZDEUVKNCSYUGDDEWTFSPRIO");
    msg.sensor_class.assign("WOHFACZDIBROHSNRMPROPXDXZSDGNQVDIXOZIBHXIHAATXSVLZCLDEYVYCTJYQSHLNCUBRWPJMFHDQFWBLUARIYYYQQZGUSXGEJWTHFRAYWTKAMPJCAFTCEEUEIRFVHTHVJZNPMMDHMARSNLCPLGLEIFDSCUOBXONJRWEGXNXQYTPKJGMWKYKE");
    msg.lat = 0.571487527119;
    msg.lon = 0.148793484215;
    msg.alt = 0.644269569415;
    msg.heading = 0.00232309689821;
    msg.data.assign("HZVVFZFRAEWKMTN");

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
    msg.setTimeStamp(0.150699782424);
    msg.setSource(29997U);
    msg.setSourceEntity(230U);
    msg.setDestination(15790U);
    msg.setDestinationEntity(110U);
    msg.id.assign("SIBCCLZQVXOGMGMYJDTFDU");
    msg.sensor_class.assign("BEENABSWISAOMZGIRWMPNVPWZPVCHLLKEFOGLJORILJKILCGCZDPHDEDMOXVDKXBXCKRGKDMTJRUAVMVHTDRBRQDOJKZQLJPQHBWVTFXXSSAGGZPKYRXYOEUKQUI");
    msg.lat = 0.995854853585;
    msg.lon = 0.975109915862;
    msg.alt = 0.546231724297;
    msg.heading = 0.812161353041;
    msg.data.assign("QQCRFYFFORZRWZBNOXSNRZWBEUGAVDZNZYPSQYOPILIXJHJRNFZQBMJRHUJ");

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
    msg.setTimeStamp(0.219869741779);
    msg.setSource(52931U);
    msg.setSourceEntity(80U);
    msg.setDestination(18302U);
    msg.setDestinationEntity(202U);
    msg.id.assign("JMAKGJDRUWJIICHINOCJDIWRJLBLFUHVMHXMNYGTSCKFTMPLESOYBTHSLYBVREQKOTFODNWQREYXWYGZCHRNVXKKAYWNEBZNGEPNHGFFNZACPEQBUAFTFASILQEWOPBOYPUHTDEXGYA");
    msg.sensor_class.assign("LRGDPGJYWUMUXRYPYQTACPCEUVINKRHAXRYOKLLWNDHSJTMAHSZRBLKWDWDDHDTEZOMUZSILXJUSGNQSPXMCJHGKXF");
    msg.lat = 0.108615441992;
    msg.lon = 0.328369963073;
    msg.alt = 0.8976263975;
    msg.heading = 0.90014728269;
    msg.data.assign("AHVEXGCROIMYNCCYSJSWEZZVIAYLCFWWMFBPEWBGIYHTBPGPWGIYQLRJVREVMENMSKIWCBTNQYGVZMQIIEHOVKDJLHRPUKBURDJO");

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
    msg.setTimeStamp(0.674269196169);
    msg.setSource(28146U);
    msg.setSourceEntity(163U);
    msg.setDestination(53060U);
    msg.setDestinationEntity(79U);
    msg.id.assign("ZKMJVRKAPCDXHTXDWYYVHGUGSVWWZNUOGJMAMSKGKRTKIFBZRXCTVOBEWPIEP");

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
    msg.setTimeStamp(0.146863398271);
    msg.setSource(19544U);
    msg.setSourceEntity(111U);
    msg.setDestination(55637U);
    msg.setDestinationEntity(14U);
    msg.id.assign("RXHNLQFPKNXWSNGEBNUNTOXAAFWV");

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
    msg.setTimeStamp(0.559759716841);
    msg.setSource(49824U);
    msg.setSourceEntity(57U);
    msg.setDestination(41582U);
    msg.setDestinationEntity(59U);
    msg.id.assign("ZQZSNHGPYEWQEKWPAXDEIUGXLBWDGDSZXLEYCMHJVMKTJNLHITXFFUPXKBUJMUQDPRNFJMPRJIXAUFAVUZSLTXPNCLRIVXVTOBFCSNJOWTIGMGRIPRSFQAFMBMKZAWKHTVOWPMBJZEYBYTKIWDCNGANRLES");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XUVGHYWBDXARJRFWWPIFEBXPCLYIFIOAHLZZHNCQMBJBFFVWESAXXVLUVMRRWYOORCZJSITQGMKHTMQJTFXPRSEDASZYBGPBEKPZTFLYCIGWONZDOOQTKUEGCWMVCQUMSILWNTCRIHSBYVQRGRJINANQTUEIENDDMBKAVQNQBUFYKNJXAXQUYNYDVRHIJZCOJKJHPTLUHPDGD");
    tmp_msg_0.feature_type = 172U;
    tmp_msg_0.rgb_red = 100U;
    tmp_msg_0.rgb_green = 37U;
    tmp_msg_0.rgb_blue = 131U;
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
    msg.setTimeStamp(0.0434294592916);
    msg.setSource(45466U);
    msg.setSourceEntity(137U);
    msg.setDestination(6722U);
    msg.setDestinationEntity(110U);
    msg.id.assign("MZLVFZBAYWNDVTICXXITWARRJDTUKDQ");
    msg.feature_type = 239U;
    msg.rgb_red = 168U;
    msg.rgb_green = 40U;
    msg.rgb_blue = 30U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.220407661107;
    tmp_msg_0.lon = 0.553300133121;
    tmp_msg_0.alt = 0.959415898257;
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
    msg.setTimeStamp(0.242116392252);
    msg.setSource(21323U);
    msg.setSourceEntity(30U);
    msg.setDestination(34099U);
    msg.setDestinationEntity(42U);
    msg.id.assign("ENTLQGSJFQWDDOQSGTQTOMVDRUOZDAHGIVNEGEXVBKZJFANMEJGRPRZVGMDXXVLZFBZDMNXTBRMFKGPAKMQQTNJ");
    msg.feature_type = 203U;
    msg.rgb_red = 251U;
    msg.rgb_green = 251U;
    msg.rgb_blue = 42U;

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
    msg.setTimeStamp(0.744347779482);
    msg.setSource(42865U);
    msg.setSourceEntity(132U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(12U);
    msg.id.assign("DVYKGNMUQBZ");
    msg.feature_type = 234U;
    msg.rgb_red = 228U;
    msg.rgb_green = 163U;
    msg.rgb_blue = 44U;

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
    msg.setTimeStamp(0.194258465166);
    msg.setSource(7692U);
    msg.setSourceEntity(188U);
    msg.setDestination(46688U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.16821796949;
    msg.lon = 0.66360436085;
    msg.alt = 0.725306945184;

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
    msg.setTimeStamp(0.594474852062);
    msg.setSource(374U);
    msg.setSourceEntity(70U);
    msg.setDestination(34503U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.67691152756;
    msg.lon = 0.656338955292;
    msg.alt = 0.722789654477;

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
    msg.setTimeStamp(0.160909160396);
    msg.setSource(20975U);
    msg.setSourceEntity(75U);
    msg.setDestination(30772U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.929289588628;
    msg.lon = 0.258020447292;
    msg.alt = 0.546009982322;

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
    msg.setTimeStamp(0.327958420235);
    msg.setSource(56021U);
    msg.setSourceEntity(235U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(191U);
    msg.type = 106U;
    msg.id.assign("JCFJNDMQBNPSWNGELFHXROFJIRDXIIIHRGCZNAEQJLOLKMDIFOYBHFODMCIKZJAYQQWHVTBWGBYANAIGPHNEZYFOKCMJQPEAPCVLOJZFRMXTLTDMXYTUXSYBTENFPSVKBSQAUQSQDTNDVUU");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.382701274822;
    tmp_msg_0.dist_min_abs = 0.967008504852;
    tmp_msg_0.dist_min_mean = 0.129210390537;
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
    msg.setTimeStamp(0.392349103679);
    msg.setSource(46331U);
    msg.setSourceEntity(101U);
    msg.setDestination(65224U);
    msg.setDestinationEntity(177U);
    msg.type = 111U;
    msg.id.assign("DOAQFPXICJESKODJYJTJTMARLUEEQYMDALQTIKUGHXPAISTSHIAPCVCOIEGCVMRQWIBIVOFDFKCJKVPTR");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.0997502008355;
    tmp_msg_0.lon = 0.606413468965;
    tmp_msg_0.z = 0.583652139628;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.701709807676;
    tmp_msg_0.speed_units = 60U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.244267205161;
    tmp_tmp_msg_0_0.lon = 0.341120769992;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("XPSPNBAMHNNPAUUYJEGVWHZLHGCTGJPBZQQFSNSTAXBFMHYVGUBHOLHTDEMREMOMIIDSKWLLAYFUGXKNKCKKTMBWRJZPWPTJWHDTNYADSYDJOITLPLCVXKCJWRXLZFEDNYORGUEZAO");
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
    msg.setTimeStamp(0.557211821606);
    msg.setSource(58483U);
    msg.setSourceEntity(206U);
    msg.setDestination(40107U);
    msg.setDestinationEntity(195U);
    msg.type = 231U;
    msg.id.assign("CETIOGIVQXTZZPKACWEXSGROSYIDSAEWYWASMPFNOPSNYOLXUOQRLQHTDMPIKOMUQQYXAUDGRVUXINTVXUBYFWFLWLGNLNJVTDNWFFIAJEJPGGVUDEHHZBRRAXKXVPTUGUMSMYOUYWCULQKIQIIFXJDFWJNWTGCETLO");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 253U;
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
    msg.setTimeStamp(0.243303920181);
    msg.setSource(337U);
    msg.setSourceEntity(210U);
    msg.setDestination(14131U);
    msg.setDestinationEntity(118U);
    msg.localname.assign("ZQMLBOEVZNEEUFFHCJYKGKJSJEOHYSGKQIVEMYRQYQJJPDTZPLVMELCFUJKIKZLYEHWDDQDDGARQPUVBXHOUCCGTHJJOAQBVNPYFDMTSLJFYGMRANWJTPNHRMNONXBNBLGQPURPAIXUIVAZXHVGBDE");

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
    msg.setTimeStamp(0.0425407541681);
    msg.setSource(14978U);
    msg.setSourceEntity(182U);
    msg.setDestination(51947U);
    msg.setDestinationEntity(231U);
    msg.localname.assign("SMWKTCOHJLEWOGSXHHVOZMNEEXMXATBSBINQPUNFJIKMIYEKSIVHYDKTYDPUUQCXMDSJAGNDAXMZNVBIYEKGREECVWQKFUIXSISMBISZALCWNAGZVRYAOOBJTCJDYYJTGGPHYNPUVSQLBUOGLWQKMPLKJBHFZTXASZPVNLIMZDETRTMDRVLLRPZCZBCGPDUEVLGUUJQNRBQZPOOEDWKKUH");

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
    msg.setTimeStamp(0.60641514573);
    msg.setSource(36253U);
    msg.setSourceEntity(100U);
    msg.setDestination(29812U);
    msg.setDestinationEntity(199U);
    msg.localname.assign("XUDGBHJHMIAMQEBMLBTQSFOSXDLJUHCTYDJSUQBWPOCDPACLFYZZEXQCFFZKCPVKLPOBEVHZSMAHREIZRTXARQRGIAJIVXQWFLCVJMIXCWTWBCYVSARXSUNDXSGFGVRSLNWNRELWQEESMIHVUTTZYFUABADVRYIRAQGNLNPYJOKGGYRCOSGPMMDVFFDLJZPKOQOIPDXIMBNAGB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZNSYLKPUFXPIHQBXRGBOLUOZXAOQULXNWOWHZFSEBCTLVTKTAYVECWKRUSHYGRWJJQYPDQIDTZASYXBBNWQNGDFWZOEMLVARNRDVAPDOFFURKCYBSJSGFAAMKXTTMUPPVZTVIRMUPZAEER");
    tmp_msg_0.sys_type = 104U;
    tmp_msg_0.owner = 34384U;
    tmp_msg_0.lat = 0.829148203071;
    tmp_msg_0.lon = 0.506489019663;
    tmp_msg_0.height = 0.12371446693;
    tmp_msg_0.services.assign("RPNKVGGUKSFCZHYSWOLLJDUCFRINZQQUFOREMSLEPLLFZMFSIEHSPCUKKOYOOZDRAYBIAPXMZAJNMEFPAXLGBIRNRHKCRNMYJMTMIBWHXXRGLTFVDPSETQMGJAVBNZIOQTLQAWRYOJSEXSNIKVHKQOCDDKWSYKBX");
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
    msg.setTimeStamp(0.958294666637);
    msg.setSource(28534U);
    msg.setSourceEntity(141U);
    msg.setDestination(18412U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("PHYNITREFVVBSACAMOWSBAOZCEABUBOPPUKYFYLUSFDCWGERN");
    msg.predicate.assign("FRXEMQDWBBROL");
    msg.attributes.assign("HHVMMISPZPEELQBIJCWMTOSFJSHVOBSCOWJDLURKVRQSWYUPWNYDXNYSYOWFAEACITDVAUDLEUHPWVQOBRCYZHIBAKEVHNBTUQJOFJNFJXMZGGEXLNKY");

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
    msg.setTimeStamp(0.613498056702);
    msg.setSource(27332U);
    msg.setSourceEntity(123U);
    msg.setDestination(53871U);
    msg.setDestinationEntity(112U);
    msg.timeline.assign("TUQPVMOGWVXXCJIDXLOUFSYLHTTNEISNDJHVSWCWIWRUINFAMQNYHAQNJMEEFHUBAKKAOKVGXQXMPXILUNAIZUOFKMRMXQIBNJPYHKGSPWEODAORQFYTSVWOPANEBBZBKAUWGFFCTXRJHVVXLDNZLHZLKJVFPFGLZCJWCFBWDDMWIYHIQHDPEYGJOCUIXVJBEDEZAZRTUBGQZPPMLKKCTVZRSQEUSPANMTTYLBE");
    msg.predicate.assign("BIDKQSDGBYZJBIQAWPYPDDCCLAFNWSPGDRJXZUNCTNNDGXQGXUIELAVZUROGVQFWYJKBKAPHRFVXJPTUQXBYIZBIEEDOWWHHTKXVEMHEJRVWOLSHR");
    msg.attributes.assign("ABHRLDHUITRUWJPLEKOLHZYGPOVMKAICKZEDSMBDLSXKESZXOUZLEUPNVOYFXRQDZQPKAWVSKTRKCEWOXETSBRPYOZHSQMMWFMMJEAGHYTQNNYNUHNWZGUEYGACTZJGJQHQIXFDJNKMIUAXMOSBUQAGLZCSXCCTTIDGWPBNJFIDEQPVDWVFFNFMYQXPCBOYHPLJCBIKTYCLIVRWVLFHXZAWNNJTCWDUTBSRMOVR");

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
    msg.setTimeStamp(0.532992332519);
    msg.setSource(30144U);
    msg.setSourceEntity(90U);
    msg.setDestination(29393U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("UYYHIQGZYQPIBJGEXWERIHGJNNRHEYML");
    msg.predicate.assign("JPRTYBKGDRVWRFLRZAFDWXSQEUSSMRBKPUWGUEHOGECIPHAQZRZDMVIOIGTHPWJYBGWIOMEPMNLVVWOPINNCMLLTCDZNFYANTGFOLGAPVDJBCQVEUXHIWJPDJZNVJZHCLXDGJEWWYZXYZBXDVCAIUANKRFKTOYAYBYKDDKUSHHMZPLUSMTIFQUJLCBFOLQFYSEXVAXYSMKHSFGXTFNGUJWQIQLOHRRE");
    msg.attributes.assign("KZDIBPKWLRTHYUVGAVQAXJGQERPBHFFXGHVOLJQCBIIMLTGXIJFKDFMHXWBPZMIRCZMRJFLQCPLAYIEZJRMYDDIBXSOFNKWUYEAVOEQQKINHMROTGZLM");

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
    msg.setTimeStamp(0.826430167733);
    msg.setSource(50008U);
    msg.setSourceEntity(71U);
    msg.setDestination(49815U);
    msg.setDestinationEntity(128U);
    msg.command = 89U;
    msg.goal_id.assign("DGEXLJNSGTDUZZQIEHSMBXNGPCKGBLHOXHTOLCIFOASYFCHVNOSVZWCOFQDCKEUQWTDYAWZLKTJCAIXRAJIPNCQRQTYJEHGJNCIYPVMWYAOCXTTJAVBIWIUEMPYZIKZBQWPKAVMZLGEWSYMRRBOFGBJNXNKAFZKZRCLBUATTMJLDJGUHYXSDDFNSBHEDQEQKDFSPWUQHRRYPULPQRVEXVBRNSWTAUOHZMF");
    msg.goal_xml.assign("JUYUQBYHINRKSQSCARADJHWDRVGDPNEIGBXLBVZLVTNWPHOZXDOKSPUETRMBFMMBKNJYQHOBLCPHUUGBAVRUYHNUWJIVXUMOPGWIRMGRSCMLWVLXFDRVGZKZGNBMFEKPSBUJNHKJPZLIHLOCHLOSQEQZOCSATIQOUDAETQTWJAXJKEYAAWXSFFIYIVGWDYDDPXVCLZMFEYYBTZENEFLFRKGEXOCPWSGNWSXJKO");

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
    msg.setTimeStamp(0.0291877671458);
    msg.setSource(48262U);
    msg.setSourceEntity(131U);
    msg.setDestination(26204U);
    msg.setDestinationEntity(114U);
    msg.command = 184U;
    msg.goal_id.assign("RLSYSLULKMFSHIDIQVBVPZDNDFSALDUEIXKCRPXMDHTAREWVPTZRBUYDTCGAAQCYPAAUZMRXINSYQOJJAMKDOOAPITMGEHJEKGOWVWOAQZVZFBEQOQYQTEAHMNRMUPEBCWXFMJEYLWFNYTBRLQKVIWBKCC");
    msg.goal_xml.assign("ALSLWRYVGHVXQIOHKAKOVCBBSZCIIQHRWPCMJVQIXCONYTGDUQVHFLNPUBAMLSIAXUXEETAGNMKICRKAWKZJKWJOXL");

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
    msg.setTimeStamp(0.318556364768);
    msg.setSource(37360U);
    msg.setSourceEntity(226U);
    msg.setDestination(57715U);
    msg.setDestinationEntity(212U);
    msg.command = 183U;
    msg.goal_id.assign("OMRLZCWUKUJHKFKQSFRKQPMBRPXANETYTWSXGSCIHCHQBEDVJVXGLPDNTXDNOHYXOAULOBPQOIRPMNAZJRBEQSHLUNYEDSFCNTBNQCCLUPOCWCDQTBWCTQGPLTKADXBYFKREHKQGTJFNPQJAOIXCKMIHDJAVDRGOIULSWIWJOGBPSTZBXNFKWGUYXVLWSZ");
    msg.goal_xml.assign("INJWAWTNNOYTJOOSLOZUUYCTVPMJTYOHJXLKXUGXYEQUCEHICBEYESVFFVPBMEMCVPBPKVIHZDRKWB");

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
    msg.setTimeStamp(0.407016799568);
    msg.setSource(8337U);
    msg.setSourceEntity(84U);
    msg.setDestination(1001U);
    msg.setDestinationEntity(79U);
    msg.op = 138U;
    msg.goal_id.assign("BPDMIGMNGIAEBSRJUMFMVDEOTWUNSVVTYLSLGHGOWUMX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MCIUDUJFRDGUWISNMCACCHRQVZUHOYHTZXWBUJEDUKCZTPQWOVPOZSUMSIJMTNYHOOYYLQJWIKMPEGTXGXBUBKVQYAOEONEJMIOANDTRPNPRAWSZQFBXVLCSCXNVMBWSFLJWDGDKIQTRVWDDHXQFFKYSIKYQMGLZHJOEHIJRPARTMZWAYKBRLLQCCVBZFLYBZJTGXGDEAGXBKLVLEAMYNFHHGELTVUJAXGNFPSXDFRSHK");
    tmp_msg_0.predicate.assign("EQCFPGATUJHLJERKPOIEKGNSZCIHUJTKMFFUFDTXCXWFYLEMPONALQNGKENVYWDOMVGARFTPJPWQQWSDHPKINFKAWTLAXONRBAMSYOZJUITLPYAOZNXPHEFKMEZKRTOITRMMVBBCZTPCILABJLHS");
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
    msg.setTimeStamp(0.992293320094);
    msg.setSource(45969U);
    msg.setSourceEntity(231U);
    msg.setDestination(45496U);
    msg.setDestinationEntity(43U);
    msg.op = 94U;
    msg.goal_id.assign("LIUSZFAWKDWTPUJBYBHEMGAZMTSZTDDLOVEOYSTIUXIHKAVZIYGPTDYNAUWEPHOLPOXLIUDKQKJXWEYQEOXSPQYGXWJOPFAPUDZJW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JWUSEBCHQNKDZBUZELSDXAUTGROBAEIGLCXHTUXYMMOFII");
    tmp_msg_0.predicate.assign("FDZFMTSXPYHVKZSNCVRNTMUSOADOTHSQRHBFZLKPUTEZXAWDEZDWZJGTPMNQZXJLOGSPMICUERCWLKNRKNDJANYPMIWPAUBFAXKPRHYHHINFNQWZIXXYQZCBKMOYQRUINUJAQLNKACRHODYGRVAPGW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UKOBKDBGFOWVGKXLHYNUBNIKBXOGCEFMUXRTTDNDVQWVEIHGHNSFPONZJCUMJPLNSPCYZSXRBUGXFLDTWWZAJDVSGPLRBOSDXPEMYQIOFWEZFYNUVMJQRTNWKIIDBDIZLSGEJXYVC");
    tmp_tmp_msg_0_0.attr_type = 239U;
    tmp_tmp_msg_0_0.min.assign("PNCQUDGXEPDWTFDSEACLKXLHSGUCPPYPVQLTVWEGMRYJQOLVYICZRJOPNHOFHGBAIVRKTVXNLBZGIFMKZIQRKTKUSBNOQJELTQGKVZXIJBBJHWDSGXDHCCMWBSIYSZSRORRWRVVJUUYOGSRBFTAUTRNYFKMWNBEUEWAMVBDJXAADEWMBZISLONPGCTSQKYXHOWKTVDIMZAAZF");
    tmp_tmp_msg_0_0.max.assign("OWSDIRDVNHXAVEJIOJUFMAYXAYKZQUHTBVHEHWQEJHOGYKWXPAUWNKNFMGGPDILHQQIEKLCXGZCYHKCHFQEFIGPJNYALPRBSAZVJZFJYBWRJUCZWUJESBBPDRXLMRQOFZTNGBHMRIOSRUXCFSNAMKKTUWEWWBQYPDSUULLOTMDCDKUETXRANZLLVNFJRRGJXSDZVTTOKOPGSABEXYDDITOKHSQOFTLVLYYMXGPNGSCVAMCQWIIITBPVB");
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
    msg.setTimeStamp(0.12092174853);
    msg.setSource(3608U);
    msg.setSourceEntity(202U);
    msg.setDestination(18883U);
    msg.setDestinationEntity(217U);
    msg.op = 87U;
    msg.goal_id.assign("JSWIUCMIZRYHHVFJRUJCKCGTAUNZNIHAOSMTVFBYRZCXWLQJYUPJZCWZVWSPLPPORIYYZYHGYEAXRLIHBJUNNEJYTPLQFVGAFVAKSIPPKRQZLDCNARSEDDFCJTIXKQVSOBDXIMQWPWBSHTWVOBDQREQNKHZQOGG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DIXMJRHBUVMDSICCENOKPBVXBTYJSLUZNAIQTZGEQKHQBFHGSUJKAEWEOPOIWGLKNANAVQESLRRAIBNLUFCMKWWQUVMLQJLYHWTZVD");
    tmp_msg_0.predicate.assign("AVHGNJFWZFNZCIZMYNHGEIRLAKDRHZLFEZAYOQRUIUTDEVEUDOIOFPEXKXDWMSJQKDGQMLWYTQFJKTFGSBAGMBOTSDELXWUBANZYVBVMRLTWHURCDSZTQUXFSZVWACSPLXXVJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PMGQTZIBWFXRVHLQYXNKYVDRQGSIHLHFIIJAOMJUROADYTGZZFMREBEPWUKGTFYFJSRIFFUUTXAVWWNNHDURGIVRAJAMXBQFMGDKQJQKCGKCBOVACPONBEHUCZXJVDTSSHPPSOZNZRBHPCA");
    tmp_tmp_msg_0_0.attr_type = 246U;
    tmp_tmp_msg_0_0.min.assign("BLAWFPLEZJJNGECVYMHGKZGGOGXOSZWUJBSJUIPHCBQMCRXZHEBKWIDPFIVCQPETLRJTPZDHQWNZUARDOIYRNVYFCVWWSVXMRKNIOHKALFTSASXUZKQQLMURIXFXBHLVKZOMEYULNNQQXXNUKAPHGDFODFDLWLWZSPCTNVPBKBGMYEOFOIRDYMMOI");
    tmp_tmp_msg_0_0.max.assign("XDFOOTHFIJYSBQBCKSJREHJQ");
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
    msg.setTimeStamp(0.370230322903);
    msg.setSource(54755U);
    msg.setSourceEntity(53U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(59U);
    msg.name.assign("QHETKOQZPBUDPLWHTTAHEUQBOZOJFOCVELIFRFMQTLYNHGIDYUKIWPOFGAEEUFPYYRFWRQZHXCRCNIICFWJSAJSDFBRXDACKVBOXLGBWZSDVYTBCNAXWPMNXSWVBMUVXVNGYPAVCTXWSQKJRWDYUJEFDQCVYLWPL");
    msg.attr_type = 9U;
    msg.min.assign("ZCTWPNEGJXHBJCSTZWJTREWFTGAGMWMBDIZRSDVRHBONYFYVVMMADGANYPHYVIQMYFUNSCQFKSTOIKPVOYCQAOZIOMSLCXOGRGTNDPMAPUFZNXBCLPETYZJHGTKDHVQLEWQEDLYUOREVMKCEOWKPFNLNZDRGHRPTUCQ");
    msg.max.assign("QKHXPZUOSEEEMHFVJSGTLEYTWFFSIDNYFKWBXBRPLXRAWHPAXAKSLAZUXVJIYRNBNXJGUJNAYGIYQIFVPIMXMKBKNCRUWOQJNGPYIKKGIFLABPHSEPMLEKCPIFATOVVXOUWLERCMWSFADGNWHQLJQRDJBKHRBTZQHYZZHXWIREDLYIDONCRZFVHATZTCU");

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
    msg.setTimeStamp(0.781646291706);
    msg.setSource(44748U);
    msg.setSourceEntity(176U);
    msg.setDestination(28105U);
    msg.setDestinationEntity(37U);
    msg.name.assign("EFWUBQNDIHSTWUWTPVXBGJDPLZWJNSPOAWSFNQAIEKVQJDHTNUZMQAUKCGYOJICKEUSXCVCRPBTVVPCGBLJKZSTPOLALRSNWAJXIPRKPYLUEGQRXMMUMSLKZNNYUHFIDHKYHTXMWUCNFQOZXALGFYOXVQQEHFRGMFEPAPZMROZYKTGRZSSEBCSBIHFBREHALRWLNDRDZYDOIG");
    msg.attr_type = 76U;
    msg.min.assign("ORUWLVNJFYEGTEKDVZPIFRSLKNCCEBQRUCICDAKJHNPRHJRWEUBGLIQWBZPJUWFXZCIQTBZYXQETRUDCSFMLFDSLHGMEZWLIHGBLFASZYGNIFAVTQUTMHAPEOODKWHVQAEDMQNRDSSXYVLIXBMBQOTTCIFHNAZRJDOYYSNWHOTQPKQAVYXJVUJPSJYCWMBKYVLYAONHONAKSMGMLJZOBHTDPWZ");
    msg.max.assign("SIPRBIXWYPAJVDYUONYEEGCYCQTVMSCTAMLXZQBHSOVYBFAHAFRR");

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
    msg.setTimeStamp(0.988905738045);
    msg.setSource(44841U);
    msg.setSourceEntity(72U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(225U);
    msg.name.assign("DIVIEWAQKJQGYTNZVXAJWUYNDWFMNFUGTLCHKFDKPIRJDZPEQXORLMTOICMRLVYUKBYMPZQAAURNNLGLVHKFYVEAVVBPCNNXJDCRWKCIQEASQVTSEOTICMKBQTZFHZAABZZUSRXEBSGXPXGJKTDRYCQUMLZCJPDBWUIZGFDNHPHTYSMSLEKPLOJOBPOMWROQRDMCUSHFTEWYLJGFMHXSJGEYKQTUUHLOGCBWOWOH");
    msg.attr_type = 221U;
    msg.min.assign("WLPETFYIVPVRUBYOSROEUIGGJECXELZDQLVPNCJPQOMQPSFCQRVNFDLMETWYYTYYIMUHEDXHGSAXXDDKAVREGUOHZXFADNZVSIKDGQKFNJPZPDKQJYAMMAAOFHIOQCHWZBO");
    msg.max.assign("ZFYIREBDAEJUPUOYECFXWALZBMUPHC");

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
    msg.setTimeStamp(0.0457265918445);
    msg.setSource(17707U);
    msg.setSourceEntity(38U);
    msg.setDestination(40059U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("QVLRBKWNRJKQGXAEBWDUJCIPTBNKSHOGJOEYHOXWFNXZXVLYTVLDAEYXZCJXAGGZGBEAXNCWIWUGOUHZUURVIPILPAPIMNCSJQNAMPCFEQQZTESHFKUJVQYCUEAJTPTKLLOMPSHVMZQGNASZTHNNOXQNBPDMHFCVPMKJGQDHWTYGSTRMRRVZJZRMKMUYBDCIXRFKYWOEOEBJFBWRUIBDMQZXFSWAVDLICWIASKHD");
    msg.predicate.assign("RMSAZSRMCGCVKJXGVFGOBVIUQHDXLLJQKHLUFGLUWNPEIAQQEEZCYGXZASTLORBJIINTNBWJZQLMWHWDJDZXXFLLNUAQHMZJVITXQCWFESMSRKAYZSHOTXYEYPCOKAUSAPIFODDKLFINMRVNPIOPUJZMN");

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
    msg.setTimeStamp(0.474485456651);
    msg.setSource(35672U);
    msg.setSourceEntity(51U);
    msg.setDestination(16851U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("GEIDDNCBBHDXNFSJWCLOEERDBQYXUUNEAJPKJBFNQWMDSJEMUIJM");
    msg.predicate.assign("WCVILLJJLDPIZTIWIQSGFCEHQXEOWOBHATQUQDRPLNYMLHYOTUUPPERDYGAUZWLMVTJHQJFDSBVYYBMBWHLMFVDZCAVGPIOUEDOZSJNAFBTXDKHBMQWQCXVKNGRWFJRGHTKSNZXEMZBVERXWKISCKYROUPKSLOGLKIRXVNXLPSXACSHGTJZGOVKMEPIACFBUVUZWPQEYNUFGONIOXYAPBRTJWTXZFHQJUSCFFDNJKSDYAQI");

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
    msg.setTimeStamp(0.0909707514296);
    msg.setSource(2269U);
    msg.setSourceEntity(16U);
    msg.setDestination(27142U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("AMUIDQBXRYSOSOGJTBUQCYWTVBEDHKLJCEYSIVNDZCSDONAQEGSBCIYCRENHEKAUPLVVRBTBCKJILUNFYVTTNBLWFLYGMLAHPOTEJFRVOSGURQIHQUQDHIZZTVJFQSKMZXQNEEKPVMEDAWGBMMFXIWCIROGXARAZABSTUOSAHNDKGHYUDHVPXPOZFYXBZLW");
    msg.predicate.assign("GAVEEJNOCOVGTNZLSTFEQOVCYMGIJNHFYRTHBJORNMKUWHNJFISZCSJXTODUIOHKYAVLGLZMDMWJXPIQEACLRUDMHLOHUZGDLPPXVUJXSVTJENQFBKCETMEZYXSGTSKMFOUYPPTRKWSBIGNBZIAQDEHNXFXQAKIDYJXZAWPPDSFET");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CVZQZVXXHNMLNEWJVGTGGSAHLIBAYFNKQMMVLXKLYBFWUOUYOPSAFFQEZCJMAITRODDJBKIPGTRMUWEZGBKPZTIMQUVHLCJWCPZYTJJTCXJOQGESKEUZXJIUHDKSRSYVRQFPUPRRYSCNHM");
    tmp_msg_0.attr_type = 138U;
    tmp_msg_0.min.assign("YHLXBTUKHUPMZXTDJRMMCRIAZSFPSWVABQEBKCUXCXINDPMRENZBW");
    tmp_msg_0.max.assign("OAZKBXPUJTJOIVUXUWHUEVGJGGNQMXXUPLAUHLRASFEQXWMLTLMGJBVJKDIITNWZCESEKNIKALCGJBFVLAPCZOKLMXHYQEXRBMCRGBCDGUWSBEDHYWRQVCQSQMARTYSZFSYMYXPZTBRIVKZRZNEFUWDIEFIDHTMDOQRYTPPSQFWTQHSCZWPJFCJBNMYJKPISZGGQELYFORVVPADAWUYJBALHOKRTLHBFDOFHOYVIOVNXUXCDKTNWSONGKC");
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
    msg.setTimeStamp(0.733921105223);
    msg.setSource(35579U);
    msg.setSourceEntity(209U);
    msg.setDestination(25915U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("KQWQHXBFIIDEWVCSPNRPMRSAZLSTATOHDMLCGQOCJDFR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KJLCSDSEKZQOXTZPJEMUBRDRLRKGTWPWXJONMALQELCWNFGJAHNYFDLAWBNAVXSUBQKNSYQYPVYLMGFMRYILWONEEIUTRKHXCOSSJBYSRWFMVHVTIYGQGCYDHCXTUJHDBZVFDSGOIAMBOXJZEKDQIYESNZVKIJUWNIPFXTGCRPMLFVFPZRITMEVDNSIAUTKYAGOAJKZBTNPHWBHZFKUZGCLXXHEQHUHVOJRGADVWAZQCP");
    tmp_msg_0.predicate.assign("FRUSSPXDFLJPNPHCLRXZEOKLHGMLJPERPSYGD");
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
    msg.setTimeStamp(0.566275057346);
    msg.setSource(42452U);
    msg.setSourceEntity(81U);
    msg.setDestination(45390U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("DDAMKCQJHZSCFHWPXRRVTKJGPFXWTUVGAOCENODYOSHWTIIFKZIJUCXQFSPXMEHWYNCEIFEKMROLLCGMKDEGLAVEVIBDOWLVXULIZOITBUOAPZFPDCYHJLSJGBPJPVSWKUDYSJRNWVAQRNHLBMNIUTQEHQUADANZEFXLMTVOXSXXGIRGBS");

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
    msg.setTimeStamp(0.0425265094555);
    msg.setSource(38469U);
    msg.setSourceEntity(183U);
    msg.setDestination(51776U);
    msg.setDestinationEntity(120U);
    msg.reactor.assign("NVTMHOJDVNUKFUSXANAXGCXSTDKIRRWHJXCDIVAQ");

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
    msg.setTimeStamp(0.432068188516);
    msg.setSource(30377U);
    msg.setSourceEntity(49U);
    msg.setDestination(47970U);
    msg.setDestinationEntity(179U);
    msg.topic.assign("BGZUIEFLKLDIPNTUVAQXLGMVGZSAWPANYXNWMKCKDPDFAEPZXIJMXNFSH");
    msg.data.assign("VZRRIIWBSNJDPJOCZENQGOHDCENRHMUOFGGKOPXWSEEPVGZZIRYWUPPWNFKXQFHZKSXFSSLNDCLNRSFMATMYWCAOOWVYEVBACEVNTALLABAPGTGNZQCIVCUMTZMBVZCWNZYLAEL");

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
    msg.setTimeStamp(0.838752027976);
    msg.setSource(51400U);
    msg.setSourceEntity(205U);
    msg.setDestination(19879U);
    msg.setDestinationEntity(194U);
    msg.topic.assign("GEJTLMOKRSVQXCWTBJVNVGKWLEMGRFULEYTWSXWAEDMOPLHUAZDMLEWRGAVAOUZWUCRONHEHPPFAINQWIVFBYASSCYBIJGDFZADAUKYHQKHSBYNBFWTGCEBSAIIRHMPIKVCQLSGLUVRFETECRTVYJOJXTIDYRZSNHBKBNJIPUHDFEOMQXFMZQJFPNYYRQSZDPWQRMHAQJXXPYJOVUIBKNO");
    msg.data.assign("HNYBDFKJTHFOBNWYFNUQDIDBIZKMBFOHIMQTCDQGLKCKGOVEYALJVTENQCUIVPTKRXX");

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
    msg.setTimeStamp(0.647974631469);
    msg.setSource(9597U);
    msg.setSourceEntity(44U);
    msg.setDestination(2101U);
    msg.setDestinationEntity(253U);
    msg.topic.assign("SNNECOXUOIRXEDHTAVPQQBTIHYOIRDSDHDVSOAMYXOMETFYQKFMRCBDGTSGULNVVOLWQPEQLBZRI");
    msg.data.assign("ISLZFDZDJRNCOOBPRPRPJUVDIKCSEMMLHFHN");

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
    msg.setTimeStamp(0.778136136253);
    msg.setSource(60278U);
    msg.setSourceEntity(168U);
    msg.setDestination(28600U);
    msg.setDestinationEntity(128U);
    msg.frameid = 31U;
    const char tmp_msg_0[] = {-78, -93, 17, -120, -112, -5, 87, 83, 113, -38, 24, -53, -59, 32, 103, -95, -17, 118, 22, -21, 120, 7, -124, 22, -40, 111, -128, 110, -5, 109, -36, 59, 106, -84, -66, 70, -55, -89, -31, 114, 54, -104, -30, 18, 106, 47, 20, 117, 101, 73, -100, -77, -24, -49, 124, 123, -20, 113, -74, 57, 96, -61, 28, -73, -33, 8, -38, -93, -68, -53, -126, 111, 47, 61, -118, 46, -88, -68, -19, -32, 104, -88, -122, -92, 126, -116, -74, -75, -124, 44, -89, 123, -72, 105, -90, 73, 71, -125, -44, 97, 56, -74, 29, -97, -3, 78, -112, 87, 39, -95, 46, -42, 95, -9, -61, 13, -36, -20, 19, 42, -73, -118, -86, 24, -5, -120, 18, 89, -105, -61, 36, -83, 57, 108, 51, 80, 35, 7, 7, 55, 78, -59, -127, 36, -40, -27, 75, -62, 96, -112, -86, 49, 120, -7, 7, -60, -123, -28, -74, 67, 38, -62, -110, -20, 76, -67, -17, -25, 93, -97, 23, 118, -16, -16, 84, -93, 99, 23, -123, 63, -16, 13, -46, -5, 28, 47, -58, 54, -87, -61, 72, 105, 23, 108, -111, 83, -30, 25, -126, -68, 40, -2, 31, 126, 72, 83, 8, -114, -82, 9, 36, 14, -4, -75, -59, 19, 103, 52, -62, -29, -31, 112, 30, -80, -127, 5, -32, -67, -121, -97, -9, 3, -75, 112, -46};
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
    msg.setTimeStamp(0.277671676782);
    msg.setSource(33631U);
    msg.setSourceEntity(127U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(227U);
    msg.frameid = 46U;
    const char tmp_msg_0[] = {92, 66, 74, 28, -23, -96, -1, -42, -100, -93, -67, -108, -59, 123, 15, -79, -66, -65, 60, 31, -86, 114, -79, -112, 101, -115, -126, 2, 70, -86, 68, -115, 120, -86, -106, 63, -21, 55, -25, 19, -14, 63, -106, 124, -100, -90, 7, -72, 89, -101, 56, 29, -19, 106, -96, 109, -4, -116, -114, 124, 13, -112, -92, 78, -68, -110, 55, -66, 123, -68, -120, -23, -7, -7, 76, -73, 111, -46, -88, 103, -61, -94, -73, -66, -18, -9, -61, 55, -58, -68, 103, -55, 16, 41, -90, 87, -83, -94, -24, -17, 59, 104, -93, -36, -124, -1, 73, -3, 81, -95, -91, -69, -93, 65, 81, -57, -30, -16, -80, -68, -55, 33, -14, 100, 48, 37, 81, -113, -89, -117, -119, -70, 49, 73, 83, 38, -12, -61, -48, -5, 31, -4, -63, 12, 34, -78, 69, 66, -12, -64, -93, -12, 85, 71, -11, 7, -56, 28, 15, -76, -109, 125, 23, -101, 49, -64, -125, -58, -5, 107, -24, -64, 89, 121, -54, -42, 28, -60, -32, -44, 103, 28};
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
    msg.setTimeStamp(0.656463903424);
    msg.setSource(11226U);
    msg.setSourceEntity(120U);
    msg.setDestination(12886U);
    msg.setDestinationEntity(173U);
    msg.frameid = 135U;
    const char tmp_msg_0[] = {113, -124, -112, 108, -121, -112, -34, -110, 51, 24, 42, 121, 28, 117, -99, -9, -68, -63, 73, -71, -34, -11, -70, 120, 112, 2, 22, 108, -78, 42, 87, 20, -87, 101, -15, -109, 31, -5, 97, 91, 40, 75, 53, -4, 80, 18, 20, 58, 12, -70, 47, 34, -12, 114, 44, -68, 76, -113, -64, 57, -69, -108, 111, -90, -106, 36, 82, 80, 57, -93, -75, -84, -89, 92, -9, 108, -28, -94, 10, -110, -46, 34, -52, 7, -6, -46, 89, -89, 60, 72, -126, 119, 114, -27, 35, 17, 93, -82, 12, -96, 45, 111, 37, 18, 44, 35, 35, 123, 120, 113, -124, 96, -117, 78, -23, 77, -11, -64, 126, 124, -73, -107, -106, -50, -7, 122, -128, 54, -43, -3, 29, 117, 85, -30, -8, -62, 40, -110, -95, -95, -121, -73, -24, 48, -86, 58, 21, -80, -14, 100, 82, 87, 81, 86, 123, -77, 57, 96, 19, 19, -118, -108, 45, 32, 51, 21, 10, 78, -54, 84, 67, -24, 107, -88, -121, -1, -110, 65, -25, -17, 126, 96, 100, -116, -42, -89, -56, 120, 111, -109, 42, 114, 78, 37, 35, 1, -89, 96, 33, 80, -82, -27, -115, -31, 8, 8, 43, 112, 119, 6, 0, 56, 1, 78, -41, -78, -46, 109, -125, -123, 46, 1, 36, -107, 46, 37, 48, 68, -26, 99, 43, 122, -89, 78, 93, 40, 40, 68, 57, 99, 86, -53, -46, 29, -2, -103, 124, -30, 59, -32, 9, 79};
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
    msg.setTimeStamp(0.998284037134);
    msg.setSource(60952U);
    msg.setSourceEntity(125U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(182U);
    msg.fps = 98U;
    msg.quality = 3U;
    msg.reps = 226U;
    msg.tsize = 35U;

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
    msg.setTimeStamp(0.205245280078);
    msg.setSource(30534U);
    msg.setSourceEntity(158U);
    msg.setDestination(17390U);
    msg.setDestinationEntity(151U);
    msg.fps = 36U;
    msg.quality = 165U;
    msg.reps = 78U;
    msg.tsize = 167U;

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
    msg.setTimeStamp(0.70597298162);
    msg.setSource(44284U);
    msg.setSourceEntity(135U);
    msg.setDestination(16562U);
    msg.setDestinationEntity(126U);
    msg.fps = 26U;
    msg.quality = 156U;
    msg.reps = 189U;
    msg.tsize = 133U;

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
    msg.setTimeStamp(0.975163470468);
    msg.setSource(45545U);
    msg.setSourceEntity(209U);
    msg.setDestination(33386U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.0602767225636;
    msg.lon = 0.687748950772;
    msg.depth = 137U;
    msg.speed = 0.891800229902;
    msg.psi = 0.91316742526;

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
    msg.setTimeStamp(0.142939445051);
    msg.setSource(17570U);
    msg.setSourceEntity(189U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.191538036901;
    msg.lon = 0.171564907545;
    msg.depth = 22U;
    msg.speed = 0.673456708938;
    msg.psi = 0.711402354868;

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
    msg.setTimeStamp(0.0311537114484);
    msg.setSource(37655U);
    msg.setSourceEntity(233U);
    msg.setDestination(16939U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.863932000368;
    msg.lon = 0.940832005694;
    msg.depth = 115U;
    msg.speed = 0.374966446611;
    msg.psi = 0.644534914941;

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
    msg.setTimeStamp(0.239087071219);
    msg.setSource(4838U);
    msg.setSourceEntity(224U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(173U);
    msg.label.assign("SSGIMARVBLXTZACFSNOVKHYNYYWWOAYLCUAPVSWKAYHXTOTLGZQQUGZTNTKPJMJETA");
    msg.lat = 0.464605663222;
    msg.lon = 0.766807251383;
    msg.z = 0.147557985303;
    msg.z_units = 60U;
    msg.cog = 0.177598976533;
    msg.sog = 0.919793838127;

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
    msg.setTimeStamp(0.81521202233);
    msg.setSource(25206U);
    msg.setSourceEntity(55U);
    msg.setDestination(1193U);
    msg.setDestinationEntity(184U);
    msg.label.assign("GLPWRDFVTZGYAWGOHCKAXODFTVSRXUWATTAHOVDIQZJCYYYYSGVERGEGIFILDWOLEMJSJL");
    msg.lat = 0.734855896195;
    msg.lon = 0.691860407249;
    msg.z = 0.269764179822;
    msg.z_units = 60U;
    msg.cog = 0.819063293974;
    msg.sog = 0.143958612772;

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
    msg.setTimeStamp(0.0598084133621);
    msg.setSource(41015U);
    msg.setSourceEntity(29U);
    msg.setDestination(22369U);
    msg.setDestinationEntity(147U);
    msg.label.assign("ZNKDVEVWYFMSTZUJGOIKNOSMVFKPOOCITVYSIHEXXQALQNBJAB");
    msg.lat = 0.373606262642;
    msg.lon = 0.853747438737;
    msg.z = 0.108181050695;
    msg.z_units = 36U;
    msg.cog = 0.698389205567;
    msg.sog = 0.404207187257;

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
    msg.setTimeStamp(0.948452221485);
    msg.setSource(54595U);
    msg.setSourceEntity(13U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(142U);
    msg.name.assign("ZJVBAXSFWIHEVQMDTEVQMCQCDSOFNRZRAFXWCIUXUDZCNITPFOJFGJYWAGSNQGXWOPAIOPOYYBEVNFBLJGUFQYSBRWQHMGRDXLGBZXDPPOOPYRKCCVCTDHMUPRYKSEMNXTYUBKDASTIUIL");
    msg.value.assign("ZMNXUIMQMYHVXLKPTCYDOLZZEUWSOKYAIQUWCEDGUMFTNGCZJLPPROFCSRFVVUQIMZISNIYKBAJBLUZSFYFHOXESRJFVFARRNTCQHQINKNEAESLG");

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
    msg.setTimeStamp(0.95350630248);
    msg.setSource(21305U);
    msg.setSourceEntity(44U);
    msg.setDestination(51105U);
    msg.setDestinationEntity(238U);
    msg.name.assign("AOUGYLGUNITQHPZGWXHNHWPTWYBZNFMWCOAIMRLWESCNYJXXEIJZPJHKFEMPARLVJFYQNCMMASJXCEFLIVDKOLBBNWTGKQQWFTPZDPQTTPUXGNARCRVTAHVPTVFXXQHOIDUOJSQUHZVFDERRJWPKURBODVEJFSGCSAKGOKJMAROOTDRBGGYFKWSSUIRHVQMZMNIS");
    msg.value.assign("GAVNSLGETNOITZPCOJTGALZGWEJFVLQRZULPOHZDNSWATDIEPWQWUBMNVQGCKFTTZNRAYKEZQI");

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
    msg.setTimeStamp(0.366986239075);
    msg.setSource(19937U);
    msg.setSourceEntity(94U);
    msg.setDestination(54122U);
    msg.setDestinationEntity(168U);
    msg.name.assign("IQZTRVYTYDM");
    msg.value.assign("SSDBVOKFFIDRELCFOZWFGDYPJRQZCNNJRGEWHLZMHQYFKERSJYGIBHOEOIDVJXKACD");

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
    msg.setTimeStamp(0.914181518665);
    msg.setSource(42106U);
    msg.setSourceEntity(8U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(185U);
    msg.name.assign("TIEUMIJSFNQEHJXLURVOSEITLJWBTQWDIVDZMNOGCBCRGFBBYSUEXBVTJWKIPPFZCLGOEWDFXXLWEGQSYXODOMXMVYULMADSRWVJNVLYNKEZJRDQTHKU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TNUAVNZHGYMQVEUBHTHOEJSFDWKNGNFIYAMOSODZQXNUXGBTGRIMVARWACBPZCBJQNXQMHIMBNERJJDXRGNOEKUGJZRDPTDGHIPSXLOCLKFYXKSBCYIPHSFJNKWZVSKQQMBZALDLXFWTFDACOUKIEDGROWHVEIZPIECFLJZFNKMFJLUFQVYYKHPPPYSCWHYQGUAJHTLMEWUMVSGTKOARTDWIDCUSYPVVVEMWOXRARL");
    tmp_msg_0.value.assign("QBRSXZQMDDGESPFXLOWXOIXJONXAFTUYPXPUFLJVUVMCHMOYNUIVITVADJEYHZPGZQZIUWHWEKRGRKNSNVIDTNOMKPABZCHAUQTYVHWFBYUEODBDBRRQKMEPLJGNQQOYICSKNZOPZMWVYRDFAEIULLBTLRQ");
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
    msg.setTimeStamp(0.112347957698);
    msg.setSource(64154U);
    msg.setSourceEntity(120U);
    msg.setDestination(65210U);
    msg.setDestinationEntity(155U);
    msg.name.assign("XGQPPQHZJTLMFSSAWDVOASKCXVHRJWNKFTWPTUUMFDPIDBBEELBXDOWMQLZJSCBERGDMPPKHMFVPAYYFJEAJKQKFLVIIVGSNDCKQROJNXLOCNGNAGRZODVTSXBRBNDPTGWHFUPWGEAHRLMHKWNFXRBUQYQGSXTIYHTIJYENLNMEUGYEJOLODKCZWLUZROAVUWNHQZLWVRIZCVJAUXUI");

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
    msg.setTimeStamp(0.0944866374158);
    msg.setSource(37983U);
    msg.setSourceEntity(111U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(116U);
    msg.name.assign("HDZYGPJMXCHVGCFYHXZPQXFHBWTEVFVYNQSXKNBGROANSXJAUEGLDAVSQQMTSSVQRABSVEMRTJILDHDNIZBLUBEFQCZBFUMGVKOKGDZEOIPRWMDHRUTKWXQUALBOXGIITJVBJWPLATPOWYINSJBVEGVLQXBQDIMPMXMYCNIJEZRUJLICPLKLNKOAFHEAGYWUUPNLHRCNMSDWYHJZAQFRZTCAZCUUWXFESIDHDYOOTCWKEFNCOZRYOS");

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
    msg.setTimeStamp(0.97639858528);
    msg.setSource(25471U);
    msg.setSourceEntity(33U);
    msg.setDestination(64803U);
    msg.setDestinationEntity(10U);
    msg.name.assign("IBZEAOACRDOYUYSOTBUTDCZEPSBXDNZMCXYWQWICP");
    msg.visibility.assign("TNOOOQLBMGZSHIDSIKKUEAHXSILVTYWVCMIMOLLYWDCMDXAONNIZGREPFSFKFWYYVZDKOHCZPESLYWYIJPQLWJQBHBEULDXRGCDNS");
    msg.scope.assign("AKXEUMOHISEAJYZHIWBWROWLVPVWYFACJAPRMSXC");

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
    msg.setTimeStamp(0.0911802458933);
    msg.setSource(37601U);
    msg.setSourceEntity(147U);
    msg.setDestination(11074U);
    msg.setDestinationEntity(175U);
    msg.name.assign("RTXLBCUGGWYXPFGVRKYMJZILCTEGQRBVRLEDUTVQOZOWRFSDNBIGFPLVBBHDEPHQZHOCTVEXOKNCNBAXSKHGKFMMGEWWHXYQMPJDQJANLSDZSTQUZHUPGXNLCEVIMJMFWXAPJUHKUOVXRYDIKWBTYFPQVCZIKFRXINWCWURKFGTNIAPKYQMWESILYAROHQZBMYJNQSJBWIDAHTDSEANEROCJCXAELZGUUNAJDFSSUZSPHMTBCVMJY");
    msg.visibility.assign("OPXGUQYSXQXILSXOZIJNFUMZQMFDTEROPNLNDTTAHDCOPATQYYJTIQKOZMQALIOHKGDGVUCFBEVCIRUWGMMHUUNFXKRCRDXZYSEEFAYSWWFPZSWBBJMWIYWIKFKJHPTGNDERHJSJSHXVZPCFEZRRZEYPEUNZBBCOIHNCAHUCSMWHMKGTYJXUJMWWHDVAIGRAQJBQLVDPGKGLF");
    msg.scope.assign("LXNZAVQSNGRKWVKORGIOWRLLATLZKQPNVHAIGDDNUACHKEIWCPASDYXPBSSODEASHZWBEKUPIPHXYGJVFSWBYGJOZKRNHWHQFFOYJS");

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
    msg.setTimeStamp(0.00455097550332);
    msg.setSource(18180U);
    msg.setSourceEntity(240U);
    msg.setDestination(33059U);
    msg.setDestinationEntity(229U);
    msg.name.assign("THILSGBPLFDEBOMYCJRIOYDRUKEFHQUMKRNHAFVHBQRVMWXCLFZHWAQXBWULITLEKVSIPWBNITZFEPABVLGSJAYJSNCOYWFWNXPUTGUXOUHTPNODXZQZODNMUR");
    msg.visibility.assign("SACVGBQYZWWRBBEHLQERPDDCWCXRMVMEHJSJRSQBOFXYUQTWPDQLGVPJZGUMDFNNOSWZOIVIVMZOAUOUZTYLQFGWNVLFUZRLKBZHQUUHLWFHICFRGYKCKTSPTDKDCMITFJKBOPRQNTDOJKFAIAEWPUEFDCHDIASJLWJIVNLNATMGNENACSXOXKIEWQIPH");
    msg.scope.assign("KZAXFWMUESAZGRDKBIPJIPCOIPEFFXRCQAYNAXCVTHPHLNJIOYAPCRLQOYGQXUVRR");

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
    msg.setTimeStamp(0.260912805938);
    msg.setSource(22177U);
    msg.setSourceEntity(76U);
    msg.setDestination(42082U);
    msg.setDestinationEntity(85U);
    msg.name.assign("BFGPNGMUVRUGEFIUKORLWOSVTZUWXPVWKZQDHTMRHWIGNBBLRLRJVGYSPMUHWSEHSKAALAZXLPHKOERDQVKVDBJEGBCIDYUKNWTGXAXBMKHBXAZVVYHWLRFJCJYE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WIGKNJRDKLRGTPHYAOGEKWGQAMYPXFJFMCHVTKFAUGXHDXIQBHFMEAWXZGGUGLOPSHYNEPJNBLWUFUPNXNJAGLKBMCCBRWMJDKUTVBJSQBWPNKIRBLDVPCOLORBOZSQMNQYLGWTOXELFRMNSXMSFTOSVDKEATKVATVK");
    tmp_msg_0.value.assign("UWMBOAETVZQFUEEHYOBRGWVHLGKQOBXSTQLRXCPVAOGSTQKUDSBMGARXCFWSAKLOMTFORDBDNIRIMWSFYTXNRAHPXNTSJJOVMAXUFESNZKHLCCQFNDPRHYMTJWWTBDXASQFVEIRZCJWPMYBZAHNAKIIZTYRPVGAZHNEZVTIOJNWKGYYHLVBECY");
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
    msg.setTimeStamp(0.471257600897);
    msg.setSource(25378U);
    msg.setSourceEntity(110U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(46U);
    msg.name.assign("CRICFKBLYIRHCWIVZXJHTHGXXTWNQVHFTWCBZGZRTWMDAPVNBZFOMMUOPQHHJTPIFDNRGAQADCPUZYULTYSUGLJTK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VIIFJQQTUK");
    tmp_msg_0.value.assign("KOAYECXRVDJBFRYMSHNWKCATCDPBZWAQBGSAVJBAEHNHOCPDFHQXVETVEOKSGABZNIRJCPJMUQXGNSVLHPQJWORG");
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
    msg.setTimeStamp(0.0291176366062);
    msg.setSource(58142U);
    msg.setSourceEntity(67U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(186U);
    msg.name.assign("GGNZHFFZYCEYAAQYOJLEVDFPQAVZGKENXBDITIFYOWPWCWHVYSNSFHYDAEOXXPSQUSUJVFJMJLEYZHFIFVDKYLHGJQSGTXILWGGWLLURUSPMFUJMMH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FLEDWPLPSTGNNWGSWIFRRMBPSNUDPJJHHUVOQLTMCKMBXKIGCVKQGPJFUJYCYVWIHYZZFHAWMBCCCZWJHLIGGMRBUMHLAKOX");
    tmp_msg_0.value.assign("VCJLRYVPIVZIFNVXOFMPNZBMKHEBJTPAHHICUPAMKRPGZOACIWBWSBRHLVJQMREDETHIZPGUUGXHCYWHNQHEBGUYHYGGDSIWSWTUMNYAQPDZLJTFARSMYYLNOTSJFWOLAKXXKQDKLQWDLFEUFZMBRLSDDOLFXTKDYCVZEDGKVWQIBILQNDHKOYKNWZJCPXZPJTNUTXTAQSVGCCKECRXIFSSOMFXRBJUV");
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
    msg.setTimeStamp(0.789384899745);
    msg.setSource(61190U);
    msg.setSourceEntity(221U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(109U);
    msg.name.assign("DDDRQHRZKXCBCWMJSDDKUWJUJCLLUENNDFEEZVTCLBYBQGNMPJXYURVWVPZRPYWZMMNPXXQATBROEGO");

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
    msg.setTimeStamp(0.957329643582);
    msg.setSource(51210U);
    msg.setSourceEntity(166U);
    msg.setDestination(14047U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ICRTSFMUWHOBAUDLGXIKLBLKTAYVPEZASVFQQPALHXHXHSFGCQGLGUULMATERAQDXMTTYIMHRGPEBDNJFIMRNP");

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
    msg.setTimeStamp(0.816374958261);
    msg.setSource(30993U);
    msg.setSourceEntity(69U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(57U);
    msg.name.assign("IYRQIWBENUPHASGHJEQWMKREIQFGBZTFQDOSTXFMOPPDYVJOOSOVBGEAXKYFSNXEUWQGWDJTAUYCIOASCQZLDIFRWCQHDDAASBDLGEWVYFMUYMJTIJINLHGAQZOUGPBXXDLLYJOULTYRAKVHKMZPRZZQOFRWZJXMVCLXENSVYMHURNWUCMCLGHUVCSXZHCWNPHLFBINTMPWTRPKDIHBVAFCRKTKXBCIG");

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
    msg.setTimeStamp(0.527212343319);
    msg.setSource(15458U);
    msg.setSourceEntity(159U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(136U);
    msg.timeout = 1645130025U;

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
    msg.setTimeStamp(0.564719154806);
    msg.setSource(25729U);
    msg.setSourceEntity(125U);
    msg.setDestination(25821U);
    msg.setDestinationEntity(122U);
    msg.timeout = 1392759976U;

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
    msg.setTimeStamp(0.620281171051);
    msg.setSource(5423U);
    msg.setSourceEntity(139U);
    msg.setDestination(55625U);
    msg.setDestinationEntity(121U);
    msg.timeout = 143107351U;

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
    msg.setTimeStamp(0.5923685481);
    msg.setSource(24232U);
    msg.setSourceEntity(14U);
    msg.setDestination(53797U);
    msg.setDestinationEntity(200U);
    msg.sessid = 1787358184U;

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
    msg.setTimeStamp(0.43313919297);
    msg.setSource(39193U);
    msg.setSourceEntity(203U);
    msg.setDestination(4429U);
    msg.setDestinationEntity(27U);
    msg.sessid = 3039624753U;

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
    msg.setTimeStamp(0.70691917157);
    msg.setSource(43655U);
    msg.setSourceEntity(14U);
    msg.setDestination(31574U);
    msg.setDestinationEntity(47U);
    msg.sessid = 816161460U;

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
    msg.setTimeStamp(0.291889360484);
    msg.setSource(41270U);
    msg.setSourceEntity(175U);
    msg.setDestination(13539U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1058506908U;
    msg.messages.assign("JIPDSBOMMHVRVDIRREWHQSHKADWLWUDKZDNPCKCPRIMBTYLURAKAGTXYOGFZHJNBPJWODGQGBYSRSPTOLFIXMVEVCESDBKOMIUVGPTARVPXCJRFFXMMLUWXEBCIUHZCDMAUPHLZYYETGVSQACFLYETELINJNAKXJFQZIGZZIWEPNOHOPJVXMAKDXCACOKUUYZYOXHLGTLYNTQSFNOWRVDHNQNG");

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
    msg.setTimeStamp(0.834412763155);
    msg.setSource(8969U);
    msg.setSourceEntity(10U);
    msg.setDestination(4878U);
    msg.setDestinationEntity(196U);
    msg.sessid = 2113967658U;
    msg.messages.assign("YWFDAOYZDDEAXVTWGGJNXMEGOMPCRZEZHNYHRJYKUSIRJGBNLGIPDCWLTRDBNKRFQWXIWIKQMSZKDWTHLDKMRSGLBZEPGHMVEANEBCFMXVAXAVIQAZYFSZCSYDMLQROREUFKLHYYJERPUGFEPHQLSDQJZJHITAVFLTTUXPFLBDCYOOTBWQKBTHCJXXJTATUBCZWFLVOSNXPCZJINMRGQVSOJGOBUKFIHPCMNVBHANIQXQVWYWUKO");

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
    msg.setTimeStamp(0.966179205668);
    msg.setSource(30177U);
    msg.setSourceEntity(247U);
    msg.setDestination(43768U);
    msg.setDestinationEntity(233U);
    msg.sessid = 2478826119U;
    msg.messages.assign("JOUWLPAMUQQTNVWQQJGCSXROPPRMKRTCIQOEUBCBGXQLODCAZVYMXFFOPHXWNSAVUOIGVAWGZLEYTOYYUFZWZYDZDLHWFQVMSTKLUWYSKFGHJHBJVCDAVPBUIZNSCLCMDRFBLCJXQEEXOKQ");

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
    msg.setTimeStamp(0.134096382468);
    msg.setSource(51154U);
    msg.setSourceEntity(102U);
    msg.setDestination(28452U);
    msg.setDestinationEntity(152U);
    msg.sessid = 3849435748U;

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
    msg.setTimeStamp(0.0163626527855);
    msg.setSource(31268U);
    msg.setSourceEntity(64U);
    msg.setDestination(3936U);
    msg.setDestinationEntity(45U);
    msg.sessid = 4024792266U;

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
    msg.setTimeStamp(0.735200491274);
    msg.setSource(35418U);
    msg.setSourceEntity(1U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(49U);
    msg.sessid = 2245442522U;

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
    msg.setTimeStamp(0.0884888145802);
    msg.setSource(33434U);
    msg.setSourceEntity(226U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(35U);
    msg.sessid = 1073583342U;
    msg.status = 64U;

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
    msg.setTimeStamp(0.452944796385);
    msg.setSource(44310U);
    msg.setSourceEntity(152U);
    msg.setDestination(21857U);
    msg.setDestinationEntity(169U);
    msg.sessid = 908504129U;
    msg.status = 112U;

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
    msg.setTimeStamp(0.439960362347);
    msg.setSource(42714U);
    msg.setSourceEntity(232U);
    msg.setDestination(62101U);
    msg.setDestinationEntity(40U);
    msg.sessid = 2227339847U;
    msg.status = 159U;

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
    msg.setTimeStamp(0.48290933537);
    msg.setSource(22441U);
    msg.setSourceEntity(7U);
    msg.setDestination(45661U);
    msg.setDestinationEntity(153U);
    msg.name.assign("FZJYCNKIUIESXFQWVPBGBWOKVKJUSTTIZHHLRUSPKZPLJHNFYMCVQDFVOTMJJOZYQOBZWCFMWAZLGBDXIKHXREOEIJQPDUMQCQEVARAFLKYSXJNSEJVEBXNMYGFIVNUMUHAWDTIRPCXJFWGGHCIQDHKWQIGVNWUOQNEWZWHPDXTIZHCAZVSEBHMBKRQLSTAGTLOSONERTKCJFFTCARLKDYMEPAACYDOGUYXD");

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
    msg.setTimeStamp(0.041797934907);
    msg.setSource(54283U);
    msg.setSourceEntity(22U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(93U);
    msg.name.assign("RNLEVNGBWKCCXPEAXZHPHWCUVPCUTRSYDXKBBENFNDFLFREFJPRMZROIBLQMQUJYTFHXIMPZMKUZARISF");

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
    msg.setTimeStamp(0.322789254788);
    msg.setSource(35574U);
    msg.setSourceEntity(3U);
    msg.setDestination(39677U);
    msg.setDestinationEntity(95U);
    msg.name.assign("EXGRHGTYUMKDBFHFADSNZTMVPQNDSUQRTSGPNJQFOFBJPZFE");

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
    msg.setTimeStamp(0.829368206439);
    msg.setSource(17052U);
    msg.setSourceEntity(232U);
    msg.setDestination(32615U);
    msg.setDestinationEntity(87U);
    msg.name.assign("ODAZOYHHXFZRBCUGEYUSFLJXWOMLLWKPTVBKQWISMTDRLVNXNMFJWGMSVQAWCUBELVYCGGHUJRVAYXRRQNKEUDEEOAFZSALNQWUHGQHSKHCADSIKEGEUNDCOZXZNZEOJCJDDIKFPXOPXUPXMGMFITTFBIQYPGRYOGKMILBRVRHVSYMACLINSFCWWJDGSKKYMIXMTBNCVUXPBIKBBRTFLZNAYWVO");

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
    msg.setTimeStamp(0.772901859757);
    msg.setSource(1437U);
    msg.setSourceEntity(4U);
    msg.setDestination(10349U);
    msg.setDestinationEntity(178U);
    msg.name.assign("DRHSAXXTAYLJETKUFSUTLNVETIRGWZCRGZPLZQPTZMVVOIWLMJVZACSPQYPQMXKPGXHJRMSLEAKAIENQQCGRIJERZOYUFHDHXMQTXPGIVRDOJFADCDWUOIGGYSNLLBEFKOACGSXPGMHBYXIFJMIFZDKQUVCVWBKYDCOMUSLZWKDHJKTBYAQESNROSKTAVYEADLBIJPBJUBWUHTWUNVMNFDTEYCWFBCNZHFQEXWFOOPGZOVNHQJKLBXYBNUW");

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
    msg.setTimeStamp(0.604675854427);
    msg.setSource(32615U);
    msg.setSourceEntity(190U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(49U);
    msg.name.assign("AWQBBIIEYELAKDNPTEVHHDXOUGHTREYROUVFVHAWPHQCQRRUFHJITZJUYWMRNRYGNUOUHTIFHSPGJKLOWBKWDNKUQFUQSBBOZLXUXPNIYEPDOMZFYCNAQFCLMJXGWLKZHFGCMRXYEYVFAXMDMTXSSQSTTIYBSGILNTHDORCDJZZUOBCQDNTJSNFQJAZXDADAPIPJCCBGCVJZSPQMVMRLVBJKAXKPEEFLNKYZWSGLMWTWE");

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
    msg.setTimeStamp(0.661024759281);
    msg.setSource(57235U);
    msg.setSourceEntity(123U);
    msg.setDestination(27043U);
    msg.setDestinationEntity(12U);
    msg.type = 89U;
    msg.error.assign("SLIFWVFJSFOTIXFLLNERFUXRFVWREFGKWMJGXQDLAHMPYWDMUBMBUJOHIUCNNMGMCCKNLEDSTIUVHRNKRTAHZAQGJVKVXQBIIPOPCNBYWVQDIQTAWGENQQPXZTOMSYZKGDJBINYKLWKGMHUIBGPCAHDERTVYKLPJGDQOBMEPYRGZEZYAQHDBUNXWZFROBRCYYPHBTYIJZCKLLKEPHCVXETADSWECUMVPLJTNSFUOVZHWCJTXSSQZXAAZAR");

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
    msg.setTimeStamp(0.117552079611);
    msg.setSource(50988U);
    msg.setSourceEntity(54U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(236U);
    msg.type = 229U;
    msg.error.assign("ZOBDIVKXNVKSCMVHZEXTBONALQAQDWESZXLIKPSJKVQFPHFIRXAZYSMSBGHUUHQFTIFDPDGMTVYYJOOWNANLDEFYRHLRRZYYWIDSNVZELXYRIYMUPTADOUJDKUTUXVPQGWGHJZTFENREORGEMZBKFKBMQAWFHITNISXBNLXKTPJNMCCCZBWWFHAJLNTSEYHPWKQJSCGJFCQOPRXPCGQEMAOVKCCMOGUWTOIBVLARGSJAPCMD");

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
    msg.setTimeStamp(0.44010461829);
    msg.setSource(59791U);
    msg.setSourceEntity(234U);
    msg.setDestination(35814U);
    msg.setDestinationEntity(102U);
    msg.type = 93U;
    msg.error.assign("EITYGGKCSBHTHHRAVTTINVYXFOZTMWCAJNAFPYX");

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
    msg.setTimeStamp(0.274056961133);
    msg.setSource(64363U);
    msg.setSourceEntity(226U);
    msg.setDestination(27052U);
    msg.setDestinationEntity(63U);
    msg.seq = 19587U;
    msg.sys_dst.assign("UMDNBHEQBHFEURKSZVGIQVZOIIRWTLDJZORQG");
    msg.flags = 6U;
    const char tmp_msg_0[] = {89, 23, -76, -53, 16, 46, -92, 106, -59, 102, 93, -81, 5, 30, 85, -6, 121, 29, 89, 116, 84, 14, -25, 123, 95, 63, 23, -11, 112, -114, -75, -11, -51, -91, 61, 117, 55, 24, 44, 123, -110, 62, 26, 107, 108, 10, -106, -17, 13, 121, -100, 108, -12, -59, -114, -89, 42, 119, 0, -116, -117, -83, 4, -113, 80, -93, 82, 54, -26, -99, -13, 74, 124, 31, 104, 42, -92, 61, 71, -80, 56, 20, 95, -20, -34, 14, -102, -64, 51, -106, 99, -91, -2, -76, -121, 77, -58, -86, -81, -47, -2, -38, -50, -97, 36, 57, -44, -122, -76, 33, 29, -71, 116, -5, 103, 100, -44, 121, -116, 66, -124, 82, 44, 75, -15, -127, -16, 71, -63, -94, -28, -109, 111, 115, -125, 25, 13, 3, -116, 116, 77, 70, -96, 98, -92, 123, -128, -19, 119, -45, -79, -69, -18, 72, -40, 96, -6, 12, -24, -21, 31, 7, -92, 76, 66, -124, -111, -99, 95, 126, -72, -53, 100, 26, -9, 18, 125};
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
    msg.setTimeStamp(0.618907324477);
    msg.setSource(37633U);
    msg.setSourceEntity(218U);
    msg.setDestination(2359U);
    msg.setDestinationEntity(118U);
    msg.seq = 16655U;
    msg.sys_dst.assign("FEXMUOFAHMQAWMQRWUXEKVOBFZVWWOBKAWDJWRRBTIHFEZTSYIKGKUCBHLASANEYXPKXIQVZIDNBTBEOEMJUIFUDOXQFSVYQMXJNWPRNQDHVVSWHATCFRPNZIQJYRNLLPACEDLBGGKTIYITYFYOODPB");
    msg.flags = 245U;
    const char tmp_msg_0[] = {59, 48, 9, 108, -53, 39, 47, -82, -18, 57, -16, -56, 2, -11, -25, -47, 95, 6, 94, -51, -19, -123, -90, -110, -54, -113, -56, -86, 15, 33, -49, -71, -29, 24, -71, 2, -69, -90, 57, 121, 65, 56, 21, 60, -108, 35, 125, 120, 18, 0, 3, -127, -55, -61, 5, -17, 16, -28, -108, 107, -53, -123, 85, -122, 30, 117, 104, 65, 33, 37, 59, 9, -81, -21, 67, -29, 18, 48, 40, 91, 79, 33, -33, -61, -15, -61, 62, -7, 42, 36};
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
    msg.setTimeStamp(0.00883502964589);
    msg.setSource(14623U);
    msg.setSourceEntity(192U);
    msg.setDestination(58163U);
    msg.setDestinationEntity(16U);
    msg.seq = 50749U;
    msg.sys_dst.assign("GNXODTHKOJAURPDVTICUDXVJSFNBCDFXSYGYXRRTCUHYVKKZFMXSLGGTQKGEHYFZPDKZLIKDEUML");
    msg.flags = 92U;
    const char tmp_msg_0[] = {108, 29, -113, 40, -7, -114, 67, 9, -103, 22, -90, 97, 89, 98, 82, 119, 69, 100, 33, -126, 54, 68, 53, -49, -68, 99, -87, 5, 101, -12, 115, -100, 77, 94, 124, -77, -83, 86, 69, 95, 100, -110, -112, 95, 14, -46, -119, 31, 71, 11, -8, 104, 125, 98, 88, 16, -98, -27, 48, -120, 80, -49, 101, -91, -105, -3, 91, 72, -123, 117, 46, 93, -106, 70, 5, -56, 31, -74, 104, -18, 20, -90, -22, 110, -116, 121, -12, -111, 103, 38, -34, -123, -110, -69, 2, 18, 40, -2, -30, -72, -51, 115, -61, 47, -116, 66, 8, -78, 74, 3, -9, -36, 43, 73, 21, -99, 5, 126, 108, -109, 96, -100, -66, -96, 23, -114, -34, 39, -18, -99, 116, 26, -86, -37, 39, -43, -2, -126, -61, -118, -35, 12, -42, 43, -56, -63, -13, -23, -58, 98, 118, 8, 51, -106, 52, 51, 59, -110, -15, 120, -4, -51, -91, -1, 65, -90, 77, -43, 8, -28, -10, -108, 40, 12, -94, 80, 96, 31, -118, -16, 16, 70, -113, -54, -22, 23, -48, 83, -62, -121, 43, -15, 29, -104, -50, 13, -3, 18, 10, -121, -68, -61, -75, 81, 23, -88, -82, 71};
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
    msg.setTimeStamp(0.818289874936);
    msg.setSource(43391U);
    msg.setSourceEntity(52U);
    msg.setDestination(42051U);
    msg.setDestinationEntity(85U);
    msg.sys_src.assign("EPXONBZRRDRJYFYGFGIJMCADBZUIGYWKMSIHJALKXQSVOPAOPEEBELAZLPYKTZPCHOTPRTAXHTVESLGERCLVSDXLJUJVSNTQQFIKQWNWYLUIUTLAHPZEHLROYIUUOZBGMZLWFSFDDRWPPKUTRNKGSVINMHZQRMDXMCWMPDUSNGNBKQMNGVYJFHBQDTMXVIOBJUFWSNYNCVVHSKITXYKBWWKZEFQOAZFWDXABHCJQCAUCHGQIOEJCDGFO");
    msg.sys_dst.assign("EZFVKKZABOAJLDIVLBDTSPQTBGXOSPKGXMAB");
    msg.flags = 202U;
    const char tmp_msg_0[] = {-77, 27, 114, 105, 88, 91, 53, 93, -27, 3, -60, -12, -128, -44, -118, -56, 69, 104, -107, -21, 18, -65, -8, 16, 54, 118, 73, 49, 86, 72, -84, -27, 116, -17, -46, 55, 28, 52, 73, -9, -30, 39, -71, 121, -97, 95, 113, 3, -24, 73, 24, -126, 117, 13, 9, -37, 72, 100, -58, -61, -72, 96, 104, -77, 64, -41, -23, 84, 48, 17, -23, 47, -33, -42, 107, -93, -48, -123, -84, -43, 59, 4, 116, -111, -54, 27, 48, 23, -55, -48, -47, -5, 21, 37, 86, -28, -64, -92, -49, -4, 42, -83, -19, -58, 122, 59, 121, 121, 102, 21, 24, -97, -127, -123, -93, -66, 106, 5, 116, 16, 20, 44, -110, 62, 79, -113, -49, -62, 65, -90, -120, 98, 125, 71, 5, 5, -71, -60, -128, 120, -117, -26, -73, -21, -50, 3, 96, -47, -123, -37, -2, -67, 41, -59, 102, -89, 1, -43, -83, -41, -84, 57, 115, 33, 30, -103, -116, -56, -105, 8, -118, 52};
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
    msg.setTimeStamp(0.198321982034);
    msg.setSource(63379U);
    msg.setSourceEntity(124U);
    msg.setDestination(30281U);
    msg.setDestinationEntity(144U);
    msg.sys_src.assign("BSBIUIYWBFTUULLTUOMNXUKQUUAYTHWPMSP");
    msg.sys_dst.assign("EVGWCXYWNTVBANXMYRALDIJVKUBOJHHOPXHCKRIHPAAPWDBXRFPMOXQULVI");
    msg.flags = 202U;
    const char tmp_msg_0[] = {43, 53, 81, -127, -19, 60, 102, 15, 8, -122, 94, -65, 66, -21, -41, 0, 98, -108, 80, -92, -74, 30, -31, 87, -113, -36, 95, -2, -55, -125, 37, 5, -91, 60, -73, 121, 58, -96, -78, 31, -16};
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
    msg.setTimeStamp(0.531145409109);
    msg.setSource(37303U);
    msg.setSourceEntity(169U);
    msg.setDestination(25282U);
    msg.setDestinationEntity(249U);
    msg.sys_src.assign("JFGUMMCNGISQFFMJEVGBELDDSGUAIAIYCSETZENXREKIKTUTADVUTAVKBDPPRBUPNXAHRXGWLMPBUSFVHFQIZOVWCPWFLLQFVCQOQGHFAOUL");
    msg.sys_dst.assign("AAFABKJGADSBOMLRNARMKXSQXLKOMGMBGLJQLBZQIUDENTCIQERYTXKLECGXXSVMZOTIPFPKVWIVHYRMCLZHPEUJHPFPQBLRIPBETHEWFCJDWSKNBJCFMHZWYUWDVEFDADWSBSXPVRVNAFUXZJCXHKKGVMINDURTQRIFVLZGHWEDYUUOTSYOONAIQJCNZTUSTBYYCQCEMORSVNPYONGJDGRUSO");
    msg.flags = 135U;
    const char tmp_msg_0[] = {-53, -4, 12, 118, -69, 66, 72, -66, -91, -63, -49, 22, -82, -93, 20, 27, 52, -114, 61, -63};
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
    msg.setTimeStamp(0.0268154439786);
    msg.setSource(56071U);
    msg.setSourceEntity(148U);
    msg.setDestination(42004U);
    msg.setDestinationEntity(28U);
    msg.seq = 56458U;
    msg.value = 119U;
    msg.error.assign("DZUYOPEJYUPURFMMEAKQHMPEOYCQSOCBNWZWXSGFZNVTGMCVPSTJAJYOTWZTWQXTGTFKPMECJLTQLLONDNBGSEXTHPZGGHXNJXABNRDYYCVXNDTLNFSRYRSMWVKVODZPYCUJBMOLKJLQIIHSGXIMDGXKZIBUQBUUDAVBLWRGPFEQQFFUKXWMYLHIIVISCCGEBOKPWVHADJIZAVLBHNANFRRDJFARDUHRHO");

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
    msg.setTimeStamp(0.163335313147);
    msg.setSource(3741U);
    msg.setSourceEntity(248U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(95U);
    msg.seq = 58039U;
    msg.value = 226U;
    msg.error.assign("ZTEWFJXTZODOPVOYYXRSGWNWLALONHXRNXTWKFPPRVSAVAKMWLTRSBNYOLHIBMOGBOEVPD");

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
    msg.setTimeStamp(0.822498326599);
    msg.setSource(15746U);
    msg.setSourceEntity(105U);
    msg.setDestination(51746U);
    msg.setDestinationEntity(69U);
    msg.seq = 59631U;
    msg.value = 183U;
    msg.error.assign("PRISRZMRDRVUFDQOXEMEYHSUCKYCVDMBAYLQDQSYPZWCPLWDVQXHPVUJCHHCDANHCBNVZK");

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
    msg.setTimeStamp(0.351638041824);
    msg.setSource(31803U);
    msg.setSourceEntity(179U);
    msg.setDestination(9002U);
    msg.setDestinationEntity(115U);
    msg.seq = 23288U;
    msg.sys.assign("JIMFOHARKOPRJOJBSCIEMPCWNMITCVQQWCPUFQKLWZLFUILR");
    msg.value = 0.646826099487;

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
    msg.setTimeStamp(0.0186441391074);
    msg.setSource(42208U);
    msg.setSourceEntity(104U);
    msg.setDestination(54067U);
    msg.setDestinationEntity(92U);
    msg.seq = 1475U;
    msg.sys.assign("OBLZJABDAANNAHTIEZKXVHYETKUYPFGJKOTYVWMCQHCIXGABYTJQJOEVSRNGPGDSSWBUMRPJUECEPN");
    msg.value = 0.0390430111008;

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
    msg.setTimeStamp(0.0457122063413);
    msg.setSource(61833U);
    msg.setSourceEntity(249U);
    msg.setDestination(49505U);
    msg.setDestinationEntity(73U);
    msg.seq = 25821U;
    msg.sys.assign("JLCWFWRTAXDYNZKOOLSGDJBJXVNPHSQNBFXAQSXYOIBTETQKZNOSHTGIEWRAJOAHRUGQRRLLFECDCWBIYNDUKGYOTZUCYKOFYCFVDUNXIASXJTFWJGSDQGXPIZIEAQUSEUVVZWBHTWHGAYPZMVRUJKUZPEMZJMCLMEVMBZEMKFISYWLDVCDPHUNQDYDLXLRQAJNHCHB");
    msg.value = 0.954033453648;

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
    msg.setTimeStamp(0.653348379922);
    msg.setSource(45509U);
    msg.setSourceEntity(187U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(142U);
    msg.action = 140U;
    msg.longain = 0.127895712529;
    msg.latgain = 0.171402840336;
    msg.bondthick = 234701088U;
    msg.leadgain = 0.181965556614;
    msg.deconflgain = 0.576451373573;

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
    msg.setTimeStamp(0.472876970096);
    msg.setSource(12238U);
    msg.setSourceEntity(69U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(71U);
    msg.action = 170U;
    msg.longain = 0.570621253977;
    msg.latgain = 0.266123713202;
    msg.bondthick = 213980236U;
    msg.leadgain = 0.109578301873;
    msg.deconflgain = 0.0848040986045;

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
    msg.setTimeStamp(0.667702232041);
    msg.setSource(3108U);
    msg.setSourceEntity(117U);
    msg.setDestination(7544U);
    msg.setDestinationEntity(69U);
    msg.action = 99U;
    msg.longain = 0.458053145467;
    msg.latgain = 0.519677883647;
    msg.bondthick = 1079313798U;
    msg.leadgain = 0.633956444664;
    msg.deconflgain = 0.905852788779;

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
    msg.setTimeStamp(0.350367379928);
    msg.setSource(21083U);
    msg.setSourceEntity(159U);
    msg.setDestination(23616U);
    msg.setDestinationEntity(35U);
    msg.err_mean = 0.900769867162;
    msg.dist_min_abs = 0.412572359247;
    msg.dist_min_mean = 0.326768554862;

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
    msg.setTimeStamp(0.749779827804);
    msg.setSource(38431U);
    msg.setSourceEntity(9U);
    msg.setDestination(65191U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.351878779187;
    msg.dist_min_abs = 0.767938797434;
    msg.dist_min_mean = 0.0858261341722;

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
    msg.setTimeStamp(0.00172625050664);
    msg.setSource(33090U);
    msg.setSourceEntity(52U);
    msg.setDestination(8361U);
    msg.setDestinationEntity(48U);
    msg.err_mean = 0.7424030387;
    msg.dist_min_abs = 0.907102923299;
    msg.dist_min_mean = 0.115916277403;

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
    msg.setTimeStamp(0.395603356249);
    msg.setSource(12007U);
    msg.setSourceEntity(136U);
    msg.setDestination(17043U);
    msg.setDestinationEntity(81U);
    msg.action = 196U;
    msg.lon_gain = 0.239670608478;
    msg.lat_gain = 0.730924923881;
    msg.bond_thick = 0.409581840766;
    msg.lead_gain = 0.214546054198;
    msg.deconfl_gain = 0.94176640462;
    msg.accel_switch_gain = 0.80039638698;
    msg.safe_dist = 0.708813944236;
    msg.deconflict_offset = 0.756998074109;
    msg.accel_safe_margin = 0.184985081387;
    msg.accel_lim_x = 0.109199807564;

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
    msg.setTimeStamp(0.0253687032799);
    msg.setSource(51578U);
    msg.setSourceEntity(189U);
    msg.setDestination(54466U);
    msg.setDestinationEntity(95U);
    msg.action = 232U;
    msg.lon_gain = 0.229720952675;
    msg.lat_gain = 0.833234426511;
    msg.bond_thick = 0.436199908912;
    msg.lead_gain = 0.995473532131;
    msg.deconfl_gain = 0.86922960062;
    msg.accel_switch_gain = 0.933440876227;
    msg.safe_dist = 0.381535612381;
    msg.deconflict_offset = 0.523588519343;
    msg.accel_safe_margin = 0.753086942727;
    msg.accel_lim_x = 0.880321588828;

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
    msg.setTimeStamp(0.842967870863);
    msg.setSource(62681U);
    msg.setSourceEntity(176U);
    msg.setDestination(10871U);
    msg.setDestinationEntity(209U);
    msg.action = 217U;
    msg.lon_gain = 0.924873095464;
    msg.lat_gain = 0.394473233888;
    msg.bond_thick = 0.273163266219;
    msg.lead_gain = 0.0145567862537;
    msg.deconfl_gain = 0.332772150537;
    msg.accel_switch_gain = 0.51334742954;
    msg.safe_dist = 0.0816677087459;
    msg.deconflict_offset = 0.545911108925;
    msg.accel_safe_margin = 0.50773468196;
    msg.accel_lim_x = 0.227926974399;

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
    msg.setTimeStamp(0.388770822719);
    msg.setSource(21386U);
    msg.setSourceEntity(197U);
    msg.setDestination(30397U);
    msg.setDestinationEntity(102U);
    msg.type = 104U;
    msg.op = 157U;
    msg.err_mean = 0.903388824953;
    msg.dist_min_abs = 0.267158451772;
    msg.dist_min_mean = 0.970825316301;
    msg.roll_rate_mean = 0.224116803488;
    msg.time = 0.173384053699;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 36U;
    tmp_msg_0.lon_gain = 0.784860615491;
    tmp_msg_0.lat_gain = 0.411873223428;
    tmp_msg_0.bond_thick = 0.097275849113;
    tmp_msg_0.lead_gain = 0.465774356464;
    tmp_msg_0.deconfl_gain = 0.753898178214;
    tmp_msg_0.accel_switch_gain = 0.300606094109;
    tmp_msg_0.safe_dist = 0.419973906895;
    tmp_msg_0.deconflict_offset = 0.791999563031;
    tmp_msg_0.accel_safe_margin = 0.596365359827;
    tmp_msg_0.accel_lim_x = 0.0451845905437;
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
    msg.setTimeStamp(0.550436590775);
    msg.setSource(22892U);
    msg.setSourceEntity(191U);
    msg.setDestination(26903U);
    msg.setDestinationEntity(172U);
    msg.type = 218U;
    msg.op = 207U;
    msg.err_mean = 0.0574615489769;
    msg.dist_min_abs = 0.0795198432567;
    msg.dist_min_mean = 0.694183413444;
    msg.roll_rate_mean = 0.79381358052;
    msg.time = 0.0533634714608;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 180U;
    tmp_msg_0.lon_gain = 0.715243215705;
    tmp_msg_0.lat_gain = 0.472099062252;
    tmp_msg_0.bond_thick = 0.113326393349;
    tmp_msg_0.lead_gain = 0.470420086916;
    tmp_msg_0.deconfl_gain = 0.324861098347;
    tmp_msg_0.accel_switch_gain = 0.571725847051;
    tmp_msg_0.safe_dist = 0.644389127768;
    tmp_msg_0.deconflict_offset = 0.725914727748;
    tmp_msg_0.accel_safe_margin = 0.101557785353;
    tmp_msg_0.accel_lim_x = 0.986830779457;
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
    msg.setTimeStamp(0.785684732659);
    msg.setSource(15228U);
    msg.setSourceEntity(195U);
    msg.setDestination(50408U);
    msg.setDestinationEntity(175U);
    msg.type = 119U;
    msg.op = 105U;
    msg.err_mean = 0.493800600287;
    msg.dist_min_abs = 0.383320835696;
    msg.dist_min_mean = 0.557138004992;
    msg.roll_rate_mean = 0.0207449916915;
    msg.time = 0.487475577296;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 131U;
    tmp_msg_0.lon_gain = 0.200077656786;
    tmp_msg_0.lat_gain = 0.528761061043;
    tmp_msg_0.bond_thick = 0.703051287826;
    tmp_msg_0.lead_gain = 0.252939387484;
    tmp_msg_0.deconfl_gain = 0.118176446328;
    tmp_msg_0.accel_switch_gain = 0.749882235383;
    tmp_msg_0.safe_dist = 0.535123243543;
    tmp_msg_0.deconflict_offset = 0.696048043719;
    tmp_msg_0.accel_safe_margin = 0.893617898324;
    tmp_msg_0.accel_lim_x = 0.00801662760595;
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
    msg.setTimeStamp(0.476045665434);
    msg.setSource(26912U);
    msg.setSourceEntity(152U);
    msg.setDestination(44177U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.220070851951;
    msg.lon = 0.166837890615;
    msg.eta = 3878279024U;
    msg.duration = 63450U;

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
    msg.setTimeStamp(0.178243348902);
    msg.setSource(16103U);
    msg.setSourceEntity(147U);
    msg.setDestination(30085U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.0809832794739;
    msg.lon = 0.57568768236;
    msg.eta = 3270985453U;
    msg.duration = 48075U;

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
    msg.setTimeStamp(0.396205008814);
    msg.setSource(8872U);
    msg.setSourceEntity(79U);
    msg.setDestination(41870U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.787861196518;
    msg.lon = 0.80985629536;
    msg.eta = 2528378559U;
    msg.duration = 38566U;

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
    msg.setTimeStamp(0.00240308360323);
    msg.setSource(39198U);
    msg.setSourceEntity(224U);
    msg.setDestination(14731U);
    msg.setDestinationEntity(248U);
    msg.plan_id = 11854U;

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
    msg.setTimeStamp(0.142161381959);
    msg.setSource(45585U);
    msg.setSourceEntity(98U);
    msg.setDestination(53846U);
    msg.setDestinationEntity(161U);
    msg.plan_id = 2426U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.542397344237;
    tmp_msg_0.lon = 0.876858704346;
    tmp_msg_0.eta = 701652348U;
    tmp_msg_0.duration = 56020U;
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
    msg.setTimeStamp(0.0172487674033);
    msg.setSource(47692U);
    msg.setSourceEntity(77U);
    msg.setDestination(65113U);
    msg.setDestinationEntity(58U);
    msg.plan_id = 56544U;

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
    msg.setTimeStamp(0.072924726469);
    msg.setSource(42741U);
    msg.setSourceEntity(164U);
    msg.setDestination(25425U);
    msg.setDestinationEntity(211U);
    msg.type = 101U;
    msg.command = 54U;
    msg.settings.assign("JLXEECSYPRGTYSRWSTAYWJSHNENWZPZVWZIYFRLCPLVWEVLTBEESJLXTGOMJVGOSGNURPRLKOLUAXCZTVXFYGAOFYSZCIIXUFGBKDKUNHBNKAXUWOXMIHIOVUNPDHRCLQNMZNTCAPBUOYJXC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10896U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OHUBCGQTAVUDVZOCYKJIGQEDWVGFIASJADCUFGAMVIBBINTBDCLXNSYXGHB");

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
    msg.setTimeStamp(0.405493487308);
    msg.setSource(48939U);
    msg.setSourceEntity(52U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(59U);
    msg.type = 128U;
    msg.command = 77U;
    msg.settings.assign("TOPZOMBJVJCKEXKBKKYSRPYOHVTNRWPDDABWVKSJATIPFLWPSAM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 60950U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AIYOTHWBNRVYTFVMTAVCZUCYXDWZWDIMIIYIUNIONPHYBNNRDYLERPSUXBWJTKEYUHGPESBRGLSCTJUILPXVNQKKNFPUSIKGRMMWTHFFAAJOOGFVEEOLEZEDKFMVQBKBWAACTLUHHYPAPSPGZMYLZGJXSQZFCCSTJJLFKUSRQRXXIDGDUNCANXOXZQOJHZBL");

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
    msg.setTimeStamp(0.456470777889);
    msg.setSource(32844U);
    msg.setSourceEntity(233U);
    msg.setDestination(16521U);
    msg.setDestinationEntity(113U);
    msg.type = 66U;
    msg.command = 59U;
    msg.settings.assign("SYFYUDQNEPWPZQERUBUFKKVCWGMFGGREGVCVKTWILRFNUUXYPICSMNEJFQMBPIZIDBCKHBKWQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3700U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.728783025651;
    tmp_tmp_msg_0_0.lon = 0.350653773066;
    tmp_tmp_msg_0_0.eta = 3972634674U;
    tmp_tmp_msg_0_0.duration = 50184U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UOYIMYIIKLGJHTJAAONPWIQDZLZLNPDBPVJAMRLJDOSNISOSMTPYKDTIHOQCFBDEYONRGQNVZYTBKWFF");

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
    msg.setTimeStamp(0.155385461677);
    msg.setSource(38785U);
    msg.setSourceEntity(31U);
    msg.setDestination(48258U);
    msg.setDestinationEntity(80U);
    msg.state = 246U;
    msg.plan_id = 59779U;
    msg.wpt_id = 107U;
    msg.settings_chk = 13184U;

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
    msg.setTimeStamp(0.825575416973);
    msg.setSource(48349U);
    msg.setSourceEntity(173U);
    msg.setDestination(10698U);
    msg.setDestinationEntity(167U);
    msg.state = 212U;
    msg.plan_id = 43619U;
    msg.wpt_id = 190U;
    msg.settings_chk = 57557U;

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
    msg.setTimeStamp(0.152422916502);
    msg.setSource(30120U);
    msg.setSourceEntity(157U);
    msg.setDestination(42678U);
    msg.setDestinationEntity(231U);
    msg.state = 23U;
    msg.plan_id = 21778U;
    msg.wpt_id = 52U;
    msg.settings_chk = 64514U;

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
    msg.setTimeStamp(0.147767422642);
    msg.setSource(19226U);
    msg.setSourceEntity(208U);
    msg.setDestination(36775U);
    msg.setDestinationEntity(112U);
    msg.uid = 37U;
    msg.frag_number = 168U;
    msg.num_frags = 207U;
    const char tmp_msg_0[] = {93, 80, -106, 117, 115, -119, 53, 124, 126, 44, 106, 77, -20, -74, -27, 10, 84, 47, -6, -19};
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
    msg.setTimeStamp(0.476358021482);
    msg.setSource(2377U);
    msg.setSourceEntity(30U);
    msg.setDestination(40754U);
    msg.setDestinationEntity(143U);
    msg.uid = 122U;
    msg.frag_number = 224U;
    msg.num_frags = 165U;
    const char tmp_msg_0[] = {-68, 51, -95, 75, -111, 92, -63, -117, 12, -81, -7, -9, 126, 79, 121, 16, -36, 116, 51, 2, -89, 68, -63, 111, -128, -57, -101, 24, 65, -68, -64, 58, -7, -113, 103, -94, -120, 111, -102, -117, -40, -108, -35, 114, -49, -33, 48, 54, -89, 112, -49, 68, -102, -66, 25, -64, -98, 96, -128, 74, 93, 37, 106, -44, -29, 36, -18, -31, 58, 123, 104, 4, 88, -108, -69, -106, -85, -19, -46, -96, -4, -121, 104, -108, -70, 28, -105, -15, -24, 95, -96, -55, -62, -18, 34, -45, 41, -8, -33, 86, 13, 74, 108, -10, -54, 58, -126, 36, -84, 5, -23, -43, 71, 70, -117, -121, 75, -76, -78, 59, -105, -52, 64, 100, 74, -18, 17, 26, 17, 78, 98, 60, -6, 107, 114, 92, -38, -108, 6, -21, 9, -36, -116, 85, -2, 92, -72, 42, 6, -14, 49, 24, -111, 76, -56, 96, -15, 91, 0, -57, 52, -37, -9, -97, 113, 106, -29, 73, 33, -18, -36, -31, 98, -34, -78, 26, -52, -87, -91, -77, -45, -48, 126, -65, 37, 69, 112, -26, 72, 91, -49, 79, -84, -8, -87, 10, 78, -69, -51, -111, 115, 0, -98, -112, -114, -78, -42, 29, -61, -47, 18, 49, -35, -21, -91, 101, -79, -17, 43, -106, -71, 69, 71, -122, -92, -99, 85, -105, 16, 101, 59, -65, -61, 11, 34, -68, -107, 12, -35, -63, -76, -1, -74, -8, -3, 91, 8, 76, -30};
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
    msg.setTimeStamp(0.567365178106);
    msg.setSource(37734U);
    msg.setSourceEntity(142U);
    msg.setDestination(51456U);
    msg.setDestinationEntity(50U);
    msg.uid = 56U;
    msg.frag_number = 60U;
    msg.num_frags = 174U;
    const char tmp_msg_0[] = {-4, -57, -128, 106, 29, 2, 9, -116, -95, -39, 83, -40, 81, -46, 5, 100, 23, 17, -43, -55, 1, 122, 84, 122, -57, -29, 45, -71, 37, 88, 34, -32, 52, -68, -91, 53, -89, -90, -10, 14, -17, 16, -9, -105, 86, -122, 8, -4, -80, -90, 12, 85, -46, -67, 42, 0, 72, -128, 24, 118, 118, -68, -115, 51, 15, 46, -76, -126, -74, -11, 102, 26, 43, 24, -98, -97, -76, -54, -24, -20, -56, -39, -16, -2, 80, -31, -98, -74, -33, -103, 36, -120, 40, 112, 68, 41, 89, -120, 114, 84, -78, 85, -69, -94, 126, 108, -41, 17, -73, -13, -63, -7, 32, -70, -19, -76, 49, -21, 97, 68, -57, -73, -85, -124, 54, 114, 100, -106, -36, 27, 125, 13, -59, -10, 30, 34, -76, 66, 63, 51, 51, -8, -1, -13, 73, -84, 40, -89, -86, 81, 56, -15, 59, 2, -18, -41, 50, 15, 37, 19, -83, -35, -116, -99, 57, 9, 116, 68, 12, 121, 8, 32, -116, -110, 19, -65, 88};
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
    msg.setTimeStamp(0.704532604724);
    msg.setSource(6855U);
    msg.setSourceEntity(31U);
    msg.setDestination(53024U);
    msg.setDestinationEntity(42U);
    msg.content_type.assign("ZVFQWGPKZMFRRSXONNJJTORJHGTABLDEIHDHDTFQUMTSCAPRHFCSEXHGODCERUYMZNPGWOXEBRALJITXSFIQZZPBDQPUHWJFBIBSGADLXACPTUGMTKINDVPNBRUMVPXLAKZVFABYLORQHSZRNCOEJJAYIWNCUJECDKQET");
    const char tmp_msg_0[] = {125, -55, 19, 119, -47, 68, -4, -94, -22, -41, -108, -45, 12, -72, 49, -75, -121, -40, 107, 125, 11, -48, 72, -94, 23, -29, 115, -55, -2, 30, 57, -100, -60, -6, -110, -5, -1, -54, 63, -45, 124, -57, -128, -9, -124, -94, 22, -37, 50, -66, -58, -88, 77, 17, 110, -42, -30, -44, -44, -75, -127, -63, 87, 111, 52, -14, -29, -7, 116, -117, 50, -102, 54, -112, -113, 108, 8, -101, 99, -80, -41, -29, 123, 9, 111, -29, -35, 42, 76, -45, 83, -80, -118, 57, -13, -28, 76, 21, -94, -59, 96, -81, 55, -93, 29, 7, -35, -70, -22, -75, -30, 24, -70, -32, 39, 69, 31, -43};
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
    msg.setTimeStamp(0.654118025444);
    msg.setSource(10731U);
    msg.setSourceEntity(26U);
    msg.setDestination(28027U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("LQNCYTJHJNRHWSUPKYFEACZWLGAFTHOWBXTKEJCTPUNRZFVSRVYKHZNSMVCFMARYHPZOEASUBWNDDQVIUCXPNYQSPYZQIQHKVAMJEULSXOAGZIRRMWPGUYVZLLPTMJFZOWDQICT");
    const char tmp_msg_0[] = {62, -23, 85, 69, -15, 39, 9, 33, 23, 92, -14, -90, -92, -88, 28, -97, 83, -89, -100, -55, 109, -91, -41, -82, -16, 42, 9, -62, -62, 23, 56, 73, -80, 73, -94, 86, -69, 15, 108, -128, 91, 64, 45, -95, -77, -5, 53, 19, -125, 50, 116, 74, -91, -85, -100, 109, 110, -57, 42, -25, 108, 101, -37, -50, 69, 109, -71, 53, 59, 90, 6, -50, 64, -35, 79, 116, 122, -29, -26, -5, -7, 98, -5, 92, 87, 54, 62, 22, 15, 48, 67, 36, -113, 24, 58, 98, -87, -9, -118, -70, 14, 93, -40, 59, 46, 8, 33, -81, 66, -52, 19, 65, 10, -103, -79, 79, -49, 56, -68, -17, -112, -53, -83, -118, -64, -120, 26, 3, -13, -2, 6, 116, 74, -109, 84, 64, 50, -55, 73, -57, -125, 90, 110, 71, -10, -78, -57, -120, 1, 28, 90, -48, -96, -112, 5, -115, 13, 101, 1, -71, -54, 126, 68, -109, -30, -109, -67, 35, 105, 57, 80, 100, -77, -51, 48, -104, 112};
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
    msg.setTimeStamp(0.777991601534);
    msg.setSource(54690U);
    msg.setSourceEntity(173U);
    msg.setDestination(23174U);
    msg.setDestinationEntity(45U);
    msg.content_type.assign("SAFHCPCICVPMXIDZFICSRJWGMGZLHGIZNDVXDWBKYQPHHYLUMVDITTZSRLAJIOXNWPSOQRNTTU");
    const char tmp_msg_0[] = {64, -98, 75, -30, 96, -108, -66, 26, 25, -21, -113, -60, -23, 96, -103, 104, 35, -121, 11, -103, 96, 76, -101, 8, -85, -73, 95, -74, -71, -84, -5, 67, -30, 90, 19, -76, 31, 108, 31, -75, -33, -18, 15, -21, 14, 1, -62, 15, -61, -77, 112, 93, 97, -85, 15, -34, -116, 50, -20, -24, 7, -44, 64, 77, 108, -111, -47, -103, -77, 116, -5, 28, -14, 42, -32, 81, -85, -119, 30, -4, 25, 15, 75, 97, 44, 0, 0, -105, -62, -83, -100, -74, 83, 13, 26, 23, -55, 126, -41, 126, 51, -87, -6, 24, 3, -26, 93, -43, 105, -128, 73, 52, 4, 46, -16, -113, 49, -20, 45, 81, 6, -28, -1, 95, 79, -79, -104, 122, -31, 10, 112, -109, 75, 100, 29, 117, 34, 42, -99, -22, 45, -87, -29, 7, 76, 10, 41, 19, 47, -61, 42, -92, -95, -98, 62, 121, -36, -61, 6, 53, 45, -81, 100, 51, 61, -12, 13, -20, 38, 126, 87, 6, -56, 81, 121, -23, 12, 35, 78, -96, 44, -14, -99, 74, 58, -73, -103, -15, 81, -68, 20, 13, -119, 50, 97, 32, 84, -32, 45, 48, -81, 4, -71, -72, -91, -74, -16, -67, -70, 99, 87, -34, -10, -44, -29, -45, 1, 95};
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
    msg.setTimeStamp(0.754020642796);
    msg.setSource(27157U);
    msg.setSourceEntity(221U);
    msg.setDestination(60974U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.349173684194);
    msg.setSource(60973U);
    msg.setSourceEntity(233U);
    msg.setDestination(52281U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.173568374587);
    msg.setSource(62456U);
    msg.setSourceEntity(74U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.601814565749);
    msg.setSource(15142U);
    msg.setSourceEntity(26U);
    msg.setDestination(64364U);
    msg.setDestinationEntity(43U);
    msg.target = 63196U;
    msg.bearing = 0.817854180566;
    msg.elevation = 0.459329827566;

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
    msg.setTimeStamp(0.529184768287);
    msg.setSource(45345U);
    msg.setSourceEntity(0U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(60U);
    msg.target = 26229U;
    msg.bearing = 0.167521885316;
    msg.elevation = 0.749104676589;

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
    msg.setTimeStamp(0.654301850933);
    msg.setSource(34066U);
    msg.setSourceEntity(12U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(25U);
    msg.target = 27695U;
    msg.bearing = 0.0835784769614;
    msg.elevation = 0.367041388559;

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
    msg.setTimeStamp(0.501304475379);
    msg.setSource(47542U);
    msg.setSourceEntity(89U);
    msg.setDestination(23436U);
    msg.setDestinationEntity(241U);
    msg.target = 27779U;
    msg.x = 0.720476742895;
    msg.y = 0.299082220235;
    msg.z = 0.935646796022;

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
    msg.setTimeStamp(0.829514338887);
    msg.setSource(63753U);
    msg.setSourceEntity(147U);
    msg.setDestination(20307U);
    msg.setDestinationEntity(9U);
    msg.target = 16226U;
    msg.x = 0.694145618296;
    msg.y = 0.924744132356;
    msg.z = 0.627183160636;

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
    msg.setTimeStamp(0.104058259619);
    msg.setSource(31993U);
    msg.setSourceEntity(172U);
    msg.setDestination(30922U);
    msg.setDestinationEntity(140U);
    msg.target = 43758U;
    msg.x = 0.532372615562;
    msg.y = 0.243221330316;
    msg.z = 0.124356198171;

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
    msg.setTimeStamp(0.818110146917);
    msg.setSource(10647U);
    msg.setSourceEntity(20U);
    msg.setDestination(26611U);
    msg.setDestinationEntity(109U);
    msg.target = 55821U;
    msg.lat = 0.889568629809;
    msg.lon = 0.964467485808;
    msg.z_units = 174U;
    msg.z = 0.601492313807;

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
    msg.setTimeStamp(0.836949047816);
    msg.setSource(25181U);
    msg.setSourceEntity(118U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(48U);
    msg.target = 6589U;
    msg.lat = 0.147250973335;
    msg.lon = 0.675179929121;
    msg.z_units = 197U;
    msg.z = 0.994971561424;

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
    msg.setTimeStamp(0.78913605971);
    msg.setSource(58433U);
    msg.setSourceEntity(14U);
    msg.setDestination(34171U);
    msg.setDestinationEntity(54U);
    msg.target = 54548U;
    msg.lat = 0.519332597033;
    msg.lon = 0.0120268266957;
    msg.z_units = 167U;
    msg.z = 0.445539079434;

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
    msg.setTimeStamp(0.719669130943);
    msg.setSource(11009U);
    msg.setSourceEntity(170U);
    msg.setDestination(42927U);
    msg.setDestinationEntity(139U);
    msg.locale.assign("UFCQCLYWKTJNNNLHGKNBZMPCIZDEQFZUZXYSJOEWJMMKAAFYVCELHSFMZAKBSYQUEJWVGDQPBVTVXAXPEIOPJRLZZXROBIBUXCMAGCAXBBRCBQFVIRSTQFAVITYCXQWTB");
    const char tmp_msg_0[] = {-5, -107, 19, 115, -50, -96, 32, 62, 25, -102, 78, -30, 53, -7, -62, -32, 83, 50, -54, 89, 63, -128, 71, -81, -14, -78, 21, -113, -120, -7, -103, -121, 33, 6, -32, -85, 19, 5, -7, -86, 40, -87};
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
    msg.setTimeStamp(0.376228793233);
    msg.setSource(35955U);
    msg.setSourceEntity(26U);
    msg.setDestination(10305U);
    msg.setDestinationEntity(142U);
    msg.locale.assign("LTOOQZAELBYANFJKJKWNZRNOHXHFIPPRIVCIARNUIWBIIMCABWHEQVYSQHFKSNKBQCLANAKUVDKQPUUFKGZSJEERBMWQSO");
    const char tmp_msg_0[] = {99, -34, 89, 102, 15, -92, -4, -24, 111, 35, 65, -60, -43, 79, -118, -125, -91, -88, -117, -101, 87, -116, -80, -102, 59, 92, 11, -122, 88, 119, 2, 55, 25, -29, 29, -38, -57, 115, 72, 52, 51, 41, 39, 100, 73, -62, 40, 42, -105, -12, 97, -92, 120, -120, -72, -102, 1, -42, 76, 40, 41, 108, -79, -83, 115, 86, -11, 44, -109, -30, -46, 9, -104, 117, 61, -95, 29, 107, 88, -20, 97, -5, 29, -42, -45, 123, -89, 110, 30, -127, -4, 42, -67, -43, 17, -90, -88, -37, -14, -42, -66, -126, 15, -56, -75, -98, 48, -78, -125, 82, 50, -93, -27, -103, 48, 88, -2, -38, 43, 110, -104, -78, -109, -70, -8, 38, 75, 105, 42, 30, -100, -44, -98, 76, 23, 74, 36, -29, -13, 117, 106, 9, -22, 124, 23, 47, -18, -120, -28, 59, -25, 82, 90, -29, 96, -56, -36, 75, 91, -22, 0, -46, 89, -86, -69, -77, 7, -105, 103, -126, 94, -107, -61, -117, 57, -16, 44, 112, -117, 17, 69, -36, -51, -14, 51, -37, -15, 101, -9, 12, -104, 59, 51, 125, 81, -118, -68, -31, -44, 13, 45, -91, -62, -34, -118, 47, -25, -34, 102, -93, -65, 30, -49, -39, -19, 52, -66, 19, -118, -117, -74, -94, -111, 25};
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
    msg.setTimeStamp(0.333981681634);
    msg.setSource(12334U);
    msg.setSourceEntity(44U);
    msg.setDestination(51609U);
    msg.setDestinationEntity(82U);
    msg.locale.assign("HSOXCONPPREFJOJZAZMHWRXBJDUVYLBWKHAQGCXEWKITYDIAKINHVMACZQQNCUEWYXEJRDRPXLJJFLYGJUWZKYSBEVDJREYBKTDEFMV");
    const char tmp_msg_0[] = {124, -74, 47, 93, 25, 67, 81, 82, 108, -48, 21, 8, -74, -7, -81, 6, -113, 51, 5, -52, 91, 47, -43, 117, -125, 93, -12, 109, 24, -68, 26, -70, -80, 99, -16, 23, 37, 39, 84, -82, -105, 35, -62, -70, 28, -102, 29, -127, -19, 111, -18, -55, -120, 75, -28, 73, 30, -110, 14, -106, 60, -36, 57, 31, -122, 5, 22, -110, 29, -54, 1, 72, 27, 52, 90, 117, 75, 83, -7, -18, 13, 96, 66, -101, 72, 123, -59, 76, -121, 6, -51, -42, -69, 41, -42, 22, -92, 46, -67, -69, -3, 101, 125, 68, 84, -38, 17, -101, -62, 120, -55, -70, -12, 106, 110, -95, -43, 0, -90, 57, -1, -7, 81, -55, -47, 69, -51, 93, -100, -102, -102, 1, 2, 14, -126, -116, -22, 7, 88, -22, 107, -72, 55, -87, 123, 2, 5, 115, 111, -97, 105, -85, 57, -52, -77, -91, 56, -67, 83, 81, 43, 4, -67, 2, -94, 34, 46, -62, -12, 41, 4, -9, -20, -91, -47, -40, 12, -72, 78, 9, -25, -94, 112, 86, -47};
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
    msg.setTimeStamp(0.414308542399);
    msg.setSource(49615U);
    msg.setSourceEntity(61U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.660397780274);
    msg.setSource(31425U);
    msg.setSourceEntity(59U);
    msg.setDestination(36934U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.661989896603);
    msg.setSource(35478U);
    msg.setSourceEntity(68U);
    msg.setDestination(58406U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.289990751914);
    msg.setSource(47012U);
    msg.setSourceEntity(185U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(124U);
    msg.camid = 47U;
    msg.x = 33352U;
    msg.y = 40971U;

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
    msg.setTimeStamp(0.893210226702);
    msg.setSource(52578U);
    msg.setSourceEntity(138U);
    msg.setDestination(33441U);
    msg.setDestinationEntity(125U);
    msg.camid = 60U;
    msg.x = 60768U;
    msg.y = 32226U;

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
    msg.setTimeStamp(0.927078709011);
    msg.setSource(35865U);
    msg.setSourceEntity(178U);
    msg.setDestination(40993U);
    msg.setDestinationEntity(210U);
    msg.camid = 26U;
    msg.x = 26030U;
    msg.y = 4991U;

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
    msg.setTimeStamp(0.417613193088);
    msg.setSource(1350U);
    msg.setSourceEntity(25U);
    msg.setDestination(46773U);
    msg.setDestinationEntity(35U);
    msg.camid = 247U;
    msg.x = 16868U;
    msg.y = 23075U;

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
    msg.setTimeStamp(0.994804624232);
    msg.setSource(55995U);
    msg.setSourceEntity(105U);
    msg.setDestination(48028U);
    msg.setDestinationEntity(93U);
    msg.camid = 150U;
    msg.x = 38126U;
    msg.y = 14534U;

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
    msg.setTimeStamp(0.0453991087301);
    msg.setSource(48453U);
    msg.setSourceEntity(199U);
    msg.setDestination(5452U);
    msg.setDestinationEntity(198U);
    msg.camid = 244U;
    msg.x = 3512U;
    msg.y = 48646U;

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
    msg.setTimeStamp(0.99100056788);
    msg.setSource(50608U);
    msg.setSourceEntity(18U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(74U);
    msg.tracking = 72U;
    msg.lat = 0.499083160612;
    msg.lon = 0.676942273323;
    msg.x = 0.699053604217;
    msg.y = 0.163014312747;
    msg.z = 0.342963087525;

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
    msg.setTimeStamp(0.857934230235);
    msg.setSource(47476U);
    msg.setSourceEntity(138U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(165U);
    msg.tracking = 163U;
    msg.lat = 0.362919738844;
    msg.lon = 0.615738613441;
    msg.x = 0.769108403142;
    msg.y = 0.902749633174;
    msg.z = 0.145960127772;

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
    msg.setTimeStamp(0.335107258736);
    msg.setSource(26134U);
    msg.setSourceEntity(217U);
    msg.setDestination(10887U);
    msg.setDestinationEntity(173U);
    msg.tracking = 121U;
    msg.lat = 0.966349152047;
    msg.lon = 0.467298657773;
    msg.x = 0.285434429967;
    msg.y = 0.742566483104;
    msg.z = 0.821444426933;

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
    msg.setTimeStamp(0.430609640427);
    msg.setSource(31453U);
    msg.setSourceEntity(180U);
    msg.setDestination(29524U);
    msg.setDestinationEntity(9U);
    msg.target.assign("AFWUNOCEGPZKXOKLONQLIVKPMWAOZVOCNXLAHPASQLUXJCGLBNGEZFYHIEVRIKCVOWYBFDPPMKELRCPHHLTDYOCXBGSZCWTIFBHSPVSRLPWWSVUDDVBEHMQUJBHFKYHJNDFGABSWAJIZJGKVUQCR");
    msg.lbearing = 0.55235868929;
    msg.lelevation = 0.390092564136;
    msg.bearing = 0.0434362300379;
    msg.elevation = 0.945257258031;
    msg.phi = 0.663883103672;
    msg.theta = 0.643352246066;
    msg.psi = 0.484543071317;
    msg.accuracy = 0.954266063909;

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
    msg.setTimeStamp(0.379716826459);
    msg.setSource(3030U);
    msg.setSourceEntity(142U);
    msg.setDestination(56822U);
    msg.setDestinationEntity(210U);
    msg.target.assign("CBUVXZKHYQFLWSOUSBGHQFCDXWKISIODCUGWMSHPZYPKAYQHMPUXLNMDWVOZMYCFKGUXEZLUDXLFAYEWNQEJICIEDAAOIQVMKBYQEAOJTGBDDLGEXSOQVYCJTPNRBEOHATLAJOHVCTZIPZFXHMLJMQGJVSIYRUGGGURRUNHMXJCNKTKBFKNMRJRZQOZISAEN");
    msg.lbearing = 0.512005522758;
    msg.lelevation = 0.267118326364;
    msg.bearing = 0.119166511608;
    msg.elevation = 0.704400947003;
    msg.phi = 0.223362098814;
    msg.theta = 0.635660691029;
    msg.psi = 0.373500626073;
    msg.accuracy = 0.888492977499;

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
    msg.setTimeStamp(0.997746615904);
    msg.setSource(12979U);
    msg.setSourceEntity(212U);
    msg.setDestination(56467U);
    msg.setDestinationEntity(38U);
    msg.target.assign("ECAVAAQVBUBDNWCBDEINBUGHEVIUIJLQYVCGFPDJXYMYQPRNYIAWHUIVRTUPJTPMUZFLMTADWQGRKXOLKDJLSZXJGNHTOCMBTHDBAIRFOONQVWHDKXNYEBGUPZYFZYKUWRVJSRGGPOKHFSJQLTFWIQIHSAGSMLXWCSCSCLVNHEOYRPGVRJRAPJZSEUZAL");
    msg.lbearing = 0.737088683043;
    msg.lelevation = 0.546807178621;
    msg.bearing = 0.970890418774;
    msg.elevation = 0.689812178465;
    msg.phi = 0.396634028579;
    msg.theta = 0.878008969617;
    msg.psi = 0.0180721750883;
    msg.accuracy = 0.862449270698;

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
    msg.setTimeStamp(0.42987923506);
    msg.setSource(35964U);
    msg.setSourceEntity(22U);
    msg.setDestination(64245U);
    msg.setDestinationEntity(43U);
    msg.target.assign("KGTHECELQWWKPDROKWAEUQFUILGHDHDRJNRGGXSINFXUMZBLCVVEKJXMVTWHSARQFQPSHF");
    msg.x = 0.121807939565;
    msg.y = 0.519946938921;
    msg.z = 0.334456188532;
    msg.n = 0.399552725791;
    msg.e = 0.156845131438;
    msg.d = 0.844130364331;
    msg.phi = 0.266343435458;
    msg.theta = 0.346614575123;
    msg.psi = 0.402262313665;
    msg.accuracy = 0.95192183887;

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
    msg.setTimeStamp(0.341666963054);
    msg.setSource(16607U);
    msg.setSourceEntity(211U);
    msg.setDestination(3182U);
    msg.setDestinationEntity(181U);
    msg.target.assign("XASKVALSQQFQQUQGOTYAOGBNNGGLGEMAOCWZFWT");
    msg.x = 0.924317965319;
    msg.y = 0.091896502884;
    msg.z = 0.371871850156;
    msg.n = 0.0588852314108;
    msg.e = 0.379088679187;
    msg.d = 0.801459759445;
    msg.phi = 0.987541287553;
    msg.theta = 0.981682339894;
    msg.psi = 0.0866479580403;
    msg.accuracy = 0.465655058694;

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
    msg.setTimeStamp(0.265115703868);
    msg.setSource(18760U);
    msg.setSourceEntity(1U);
    msg.setDestination(6125U);
    msg.setDestinationEntity(104U);
    msg.target.assign("RWQUVLXYAUJKNWOOGSIMXRMBBQZLKCBYOCQTFXFHWAPK");
    msg.x = 0.49894518243;
    msg.y = 0.594101679787;
    msg.z = 0.829971724432;
    msg.n = 0.240156458315;
    msg.e = 0.405877168;
    msg.d = 0.790703465206;
    msg.phi = 0.480808197446;
    msg.theta = 0.903523554141;
    msg.psi = 0.811937613191;
    msg.accuracy = 0.109742281362;

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
    msg.setTimeStamp(0.0238525845168);
    msg.setSource(20293U);
    msg.setSourceEntity(11U);
    msg.setDestination(8761U);
    msg.setDestinationEntity(145U);
    msg.target.assign("WNDTUZQQVVJTANUPUYKYBKJXULFVQUJTSHZYWHYIXSOGIRMBJPTPDEEBICXRQIWXCXCOUNKRTJNEHFBGOFGLYNLMMRFVOIJLOGEICMGSVUOMSLTWESASOTBENKWHGSLJUIN");
    msg.lat = 0.811500685109;
    msg.lon = 0.216137150581;
    msg.z_units = 40U;
    msg.z = 0.0606653260148;
    msg.accuracy = 0.0274481374636;

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
    msg.setTimeStamp(0.224071830901);
    msg.setSource(15869U);
    msg.setSourceEntity(103U);
    msg.setDestination(60548U);
    msg.setDestinationEntity(138U);
    msg.target.assign("PBBUZYNZZLDXKCEZBWSEQEHFKCFYYJXQWOLGILQZHNMEKDYLTBIGJQMBVGMJFNUAVDDUADOORRQPVFJHGDKSSVQROFJNWQWBOLURGFCZXHTNWEOMNCLXQTVXINDIWAEGAPUFKSPZHHCTOBCNYUUFVESRSHXWOD");
    msg.lat = 0.921673068999;
    msg.lon = 0.499564431067;
    msg.z_units = 193U;
    msg.z = 0.273062797644;
    msg.accuracy = 0.876268173009;

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
    msg.setTimeStamp(0.389360609932);
    msg.setSource(16430U);
    msg.setSourceEntity(246U);
    msg.setDestination(37972U);
    msg.setDestinationEntity(160U);
    msg.target.assign("FVOQQWKMXENSZOZTUSCOLFVVGHYHXVDWJVFLJKCEPXIJEFQMD");
    msg.lat = 0.0887278470302;
    msg.lon = 0.734206497395;
    msg.z_units = 68U;
    msg.z = 0.132238611177;
    msg.accuracy = 0.965986441976;

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
    msg.setTimeStamp(0.270906412748);
    msg.setSource(2278U);
    msg.setSourceEntity(36U);
    msg.setDestination(32706U);
    msg.setDestinationEntity(118U);
    msg.name.assign("BMQELZKESKLDRCURTEGFVHUTTLNBLRAJBAVLOVKPYGNBJMXGBYIHNOSWENCB");
    msg.lat = 0.854902063277;
    msg.lon = 0.616878373609;
    msg.z = 0.172411588473;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.950718079382);
    msg.setSource(41792U);
    msg.setSourceEntity(140U);
    msg.setDestination(55076U);
    msg.setDestinationEntity(27U);
    msg.name.assign("ZSITLGWBMAKIABFORRYOYENAPPHESRVXQPGXPXVEOUVVJCPNWTTIHGWTOUCVEUEEDVTVLTQKHBEZUKGNQJNNFYBHIORGZSOFDWQQXXLUGUZLIUSJLMQOLMFFEBXJISUSAMZMMUQNGILPCRPIADTCKMZDKIRJDJPQTECJACYWKQYJJBMDRANEHTXCHWSWFKPDAZIXNFQAKFHOGRBRDKXBCVYZOKVZCMFBLPYZSDHNJXYTWGMCHBLGDNAFWUYORL");
    msg.lat = 0.277869347976;
    msg.lon = 0.119304610625;
    msg.z = 0.915284729504;
    msg.z_units = 154U;

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
    msg.setTimeStamp(0.751918757987);
    msg.setSource(43915U);
    msg.setSourceEntity(210U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(246U);
    msg.name.assign("ZVDAAUXWFQKPOJLKFQLQXUYCSOWJSOVKA");
    msg.lat = 0.0789231395067;
    msg.lon = 0.711919959915;
    msg.z = 0.531578832544;
    msg.z_units = 54U;

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
    msg.setTimeStamp(0.210420295954);
    msg.setSource(53819U);
    msg.setSourceEntity(40U);
    msg.setDestination(28550U);
    msg.setDestinationEntity(4U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.498676116595);
    msg.setSource(58164U);
    msg.setSourceEntity(33U);
    msg.setDestination(22841U);
    msg.setDestinationEntity(242U);
    msg.op = 155U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SWQWAEERVTYDXBGGKDVSUTAJOQHKNZDNDIWVSOZDMFZFIECKY");
    tmp_msg_0.lat = 0.855643129067;
    tmp_msg_0.lon = 0.746291911532;
    tmp_msg_0.z = 0.260966498507;
    tmp_msg_0.z_units = 107U;
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
    msg.setTimeStamp(0.199243799698);
    msg.setSource(3777U);
    msg.setSourceEntity(63U);
    msg.setDestination(62554U);
    msg.setDestinationEntity(6U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.309314472504);
    msg.setSource(25627U);
    msg.setSourceEntity(229U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(110U);
    msg.value = 0.286241564612;
    msg.type = 98U;

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
    msg.setTimeStamp(0.398766880635);
    msg.setSource(16118U);
    msg.setSourceEntity(243U);
    msg.setDestination(59554U);
    msg.setDestinationEntity(162U);
    msg.value = 0.0757741853033;
    msg.type = 245U;

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
    msg.setTimeStamp(0.0811224772633);
    msg.setSource(4182U);
    msg.setSourceEntity(70U);
    msg.setDestination(42702U);
    msg.setDestinationEntity(223U);
    msg.value = 0.984014206858;
    msg.type = 203U;

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
    msg.setTimeStamp(0.829967471673);
    msg.setSource(38550U);
    msg.setSourceEntity(57U);
    msg.setDestination(13795U);
    msg.setDestinationEntity(185U);
    msg.value = 0.216520715773;

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
    msg.setTimeStamp(0.879690938848);
    msg.setSource(31296U);
    msg.setSourceEntity(27U);
    msg.setDestination(46804U);
    msg.setDestinationEntity(213U);
    msg.value = 0.692773491902;

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
    msg.setTimeStamp(0.479745493545);
    msg.setSource(55859U);
    msg.setSourceEntity(38U);
    msg.setDestination(37865U);
    msg.setDestinationEntity(93U);
    msg.value = 0.989295645585;

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
    msg.setTimeStamp(0.0383747551453);
    msg.setSource(8235U);
    msg.setSourceEntity(94U);
    msg.setDestination(3776U);
    msg.setDestinationEntity(165U);
    msg.timestamp_last_service = 0.943242298939;
    msg.time_next_service = 0.432528747133;
    msg.time_motor_next_service = 0.574745480452;
    msg.time_idle_ground = 0.780606510773;
    msg.time_idle_air = 0.406785884943;
    msg.time_idle_water = 0.483068823484;
    msg.time_idle_underwater = 0.521656724557;
    msg.time_idle_unknown = 0.306074692314;
    msg.time_motor_ground = 0.802318924015;
    msg.time_motor_air = 0.532059489833;
    msg.time_motor_water = 0.52702845422;
    msg.time_motor_underwater = 0.519776114198;
    msg.time_motor_unknown = 0.918449485241;
    msg.rpm_min = -13048;
    msg.rpm_max = -28365;
    msg.depth_max = 0.846271739995;

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
    msg.setTimeStamp(0.897260111805);
    msg.setSource(39240U);
    msg.setSourceEntity(224U);
    msg.setDestination(5145U);
    msg.setDestinationEntity(136U);
    msg.timestamp_last_service = 0.288132641339;
    msg.time_next_service = 0.891356951298;
    msg.time_motor_next_service = 0.503096321099;
    msg.time_idle_ground = 0.603522073929;
    msg.time_idle_air = 0.23351567295;
    msg.time_idle_water = 0.213170761784;
    msg.time_idle_underwater = 0.369220104545;
    msg.time_idle_unknown = 0.387474260824;
    msg.time_motor_ground = 0.828246715014;
    msg.time_motor_air = 0.847574440383;
    msg.time_motor_water = 0.876744347637;
    msg.time_motor_underwater = 0.0643075626619;
    msg.time_motor_unknown = 0.524980947169;
    msg.rpm_min = -28976;
    msg.rpm_max = 16764;
    msg.depth_max = 0.590121103312;

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
    msg.setTimeStamp(0.423891458437);
    msg.setSource(18618U);
    msg.setSourceEntity(247U);
    msg.setDestination(26364U);
    msg.setDestinationEntity(55U);
    msg.timestamp_last_service = 0.324959010957;
    msg.time_next_service = 0.853357254217;
    msg.time_motor_next_service = 0.876587303773;
    msg.time_idle_ground = 0.768898555876;
    msg.time_idle_air = 0.971221483683;
    msg.time_idle_water = 0.0260923042991;
    msg.time_idle_underwater = 0.0375124620567;
    msg.time_idle_unknown = 0.438608818071;
    msg.time_motor_ground = 0.951675844639;
    msg.time_motor_air = 0.975825070615;
    msg.time_motor_water = 0.744305191936;
    msg.time_motor_underwater = 0.96442526243;
    msg.time_motor_unknown = 0.689412971306;
    msg.rpm_min = -27259;
    msg.rpm_max = -16751;
    msg.depth_max = 0.815059789929;

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
    msg.setTimeStamp(0.236019768324);
    msg.setSource(28051U);
    msg.setSourceEntity(203U);
    msg.setDestination(42536U);
    msg.setDestinationEntity(179U);
    msg.severity = 225U;
    msg.text.assign("ZCULWILPFEAIWLMCHCGKYXPDQXRZCGDKKSWNBVRIVBJQJQDAGDLGQOXMXGATYKMUHNHFMNFPWZKJWXPYBVZAOXQAOJTRHBEXQLZRQJECMWHXTACIBGTVZEVFILDVINYYLHRJBIMAO");

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
    msg.setTimeStamp(0.413035270735);
    msg.setSource(65496U);
    msg.setSourceEntity(35U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(34U);
    msg.severity = 73U;
    msg.text.assign("JZAQGCABQUYIHYMMUZUNLYAHLSDBQMNWVELNDWHAYZJMTQQFJCAMXKOXJXHOXHZRUKPJRWJOGEFMOYKESHIOPBDEVNCUZVTHYFUGKTMPETZVNUEELVDVEBIODGACSPWVYILKCVSFOIXACYKRZIPLPEUNAXQFTAHAHYMSCFWRFSKZMSR");

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
    msg.setTimeStamp(0.37727382058);
    msg.setSource(26916U);
    msg.setSourceEntity(21U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(75U);
    msg.severity = 105U;
    msg.text.assign("QNTILDVSJGBZRQNYEKTWSZRYLGTPKHGWVDWSDSEIQUFRFDKCLJHHNPNXWLZVMRBCGSPOLBBSIFJUIBRBKYLZNQRHNIMFOVHKYPYKAFEHCKXMTQAMPXXJHGDGDSTFTSRFHORVNTECIJVVLWJCDBOPEAFCIQTAUAHOSMWXG");

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
    msg.setTimeStamp(0.420622999489);
    msg.setSource(64459U);
    msg.setSourceEntity(67U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(14U);
    msg.channel = 36;
    msg.value = 98029711;
    msg.gain = 60U;

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
    msg.setTimeStamp(0.0587310011606);
    msg.setSource(8982U);
    msg.setSourceEntity(242U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(28U);
    msg.channel = 34;
    msg.value = 1971743461;
    msg.gain = 179U;

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
    msg.setTimeStamp(0.966010213641);
    msg.setSource(62397U);
    msg.setSourceEntity(250U);
    msg.setDestination(33400U);
    msg.setDestinationEntity(148U);
    msg.channel = -114;
    msg.value = 992117201;
    msg.gain = 68U;

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

  return test.getReturnValue();
}
