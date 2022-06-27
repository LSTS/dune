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
// IMC XML MD5: e79dff565382f2cf6d4b8b619b710976                            *
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
    msg.setTimeStamp(0.850621000728274);
    msg.setSource(7754U);
    msg.setSourceEntity(145U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(108U);
    msg.state = 219U;
    msg.flags = 240U;
    msg.description.assign("WMGKMNVCPBVSJ");

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
    msg.setTimeStamp(0.6516138829040066);
    msg.setSource(35223U);
    msg.setSourceEntity(47U);
    msg.setDestination(16904U);
    msg.setDestinationEntity(24U);
    msg.state = 111U;
    msg.flags = 221U;
    msg.description.assign("VNGSKITGTDQMNMBHKGLYKMYKAOCHBIUZBHLLRRAAJFCSSFFZUHGIHQECAFGIZQXMDPZRVMYYKTYRFPXQZYOXJGVBXLFIKEDTTLZCKTWXIQUUOFWRA");

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
    msg.setTimeStamp(0.4022385567024436);
    msg.setSource(50777U);
    msg.setSourceEntity(147U);
    msg.setDestination(45432U);
    msg.setDestinationEntity(249U);
    msg.state = 246U;
    msg.flags = 104U;
    msg.description.assign("YMNYPCNGKAMGSDKQJZSJYEUDEQXFEGRBGYZHYGOHSSTHWICEFGHPQPSXBHGUKJWDAMPBXRTHRLUFFBAMNQHSOACEP");

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
    msg.setTimeStamp(0.40333106223313564);
    msg.setSource(42269U);
    msg.setSourceEntity(47U);
    msg.setDestination(43891U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.09760920404723239);
    msg.setSource(4990U);
    msg.setSourceEntity(11U);
    msg.setDestination(62962U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.887491421619606);
    msg.setSource(57359U);
    msg.setSourceEntity(7U);
    msg.setDestination(35434U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.6661287897762589);
    msg.setSource(19230U);
    msg.setSourceEntity(10U);
    msg.setDestination(15395U);
    msg.setDestinationEntity(199U);
    msg.id = 206U;
    msg.label.assign("INVYRYXCRIOSKTXUODWDQICLQVDZZRYBFPTTEEEPKIGAQPCWNHLVYBCHXBDHMXERTAPUQKUMNUBRHJMXYOOOTMOVDGNVWRHBFQQGTYCIFLXOKHFWK");
    msg.component.assign("ELENOUXQKNCHGNPMSUPIHWOTMIHIVJZNDEVQBYJUFBADRQCTVVMBYUCGMGZZKUEHXPIHYMTQNPRMWCCXOUGSRPSBWYTWHNOWRAVKZFHTPGJLXZMRPJSGAVNLTTOYNEUDZROEIJKARKMLPBEFYKUUJKFODVGATBGLDIELBZNJAHSDSIWVZWSZQXOFLXITQHKJLJKGARRABSNYBIDGVLWLJQBTYOAZRXWUX");
    msg.act_time = 48823U;
    msg.deact_time = 9129U;

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
    msg.setTimeStamp(0.4309419713668191);
    msg.setSource(42759U);
    msg.setSourceEntity(166U);
    msg.setDestination(18543U);
    msg.setDestinationEntity(225U);
    msg.id = 250U;
    msg.label.assign("BHFRTQCRNQILHZXZIXDQTYGGODMKTTPNRCWXTPRCUAZZGUWEUCPMZGTPSDMBEEOGJYPWYYUQDMNAOKHEJFZYKMRKNAQSMC");
    msg.component.assign("PGGVXWJUKGFLQXZYRECZBQYYKZVDXASVIBNUFTPLJHQKUTBFVRXDQMRFFSRWHLBJQYTIZIECWNCWILTWUKMWAMIPOBFYNDYCNEMVIGGOCOLMAJHGAEJFOABBCQNURFNWLPCKTTMIBYRTZGDYEGGVRSILNFCVUADSSJCPDPDWEUVMMNLDQXRUSSZHDAAKOUORHLJUYKXGEXBAKKWPDHTAOXYHNFVEZONWSCSQTOMTJJEOQPXPILSPZHEHB");
    msg.act_time = 38304U;
    msg.deact_time = 60532U;

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
    msg.setTimeStamp(0.45418950304367056);
    msg.setSource(51186U);
    msg.setSourceEntity(144U);
    msg.setDestination(16499U);
    msg.setDestinationEntity(84U);
    msg.id = 229U;
    msg.label.assign("MLWTAWDKXXSAXQICRIFYLUWIURUOREJEVWNTFYIADAOOIVMQGSODGJANRUPSZCDYLDPRAENFDNQYJZYAMVMDVSVLEYBWSNBYN");
    msg.component.assign("PTKMYPQQZARMOXJDQKHIRUVCGTFIVHNIPEVBXAWDHKVFSERSCXQMBXXPDYKTFJNXMHYWGSWOZEKHCSTJGIG");
    msg.act_time = 3610U;
    msg.deact_time = 35221U;

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
    msg.setTimeStamp(0.4975847968272715);
    msg.setSource(55407U);
    msg.setSourceEntity(104U);
    msg.setDestination(39374U);
    msg.setDestinationEntity(156U);
    msg.id = 52U;

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
    msg.setTimeStamp(0.7957916848153098);
    msg.setSource(55150U);
    msg.setSourceEntity(161U);
    msg.setDestination(32205U);
    msg.setDestinationEntity(51U);
    msg.id = 12U;

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
    msg.setTimeStamp(0.40468930180701324);
    msg.setSource(33661U);
    msg.setSourceEntity(132U);
    msg.setDestination(49011U);
    msg.setDestinationEntity(87U);
    msg.id = 154U;

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
    msg.setTimeStamp(0.11683482754772789);
    msg.setSource(32294U);
    msg.setSourceEntity(97U);
    msg.setDestination(58800U);
    msg.setDestinationEntity(69U);
    msg.op = 140U;
    msg.list.assign("FNDQOGYCUJKBGVNZDDPHUBONGMBAXOYGHWLJIAVULSEOQIMYNXJPWXQOXYVHDMCAKLBXJUIPGQ");

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
    msg.setTimeStamp(0.7918068894640122);
    msg.setSource(42940U);
    msg.setSourceEntity(144U);
    msg.setDestination(35239U);
    msg.setDestinationEntity(154U);
    msg.op = 243U;
    msg.list.assign("YUOSGTDGYMJDDNALBCJSXLQBHKNKRUBSVJNTFIWU");

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
    msg.setTimeStamp(0.07697897973992018);
    msg.setSource(52720U);
    msg.setSourceEntity(204U);
    msg.setDestination(5137U);
    msg.setDestinationEntity(148U);
    msg.op = 205U;
    msg.list.assign("KLOMDQSHSAYADYPXQNZQGSJWBTIWAYUSBAROHBZFITLPJXUMPYXXOPNHQPJILFREBNOIGCGISEIMMOMDDGAJCKOBCQORWYOEAMIGTAGGNWYEPUOCBQMKRIRTTEWVHGPWKSIVVQBNUULFLSVKWYFEFMUTDVEZVHRVBGRFLUAUDSSSYTWFQCTNDECDLICMANNBJRVXLAT");

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
    msg.setTimeStamp(0.7979271290659521);
    msg.setSource(20818U);
    msg.setSourceEntity(88U);
    msg.setDestination(62419U);
    msg.setDestinationEntity(44U);
    msg.value = 247U;

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
    msg.setTimeStamp(0.751078065916341);
    msg.setSource(44322U);
    msg.setSourceEntity(154U);
    msg.setDestination(10447U);
    msg.setDestinationEntity(8U);
    msg.value = 145U;

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
    msg.setTimeStamp(0.7288256803615731);
    msg.setSource(12879U);
    msg.setSourceEntity(122U);
    msg.setDestination(4748U);
    msg.setDestinationEntity(52U);
    msg.value = 192U;

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
    msg.setTimeStamp(0.5659556834709073);
    msg.setSource(23306U);
    msg.setSourceEntity(14U);
    msg.setDestination(64741U);
    msg.setDestinationEntity(211U);
    msg.consumer.assign("WVHAJDIQRMNNPOFHKCMVFRSDOTGBXJCVJGDRVVKYAYNZGCHLHBOFKGHJGYETJIKZZEHWYCIVLNTNBZLPSMZESCZWSLMQOTIUTUUAZDBXGWZXXCYARDNROFIENSNVYDXLXQQFBGCOQIJEGFKSDMRUYLLKWXCXSAPURMDMECEJUBQIAPWLFLJDBZKNEPPQLWJFSNKQHXXGQWSAIIUPAMVEOABECHAOBOTHJDIKRUVUWTYHFVQFTROKRUPSZYB");
    msg.message_id = 18737U;

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
    msg.setTimeStamp(0.33938017380910646);
    msg.setSource(5639U);
    msg.setSourceEntity(132U);
    msg.setDestination(45457U);
    msg.setDestinationEntity(106U);
    msg.consumer.assign("WWMHXCHWMVBEJFOBYOABFKHVSOCSMWONOJGBSAOQRTWDMVKWJTNNKRWNCWNZBPJHFGQWUERLNERNQLUXDCF");
    msg.message_id = 35378U;

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
    msg.setTimeStamp(0.6042830307323204);
    msg.setSource(28338U);
    msg.setSourceEntity(75U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(196U);
    msg.consumer.assign("XNALAFOQPWOXUSLADNTRSBIZYPEJJSEHVTUDTFJNWMQAZBAGMASPBWWEGZAGOFYUEFKTHXKQ");
    msg.message_id = 61838U;

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
    msg.setTimeStamp(0.7053003758402526);
    msg.setSource(54873U);
    msg.setSourceEntity(84U);
    msg.setDestination(31565U);
    msg.setDestinationEntity(200U);
    msg.type = 246U;

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
    msg.setTimeStamp(0.32531887797636794);
    msg.setSource(54922U);
    msg.setSourceEntity(73U);
    msg.setDestination(46842U);
    msg.setDestinationEntity(26U);
    msg.type = 78U;

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
    msg.setTimeStamp(0.2387325676549139);
    msg.setSource(47146U);
    msg.setSourceEntity(46U);
    msg.setDestination(4155U);
    msg.setDestinationEntity(238U);
    msg.type = 185U;

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
    msg.setTimeStamp(0.17512889110244745);
    msg.setSource(31989U);
    msg.setSourceEntity(237U);
    msg.setDestination(26429U);
    msg.setDestinationEntity(137U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.7400045067732024);
    msg.setSource(53391U);
    msg.setSourceEntity(210U);
    msg.setDestination(6368U);
    msg.setDestinationEntity(107U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.693423982651432);
    msg.setSource(9962U);
    msg.setSourceEntity(158U);
    msg.setDestination(16994U);
    msg.setDestinationEntity(219U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.7817190730721936);
    msg.setSource(43260U);
    msg.setSourceEntity(250U);
    msg.setDestination(26475U);
    msg.setDestinationEntity(153U);
    msg.total_steps = 79U;
    msg.step_number = 106U;
    msg.step.assign("RVDLOIQOQCFBXVXPIWZVHSESHDJIMZUHGMCURUXNULQDWQXGAYCTXYUPYSCFDTHNBKWAVJFDJTPEVEBPZYBZKUUOHEODKIMIUEBPZBHWLRTANKTMQPOZDCFDGAEJSWZPHWHFNAGZVSMEVONQNSXFROIFNAXLBWSRZGLJYGMVZYEGTLNTGNBMHCPYFUWSYQECPLLJLMVJAFQTOXEIPQLTDOKJYNKASRMFDTYBR");
    msg.flags = 227U;

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
    msg.setTimeStamp(0.8729646999792452);
    msg.setSource(36522U);
    msg.setSourceEntity(182U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(214U);
    msg.total_steps = 55U;
    msg.step_number = 221U;
    msg.step.assign("GKGHTDHULMYFEMASDOOQMBUQEOSCUMCMJIVMPLHABXVLLIODGYYNOPXAIKEXQKGCCYEVCBJCRUZIQNHDHMZNXRFAWBPOIFZJBSTPGWLTWKUQPBJAIICDNBYWXQRFOSCHRWTLCAXZRYSJTFUDENNYUHLJKUGKEZOWYVEACPNKFDJUNXDJDVRNLWTBNSLVVQWZOQSQMUQPHPSFYZEIRTOJFGKFHSVTSPREGVHB");
    msg.flags = 141U;

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
    msg.setTimeStamp(0.9165243006395464);
    msg.setSource(39492U);
    msg.setSourceEntity(43U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(50U);
    msg.total_steps = 119U;
    msg.step_number = 67U;
    msg.step.assign("LFLVSNXYMNAOUBDGYTV");
    msg.flags = 252U;

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
    msg.setTimeStamp(0.7101666191163496);
    msg.setSource(28776U);
    msg.setSourceEntity(148U);
    msg.setDestination(30485U);
    msg.setDestinationEntity(83U);
    msg.state = 155U;
    msg.error.assign("HCBNNGZAYSBJSNICT");

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
    msg.setTimeStamp(0.656574658024354);
    msg.setSource(38143U);
    msg.setSourceEntity(118U);
    msg.setDestination(47519U);
    msg.setDestinationEntity(3U);
    msg.state = 3U;
    msg.error.assign("ZZPYVGLFOZPNZDKJRIXCKHLTHOHGHVCUGTOAMVCYKQPLLEUZIBKPXVBXOEBJUDGMLIIQXACBGUMKKOXCEBSWMWNBEYJQKPONIEFDSSCZYRZJWEAXFHRYAMIHLZJTRMV");

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
    msg.setTimeStamp(0.10048376368568734);
    msg.setSource(43376U);
    msg.setSourceEntity(88U);
    msg.setDestination(5836U);
    msg.setDestinationEntity(228U);
    msg.state = 17U;
    msg.error.assign("CDIXAEZORAPSWNEMDBEULAKCJTAVMLUAWRMTIQKPUEFKMXZUIUDAQBHJHSEMMZGGRNFJTFFXHFBKRIYEUIDSXMFGRCBPYDNTKWTDSVGQCITOBDSHYPPVUKJEHZGQLACBLTFWCTBLSLKRNBLQUJDG");

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
    msg.setTimeStamp(0.8208420926548639);
    msg.setSource(5556U);
    msg.setSourceEntity(171U);
    msg.setDestination(1878U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.557899227125924);
    msg.setSource(27505U);
    msg.setSourceEntity(99U);
    msg.setDestination(45000U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.25424493354684485);
    msg.setSource(44728U);
    msg.setSourceEntity(113U);
    msg.setDestination(7587U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.21167845916018946);
    msg.setSource(36931U);
    msg.setSourceEntity(27U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(0U);
    msg.op = 36U;
    msg.speed_min = 0.3222519152746307;
    msg.speed_max = 0.604436558569511;
    msg.long_accel = 0.1650793726525972;
    msg.alt_max_msl = 0.7499178359440402;
    msg.dive_fraction_max = 0.6111156692106808;
    msg.climb_fraction_max = 0.8810740921037321;
    msg.bank_max = 0.3980973911226988;
    msg.p_max = 0.8301776912997928;
    msg.pitch_min = 0.5927100980727108;
    msg.pitch_max = 0.4593970776410833;
    msg.q_max = 0.767344219597418;
    msg.g_min = 0.34765297378294835;
    msg.g_max = 0.36799903879652696;
    msg.g_lat_max = 0.44751163813888817;
    msg.rpm_min = 0.22901857697499906;
    msg.rpm_max = 0.2827437852402054;
    msg.rpm_rate_max = 0.21497592523099562;

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
    msg.setTimeStamp(0.16843176772761104);
    msg.setSource(51412U);
    msg.setSourceEntity(141U);
    msg.setDestination(44401U);
    msg.setDestinationEntity(102U);
    msg.op = 247U;
    msg.speed_min = 0.5686778853157368;
    msg.speed_max = 0.8293778304813636;
    msg.long_accel = 0.5744439875214731;
    msg.alt_max_msl = 0.12090145754679826;
    msg.dive_fraction_max = 0.8262669190605771;
    msg.climb_fraction_max = 0.5654789944920018;
    msg.bank_max = 0.859326544945463;
    msg.p_max = 0.8629695647815202;
    msg.pitch_min = 0.05849249900153497;
    msg.pitch_max = 0.36139152350150894;
    msg.q_max = 0.06566978554414005;
    msg.g_min = 0.9624546060155835;
    msg.g_max = 0.8986673221443668;
    msg.g_lat_max = 0.7361701289570303;
    msg.rpm_min = 0.17877743032490445;
    msg.rpm_max = 0.8340474074769286;
    msg.rpm_rate_max = 0.5241615082752473;

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
    msg.setTimeStamp(0.6397150007620372);
    msg.setSource(4302U);
    msg.setSourceEntity(52U);
    msg.setDestination(23348U);
    msg.setDestinationEntity(177U);
    msg.op = 94U;
    msg.speed_min = 0.7404148400377119;
    msg.speed_max = 0.800197071393615;
    msg.long_accel = 0.6809481152907544;
    msg.alt_max_msl = 0.733066861302774;
    msg.dive_fraction_max = 0.755601198408049;
    msg.climb_fraction_max = 0.14141012188226276;
    msg.bank_max = 0.14803543325541535;
    msg.p_max = 0.4402362415090335;
    msg.pitch_min = 0.40567268215652086;
    msg.pitch_max = 0.3689619334020472;
    msg.q_max = 0.3823104008813536;
    msg.g_min = 0.913885007506454;
    msg.g_max = 0.7828220577023552;
    msg.g_lat_max = 0.0014528673550344706;
    msg.rpm_min = 0.6617856760267984;
    msg.rpm_max = 0.44025646417812625;
    msg.rpm_rate_max = 0.4920874216093668;

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
    msg.setTimeStamp(0.28025294186064176);
    msg.setSource(42481U);
    msg.setSourceEntity(215U);
    msg.setDestination(20741U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.7325155963887264);
    msg.setSource(61164U);
    msg.setSourceEntity(96U);
    msg.setDestination(53965U);
    msg.setDestinationEntity(36U);
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("AMMWQPLNRIXDWCEICKQSJTBRAMYAFUAZFEWHITLZIZPDHJNXFZXNGRCTAWPXILDXYHZXQBMUVPNPLORGLYTNBUVTIEFQDZLTVNWJGWSHCCJVWTRBGMSWUOUCLGSVMVOQFQPHYYSNPJSYZHDYYUVRQODKKMAHHLCYZMUIPBDWPVAYOXKJXLEKZFZQQU");
    tmp_msg_0.type = 101U;
    tmp_msg_0.op = 159U;
    tmp_msg_0.group_name.assign("YXTKABXNXDJCRACDRTKDIRYZSFIGVSLTPIEJVMUIMKYXZJDNRHCATGUESYPLUPLPMQQTWWJNZOSYTFWMDLHBSHEAZNGOEVFASISHYELTJPYFRZWNNQWZRDJMFSCCPIEUNLQTMHKCACCKTAUUZHAWIGFWQJHSYMQGFBOEOBZUBXHBVSMVPFQMXVVXRINKBHADRDIETLBZQLXJGKFGYXLB");
    tmp_msg_0.plan_id.assign("WRVNBRUGUNPCNZKWGJKMRWDDGGSAZDUSXSCBGXFLATOHIUAKUOBWITFWSECMDDQPTFMJJMLTZAHHUKXYNUURLFABPIKGIDLGFQZEZVTIBHNSURNUOCMIVSKXHWRJHEALRYICCYQGFNNPQKELSOECLCQMOBZPJYWYZ");
    tmp_msg_0.description.assign("OCUBMNJULQFHPGKSGYJREVEKUFHYWWTZAWISBXOPCYSVBAYTHDCCREVNXMEIYVNVXWTTAKBXYITWVNHVXNEPWXKFIPODDRKREIUPMAVCOEJGUHDMAORDZPFJOHATLGVTFFQRURLBHKOWCYG");
    tmp_msg_0.reference_frame = 119U;
    tmp_msg_0.leader_bank_lim = 0.18728164095861477;
    tmp_msg_0.leader_speed_min = 0.22604092421489408;
    tmp_msg_0.leader_speed_max = 0.4099020105901292;
    tmp_msg_0.leader_alt_min = 0.08868165754877133;
    tmp_msg_0.leader_alt_max = 0.2688984281494531;
    tmp_msg_0.pos_sim_err_lim = 0.4839011880479901;
    tmp_msg_0.pos_sim_err_wrn = 0.6300135077893518;
    tmp_msg_0.pos_sim_err_timeout = 41179U;
    tmp_msg_0.converg_max = 0.12587795190483464;
    tmp_msg_0.converg_timeout = 7296U;
    tmp_msg_0.comms_timeout = 37489U;
    tmp_msg_0.turb_lim = 0.8854741742092487;
    tmp_msg_0.custom.assign("UOUYKEMYZBCXIWCLAFYGXQUKPJMDDOKIVUTXYPPSRNCRMFMSWLNNZLPQZVAPMUEJBUI");
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
    msg.setTimeStamp(0.21435062178837028);
    msg.setSource(1237U);
    msg.setSourceEntity(206U);
    msg.setDestination(19459U);
    msg.setDestinationEntity(47U);
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 250U;
    tmp_msg_0.op = 76U;
    tmp_msg_0.possimerr = 0.878386719275856;
    tmp_msg_0.converg = 0.5201909559902657;
    tmp_msg_0.turbulence = 0.21560895888066844;
    tmp_msg_0.possimmon = 160U;
    tmp_msg_0.commmon = 203U;
    tmp_msg_0.convergmon = 34U;
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
    msg.setTimeStamp(0.12601407552142718);
    msg.setSource(8009U);
    msg.setSourceEntity(103U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.8990042500538764;
    msg.lon = 0.5870027636480719;
    msg.height = 0.18518416392065784;
    msg.x = 0.5650225956993673;
    msg.y = 0.8319851409395814;
    msg.z = 0.7920271818543054;
    msg.phi = 0.38228577117773743;
    msg.theta = 0.17792680307060538;
    msg.psi = 0.18592960563888628;
    msg.u = 0.8141973160907003;
    msg.v = 0.4038180114210904;
    msg.w = 0.913250377447604;
    msg.p = 0.18828736025615156;
    msg.q = 0.2831964671109898;
    msg.r = 0.9883120741369628;
    msg.svx = 0.4301035785921541;
    msg.svy = 0.03825091225133126;
    msg.svz = 0.34317678748440605;

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
    msg.setTimeStamp(0.6889058306862224);
    msg.setSource(3462U);
    msg.setSourceEntity(49U);
    msg.setDestination(30166U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.8299815953813485;
    msg.lon = 0.740486001366034;
    msg.height = 0.5996604075249208;
    msg.x = 0.9746131540330027;
    msg.y = 0.9400261428375704;
    msg.z = 0.4619251322417669;
    msg.phi = 0.6552718297949577;
    msg.theta = 0.960807740545105;
    msg.psi = 0.43754499030767047;
    msg.u = 0.7657405580400564;
    msg.v = 0.9910258512611718;
    msg.w = 0.09168045859863627;
    msg.p = 0.43845050315450695;
    msg.q = 0.7735223097082154;
    msg.r = 0.7373954045147457;
    msg.svx = 0.024376887843495232;
    msg.svy = 0.6431854146750103;
    msg.svz = 0.6674784060515898;

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
    msg.setTimeStamp(0.8186914315352382);
    msg.setSource(50191U);
    msg.setSourceEntity(198U);
    msg.setDestination(6887U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.2831906896271469;
    msg.lon = 0.38628731783551884;
    msg.height = 0.4433459227404344;
    msg.x = 0.6747281146925628;
    msg.y = 0.14089719131247092;
    msg.z = 0.08164602804503929;
    msg.phi = 0.4878206363693601;
    msg.theta = 0.21276668421487466;
    msg.psi = 0.10365105820189202;
    msg.u = 0.34203989857594097;
    msg.v = 0.978687701402023;
    msg.w = 0.6768122057956693;
    msg.p = 0.8558807985713683;
    msg.q = 0.9869939916205747;
    msg.r = 0.8477332993764909;
    msg.svx = 0.15557423785309366;
    msg.svy = 0.6304754338356808;
    msg.svz = 0.6389093572936779;

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
    msg.setTimeStamp(0.29992400567737487);
    msg.setSource(10415U);
    msg.setSourceEntity(141U);
    msg.setDestination(51577U);
    msg.setDestinationEntity(182U);
    msg.op = 78U;
    msg.entities.assign("AIGTTMKYQAUXGKGKZETNXUQYGVWQFQYRUDNECUIWLADMKYBOXJSJVWRVISWFNBDUQVGJAPHYKLGVZQKLYVZTWZITODQUHVOESAYEPTVHSLSLEMNSRCFTMXKZCXFMHHHZORREXCOMDNSPBIFRHLUPZTLLKYCNEZRIEOUMMDFXGBIJGGUXVKDAZNMOSQCKACIJJMWSFYBTNLWPYRXWEEI");

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
    msg.setTimeStamp(0.7270614956449766);
    msg.setSource(29935U);
    msg.setSourceEntity(6U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(48U);
    msg.op = 236U;
    msg.entities.assign("YFXAVBOPDBGBAZRPQLDITAGHWRVPXZNCSBLPCOOQUPKI");

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
    msg.setTimeStamp(0.4557403592084568);
    msg.setSource(356U);
    msg.setSourceEntity(141U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(115U);
    msg.op = 101U;
    msg.entities.assign("LXFCYEPJBNRAYRFGBAJZZGNDNLCDLKPJTPCNEHYDPMVNNEVXHTOVVFBSZUKLSFMORBXBCSPTFVNYRUUALDAGVZKMHJHQWPKTPQYUBKUAOOUDKKQFBMIHLVVSZIWWTEQGWQ");

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
    msg.setTimeStamp(0.9879548630036484);
    msg.setSource(24205U);
    msg.setSourceEntity(96U);
    msg.setDestination(58256U);
    msg.setDestinationEntity(193U);
    msg.type = 236U;
    msg.speed = 22195U;
    const char tmp_msg_0[] = {-113, -113, -110, 45, 107, 66, -42, 26, -122, -79, -29, -12, 95, -35, -37, 88, 124, -68, 39, -15, 4, -102, 111, 13, -118, -108, 17, -28, 11, -89, -45, 5, 0, 105, -115, 119, -51, -7, -80, -61, 104, 110, -80, -26, -31, 91, 28, -52, 22, 3, -17};
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
    msg.setTimeStamp(0.7767748665693616);
    msg.setSource(29507U);
    msg.setSourceEntity(12U);
    msg.setDestination(9688U);
    msg.setDestinationEntity(122U);
    msg.type = 206U;
    msg.speed = 414U;
    const char tmp_msg_0[] = {84, 32, -49, -91, 99, 53, 45, -59, -123, 91, -110, -71, 120, 81, 104, 122, 100, -11, -31, -47, -92, 30, 105, 94, 7, -102, -32, -39, -70, -57, 61, 74, -59, 102, 101, 57, -94, -101, -29, 89, 113, -89, -118, -98, -48, -89, 91, 45, 14, 90, 116, 104, -94, 125, 58, 82, 99, 38, 17, -47, -122, -49, -59, -61, -62, 1, 38, -23, 1, -41, -67, 20, -123, -81, -9, 33, 61, 119, -125, -104, 94, 10, 115, -24, 83, -108, 85, 61, -103, 119, 100, -18, 73, -43, -79, 53, 65, -62, -81, 65, 115, -82, -119, -80, 10, 89, 123, 6, 42, 2, -40, 91, -31, 102, 50, 104, -73, -44, -33, 67, -42, 36, -106, -77, -108, -100, 50, 119, -98, -83, 70, 15, 57, -36, 26, -119, 120, -43, 48, 67, 36, 52, -32, -28, 90, -34, 100, 27, -10, 117, -117, -105, -25, -29, -48, 49, -91, 65, -3, 4, 51, -45, 75, -6, 98, 0, 105, 126, -11, 19, -105, -16, 105, -60, -50, -108, -11, 76, -31, 53, 73, -38, 114, 64, 0, -73, -100, -46, -83, 20, -40, 34, -80, -70, 103, -23, 108, -33, -84, -34, 121, -26, -2, 107, -59, -59, 94, 119, 37, 12, 109, 115, 17, 83, -62, 2, 59, 21, -97, 116, -27, -26, -21, -104, -105, -94, 0, 48, 97, -32, -16, -19, 114, 11, 75, -48, 32, 96, -73, -110, -106, -100, -47, -105, 72, 16, 46};
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
    msg.setTimeStamp(0.9189538264507698);
    msg.setSource(48883U);
    msg.setSourceEntity(240U);
    msg.setDestination(1681U);
    msg.setDestinationEntity(181U);
    msg.type = 84U;
    msg.speed = 25857U;
    const char tmp_msg_0[] = {-54, 108, -42, -85, -9, 27, 35, -29, -33, -20, -128, 115, 25, -81, -100, -90, 111, 105, -59, 104, -7, 39, 8, 76, 121, -60, -100, 28, -37, -68, -108, 21, -2, 73, -70, 68, 47, 74, -40, -109, -66, 77, 120, 88, -55, 122, -9, 83, 104, -21, 43, 74, -94, 97, -99, -108, -70, -106, 63, 54, -56, 67, -95, -50, 20, -62, 85, -118, 45, -17, -5, -122, 31, 112, -125, -114, 56, 25, 87, 19, 80, -31, 120, -23, 104, -74, -5, 1, -98, 75, 116, 99, 57, -70, 109, -27, 114, 93, 14, 55, 62, -37, 93, 107, 67, -1, 22, 103, 51, 30, 6, 59, -46, -72, 112, -110, -9, 95, -94, 119, -78, -34, -70, 26, 3, 116, -125, -124, 0, 96, 86, -81, 49, 64, -121, -100, -43, -66, -62, 105, -110, 30, 121, -63, -20, 114, 102, -27, 69, -51, 4, -114, -128, 120, -61, -104, -118, -10, 91, 79, 6, 55, -79, -52, -110, -70, 53, -38, -18, 79, -41, 106, -57, -11, 53, 121, 24, 13, -124, -102, -11, -44, 113, -2, 10, 13, -39, 92, -87, -78, -30, -73, -121, 25};
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
    msg.setTimeStamp(0.6911943881714435);
    msg.setSource(37628U);
    msg.setSourceEntity(35U);
    msg.setDestination(30467U);
    msg.setDestinationEntity(166U);
    msg.op = 224U;
    msg.tas2acc_pgain = 0.705194147957871;
    msg.bank2p_pgain = 0.6242744879149438;

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
    msg.setTimeStamp(0.6229435931948459);
    msg.setSource(56847U);
    msg.setSourceEntity(47U);
    msg.setDestination(47858U);
    msg.setDestinationEntity(86U);
    msg.op = 127U;
    msg.tas2acc_pgain = 0.6935042239932934;
    msg.bank2p_pgain = 0.605507694337746;

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
    msg.setTimeStamp(0.05759336470605936);
    msg.setSource(36308U);
    msg.setSourceEntity(47U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(169U);
    msg.op = 207U;
    msg.tas2acc_pgain = 0.06174408839841983;
    msg.bank2p_pgain = 0.5268957173554276;

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
    msg.setTimeStamp(0.8704671126338633);
    msg.setSource(57234U);
    msg.setSourceEntity(129U);
    msg.setDestination(9161U);
    msg.setDestinationEntity(13U);
    msg.available = 1793158505U;
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
    msg.setTimeStamp(0.49687324502932706);
    msg.setSource(483U);
    msg.setSourceEntity(96U);
    msg.setDestination(30771U);
    msg.setDestinationEntity(218U);
    msg.available = 1374130007U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.5462903123505947);
    msg.setSource(25002U);
    msg.setSourceEntity(98U);
    msg.setDestination(50417U);
    msg.setDestinationEntity(139U);
    msg.available = 3863106162U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.970830988269722);
    msg.setSource(43497U);
    msg.setSourceEntity(175U);
    msg.setDestination(12362U);
    msg.setDestinationEntity(115U);
    msg.op = 5U;
    msg.snapshot.assign("SDVZXBEQBSMJMTFTMKHA");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("JOIIPBBWLCDZMEEFLMNJKYMJRDKTMRNMZDUQVZYOPUIVMBAUMDINUJAECHBBJMMCQSFHKZDHOAQYIRKTYPRYFJAXGSCLREXVGLYCTZWFVXAGYGESDALNQJOWBU");
    tmp_msg_0.visibility.assign("LDYSAVCNXETWUZOZ");
    tmp_msg_0.scope.assign("MXFIKWTIFOXEFNEZHSBGVKUACLCPZABCHHLYHHEPLWNRPCYYOSCIGQQSQQDURBAVTQRZMWDNATOEGFWBPIMUUOITVQFTBLSQDZRUGTAVXSFOPREGSBXY");
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
    msg.setTimeStamp(0.21893788611109088);
    msg.setSource(60840U);
    msg.setSourceEntity(47U);
    msg.setDestination(5732U);
    msg.setDestinationEntity(90U);
    msg.op = 142U;
    msg.snapshot.assign("HFLXWVAMYGWTNVXKSLRZYNGIKMHFXDZDZPTDOBIJPQWCKNSRLELASHXEKZXQHREUSBBYFWEKIEEHHWXIMDVSYEWTFBPSDVGMUCBOVHQCYJADLDQWNAJIBNHFVUVUIFSEFPKTFJCPMTUATUTPQORJOCZJDYSPUZXZONBUXYWGSCKXOGJLXIATMLVLDJPZMGANTGYCHJQYBGGYDRQANVF");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("ZRIWPQYIUADNHCNYZMPFOJZERJGPFMFSWXWUINVNXMRCRTVWDSHBCASBNUYFFUHSGJOGTRXCGQTKKOEGEGCPTRHEJBKWXHDNMOJVWTQLZOIDPDLKUXVDTTZKXYO");
    tmp_msg_0.service_type = 46U;
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
    msg.setTimeStamp(0.2076963313300979);
    msg.setSource(52252U);
    msg.setSourceEntity(44U);
    msg.setDestination(48005U);
    msg.setDestinationEntity(116U);
    msg.op = 236U;
    msg.snapshot.assign("YUFFZTBCZSUARPLTUGPDBVECCHTTWZXJSQKOFAVFKJPFNUMEBHIGKTRKPZOCGIAWKXYVALLDMDDYHNRSRVGKPCILMNHZWGOQEHJZKDPJAKEVBXCSXESIEBKWBPOQUIHLUMQHRSYFRQCACLRJJCYYTEAVPWUDMDUHGLSMGHAGLYOABRRAIOHDYMPBZJ");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("KUNQRSWKKEWTEXHYQCGVCXWNJTWNCBZHACRJGFSNHRXOMCMYBBZZIAFIMAHPVRKEBFLCUIMDNHPXRYGIBTQIFPKOSRBTYPPJQTJLUBAWCZNIHVNDUKYUKXDGJEZYMWLOHJDNPOIPRDFBLGKXMOHASYQUJEGMJSVTRSXSMOOVKCATEUWHGODIIGVQFBTIRPUVAWHQQNTQKLFVFTPNXJJLZOLDERZGUZWCOEFXDYYZGXWCSSLEUVLDESMBA");
    tmp_msg_0.value = 191U;
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
    msg.setTimeStamp(0.9059607648959077);
    msg.setSource(31780U);
    msg.setSourceEntity(215U);
    msg.setDestination(54222U);
    msg.setDestinationEntity(191U);
    msg.op = 152U;
    msg.name.assign("OMRKXBORKAJGTKQPRTOASQYDFPYTZJOUYPSVDRLBBXRIDAJKHGABJGBSYLCOUITJDSRVHLMETCNINQTFHVIQMFLPZARCXQUTBCFAKOQGQGNFMOPPESZUMZWMDBHAHPKNHBIRNDAYUZWPNZFVCQSWHJEUMVUIWDZGXUGEKTIXJLHJFYLVVOWGDSSEYPUWCAOWXZQWOMHCVVNUIDVAYXKLJBEN");

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
    msg.setTimeStamp(0.28687879606522304);
    msg.setSource(18118U);
    msg.setSourceEntity(7U);
    msg.setDestination(31694U);
    msg.setDestinationEntity(168U);
    msg.op = 183U;
    msg.name.assign("JAGWGTCATYTFNNZXPVVDIWFHSHQCGMXUTLFLBAYSDZYJZERUHHBXTQLWKBBOIZYILMTJTRICURWSSHDEBWVSIRVUGDZFGPVCBINFMBXPHKKWPOC");

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
    msg.setTimeStamp(0.40081034461319487);
    msg.setSource(59628U);
    msg.setSourceEntity(176U);
    msg.setDestination(63827U);
    msg.setDestinationEntity(211U);
    msg.op = 131U;
    msg.name.assign("SBVQFGEZQHNLGYYFVAHGTYEKFNWTANJHKOXTHAUELPJNKZPPWVUXHMTRMHPNOSVWUIXQIKUPHACWTDCLBVFFNMAUOGZYXLUTICEDWOIXLYSRPGJKVFSEFMCEHAYEJTWDPBMZAABOIDXVOOLZXIVBJAGHWKUSRQADMTTZWSVETYIFYCKJKXFMRGIVRLQKCCNDRHZCGMNXEDJQSUXSBBZ");

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
    msg.setTimeStamp(0.26787803798597454);
    msg.setSource(21487U);
    msg.setSourceEntity(193U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(160U);
    msg.type = 7U;
    msg.htime = 0.5589829002892911;
    msg.context.assign("FRJBYJGJPJXPZOXKVQJDQ");
    msg.text.assign("NBNCJGXODFFPQKONTAQEOIXJWVGNLEC");

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
    msg.setTimeStamp(0.46216116912131533);
    msg.setSource(6426U);
    msg.setSourceEntity(188U);
    msg.setDestination(40904U);
    msg.setDestinationEntity(144U);
    msg.type = 78U;
    msg.htime = 0.5804927160202276;
    msg.context.assign("CALTADLYSIXMRVRJQGBRVBUPLABIXWKZZBJWTFHSPMOLXGSEOVRKGLWPUOXIKFBDSDXGDUCETCUYDFXDJZQMONJGFGMCQALYGYZPJMAAEYFSGWPTVQBQJPVUSJRLAWNHPMFTCZHTOINFRNFAKRUYVPTEDQNSMFYHDKPBZZEOZBCXXIHYDENOET");
    msg.text.assign("MJWGNBYPIGVRYMHBSQDMKVGFWUAOWQZHTPIRRZXXLCFYMKWPJVYCHVWCRASUMLEDUJREMDOLKSIUCFECEJXPVSRTFQUTMGUWBKZXHCJIDNAVBOJOBMGKOKJTYPGENLXFAQIVIAOQHYZLZQKSDCOCONDFDSUSHWORDTBRWOBFEG");

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
    msg.setTimeStamp(0.36474284444941496);
    msg.setSource(51474U);
    msg.setSourceEntity(180U);
    msg.setDestination(41456U);
    msg.setDestinationEntity(174U);
    msg.type = 119U;
    msg.htime = 0.9592731075778662;
    msg.context.assign("MPUTVPTTFHPHEQJECRUKPONSAGGVYOXHVXAZIYWWWFOGCUCJWAURHNWBYFSTYQOSIBFRIMMGRGRJPRYGCWXAVZGMKTSHFDUIAINKGQCRODUHLJNKVLHNSASCAXZFWIEXPAELCBPLNTY");
    msg.text.assign("RHYZSTCLFTVWOMVYSRFAYWRLKZNUKACBTPCTWEZRLNMXDWXUPTIEPKPUOFGIKDHATIGJMMUXKTKUYEBJIHZXDCPOEAFMLZZ");

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
    msg.setTimeStamp(0.6065851790052003);
    msg.setSource(29187U);
    msg.setSourceEntity(77U);
    msg.setDestination(22462U);
    msg.setDestinationEntity(179U);
    msg.command = 182U;
    msg.htime = 0.5766978835827575;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 224U;
    tmp_msg_0.htime = 0.22760353426184554;
    tmp_msg_0.context.assign("QHLMZCANLSDGNUINLSHPFDDATAVMXGDMTVSTXWVJFDWZWPRWSIRYUZHXAVQPUXWAEGFEKXFDVUFTFTBUIWFUTKNOJECTEOJKXKIYNJLBUNDZSY");
    tmp_msg_0.text.assign("GVSFPPORLQYIAUCFZXWFBYLHBJTAGUDPYAMOXTNVWXIBTJCNYHKVBUOKNCQPPZGNDSBROONPMVFRRQVVEWDEETBWDAURMOIXXZZTMYCMAILOBIJKXTXBUWTNSTQHELYLVMFLWXHDLUSKRSHUDKSGCAQJOIQSOFUNDVMUKHZQVOJVIGKUZIZLXHEEGISWKHCQY");
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
    msg.setTimeStamp(0.1644254868622499);
    msg.setSource(59335U);
    msg.setSourceEntity(5U);
    msg.setDestination(20393U);
    msg.setDestinationEntity(217U);
    msg.command = 145U;
    msg.htime = 0.2917338180061977;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 84U;
    tmp_msg_0.htime = 0.838936382187722;
    tmp_msg_0.context.assign("QGOIWHGFHQRZBZJEGIARZKWHNCJVPHXGWAEJWVSRRJGDUFXOTBXZQZKULUCWJXBHMPPIXXFDLADCNONMZERLCFFAHPHGMQLUWFFRGPDRDGJNILFCKVHAK");
    tmp_msg_0.text.assign("ELGQXWMAPCVGQJKQPTBAYIMPFRLCBQOWVIVZGVFFMSUXEELONRFZNAAWCKTKMJGRKBBNTTMSIDLQQNZQXKRIASMFUDPDSXNSUWNYWH");
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
    msg.setTimeStamp(0.4351185490714361);
    msg.setSource(59355U);
    msg.setSourceEntity(238U);
    msg.setDestination(17826U);
    msg.setDestinationEntity(10U);
    msg.command = 28U;
    msg.htime = 0.926489377551929;

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
    msg.setTimeStamp(0.17611325646018294);
    msg.setSource(57871U);
    msg.setSourceEntity(66U);
    msg.setDestination(20010U);
    msg.setDestinationEntity(102U);
    msg.op = 156U;
    msg.file.assign("UKTYKLKYPSQSGTSZKTECPJJPIYHEHNBGYCUDFWOGLQMXCRPOREVSMAPMHAPVVEOVJCIAWNDXRBLBUAZKDHAFBMLFDKIYFXNSD");

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
    msg.setTimeStamp(0.8840118728732824);
    msg.setSource(1412U);
    msg.setSourceEntity(240U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(112U);
    msg.op = 201U;
    msg.file.assign("WTXSODAMOOKMHTUCRSSVNKQIXYTJIVBJWNMPZJHUNEYPHKNJKFXPGCNVOBZYZPGXLCHLFQWTPMBRMCQIVUDNIFOWSRZQAUOOKDAFHHYAISYBGPDLLYUEZIIVPUPDZDZHBQTQRURAZQUWGKTJMBRHEXAOSSKBFXJSEQJWIMJCDEBRJDDHHDYCGUNQYZFWFO");

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
    msg.setTimeStamp(0.10171063012246673);
    msg.setSource(24920U);
    msg.setSourceEntity(189U);
    msg.setDestination(54248U);
    msg.setDestinationEntity(126U);
    msg.op = 151U;
    msg.file.assign("UAGHDJWEYJWQHKLAHUKGQJUGUOJNARZCOPLYTLMEHZRRKOLPRNSMXZWKBBIGOYTWPPOKPDNMSGSNTACHHDCQRK");

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
    msg.setTimeStamp(0.027137057077366467);
    msg.setSource(30027U);
    msg.setSourceEntity(141U);
    msg.setDestination(12295U);
    msg.setDestinationEntity(20U);
    msg.op = 227U;
    msg.clock = 0.5124565266379686;
    msg.tz = -101;

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
    msg.setTimeStamp(0.858518194670327);
    msg.setSource(37950U);
    msg.setSourceEntity(83U);
    msg.setDestination(28243U);
    msg.setDestinationEntity(96U);
    msg.op = 203U;
    msg.clock = 0.40172728850001693;
    msg.tz = 7;

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
    msg.setTimeStamp(0.35373829381406674);
    msg.setSource(10958U);
    msg.setSourceEntity(247U);
    msg.setDestination(27511U);
    msg.setDestinationEntity(226U);
    msg.op = 138U;
    msg.clock = 0.9196114823956201;
    msg.tz = 114;

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
    msg.setTimeStamp(0.8849929994476199);
    msg.setSource(39881U);
    msg.setSourceEntity(254U);
    msg.setDestination(27286U);
    msg.setDestinationEntity(41U);
    msg.conductivity = 0.8006916785898174;
    msg.temperature = 0.5089191476790771;
    msg.depth = 0.11903251373235724;

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
    msg.setTimeStamp(0.8674112756128012);
    msg.setSource(4663U);
    msg.setSourceEntity(20U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(202U);
    msg.conductivity = 0.039101583724871936;
    msg.temperature = 0.7843309317996028;
    msg.depth = 0.14216906563520737;

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
    msg.setTimeStamp(0.21990844401950993);
    msg.setSource(46354U);
    msg.setSourceEntity(13U);
    msg.setDestination(65108U);
    msg.setDestinationEntity(30U);
    msg.conductivity = 0.7861451390761255;
    msg.temperature = 0.6904053926190419;
    msg.depth = 0.7297469721892931;

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
    msg.setTimeStamp(0.323273546993747);
    msg.setSource(24044U);
    msg.setSourceEntity(73U);
    msg.setDestination(61050U);
    msg.setDestinationEntity(158U);
    msg.altitude = 0.4966398941231325;
    msg.roll = 43152U;
    msg.pitch = 2992U;
    msg.yaw = 59251U;
    msg.speed = -27464;

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
    msg.setTimeStamp(0.2307155168427385);
    msg.setSource(5198U);
    msg.setSourceEntity(31U);
    msg.setDestination(21073U);
    msg.setDestinationEntity(4U);
    msg.altitude = 0.8511861554620048;
    msg.roll = 46497U;
    msg.pitch = 11478U;
    msg.yaw = 61562U;
    msg.speed = 24215;

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
    msg.setTimeStamp(0.5680807487033387);
    msg.setSource(3231U);
    msg.setSourceEntity(231U);
    msg.setDestination(14828U);
    msg.setDestinationEntity(68U);
    msg.altitude = 0.8671384881170369;
    msg.roll = 64488U;
    msg.pitch = 16692U;
    msg.yaw = 55796U;
    msg.speed = -13749;

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
    msg.setTimeStamp(0.9457242589809471);
    msg.setSource(7252U);
    msg.setSourceEntity(173U);
    msg.setDestination(18719U);
    msg.setDestinationEntity(244U);
    msg.altitude = 0.8763203409583277;
    msg.width = 0.39756919719510764;
    msg.length = 0.24334806366020212;
    msg.bearing = 0.03764934486907057;
    msg.pxl = 13499;
    msg.encoding = 19U;
    const char tmp_msg_0[] = {-73, -4, -93, 118, -74, -43, 38, 81, -114, -56, 80, 89, -50, -70, -55, 123, -31, 45, -75, -49, 105, 84, 113, 74, 8, 32, -118, 11, 64, 74, -2, -44, 112, 15, 21, -50, -54, 112, -19, -47, 19, -126, 56, 3, -15, 105, -91, -25, -64, -113, 75, -59, -63, 100, 37, 47, 11, 108, -82, 18, 82, -71, 7, 105, -40, 85, -33, 12, 78, -97, -27, 14, 126, 1, -63, 82, 106, 0, 62, -121, 44};
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
    msg.setTimeStamp(0.30457956927397467);
    msg.setSource(34388U);
    msg.setSourceEntity(153U);
    msg.setDestination(57765U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.9452628308399864;
    msg.width = 0.6741794643125378;
    msg.length = 0.797903384658577;
    msg.bearing = 0.6954056384355207;
    msg.pxl = -7623;
    msg.encoding = 220U;
    const char tmp_msg_0[] = {-65, 93, 75, 73, -1, -125, -112, -66, -71, -63, 84, 66, -85, 29, -98, 93, 33, -22, 20, 115, 20, 115, 0, 96, -114, 25, -13, -99, -57, 91, -94, 31, 40, 40, -17, -43, 51, -122, 7, 14, -44, -105, -128, 64, -118, -123, 125, 65, -111, 44, -100, 123, -120, -105, -124, 115, -82, -94, 126, 68, -110, 113, 66, -71, 124, -32, -92, -65, 44, 79, -43, 86, 22, -122, 95, 100, 0, 3, -5, -13, -93, -93, 45, -128, -16, 113, 36, -106, 116, -17, 72, 52, -4, -77, 98, 41, -126, 118, 34, 17, -55, -121, -69};
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
    msg.setTimeStamp(0.8254989221825364);
    msg.setSource(44156U);
    msg.setSourceEntity(68U);
    msg.setDestination(51353U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.32028164767714384;
    msg.width = 0.5582119835991929;
    msg.length = 0.7494848868407191;
    msg.bearing = 0.3422760870537742;
    msg.pxl = -3880;
    msg.encoding = 157U;
    const char tmp_msg_0[] = {46, 121, -4, -36, 53, 59, 32, 104, 85, -112, -55, -106, 8, -24, 8, 4, -66, 48, -111, -48, 69, -112, 62, 90, -43, 89, 94, 96, 58, 82, -102, -1, -38, 112, 7, 98, 45, 99, -33, 107, -96, -10, 50, 6, -72, 119, -46, -5, 23, 29, -119, 106, -69, 87, -23, 66, 91, 77, 11, -1, 115, 60, -46, -97, 79, -38, 122, 17, 102, 43, -9, -79, -25, -18, 25, 109, 38, 100, -104, 22, 91, 30, -12, 95, 58, -96, -19, 76, -122, -126, 35, -90, -1, -56, -42, -1, 23, 13, -125, -109, 28, -40, -108, 92, -93, 80, 2, -20, 23, 59, -16, -39, -81, -59, -51, -69, 47, 32, 12, -80, -121, 118, 65, -14, 29, 108, -114, 3, 16, -69, 105, 86, 96, -61, -60, -62, 124, 63, -58, 85, -41, -9, 124, 80, 114, -117, 50, 47, -5, -47, 97, 70, -111, 19, 107, 53, -88, 121, 18, 115, -24, -62, -95, -2, -126, -121, -67, 19, 67, -97, -70, -88, -43, 77, 17, -110, 62, -96, -77, 124, 40, 68, -126, -82, -83, 111, 113, 73, 57, -32};
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
    msg.setTimeStamp(0.20973445887676645);
    msg.setSource(52214U);
    msg.setSourceEntity(235U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(85U);
    msg.text.assign("IOYPCQKVUXAGPIAVQOLRECZHFFEMYSMXDOCDADOFRAFNOLHMWEGAILUVMW");
    msg.type = 31U;

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
    msg.setTimeStamp(0.7036154328845541);
    msg.setSource(20229U);
    msg.setSourceEntity(41U);
    msg.setDestination(13797U);
    msg.setDestinationEntity(97U);
    msg.text.assign("CDGDNKYXEQIEAGCOXLHJRAMPRICCHDMBXAMUMPXPKNQVLPFVBIZGIJWWCLFTLPBYVMAYOEOVJUUVEWBJDJPQCXRS");
    msg.type = 8U;

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
    msg.setTimeStamp(0.4215548178978664);
    msg.setSource(37244U);
    msg.setSourceEntity(104U);
    msg.setDestination(39560U);
    msg.setDestinationEntity(232U);
    msg.text.assign("RGXKXDNXBKWERKJIYOTRTYCFLZRLWLOBVIDOGCFADTVSDKPLKIOKPWXLBXAURSJDLRNOAHTZELGSFQAXKIIHTPCPGOWEZQWISJFBHGCRSUGMMBEMIWYHYKBZAECZBQUGILDHJENCCDPQLUJXIVZDVTMPCYJSMJNWHN");
    msg.type = 171U;

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
    msg.setTimeStamp(0.219127470338778);
    msg.setSource(41529U);
    msg.setSourceEntity(183U);
    msg.setDestination(58516U);
    msg.setDestinationEntity(18U);
    msg.parameter = 149U;
    msg.numsamples = 47U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 45823U;
    tmp_msg_0.avg = 0.5449613123925005;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.06155234057900605;
    msg.lon = 0.10098618050251085;

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
    msg.setTimeStamp(0.6515210328627352);
    msg.setSource(39074U);
    msg.setSourceEntity(220U);
    msg.setDestination(21892U);
    msg.setDestinationEntity(113U);
    msg.parameter = 54U;
    msg.numsamples = 78U;
    msg.lat = 0.7162266497137536;
    msg.lon = 0.8631581090035397;

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
    msg.setTimeStamp(0.14502896906402252);
    msg.setSource(38105U);
    msg.setSourceEntity(162U);
    msg.setDestination(62851U);
    msg.setDestinationEntity(133U);
    msg.parameter = 114U;
    msg.numsamples = 22U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 62777U;
    tmp_msg_0.avg = 0.6980759915838666;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8119208870739849;
    msg.lon = 0.7815141540076949;

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
    msg.setTimeStamp(0.501980855702371);
    msg.setSource(83U);
    msg.setSourceEntity(209U);
    msg.setDestination(34621U);
    msg.setDestinationEntity(188U);
    msg.depth = 45762U;
    msg.avg = 0.062167317702381486;

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
    msg.setTimeStamp(0.7108023373780129);
    msg.setSource(44394U);
    msg.setSourceEntity(116U);
    msg.setDestination(63943U);
    msg.setDestinationEntity(240U);
    msg.depth = 53077U;
    msg.avg = 0.13545835574314236;

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
    msg.setTimeStamp(0.8899871010360338);
    msg.setSource(2284U);
    msg.setSourceEntity(86U);
    msg.setDestination(53867U);
    msg.setDestinationEntity(164U);
    msg.depth = 42954U;
    msg.avg = 0.8242820907643501;

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
    msg.setTimeStamp(0.07251592932513118);
    msg.setSource(46436U);
    msg.setSourceEntity(16U);
    msg.setDestination(64574U);
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
    msg.setTimeStamp(0.8533242330507794);
    msg.setSource(7716U);
    msg.setSourceEntity(235U);
    msg.setDestination(23260U);
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
    msg.setTimeStamp(0.7809993368347206);
    msg.setSource(14381U);
    msg.setSourceEntity(0U);
    msg.setDestination(50375U);
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
    msg.setTimeStamp(0.8388092353819822);
    msg.setSource(19068U);
    msg.setSourceEntity(6U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(62U);
    msg.sys_name.assign("NCFESCVKZZPMZCTELFGNCGNAUOJWVZQXDHYIDOBWTJMOLTLDBQAFHWVIKCCYHPFALKZNTUCQCFGPZRJJDJTVAMEMPYYBXPTDXIXGJGHHBITWQDGOZOMLVBSFAPAURUIMHNCVOEBUHWKEWNLLLZHOLERVMARPRLMJNAHRSJEJQURSKBEYVFNHIMIIEATPQCYGZSWUKUGGOUWDYYKFWBUTGPVQVBFOXYXRFTAEDIDJXNQSSMKRYZXXS");
    msg.sys_type = 237U;
    msg.owner = 52805U;
    msg.lat = 0.29819528220491087;
    msg.lon = 0.17304964340479168;
    msg.height = 0.7718934329256952;
    msg.services.assign("VDZZRBMULNTYSFDOKRBXCLYPOPOQIUUNQQUAOPXYVLWXDEAIQJHUTWBZTTVRJMMFKGIAFWXZYNYEAZNSYGTNBMNASITDNGJEHQBSLOUFQWUYLCAUCWHJRWZGHDHOPKYDFVTPFAKRZEJGSHKPGGEPHNKMALWGRKROLDAFQUOPMBKOSQZBHSVXRIQFNXZVREMDCGXNYKJOWHMUJGCVMBIKXYVBPTJRXMSCDZJDIHLEBWJEAQIIVTCFC");

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
    msg.setTimeStamp(0.6519528610786208);
    msg.setSource(12828U);
    msg.setSourceEntity(45U);
    msg.setDestination(48877U);
    msg.setDestinationEntity(204U);
    msg.sys_name.assign("RLKBVOOUKQTFSPSLOTNPWGDAEELUJUHVYEJWFGVSXDQEUYMIPFMBMTAVULZWGORFSNIWDWIPXPBEXCJLOSTRIOGZZYRMKRVIQIWHZCXZLNJHHECFTUVYTCVGAQTXRNLQKGCQBNKHOFPAZXFPHKMHUJFMLOMGSLREPORMKJDFAVWAUGGXCZDNKQCIFBHIYR");
    msg.sys_type = 90U;
    msg.owner = 39581U;
    msg.lat = 0.9275027703309314;
    msg.lon = 0.06387640072854839;
    msg.height = 0.5604377818758042;
    msg.services.assign("MZOTDZLZKKAUNYBAHIIVCLDWZABSCVTYYMROQVCRGBNHCIHSUACXYKPHNZGEQFYLZLSBFJNVTGRJMSEQAMOPWRCQCSJUKRTIWKQZGPHDERDCWTWNVOMSOHNRFITKSVBPDMVDTERGHQHXIXKPKQDPHDEXMJTPIXUPFULNFFJJSFOQIIM");

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
    msg.setTimeStamp(0.5223537882976855);
    msg.setSource(28842U);
    msg.setSourceEntity(158U);
    msg.setDestination(39015U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("SMZZEWVDJTVMALCHBFDMKRSQPERNFETJDUQXJZPQGDHFNONQFCIHICOHFEGBUQIKCXTETURXDYCGMLQOBBDRJYYNWXQKPEJZNDKKHOOLQLRSIBFNPGSOIPVHDXRZCCVVTFSZFLXWUUNHXTBRGRLQLAWMAKEIEJINMBUXKTOBGWYIVZSJBVYUUWVFKAUNAGSTOZCMPMHDHGEWEWXIL");
    msg.sys_type = 242U;
    msg.owner = 9047U;
    msg.lat = 0.43204854386437797;
    msg.lon = 0.7153032808258627;
    msg.height = 0.1720522710129192;
    msg.services.assign("DRKBRPGBQFQGXFSDRQULZVLVGSLIVHWKSLHBNNHPRFTEZRESFQMFDDKDCCAEOUWAIANEUQYLMSAIGXYJXKREJUSXIHNGNOPWOMSQRKNXBUSHKBXNYPBOLTUQXEFOTYRMVYWUEGVVLSDCM");

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
    msg.setTimeStamp(0.1856131450755556);
    msg.setSource(58788U);
    msg.setSourceEntity(32U);
    msg.setDestination(37816U);
    msg.setDestinationEntity(58U);
    msg.service.assign("JUHAWOWIYJZVEUMSJFIISDNVZQZQMARCXWWDYIKVJHZWDRXFWDZNCWXJGRBGJJPKVFUAFGBSCTOVJGIFANRGCVMXVIXEKLBTGVACQLKPQQSDZPSMGLS");
    msg.service_type = 129U;

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
    msg.setTimeStamp(0.8655097372103843);
    msg.setSource(57456U);
    msg.setSourceEntity(251U);
    msg.setDestination(32994U);
    msg.setDestinationEntity(60U);
    msg.service.assign("QJNDKTEMNLCXVTYGQCBQNPYEJXVGMHSZUFEBIICUAFCQKOJGIXE");
    msg.service_type = 80U;

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
    msg.setTimeStamp(0.12563338853473616);
    msg.setSource(12412U);
    msg.setSourceEntity(93U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(41U);
    msg.service.assign("ZHDPYQMBEZPMELQERKLOOMDSWXZLAUPGXTUEDJYUZOEUWSODJYOQRGBKFGGEGRVBVKBVKPPUJBHVVELUXJSZIWNNCNTIJFGQWDYHQTURHCOPAMCCTQCFWYOXTOCLIGMVMGVPYACRJCHIZLBHAEDQLDSCKNTRAWAXXSAPFLPTDJPKWSMZYMLJSZQSNVIKKFKXEURTNHNBUWFJZBHMMQXAFGLNTF");
    msg.service_type = 71U;

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
    msg.setTimeStamp(0.8590509238393659);
    msg.setSource(51299U);
    msg.setSourceEntity(0U);
    msg.setDestination(55187U);
    msg.setDestinationEntity(153U);
    msg.value = 0.011657765501311035;

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
    msg.setTimeStamp(0.25830791500541483);
    msg.setSource(59251U);
    msg.setSourceEntity(11U);
    msg.setDestination(47378U);
    msg.setDestinationEntity(114U);
    msg.value = 0.0885679215594869;

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
    msg.setTimeStamp(0.19729061852019247);
    msg.setSource(36235U);
    msg.setSourceEntity(52U);
    msg.setDestination(3720U);
    msg.setDestinationEntity(231U);
    msg.value = 0.647439286112258;

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
    msg.setTimeStamp(0.09235640563468073);
    msg.setSource(61903U);
    msg.setSourceEntity(192U);
    msg.setDestination(39271U);
    msg.setDestinationEntity(6U);
    msg.value = 0.04318386506458949;

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
    msg.setTimeStamp(0.6603216374018701);
    msg.setSource(568U);
    msg.setSourceEntity(15U);
    msg.setDestination(64090U);
    msg.setDestinationEntity(150U);
    msg.value = 0.7802369527191988;

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
    msg.setTimeStamp(0.38224501667958166);
    msg.setSource(35021U);
    msg.setSourceEntity(164U);
    msg.setDestination(65463U);
    msg.setDestinationEntity(172U);
    msg.value = 0.04673827012944054;

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
    msg.setTimeStamp(0.9318076015644232);
    msg.setSource(3782U);
    msg.setSourceEntity(187U);
    msg.setDestination(22094U);
    msg.setDestinationEntity(162U);
    msg.value = 0.4692431961624667;

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
    msg.setTimeStamp(0.2741019599325516);
    msg.setSource(7384U);
    msg.setSourceEntity(145U);
    msg.setDestination(589U);
    msg.setDestinationEntity(81U);
    msg.value = 0.9333169085391544;

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
    msg.setTimeStamp(0.7428010827162351);
    msg.setSource(46016U);
    msg.setSourceEntity(107U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(95U);
    msg.value = 0.5510401846379515;

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
    msg.setTimeStamp(0.5749961928733055);
    msg.setSource(12941U);
    msg.setSourceEntity(98U);
    msg.setDestination(35140U);
    msg.setDestinationEntity(92U);
    msg.number.assign("QMQGDPVHMLRTCAQKDKYTCCZZPNDKZOUMXLLFFMWKRMKAOPSPUSLZFWSTTTLSZZWNIRCOUDSQWYEBKYTDUPUCIOKJVXDKMELQWABTRXQPELBE");
    msg.timeout = 47696U;
    msg.contents.assign("YVZWBGLVGCTBGGVFHQOCUMBFOYEPRRNZRLDGKBHSWSDQWYJAFWTNOYENRKCUYHQBRFHPNHMXUTBPPHAHKAQZDRRFFTEUTUUODXFYDEXSSLESGYAJJUZHKIWMLKLMWXDSWBJTPNQCCEBCRLNXRELAIOTJXAVZDNUJCTZTVFODIPSOWFMAUIIJMG");

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
    msg.setTimeStamp(0.4090259988465993);
    msg.setSource(13824U);
    msg.setSourceEntity(67U);
    msg.setDestination(60423U);
    msg.setDestinationEntity(219U);
    msg.number.assign("BSDHPHDZXFZTCPUGJWUGHXV");
    msg.timeout = 4094U;
    msg.contents.assign("ZOHQQDGREVBHJPUXZLVIOGYPAMAQCHOJKSNAERAGGVKZKLMNFYMUMHNCMRKXTSIEOQPQDDFOTDWOBONCZAJLDPYFXDKBTHBCTQRLXFRTSNMZUSQJPGVKSCGEHDXSQECRBIBMLJIJZWLHMXARCSTTWWLNXBUCVJENERFGYNIESLYQQITAUOMKGFRUSFPHYBAGDZFEJWIUPMBKUGWUIIOEZWFKOVSWFI");

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
    msg.setTimeStamp(0.48358161517191045);
    msg.setSource(23418U);
    msg.setSourceEntity(152U);
    msg.setDestination(20503U);
    msg.setDestinationEntity(108U);
    msg.number.assign("SKNRERZJMQFYUTLSPHGRQUSIBWQNYCUWCHKZEJAOGGTCYSXSWNPKQAVUYGVQZWPMHTHSYFZCWXLHMXCXKQSBZXIBQHELWPRJTLPBLKYOIAMUUYTGLJCHAFVJZAPQDZWPRGHOISMDDQLOATJHMBEVCSAFOXVIDLNAVNRFMIRCNYTDNQGDFU");
    msg.timeout = 4056U;
    msg.contents.assign("NIODYKWJYXJCOADPXESMPLZCJGYHQHELOGYJKTFX");

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
    msg.setTimeStamp(0.5105872659732894);
    msg.setSource(38846U);
    msg.setSourceEntity(224U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(165U);
    msg.seq = 876516817U;
    msg.destination.assign("RUXOGLATTNSJQSUZUWPVMOBDONBGMCZRPRGQSHNALSWTXISOWHKDWWQYVYHMTTSFFVFIIQRVAIYMCPBOGGLIHUSFDEQUKZFFADOYSGELVBHSHOUVUELDQBCMRHZPAIFKGOEBHHZLUZDEDJEBYETRIPYBGXCNXNKMWGLQBPHTNRVJVLDKAXJCNLAEXUYUKJCFKCZJWT");
    msg.timeout = 41947U;
    const char tmp_msg_0[] = {-36, 121, 20, 111, 71, -55, 88, 98, 52, -66, -27, 41, 63, 120, -65, -72, -8, -93, 43, 60, 27, 79, -30, -3, -15, 84, 93, -3, -50, -19, 96, 35, 106, 41, -123, -108, 97, 97, -102, -115, -29, 103, 30, 27, 40, 59, 57, -33, 20, 99, -126, -92, 69, -17, -62, 36, -21, -85, 99};
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
    msg.setTimeStamp(0.7985987487357911);
    msg.setSource(36640U);
    msg.setSourceEntity(24U);
    msg.setDestination(21218U);
    msg.setDestinationEntity(28U);
    msg.seq = 998552513U;
    msg.destination.assign("DHTXVBUTKQGKZCHDWPDXYMZYSHWNSZCBAWDZDXTBGXFYVFGNMBLEOBAWRVINKEKULULKTNPAHEOOVXCCGAHFZJFMUGTF");
    msg.timeout = 47311U;
    const char tmp_msg_0[] = {-74, 121, -124, 32, -48, -94, -80, 112, -16, -66, 113, -120, -71, 26, -51, -79, 69, -50, -54, -38, 112, 49, 15, -38, -117, -103, 99, 6, 104, -124, -12, 64, -15, -91, 21, -12, 18, -105, 79, -39, -18, 63, 105, 46, 83, 109, -55, 109, -58, -93, 11, -74, -89, 102, -115, 32, 2, 34, 50, -51, 121, -80, -29, -63, 94, 29, -89, 66, -49, -107, -53, -121, -16, -119, 51, -52, -93, -113, 65, -89, -6, -86, 98, 85, 80, -103, -54, 4, 56, 20, 105, 5, -4, -27, -109, -125, -117, -77, -40, -96, 29, -19, -88, -70, 111, 98, -52, 25, 70, 88, 69, 88, -13, 13, -48, 86, 9, 100, -61, 20, 106, -36, 46, -15, -100, -61, -54, -59, -25, 9, 16, -72, -17, 58, 124, 12, -45, 59, -26, -9, -75, -39, -25, 15, -49, -70, -24, 108, -126, -19, -110, -92, 98, 6, -106, 58, 54, 65, 104, 92, -50, -51, 46, -56};
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
    msg.setTimeStamp(0.023030424484382306);
    msg.setSource(50961U);
    msg.setSourceEntity(95U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(67U);
    msg.seq = 2187333113U;
    msg.destination.assign("RCPOLMGRQROZIEQDIGTENPCTXXZUJQBHMGAGRMVIPTERAHDYJMWZJ");
    msg.timeout = 47617U;
    const char tmp_msg_0[] = {98, -63, 95, -122, -107, -62, -108, 98, -72, -77, 10, -95, 82, 39, 7, -29, 12, -28, 71, -104, 95, 110, -11, 38, 41, -4, -1, 46, -35, 122, 34, -99, 60, -124, -48, -35, -7, 42, 18, 122, 33, 43, 57, 95, -43, 10, 53, -9, -36, 6, 90, -13, 47, -50, -46, -104, 57, 81, -25, 102, -110, -26, -33, -22, 65, 126, 74, -89, 53, -35, 18, 78, -40, 33, -4, 7, 60, 50, -54, -100, -6, 82, -4, -80, 68, 117, 90, 116, 32, 12, 51, -83, 115, -82, -4, -22, -70, -56, -18, -8, -120, -25, -44, -67, 39, 89, 96, -19, -28, 31, -33, -108, 7, -15, 4, 8, 99, 76, -119, -44, -64, 88, 74, -72, -36, -124, -107, -18, 85, -96, -107, -26, 27, 48, -119, 86, -99, -78, 94, 47, -120, 85, -26, -48, 64, 54, -71, -43, -2, 45, 28, -91, -26, -86, -58, -97, 122, 82, 71, 108, -42, 113, 98, 82, 81, 42, 118, -101, 31, -89, 20, -118, -46, 101, -97, 73, -121, -113, -62, -105, -81, -77, 12, 118, -46, -63, -72, 38, 23, 60, 81, 19, -86, 34, 75};
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
    msg.setTimeStamp(0.6361005753433773);
    msg.setSource(43806U);
    msg.setSourceEntity(203U);
    msg.setDestination(59924U);
    msg.setDestinationEntity(201U);
    msg.source.assign("BBCYHVPPMHTPIJBIJURLFJYKGZEMARBQWNEJUYPUGDQACBLEMIXZTXZFBZXCQTASMHPRNOSGHVEDOVFOKOVPZWYFPAVKGSUNXUOZAUFDHYWQYDPRLGMQQBXQYFVLBYSKOBNNKXMZXDQLVJKTCVIWGETSJKUDDNKHFJMAJZMOVRA");
    const char tmp_msg_0[] = {-106, 78, 122, -25, -88, -95, -8, 98, 82, 64, 87, 37, -84, -108, 103, 57, 47, 0, -9, 40, 96, -104, 84, -73, 47, -84, -94, -21, -48, 126, 18, -2, -4, 32, -4, 30, -59, 84, -53, -24, 114, 63, 72, -31, -37, 11, 50, 31, 52, 71, 51, -102, -102, -90, -33, -26, -46, 89, 88, 79, -75, -45, 22, 124, 82, -70, 106, 65, 20, -51, -47, -117, -125, -85, -41, 58, -85, 21, 113, 92, -104, 61, 91, 46, -12, 42, -62, -52, -122, 65, 110, 26, 103, 14, -19, 102, 23, -112, 119, -74, 15, -47, 97, -23, -42, 36, -17, -50, 37, 94, -118, 78, 85, 60, -67, -34, 69, -31, -2, -93, 65, 51, -35, 74, 61, 68, 43, 100, -41, -110, -85, 76, -42, 100, 32, 103, -123, 0, -83, 100, 121, 59, 80, 51, -103, 44, -35, -115, 30, -122, -10};
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
    msg.setTimeStamp(0.7673534555240408);
    msg.setSource(48156U);
    msg.setSourceEntity(134U);
    msg.setDestination(49813U);
    msg.setDestinationEntity(110U);
    msg.source.assign("SMZQNXZJBDTEPWZIOFEPUXLUAVNMSJINFETTJYDOQJBETXCQPCNAGZLWUYSFTJKEKJTXKXXMYWFAFPE");
    const char tmp_msg_0[] = {126, 50, -31, -31, -45, 125, -105, -49, -7, 100, 76, -13, -112, 19, -31, -108, -44, -94, -30, 11, -60, -67, 6, -18, -81, -64, -108, -73, 90, -124, 109, -64, -91, 84, 34, 111, -123, -48, -73, -107, -6, -122, -3, 119, 81, -23, 62, 64, -29, 80, -103, -78, -121, 29, -41, 74, 104, -25, 50, 59, 65, -70, 65, -2, 124, -110, 72, -103, 52, 21, 52, 90, 35, -6, -3, -31, 14, 86, 11, 109, 20, 95, 122, -106, -66, 94, -75, 0, -33, 16, 118, -49, -58, -70, 102, -60, 105, -103, 41, -91, -96, 6, 42, 17, 31, 0, -92, 8, -105, 70, -33};
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
    msg.setTimeStamp(0.30017474475892414);
    msg.setSource(55619U);
    msg.setSourceEntity(95U);
    msg.setDestination(39756U);
    msg.setDestinationEntity(67U);
    msg.source.assign("MMNGIECISVEKQBUCFNUFXWPH");
    const char tmp_msg_0[] = {66, 58, 108, -29, 44, -101, -77, 56, 116, 29, 113, 95, -32, -74, -52, 11, -80, 34, 17, -55, -79, 8, -2, 85, -103, 91, 107, -54, 91, -112, 76, 71, 66, -33, -34, 4, -5, -9, -111, 52, -39, 105, -123, -58, -42, -51, 82, -16, 40, 17, 119, 16, 88, -104, 32, 124, 46, 115, 98, -17, 100, 1, -108, -42, -49, 103, -4, -49, -99, 53, 109, 48, -9, 44, 9, 60, -71, 47, 79, 108, 109, -108, 105, -46, 81, 85, -61, -125, 10, -106, 95, -12, -123, 16, -7, -47, 62, -44, -31, 64, -72, 114, -11, -110, -67, -47, -93, -70, 94, -23, 29, -2, 124, -69, 33, 120, 114, 47, 112, 31, 54, 62, 4, 85, 44, -9, 57, -14, -88, -78, 43, -22, -49, 75, 4, 59, -67, 40, 18, 66, 27, -62, -111, -84, 38, -40, 47, 67, 10, -65, -53, 9, -83, 43, 72, 56, -87, -54, 83, 2, -125, 61, 12, -107, -95, -37, 123, -55, 100, 118, 66, 64, 81, 25, -61, 24, -14, -83, 63, -62, -83, -45, -128, -85};
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
    msg.setTimeStamp(0.5526438864739963);
    msg.setSource(45344U);
    msg.setSourceEntity(150U);
    msg.setDestination(49523U);
    msg.setDestinationEntity(92U);
    msg.seq = 3467687698U;
    msg.state = 126U;
    msg.error.assign("QTAOKFYSWJKYCOFCHVIXWRXOBBCSTSJQLCCXFRLMOZPJDLYZCELQVDIBJVJBMOHLWPWIUZGRLAUVTNSZNHXPHWNMEWI");

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
    msg.setTimeStamp(0.2667064347286562);
    msg.setSource(51417U);
    msg.setSourceEntity(233U);
    msg.setDestination(41956U);
    msg.setDestinationEntity(249U);
    msg.seq = 1430165805U;
    msg.state = 160U;
    msg.error.assign("JCRYGZXRAKEIIGUBBKNMGWXBDDYBBISDHBDFQSTOJFVHCNLGCF");

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
    msg.setTimeStamp(0.5582504931079129);
    msg.setSource(49072U);
    msg.setSourceEntity(180U);
    msg.setDestination(53167U);
    msg.setDestinationEntity(194U);
    msg.seq = 123654900U;
    msg.state = 192U;
    msg.error.assign("QDVLFWGZHKSJBHECKJAKTKNJSMVAMRVWPTDIHNWGBRCSFDVRYETUYAKODXJCSOVTRFWZJMHFJAGSWXTNNBSEDGNZPCCHAIUELCUTGKNZJPESPRISOGBQMXMLJRNMKPQOHYZVROXWUYNKVWXRLSFQABQBKELTLPIQPABYTYFXEWUHCQQLASXTEOCVGUDUIZOLOZFFFDZBYPJXUUPYWQCOIMYBHHVPA");

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
    msg.setTimeStamp(0.5545990580360013);
    msg.setSource(48461U);
    msg.setSourceEntity(142U);
    msg.setDestination(11186U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("MQZFDKLOFBGRIXONAZKRTRQRICSCLIZHZFTLXGCMOJVP");
    msg.text.assign("XMIJXAWGXJISABSPMOLDDZANBEDBSHGUGYOIYQERDISTCFOBIEOUMHTFPWZBQPKVMFZORELMCWIFVCHJJSZHTGZNEBDFFPZSEQNJIIPCVGYLJEZAMWQUBXDMVJCYMXNLQKCQOOCCKTRQUDUMKJTWWHUPHYZITLTEKVTYWXBHOXROVHNQUGURALJZYCSLXRGHDDNTNRLOAXUFWFDQPVYBALGVKZRRKRWIH");

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
    msg.setTimeStamp(0.2037414973503321);
    msg.setSource(42924U);
    msg.setSourceEntity(160U);
    msg.setDestination(1729U);
    msg.setDestinationEntity(249U);
    msg.origin.assign("KOWTRUGVYHLIJWQEFQJGGYFKZZSAVEDLRQJMMPPBMNQTHUMYLPUZABKRYIAIWPFXMFCRYPJVZRSDTFICOQENDCNGDCOTHBYUNDDJAFGIVKKEQHXACTLLMEZXBVRAYRNSHBEOX");
    msg.text.assign("KIUYPAKSMMSKELOWGNGUTVZAKSNXTFESCDVYJFPUGONBXLDPEMEKPZEPOXGCDQLAAFULWRIEQTVAFWDPERXRDNOEBMDMUZTWDINXBUQFFLCCVHPUGVQZQWXTNXTZLBIZUPRSNIBCZBBJOOJBHXSAOKEMR");

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
    msg.setTimeStamp(0.6288173463661901);
    msg.setSource(9106U);
    msg.setSourceEntity(8U);
    msg.setDestination(63143U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("EIUIDJRODGASXTPACQUVDMAHVOYBQUWMRLHKQXSLPRKYLRTWTSFLSSLIWRMPKZPTUNJOGHGOXZPVZFWATDHUUGKM");
    msg.text.assign("BDFOCRUFWZLNMUPTDSKTTLSLBUIXEVHGNJXJVMRSYCIYAVNFCDVGMOOZQRPJKFEWMIOLYVGYAIDQRHZHZWSQOIKRWXDOWJADVZCBSYSQCTDEMVBNKRLELLRWHFPVMKGSLNJOPCGMWQFVPQPFUXTXGQCFDATQSEVAJQLIOAEZEPTILIRPOUIEKHQFDYGKKSUMBUWAPAMCEJYFBXCJYO");

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
    msg.setTimeStamp(0.5117030363406991);
    msg.setSource(52655U);
    msg.setSourceEntity(3U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("OPTYIGEHZMVRDUSUYPMRDMSZKSUIGKKBXBJMSFBEWRIKLACWWFZPAPRLHCAJMEXDLCKNXILFJMKESHIYNIFAUG");
    msg.htime = 0.444812412305683;
    msg.lat = 0.7645948580701359;
    msg.lon = 0.6520613671463164;
    const char tmp_msg_0[] = {69, 35, 50, 119, -83, 75, 88, 24, 11, -72, 95, 62, -30, 105, 8, 31, 89, -69, 33, 21, 93, -91, -24, 41, 61, 32, 18, 19, -29, 116, -108, 2, 97, 1, 50, 75, -41, -23, -61, -67, 27, 81, -22, 105, 86, -92, 44, 88, -119, 6, 9, -60, -95, 16, 66, -34, 70, 97, 68, -93, -69, -82, -106, -24, -98, 65, -6, 27, 96, 41, 95, 73, 56, -33, -124, -95, -124, -128, 5, 64, -127, 89};
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
    msg.setTimeStamp(0.03202887815257116);
    msg.setSource(9495U);
    msg.setSourceEntity(187U);
    msg.setDestination(25819U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("FMRDPZEZTDNTBHJNJPCRIJXIHWMRPCMQNY");
    msg.htime = 0.39712597329276855;
    msg.lat = 0.5769156114453781;
    msg.lon = 0.444997018714851;
    const char tmp_msg_0[] = {-45, -118, -18, 108, -16, -36, -24, 122, 81, 76, 36, -102, -50, 49, 56, 49, 57, -60, 80, -29, 60, 79, 89, 57, 31, 52, 92, -9, 14, 15, 20, 8, -53, -58, -26, 79, 85, -13, -99, 8, -91, 97, 12, -113, 109, -116, -112, -67, 89, -35, -30, 22, 64, -11, -53, -88, 19, 113, 55, -38, 74, -91, 44, -115, 11, -22, 87, -91, 112, 26, 73, 29, 68, 51, 48, -85, 86, 22, 11, -109, -100, 99, 15, -33, -52, -114, 99, 60, -89, 27, 116, 93, -74, 95, 111, -103, 96, -83, -80, -34, 37, 33, -82, -104, -111, 43, 23, 25, -56, -26, 103, -33, -47, -118, -109, 21, -14, 112, -30, -46, -25, 9, -75, -22, 124, -86, -67, 65, -123, 89, -25, -94, -103, 29, -27, 95, -117, 39, 9, -46, -65, -52, -17, 121, -93, -13, 45, -41, 51, -76, -51, -45, -125, 5, -78, -116, -106, 108, -75, 36, -120, -52, 81, -71, 24, -26, 107, -105, -21, 42, -12, -100, -11, -82, 95, 107, -85, -29, -10, 28, 77, 121, 83, 63, -64, -45, 81, -116, 46, 79, 24, 82, -43, -75, 120, -33, -76, -119, 88, -54, 8, -101, -73, -9, 88, -100, -74, 117, -9, -96, -21, -94, 24, 49, 97, 28, -73, 78, -58, 58, 64, -19, -110, -15, 104, 76, 51, -120, 23, -9, 28, -52, 0, 83, 89, 126, -11, 44, 96, -46, -122};
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
    msg.setTimeStamp(0.95223325531079);
    msg.setSource(28615U);
    msg.setSourceEntity(21U);
    msg.setDestination(24186U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("XISDSERDVOUIHLRQLCLKMPFWDAOMOWWJAGGNODLXUQUSTBJFKTMMVXAMEPKLEHLCDENZNZCUIMCPPVFPQGLTJDWWYFIBVSTOSEKTXKBCRGEBJDYHXRAHHGEDABFLJKJEJZTIYSFWZSGZZUQYCNQIIZGTQLQZKYHUYJVPAANBIMOPXVWVHWYCNVKDKNRTUOY");
    msg.htime = 0.5750459299191156;
    msg.lat = 0.31435596317129233;
    msg.lon = 0.9762880526438137;
    const char tmp_msg_0[] = {-75, -117, 91, -20, 5, 17, 65, 97, -114, 0, 98, 31, 90, 109, 121, -82, -120, 106, 118, -19, -117, -35, -55, -80, 53, 100, -113, 81, -104, -75, 88, 4, -36, -99, -71, 51, 63, 18, 78, -105, 6, 104, 39, -42, 40, 67, -50, -91, -2, -92, -105, -20, 34, 84, 11, -38, 7, -101, 12, 6, -113, -98, 8, 76, -2, 59, -56, 81, 46, -104, -77, 100, -106, -126, -108, 15, -91, 64, -20, -96, 33, -111, 11, 5, -125, 93, 19, -127, -76, 48, 41, -41, -110, 105, -54, 15, -49, -29, 67, 54, -83, 38, -17, 37, -106, 108, 22, 116, 18, 86, -78, -123, 31, 61, 6, -52, -71, 14, 38, 122, -59, -107, 116, -95};
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
    msg.setTimeStamp(0.4636401935032004);
    msg.setSource(1432U);
    msg.setSourceEntity(183U);
    msg.setDestination(11664U);
    msg.setDestinationEntity(199U);
    msg.req_id = 15681U;
    msg.ttl = 25763U;
    msg.destination.assign("LGRGFPAEYRMEJRCCHGMXXMAOLUVAYTJVCRQCZICXHSQJYNBMZNIHEJVSVNWWTEQHGDRTJFYISHAYIUZKYNUWCIHSTCRBGAQFFOFNYEZTAVNWTBWPOUGXDFZKBJPFHOCSLVBGKDQDANXUTKFEIFUJBQVGATLZWMIQVPOOMWXZDSKABWDCUUXHJUYMPYJCBANWPSQDXLMNZYPIVLORLKEQIIBMRESMPHFEEQGUVPPNKKTZRRSZHTLGKKSO");
    const char tmp_msg_0[] = {1, -64, -72, -21, -76, -95, -123, 62, -51, 10, -87, -68, -18, 1, 32, 54, -36, -2, -59, -91, -58, -80, 40, 44, 4, -34, 87, -110, -74, -30, -48, 46, 84, 60, -24, -44, 65, 32, -105, 29, 98, -115, -82, 24, -99, 49, -10, -15, 105, 31, -30, -26, 112, 53, 93, -62, 45, -18, -29, -11, 83, -49, 113, -66, -31, -23, 54, -80, -117, 35, 22, 108, 50, -77, 76, -61, -116, -10, -109, 41, 72, -49, 10, -37, -8, 89, -51, 91, 105, -106, 69, 56, -125, -58, -16, -47, -12, -97, -28, 10, 42, -53, -16, -42, -15, 103, 15, -32, 81, 51, 104, 83, 30, 67, 40, 62, -21, 94, 119, -72, -10, 32, 2, -25, -42, -3, 57, -8, 104, -26, 86, -56, -101, 4, 120, 35, -103, -100, -74, -11, -2, 125, -67, 119, 119, 65, 79, 90, -20, 67, -94, -21, 33, 69, 117, 6, -37, -128, 114, -79, 49, -113, 92, -10, -7, 47, -84, 15, -11, -10, 19, -1, -105, -45};
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
    msg.setTimeStamp(0.5306305017128553);
    msg.setSource(55506U);
    msg.setSourceEntity(75U);
    msg.setDestination(42635U);
    msg.setDestinationEntity(43U);
    msg.req_id = 31643U;
    msg.ttl = 4321U;
    msg.destination.assign("IRVQNOFMHEPLKIDMTQWIZRIOWXTEPSJZQOKYJGNYCMUXPADUQSOQRSGEEYTBOO");
    const char tmp_msg_0[] = {-79, -116, -80, -11, -87, -80, 3, -121, 38, 13, 27, -78, -109, -4, 30, -39, -108, 10, 120, -116, -83, 74, 66, 48, 97, -65, 120, -125, 25, 52, 101, 91, 71, 94, 39, 94, -60, -84, 32, 116, 68, 126, 34, -98, -52, -97, -97, -23, -98, -96, 47, 30, -109, 6, -32, 23, -118, -113, -26, -12, -67, 64, 16, 63, -2, -123, -39, -27, 21, 76, 57, 39, 23, -124, -30, 32, 3, 95, 89, 93, 94, -31, -90, 82, -126, -59, 86, -4, -74, 76, -28, -43, -57, 53, -42, -54, -93, -50, -65, 115, -56, 39, 63, 105, 45, -117, -125, 59, -89, 79, 5, 62, -61, 43, 28, 12, -69, 84, -86, -14, -70, -120, 88, 106, -99, 26, -34, -95, -26, -84, 42, -41, -70, -10, 106, 115, -39, -51, 61, -115, -58, -90, 52, -1};
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
    msg.setTimeStamp(0.24826685432977158);
    msg.setSource(40447U);
    msg.setSourceEntity(249U);
    msg.setDestination(40888U);
    msg.setDestinationEntity(16U);
    msg.req_id = 24135U;
    msg.ttl = 52381U;
    msg.destination.assign("KWRUSGTWWUESYHXAKEXFUVGQEZSMDYFOJTOPCRFHOIZFTERJBVHPOATVCBMLGNTWNKNJSPYHTTXHEBLB");
    const char tmp_msg_0[] = {68, -58, -64, 54, 17, 9, -33, 108, -15, 115, -114, 78, -100, 103, 72, 58, 14, 7, 58, -118, -35, 126, 106, 102, 11, -31, 37, 79, -90, -61, -127, -26, -111, -54, -47, 103, -45, -77, -91, 8, -29, -34, 88, -114, 84, 96, -39, 30, 64, 97, 42, -45, -111, 33, 51, -29, 69, -41, 61, -38, 1, -22, 78, -105, -6, 8, 76, 102, 33, -47, 86, -77, 1, -101, 94, 29, -127, -21, -74, 109, -5, -4, -5, -87, 109, -87, 13, 114, -113, -42, 20, 47, 61};
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
    msg.setTimeStamp(0.7584027678073236);
    msg.setSource(53252U);
    msg.setSourceEntity(144U);
    msg.setDestination(32450U);
    msg.setDestinationEntity(116U);
    msg.req_id = 38817U;
    msg.status = 16U;
    msg.text.assign("BKLECDKMJNAVTMRQXEDRZYJOZBRYRKWSSOXDPGEFCPIYQLQSUASFINUDTZILURNJYWARQIPGEOBECXSYCLWZTYOEMTKJHHFPXFNVZTGFASYEWPODIATQHMNHBVRDBGJEIFCDIJJMZFUCIFMGSFIVBJSXAXAVUOMKXRPLRKZTCPBOGWTYDUZGHLHBBNGMJPWDVMBQCGKAURQY");

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
    msg.setTimeStamp(0.12768950454674577);
    msg.setSource(21643U);
    msg.setSourceEntity(135U);
    msg.setDestination(61537U);
    msg.setDestinationEntity(219U);
    msg.req_id = 4736U;
    msg.status = 44U;
    msg.text.assign("GGEEAKDWZZCDPVUDPUABPSFOGRBTANAULEISCILMNIMQDBLZUJLKZGHVXGEUEKXDHJRWNQBYHUDQEBRLUEVKDEHBIQBHRQRXYEIZUAKJIOGMVPJAFVFHLIYGFYDGFJFXRCWQQTZMWZATSCZOQH");

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
    msg.setTimeStamp(0.7431705509706971);
    msg.setSource(17873U);
    msg.setSourceEntity(20U);
    msg.setDestination(58634U);
    msg.setDestinationEntity(235U);
    msg.req_id = 55299U;
    msg.status = 225U;
    msg.text.assign("PWKICNSMGYYZGUVEXRPHRZOLLEWUGQVJRYAJUJQVXGGNALZBXVMCJBSYIIQUMXZGAMCITSHFQDLNFYPQGOOWQJYTLOVFRTZHJUUWEDRYCCTFEPOPIVMBFNKFJDRTWHHMXNVOQAGOKJFFPEQMISWKNIXAUSDPONVBJUTMPXBXIHJYRLWEEXBCRBNBBTQPKYKVSMSIAZRCACZTFTDWALLZOODSWKTDSMLNCKIULZGABPHAHDEEKZUDVHWRDKSXQ");

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
    msg.setTimeStamp(0.5975009652908595);
    msg.setSource(39268U);
    msg.setSourceEntity(61U);
    msg.setDestination(15018U);
    msg.setDestinationEntity(62U);
    msg.group_name.assign("ZKDIDKJBHUMDGRAXNUZUFDESRETOEPKBFQIUHQVYNXMHPICDAOCMHYOPKQTAWNJFAMVZSRQISFXOWNIIPOGMMTOEBNTWLUTBSYRBYTWJKGVBNENHFSFVFJWICTPJCLZXAEADUUGWDMXOQZZNYNJLRTBZSAHZKCOGLRIEHRDPDQLKEFGRQXVWPOWJQLXLRMQAKZBCRSEYJUNWDGGPHLVFPQXPS");
    msg.links = 3811171114U;

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
    msg.setTimeStamp(0.10866265576684508);
    msg.setSource(40841U);
    msg.setSourceEntity(56U);
    msg.setDestination(33052U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("EAVRGYDSKRBJXGZQPWGEHMN");
    msg.links = 2912571879U;

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
    msg.setTimeStamp(0.8178626838065145);
    msg.setSource(40596U);
    msg.setSourceEntity(130U);
    msg.setDestination(3418U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("TDKGWIDNXQNJCQSKQTBLCIONDGVBIHCMMJFHCPKQVGPTYXGKSMSUEMWNOOMZYTPHNSKGDTPRXTVXIONCQJZZXTSYFBQIPR");
    msg.links = 1398537898U;

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
    msg.setTimeStamp(0.46522826198940304);
    msg.setSource(37544U);
    msg.setSourceEntity(42U);
    msg.setDestination(61363U);
    msg.setDestinationEntity(5U);
    msg.groupname.assign("XHIDIHVMYHDRLDOGPXDCKGQSMBNGPLKUJEESPRWLNIIRTYOUYEZAEGRAVVNFLFCFQWZNK");
    msg.action = 193U;
    msg.grouplist.assign("MNDQZEOFAPZLKAIBKPXSHCGNJUQKDLR");

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
    msg.setTimeStamp(0.6000958839252382);
    msg.setSource(42707U);
    msg.setSourceEntity(183U);
    msg.setDestination(47222U);
    msg.setDestinationEntity(86U);
    msg.groupname.assign("ZGAMGQYYBTIRBGCZJOSPHLRVOCDXULSQRQWRUZGSYVMWTOHPKDKRARATQGHBSFSKBMUCQZHFHFNAGIVBLVFYDJFJCAWIEOQZFGZEKMVRUTFNJEEBMVZX");
    msg.action = 25U;
    msg.grouplist.assign("TLMNVHFTLOUJUUOC");

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
    msg.setTimeStamp(0.20370890295699617);
    msg.setSource(46014U);
    msg.setSourceEntity(86U);
    msg.setDestination(28771U);
    msg.setDestinationEntity(105U);
    msg.groupname.assign("KPNJTZOYJMJTXQZIYVPSPNZSUXXESRLQYFFWAVAVTLPEHXYFSZIRGTQQCYFJJKPMLNKLAGDTOQSLVAHNWDTMAHOTXYWETRUKKMQIQIZ");
    msg.action = 150U;
    msg.grouplist.assign("ZRYDGBZLKXNZRLVBVTKEYAJMGZSCSSDRHGBHMUKTQVIJUTMCJFWBHYBZFOHJUBTLPFUZQSSFPNITYEYPMBDSNKIDSSCFCOKONVXPGYBWOYPQQKALXELLWCEXCNZPGLUIKIOEWRHWDBUFACAPJPGGEEEUMAWNPKWJEBAIDDSFZGEXHYYLTAA");

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
    msg.setTimeStamp(0.534952756614475);
    msg.setSource(21538U);
    msg.setSourceEntity(60U);
    msg.setDestination(26024U);
    msg.setDestinationEntity(214U);
    msg.value = 0.9738687093443495;
    msg.sys_src = 17473U;

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
    msg.setTimeStamp(0.48536764277269795);
    msg.setSource(41694U);
    msg.setSourceEntity(207U);
    msg.setDestination(30496U);
    msg.setDestinationEntity(157U);
    msg.value = 0.6274536303521371;
    msg.sys_src = 44625U;

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
    msg.setTimeStamp(0.4224559911714537);
    msg.setSource(1676U);
    msg.setSourceEntity(145U);
    msg.setDestination(40183U);
    msg.setDestinationEntity(147U);
    msg.value = 0.05933137226649654;
    msg.sys_src = 22491U;

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
    msg.setTimeStamp(0.7648789755654946);
    msg.setSource(63096U);
    msg.setSourceEntity(102U);
    msg.setDestination(57623U);
    msg.setDestinationEntity(221U);
    msg.value = 0.5062196603671048;
    msg.units = 42U;

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
    msg.setTimeStamp(0.4468686813689583);
    msg.setSource(16133U);
    msg.setSourceEntity(227U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9997744750612271;
    msg.units = 216U;

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
    msg.setTimeStamp(0.6903962863535447);
    msg.setSource(46461U);
    msg.setSourceEntity(152U);
    msg.setDestination(857U);
    msg.setDestinationEntity(157U);
    msg.value = 0.921107196754873;
    msg.units = 227U;

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
    msg.setTimeStamp(0.30405019946199374);
    msg.setSource(10411U);
    msg.setSourceEntity(127U);
    msg.setDestination(26932U);
    msg.setDestinationEntity(16U);
    msg.base_lat = 0.32368707614954007;
    msg.base_lon = 0.09459218419740378;
    msg.base_time = 0.4701181252708002;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 27688U;
    tmp_msg_0.priority = 34;
    tmp_msg_0.x = 3005;
    tmp_msg_0.y = -28634;
    tmp_msg_0.z = -25506;
    tmp_msg_0.t = 4916;
    IMC::SmsRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source.assign("XPAWCBWRQSJYBJEOCUCTWQAUBAPYBKCHZYCVRDADDBGHFMETDGAJHZUNCEUCRDWBYCQNKLNDTZFTY");
    const char tmp_tmp_tmp_msg_0_0_0[] = {-95, 72, -41, 96, -119, 46, -24, -28, 10, 85, -107, 26, 18, 123, 46, -9, 120, -83, 97, -41, 73, 33, -47, 61, 118, -126, -67, 98, 34, 96, 103, -35, 117, 111, 107, -94, -75, -112, 8, 48, -70, -79, 116};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5979496443003879);
    msg.setSource(60171U);
    msg.setSourceEntity(81U);
    msg.setDestination(31795U);
    msg.setDestinationEntity(71U);
    msg.base_lat = 0.48313878019854617;
    msg.base_lon = 0.24101834984001036;
    msg.base_time = 0.600995305208256;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 21207U;
    tmp_msg_0.destination = 50026U;
    tmp_msg_0.timeout = 0.6332647247921086;
    IMC::VelocityDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.3540869971894922;
    tmp_tmp_msg_0_0.x = 0.8413781634871329;
    tmp_tmp_msg_0_0.y = 0.4643760103868063;
    tmp_tmp_msg_0_0.z = 0.6376294381060306;
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
    msg.setTimeStamp(0.6030002255118887);
    msg.setSource(16850U);
    msg.setSourceEntity(164U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(159U);
    msg.base_lat = 0.12145071600399293;
    msg.base_lon = 0.3294001993477539;
    msg.base_time = 0.4007259854146836;

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
    msg.setTimeStamp(0.2620279991680644);
    msg.setSource(57843U);
    msg.setSourceEntity(30U);
    msg.setDestination(35488U);
    msg.setDestinationEntity(227U);
    msg.base_lat = 0.11758240646262308;
    msg.base_lon = 0.19874673048765423;
    msg.base_time = 0.07607763210367269;
    const char tmp_msg_0[] = {-106, 99, 71, -5, -45, -48, 123, -13, 67, 65, 44, 44, 80, 106, -98, -102, 65, 69, -25, 124, 69, 39, -70, 20, -101, -117, -121, 107, 70, -104, 20, 29, 13, -40, 95, 57, -46, 11, -124, -34, 45, -16, -125, -100, -39, 84, 5, -2, 123, 55, 87, 13, 40, 91, 27, -117, 33, -9, 71, -6, -65, -90, 2, 93, -60, -37, 86, 0, -59, -89, 45, -24, 6, 122, 55, -73, -41, 73};
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
    msg.setTimeStamp(0.8010449088314769);
    msg.setSource(5149U);
    msg.setSourceEntity(181U);
    msg.setDestination(62999U);
    msg.setDestinationEntity(116U);
    msg.base_lat = 0.32957008994015724;
    msg.base_lon = 0.19200847590667047;
    msg.base_time = 0.3394436623803445;
    const char tmp_msg_0[] = {112, 62, 95, 6, 29, -20, -88, 116, 19, -51, -85, -45, -65, 34, 41, 109, 66, 24, 70, -76, 60, 66, 100, -9, 71, -126, -81, -75, 83, -42, -67, -60, 96, 88, 70, 39, -65, -95, 34, -103, -38, -15, -39, 0, -124, 39, -9, 111, 42, 61, -49, -128, 35, -69, 92, -114, 70, 23, -87, 35, -41, 78, -109, 26, 65, 64, 39, -48, -76, 78, -28, 116, 81, 115, 102, -41, -120, -86, 77, 48, -127, 101, 78, 73, 36, -77, 81, -119, 24, 100, 79, -117, -39, 49, 24, 86, 5, -67, 46, 54, 12, -104, -114, -118, 71, -105, -89, 99, -47, 83, 40, 16, 1, -101, 77, -29, -13, -32, -71, 60, -72, -61, -4, -79, -57, 49, -36, 101, 75, -121, 122, 126, -29, -60, 18, -21, -44, 102, 42, 13, 115, 3, 111, 26, -50, -101, -66, 49, 25, 32, -114, 59, -7, -30, -45, -90, -106, -68, 11, -126, -89, -84, -40, 37, -53, -26, -100, -26, 1, 114, 21, 67, 109, -125, -16, 2, 63, 121, 93, 63, 110, -105, -114, 40, 8, 7, -125, -15, 10, 15, -114, -63, 68, -35, 36, 23, 108, -114, -27, -117, 69, 126};
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
    msg.setTimeStamp(0.2154581196003793);
    msg.setSource(65369U);
    msg.setSourceEntity(90U);
    msg.setDestination(46847U);
    msg.setDestinationEntity(163U);
    msg.base_lat = 0.009533182435232823;
    msg.base_lon = 0.35332963831465136;
    msg.base_time = 0.6082848535587962;
    const char tmp_msg_0[] = {82, -39, 82, -48, -72, -49, 16, -93, -44, -68, -68, 14, -43, -75, 17, 126, 99, 116, 94, -10, -128, 22, 121};
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
    msg.setTimeStamp(0.8186712293843535);
    msg.setSource(4412U);
    msg.setSourceEntity(2U);
    msg.setDestination(8797U);
    msg.setDestinationEntity(214U);
    msg.sys_id = 45510U;
    msg.priority = -81;
    msg.x = 29946;
    msg.y = -10795;
    msg.z = -4799;
    msg.t = -32353;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.5850521391463613);
    msg.setSource(62240U);
    msg.setSourceEntity(163U);
    msg.setDestination(47557U);
    msg.setDestinationEntity(12U);
    msg.sys_id = 59814U;
    msg.priority = 106;
    msg.x = 1323;
    msg.y = 10479;
    msg.z = -7636;
    msg.t = 16763;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 45055U;
    tmp_msg_0.lat = 0.33338683308211026;
    tmp_msg_0.lon = 0.2511076793551156;
    tmp_msg_0.z = 0.8739708545551749;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.speed = 0.7769883337478697;
    tmp_msg_0.speed_units = 68U;
    tmp_msg_0.bearing = 0.6232494304381423;
    tmp_msg_0.cross_angle = 0.7330854761696649;
    tmp_msg_0.width = 0.20394098767084068;
    tmp_msg_0.length = 0.13885307586087847;
    tmp_msg_0.hstep = 0.49312107862738064;
    tmp_msg_0.coff = 32U;
    tmp_msg_0.alternation = 150U;
    tmp_msg_0.flags = 250U;
    tmp_msg_0.custom.assign("WPSEECTVRRMJPXKYGPUWKODXUQUBLXBHWEHDRIFEXGUYVAZBSRYSBCKUOGTUANRQVZPIBZTIOPFXCNDJJWKLACOFKSRJCQYPBSDPWTLHNQOFISMFAXDVSGTZYARNAGQCDUCKLJIWNMJOXUMHI");
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
    msg.setTimeStamp(0.8123597139798076);
    msg.setSource(24353U);
    msg.setSourceEntity(248U);
    msg.setDestination(52073U);
    msg.setDestinationEntity(233U);
    msg.sys_id = 56520U;
    msg.priority = 68;
    msg.x = -1007;
    msg.y = 29476;
    msg.z = 11849;
    msg.t = 8237;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.2645243271909936;
    tmp_msg_0.amp = 0.5243216947212358;
    tmp_msg_0.cor = 227U;
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
    msg.setTimeStamp(0.5192336060130419);
    msg.setSource(36803U);
    msg.setSourceEntity(161U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(2U);
    msg.req_id = 35082U;
    msg.type = 42U;
    msg.max_size = 37021U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.12474057786412507;
    tmp_msg_0.base_lon = 0.016089909906995215;
    tmp_msg_0.base_time = 0.5685057620749203;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 2472U;
    tmp_tmp_msg_0_0.destination = 23606U;
    tmp_tmp_msg_0_0.timeout = 0.8151161422533304;
    IMC::AcousticLink tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.peer.assign("UYKWAWAEZEXQNGUXPVJYUZEUDFQZPMUMLVBCLBLPVRPBTXCGBBSQKWKOKBNMICOIZWDHXVFASKLDIYAOOIOHZCYKWQFPTUHCWPFHGJHDU");
    tmp_tmp_tmp_msg_0_0_0.rssi = 0.46114091505311305;
    tmp_tmp_tmp_msg_0_0_0.integrity = 54829U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.2063533067488461);
    msg.setSource(24367U);
    msg.setSourceEntity(114U);
    msg.setDestination(12610U);
    msg.setDestinationEntity(53U);
    msg.req_id = 86U;
    msg.type = 64U;
    msg.max_size = 26817U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0019784331177337133;
    tmp_msg_0.base_lon = 0.678692462474727;
    tmp_msg_0.base_time = 0.24345144922394313;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 40152U;
    tmp_tmp_msg_0_0.destination = 64203U;
    tmp_tmp_msg_0_0.timeout = 0.4162339212176074;
    IMC::AcousticStatus tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 37720U;
    tmp_tmp_tmp_msg_0_0_0.type = 147U;
    tmp_tmp_tmp_msg_0_0_0.status = 164U;
    tmp_tmp_tmp_msg_0_0_0.info.assign("TIOFENAUOTULKSTCZXXRJOBMTFVYQXPTQBWMDVAVHFXILJPTSWUVXNQSBEZCPVJEJNTGRWQPLHBUHPOXJKCKAIHAMNQZDEQYWGGGXGBUXZCUUDROCURYQKJILFZDKAIXHMNJBUTAPRWHKNMPAFXHDTZZWCABLHRBEDWIDZCBVPVVZRQSEPKAFVBLLNSYNGDODKEHOFNYGMJWJSKGR");
    tmp_tmp_tmp_msg_0_0_0.range = 0.04656716453396004;
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
    msg.setTimeStamp(0.8461865700444786);
    msg.setSource(18233U);
    msg.setSourceEntity(75U);
    msg.setDestination(24915U);
    msg.setDestinationEntity(162U);
    msg.req_id = 3479U;
    msg.type = 213U;
    msg.max_size = 38448U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4001063236364666;
    tmp_msg_0.base_lon = 0.47091146576249954;
    tmp_msg_0.base_time = 0.4789834518485505;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 3499U;
    tmp_tmp_msg_0_0.priority = 74;
    tmp_tmp_msg_0_0.x = 18740;
    tmp_tmp_msg_0_0.y = 22967;
    tmp_tmp_msg_0_0.z = -25166;
    tmp_tmp_msg_0_0.t = 2266;
    IMC::Chlorophyll tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.4272263258872009;
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
    msg.setTimeStamp(0.3086292241425138);
    msg.setSource(30025U);
    msg.setSourceEntity(161U);
    msg.setDestination(6387U);
    msg.setDestinationEntity(173U);
    msg.original_source = 10609U;
    msg.destination = 46677U;
    msg.timeout = 0.9262753496069268;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2455743860U;
    tmp_msg_0.state = 192U;
    tmp_msg_0.error.assign("WVSRABELXVRNNYAROLINJYUDFHYPLCKGKHJTKTUUYCUNRMPFUBVIBOIRTHFNGJEWJXYNGQZCIIDDPRCDOFGKQLAVQIJHQZQBQVSKJWETIMXKWLSZEZQZ");
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
    msg.setTimeStamp(0.9302865043455809);
    msg.setSource(25399U);
    msg.setSourceEntity(251U);
    msg.setDestination(34529U);
    msg.setDestinationEntity(215U);
    msg.original_source = 61452U;
    msg.destination = 8959U;
    msg.timeout = 0.47994703393775495;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 239U;
    tmp_msg_0.zoom = 222U;
    tmp_msg_0.action = 220U;
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
    msg.setTimeStamp(0.49726963810557834);
    msg.setSource(21330U);
    msg.setSourceEntity(61U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(225U);
    msg.original_source = 50756U;
    msg.destination = 48129U;
    msg.timeout = 0.8408696020855755;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.9906643417725745;
    tmp_msg_0.x = 0.9389228711342098;
    tmp_msg_0.y = 0.27806834590050045;
    tmp_msg_0.z = 0.36558912524708265;
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
    msg.setTimeStamp(0.6322409029786551);
    msg.setSource(9425U);
    msg.setSourceEntity(233U);
    msg.setDestination(29184U);
    msg.setDestinationEntity(183U);
    msg.type = 92U;
    msg.comm_interface = 12471U;
    msg.model = 9452U;
    msg.list.assign("ZCDAFXFQETNAWRSSRKPATYUCLGUGNXOROSXPZUQTIDBVXOYGAVKGUKBEJRXWFMYHTABVBPUDITEPIWVAPYNHLCEBLPHYQDRJDSXMPNXJRFBEQNYGDNMZLVBOLKPRLQ");

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
    msg.setTimeStamp(0.015651610686976514);
    msg.setSource(52695U);
    msg.setSourceEntity(164U);
    msg.setDestination(12400U);
    msg.setDestinationEntity(74U);
    msg.type = 57U;
    msg.comm_interface = 25548U;
    msg.model = 9859U;
    msg.list.assign("NHYZHDQVPAERLOTLHDANLGMUZNGLQALFIJHJDFHGPLGOVUCTADASTGHJYNJFLZIPKUOBXKNTIZJFFXDAMNCBYISQPIWXMCJBNRTMWVBQZEYXRERMPTKVNQBWAYSOSLUYPREDKVYPJVLWCFGGXJISIKUFDACXHPXVEBRAUJSYIVJQMORGQZIFBRTOCVISBWTREMNYQQUQWEZVEDXOSUMXWKKHZBMPCNSWCDKFHGPEKBOZADFOWYTXWUUHRGCLC");

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
    msg.setTimeStamp(0.20559483916256172);
    msg.setSource(48417U);
    msg.setSourceEntity(231U);
    msg.setDestination(57749U);
    msg.setDestinationEntity(111U);
    msg.type = 195U;
    msg.comm_interface = 17997U;
    msg.model = 47979U;
    msg.list.assign("OSAEMHFGFMQBQBTCUCAXZVBMIUPTOQFOHJDFUYIWOCDJNMCHONZUGUHFSVPPXSWRRYQANXVYUCBDNZDXNMENYHEKWDLYLCIRIVLPEAKXQSZEMVSRJNGJVBOKLGONBXRPHFWPZVFLIDFZCIPCJQPKASCRGIGITSBJLUISHWKRWWGTKCZ");

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
    msg.setTimeStamp(0.631687847447622);
    msg.setSource(14208U);
    msg.setSourceEntity(125U);
    msg.setDestination(57523U);
    msg.setDestinationEntity(147U);
    msg.type = 185U;
    msg.req_id = 3410191149U;
    msg.ttl = 39699U;
    msg.code = 249U;
    msg.destination.assign("PNETWUCLRCVBODHKMWXKOTGZZFSZHXSHJULRBPXAZSRMNBHHEKQIRUEKNPXTTSFYUJBZVRHCMZCDKMXYFAILFCJSALKVQFPIYWEDAQYKCITXOFHDQGMKYQFAZRNFUWHMSLUVEJUYQBJFVERCKXEINXDTGGAVSPXGALMDQVGWSWISYJNJELPLUWUOIOLSAZIBCOBOBMHYCJNWJHVTWRXGKUAYQRPO");
    msg.source.assign("ESJXNGNRCWBDAXLQMJPHBOAZRHFXRXAKEGLPDFXGIAKTZWQUSYGGSSZMCWNMKZVHPAIBEBXQSFCJ");
    msg.acknowledge = 11U;
    msg.status = 246U;
    const char tmp_msg_0[] = {26, 68, 90, -56, -37, -87, -54, 55, -103, 27, 49, -1, -77, 123, -34, -95, 12, 25, 33, -28, -8, 119, 89, 9, 22, 18, 120, -82, -72, -112, 122, -14, -29, -18, -90, 10, 6, -75, -51, -49, -72, -54, -128, -94, 9, -38, -120, -94, 111, -67, 4, -32, -52, 52, -67, -99, -105, -34, 48, -117, 108, 61, 122, 26, -102, 96, -67, -63, -82, -49, 99, 69, 17, 54, -115, -103, -75, 52, 118, 114, 113, -73, -82, 6, 66, -52, 18, -114, 30, -90, -85, -14, 96, 89, 125, 45, -24, -93, 62, -30, 78, 119, -96, 98, 107, 112, -70, -117, 10, -78, -50, 30, -28, -2, -1, 33, -23, 13, 21, 58, 39, 112, -11, -21, -34, 23, 75, -112, -10, 38, 29, -66, 36, -56, -80, -82, -104, -9, -76, -61, -81, -22, 97, 113, -125, -96, -70, 121, 14, 121, 124, 19, -100, 112, -111, -16, -94, -124, -100, -17, -125, 23, 27, 58, -57, 1, -75, -51, 3, 66, 114, -60, 120, -58, 26, -52, 70, 33, -94, 89, 57, -9, 77, -125, -11, -9, -87, 21, -90, -83, 46, 114, 106, 10, 91, 71, -96, 50, -26, -26, 24, -35, 96, 52, -113, -119, 121, -78, -16, 65, 91, -52, -72, -100, -76, -80, 90, -84, -30, -114, 92, -37, 115, 55, -59, -122, 40};
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
    msg.setTimeStamp(0.4623952710981476);
    msg.setSource(56667U);
    msg.setSourceEntity(129U);
    msg.setDestination(29909U);
    msg.setDestinationEntity(131U);
    msg.type = 244U;
    msg.req_id = 1931277879U;
    msg.ttl = 46245U;
    msg.code = 15U;
    msg.destination.assign("TTPUPRZLXJBVBYCFWFVRGEYLOMTHMBGYOWUINUOHWXPQMGCXMULCAZMLPJQREKTZPZYXS");
    msg.source.assign("NYGWKTAFWMTXBMPKNTLSXBERZQEKVARAMGBDJXDBHONICFEIWBRLXHGARYZVJUDMYHKOYXVBVRTN");
    msg.acknowledge = 137U;
    msg.status = 183U;
    const char tmp_msg_0[] = {111, 43, 25, 79, -123, -29, -35, -109, 63, -80, -81, -48, 95, -85, -86, -44, -111, 90, 81, 10, -93, -32, -93, -102, 56, 112, -46, -16, 105, -10, 101, -128, -109, 1, 51, -120, 126, -26, 36, 15, -68, -2, 16, 95, -18, -26, 109, -28, 117, 125, 52, -30, 113, 19, 13, -116, 55, 90, 61, -46, -110, -119, -114, 113, -29, 67, -50, -41, 22, 4, -59, -76, 28, 21, -23, 36, -60, 86, 108, -29, -107, 60, 112, 43, 55, -63, -115, 75, -26, 20, 101, -69, 96, 120, 111, 19, 80, 76, -97, -121, 23, 78, -79, 0, -79, 98, -72, 96, 122, -98, 66, -122, -14, -105, 89, 32, 14, -89, 20, 43, 52, -114, 81, 113, 109, -5, 94, -100, 87, 107, 61, 102, -64, 92, 110, -119, 3, -124, 22, 33, -38, -79, 29, -46, -116, 11, 122, -107, -91, -75};
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
    msg.setTimeStamp(0.41633963670927654);
    msg.setSource(64068U);
    msg.setSourceEntity(66U);
    msg.setDestination(18169U);
    msg.setDestinationEntity(152U);
    msg.type = 93U;
    msg.req_id = 737377464U;
    msg.ttl = 61834U;
    msg.code = 145U;
    msg.destination.assign("IZSBBKTDWAUHOZQXAREVVDBVTJOLTHABOIUFXMQPMWIYSKLJFSVBBLJQCGKYGDRKPDKSZXCNQCRHEAOMVGRBZUYVPJDKSFKFUPZSXOTELPERYCNFUPHTNXTXF");
    msg.source.assign("WIYSXZJIGNANVDHXCQHOFXVSRYSXKFLLMQKIWHWOYRGSVPBPWLHSINTETZFCEBNMIANVAPLQCREYIPJSUJKIEJBMCUOEZYLRQDSMTOCW");
    msg.acknowledge = 251U;
    msg.status = 84U;
    const char tmp_msg_0[] = {87, -77, -116, 17, 83, 97, -16, 100, -118, -40, -29, -126, -12, 64, -86, -17, -21, -41, 83, 48, 25, 4, -77, 32, 59, 25, -86, -56, -29, 92, -9, -24, 34, -97, -103, 4, 71, 2, 21, 72, 4, 16, -37, -15, -117, 76, 66, 90, 32, -112, 68, -121, -127, -10, 50, 121, -96, -119, -53, -49, -49, 92, 42, -27, -23, -66, -19, -88, -42, -15, -80, 28, -44, 124, -123, -128, -106, 93};
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
    msg.setTimeStamp(0.35146331838053957);
    msg.setSource(63573U);
    msg.setSourceEntity(175U);
    msg.setDestination(43607U);
    msg.setDestinationEntity(13U);
    msg.id = 143U;
    msg.range = 0.15539168984470642;

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
    msg.setTimeStamp(0.3591600148206924);
    msg.setSource(36471U);
    msg.setSourceEntity(201U);
    msg.setDestination(5297U);
    msg.setDestinationEntity(32U);
    msg.id = 65U;
    msg.range = 0.6026456533000972;

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
    msg.setTimeStamp(0.2529788866192756);
    msg.setSource(21902U);
    msg.setSourceEntity(37U);
    msg.setDestination(34107U);
    msg.setDestinationEntity(15U);
    msg.id = 202U;
    msg.range = 0.7739906174892536;

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
    msg.setTimeStamp(0.8683710880805156);
    msg.setSource(55973U);
    msg.setSourceEntity(198U);
    msg.setDestination(52689U);
    msg.setDestinationEntity(189U);
    msg.beacon.assign("BHUGTCBZOJVERKEJQWVVYNSEKCCBSSIQJNOQGTTXXXVYCKICNEIKWSORVIRMDRD");
    msg.lat = 0.4101698706691601;
    msg.lon = 0.44229230426307964;
    msg.depth = 0.39445169208123565;
    msg.query_channel = 3U;
    msg.reply_channel = 61U;
    msg.transponder_delay = 173U;

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
    msg.setTimeStamp(0.8803985794574514);
    msg.setSource(58081U);
    msg.setSourceEntity(235U);
    msg.setDestination(28453U);
    msg.setDestinationEntity(75U);
    msg.beacon.assign("XCOKIQKCCXSAXNSHRZSVEIDDJFBMKGFYLOIFTLBMMQKENJRMSQRQHNJOHRDJYYMPOEBLWVVBRLRVZQBWGMLTIGSQJVIFZWWKECSLPFPJPCKPPUAYPAFNZPSZUGAUODBKFXREOXYUUAHURFIW");
    msg.lat = 0.7530577081548174;
    msg.lon = 0.5208144909679008;
    msg.depth = 0.2837579564429885;
    msg.query_channel = 236U;
    msg.reply_channel = 225U;
    msg.transponder_delay = 41U;

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
    msg.setTimeStamp(0.01422997640798318);
    msg.setSource(39216U);
    msg.setSourceEntity(246U);
    msg.setDestination(26366U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("QEHTBRKKDW");
    msg.lat = 0.7937844204203177;
    msg.lon = 0.15442115075405993;
    msg.depth = 0.3481039363814481;
    msg.query_channel = 160U;
    msg.reply_channel = 9U;
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
    msg.setTimeStamp(0.08000802289241027);
    msg.setSource(19539U);
    msg.setSourceEntity(119U);
    msg.setDestination(40140U);
    msg.setDestinationEntity(18U);
    msg.op = 202U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PBACLYTKFREQIINPBHFVTJGDJFBGZXXHQLAPCWIJQFHZEZMGBTMWOPWFIKBVEFVMKOCZUQECCRSAWWHDXNHPMMGUJODZJODLKKQVJIXOETUGJJBRVXNDAFYBBHQTLYHSYLRPCYMDOJRNAOSZXSIKQTJLIUAVKBKXAWFDKTOZLZGGYPLUDNXQMAQSSNTXAVMWESYCEGNSYWTPIVDRR");
    tmp_msg_0.lat = 0.40437017506745365;
    tmp_msg_0.lon = 0.517479082990724;
    tmp_msg_0.depth = 0.28213670107616196;
    tmp_msg_0.query_channel = 251U;
    tmp_msg_0.reply_channel = 181U;
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
    msg.setTimeStamp(0.5261362197571788);
    msg.setSource(49279U);
    msg.setSourceEntity(156U);
    msg.setDestination(60104U);
    msg.setDestinationEntity(68U);
    msg.op = 45U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HHNBMGVGBHDOMQIUHEYCRJPQXDXSPRQJFKECLZFMNBZOJQ");
    tmp_msg_0.lat = 0.6304229973796487;
    tmp_msg_0.lon = 0.8039420837985178;
    tmp_msg_0.depth = 0.9535053459388089;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 155U;
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
    msg.setTimeStamp(0.24043706522689956);
    msg.setSource(31809U);
    msg.setSourceEntity(96U);
    msg.setDestination(41427U);
    msg.setDestinationEntity(153U);
    msg.op = 137U;

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
    msg.setTimeStamp(0.9746678856194247);
    msg.setSource(29593U);
    msg.setSourceEntity(203U);
    msg.setDestination(59630U);
    msg.setDestinationEntity(62U);
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.9570058323051095;
    tmp_msg_0.temperature = 0.57554938550076;
    tmp_msg_0.depth = 0.3326648692252704;
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
    msg.setTimeStamp(0.2992037986051629);
    msg.setSource(41691U);
    msg.setSourceEntity(137U);
    msg.setDestination(24367U);
    msg.setDestinationEntity(42U);
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 4810U;
    tmp_msg_0.flags = 52U;
    tmp_msg_0.lat = 0.11061543867835955;
    tmp_msg_0.lon = 0.5382311070716118;
    tmp_msg_0.start_z = 0.30545068568809775;
    tmp_msg_0.start_z_units = 75U;
    tmp_msg_0.end_z = 0.8159702343480699;
    tmp_msg_0.end_z_units = 241U;
    tmp_msg_0.radius = 0.4457591657457386;
    tmp_msg_0.speed = 0.6892320079740436;
    tmp_msg_0.speed_units = 164U;
    tmp_msg_0.custom.assign("BDDCSWGTJQDKFARTHXUOQXYTRFPGYFZHWWOLYQJYNDUGENVEHIEAHHSLOHDFSB");
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
    msg.setTimeStamp(0.06097897310757472);
    msg.setSource(36190U);
    msg.setSourceEntity(135U);
    msg.setDestination(481U);
    msg.setDestinationEntity(79U);
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 7841U;
    tmp_msg_0.destination.assign("XBJZEDWODRAEGBLSWQFRNYBNYASXVGXRHGXTYUPPYEEHSYTAVJOWSMTDZVEYKNFBQDSUOVOTPCIEWNJFBKFQGJDILQUBRLCTQHKMXTGUBKXUFQ");
    tmp_msg_0.timeout = 0.14337790548165408;
    IMC::SetServoPosition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 233U;
    tmp_tmp_msg_0_0.value = 0.2698346268395133;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7459557668210035);
    msg.setSource(2472U);
    msg.setSourceEntity(9U);
    msg.setDestination(46455U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.4015406818842463;
    msg.lon = 0.15101118751484754;
    msg.depth = 0.98092892064338;
    msg.sentence.assign("ZNETJXVHLGURRVZQXYAGIKRUDLHJBXEIOBQMESDHFNDFTWFKHNWXCUTCQVGXLDBDBOLCIQLCGZFDETQCDWIVGIHPMPOOQPPKOAZWYSPQSDFHWYMNBUAXKSSYKJTKPEWNBLQRWJTEOAOLHTPDFPKJJDIYYZ");
    msg.txtime = 0.1643671631969621;
    msg.modem_type.assign("KLUNPTUMRVMPWAEILCFAOEYMWNOHK");
    msg.sys_src.assign("OWQSKMVTXUZPHQLMGSMIUYCYPDXCCEPPNQDSOVHIMWQPEFSMLZYZUBFAGGDPZRJJVIEHUIBBUWWOETETQMBMSKTUEOGOYXJNIOCCWNZGVYTYBLRYHRUKQFTXVEHBKCNDRLDYEZAWUSSNEZPLKEXOFVBPFKHAXTAWRMUFJSKQUCXKVIIROHYHDCMNGNVRRKCJAL");
    msg.seq = 26559U;
    msg.sys_dst.assign("HFWWKQXHTSDQXI");
    msg.flags = 63U;
    const char tmp_msg_0[] = {-15, 10, -27, -63, 45, -90, 34, -104, 106, 126, 82, -34, 10, -102, -99, 46, -78, 62, 110, 105, -24, -31, 91, -8, 16, -39, -84, 126, -41, -114, -86};
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
    msg.setTimeStamp(0.8175388370091258);
    msg.setSource(29086U);
    msg.setSourceEntity(9U);
    msg.setDestination(31835U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.7834030083554129;
    msg.lon = 0.6595700718022285;
    msg.depth = 0.6418030063134759;
    msg.sentence.assign("QGGDRJRICKQBLRMITNJYWHPUEYWUTDTLJXBOPYMNXJKIVWRUPJBOPMHCPGVAEXUYAIOEIOGNUGFTKWKTTDLFKJWOAIRDCACNGSBLULDAHEXDAAHABVVECXEQSSUONZFYBUGBZEZEIONMFHPKJFRFEIPTJZDDXVVXNSKNRELBHMFHLLKQXTROWZGWHVMWZKXZRQZ");
    msg.txtime = 0.553736879768398;
    msg.modem_type.assign("KYNUFACZEGXRVTDICQLZMPCZNRRLLHCHJYIMPPSNUKVIZNDPSDWYJLHOTOAVFGFSYHVQLERASCZSALPDUDTSGTMNWTUYWEVJCUKKHHARHLBKYQJBPSBQGNDFQIUOZBEWJBKCNZBLUKXIUYOWZZQWCVGGEIYWFKJXRDVTLDIFUFOBEMONOBMOCETKXPRX");
    msg.sys_src.assign("LTTOQJYJSKNWEQEAWZTSINJDHJGPXVNFTALYIUQDMVPUOYFKQAZCLGGEPKCARVWKYLXRDSMQRMQEADDJXHJQSXEHUNRSUUWWYPTBLOHTIMXRRLOCRZZEFQXBZNWPVBBZTGYONZHZCPDNGPHISMTGHGDUSMJGLVWAAKBNJQUXOXCTFENKGZBMJCDFIYXMCCPVKWITYIFFVSBFRCFKOAVDHVCGHFUBYKHELBVOMWBQLMIZAOEKEAOIPLPNS");
    msg.seq = 47216U;
    msg.sys_dst.assign("OORWBCJEHMXJCNHPUCAOVMPXAFPQEDNZJSGMUDEVUQQXPLPKVMWMUFUTYFXRNIALHIGKDWOIATVPLNTMBVWJSJZEVJTUEDALSBXUVZTGPGPZHQWJZAHRKRFBTJZKOLDAWLDYSRQYFQXKDYYTNCEFWNPCXZBIXIAAOSLNYLXSOQSEBJXTJBEIRNBKWBFEYNIZOHGQCFMMMGCOHZVGUWVDGCZFRYLKCGYDQAPOICWEHKUBI");
    msg.flags = 248U;
    const char tmp_msg_0[] = {49, 68, -128, -31, 97, 83, 30, 1, -50, -115, -22, -52, 25, 122, 29, -34, 112, -32, -2, -110, -6, -40, -31, -99, 124, 99, 25, -52, -42, 91, -55, -104, -81, 108, 36, 42, -108, -75, 74, -31, 109, 54, -24, 51, 6, 40, -37, 122, -4, 20, 74, 96, -13, 2, 110, 92, -83, -105, 69, 29, -69, 30, -95, -6, 62, -66, -62, -123, -116, 57, 98, 82, -97, 82, 64, 63, 48, -78, -59, -68, 124, 84, -119, 20, -107, -110, 18, -43, 119, 10, 105, 53, -116, 33, 121, -98, -7, -78, 26, 49, -100, -35, 49, -115, 42, 59, -126, -43, 79, 70, 34, 114, -56, 32, -86, -69, -15, -55, 4, -62, 84, -10, 23, 55, -68, -63, -108, -62, 101, -28, -94, 10, 55, -53, 106, 47, 121, 76, 87, 12, 32, 123, 115, -9, -45, -40, -53};
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
    msg.setTimeStamp(0.8412099269094545);
    msg.setSource(7695U);
    msg.setSourceEntity(244U);
    msg.setDestination(57051U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.11095916787154225;
    msg.lon = 0.40285952523346436;
    msg.depth = 0.08825943748986076;
    msg.sentence.assign("IRJAHTIXYKVRGBTJCRFMKTXYATGVMYFNTYESTCNWITTWLPWRXZZNHGZ");
    msg.txtime = 0.19374110822956403;
    msg.modem_type.assign("UIHPLOSDZMLGVKDSPEWEBQRADUHFFTXMIWKHLNERCLYWMTRPQTLGBCBXTORYOQJSEPUJSXPZAJUZYMIVIJKMKOJALSCUVZFVHTRYZILNFAGSTISLHVWDKNQSAABVUYNDXCJCTFBMWHWPJLQJQTENVQVTGKZBVZBACRIDEKNAEX");
    msg.sys_src.assign("PDABFGHGEMMBNDVXPFJXTNKGZLCLEJOZTHOPIVYELCAEOGUPNZDONXAGALZRPMWEPWUIVJXDZSJMTTQQYIRWJJHDDPYABSLJVBCNHFYAMMICVLWUKUEFQAZHUBYMPFKGXEKCDGWQHXLEOQIKRTYIVKFXSAMSFKDJVIIZMRHCGKNWMUYTUDCCARQWLWQGURNSIQTXZFBYYTHQRWBYUOQSWSVOCTZLFKKJCBXRFJAISBNTDZUVOLVEP");
    msg.seq = 63826U;
    msg.sys_dst.assign("QBLAXWLDQBDJVCYAQHLLYEVWGVIJTWAUTKZMMOHIQFDKSCXAFTGXOOUPB");
    msg.flags = 165U;
    const char tmp_msg_0[] = {-68, 10, 31, 88, 96, 36, 18, -10, -48, 52, 89, -82, -29, -22, 114, 79, -12, 22, -60};
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
    msg.setTimeStamp(0.9029384921502132);
    msg.setSource(3862U);
    msg.setSourceEntity(213U);
    msg.setDestination(19285U);
    msg.setDestinationEntity(87U);
    msg.op = 66U;
    msg.system.assign("TMOFYERPWCEXCPHUHGSHZZHBBVDLKJBZYKUCZRFBGIPRWONQELNRQRKWXKBYKYONFKXZCELXRGBUVVIAUAUQQSHXKAQEAQQPJROKIJOEMSNZNGKPSJRJTOTVOITLLXGBLWUARLHPVYDWTLJDBECILCJOPADTLQNTMJTADGRFVDFJBGSWWHDYXVWSZCNIVEGSS");
    msg.range = 0.7882218001947043;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 52U;
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
    msg.setTimeStamp(0.3205132139769312);
    msg.setSource(18766U);
    msg.setSourceEntity(49U);
    msg.setDestination(33703U);
    msg.setDestinationEntity(245U);
    msg.op = 125U;
    msg.system.assign("FVITYAGXSHMOURAWXMOBFPTJJEPFZZIYEHC");
    msg.range = 0.3259737360460556;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3424527547U;
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
    msg.setTimeStamp(0.845047453318037);
    msg.setSource(58406U);
    msg.setSourceEntity(70U);
    msg.setDestination(37078U);
    msg.setDestinationEntity(52U);
    msg.op = 51U;
    msg.system.assign("CQZHENXJMSNEKVQQKIXJJULJPQFIUKUZLIFGMCWICRYTWPLBNEDUJWYVO");
    msg.range = 0.06496260039723578;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 898858348U;
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
    msg.setTimeStamp(0.23881222091967325);
    msg.setSource(36846U);
    msg.setSourceEntity(99U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.08143570958249746);
    msg.setSource(51295U);
    msg.setSourceEntity(75U);
    msg.setDestination(26420U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.6689557491750826);
    msg.setSource(25606U);
    msg.setSourceEntity(29U);
    msg.setDestination(4341U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.16223218915666338);
    msg.setSource(37060U);
    msg.setSourceEntity(84U);
    msg.setDestination(56668U);
    msg.setDestinationEntity(249U);
    msg.list.assign("FUDGTCDEBYQGYNDNZMBEWOC");

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
    msg.setTimeStamp(0.11902512032389823);
    msg.setSource(19272U);
    msg.setSourceEntity(148U);
    msg.setDestination(63720U);
    msg.setDestinationEntity(129U);
    msg.list.assign("PCZQKKHVPPTXLWZVGTICAMLFCGYDORJBLDORUCEKFEJGSPYFXMNUAHHLHZJCXWMDWSARTQYCQYRKHVXHPNKOVBWPLJEHNSNU");

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
    msg.setTimeStamp(0.9853582252058395);
    msg.setSource(26244U);
    msg.setSourceEntity(64U);
    msg.setDestination(56016U);
    msg.setDestinationEntity(160U);
    msg.list.assign("MLJRBDEWCCTPTLZPZYOWNLARUEJRZQUOMUVSQNIMBCXUGLAQSADXNUVSCVLLEGWRHJUKBHGKBWLEXQAARKEXGOYBXGAFTKTJUHZZPBNMPYHYJNSRMIREFCIGKQOAQTOQHRSBWGMSDFSBVZVKADOLHWXTJJLFV");

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
    msg.setTimeStamp(0.9698694221140007);
    msg.setSource(55437U);
    msg.setSourceEntity(132U);
    msg.setDestination(45808U);
    msg.setDestinationEntity(82U);
    msg.peer.assign("TOPNBAUCBPSFHZDGTZUESIOQNYMROISKLQNAGMWJPCY");
    msg.rssi = 0.9777616992442457;
    msg.integrity = 737U;

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
    msg.setTimeStamp(0.4032709916069427);
    msg.setSource(13407U);
    msg.setSourceEntity(68U);
    msg.setDestination(41760U);
    msg.setDestinationEntity(27U);
    msg.peer.assign("GRFPFMAFIJGPCIKVQQVHKLYSNYCOGRYXTGREVRLWEMLTYGKOEFNKLBWPMSSUEHHXRZAPIPIKJKJHXVJDFDB");
    msg.rssi = 0.1617522229310112;
    msg.integrity = 55872U;

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
    msg.setTimeStamp(0.09583957176156721);
    msg.setSource(65091U);
    msg.setSourceEntity(38U);
    msg.setDestination(38058U);
    msg.setDestinationEntity(65U);
    msg.peer.assign("GXYLIAVXHJNOSOQKAMTRUBCVSDWIYCPLKEXTKFACKPEMUEFGVIOEJTRQRJGCJWHVTYQXMDUTAWSVKTGUDDQQLQTKBDKXQYJSYZRYATZCBBGOPKMRINUCEEORFTANDJOAUYLHNYURBNQZFBLLWBDBOZOPFAQVGLCIXZSRIKMDADFMDVFJISWZJJPZIMOIGSXNOCEWZCVWQG");
    msg.rssi = 0.8848660452765942;
    msg.integrity = 15584U;

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
    msg.setTimeStamp(0.7746844418118959);
    msg.setSource(19999U);
    msg.setSourceEntity(224U);
    msg.setDestination(30986U);
    msg.setDestinationEntity(175U);
    msg.req_id = 5107U;
    msg.destination.assign("UWLPNKSIGKHYMRXCNJLTPSOWRRVSNMIBXPQNMIJGEHHGTFIBDNXSSBJQRKCLWXVNUOBYGUUIZCUAUDRVDAEEPEGHFMKLQAJITZSBHHYPCPJEHOLKQOZWFIDLPZAPEUQQFBOITAOSWXDOJWRKLEBXTAYVUDJMDAYXIVOFMASCSUZBLDTRKXYYQCHBFQVVMLDERZNZEGLTYWGFVCXQDWT");
    msg.timeout = 0.9726766300313787;
    msg.range = 0.11298121130586514;
    msg.type = 246U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.5444042477725255;
    tmp_msg_0.lon = 0.8759751564446133;
    tmp_msg_0.z = 0.14185574397348777;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.speed = 0.14285828558760683;
    tmp_msg_0.speed_units = 152U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 46049U;
    tmp_tmp_msg_0_0.off_x = 0.4640117661434735;
    tmp_tmp_msg_0_0.off_y = 0.2864308224067209;
    tmp_tmp_msg_0_0.off_z = 0.7658076862024176;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.9476277486815574;
    tmp_msg_0.custom.assign("ITRUCLXHEOXNAAPNVBFZCVOUFABGKFMWGLTSMIHVQMBTYSVDQEDPNXTHEVEPIAWMYOSYIEBHJXLTQYEDHLI");
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
    msg.setTimeStamp(0.1754347520171513);
    msg.setSource(4790U);
    msg.setSourceEntity(80U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(6U);
    msg.req_id = 43897U;
    msg.destination.assign("JRZOVXMRDBFKNTYROSMHHQLAYZOYAWETOEKRXBGZGQXYVGIEHFUHWJGLGNZICNYZKPCFRTJNIBCCZZHSAIDUHVMV");
    msg.timeout = 0.0350968042976082;
    msg.range = 0.5119838284366396;
    msg.type = 120U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32888U;
    tmp_msg_0.off_x = 0.782893236584925;
    tmp_msg_0.off_y = 0.47757846383219604;
    tmp_msg_0.off_z = 0.1889205369378969;
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
    msg.setTimeStamp(0.043533424298179524);
    msg.setSource(27973U);
    msg.setSourceEntity(238U);
    msg.setDestination(630U);
    msg.setDestinationEntity(35U);
    msg.req_id = 13053U;
    msg.destination.assign("MHQRZJGUMYHMLZJVWUNMNNNIYLBADVMKEEJTWFOPCHUHYGTMCSEOVPVUARVVKTALFTVFBPIKCXIKZLYQOJCFAWJLTXVPRHPGGGNKSANFMTUIBUTXFPQPYPLXWGIADRQYISAZXFWJWREZEONSLHVJKHXIXQEBOITTKCKQUGFPO");
    msg.timeout = 0.049534966758244425;
    msg.range = 0.02448465698863922;
    msg.type = 156U;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 56970U;
    tmp_msg_0.destination.assign("GPIXIGZSKVBUQKBYOZKHYVQQZBVAEUATZPEXTPCGGGSSLZMOWQNBPBWNTGXRRLWWZLDNQCUVRRJCNQESREALMWHHHKTMLHDQDUEPVBDTIGWXOFQFWIAMPDNKUZYFLPFZYJHXLTZOUWAREYRPJHLIIFOOMUJFWIEMCGKNPHVTVECLVHNFUIIHUYFGBSAYQAXJTSGKSQMIYFXJJEEBCLDC");
    tmp_msg_0.timeout = 0.5330087214524145;
    tmp_msg_0.range = 0.9869024877747156;
    tmp_msg_0.type = 178U;
    IMC::FineOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.40391699810199344;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6332278298813674);
    msg.setSource(10821U);
    msg.setSourceEntity(117U);
    msg.setDestination(17364U);
    msg.setDestinationEntity(124U);
    msg.req_id = 43300U;
    msg.type = 200U;
    msg.status = 186U;
    msg.info.assign("HRNQWHTNXFFVVHZBUUZXONGNKFJUUUFQWTPAHGHYLEBYLAAIIDQTXGJSVEOMHHIN");
    msg.range = 0.7675615129012063;

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
    msg.setTimeStamp(0.8762540066863627);
    msg.setSource(41187U);
    msg.setSourceEntity(213U);
    msg.setDestination(27465U);
    msg.setDestinationEntity(237U);
    msg.req_id = 16552U;
    msg.type = 209U;
    msg.status = 88U;
    msg.info.assign("EGEZRRZIFDSSDUZSVZPOYPYWFSGHXTOQWLRRVGNFUSEPAZZRDLJONTCOEVOQIDYDT");
    msg.range = 0.1041193044637736;

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
    msg.setTimeStamp(0.4410939625834085);
    msg.setSource(12093U);
    msg.setSourceEntity(117U);
    msg.setDestination(58321U);
    msg.setDestinationEntity(231U);
    msg.req_id = 36996U;
    msg.type = 72U;
    msg.status = 220U;
    msg.info.assign("CEYIBKAQYPMZEUWTYMROZLMWCRMDGQKZYOMSRSRFAZHOJVZOFNSGWCOXTTTAHGGPKTRJXACMGCJHHSVLODIFTBLUDLINTIHIIEAWDRAXWDSKBONCSOZLJLFFJDWSQYUPPDPVCXEEDEQUTXZQRV");
    msg.range = 0.9028024717307;

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
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.7778581323792015);
    msg.setSource(9330U);
    msg.setSourceEntity(88U);
    msg.setDestination(19047U);
    msg.setDestinationEntity(223U);
    msg.system.assign("GCQAQLWISUOLVWUNLWEXJTUDFRPLWPXDGDEKLQIYUSENTGRHKMZLNMGPHRVIVIVLJCNPXBOASTHDIHJXPHKMZUSGWJKJCACQZNNYTMSDEFOJWXEOOBIPIYQVBVGOQKESNDYHSURFVZPVOLCXKXCFBPPBOVOIDGNLEBLSXAQTDTXRYUGHWBUNJDAMEMWGTXFJWFZZMRYIBCQJZAQCTZKHUAFZEYYUMFSYWOBGRBKCIAHPKZJTVRMDNSRTAECKFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.35496358062847777);
    msg.setSource(4849U);
    msg.setSourceEntity(48U);
    msg.setDestination(31696U);
    msg.setDestinationEntity(119U);
    msg.system.assign("NXKMAXHHMYXRQHSIGJTOGNSPWCFNSAUWVDIDCUVBIOYNLGMILAOESRZGWDQCKYAFXSYMCRECHZZJLPPQVJJJRFZBZCZWDEAZKMLFTCKPXKATWBUKDIKMUVNONQHQNGYVACUKCJTFETEBEGQTAVPLWDOJYSKTEJBXUMHYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.25940567485223476);
    msg.setSource(61988U);
    msg.setSourceEntity(3U);
    msg.setDestination(11771U);
    msg.setDestinationEntity(200U);
    msg.system.assign("QLKEOJKELGPXQTMMSIZEKETCFJANOFNZGWSIWGMHSSMEJYAFOKZSYJQSBNIIWVIWUQWNJZHZLUUHVIATWLIEDBUDYQBUTNMRPWNXRXHAAGEFDHFVRCONYCSEQXMPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.899793172286365);
    msg.setSource(20336U);
    msg.setSourceEntity(174U);
    msg.setDestination(49278U);
    msg.setDestinationEntity(101U);
    msg.value = 24143;
    msg.op = 179U;

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
    msg.setTimeStamp(0.12725903444345754);
    msg.setSource(22779U);
    msg.setSourceEntity(131U);
    msg.setDestination(33164U);
    msg.setDestinationEntity(86U);
    msg.value = 23052;
    msg.op = 17U;

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
    msg.setTimeStamp(0.08045773031668002);
    msg.setSource(23360U);
    msg.setSourceEntity(52U);
    msg.setDestination(57369U);
    msg.setDestinationEntity(189U);
    msg.value = 6369;
    msg.op = 116U;

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
    msg.setTimeStamp(0.8275278205949502);
    msg.setSource(12090U);
    msg.setSourceEntity(94U);
    msg.setDestination(41698U);
    msg.setDestinationEntity(21U);
    msg.value = 0.539329395435613;

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
    msg.setTimeStamp(0.02827011863603901);
    msg.setSource(60941U);
    msg.setSourceEntity(59U);
    msg.setDestination(11210U);
    msg.setDestinationEntity(204U);
    msg.value = 0.3590446214310754;

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
    msg.setTimeStamp(0.9900154807801431);
    msg.setSource(52410U);
    msg.setSourceEntity(5U);
    msg.setDestination(15805U);
    msg.setDestinationEntity(186U);
    msg.value = 0.5655147933252576;

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
    msg.setTimeStamp(0.23930140895507634);
    msg.setSource(596U);
    msg.setSourceEntity(174U);
    msg.setDestination(61477U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8847339169909603;

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
    msg.setTimeStamp(0.7001490237148297);
    msg.setSource(32499U);
    msg.setSourceEntity(248U);
    msg.setDestination(52285U);
    msg.setDestinationEntity(100U);
    msg.value = 0.1670807297251371;

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
    msg.setTimeStamp(0.7519965003105358);
    msg.setSource(4907U);
    msg.setSourceEntity(224U);
    msg.setDestination(27580U);
    msg.setDestinationEntity(94U);
    msg.value = 0.020860942309598673;

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
    msg.setTimeStamp(0.48509629435055335);
    msg.setSource(32508U);
    msg.setSourceEntity(132U);
    msg.setDestination(17254U);
    msg.setDestinationEntity(175U);
    msg.validity = 27297U;
    msg.type = 198U;
    msg.utc_year = 511U;
    msg.utc_month = 18U;
    msg.utc_day = 30U;
    msg.utc_time = 0.7784616709294435;
    msg.lat = 0.9173755907920195;
    msg.lon = 0.551009435935452;
    msg.height = 0.516827318374257;
    msg.satellites = 212U;
    msg.cog = 0.4366738740926096;
    msg.sog = 0.48718243589881616;
    msg.hdop = 0.9767860249671403;
    msg.vdop = 0.11611158084393702;
    msg.hacc = 0.705157168241037;
    msg.vacc = 0.8725523407655449;

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
    msg.setTimeStamp(0.6403897981535863);
    msg.setSource(39254U);
    msg.setSourceEntity(159U);
    msg.setDestination(23551U);
    msg.setDestinationEntity(133U);
    msg.validity = 980U;
    msg.type = 211U;
    msg.utc_year = 49851U;
    msg.utc_month = 164U;
    msg.utc_day = 166U;
    msg.utc_time = 0.029811726959672713;
    msg.lat = 0.99531549215448;
    msg.lon = 0.9591362973066092;
    msg.height = 0.7351185465715402;
    msg.satellites = 11U;
    msg.cog = 0.20254336477288493;
    msg.sog = 0.05005079082314512;
    msg.hdop = 0.34250284366073014;
    msg.vdop = 0.8498162692239323;
    msg.hacc = 0.054566007697087415;
    msg.vacc = 0.28424537080664436;

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
    msg.setTimeStamp(0.2804163735236125);
    msg.setSource(31641U);
    msg.setSourceEntity(117U);
    msg.setDestination(4965U);
    msg.setDestinationEntity(183U);
    msg.validity = 28978U;
    msg.type = 250U;
    msg.utc_year = 13449U;
    msg.utc_month = 238U;
    msg.utc_day = 18U;
    msg.utc_time = 0.49002518672202033;
    msg.lat = 0.48373797005595787;
    msg.lon = 0.12984630328389724;
    msg.height = 0.7698943512106142;
    msg.satellites = 94U;
    msg.cog = 0.1369488958359123;
    msg.sog = 0.043773122007005894;
    msg.hdop = 0.6994791334358457;
    msg.vdop = 0.3185377377748906;
    msg.hacc = 0.8660639566285805;
    msg.vacc = 0.5645736531617231;

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
    msg.setTimeStamp(0.47387824371091825);
    msg.setSource(35786U);
    msg.setSourceEntity(16U);
    msg.setDestination(15078U);
    msg.setDestinationEntity(118U);
    msg.time = 0.43643996770205973;
    msg.phi = 0.5156812461111083;
    msg.theta = 0.5089873686223627;
    msg.psi = 0.8994592949419415;
    msg.psi_magnetic = 0.6612217954979832;

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
    msg.setTimeStamp(0.09896254195083909);
    msg.setSource(54102U);
    msg.setSourceEntity(244U);
    msg.setDestination(8662U);
    msg.setDestinationEntity(51U);
    msg.time = 0.9734102879311233;
    msg.phi = 0.034343303367936895;
    msg.theta = 0.26025086289279276;
    msg.psi = 0.563084390734439;
    msg.psi_magnetic = 0.9709835526751777;

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
    msg.setTimeStamp(0.1831134349765945);
    msg.setSource(20924U);
    msg.setSourceEntity(19U);
    msg.setDestination(56707U);
    msg.setDestinationEntity(145U);
    msg.time = 0.271062589066733;
    msg.phi = 0.09806640582069193;
    msg.theta = 0.3170063831762633;
    msg.psi = 0.8420636227170513;
    msg.psi_magnetic = 0.37325844557109844;

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
    msg.setTimeStamp(0.5699881466032328);
    msg.setSource(3860U);
    msg.setSourceEntity(252U);
    msg.setDestination(1113U);
    msg.setDestinationEntity(53U);
    msg.time = 0.10424879495858663;
    msg.x = 0.9363222736557001;
    msg.y = 0.17555670044944283;
    msg.z = 0.8618767218254955;
    msg.timestep = 0.9344619851597007;

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
    msg.setTimeStamp(0.19464257043439137);
    msg.setSource(4298U);
    msg.setSourceEntity(49U);
    msg.setDestination(21884U);
    msg.setDestinationEntity(64U);
    msg.time = 0.20310932308484841;
    msg.x = 0.2419320862361347;
    msg.y = 0.9424267313070441;
    msg.z = 0.25589113262537433;
    msg.timestep = 0.4984096358746539;

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
    msg.setTimeStamp(0.5091123211264359);
    msg.setSource(53021U);
    msg.setSourceEntity(47U);
    msg.setDestination(24742U);
    msg.setDestinationEntity(121U);
    msg.time = 0.1122069563863084;
    msg.x = 0.6898523198531673;
    msg.y = 0.6692047924503063;
    msg.z = 0.5058836085239139;
    msg.timestep = 0.9092523872215197;

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
    msg.setTimeStamp(0.7852767117040748);
    msg.setSource(22245U);
    msg.setSourceEntity(153U);
    msg.setDestination(39274U);
    msg.setDestinationEntity(35U);
    msg.time = 0.8475752858135749;
    msg.x = 0.3924876360316273;
    msg.y = 0.22594533674920636;
    msg.z = 0.7761224134778165;

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
    msg.setTimeStamp(0.9664964075400793);
    msg.setSource(23562U);
    msg.setSourceEntity(198U);
    msg.setDestination(49891U);
    msg.setDestinationEntity(209U);
    msg.time = 0.2817762422678455;
    msg.x = 0.1459481273774772;
    msg.y = 0.07794615725564003;
    msg.z = 0.8154634297352585;

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
    msg.setTimeStamp(0.37218851389541296);
    msg.setSource(60274U);
    msg.setSourceEntity(116U);
    msg.setDestination(18730U);
    msg.setDestinationEntity(164U);
    msg.time = 0.7752305533822154;
    msg.x = 0.9303055961087303;
    msg.y = 0.03905185664530564;
    msg.z = 0.5619102512310199;

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
    msg.setTimeStamp(0.5432395726905259);
    msg.setSource(39441U);
    msg.setSourceEntity(158U);
    msg.setDestination(37693U);
    msg.setDestinationEntity(67U);
    msg.time = 0.1814012997090233;
    msg.x = 0.6856588753976304;
    msg.y = 0.27890842552138984;
    msg.z = 0.0543135455249083;

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
    msg.setTimeStamp(0.609539327459925);
    msg.setSource(61638U);
    msg.setSourceEntity(137U);
    msg.setDestination(49143U);
    msg.setDestinationEntity(133U);
    msg.time = 0.3144767227221055;
    msg.x = 0.7449665751662177;
    msg.y = 0.4882608620621586;
    msg.z = 0.20742079798486246;

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
    msg.setTimeStamp(0.5785251955360733);
    msg.setSource(40730U);
    msg.setSourceEntity(217U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(179U);
    msg.time = 0.19713303052963305;
    msg.x = 0.9497465684788666;
    msg.y = 0.6257768927845072;
    msg.z = 0.3660932132119564;

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
    msg.setTimeStamp(0.5673840387535297);
    msg.setSource(35743U);
    msg.setSourceEntity(50U);
    msg.setDestination(25363U);
    msg.setDestinationEntity(87U);
    msg.time = 0.023489314158638197;
    msg.x = 0.3862944360946159;
    msg.y = 0.43723265526395405;
    msg.z = 0.7203957132157706;

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
    msg.setTimeStamp(0.6372232400709685);
    msg.setSource(45391U);
    msg.setSourceEntity(173U);
    msg.setDestination(37233U);
    msg.setDestinationEntity(6U);
    msg.time = 0.1947855686580744;
    msg.x = 0.4466353517053052;
    msg.y = 0.3164117924441492;
    msg.z = 0.6498559661353155;

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
    msg.setTimeStamp(0.7595694600797679);
    msg.setSource(46102U);
    msg.setSourceEntity(108U);
    msg.setDestination(42151U);
    msg.setDestinationEntity(205U);
    msg.time = 0.4011056127163275;
    msg.x = 0.808541792509255;
    msg.y = 0.15150184625204188;
    msg.z = 0.4676122719251584;

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
    msg.setTimeStamp(0.04650112121579231);
    msg.setSource(39410U);
    msg.setSourceEntity(21U);
    msg.setDestination(15652U);
    msg.setDestinationEntity(135U);
    msg.validity = 36U;
    msg.x = 0.08965689278367339;
    msg.y = 0.39131116455260373;
    msg.z = 0.1915740960731227;

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
    msg.setTimeStamp(0.43724474363089816);
    msg.setSource(64340U);
    msg.setSourceEntity(217U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(30U);
    msg.validity = 177U;
    msg.x = 0.012373333454253954;
    msg.y = 0.1269493147515428;
    msg.z = 0.27864276908843866;

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
    msg.setTimeStamp(0.8218084287236981);
    msg.setSource(2035U);
    msg.setSourceEntity(111U);
    msg.setDestination(14122U);
    msg.setDestinationEntity(53U);
    msg.validity = 22U;
    msg.x = 0.29470339611127194;
    msg.y = 0.4588047461276671;
    msg.z = 0.9943189208845331;

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
    msg.setTimeStamp(0.1630917140162046);
    msg.setSource(399U);
    msg.setSourceEntity(237U);
    msg.setDestination(48506U);
    msg.setDestinationEntity(190U);
    msg.validity = 8U;
    msg.x = 0.46385213816296;
    msg.y = 0.4090591820094014;
    msg.z = 0.2556140071565516;

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
    msg.setTimeStamp(0.5255193774337963);
    msg.setSource(58509U);
    msg.setSourceEntity(36U);
    msg.setDestination(37474U);
    msg.setDestinationEntity(99U);
    msg.validity = 109U;
    msg.x = 0.15980096216537154;
    msg.y = 0.1858099958077586;
    msg.z = 0.48988513409074863;

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
    msg.setTimeStamp(0.3253068402560937);
    msg.setSource(44131U);
    msg.setSourceEntity(57U);
    msg.setDestination(7082U);
    msg.setDestinationEntity(129U);
    msg.validity = 100U;
    msg.x = 0.6668214323340061;
    msg.y = 0.27179295135945747;
    msg.z = 0.9135473516392354;

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
    msg.setTimeStamp(0.23692340153065927);
    msg.setSource(26623U);
    msg.setSourceEntity(130U);
    msg.setDestination(4139U);
    msg.setDestinationEntity(91U);
    msg.time = 0.5568709401365518;
    msg.x = 0.9087449477065207;
    msg.y = 0.1380825772192854;
    msg.z = 0.39627377759809146;

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
    msg.setTimeStamp(0.025515045011920146);
    msg.setSource(15661U);
    msg.setSourceEntity(244U);
    msg.setDestination(53297U);
    msg.setDestinationEntity(102U);
    msg.time = 0.7740605392461056;
    msg.x = 0.6854108162602891;
    msg.y = 0.941388006102922;
    msg.z = 0.6762071154015865;

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
    msg.setTimeStamp(0.896400132854421);
    msg.setSource(2055U);
    msg.setSourceEntity(5U);
    msg.setDestination(46621U);
    msg.setDestinationEntity(1U);
    msg.time = 0.4387557332260692;
    msg.x = 0.7537904823668525;
    msg.y = 0.7906196856713646;
    msg.z = 0.29215625699597947;

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
    msg.setTimeStamp(0.35869739147196367);
    msg.setSource(1198U);
    msg.setSourceEntity(173U);
    msg.setDestination(28442U);
    msg.setDestinationEntity(224U);
    msg.validity = 224U;
    msg.value = 0.15028246999864225;

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
    msg.setTimeStamp(0.08555856559967057);
    msg.setSource(24637U);
    msg.setSourceEntity(154U);
    msg.setDestination(29200U);
    msg.setDestinationEntity(115U);
    msg.validity = 237U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7818865366336016;
    tmp_msg_0.y = 0.9397445620846261;
    tmp_msg_0.z = 0.4181679247851081;
    tmp_msg_0.phi = 0.5629067992876707;
    tmp_msg_0.theta = 0.3328370790418199;
    tmp_msg_0.psi = 0.2298387979714962;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9856923882023044;

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
    msg.setTimeStamp(0.8115964852340175);
    msg.setSource(52001U);
    msg.setSourceEntity(49U);
    msg.setDestination(36851U);
    msg.setDestinationEntity(129U);
    msg.validity = 40U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5526136092976016;
    tmp_msg_0.y = 0.10915432687829418;
    tmp_msg_0.z = 0.14226275906999364;
    tmp_msg_0.phi = 0.6789814509895044;
    tmp_msg_0.theta = 0.1430814991876277;
    tmp_msg_0.psi = 0.40401992083410476;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.3924639937437382;

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
    msg.setTimeStamp(0.0187808086337099);
    msg.setSource(4881U);
    msg.setSourceEntity(11U);
    msg.setDestination(30032U);
    msg.setDestinationEntity(4U);
    msg.value = 0.8508004323302094;

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
    msg.setTimeStamp(0.11572025385773488);
    msg.setSource(5817U);
    msg.setSourceEntity(117U);
    msg.setDestination(61371U);
    msg.setDestinationEntity(53U);
    msg.value = 0.027781040575069804;

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
    msg.setTimeStamp(0.12654270989262284);
    msg.setSource(3153U);
    msg.setSourceEntity(20U);
    msg.setDestination(7310U);
    msg.setDestinationEntity(95U);
    msg.value = 0.9295414901102906;

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
    msg.setTimeStamp(0.7260923081505447);
    msg.setSource(31186U);
    msg.setSourceEntity(21U);
    msg.setDestination(9090U);
    msg.setDestinationEntity(31U);
    msg.value = 0.11006365038549204;

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
    msg.setTimeStamp(0.6100335727781309);
    msg.setSource(27952U);
    msg.setSourceEntity(207U);
    msg.setDestination(26403U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8574542925634103;

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
    msg.setTimeStamp(0.7059322709861752);
    msg.setSource(30975U);
    msg.setSourceEntity(135U);
    msg.setDestination(29294U);
    msg.setDestinationEntity(6U);
    msg.value = 0.43879310353723777;

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
    msg.setTimeStamp(0.45494199400544055);
    msg.setSource(10962U);
    msg.setSourceEntity(166U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(75U);
    msg.value = 0.44345653353516223;

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
    msg.setTimeStamp(0.48928786144427583);
    msg.setSource(14799U);
    msg.setSourceEntity(81U);
    msg.setDestination(50625U);
    msg.setDestinationEntity(144U);
    msg.value = 0.0429583525281787;

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
    msg.setTimeStamp(0.37791808342246913);
    msg.setSource(7817U);
    msg.setSourceEntity(65U);
    msg.setDestination(803U);
    msg.setDestinationEntity(205U);
    msg.value = 0.362918950122311;

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
    msg.setTimeStamp(0.5112197048134467);
    msg.setSource(22469U);
    msg.setSourceEntity(48U);
    msg.setDestination(31499U);
    msg.setDestinationEntity(140U);
    msg.value = 0.6191887334898764;

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
    msg.setTimeStamp(0.03505917198212383);
    msg.setSource(61057U);
    msg.setSourceEntity(239U);
    msg.setDestination(1061U);
    msg.setDestinationEntity(197U);
    msg.value = 0.36016864262934045;

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
    msg.setTimeStamp(0.8028619941895521);
    msg.setSource(58658U);
    msg.setSourceEntity(75U);
    msg.setDestination(34493U);
    msg.setDestinationEntity(204U);
    msg.value = 0.4626447735355984;

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
    msg.setTimeStamp(0.6238925426980642);
    msg.setSource(52639U);
    msg.setSourceEntity(163U);
    msg.setDestination(43399U);
    msg.setDestinationEntity(148U);
    msg.value = 0.8468102932958073;

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
    msg.setTimeStamp(0.2911123584140043);
    msg.setSource(17416U);
    msg.setSourceEntity(174U);
    msg.setDestination(54398U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7153651125191236;

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
    msg.setTimeStamp(0.7044209276061872);
    msg.setSource(61449U);
    msg.setSourceEntity(244U);
    msg.setDestination(43662U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6112640022583894;

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
    msg.setTimeStamp(0.7449321570771074);
    msg.setSource(26636U);
    msg.setSourceEntity(71U);
    msg.setDestination(10623U);
    msg.setDestinationEntity(175U);
    msg.value = 0.28728577403235767;

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
    msg.setTimeStamp(0.08601803641221706);
    msg.setSource(23511U);
    msg.setSourceEntity(2U);
    msg.setDestination(4595U);
    msg.setDestinationEntity(100U);
    msg.value = 0.5936211449809551;

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
    msg.setTimeStamp(0.06848800779470021);
    msg.setSource(5770U);
    msg.setSourceEntity(207U);
    msg.setDestination(17232U);
    msg.setDestinationEntity(219U);
    msg.value = 0.917575789972889;

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
    msg.setTimeStamp(0.9028426342844684);
    msg.setSource(10833U);
    msg.setSourceEntity(89U);
    msg.setDestination(25271U);
    msg.setDestinationEntity(26U);
    msg.value = 0.572962237751653;

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
    msg.setTimeStamp(0.1938971644280305);
    msg.setSource(32684U);
    msg.setSourceEntity(149U);
    msg.setDestination(36295U);
    msg.setDestinationEntity(37U);
    msg.value = 0.9998139723293722;

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
    msg.setTimeStamp(0.38252359084591525);
    msg.setSource(33907U);
    msg.setSourceEntity(242U);
    msg.setDestination(15370U);
    msg.setDestinationEntity(133U);
    msg.value = 0.17985249895375888;

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
    msg.setTimeStamp(0.4667286769209039);
    msg.setSource(59131U);
    msg.setSourceEntity(142U);
    msg.setDestination(12532U);
    msg.setDestinationEntity(49U);
    msg.value = 0.9107880958850162;

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
    msg.setTimeStamp(0.44063308254354516);
    msg.setSource(3887U);
    msg.setSourceEntity(246U);
    msg.setDestination(54446U);
    msg.setDestinationEntity(66U);
    msg.value = 0.7974058463557437;

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
    msg.setTimeStamp(0.14683814768878756);
    msg.setSource(60423U);
    msg.setSourceEntity(165U);
    msg.setDestination(55764U);
    msg.setDestinationEntity(251U);
    msg.value = 0.8762568707492175;

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
    msg.setTimeStamp(0.2178862917357952);
    msg.setSource(60233U);
    msg.setSourceEntity(108U);
    msg.setDestination(2745U);
    msg.setDestinationEntity(163U);
    msg.direction = 0.820717172080334;
    msg.speed = 0.9355974878257696;
    msg.turbulence = 0.03581766993422786;

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
    msg.setTimeStamp(0.3201772748789855);
    msg.setSource(15398U);
    msg.setSourceEntity(246U);
    msg.setDestination(39369U);
    msg.setDestinationEntity(114U);
    msg.direction = 0.9914489414022428;
    msg.speed = 0.32173542835439384;
    msg.turbulence = 0.24084115262822225;

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
    msg.setTimeStamp(0.8077861712422301);
    msg.setSource(21061U);
    msg.setSourceEntity(159U);
    msg.setDestination(36560U);
    msg.setDestinationEntity(51U);
    msg.direction = 0.43361911312848256;
    msg.speed = 0.8397879811085482;
    msg.turbulence = 0.5952127910063142;

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
    msg.setTimeStamp(0.6585390090806617);
    msg.setSource(34168U);
    msg.setSourceEntity(110U);
    msg.setDestination(32682U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5385996514902907;

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
    msg.setTimeStamp(0.854955127850912);
    msg.setSource(48300U);
    msg.setSourceEntity(182U);
    msg.setDestination(54369U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9097470917517898;

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
    msg.setTimeStamp(0.198999210495732);
    msg.setSource(55532U);
    msg.setSourceEntity(235U);
    msg.setDestination(26069U);
    msg.setDestinationEntity(222U);
    msg.value = 0.30667945688255405;

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
    msg.setTimeStamp(0.6412853346900194);
    msg.setSource(41512U);
    msg.setSourceEntity(129U);
    msg.setDestination(6186U);
    msg.setDestinationEntity(252U);
    msg.value.assign("EQFQOIYFDHPTPWUCPYSETMSDGOKKZENNTTVCPASSBNBYKQIMZIAHCHIZDHXFHJCVRSUIVYRQKTPWXWDERAGEYVULBSGBMLJALVZFGJWGIUZMJLQWJRNGBOKWIBYNMOTXDCEVJVOQUMGAPCDJFIWJZYENEIMNAFLMZMDVTGUFVWEKFUZAREROPJSXSRMAGTLLRLGKCTRUXHAOQNKBPXYVDRYWXOLTDILQQFUHBZHHKXHBQJCCNYPPKOXO");

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
    msg.setTimeStamp(0.10913946391206719);
    msg.setSource(28891U);
    msg.setSourceEntity(238U);
    msg.setDestination(13484U);
    msg.setDestinationEntity(32U);
    msg.value.assign("ETAARXZXIYODVASXAGMFMFXNYVPCMESVXBNZDBFPSLGAUURVCYESWZEEDGHTUEIYGBCUYDJE");

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
    msg.setTimeStamp(0.25915228322840866);
    msg.setSource(31058U);
    msg.setSourceEntity(53U);
    msg.setDestination(40121U);
    msg.setDestinationEntity(1U);
    msg.value.assign("TCXJAANPBBHMDPFUAINSDLBFAJXQXPRKVDAMJGYGKGFTTEWSXKDICQHPVJGEWCFPUTBIQLKEJIBJCKTNVCYSAUKZSAGVUEJYLVQSGMNFCZZZOJRRCSBODDLLRTMQVGEKLONCDLSOPNECSHFNHNZMHFRVYDPTO");

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
    msg.setTimeStamp(0.5475785462174344);
    msg.setSource(4387U);
    msg.setSourceEntity(236U);
    msg.setDestination(17209U);
    msg.setDestinationEntity(226U);
    const char tmp_msg_0[] = {-15, -81, -100, -123, 60, -73, 115, -47, -84, -88, -1, -20, 115, -48, 57, 45, -105, -90, -92, 41, -92, 0, 89, 36, 92, -89, -10, 71, -48, 93, 17, 87, -12, 10, -111, 34, 42, 32, 106, 123, 69, -36, -69, 46, 58, -56, 82, -69, -53, 29, -84, 12, 76, -85, 121, 9, 77, -112, 67, 114, 92, 64, -71, 65, -41, 1, -121, 87, 116, 12, -108, -73, -35, -3};
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
    msg.setTimeStamp(0.4501825887389125);
    msg.setSource(54180U);
    msg.setSourceEntity(206U);
    msg.setDestination(52420U);
    msg.setDestinationEntity(90U);
    const char tmp_msg_0[] = {55, -64, -14, -107, 68, 12, 37, 56, -71, -65, -126, 51, -93, 40, 33, 39, -99, 114, 81, -91, -76, -30, -91, 98, 110, 24, 42, 105, 73, -18, -25, 0, 50, 17, 87, -104, -31, -105, 104, 118, 1, 75, 109, 59, -100, 58, 44, 52, 94, -100, 35, 78, -13, -64, 75, -88, 75, 108, 62, -50, -2, -77, -125, 74, -72, 42, 81, -15, -51, -98, 4, -128, -10, -77, 33, -31, 106, -81, -98, -93, 41, 1, -125, -81, 102, -95, 103, 45, 92, 30, 48, 81, -44, -123, -122, -69, 88, -64, -60, 49, 85, -83, 9, 31, 57, 91, -99, 125, 52, -81, -94, -72, -18, 80, -92, 119, 16, -64, 95, -21, -70, 33, -95, 18, -1, 117, -102, 106, 97, 75, -11, -124, 35, 13, -84, 69, -8, -20, 63, 56, -117, 90, 28, 117, 57, 32, -42, 90, 79, 115, -20, -62, 102, -26, 106, 97, 87, 91, 126, 103, -12, -68, 82, 1, -47, -21, -28, 0, 121, -89, 43, -21, -12, -21, 110, 67, 54, 75, 72, -108, -124, 77, 64, 125};
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
    msg.setTimeStamp(0.49353080678332895);
    msg.setSource(63211U);
    msg.setSourceEntity(69U);
    msg.setDestination(41692U);
    msg.setDestinationEntity(18U);
    const char tmp_msg_0[] = {-52, 47, 44, 105, 72, 26, 100, 98, -14, -111, -66, 96, -61, -44, -112, -125, -93, 49, 13, 59, 74, 32, 95, 68, 25, 1, -112, -72, 103, -30, 28, -85, -70, 109, 106, -30, -81, -70, 22, 74, 66, -96, -117, 55, 3, -127, -119, 57, -76, 23, 75, 119, -108, 76, 87, -73, -18, 79, 60, 79, -115, -41, 102, 24, -113, -3, 106, 32, -123, -55, -107, -59, 66, 42, 33, 25, -67, -27, -93, -25, -67, -115, -63, 88, 114, -119, 103, -69, -24, -97, 119, -48, -108, -124, -46, 23, -95, 10, 1, -82, 110, -31, 22, 29, 84, -9, -124, -99, -77, 98, -29, 91, -86, 66, 28, -63, -9, 114, 25, 98, 16, -112, 11, -88, -26, 53, -65, -104, 29, 53, -112, -2, -90, -3, 100, -55, -68, 126, 43, -74, -15, 106, -77, 22, 65, -111, -8, -114, 99, -98, -93, -90, 108, 97, -22, 14, -53, -89, -84, 9, -124, -103, 54, 70, -63, 31, -8, -66, 101, -116, -128, -62, -113, 16, 54, -5, 92, 63, -28, -82, -100, -68, -17, 95, 124, 89, -1, -74, 3, 2, -8, 24, -2, -39, 24, 117, -101, 71, 98};
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
    msg.setTimeStamp(0.1530836650044315);
    msg.setSource(51131U);
    msg.setSourceEntity(190U);
    msg.setDestination(5526U);
    msg.setDestinationEntity(108U);
    msg.value = 0.6669456996191807;

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
    msg.setTimeStamp(0.7599577035567874);
    msg.setSource(12151U);
    msg.setSourceEntity(42U);
    msg.setDestination(25584U);
    msg.setDestinationEntity(216U);
    msg.value = 0.6279628096272095;

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
    msg.setTimeStamp(0.7134398278867329);
    msg.setSource(57896U);
    msg.setSourceEntity(232U);
    msg.setDestination(14287U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8144486955247395;

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
    msg.setTimeStamp(0.45973663425936684);
    msg.setSource(37028U);
    msg.setSourceEntity(132U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(17U);
    msg.type = 165U;
    msg.frequency = 3158819393U;
    msg.min_range = 65161U;
    msg.max_range = 65014U;
    msg.bits_per_point = 128U;
    msg.scale_factor = 0.06223256699428348;
    const char tmp_msg_0[] = {1, 113, 126, -104, 99, 85, -96, -79, 14, 6, 30, 17, -54, -34, -67, -99, 17, -84, 112, 72, -34, 73, -84, 55, 1, -114, 65, 50, -5, -95, -90, -89, -74, -120, -78, -4, -96, -114, 114, 18, -117, -77, 42, 43, 125, -33, 79, -95, 97, -27, 74, 3, 82, -38, -75, -26, -26, -37, 49, -121, 95, -123, -40, -114, -9, -43, 33, -31, -106, 120, -109, -20, 100, -101, -8, -30, 5, -94, 30, 99, -123, -12, 85, -115, 110, -12, 90, 42, -7, 54, -87, -72, 26, -126, -29, -81, 4, -82, 73, 42, 31, -116, 42, -20, 86, 43, -12, -83, 116, -94, 44, -1, 102, -117, -94, -110, 93, 102, -125, -19, 97, 108, -116, -2, -76, 38, -91, 116, -78, -33, -56, -13, -128, 108, -128, 37, -97, -106, 64, 94, 126, 32, -92, -32, -93, -73, 9, -70, -4, 76, 78, -17, 100, -82, -77, 87, -61, -14, 14, 118, -71, -3, 10, 39, -22, -124, 3, -88, 71, 7, 1, -35, -65, 64, 20, -109, 42, -99, -74, 38, -117, 47, -105, 44, -40, 27, 22, -72, 92, 37, -124, -5, -40, 92, 62, 30, -68, 92, -96, 50, 120, -90, 66, 58, 3, -117, 53, 59, 89, -34};
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
    msg.setTimeStamp(0.44928473133914437);
    msg.setSource(5272U);
    msg.setSourceEntity(202U);
    msg.setDestination(53182U);
    msg.setDestinationEntity(48U);
    msg.type = 113U;
    msg.frequency = 328192818U;
    msg.min_range = 322U;
    msg.max_range = 56888U;
    msg.bits_per_point = 245U;
    msg.scale_factor = 0.04081259107097135;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2522603405707443;
    tmp_msg_0.beam_height = 0.6314600003739161;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-92, -117, 119, -15, -92, -55, 99, 4, -3, -11, 94, -113, -24, -118, 123, 29, -90, 76, -13, 26, 100, 73, 96, -40, -111, -35, -16, -84, 119, 107, -77, 31, -35, 0, 46, 2, 111, 64, -61, -65, 125, 73, -124, -93, 118, -19, -24, -88, 99, -19, -25, -107, 107, -118, 86, 53, 25, 124, 63, 3, 71, 112, 65, 93, -21, -104, -32, -39, 118, -126, 123, 45, -8, -86, 78, -73, -74, -37, 101, 105, 125, -39, 48, 27, -65, 70, 50, 118, -18, -23, 117, -121, -115, 46, -31, -49, 35, -31, 48, 46, 124, -116, 105, -4, -10, -81, -59, -83, -68, -54, -128, -61, -127, -117, 94, 75, 125, -28, 111, -59, 42, -54, -43, 64, -45, 57, 10, 65, 59, -95, 86, 105, -1, -67, -16, -71, -47, 94, -101, -57, -59, -13, 95, 119, -44, 107, 34, 1, 121, -79, 76, -1, -13, 85, -26, -100, -54, 73, 73, 83, 78, -58, 85, -108, -76, 108, 9, -128, -87, 96, -62, -58, 31, 32, 123, 69, -94, -52};
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
    msg.setTimeStamp(0.028518408898327796);
    msg.setSource(63054U);
    msg.setSourceEntity(148U);
    msg.setDestination(844U);
    msg.setDestinationEntity(18U);
    msg.type = 244U;
    msg.frequency = 874244449U;
    msg.min_range = 56836U;
    msg.max_range = 52017U;
    msg.bits_per_point = 253U;
    msg.scale_factor = 0.949410093595837;
    const char tmp_msg_0[] = {-70, -113, -128, -12, 52, 33, 0, 60, 49, -106, 66, -85, 84, -3, 88, -5, -96, 98, 49, 14, -60, -10, -44, -109, 99, 122, 48, -124, 26, -11, -72, -67, -51, 57, -98, 28, 103, -16, 32, 79, -94, 122, 15, -69, 22, -2, -48, -96, -5, -37, -62, -80, -82, 25, 57, -42, -66, 13, -101, -119, 62, -9, 92, 125, 95, 116, 119, -99, -123, -116, -2, -11, -124, -64, 89, 110, -104, 24, -19, -10, -91, 13, -2, -20, -66, 90, 8, -44, -64, -71, -68, -52, -39, 78, 43, 71, 96, -102, 17, -116, 79, -30, 10, -44, 95, -92, 115, 116, 4, -31, 56, 71, -95, 8, 40, -126, -9, -43, -104, 58, 102, -108, -81, -69, 24, -62, 75, 117, 73, 42, 54, 71, 11, 21, 9, 70, 2, -90, -22, 13, -53, 66, 80, -24, 19, 4, 20, 51, -45, 19, -24, 6, -126, 7, 49, -73, 100, -86, -11, -21, 70, 29, 88, 21, 39, -45, -109, -81, -61, 96, 45, 98, 56, -60, 97, 80, -98, -63, 80, 20, -101, 48, 12, -38, -81, -26, -87, -90, -36, 12, -86, -48, 89, 100, -41, 38, -78, 121, -89, 47, 10, 117, 40, 90, -123, -17, 10, -126, -102, 40, 125, 10, -75, -39, -125, 97, 14, 41, 90, -57, 124, -126, 120, -74, -70, -51, -50, 52, 41, 64, -53, 126, -14, 4, -67, -100, 52, 26, -83, -124, -29, 24, -42, 93};
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
    msg.setTimeStamp(0.025932205222293114);
    msg.setSource(16773U);
    msg.setSourceEntity(145U);
    msg.setDestination(47506U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.8837868541726036);
    msg.setSource(13303U);
    msg.setSourceEntity(105U);
    msg.setDestination(64960U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.5466980957197577);
    msg.setSource(20080U);
    msg.setSourceEntity(150U);
    msg.setDestination(63208U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.33784127686433996);
    msg.setSource(23214U);
    msg.setSourceEntity(68U);
    msg.setDestination(38031U);
    msg.setDestinationEntity(245U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.06665049209481955);
    msg.setSource(9901U);
    msg.setSourceEntity(122U);
    msg.setDestination(43102U);
    msg.setDestinationEntity(79U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.25795354173670226);
    msg.setSource(23023U);
    msg.setSourceEntity(33U);
    msg.setDestination(13995U);
    msg.setDestinationEntity(234U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.22116908398672863);
    msg.setSource(37453U);
    msg.setSourceEntity(84U);
    msg.setDestination(25467U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7125037754478871;
    msg.confidence = 0.10977551075545644;
    msg.opmodes.assign("UIQDCHNMZKIZJSLIEJEEXHTCXUETTTSSJPADLUEWEJRPVDFZNZODQGQVSPQAYYXGDOSKXFFMGGOHKHHHCRQXZUNYRYLOTGCCNRCTGWBAUZRYLABPZXKUMLOFNUFSSJIHFOWPVVFPNEWQVQDRRKAZUMRBDVBCLPIMTPYWYGIHWVNJXQDTOOBITXWGXVOESZAYADGQHN");

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
    msg.setTimeStamp(0.93378977910201);
    msg.setSource(37644U);
    msg.setSourceEntity(168U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(7U);
    msg.value = 0.6153653175144639;
    msg.confidence = 0.1266142258097558;
    msg.opmodes.assign("ETQEXLIHIFGCGABPILQCKSBDKSQKRZEXNZNJKXVIZNUDCCPOZSHEBORSLYRFORGGNTAOUTRKTMWYIOYTVMKFAB");

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
    msg.setTimeStamp(0.7368549708477987);
    msg.setSource(61457U);
    msg.setSourceEntity(151U);
    msg.setDestination(59019U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9809949293560424;
    msg.confidence = 0.516635211187747;
    msg.opmodes.assign("MTKWFUKBWTGXPFHVSYCTBYAIWPBBUAIQVESHNPZIORGUXVZZTCNYZPBMUYYBFDEVGYCXCWQQZJTOKPRHCPGHPAQGYCRIBGDXJKDCWLDIVBTTLWR");

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
    msg.setTimeStamp(0.7545113326706274);
    msg.setSource(1186U);
    msg.setSourceEntity(47U);
    msg.setDestination(10715U);
    msg.setDestinationEntity(38U);
    msg.itow = 3775734121U;
    msg.lat = 0.3628708318517959;
    msg.lon = 0.3421785932317193;
    msg.height_ell = 0.9751294812206458;
    msg.height_sea = 0.09814393293307633;
    msg.hacc = 0.7932092679278437;
    msg.vacc = 0.8424197951551844;
    msg.vel_n = 0.4292194849259796;
    msg.vel_e = 0.34783146110158747;
    msg.vel_d = 0.2440267899544234;
    msg.speed = 0.5118666315809023;
    msg.gspeed = 0.7536895309941885;
    msg.heading = 0.8621205989341797;
    msg.sacc = 0.006239378663691064;
    msg.cacc = 0.8378557494773131;

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
    msg.setTimeStamp(0.9181635482195921);
    msg.setSource(54650U);
    msg.setSourceEntity(62U);
    msg.setDestination(40665U);
    msg.setDestinationEntity(74U);
    msg.itow = 946133050U;
    msg.lat = 0.7587971056114593;
    msg.lon = 0.008608701011555642;
    msg.height_ell = 0.37917811607815277;
    msg.height_sea = 0.5661560509571014;
    msg.hacc = 0.05700252368519709;
    msg.vacc = 0.625811978273264;
    msg.vel_n = 0.38902910560235116;
    msg.vel_e = 0.038417109853057796;
    msg.vel_d = 0.9173952358836219;
    msg.speed = 0.5798211591326612;
    msg.gspeed = 0.10372567938813093;
    msg.heading = 0.828145604082855;
    msg.sacc = 0.9968303958907266;
    msg.cacc = 0.01824652448578168;

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
    msg.setTimeStamp(0.23288478111235877);
    msg.setSource(35732U);
    msg.setSourceEntity(113U);
    msg.setDestination(35765U);
    msg.setDestinationEntity(111U);
    msg.itow = 1263198422U;
    msg.lat = 0.15806823264522807;
    msg.lon = 0.8520962727418553;
    msg.height_ell = 0.9449398220348404;
    msg.height_sea = 0.3152388001780373;
    msg.hacc = 0.17152868758682538;
    msg.vacc = 0.17562482527905898;
    msg.vel_n = 0.552715945726762;
    msg.vel_e = 0.5090038810405321;
    msg.vel_d = 0.38780301119968463;
    msg.speed = 0.6488102138377244;
    msg.gspeed = 0.15943883119073043;
    msg.heading = 0.3843936313152432;
    msg.sacc = 0.5520980490871301;
    msg.cacc = 0.48945278903489375;

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
    msg.setTimeStamp(0.5244412959092277);
    msg.setSource(9353U);
    msg.setSourceEntity(44U);
    msg.setDestination(62217U);
    msg.setDestinationEntity(249U);
    msg.id = 94U;
    msg.value = 0.6411100927702785;

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
    msg.setTimeStamp(0.05661870615110032);
    msg.setSource(3790U);
    msg.setSourceEntity(220U);
    msg.setDestination(10441U);
    msg.setDestinationEntity(43U);
    msg.id = 135U;
    msg.value = 0.06577712110368816;

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
    msg.setTimeStamp(0.39756838873058375);
    msg.setSource(40497U);
    msg.setSourceEntity(238U);
    msg.setDestination(14107U);
    msg.setDestinationEntity(150U);
    msg.id = 37U;
    msg.value = 0.8995531566445225;

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
    msg.setTimeStamp(0.6099304162555647);
    msg.setSource(34800U);
    msg.setSourceEntity(113U);
    msg.setDestination(4713U);
    msg.setDestinationEntity(182U);
    msg.x = 0.20558339396848635;
    msg.y = 0.580001991256945;
    msg.z = 0.38940692279478284;
    msg.phi = 0.5915629731013249;
    msg.theta = 0.7849037647849629;
    msg.psi = 0.8854909569652047;

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
    msg.setTimeStamp(0.7619953525782767);
    msg.setSource(47866U);
    msg.setSourceEntity(246U);
    msg.setDestination(65053U);
    msg.setDestinationEntity(212U);
    msg.x = 0.9107799352244311;
    msg.y = 0.5929789641938734;
    msg.z = 0.6300052895017495;
    msg.phi = 0.030880694367758754;
    msg.theta = 0.35369234639369307;
    msg.psi = 0.916639290972371;

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
    msg.setTimeStamp(0.5285662987222732);
    msg.setSource(16490U);
    msg.setSourceEntity(250U);
    msg.setDestination(59575U);
    msg.setDestinationEntity(138U);
    msg.x = 0.1581330707123283;
    msg.y = 0.7940257370919892;
    msg.z = 0.5432108805349488;
    msg.phi = 0.8430273025869697;
    msg.theta = 0.024237822457268465;
    msg.psi = 0.726522799352378;

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
    msg.setTimeStamp(0.8101071251512003);
    msg.setSource(17303U);
    msg.setSourceEntity(177U);
    msg.setDestination(14837U);
    msg.setDestinationEntity(101U);
    msg.beam_width = 0.36206715807420264;
    msg.beam_height = 0.5914879262205747;

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
    msg.setTimeStamp(0.4792206448688693);
    msg.setSource(58900U);
    msg.setSourceEntity(179U);
    msg.setDestination(49271U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.29160383264742606;
    msg.beam_height = 0.8006933987396406;

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
    msg.setTimeStamp(0.736340340301693);
    msg.setSource(18792U);
    msg.setSourceEntity(130U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(190U);
    msg.beam_width = 0.49500786813842357;
    msg.beam_height = 0.4136457825289792;

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
    msg.setTimeStamp(0.33916465436575294);
    msg.setSource(25090U);
    msg.setSourceEntity(191U);
    msg.setDestination(4608U);
    msg.setDestinationEntity(120U);
    msg.sane = 223U;

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
    msg.setTimeStamp(0.15367767051894388);
    msg.setSource(53707U);
    msg.setSourceEntity(142U);
    msg.setDestination(23408U);
    msg.setDestinationEntity(110U);
    msg.sane = 251U;

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
    msg.setTimeStamp(0.7376137388100947);
    msg.setSource(14490U);
    msg.setSourceEntity(112U);
    msg.setDestination(28032U);
    msg.setDestinationEntity(87U);
    msg.sane = 225U;

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
    msg.setTimeStamp(0.8052906933658078);
    msg.setSource(10665U);
    msg.setSourceEntity(84U);
    msg.setDestination(60128U);
    msg.setDestinationEntity(47U);
    msg.value = 0.6422449858852485;

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
    msg.setTimeStamp(0.8005710515852739);
    msg.setSource(55516U);
    msg.setSourceEntity(166U);
    msg.setDestination(11559U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6734106696796102;

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
    msg.setTimeStamp(0.005384889610547838);
    msg.setSource(4105U);
    msg.setSourceEntity(69U);
    msg.setDestination(40366U);
    msg.setDestinationEntity(68U);
    msg.value = 0.7113950248005123;

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
    msg.setTimeStamp(0.7858135630509872);
    msg.setSource(42490U);
    msg.setSourceEntity(59U);
    msg.setDestination(25340U);
    msg.setDestinationEntity(216U);
    msg.value = 0.23235735312794592;

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
    msg.setTimeStamp(0.587399186005884);
    msg.setSource(15654U);
    msg.setSourceEntity(12U);
    msg.setDestination(65344U);
    msg.setDestinationEntity(81U);
    msg.value = 0.479351735204153;

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
    msg.setTimeStamp(0.7390106022601894);
    msg.setSource(36147U);
    msg.setSourceEntity(185U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6224326084494216;

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
    msg.setTimeStamp(0.7411686433392516);
    msg.setSource(49010U);
    msg.setSourceEntity(199U);
    msg.setDestination(54459U);
    msg.setDestinationEntity(132U);
    msg.value = 0.9405153853732166;

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
    msg.setTimeStamp(0.5362196078419895);
    msg.setSource(43455U);
    msg.setSourceEntity(73U);
    msg.setDestination(41382U);
    msg.setDestinationEntity(81U);
    msg.value = 0.32745898837239107;

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
    msg.setTimeStamp(0.5715708858469951);
    msg.setSource(65470U);
    msg.setSourceEntity(53U);
    msg.setDestination(37602U);
    msg.setDestinationEntity(63U);
    msg.value = 0.8052653808261341;

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
    msg.setTimeStamp(0.36537216593913013);
    msg.setSource(49056U);
    msg.setSourceEntity(91U);
    msg.setDestination(64066U);
    msg.setDestinationEntity(4U);
    msg.value = 0.3869129341455618;

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
    msg.setTimeStamp(0.8100603833297515);
    msg.setSource(9465U);
    msg.setSourceEntity(168U);
    msg.setDestination(5491U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8497559039111703;

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
    msg.setTimeStamp(0.29127401454817814);
    msg.setSource(1202U);
    msg.setSourceEntity(177U);
    msg.setDestination(50483U);
    msg.setDestinationEntity(0U);
    msg.value = 0.4561363109346628;

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
    msg.setTimeStamp(0.9990326471060348);
    msg.setSource(64729U);
    msg.setSourceEntity(8U);
    msg.setDestination(4395U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9195888161899469;

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
    msg.setTimeStamp(0.8414686611035312);
    msg.setSource(37381U);
    msg.setSourceEntity(37U);
    msg.setDestination(11105U);
    msg.setDestinationEntity(210U);
    msg.value = 0.055158568901908844;

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
    msg.setTimeStamp(0.4578428148033139);
    msg.setSource(14991U);
    msg.setSourceEntity(122U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(183U);
    msg.value = 0.7242722260397201;

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
    msg.setTimeStamp(0.4258645003563696);
    msg.setSource(10836U);
    msg.setSourceEntity(161U);
    msg.setDestination(25576U);
    msg.setDestinationEntity(79U);
    msg.value = 0.1321877335503462;

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
    msg.setTimeStamp(0.5250266274475953);
    msg.setSource(34403U);
    msg.setSourceEntity(217U);
    msg.setDestination(16009U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7998779778613785;

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
    msg.setTimeStamp(0.7083596940913465);
    msg.setSource(19407U);
    msg.setSourceEntity(22U);
    msg.setDestination(45947U);
    msg.setDestinationEntity(141U);
    msg.value = 0.4671599590268245;

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
    msg.setTimeStamp(0.09650971160602628);
    msg.setSource(44718U);
    msg.setSourceEntity(4U);
    msg.setDestination(15492U);
    msg.setDestinationEntity(174U);
    msg.value = 0.3067864633491657;

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
    msg.setTimeStamp(0.9064432411677011);
    msg.setSource(42265U);
    msg.setSourceEntity(132U);
    msg.setDestination(43523U);
    msg.setDestinationEntity(5U);
    msg.value = 0.668871131387741;

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
    msg.setTimeStamp(0.38395743680742966);
    msg.setSource(50655U);
    msg.setSourceEntity(32U);
    msg.setDestination(50381U);
    msg.setDestinationEntity(207U);
    msg.value = 0.9051372334513054;

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
    msg.setTimeStamp(0.9916511783585608);
    msg.setSource(4079U);
    msg.setSourceEntity(200U);
    msg.setDestination(19529U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8071583839177481;

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
    msg.setTimeStamp(0.8728119091196662);
    msg.setSource(34980U);
    msg.setSourceEntity(210U);
    msg.setDestination(8186U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5023582961849695;

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
    msg.setTimeStamp(0.523986218792549);
    msg.setSource(31781U);
    msg.setSourceEntity(158U);
    msg.setDestination(60001U);
    msg.setDestinationEntity(219U);
    msg.value = 0.9837840477768816;

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
    msg.setTimeStamp(0.020460741747589273);
    msg.setSource(42860U);
    msg.setSourceEntity(250U);
    msg.setDestination(26123U);
    msg.setDestinationEntity(66U);
    msg.validity = 15678U;
    msg.type = 192U;
    msg.tow = 2354904592U;
    msg.base_lat = 0.9409259763084811;
    msg.base_lon = 0.19960831216735375;
    msg.base_height = 0.18459815179749417;
    msg.n = 0.26090012032793897;
    msg.e = 0.1079982325541965;
    msg.d = 0.8571181745370415;
    msg.v_n = 0.47935797489713594;
    msg.v_e = 0.8616016405690432;
    msg.v_d = 0.8411307123479626;
    msg.satellites = 130U;
    msg.iar_hyp = 16979U;
    msg.iar_ratio = 0.3278973095147115;

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
    msg.setTimeStamp(0.5342634387187729);
    msg.setSource(55327U);
    msg.setSourceEntity(204U);
    msg.setDestination(32444U);
    msg.setDestinationEntity(12U);
    msg.validity = 20718U;
    msg.type = 232U;
    msg.tow = 3233539169U;
    msg.base_lat = 0.43402287746752977;
    msg.base_lon = 0.1471356330181831;
    msg.base_height = 0.8473885770298221;
    msg.n = 0.3541061392973496;
    msg.e = 0.05819003923286137;
    msg.d = 0.9891729513676091;
    msg.v_n = 0.07038406859072899;
    msg.v_e = 0.6108946578334619;
    msg.v_d = 0.11961368819177798;
    msg.satellites = 177U;
    msg.iar_hyp = 45956U;
    msg.iar_ratio = 0.724479689598942;

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
    msg.setTimeStamp(0.3270733065320478);
    msg.setSource(15728U);
    msg.setSourceEntity(249U);
    msg.setDestination(59507U);
    msg.setDestinationEntity(115U);
    msg.validity = 58903U;
    msg.type = 241U;
    msg.tow = 1152602251U;
    msg.base_lat = 0.11176335046415675;
    msg.base_lon = 0.9989966337933266;
    msg.base_height = 0.1342728790833594;
    msg.n = 0.4077340130826713;
    msg.e = 0.2647699599790797;
    msg.d = 0.222106340027881;
    msg.v_n = 0.7202919030116971;
    msg.v_e = 0.37562431531815754;
    msg.v_d = 0.2457019376291132;
    msg.satellites = 243U;
    msg.iar_hyp = 43868U;
    msg.iar_ratio = 0.9616647494111503;

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
    msg.setTimeStamp(0.540876841786809);
    msg.setSource(27387U);
    msg.setSourceEntity(155U);
    msg.setDestination(58408U);
    msg.setDestinationEntity(248U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8775751046577424;
    tmp_msg_0.lon = 0.6736695695835366;
    tmp_msg_0.height = 0.4500811289876697;
    tmp_msg_0.x = 0.04448076102906895;
    tmp_msg_0.y = 0.12460975496827853;
    tmp_msg_0.z = 0.31941242475399256;
    tmp_msg_0.phi = 0.7669374720547837;
    tmp_msg_0.theta = 0.4372017529160134;
    tmp_msg_0.psi = 0.8071449049691051;
    tmp_msg_0.u = 0.41302304908373455;
    tmp_msg_0.v = 0.560888265024471;
    tmp_msg_0.w = 0.9751487000305367;
    tmp_msg_0.vx = 0.99497287166545;
    tmp_msg_0.vy = 0.4988205638791643;
    tmp_msg_0.vz = 0.7185924040082643;
    tmp_msg_0.p = 0.9704494898922135;
    tmp_msg_0.q = 0.8419109053467227;
    tmp_msg_0.r = 0.7745590274474439;
    tmp_msg_0.depth = 0.44308959270328896;
    tmp_msg_0.alt = 0.8970784444103433;
    msg.state.set(tmp_msg_0);
    msg.type = 27U;

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
    msg.setTimeStamp(0.6734390920283893);
    msg.setSource(20733U);
    msg.setSourceEntity(167U);
    msg.setDestination(43710U);
    msg.setDestinationEntity(126U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6856792759869283;
    tmp_msg_0.lon = 0.3331160351875587;
    tmp_msg_0.height = 0.7867382187534888;
    tmp_msg_0.x = 0.268659691543329;
    tmp_msg_0.y = 0.3309315388958285;
    tmp_msg_0.z = 0.0359686552321512;
    tmp_msg_0.phi = 0.3390918407936184;
    tmp_msg_0.theta = 0.8888260396936467;
    tmp_msg_0.psi = 0.7908142852258885;
    tmp_msg_0.u = 0.29827684422116607;
    tmp_msg_0.v = 0.7358897325642947;
    tmp_msg_0.w = 0.5594650460297044;
    tmp_msg_0.vx = 0.4925859869131213;
    tmp_msg_0.vy = 0.42779139208915085;
    tmp_msg_0.vz = 0.21362197342302047;
    tmp_msg_0.p = 0.643727584276736;
    tmp_msg_0.q = 0.6075200389493172;
    tmp_msg_0.r = 0.11454012494175658;
    tmp_msg_0.depth = 0.8424998269587406;
    tmp_msg_0.alt = 0.17123784309797552;
    msg.state.set(tmp_msg_0);
    msg.type = 59U;

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
    msg.setTimeStamp(0.970782342392166);
    msg.setSource(46436U);
    msg.setSourceEntity(191U);
    msg.setDestination(23399U);
    msg.setDestinationEntity(141U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7191481688233388;
    tmp_msg_0.lon = 0.26386053728088377;
    tmp_msg_0.height = 0.3829258535785157;
    tmp_msg_0.x = 0.21293560544156642;
    tmp_msg_0.y = 0.7732179969471427;
    tmp_msg_0.z = 0.07771063469595663;
    tmp_msg_0.phi = 0.3599145006949529;
    tmp_msg_0.theta = 0.5719674344178108;
    tmp_msg_0.psi = 0.9893559520431098;
    tmp_msg_0.u = 0.3607236549832037;
    tmp_msg_0.v = 0.6846294346905252;
    tmp_msg_0.w = 0.13436067492609638;
    tmp_msg_0.vx = 0.38068620540836196;
    tmp_msg_0.vy = 0.10540411429950047;
    tmp_msg_0.vz = 0.7913204693004929;
    tmp_msg_0.p = 0.8080427038219553;
    tmp_msg_0.q = 0.5070370932928814;
    tmp_msg_0.r = 0.2518290626601887;
    tmp_msg_0.depth = 0.5550615693093447;
    tmp_msg_0.alt = 0.7714108531661854;
    msg.state.set(tmp_msg_0);
    msg.type = 125U;

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
    msg.setTimeStamp(0.7447191594690622);
    msg.setSource(59104U);
    msg.setSourceEntity(27U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(89U);
    msg.value = 0.1451631256719369;

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
    msg.setTimeStamp(0.23376023882320174);
    msg.setSource(35454U);
    msg.setSourceEntity(90U);
    msg.setDestination(51216U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9943544738660556;

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
    msg.setTimeStamp(0.05813562583308285);
    msg.setSource(44744U);
    msg.setSourceEntity(25U);
    msg.setDestination(2422U);
    msg.setDestinationEntity(147U);
    msg.value = 0.1754289802414909;

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
    msg.setTimeStamp(0.9000583350326561);
    msg.setSource(10387U);
    msg.setSourceEntity(136U);
    msg.setDestination(47647U);
    msg.setDestinationEntity(30U);
    msg.value = 0.8727406960293432;

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
    msg.setTimeStamp(0.6700433794347714);
    msg.setSource(35176U);
    msg.setSourceEntity(178U);
    msg.setDestination(53621U);
    msg.setDestinationEntity(216U);
    msg.value = 0.5881523181600429;

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
    msg.setTimeStamp(0.10619316269769297);
    msg.setSource(7542U);
    msg.setSourceEntity(128U);
    msg.setDestination(17417U);
    msg.setDestinationEntity(153U);
    msg.value = 0.35720567917497437;

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
    msg.setTimeStamp(0.7656918236435855);
    msg.setSource(6220U);
    msg.setSourceEntity(107U);
    msg.setDestination(33994U);
    msg.setDestinationEntity(108U);
    msg.value = 0.412580801952282;

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
    msg.setTimeStamp(0.9892543166117342);
    msg.setSource(64420U);
    msg.setSourceEntity(46U);
    msg.setDestination(28783U);
    msg.setDestinationEntity(209U);
    msg.value = 0.12223498942872002;

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
    msg.setTimeStamp(0.9312377653199602);
    msg.setSource(34641U);
    msg.setSourceEntity(178U);
    msg.setDestination(6203U);
    msg.setDestinationEntity(63U);
    msg.value = 0.38073343905696766;

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
    msg.setTimeStamp(0.7020879925707432);
    msg.setSource(46608U);
    msg.setSourceEntity(177U);
    msg.setDestination(13720U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7689242492155484;

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
    msg.setTimeStamp(0.30782305505202723);
    msg.setSource(864U);
    msg.setSourceEntity(149U);
    msg.setDestination(5134U);
    msg.setDestinationEntity(43U);
    msg.value = 0.02831519984018671;

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
    msg.setTimeStamp(0.4616175542567277);
    msg.setSource(3401U);
    msg.setSourceEntity(73U);
    msg.setDestination(50280U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8685512864961167;

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
    msg.setTimeStamp(0.2865526468408903);
    msg.setSource(1329U);
    msg.setSourceEntity(19U);
    msg.setDestination(32039U);
    msg.setDestinationEntity(239U);
    msg.value = 0.10733373020337655;

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
    msg.setTimeStamp(0.010482370973704636);
    msg.setSource(40020U);
    msg.setSourceEntity(156U);
    msg.setDestination(8089U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9635395985662785;

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
    msg.setTimeStamp(0.6788325558590315);
    msg.setSource(60958U);
    msg.setSourceEntity(202U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(94U);
    msg.value = 0.8023830658089248;

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
    msg.setTimeStamp(0.7628343995639852);
    msg.setSource(42141U);
    msg.setSourceEntity(178U);
    msg.setDestination(29737U);
    msg.setDestinationEntity(160U);
    msg.id = 62U;
    msg.zoom = 50U;
    msg.action = 90U;

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
    msg.setTimeStamp(0.9092257119037207);
    msg.setSource(9651U);
    msg.setSourceEntity(118U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(58U);
    msg.id = 28U;
    msg.zoom = 168U;
    msg.action = 34U;

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
    msg.setTimeStamp(0.6185905654319028);
    msg.setSource(59667U);
    msg.setSourceEntity(52U);
    msg.setDestination(6863U);
    msg.setDestinationEntity(49U);
    msg.id = 31U;
    msg.zoom = 45U;
    msg.action = 238U;

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
    msg.setTimeStamp(0.46484678003814195);
    msg.setSource(23425U);
    msg.setSourceEntity(81U);
    msg.setDestination(22652U);
    msg.setDestinationEntity(72U);
    msg.id = 15U;
    msg.value = 0.22976209900709954;

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
    msg.setTimeStamp(0.9518976662272193);
    msg.setSource(28458U);
    msg.setSourceEntity(137U);
    msg.setDestination(33493U);
    msg.setDestinationEntity(140U);
    msg.id = 118U;
    msg.value = 0.002092544000639629;

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
    msg.setTimeStamp(0.2618712818067538);
    msg.setSource(32295U);
    msg.setSourceEntity(84U);
    msg.setDestination(20467U);
    msg.setDestinationEntity(100U);
    msg.id = 163U;
    msg.value = 0.34069645274141935;

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
    msg.setTimeStamp(0.0834323791660152);
    msg.setSource(32543U);
    msg.setSourceEntity(14U);
    msg.setDestination(51204U);
    msg.setDestinationEntity(250U);
    msg.id = 211U;
    msg.value = 0.06712246537698074;

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
    msg.setTimeStamp(0.016638434785478218);
    msg.setSource(15962U);
    msg.setSourceEntity(57U);
    msg.setDestination(49384U);
    msg.setDestinationEntity(161U);
    msg.id = 51U;
    msg.value = 0.8190012580958945;

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
    msg.setTimeStamp(0.7106656121845792);
    msg.setSource(8454U);
    msg.setSourceEntity(213U);
    msg.setDestination(63497U);
    msg.setDestinationEntity(60U);
    msg.id = 123U;
    msg.value = 0.7322839393285626;

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
    msg.setTimeStamp(0.945000028346437);
    msg.setSource(12642U);
    msg.setSourceEntity(234U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(56U);
    msg.id = 221U;
    msg.angle = 0.6990309684435773;

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
    msg.setTimeStamp(0.7046277645834886);
    msg.setSource(26321U);
    msg.setSourceEntity(31U);
    msg.setDestination(53249U);
    msg.setDestinationEntity(134U);
    msg.id = 76U;
    msg.angle = 0.8695392805806313;

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
    msg.setTimeStamp(0.2583154301742835);
    msg.setSource(9897U);
    msg.setSourceEntity(197U);
    msg.setDestination(24328U);
    msg.setDestinationEntity(246U);
    msg.id = 139U;
    msg.angle = 0.4356041777029027;

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
    msg.setTimeStamp(0.15137290024351846);
    msg.setSource(46045U);
    msg.setSourceEntity(222U);
    msg.setDestination(44150U);
    msg.setDestinationEntity(38U);
    msg.op = 169U;
    msg.actions.assign("EIVEJNYEEFQSVGMXZUSSNIZHCUUFTZQTFVPICJCLVPOXMLO");

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
    msg.setTimeStamp(0.616846072155185);
    msg.setSource(8252U);
    msg.setSourceEntity(84U);
    msg.setDestination(56268U);
    msg.setDestinationEntity(138U);
    msg.op = 157U;
    msg.actions.assign("ULIHUZPHEITNXKXPZXWZGOKQPMRZZIAHCGPFLFSWHPFBCLEWKWKGDTJOEZQJSVVFGQOKOSYCKLVWQQKJAIYRTKYVPNIHMNYADMKUQIXXRZSUWWDQBNSERVDHMITUVZWTTMLPYDOLFCFPRAGRVCOCGOTVUYAROTTLSBFGXRNACECSCDYBMBRUSBNBLUFLXDNGWQJQKZHSBJM");

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
    msg.setTimeStamp(0.7228560663980177);
    msg.setSource(57508U);
    msg.setSourceEntity(187U);
    msg.setDestination(4955U);
    msg.setDestinationEntity(35U);
    msg.op = 165U;
    msg.actions.assign("CMDNVMRDXSBVUUKWBLBBHEIXNITLYMHKWYPGSWLWYAHBTMZARLHSOUDUQZZUKDQBHZGZFXISYZYCYCMUKUSRYNCCAGZRHPOJCJMWQETUKOGBEKVZVOJVOFNAXWLXHNHGYFRCDYENAILNPTLIEGMFRMQENTRDRMIFPKPAYKPFCGJBJTXJLPSPQXOHTOOXPBV");

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
    msg.setTimeStamp(0.8301124785003718);
    msg.setSource(53581U);
    msg.setSourceEntity(172U);
    msg.setDestination(30279U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("HTQSXACWFOQFZJCZFADSURTFBDLUNAICOYLPUPSNMSPIIEQNDXYODBZ");

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
    msg.setTimeStamp(0.30707593457496873);
    msg.setSource(40030U);
    msg.setSourceEntity(95U);
    msg.setDestination(40694U);
    msg.setDestinationEntity(219U);
    msg.actions.assign("STHVMZPRKUIYVJIEUIBTTNHDXFKMWRYBGCWNDNMLSGYNNSSNSTHJMIRHCPADRGYGMLWAMTGNUXGFLOGSYLFERJONBZCFMPZAZUVVQOXIAZUMAHEQYWKPXJYLEZGVXFBXEKRJJINSHRZXQAKHPTLRIAAKUGVBYYPCULVUQLQ");

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
    msg.setTimeStamp(0.6536205285202877);
    msg.setSource(28002U);
    msg.setSourceEntity(37U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(231U);
    msg.actions.assign("UDLKATICRHWBSMFSSVOUWNBOQOCWEJIMFPQNJZQQRCKHNZ");

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
    msg.setTimeStamp(0.9291151354355912);
    msg.setSource(19330U);
    msg.setSourceEntity(226U);
    msg.setDestination(6022U);
    msg.setDestinationEntity(171U);
    msg.button = 33U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.6583918842002211);
    msg.setSource(4395U);
    msg.setSourceEntity(101U);
    msg.setDestination(12741U);
    msg.setDestinationEntity(216U);
    msg.button = 205U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.055559373826016056);
    msg.setSource(4249U);
    msg.setSourceEntity(71U);
    msg.setDestination(35750U);
    msg.setDestinationEntity(27U);
    msg.button = 216U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.9258006250418762);
    msg.setSource(42493U);
    msg.setSourceEntity(154U);
    msg.setDestination(35210U);
    msg.setDestinationEntity(47U);
    msg.op = 96U;
    msg.text.assign("RMSYNLIWGZIKSVKSOG");

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
    msg.setTimeStamp(0.20211853148124836);
    msg.setSource(53510U);
    msg.setSourceEntity(46U);
    msg.setDestination(37360U);
    msg.setDestinationEntity(251U);
    msg.op = 77U;
    msg.text.assign("VRNKWDISUOJICVWNUXUQYTOMWBETUQLBZVGASUXEVNDRPTJZHMRCGBQDQZWPMOGBRDTZIMLAZIFVXRKYYUDQLTGKPLHWHIBQMXSFIOKJELERCFPVOPUSGUHASFCJBOBJAXFKTYFJKHACBMHXZSTXTBWJAHLOYYGBVGXWLAVKGIELLWPAXZYNWCFESHKHSSPAZCMYVNEUODZKPIFNIZESAQKDXUHNMVR");

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
    msg.setTimeStamp(0.7696072917954833);
    msg.setSource(35036U);
    msg.setSourceEntity(20U);
    msg.setDestination(57800U);
    msg.setDestinationEntity(194U);
    msg.op = 96U;
    msg.text.assign("RORUCEKQJBEHRVFLTKNWWQXKZRTDETNPPLYKZXLBDQFCLAHCAISDSVJUJFQRLWNQFZJZKYUNURIBJAONKIGBOUMDQKMUJTFLMPPLCSJKYHTXGDEPBHHJOIQXGGIWVNYSPUZXMGVMXZFXBIOBVYSSPGPCZIEHYISVKFSRVFARAYRPQQOGNOHWUMVEEZBSMUTDDTNFYOAAXCOIL");

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
    msg.setTimeStamp(0.9710187490429426);
    msg.setSource(6290U);
    msg.setSourceEntity(30U);
    msg.setDestination(60746U);
    msg.setDestinationEntity(206U);
    msg.op = 78U;
    msg.time_remain = 0.8275916460521189;
    msg.sched_time = 0.69875499965661;

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
    msg.setTimeStamp(0.6936436105879646);
    msg.setSource(11648U);
    msg.setSourceEntity(2U);
    msg.setDestination(30631U);
    msg.setDestinationEntity(8U);
    msg.op = 11U;
    msg.time_remain = 0.12452711490357726;
    msg.sched_time = 0.8683921340457352;

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
    msg.setTimeStamp(0.9233147857280175);
    msg.setSource(11212U);
    msg.setSourceEntity(250U);
    msg.setDestination(64024U);
    msg.setDestinationEntity(142U);
    msg.op = 109U;
    msg.time_remain = 0.3000767665611356;
    msg.sched_time = 0.4038224770609047;

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
    msg.setTimeStamp(0.08275098966750216);
    msg.setSource(2462U);
    msg.setSourceEntity(24U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(57U);
    msg.name.assign("HLKTCZPGKFYGARHRBNMZJXDNSUVPLKOTPFEFZBWFQUYVFLSMLINGJTZSJVGUNESEOUUDGAKKLRJAECYKYTMHXXLNXWVFOWUDRHTWJKBANNLSHTESNQFXYICMMGMDRAEYOEBOOCQIWDPQEORMWDCLBIQIHZAPZTGXXWRJPZQDTCVHUCOBAYAYTQNFHGCPLBQD");
    msg.op = 61U;
    msg.sched_time = 0.04845488182820912;

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
    msg.setTimeStamp(0.6804987210237344);
    msg.setSource(58274U);
    msg.setSourceEntity(5U);
    msg.setDestination(27814U);
    msg.setDestinationEntity(224U);
    msg.name.assign("GMHSBOLSPCCEUVUMXIGSFYCJQHBXZRLQUEGWMKUBQSUADJYOXNZDBNBTJQMKRISTQWVTJGQPTQGLCSPUOIHJXJAWXCPNDYKHMWWOADIMLEAFCFZYVAPQIQKNZNVWFPVOJWZYFDREROODNGKREAKKPLCBVDFCXUBOYTEEMRFTTHHJHVLYTLUTYZAR");
    msg.op = 83U;
    msg.sched_time = 0.06287473136200394;

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
    msg.setTimeStamp(0.5724959227451872);
    msg.setSource(11030U);
    msg.setSourceEntity(58U);
    msg.setDestination(28695U);
    msg.setDestinationEntity(132U);
    msg.name.assign("WTVYSXNTICASOHNWFXPYOYQZLPNDNJDOGQLYYHKGUAKNRWXBLNXOCGQQDGKLJZRZEHEIZPNFQVIFTFHYUYWRSIAFRCWBCJGOXEVQZXJBBVGBHHJHBUVRKKSTTAWVNNMIMPSFRWSDQWKIZKOVDEFYGXATAXWOZMTPAJICIUOZRLYOTHVHZDLUUZCMJNRGGKCMEWDUSQAQJDRXBTRVUFM");
    msg.op = 152U;
    msg.sched_time = 0.305116349080336;

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
    msg.setTimeStamp(0.3051903941780454);
    msg.setSource(8610U);
    msg.setSourceEntity(6U);
    msg.setDestination(35367U);
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
    msg.setTimeStamp(0.5288757817373998);
    msg.setSource(44007U);
    msg.setSourceEntity(16U);
    msg.setDestination(24335U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.7003924305668691);
    msg.setSource(43120U);
    msg.setSourceEntity(37U);
    msg.setDestination(28846U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.05179690804208947);
    msg.setSource(50156U);
    msg.setSourceEntity(243U);
    msg.setDestination(23538U);
    msg.setDestinationEntity(190U);
    msg.name.assign("DOWVLXMLVSAKOCOIJHEWNISZSROYJSFVBGSFQGRDTMXJNTKPQXAUKZ");
    msg.state = 185U;

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
    msg.setTimeStamp(0.3578525780511219);
    msg.setSource(44138U);
    msg.setSourceEntity(214U);
    msg.setDestination(60824U);
    msg.setDestinationEntity(194U);
    msg.name.assign("KADMSYGDHWHBCJJGPHUYUOMFMNWYRULTDLYJPRCZADQLVFTUIKSRCNUISXUAEBMKZXONHQNOOHCYSVTSYSAGGRBIZXGPQTJYZSSAUYVMVOKRKKWTLAWPNTUABDJOZQDDXLFQUIJRJNMAQLEWEFVIRFPOENSHERHWYW");
    msg.state = 196U;

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
    msg.setTimeStamp(0.6915543043085918);
    msg.setSource(56098U);
    msg.setSourceEntity(29U);
    msg.setDestination(42982U);
    msg.setDestinationEntity(250U);
    msg.name.assign("XUZLCTJPICTZPIUMRFYULMNCWJENUQVKPRMZMJHRAIEWHJQCRANQUJSVTFMSDXQSUOAIHLKYMVROZEADNEQTETIWWCVOOQBPZPRKOFBYLWCNCPWVXEGQYXGMEAKPFBOFKSMNKCZXKIJGZJFJH");
    msg.state = 26U;

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
    msg.setTimeStamp(0.4849244058308898);
    msg.setSource(9501U);
    msg.setSourceEntity(83U);
    msg.setDestination(5149U);
    msg.setDestinationEntity(72U);
    msg.name.assign("DEOKFMXUUYMOXFVDWKESEIYTGAPOFFYHBENTIKJULBVIHOULSPRFIWDQUXITWTXJMVLNMAWTRUJQOJCWPZPCAWTQQIRUOUSBNEVKPNHCXNYSZGJSVUOMXYJBRCFZWTMDTPVIBKHGDZZCSKRKLNSZQMCRWRGVGZOTXQGPEMXYRSGYUDJVSGNIFSNJLFBPAXGGCCOYKZLDZHCPLWKRBJHIFTMMPWZJYEOCBQQAAVNDBLQDHARAKLAVIEENLHXHH");
    msg.value = 122U;

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
    msg.setTimeStamp(0.7403702914619109);
    msg.setSource(35530U);
    msg.setSourceEntity(247U);
    msg.setDestination(61986U);
    msg.setDestinationEntity(48U);
    msg.name.assign("AZLEHULZBSZXBYTHOGOEWXIGHRKXRIHMATGQQOGPQCIUMPNWVFIKBDPLLCCCKZKFPRCTRBGYAXKMHDKJLBBJETNPVBZNYFYWDZURNADIHKDY");
    msg.value = 112U;

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
    msg.setTimeStamp(0.9699560157223059);
    msg.setSource(47246U);
    msg.setSourceEntity(131U);
    msg.setDestination(17400U);
    msg.setDestinationEntity(151U);
    msg.name.assign("KTCPPGYVBONROWHYQUUJEJBUANCPYTVYRF");
    msg.value = 247U;

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
    msg.setTimeStamp(0.07930360015412363);
    msg.setSource(28335U);
    msg.setSourceEntity(170U);
    msg.setDestination(6605U);
    msg.setDestinationEntity(84U);
    msg.name.assign("ZHGJUWNGHKWNMJWJMPBEBBIZFGIUMWCZGCSUL");

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
    msg.setTimeStamp(0.5869635693567515);
    msg.setSource(16330U);
    msg.setSourceEntity(153U);
    msg.setDestination(26975U);
    msg.setDestinationEntity(40U);
    msg.name.assign("USQUIJTIVPANVRNXWCAUQPKAGDAQOOZJHYPDRALLWXBFKRFQJVJNBUPFIJIO");

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
    msg.setTimeStamp(0.9663768796672799);
    msg.setSource(54972U);
    msg.setSourceEntity(116U);
    msg.setDestination(40384U);
    msg.setDestinationEntity(86U);
    msg.name.assign("GPPEYLXASEORYPGBTMNKKOQXSYYKIUINPIBRWYMAVKLNUJDBGCFVELIUDDGCKLVJFWIHXHBCFQMJYWWOMAZHHNZP");

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
    msg.setTimeStamp(0.5863373985528173);
    msg.setSource(59525U);
    msg.setSourceEntity(59U);
    msg.setDestination(4943U);
    msg.setDestinationEntity(129U);
    msg.name.assign("WRFJSLGEWJDEFIRTNKJUKHGIRAOHBLQSFYFEWILZCREUCKOJYMHUMRMVJGUQEKBOPZFU");
    msg.value = 5U;

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
    msg.setTimeStamp(0.8175418762946297);
    msg.setSource(59224U);
    msg.setSourceEntity(243U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(177U);
    msg.name.assign("QKJXFXNQZNRCUYYKLBZAMHYOVZRUAPXXHYNOPCGZQNEADJNUXGCMZMDQTWGJHEITFDNNEQJFAWVHKEFUALRX");
    msg.value = 99U;

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
    msg.setTimeStamp(0.036869801070011365);
    msg.setSource(31050U);
    msg.setSourceEntity(184U);
    msg.setDestination(21486U);
    msg.setDestinationEntity(251U);
    msg.name.assign("SRUDDWYREXOJGBLNVWAHJBRZVFSXWERHVJCFDGRUMPJIEPOTFESKAVYNGMCMKEPIQXBODAKXOZIILQJSQZHQQQIPUSCUTALYCSQEJOBTZSMTHGBXXOKPNLFDPNTZWMMDOBARNEFHVXUTYJZXKOHFYBAYYDFDCYGQJ");
    msg.value = 29U;

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
    msg.setTimeStamp(0.6621956227970666);
    msg.setSource(1045U);
    msg.setSourceEntity(79U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(134U);
    msg.id = 91U;
    msg.period = 1149051942U;
    msg.duty_cycle = 68976732U;

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
    msg.setTimeStamp(0.13554660290848697);
    msg.setSource(26058U);
    msg.setSourceEntity(112U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(113U);
    msg.id = 205U;
    msg.period = 15105272U;
    msg.duty_cycle = 3951283278U;

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
    msg.setTimeStamp(0.5867515868388252);
    msg.setSource(34444U);
    msg.setSourceEntity(251U);
    msg.setDestination(32042U);
    msg.setDestinationEntity(114U);
    msg.id = 232U;
    msg.period = 195398182U;
    msg.duty_cycle = 1638478532U;

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
    msg.setTimeStamp(0.9790354200295385);
    msg.setSource(40288U);
    msg.setSourceEntity(34U);
    msg.setDestination(64953U);
    msg.setDestinationEntity(89U);
    msg.id = 140U;
    msg.period = 271304145U;
    msg.duty_cycle = 4150085067U;

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
    msg.setTimeStamp(0.6525834683595274);
    msg.setSource(881U);
    msg.setSourceEntity(165U);
    msg.setDestination(46270U);
    msg.setDestinationEntity(253U);
    msg.id = 227U;
    msg.period = 3935337509U;
    msg.duty_cycle = 3168362764U;

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
    msg.setTimeStamp(0.9312368894258078);
    msg.setSource(46016U);
    msg.setSourceEntity(40U);
    msg.setDestination(40983U);
    msg.setDestinationEntity(236U);
    msg.id = 129U;
    msg.period = 1792889584U;
    msg.duty_cycle = 3774838885U;

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
    msg.setTimeStamp(0.27837472105352146);
    msg.setSource(44275U);
    msg.setSourceEntity(193U);
    msg.setDestination(37173U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.444304792273543;
    msg.lon = 0.37232511523354805;
    msg.height = 0.33218793245669487;
    msg.x = 0.9646835636800067;
    msg.y = 0.1839600572050586;
    msg.z = 0.5462062853373946;
    msg.phi = 0.27883846020843295;
    msg.theta = 0.5225106572114682;
    msg.psi = 0.8321875755077349;
    msg.u = 0.5975144639716574;
    msg.v = 0.8660109163052386;
    msg.w = 0.2335204022291283;
    msg.vx = 0.05026270291968127;
    msg.vy = 0.7361661638095458;
    msg.vz = 0.8594599054167533;
    msg.p = 0.23683029738942474;
    msg.q = 0.01627978663312213;
    msg.r = 0.2225655586299803;
    msg.depth = 0.014488242198102519;
    msg.alt = 0.3091224471577194;

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
    msg.setTimeStamp(0.6137698601417511);
    msg.setSource(44491U);
    msg.setSourceEntity(158U);
    msg.setDestination(60736U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.8217728633563042;
    msg.lon = 0.5276152744997098;
    msg.height = 0.47215847346837914;
    msg.x = 0.12959203034272593;
    msg.y = 0.03517441307985192;
    msg.z = 0.5564351540707281;
    msg.phi = 0.3073198507771123;
    msg.theta = 0.15895312870019118;
    msg.psi = 0.22188220436471273;
    msg.u = 0.45240604590241584;
    msg.v = 0.7894766269073032;
    msg.w = 0.007721339311314024;
    msg.vx = 0.3388069850942993;
    msg.vy = 0.29884368740369216;
    msg.vz = 0.41393772350098335;
    msg.p = 0.9492851707607869;
    msg.q = 0.9939557790486845;
    msg.r = 0.8359488959431421;
    msg.depth = 0.17416290103756804;
    msg.alt = 0.012938828760385213;

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
    msg.setTimeStamp(0.4737137781520372);
    msg.setSource(38159U);
    msg.setSourceEntity(131U);
    msg.setDestination(47195U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.443167262253089;
    msg.lon = 0.712604239240772;
    msg.height = 0.10651056779609147;
    msg.x = 0.6842389832258986;
    msg.y = 0.602690626202421;
    msg.z = 0.5822653158951251;
    msg.phi = 0.5797265431800634;
    msg.theta = 0.8193514024678408;
    msg.psi = 0.6734900909079953;
    msg.u = 0.8749296999706174;
    msg.v = 0.9041993625500809;
    msg.w = 0.16342471359525224;
    msg.vx = 0.8871971350302739;
    msg.vy = 0.7449590505924644;
    msg.vz = 0.31699787961261827;
    msg.p = 0.921701976563211;
    msg.q = 0.14870545990357698;
    msg.r = 0.6256079277841101;
    msg.depth = 0.16468242613357786;
    msg.alt = 0.1510775229775022;

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
    msg.setTimeStamp(0.04150904809486433);
    msg.setSource(41834U);
    msg.setSourceEntity(183U);
    msg.setDestination(26408U);
    msg.setDestinationEntity(5U);
    msg.x = 0.393550176407242;
    msg.y = 0.8622139454045045;
    msg.z = 0.7871318306327596;

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
    msg.setTimeStamp(0.7348597989699696);
    msg.setSource(39591U);
    msg.setSourceEntity(31U);
    msg.setDestination(47252U);
    msg.setDestinationEntity(125U);
    msg.x = 0.05675022776117156;
    msg.y = 0.5768599573336373;
    msg.z = 0.4121381939017633;

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
    msg.setTimeStamp(0.07500141490590195);
    msg.setSource(673U);
    msg.setSourceEntity(179U);
    msg.setDestination(28402U);
    msg.setDestinationEntity(73U);
    msg.x = 0.12762475985975463;
    msg.y = 0.8832348556690425;
    msg.z = 0.2971221210003323;

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
    msg.setTimeStamp(0.4769562505979634);
    msg.setSource(30702U);
    msg.setSourceEntity(149U);
    msg.setDestination(61116U);
    msg.setDestinationEntity(123U);
    msg.value = 0.4928157938110631;

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
    msg.setTimeStamp(0.16267129771824018);
    msg.setSource(43586U);
    msg.setSourceEntity(245U);
    msg.setDestination(9638U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7785979555712704;

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
    msg.setTimeStamp(0.48447021230989296);
    msg.setSource(580U);
    msg.setSourceEntity(0U);
    msg.setDestination(44168U);
    msg.setDestinationEntity(81U);
    msg.value = 0.9647567108742786;

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
    msg.setTimeStamp(0.6651023591747207);
    msg.setSource(62960U);
    msg.setSourceEntity(0U);
    msg.setDestination(34705U);
    msg.setDestinationEntity(90U);
    msg.value = 0.823401894172534;

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
    msg.setTimeStamp(0.09722860876022765);
    msg.setSource(14473U);
    msg.setSourceEntity(161U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(205U);
    msg.value = 0.6965665743727022;

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
    msg.setTimeStamp(0.9245308463794997);
    msg.setSource(38033U);
    msg.setSourceEntity(3U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8832762807468555;

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
    msg.setTimeStamp(0.07142502226321135);
    msg.setSource(22414U);
    msg.setSourceEntity(216U);
    msg.setDestination(64623U);
    msg.setDestinationEntity(153U);
    msg.x = 0.4810199381932988;
    msg.y = 0.5874879622644013;
    msg.z = 0.09387674354302711;
    msg.phi = 0.5716518837745117;
    msg.theta = 0.842922070448409;
    msg.psi = 0.3621945067588277;
    msg.p = 0.0021335284267152144;
    msg.q = 0.9673659035374932;
    msg.r = 0.35933301635166737;
    msg.u = 0.8215740174408435;
    msg.v = 0.6291840676223698;
    msg.w = 0.8041095275726613;
    msg.bias_psi = 0.3629256256934932;
    msg.bias_r = 0.8413672505316734;

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
    msg.setTimeStamp(0.21778397357825408);
    msg.setSource(33995U);
    msg.setSourceEntity(7U);
    msg.setDestination(9544U);
    msg.setDestinationEntity(146U);
    msg.x = 0.8251713680986874;
    msg.y = 0.3882395913407739;
    msg.z = 0.4491608538292803;
    msg.phi = 0.7147728640726603;
    msg.theta = 0.28348788727864294;
    msg.psi = 0.005687891873490836;
    msg.p = 0.9701052480762986;
    msg.q = 0.3027994376038674;
    msg.r = 0.8421683968231864;
    msg.u = 0.3080323270852645;
    msg.v = 0.5252349927784353;
    msg.w = 0.7527752114498212;
    msg.bias_psi = 0.8826328214389465;
    msg.bias_r = 0.9553271513658443;

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
    msg.setTimeStamp(0.3109686698986964);
    msg.setSource(59204U);
    msg.setSourceEntity(168U);
    msg.setDestination(13593U);
    msg.setDestinationEntity(253U);
    msg.x = 0.7915268448274568;
    msg.y = 0.37681026193861045;
    msg.z = 0.5845672781863498;
    msg.phi = 0.5173484701260587;
    msg.theta = 0.8043217979673317;
    msg.psi = 0.21464087502146423;
    msg.p = 0.2564500033542666;
    msg.q = 0.01840067733473416;
    msg.r = 0.4587188349290471;
    msg.u = 0.8531561661886284;
    msg.v = 0.9870325088004276;
    msg.w = 0.713318228065502;
    msg.bias_psi = 0.39692926630524683;
    msg.bias_r = 0.8470589501444586;

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
    msg.setTimeStamp(0.0074612252327412865);
    msg.setSource(28185U);
    msg.setSourceEntity(105U);
    msg.setDestination(50642U);
    msg.setDestinationEntity(135U);
    msg.bias_psi = 0.612549039742019;
    msg.bias_r = 0.16764707902973452;
    msg.cog = 0.5869871692907085;
    msg.cyaw = 0.22942031178803568;
    msg.lbl_rej_level = 0.28881490608655047;
    msg.gps_rej_level = 0.9528896719800667;
    msg.custom_x = 0.3118540517848343;
    msg.custom_y = 0.8995571125067515;
    msg.custom_z = 0.5446017155380453;

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
    msg.setTimeStamp(0.6981981697762448);
    msg.setSource(44700U);
    msg.setSourceEntity(70U);
    msg.setDestination(37393U);
    msg.setDestinationEntity(213U);
    msg.bias_psi = 0.6748717377254054;
    msg.bias_r = 0.29313644888653234;
    msg.cog = 0.4488461365017782;
    msg.cyaw = 0.008931642951817254;
    msg.lbl_rej_level = 0.5772167178643857;
    msg.gps_rej_level = 0.9964799629541814;
    msg.custom_x = 0.013976237179852857;
    msg.custom_y = 0.6710390099621212;
    msg.custom_z = 0.979831026966583;

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
    msg.setTimeStamp(0.7898835324656498);
    msg.setSource(50487U);
    msg.setSourceEntity(42U);
    msg.setDestination(45810U);
    msg.setDestinationEntity(52U);
    msg.bias_psi = 0.652967927148599;
    msg.bias_r = 0.5020843610406586;
    msg.cog = 0.02333227080092659;
    msg.cyaw = 0.5042727977208108;
    msg.lbl_rej_level = 0.36468081900523874;
    msg.gps_rej_level = 0.28249429205061416;
    msg.custom_x = 0.024745343042464674;
    msg.custom_y = 0.8556211435428122;
    msg.custom_z = 0.9605762027077123;

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
    msg.setTimeStamp(0.9656383579579225);
    msg.setSource(41621U);
    msg.setSourceEntity(62U);
    msg.setDestination(49203U);
    msg.setDestinationEntity(63U);
    msg.utc_time = 0.48555269489704;
    msg.reason = 2U;

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
    msg.setTimeStamp(0.4963586144715538);
    msg.setSource(1334U);
    msg.setSourceEntity(171U);
    msg.setDestination(18012U);
    msg.setDestinationEntity(186U);
    msg.utc_time = 0.3940161984961207;
    msg.reason = 130U;

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
    msg.setTimeStamp(0.7862800360238219);
    msg.setSource(65527U);
    msg.setSourceEntity(75U);
    msg.setDestination(13362U);
    msg.setDestinationEntity(36U);
    msg.utc_time = 0.03399321574198422;
    msg.reason = 19U;

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
    msg.setTimeStamp(0.9892876769768046);
    msg.setSource(51863U);
    msg.setSourceEntity(187U);
    msg.setDestination(29846U);
    msg.setDestinationEntity(110U);
    msg.id = 48U;
    msg.range = 0.6393065108659042;
    msg.acceptance = 185U;

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
    msg.setTimeStamp(0.8550521493136432);
    msg.setSource(47109U);
    msg.setSourceEntity(83U);
    msg.setDestination(23054U);
    msg.setDestinationEntity(22U);
    msg.id = 27U;
    msg.range = 0.27000108772093034;
    msg.acceptance = 102U;

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
    msg.setTimeStamp(0.046320473689106745);
    msg.setSource(41395U);
    msg.setSourceEntity(214U);
    msg.setDestination(27002U);
    msg.setDestinationEntity(153U);
    msg.id = 70U;
    msg.range = 0.35085160714337993;
    msg.acceptance = 199U;

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
    msg.setTimeStamp(0.881177006675155);
    msg.setSource(11776U);
    msg.setSourceEntity(105U);
    msg.setDestination(40293U);
    msg.setDestinationEntity(149U);
    msg.type = 164U;
    msg.reason = 67U;
    msg.value = 0.9387314106621072;
    msg.timestep = 0.7306391717698394;

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
    msg.setTimeStamp(0.4556734731976859);
    msg.setSource(30501U);
    msg.setSourceEntity(60U);
    msg.setDestination(31454U);
    msg.setDestinationEntity(241U);
    msg.type = 9U;
    msg.reason = 192U;
    msg.value = 0.8285614322691308;
    msg.timestep = 0.44661512715529095;

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
    msg.setTimeStamp(0.37615471664364175);
    msg.setSource(13623U);
    msg.setSourceEntity(108U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(60U);
    msg.type = 201U;
    msg.reason = 197U;
    msg.value = 0.6313806139413998;
    msg.timestep = 0.6516518120427234;

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
    msg.setTimeStamp(0.7852815683356728);
    msg.setSource(11784U);
    msg.setSourceEntity(226U);
    msg.setDestination(39185U);
    msg.setDestinationEntity(250U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NDAXPITPIHBAJMNJOMDHFHUTOMTTUPWLCAATNKXARZCKTFUXIHQDPBSGSLBHXSKSKJG");
    tmp_msg_0.lat = 0.2073425797644982;
    tmp_msg_0.lon = 0.12571227862366308;
    tmp_msg_0.depth = 0.12004759162899337;
    tmp_msg_0.query_channel = 137U;
    tmp_msg_0.reply_channel = 12U;
    tmp_msg_0.transponder_delay = 151U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5083125542771375;
    msg.y = 0.4172404334947972;
    msg.var_x = 0.5939460062032742;
    msg.var_y = 0.48201576039908656;
    msg.distance = 0.48639671519016425;

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
    msg.setTimeStamp(0.9252798489537716);
    msg.setSource(17536U);
    msg.setSourceEntity(13U);
    msg.setDestination(22849U);
    msg.setDestinationEntity(225U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DYUNQRMVXZXDLBWHKSSVRLWFWKHPYREDNHJTDCSWVEHIUDFQUGYKYWRPGKLLIWZCOBXZVTSIOISFFPXJSHQOXSQDCBUTBIKWAXEQIAEZXBEOSLNHUQNUXYHOQMAGFQTEAVKWKIHYDTJLWSMXBOPCFNMAZPRCLIJMANVRPVUGUMMCGVOLPJIHZVGLWFMTTEYBBJNCUAIQJMTLJOBDYYPFCTENCRSVTAXFNODCBEGPGYZDPAFGNKOKUJRZRQRJA");
    tmp_msg_0.lat = 0.36916884784028825;
    tmp_msg_0.lon = 0.8097256324959098;
    tmp_msg_0.depth = 0.23772952843422124;
    tmp_msg_0.query_channel = 142U;
    tmp_msg_0.reply_channel = 92U;
    tmp_msg_0.transponder_delay = 236U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8070790219269895;
    msg.y = 0.7349055752806349;
    msg.var_x = 0.2997736421173638;
    msg.var_y = 0.7014626887571166;
    msg.distance = 0.19305383779321217;

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
    msg.setTimeStamp(0.053066593826301856);
    msg.setSource(36555U);
    msg.setSourceEntity(186U);
    msg.setDestination(7198U);
    msg.setDestinationEntity(35U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HXKLEMAAPORNIHK");
    tmp_msg_0.lat = 0.8109916557053592;
    tmp_msg_0.lon = 0.09440114420635048;
    tmp_msg_0.depth = 0.5512007066685015;
    tmp_msg_0.query_channel = 73U;
    tmp_msg_0.reply_channel = 195U;
    tmp_msg_0.transponder_delay = 75U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4582858228489015;
    msg.y = 0.7735325973215572;
    msg.var_x = 0.9984437741157142;
    msg.var_y = 0.01481912186736789;
    msg.distance = 0.001424462457186193;

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
    msg.setTimeStamp(0.4637848095376388);
    msg.setSource(48210U);
    msg.setSourceEntity(51U);
    msg.setDestination(1183U);
    msg.setDestinationEntity(39U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.4845857154727333);
    msg.setSource(16822U);
    msg.setSourceEntity(231U);
    msg.setDestination(31979U);
    msg.setDestinationEntity(204U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.38512727540326475);
    msg.setSource(56606U);
    msg.setSourceEntity(245U);
    msg.setDestination(21372U);
    msg.setDestinationEntity(123U);
    msg.state = 178U;

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
    msg.setTimeStamp(0.9519407300344692);
    msg.setSource(7988U);
    msg.setSourceEntity(124U);
    msg.setDestination(13799U);
    msg.setDestinationEntity(86U);
    msg.x = 0.7010601022425258;
    msg.y = 0.5168730140441524;
    msg.z = 0.31651876026703896;

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
    msg.setTimeStamp(0.928229634063086);
    msg.setSource(21641U);
    msg.setSourceEntity(84U);
    msg.setDestination(39223U);
    msg.setDestinationEntity(157U);
    msg.x = 0.9306979889147785;
    msg.y = 0.6549303461098867;
    msg.z = 0.9580526041048498;

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
    msg.setTimeStamp(0.924271871732779);
    msg.setSource(27746U);
    msg.setSourceEntity(60U);
    msg.setDestination(4086U);
    msg.setDestinationEntity(79U);
    msg.x = 0.2788583986545726;
    msg.y = 0.16864143670034104;
    msg.z = 0.9178920927853678;

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
    msg.setTimeStamp(0.2686159871552515);
    msg.setSource(51830U);
    msg.setSourceEntity(52U);
    msg.setDestination(13227U);
    msg.setDestinationEntity(78U);
    msg.va = 0.2913788780347677;
    msg.aoa = 0.5271857086847358;
    msg.ssa = 0.6574653808524932;

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
    msg.setTimeStamp(0.48514209571688893);
    msg.setSource(64274U);
    msg.setSourceEntity(63U);
    msg.setDestination(35147U);
    msg.setDestinationEntity(211U);
    msg.va = 0.5676237446817393;
    msg.aoa = 0.8105315192104601;
    msg.ssa = 0.010673600944943074;

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
    msg.setTimeStamp(0.6110647243153442);
    msg.setSource(32450U);
    msg.setSourceEntity(85U);
    msg.setDestination(36758U);
    msg.setDestinationEntity(1U);
    msg.va = 0.6138940289885514;
    msg.aoa = 0.8600474614256118;
    msg.ssa = 0.03237848692426759;

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
    msg.setTimeStamp(0.9102094503406628);
    msg.setSource(18549U);
    msg.setSourceEntity(188U);
    msg.setDestination(110U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8915687368299069;

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
    msg.setTimeStamp(0.7547113280688975);
    msg.setSource(21520U);
    msg.setSourceEntity(153U);
    msg.setDestination(24221U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7034326420232829;

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
    msg.setTimeStamp(0.9243701128900329);
    msg.setSource(45398U);
    msg.setSourceEntity(152U);
    msg.setDestination(47663U);
    msg.setDestinationEntity(8U);
    msg.value = 0.40897146347294755;

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
    msg.setTimeStamp(0.49831607041235104);
    msg.setSource(64457U);
    msg.setSourceEntity(113U);
    msg.setDestination(49417U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8353705592527108;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.5722467769146377);
    msg.setSource(62313U);
    msg.setSourceEntity(66U);
    msg.setDestination(46761U);
    msg.setDestinationEntity(253U);
    msg.value = 0.9883662851642632;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.27849175252472924);
    msg.setSource(21810U);
    msg.setSourceEntity(88U);
    msg.setDestination(11717U);
    msg.setDestinationEntity(81U);
    msg.value = 0.2563418422628998;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.5827275725078244);
    msg.setSource(19239U);
    msg.setSourceEntity(95U);
    msg.setDestination(4434U);
    msg.setDestinationEntity(6U);
    msg.value = 0.8627693403870529;
    msg.speed_units = 5U;

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
    msg.setTimeStamp(0.4062834851334529);
    msg.setSource(44562U);
    msg.setSourceEntity(183U);
    msg.setDestination(42061U);
    msg.setDestinationEntity(150U);
    msg.value = 0.24343303807049776;
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
    msg.setTimeStamp(0.6225511382722629);
    msg.setSource(59024U);
    msg.setSourceEntity(58U);
    msg.setDestination(17788U);
    msg.setDestinationEntity(184U);
    msg.value = 0.5651782156208274;
    msg.speed_units = 149U;

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
    msg.setTimeStamp(0.26350902674516774);
    msg.setSource(17600U);
    msg.setSourceEntity(135U);
    msg.setDestination(61155U);
    msg.setDestinationEntity(234U);
    msg.value = 0.10856646445243023;

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
    msg.setTimeStamp(0.047352904089372094);
    msg.setSource(3391U);
    msg.setSourceEntity(135U);
    msg.setDestination(45548U);
    msg.setDestinationEntity(194U);
    msg.value = 0.06157107583163901;

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
    msg.setTimeStamp(0.5327972417879195);
    msg.setSource(34887U);
    msg.setSourceEntity(129U);
    msg.setDestination(23594U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8769051485964454;

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
    msg.setTimeStamp(0.6671971034650205);
    msg.setSource(57991U);
    msg.setSourceEntity(158U);
    msg.setDestination(2222U);
    msg.setDestinationEntity(218U);
    msg.value = 0.5112038214581749;

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
    msg.setTimeStamp(0.9990871594169549);
    msg.setSource(45717U);
    msg.setSourceEntity(242U);
    msg.setDestination(60909U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5189861776495355;

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
    msg.setTimeStamp(0.6866393477269076);
    msg.setSource(21557U);
    msg.setSourceEntity(215U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(174U);
    msg.value = 0.24643697329995717;

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
    msg.setTimeStamp(0.6898921088839562);
    msg.setSource(41307U);
    msg.setSourceEntity(2U);
    msg.setDestination(33734U);
    msg.setDestinationEntity(190U);
    msg.value = 0.4761056084252372;

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
    msg.setTimeStamp(0.6948375719823923);
    msg.setSource(52277U);
    msg.setSourceEntity(75U);
    msg.setDestination(25108U);
    msg.setDestinationEntity(58U);
    msg.value = 0.07096398694367789;

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
    msg.setTimeStamp(0.33767851233296364);
    msg.setSource(54171U);
    msg.setSourceEntity(51U);
    msg.setDestination(1629U);
    msg.setDestinationEntity(46U);
    msg.value = 0.44040795979533187;

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
    msg.setTimeStamp(0.5029211541321558);
    msg.setSource(14213U);
    msg.setSourceEntity(8U);
    msg.setDestination(31349U);
    msg.setDestinationEntity(49U);
    msg.path_ref = 1246313014U;
    msg.start_lat = 0.9444206581686019;
    msg.start_lon = 0.7179324678192154;
    msg.start_z = 0.6531787197774802;
    msg.start_z_units = 244U;
    msg.end_lat = 0.21260743620719325;
    msg.end_lon = 0.738978932672399;
    msg.end_z = 0.3710815954892649;
    msg.end_z_units = 183U;
    msg.speed = 0.2123050912118416;
    msg.speed_units = 65U;
    msg.lradius = 0.2612757995062419;
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
    msg.setTimeStamp(0.5941828765305138);
    msg.setSource(1698U);
    msg.setSourceEntity(22U);
    msg.setDestination(44417U);
    msg.setDestinationEntity(232U);
    msg.path_ref = 2182171276U;
    msg.start_lat = 0.4157680164575076;
    msg.start_lon = 0.7160300622411587;
    msg.start_z = 0.11483294015347412;
    msg.start_z_units = 236U;
    msg.end_lat = 0.8631596955019527;
    msg.end_lon = 0.49758291581783665;
    msg.end_z = 0.8419610003388868;
    msg.end_z_units = 56U;
    msg.speed = 0.7696499699915264;
    msg.speed_units = 69U;
    msg.lradius = 0.8239162709531698;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.3939702646512142);
    msg.setSource(56475U);
    msg.setSourceEntity(235U);
    msg.setDestination(8475U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 4131936729U;
    msg.start_lat = 0.12970044771894584;
    msg.start_lon = 0.8986095573975479;
    msg.start_z = 0.7168301410394121;
    msg.start_z_units = 76U;
    msg.end_lat = 0.30184491904863775;
    msg.end_lon = 0.29236177311813827;
    msg.end_z = 0.2507915445529417;
    msg.end_z_units = 185U;
    msg.speed = 0.34659487439151004;
    msg.speed_units = 50U;
    msg.lradius = 0.9567397787509827;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.3908688610808203);
    msg.setSource(21742U);
    msg.setSourceEntity(247U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(109U);
    msg.x = 0.7825969105960427;
    msg.y = 0.11211027232308746;
    msg.z = 0.48689527936435795;
    msg.k = 0.5605513449732934;
    msg.m = 0.6297835212942323;
    msg.n = 0.9083544933681721;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.7294391349468629);
    msg.setSource(48126U);
    msg.setSourceEntity(8U);
    msg.setDestination(60069U);
    msg.setDestinationEntity(133U);
    msg.x = 0.3852563280596355;
    msg.y = 0.8622231989862673;
    msg.z = 0.04123717027382845;
    msg.k = 0.009091879752533116;
    msg.m = 0.8957401492230737;
    msg.n = 0.9113176835348502;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.902803134373594);
    msg.setSource(9564U);
    msg.setSourceEntity(7U);
    msg.setDestination(60463U);
    msg.setDestinationEntity(211U);
    msg.x = 0.38338596806291547;
    msg.y = 0.48650125511348297;
    msg.z = 0.3817294727960403;
    msg.k = 0.4398432412216269;
    msg.m = 0.8979063364870211;
    msg.n = 0.7326127307878875;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.9214161464923221);
    msg.setSource(6288U);
    msg.setSourceEntity(60U);
    msg.setDestination(37228U);
    msg.setDestinationEntity(225U);
    msg.value = 0.024315920056458773;

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
    msg.setTimeStamp(0.9793373641182348);
    msg.setSource(9947U);
    msg.setSourceEntity(226U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(27U);
    msg.value = 0.20095565945149796;

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
    msg.setTimeStamp(0.36862794689532463);
    msg.setSource(37088U);
    msg.setSourceEntity(29U);
    msg.setDestination(37637U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7193483437696806;

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
    msg.setTimeStamp(0.3198012756458595);
    msg.setSource(9460U);
    msg.setSourceEntity(30U);
    msg.setDestination(26593U);
    msg.setDestinationEntity(43U);
    msg.u = 0.6727387355612326;
    msg.v = 0.6789013225072466;
    msg.w = 0.06849297167760482;
    msg.p = 0.08372049389372693;
    msg.q = 0.4820613083739349;
    msg.r = 0.8910731258919709;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.23424100097581135);
    msg.setSource(46244U);
    msg.setSourceEntity(139U);
    msg.setDestination(1218U);
    msg.setDestinationEntity(25U);
    msg.u = 0.5683719185673626;
    msg.v = 0.7976885080929484;
    msg.w = 0.2582976319084538;
    msg.p = 0.3259852757888738;
    msg.q = 0.3587681520786058;
    msg.r = 0.8639660294691588;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.2812098352823025);
    msg.setSource(34942U);
    msg.setSourceEntity(202U);
    msg.setDestination(20075U);
    msg.setDestinationEntity(204U);
    msg.u = 0.8786121499018765;
    msg.v = 0.7632151710224365;
    msg.w = 0.07665780803013211;
    msg.p = 0.021318810421069645;
    msg.q = 0.8671285857600537;
    msg.r = 0.08385208796331967;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.8888723993247541);
    msg.setSource(59934U);
    msg.setSourceEntity(28U);
    msg.setDestination(59492U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 1554409642U;
    msg.start_lat = 0.46411081445154;
    msg.start_lon = 0.8293760564401585;
    msg.start_z = 0.7760895019702466;
    msg.start_z_units = 16U;
    msg.end_lat = 0.2303889398732184;
    msg.end_lon = 0.8388074157310167;
    msg.end_z = 0.0036987971972866074;
    msg.end_z_units = 245U;
    msg.lradius = 0.9949550347240403;
    msg.flags = 120U;
    msg.x = 0.3784931583507877;
    msg.y = 0.7479434814959005;
    msg.z = 0.7713434088438931;
    msg.vx = 0.027912565684757973;
    msg.vy = 0.22275327151270574;
    msg.vz = 0.652864822839208;
    msg.course_error = 0.8130149354248439;
    msg.eta = 7534U;

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
    msg.setTimeStamp(0.2048173502092);
    msg.setSource(6094U);
    msg.setSourceEntity(72U);
    msg.setDestination(4543U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 1553814546U;
    msg.start_lat = 0.8750459580085137;
    msg.start_lon = 0.963741590436383;
    msg.start_z = 0.7008306159249569;
    msg.start_z_units = 166U;
    msg.end_lat = 0.8110255556938719;
    msg.end_lon = 0.9948453114152503;
    msg.end_z = 0.7810533172701493;
    msg.end_z_units = 56U;
    msg.lradius = 0.6684809849293736;
    msg.flags = 4U;
    msg.x = 0.32259430966042146;
    msg.y = 0.5302317845370003;
    msg.z = 0.7541212695171148;
    msg.vx = 0.7591012655786504;
    msg.vy = 0.9958563719067497;
    msg.vz = 0.12730856818069147;
    msg.course_error = 0.2717742935951514;
    msg.eta = 35836U;

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
    msg.setTimeStamp(0.09161162410650658);
    msg.setSource(29587U);
    msg.setSourceEntity(49U);
    msg.setDestination(47274U);
    msg.setDestinationEntity(157U);
    msg.path_ref = 1545991183U;
    msg.start_lat = 0.2728456203146622;
    msg.start_lon = 0.948026156010361;
    msg.start_z = 0.39970048648472567;
    msg.start_z_units = 100U;
    msg.end_lat = 0.27444637306887765;
    msg.end_lon = 0.8125781934490687;
    msg.end_z = 0.6436117511352328;
    msg.end_z_units = 199U;
    msg.lradius = 0.6498336046366527;
    msg.flags = 71U;
    msg.x = 0.4617639547019927;
    msg.y = 0.20332300623888;
    msg.z = 0.19762377244555018;
    msg.vx = 0.2980112726064321;
    msg.vy = 0.2721349200133111;
    msg.vz = 0.9308029813717188;
    msg.course_error = 0.3815152362747387;
    msg.eta = 51866U;

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
    msg.setTimeStamp(0.22370915126849655);
    msg.setSource(21289U);
    msg.setSourceEntity(102U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(217U);
    msg.k = 0.5754092137030455;
    msg.m = 0.209304036405477;
    msg.n = 0.05557924494426658;

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
    msg.setTimeStamp(0.10588874449242147);
    msg.setSource(62980U);
    msg.setSourceEntity(26U);
    msg.setDestination(18952U);
    msg.setDestinationEntity(3U);
    msg.k = 0.9730816629305832;
    msg.m = 0.9542434129044716;
    msg.n = 0.19252004120240784;

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
    msg.setTimeStamp(0.030031423083555775);
    msg.setSource(29807U);
    msg.setSourceEntity(101U);
    msg.setDestination(47417U);
    msg.setDestinationEntity(32U);
    msg.k = 0.18446365616443194;
    msg.m = 0.3118135194770708;
    msg.n = 0.9748898763064783;

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
    msg.setTimeStamp(0.9655161568629936);
    msg.setSource(18218U);
    msg.setSourceEntity(19U);
    msg.setDestination(23383U);
    msg.setDestinationEntity(59U);
    msg.p = 0.3929342606864239;
    msg.i = 0.4252355631491004;
    msg.d = 0.9506354863207367;
    msg.a = 0.6383537716423979;

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
    msg.setTimeStamp(0.3242195714292484);
    msg.setSource(38812U);
    msg.setSourceEntity(196U);
    msg.setDestination(10996U);
    msg.setDestinationEntity(95U);
    msg.p = 0.549306352803036;
    msg.i = 0.8258880354276322;
    msg.d = 0.7691713465135857;
    msg.a = 0.8558618009001189;

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
    msg.setTimeStamp(0.5960817929897495);
    msg.setSource(16606U);
    msg.setSourceEntity(160U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(34U);
    msg.p = 0.2622214997434361;
    msg.i = 0.08846291952798113;
    msg.d = 0.7177787820671633;
    msg.a = 0.9348842606131702;

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
    msg.setTimeStamp(0.4127676861897651);
    msg.setSource(46052U);
    msg.setSourceEntity(24U);
    msg.setDestination(3916U);
    msg.setDestinationEntity(74U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.15178468893584574);
    msg.setSource(12520U);
    msg.setSourceEntity(163U);
    msg.setDestination(1109U);
    msg.setDestinationEntity(98U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.18705463252717036);
    msg.setSource(9705U);
    msg.setSourceEntity(130U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(150U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.7937256760396796);
    msg.setSource(15151U);
    msg.setSourceEntity(138U);
    msg.setDestination(50135U);
    msg.setDestinationEntity(25U);
    msg.x = 0.30274217959706307;
    msg.y = 0.17382552882976499;
    msg.z = 0.4892010425212229;
    msg.vx = 0.29816820795936483;
    msg.vy = 0.14243393915184444;
    msg.vz = 0.21173940974252237;
    msg.ax = 0.293292969502729;
    msg.ay = 0.6361475225311027;
    msg.az = 0.10897821678534192;
    msg.flags = 14973U;

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
    msg.setTimeStamp(0.13489027211672622);
    msg.setSource(24343U);
    msg.setSourceEntity(142U);
    msg.setDestination(8201U);
    msg.setDestinationEntity(171U);
    msg.x = 0.7411593489641182;
    msg.y = 0.9934195466608633;
    msg.z = 0.7969206400336851;
    msg.vx = 0.9717778894495286;
    msg.vy = 0.9268241322989945;
    msg.vz = 0.9339716681020763;
    msg.ax = 0.6031126159778543;
    msg.ay = 0.3004975526163175;
    msg.az = 0.013242522152058012;
    msg.flags = 4292U;

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
    msg.setTimeStamp(0.02360225627231649);
    msg.setSource(34193U);
    msg.setSourceEntity(12U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(186U);
    msg.x = 0.005913644639999882;
    msg.y = 0.2424567716183027;
    msg.z = 0.8476268372089464;
    msg.vx = 0.440237565064342;
    msg.vy = 0.46380041680565276;
    msg.vz = 0.8056143416403018;
    msg.ax = 0.24167194647496038;
    msg.ay = 0.8131391442206616;
    msg.az = 0.15337997412077375;
    msg.flags = 34923U;

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
    msg.setTimeStamp(0.3788590864102127);
    msg.setSource(15426U);
    msg.setSourceEntity(224U);
    msg.setDestination(58385U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6160781909938102;

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
    msg.setTimeStamp(0.46428361200114565);
    msg.setSource(23371U);
    msg.setSourceEntity(102U);
    msg.setDestination(29579U);
    msg.setDestinationEntity(96U);
    msg.value = 0.9978241690785115;

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
    msg.setTimeStamp(0.39014367217529966);
    msg.setSource(50414U);
    msg.setSourceEntity(223U);
    msg.setDestination(63676U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9799870869129798;

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
    msg.setTimeStamp(0.5803672870955928);
    msg.setSource(4728U);
    msg.setSourceEntity(151U);
    msg.setDestination(40907U);
    msg.setDestinationEntity(231U);
    msg.timeout = 4767U;
    msg.lat = 0.48405174921403404;
    msg.lon = 0.8815282730939953;
    msg.z = 0.3211791311065125;
    msg.z_units = 227U;
    msg.speed = 0.5074536472582988;
    msg.speed_units = 14U;
    msg.roll = 0.4278065747999805;
    msg.pitch = 0.24613318083108693;
    msg.yaw = 0.44543984995671093;
    msg.custom.assign("SUAQSGVIEETTZWAQVTFEEMAIIRHKHMGDYJOYNAUUNDRPZQVRVTLLBJOCOUQZWAEGJDKQVWIRMNJSRJCJABPBEXPSHWLBENOBVPWYXGDOLNPFXAYDSEFRRXHTAATUJXFNPTBVSCWGVMUKRHCNZFVCDSCPACIXOIKYLB");

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
    msg.setTimeStamp(0.4321396863892183);
    msg.setSource(12870U);
    msg.setSourceEntity(32U);
    msg.setDestination(31434U);
    msg.setDestinationEntity(243U);
    msg.timeout = 4321U;
    msg.lat = 0.3746300528160803;
    msg.lon = 0.7474273883493341;
    msg.z = 0.44477539855816484;
    msg.z_units = 180U;
    msg.speed = 0.9125828295127412;
    msg.speed_units = 75U;
    msg.roll = 0.0467517001933877;
    msg.pitch = 0.39769548688770906;
    msg.yaw = 0.5112893675780738;
    msg.custom.assign("DAIDNNKQWSUFNHTQJJBKGZTKCGBWRYJXXQOLWJTKCQPAOVMAHXMDPIKFYNYHBLFRFYTRGRBPALEWPEHSXDADONBYHXQQVZUUHLQAPVSIBUICGEPJNWLISFSHGAYCOMWXJFBVZEZXGEPROUERNPTCDUQ");

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
    msg.setTimeStamp(0.6721975311734897);
    msg.setSource(4783U);
    msg.setSourceEntity(88U);
    msg.setDestination(34860U);
    msg.setDestinationEntity(152U);
    msg.timeout = 2303U;
    msg.lat = 0.7877748049120353;
    msg.lon = 0.07417309400873706;
    msg.z = 0.45505576809361503;
    msg.z_units = 53U;
    msg.speed = 0.6752534188356121;
    msg.speed_units = 143U;
    msg.roll = 0.22467614981335604;
    msg.pitch = 0.05954027000231987;
    msg.yaw = 0.2263043545429373;
    msg.custom.assign("FBZLGXIOSLQPISULVZAUUCSNJAYGNEMYOZSKNTXBERFVZDRWJBYOQOXKHXHTQIZGTFDPRHWVXEMIATWCJPQHOFMIQLKKVAISRLCMRENZMQTUPVMIHDFJUDGPRFKZKCKVGHNGTNBDNOYTQLTTQSGBXAKLAHFYAKVHPWJOJYJUYVDAICUIEFDYMSWOXCWSRDJZWPTCMYSJFNHWDAP");

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
    msg.setTimeStamp(0.7678258595091287);
    msg.setSource(15685U);
    msg.setSourceEntity(135U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(31U);
    msg.timeout = 4150U;
    msg.lat = 0.3396664661631277;
    msg.lon = 0.6890719590342168;
    msg.z = 0.5600447729691076;
    msg.z_units = 209U;
    msg.speed = 0.3107894222602262;
    msg.speed_units = 191U;
    msg.duration = 22412U;
    msg.radius = 0.4799611099312341;
    msg.flags = 238U;
    msg.custom.assign("QNJQRILKSZDMNDJTKNCXQFTWYWAFKXSEKHBWGMDJDLVSDGCBGYOOTUYHGURFIHQXTBGKOQPVAAODKZXHWCTDFYIMHUJJWUPLAQKXTH");

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
    msg.setTimeStamp(0.3660878506905173);
    msg.setSource(26019U);
    msg.setSourceEntity(187U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(24U);
    msg.timeout = 37182U;
    msg.lat = 0.4585234326342441;
    msg.lon = 0.3058076038191321;
    msg.z = 0.22399082162007677;
    msg.z_units = 202U;
    msg.speed = 0.606528808139595;
    msg.speed_units = 154U;
    msg.duration = 60153U;
    msg.radius = 0.6605014102966834;
    msg.flags = 189U;
    msg.custom.assign("AJGSDPAXCLKACDLYZKUCGFDLATMPSSBUMOTTYCLGDLGXBRVFSAPPNEKJMZNKZUXCDTUNQXVQFLKZTHTWVEWPGOYRTIFOFGUUGBPEBOKEYQWXOTSSANZRIWZQDEJEEMMIQZJKRFMIQGNSZFZCHDJULZTFFMJEUB");

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
    msg.setTimeStamp(0.9039181404599531);
    msg.setSource(14641U);
    msg.setSourceEntity(91U);
    msg.setDestination(21892U);
    msg.setDestinationEntity(125U);
    msg.timeout = 34600U;
    msg.lat = 0.5447369369468209;
    msg.lon = 0.2298458097369479;
    msg.z = 0.9054922336614519;
    msg.z_units = 103U;
    msg.speed = 0.7285743163510013;
    msg.speed_units = 80U;
    msg.duration = 53815U;
    msg.radius = 0.8023716174424431;
    msg.flags = 80U;
    msg.custom.assign("GSMQEGCOTWLVHWGPVLCHTCNJEDIFUBAJEYRAVUUBEQKRYIZUXHYQMCORVKKFLGGNIKAPOMYAWTKEDBWBQ");

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
    msg.setTimeStamp(0.00012410240055305);
    msg.setSource(65185U);
    msg.setSourceEntity(135U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(246U);
    msg.custom.assign("ODKJXCSTVCEXRYTEWWNRJOWFLNPBYOYTMUDWLJINYQAWSQMCZYQUAGHGEH");

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
    msg.setTimeStamp(0.5315605169435863);
    msg.setSource(31484U);
    msg.setSourceEntity(52U);
    msg.setDestination(2281U);
    msg.setDestinationEntity(32U);
    msg.custom.assign("CUYYLNTWJODYSTWOZLBRFERYAUTCQJNHDNYRCDEZUOBWFVNREOSKZMNUHDWHJUKBHBXBFQNFRXIDOASIJQSFPFWAVTAEXJIIPDSZZZMPBPHKMXLTYHUACTMVMAUUEEKIYNGBPHOGWIUPYOXLJTQGSEEVEWMXFTGGXOQQOTGVAHMDQCQCZCWPSSCQLRJBNWFCGYGJIQPBSGPDDFVRZZRMJMRVRFANVK");

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
    msg.setTimeStamp(0.6616737991268767);
    msg.setSource(60935U);
    msg.setSourceEntity(203U);
    msg.setDestination(13886U);
    msg.setDestinationEntity(161U);
    msg.custom.assign("XDCONIOOLEWMRTBJORAKVZEHNRXJPDNPPDTXKCFXKYBMSZHWROFNOGPZRIMBFQTSJNWSXMKVXRSMBFKMUTKGIWQHGAIDVSPEENEUTZCLZGBVHJZCYAATILYTDVLGRQJAWQUSNZLEVNGBIJJQFJPWHVORATYAACLKHGHKYWFXDYQUHFMQKAIPXQJYLVOWDHQBVSNKLTEOGUCSXPWYPDOZCEQPMXIDYJBCDEWHLIUYBCRVRGAZSBZNU");

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
    msg.setTimeStamp(0.3578866473228197);
    msg.setSource(23578U);
    msg.setSourceEntity(126U);
    msg.setDestination(6309U);
    msg.setDestinationEntity(46U);
    msg.timeout = 50942U;
    msg.lat = 0.7162262650114293;
    msg.lon = 0.8381088759546038;
    msg.z = 0.5608313313489176;
    msg.z_units = 83U;
    msg.duration = 17709U;
    msg.speed = 0.18162066852222358;
    msg.speed_units = 213U;
    msg.type = 24U;
    msg.radius = 0.19096748599500535;
    msg.length = 0.7145853421930848;
    msg.bearing = 0.8178279318185576;
    msg.direction = 103U;
    msg.custom.assign("ZQDXNNFNTJXCVTDMCUCSOTGCIOGSSTSQMHBVBLSBWNGMLQ");

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
    msg.setTimeStamp(0.4174181906824129);
    msg.setSource(43068U);
    msg.setSourceEntity(100U);
    msg.setDestination(8995U);
    msg.setDestinationEntity(108U);
    msg.timeout = 39911U;
    msg.lat = 0.783301979856665;
    msg.lon = 0.8255459744734849;
    msg.z = 0.5158545257169446;
    msg.z_units = 202U;
    msg.duration = 51938U;
    msg.speed = 0.2862308270986169;
    msg.speed_units = 9U;
    msg.type = 204U;
    msg.radius = 0.3919033294891928;
    msg.length = 0.5957512089734824;
    msg.bearing = 0.5035168423387368;
    msg.direction = 28U;
    msg.custom.assign("LKDYLJYCOGOKDSLNDWVTMZGKEEIEFETHGTBZXBJHVYCYGHISGPOALXTUTCVOIMXJIOMZLNRWMMYXRGEAFNUEKLMDPYTXCMGUJSFMAGENFDFOQRWPQX");

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
    msg.setTimeStamp(0.18713577921410718);
    msg.setSource(9163U);
    msg.setSourceEntity(155U);
    msg.setDestination(54862U);
    msg.setDestinationEntity(120U);
    msg.timeout = 32183U;
    msg.lat = 0.5124142759026716;
    msg.lon = 0.6336458858807196;
    msg.z = 0.5738396115829005;
    msg.z_units = 204U;
    msg.duration = 62883U;
    msg.speed = 0.09456281287313206;
    msg.speed_units = 239U;
    msg.type = 17U;
    msg.radius = 0.2986909147807232;
    msg.length = 0.7531100518330217;
    msg.bearing = 0.47526414927066074;
    msg.direction = 209U;
    msg.custom.assign("BKRNBFJHROLWFJLYZOZKSRJOQKFPAWABZM");

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
    msg.setTimeStamp(0.964655619354303);
    msg.setSource(20471U);
    msg.setSourceEntity(70U);
    msg.setDestination(20959U);
    msg.setDestinationEntity(150U);
    msg.duration = 60857U;
    msg.custom.assign("OMACVRUJGSNFIPATITYBJBQAYYGVFECJTBLMLEYR");

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
    msg.setTimeStamp(0.35877800794147297);
    msg.setSource(37518U);
    msg.setSourceEntity(7U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(19U);
    msg.duration = 39228U;
    msg.custom.assign("IFQLCMZFCHHSJTSOVLXDZUVWWBIWBKWILAKALVDYSRCQOLXDOYTZDWM");

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
    msg.setTimeStamp(0.679380424769248);
    msg.setSource(37656U);
    msg.setSourceEntity(243U);
    msg.setDestination(536U);
    msg.setDestinationEntity(22U);
    msg.duration = 37797U;
    msg.custom.assign("YMRGBQUFUQYPSAESIKAFWZUITKBAMIMOASQZOBKJEFMLWHLSXNTDDBGSCNDICWKZQCTGGYOIJGONXKUIMKUNTFTGRSMATZJHIOQDNRAJWDGSMXAWPCVZFMVHRPTTKTYWEXNCXPHANBDTHI");

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
    msg.setTimeStamp(0.4052805900154616);
    msg.setSource(15782U);
    msg.setSourceEntity(238U);
    msg.setDestination(20912U);
    msg.setDestinationEntity(64U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.9182473514286171;
    msg.control.set(tmp_msg_0);
    msg.duration = 15840U;
    msg.custom.assign("QJPNVSYGAKOHPXEMNLDVJCTBEPLAQFDFIJALFGWERSSOLUSNQQBSLFTAXNVWNIZZQCBIIFCTZPHBDKLVBKXKQFVYPDYOPUAIURNHHHQMYYSZVLIHMWCQOYSWJIWJEDAJMGDXHBXPRJFUESTURJVHUKOUNMKSKZHWNLPQOIEUGZOBENQOYVL");

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
    msg.setTimeStamp(0.5532498632312199);
    msg.setSource(61448U);
    msg.setSourceEntity(187U);
    msg.setDestination(14454U);
    msg.setDestinationEntity(42U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.07128433368151676;
    msg.control.set(tmp_msg_0);
    msg.duration = 28240U;
    msg.custom.assign("AUDSVUUVNGICCKEH");

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
    msg.setTimeStamp(0.4215385038552031);
    msg.setSource(33211U);
    msg.setSourceEntity(170U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(117U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3082670060U;
    tmp_msg_0.start_lat = 0.04949786548325785;
    tmp_msg_0.start_lon = 0.4447437191235021;
    tmp_msg_0.start_z = 0.8974826439500883;
    tmp_msg_0.start_z_units = 124U;
    tmp_msg_0.end_lat = 0.5843489771878775;
    tmp_msg_0.end_lon = 0.9109397287766193;
    tmp_msg_0.end_z = 0.6740034659044886;
    tmp_msg_0.end_z_units = 169U;
    tmp_msg_0.speed = 0.15581559455667648;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.lradius = 0.3346601113661264;
    tmp_msg_0.flags = 236U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1606U;
    msg.custom.assign("UOPWNMRAIVGPUVYHZEBBQNFXBUPCXTAKMJHOHGXGWQAZRLWVHLGDATTIGM");

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
    msg.setTimeStamp(0.832323458672914);
    msg.setSource(41297U);
    msg.setSourceEntity(136U);
    msg.setDestination(58548U);
    msg.setDestinationEntity(91U);
    msg.timeout = 4026U;
    msg.lat = 0.9165060161292455;
    msg.lon = 0.07267603856753402;
    msg.z = 0.7746041252641339;
    msg.z_units = 227U;
    msg.speed = 0.8878508902249441;
    msg.speed_units = 202U;
    msg.bearing = 0.3005620059128593;
    msg.cross_angle = 0.4211534972566766;
    msg.width = 0.6959445322031208;
    msg.length = 0.46841813044034797;
    msg.hstep = 0.2088690685264808;
    msg.coff = 74U;
    msg.alternation = 179U;
    msg.flags = 243U;
    msg.custom.assign("RELUUZWPQGMPEAFDZEGYUZXAFNCIVEIPKQSMWXCBYEAPHVRTFKRJCUGDOVHBIXZPVKWCYXUKSXVNCLTKFDNEDUXAORMRLRFEHOJVPOHFNCRUQQTLEVLFIGTNHLIZMLORKJEITSGDYNOCDGBSQKTJNSPITQGOATBFYZBXJLSMIJPWVSBGNDHWCYVPPOZYWLHXMNYWYIUWMABEOKRLDAZACQKJSZTUYJFMSGSKNZBQRMFJXUCAWX");

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
    msg.setTimeStamp(0.36868253870249035);
    msg.setSource(52373U);
    msg.setSourceEntity(40U);
    msg.setDestination(40076U);
    msg.setDestinationEntity(227U);
    msg.timeout = 58299U;
    msg.lat = 0.8408647870450493;
    msg.lon = 0.9855906886486079;
    msg.z = 0.6785203705932125;
    msg.z_units = 169U;
    msg.speed = 0.7864932703164126;
    msg.speed_units = 126U;
    msg.bearing = 0.33971830722457097;
    msg.cross_angle = 0.21323113114235426;
    msg.width = 0.5989697817677;
    msg.length = 0.9060119975677355;
    msg.hstep = 0.890146437356596;
    msg.coff = 134U;
    msg.alternation = 249U;
    msg.flags = 231U;
    msg.custom.assign("LKINRVJKVANUZLQVDPESNGMHQOJKDJYCAFHQOBZQQIOWQCBEZYUAAERJZQO");

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
    msg.setTimeStamp(0.8295239874372383);
    msg.setSource(49390U);
    msg.setSourceEntity(205U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(93U);
    msg.timeout = 42446U;
    msg.lat = 0.9887624196744699;
    msg.lon = 0.9113076243885987;
    msg.z = 0.3646993273233694;
    msg.z_units = 65U;
    msg.speed = 0.20746583473558677;
    msg.speed_units = 246U;
    msg.bearing = 0.8699111665332796;
    msg.cross_angle = 0.804839595639716;
    msg.width = 0.7131760959172135;
    msg.length = 0.23038861467275407;
    msg.hstep = 0.24010893953025858;
    msg.coff = 254U;
    msg.alternation = 82U;
    msg.flags = 19U;
    msg.custom.assign("VLBWGPAVKITXSTZONGXUIZORNPWKLYVVBMSACBRKPRRIXDKQVJSGLGLTDRFFTGQMDBVUWBCFWFTQMYKHLNPBUUQTUURADFAJQTJXMLEEUVFVPFDCKHBUIDLWYSMHWZGZOHNXETYGUOJOWAAPTCNQJECDDJFQPXEZVAZNPHRXMCRGDIQBSMSYJJKDQBNTVYOHOAKPZHIMOAIRKWKW");

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
    msg.setTimeStamp(0.54611493246225);
    msg.setSource(7518U);
    msg.setSourceEntity(162U);
    msg.setDestination(30110U);
    msg.setDestinationEntity(10U);
    msg.timeout = 65324U;
    msg.lat = 0.23968111172361906;
    msg.lon = 0.20324201072323256;
    msg.z = 0.47820066575257036;
    msg.z_units = 48U;
    msg.speed = 0.16163857542547044;
    msg.speed_units = 136U;
    msg.custom.assign("BYUGSYQTVRWCJDUCTPDMTADOAJNYIUHUBXKUCFDZAHFSNMLZFGKMIHOILMGFJCQOKJWDEUOLFKQRFYNRYNHQWESLY");

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
    msg.setTimeStamp(0.11278367776067888);
    msg.setSource(46777U);
    msg.setSourceEntity(230U);
    msg.setDestination(13188U);
    msg.setDestinationEntity(79U);
    msg.timeout = 58732U;
    msg.lat = 0.6788533317358687;
    msg.lon = 0.7360673794953966;
    msg.z = 0.830973065601207;
    msg.z_units = 48U;
    msg.speed = 0.16589848805678564;
    msg.speed_units = 122U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7290728108859544;
    tmp_msg_0.y = 0.5749025940321055;
    tmp_msg_0.z = 0.6535729810816119;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SCLGLCYEYDXUZKMRIXDNMFUVRJBEJOGWFEKLNGMZCZCSDSAAAPSQOQUYOPJXNRQHIBCEBPLTWKBKDCTAOLSHRFHGHHPOOVKZMPNPJENBJWMPWDCXYBGCQCHUIKMXWFIZFRSTBOERHVVSGQWYGEXOTETXVEJ");

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
    msg.setTimeStamp(0.1078590722757019);
    msg.setSource(39524U);
    msg.setSourceEntity(103U);
    msg.setDestination(28895U);
    msg.setDestinationEntity(168U);
    msg.timeout = 54229U;
    msg.lat = 0.41996031754283303;
    msg.lon = 0.928682135751556;
    msg.z = 0.10023963242409606;
    msg.z_units = 86U;
    msg.speed = 0.6530545934901419;
    msg.speed_units = 154U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9937442514616242;
    tmp_msg_0.y = 0.8284716737564182;
    tmp_msg_0.z = 0.570756964625857;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YSAZOSZJFCHRQLDRUUMDVAJSXHNGQVCZEMLWHRZKDLYSBQETGYQOTFNGMXUKLQXEMCWKMPVTOWVADHXHEGPMCLLIZWKXQNRXGSICJKNSQBKATWCPBNEBTKYSBOAXOCIHNFPPTROTCQEDDLFPRRYADJIGJEOPLBUFYZUXMVARGYDOUNZFUXPIGAI");

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
    msg.setTimeStamp(0.006486541189884787);
    msg.setSource(31541U);
    msg.setSourceEntity(197U);
    msg.setDestination(25468U);
    msg.setDestinationEntity(180U);
    msg.x = 0.7187729061304653;
    msg.y = 0.1755018855192998;
    msg.z = 0.47617697675511295;

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
    msg.setTimeStamp(0.7845715274093739);
    msg.setSource(52607U);
    msg.setSourceEntity(209U);
    msg.setDestination(45484U);
    msg.setDestinationEntity(244U);
    msg.x = 0.13160170100943724;
    msg.y = 0.5483617057431226;
    msg.z = 0.5073812569003151;

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
    msg.setTimeStamp(0.7383222548408291);
    msg.setSource(48721U);
    msg.setSourceEntity(239U);
    msg.setDestination(25468U);
    msg.setDestinationEntity(204U);
    msg.x = 0.9631352695556821;
    msg.y = 0.36378406249799466;
    msg.z = 0.49831624329721946;

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
    msg.setTimeStamp(0.9474361754017787);
    msg.setSource(25731U);
    msg.setSourceEntity(67U);
    msg.setDestination(9434U);
    msg.setDestinationEntity(2U);
    msg.timeout = 19035U;
    msg.lat = 0.035664494614012665;
    msg.lon = 0.8515590194957035;
    msg.z = 0.9424436026407925;
    msg.z_units = 55U;
    msg.amplitude = 0.8864574791174495;
    msg.pitch = 0.6791127200014814;
    msg.speed = 0.788996859723013;
    msg.speed_units = 230U;
    msg.custom.assign("SANLMDAINUPDODHCAZRQPJ");

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
    msg.setTimeStamp(0.8842625272075119);
    msg.setSource(58674U);
    msg.setSourceEntity(167U);
    msg.setDestination(63423U);
    msg.setDestinationEntity(236U);
    msg.timeout = 59317U;
    msg.lat = 0.7740476692088163;
    msg.lon = 0.1369197647041519;
    msg.z = 0.154106174203971;
    msg.z_units = 4U;
    msg.amplitude = 0.6145605074411242;
    msg.pitch = 0.8891206499878083;
    msg.speed = 0.14249751466346883;
    msg.speed_units = 75U;
    msg.custom.assign("IDVSKOYOOBPGBTGXPRKUKLWDCIJXUEEVCBTQQODAQFXKJLGHMWZIZXRJFLEYFHKXJJZHTMOCUQIFVLKWPIZBRDYEINHUCYMZFMEDGHNDOSCSICASKNTMZCHGFWEDJBWGRVXLANVUPRJCATQYEYRRZUUYBXXRNNBIRMLJPNIAOAQPBVTPOWSTLWWNQTOSXDMYNCVHMMFGPQOKAJSAQBZFTZENVHESTEIXDFGL");

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
    msg.setTimeStamp(0.8870751959762663);
    msg.setSource(8120U);
    msg.setSourceEntity(222U);
    msg.setDestination(3908U);
    msg.setDestinationEntity(19U);
    msg.timeout = 14398U;
    msg.lat = 0.20316647354460893;
    msg.lon = 0.16817829744528334;
    msg.z = 0.6001534743866682;
    msg.z_units = 17U;
    msg.amplitude = 0.5698820525760986;
    msg.pitch = 0.44045247309514224;
    msg.speed = 0.6068104780019618;
    msg.speed_units = 245U;
    msg.custom.assign("GGBDCYOBYHEGAMBCBJGQKUMEMHYIWFRECUNTQFZDTWPRJIENSKAOZUIUZKDNBMVSWJTVIMVFJKORSGARKLHNDZVHFTDELQQHQLMIOYLWPAFLWLCDHORAIHDLJRXM");

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
    msg.setTimeStamp(0.7093127312680367);
    msg.setSource(34984U);
    msg.setSourceEntity(136U);
    msg.setDestination(23182U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.8450808782062876);
    msg.setSource(3285U);
    msg.setSourceEntity(108U);
    msg.setDestination(45142U);
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
    msg.setTimeStamp(0.7318957071042518);
    msg.setSource(39889U);
    msg.setSourceEntity(52U);
    msg.setDestination(44839U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.050305155928718204);
    msg.setSource(54725U);
    msg.setSourceEntity(228U);
    msg.setDestination(58043U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.6579740029834023;
    msg.lon = 0.9543050889467909;
    msg.z = 0.32873860164228974;
    msg.z_units = 105U;
    msg.radius = 0.5877860051684661;
    msg.duration = 3139U;
    msg.speed = 0.6379361449580205;
    msg.speed_units = 120U;
    msg.custom.assign("FTGBLIKZUQDCNAOHKMNWDYHYYVEEXDKEDLMZRQLZFCWUBZWSBYPFTOUABBQCMZNEEDXXKGFHJZWFPXDLKMJEHJLFQGWOWEACNIOPMAJUXPGXOFI");

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
    msg.setTimeStamp(0.3543198387125478);
    msg.setSource(12819U);
    msg.setSourceEntity(2U);
    msg.setDestination(53930U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.5766054068674243;
    msg.lon = 0.6820845849068133;
    msg.z = 0.6809537450178503;
    msg.z_units = 28U;
    msg.radius = 0.6318416172679457;
    msg.duration = 9105U;
    msg.speed = 0.9423215812116632;
    msg.speed_units = 146U;
    msg.custom.assign("GYLYRQVRPSWVXSZKWTNQIOUZGHNTLTRQLMKPPOQDQFVBNNDSARHLXNEQYDDWMIOMBWDGXHPWEWORANFOVFVXJJCRHMMKBAHJOGOFFNUTEZERWSAYMJTSZUQIMBXYECDLXJJBIOEUPXZZMVHYQBZCCYYBKHTUFCSWABENSOKJATPUPJQAKKFFJKMZPS");

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
    msg.setTimeStamp(0.08994201223568421);
    msg.setSource(36523U);
    msg.setSourceEntity(183U);
    msg.setDestination(25474U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.11229663579224425;
    msg.lon = 0.2599048209042957;
    msg.z = 0.8391859805064988;
    msg.z_units = 16U;
    msg.radius = 0.6773411435611598;
    msg.duration = 48184U;
    msg.speed = 0.6216035871038735;
    msg.speed_units = 229U;
    msg.custom.assign("QVCBPERMXZQHSWZBDKBEOKAVTZSNANJTDOLZSXIHLDCQXIAASRLIXLXVLRFKMFMDEJJFPPZBUVVKRHSQKJEQKPCAWEZQHNNSCCVKYVKRRBLOXSFOFMUBFFYHRYOAYTSCDHWQLJIWG");

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
    msg.setTimeStamp(0.036565544100216174);
    msg.setSource(60168U);
    msg.setSourceEntity(177U);
    msg.setDestination(36850U);
    msg.setDestinationEntity(252U);
    msg.timeout = 36411U;
    msg.flags = 216U;
    msg.lat = 0.3501864890164107;
    msg.lon = 0.47858953225455636;
    msg.start_z = 0.38336881412835744;
    msg.start_z_units = 35U;
    msg.end_z = 0.05808073631530464;
    msg.end_z_units = 13U;
    msg.radius = 0.37213800494492577;
    msg.speed = 0.27879687164381095;
    msg.speed_units = 91U;
    msg.custom.assign("SCDQMGLKFGQISVLIPRUBAQEYWSTBECNXOOOIFPJEGTVGFWAJCENXRCPCOXVRIFIXGCZRAYJHIVMFJKEXXWDDOVTLWPYUBSQRYPQMLQFTYYPCABWHRORVUPNZVNBAAHNKUNTNXKPBWDSRBHDQPMZRHMECUJIYYZLBMEIMKJMKTGAOGLGDHSTCVAJYVSNEIZEBFDR");

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
    msg.setTimeStamp(0.924989442387085);
    msg.setSource(9398U);
    msg.setSourceEntity(141U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(104U);
    msg.timeout = 56827U;
    msg.flags = 167U;
    msg.lat = 0.4142262763975878;
    msg.lon = 0.8429956669392924;
    msg.start_z = 0.47505910925577655;
    msg.start_z_units = 65U;
    msg.end_z = 0.17265571973358862;
    msg.end_z_units = 9U;
    msg.radius = 0.9124589555946487;
    msg.speed = 0.20693628606495618;
    msg.speed_units = 37U;
    msg.custom.assign("BSTAZJXDUTAKVFO");

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
    msg.setTimeStamp(0.9822050873783561);
    msg.setSource(2081U);
    msg.setSourceEntity(252U);
    msg.setDestination(17842U);
    msg.setDestinationEntity(93U);
    msg.timeout = 495U;
    msg.flags = 30U;
    msg.lat = 0.23393173931747657;
    msg.lon = 0.913169957096115;
    msg.start_z = 0.07268772131481971;
    msg.start_z_units = 27U;
    msg.end_z = 0.8453672361545561;
    msg.end_z_units = 11U;
    msg.radius = 0.7144957537863944;
    msg.speed = 0.9518894319693324;
    msg.speed_units = 214U;
    msg.custom.assign("NUZSDWFMGUZBAPAUACRQLYXJWLXRVASSDPOGHNIMSLYJVQMJLTYJKCNREGSPOCBQKUKZVHDBHJEIVBUGWUVVPJWJABOLMGHLYVLOXRUDOIRPFAAKHCEFFMICCPVZBWXCZMKINTNKTIZEJIHKQO");

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
    msg.setTimeStamp(0.41741716282132335);
    msg.setSource(25916U);
    msg.setSourceEntity(14U);
    msg.setDestination(58330U);
    msg.setDestinationEntity(155U);
    msg.timeout = 50166U;
    msg.lat = 0.9601350033834891;
    msg.lon = 0.9381977679236732;
    msg.z = 0.31705079105721956;
    msg.z_units = 115U;
    msg.speed = 0.2983275721024723;
    msg.speed_units = 185U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8297274664743137;
    tmp_msg_0.y = 0.08476721367184914;
    tmp_msg_0.z = 0.751510392513045;
    tmp_msg_0.t = 0.2729185525580672;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UWEVJOSBVWMEPTBXCEMCNTDFMPKANAILYUSFZYWNIWEXZPNIDZGAFNQGVDLHDUWFWHVLGHKYJBQRBRSTUPOXAWZRPMSCZWDOEIHOKJFRZSZJIKDWXQOJSKTVKAYOQIUUYHQXSNXPQMJT");

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
    msg.setTimeStamp(0.7904144026631508);
    msg.setSource(4874U);
    msg.setSourceEntity(94U);
    msg.setDestination(63386U);
    msg.setDestinationEntity(33U);
    msg.timeout = 9230U;
    msg.lat = 0.8216453884667854;
    msg.lon = 0.4197352902472742;
    msg.z = 0.4745332534868343;
    msg.z_units = 23U;
    msg.speed = 0.3168130080069387;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5771514033175266;
    tmp_msg_0.y = 0.24524180758945413;
    tmp_msg_0.z = 0.30445406422972665;
    tmp_msg_0.t = 0.012500090032559918;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EXCXUQDRGI");

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
    msg.setTimeStamp(0.773636696530145);
    msg.setSource(50499U);
    msg.setSourceEntity(226U);
    msg.setDestination(43546U);
    msg.setDestinationEntity(19U);
    msg.timeout = 26390U;
    msg.lat = 0.8281932149513302;
    msg.lon = 0.6886647523419656;
    msg.z = 0.9392886404148925;
    msg.z_units = 25U;
    msg.speed = 0.8128931653462995;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.48441453928259737;
    tmp_msg_0.y = 0.4005422599613985;
    tmp_msg_0.z = 0.44549662340147955;
    tmp_msg_0.t = 0.32217232123292683;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HDOHEBRAOQBCGKTDRJTQPXMJYYNBUTBVYWVRIHUGKXEAYRUWTVWSFNJMTLZSETKAGYFUJTNCMJMWZKCCWOZGFFNFUHFIBGAIRVIZRNQAZGLUUHTVJQIYMLYUEIBQSVTCREXWPJXNKHXPSQUDGZJWAFEDQHGLOLWQFCV");

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
    msg.setTimeStamp(0.6036485834611495);
    msg.setSource(44762U);
    msg.setSourceEntity(102U);
    msg.setDestination(59793U);
    msg.setDestinationEntity(88U);
    msg.x = 0.8629877511801621;
    msg.y = 0.02089399904887157;
    msg.z = 0.7353158551813499;
    msg.t = 0.3185889275931997;

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
    msg.setTimeStamp(0.6857406989645499);
    msg.setSource(39401U);
    msg.setSourceEntity(211U);
    msg.setDestination(21937U);
    msg.setDestinationEntity(246U);
    msg.x = 0.6243099411370147;
    msg.y = 0.6714017261955888;
    msg.z = 0.6357732678566388;
    msg.t = 0.9781503516297713;

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
    msg.setTimeStamp(0.5360860126339236);
    msg.setSource(51901U);
    msg.setSourceEntity(56U);
    msg.setDestination(43511U);
    msg.setDestinationEntity(181U);
    msg.x = 0.4238897137307003;
    msg.y = 0.6734431340570275;
    msg.z = 0.18600592475442546;
    msg.t = 0.24823053235465253;

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
    msg.setTimeStamp(0.8235723797288781);
    msg.setSource(52174U);
    msg.setSourceEntity(106U);
    msg.setDestination(63113U);
    msg.setDestinationEntity(109U);
    msg.timeout = 17683U;
    msg.name.assign("UWFFNNVLRRRJSNVXPDRILKWTNPXLWXIJQYGPCDMGOOFVZRMBTOWVTOJDLHDSUJKGEVRUKRSVJBJAADKYEXEOKINUYPMOVPIEQGSWHDJ");
    msg.custom.assign("HXKZBVEJXCEFFZGJOGQESEYJMKFLHWEAMPHYDY");

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
    msg.setTimeStamp(0.6194688019641694);
    msg.setSource(2812U);
    msg.setSourceEntity(158U);
    msg.setDestination(52653U);
    msg.setDestinationEntity(19U);
    msg.timeout = 28398U;
    msg.name.assign("RWWLMWHKNZKRNIOFEJFOZESKVAAJJDSCOUZZRLXWHGTLGEHXIKCBUXFHDWBMRIIUOOYOXYBJCXSHMXCCKWBFIQHKORFHQVYQNRBJMTZLZL");
    msg.custom.assign("RCNEAKSZFMRMVJYBRVQWDTFLBGYQXYYVXUJKTHMILZGUPUUCDTDQQCSJRONLEZXHOISEJSBXZFTXAJTNTMJYZPWTCASWBCAGVWQRALPMYRGUHZBOSATL");

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
    msg.setTimeStamp(0.32623378217420396);
    msg.setSource(8035U);
    msg.setSourceEntity(51U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(38U);
    msg.timeout = 30711U;
    msg.name.assign("FBTPUIBQQYMCMRPMPIOALNOBKXHXPNNGXJKAETBZSHFTBIVLJCONOGQUAHRGRGZJWHFGZVHGKQTGE");
    msg.custom.assign("SNIOOXQDOHZARCIECGQSXLBUQIMUTJUKNZFUIMNSPTOJLOUNZKAZSYOCLNEBBDFAAPBHRBXOKGGVYVHYFLZTGMWSDPRWJFDMTEQXVHGDSFJLZBZCKLFAPOWYRWCJTXDMAKCEMNZKXEYEWULZGJTPITXCUHQIDDPFQFLRUHSYFHVPDVBLNI");

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
    msg.setTimeStamp(0.5095234351935845);
    msg.setSource(25434U);
    msg.setSourceEntity(187U);
    msg.setDestination(29278U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.2518285045752636;
    msg.lon = 0.8890671335922133;
    msg.z = 0.7586691703007662;
    msg.z_units = 110U;
    msg.speed = 0.482899051986207;
    msg.speed_units = 106U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.30825795275901713;
    tmp_msg_0.y = 0.7572657232118332;
    tmp_msg_0.z = 0.8931213513431319;
    tmp_msg_0.t = 0.7487816892209338;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.3095622744774854;
    msg.custom.assign("RXFSWNAAMNCYIJLYQRGTGSXIXAQTZNMEODWLCHGUYUBJZMQFTBUDWHHTWRKZSOFDPZFMRPJFVVSBKKKTISVVPAJJXGHICLALPQNWZHNYD");

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
    msg.setTimeStamp(0.018813402734935925);
    msg.setSource(7197U);
    msg.setSourceEntity(48U);
    msg.setDestination(16550U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.9553268909521373;
    msg.lon = 0.9093028565302708;
    msg.z = 0.5602269614473006;
    msg.z_units = 93U;
    msg.speed = 0.49742170923054196;
    msg.speed_units = 29U;
    msg.start_time = 0.34475844855206506;
    msg.custom.assign("JCNUHBHGHAFDJZONTKMFORLCDQZOYXVVYUKANZYNZSZGSLETZJBMHBQXXUXKQAJFNLPGPIDDHXXOLVTNTSIIKCTERBZJMWEFMHVUIUJVDEEOEBRAXLKBWOYSOKAPPIEWBCVBZFBCDQKZFVPJMXYNPDXRSGMIJBMTRYOLCLGIHYUWUKCNEVQFPPMDQNQYRHMJADGLEHQIH");

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
    msg.setTimeStamp(0.6272838238430637);
    msg.setSource(53917U);
    msg.setSourceEntity(34U);
    msg.setDestination(21958U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.9527379577442742;
    msg.lon = 0.4840902420656418;
    msg.z = 0.7137046266225031;
    msg.z_units = 72U;
    msg.speed = 0.3683081572831792;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3717766589639523;
    tmp_msg_0.y = 0.21515933346323934;
    tmp_msg_0.z = 0.036086136822513715;
    tmp_msg_0.t = 0.07845697629690773;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.09640666227815009;
    msg.custom.assign("ONTCCKEVZYQHQUJHZULTDNSSBLCSKVIJZAKWWMNQRCKZVCPNTJWWRAFEGAHEYEIADQTSZELBLNLAMRGRYUHDMFPRMRYPHFDBXTNAKWEQGMVSBHOMOMKOTZJFLXWLVGBDQEWAYPUURWGFUJDTULJSMYDQJIHIKRKSQUOPRWCVKLVAZVFEXXDCIZNIPVI");

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
    msg.setTimeStamp(0.27138651926125656);
    msg.setSource(43078U);
    msg.setSourceEntity(141U);
    msg.setDestination(64203U);
    msg.setDestinationEntity(169U);
    msg.vid = 50628U;
    msg.off_x = 0.16972134395744776;
    msg.off_y = 0.5270813964532609;
    msg.off_z = 0.9716263709905785;

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
    msg.setTimeStamp(0.8986249247293505);
    msg.setSource(57124U);
    msg.setSourceEntity(81U);
    msg.setDestination(13934U);
    msg.setDestinationEntity(108U);
    msg.vid = 22794U;
    msg.off_x = 0.5723313030490315;
    msg.off_y = 0.29494684154860185;
    msg.off_z = 0.15176524581865858;

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
    msg.setTimeStamp(0.24083304940340244);
    msg.setSource(25917U);
    msg.setSourceEntity(242U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(216U);
    msg.vid = 4733U;
    msg.off_x = 0.5421731480789717;
    msg.off_y = 0.8365441721505433;
    msg.off_z = 0.6587674106882071;

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
    msg.setTimeStamp(0.6935962223327683);
    msg.setSource(49640U);
    msg.setSourceEntity(112U);
    msg.setDestination(15046U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.13099367240590443);
    msg.setSource(45497U);
    msg.setSourceEntity(3U);
    msg.setDestination(8252U);
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
    msg.setTimeStamp(0.8700639822932688);
    msg.setSource(42276U);
    msg.setSourceEntity(97U);
    msg.setDestination(5161U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.9731414984049314);
    msg.setSource(16799U);
    msg.setSourceEntity(153U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(210U);
    msg.mid = 4085U;

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
    msg.setTimeStamp(0.4654168163398733);
    msg.setSource(27868U);
    msg.setSourceEntity(225U);
    msg.setDestination(958U);
    msg.setDestinationEntity(101U);
    msg.mid = 20630U;

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
    msg.setTimeStamp(0.809883880622014);
    msg.setSource(57437U);
    msg.setSourceEntity(183U);
    msg.setDestination(15430U);
    msg.setDestinationEntity(48U);
    msg.mid = 33182U;

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
    msg.setTimeStamp(0.3381362079232525);
    msg.setSource(63233U);
    msg.setSourceEntity(181U);
    msg.setDestination(29984U);
    msg.setDestinationEntity(128U);
    msg.state = 158U;
    msg.eta = 49175U;
    msg.info.assign("GBDENQUUKJBARXDYDHJWGCZEFMWXJBGQHIBKFVZJRONHSLYKXHVCCCVTGMFQEIAELIYYJFSMXRHDMTTBNWZCFNFOTXPLXBDGRYIMKBSOUWZYRUGCQTRDPWKPEVLQLYDVSISJOHMONXZIEWENOHPVQAKZCNQMNAZISNYMVAMVONTTMWFLPJGDKHABAXITQPZAFCUIKQPBVGAFJREWYORSPBCSJJCRO");

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
    msg.setTimeStamp(0.43544963198527753);
    msg.setSource(7328U);
    msg.setSourceEntity(59U);
    msg.setDestination(27031U);
    msg.setDestinationEntity(185U);
    msg.state = 238U;
    msg.eta = 31625U;
    msg.info.assign("KCXYFVKDNBQRUHKVLDKLQCPHGFDMWILCODQBVPJOEZIBTBAIOXMRAZJUADQAMUOBZVHDJYWOCTVXKSNUOSIJGJHYNFQEWYNERQABPKUPMMFTKUZCHWXQMOWVRJLTOPSXWXACSYNCCEMVZIGLGIDZKCVPFJOXKWZRMGLBTRUVDFRJLUSEEFQCXIGRSYFINFIEYLNKPBHWJHAXMHGZBEAS");

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
    msg.setTimeStamp(0.8076331450864132);
    msg.setSource(37320U);
    msg.setSourceEntity(1U);
    msg.setDestination(11262U);
    msg.setDestinationEntity(36U);
    msg.state = 153U;
    msg.eta = 7857U;
    msg.info.assign("ZPILHWWKSQMIPYZRRZJUYCDCSKXJWOOUUTREBGSYVEWDHIUIPTQXNGIBCHPQPHXXQZYRUZHCUJNOEJZXWHEZFRYBDFKVXSIAANAQJYJXVFAQBJD");

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
    msg.setTimeStamp(0.4699235241975448);
    msg.setSource(29898U);
    msg.setSourceEntity(199U);
    msg.setDestination(52611U);
    msg.setDestinationEntity(233U);
    msg.system = 10477U;
    msg.duration = 24607U;
    msg.speed = 0.5035445184481506;
    msg.speed_units = 234U;
    msg.x = 0.7046147005740371;
    msg.y = 0.7357568422924367;
    msg.z = 0.545797375410523;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.5911329748633892);
    msg.setSource(47441U);
    msg.setSourceEntity(254U);
    msg.setDestination(50364U);
    msg.setDestinationEntity(207U);
    msg.system = 23349U;
    msg.duration = 12959U;
    msg.speed = 0.7160127607993289;
    msg.speed_units = 11U;
    msg.x = 0.36392055008836166;
    msg.y = 0.7185833089584118;
    msg.z = 0.263792124533083;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.5030663830158411);
    msg.setSource(49649U);
    msg.setSourceEntity(96U);
    msg.setDestination(13384U);
    msg.setDestinationEntity(167U);
    msg.system = 38528U;
    msg.duration = 61107U;
    msg.speed = 0.26414564036065014;
    msg.speed_units = 202U;
    msg.x = 0.18790695490389442;
    msg.y = 0.7788201664822973;
    msg.z = 0.3429589349614075;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.8177974160298999);
    msg.setSource(21615U);
    msg.setSourceEntity(83U);
    msg.setDestination(37677U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.39517241350862364;
    msg.lon = 0.4923803269647623;
    msg.speed = 0.15312692206822331;
    msg.speed_units = 79U;
    msg.duration = 5666U;
    msg.sys_a = 1701U;
    msg.sys_b = 58416U;
    msg.move_threshold = 0.969881800427253;

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
    msg.setTimeStamp(0.07693820314825073);
    msg.setSource(20907U);
    msg.setSourceEntity(36U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.04481126582103301;
    msg.lon = 0.613901563743452;
    msg.speed = 0.7129308614931132;
    msg.speed_units = 230U;
    msg.duration = 12612U;
    msg.sys_a = 25440U;
    msg.sys_b = 45913U;
    msg.move_threshold = 0.506587041223493;

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
    msg.setTimeStamp(0.9472771039176786);
    msg.setSource(37130U);
    msg.setSourceEntity(211U);
    msg.setDestination(60610U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.15371750056124645;
    msg.lon = 0.5522514081456208;
    msg.speed = 0.5944795566530441;
    msg.speed_units = 51U;
    msg.duration = 48725U;
    msg.sys_a = 39889U;
    msg.sys_b = 61125U;
    msg.move_threshold = 0.8654324944122336;

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
    msg.setTimeStamp(0.14349652087230236);
    msg.setSource(53634U);
    msg.setSourceEntity(121U);
    msg.setDestination(57625U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.4437072715940802;
    msg.lon = 0.024223046267580317;
    msg.z = 0.9672246094924551;
    msg.z_units = 66U;
    msg.speed = 0.49903761628252274;
    msg.speed_units = 226U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.34633626195274614;
    tmp_msg_0.lon = 0.13148499129691493;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IVFKLNBCIXTNMETKNMNCPBSXNVSPNYVABQWCHOFOGYRHASKOYDEALIEDKJDTYWXIBRMMQHUPURIWETORXVBIZFZZXOHAFOL");

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
    msg.setTimeStamp(0.3252797431452148);
    msg.setSource(34857U);
    msg.setSourceEntity(82U);
    msg.setDestination(44376U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.6955847719840498;
    msg.lon = 0.18429241009100372;
    msg.z = 0.3240912491870773;
    msg.z_units = 2U;
    msg.speed = 0.520037508727326;
    msg.speed_units = 124U;
    msg.custom.assign("TQCOMBJLFDKLFRSFKCMSHDVJGGRBXPGCNRMBDYOWUEUZJNVUGVCYRZHUDJYMJILZBATFVBNXCJTOIK");

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
    msg.setTimeStamp(0.8682084577216083);
    msg.setSource(5004U);
    msg.setSourceEntity(1U);
    msg.setDestination(50558U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.4487572117503339;
    msg.lon = 0.3390672913735009;
    msg.z = 0.6721468448936664;
    msg.z_units = 118U;
    msg.speed = 0.2742286101638963;
    msg.speed_units = 224U;
    msg.custom.assign("LKLAXDFJDHPAJEMERQYOTFKQMEWGUGNNFUQRBYQDUDMWPUZCWEIRMYCENFBTZMFBJF");

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
    msg.setTimeStamp(0.5996193714521707);
    msg.setSource(58165U);
    msg.setSourceEntity(232U);
    msg.setDestination(60214U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.5200705129235714;
    msg.lon = 0.12510214835374578;

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
    msg.setTimeStamp(0.7572147997346033);
    msg.setSource(30526U);
    msg.setSourceEntity(122U);
    msg.setDestination(37399U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.08067828063653881;
    msg.lon = 0.9092583533928841;

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
    msg.setTimeStamp(0.9734504314638004);
    msg.setSource(51949U);
    msg.setSourceEntity(207U);
    msg.setDestination(15730U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.2944225077515753;
    msg.lon = 0.45006638987319303;

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
    msg.setTimeStamp(0.976683112022649);
    msg.setSource(13952U);
    msg.setSourceEntity(12U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(133U);
    msg.timeout = 17271U;
    msg.lat = 0.8922056133615842;
    msg.lon = 0.19369188012709582;
    msg.z = 0.7083774040701659;
    msg.z_units = 67U;
    msg.pitch = 0.49099159800955705;
    msg.amplitude = 0.6887085465475784;
    msg.duration = 35928U;
    msg.speed = 0.05327339409745446;
    msg.speed_units = 249U;
    msg.radius = 0.6963795001018293;
    msg.direction = 153U;
    msg.custom.assign("DDAVMEGSMCCWGJGURGMYLBGKYNELPSDXYFJYFDLMLXJLTHHXUAHJTKRQCLBGRBOTKQWPZUEOCNEFHHPNYSGMOZXIQAQPSBSBTQURRMEFPXKRSOLWOULTKIDATTULSGHUJHTNTOVY");

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
    msg.setTimeStamp(0.9617880472398995);
    msg.setSource(23771U);
    msg.setSourceEntity(62U);
    msg.setDestination(44539U);
    msg.setDestinationEntity(137U);
    msg.timeout = 1251U;
    msg.lat = 0.5948996836869714;
    msg.lon = 0.8711620483201367;
    msg.z = 0.5227128287430195;
    msg.z_units = 90U;
    msg.pitch = 0.9075151837737508;
    msg.amplitude = 0.10268655152087924;
    msg.duration = 51704U;
    msg.speed = 0.8443085450388724;
    msg.speed_units = 53U;
    msg.radius = 0.8538222544538026;
    msg.direction = 42U;
    msg.custom.assign("OZKHFNOBXSRDCRQGAPETIMSTWGKADVNVQQHXAJKCHVICULJEMWZBMQQGALWIXTEZZRVQDJTZLTYKDNOVPJGIBDBSYPKHAXNSLYYOEOWOWKAKFLCSRUGYMWWGYNGTCGGRDJKEUIDVVR");

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
    msg.setTimeStamp(0.09648917976908955);
    msg.setSource(21722U);
    msg.setSourceEntity(48U);
    msg.setDestination(4348U);
    msg.setDestinationEntity(22U);
    msg.timeout = 3434U;
    msg.lat = 0.03481984655004844;
    msg.lon = 0.9226985759266415;
    msg.z = 0.21544870205633104;
    msg.z_units = 47U;
    msg.pitch = 0.9246779894108772;
    msg.amplitude = 0.7096111572388538;
    msg.duration = 26801U;
    msg.speed = 0.32816351093353746;
    msg.speed_units = 229U;
    msg.radius = 0.5590028733152175;
    msg.direction = 79U;
    msg.custom.assign("KVOPBDKCZRTQEKTUETLLRFIGJSTGTYFJDSRFQAEHFVLNNBZTPXROYHHPGEUVAUQGILYSXFMNLZXXJVCJTQGROLIKFAIJXMHAFENZSAZTZBHKXMKWQDONIPGDBCEHQPMCMCOPQDLIEFAZVZAXOGWRUNJOJYSEZHWMRWBIIDVLGUVPKVZCUBO");

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
    msg.setTimeStamp(0.4147312879661227);
    msg.setSource(33398U);
    msg.setSourceEntity(231U);
    msg.setDestination(59231U);
    msg.setDestinationEntity(13U);
    msg.formation_name.assign("BLZNQHDTVYSSRLLMLFWHOYDKPIPOLOFSYHJJWWSPNRRWMXKPXHZTOSZECFMHBGNXOTFOGVSTGJONGAJLWLREIHODKDBAZZYQWBATXXJPVUDWPJEHFSQEAZUVMUVRAEAUBHOQXNYZOACQDEEPEXYJACMFEKJXCKMF");
    msg.reference_frame = 100U;
    msg.custom.assign("MSRZZBGCBSQFAXHROYSLDKIOHBSLUJOPAGRDLZWJBSADQJBCUMACWXFDXQAVXYFIOCF");

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
    msg.setTimeStamp(0.36962424644014746);
    msg.setSource(49280U);
    msg.setSourceEntity(1U);
    msg.setDestination(4968U);
    msg.setDestinationEntity(132U);
    msg.formation_name.assign("GIWTSLYEOZPCFNHUGRKSFYIRTOUNQWWIYJWJXVCDAKWAQSVUNVKFLNICLHUXETMUPQVCKRRZTODYMYFAUZXQPVQBODWACMISLGTENBCTWDBXKXZUZHFMDCALJYMPLIVQYQGKTFHEBJCFXODROMRMWIVMBQKRBTHHAYJNBOFAPCDZVDASESUXMPETYXFDNWEVYNLTGSJRZWZBGFZLBIOANLHHLGRPEEGA");
    msg.reference_frame = 185U;
    msg.custom.assign("MNGIAVWJWNVNOQVCWPDPYLNMXHSVGMSJARVUZFGSKDBCIXLARUHPNGPCDTKUTWYBFNZATRDDCTQLZERYQIASGTLXFSMOECOAACRQSQFJNODIEJJQBLVMKYHOSYTASFUYIKYOVLEONKBMOX");

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
    msg.setTimeStamp(0.3700194113283991);
    msg.setSource(63640U);
    msg.setSourceEntity(97U);
    msg.setDestination(43814U);
    msg.setDestinationEntity(174U);
    msg.formation_name.assign("ZXLUNDRBUNDSFPAIQHNDQHZBMDKNVLBQEOJYOCWFEMYTFHIND");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3003U;
    tmp_msg_0.off_x = 0.9562296396283614;
    tmp_msg_0.off_y = 0.06217101975588468;
    tmp_msg_0.off_z = 0.787887750756095;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CXFWYCYTBRJXIGPQOKGOCESXSCYWBFQCEYUOBCSOHNZIJIWKOLOAVESBAHQITAZRDWRHBLOUDILSXMYNDLWFAZANXJTTYVQGVPNDYSLIFTMMFCSAGDZIRKKSELVULVZKOGDWUVIFHR");

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
    msg.setTimeStamp(0.8209452559262859);
    msg.setSource(1457U);
    msg.setSourceEntity(12U);
    msg.setDestination(17784U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("ZGAMGLZEWVJHDNRCZECAXQTLDMTSCBJRPRFDCTRHJKAHUNVTNOMJHGWOVMXZSPHAGYQRVQOGFEHVDXPQMKIBYRSXJLZHSEUYOZQHDPTOWPGLSKXIOWIAFMFYBJGVMIVDUPYNZYUWFCUKELTSDWSRJNXWATQWUCTAFPQBAXJBGKDKTCUIBSYSWZIMBHFPQJPMNOKITIQBAVCFRXNNIPUGRLCEIBX");
    msg.formation_name.assign("FDLIWNHLUSJUKTACTWEQKVPSWBCXRLYDFRFVACZLCYLUKVTNJC");
    msg.plan_id.assign("IIZJULMGXXWBCORPEIYHSJKTZDJFQNMAOBWOSPUWOPCYTCXBTEMHRKEGWDNDANOQJCSFGZAANRKTUKXMKYNJIQLCNFMRMFYGVOREQPNWVJXLGVQDLGKYBSU");
    msg.description.assign("RCOMYVBHYOBFLRMNOGDPQWTTJURVZIBUNHEFSVJLATDKSRCSYYLNZSROAZXEKTWACLPDDTQHSIMCWKDUGRFRBYXVEAJNJFNXXQPZFGUVUOIKQBNAMOL");
    msg.leader_speed = 0.23144433859986147;
    msg.leader_bank_lim = 0.6749251674179886;
    msg.pos_sim_err_lim = 0.6526490712623001;
    msg.pos_sim_err_wrn = 0.8086126787092739;
    msg.pos_sim_err_timeout = 58434U;
    msg.converg_max = 0.8413039419924055;
    msg.converg_timeout = 29729U;
    msg.comms_timeout = 51005U;
    msg.turb_lim = 0.05031931153563485;
    msg.custom.assign("JIEFFOAYCZUCOVLFKMGBKYNAMENHYNVTDOHULLSKBCLBDSQWFQSOTFGEDMPITCZIPYEJMZVYEJEQGNWPWBTXOMSKRFRHDYJCWJWLQGOBNNQTENNAWJPGYDQRKPOCCVVQLAUHNXMKBIIORWKHVHO");

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
    msg.setTimeStamp(0.5672696035691787);
    msg.setSource(18813U);
    msg.setSourceEntity(142U);
    msg.setDestination(10639U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("CCNZTUTZBILFHUWLXJFITVAPOJEJHFGCCRYHQQKCGRMA");
    msg.formation_name.assign("ISEJDCGZTLHPDRNQFSLYWIXNNEPHPGJLGEOEMGACLXTOVKXYTZFWJVIKTLQBLIDWGRBBTHMSTGKJGQUFWXYVBRZRSMXYFCYKYOJXPGTUACJMNXEIKUAEMKPXKWKKFUNQWBDVMVCUNUORCHRZCATZENMPRYRGZOXOUYIVDBCYDL");
    msg.plan_id.assign("FWQOJSSALJNSREIFFVJATCVXWUDXNPOUEUJZQDZTUQLLGKYCRCLTSJJRRKLSVFFIVPMYXSREXKXHEECIZIOQNCQFUSAVCJZBMXMJINTPSWLNPWKFXWLOGIMHIPBBHCKDBEHBUONYYDBADTNPETZECRXFRYZASBPOWVGRHMRKDIHDNBVTFSTMWEHVZXFQLGKYHGYXYOAGCAQQATHJRKMMT");
    msg.description.assign("PJXPSYXWRWRZULOWZBDRNVNWBIRQFSR");
    msg.leader_speed = 0.5226476371423766;
    msg.leader_bank_lim = 0.35604335292743794;
    msg.pos_sim_err_lim = 0.29998787893752477;
    msg.pos_sim_err_wrn = 0.44306643494196996;
    msg.pos_sim_err_timeout = 47387U;
    msg.converg_max = 0.5705187101811581;
    msg.converg_timeout = 63517U;
    msg.comms_timeout = 6613U;
    msg.turb_lim = 0.9692740709297339;
    msg.custom.assign("QXEIVGCGJALTCTUTBFQQUARWZQDMWSPINLSKXNYFRBWINOUVCEVSFPXNEZLTWTAEEXXPSZDPNJAPYVXRYFIOSE");

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
    msg.setTimeStamp(0.7603361251745198);
    msg.setSource(5633U);
    msg.setSourceEntity(91U);
    msg.setDestination(48613U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("DXNGNWYJDHWIYLVGRETSOLJSHFUMFSXGWIGEQEIUBXUUFKHYUSNPIKREFKCRSFEWICGZTVJJQWWOOOFVBIZCKKOWCYSZVJBABCSBCYOHRHTLAMJKLTPEPNRRNTMLPDYDAVAAYACXSKVZBOXCFPINPRRDPRGLHUNHMAGTZIWAFOKXMWGVDERMHUAKDBBVPEXQHJBONSI");
    msg.formation_name.assign("CPYFQYNUFPBDKNIHWVQAGUYXCQFDWBWVNYVKEIWZAAIFOZKELNWFUJJODVLQTGADNHXGBRPRJIXJBSAMMPRQIBETPPSVPVGKEQNENRCRUXZZCTCMIRLWSDLJUBLZHCAIYFQTISNPXLAFDTCOLWWTZSUEXYXKQPTCSNGSCUKBLGOHJLKFKSXHDWGOVXJCTYOYDRIRBAMZZMUGNIVMOEQOBMDDFAEFSGSMMULHVPHGVOQETMTJKJ");
    msg.plan_id.assign("NFKGBROJIXLCSCQSIQYUJXSTNKJUGDRIYTOHVFOMCUOLRGKGTVMHBFGTMNZCJIZEDUKVLCKMIXIUESXMPENJNSXWYLWMNCTPYXLEASBBFGFDVDVNQLKZEGLJBYSURNZERBORJWDDKPRANDYEIHHHKYAIABAOMZFCQDGYSFEUHOTQZPSAUPVBNWIYPGCZJCAELKDQARFAQZDRXIXMOWJLPQBUMVWYWVTBHELZHXPOSFRKV");
    msg.description.assign("YWATZFSADNFCFUWINTZLMFHUAEZRXVPRQFCPMMBIBFKGWBTJBFCJDSSHGOLVKDMOIOLYUQNIRBKWDEGTIN");
    msg.leader_speed = 0.13906740105979143;
    msg.leader_bank_lim = 0.24963460215146227;
    msg.pos_sim_err_lim = 0.17585327586610933;
    msg.pos_sim_err_wrn = 0.48071817211890644;
    msg.pos_sim_err_timeout = 65123U;
    msg.converg_max = 0.7235009039762746;
    msg.converg_timeout = 43036U;
    msg.comms_timeout = 33217U;
    msg.turb_lim = 0.30120558273159714;
    msg.custom.assign("NSDPKMINCUVMLACZSXFXJXGJWLOYFVXGJIAEVBVPEUELPXYDODXNPZKOTVYWNTJBDYQTBSDXPRZHGGYLIFNPHUFGGRVMPEIHOIHYSFFNVLRDLMIJDQFTZSCCEOMWQEWHCXMICKBWNSXRXGKWFAUJUPHLQBMURRUTKGLRBTRZKRNOFKKYKWNAQBYJWMZYFDYSJOLHTGHAVCLAAIHZUOOTEWUCA");

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
    msg.setTimeStamp(0.10836382098844843);
    msg.setSource(51942U);
    msg.setSourceEntity(210U);
    msg.setDestination(29377U);
    msg.setDestinationEntity(90U);
    msg.control_src = 28090U;
    msg.control_ent = 234U;
    msg.timeout = 0.9399235986018551;
    msg.loiter_radius = 0.3644505195442004;
    msg.altitude_interval = 0.32238256713851265;

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
    msg.setTimeStamp(0.12308277931977396);
    msg.setSource(41356U);
    msg.setSourceEntity(212U);
    msg.setDestination(39060U);
    msg.setDestinationEntity(225U);
    msg.control_src = 11853U;
    msg.control_ent = 59U;
    msg.timeout = 0.17571202729142066;
    msg.loiter_radius = 0.11786344526050019;
    msg.altitude_interval = 0.7487716816547167;

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
    msg.setTimeStamp(0.18038236311277545);
    msg.setSource(41824U);
    msg.setSourceEntity(3U);
    msg.setDestination(51982U);
    msg.setDestinationEntity(247U);
    msg.control_src = 19581U;
    msg.control_ent = 33U;
    msg.timeout = 0.8598401803698998;
    msg.loiter_radius = 0.9315788334610078;
    msg.altitude_interval = 0.5686708415932819;

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
    msg.setTimeStamp(0.24283000570441649);
    msg.setSource(33486U);
    msg.setSourceEntity(72U);
    msg.setDestination(39911U);
    msg.setDestinationEntity(14U);
    msg.flags = 129U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6057824780600111;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3848281530739667;
    tmp_msg_1.z_units = 94U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.35991675447922533;
    msg.lon = 0.27484557548217114;
    msg.radius = 0.6689863864649735;

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
    msg.setTimeStamp(0.7793048386818283);
    msg.setSource(5819U);
    msg.setSourceEntity(177U);
    msg.setDestination(39425U);
    msg.setDestinationEntity(96U);
    msg.flags = 15U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9280696722563805;
    tmp_msg_0.speed_units = 84U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5487991554816616;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8763218017325617;
    msg.lon = 0.3181166928020691;
    msg.radius = 0.5851086967438899;

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
    msg.setTimeStamp(0.3777913662751613);
    msg.setSource(32982U);
    msg.setSourceEntity(103U);
    msg.setDestination(52836U);
    msg.setDestinationEntity(214U);
    msg.flags = 254U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4874798988432003;
    tmp_msg_0.speed_units = 28U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7554167754016887;
    tmp_msg_1.z_units = 167U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3852703063401729;
    msg.lon = 0.5147488682741496;
    msg.radius = 0.11923767622799075;

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
    msg.setTimeStamp(0.86034939363585);
    msg.setSource(56700U);
    msg.setSourceEntity(118U);
    msg.setDestination(40951U);
    msg.setDestinationEntity(14U);
    msg.control_src = 16013U;
    msg.control_ent = 118U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 119U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3586894957945531;
    tmp_tmp_msg_0_0.speed_units = 97U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6682718499342543;
    tmp_tmp_msg_0_1.z_units = 47U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6463824971175363;
    tmp_msg_0.lon = 0.4574249373707904;
    tmp_msg_0.radius = 0.4614313392548617;
    msg.reference.set(tmp_msg_0);
    msg.state = 176U;
    msg.proximity = 216U;

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
    msg.setTimeStamp(0.8791029997338539);
    msg.setSource(46420U);
    msg.setSourceEntity(32U);
    msg.setDestination(12385U);
    msg.setDestinationEntity(213U);
    msg.control_src = 50389U;
    msg.control_ent = 50U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 220U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6894024191339063;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.965913623253984;
    tmp_tmp_msg_0_1.z_units = 117U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1512238431424705;
    tmp_msg_0.lon = 0.8577332162016642;
    tmp_msg_0.radius = 0.41608237060883946;
    msg.reference.set(tmp_msg_0);
    msg.state = 127U;
    msg.proximity = 155U;

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
    msg.setTimeStamp(0.049871033608809845);
    msg.setSource(54546U);
    msg.setSourceEntity(109U);
    msg.setDestination(34556U);
    msg.setDestinationEntity(188U);
    msg.control_src = 23683U;
    msg.control_ent = 225U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 97U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.434280222189491;
    tmp_tmp_msg_0_0.speed_units = 128U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6163641847556361;
    tmp_tmp_msg_0_1.z_units = 206U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8485823057001571;
    tmp_msg_0.lon = 0.22613199505601334;
    tmp_msg_0.radius = 0.1856431016244945;
    msg.reference.set(tmp_msg_0);
    msg.state = 176U;
    msg.proximity = 17U;

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
    msg.setTimeStamp(0.3667286064254103);
    msg.setSource(60691U);
    msg.setSourceEntity(58U);
    msg.setDestination(3412U);
    msg.setDestinationEntity(200U);
    msg.ax_cmd = 0.5402051402289059;
    msg.ay_cmd = 0.9907471548905613;
    msg.az_cmd = 0.4469766932251257;
    msg.ax_des = 0.18232192554622406;
    msg.ay_des = 0.8452463078476933;
    msg.az_des = 0.032446261373786145;
    msg.virt_err_x = 0.2039788128506418;
    msg.virt_err_y = 0.4094438653605911;
    msg.virt_err_z = 0.21498576286502225;
    msg.surf_fdbk_x = 0.18431988072088545;
    msg.surf_fdbk_y = 0.9691821433320602;
    msg.surf_fdbk_z = 0.5571729082523945;
    msg.surf_unkn_x = 0.7893815373615543;
    msg.surf_unkn_y = 0.5149424405333887;
    msg.surf_unkn_z = 0.9517206892148612;
    msg.ss_x = 0.674185249568097;
    msg.ss_y = 0.06719049192088833;
    msg.ss_z = 0.46989345398098725;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ONWHVCZSBIKOWSISJWPYSJUGSCTEBBNSBEYAFUBQPISQVHGJEPCDBYKDMVYEKKFARDQRVCFYZD");
    tmp_msg_0.dist = 0.47583429525007026;
    tmp_msg_0.err = 0.1930159734967024;
    tmp_msg_0.ctrl_imp = 0.7727916874254344;
    tmp_msg_0.rel_dir_x = 0.9252948725196508;
    tmp_msg_0.rel_dir_y = 0.7818124794414083;
    tmp_msg_0.rel_dir_z = 0.5175981391334024;
    tmp_msg_0.err_x = 0.755209422336564;
    tmp_msg_0.err_y = 0.26085946816142647;
    tmp_msg_0.err_z = 0.8460594861019148;
    tmp_msg_0.rf_err_x = 0.22816670041056897;
    tmp_msg_0.rf_err_y = 0.25739997873963083;
    tmp_msg_0.rf_err_z = 0.408636609052468;
    tmp_msg_0.rf_err_vx = 0.09569077015101357;
    tmp_msg_0.rf_err_vy = 0.16748585252196524;
    tmp_msg_0.rf_err_vz = 0.7521264047385097;
    tmp_msg_0.ss_x = 0.8699940428299697;
    tmp_msg_0.ss_y = 0.7216679241297652;
    tmp_msg_0.ss_z = 0.5963309342002613;
    tmp_msg_0.virt_err_x = 0.873558956839833;
    tmp_msg_0.virt_err_y = 0.05273724118992573;
    tmp_msg_0.virt_err_z = 0.19726236761965188;
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
    msg.setTimeStamp(0.07637180665691612);
    msg.setSource(42952U);
    msg.setSourceEntity(204U);
    msg.setDestination(57137U);
    msg.setDestinationEntity(101U);
    msg.ax_cmd = 0.3554651235363394;
    msg.ay_cmd = 0.04363470061479613;
    msg.az_cmd = 0.8492088916220476;
    msg.ax_des = 0.21299564557663486;
    msg.ay_des = 0.5959877465466736;
    msg.az_des = 0.6396515847400834;
    msg.virt_err_x = 0.7159436136850104;
    msg.virt_err_y = 0.5008614536142605;
    msg.virt_err_z = 0.07407330925233013;
    msg.surf_fdbk_x = 0.5637280099394627;
    msg.surf_fdbk_y = 0.8463939832257501;
    msg.surf_fdbk_z = 0.7710033826002263;
    msg.surf_unkn_x = 0.8673583271347353;
    msg.surf_unkn_y = 0.02969609422000885;
    msg.surf_unkn_z = 0.7469798167072036;
    msg.ss_x = 0.4100482031170094;
    msg.ss_y = 0.9261921122085243;
    msg.ss_z = 0.5799901156281354;

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
    msg.setTimeStamp(0.5357592756278237);
    msg.setSource(64718U);
    msg.setSourceEntity(154U);
    msg.setDestination(44173U);
    msg.setDestinationEntity(164U);
    msg.ax_cmd = 0.43715648781158767;
    msg.ay_cmd = 0.21161941862121847;
    msg.az_cmd = 0.13915827278856607;
    msg.ax_des = 0.4371575133794633;
    msg.ay_des = 0.8275933779900964;
    msg.az_des = 0.8426797602458365;
    msg.virt_err_x = 0.7189646953606216;
    msg.virt_err_y = 0.9269042091436295;
    msg.virt_err_z = 0.014949675427676667;
    msg.surf_fdbk_x = 0.10315068556941465;
    msg.surf_fdbk_y = 0.7659664263604702;
    msg.surf_fdbk_z = 0.9619404848793263;
    msg.surf_unkn_x = 0.8369885807154139;
    msg.surf_unkn_y = 0.4753924683288452;
    msg.surf_unkn_z = 0.8120829549209756;
    msg.ss_x = 0.5114954628903302;
    msg.ss_y = 0.34028223564781235;
    msg.ss_z = 0.7717950096470267;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EVPYVMNADGCZHNYYHHNQYQQTFBBTASCFZWEDLCYELBECTIAJHZWXQBMFZZDQZJPNTQPKAGSMOAGFUXUFPIVMXFEDDOMXPEQNJCTIXEJBOKPJVKXICMKDYNZOYMHDMOLCVYVLUXOVDTLTBXUGRPDHSPCGYQIRPSNVOSOLFXUVOSYBWKZULRWFECRFBWPTUJQGSHMRBWZEWIHFJRRWNKMGJIGEALWGAIDXNKUUUKHIWOGRALNJVS");
    tmp_msg_0.dist = 0.37375510470327156;
    tmp_msg_0.err = 0.7095017580172562;
    tmp_msg_0.ctrl_imp = 0.37317716869262696;
    tmp_msg_0.rel_dir_x = 0.5947527138835716;
    tmp_msg_0.rel_dir_y = 0.7675325035919531;
    tmp_msg_0.rel_dir_z = 0.6248839791699712;
    tmp_msg_0.err_x = 0.47456660939971296;
    tmp_msg_0.err_y = 0.06022293429902248;
    tmp_msg_0.err_z = 0.6746870582736253;
    tmp_msg_0.rf_err_x = 0.572359908134535;
    tmp_msg_0.rf_err_y = 0.9238387615287038;
    tmp_msg_0.rf_err_z = 0.7222542272410425;
    tmp_msg_0.rf_err_vx = 0.17223073056254;
    tmp_msg_0.rf_err_vy = 0.9392664018110782;
    tmp_msg_0.rf_err_vz = 0.07544632909392679;
    tmp_msg_0.ss_x = 0.3319134806653852;
    tmp_msg_0.ss_y = 0.7069559234763175;
    tmp_msg_0.ss_z = 0.18412457962926965;
    tmp_msg_0.virt_err_x = 0.8773375254638479;
    tmp_msg_0.virt_err_y = 0.17843499801121687;
    tmp_msg_0.virt_err_z = 0.7871558914016585;
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
    msg.setTimeStamp(0.9231710996949196);
    msg.setSource(5742U);
    msg.setSourceEntity(127U);
    msg.setDestination(18315U);
    msg.setDestinationEntity(157U);
    msg.s_id.assign("GSPFLRULPAKMRFVMTPNWHZIEDZKBYVDEOXIDUOVIUWWPDYLOKTVOTSXCHSDDIKFLMJZMJHHKAWEHQCKMEXGFGZIFDAVSPORZIIYYBERDVXXOIOLMSPLYNQLMLGNJAMHYSEHHSXMICJXNATBFJPQ");
    msg.dist = 0.9023998133678658;
    msg.err = 0.8529346258735886;
    msg.ctrl_imp = 0.014366171833890662;
    msg.rel_dir_x = 0.23022551158417848;
    msg.rel_dir_y = 0.026342442674018862;
    msg.rel_dir_z = 0.8711781178532845;
    msg.err_x = 0.5398001592237531;
    msg.err_y = 0.5569032824955629;
    msg.err_z = 0.8292398452935776;
    msg.rf_err_x = 0.8358508041415083;
    msg.rf_err_y = 0.14592726248000443;
    msg.rf_err_z = 0.5508469757459161;
    msg.rf_err_vx = 0.008244298500993064;
    msg.rf_err_vy = 0.44635497626953613;
    msg.rf_err_vz = 0.7204264344289962;
    msg.ss_x = 0.681588617155044;
    msg.ss_y = 0.5155113427011058;
    msg.ss_z = 0.04564048417344202;
    msg.virt_err_x = 0.709916435707016;
    msg.virt_err_y = 0.713542829871453;
    msg.virt_err_z = 0.3011362218239977;

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
    msg.setTimeStamp(0.9920285462166626);
    msg.setSource(33442U);
    msg.setSourceEntity(145U);
    msg.setDestination(58735U);
    msg.setDestinationEntity(84U);
    msg.s_id.assign("XSATVGAHVLWHIKLOQIXEGETWD");
    msg.dist = 0.4128390352460155;
    msg.err = 0.34389169409614684;
    msg.ctrl_imp = 0.941964121661099;
    msg.rel_dir_x = 0.2979096784661154;
    msg.rel_dir_y = 0.38461703401440894;
    msg.rel_dir_z = 0.09788479477280843;
    msg.err_x = 0.3474262237199157;
    msg.err_y = 0.7351572936313339;
    msg.err_z = 0.7647889269142791;
    msg.rf_err_x = 0.5629984107189846;
    msg.rf_err_y = 0.8738582780970499;
    msg.rf_err_z = 0.6382864387846737;
    msg.rf_err_vx = 0.19506727601072182;
    msg.rf_err_vy = 0.4545550795664606;
    msg.rf_err_vz = 0.47736585165991097;
    msg.ss_x = 0.22972753222886366;
    msg.ss_y = 0.3412379198078671;
    msg.ss_z = 0.9200101390042983;
    msg.virt_err_x = 0.35551249819572206;
    msg.virt_err_y = 0.8959376565649719;
    msg.virt_err_z = 0.49491389664768604;

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
    msg.setTimeStamp(0.39143138644379927);
    msg.setSource(28266U);
    msg.setSourceEntity(8U);
    msg.setDestination(47516U);
    msg.setDestinationEntity(0U);
    msg.s_id.assign("OHMDECBRGJPXONHREPQXOXZDFMCMVSQQYBUGRNGKRJKFJTJJETTALVRLAEICTMWLQZDPWZOIV");
    msg.dist = 0.5634264963790915;
    msg.err = 0.3597889432235464;
    msg.ctrl_imp = 0.23898521934666028;
    msg.rel_dir_x = 0.7446878832395855;
    msg.rel_dir_y = 0.02667887217588616;
    msg.rel_dir_z = 0.9762109876357645;
    msg.err_x = 0.4208153046964961;
    msg.err_y = 0.08511727234262767;
    msg.err_z = 0.8401422573711252;
    msg.rf_err_x = 0.03971577238760837;
    msg.rf_err_y = 0.8003375791869191;
    msg.rf_err_z = 0.6784814620459382;
    msg.rf_err_vx = 0.778532807858629;
    msg.rf_err_vy = 0.27568288664907636;
    msg.rf_err_vz = 0.56610272649815;
    msg.ss_x = 0.2237340748253981;
    msg.ss_y = 0.6807602158924031;
    msg.ss_z = 0.3479065349160225;
    msg.virt_err_x = 0.7693571085920153;
    msg.virt_err_y = 0.7380774353775406;
    msg.virt_err_z = 0.2400204479931557;

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
    msg.setTimeStamp(0.525825528715633);
    msg.setSource(35484U);
    msg.setSourceEntity(191U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(146U);
    msg.timeout = 55913U;
    msg.rpm = 0.12151100045897745;
    msg.direction = 224U;
    msg.custom.assign("YZGLMWFJPUQUFHOENCEVJHJLUKOOBFJXRTAVQDQLBVSRHWDUPFAHRHVTGPKDFZLGXELOSKEJXSEKFGLHANOESSWJCYXWMNJVCEBXKANMQPPILDKENNVEHZDZWWUFVIACWMZIMZGGICTWEZPRFQIAHIDHRTOUQZLAOAQSNARQMXXJPD");

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
    msg.setTimeStamp(0.1539679503738698);
    msg.setSource(47409U);
    msg.setSourceEntity(15U);
    msg.setDestination(49500U);
    msg.setDestinationEntity(65U);
    msg.timeout = 14152U;
    msg.rpm = 0.7182056583151312;
    msg.direction = 26U;
    msg.custom.assign("WKORQXBWMOGSYZBGPUYENCRALUDJYJITRATVZHPFPVEWOFQFXZ");

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
    msg.setTimeStamp(0.27644416824667395);
    msg.setSource(54098U);
    msg.setSourceEntity(18U);
    msg.setDestination(13027U);
    msg.setDestinationEntity(222U);
    msg.timeout = 39453U;
    msg.rpm = 0.4197385898682392;
    msg.direction = 45U;
    msg.custom.assign("LUWCVTHTGVUBQLWQCXLNMHFAQMBCMLNDP");

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
    msg.setTimeStamp(0.17483153713940414);
    msg.setSource(54297U);
    msg.setSourceEntity(207U);
    msg.setDestination(46780U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("JHBJNKHEPLKCTAAJTSNNVVUKCXHWMGBLRDWGOJSGDBPSBRX");
    msg.type = 166U;
    msg.op = 62U;
    msg.group_name.assign("PXGINGQEQVLXLITNRTKQZULBWDROIFHYXTDXMVGVFRIKVJEBHWRCLUUADEYKIWRAGDWSQWPFAKSZXMXMZHXUDFTFHZLIYOMSSHQWTAOASMWNMULJFYDJOZJLJBQGCCLRCBPXNVFOSDSKRBCNNVQQUAGXMZIYUYHLCGSFPWHECEUIOXHSKEEZBNEMZBPOONKJ");
    msg.plan_id.assign("CHHGELDRKUIDVOSTOYTTFEDAMTECVVPCQZJHEBBXXOCLOYFDJJVUGAWKC");
    msg.description.assign("HCCDCSWMOBNDSHMTIFCIWLFULWTORKWDWKXJDSFXZDZGW");
    msg.reference_frame = 96U;
    msg.leader_bank_lim = 0.7875709150772983;
    msg.leader_speed_min = 0.7179955336520313;
    msg.leader_speed_max = 0.5443120516876564;
    msg.leader_alt_min = 0.9392185927505643;
    msg.leader_alt_max = 0.39675906189703214;
    msg.pos_sim_err_lim = 0.05114260372500723;
    msg.pos_sim_err_wrn = 0.5283651956407622;
    msg.pos_sim_err_timeout = 7509U;
    msg.converg_max = 0.4148662061267856;
    msg.converg_timeout = 56242U;
    msg.comms_timeout = 60511U;
    msg.turb_lim = 0.9967520854028739;
    msg.custom.assign("IGAYCXWDBETEKQCSYTQGKBNCUXCPKWJXBALIRADTLJDHGZURBCJYRZTQOOFUCTOVDFSHVXKOAPKLHLTHQRPTIOYVOIIXBXAUBELSLQXIOQDBRSTMLHWSJKAVYBVPWRCWMDFISZJQZFIFHOEJASEPVWNSNWPZMWHLEBMMFHNDUUXQGNGPVJUEVDFMEPTLAHZWXESMPQAUUCRLJFGPJCTAINGNOFCKJNVRYMUDKRGSYGRZZMZHENI");

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
    msg.setTimeStamp(0.6801719894170232);
    msg.setSource(43029U);
    msg.setSourceEntity(37U);
    msg.setDestination(1813U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("OLIYNAXIVXVOODXZCEEWKSTZHKHQCQSYSQUFVDUJPCBMTXNXWPGGISFRTHJFDITYJOVWKYVUVCNESLQTXJOMVWHTMUUCZGEQFSADHYMTKPFENQGJLNFQGWWFRBSFOHYGWIGNSATZOVEZOFXCARABJPIYYPKNRCBMBGRBDIALAWLCOJUZZUPUEOHKQQR");
    msg.type = 150U;
    msg.op = 86U;
    msg.group_name.assign("HFMDZQGWKTHHZKSPRVBAGFMKCSQRNLMVJEUJXLTAFODYVBKYZ");
    msg.plan_id.assign("GLWQKSKDWSVDGBCMXAHURJOPSBLJFESNBAJSOIY");
    msg.description.assign("IHLYJEOQQFHFVYCWLIKCCTMIQQWOQDWHVZIICESYKBRHNPFVPZQAHMWZZOEEOTUCURZOZUNTNSWFC");
    msg.reference_frame = 141U;
    msg.leader_bank_lim = 0.2839023521416596;
    msg.leader_speed_min = 0.6337279560313195;
    msg.leader_speed_max = 0.8497745171828639;
    msg.leader_alt_min = 0.9216340523205777;
    msg.leader_alt_max = 0.3762087806068858;
    msg.pos_sim_err_lim = 0.09173006841290987;
    msg.pos_sim_err_wrn = 0.8065656725491264;
    msg.pos_sim_err_timeout = 2719U;
    msg.converg_max = 0.4217172827821053;
    msg.converg_timeout = 64690U;
    msg.comms_timeout = 57872U;
    msg.turb_lim = 0.368051010534295;
    msg.custom.assign("QUGWHIPWSZOCVNDMYAXJDNSGJOQFMLEOPVQESROJDWYHJDFURWXICMBFHLSZGBCTKFHTKSOLAMHGPGQONMLBNJWXKTMIHNJLHSCKEYOAGWEJRFPRCVIYSOPZYZDBDZXRLTRPENKASWFZYFQPLIZAFNPMKTHSYQKBXQUTAHIEIFU");

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
    msg.setTimeStamp(0.3182479103239264);
    msg.setSource(54468U);
    msg.setSourceEntity(65U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("CRKOTFZMGTTJIBEOZEURBXIMVAGHWBPCJDOFUVQERNBTMMUULXKRELSWHSEYIUPILHCGXRSGDYEFBPONOYJEIKXLKNZHFGQGVEQUWODAYSWNPNZFHPTAPIBSCIEMZDVLUJFFMMMURXPTISIWG");
    msg.type = 122U;
    msg.op = 224U;
    msg.group_name.assign("WVZKPZFOTPTNIDFKNSJVPCMXSRGNFHRWJWILNKQFDQOZXFLIXMSPHRBXMJIGRBIBRIYSGDFCMLYZWJMYADKOQHAV");
    msg.plan_id.assign("OOXGNQZXGIVGMYJJPTCGQQICFUELCENOSDPVNCMDUCRJEZUUVZLLSEKTABFFNTK");
    msg.description.assign("PMSITQSIMWGGZYUDDEQNAJOKNAGDXCMYUHQFXIENBRCPOVHMTRIPQJRZVHDQDPKUFHPHWZOWLRAIKDUTJOVFPXMEBNEBGJDMHEJHGHYLQTLXSM");
    msg.reference_frame = 124U;
    msg.leader_bank_lim = 0.5529159506116679;
    msg.leader_speed_min = 0.1411713889375137;
    msg.leader_speed_max = 0.7605314022518864;
    msg.leader_alt_min = 0.512851944914092;
    msg.leader_alt_max = 0.25946726701204825;
    msg.pos_sim_err_lim = 0.9011757637147434;
    msg.pos_sim_err_wrn = 0.7728185731217583;
    msg.pos_sim_err_timeout = 15096U;
    msg.converg_max = 0.7707406760074287;
    msg.converg_timeout = 25889U;
    msg.comms_timeout = 29646U;
    msg.turb_lim = 0.5581708881464634;
    msg.custom.assign("CRUHDAUZCSJVPEZQOWOZXKTDNBLMNRVPQJJJSYZEBOWTVIFLAXKXVJFBTDRXVEYIGQBYFUCTQVSIYAQMWSFDMIEKNSONNCPMKQAZMEWXGOGWCPJTJJRLKLKTUBGIMGDRHWPYBHESPJLVGUARABPWLHAQWCPJRLODSIMOXZHQUTIUEKCSNDIHRYYNPVUAVOMMKE");

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
    msg.setTimeStamp(0.6301756699850033);
    msg.setSource(64095U);
    msg.setSourceEntity(121U);
    msg.setDestination(54026U);
    msg.setDestinationEntity(103U);
    msg.timeout = 7686U;
    msg.lat = 0.7463980964226805;
    msg.lon = 0.049682955112134275;
    msg.z = 0.1757937031195579;
    msg.z_units = 216U;
    msg.speed = 0.7951671644151873;
    msg.speed_units = 229U;
    msg.custom.assign("XDZGZPAFFAANQDVVYZTXMWZSFBNDEYMWJTOAMEFRLIHPTAKBOYABPFXIKPTOLOCEHWCUYSBJGTQXNLHZJXXMZIYNCROWIETMOHIAGCAFBQXVDJ");

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
    msg.setTimeStamp(0.7816920504848915);
    msg.setSource(12063U);
    msg.setSourceEntity(144U);
    msg.setDestination(35610U);
    msg.setDestinationEntity(206U);
    msg.timeout = 14016U;
    msg.lat = 0.5278815373502882;
    msg.lon = 0.6467852344699638;
    msg.z = 0.5706110503322492;
    msg.z_units = 240U;
    msg.speed = 0.37144218681015595;
    msg.speed_units = 44U;
    msg.custom.assign("ADDJDACCBAASZBAGLOQPRBSMMKAVPPLNMUTDVKADVOWWFZPBGBKZSLOWEDREWXYKHZOFIFVPENQNJXXAKFYGLEJD");

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
    msg.setTimeStamp(0.4431042354447242);
    msg.setSource(1959U);
    msg.setSourceEntity(25U);
    msg.setDestination(47175U);
    msg.setDestinationEntity(249U);
    msg.timeout = 47918U;
    msg.lat = 0.042017881158464165;
    msg.lon = 0.14776928569097836;
    msg.z = 0.058817585057392985;
    msg.z_units = 189U;
    msg.speed = 0.6725367916998084;
    msg.speed_units = 253U;
    msg.custom.assign("TLDKKRSFPCMOACICLDIBDRDTNKEHHAUTVUXQMZNWICHRXMBZIIR");

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
    msg.setTimeStamp(0.8235369070964447);
    msg.setSource(39973U);
    msg.setSourceEntity(131U);
    msg.setDestination(36677U);
    msg.setDestinationEntity(181U);
    msg.timeout = 41745U;
    msg.lat = 0.007364592983952978;
    msg.lon = 0.838576774404574;
    msg.z = 0.9685495254854892;
    msg.z_units = 224U;
    msg.speed = 0.9674266597772677;
    msg.speed_units = 42U;
    msg.custom.assign("MEVTARROCIROEJXVOWFKOIZPWBOFAOLCHUUYTIORLIGSJJOBPSPXDUCQJDXKIESGFDQNZWKUBAPZBEGVQTZLMOVOYXH");

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
    msg.setTimeStamp(0.18869591124065377);
    msg.setSource(11240U);
    msg.setSourceEntity(12U);
    msg.setDestination(32640U);
    msg.setDestinationEntity(242U);
    msg.timeout = 33114U;
    msg.lat = 0.07663463638398527;
    msg.lon = 0.5583450974938129;
    msg.z = 0.9262527052858845;
    msg.z_units = 191U;
    msg.speed = 0.734869910489822;
    msg.speed_units = 60U;
    msg.custom.assign("CILGFHAFNCQTRCUFAGIKZFGBQIYADXGKWRTNSBLVAORWOEVSSWDUWHQMUUDXYOBQNHISLNLGVOXJESPTNNMPAGEQRGE");

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
    msg.setTimeStamp(0.6465380946130368);
    msg.setSource(65432U);
    msg.setSourceEntity(225U);
    msg.setDestination(32543U);
    msg.setDestinationEntity(228U);
    msg.timeout = 36833U;
    msg.lat = 0.46450280290748847;
    msg.lon = 0.6551854125892004;
    msg.z = 0.12203689792476424;
    msg.z_units = 113U;
    msg.speed = 0.6115980246865234;
    msg.speed_units = 187U;
    msg.custom.assign("KCCBXKMSAXPMRDOVCVIDPQUQHYXKXKXSDSOYOWLDUFHKDEGMWZWQILADYNMBRVZMBNERRMJQKPZBUFRLDJJASTLBFFUYRWGPSXQJLTJUUTROZZJZUEVMYRREZYUOTUZCIEPQOFSJWVJ");

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
    msg.setTimeStamp(0.23944728867910725);
    msg.setSource(61751U);
    msg.setSourceEntity(58U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(250U);
    msg.arrival_time = 0.10001316201339894;
    msg.lat = 0.19361405402600695;
    msg.lon = 0.6055668696904054;
    msg.z = 0.5807684289547811;
    msg.z_units = 91U;
    msg.travel_z = 0.8325085101004063;
    msg.travel_z_units = 124U;
    msg.delayed = 231U;

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
    msg.setTimeStamp(0.1347521882993512);
    msg.setSource(25895U);
    msg.setSourceEntity(8U);
    msg.setDestination(11468U);
    msg.setDestinationEntity(48U);
    msg.arrival_time = 0.5208224111031061;
    msg.lat = 0.2574035120195547;
    msg.lon = 0.8521357359809184;
    msg.z = 0.3742973141318331;
    msg.z_units = 135U;
    msg.travel_z = 0.4181530278426725;
    msg.travel_z_units = 156U;
    msg.delayed = 51U;

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
    msg.setTimeStamp(0.1699238193778787);
    msg.setSource(21505U);
    msg.setSourceEntity(168U);
    msg.setDestination(37681U);
    msg.setDestinationEntity(150U);
    msg.arrival_time = 0.45634801656191526;
    msg.lat = 0.5750081073294523;
    msg.lon = 0.5657812508057372;
    msg.z = 0.8696449936671329;
    msg.z_units = 110U;
    msg.travel_z = 0.2813952669366946;
    msg.travel_z_units = 129U;
    msg.delayed = 206U;

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
    msg.setTimeStamp(0.9210282788840112);
    msg.setSource(19473U);
    msg.setSourceEntity(33U);
    msg.setDestination(19101U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.8353596426540186;
    msg.lon = 0.05501401504886594;
    msg.z = 0.4534685300930973;
    msg.z_units = 183U;
    msg.speed = 0.7669413293155714;
    msg.speed_units = 9U;
    msg.bearing = 0.65404148337611;
    msg.cross_angle = 0.4244170378256519;
    msg.width = 0.08091958808599975;
    msg.length = 0.9628941905976909;
    msg.coff = 175U;
    msg.angaperture = 0.8685602270258207;
    msg.range = 60229U;
    msg.overlap = 173U;
    msg.flags = 171U;
    msg.custom.assign("SPXEAVXEBXICLCYONFBEAYEJXUWDQGGUEWJRAKURONWVNKZKTJVBHGVJCGRMQIS");

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
    msg.setTimeStamp(0.5851086097629362);
    msg.setSource(10462U);
    msg.setSourceEntity(176U);
    msg.setDestination(14328U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.7481148371217344;
    msg.lon = 0.3219829265317884;
    msg.z = 0.6937777227314641;
    msg.z_units = 93U;
    msg.speed = 0.12336640338296789;
    msg.speed_units = 246U;
    msg.bearing = 0.45354132236948896;
    msg.cross_angle = 0.42163552990748454;
    msg.width = 0.9473095003903537;
    msg.length = 0.5787688492568942;
    msg.coff = 219U;
    msg.angaperture = 0.7313893399663485;
    msg.range = 14221U;
    msg.overlap = 67U;
    msg.flags = 160U;
    msg.custom.assign("OIDRMKEZMLZYUFVYVTLHCKZYIDCMLRHMXLYUUYDBUWFJFIRGPLFEQGVJRXNQRSGBZRLQPDZOAKEGYECWINPCTOFFDAXIZGPEHEOJWGXXDKOHNWLUVJEPTXAUNKXCTJVSHVBAKGVOFOGD");

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
    msg.setTimeStamp(0.6499729702639049);
    msg.setSource(38590U);
    msg.setSourceEntity(212U);
    msg.setDestination(18840U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.6134856207072906;
    msg.lon = 0.469452324704551;
    msg.z = 0.27822111708033614;
    msg.z_units = 235U;
    msg.speed = 0.027536202634075746;
    msg.speed_units = 252U;
    msg.bearing = 0.9749458838613979;
    msg.cross_angle = 0.849735657172787;
    msg.width = 0.134564656227265;
    msg.length = 0.06557762596267924;
    msg.coff = 24U;
    msg.angaperture = 0.5573217161800103;
    msg.range = 5499U;
    msg.overlap = 171U;
    msg.flags = 5U;
    msg.custom.assign("OQLWPJIIASKJDKUYECVULNOHDMTKIUZZLVOSKEOUFFEXBGLZDHFPYTBPKBVOTKVICYJKVCIBLMMPDSZAWXWHUQYAXSNSSAAWDGRHPABHXBKIJTTXFVJGHKXZAPMNMADMEQYTNYAIHDNIWPFWCOLEYNTRCZVRFEMRWFQDTTXCBURNODMGRBWZGMEHVGGQQLZJFUC");

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
    msg.setTimeStamp(0.21251283537828536);
    msg.setSource(64629U);
    msg.setSourceEntity(45U);
    msg.setDestination(55467U);
    msg.setDestinationEntity(136U);
    msg.timeout = 9589U;
    msg.lat = 0.04786393409771894;
    msg.lon = 0.9870003029190806;
    msg.z = 0.2560861504045532;
    msg.z_units = 119U;
    msg.speed = 0.867513995276381;
    msg.speed_units = 33U;
    msg.syringe0 = 225U;
    msg.syringe1 = 69U;
    msg.syringe2 = 216U;
    msg.custom.assign("ZDYSAVUTQXJKNCPHZIGEKHJTKYKD");

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
    msg.setTimeStamp(0.22961822965551204);
    msg.setSource(5968U);
    msg.setSourceEntity(25U);
    msg.setDestination(43642U);
    msg.setDestinationEntity(129U);
    msg.timeout = 53189U;
    msg.lat = 0.46901494100490304;
    msg.lon = 0.8234733349320623;
    msg.z = 0.7506520725410203;
    msg.z_units = 8U;
    msg.speed = 0.3559942542797351;
    msg.speed_units = 164U;
    msg.syringe0 = 67U;
    msg.syringe1 = 116U;
    msg.syringe2 = 87U;
    msg.custom.assign("SFSVTAHXDEYYFQLGUVEGIIMXICWKUFYYVIBDKMJZPDOSTLPYEZZZXQNSXCFYGNLQZRDCWBBAMKSWZYUPCRONEWSWTVTHDTBDGPWVJHMWTOXXJIMRINQTNCFEEZZDYIKUVNVGEVHQQOHZAVRQLADPTBARHGXFJHPDLOQREAXCKSWNKLJBRYUJKZKMMM");

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
    msg.setTimeStamp(0.1338296238807698);
    msg.setSource(14302U);
    msg.setSourceEntity(164U);
    msg.setDestination(30836U);
    msg.setDestinationEntity(58U);
    msg.timeout = 47761U;
    msg.lat = 0.7128964896903232;
    msg.lon = 0.9751389677104072;
    msg.z = 0.7571281255459383;
    msg.z_units = 112U;
    msg.speed = 0.9605192060811274;
    msg.speed_units = 248U;
    msg.syringe0 = 96U;
    msg.syringe1 = 119U;
    msg.syringe2 = 156U;
    msg.custom.assign("EIWWRSAQADXUCJARGUSTDIPJKZXLCYLAIJTZGSKMRRSPWCOXVIZIXDVZNSLQKQSCNIJHFWNXXSVXYPBQLEKLOESOLYJQP");

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
    msg.setTimeStamp(0.7822615123784085);
    msg.setSource(38634U);
    msg.setSourceEntity(107U);
    msg.setDestination(21530U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.26660362268681304);
    msg.setSource(48779U);
    msg.setSourceEntity(93U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.4416833758509645);
    msg.setSource(41206U);
    msg.setSourceEntity(203U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.3199672648845232);
    msg.setSource(45157U);
    msg.setSourceEntity(179U);
    msg.setDestination(5929U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.6084192589216071;
    msg.lon = 0.033400668398096744;
    msg.z = 0.18364938971712041;
    msg.z_units = 207U;
    msg.speed = 0.9717950136980403;
    msg.speed_units = 8U;
    msg.takeoff_pitch = 0.7343539374358524;
    msg.custom.assign("DFFEOSPYJEIYJNVLXPBQEGXCNGIBBEDUUCTBKIBZPARVCMOGIJDFBKSJMWYTLWMLQCLJKFIPFQHRLOZRLIAQASWGSKKNGETIDYZVSYOKZPPVTSTZLNXTUUROAYWQWTWIOCQCXHUKRHONRGCVJLEAUFQMHVKEUNSSHWPDLQAVOADDMJNZMHAXNYGBCNBXXBEWAJHDSHYDFRVNRTZECFUOTVKFQKIMYWXPLBQUAMMGR");

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
    msg.setTimeStamp(0.1309960120511503);
    msg.setSource(10429U);
    msg.setSourceEntity(234U);
    msg.setDestination(20634U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.8582246643618052;
    msg.lon = 0.07955659067810461;
    msg.z = 0.792860635288837;
    msg.z_units = 59U;
    msg.speed = 0.31308487691340126;
    msg.speed_units = 227U;
    msg.takeoff_pitch = 0.44200998032796035;
    msg.custom.assign("BYJZLNYFWVJEPZJFDVUQMVPUKYIOEBMBTNOWZTHSZUHOHCMDXTGXJAEFIDJRYGYSKOVPZGRMPTVBREEHWMPIXXTDQFUUBOLCRDKWFDEGZFFNZGJJNYXFCCMQQOADNEG");

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
    msg.setTimeStamp(0.6716755930817309);
    msg.setSource(55703U);
    msg.setSourceEntity(39U);
    msg.setDestination(59610U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.03713499175425983;
    msg.lon = 0.446069681541276;
    msg.z = 0.6365793280040304;
    msg.z_units = 147U;
    msg.speed = 0.19657458787779003;
    msg.speed_units = 239U;
    msg.takeoff_pitch = 0.48091347671457674;
    msg.custom.assign("FLMUPRPENDTZLFSYRANBIEXCDZXTTOBFQSNBTHVROKTCPOJHHHSNAONCZKIWEEEZCAWUOUYWNTYCYJKBGHRDFJYECYJOHCVUEGLGBXKGQQHUEWMWSXGDFVZXQQZDPABZIYMQKVQWLVUEFVSSABHNLIVJUCGNXBDWTIATLGDPVYDMCODZPKQWXO");

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
    msg.setTimeStamp(0.3407998277427656);
    msg.setSource(32525U);
    msg.setSourceEntity(195U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.969103174709003;
    msg.lon = 0.8560702761222704;
    msg.z = 0.9156662634109105;
    msg.z_units = 110U;
    msg.speed = 0.5134966917129287;
    msg.speed_units = 238U;
    msg.abort_z = 0.563466844658277;
    msg.bearing = 0.5232665897460946;
    msg.glide_slope = 101U;
    msg.glide_slope_alt = 0.9354549812167846;
    msg.custom.assign("BFXZBBSLYPKJXHZGXKGQFQFBZMDAONVN");

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
    msg.setTimeStamp(0.8401193061594621);
    msg.setSource(10263U);
    msg.setSourceEntity(152U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.26412712945913686;
    msg.lon = 0.05908634741487018;
    msg.z = 0.8041840388807248;
    msg.z_units = 135U;
    msg.speed = 0.35925236190299736;
    msg.speed_units = 176U;
    msg.abort_z = 0.5491985903653714;
    msg.bearing = 0.389188369345977;
    msg.glide_slope = 84U;
    msg.glide_slope_alt = 0.7549472034127164;
    msg.custom.assign("YJASDASYXFJZTDPWFVZNZWXHWGTJQVGNZQFNMVEOHIOQLLSKDJ");

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
    msg.setTimeStamp(0.4148068770456591);
    msg.setSource(51358U);
    msg.setSourceEntity(80U);
    msg.setDestination(62413U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.13078624017334473;
    msg.lon = 0.3289006890702024;
    msg.z = 0.18717999122158968;
    msg.z_units = 81U;
    msg.speed = 0.18641471818279187;
    msg.speed_units = 67U;
    msg.abort_z = 0.19630444766417388;
    msg.bearing = 0.18471161468502684;
    msg.glide_slope = 223U;
    msg.glide_slope_alt = 0.872682134058381;
    msg.custom.assign("JAHDWDPOHXSYACZHIFKZABXZXBRKUPMHYPWHUGUHDNQYXGAZIEUDSYSCMEJRFPLVUGNDCCZZYLBVJNFMLZEFYCXCLBVQYMKFOGWNPGRUNSXXHQTDMTPSJQUZWSTWVUCOQCVAKJUYAEFKOVNREMGWOCHRTPSBLLFFIWGWEK");

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
    msg.setTimeStamp(0.28419933839904477);
    msg.setSource(36432U);
    msg.setSourceEntity(196U);
    msg.setDestination(21153U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.2780620002819937;
    msg.lon = 0.021844531519500165;
    msg.speed = 0.8192508483127773;
    msg.speed_units = 133U;
    msg.limits = 162U;
    msg.max_depth = 0.3015654083604531;
    msg.min_alt = 0.6793350716970188;
    msg.time_limit = 0.8859138285528372;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.06548452048823883;
    tmp_msg_0.lon = 0.011470539726397666;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("WEATBTRDZOHOXBAWIHLIOSREUMXFQCNNCHQD");
    msg.custom.assign("DQTJGFWHXBAPQYFTOGYJJBSDGSQUHTEOVOQRM");

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
    msg.setTimeStamp(0.5850259702582116);
    msg.setSource(59024U);
    msg.setSourceEntity(0U);
    msg.setDestination(42231U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.2705050526672462;
    msg.lon = 0.8248394920686486;
    msg.speed = 0.02640014381697664;
    msg.speed_units = 218U;
    msg.limits = 98U;
    msg.max_depth = 0.8325227580500711;
    msg.min_alt = 0.22570661188960606;
    msg.time_limit = 0.9223383368404233;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.907692251902025;
    tmp_msg_0.lon = 0.9398301963890087;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("SYYICWXSVEMTNORLAJMROBJGAEQLDGMNVQPHKIGURPVRRJKLZFSDXGOMBZUKDICKXWDDQEUZNNEWMSGLFYTPYAHHKAUBZACBSAOCB");
    msg.custom.assign("RVFWCQRTUDJPCOLNQDKKFUXUZLXNHTSEJGAILYPDMJNXLMLDFEKGQQDTMZBSWYHLZYQRDVGOMLISYYYAQATBAMHYGFUTWEZMOBICOZBHOINLRIPSVUCMSTBZL");

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
    msg.setTimeStamp(0.5044525424682312);
    msg.setSource(23215U);
    msg.setSourceEntity(27U);
    msg.setDestination(20615U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.11615322127116423;
    msg.lon = 0.683828389967817;
    msg.speed = 0.06426081062300815;
    msg.speed_units = 105U;
    msg.limits = 195U;
    msg.max_depth = 0.5326184848694238;
    msg.min_alt = 0.7515321907523907;
    msg.time_limit = 0.5192249086012689;
    msg.controller.assign("UULDZHPIYARTZGLEWQAAMOTOPKHQEZNWYWFDFFTTIOSRGUJKSVQVQYHPBJK");
    msg.custom.assign("PIWXLEBWOMLFSSSZYQJVHEBUUMMXTUXYZLFBJHDTZXCBZZVQMUHIDFWSIWPIQXNSRNVEDIBFLPENHCADNQKNMSZZRBASTPVCQJWWPWFYJAQCRLNRWIDKMYUHODEKDELEUBZEZRBPXQTCFYJLHNTSOLJHGKQTTIYKOOGOLIVNMUJXAMXRNFGJCDCHFKNQICHPRTIDPUULTBRWJUKGRKEAYBROTWOSQAFZVA");

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
    msg.setTimeStamp(0.7040289371202577);
    msg.setSource(22642U);
    msg.setSourceEntity(201U);
    msg.setDestination(19787U);
    msg.setDestinationEntity(58U);
    msg.target.assign("GCSNTIRQLLHYYBYRYIPSONSOCMGEDWGUOQRGOTKADTHZPUWSDPE");
    msg.max_speed = 0.8109395720056864;
    msg.speed_units = 99U;
    msg.lat = 0.5908852653216247;
    msg.lon = 0.39395931988175004;
    msg.z = 0.24742443717679685;
    msg.z_units = 118U;
    msg.custom.assign("GJGSQSCAZVZDHMIYSMSIMKFASDOHOVDVLJFVTSKBOLPBOPMEFMIWBBUHPQBZIZLRPNBYGNBAOUEHRLJSQUDPYHOCNGHPJJBUCVJICVWUAYBDWEFTWRCJSWDMMXYXCYHZLOH");

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
    msg.setTimeStamp(0.920429299397309);
    msg.setSource(13628U);
    msg.setSourceEntity(127U);
    msg.setDestination(42064U);
    msg.setDestinationEntity(17U);
    msg.target.assign("FJSOXELVYXFOVYMVMGTONCGTXYNHDQBJGXDTZOZTMRBZMGCPRTLRSJMWNUOAVJUNXVQDZICGMICFKEBQEOWXSBLEUQJHVRFDZFACNHUCKTMTHLGNITCXDLWCUPKWHRKWEUFOWRZLNSISICEEOJVLZTLKAIMEUBYBAJYGABOP");
    msg.max_speed = 0.9653660672762963;
    msg.speed_units = 107U;
    msg.lat = 0.9315072945430463;
    msg.lon = 0.9558506711551664;
    msg.z = 0.7028686042945196;
    msg.z_units = 192U;
    msg.custom.assign("EHHGNGDLGFARNVVBZLPEQQDRWCMILYDIWNXOBEWYHMNEFZJWDTSYUOXYACLTSGQTBISCGBCRJZCJPUISMSRCDWOGFZQVKPRQQMTHLIVQEPTWKZKMOUEQULTERHQTYXUEXKZVDID");

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
    msg.setTimeStamp(0.08277678117684817);
    msg.setSource(46970U);
    msg.setSourceEntity(210U);
    msg.setDestination(43680U);
    msg.setDestinationEntity(252U);
    msg.target.assign("JHJMYFFFSKEFQESITOAEAZZHJIXZTZYEWHTIAXSXNHPATOPCKKRBTMCV");
    msg.max_speed = 0.24731513079151612;
    msg.speed_units = 22U;
    msg.lat = 0.44894684226561465;
    msg.lon = 0.858844399875513;
    msg.z = 0.7492051130939358;
    msg.z_units = 193U;
    msg.custom.assign("OBDJALGMTIEMVEIRSAGWGPVPEYNJUJZFHAZVVMJZNACXUDLJHWKHPRNPAOZNCEMQGZDMXCHNBFYOAMU");

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
    msg.setTimeStamp(0.8057462115012558);
    msg.setSource(49558U);
    msg.setSourceEntity(41U);
    msg.setDestination(19054U);
    msg.setDestinationEntity(140U);
    msg.timeout = 6454U;
    msg.lat = 0.888523269043557;
    msg.lon = 0.3289289233958018;
    msg.speed = 0.26152389896578976;
    msg.speed_units = 26U;
    msg.custom.assign("ENSKRKBMSSVIYWULDJZLDHOGDTHXVYUXGPOCVGZLOMTTUHQUANFEOX");

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
    msg.setTimeStamp(0.7165527426948571);
    msg.setSource(61966U);
    msg.setSourceEntity(20U);
    msg.setDestination(36797U);
    msg.setDestinationEntity(168U);
    msg.timeout = 39364U;
    msg.lat = 0.49707607026060807;
    msg.lon = 0.9553944698301416;
    msg.speed = 0.9197742743679668;
    msg.speed_units = 219U;
    msg.custom.assign("BQYZKOVSQXUTHIMDKJMQDSTQWCMMSAXFLLSHKQNDMTUCHKIFFBGHXPBCGEEGZUPWOXTAUGVCQPKGNOUSLMJGWCKATZNZWEYWBORU");

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
    msg.setTimeStamp(0.39978528137832414);
    msg.setSource(23222U);
    msg.setSourceEntity(176U);
    msg.setDestination(29259U);
    msg.setDestinationEntity(98U);
    msg.timeout = 318U;
    msg.lat = 0.9844053738304885;
    msg.lon = 0.022790800711280146;
    msg.speed = 0.8609129086991814;
    msg.speed_units = 243U;
    msg.custom.assign("MDFXCJEDWCZTHNZBYRIWYBNBIBLDCKSYAHOGYQXGUOKSNMUJOTFTAVRRCPNTZTDPWOZCKOKPMIKJASXFHGXVBWULT");

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
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.8325301777305403);
    msg.setSource(36943U);
    msg.setSourceEntity(76U);
    msg.setDestination(63276U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.7252434291099381;
    msg.lon = 0.6471733603113815;
    msg.z = 0.8313806239624971;
    msg.z_units = 137U;
    msg.radius = 0.4257625133522889;
    msg.duration = 23210U;
    msg.speed = 0.5394657044624308;
    msg.speed_units = 67U;
    msg.popup_period = 18967U;
    msg.popup_duration = 60837U;
    msg.flags = 16U;
    msg.custom.assign("BTSKVKWTGYJQIWYEPDYANFWIGVHBMVPMFAJNDGCIWVKOJSAOSJVMDTIETQFWVPHQAKUIKMKCUFBYSGUZMUDNYJEHLCUGJNASGXXIWZVLFFLCJCKQDZHSVRBUCDFLHHEUZTXGRMRJRXIQFDLZBZLWCRBXQOAPLDMOHRPSWJYOBJFREFVSITSNO");

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
    msg.setTimeStamp(0.08835696145222871);
    msg.setSource(52375U);
    msg.setSourceEntity(57U);
    msg.setDestination(33540U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.06379553445604969;
    msg.lon = 0.5108369110448381;
    msg.z = 0.1877863937469303;
    msg.z_units = 40U;
    msg.radius = 0.6843587369842672;
    msg.duration = 59483U;
    msg.speed = 0.8236293004171341;
    msg.speed_units = 97U;
    msg.popup_period = 25369U;
    msg.popup_duration = 12614U;
    msg.flags = 25U;
    msg.custom.assign("CHKLAMEDOBHORUUXTJQXKDHTEQIDQMOMRIJFNCKFEKTQWDFWCSSXAEUKRJYLQENLBUV");

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
    msg.setTimeStamp(0.6326871531359299);
    msg.setSource(61705U);
    msg.setSourceEntity(224U);
    msg.setDestination(8463U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.6964442199782763;
    msg.lon = 0.996694782497961;
    msg.z = 0.5168992118930469;
    msg.z_units = 47U;
    msg.radius = 0.3597508245018226;
    msg.duration = 2236U;
    msg.speed = 0.4669280860702858;
    msg.speed_units = 20U;
    msg.popup_period = 21001U;
    msg.popup_duration = 28080U;
    msg.flags = 4U;
    msg.custom.assign("QDTFPLQIGHRYSZRFZJTJBOWMCQPHQFDUMELAMTMFNPRKPQBUYLYGZZBLEJKPFCQHDTMCYOZOMUMJGIELQDVTCEHNPNHIGTKTOVHBECWUMDVVRNWNRDVANXVOXHALGPSWSACCXWBHRRFGGFJSYXUGRWIVEVGPKIXALKYZLEZMEUWV");

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.8722421486772144);
    msg.setSource(25775U);
    msg.setSourceEntity(93U);
    msg.setDestination(18824U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.27421946095093375);
    msg.setSource(50268U);
    msg.setSourceEntity(206U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.6108009535362915);
    msg.setSource(59442U);
    msg.setSourceEntity(89U);
    msg.setDestination(61724U);
    msg.setDestinationEntity(74U);

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
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.9909252416887017);
    msg.setSource(27810U);
    msg.setSourceEntity(75U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(28U);
    msg.timeout = 13163U;
    msg.lat = 0.1324142526338774;
    msg.lon = 0.06437536922092812;
    msg.z = 0.5498778199535042;
    msg.z_units = 159U;
    msg.speed = 0.0536680478631274;
    msg.speed_units = 40U;
    msg.bearing = 0.8534581625259038;
    msg.width = 0.4084168869176541;
    msg.direction = 134U;
    msg.custom.assign("VFIDQXQMACRRAYFNLUZKXSSKRODNDHYXKWTLNRTAKDWODWY");

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
    msg.setTimeStamp(0.7406104043852185);
    msg.setSource(7819U);
    msg.setSourceEntity(132U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(133U);
    msg.timeout = 37546U;
    msg.lat = 0.48041556204180713;
    msg.lon = 0.5795923451283362;
    msg.z = 0.39783209829517296;
    msg.z_units = 227U;
    msg.speed = 0.05472487469919318;
    msg.speed_units = 149U;
    msg.bearing = 0.8715878642088625;
    msg.width = 0.5583105500551891;
    msg.direction = 12U;
    msg.custom.assign("NFPJNAPMXDFSFLDQQJ");

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
    msg.setTimeStamp(0.3508510015069154);
    msg.setSource(40409U);
    msg.setSourceEntity(90U);
    msg.setDestination(54539U);
    msg.setDestinationEntity(135U);
    msg.timeout = 51523U;
    msg.lat = 0.538492735590904;
    msg.lon = 0.15343011511223625;
    msg.z = 0.6543541881883793;
    msg.z_units = 20U;
    msg.speed = 0.9261265575200671;
    msg.speed_units = 80U;
    msg.bearing = 0.18737510000299284;
    msg.width = 0.7732590773419049;
    msg.direction = 127U;
    msg.custom.assign("OXLBVYSKXPOERIVKBLARANTMTVPQNXVPWSNYWIYLZJDPUEVHJZVTQMHKCPWAIBGGEZMQQZRTWEJRZLOWAOEOOQESDNQXKJRDUNVUMWPAEMQJAHZTGCGSHFILGZGHYOKSKRMWBMOGADCQPJYZKFHPKYIKWPG");

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
    msg.setTimeStamp(0.7326545636640085);
    msg.setSource(37303U);
    msg.setSourceEntity(138U);
    msg.setDestination(1895U);
    msg.setDestinationEntity(39U);
    msg.op_mode = 128U;
    msg.error_count = 99U;
    msg.error_ents.assign("DQLPBEZGVJXBZDYVBHJXDVUENJUTWTFEIOPPWPQEUZOBLZQUSHGAGXPJRAAC");
    msg.maneuver_type = 9078U;
    msg.maneuver_stime = 0.8132580938493306;
    msg.maneuver_eta = 1826U;
    msg.control_loops = 2547257572U;
    msg.flags = 34U;
    msg.last_error.assign("KHHHQRJBFAILYIFFQHEHNPEBUSWVOMRDRLNYBCYQNZUSPXPSZUMVADTEALFXMKGZIXLTWHCUJTCLL");
    msg.last_error_time = 0.19946222650964895;

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
    msg.setTimeStamp(0.6659311955170447);
    msg.setSource(47237U);
    msg.setSourceEntity(47U);
    msg.setDestination(46033U);
    msg.setDestinationEntity(237U);
    msg.op_mode = 176U;
    msg.error_count = 115U;
    msg.error_ents.assign("WELWAONRLVEKHNFSHBJVFTFGXTKBVXEUYXNROVJGGKLDNCODAHJQWYVIUVDIIPMQOMBYWSCERZKYMQCQQNRKFJOENRVDDWGFKOHSJ");
    msg.maneuver_type = 28911U;
    msg.maneuver_stime = 0.10502124668441559;
    msg.maneuver_eta = 1767U;
    msg.control_loops = 3628281676U;
    msg.flags = 60U;
    msg.last_error.assign("FBKQZRARLZAYMODDINKKBHPWUEPSPTYPLVXUMJJZIDRXMCNQDQHHNTVDISOLZRROVUIONJZFHOFUVAWB");
    msg.last_error_time = 0.08937579069863555;

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
    msg.setTimeStamp(0.6225899841663048);
    msg.setSource(29045U);
    msg.setSourceEntity(185U);
    msg.setDestination(54443U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 175U;
    msg.error_count = 62U;
    msg.error_ents.assign("ZFCGEEURPEBKANDRVFSHXWNQWYTCZVOMOKBRNTPFRHZCZMQASVDIQRIOGGVCBPMMNZAEOUHLIUXNJZYASDYADTOHFXDJBPGXCWHKSLJHZIRTVWQTXHUYXAUJTQWHPAHQFEWESNAJTCLSLBNGLFOKNREUVWEYIMBVDLKICPZADKOYKJRCYMOWOKNDGSGGJTBLYCJSBALYMIQJRPVSIMXBWP");
    msg.maneuver_type = 39314U;
    msg.maneuver_stime = 0.5721854164323465;
    msg.maneuver_eta = 62789U;
    msg.control_loops = 2963050521U;
    msg.flags = 63U;
    msg.last_error.assign("WRHPWWTVXLIVQVCLBDARVSVCEULYUZMXTJDCDHWAZCHEITOZTOTAGFHKCYIRYKNQYSVCUNXDUKDAXHLNTHLJTG");
    msg.last_error_time = 0.857615940122436;

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
    msg.setTimeStamp(0.4876252073516406);
    msg.setSource(59035U);
    msg.setSourceEntity(114U);
    msg.setDestination(50369U);
    msg.setDestinationEntity(22U);
    msg.type = 232U;
    msg.request_id = 11037U;
    msg.command = 127U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 14165U;
    tmp_msg_0.lat = 0.10226278553040857;
    tmp_msg_0.lon = 0.47631639621257604;
    tmp_msg_0.z = 0.627294963237111;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.speed = 0.6328314868428736;
    tmp_msg_0.speed_units = 120U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7287184154111482;
    tmp_tmp_msg_0_0.y = 0.13028050845066064;
    tmp_tmp_msg_0_0.z = 0.511748472465844;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("WBCKIGKJZMXTV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42069U;
    msg.info.assign("IWGKVQDNNSIKRGIVSYTXAMJSHRUMTTLTTEAGEVZQBEQBJJ");

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
    msg.setTimeStamp(0.7563067933104133);
    msg.setSource(56058U);
    msg.setSourceEntity(44U);
    msg.setDestination(34004U);
    msg.setDestinationEntity(250U);
    msg.type = 162U;
    msg.request_id = 12167U;
    msg.command = 62U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 25635U;
    tmp_msg_0.name.assign("RFWKFMAXHRWSRPROIXAFKGGUJPEYCBFCCGXEYAPOLDZTUMJOWFPZIUVHYFTSYFGWUKVIAWHVCGJKDETQQRPWQACDDIXGPDESNIVVSVCFPGNLOOPJQKYBFXXQJUZTEUOBMMVUSKAKHIBHCEIWDYIDJEDKTTRRLTJSZUZCNVMZQZGNDSJYBSUNCNCPIQSNZP");
    tmp_msg_0.custom.assign("SDEFQYDZBTKLRLIIVZWDYSJXXJCOFTEKSQMPGHLEKDCNXQQFCLDGXEOFTLWHFGDEPBOQIWYNXMHKXNINGMHJPMBEIEZSSDONYRVACDKSUCFCGGOHZLHCYATPAPUIVVRCXQJSPKAYBEGSRLHOPZBUZTSROZMAOUBIENNQWIXYRBJJJHEDRPPZIMUFOYFWVWDYKGMFQUUURKVRWWVJAN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57011U;
    msg.info.assign("JNNVJNUOYBIWXDDEFZCRNXQCPVXKMTQSREKKQYWEQCUETEJQRGPKYZOLFVAFESIRLHMMWIJBIZLXFORAZMCDHGTCG");

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
    msg.setTimeStamp(0.6950736577851963);
    msg.setSource(24849U);
    msg.setSourceEntity(134U);
    msg.setDestination(28487U);
    msg.setDestinationEntity(155U);
    msg.type = 77U;
    msg.request_id = 33799U;
    msg.command = 152U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.31483073398804473;
    tmp_msg_0.lon = 0.21257724496292651;
    tmp_msg_0.z = 0.8986115938357189;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.5632991820845273;
    tmp_msg_0.speed_units = 115U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 25020U;
    tmp_tmp_msg_0_0.off_x = 0.9769733178775027;
    tmp_tmp_msg_0_0.off_y = 0.8154126739706965;
    tmp_tmp_msg_0_0.off_z = 0.03146722991799211;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.6043430154562104;
    tmp_msg_0.custom.assign("UHJTHRBROSWZSDPBBQCGBDUARDILOXUUGYPUVAILNMFKHRRQWJHRYQARSFXPMZPJZCXJEWTLFOJMWQQECZGGUELUNKEKASKBJCEZUPVTOXDMGWYZPGENNADQDDIPYVJGDENYXWOFSQUZVHNNPNTAYBITFKCF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63056U;
    msg.info.assign("BCDQPHJWAJOAEAVTRDQDBXLUENRNFXWUCCAMSYHCBGFKVRHUVFSJLOUEZUORTYNDYVSZGPIWKEZOGMPRCXMQYLIGKDZZGYAQBQTTIIXALAMKLBEEHVPTDAJQVWNOKEGJLJPUTLKIZJXISHLQTMVRRSMBLHQOFCJBFTNKZPPUKWUWBLSNEBEMBVFGXYHQWRIUTXWYCYANISQXMGHIFFNKONCJHSMWDZUYSTPORMCSPDKDFNG");

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
    msg.setTimeStamp(0.7877051108748443);
    msg.setSource(27325U);
    msg.setSourceEntity(183U);
    msg.setDestination(48430U);
    msg.setDestinationEntity(46U);
    msg.command = 76U;
    msg.entities.assign("ZXAGRCNFLADBQVTQIKIOTSHLEZDVIZOESDHMQUYRREBGHNWRWPMBLJQBFRICPUQGGFDXMTMJVGFZWLQOWIOUGMTRVDINEDSIXXNUWYZHFJNHAWAEJRQCJLMOFGXAWTOPAAIEGQJYNYXNTUPXEICYRTHFEZB");

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
    msg.setTimeStamp(0.024454858718464756);
    msg.setSource(54424U);
    msg.setSourceEntity(240U);
    msg.setDestination(40761U);
    msg.setDestinationEntity(126U);
    msg.command = 131U;
    msg.entities.assign("NHOXGSHJOKFBTUMGHSXCPVTOOEVYNIACWWJTCZALLBUBPCRWYSGBZDRCLKIYREGFPRVUYEPCDAWZQMJNLDPHQNDAVSTGSARCOYOYCBNPEQMIZUTLLHWKVRVIDGWUHXERYXZFODXBWSWULPSHZYBDQRQGBOXNSGNMMJKHXGFKIMXBVJJVQEDZJAMQAKHUV");

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
    msg.setTimeStamp(0.21344458747498152);
    msg.setSource(3662U);
    msg.setSourceEntity(26U);
    msg.setDestination(29397U);
    msg.setDestinationEntity(30U);
    msg.command = 79U;
    msg.entities.assign("LWDBINPVASAIQJYWPCSGUUSQHBARDDZESMPBJJCFKCKIERE");

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
    msg.setTimeStamp(0.3121075726682192);
    msg.setSource(27426U);
    msg.setSourceEntity(30U);
    msg.setDestination(60383U);
    msg.setDestinationEntity(108U);
    msg.mcount = 17U;
    msg.mnames.assign("OJYXSELIJCPOTDAKWGFJOEMICIYXGMOYKFZEINCTIQQDUIAFZZEVVGBGKSQXALMNWYHMLUMZOLCOGUMQBHWWFMVWLSOGSVGKHWJRPXYXJYUBRPBLTUGNIPZFCRADNXRBNQLBDJMHE");
    msg.ecount = 228U;
    msg.enames.assign("STQOLJYZGYAOLSMNGOQKTJDONEKSBURDEPTEGCQAKYFWFDQFKGAOHYIJFNYEMWQUAJCENXLSZVCCDFQYVLJCIEJCSPJYPPXNERVFNG");
    msg.ccount = 20U;
    msg.cnames.assign("RSOPSWOECFLQJPYIJWQWACFRJOVOPIJRPRXJNKIPVNRTEMXUYTZCEKMUTUNNZNESIMQMWTYSHQFHDEVFTQRVAEDCZPXMJMODXVFGOBNGZGTVXRGPJWUUROKYJZTDFGZVILAAWOSPBZIWYIYLMLQBHUBKGXKEJCLIBIRHBCEUHQDAEBED");
    msg.last_error.assign("VTODDKZARFQRLEBTJOLSDKDLVJSNECJFTCNSWPNSAOVXPHPCHKQVYRAWJOYITPXIJOARRUCMYYGJBIORHHWXRAZBQUQMEKTBYMXFKMGDWARVNZVUSCAIIASSVUDVELYPBWIOZOWFDCNPQWZQKMZNQLTMTTMFGDXBYBYEGSTAQYZFUXHXHEUJJQMNCUHHWKLLQWDPFTSEFFRNJLPEGOPEFGSUKZVANXC");
    msg.last_error_time = 0.09711975437834863;

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
    msg.setTimeStamp(0.8765677820756875);
    msg.setSource(23224U);
    msg.setSourceEntity(20U);
    msg.setDestination(38539U);
    msg.setDestinationEntity(145U);
    msg.mcount = 151U;
    msg.mnames.assign("QHOLNXHTCASJKHLXZGSO");
    msg.ecount = 176U;
    msg.enames.assign("TJZSBCTJBZIKULSLCRVCEEVQNGWFNTUNJNDFYTRGKZWANAMNOPIPLQGWDQRKHMEOOTTBFXWANGASCEEWSLWNDTUXJWJDZAHFCSSPHJEBUVMP");
    msg.ccount = 22U;
    msg.cnames.assign("YSWVCDVJRHKZJIPCWGLJUSTEAWYRCEGBEQNTDSPZMCTNTAVFJNNOEDCQK");
    msg.last_error.assign("YAOPZTQXSHNJNXILOIEMKBUYOEVJEFXISADRHIOUUJQHMTKECHHLWNAFVTHNQNMFATLBSESXMUQUWNGKOZKPWAEDZYTUQJWDPDDPIGNIOKPZCTLCTMVUIWJVGBRVEDFDCXMAJ");
    msg.last_error_time = 0.7081406871502313;

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
    msg.setTimeStamp(0.23649335634290558);
    msg.setSource(28905U);
    msg.setSourceEntity(132U);
    msg.setDestination(37446U);
    msg.setDestinationEntity(210U);
    msg.mcount = 163U;
    msg.mnames.assign("AWINKCQSHRRSAMRLYJCYVYYCXHZULOJHUHBDTIIFHERPZPCEIQOF");
    msg.ecount = 122U;
    msg.enames.assign("TVQLVNFSMJPXTXCMTFJCRISPAWBHULAWIGPLHFEWXAZGEKQXFMXXQPKYGELLCMJSVGCLSSRMBNWWBADIKMFYHMZRGTCIPZWNPYPSPGZBKDJRNOEEJTACKQAZCILFNOASOWDDVESUWDIIUYOCANQXAKUQBRDQEGZQRYUXSHOBJDFNZGVEHRYBORLZNKFO");
    msg.ccount = 15U;
    msg.cnames.assign("ZQFRHCXMAMSLCHAGUWWPHRDNPIVOUXGFZVFDGRNGJ");
    msg.last_error.assign("RUFHNUUJRIYBKRNXLITZFUFLKGKCLXMMPVSZQPJMOOHEXYFEEHGTERMCODIBMXCBJENRPOFUEIBAQIFHTPQASXMDTASRGVRDZLKSSYBQDUTEJVQSWUDYZWJWVKWLZQMKACBTPEYHTXJGJHDOFWOCHCYGPIHAY");
    msg.last_error_time = 0.5718467849643265;

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
    msg.setTimeStamp(0.9049869622038635);
    msg.setSource(57605U);
    msg.setSourceEntity(152U);
    msg.setDestination(53408U);
    msg.setDestinationEntity(129U);
    msg.mask = 6U;
    msg.max_depth = 0.6610762752767061;
    msg.min_altitude = 0.27295737379799534;
    msg.max_altitude = 0.7501770789270819;
    msg.min_speed = 0.2701023238938549;
    msg.max_speed = 0.5808157450950694;
    msg.max_vrate = 0.69214086768729;
    msg.lat = 0.4131079139066345;
    msg.lon = 0.11537872015241046;
    msg.orientation = 0.5098990827340332;
    msg.width = 0.3495127593247326;
    msg.length = 0.5366723703698966;

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
    msg.setTimeStamp(0.43846902921294284);
    msg.setSource(28287U);
    msg.setSourceEntity(128U);
    msg.setDestination(12679U);
    msg.setDestinationEntity(64U);
    msg.mask = 82U;
    msg.max_depth = 0.9758149609118868;
    msg.min_altitude = 0.8250963272132955;
    msg.max_altitude = 0.6364896707360675;
    msg.min_speed = 0.7774376762166578;
    msg.max_speed = 0.38814262201810046;
    msg.max_vrate = 0.2835959712241244;
    msg.lat = 0.47355279357578794;
    msg.lon = 0.2446968956810326;
    msg.orientation = 0.5888111817985632;
    msg.width = 0.0629433782117147;
    msg.length = 0.08836387594343931;

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
    msg.setTimeStamp(0.47928507154212796);
    msg.setSource(13375U);
    msg.setSourceEntity(148U);
    msg.setDestination(59938U);
    msg.setDestinationEntity(178U);
    msg.mask = 14U;
    msg.max_depth = 0.9725878364506264;
    msg.min_altitude = 0.5998463987335196;
    msg.max_altitude = 0.42086107535710626;
    msg.min_speed = 0.05858368864293051;
    msg.max_speed = 0.8677600337668286;
    msg.max_vrate = 0.8402440925566527;
    msg.lat = 0.5343226203004631;
    msg.lon = 0.1152107417956525;
    msg.orientation = 0.6372429805041364;
    msg.width = 0.751800012190114;
    msg.length = 0.7696247932892281;

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
    msg.setTimeStamp(0.6769378210044443);
    msg.setSource(24475U);
    msg.setSourceEntity(81U);
    msg.setDestination(54856U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.38073770440953736);
    msg.setSource(49004U);
    msg.setSourceEntity(66U);
    msg.setDestination(50648U);
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
    msg.setTimeStamp(0.578023099900183);
    msg.setSource(12362U);
    msg.setSourceEntity(82U);
    msg.setDestination(33314U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.7629357042669902);
    msg.setSource(31647U);
    msg.setSourceEntity(162U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(35U);
    msg.duration = 12743U;

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
    msg.setTimeStamp(0.1259202963829794);
    msg.setSource(14775U);
    msg.setSourceEntity(14U);
    msg.setDestination(26885U);
    msg.setDestinationEntity(12U);
    msg.duration = 64924U;

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
    msg.setTimeStamp(0.8932621743354342);
    msg.setSource(33415U);
    msg.setSourceEntity(90U);
    msg.setDestination(18426U);
    msg.setDestinationEntity(134U);
    msg.duration = 56578U;

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
    msg.setTimeStamp(0.9592255445753256);
    msg.setSource(16020U);
    msg.setSourceEntity(215U);
    msg.setDestination(43879U);
    msg.setDestinationEntity(175U);
    msg.enable = 21U;
    msg.mask = 2278628108U;
    msg.scope_ref = 3966650781U;

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
    msg.setTimeStamp(0.9927623082956619);
    msg.setSource(35485U);
    msg.setSourceEntity(172U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(52U);
    msg.enable = 167U;
    msg.mask = 673816014U;
    msg.scope_ref = 2977108432U;

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
    msg.setTimeStamp(0.0025123009964594933);
    msg.setSource(49970U);
    msg.setSourceEntity(140U);
    msg.setDestination(34459U);
    msg.setDestinationEntity(37U);
    msg.enable = 96U;
    msg.mask = 442531518U;
    msg.scope_ref = 2049852939U;

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
    msg.setTimeStamp(0.16097542102598505);
    msg.setSource(22553U);
    msg.setSourceEntity(55U);
    msg.setDestination(14878U);
    msg.setDestinationEntity(60U);
    msg.medium = 82U;

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
    msg.setTimeStamp(0.6903440353556767);
    msg.setSource(17094U);
    msg.setSourceEntity(185U);
    msg.setDestination(57653U);
    msg.setDestinationEntity(188U);
    msg.medium = 19U;

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
    msg.setTimeStamp(0.25531764796027645);
    msg.setSource(45224U);
    msg.setSourceEntity(34U);
    msg.setDestination(236U);
    msg.setDestinationEntity(116U);
    msg.medium = 75U;

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
    msg.setTimeStamp(0.7113394968148289);
    msg.setSource(57940U);
    msg.setSourceEntity(4U);
    msg.setDestination(861U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5034437009058516;
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
    msg.setTimeStamp(0.3714703924440329);
    msg.setSource(30313U);
    msg.setSourceEntity(93U);
    msg.setDestination(9653U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7834438784366587;
    msg.type = 200U;

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
    msg.setTimeStamp(0.8585425323191059);
    msg.setSource(10788U);
    msg.setSourceEntity(229U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8021267866156566;
    msg.type = 70U;

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
    msg.setTimeStamp(0.9654695340796875);
    msg.setSource(9342U);
    msg.setSourceEntity(237U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(103U);
    msg.possimerr = 0.7701402468708972;
    msg.converg = 0.9852737570107638;
    msg.turbulence = 0.17445207739482393;
    msg.possimmon = 146U;
    msg.commmon = 138U;
    msg.convergmon = 41U;

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
    msg.setTimeStamp(0.5783202169750472);
    msg.setSource(9498U);
    msg.setSourceEntity(217U);
    msg.setDestination(61479U);
    msg.setDestinationEntity(50U);
    msg.possimerr = 0.3796947220277396;
    msg.converg = 0.18712529942321654;
    msg.turbulence = 0.35315338165853594;
    msg.possimmon = 91U;
    msg.commmon = 246U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.04021891748297135);
    msg.setSource(8810U);
    msg.setSourceEntity(67U);
    msg.setDestination(22251U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.9911544734730925;
    msg.converg = 0.743437263771046;
    msg.turbulence = 0.623191860182039;
    msg.possimmon = 196U;
    msg.commmon = 76U;
    msg.convergmon = 227U;

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
    msg.setTimeStamp(0.7789607955716307);
    msg.setSource(47058U);
    msg.setSourceEntity(242U);
    msg.setDestination(49703U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 127U;
    msg.mode.assign("PUIZJJJSPCXZXVCNNOPEYERVLVPLEWMULXKISBEYQGJFIXYVSATWJBSZHWQQIFNIYNTXHSHQLMCAULCPKUOWNPRHOZCMQAVFRKMQUKGAZMEYNLZSMUGHVHSGGSDBKTDUPPAVRVFFLPGGKJYDSMBTYIGCWMWWRGDQSALKMYTTZGADRLCAHNKOFEUBIONJFEBTHHBBOYNOYFNRIATKZZDCRMJZWQRBIJPWILOJTQ");

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
    msg.setTimeStamp(0.004423887721705988);
    msg.setSource(8565U);
    msg.setSourceEntity(241U);
    msg.setDestination(56416U);
    msg.setDestinationEntity(211U);
    msg.autonomy = 83U;
    msg.mode.assign("CVTZPOJIXPRNCEHASJKDORZHIZTPKAYFVRMNQQNYSPHFFQDMFOUSYFOJMMQVMWSTVWCIELWYZDPCNHCAVOJRNBYGPRGUUQBYMILXTEFYEKGZJJQDGXNQEGJNAEWWKPKMOFRTRBQ");

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
    msg.setTimeStamp(0.6738523245231689);
    msg.setSource(14899U);
    msg.setSourceEntity(39U);
    msg.setDestination(5446U);
    msg.setDestinationEntity(156U);
    msg.autonomy = 1U;
    msg.mode.assign("JVMCKEKLTWFPJQJWCSGNNYUGCTQCCOIAFAGYAARUHPVMZLPOXNKZDRGLFDYULISUXMSFJJNCGIYQLQTTMVQAXHXKWHKDKLRMWPWZRQAUXSSQKIPSJVKCPZLGHARWFRDIEMYJKLGUWXEKMZTNSZBYFBNFVODNEPHHTFZTDBNUEJIEVDGGHIBVWLAEMFZJEIUGTIQYORBZCROFAYJTXDXVWCMYXHOO");

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
    msg.setTimeStamp(0.7771384231235761);
    msg.setSource(45236U);
    msg.setSourceEntity(9U);
    msg.setDestination(56618U);
    msg.setDestinationEntity(180U);
    msg.type = 152U;
    msg.op = 93U;
    msg.possimerr = 0.7542269553539852;
    msg.converg = 0.812459225740942;
    msg.turbulence = 0.1979472580254652;
    msg.possimmon = 49U;
    msg.commmon = 8U;
    msg.convergmon = 215U;

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
    msg.setTimeStamp(0.9523748557351116);
    msg.setSource(60130U);
    msg.setSourceEntity(96U);
    msg.setDestination(33430U);
    msg.setDestinationEntity(19U);
    msg.type = 103U;
    msg.op = 124U;
    msg.possimerr = 0.5811594557218063;
    msg.converg = 0.9283071293863948;
    msg.turbulence = 0.40147729147152766;
    msg.possimmon = 246U;
    msg.commmon = 20U;
    msg.convergmon = 131U;

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
    msg.setTimeStamp(0.5868904027141799);
    msg.setSource(6606U);
    msg.setSourceEntity(12U);
    msg.setDestination(21339U);
    msg.setDestinationEntity(40U);
    msg.type = 47U;
    msg.op = 59U;
    msg.possimerr = 0.961232195508306;
    msg.converg = 0.9240747003730444;
    msg.turbulence = 0.8524269267660678;
    msg.possimmon = 240U;
    msg.commmon = 215U;
    msg.convergmon = 165U;

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
    msg.setTimeStamp(0.912734019566918);
    msg.setSource(11883U);
    msg.setSourceEntity(121U);
    msg.setDestination(48517U);
    msg.setDestinationEntity(201U);
    msg.op = 172U;
    msg.comm_interface = 61U;
    msg.period = 46402U;
    msg.sys_dst.assign("GSOBPTZUTNHFDBWHODWUOVCRKDZKCBAAGMZDJWCNEGVKKLVSASOANRPFRQQMJZINENPMXWWNTFSBKZCFBTNUEAEUJKAXPGZYOPBMCHERKMJAEOFBJNTVO");

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
    msg.setTimeStamp(0.8528307521748075);
    msg.setSource(12836U);
    msg.setSourceEntity(72U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(152U);
    msg.op = 186U;
    msg.comm_interface = 164U;
    msg.period = 22255U;
    msg.sys_dst.assign("ZNFLPYJNHCVZNTNNUNJXRVKHRHTYSGKGBELYIGFEIPQHVNYKNCBZSKWMUJHPQGEMIWPCZGPTTWULOWQXDIQCFUMRHEDMAKQFQLYGXBYMMXO");

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
    msg.setTimeStamp(0.9019834787000007);
    msg.setSource(19258U);
    msg.setSourceEntity(206U);
    msg.setDestination(47210U);
    msg.setDestinationEntity(129U);
    msg.op = 150U;
    msg.comm_interface = 138U;
    msg.period = 38935U;
    msg.sys_dst.assign("SXUCJZKFBZANIPEPZORYXWYZNAPOVADNAXKKWGGLMCDAAFITIJQNMBFPOXYJFZHYJRBPTWGRVMOVJLPMSEGQNURVOLTTPGCKQFSIGKOLSTWXHEFZGPBIVAHWBXEONPBDWFCLUSFOA");

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
    msg.setTimeStamp(0.31542597555806295);
    msg.setSource(51525U);
    msg.setSourceEntity(252U);
    msg.setDestination(33894U);
    msg.setDestinationEntity(150U);
    msg.stime = 1441192595U;
    msg.latitude = 0.5979983918122528;
    msg.longitude = 0.026816656839272923;
    msg.altitude = 16178U;
    msg.depth = 5178U;
    msg.heading = 60509U;
    msg.speed = -13543;
    msg.fuel = -102;
    msg.exec_state = -47;
    msg.plan_checksum = 39705U;

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
    msg.setTimeStamp(0.6033918910198287);
    msg.setSource(16981U);
    msg.setSourceEntity(183U);
    msg.setDestination(57347U);
    msg.setDestinationEntity(243U);
    msg.stime = 3517977416U;
    msg.latitude = 0.46206608274034533;
    msg.longitude = 0.4696444635342698;
    msg.altitude = 30686U;
    msg.depth = 4619U;
    msg.heading = 21176U;
    msg.speed = -26664;
    msg.fuel = -121;
    msg.exec_state = -38;
    msg.plan_checksum = 21198U;

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
    msg.setTimeStamp(0.749011220718501);
    msg.setSource(25957U);
    msg.setSourceEntity(31U);
    msg.setDestination(63753U);
    msg.setDestinationEntity(215U);
    msg.stime = 4280249178U;
    msg.latitude = 0.5449144582137803;
    msg.longitude = 0.40996272487808094;
    msg.altitude = 44119U;
    msg.depth = 46731U;
    msg.heading = 22871U;
    msg.speed = -2036;
    msg.fuel = 47;
    msg.exec_state = 56;
    msg.plan_checksum = 29791U;

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
    msg.setTimeStamp(0.23720085866414997);
    msg.setSource(40222U);
    msg.setSourceEntity(230U);
    msg.setDestination(24357U);
    msg.setDestinationEntity(158U);
    msg.req_id = 28507U;
    msg.comm_mean = 214U;
    msg.destination.assign("YSBIHNQRTCAOUAOMVWCVNVBXTOHPOMEJNNFJPKJDAZJAQTQAECZDTOFFPZTZIUVVSAGTZRYHOYLEGFUVFEXYJUHLJFWBXUHIIBYLAMTUERCDTGUAQ");
    msg.deadline = 0.16484877460559355;
    msg.range = 0.22497022923565757;
    msg.data_mode = 36U;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("FNTYVUTNUVMWOCIRPMTRFLGYBXILXRTIODEDRQQNXLRFIRAGQPTSQJPJACODCIMNSSAZHFICLEBUISAKJVNDULSFOMIMVYSFFHQOTDEDBCCRXUHLICKAFZXNFOKQHIYTWXL");
    tmp_msg_0.value = 195U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RWYISTNNFGBDPYLTXQGOVSLSNTSVTWSFMDVFHHUJCUKBRLCZCBGSUXY");
    const char tmp_msg_1[] = {-127, 38, 61, -125, 31, 123, -47, 70, 9, -38, -90, -74, 3, -101, -35, -124, 84, -4, -61, -24, -99, 103, 124, 7, 78, 79, 108, -64, -6, 104, 118, -99, 85, 36, 58, -84, -112, -17, -32, -127, 1, -87, -15, 65, 14, -119, 36, -8, 69, 79, -110, 33, 18, -90, 3, 117, 77, -96, -41, -7, -40, 86, -101, 71, 13, -82, 32, 90, -115, 89, -105, 68, -96, -33, 71, 108, -70, 71, 65, -74, 5, 70, 39, 88, -65, -105, -46, -31, -78, 28, -18, -105, -54, 108, -92, 14, -52, -106, -110, -121, -84, -67, -16, 103, -85, 47, -128, -69, 106, -57, 105, -122, 73, -70, 86, 1, -39, 64, 122, -65, -59, 0, -64, -7, -73, 51, 47, 85, -3, -111, 104, -65, 32, 53, -52, 26, 89, -71, 99, -100, -74, 73, -98, -106, -7, 54, -30, 83, -98, 124, -42, -110, -5, -91, -101, -32, 52, 111, -57, 73, -18, -64, 66, 50, -15, 55, -114, 34, 77, -8, 41, -95, 38, -105, -28, -119, 111, -99, 31, -85, 8, 79, -69, 59, 109, 87, -63, -65, 113, 64, 76, 66, -124, -118, 29, -100, 8, 92, -29, -72, -92, -100, 78, -54, -12, 30, -22, -100, 71, -23, -45, -108, -93, -35, 28, -27, 75, -121, 41, 110, 73, 6, 17, -44, -40, -41, -38, -126, 19, 35, 118, 83, -125, 112, -77, 62, -17, 117, 95, 73, -65, -54, -126, 57, -20, 24, 58, 25, -113};
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
    msg.setTimeStamp(0.6273830991868818);
    msg.setSource(30010U);
    msg.setSourceEntity(63U);
    msg.setDestination(54383U);
    msg.setDestinationEntity(234U);
    msg.req_id = 18516U;
    msg.comm_mean = 214U;
    msg.destination.assign("GJACVAISDVDQJWNZRLLGQBKTWTEDRRMBGQKTNHUXUPRQOPRWFCKVXQCCJCIISZCVIUZASXGOYHISUYIWPFXPTVTDPGHBMOVELMPOHFGZYWBAKTJBQZUFWOWKIXUZREJYKKMMKYUMYOMTQXUQCZDVZNNVBELLDFLXPPSBPHWNUEAJRGSCKHSYAAJXBYEDCLFIAAHWOSMR");
    msg.deadline = 0.6103885769374966;
    msg.range = 0.22377803293141252;
    msg.data_mode = 188U;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 54881U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CZBQUATZXLTEJAVQBDCWFCXOASR");
    const char tmp_msg_1[] = {117, -56, -93, 4, 115, -109, 95, -68, 84, 82, -111, 44, -19, -61, -80, 56, -3, -50, -73, -22, 22, 73, -70, -42, -91, -48, -2, -115, 103, 114, 40, 105, -58, -109, -97, 101, -15, -43, -80, 106, -16, 71, -116, -125, 51, 32, -49, 10, 28, -83, -111, 91, 2, -33, 70, -57, -98, 6, -113, 51, -102, 43, 112, 63, -7, -83, 79, -1, 16, -14, 78, 55, 111, -87, 90, -84, -111, -88, -11, -17, 88, 37, -60, -106, -91, -113, 73, 113, -54, -40, 66, -11, 18, 64, 105, -56, -43, 89, -81, 59, 16, -120, -11, -42, -100, -104, -15, -84, 50, -98, -122, 96, -122, -87, 94, 106, 126, -88, -4, 109, -3, -74, 93, 71, 49, -110, -63, 91, 58, 52, 1, 12, -87, 34, -81, -30, -100, -82, 16, 116, -122, -109, 71, -18, -16, -76, -117, -70, 36, -126, -107, 108, -30, 102, 18, 45, -61, -64, -48, -16, -33, 124, -99, -18, 28, -99, -29, 59, 17, -24, -45, 2, -31, -119, 28, -115, 55, 19, 58, 10, -54, 119, -60, 38, 98, 74, -116, 17, 57, 4, -105, 101, 116, -46, 73, 40, 68, 75, -32, 20, 6, -93, -115, -41, -79, 69, 8, 49, -48, -16, 24, 32, 58, -115, 91, 2, 31, -116, -33, -15, -5, -91, 101, 48, -109, 33, -39, 113, 105, 90, -115, -124, -35, -109, -31, -47, -21, 73, 42, 31, -27, 32, 93, -71, -90, -1, -77, -33, 53, -104, 19, 56, 11};
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
    msg.setTimeStamp(0.6016596581085761);
    msg.setSource(54811U);
    msg.setSourceEntity(75U);
    msg.setDestination(48795U);
    msg.setDestinationEntity(145U);
    msg.req_id = 21283U;
    msg.comm_mean = 251U;
    msg.destination.assign("JUDQTMDEHKJMWZOOQ");
    msg.deadline = 0.6652752590777384;
    msg.range = 0.7731001109954048;
    msg.data_mode = 169U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 53877U;
    tmp_msg_0.status = 128U;
    tmp_msg_0.text.assign("JSWWHLELPJEJWLPYDTOQFFIXMMXOIAKBUGIQINZHQFEXGDSVPAFDLJRRHOLSIAUDZKRVTQVGCZRMHNXJTNCKZDRYCGXHCFXFGKTDUWQEHDPMYSAOIXBOPUPVTFCZVZXTWSRNUCYYYWIBTOQDEBGXSCHPZKGESLJRHNZYTGQPFMNVNRNUFOVUHMBVABJIANJAZRORDQWUJCLKVGIPOEYYLMANKJBYMBUCCQESWVL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JNOOVEWSUDIUTROTDCCWLKXVWNAUPJDSBIIGSSDIU");
    const char tmp_msg_1[] = {-116, -11, -98, -73, -68, 46, 28, 111, 113, -29, 125, -111, -13, 123, 46, 31, 58, 99, -5, 14, 53, 6, 109, -31, -29, 31, -35, -17, -1, -13, -50, 113, 114};
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
    msg.setTimeStamp(0.21372145467271175);
    msg.setSource(35735U);
    msg.setSourceEntity(249U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(190U);
    msg.req_id = 64880U;
    msg.status = 207U;
    msg.range = 0.2229611930078671;
    msg.info.assign("CHRHTEZBGLJNBHKOINYSXKKDBZLXGJZINPFYHZTRMYHSSYKSHJKGHMPWGEIZAQMMUHLMMTOXLBOGQMADXCMKSDQQTVTCSBUUFWTKSWFCPIWVWLLIPUCIAMWRODGFEDZLYFETBEGWGN");

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
    msg.setTimeStamp(0.9670145583019855);
    msg.setSource(10671U);
    msg.setSourceEntity(233U);
    msg.setDestination(13494U);
    msg.setDestinationEntity(7U);
    msg.req_id = 25404U;
    msg.status = 229U;
    msg.range = 0.14138125316922534;
    msg.info.assign("JZMYUTHXUARWOOEEDUVMNUYUDPILSXVXADEMVJIRWXEUYPQBMKHQYEBKWVQGNGDIFFZBYRAPTNJHZZCBIIQJPKSPGKSDMZCXWYCLIBWTAEWZLBORRKIOMAXNVDSIADXWFJGFZEQGSYUUVDFSPFBLHJQBMUMOKAGFNXBKWOJROWZYTALPSOYJNNZTVCQTFJTREFCAVRQVN");

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
    msg.setTimeStamp(0.3105413873020191);
    msg.setSource(27711U);
    msg.setSourceEntity(171U);
    msg.setDestination(35166U);
    msg.setDestinationEntity(29U);
    msg.req_id = 61518U;
    msg.status = 178U;
    msg.range = 0.594319733050073;
    msg.info.assign("ESTCFWLQWWXTOYDBEJMVJQTKUPCXQBKVUPKRGTDGSULAXGDENKZBADJXBCUSLHGFPEZFRTUKOVWJLWMBERISMYMQEGHGXODUUNAOSBAPSMMAHTVVTYYPYPOMMHIZDETCJHKHBNQTPISJDOKHJKQRNOEARCRCKXIZBQDNDAFRKWLQXWUGYZOXLYRMOCRVVPARZSJVDWWNQSZLBWNEBFLILNFMHPLCYFYXZYIEGCUFNQUFAJGZIITNJGHFVCIHIZ");

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
    msg.setTimeStamp(0.3550528823736173);
    msg.setSource(51963U);
    msg.setSourceEntity(29U);
    msg.setDestination(56398U);
    msg.setDestinationEntity(254U);
    msg.req_id = 65334U;
    msg.destination.assign("GWHIRQVXNQBVNDROUWHMGTGLTPEJPBFTVVUZLBTFRGCYTKPFXTZJSNDOBLVJFGTKAMPRJCZURNESPDSTOODOJMDRPGFBPJLYZOIEAXXOZAEE");
    msg.timeout = 0.9332940456102916;
    msg.sms_text.assign("MLSKJZSNDGXYUIOZZIGHVLGQVOIAHYZQIRTJQMQLKUOTWVKWOJNMPUBASPJAEICAMQHGRXEAXLDSAZSKKDMEYFLEEIOVTLNWCJCKYQMLRXSRCGNKDGEBABBOFHCDRPOVEPSZVFTBRYFFMYQXKVATEZVRWSQWBJAFCUYHUWNNPZIJPRLHTWXMPJGTFEUYFPGNKROVXHNJHVTXCBWHOZWBYQMCLXPTFGJBCNIKUZEUI");

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
    msg.setTimeStamp(0.3422421742388271);
    msg.setSource(28379U);
    msg.setSourceEntity(21U);
    msg.setDestination(49983U);
    msg.setDestinationEntity(170U);
    msg.req_id = 12054U;
    msg.destination.assign("ONWAMBFRGLJIUSOIYPZXPAYNZDRFDPCHQJ");
    msg.timeout = 0.7345858467806408;
    msg.sms_text.assign("HNDBDRMQWZSXIVZSMRUODPCSSWWLPWKRNYVODIHAZLFVJIIEBAENOOMDCMRKNGZUZHZLVJPUAKSOLBEFRNPHJJWJCEHGPYNQCFEZOMGBKTRSRMIRDXZYVOLVFGYDJPNLQTMB");

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
    msg.setTimeStamp(0.2375597381190293);
    msg.setSource(23726U);
    msg.setSourceEntity(203U);
    msg.setDestination(37391U);
    msg.setDestinationEntity(51U);
    msg.req_id = 8408U;
    msg.destination.assign("WSJRJEZLDJYXQSVIYNJLRMPOTUKRDBQEAEXNHSXEGFSUPQOMZJDKCARWLECAQHHBFVGUVBMHYSNYXJXGXRUDADZIZIUTTBCOPOKSYFMHYWNFTLLKRMINBDTFTUXMTIAYKCRLCNKKHORJCQSVRDYPOMVANRZVXB");
    msg.timeout = 0.03259458783851743;
    msg.sms_text.assign("CDNJVYLIBNLZRJDGJTRIILHKVWTALKBSEBTPFHRGZWBPDFYOYIZPBKRYUSVTQUUXQEQGOZJRSJUIJHGWDGARTFXXZCLAMQGAPPTULKSUPPGWEHACCMNFCRDWJSIZEFQVVMOIZGWQZKMHFMXXWOWMLHSOIUMKPHQBQDQTIFYSAYBCONOJWUVEXXNTKEUNJPZOCNELHOYVCX");

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
    msg.setTimeStamp(0.6118142748419063);
    msg.setSource(14668U);
    msg.setSourceEntity(218U);
    msg.setDestination(17591U);
    msg.setDestinationEntity(1U);
    msg.req_id = 40700U;
    msg.status = 105U;
    msg.info.assign("EYWPBFOQKUQNTFBTGYQHYWLBCEEERIFKWIKJJZVIZNRFAXXWQNIBGMQLHQHZJHUZQU");

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
    msg.setTimeStamp(0.6888845097285036);
    msg.setSource(45981U);
    msg.setSourceEntity(217U);
    msg.setDestination(12898U);
    msg.setDestinationEntity(240U);
    msg.req_id = 36986U;
    msg.status = 165U;
    msg.info.assign("SQDQUQQFGULAKTOGWKUYBLWQRWVQXZOEVGEEBYREIIQQVMQXACXSJFRRODSXHBJVPRNHLRSNSABAMCKMONHDMPAKGQFYZMHTUCTUXPALPJZRSGWNFRYPSFANNTIHYCKTDVYWHJCLTLIBMGMKYPAZCLVEGTJJOUDOFEDBZRJAZXMULDJHEFBSNFIHNTPJGKWBEXZIXINLVOCVZSMKUOCSZWRPIUFMCXWPWITXYAOPYBHDHCULWKDNVKFEYEBIT");

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
    msg.setTimeStamp(0.40495281560883056);
    msg.setSource(52920U);
    msg.setSourceEntity(179U);
    msg.setDestination(60838U);
    msg.setDestinationEntity(74U);
    msg.req_id = 64335U;
    msg.status = 34U;
    msg.info.assign("MSVBDNZPYRDVKOJBTQRAFJOEYQTZNJTOVPXKRYPEKIOPEWHXSZNTJLLSMRBCUJFWYHBWQUBOBMQMPNZQKPKCNHXMHHRTHLUDNWRXBMXQYUOMIXOBINGLAAKZWYDEDIGCUQWIWVXDYYUFLEGGDAEEHGGILPSSJVDKEQLJFPILN");

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
    msg.setTimeStamp(0.013571782250208608);
    msg.setSource(1891U);
    msg.setSourceEntity(123U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(164U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.3276259386050102);
    msg.setSource(16805U);
    msg.setSourceEntity(171U);
    msg.setDestination(52218U);
    msg.setDestinationEntity(97U);
    msg.state = 139U;

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
    msg.setTimeStamp(0.13938601281271923);
    msg.setSource(4765U);
    msg.setSourceEntity(140U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(34U);
    msg.state = 140U;

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
    msg.setTimeStamp(0.7323596452013444);
    msg.setSource(14390U);
    msg.setSourceEntity(80U);
    msg.setDestination(62664U);
    msg.setDestinationEntity(131U);
    msg.state = 127U;

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
    msg.setTimeStamp(0.6683825048595367);
    msg.setSource(57538U);
    msg.setSourceEntity(253U);
    msg.setDestination(24323U);
    msg.setDestinationEntity(5U);
    msg.state = 120U;

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
    msg.setTimeStamp(0.4173290433407266);
    msg.setSource(44795U);
    msg.setSourceEntity(224U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(66U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.17136767488870175);
    msg.setSource(55725U);
    msg.setSourceEntity(81U);
    msg.setDestination(2778U);
    msg.setDestinationEntity(54U);
    msg.req_id = 654U;
    msg.destination.assign("VGOEJQNZNOCZYIVQVNXLHVVHMUQYPLKWFPVJSVBMSARNINDTBWFYRXOZAJDWXOAJMQHNDDPKUSASLQLBPFFUGYZUDAUR");
    msg.timeout = 0.5132350491085775;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.8893110863356034);
    msg.setSource(17403U);
    msg.setSourceEntity(38U);
    msg.setDestination(48607U);
    msg.setDestinationEntity(31U);
    msg.req_id = 45002U;
    msg.destination.assign("DQBOQYZIJKYVAVQUESGKSJAWLNFINOPVFUHFZQWEOZDINDTMJAB");
    msg.timeout = 0.5075919689236359;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("IBWSTSLUOAOLWYQGSWMBKNDPDPDXSYPWUUTRGZFQNOQYAHINARMLSKPLFLXHEQEMJVTKZLQKUINZPJFFVHBBEUUHTLJPGZJAIKVAWYUZAGCGCHONEXJMMKRGVFNKKEKHPEFLDFVRFURRK");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QZBABZFQESDVTBGXXGQSGACKCIEMHHJRHJMFIRUYQVUBONEDRRUNMYNCAOJYBMTEOWPGRQIHQCSRLXTXKWNQPUVMRUWRENTJBAKPFXSKTYFGKWZWCAXZPBHPHTBELCKFFUZVPHZTPXJLIWDLZOLIYDHKXQEULFSZBELPKXSMADWNINZAFOIKNCUTYMOTVSMYEOGJFSRGPJGIJDFVSAGPYOMLYOTHBNNCUDZIEDKSWWDRWQHJAYJQCAVCXMLG");
    tmp_tmp_msg_0_0.value.assign("VQDZJCIDEYPPYWKNXWUXKUPEPPGDUPHGCTGBRQNXMYTOCJFKCKWOVGUFMWPAHBBQZGIMSIVKJOTAJDGZLFSOJIOZHFFODCVEJRHQZXSUUARTIRIELSBALOWFVDWATXGBLVWSTLAZSRTRQHUVXTUZLEHECBMYKHPSMNQLDHYBGQLN");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.013075625989843909);
    msg.setSource(8674U);
    msg.setSourceEntity(7U);
    msg.setDestination(57139U);
    msg.setDestinationEntity(8U);
    msg.req_id = 25812U;
    msg.destination.assign("QYHGRJHQWGKRORGWFJPOFQIMJDDQSXGARNBAIPHFDIFWYRXPWTQMOILYGGMDKSWLLSCSVXUHWOVJDAOZYVBKHJGVZHXUDPSWCUZHMBNYRNVLZZFNEMTOSTLUCLMPCBCBVVCUEVZRGCFHOWULNQKYJPAABTTWME");
    msg.timeout = 0.8259323884895532;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 120U;
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
    msg.setTimeStamp(0.5720896256691403);
    msg.setSource(17466U);
    msg.setSourceEntity(144U);
    msg.setDestination(19388U);
    msg.setDestinationEntity(49U);
    msg.req_id = 16165U;
    msg.status = 16U;
    msg.info.assign("AGWPRHBIAYLSQNDKUDGUBT");

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
    msg.setTimeStamp(0.9493706503849835);
    msg.setSource(64793U);
    msg.setSourceEntity(165U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(3U);
    msg.req_id = 45633U;
    msg.status = 212U;
    msg.info.assign("OIHEZCEKRZCALYRFSAEHUYDPRZGFUNHBLYTCQETUOTYUMOYWUSKBTBZZSHBASVJYCPEXCXBCBNCMLJPXJLKHNRQEODLLHTMWIHNJQVUBVSTKSWFB");

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
    msg.setTimeStamp(0.35642410580834616);
    msg.setSource(42990U);
    msg.setSourceEntity(250U);
    msg.setDestination(15185U);
    msg.setDestinationEntity(82U);
    msg.req_id = 30604U;
    msg.status = 42U;
    msg.info.assign("FRPHXEEXLYUCPZWWMQCYROUZNQZLQUNBIAEDGMELUOIGZGPFTKPYASAFZQPUWHKUXYIWHCCTPAFYENDXHPFVDLDZYJZNBILVNJPVVIICOMMTXLFJWAISQRSSHPKSYZOYZ");

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
    msg.setTimeStamp(0.8624125516795959);
    msg.setSource(35527U);
    msg.setSourceEntity(189U);
    msg.setDestination(5449U);
    msg.setDestinationEntity(240U);
    msg.name.assign("INUKENRKSTWMFQVSBWVBADYEZAKZNPAEXBMATROKIOUITWGTHFSHCQYUTIXBWGHXASTLHAWROUGRWOFMMREPVYDEOXZXEQNYYLJREVK");
    msg.report_time = 0.32669566789688;
    msg.medium = 155U;
    msg.lat = 0.8397619721498898;
    msg.lon = 0.27790488302773153;
    msg.depth = 0.06255204946974324;
    msg.alt = 0.3852713159441348;
    msg.sog = 0.7966670820749352;
    msg.cog = 0.20707047499798414;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("RQHZALFTPNBRRDABFIJVEAUMILTFXRTHAGBUYYEIJCCZMFKQBJWBYVWBGSKRWDNIZHMGUAUFSQKMQBYFOJYOPAYMFZZLJCNPHCSEYPLRDXVAIGCXIGFEHNVEOHOYIGXZGTWWCRJTVJVTMKUZZONJVKEQPTPEDLULXDMVKOONEIQUOJQDWSFVXLOKTAPGSXBUSQ");
    tmp_msg_0.predicate.assign("PCDMXFVAKQVTMIBPAZPFTIJUGAPANPAXWKDSVAFNQMBJASMQDGUJDJNWCYBVGCZMRIKUVTWATOMHMIGXCBCDSSBFNBVNLZEYURJYKHYNAKDNZRRECZKRRHCOSTEMQQHZLWYSPUSLLTGBBOIOWVWHUSLLYBKMKODIOLLGXWHXFMSEYVGNRHIYXEESNOUGQFQCUFTJEHGPXIXOOUWIDOKNZTTRQJFIAVPQRXDJZCFQUWCHPVXRLH");
    tmp_msg_0.attributes.assign("RMSSTBFODHMPIRWDLWLZLBNPULXLGZMRNYBXZDEJRCZZDVYBRVBDTFLXCXHLIVZRQSFJKZHQUAVTVTGJ");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5353797985390868);
    msg.setSource(1200U);
    msg.setSourceEntity(226U);
    msg.setDestination(27977U);
    msg.setDestinationEntity(226U);
    msg.name.assign("DVHGFSTGSJOBSNVCHWSNRKZXVIZODGUXVNTZOSHFOMHBURAZVQXUZEPPKWYYJVXEEOGENTCHIPMJQLMRYLJUNRQYSOABJPIKBOEAXXJKDKXVRFQGASIEDCLA");
    msg.report_time = 0.21169211824723377;
    msg.medium = 18U;
    msg.lat = 0.055289991315425224;
    msg.lon = 0.18897924751828288;
    msg.depth = 0.1953045081981487;
    msg.alt = 0.34565915649812073;
    msg.sog = 0.8863235050202873;
    msg.cog = 0.19063540229927323;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 647252630U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8802365773618822);
    msg.setSource(56043U);
    msg.setSourceEntity(36U);
    msg.setDestination(25513U);
    msg.setDestinationEntity(220U);
    msg.name.assign("KPNWDLKDJICCTSHNQRKPEQHVFVJQOVQJONFGSIPJEYLZYRMTSIAVYSMWAAIUUIZHPFPOUBXAAYBBREGJWOUYCXRDBUNRTSQGHO");
    msg.report_time = 0.02662122689732105;
    msg.medium = 67U;
    msg.lat = 0.04512464274461947;
    msg.lon = 0.7928357648025756;
    msg.depth = 0.3037842607227401;
    msg.alt = 0.47626158529613116;
    msg.sog = 0.23073754040099537;
    msg.cog = 0.1135478315924332;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.016256881812387713;
    tmp_msg_0.y = 0.6954284251656837;
    tmp_msg_0.z = 0.267525533773295;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.313360902020977);
    msg.setSource(37726U);
    msg.setSourceEntity(105U);
    msg.setDestination(5319U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.09371599140705633);
    msg.setSource(42144U);
    msg.setSourceEntity(25U);
    msg.setDestination(19769U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.7278251737675998);
    msg.setSource(39914U);
    msg.setSourceEntity(112U);
    msg.setDestination(43228U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.7282043313767675);
    msg.setSource(55831U);
    msg.setSourceEntity(16U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("BKJNYAVBBVWRGOMIEEHYFVGDZWROJLERUXYKRQGHADPDYXQXKDLHOAKZHBMMIITXSHNYVYCIWZYWRTVWSMTAHIACPPAFPDSMENDOGCEMVIGLQGCCDWHBPISLZXONLLNRCMCUMZKONRNOHBFUVTQELIYMCJGLHVPOLBOEKBZURVFTPSSWPXIQUTZWZKK");
    msg.description.assign("DSLZUJFAQFNWYETVOMFKHAMMRKXAOCJIEHMTZGOZDCWYTVNWVEQKLPPL");
    msg.vnamespace.assign("GLEWZMFQIOLYQLXLGUTPNDJBIGCFTMUPQYSYZNLTKRRFZKYKRHEHMEQUOXWAUCROCBRANBVBYQLMEGGRDUKXQXKVKFTIEUOTFZYZHRWRDZEWQUVSCASTIYOKJGGSIIVXYNHOQPMLWWDNNLIPYRZWLRADAPHSVKPFGCPV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OKEZURPQIPYXQHBFKRFVGLRXEIBNVXZDDFEMRNWWKTCODGLNUHAUSTHJVZTDZFLHTPICWECKSUKRZMIQYMOHOAVGCJSSVETHBZDJEOYWBTAAYMPCVCQNRJXZFJBDRJMCVUSSCOVEQDYAYCNDBKNLIWHTKZIDKUFZHHPJHAQINPUELOYBMFFRASJOBCMTJV");
    tmp_msg_0.value.assign("IGESXQIRPBPRDGCULRGXCTESUDARCKGISNNNHCNARHYJAPZBPBZXVNUFPVODHXHUQLJSRLLJFEZIJNHCJATHXBHTPMWNTZOMTSRYHEXUMMK");
    tmp_msg_0.type = 253U;
    tmp_msg_0.access = 86U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WCLEJGFICVFFNSTAHCRGVNMKAPPNKUYGNBGIABFWKYXSOFOQZQSFXHVJUUJFTNMPJBHMDHEPQYEWKSYTJNJHOPQSBMMLZMHWDMCIQOBKHUJZRAGKZEEKLDXUESRRGUSKKNZSLMRLHNVPYZVZFCARWZNGLCURATOSTVGIBIDBTMQGYPIQEDOCPOULATYQOHRWUAUTQJVIEJVCEDVOCMXODKIBWLD");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RVWCJBARQMUUOZQTBSHQOOAWAHIPZYRPTHNLGUACLCDUQEGDSZDXTUGLVVWIHSHLRMCSIRCVBHNDKLKNUHIYXVBGIRFZOMZODCZMQWAXAGFXNXSXYPHIOUQCVKJWFPNYF");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 31022U;
    tmp_tmp_msg_1_0.lat = 0.24113144374784723;
    tmp_tmp_msg_1_0.lon = 0.9422016739265675;
    tmp_tmp_msg_1_0.z = 0.46578028680698325;
    tmp_tmp_msg_1_0.z_units = 123U;
    tmp_tmp_msg_1_0.speed = 0.18324560838811865;
    tmp_tmp_msg_1_0.speed_units = 245U;
    tmp_tmp_msg_1_0.roll = 0.893926953887537;
    tmp_tmp_msg_1_0.pitch = 0.48623584467401015;
    tmp_tmp_msg_1_0.yaw = 0.2305364837097117;
    tmp_tmp_msg_1_0.custom.assign("QLOFWLTHBMZIAWCRMQZUAUEAADVXCTJOSXKVGDYMLRONKKMIFBOOHHNIUZRGWNXRWAHVKVCSSBAQEICCGZQUJUFCODABVPIZCATNMXTHGRNXJEFWGBSYQFYEDM");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::TrexAttribute tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("RDDNUQWJSLHCOINCRMODTDMGSPJDGCECZPPPBIVIOFCKYUHYWAIDAJTKMKOPBXYZBPHYVBTZTTYZVQDSTEEXCHULCIFZMFXLQFQXUDHYFAQNNXPKNBSYLLJXMMVZWRQGVVOMZRNGSEWAXIJSLDZCURHVZUQTAWWOIXVHUZEFMAHSHUJNXLFKPJRQJEKWEBPRPGOGLKOWWKRBYMO");
    tmp_tmp_msg_1_1.attr_type = 24U;
    tmp_tmp_msg_1_1.min.assign("SMROMPKIQLMQSZXAJUOQDGBLKYQCISBMOTBROGAXFYHLDNNVOHVPISTWLSVUQSIMCFRLDN");
    tmp_tmp_msg_1_1.max.assign("QOGKICWAXDKQMNEPAETIVQOZUUNQZVDWQRXXSALYIUDMRNBKSNVPAUXWZZCLEINTUPRFPHEWMGHJPGAWLBCRQCDXCHHLNURTMVQOKEHPVITYONLBRZMBTKSIVFABDYXPDCFKTWYTCFNFDPJRAMNVGGUEPOBMWWJRRISQSYOAJJRSHYTVASSGVDUYEDHQYMGTOKBCFEBVJZCMEZGGOUIPGDFZKBZXKLXHFOHSWQJFL");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::VehicleCommand tmp_msg_2;
    tmp_msg_2.type = 156U;
    tmp_msg_2.request_id = 23691U;
    tmp_msg_2.command = 169U;
    IMC::StationKeeping tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.3389823741703568;
    tmp_tmp_msg_2_0.lon = 0.4159114516493648;
    tmp_tmp_msg_2_0.z = 0.27027664890342606;
    tmp_tmp_msg_2_0.z_units = 5U;
    tmp_tmp_msg_2_0.radius = 0.46583089124402277;
    tmp_tmp_msg_2_0.duration = 59823U;
    tmp_tmp_msg_2_0.speed = 0.43153679262380396;
    tmp_tmp_msg_2_0.speed_units = 200U;
    tmp_tmp_msg_2_0.custom.assign("EGUZUIISDPZGXAAVBSHWPQLLTKPSUYCGURRHEFJRHYQJFKYNKYRARXODSJTIMAFEIVLIDEZFNOCWTCNUUSVMGQNNFYTLWRRLBIXJWHFLZZMGKTNQQ");
    tmp_msg_2.maneuver.set(tmp_tmp_msg_2_0);
    tmp_msg_2.calib_time = 12117U;
    tmp_msg_2.info.assign("FHCOYHBYXJOCOVWZRYBNVLMKQQPOKDVOICSGYWJSIXZMRSUGIEVFXUVQOICDIAVNYQFUNZSLBOBMZPZZFKJHDKTTTTJGPJBTGEJLD");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::ClockControl tmp_msg_3;
    tmp_msg_3.op = 41U;
    tmp_msg_3.clock = 0.8507813833377833;
    tmp_msg_3.tz = -34;
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
    msg.setTimeStamp(0.9612872028353068);
    msg.setSource(57776U);
    msg.setSourceEntity(72U);
    msg.setDestination(2467U);
    msg.setDestinationEntity(214U);
    msg.plan_id.assign("JDQCGHYJPYTAPCONBVTKVYEVMARUFMZQRQBGADZFOLLKSTBWMLURBEJXPSUPCNCTPCHSJBZOZWEYMMFWHNBCTOZWPXNRDXJFHTKJRLSEUOAZVHAQRLQVMWKXYIWBPKBOEHUZLNOGLYZFXIITXKKMMJYJXEQLDIFCGQPTSRHVJUCERTKYSPUAVKOFVFGRMWGENXQN");
    msg.description.assign("YBDKSTKYGYGSWJNMIHXBMUWHLPTDABAQZIOPMRTSPW");
    msg.vnamespace.assign("XNFRSCXJRXEDWSTXSPGICXQOCOHVVDAEZOAQYUVZHLKDANWUCITYBJHYFTRPLAWUYKNUHOQKRJMTUJWKFZXMAOGZLVOIMHWWLEOK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BLCFQNNINQOCEDUHQOEXVESCETYOZWKMRTOEBAAFEMDQWWPTUIGDOKFUNJNTKIZQCHPSTXKQHNIWNVOAGJPQOBFTQGCRXZVZWQLIXAGICVTMLUAOCDYYFRDUXPWHFAE");
    tmp_msg_0.value.assign("LAOGFGIAUCHZIXQHUOBZRMOGVYSYWZSACINHJCSQLQPWXHGCDKURNTAZMHDDSRSRLSHUYGPVUPCNIBFRDKGQKKRUALPWDJVOSBSEFPHHTGXAJKQROCAXWNEJDJOEYKWUJBAYWVMETQPVTNLIKTHJFELKCXLBXOYZMTLXZNJPQGEALOJT");
    tmp_msg_0.type = 228U;
    tmp_msg_0.access = 114U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NZGVHHBXYTMAYVRFEZPQMLXDUSUSOAMOOLTBEKVUZPXWCKTCOTGFFVRUJNYMIGXYJBCHYQSANADMVHEQFDNQMSCJGUESETYUAPLIOGTPXSLBZKGPILQBVZTNDEVBLRNDQJLVKCWGJPXQOICBWE");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SFQPAJSJYYLULEWDPOYMFFZLRLTRCRCIGBZPWDXOAJEDWNQMIZNBXFNXKEKQQTBYBVWSTMEAPBYHRGWRXUOTUAFNRVWOMTEUCJOFWEKSVRPPAUYDOIOVLZJRRDNSQTO");
    tmp_msg_1.dest_man.assign("GEALMNQQGKIKOEOFHQNDQRDYYBXWTESPLLDSEXPCNNSTAWOBHGLGAIUMZGRDOCIKRBEKPUWJNOXGLYCGVCBHUIJZOFJHQCRACOJTM");
    tmp_msg_1.conditions.assign("SFIAQQIVOMPHHETPWMJJPZBBUAGEGMIXVRNXODRFOBIXDVYLFDKWUMJ");
    IMC::SystemGroup tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.groupname.assign("BQRQFWYBDBJMVEOJPYKXBKYXOUVAWONRWFOEPTMPRMLSLXSWLOEHDQFSRUILUAZEXHJYCNYLKQZUVILNQRAIUZDFMFSVBFJSGVZDCMMYHGKTOBOVAEWWGXJAIHOFGNPACCDTIZDKMRIISNMZQVFSZKSDTURXJGXVUYJHNUNRGIBIDTQIXTQAAHCTALYWCBJFNQHCJYTGPOUZYTULESDHVXGRTKZKA");
    tmp_tmp_msg_1_0.action = 248U;
    tmp_tmp_msg_1_0.grouplist.assign("QFZORGCHEDJVRQTCYFUCSIQPCYNGTSLFWRPZEMYEHSOUVOIOYQQLKLJJTMNKXXCKWGFHMYPENDDFPTXPDSBWAJMWNBBGVDLZWXZDHBFBINKJ");
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
    msg.setTimeStamp(0.7380441216224431);
    msg.setSource(20938U);
    msg.setSourceEntity(217U);
    msg.setDestination(29693U);
    msg.setDestinationEntity(180U);
    msg.plan_id.assign("FPYKRCXVCYAOCUIJPXZFMABFSIOAZGIRJCQMOEPNPTMSZFBXOSOGPAYFETLMJMTJDZSXHKPEKLNUDKMEQWDKJBWLUDSLNAEDNVNNBLWLYZNWWKLMFBIBBQYCGDUOUIHWRZHRLGUZSQRMIYRVOAJKFXRPQHFWVSGFVXYEEVOTZ");
    msg.description.assign("FXMZBAFZPSHQWAGAIULORVHNEDYPKERUJCTYFGXUJEZFTSTNVKMFDQHELLDJKRQDEPWKAMBRGGLQRNULEGZBVSSVWXWUYGSBIFSZOMIHCIHTPJMCMFXVTNYVDCCHNDJEYALATRKKJSYZINXLCMPEBWTMNSFDQCHJRCIHPLSNPXFQXZGGONVYUKIZQYWBTVMWDUOHJAUYQDIJEOERAHCPWOOKBRXAPXIJTBZUGVTQRO");
    msg.vnamespace.assign("FSEWMZXDGWEKQGOCZKMOAXWSUZZDAVFYKQNLCNUOFKNIDKXWRCILJTEYRYIPBTZDAZMLIGUWJYHU");
    msg.start_man_id.assign("WSONGCGUVLHLHUUFYCZ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("YFSWKDUZVZNCMGOSZSEGIMPWNFOTUDTLUEUROLZXNTZNLGIMVAQPSDLXYCMVXXGURTHIMGLWAPTBEVIRLPCHXVVYHFXOYJFDBKHIMRASUCYDM");
    tmp_msg_0.dest_man.assign("DPXPQQBLKXWHFODTRBRWTFIRJBMJQYTXUENAUITIKIPACXGSYGYNVDGVWSRFEJSHZNMFEQDDPFRHRVLOJLDVZFKDOHTVTVHMIZLNFWSIAPLGNUFZNIEEXPXNRWMOCKCFYACSSGRIDEQNOALWQEYHUKIJVDGJCXRTTZSBAUHXBMMUUOSYYJZEOYPKAALMQNBPHJSUJVIMXQQUXDEVQAMVBPMULCGLGOTZYEZAFGBGKBKOWKWCWBTHP");
    tmp_msg_0.conditions.assign("IJAKLTSWDDGWJXYBVWWOFOKUVLSRDEKTUOYYINXMNXEGRBUVXQSFEHQDWPRSQK");
    IMC::HistoricTelemetry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.altitude = 0.34749527289335014;
    tmp_tmp_msg_0_0.roll = 25411U;
    tmp_tmp_msg_0_0.pitch = 45668U;
    tmp_tmp_msg_0_0.yaw = 12668U;
    tmp_tmp_msg_0_0.speed = -15439;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::LcdControl tmp_msg_1;
    tmp_msg_1.op = 86U;
    tmp_msg_1.text.assign("TJJPLWKHCZGVJSLNDMDDWOZOKFAQXHAEPTSDXYFJMSDWWESFVGOTPIGPDIARRMQGGAMHBLOQUSWWZNRCCQYTJFUPKXAKEYHGNUTTZEBRGGZEXKIUDPLOVICBFWBHWZLHVGIOBUUYHOCKBRQMQQVBBTWNZPUAUIPSTVJYAKCMFBCRBFAZARDIVILPSXXZXYNUYQOMDTKJHOMNRJWOREENDNQMXSFXZEYSHKIVVHY");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TeleoperationDone tmp_msg_2;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.12445075495184554);
    msg.setSource(15864U);
    msg.setSourceEntity(204U);
    msg.setDestination(37948U);
    msg.setDestinationEntity(93U);
    msg.maneuver_id.assign("UNWLUGOMNURHHAMBDFASSPHNNZDIBTRCGJGPSKKCXVBDVLWOQENVJWGFHLWCJZARCPLMGWGWEXMVGSJSVFRKWORFBLERDZEAQEBLTXPRKNQKEDONHTXYOKMLSNBKFDBQAPOMJYXNYVDQXUECSGKJFURHZJHUDTZTXGMCSBF");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 48154U;
    tmp_msg_0.lat = 0.5081565496672876;
    tmp_msg_0.lon = 0.5820769668331764;
    tmp_msg_0.z = 0.3080975486684815;
    tmp_msg_0.z_units = 207U;
    tmp_msg_0.pitch = 0.18009739191073815;
    tmp_msg_0.amplitude = 0.3468068297726955;
    tmp_msg_0.duration = 55119U;
    tmp_msg_0.speed = 0.44040635088430646;
    tmp_msg_0.speed_units = 45U;
    tmp_msg_0.radius = 0.9970239929814025;
    tmp_msg_0.direction = 207U;
    tmp_msg_0.custom.assign("SXCWUHJADKXRJHFMIYSIOCZLBVYGNEALXVYMHNMUPEICOWGMCFFDGWDXMWCZKTTMYCDSZLXBUJNLNBORZKQBTJVFABHXGCHYKFQUYZMUWLTFJARADGPZEXVIDEZOMTBXWUDEGNJVKGRMZECITDYOISPAFVPSQPYPNQAOILLOCBYQADQQAEKRULJBHGXLLSCKOW");
    msg.data.set(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.7630282687763834;
    tmp_msg_1.beam_height = 0.06025057845703252;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::NeptusBlob tmp_msg_2;
    tmp_msg_2.content_type.assign("AEJTWBDFQXTXFXIJFNUPGHABWYJJMIAFUKSBVDLKZNLMSRLJDNWOWYQ");
    const char tmp_tmp_msg_2_0[] = {0, -57, 62, 0, -119, 57, 69, 20, -4, -42, 20, 124, -42, -53, 31, 51, 37, -84, -88, -78, 67, -50, -74, -98, 94, -21, 72, 20, -18, -34, -122, -121, 111, 124, -86, -54, -92, 2, -26, 121, -120, 124, -20, 20, 123, -99, 53, -40, 89, -75, -97, -57, -48, 85, -54, -4, 41, 73, -128, -19, -105, 81, 48, -97, 123, -41, -7, -79, 70, -94, 22, -91, 44, -78, -4, 104, 123, -111, -102, -106, -54, 17, -55, -18, -37, 50, 87, 82, -43, -42, 57, -116, -41, -2, -57, 66, 97, -87, 54, 15, 86, -67, -7, 111, -113, -17, 60, -46, 99, -38, -83, 23, 19, 54, 50, -65, -71, -6, -21, 44, 84, -39, 115, -38, 108, -75, 44, 101, -14, -62, -43, -95, 114, 40, -63, 1, -13, 110, 60, -51, -102, -7, 120, -115, 59, 24, -6, 41, 61, 50, -25, 95, -80, -65, -90, 122, 50, 98, -80, 46, 58, 21, -20, 26};
    tmp_msg_2.content.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.5364380121520208);
    msg.setSource(15096U);
    msg.setSourceEntity(201U);
    msg.setDestination(56582U);
    msg.setDestinationEntity(4U);
    msg.maneuver_id.assign("EERBPNXZZAZUDYZGEJYVALMGRIAQJTIWKSLDBEDFY");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.009855703983029485;
    tmp_msg_0.lat = 0.40837845240534065;
    tmp_msg_0.lon = 0.24547975267210753;
    tmp_msg_0.z = 0.6758112518122054;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.travel_z = 0.3648042109999615;
    tmp_msg_0.travel_z_units = 149U;
    tmp_msg_0.delayed = 92U;
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
    msg.setTimeStamp(0.8002558088153061);
    msg.setSource(2574U);
    msg.setSourceEntity(81U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(207U);
    msg.maneuver_id.assign("GIDPFEQPWDJVUTVXOMWDPAMDAIMDCONOHRCSHYKCJBQNRZRRUNYQHNAOIWPSTYGLKXVKBJQMOLPZFWFPIJKXBJITBNUEGZOSQJPFPOQTFCVHXUUWULNEZJCENKSEBXOMQZGDUTFIZHMLKGLVTKYWQLWZRGEHIEASHRGCCMHBMBYLFOSYRKPSZPAQEXHHNMWJDUFXMDGIETAYYLAFTCJLVGCZIXXIVWYORVEDNBBYLUSRVTAFTGNBRZ");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 12053U;
    tmp_msg_0.lat = 0.752703991843962;
    tmp_msg_0.lon = 0.5880938627270557;
    tmp_msg_0.z = 0.23919352345481837;
    tmp_msg_0.z_units = 118U;
    tmp_msg_0.speed = 0.7171446165222096;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.custom.assign("JDMWGWZDAGZZRIKJHEPPTPOLLKYXDLBJKBZTGSJITNSYIDPIVZYXHNOEFNRQTQMTUCYEFHEMBCXVSCVXVRUNBRTHVFDNBKDCELHWBOOSXPIZPULITQEDUUMTMZGQZFQYOWAKDIGCSKUCUMEWGATZGPIFBYBRYOBSHWXRRFCAKAXAFAQLWSWMCVLUW");
    msg.data.set(tmp_msg_0);
    IMC::Rpm tmp_msg_1;
    tmp_msg_1.value = 23684;
    tmp_msg_1.op = 217U;
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
    msg.setTimeStamp(0.0025254929957360117);
    msg.setSource(62928U);
    msg.setSourceEntity(217U);
    msg.setDestination(36317U);
    msg.setDestinationEntity(232U);
    msg.source_man.assign("DOKNXEEEOOEHEDKMYBABGWZPSDYVKNZBAQRJDTLIAUSINFWGRZHVUOBWTRAKAKSMTLKIHASQQFJZREUPTJTCHMHSKWNSZQHVUPDRDARKDBENCEWPCPIWVEFNZYIYFYUMBLIYOCCQTMMXBXGVNDXXRYLCNLJMPXHJVHVLGJVPKYQPGLZRUTJFGSUWTSOAED");
    msg.dest_man.assign("UBMKXRYWHAPHCVMIDOVAOORBIDUTNKSLLTSQHYIFVMWBXSGLQJYSROAAPZFSWUQNCRIMSCEGLFXLCTESWYTPTAFBBRJEERFYHHLVGINUVFSBIIQRFJKXJLLNIRVHVUXYLJQFQDATDWDBIQKAEZKQEHMNYLDXAPKHJCPONFREUMJWVNWCVZUPKECGZCTZYBZGWPXTBAGXGWDUJHQDJNUZSXGMZHOOYBKOPUDGTTWQYEZZORKSCEN");
    msg.conditions.assign("BOMVBQTZSKMGEEDCXFSEWBXZJKLGHPXPUCSCJZVNJWHWMATCIGJPWWNOWWUMFBNKMQMMLTLQSAFDUNJEKFKGDMPLXEXDURGFHZIIEBKFPSOYEOAENOYZTDPGAFZGZYEYXQTKMOFXNUYRYHZGHQLJVOHCQECJQLUSITFLCILRSOYICPAWYWSPICUIAAZIWDLYDRBTV");

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
    msg.setTimeStamp(0.4744950258695759);
    msg.setSource(53695U);
    msg.setSourceEntity(97U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(70U);
    msg.source_man.assign("QZCKMCPJSXSSMXRWBQMFWQYOMMPHJQBDAVAWXWIDCTOUKKFGHLSBNZOSQDHRYXKFZESTYVRZODDWRSNRWAHGIPNIVPGFUOEWLYUFFWTYLJHICZTYA");
    msg.dest_man.assign("IHZTRBREAUBXYDESFKZWFQFMFWJAMTUYMEVCHXFQMOOSPIUPXNAHKTCCDBQEYGQWEZNTCGRVKRMSXTDPAAHXNOLBONJLGALCWBIBHIXNXPKJUDDLHWMXUDYNRLZFLTKJFEYOMCTYJVJIVEQMKYJMZNZQGPAFKSPHJIRULTHFKQVPSSAIADGXNZFENYOCIWHQUGCEQZRHRBKBSLGTWEVOBVRSPPGVZBYRMXZWWQODJYDIND");
    msg.conditions.assign("LIKDINEVKXPYNIRVQIXUWJWLBJBOQHVXRBBFRDBWCYOCNAYYSLHIMIMZEZJMIKCOFARAERIELFNDBAXUDQHVSSDUGJVOVNMTTKZHWBEXVTYXTPPUPJIMBCEALMONEUTJPOTJRCPLLKCHIDRVGDJWAUSQGDXFGTKOGGYWJJMNULMYXGEFWHTCUZZSOXES");

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
    msg.setTimeStamp(0.19788817371911338);
    msg.setSource(31350U);
    msg.setSourceEntity(37U);
    msg.setDestination(65378U);
    msg.setDestinationEntity(22U);
    msg.source_man.assign("ODQVCAXHEZNVHECGHSPNKRAOIRFOJHUUPBJAJQLVNZPGSICWPZVQBXFLUNAWHWMHXICAQMGCHVDQO");
    msg.dest_man.assign("RDRZMQVGLNZBGANVCRZODADNQBEIQOFWLFCEXEPJRDESUPACXAMFPNLALAUFHWTDMBUSDJHEXVHICPRJXSCTBBSXIQIGSJAIEKJCRVOUDOJZXHOTEGWVPWCFNVCPZFMZALEGQGJVDTWXHWYYMMFHQGYNPKBLRDOFUZQIFOMOJWYTGOHZPBVKNEQXOEUZVY");
    msg.conditions.assign("TJVKQMDXCJOFVVSQUZJROGCDGERVGGLYRRXFBJAHTDPLTWFTMUFIPFPIBUROXSUYTMJCYCZRQHVWGLTAOXJJYYUBSZEXOCIDZBDJRONIVPWWSBLHMQMYXAOZOZLNIEIEUBPKFVHSPDDXJZCEMKTAQNZWGEKMSNGLSNEAQELPPCQPSBDXABVUWFGYBAVTZRSFZUHCXMHDKLHNIKHAH");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.35492665316901784;
    tmp_msg_0.y = 0.9205878537080935;
    tmp_msg_0.z = 0.6987406163442642;
    tmp_msg_0.phi = 0.9483725753931235;
    tmp_msg_0.theta = 0.7382505733267162;
    tmp_msg_0.psi = 0.6812498616879854;
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
    msg.setTimeStamp(0.8907959033055204);
    msg.setSource(22747U);
    msg.setSourceEntity(45U);
    msg.setDestination(17023U);
    msg.setDestinationEntity(100U);
    msg.command = 237U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZFSFDENZQSWYHLXYIRCAXVHHGHUQNORNCWLFVGAIGLTTKHRUTWPOMAZQBACWMZKILXURSNUGWTBKMRHJLDIKFQPXQVUNFCDDDCJISUSXQJDJ");
    tmp_msg_0.description.assign("QGXQLKNRIOXZXHSQFDHWTSXIDIKWFJUYMFZNNFSOZPKZTJMXYQKDNQJVAKHRJZAEHKROHIPJCVROMFTWFABQEDATNSMMLAPAVC");
    tmp_msg_0.vnamespace.assign("PQVYVJKOLCITBDGEAMXABXRQJHORVTENZTOGPSCALXZEKROLKMYSUARFCHDWFBNSUKQERDUVNAUPIOMKJOKCQGEPSQEDAJWVMZWWRUHLXVGCLYHKJBBFVK");
    tmp_msg_0.start_man_id.assign("WOUOLLRPXN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HSTVPYDOOTCGDGLCNXZBEKGBDMMWUFBPXCOKZNHTSUJJQBSKGAMNMXPEVYNDCGCBRKZZAENXNHCQOQUYCTKFJGNSOHIDMGXSEIKXZFUAWPNUBEFNEWRIYLYSCMLKIUVL");
    IMC::ScheduledGoto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.arrival_time = 0.9821442420536584;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8758979427947543;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8948043400907724;
    tmp_tmp_tmp_msg_0_0_0.z = 0.48848376687740225;
    tmp_tmp_tmp_msg_0_0_0.z_units = 107U;
    tmp_tmp_tmp_msg_0_0_0.travel_z = 0.6095851336080913;
    tmp_tmp_tmp_msg_0_0_0.travel_z_units = 163U;
    tmp_tmp_tmp_msg_0_0_0.delayed = 117U;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("LNEDPQCIRONOFVWPPGXPXJJHNUWSQRFESSTBKUSUWQOCMZAHRDKLDYTTATORGXDXMLXCJTSDDVAVNBEYKXMVLAOTIWEISYJKFV");
    tmp_tmp_msg_0_1.dest_man.assign("VCRXLMRUFVRXVHWYNLSQXHEWKZUDIDUJWYBYRETTUZCFWPFATQMKUVBPHUNFZCWDYSJMVXYGQKFWMNIPSIROHISWJID");
    tmp_tmp_msg_0_1.conditions.assign("KBPVAAXLUAESWOMCQWQIRVXDDF");
    IMC::SetImageCoords tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.camid = 130U;
    tmp_tmp_tmp_msg_0_1_0.x = 64129U;
    tmp_tmp_tmp_msg_0_1_0.y = 3184U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.7082683365675572);
    msg.setSource(45383U);
    msg.setSourceEntity(219U);
    msg.setDestination(30254U);
    msg.setDestinationEntity(148U);
    msg.command = 16U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("COBAIREOMACLXQNWXXIUHSXVRSFHDGWAKHOJTYTKOVPMWEVULCIEQBTFRPTROKZSJRDPZGLYQMOVUMWQEJCKDSQJMBUHJLNWSANGKDCBIVUVFXDRFBTYRLKAILQUUCFXZVQNZLQ");
    tmp_msg_0.description.assign("MZWWXJKJAVVZMHZCCVJITVRGGKHEMQARMQXXBLXKAAXXWXBJJLLEPPZWMSETOGZCPQAVFEHKLTOJIKBDCXLQUVCMYBDJMHZUPPFTYSUSLVUNFIZGFGLIPNTCLFUWMHMUYPUSHNNONXEHRCKIASTUOWORYDVOZPKDZSSQOAKRPGFJPTQIQFTUBNDBRSNSFMWGQGEYECHOXRYNBVQZLFWYDCNBEYRDIDWIGSYWDKNIAUBTGBEVHAA");
    tmp_msg_0.vnamespace.assign("TUNNWAEVMCZOHGHLAQLLAFDQGAMXYJSTSIUZPLQWOFOHKXEIGRDBTSRSCYHKUFJWFYTRMVWXHBXEPXTFBDCTNWALTCELDGXYZOALMFKUCNSGVSLPTTZQIGMCJZHDYXBVGJOVORQDWMZFNYYHIBKMVABMWPOXQUWJIFEG");
    tmp_msg_0.start_man_id.assign("HYNPWADRDOYNEBXEAQPDYXLRWFXZARJTJYWUARKMVIGQTCLLDSWDETGHOFXPKZKLXIVSUEFVQRNMCOAUGODQNKKCIIEUYAQQBPNHTWFHNYCYYUXJRTIMDZRHHDAQKIWCGZPVPAWLUZOROZWZUMSPKSJABPFHQAYIWVBMCVMYFJDPBJTQVTVIFNMKLLBVMEGSTLIPUEENZMSSUBHBKGXXHEFFXGOJOOGJNGTVJ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RXSYRTWWVYYWAETKXIFHVJPDXSQEBOFIOVVCHZNCPZRBGOERHYDIUBTSKJTILLRPTMFWXPJNZOMZWPFMZBETSNYZIDVLIVGOAWNAGCBRZWSBEPQGKQKHDNOUQRMVXUJUTRJABGOXBILJKTYHNOGCUUPUXCMQEWHQQDKKVSRSAQVOBYAGFJECHCIDZILPQKUFXJKMAM");
    tmp_tmp_msg_0_0.dest_man.assign("FOHQHRHEXIWSMGULCTAMVPMIZACIVETZWGNDMBYUUNXWSEKJJZJSHFNQAXNEJQLKBFKHRYWAEPAYHRIAQUBVYOYVMLGRCTFAAAECMYKGNQDHZVJCLUTAKJIUFRLZPTKVBCOWPVCZGVJOSCNBXNECFKHHIMDTFQ");
    tmp_tmp_msg_0_0.conditions.assign("MGBJBIRSCCYZIHTZUFEGWTKDRSNJJFUBQHZLVOTSQRFXKQUHBSAHUOOXRWYSVAOANKDUGGTZEINKABFWTGLRKWZNQLYMEFLCFXFBPFWHQJYMDKMXHTYLYCLIODXJLOVNMJEVYCWAVQIPQMBUPNRIQTHSCNEXGTJDBHMXCARDWYZWJOEPHXGJKIOF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::UsblFix tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target = 50361U;
    tmp_tmp_msg_0_1.lat = 0.8073445593929688;
    tmp_tmp_msg_0_1.lon = 0.32369649202050677;
    tmp_tmp_msg_0_1.z_units = 95U;
    tmp_tmp_msg_0_1.z = 0.9197547449167457;
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
    msg.setTimeStamp(0.4853831710133484);
    msg.setSource(5613U);
    msg.setSourceEntity(221U);
    msg.setDestination(9274U);
    msg.setDestinationEntity(111U);
    msg.command = 128U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XKWUGUEZTBJNAOGSOKJJHXRMKJEFERPKCYSVMPBQKDJHNXASINQYYHMRGIBIARHABCDJWBBWELZJGPEOTNQYKWCOQXIUHIDUMCHTFLRRKDPQAOPLFDXLMFLYWDEKYHFSINVIVZSWZFUGMQMYYQURZWSVAUFDYCPGAZFVNWHGTISPRSOXUFZJLBBAXYCVWELJFNVXXREGITDWZOQOUOMJSRHKNAVLLQNTZN");
    tmp_msg_0.description.assign("KONXOSBORKCMTWASIYZGYRVGERXQTIEIZRWEFCMVSKXUMYTMGEQBRPNVXHXRLCBKOUDSLTZULEZYUGSPYFKTDRZHCYDAUWUVGZHUQQAMKYSIWNAAYDJOMHCBYCCPIFJYINWPJKVJPDSREOOOMFSFJQKMZDFVWACNNFQBIVBNXPCLAJJENLUMGVQWDZOWBGO");
    tmp_msg_0.vnamespace.assign("ARQQZPIZJEVXHLDMZKEMCOQEYCSCBYVYWIVOHFPJCLWKPQRGNGRSXXIIXMLIAOUHVVLPEJHBWYMCQSZXPKDJWOAQJWHTLBFIKMHEDJBMYCJADNTVDKRSNNXUDTCXKFGFNZIMUTEUMOEKFGVFZGBNEZHQFPHWOXTPUBOVPBQDJIOMJUICGEYBZUZYNLRYLGUSWNBACS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HUEEHCOUYHKQICLQMUCLWVMHCSKUTNSGJEULDUQCAJSOTNYDAEQNIIWRCPTFGNDVKDPEKOAJQQMZPUFICZNSLQYRPMYCYZRGSWQKBUFHOWBRXOV");
    tmp_tmp_msg_0_0.value.assign("AIDSNQDSOTUQPJIZAJYIAAUPJEONJHOKWTHXJDJNSFTKMRNVABDLLMVGXKJJOBVQOANKHXBYEWWMHXZCHVZHCRQLHGUDIYROCICEYWTMSQKXIBYHILRSEZEIPBCUDLFBUUBVGCGAOUTRERGUMKPTBBWWQZHTOVOAPSSGEWJR");
    tmp_tmp_msg_0_0.type = 213U;
    tmp_tmp_msg_0_0.access = 178U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DBJYVXNYOLNOFEJTUNBPEXZUVUSZPEJAQKLPGHWICNGRZTJEAEJPFBWXSTFCUYBMOQRAUWONTECLTCQSCPDHMHMYRSBIFQVKAXNOGKOFVLDMKXSFVIUIWDRHDESOFSEXMABTJKDNYVQQBIUUNHKPBWQZPKAOQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OSMHKPFSTMELQKCWCQCZOHJMIAGOWJBOSFUMQWAJHIBDPXHQVZULUTNSGUTDYIZWQAHMESBMXKRIGYEBBALOZYJQYRJNNRINIXKUORWITZEXCQCLGYHVXXROBSPFIDWJAYVPJWDKGEPDSEDTSKFMYKEAYUULLREHHVUMOEVJXLCKOVZTULAPVYDVVRARWFQPGACXBSBFGDNGTNCMNXXWBSFRTBFGZZQJPUNRMVDCGEYZITOLWDHCKPFKNHZJTN");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 42083U;
    tmp_tmp_tmp_msg_0_1_0.flags = 125U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5376958546902131;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3388205668891747;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.061379455098630964;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 179U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.7353613304795226;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 104U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.4092539736689149;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.37728784214625144;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 18U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("JCMGCMCXVTHWHMTJTLTIHNEZSLLURPIEFYKDTLIREOZMILOLWXBIIZFGALKABMUHJRYE");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("HCXIMPSISCDTGRZRQRWOOHOPQUTUVXSPOEBUEJRBHSTLYPDOTBLJDCLXEIYUXASQNHJWZNHJXAFLLGAKPDTIOYVQZB");
    tmp_tmp_msg_0_2.dest_man.assign("ZZMQAACXJMSURYQANBRLYGYYQNQXBRIKKYPZQGWEDMLUUNWCSLOHBQSBFKQJVLPOFSWBARFMCFJVZDNMNJUVNJNLXATMZHCYAGXJKTMKQOKCKVSOZJZDAUFOLNGBTWHPAEDPPIHTMBVDULRBGTLMYMXAERBDVCDOREWJLUPCTJVOIOFITCFWCGLOFSEWSEXKIEGWRODHSUEXSBRJPWENRCX");
    tmp_tmp_msg_0_2.conditions.assign("UXIEPXKBNQEUVBOCUOOLTOAAMVDHKZEABSGCQFJJQKHMFISVIWGPQDQRABPMCLCBVPYWFPKAMGFEFZKZLMOMISNTKWQLZWHJVXFAYHGGFUUGYZWTMIMDVJXRCXDEKTAIKDABRJJFXHNQLJFGEHLTORXEPKNMYPNEVHYLOPSQECBBAWGRDEONWBJUZUQSTVTHZYBVIHRNCTLRIYA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::VehicleLinks tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.localname.assign("LFKCVDATPMEKFZ");
    IMC::Announce tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.sys_name.assign("PDGFOXYEXHMCBDRYEFWBGZYOOAHPUUDGQJGPOHZQUQKZQKNPICSNRMPOQFREPCSVKJRXEZPSAFYNDVNVXSCOJPYAFKQIFXMTEEUHCMDBILMZVXWWADFZALQTULHJCZFZRQZJMVAMBWJQBIVHNWWANTJOESWDOXTELIPJVIIVSURLYFMTEXTNJKLMCGHVATGDLBFKXKKBPCGZ");
    tmp_tmp_tmp_msg_0_3_0.sys_type = 236U;
    tmp_tmp_tmp_msg_0_3_0.owner = 56085U;
    tmp_tmp_tmp_msg_0_3_0.lat = 0.4858250282308084;
    tmp_tmp_tmp_msg_0_3_0.lon = 0.09611275763218818;
    tmp_tmp_tmp_msg_0_3_0.height = 0.6755878103976899;
    tmp_tmp_tmp_msg_0_3_0.services.assign("VRJCXSNDVHTGPRXWFDJGEBMWEMSEOHZJEYXOPHNQWYGHTXMFAPBKBTWZCUSFQULHAJBEPBJWOQETNWTQNUTBCRPDAYLLKDKKGUPLLWFQQORYPODNNHWALRJUHEGKUUKRQNMENQUGAPCGIVJAIALKPYADTLVZAIVEZXZMITFODZBDCXGC");
    tmp_tmp_msg_0_3.links.push_back(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.697895647934243);
    msg.setSource(26128U);
    msg.setSourceEntity(117U);
    msg.setDestination(33835U);
    msg.setDestinationEntity(214U);
    msg.state = 204U;
    msg.plan_id.assign("MWMKRMYHCPZGSOYRMIQDNJJSOAVYSEELHXHYZEXPTQLQWKOQKRAYOTDCGDPANBVVBAGVQBPZNKCMLCPMUJCKKSGXCSHIBBUOMVNAETJAXOPGNOPRHLBLLEFKXZUSHDIDEGBJNZHBXNQF");
    msg.comm_level = 122U;

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
    msg.setTimeStamp(0.9886202833946515);
    msg.setSource(45884U);
    msg.setSourceEntity(201U);
    msg.setDestination(3318U);
    msg.setDestinationEntity(80U);
    msg.state = 146U;
    msg.plan_id.assign("XJQNDJFUKAKRNUFGZFKYAUCIZFUOMEPWFZKLHZMZHOSLICMLRKLFVNEPBWGSVADPNGJYITGIIGMNSTLKIOYZYFOQBGDVLPZWK");
    msg.comm_level = 138U;

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
    msg.setTimeStamp(0.7605919467913008);
    msg.setSource(54417U);
    msg.setSourceEntity(108U);
    msg.setDestination(59222U);
    msg.setDestinationEntity(100U);
    msg.state = 245U;
    msg.plan_id.assign("NEJTSTTWPTVRNMMDRIYQBUBILWUZJEZMGXCZKQNAKWXOAVWFWULHFOCHSMSVRUQIUYLJKXNWSIZXSXDETZPOIFMVNZCDBXGDQHYXPBNRSNPVYA");
    msg.comm_level = 145U;

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
    msg.setTimeStamp(0.1743722451757218);
    msg.setSource(22410U);
    msg.setSourceEntity(225U);
    msg.setDestination(34094U);
    msg.setDestinationEntity(38U);
    msg.type = 111U;
    msg.op = 147U;
    msg.request_id = 46504U;
    msg.plan_id.assign("FKCFLJODVSLMINPLBJNYFXZGBKCNBAGBEWEFSHJMYPIHGESEGANGVLWWLHUZYGIJUWSBXPURDKQUDNYHCOOVLZFOYNSMKQZSRXKPAFRA");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 89U;
    tmp_msg_0.longain = 0.7603492203894945;
    tmp_msg_0.latgain = 0.3714395043165539;
    tmp_msg_0.bondthick = 2409678184U;
    tmp_msg_0.leadgain = 0.050539587193388136;
    tmp_msg_0.deconflgain = 0.592488078165494;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FSHHBOCMESXIXLLESCIMYALXZXZMUNIABDULESAHCFTHVTMWYRWWOZJNVGNFOEPQNPMLEDVMKOGIQWMSEWOGOFDUIPGAHFWXOKAPLVUBYPYDZRTUUXJWNTOHRQBARFVISYBVIHQRJLTOUNDASHJKSZERRIWAJQDWHCTOLDTJJXUGYNQCQPVI");

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
    msg.setTimeStamp(0.3432438030063715);
    msg.setSource(24593U);
    msg.setSourceEntity(250U);
    msg.setDestination(23079U);
    msg.setDestinationEntity(43U);
    msg.type = 206U;
    msg.op = 136U;
    msg.request_id = 58491U;
    msg.plan_id.assign("MZMUAPSPYULXDYGCNOUOTPXDTZXNTCQSYXNZFFYQNVYTVEFNIWSMDVSWKXRVXDAXTDBRRTIBRTUKDTBJVQEEGYHEJEWAJDOFECQRMBGXICJNDWDUJOKWGU");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("MHTDLWLIYCRKGOEGJQPYQAIMVSNSCWFCBATQHGPFREVVISUBXNSMEHB");
    tmp_msg_0.formation_name.assign("HYIMOVXCQBSFEKQYXDRXMPVTCDKNRPGLJEZHWCSPWGPHHXEHOIONFTLZCUWYQRXBFVWURGUJAKJVDADPFPMTORRCHKBMWUENPSLGOVJLAYGUTMIGPWHJODJQIWNUJTXSIJYYBLBFFNAQVYFELBIBXRIOCWNSOBMLUGUVCYHKBACWMRTDGAORSIZXPZZSCATALJZXDCYNIOGKZFQETZANHZUENEKXEDPASMSRNJKQMSETTQQBHIMGZVWFK");
    tmp_msg_0.plan_id.assign("RJLIXCQYTEBJNWQZDYCRJIMQRTCKGCRBROBUPOZINAHYLOMEFZELSMSVTCROHJSHUDUIHWUKNFKDSYPYNJKHALEJLIHBGNXSLGATGPVWINFLDHAMXPNCAAWPXJCDFUTEZIQFCFNZTOGK");
    tmp_msg_0.description.assign("HURMOAKYZGHIJAXQQHHIDSFONTIEYZDA");
    tmp_msg_0.leader_speed = 0.09715412837626791;
    tmp_msg_0.leader_bank_lim = 0.7030835288595513;
    tmp_msg_0.pos_sim_err_lim = 0.34682152896216933;
    tmp_msg_0.pos_sim_err_wrn = 0.029290838369669947;
    tmp_msg_0.pos_sim_err_timeout = 22789U;
    tmp_msg_0.converg_max = 0.3775381148906205;
    tmp_msg_0.converg_timeout = 63757U;
    tmp_msg_0.comms_timeout = 25321U;
    tmp_msg_0.turb_lim = 0.3325330681547941;
    tmp_msg_0.custom.assign("BCIFKACFWPAGIQABKGEHQCVAYLDOOIUNRNDJBPZKWMGLWUXNJVNWHFXHVFRYRJNLIOJUQACSVZEDDIUZBGGGMYKXRYMXOEUZCBEHXTZDUMDASQTDLAMOCNHYIBBZKZQGHJMRGTIJCKPIVJLSDELWN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EZDBOTZPOJJRQMYUMHPSUQSTRZVEWLVNGJHTRJQOGKNXVUMRQLFEHBHXFDGTVSZUQXGXXOKJAJLTEWIGRIKVSJYCPMEFGXCTMBCDTJIXXIUWUBBAQJPNLZABMYFUCJYWZANGVKALMHOWODXVYMTCDUDGKEHOBPMHIEWKNLSQICFLDVSMDUGXWKOPRQHFSUIWYYNTKS");

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
    msg.setTimeStamp(0.9701134653823152);
    msg.setSource(7889U);
    msg.setSourceEntity(200U);
    msg.setDestination(16885U);
    msg.setDestinationEntity(249U);
    msg.type = 70U;
    msg.op = 194U;
    msg.request_id = 13085U;
    msg.plan_id.assign("WESGOUGPWYFJJNVETBHWCAJFTZEKVXRUVQSPJZWVLSLRBSLFHLZORKQEYXNHQTLYOCIEBI");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.9275394772065431;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SOOFGTEBLDMFTOUQBACYCRSMYWFG");

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
    msg.setTimeStamp(0.00625592425643462);
    msg.setSource(55353U);
    msg.setSourceEntity(63U);
    msg.setDestination(63950U);
    msg.setDestinationEntity(111U);
    msg.plan_count = 13363U;
    msg.plan_size = 1878039558U;
    msg.change_time = 0.3143964347490863;
    msg.change_sid = 30612U;
    msg.change_sname.assign("FLTJRGDEJTZMAPHGXEZPFRXDQRZXAPQWPFYOSYVABHAAAXRYNVHOZQWSSIRDXMZPLXGGZDWDNVSDUUQTHBONCYESMLSKVPMBKBGWMUFILCMOCGINIRTJVCOUTJFSUUBHPVXDFISVFNSAQZQBCNOKYLKLELZPCCBSVIFJZOZBKTWERIVKWHWQEBUQYECMLOQ");
    const char tmp_msg_0[] = {62, 30, 123, 69, 56, 27, 106, 46, 18, 64, 10, 62, 58, 0, -3, 88, -38, 74, -116, 30, -117, -120, 72, -10, -9, 21, -11, 114, -73, -113, 24, 87, 111, -122, 18, 96, -77, -85, -6, 102, 123, 73, -99, 56, -25, 4, 61, 1, -55, -79, -107, -49, 0, 37, 105, -45, -71, -101, 96, 47, -46, -65, 76, 17, -28, 26, 86, -119, -80, 41, 46, -82, 14, 103, 104, 115, 60, -105, -87, 109, 123, 122, 120, 53, -82, -80, 88, -27, 90, -97, 124, 87, 108, 13, 103, -95, -43, -31, 47, -52, -121, 7, -112, 99, -33, -59, 23, 107, -51, -96, -100, 107, -124, 28, 76, -80, -46, 124, 1, 45, -90, 80, -54, 102, -69, 30, 85, 42, -40, 15, 54, -65, -126, 21, -99, -86, 11, 42, 45, -99, 116, -128, 55, -52};
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
    msg.setTimeStamp(0.22105939357202675);
    msg.setSource(13045U);
    msg.setSourceEntity(189U);
    msg.setDestination(63116U);
    msg.setDestinationEntity(248U);
    msg.plan_count = 9350U;
    msg.plan_size = 2304084638U;
    msg.change_time = 0.5318638110633117;
    msg.change_sid = 39756U;
    msg.change_sname.assign("QFYPGSFUSXDGTWNDFWGZXMWLOXKRTMRMCGDUYKNARJTLFOAVDJJSUJNCDUIRV");
    const char tmp_msg_0[] = {-43, 108, 123, -66, 81, 38, 111, -9, -95, -55, 113, -91, -77, -126, 101, 25, 96, -19, 83, -29, 80, 79, -87, 84, 7, -39, 20, 34, 33, -17, -44, -102, 16, -44, -127};
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
    msg.setTimeStamp(0.4198597580275769);
    msg.setSource(61980U);
    msg.setSourceEntity(209U);
    msg.setDestination(2972U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 48628U;
    msg.plan_size = 2008400775U;
    msg.change_time = 0.23203015279176753;
    msg.change_sid = 5656U;
    msg.change_sname.assign("BXNCNFZJTMODIRCUGDYIVNSPBLMVENCIRRRKAXOBSBELBNHOFBZCHRXKOFJZNX");
    const char tmp_msg_0[] = {6, -24, -90, -48, -122, 81, 108, -74, 68, -8, -37, 65, 76, -117, 52, -125, 52, 96, -17, 25, 95, -35, -71, -22, 22, -40, -126, 7, -11, 58, -31, 125, -107, -22, 121, -109, -97, -68, 118, 77, -127, 0, -1, -122, 68, 45, 33, 121, -96, -1, -9, 8, -41, -34, 83, 18, -98, 117, -112, -11, -105, 70, -64, 11, -95, 75, 76, 66, -6, 124, -36, -88, 86, 51, 85, -33, -23, 112, 72, 43, -48, 96, -119, -74, -103, -49, -79, 76, -121, -32, 37, -56, 51, -71, 90, 94, 59, 69, -26, -102, -31, 18, -57, 122, -75, -44, 111, -47, -115, 52, 65, 73};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XYWRQKMHVMIXYDUSZHBJAJWYAGBCCOXOQNJCVRQHWGETEFDRZARGPCLSARUKCTLLSKIGSIYOECNOMMWTBDPFVKNBOOLPVLAEBSXUUVQJNTUYAHCATKELEJKNTZDJQQYEJQRGUJGPDYSKWMXKTXCPTLOSZPGBVOWVHWEURRUUEPKXAFGQYNNSAJIUBJMBRVZRBFSTLFHPMZYBPFWDVAZZEFIHLWXIIIDXMTP");
    tmp_msg_1.plan_size = 61688U;
    tmp_msg_1.change_time = 0.22847740153217067;
    tmp_msg_1.change_sid = 30737U;
    tmp_msg_1.change_sname.assign("VIDDAPKUFLQMTFGLLCTTWHRWDWWCZHCAPZAYDTBHGDHOQVPYOIOSUAWNUQUNKCIMDFEBZRUUCMARCBBBYSFPUZMYDEJJGALJCOFLEKJGQNMBACERIDQY");
    const char tmp_tmp_msg_1_0[] = {-121, 6, -53, 88, -70, -27, -26, 125, -127, -73, -86, -99, 83, 52, -47, -9, -96, -86, -41, -66, 104, 111, -65, 119, 98, -26, 78, -107, -115, 94, -110, -65, 27, -59, 39, -98, 109, -8, 96, -108, -62, 26, -114, 69, 118, -106, 124, 64, 64, 64, -103, -93, 5, -64, 35, 67, 77, 39, 32, 77, 114, 42, -51, 34, 36, -47, -110, 89, 117, -72, 54, 111, -18, 18, 86, -14, -22, 34, 91, 53, 20, 46, 41, 120, 122, -65, 46, 122, -76, -34, -63, -20, 11, 30, 64, -92, -125, 20, 32, -114, 16, 63, 9, 110, -3, -110, -91, -75, -101, 8, 2, 57, 64, 16, 96, 108, -36, -84, 106, 39, -48, -99, 16, -93, -114, -15, 59, -35, 50, -23, 11, -44, 71, -32, 116, 115, 20, -33, -85, 1, 53, 120, -99, -39, -101, 64, -64, 39, 72, 85, 74, 125, -67, -89, 33, 98, -70, 6, -85, 92, -15, 100, 47, 114, 34, -22, -104, 122, -98, 54, 40, -111, -19, 6, -39, -44, 21, 3, -62, -63, 111, -103, 4, 1, -75, -58, 13, 103};
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
    msg.setTimeStamp(0.03762491718722927);
    msg.setSource(50253U);
    msg.setSourceEntity(49U);
    msg.setDestination(38322U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("MXLMUBKZIOEIRHLFICQVYKPBODNNOBRUJMVGUTDHCTYUDPADNZQSUAHEKXLZMPFVBSFCWVTCYNYGSKRVAAOPQZYLVAEEGANSKULQRMFGPIOFRPGEOHGECDGMQRZWXTUIWHBIKLCAGWSSIJAWEJXTNMXFNPOORESBUBND");
    msg.plan_size = 63089U;
    msg.change_time = 0.2998023751357878;
    msg.change_sid = 5744U;
    msg.change_sname.assign("BWCBTAEJLFFPWVVIKUOCVPSWGCIQTRTCTILQACLABKZWGSPXZGYNUGTSMIFXWVJANXSMOFVICNIILHCBGOURYIXPJZEDNJZTWAAQMQURPUDARTARQNENJLTSVYUVEOCERUDBKDQBUJMBPJNNPNXZLOFMOCOMFJDYFYGAUFYQVDRLTCBKYHQSDHOHPHDZMSUQ");
    const char tmp_msg_0[] = {-99, -127, -28, -10, 79, 84, 69, 94, 78, 80, 124, 26, 119, 11, 30, -118, -43, -88, 95, -1, 81, 32, -126, -80, -64, -125, -40, 40, 64, -49, 48, 33, 102, 125, 31, 0, 109, -108, 8, -76, 70, -46, 12, -119, -39, 125, -33, 112, 57, 70, 62, 65, -55, -98, 67, -56, -93, -21, -63, -85, 52, -5, 102, -74, 6, -119, -118, 32, 95, -54, 70, 73, 12, -44, 20, -41, -79, 52, -84, 111, 23, 13, -8, -48, 105, 125, 111, -51, -3, -17, 105, -124, -64, -74, -110, -64, -30, -107, 65, 117, 115, 120, 124, 124, -56, -42, 17, 87, 88, -11, -39, -38, -54, 109, -124, 43, 124, 116, -69, 74, 16, 3, 115, 32, 12, 69, -117, 38, -54, 52, 23, -44, 123, -126, -24, -58, 101, 112, -47, 19, -86, -6, 106, -120, -2, 98, 28, 7, -20, -32, -75, -30, -96, -29, 76, -46, -93, -85, 106, -80, 112, 110, -50, 42, -10, -30, 51, -20, -42, 76, 24, 118, -125, 5, -65, 34, 45, -46, 79, -9, 10, -71, -24, -62, -107, 100, -84, -3, -124, -19, 38, 47, -71, -76, 84, 55, -99, 33, -127, 55, -101, -88, 105, 77, -106, 60, -53, 67, -97, -29, 17, -117, -77, -25, 44};
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
    msg.setTimeStamp(0.7215036760679772);
    msg.setSource(37980U);
    msg.setSourceEntity(13U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("QMEYGXWCLZJUUIYMIEXITPOOHIPXACTIERGQEVLGSITSNSIMRQRCHLCEUTGNQDEAXDPETVZUYJEXORJHFRXWSYGNAQYRAQQVYORVQELYAMWSZPZSBJBWFUPLXVFMQNCJUAMMLAIPW");
    msg.plan_size = 56458U;
    msg.change_time = 0.672464623103848;
    msg.change_sid = 57777U;
    msg.change_sname.assign("CJYSFJDSZPUYMOCSXVYGCHOBNSATAEMJAJHMKEPSHCQCQZATWMZFBILADFRLBDGXSONPDZYPODIGAHAYJEKFVZEUJWRENJDPUMHSQYPKAGOOSCPNRYNWORKRMACNXIEWRFVQXVHLXDNMVUZQTVILIDUQIKTBLWKFKUOSHFVKYPGXXEEAZTTFW");
    const char tmp_msg_0[] = {-52, 20, -15, 3, -31, -64, -27, -64, -5, 91, 76, -63, 121, 70, -75, 14, -82, 96, -123, -33, 62, -121, -104, 87, 22, -91, 23, 29, 105, 118, 39, -65, -31, -20, -12, 110, 97, -43, 112, 116, 75, -126, 66, -23, -40, -28, -35, -116, 96, 42, -58, -118, -21, 87, 12, -104, -70, -20, 11, 93, 14, 33, -117, 81, 79, 44, -120, -67, 11, -96, -89, -104, 10, 41, -126, -67, 67, -30, -28, 53, 116, 19, -126, -27, -15, 53, 8, -125, 33, 33, -64, 11, 53, -12, -90, -21, -1, 92, 74, -19, 6, -9, 114, 49, -11, -93, 28, -111, -76, -38, 111, -9, -71, 65, -96, -26, -68, -106, -52, -65, 68, -96, -48, -70, 75};
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
    msg.setTimeStamp(0.1701913024826417);
    msg.setSource(29636U);
    msg.setSourceEntity(234U);
    msg.setDestination(48224U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("GAZVKLXUNAMCNIYCUBMNWMSNJHDYEMKRQJFKFVEDMLCKPEWYUAATVLHHRFDXOIBBLDCQGBDHHANQUSZPTBUNORWKVKTYNRQPLXOGMJWLT");
    msg.plan_size = 52895U;
    msg.change_time = 0.9735634932853314;
    msg.change_sid = 3002U;
    msg.change_sname.assign("LMHMXMVOBYVKFCVBPDLLMQQOGOXZQSDYKAEBVGCKOHXBGFAPEHQYEHSAGZTRQN");
    const char tmp_msg_0[] = {-39, 1, 76, -74, 63, 8, -11, 4, 9, -21, -69, -20, 46, 43, -2, 36, -32, 33, -66, -115, 122, 37, 14, -116, 8, 83, 12, -30, -127, -88, -76, -97, -8, 101, -23, 97, 41, -55, -117, 106, 8, 60, -3, -88, -68, 108, -14, -17, -127, 80, -77, -118, 61, -87, -8, 58, 102, 31, -70, 32, -86, -121, 14, -99, -71, 119, 39, -91, 18, 17, 74, 14, 126, 78};
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
    msg.setTimeStamp(0.25314651993867576);
    msg.setSource(44731U);
    msg.setSourceEntity(129U);
    msg.setDestination(18179U);
    msg.setDestinationEntity(14U);
    msg.type = 1U;
    msg.op = 251U;
    msg.request_id = 23855U;
    msg.plan_id.assign("VDERGBHDUSMNTFWGBQNFJVXYQDAPXELIQEMTPNLLMIIAALXBQHZRUCVBHAEGZYXUPSKGCFGRVCBOKRYJMVHNTTOINGPDJORMHNHFKABBXWAUIVFYNNTCLSKSTOZKWGEXHWDGOCZSTMIO");
    msg.flags = 21446U;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.39067597854689007;
    tmp_msg_0.confidence = 0.1729131456041868;
    tmp_msg_0.opmodes.assign("CLYTDCZMREKERCRWHMZYGCZOJFBKBFLFNNWDJMFHAUHKKTZQASBXQEKEGGVBMXRAQYTZSSBQVJZRERIHOOWXUHLMOMFCUXRSNRBUPLJQALIEZXTGNNQAYULXODDNHJDDJUMVPGOJBUINCLSCMANENTQPVSDZWGUEHTYIXDGAPTACGCPVVKWBPFQYWLELWVPQGVPNFXTZFPWYOEXJHIIDIJFRYGOHRLVWYBHQKDJCSOMYIFTOSSZAP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NQLKTIRMCAGPLHXJCKEAIBFHQQXWWCICPODUICWVOVRGLEOWSTUKXQIWTFYIFBSMVJTZOERPRTHVIXDVKNTMWQRIANLCNRMGOJDJGBTSGMQFSPAYKZIHUWZERLBSJGFYSWLAQXBCDHSYSOYZLIZJEXUFLBMFNSARHCCTADSDYEKDPFMHLNEUZTMBDJXRGZHYZFZQDWRVEFAMUNVAXGMULXH");

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
    msg.setTimeStamp(0.8141334468183687);
    msg.setSource(49792U);
    msg.setSourceEntity(56U);
    msg.setDestination(35612U);
    msg.setDestinationEntity(230U);
    msg.type = 4U;
    msg.op = 86U;
    msg.request_id = 27737U;
    msg.plan_id.assign("PILRBWUVDPFOTLEYPDNPJRHBXCOERDDTQMRBNRHIJTMIWEGWQNRSMXQGAFGAGXKLQDIBCZAOTEEHAEELWJKHUZKYZPFDLIBHFXDHCKZYIIQVIQWSKUAWKKJWWLZOAICZXGZIXYOJBUDKTXUBNCPVLPSCJFLUWFPBMONFGBXHUSAXYYWHOJPUVXTCQMJEHQPMGYEOMRMAQYOUZCRGVGSYVBLVSSHJTRVDASMNAFMSTFEON");
    msg.flags = 19664U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.15367042525577312;
    tmp_msg_0.lon = 0.4136005117798661;
    tmp_msg_0.z = 0.2486313510177719;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.speed = 0.2743471167907162;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.custom.assign("EBMPHXDLJFGPWIWHZAZWQIXUPGUKTYVESNCFXNVASUOXZFLABYYPJEFWEIZNUYKVDVJGFIIALXGHNBLORTCUWREDLLEOBHZKGMJMOJBUVUTCRLNBXVRVQVMDAMBXYHQDVNSBFCOQKMWFJACOXPQVHLAOWM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TVAVEIZQEEL");

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
    msg.setTimeStamp(0.6545255339078921);
    msg.setSource(5020U);
    msg.setSourceEntity(32U);
    msg.setDestination(53595U);
    msg.setDestinationEntity(221U);
    msg.type = 219U;
    msg.op = 247U;
    msg.request_id = 20870U;
    msg.plan_id.assign("RUUPIXCMHFMYTWGGJUHTTTTKSQZVSCGZKEAZTVJFAKFLBOJYIPGHJHHFIPTRINAJQYDZNSWIKNRBCDFGVBSNSMYJSAYLBWNNCMBKQAIBDHKRDCGUQPLOGDJUMFCVANWWATRKBFRQRLNNOHLYDCQZMLXSKVIIEYKOEXXGVHFYQQEDVVZUVZIRYHTXOSIKPTOXFPDBVWMCOZEBDXUEUMGEPPHAUPMECFZOCXOERQLGWLJWJAZLWRYEQONSJAD");
    msg.flags = 51145U;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.5228760809340632;
    tmp_msg_0.confidence = 0.9184159780643525;
    tmp_msg_0.opmodes.assign("OFAOOGORFANWKBFXVKKJNBTPPQCBGFRKKHUNMILYWCSQGVYQCCXVXMVAXTZLJRQUWQHNKDOVTDMMVPXICLQGWZCVDIAKBVKLBQEYHOGJNTUJNFLFNUZQIPLTVDGBPCDAUUINZCQNESFSOJBYMZGMFELSDYIYENTGDIHSRXSKHPWRLAYAIAPHFJEXIB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ONXRJAEEENYNLGVCBXUJXYLZKSDKGUHRCSVVJGZPIJTTXQYAMRONTMHQCTCWIBFWUDHTBZQWIZKGQAWEYOFPKIDJIADHXMUIYSNOXHGDOQKCRMGJBQVKAITRSWWZIKNMGD");

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
    msg.setTimeStamp(0.9517590144781453);
    msg.setSource(19906U);
    msg.setSourceEntity(9U);
    msg.setDestination(39686U);
    msg.setDestinationEntity(15U);
    msg.state = 149U;
    msg.plan_id.assign("NNCNKUQHZGWWIOTJOEMGYJMYZVSYKLEYBCQLPZEA");
    msg.plan_eta = -831259998;
    msg.plan_progress = 0.5843150706706874;
    msg.man_id.assign("JVCDCZZDWJHWVENXJYVWBPKSSSBXBKMDT");
    msg.man_type = 33074U;
    msg.man_eta = 1970627177;
    msg.last_outcome = 6U;

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
    msg.setTimeStamp(0.5855360789525392);
    msg.setSource(36253U);
    msg.setSourceEntity(18U);
    msg.setDestination(1602U);
    msg.setDestinationEntity(194U);
    msg.state = 3U;
    msg.plan_id.assign("FPSZORMCCBJCFDUCFXKIPTEVBXABPZKXLXPDG");
    msg.plan_eta = 1395146996;
    msg.plan_progress = 0.7124136005367567;
    msg.man_id.assign("XDMRPNWVVKVUVICPMZMCPJNRRQHNDYPMDYOYEPIRCXETNCVNHQOSMBACAGOOJMEQKZLWKWXUXARDLBFLRATZHENEKFRGUATPJPDWQXKZXKBJNUSTLISKUYQROABZCFXZHFVYJEZJ");
    msg.man_type = 63900U;
    msg.man_eta = -1422504591;
    msg.last_outcome = 121U;

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
    msg.setTimeStamp(0.9802964691249672);
    msg.setSource(21687U);
    msg.setSourceEntity(33U);
    msg.setDestination(36022U);
    msg.setDestinationEntity(250U);
    msg.state = 173U;
    msg.plan_id.assign("ZGBNWJDMEXUWYHQRSJODWEXNAMTKLWTLGCHZXFULPKBVWEGDYUOCAIGEYGFQPNMKRFORYCMCRDPDMSOVLUARKAZNCASJZQIQSTHCXHXRSIANQFDBFTIELFIKAYJIWSTGQFHJOFHHXUXOJXMZGLRBHDUIYINKQTJVPSAXPGQEMBIETVIBLRCJEKMLCWTTNUX");
    msg.plan_eta = -399807908;
    msg.plan_progress = 0.21159662882844943;
    msg.man_id.assign("WBZSOIORYEHOJDTRACRRBVLXUTKMPZEIHQMJJALYNPCDRKVGAZKPISNMHRSFIZEIAOWFIYKNTYBDBLPLYGARTDFEYMNJQSILBONXPUFHFXQXFCWXWGMHQTSGVCROVIBYCWZABKNVCAXJ");
    msg.man_type = 62688U;
    msg.man_eta = 1761269687;
    msg.last_outcome = 121U;

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
    msg.setTimeStamp(0.927470309797025);
    msg.setSource(342U);
    msg.setSourceEntity(85U);
    msg.setDestination(6018U);
    msg.setDestinationEntity(31U);
    msg.name.assign("AXPJLWTIQUSDXBARZXFRHMNTYJKUPLUISMTZOASUMHGBJDGYHDEMNSGQAOOWLUYBLXHJGKKENKGCMDTRHYIPZROBJFKTYRPIFUVYBDGCCGLJSPFSZVHYSVVQQFVYMMXOHELICIIEOTGENAEMMVGXHYWVJNUZWUIKIPDIJSHQXANTCEUXWXFCCKGQCRLAPFTPXEYLFZBNAQPRHNAOZRLQDDBROMDOZVAKTFZKFTVPWDBNJROQSKLBZ");
    msg.value.assign("DVMZYHAQBSBTZNLXONYNIOYFHQXKCIZKLPJBLYZMHFXEAKINLTMEOTYFPAECEVJFEKOTSGYZCSZ");
    msg.type = 180U;
    msg.access = 29U;

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
    msg.setTimeStamp(0.4820453367710311);
    msg.setSource(32021U);
    msg.setSourceEntity(49U);
    msg.setDestination(36049U);
    msg.setDestinationEntity(180U);
    msg.name.assign("XMMZDCWXZIYVEDVCVNAGYFAOBNIAGKVIPWZLBEUMTLICJVLWUQZVRFCEFDIPCLZYUSJROJXYSBOTBZQLSBUTQGNJKLYVSESQWWSEJCDMKTHXZTSEFYVHGHWUXAUPHIDRHDDGRAIIRCFFBRQZRLXBUKEYIEDSPTJVKHUARBHXDHQGNMKMPKYJPNJOAZXFFGULNCOCOTPTAGQNVOWQPOMX");
    msg.value.assign("OXHWCFHCOUWARJQZXAEXEHFNOMFLTDCYIKXBQTVTVHSDVZYCUEHGEQPUBODSIYDPMHZCRSKXFLWGTGHTLJYUCOAJWJDBJCSXASRFWUGBQNZPSRSYRNCNKZZPEPMNQIIZQWHLVTKMVYGYGPJAVBLWMFRKXPJTTIGKNKJQTNLGNDSZEDEYMWXYUPKTMREAXQPVJONKBOEAMBYMHZLHFIQOL");
    msg.type = 184U;
    msg.access = 18U;

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
    msg.setTimeStamp(0.444699192682407);
    msg.setSource(62278U);
    msg.setSourceEntity(28U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(75U);
    msg.name.assign("QABDHKPFRFRJTHQJGBXCJEJGAFMIFXNYRKWQYCOSUGVSBHQJFPIIJEDUSCQPGEFKROVXOKCRHOSPIMLMUIXYVOHCGJNXFHGPKBDBWXT");
    msg.value.assign("NDHQQTYIAKXXRGZPHJXQAYBGGAPFBPHKZYHOWZUHBVILDCIYNOMXQDIJWCTRCJKPDHXGCQJBEZMRXORSPZGLUASARQMSBWELNNQUBFOTDTSMVSYDSOSBMINBANEXSTOTUWZMNFAULQNVWHPNYCUEBXXYIGESAGTUKMBFUIPLWTPVWOSKEVVVTIOMZHJKEVEKCCCFALORFDVAWCTLQ");
    msg.type = 98U;
    msg.access = 168U;

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
    msg.setTimeStamp(0.017199310056065897);
    msg.setSource(58331U);
    msg.setSourceEntity(223U);
    msg.setDestination(48775U);
    msg.setDestinationEntity(46U);
    msg.cmd = 240U;
    msg.op = 111U;
    msg.plan_id.assign("AKYKFNWRGLJKGSJPEBOLKDXPQPLECSNQFYMJNMMBLSDRICKWTFKOKTVIABVRLYVQTNOAIGWHMCOFQCERFQDCGYVESAHFHMVEEXPMCTNPTADNBJUKWDVFAHAZKLNPGSSDHYFLQVUZOQJSWUDTBUGXRNEUYHWUVZGGXYMPSOGRHXEZTJWTCPVBSXIXMKBTLPTJYRDIAUBYZNWZGZHUIUPEFQERQXDQIXYUOIJICHZORWZOL");
    msg.params.assign("DFMPQHHNMYXDGUXSRJMZARYZPPHEENLTBGHZXSQQECUSXBCYCINPBCFHEMWJTNIAMZCKNSKHFQAUWZASPCRBXZLRQBZVHTWDKRRSJVGLKEERMFVNDWQIDIVH");

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
    msg.setTimeStamp(0.4250610090221024);
    msg.setSource(8918U);
    msg.setSourceEntity(56U);
    msg.setDestination(16266U);
    msg.setDestinationEntity(136U);
    msg.cmd = 67U;
    msg.op = 8U;
    msg.plan_id.assign("VRDVDUGZWXBGVDNPSIUHIYWPUFKWESDCBKSFLGFGVQRPBONZJPTQSDUDFAKAXBPOZFGAHVILLMVMQYUTXZEWTCXICHGCOLEBNXJIEUXEUQOTYGXPCKQWLKWRADNJMXBOAVBHBRQMRPKBHRVMNWWDZNQPFZJZAWZRIYZOMICLIMASEOSLUTYLHMPSTAECQSJRYLMOKYNODMVYNJSWCUYPXNATCSCARFZKXHIHEOFUFTEHDJQBTNRETGYG");
    msg.params.assign("RLRACUSQQJDHZSWQQZWQIJOQTGSRORXZMILESTPMNMYKKVFQFOROYSTAIHPRHZNVMUJBPZEUYVNHJMKFEZNXTXOKTWEDCPRDAQWHVSBHXQHBCHZPPFDHFIIKADCJTABWOAWEMUDFLFSKOYGUUAWFVUMPSLSRXPJIICICZDKSEKPGRLBAECGGGNWWJEJXFYEGTXHIYTAYYYBOVWDONBXZNR");

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
    msg.setTimeStamp(0.7820437890546642);
    msg.setSource(28837U);
    msg.setSourceEntity(155U);
    msg.setDestination(37652U);
    msg.setDestinationEntity(125U);
    msg.cmd = 92U;
    msg.op = 191U;
    msg.plan_id.assign("GLUIXWQWPKSSRYPCYBZCXGOPHKIOLPDSDOMNQHAENNABVOOEXFTFHLSUFWEWRXVBIMOAERJZCYFSARSVZQIMHSJKERCMQPGHEUBGFNKLJJWFVUKRZZZCTMQYIQUDLNMTHYWIRXQEIRY");
    msg.params.assign("GIVBVZQGZSKZVPNDMUBMBLCYELGPWOWHYN");

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
    msg.setTimeStamp(0.5127416158926021);
    msg.setSource(9981U);
    msg.setSourceEntity(135U);
    msg.setDestination(12875U);
    msg.setDestinationEntity(20U);
    msg.group_name.assign("IVYTZNYMVSBIOYGHG");
    msg.op = 172U;
    msg.lat = 0.19667167255593443;
    msg.lon = 0.39230398584047665;
    msg.height = 0.886468962050704;
    msg.x = 0.9104105497593056;
    msg.y = 0.2763217803271124;
    msg.z = 0.014620861740736402;
    msg.phi = 0.540409872559149;
    msg.theta = 0.04513446185586567;
    msg.psi = 0.9979998620404213;
    msg.vx = 0.2801892315614173;
    msg.vy = 0.6966109232093145;
    msg.vz = 0.8807628427909667;
    msg.p = 0.2526638684848116;
    msg.q = 0.13851794153869346;
    msg.r = 0.6820244438047075;
    msg.svx = 0.2860125393115437;
    msg.svy = 0.156055857651191;
    msg.svz = 0.9379334891081013;

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
    msg.setTimeStamp(0.3605342168957649);
    msg.setSource(17922U);
    msg.setSourceEntity(211U);
    msg.setDestination(38155U);
    msg.setDestinationEntity(153U);
    msg.group_name.assign("TLKEDKLIBDNHRISEYMUYXCSOWGGCBZOAYFQRBRVQPDCVKAECLQPXDQGOSNOFDTXLEGUHPKQNGYEBEUVFBQFSGOGWKJTZIGZKTLCXP");
    msg.op = 104U;
    msg.lat = 0.3877016824201609;
    msg.lon = 0.25670938438833846;
    msg.height = 0.4624670157532267;
    msg.x = 0.7163741840988799;
    msg.y = 0.5959504793752363;
    msg.z = 0.8845512667644935;
    msg.phi = 0.0844092941378346;
    msg.theta = 0.9844501780531881;
    msg.psi = 0.9433777292329829;
    msg.vx = 0.06583654533460137;
    msg.vy = 0.3183709357106964;
    msg.vz = 0.794295828484851;
    msg.p = 0.31087574694403985;
    msg.q = 0.45625589740576655;
    msg.r = 0.8898890944353417;
    msg.svx = 0.02327448371961638;
    msg.svy = 0.8867554477721968;
    msg.svz = 0.9753875038289014;

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
    msg.setTimeStamp(0.5038633794896579);
    msg.setSource(18637U);
    msg.setSourceEntity(103U);
    msg.setDestination(60186U);
    msg.setDestinationEntity(125U);
    msg.group_name.assign("DKIKQZTKUBRDZDXMIICYHIKSPRTEYOCXTPJPHMHUTQUXRSPOXOGBNFWNPAVBFULFQYBFJFQLVLPXCWJDTCHGNQXJNHOAAWZZCSEVWSXAKXSMFHIUVWALXAJOMIETSUGBFUIVNXIBZBCWEJJTQQSWPKYAMPVNDRVATURMBMOJUQOEOHYSMHLVITSVPMDNL");
    msg.op = 79U;
    msg.lat = 0.3495539696755855;
    msg.lon = 0.9709221244515028;
    msg.height = 0.7787562639340533;
    msg.x = 0.38890307915452693;
    msg.y = 0.2091358776028902;
    msg.z = 0.009447857893744582;
    msg.phi = 0.5525298848596663;
    msg.theta = 0.4566297477427904;
    msg.psi = 0.42507188277965624;
    msg.vx = 0.1346820178630651;
    msg.vy = 0.1775983275373234;
    msg.vz = 0.47614597107537904;
    msg.p = 0.5099551653126008;
    msg.q = 0.06401293363345739;
    msg.r = 0.7993665997791796;
    msg.svx = 0.8002059283844215;
    msg.svy = 0.9652900130993467;
    msg.svz = 0.3807808973625474;

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
    msg.setTimeStamp(0.8945833580501924);
    msg.setSource(30813U);
    msg.setSourceEntity(130U);
    msg.setDestination(43242U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("ZVOECKHJWVLPAEQAIUGHMAGXSKBTICOQKFFI");
    msg.type = 30U;
    msg.properties = 91U;
    msg.durations.assign("TBAJQYKAWAUHMGSWIBMZTAJKIOSRTYTDJCOPXISEZXZUHOLQMPSFKTZXXEANDOUZWJJPYFNAIACRFPCHUCVOHDXWMHLLVKBSLENPZWRTXHOUCQMQWRPZBQMGVLFFDKVYQJQPUYHIKOMVWRBVNIZJUVEQVBCHBRANMYLELAVEIYHBOVTBRCSNELMFYYNTNRNCGUJFSGGTXEZYQOMKGSBDDRSGSUFITEXDCWGLXHNAGIRUC");
    msg.distances.assign("UKALAWCEQBTFBQXJYMBVNRLRNPLSNDXIHKWRKPCLQNHJRAQSAKPHZSCEKQZADWMZFRPWLCLFVKDDSIOGYWTFXUDHKUOXGQDIVJBTRXFLOGDBSBZHOTTHFQVQQNJPNGITCRSYNXYYPOYVPWIHJOFURYSHENEQXIYI");
    msg.actions.assign("YIPTVPHRCGEKIZIWGJRFJYHRLUSROVKMLTUNQPWHGTQHUKFRLUSVFDXBPEIJEZLFNAKUAYLWUYWGMDWQZPFDJGGKKETBNEQBCYSOBFZORDNOCCHTPSTJSDPNIEF");
    msg.fuel.assign("FXHSVCWLKMVBITBUQYETDLIBQRWEMXCJDFKPPXGWXVUISOHSCQAQETMPHCJNOSYTHJUBEJVYIKVSTMDEZQRFEJXQRMJLAZVBWPXARZZFNW");

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
    msg.setTimeStamp(0.6443860022278673);
    msg.setSource(39054U);
    msg.setSourceEntity(98U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("PKGARTNAAFBQJNARRYDOKJJRJZNOQBYGOOIVMLSOWVGBFUPEXYHRXFGVRAWNNZPMYMETAZIKMULZTBSHCQHGLQXENUZLTFDJZDTPFPBZHVCYHLUXWCVVTKXJ");
    msg.type = 248U;
    msg.properties = 150U;
    msg.durations.assign("CLBTCOMFQBJVNJUTVVUTVSBMIUMCEWQFHUUYODJYKFDVUQHAFCH");
    msg.distances.assign("NIZCAMFRRUBFOGLZLLMIWRDKJGAQVPLWALLTNWIKHXUOWDHJTPEYGSCTKYRMBSWOIUSWSYJWDODAYCZSXCKERMJAWHLZMZPPCUDBBDVVTLHQOXGQFKVJTFAUKARDIBHTQIGFUXJKPXCMIFITVYUNOZISQODIMCPGHPHRZWNEBCDNEENPNNJTAPGRZHVOXGELMVYJWSQQVKVXEUBFXGECLNNZMUMAFKVKCHBFBSQT");
    msg.actions.assign("LJQSARHAYQOCTZQNEVIGIQOIMMFIKDSLVYCOXMSYRPKJHDQXJLOZAENJQFRAJFCRMVTGYVSBIWNPIFSKSAZOJDCFAUGUPPWNEVUZTLMSXTETXACYUKDDLZLQSJFMUVNKNNHEXWVUGEDTVOCZZLHGYBVNQXPUOFBYRQWCFAMDMCLITNMEXCFBJXSUEFWZZOBMBDGEDPEKPHHRHZOJHJATHIYPDVBWRYYQKSRWGHBGTOGBILXRPLUWBUGK");
    msg.fuel.assign("OQUTAUERMKRJEMOGNCAELQASTGK");

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
    msg.setTimeStamp(0.7887452895218708);
    msg.setSource(43684U);
    msg.setSourceEntity(189U);
    msg.setDestination(7949U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("TGCIMYSLTCLKCMPOJDUYXLSNDTDIDQNKFMFNQJBS");
    msg.type = 144U;
    msg.properties = 11U;
    msg.durations.assign("TOSIBYVNFDEAMH");
    msg.distances.assign("XOJZJBBPDKDCAGWDWVEBTNNZKFHQKKNZFVTNREASATJLAJPGSBZLHYFILBPRQUOTTXDSZHWSZLOPIWTZVLMVGYDGUIWIRB");
    msg.actions.assign("VTXEGJZPHVAWOAZZJLYRETGURLXYDUNIVLJSVUOMANWIQPGOOVSIEFKWHBBQWENHQGEUIPRPNACNCDSQYWMPFTOFFPTJPENXECKAIIU");
    msg.fuel.assign("YFQVXUPZJZMAOKZOILSUEQBMRRWHINMCKKJIRVEAWFYOLETTXKLVWMEWESLYBFCBKNUHYDVYDRXLHKGAKHPLTNHROQKHPSCXGISFIXTDUPLAFSJENNQDLGQRJAABJDNBSITQGXMOGJTGBIPVMBJ");

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
    msg.setTimeStamp(0.24558103536195253);
    msg.setSource(16265U);
    msg.setSourceEntity(129U);
    msg.setDestination(63810U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.7965061758065412;
    msg.lon = 0.18276261868022114;
    msg.depth = 0.5673018483639349;
    msg.roll = 0.7789814107415086;
    msg.pitch = 0.24316618545955682;
    msg.yaw = 0.913486573545227;
    msg.rcp_time = 0.8119224399151468;
    msg.sid.assign("WFUYPPGSFOXKUABKVLAVRHWLTWCGCYUNUBKVJOAIQGDKDKXVCZPWEORNYSHPFJYEMUDDBLBZC");
    msg.s_type = 237U;

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
    msg.setTimeStamp(0.2993285502243599);
    msg.setSource(38447U);
    msg.setSourceEntity(25U);
    msg.setDestination(4980U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.7570712598157354;
    msg.lon = 0.24855934562795878;
    msg.depth = 0.2939719173046419;
    msg.roll = 0.6726206900060498;
    msg.pitch = 0.6152946308429331;
    msg.yaw = 0.07350135965626081;
    msg.rcp_time = 0.5952914819755727;
    msg.sid.assign("CQLAYCJIPN");
    msg.s_type = 171U;

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
    msg.setTimeStamp(0.10131520285521967);
    msg.setSource(18409U);
    msg.setSourceEntity(105U);
    msg.setDestination(19005U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.5918323615609066;
    msg.lon = 0.9870619129176943;
    msg.depth = 0.628111843470744;
    msg.roll = 0.20526347738139483;
    msg.pitch = 0.3591174683271404;
    msg.yaw = 0.715110480998026;
    msg.rcp_time = 0.575908547116569;
    msg.sid.assign("TKMJMCEWRHEOYDFUHJRLDWSWVUNGAOTPVAHOBPPKOQFEUASBJRUGGBNKNOLGKJSVLOVKMBNYWUFAAJATNWVMPXINHTQZHPRLVTTKEKXPAUJEIYXMUGRPEMGFMQSBKJRVOZXWUTXDIACRZYDILFECVWIOBQLVZZHCLQCPGOGFQDSYKSNPADTXFMJXBCYMBQRUXEYZQNZSGBRWLDTFSNDDHTFHSLMXJWQP");
    msg.s_type = 101U;

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
    msg.setTimeStamp(0.8021886366396337);
    msg.setSource(32757U);
    msg.setSourceEntity(212U);
    msg.setDestination(6199U);
    msg.setDestinationEntity(25U);
    msg.id.assign("BYEKLVLVQZMGWVMQTOWQMWMCDRAYZNXRYNYJFKZTYLRCPGZSNKMARLELMIKDCSKRTCTFZYFZQJCKQAFIMSNUQHHRNWYUSIGOLJEFGHDRTCMPVUATOUJUHJZLPAGBMVOPKDBLAPBXXIJWSHOFWSK");
    msg.sensor_class.assign("AVYDAGZNISHQCRDNCISSXIDVAXOXBIIVXRMKBODKYNUEVOFQHFXJSFNLJNLQOIQQWZNVDLYSYWTGLSMQJSVEIUTTOGLVMLFZOMTLGWAPKMSPPDRTCKRPXCGHZXKZPGPBOCRCMKCLCBAHJPJJBUKJPWXKKTMOYGDBS");
    msg.lat = 0.13967528800173967;
    msg.lon = 0.727622841753065;
    msg.alt = 0.39481770003978156;
    msg.heading = 0.9068555006996154;
    msg.data.assign("RKJEDVKSDXHPHWEZVOXVUEDGWIYWQIEEOPGXBTLEKVQEZDCFJRBLCQAYHLQHWJTISFWYPZVMSFJLQROPDIXTTSPPTOHANPANMVDMRHDEAUKFYCBRGKTBKTNYQJDXSXXLSFKDTANYATOVVGGYIAXWFABWUVFLIQJUFCBBBMCMZKC");

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
    msg.setTimeStamp(0.689117674525353);
    msg.setSource(4773U);
    msg.setSourceEntity(123U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(42U);
    msg.id.assign("XWHNOSLTGRHXYQPTSLXRGPJJRNXNPZGCHAAOQMNDQVPDFQXCRBQQIUTEUMBVYYCFDQLINJPLGWVFHXFAZHTUJMWDMQEOPOVFJSUBKCP");
    msg.sensor_class.assign("WKTPSTCYBCCBYXJXLZUREYGAIXZJMTMIHLKLWPDBYGZYXJZMLMHHIYHRAOCSHRPCITOXQNQSLBABWDBVXMREPAXWJUNFMINCQROVMTDJKHESEWZVLRUVXDDKZLVFQEZGKNAVKMYOEPVBEOQETPGPWSJNFOOWMLNISVVTGQDSYPYKOFHCTILIWOANPPADUKYDJOWHBNSGUZUAKQNGGCZTRJFCUVRQUBWEZQRCNDLUDGQIFXARGFT");
    msg.lat = 0.01789429045640334;
    msg.lon = 0.29138888614549696;
    msg.alt = 0.006594294092659769;
    msg.heading = 0.7940596385503346;
    msg.data.assign("ZVGGBYVYFYRDUNB");

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
    msg.setTimeStamp(0.5770638711755183);
    msg.setSource(46273U);
    msg.setSourceEntity(82U);
    msg.setDestination(32639U);
    msg.setDestinationEntity(168U);
    msg.id.assign("RTZJBJPEBOVTCXHIPFSGHMAYGWKSMEBVZMSFYNRZTJQLUYAMJFKGSVEGH");
    msg.sensor_class.assign("AYXIJULXWDZMFGCHEUGAQIEPQEIPTOEHGVSVSTXRVJZKFEBQOWTCEYIAEUYGXYTCHXIQGKIDZQLMOUWSJZSBTLWVSJDPBRGWNSPSGKSEYPRZMDQQMQHNEZKOIBQBRCBGONINMVRBXYOVJCPPJTLCNPBMZFVWI");
    msg.lat = 0.339207859211319;
    msg.lon = 0.9935597219665947;
    msg.alt = 0.10074840164496202;
    msg.heading = 0.10406841048530147;
    msg.data.assign("ERZGWSEANIVUVPZNNFJIXPIZKDZOKPIDBYNJFWLTBOYCSTDPQSCVCVBQRHWMMMQLTJBLLOLEXHMNKQJWXGRTVUCNNZJFHQJMSTFTMZFECNFOCGWRXZIQOFXYUBXTPPDSLMQDEWKEXNBHBUBDXBUPCPUGUKTAKRRAQXHSCOYPJVIEJDRQWLDYUOZHANZODCIVVYZBXFHLKAKHGRHLMMYV");

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
    msg.setTimeStamp(0.5820586162871596);
    msg.setSource(61600U);
    msg.setSourceEntity(248U);
    msg.setDestination(57938U);
    msg.setDestinationEntity(26U);
    msg.id.assign("QITKTBRLOFDZHKEHOIDHXMAVJNKDBAAZDTZDRMTHNUQIXJIIGEVABNXMGHUWKWYSGSWWMVQDVOYXAEDIZHUWFRORUNWSUSBUYDZNVXQNSIPJXPCUIAJRPVAGWBTONUTFXEEAYSJWZQSYEHMCQCAJPQSQKVJIRFLOTKGPBGKLERXHFYLZLSJKLRH");

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
    msg.setTimeStamp(0.7339842729688512);
    msg.setSource(58875U);
    msg.setSourceEntity(69U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(215U);
    msg.id.assign("IDHTKYBKBDGEOSMSLDCGZUCVAEFKAHCFLSDSNZQEBTJIYHCPVRQKVXYYXFVSSTMIMCMOQGWJHRSXUMHBTRFEGXXLDEYKTWECNHNORXVCJJQFAULAHMDOIEQOIMLAPLKWWEYTNCZCGTBOJXINUCAUAQJARNWKTRPSUPBYVJIWNGVXIYTG");

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
    msg.setTimeStamp(0.9703754232614257);
    msg.setSource(48183U);
    msg.setSourceEntity(178U);
    msg.setDestination(18848U);
    msg.setDestinationEntity(197U);
    msg.id.assign("CELAJCQIRFNVOLFTKBPEXNWAHUWWOXBLTOLYSSZSTVRQKFBIZBMAUJACSGQYKPAVELVGNPKYTMGAMBCIWITFWMWOAIDSBRMZQRYROWMOBFJCNCZKHIEKBZORPJNGOUMWLM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NRCNPNXYBFLWRITDZKHOFJMVLFYLVFAOFSTVGVJALAESLCAHBWGIUJUWLIPJ");
    tmp_msg_0.feature_type = 200U;
    tmp_msg_0.rgb_red = 231U;
    tmp_msg_0.rgb_green = 210U;
    tmp_msg_0.rgb_blue = 217U;
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
    msg.setTimeStamp(0.9699346734515598);
    msg.setSource(1672U);
    msg.setSourceEntity(243U);
    msg.setDestination(21220U);
    msg.setDestinationEntity(12U);
    msg.id.assign("FMCQVEMENTULOUJECDUENIZIEHJUMQKZYFYRTHLMVLJYZBELQATQSMACRVRVCJNOHBXFFNOBREDFOJPQNRFDNNSPNPZBDDDGYITCVLKAWSVXGAQGDMPEWQFWKHAIGBGXSFITS");
    msg.feature_type = 227U;
    msg.rgb_red = 9U;
    msg.rgb_green = 114U;
    msg.rgb_blue = 181U;

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
    msg.setTimeStamp(0.6452983851994566);
    msg.setSource(16079U);
    msg.setSourceEntity(45U);
    msg.setDestination(42517U);
    msg.setDestinationEntity(175U);
    msg.id.assign("VZQBOEOYAXBBPHSPCVZBLLLUVAFMPAEQRWXYONSYQJRMZYKICIGDYAKLLWVUSGFETGDRHZPUVEJIEIDCUKGGQSPRSETLNBQCNZDNPSXIDBDQIGLMPYXFRCQVTJMCIJWONJXXPBZYYO");
    msg.feature_type = 197U;
    msg.rgb_red = 106U;
    msg.rgb_green = 128U;
    msg.rgb_blue = 81U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1779385552875401;
    tmp_msg_0.lon = 0.27334175971872354;
    tmp_msg_0.alt = 0.09967589279463818;
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
    msg.setTimeStamp(0.07099577579878347);
    msg.setSource(9166U);
    msg.setSourceEntity(251U);
    msg.setDestination(33898U);
    msg.setDestinationEntity(134U);
    msg.id.assign("KKXUMUQTYTFPYYDIPQSINZCYQOCRBJZESBOLNLAKLVEMGRHJXXUUDJZERRGTTMMLFXINMDGMOVTFKCULIDHAPHVFCWEAAFQZAQWWEERMJIRWAVGOBJKJMVB");
    msg.feature_type = 170U;
    msg.rgb_red = 112U;
    msg.rgb_green = 63U;
    msg.rgb_blue = 192U;

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
    msg.setTimeStamp(0.7994739606503922);
    msg.setSource(36136U);
    msg.setSourceEntity(251U);
    msg.setDestination(55532U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.38138115697469055;
    msg.lon = 0.5926459817722922;
    msg.alt = 0.6696842891129898;

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
    msg.setTimeStamp(0.007224431647125273);
    msg.setSource(27416U);
    msg.setSourceEntity(101U);
    msg.setDestination(63038U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.9679215717251471;
    msg.lon = 0.41879216139558884;
    msg.alt = 0.8349562823082289;

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
    msg.setTimeStamp(0.18571262085643936);
    msg.setSource(20358U);
    msg.setSourceEntity(215U);
    msg.setDestination(6430U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.54057308002959;
    msg.lon = 0.9964173574134018;
    msg.alt = 0.11976605767565474;

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
    msg.setTimeStamp(0.8259541334307119);
    msg.setSource(8945U);
    msg.setSourceEntity(69U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(19U);
    msg.type = 41U;
    msg.id.assign("JELFDWLZXLRBEYOKJBCTKYSJWCVFKHYPIEUKDACVHSHHAIVFRWVLQIPTSULOOBNNBPEPZLISMNCQBIGXVBVIFWZURHEPRYNZRDNCFGIJXRTLZKYUARTKSXSZXJWYTXCYAFTADN");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7770749851481897;
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
    msg.setTimeStamp(0.9972955357095303);
    msg.setSource(48910U);
    msg.setSourceEntity(67U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(215U);
    msg.type = 73U;
    msg.id.assign("PWUZLBKWCDZXQDZSPYUCNERMTUTRGPVQAYXSTCMDNJDMSPEFVJSGCPFIKVCLIXKVTRLQRENMCAHHHXTSJOBJZYUQDVWAPBUBKVTELPFXGLHRNTYOYQNFJUUSIDGGQJEYFAEWKLOSVVEQRQOENQWDYXFZUWJPTXAODFJRRMOZILNWHNMYKXOCXSNIJASORBKHQAWBYKD");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 119U;
    tmp_msg_0.eta = 47391U;
    tmp_msg_0.info.assign("XJOIJZDRGOKAVTRWYYYYNCMIPBCRNCKGIZQHBUWSKCEVFDKZHUJNPWRKMTNMLGQLXFDOIALYJYXUQAESPOCEURYXZUBEWVIIUKAKLAGKFMDQWLDQJHURXCHFTZODODXXBMNXHJSTNUMEWRTWYVJVSJQZXLLHGTMJRZFFFQTFQGXSVLZOPA");
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
    msg.setTimeStamp(0.750237014207938);
    msg.setSource(31382U);
    msg.setSourceEntity(92U);
    msg.setDestination(59870U);
    msg.setDestinationEntity(199U);
    msg.type = 217U;
    msg.id.assign("XHKTVLMVWBGWYVLEOONYAIEBSFDBQIOSFNLFAVMTVZWUEEVKWNAFHYPGUEVPBSWXJWEDHPSAQEVUMRQSPGXMOYZDACJIHNWPLEGSEQJNQBMQORQDJMRXTRKTJYQXXTCUDKXHWHKXAMJCHHZCCBYAICLRNZGIJSMCNWKYXXJRPUPVUACUSIRQFFZLGZDGGSFTILIBZYISBOFLKZUYBWZKLOMJRUZNNPRDLTFOKIQD");
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("YXBBQHUZIXIRVXQCRGHPNQMIFAPQRBTVQZIJODPYEEWQKOMAPGYDLDMXTLAHNPMZWUETDYYXVKMGCWF");
    const char tmp_tmp_msg_0_0[] = {99, 64, 5, 80, 1, -102, 121, -23, 86, -100, -33, 62, 71, -62, -23, 102, 69, 4, -52, 109, -47, -77, 79, 119, 117};
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
    msg.setTimeStamp(0.12935581023185294);
    msg.setSource(5327U);
    msg.setSourceEntity(103U);
    msg.setDestination(42128U);
    msg.setDestinationEntity(47U);
    msg.localname.assign("PFTASDGUTSIPJJWOBLCWNOUHBTJLJQVXGPOCUAFCYUVFSOOZDVMPMRXIXBRXMZBQEHGWETPSNPJVKJRFCNNDVQHEKSSADGXYDJELKNDGPYXWNQNZPVCSBLVAIUUBPLUIIGMARVFJBTIHFEWKACLQHQBHGKDNYVMUMJRMOWZQURMGOXJUYAYKWHSTTERMZIZMHKZNYSPYZODWWDXWF");

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
    msg.setTimeStamp(0.9851578826636745);
    msg.setSource(55478U);
    msg.setSourceEntity(75U);
    msg.setDestination(44327U);
    msg.setDestinationEntity(57U);
    msg.localname.assign("MJPHSLDHKUYZGGIKOKFNXGOUHOQSOJOXVMDESRZPHVFMSGTOBOAVHFFFZDVRCNXUREQCWUTATKTCYSAOVZUCBILRJNUKBWPGQXLPPDNKHPFXGGBDPUAVBCKLAWQJCYIINMVRMBTIRLQRGBMZEYJDNWWQFCYEWZSENNNUNAHMBGZSJUYMFLKKZHPEDFIIXVTIVLERQFTESJOWGYHCYUSZYAIJAAMQXYWRXVQJQEHBCMDKTTLCTEOZRSX");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TMUCOWSBRTZUJOLQOFVTQSAAZMWJQKLGCVBYJOPRGSDASRESPNCUFUHZBBMDMOQTLVHODFSZIBSVQZQPAUOMOXENEGUVHHYFMREDUTXRNQGZUXKZCWBGBEPNFLNMQXHXFELBPVTRCPCCRTKAJKXWYDMXOYZHLSTBDQGGVBKAPWIQICITIYAKPAJWHRTCWLGPXKGINHVMJRA");
    tmp_msg_0.sys_type = 198U;
    tmp_msg_0.owner = 25590U;
    tmp_msg_0.lat = 0.8872175086551799;
    tmp_msg_0.lon = 0.9059017994833993;
    tmp_msg_0.height = 0.7255652997964015;
    tmp_msg_0.services.assign("VCIEGNVCKLY");
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
    msg.setTimeStamp(0.9884532978295041);
    msg.setSource(44383U);
    msg.setSourceEntity(116U);
    msg.setDestination(1108U);
    msg.setDestinationEntity(220U);
    msg.localname.assign("SLZMCZXDWHVXDQBSJLHSJTMHARBQEZEBNYFILBENKDDNPMTVCATAFRNPPCSWWLIGRZZUFDUKDOEUKARJJMXKTTMWUPOTGUQERPMHURZEZVCXRXGVYAIFSXDCJXKMCGKGUILTJNWFWOGTHNRPECB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("POEOBYQYNKFSOUXHGBCIIADFFULSOPVFXRYZLDMZHWDVIFIPWAKHULBYRJPVZADDMGCYGNJLNREVXPUKKRXAXFNRWCFPKVTRZGONJLLTSSHHIIBNQOWESMOBYBIQTVHSJEEMRSPXTSFWJMKQDKZRDXTMICYNYYFFCVUQOANAETWVNDEJVWJGUZCUCGZHZUCPBHULQJXXGRAGHGAEGPSWUAQYXNVZCDSTAKQIJPDMLMMTWMOWQELJZOQ");
    tmp_msg_0.sys_type = 89U;
    tmp_msg_0.owner = 36047U;
    tmp_msg_0.lat = 0.04807008301572713;
    tmp_msg_0.lon = 0.9186404514941832;
    tmp_msg_0.height = 0.7084402654471643;
    tmp_msg_0.services.assign("QZBVMULFUFSCETGOEHIKFRNXWBZQVQQNQAKMDPJNAXKWBEPAIFQNMSCRKJNWRKHLYJSHLZPXWVTSIWTEYYRDJCKUKDOJAMWFCKYGAPGCUPXIOKGCPSMGZVERVTMSEICMVZUGFMNBONYNHUHZWNMPVUBXZVEDOGRWGBOVLYDAHXJEMOLBVCZ");
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
    msg.setTimeStamp(0.24894992919608638);
    msg.setSource(32015U);
    msg.setSourceEntity(92U);
    msg.setDestination(45689U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("BWAEFDKJJBQUDVUZGHOPULYPSFXJCTBVNMWGGNEQCEYRPHQNBSTENYSFZRWTFWGFQQTJGMAQGLWYVTBZMBJVGRCSNJGRTDTUKDMAXKYBIPSBLKLPLFFYUJOOCVQISDQHHJAUVHOATKZKIEDKV");
    msg.predicate.assign("SLTEIFFTHAOGRIZOKSVJJWFHKESXBIQCCIAOYEFYUXKKAJHRHWZVYDYLZBSKBPNFTLDMNMUDZNGMODZHPFSTGHBMEOYYNVOPHKLPXLTKKCRFWBSKRDJXWM");
    msg.attributes.assign("GJSXPCDHAZEZYJDGLCFRHESZWULVHNSGFTNMEYQPMZLZWSTQYIEAEWYSLQUDECOMIHKFWJFMRSVRNUUODOBGKVYXHBOCUYLZEUJXHDXGWIHQGUTKIJSDSGKFHYRRBPVAKPCXPVRNT");

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
    msg.setTimeStamp(0.31181242566234735);
    msg.setSource(43363U);
    msg.setSourceEntity(83U);
    msg.setDestination(26843U);
    msg.setDestinationEntity(94U);
    msg.timeline.assign("LEDCHDKMIFWYMRLIARQBVRQDQMWDUBAFDCLHQGUFVKDJLJURJHPREZSNNXWHCCXVSZPCBGZOIZRLBHF");
    msg.predicate.assign("DWWECYQCPATQXEAJZVLWULDAUPBXGGDUKZWJHSQWRYDEEG");
    msg.attributes.assign("QMKVYWLMKITDZRXHUIFYGQDSCYGHCGBQQXXXJZANQPEOVEGUUKRBJCWFXYPDDFBTHJZ");

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
    msg.setTimeStamp(0.27578887561198207);
    msg.setSource(59693U);
    msg.setSourceEntity(244U);
    msg.setDestination(9089U);
    msg.setDestinationEntity(18U);
    msg.timeline.assign("SLJZGAYJMIYEVHSTKGYXVHRWOPWJDZLFHOMMTMFYQVSNAFPF");
    msg.predicate.assign("UWNPTJAXBZREYIQIOHHCEPUOPUXYGAGERLWUFYRZVHCIPACFWGZTZPWMMZSYPCPJVTHSBYOSFSEQVRMGLENIEOMZPNAVFTHUMMRIEXDFGGIGCQGZNPKAFDBBKJVBKMRXVIXHIDKYOXJABPYIHMULTRCKAYZDRTNLFWUCTBVCCFLDXNETHDYHXJKKLQKWQXGRWDSOSVCZYOAST");
    msg.attributes.assign("OPLBEVVPAYTMUIFVVBFYSRCYDHPAZXCDIXAIUUEEQETWHAEFOCFGJNKKUUCMLBCTZUIMNDQGKMGABPWJNWERYKRMIDQEITAATGXMOXBKSTNZDKTYSUFIPUNICAOHYBIHYQCWDJFYPVSXPRYSX");

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
    msg.setTimeStamp(0.07917246645161313);
    msg.setSource(23781U);
    msg.setSourceEntity(98U);
    msg.setDestination(43535U);
    msg.setDestinationEntity(190U);
    msg.command = 4U;
    msg.goal_id.assign("TCQHOFEJIPAUDMJJXVDXDGHHOCGJXWMPGQEUBUBCPFAVSLQRKQDRCCJZEKBSMYPQZLZVZTXQLJZBUONBXEFVSTQRVVXLNRDLKJEHSRAODRYFYYEKOUSSIFFGKZMHYWNTMZQMCLAGGXIGESASRWXUTZIYOCWXNMWFTYLKKPCNUETFIPGENJIZNIVSDLOCKHBBQDDLYATOFCJBXIPILTRRVUKOOAWWMPPWHS");
    msg.goal_xml.assign("MQEODKKRPGGJYACTKCMUWCBPUAXDJRGIYSIZVALMBUFFRPRVOBAUITEGTAHCPDEQWSCSOHTCWKGNIBSYSJQYZIVAOXTYINMTNJSEIEEFXQJHELXOZXOFKERGLJJIPCFMDQWXHQTWCLKVLWPLHLNRXHPNRAUVGXSBKDBUFWLVVOOGBPACYSUTPLFPVRNXNQAHDFQKCBGHZWOIDDRTDWUXBVFSHOGZMJBNYYMEND");

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
    msg.setTimeStamp(0.8578471735389446);
    msg.setSource(28531U);
    msg.setSourceEntity(53U);
    msg.setDestination(48446U);
    msg.setDestinationEntity(209U);
    msg.command = 212U;
    msg.goal_id.assign("XVGLWTLKUZJLYQXEVAUMNYOEGHMAICCTNCTWPDOWHDVFHGTJOKRHDDVFJSIMNFBQPVJXBRFHYDEPYQZCBFSOLUACYZBXZRBGHPLMAZXUIKNVPRDJQBKSUACVBLNXYPFNIUTEFWREKAAJSLSDDESDIIYEYBHWCGHRKLWQKTQLPWPYUTAPKRQPMLCOZQVEMGOZUQOCINUFXBSKSMFHOGDNKVJWR");
    msg.goal_xml.assign("LMAFGXIEKOAEQVKUYDYHMEYSFUSJFAMOSWEBBXNGANZQRQAEHPCHPFSWJNRBRKVINOWQGWJPYBFILPIDSECBMYYGMJUCLQOXMJNVJUBPTGPBLZGATHZVVTNCTAXDEBZIUOZJGKVXOWZHDRQLYETADLGZWYPZENDAJDHFFYKLCOHUVDTVCCTCBWNONOJKJTMAHRQ");

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
    msg.setTimeStamp(0.6602234266029181);
    msg.setSource(58366U);
    msg.setSourceEntity(109U);
    msg.setDestination(2611U);
    msg.setDestinationEntity(56U);
    msg.command = 15U;
    msg.goal_id.assign("VOKPQLIWUHAMESEKFOYLILKEXVNFBZLKPCHOMVBNPIOJSZVYLSBWKKEXAAPZCVXYGRDHRBIUNFTNIMDXHCCMHPNGETMHAGPRABTRYKMJSEZQGNMGFTYGSJTYFREDZQOQVDOMRJJWTZ");
    msg.goal_xml.assign("VEMFCXPZDQJTXXLJJMEEVVDYJLPLVRUJOVOKSCIFJRKGRPTBDNDOFAGWDYVWNVYXQVLISKJYSZGTAHYFGEWRPQGROAWXZH");

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
    msg.setTimeStamp(0.1941196965084283);
    msg.setSource(7459U);
    msg.setSourceEntity(87U);
    msg.setDestination(54572U);
    msg.setDestinationEntity(216U);
    msg.op = 180U;
    msg.goal_id.assign("MKZIOGDPNHREUXUCBARYWZQEHSMJB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WEQKFHOGZWYAREJXXVQXFOKLBWBIIBNVBDNQIZLGUDBTLUJDBOPCUSKRXZEZNUNRTQHUQRSFJAQFEPVIDZMJIIFKNWGETGDOODNGMBSOPJBUAFTYMQYMXVTMPGCMHTPLELFQHSHRANNYXYDAYHASQSCEUHKZGQLVLOGALZOKWKHPSCS");
    tmp_msg_0.predicate.assign("NPEFNSTFJWTQYWOBTNASSWCWDQRGZXSMGWVTUOLLKAUTLHIRXDOCCEGVKCOMIMPGSNTDTVJZFBBEJJAZQYYKVOIDSZJQNUMJVZIXXMUEFRXWYMK");
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
    msg.setTimeStamp(0.08065804320192627);
    msg.setSource(20137U);
    msg.setSourceEntity(36U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(139U);
    msg.op = 103U;
    msg.goal_id.assign("FQJOHKVXLUVNFNVRIRNJXZGKXOKWTHBHIXPBBWOZHYVVGTQKNFMEKJIGDFIAEQHUNGMWUKCCEBZXYBDYLZBZYIEJSXNJGYOAJSLMLNCLHSXJKDPWRUWDIMGQAEFSARLPTPRQTUDXABZAWPM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HESUAZQUVGIAVKGGEJZYVMPSDLXRQUSMIJATCFBNQREGZ");
    tmp_msg_0.predicate.assign("XDXHBWVTRLBFPFMEIRHFQWXMM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OHZRHXNTJSCRUPWWQYMVIFSYZFUYINLYLOMSRMLRTQXBRYXEIJDYUGUFEEDLKFLJUGOSOZCTNQDQAMWRNINDUKTYCFJMKAPDYBWQTRVABFBMOZCMKXKADJDGMZNEPHXEEQJGPCVJJVZGWBGOXLHDZAKR");
    tmp_tmp_msg_0_0.attr_type = 240U;
    tmp_tmp_msg_0_0.min.assign("IZABYZZTUNOVHAGAVDMAAQZLWWKAHGKMSMFUE");
    tmp_tmp_msg_0_0.max.assign("JIPBVPENRIAXXUPUXHQCDDLQUYGBGUQEUYXLPCWLPAOFNSSZQHAJQTQSCJDCRRSRGQWGTWIKYEWOKFTMMXKXOXGCWYDZKFACTNSGVMNKVMHCSOEUFOTZIMMHK");
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
    msg.setTimeStamp(0.4129603756499479);
    msg.setSource(65039U);
    msg.setSourceEntity(224U);
    msg.setDestination(49438U);
    msg.setDestinationEntity(35U);
    msg.op = 155U;
    msg.goal_id.assign("PBYJJAYPAGSKBEKOTMYXJXSVNUPWNYWXMKEZDMCZFAKCMDNWVOBCIHUGAXXFMRJHEEGFTWEZLAAGWWOZLILXDDMCLPYAPCZBEQBIZVOQADBTRFJRESJVIMFLWNVQVPDFURSUVKTMSKKBYAHDOKUXCCFHPUNQUUKNLROSKFRSVWLZIXFGJFVJIZOOHJGWTPHQHHLQZVOQLRRXUSTQMRQWTCZGDSCDMPHYNYJENINEDSGCTPI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BDJOBCMWCMDGJCXZOSAAKGPKQRWBCIWYMILDDFLOSNLIHGYNIYFTIXWXYLMFJTKTUJOBVRARRFBMRS");
    tmp_msg_0.predicate.assign("IKVTHMXDGLWUCEMIROXGLHAJEJMYUHPDSOCYBPWPJPKKNTFSSIQMXGXIXCGJAVIQYHWUZROCCCSZEFAOSTLBREUUIVJMCLJXPNTSAFKYVEOYBDJRWYRIQHTHWWOYGGZGQGFUCKTHDAPSJMRULIJXRCMRYLEBJXAIVZHNBORPVKENDFVLUQZBOBPQAMFDBWQFHYGY");
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
    msg.setTimeStamp(0.028181424950248446);
    msg.setSource(14962U);
    msg.setSourceEntity(217U);
    msg.setDestination(22776U);
    msg.setDestinationEntity(85U);
    msg.name.assign("AVGZIZHSOQJCSLTRYQCXBUUVUSVIZXUJDKJBNZMHFVOPQSGEQXZYVZJYXOZTUPZGDMROINWHKDIMILKYNUEWAA");
    msg.attr_type = 156U;
    msg.min.assign("TIPTAEZNDUZJWSXPZARJIITPSVBPCIRFAAACRYMWYQNMMVKTPQJATBVOXPWOKEXFXZSVGOXLNNIEYPCJHQBWVNYGWBYKNCLBTONMAGEAOAMXTEJHMGRLOCMZDDGBYDURFDEFO");
    msg.max.assign("OVOKNTZYQYDCAWSNOHGDTJBHSJBADCPDTRDVBPTIYWXHYPCNXIJSJWESMVNFCZCHBKLQGY");

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
    msg.setTimeStamp(0.7725550834693664);
    msg.setSource(65232U);
    msg.setSourceEntity(126U);
    msg.setDestination(16502U);
    msg.setDestinationEntity(5U);
    msg.name.assign("WKELVAMWLSXPYBWOIKSJOMNYTABAHLTBPFXENUOIBCICCJZHGSRTOWNOZKQSZIQEZUUXXRFRTAHWWIUTFVNUKABBZYBLXSFAUUMP");
    msg.attr_type = 169U;
    msg.min.assign("MQZXQCAEDBLDBYFPLQSNIGBYPFRVWDETQLTEXFMPFXHPGKZFULOJPAUMZTRGPWWMVHHWSQKDJFCEMMHYAXQNPJPGKBEELSUNOVNCTTWHUAQTDDDBZRKRSJRZJIUCFBCVOEKYGSKJKOWRECADOBIHVJTUNWMKAUJWYYGIEICBZHXGNNRFDIOXCMZNXBLSIGASISFRWYYVXGLALIONURAJLTCSWIAFBPZYQQOHXTTOMUNKKYGDHVLSJVCXO");
    msg.max.assign("APECWFECJJFTVZROGUGFKGACWWDFCOYXNAZDMTETSUHLRILWLHOMUDZIJCTWLTNBBVWDABNDIBJQXVNYCTFSTJAZVBUQKMBLGPAIZPQKSJNKPQDCVGAJKNKUPJWFMOVISBRKZKYSHXOTNSDGYGUHHLLUHZENCSTIVLYQQJCEDPRMWZMXXXQOTMJFYFESREIQBGXMNMWOPVFQDBXRAG");

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
    msg.setTimeStamp(0.6951984714324433);
    msg.setSource(1132U);
    msg.setSourceEntity(113U);
    msg.setDestination(5347U);
    msg.setDestinationEntity(214U);
    msg.name.assign("EJSFRFDYRQGLPXGONNXMARPOLWGQAAOQMBCAKAFEBUPNZGWBQNDCNWIUKKOPRHWRBZHDTZDXYOBDTATDHGYPUXSLGDXJFLQNKBPMRICVKROKAJCFAHUFJQCQBZSFYCLBHJTPMGIOMJZRVFDRYYQLIXYUCIWVVCTZTWYPIA");
    msg.attr_type = 109U;
    msg.min.assign("RHPXWJBYBDROVCJKYJSVFASMMKACRHMGUGPCWPUGIYWHOFFEXPWOBFTMPDOKVKEUZYVLUQAAYXJCTJAKQEORTEBZXCEPITOJUSIWDVEWRVRXNYOFZNBOX");
    msg.max.assign("DFHZCFUVYAZDOSRSPAASIXRRAOJOYWKIYEUNBZVWOHRTELPGHKJOQQAKGEJQWBIRPRVNDHXFVXLCSPTAPZFTGBKLCYOMERQXEKYMZ");

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
    msg.setTimeStamp(0.35793436425196623);
    msg.setSource(6139U);
    msg.setSourceEntity(110U);
    msg.setDestination(27417U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("YGAHVCNXPUDQRSRGGQVLINEPZWIWUDMAVXEOIFHOELYTQYNEBADJNWGAKKQAUJEXJBPDJPXIHXTOVZBGTQWHPEEWPILBSFJOOUIWLNSDCJFDRLFFJOFBMRCVSTKITBUYDMRUMBFOQILYGDKKILNHHFKLDPQAQICKESRJRVHVUKWYSXBHSMFZTPNSQMNOOXCUTWFZALGCYSNVZY");
    msg.predicate.assign("JCVGKWLCIEFCCHYZDSAHOQKUNZGKBULSUIWBOLFALGQSEIYZTVDDCBGCGQTJXEXODRNUOZLDKZMEHMFMIJWOPSDFBVKRRNNHBRJAZCJFLNADBABEWGFWJBTKPHPLXJYTXWXHOXIXGIZCYVYEEDUPXOVDATTMHHKFGSJRSMRSFTEVWFYPNYMKXWQWFTKQUVOQNNUNGHMZUYSTPQRCQVAPRKQXOGSNZRRWTCOYPQMVJAPHBIEBIYMULSZA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IZVGYRUANGRIKZKKJDVLHZBAXDXOLLVBEROQSDRBPNCBHYHGGVEEJMCSSNKIDQYUWIJPTNRLKUIOKRCQXBAQNTKX");
    tmp_msg_0.attr_type = 165U;
    tmp_msg_0.min.assign("GLJBJVCQYAEMFMRHLGZXBKFAWSZBVQEOKETKWIGBXGLOUWKVOEAJWJPCXBXPQPZLYBNVFZQUNDNUMADOMAQENHIJQZIRNCXRLFGTTHOTVCQGOLUCRCTMDFJIYRHCNRMSTSKHTDJDKAQUFCMTFSZGRPEPBOGPAKYYYXRSYTHPDYJEDAEUIBWBXMFWWIVLUPVDSYVONTLZSVCRGXAWOPYBDSJZV");
    tmp_msg_0.max.assign("SJCZYGGXRKJAXWMZZWICMSEGEJEH");
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
    msg.setTimeStamp(0.12886498484915077);
    msg.setSource(7738U);
    msg.setSourceEntity(175U);
    msg.setDestination(58717U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("VXQLLIRKRPASSMDFQFDZBQZWRJJWJCHAEEZTVJPYJTBGAGHOQMEPEYRPSXAVHHWCOJBXZKKIN");
    msg.predicate.assign("XJFDFFKZZUQQONCRRLCJSIQMMJCQURGCHYPQSLYRJADJKKVOPZDHXGUJWD");

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
    msg.setTimeStamp(0.9090131871997565);
    msg.setSource(60940U);
    msg.setSourceEntity(103U);
    msg.setDestination(33390U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("ZXRBWYKVYIZABVUXYJOUPUMG");
    msg.predicate.assign("DIWAZIQLPYTNPRCFBZBAOSUIKEGEAEGLCNSPUYVVFTYJGSDMKOVYOWUYJRUWFGKNQNEWZDSGHPQAPXGNGSFJBTMDWTJNBIWINLBSEAXSUJRGRRQMTXTAOOUVTBPERZSIMRCSYCMLOKWXLDJXNHXZKVMHRJCJPLMKHHBVNZYWECWEYLLDHBCBFTSIYKHWHKQODEM");

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
    msg.setTimeStamp(0.2906090966501925);
    msg.setSource(9121U);
    msg.setSourceEntity(16U);
    msg.setDestination(13344U);
    msg.setDestinationEntity(2U);
    msg.reactor.assign("AKVEMQAUKDZJLXOJUYEJLQVUKRLMAQHQQACHADWZRWHXQJWSGTWEKMYAEPPDBLTWCWAMVDNNCSYVUBMPBOHFKNFYTJCHIILGIPJFSSXVREJGUALNREHAD");

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
    msg.setTimeStamp(0.0148569519072137);
    msg.setSource(22354U);
    msg.setSourceEntity(213U);
    msg.setDestination(61976U);
    msg.setDestinationEntity(219U);
    msg.reactor.assign("LBOUMHVEJYFTMINOSSGINBZRSXUKXZGARRFFYZXQZHNMMBGVQMOOJONRMIVCBYCYXSCDMJNPWQKXUYVBMQOEDTXBWEUAAHLTYLFGNVCZTAWZJEPVINA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZCEAAAZVNJCLNEPJSURJYWZLADONROARIWBOLNFHNSMWUDXNUFVXBJHJTARYXWEFIMBFPODVEEJ");
    tmp_msg_0.predicate.assign("AKAGBHPBRXWNUEONUGERZAQUQUEGOQUFAPIHTBTMJAKQOMDHGCRSTBESTWRBWJKRNXKSCFBTLGHAKSYTCOUWNKRWLPWZPJNYFSUZXIYNXSDLPYASVLEDFZHAXLRNNSV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QDETXINXOBIESRISPFHKETBYGWAJDZQMBXPHGFQLVZIPNFW");
    tmp_tmp_msg_0_0.attr_type = 213U;
    tmp_tmp_msg_0_0.min.assign("EOBSMJNVUQG");
    tmp_tmp_msg_0_0.max.assign("QFYBMVUDABTXDEDACGNWXRUZTYFJEGKQOREFXISLUFSPXTEHUZZCUONIRHBMEPWYSBFCZTRISNPGBLLJILTKZYWVNMLPQJSEIPSJXOBOJGICMRRLGPUMKIRDWBDZKNBEDBEFFEAMHTCZSDHPXASFZGCIVJNLCRYWIUKWVBGVVVHAATFNQQHJKUWKMQKXXHQOG");
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
    msg.setTimeStamp(0.4192755527986026);
    msg.setSource(53108U);
    msg.setSourceEntity(48U);
    msg.setDestination(19297U);
    msg.setDestinationEntity(173U);
    msg.reactor.assign("HIAHTWGNQUPKDSVNCAHPNBSIIJVYBZHIVAOUIEYWZEPJLDJMMOCYIWBSZXDDWZCRBMPWSONUDMHVEYREJRTVMGKUDQKHVAPJXEBETAQZORFPZZSIBZBCUXEMQAWTQLTCOTYOKF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TCUSWWSVLTTBPWKTLDLXKMNEITRJQNMUTPGCHHDIKRBZDLJGQWNLYYCRFQZDCMIAUWQMZKVHYOHYARDAFMBQSWPAJAWAOBXDUBMEUOYBCGJLHZGMSERYUHQGWKLSYZIAFKPDIANHFFTREGNNPQSFONKQVSCSETSNVVMQZCOPJOMIFXBKZVZBPXQDVNXGEICTJRDUEYXNXAFGPREHDOZEUCJYJISPPTLGRHXJOYUWFBKVXHOZRIMLJOCLXW");
    tmp_msg_0.predicate.assign("VSDYCXLOPUVTCFSSIILEPSBZAONVKLRSSFZKHIHLUQHDRQWAOVEEELJWINIFYQPUCDXTDSDVUCDWROHKGYMMWWYZTAVZXJRXAKMGYEFPAIUCQDZZHTPUOKMJTIVXEGQNRWPFQGPASULTGYRXMGMGGYOJFUTUAKHMGZKKJIOBKE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BUSBQDBZHITIKXLMVQIACMYGWHQYXZWRSHKBSAPWBLVJUUVGZZQXULMCRPSDKCJZFNBW");
    tmp_tmp_msg_0_0.attr_type = 19U;
    tmp_tmp_msg_0_0.min.assign("LPUEFUXZDFADVNIRRUICTYFWOQNDBCPCYUYECWLLQASSMJIYMVDJTZACYLWMVBVEFRTXKVYZGDXZSVZVEFEUDKUGOYXHGNZDMOOROHAE");
    tmp_tmp_msg_0_0.max.assign("DGRIVPKUDWHTBWXUYIUYQLGJWIOXBVOJRGYICGPHDRGXBUGHZHHULTNLPHPRUMWYSQRPJPKMQQTF");
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
    msg.setTimeStamp(0.15018076315264672);
    msg.setSource(64641U);
    msg.setSourceEntity(89U);
    msg.setDestination(7352U);
    msg.setDestinationEntity(244U);
    msg.topic.assign("WIPQCAECKGDLTJQVKAKPHTGZRCBTVYGEZJKZXHQCGHESDZMCYIFIBSSQSXANYYTECGSTYNNTRDMIKURGZJJBKOLFWIZKLHAMGQMDGHEWVCPJOMWXUVZNBTBPTUZHNPFVBKNTWBFBAVOIEUFFYDYQFHZEDPRWSIWBDCVULJXUAPCOKHQUDEINXNHOWFHUVAGMRFSXECRIOJPNALDQRLUWLPOYZLKROVDMQORXGLLYWMXIXYASXAMRJMPV");
    msg.data.assign("DBPGIGPUHJFHSVLOORRKETMPTCJCKUTYLHTZCWHSDQPKMIOKDYQYNTUWTLQBBHLMVZEQEWIIYCEKPOJIGZAABMZEEGVSNUVZAZBUYBRSEZHXNLRBQWHEOTMEFTPIXGDAVPPSJCYPJCNPXHKCQBDGIZLFJJUHMQYCYUWIFRMNSFRMQAWWANUXLTVOAXOG");

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
    msg.setTimeStamp(0.6267328120536076);
    msg.setSource(31767U);
    msg.setSourceEntity(5U);
    msg.setDestination(15467U);
    msg.setDestinationEntity(174U);
    msg.topic.assign("UWZYTDYQRRBXMUPCFXNMLVJDKAXTFJVAHEOUDEYXDHISAGKMDBRSAVWONESWHCUAQBITQQEARRDJKQPGLPDSOHXECZUFTGGMOHZKJZNPSRENOPGCLLXLKCJLYKLPFBXIW");
    msg.data.assign("XQETMFFXYUHZYVSJOGWIJCSRBMHUZYQRBSCVULGKDWPRUTSOCFBMEJSXBIWELWKXNRMYBHUGNDRQYVQCTUAADIXAHXXYNFNWWKYHQWTKKZPSMWRKTJZBDXIHASLMPEIICVZHNBVCTJBOFYDGJDHUCOFORONHFZEUEHQUDGJDISZUFEZ");

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
    msg.setTimeStamp(0.63239477728357);
    msg.setSource(39094U);
    msg.setSourceEntity(23U);
    msg.setDestination(10521U);
    msg.setDestinationEntity(64U);
    msg.topic.assign("TAUKPCGMRGZHATVMSGKBZHMGXLDDRQFDNGIGLPPCHGUKTCRRWLEMDNUCNLYOBEJEQKESIYFCCWTWZIMIHJXFKKSWSCEJFGBFLQAVAPJURZPLZAHBDXZM");
    msg.data.assign("URGDWDOLGUGLJBAZPGHIKNADDRYWNLISYVMZJZCFYDUEEWISYMXQFKJAXTFONBDDZZXXQQPIGEQXWNMQFRKOLNQMCSDYKREHOIVZPEGWGVVOKCFLBFEJZBJUOHJKMQPNLXCSOMPVWOACUPKGS");

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
    msg.setTimeStamp(0.6293373711983201);
    msg.setSource(27016U);
    msg.setSourceEntity(63U);
    msg.setDestination(676U);
    msg.setDestinationEntity(132U);
    msg.frameid = 7U;
    const char tmp_msg_0[] = {101, -92, -50, 108, 16, 62, 11, 93, 108, 86, -73};
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
    msg.setTimeStamp(0.2152294147367242);
    msg.setSource(21320U);
    msg.setSourceEntity(176U);
    msg.setDestination(12181U);
    msg.setDestinationEntity(56U);
    msg.frameid = 226U;
    const char tmp_msg_0[] = {-89, 47, 79, 18, 122, -17, -117, 33, -41, -8, -53, -34, -36, 108, 80, -119, 0, 92, -47, -65, 36, -95, -98, 71, 47, 65, -87, -22, 120, -36, 14, 7, -87, 74, -23, 74, -48, -47, -75, 16, -126, 100, -10, -8, -18, 64, -42, 4, -34, 41, 8, 120, 111, -126, -41, -14, -22, -108, 80, -91, -11, -54, 70, -42, 51, 3, 114, 101, -27, -9, -59, 65, 27, 10, -29, -81, 126, -124, 91, -59};
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
    msg.setTimeStamp(0.8090056359160236);
    msg.setSource(14702U);
    msg.setSourceEntity(61U);
    msg.setDestination(62302U);
    msg.setDestinationEntity(182U);
    msg.frameid = 11U;
    const char tmp_msg_0[] = {89, 68, 14, -78, 107, -39, -41, -41, 73, -76, -89, 63, 35, -9, 100, -4, 67, -68, -80, 67, 40, 28, -121, 40, 95, 91, 120, 1, 91, -72, 103, -55, 75, 43, 14, -96, 47, -62, 102, 113, -35, 11, 71, 7, -40, 45, -66, 3, -56, 43, -68, -99, 7, 123, 109, 71, -53, 124, 51, 87, -56, -67, -44, -70, -6, -29, -44, -122, 50, -98, -78, 107, 27, 80, -119, 37, 11, 9, -76, 85, 66, -2, -65, 71, 107, 114, -56, -37, 38, -86, 76, 109, 97, -103, -60, 108, 39, 36, -94, -105, 31, 100, -61, -51, -46, -118, -69, 11, 126, -49, -76, -118, -36, 116, -98, -127, 96, -21, 11, -96, 20, 86, 40, 33, -43, -24, -88, 111, -73, -42, 71, 94, 39, -105, 24, -6, 46, 102, -60, 23, -66, -58, 114, -4, 124, -58, 94, 112, 45, 104, 71, 37, 0, -16, -26, 72, 70, -123, -35, -120, 15, 60, 20, -101, -123, -56, 95, -61, 31, 54, 15, -26, 38, -6, 22, -102, 107, -47, -58, -94, 99, 103, -127, 125, -8, 7, -55, 10, 90, -7, 19, -41, -66, -127, -59, -14, 61, -75, -35, -37, -57, 68, -125, 124, 16, -47, 56, -85, -105, -49, 13, 28, -18, -37, 29, 104, 92, 67, -38, 124, -11, 9, 13, 108, -39};
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
    msg.setTimeStamp(0.5062573361641398);
    msg.setSource(8718U);
    msg.setSourceEntity(190U);
    msg.setDestination(63235U);
    msg.setDestinationEntity(76U);
    msg.fps = 66U;
    msg.quality = 239U;
    msg.reps = 117U;
    msg.tsize = 202U;

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
    msg.setTimeStamp(0.31563472553942995);
    msg.setSource(17987U);
    msg.setSourceEntity(15U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(207U);
    msg.fps = 5U;
    msg.quality = 136U;
    msg.reps = 161U;
    msg.tsize = 25U;

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
    msg.setTimeStamp(0.5419387813339551);
    msg.setSource(24129U);
    msg.setSourceEntity(76U);
    msg.setDestination(13256U);
    msg.setDestinationEntity(113U);
    msg.fps = 156U;
    msg.quality = 210U;
    msg.reps = 150U;
    msg.tsize = 194U;

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
    msg.setTimeStamp(0.9086593778427147);
    msg.setSource(16512U);
    msg.setSourceEntity(110U);
    msg.setDestination(34596U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.7252008574709357;
    msg.lon = 0.2705526336184413;
    msg.depth = 11U;
    msg.speed = 0.8359984392742772;
    msg.psi = 0.19059478876022606;

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
    msg.setTimeStamp(0.6799592385779468);
    msg.setSource(44605U);
    msg.setSourceEntity(186U);
    msg.setDestination(21243U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.21453608001266977;
    msg.lon = 0.4198656345464895;
    msg.depth = 26U;
    msg.speed = 0.24814338124157242;
    msg.psi = 0.5017897144097601;

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
    msg.setTimeStamp(0.7492870252053471);
    msg.setSource(44239U);
    msg.setSourceEntity(237U);
    msg.setDestination(34386U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.9808193767510818;
    msg.lon = 0.02189459571209007;
    msg.depth = 60U;
    msg.speed = 0.6571133998963508;
    msg.psi = 0.358134478332249;

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
    msg.setTimeStamp(0.5099702649535509);
    msg.setSource(43618U);
    msg.setSourceEntity(104U);
    msg.setDestination(46454U);
    msg.setDestinationEntity(9U);
    msg.label.assign("JKMRYLVIFONEJIOZRYZVMCCRHXLWMXCCNLWQYYABKHOUUELRWLRYFPOHKFQGEVWFXTEFEPHGUAUTLJLJFVADDQTISTMGRRWBPNJKYXOOOBTOBQHDGWQYFZSWIGABSZDVVVPBBCXZZEKXPQRISSFEGFGSIMVMJVKVCGFEXHKJIRUGIDHSXZSZWPTNMNMYPWNMDBDGUAQCOJELHRKPULNCQWSLCAPTU");
    msg.lat = 0.7102301804077242;
    msg.lon = 0.4984067077135399;
    msg.z = 0.779011029574779;
    msg.z_units = 95U;
    msg.cog = 0.9211483011688315;
    msg.sog = 0.5397391814666292;

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
    msg.setTimeStamp(0.3860319817771458);
    msg.setSource(11587U);
    msg.setSourceEntity(216U);
    msg.setDestination(7188U);
    msg.setDestinationEntity(104U);
    msg.label.assign("NTUTPPVNSHZAQDKEJGGRBUCVUVNQBGXMGFKOUOKHKDJNYDVNHHBHOXMIUOYZKOOSIMIRTBRJAYSZTRMYLHCFNLCBUIOPATGLFTWQKCJHZLFUZXUDSNCJJEQKERQ");
    msg.lat = 0.6384327082530418;
    msg.lon = 0.9785087469011552;
    msg.z = 0.21825731168850204;
    msg.z_units = 81U;
    msg.cog = 0.9811783187349085;
    msg.sog = 0.15862370956358895;

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
    msg.setTimeStamp(0.2462885302689275);
    msg.setSource(65443U);
    msg.setSourceEntity(41U);
    msg.setDestination(9329U);
    msg.setDestinationEntity(229U);
    msg.label.assign("IOZPTBJRXKIJFOGQCCWRKMGGXEMZRXIMKYHXEOLQYKFDFINVHFDQHXJKUNDCDCKNNPGITJVCTKFJOCWWPYWSWVEVOXAQLQLBURLNRLSAVPYPFOHBVBSYFSEMWEGQHRIFTQHWNWAIRBIKRAMHYKCPUUFMYISLBAHMAZGYASSJLNEQLDMBMLEHJEKBPZQSVNSOPZOGDXX");
    msg.lat = 0.21392594138048004;
    msg.lon = 0.9202027468220301;
    msg.z = 0.9298689764008415;
    msg.z_units = 172U;
    msg.cog = 0.4213882268904432;
    msg.sog = 0.7608766992144819;

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
    msg.setTimeStamp(0.3163787361289726);
    msg.setSource(45077U);
    msg.setSourceEntity(87U);
    msg.setDestination(37614U);
    msg.setDestinationEntity(205U);
    msg.name.assign("UPIIGQSMTUYDIKNNBBDXLDKGTUOEOJBDAHAKOFEYCLKXPKNJXWHLOMEQQSCNWVZNZZTWCAQRRTEPPEOFTXNWUGKHMDPVSFXMVKRGQJIKIPY");
    msg.value.assign("XQHLSDHOGULJFEIMVZRBXIQAJTLHHFDSQKKHJJWVORNMINMVKOGDMVFLLUMKXABITNUCWRUJGAYCWHBFOAFMGAZGFPIKEWZNPPZYLQHFVXSNKSDNECSSIPWKAWEUOKLVBIYYXMFCDQRUYZEIDYNOZCNTIPXSDYURFDSXJLYLTWMXBCEQVQQDBEAYSMJHKWPZRVHPCRXIXJNGTPBRGWZVB");

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
    msg.setTimeStamp(0.1518406585850356);
    msg.setSource(49334U);
    msg.setSourceEntity(254U);
    msg.setDestination(15318U);
    msg.setDestinationEntity(125U);
    msg.name.assign("HKQPEASDALTXPODUIJODSFOEJXBUGQQNQHTSSVHYPJLYGIFMAHULWFNRZPQUSZYBTMGGBEUPNYRGTBAJAMWDNOARYHPVEWEHTVNCIKKFGCCSBLZCZJY");
    msg.value.assign("BLTEGYBZAYCMUAAQTZLHDERQPAWJKRQQSRRNNYWMMHFOQYUEBBVBBTQWXUUFRTWRKSIKPJZWEFLPINXELWPHKZGDQLCBMONOGPFJSYCPFXLUDSPTTKSBIHIALWCSFHIENFIIZYHVUSYSMMZYCRUGGV");

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
    msg.setTimeStamp(0.3614573678333327);
    msg.setSource(50856U);
    msg.setSourceEntity(108U);
    msg.setDestination(13189U);
    msg.setDestinationEntity(144U);
    msg.name.assign("KJWHVSICLCABRKCSNJFAJGNRPCBXWJRYMEGHFGOBTHVRRGGXXAZOSYQYTEKKCZIQQHOQTEXIVQAZWRINTCWPXWTNGTAPMCIUORDWVZMYXULYHAYVUZNPYXPBAYVDPFEKMFOENJNZTQFIXEBLMLONDQMLACFUTKQKEUUDCJSWZKJJYFNCZDTVVOQBWQHJSJOLFRALZILORMDGAHDDMBURBGMKVPSGIEPMH");
    msg.value.assign("JCGBRTPRNTN");

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
    msg.setTimeStamp(0.19749730346819105);
    msg.setSource(1814U);
    msg.setSourceEntity(155U);
    msg.setDestination(46548U);
    msg.setDestinationEntity(48U);
    msg.name.assign("VKBYNPWMFKGDJYYCGXQSCQGSXUADAZLMYJCEDIPRTRRPLPYVHOSFSVQLZIDXFMJBRGNHZWKYOARAKJEPRWXQHFQZCMFHUWJKLABEJGWTTO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VEEQDPRKNPUAXMIBUQZGKDPMHWCZUJWGQNUXGBISBOFMEBTNTVXLMINEFFPUPEYJLZBXZOIJAQIXEUYSKKWGSCTWDVJSPIOIMNGOXKVAHMFLWHLJJTHIWCKKADAFTZTDSLYQMSJWZTCDUMAGC");
    tmp_msg_0.value.assign("AUGGOECVBCCQOLUWFQOWYJCTVIYNGFGHETYETSEXMIUVDMFDWDVHIMPWAAJNMHKSNGWIQLGDDOLLBIGFMFJVFLBOLRATRAUPWXPRPAB");
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
    msg.setTimeStamp(0.9180315988213629);
    msg.setSource(35405U);
    msg.setSourceEntity(72U);
    msg.setDestination(29303U);
    msg.setDestinationEntity(38U);
    msg.name.assign("OCWZBLFGWLSYINUAAOQYJRFJQCCNFTWDZOCMATUUHEDPQLNLWATDSPJVVNSQXIBJWJVWECRAFWFAHZFLUDIVMJYBEBUVBRD");

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
    msg.setTimeStamp(0.5806046128301827);
    msg.setSource(20915U);
    msg.setSourceEntity(82U);
    msg.setDestination(51012U);
    msg.setDestinationEntity(15U);
    msg.name.assign("WFMSBJYFSTKVDCBXRKKGBNIOWMXRLNEIWZOHQMXDDLTAZZDBQNFJKOWHQQOKSJDVNCHTUDXEDLJVIWBLSWXCSRDQVKTNYOPWAPHMBYEYQXTUVVIVUHEHMEUMAXFUR");

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
    msg.setTimeStamp(0.15432111015594874);
    msg.setSource(15478U);
    msg.setSourceEntity(183U);
    msg.setDestination(39703U);
    msg.setDestinationEntity(220U);
    msg.name.assign("NIUHXJHRNTWJXUSBGEMIKIAYKOGQOHLBCIUEHUSRIRNEZZONXYDXNHSIYPCKSUSI");
    msg.visibility.assign("BQTGEVEOOMPZFSAHQENVWVZDDKBFTBKERXYIFSMMGCWMRTKEXVYIVNBJDSFUXBB");
    msg.scope.assign("KJJLEQKIURPIIXUPN");

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
    msg.setTimeStamp(0.3053882638709339);
    msg.setSource(35509U);
    msg.setSourceEntity(245U);
    msg.setDestination(42267U);
    msg.setDestinationEntity(201U);
    msg.name.assign("KLARNFDFJHTZZ");
    msg.visibility.assign("SSYFXRVNLJPWKICDZTJWRDQPOWDIELHAQZXKLFXPMUGTLF");
    msg.scope.assign("PICVVOSYIDUJHQTIK");

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
    msg.setTimeStamp(0.11688725024114677);
    msg.setSource(9097U);
    msg.setSourceEntity(169U);
    msg.setDestination(5818U);
    msg.setDestinationEntity(129U);
    msg.name.assign("KQTIXCVTLB");
    msg.visibility.assign("DWBDKQUDOACQBHUQARSYTQSPRMXYBFGOKTBCKNVULHONWHKDTWVKRFBYHSKYURJBFVMXASKWCJFXADPQNBFZWZGTYUPKSYNGIPLLDVMMPFKNEBYCWCOVXHQCPGFAEDVYAQSKEBJNEVTXNENZJYRUGEZPVIZYHRJAEZINJHFHXCLRIOADFQTAPDWOGJJX");
    msg.scope.assign("GBHHIYXSLXPQFHEFGUHRIDNBZBDGLQYCKIIEOGCPZKFEOIEYNVHRBSAVPUXAULUOBVMNHBFSPWNEZKKMQDKOJCWASCARQCYPCCRTJEOFQPOWAEORVSZTRAAWJWWJNWZXTSMMYJJZJGRYSNLBXLIGRXXUKKXBGCIVZWTQXYPYULKFVKXHZBLBAPJYGLEDEFNHAFUQDOMCGEUTVMSTJQKYHUZZRO");

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
    msg.setTimeStamp(0.1850167576233559);
    msg.setSource(31754U);
    msg.setSourceEntity(174U);
    msg.setDestination(37705U);
    msg.setDestinationEntity(52U);
    msg.name.assign("GALXDZMGRNLWPRSYLKBOKNHEQCFTXXIUBZJHOLUROZFBFYASQWIHLAJKXZJPIREMXACYSPGJVQWWZVCAAKURNXTKGJHEVQHEQWPPUDIRVA");

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
    msg.setTimeStamp(0.6952589452474093);
    msg.setSource(57464U);
    msg.setSourceEntity(8U);
    msg.setDestination(14697U);
    msg.setDestinationEntity(107U);
    msg.name.assign("NGJWTDZDSZKKMQYTTVGLCQWBZDABNBZNYZNCFAEKKNLRQNOZGDPCSQKLUKBVHFMFHLICTLGQFNOVAECDAPGCJRJABORLBWYCXPHJNIJSIZXIPVRXPUWVFMFRCJHQQAPXSDGWQYOOESVBJJIOTLSAQGXZJUWEPSGZLIXKNIYIWNWPRPTYMEXDUSMRPWTMUHMCXEFGEOZVKBDVEXYIYOIBVHGRWOOBMYJETRXFHQUH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UBNUUDLXGYFTDWJMNGAJXQSMWUHCUNDAKGJSQPS");
    tmp_msg_0.value.assign("BUPDLRTYLARYIHKCPNIPXNOZWQRFQTOFACMZOEOMGOGOEMZJVWWPMHACALFERKMTQCIUDFRKRGG");
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
    msg.setTimeStamp(0.9897684918682055);
    msg.setSource(12095U);
    msg.setSourceEntity(103U);
    msg.setDestination(62583U);
    msg.setDestinationEntity(122U);
    msg.name.assign("IXQHTGYRPBDJHLUONVAPSTRKGGUSNOIWXSSGMBHCLCNUCAMESGEXPBVIAVWKNHVXSTMEHRICTYUASOXVXKQZDLYEULAKOBJJKZFLSBBQWZCKMDVNBFJXKINUDENYXUYEVUSAIRZFRVJIYWRGWNQGGZPMJQTHQJZBLWHUPPMDTDFCXYYZPTDKPSZROOPENMMHUAERYFXMODQOZPJ");

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
    msg.setTimeStamp(0.5483742975369325);
    msg.setSource(46162U);
    msg.setSourceEntity(164U);
    msg.setDestination(16455U);
    msg.setDestinationEntity(250U);
    msg.name.assign("ZBUGRBMQPEHNONOIHZTNWWVDMBSOPFXLFLGXDYNCIFEDFQXYCRHNIWJGVJRWIRZVZJZKTQHDRLVPWXJCCBAVDQPKPMKMEYURUULLJDM");

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
    msg.setTimeStamp(0.021183277671496414);
    msg.setSource(48375U);
    msg.setSourceEntity(3U);
    msg.setDestination(44098U);
    msg.setDestinationEntity(178U);
    msg.name.assign("DXMWDGMWCDSTXMIGNEHTPSVQBNJRUZCIWIFUNGWZTLCEJLDUWNYKFKQRMRZNPYHKIBBSYJSUQEDJENVCRPITJIMEAYMIAUXQQUIDPWXXTXVAVWEDPBCFVRGCUQMNLFALYSOKOHSJSRATLKZOUFDKTPTYZLCFTBNLMBPNZRVWACQGWJAYAJHZOVLVBZEDOPSBHRUFQBOCHQFGXPXRVOPQHGLXIKMOHEKZAOIMGYOASZHGNEKFRKWU");

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
    msg.setTimeStamp(0.5462974745053183);
    msg.setSource(65293U);
    msg.setSourceEntity(79U);
    msg.setDestination(57083U);
    msg.setDestinationEntity(243U);
    msg.name.assign("WSSBVHFXCMVATFFYIWXRLAHLHFROQQDXKMWOSICMPVPLUHREWRQKFJQMEBREKLXOZDZSVUTYQQERYPHOHKKGIUBJFVKYVKOJPOTZQDTAUUTNUJOBEOPKPLQQJNMZBJSBUGRLWGJWDJYSNYPDGLBYDAZ");

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
    msg.setTimeStamp(0.6192203087734984);
    msg.setSource(52861U);
    msg.setSourceEntity(136U);
    msg.setDestination(10438U);
    msg.setDestinationEntity(183U);
    msg.timeout = 399404400U;

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
    msg.setTimeStamp(0.9394917368983762);
    msg.setSource(49527U);
    msg.setSourceEntity(248U);
    msg.setDestination(14456U);
    msg.setDestinationEntity(51U);
    msg.timeout = 1228652912U;

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
    msg.setTimeStamp(0.8583770644270926);
    msg.setSource(50761U);
    msg.setSourceEntity(79U);
    msg.setDestination(24392U);
    msg.setDestinationEntity(207U);
    msg.timeout = 738253830U;

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
    msg.setTimeStamp(0.014358309696515859);
    msg.setSource(37125U);
    msg.setSourceEntity(101U);
    msg.setDestination(49319U);
    msg.setDestinationEntity(158U);
    msg.sessid = 34888466U;

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
    msg.setTimeStamp(0.01967433629928439);
    msg.setSource(20051U);
    msg.setSourceEntity(144U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(61U);
    msg.sessid = 1098117599U;

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
    msg.setTimeStamp(0.18462517854991822);
    msg.setSource(21125U);
    msg.setSourceEntity(148U);
    msg.setDestination(17479U);
    msg.setDestinationEntity(134U);
    msg.sessid = 3588588549U;

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
    msg.setTimeStamp(0.18913684516461993);
    msg.setSource(57944U);
    msg.setSourceEntity(220U);
    msg.setDestination(46889U);
    msg.setDestinationEntity(243U);
    msg.sessid = 4057870607U;
    msg.messages.assign("CTJRTMMWWZHROYUYIGJKXEDRSWKKDVOKXFSJTWZOLTLBVBGPBNBYJRLPHBCUPDEAJOGSLQREWCMHHMJRQNGXPCBUDWMESAMRDEOBITNALGRAIVLTINCWHTQTSPYBGVFLBJKHQEAISFYUNXUXGUVDORKQNEWMSVAFJGAEMIMCFZVDAPSCUPQZYUQNSXZFZDDZHIAUKNHPYPVGTHQB");

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
    msg.setTimeStamp(0.8783811888177024);
    msg.setSource(8511U);
    msg.setSourceEntity(166U);
    msg.setDestination(62223U);
    msg.setDestinationEntity(217U);
    msg.sessid = 900836667U;
    msg.messages.assign("IKOEJFQGOZTWSTDNMTCVIXUMRBJQJIRKGHXFOMEJSSNPYTJFTQUVUBVZHGVCTSFFVYDSAPJEQRXTDSMSLZIUAUFOMNZFBWDHCCRBYYIEZYPTAABLCKSXTFDRJMMWOWNBCEUSLRXHPLRRVWNKLBIWJZNRMKGCPIAZDHAUFOEGLVAXJOQPYQPUBHPZLPYEAAHGNWQVUXIXCNNOQIEDGBOKVMQSJVOKCAXWDWKENDZ");

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
    msg.setTimeStamp(0.08570282683835573);
    msg.setSource(45592U);
    msg.setSourceEntity(221U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(39U);
    msg.sessid = 317033048U;
    msg.messages.assign("IBNAWZQGFTRESSHNPOCTKFQGCUTPJPXGJJVIGIHTYOPIMUXFYHAMQZKKLAVINDMESREZUGNUDZRWWYKZDYLOWIBDDZQSWMSDQRABLUPMAWBHCMJAGXLCMBNLETVKLWCMFKNOXEFTENJJYARKFTLCOXVXNLKINRGLZAOJJGHQTYGFXBCQDUZESPHUVETPXVOSDWHIPWCUFGOV");

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
    msg.setTimeStamp(0.9035730099157807);
    msg.setSource(19059U);
    msg.setSourceEntity(251U);
    msg.setDestination(13936U);
    msg.setDestinationEntity(126U);
    msg.sessid = 1990547469U;

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
    msg.setTimeStamp(0.8323509977285486);
    msg.setSource(63306U);
    msg.setSourceEntity(161U);
    msg.setDestination(26976U);
    msg.setDestinationEntity(77U);
    msg.sessid = 1621543226U;

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
    msg.setTimeStamp(0.4759038489423354);
    msg.setSource(22837U);
    msg.setSourceEntity(10U);
    msg.setDestination(61409U);
    msg.setDestinationEntity(198U);
    msg.sessid = 2837190031U;

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
    msg.setTimeStamp(0.632668523370111);
    msg.setSource(27640U);
    msg.setSourceEntity(166U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(179U);
    msg.sessid = 1609782707U;
    msg.status = 54U;

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
    msg.setTimeStamp(0.6004371890355211);
    msg.setSource(53324U);
    msg.setSourceEntity(61U);
    msg.setDestination(38056U);
    msg.setDestinationEntity(131U);
    msg.sessid = 2316507604U;
    msg.status = 149U;

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
    msg.setTimeStamp(0.7605652077104944);
    msg.setSource(5532U);
    msg.setSourceEntity(211U);
    msg.setDestination(45562U);
    msg.setDestinationEntity(132U);
    msg.sessid = 4273981489U;
    msg.status = 242U;

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
    msg.setTimeStamp(0.06308329484545816);
    msg.setSource(39569U);
    msg.setSourceEntity(32U);
    msg.setDestination(31264U);
    msg.setDestinationEntity(124U);
    msg.name.assign("IHNORRRCUQODOJYXGVMUDYWYZGHPJWAPQILQKOXVFPTGMAFIHFUKIKPMVGVEDPBMBWSDCSVOUASIZRLQJJSEDPHITRRXBNQFCMSUYVOXIKDRZVFGNUKTWAHCKYECJMZPBBLOLNSNEAHQEDQKXDHKPKYXQHMZLZTTYXPSNUSJOTFSMWUZGECZJVRMICLVNRERFJVNGQNWLUB");

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
    msg.setTimeStamp(0.8821403775105917);
    msg.setSource(22040U);
    msg.setSourceEntity(84U);
    msg.setDestination(4548U);
    msg.setDestinationEntity(11U);
    msg.name.assign("MKAOVSUVWCXXYWPGBPEHWJIQDRPYFGANPWVVHNOZJSAUBUSNAMEWYHELA");

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
    msg.setTimeStamp(0.2380248487374107);
    msg.setSource(39121U);
    msg.setSourceEntity(157U);
    msg.setDestination(37580U);
    msg.setDestinationEntity(84U);
    msg.name.assign("EBQYBPNMHRWMTGGJAOAOQAEPSPEZQBGWCWMZLDINAMCNYOZIDHDVXAUTFNJTJYOFSESVMXFFAQHCUTNPLKTNICXHUXPMJXGUWICUARWVGIKBYYYUQYOUANIVCRLDCKSLETINRTKVFZZWROJTZAHQOWWJPVIMKGZUJOAHYUBDGELCBYRXFODTQKBPVJRRLVHVTBLSCEHXGQFCKPJZBBPPINSRHLDWIORKSMLKHNEEFYUWX");

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
    msg.setTimeStamp(0.4552834134704157);
    msg.setSource(25302U);
    msg.setSourceEntity(249U);
    msg.setDestination(40987U);
    msg.setDestinationEntity(166U);
    msg.name.assign("EZRQSWXAKNBGMZPCGPGHENQGTAODQWBYRJVJPMCWCLPKUVQCPQZXIRLOXYZWCKAKFLZYLFJEGMJTPWIQNDUMHTNGWIMONKFJSDJUURCZVVSQXCQAVDSVFLLXBYRBCEYFKZONAUMWHARPPHKMJHGEOHMATZFTWJXNBUXAV");

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
    msg.setTimeStamp(0.23130739909762943);
    msg.setSource(64922U);
    msg.setSourceEntity(7U);
    msg.setDestination(30558U);
    msg.setDestinationEntity(221U);
    msg.name.assign("MJSCFHPFMBACXGSLJMCNLTPGFEIGBXRLKVEKSMLDURBAFMWMZPUFQDAYGUZUYXLEHDIBOSHCTPVOVNAKJZEQZQJGCTFBRYCVWRLXOTWCNOIVYXSTYTXKIGKNMPJDYPFRKEOXXDDN");

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
    msg.setTimeStamp(0.6744057362053963);
    msg.setSource(9518U);
    msg.setSourceEntity(222U);
    msg.setDestination(39195U);
    msg.setDestinationEntity(59U);
    msg.name.assign("NXEWVULSOVRTAQBWVELFUKBSOQZNDRYIKFZSHWTIZNHJVRCESTXFZKPBJBUICEEAOIHGDKSJKUQGASWBPSVQNDQILPNJGBMPOQBXFEQPDOGRYAGDXTTGOTDIZNJWHHVQWXDNNXCIAMVECGAOZCOXGKDLJRCXDYPMJQWUZAMTWHYBOZSFMUYNAFEKJVIRLCRTCYZEXM");

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
    msg.setTimeStamp(0.1709875902826542);
    msg.setSource(57702U);
    msg.setSourceEntity(4U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(130U);
    msg.type = 220U;
    msg.error.assign("YWIKEXRYIVVLETKZQUEUNXKCXQSKTYPPJAOZQTPIINPRBYSMMSKEHLKSNSTRXHFOQEDBUEHSCDTGJHXGBTZXCGBDIVZGQTWGCLFHWDJQKOSHODDMBJVGVOZAUNGMURXANI");

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
    msg.setTimeStamp(0.2511585646747909);
    msg.setSource(12424U);
    msg.setSourceEntity(146U);
    msg.setDestination(7567U);
    msg.setDestinationEntity(176U);
    msg.type = 150U;
    msg.error.assign("DBNAAZSDFSSYWTEXGCMQJTOVMRYVZBRMPUTKDFLDWGORTSPCEWRZQNYVCONFYYEIQWLUVQXOMMQKWBTCHNKHVHWGQQVZIAQAKFFFJYBGXRULHBINUENHOJRPDBPOPDPJJVWWSPGXKSIDIBTIEFAMZIOECXTKAOILUZRLUYGHBXJGHUCLTRKNECUKUFLVAQXJLJYAIQLANMSZVKZHZAGCZUTMOOYJSSDMLDXPJ");

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
    msg.setTimeStamp(0.32639008344525533);
    msg.setSource(40558U);
    msg.setSourceEntity(83U);
    msg.setDestination(14315U);
    msg.setDestinationEntity(211U);
    msg.type = 72U;
    msg.error.assign("UMLUKCKRXIZYHAUWJWNBGCTQVJLAHS");

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
    msg.setTimeStamp(0.016543857593403155);
    msg.setSource(33863U);
    msg.setSourceEntity(41U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(184U);
    msg.seq = 28439U;
    msg.sys_dst.assign("SJZSOBFZQLQZAQMISOPFAHWPXWHTOXHIHQEUGKKDMIEXWGKWZPLDOUEHBCIGNANMEGBFEQSFOCVUYBMYNSFDGCREWOTTBYXQKPWRRTUWSUNZZNQVLKIYUPGBPCKTXBMVIFANFHMCUYVQN");
    msg.flags = 57U;
    const char tmp_msg_0[] = {-35, 102, -109, 23, -106, 70, -57, 97, -79, -31, -50, 47, -11, 18, 102, 67, 5, 5, -119, -76, -37, -20, 78, 10, -46, -13, -1, 27, 29, -23, 36, -46, -111, 1, 14, 125, 42, 88, 53, -58, 120, 82, -84, -65, -7, -7, 64, -74, 0, -62, 122, -6, 2, -102, -24, 8, 100, -69, 65, 14, -3, -101, -63, 53, 102, -102, 44, 33, 78, 24, -56, 120, -82, -17, -30, -77, 100, 117, -6, 26, 126, -93, 121, 55, -72, -57, -43, -104, -72, 103, -59, 50, 23, -44, -102, 14, 10, -38, 98, 91, 70, -73, 60, -100, 76, -24, -72, 105, 0, -123, 12, 15, -39, -55, 71, 46, 32, 122, -44, -91, -31, -111, -9, 53, -46, 73, 47, 62, 89, -120, -91, 57, 105, -16, -19, -10, -36, 48, 55, -113, -71, 80, 78, -101, 70, 107, -73, 19, 57, 25, 79, 38, 78, 11, -47, -61, 36, 9, 93, -51, -64};
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
    msg.setTimeStamp(0.0996171411359924);
    msg.setSource(59796U);
    msg.setSourceEntity(99U);
    msg.setDestination(4392U);
    msg.setDestinationEntity(202U);
    msg.seq = 59863U;
    msg.sys_dst.assign("EJHIEKCATDTRMZGQSKTTLJCUQOGYRSVVWXGLYMLPMRVHBODEJHRCFADD");
    msg.flags = 162U;
    const char tmp_msg_0[] = {-42, 17, 23, 36, -118, -62, 76, -39, 0, 71, 82, 54, -125, -84, -21, 81, 33, -7, 20, -88, 13, 96, -27, 78, -60, -41, -119, 73, -33, 8, -126, 70, -124, -24, -16, 11, 77, 0, 73, -93, -68, 83, 108, 103, -106, -103, 104, -78, -68, -51, -45, 38, 88, -65, 28, -81, 94, 29, 68, 112, 43, -76, -98, -85, 55, 79, 90, -121, 95, -9, 115, -106, 100, 36, -3, -79, 107, 104, -120, -38, -77, 76, 118, 112, -98, -97, -37, -89, -42, -114, -48, 59, 59, 123, 7, 22, 9, -9, -87, 85, 48, -57, 68, -127, 18, 46, 115, 56, 16, -62, 89, -114, 101, 75, 83, -59, -84, 97, -6, 29, 100, -63, -104, -65, -58, 62, 58, 125, -84, 63, 52, -31, -18, -65, -8, -113, -55, 6, 50, -111, 60, 14, -116, -100, -118, 22, -61, 64, -19, 11, -84, 96, -32, -124, 44, 73, -68, 87, -47, 26, 33, 111, -115, 51, 116, 62, -42, -20, -2, -54, 88, -113, -73, -63, -48, 36, 81, 8, 14, 78, 91, -64, 43, -79, 37, -8, -27, -35, 114, -25, -18, -107, -111, -112, -114, -121, -27, -14, 41, 71, -31, 52, 102, -80, -122, -93, 35, 107, -101, 49, -8, 41, -103, 124, 94, 44, -61, 67, -17, 119};
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
    msg.setTimeStamp(0.9142182780723496);
    msg.setSource(4857U);
    msg.setSourceEntity(37U);
    msg.setDestination(55732U);
    msg.setDestinationEntity(63U);
    msg.seq = 53616U;
    msg.sys_dst.assign("XIFPXNBWNTJLMHDTQBWFQRDLZMQNXFYONACTSDIUHPLVVSJYBOFAOD");
    msg.flags = 20U;
    const char tmp_msg_0[] = {97, 91, 14, -97, -48, -28, 1, 102, 53, 94, 95, 45, -4, 80, 58, -121, 102, -80, -128, 3, 22, -29, -93, -39, 0, -123, 49, -122, 67, -34, -4, 69, 34, 6, 123, 59, -44, -44, 32, -104, -15, -122, -89, -8, 67, -106, -88, 105, 118, -22, -43, 107, -30, -7, 118, -51, 115, 58, 38, -28, 35, -93, 87, -36, 30, 106, 25, 46, 26, -116, 59, 96, 79, -11, -13, 95, 110, -100, -117, 124, 36, -67, 40, -59, -92, 15, -58, 3, -38, 25, 105, -75, 11, 74, -99, -18, -115, -101, -38, -34, -124, -1, 37, 123, -50, 53, 42, -77, -82, -118, 121, 30, 6, 65, 91, -96, 88, -20, -87, -98, -68, 122, -18, 41, -72, -31, -47, -20, 28, -122, -111, -72, 72, 19, -81, 103, 89, 0, 77, -24, -3, -49, 90, 107, -114, 31, -22, -101, -7, 30, 115, 51, 120, -122, 107, 7, 101, 68, -48, 100, 11, -86, 125, -40, 116, -119, 37, -38, 70, 90, -106, 26, -80, -120, 68, 22, 71, -8, 72, 48, -122, 107, -100, -94, 78, 34, -91, -125, -56, 63, -123};
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
    msg.setTimeStamp(0.775670252366804);
    msg.setSource(48502U);
    msg.setSourceEntity(25U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(96U);
    msg.sys_src.assign("PTBWAHZKMULDZIKAXBUUYMMIXBFXAOJCWRQZAEMRLZMLOIWGRSJNWVKSQBIMFNLNYNZCSYASSZZXQBWEORCFTEHEMHJWGOTXDCMXXMQILPJUUKGYVRZAWYLFQQMJNSAKVPBHKEZXLLWCPPIXECSNPGLBSHVJJHFCBCVDTGGWIROYVSFQTBGUYJOYARERTGUOYLCHTQAOQEKKUAZNEQUPHNFPDCDPJODFGXDWDTB");
    msg.sys_dst.assign("JORUMKZXNAWJIAOFFLYFLXFDWJRCOBQBRUNGOITIQQPLELDNKYRTVTDZNAXYESZASYFLYKQGUXKTGQFVVJGJDMIWKHENWYWATLPSFLDCMWHRTLBYNHKQUVUDKUBUCCZAKZIGOUSCZJPGDYXMYAHSXVIKLXOVTMVPH");
    msg.flags = 205U;
    const char tmp_msg_0[] = {104, 4, -60, 66, -4, 91, 122, 83, -5, 28, -43, -74, -110, -11, -60, -99, 30, -34, 1, 48, 38, 12, 44, -86, 5, 93, -48, 28, 110, 96, -66, -116, -60, -15, 67, 99, -122, 4, 64, -69, 126, 29, -123, -75, 41, -20, 113, 29, 67, -24};
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
    msg.setTimeStamp(0.8400387952143681);
    msg.setSource(6061U);
    msg.setSourceEntity(191U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(31U);
    msg.sys_src.assign("OLDQSTDXPSTQYKKQGSDMGGVTWTXZGULZSMQZSUUFDAPRHBQQIPWYKDYXXACWMJCWDKBREFCVUWLCJYQLNUYELZZLOPFTQHMTALZFGWYDMWDUHBCHLUDIOBGLNRWSFMNVFFRSYIKPYPUTMXIOOAUYECJJIVBKBEJCYBBPGOOZSGOEVPIUNVHNMAOFSHZRZXNVNJBM");
    msg.sys_dst.assign("BGWNNEYLCUKKHTIKQQZAQJYFNOCSSZTXNEFVGNHIFKSTJNYAWBWYFAIZMJFTXJTRFKHTMRZKDWLUCXPGRMXMVLBEJZRBOMSHAFNCLTROFEPEZIXOLBQHOUVGCCJXPQJSELXGEUWOELBIUVBQOHKP");
    msg.flags = 246U;
    const char tmp_msg_0[] = {35, -66, -107, -60, 74, -59, -106, 100, -111, 7, 11, -21, -79, 30, 79, -57, 113, -15, 76, -30, -99, -74, -5, -13, 11, -5, -10, -52, 102, -82, -115, -104, 103, 4, -92, -77, -115, -27, -3, -111, -42, -30, 23, -22, 16, 84, 102, -80, 89, 102, -29, -31, -15, 19, 14, 107, 115, -96, -103, 72, 73, -23};
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
    msg.setTimeStamp(0.4481776988354047);
    msg.setSource(47170U);
    msg.setSourceEntity(202U);
    msg.setDestination(54770U);
    msg.setDestinationEntity(223U);
    msg.sys_src.assign("QINPJIDKVQCWWYJXLYLZPEOHAGHHQLTAUTFUFRLDTLLVQJEUZPPSFFYOVZENNHRXVYOOCFGUTEMKAHVMGAPEAVDJZEIHXZVJABNXANDTNGSJQNUTJEFUCKYPKMGWULRKYCMHECPVY");
    msg.sys_dst.assign("AQMBQKOEYAZELIDVYKHVBJFQYAMKDOGUPWDBQPCYFNCSFNTUZJOCHYMZOIGAHBQDELPKICFOXTMDAGBLUKIAFBPWOLGDPQRBQSROMNELNIAPZOXIVKWUZEVVZCSZJNEMGPMBTAWZNJWEJTURRKCYUSVVJVJRVFEHUYLHXYSSHWMGKMPYOIRJFUXRGTZPWRQDTJHCNCENIFFLCGTSUGWRTFEIPSXIDXUWQK");
    msg.flags = 239U;
    const char tmp_msg_0[] = {-93, 110, -31, 87, -86, 69, -102, -6, 92, 43, 116, -34, -37, 34, -102, -93, -111, -13, 21, -14, -52, -80, -64, 25, -61, 102, -88, 27, -91, -60, 121, 67, 20, 92, -43, -84, 6, -21, 16, 24, -50, -62, 8, -70, -83, 40, 28, 29, 126, 90, -46, 72, 103, -16, -102, 38, 114, -56, -8, 7, -55, -62, -19, -119, 16, -73, -30, 99, -48, -36, 13, -100, 7, -45, -25, 38, 124, 117, 112, -4, 12, -105, 18, -4, -6, -61, 40, -110, 38, 80, 45, 25, 31, -18, 59, -101, -49, 37, -47, -7, 43, 66, 40, -80, 42, 109, -83, -94, -72, 3, 96, -124, -112, -21, 69, 12, 55, 53, 29, 123, 122, 79, -61, -61, 44, -60, 61, 30, -56, -48, -45, -114, -109, 38, 8, -18, 15, -96, -53, 30, 100, -8, -121, -57, -9, -106, -94, 51, 58, 1, 45, 70, 42, -19, 7, 103, -104, 46, 113, 45, -128, -84, -99, 110, -78, -82, -25, 103, 19, -37, -123, -86, -117, 124, -75, 87, -42, 62, -94, -37, -10, 115, -74, -127, -8, -114, -69, -47, -57, -6, 35, 62, -78, 116, -46, -120, 42, 71, 71, -77, 78, 40, -73, 90, -59, -101, 86, -70, -50, 46, -107, -66, -91, 33, -39, 56, -78, 40, -45, 125, -70, 92, -103, 51, -39, -126};
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
    msg.setTimeStamp(0.5444158144558663);
    msg.setSource(17873U);
    msg.setSourceEntity(30U);
    msg.setDestination(36304U);
    msg.setDestinationEntity(56U);
    msg.seq = 4158U;
    msg.value = 114U;
    msg.error.assign("GNOKATBHRPMGPUBBSSZMUDTTBFFDCUHJBLJJTWSUYXPGGSCOYWUHSHEQDGRQXVDKLHAEVZHKSCMZNMEIJZHCNIFAQZLNEMVNQXGNGWDIRQNITPUVUOBCLRIYPRMNWAFRSXWZXLFKWUOLYCNNLRVYZMCVDSHOWAKXXAEPQBGKJSJWBZUCZHOJGEJDTTEGRVRXKXDTMHMPQDXYLBIYF");

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
    msg.setTimeStamp(0.5690571374151447);
    msg.setSource(16317U);
    msg.setSourceEntity(125U);
    msg.setDestination(26788U);
    msg.setDestinationEntity(24U);
    msg.seq = 2492U;
    msg.value = 209U;
    msg.error.assign("SHUXQEZINREYBXKWWNLOVLUECILICALVZT");

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
    msg.setTimeStamp(0.027262484403737353);
    msg.setSource(6967U);
    msg.setSourceEntity(193U);
    msg.setDestination(21681U);
    msg.setDestinationEntity(140U);
    msg.seq = 19714U;
    msg.value = 147U;
    msg.error.assign("TPNGMWONWDMTU");

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
    msg.setTimeStamp(0.5563326803178394);
    msg.setSource(9888U);
    msg.setSourceEntity(176U);
    msg.setDestination(28570U);
    msg.setDestinationEntity(239U);
    msg.seq = 52940U;
    msg.sys.assign("AJIXZNZVTLBUYEVNGCKNTTYSKYRKAHTWUYGOODBJPKNAPYBWEPTXKUZXJVIQNFCOEZLMWZGMIMVDUAQBCLTUVJPKHJRNDOITPHOSOARSERBORAVLFLZZIYSQDPISPAJFFGZTGQKRKLCJUQTEDSMVHMCQWOVWXBDDNJCQEZLPHJOINHGWQOSNBTICUCLWHWHBMPMSYEZDVNDFHRLARSUMBXFHGEIL");
    msg.value = 0.9598274236472217;

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
    msg.setTimeStamp(0.33515809940996044);
    msg.setSource(61709U);
    msg.setSourceEntity(96U);
    msg.setDestination(1147U);
    msg.setDestinationEntity(148U);
    msg.seq = 53057U;
    msg.sys.assign("POSLJNWCWSVYSCZAKBXNUDQEDPFEEQZBPOHJIEUQFEFSYVIRXRRPABTMAECDBTSMKIUYMRZOHTGKBRGHCFDFGYIRSMHUPCYMRAGKJCUIPBDFOMJIJOLHREGJSLAYFHZWNKDCQVDDQVJUGVVXXPHWWSXKXUKBKILJONMNPVXXQENWJZFZFHYWWBCVTPPGUABLALBMAAFQNTNJYGSXWATXZZELEMZTGIQCVYMLNSQRRKULQUKIHOO");
    msg.value = 0.8209204072143786;

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
    msg.setTimeStamp(0.505559313473064);
    msg.setSource(51478U);
    msg.setSourceEntity(61U);
    msg.setDestination(36499U);
    msg.setDestinationEntity(94U);
    msg.seq = 288U;
    msg.sys.assign("WFEWAXVMVENCZIVFYFNNOYSKZDEEQ");
    msg.value = 0.2231234236932319;

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
    msg.setTimeStamp(0.20207522475478634);
    msg.setSource(26296U);
    msg.setSourceEntity(8U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(226U);
    msg.seq = 52186U;
    msg.sys_dst.assign("BARWIDNBHCFWTVPSEUOAFTQZILKGMAGNPDVREWMDFPFQJOIXZQUBGRQZKPOLCIQNUMPVJELSRZWJPJRXZZSQFBRWSODRVTXAFUCAHXYX");
    msg.timeout = 0.35355745961519236;

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
    msg.setTimeStamp(0.8777892775094073);
    msg.setSource(11768U);
    msg.setSourceEntity(92U);
    msg.setDestination(3162U);
    msg.setDestinationEntity(78U);
    msg.seq = 15866U;
    msg.sys_dst.assign("TTHZDFLLAYENZOTWTVEPNHCBZQUKIWSEGMDVIRYRXQJEOCUDNEPVKEEYCPSANJBULODQXHOGGDMAMXIDMNBGNGQOMZSGKGNTMFTAHJUOTZFPIOKOBBQE");
    msg.timeout = 0.2515786482396851;

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
    msg.setTimeStamp(0.0938571885159788);
    msg.setSource(59436U);
    msg.setSourceEntity(92U);
    msg.setDestination(21078U);
    msg.setDestinationEntity(105U);
    msg.seq = 52615U;
    msg.sys_dst.assign("GIBKDOAOPTYWQLROFYIAXNMDMNGQNITNPYBVHWDQWFTMVJZRRHDCBLSMDVKZLAGCRBRLUYLGFTONXZPLLBFOWJHDEUPOKVTVYLEF");
    msg.timeout = 0.9478166822900043;

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
    msg.setTimeStamp(0.9574448935036969);
    msg.setSource(51908U);
    msg.setSourceEntity(180U);
    msg.setDestination(59197U);
    msg.setDestinationEntity(87U);
    msg.action = 252U;
    msg.longain = 0.012308412066384111;
    msg.latgain = 0.6613588376804775;
    msg.bondthick = 39455174U;
    msg.leadgain = 0.487406249172989;
    msg.deconflgain = 0.6449813041002195;

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
    msg.setTimeStamp(0.5112188573653775);
    msg.setSource(2962U);
    msg.setSourceEntity(103U);
    msg.setDestination(37201U);
    msg.setDestinationEntity(98U);
    msg.action = 69U;
    msg.longain = 0.948842965830677;
    msg.latgain = 0.4416217432198932;
    msg.bondthick = 3509772086U;
    msg.leadgain = 0.8046988472447029;
    msg.deconflgain = 0.23220705562062738;

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
    msg.setTimeStamp(0.34319872142217067);
    msg.setSource(50035U);
    msg.setSourceEntity(31U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(90U);
    msg.action = 87U;
    msg.longain = 0.652658889053236;
    msg.latgain = 0.8597711493259382;
    msg.bondthick = 2051797071U;
    msg.leadgain = 0.8931516735658288;
    msg.deconflgain = 0.8711599944553181;

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
    msg.setTimeStamp(0.2089259446850047);
    msg.setSource(53548U);
    msg.setSourceEntity(78U);
    msg.setDestination(5018U);
    msg.setDestinationEntity(197U);
    msg.err_mean = 0.11184866437983021;
    msg.dist_min_abs = 0.8197197889049384;
    msg.dist_min_mean = 0.6214726234469379;

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
    msg.setTimeStamp(0.2571904934561686);
    msg.setSource(7199U);
    msg.setSourceEntity(109U);
    msg.setDestination(12963U);
    msg.setDestinationEntity(206U);
    msg.err_mean = 0.1531224627575698;
    msg.dist_min_abs = 0.42394412099440903;
    msg.dist_min_mean = 0.4254593577551318;

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
    msg.setTimeStamp(0.08444830589324626);
    msg.setSource(36255U);
    msg.setSourceEntity(54U);
    msg.setDestination(34390U);
    msg.setDestinationEntity(179U);
    msg.err_mean = 0.1469779811337456;
    msg.dist_min_abs = 0.08647670384882566;
    msg.dist_min_mean = 0.8897981046909185;

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
    msg.setTimeStamp(0.4894877484672291);
    msg.setSource(35070U);
    msg.setSourceEntity(141U);
    msg.setDestination(5793U);
    msg.setDestinationEntity(245U);
    msg.action = 136U;
    msg.lon_gain = 0.3441439549527605;
    msg.lat_gain = 0.4759202178093219;
    msg.bond_thick = 0.7948147216855925;
    msg.lead_gain = 0.3315185430242773;
    msg.deconfl_gain = 0.8512863354826468;
    msg.accel_switch_gain = 0.04578097639927936;
    msg.safe_dist = 0.5025818860234713;
    msg.deconflict_offset = 0.26431938624513773;
    msg.accel_safe_margin = 0.8185901694829456;
    msg.accel_lim_x = 0.6991589450811685;

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
    msg.setTimeStamp(0.8324157271279818);
    msg.setSource(13068U);
    msg.setSourceEntity(247U);
    msg.setDestination(30067U);
    msg.setDestinationEntity(10U);
    msg.action = 113U;
    msg.lon_gain = 0.49850104552405394;
    msg.lat_gain = 0.490153378623693;
    msg.bond_thick = 0.36172582765950834;
    msg.lead_gain = 0.995602789379647;
    msg.deconfl_gain = 0.93341165446445;
    msg.accel_switch_gain = 0.721178850821291;
    msg.safe_dist = 0.24267862957325737;
    msg.deconflict_offset = 0.6632609026943932;
    msg.accel_safe_margin = 0.33837679480537386;
    msg.accel_lim_x = 0.8517460259736486;

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
    msg.setTimeStamp(0.5666858567205044);
    msg.setSource(46978U);
    msg.setSourceEntity(240U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(71U);
    msg.action = 0U;
    msg.lon_gain = 0.10947744754522037;
    msg.lat_gain = 0.004424180679023504;
    msg.bond_thick = 0.6153192697534213;
    msg.lead_gain = 0.35788919167811684;
    msg.deconfl_gain = 0.30437104231715617;
    msg.accel_switch_gain = 0.7462832632149494;
    msg.safe_dist = 0.3053022038943868;
    msg.deconflict_offset = 0.7472721782739257;
    msg.accel_safe_margin = 0.0046927776451854974;
    msg.accel_lim_x = 0.5174494996702796;

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
    msg.setTimeStamp(0.8310056806389217);
    msg.setSource(21856U);
    msg.setSourceEntity(83U);
    msg.setDestination(55149U);
    msg.setDestinationEntity(25U);
    msg.type = 183U;
    msg.op = 22U;
    msg.err_mean = 0.2539779856301313;
    msg.dist_min_abs = 0.027508345158217984;
    msg.dist_min_mean = 0.8074859813593195;
    msg.roll_rate_mean = 0.37524757137882736;
    msg.time = 0.41874067152816363;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 30U;
    tmp_msg_0.lon_gain = 0.7451077275626652;
    tmp_msg_0.lat_gain = 0.7890336458364985;
    tmp_msg_0.bond_thick = 0.2903547236367351;
    tmp_msg_0.lead_gain = 0.05856687029941321;
    tmp_msg_0.deconfl_gain = 0.6987747014068278;
    tmp_msg_0.accel_switch_gain = 0.9099671599297602;
    tmp_msg_0.safe_dist = 0.8309310653537455;
    tmp_msg_0.deconflict_offset = 0.9927442643423444;
    tmp_msg_0.accel_safe_margin = 0.2606469017420656;
    tmp_msg_0.accel_lim_x = 0.699158393875982;
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
    msg.setTimeStamp(0.891995282502492);
    msg.setSource(31935U);
    msg.setSourceEntity(253U);
    msg.setDestination(43939U);
    msg.setDestinationEntity(62U);
    msg.type = 116U;
    msg.op = 92U;
    msg.err_mean = 0.7156514545775634;
    msg.dist_min_abs = 0.7906179228295134;
    msg.dist_min_mean = 0.4371669848124736;
    msg.roll_rate_mean = 0.6064618683858098;
    msg.time = 0.6919198863388627;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 55U;
    tmp_msg_0.lon_gain = 0.688402227723094;
    tmp_msg_0.lat_gain = 0.9086371833470119;
    tmp_msg_0.bond_thick = 0.27746349600847175;
    tmp_msg_0.lead_gain = 0.5858321761267605;
    tmp_msg_0.deconfl_gain = 0.03129998849455351;
    tmp_msg_0.accel_switch_gain = 0.5708466374060234;
    tmp_msg_0.safe_dist = 0.42444540913850537;
    tmp_msg_0.deconflict_offset = 0.28938433764533555;
    tmp_msg_0.accel_safe_margin = 0.051979031142476595;
    tmp_msg_0.accel_lim_x = 0.46798673463992757;
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
    msg.setTimeStamp(0.13470465524399544);
    msg.setSource(8139U);
    msg.setSourceEntity(116U);
    msg.setDestination(13583U);
    msg.setDestinationEntity(28U);
    msg.type = 33U;
    msg.op = 38U;
    msg.err_mean = 0.6773597379659173;
    msg.dist_min_abs = 0.4199457734838725;
    msg.dist_min_mean = 0.9298406317980333;
    msg.roll_rate_mean = 0.22495917547506328;
    msg.time = 0.35897133091783284;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 58U;
    tmp_msg_0.lon_gain = 0.8602729452244445;
    tmp_msg_0.lat_gain = 0.886824397653001;
    tmp_msg_0.bond_thick = 0.6161868706161737;
    tmp_msg_0.lead_gain = 0.6508579474499687;
    tmp_msg_0.deconfl_gain = 0.2937601143690425;
    tmp_msg_0.accel_switch_gain = 0.6456036730045158;
    tmp_msg_0.safe_dist = 0.6307642071610817;
    tmp_msg_0.deconflict_offset = 0.6917744873229645;
    tmp_msg_0.accel_safe_margin = 0.8887026730719407;
    tmp_msg_0.accel_lim_x = 0.0007882757172820165;
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
    msg.setTimeStamp(0.14139390459396783);
    msg.setSource(60282U);
    msg.setSourceEntity(173U);
    msg.setDestination(4091U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.6148139523198926;
    msg.lon = 0.9045175161788316;
    msg.eta = 2616577567U;
    msg.duration = 39768U;

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
    msg.setTimeStamp(0.3914323004934753);
    msg.setSource(23866U);
    msg.setSourceEntity(178U);
    msg.setDestination(17203U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.6448827652715187;
    msg.lon = 0.7701019132267855;
    msg.eta = 3441617878U;
    msg.duration = 9097U;

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
    msg.setTimeStamp(0.18576601772074597);
    msg.setSource(62236U);
    msg.setSourceEntity(30U);
    msg.setDestination(37723U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.5916153494294565;
    msg.lon = 0.06906380352114627;
    msg.eta = 4081038413U;
    msg.duration = 37446U;

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
    msg.setTimeStamp(0.6691505808402622);
    msg.setSource(2922U);
    msg.setSourceEntity(240U);
    msg.setDestination(53494U);
    msg.setDestinationEntity(118U);
    msg.plan_id = 513U;

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
    msg.setTimeStamp(0.11710377043173559);
    msg.setSource(61378U);
    msg.setSourceEntity(162U);
    msg.setDestination(46697U);
    msg.setDestinationEntity(193U);
    msg.plan_id = 2415U;

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
    msg.setTimeStamp(0.4884452450589699);
    msg.setSource(20182U);
    msg.setSourceEntity(4U);
    msg.setDestination(30882U);
    msg.setDestinationEntity(117U);
    msg.plan_id = 62735U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.5284100058838137;
    tmp_msg_0.lon = 0.10034942963687887;
    tmp_msg_0.eta = 3242254724U;
    tmp_msg_0.duration = 15721U;
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
    msg.setTimeStamp(0.4433017969501999);
    msg.setSource(58659U);
    msg.setSourceEntity(208U);
    msg.setDestination(10138U);
    msg.setDestinationEntity(190U);
    msg.type = 125U;
    msg.command = 200U;
    msg.settings.assign("ASHFPSGQISBMCPOATGIHYEZSTXUONDYXIZZHCHFHQPQCRSJYMEDSVYNLWAKGIWEFRLFQNXLZTIOJNWWPXVFFMVMKXTHTXYDLPGTTBN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22962U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5998784257902116;
    tmp_tmp_msg_0_0.lon = 0.4655573524496667;
    tmp_tmp_msg_0_0.eta = 361123878U;
    tmp_tmp_msg_0_0.duration = 54517U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AWSJTNZAQWLXQMHTYFHPLAISPUIXGGBZQXVEBALCHPKBSSOGTCNKDTELSEOCTXHZUBWRSWGGYGLMAPLOLEVDJCZREFRBFSPRQGPALCFVPEVXHDZDCIQFIRHJPUDNYQVONWOWHROZ");

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
    msg.setTimeStamp(0.07744617269690413);
    msg.setSource(50312U);
    msg.setSourceEntity(204U);
    msg.setDestination(8474U);
    msg.setDestinationEntity(59U);
    msg.type = 125U;
    msg.command = 179U;
    msg.settings.assign("TZANWZLIMNMDJKKMUPEHWEYTFMFAPCKOFASACJGNLBCEUBVGMYGRXBYOFUYXBFQUQVNNYOJHVZEL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 41958U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LACNTPBTQUSQFKKHHXOJOLSJNVQICDZDFVINOUNOGRWCTKFEEIDLBKKSKFQMGYHDFVTYVGJED");

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
    msg.setTimeStamp(0.23014125660514428);
    msg.setSource(4975U);
    msg.setSourceEntity(103U);
    msg.setDestination(64348U);
    msg.setDestinationEntity(27U);
    msg.type = 89U;
    msg.command = 184U;
    msg.settings.assign("VOZDQWNYCTMUIWHTXSMLJYWDEMNYUVCFQFPUDXRWRLQEYDYHGWPMBCZDMJQOTTQFGZEACOEZIJGQROBRHTRLMNMJUJRUSULOHUPJQKIAVXPXHIJFBTBATGNBKPELO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 28092U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DZIXGPUOBJIDNXMWJZKWRXHNPANCLPIBVWCTSSLTEGXCPUOPRBOGNYIKJGJLYAVAFHHYHWSLWXBAMZSRFPYQOQYLNRQUTJQEERUVEGTJNZRCTAC");

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
    msg.setTimeStamp(0.1421571324160552);
    msg.setSource(11994U);
    msg.setSourceEntity(6U);
    msg.setDestination(12614U);
    msg.setDestinationEntity(89U);
    msg.state = 115U;
    msg.plan_id = 43854U;
    msg.wpt_id = 72U;
    msg.settings_chk = 34413U;

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
    msg.setTimeStamp(0.015191517112396635);
    msg.setSource(20870U);
    msg.setSourceEntity(100U);
    msg.setDestination(64277U);
    msg.setDestinationEntity(9U);
    msg.state = 149U;
    msg.plan_id = 5474U;
    msg.wpt_id = 215U;
    msg.settings_chk = 44542U;

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
    msg.setTimeStamp(0.30058862451080326);
    msg.setSource(32931U);
    msg.setSourceEntity(122U);
    msg.setDestination(683U);
    msg.setDestinationEntity(122U);
    msg.state = 195U;
    msg.plan_id = 44793U;
    msg.wpt_id = 100U;
    msg.settings_chk = 46756U;

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
    msg.setTimeStamp(0.5128437516340922);
    msg.setSource(5614U);
    msg.setSourceEntity(44U);
    msg.setDestination(38824U);
    msg.setDestinationEntity(252U);
    msg.uid = 206U;
    msg.frag_number = 215U;
    msg.num_frags = 29U;
    const char tmp_msg_0[] = {-92, -117, -61, -122, -47, -44, -25, -122, -5, 52, -78, -51, -59, 59, -12, 1, 31, -14, 76, 53, 69, 23, -25, -87, 31, -107, 27, -63, 62, -54, -83, -1, -22, 71, -15, -24, 61, -83, -27, 22, 76, 48, 77, -107, 28, -45, -106, -11, 40, -100, 117, 82, -61, 42, -78, 15, -127, -109, 93, -117, -123, -9, 95, -116, 50, -6, -81, -31, -59, 95, 5, 36, 56, -69, -51, 6, -70, -62, -25, 34, 123, -7, -72, 67, -33, 26, 69, -119, 112, -73, 112, -4, -43, 119, 50, 102, -25, 27, -78, 31, -96, -68, -12, 82, -61, -17, 16, -120, 111, 81, 77, 4, -60, 8, 116, -4, 28, -102, 112, -18, 88, 120, -4, 106, -124, -88, 53, -19, -2, -95, -105, 81, -115, -13, 82, 76, 35, 126, -79, 21, 28, 96, -27, 80, 90, -107, -116, -76, 102, -43, -123, 54, 29, 19, -60, 106, -22, -12, -73, 37, 117, -54, 85, 51, -76, -110, -7, 98, -73, -27, 113, 88, -71, 97, -75, 107, -69, -46, 3, -63, -77, -110, 47, 59, -5, -114, -42, -104, -55, 68, 20, 126, 57, -19, 107, 36, -16, -88, -7, 103, -79, -21, 114, -85, -89, -114, 57, -115, -39, 94, -49, 106, -37, 9, -46, -30, -46, -109, -100, -85, -15, 123, 100, 0, -35, -14, 48, -99, -54, -39, 106, 11, 6, -35, 52, -30, -95, -21, 15, 77, -105, -35, -76, 62, 83};
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
    msg.setTimeStamp(0.476358514919786);
    msg.setSource(36080U);
    msg.setSourceEntity(29U);
    msg.setDestination(5899U);
    msg.setDestinationEntity(13U);
    msg.uid = 44U;
    msg.frag_number = 56U;
    msg.num_frags = 232U;
    const char tmp_msg_0[] = {34, -5, 19, 66, -91, -45, -118, -30, -99, 74, -74, 86, -66, -99, -45, -26, 34, -101, -43, 87, 22, 120, 89, -37, -24, -36, 19, -71, -55, 9, -73, -67, 42, 37, 46, 58, 39, 47, 102, 9, -76, -114, 50, -46, 68, -114, -85, -71, 79, 15, 101, 41, -48, 1, 23, -94, 40};
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
    msg.setTimeStamp(0.7180476155620282);
    msg.setSource(529U);
    msg.setSourceEntity(145U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(43U);
    msg.uid = 142U;
    msg.frag_number = 148U;
    msg.num_frags = 14U;
    const char tmp_msg_0[] = {-127, -16, 95, -80, 102, -127, 79, -9, 85, 106, -71, -122, -57, 31, -105, -41, 37, 61, -119, 98, 2, -48, 76, -115, -111, 2, 12, -68, -81, 30, -4, 65, -12, 63, 61, 10, -80, -17, -94, 81, -1, -125, 114, -103, -35, 81, -105, 85, 94, 4, -57, 71, -20, 7, 58, 79, 65, -84, 110, 121, 94, -36, 83, -29, 15, 51, 50, 74, 80, -59, -70, 124, -31, 23, 29, -109, 59, -45, 99, -86, -117, 83, -72, -43, -110, -90, -29, 41, -20, -118, 118, -39, -14};
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
    msg.setTimeStamp(0.08553759666602423);
    msg.setSource(33642U);
    msg.setSourceEntity(211U);
    msg.setDestination(56545U);
    msg.setDestinationEntity(126U);
    msg.content_type.assign("QOZLDIUFBHTSPAGMTFDXHYPBVQUKTCGKHXDKFAXRBDESEBMCWOCTKYNLPKVTFZEECKWQ");
    const char tmp_msg_0[] = {-57, -6, 107, -17, -3, -118, 21, 117, 7, -17, -17, -73, -111, 36, -111, -77, -8, -20, -54, 56, 86, 46, 8, -34, -61, 95, -86, 17, -57, -45, -54, -13, 112, 81, -128, 118, -36, -16, 90, 122, 89, -5, 11, 84, -80, 79, -81, -66, -57, -12, 122, 48, 57, -89, 108, 57, -87, -124, 123, -60, -77, 117, 10, 111, 117, 67, 50, -19, -8, 1, -39, -10, -85, -112, -55, -105, -118, -61, -12, -122, -106, -41, 56, -81, -50, -20, 98, 25, -52, 76, -60, 72, -21, -44, -27, 21, 19, -104, -123, -28, 114, 35, 46, -42, 85, 125, -85, 44, -48, -33, 10, -14, 112, 46, 59, 50, 98, 120, -91, -92, 35, 57, 72, 101, 62, -54, 62, 39, -91, 48, -81, 78, 124, 1, -6, 98, -100, 86, -65, -89, -114, 17, -66, -74, 74, -16, -111, -27, 2, 67, -103, -106, 116, -5, 15, 73, -80, 54, -26, -26, -55, -106, 10, -30, -7, 93, 49, -88, 13, -8, -104, -41, 42, -17, -62, -81, -37, 81, 105, 73, -87, -97, 112, 71, 49, -68, -4, -57, -34, 65, -107, -3, 6, -61, 69, -53, -124, 86, -111, -65, -113, 29, 19, 4, 21, 107, -69, 90, 22, 45, -40, 95, 85, -30, -38, -8, 125, -18, -53, -84, 59, 112, 121, 38, 117, -35, -10, -76, -12, -17, -80, 0, 28, -64, 85, -96, -100, 92};
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
    msg.setTimeStamp(0.38000443531488426);
    msg.setSource(17602U);
    msg.setSourceEntity(165U);
    msg.setDestination(1960U);
    msg.setDestinationEntity(21U);
    msg.content_type.assign("EIHNJSDFLZDVB");
    const char tmp_msg_0[] = {113, 113, -76, 54, -111, -99, -20, 53, -58, 120, -30, -67, 97, -107, -79, 71, 123, 29, 7, 67, 74, -81, -97, 1, -112, -113, -46, -82, 35, 86, -79, -123, 64, 60, 0, 41, 100, 104, -8, -65, -15, 84, 118, -81, 7, -46, -30, -28, -67, 12, -126, 31, -112, 83, 67, 11, 30, 89, -106, -87, -34, 5, -109, -35, -29, -60, -124, -108, 126, 34, -62, -125, 48, -81, 88, -28, 86, 17, -94, 88, -114, -95, 18, -6, -24, 100, 23, 62, -65, -112};
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
    msg.setTimeStamp(0.548173207785023);
    msg.setSource(50449U);
    msg.setSourceEntity(161U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("WKIXBLKXIZIDJDHDZJBGWZAZODSHYINYEVBUOBNWMVQQTPSJGSFWYHGJPVGFWFBFASYUKWBUQPZFUYHLNVBTACNBJIRCZETFPCMOMGVCWSFATKNRSQJUFKDHBTASUUVKOLEEZPQOKDSGRMNGOAUEWWQMONGXLDN");
    const char tmp_msg_0[] = {120, -128, 52, 61, -8, 46, -103, -15, -66, -49, -81, -122, -82, 64, -101, -28, 45, 21, -39, 123, 59, 87, -52, -42, 11, -118, -22, 100, 65, -34, -1, -94, 126, -62, -100, 92, 109, -36, 119, -11, -97, 114, -18, 1, 42, -46, 115, 48, -20, -10, -53, -59, 84, 97, 59, 84, -71, -88, -66, 83, -90, -9, 100, -39, -123, 61, -21, -113, 61, -124, 79, -55, -62, -97, -28, 33, -98, 83, -89, -60, -116, -98, -47, 6, -83, -92, 29, 16, -1, -101, 10, 3, -94, -119, 29, 82, -122, 56, 103, 77, -10, 25, -48, 101, -120, -50, -119, 83, 16, 50, 121, 22, 110, 49, -99, -21, 86, -120, -68, -101, 123};
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
    msg.setTimeStamp(0.8120855887059418);
    msg.setSource(29639U);
    msg.setSourceEntity(197U);
    msg.setDestination(59139U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.15950376163097912);
    msg.setSource(64044U);
    msg.setSourceEntity(248U);
    msg.setDestination(46172U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.1530573465607038);
    msg.setSource(60668U);
    msg.setSourceEntity(149U);
    msg.setDestination(18444U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.39902664213676975);
    msg.setSource(51317U);
    msg.setSourceEntity(242U);
    msg.setDestination(9073U);
    msg.setDestinationEntity(57U);
    msg.target = 4811U;
    msg.bearing = 0.9273835679051095;
    msg.elevation = 0.797772223519593;

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
    msg.setTimeStamp(0.483591055460288);
    msg.setSource(9756U);
    msg.setSourceEntity(28U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(71U);
    msg.target = 16549U;
    msg.bearing = 0.9484057900868059;
    msg.elevation = 0.9559301347786999;

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
    msg.setTimeStamp(0.36238005871619294);
    msg.setSource(12975U);
    msg.setSourceEntity(193U);
    msg.setDestination(15013U);
    msg.setDestinationEntity(84U);
    msg.target = 26099U;
    msg.bearing = 0.42083012707137424;
    msg.elevation = 0.3477607087993765;

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
    msg.setTimeStamp(0.21388184175577052);
    msg.setSource(46312U);
    msg.setSourceEntity(128U);
    msg.setDestination(27876U);
    msg.setDestinationEntity(159U);
    msg.target = 40225U;
    msg.x = 0.25767503795493496;
    msg.y = 0.487180054540456;
    msg.z = 0.19173522418518374;

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
    msg.setTimeStamp(0.26433382780750225);
    msg.setSource(23772U);
    msg.setSourceEntity(120U);
    msg.setDestination(47338U);
    msg.setDestinationEntity(5U);
    msg.target = 46008U;
    msg.x = 0.6659401990014797;
    msg.y = 0.40171529176510334;
    msg.z = 0.8681232625184031;

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
    msg.setTimeStamp(0.8143478516928214);
    msg.setSource(18601U);
    msg.setSourceEntity(152U);
    msg.setDestination(3493U);
    msg.setDestinationEntity(131U);
    msg.target = 11454U;
    msg.x = 0.6109100022515785;
    msg.y = 0.2526161945330332;
    msg.z = 0.7712515114611026;

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
    msg.setTimeStamp(0.78429068851385);
    msg.setSource(43132U);
    msg.setSourceEntity(159U);
    msg.setDestination(252U);
    msg.setDestinationEntity(219U);
    msg.target = 19684U;
    msg.lat = 0.7385510665564746;
    msg.lon = 0.7882208288925038;
    msg.z_units = 89U;
    msg.z = 0.6446074609208163;

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
    msg.setTimeStamp(0.9960794351364206);
    msg.setSource(3411U);
    msg.setSourceEntity(47U);
    msg.setDestination(61805U);
    msg.setDestinationEntity(168U);
    msg.target = 50427U;
    msg.lat = 0.32380174308444065;
    msg.lon = 0.013887668560687905;
    msg.z_units = 222U;
    msg.z = 0.42167359402979465;

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
    msg.setTimeStamp(0.058398015252815294);
    msg.setSource(41072U);
    msg.setSourceEntity(65U);
    msg.setDestination(39770U);
    msg.setDestinationEntity(208U);
    msg.target = 54977U;
    msg.lat = 0.02524256725877627;
    msg.lon = 0.8509052430952152;
    msg.z_units = 210U;
    msg.z = 0.9091931879920282;

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
    msg.setTimeStamp(0.5641028635643763);
    msg.setSource(1036U);
    msg.setSourceEntity(87U);
    msg.setDestination(64000U);
    msg.setDestinationEntity(56U);
    msg.locale.assign("PHBMRHLWDPTFEOWFIDSRRTUYWJZZTTXOTIKMGGAVEMBZDCGSQDVZNSHKUHLQATRJUKYHALZEXNJVIXSCEBWYOQYVTALISOLYEMIXFHJPAZZCOGCWKKGXUIPCHCPOZHHMDYTKNJRSECAUADKRVBNRSWMPUIAYGNDLQWGWBBNKCLOPOAMZEONPWNLVKWNJVQDJYVVIB");
    const char tmp_msg_0[] = {91, 30, 1, 102, -81, -43, -114, 113, -117, 14, -69, -111, 126, -93, 64, 107, 25, 22, -74, -25, -128, 96, -127, -103, 63, -116, 69, -75, -4, -85, 60, -31, 27, 66, -3, -1, 47, 25, 77, -23, -89, 34, 43, 51, 74, -7, 76, 13, 21, 52, -19, 34, -23, 98, -57, -8, 30, 60, -9, 50, -63, -126, 35, -65, -50, 57, -34, 34, 84, 36, -91, -92, -35, 95, 120, 41, 82, -10, -8, 44, -76, -68, -51, 27, -85, 113, -10, -10, -49, 19, 31, -18, 42, 111, -38, 60, 91, 40, -12, 64, 13, 77, -115, 66, 114, -32, -102, -99, -120};
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
    msg.setTimeStamp(0.7938075218376426);
    msg.setSource(23324U);
    msg.setSourceEntity(9U);
    msg.setDestination(541U);
    msg.setDestinationEntity(65U);
    msg.locale.assign("VOSDCOAQFRWPYFTCPEIHGEXEQJWUPDAKWJNZEEVZMNOXOTENDTOJ");
    const char tmp_msg_0[] = {8, 91, -26, 18, -36, -41, 64, -37, 26, -77, 126, 43, -115, -16, -104, -59, 124, -25, 122, -15, 63, 34, -9, 68, 42, 123, 94, -78, 87, 88, -65, 77, 7, -45, 94, -77, 82, -17, -69, -21, 83, 93, -56, -120, 119, 73, -89, -1, -103, -50, -77, 108, -42, -111, -3, 50, -46, -18, 49, -107, -128, 49, 99, 52, 97, -21, 6, 95, -89, 28, 100, 124, -60, 50, 76, -127, -65, 16, 117, 20, 12, -121, 90, -105, 28, 20, -116, -81, -89, -78, -80, -83, 11, 96, -27, 22, -127, -121, 72, 64, -5, 44, -36, 56, -122, -14, 37, 57, -67, -74, -3, 60, 116, 18, -124, 44, 71, -94, 37, -44, 123, 4, -78, -59, 11, 0, -83, -51, 48, -99, 76, 55, 51, -6};
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
    msg.setTimeStamp(0.40049875442626104);
    msg.setSource(38549U);
    msg.setSourceEntity(206U);
    msg.setDestination(40231U);
    msg.setDestinationEntity(53U);
    msg.locale.assign("RGMFXIYDKAVTOYQRCXCWIZPMETOVTSBTMZVPOJFVCKNXZVMUOSYLHHZCXWNVBFUENYHOTMLRJKEHZSPUTBOYKIBJGVIQBIREPJGGVXOMQGOXWFLDOCZHLAANVWQRLPFMDPYYTWXZRMRLAPFUDUTWPNBAMIZDEAXKIGHDHHANDSVLNXRJQGQQCUUSBNFCYDALCIUFEKJNFPKLEIJZWQWWNTDHSWMGBCUBELSSSJQXGTHJSAUA");
    const char tmp_msg_0[] = {-88, -25, 89, -14, -34, -107, -111, 64, 73, -59, -37, 20, 101, 13, 123, -84, 14, -18, -5, -78, 122, -105, -126, 36, -76, 86, 64, 101, 8, 17, -73, 60, 84, 45, -53, -20, 105, -111, 82, 34, -110, -118, 40, 5, 76, -32, -127, 65, -20, 62, -64, -107, 31, -113, 47, -81, 99, -36, 75, 103, -29, 69, 11, 39, -33, 85, -21, -108, -34, 61, 16, 46, 123, 82, 61, 114, -106, 82, 33, -125, -65, -35, 45, 29, 20, -84, 118, 107, 119, -63, 27, 126, -101, 126, 73, 83, -81, -98, 5, 4, -4, -30, -29, 7, -62, -91, -2, -88, -79, 44, -77, -18, -19, 25, 69, -10, 79, -104, -48, -63, 30, 60, 8, 7, -45, 74, -50, 98, -126, 28, -13, -4, -123, 108, 99, -32, 82, -1, -32, 73, 21, -12, 32, -82, -54, -67, 3, -37, -49, 60, -69, -89, -77, -80, 86, -52, -108, 56, -21, -2, 114, -126, -51, 50, 8, -77, 20, -73, 0, -8, -100, -90, 74, 53, 103, 93, -5, -84, -21, 68, -35, -89, -20, -27, 109, -83, 25, -4, 74, 30, 27, 12, -94, 107, -42, 116, -113};
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
    msg.setTimeStamp(0.35802785260099945);
    msg.setSource(42101U);
    msg.setSourceEntity(99U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.8235960635335864);
    msg.setSource(26613U);
    msg.setSourceEntity(19U);
    msg.setDestination(42084U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.8571925580006051);
    msg.setSource(26688U);
    msg.setSourceEntity(216U);
    msg.setDestination(49421U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.6708866388657959);
    msg.setSource(53514U);
    msg.setSourceEntity(202U);
    msg.setDestination(59461U);
    msg.setDestinationEntity(219U);
    msg.camid = 182U;
    msg.x = 52618U;
    msg.y = 52752U;

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
    msg.setTimeStamp(0.4719940761482566);
    msg.setSource(63140U);
    msg.setSourceEntity(12U);
    msg.setDestination(61019U);
    msg.setDestinationEntity(236U);
    msg.camid = 63U;
    msg.x = 62756U;
    msg.y = 3691U;

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
    msg.setTimeStamp(0.2911536877323039);
    msg.setSource(53807U);
    msg.setSourceEntity(254U);
    msg.setDestination(58661U);
    msg.setDestinationEntity(116U);
    msg.camid = 245U;
    msg.x = 62725U;
    msg.y = 50347U;

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
    msg.setTimeStamp(0.4349514884725437);
    msg.setSource(52974U);
    msg.setSourceEntity(97U);
    msg.setDestination(27990U);
    msg.setDestinationEntity(243U);
    msg.camid = 63U;
    msg.x = 35397U;
    msg.y = 54803U;

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
    msg.setTimeStamp(0.13470899244250578);
    msg.setSource(17734U);
    msg.setSourceEntity(120U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(203U);
    msg.camid = 84U;
    msg.x = 38090U;
    msg.y = 23748U;

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
    msg.setTimeStamp(0.9336407046629619);
    msg.setSource(1241U);
    msg.setSourceEntity(251U);
    msg.setDestination(18548U);
    msg.setDestinationEntity(76U);
    msg.camid = 97U;
    msg.x = 7137U;
    msg.y = 45042U;

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
    msg.setTimeStamp(0.9090794959612398);
    msg.setSource(55003U);
    msg.setSourceEntity(107U);
    msg.setDestination(54012U);
    msg.setDestinationEntity(175U);
    msg.tracking = 18U;
    msg.lat = 0.3250482878768093;
    msg.lon = 0.18587973774727773;
    msg.x = 0.24326346945553157;
    msg.y = 0.31258668357104546;
    msg.z = 0.5826109034469275;

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
    msg.setTimeStamp(0.4456430134625835);
    msg.setSource(35473U);
    msg.setSourceEntity(111U);
    msg.setDestination(59353U);
    msg.setDestinationEntity(57U);
    msg.tracking = 61U;
    msg.lat = 0.12394705407915552;
    msg.lon = 0.2923866861665684;
    msg.x = 0.3304404571702011;
    msg.y = 0.8011839350002581;
    msg.z = 0.8116390904071387;

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
    msg.setTimeStamp(0.05987102884730189);
    msg.setSource(46872U);
    msg.setSourceEntity(26U);
    msg.setDestination(32762U);
    msg.setDestinationEntity(104U);
    msg.tracking = 214U;
    msg.lat = 0.08898238755894983;
    msg.lon = 0.6008838449141789;
    msg.x = 0.5543518115509506;
    msg.y = 0.9965179549298131;
    msg.z = 0.12695561143790368;

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
    msg.setTimeStamp(0.3634169105284143);
    msg.setSource(39212U);
    msg.setSourceEntity(69U);
    msg.setDestination(5824U);
    msg.setDestinationEntity(71U);
    msg.target.assign("FQHHGRPQBEQMIYTPOFCHDHFMSAOJCYJBUOHYRQIGIICNAYCBETPGVQWQBYTGVDNRPVWEYLEXSQLZYGHMGAOKKQRBVPCSZRXUXVZMKNEIODCLXHDNFRTTJHNVKUKODIGPXJGDCLPXPMUXMPWEZFVTSDAUJVSLNTELWZUFBFXYTSQJEWHUUVEBYMDNAOGKBKGPORZONJBWUZACZWRNHJODWMTTZVBSEJAFXARWAQLCIJKSI");
    msg.lbearing = 0.2677044634082908;
    msg.lelevation = 0.9190332407196957;
    msg.bearing = 0.10984673434390524;
    msg.elevation = 0.8694349960847451;
    msg.phi = 0.45442689375397993;
    msg.theta = 0.04642224063806344;
    msg.psi = 0.13636119474456676;
    msg.accuracy = 0.005806086740262395;

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
    msg.setTimeStamp(0.6568481398413978);
    msg.setSource(45207U);
    msg.setSourceEntity(250U);
    msg.setDestination(45160U);
    msg.setDestinationEntity(152U);
    msg.target.assign("SOCUGMWHRVUIKOVWJXWENXLMNEVOWIIGJTIDWGKOTAFATSAFXYQVAQUDLBOKHBKRRYRABEFFYCJREVUIVLFNTGWIPREYHZQVGNCBKENQNPAJYZHRJZLKSFGKCYOTTGHTQTFDQAPBPILQCZPHMBXSAMMUVRLWBGQMPHUTXXSGPODUKHXZXXEDZLENTMBHWRPNQGYWLJZIULJSBQDJCMZCDJZESJIUIODCAEYWOPZVDDXYAFCSHFSPKCOKVNBR");
    msg.lbearing = 0.06293950473489118;
    msg.lelevation = 0.18722542669448183;
    msg.bearing = 0.934754687556247;
    msg.elevation = 0.5734103295484249;
    msg.phi = 0.6671444173827111;
    msg.theta = 0.5963062590851711;
    msg.psi = 0.871533211100471;
    msg.accuracy = 0.5805549197422781;

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
    msg.setTimeStamp(0.532711388910996);
    msg.setSource(41708U);
    msg.setSourceEntity(68U);
    msg.setDestination(26726U);
    msg.setDestinationEntity(51U);
    msg.target.assign("PYJVEFAYWHSINSJHZYZBUWGTBJBVUAZHUMCOYXXMGDS");
    msg.lbearing = 0.6542865768535677;
    msg.lelevation = 0.8161826525943863;
    msg.bearing = 0.3088549362583589;
    msg.elevation = 0.3542474886569398;
    msg.phi = 0.11210721997649054;
    msg.theta = 0.6839540001713422;
    msg.psi = 0.15529838840060228;
    msg.accuracy = 0.016475823191271277;

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
    msg.setTimeStamp(0.3199260032338589);
    msg.setSource(53534U);
    msg.setSourceEntity(140U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(84U);
    msg.target.assign("FOIZFJLIKAZGUBJSILGHFCEVORBXOHAIZBMYSJFQCRWAEGKTXNHFAXGNLZACDZDIXOZVUWQFAGRWXTDKBKBANUOQKQCURMJNYCSBWTCGIWSRPJWTFPWYJOXRURYYXAPTRDSZMHJPMIYVSHLSPWYMHEWHNT");
    msg.x = 0.5486319735166966;
    msg.y = 0.6249339165233462;
    msg.z = 0.13016595283403787;
    msg.n = 0.24162308869404447;
    msg.e = 0.25312608471729947;
    msg.d = 0.8358752055764364;
    msg.phi = 0.4461707482709595;
    msg.theta = 0.5353569257817146;
    msg.psi = 0.5091760782866298;
    msg.accuracy = 0.4874699023770881;

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
    msg.setTimeStamp(0.7069974503615136);
    msg.setSource(32548U);
    msg.setSourceEntity(110U);
    msg.setDestination(2286U);
    msg.setDestinationEntity(6U);
    msg.target.assign("FZMYZHQMFZHLNMEGPTIPITYKUWFCNMXGORINUJKNWGWTACDAHHYGOMDMPSZQFVREEAIAEKXDFCVTZRKCWUSMJBSBTSLCHTALPLVKYVSCBPNCULNVHSGQNJZR");
    msg.x = 0.6468146254492171;
    msg.y = 0.0600107041376704;
    msg.z = 0.038880404338425434;
    msg.n = 0.9370382508936851;
    msg.e = 0.3160294933076834;
    msg.d = 0.7161342455499187;
    msg.phi = 0.09086906435619924;
    msg.theta = 0.9447660039257131;
    msg.psi = 0.7456108028289654;
    msg.accuracy = 0.8936793311189403;

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
    msg.setTimeStamp(0.13843149963948886);
    msg.setSource(18268U);
    msg.setSourceEntity(83U);
    msg.setDestination(15800U);
    msg.setDestinationEntity(241U);
    msg.target.assign("AOIGSVHDPOJHAPIRTEXUEBBVCUCPBCFNDYEFLQFTHWQTRFDIAIUPRQOZENAORMSZZHIQLDHHOCWADLRZWFBQHXTANOIMMGYPDYSRXNTMGXQNBGJDZNELWVKXXJDGAFWTKC");
    msg.x = 0.2791212502130328;
    msg.y = 0.8126926768830978;
    msg.z = 0.8292768856130092;
    msg.n = 0.9280889743720434;
    msg.e = 0.5778903040522883;
    msg.d = 0.632288003909265;
    msg.phi = 0.6073273358811866;
    msg.theta = 0.04599952248876027;
    msg.psi = 0.8923855884059945;
    msg.accuracy = 0.1915823182884211;

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
    msg.setTimeStamp(0.3511549508232944);
    msg.setSource(26690U);
    msg.setSourceEntity(65U);
    msg.setDestination(63749U);
    msg.setDestinationEntity(96U);
    msg.target.assign("YKUAPRNSPQVFJEPHWXPOJZCZIQOTZFKXVPEMLNLQAM");
    msg.lat = 0.0752947217573181;
    msg.lon = 0.5006290338379263;
    msg.z_units = 44U;
    msg.z = 0.9337967999100988;
    msg.accuracy = 0.31452386522961784;

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
    msg.setTimeStamp(0.1970366529092068);
    msg.setSource(23418U);
    msg.setSourceEntity(170U);
    msg.setDestination(37727U);
    msg.setDestinationEntity(212U);
    msg.target.assign("ZTGWNHXCCQTJGFSHVTHFTETOARSIQLYNNUPIZRDGUHIUQRCMMWNOANCXOFLHTEPXCPFDSQRDSMJXMGIGBDXPSIFFDZIBTZXVPBXTDRRVWGLUBNAWEJBKZYQEKQLKKOFZHAJSJRLVYOYKIKTRHFOZUZLGQHWIOUVQSEJQNYBEMHEHTGCPYODAPBFVIEUAACJKMQYLEWROYMNGPBJVWMZNC");
    msg.lat = 0.6027906205721002;
    msg.lon = 0.7269500601667429;
    msg.z_units = 93U;
    msg.z = 0.6394683476525045;
    msg.accuracy = 0.6491184808685525;

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
    msg.setTimeStamp(0.6240116126636472);
    msg.setSource(51919U);
    msg.setSourceEntity(63U);
    msg.setDestination(11545U);
    msg.setDestinationEntity(208U);
    msg.target.assign("AHKCNBGLHKWDARKGYEDDMUKYBAWJXUOQKRBGIUVTVQQUBIHSXXIZMDWVWDWITEALMTZJQCGXGXDCRPGYRHH");
    msg.lat = 0.8597379139614876;
    msg.lon = 0.8199052054545641;
    msg.z_units = 158U;
    msg.z = 0.44186781431347166;
    msg.accuracy = 0.8984063716451129;

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
    msg.setTimeStamp(0.49585236541910027);
    msg.setSource(11625U);
    msg.setSourceEntity(81U);
    msg.setDestination(53763U);
    msg.setDestinationEntity(104U);
    msg.name.assign("VLIQPEIKEPMWKMUKJHFWCDOLJEYUBGBCSWMODGEJUSFGQIMRGHNHYEYXDKMSYRTDKTSXTYMSVUTDNRLULPVABHGAQXSXHZOBEYLSTTZQNFYERCPCLGCZCWFNMPBCEYNRQEMMTSVAIJCASWJVNOWFPVJLTPIXKYFOXUCIFMOSLGKAADDAEWRKUAXBDOBXBKZRFNJHNIPVZHAGTCHOPIBJWWGGIURQJFLIJLDTHWOFQNRVQAQXN");
    msg.lat = 0.9401455038589982;
    msg.lon = 0.5485028405817778;
    msg.z = 0.5512540621344268;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.22994243945470716);
    msg.setSource(4431U);
    msg.setSourceEntity(161U);
    msg.setDestination(44676U);
    msg.setDestinationEntity(36U);
    msg.name.assign("VUHAOZEJDJKSUWSIBDKCOHVZMMDUCKG");
    msg.lat = 0.4958114308521008;
    msg.lon = 0.8135315089482942;
    msg.z = 0.6640428049604966;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.9897480835275989);
    msg.setSource(25741U);
    msg.setSourceEntity(69U);
    msg.setDestination(53348U);
    msg.setDestinationEntity(223U);
    msg.name.assign("GLSHBWVZJQHDJSZCJTMLANRHLTKDMQMVDCZTPNPJDFWJYPOXWKHQIZVZYXSLHG");
    msg.lat = 0.07428971249908178;
    msg.lon = 0.493216286211114;
    msg.z = 0.6148404688697542;
    msg.z_units = 7U;

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
    msg.setTimeStamp(0.18424238988330466);
    msg.setSource(14905U);
    msg.setSourceEntity(17U);
    msg.setDestination(34615U);
    msg.setDestinationEntity(244U);
    msg.op = 88U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BHOXFWYTECOIRVKQGYZRFHOTSEVVSUWSTMYSAHXTZLAAMNMLWDGBPVSGOXTVNAWELKBYLXXRCWFDYWDFXHNZIJKDMOPHFUEDYNBNRTOBDHJPAUXQGQSFZKSUEQIPZPKTFAVPWZKGPXCYTBVGULSDRIWWJDIGUVYZQBPXPJNFJFLVQRSOTLLVIBIMQCLJKBFZJUXGHCPEICCRRMDIEIHCMHOJRCAUAEZMKAQONGQJYS");
    tmp_msg_0.lat = 0.5657159944343265;
    tmp_msg_0.lon = 0.10022051355762573;
    tmp_msg_0.z = 0.2030626665462243;
    tmp_msg_0.z_units = 234U;
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
    msg.setTimeStamp(0.7627576324367998);
    msg.setSource(15888U);
    msg.setSourceEntity(154U);
    msg.setDestination(38312U);
    msg.setDestinationEntity(221U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.9073587751789327);
    msg.setSource(56300U);
    msg.setSourceEntity(168U);
    msg.setDestination(40795U);
    msg.setDestinationEntity(50U);
    msg.op = 132U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ORGSPVZFFDTJYOYOYARGMJKVALWIJSNQLGUAONHJFGKDYJWQWDQWRVBVXQVTWKLUYBDLOVYHKNUNXNXSWHEBSTHGOMRSBUTXAWNECLGPTYQCXICMGPPSTICIZSREOUTCTXPJRHBVKDQNRIQQSKODEF");
    tmp_msg_0.lat = 0.42026528514793526;
    tmp_msg_0.lon = 0.6937196828625891;
    tmp_msg_0.z = 0.04438890088533065;
    tmp_msg_0.z_units = 47U;
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
    msg.setTimeStamp(0.513156340521758);
    msg.setSource(32755U);
    msg.setSourceEntity(44U);
    msg.setDestination(42774U);
    msg.setDestinationEntity(220U);
    msg.value = 0.04378935677042006;
    msg.type = 228U;

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
    msg.setTimeStamp(0.3978766086279941);
    msg.setSource(39572U);
    msg.setSourceEntity(3U);
    msg.setDestination(14645U);
    msg.setDestinationEntity(222U);
    msg.value = 0.010417402745196314;
    msg.type = 192U;

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
    msg.setTimeStamp(0.7782976822448565);
    msg.setSource(14140U);
    msg.setSourceEntity(235U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(190U);
    msg.value = 0.06853029041130265;
    msg.type = 243U;

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
    msg.setTimeStamp(0.09965632938075564);
    msg.setSource(509U);
    msg.setSourceEntity(79U);
    msg.setDestination(31750U);
    msg.setDestinationEntity(26U);
    msg.value = 0.7047852868421072;

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
    msg.setTimeStamp(0.08625258552916049);
    msg.setSource(32317U);
    msg.setSourceEntity(131U);
    msg.setDestination(53332U);
    msg.setDestinationEntity(228U);
    msg.value = 0.04929779519637845;

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
    msg.setTimeStamp(0.7465908887089344);
    msg.setSource(46154U);
    msg.setSourceEntity(204U);
    msg.setDestination(61184U);
    msg.setDestinationEntity(109U);
    msg.value = 0.5514106864594209;

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
    msg.setTimeStamp(0.4345953089043224);
    msg.setSource(5058U);
    msg.setSourceEntity(80U);
    msg.setDestination(19705U);
    msg.setDestinationEntity(127U);
    msg.timestamp_last_service = 0.3071119969888273;
    msg.time_next_service = 0.500865664665635;
    msg.time_motor_next_service = 0.7568340795864931;
    msg.time_idle_ground = 0.15635968593502425;
    msg.time_idle_air = 0.2844659275585578;
    msg.time_idle_water = 0.45926618300377986;
    msg.time_idle_underwater = 0.6270993492948492;
    msg.time_idle_unknown = 0.7261165650180769;
    msg.time_motor_ground = 0.005262928351924656;
    msg.time_motor_air = 0.9418531648133107;
    msg.time_motor_water = 0.2706422063261603;
    msg.time_motor_underwater = 0.6666403012851155;
    msg.time_motor_unknown = 0.1670749243306281;
    msg.rpm_min = -3620;
    msg.rpm_max = -11339;
    msg.depth_max = 0.8056673283826604;

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
    msg.setTimeStamp(0.11550158723995696);
    msg.setSource(30075U);
    msg.setSourceEntity(82U);
    msg.setDestination(29421U);
    msg.setDestinationEntity(124U);
    msg.timestamp_last_service = 0.7557328103157925;
    msg.time_next_service = 0.6481685429055521;
    msg.time_motor_next_service = 0.9190696125563315;
    msg.time_idle_ground = 0.7497895804479695;
    msg.time_idle_air = 0.16233674879874982;
    msg.time_idle_water = 0.8186553872899412;
    msg.time_idle_underwater = 0.6081027006815009;
    msg.time_idle_unknown = 0.7552118312348046;
    msg.time_motor_ground = 0.0562371382369391;
    msg.time_motor_air = 0.3085335434296528;
    msg.time_motor_water = 0.27327519455163907;
    msg.time_motor_underwater = 0.1418243437606942;
    msg.time_motor_unknown = 0.32016793883458095;
    msg.rpm_min = -26549;
    msg.rpm_max = -16393;
    msg.depth_max = 0.13931372419739352;

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
    msg.setTimeStamp(0.9861698346817276);
    msg.setSource(18214U);
    msg.setSourceEntity(46U);
    msg.setDestination(9579U);
    msg.setDestinationEntity(240U);
    msg.timestamp_last_service = 0.9209840547868666;
    msg.time_next_service = 0.2719889232493934;
    msg.time_motor_next_service = 0.05964039954316891;
    msg.time_idle_ground = 0.572883367350086;
    msg.time_idle_air = 0.219185227007206;
    msg.time_idle_water = 0.63775050274855;
    msg.time_idle_underwater = 0.7153943041746892;
    msg.time_idle_unknown = 0.6830304206591944;
    msg.time_motor_ground = 0.0932472646980056;
    msg.time_motor_air = 0.6032812072893179;
    msg.time_motor_water = 0.9812302010403724;
    msg.time_motor_underwater = 0.7127546594326564;
    msg.time_motor_unknown = 0.7259442279222761;
    msg.rpm_min = -21612;
    msg.rpm_max = 17861;
    msg.depth_max = 0.7140554874634416;

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
    msg.setTimeStamp(0.5166204203109249);
    msg.setSource(36437U);
    msg.setSourceEntity(130U);
    msg.setDestination(48854U);
    msg.setDestinationEntity(46U);
    msg.severity = 120U;
    msg.text.assign("ZBVFYENXYISNSBXFNSINSFZZVBFPPKAGHCRDFLPHIGOYYYDAKBNOVHKEKNYWQSKTARHMDNKOHUTWJDJELJOERVLIDQURPTVSMCZLWFJQO");

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
    msg.setTimeStamp(0.23282957604454924);
    msg.setSource(51288U);
    msg.setSourceEntity(139U);
    msg.setDestination(9954U);
    msg.setDestinationEntity(51U);
    msg.severity = 248U;
    msg.text.assign("EQOWKPCWIELILWMOATDAJTKFSNFZHIICQCDXFSPBXJZSVGJMBFIFDRONEGCHXESWCVXIPHBBTMBRSRFKYPHEUNHCUCPKRMCYTWMPJELOZZRBIYYQHJUJYGHNIQVAGKTTZAORXDOLPQCTZFBUNJJMIWQZVKPYHJSYRSXVGLAXDKZVLGNNZJNVYDWAVNQQGSEOFDXWHBAUUOYHOMQURFNVXWZMWKBUAEUTBISAT");

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
    msg.setTimeStamp(0.0546071821679881);
    msg.setSource(60505U);
    msg.setSourceEntity(83U);
    msg.setDestination(36840U);
    msg.setDestinationEntity(77U);
    msg.severity = 70U;
    msg.text.assign("GXLTNCDIZQDNRDDFOLWCPEPWRSJLFHHLZPMGVWSLBVFODUOVEHTHWXMKWWGYFARQWGGVHTUXLOPVWGTIIYEHVYUCCJCPCSZJWQDVLSRZJGRXQIFSNQNZKLSYXSAHDYZZIYTAUMXIREUKKUKUGBLONMHBKPOEMBUGROJXVZJKMIPSHBKDZKSUPAQCTVEAFEUTYMVNYMRJBMHGFQEXBANYZQAJNQWXFJTNNTXEKBPRSAYOBOPB");

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
    msg.setTimeStamp(0.5986771226649079);
    msg.setSource(29273U);
    msg.setSourceEntity(229U);
    msg.setDestination(26479U);
    msg.setDestinationEntity(98U);
    msg.channel = -82;
    msg.value = -437138251;
    msg.gain = 198U;

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
    msg.setTimeStamp(0.03413806308845102);
    msg.setSource(28613U);
    msg.setSourceEntity(35U);
    msg.setDestination(16158U);
    msg.setDestinationEntity(243U);
    msg.channel = -108;
    msg.value = -241960653;
    msg.gain = 135U;

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
    msg.setTimeStamp(0.9910852084753266);
    msg.setSource(46959U);
    msg.setSourceEntity(18U);
    msg.setDestination(22481U);
    msg.setDestinationEntity(34U);
    msg.channel = 24;
    msg.value = 27003066;
    msg.gain = 16U;

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
    msg.setTimeStamp(0.6629590214908849);
    msg.setSource(11989U);
    msg.setSourceEntity(85U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(199U);
    msg.ch01 = 0.584274583944878;
    msg.ch02 = 0.29168450677599256;
    msg.ch03 = 0.2011129042770201;
    msg.ch04 = 0.9175620133950068;
    msg.ch05 = 0.6992094999508294;
    msg.ch06 = 0.190676562224406;
    msg.ch07 = 0.20399067874207766;
    msg.ch08 = 0.8442087982400346;
    msg.ch09 = 0.19709509912347833;
    msg.ch10 = 0.38455748493008124;
    msg.ch11 = 0.3261927428771326;
    msg.ch12 = 0.30685238552266925;
    msg.ch13 = 0.04368446970378892;
    msg.ch14 = 0.8351591986364815;
    msg.ch15 = 0.10417470132242213;
    msg.ch16 = 0.4836175935084893;

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
    msg.setTimeStamp(0.8634507441769695);
    msg.setSource(35777U);
    msg.setSourceEntity(35U);
    msg.setDestination(46900U);
    msg.setDestinationEntity(35U);
    msg.ch01 = 0.25122142564800853;
    msg.ch02 = 0.6820820261980327;
    msg.ch03 = 0.11325400215111958;
    msg.ch04 = 0.16654102834550233;
    msg.ch05 = 0.10743312356829404;
    msg.ch06 = 0.323117423842221;
    msg.ch07 = 0.017158101664799363;
    msg.ch08 = 0.8348603830241019;
    msg.ch09 = 0.7140768974021436;
    msg.ch10 = 0.4912947171879146;
    msg.ch11 = 0.977806163856114;
    msg.ch12 = 0.6764363631721543;
    msg.ch13 = 0.3629342254756347;
    msg.ch14 = 0.5439023795477972;
    msg.ch15 = 0.9717092838562033;
    msg.ch16 = 0.11418339314724879;

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
    msg.setTimeStamp(0.16903204472983513);
    msg.setSource(62505U);
    msg.setSourceEntity(46U);
    msg.setDestination(1779U);
    msg.setDestinationEntity(25U);
    msg.ch01 = 0.5832935767693409;
    msg.ch02 = 0.9926417312683339;
    msg.ch03 = 0.17111183772538674;
    msg.ch04 = 0.5926242135391787;
    msg.ch05 = 0.819228236716438;
    msg.ch06 = 0.22715532726625687;
    msg.ch07 = 0.2988709608764134;
    msg.ch08 = 0.1534193721674204;
    msg.ch09 = 0.16976547748021542;
    msg.ch10 = 0.18319989032036954;
    msg.ch11 = 0.2585260713161376;
    msg.ch12 = 0.5830884804713948;
    msg.ch13 = 0.7834152913015815;
    msg.ch14 = 0.6394502382854245;
    msg.ch15 = 0.30937051858182796;
    msg.ch16 = 0.9492385316605904;

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
    msg.setTimeStamp(0.993620154477161);
    msg.setSource(8592U);
    msg.setSourceEntity(167U);
    msg.setDestination(34947U);
    msg.setDestinationEntity(169U);
    msg.op = 211U;
    msg.lat = 0.24120161134323936;
    msg.lon = 0.5059329320092824;
    msg.height = 0.8811673598150761;
    msg.depth = 0.9145663337205829;
    msg.alt = 0.8898565361669137;

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
    msg.setTimeStamp(0.2753712747437683);
    msg.setSource(27805U);
    msg.setSourceEntity(107U);
    msg.setDestination(64138U);
    msg.setDestinationEntity(198U);
    msg.op = 229U;
    msg.lat = 0.14101193902095777;
    msg.lon = 0.3240386938150993;
    msg.height = 0.4864003595132034;
    msg.depth = 0.5918117955147536;
    msg.alt = 0.814645615168762;

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
    msg.setTimeStamp(0.9550776026227807);
    msg.setSource(32639U);
    msg.setSourceEntity(116U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(100U);
    msg.op = 51U;
    msg.lat = 0.8391028132554927;
    msg.lon = 0.5621077063813663;
    msg.height = 0.14151767688820138;
    msg.depth = 0.6671742447599366;
    msg.alt = 0.15437824984753568;

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
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.4935911597838203);
    msg.setSource(42883U);
    msg.setSourceEntity(236U);
    msg.setDestination(56878U);
    msg.setDestinationEntity(72U);
    msg.req_id = 40182U;
    msg.type = 19U;
    msg.init = 3862694279U;
    msg.end = 3065086028U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.6519968258831091);
    msg.setSource(5205U);
    msg.setSourceEntity(248U);
    msg.setDestination(53041U);
    msg.setDestinationEntity(48U);
    msg.req_id = 21086U;
    msg.type = 27U;
    msg.init = 2974730328U;
    msg.end = 4142435082U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.6918880086858987);
    msg.setSource(11845U);
    msg.setSourceEntity(159U);
    msg.setDestination(61142U);
    msg.setDestinationEntity(174U);
    msg.req_id = 3083U;
    msg.type = 76U;
    msg.init = 4284041124U;
    msg.end = 2341173042U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.47155813635515553);
    msg.setSource(59193U);
    msg.setSourceEntity(17U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(112U);
    msg.req_id = 6079U;
    msg.type = 18U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("AYCOIPUZJPNJBBZEYKMPMDMYDCTLLQXWFJFVSRUNLVSYSV");
    tmp_msg_0.frag_number = 62124U;
    tmp_msg_0.num_frags = 39055U;
    const char tmp_tmp_msg_0_0[] = {-57, -46, -57, 24, 76, -15, -89, 54, -54, -74, -89, 4, 33, -79, -109, -113, 50, -119, 46, -84, 59, 23, -38, -22, 103, -88, -91, -75, 102, 103, -27, -56, 58, -68, 117, 47, 83, 5, -106, 61, -118, 34, 116};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.4177584816006885);
    msg.setSource(10182U);
    msg.setSourceEntity(77U);
    msg.setDestination(20229U);
    msg.setDestinationEntity(147U);
    msg.req_id = 52284U;
    msg.type = 112U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("PNSTONNBMJJAVRKHTIMSGUVQOUUOBFVFTJHBGMAFAQQZDDSDGORKZWXLFN");
    tmp_msg_0.frag_number = 27100U;
    tmp_msg_0.num_frags = 20305U;
    const char tmp_tmp_msg_0_0[] = {-124, -123, 20, -102, 99, 82, 119, -27, 48, 33, -47, 83, 24, -56, 104, -125, -68, 52, -87, -37, 79, 96, -88, 50, -38, -110, 99, -81, -1, 93, -29, -50, 96, -47, -4, 20, -46, 81, 51, 61, -56, -56, -34, -60, -65, -102, 49, 18, 98, -24, -85, 18, 77, 22, -24, 82, 10, -65, 11, -12, -76, 34, -118, -32, 8, 56, 25, -85, -116, 30, 32, -118, -38, -34, 39, -86, 19, -54, 22, 41, 97, -25, 48, 35, 87, -117, -68, 40, 23, 76, 1, -73, -49, 14, -16, 25, -47, 26, 40, -100, -79, -38, -98, 15, -75, 85, -10, 109, 121, -49, -31, -99, -6, 56, 50, -11, 57, 115, -106, -124, 7, -26, -88, 25, 98, -8, 114, -81, -101, 32, -38, 81, 119, -28, 122, -15, -72, 67, -28, 43, 42, -56, 39, -2, 106, -117, -97, 70, 117, -45, -45, 116, 123, 12, -58, 43, 18, -64, 43, -105, 126, -15, 24, 21, -12, -59, -19, -124, 68, 13, 57, -79, -66, -55, 12, 56, 110, 67, -18, -49, -98};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.8401125010922763);
    msg.setSource(50109U);
    msg.setSourceEntity(14U);
    msg.setDestination(58530U);
    msg.setDestinationEntity(67U);
    msg.req_id = 34602U;
    msg.type = 35U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("KCVMOBNLRZTHGEQMVWIDZUJFBSFJBJFTXNIQHXOUDLGAPYITUOEKNUXYWECIKIWSLWJZOEITNPWFQHBSSZGZZGQDEPFEELFULERTFXOQTHJRCKCQDUILLPSUDGKDBTFZRXKCJDQNMUPFNEBQDPHWRRGWXXVBOMTEAHCAPHCGISKOGINXYAXLYMCMOFMRPVNUVWVWICAZMSKCZASSDVSHPVLBVKJYPMYDQOYR");
    tmp_msg_0.frag_number = 28164U;
    tmp_msg_0.num_frags = 14236U;
    const char tmp_tmp_msg_0_0[] = {77, 65, -118, 26, 13, 73, -73, 28, 106, 44, 110, 39, -114, -82, -79, -21, 81, 94, 14, 0, 98, -18, 37, -56, 74, 32, 53, -95, -48, -65, -105, 63, 77, -12, 15, -48, -9, -6, -34, 3, 6, 42, -46, -21, 119, -91, 75, -128, 91, 33, -70, -94, 102, 22, 72, -85, -35, 83, 53, 85, 123, 51, 31, -37, -104, 110, -51, 17, -93, 123, -52, 87, -86, 41, 49, -77, 63, -56, -17, -124, -67, 110, -6, -51, 37, -30, -76, -41, -54, 103, -38, -27, -44, 93, -114, 14, 26, -48, 117, 20, -18, -29, -92, -84, -55, 109, -46, -122, -53, 111, 123, 7, 24, 101, -62, -124, -120, -9, 46, -105, 10, 61, 108, -9, -77, -54, 118, -121, -122, 76, -112, -45, 78, 65, -10, 43, -65, 2, -65, 13, -35, -111, 70, -24, -15, 83, 39, -73, 93, 65, -91, -120, -79, -79, -30, 76, 16, -15, 90, 113, 125, 46, -61, -27, -86, -128, 76, -3, -126, -27, -17, -25, -99, 85, 94, 42, -49, -19, -49, -73, -17, 86, 14, -77, 19, -117, -91, -117, -54, -16, 122, -98, 104, -33, 116, 37, 62, 83, 96, 112, -53, 122, 115, -48, 76, -81, 64, -45, 90, 96, -89, 46, 93, 115, 54, -69, 14, 59, 38, -22, 84, 52, -15, 124, 48, 99, 14, 42, -12, -81, 64};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.01889868467776279);
    msg.setSource(7675U);
    msg.setSourceEntity(97U);
    msg.setDestination(13555U);
    msg.setDestinationEntity(35U);
    msg.id.assign("BGYLOYTFIFGSPUKAOKQDZALSWBSOPNBQAHUUUIUGAFFQLJAOYRPHXVFDGVNKZGMIMUIKQDBNMWRTPMYAGYEQQBJSJNGVZFISODATREADCTHHRMDEPJCBZVRMYQWLWMUGLJWCBOELBCC");
    msg.frag_number = 54840U;
    msg.num_frags = 39228U;
    const char tmp_msg_0[] = {43, 23, -123, 87, -73, 79, 54, -110, -45, -3, -107, -29, -74, 89, -123, -68, -51, 117, -85, 2, -72, 63, -124, 97, 15, -4, 113, 121, -70, 104, 106, -80, 79, -28, -56, 0, 19, 27, 73, 9, 48, -64, -12, -20, -93, -28, -28, -33, -40, 18, -74, -92, -18, -57, -67, 42, 104, 104, 51, 102, 61, 73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.3312847482198853);
    msg.setSource(53469U);
    msg.setSourceEntity(46U);
    msg.setDestination(16899U);
    msg.setDestinationEntity(205U);
    msg.id.assign("JADYOUXETDRVIQUWKSRDVUOUFSWHXNRFMCUX");
    msg.frag_number = 30457U;
    msg.num_frags = 59709U;
    const char tmp_msg_0[] = {-71, 14, -52, -52, -80, -7, 94, -22, 71, 39, 88, 47, 18, 100, -94, 61, 75, -54, 35, -24, -64, 104, -61, 10, 34, 101, -113, -20, 3, 108, -17, -69, -98, 2, -57, 14, 79, -97, -110, 116, -38, -59, -13, 108, 60, 111, 47, -73, -7, 90, -11, 9, 56, -8, 47, 54, -27, 24, 102, -105, 111, 15, 21, 113, -97, -53, -21, 67, -34, 107, -119, 1, 64, 66, -56, 70, -103, -94, 21, -29, 102, -56, 18, 31, 7, -18, 101, 97, 31, -120, 68, 61, 116, 71, -72, 76, 108, -49, -87, -38, 65, 36, 45, -61, -112, -126, -109, 83, -26, 73, 73, -52, -79, -122, -45, 120, -1, -90, -30, -75, 71, 107, 45, 16, -20, 99, -55, 49, -42, -56, 110, 84, -105, 54, 5, -46, -86, -108, 126, 70, -118, -19, 68, -77, 57, 64, -79, 87, -88, -109, 5, 27, -69, 87, -101, -30, -11, -18, 47, -26, -1, 0, -112, -90, 47, 31, 82, 108, -49, 74, 125, 19, -112, 8, -125, -5, 91, 11, -45, 87, -14, -18, -121, -67, 14, -51, 105, -101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.1571200005154767);
    msg.setSource(44684U);
    msg.setSourceEntity(113U);
    msg.setDestination(35232U);
    msg.setDestinationEntity(233U);
    msg.id.assign("TTHQRYYAIBXTCAKBVOGFRXJSWMQNWIRQHKQBKQQNOFHNSIYAKHSDGSZPHFLFMRIDXWOINXGBALJSMLCWUYEZEUCOYAXIIUEPYVUZABZMMKLHCLPTVHEYMDSJMINXTLTUMSLYSXDUPUKMNAZGRKWVQTWOELROGPN");
    msg.frag_number = 59147U;
    msg.num_frags = 57115U;
    const char tmp_msg_0[] = {-124, -31, 69, -89, -56, 58, -125, -112, -46, -97, 56, -120, -24, -56, -80, -48, 111, 23, -80, 10, 60, 95, -32, 83, 24, 28, 23, 63, -32, 107, -37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #2", msg == *msg_d);
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
    msg.setTimeStamp(0.06016266636712053);
    msg.setSource(34180U);
    msg.setSourceEntity(251U);
    msg.setDestination(29440U);
    msg.setDestinationEntity(157U);
    msg.nbeams = 156U;
    msg.ncells = 32U;
    msg.coord_sys = 203U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.26482645978423003;
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
    msg.setTimeStamp(0.5516958133665343);
    msg.setSource(44721U);
    msg.setSourceEntity(174U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(249U);
    msg.nbeams = 43U;
    msg.ncells = 241U;
    msg.coord_sys = 196U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.42562525751133806;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.32681226255958107);
    msg.setSource(60198U);
    msg.setSourceEntity(92U);
    msg.setDestination(10290U);
    msg.setDestinationEntity(136U);
    msg.nbeams = 189U;
    msg.ncells = 135U;
    msg.coord_sys = 243U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.10422657001590052;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.16729398629735281;
    tmp_tmp_msg_0_0.amp = 0.7550232997573949;
    tmp_tmp_msg_0_0.cor = 52U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.747027115204935);
    msg.setSource(35320U);
    msg.setSourceEntity(209U);
    msg.setDestination(49904U);
    msg.setDestinationEntity(107U);
    msg.cell_position = 0.7311574965697903;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6949314200651228;
    tmp_msg_0.amp = 0.39106801866678875;
    tmp_msg_0.cor = 28U;
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
    msg.setTimeStamp(0.8804422523087084);
    msg.setSource(9692U);
    msg.setSourceEntity(124U);
    msg.setDestination(13774U);
    msg.setDestinationEntity(101U);
    msg.cell_position = 0.7066162195196991;

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
    msg.setTimeStamp(0.3788306625906911);
    msg.setSource(39709U);
    msg.setSourceEntity(229U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(57U);
    msg.cell_position = 0.5704483420669477;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.192402774754715;
    tmp_msg_0.amp = 0.7448419764063539;
    tmp_msg_0.cor = 210U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5828779181741046);
    msg.setSource(16095U);
    msg.setSourceEntity(32U);
    msg.setDestination(31594U);
    msg.setDestinationEntity(129U);
    msg.vel = 0.002780523129666035;
    msg.amp = 0.4179692479793502;
    msg.cor = 166U;

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
    msg.setTimeStamp(0.49025392753681873);
    msg.setSource(9247U);
    msg.setSourceEntity(26U);
    msg.setDestination(57355U);
    msg.setDestinationEntity(234U);
    msg.vel = 0.5428164234279906;
    msg.amp = 0.7280977524944042;
    msg.cor = 160U;

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
    msg.setTimeStamp(0.32347576299875735);
    msg.setSource(3910U);
    msg.setSourceEntity(252U);
    msg.setDestination(39981U);
    msg.setDestinationEntity(48U);
    msg.vel = 0.705344790621435;
    msg.amp = 0.2962713981896521;
    msg.cor = 137U;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.050799497531867965);
    msg.setSource(33207U);
    msg.setSourceEntity(98U);
    msg.setDestination(37429U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9088940046077949;

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
    msg.setTimeStamp(0.16688033283508374);
    msg.setSource(35713U);
    msg.setSourceEntity(112U);
    msg.setDestination(56345U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9491484644608761;

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
    msg.setTimeStamp(0.38109957492969626);
    msg.setSource(59460U);
    msg.setSourceEntity(80U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(117U);
    msg.value = 0.987146821182008;

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

  return test.getReturnValue();
}
